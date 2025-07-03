#include <memory>
#include <chrono>
#include <rclcpp/rclcpp.hpp>
#include <visualization_msgs/msg/marker.hpp>
#include <visualization_msgs/msg/marker_array.hpp>
#include "Leap.h"
#include "tf2/LinearMath/Quaternion.h"
#include <tf2/LinearMath/Matrix3x3.h>

using namespace Leap;
using namespace std::chrono_literals;

class LeapListener : public Listener {
public:
  LeapListener(
    rclcpp::Publisher<visualization_msgs::msg::MarkerArray>::SharedPtr marker_pub)
    : marker_publisher_(marker_pub),
      last_publish_time_(rclcpp::Clock().now()) {}

      void onFrame(const Controller& controller) override {
        rclcpp::Time now = rclcpp::Clock().now();
        if ((now - last_publish_time_).seconds() < 0.05) return;  // max 20 Hz
        last_publish_time_ = now;
      
        const Frame frame = controller.frame();
        if (frame.hands().isEmpty()) return;
      
        for (const Hand& hand : frame.hands()) {
          if (!hand.isRight()) continue;
      
          // === MarkerArray initialisieren ===
          visualization_msgs::msg::MarkerArray marker_array;
          int marker_id = 0;
      
          // === Finger als Pfeile ===
          for (int i = 0; i <= 3; ++i) {
            const Finger& finger = hand.fingers()[i];
            for (int bone_type = 0; bone_type < 4; ++bone_type) {
              const Bone& bone = finger.bone(static_cast<Bone::Type>(bone_type));
      
              visualization_msgs::msg::Marker arrow;
              arrow.header.stamp = now;
              arrow.header.frame_id = "leap_frame";
              arrow.ns = "finger_arrow_" + std::to_string(i);
              arrow.id = marker_id++;
              arrow.type = visualization_msgs::msg::Marker::ARROW;
              arrow.action = visualization_msgs::msg::Marker::ADD;
      
              arrow.scale.x = 0.005;
              arrow.scale.y = 0.01;
              arrow.scale.z = 0.02;
      
              arrow.color.r = 0.9;
              arrow.color.g = 0.3 + 0.2 * i;
              arrow.color.b = 1.0 - 0.2 * i;
              arrow.color.a = 1.0;
      
              geometry_msgs::msg::Point start, end;
              start.x = bone.prevJoint().x / 1000.0;
              start.y = bone.prevJoint().y / 1000.0;
              start.z = bone.prevJoint().z / 1000.0;
              end.x = bone.nextJoint().x / 1000.0;
              end.y = bone.nextJoint().y / 1000.0;
              end.z = bone.nextJoint().z / 1000.0;
      
              arrow.points.push_back(start);
              arrow.points.push_back(end);
      
              marker_array.markers.push_back(arrow);
            }
          }
      
          // === Handachsen (X/Y/Z) als Pfeile vom Ursprung ===
          Leap::Vector palm_pos = hand.palmPosition();
          Leap::Matrix basis = hand.basis();
      
          geometry_msgs::msg::Point origin;
          origin.x = palm_pos.x / 1000.0;
          origin.y = palm_pos.y / 1000.0;
          origin.z = palm_pos.z / 1000.0;
      
          struct AxisSpec {
            Leap::Vector dir;
            std::string ns;
            std_msgs::msg::ColorRGBA color;
          };
      
          std::vector<AxisSpec> axes = {
            {basis.xBasis, "x_axis", [] { std_msgs::msg::ColorRGBA c; c.r = 1.0; c.a = 1.0; return c; }()},
            {basis.yBasis, "y_axis", [] { std_msgs::msg::ColorRGBA c; c.g = 1.0; c.a = 1.0; return c; }()},
            {basis.zBasis, "z_axis", [] { std_msgs::msg::ColorRGBA c; c.b = 1.0; c.a = 1.0; return c; }()}
          };
      
          for (const auto& axis : axes) {
            visualization_msgs::msg::Marker arrow;
            arrow.header.stamp = now;
            arrow.header.frame_id = "leap_frame";
            arrow.ns = axis.ns;
            arrow.id = marker_id++;
            arrow.type = visualization_msgs::msg::Marker::ARROW;
            arrow.action = visualization_msgs::msg::Marker::ADD;
            arrow.scale.x = 0.1;
            arrow.scale.y = 0.1;
            arrow.scale.z = 0.1;
            arrow.color = axis.color;
      
            geometry_msgs::msg::Point end;
            end.x = origin.x + axis.dir.x / 100.0;  // Skaliert auf 10 cm
            end.y = origin.y + axis.dir.y / 100.0;
            end.z = origin.z + axis.dir.z / 100.0;
      
            arrow.points.push_back(origin);
            arrow.points.push_back(end);
      
            marker_array.markers.push_back(arrow);
          }
      
          // === Marker publishen ===
          marker_publisher_->publish(marker_array);
        }
      }

private:
  rclcpp::Publisher<visualization_msgs::msg::MarkerArray>::SharedPtr marker_publisher_;
  rclcpp::Time last_publish_time_;
};

int main(int argc, char** argv) {
  rclcpp::init(argc, argv);
  auto node = rclcpp::Node::make_shared("leap_example");

  auto marker_pub = node->create_publisher<visualization_msgs::msg::MarkerArray>(
    "/leap_markers", 10);

  RCLCPP_INFO(node->get_logger(), "Leap Motion node started.");

  LeapListener listener(marker_pub);
  Controller controller;
  controller.addListener(listener);

  rclcpp::spin(node);

  controller.removeListener(listener);
  rclcpp::shutdown();
  return 0;
}

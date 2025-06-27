#include <memory>
#include <chrono>
#include <rclcpp/rclcpp.hpp>
#include <geometry_msgs/msg/pose_stamped.hpp>
#include <visualization_msgs/msg/marker.hpp>
#include <visualization_msgs/msg/marker_array.hpp>
#include "Leap.h"
#include "tf2/LinearMath/Quaternion.h"

using namespace Leap;
using namespace std::chrono_literals;

class LeapListener : public Listener {
public:
  LeapListener(
    rclcpp::Publisher<geometry_msgs::msg::PoseStamped>::SharedPtr pose_pub,
    rclcpp::Publisher<visualization_msgs::msg::MarkerArray>::SharedPtr marker_pub)
    : pose_publisher_(pose_pub),
      marker_publisher_(marker_pub),
      last_publish_time_(rclcpp::Clock().now()) {}

  void onFrame(const Controller& controller) override {
    rclcpp::Time now = rclcpp::Clock().now();
    if ((now - last_publish_time_).seconds() < 0.05) return;  // max 20 Hz
    last_publish_time_ = now;

    const Frame frame = controller.frame();
    if (frame.hands().isEmpty()) return;

    for (const Hand& hand : frame.hands()) {
      if (!hand.isRight()) continue;

      // === Handpose senden ===
      geometry_msgs::msg::PoseStamped pose_msg;
      pose_msg.header.stamp = now;
      pose_msg.header.frame_id = "leap_frame";

      pose_msg.pose.position.x = hand.palmPosition().x / 1000.0;
      pose_msg.pose.position.y = hand.palmPosition().y / 1000.0;
      pose_msg.pose.position.z = hand.palmPosition().z / 1000.0;

      float pitch = hand.direction().pitch();
      float roll = hand.palmNormal().roll();
      float yaw = hand.direction().yaw();

      tf2::Quaternion q;
      q.setRPY(roll, pitch, yaw);
      pose_msg.pose.orientation.x = q.x();
      pose_msg.pose.orientation.y = q.y();
      pose_msg.pose.orientation.z = q.z();
      pose_msg.pose.orientation.w = q.w();

      pose_publisher_->publish(pose_msg);

      // === MarkerArray erzeugen ===
      visualization_msgs::msg::MarkerArray marker_array;

      for (int i = 0; i <= 3; ++i) {  // Thumb, Index, Middle, Ring
        const Finger& finger = hand.fingers()[i];

        visualization_msgs::msg::Marker marker;
        marker.header.stamp = now;
        marker.header.frame_id = "leap_frame";
        marker.ns = "finger_" + std::to_string(i);
        marker.id = i;
        marker.type = visualization_msgs::msg::Marker::LINE_STRIP;
        marker.action = visualization_msgs::msg::Marker::ADD;
        marker.scale.x = 0.005;

        marker.color.r = 1.0;
        marker.color.g = 0.6 - 0.2 * i;
        marker.color.b = 0.2 * i;
        marker.color.a = 1.0;

        // Gelenkpunkte
        for (int bone_type = 0; bone_type < 4; ++bone_type) {
          const Bone& bone = finger.bone(static_cast<Bone::Type>(bone_type));
          geometry_msgs::msg::Point pt;
          pt.x = bone.prevJoint().x / 1000.0;
          pt.y = bone.prevJoint().y / 1000.0;
          pt.z = bone.prevJoint().z / 1000.0;
          marker.points.push_back(pt);
        }

        // Fingerspitze (Endpunkt)
        const Bone& tip = finger.bone(Bone::Type::TYPE_DISTAL);
        geometry_msgs::msg::Point tip_pt;
        tip_pt.x = tip.nextJoint().x / 1000.0;
        tip_pt.y = tip.nextJoint().y / 1000.0;
        tip_pt.z = tip.nextJoint().z / 1000.0;
        marker.points.push_back(tip_pt);

        marker_array.markers.push_back(marker);
      }

      marker_publisher_->publish(marker_array);
    }
  }

private:
  rclcpp::Publisher<geometry_msgs::msg::PoseStamped>::SharedPtr pose_publisher_;
  rclcpp::Publisher<visualization_msgs::msg::MarkerArray>::SharedPtr marker_publisher_;
  rclcpp::Time last_publish_time_;
};

int main(int argc, char** argv) {
  rclcpp::init(argc, argv);
  auto node = rclcpp::Node::make_shared("leap_example");

  auto pose_pub = node->create_publisher<geometry_msgs::msg::PoseStamped>(
    "/right_hand_pose_stamped", 10);
  auto marker_pub = node->create_publisher<visualization_msgs::msg::MarkerArray>(
    "/leap_markers", 10);

  RCLCPP_INFO(node->get_logger(), "Leap Motion node started.");

  LeapListener listener(pose_pub, marker_pub);
  Controller controller;
  controller.addListener(listener);

  rclcpp::spin(node);

  controller.removeListener(listener);
  rclcpp::shutdown();
  return 0;
}

#include <memory>
#include <chrono>
#include <rclcpp/rclcpp.hpp>
#include <geometry_msgs/msg/pose_stamped.hpp>
#include "Leap.h"
#include "tf2/LinearMath/Quaternion.h"

using namespace Leap;
using namespace std::chrono_literals;

class LeapListener : public Listener {
public:
  LeapListener(rclcpp::Publisher<geometry_msgs::msg::PoseStamped>::SharedPtr publisher)
  : pose_publisher_(publisher) {}

  void onFrame(const Controller& controller) override {
    const Frame frame = controller.frame();
    if (frame.hands().isEmpty()) return;

    for (const Hand& hand : frame.hands()) {
      if (!hand.isRight()) continue;

      geometry_msgs::msg::PoseStamped pose_msg;
      pose_msg.header.stamp = rclcpp::Clock().now();
      pose_msg.header.frame_id = "world";  // wichtig für RViz

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
    }
  }

private:
  rclcpp::Publisher<geometry_msgs::msg::PoseStamped>::SharedPtr pose_publisher_;
};

int main(int argc, char** argv) {
  rclcpp::init(argc, argv);
  auto node = rclcpp::Node::make_shared("leap_example");

  auto publisher = node->create_publisher<geometry_msgs::msg::PoseStamped>(
    "/right_hand_pose_stamped", 10);

  RCLCPP_INFO(node->get_logger(), "Leap Motion node started, publishing /right_hand_pose_stamped");

  LeapListener listener(publisher);
  Controller controller;
  controller.addListener(listener);

  rclcpp::spin(node);

  controller.removeListener(listener);
  rclcpp::shutdown();
  return 0;
}

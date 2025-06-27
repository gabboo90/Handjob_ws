#include <memory>
#include <chrono>
#include <rclcpp/rclcpp.hpp>
#include <geometry_msgs/msg/pose.hpp>
#include "Leap.h"

using namespace Leap;
using namespace std::chrono_literals;

class LeapListener : public Listener {
public:
  LeapListener(rclcpp::Publisher<geometry_msgs::msg::Pose>::SharedPtr publisher)
  : pose_publisher_(publisher) {}

  void onFrame(const Controller& controller) override {
    const Frame frame = controller.frame();
    if (frame.hands().isEmpty()) return;

    for (const Hand& hand : frame.hands()) {
      if (!hand.isRight()) continue;

      geometry_msgs::msg::Pose pose_msg;
      pose_msg.position.x = hand.palmPosition().x / 1000.0;
      pose_msg.position.y = hand.palmPosition().y / 1000.0;
      pose_msg.position.z = hand.palmPosition().z / 1000.0;

      // Orientierung als Euler-Winkel (Roll, Pitch, Yaw) → Quaternion wäre besser
      float pitch = hand.direction().pitch();
      float roll = hand.palmNormal().roll();
      float yaw = hand.direction().yaw();

      // Dummy-Quaternion, da ROS-Pose Quaternionen erwartet – das wird noch verbessert
      pose_msg.orientation.x = pitch;
      pose_msg.orientation.y = roll;
      pose_msg.orientation.z = yaw;
      pose_msg.orientation.w = 0.0;

      pose_publisher_->publish(pose_msg);
    }
  }

private:
  rclcpp::Publisher<geometry_msgs::msg::Pose>::SharedPtr pose_publisher_;
};

int main(int argc, char** argv) {
  rclcpp::init(argc, argv);
  auto node = rclcpp::Node::make_shared("leap_example");
  auto publisher = node->create_publisher<geometry_msgs::msg::Pose>("/right_hand", 10);

  RCLCPP_INFO(node->get_logger(), "Leap Motion node started, publishing /right_hand");

  LeapListener listener(publisher);
  Controller controller;
  controller.addListener(listener);

  rclcpp::spin(node);

  controller.removeListener(listener);
  rclcpp::shutdown();
  return 0;
}

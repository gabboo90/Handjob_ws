// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from leap_node:msg/HandData.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "leap_node/msg/hand_data.hpp"


#ifndef LEAP_NODE__MSG__DETAIL__HAND_DATA__TRAITS_HPP_
#define LEAP_NODE__MSG__DETAIL__HAND_DATA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "leap_node/msg/detail/hand_data__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'timestamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"
// Member 'palm_position'
#include "geometry_msgs/msg/detail/point__traits.hpp"
// Member 'normal'
// Member 'direction'
#include "geometry_msgs/msg/detail/vector3__traits.hpp"
// Member 'thumb'
// Member 'index'
// Member 'middle'
#include "leap_node/msg/detail/finger_data__traits.hpp"

namespace leap_node
{

namespace msg
{

inline void to_flow_style_yaml(
  const HandData & msg,
  std::ostream & out)
{
  out << "{";
  // member: timestamp
  {
    out << "timestamp: ";
    to_flow_style_yaml(msg.timestamp, out);
    out << ", ";
  }

  // member: hand_id
  {
    out << "hand_id: ";
    rosidl_generator_traits::value_to_yaml(msg.hand_id, out);
    out << ", ";
  }

  // member: is_right
  {
    out << "is_right: ";
    rosidl_generator_traits::value_to_yaml(msg.is_right, out);
    out << ", ";
  }

  // member: palm_position
  {
    out << "palm_position: ";
    to_flow_style_yaml(msg.palm_position, out);
    out << ", ";
  }

  // member: normal
  {
    out << "normal: ";
    to_flow_style_yaml(msg.normal, out);
    out << ", ";
  }

  // member: direction
  {
    out << "direction: ";
    to_flow_style_yaml(msg.direction, out);
    out << ", ";
  }

  // member: thumb
  {
    out << "thumb: ";
    to_flow_style_yaml(msg.thumb, out);
    out << ", ";
  }

  // member: index
  {
    out << "index: ";
    to_flow_style_yaml(msg.index, out);
    out << ", ";
  }

  // member: middle
  {
    out << "middle: ";
    to_flow_style_yaml(msg.middle, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const HandData & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: timestamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "timestamp:\n";
    to_block_style_yaml(msg.timestamp, out, indentation + 2);
  }

  // member: hand_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hand_id: ";
    rosidl_generator_traits::value_to_yaml(msg.hand_id, out);
    out << "\n";
  }

  // member: is_right
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_right: ";
    rosidl_generator_traits::value_to_yaml(msg.is_right, out);
    out << "\n";
  }

  // member: palm_position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "palm_position:\n";
    to_block_style_yaml(msg.palm_position, out, indentation + 2);
  }

  // member: normal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "normal:\n";
    to_block_style_yaml(msg.normal, out, indentation + 2);
  }

  // member: direction
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "direction:\n";
    to_block_style_yaml(msg.direction, out, indentation + 2);
  }

  // member: thumb
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "thumb:\n";
    to_block_style_yaml(msg.thumb, out, indentation + 2);
  }

  // member: index
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "index:\n";
    to_block_style_yaml(msg.index, out, indentation + 2);
  }

  // member: middle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "middle:\n";
    to_block_style_yaml(msg.middle, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const HandData & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace leap_node

namespace rosidl_generator_traits
{

[[deprecated("use leap_node::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const leap_node::msg::HandData & msg,
  std::ostream & out, size_t indentation = 0)
{
  leap_node::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use leap_node::msg::to_yaml() instead")]]
inline std::string to_yaml(const leap_node::msg::HandData & msg)
{
  return leap_node::msg::to_yaml(msg);
}

template<>
inline const char * data_type<leap_node::msg::HandData>()
{
  return "leap_node::msg::HandData";
}

template<>
inline const char * name<leap_node::msg::HandData>()
{
  return "leap_node/msg/HandData";
}

template<>
struct has_fixed_size<leap_node::msg::HandData>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value && has_fixed_size<geometry_msgs::msg::Point>::value && has_fixed_size<geometry_msgs::msg::Vector3>::value && has_fixed_size<leap_node::msg::FingerData>::value> {};

template<>
struct has_bounded_size<leap_node::msg::HandData>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value && has_bounded_size<geometry_msgs::msg::Point>::value && has_bounded_size<geometry_msgs::msg::Vector3>::value && has_bounded_size<leap_node::msg::FingerData>::value> {};

template<>
struct is_message<leap_node::msg::HandData>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // LEAP_NODE__MSG__DETAIL__HAND_DATA__TRAITS_HPP_

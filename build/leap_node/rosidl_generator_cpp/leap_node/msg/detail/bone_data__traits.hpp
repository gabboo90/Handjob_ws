// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from leap_node:msg/BoneData.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "leap_node/msg/bone_data.hpp"


#ifndef LEAP_NODE__MSG__DETAIL__BONE_DATA__TRAITS_HPP_
#define LEAP_NODE__MSG__DETAIL__BONE_DATA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "leap_node/msg/detail/bone_data__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'timestamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"
// Member 'start'
// Member 'end'
#include "geometry_msgs/msg/detail/point__traits.hpp"
// Member 'direction'
#include "geometry_msgs/msg/detail/vector3__traits.hpp"

namespace leap_node
{

namespace msg
{

inline void to_flow_style_yaml(
  const BoneData & msg,
  std::ostream & out)
{
  out << "{";
  // member: timestamp
  {
    out << "timestamp: ";
    to_flow_style_yaml(msg.timestamp, out);
    out << ", ";
  }

  // member: bone_type
  {
    out << "bone_type: ";
    rosidl_generator_traits::value_to_yaml(msg.bone_type, out);
    out << ", ";
  }

  // member: start
  {
    out << "start: ";
    to_flow_style_yaml(msg.start, out);
    out << ", ";
  }

  // member: end
  {
    out << "end: ";
    to_flow_style_yaml(msg.end, out);
    out << ", ";
  }

  // member: direction
  {
    out << "direction: ";
    to_flow_style_yaml(msg.direction, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const BoneData & msg,
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

  // member: bone_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bone_type: ";
    rosidl_generator_traits::value_to_yaml(msg.bone_type, out);
    out << "\n";
  }

  // member: start
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "start:\n";
    to_block_style_yaml(msg.start, out, indentation + 2);
  }

  // member: end
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "end:\n";
    to_block_style_yaml(msg.end, out, indentation + 2);
  }

  // member: direction
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "direction:\n";
    to_block_style_yaml(msg.direction, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const BoneData & msg, bool use_flow_style = false)
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
  const leap_node::msg::BoneData & msg,
  std::ostream & out, size_t indentation = 0)
{
  leap_node::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use leap_node::msg::to_yaml() instead")]]
inline std::string to_yaml(const leap_node::msg::BoneData & msg)
{
  return leap_node::msg::to_yaml(msg);
}

template<>
inline const char * data_type<leap_node::msg::BoneData>()
{
  return "leap_node::msg::BoneData";
}

template<>
inline const char * name<leap_node::msg::BoneData>()
{
  return "leap_node/msg/BoneData";
}

template<>
struct has_fixed_size<leap_node::msg::BoneData>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value && has_fixed_size<geometry_msgs::msg::Point>::value && has_fixed_size<geometry_msgs::msg::Vector3>::value> {};

template<>
struct has_bounded_size<leap_node::msg::BoneData>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value && has_bounded_size<geometry_msgs::msg::Point>::value && has_bounded_size<geometry_msgs::msg::Vector3>::value> {};

template<>
struct is_message<leap_node::msg::BoneData>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // LEAP_NODE__MSG__DETAIL__BONE_DATA__TRAITS_HPP_

// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from leap_node:msg/FingerData.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "leap_node/msg/finger_data.hpp"


#ifndef LEAP_NODE__MSG__DETAIL__FINGER_DATA__TRAITS_HPP_
#define LEAP_NODE__MSG__DETAIL__FINGER_DATA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "leap_node/msg/detail/finger_data__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'timestamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"
// Member 'bones'
#include "leap_node/msg/detail/bone_data__traits.hpp"

namespace leap_node
{

namespace msg
{

inline void to_flow_style_yaml(
  const FingerData & msg,
  std::ostream & out)
{
  out << "{";
  // member: timestamp
  {
    out << "timestamp: ";
    to_flow_style_yaml(msg.timestamp, out);
    out << ", ";
  }

  // member: finger_type
  {
    out << "finger_type: ";
    rosidl_generator_traits::value_to_yaml(msg.finger_type, out);
    out << ", ";
  }

  // member: length
  {
    out << "length: ";
    rosidl_generator_traits::value_to_yaml(msg.length, out);
    out << ", ";
  }

  // member: width
  {
    out << "width: ";
    rosidl_generator_traits::value_to_yaml(msg.width, out);
    out << ", ";
  }

  // member: mcp_pitch_deg
  {
    out << "mcp_pitch_deg: ";
    rosidl_generator_traits::value_to_yaml(msg.mcp_pitch_deg, out);
    out << ", ";
  }

  // member: mcp_yaw_deg
  {
    out << "mcp_yaw_deg: ";
    rosidl_generator_traits::value_to_yaml(msg.mcp_yaw_deg, out);
    out << ", ";
  }

  // member: bones
  {
    if (msg.bones.size() == 0) {
      out << "bones: []";
    } else {
      out << "bones: [";
      size_t pending_items = msg.bones.size();
      for (auto item : msg.bones) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const FingerData & msg,
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

  // member: finger_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "finger_type: ";
    rosidl_generator_traits::value_to_yaml(msg.finger_type, out);
    out << "\n";
  }

  // member: length
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "length: ";
    rosidl_generator_traits::value_to_yaml(msg.length, out);
    out << "\n";
  }

  // member: width
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "width: ";
    rosidl_generator_traits::value_to_yaml(msg.width, out);
    out << "\n";
  }

  // member: mcp_pitch_deg
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mcp_pitch_deg: ";
    rosidl_generator_traits::value_to_yaml(msg.mcp_pitch_deg, out);
    out << "\n";
  }

  // member: mcp_yaw_deg
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mcp_yaw_deg: ";
    rosidl_generator_traits::value_to_yaml(msg.mcp_yaw_deg, out);
    out << "\n";
  }

  // member: bones
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.bones.size() == 0) {
      out << "bones: []\n";
    } else {
      out << "bones:\n";
      for (auto item : msg.bones) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const FingerData & msg, bool use_flow_style = false)
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
  const leap_node::msg::FingerData & msg,
  std::ostream & out, size_t indentation = 0)
{
  leap_node::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use leap_node::msg::to_yaml() instead")]]
inline std::string to_yaml(const leap_node::msg::FingerData & msg)
{
  return leap_node::msg::to_yaml(msg);
}

template<>
inline const char * data_type<leap_node::msg::FingerData>()
{
  return "leap_node::msg::FingerData";
}

template<>
inline const char * name<leap_node::msg::FingerData>()
{
  return "leap_node/msg/FingerData";
}

template<>
struct has_fixed_size<leap_node::msg::FingerData>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<leap_node::msg::FingerData>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<leap_node::msg::FingerData>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // LEAP_NODE__MSG__DETAIL__FINGER_DATA__TRAITS_HPP_

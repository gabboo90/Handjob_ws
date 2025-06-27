// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from leap_node:msg/FingerData.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "leap_node/msg/finger_data.hpp"


#ifndef LEAP_NODE__MSG__DETAIL__FINGER_DATA__BUILDER_HPP_
#define LEAP_NODE__MSG__DETAIL__FINGER_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "leap_node/msg/detail/finger_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace leap_node
{

namespace msg
{

namespace builder
{

class Init_FingerData_bones
{
public:
  explicit Init_FingerData_bones(::leap_node::msg::FingerData & msg)
  : msg_(msg)
  {}
  ::leap_node::msg::FingerData bones(::leap_node::msg::FingerData::_bones_type arg)
  {
    msg_.bones = std::move(arg);
    return std::move(msg_);
  }

private:
  ::leap_node::msg::FingerData msg_;
};

class Init_FingerData_width
{
public:
  explicit Init_FingerData_width(::leap_node::msg::FingerData & msg)
  : msg_(msg)
  {}
  Init_FingerData_bones width(::leap_node::msg::FingerData::_width_type arg)
  {
    msg_.width = std::move(arg);
    return Init_FingerData_bones(msg_);
  }

private:
  ::leap_node::msg::FingerData msg_;
};

class Init_FingerData_length
{
public:
  explicit Init_FingerData_length(::leap_node::msg::FingerData & msg)
  : msg_(msg)
  {}
  Init_FingerData_width length(::leap_node::msg::FingerData::_length_type arg)
  {
    msg_.length = std::move(arg);
    return Init_FingerData_width(msg_);
  }

private:
  ::leap_node::msg::FingerData msg_;
};

class Init_FingerData_finger_type
{
public:
  explicit Init_FingerData_finger_type(::leap_node::msg::FingerData & msg)
  : msg_(msg)
  {}
  Init_FingerData_length finger_type(::leap_node::msg::FingerData::_finger_type_type arg)
  {
    msg_.finger_type = std::move(arg);
    return Init_FingerData_length(msg_);
  }

private:
  ::leap_node::msg::FingerData msg_;
};

class Init_FingerData_timestamp
{
public:
  Init_FingerData_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FingerData_finger_type timestamp(::leap_node::msg::FingerData::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_FingerData_finger_type(msg_);
  }

private:
  ::leap_node::msg::FingerData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::leap_node::msg::FingerData>()
{
  return leap_node::msg::builder::Init_FingerData_timestamp();
}

}  // namespace leap_node

#endif  // LEAP_NODE__MSG__DETAIL__FINGER_DATA__BUILDER_HPP_

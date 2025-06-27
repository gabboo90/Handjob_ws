// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from leap_node:msg/HandData.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "leap_node/msg/hand_data.hpp"


#ifndef LEAP_NODE__MSG__DETAIL__HAND_DATA__BUILDER_HPP_
#define LEAP_NODE__MSG__DETAIL__HAND_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "leap_node/msg/detail/hand_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace leap_node
{

namespace msg
{

namespace builder
{

class Init_HandData_fingers
{
public:
  explicit Init_HandData_fingers(::leap_node::msg::HandData & msg)
  : msg_(msg)
  {}
  ::leap_node::msg::HandData fingers(::leap_node::msg::HandData::_fingers_type arg)
  {
    msg_.fingers = std::move(arg);
    return std::move(msg_);
  }

private:
  ::leap_node::msg::HandData msg_;
};

class Init_HandData_direction
{
public:
  explicit Init_HandData_direction(::leap_node::msg::HandData & msg)
  : msg_(msg)
  {}
  Init_HandData_fingers direction(::leap_node::msg::HandData::_direction_type arg)
  {
    msg_.direction = std::move(arg);
    return Init_HandData_fingers(msg_);
  }

private:
  ::leap_node::msg::HandData msg_;
};

class Init_HandData_normal
{
public:
  explicit Init_HandData_normal(::leap_node::msg::HandData & msg)
  : msg_(msg)
  {}
  Init_HandData_direction normal(::leap_node::msg::HandData::_normal_type arg)
  {
    msg_.normal = std::move(arg);
    return Init_HandData_direction(msg_);
  }

private:
  ::leap_node::msg::HandData msg_;
};

class Init_HandData_palm_position
{
public:
  explicit Init_HandData_palm_position(::leap_node::msg::HandData & msg)
  : msg_(msg)
  {}
  Init_HandData_normal palm_position(::leap_node::msg::HandData::_palm_position_type arg)
  {
    msg_.palm_position = std::move(arg);
    return Init_HandData_normal(msg_);
  }

private:
  ::leap_node::msg::HandData msg_;
};

class Init_HandData_is_right
{
public:
  explicit Init_HandData_is_right(::leap_node::msg::HandData & msg)
  : msg_(msg)
  {}
  Init_HandData_palm_position is_right(::leap_node::msg::HandData::_is_right_type arg)
  {
    msg_.is_right = std::move(arg);
    return Init_HandData_palm_position(msg_);
  }

private:
  ::leap_node::msg::HandData msg_;
};

class Init_HandData_hand_id
{
public:
  explicit Init_HandData_hand_id(::leap_node::msg::HandData & msg)
  : msg_(msg)
  {}
  Init_HandData_is_right hand_id(::leap_node::msg::HandData::_hand_id_type arg)
  {
    msg_.hand_id = std::move(arg);
    return Init_HandData_is_right(msg_);
  }

private:
  ::leap_node::msg::HandData msg_;
};

class Init_HandData_timestamp
{
public:
  Init_HandData_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_HandData_hand_id timestamp(::leap_node::msg::HandData::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_HandData_hand_id(msg_);
  }

private:
  ::leap_node::msg::HandData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::leap_node::msg::HandData>()
{
  return leap_node::msg::builder::Init_HandData_timestamp();
}

}  // namespace leap_node

#endif  // LEAP_NODE__MSG__DETAIL__HAND_DATA__BUILDER_HPP_

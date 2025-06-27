// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from leap_node:msg/BoneData.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "leap_node/msg/bone_data.hpp"


#ifndef LEAP_NODE__MSG__DETAIL__BONE_DATA__BUILDER_HPP_
#define LEAP_NODE__MSG__DETAIL__BONE_DATA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "leap_node/msg/detail/bone_data__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace leap_node
{

namespace msg
{

namespace builder
{

class Init_BoneData_direction
{
public:
  explicit Init_BoneData_direction(::leap_node::msg::BoneData & msg)
  : msg_(msg)
  {}
  ::leap_node::msg::BoneData direction(::leap_node::msg::BoneData::_direction_type arg)
  {
    msg_.direction = std::move(arg);
    return std::move(msg_);
  }

private:
  ::leap_node::msg::BoneData msg_;
};

class Init_BoneData_end
{
public:
  explicit Init_BoneData_end(::leap_node::msg::BoneData & msg)
  : msg_(msg)
  {}
  Init_BoneData_direction end(::leap_node::msg::BoneData::_end_type arg)
  {
    msg_.end = std::move(arg);
    return Init_BoneData_direction(msg_);
  }

private:
  ::leap_node::msg::BoneData msg_;
};

class Init_BoneData_start
{
public:
  explicit Init_BoneData_start(::leap_node::msg::BoneData & msg)
  : msg_(msg)
  {}
  Init_BoneData_end start(::leap_node::msg::BoneData::_start_type arg)
  {
    msg_.start = std::move(arg);
    return Init_BoneData_end(msg_);
  }

private:
  ::leap_node::msg::BoneData msg_;
};

class Init_BoneData_bone_type
{
public:
  explicit Init_BoneData_bone_type(::leap_node::msg::BoneData & msg)
  : msg_(msg)
  {}
  Init_BoneData_start bone_type(::leap_node::msg::BoneData::_bone_type_type arg)
  {
    msg_.bone_type = std::move(arg);
    return Init_BoneData_start(msg_);
  }

private:
  ::leap_node::msg::BoneData msg_;
};

class Init_BoneData_timestamp
{
public:
  Init_BoneData_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BoneData_bone_type timestamp(::leap_node::msg::BoneData::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_BoneData_bone_type(msg_);
  }

private:
  ::leap_node::msg::BoneData msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::leap_node::msg::BoneData>()
{
  return leap_node::msg::builder::Init_BoneData_timestamp();
}

}  // namespace leap_node

#endif  // LEAP_NODE__MSG__DETAIL__BONE_DATA__BUILDER_HPP_

// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from leap_node:msg/BoneData.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "leap_node/msg/bone_data.hpp"


#ifndef LEAP_NODE__MSG__DETAIL__BONE_DATA__STRUCT_HPP_
#define LEAP_NODE__MSG__DETAIL__BONE_DATA__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'timestamp'
#include "builtin_interfaces/msg/detail/time__struct.hpp"
// Member 'start'
// Member 'end'
#include "geometry_msgs/msg/detail/point__struct.hpp"
// Member 'direction'
#include "geometry_msgs/msg/detail/vector3__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__leap_node__msg__BoneData __attribute__((deprecated))
#else
# define DEPRECATED__leap_node__msg__BoneData __declspec(deprecated)
#endif

namespace leap_node
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct BoneData_
{
  using Type = BoneData_<ContainerAllocator>;

  explicit BoneData_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : timestamp(_init),
    start(_init),
    end(_init),
    direction(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->bone_type = 0l;
    }
  }

  explicit BoneData_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : timestamp(_alloc, _init),
    start(_alloc, _init),
    end(_alloc, _init),
    direction(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->bone_type = 0l;
    }
  }

  // field types and members
  using _timestamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _timestamp_type timestamp;
  using _bone_type_type =
    int32_t;
  _bone_type_type bone_type;
  using _start_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _start_type start;
  using _end_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _end_type end;
  using _direction_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _direction_type direction;

  // setters for named parameter idiom
  Type & set__timestamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__bone_type(
    const int32_t & _arg)
  {
    this->bone_type = _arg;
    return *this;
  }
  Type & set__start(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->start = _arg;
    return *this;
  }
  Type & set__end(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->end = _arg;
    return *this;
  }
  Type & set__direction(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->direction = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    leap_node::msg::BoneData_<ContainerAllocator> *;
  using ConstRawPtr =
    const leap_node::msg::BoneData_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<leap_node::msg::BoneData_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<leap_node::msg::BoneData_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      leap_node::msg::BoneData_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<leap_node::msg::BoneData_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      leap_node::msg::BoneData_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<leap_node::msg::BoneData_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<leap_node::msg::BoneData_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<leap_node::msg::BoneData_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__leap_node__msg__BoneData
    std::shared_ptr<leap_node::msg::BoneData_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__leap_node__msg__BoneData
    std::shared_ptr<leap_node::msg::BoneData_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BoneData_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->bone_type != other.bone_type) {
      return false;
    }
    if (this->start != other.start) {
      return false;
    }
    if (this->end != other.end) {
      return false;
    }
    if (this->direction != other.direction) {
      return false;
    }
    return true;
  }
  bool operator!=(const BoneData_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BoneData_

// alias to use template instance with default allocator
using BoneData =
  leap_node::msg::BoneData_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace leap_node

#endif  // LEAP_NODE__MSG__DETAIL__BONE_DATA__STRUCT_HPP_

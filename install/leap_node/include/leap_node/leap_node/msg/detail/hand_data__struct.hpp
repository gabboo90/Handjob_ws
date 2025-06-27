// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from leap_node:msg/HandData.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "leap_node/msg/hand_data.hpp"


#ifndef LEAP_NODE__MSG__DETAIL__HAND_DATA__STRUCT_HPP_
#define LEAP_NODE__MSG__DETAIL__HAND_DATA__STRUCT_HPP_

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
// Member 'palm_position'
#include "geometry_msgs/msg/detail/point__struct.hpp"
// Member 'normal'
// Member 'direction'
#include "geometry_msgs/msg/detail/vector3__struct.hpp"
// Member 'thumb'
// Member 'index'
// Member 'middle'
#include "leap_node/msg/detail/finger_data__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__leap_node__msg__HandData __attribute__((deprecated))
#else
# define DEPRECATED__leap_node__msg__HandData __declspec(deprecated)
#endif

namespace leap_node
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct HandData_
{
  using Type = HandData_<ContainerAllocator>;

  explicit HandData_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : timestamp(_init),
    palm_position(_init),
    normal(_init),
    direction(_init),
    thumb(_init),
    index(_init),
    middle(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->hand_id = 0l;
      this->is_right = false;
    }
  }

  explicit HandData_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : timestamp(_alloc, _init),
    palm_position(_alloc, _init),
    normal(_alloc, _init),
    direction(_alloc, _init),
    thumb(_alloc, _init),
    index(_alloc, _init),
    middle(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->hand_id = 0l;
      this->is_right = false;
    }
  }

  // field types and members
  using _timestamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _timestamp_type timestamp;
  using _hand_id_type =
    int32_t;
  _hand_id_type hand_id;
  using _is_right_type =
    bool;
  _is_right_type is_right;
  using _palm_position_type =
    geometry_msgs::msg::Point_<ContainerAllocator>;
  _palm_position_type palm_position;
  using _normal_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _normal_type normal;
  using _direction_type =
    geometry_msgs::msg::Vector3_<ContainerAllocator>;
  _direction_type direction;
  using _thumb_type =
    leap_node::msg::FingerData_<ContainerAllocator>;
  _thumb_type thumb;
  using _index_type =
    leap_node::msg::FingerData_<ContainerAllocator>;
  _index_type index;
  using _middle_type =
    leap_node::msg::FingerData_<ContainerAllocator>;
  _middle_type middle;

  // setters for named parameter idiom
  Type & set__timestamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__hand_id(
    const int32_t & _arg)
  {
    this->hand_id = _arg;
    return *this;
  }
  Type & set__is_right(
    const bool & _arg)
  {
    this->is_right = _arg;
    return *this;
  }
  Type & set__palm_position(
    const geometry_msgs::msg::Point_<ContainerAllocator> & _arg)
  {
    this->palm_position = _arg;
    return *this;
  }
  Type & set__normal(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->normal = _arg;
    return *this;
  }
  Type & set__direction(
    const geometry_msgs::msg::Vector3_<ContainerAllocator> & _arg)
  {
    this->direction = _arg;
    return *this;
  }
  Type & set__thumb(
    const leap_node::msg::FingerData_<ContainerAllocator> & _arg)
  {
    this->thumb = _arg;
    return *this;
  }
  Type & set__index(
    const leap_node::msg::FingerData_<ContainerAllocator> & _arg)
  {
    this->index = _arg;
    return *this;
  }
  Type & set__middle(
    const leap_node::msg::FingerData_<ContainerAllocator> & _arg)
  {
    this->middle = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    leap_node::msg::HandData_<ContainerAllocator> *;
  using ConstRawPtr =
    const leap_node::msg::HandData_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<leap_node::msg::HandData_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<leap_node::msg::HandData_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      leap_node::msg::HandData_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<leap_node::msg::HandData_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      leap_node::msg::HandData_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<leap_node::msg::HandData_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<leap_node::msg::HandData_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<leap_node::msg::HandData_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__leap_node__msg__HandData
    std::shared_ptr<leap_node::msg::HandData_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__leap_node__msg__HandData
    std::shared_ptr<leap_node::msg::HandData_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const HandData_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->hand_id != other.hand_id) {
      return false;
    }
    if (this->is_right != other.is_right) {
      return false;
    }
    if (this->palm_position != other.palm_position) {
      return false;
    }
    if (this->normal != other.normal) {
      return false;
    }
    if (this->direction != other.direction) {
      return false;
    }
    if (this->thumb != other.thumb) {
      return false;
    }
    if (this->index != other.index) {
      return false;
    }
    if (this->middle != other.middle) {
      return false;
    }
    return true;
  }
  bool operator!=(const HandData_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct HandData_

// alias to use template instance with default allocator
using HandData =
  leap_node::msg::HandData_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace leap_node

#endif  // LEAP_NODE__MSG__DETAIL__HAND_DATA__STRUCT_HPP_

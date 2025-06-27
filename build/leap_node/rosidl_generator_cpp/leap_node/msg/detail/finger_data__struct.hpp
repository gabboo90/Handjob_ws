// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from leap_node:msg/FingerData.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "leap_node/msg/finger_data.hpp"


#ifndef LEAP_NODE__MSG__DETAIL__FINGER_DATA__STRUCT_HPP_
#define LEAP_NODE__MSG__DETAIL__FINGER_DATA__STRUCT_HPP_

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
// Member 'bones'
#include "leap_node/msg/detail/bone_data__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__leap_node__msg__FingerData __attribute__((deprecated))
#else
# define DEPRECATED__leap_node__msg__FingerData __declspec(deprecated)
#endif

namespace leap_node
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct FingerData_
{
  using Type = FingerData_<ContainerAllocator>;

  explicit FingerData_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : timestamp(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->finger_type = 0l;
      this->length = 0.0f;
      this->width = 0.0f;
    }
  }

  explicit FingerData_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : timestamp(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->finger_type = 0l;
      this->length = 0.0f;
      this->width = 0.0f;
    }
  }

  // field types and members
  using _timestamp_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _timestamp_type timestamp;
  using _finger_type_type =
    int32_t;
  _finger_type_type finger_type;
  using _length_type =
    float;
  _length_type length;
  using _width_type =
    float;
  _width_type width;
  using _bones_type =
    std::vector<leap_node::msg::BoneData_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<leap_node::msg::BoneData_<ContainerAllocator>>>;
  _bones_type bones;

  // setters for named parameter idiom
  Type & set__timestamp(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__finger_type(
    const int32_t & _arg)
  {
    this->finger_type = _arg;
    return *this;
  }
  Type & set__length(
    const float & _arg)
  {
    this->length = _arg;
    return *this;
  }
  Type & set__width(
    const float & _arg)
  {
    this->width = _arg;
    return *this;
  }
  Type & set__bones(
    const std::vector<leap_node::msg::BoneData_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<leap_node::msg::BoneData_<ContainerAllocator>>> & _arg)
  {
    this->bones = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    leap_node::msg::FingerData_<ContainerAllocator> *;
  using ConstRawPtr =
    const leap_node::msg::FingerData_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<leap_node::msg::FingerData_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<leap_node::msg::FingerData_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      leap_node::msg::FingerData_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<leap_node::msg::FingerData_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      leap_node::msg::FingerData_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<leap_node::msg::FingerData_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<leap_node::msg::FingerData_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<leap_node::msg::FingerData_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__leap_node__msg__FingerData
    std::shared_ptr<leap_node::msg::FingerData_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__leap_node__msg__FingerData
    std::shared_ptr<leap_node::msg::FingerData_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const FingerData_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->finger_type != other.finger_type) {
      return false;
    }
    if (this->length != other.length) {
      return false;
    }
    if (this->width != other.width) {
      return false;
    }
    if (this->bones != other.bones) {
      return false;
    }
    return true;
  }
  bool operator!=(const FingerData_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct FingerData_

// alias to use template instance with default allocator
using FingerData =
  leap_node::msg::FingerData_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace leap_node

#endif  // LEAP_NODE__MSG__DETAIL__FINGER_DATA__STRUCT_HPP_

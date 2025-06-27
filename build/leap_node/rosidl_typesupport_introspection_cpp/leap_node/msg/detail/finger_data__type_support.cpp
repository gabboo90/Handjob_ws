// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from leap_node:msg/FingerData.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "leap_node/msg/detail/finger_data__functions.h"
#include "leap_node/msg/detail/finger_data__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace leap_node
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void FingerData_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) leap_node::msg::FingerData(_init);
}

void FingerData_fini_function(void * message_memory)
{
  auto typed_message = static_cast<leap_node::msg::FingerData *>(message_memory);
  typed_message->~FingerData();
}

size_t size_function__FingerData__bones(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<leap_node::msg::BoneData> *>(untyped_member);
  return member->size();
}

const void * get_const_function__FingerData__bones(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<leap_node::msg::BoneData> *>(untyped_member);
  return &member[index];
}

void * get_function__FingerData__bones(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<leap_node::msg::BoneData> *>(untyped_member);
  return &member[index];
}

void fetch_function__FingerData__bones(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const leap_node::msg::BoneData *>(
    get_const_function__FingerData__bones(untyped_member, index));
  auto & value = *reinterpret_cast<leap_node::msg::BoneData *>(untyped_value);
  value = item;
}

void assign_function__FingerData__bones(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<leap_node::msg::BoneData *>(
    get_function__FingerData__bones(untyped_member, index));
  const auto & value = *reinterpret_cast<const leap_node::msg::BoneData *>(untyped_value);
  item = value;
}

void resize_function__FingerData__bones(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<leap_node::msg::BoneData> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember FingerData_message_member_array[5] = {
  {
    "timestamp",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<builtin_interfaces::msg::Time>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(leap_node::msg::FingerData, timestamp),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "finger_type",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(leap_node::msg::FingerData, finger_type),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "length",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(leap_node::msg::FingerData, length),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "width",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(leap_node::msg::FingerData, width),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "bones",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<leap_node::msg::BoneData>(),  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(leap_node::msg::FingerData, bones),  // bytes offset in struct
    nullptr,  // default value
    size_function__FingerData__bones,  // size() function pointer
    get_const_function__FingerData__bones,  // get_const(index) function pointer
    get_function__FingerData__bones,  // get(index) function pointer
    fetch_function__FingerData__bones,  // fetch(index, &value) function pointer
    assign_function__FingerData__bones,  // assign(index, value) function pointer
    resize_function__FingerData__bones  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers FingerData_message_members = {
  "leap_node::msg",  // message namespace
  "FingerData",  // message name
  5,  // number of fields
  sizeof(leap_node::msg::FingerData),
  false,  // has_any_key_member_
  FingerData_message_member_array,  // message members
  FingerData_init_function,  // function to initialize message memory (memory has to be allocated)
  FingerData_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t FingerData_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &FingerData_message_members,
  get_message_typesupport_handle_function,
  &leap_node__msg__FingerData__get_type_hash,
  &leap_node__msg__FingerData__get_type_description,
  &leap_node__msg__FingerData__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace leap_node


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<leap_node::msg::FingerData>()
{
  return &::leap_node::msg::rosidl_typesupport_introspection_cpp::FingerData_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, leap_node, msg, FingerData)() {
  return &::leap_node::msg::rosidl_typesupport_introspection_cpp::FingerData_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

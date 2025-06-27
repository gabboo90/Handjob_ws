// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from leap_node:msg/HandData.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "leap_node/msg/detail/hand_data__functions.h"
#include "leap_node/msg/detail/hand_data__struct.hpp"
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

void HandData_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) leap_node::msg::HandData(_init);
}

void HandData_fini_function(void * message_memory)
{
  auto typed_message = static_cast<leap_node::msg::HandData *>(message_memory);
  typed_message->~HandData();
}

size_t size_function__HandData__fingers(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<leap_node::msg::FingerData> *>(untyped_member);
  return member->size();
}

const void * get_const_function__HandData__fingers(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<leap_node::msg::FingerData> *>(untyped_member);
  return &member[index];
}

void * get_function__HandData__fingers(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<leap_node::msg::FingerData> *>(untyped_member);
  return &member[index];
}

void fetch_function__HandData__fingers(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const leap_node::msg::FingerData *>(
    get_const_function__HandData__fingers(untyped_member, index));
  auto & value = *reinterpret_cast<leap_node::msg::FingerData *>(untyped_value);
  value = item;
}

void assign_function__HandData__fingers(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<leap_node::msg::FingerData *>(
    get_function__HandData__fingers(untyped_member, index));
  const auto & value = *reinterpret_cast<const leap_node::msg::FingerData *>(untyped_value);
  item = value;
}

void resize_function__HandData__fingers(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<leap_node::msg::FingerData> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember HandData_message_member_array[7] = {
  {
    "timestamp",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<builtin_interfaces::msg::Time>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(leap_node::msg::HandData, timestamp),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "hand_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(leap_node::msg::HandData, hand_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "is_right",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(leap_node::msg::HandData, is_right),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "palm_position",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::Point>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(leap_node::msg::HandData, palm_position),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "normal",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::Vector3>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(leap_node::msg::HandData, normal),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "direction",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::Vector3>(),  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(leap_node::msg::HandData, direction),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "fingers",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<leap_node::msg::FingerData>(),  // members of sub message
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(leap_node::msg::HandData, fingers),  // bytes offset in struct
    nullptr,  // default value
    size_function__HandData__fingers,  // size() function pointer
    get_const_function__HandData__fingers,  // get_const(index) function pointer
    get_function__HandData__fingers,  // get(index) function pointer
    fetch_function__HandData__fingers,  // fetch(index, &value) function pointer
    assign_function__HandData__fingers,  // assign(index, value) function pointer
    resize_function__HandData__fingers  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers HandData_message_members = {
  "leap_node::msg",  // message namespace
  "HandData",  // message name
  7,  // number of fields
  sizeof(leap_node::msg::HandData),
  false,  // has_any_key_member_
  HandData_message_member_array,  // message members
  HandData_init_function,  // function to initialize message memory (memory has to be allocated)
  HandData_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t HandData_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &HandData_message_members,
  get_message_typesupport_handle_function,
  &leap_node__msg__HandData__get_type_hash,
  &leap_node__msg__HandData__get_type_description,
  &leap_node__msg__HandData__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace leap_node


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<leap_node::msg::HandData>()
{
  return &::leap_node::msg::rosidl_typesupport_introspection_cpp::HandData_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, leap_node, msg, HandData)() {
  return &::leap_node::msg::rosidl_typesupport_introspection_cpp::HandData_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

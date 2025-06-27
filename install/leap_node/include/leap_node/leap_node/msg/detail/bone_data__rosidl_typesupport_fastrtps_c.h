// generated from rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
// with input from leap_node:msg/BoneData.idl
// generated code does not contain a copyright notice
#ifndef LEAP_NODE__MSG__DETAIL__BONE_DATA__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
#define LEAP_NODE__MSG__DETAIL__BONE_DATA__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_


#include <stddef.h>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "leap_node/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "leap_node/msg/detail/bone_data__struct.h"
#include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_leap_node
bool cdr_serialize_leap_node__msg__BoneData(
  const leap_node__msg__BoneData * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_leap_node
bool cdr_deserialize_leap_node__msg__BoneData(
  eprosima::fastcdr::Cdr &,
  leap_node__msg__BoneData * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_leap_node
size_t get_serialized_size_leap_node__msg__BoneData(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_leap_node
size_t max_serialized_size_leap_node__msg__BoneData(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_leap_node
bool cdr_serialize_key_leap_node__msg__BoneData(
  const leap_node__msg__BoneData * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_leap_node
size_t get_serialized_size_key_leap_node__msg__BoneData(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_leap_node
size_t max_serialized_size_key_leap_node__msg__BoneData(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_leap_node
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, leap_node, msg, BoneData)();

#ifdef __cplusplus
}
#endif

#endif  // LEAP_NODE__MSG__DETAIL__BONE_DATA__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_

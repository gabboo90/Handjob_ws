// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from leap_node:msg/FingerData.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "leap_node/msg/finger_data.h"


#ifndef LEAP_NODE__MSG__DETAIL__FINGER_DATA__STRUCT_H_
#define LEAP_NODE__MSG__DETAIL__FINGER_DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'timestamp'
#include "builtin_interfaces/msg/detail/time__struct.h"
// Member 'bones'
#include "leap_node/msg/detail/bone_data__struct.h"

/// Struct defined in msg/FingerData in the package leap_node.
typedef struct leap_node__msg__FingerData
{
  builtin_interfaces__msg__Time timestamp;
  int32_t finger_type;
  float length;
  float width;
  leap_node__msg__BoneData__Sequence bones;
} leap_node__msg__FingerData;

// Struct for a sequence of leap_node__msg__FingerData.
typedef struct leap_node__msg__FingerData__Sequence
{
  leap_node__msg__FingerData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} leap_node__msg__FingerData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LEAP_NODE__MSG__DETAIL__FINGER_DATA__STRUCT_H_

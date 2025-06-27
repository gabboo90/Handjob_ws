// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from leap_node:msg/BoneData.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "leap_node/msg/bone_data.h"


#ifndef LEAP_NODE__MSG__DETAIL__BONE_DATA__STRUCT_H_
#define LEAP_NODE__MSG__DETAIL__BONE_DATA__STRUCT_H_

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
// Member 'start'
// Member 'end'
#include "geometry_msgs/msg/detail/point__struct.h"
// Member 'direction'
#include "geometry_msgs/msg/detail/vector3__struct.h"

/// Struct defined in msg/BoneData in the package leap_node.
typedef struct leap_node__msg__BoneData
{
  builtin_interfaces__msg__Time timestamp;
  int32_t bone_type;
  geometry_msgs__msg__Point start;
  geometry_msgs__msg__Point end;
  geometry_msgs__msg__Vector3 direction;
} leap_node__msg__BoneData;

// Struct for a sequence of leap_node__msg__BoneData.
typedef struct leap_node__msg__BoneData__Sequence
{
  leap_node__msg__BoneData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} leap_node__msg__BoneData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LEAP_NODE__MSG__DETAIL__BONE_DATA__STRUCT_H_

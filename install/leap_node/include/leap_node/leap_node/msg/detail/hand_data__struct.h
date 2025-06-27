// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from leap_node:msg/HandData.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "leap_node/msg/hand_data.h"


#ifndef LEAP_NODE__MSG__DETAIL__HAND_DATA__STRUCT_H_
#define LEAP_NODE__MSG__DETAIL__HAND_DATA__STRUCT_H_

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
// Member 'palm_position'
#include "geometry_msgs/msg/detail/point__struct.h"
// Member 'normal'
// Member 'direction'
#include "geometry_msgs/msg/detail/vector3__struct.h"
// Member 'fingers'
#include "leap_node/msg/detail/finger_data__struct.h"

/// Struct defined in msg/HandData in the package leap_node.
typedef struct leap_node__msg__HandData
{
  builtin_interfaces__msg__Time timestamp;
  int32_t hand_id;
  bool is_right;
  geometry_msgs__msg__Point palm_position;
  geometry_msgs__msg__Vector3 normal;
  geometry_msgs__msg__Vector3 direction;
  leap_node__msg__FingerData__Sequence fingers;
} leap_node__msg__HandData;

// Struct for a sequence of leap_node__msg__HandData.
typedef struct leap_node__msg__HandData__Sequence
{
  leap_node__msg__HandData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} leap_node__msg__HandData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // LEAP_NODE__MSG__DETAIL__HAND_DATA__STRUCT_H_

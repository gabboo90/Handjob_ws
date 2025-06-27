// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from leap_node:msg/HandData.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "leap_node/msg/detail/hand_data__rosidl_typesupport_introspection_c.h"
#include "leap_node/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "leap_node/msg/detail/hand_data__functions.h"
#include "leap_node/msg/detail/hand_data__struct.h"


// Include directives for member types
// Member `timestamp`
#include "builtin_interfaces/msg/time.h"
// Member `timestamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"
// Member `palm_position`
#include "geometry_msgs/msg/point.h"
// Member `palm_position`
#include "geometry_msgs/msg/detail/point__rosidl_typesupport_introspection_c.h"
// Member `normal`
// Member `direction`
#include "geometry_msgs/msg/vector3.h"
// Member `normal`
// Member `direction`
#include "geometry_msgs/msg/detail/vector3__rosidl_typesupport_introspection_c.h"
// Member `fingers`
#include "leap_node/msg/finger_data.h"
// Member `fingers`
#include "leap_node/msg/detail/finger_data__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void leap_node__msg__HandData__rosidl_typesupport_introspection_c__HandData_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  leap_node__msg__HandData__init(message_memory);
}

void leap_node__msg__HandData__rosidl_typesupport_introspection_c__HandData_fini_function(void * message_memory)
{
  leap_node__msg__HandData__fini(message_memory);
}

size_t leap_node__msg__HandData__rosidl_typesupport_introspection_c__size_function__HandData__fingers(
  const void * untyped_member)
{
  const leap_node__msg__FingerData__Sequence * member =
    (const leap_node__msg__FingerData__Sequence *)(untyped_member);
  return member->size;
}

const void * leap_node__msg__HandData__rosidl_typesupport_introspection_c__get_const_function__HandData__fingers(
  const void * untyped_member, size_t index)
{
  const leap_node__msg__FingerData__Sequence * member =
    (const leap_node__msg__FingerData__Sequence *)(untyped_member);
  return &member->data[index];
}

void * leap_node__msg__HandData__rosidl_typesupport_introspection_c__get_function__HandData__fingers(
  void * untyped_member, size_t index)
{
  leap_node__msg__FingerData__Sequence * member =
    (leap_node__msg__FingerData__Sequence *)(untyped_member);
  return &member->data[index];
}

void leap_node__msg__HandData__rosidl_typesupport_introspection_c__fetch_function__HandData__fingers(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const leap_node__msg__FingerData * item =
    ((const leap_node__msg__FingerData *)
    leap_node__msg__HandData__rosidl_typesupport_introspection_c__get_const_function__HandData__fingers(untyped_member, index));
  leap_node__msg__FingerData * value =
    (leap_node__msg__FingerData *)(untyped_value);
  *value = *item;
}

void leap_node__msg__HandData__rosidl_typesupport_introspection_c__assign_function__HandData__fingers(
  void * untyped_member, size_t index, const void * untyped_value)
{
  leap_node__msg__FingerData * item =
    ((leap_node__msg__FingerData *)
    leap_node__msg__HandData__rosidl_typesupport_introspection_c__get_function__HandData__fingers(untyped_member, index));
  const leap_node__msg__FingerData * value =
    (const leap_node__msg__FingerData *)(untyped_value);
  *item = *value;
}

bool leap_node__msg__HandData__rosidl_typesupport_introspection_c__resize_function__HandData__fingers(
  void * untyped_member, size_t size)
{
  leap_node__msg__FingerData__Sequence * member =
    (leap_node__msg__FingerData__Sequence *)(untyped_member);
  leap_node__msg__FingerData__Sequence__fini(member);
  return leap_node__msg__FingerData__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember leap_node__msg__HandData__rosidl_typesupport_introspection_c__HandData_message_member_array[7] = {
  {
    "timestamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(leap_node__msg__HandData, timestamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "hand_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(leap_node__msg__HandData, hand_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "is_right",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(leap_node__msg__HandData, is_right),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "palm_position",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(leap_node__msg__HandData, palm_position),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "normal",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(leap_node__msg__HandData, normal),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "direction",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(leap_node__msg__HandData, direction),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "fingers",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(leap_node__msg__HandData, fingers),  // bytes offset in struct
    NULL,  // default value
    leap_node__msg__HandData__rosidl_typesupport_introspection_c__size_function__HandData__fingers,  // size() function pointer
    leap_node__msg__HandData__rosidl_typesupport_introspection_c__get_const_function__HandData__fingers,  // get_const(index) function pointer
    leap_node__msg__HandData__rosidl_typesupport_introspection_c__get_function__HandData__fingers,  // get(index) function pointer
    leap_node__msg__HandData__rosidl_typesupport_introspection_c__fetch_function__HandData__fingers,  // fetch(index, &value) function pointer
    leap_node__msg__HandData__rosidl_typesupport_introspection_c__assign_function__HandData__fingers,  // assign(index, value) function pointer
    leap_node__msg__HandData__rosidl_typesupport_introspection_c__resize_function__HandData__fingers  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers leap_node__msg__HandData__rosidl_typesupport_introspection_c__HandData_message_members = {
  "leap_node__msg",  // message namespace
  "HandData",  // message name
  7,  // number of fields
  sizeof(leap_node__msg__HandData),
  false,  // has_any_key_member_
  leap_node__msg__HandData__rosidl_typesupport_introspection_c__HandData_message_member_array,  // message members
  leap_node__msg__HandData__rosidl_typesupport_introspection_c__HandData_init_function,  // function to initialize message memory (memory has to be allocated)
  leap_node__msg__HandData__rosidl_typesupport_introspection_c__HandData_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t leap_node__msg__HandData__rosidl_typesupport_introspection_c__HandData_message_type_support_handle = {
  0,
  &leap_node__msg__HandData__rosidl_typesupport_introspection_c__HandData_message_members,
  get_message_typesupport_handle_function,
  &leap_node__msg__HandData__get_type_hash,
  &leap_node__msg__HandData__get_type_description,
  &leap_node__msg__HandData__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_leap_node
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, leap_node, msg, HandData)() {
  leap_node__msg__HandData__rosidl_typesupport_introspection_c__HandData_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  leap_node__msg__HandData__rosidl_typesupport_introspection_c__HandData_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point)();
  leap_node__msg__HandData__rosidl_typesupport_introspection_c__HandData_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Vector3)();
  leap_node__msg__HandData__rosidl_typesupport_introspection_c__HandData_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Vector3)();
  leap_node__msg__HandData__rosidl_typesupport_introspection_c__HandData_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, leap_node, msg, FingerData)();
  if (!leap_node__msg__HandData__rosidl_typesupport_introspection_c__HandData_message_type_support_handle.typesupport_identifier) {
    leap_node__msg__HandData__rosidl_typesupport_introspection_c__HandData_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &leap_node__msg__HandData__rosidl_typesupport_introspection_c__HandData_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

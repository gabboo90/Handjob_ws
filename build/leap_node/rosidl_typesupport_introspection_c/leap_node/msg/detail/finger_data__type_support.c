// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from leap_node:msg/FingerData.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "leap_node/msg/detail/finger_data__rosidl_typesupport_introspection_c.h"
#include "leap_node/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "leap_node/msg/detail/finger_data__functions.h"
#include "leap_node/msg/detail/finger_data__struct.h"


// Include directives for member types
// Member `timestamp`
#include "builtin_interfaces/msg/time.h"
// Member `timestamp`
#include "builtin_interfaces/msg/detail/time__rosidl_typesupport_introspection_c.h"
// Member `bones`
#include "leap_node/msg/bone_data.h"
// Member `bones`
#include "leap_node/msg/detail/bone_data__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void leap_node__msg__FingerData__rosidl_typesupport_introspection_c__FingerData_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  leap_node__msg__FingerData__init(message_memory);
}

void leap_node__msg__FingerData__rosidl_typesupport_introspection_c__FingerData_fini_function(void * message_memory)
{
  leap_node__msg__FingerData__fini(message_memory);
}

size_t leap_node__msg__FingerData__rosidl_typesupport_introspection_c__size_function__FingerData__bones(
  const void * untyped_member)
{
  const leap_node__msg__BoneData__Sequence * member =
    (const leap_node__msg__BoneData__Sequence *)(untyped_member);
  return member->size;
}

const void * leap_node__msg__FingerData__rosidl_typesupport_introspection_c__get_const_function__FingerData__bones(
  const void * untyped_member, size_t index)
{
  const leap_node__msg__BoneData__Sequence * member =
    (const leap_node__msg__BoneData__Sequence *)(untyped_member);
  return &member->data[index];
}

void * leap_node__msg__FingerData__rosidl_typesupport_introspection_c__get_function__FingerData__bones(
  void * untyped_member, size_t index)
{
  leap_node__msg__BoneData__Sequence * member =
    (leap_node__msg__BoneData__Sequence *)(untyped_member);
  return &member->data[index];
}

void leap_node__msg__FingerData__rosidl_typesupport_introspection_c__fetch_function__FingerData__bones(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const leap_node__msg__BoneData * item =
    ((const leap_node__msg__BoneData *)
    leap_node__msg__FingerData__rosidl_typesupport_introspection_c__get_const_function__FingerData__bones(untyped_member, index));
  leap_node__msg__BoneData * value =
    (leap_node__msg__BoneData *)(untyped_value);
  *value = *item;
}

void leap_node__msg__FingerData__rosidl_typesupport_introspection_c__assign_function__FingerData__bones(
  void * untyped_member, size_t index, const void * untyped_value)
{
  leap_node__msg__BoneData * item =
    ((leap_node__msg__BoneData *)
    leap_node__msg__FingerData__rosidl_typesupport_introspection_c__get_function__FingerData__bones(untyped_member, index));
  const leap_node__msg__BoneData * value =
    (const leap_node__msg__BoneData *)(untyped_value);
  *item = *value;
}

bool leap_node__msg__FingerData__rosidl_typesupport_introspection_c__resize_function__FingerData__bones(
  void * untyped_member, size_t size)
{
  leap_node__msg__BoneData__Sequence * member =
    (leap_node__msg__BoneData__Sequence *)(untyped_member);
  leap_node__msg__BoneData__Sequence__fini(member);
  return leap_node__msg__BoneData__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember leap_node__msg__FingerData__rosidl_typesupport_introspection_c__FingerData_message_member_array[7] = {
  {
    "timestamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(leap_node__msg__FingerData, timestamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "finger_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(leap_node__msg__FingerData, finger_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "length",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(leap_node__msg__FingerData, length),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "width",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(leap_node__msg__FingerData, width),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "mcp_pitch_deg",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(leap_node__msg__FingerData, mcp_pitch_deg),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "mcp_yaw_deg",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is key
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(leap_node__msg__FingerData, mcp_yaw_deg),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "bones",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is key
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(leap_node__msg__FingerData, bones),  // bytes offset in struct
    NULL,  // default value
    leap_node__msg__FingerData__rosidl_typesupport_introspection_c__size_function__FingerData__bones,  // size() function pointer
    leap_node__msg__FingerData__rosidl_typesupport_introspection_c__get_const_function__FingerData__bones,  // get_const(index) function pointer
    leap_node__msg__FingerData__rosidl_typesupport_introspection_c__get_function__FingerData__bones,  // get(index) function pointer
    leap_node__msg__FingerData__rosidl_typesupport_introspection_c__fetch_function__FingerData__bones,  // fetch(index, &value) function pointer
    leap_node__msg__FingerData__rosidl_typesupport_introspection_c__assign_function__FingerData__bones,  // assign(index, value) function pointer
    leap_node__msg__FingerData__rosidl_typesupport_introspection_c__resize_function__FingerData__bones  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers leap_node__msg__FingerData__rosidl_typesupport_introspection_c__FingerData_message_members = {
  "leap_node__msg",  // message namespace
  "FingerData",  // message name
  7,  // number of fields
  sizeof(leap_node__msg__FingerData),
  false,  // has_any_key_member_
  leap_node__msg__FingerData__rosidl_typesupport_introspection_c__FingerData_message_member_array,  // message members
  leap_node__msg__FingerData__rosidl_typesupport_introspection_c__FingerData_init_function,  // function to initialize message memory (memory has to be allocated)
  leap_node__msg__FingerData__rosidl_typesupport_introspection_c__FingerData_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t leap_node__msg__FingerData__rosidl_typesupport_introspection_c__FingerData_message_type_support_handle = {
  0,
  &leap_node__msg__FingerData__rosidl_typesupport_introspection_c__FingerData_message_members,
  get_message_typesupport_handle_function,
  &leap_node__msg__FingerData__get_type_hash,
  &leap_node__msg__FingerData__get_type_description,
  &leap_node__msg__FingerData__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_leap_node
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, leap_node, msg, FingerData)() {
  leap_node__msg__FingerData__rosidl_typesupport_introspection_c__FingerData_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, builtin_interfaces, msg, Time)();
  leap_node__msg__FingerData__rosidl_typesupport_introspection_c__FingerData_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, leap_node, msg, BoneData)();
  if (!leap_node__msg__FingerData__rosidl_typesupport_introspection_c__FingerData_message_type_support_handle.typesupport_identifier) {
    leap_node__msg__FingerData__rosidl_typesupport_introspection_c__FingerData_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &leap_node__msg__FingerData__rosidl_typesupport_introspection_c__FingerData_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

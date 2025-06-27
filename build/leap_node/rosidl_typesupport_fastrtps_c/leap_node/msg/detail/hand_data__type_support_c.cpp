// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from leap_node:msg/HandData.idl
// generated code does not contain a copyright notice
#include "leap_node/msg/detail/hand_data__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "leap_node/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "leap_node/msg/detail/hand_data__struct.h"
#include "leap_node/msg/detail/hand_data__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "builtin_interfaces/msg/detail/time__functions.h"  // timestamp
#include "geometry_msgs/msg/detail/point__functions.h"  // palm_position
#include "geometry_msgs/msg/detail/vector3__functions.h"  // direction, normal
#include "leap_node/msg/detail/finger_data__functions.h"  // index, middle, thumb

// forward declare type support functions

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_leap_node
bool cdr_serialize_builtin_interfaces__msg__Time(
  const builtin_interfaces__msg__Time * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_leap_node
bool cdr_deserialize_builtin_interfaces__msg__Time(
  eprosima::fastcdr::Cdr & cdr,
  builtin_interfaces__msg__Time * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_leap_node
size_t get_serialized_size_builtin_interfaces__msg__Time(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_leap_node
size_t max_serialized_size_builtin_interfaces__msg__Time(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_leap_node
bool cdr_serialize_key_builtin_interfaces__msg__Time(
  const builtin_interfaces__msg__Time * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_leap_node
size_t get_serialized_size_key_builtin_interfaces__msg__Time(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_leap_node
size_t max_serialized_size_key_builtin_interfaces__msg__Time(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_leap_node
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, builtin_interfaces, msg, Time)();

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_leap_node
bool cdr_serialize_geometry_msgs__msg__Point(
  const geometry_msgs__msg__Point * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_leap_node
bool cdr_deserialize_geometry_msgs__msg__Point(
  eprosima::fastcdr::Cdr & cdr,
  geometry_msgs__msg__Point * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_leap_node
size_t get_serialized_size_geometry_msgs__msg__Point(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_leap_node
size_t max_serialized_size_geometry_msgs__msg__Point(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_leap_node
bool cdr_serialize_key_geometry_msgs__msg__Point(
  const geometry_msgs__msg__Point * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_leap_node
size_t get_serialized_size_key_geometry_msgs__msg__Point(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_leap_node
size_t max_serialized_size_key_geometry_msgs__msg__Point(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_leap_node
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Point)();

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_leap_node
bool cdr_serialize_geometry_msgs__msg__Vector3(
  const geometry_msgs__msg__Vector3 * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_leap_node
bool cdr_deserialize_geometry_msgs__msg__Vector3(
  eprosima::fastcdr::Cdr & cdr,
  geometry_msgs__msg__Vector3 * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_leap_node
size_t get_serialized_size_geometry_msgs__msg__Vector3(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_leap_node
size_t max_serialized_size_geometry_msgs__msg__Vector3(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_leap_node
bool cdr_serialize_key_geometry_msgs__msg__Vector3(
  const geometry_msgs__msg__Vector3 * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_leap_node
size_t get_serialized_size_key_geometry_msgs__msg__Vector3(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_leap_node
size_t max_serialized_size_key_geometry_msgs__msg__Vector3(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_leap_node
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, geometry_msgs, msg, Vector3)();

bool cdr_serialize_leap_node__msg__FingerData(
  const leap_node__msg__FingerData * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_leap_node__msg__FingerData(
  eprosima::fastcdr::Cdr & cdr,
  leap_node__msg__FingerData * ros_message);

size_t get_serialized_size_leap_node__msg__FingerData(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_leap_node__msg__FingerData(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_leap_node__msg__FingerData(
  const leap_node__msg__FingerData * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_leap_node__msg__FingerData(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_leap_node__msg__FingerData(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, leap_node, msg, FingerData)();


using _HandData__ros_msg_type = leap_node__msg__HandData;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_leap_node
bool cdr_serialize_leap_node__msg__HandData(
  const leap_node__msg__HandData * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: timestamp
  {
    cdr_serialize_builtin_interfaces__msg__Time(
      &ros_message->timestamp, cdr);
  }

  // Field name: hand_id
  {
    cdr << ros_message->hand_id;
  }

  // Field name: is_right
  {
    cdr << (ros_message->is_right ? true : false);
  }

  // Field name: palm_position
  {
    cdr_serialize_geometry_msgs__msg__Point(
      &ros_message->palm_position, cdr);
  }

  // Field name: normal
  {
    cdr_serialize_geometry_msgs__msg__Vector3(
      &ros_message->normal, cdr);
  }

  // Field name: direction
  {
    cdr_serialize_geometry_msgs__msg__Vector3(
      &ros_message->direction, cdr);
  }

  // Field name: thumb
  {
    cdr_serialize_leap_node__msg__FingerData(
      &ros_message->thumb, cdr);
  }

  // Field name: index
  {
    cdr_serialize_leap_node__msg__FingerData(
      &ros_message->index, cdr);
  }

  // Field name: middle
  {
    cdr_serialize_leap_node__msg__FingerData(
      &ros_message->middle, cdr);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_leap_node
bool cdr_deserialize_leap_node__msg__HandData(
  eprosima::fastcdr::Cdr & cdr,
  leap_node__msg__HandData * ros_message)
{
  // Field name: timestamp
  {
    cdr_deserialize_builtin_interfaces__msg__Time(cdr, &ros_message->timestamp);
  }

  // Field name: hand_id
  {
    cdr >> ros_message->hand_id;
  }

  // Field name: is_right
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->is_right = tmp ? true : false;
  }

  // Field name: palm_position
  {
    cdr_deserialize_geometry_msgs__msg__Point(cdr, &ros_message->palm_position);
  }

  // Field name: normal
  {
    cdr_deserialize_geometry_msgs__msg__Vector3(cdr, &ros_message->normal);
  }

  // Field name: direction
  {
    cdr_deserialize_geometry_msgs__msg__Vector3(cdr, &ros_message->direction);
  }

  // Field name: thumb
  {
    cdr_deserialize_leap_node__msg__FingerData(cdr, &ros_message->thumb);
  }

  // Field name: index
  {
    cdr_deserialize_leap_node__msg__FingerData(cdr, &ros_message->index);
  }

  // Field name: middle
  {
    cdr_deserialize_leap_node__msg__FingerData(cdr, &ros_message->middle);
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_leap_node
size_t get_serialized_size_leap_node__msg__HandData(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _HandData__ros_msg_type * ros_message = static_cast<const _HandData__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: timestamp
  current_alignment += get_serialized_size_builtin_interfaces__msg__Time(
    &(ros_message->timestamp), current_alignment);

  // Field name: hand_id
  {
    size_t item_size = sizeof(ros_message->hand_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: is_right
  {
    size_t item_size = sizeof(ros_message->is_right);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: palm_position
  current_alignment += get_serialized_size_geometry_msgs__msg__Point(
    &(ros_message->palm_position), current_alignment);

  // Field name: normal
  current_alignment += get_serialized_size_geometry_msgs__msg__Vector3(
    &(ros_message->normal), current_alignment);

  // Field name: direction
  current_alignment += get_serialized_size_geometry_msgs__msg__Vector3(
    &(ros_message->direction), current_alignment);

  // Field name: thumb
  current_alignment += get_serialized_size_leap_node__msg__FingerData(
    &(ros_message->thumb), current_alignment);

  // Field name: index
  current_alignment += get_serialized_size_leap_node__msg__FingerData(
    &(ros_message->index), current_alignment);

  // Field name: middle
  current_alignment += get_serialized_size_leap_node__msg__FingerData(
    &(ros_message->middle), current_alignment);

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_leap_node
size_t max_serialized_size_leap_node__msg__HandData(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Field name: timestamp
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_builtin_interfaces__msg__Time(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: hand_id
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: is_right
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: palm_position
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_geometry_msgs__msg__Point(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: normal
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_geometry_msgs__msg__Vector3(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: direction
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_geometry_msgs__msg__Vector3(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: thumb
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_leap_node__msg__FingerData(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: index
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_leap_node__msg__FingerData(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: middle
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_leap_node__msg__FingerData(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = leap_node__msg__HandData;
    is_plain =
      (
      offsetof(DataType, middle) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_leap_node
bool cdr_serialize_key_leap_node__msg__HandData(
  const leap_node__msg__HandData * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: timestamp
  {
    cdr_serialize_key_builtin_interfaces__msg__Time(
      &ros_message->timestamp, cdr);
  }

  // Field name: hand_id
  {
    cdr << ros_message->hand_id;
  }

  // Field name: is_right
  {
    cdr << (ros_message->is_right ? true : false);
  }

  // Field name: palm_position
  {
    cdr_serialize_key_geometry_msgs__msg__Point(
      &ros_message->palm_position, cdr);
  }

  // Field name: normal
  {
    cdr_serialize_key_geometry_msgs__msg__Vector3(
      &ros_message->normal, cdr);
  }

  // Field name: direction
  {
    cdr_serialize_key_geometry_msgs__msg__Vector3(
      &ros_message->direction, cdr);
  }

  // Field name: thumb
  {
    cdr_serialize_key_leap_node__msg__FingerData(
      &ros_message->thumb, cdr);
  }

  // Field name: index
  {
    cdr_serialize_key_leap_node__msg__FingerData(
      &ros_message->index, cdr);
  }

  // Field name: middle
  {
    cdr_serialize_key_leap_node__msg__FingerData(
      &ros_message->middle, cdr);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_leap_node
size_t get_serialized_size_key_leap_node__msg__HandData(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _HandData__ros_msg_type * ros_message = static_cast<const _HandData__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: timestamp
  current_alignment += get_serialized_size_key_builtin_interfaces__msg__Time(
    &(ros_message->timestamp), current_alignment);

  // Field name: hand_id
  {
    size_t item_size = sizeof(ros_message->hand_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: is_right
  {
    size_t item_size = sizeof(ros_message->is_right);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: palm_position
  current_alignment += get_serialized_size_key_geometry_msgs__msg__Point(
    &(ros_message->palm_position), current_alignment);

  // Field name: normal
  current_alignment += get_serialized_size_key_geometry_msgs__msg__Vector3(
    &(ros_message->normal), current_alignment);

  // Field name: direction
  current_alignment += get_serialized_size_key_geometry_msgs__msg__Vector3(
    &(ros_message->direction), current_alignment);

  // Field name: thumb
  current_alignment += get_serialized_size_key_leap_node__msg__FingerData(
    &(ros_message->thumb), current_alignment);

  // Field name: index
  current_alignment += get_serialized_size_key_leap_node__msg__FingerData(
    &(ros_message->index), current_alignment);

  // Field name: middle
  current_alignment += get_serialized_size_key_leap_node__msg__FingerData(
    &(ros_message->middle), current_alignment);

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_leap_node
size_t max_serialized_size_key_leap_node__msg__HandData(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;
  // Field name: timestamp
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_builtin_interfaces__msg__Time(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: hand_id
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: is_right
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: palm_position
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_geometry_msgs__msg__Point(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: normal
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_geometry_msgs__msg__Vector3(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: direction
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_geometry_msgs__msg__Vector3(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: thumb
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_leap_node__msg__FingerData(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: index
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_leap_node__msg__FingerData(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: middle
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_leap_node__msg__FingerData(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = leap_node__msg__HandData;
    is_plain =
      (
      offsetof(DataType, middle) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _HandData__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const leap_node__msg__HandData * ros_message = static_cast<const leap_node__msg__HandData *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_leap_node__msg__HandData(ros_message, cdr);
}

static bool _HandData__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  leap_node__msg__HandData * ros_message = static_cast<leap_node__msg__HandData *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_leap_node__msg__HandData(cdr, ros_message);
}

static uint32_t _HandData__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_leap_node__msg__HandData(
      untyped_ros_message, 0));
}

static size_t _HandData__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_leap_node__msg__HandData(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_HandData = {
  "leap_node::msg",
  "HandData",
  _HandData__cdr_serialize,
  _HandData__cdr_deserialize,
  _HandData__get_serialized_size,
  _HandData__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _HandData__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_HandData,
  get_message_typesupport_handle_function,
  &leap_node__msg__HandData__get_type_hash,
  &leap_node__msg__HandData__get_type_description,
  &leap_node__msg__HandData__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, leap_node, msg, HandData)() {
  return &_HandData__type_support;
}

#if defined(__cplusplus)
}
#endif

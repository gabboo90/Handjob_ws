// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from leap_node:msg/HandData.idl
// generated code does not contain a copyright notice
#include "leap_node/msg/detail/hand_data__rosidl_typesupport_fastrtps_cpp.hpp"
#include "leap_node/msg/detail/hand_data__functions.h"
#include "leap_node/msg/detail/hand_data__struct.hpp"

#include <cstddef>
#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace builtin_interfaces
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const builtin_interfaces::msg::Time &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  builtin_interfaces::msg::Time &);
size_t get_serialized_size(
  const builtin_interfaces::msg::Time &,
  size_t current_alignment);
size_t
max_serialized_size_Time(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
bool cdr_serialize_key(
  const builtin_interfaces::msg::Time &,
  eprosima::fastcdr::Cdr &);
size_t get_serialized_size_key(
  const builtin_interfaces::msg::Time &,
  size_t current_alignment);
size_t
max_serialized_size_key_Time(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace builtin_interfaces

namespace geometry_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const geometry_msgs::msg::Point &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  geometry_msgs::msg::Point &);
size_t get_serialized_size(
  const geometry_msgs::msg::Point &,
  size_t current_alignment);
size_t
max_serialized_size_Point(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
bool cdr_serialize_key(
  const geometry_msgs::msg::Point &,
  eprosima::fastcdr::Cdr &);
size_t get_serialized_size_key(
  const geometry_msgs::msg::Point &,
  size_t current_alignment);
size_t
max_serialized_size_key_Point(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace geometry_msgs

namespace geometry_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const geometry_msgs::msg::Vector3 &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  geometry_msgs::msg::Vector3 &);
size_t get_serialized_size(
  const geometry_msgs::msg::Vector3 &,
  size_t current_alignment);
size_t
max_serialized_size_Vector3(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
bool cdr_serialize_key(
  const geometry_msgs::msg::Vector3 &,
  eprosima::fastcdr::Cdr &);
size_t get_serialized_size_key(
  const geometry_msgs::msg::Vector3 &,
  size_t current_alignment);
size_t
max_serialized_size_key_Vector3(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace geometry_msgs

// functions for geometry_msgs::msg::Vector3 already declared above

namespace leap_node
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const leap_node::msg::FingerData &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  leap_node::msg::FingerData &);
size_t get_serialized_size(
  const leap_node::msg::FingerData &,
  size_t current_alignment);
size_t
max_serialized_size_FingerData(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
bool cdr_serialize_key(
  const leap_node::msg::FingerData &,
  eprosima::fastcdr::Cdr &);
size_t get_serialized_size_key(
  const leap_node::msg::FingerData &,
  size_t current_alignment);
size_t
max_serialized_size_key_FingerData(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace leap_node

// functions for leap_node::msg::FingerData already declared above

// functions for leap_node::msg::FingerData already declared above


namespace leap_node
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{


bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_leap_node
cdr_serialize(
  const leap_node::msg::HandData & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: timestamp
  builtin_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.timestamp,
    cdr);

  // Member: hand_id
  cdr << ros_message.hand_id;

  // Member: is_right
  cdr << (ros_message.is_right ? true : false);

  // Member: palm_position
  geometry_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.palm_position,
    cdr);

  // Member: normal
  geometry_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.normal,
    cdr);

  // Member: direction
  geometry_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.direction,
    cdr);

  // Member: thumb
  leap_node::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.thumb,
    cdr);

  // Member: index
  leap_node::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.index,
    cdr);

  // Member: middle
  leap_node::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.middle,
    cdr);

  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_leap_node
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  leap_node::msg::HandData & ros_message)
{
  // Member: timestamp
  builtin_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.timestamp);

  // Member: hand_id
  cdr >> ros_message.hand_id;

  // Member: is_right
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.is_right = tmp ? true : false;
  }

  // Member: palm_position
  geometry_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.palm_position);

  // Member: normal
  geometry_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.normal);

  // Member: direction
  geometry_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.direction);

  // Member: thumb
  leap_node::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.thumb);

  // Member: index
  leap_node::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.index);

  // Member: middle
  leap_node::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.middle);

  return true;
}


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_leap_node
get_serialized_size(
  const leap_node::msg::HandData & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: timestamp
  current_alignment +=
    builtin_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.timestamp, current_alignment);

  // Member: hand_id
  {
    size_t item_size = sizeof(ros_message.hand_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: is_right
  {
    size_t item_size = sizeof(ros_message.is_right);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: palm_position
  current_alignment +=
    geometry_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.palm_position, current_alignment);

  // Member: normal
  current_alignment +=
    geometry_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.normal, current_alignment);

  // Member: direction
  current_alignment +=
    geometry_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.direction, current_alignment);

  // Member: thumb
  current_alignment +=
    leap_node::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.thumb, current_alignment);

  // Member: index
  current_alignment +=
    leap_node::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.index, current_alignment);

  // Member: middle
  current_alignment +=
    leap_node::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.middle, current_alignment);

  return current_alignment - initial_alignment;
}


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_leap_node
max_serialized_size_HandData(
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

  // Member: timestamp
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        builtin_interfaces::msg::typesupport_fastrtps_cpp::max_serialized_size_Time(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // Member: hand_id
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: is_right
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: palm_position
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        geometry_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Point(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // Member: normal
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        geometry_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Vector3(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // Member: direction
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        geometry_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Vector3(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // Member: thumb
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        leap_node::msg::typesupport_fastrtps_cpp::max_serialized_size_FingerData(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // Member: index
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        leap_node::msg::typesupport_fastrtps_cpp::max_serialized_size_FingerData(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // Member: middle
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        leap_node::msg::typesupport_fastrtps_cpp::max_serialized_size_FingerData(
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
    using DataType = leap_node::msg::HandData;
    is_plain =
      (
      offsetof(DataType, middle) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_leap_node
cdr_serialize_key(
  const leap_node::msg::HandData & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: timestamp
  builtin_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize_key(
    ros_message.timestamp,
    cdr);

  // Member: hand_id
  cdr << ros_message.hand_id;

  // Member: is_right
  cdr << (ros_message.is_right ? true : false);

  // Member: palm_position
  geometry_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize_key(
    ros_message.palm_position,
    cdr);

  // Member: normal
  geometry_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize_key(
    ros_message.normal,
    cdr);

  // Member: direction
  geometry_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize_key(
    ros_message.direction,
    cdr);

  // Member: thumb
  leap_node::msg::typesupport_fastrtps_cpp::cdr_serialize_key(
    ros_message.thumb,
    cdr);

  // Member: index
  leap_node::msg::typesupport_fastrtps_cpp::cdr_serialize_key(
    ros_message.index,
    cdr);

  // Member: middle
  leap_node::msg::typesupport_fastrtps_cpp::cdr_serialize_key(
    ros_message.middle,
    cdr);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_leap_node
get_serialized_size_key(
  const leap_node::msg::HandData & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: timestamp
  current_alignment +=
    builtin_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size_key(
    ros_message.timestamp, current_alignment);

  // Member: hand_id
  {
    size_t item_size = sizeof(ros_message.hand_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: is_right
  {
    size_t item_size = sizeof(ros_message.is_right);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: palm_position
  current_alignment +=
    geometry_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size_key(
    ros_message.palm_position, current_alignment);

  // Member: normal
  current_alignment +=
    geometry_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size_key(
    ros_message.normal, current_alignment);

  // Member: direction
  current_alignment +=
    geometry_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size_key(
    ros_message.direction, current_alignment);

  // Member: thumb
  current_alignment +=
    leap_node::msg::typesupport_fastrtps_cpp::get_serialized_size_key(
    ros_message.thumb, current_alignment);

  // Member: index
  current_alignment +=
    leap_node::msg::typesupport_fastrtps_cpp::get_serialized_size_key(
    ros_message.index, current_alignment);

  // Member: middle
  current_alignment +=
    leap_node::msg::typesupport_fastrtps_cpp::get_serialized_size_key(
    ros_message.middle, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_leap_node
max_serialized_size_key_HandData(
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

  // Member: timestamp
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        builtin_interfaces::msg::typesupport_fastrtps_cpp::max_serialized_size_key_Time(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: hand_id
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: is_right
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: palm_position
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        geometry_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_key_Point(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: normal
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        geometry_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_key_Vector3(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: direction
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        geometry_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_key_Vector3(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: thumb
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        leap_node::msg::typesupport_fastrtps_cpp::max_serialized_size_key_FingerData(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: index
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        leap_node::msg::typesupport_fastrtps_cpp::max_serialized_size_key_FingerData(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: middle
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        leap_node::msg::typesupport_fastrtps_cpp::max_serialized_size_key_FingerData(
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
    using DataType = leap_node::msg::HandData;
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
  auto typed_message =
    static_cast<const leap_node::msg::HandData *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _HandData__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<leap_node::msg::HandData *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _HandData__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const leap_node::msg::HandData *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _HandData__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_HandData(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _HandData__callbacks = {
  "leap_node::msg",
  "HandData",
  _HandData__cdr_serialize,
  _HandData__cdr_deserialize,
  _HandData__get_serialized_size,
  _HandData__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _HandData__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_HandData__callbacks,
  get_message_typesupport_handle_function,
  &leap_node__msg__HandData__get_type_hash,
  &leap_node__msg__HandData__get_type_description,
  &leap_node__msg__HandData__get_type_description_sources,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace leap_node

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_leap_node
const rosidl_message_type_support_t *
get_message_type_support_handle<leap_node::msg::HandData>()
{
  return &leap_node::msg::typesupport_fastrtps_cpp::_HandData__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, leap_node, msg, HandData)() {
  return &leap_node::msg::typesupport_fastrtps_cpp::_HandData__handle;
}

#ifdef __cplusplus
}
#endif

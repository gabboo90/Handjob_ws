// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from leap_node:msg/BoneData.idl
// generated code does not contain a copyright notice
#include "leap_node/msg/detail/bone_data__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `timestamp`
#include "builtin_interfaces/msg/detail/time__functions.h"
// Member `start`
// Member `end`
#include "geometry_msgs/msg/detail/point__functions.h"
// Member `direction`
#include "geometry_msgs/msg/detail/vector3__functions.h"

bool
leap_node__msg__BoneData__init(leap_node__msg__BoneData * msg)
{
  if (!msg) {
    return false;
  }
  // timestamp
  if (!builtin_interfaces__msg__Time__init(&msg->timestamp)) {
    leap_node__msg__BoneData__fini(msg);
    return false;
  }
  // bone_type
  // start
  if (!geometry_msgs__msg__Point__init(&msg->start)) {
    leap_node__msg__BoneData__fini(msg);
    return false;
  }
  // end
  if (!geometry_msgs__msg__Point__init(&msg->end)) {
    leap_node__msg__BoneData__fini(msg);
    return false;
  }
  // direction
  if (!geometry_msgs__msg__Vector3__init(&msg->direction)) {
    leap_node__msg__BoneData__fini(msg);
    return false;
  }
  return true;
}

void
leap_node__msg__BoneData__fini(leap_node__msg__BoneData * msg)
{
  if (!msg) {
    return;
  }
  // timestamp
  builtin_interfaces__msg__Time__fini(&msg->timestamp);
  // bone_type
  // start
  geometry_msgs__msg__Point__fini(&msg->start);
  // end
  geometry_msgs__msg__Point__fini(&msg->end);
  // direction
  geometry_msgs__msg__Vector3__fini(&msg->direction);
}

bool
leap_node__msg__BoneData__are_equal(const leap_node__msg__BoneData * lhs, const leap_node__msg__BoneData * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // timestamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->timestamp), &(rhs->timestamp)))
  {
    return false;
  }
  // bone_type
  if (lhs->bone_type != rhs->bone_type) {
    return false;
  }
  // start
  if (!geometry_msgs__msg__Point__are_equal(
      &(lhs->start), &(rhs->start)))
  {
    return false;
  }
  // end
  if (!geometry_msgs__msg__Point__are_equal(
      &(lhs->end), &(rhs->end)))
  {
    return false;
  }
  // direction
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->direction), &(rhs->direction)))
  {
    return false;
  }
  return true;
}

bool
leap_node__msg__BoneData__copy(
  const leap_node__msg__BoneData * input,
  leap_node__msg__BoneData * output)
{
  if (!input || !output) {
    return false;
  }
  // timestamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->timestamp), &(output->timestamp)))
  {
    return false;
  }
  // bone_type
  output->bone_type = input->bone_type;
  // start
  if (!geometry_msgs__msg__Point__copy(
      &(input->start), &(output->start)))
  {
    return false;
  }
  // end
  if (!geometry_msgs__msg__Point__copy(
      &(input->end), &(output->end)))
  {
    return false;
  }
  // direction
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->direction), &(output->direction)))
  {
    return false;
  }
  return true;
}

leap_node__msg__BoneData *
leap_node__msg__BoneData__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  leap_node__msg__BoneData * msg = (leap_node__msg__BoneData *)allocator.allocate(sizeof(leap_node__msg__BoneData), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(leap_node__msg__BoneData));
  bool success = leap_node__msg__BoneData__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
leap_node__msg__BoneData__destroy(leap_node__msg__BoneData * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    leap_node__msg__BoneData__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
leap_node__msg__BoneData__Sequence__init(leap_node__msg__BoneData__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  leap_node__msg__BoneData * data = NULL;

  if (size) {
    data = (leap_node__msg__BoneData *)allocator.zero_allocate(size, sizeof(leap_node__msg__BoneData), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = leap_node__msg__BoneData__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        leap_node__msg__BoneData__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
leap_node__msg__BoneData__Sequence__fini(leap_node__msg__BoneData__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      leap_node__msg__BoneData__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

leap_node__msg__BoneData__Sequence *
leap_node__msg__BoneData__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  leap_node__msg__BoneData__Sequence * array = (leap_node__msg__BoneData__Sequence *)allocator.allocate(sizeof(leap_node__msg__BoneData__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = leap_node__msg__BoneData__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
leap_node__msg__BoneData__Sequence__destroy(leap_node__msg__BoneData__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    leap_node__msg__BoneData__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
leap_node__msg__BoneData__Sequence__are_equal(const leap_node__msg__BoneData__Sequence * lhs, const leap_node__msg__BoneData__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!leap_node__msg__BoneData__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
leap_node__msg__BoneData__Sequence__copy(
  const leap_node__msg__BoneData__Sequence * input,
  leap_node__msg__BoneData__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(leap_node__msg__BoneData);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    leap_node__msg__BoneData * data =
      (leap_node__msg__BoneData *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!leap_node__msg__BoneData__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          leap_node__msg__BoneData__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!leap_node__msg__BoneData__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

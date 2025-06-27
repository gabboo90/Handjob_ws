// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from leap_node:msg/HandData.idl
// generated code does not contain a copyright notice
#include "leap_node/msg/detail/hand_data__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `timestamp`
#include "builtin_interfaces/msg/detail/time__functions.h"
// Member `palm_position`
#include "geometry_msgs/msg/detail/point__functions.h"
// Member `normal`
// Member `direction`
#include "geometry_msgs/msg/detail/vector3__functions.h"
// Member `thumb`
// Member `index`
// Member `middle`
#include "leap_node/msg/detail/finger_data__functions.h"

bool
leap_node__msg__HandData__init(leap_node__msg__HandData * msg)
{
  if (!msg) {
    return false;
  }
  // timestamp
  if (!builtin_interfaces__msg__Time__init(&msg->timestamp)) {
    leap_node__msg__HandData__fini(msg);
    return false;
  }
  // hand_id
  // is_right
  // palm_position
  if (!geometry_msgs__msg__Point__init(&msg->palm_position)) {
    leap_node__msg__HandData__fini(msg);
    return false;
  }
  // normal
  if (!geometry_msgs__msg__Vector3__init(&msg->normal)) {
    leap_node__msg__HandData__fini(msg);
    return false;
  }
  // direction
  if (!geometry_msgs__msg__Vector3__init(&msg->direction)) {
    leap_node__msg__HandData__fini(msg);
    return false;
  }
  // thumb
  if (!leap_node__msg__FingerData__init(&msg->thumb)) {
    leap_node__msg__HandData__fini(msg);
    return false;
  }
  // index
  if (!leap_node__msg__FingerData__init(&msg->index)) {
    leap_node__msg__HandData__fini(msg);
    return false;
  }
  // middle
  if (!leap_node__msg__FingerData__init(&msg->middle)) {
    leap_node__msg__HandData__fini(msg);
    return false;
  }
  return true;
}

void
leap_node__msg__HandData__fini(leap_node__msg__HandData * msg)
{
  if (!msg) {
    return;
  }
  // timestamp
  builtin_interfaces__msg__Time__fini(&msg->timestamp);
  // hand_id
  // is_right
  // palm_position
  geometry_msgs__msg__Point__fini(&msg->palm_position);
  // normal
  geometry_msgs__msg__Vector3__fini(&msg->normal);
  // direction
  geometry_msgs__msg__Vector3__fini(&msg->direction);
  // thumb
  leap_node__msg__FingerData__fini(&msg->thumb);
  // index
  leap_node__msg__FingerData__fini(&msg->index);
  // middle
  leap_node__msg__FingerData__fini(&msg->middle);
}

bool
leap_node__msg__HandData__are_equal(const leap_node__msg__HandData * lhs, const leap_node__msg__HandData * rhs)
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
  // hand_id
  if (lhs->hand_id != rhs->hand_id) {
    return false;
  }
  // is_right
  if (lhs->is_right != rhs->is_right) {
    return false;
  }
  // palm_position
  if (!geometry_msgs__msg__Point__are_equal(
      &(lhs->palm_position), &(rhs->palm_position)))
  {
    return false;
  }
  // normal
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->normal), &(rhs->normal)))
  {
    return false;
  }
  // direction
  if (!geometry_msgs__msg__Vector3__are_equal(
      &(lhs->direction), &(rhs->direction)))
  {
    return false;
  }
  // thumb
  if (!leap_node__msg__FingerData__are_equal(
      &(lhs->thumb), &(rhs->thumb)))
  {
    return false;
  }
  // index
  if (!leap_node__msg__FingerData__are_equal(
      &(lhs->index), &(rhs->index)))
  {
    return false;
  }
  // middle
  if (!leap_node__msg__FingerData__are_equal(
      &(lhs->middle), &(rhs->middle)))
  {
    return false;
  }
  return true;
}

bool
leap_node__msg__HandData__copy(
  const leap_node__msg__HandData * input,
  leap_node__msg__HandData * output)
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
  // hand_id
  output->hand_id = input->hand_id;
  // is_right
  output->is_right = input->is_right;
  // palm_position
  if (!geometry_msgs__msg__Point__copy(
      &(input->palm_position), &(output->palm_position)))
  {
    return false;
  }
  // normal
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->normal), &(output->normal)))
  {
    return false;
  }
  // direction
  if (!geometry_msgs__msg__Vector3__copy(
      &(input->direction), &(output->direction)))
  {
    return false;
  }
  // thumb
  if (!leap_node__msg__FingerData__copy(
      &(input->thumb), &(output->thumb)))
  {
    return false;
  }
  // index
  if (!leap_node__msg__FingerData__copy(
      &(input->index), &(output->index)))
  {
    return false;
  }
  // middle
  if (!leap_node__msg__FingerData__copy(
      &(input->middle), &(output->middle)))
  {
    return false;
  }
  return true;
}

leap_node__msg__HandData *
leap_node__msg__HandData__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  leap_node__msg__HandData * msg = (leap_node__msg__HandData *)allocator.allocate(sizeof(leap_node__msg__HandData), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(leap_node__msg__HandData));
  bool success = leap_node__msg__HandData__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
leap_node__msg__HandData__destroy(leap_node__msg__HandData * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    leap_node__msg__HandData__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
leap_node__msg__HandData__Sequence__init(leap_node__msg__HandData__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  leap_node__msg__HandData * data = NULL;

  if (size) {
    data = (leap_node__msg__HandData *)allocator.zero_allocate(size, sizeof(leap_node__msg__HandData), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = leap_node__msg__HandData__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        leap_node__msg__HandData__fini(&data[i - 1]);
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
leap_node__msg__HandData__Sequence__fini(leap_node__msg__HandData__Sequence * array)
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
      leap_node__msg__HandData__fini(&array->data[i]);
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

leap_node__msg__HandData__Sequence *
leap_node__msg__HandData__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  leap_node__msg__HandData__Sequence * array = (leap_node__msg__HandData__Sequence *)allocator.allocate(sizeof(leap_node__msg__HandData__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = leap_node__msg__HandData__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
leap_node__msg__HandData__Sequence__destroy(leap_node__msg__HandData__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    leap_node__msg__HandData__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
leap_node__msg__HandData__Sequence__are_equal(const leap_node__msg__HandData__Sequence * lhs, const leap_node__msg__HandData__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!leap_node__msg__HandData__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
leap_node__msg__HandData__Sequence__copy(
  const leap_node__msg__HandData__Sequence * input,
  leap_node__msg__HandData__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(leap_node__msg__HandData);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    leap_node__msg__HandData * data =
      (leap_node__msg__HandData *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!leap_node__msg__HandData__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          leap_node__msg__HandData__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!leap_node__msg__HandData__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

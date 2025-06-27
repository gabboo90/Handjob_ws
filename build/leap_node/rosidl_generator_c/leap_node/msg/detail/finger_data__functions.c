// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from leap_node:msg/FingerData.idl
// generated code does not contain a copyright notice
#include "leap_node/msg/detail/finger_data__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `timestamp`
#include "builtin_interfaces/msg/detail/time__functions.h"
// Member `bones`
#include "leap_node/msg/detail/bone_data__functions.h"

bool
leap_node__msg__FingerData__init(leap_node__msg__FingerData * msg)
{
  if (!msg) {
    return false;
  }
  // timestamp
  if (!builtin_interfaces__msg__Time__init(&msg->timestamp)) {
    leap_node__msg__FingerData__fini(msg);
    return false;
  }
  // finger_type
  // length
  // width
  // bones
  if (!leap_node__msg__BoneData__Sequence__init(&msg->bones, 0)) {
    leap_node__msg__FingerData__fini(msg);
    return false;
  }
  return true;
}

void
leap_node__msg__FingerData__fini(leap_node__msg__FingerData * msg)
{
  if (!msg) {
    return;
  }
  // timestamp
  builtin_interfaces__msg__Time__fini(&msg->timestamp);
  // finger_type
  // length
  // width
  // bones
  leap_node__msg__BoneData__Sequence__fini(&msg->bones);
}

bool
leap_node__msg__FingerData__are_equal(const leap_node__msg__FingerData * lhs, const leap_node__msg__FingerData * rhs)
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
  // finger_type
  if (lhs->finger_type != rhs->finger_type) {
    return false;
  }
  // length
  if (lhs->length != rhs->length) {
    return false;
  }
  // width
  if (lhs->width != rhs->width) {
    return false;
  }
  // bones
  if (!leap_node__msg__BoneData__Sequence__are_equal(
      &(lhs->bones), &(rhs->bones)))
  {
    return false;
  }
  return true;
}

bool
leap_node__msg__FingerData__copy(
  const leap_node__msg__FingerData * input,
  leap_node__msg__FingerData * output)
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
  // finger_type
  output->finger_type = input->finger_type;
  // length
  output->length = input->length;
  // width
  output->width = input->width;
  // bones
  if (!leap_node__msg__BoneData__Sequence__copy(
      &(input->bones), &(output->bones)))
  {
    return false;
  }
  return true;
}

leap_node__msg__FingerData *
leap_node__msg__FingerData__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  leap_node__msg__FingerData * msg = (leap_node__msg__FingerData *)allocator.allocate(sizeof(leap_node__msg__FingerData), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(leap_node__msg__FingerData));
  bool success = leap_node__msg__FingerData__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
leap_node__msg__FingerData__destroy(leap_node__msg__FingerData * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    leap_node__msg__FingerData__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
leap_node__msg__FingerData__Sequence__init(leap_node__msg__FingerData__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  leap_node__msg__FingerData * data = NULL;

  if (size) {
    data = (leap_node__msg__FingerData *)allocator.zero_allocate(size, sizeof(leap_node__msg__FingerData), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = leap_node__msg__FingerData__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        leap_node__msg__FingerData__fini(&data[i - 1]);
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
leap_node__msg__FingerData__Sequence__fini(leap_node__msg__FingerData__Sequence * array)
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
      leap_node__msg__FingerData__fini(&array->data[i]);
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

leap_node__msg__FingerData__Sequence *
leap_node__msg__FingerData__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  leap_node__msg__FingerData__Sequence * array = (leap_node__msg__FingerData__Sequence *)allocator.allocate(sizeof(leap_node__msg__FingerData__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = leap_node__msg__FingerData__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
leap_node__msg__FingerData__Sequence__destroy(leap_node__msg__FingerData__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    leap_node__msg__FingerData__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
leap_node__msg__FingerData__Sequence__are_equal(const leap_node__msg__FingerData__Sequence * lhs, const leap_node__msg__FingerData__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!leap_node__msg__FingerData__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
leap_node__msg__FingerData__Sequence__copy(
  const leap_node__msg__FingerData__Sequence * input,
  leap_node__msg__FingerData__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(leap_node__msg__FingerData);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    leap_node__msg__FingerData * data =
      (leap_node__msg__FingerData *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!leap_node__msg__FingerData__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          leap_node__msg__FingerData__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!leap_node__msg__FingerData__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

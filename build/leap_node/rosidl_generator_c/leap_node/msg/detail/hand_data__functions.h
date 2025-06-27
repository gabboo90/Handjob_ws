// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from leap_node:msg/HandData.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "leap_node/msg/hand_data.h"


#ifndef LEAP_NODE__MSG__DETAIL__HAND_DATA__FUNCTIONS_H_
#define LEAP_NODE__MSG__DETAIL__HAND_DATA__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_runtime_c/type_description/type_description__struct.h"
#include "rosidl_runtime_c/type_description/type_source__struct.h"
#include "rosidl_runtime_c/type_hash.h"
#include "rosidl_runtime_c/visibility_control.h"
#include "leap_node/msg/rosidl_generator_c__visibility_control.h"

#include "leap_node/msg/detail/hand_data__struct.h"

/// Initialize msg/HandData message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * leap_node__msg__HandData
 * )) before or use
 * leap_node__msg__HandData__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_leap_node
bool
leap_node__msg__HandData__init(leap_node__msg__HandData * msg);

/// Finalize msg/HandData message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_leap_node
void
leap_node__msg__HandData__fini(leap_node__msg__HandData * msg);

/// Create msg/HandData message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * leap_node__msg__HandData__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_leap_node
leap_node__msg__HandData *
leap_node__msg__HandData__create(void);

/// Destroy msg/HandData message.
/**
 * It calls
 * leap_node__msg__HandData__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_leap_node
void
leap_node__msg__HandData__destroy(leap_node__msg__HandData * msg);

/// Check for msg/HandData message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_leap_node
bool
leap_node__msg__HandData__are_equal(const leap_node__msg__HandData * lhs, const leap_node__msg__HandData * rhs);

/// Copy a msg/HandData message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_leap_node
bool
leap_node__msg__HandData__copy(
  const leap_node__msg__HandData * input,
  leap_node__msg__HandData * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_leap_node
const rosidl_type_hash_t *
leap_node__msg__HandData__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_leap_node
const rosidl_runtime_c__type_description__TypeDescription *
leap_node__msg__HandData__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_leap_node
const rosidl_runtime_c__type_description__TypeSource *
leap_node__msg__HandData__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_leap_node
const rosidl_runtime_c__type_description__TypeSource__Sequence *
leap_node__msg__HandData__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of msg/HandData messages.
/**
 * It allocates the memory for the number of elements and calls
 * leap_node__msg__HandData__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_leap_node
bool
leap_node__msg__HandData__Sequence__init(leap_node__msg__HandData__Sequence * array, size_t size);

/// Finalize array of msg/HandData messages.
/**
 * It calls
 * leap_node__msg__HandData__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_leap_node
void
leap_node__msg__HandData__Sequence__fini(leap_node__msg__HandData__Sequence * array);

/// Create array of msg/HandData messages.
/**
 * It allocates the memory for the array and calls
 * leap_node__msg__HandData__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_leap_node
leap_node__msg__HandData__Sequence *
leap_node__msg__HandData__Sequence__create(size_t size);

/// Destroy array of msg/HandData messages.
/**
 * It calls
 * leap_node__msg__HandData__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_leap_node
void
leap_node__msg__HandData__Sequence__destroy(leap_node__msg__HandData__Sequence * array);

/// Check for msg/HandData message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_leap_node
bool
leap_node__msg__HandData__Sequence__are_equal(const leap_node__msg__HandData__Sequence * lhs, const leap_node__msg__HandData__Sequence * rhs);

/// Copy an array of msg/HandData messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_leap_node
bool
leap_node__msg__HandData__Sequence__copy(
  const leap_node__msg__HandData__Sequence * input,
  leap_node__msg__HandData__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // LEAP_NODE__MSG__DETAIL__HAND_DATA__FUNCTIONS_H_

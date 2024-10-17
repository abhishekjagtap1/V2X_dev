// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from v2x_stack_btp:msg/BtpDataIndication.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "v2x_stack_btp/msg/btp_data_indication.h"


#ifndef V2X_STACK_BTP__MSG__DETAIL__BTP_DATA_INDICATION__FUNCTIONS_H_
#define V2X_STACK_BTP__MSG__DETAIL__BTP_DATA_INDICATION__FUNCTIONS_H_

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
#include "v2x_stack_btp/msg/rosidl_generator_c__visibility_control.h"

#include "v2x_stack_btp/msg/detail/btp_data_indication__struct.h"

/// Initialize msg/BtpDataIndication message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * v2x_stack_btp__msg__BtpDataIndication
 * )) before or use
 * v2x_stack_btp__msg__BtpDataIndication__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_v2x_stack_btp
bool
v2x_stack_btp__msg__BtpDataIndication__init(v2x_stack_btp__msg__BtpDataIndication * msg);

/// Finalize msg/BtpDataIndication message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_v2x_stack_btp
void
v2x_stack_btp__msg__BtpDataIndication__fini(v2x_stack_btp__msg__BtpDataIndication * msg);

/// Create msg/BtpDataIndication message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * v2x_stack_btp__msg__BtpDataIndication__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_v2x_stack_btp
v2x_stack_btp__msg__BtpDataIndication *
v2x_stack_btp__msg__BtpDataIndication__create(void);

/// Destroy msg/BtpDataIndication message.
/**
 * It calls
 * v2x_stack_btp__msg__BtpDataIndication__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_v2x_stack_btp
void
v2x_stack_btp__msg__BtpDataIndication__destroy(v2x_stack_btp__msg__BtpDataIndication * msg);

/// Check for msg/BtpDataIndication message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_v2x_stack_btp
bool
v2x_stack_btp__msg__BtpDataIndication__are_equal(const v2x_stack_btp__msg__BtpDataIndication * lhs, const v2x_stack_btp__msg__BtpDataIndication * rhs);

/// Copy a msg/BtpDataIndication message.
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
ROSIDL_GENERATOR_C_PUBLIC_v2x_stack_btp
bool
v2x_stack_btp__msg__BtpDataIndication__copy(
  const v2x_stack_btp__msg__BtpDataIndication * input,
  v2x_stack_btp__msg__BtpDataIndication * output);

/// Retrieve pointer to the hash of the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_v2x_stack_btp
const rosidl_type_hash_t *
v2x_stack_btp__msg__BtpDataIndication__get_type_hash(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_v2x_stack_btp
const rosidl_runtime_c__type_description__TypeDescription *
v2x_stack_btp__msg__BtpDataIndication__get_type_description(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the single raw source text that defined this type.
ROSIDL_GENERATOR_C_PUBLIC_v2x_stack_btp
const rosidl_runtime_c__type_description__TypeSource *
v2x_stack_btp__msg__BtpDataIndication__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support);

/// Retrieve pointer to the recursive raw sources that defined the description of this type.
ROSIDL_GENERATOR_C_PUBLIC_v2x_stack_btp
const rosidl_runtime_c__type_description__TypeSource__Sequence *
v2x_stack_btp__msg__BtpDataIndication__get_type_description_sources(
  const rosidl_message_type_support_t * type_support);

/// Initialize array of msg/BtpDataIndication messages.
/**
 * It allocates the memory for the number of elements and calls
 * v2x_stack_btp__msg__BtpDataIndication__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_v2x_stack_btp
bool
v2x_stack_btp__msg__BtpDataIndication__Sequence__init(v2x_stack_btp__msg__BtpDataIndication__Sequence * array, size_t size);

/// Finalize array of msg/BtpDataIndication messages.
/**
 * It calls
 * v2x_stack_btp__msg__BtpDataIndication__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_v2x_stack_btp
void
v2x_stack_btp__msg__BtpDataIndication__Sequence__fini(v2x_stack_btp__msg__BtpDataIndication__Sequence * array);

/// Create array of msg/BtpDataIndication messages.
/**
 * It allocates the memory for the array and calls
 * v2x_stack_btp__msg__BtpDataIndication__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_v2x_stack_btp
v2x_stack_btp__msg__BtpDataIndication__Sequence *
v2x_stack_btp__msg__BtpDataIndication__Sequence__create(size_t size);

/// Destroy array of msg/BtpDataIndication messages.
/**
 * It calls
 * v2x_stack_btp__msg__BtpDataIndication__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_v2x_stack_btp
void
v2x_stack_btp__msg__BtpDataIndication__Sequence__destroy(v2x_stack_btp__msg__BtpDataIndication__Sequence * array);

/// Check for msg/BtpDataIndication message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_v2x_stack_btp
bool
v2x_stack_btp__msg__BtpDataIndication__Sequence__are_equal(const v2x_stack_btp__msg__BtpDataIndication__Sequence * lhs, const v2x_stack_btp__msg__BtpDataIndication__Sequence * rhs);

/// Copy an array of msg/BtpDataIndication messages.
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
ROSIDL_GENERATOR_C_PUBLIC_v2x_stack_btp
bool
v2x_stack_btp__msg__BtpDataIndication__Sequence__copy(
  const v2x_stack_btp__msg__BtpDataIndication__Sequence * input,
  v2x_stack_btp__msg__BtpDataIndication__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // V2X_STACK_BTP__MSG__DETAIL__BTP_DATA_INDICATION__FUNCTIONS_H_

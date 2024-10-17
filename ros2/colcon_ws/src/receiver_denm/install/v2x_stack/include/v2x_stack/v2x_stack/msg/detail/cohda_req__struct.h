// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_stack:msg/CohdaReq.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "v2x_stack/msg/cohda_req.h"


#ifndef V2X_STACK__MSG__DETAIL__COHDA_REQ__STRUCT_H_
#define V2X_STACK__MSG__DETAIL__COHDA_REQ__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/CohdaReq in the package v2x_stack.
typedef struct v2x_stack__msg__CohdaReq
{
  uint8_t structure_needs_at_least_one_member;
} v2x_stack__msg__CohdaReq;

// Struct for a sequence of v2x_stack__msg__CohdaReq.
typedef struct v2x_stack__msg__CohdaReq__Sequence
{
  v2x_stack__msg__CohdaReq * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_stack__msg__CohdaReq__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_STACK__MSG__DETAIL__COHDA_REQ__STRUCT_H_

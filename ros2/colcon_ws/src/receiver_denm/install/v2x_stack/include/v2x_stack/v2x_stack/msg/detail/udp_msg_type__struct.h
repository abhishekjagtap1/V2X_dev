// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_stack:msg/UDPMsgType.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "v2x_stack/msg/udp_msg_type.h"


#ifndef V2X_STACK__MSG__DETAIL__UDP_MSG_TYPE__STRUCT_H_
#define V2X_STACK__MSG__DETAIL__UDP_MSG_TYPE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/UDPMsgType in the package v2x_stack.
/**
  * Version
 */
typedef struct v2x_stack__msg__UDPMsgType
{
  uint8_t version;
  /// MsgID
  uint8_t msg_id;
  /// Msg Length
  uint8_t msg_length;
} v2x_stack__msg__UDPMsgType;

// Struct for a sequence of v2x_stack__msg__UDPMsgType.
typedef struct v2x_stack__msg__UDPMsgType__Sequence
{
  v2x_stack__msg__UDPMsgType * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_stack__msg__UDPMsgType__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_STACK__MSG__DETAIL__UDP_MSG_TYPE__STRUCT_H_

// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_stack:msg/CohdaInd.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "v2x_stack/msg/cohda_ind.h"


#ifndef V2X_STACK__MSG__DETAIL__COHDA_IND__STRUCT_H_
#define V2X_STACK__MSG__DETAIL__COHDA_IND__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'type'
#include "v2x_stack/msg/detail/udp_msg_type__struct.h"
// Member 'header'
#include "v2x_stack/msg/detail/udp_data_ind_hdr__struct.h"
// Member 'payload'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/CohdaInd in the package v2x_stack.
/**
  * Message type
 */
typedef struct v2x_stack__msg__CohdaInd
{
  v2x_stack__msg__UDPMsgType type;
  /// Message header
  v2x_stack__msg__UDPDataIndHdr header;
  /// Payload
  rosidl_runtime_c__uint8__Sequence payload;
} v2x_stack__msg__CohdaInd;

// Struct for a sequence of v2x_stack__msg__CohdaInd.
typedef struct v2x_stack__msg__CohdaInd__Sequence
{
  v2x_stack__msg__CohdaInd * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_stack__msg__CohdaInd__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_STACK__MSG__DETAIL__COHDA_IND__STRUCT_H_

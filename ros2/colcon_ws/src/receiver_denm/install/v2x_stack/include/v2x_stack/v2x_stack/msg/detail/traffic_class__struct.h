// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_stack:msg/TrafficClass.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "v2x_stack/msg/traffic_class.h"


#ifndef V2X_STACK__MSG__DETAIL__TRAFFIC_CLASS__STRUCT_H_
#define V2X_STACK__MSG__DETAIL__TRAFFIC_CLASS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'ID_DCC_DP0'.
enum
{
  v2x_stack__msg__TrafficClass__ID_DCC_DP0 = 0
};

/// Constant 'ID_DCC_DP1'.
enum
{
  v2x_stack__msg__TrafficClass__ID_DCC_DP1 = 1
};

/// Constant 'ID_DCC_DP2'.
enum
{
  v2x_stack__msg__TrafficClass__ID_DCC_DP2 = 2
};

/// Constant 'ID_DCC_DP3'.
enum
{
  v2x_stack__msg__TrafficClass__ID_DCC_DP3 = 3
};

/// Struct defined in msg/TrafficClass in the package v2x_stack.
typedef struct v2x_stack__msg__TrafficClass
{
  bool store_carry_forwarding;
  bool channel_offloading;
  /// only lower six bits are used
  uint8_t id;
} v2x_stack__msg__TrafficClass;

// Struct for a sequence of v2x_stack__msg__TrafficClass.
typedef struct v2x_stack__msg__TrafficClass__Sequence
{
  v2x_stack__msg__TrafficClass * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_stack__msg__TrafficClass__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_STACK__MSG__DETAIL__TRAFFIC_CLASS__STRUCT_H_

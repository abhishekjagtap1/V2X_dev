// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_stack:msg/Area.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "v2x_stack/msg/area.h"


#ifndef V2X_STACK__MSG__DETAIL__AREA__STRUCT_H_
#define V2X_STACK__MSG__DETAIL__AREA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/Area in the package v2x_stack.
/**
  * WGS-84 latitude for the centre position of shape
 */
typedef struct v2x_stack__msg__Area
{
  int32_t latitude;
  /// WGS-84 longitude for the centre position of shape
  int32_t longitude;
  /// Distance a of the geometric shape (always non-zero)
  uint16_t distance_a;
  /// Distance b of the geometric shape
  uint16_t distance_b;
  /// Angle of the geometric shape
  uint16_t angle;
  /// Shape @sa eETSIGeoNetDestType
  uint8_t shape;
  /// Padding
  uint8_t unused;
} v2x_stack__msg__Area;

// Struct for a sequence of v2x_stack__msg__Area.
typedef struct v2x_stack__msg__Area__Sequence
{
  v2x_stack__msg__Area * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_stack__msg__Area__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_STACK__MSG__DETAIL__AREA__STRUCT_H_

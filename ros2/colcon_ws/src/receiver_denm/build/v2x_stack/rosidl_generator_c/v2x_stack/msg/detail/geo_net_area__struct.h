// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_stack:msg/GeoNetArea.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "v2x_stack/msg/geo_net_area.h"


#ifndef V2X_STACK__MSG__DETAIL__GEO_NET_AREA__STRUCT_H_
#define V2X_STACK__MSG__DETAIL__GEO_NET_AREA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'TYPE_CIRCLE'.
enum
{
  v2x_stack__msg__GeoNetArea__TYPE_CIRCLE = 1
};

/// Constant 'TYPE_RECTANGLE'.
enum
{
  v2x_stack__msg__GeoNetArea__TYPE_RECTANGLE = 2
};

/// Constant 'TYPE_ELLIPSE'.
enum
{
  v2x_stack__msg__GeoNetArea__TYPE_ELLIPSE = 3
};

/// Struct defined in msg/GeoNetArea in the package v2x_stack.
typedef struct v2x_stack__msg__GeoNetArea
{
  uint8_t type;
  double latitude;
  double longitude;
  /// meter (circle: radius, rectangle: short bisector, ellipse: long semi-axis)
  float distance_a;
  /// meter (circle: zero, rectangle: long bisector, ellispe: short semi-axis)
  float distance_b;
  /// degrees from north (w.r.t. distance_a)
  float angle;
} v2x_stack__msg__GeoNetArea;

// Struct for a sequence of v2x_stack__msg__GeoNetArea.
typedef struct v2x_stack__msg__GeoNetArea__Sequence
{
  v2x_stack__msg__GeoNetArea * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_stack__msg__GeoNetArea__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_STACK__MSG__DETAIL__GEO_NET_AREA__STRUCT_H_

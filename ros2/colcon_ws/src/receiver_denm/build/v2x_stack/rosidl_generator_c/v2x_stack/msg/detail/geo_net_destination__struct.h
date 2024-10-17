// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_stack:msg/GeoNetDestination.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "v2x_stack/msg/geo_net_destination.h"


#ifndef V2X_STACK__MSG__DETAIL__GEO_NET_DESTINATION__STRUCT_H_
#define V2X_STACK__MSG__DETAIL__GEO_NET_DESTINATION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'TYPE_NONE'.
enum
{
  v2x_stack__msg__GeoNetDestination__TYPE_NONE = 0
};

/// Constant 'TYPE_ADDRESS'.
enum
{
  v2x_stack__msg__GeoNetDestination__TYPE_ADDRESS = 1
};

/// Constant 'TYPE_AREA'.
enum
{
  v2x_stack__msg__GeoNetDestination__TYPE_AREA = 2
};

// Include directives for member types
// Member 'area'
#include "v2x_stack/msg/detail/geo_net_area__struct.h"

/// Struct defined in msg/GeoNetDestination in the package v2x_stack.
typedef struct v2x_stack__msg__GeoNetDestination
{
  uint8_t type;
  uint8_t address[8];
  v2x_stack__msg__GeoNetArea area;
} v2x_stack__msg__GeoNetDestination;

// Struct for a sequence of v2x_stack__msg__GeoNetDestination.
typedef struct v2x_stack__msg__GeoNetDestination__Sequence
{
  v2x_stack__msg__GeoNetDestination * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_stack__msg__GeoNetDestination__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_STACK__MSG__DETAIL__GEO_NET_DESTINATION__STRUCT_H_

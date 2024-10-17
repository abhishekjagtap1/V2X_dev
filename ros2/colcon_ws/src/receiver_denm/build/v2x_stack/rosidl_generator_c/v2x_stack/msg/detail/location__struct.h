// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from v2x_stack:msg/Location.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "v2x_stack/msg/location.h"


#ifndef V2X_STACK__MSG__DETAIL__LOCATION__STRUCT_H_
#define V2X_STACK__MSG__DETAIL__LOCATION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/Location in the package v2x_stack.
/**
  * Address of destination station
 */
typedef struct v2x_stack__msg__Location
{
  uint64_t destination;
  /// WGS-84 latitude of the GeoAdhoc router expressed in 1/10 micro degree
  int32_t lat;
  /// WGS84 longitude of the GeoAdhoc router expressed in 1/10 micro degree
  int32_t lon;
} v2x_stack__msg__Location;

// Struct for a sequence of v2x_stack__msg__Location.
typedef struct v2x_stack__msg__Location__Sequence
{
  v2x_stack__msg__Location * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} v2x_stack__msg__Location__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // V2X_STACK__MSG__DETAIL__LOCATION__STRUCT_H_

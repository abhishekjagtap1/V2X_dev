// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros_etsi_its_msgs:msg/DeltaReferencePosition.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ros_etsi_its_msgs/msg/delta_reference_position.h"


#ifndef ROS_ETSI_ITS_MSGS__MSG__DETAIL__DELTA_REFERENCE_POSITION__STRUCT_H_
#define ROS_ETSI_ITS_MSGS__MSG__DETAIL__DELTA_REFERENCE_POSITION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'ONE_MICRODEGREE_NORTH'.
enum
{
  ros_etsi_its_msgs__msg__DeltaReferencePosition__ONE_MICRODEGREE_NORTH = 10l
};

/// Constant 'ONE_MICRODEGREE_SOUTH'.
enum
{
  ros_etsi_its_msgs__msg__DeltaReferencePosition__ONE_MICRODEGREE_SOUTH = -10l
};

/// Constant 'ONE_MICRODEGREE_EAST'.
enum
{
  ros_etsi_its_msgs__msg__DeltaReferencePosition__ONE_MICRODEGREE_EAST = 10l
};

/// Constant 'ONE_MICRODEGREE_WEST'.
enum
{
  ros_etsi_its_msgs__msg__DeltaReferencePosition__ONE_MICRODEGREE_WEST = -10l
};

/// Constant 'ONE_CENTIMETER_UP'.
enum
{
  ros_etsi_its_msgs__msg__DeltaReferencePosition__ONE_CENTIMETER_UP = 1l
};

/// Constant 'ONE_CENTIMETER_DOWN'.
enum
{
  ros_etsi_its_msgs__msg__DeltaReferencePosition__ONE_CENTIMETER_DOWN = -1l
};

/// Constant 'LATITUDE_UNAVAILABLE'.
enum
{
  ros_etsi_its_msgs__msg__DeltaReferencePosition__LATITUDE_UNAVAILABLE = 131072l
};

/// Constant 'LONGITUDE_UNAVAILABLE'.
enum
{
  ros_etsi_its_msgs__msg__DeltaReferencePosition__LONGITUDE_UNAVAILABLE = 131072l
};

/// Constant 'ALTITUDE_UNAVAILABLE'.
enum
{
  ros_etsi_its_msgs__msg__DeltaReferencePosition__ALTITUDE_UNAVAILABLE = 12800
};

/// Struct defined in msg/DeltaReferencePosition in the package ros_etsi_its_msgs.
typedef struct ros_etsi_its_msgs__msg__DeltaReferencePosition
{
  /// 0.1 micro degree
  int32_t delta_latitude;
  /// 0.1 micro degree
  int32_t delta_longitude;
  /// centimeter
  int16_t delta_altitude;
} ros_etsi_its_msgs__msg__DeltaReferencePosition;

// Struct for a sequence of ros_etsi_its_msgs__msg__DeltaReferencePosition.
typedef struct ros_etsi_its_msgs__msg__DeltaReferencePosition__Sequence
{
  ros_etsi_its_msgs__msg__DeltaReferencePosition * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros_etsi_its_msgs__msg__DeltaReferencePosition__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS_ETSI_ITS_MSGS__MSG__DETAIL__DELTA_REFERENCE_POSITION__STRUCT_H_

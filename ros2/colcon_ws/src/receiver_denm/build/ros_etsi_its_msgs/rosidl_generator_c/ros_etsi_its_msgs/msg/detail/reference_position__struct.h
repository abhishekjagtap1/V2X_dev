// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros_etsi_its_msgs:msg/ReferencePosition.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ros_etsi_its_msgs/msg/reference_position.h"


#ifndef ROS_ETSI_ITS_MSGS__MSG__DETAIL__REFERENCE_POSITION__STRUCT_H_
#define ROS_ETSI_ITS_MSGS__MSG__DETAIL__REFERENCE_POSITION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'LATITUDE_UNAVAILABLE'.
enum
{
  ros_etsi_its_msgs__msg__ReferencePosition__LATITUDE_UNAVAILABLE = 900000001ll
};

/// Constant 'LONGITUDE_UNAVAILABLE'.
enum
{
  ros_etsi_its_msgs__msg__ReferencePosition__LONGITUDE_UNAVAILABLE = 1800000001ll
};

// Include directives for member types
// Member 'position_confidence'
#include "ros_etsi_its_msgs/msg/detail/position_confidence_ellipse__struct.h"
// Member 'altitude'
#include "ros_etsi_its_msgs/msg/detail/altitude__struct.h"

/// Struct defined in msg/ReferencePosition in the package ros_etsi_its_msgs.
typedef struct ros_etsi_its_msgs__msg__ReferencePosition
{
  /// 0.1 micro degree
  int64_t latitude;
  /// 0.1 micro degree
  int64_t longitude;
  ros_etsi_its_msgs__msg__PositionConfidenceEllipse position_confidence;
  ros_etsi_its_msgs__msg__Altitude altitude;
} ros_etsi_its_msgs__msg__ReferencePosition;

// Struct for a sequence of ros_etsi_its_msgs__msg__ReferencePosition.
typedef struct ros_etsi_its_msgs__msg__ReferencePosition__Sequence
{
  ros_etsi_its_msgs__msg__ReferencePosition * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros_etsi_its_msgs__msg__ReferencePosition__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS_ETSI_ITS_MSGS__MSG__DETAIL__REFERENCE_POSITION__STRUCT_H_

// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros_etsi_its_msgs:msg/PositionConfidenceEllipse.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ros_etsi_its_msgs/msg/position_confidence_ellipse.h"


#ifndef ROS_ETSI_ITS_MSGS__MSG__DETAIL__POSITION_CONFIDENCE_ELLIPSE__STRUCT_H_
#define ROS_ETSI_ITS_MSGS__MSG__DETAIL__POSITION_CONFIDENCE_ELLIPSE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'SEMI_AXIS_LENGTH_OUT_OF_RANGE'.
enum
{
  ros_etsi_its_msgs__msg__PositionConfidenceEllipse__SEMI_AXIS_LENGTH_OUT_OF_RANGE = 4094
};

/// Constant 'SEMI_AXIS_LENGTH_UNAVAILABLE'.
enum
{
  ros_etsi_its_msgs__msg__PositionConfidenceEllipse__SEMI_AXIS_LENGTH_UNAVAILABLE = 4095
};

/// Struct defined in msg/PositionConfidenceEllipse in the package ros_etsi_its_msgs.
typedef struct ros_etsi_its_msgs__msg__PositionConfidenceEllipse
{
  /// cm
  uint16_t semi_major_confidence;
  /// cm
  uint16_t semi_minor_confidence;
  /// 0.1 degree
  uint16_t semi_major_orientation;
} ros_etsi_its_msgs__msg__PositionConfidenceEllipse;

// Struct for a sequence of ros_etsi_its_msgs__msg__PositionConfidenceEllipse.
typedef struct ros_etsi_its_msgs__msg__PositionConfidenceEllipse__Sequence
{
  ros_etsi_its_msgs__msg__PositionConfidenceEllipse * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros_etsi_its_msgs__msg__PositionConfidenceEllipse__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS_ETSI_ITS_MSGS__MSG__DETAIL__POSITION_CONFIDENCE_ELLIPSE__STRUCT_H_

// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros_etsi_its_msgs:msg/ObjectDistanceWithConfidence.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ros_etsi_its_msgs/msg/object_distance_with_confidence.h"


#ifndef ROS_ETSI_ITS_MSGS__MSG__DETAIL__OBJECT_DISTANCE_WITH_CONFIDENCE__STRUCT_H_
#define ROS_ETSI_ITS_MSGS__MSG__DETAIL__OBJECT_DISTANCE_WITH_CONFIDENCE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'CONFIDENCE_CM'.
/**
  * zeroPointZeroOneMeter(1), oneMeter(100), outOfRange(101), unavailable(102)} (0..102)
 */
enum
{
  ros_etsi_its_msgs__msg__ObjectDistanceWithConfidence__CONFIDENCE_CM = 1
};

/// Constant 'CONFIDENCE_M'.
enum
{
  ros_etsi_its_msgs__msg__ObjectDistanceWithConfidence__CONFIDENCE_M = 100
};

/// Constant 'CONFIDENCE_OUT_OF_RANGE'.
enum
{
  ros_etsi_its_msgs__msg__ObjectDistanceWithConfidence__CONFIDENCE_OUT_OF_RANGE = 101
};

/// Constant 'CONFIDENCE_UNAVAILABLE'.
enum
{
  ros_etsi_its_msgs__msg__ObjectDistanceWithConfidence__CONFIDENCE_UNAVAILABLE = 102
};

/// Struct defined in msg/ObjectDistanceWithConfidence in the package ros_etsi_its_msgs.
typedef struct ros_etsi_its_msgs__msg__ObjectDistanceWithConfidence
{
  /// zeroPointZeroOneMeter(1), oneMeter(100)} (-132768..132767)
  int32_t value;
  int8_t confidence;
} ros_etsi_its_msgs__msg__ObjectDistanceWithConfidence;

// Struct for a sequence of ros_etsi_its_msgs__msg__ObjectDistanceWithConfidence.
typedef struct ros_etsi_its_msgs__msg__ObjectDistanceWithConfidence__Sequence
{
  ros_etsi_its_msgs__msg__ObjectDistanceWithConfidence * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros_etsi_its_msgs__msg__ObjectDistanceWithConfidence__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS_ETSI_ITS_MSGS__MSG__DETAIL__OBJECT_DISTANCE_WITH_CONFIDENCE__STRUCT_H_

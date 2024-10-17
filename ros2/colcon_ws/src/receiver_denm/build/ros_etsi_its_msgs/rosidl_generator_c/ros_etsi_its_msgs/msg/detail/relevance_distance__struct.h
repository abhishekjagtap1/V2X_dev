// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros_etsi_its_msgs:msg/RelevanceDistance.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ros_etsi_its_msgs/msg/relevance_distance.h"


#ifndef ROS_ETSI_ITS_MSGS__MSG__DETAIL__RELEVANCE_DISTANCE__STRUCT_H_
#define ROS_ETSI_ITS_MSGS__MSG__DETAIL__RELEVANCE_DISTANCE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'LESS_THAN_50M'.
enum
{
  ros_etsi_its_msgs__msg__RelevanceDistance__LESS_THAN_50M = 0
};

/// Constant 'LESS_THAN_100M'.
enum
{
  ros_etsi_its_msgs__msg__RelevanceDistance__LESS_THAN_100M = 1
};

/// Constant 'LESS_THAN_200M'.
enum
{
  ros_etsi_its_msgs__msg__RelevanceDistance__LESS_THAN_200M = 2
};

/// Constant 'LESS_THAN_500M'.
enum
{
  ros_etsi_its_msgs__msg__RelevanceDistance__LESS_THAN_500M = 3
};

/// Constant 'LESS_THAN_1000M'.
enum
{
  ros_etsi_its_msgs__msg__RelevanceDistance__LESS_THAN_1000M = 4
};

/// Constant 'LESS_THAN_5KM'.
enum
{
  ros_etsi_its_msgs__msg__RelevanceDistance__LESS_THAN_5KM = 5
};

/// Constant 'LESS_THAN_10KM'.
enum
{
  ros_etsi_its_msgs__msg__RelevanceDistance__LESS_THAN_10KM = 6
};

/// Constant 'OVER_10KM'.
enum
{
  ros_etsi_its_msgs__msg__RelevanceDistance__OVER_10KM = 7
};

/// Constant 'UNAVAILABLE'.
enum
{
  ros_etsi_its_msgs__msg__RelevanceDistance__UNAVAILABLE = 255
};

/// Struct defined in msg/RelevanceDistance in the package ros_etsi_its_msgs.
typedef struct ros_etsi_its_msgs__msg__RelevanceDistance
{
  uint8_t value;
} ros_etsi_its_msgs__msg__RelevanceDistance;

// Struct for a sequence of ros_etsi_its_msgs__msg__RelevanceDistance.
typedef struct ros_etsi_its_msgs__msg__RelevanceDistance__Sequence
{
  ros_etsi_its_msgs__msg__RelevanceDistance * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros_etsi_its_msgs__msg__RelevanceDistance__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS_ETSI_ITS_MSGS__MSG__DETAIL__RELEVANCE_DISTANCE__STRUCT_H_

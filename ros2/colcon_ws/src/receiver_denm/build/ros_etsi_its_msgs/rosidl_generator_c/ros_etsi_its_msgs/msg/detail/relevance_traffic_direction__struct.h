// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros_etsi_its_msgs:msg/RelevanceTrafficDirection.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ros_etsi_its_msgs/msg/relevance_traffic_direction.h"


#ifndef ROS_ETSI_ITS_MSGS__MSG__DETAIL__RELEVANCE_TRAFFIC_DIRECTION__STRUCT_H_
#define ROS_ETSI_ITS_MSGS__MSG__DETAIL__RELEVANCE_TRAFFIC_DIRECTION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'ALL_TRAFFIC_DIRECTIONS'.
enum
{
  ros_etsi_its_msgs__msg__RelevanceTrafficDirection__ALL_TRAFFIC_DIRECTIONS = 0
};

/// Constant 'UPSTREAM_TRAFFIC'.
enum
{
  ros_etsi_its_msgs__msg__RelevanceTrafficDirection__UPSTREAM_TRAFFIC = 1
};

/// Constant 'DOWNSTREAM_TRAFFIC'.
enum
{
  ros_etsi_its_msgs__msg__RelevanceTrafficDirection__DOWNSTREAM_TRAFFIC = 2
};

/// Constant 'OPPOSITE_TRAFFIC'.
enum
{
  ros_etsi_its_msgs__msg__RelevanceTrafficDirection__OPPOSITE_TRAFFIC = 3
};

/// Constant 'UNAVAILABLE'.
/**
  * extension to encode optional traffic directions
 */
enum
{
  ros_etsi_its_msgs__msg__RelevanceTrafficDirection__UNAVAILABLE = 255
};

/// Struct defined in msg/RelevanceTrafficDirection in the package ros_etsi_its_msgs.
typedef struct ros_etsi_its_msgs__msg__RelevanceTrafficDirection
{
  uint8_t value;
} ros_etsi_its_msgs__msg__RelevanceTrafficDirection;

// Struct for a sequence of ros_etsi_its_msgs__msg__RelevanceTrafficDirection.
typedef struct ros_etsi_its_msgs__msg__RelevanceTrafficDirection__Sequence
{
  ros_etsi_its_msgs__msg__RelevanceTrafficDirection * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros_etsi_its_msgs__msg__RelevanceTrafficDirection__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS_ETSI_ITS_MSGS__MSG__DETAIL__RELEVANCE_TRAFFIC_DIRECTION__STRUCT_H_

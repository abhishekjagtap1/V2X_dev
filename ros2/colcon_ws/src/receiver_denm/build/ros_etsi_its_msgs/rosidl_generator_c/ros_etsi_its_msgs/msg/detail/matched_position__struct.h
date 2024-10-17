// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros_etsi_its_msgs:msg/MatchedPosition.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ros_etsi_its_msgs/msg/matched_position.h"


#ifndef ROS_ETSI_ITS_MSGS__MSG__DETAIL__MATCHED_POSITION__STRUCT_H_
#define ROS_ETSI_ITS_MSGS__MSG__DETAIL__MATCHED_POSITION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/MatchedPosition in the package ros_etsi_its_msgs.
typedef struct ros_etsi_its_msgs__msg__MatchedPosition
{
  uint8_t lane_id;
} ros_etsi_its_msgs__msg__MatchedPosition;

// Struct for a sequence of ros_etsi_its_msgs__msg__MatchedPosition.
typedef struct ros_etsi_its_msgs__msg__MatchedPosition__Sequence
{
  ros_etsi_its_msgs__msg__MatchedPosition * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros_etsi_its_msgs__msg__MatchedPosition__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS_ETSI_ITS_MSGS__MSG__DETAIL__MATCHED_POSITION__STRUCT_H_

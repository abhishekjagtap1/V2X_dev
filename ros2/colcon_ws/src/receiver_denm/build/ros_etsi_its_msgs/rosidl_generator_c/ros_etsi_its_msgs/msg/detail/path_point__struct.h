// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros_etsi_its_msgs:msg/PathPoint.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ros_etsi_its_msgs/msg/path_point.h"


#ifndef ROS_ETSI_ITS_MSGS__MSG__DETAIL__PATH_POINT__STRUCT_H_
#define ROS_ETSI_ITS_MSGS__MSG__DETAIL__PATH_POINT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'path_position'
#include "ros_etsi_its_msgs/msg/detail/delta_reference_position__struct.h"
// Member 'path_delta_time'
#include "ros_etsi_its_msgs/msg/detail/path_delta_time__struct.h"

/// Struct defined in msg/PathPoint in the package ros_etsi_its_msgs.
typedef struct ros_etsi_its_msgs__msg__PathPoint
{
  ros_etsi_its_msgs__msg__DeltaReferencePosition path_position;
  ros_etsi_its_msgs__msg__PathDeltaTime path_delta_time;
} ros_etsi_its_msgs__msg__PathPoint;

// Struct for a sequence of ros_etsi_its_msgs__msg__PathPoint.
typedef struct ros_etsi_its_msgs__msg__PathPoint__Sequence
{
  ros_etsi_its_msgs__msg__PathPoint * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros_etsi_its_msgs__msg__PathPoint__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS_ETSI_ITS_MSGS__MSG__DETAIL__PATH_POINT__STRUCT_H_

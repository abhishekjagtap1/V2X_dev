// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros_etsi_its_msgs:msg/Intersections.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ros_etsi_its_msgs/msg/intersections.h"


#ifndef ROS_ETSI_ITS_MSGS__MSG__DETAIL__INTERSECTIONS__STRUCT_H_
#define ROS_ETSI_ITS_MSGS__MSG__DETAIL__INTERSECTIONS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'intersects'
#include "ros_etsi_its_msgs/msg/detail/intersection_geometry__struct.h"

/// Struct defined in msg/Intersections in the package ros_etsi_its_msgs.
typedef struct ros_etsi_its_msgs__msg__Intersections
{
  ros_etsi_its_msgs__msg__IntersectionGeometry__Sequence intersects;
} ros_etsi_its_msgs__msg__Intersections;

// Struct for a sequence of ros_etsi_its_msgs__msg__Intersections.
typedef struct ros_etsi_its_msgs__msg__Intersections__Sequence
{
  ros_etsi_its_msgs__msg__Intersections * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros_etsi_its_msgs__msg__Intersections__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS_ETSI_ITS_MSGS__MSG__DETAIL__INTERSECTIONS__STRUCT_H_

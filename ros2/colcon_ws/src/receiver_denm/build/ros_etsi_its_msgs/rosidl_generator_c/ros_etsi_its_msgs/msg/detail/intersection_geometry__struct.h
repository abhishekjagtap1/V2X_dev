// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros_etsi_its_msgs:msg/IntersectionGeometry.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ros_etsi_its_msgs/msg/intersection_geometry.h"


#ifndef ROS_ETSI_ITS_MSGS__MSG__DETAIL__INTERSECTION_GEOMETRY__STRUCT_H_
#define ROS_ETSI_ITS_MSGS__MSG__DETAIL__INTERSECTION_GEOMETRY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'name'
#include "rosidl_runtime_c/string.h"
// Member 'ref_point'
#include "ros_etsi_its_msgs/msg/detail/reference_position__struct.h"
// Member 'lane_set'
#include "ros_etsi_its_msgs/msg/detail/generic_lane__struct.h"

/// Struct defined in msg/IntersectionGeometry in the package ros_etsi_its_msgs.
typedef struct ros_etsi_its_msgs__msg__IntersectionGeometry
{
  rosidl_runtime_c__String name;
  uint16_t id;
  uint8_t revision;
  ros_etsi_its_msgs__msg__ReferencePosition ref_point;
  uint16_t lane_width;
  ros_etsi_its_msgs__msg__GenericLane__Sequence lane_set;
} ros_etsi_its_msgs__msg__IntersectionGeometry;

// Struct for a sequence of ros_etsi_its_msgs__msg__IntersectionGeometry.
typedef struct ros_etsi_its_msgs__msg__IntersectionGeometry__Sequence
{
  ros_etsi_its_msgs__msg__IntersectionGeometry * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros_etsi_its_msgs__msg__IntersectionGeometry__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS_ETSI_ITS_MSGS__MSG__DETAIL__INTERSECTION_GEOMETRY__STRUCT_H_

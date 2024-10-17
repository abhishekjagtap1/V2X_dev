// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros_etsi_its_msgs:msg/GenericLane.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ros_etsi_its_msgs/msg/generic_lane.h"


#ifndef ROS_ETSI_ITS_MSGS__MSG__DETAIL__GENERIC_LANE__STRUCT_H_
#define ROS_ETSI_ITS_MSGS__MSG__DETAIL__GENERIC_LANE__STRUCT_H_

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
// Member 'node_list'
#include "ros_etsi_its_msgs/msg/detail/node_set_xy__struct.h"
// Member 'connects_to'
#include "ros_etsi_its_msgs/msg/detail/connection__struct.h"

/// Struct defined in msg/GenericLane in the package ros_etsi_its_msgs.
typedef struct ros_etsi_its_msgs__msg__GenericLane
{
  uint8_t lane_id;
  rosidl_runtime_c__String name;
  uint8_t ingress_approach;
  uint8_t egress_approach;
  uint8_t lane_direction;
  ros_etsi_its_msgs__msg__NodeSetXY__Sequence node_list;
  ros_etsi_its_msgs__msg__Connection__Sequence connects_to;
} ros_etsi_its_msgs__msg__GenericLane;

// Struct for a sequence of ros_etsi_its_msgs__msg__GenericLane.
typedef struct ros_etsi_its_msgs__msg__GenericLane__Sequence
{
  ros_etsi_its_msgs__msg__GenericLane * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros_etsi_its_msgs__msg__GenericLane__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS_ETSI_ITS_MSGS__MSG__DETAIL__GENERIC_LANE__STRUCT_H_

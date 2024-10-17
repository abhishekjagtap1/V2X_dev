// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros_etsi_its_msgs:msg/SPATEM.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ros_etsi_its_msgs/msg/spatem.h"


#ifndef ROS_ETSI_ITS_MSGS__MSG__DETAIL__SPATEM__STRUCT_H_
#define ROS_ETSI_ITS_MSGS__MSG__DETAIL__SPATEM__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'its_header'
#include "ros_etsi_its_msgs/msg/detail/its_pdu_header__struct.h"
// Member 'intersections'
#include "ros_etsi_its_msgs/msg/detail/intersection_state__struct.h"

/// Struct defined in msg/SPATEM in the package ros_etsi_its_msgs.
typedef struct ros_etsi_its_msgs__msg__SPATEM
{
  std_msgs__msg__Header header;
  ros_etsi_its_msgs__msg__ItsPduHeader its_header;
  ros_etsi_its_msgs__msg__IntersectionState__Sequence intersections;
} ros_etsi_its_msgs__msg__SPATEM;

// Struct for a sequence of ros_etsi_its_msgs__msg__SPATEM.
typedef struct ros_etsi_its_msgs__msg__SPATEM__Sequence
{
  ros_etsi_its_msgs__msg__SPATEM * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros_etsi_its_msgs__msg__SPATEM__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS_ETSI_ITS_MSGS__MSG__DETAIL__SPATEM__STRUCT_H_

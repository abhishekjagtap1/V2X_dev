// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros_etsi_its_msgs:msg/ListOfPerceivedObjects.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ros_etsi_its_msgs/msg/list_of_perceived_objects.h"


#ifndef ROS_ETSI_ITS_MSGS__MSG__DETAIL__LIST_OF_PERCEIVED_OBJECTS__STRUCT_H_
#define ROS_ETSI_ITS_MSGS__MSG__DETAIL__LIST_OF_PERCEIVED_OBJECTS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'perceived_object_container'
#include "ros_etsi_its_msgs/msg/detail/perceived_object__struct.h"

/// Struct defined in msg/ListOfPerceivedObjects in the package ros_etsi_its_msgs.
typedef struct ros_etsi_its_msgs__msg__ListOfPerceivedObjects
{
  ros_etsi_its_msgs__msg__PerceivedObject__Sequence perceived_object_container;
} ros_etsi_its_msgs__msg__ListOfPerceivedObjects;

// Struct for a sequence of ros_etsi_its_msgs__msg__ListOfPerceivedObjects.
typedef struct ros_etsi_its_msgs__msg__ListOfPerceivedObjects__Sequence
{
  ros_etsi_its_msgs__msg__ListOfPerceivedObjects * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros_etsi_its_msgs__msg__ListOfPerceivedObjects__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS_ETSI_ITS_MSGS__MSG__DETAIL__LIST_OF_PERCEIVED_OBJECTS__STRUCT_H_

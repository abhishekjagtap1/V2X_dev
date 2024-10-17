// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros_etsi_its_msgs:msg/ObjectClassDescription.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ros_etsi_its_msgs/msg/object_class_description.h"


#ifndef ROS_ETSI_ITS_MSGS__MSG__DETAIL__OBJECT_CLASS_DESCRIPTION__STRUCT_H_
#define ROS_ETSI_ITS_MSGS__MSG__DETAIL__OBJECT_CLASS_DESCRIPTION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'TYPE_UNKNOWN'.
enum
{
  ros_etsi_its_msgs__msg__ObjectClassDescription__TYPE_UNKNOWN = 0l
};

/// Constant 'TYPE_MOPED'.
enum
{
  ros_etsi_its_msgs__msg__ObjectClassDescription__TYPE_MOPED = 1l
};

/// Constant 'TYPE_MOTORCYCLE'.
enum
{
  ros_etsi_its_msgs__msg__ObjectClassDescription__TYPE_MOTORCYCLE = 2l
};

/// Constant 'TYPE_PASSENGERCAR'.
enum
{
  ros_etsi_its_msgs__msg__ObjectClassDescription__TYPE_PASSENGERCAR = 3l
};

/// Constant 'TYPE_BUS'.
enum
{
  ros_etsi_its_msgs__msg__ObjectClassDescription__TYPE_BUS = 3l
};

/// Constant 'TYPE_LIGHTRUCK'.
enum
{
  ros_etsi_its_msgs__msg__ObjectClassDescription__TYPE_LIGHTRUCK = 3l
};

/// Struct defined in msg/ObjectClassDescription in the package ros_etsi_its_msgs.
/**
  * TODO apply the correct one
 */
typedef struct ros_etsi_its_msgs__msg__ObjectClassDescription
{
  int32_t type;
} ros_etsi_its_msgs__msg__ObjectClassDescription;

// Struct for a sequence of ros_etsi_its_msgs__msg__ObjectClassDescription.
typedef struct ros_etsi_its_msgs__msg__ObjectClassDescription__Sequence
{
  ros_etsi_its_msgs__msg__ObjectClassDescription * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros_etsi_its_msgs__msg__ObjectClassDescription__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS_ETSI_ITS_MSGS__MSG__DETAIL__OBJECT_CLASS_DESCRIPTION__STRUCT_H_

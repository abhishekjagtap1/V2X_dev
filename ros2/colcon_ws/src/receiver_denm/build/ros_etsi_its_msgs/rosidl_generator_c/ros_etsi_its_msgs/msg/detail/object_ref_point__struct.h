// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros_etsi_its_msgs:msg/ObjectRefPoint.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ros_etsi_its_msgs/msg/object_ref_point.h"


#ifndef ROS_ETSI_ITS_MSGS__MSG__DETAIL__OBJECT_REF_POINT__STRUCT_H_
#define ROS_ETSI_ITS_MSGS__MSG__DETAIL__OBJECT_REF_POINT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'VALUE_MID'.
enum
{
  ros_etsi_its_msgs__msg__ObjectRefPoint__VALUE_MID = 0l
};

/// Constant 'VALUE_BOTTOMLEFT'.
enum
{
  ros_etsi_its_msgs__msg__ObjectRefPoint__VALUE_BOTTOMLEFT = 1l
};

/// Constant 'VALUE_MIDLEFT'.
enum
{
  ros_etsi_its_msgs__msg__ObjectRefPoint__VALUE_MIDLEFT = 2l
};

/// Constant 'VALUE_TOPLEFT'.
enum
{
  ros_etsi_its_msgs__msg__ObjectRefPoint__VALUE_TOPLEFT = 3l
};

/// Constant 'VALUE_BOTTOMMID'.
enum
{
  ros_etsi_its_msgs__msg__ObjectRefPoint__VALUE_BOTTOMMID = 4l
};

/// Constant 'VALUE_TOPMID'.
enum
{
  ros_etsi_its_msgs__msg__ObjectRefPoint__VALUE_TOPMID = 5l
};

/// Constant 'VALUE_BOTTOMRIGHT'.
enum
{
  ros_etsi_its_msgs__msg__ObjectRefPoint__VALUE_BOTTOMRIGHT = 6l
};

/// Constant 'VALUE_MIDRIGHT'.
enum
{
  ros_etsi_its_msgs__msg__ObjectRefPoint__VALUE_MIDRIGHT = 7l
};

/// Constant 'VALUE_TOPRIGHT'.
enum
{
  ros_etsi_its_msgs__msg__ObjectRefPoint__VALUE_TOPRIGHT = 8l
};

/// Struct defined in msg/ObjectRefPoint in the package ros_etsi_its_msgs.
/**
  * mid(0), bottomLeft(1), midLeft(2), topLeft(3), bottomMid(4), topMid(5), bottomRight(6), midRight(7), topRight(8)
 */
typedef struct ros_etsi_its_msgs__msg__ObjectRefPoint
{
  int32_t value;
} ros_etsi_its_msgs__msg__ObjectRefPoint;

// Struct for a sequence of ros_etsi_its_msgs__msg__ObjectRefPoint.
typedef struct ros_etsi_its_msgs__msg__ObjectRefPoint__Sequence
{
  ros_etsi_its_msgs__msg__ObjectRefPoint * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros_etsi_its_msgs__msg__ObjectRefPoint__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS_ETSI_ITS_MSGS__MSG__DETAIL__OBJECT_REF_POINT__STRUCT_H_

// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros_etsi_its_msgs:msg/LateralAcceleration.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ros_etsi_its_msgs/msg/lateral_acceleration.h"


#ifndef ROS_ETSI_ITS_MSGS__MSG__DETAIL__LATERAL_ACCELERATION__STRUCT_H_
#define ROS_ETSI_ITS_MSGS__MSG__DETAIL__LATERAL_ACCELERATION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'VALUE_POINTONEMETERPERSECSQUAREDTORIGHT'.
enum
{
  ros_etsi_its_msgs__msg__LateralAcceleration__VALUE_POINTONEMETERPERSECSQUAREDTORIGHT = -1l
};

/// Constant 'VALUE_POINTONEMETERPERSECSQUAREDTOLEFT'.
enum
{
  ros_etsi_its_msgs__msg__LateralAcceleration__VALUE_POINTONEMETERPERSECSQUAREDTOLEFT = 1l
};

/// Constant 'VALUE_UNAVAILABLE'.
enum
{
  ros_etsi_its_msgs__msg__LateralAcceleration__VALUE_UNAVAILABLE = 161l
};

/// Constant 'CONFIDENCE_POINTONEMETERPERSECSQUARED'.
/**
  * AccelerationConfidence ::= INTEGER {pointOneMeterPerSecSquared(1), outOfRange(101), unavailable(102)} (0 .. 102)
 */
enum
{
  ros_etsi_its_msgs__msg__LateralAcceleration__CONFIDENCE_POINTONEMETERPERSECSQUARED = 1
};

/// Constant 'CONFIDENCE_OUTOFRANGE'.
enum
{
  ros_etsi_its_msgs__msg__LateralAcceleration__CONFIDENCE_OUTOFRANGE = 101
};

/// Constant 'CONFIDENCE_UNAVAILABLE'.
enum
{
  ros_etsi_its_msgs__msg__LateralAcceleration__CONFIDENCE_UNAVAILABLE = 102
};

/// Struct defined in msg/LateralAcceleration in the package ros_etsi_its_msgs.
typedef struct ros_etsi_its_msgs__msg__LateralAcceleration
{
  int32_t value;
  int32_t confidence;
} ros_etsi_its_msgs__msg__LateralAcceleration;

// Struct for a sequence of ros_etsi_its_msgs__msg__LateralAcceleration.
typedef struct ros_etsi_its_msgs__msg__LateralAcceleration__Sequence
{
  ros_etsi_its_msgs__msg__LateralAcceleration * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros_etsi_its_msgs__msg__LateralAcceleration__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS_ETSI_ITS_MSGS__MSG__DETAIL__LATERAL_ACCELERATION__STRUCT_H_

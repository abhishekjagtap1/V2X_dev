// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros_etsi_its_msgs:msg/SensorInformation.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ros_etsi_its_msgs/msg/sensor_information.h"


#ifndef ROS_ETSI_ITS_MSGS__MSG__DETAIL__SENSOR_INFORMATION__STRUCT_H_
#define ROS_ETSI_ITS_MSGS__MSG__DETAIL__SENSOR_INFORMATION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'detection_area'
#include "ros_etsi_its_msgs/msg/detail/vehicle_sensor__struct.h"

/// Struct defined in msg/SensorInformation in the package ros_etsi_its_msgs.
typedef struct ros_etsi_its_msgs__msg__SensorInformation
{
  uint8_t sensor_id;
  /// SensorType  INTEGER {undefined(0), radar(1), lidar(2), monovideo(3), stereovision(4), nightvision(5), ultrasonic(6), pmd(7), fusion(8), inductionloop(9), sphericalCamera(10), itssaggregation(11)} (0..15)
  int8_t type;
  /// TODO add other type
  ros_etsi_its_msgs__msg__VehicleSensor detection_area;
} ros_etsi_its_msgs__msg__SensorInformation;

// Struct for a sequence of ros_etsi_its_msgs__msg__SensorInformation.
typedef struct ros_etsi_its_msgs__msg__SensorInformation__Sequence
{
  ros_etsi_its_msgs__msg__SensorInformation * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros_etsi_its_msgs__msg__SensorInformation__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS_ETSI_ITS_MSGS__MSG__DETAIL__SENSOR_INFORMATION__STRUCT_H_

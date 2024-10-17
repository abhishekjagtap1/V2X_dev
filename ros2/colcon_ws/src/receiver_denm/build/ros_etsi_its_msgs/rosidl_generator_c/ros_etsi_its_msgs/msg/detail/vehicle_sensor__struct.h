// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros_etsi_its_msgs:msg/VehicleSensor.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ros_etsi_its_msgs/msg/vehicle_sensor.h"


#ifndef ROS_ETSI_ITS_MSGS__MSG__DETAIL__VEHICLE_SENSOR__STRUCT_H_
#define ROS_ETSI_ITS_MSGS__MSG__DETAIL__VEHICLE_SENSOR__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'vehicle_sensor_property_list'
#include "ros_etsi_its_msgs/msg/detail/vehicle_sensor_property__struct.h"

/// Struct defined in msg/VehicleSensor in the package ros_etsi_its_msgs.
typedef struct ros_etsi_its_msgs__msg__VehicleSensor
{
  uint8_t ref_point_id;
  /// negativeZeroPointZeroOneMeter(-1), negativeOneMeter(-100)} (-5000..0)
  int32_t x_sensor_offset;
  /// zeroPointZeroOneMeter(1), oneMeter(100)} (-1000..1000)
  int32_t y_sensor_offset;
  /// zeroPointZeroOneMeter(1), oneMeter(100)} (0..1000)
  int32_t z_sensor_offset;
  ros_etsi_its_msgs__msg__VehicleSensorProperty__Sequence vehicle_sensor_property_list;
} ros_etsi_its_msgs__msg__VehicleSensor;

// Struct for a sequence of ros_etsi_its_msgs__msg__VehicleSensor.
typedef struct ros_etsi_its_msgs__msg__VehicleSensor__Sequence
{
  ros_etsi_its_msgs__msg__VehicleSensor * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros_etsi_its_msgs__msg__VehicleSensor__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS_ETSI_ITS_MSGS__MSG__DETAIL__VEHICLE_SENSOR__STRUCT_H_

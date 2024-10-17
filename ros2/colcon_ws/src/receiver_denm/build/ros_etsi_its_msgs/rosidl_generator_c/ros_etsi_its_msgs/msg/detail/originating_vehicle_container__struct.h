// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ros_etsi_its_msgs:msg/OriginatingVehicleContainer.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ros_etsi_its_msgs/msg/originating_vehicle_container.h"


#ifndef ROS_ETSI_ITS_MSGS__MSG__DETAIL__ORIGINATING_VEHICLE_CONTAINER__STRUCT_H_
#define ROS_ETSI_ITS_MSGS__MSG__DETAIL__ORIGINATING_VEHICLE_CONTAINER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'heading'
#include "ros_etsi_its_msgs/msg/detail/heading__struct.h"
// Member 'speed'
#include "ros_etsi_its_msgs/msg/detail/speed__struct.h"
// Member 'vehicle_orientation_angle'
#include "ros_etsi_its_msgs/msg/detail/wgs84_angle__struct.h"
// Member 'drive_direction'
#include "ros_etsi_its_msgs/msg/detail/drive_direction__struct.h"
// Member 'vehicle_length'
#include "ros_etsi_its_msgs/msg/detail/vehicle_length__struct.h"
// Member 'vehicle_width'
#include "ros_etsi_its_msgs/msg/detail/vehicle_width__struct.h"
// Member 'longitudinal_acceleration'
#include "ros_etsi_its_msgs/msg/detail/longitudinal_acceleration__struct.h"
// Member 'yaw_rate'
#include "ros_etsi_its_msgs/msg/detail/yaw_rate__struct.h"

/// Struct defined in msg/OriginatingVehicleContainer in the package ros_etsi_its_msgs.
typedef struct ros_etsi_its_msgs__msg__OriginatingVehicleContainer
{
  ros_etsi_its_msgs__msg__Heading heading;
  ros_etsi_its_msgs__msg__Speed speed;
  bool has_vehicle_orientation_angle;
  ros_etsi_its_msgs__msg__WGS84Angle vehicle_orientation_angle;
  ros_etsi_its_msgs__msg__DriveDirection drive_direction;
  bool has_vehicle_length;
  ros_etsi_its_msgs__msg__VehicleLength vehicle_length;
  bool has_vehicle_width;
  ros_etsi_its_msgs__msg__VehicleWidth vehicle_width;
  bool has_vehicle_height;
  uint8_t vehicle_height;
  bool has_longitudinal_acceleration;
  ros_etsi_its_msgs__msg__LongitudinalAcceleration longitudinal_acceleration;
  bool has_yaw_rate;
  ros_etsi_its_msgs__msg__YawRate yaw_rate;
} ros_etsi_its_msgs__msg__OriginatingVehicleContainer;

// Struct for a sequence of ros_etsi_its_msgs__msg__OriginatingVehicleContainer.
typedef struct ros_etsi_its_msgs__msg__OriginatingVehicleContainer__Sequence
{
  ros_etsi_its_msgs__msg__OriginatingVehicleContainer * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ros_etsi_its_msgs__msg__OriginatingVehicleContainer__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROS_ETSI_ITS_MSGS__MSG__DETAIL__ORIGINATING_VEHICLE_CONTAINER__STRUCT_H_

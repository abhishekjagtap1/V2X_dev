// generated from rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
// with input from ros_etsi_its_msgs:msg/WGS84Angle.idl
// generated code does not contain a copyright notice
#ifndef ROS_ETSI_ITS_MSGS__MSG__DETAIL__WGS84_ANGLE__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
#define ROS_ETSI_ITS_MSGS__MSG__DETAIL__WGS84_ANGLE__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_


#include <stddef.h>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "ros_etsi_its_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "ros_etsi_its_msgs/msg/detail/wgs84_angle__struct.h"
#include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ros_etsi_its_msgs
bool cdr_serialize_ros_etsi_its_msgs__msg__WGS84Angle(
  const ros_etsi_its_msgs__msg__WGS84Angle * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ros_etsi_its_msgs
bool cdr_deserialize_ros_etsi_its_msgs__msg__WGS84Angle(
  eprosima::fastcdr::Cdr &,
  ros_etsi_its_msgs__msg__WGS84Angle * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ros_etsi_its_msgs
size_t get_serialized_size_ros_etsi_its_msgs__msg__WGS84Angle(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ros_etsi_its_msgs
size_t max_serialized_size_ros_etsi_its_msgs__msg__WGS84Angle(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ros_etsi_its_msgs
bool cdr_serialize_key_ros_etsi_its_msgs__msg__WGS84Angle(
  const ros_etsi_its_msgs__msg__WGS84Angle * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ros_etsi_its_msgs
size_t get_serialized_size_key_ros_etsi_its_msgs__msg__WGS84Angle(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ros_etsi_its_msgs
size_t max_serialized_size_key_ros_etsi_its_msgs__msg__WGS84Angle(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ros_etsi_its_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ros_etsi_its_msgs, msg, WGS84Angle)();

#ifdef __cplusplus
}
#endif

#endif  // ROS_ETSI_ITS_MSGS__MSG__DETAIL__WGS84_ANGLE__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_

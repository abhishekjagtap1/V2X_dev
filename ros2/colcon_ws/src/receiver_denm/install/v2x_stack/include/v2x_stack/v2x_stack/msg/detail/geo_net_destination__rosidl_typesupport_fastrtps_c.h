// generated from rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
// with input from v2x_stack:msg/GeoNetDestination.idl
// generated code does not contain a copyright notice
#ifndef V2X_STACK__MSG__DETAIL__GEO_NET_DESTINATION__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
#define V2X_STACK__MSG__DETAIL__GEO_NET_DESTINATION__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_


#include <stddef.h>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "v2x_stack/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "v2x_stack/msg/detail/geo_net_destination__struct.h"
#include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_v2x_stack
bool cdr_serialize_v2x_stack__msg__GeoNetDestination(
  const v2x_stack__msg__GeoNetDestination * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_v2x_stack
bool cdr_deserialize_v2x_stack__msg__GeoNetDestination(
  eprosima::fastcdr::Cdr &,
  v2x_stack__msg__GeoNetDestination * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_v2x_stack
size_t get_serialized_size_v2x_stack__msg__GeoNetDestination(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_v2x_stack
size_t max_serialized_size_v2x_stack__msg__GeoNetDestination(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_v2x_stack
bool cdr_serialize_key_v2x_stack__msg__GeoNetDestination(
  const v2x_stack__msg__GeoNetDestination * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_v2x_stack
size_t get_serialized_size_key_v2x_stack__msg__GeoNetDestination(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_v2x_stack
size_t max_serialized_size_key_v2x_stack__msg__GeoNetDestination(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_v2x_stack
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, v2x_stack, msg, GeoNetDestination)();

#ifdef __cplusplus
}
#endif

#endif  // V2X_STACK__MSG__DETAIL__GEO_NET_DESTINATION__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_

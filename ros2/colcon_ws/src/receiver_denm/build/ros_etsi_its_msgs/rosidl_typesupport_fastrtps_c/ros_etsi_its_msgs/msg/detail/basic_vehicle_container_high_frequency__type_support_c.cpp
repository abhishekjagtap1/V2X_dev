// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from ros_etsi_its_msgs:msg/BasicVehicleContainerHighFrequency.idl
// generated code does not contain a copyright notice
#include "ros_etsi_its_msgs/msg/detail/basic_vehicle_container_high_frequency__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "ros_etsi_its_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "ros_etsi_its_msgs/msg/detail/basic_vehicle_container_high_frequency__struct.h"
#include "ros_etsi_its_msgs/msg/detail/basic_vehicle_container_high_frequency__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "ros_etsi_its_msgs/msg/detail/acceleration_control__functions.h"  // acceleration_control
#include "ros_etsi_its_msgs/msg/detail/curvature__functions.h"  // curvature
#include "ros_etsi_its_msgs/msg/detail/curvature_calculation_mode__functions.h"  // curvature_calculation_mode
#include "ros_etsi_its_msgs/msg/detail/drive_direction__functions.h"  // drive_direction
#include "ros_etsi_its_msgs/msg/detail/heading__functions.h"  // heading
#include "ros_etsi_its_msgs/msg/detail/longitudinal_acceleration__functions.h"  // longitudinal_acceleration
#include "ros_etsi_its_msgs/msg/detail/speed__functions.h"  // speed
#include "ros_etsi_its_msgs/msg/detail/vehicle_length__functions.h"  // vehicle_length
#include "ros_etsi_its_msgs/msg/detail/vehicle_width__functions.h"  // vehicle_width
#include "ros_etsi_its_msgs/msg/detail/yaw_rate__functions.h"  // yaw_rate

// forward declare type support functions

bool cdr_serialize_ros_etsi_its_msgs__msg__AccelerationControl(
  const ros_etsi_its_msgs__msg__AccelerationControl * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_ros_etsi_its_msgs__msg__AccelerationControl(
  eprosima::fastcdr::Cdr & cdr,
  ros_etsi_its_msgs__msg__AccelerationControl * ros_message);

size_t get_serialized_size_ros_etsi_its_msgs__msg__AccelerationControl(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_ros_etsi_its_msgs__msg__AccelerationControl(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_ros_etsi_its_msgs__msg__AccelerationControl(
  const ros_etsi_its_msgs__msg__AccelerationControl * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_ros_etsi_its_msgs__msg__AccelerationControl(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_ros_etsi_its_msgs__msg__AccelerationControl(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ros_etsi_its_msgs, msg, AccelerationControl)();

bool cdr_serialize_ros_etsi_its_msgs__msg__Curvature(
  const ros_etsi_its_msgs__msg__Curvature * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_ros_etsi_its_msgs__msg__Curvature(
  eprosima::fastcdr::Cdr & cdr,
  ros_etsi_its_msgs__msg__Curvature * ros_message);

size_t get_serialized_size_ros_etsi_its_msgs__msg__Curvature(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_ros_etsi_its_msgs__msg__Curvature(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_ros_etsi_its_msgs__msg__Curvature(
  const ros_etsi_its_msgs__msg__Curvature * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_ros_etsi_its_msgs__msg__Curvature(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_ros_etsi_its_msgs__msg__Curvature(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ros_etsi_its_msgs, msg, Curvature)();

bool cdr_serialize_ros_etsi_its_msgs__msg__CurvatureCalculationMode(
  const ros_etsi_its_msgs__msg__CurvatureCalculationMode * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_ros_etsi_its_msgs__msg__CurvatureCalculationMode(
  eprosima::fastcdr::Cdr & cdr,
  ros_etsi_its_msgs__msg__CurvatureCalculationMode * ros_message);

size_t get_serialized_size_ros_etsi_its_msgs__msg__CurvatureCalculationMode(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_ros_etsi_its_msgs__msg__CurvatureCalculationMode(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_ros_etsi_its_msgs__msg__CurvatureCalculationMode(
  const ros_etsi_its_msgs__msg__CurvatureCalculationMode * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_ros_etsi_its_msgs__msg__CurvatureCalculationMode(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_ros_etsi_its_msgs__msg__CurvatureCalculationMode(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ros_etsi_its_msgs, msg, CurvatureCalculationMode)();

bool cdr_serialize_ros_etsi_its_msgs__msg__DriveDirection(
  const ros_etsi_its_msgs__msg__DriveDirection * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_ros_etsi_its_msgs__msg__DriveDirection(
  eprosima::fastcdr::Cdr & cdr,
  ros_etsi_its_msgs__msg__DriveDirection * ros_message);

size_t get_serialized_size_ros_etsi_its_msgs__msg__DriveDirection(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_ros_etsi_its_msgs__msg__DriveDirection(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_ros_etsi_its_msgs__msg__DriveDirection(
  const ros_etsi_its_msgs__msg__DriveDirection * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_ros_etsi_its_msgs__msg__DriveDirection(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_ros_etsi_its_msgs__msg__DriveDirection(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ros_etsi_its_msgs, msg, DriveDirection)();

bool cdr_serialize_ros_etsi_its_msgs__msg__Heading(
  const ros_etsi_its_msgs__msg__Heading * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_ros_etsi_its_msgs__msg__Heading(
  eprosima::fastcdr::Cdr & cdr,
  ros_etsi_its_msgs__msg__Heading * ros_message);

size_t get_serialized_size_ros_etsi_its_msgs__msg__Heading(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_ros_etsi_its_msgs__msg__Heading(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_ros_etsi_its_msgs__msg__Heading(
  const ros_etsi_its_msgs__msg__Heading * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_ros_etsi_its_msgs__msg__Heading(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_ros_etsi_its_msgs__msg__Heading(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ros_etsi_its_msgs, msg, Heading)();

bool cdr_serialize_ros_etsi_its_msgs__msg__LongitudinalAcceleration(
  const ros_etsi_its_msgs__msg__LongitudinalAcceleration * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_ros_etsi_its_msgs__msg__LongitudinalAcceleration(
  eprosima::fastcdr::Cdr & cdr,
  ros_etsi_its_msgs__msg__LongitudinalAcceleration * ros_message);

size_t get_serialized_size_ros_etsi_its_msgs__msg__LongitudinalAcceleration(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_ros_etsi_its_msgs__msg__LongitudinalAcceleration(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_ros_etsi_its_msgs__msg__LongitudinalAcceleration(
  const ros_etsi_its_msgs__msg__LongitudinalAcceleration * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_ros_etsi_its_msgs__msg__LongitudinalAcceleration(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_ros_etsi_its_msgs__msg__LongitudinalAcceleration(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ros_etsi_its_msgs, msg, LongitudinalAcceleration)();

bool cdr_serialize_ros_etsi_its_msgs__msg__Speed(
  const ros_etsi_its_msgs__msg__Speed * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_ros_etsi_its_msgs__msg__Speed(
  eprosima::fastcdr::Cdr & cdr,
  ros_etsi_its_msgs__msg__Speed * ros_message);

size_t get_serialized_size_ros_etsi_its_msgs__msg__Speed(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_ros_etsi_its_msgs__msg__Speed(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_ros_etsi_its_msgs__msg__Speed(
  const ros_etsi_its_msgs__msg__Speed * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_ros_etsi_its_msgs__msg__Speed(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_ros_etsi_its_msgs__msg__Speed(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ros_etsi_its_msgs, msg, Speed)();

bool cdr_serialize_ros_etsi_its_msgs__msg__VehicleLength(
  const ros_etsi_its_msgs__msg__VehicleLength * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_ros_etsi_its_msgs__msg__VehicleLength(
  eprosima::fastcdr::Cdr & cdr,
  ros_etsi_its_msgs__msg__VehicleLength * ros_message);

size_t get_serialized_size_ros_etsi_its_msgs__msg__VehicleLength(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_ros_etsi_its_msgs__msg__VehicleLength(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_ros_etsi_its_msgs__msg__VehicleLength(
  const ros_etsi_its_msgs__msg__VehicleLength * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_ros_etsi_its_msgs__msg__VehicleLength(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_ros_etsi_its_msgs__msg__VehicleLength(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ros_etsi_its_msgs, msg, VehicleLength)();

bool cdr_serialize_ros_etsi_its_msgs__msg__VehicleWidth(
  const ros_etsi_its_msgs__msg__VehicleWidth * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_ros_etsi_its_msgs__msg__VehicleWidth(
  eprosima::fastcdr::Cdr & cdr,
  ros_etsi_its_msgs__msg__VehicleWidth * ros_message);

size_t get_serialized_size_ros_etsi_its_msgs__msg__VehicleWidth(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_ros_etsi_its_msgs__msg__VehicleWidth(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_ros_etsi_its_msgs__msg__VehicleWidth(
  const ros_etsi_its_msgs__msg__VehicleWidth * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_ros_etsi_its_msgs__msg__VehicleWidth(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_ros_etsi_its_msgs__msg__VehicleWidth(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ros_etsi_its_msgs, msg, VehicleWidth)();

bool cdr_serialize_ros_etsi_its_msgs__msg__YawRate(
  const ros_etsi_its_msgs__msg__YawRate * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_ros_etsi_its_msgs__msg__YawRate(
  eprosima::fastcdr::Cdr & cdr,
  ros_etsi_its_msgs__msg__YawRate * ros_message);

size_t get_serialized_size_ros_etsi_its_msgs__msg__YawRate(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_ros_etsi_its_msgs__msg__YawRate(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_ros_etsi_its_msgs__msg__YawRate(
  const ros_etsi_its_msgs__msg__YawRate * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_ros_etsi_its_msgs__msg__YawRate(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_ros_etsi_its_msgs__msg__YawRate(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ros_etsi_its_msgs, msg, YawRate)();


using _BasicVehicleContainerHighFrequency__ros_msg_type = ros_etsi_its_msgs__msg__BasicVehicleContainerHighFrequency;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ros_etsi_its_msgs
bool cdr_serialize_ros_etsi_its_msgs__msg__BasicVehicleContainerHighFrequency(
  const ros_etsi_its_msgs__msg__BasicVehicleContainerHighFrequency * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: heading
  {
    cdr_serialize_ros_etsi_its_msgs__msg__Heading(
      &ros_message->heading, cdr);
  }

  // Field name: speed
  {
    cdr_serialize_ros_etsi_its_msgs__msg__Speed(
      &ros_message->speed, cdr);
  }

  // Field name: drive_direction
  {
    cdr_serialize_ros_etsi_its_msgs__msg__DriveDirection(
      &ros_message->drive_direction, cdr);
  }

  // Field name: vehicle_length
  {
    cdr_serialize_ros_etsi_its_msgs__msg__VehicleLength(
      &ros_message->vehicle_length, cdr);
  }

  // Field name: vehicle_width
  {
    cdr_serialize_ros_etsi_its_msgs__msg__VehicleWidth(
      &ros_message->vehicle_width, cdr);
  }

  // Field name: longitudinal_acceleration
  {
    cdr_serialize_ros_etsi_its_msgs__msg__LongitudinalAcceleration(
      &ros_message->longitudinal_acceleration, cdr);
  }

  // Field name: curvature
  {
    cdr_serialize_ros_etsi_its_msgs__msg__Curvature(
      &ros_message->curvature, cdr);
  }

  // Field name: curvature_calculation_mode
  {
    cdr_serialize_ros_etsi_its_msgs__msg__CurvatureCalculationMode(
      &ros_message->curvature_calculation_mode, cdr);
  }

  // Field name: yaw_rate
  {
    cdr_serialize_ros_etsi_its_msgs__msg__YawRate(
      &ros_message->yaw_rate, cdr);
  }

  // Field name: has_acceleration_control
  {
    cdr << (ros_message->has_acceleration_control ? true : false);
  }

  // Field name: acceleration_control
  {
    cdr_serialize_ros_etsi_its_msgs__msg__AccelerationControl(
      &ros_message->acceleration_control, cdr);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ros_etsi_its_msgs
bool cdr_deserialize_ros_etsi_its_msgs__msg__BasicVehicleContainerHighFrequency(
  eprosima::fastcdr::Cdr & cdr,
  ros_etsi_its_msgs__msg__BasicVehicleContainerHighFrequency * ros_message)
{
  // Field name: heading
  {
    cdr_deserialize_ros_etsi_its_msgs__msg__Heading(cdr, &ros_message->heading);
  }

  // Field name: speed
  {
    cdr_deserialize_ros_etsi_its_msgs__msg__Speed(cdr, &ros_message->speed);
  }

  // Field name: drive_direction
  {
    cdr_deserialize_ros_etsi_its_msgs__msg__DriveDirection(cdr, &ros_message->drive_direction);
  }

  // Field name: vehicle_length
  {
    cdr_deserialize_ros_etsi_its_msgs__msg__VehicleLength(cdr, &ros_message->vehicle_length);
  }

  // Field name: vehicle_width
  {
    cdr_deserialize_ros_etsi_its_msgs__msg__VehicleWidth(cdr, &ros_message->vehicle_width);
  }

  // Field name: longitudinal_acceleration
  {
    cdr_deserialize_ros_etsi_its_msgs__msg__LongitudinalAcceleration(cdr, &ros_message->longitudinal_acceleration);
  }

  // Field name: curvature
  {
    cdr_deserialize_ros_etsi_its_msgs__msg__Curvature(cdr, &ros_message->curvature);
  }

  // Field name: curvature_calculation_mode
  {
    cdr_deserialize_ros_etsi_its_msgs__msg__CurvatureCalculationMode(cdr, &ros_message->curvature_calculation_mode);
  }

  // Field name: yaw_rate
  {
    cdr_deserialize_ros_etsi_its_msgs__msg__YawRate(cdr, &ros_message->yaw_rate);
  }

  // Field name: has_acceleration_control
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->has_acceleration_control = tmp ? true : false;
  }

  // Field name: acceleration_control
  {
    cdr_deserialize_ros_etsi_its_msgs__msg__AccelerationControl(cdr, &ros_message->acceleration_control);
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ros_etsi_its_msgs
size_t get_serialized_size_ros_etsi_its_msgs__msg__BasicVehicleContainerHighFrequency(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _BasicVehicleContainerHighFrequency__ros_msg_type * ros_message = static_cast<const _BasicVehicleContainerHighFrequency__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: heading
  current_alignment += get_serialized_size_ros_etsi_its_msgs__msg__Heading(
    &(ros_message->heading), current_alignment);

  // Field name: speed
  current_alignment += get_serialized_size_ros_etsi_its_msgs__msg__Speed(
    &(ros_message->speed), current_alignment);

  // Field name: drive_direction
  current_alignment += get_serialized_size_ros_etsi_its_msgs__msg__DriveDirection(
    &(ros_message->drive_direction), current_alignment);

  // Field name: vehicle_length
  current_alignment += get_serialized_size_ros_etsi_its_msgs__msg__VehicleLength(
    &(ros_message->vehicle_length), current_alignment);

  // Field name: vehicle_width
  current_alignment += get_serialized_size_ros_etsi_its_msgs__msg__VehicleWidth(
    &(ros_message->vehicle_width), current_alignment);

  // Field name: longitudinal_acceleration
  current_alignment += get_serialized_size_ros_etsi_its_msgs__msg__LongitudinalAcceleration(
    &(ros_message->longitudinal_acceleration), current_alignment);

  // Field name: curvature
  current_alignment += get_serialized_size_ros_etsi_its_msgs__msg__Curvature(
    &(ros_message->curvature), current_alignment);

  // Field name: curvature_calculation_mode
  current_alignment += get_serialized_size_ros_etsi_its_msgs__msg__CurvatureCalculationMode(
    &(ros_message->curvature_calculation_mode), current_alignment);

  // Field name: yaw_rate
  current_alignment += get_serialized_size_ros_etsi_its_msgs__msg__YawRate(
    &(ros_message->yaw_rate), current_alignment);

  // Field name: has_acceleration_control
  {
    size_t item_size = sizeof(ros_message->has_acceleration_control);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: acceleration_control
  current_alignment += get_serialized_size_ros_etsi_its_msgs__msg__AccelerationControl(
    &(ros_message->acceleration_control), current_alignment);

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ros_etsi_its_msgs
size_t max_serialized_size_ros_etsi_its_msgs__msg__BasicVehicleContainerHighFrequency(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // Field name: heading
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_ros_etsi_its_msgs__msg__Heading(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: speed
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_ros_etsi_its_msgs__msg__Speed(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: drive_direction
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_ros_etsi_its_msgs__msg__DriveDirection(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: vehicle_length
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_ros_etsi_its_msgs__msg__VehicleLength(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: vehicle_width
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_ros_etsi_its_msgs__msg__VehicleWidth(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: longitudinal_acceleration
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_ros_etsi_its_msgs__msg__LongitudinalAcceleration(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: curvature
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_ros_etsi_its_msgs__msg__Curvature(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: curvature_calculation_mode
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_ros_etsi_its_msgs__msg__CurvatureCalculationMode(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: yaw_rate
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_ros_etsi_its_msgs__msg__YawRate(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: has_acceleration_control
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: acceleration_control
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_ros_etsi_its_msgs__msg__AccelerationControl(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = ros_etsi_its_msgs__msg__BasicVehicleContainerHighFrequency;
    is_plain =
      (
      offsetof(DataType, acceleration_control) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ros_etsi_its_msgs
bool cdr_serialize_key_ros_etsi_its_msgs__msg__BasicVehicleContainerHighFrequency(
  const ros_etsi_its_msgs__msg__BasicVehicleContainerHighFrequency * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: heading
  {
    cdr_serialize_key_ros_etsi_its_msgs__msg__Heading(
      &ros_message->heading, cdr);
  }

  // Field name: speed
  {
    cdr_serialize_key_ros_etsi_its_msgs__msg__Speed(
      &ros_message->speed, cdr);
  }

  // Field name: drive_direction
  {
    cdr_serialize_key_ros_etsi_its_msgs__msg__DriveDirection(
      &ros_message->drive_direction, cdr);
  }

  // Field name: vehicle_length
  {
    cdr_serialize_key_ros_etsi_its_msgs__msg__VehicleLength(
      &ros_message->vehicle_length, cdr);
  }

  // Field name: vehicle_width
  {
    cdr_serialize_key_ros_etsi_its_msgs__msg__VehicleWidth(
      &ros_message->vehicle_width, cdr);
  }

  // Field name: longitudinal_acceleration
  {
    cdr_serialize_key_ros_etsi_its_msgs__msg__LongitudinalAcceleration(
      &ros_message->longitudinal_acceleration, cdr);
  }

  // Field name: curvature
  {
    cdr_serialize_key_ros_etsi_its_msgs__msg__Curvature(
      &ros_message->curvature, cdr);
  }

  // Field name: curvature_calculation_mode
  {
    cdr_serialize_key_ros_etsi_its_msgs__msg__CurvatureCalculationMode(
      &ros_message->curvature_calculation_mode, cdr);
  }

  // Field name: yaw_rate
  {
    cdr_serialize_key_ros_etsi_its_msgs__msg__YawRate(
      &ros_message->yaw_rate, cdr);
  }

  // Field name: has_acceleration_control
  {
    cdr << (ros_message->has_acceleration_control ? true : false);
  }

  // Field name: acceleration_control
  {
    cdr_serialize_key_ros_etsi_its_msgs__msg__AccelerationControl(
      &ros_message->acceleration_control, cdr);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ros_etsi_its_msgs
size_t get_serialized_size_key_ros_etsi_its_msgs__msg__BasicVehicleContainerHighFrequency(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _BasicVehicleContainerHighFrequency__ros_msg_type * ros_message = static_cast<const _BasicVehicleContainerHighFrequency__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: heading
  current_alignment += get_serialized_size_key_ros_etsi_its_msgs__msg__Heading(
    &(ros_message->heading), current_alignment);

  // Field name: speed
  current_alignment += get_serialized_size_key_ros_etsi_its_msgs__msg__Speed(
    &(ros_message->speed), current_alignment);

  // Field name: drive_direction
  current_alignment += get_serialized_size_key_ros_etsi_its_msgs__msg__DriveDirection(
    &(ros_message->drive_direction), current_alignment);

  // Field name: vehicle_length
  current_alignment += get_serialized_size_key_ros_etsi_its_msgs__msg__VehicleLength(
    &(ros_message->vehicle_length), current_alignment);

  // Field name: vehicle_width
  current_alignment += get_serialized_size_key_ros_etsi_its_msgs__msg__VehicleWidth(
    &(ros_message->vehicle_width), current_alignment);

  // Field name: longitudinal_acceleration
  current_alignment += get_serialized_size_key_ros_etsi_its_msgs__msg__LongitudinalAcceleration(
    &(ros_message->longitudinal_acceleration), current_alignment);

  // Field name: curvature
  current_alignment += get_serialized_size_key_ros_etsi_its_msgs__msg__Curvature(
    &(ros_message->curvature), current_alignment);

  // Field name: curvature_calculation_mode
  current_alignment += get_serialized_size_key_ros_etsi_its_msgs__msg__CurvatureCalculationMode(
    &(ros_message->curvature_calculation_mode), current_alignment);

  // Field name: yaw_rate
  current_alignment += get_serialized_size_key_ros_etsi_its_msgs__msg__YawRate(
    &(ros_message->yaw_rate), current_alignment);

  // Field name: has_acceleration_control
  {
    size_t item_size = sizeof(ros_message->has_acceleration_control);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: acceleration_control
  current_alignment += get_serialized_size_key_ros_etsi_its_msgs__msg__AccelerationControl(
    &(ros_message->acceleration_control), current_alignment);

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ros_etsi_its_msgs
size_t max_serialized_size_key_ros_etsi_its_msgs__msg__BasicVehicleContainerHighFrequency(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;
  // Field name: heading
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_ros_etsi_its_msgs__msg__Heading(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: speed
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_ros_etsi_its_msgs__msg__Speed(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: drive_direction
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_ros_etsi_its_msgs__msg__DriveDirection(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: vehicle_length
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_ros_etsi_its_msgs__msg__VehicleLength(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: vehicle_width
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_ros_etsi_its_msgs__msg__VehicleWidth(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: longitudinal_acceleration
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_ros_etsi_its_msgs__msg__LongitudinalAcceleration(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: curvature
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_ros_etsi_its_msgs__msg__Curvature(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: curvature_calculation_mode
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_ros_etsi_its_msgs__msg__CurvatureCalculationMode(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: yaw_rate
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_ros_etsi_its_msgs__msg__YawRate(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: has_acceleration_control
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: acceleration_control
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_ros_etsi_its_msgs__msg__AccelerationControl(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = ros_etsi_its_msgs__msg__BasicVehicleContainerHighFrequency;
    is_plain =
      (
      offsetof(DataType, acceleration_control) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _BasicVehicleContainerHighFrequency__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const ros_etsi_its_msgs__msg__BasicVehicleContainerHighFrequency * ros_message = static_cast<const ros_etsi_its_msgs__msg__BasicVehicleContainerHighFrequency *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_ros_etsi_its_msgs__msg__BasicVehicleContainerHighFrequency(ros_message, cdr);
}

static bool _BasicVehicleContainerHighFrequency__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  ros_etsi_its_msgs__msg__BasicVehicleContainerHighFrequency * ros_message = static_cast<ros_etsi_its_msgs__msg__BasicVehicleContainerHighFrequency *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_ros_etsi_its_msgs__msg__BasicVehicleContainerHighFrequency(cdr, ros_message);
}

static uint32_t _BasicVehicleContainerHighFrequency__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_ros_etsi_its_msgs__msg__BasicVehicleContainerHighFrequency(
      untyped_ros_message, 0));
}

static size_t _BasicVehicleContainerHighFrequency__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_ros_etsi_its_msgs__msg__BasicVehicleContainerHighFrequency(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_BasicVehicleContainerHighFrequency = {
  "ros_etsi_its_msgs::msg",
  "BasicVehicleContainerHighFrequency",
  _BasicVehicleContainerHighFrequency__cdr_serialize,
  _BasicVehicleContainerHighFrequency__cdr_deserialize,
  _BasicVehicleContainerHighFrequency__get_serialized_size,
  _BasicVehicleContainerHighFrequency__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _BasicVehicleContainerHighFrequency__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_BasicVehicleContainerHighFrequency,
  get_message_typesupport_handle_function,
  &ros_etsi_its_msgs__msg__BasicVehicleContainerHighFrequency__get_type_hash,
  &ros_etsi_its_msgs__msg__BasicVehicleContainerHighFrequency__get_type_description,
  &ros_etsi_its_msgs__msg__BasicVehicleContainerHighFrequency__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ros_etsi_its_msgs, msg, BasicVehicleContainerHighFrequency)() {
  return &_BasicVehicleContainerHighFrequency__type_support;
}

#if defined(__cplusplus)
}
#endif

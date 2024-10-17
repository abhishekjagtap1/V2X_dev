// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from ros_etsi_its_msgs:msg/PerceivedObject.idl
// generated code does not contain a copyright notice
#include "ros_etsi_its_msgs/msg/detail/perceived_object__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "ros_etsi_its_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "ros_etsi_its_msgs/msg/detail/perceived_object__struct.h"
#include "ros_etsi_its_msgs/msg/detail/perceived_object__functions.h"
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

#include "builtin_interfaces/msg/detail/time__functions.h"  // time_of_detection
#include "ros_etsi_its_msgs/msg/detail/dynamic_status__functions.h"  // dynamic_status
#include "ros_etsi_its_msgs/msg/detail/lateral_acceleration__functions.h"  // y_acceleration
#include "ros_etsi_its_msgs/msg/detail/longitudinal_acceleration__functions.h"  // x_acceleration
#include "ros_etsi_its_msgs/msg/detail/matched_position__functions.h"  // matched_position
#include "ros_etsi_its_msgs/msg/detail/object_dimension__functions.h"  // planar_object_dimension1, planar_object_dimension2, vertical_object_dimension
#include "ros_etsi_its_msgs/msg/detail/object_distance_with_confidence__functions.h"  // x_distance, y_distance, z_distance
#include "ros_etsi_its_msgs/msg/detail/object_ref_point__functions.h"  // object_ref_point
#include "ros_etsi_its_msgs/msg/detail/speed_extended__functions.h"  // x_speed, y_speed, z_speed
#include "ros_etsi_its_msgs/msg/detail/station_type__functions.h"  // classification
#include "rosidl_runtime_c/primitives_sequence.h"  // sensor_id_list
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // sensor_id_list

// forward declare type support functions

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_ros_etsi_its_msgs
bool cdr_serialize_builtin_interfaces__msg__Time(
  const builtin_interfaces__msg__Time * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_ros_etsi_its_msgs
bool cdr_deserialize_builtin_interfaces__msg__Time(
  eprosima::fastcdr::Cdr & cdr,
  builtin_interfaces__msg__Time * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_ros_etsi_its_msgs
size_t get_serialized_size_builtin_interfaces__msg__Time(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_ros_etsi_its_msgs
size_t max_serialized_size_builtin_interfaces__msg__Time(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_ros_etsi_its_msgs
bool cdr_serialize_key_builtin_interfaces__msg__Time(
  const builtin_interfaces__msg__Time * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_ros_etsi_its_msgs
size_t get_serialized_size_key_builtin_interfaces__msg__Time(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_ros_etsi_its_msgs
size_t max_serialized_size_key_builtin_interfaces__msg__Time(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_ros_etsi_its_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, builtin_interfaces, msg, Time)();

bool cdr_serialize_ros_etsi_its_msgs__msg__DynamicStatus(
  const ros_etsi_its_msgs__msg__DynamicStatus * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_ros_etsi_its_msgs__msg__DynamicStatus(
  eprosima::fastcdr::Cdr & cdr,
  ros_etsi_its_msgs__msg__DynamicStatus * ros_message);

size_t get_serialized_size_ros_etsi_its_msgs__msg__DynamicStatus(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_ros_etsi_its_msgs__msg__DynamicStatus(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_ros_etsi_its_msgs__msg__DynamicStatus(
  const ros_etsi_its_msgs__msg__DynamicStatus * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_ros_etsi_its_msgs__msg__DynamicStatus(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_ros_etsi_its_msgs__msg__DynamicStatus(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ros_etsi_its_msgs, msg, DynamicStatus)();

bool cdr_serialize_ros_etsi_its_msgs__msg__LateralAcceleration(
  const ros_etsi_its_msgs__msg__LateralAcceleration * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_ros_etsi_its_msgs__msg__LateralAcceleration(
  eprosima::fastcdr::Cdr & cdr,
  ros_etsi_its_msgs__msg__LateralAcceleration * ros_message);

size_t get_serialized_size_ros_etsi_its_msgs__msg__LateralAcceleration(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_ros_etsi_its_msgs__msg__LateralAcceleration(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_ros_etsi_its_msgs__msg__LateralAcceleration(
  const ros_etsi_its_msgs__msg__LateralAcceleration * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_ros_etsi_its_msgs__msg__LateralAcceleration(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_ros_etsi_its_msgs__msg__LateralAcceleration(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ros_etsi_its_msgs, msg, LateralAcceleration)();

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

bool cdr_serialize_ros_etsi_its_msgs__msg__MatchedPosition(
  const ros_etsi_its_msgs__msg__MatchedPosition * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_ros_etsi_its_msgs__msg__MatchedPosition(
  eprosima::fastcdr::Cdr & cdr,
  ros_etsi_its_msgs__msg__MatchedPosition * ros_message);

size_t get_serialized_size_ros_etsi_its_msgs__msg__MatchedPosition(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_ros_etsi_its_msgs__msg__MatchedPosition(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_ros_etsi_its_msgs__msg__MatchedPosition(
  const ros_etsi_its_msgs__msg__MatchedPosition * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_ros_etsi_its_msgs__msg__MatchedPosition(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_ros_etsi_its_msgs__msg__MatchedPosition(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ros_etsi_its_msgs, msg, MatchedPosition)();

bool cdr_serialize_ros_etsi_its_msgs__msg__ObjectDimension(
  const ros_etsi_its_msgs__msg__ObjectDimension * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_ros_etsi_its_msgs__msg__ObjectDimension(
  eprosima::fastcdr::Cdr & cdr,
  ros_etsi_its_msgs__msg__ObjectDimension * ros_message);

size_t get_serialized_size_ros_etsi_its_msgs__msg__ObjectDimension(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_ros_etsi_its_msgs__msg__ObjectDimension(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_ros_etsi_its_msgs__msg__ObjectDimension(
  const ros_etsi_its_msgs__msg__ObjectDimension * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_ros_etsi_its_msgs__msg__ObjectDimension(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_ros_etsi_its_msgs__msg__ObjectDimension(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ros_etsi_its_msgs, msg, ObjectDimension)();

bool cdr_serialize_ros_etsi_its_msgs__msg__ObjectDistanceWithConfidence(
  const ros_etsi_its_msgs__msg__ObjectDistanceWithConfidence * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_ros_etsi_its_msgs__msg__ObjectDistanceWithConfidence(
  eprosima::fastcdr::Cdr & cdr,
  ros_etsi_its_msgs__msg__ObjectDistanceWithConfidence * ros_message);

size_t get_serialized_size_ros_etsi_its_msgs__msg__ObjectDistanceWithConfidence(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_ros_etsi_its_msgs__msg__ObjectDistanceWithConfidence(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_ros_etsi_its_msgs__msg__ObjectDistanceWithConfidence(
  const ros_etsi_its_msgs__msg__ObjectDistanceWithConfidence * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_ros_etsi_its_msgs__msg__ObjectDistanceWithConfidence(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_ros_etsi_its_msgs__msg__ObjectDistanceWithConfidence(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ros_etsi_its_msgs, msg, ObjectDistanceWithConfidence)();

bool cdr_serialize_ros_etsi_its_msgs__msg__ObjectRefPoint(
  const ros_etsi_its_msgs__msg__ObjectRefPoint * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_ros_etsi_its_msgs__msg__ObjectRefPoint(
  eprosima::fastcdr::Cdr & cdr,
  ros_etsi_its_msgs__msg__ObjectRefPoint * ros_message);

size_t get_serialized_size_ros_etsi_its_msgs__msg__ObjectRefPoint(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_ros_etsi_its_msgs__msg__ObjectRefPoint(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_ros_etsi_its_msgs__msg__ObjectRefPoint(
  const ros_etsi_its_msgs__msg__ObjectRefPoint * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_ros_etsi_its_msgs__msg__ObjectRefPoint(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_ros_etsi_its_msgs__msg__ObjectRefPoint(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ros_etsi_its_msgs, msg, ObjectRefPoint)();

bool cdr_serialize_ros_etsi_its_msgs__msg__SpeedExtended(
  const ros_etsi_its_msgs__msg__SpeedExtended * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_ros_etsi_its_msgs__msg__SpeedExtended(
  eprosima::fastcdr::Cdr & cdr,
  ros_etsi_its_msgs__msg__SpeedExtended * ros_message);

size_t get_serialized_size_ros_etsi_its_msgs__msg__SpeedExtended(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_ros_etsi_its_msgs__msg__SpeedExtended(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_ros_etsi_its_msgs__msg__SpeedExtended(
  const ros_etsi_its_msgs__msg__SpeedExtended * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_ros_etsi_its_msgs__msg__SpeedExtended(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_ros_etsi_its_msgs__msg__SpeedExtended(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ros_etsi_its_msgs, msg, SpeedExtended)();

bool cdr_serialize_ros_etsi_its_msgs__msg__StationType(
  const ros_etsi_its_msgs__msg__StationType * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_ros_etsi_its_msgs__msg__StationType(
  eprosima::fastcdr::Cdr & cdr,
  ros_etsi_its_msgs__msg__StationType * ros_message);

size_t get_serialized_size_ros_etsi_its_msgs__msg__StationType(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_ros_etsi_its_msgs__msg__StationType(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_ros_etsi_its_msgs__msg__StationType(
  const ros_etsi_its_msgs__msg__StationType * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_ros_etsi_its_msgs__msg__StationType(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_ros_etsi_its_msgs__msg__StationType(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ros_etsi_its_msgs, msg, StationType)();


using _PerceivedObject__ros_msg_type = ros_etsi_its_msgs__msg__PerceivedObject;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ros_etsi_its_msgs
bool cdr_serialize_ros_etsi_its_msgs__msg__PerceivedObject(
  const ros_etsi_its_msgs__msg__PerceivedObject * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: object_id
  {
    cdr << ros_message->object_id;
  }

  // Field name: has_sensor_id_list
  {
    cdr << (ros_message->has_sensor_id_list ? true : false);
  }

  // Field name: sensor_id_list
  {
    size_t size = ros_message->sensor_id_list.size;
    auto array_ptr = ros_message->sensor_id_list.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: time_of_detection
  {
    cdr_serialize_builtin_interfaces__msg__Time(
      &ros_message->time_of_detection, cdr);
  }

  // Field name: time_of_measurement
  {
    cdr << ros_message->time_of_measurement;
  }

  // Field name: object_age
  {
    cdr << ros_message->object_age;
  }

  // Field name: object_confidence
  {
    cdr << ros_message->object_confidence;
  }

  // Field name: x_distance
  {
    cdr_serialize_ros_etsi_its_msgs__msg__ObjectDistanceWithConfidence(
      &ros_message->x_distance, cdr);
  }

  // Field name: y_distance
  {
    cdr_serialize_ros_etsi_its_msgs__msg__ObjectDistanceWithConfidence(
      &ros_message->y_distance, cdr);
  }

  // Field name: z_distance
  {
    cdr_serialize_ros_etsi_its_msgs__msg__ObjectDistanceWithConfidence(
      &ros_message->z_distance, cdr);
  }

  // Field name: x_speed
  {
    cdr_serialize_ros_etsi_its_msgs__msg__SpeedExtended(
      &ros_message->x_speed, cdr);
  }

  // Field name: y_speed
  {
    cdr_serialize_ros_etsi_its_msgs__msg__SpeedExtended(
      &ros_message->y_speed, cdr);
  }

  // Field name: z_speed
  {
    cdr_serialize_ros_etsi_its_msgs__msg__SpeedExtended(
      &ros_message->z_speed, cdr);
  }

  // Field name: x_acceleration
  {
    cdr_serialize_ros_etsi_its_msgs__msg__LongitudinalAcceleration(
      &ros_message->x_acceleration, cdr);
  }

  // Field name: y_acceleration
  {
    cdr_serialize_ros_etsi_its_msgs__msg__LateralAcceleration(
      &ros_message->y_acceleration, cdr);
  }

  // Field name: has_planar_object_dimension1
  {
    cdr << (ros_message->has_planar_object_dimension1 ? true : false);
  }

  // Field name: planar_object_dimension1
  {
    cdr_serialize_ros_etsi_its_msgs__msg__ObjectDimension(
      &ros_message->planar_object_dimension1, cdr);
  }

  // Field name: has_planar_object_dimension2
  {
    cdr << (ros_message->has_planar_object_dimension2 ? true : false);
  }

  // Field name: planar_object_dimension2
  {
    cdr_serialize_ros_etsi_its_msgs__msg__ObjectDimension(
      &ros_message->planar_object_dimension2, cdr);
  }

  // Field name: has_vertical_object_dimension
  {
    cdr << (ros_message->has_vertical_object_dimension ? true : false);
  }

  // Field name: vertical_object_dimension
  {
    cdr_serialize_ros_etsi_its_msgs__msg__ObjectDimension(
      &ros_message->vertical_object_dimension, cdr);
  }

  // Field name: object_ref_point
  {
    cdr_serialize_ros_etsi_its_msgs__msg__ObjectRefPoint(
      &ros_message->object_ref_point, cdr);
  }

  // Field name: dynamic_status
  {
    cdr_serialize_ros_etsi_its_msgs__msg__DynamicStatus(
      &ros_message->dynamic_status, cdr);
  }

  // Field name: classification
  {
    cdr_serialize_ros_etsi_its_msgs__msg__StationType(
      &ros_message->classification, cdr);
  }

  // Field name: matched_position
  {
    cdr_serialize_ros_etsi_its_msgs__msg__MatchedPosition(
      &ros_message->matched_position, cdr);
  }

  // Field name: object_angle
  {
    cdr << ros_message->object_angle;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ros_etsi_its_msgs
bool cdr_deserialize_ros_etsi_its_msgs__msg__PerceivedObject(
  eprosima::fastcdr::Cdr & cdr,
  ros_etsi_its_msgs__msg__PerceivedObject * ros_message)
{
  // Field name: object_id
  {
    cdr >> ros_message->object_id;
  }

  // Field name: has_sensor_id_list
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->has_sensor_id_list = tmp ? true : false;
  }

  // Field name: sensor_id_list
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->sensor_id_list.data) {
      rosidl_runtime_c__uint8__Sequence__fini(&ros_message->sensor_id_list);
    }
    if (!rosidl_runtime_c__uint8__Sequence__init(&ros_message->sensor_id_list, size)) {
      fprintf(stderr, "failed to create array for field 'sensor_id_list'");
      return false;
    }
    auto array_ptr = ros_message->sensor_id_list.data;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: time_of_detection
  {
    cdr_deserialize_builtin_interfaces__msg__Time(cdr, &ros_message->time_of_detection);
  }

  // Field name: time_of_measurement
  {
    cdr >> ros_message->time_of_measurement;
  }

  // Field name: object_age
  {
    cdr >> ros_message->object_age;
  }

  // Field name: object_confidence
  {
    cdr >> ros_message->object_confidence;
  }

  // Field name: x_distance
  {
    cdr_deserialize_ros_etsi_its_msgs__msg__ObjectDistanceWithConfidence(cdr, &ros_message->x_distance);
  }

  // Field name: y_distance
  {
    cdr_deserialize_ros_etsi_its_msgs__msg__ObjectDistanceWithConfidence(cdr, &ros_message->y_distance);
  }

  // Field name: z_distance
  {
    cdr_deserialize_ros_etsi_its_msgs__msg__ObjectDistanceWithConfidence(cdr, &ros_message->z_distance);
  }

  // Field name: x_speed
  {
    cdr_deserialize_ros_etsi_its_msgs__msg__SpeedExtended(cdr, &ros_message->x_speed);
  }

  // Field name: y_speed
  {
    cdr_deserialize_ros_etsi_its_msgs__msg__SpeedExtended(cdr, &ros_message->y_speed);
  }

  // Field name: z_speed
  {
    cdr_deserialize_ros_etsi_its_msgs__msg__SpeedExtended(cdr, &ros_message->z_speed);
  }

  // Field name: x_acceleration
  {
    cdr_deserialize_ros_etsi_its_msgs__msg__LongitudinalAcceleration(cdr, &ros_message->x_acceleration);
  }

  // Field name: y_acceleration
  {
    cdr_deserialize_ros_etsi_its_msgs__msg__LateralAcceleration(cdr, &ros_message->y_acceleration);
  }

  // Field name: has_planar_object_dimension1
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->has_planar_object_dimension1 = tmp ? true : false;
  }

  // Field name: planar_object_dimension1
  {
    cdr_deserialize_ros_etsi_its_msgs__msg__ObjectDimension(cdr, &ros_message->planar_object_dimension1);
  }

  // Field name: has_planar_object_dimension2
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->has_planar_object_dimension2 = tmp ? true : false;
  }

  // Field name: planar_object_dimension2
  {
    cdr_deserialize_ros_etsi_its_msgs__msg__ObjectDimension(cdr, &ros_message->planar_object_dimension2);
  }

  // Field name: has_vertical_object_dimension
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->has_vertical_object_dimension = tmp ? true : false;
  }

  // Field name: vertical_object_dimension
  {
    cdr_deserialize_ros_etsi_its_msgs__msg__ObjectDimension(cdr, &ros_message->vertical_object_dimension);
  }

  // Field name: object_ref_point
  {
    cdr_deserialize_ros_etsi_its_msgs__msg__ObjectRefPoint(cdr, &ros_message->object_ref_point);
  }

  // Field name: dynamic_status
  {
    cdr_deserialize_ros_etsi_its_msgs__msg__DynamicStatus(cdr, &ros_message->dynamic_status);
  }

  // Field name: classification
  {
    cdr_deserialize_ros_etsi_its_msgs__msg__StationType(cdr, &ros_message->classification);
  }

  // Field name: matched_position
  {
    cdr_deserialize_ros_etsi_its_msgs__msg__MatchedPosition(cdr, &ros_message->matched_position);
  }

  // Field name: object_angle
  {
    cdr >> ros_message->object_angle;
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ros_etsi_its_msgs
size_t get_serialized_size_ros_etsi_its_msgs__msg__PerceivedObject(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _PerceivedObject__ros_msg_type * ros_message = static_cast<const _PerceivedObject__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: object_id
  {
    size_t item_size = sizeof(ros_message->object_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: has_sensor_id_list
  {
    size_t item_size = sizeof(ros_message->has_sensor_id_list);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: sensor_id_list
  {
    size_t array_size = ros_message->sensor_id_list.size;
    auto array_ptr = ros_message->sensor_id_list.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: time_of_detection
  current_alignment += get_serialized_size_builtin_interfaces__msg__Time(
    &(ros_message->time_of_detection), current_alignment);

  // Field name: time_of_measurement
  {
    size_t item_size = sizeof(ros_message->time_of_measurement);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: object_age
  {
    size_t item_size = sizeof(ros_message->object_age);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: object_confidence
  {
    size_t item_size = sizeof(ros_message->object_confidence);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: x_distance
  current_alignment += get_serialized_size_ros_etsi_its_msgs__msg__ObjectDistanceWithConfidence(
    &(ros_message->x_distance), current_alignment);

  // Field name: y_distance
  current_alignment += get_serialized_size_ros_etsi_its_msgs__msg__ObjectDistanceWithConfidence(
    &(ros_message->y_distance), current_alignment);

  // Field name: z_distance
  current_alignment += get_serialized_size_ros_etsi_its_msgs__msg__ObjectDistanceWithConfidence(
    &(ros_message->z_distance), current_alignment);

  // Field name: x_speed
  current_alignment += get_serialized_size_ros_etsi_its_msgs__msg__SpeedExtended(
    &(ros_message->x_speed), current_alignment);

  // Field name: y_speed
  current_alignment += get_serialized_size_ros_etsi_its_msgs__msg__SpeedExtended(
    &(ros_message->y_speed), current_alignment);

  // Field name: z_speed
  current_alignment += get_serialized_size_ros_etsi_its_msgs__msg__SpeedExtended(
    &(ros_message->z_speed), current_alignment);

  // Field name: x_acceleration
  current_alignment += get_serialized_size_ros_etsi_its_msgs__msg__LongitudinalAcceleration(
    &(ros_message->x_acceleration), current_alignment);

  // Field name: y_acceleration
  current_alignment += get_serialized_size_ros_etsi_its_msgs__msg__LateralAcceleration(
    &(ros_message->y_acceleration), current_alignment);

  // Field name: has_planar_object_dimension1
  {
    size_t item_size = sizeof(ros_message->has_planar_object_dimension1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: planar_object_dimension1
  current_alignment += get_serialized_size_ros_etsi_its_msgs__msg__ObjectDimension(
    &(ros_message->planar_object_dimension1), current_alignment);

  // Field name: has_planar_object_dimension2
  {
    size_t item_size = sizeof(ros_message->has_planar_object_dimension2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: planar_object_dimension2
  current_alignment += get_serialized_size_ros_etsi_its_msgs__msg__ObjectDimension(
    &(ros_message->planar_object_dimension2), current_alignment);

  // Field name: has_vertical_object_dimension
  {
    size_t item_size = sizeof(ros_message->has_vertical_object_dimension);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: vertical_object_dimension
  current_alignment += get_serialized_size_ros_etsi_its_msgs__msg__ObjectDimension(
    &(ros_message->vertical_object_dimension), current_alignment);

  // Field name: object_ref_point
  current_alignment += get_serialized_size_ros_etsi_its_msgs__msg__ObjectRefPoint(
    &(ros_message->object_ref_point), current_alignment);

  // Field name: dynamic_status
  current_alignment += get_serialized_size_ros_etsi_its_msgs__msg__DynamicStatus(
    &(ros_message->dynamic_status), current_alignment);

  // Field name: classification
  current_alignment += get_serialized_size_ros_etsi_its_msgs__msg__StationType(
    &(ros_message->classification), current_alignment);

  // Field name: matched_position
  current_alignment += get_serialized_size_ros_etsi_its_msgs__msg__MatchedPosition(
    &(ros_message->matched_position), current_alignment);

  // Field name: object_angle
  {
    size_t item_size = sizeof(ros_message->object_angle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ros_etsi_its_msgs
size_t max_serialized_size_ros_etsi_its_msgs__msg__PerceivedObject(
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

  // Field name: object_id
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: has_sensor_id_list
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: sensor_id_list
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: time_of_detection
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_builtin_interfaces__msg__Time(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: time_of_measurement
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: object_age
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: object_confidence
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: x_distance
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_ros_etsi_its_msgs__msg__ObjectDistanceWithConfidence(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: y_distance
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_ros_etsi_its_msgs__msg__ObjectDistanceWithConfidence(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: z_distance
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_ros_etsi_its_msgs__msg__ObjectDistanceWithConfidence(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: x_speed
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_ros_etsi_its_msgs__msg__SpeedExtended(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: y_speed
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_ros_etsi_its_msgs__msg__SpeedExtended(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: z_speed
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_ros_etsi_its_msgs__msg__SpeedExtended(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: x_acceleration
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

  // Field name: y_acceleration
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_ros_etsi_its_msgs__msg__LateralAcceleration(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: has_planar_object_dimension1
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: planar_object_dimension1
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_ros_etsi_its_msgs__msg__ObjectDimension(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: has_planar_object_dimension2
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: planar_object_dimension2
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_ros_etsi_its_msgs__msg__ObjectDimension(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: has_vertical_object_dimension
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: vertical_object_dimension
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_ros_etsi_its_msgs__msg__ObjectDimension(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: object_ref_point
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_ros_etsi_its_msgs__msg__ObjectRefPoint(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: dynamic_status
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_ros_etsi_its_msgs__msg__DynamicStatus(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: classification
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_ros_etsi_its_msgs__msg__StationType(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: matched_position
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_ros_etsi_its_msgs__msg__MatchedPosition(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: object_angle
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = ros_etsi_its_msgs__msg__PerceivedObject;
    is_plain =
      (
      offsetof(DataType, object_angle) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ros_etsi_its_msgs
bool cdr_serialize_key_ros_etsi_its_msgs__msg__PerceivedObject(
  const ros_etsi_its_msgs__msg__PerceivedObject * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: object_id
  {
    cdr << ros_message->object_id;
  }

  // Field name: has_sensor_id_list
  {
    cdr << (ros_message->has_sensor_id_list ? true : false);
  }

  // Field name: sensor_id_list
  {
    size_t size = ros_message->sensor_id_list.size;
    auto array_ptr = ros_message->sensor_id_list.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: time_of_detection
  {
    cdr_serialize_key_builtin_interfaces__msg__Time(
      &ros_message->time_of_detection, cdr);
  }

  // Field name: time_of_measurement
  {
    cdr << ros_message->time_of_measurement;
  }

  // Field name: object_age
  {
    cdr << ros_message->object_age;
  }

  // Field name: object_confidence
  {
    cdr << ros_message->object_confidence;
  }

  // Field name: x_distance
  {
    cdr_serialize_key_ros_etsi_its_msgs__msg__ObjectDistanceWithConfidence(
      &ros_message->x_distance, cdr);
  }

  // Field name: y_distance
  {
    cdr_serialize_key_ros_etsi_its_msgs__msg__ObjectDistanceWithConfidence(
      &ros_message->y_distance, cdr);
  }

  // Field name: z_distance
  {
    cdr_serialize_key_ros_etsi_its_msgs__msg__ObjectDistanceWithConfidence(
      &ros_message->z_distance, cdr);
  }

  // Field name: x_speed
  {
    cdr_serialize_key_ros_etsi_its_msgs__msg__SpeedExtended(
      &ros_message->x_speed, cdr);
  }

  // Field name: y_speed
  {
    cdr_serialize_key_ros_etsi_its_msgs__msg__SpeedExtended(
      &ros_message->y_speed, cdr);
  }

  // Field name: z_speed
  {
    cdr_serialize_key_ros_etsi_its_msgs__msg__SpeedExtended(
      &ros_message->z_speed, cdr);
  }

  // Field name: x_acceleration
  {
    cdr_serialize_key_ros_etsi_its_msgs__msg__LongitudinalAcceleration(
      &ros_message->x_acceleration, cdr);
  }

  // Field name: y_acceleration
  {
    cdr_serialize_key_ros_etsi_its_msgs__msg__LateralAcceleration(
      &ros_message->y_acceleration, cdr);
  }

  // Field name: has_planar_object_dimension1
  {
    cdr << (ros_message->has_planar_object_dimension1 ? true : false);
  }

  // Field name: planar_object_dimension1
  {
    cdr_serialize_key_ros_etsi_its_msgs__msg__ObjectDimension(
      &ros_message->planar_object_dimension1, cdr);
  }

  // Field name: has_planar_object_dimension2
  {
    cdr << (ros_message->has_planar_object_dimension2 ? true : false);
  }

  // Field name: planar_object_dimension2
  {
    cdr_serialize_key_ros_etsi_its_msgs__msg__ObjectDimension(
      &ros_message->planar_object_dimension2, cdr);
  }

  // Field name: has_vertical_object_dimension
  {
    cdr << (ros_message->has_vertical_object_dimension ? true : false);
  }

  // Field name: vertical_object_dimension
  {
    cdr_serialize_key_ros_etsi_its_msgs__msg__ObjectDimension(
      &ros_message->vertical_object_dimension, cdr);
  }

  // Field name: object_ref_point
  {
    cdr_serialize_key_ros_etsi_its_msgs__msg__ObjectRefPoint(
      &ros_message->object_ref_point, cdr);
  }

  // Field name: dynamic_status
  {
    cdr_serialize_key_ros_etsi_its_msgs__msg__DynamicStatus(
      &ros_message->dynamic_status, cdr);
  }

  // Field name: classification
  {
    cdr_serialize_key_ros_etsi_its_msgs__msg__StationType(
      &ros_message->classification, cdr);
  }

  // Field name: matched_position
  {
    cdr_serialize_key_ros_etsi_its_msgs__msg__MatchedPosition(
      &ros_message->matched_position, cdr);
  }

  // Field name: object_angle
  {
    cdr << ros_message->object_angle;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ros_etsi_its_msgs
size_t get_serialized_size_key_ros_etsi_its_msgs__msg__PerceivedObject(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _PerceivedObject__ros_msg_type * ros_message = static_cast<const _PerceivedObject__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: object_id
  {
    size_t item_size = sizeof(ros_message->object_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: has_sensor_id_list
  {
    size_t item_size = sizeof(ros_message->has_sensor_id_list);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: sensor_id_list
  {
    size_t array_size = ros_message->sensor_id_list.size;
    auto array_ptr = ros_message->sensor_id_list.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: time_of_detection
  current_alignment += get_serialized_size_key_builtin_interfaces__msg__Time(
    &(ros_message->time_of_detection), current_alignment);

  // Field name: time_of_measurement
  {
    size_t item_size = sizeof(ros_message->time_of_measurement);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: object_age
  {
    size_t item_size = sizeof(ros_message->object_age);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: object_confidence
  {
    size_t item_size = sizeof(ros_message->object_confidence);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: x_distance
  current_alignment += get_serialized_size_key_ros_etsi_its_msgs__msg__ObjectDistanceWithConfidence(
    &(ros_message->x_distance), current_alignment);

  // Field name: y_distance
  current_alignment += get_serialized_size_key_ros_etsi_its_msgs__msg__ObjectDistanceWithConfidence(
    &(ros_message->y_distance), current_alignment);

  // Field name: z_distance
  current_alignment += get_serialized_size_key_ros_etsi_its_msgs__msg__ObjectDistanceWithConfidence(
    &(ros_message->z_distance), current_alignment);

  // Field name: x_speed
  current_alignment += get_serialized_size_key_ros_etsi_its_msgs__msg__SpeedExtended(
    &(ros_message->x_speed), current_alignment);

  // Field name: y_speed
  current_alignment += get_serialized_size_key_ros_etsi_its_msgs__msg__SpeedExtended(
    &(ros_message->y_speed), current_alignment);

  // Field name: z_speed
  current_alignment += get_serialized_size_key_ros_etsi_its_msgs__msg__SpeedExtended(
    &(ros_message->z_speed), current_alignment);

  // Field name: x_acceleration
  current_alignment += get_serialized_size_key_ros_etsi_its_msgs__msg__LongitudinalAcceleration(
    &(ros_message->x_acceleration), current_alignment);

  // Field name: y_acceleration
  current_alignment += get_serialized_size_key_ros_etsi_its_msgs__msg__LateralAcceleration(
    &(ros_message->y_acceleration), current_alignment);

  // Field name: has_planar_object_dimension1
  {
    size_t item_size = sizeof(ros_message->has_planar_object_dimension1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: planar_object_dimension1
  current_alignment += get_serialized_size_key_ros_etsi_its_msgs__msg__ObjectDimension(
    &(ros_message->planar_object_dimension1), current_alignment);

  // Field name: has_planar_object_dimension2
  {
    size_t item_size = sizeof(ros_message->has_planar_object_dimension2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: planar_object_dimension2
  current_alignment += get_serialized_size_key_ros_etsi_its_msgs__msg__ObjectDimension(
    &(ros_message->planar_object_dimension2), current_alignment);

  // Field name: has_vertical_object_dimension
  {
    size_t item_size = sizeof(ros_message->has_vertical_object_dimension);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: vertical_object_dimension
  current_alignment += get_serialized_size_key_ros_etsi_its_msgs__msg__ObjectDimension(
    &(ros_message->vertical_object_dimension), current_alignment);

  // Field name: object_ref_point
  current_alignment += get_serialized_size_key_ros_etsi_its_msgs__msg__ObjectRefPoint(
    &(ros_message->object_ref_point), current_alignment);

  // Field name: dynamic_status
  current_alignment += get_serialized_size_key_ros_etsi_its_msgs__msg__DynamicStatus(
    &(ros_message->dynamic_status), current_alignment);

  // Field name: classification
  current_alignment += get_serialized_size_key_ros_etsi_its_msgs__msg__StationType(
    &(ros_message->classification), current_alignment);

  // Field name: matched_position
  current_alignment += get_serialized_size_key_ros_etsi_its_msgs__msg__MatchedPosition(
    &(ros_message->matched_position), current_alignment);

  // Field name: object_angle
  {
    size_t item_size = sizeof(ros_message->object_angle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ros_etsi_its_msgs
size_t max_serialized_size_key_ros_etsi_its_msgs__msg__PerceivedObject(
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
  // Field name: object_id
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: has_sensor_id_list
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: sensor_id_list
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: time_of_detection
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_builtin_interfaces__msg__Time(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: time_of_measurement
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: object_age
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: object_confidence
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: x_distance
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_ros_etsi_its_msgs__msg__ObjectDistanceWithConfidence(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: y_distance
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_ros_etsi_its_msgs__msg__ObjectDistanceWithConfidence(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: z_distance
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_ros_etsi_its_msgs__msg__ObjectDistanceWithConfidence(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: x_speed
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_ros_etsi_its_msgs__msg__SpeedExtended(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: y_speed
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_ros_etsi_its_msgs__msg__SpeedExtended(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: z_speed
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_ros_etsi_its_msgs__msg__SpeedExtended(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: x_acceleration
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

  // Field name: y_acceleration
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_ros_etsi_its_msgs__msg__LateralAcceleration(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: has_planar_object_dimension1
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: planar_object_dimension1
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_ros_etsi_its_msgs__msg__ObjectDimension(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: has_planar_object_dimension2
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: planar_object_dimension2
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_ros_etsi_its_msgs__msg__ObjectDimension(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: has_vertical_object_dimension
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: vertical_object_dimension
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_ros_etsi_its_msgs__msg__ObjectDimension(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: object_ref_point
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_ros_etsi_its_msgs__msg__ObjectRefPoint(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: dynamic_status
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_ros_etsi_its_msgs__msg__DynamicStatus(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: classification
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_ros_etsi_its_msgs__msg__StationType(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: matched_position
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_ros_etsi_its_msgs__msg__MatchedPosition(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: object_angle
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = ros_etsi_its_msgs__msg__PerceivedObject;
    is_plain =
      (
      offsetof(DataType, object_angle) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _PerceivedObject__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const ros_etsi_its_msgs__msg__PerceivedObject * ros_message = static_cast<const ros_etsi_its_msgs__msg__PerceivedObject *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_ros_etsi_its_msgs__msg__PerceivedObject(ros_message, cdr);
}

static bool _PerceivedObject__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  ros_etsi_its_msgs__msg__PerceivedObject * ros_message = static_cast<ros_etsi_its_msgs__msg__PerceivedObject *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_ros_etsi_its_msgs__msg__PerceivedObject(cdr, ros_message);
}

static uint32_t _PerceivedObject__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_ros_etsi_its_msgs__msg__PerceivedObject(
      untyped_ros_message, 0));
}

static size_t _PerceivedObject__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_ros_etsi_its_msgs__msg__PerceivedObject(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_PerceivedObject = {
  "ros_etsi_its_msgs::msg",
  "PerceivedObject",
  _PerceivedObject__cdr_serialize,
  _PerceivedObject__cdr_deserialize,
  _PerceivedObject__get_serialized_size,
  _PerceivedObject__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _PerceivedObject__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_PerceivedObject,
  get_message_typesupport_handle_function,
  &ros_etsi_its_msgs__msg__PerceivedObject__get_type_hash,
  &ros_etsi_its_msgs__msg__PerceivedObject__get_type_description,
  &ros_etsi_its_msgs__msg__PerceivedObject__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ros_etsi_its_msgs, msg, PerceivedObject)() {
  return &_PerceivedObject__type_support;
}

#if defined(__cplusplus)
}
#endif

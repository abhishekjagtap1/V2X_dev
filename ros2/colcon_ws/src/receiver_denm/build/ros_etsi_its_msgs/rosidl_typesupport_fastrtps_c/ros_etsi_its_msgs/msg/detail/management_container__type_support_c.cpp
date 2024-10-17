// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from ros_etsi_its_msgs:msg/ManagementContainer.idl
// generated code does not contain a copyright notice
#include "ros_etsi_its_msgs/msg/detail/management_container__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "ros_etsi_its_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "ros_etsi_its_msgs/msg/detail/management_container__struct.h"
#include "ros_etsi_its_msgs/msg/detail/management_container__functions.h"
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

#include "ros_etsi_its_msgs/msg/detail/action_id__functions.h"  // action_id
#include "ros_etsi_its_msgs/msg/detail/reference_position__functions.h"  // event_position
#include "ros_etsi_its_msgs/msg/detail/relevance_distance__functions.h"  // relevance_distance
#include "ros_etsi_its_msgs/msg/detail/relevance_traffic_direction__functions.h"  // relevance_traffic_direction
#include "ros_etsi_its_msgs/msg/detail/station_type__functions.h"  // station_type

// forward declare type support functions

bool cdr_serialize_ros_etsi_its_msgs__msg__ActionID(
  const ros_etsi_its_msgs__msg__ActionID * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_ros_etsi_its_msgs__msg__ActionID(
  eprosima::fastcdr::Cdr & cdr,
  ros_etsi_its_msgs__msg__ActionID * ros_message);

size_t get_serialized_size_ros_etsi_its_msgs__msg__ActionID(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_ros_etsi_its_msgs__msg__ActionID(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_ros_etsi_its_msgs__msg__ActionID(
  const ros_etsi_its_msgs__msg__ActionID * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_ros_etsi_its_msgs__msg__ActionID(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_ros_etsi_its_msgs__msg__ActionID(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ros_etsi_its_msgs, msg, ActionID)();

bool cdr_serialize_ros_etsi_its_msgs__msg__ReferencePosition(
  const ros_etsi_its_msgs__msg__ReferencePosition * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_ros_etsi_its_msgs__msg__ReferencePosition(
  eprosima::fastcdr::Cdr & cdr,
  ros_etsi_its_msgs__msg__ReferencePosition * ros_message);

size_t get_serialized_size_ros_etsi_its_msgs__msg__ReferencePosition(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_ros_etsi_its_msgs__msg__ReferencePosition(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_ros_etsi_its_msgs__msg__ReferencePosition(
  const ros_etsi_its_msgs__msg__ReferencePosition * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_ros_etsi_its_msgs__msg__ReferencePosition(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_ros_etsi_its_msgs__msg__ReferencePosition(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ros_etsi_its_msgs, msg, ReferencePosition)();

bool cdr_serialize_ros_etsi_its_msgs__msg__RelevanceDistance(
  const ros_etsi_its_msgs__msg__RelevanceDistance * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_ros_etsi_its_msgs__msg__RelevanceDistance(
  eprosima::fastcdr::Cdr & cdr,
  ros_etsi_its_msgs__msg__RelevanceDistance * ros_message);

size_t get_serialized_size_ros_etsi_its_msgs__msg__RelevanceDistance(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_ros_etsi_its_msgs__msg__RelevanceDistance(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_ros_etsi_its_msgs__msg__RelevanceDistance(
  const ros_etsi_its_msgs__msg__RelevanceDistance * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_ros_etsi_its_msgs__msg__RelevanceDistance(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_ros_etsi_its_msgs__msg__RelevanceDistance(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ros_etsi_its_msgs, msg, RelevanceDistance)();

bool cdr_serialize_ros_etsi_its_msgs__msg__RelevanceTrafficDirection(
  const ros_etsi_its_msgs__msg__RelevanceTrafficDirection * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_ros_etsi_its_msgs__msg__RelevanceTrafficDirection(
  eprosima::fastcdr::Cdr & cdr,
  ros_etsi_its_msgs__msg__RelevanceTrafficDirection * ros_message);

size_t get_serialized_size_ros_etsi_its_msgs__msg__RelevanceTrafficDirection(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_ros_etsi_its_msgs__msg__RelevanceTrafficDirection(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_ros_etsi_its_msgs__msg__RelevanceTrafficDirection(
  const ros_etsi_its_msgs__msg__RelevanceTrafficDirection * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_ros_etsi_its_msgs__msg__RelevanceTrafficDirection(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_ros_etsi_its_msgs__msg__RelevanceTrafficDirection(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ros_etsi_its_msgs, msg, RelevanceTrafficDirection)();

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


using _ManagementContainer__ros_msg_type = ros_etsi_its_msgs__msg__ManagementContainer;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ros_etsi_its_msgs
bool cdr_serialize_ros_etsi_its_msgs__msg__ManagementContainer(
  const ros_etsi_its_msgs__msg__ManagementContainer * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: action_id
  {
    cdr_serialize_ros_etsi_its_msgs__msg__ActionID(
      &ros_message->action_id, cdr);
  }

  // Field name: detection_time
  {
    cdr << ros_message->detection_time;
  }

  // Field name: reference_time
  {
    cdr << ros_message->reference_time;
  }

  // Field name: termination
  {
    cdr << ros_message->termination;
  }

  // Field name: event_position
  {
    cdr_serialize_ros_etsi_its_msgs__msg__ReferencePosition(
      &ros_message->event_position, cdr);
  }

  // Field name: relevance_distance
  {
    cdr_serialize_ros_etsi_its_msgs__msg__RelevanceDistance(
      &ros_message->relevance_distance, cdr);
  }

  // Field name: relevance_traffic_direction
  {
    cdr_serialize_ros_etsi_its_msgs__msg__RelevanceTrafficDirection(
      &ros_message->relevance_traffic_direction, cdr);
  }

  // Field name: validity_duration
  {
    cdr << ros_message->validity_duration;
  }

  // Field name: transmission_interval
  {
    cdr << ros_message->transmission_interval;
  }

  // Field name: station_type
  {
    cdr_serialize_ros_etsi_its_msgs__msg__StationType(
      &ros_message->station_type, cdr);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ros_etsi_its_msgs
bool cdr_deserialize_ros_etsi_its_msgs__msg__ManagementContainer(
  eprosima::fastcdr::Cdr & cdr,
  ros_etsi_its_msgs__msg__ManagementContainer * ros_message)
{
  // Field name: action_id
  {
    cdr_deserialize_ros_etsi_its_msgs__msg__ActionID(cdr, &ros_message->action_id);
  }

  // Field name: detection_time
  {
    cdr >> ros_message->detection_time;
  }

  // Field name: reference_time
  {
    cdr >> ros_message->reference_time;
  }

  // Field name: termination
  {
    cdr >> ros_message->termination;
  }

  // Field name: event_position
  {
    cdr_deserialize_ros_etsi_its_msgs__msg__ReferencePosition(cdr, &ros_message->event_position);
  }

  // Field name: relevance_distance
  {
    cdr_deserialize_ros_etsi_its_msgs__msg__RelevanceDistance(cdr, &ros_message->relevance_distance);
  }

  // Field name: relevance_traffic_direction
  {
    cdr_deserialize_ros_etsi_its_msgs__msg__RelevanceTrafficDirection(cdr, &ros_message->relevance_traffic_direction);
  }

  // Field name: validity_duration
  {
    cdr >> ros_message->validity_duration;
  }

  // Field name: transmission_interval
  {
    cdr >> ros_message->transmission_interval;
  }

  // Field name: station_type
  {
    cdr_deserialize_ros_etsi_its_msgs__msg__StationType(cdr, &ros_message->station_type);
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ros_etsi_its_msgs
size_t get_serialized_size_ros_etsi_its_msgs__msg__ManagementContainer(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ManagementContainer__ros_msg_type * ros_message = static_cast<const _ManagementContainer__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: action_id
  current_alignment += get_serialized_size_ros_etsi_its_msgs__msg__ActionID(
    &(ros_message->action_id), current_alignment);

  // Field name: detection_time
  {
    size_t item_size = sizeof(ros_message->detection_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: reference_time
  {
    size_t item_size = sizeof(ros_message->reference_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: termination
  {
    size_t item_size = sizeof(ros_message->termination);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: event_position
  current_alignment += get_serialized_size_ros_etsi_its_msgs__msg__ReferencePosition(
    &(ros_message->event_position), current_alignment);

  // Field name: relevance_distance
  current_alignment += get_serialized_size_ros_etsi_its_msgs__msg__RelevanceDistance(
    &(ros_message->relevance_distance), current_alignment);

  // Field name: relevance_traffic_direction
  current_alignment += get_serialized_size_ros_etsi_its_msgs__msg__RelevanceTrafficDirection(
    &(ros_message->relevance_traffic_direction), current_alignment);

  // Field name: validity_duration
  {
    size_t item_size = sizeof(ros_message->validity_duration);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: transmission_interval
  {
    size_t item_size = sizeof(ros_message->transmission_interval);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: station_type
  current_alignment += get_serialized_size_ros_etsi_its_msgs__msg__StationType(
    &(ros_message->station_type), current_alignment);

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ros_etsi_its_msgs
size_t max_serialized_size_ros_etsi_its_msgs__msg__ManagementContainer(
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

  // Field name: action_id
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_ros_etsi_its_msgs__msg__ActionID(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: detection_time
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: reference_time
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: termination
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: event_position
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_ros_etsi_its_msgs__msg__ReferencePosition(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: relevance_distance
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_ros_etsi_its_msgs__msg__RelevanceDistance(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: relevance_traffic_direction
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_ros_etsi_its_msgs__msg__RelevanceTrafficDirection(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: validity_duration
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: transmission_interval
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: station_type
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


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = ros_etsi_its_msgs__msg__ManagementContainer;
    is_plain =
      (
      offsetof(DataType, station_type) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ros_etsi_its_msgs
bool cdr_serialize_key_ros_etsi_its_msgs__msg__ManagementContainer(
  const ros_etsi_its_msgs__msg__ManagementContainer * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: action_id
  {
    cdr_serialize_key_ros_etsi_its_msgs__msg__ActionID(
      &ros_message->action_id, cdr);
  }

  // Field name: detection_time
  {
    cdr << ros_message->detection_time;
  }

  // Field name: reference_time
  {
    cdr << ros_message->reference_time;
  }

  // Field name: termination
  {
    cdr << ros_message->termination;
  }

  // Field name: event_position
  {
    cdr_serialize_key_ros_etsi_its_msgs__msg__ReferencePosition(
      &ros_message->event_position, cdr);
  }

  // Field name: relevance_distance
  {
    cdr_serialize_key_ros_etsi_its_msgs__msg__RelevanceDistance(
      &ros_message->relevance_distance, cdr);
  }

  // Field name: relevance_traffic_direction
  {
    cdr_serialize_key_ros_etsi_its_msgs__msg__RelevanceTrafficDirection(
      &ros_message->relevance_traffic_direction, cdr);
  }

  // Field name: validity_duration
  {
    cdr << ros_message->validity_duration;
  }

  // Field name: transmission_interval
  {
    cdr << ros_message->transmission_interval;
  }

  // Field name: station_type
  {
    cdr_serialize_key_ros_etsi_its_msgs__msg__StationType(
      &ros_message->station_type, cdr);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ros_etsi_its_msgs
size_t get_serialized_size_key_ros_etsi_its_msgs__msg__ManagementContainer(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ManagementContainer__ros_msg_type * ros_message = static_cast<const _ManagementContainer__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: action_id
  current_alignment += get_serialized_size_key_ros_etsi_its_msgs__msg__ActionID(
    &(ros_message->action_id), current_alignment);

  // Field name: detection_time
  {
    size_t item_size = sizeof(ros_message->detection_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: reference_time
  {
    size_t item_size = sizeof(ros_message->reference_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: termination
  {
    size_t item_size = sizeof(ros_message->termination);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: event_position
  current_alignment += get_serialized_size_key_ros_etsi_its_msgs__msg__ReferencePosition(
    &(ros_message->event_position), current_alignment);

  // Field name: relevance_distance
  current_alignment += get_serialized_size_key_ros_etsi_its_msgs__msg__RelevanceDistance(
    &(ros_message->relevance_distance), current_alignment);

  // Field name: relevance_traffic_direction
  current_alignment += get_serialized_size_key_ros_etsi_its_msgs__msg__RelevanceTrafficDirection(
    &(ros_message->relevance_traffic_direction), current_alignment);

  // Field name: validity_duration
  {
    size_t item_size = sizeof(ros_message->validity_duration);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: transmission_interval
  {
    size_t item_size = sizeof(ros_message->transmission_interval);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: station_type
  current_alignment += get_serialized_size_key_ros_etsi_its_msgs__msg__StationType(
    &(ros_message->station_type), current_alignment);

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ros_etsi_its_msgs
size_t max_serialized_size_key_ros_etsi_its_msgs__msg__ManagementContainer(
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
  // Field name: action_id
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_ros_etsi_its_msgs__msg__ActionID(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: detection_time
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: reference_time
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: termination
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: event_position
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_ros_etsi_its_msgs__msg__ReferencePosition(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: relevance_distance
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_ros_etsi_its_msgs__msg__RelevanceDistance(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: relevance_traffic_direction
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_ros_etsi_its_msgs__msg__RelevanceTrafficDirection(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: validity_duration
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: transmission_interval
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: station_type
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

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = ros_etsi_its_msgs__msg__ManagementContainer;
    is_plain =
      (
      offsetof(DataType, station_type) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _ManagementContainer__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const ros_etsi_its_msgs__msg__ManagementContainer * ros_message = static_cast<const ros_etsi_its_msgs__msg__ManagementContainer *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_ros_etsi_its_msgs__msg__ManagementContainer(ros_message, cdr);
}

static bool _ManagementContainer__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  ros_etsi_its_msgs__msg__ManagementContainer * ros_message = static_cast<ros_etsi_its_msgs__msg__ManagementContainer *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_ros_etsi_its_msgs__msg__ManagementContainer(cdr, ros_message);
}

static uint32_t _ManagementContainer__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_ros_etsi_its_msgs__msg__ManagementContainer(
      untyped_ros_message, 0));
}

static size_t _ManagementContainer__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_ros_etsi_its_msgs__msg__ManagementContainer(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_ManagementContainer = {
  "ros_etsi_its_msgs::msg",
  "ManagementContainer",
  _ManagementContainer__cdr_serialize,
  _ManagementContainer__cdr_deserialize,
  _ManagementContainer__get_serialized_size,
  _ManagementContainer__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _ManagementContainer__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ManagementContainer,
  get_message_typesupport_handle_function,
  &ros_etsi_its_msgs__msg__ManagementContainer__get_type_hash,
  &ros_etsi_its_msgs__msg__ManagementContainer__get_type_description,
  &ros_etsi_its_msgs__msg__ManagementContainer__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ros_etsi_its_msgs, msg, ManagementContainer)() {
  return &_ManagementContainer__type_support;
}

#if defined(__cplusplus)
}
#endif

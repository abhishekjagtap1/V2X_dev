// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from ros_etsi_its_msgs:msg/CPM.idl
// generated code does not contain a copyright notice
#include "ros_etsi_its_msgs/msg/detail/cpm__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "ros_etsi_its_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "ros_etsi_its_msgs/msg/detail/cpm__struct.h"
#include "ros_etsi_its_msgs/msg/detail/cpm__functions.h"
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

#include "ros_etsi_its_msgs/msg/detail/its_pdu_header__functions.h"  // its_header
#include "ros_etsi_its_msgs/msg/detail/list_of_perceived_objects__functions.h"  // list_of_perceived_objects
#include "ros_etsi_its_msgs/msg/detail/originating_vehicle_container__functions.h"  // originating_vehicle_container
#include "ros_etsi_its_msgs/msg/detail/reference_position__functions.h"  // reference_position
#include "ros_etsi_its_msgs/msg/detail/sensor_information_container__functions.h"  // sensor_information_container
#include "ros_etsi_its_msgs/msg/detail/station_type__functions.h"  // station_type
#include "std_msgs/msg/detail/header__functions.h"  // header

// forward declare type support functions

bool cdr_serialize_ros_etsi_its_msgs__msg__ItsPduHeader(
  const ros_etsi_its_msgs__msg__ItsPduHeader * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_ros_etsi_its_msgs__msg__ItsPduHeader(
  eprosima::fastcdr::Cdr & cdr,
  ros_etsi_its_msgs__msg__ItsPduHeader * ros_message);

size_t get_serialized_size_ros_etsi_its_msgs__msg__ItsPduHeader(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_ros_etsi_its_msgs__msg__ItsPduHeader(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_ros_etsi_its_msgs__msg__ItsPduHeader(
  const ros_etsi_its_msgs__msg__ItsPduHeader * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_ros_etsi_its_msgs__msg__ItsPduHeader(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_ros_etsi_its_msgs__msg__ItsPduHeader(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ros_etsi_its_msgs, msg, ItsPduHeader)();

bool cdr_serialize_ros_etsi_its_msgs__msg__ListOfPerceivedObjects(
  const ros_etsi_its_msgs__msg__ListOfPerceivedObjects * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_ros_etsi_its_msgs__msg__ListOfPerceivedObjects(
  eprosima::fastcdr::Cdr & cdr,
  ros_etsi_its_msgs__msg__ListOfPerceivedObjects * ros_message);

size_t get_serialized_size_ros_etsi_its_msgs__msg__ListOfPerceivedObjects(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_ros_etsi_its_msgs__msg__ListOfPerceivedObjects(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_ros_etsi_its_msgs__msg__ListOfPerceivedObjects(
  const ros_etsi_its_msgs__msg__ListOfPerceivedObjects * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_ros_etsi_its_msgs__msg__ListOfPerceivedObjects(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_ros_etsi_its_msgs__msg__ListOfPerceivedObjects(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ros_etsi_its_msgs, msg, ListOfPerceivedObjects)();

bool cdr_serialize_ros_etsi_its_msgs__msg__OriginatingVehicleContainer(
  const ros_etsi_its_msgs__msg__OriginatingVehicleContainer * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_ros_etsi_its_msgs__msg__OriginatingVehicleContainer(
  eprosima::fastcdr::Cdr & cdr,
  ros_etsi_its_msgs__msg__OriginatingVehicleContainer * ros_message);

size_t get_serialized_size_ros_etsi_its_msgs__msg__OriginatingVehicleContainer(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_ros_etsi_its_msgs__msg__OriginatingVehicleContainer(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_ros_etsi_its_msgs__msg__OriginatingVehicleContainer(
  const ros_etsi_its_msgs__msg__OriginatingVehicleContainer * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_ros_etsi_its_msgs__msg__OriginatingVehicleContainer(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_ros_etsi_its_msgs__msg__OriginatingVehicleContainer(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ros_etsi_its_msgs, msg, OriginatingVehicleContainer)();

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

bool cdr_serialize_ros_etsi_its_msgs__msg__SensorInformationContainer(
  const ros_etsi_its_msgs__msg__SensorInformationContainer * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_ros_etsi_its_msgs__msg__SensorInformationContainer(
  eprosima::fastcdr::Cdr & cdr,
  ros_etsi_its_msgs__msg__SensorInformationContainer * ros_message);

size_t get_serialized_size_ros_etsi_its_msgs__msg__SensorInformationContainer(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_ros_etsi_its_msgs__msg__SensorInformationContainer(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_ros_etsi_its_msgs__msg__SensorInformationContainer(
  const ros_etsi_its_msgs__msg__SensorInformationContainer * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_ros_etsi_its_msgs__msg__SensorInformationContainer(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_ros_etsi_its_msgs__msg__SensorInformationContainer(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ros_etsi_its_msgs, msg, SensorInformationContainer)();

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

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_ros_etsi_its_msgs
bool cdr_serialize_std_msgs__msg__Header(
  const std_msgs__msg__Header * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_ros_etsi_its_msgs
bool cdr_deserialize_std_msgs__msg__Header(
  eprosima::fastcdr::Cdr & cdr,
  std_msgs__msg__Header * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_ros_etsi_its_msgs
size_t get_serialized_size_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_ros_etsi_its_msgs
size_t max_serialized_size_std_msgs__msg__Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_ros_etsi_its_msgs
bool cdr_serialize_key_std_msgs__msg__Header(
  const std_msgs__msg__Header * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_ros_etsi_its_msgs
size_t get_serialized_size_key_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_ros_etsi_its_msgs
size_t max_serialized_size_key_std_msgs__msg__Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_ros_etsi_its_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, Header)();


using _CPM__ros_msg_type = ros_etsi_its_msgs__msg__CPM;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ros_etsi_its_msgs
bool cdr_serialize_ros_etsi_its_msgs__msg__CPM(
  const ros_etsi_its_msgs__msg__CPM * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: header
  {
    cdr_serialize_std_msgs__msg__Header(
      &ros_message->header, cdr);
  }

  // Field name: its_header
  {
    cdr_serialize_ros_etsi_its_msgs__msg__ItsPduHeader(
      &ros_message->its_header, cdr);
  }

  // Field name: generation_delta_time
  {
    cdr << ros_message->generation_delta_time;
  }

  // Field name: station_type
  {
    cdr_serialize_ros_etsi_its_msgs__msg__StationType(
      &ros_message->station_type, cdr);
  }

  // Field name: reference_position
  {
    cdr_serialize_ros_etsi_its_msgs__msg__ReferencePosition(
      &ros_message->reference_position, cdr);
  }

  // Field name: originating_vehicle_container
  {
    cdr_serialize_ros_etsi_its_msgs__msg__OriginatingVehicleContainer(
      &ros_message->originating_vehicle_container, cdr);
  }

  // Field name: has_sensor_information_container
  {
    cdr << (ros_message->has_sensor_information_container ? true : false);
  }

  // Field name: sensor_information_container
  {
    cdr_serialize_ros_etsi_its_msgs__msg__SensorInformationContainer(
      &ros_message->sensor_information_container, cdr);
  }

  // Field name: has_list_of_perceived_object
  {
    cdr << (ros_message->has_list_of_perceived_object ? true : false);
  }

  // Field name: list_of_perceived_objects
  {
    cdr_serialize_ros_etsi_its_msgs__msg__ListOfPerceivedObjects(
      &ros_message->list_of_perceived_objects, cdr);
  }

  // Field name: number_of_perceived_objects
  {
    cdr << ros_message->number_of_perceived_objects;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ros_etsi_its_msgs
bool cdr_deserialize_ros_etsi_its_msgs__msg__CPM(
  eprosima::fastcdr::Cdr & cdr,
  ros_etsi_its_msgs__msg__CPM * ros_message)
{
  // Field name: header
  {
    cdr_deserialize_std_msgs__msg__Header(cdr, &ros_message->header);
  }

  // Field name: its_header
  {
    cdr_deserialize_ros_etsi_its_msgs__msg__ItsPduHeader(cdr, &ros_message->its_header);
  }

  // Field name: generation_delta_time
  {
    cdr >> ros_message->generation_delta_time;
  }

  // Field name: station_type
  {
    cdr_deserialize_ros_etsi_its_msgs__msg__StationType(cdr, &ros_message->station_type);
  }

  // Field name: reference_position
  {
    cdr_deserialize_ros_etsi_its_msgs__msg__ReferencePosition(cdr, &ros_message->reference_position);
  }

  // Field name: originating_vehicle_container
  {
    cdr_deserialize_ros_etsi_its_msgs__msg__OriginatingVehicleContainer(cdr, &ros_message->originating_vehicle_container);
  }

  // Field name: has_sensor_information_container
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->has_sensor_information_container = tmp ? true : false;
  }

  // Field name: sensor_information_container
  {
    cdr_deserialize_ros_etsi_its_msgs__msg__SensorInformationContainer(cdr, &ros_message->sensor_information_container);
  }

  // Field name: has_list_of_perceived_object
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->has_list_of_perceived_object = tmp ? true : false;
  }

  // Field name: list_of_perceived_objects
  {
    cdr_deserialize_ros_etsi_its_msgs__msg__ListOfPerceivedObjects(cdr, &ros_message->list_of_perceived_objects);
  }

  // Field name: number_of_perceived_objects
  {
    cdr >> ros_message->number_of_perceived_objects;
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ros_etsi_its_msgs
size_t get_serialized_size_ros_etsi_its_msgs__msg__CPM(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _CPM__ros_msg_type * ros_message = static_cast<const _CPM__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: header
  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);

  // Field name: its_header
  current_alignment += get_serialized_size_ros_etsi_its_msgs__msg__ItsPduHeader(
    &(ros_message->its_header), current_alignment);

  // Field name: generation_delta_time
  {
    size_t item_size = sizeof(ros_message->generation_delta_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: station_type
  current_alignment += get_serialized_size_ros_etsi_its_msgs__msg__StationType(
    &(ros_message->station_type), current_alignment);

  // Field name: reference_position
  current_alignment += get_serialized_size_ros_etsi_its_msgs__msg__ReferencePosition(
    &(ros_message->reference_position), current_alignment);

  // Field name: originating_vehicle_container
  current_alignment += get_serialized_size_ros_etsi_its_msgs__msg__OriginatingVehicleContainer(
    &(ros_message->originating_vehicle_container), current_alignment);

  // Field name: has_sensor_information_container
  {
    size_t item_size = sizeof(ros_message->has_sensor_information_container);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: sensor_information_container
  current_alignment += get_serialized_size_ros_etsi_its_msgs__msg__SensorInformationContainer(
    &(ros_message->sensor_information_container), current_alignment);

  // Field name: has_list_of_perceived_object
  {
    size_t item_size = sizeof(ros_message->has_list_of_perceived_object);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: list_of_perceived_objects
  current_alignment += get_serialized_size_ros_etsi_its_msgs__msg__ListOfPerceivedObjects(
    &(ros_message->list_of_perceived_objects), current_alignment);

  // Field name: number_of_perceived_objects
  {
    size_t item_size = sizeof(ros_message->number_of_perceived_objects);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ros_etsi_its_msgs
size_t max_serialized_size_ros_etsi_its_msgs__msg__CPM(
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

  // Field name: header
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_std_msgs__msg__Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: its_header
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_ros_etsi_its_msgs__msg__ItsPduHeader(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: generation_delta_time
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
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

  // Field name: reference_position
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

  // Field name: originating_vehicle_container
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_ros_etsi_its_msgs__msg__OriginatingVehicleContainer(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: has_sensor_information_container
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: sensor_information_container
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_ros_etsi_its_msgs__msg__SensorInformationContainer(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: has_list_of_perceived_object
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: list_of_perceived_objects
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_ros_etsi_its_msgs__msg__ListOfPerceivedObjects(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: number_of_perceived_objects
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
    using DataType = ros_etsi_its_msgs__msg__CPM;
    is_plain =
      (
      offsetof(DataType, number_of_perceived_objects) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ros_etsi_its_msgs
bool cdr_serialize_key_ros_etsi_its_msgs__msg__CPM(
  const ros_etsi_its_msgs__msg__CPM * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: header
  {
    cdr_serialize_key_std_msgs__msg__Header(
      &ros_message->header, cdr);
  }

  // Field name: its_header
  {
    cdr_serialize_key_ros_etsi_its_msgs__msg__ItsPduHeader(
      &ros_message->its_header, cdr);
  }

  // Field name: generation_delta_time
  {
    cdr << ros_message->generation_delta_time;
  }

  // Field name: station_type
  {
    cdr_serialize_key_ros_etsi_its_msgs__msg__StationType(
      &ros_message->station_type, cdr);
  }

  // Field name: reference_position
  {
    cdr_serialize_key_ros_etsi_its_msgs__msg__ReferencePosition(
      &ros_message->reference_position, cdr);
  }

  // Field name: originating_vehicle_container
  {
    cdr_serialize_key_ros_etsi_its_msgs__msg__OriginatingVehicleContainer(
      &ros_message->originating_vehicle_container, cdr);
  }

  // Field name: has_sensor_information_container
  {
    cdr << (ros_message->has_sensor_information_container ? true : false);
  }

  // Field name: sensor_information_container
  {
    cdr_serialize_key_ros_etsi_its_msgs__msg__SensorInformationContainer(
      &ros_message->sensor_information_container, cdr);
  }

  // Field name: has_list_of_perceived_object
  {
    cdr << (ros_message->has_list_of_perceived_object ? true : false);
  }

  // Field name: list_of_perceived_objects
  {
    cdr_serialize_key_ros_etsi_its_msgs__msg__ListOfPerceivedObjects(
      &ros_message->list_of_perceived_objects, cdr);
  }

  // Field name: number_of_perceived_objects
  {
    cdr << ros_message->number_of_perceived_objects;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ros_etsi_its_msgs
size_t get_serialized_size_key_ros_etsi_its_msgs__msg__CPM(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _CPM__ros_msg_type * ros_message = static_cast<const _CPM__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: header
  current_alignment += get_serialized_size_key_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);

  // Field name: its_header
  current_alignment += get_serialized_size_key_ros_etsi_its_msgs__msg__ItsPduHeader(
    &(ros_message->its_header), current_alignment);

  // Field name: generation_delta_time
  {
    size_t item_size = sizeof(ros_message->generation_delta_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: station_type
  current_alignment += get_serialized_size_key_ros_etsi_its_msgs__msg__StationType(
    &(ros_message->station_type), current_alignment);

  // Field name: reference_position
  current_alignment += get_serialized_size_key_ros_etsi_its_msgs__msg__ReferencePosition(
    &(ros_message->reference_position), current_alignment);

  // Field name: originating_vehicle_container
  current_alignment += get_serialized_size_key_ros_etsi_its_msgs__msg__OriginatingVehicleContainer(
    &(ros_message->originating_vehicle_container), current_alignment);

  // Field name: has_sensor_information_container
  {
    size_t item_size = sizeof(ros_message->has_sensor_information_container);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: sensor_information_container
  current_alignment += get_serialized_size_key_ros_etsi_its_msgs__msg__SensorInformationContainer(
    &(ros_message->sensor_information_container), current_alignment);

  // Field name: has_list_of_perceived_object
  {
    size_t item_size = sizeof(ros_message->has_list_of_perceived_object);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: list_of_perceived_objects
  current_alignment += get_serialized_size_key_ros_etsi_its_msgs__msg__ListOfPerceivedObjects(
    &(ros_message->list_of_perceived_objects), current_alignment);

  // Field name: number_of_perceived_objects
  {
    size_t item_size = sizeof(ros_message->number_of_perceived_objects);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ros_etsi_its_msgs
size_t max_serialized_size_key_ros_etsi_its_msgs__msg__CPM(
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
  // Field name: header
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_std_msgs__msg__Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: its_header
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_ros_etsi_its_msgs__msg__ItsPduHeader(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: generation_delta_time
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
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

  // Field name: reference_position
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

  // Field name: originating_vehicle_container
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_ros_etsi_its_msgs__msg__OriginatingVehicleContainer(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: has_sensor_information_container
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: sensor_information_container
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_ros_etsi_its_msgs__msg__SensorInformationContainer(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: has_list_of_perceived_object
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: list_of_perceived_objects
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_ros_etsi_its_msgs__msg__ListOfPerceivedObjects(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: number_of_perceived_objects
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
    using DataType = ros_etsi_its_msgs__msg__CPM;
    is_plain =
      (
      offsetof(DataType, number_of_perceived_objects) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _CPM__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const ros_etsi_its_msgs__msg__CPM * ros_message = static_cast<const ros_etsi_its_msgs__msg__CPM *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_ros_etsi_its_msgs__msg__CPM(ros_message, cdr);
}

static bool _CPM__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  ros_etsi_its_msgs__msg__CPM * ros_message = static_cast<ros_etsi_its_msgs__msg__CPM *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_ros_etsi_its_msgs__msg__CPM(cdr, ros_message);
}

static uint32_t _CPM__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_ros_etsi_its_msgs__msg__CPM(
      untyped_ros_message, 0));
}

static size_t _CPM__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_ros_etsi_its_msgs__msg__CPM(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_CPM = {
  "ros_etsi_its_msgs::msg",
  "CPM",
  _CPM__cdr_serialize,
  _CPM__cdr_deserialize,
  _CPM__get_serialized_size,
  _CPM__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _CPM__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_CPM,
  get_message_typesupport_handle_function,
  &ros_etsi_its_msgs__msg__CPM__get_type_hash,
  &ros_etsi_its_msgs__msg__CPM__get_type_description,
  &ros_etsi_its_msgs__msg__CPM__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ros_etsi_its_msgs, msg, CPM)() {
  return &_CPM__type_support;
}

#if defined(__cplusplus)
}
#endif

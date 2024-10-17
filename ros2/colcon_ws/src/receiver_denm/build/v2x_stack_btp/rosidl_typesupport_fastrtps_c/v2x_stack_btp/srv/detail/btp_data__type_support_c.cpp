// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from v2x_stack_btp:srv/BtpData.idl
// generated code does not contain a copyright notice
#include "v2x_stack_btp/srv/detail/btp_data__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "v2x_stack_btp/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "v2x_stack_btp/srv/detail/btp_data__struct.h"
#include "v2x_stack_btp/srv/detail/btp_data__functions.h"
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

#include "builtin_interfaces/msg/detail/duration__functions.h"  // lifetime, repetition_duration, repetition_interval
#include "v2x_stack_btp/msg/detail/geo_net_destination__functions.h"  // destination
#include "v2x_stack_btp/msg/detail/traffic_class__functions.h"  // traffic_class

// forward declare type support functions

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_v2x_stack_btp
bool cdr_serialize_builtin_interfaces__msg__Duration(
  const builtin_interfaces__msg__Duration * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_v2x_stack_btp
bool cdr_deserialize_builtin_interfaces__msg__Duration(
  eprosima::fastcdr::Cdr & cdr,
  builtin_interfaces__msg__Duration * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_v2x_stack_btp
size_t get_serialized_size_builtin_interfaces__msg__Duration(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_v2x_stack_btp
size_t max_serialized_size_builtin_interfaces__msg__Duration(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_v2x_stack_btp
bool cdr_serialize_key_builtin_interfaces__msg__Duration(
  const builtin_interfaces__msg__Duration * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_v2x_stack_btp
size_t get_serialized_size_key_builtin_interfaces__msg__Duration(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_v2x_stack_btp
size_t max_serialized_size_key_builtin_interfaces__msg__Duration(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_v2x_stack_btp
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, builtin_interfaces, msg, Duration)();

bool cdr_serialize_v2x_stack_btp__msg__GeoNetDestination(
  const v2x_stack_btp__msg__GeoNetDestination * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_v2x_stack_btp__msg__GeoNetDestination(
  eprosima::fastcdr::Cdr & cdr,
  v2x_stack_btp__msg__GeoNetDestination * ros_message);

size_t get_serialized_size_v2x_stack_btp__msg__GeoNetDestination(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_v2x_stack_btp__msg__GeoNetDestination(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_v2x_stack_btp__msg__GeoNetDestination(
  const v2x_stack_btp__msg__GeoNetDestination * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_v2x_stack_btp__msg__GeoNetDestination(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_v2x_stack_btp__msg__GeoNetDestination(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, v2x_stack_btp, msg, GeoNetDestination)();

bool cdr_serialize_v2x_stack_btp__msg__TrafficClass(
  const v2x_stack_btp__msg__TrafficClass * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_v2x_stack_btp__msg__TrafficClass(
  eprosima::fastcdr::Cdr & cdr,
  v2x_stack_btp__msg__TrafficClass * ros_message);

size_t get_serialized_size_v2x_stack_btp__msg__TrafficClass(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_v2x_stack_btp__msg__TrafficClass(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_v2x_stack_btp__msg__TrafficClass(
  const v2x_stack_btp__msg__TrafficClass * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_v2x_stack_btp__msg__TrafficClass(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_v2x_stack_btp__msg__TrafficClass(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, v2x_stack_btp, msg, TrafficClass)();


using _BtpData_Request__ros_msg_type = v2x_stack_btp__srv__BtpData_Request;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_v2x_stack_btp
bool cdr_serialize_v2x_stack_btp__srv__BtpData_Request(
  const v2x_stack_btp__srv__BtpData_Request * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: btp_type
  {
    cdr << ros_message->btp_type;
  }

  // Field name: source_port
  {
    cdr << ros_message->source_port;
  }

  // Field name: destination_port
  {
    cdr << ros_message->destination_port;
  }

  // Field name: destination_port_info
  {
    cdr << ros_message->destination_port_info;
  }

  // Field name: transport_type
  {
    cdr << ros_message->transport_type;
  }

  // Field name: destination
  {
    cdr_serialize_v2x_stack_btp__msg__GeoNetDestination(
      &ros_message->destination, cdr);
  }

  // Field name: its_aid
  {
    cdr << ros_message->its_aid;
  }

  // Field name: hop_limit
  {
    cdr << ros_message->hop_limit;
  }

  // Field name: traffic_class
  {
    cdr_serialize_v2x_stack_btp__msg__TrafficClass(
      &ros_message->traffic_class, cdr);
  }

  // Field name: lifetime
  {
    cdr_serialize_builtin_interfaces__msg__Duration(
      &ros_message->lifetime, cdr);
  }

  // Field name: repetition_interval
  {
    cdr_serialize_builtin_interfaces__msg__Duration(
      &ros_message->repetition_interval, cdr);
  }

  // Field name: repetition_duration
  {
    cdr_serialize_builtin_interfaces__msg__Duration(
      &ros_message->repetition_duration, cdr);
  }

  // Field name: data
  {
    size_t size = 1;
    auto array_ptr = ros_message->data;
    cdr.serialize_array(array_ptr, size);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_v2x_stack_btp
bool cdr_deserialize_v2x_stack_btp__srv__BtpData_Request(
  eprosima::fastcdr::Cdr & cdr,
  v2x_stack_btp__srv__BtpData_Request * ros_message)
{
  // Field name: btp_type
  {
    cdr >> ros_message->btp_type;
  }

  // Field name: source_port
  {
    cdr >> ros_message->source_port;
  }

  // Field name: destination_port
  {
    cdr >> ros_message->destination_port;
  }

  // Field name: destination_port_info
  {
    cdr >> ros_message->destination_port_info;
  }

  // Field name: transport_type
  {
    cdr >> ros_message->transport_type;
  }

  // Field name: destination
  {
    cdr_deserialize_v2x_stack_btp__msg__GeoNetDestination(cdr, &ros_message->destination);
  }

  // Field name: its_aid
  {
    cdr >> ros_message->its_aid;
  }

  // Field name: hop_limit
  {
    cdr >> ros_message->hop_limit;
  }

  // Field name: traffic_class
  {
    cdr_deserialize_v2x_stack_btp__msg__TrafficClass(cdr, &ros_message->traffic_class);
  }

  // Field name: lifetime
  {
    cdr_deserialize_builtin_interfaces__msg__Duration(cdr, &ros_message->lifetime);
  }

  // Field name: repetition_interval
  {
    cdr_deserialize_builtin_interfaces__msg__Duration(cdr, &ros_message->repetition_interval);
  }

  // Field name: repetition_duration
  {
    cdr_deserialize_builtin_interfaces__msg__Duration(cdr, &ros_message->repetition_duration);
  }

  // Field name: data
  {
    size_t size = 1;
    auto array_ptr = ros_message->data;
    cdr.deserialize_array(array_ptr, size);
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_v2x_stack_btp
size_t get_serialized_size_v2x_stack_btp__srv__BtpData_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _BtpData_Request__ros_msg_type * ros_message = static_cast<const _BtpData_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: btp_type
  {
    size_t item_size = sizeof(ros_message->btp_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: source_port
  {
    size_t item_size = sizeof(ros_message->source_port);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: destination_port
  {
    size_t item_size = sizeof(ros_message->destination_port);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: destination_port_info
  {
    size_t item_size = sizeof(ros_message->destination_port_info);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: transport_type
  {
    size_t item_size = sizeof(ros_message->transport_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: destination
  current_alignment += get_serialized_size_v2x_stack_btp__msg__GeoNetDestination(
    &(ros_message->destination), current_alignment);

  // Field name: its_aid
  {
    size_t item_size = sizeof(ros_message->its_aid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: hop_limit
  {
    size_t item_size = sizeof(ros_message->hop_limit);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: traffic_class
  current_alignment += get_serialized_size_v2x_stack_btp__msg__TrafficClass(
    &(ros_message->traffic_class), current_alignment);

  // Field name: lifetime
  current_alignment += get_serialized_size_builtin_interfaces__msg__Duration(
    &(ros_message->lifetime), current_alignment);

  // Field name: repetition_interval
  current_alignment += get_serialized_size_builtin_interfaces__msg__Duration(
    &(ros_message->repetition_interval), current_alignment);

  // Field name: repetition_duration
  current_alignment += get_serialized_size_builtin_interfaces__msg__Duration(
    &(ros_message->repetition_duration), current_alignment);

  // Field name: data
  {
    size_t array_size = 1;
    auto array_ptr = ros_message->data;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_v2x_stack_btp
size_t max_serialized_size_v2x_stack_btp__srv__BtpData_Request(
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

  // Field name: btp_type
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: source_port
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Field name: destination_port
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Field name: destination_port_info
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Field name: transport_type
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: destination
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_v2x_stack_btp__msg__GeoNetDestination(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: its_aid
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: hop_limit
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: traffic_class
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_v2x_stack_btp__msg__TrafficClass(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: lifetime
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_builtin_interfaces__msg__Duration(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: repetition_interval
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_builtin_interfaces__msg__Duration(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: repetition_duration
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_builtin_interfaces__msg__Duration(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: data
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = v2x_stack_btp__srv__BtpData_Request;
    is_plain =
      (
      offsetof(DataType, data) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_v2x_stack_btp
bool cdr_serialize_key_v2x_stack_btp__srv__BtpData_Request(
  const v2x_stack_btp__srv__BtpData_Request * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: btp_type
  {
    cdr << ros_message->btp_type;
  }

  // Field name: source_port
  {
    cdr << ros_message->source_port;
  }

  // Field name: destination_port
  {
    cdr << ros_message->destination_port;
  }

  // Field name: destination_port_info
  {
    cdr << ros_message->destination_port_info;
  }

  // Field name: transport_type
  {
    cdr << ros_message->transport_type;
  }

  // Field name: destination
  {
    cdr_serialize_key_v2x_stack_btp__msg__GeoNetDestination(
      &ros_message->destination, cdr);
  }

  // Field name: its_aid
  {
    cdr << ros_message->its_aid;
  }

  // Field name: hop_limit
  {
    cdr << ros_message->hop_limit;
  }

  // Field name: traffic_class
  {
    cdr_serialize_key_v2x_stack_btp__msg__TrafficClass(
      &ros_message->traffic_class, cdr);
  }

  // Field name: lifetime
  {
    cdr_serialize_key_builtin_interfaces__msg__Duration(
      &ros_message->lifetime, cdr);
  }

  // Field name: repetition_interval
  {
    cdr_serialize_key_builtin_interfaces__msg__Duration(
      &ros_message->repetition_interval, cdr);
  }

  // Field name: repetition_duration
  {
    cdr_serialize_key_builtin_interfaces__msg__Duration(
      &ros_message->repetition_duration, cdr);
  }

  // Field name: data
  {
    size_t size = 1;
    auto array_ptr = ros_message->data;
    cdr.serialize_array(array_ptr, size);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_v2x_stack_btp
size_t get_serialized_size_key_v2x_stack_btp__srv__BtpData_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _BtpData_Request__ros_msg_type * ros_message = static_cast<const _BtpData_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: btp_type
  {
    size_t item_size = sizeof(ros_message->btp_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: source_port
  {
    size_t item_size = sizeof(ros_message->source_port);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: destination_port
  {
    size_t item_size = sizeof(ros_message->destination_port);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: destination_port_info
  {
    size_t item_size = sizeof(ros_message->destination_port_info);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: transport_type
  {
    size_t item_size = sizeof(ros_message->transport_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: destination
  current_alignment += get_serialized_size_key_v2x_stack_btp__msg__GeoNetDestination(
    &(ros_message->destination), current_alignment);

  // Field name: its_aid
  {
    size_t item_size = sizeof(ros_message->its_aid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: hop_limit
  {
    size_t item_size = sizeof(ros_message->hop_limit);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: traffic_class
  current_alignment += get_serialized_size_key_v2x_stack_btp__msg__TrafficClass(
    &(ros_message->traffic_class), current_alignment);

  // Field name: lifetime
  current_alignment += get_serialized_size_key_builtin_interfaces__msg__Duration(
    &(ros_message->lifetime), current_alignment);

  // Field name: repetition_interval
  current_alignment += get_serialized_size_key_builtin_interfaces__msg__Duration(
    &(ros_message->repetition_interval), current_alignment);

  // Field name: repetition_duration
  current_alignment += get_serialized_size_key_builtin_interfaces__msg__Duration(
    &(ros_message->repetition_duration), current_alignment);

  // Field name: data
  {
    size_t array_size = 1;
    auto array_ptr = ros_message->data;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_v2x_stack_btp
size_t max_serialized_size_key_v2x_stack_btp__srv__BtpData_Request(
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
  // Field name: btp_type
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: source_port
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Field name: destination_port
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Field name: destination_port_info
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Field name: transport_type
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: destination
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_v2x_stack_btp__msg__GeoNetDestination(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: its_aid
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: hop_limit
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: traffic_class
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_v2x_stack_btp__msg__TrafficClass(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: lifetime
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_builtin_interfaces__msg__Duration(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: repetition_interval
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_builtin_interfaces__msg__Duration(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: repetition_duration
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_builtin_interfaces__msg__Duration(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: data
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = v2x_stack_btp__srv__BtpData_Request;
    is_plain =
      (
      offsetof(DataType, data) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _BtpData_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const v2x_stack_btp__srv__BtpData_Request * ros_message = static_cast<const v2x_stack_btp__srv__BtpData_Request *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_v2x_stack_btp__srv__BtpData_Request(ros_message, cdr);
}

static bool _BtpData_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  v2x_stack_btp__srv__BtpData_Request * ros_message = static_cast<v2x_stack_btp__srv__BtpData_Request *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_v2x_stack_btp__srv__BtpData_Request(cdr, ros_message);
}

static uint32_t _BtpData_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_v2x_stack_btp__srv__BtpData_Request(
      untyped_ros_message, 0));
}

static size_t _BtpData_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_v2x_stack_btp__srv__BtpData_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_BtpData_Request = {
  "v2x_stack_btp::srv",
  "BtpData_Request",
  _BtpData_Request__cdr_serialize,
  _BtpData_Request__cdr_deserialize,
  _BtpData_Request__get_serialized_size,
  _BtpData_Request__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _BtpData_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_BtpData_Request,
  get_message_typesupport_handle_function,
  &v2x_stack_btp__srv__BtpData_Request__get_type_hash,
  &v2x_stack_btp__srv__BtpData_Request__get_type_description,
  &v2x_stack_btp__srv__BtpData_Request__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, v2x_stack_btp, srv, BtpData_Request)() {
  return &_BtpData_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <cstddef>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "v2x_stack_btp/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "v2x_stack_btp/srv/detail/btp_data__struct.h"
// already included above
// #include "v2x_stack_btp/srv/detail/btp_data__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

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


// forward declare type support functions


using _BtpData_Response__ros_msg_type = v2x_stack_btp__srv__BtpData_Response;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_v2x_stack_btp
bool cdr_serialize_v2x_stack_btp__srv__BtpData_Response(
  const v2x_stack_btp__srv__BtpData_Response * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: confirm
  {
    cdr << ros_message->confirm;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_v2x_stack_btp
bool cdr_deserialize_v2x_stack_btp__srv__BtpData_Response(
  eprosima::fastcdr::Cdr & cdr,
  v2x_stack_btp__srv__BtpData_Response * ros_message)
{
  // Field name: confirm
  {
    cdr >> ros_message->confirm;
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_v2x_stack_btp
size_t get_serialized_size_v2x_stack_btp__srv__BtpData_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _BtpData_Response__ros_msg_type * ros_message = static_cast<const _BtpData_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: confirm
  {
    size_t item_size = sizeof(ros_message->confirm);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_v2x_stack_btp
size_t max_serialized_size_v2x_stack_btp__srv__BtpData_Response(
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

  // Field name: confirm
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = v2x_stack_btp__srv__BtpData_Response;
    is_plain =
      (
      offsetof(DataType, confirm) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_v2x_stack_btp
bool cdr_serialize_key_v2x_stack_btp__srv__BtpData_Response(
  const v2x_stack_btp__srv__BtpData_Response * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: confirm
  {
    cdr << ros_message->confirm;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_v2x_stack_btp
size_t get_serialized_size_key_v2x_stack_btp__srv__BtpData_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _BtpData_Response__ros_msg_type * ros_message = static_cast<const _BtpData_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: confirm
  {
    size_t item_size = sizeof(ros_message->confirm);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_v2x_stack_btp
size_t max_serialized_size_key_v2x_stack_btp__srv__BtpData_Response(
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
  // Field name: confirm
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = v2x_stack_btp__srv__BtpData_Response;
    is_plain =
      (
      offsetof(DataType, confirm) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _BtpData_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const v2x_stack_btp__srv__BtpData_Response * ros_message = static_cast<const v2x_stack_btp__srv__BtpData_Response *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_v2x_stack_btp__srv__BtpData_Response(ros_message, cdr);
}

static bool _BtpData_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  v2x_stack_btp__srv__BtpData_Response * ros_message = static_cast<v2x_stack_btp__srv__BtpData_Response *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_v2x_stack_btp__srv__BtpData_Response(cdr, ros_message);
}

static uint32_t _BtpData_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_v2x_stack_btp__srv__BtpData_Response(
      untyped_ros_message, 0));
}

static size_t _BtpData_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_v2x_stack_btp__srv__BtpData_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_BtpData_Response = {
  "v2x_stack_btp::srv",
  "BtpData_Response",
  _BtpData_Response__cdr_serialize,
  _BtpData_Response__cdr_deserialize,
  _BtpData_Response__get_serialized_size,
  _BtpData_Response__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _BtpData_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_BtpData_Response,
  get_message_typesupport_handle_function,
  &v2x_stack_btp__srv__BtpData_Response__get_type_hash,
  &v2x_stack_btp__srv__BtpData_Response__get_type_description,
  &v2x_stack_btp__srv__BtpData_Response__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, v2x_stack_btp, srv, BtpData_Response)() {
  return &_BtpData_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <cstddef>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "v2x_stack_btp/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "v2x_stack_btp/srv/detail/btp_data__struct.h"
// already included above
// #include "v2x_stack_btp/srv/detail/btp_data__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

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

#include "service_msgs/msg/detail/service_event_info__functions.h"  // info

// forward declare type support functions

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_v2x_stack_btp
bool cdr_serialize_service_msgs__msg__ServiceEventInfo(
  const service_msgs__msg__ServiceEventInfo * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_v2x_stack_btp
bool cdr_deserialize_service_msgs__msg__ServiceEventInfo(
  eprosima::fastcdr::Cdr & cdr,
  service_msgs__msg__ServiceEventInfo * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_v2x_stack_btp
size_t get_serialized_size_service_msgs__msg__ServiceEventInfo(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_v2x_stack_btp
size_t max_serialized_size_service_msgs__msg__ServiceEventInfo(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_v2x_stack_btp
bool cdr_serialize_key_service_msgs__msg__ServiceEventInfo(
  const service_msgs__msg__ServiceEventInfo * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_v2x_stack_btp
size_t get_serialized_size_key_service_msgs__msg__ServiceEventInfo(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_v2x_stack_btp
size_t max_serialized_size_key_service_msgs__msg__ServiceEventInfo(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_v2x_stack_btp
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, service_msgs, msg, ServiceEventInfo)();

bool cdr_serialize_v2x_stack_btp__srv__BtpData_Request(
  const v2x_stack_btp__srv__BtpData_Request * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_v2x_stack_btp__srv__BtpData_Request(
  eprosima::fastcdr::Cdr & cdr,
  v2x_stack_btp__srv__BtpData_Request * ros_message);

size_t get_serialized_size_v2x_stack_btp__srv__BtpData_Request(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_v2x_stack_btp__srv__BtpData_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_v2x_stack_btp__srv__BtpData_Request(
  const v2x_stack_btp__srv__BtpData_Request * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_v2x_stack_btp__srv__BtpData_Request(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_v2x_stack_btp__srv__BtpData_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, v2x_stack_btp, srv, BtpData_Request)();

bool cdr_serialize_v2x_stack_btp__srv__BtpData_Response(
  const v2x_stack_btp__srv__BtpData_Response * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_v2x_stack_btp__srv__BtpData_Response(
  eprosima::fastcdr::Cdr & cdr,
  v2x_stack_btp__srv__BtpData_Response * ros_message);

size_t get_serialized_size_v2x_stack_btp__srv__BtpData_Response(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_v2x_stack_btp__srv__BtpData_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_v2x_stack_btp__srv__BtpData_Response(
  const v2x_stack_btp__srv__BtpData_Response * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_v2x_stack_btp__srv__BtpData_Response(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_v2x_stack_btp__srv__BtpData_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, v2x_stack_btp, srv, BtpData_Response)();


using _BtpData_Event__ros_msg_type = v2x_stack_btp__srv__BtpData_Event;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_v2x_stack_btp
bool cdr_serialize_v2x_stack_btp__srv__BtpData_Event(
  const v2x_stack_btp__srv__BtpData_Event * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: info
  {
    cdr_serialize_service_msgs__msg__ServiceEventInfo(
      &ros_message->info, cdr);
  }

  // Field name: request
  {
    size_t size = ros_message->request.size;
    auto array_ptr = ros_message->request.data;
    if (size > 1) {
      fprintf(stderr, "array size exceeds upper bound\n");
      return false;
    }
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_v2x_stack_btp__srv__BtpData_Request(
        &array_ptr[i], cdr);
    }
  }

  // Field name: response
  {
    size_t size = ros_message->response.size;
    auto array_ptr = ros_message->response.data;
    if (size > 1) {
      fprintf(stderr, "array size exceeds upper bound\n");
      return false;
    }
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_v2x_stack_btp__srv__BtpData_Response(
        &array_ptr[i], cdr);
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_v2x_stack_btp
bool cdr_deserialize_v2x_stack_btp__srv__BtpData_Event(
  eprosima::fastcdr::Cdr & cdr,
  v2x_stack_btp__srv__BtpData_Event * ros_message)
{
  // Field name: info
  {
    cdr_deserialize_service_msgs__msg__ServiceEventInfo(cdr, &ros_message->info);
  }

  // Field name: request
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->request.data) {
      v2x_stack_btp__srv__BtpData_Request__Sequence__fini(&ros_message->request);
    }
    if (!v2x_stack_btp__srv__BtpData_Request__Sequence__init(&ros_message->request, size)) {
      fprintf(stderr, "failed to create array for field 'request'");
      return false;
    }
    auto array_ptr = ros_message->request.data;
    for (size_t i = 0; i < size; ++i) {
      cdr_deserialize_v2x_stack_btp__srv__BtpData_Request(cdr, &array_ptr[i]);
    }
  }

  // Field name: response
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->response.data) {
      v2x_stack_btp__srv__BtpData_Response__Sequence__fini(&ros_message->response);
    }
    if (!v2x_stack_btp__srv__BtpData_Response__Sequence__init(&ros_message->response, size)) {
      fprintf(stderr, "failed to create array for field 'response'");
      return false;
    }
    auto array_ptr = ros_message->response.data;
    for (size_t i = 0; i < size; ++i) {
      cdr_deserialize_v2x_stack_btp__srv__BtpData_Response(cdr, &array_ptr[i]);
    }
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_v2x_stack_btp
size_t get_serialized_size_v2x_stack_btp__srv__BtpData_Event(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _BtpData_Event__ros_msg_type * ros_message = static_cast<const _BtpData_Event__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: info
  current_alignment += get_serialized_size_service_msgs__msg__ServiceEventInfo(
    &(ros_message->info), current_alignment);

  // Field name: request
  {
    size_t array_size = ros_message->request.size;
    auto array_ptr = ros_message->request.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_v2x_stack_btp__srv__BtpData_Request(
        &array_ptr[index], current_alignment);
    }
  }

  // Field name: response
  {
    size_t array_size = ros_message->response.size;
    auto array_ptr = ros_message->response.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_v2x_stack_btp__srv__BtpData_Response(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_v2x_stack_btp
size_t max_serialized_size_v2x_stack_btp__srv__BtpData_Event(
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

  // Field name: info
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_service_msgs__msg__ServiceEventInfo(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: request
  {
    size_t array_size = 1;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_v2x_stack_btp__srv__BtpData_Request(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: response
  {
    size_t array_size = 1;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_v2x_stack_btp__srv__BtpData_Response(
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
    using DataType = v2x_stack_btp__srv__BtpData_Event;
    is_plain =
      (
      offsetof(DataType, response) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_v2x_stack_btp
bool cdr_serialize_key_v2x_stack_btp__srv__BtpData_Event(
  const v2x_stack_btp__srv__BtpData_Event * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: info
  {
    cdr_serialize_key_service_msgs__msg__ServiceEventInfo(
      &ros_message->info, cdr);
  }

  // Field name: request
  {
    size_t size = ros_message->request.size;
    auto array_ptr = ros_message->request.data;
    if (size > 1) {
      fprintf(stderr, "array size exceeds upper bound\n");
      return false;
    }
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_key_v2x_stack_btp__srv__BtpData_Request(
        &array_ptr[i], cdr);
    }
  }

  // Field name: response
  {
    size_t size = ros_message->response.size;
    auto array_ptr = ros_message->response.data;
    if (size > 1) {
      fprintf(stderr, "array size exceeds upper bound\n");
      return false;
    }
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      cdr_serialize_key_v2x_stack_btp__srv__BtpData_Response(
        &array_ptr[i], cdr);
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_v2x_stack_btp
size_t get_serialized_size_key_v2x_stack_btp__srv__BtpData_Event(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _BtpData_Event__ros_msg_type * ros_message = static_cast<const _BtpData_Event__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: info
  current_alignment += get_serialized_size_key_service_msgs__msg__ServiceEventInfo(
    &(ros_message->info), current_alignment);

  // Field name: request
  {
    size_t array_size = ros_message->request.size;
    auto array_ptr = ros_message->request.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_key_v2x_stack_btp__srv__BtpData_Request(
        &array_ptr[index], current_alignment);
    }
  }

  // Field name: response
  {
    size_t array_size = ros_message->response.size;
    auto array_ptr = ros_message->response.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_key_v2x_stack_btp__srv__BtpData_Response(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_v2x_stack_btp
size_t max_serialized_size_key_v2x_stack_btp__srv__BtpData_Event(
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
  // Field name: info
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_service_msgs__msg__ServiceEventInfo(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: request
  {
    size_t array_size = 1;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_v2x_stack_btp__srv__BtpData_Request(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: response
  {
    size_t array_size = 1;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_v2x_stack_btp__srv__BtpData_Response(
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
    using DataType = v2x_stack_btp__srv__BtpData_Event;
    is_plain =
      (
      offsetof(DataType, response) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _BtpData_Event__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const v2x_stack_btp__srv__BtpData_Event * ros_message = static_cast<const v2x_stack_btp__srv__BtpData_Event *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_v2x_stack_btp__srv__BtpData_Event(ros_message, cdr);
}

static bool _BtpData_Event__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  v2x_stack_btp__srv__BtpData_Event * ros_message = static_cast<v2x_stack_btp__srv__BtpData_Event *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_v2x_stack_btp__srv__BtpData_Event(cdr, ros_message);
}

static uint32_t _BtpData_Event__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_v2x_stack_btp__srv__BtpData_Event(
      untyped_ros_message, 0));
}

static size_t _BtpData_Event__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_v2x_stack_btp__srv__BtpData_Event(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_BtpData_Event = {
  "v2x_stack_btp::srv",
  "BtpData_Event",
  _BtpData_Event__cdr_serialize,
  _BtpData_Event__cdr_deserialize,
  _BtpData_Event__get_serialized_size,
  _BtpData_Event__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _BtpData_Event__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_BtpData_Event,
  get_message_typesupport_handle_function,
  &v2x_stack_btp__srv__BtpData_Event__get_type_hash,
  &v2x_stack_btp__srv__BtpData_Event__get_type_description,
  &v2x_stack_btp__srv__BtpData_Event__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, v2x_stack_btp, srv, BtpData_Event)() {
  return &_BtpData_Event__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "v2x_stack_btp/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "v2x_stack_btp/srv/btp_data.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t BtpData__callbacks = {
  "v2x_stack_btp::srv",
  "BtpData",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, v2x_stack_btp, srv, BtpData_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, v2x_stack_btp, srv, BtpData_Response)(),
};

static rosidl_service_type_support_t BtpData__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &BtpData__callbacks,
  get_service_typesupport_handle_function,
  &_BtpData_Request__type_support,
  &_BtpData_Response__type_support,
  &_BtpData_Event__type_support,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    v2x_stack_btp,
    srv,
    BtpData
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    v2x_stack_btp,
    srv,
    BtpData
  ),
  &v2x_stack_btp__srv__BtpData__get_type_hash,
  &v2x_stack_btp__srv__BtpData__get_type_description,
  &v2x_stack_btp__srv__BtpData__get_type_description_sources,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, v2x_stack_btp, srv, BtpData)() {
  return &BtpData__handle;
}

#if defined(__cplusplus)
}
#endif

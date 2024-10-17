// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from v2x_stack_btp:msg/BtpDataIndication.idl
// generated code does not contain a copyright notice
#include "v2x_stack_btp/msg/detail/btp_data_indication__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "v2x_stack_btp/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "v2x_stack_btp/msg/detail/btp_data_indication__struct.h"
#include "v2x_stack_btp/msg/detail/btp_data_indication__functions.h"
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

#include "builtin_interfaces/msg/detail/duration__functions.h"  // remaining_packet_lifetime
#include "rosidl_runtime_c/primitives_sequence.h"  // data, permissions
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // data, permissions
#include "std_msgs/msg/detail/header__functions.h"  // header
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

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_v2x_stack_btp
bool cdr_serialize_std_msgs__msg__Header(
  const std_msgs__msg__Header * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_v2x_stack_btp
bool cdr_deserialize_std_msgs__msg__Header(
  eprosima::fastcdr::Cdr & cdr,
  std_msgs__msg__Header * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_v2x_stack_btp
size_t get_serialized_size_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_v2x_stack_btp
size_t max_serialized_size_std_msgs__msg__Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_v2x_stack_btp
bool cdr_serialize_key_std_msgs__msg__Header(
  const std_msgs__msg__Header * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_v2x_stack_btp
size_t get_serialized_size_key_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_v2x_stack_btp
size_t max_serialized_size_key_std_msgs__msg__Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_v2x_stack_btp
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, Header)();

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


using _BtpDataIndication__ros_msg_type = v2x_stack_btp__msg__BtpDataIndication;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_v2x_stack_btp
bool cdr_serialize_v2x_stack_btp__msg__BtpDataIndication(
  const v2x_stack_btp__msg__BtpDataIndication * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: header
  {
    cdr_serialize_std_msgs__msg__Header(
      &ros_message->header, cdr);
  }

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

  // Field name: destination
  {
    cdr_serialize_v2x_stack_btp__msg__GeoNetDestination(
      &ros_message->destination, cdr);
  }

  // Field name: its_aid
  {
    cdr << ros_message->its_aid;
  }

  // Field name: permissions
  {
    size_t size = ros_message->permissions.size;
    auto array_ptr = ros_message->permissions.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: traffic_class
  {
    cdr_serialize_v2x_stack_btp__msg__TrafficClass(
      &ros_message->traffic_class, cdr);
  }

  // Field name: remaining_packet_lifetime
  {
    cdr_serialize_builtin_interfaces__msg__Duration(
      &ros_message->remaining_packet_lifetime, cdr);
  }

  // Field name: data
  {
    size_t size = ros_message->data.size;
    auto array_ptr = ros_message->data.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_v2x_stack_btp
bool cdr_deserialize_v2x_stack_btp__msg__BtpDataIndication(
  eprosima::fastcdr::Cdr & cdr,
  v2x_stack_btp__msg__BtpDataIndication * ros_message)
{
  // Field name: header
  {
    cdr_deserialize_std_msgs__msg__Header(cdr, &ros_message->header);
  }

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

  // Field name: destination
  {
    cdr_deserialize_v2x_stack_btp__msg__GeoNetDestination(cdr, &ros_message->destination);
  }

  // Field name: its_aid
  {
    cdr >> ros_message->its_aid;
  }

  // Field name: permissions
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->permissions.data) {
      rosidl_runtime_c__uint8__Sequence__fini(&ros_message->permissions);
    }
    if (!rosidl_runtime_c__uint8__Sequence__init(&ros_message->permissions, size)) {
      fprintf(stderr, "failed to create array for field 'permissions'");
      return false;
    }
    auto array_ptr = ros_message->permissions.data;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: traffic_class
  {
    cdr_deserialize_v2x_stack_btp__msg__TrafficClass(cdr, &ros_message->traffic_class);
  }

  // Field name: remaining_packet_lifetime
  {
    cdr_deserialize_builtin_interfaces__msg__Duration(cdr, &ros_message->remaining_packet_lifetime);
  }

  // Field name: data
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->data.data) {
      rosidl_runtime_c__uint8__Sequence__fini(&ros_message->data);
    }
    if (!rosidl_runtime_c__uint8__Sequence__init(&ros_message->data, size)) {
      fprintf(stderr, "failed to create array for field 'data'");
      return false;
    }
    auto array_ptr = ros_message->data.data;
    cdr.deserialize_array(array_ptr, size);
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_v2x_stack_btp
size_t get_serialized_size_v2x_stack_btp__msg__BtpDataIndication(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _BtpDataIndication__ros_msg_type * ros_message = static_cast<const _BtpDataIndication__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: header
  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);

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

  // Field name: destination
  current_alignment += get_serialized_size_v2x_stack_btp__msg__GeoNetDestination(
    &(ros_message->destination), current_alignment);

  // Field name: its_aid
  {
    size_t item_size = sizeof(ros_message->its_aid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: permissions
  {
    size_t array_size = ros_message->permissions.size;
    auto array_ptr = ros_message->permissions.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: traffic_class
  current_alignment += get_serialized_size_v2x_stack_btp__msg__TrafficClass(
    &(ros_message->traffic_class), current_alignment);

  // Field name: remaining_packet_lifetime
  current_alignment += get_serialized_size_builtin_interfaces__msg__Duration(
    &(ros_message->remaining_packet_lifetime), current_alignment);

  // Field name: data
  {
    size_t array_size = ros_message->data.size;
    auto array_ptr = ros_message->data.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_v2x_stack_btp
size_t max_serialized_size_v2x_stack_btp__msg__BtpDataIndication(
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

  // Field name: permissions
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
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

  // Field name: remaining_packet_lifetime
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
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = v2x_stack_btp__msg__BtpDataIndication;
    is_plain =
      (
      offsetof(DataType, data) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_v2x_stack_btp
bool cdr_serialize_key_v2x_stack_btp__msg__BtpDataIndication(
  const v2x_stack_btp__msg__BtpDataIndication * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: header
  {
    cdr_serialize_key_std_msgs__msg__Header(
      &ros_message->header, cdr);
  }

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

  // Field name: destination
  {
    cdr_serialize_key_v2x_stack_btp__msg__GeoNetDestination(
      &ros_message->destination, cdr);
  }

  // Field name: its_aid
  {
    cdr << ros_message->its_aid;
  }

  // Field name: permissions
  {
    size_t size = ros_message->permissions.size;
    auto array_ptr = ros_message->permissions.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: traffic_class
  {
    cdr_serialize_key_v2x_stack_btp__msg__TrafficClass(
      &ros_message->traffic_class, cdr);
  }

  // Field name: remaining_packet_lifetime
  {
    cdr_serialize_key_builtin_interfaces__msg__Duration(
      &ros_message->remaining_packet_lifetime, cdr);
  }

  // Field name: data
  {
    size_t size = ros_message->data.size;
    auto array_ptr = ros_message->data.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serialize_array(array_ptr, size);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_v2x_stack_btp
size_t get_serialized_size_key_v2x_stack_btp__msg__BtpDataIndication(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _BtpDataIndication__ros_msg_type * ros_message = static_cast<const _BtpDataIndication__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: header
  current_alignment += get_serialized_size_key_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);

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

  // Field name: destination
  current_alignment += get_serialized_size_key_v2x_stack_btp__msg__GeoNetDestination(
    &(ros_message->destination), current_alignment);

  // Field name: its_aid
  {
    size_t item_size = sizeof(ros_message->its_aid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: permissions
  {
    size_t array_size = ros_message->permissions.size;
    auto array_ptr = ros_message->permissions.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: traffic_class
  current_alignment += get_serialized_size_key_v2x_stack_btp__msg__TrafficClass(
    &(ros_message->traffic_class), current_alignment);

  // Field name: remaining_packet_lifetime
  current_alignment += get_serialized_size_key_builtin_interfaces__msg__Duration(
    &(ros_message->remaining_packet_lifetime), current_alignment);

  // Field name: data
  {
    size_t array_size = ros_message->data.size;
    auto array_ptr = ros_message->data.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_v2x_stack_btp
size_t max_serialized_size_key_v2x_stack_btp__msg__BtpDataIndication(
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

  // Field name: permissions
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
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

  // Field name: remaining_packet_lifetime
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
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = v2x_stack_btp__msg__BtpDataIndication;
    is_plain =
      (
      offsetof(DataType, data) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _BtpDataIndication__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const v2x_stack_btp__msg__BtpDataIndication * ros_message = static_cast<const v2x_stack_btp__msg__BtpDataIndication *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_v2x_stack_btp__msg__BtpDataIndication(ros_message, cdr);
}

static bool _BtpDataIndication__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  v2x_stack_btp__msg__BtpDataIndication * ros_message = static_cast<v2x_stack_btp__msg__BtpDataIndication *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_v2x_stack_btp__msg__BtpDataIndication(cdr, ros_message);
}

static uint32_t _BtpDataIndication__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_v2x_stack_btp__msg__BtpDataIndication(
      untyped_ros_message, 0));
}

static size_t _BtpDataIndication__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_v2x_stack_btp__msg__BtpDataIndication(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_BtpDataIndication = {
  "v2x_stack_btp::msg",
  "BtpDataIndication",
  _BtpDataIndication__cdr_serialize,
  _BtpDataIndication__cdr_deserialize,
  _BtpDataIndication__get_serialized_size,
  _BtpDataIndication__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _BtpDataIndication__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_BtpDataIndication,
  get_message_typesupport_handle_function,
  &v2x_stack_btp__msg__BtpDataIndication__get_type_hash,
  &v2x_stack_btp__msg__BtpDataIndication__get_type_description,
  &v2x_stack_btp__msg__BtpDataIndication__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, v2x_stack_btp, msg, BtpDataIndication)() {
  return &_BtpDataIndication__type_support;
}

#if defined(__cplusplus)
}
#endif

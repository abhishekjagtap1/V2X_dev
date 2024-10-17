// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from v2x_stack:msg/UDPDataIndHdr.idl
// generated code does not contain a copyright notice
#include "v2x_stack/msg/detail/udp_data_ind_hdr__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "v2x_stack/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "v2x_stack/msg/detail/udp_data_ind_hdr__struct.h"
#include "v2x_stack/msg/detail/udp_data_ind_hdr__functions.h"
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

#include "v2x_stack/msg/detail/area__functions.h"  // area
#include "v2x_stack/msg/detail/location__functions.h"  // location

// forward declare type support functions

bool cdr_serialize_v2x_stack__msg__Area(
  const v2x_stack__msg__Area * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_v2x_stack__msg__Area(
  eprosima::fastcdr::Cdr & cdr,
  v2x_stack__msg__Area * ros_message);

size_t get_serialized_size_v2x_stack__msg__Area(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_v2x_stack__msg__Area(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_v2x_stack__msg__Area(
  const v2x_stack__msg__Area * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_v2x_stack__msg__Area(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_v2x_stack__msg__Area(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, v2x_stack, msg, Area)();

bool cdr_serialize_v2x_stack__msg__Location(
  const v2x_stack__msg__Location * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_v2x_stack__msg__Location(
  eprosima::fastcdr::Cdr & cdr,
  v2x_stack__msg__Location * ros_message);

size_t get_serialized_size_v2x_stack__msg__Location(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_v2x_stack__msg__Location(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_v2x_stack__msg__Location(
  const v2x_stack__msg__Location * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_v2x_stack__msg__Location(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_v2x_stack__msg__Location(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, v2x_stack, msg, Location)();


using _UDPDataIndHdr__ros_msg_type = v2x_stack__msg__UDPDataIndHdr;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_v2x_stack
bool cdr_serialize_v2x_stack__msg__UDPDataIndHdr(
  const v2x_stack__msg__UDPDataIndHdr * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: btp_type
  {
    cdr << ros_message->btp_type;
  }

  // Field name: pkt_transport
  {
    cdr << ros_message->pkt_transport;
  }

  // Field name: traffic_class
  {
    cdr << ros_message->traffic_class;
  }

  // Field name: max_pkt_life_time
  {
    cdr << ros_message->max_pkt_life_time;
  }

  // Field name: dest_port
  {
    cdr << ros_message->dest_port;
  }

  // Field name: src_port
  {
    cdr << ros_message->src_port;
  }

  // Field name: dest_info
  {
    cdr << ros_message->dest_info;
  }

  // Field name: location
  {
    cdr_serialize_v2x_stack__msg__Location(
      &ros_message->location, cdr);
  }

  // Field name: area
  {
    cdr_serialize_v2x_stack__msg__Area(
      &ros_message->area, cdr);
  }

  // Field name: sec_profile
  {
    cdr << ros_message->sec_profile;
  }

  // Field name: parser_result
  {
    cdr << ros_message->parser_result;
  }

  // Field name: verification_result
  {
    cdr << ros_message->verification_result;
  }

  // Field name: ssp_len
  {
    cdr << ros_message->ssp_len;
  }

  // Field name: aid
  {
    cdr << ros_message->aid;
  }

  // Field name: ssp_bits
  {
    size_t size = 32;
    auto array_ptr = ros_message->ssp_bits;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: cert_id
  {
    size_t size = 32;
    auto array_ptr = ros_message->cert_id;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: length
  {
    cdr << ros_message->length;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_v2x_stack
bool cdr_deserialize_v2x_stack__msg__UDPDataIndHdr(
  eprosima::fastcdr::Cdr & cdr,
  v2x_stack__msg__UDPDataIndHdr * ros_message)
{
  // Field name: btp_type
  {
    cdr >> ros_message->btp_type;
  }

  // Field name: pkt_transport
  {
    cdr >> ros_message->pkt_transport;
  }

  // Field name: traffic_class
  {
    cdr >> ros_message->traffic_class;
  }

  // Field name: max_pkt_life_time
  {
    cdr >> ros_message->max_pkt_life_time;
  }

  // Field name: dest_port
  {
    cdr >> ros_message->dest_port;
  }

  // Field name: src_port
  {
    cdr >> ros_message->src_port;
  }

  // Field name: dest_info
  {
    cdr >> ros_message->dest_info;
  }

  // Field name: location
  {
    cdr_deserialize_v2x_stack__msg__Location(cdr, &ros_message->location);
  }

  // Field name: area
  {
    cdr_deserialize_v2x_stack__msg__Area(cdr, &ros_message->area);
  }

  // Field name: sec_profile
  {
    cdr >> ros_message->sec_profile;
  }

  // Field name: parser_result
  {
    cdr >> ros_message->parser_result;
  }

  // Field name: verification_result
  {
    cdr >> ros_message->verification_result;
  }

  // Field name: ssp_len
  {
    cdr >> ros_message->ssp_len;
  }

  // Field name: aid
  {
    cdr >> ros_message->aid;
  }

  // Field name: ssp_bits
  {
    size_t size = 32;
    auto array_ptr = ros_message->ssp_bits;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: cert_id
  {
    size_t size = 32;
    auto array_ptr = ros_message->cert_id;
    cdr.deserialize_array(array_ptr, size);
  }

  // Field name: length
  {
    cdr >> ros_message->length;
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_v2x_stack
size_t get_serialized_size_v2x_stack__msg__UDPDataIndHdr(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _UDPDataIndHdr__ros_msg_type * ros_message = static_cast<const _UDPDataIndHdr__ros_msg_type *>(untyped_ros_message);
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

  // Field name: pkt_transport
  {
    size_t item_size = sizeof(ros_message->pkt_transport);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: traffic_class
  {
    size_t item_size = sizeof(ros_message->traffic_class);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: max_pkt_life_time
  {
    size_t item_size = sizeof(ros_message->max_pkt_life_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: dest_port
  {
    size_t item_size = sizeof(ros_message->dest_port);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: src_port
  {
    size_t item_size = sizeof(ros_message->src_port);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: dest_info
  {
    size_t item_size = sizeof(ros_message->dest_info);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: location
  current_alignment += get_serialized_size_v2x_stack__msg__Location(
    &(ros_message->location), current_alignment);

  // Field name: area
  current_alignment += get_serialized_size_v2x_stack__msg__Area(
    &(ros_message->area), current_alignment);

  // Field name: sec_profile
  {
    size_t item_size = sizeof(ros_message->sec_profile);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: parser_result
  {
    size_t item_size = sizeof(ros_message->parser_result);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: verification_result
  {
    size_t item_size = sizeof(ros_message->verification_result);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: ssp_len
  {
    size_t item_size = sizeof(ros_message->ssp_len);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: aid
  {
    size_t item_size = sizeof(ros_message->aid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: ssp_bits
  {
    size_t array_size = 32;
    auto array_ptr = ros_message->ssp_bits;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: cert_id
  {
    size_t array_size = 32;
    auto array_ptr = ros_message->cert_id;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: length
  {
    size_t item_size = sizeof(ros_message->length);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_v2x_stack
size_t max_serialized_size_v2x_stack__msg__UDPDataIndHdr(
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

  // Field name: pkt_transport
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: traffic_class
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: max_pkt_life_time
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: dest_port
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Field name: src_port
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Field name: dest_info
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Field name: location
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_v2x_stack__msg__Location(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: area
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_v2x_stack__msg__Area(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: sec_profile
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: parser_result
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: verification_result
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: ssp_len
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: aid
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: ssp_bits
  {
    size_t array_size = 32;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: cert_id
  {
    size_t array_size = 32;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: length
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }


  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = v2x_stack__msg__UDPDataIndHdr;
    is_plain =
      (
      offsetof(DataType, length) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_v2x_stack
bool cdr_serialize_key_v2x_stack__msg__UDPDataIndHdr(
  const v2x_stack__msg__UDPDataIndHdr * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: btp_type
  {
    cdr << ros_message->btp_type;
  }

  // Field name: pkt_transport
  {
    cdr << ros_message->pkt_transport;
  }

  // Field name: traffic_class
  {
    cdr << ros_message->traffic_class;
  }

  // Field name: max_pkt_life_time
  {
    cdr << ros_message->max_pkt_life_time;
  }

  // Field name: dest_port
  {
    cdr << ros_message->dest_port;
  }

  // Field name: src_port
  {
    cdr << ros_message->src_port;
  }

  // Field name: dest_info
  {
    cdr << ros_message->dest_info;
  }

  // Field name: location
  {
    cdr_serialize_key_v2x_stack__msg__Location(
      &ros_message->location, cdr);
  }

  // Field name: area
  {
    cdr_serialize_key_v2x_stack__msg__Area(
      &ros_message->area, cdr);
  }

  // Field name: sec_profile
  {
    cdr << ros_message->sec_profile;
  }

  // Field name: parser_result
  {
    cdr << ros_message->parser_result;
  }

  // Field name: verification_result
  {
    cdr << ros_message->verification_result;
  }

  // Field name: ssp_len
  {
    cdr << ros_message->ssp_len;
  }

  // Field name: aid
  {
    cdr << ros_message->aid;
  }

  // Field name: ssp_bits
  {
    size_t size = 32;
    auto array_ptr = ros_message->ssp_bits;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: cert_id
  {
    size_t size = 32;
    auto array_ptr = ros_message->cert_id;
    cdr.serialize_array(array_ptr, size);
  }

  // Field name: length
  {
    cdr << ros_message->length;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_v2x_stack
size_t get_serialized_size_key_v2x_stack__msg__UDPDataIndHdr(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _UDPDataIndHdr__ros_msg_type * ros_message = static_cast<const _UDPDataIndHdr__ros_msg_type *>(untyped_ros_message);
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

  // Field name: pkt_transport
  {
    size_t item_size = sizeof(ros_message->pkt_transport);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: traffic_class
  {
    size_t item_size = sizeof(ros_message->traffic_class);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: max_pkt_life_time
  {
    size_t item_size = sizeof(ros_message->max_pkt_life_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: dest_port
  {
    size_t item_size = sizeof(ros_message->dest_port);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: src_port
  {
    size_t item_size = sizeof(ros_message->src_port);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: dest_info
  {
    size_t item_size = sizeof(ros_message->dest_info);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: location
  current_alignment += get_serialized_size_key_v2x_stack__msg__Location(
    &(ros_message->location), current_alignment);

  // Field name: area
  current_alignment += get_serialized_size_key_v2x_stack__msg__Area(
    &(ros_message->area), current_alignment);

  // Field name: sec_profile
  {
    size_t item_size = sizeof(ros_message->sec_profile);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: parser_result
  {
    size_t item_size = sizeof(ros_message->parser_result);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: verification_result
  {
    size_t item_size = sizeof(ros_message->verification_result);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: ssp_len
  {
    size_t item_size = sizeof(ros_message->ssp_len);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: aid
  {
    size_t item_size = sizeof(ros_message->aid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: ssp_bits
  {
    size_t array_size = 32;
    auto array_ptr = ros_message->ssp_bits;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: cert_id
  {
    size_t array_size = 32;
    auto array_ptr = ros_message->cert_id;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: length
  {
    size_t item_size = sizeof(ros_message->length);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_v2x_stack
size_t max_serialized_size_key_v2x_stack__msg__UDPDataIndHdr(
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

  // Field name: pkt_transport
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: traffic_class
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: max_pkt_life_time
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: dest_port
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Field name: src_port
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Field name: dest_info
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Field name: location
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_v2x_stack__msg__Location(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: area
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_v2x_stack__msg__Area(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: sec_profile
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: parser_result
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: verification_result
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: ssp_len
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: aid
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: ssp_bits
  {
    size_t array_size = 32;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: cert_id
  {
    size_t array_size = 32;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: length
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = v2x_stack__msg__UDPDataIndHdr;
    is_plain =
      (
      offsetof(DataType, length) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _UDPDataIndHdr__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const v2x_stack__msg__UDPDataIndHdr * ros_message = static_cast<const v2x_stack__msg__UDPDataIndHdr *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_v2x_stack__msg__UDPDataIndHdr(ros_message, cdr);
}

static bool _UDPDataIndHdr__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  v2x_stack__msg__UDPDataIndHdr * ros_message = static_cast<v2x_stack__msg__UDPDataIndHdr *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_v2x_stack__msg__UDPDataIndHdr(cdr, ros_message);
}

static uint32_t _UDPDataIndHdr__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_v2x_stack__msg__UDPDataIndHdr(
      untyped_ros_message, 0));
}

static size_t _UDPDataIndHdr__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_v2x_stack__msg__UDPDataIndHdr(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_UDPDataIndHdr = {
  "v2x_stack::msg",
  "UDPDataIndHdr",
  _UDPDataIndHdr__cdr_serialize,
  _UDPDataIndHdr__cdr_deserialize,
  _UDPDataIndHdr__get_serialized_size,
  _UDPDataIndHdr__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _UDPDataIndHdr__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_UDPDataIndHdr,
  get_message_typesupport_handle_function,
  &v2x_stack__msg__UDPDataIndHdr__get_type_hash,
  &v2x_stack__msg__UDPDataIndHdr__get_type_description,
  &v2x_stack__msg__UDPDataIndHdr__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, v2x_stack, msg, UDPDataIndHdr)() {
  return &_UDPDataIndHdr__type_support;
}

#if defined(__cplusplus)
}
#endif

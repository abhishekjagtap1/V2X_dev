// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from v2x_stack:msg/UDPDataIndHdr.idl
// generated code does not contain a copyright notice
#include "v2x_stack/msg/detail/udp_data_ind_hdr__rosidl_typesupport_fastrtps_cpp.hpp"
#include "v2x_stack/msg/detail/udp_data_ind_hdr__functions.h"
#include "v2x_stack/msg/detail/udp_data_ind_hdr__struct.hpp"

#include <cstddef>
#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace v2x_stack
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const v2x_stack::msg::Location &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  v2x_stack::msg::Location &);
size_t get_serialized_size(
  const v2x_stack::msg::Location &,
  size_t current_alignment);
size_t
max_serialized_size_Location(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
bool cdr_serialize_key(
  const v2x_stack::msg::Location &,
  eprosima::fastcdr::Cdr &);
size_t get_serialized_size_key(
  const v2x_stack::msg::Location &,
  size_t current_alignment);
size_t
max_serialized_size_key_Location(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace v2x_stack

namespace v2x_stack
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const v2x_stack::msg::Area &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  v2x_stack::msg::Area &);
size_t get_serialized_size(
  const v2x_stack::msg::Area &,
  size_t current_alignment);
size_t
max_serialized_size_Area(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
bool cdr_serialize_key(
  const v2x_stack::msg::Area &,
  eprosima::fastcdr::Cdr &);
size_t get_serialized_size_key(
  const v2x_stack::msg::Area &,
  size_t current_alignment);
size_t
max_serialized_size_key_Area(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace v2x_stack


namespace v2x_stack
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{


bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_v2x_stack
cdr_serialize(
  const v2x_stack::msg::UDPDataIndHdr & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: btp_type
  cdr << ros_message.btp_type;

  // Member: pkt_transport
  cdr << ros_message.pkt_transport;

  // Member: traffic_class
  cdr << ros_message.traffic_class;

  // Member: max_pkt_life_time
  cdr << ros_message.max_pkt_life_time;

  // Member: dest_port
  cdr << ros_message.dest_port;

  // Member: src_port
  cdr << ros_message.src_port;

  // Member: dest_info
  cdr << ros_message.dest_info;

  // Member: location
  v2x_stack::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.location,
    cdr);

  // Member: area
  v2x_stack::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.area,
    cdr);

  // Member: sec_profile
  cdr << ros_message.sec_profile;

  // Member: parser_result
  cdr << ros_message.parser_result;

  // Member: verification_result
  cdr << ros_message.verification_result;

  // Member: ssp_len
  cdr << ros_message.ssp_len;

  // Member: aid
  cdr << ros_message.aid;

  // Member: ssp_bits
  {
    cdr << ros_message.ssp_bits;
  }

  // Member: cert_id
  {
    cdr << ros_message.cert_id;
  }

  // Member: length
  cdr << ros_message.length;

  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_v2x_stack
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  v2x_stack::msg::UDPDataIndHdr & ros_message)
{
  // Member: btp_type
  cdr >> ros_message.btp_type;

  // Member: pkt_transport
  cdr >> ros_message.pkt_transport;

  // Member: traffic_class
  cdr >> ros_message.traffic_class;

  // Member: max_pkt_life_time
  cdr >> ros_message.max_pkt_life_time;

  // Member: dest_port
  cdr >> ros_message.dest_port;

  // Member: src_port
  cdr >> ros_message.src_port;

  // Member: dest_info
  cdr >> ros_message.dest_info;

  // Member: location
  v2x_stack::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.location);

  // Member: area
  v2x_stack::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.area);

  // Member: sec_profile
  cdr >> ros_message.sec_profile;

  // Member: parser_result
  cdr >> ros_message.parser_result;

  // Member: verification_result
  cdr >> ros_message.verification_result;

  // Member: ssp_len
  cdr >> ros_message.ssp_len;

  // Member: aid
  cdr >> ros_message.aid;

  // Member: ssp_bits
  {
    cdr >> ros_message.ssp_bits;
  }

  // Member: cert_id
  {
    cdr >> ros_message.cert_id;
  }

  // Member: length
  cdr >> ros_message.length;

  return true;
}


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_v2x_stack
get_serialized_size(
  const v2x_stack::msg::UDPDataIndHdr & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: btp_type
  {
    size_t item_size = sizeof(ros_message.btp_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: pkt_transport
  {
    size_t item_size = sizeof(ros_message.pkt_transport);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: traffic_class
  {
    size_t item_size = sizeof(ros_message.traffic_class);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: max_pkt_life_time
  {
    size_t item_size = sizeof(ros_message.max_pkt_life_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: dest_port
  {
    size_t item_size = sizeof(ros_message.dest_port);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: src_port
  {
    size_t item_size = sizeof(ros_message.src_port);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: dest_info
  {
    size_t item_size = sizeof(ros_message.dest_info);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: location
  current_alignment +=
    v2x_stack::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.location, current_alignment);

  // Member: area
  current_alignment +=
    v2x_stack::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.area, current_alignment);

  // Member: sec_profile
  {
    size_t item_size = sizeof(ros_message.sec_profile);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: parser_result
  {
    size_t item_size = sizeof(ros_message.parser_result);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: verification_result
  {
    size_t item_size = sizeof(ros_message.verification_result);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: ssp_len
  {
    size_t item_size = sizeof(ros_message.ssp_len);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: aid
  {
    size_t item_size = sizeof(ros_message.aid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: ssp_bits
  {
    size_t array_size = 32;
    size_t item_size = sizeof(ros_message.ssp_bits[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: cert_id
  {
    size_t array_size = 32;
    size_t item_size = sizeof(ros_message.cert_id[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: length
  {
    size_t item_size = sizeof(ros_message.length);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_v2x_stack
max_serialized_size_UDPDataIndHdr(
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

  // Member: btp_type
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: pkt_transport
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: traffic_class
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: max_pkt_life_time
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: dest_port
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // Member: src_port
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // Member: dest_info
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // Member: location
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        v2x_stack::msg::typesupport_fastrtps_cpp::max_serialized_size_Location(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // Member: area
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        v2x_stack::msg::typesupport_fastrtps_cpp::max_serialized_size_Area(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // Member: sec_profile
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: parser_result
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: verification_result
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: ssp_len
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: aid
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // Member: ssp_bits
  {
    size_t array_size = 32;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: cert_id
  {
    size_t array_size = 32;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // Member: length
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
    using DataType = v2x_stack::msg::UDPDataIndHdr;
    is_plain =
      (
      offsetof(DataType, length) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_v2x_stack
cdr_serialize_key(
  const v2x_stack::msg::UDPDataIndHdr & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: btp_type
  cdr << ros_message.btp_type;

  // Member: pkt_transport
  cdr << ros_message.pkt_transport;

  // Member: traffic_class
  cdr << ros_message.traffic_class;

  // Member: max_pkt_life_time
  cdr << ros_message.max_pkt_life_time;

  // Member: dest_port
  cdr << ros_message.dest_port;

  // Member: src_port
  cdr << ros_message.src_port;

  // Member: dest_info
  cdr << ros_message.dest_info;

  // Member: location
  v2x_stack::msg::typesupport_fastrtps_cpp::cdr_serialize_key(
    ros_message.location,
    cdr);

  // Member: area
  v2x_stack::msg::typesupport_fastrtps_cpp::cdr_serialize_key(
    ros_message.area,
    cdr);

  // Member: sec_profile
  cdr << ros_message.sec_profile;

  // Member: parser_result
  cdr << ros_message.parser_result;

  // Member: verification_result
  cdr << ros_message.verification_result;

  // Member: ssp_len
  cdr << ros_message.ssp_len;

  // Member: aid
  cdr << ros_message.aid;

  // Member: ssp_bits
  {
    cdr << ros_message.ssp_bits;
  }

  // Member: cert_id
  {
    cdr << ros_message.cert_id;
  }

  // Member: length
  cdr << ros_message.length;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_v2x_stack
get_serialized_size_key(
  const v2x_stack::msg::UDPDataIndHdr & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: btp_type
  {
    size_t item_size = sizeof(ros_message.btp_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: pkt_transport
  {
    size_t item_size = sizeof(ros_message.pkt_transport);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: traffic_class
  {
    size_t item_size = sizeof(ros_message.traffic_class);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: max_pkt_life_time
  {
    size_t item_size = sizeof(ros_message.max_pkt_life_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: dest_port
  {
    size_t item_size = sizeof(ros_message.dest_port);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: src_port
  {
    size_t item_size = sizeof(ros_message.src_port);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: dest_info
  {
    size_t item_size = sizeof(ros_message.dest_info);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: location
  current_alignment +=
    v2x_stack::msg::typesupport_fastrtps_cpp::get_serialized_size_key(
    ros_message.location, current_alignment);

  // Member: area
  current_alignment +=
    v2x_stack::msg::typesupport_fastrtps_cpp::get_serialized_size_key(
    ros_message.area, current_alignment);

  // Member: sec_profile
  {
    size_t item_size = sizeof(ros_message.sec_profile);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: parser_result
  {
    size_t item_size = sizeof(ros_message.parser_result);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: verification_result
  {
    size_t item_size = sizeof(ros_message.verification_result);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: ssp_len
  {
    size_t item_size = sizeof(ros_message.ssp_len);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: aid
  {
    size_t item_size = sizeof(ros_message.aid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: ssp_bits
  {
    size_t array_size = 32;
    size_t item_size = sizeof(ros_message.ssp_bits[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: cert_id
  {
    size_t array_size = 32;
    size_t item_size = sizeof(ros_message.cert_id[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Member: length
  {
    size_t item_size = sizeof(ros_message.length);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_v2x_stack
max_serialized_size_key_UDPDataIndHdr(
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

  // Member: btp_type
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: pkt_transport
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: traffic_class
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: max_pkt_life_time
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: dest_port
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: src_port
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: dest_info
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: location
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        v2x_stack::msg::typesupport_fastrtps_cpp::max_serialized_size_key_Location(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: area
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        v2x_stack::msg::typesupport_fastrtps_cpp::max_serialized_size_key_Area(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: sec_profile
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: parser_result
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: verification_result
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: ssp_len
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: aid
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: ssp_bits
  {
    size_t array_size = 32;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: cert_id
  {
    size_t array_size = 32;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: length
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
    using DataType = v2x_stack::msg::UDPDataIndHdr;
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
  auto typed_message =
    static_cast<const v2x_stack::msg::UDPDataIndHdr *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _UDPDataIndHdr__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<v2x_stack::msg::UDPDataIndHdr *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _UDPDataIndHdr__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const v2x_stack::msg::UDPDataIndHdr *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _UDPDataIndHdr__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_UDPDataIndHdr(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _UDPDataIndHdr__callbacks = {
  "v2x_stack::msg",
  "UDPDataIndHdr",
  _UDPDataIndHdr__cdr_serialize,
  _UDPDataIndHdr__cdr_deserialize,
  _UDPDataIndHdr__get_serialized_size,
  _UDPDataIndHdr__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _UDPDataIndHdr__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_UDPDataIndHdr__callbacks,
  get_message_typesupport_handle_function,
  &v2x_stack__msg__UDPDataIndHdr__get_type_hash,
  &v2x_stack__msg__UDPDataIndHdr__get_type_description,
  &v2x_stack__msg__UDPDataIndHdr__get_type_description_sources,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace v2x_stack

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_v2x_stack
const rosidl_message_type_support_t *
get_message_type_support_handle<v2x_stack::msg::UDPDataIndHdr>()
{
  return &v2x_stack::msg::typesupport_fastrtps_cpp::_UDPDataIndHdr__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, v2x_stack, msg, UDPDataIndHdr)() {
  return &v2x_stack::msg::typesupport_fastrtps_cpp::_UDPDataIndHdr__handle;
}

#ifdef __cplusplus
}
#endif

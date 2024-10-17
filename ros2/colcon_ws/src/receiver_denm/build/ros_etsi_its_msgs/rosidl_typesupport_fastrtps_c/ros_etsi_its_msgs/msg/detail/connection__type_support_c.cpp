// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from ros_etsi_its_msgs:msg/Connection.idl
// generated code does not contain a copyright notice
#include "ros_etsi_its_msgs/msg/detail/connection__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "ros_etsi_its_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "ros_etsi_its_msgs/msg/detail/connection__struct.h"
#include "ros_etsi_its_msgs/msg/detail/connection__functions.h"
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


// forward declare type support functions


using _Connection__ros_msg_type = ros_etsi_its_msgs__msg__Connection;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ros_etsi_its_msgs
bool cdr_serialize_ros_etsi_its_msgs__msg__Connection(
  const ros_etsi_its_msgs__msg__Connection * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: connecting_lane
  {
    cdr << ros_message->connecting_lane;
  }

  // Field name: remote_intersection
  {
    cdr << ros_message->remote_intersection;
  }

  // Field name: signal_group
  {
    cdr << ros_message->signal_group;
  }

  // Field name: connection_id
  {
    cdr << ros_message->connection_id;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ros_etsi_its_msgs
bool cdr_deserialize_ros_etsi_its_msgs__msg__Connection(
  eprosima::fastcdr::Cdr & cdr,
  ros_etsi_its_msgs__msg__Connection * ros_message)
{
  // Field name: connecting_lane
  {
    cdr >> ros_message->connecting_lane;
  }

  // Field name: remote_intersection
  {
    cdr >> ros_message->remote_intersection;
  }

  // Field name: signal_group
  {
    cdr >> ros_message->signal_group;
  }

  // Field name: connection_id
  {
    cdr >> ros_message->connection_id;
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ros_etsi_its_msgs
size_t get_serialized_size_ros_etsi_its_msgs__msg__Connection(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Connection__ros_msg_type * ros_message = static_cast<const _Connection__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: connecting_lane
  {
    size_t item_size = sizeof(ros_message->connecting_lane);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: remote_intersection
  {
    size_t item_size = sizeof(ros_message->remote_intersection);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: signal_group
  {
    size_t item_size = sizeof(ros_message->signal_group);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: connection_id
  {
    size_t item_size = sizeof(ros_message->connection_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ros_etsi_its_msgs
size_t max_serialized_size_ros_etsi_its_msgs__msg__Connection(
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

  // Field name: connecting_lane
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Field name: remote_intersection
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Field name: signal_group
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: connection_id
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
    using DataType = ros_etsi_its_msgs__msg__Connection;
    is_plain =
      (
      offsetof(DataType, connection_id) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ros_etsi_its_msgs
bool cdr_serialize_key_ros_etsi_its_msgs__msg__Connection(
  const ros_etsi_its_msgs__msg__Connection * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: connecting_lane
  {
    cdr << ros_message->connecting_lane;
  }

  // Field name: remote_intersection
  {
    cdr << ros_message->remote_intersection;
  }

  // Field name: signal_group
  {
    cdr << ros_message->signal_group;
  }

  // Field name: connection_id
  {
    cdr << ros_message->connection_id;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ros_etsi_its_msgs
size_t get_serialized_size_key_ros_etsi_its_msgs__msg__Connection(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Connection__ros_msg_type * ros_message = static_cast<const _Connection__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: connecting_lane
  {
    size_t item_size = sizeof(ros_message->connecting_lane);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: remote_intersection
  {
    size_t item_size = sizeof(ros_message->remote_intersection);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: signal_group
  {
    size_t item_size = sizeof(ros_message->signal_group);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: connection_id
  {
    size_t item_size = sizeof(ros_message->connection_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ros_etsi_its_msgs
size_t max_serialized_size_key_ros_etsi_its_msgs__msg__Connection(
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
  // Field name: connecting_lane
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Field name: remote_intersection
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Field name: signal_group
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: connection_id
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
    using DataType = ros_etsi_its_msgs__msg__Connection;
    is_plain =
      (
      offsetof(DataType, connection_id) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _Connection__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const ros_etsi_its_msgs__msg__Connection * ros_message = static_cast<const ros_etsi_its_msgs__msg__Connection *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_ros_etsi_its_msgs__msg__Connection(ros_message, cdr);
}

static bool _Connection__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  ros_etsi_its_msgs__msg__Connection * ros_message = static_cast<ros_etsi_its_msgs__msg__Connection *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_ros_etsi_its_msgs__msg__Connection(cdr, ros_message);
}

static uint32_t _Connection__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_ros_etsi_its_msgs__msg__Connection(
      untyped_ros_message, 0));
}

static size_t _Connection__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_ros_etsi_its_msgs__msg__Connection(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_Connection = {
  "ros_etsi_its_msgs::msg",
  "Connection",
  _Connection__cdr_serialize,
  _Connection__cdr_deserialize,
  _Connection__get_serialized_size,
  _Connection__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _Connection__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Connection,
  get_message_typesupport_handle_function,
  &ros_etsi_its_msgs__msg__Connection__get_type_hash,
  &ros_etsi_its_msgs__msg__Connection__get_type_description,
  &ros_etsi_its_msgs__msg__Connection__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ros_etsi_its_msgs, msg, Connection)() {
  return &_Connection__type_support;
}

#if defined(__cplusplus)
}
#endif

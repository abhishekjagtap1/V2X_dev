// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from ros_etsi_its_msgs:msg/ReferencePosition.idl
// generated code does not contain a copyright notice
#include "ros_etsi_its_msgs/msg/detail/reference_position__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "ros_etsi_its_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "ros_etsi_its_msgs/msg/detail/reference_position__struct.h"
#include "ros_etsi_its_msgs/msg/detail/reference_position__functions.h"
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

#include "ros_etsi_its_msgs/msg/detail/altitude__functions.h"  // altitude
#include "ros_etsi_its_msgs/msg/detail/position_confidence_ellipse__functions.h"  // position_confidence

// forward declare type support functions

bool cdr_serialize_ros_etsi_its_msgs__msg__Altitude(
  const ros_etsi_its_msgs__msg__Altitude * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_ros_etsi_its_msgs__msg__Altitude(
  eprosima::fastcdr::Cdr & cdr,
  ros_etsi_its_msgs__msg__Altitude * ros_message);

size_t get_serialized_size_ros_etsi_its_msgs__msg__Altitude(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_ros_etsi_its_msgs__msg__Altitude(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_ros_etsi_its_msgs__msg__Altitude(
  const ros_etsi_its_msgs__msg__Altitude * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_ros_etsi_its_msgs__msg__Altitude(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_ros_etsi_its_msgs__msg__Altitude(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ros_etsi_its_msgs, msg, Altitude)();

bool cdr_serialize_ros_etsi_its_msgs__msg__PositionConfidenceEllipse(
  const ros_etsi_its_msgs__msg__PositionConfidenceEllipse * ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool cdr_deserialize_ros_etsi_its_msgs__msg__PositionConfidenceEllipse(
  eprosima::fastcdr::Cdr & cdr,
  ros_etsi_its_msgs__msg__PositionConfidenceEllipse * ros_message);

size_t get_serialized_size_ros_etsi_its_msgs__msg__PositionConfidenceEllipse(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_ros_etsi_its_msgs__msg__PositionConfidenceEllipse(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

bool cdr_serialize_key_ros_etsi_its_msgs__msg__PositionConfidenceEllipse(
  const ros_etsi_its_msgs__msg__PositionConfidenceEllipse * ros_message,
  eprosima::fastcdr::Cdr & cdr);

size_t get_serialized_size_key_ros_etsi_its_msgs__msg__PositionConfidenceEllipse(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_key_ros_etsi_its_msgs__msg__PositionConfidenceEllipse(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ros_etsi_its_msgs, msg, PositionConfidenceEllipse)();


using _ReferencePosition__ros_msg_type = ros_etsi_its_msgs__msg__ReferencePosition;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ros_etsi_its_msgs
bool cdr_serialize_ros_etsi_its_msgs__msg__ReferencePosition(
  const ros_etsi_its_msgs__msg__ReferencePosition * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: latitude
  {
    cdr << ros_message->latitude;
  }

  // Field name: longitude
  {
    cdr << ros_message->longitude;
  }

  // Field name: position_confidence
  {
    cdr_serialize_ros_etsi_its_msgs__msg__PositionConfidenceEllipse(
      &ros_message->position_confidence, cdr);
  }

  // Field name: altitude
  {
    cdr_serialize_ros_etsi_its_msgs__msg__Altitude(
      &ros_message->altitude, cdr);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ros_etsi_its_msgs
bool cdr_deserialize_ros_etsi_its_msgs__msg__ReferencePosition(
  eprosima::fastcdr::Cdr & cdr,
  ros_etsi_its_msgs__msg__ReferencePosition * ros_message)
{
  // Field name: latitude
  {
    cdr >> ros_message->latitude;
  }

  // Field name: longitude
  {
    cdr >> ros_message->longitude;
  }

  // Field name: position_confidence
  {
    cdr_deserialize_ros_etsi_its_msgs__msg__PositionConfidenceEllipse(cdr, &ros_message->position_confidence);
  }

  // Field name: altitude
  {
    cdr_deserialize_ros_etsi_its_msgs__msg__Altitude(cdr, &ros_message->altitude);
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ros_etsi_its_msgs
size_t get_serialized_size_ros_etsi_its_msgs__msg__ReferencePosition(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ReferencePosition__ros_msg_type * ros_message = static_cast<const _ReferencePosition__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: latitude
  {
    size_t item_size = sizeof(ros_message->latitude);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: longitude
  {
    size_t item_size = sizeof(ros_message->longitude);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: position_confidence
  current_alignment += get_serialized_size_ros_etsi_its_msgs__msg__PositionConfidenceEllipse(
    &(ros_message->position_confidence), current_alignment);

  // Field name: altitude
  current_alignment += get_serialized_size_ros_etsi_its_msgs__msg__Altitude(
    &(ros_message->altitude), current_alignment);

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ros_etsi_its_msgs
size_t max_serialized_size_ros_etsi_its_msgs__msg__ReferencePosition(
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

  // Field name: latitude
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: longitude
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: position_confidence
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_ros_etsi_its_msgs__msg__PositionConfidenceEllipse(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: altitude
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_ros_etsi_its_msgs__msg__Altitude(
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
    using DataType = ros_etsi_its_msgs__msg__ReferencePosition;
    is_plain =
      (
      offsetof(DataType, altitude) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ros_etsi_its_msgs
bool cdr_serialize_key_ros_etsi_its_msgs__msg__ReferencePosition(
  const ros_etsi_its_msgs__msg__ReferencePosition * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: latitude
  {
    cdr << ros_message->latitude;
  }

  // Field name: longitude
  {
    cdr << ros_message->longitude;
  }

  // Field name: position_confidence
  {
    cdr_serialize_key_ros_etsi_its_msgs__msg__PositionConfidenceEllipse(
      &ros_message->position_confidence, cdr);
  }

  // Field name: altitude
  {
    cdr_serialize_key_ros_etsi_its_msgs__msg__Altitude(
      &ros_message->altitude, cdr);
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ros_etsi_its_msgs
size_t get_serialized_size_key_ros_etsi_its_msgs__msg__ReferencePosition(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ReferencePosition__ros_msg_type * ros_message = static_cast<const _ReferencePosition__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: latitude
  {
    size_t item_size = sizeof(ros_message->latitude);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: longitude
  {
    size_t item_size = sizeof(ros_message->longitude);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: position_confidence
  current_alignment += get_serialized_size_key_ros_etsi_its_msgs__msg__PositionConfidenceEllipse(
    &(ros_message->position_confidence), current_alignment);

  // Field name: altitude
  current_alignment += get_serialized_size_key_ros_etsi_its_msgs__msg__Altitude(
    &(ros_message->altitude), current_alignment);

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ros_etsi_its_msgs
size_t max_serialized_size_key_ros_etsi_its_msgs__msg__ReferencePosition(
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
  // Field name: latitude
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: longitude
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Field name: position_confidence
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_ros_etsi_its_msgs__msg__PositionConfidenceEllipse(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Field name: altitude
  {
    size_t array_size = 1;
    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_key_ros_etsi_its_msgs__msg__Altitude(
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
    using DataType = ros_etsi_its_msgs__msg__ReferencePosition;
    is_plain =
      (
      offsetof(DataType, altitude) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _ReferencePosition__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const ros_etsi_its_msgs__msg__ReferencePosition * ros_message = static_cast<const ros_etsi_its_msgs__msg__ReferencePosition *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_ros_etsi_its_msgs__msg__ReferencePosition(ros_message, cdr);
}

static bool _ReferencePosition__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  ros_etsi_its_msgs__msg__ReferencePosition * ros_message = static_cast<ros_etsi_its_msgs__msg__ReferencePosition *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_ros_etsi_its_msgs__msg__ReferencePosition(cdr, ros_message);
}

static uint32_t _ReferencePosition__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_ros_etsi_its_msgs__msg__ReferencePosition(
      untyped_ros_message, 0));
}

static size_t _ReferencePosition__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_ros_etsi_its_msgs__msg__ReferencePosition(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_ReferencePosition = {
  "ros_etsi_its_msgs::msg",
  "ReferencePosition",
  _ReferencePosition__cdr_serialize,
  _ReferencePosition__cdr_deserialize,
  _ReferencePosition__get_serialized_size,
  _ReferencePosition__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _ReferencePosition__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ReferencePosition,
  get_message_typesupport_handle_function,
  &ros_etsi_its_msgs__msg__ReferencePosition__get_type_hash,
  &ros_etsi_its_msgs__msg__ReferencePosition__get_type_description,
  &ros_etsi_its_msgs__msg__ReferencePosition__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ros_etsi_its_msgs, msg, ReferencePosition)() {
  return &_ReferencePosition__type_support;
}

#if defined(__cplusplus)
}
#endif

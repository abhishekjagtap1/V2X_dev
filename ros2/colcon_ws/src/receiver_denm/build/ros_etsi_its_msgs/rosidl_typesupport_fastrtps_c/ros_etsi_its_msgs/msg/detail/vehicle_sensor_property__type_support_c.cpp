// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from ros_etsi_its_msgs:msg/VehicleSensorProperty.idl
// generated code does not contain a copyright notice
#include "ros_etsi_its_msgs/msg/detail/vehicle_sensor_property__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <cstddef>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/serialization_helpers.hpp"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "ros_etsi_its_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "ros_etsi_its_msgs/msg/detail/vehicle_sensor_property__struct.h"
#include "ros_etsi_its_msgs/msg/detail/vehicle_sensor_property__functions.h"
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


using _VehicleSensorProperty__ros_msg_type = ros_etsi_its_msgs__msg__VehicleSensorProperty;


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ros_etsi_its_msgs
bool cdr_serialize_ros_etsi_its_msgs__msg__VehicleSensorProperty(
  const ros_etsi_its_msgs__msg__VehicleSensorProperty * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: range
  {
    cdr << ros_message->range;
  }

  // Field name: horizontal_opening_angle_start
  {
    cdr << ros_message->horizontal_opening_angle_start;
  }

  // Field name: horizontal_opening_angle_end
  {
    cdr << ros_message->horizontal_opening_angle_end;
  }

  // Field name: has_vertical_opening_angle_start
  {
    cdr << (ros_message->has_vertical_opening_angle_start ? true : false);
  }

  // Field name: vertical_opening_angle_start
  {
    cdr << ros_message->vertical_opening_angle_start;
  }

  // Field name: has_vertical_opening_angle_end
  {
    cdr << (ros_message->has_vertical_opening_angle_end ? true : false);
  }

  // Field name: vertical_opening_angle_end
  {
    cdr << ros_message->vertical_opening_angle_end;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ros_etsi_its_msgs
bool cdr_deserialize_ros_etsi_its_msgs__msg__VehicleSensorProperty(
  eprosima::fastcdr::Cdr & cdr,
  ros_etsi_its_msgs__msg__VehicleSensorProperty * ros_message)
{
  // Field name: range
  {
    cdr >> ros_message->range;
  }

  // Field name: horizontal_opening_angle_start
  {
    cdr >> ros_message->horizontal_opening_angle_start;
  }

  // Field name: horizontal_opening_angle_end
  {
    cdr >> ros_message->horizontal_opening_angle_end;
  }

  // Field name: has_vertical_opening_angle_start
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->has_vertical_opening_angle_start = tmp ? true : false;
  }

  // Field name: vertical_opening_angle_start
  {
    cdr >> ros_message->vertical_opening_angle_start;
  }

  // Field name: has_vertical_opening_angle_end
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->has_vertical_opening_angle_end = tmp ? true : false;
  }

  // Field name: vertical_opening_angle_end
  {
    cdr >> ros_message->vertical_opening_angle_end;
  }

  return true;
}  // NOLINT(readability/fn_size)


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ros_etsi_its_msgs
size_t get_serialized_size_ros_etsi_its_msgs__msg__VehicleSensorProperty(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _VehicleSensorProperty__ros_msg_type * ros_message = static_cast<const _VehicleSensorProperty__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: range
  {
    size_t item_size = sizeof(ros_message->range);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: horizontal_opening_angle_start
  {
    size_t item_size = sizeof(ros_message->horizontal_opening_angle_start);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: horizontal_opening_angle_end
  {
    size_t item_size = sizeof(ros_message->horizontal_opening_angle_end);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: has_vertical_opening_angle_start
  {
    size_t item_size = sizeof(ros_message->has_vertical_opening_angle_start);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: vertical_opening_angle_start
  {
    size_t item_size = sizeof(ros_message->vertical_opening_angle_start);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: has_vertical_opening_angle_end
  {
    size_t item_size = sizeof(ros_message->has_vertical_opening_angle_end);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: vertical_opening_angle_end
  {
    size_t item_size = sizeof(ros_message->vertical_opening_angle_end);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}


ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ros_etsi_its_msgs
size_t max_serialized_size_ros_etsi_its_msgs__msg__VehicleSensorProperty(
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

  // Field name: range
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: horizontal_opening_angle_start
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: horizontal_opening_angle_end
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: has_vertical_opening_angle_start
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: vertical_opening_angle_start
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: has_vertical_opening_angle_end
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: vertical_opening_angle_end
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
    using DataType = ros_etsi_its_msgs__msg__VehicleSensorProperty;
    is_plain =
      (
      offsetof(DataType, vertical_opening_angle_end) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ros_etsi_its_msgs
bool cdr_serialize_key_ros_etsi_its_msgs__msg__VehicleSensorProperty(
  const ros_etsi_its_msgs__msg__VehicleSensorProperty * ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Field name: range
  {
    cdr << ros_message->range;
  }

  // Field name: horizontal_opening_angle_start
  {
    cdr << ros_message->horizontal_opening_angle_start;
  }

  // Field name: horizontal_opening_angle_end
  {
    cdr << ros_message->horizontal_opening_angle_end;
  }

  // Field name: has_vertical_opening_angle_start
  {
    cdr << (ros_message->has_vertical_opening_angle_start ? true : false);
  }

  // Field name: vertical_opening_angle_start
  {
    cdr << ros_message->vertical_opening_angle_start;
  }

  // Field name: has_vertical_opening_angle_end
  {
    cdr << (ros_message->has_vertical_opening_angle_end ? true : false);
  }

  // Field name: vertical_opening_angle_end
  {
    cdr << ros_message->vertical_opening_angle_end;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ros_etsi_its_msgs
size_t get_serialized_size_key_ros_etsi_its_msgs__msg__VehicleSensorProperty(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _VehicleSensorProperty__ros_msg_type * ros_message = static_cast<const _VehicleSensorProperty__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;

  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Field name: range
  {
    size_t item_size = sizeof(ros_message->range);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: horizontal_opening_angle_start
  {
    size_t item_size = sizeof(ros_message->horizontal_opening_angle_start);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: horizontal_opening_angle_end
  {
    size_t item_size = sizeof(ros_message->horizontal_opening_angle_end);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: has_vertical_opening_angle_start
  {
    size_t item_size = sizeof(ros_message->has_vertical_opening_angle_start);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: vertical_opening_angle_start
  {
    size_t item_size = sizeof(ros_message->vertical_opening_angle_start);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: has_vertical_opening_angle_end
  {
    size_t item_size = sizeof(ros_message->has_vertical_opening_angle_end);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  // Field name: vertical_opening_angle_end
  {
    size_t item_size = sizeof(ros_message->vertical_opening_angle_end);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ros_etsi_its_msgs
size_t max_serialized_size_key_ros_etsi_its_msgs__msg__VehicleSensorProperty(
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
  // Field name: range
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: horizontal_opening_angle_start
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: horizontal_opening_angle_end
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: has_vertical_opening_angle_start
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: vertical_opening_angle_start
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Field name: has_vertical_opening_angle_end
  {
    size_t array_size = 1;
    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Field name: vertical_opening_angle_end
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
    using DataType = ros_etsi_its_msgs__msg__VehicleSensorProperty;
    is_plain =
      (
      offsetof(DataType, vertical_opening_angle_end) +
      last_member_size
      ) == ret_val;
  }
  return ret_val;
}


static bool _VehicleSensorProperty__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const ros_etsi_its_msgs__msg__VehicleSensorProperty * ros_message = static_cast<const ros_etsi_its_msgs__msg__VehicleSensorProperty *>(untyped_ros_message);
  (void)ros_message;
  return cdr_serialize_ros_etsi_its_msgs__msg__VehicleSensorProperty(ros_message, cdr);
}

static bool _VehicleSensorProperty__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  ros_etsi_its_msgs__msg__VehicleSensorProperty * ros_message = static_cast<ros_etsi_its_msgs__msg__VehicleSensorProperty *>(untyped_ros_message);
  (void)ros_message;
  return cdr_deserialize_ros_etsi_its_msgs__msg__VehicleSensorProperty(cdr, ros_message);
}

static uint32_t _VehicleSensorProperty__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_ros_etsi_its_msgs__msg__VehicleSensorProperty(
      untyped_ros_message, 0));
}

static size_t _VehicleSensorProperty__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_ros_etsi_its_msgs__msg__VehicleSensorProperty(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_VehicleSensorProperty = {
  "ros_etsi_its_msgs::msg",
  "VehicleSensorProperty",
  _VehicleSensorProperty__cdr_serialize,
  _VehicleSensorProperty__cdr_deserialize,
  _VehicleSensorProperty__get_serialized_size,
  _VehicleSensorProperty__max_serialized_size,
  nullptr
};

static rosidl_message_type_support_t _VehicleSensorProperty__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_VehicleSensorProperty,
  get_message_typesupport_handle_function,
  &ros_etsi_its_msgs__msg__VehicleSensorProperty__get_type_hash,
  &ros_etsi_its_msgs__msg__VehicleSensorProperty__get_type_description,
  &ros_etsi_its_msgs__msg__VehicleSensorProperty__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ros_etsi_its_msgs, msg, VehicleSensorProperty)() {
  return &_VehicleSensorProperty__type_support;
}

#if defined(__cplusplus)
}
#endif

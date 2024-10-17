// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from v2x_stack_btp:msg/BtpDataIndication.idl
// generated code does not contain a copyright notice
#include "v2x_stack_btp/msg/detail/btp_data_indication__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `destination`
#include "v2x_stack_btp/msg/detail/geo_net_destination__functions.h"
// Member `permissions`
// Member `data`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `traffic_class`
#include "v2x_stack_btp/msg/detail/traffic_class__functions.h"
// Member `remaining_packet_lifetime`
#include "builtin_interfaces/msg/detail/duration__functions.h"

bool
v2x_stack_btp__msg__BtpDataIndication__init(v2x_stack_btp__msg__BtpDataIndication * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    v2x_stack_btp__msg__BtpDataIndication__fini(msg);
    return false;
  }
  // btp_type
  // source_port
  // destination_port
  // destination_port_info
  // destination
  if (!v2x_stack_btp__msg__GeoNetDestination__init(&msg->destination)) {
    v2x_stack_btp__msg__BtpDataIndication__fini(msg);
    return false;
  }
  // its_aid
  // permissions
  if (!rosidl_runtime_c__uint8__Sequence__init(&msg->permissions, 0)) {
    v2x_stack_btp__msg__BtpDataIndication__fini(msg);
    return false;
  }
  // traffic_class
  if (!v2x_stack_btp__msg__TrafficClass__init(&msg->traffic_class)) {
    v2x_stack_btp__msg__BtpDataIndication__fini(msg);
    return false;
  }
  // remaining_packet_lifetime
  if (!builtin_interfaces__msg__Duration__init(&msg->remaining_packet_lifetime)) {
    v2x_stack_btp__msg__BtpDataIndication__fini(msg);
    return false;
  }
  // data
  if (!rosidl_runtime_c__uint8__Sequence__init(&msg->data, 0)) {
    v2x_stack_btp__msg__BtpDataIndication__fini(msg);
    return false;
  }
  return true;
}

void
v2x_stack_btp__msg__BtpDataIndication__fini(v2x_stack_btp__msg__BtpDataIndication * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // btp_type
  // source_port
  // destination_port
  // destination_port_info
  // destination
  v2x_stack_btp__msg__GeoNetDestination__fini(&msg->destination);
  // its_aid
  // permissions
  rosidl_runtime_c__uint8__Sequence__fini(&msg->permissions);
  // traffic_class
  v2x_stack_btp__msg__TrafficClass__fini(&msg->traffic_class);
  // remaining_packet_lifetime
  builtin_interfaces__msg__Duration__fini(&msg->remaining_packet_lifetime);
  // data
  rosidl_runtime_c__uint8__Sequence__fini(&msg->data);
}

bool
v2x_stack_btp__msg__BtpDataIndication__are_equal(const v2x_stack_btp__msg__BtpDataIndication * lhs, const v2x_stack_btp__msg__BtpDataIndication * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // btp_type
  if (lhs->btp_type != rhs->btp_type) {
    return false;
  }
  // source_port
  if (lhs->source_port != rhs->source_port) {
    return false;
  }
  // destination_port
  if (lhs->destination_port != rhs->destination_port) {
    return false;
  }
  // destination_port_info
  if (lhs->destination_port_info != rhs->destination_port_info) {
    return false;
  }
  // destination
  if (!v2x_stack_btp__msg__GeoNetDestination__are_equal(
      &(lhs->destination), &(rhs->destination)))
  {
    return false;
  }
  // its_aid
  if (lhs->its_aid != rhs->its_aid) {
    return false;
  }
  // permissions
  if (!rosidl_runtime_c__uint8__Sequence__are_equal(
      &(lhs->permissions), &(rhs->permissions)))
  {
    return false;
  }
  // traffic_class
  if (!v2x_stack_btp__msg__TrafficClass__are_equal(
      &(lhs->traffic_class), &(rhs->traffic_class)))
  {
    return false;
  }
  // remaining_packet_lifetime
  if (!builtin_interfaces__msg__Duration__are_equal(
      &(lhs->remaining_packet_lifetime), &(rhs->remaining_packet_lifetime)))
  {
    return false;
  }
  // data
  if (!rosidl_runtime_c__uint8__Sequence__are_equal(
      &(lhs->data), &(rhs->data)))
  {
    return false;
  }
  return true;
}

bool
v2x_stack_btp__msg__BtpDataIndication__copy(
  const v2x_stack_btp__msg__BtpDataIndication * input,
  v2x_stack_btp__msg__BtpDataIndication * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // btp_type
  output->btp_type = input->btp_type;
  // source_port
  output->source_port = input->source_port;
  // destination_port
  output->destination_port = input->destination_port;
  // destination_port_info
  output->destination_port_info = input->destination_port_info;
  // destination
  if (!v2x_stack_btp__msg__GeoNetDestination__copy(
      &(input->destination), &(output->destination)))
  {
    return false;
  }
  // its_aid
  output->its_aid = input->its_aid;
  // permissions
  if (!rosidl_runtime_c__uint8__Sequence__copy(
      &(input->permissions), &(output->permissions)))
  {
    return false;
  }
  // traffic_class
  if (!v2x_stack_btp__msg__TrafficClass__copy(
      &(input->traffic_class), &(output->traffic_class)))
  {
    return false;
  }
  // remaining_packet_lifetime
  if (!builtin_interfaces__msg__Duration__copy(
      &(input->remaining_packet_lifetime), &(output->remaining_packet_lifetime)))
  {
    return false;
  }
  // data
  if (!rosidl_runtime_c__uint8__Sequence__copy(
      &(input->data), &(output->data)))
  {
    return false;
  }
  return true;
}

v2x_stack_btp__msg__BtpDataIndication *
v2x_stack_btp__msg__BtpDataIndication__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_stack_btp__msg__BtpDataIndication * msg = (v2x_stack_btp__msg__BtpDataIndication *)allocator.allocate(sizeof(v2x_stack_btp__msg__BtpDataIndication), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2x_stack_btp__msg__BtpDataIndication));
  bool success = v2x_stack_btp__msg__BtpDataIndication__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
v2x_stack_btp__msg__BtpDataIndication__destroy(v2x_stack_btp__msg__BtpDataIndication * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    v2x_stack_btp__msg__BtpDataIndication__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
v2x_stack_btp__msg__BtpDataIndication__Sequence__init(v2x_stack_btp__msg__BtpDataIndication__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_stack_btp__msg__BtpDataIndication * data = NULL;

  if (size) {
    data = (v2x_stack_btp__msg__BtpDataIndication *)allocator.zero_allocate(size, sizeof(v2x_stack_btp__msg__BtpDataIndication), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2x_stack_btp__msg__BtpDataIndication__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2x_stack_btp__msg__BtpDataIndication__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
v2x_stack_btp__msg__BtpDataIndication__Sequence__fini(v2x_stack_btp__msg__BtpDataIndication__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      v2x_stack_btp__msg__BtpDataIndication__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

v2x_stack_btp__msg__BtpDataIndication__Sequence *
v2x_stack_btp__msg__BtpDataIndication__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_stack_btp__msg__BtpDataIndication__Sequence * array = (v2x_stack_btp__msg__BtpDataIndication__Sequence *)allocator.allocate(sizeof(v2x_stack_btp__msg__BtpDataIndication__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = v2x_stack_btp__msg__BtpDataIndication__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
v2x_stack_btp__msg__BtpDataIndication__Sequence__destroy(v2x_stack_btp__msg__BtpDataIndication__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    v2x_stack_btp__msg__BtpDataIndication__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
v2x_stack_btp__msg__BtpDataIndication__Sequence__are_equal(const v2x_stack_btp__msg__BtpDataIndication__Sequence * lhs, const v2x_stack_btp__msg__BtpDataIndication__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2x_stack_btp__msg__BtpDataIndication__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2x_stack_btp__msg__BtpDataIndication__Sequence__copy(
  const v2x_stack_btp__msg__BtpDataIndication__Sequence * input,
  v2x_stack_btp__msg__BtpDataIndication__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2x_stack_btp__msg__BtpDataIndication);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    v2x_stack_btp__msg__BtpDataIndication * data =
      (v2x_stack_btp__msg__BtpDataIndication *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2x_stack_btp__msg__BtpDataIndication__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          v2x_stack_btp__msg__BtpDataIndication__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!v2x_stack_btp__msg__BtpDataIndication__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from v2x_stack_btp:srv/BtpData.idl
// generated code does not contain a copyright notice
#include "v2x_stack_btp/srv/detail/btp_data__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `destination`
#include "v2x_stack_btp/msg/detail/geo_net_destination__functions.h"
// Member `traffic_class`
#include "v2x_stack_btp/msg/detail/traffic_class__functions.h"
// Member `lifetime`
// Member `repetition_interval`
// Member `repetition_duration`
#include "builtin_interfaces/msg/detail/duration__functions.h"

bool
v2x_stack_btp__srv__BtpData_Request__init(v2x_stack_btp__srv__BtpData_Request * msg)
{
  if (!msg) {
    return false;
  }
  // btp_type
  // source_port
  // destination_port
  // destination_port_info
  // transport_type
  // destination
  if (!v2x_stack_btp__msg__GeoNetDestination__init(&msg->destination)) {
    v2x_stack_btp__srv__BtpData_Request__fini(msg);
    return false;
  }
  // its_aid
  // hop_limit
  // traffic_class
  if (!v2x_stack_btp__msg__TrafficClass__init(&msg->traffic_class)) {
    v2x_stack_btp__srv__BtpData_Request__fini(msg);
    return false;
  }
  // lifetime
  if (!builtin_interfaces__msg__Duration__init(&msg->lifetime)) {
    v2x_stack_btp__srv__BtpData_Request__fini(msg);
    return false;
  }
  // repetition_interval
  if (!builtin_interfaces__msg__Duration__init(&msg->repetition_interval)) {
    v2x_stack_btp__srv__BtpData_Request__fini(msg);
    return false;
  }
  // repetition_duration
  if (!builtin_interfaces__msg__Duration__init(&msg->repetition_duration)) {
    v2x_stack_btp__srv__BtpData_Request__fini(msg);
    return false;
  }
  // data
  return true;
}

void
v2x_stack_btp__srv__BtpData_Request__fini(v2x_stack_btp__srv__BtpData_Request * msg)
{
  if (!msg) {
    return;
  }
  // btp_type
  // source_port
  // destination_port
  // destination_port_info
  // transport_type
  // destination
  v2x_stack_btp__msg__GeoNetDestination__fini(&msg->destination);
  // its_aid
  // hop_limit
  // traffic_class
  v2x_stack_btp__msg__TrafficClass__fini(&msg->traffic_class);
  // lifetime
  builtin_interfaces__msg__Duration__fini(&msg->lifetime);
  // repetition_interval
  builtin_interfaces__msg__Duration__fini(&msg->repetition_interval);
  // repetition_duration
  builtin_interfaces__msg__Duration__fini(&msg->repetition_duration);
  // data
}

bool
v2x_stack_btp__srv__BtpData_Request__are_equal(const v2x_stack_btp__srv__BtpData_Request * lhs, const v2x_stack_btp__srv__BtpData_Request * rhs)
{
  if (!lhs || !rhs) {
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
  // transport_type
  if (lhs->transport_type != rhs->transport_type) {
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
  // hop_limit
  if (lhs->hop_limit != rhs->hop_limit) {
    return false;
  }
  // traffic_class
  if (!v2x_stack_btp__msg__TrafficClass__are_equal(
      &(lhs->traffic_class), &(rhs->traffic_class)))
  {
    return false;
  }
  // lifetime
  if (!builtin_interfaces__msg__Duration__are_equal(
      &(lhs->lifetime), &(rhs->lifetime)))
  {
    return false;
  }
  // repetition_interval
  if (!builtin_interfaces__msg__Duration__are_equal(
      &(lhs->repetition_interval), &(rhs->repetition_interval)))
  {
    return false;
  }
  // repetition_duration
  if (!builtin_interfaces__msg__Duration__are_equal(
      &(lhs->repetition_duration), &(rhs->repetition_duration)))
  {
    return false;
  }
  // data
  for (size_t i = 0; i < 1; ++i) {
    if (lhs->data[i] != rhs->data[i]) {
      return false;
    }
  }
  return true;
}

bool
v2x_stack_btp__srv__BtpData_Request__copy(
  const v2x_stack_btp__srv__BtpData_Request * input,
  v2x_stack_btp__srv__BtpData_Request * output)
{
  if (!input || !output) {
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
  // transport_type
  output->transport_type = input->transport_type;
  // destination
  if (!v2x_stack_btp__msg__GeoNetDestination__copy(
      &(input->destination), &(output->destination)))
  {
    return false;
  }
  // its_aid
  output->its_aid = input->its_aid;
  // hop_limit
  output->hop_limit = input->hop_limit;
  // traffic_class
  if (!v2x_stack_btp__msg__TrafficClass__copy(
      &(input->traffic_class), &(output->traffic_class)))
  {
    return false;
  }
  // lifetime
  if (!builtin_interfaces__msg__Duration__copy(
      &(input->lifetime), &(output->lifetime)))
  {
    return false;
  }
  // repetition_interval
  if (!builtin_interfaces__msg__Duration__copy(
      &(input->repetition_interval), &(output->repetition_interval)))
  {
    return false;
  }
  // repetition_duration
  if (!builtin_interfaces__msg__Duration__copy(
      &(input->repetition_duration), &(output->repetition_duration)))
  {
    return false;
  }
  // data
  for (size_t i = 0; i < 1; ++i) {
    output->data[i] = input->data[i];
  }
  return true;
}

v2x_stack_btp__srv__BtpData_Request *
v2x_stack_btp__srv__BtpData_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_stack_btp__srv__BtpData_Request * msg = (v2x_stack_btp__srv__BtpData_Request *)allocator.allocate(sizeof(v2x_stack_btp__srv__BtpData_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2x_stack_btp__srv__BtpData_Request));
  bool success = v2x_stack_btp__srv__BtpData_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
v2x_stack_btp__srv__BtpData_Request__destroy(v2x_stack_btp__srv__BtpData_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    v2x_stack_btp__srv__BtpData_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
v2x_stack_btp__srv__BtpData_Request__Sequence__init(v2x_stack_btp__srv__BtpData_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_stack_btp__srv__BtpData_Request * data = NULL;

  if (size) {
    data = (v2x_stack_btp__srv__BtpData_Request *)allocator.zero_allocate(size, sizeof(v2x_stack_btp__srv__BtpData_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2x_stack_btp__srv__BtpData_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2x_stack_btp__srv__BtpData_Request__fini(&data[i - 1]);
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
v2x_stack_btp__srv__BtpData_Request__Sequence__fini(v2x_stack_btp__srv__BtpData_Request__Sequence * array)
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
      v2x_stack_btp__srv__BtpData_Request__fini(&array->data[i]);
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

v2x_stack_btp__srv__BtpData_Request__Sequence *
v2x_stack_btp__srv__BtpData_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_stack_btp__srv__BtpData_Request__Sequence * array = (v2x_stack_btp__srv__BtpData_Request__Sequence *)allocator.allocate(sizeof(v2x_stack_btp__srv__BtpData_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = v2x_stack_btp__srv__BtpData_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
v2x_stack_btp__srv__BtpData_Request__Sequence__destroy(v2x_stack_btp__srv__BtpData_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    v2x_stack_btp__srv__BtpData_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
v2x_stack_btp__srv__BtpData_Request__Sequence__are_equal(const v2x_stack_btp__srv__BtpData_Request__Sequence * lhs, const v2x_stack_btp__srv__BtpData_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2x_stack_btp__srv__BtpData_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2x_stack_btp__srv__BtpData_Request__Sequence__copy(
  const v2x_stack_btp__srv__BtpData_Request__Sequence * input,
  v2x_stack_btp__srv__BtpData_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2x_stack_btp__srv__BtpData_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    v2x_stack_btp__srv__BtpData_Request * data =
      (v2x_stack_btp__srv__BtpData_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2x_stack_btp__srv__BtpData_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          v2x_stack_btp__srv__BtpData_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!v2x_stack_btp__srv__BtpData_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
v2x_stack_btp__srv__BtpData_Response__init(v2x_stack_btp__srv__BtpData_Response * msg)
{
  if (!msg) {
    return false;
  }
  // confirm
  return true;
}

void
v2x_stack_btp__srv__BtpData_Response__fini(v2x_stack_btp__srv__BtpData_Response * msg)
{
  if (!msg) {
    return;
  }
  // confirm
}

bool
v2x_stack_btp__srv__BtpData_Response__are_equal(const v2x_stack_btp__srv__BtpData_Response * lhs, const v2x_stack_btp__srv__BtpData_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // confirm
  if (lhs->confirm != rhs->confirm) {
    return false;
  }
  return true;
}

bool
v2x_stack_btp__srv__BtpData_Response__copy(
  const v2x_stack_btp__srv__BtpData_Response * input,
  v2x_stack_btp__srv__BtpData_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // confirm
  output->confirm = input->confirm;
  return true;
}

v2x_stack_btp__srv__BtpData_Response *
v2x_stack_btp__srv__BtpData_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_stack_btp__srv__BtpData_Response * msg = (v2x_stack_btp__srv__BtpData_Response *)allocator.allocate(sizeof(v2x_stack_btp__srv__BtpData_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2x_stack_btp__srv__BtpData_Response));
  bool success = v2x_stack_btp__srv__BtpData_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
v2x_stack_btp__srv__BtpData_Response__destroy(v2x_stack_btp__srv__BtpData_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    v2x_stack_btp__srv__BtpData_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
v2x_stack_btp__srv__BtpData_Response__Sequence__init(v2x_stack_btp__srv__BtpData_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_stack_btp__srv__BtpData_Response * data = NULL;

  if (size) {
    data = (v2x_stack_btp__srv__BtpData_Response *)allocator.zero_allocate(size, sizeof(v2x_stack_btp__srv__BtpData_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2x_stack_btp__srv__BtpData_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2x_stack_btp__srv__BtpData_Response__fini(&data[i - 1]);
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
v2x_stack_btp__srv__BtpData_Response__Sequence__fini(v2x_stack_btp__srv__BtpData_Response__Sequence * array)
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
      v2x_stack_btp__srv__BtpData_Response__fini(&array->data[i]);
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

v2x_stack_btp__srv__BtpData_Response__Sequence *
v2x_stack_btp__srv__BtpData_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_stack_btp__srv__BtpData_Response__Sequence * array = (v2x_stack_btp__srv__BtpData_Response__Sequence *)allocator.allocate(sizeof(v2x_stack_btp__srv__BtpData_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = v2x_stack_btp__srv__BtpData_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
v2x_stack_btp__srv__BtpData_Response__Sequence__destroy(v2x_stack_btp__srv__BtpData_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    v2x_stack_btp__srv__BtpData_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
v2x_stack_btp__srv__BtpData_Response__Sequence__are_equal(const v2x_stack_btp__srv__BtpData_Response__Sequence * lhs, const v2x_stack_btp__srv__BtpData_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2x_stack_btp__srv__BtpData_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2x_stack_btp__srv__BtpData_Response__Sequence__copy(
  const v2x_stack_btp__srv__BtpData_Response__Sequence * input,
  v2x_stack_btp__srv__BtpData_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2x_stack_btp__srv__BtpData_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    v2x_stack_btp__srv__BtpData_Response * data =
      (v2x_stack_btp__srv__BtpData_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2x_stack_btp__srv__BtpData_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          v2x_stack_btp__srv__BtpData_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!v2x_stack_btp__srv__BtpData_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `info`
#include "service_msgs/msg/detail/service_event_info__functions.h"
// Member `request`
// Member `response`
// already included above
// #include "v2x_stack_btp/srv/detail/btp_data__functions.h"

bool
v2x_stack_btp__srv__BtpData_Event__init(v2x_stack_btp__srv__BtpData_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    v2x_stack_btp__srv__BtpData_Event__fini(msg);
    return false;
  }
  // request
  if (!v2x_stack_btp__srv__BtpData_Request__Sequence__init(&msg->request, 0)) {
    v2x_stack_btp__srv__BtpData_Event__fini(msg);
    return false;
  }
  // response
  if (!v2x_stack_btp__srv__BtpData_Response__Sequence__init(&msg->response, 0)) {
    v2x_stack_btp__srv__BtpData_Event__fini(msg);
    return false;
  }
  return true;
}

void
v2x_stack_btp__srv__BtpData_Event__fini(v2x_stack_btp__srv__BtpData_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  v2x_stack_btp__srv__BtpData_Request__Sequence__fini(&msg->request);
  // response
  v2x_stack_btp__srv__BtpData_Response__Sequence__fini(&msg->response);
}

bool
v2x_stack_btp__srv__BtpData_Event__are_equal(const v2x_stack_btp__srv__BtpData_Event * lhs, const v2x_stack_btp__srv__BtpData_Event * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__are_equal(
      &(lhs->info), &(rhs->info)))
  {
    return false;
  }
  // request
  if (!v2x_stack_btp__srv__BtpData_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!v2x_stack_btp__srv__BtpData_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
v2x_stack_btp__srv__BtpData_Event__copy(
  const v2x_stack_btp__srv__BtpData_Event * input,
  v2x_stack_btp__srv__BtpData_Event * output)
{
  if (!input || !output) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__copy(
      &(input->info), &(output->info)))
  {
    return false;
  }
  // request
  if (!v2x_stack_btp__srv__BtpData_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!v2x_stack_btp__srv__BtpData_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

v2x_stack_btp__srv__BtpData_Event *
v2x_stack_btp__srv__BtpData_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_stack_btp__srv__BtpData_Event * msg = (v2x_stack_btp__srv__BtpData_Event *)allocator.allocate(sizeof(v2x_stack_btp__srv__BtpData_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2x_stack_btp__srv__BtpData_Event));
  bool success = v2x_stack_btp__srv__BtpData_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
v2x_stack_btp__srv__BtpData_Event__destroy(v2x_stack_btp__srv__BtpData_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    v2x_stack_btp__srv__BtpData_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
v2x_stack_btp__srv__BtpData_Event__Sequence__init(v2x_stack_btp__srv__BtpData_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_stack_btp__srv__BtpData_Event * data = NULL;

  if (size) {
    data = (v2x_stack_btp__srv__BtpData_Event *)allocator.zero_allocate(size, sizeof(v2x_stack_btp__srv__BtpData_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2x_stack_btp__srv__BtpData_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2x_stack_btp__srv__BtpData_Event__fini(&data[i - 1]);
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
v2x_stack_btp__srv__BtpData_Event__Sequence__fini(v2x_stack_btp__srv__BtpData_Event__Sequence * array)
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
      v2x_stack_btp__srv__BtpData_Event__fini(&array->data[i]);
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

v2x_stack_btp__srv__BtpData_Event__Sequence *
v2x_stack_btp__srv__BtpData_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_stack_btp__srv__BtpData_Event__Sequence * array = (v2x_stack_btp__srv__BtpData_Event__Sequence *)allocator.allocate(sizeof(v2x_stack_btp__srv__BtpData_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = v2x_stack_btp__srv__BtpData_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
v2x_stack_btp__srv__BtpData_Event__Sequence__destroy(v2x_stack_btp__srv__BtpData_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    v2x_stack_btp__srv__BtpData_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
v2x_stack_btp__srv__BtpData_Event__Sequence__are_equal(const v2x_stack_btp__srv__BtpData_Event__Sequence * lhs, const v2x_stack_btp__srv__BtpData_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2x_stack_btp__srv__BtpData_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2x_stack_btp__srv__BtpData_Event__Sequence__copy(
  const v2x_stack_btp__srv__BtpData_Event__Sequence * input,
  v2x_stack_btp__srv__BtpData_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2x_stack_btp__srv__BtpData_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    v2x_stack_btp__srv__BtpData_Event * data =
      (v2x_stack_btp__srv__BtpData_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2x_stack_btp__srv__BtpData_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          v2x_stack_btp__srv__BtpData_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!v2x_stack_btp__srv__BtpData_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

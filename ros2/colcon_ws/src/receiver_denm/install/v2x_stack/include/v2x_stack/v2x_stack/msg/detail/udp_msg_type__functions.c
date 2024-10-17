// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from v2x_stack:msg/UDPMsgType.idl
// generated code does not contain a copyright notice
#include "v2x_stack/msg/detail/udp_msg_type__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
v2x_stack__msg__UDPMsgType__init(v2x_stack__msg__UDPMsgType * msg)
{
  if (!msg) {
    return false;
  }
  // version
  // msg_id
  // msg_length
  return true;
}

void
v2x_stack__msg__UDPMsgType__fini(v2x_stack__msg__UDPMsgType * msg)
{
  if (!msg) {
    return;
  }
  // version
  // msg_id
  // msg_length
}

bool
v2x_stack__msg__UDPMsgType__are_equal(const v2x_stack__msg__UDPMsgType * lhs, const v2x_stack__msg__UDPMsgType * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // version
  if (lhs->version != rhs->version) {
    return false;
  }
  // msg_id
  if (lhs->msg_id != rhs->msg_id) {
    return false;
  }
  // msg_length
  if (lhs->msg_length != rhs->msg_length) {
    return false;
  }
  return true;
}

bool
v2x_stack__msg__UDPMsgType__copy(
  const v2x_stack__msg__UDPMsgType * input,
  v2x_stack__msg__UDPMsgType * output)
{
  if (!input || !output) {
    return false;
  }
  // version
  output->version = input->version;
  // msg_id
  output->msg_id = input->msg_id;
  // msg_length
  output->msg_length = input->msg_length;
  return true;
}

v2x_stack__msg__UDPMsgType *
v2x_stack__msg__UDPMsgType__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_stack__msg__UDPMsgType * msg = (v2x_stack__msg__UDPMsgType *)allocator.allocate(sizeof(v2x_stack__msg__UDPMsgType), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2x_stack__msg__UDPMsgType));
  bool success = v2x_stack__msg__UDPMsgType__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
v2x_stack__msg__UDPMsgType__destroy(v2x_stack__msg__UDPMsgType * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    v2x_stack__msg__UDPMsgType__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
v2x_stack__msg__UDPMsgType__Sequence__init(v2x_stack__msg__UDPMsgType__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_stack__msg__UDPMsgType * data = NULL;

  if (size) {
    data = (v2x_stack__msg__UDPMsgType *)allocator.zero_allocate(size, sizeof(v2x_stack__msg__UDPMsgType), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2x_stack__msg__UDPMsgType__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2x_stack__msg__UDPMsgType__fini(&data[i - 1]);
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
v2x_stack__msg__UDPMsgType__Sequence__fini(v2x_stack__msg__UDPMsgType__Sequence * array)
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
      v2x_stack__msg__UDPMsgType__fini(&array->data[i]);
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

v2x_stack__msg__UDPMsgType__Sequence *
v2x_stack__msg__UDPMsgType__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_stack__msg__UDPMsgType__Sequence * array = (v2x_stack__msg__UDPMsgType__Sequence *)allocator.allocate(sizeof(v2x_stack__msg__UDPMsgType__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = v2x_stack__msg__UDPMsgType__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
v2x_stack__msg__UDPMsgType__Sequence__destroy(v2x_stack__msg__UDPMsgType__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    v2x_stack__msg__UDPMsgType__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
v2x_stack__msg__UDPMsgType__Sequence__are_equal(const v2x_stack__msg__UDPMsgType__Sequence * lhs, const v2x_stack__msg__UDPMsgType__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2x_stack__msg__UDPMsgType__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2x_stack__msg__UDPMsgType__Sequence__copy(
  const v2x_stack__msg__UDPMsgType__Sequence * input,
  v2x_stack__msg__UDPMsgType__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2x_stack__msg__UDPMsgType);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    v2x_stack__msg__UDPMsgType * data =
      (v2x_stack__msg__UDPMsgType *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2x_stack__msg__UDPMsgType__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          v2x_stack__msg__UDPMsgType__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!v2x_stack__msg__UDPMsgType__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

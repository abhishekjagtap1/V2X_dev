// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from v2x_stack:msg/CohdaInd.idl
// generated code does not contain a copyright notice
#include "v2x_stack/msg/detail/cohda_ind__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `type`
#include "v2x_stack/msg/detail/udp_msg_type__functions.h"
// Member `header`
#include "v2x_stack/msg/detail/udp_data_ind_hdr__functions.h"
// Member `payload`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
v2x_stack__msg__CohdaInd__init(v2x_stack__msg__CohdaInd * msg)
{
  if (!msg) {
    return false;
  }
  // type
  if (!v2x_stack__msg__UDPMsgType__init(&msg->type)) {
    v2x_stack__msg__CohdaInd__fini(msg);
    return false;
  }
  // header
  if (!v2x_stack__msg__UDPDataIndHdr__init(&msg->header)) {
    v2x_stack__msg__CohdaInd__fini(msg);
    return false;
  }
  // payload
  if (!rosidl_runtime_c__uint8__Sequence__init(&msg->payload, 0)) {
    v2x_stack__msg__CohdaInd__fini(msg);
    return false;
  }
  return true;
}

void
v2x_stack__msg__CohdaInd__fini(v2x_stack__msg__CohdaInd * msg)
{
  if (!msg) {
    return;
  }
  // type
  v2x_stack__msg__UDPMsgType__fini(&msg->type);
  // header
  v2x_stack__msg__UDPDataIndHdr__fini(&msg->header);
  // payload
  rosidl_runtime_c__uint8__Sequence__fini(&msg->payload);
}

bool
v2x_stack__msg__CohdaInd__are_equal(const v2x_stack__msg__CohdaInd * lhs, const v2x_stack__msg__CohdaInd * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // type
  if (!v2x_stack__msg__UDPMsgType__are_equal(
      &(lhs->type), &(rhs->type)))
  {
    return false;
  }
  // header
  if (!v2x_stack__msg__UDPDataIndHdr__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // payload
  if (!rosidl_runtime_c__uint8__Sequence__are_equal(
      &(lhs->payload), &(rhs->payload)))
  {
    return false;
  }
  return true;
}

bool
v2x_stack__msg__CohdaInd__copy(
  const v2x_stack__msg__CohdaInd * input,
  v2x_stack__msg__CohdaInd * output)
{
  if (!input || !output) {
    return false;
  }
  // type
  if (!v2x_stack__msg__UDPMsgType__copy(
      &(input->type), &(output->type)))
  {
    return false;
  }
  // header
  if (!v2x_stack__msg__UDPDataIndHdr__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // payload
  if (!rosidl_runtime_c__uint8__Sequence__copy(
      &(input->payload), &(output->payload)))
  {
    return false;
  }
  return true;
}

v2x_stack__msg__CohdaInd *
v2x_stack__msg__CohdaInd__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_stack__msg__CohdaInd * msg = (v2x_stack__msg__CohdaInd *)allocator.allocate(sizeof(v2x_stack__msg__CohdaInd), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2x_stack__msg__CohdaInd));
  bool success = v2x_stack__msg__CohdaInd__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
v2x_stack__msg__CohdaInd__destroy(v2x_stack__msg__CohdaInd * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    v2x_stack__msg__CohdaInd__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
v2x_stack__msg__CohdaInd__Sequence__init(v2x_stack__msg__CohdaInd__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_stack__msg__CohdaInd * data = NULL;

  if (size) {
    data = (v2x_stack__msg__CohdaInd *)allocator.zero_allocate(size, sizeof(v2x_stack__msg__CohdaInd), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2x_stack__msg__CohdaInd__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2x_stack__msg__CohdaInd__fini(&data[i - 1]);
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
v2x_stack__msg__CohdaInd__Sequence__fini(v2x_stack__msg__CohdaInd__Sequence * array)
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
      v2x_stack__msg__CohdaInd__fini(&array->data[i]);
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

v2x_stack__msg__CohdaInd__Sequence *
v2x_stack__msg__CohdaInd__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_stack__msg__CohdaInd__Sequence * array = (v2x_stack__msg__CohdaInd__Sequence *)allocator.allocate(sizeof(v2x_stack__msg__CohdaInd__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = v2x_stack__msg__CohdaInd__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
v2x_stack__msg__CohdaInd__Sequence__destroy(v2x_stack__msg__CohdaInd__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    v2x_stack__msg__CohdaInd__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
v2x_stack__msg__CohdaInd__Sequence__are_equal(const v2x_stack__msg__CohdaInd__Sequence * lhs, const v2x_stack__msg__CohdaInd__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2x_stack__msg__CohdaInd__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2x_stack__msg__CohdaInd__Sequence__copy(
  const v2x_stack__msg__CohdaInd__Sequence * input,
  v2x_stack__msg__CohdaInd__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2x_stack__msg__CohdaInd);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    v2x_stack__msg__CohdaInd * data =
      (v2x_stack__msg__CohdaInd *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2x_stack__msg__CohdaInd__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          v2x_stack__msg__CohdaInd__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!v2x_stack__msg__CohdaInd__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from v2x_stack:msg/UDPDataIndHdr.idl
// generated code does not contain a copyright notice
#include "v2x_stack/msg/detail/udp_data_ind_hdr__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `location`
#include "v2x_stack/msg/detail/location__functions.h"
// Member `area`
#include "v2x_stack/msg/detail/area__functions.h"

bool
v2x_stack__msg__UDPDataIndHdr__init(v2x_stack__msg__UDPDataIndHdr * msg)
{
  if (!msg) {
    return false;
  }
  // btp_type
  // pkt_transport
  // traffic_class
  // max_pkt_life_time
  // dest_port
  // src_port
  // dest_info
  // location
  if (!v2x_stack__msg__Location__init(&msg->location)) {
    v2x_stack__msg__UDPDataIndHdr__fini(msg);
    return false;
  }
  // area
  if (!v2x_stack__msg__Area__init(&msg->area)) {
    v2x_stack__msg__UDPDataIndHdr__fini(msg);
    return false;
  }
  // sec_profile
  // parser_result
  // verification_result
  // ssp_len
  // aid
  // ssp_bits
  // cert_id
  // length
  return true;
}

void
v2x_stack__msg__UDPDataIndHdr__fini(v2x_stack__msg__UDPDataIndHdr * msg)
{
  if (!msg) {
    return;
  }
  // btp_type
  // pkt_transport
  // traffic_class
  // max_pkt_life_time
  // dest_port
  // src_port
  // dest_info
  // location
  v2x_stack__msg__Location__fini(&msg->location);
  // area
  v2x_stack__msg__Area__fini(&msg->area);
  // sec_profile
  // parser_result
  // verification_result
  // ssp_len
  // aid
  // ssp_bits
  // cert_id
  // length
}

bool
v2x_stack__msg__UDPDataIndHdr__are_equal(const v2x_stack__msg__UDPDataIndHdr * lhs, const v2x_stack__msg__UDPDataIndHdr * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // btp_type
  if (lhs->btp_type != rhs->btp_type) {
    return false;
  }
  // pkt_transport
  if (lhs->pkt_transport != rhs->pkt_transport) {
    return false;
  }
  // traffic_class
  if (lhs->traffic_class != rhs->traffic_class) {
    return false;
  }
  // max_pkt_life_time
  if (lhs->max_pkt_life_time != rhs->max_pkt_life_time) {
    return false;
  }
  // dest_port
  if (lhs->dest_port != rhs->dest_port) {
    return false;
  }
  // src_port
  if (lhs->src_port != rhs->src_port) {
    return false;
  }
  // dest_info
  if (lhs->dest_info != rhs->dest_info) {
    return false;
  }
  // location
  if (!v2x_stack__msg__Location__are_equal(
      &(lhs->location), &(rhs->location)))
  {
    return false;
  }
  // area
  if (!v2x_stack__msg__Area__are_equal(
      &(lhs->area), &(rhs->area)))
  {
    return false;
  }
  // sec_profile
  if (lhs->sec_profile != rhs->sec_profile) {
    return false;
  }
  // parser_result
  if (lhs->parser_result != rhs->parser_result) {
    return false;
  }
  // verification_result
  if (lhs->verification_result != rhs->verification_result) {
    return false;
  }
  // ssp_len
  if (lhs->ssp_len != rhs->ssp_len) {
    return false;
  }
  // aid
  if (lhs->aid != rhs->aid) {
    return false;
  }
  // ssp_bits
  for (size_t i = 0; i < 32; ++i) {
    if (lhs->ssp_bits[i] != rhs->ssp_bits[i]) {
      return false;
    }
  }
  // cert_id
  for (size_t i = 0; i < 32; ++i) {
    if (lhs->cert_id[i] != rhs->cert_id[i]) {
      return false;
    }
  }
  // length
  if (lhs->length != rhs->length) {
    return false;
  }
  return true;
}

bool
v2x_stack__msg__UDPDataIndHdr__copy(
  const v2x_stack__msg__UDPDataIndHdr * input,
  v2x_stack__msg__UDPDataIndHdr * output)
{
  if (!input || !output) {
    return false;
  }
  // btp_type
  output->btp_type = input->btp_type;
  // pkt_transport
  output->pkt_transport = input->pkt_transport;
  // traffic_class
  output->traffic_class = input->traffic_class;
  // max_pkt_life_time
  output->max_pkt_life_time = input->max_pkt_life_time;
  // dest_port
  output->dest_port = input->dest_port;
  // src_port
  output->src_port = input->src_port;
  // dest_info
  output->dest_info = input->dest_info;
  // location
  if (!v2x_stack__msg__Location__copy(
      &(input->location), &(output->location)))
  {
    return false;
  }
  // area
  if (!v2x_stack__msg__Area__copy(
      &(input->area), &(output->area)))
  {
    return false;
  }
  // sec_profile
  output->sec_profile = input->sec_profile;
  // parser_result
  output->parser_result = input->parser_result;
  // verification_result
  output->verification_result = input->verification_result;
  // ssp_len
  output->ssp_len = input->ssp_len;
  // aid
  output->aid = input->aid;
  // ssp_bits
  for (size_t i = 0; i < 32; ++i) {
    output->ssp_bits[i] = input->ssp_bits[i];
  }
  // cert_id
  for (size_t i = 0; i < 32; ++i) {
    output->cert_id[i] = input->cert_id[i];
  }
  // length
  output->length = input->length;
  return true;
}

v2x_stack__msg__UDPDataIndHdr *
v2x_stack__msg__UDPDataIndHdr__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_stack__msg__UDPDataIndHdr * msg = (v2x_stack__msg__UDPDataIndHdr *)allocator.allocate(sizeof(v2x_stack__msg__UDPDataIndHdr), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(v2x_stack__msg__UDPDataIndHdr));
  bool success = v2x_stack__msg__UDPDataIndHdr__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
v2x_stack__msg__UDPDataIndHdr__destroy(v2x_stack__msg__UDPDataIndHdr * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    v2x_stack__msg__UDPDataIndHdr__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
v2x_stack__msg__UDPDataIndHdr__Sequence__init(v2x_stack__msg__UDPDataIndHdr__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_stack__msg__UDPDataIndHdr * data = NULL;

  if (size) {
    data = (v2x_stack__msg__UDPDataIndHdr *)allocator.zero_allocate(size, sizeof(v2x_stack__msg__UDPDataIndHdr), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = v2x_stack__msg__UDPDataIndHdr__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        v2x_stack__msg__UDPDataIndHdr__fini(&data[i - 1]);
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
v2x_stack__msg__UDPDataIndHdr__Sequence__fini(v2x_stack__msg__UDPDataIndHdr__Sequence * array)
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
      v2x_stack__msg__UDPDataIndHdr__fini(&array->data[i]);
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

v2x_stack__msg__UDPDataIndHdr__Sequence *
v2x_stack__msg__UDPDataIndHdr__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  v2x_stack__msg__UDPDataIndHdr__Sequence * array = (v2x_stack__msg__UDPDataIndHdr__Sequence *)allocator.allocate(sizeof(v2x_stack__msg__UDPDataIndHdr__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = v2x_stack__msg__UDPDataIndHdr__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
v2x_stack__msg__UDPDataIndHdr__Sequence__destroy(v2x_stack__msg__UDPDataIndHdr__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    v2x_stack__msg__UDPDataIndHdr__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
v2x_stack__msg__UDPDataIndHdr__Sequence__are_equal(const v2x_stack__msg__UDPDataIndHdr__Sequence * lhs, const v2x_stack__msg__UDPDataIndHdr__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!v2x_stack__msg__UDPDataIndHdr__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
v2x_stack__msg__UDPDataIndHdr__Sequence__copy(
  const v2x_stack__msg__UDPDataIndHdr__Sequence * input,
  v2x_stack__msg__UDPDataIndHdr__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(v2x_stack__msg__UDPDataIndHdr);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    v2x_stack__msg__UDPDataIndHdr * data =
      (v2x_stack__msg__UDPDataIndHdr *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!v2x_stack__msg__UDPDataIndHdr__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          v2x_stack__msg__UDPDataIndHdr__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!v2x_stack__msg__UDPDataIndHdr__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from v2x_stack_btp:srv/BtpData.idl
// generated code does not contain a copyright notice

#include "v2x_stack_btp/srv/detail/btp_data__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_v2x_stack_btp
const rosidl_type_hash_t *
v2x_stack_btp__srv__BtpData__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xfd, 0x47, 0xf3, 0xe0, 0x6c, 0x32, 0x17, 0x28,
      0xda, 0xff, 0x52, 0xcd, 0x23, 0xf0, 0x23, 0x09,
      0x1c, 0xde, 0x67, 0x90, 0xb2, 0xfb, 0x0e, 0x45,
      0x1a, 0x41, 0x5a, 0x75, 0x71, 0x0b, 0x7a, 0x58,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_v2x_stack_btp
const rosidl_type_hash_t *
v2x_stack_btp__srv__BtpData_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x7d, 0xa7, 0x45, 0xfd, 0x7b, 0xd0, 0xc4, 0x54,
      0x25, 0xe9, 0xd4, 0xbf, 0xa9, 0xe7, 0x37, 0x35,
      0x18, 0xbc, 0xd2, 0x85, 0x2d, 0x4f, 0x72, 0xe3,
      0x7f, 0x3c, 0xbc, 0xb7, 0x94, 0xde, 0x13, 0x1a,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_v2x_stack_btp
const rosidl_type_hash_t *
v2x_stack_btp__srv__BtpData_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x0a, 0xfe, 0x29, 0x5c, 0xcf, 0xfd, 0x38, 0x38,
      0x3e, 0x7f, 0xb1, 0x06, 0xbb, 0x04, 0x09, 0x66,
      0x97, 0xfb, 0xcc, 0xd3, 0xc9, 0x03, 0x4b, 0xa4,
      0xc2, 0x94, 0x2b, 0x1f, 0x69, 0xe7, 0xee, 0x14,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_v2x_stack_btp
const rosidl_type_hash_t *
v2x_stack_btp__srv__BtpData_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xc3, 0x5e, 0x00, 0x89, 0xcd, 0xbd, 0x32, 0x27,
      0x47, 0x02, 0xd8, 0xe3, 0x16, 0x68, 0x20, 0x79,
      0x61, 0x0f, 0xd4, 0x4a, 0x86, 0x66, 0x9e, 0xb7,
      0x59, 0x05, 0xcc, 0x29, 0x5c, 0x38, 0x14, 0x6a,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "v2x_stack_btp/msg/detail/geo_net_destination__functions.h"
#include "v2x_stack_btp/msg/detail/traffic_class__functions.h"
#include "service_msgs/msg/detail/service_event_info__functions.h"
#include "v2x_stack_btp/msg/detail/geo_net_area__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "builtin_interfaces/msg/detail/duration__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Duration__EXPECTED_HASH = {1, {
    0xe8, 0xd0, 0x09, 0xf6, 0x59, 0x81, 0x6f, 0x75,
    0x8b, 0x75, 0x33, 0x4e, 0xe1, 0xa9, 0xca, 0x5b,
    0x5c, 0x0b, 0x85, 0x98, 0x43, 0x26, 0x1f, 0x14,
    0xc7, 0xf9, 0x37, 0x34, 0x95, 0x99, 0xd9, 0x3b,
  }};
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t service_msgs__msg__ServiceEventInfo__EXPECTED_HASH = {1, {
    0x41, 0xbc, 0xbb, 0xe0, 0x7a, 0x75, 0xc9, 0xb5,
    0x2b, 0xc9, 0x6b, 0xfd, 0x5c, 0x24, 0xd7, 0xf0,
    0xfc, 0x0a, 0x08, 0xc0, 0xcb, 0x79, 0x21, 0xb3,
    0x37, 0x3c, 0x57, 0x32, 0x34, 0x5a, 0x6f, 0x45,
  }};
static const rosidl_type_hash_t v2x_stack_btp__msg__GeoNetArea__EXPECTED_HASH = {1, {
    0xae, 0x7e, 0xa6, 0x6f, 0xfd, 0x1e, 0x95, 0xf2,
    0x23, 0x53, 0x34, 0x9a, 0xf5, 0x61, 0x06, 0x2c,
    0x4b, 0x66, 0x7f, 0xe7, 0x82, 0xb5, 0x21, 0x85,
    0x6e, 0x79, 0x1e, 0x18, 0x02, 0x18, 0x87, 0x85,
  }};
static const rosidl_type_hash_t v2x_stack_btp__msg__GeoNetDestination__EXPECTED_HASH = {1, {
    0x4a, 0x0e, 0x00, 0x4f, 0x3d, 0x60, 0xe6, 0x10,
    0xf4, 0x83, 0xbc, 0x06, 0x13, 0x10, 0xd3, 0x75,
    0x6c, 0x83, 0xe1, 0x9a, 0x84, 0x64, 0x40, 0x9c,
    0xf6, 0xec, 0x59, 0x13, 0xf4, 0xe9, 0x8e, 0x05,
  }};
static const rosidl_type_hash_t v2x_stack_btp__msg__TrafficClass__EXPECTED_HASH = {1, {
    0xa9, 0xf8, 0xc9, 0xc6, 0x2a, 0xab, 0x66, 0x1b,
    0x16, 0xaf, 0x64, 0xfc, 0x08, 0x99, 0x85, 0xc6,
    0xa9, 0x15, 0xe2, 0xa2, 0xf0, 0x64, 0xe8, 0x32,
    0xf3, 0x1e, 0xe1, 0xa4, 0xc6, 0x65, 0x38, 0x07,
  }};
#endif

static char v2x_stack_btp__srv__BtpData__TYPE_NAME[] = "v2x_stack_btp/srv/BtpData";
static char builtin_interfaces__msg__Duration__TYPE_NAME[] = "builtin_interfaces/msg/Duration";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";
static char v2x_stack_btp__msg__GeoNetArea__TYPE_NAME[] = "v2x_stack_btp/msg/GeoNetArea";
static char v2x_stack_btp__msg__GeoNetDestination__TYPE_NAME[] = "v2x_stack_btp/msg/GeoNetDestination";
static char v2x_stack_btp__msg__TrafficClass__TYPE_NAME[] = "v2x_stack_btp/msg/TrafficClass";
static char v2x_stack_btp__srv__BtpData_Event__TYPE_NAME[] = "v2x_stack_btp/srv/BtpData_Event";
static char v2x_stack_btp__srv__BtpData_Request__TYPE_NAME[] = "v2x_stack_btp/srv/BtpData_Request";
static char v2x_stack_btp__srv__BtpData_Response__TYPE_NAME[] = "v2x_stack_btp/srv/BtpData_Response";

// Define type names, field names, and default values
static char v2x_stack_btp__srv__BtpData__FIELD_NAME__request_message[] = "request_message";
static char v2x_stack_btp__srv__BtpData__FIELD_NAME__response_message[] = "response_message";
static char v2x_stack_btp__srv__BtpData__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field v2x_stack_btp__srv__BtpData__FIELDS[] = {
  {
    {v2x_stack_btp__srv__BtpData__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {v2x_stack_btp__srv__BtpData_Request__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {v2x_stack_btp__srv__BtpData__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {v2x_stack_btp__srv__BtpData_Response__TYPE_NAME, 34, 34},
    },
    {NULL, 0, 0},
  },
  {
    {v2x_stack_btp__srv__BtpData__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {v2x_stack_btp__srv__BtpData_Event__TYPE_NAME, 31, 31},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription v2x_stack_btp__srv__BtpData__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Duration__TYPE_NAME, 31, 31},
    {NULL, 0, 0},
  },
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {v2x_stack_btp__msg__GeoNetArea__TYPE_NAME, 28, 28},
    {NULL, 0, 0},
  },
  {
    {v2x_stack_btp__msg__GeoNetDestination__TYPE_NAME, 35, 35},
    {NULL, 0, 0},
  },
  {
    {v2x_stack_btp__msg__TrafficClass__TYPE_NAME, 30, 30},
    {NULL, 0, 0},
  },
  {
    {v2x_stack_btp__srv__BtpData_Event__TYPE_NAME, 31, 31},
    {NULL, 0, 0},
  },
  {
    {v2x_stack_btp__srv__BtpData_Request__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {v2x_stack_btp__srv__BtpData_Response__TYPE_NAME, 34, 34},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
v2x_stack_btp__srv__BtpData__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {v2x_stack_btp__srv__BtpData__TYPE_NAME, 25, 25},
      {v2x_stack_btp__srv__BtpData__FIELDS, 3, 3},
    },
    {v2x_stack_btp__srv__BtpData__REFERENCED_TYPE_DESCRIPTIONS, 9, 9},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Duration__EXPECTED_HASH, builtin_interfaces__msg__Duration__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Duration__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&v2x_stack_btp__msg__GeoNetArea__EXPECTED_HASH, v2x_stack_btp__msg__GeoNetArea__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = v2x_stack_btp__msg__GeoNetArea__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&v2x_stack_btp__msg__GeoNetDestination__EXPECTED_HASH, v2x_stack_btp__msg__GeoNetDestination__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = v2x_stack_btp__msg__GeoNetDestination__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&v2x_stack_btp__msg__TrafficClass__EXPECTED_HASH, v2x_stack_btp__msg__TrafficClass__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[5].fields = v2x_stack_btp__msg__TrafficClass__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[6].fields = v2x_stack_btp__srv__BtpData_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[7].fields = v2x_stack_btp__srv__BtpData_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[8].fields = v2x_stack_btp__srv__BtpData_Response__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char v2x_stack_btp__srv__BtpData_Request__FIELD_NAME__btp_type[] = "btp_type";
static char v2x_stack_btp__srv__BtpData_Request__FIELD_NAME__source_port[] = "source_port";
static char v2x_stack_btp__srv__BtpData_Request__FIELD_NAME__destination_port[] = "destination_port";
static char v2x_stack_btp__srv__BtpData_Request__FIELD_NAME__destination_port_info[] = "destination_port_info";
static char v2x_stack_btp__srv__BtpData_Request__FIELD_NAME__transport_type[] = "transport_type";
static char v2x_stack_btp__srv__BtpData_Request__FIELD_NAME__destination[] = "destination";
static char v2x_stack_btp__srv__BtpData_Request__FIELD_NAME__its_aid[] = "its_aid";
static char v2x_stack_btp__srv__BtpData_Request__FIELD_NAME__hop_limit[] = "hop_limit";
static char v2x_stack_btp__srv__BtpData_Request__FIELD_NAME__traffic_class[] = "traffic_class";
static char v2x_stack_btp__srv__BtpData_Request__FIELD_NAME__lifetime[] = "lifetime";
static char v2x_stack_btp__srv__BtpData_Request__FIELD_NAME__repetition_interval[] = "repetition_interval";
static char v2x_stack_btp__srv__BtpData_Request__FIELD_NAME__repetition_duration[] = "repetition_duration";
static char v2x_stack_btp__srv__BtpData_Request__FIELD_NAME__data[] = "data";

static rosidl_runtime_c__type_description__Field v2x_stack_btp__srv__BtpData_Request__FIELDS[] = {
  {
    {v2x_stack_btp__srv__BtpData_Request__FIELD_NAME__btp_type, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {v2x_stack_btp__srv__BtpData_Request__FIELD_NAME__source_port, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {v2x_stack_btp__srv__BtpData_Request__FIELD_NAME__destination_port, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {v2x_stack_btp__srv__BtpData_Request__FIELD_NAME__destination_port_info, 21, 21},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT16,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {v2x_stack_btp__srv__BtpData_Request__FIELD_NAME__transport_type, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {v2x_stack_btp__srv__BtpData_Request__FIELD_NAME__destination, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {v2x_stack_btp__msg__GeoNetDestination__TYPE_NAME, 35, 35},
    },
    {NULL, 0, 0},
  },
  {
    {v2x_stack_btp__srv__BtpData_Request__FIELD_NAME__its_aid, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT32,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {v2x_stack_btp__srv__BtpData_Request__FIELD_NAME__hop_limit, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {v2x_stack_btp__srv__BtpData_Request__FIELD_NAME__traffic_class, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {v2x_stack_btp__msg__TrafficClass__TYPE_NAME, 30, 30},
    },
    {NULL, 0, 0},
  },
  {
    {v2x_stack_btp__srv__BtpData_Request__FIELD_NAME__lifetime, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {builtin_interfaces__msg__Duration__TYPE_NAME, 31, 31},
    },
    {NULL, 0, 0},
  },
  {
    {v2x_stack_btp__srv__BtpData_Request__FIELD_NAME__repetition_interval, 19, 19},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {builtin_interfaces__msg__Duration__TYPE_NAME, 31, 31},
    },
    {NULL, 0, 0},
  },
  {
    {v2x_stack_btp__srv__BtpData_Request__FIELD_NAME__repetition_duration, 19, 19},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {builtin_interfaces__msg__Duration__TYPE_NAME, 31, 31},
    },
    {NULL, 0, 0},
  },
  {
    {v2x_stack_btp__srv__BtpData_Request__FIELD_NAME__data, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8_ARRAY,
      1,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription v2x_stack_btp__srv__BtpData_Request__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Duration__TYPE_NAME, 31, 31},
    {NULL, 0, 0},
  },
  {
    {v2x_stack_btp__msg__GeoNetArea__TYPE_NAME, 28, 28},
    {NULL, 0, 0},
  },
  {
    {v2x_stack_btp__msg__GeoNetDestination__TYPE_NAME, 35, 35},
    {NULL, 0, 0},
  },
  {
    {v2x_stack_btp__msg__TrafficClass__TYPE_NAME, 30, 30},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
v2x_stack_btp__srv__BtpData_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {v2x_stack_btp__srv__BtpData_Request__TYPE_NAME, 33, 33},
      {v2x_stack_btp__srv__BtpData_Request__FIELDS, 13, 13},
    },
    {v2x_stack_btp__srv__BtpData_Request__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Duration__EXPECTED_HASH, builtin_interfaces__msg__Duration__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Duration__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&v2x_stack_btp__msg__GeoNetArea__EXPECTED_HASH, v2x_stack_btp__msg__GeoNetArea__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = v2x_stack_btp__msg__GeoNetArea__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&v2x_stack_btp__msg__GeoNetDestination__EXPECTED_HASH, v2x_stack_btp__msg__GeoNetDestination__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = v2x_stack_btp__msg__GeoNetDestination__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&v2x_stack_btp__msg__TrafficClass__EXPECTED_HASH, v2x_stack_btp__msg__TrafficClass__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = v2x_stack_btp__msg__TrafficClass__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char v2x_stack_btp__srv__BtpData_Response__FIELD_NAME__confirm[] = "confirm";

static rosidl_runtime_c__type_description__Field v2x_stack_btp__srv__BtpData_Response__FIELDS[] = {
  {
    {v2x_stack_btp__srv__BtpData_Response__FIELD_NAME__confirm, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
v2x_stack_btp__srv__BtpData_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {v2x_stack_btp__srv__BtpData_Response__TYPE_NAME, 34, 34},
      {v2x_stack_btp__srv__BtpData_Response__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char v2x_stack_btp__srv__BtpData_Event__FIELD_NAME__info[] = "info";
static char v2x_stack_btp__srv__BtpData_Event__FIELD_NAME__request[] = "request";
static char v2x_stack_btp__srv__BtpData_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field v2x_stack_btp__srv__BtpData_Event__FIELDS[] = {
  {
    {v2x_stack_btp__srv__BtpData_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {v2x_stack_btp__srv__BtpData_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {v2x_stack_btp__srv__BtpData_Request__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {v2x_stack_btp__srv__BtpData_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {v2x_stack_btp__srv__BtpData_Response__TYPE_NAME, 34, 34},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription v2x_stack_btp__srv__BtpData_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Duration__TYPE_NAME, 31, 31},
    {NULL, 0, 0},
  },
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {v2x_stack_btp__msg__GeoNetArea__TYPE_NAME, 28, 28},
    {NULL, 0, 0},
  },
  {
    {v2x_stack_btp__msg__GeoNetDestination__TYPE_NAME, 35, 35},
    {NULL, 0, 0},
  },
  {
    {v2x_stack_btp__msg__TrafficClass__TYPE_NAME, 30, 30},
    {NULL, 0, 0},
  },
  {
    {v2x_stack_btp__srv__BtpData_Request__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {v2x_stack_btp__srv__BtpData_Response__TYPE_NAME, 34, 34},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
v2x_stack_btp__srv__BtpData_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {v2x_stack_btp__srv__BtpData_Event__TYPE_NAME, 31, 31},
      {v2x_stack_btp__srv__BtpData_Event__FIELDS, 3, 3},
    },
    {v2x_stack_btp__srv__BtpData_Event__REFERENCED_TYPE_DESCRIPTIONS, 8, 8},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Duration__EXPECTED_HASH, builtin_interfaces__msg__Duration__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Duration__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&v2x_stack_btp__msg__GeoNetArea__EXPECTED_HASH, v2x_stack_btp__msg__GeoNetArea__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = v2x_stack_btp__msg__GeoNetArea__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&v2x_stack_btp__msg__GeoNetDestination__EXPECTED_HASH, v2x_stack_btp__msg__GeoNetDestination__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = v2x_stack_btp__msg__GeoNetDestination__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&v2x_stack_btp__msg__TrafficClass__EXPECTED_HASH, v2x_stack_btp__msg__TrafficClass__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[5].fields = v2x_stack_btp__msg__TrafficClass__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[6].fields = v2x_stack_btp__srv__BtpData_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[7].fields = v2x_stack_btp__srv__BtpData_Response__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "uint8 btp_type\n"
  "uint16 source_port\n"
  "uint16 destination_port\n"
  "uint16 destination_port_info\n"
  "\n"
  "uint8 transport_type\n"
  "GeoNetDestination destination\n"
  "uint32 its_aid\n"
  "uint8 hop_limit\n"
  "TrafficClass traffic_class\n"
  "\n"
  "builtin_interfaces/Duration lifetime\n"
  "builtin_interfaces/Duration repetition_interval\n"
  "builtin_interfaces/Duration repetition_duration\n"
  "\n"
  "uint8[1] data\n"
  "\n"
  "---\n"
  "\n"
  "uint8 confirm";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
v2x_stack_btp__srv__BtpData__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {v2x_stack_btp__srv__BtpData__TYPE_NAME, 25, 25},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 366, 366},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
v2x_stack_btp__srv__BtpData_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {v2x_stack_btp__srv__BtpData_Request__TYPE_NAME, 33, 33},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
v2x_stack_btp__srv__BtpData_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {v2x_stack_btp__srv__BtpData_Response__TYPE_NAME, 34, 34},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
v2x_stack_btp__srv__BtpData_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {v2x_stack_btp__srv__BtpData_Event__TYPE_NAME, 31, 31},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
v2x_stack_btp__srv__BtpData__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[10];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 10, 10};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *v2x_stack_btp__srv__BtpData__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Duration__get_individual_type_description_source(NULL);
    sources[2] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[3] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[4] = *v2x_stack_btp__msg__GeoNetArea__get_individual_type_description_source(NULL);
    sources[5] = *v2x_stack_btp__msg__GeoNetDestination__get_individual_type_description_source(NULL);
    sources[6] = *v2x_stack_btp__msg__TrafficClass__get_individual_type_description_source(NULL);
    sources[7] = *v2x_stack_btp__srv__BtpData_Event__get_individual_type_description_source(NULL);
    sources[8] = *v2x_stack_btp__srv__BtpData_Request__get_individual_type_description_source(NULL);
    sources[9] = *v2x_stack_btp__srv__BtpData_Response__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
v2x_stack_btp__srv__BtpData_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *v2x_stack_btp__srv__BtpData_Request__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Duration__get_individual_type_description_source(NULL);
    sources[2] = *v2x_stack_btp__msg__GeoNetArea__get_individual_type_description_source(NULL);
    sources[3] = *v2x_stack_btp__msg__GeoNetDestination__get_individual_type_description_source(NULL);
    sources[4] = *v2x_stack_btp__msg__TrafficClass__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
v2x_stack_btp__srv__BtpData_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *v2x_stack_btp__srv__BtpData_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
v2x_stack_btp__srv__BtpData_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[9];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 9, 9};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *v2x_stack_btp__srv__BtpData_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Duration__get_individual_type_description_source(NULL);
    sources[2] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[3] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[4] = *v2x_stack_btp__msg__GeoNetArea__get_individual_type_description_source(NULL);
    sources[5] = *v2x_stack_btp__msg__GeoNetDestination__get_individual_type_description_source(NULL);
    sources[6] = *v2x_stack_btp__msg__TrafficClass__get_individual_type_description_source(NULL);
    sources[7] = *v2x_stack_btp__srv__BtpData_Request__get_individual_type_description_source(NULL);
    sources[8] = *v2x_stack_btp__srv__BtpData_Response__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

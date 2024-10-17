// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from v2x_stack_btp:srv/BtpData.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "v2x_stack_btp/srv/detail/btp_data__functions.h"
#include "v2x_stack_btp/srv/detail/btp_data__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace v2x_stack_btp
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _BtpData_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _BtpData_Request_type_support_ids_t;

static const _BtpData_Request_type_support_ids_t _BtpData_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _BtpData_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _BtpData_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _BtpData_Request_type_support_symbol_names_t _BtpData_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, v2x_stack_btp, srv, BtpData_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, v2x_stack_btp, srv, BtpData_Request)),
  }
};

typedef struct _BtpData_Request_type_support_data_t
{
  void * data[2];
} _BtpData_Request_type_support_data_t;

static _BtpData_Request_type_support_data_t _BtpData_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _BtpData_Request_message_typesupport_map = {
  2,
  "v2x_stack_btp",
  &_BtpData_Request_message_typesupport_ids.typesupport_identifier[0],
  &_BtpData_Request_message_typesupport_symbol_names.symbol_name[0],
  &_BtpData_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t BtpData_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_BtpData_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &v2x_stack_btp__srv__BtpData_Request__get_type_hash,
  &v2x_stack_btp__srv__BtpData_Request__get_type_description,
  &v2x_stack_btp__srv__BtpData_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace v2x_stack_btp

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<v2x_stack_btp::srv::BtpData_Request>()
{
  return &::v2x_stack_btp::srv::rosidl_typesupport_cpp::BtpData_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, v2x_stack_btp, srv, BtpData_Request)() {
  return get_message_type_support_handle<v2x_stack_btp::srv::BtpData_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "v2x_stack_btp/srv/detail/btp_data__functions.h"
// already included above
// #include "v2x_stack_btp/srv/detail/btp_data__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace v2x_stack_btp
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _BtpData_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _BtpData_Response_type_support_ids_t;

static const _BtpData_Response_type_support_ids_t _BtpData_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _BtpData_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _BtpData_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _BtpData_Response_type_support_symbol_names_t _BtpData_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, v2x_stack_btp, srv, BtpData_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, v2x_stack_btp, srv, BtpData_Response)),
  }
};

typedef struct _BtpData_Response_type_support_data_t
{
  void * data[2];
} _BtpData_Response_type_support_data_t;

static _BtpData_Response_type_support_data_t _BtpData_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _BtpData_Response_message_typesupport_map = {
  2,
  "v2x_stack_btp",
  &_BtpData_Response_message_typesupport_ids.typesupport_identifier[0],
  &_BtpData_Response_message_typesupport_symbol_names.symbol_name[0],
  &_BtpData_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t BtpData_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_BtpData_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &v2x_stack_btp__srv__BtpData_Response__get_type_hash,
  &v2x_stack_btp__srv__BtpData_Response__get_type_description,
  &v2x_stack_btp__srv__BtpData_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace v2x_stack_btp

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<v2x_stack_btp::srv::BtpData_Response>()
{
  return &::v2x_stack_btp::srv::rosidl_typesupport_cpp::BtpData_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, v2x_stack_btp, srv, BtpData_Response)() {
  return get_message_type_support_handle<v2x_stack_btp::srv::BtpData_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "v2x_stack_btp/srv/detail/btp_data__functions.h"
// already included above
// #include "v2x_stack_btp/srv/detail/btp_data__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace v2x_stack_btp
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _BtpData_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _BtpData_Event_type_support_ids_t;

static const _BtpData_Event_type_support_ids_t _BtpData_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _BtpData_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _BtpData_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _BtpData_Event_type_support_symbol_names_t _BtpData_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, v2x_stack_btp, srv, BtpData_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, v2x_stack_btp, srv, BtpData_Event)),
  }
};

typedef struct _BtpData_Event_type_support_data_t
{
  void * data[2];
} _BtpData_Event_type_support_data_t;

static _BtpData_Event_type_support_data_t _BtpData_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _BtpData_Event_message_typesupport_map = {
  2,
  "v2x_stack_btp",
  &_BtpData_Event_message_typesupport_ids.typesupport_identifier[0],
  &_BtpData_Event_message_typesupport_symbol_names.symbol_name[0],
  &_BtpData_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t BtpData_Event_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_BtpData_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &v2x_stack_btp__srv__BtpData_Event__get_type_hash,
  &v2x_stack_btp__srv__BtpData_Event__get_type_description,
  &v2x_stack_btp__srv__BtpData_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace v2x_stack_btp

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<v2x_stack_btp::srv::BtpData_Event>()
{
  return &::v2x_stack_btp::srv::rosidl_typesupport_cpp::BtpData_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, v2x_stack_btp, srv, BtpData_Event)() {
  return get_message_type_support_handle<v2x_stack_btp::srv::BtpData_Event>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "v2x_stack_btp/srv/detail/btp_data__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace v2x_stack_btp
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _BtpData_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _BtpData_type_support_ids_t;

static const _BtpData_type_support_ids_t _BtpData_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _BtpData_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _BtpData_type_support_symbol_names_t;
#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _BtpData_type_support_symbol_names_t _BtpData_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, v2x_stack_btp, srv, BtpData)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, v2x_stack_btp, srv, BtpData)),
  }
};

typedef struct _BtpData_type_support_data_t
{
  void * data[2];
} _BtpData_type_support_data_t;

static _BtpData_type_support_data_t _BtpData_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _BtpData_service_typesupport_map = {
  2,
  "v2x_stack_btp",
  &_BtpData_service_typesupport_ids.typesupport_identifier[0],
  &_BtpData_service_typesupport_symbol_names.symbol_name[0],
  &_BtpData_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t BtpData_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_BtpData_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<v2x_stack_btp::srv::BtpData_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<v2x_stack_btp::srv::BtpData_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<v2x_stack_btp::srv::BtpData_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<v2x_stack_btp::srv::BtpData>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<v2x_stack_btp::srv::BtpData>,
  &v2x_stack_btp__srv__BtpData__get_type_hash,
  &v2x_stack_btp__srv__BtpData__get_type_description,
  &v2x_stack_btp__srv__BtpData__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace v2x_stack_btp

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<v2x_stack_btp::srv::BtpData>()
{
  return &::v2x_stack_btp::srv::rosidl_typesupport_cpp::BtpData_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, v2x_stack_btp, srv, BtpData)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<v2x_stack_btp::srv::BtpData>();
}

#ifdef __cplusplus
}
#endif

// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from v2x_stack_btp:srv/BtpData.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "v2x_stack_btp/srv/btp_data.hpp"


#ifndef V2X_STACK_BTP__SRV__DETAIL__BTP_DATA__TRAITS_HPP_
#define V2X_STACK_BTP__SRV__DETAIL__BTP_DATA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "v2x_stack_btp/srv/detail/btp_data__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'destination'
#include "v2x_stack_btp/msg/detail/geo_net_destination__traits.hpp"
// Member 'traffic_class'
#include "v2x_stack_btp/msg/detail/traffic_class__traits.hpp"
// Member 'lifetime'
// Member 'repetition_interval'
// Member 'repetition_duration'
#include "builtin_interfaces/msg/detail/duration__traits.hpp"

namespace v2x_stack_btp
{

namespace srv
{

inline void to_flow_style_yaml(
  const BtpData_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: btp_type
  {
    out << "btp_type: ";
    rosidl_generator_traits::value_to_yaml(msg.btp_type, out);
    out << ", ";
  }

  // member: source_port
  {
    out << "source_port: ";
    rosidl_generator_traits::value_to_yaml(msg.source_port, out);
    out << ", ";
  }

  // member: destination_port
  {
    out << "destination_port: ";
    rosidl_generator_traits::value_to_yaml(msg.destination_port, out);
    out << ", ";
  }

  // member: destination_port_info
  {
    out << "destination_port_info: ";
    rosidl_generator_traits::value_to_yaml(msg.destination_port_info, out);
    out << ", ";
  }

  // member: transport_type
  {
    out << "transport_type: ";
    rosidl_generator_traits::value_to_yaml(msg.transport_type, out);
    out << ", ";
  }

  // member: destination
  {
    out << "destination: ";
    to_flow_style_yaml(msg.destination, out);
    out << ", ";
  }

  // member: its_aid
  {
    out << "its_aid: ";
    rosidl_generator_traits::value_to_yaml(msg.its_aid, out);
    out << ", ";
  }

  // member: hop_limit
  {
    out << "hop_limit: ";
    rosidl_generator_traits::value_to_yaml(msg.hop_limit, out);
    out << ", ";
  }

  // member: traffic_class
  {
    out << "traffic_class: ";
    to_flow_style_yaml(msg.traffic_class, out);
    out << ", ";
  }

  // member: lifetime
  {
    out << "lifetime: ";
    to_flow_style_yaml(msg.lifetime, out);
    out << ", ";
  }

  // member: repetition_interval
  {
    out << "repetition_interval: ";
    to_flow_style_yaml(msg.repetition_interval, out);
    out << ", ";
  }

  // member: repetition_duration
  {
    out << "repetition_duration: ";
    to_flow_style_yaml(msg.repetition_duration, out);
    out << ", ";
  }

  // member: data
  {
    if (msg.data.size() == 0) {
      out << "data: []";
    } else {
      out << "data: [";
      size_t pending_items = msg.data.size();
      for (auto item : msg.data) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const BtpData_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: btp_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "btp_type: ";
    rosidl_generator_traits::value_to_yaml(msg.btp_type, out);
    out << "\n";
  }

  // member: source_port
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "source_port: ";
    rosidl_generator_traits::value_to_yaml(msg.source_port, out);
    out << "\n";
  }

  // member: destination_port
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "destination_port: ";
    rosidl_generator_traits::value_to_yaml(msg.destination_port, out);
    out << "\n";
  }

  // member: destination_port_info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "destination_port_info: ";
    rosidl_generator_traits::value_to_yaml(msg.destination_port_info, out);
    out << "\n";
  }

  // member: transport_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "transport_type: ";
    rosidl_generator_traits::value_to_yaml(msg.transport_type, out);
    out << "\n";
  }

  // member: destination
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "destination:\n";
    to_block_style_yaml(msg.destination, out, indentation + 2);
  }

  // member: its_aid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "its_aid: ";
    rosidl_generator_traits::value_to_yaml(msg.its_aid, out);
    out << "\n";
  }

  // member: hop_limit
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hop_limit: ";
    rosidl_generator_traits::value_to_yaml(msg.hop_limit, out);
    out << "\n";
  }

  // member: traffic_class
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "traffic_class:\n";
    to_block_style_yaml(msg.traffic_class, out, indentation + 2);
  }

  // member: lifetime
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lifetime:\n";
    to_block_style_yaml(msg.lifetime, out, indentation + 2);
  }

  // member: repetition_interval
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "repetition_interval:\n";
    to_block_style_yaml(msg.repetition_interval, out, indentation + 2);
  }

  // member: repetition_duration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "repetition_duration:\n";
    to_block_style_yaml(msg.repetition_duration, out, indentation + 2);
  }

  // member: data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.data.size() == 0) {
      out << "data: []\n";
    } else {
      out << "data:\n";
      for (auto item : msg.data) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const BtpData_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace v2x_stack_btp

namespace rosidl_generator_traits
{

[[deprecated("use v2x_stack_btp::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const v2x_stack_btp::srv::BtpData_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  v2x_stack_btp::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use v2x_stack_btp::srv::to_yaml() instead")]]
inline std::string to_yaml(const v2x_stack_btp::srv::BtpData_Request & msg)
{
  return v2x_stack_btp::srv::to_yaml(msg);
}

template<>
inline const char * data_type<v2x_stack_btp::srv::BtpData_Request>()
{
  return "v2x_stack_btp::srv::BtpData_Request";
}

template<>
inline const char * name<v2x_stack_btp::srv::BtpData_Request>()
{
  return "v2x_stack_btp/srv/BtpData_Request";
}

template<>
struct has_fixed_size<v2x_stack_btp::srv::BtpData_Request>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Duration>::value && has_fixed_size<v2x_stack_btp::msg::GeoNetDestination>::value && has_fixed_size<v2x_stack_btp::msg::TrafficClass>::value> {};

template<>
struct has_bounded_size<v2x_stack_btp::srv::BtpData_Request>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Duration>::value && has_bounded_size<v2x_stack_btp::msg::GeoNetDestination>::value && has_bounded_size<v2x_stack_btp::msg::TrafficClass>::value> {};

template<>
struct is_message<v2x_stack_btp::srv::BtpData_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace v2x_stack_btp
{

namespace srv
{

inline void to_flow_style_yaml(
  const BtpData_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: confirm
  {
    out << "confirm: ";
    rosidl_generator_traits::value_to_yaml(msg.confirm, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const BtpData_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: confirm
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "confirm: ";
    rosidl_generator_traits::value_to_yaml(msg.confirm, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const BtpData_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace v2x_stack_btp

namespace rosidl_generator_traits
{

[[deprecated("use v2x_stack_btp::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const v2x_stack_btp::srv::BtpData_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  v2x_stack_btp::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use v2x_stack_btp::srv::to_yaml() instead")]]
inline std::string to_yaml(const v2x_stack_btp::srv::BtpData_Response & msg)
{
  return v2x_stack_btp::srv::to_yaml(msg);
}

template<>
inline const char * data_type<v2x_stack_btp::srv::BtpData_Response>()
{
  return "v2x_stack_btp::srv::BtpData_Response";
}

template<>
inline const char * name<v2x_stack_btp::srv::BtpData_Response>()
{
  return "v2x_stack_btp/srv/BtpData_Response";
}

template<>
struct has_fixed_size<v2x_stack_btp::srv::BtpData_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<v2x_stack_btp::srv::BtpData_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<v2x_stack_btp::srv::BtpData_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__traits.hpp"

namespace v2x_stack_btp
{

namespace srv
{

inline void to_flow_style_yaml(
  const BtpData_Event & msg,
  std::ostream & out)
{
  out << "{";
  // member: info
  {
    out << "info: ";
    to_flow_style_yaml(msg.info, out);
    out << ", ";
  }

  // member: request
  {
    if (msg.request.size() == 0) {
      out << "request: []";
    } else {
      out << "request: [";
      size_t pending_items = msg.request.size();
      for (auto item : msg.request) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: response
  {
    if (msg.response.size() == 0) {
      out << "response: []";
    } else {
      out << "response: [";
      size_t pending_items = msg.response.size();
      for (auto item : msg.response) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const BtpData_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: info
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "info:\n";
    to_block_style_yaml(msg.info, out, indentation + 2);
  }

  // member: request
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.request.size() == 0) {
      out << "request: []\n";
    } else {
      out << "request:\n";
      for (auto item : msg.request) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: response
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.response.size() == 0) {
      out << "response: []\n";
    } else {
      out << "response:\n";
      for (auto item : msg.response) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const BtpData_Event & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace v2x_stack_btp

namespace rosidl_generator_traits
{

[[deprecated("use v2x_stack_btp::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const v2x_stack_btp::srv::BtpData_Event & msg,
  std::ostream & out, size_t indentation = 0)
{
  v2x_stack_btp::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use v2x_stack_btp::srv::to_yaml() instead")]]
inline std::string to_yaml(const v2x_stack_btp::srv::BtpData_Event & msg)
{
  return v2x_stack_btp::srv::to_yaml(msg);
}

template<>
inline const char * data_type<v2x_stack_btp::srv::BtpData_Event>()
{
  return "v2x_stack_btp::srv::BtpData_Event";
}

template<>
inline const char * name<v2x_stack_btp::srv::BtpData_Event>()
{
  return "v2x_stack_btp/srv/BtpData_Event";
}

template<>
struct has_fixed_size<v2x_stack_btp::srv::BtpData_Event>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<v2x_stack_btp::srv::BtpData_Event>
  : std::integral_constant<bool, has_bounded_size<service_msgs::msg::ServiceEventInfo>::value && has_bounded_size<v2x_stack_btp::srv::BtpData_Request>::value && has_bounded_size<v2x_stack_btp::srv::BtpData_Response>::value> {};

template<>
struct is_message<v2x_stack_btp::srv::BtpData_Event>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<v2x_stack_btp::srv::BtpData>()
{
  return "v2x_stack_btp::srv::BtpData";
}

template<>
inline const char * name<v2x_stack_btp::srv::BtpData>()
{
  return "v2x_stack_btp/srv/BtpData";
}

template<>
struct has_fixed_size<v2x_stack_btp::srv::BtpData>
  : std::integral_constant<
    bool,
    has_fixed_size<v2x_stack_btp::srv::BtpData_Request>::value &&
    has_fixed_size<v2x_stack_btp::srv::BtpData_Response>::value
  >
{
};

template<>
struct has_bounded_size<v2x_stack_btp::srv::BtpData>
  : std::integral_constant<
    bool,
    has_bounded_size<v2x_stack_btp::srv::BtpData_Request>::value &&
    has_bounded_size<v2x_stack_btp::srv::BtpData_Response>::value
  >
{
};

template<>
struct is_service<v2x_stack_btp::srv::BtpData>
  : std::true_type
{
};

template<>
struct is_service_request<v2x_stack_btp::srv::BtpData_Request>
  : std::true_type
{
};

template<>
struct is_service_response<v2x_stack_btp::srv::BtpData_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // V2X_STACK_BTP__SRV__DETAIL__BTP_DATA__TRAITS_HPP_

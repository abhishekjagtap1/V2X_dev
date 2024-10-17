// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from v2x_stack_btp:msg/BtpDataIndication.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "v2x_stack_btp/msg/btp_data_indication.hpp"


#ifndef V2X_STACK_BTP__MSG__DETAIL__BTP_DATA_INDICATION__TRAITS_HPP_
#define V2X_STACK_BTP__MSG__DETAIL__BTP_DATA_INDICATION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "v2x_stack_btp/msg/detail/btp_data_indication__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'destination'
#include "v2x_stack_btp/msg/detail/geo_net_destination__traits.hpp"
// Member 'traffic_class'
#include "v2x_stack_btp/msg/detail/traffic_class__traits.hpp"
// Member 'remaining_packet_lifetime'
#include "builtin_interfaces/msg/detail/duration__traits.hpp"

namespace v2x_stack_btp
{

namespace msg
{

inline void to_flow_style_yaml(
  const BtpDataIndication & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

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

  // member: permissions
  {
    if (msg.permissions.size() == 0) {
      out << "permissions: []";
    } else {
      out << "permissions: [";
      size_t pending_items = msg.permissions.size();
      for (auto item : msg.permissions) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: traffic_class
  {
    out << "traffic_class: ";
    to_flow_style_yaml(msg.traffic_class, out);
    out << ", ";
  }

  // member: remaining_packet_lifetime
  {
    out << "remaining_packet_lifetime: ";
    to_flow_style_yaml(msg.remaining_packet_lifetime, out);
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
  const BtpDataIndication & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

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

  // member: permissions
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.permissions.size() == 0) {
      out << "permissions: []\n";
    } else {
      out << "permissions:\n";
      for (auto item : msg.permissions) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: traffic_class
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "traffic_class:\n";
    to_block_style_yaml(msg.traffic_class, out, indentation + 2);
  }

  // member: remaining_packet_lifetime
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "remaining_packet_lifetime:\n";
    to_block_style_yaml(msg.remaining_packet_lifetime, out, indentation + 2);
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

inline std::string to_yaml(const BtpDataIndication & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace v2x_stack_btp

namespace rosidl_generator_traits
{

[[deprecated("use v2x_stack_btp::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const v2x_stack_btp::msg::BtpDataIndication & msg,
  std::ostream & out, size_t indentation = 0)
{
  v2x_stack_btp::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use v2x_stack_btp::msg::to_yaml() instead")]]
inline std::string to_yaml(const v2x_stack_btp::msg::BtpDataIndication & msg)
{
  return v2x_stack_btp::msg::to_yaml(msg);
}

template<>
inline const char * data_type<v2x_stack_btp::msg::BtpDataIndication>()
{
  return "v2x_stack_btp::msg::BtpDataIndication";
}

template<>
inline const char * name<v2x_stack_btp::msg::BtpDataIndication>()
{
  return "v2x_stack_btp/msg/BtpDataIndication";
}

template<>
struct has_fixed_size<v2x_stack_btp::msg::BtpDataIndication>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<v2x_stack_btp::msg::BtpDataIndication>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<v2x_stack_btp::msg::BtpDataIndication>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // V2X_STACK_BTP__MSG__DETAIL__BTP_DATA_INDICATION__TRAITS_HPP_

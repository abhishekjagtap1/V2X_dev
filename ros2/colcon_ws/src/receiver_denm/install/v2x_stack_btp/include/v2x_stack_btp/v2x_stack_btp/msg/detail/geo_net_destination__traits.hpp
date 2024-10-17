// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from v2x_stack_btp:msg/GeoNetDestination.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "v2x_stack_btp/msg/geo_net_destination.hpp"


#ifndef V2X_STACK_BTP__MSG__DETAIL__GEO_NET_DESTINATION__TRAITS_HPP_
#define V2X_STACK_BTP__MSG__DETAIL__GEO_NET_DESTINATION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "v2x_stack_btp/msg/detail/geo_net_destination__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'area'
#include "v2x_stack_btp/msg/detail/geo_net_area__traits.hpp"

namespace v2x_stack_btp
{

namespace msg
{

inline void to_flow_style_yaml(
  const GeoNetDestination & msg,
  std::ostream & out)
{
  out << "{";
  // member: type
  {
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << ", ";
  }

  // member: address
  {
    if (msg.address.size() == 0) {
      out << "address: []";
    } else {
      out << "address: [";
      size_t pending_items = msg.address.size();
      for (auto item : msg.address) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: area
  {
    out << "area: ";
    to_flow_style_yaml(msg.area, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GeoNetDestination & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << "\n";
  }

  // member: address
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.address.size() == 0) {
      out << "address: []\n";
    } else {
      out << "address:\n";
      for (auto item : msg.address) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: area
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "area:\n";
    to_block_style_yaml(msg.area, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GeoNetDestination & msg, bool use_flow_style = false)
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
  const v2x_stack_btp::msg::GeoNetDestination & msg,
  std::ostream & out, size_t indentation = 0)
{
  v2x_stack_btp::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use v2x_stack_btp::msg::to_yaml() instead")]]
inline std::string to_yaml(const v2x_stack_btp::msg::GeoNetDestination & msg)
{
  return v2x_stack_btp::msg::to_yaml(msg);
}

template<>
inline const char * data_type<v2x_stack_btp::msg::GeoNetDestination>()
{
  return "v2x_stack_btp::msg::GeoNetDestination";
}

template<>
inline const char * name<v2x_stack_btp::msg::GeoNetDestination>()
{
  return "v2x_stack_btp/msg/GeoNetDestination";
}

template<>
struct has_fixed_size<v2x_stack_btp::msg::GeoNetDestination>
  : std::integral_constant<bool, has_fixed_size<v2x_stack_btp::msg::GeoNetArea>::value> {};

template<>
struct has_bounded_size<v2x_stack_btp::msg::GeoNetDestination>
  : std::integral_constant<bool, has_bounded_size<v2x_stack_btp::msg::GeoNetArea>::value> {};

template<>
struct is_message<v2x_stack_btp::msg::GeoNetDestination>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // V2X_STACK_BTP__MSG__DETAIL__GEO_NET_DESTINATION__TRAITS_HPP_

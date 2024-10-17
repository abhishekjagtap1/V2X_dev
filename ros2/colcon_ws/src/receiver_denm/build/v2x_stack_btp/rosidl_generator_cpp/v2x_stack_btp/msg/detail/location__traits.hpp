// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from v2x_stack_btp:msg/Location.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "v2x_stack_btp/msg/location.hpp"


#ifndef V2X_STACK_BTP__MSG__DETAIL__LOCATION__TRAITS_HPP_
#define V2X_STACK_BTP__MSG__DETAIL__LOCATION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "v2x_stack_btp/msg/detail/location__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace v2x_stack_btp
{

namespace msg
{

inline void to_flow_style_yaml(
  const Location & msg,
  std::ostream & out)
{
  out << "{";
  // member: destination
  {
    out << "destination: ";
    rosidl_generator_traits::value_to_yaml(msg.destination, out);
    out << ", ";
  }

  // member: lat
  {
    out << "lat: ";
    rosidl_generator_traits::value_to_yaml(msg.lat, out);
    out << ", ";
  }

  // member: lon
  {
    out << "lon: ";
    rosidl_generator_traits::value_to_yaml(msg.lon, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Location & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: destination
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "destination: ";
    rosidl_generator_traits::value_to_yaml(msg.destination, out);
    out << "\n";
  }

  // member: lat
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lat: ";
    rosidl_generator_traits::value_to_yaml(msg.lat, out);
    out << "\n";
  }

  // member: lon
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lon: ";
    rosidl_generator_traits::value_to_yaml(msg.lon, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Location & msg, bool use_flow_style = false)
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
  const v2x_stack_btp::msg::Location & msg,
  std::ostream & out, size_t indentation = 0)
{
  v2x_stack_btp::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use v2x_stack_btp::msg::to_yaml() instead")]]
inline std::string to_yaml(const v2x_stack_btp::msg::Location & msg)
{
  return v2x_stack_btp::msg::to_yaml(msg);
}

template<>
inline const char * data_type<v2x_stack_btp::msg::Location>()
{
  return "v2x_stack_btp::msg::Location";
}

template<>
inline const char * name<v2x_stack_btp::msg::Location>()
{
  return "v2x_stack_btp/msg/Location";
}

template<>
struct has_fixed_size<v2x_stack_btp::msg::Location>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<v2x_stack_btp::msg::Location>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<v2x_stack_btp::msg::Location>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // V2X_STACK_BTP__MSG__DETAIL__LOCATION__TRAITS_HPP_

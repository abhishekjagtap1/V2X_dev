// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from v2x_stack_btp:msg/Area.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "v2x_stack_btp/msg/area.hpp"


#ifndef V2X_STACK_BTP__MSG__DETAIL__AREA__TRAITS_HPP_
#define V2X_STACK_BTP__MSG__DETAIL__AREA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "v2x_stack_btp/msg/detail/area__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace v2x_stack_btp
{

namespace msg
{

inline void to_flow_style_yaml(
  const Area & msg,
  std::ostream & out)
{
  out << "{";
  // member: latitude
  {
    out << "latitude: ";
    rosidl_generator_traits::value_to_yaml(msg.latitude, out);
    out << ", ";
  }

  // member: longitude
  {
    out << "longitude: ";
    rosidl_generator_traits::value_to_yaml(msg.longitude, out);
    out << ", ";
  }

  // member: distance_a
  {
    out << "distance_a: ";
    rosidl_generator_traits::value_to_yaml(msg.distance_a, out);
    out << ", ";
  }

  // member: distance_b
  {
    out << "distance_b: ";
    rosidl_generator_traits::value_to_yaml(msg.distance_b, out);
    out << ", ";
  }

  // member: angle
  {
    out << "angle: ";
    rosidl_generator_traits::value_to_yaml(msg.angle, out);
    out << ", ";
  }

  // member: shape
  {
    out << "shape: ";
    rosidl_generator_traits::value_to_yaml(msg.shape, out);
    out << ", ";
  }

  // member: unused
  {
    out << "unused: ";
    rosidl_generator_traits::value_to_yaml(msg.unused, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Area & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: latitude
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "latitude: ";
    rosidl_generator_traits::value_to_yaml(msg.latitude, out);
    out << "\n";
  }

  // member: longitude
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "longitude: ";
    rosidl_generator_traits::value_to_yaml(msg.longitude, out);
    out << "\n";
  }

  // member: distance_a
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "distance_a: ";
    rosidl_generator_traits::value_to_yaml(msg.distance_a, out);
    out << "\n";
  }

  // member: distance_b
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "distance_b: ";
    rosidl_generator_traits::value_to_yaml(msg.distance_b, out);
    out << "\n";
  }

  // member: angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "angle: ";
    rosidl_generator_traits::value_to_yaml(msg.angle, out);
    out << "\n";
  }

  // member: shape
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "shape: ";
    rosidl_generator_traits::value_to_yaml(msg.shape, out);
    out << "\n";
  }

  // member: unused
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "unused: ";
    rosidl_generator_traits::value_to_yaml(msg.unused, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Area & msg, bool use_flow_style = false)
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
  const v2x_stack_btp::msg::Area & msg,
  std::ostream & out, size_t indentation = 0)
{
  v2x_stack_btp::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use v2x_stack_btp::msg::to_yaml() instead")]]
inline std::string to_yaml(const v2x_stack_btp::msg::Area & msg)
{
  return v2x_stack_btp::msg::to_yaml(msg);
}

template<>
inline const char * data_type<v2x_stack_btp::msg::Area>()
{
  return "v2x_stack_btp::msg::Area";
}

template<>
inline const char * name<v2x_stack_btp::msg::Area>()
{
  return "v2x_stack_btp/msg/Area";
}

template<>
struct has_fixed_size<v2x_stack_btp::msg::Area>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<v2x_stack_btp::msg::Area>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<v2x_stack_btp::msg::Area>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // V2X_STACK_BTP__MSG__DETAIL__AREA__TRAITS_HPP_

// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from v2x_stack:msg/TrafficClass.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "v2x_stack/msg/traffic_class.hpp"


#ifndef V2X_STACK__MSG__DETAIL__TRAFFIC_CLASS__TRAITS_HPP_
#define V2X_STACK__MSG__DETAIL__TRAFFIC_CLASS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "v2x_stack/msg/detail/traffic_class__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace v2x_stack
{

namespace msg
{

inline void to_flow_style_yaml(
  const TrafficClass & msg,
  std::ostream & out)
{
  out << "{";
  // member: store_carry_forwarding
  {
    out << "store_carry_forwarding: ";
    rosidl_generator_traits::value_to_yaml(msg.store_carry_forwarding, out);
    out << ", ";
  }

  // member: channel_offloading
  {
    out << "channel_offloading: ";
    rosidl_generator_traits::value_to_yaml(msg.channel_offloading, out);
    out << ", ";
  }

  // member: id
  {
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TrafficClass & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: store_carry_forwarding
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "store_carry_forwarding: ";
    rosidl_generator_traits::value_to_yaml(msg.store_carry_forwarding, out);
    out << "\n";
  }

  // member: channel_offloading
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "channel_offloading: ";
    rosidl_generator_traits::value_to_yaml(msg.channel_offloading, out);
    out << "\n";
  }

  // member: id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TrafficClass & msg, bool use_flow_style = false)
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

}  // namespace v2x_stack

namespace rosidl_generator_traits
{

[[deprecated("use v2x_stack::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const v2x_stack::msg::TrafficClass & msg,
  std::ostream & out, size_t indentation = 0)
{
  v2x_stack::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use v2x_stack::msg::to_yaml() instead")]]
inline std::string to_yaml(const v2x_stack::msg::TrafficClass & msg)
{
  return v2x_stack::msg::to_yaml(msg);
}

template<>
inline const char * data_type<v2x_stack::msg::TrafficClass>()
{
  return "v2x_stack::msg::TrafficClass";
}

template<>
inline const char * name<v2x_stack::msg::TrafficClass>()
{
  return "v2x_stack/msg/TrafficClass";
}

template<>
struct has_fixed_size<v2x_stack::msg::TrafficClass>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<v2x_stack::msg::TrafficClass>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<v2x_stack::msg::TrafficClass>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // V2X_STACK__MSG__DETAIL__TRAFFIC_CLASS__TRAITS_HPP_

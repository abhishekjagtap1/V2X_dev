// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from v2x_stack:msg/UDPMsgType.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "v2x_stack/msg/udp_msg_type.hpp"


#ifndef V2X_STACK__MSG__DETAIL__UDP_MSG_TYPE__TRAITS_HPP_
#define V2X_STACK__MSG__DETAIL__UDP_MSG_TYPE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "v2x_stack/msg/detail/udp_msg_type__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace v2x_stack
{

namespace msg
{

inline void to_flow_style_yaml(
  const UDPMsgType & msg,
  std::ostream & out)
{
  out << "{";
  // member: version
  {
    out << "version: ";
    rosidl_generator_traits::value_to_yaml(msg.version, out);
    out << ", ";
  }

  // member: msg_id
  {
    out << "msg_id: ";
    rosidl_generator_traits::value_to_yaml(msg.msg_id, out);
    out << ", ";
  }

  // member: msg_length
  {
    out << "msg_length: ";
    rosidl_generator_traits::value_to_yaml(msg.msg_length, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const UDPMsgType & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: version
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "version: ";
    rosidl_generator_traits::value_to_yaml(msg.version, out);
    out << "\n";
  }

  // member: msg_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "msg_id: ";
    rosidl_generator_traits::value_to_yaml(msg.msg_id, out);
    out << "\n";
  }

  // member: msg_length
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "msg_length: ";
    rosidl_generator_traits::value_to_yaml(msg.msg_length, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const UDPMsgType & msg, bool use_flow_style = false)
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
  const v2x_stack::msg::UDPMsgType & msg,
  std::ostream & out, size_t indentation = 0)
{
  v2x_stack::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use v2x_stack::msg::to_yaml() instead")]]
inline std::string to_yaml(const v2x_stack::msg::UDPMsgType & msg)
{
  return v2x_stack::msg::to_yaml(msg);
}

template<>
inline const char * data_type<v2x_stack::msg::UDPMsgType>()
{
  return "v2x_stack::msg::UDPMsgType";
}

template<>
inline const char * name<v2x_stack::msg::UDPMsgType>()
{
  return "v2x_stack/msg/UDPMsgType";
}

template<>
struct has_fixed_size<v2x_stack::msg::UDPMsgType>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<v2x_stack::msg::UDPMsgType>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<v2x_stack::msg::UDPMsgType>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // V2X_STACK__MSG__DETAIL__UDP_MSG_TYPE__TRAITS_HPP_

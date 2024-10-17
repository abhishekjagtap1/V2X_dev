// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from v2x_stack:msg/CohdaInd.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "v2x_stack/msg/cohda_ind.hpp"


#ifndef V2X_STACK__MSG__DETAIL__COHDA_IND__TRAITS_HPP_
#define V2X_STACK__MSG__DETAIL__COHDA_IND__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "v2x_stack/msg/detail/cohda_ind__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'type'
#include "v2x_stack/msg/detail/udp_msg_type__traits.hpp"
// Member 'header'
#include "v2x_stack/msg/detail/udp_data_ind_hdr__traits.hpp"

namespace v2x_stack
{

namespace msg
{

inline void to_flow_style_yaml(
  const CohdaInd & msg,
  std::ostream & out)
{
  out << "{";
  // member: type
  {
    out << "type: ";
    to_flow_style_yaml(msg.type, out);
    out << ", ";
  }

  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: payload
  {
    if (msg.payload.size() == 0) {
      out << "payload: []";
    } else {
      out << "payload: [";
      size_t pending_items = msg.payload.size();
      for (auto item : msg.payload) {
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
  const CohdaInd & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "type:\n";
    to_block_style_yaml(msg.type, out, indentation + 2);
  }

  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: payload
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.payload.size() == 0) {
      out << "payload: []\n";
    } else {
      out << "payload:\n";
      for (auto item : msg.payload) {
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

inline std::string to_yaml(const CohdaInd & msg, bool use_flow_style = false)
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
  const v2x_stack::msg::CohdaInd & msg,
  std::ostream & out, size_t indentation = 0)
{
  v2x_stack::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use v2x_stack::msg::to_yaml() instead")]]
inline std::string to_yaml(const v2x_stack::msg::CohdaInd & msg)
{
  return v2x_stack::msg::to_yaml(msg);
}

template<>
inline const char * data_type<v2x_stack::msg::CohdaInd>()
{
  return "v2x_stack::msg::CohdaInd";
}

template<>
inline const char * name<v2x_stack::msg::CohdaInd>()
{
  return "v2x_stack/msg/CohdaInd";
}

template<>
struct has_fixed_size<v2x_stack::msg::CohdaInd>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<v2x_stack::msg::CohdaInd>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<v2x_stack::msg::CohdaInd>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // V2X_STACK__MSG__DETAIL__COHDA_IND__TRAITS_HPP_

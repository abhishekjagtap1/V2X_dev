// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from v2x_stack:msg/CohdaReq.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "v2x_stack/msg/cohda_req.hpp"


#ifndef V2X_STACK__MSG__DETAIL__COHDA_REQ__TRAITS_HPP_
#define V2X_STACK__MSG__DETAIL__COHDA_REQ__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "v2x_stack/msg/detail/cohda_req__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace v2x_stack
{

namespace msg
{

inline void to_flow_style_yaml(
  const CohdaReq & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const CohdaReq & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const CohdaReq & msg, bool use_flow_style = false)
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
  const v2x_stack::msg::CohdaReq & msg,
  std::ostream & out, size_t indentation = 0)
{
  v2x_stack::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use v2x_stack::msg::to_yaml() instead")]]
inline std::string to_yaml(const v2x_stack::msg::CohdaReq & msg)
{
  return v2x_stack::msg::to_yaml(msg);
}

template<>
inline const char * data_type<v2x_stack::msg::CohdaReq>()
{
  return "v2x_stack::msg::CohdaReq";
}

template<>
inline const char * name<v2x_stack::msg::CohdaReq>()
{
  return "v2x_stack/msg/CohdaReq";
}

template<>
struct has_fixed_size<v2x_stack::msg::CohdaReq>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<v2x_stack::msg::CohdaReq>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<v2x_stack::msg::CohdaReq>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // V2X_STACK__MSG__DETAIL__COHDA_REQ__TRAITS_HPP_

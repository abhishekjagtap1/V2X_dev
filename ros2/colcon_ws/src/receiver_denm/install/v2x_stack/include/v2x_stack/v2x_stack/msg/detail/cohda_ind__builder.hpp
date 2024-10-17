// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from v2x_stack:msg/CohdaInd.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "v2x_stack/msg/cohda_ind.hpp"


#ifndef V2X_STACK__MSG__DETAIL__COHDA_IND__BUILDER_HPP_
#define V2X_STACK__MSG__DETAIL__COHDA_IND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "v2x_stack/msg/detail/cohda_ind__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace v2x_stack
{

namespace msg
{

namespace builder
{

class Init_CohdaInd_payload
{
public:
  explicit Init_CohdaInd_payload(::v2x_stack::msg::CohdaInd & msg)
  : msg_(msg)
  {}
  ::v2x_stack::msg::CohdaInd payload(::v2x_stack::msg::CohdaInd::_payload_type arg)
  {
    msg_.payload = std::move(arg);
    return std::move(msg_);
  }

private:
  ::v2x_stack::msg::CohdaInd msg_;
};

class Init_CohdaInd_header
{
public:
  explicit Init_CohdaInd_header(::v2x_stack::msg::CohdaInd & msg)
  : msg_(msg)
  {}
  Init_CohdaInd_payload header(::v2x_stack::msg::CohdaInd::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_CohdaInd_payload(msg_);
  }

private:
  ::v2x_stack::msg::CohdaInd msg_;
};

class Init_CohdaInd_type
{
public:
  Init_CohdaInd_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CohdaInd_header type(::v2x_stack::msg::CohdaInd::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_CohdaInd_header(msg_);
  }

private:
  ::v2x_stack::msg::CohdaInd msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::v2x_stack::msg::CohdaInd>()
{
  return v2x_stack::msg::builder::Init_CohdaInd_type();
}

}  // namespace v2x_stack

#endif  // V2X_STACK__MSG__DETAIL__COHDA_IND__BUILDER_HPP_

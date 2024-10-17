// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from v2x_stack:msg/UDPMsgType.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "v2x_stack/msg/udp_msg_type.hpp"


#ifndef V2X_STACK__MSG__DETAIL__UDP_MSG_TYPE__BUILDER_HPP_
#define V2X_STACK__MSG__DETAIL__UDP_MSG_TYPE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "v2x_stack/msg/detail/udp_msg_type__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace v2x_stack
{

namespace msg
{

namespace builder
{

class Init_UDPMsgType_msg_length
{
public:
  explicit Init_UDPMsgType_msg_length(::v2x_stack::msg::UDPMsgType & msg)
  : msg_(msg)
  {}
  ::v2x_stack::msg::UDPMsgType msg_length(::v2x_stack::msg::UDPMsgType::_msg_length_type arg)
  {
    msg_.msg_length = std::move(arg);
    return std::move(msg_);
  }

private:
  ::v2x_stack::msg::UDPMsgType msg_;
};

class Init_UDPMsgType_msg_id
{
public:
  explicit Init_UDPMsgType_msg_id(::v2x_stack::msg::UDPMsgType & msg)
  : msg_(msg)
  {}
  Init_UDPMsgType_msg_length msg_id(::v2x_stack::msg::UDPMsgType::_msg_id_type arg)
  {
    msg_.msg_id = std::move(arg);
    return Init_UDPMsgType_msg_length(msg_);
  }

private:
  ::v2x_stack::msg::UDPMsgType msg_;
};

class Init_UDPMsgType_version
{
public:
  Init_UDPMsgType_version()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_UDPMsgType_msg_id version(::v2x_stack::msg::UDPMsgType::_version_type arg)
  {
    msg_.version = std::move(arg);
    return Init_UDPMsgType_msg_id(msg_);
  }

private:
  ::v2x_stack::msg::UDPMsgType msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::v2x_stack::msg::UDPMsgType>()
{
  return v2x_stack::msg::builder::Init_UDPMsgType_version();
}

}  // namespace v2x_stack

#endif  // V2X_STACK__MSG__DETAIL__UDP_MSG_TYPE__BUILDER_HPP_

// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from v2x_stack_btp:msg/TrafficClass.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "v2x_stack_btp/msg/traffic_class.hpp"


#ifndef V2X_STACK_BTP__MSG__DETAIL__TRAFFIC_CLASS__BUILDER_HPP_
#define V2X_STACK_BTP__MSG__DETAIL__TRAFFIC_CLASS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "v2x_stack_btp/msg/detail/traffic_class__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace v2x_stack_btp
{

namespace msg
{

namespace builder
{

class Init_TrafficClass_id
{
public:
  explicit Init_TrafficClass_id(::v2x_stack_btp::msg::TrafficClass & msg)
  : msg_(msg)
  {}
  ::v2x_stack_btp::msg::TrafficClass id(::v2x_stack_btp::msg::TrafficClass::_id_type arg)
  {
    msg_.id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::v2x_stack_btp::msg::TrafficClass msg_;
};

class Init_TrafficClass_channel_offloading
{
public:
  explicit Init_TrafficClass_channel_offloading(::v2x_stack_btp::msg::TrafficClass & msg)
  : msg_(msg)
  {}
  Init_TrafficClass_id channel_offloading(::v2x_stack_btp::msg::TrafficClass::_channel_offloading_type arg)
  {
    msg_.channel_offloading = std::move(arg);
    return Init_TrafficClass_id(msg_);
  }

private:
  ::v2x_stack_btp::msg::TrafficClass msg_;
};

class Init_TrafficClass_store_carry_forwarding
{
public:
  Init_TrafficClass_store_carry_forwarding()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TrafficClass_channel_offloading store_carry_forwarding(::v2x_stack_btp::msg::TrafficClass::_store_carry_forwarding_type arg)
  {
    msg_.store_carry_forwarding = std::move(arg);
    return Init_TrafficClass_channel_offloading(msg_);
  }

private:
  ::v2x_stack_btp::msg::TrafficClass msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::v2x_stack_btp::msg::TrafficClass>()
{
  return v2x_stack_btp::msg::builder::Init_TrafficClass_store_carry_forwarding();
}

}  // namespace v2x_stack_btp

#endif  // V2X_STACK_BTP__MSG__DETAIL__TRAFFIC_CLASS__BUILDER_HPP_

// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from v2x_stack_btp:msg/GeoNetDestination.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "v2x_stack_btp/msg/geo_net_destination.hpp"


#ifndef V2X_STACK_BTP__MSG__DETAIL__GEO_NET_DESTINATION__BUILDER_HPP_
#define V2X_STACK_BTP__MSG__DETAIL__GEO_NET_DESTINATION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "v2x_stack_btp/msg/detail/geo_net_destination__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace v2x_stack_btp
{

namespace msg
{

namespace builder
{

class Init_GeoNetDestination_area
{
public:
  explicit Init_GeoNetDestination_area(::v2x_stack_btp::msg::GeoNetDestination & msg)
  : msg_(msg)
  {}
  ::v2x_stack_btp::msg::GeoNetDestination area(::v2x_stack_btp::msg::GeoNetDestination::_area_type arg)
  {
    msg_.area = std::move(arg);
    return std::move(msg_);
  }

private:
  ::v2x_stack_btp::msg::GeoNetDestination msg_;
};

class Init_GeoNetDestination_address
{
public:
  explicit Init_GeoNetDestination_address(::v2x_stack_btp::msg::GeoNetDestination & msg)
  : msg_(msg)
  {}
  Init_GeoNetDestination_area address(::v2x_stack_btp::msg::GeoNetDestination::_address_type arg)
  {
    msg_.address = std::move(arg);
    return Init_GeoNetDestination_area(msg_);
  }

private:
  ::v2x_stack_btp::msg::GeoNetDestination msg_;
};

class Init_GeoNetDestination_type
{
public:
  Init_GeoNetDestination_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GeoNetDestination_address type(::v2x_stack_btp::msg::GeoNetDestination::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_GeoNetDestination_address(msg_);
  }

private:
  ::v2x_stack_btp::msg::GeoNetDestination msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::v2x_stack_btp::msg::GeoNetDestination>()
{
  return v2x_stack_btp::msg::builder::Init_GeoNetDestination_type();
}

}  // namespace v2x_stack_btp

#endif  // V2X_STACK_BTP__MSG__DETAIL__GEO_NET_DESTINATION__BUILDER_HPP_

// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from v2x_stack_btp:msg/GeoNetArea.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "v2x_stack_btp/msg/geo_net_area.hpp"


#ifndef V2X_STACK_BTP__MSG__DETAIL__GEO_NET_AREA__BUILDER_HPP_
#define V2X_STACK_BTP__MSG__DETAIL__GEO_NET_AREA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "v2x_stack_btp/msg/detail/geo_net_area__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace v2x_stack_btp
{

namespace msg
{

namespace builder
{

class Init_GeoNetArea_angle
{
public:
  explicit Init_GeoNetArea_angle(::v2x_stack_btp::msg::GeoNetArea & msg)
  : msg_(msg)
  {}
  ::v2x_stack_btp::msg::GeoNetArea angle(::v2x_stack_btp::msg::GeoNetArea::_angle_type arg)
  {
    msg_.angle = std::move(arg);
    return std::move(msg_);
  }

private:
  ::v2x_stack_btp::msg::GeoNetArea msg_;
};

class Init_GeoNetArea_distance_b
{
public:
  explicit Init_GeoNetArea_distance_b(::v2x_stack_btp::msg::GeoNetArea & msg)
  : msg_(msg)
  {}
  Init_GeoNetArea_angle distance_b(::v2x_stack_btp::msg::GeoNetArea::_distance_b_type arg)
  {
    msg_.distance_b = std::move(arg);
    return Init_GeoNetArea_angle(msg_);
  }

private:
  ::v2x_stack_btp::msg::GeoNetArea msg_;
};

class Init_GeoNetArea_distance_a
{
public:
  explicit Init_GeoNetArea_distance_a(::v2x_stack_btp::msg::GeoNetArea & msg)
  : msg_(msg)
  {}
  Init_GeoNetArea_distance_b distance_a(::v2x_stack_btp::msg::GeoNetArea::_distance_a_type arg)
  {
    msg_.distance_a = std::move(arg);
    return Init_GeoNetArea_distance_b(msg_);
  }

private:
  ::v2x_stack_btp::msg::GeoNetArea msg_;
};

class Init_GeoNetArea_longitude
{
public:
  explicit Init_GeoNetArea_longitude(::v2x_stack_btp::msg::GeoNetArea & msg)
  : msg_(msg)
  {}
  Init_GeoNetArea_distance_a longitude(::v2x_stack_btp::msg::GeoNetArea::_longitude_type arg)
  {
    msg_.longitude = std::move(arg);
    return Init_GeoNetArea_distance_a(msg_);
  }

private:
  ::v2x_stack_btp::msg::GeoNetArea msg_;
};

class Init_GeoNetArea_latitude
{
public:
  explicit Init_GeoNetArea_latitude(::v2x_stack_btp::msg::GeoNetArea & msg)
  : msg_(msg)
  {}
  Init_GeoNetArea_longitude latitude(::v2x_stack_btp::msg::GeoNetArea::_latitude_type arg)
  {
    msg_.latitude = std::move(arg);
    return Init_GeoNetArea_longitude(msg_);
  }

private:
  ::v2x_stack_btp::msg::GeoNetArea msg_;
};

class Init_GeoNetArea_type
{
public:
  Init_GeoNetArea_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GeoNetArea_latitude type(::v2x_stack_btp::msg::GeoNetArea::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_GeoNetArea_latitude(msg_);
  }

private:
  ::v2x_stack_btp::msg::GeoNetArea msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::v2x_stack_btp::msg::GeoNetArea>()
{
  return v2x_stack_btp::msg::builder::Init_GeoNetArea_type();
}

}  // namespace v2x_stack_btp

#endif  // V2X_STACK_BTP__MSG__DETAIL__GEO_NET_AREA__BUILDER_HPP_

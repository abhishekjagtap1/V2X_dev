// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from v2x_stack:msg/Location.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "v2x_stack/msg/location.hpp"


#ifndef V2X_STACK__MSG__DETAIL__LOCATION__BUILDER_HPP_
#define V2X_STACK__MSG__DETAIL__LOCATION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "v2x_stack/msg/detail/location__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace v2x_stack
{

namespace msg
{

namespace builder
{

class Init_Location_lon
{
public:
  explicit Init_Location_lon(::v2x_stack::msg::Location & msg)
  : msg_(msg)
  {}
  ::v2x_stack::msg::Location lon(::v2x_stack::msg::Location::_lon_type arg)
  {
    msg_.lon = std::move(arg);
    return std::move(msg_);
  }

private:
  ::v2x_stack::msg::Location msg_;
};

class Init_Location_lat
{
public:
  explicit Init_Location_lat(::v2x_stack::msg::Location & msg)
  : msg_(msg)
  {}
  Init_Location_lon lat(::v2x_stack::msg::Location::_lat_type arg)
  {
    msg_.lat = std::move(arg);
    return Init_Location_lon(msg_);
  }

private:
  ::v2x_stack::msg::Location msg_;
};

class Init_Location_destination
{
public:
  Init_Location_destination()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Location_lat destination(::v2x_stack::msg::Location::_destination_type arg)
  {
    msg_.destination = std::move(arg);
    return Init_Location_lat(msg_);
  }

private:
  ::v2x_stack::msg::Location msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::v2x_stack::msg::Location>()
{
  return v2x_stack::msg::builder::Init_Location_destination();
}

}  // namespace v2x_stack

#endif  // V2X_STACK__MSG__DETAIL__LOCATION__BUILDER_HPP_

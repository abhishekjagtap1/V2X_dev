// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from v2x_stack:msg/Area.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "v2x_stack/msg/area.hpp"


#ifndef V2X_STACK__MSG__DETAIL__AREA__BUILDER_HPP_
#define V2X_STACK__MSG__DETAIL__AREA__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "v2x_stack/msg/detail/area__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace v2x_stack
{

namespace msg
{

namespace builder
{

class Init_Area_unused
{
public:
  explicit Init_Area_unused(::v2x_stack::msg::Area & msg)
  : msg_(msg)
  {}
  ::v2x_stack::msg::Area unused(::v2x_stack::msg::Area::_unused_type arg)
  {
    msg_.unused = std::move(arg);
    return std::move(msg_);
  }

private:
  ::v2x_stack::msg::Area msg_;
};

class Init_Area_shape
{
public:
  explicit Init_Area_shape(::v2x_stack::msg::Area & msg)
  : msg_(msg)
  {}
  Init_Area_unused shape(::v2x_stack::msg::Area::_shape_type arg)
  {
    msg_.shape = std::move(arg);
    return Init_Area_unused(msg_);
  }

private:
  ::v2x_stack::msg::Area msg_;
};

class Init_Area_angle
{
public:
  explicit Init_Area_angle(::v2x_stack::msg::Area & msg)
  : msg_(msg)
  {}
  Init_Area_shape angle(::v2x_stack::msg::Area::_angle_type arg)
  {
    msg_.angle = std::move(arg);
    return Init_Area_shape(msg_);
  }

private:
  ::v2x_stack::msg::Area msg_;
};

class Init_Area_distance_b
{
public:
  explicit Init_Area_distance_b(::v2x_stack::msg::Area & msg)
  : msg_(msg)
  {}
  Init_Area_angle distance_b(::v2x_stack::msg::Area::_distance_b_type arg)
  {
    msg_.distance_b = std::move(arg);
    return Init_Area_angle(msg_);
  }

private:
  ::v2x_stack::msg::Area msg_;
};

class Init_Area_distance_a
{
public:
  explicit Init_Area_distance_a(::v2x_stack::msg::Area & msg)
  : msg_(msg)
  {}
  Init_Area_distance_b distance_a(::v2x_stack::msg::Area::_distance_a_type arg)
  {
    msg_.distance_a = std::move(arg);
    return Init_Area_distance_b(msg_);
  }

private:
  ::v2x_stack::msg::Area msg_;
};

class Init_Area_longitude
{
public:
  explicit Init_Area_longitude(::v2x_stack::msg::Area & msg)
  : msg_(msg)
  {}
  Init_Area_distance_a longitude(::v2x_stack::msg::Area::_longitude_type arg)
  {
    msg_.longitude = std::move(arg);
    return Init_Area_distance_a(msg_);
  }

private:
  ::v2x_stack::msg::Area msg_;
};

class Init_Area_latitude
{
public:
  Init_Area_latitude()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Area_longitude latitude(::v2x_stack::msg::Area::_latitude_type arg)
  {
    msg_.latitude = std::move(arg);
    return Init_Area_longitude(msg_);
  }

private:
  ::v2x_stack::msg::Area msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::v2x_stack::msg::Area>()
{
  return v2x_stack::msg::builder::Init_Area_latitude();
}

}  // namespace v2x_stack

#endif  // V2X_STACK__MSG__DETAIL__AREA__BUILDER_HPP_

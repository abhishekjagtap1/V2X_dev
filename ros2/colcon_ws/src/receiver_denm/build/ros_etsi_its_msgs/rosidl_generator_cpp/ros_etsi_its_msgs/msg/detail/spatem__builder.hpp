// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros_etsi_its_msgs:msg/SPATEM.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ros_etsi_its_msgs/msg/spatem.hpp"


#ifndef ROS_ETSI_ITS_MSGS__MSG__DETAIL__SPATEM__BUILDER_HPP_
#define ROS_ETSI_ITS_MSGS__MSG__DETAIL__SPATEM__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros_etsi_its_msgs/msg/detail/spatem__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros_etsi_its_msgs
{

namespace msg
{

namespace builder
{

class Init_SPATEM_intersections
{
public:
  explicit Init_SPATEM_intersections(::ros_etsi_its_msgs::msg::SPATEM & msg)
  : msg_(msg)
  {}
  ::ros_etsi_its_msgs::msg::SPATEM intersections(::ros_etsi_its_msgs::msg::SPATEM::_intersections_type arg)
  {
    msg_.intersections = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_etsi_its_msgs::msg::SPATEM msg_;
};

class Init_SPATEM_its_header
{
public:
  explicit Init_SPATEM_its_header(::ros_etsi_its_msgs::msg::SPATEM & msg)
  : msg_(msg)
  {}
  Init_SPATEM_intersections its_header(::ros_etsi_its_msgs::msg::SPATEM::_its_header_type arg)
  {
    msg_.its_header = std::move(arg);
    return Init_SPATEM_intersections(msg_);
  }

private:
  ::ros_etsi_its_msgs::msg::SPATEM msg_;
};

class Init_SPATEM_header
{
public:
  Init_SPATEM_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SPATEM_its_header header(::ros_etsi_its_msgs::msg::SPATEM::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_SPATEM_its_header(msg_);
  }

private:
  ::ros_etsi_its_msgs::msg::SPATEM msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_etsi_its_msgs::msg::SPATEM>()
{
  return ros_etsi_its_msgs::msg::builder::Init_SPATEM_header();
}

}  // namespace ros_etsi_its_msgs

#endif  // ROS_ETSI_ITS_MSGS__MSG__DETAIL__SPATEM__BUILDER_HPP_

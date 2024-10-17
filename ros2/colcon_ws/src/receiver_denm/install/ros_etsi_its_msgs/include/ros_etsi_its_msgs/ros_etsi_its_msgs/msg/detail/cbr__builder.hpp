// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros_etsi_its_msgs:msg/CBR.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ros_etsi_its_msgs/msg/cbr.hpp"


#ifndef ROS_ETSI_ITS_MSGS__MSG__DETAIL__CBR__BUILDER_HPP_
#define ROS_ETSI_ITS_MSGS__MSG__DETAIL__CBR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros_etsi_its_msgs/msg/detail/cbr__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros_etsi_its_msgs
{

namespace msg
{

namespace builder
{

class Init_CBR_cbr
{
public:
  explicit Init_CBR_cbr(::ros_etsi_its_msgs::msg::CBR & msg)
  : msg_(msg)
  {}
  ::ros_etsi_its_msgs::msg::CBR cbr(::ros_etsi_its_msgs::msg::CBR::_cbr_type arg)
  {
    msg_.cbr = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_etsi_its_msgs::msg::CBR msg_;
};

class Init_CBR_header
{
public:
  Init_CBR_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CBR_cbr header(::ros_etsi_its_msgs::msg::CBR::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_CBR_cbr(msg_);
  }

private:
  ::ros_etsi_its_msgs::msg::CBR msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_etsi_its_msgs::msg::CBR>()
{
  return ros_etsi_its_msgs::msg::builder::Init_CBR_header();
}

}  // namespace ros_etsi_its_msgs

#endif  // ROS_ETSI_ITS_MSGS__MSG__DETAIL__CBR__BUILDER_HPP_

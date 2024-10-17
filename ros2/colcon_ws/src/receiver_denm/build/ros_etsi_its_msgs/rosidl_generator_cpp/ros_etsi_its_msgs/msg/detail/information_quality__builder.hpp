// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros_etsi_its_msgs:msg/InformationQuality.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ros_etsi_its_msgs/msg/information_quality.hpp"


#ifndef ROS_ETSI_ITS_MSGS__MSG__DETAIL__INFORMATION_QUALITY__BUILDER_HPP_
#define ROS_ETSI_ITS_MSGS__MSG__DETAIL__INFORMATION_QUALITY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros_etsi_its_msgs/msg/detail/information_quality__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros_etsi_its_msgs
{

namespace msg
{

namespace builder
{

class Init_InformationQuality_value
{
public:
  Init_InformationQuality_value()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ros_etsi_its_msgs::msg::InformationQuality value(::ros_etsi_its_msgs::msg::InformationQuality::_value_type arg)
  {
    msg_.value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_etsi_its_msgs::msg::InformationQuality msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_etsi_its_msgs::msg::InformationQuality>()
{
  return ros_etsi_its_msgs::msg::builder::Init_InformationQuality_value();
}

}  // namespace ros_etsi_its_msgs

#endif  // ROS_ETSI_ITS_MSGS__MSG__DETAIL__INFORMATION_QUALITY__BUILDER_HPP_

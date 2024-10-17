// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros_etsi_its_msgs:msg/YawRate.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ros_etsi_its_msgs/msg/yaw_rate.hpp"


#ifndef ROS_ETSI_ITS_MSGS__MSG__DETAIL__YAW_RATE__BUILDER_HPP_
#define ROS_ETSI_ITS_MSGS__MSG__DETAIL__YAW_RATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros_etsi_its_msgs/msg/detail/yaw_rate__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros_etsi_its_msgs
{

namespace msg
{

namespace builder
{

class Init_YawRate_confidence
{
public:
  explicit Init_YawRate_confidence(::ros_etsi_its_msgs::msg::YawRate & msg)
  : msg_(msg)
  {}
  ::ros_etsi_its_msgs::msg::YawRate confidence(::ros_etsi_its_msgs::msg::YawRate::_confidence_type arg)
  {
    msg_.confidence = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_etsi_its_msgs::msg::YawRate msg_;
};

class Init_YawRate_value
{
public:
  Init_YawRate_value()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_YawRate_confidence value(::ros_etsi_its_msgs::msg::YawRate::_value_type arg)
  {
    msg_.value = std::move(arg);
    return Init_YawRate_confidence(msg_);
  }

private:
  ::ros_etsi_its_msgs::msg::YawRate msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_etsi_its_msgs::msg::YawRate>()
{
  return ros_etsi_its_msgs::msg::builder::Init_YawRate_value();
}

}  // namespace ros_etsi_its_msgs

#endif  // ROS_ETSI_ITS_MSGS__MSG__DETAIL__YAW_RATE__BUILDER_HPP_

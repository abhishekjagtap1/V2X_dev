// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros_etsi_its_msgs:msg/LateralAcceleration.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ros_etsi_its_msgs/msg/lateral_acceleration.hpp"


#ifndef ROS_ETSI_ITS_MSGS__MSG__DETAIL__LATERAL_ACCELERATION__BUILDER_HPP_
#define ROS_ETSI_ITS_MSGS__MSG__DETAIL__LATERAL_ACCELERATION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros_etsi_its_msgs/msg/detail/lateral_acceleration__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros_etsi_its_msgs
{

namespace msg
{

namespace builder
{

class Init_LateralAcceleration_confidence
{
public:
  explicit Init_LateralAcceleration_confidence(::ros_etsi_its_msgs::msg::LateralAcceleration & msg)
  : msg_(msg)
  {}
  ::ros_etsi_its_msgs::msg::LateralAcceleration confidence(::ros_etsi_its_msgs::msg::LateralAcceleration::_confidence_type arg)
  {
    msg_.confidence = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_etsi_its_msgs::msg::LateralAcceleration msg_;
};

class Init_LateralAcceleration_value
{
public:
  Init_LateralAcceleration_value()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LateralAcceleration_confidence value(::ros_etsi_its_msgs::msg::LateralAcceleration::_value_type arg)
  {
    msg_.value = std::move(arg);
    return Init_LateralAcceleration_confidence(msg_);
  }

private:
  ::ros_etsi_its_msgs::msg::LateralAcceleration msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_etsi_its_msgs::msg::LateralAcceleration>()
{
  return ros_etsi_its_msgs::msg::builder::Init_LateralAcceleration_value();
}

}  // namespace ros_etsi_its_msgs

#endif  // ROS_ETSI_ITS_MSGS__MSG__DETAIL__LATERAL_ACCELERATION__BUILDER_HPP_

// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros_etsi_its_msgs:msg/LongitudinalAcceleration.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ros_etsi_its_msgs/msg/longitudinal_acceleration.hpp"


#ifndef ROS_ETSI_ITS_MSGS__MSG__DETAIL__LONGITUDINAL_ACCELERATION__BUILDER_HPP_
#define ROS_ETSI_ITS_MSGS__MSG__DETAIL__LONGITUDINAL_ACCELERATION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros_etsi_its_msgs/msg/detail/longitudinal_acceleration__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros_etsi_its_msgs
{

namespace msg
{

namespace builder
{

class Init_LongitudinalAcceleration_confidence
{
public:
  explicit Init_LongitudinalAcceleration_confidence(::ros_etsi_its_msgs::msg::LongitudinalAcceleration & msg)
  : msg_(msg)
  {}
  ::ros_etsi_its_msgs::msg::LongitudinalAcceleration confidence(::ros_etsi_its_msgs::msg::LongitudinalAcceleration::_confidence_type arg)
  {
    msg_.confidence = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_etsi_its_msgs::msg::LongitudinalAcceleration msg_;
};

class Init_LongitudinalAcceleration_value
{
public:
  Init_LongitudinalAcceleration_value()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LongitudinalAcceleration_confidence value(::ros_etsi_its_msgs::msg::LongitudinalAcceleration::_value_type arg)
  {
    msg_.value = std::move(arg);
    return Init_LongitudinalAcceleration_confidence(msg_);
  }

private:
  ::ros_etsi_its_msgs::msg::LongitudinalAcceleration msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_etsi_its_msgs::msg::LongitudinalAcceleration>()
{
  return ros_etsi_its_msgs::msg::builder::Init_LongitudinalAcceleration_value();
}

}  // namespace ros_etsi_its_msgs

#endif  // ROS_ETSI_ITS_MSGS__MSG__DETAIL__LONGITUDINAL_ACCELERATION__BUILDER_HPP_

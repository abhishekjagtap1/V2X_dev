// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros_etsi_its_msgs:msg/Altitude.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ros_etsi_its_msgs/msg/altitude.hpp"


#ifndef ROS_ETSI_ITS_MSGS__MSG__DETAIL__ALTITUDE__BUILDER_HPP_
#define ROS_ETSI_ITS_MSGS__MSG__DETAIL__ALTITUDE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros_etsi_its_msgs/msg/detail/altitude__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros_etsi_its_msgs
{

namespace msg
{

namespace builder
{

class Init_Altitude_confidence
{
public:
  explicit Init_Altitude_confidence(::ros_etsi_its_msgs::msg::Altitude & msg)
  : msg_(msg)
  {}
  ::ros_etsi_its_msgs::msg::Altitude confidence(::ros_etsi_its_msgs::msg::Altitude::_confidence_type arg)
  {
    msg_.confidence = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_etsi_its_msgs::msg::Altitude msg_;
};

class Init_Altitude_value
{
public:
  Init_Altitude_value()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Altitude_confidence value(::ros_etsi_its_msgs::msg::Altitude::_value_type arg)
  {
    msg_.value = std::move(arg);
    return Init_Altitude_confidence(msg_);
  }

private:
  ::ros_etsi_its_msgs::msg::Altitude msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_etsi_its_msgs::msg::Altitude>()
{
  return ros_etsi_its_msgs::msg::builder::Init_Altitude_value();
}

}  // namespace ros_etsi_its_msgs

#endif  // ROS_ETSI_ITS_MSGS__MSG__DETAIL__ALTITUDE__BUILDER_HPP_

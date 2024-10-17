// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros_etsi_its_msgs:msg/Curvature.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ros_etsi_its_msgs/msg/curvature.hpp"


#ifndef ROS_ETSI_ITS_MSGS__MSG__DETAIL__CURVATURE__BUILDER_HPP_
#define ROS_ETSI_ITS_MSGS__MSG__DETAIL__CURVATURE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros_etsi_its_msgs/msg/detail/curvature__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros_etsi_its_msgs
{

namespace msg
{

namespace builder
{

class Init_Curvature_confidence
{
public:
  explicit Init_Curvature_confidence(::ros_etsi_its_msgs::msg::Curvature & msg)
  : msg_(msg)
  {}
  ::ros_etsi_its_msgs::msg::Curvature confidence(::ros_etsi_its_msgs::msg::Curvature::_confidence_type arg)
  {
    msg_.confidence = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_etsi_its_msgs::msg::Curvature msg_;
};

class Init_Curvature_value
{
public:
  Init_Curvature_value()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Curvature_confidence value(::ros_etsi_its_msgs::msg::Curvature::_value_type arg)
  {
    msg_.value = std::move(arg);
    return Init_Curvature_confidence(msg_);
  }

private:
  ::ros_etsi_its_msgs::msg::Curvature msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_etsi_its_msgs::msg::Curvature>()
{
  return ros_etsi_its_msgs::msg::builder::Init_Curvature_value();
}

}  // namespace ros_etsi_its_msgs

#endif  // ROS_ETSI_ITS_MSGS__MSG__DETAIL__CURVATURE__BUILDER_HPP_

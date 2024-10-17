// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros_etsi_its_msgs:msg/WGS84Angle.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ros_etsi_its_msgs/msg/wgs84_angle.hpp"


#ifndef ROS_ETSI_ITS_MSGS__MSG__DETAIL__WGS84_ANGLE__BUILDER_HPP_
#define ROS_ETSI_ITS_MSGS__MSG__DETAIL__WGS84_ANGLE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros_etsi_its_msgs/msg/detail/wgs84_angle__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros_etsi_its_msgs
{

namespace msg
{

namespace builder
{

class Init_WGS84Angle_confidence
{
public:
  explicit Init_WGS84Angle_confidence(::ros_etsi_its_msgs::msg::WGS84Angle & msg)
  : msg_(msg)
  {}
  ::ros_etsi_its_msgs::msg::WGS84Angle confidence(::ros_etsi_its_msgs::msg::WGS84Angle::_confidence_type arg)
  {
    msg_.confidence = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_etsi_its_msgs::msg::WGS84Angle msg_;
};

class Init_WGS84Angle_value
{
public:
  Init_WGS84Angle_value()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_WGS84Angle_confidence value(::ros_etsi_its_msgs::msg::WGS84Angle::_value_type arg)
  {
    msg_.value = std::move(arg);
    return Init_WGS84Angle_confidence(msg_);
  }

private:
  ::ros_etsi_its_msgs::msg::WGS84Angle msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_etsi_its_msgs::msg::WGS84Angle>()
{
  return ros_etsi_its_msgs::msg::builder::Init_WGS84Angle_value();
}

}  // namespace ros_etsi_its_msgs

#endif  // ROS_ETSI_ITS_MSGS__MSG__DETAIL__WGS84_ANGLE__BUILDER_HPP_

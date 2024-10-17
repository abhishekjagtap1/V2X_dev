// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros_etsi_its_msgs:msg/ReferencePosition.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ros_etsi_its_msgs/msg/reference_position.hpp"


#ifndef ROS_ETSI_ITS_MSGS__MSG__DETAIL__REFERENCE_POSITION__BUILDER_HPP_
#define ROS_ETSI_ITS_MSGS__MSG__DETAIL__REFERENCE_POSITION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros_etsi_its_msgs/msg/detail/reference_position__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros_etsi_its_msgs
{

namespace msg
{

namespace builder
{

class Init_ReferencePosition_altitude
{
public:
  explicit Init_ReferencePosition_altitude(::ros_etsi_its_msgs::msg::ReferencePosition & msg)
  : msg_(msg)
  {}
  ::ros_etsi_its_msgs::msg::ReferencePosition altitude(::ros_etsi_its_msgs::msg::ReferencePosition::_altitude_type arg)
  {
    msg_.altitude = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_etsi_its_msgs::msg::ReferencePosition msg_;
};

class Init_ReferencePosition_position_confidence
{
public:
  explicit Init_ReferencePosition_position_confidence(::ros_etsi_its_msgs::msg::ReferencePosition & msg)
  : msg_(msg)
  {}
  Init_ReferencePosition_altitude position_confidence(::ros_etsi_its_msgs::msg::ReferencePosition::_position_confidence_type arg)
  {
    msg_.position_confidence = std::move(arg);
    return Init_ReferencePosition_altitude(msg_);
  }

private:
  ::ros_etsi_its_msgs::msg::ReferencePosition msg_;
};

class Init_ReferencePosition_longitude
{
public:
  explicit Init_ReferencePosition_longitude(::ros_etsi_its_msgs::msg::ReferencePosition & msg)
  : msg_(msg)
  {}
  Init_ReferencePosition_position_confidence longitude(::ros_etsi_its_msgs::msg::ReferencePosition::_longitude_type arg)
  {
    msg_.longitude = std::move(arg);
    return Init_ReferencePosition_position_confidence(msg_);
  }

private:
  ::ros_etsi_its_msgs::msg::ReferencePosition msg_;
};

class Init_ReferencePosition_latitude
{
public:
  Init_ReferencePosition_latitude()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ReferencePosition_longitude latitude(::ros_etsi_its_msgs::msg::ReferencePosition::_latitude_type arg)
  {
    msg_.latitude = std::move(arg);
    return Init_ReferencePosition_longitude(msg_);
  }

private:
  ::ros_etsi_its_msgs::msg::ReferencePosition msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_etsi_its_msgs::msg::ReferencePosition>()
{
  return ros_etsi_its_msgs::msg::builder::Init_ReferencePosition_latitude();
}

}  // namespace ros_etsi_its_msgs

#endif  // ROS_ETSI_ITS_MSGS__MSG__DETAIL__REFERENCE_POSITION__BUILDER_HPP_

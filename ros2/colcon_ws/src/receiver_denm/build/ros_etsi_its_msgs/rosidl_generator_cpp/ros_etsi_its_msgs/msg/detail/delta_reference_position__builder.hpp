// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros_etsi_its_msgs:msg/DeltaReferencePosition.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ros_etsi_its_msgs/msg/delta_reference_position.hpp"


#ifndef ROS_ETSI_ITS_MSGS__MSG__DETAIL__DELTA_REFERENCE_POSITION__BUILDER_HPP_
#define ROS_ETSI_ITS_MSGS__MSG__DETAIL__DELTA_REFERENCE_POSITION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros_etsi_its_msgs/msg/detail/delta_reference_position__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros_etsi_its_msgs
{

namespace msg
{

namespace builder
{

class Init_DeltaReferencePosition_delta_altitude
{
public:
  explicit Init_DeltaReferencePosition_delta_altitude(::ros_etsi_its_msgs::msg::DeltaReferencePosition & msg)
  : msg_(msg)
  {}
  ::ros_etsi_its_msgs::msg::DeltaReferencePosition delta_altitude(::ros_etsi_its_msgs::msg::DeltaReferencePosition::_delta_altitude_type arg)
  {
    msg_.delta_altitude = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_etsi_its_msgs::msg::DeltaReferencePosition msg_;
};

class Init_DeltaReferencePosition_delta_longitude
{
public:
  explicit Init_DeltaReferencePosition_delta_longitude(::ros_etsi_its_msgs::msg::DeltaReferencePosition & msg)
  : msg_(msg)
  {}
  Init_DeltaReferencePosition_delta_altitude delta_longitude(::ros_etsi_its_msgs::msg::DeltaReferencePosition::_delta_longitude_type arg)
  {
    msg_.delta_longitude = std::move(arg);
    return Init_DeltaReferencePosition_delta_altitude(msg_);
  }

private:
  ::ros_etsi_its_msgs::msg::DeltaReferencePosition msg_;
};

class Init_DeltaReferencePosition_delta_latitude
{
public:
  Init_DeltaReferencePosition_delta_latitude()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DeltaReferencePosition_delta_longitude delta_latitude(::ros_etsi_its_msgs::msg::DeltaReferencePosition::_delta_latitude_type arg)
  {
    msg_.delta_latitude = std::move(arg);
    return Init_DeltaReferencePosition_delta_longitude(msg_);
  }

private:
  ::ros_etsi_its_msgs::msg::DeltaReferencePosition msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_etsi_its_msgs::msg::DeltaReferencePosition>()
{
  return ros_etsi_its_msgs::msg::builder::Init_DeltaReferencePosition_delta_latitude();
}

}  // namespace ros_etsi_its_msgs

#endif  // ROS_ETSI_ITS_MSGS__MSG__DETAIL__DELTA_REFERENCE_POSITION__BUILDER_HPP_

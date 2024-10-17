// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros_etsi_its_msgs:msg/VehicleLength.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ros_etsi_its_msgs/msg/vehicle_length.hpp"


#ifndef ROS_ETSI_ITS_MSGS__MSG__DETAIL__VEHICLE_LENGTH__BUILDER_HPP_
#define ROS_ETSI_ITS_MSGS__MSG__DETAIL__VEHICLE_LENGTH__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros_etsi_its_msgs/msg/detail/vehicle_length__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros_etsi_its_msgs
{

namespace msg
{

namespace builder
{

class Init_VehicleLength_confidence_indication
{
public:
  explicit Init_VehicleLength_confidence_indication(::ros_etsi_its_msgs::msg::VehicleLength & msg)
  : msg_(msg)
  {}
  ::ros_etsi_its_msgs::msg::VehicleLength confidence_indication(::ros_etsi_its_msgs::msg::VehicleLength::_confidence_indication_type arg)
  {
    msg_.confidence_indication = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_etsi_its_msgs::msg::VehicleLength msg_;
};

class Init_VehicleLength_value
{
public:
  Init_VehicleLength_value()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VehicleLength_confidence_indication value(::ros_etsi_its_msgs::msg::VehicleLength::_value_type arg)
  {
    msg_.value = std::move(arg);
    return Init_VehicleLength_confidence_indication(msg_);
  }

private:
  ::ros_etsi_its_msgs::msg::VehicleLength msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_etsi_its_msgs::msg::VehicleLength>()
{
  return ros_etsi_its_msgs::msg::builder::Init_VehicleLength_value();
}

}  // namespace ros_etsi_its_msgs

#endif  // ROS_ETSI_ITS_MSGS__MSG__DETAIL__VEHICLE_LENGTH__BUILDER_HPP_

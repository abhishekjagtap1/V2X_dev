// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros_etsi_its_msgs:msg/BasicVehicleContainerLowFrequency.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ros_etsi_its_msgs/msg/basic_vehicle_container_low_frequency.hpp"


#ifndef ROS_ETSI_ITS_MSGS__MSG__DETAIL__BASIC_VEHICLE_CONTAINER_LOW_FREQUENCY__BUILDER_HPP_
#define ROS_ETSI_ITS_MSGS__MSG__DETAIL__BASIC_VEHICLE_CONTAINER_LOW_FREQUENCY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros_etsi_its_msgs/msg/detail/basic_vehicle_container_low_frequency__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros_etsi_its_msgs
{

namespace msg
{

namespace builder
{

class Init_BasicVehicleContainerLowFrequency_path_history
{
public:
  explicit Init_BasicVehicleContainerLowFrequency_path_history(::ros_etsi_its_msgs::msg::BasicVehicleContainerLowFrequency & msg)
  : msg_(msg)
  {}
  ::ros_etsi_its_msgs::msg::BasicVehicleContainerLowFrequency path_history(::ros_etsi_its_msgs::msg::BasicVehicleContainerLowFrequency::_path_history_type arg)
  {
    msg_.path_history = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_etsi_its_msgs::msg::BasicVehicleContainerLowFrequency msg_;
};

class Init_BasicVehicleContainerLowFrequency_exterior_lights
{
public:
  explicit Init_BasicVehicleContainerLowFrequency_exterior_lights(::ros_etsi_its_msgs::msg::BasicVehicleContainerLowFrequency & msg)
  : msg_(msg)
  {}
  Init_BasicVehicleContainerLowFrequency_path_history exterior_lights(::ros_etsi_its_msgs::msg::BasicVehicleContainerLowFrequency::_exterior_lights_type arg)
  {
    msg_.exterior_lights = std::move(arg);
    return Init_BasicVehicleContainerLowFrequency_path_history(msg_);
  }

private:
  ::ros_etsi_its_msgs::msg::BasicVehicleContainerLowFrequency msg_;
};

class Init_BasicVehicleContainerLowFrequency_vehicle_role
{
public:
  Init_BasicVehicleContainerLowFrequency_vehicle_role()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BasicVehicleContainerLowFrequency_exterior_lights vehicle_role(::ros_etsi_its_msgs::msg::BasicVehicleContainerLowFrequency::_vehicle_role_type arg)
  {
    msg_.vehicle_role = std::move(arg);
    return Init_BasicVehicleContainerLowFrequency_exterior_lights(msg_);
  }

private:
  ::ros_etsi_its_msgs::msg::BasicVehicleContainerLowFrequency msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_etsi_its_msgs::msg::BasicVehicleContainerLowFrequency>()
{
  return ros_etsi_its_msgs::msg::builder::Init_BasicVehicleContainerLowFrequency_vehicle_role();
}

}  // namespace ros_etsi_its_msgs

#endif  // ROS_ETSI_ITS_MSGS__MSG__DETAIL__BASIC_VEHICLE_CONTAINER_LOW_FREQUENCY__BUILDER_HPP_

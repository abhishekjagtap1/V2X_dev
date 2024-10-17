// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros_etsi_its_msgs:msg/SensorInformationContainer.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ros_etsi_its_msgs/msg/sensor_information_container.hpp"


#ifndef ROS_ETSI_ITS_MSGS__MSG__DETAIL__SENSOR_INFORMATION_CONTAINER__BUILDER_HPP_
#define ROS_ETSI_ITS_MSGS__MSG__DETAIL__SENSOR_INFORMATION_CONTAINER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros_etsi_its_msgs/msg/detail/sensor_information_container__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros_etsi_its_msgs
{

namespace msg
{

namespace builder
{

class Init_SensorInformationContainer_sensors_information
{
public:
  Init_SensorInformationContainer_sensors_information()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ros_etsi_its_msgs::msg::SensorInformationContainer sensors_information(::ros_etsi_its_msgs::msg::SensorInformationContainer::_sensors_information_type arg)
  {
    msg_.sensors_information = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_etsi_its_msgs::msg::SensorInformationContainer msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_etsi_its_msgs::msg::SensorInformationContainer>()
{
  return ros_etsi_its_msgs::msg::builder::Init_SensorInformationContainer_sensors_information();
}

}  // namespace ros_etsi_its_msgs

#endif  // ROS_ETSI_ITS_MSGS__MSG__DETAIL__SENSOR_INFORMATION_CONTAINER__BUILDER_HPP_

// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros_etsi_its_msgs:msg/DynamicStatus.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ros_etsi_its_msgs/msg/dynamic_status.hpp"


#ifndef ROS_ETSI_ITS_MSGS__MSG__DETAIL__DYNAMIC_STATUS__BUILDER_HPP_
#define ROS_ETSI_ITS_MSGS__MSG__DETAIL__DYNAMIC_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros_etsi_its_msgs/msg/detail/dynamic_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros_etsi_its_msgs
{

namespace msg
{

namespace builder
{

class Init_DynamicStatus_value
{
public:
  Init_DynamicStatus_value()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ros_etsi_its_msgs::msg::DynamicStatus value(::ros_etsi_its_msgs::msg::DynamicStatus::_value_type arg)
  {
    msg_.value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_etsi_its_msgs::msg::DynamicStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_etsi_its_msgs::msg::DynamicStatus>()
{
  return ros_etsi_its_msgs::msg::builder::Init_DynamicStatus_value();
}

}  // namespace ros_etsi_its_msgs

#endif  // ROS_ETSI_ITS_MSGS__MSG__DETAIL__DYNAMIC_STATUS__BUILDER_HPP_

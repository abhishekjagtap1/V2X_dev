// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros_etsi_its_msgs:msg/MovementState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ros_etsi_its_msgs/msg/movement_state.hpp"


#ifndef ROS_ETSI_ITS_MSGS__MSG__DETAIL__MOVEMENT_STATE__BUILDER_HPP_
#define ROS_ETSI_ITS_MSGS__MSG__DETAIL__MOVEMENT_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros_etsi_its_msgs/msg/detail/movement_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros_etsi_its_msgs
{

namespace msg
{

namespace builder
{

class Init_MovementState_state_time_speed
{
public:
  explicit Init_MovementState_state_time_speed(::ros_etsi_its_msgs::msg::MovementState & msg)
  : msg_(msg)
  {}
  ::ros_etsi_its_msgs::msg::MovementState state_time_speed(::ros_etsi_its_msgs::msg::MovementState::_state_time_speed_type arg)
  {
    msg_.state_time_speed = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_etsi_its_msgs::msg::MovementState msg_;
};

class Init_MovementState_signal_group
{
public:
  Init_MovementState_signal_group()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MovementState_state_time_speed signal_group(::ros_etsi_its_msgs::msg::MovementState::_signal_group_type arg)
  {
    msg_.signal_group = std::move(arg);
    return Init_MovementState_state_time_speed(msg_);
  }

private:
  ::ros_etsi_its_msgs::msg::MovementState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_etsi_its_msgs::msg::MovementState>()
{
  return ros_etsi_its_msgs::msg::builder::Init_MovementState_signal_group();
}

}  // namespace ros_etsi_its_msgs

#endif  // ROS_ETSI_ITS_MSGS__MSG__DETAIL__MOVEMENT_STATE__BUILDER_HPP_

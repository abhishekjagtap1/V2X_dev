// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros_etsi_its_msgs:msg/ActionID.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ros_etsi_its_msgs/msg/action_id.hpp"


#ifndef ROS_ETSI_ITS_MSGS__MSG__DETAIL__ACTION_ID__BUILDER_HPP_
#define ROS_ETSI_ITS_MSGS__MSG__DETAIL__ACTION_ID__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros_etsi_its_msgs/msg/detail/action_id__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros_etsi_its_msgs
{

namespace msg
{

namespace builder
{

class Init_ActionID_sequence_number
{
public:
  explicit Init_ActionID_sequence_number(::ros_etsi_its_msgs::msg::ActionID & msg)
  : msg_(msg)
  {}
  ::ros_etsi_its_msgs::msg::ActionID sequence_number(::ros_etsi_its_msgs::msg::ActionID::_sequence_number_type arg)
  {
    msg_.sequence_number = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_etsi_its_msgs::msg::ActionID msg_;
};

class Init_ActionID_station_id
{
public:
  Init_ActionID_station_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ActionID_sequence_number station_id(::ros_etsi_its_msgs::msg::ActionID::_station_id_type arg)
  {
    msg_.station_id = std::move(arg);
    return Init_ActionID_sequence_number(msg_);
  }

private:
  ::ros_etsi_its_msgs::msg::ActionID msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_etsi_its_msgs::msg::ActionID>()
{
  return ros_etsi_its_msgs::msg::builder::Init_ActionID_station_id();
}

}  // namespace ros_etsi_its_msgs

#endif  // ROS_ETSI_ITS_MSGS__MSG__DETAIL__ACTION_ID__BUILDER_HPP_

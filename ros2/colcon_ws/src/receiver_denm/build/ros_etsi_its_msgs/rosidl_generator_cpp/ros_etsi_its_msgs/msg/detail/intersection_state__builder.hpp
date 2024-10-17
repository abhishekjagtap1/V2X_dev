// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros_etsi_its_msgs:msg/IntersectionState.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ros_etsi_its_msgs/msg/intersection_state.hpp"


#ifndef ROS_ETSI_ITS_MSGS__MSG__DETAIL__INTERSECTION_STATE__BUILDER_HPP_
#define ROS_ETSI_ITS_MSGS__MSG__DETAIL__INTERSECTION_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros_etsi_its_msgs/msg/detail/intersection_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros_etsi_its_msgs
{

namespace msg
{

namespace builder
{

class Init_IntersectionState_states
{
public:
  explicit Init_IntersectionState_states(::ros_etsi_its_msgs::msg::IntersectionState & msg)
  : msg_(msg)
  {}
  ::ros_etsi_its_msgs::msg::IntersectionState states(::ros_etsi_its_msgs::msg::IntersectionState::_states_type arg)
  {
    msg_.states = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_etsi_its_msgs::msg::IntersectionState msg_;
};

class Init_IntersectionState_status
{
public:
  explicit Init_IntersectionState_status(::ros_etsi_its_msgs::msg::IntersectionState & msg)
  : msg_(msg)
  {}
  Init_IntersectionState_states status(::ros_etsi_its_msgs::msg::IntersectionState::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_IntersectionState_states(msg_);
  }

private:
  ::ros_etsi_its_msgs::msg::IntersectionState msg_;
};

class Init_IntersectionState_revision
{
public:
  explicit Init_IntersectionState_revision(::ros_etsi_its_msgs::msg::IntersectionState & msg)
  : msg_(msg)
  {}
  Init_IntersectionState_status revision(::ros_etsi_its_msgs::msg::IntersectionState::_revision_type arg)
  {
    msg_.revision = std::move(arg);
    return Init_IntersectionState_status(msg_);
  }

private:
  ::ros_etsi_its_msgs::msg::IntersectionState msg_;
};

class Init_IntersectionState_id
{
public:
  Init_IntersectionState_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_IntersectionState_revision id(::ros_etsi_its_msgs::msg::IntersectionState::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_IntersectionState_revision(msg_);
  }

private:
  ::ros_etsi_its_msgs::msg::IntersectionState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_etsi_its_msgs::msg::IntersectionState>()
{
  return ros_etsi_its_msgs::msg::builder::Init_IntersectionState_id();
}

}  // namespace ros_etsi_its_msgs

#endif  // ROS_ETSI_ITS_MSGS__MSG__DETAIL__INTERSECTION_STATE__BUILDER_HPP_

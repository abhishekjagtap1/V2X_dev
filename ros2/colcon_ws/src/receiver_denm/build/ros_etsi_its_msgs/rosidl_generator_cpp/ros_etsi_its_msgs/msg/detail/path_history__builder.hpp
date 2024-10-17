// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros_etsi_its_msgs:msg/PathHistory.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ros_etsi_its_msgs/msg/path_history.hpp"


#ifndef ROS_ETSI_ITS_MSGS__MSG__DETAIL__PATH_HISTORY__BUILDER_HPP_
#define ROS_ETSI_ITS_MSGS__MSG__DETAIL__PATH_HISTORY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros_etsi_its_msgs/msg/detail/path_history__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros_etsi_its_msgs
{

namespace msg
{

namespace builder
{

class Init_PathHistory_points
{
public:
  Init_PathHistory_points()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ros_etsi_its_msgs::msg::PathHistory points(::ros_etsi_its_msgs::msg::PathHistory::_points_type arg)
  {
    msg_.points = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_etsi_its_msgs::msg::PathHistory msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_etsi_its_msgs::msg::PathHistory>()
{
  return ros_etsi_its_msgs::msg::builder::Init_PathHistory_points();
}

}  // namespace ros_etsi_its_msgs

#endif  // ROS_ETSI_ITS_MSGS__MSG__DETAIL__PATH_HISTORY__BUILDER_HPP_

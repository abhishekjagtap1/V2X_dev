// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros_etsi_its_msgs:msg/MatchedPosition.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ros_etsi_its_msgs/msg/matched_position.hpp"


#ifndef ROS_ETSI_ITS_MSGS__MSG__DETAIL__MATCHED_POSITION__BUILDER_HPP_
#define ROS_ETSI_ITS_MSGS__MSG__DETAIL__MATCHED_POSITION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros_etsi_its_msgs/msg/detail/matched_position__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros_etsi_its_msgs
{

namespace msg
{

namespace builder
{

class Init_MatchedPosition_lane_id
{
public:
  Init_MatchedPosition_lane_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ros_etsi_its_msgs::msg::MatchedPosition lane_id(::ros_etsi_its_msgs::msg::MatchedPosition::_lane_id_type arg)
  {
    msg_.lane_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_etsi_its_msgs::msg::MatchedPosition msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_etsi_its_msgs::msg::MatchedPosition>()
{
  return ros_etsi_its_msgs::msg::builder::Init_MatchedPosition_lane_id();
}

}  // namespace ros_etsi_its_msgs

#endif  // ROS_ETSI_ITS_MSGS__MSG__DETAIL__MATCHED_POSITION__BUILDER_HPP_

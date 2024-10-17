// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ros_etsi_its_msgs:msg/CauseCode.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "ros_etsi_its_msgs/msg/cause_code.hpp"


#ifndef ROS_ETSI_ITS_MSGS__MSG__DETAIL__CAUSE_CODE__BUILDER_HPP_
#define ROS_ETSI_ITS_MSGS__MSG__DETAIL__CAUSE_CODE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ros_etsi_its_msgs/msg/detail/cause_code__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ros_etsi_its_msgs
{

namespace msg
{

namespace builder
{

class Init_CauseCode_sub_cause_code
{
public:
  explicit Init_CauseCode_sub_cause_code(::ros_etsi_its_msgs::msg::CauseCode & msg)
  : msg_(msg)
  {}
  ::ros_etsi_its_msgs::msg::CauseCode sub_cause_code(::ros_etsi_its_msgs::msg::CauseCode::_sub_cause_code_type arg)
  {
    msg_.sub_cause_code = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ros_etsi_its_msgs::msg::CauseCode msg_;
};

class Init_CauseCode_cause_code
{
public:
  Init_CauseCode_cause_code()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CauseCode_sub_cause_code cause_code(::ros_etsi_its_msgs::msg::CauseCode::_cause_code_type arg)
  {
    msg_.cause_code = std::move(arg);
    return Init_CauseCode_sub_cause_code(msg_);
  }

private:
  ::ros_etsi_its_msgs::msg::CauseCode msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ros_etsi_its_msgs::msg::CauseCode>()
{
  return ros_etsi_its_msgs::msg::builder::Init_CauseCode_cause_code();
}

}  // namespace ros_etsi_its_msgs

#endif  // ROS_ETSI_ITS_MSGS__MSG__DETAIL__CAUSE_CODE__BUILDER_HPP_

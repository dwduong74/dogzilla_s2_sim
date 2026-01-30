// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from yahboom_msgs:msg/Position.idl
// generated code does not contain a copyright notice

#ifndef YAHBOOM_MSGS__MSG__DETAIL__POSITION__BUILDER_HPP_
#define YAHBOOM_MSGS__MSG__DETAIL__POSITION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "yahboom_msgs/msg/detail/position__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace yahboom_msgs
{

namespace msg
{

namespace builder
{

class Init_Position_distance
{
public:
  explicit Init_Position_distance(::yahboom_msgs::msg::Position & msg)
  : msg_(msg)
  {}
  ::yahboom_msgs::msg::Position distance(::yahboom_msgs::msg::Position::_distance_type arg)
  {
    msg_.distance = std::move(arg);
    return std::move(msg_);
  }

private:
  ::yahboom_msgs::msg::Position msg_;
};

class Init_Position_angley
{
public:
  explicit Init_Position_angley(::yahboom_msgs::msg::Position & msg)
  : msg_(msg)
  {}
  Init_Position_distance angley(::yahboom_msgs::msg::Position::_angley_type arg)
  {
    msg_.angley = std::move(arg);
    return Init_Position_distance(msg_);
  }

private:
  ::yahboom_msgs::msg::Position msg_;
};

class Init_Position_anglex
{
public:
  Init_Position_anglex()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Position_angley anglex(::yahboom_msgs::msg::Position::_anglex_type arg)
  {
    msg_.anglex = std::move(arg);
    return Init_Position_angley(msg_);
  }

private:
  ::yahboom_msgs::msg::Position msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::yahboom_msgs::msg::Position>()
{
  return yahboom_msgs::msg::builder::Init_Position_anglex();
}

}  // namespace yahboom_msgs

#endif  // YAHBOOM_MSGS__MSG__DETAIL__POSITION__BUILDER_HPP_

// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from image_color_lab:msg/Lab.idl
// generated code does not contain a copyright notice

#ifndef IMAGE_COLOR_LAB__MSG__DETAIL__LAB__BUILDER_HPP_
#define IMAGE_COLOR_LAB__MSG__DETAIL__LAB__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "image_color_lab/msg/detail/lab__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace image_color_lab
{

namespace msg
{

namespace builder
{

class Init_Lab_b_max
{
public:
  explicit Init_Lab_b_max(::image_color_lab::msg::Lab & msg)
  : msg_(msg)
  {}
  ::image_color_lab::msg::Lab b_max(::image_color_lab::msg::Lab::_b_max_type arg)
  {
    msg_.b_max = std::move(arg);
    return std::move(msg_);
  }

private:
  ::image_color_lab::msg::Lab msg_;
};

class Init_Lab_a_max
{
public:
  explicit Init_Lab_a_max(::image_color_lab::msg::Lab & msg)
  : msg_(msg)
  {}
  Init_Lab_b_max a_max(::image_color_lab::msg::Lab::_a_max_type arg)
  {
    msg_.a_max = std::move(arg);
    return Init_Lab_b_max(msg_);
  }

private:
  ::image_color_lab::msg::Lab msg_;
};

class Init_Lab_l_max
{
public:
  explicit Init_Lab_l_max(::image_color_lab::msg::Lab & msg)
  : msg_(msg)
  {}
  Init_Lab_a_max l_max(::image_color_lab::msg::Lab::_l_max_type arg)
  {
    msg_.l_max = std::move(arg);
    return Init_Lab_a_max(msg_);
  }

private:
  ::image_color_lab::msg::Lab msg_;
};

class Init_Lab_b_min
{
public:
  explicit Init_Lab_b_min(::image_color_lab::msg::Lab & msg)
  : msg_(msg)
  {}
  Init_Lab_l_max b_min(::image_color_lab::msg::Lab::_b_min_type arg)
  {
    msg_.b_min = std::move(arg);
    return Init_Lab_l_max(msg_);
  }

private:
  ::image_color_lab::msg::Lab msg_;
};

class Init_Lab_a_min
{
public:
  explicit Init_Lab_a_min(::image_color_lab::msg::Lab & msg)
  : msg_(msg)
  {}
  Init_Lab_b_min a_min(::image_color_lab::msg::Lab::_a_min_type arg)
  {
    msg_.a_min = std::move(arg);
    return Init_Lab_b_min(msg_);
  }

private:
  ::image_color_lab::msg::Lab msg_;
};

class Init_Lab_l_min
{
public:
  Init_Lab_l_min()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Lab_a_min l_min(::image_color_lab::msg::Lab::_l_min_type arg)
  {
    msg_.l_min = std::move(arg);
    return Init_Lab_a_min(msg_);
  }

private:
  ::image_color_lab::msg::Lab msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::image_color_lab::msg::Lab>()
{
  return image_color_lab::msg::builder::Init_Lab_l_min();
}

}  // namespace image_color_lab

#endif  // IMAGE_COLOR_LAB__MSG__DETAIL__LAB__BUILDER_HPP_

// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from image_color_lab:msg/StringStamped.idl
// generated code does not contain a copyright notice

#ifndef IMAGE_COLOR_LAB__MSG__DETAIL__STRING_STAMPED__BUILDER_HPP_
#define IMAGE_COLOR_LAB__MSG__DETAIL__STRING_STAMPED__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "image_color_lab/msg/detail/string_stamped__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace image_color_lab
{

namespace msg
{

namespace builder
{

class Init_StringStamped_data
{
public:
  explicit Init_StringStamped_data(::image_color_lab::msg::StringStamped & msg)
  : msg_(msg)
  {}
  ::image_color_lab::msg::StringStamped data(::image_color_lab::msg::StringStamped::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::image_color_lab::msg::StringStamped msg_;
};

class Init_StringStamped_header
{
public:
  Init_StringStamped_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_StringStamped_data header(::image_color_lab::msg::StringStamped::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_StringStamped_data(msg_);
  }

private:
  ::image_color_lab::msg::StringStamped msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::image_color_lab::msg::StringStamped>()
{
  return image_color_lab::msg::builder::Init_StringStamped_header();
}

}  // namespace image_color_lab

#endif  // IMAGE_COLOR_LAB__MSG__DETAIL__STRING_STAMPED__BUILDER_HPP_

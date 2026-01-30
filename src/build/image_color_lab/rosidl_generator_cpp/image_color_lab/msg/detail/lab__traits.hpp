// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from image_color_lab:msg/Lab.idl
// generated code does not contain a copyright notice

#ifndef IMAGE_COLOR_LAB__MSG__DETAIL__LAB__TRAITS_HPP_
#define IMAGE_COLOR_LAB__MSG__DETAIL__LAB__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "image_color_lab/msg/detail/lab__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace image_color_lab
{

namespace msg
{

inline void to_flow_style_yaml(
  const Lab & msg,
  std::ostream & out)
{
  out << "{";
  // member: l_min
  {
    out << "l_min: ";
    rosidl_generator_traits::value_to_yaml(msg.l_min, out);
    out << ", ";
  }

  // member: a_min
  {
    out << "a_min: ";
    rosidl_generator_traits::value_to_yaml(msg.a_min, out);
    out << ", ";
  }

  // member: b_min
  {
    out << "b_min: ";
    rosidl_generator_traits::value_to_yaml(msg.b_min, out);
    out << ", ";
  }

  // member: l_max
  {
    out << "l_max: ";
    rosidl_generator_traits::value_to_yaml(msg.l_max, out);
    out << ", ";
  }

  // member: a_max
  {
    out << "a_max: ";
    rosidl_generator_traits::value_to_yaml(msg.a_max, out);
    out << ", ";
  }

  // member: b_max
  {
    out << "b_max: ";
    rosidl_generator_traits::value_to_yaml(msg.b_max, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Lab & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: l_min
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "l_min: ";
    rosidl_generator_traits::value_to_yaml(msg.l_min, out);
    out << "\n";
  }

  // member: a_min
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "a_min: ";
    rosidl_generator_traits::value_to_yaml(msg.a_min, out);
    out << "\n";
  }

  // member: b_min
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "b_min: ";
    rosidl_generator_traits::value_to_yaml(msg.b_min, out);
    out << "\n";
  }

  // member: l_max
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "l_max: ";
    rosidl_generator_traits::value_to_yaml(msg.l_max, out);
    out << "\n";
  }

  // member: a_max
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "a_max: ";
    rosidl_generator_traits::value_to_yaml(msg.a_max, out);
    out << "\n";
  }

  // member: b_max
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "b_max: ";
    rosidl_generator_traits::value_to_yaml(msg.b_max, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Lab & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace image_color_lab

namespace rosidl_generator_traits
{

[[deprecated("use image_color_lab::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const image_color_lab::msg::Lab & msg,
  std::ostream & out, size_t indentation = 0)
{
  image_color_lab::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use image_color_lab::msg::to_yaml() instead")]]
inline std::string to_yaml(const image_color_lab::msg::Lab & msg)
{
  return image_color_lab::msg::to_yaml(msg);
}

template<>
inline const char * data_type<image_color_lab::msg::Lab>()
{
  return "image_color_lab::msg::Lab";
}

template<>
inline const char * name<image_color_lab::msg::Lab>()
{
  return "image_color_lab/msg/Lab";
}

template<>
struct has_fixed_size<image_color_lab::msg::Lab>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<image_color_lab::msg::Lab>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<image_color_lab::msg::Lab>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // IMAGE_COLOR_LAB__MSG__DETAIL__LAB__TRAITS_HPP_

// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from image_color_lab:msg/StringStamped.idl
// generated code does not contain a copyright notice

#ifndef IMAGE_COLOR_LAB__MSG__DETAIL__STRING_STAMPED__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define IMAGE_COLOR_LAB__MSG__DETAIL__STRING_STAMPED__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "image_color_lab/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "image_color_lab/msg/detail/string_stamped__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace image_color_lab
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_image_color_lab
cdr_serialize(
  const image_color_lab::msg::StringStamped & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_image_color_lab
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  image_color_lab::msg::StringStamped & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_image_color_lab
get_serialized_size(
  const image_color_lab::msg::StringStamped & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_image_color_lab
max_serialized_size_StringStamped(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace image_color_lab

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_image_color_lab
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, image_color_lab, msg, StringStamped)();

#ifdef __cplusplus
}
#endif

#endif  // IMAGE_COLOR_LAB__MSG__DETAIL__STRING_STAMPED__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

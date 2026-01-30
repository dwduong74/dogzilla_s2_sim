// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from image_color_lab:msg/Lab.idl
// generated code does not contain a copyright notice
#include "image_color_lab/msg/detail/lab__rosidl_typesupport_fastrtps_cpp.hpp"
#include "image_color_lab/msg/detail/lab__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace image_color_lab
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_image_color_lab
cdr_serialize(
  const image_color_lab::msg::Lab & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: l_min
  cdr << ros_message.l_min;
  // Member: a_min
  cdr << ros_message.a_min;
  // Member: b_min
  cdr << ros_message.b_min;
  // Member: l_max
  cdr << ros_message.l_max;
  // Member: a_max
  cdr << ros_message.a_max;
  // Member: b_max
  cdr << ros_message.b_max;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_image_color_lab
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  image_color_lab::msg::Lab & ros_message)
{
  // Member: l_min
  cdr >> ros_message.l_min;

  // Member: a_min
  cdr >> ros_message.a_min;

  // Member: b_min
  cdr >> ros_message.b_min;

  // Member: l_max
  cdr >> ros_message.l_max;

  // Member: a_max
  cdr >> ros_message.a_max;

  // Member: b_max
  cdr >> ros_message.b_max;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_image_color_lab
get_serialized_size(
  const image_color_lab::msg::Lab & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: l_min
  {
    size_t item_size = sizeof(ros_message.l_min);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: a_min
  {
    size_t item_size = sizeof(ros_message.a_min);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: b_min
  {
    size_t item_size = sizeof(ros_message.b_min);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: l_max
  {
    size_t item_size = sizeof(ros_message.l_max);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: a_max
  {
    size_t item_size = sizeof(ros_message.a_max);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: b_max
  {
    size_t item_size = sizeof(ros_message.b_max);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_image_color_lab
max_serialized_size_Lab(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: l_min
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: a_min
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: b_min
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: l_max
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: a_max
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: b_max
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = image_color_lab::msg::Lab;
    is_plain =
      (
      offsetof(DataType, b_max) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _Lab__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const image_color_lab::msg::Lab *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _Lab__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<image_color_lab::msg::Lab *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _Lab__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const image_color_lab::msg::Lab *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _Lab__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_Lab(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _Lab__callbacks = {
  "image_color_lab::msg",
  "Lab",
  _Lab__cdr_serialize,
  _Lab__cdr_deserialize,
  _Lab__get_serialized_size,
  _Lab__max_serialized_size
};

static rosidl_message_type_support_t _Lab__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_Lab__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace image_color_lab

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_image_color_lab
const rosidl_message_type_support_t *
get_message_type_support_handle<image_color_lab::msg::Lab>()
{
  return &image_color_lab::msg::typesupport_fastrtps_cpp::_Lab__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, image_color_lab, msg, Lab)() {
  return &image_color_lab::msg::typesupport_fastrtps_cpp::_Lab__handle;
}

#ifdef __cplusplus
}
#endif

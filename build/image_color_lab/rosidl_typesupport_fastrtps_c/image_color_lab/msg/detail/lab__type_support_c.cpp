// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from image_color_lab:msg/Lab.idl
// generated code does not contain a copyright notice
#include "image_color_lab/msg/detail/lab__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "image_color_lab/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "image_color_lab/msg/detail/lab__struct.h"
#include "image_color_lab/msg/detail/lab__functions.h"
#include "fastcdr/Cdr.h"

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

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _Lab__ros_msg_type = image_color_lab__msg__Lab;

static bool _Lab__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Lab__ros_msg_type * ros_message = static_cast<const _Lab__ros_msg_type *>(untyped_ros_message);
  // Field name: l_min
  {
    cdr << ros_message->l_min;
  }

  // Field name: a_min
  {
    cdr << ros_message->a_min;
  }

  // Field name: b_min
  {
    cdr << ros_message->b_min;
  }

  // Field name: l_max
  {
    cdr << ros_message->l_max;
  }

  // Field name: a_max
  {
    cdr << ros_message->a_max;
  }

  // Field name: b_max
  {
    cdr << ros_message->b_max;
  }

  return true;
}

static bool _Lab__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Lab__ros_msg_type * ros_message = static_cast<_Lab__ros_msg_type *>(untyped_ros_message);
  // Field name: l_min
  {
    cdr >> ros_message->l_min;
  }

  // Field name: a_min
  {
    cdr >> ros_message->a_min;
  }

  // Field name: b_min
  {
    cdr >> ros_message->b_min;
  }

  // Field name: l_max
  {
    cdr >> ros_message->l_max;
  }

  // Field name: a_max
  {
    cdr >> ros_message->a_max;
  }

  // Field name: b_max
  {
    cdr >> ros_message->b_max;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_image_color_lab
size_t get_serialized_size_image_color_lab__msg__Lab(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Lab__ros_msg_type * ros_message = static_cast<const _Lab__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name l_min
  {
    size_t item_size = sizeof(ros_message->l_min);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name a_min
  {
    size_t item_size = sizeof(ros_message->a_min);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name b_min
  {
    size_t item_size = sizeof(ros_message->b_min);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name l_max
  {
    size_t item_size = sizeof(ros_message->l_max);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name a_max
  {
    size_t item_size = sizeof(ros_message->a_max);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name b_max
  {
    size_t item_size = sizeof(ros_message->b_max);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Lab__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_image_color_lab__msg__Lab(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_image_color_lab
size_t max_serialized_size_image_color_lab__msg__Lab(
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

  // member: l_min
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: a_min
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: b_min
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: l_max
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: a_max
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: b_max
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
    using DataType = image_color_lab__msg__Lab;
    is_plain =
      (
      offsetof(DataType, b_max) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _Lab__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_image_color_lab__msg__Lab(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_Lab = {
  "image_color_lab::msg",
  "Lab",
  _Lab__cdr_serialize,
  _Lab__cdr_deserialize,
  _Lab__get_serialized_size,
  _Lab__max_serialized_size
};

static rosidl_message_type_support_t _Lab__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Lab,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, image_color_lab, msg, Lab)() {
  return &_Lab__type_support;
}

#if defined(__cplusplus)
}
#endif

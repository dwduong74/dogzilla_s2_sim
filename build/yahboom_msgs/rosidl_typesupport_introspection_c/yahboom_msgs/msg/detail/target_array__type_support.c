// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from yahboom_msgs:msg/TargetArray.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "yahboom_msgs/msg/detail/target_array__rosidl_typesupport_introspection_c.h"
#include "yahboom_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "yahboom_msgs/msg/detail/target_array__functions.h"
#include "yahboom_msgs/msg/detail/target_array__struct.h"


// Include directives for member types
// Member `data`
#include "yahboom_msgs/msg/target.h"
// Member `data`
#include "yahboom_msgs/msg/detail/target__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void yahboom_msgs__msg__TargetArray__rosidl_typesupport_introspection_c__TargetArray_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  yahboom_msgs__msg__TargetArray__init(message_memory);
}

void yahboom_msgs__msg__TargetArray__rosidl_typesupport_introspection_c__TargetArray_fini_function(void * message_memory)
{
  yahboom_msgs__msg__TargetArray__fini(message_memory);
}

size_t yahboom_msgs__msg__TargetArray__rosidl_typesupport_introspection_c__size_function__TargetArray__data(
  const void * untyped_member)
{
  const yahboom_msgs__msg__Target__Sequence * member =
    (const yahboom_msgs__msg__Target__Sequence *)(untyped_member);
  return member->size;
}

const void * yahboom_msgs__msg__TargetArray__rosidl_typesupport_introspection_c__get_const_function__TargetArray__data(
  const void * untyped_member, size_t index)
{
  const yahboom_msgs__msg__Target__Sequence * member =
    (const yahboom_msgs__msg__Target__Sequence *)(untyped_member);
  return &member->data[index];
}

void * yahboom_msgs__msg__TargetArray__rosidl_typesupport_introspection_c__get_function__TargetArray__data(
  void * untyped_member, size_t index)
{
  yahboom_msgs__msg__Target__Sequence * member =
    (yahboom_msgs__msg__Target__Sequence *)(untyped_member);
  return &member->data[index];
}

void yahboom_msgs__msg__TargetArray__rosidl_typesupport_introspection_c__fetch_function__TargetArray__data(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const yahboom_msgs__msg__Target * item =
    ((const yahboom_msgs__msg__Target *)
    yahboom_msgs__msg__TargetArray__rosidl_typesupport_introspection_c__get_const_function__TargetArray__data(untyped_member, index));
  yahboom_msgs__msg__Target * value =
    (yahboom_msgs__msg__Target *)(untyped_value);
  *value = *item;
}

void yahboom_msgs__msg__TargetArray__rosidl_typesupport_introspection_c__assign_function__TargetArray__data(
  void * untyped_member, size_t index, const void * untyped_value)
{
  yahboom_msgs__msg__Target * item =
    ((yahboom_msgs__msg__Target *)
    yahboom_msgs__msg__TargetArray__rosidl_typesupport_introspection_c__get_function__TargetArray__data(untyped_member, index));
  const yahboom_msgs__msg__Target * value =
    (const yahboom_msgs__msg__Target *)(untyped_value);
  *item = *value;
}

bool yahboom_msgs__msg__TargetArray__rosidl_typesupport_introspection_c__resize_function__TargetArray__data(
  void * untyped_member, size_t size)
{
  yahboom_msgs__msg__Target__Sequence * member =
    (yahboom_msgs__msg__Target__Sequence *)(untyped_member);
  yahboom_msgs__msg__Target__Sequence__fini(member);
  return yahboom_msgs__msg__Target__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember yahboom_msgs__msg__TargetArray__rosidl_typesupport_introspection_c__TargetArray_message_member_array[1] = {
  {
    "data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(yahboom_msgs__msg__TargetArray, data),  // bytes offset in struct
    NULL,  // default value
    yahboom_msgs__msg__TargetArray__rosidl_typesupport_introspection_c__size_function__TargetArray__data,  // size() function pointer
    yahboom_msgs__msg__TargetArray__rosidl_typesupport_introspection_c__get_const_function__TargetArray__data,  // get_const(index) function pointer
    yahboom_msgs__msg__TargetArray__rosidl_typesupport_introspection_c__get_function__TargetArray__data,  // get(index) function pointer
    yahboom_msgs__msg__TargetArray__rosidl_typesupport_introspection_c__fetch_function__TargetArray__data,  // fetch(index, &value) function pointer
    yahboom_msgs__msg__TargetArray__rosidl_typesupport_introspection_c__assign_function__TargetArray__data,  // assign(index, value) function pointer
    yahboom_msgs__msg__TargetArray__rosidl_typesupport_introspection_c__resize_function__TargetArray__data  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers yahboom_msgs__msg__TargetArray__rosidl_typesupport_introspection_c__TargetArray_message_members = {
  "yahboom_msgs__msg",  // message namespace
  "TargetArray",  // message name
  1,  // number of fields
  sizeof(yahboom_msgs__msg__TargetArray),
  yahboom_msgs__msg__TargetArray__rosidl_typesupport_introspection_c__TargetArray_message_member_array,  // message members
  yahboom_msgs__msg__TargetArray__rosidl_typesupport_introspection_c__TargetArray_init_function,  // function to initialize message memory (memory has to be allocated)
  yahboom_msgs__msg__TargetArray__rosidl_typesupport_introspection_c__TargetArray_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t yahboom_msgs__msg__TargetArray__rosidl_typesupport_introspection_c__TargetArray_message_type_support_handle = {
  0,
  &yahboom_msgs__msg__TargetArray__rosidl_typesupport_introspection_c__TargetArray_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_yahboom_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, yahboom_msgs, msg, TargetArray)() {
  yahboom_msgs__msg__TargetArray__rosidl_typesupport_introspection_c__TargetArray_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, yahboom_msgs, msg, Target)();
  if (!yahboom_msgs__msg__TargetArray__rosidl_typesupport_introspection_c__TargetArray_message_type_support_handle.typesupport_identifier) {
    yahboom_msgs__msg__TargetArray__rosidl_typesupport_introspection_c__TargetArray_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &yahboom_msgs__msg__TargetArray__rosidl_typesupport_introspection_c__TargetArray_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

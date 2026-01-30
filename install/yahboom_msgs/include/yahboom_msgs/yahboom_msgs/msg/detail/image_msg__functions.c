// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from yahboom_msgs:msg/ImageMsg.idl
// generated code does not contain a copyright notice
#include "yahboom_msgs/msg/detail/image_msg__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `data`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
yahboom_msgs__msg__ImageMsg__init(yahboom_msgs__msg__ImageMsg * msg)
{
  if (!msg) {
    return false;
  }
  // height
  // width
  // channels
  // data
  if (!rosidl_runtime_c__uint8__Sequence__init(&msg->data, 0)) {
    yahboom_msgs__msg__ImageMsg__fini(msg);
    return false;
  }
  return true;
}

void
yahboom_msgs__msg__ImageMsg__fini(yahboom_msgs__msg__ImageMsg * msg)
{
  if (!msg) {
    return;
  }
  // height
  // width
  // channels
  // data
  rosidl_runtime_c__uint8__Sequence__fini(&msg->data);
}

bool
yahboom_msgs__msg__ImageMsg__are_equal(const yahboom_msgs__msg__ImageMsg * lhs, const yahboom_msgs__msg__ImageMsg * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // height
  if (lhs->height != rhs->height) {
    return false;
  }
  // width
  if (lhs->width != rhs->width) {
    return false;
  }
  // channels
  if (lhs->channels != rhs->channels) {
    return false;
  }
  // data
  if (!rosidl_runtime_c__uint8__Sequence__are_equal(
      &(lhs->data), &(rhs->data)))
  {
    return false;
  }
  return true;
}

bool
yahboom_msgs__msg__ImageMsg__copy(
  const yahboom_msgs__msg__ImageMsg * input,
  yahboom_msgs__msg__ImageMsg * output)
{
  if (!input || !output) {
    return false;
  }
  // height
  output->height = input->height;
  // width
  output->width = input->width;
  // channels
  output->channels = input->channels;
  // data
  if (!rosidl_runtime_c__uint8__Sequence__copy(
      &(input->data), &(output->data)))
  {
    return false;
  }
  return true;
}

yahboom_msgs__msg__ImageMsg *
yahboom_msgs__msg__ImageMsg__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  yahboom_msgs__msg__ImageMsg * msg = (yahboom_msgs__msg__ImageMsg *)allocator.allocate(sizeof(yahboom_msgs__msg__ImageMsg), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(yahboom_msgs__msg__ImageMsg));
  bool success = yahboom_msgs__msg__ImageMsg__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
yahboom_msgs__msg__ImageMsg__destroy(yahboom_msgs__msg__ImageMsg * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    yahboom_msgs__msg__ImageMsg__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
yahboom_msgs__msg__ImageMsg__Sequence__init(yahboom_msgs__msg__ImageMsg__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  yahboom_msgs__msg__ImageMsg * data = NULL;

  if (size) {
    data = (yahboom_msgs__msg__ImageMsg *)allocator.zero_allocate(size, sizeof(yahboom_msgs__msg__ImageMsg), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = yahboom_msgs__msg__ImageMsg__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        yahboom_msgs__msg__ImageMsg__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
yahboom_msgs__msg__ImageMsg__Sequence__fini(yahboom_msgs__msg__ImageMsg__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      yahboom_msgs__msg__ImageMsg__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

yahboom_msgs__msg__ImageMsg__Sequence *
yahboom_msgs__msg__ImageMsg__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  yahboom_msgs__msg__ImageMsg__Sequence * array = (yahboom_msgs__msg__ImageMsg__Sequence *)allocator.allocate(sizeof(yahboom_msgs__msg__ImageMsg__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = yahboom_msgs__msg__ImageMsg__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
yahboom_msgs__msg__ImageMsg__Sequence__destroy(yahboom_msgs__msg__ImageMsg__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    yahboom_msgs__msg__ImageMsg__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
yahboom_msgs__msg__ImageMsg__Sequence__are_equal(const yahboom_msgs__msg__ImageMsg__Sequence * lhs, const yahboom_msgs__msg__ImageMsg__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!yahboom_msgs__msg__ImageMsg__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
yahboom_msgs__msg__ImageMsg__Sequence__copy(
  const yahboom_msgs__msg__ImageMsg__Sequence * input,
  yahboom_msgs__msg__ImageMsg__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(yahboom_msgs__msg__ImageMsg);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    yahboom_msgs__msg__ImageMsg * data =
      (yahboom_msgs__msg__ImageMsg *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!yahboom_msgs__msg__ImageMsg__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          yahboom_msgs__msg__ImageMsg__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!yahboom_msgs__msg__ImageMsg__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

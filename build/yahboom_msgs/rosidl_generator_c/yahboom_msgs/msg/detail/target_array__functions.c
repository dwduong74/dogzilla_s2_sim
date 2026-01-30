// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from yahboom_msgs:msg/TargetArray.idl
// generated code does not contain a copyright notice
#include "yahboom_msgs/msg/detail/target_array__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `data`
#include "yahboom_msgs/msg/detail/target__functions.h"

bool
yahboom_msgs__msg__TargetArray__init(yahboom_msgs__msg__TargetArray * msg)
{
  if (!msg) {
    return false;
  }
  // data
  if (!yahboom_msgs__msg__Target__Sequence__init(&msg->data, 0)) {
    yahboom_msgs__msg__TargetArray__fini(msg);
    return false;
  }
  return true;
}

void
yahboom_msgs__msg__TargetArray__fini(yahboom_msgs__msg__TargetArray * msg)
{
  if (!msg) {
    return;
  }
  // data
  yahboom_msgs__msg__Target__Sequence__fini(&msg->data);
}

bool
yahboom_msgs__msg__TargetArray__are_equal(const yahboom_msgs__msg__TargetArray * lhs, const yahboom_msgs__msg__TargetArray * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // data
  if (!yahboom_msgs__msg__Target__Sequence__are_equal(
      &(lhs->data), &(rhs->data)))
  {
    return false;
  }
  return true;
}

bool
yahboom_msgs__msg__TargetArray__copy(
  const yahboom_msgs__msg__TargetArray * input,
  yahboom_msgs__msg__TargetArray * output)
{
  if (!input || !output) {
    return false;
  }
  // data
  if (!yahboom_msgs__msg__Target__Sequence__copy(
      &(input->data), &(output->data)))
  {
    return false;
  }
  return true;
}

yahboom_msgs__msg__TargetArray *
yahboom_msgs__msg__TargetArray__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  yahboom_msgs__msg__TargetArray * msg = (yahboom_msgs__msg__TargetArray *)allocator.allocate(sizeof(yahboom_msgs__msg__TargetArray), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(yahboom_msgs__msg__TargetArray));
  bool success = yahboom_msgs__msg__TargetArray__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
yahboom_msgs__msg__TargetArray__destroy(yahboom_msgs__msg__TargetArray * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    yahboom_msgs__msg__TargetArray__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
yahboom_msgs__msg__TargetArray__Sequence__init(yahboom_msgs__msg__TargetArray__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  yahboom_msgs__msg__TargetArray * data = NULL;

  if (size) {
    data = (yahboom_msgs__msg__TargetArray *)allocator.zero_allocate(size, sizeof(yahboom_msgs__msg__TargetArray), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = yahboom_msgs__msg__TargetArray__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        yahboom_msgs__msg__TargetArray__fini(&data[i - 1]);
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
yahboom_msgs__msg__TargetArray__Sequence__fini(yahboom_msgs__msg__TargetArray__Sequence * array)
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
      yahboom_msgs__msg__TargetArray__fini(&array->data[i]);
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

yahboom_msgs__msg__TargetArray__Sequence *
yahboom_msgs__msg__TargetArray__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  yahboom_msgs__msg__TargetArray__Sequence * array = (yahboom_msgs__msg__TargetArray__Sequence *)allocator.allocate(sizeof(yahboom_msgs__msg__TargetArray__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = yahboom_msgs__msg__TargetArray__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
yahboom_msgs__msg__TargetArray__Sequence__destroy(yahboom_msgs__msg__TargetArray__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    yahboom_msgs__msg__TargetArray__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
yahboom_msgs__msg__TargetArray__Sequence__are_equal(const yahboom_msgs__msg__TargetArray__Sequence * lhs, const yahboom_msgs__msg__TargetArray__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!yahboom_msgs__msg__TargetArray__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
yahboom_msgs__msg__TargetArray__Sequence__copy(
  const yahboom_msgs__msg__TargetArray__Sequence * input,
  yahboom_msgs__msg__TargetArray__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(yahboom_msgs__msg__TargetArray);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    yahboom_msgs__msg__TargetArray * data =
      (yahboom_msgs__msg__TargetArray *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!yahboom_msgs__msg__TargetArray__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          yahboom_msgs__msg__TargetArray__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!yahboom_msgs__msg__TargetArray__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}

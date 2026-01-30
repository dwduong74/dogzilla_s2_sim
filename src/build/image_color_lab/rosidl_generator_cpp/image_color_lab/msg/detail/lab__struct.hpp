// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from image_color_lab:msg/Lab.idl
// generated code does not contain a copyright notice

#ifndef IMAGE_COLOR_LAB__MSG__DETAIL__LAB__STRUCT_HPP_
#define IMAGE_COLOR_LAB__MSG__DETAIL__LAB__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__image_color_lab__msg__Lab __attribute__((deprecated))
#else
# define DEPRECATED__image_color_lab__msg__Lab __declspec(deprecated)
#endif

namespace image_color_lab
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Lab_
{
  using Type = Lab_<ContainerAllocator>;

  explicit Lab_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->l_min = 0ll;
      this->a_min = 0ll;
      this->b_min = 0ll;
      this->l_max = 0ll;
      this->a_max = 0ll;
      this->b_max = 0ll;
    }
  }

  explicit Lab_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->l_min = 0ll;
      this->a_min = 0ll;
      this->b_min = 0ll;
      this->l_max = 0ll;
      this->a_max = 0ll;
      this->b_max = 0ll;
    }
  }

  // field types and members
  using _l_min_type =
    int64_t;
  _l_min_type l_min;
  using _a_min_type =
    int64_t;
  _a_min_type a_min;
  using _b_min_type =
    int64_t;
  _b_min_type b_min;
  using _l_max_type =
    int64_t;
  _l_max_type l_max;
  using _a_max_type =
    int64_t;
  _a_max_type a_max;
  using _b_max_type =
    int64_t;
  _b_max_type b_max;

  // setters for named parameter idiom
  Type & set__l_min(
    const int64_t & _arg)
  {
    this->l_min = _arg;
    return *this;
  }
  Type & set__a_min(
    const int64_t & _arg)
  {
    this->a_min = _arg;
    return *this;
  }
  Type & set__b_min(
    const int64_t & _arg)
  {
    this->b_min = _arg;
    return *this;
  }
  Type & set__l_max(
    const int64_t & _arg)
  {
    this->l_max = _arg;
    return *this;
  }
  Type & set__a_max(
    const int64_t & _arg)
  {
    this->a_max = _arg;
    return *this;
  }
  Type & set__b_max(
    const int64_t & _arg)
  {
    this->b_max = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    image_color_lab::msg::Lab_<ContainerAllocator> *;
  using ConstRawPtr =
    const image_color_lab::msg::Lab_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<image_color_lab::msg::Lab_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<image_color_lab::msg::Lab_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      image_color_lab::msg::Lab_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<image_color_lab::msg::Lab_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      image_color_lab::msg::Lab_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<image_color_lab::msg::Lab_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<image_color_lab::msg::Lab_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<image_color_lab::msg::Lab_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__image_color_lab__msg__Lab
    std::shared_ptr<image_color_lab::msg::Lab_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__image_color_lab__msg__Lab
    std::shared_ptr<image_color_lab::msg::Lab_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Lab_ & other) const
  {
    if (this->l_min != other.l_min) {
      return false;
    }
    if (this->a_min != other.a_min) {
      return false;
    }
    if (this->b_min != other.b_min) {
      return false;
    }
    if (this->l_max != other.l_max) {
      return false;
    }
    if (this->a_max != other.a_max) {
      return false;
    }
    if (this->b_max != other.b_max) {
      return false;
    }
    return true;
  }
  bool operator!=(const Lab_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Lab_

// alias to use template instance with default allocator
using Lab =
  image_color_lab::msg::Lab_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace image_color_lab

#endif  // IMAGE_COLOR_LAB__MSG__DETAIL__LAB__STRUCT_HPP_

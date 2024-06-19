// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from interfaces_package:msg/GameInfo.idl
// generated code does not contain a copyright notice

#ifndef INTERFACES_PACKAGE__MSG__DETAIL__GAME_INFO__STRUCT_HPP_
#define INTERFACES_PACKAGE__MSG__DETAIL__GAME_INFO__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'blue_position'
// Member 'ball_position'
#include "interfaces_package/msg/detail/int16__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__interfaces_package__msg__GameInfo __attribute__((deprecated))
#else
# define DEPRECATED__interfaces_package__msg__GameInfo __declspec(deprecated)
#endif

namespace interfaces_package
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct GameInfo_
{
  using Type = GameInfo_<ContainerAllocator>;

  explicit GameInfo_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit GameInfo_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _blue_position_type =
    std::vector<interfaces_package::msg::Int16_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<interfaces_package::msg::Int16_<ContainerAllocator>>>;
  _blue_position_type blue_position;
  using _ball_position_type =
    std::vector<interfaces_package::msg::Int16_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<interfaces_package::msg::Int16_<ContainerAllocator>>>;
  _ball_position_type ball_position;

  // setters for named parameter idiom
  Type & set__blue_position(
    const std::vector<interfaces_package::msg::Int16_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<interfaces_package::msg::Int16_<ContainerAllocator>>> & _arg)
  {
    this->blue_position = _arg;
    return *this;
  }
  Type & set__ball_position(
    const std::vector<interfaces_package::msg::Int16_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<interfaces_package::msg::Int16_<ContainerAllocator>>> & _arg)
  {
    this->ball_position = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    interfaces_package::msg::GameInfo_<ContainerAllocator> *;
  using ConstRawPtr =
    const interfaces_package::msg::GameInfo_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<interfaces_package::msg::GameInfo_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<interfaces_package::msg::GameInfo_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      interfaces_package::msg::GameInfo_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<interfaces_package::msg::GameInfo_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      interfaces_package::msg::GameInfo_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<interfaces_package::msg::GameInfo_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<interfaces_package::msg::GameInfo_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<interfaces_package::msg::GameInfo_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__interfaces_package__msg__GameInfo
    std::shared_ptr<interfaces_package::msg::GameInfo_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__interfaces_package__msg__GameInfo
    std::shared_ptr<interfaces_package::msg::GameInfo_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GameInfo_ & other) const
  {
    if (this->blue_position != other.blue_position) {
      return false;
    }
    if (this->ball_position != other.ball_position) {
      return false;
    }
    return true;
  }
  bool operator!=(const GameInfo_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GameInfo_

// alias to use template instance with default allocator
using GameInfo =
  interfaces_package::msg::GameInfo_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace interfaces_package

#endif  // INTERFACES_PACKAGE__MSG__DETAIL__GAME_INFO__STRUCT_HPP_

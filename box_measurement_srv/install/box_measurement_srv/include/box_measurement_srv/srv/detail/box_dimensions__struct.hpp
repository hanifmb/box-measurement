// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from box_measurement_srv:srv/BoxDimensions.idl
// generated code does not contain a copyright notice

#ifndef BOX_MEASUREMENT_SRV__SRV__DETAIL__BOX_DIMENSIONS__STRUCT_HPP_
#define BOX_MEASUREMENT_SRV__SRV__DETAIL__BOX_DIMENSIONS__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__box_measurement_srv__srv__BoxDimensions_Request __attribute__((deprecated))
#else
# define DEPRECATED__box_measurement_srv__srv__BoxDimensions_Request __declspec(deprecated)
#endif

namespace box_measurement_srv
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct BoxDimensions_Request_
{
  using Type = BoxDimensions_Request_<ContainerAllocator>;

  explicit BoxDimensions_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit BoxDimensions_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  // field types and members
  using _structure_needs_at_least_one_member_type =
    uint8_t;
  _structure_needs_at_least_one_member_type structure_needs_at_least_one_member;


  // constant declarations

  // pointer types
  using RawPtr =
    box_measurement_srv::srv::BoxDimensions_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const box_measurement_srv::srv::BoxDimensions_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<box_measurement_srv::srv::BoxDimensions_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<box_measurement_srv::srv::BoxDimensions_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      box_measurement_srv::srv::BoxDimensions_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<box_measurement_srv::srv::BoxDimensions_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      box_measurement_srv::srv::BoxDimensions_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<box_measurement_srv::srv::BoxDimensions_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<box_measurement_srv::srv::BoxDimensions_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<box_measurement_srv::srv::BoxDimensions_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__box_measurement_srv__srv__BoxDimensions_Request
    std::shared_ptr<box_measurement_srv::srv::BoxDimensions_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__box_measurement_srv__srv__BoxDimensions_Request
    std::shared_ptr<box_measurement_srv::srv::BoxDimensions_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BoxDimensions_Request_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const BoxDimensions_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BoxDimensions_Request_

// alias to use template instance with default allocator
using BoxDimensions_Request =
  box_measurement_srv::srv::BoxDimensions_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace box_measurement_srv


#ifndef _WIN32
# define DEPRECATED__box_measurement_srv__srv__BoxDimensions_Response __attribute__((deprecated))
#else
# define DEPRECATED__box_measurement_srv__srv__BoxDimensions_Response __declspec(deprecated)
#endif

namespace box_measurement_srv
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct BoxDimensions_Response_
{
  using Type = BoxDimensions_Response_<ContainerAllocator>;

  explicit BoxDimensions_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->width = 0.0f;
      this->legnth = 0.0f;
      this->height = 0.0f;
    }
  }

  explicit BoxDimensions_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->width = 0.0f;
      this->legnth = 0.0f;
      this->height = 0.0f;
    }
  }

  // field types and members
  using _width_type =
    float;
  _width_type width;
  using _legnth_type =
    float;
  _legnth_type legnth;
  using _height_type =
    float;
  _height_type height;

  // setters for named parameter idiom
  Type & set__width(
    const float & _arg)
  {
    this->width = _arg;
    return *this;
  }
  Type & set__legnth(
    const float & _arg)
  {
    this->legnth = _arg;
    return *this;
  }
  Type & set__height(
    const float & _arg)
  {
    this->height = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    box_measurement_srv::srv::BoxDimensions_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const box_measurement_srv::srv::BoxDimensions_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<box_measurement_srv::srv::BoxDimensions_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<box_measurement_srv::srv::BoxDimensions_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      box_measurement_srv::srv::BoxDimensions_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<box_measurement_srv::srv::BoxDimensions_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      box_measurement_srv::srv::BoxDimensions_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<box_measurement_srv::srv::BoxDimensions_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<box_measurement_srv::srv::BoxDimensions_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<box_measurement_srv::srv::BoxDimensions_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__box_measurement_srv__srv__BoxDimensions_Response
    std::shared_ptr<box_measurement_srv::srv::BoxDimensions_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__box_measurement_srv__srv__BoxDimensions_Response
    std::shared_ptr<box_measurement_srv::srv::BoxDimensions_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BoxDimensions_Response_ & other) const
  {
    if (this->width != other.width) {
      return false;
    }
    if (this->legnth != other.legnth) {
      return false;
    }
    if (this->height != other.height) {
      return false;
    }
    return true;
  }
  bool operator!=(const BoxDimensions_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BoxDimensions_Response_

// alias to use template instance with default allocator
using BoxDimensions_Response =
  box_measurement_srv::srv::BoxDimensions_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace box_measurement_srv

namespace box_measurement_srv
{

namespace srv
{

struct BoxDimensions
{
  using Request = box_measurement_srv::srv::BoxDimensions_Request;
  using Response = box_measurement_srv::srv::BoxDimensions_Response;
};

}  // namespace srv

}  // namespace box_measurement_srv

#endif  // BOX_MEASUREMENT_SRV__SRV__DETAIL__BOX_DIMENSIONS__STRUCT_HPP_

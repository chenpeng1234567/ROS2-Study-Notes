// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from village_interfaces:srv/BorrowMoney.idl
// generated code does not contain a copyright notice

#ifndef VILLAGE_INTERFACES__SRV__DETAIL__BORROW_MONEY__TRAITS_HPP_
#define VILLAGE_INTERFACES__SRV__DETAIL__BORROW_MONEY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "village_interfaces/srv/detail/borrow_money__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace village_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const BorrowMoney_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: name
  {
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << ", ";
  }

  // member: money
  {
    out << "money: ";
    rosidl_generator_traits::value_to_yaml(msg.money, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const BorrowMoney_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << "\n";
  }

  // member: money
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "money: ";
    rosidl_generator_traits::value_to_yaml(msg.money, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const BorrowMoney_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace village_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use village_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const village_interfaces::srv::BorrowMoney_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  village_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use village_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const village_interfaces::srv::BorrowMoney_Request & msg)
{
  return village_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<village_interfaces::srv::BorrowMoney_Request>()
{
  return "village_interfaces::srv::BorrowMoney_Request";
}

template<>
inline const char * name<village_interfaces::srv::BorrowMoney_Request>()
{
  return "village_interfaces/srv/BorrowMoney_Request";
}

template<>
struct has_fixed_size<village_interfaces::srv::BorrowMoney_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<village_interfaces::srv::BorrowMoney_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<village_interfaces::srv::BorrowMoney_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace village_interfaces
{

namespace srv
{

inline void to_flow_style_yaml(
  const BorrowMoney_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: money
  {
    out << "money: ";
    rosidl_generator_traits::value_to_yaml(msg.money, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const BorrowMoney_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }

  // member: money
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "money: ";
    rosidl_generator_traits::value_to_yaml(msg.money, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const BorrowMoney_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace village_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use village_interfaces::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const village_interfaces::srv::BorrowMoney_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  village_interfaces::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use village_interfaces::srv::to_yaml() instead")]]
inline std::string to_yaml(const village_interfaces::srv::BorrowMoney_Response & msg)
{
  return village_interfaces::srv::to_yaml(msg);
}

template<>
inline const char * data_type<village_interfaces::srv::BorrowMoney_Response>()
{
  return "village_interfaces::srv::BorrowMoney_Response";
}

template<>
inline const char * name<village_interfaces::srv::BorrowMoney_Response>()
{
  return "village_interfaces/srv/BorrowMoney_Response";
}

template<>
struct has_fixed_size<village_interfaces::srv::BorrowMoney_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<village_interfaces::srv::BorrowMoney_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<village_interfaces::srv::BorrowMoney_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<village_interfaces::srv::BorrowMoney>()
{
  return "village_interfaces::srv::BorrowMoney";
}

template<>
inline const char * name<village_interfaces::srv::BorrowMoney>()
{
  return "village_interfaces/srv/BorrowMoney";
}

template<>
struct has_fixed_size<village_interfaces::srv::BorrowMoney>
  : std::integral_constant<
    bool,
    has_fixed_size<village_interfaces::srv::BorrowMoney_Request>::value &&
    has_fixed_size<village_interfaces::srv::BorrowMoney_Response>::value
  >
{
};

template<>
struct has_bounded_size<village_interfaces::srv::BorrowMoney>
  : std::integral_constant<
    bool,
    has_bounded_size<village_interfaces::srv::BorrowMoney_Request>::value &&
    has_bounded_size<village_interfaces::srv::BorrowMoney_Response>::value
  >
{
};

template<>
struct is_service<village_interfaces::srv::BorrowMoney>
  : std::true_type
{
};

template<>
struct is_service_request<village_interfaces::srv::BorrowMoney_Request>
  : std::true_type
{
};

template<>
struct is_service_response<village_interfaces::srv::BorrowMoney_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // VILLAGE_INTERFACES__SRV__DETAIL__BORROW_MONEY__TRAITS_HPP_

#pragma once
// IWYU pragma private; include "System/Net/NetworkInformation/sockaddr_in6.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Net/NetworkInformation/zzzz__in6_addr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(sockaddr_in6)
// Forward declare root types
namespace System::Net::NetworkInformation {
struct sockaddr_in6;
}
// Write type traits
MARK_VAL_T(::System::Net::NetworkInformation::sockaddr_in6);
// Dependencies System.Net.NetworkInformation.in6_addr
namespace System::Net::NetworkInformation {
// Is value type: true
// CS Name: System.Net.NetworkInformation.sockaddr_in6
struct CORDL_TYPE sockaddr_in6 {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr sockaddr_in6();

  // Ctor Parameters [CppParam { name: "sin6_family", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "sin6_port", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name:
  // "sin6_flowinfo", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "sin6_addr", ty: "::System::Net::NetworkInformation::in6_addr", modifiers: "", def_value: None }, CppParam {
  // name: "sin6_scope_id", ty: "uint32_t", modifiers: "", def_value: None }]
  constexpr sockaddr_in6(uint16_t sin6_family, uint16_t sin6_port, uint32_t sin6_flowinfo, ::System::Net::NetworkInformation::in6_addr sin6_addr, uint32_t sin6_scope_id) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9794 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field sin6_family, offset: 0x0, size: 0x2, def value: None
  uint16_t sin6_family;

  /// @brief Field sin6_port, offset: 0x2, size: 0x2, def value: None
  uint16_t sin6_port;

  /// @brief Field sin6_flowinfo, offset: 0x4, size: 0x4, def value: None
  uint32_t sin6_flowinfo;

  /// @brief Field sin6_addr, offset: 0x8, size: 0x8, def value: None
  ::System::Net::NetworkInformation::in6_addr sin6_addr;

  /// @brief Field sin6_scope_id, offset: 0x10, size: 0x4, def value: None
  uint32_t sin6_scope_id;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Net::NetworkInformation::sockaddr_in6, sin6_family) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Net::NetworkInformation::sockaddr_in6, sin6_port) == 0x2, "Offset mismatch!");

static_assert(offsetof(::System::Net::NetworkInformation::sockaddr_in6, sin6_flowinfo) == 0x4, "Offset mismatch!");

static_assert(offsetof(::System::Net::NetworkInformation::sockaddr_in6, sin6_addr) == 0x8, "Offset mismatch!");

static_assert(offsetof(::System::Net::NetworkInformation::sockaddr_in6, sin6_scope_id) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Net::NetworkInformation::sockaddr_in6, 0x18>, "Size mismatch!");

} // namespace System::Net::NetworkInformation
DEFINE_IL2CPP_ARG_TYPE(::System::Net::NetworkInformation::sockaddr_in6, "System.Net.NetworkInformation", "sockaddr_in6");

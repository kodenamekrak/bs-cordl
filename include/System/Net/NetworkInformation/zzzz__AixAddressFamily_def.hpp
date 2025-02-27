#pragma once
// IWYU pragma private; include "System/Net/NetworkInformation/AixAddressFamily.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AixAddressFamily)
// Forward declare root types
namespace System::Net::NetworkInformation {
struct AixAddressFamily;
}
// Write type traits
MARK_VAL_T(::System::Net::NetworkInformation::AixAddressFamily);
// Dependencies
namespace System::Net::NetworkInformation {
// Is value type: true
// CS Name: System.Net.NetworkInformation.AixAddressFamily
struct CORDL_TYPE AixAddressFamily {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __AixAddressFamily_Unwrapped
  enum struct __AixAddressFamily_Unwrapped : int32_t {
    __E_AF_INET = static_cast<int32_t>(0x2),
    __E_AF_INET6 = static_cast<int32_t>(0x18),
    __E_AF_LINK = static_cast<int32_t>(0x12),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __AixAddressFamily_Unwrapped() const noexcept {
    return static_cast<__AixAddressFamily_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr AixAddressFamily();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr AixAddressFamily(int32_t value__) noexcept;

  /// @brief Field AF_INET value: I32(2)
  static ::System::Net::NetworkInformation::AixAddressFamily const AF_INET;

  /// @brief Field AF_INET6 value: I32(24)
  static ::System::Net::NetworkInformation::AixAddressFamily const AF_INET6;

  /// @brief Field AF_LINK value: I32(18)
  static ::System::Net::NetworkInformation::AixAddressFamily const AF_LINK;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9784 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Net::NetworkInformation::AixAddressFamily, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Net::NetworkInformation::AixAddressFamily, 0x4>, "Size mismatch!");

} // namespace System::Net::NetworkInformation
DEFINE_IL2CPP_ARG_TYPE(::System::Net::NetworkInformation::AixAddressFamily, "System.Net.NetworkInformation", "AixAddressFamily");

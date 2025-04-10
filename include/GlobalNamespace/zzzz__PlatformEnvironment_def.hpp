#pragma once
// IWYU pragma private; include "GlobalNamespace/PlatformEnvironment.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PlatformEnvironment)
// Forward declare root types
namespace GlobalNamespace {
struct PlatformEnvironment;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::PlatformEnvironment);
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: PlatformEnvironment
struct CORDL_TYPE PlatformEnvironment {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = uint8_t;

  /// @brief Nested struct __PlatformEnvironment_Unwrapped
  enum struct __PlatformEnvironment_Unwrapped : uint8_t {
    __E_Development = static_cast<uint8_t>(0x0u),
    __E_Certification = static_cast<uint8_t>(0x1u),
    __E_Production = static_cast<uint8_t>(0x2u),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __PlatformEnvironment_Unwrapped() const noexcept {
    return static_cast<__PlatformEnvironment_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator uint8_t() const noexcept {
    return static_cast<uint8_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr PlatformEnvironment();

  // Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None }]
  constexpr PlatformEnvironment(uint8_t value__) noexcept;

  /// @brief Field Certification value: U8(1)
  static ::GlobalNamespace::PlatformEnvironment const Certification;

  /// @brief Field Development value: U8(0)
  static ::GlobalNamespace::PlatformEnvironment const Development;

  /// @brief Field Production value: U8(2)
  static ::GlobalNamespace::PlatformEnvironment const Production;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14932 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Field value__, offset: 0x0, size: 0x1, def value: None
  uint8_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlatformEnvironment, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PlatformEnvironment, 0x1>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlatformEnvironment, "", "PlatformEnvironment");

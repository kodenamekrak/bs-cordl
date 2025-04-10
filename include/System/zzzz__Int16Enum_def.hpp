#pragma once
// IWYU pragma private; include "System/Int16Enum.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Int16Enum)
// Forward declare root types
namespace System {
struct Int16Enum;
}
// Write type traits
MARK_VAL_T(::System::Int16Enum);
// Dependencies
namespace System {
// Is value type: true
// CS Name: System.Int16Enum
struct CORDL_TYPE Int16Enum {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int16_t;

  /// @brief Nested struct __Int16Enum_Unwrapped
  enum struct __Int16Enum_Unwrapped : int16_t {};

  /// @brief Conversion into unwrapped enum value
  constexpr operator __Int16Enum_Unwrapped() const noexcept {
    return static_cast<__Int16Enum_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int16_t() const noexcept {
    return static_cast<int16_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr Int16Enum();

  // Ctor Parameters [CppParam { name: "value__", ty: "int16_t", modifiers: "", def_value: None }]
  constexpr Int16Enum(int16_t value__) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2596 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x2 };

  /// @brief Field value__, offset: 0x0, size: 0x2, def value: None
  int16_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Int16Enum, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Int16Enum, 0x2>, "Size mismatch!");

} // namespace System
DEFINE_IL2CPP_ARG_TYPE(::System::Int16Enum, "System", "Int16Enum");

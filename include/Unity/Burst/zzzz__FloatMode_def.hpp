#pragma once
// IWYU pragma private; include "Unity/Burst/FloatMode.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FloatMode)
// Forward declare root types
namespace Unity::Burst {
struct FloatMode;
}
// Write type traits
MARK_VAL_T(::Unity::Burst::FloatMode);
// Dependencies
namespace Unity::Burst {
// Is value type: true
// CS Name: Unity.Burst.FloatMode
struct CORDL_TYPE FloatMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __FloatMode_Unwrapped
  enum struct __FloatMode_Unwrapped : int32_t {
    __E_Default = static_cast<int32_t>(0x0),
    __E_Strict = static_cast<int32_t>(0x1),
    __E_Deterministic = static_cast<int32_t>(0x2),
    __E_Fast = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __FloatMode_Unwrapped() const noexcept {
    return static_cast<__FloatMode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr FloatMode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr FloatMode(int32_t value__) noexcept;

  /// @brief Field Default value: I32(0)
  static ::Unity::Burst::FloatMode const Default;

  /// @brief Field Deterministic value: I32(2)
  static ::Unity::Burst::FloatMode const Deterministic;

  /// @brief Field Fast value: I32(3)
  static ::Unity::Burst::FloatMode const Fast;

  /// @brief Field Strict value: I32(1)
  static ::Unity::Burst::FloatMode const Strict;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14597 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Burst::FloatMode, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Burst::FloatMode, 0x4>, "Size mismatch!");

} // namespace Unity::Burst
DEFINE_IL2CPP_ARG_TYPE(::Unity::Burst::FloatMode, "Unity.Burst", "FloatMode");

#pragma once
// IWYU pragma private; include "TMPro/HorizontalAlignmentOptions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HorizontalAlignmentOptions)
// Forward declare root types
namespace TMPro {
struct HorizontalAlignmentOptions;
}
// Write type traits
MARK_VAL_T(::TMPro::HorizontalAlignmentOptions);
// Dependencies
namespace TMPro {
// Is value type: true
// CS Name: TMPro.HorizontalAlignmentOptions
struct CORDL_TYPE HorizontalAlignmentOptions {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __HorizontalAlignmentOptions_Unwrapped
  enum struct __HorizontalAlignmentOptions_Unwrapped : int32_t {
    __E_Left = static_cast<int32_t>(0x1),
    __E_Center = static_cast<int32_t>(0x2),
    __E_Right = static_cast<int32_t>(0x4),
    __E_Justified = static_cast<int32_t>(0x8),
    __E_Flush = static_cast<int32_t>(0x10),
    __E_Geometry = static_cast<int32_t>(0x20),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __HorizontalAlignmentOptions_Unwrapped() const noexcept {
    return static_cast<__HorizontalAlignmentOptions_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr HorizontalAlignmentOptions();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr HorizontalAlignmentOptions(int32_t value__) noexcept;

  /// @brief Field Center value: I32(2)
  static ::TMPro::HorizontalAlignmentOptions const Center;

  /// @brief Field Flush value: I32(16)
  static ::TMPro::HorizontalAlignmentOptions const Flush;

  /// @brief Field Geometry value: I32(32)
  static ::TMPro::HorizontalAlignmentOptions const Geometry;

  /// @brief Field Justified value: I32(8)
  static ::TMPro::HorizontalAlignmentOptions const Justified;

  /// @brief Field Left value: I32(1)
  static ::TMPro::HorizontalAlignmentOptions const Left;

  /// @brief Field Right value: I32(4)
  static ::TMPro::HorizontalAlignmentOptions const Right;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14550 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::TMPro::HorizontalAlignmentOptions, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::TMPro::HorizontalAlignmentOptions, 0x4>, "Size mismatch!");

} // namespace TMPro
DEFINE_IL2CPP_ARG_TYPE(::TMPro::HorizontalAlignmentOptions, "TMPro", "HorizontalAlignmentOptions");

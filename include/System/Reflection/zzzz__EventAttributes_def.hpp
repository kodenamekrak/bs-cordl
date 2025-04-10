#pragma once
// IWYU pragma private; include "System/Reflection/EventAttributes.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EventAttributes)
// Forward declare root types
namespace System::Reflection {
struct EventAttributes;
}
// Write type traits
MARK_VAL_T(::System::Reflection::EventAttributes);
// Dependencies
namespace System::Reflection {
// Is value type: true
// CS Name: System.Reflection.EventAttributes
struct CORDL_TYPE EventAttributes {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __EventAttributes_Unwrapped
  enum struct __EventAttributes_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_SpecialName = static_cast<int32_t>(0x200),
    __E_RTSpecialName = static_cast<int32_t>(0x400),
    __E_ReservedMask = static_cast<int32_t>(0x400),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __EventAttributes_Unwrapped() const noexcept {
    return static_cast<__EventAttributes_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr EventAttributes();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr EventAttributes(int32_t value__) noexcept;

  /// @brief Field None value: I32(0)
  static ::System::Reflection::EventAttributes const None;

  /// @brief Field RTSpecialName value: I32(1024)
  static ::System::Reflection::EventAttributes const RTSpecialName;

  /// @brief Field ReservedMask value: I32(1024)
  static ::System::Reflection::EventAttributes const ReservedMask;

  /// @brief Field SpecialName value: I32(512)
  static ::System::Reflection::EventAttributes const SpecialName;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3464 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Reflection::EventAttributes, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Reflection::EventAttributes, 0x4>, "Size mismatch!");

} // namespace System::Reflection
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::EventAttributes, "System.Reflection", "EventAttributes");

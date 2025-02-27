#pragma once
// IWYU pragma private; include "Zenject/BindingInheritanceMethods.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BindingInheritanceMethods)
// Forward declare root types
namespace Zenject {
struct BindingInheritanceMethods;
}
// Write type traits
MARK_VAL_T(::Zenject::BindingInheritanceMethods);
// Dependencies
namespace Zenject {
// Is value type: true
// CS Name: Zenject.BindingInheritanceMethods
struct CORDL_TYPE BindingInheritanceMethods {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __BindingInheritanceMethods_Unwrapped
  enum struct __BindingInheritanceMethods_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_CopyIntoAll = static_cast<int32_t>(0x1),
    __E_CopyDirectOnly = static_cast<int32_t>(0x2),
    __E_MoveIntoAll = static_cast<int32_t>(0x3),
    __E_MoveDirectOnly = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __BindingInheritanceMethods_Unwrapped() const noexcept {
    return static_cast<__BindingInheritanceMethods_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr BindingInheritanceMethods();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr BindingInheritanceMethods(int32_t value__) noexcept;

  /// @brief Field CopyDirectOnly value: I32(2)
  static ::Zenject::BindingInheritanceMethods const CopyDirectOnly;

  /// @brief Field CopyIntoAll value: I32(1)
  static ::Zenject::BindingInheritanceMethods const CopyIntoAll;

  /// @brief Field MoveDirectOnly value: I32(4)
  static ::Zenject::BindingInheritanceMethods const MoveDirectOnly;

  /// @brief Field MoveIntoAll value: I32(3)
  static ::Zenject::BindingInheritanceMethods const MoveIntoAll;

  /// @brief Field None value: I32(0)
  static ::Zenject::BindingInheritanceMethods const None;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12287 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Zenject::BindingInheritanceMethods, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Zenject::BindingInheritanceMethods, 0x4>, "Size mismatch!");

} // namespace Zenject
DEFINE_IL2CPP_ARG_TYPE(::Zenject::BindingInheritanceMethods, "Zenject", "BindingInheritanceMethods");

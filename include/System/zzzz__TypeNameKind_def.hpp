#pragma once
// IWYU pragma private; include "System/TypeNameKind.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TypeNameKind)
// Forward declare root types
namespace System {
struct TypeNameKind;
}
// Write type traits
MARK_VAL_T(::System::TypeNameKind);
// Type: System::TypeNameKind
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace System {
// Is value type: true
// CS Name: ::System::TypeNameKind
struct CORDL_TYPE TypeNameKind {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __TypeNameKind_Unwrapped
  enum struct __TypeNameKind_Unwrapped : int32_t {
    __E_Name = static_cast<int32_t>(0x0),
    __E_ToString = static_cast<int32_t>(0x1),
    __E_SerializationName = static_cast<int32_t>(0x2),
    __E_FullName = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __TypeNameKind_Unwrapped() const noexcept {
    return static_cast<__TypeNameKind_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr TypeNameKind();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr TypeNameKind(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field FullName value: static_cast<int32_t>(0x3)
  static ::System::TypeNameKind const FullName;

  /// @brief Field Name value: static_cast<int32_t>(0x0)
  static ::System::TypeNameKind const Name;

  /// @brief Field SerializationName value: static_cast<int32_t>(0x2)
  static ::System::TypeNameKind const SerializationName;

  /// @brief Field ToString value: static_cast<int32_t>(0x1)
  static ::System::TypeNameKind const ToString;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2565 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::TypeNameKind, 0x4>, "Size mismatch!");

static_assert(offsetof(::System::TypeNameKind, value__) == 0x0, "Offset mismatch!");

} // namespace System
DEFINE_IL2CPP_ARG_TYPE(::System::TypeNameKind, "System", "TypeNameKind");

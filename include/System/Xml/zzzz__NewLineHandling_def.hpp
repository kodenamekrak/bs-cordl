#pragma once
// IWYU pragma private; include "System/Xml/NewLineHandling.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NewLineHandling)
// Forward declare root types
namespace System::Xml {
struct NewLineHandling;
}
// Write type traits
MARK_VAL_T(::System::Xml::NewLineHandling);
// Dependencies
namespace System::Xml {
// Is value type: true
// CS Name: System.Xml.NewLineHandling
struct CORDL_TYPE NewLineHandling {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __NewLineHandling_Unwrapped
  enum struct __NewLineHandling_Unwrapped : int32_t {
    __E_Replace = static_cast<int32_t>(0x0),
    __E_Entitize = static_cast<int32_t>(0x1),
    __E_None = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __NewLineHandling_Unwrapped() const noexcept {
    return static_cast<__NewLineHandling_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr NewLineHandling();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr NewLineHandling(int32_t value__) noexcept;

  /// @brief Field Entitize value: I32(1)
  static ::System::Xml::NewLineHandling const Entitize;

  /// @brief Field None value: I32(2)
  static ::System::Xml::NewLineHandling const None;

  /// @brief Field Replace value: I32(0)
  static ::System::Xml::NewLineHandling const Replace;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7198 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::NewLineHandling, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::NewLineHandling, 0x4>, "Size mismatch!");

} // namespace System::Xml
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::NewLineHandling, "System.Xml", "NewLineHandling");

#pragma once
// IWYU pragma private; include "System/Xml/ConformanceLevel.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ConformanceLevel)
// Forward declare root types
namespace System::Xml {
struct ConformanceLevel;
}
// Write type traits
MARK_VAL_T(::System::Xml::ConformanceLevel);
// Dependencies
namespace System::Xml {
// Is value type: true
// CS Name: System.Xml.ConformanceLevel
struct CORDL_TYPE ConformanceLevel {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __ConformanceLevel_Unwrapped
  enum struct __ConformanceLevel_Unwrapped : int32_t {
    __E_Auto = static_cast<int32_t>(0x0),
    __E_Fragment = static_cast<int32_t>(0x1),
    __E_Document = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ConformanceLevel_Unwrapped() const noexcept {
    return static_cast<__ConformanceLevel_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr ConformanceLevel();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ConformanceLevel(int32_t value__) noexcept;

  /// @brief Field Auto value: I32(0)
  static ::System::Xml::ConformanceLevel const Auto;

  /// @brief Field Document value: I32(2)
  static ::System::Xml::ConformanceLevel const Document;

  /// @brief Field Fragment value: I32(1)
  static ::System::Xml::ConformanceLevel const Fragment;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7176 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::ConformanceLevel, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::ConformanceLevel, 0x4>, "Size mismatch!");

} // namespace System::Xml
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::ConformanceLevel, "System.Xml", "ConformanceLevel");

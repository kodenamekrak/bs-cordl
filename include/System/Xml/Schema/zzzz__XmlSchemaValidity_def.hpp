#pragma once
// IWYU pragma private; include "System/Xml/Schema/XmlSchemaValidity.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XmlSchemaValidity)
// Forward declare root types
namespace System::Xml::Schema {
struct XmlSchemaValidity;
}
// Write type traits
MARK_VAL_T(::System::Xml::Schema::XmlSchemaValidity);
// Dependencies
namespace System::Xml::Schema {
// Is value type: true
// CS Name: System.Xml.Schema.XmlSchemaValidity
struct CORDL_TYPE XmlSchemaValidity {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __XmlSchemaValidity_Unwrapped
  enum struct __XmlSchemaValidity_Unwrapped : int32_t {
    __E_NotKnown = static_cast<int32_t>(0x0),
    __E_Valid = static_cast<int32_t>(0x1),
    __E_Invalid = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __XmlSchemaValidity_Unwrapped() const noexcept {
    return static_cast<__XmlSchemaValidity_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlSchemaValidity();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr XmlSchemaValidity(int32_t value__) noexcept;

  /// @brief Field Invalid value: I32(2)
  static ::System::Xml::Schema::XmlSchemaValidity const Invalid;

  /// @brief Field NotKnown value: I32(0)
  static ::System::Xml::Schema::XmlSchemaValidity const NotKnown;

  /// @brief Field Valid value: I32(1)
  static ::System::Xml::Schema::XmlSchemaValidity const Valid;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7739 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::Schema::XmlSchemaValidity, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::XmlSchemaValidity, 0x4>, "Size mismatch!");

} // namespace System::Xml::Schema
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XmlSchemaValidity, "System.Xml.Schema", "XmlSchemaValidity");

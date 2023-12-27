#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(XmlSchemaProviderAttribute)
// Forward declare root types
namespace System::Xml::Serialization {
class XmlSchemaProviderAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Serialization::XmlSchemaProviderAttribute);
// Type: System.Xml.Serialization::XmlSchemaProviderAttribute
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 25, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml::Serialization {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2547))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11590))
// CS Name: ::System.Xml.Serialization::XmlSchemaProviderAttribute*
class CORDL_TYPE XmlSchemaProviderAttribute : public ::System::Attribute {
public:
  // Declarations
  /// @brief Field _methodName, offset 0x10, size 0x8
  __declspec(property(get = __get__methodName, put = __set__methodName))::StringW _methodName;

  /// @brief Field _isAny, offset 0x18, size 0x1
  __declspec(property(get = __get__isAny, put = __set__isAny)) bool _isAny;

  __declspec(property(put = set_IsAny)) bool IsAny;

  constexpr ::StringW& __get__methodName();

  constexpr ::StringW const& __get__methodName() const;

  constexpr void __set__methodName(::StringW value);

  constexpr bool& __get__isAny();

  constexpr bool const& __get__isAny() const;

  constexpr void __set__isAny(bool value);

  static inline ::System::Xml::Serialization::XmlSchemaProviderAttribute* New_ctor(::StringW methodName);

  /// @brief Method .ctor addr 0x28abf5c size 0x28 virtual false final false
  inline void _ctor(::StringW methodName);

  /// @brief Method set_IsAny addr 0x28abf84 size 0xc virtual false final false
  inline void set_IsAny(bool value);

  // Ctor Parameters [CppParam { name: "", ty: "XmlSchemaProviderAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlSchemaProviderAttribute(XmlSchemaProviderAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlSchemaProviderAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlSchemaProviderAttribute(XmlSchemaProviderAttribute const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlSchemaProviderAttribute();

public:
  /// @brief Field _methodName, offset: 0x10, size: 0x8, def value: None
  ::StringW ____methodName;

  /// @brief Field _isAny, offset: 0x18, size: 0x1, def value: None
  bool ____isAny;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Serialization::XmlSchemaProviderAttribute, 0x20>, "Size mismatch!");

} // namespace System::Xml::Serialization
NEED_NO_BOX(::System::Xml::Serialization::XmlSchemaProviderAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Serialization::XmlSchemaProviderAttribute*, "System.Xml.Serialization", "XmlSchemaProviderAttribute");
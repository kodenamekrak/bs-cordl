#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(SchemaNotation)
namespace System::Xml {
class XmlQualifiedName;
}
// Forward declare root types
namespace System::Xml::Schema {
class SchemaNotation;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::SchemaNotation);
// Type: System.Xml.Schema::SchemaNotation
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml::Schema {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11707))
// CS Name: ::System.Xml.Schema::SchemaNotation*
class CORDL_TYPE SchemaNotation : public ::System::Object {
public:
  // Declarations
  /// @brief Field name, offset 0x10, size 0x8
  __declspec(property(get = __get_name, put = __set_name))::System::Xml::XmlQualifiedName* name;

  /// @brief Field systemLiteral, offset 0x18, size 0x8
  __declspec(property(get = __get_systemLiteral, put = __set_systemLiteral))::StringW systemLiteral;

  /// @brief Field pubid, offset 0x20, size 0x8
  __declspec(property(get = __get_pubid, put = __set_pubid))::StringW pubid;

  __declspec(property(get = get_Name))::System::Xml::XmlQualifiedName* Name;

  __declspec(property(get = get_SystemLiteral, put = set_SystemLiteral))::StringW SystemLiteral;

  __declspec(property(get = get_Pubid, put = set_Pubid))::StringW Pubid;

  constexpr ::System::Xml::XmlQualifiedName*& __get_name();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlQualifiedName*> const& __get_name() const;

  constexpr void __set_name(::System::Xml::XmlQualifiedName* value);

  constexpr ::StringW& __get_systemLiteral();

  constexpr ::StringW const& __get_systemLiteral() const;

  constexpr void __set_systemLiteral(::StringW value);

  constexpr ::StringW& __get_pubid();

  constexpr ::StringW const& __get_pubid() const;

  constexpr void __set_pubid(::StringW value);

  static inline ::System::Xml::Schema::SchemaNotation* New_ctor(::System::Xml::XmlQualifiedName* name);

  /// @brief Method .ctor addr 0x28c5ba0 size 0x28 virtual false final false
  inline void _ctor(::System::Xml::XmlQualifiedName* name);

  /// @brief Method get_Name addr 0x28c5bc8 size 0x8 virtual false final false
  inline ::System::Xml::XmlQualifiedName* get_Name();

  /// @brief Method get_SystemLiteral addr 0x28c5bd0 size 0x8 virtual false final false
  inline ::StringW get_SystemLiteral();

  /// @brief Method set_SystemLiteral addr 0x28c5bd8 size 0x8 virtual false final false
  inline void set_SystemLiteral(::StringW value);

  /// @brief Method get_Pubid addr 0x28c5be0 size 0x8 virtual false final false
  inline ::StringW get_Pubid();

  /// @brief Method set_Pubid addr 0x28c5be8 size 0x8 virtual false final false
  inline void set_Pubid(::StringW value);

  // Ctor Parameters [CppParam { name: "", ty: "SchemaNotation", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SchemaNotation(SchemaNotation&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SchemaNotation", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SchemaNotation(SchemaNotation const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SchemaNotation();

public:
  /// @brief Field name, offset: 0x10, size: 0x8, def value: None
  ::System::Xml::XmlQualifiedName* ___name;

  /// @brief Field systemLiteral, offset: 0x18, size: 0x8, def value: None
  ::StringW ___systemLiteral;

  /// @brief Field pubid, offset: 0x20, size: 0x8, def value: None
  ::StringW ___pubid;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::SchemaNotation, 0x28>, "Size mismatch!");

} // namespace System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::SchemaNotation);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::SchemaNotation*, "System.Xml.Schema", "SchemaNotation");
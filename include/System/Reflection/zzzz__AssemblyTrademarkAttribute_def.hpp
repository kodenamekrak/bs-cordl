#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(AssemblyTrademarkAttribute)
// Forward declare root types
namespace System::Reflection {
class AssemblyTrademarkAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::Reflection::AssemblyTrademarkAttribute);
// Type: System.Reflection::AssemblyTrademarkAttribute
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Reflection {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2547))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3457))
// CS Name: ::System.Reflection::AssemblyTrademarkAttribute*
class CORDL_TYPE AssemblyTrademarkAttribute : public ::System::Attribute {
public:
  // Declarations
  /// @brief Field <Trademark>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __get__Trademark_k__BackingField, put = __set__Trademark_k__BackingField))::StringW _Trademark_k__BackingField;

  constexpr ::StringW& __get__Trademark_k__BackingField();

  constexpr ::StringW const& __get__Trademark_k__BackingField() const;

  constexpr void __set__Trademark_k__BackingField(::StringW value);

  static inline ::System::Reflection::AssemblyTrademarkAttribute* New_ctor(::StringW trademark);

  /// @brief Method .ctor addr 0x24e6088 size 0x28 virtual false final false
  inline void _ctor(::StringW trademark);

  // Ctor Parameters [CppParam { name: "", ty: "AssemblyTrademarkAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AssemblyTrademarkAttribute(AssemblyTrademarkAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AssemblyTrademarkAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AssemblyTrademarkAttribute(AssemblyTrademarkAttribute const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AssemblyTrademarkAttribute();

public:
  /// @brief Field <Trademark>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____Trademark_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Reflection::AssemblyTrademarkAttribute, 0x18>, "Size mismatch!");

} // namespace System::Reflection
NEED_NO_BOX(::System::Reflection::AssemblyTrademarkAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::AssemblyTrademarkAttribute*, "System.Reflection", "AssemblyTrademarkAttribute");
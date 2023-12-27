#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(TypeForwardedFromAttribute)
// Forward declare root types
namespace System::Runtime::CompilerServices {
class TypeForwardedFromAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::CompilerServices::TypeForwardedFromAttribute);
// Type: System.Runtime.CompilerServices::TypeForwardedFromAttribute
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Runtime::CompilerServices {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2547))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3387))
// CS Name: ::System.Runtime.CompilerServices::TypeForwardedFromAttribute*
class CORDL_TYPE TypeForwardedFromAttribute : public ::System::Attribute {
public:
  // Declarations
  /// @brief Field <AssemblyFullName>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __get__AssemblyFullName_k__BackingField, put = __set__AssemblyFullName_k__BackingField))::StringW _AssemblyFullName_k__BackingField;

  __declspec(property(get = get_AssemblyFullName))::StringW AssemblyFullName;

  constexpr ::StringW& __get__AssemblyFullName_k__BackingField();

  constexpr ::StringW const& __get__AssemblyFullName_k__BackingField() const;

  constexpr void __set__AssemblyFullName_k__BackingField(::StringW value);

  static inline ::System::Runtime::CompilerServices::TypeForwardedFromAttribute* New_ctor(::StringW assemblyFullName);

  /// @brief Method .ctor addr 0x24db588 size 0x84 virtual false final false
  inline void _ctor(::StringW assemblyFullName);

  /// @brief Method get_AssemblyFullName addr 0x24db60c size 0x8 virtual false final false
  inline ::StringW get_AssemblyFullName();

  // Ctor Parameters [CppParam { name: "", ty: "TypeForwardedFromAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TypeForwardedFromAttribute(TypeForwardedFromAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TypeForwardedFromAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TypeForwardedFromAttribute(TypeForwardedFromAttribute const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TypeForwardedFromAttribute();

public:
  /// @brief Field <AssemblyFullName>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____AssemblyFullName_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::CompilerServices::TypeForwardedFromAttribute, 0x18>, "Size mismatch!");

} // namespace System::Runtime::CompilerServices
NEED_NO_BOX(::System::Runtime::CompilerServices::TypeForwardedFromAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::CompilerServices::TypeForwardedFromAttribute*, "System.Runtime.CompilerServices", "TypeForwardedFromAttribute");
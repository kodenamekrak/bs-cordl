#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(AspChildControlTypeAttribute)
namespace System {
class Type;
}
// Forward declare root types
namespace JetBrains::Annotations {
class AspChildControlTypeAttribute;
}
// Write type traits
MARK_REF_PTR_T(::JetBrains::Annotations::AspChildControlTypeAttribute);
// Type: JetBrains.Annotations::AspChildControlTypeAttribute
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace JetBrains::Annotations {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2547))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15795))
// CS Name: ::JetBrains.Annotations::AspChildControlTypeAttribute*
class CORDL_TYPE AspChildControlTypeAttribute : public ::System::Attribute {
public:
  // Declarations
  /// @brief Field <TagName>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __get__TagName_k__BackingField, put = __set__TagName_k__BackingField))::StringW _TagName_k__BackingField;

  /// @brief Field <ControlType>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __get__ControlType_k__BackingField, put = __set__ControlType_k__BackingField))::System::Type* _ControlType_k__BackingField;

  __declspec(property(get = get_TagName, put = set_TagName))::StringW TagName;

  __declspec(property(get = get_ControlType, put = set_ControlType))::System::Type* ControlType;

  constexpr ::StringW& __get__TagName_k__BackingField();

  constexpr ::StringW const& __get__TagName_k__BackingField() const;

  constexpr void __set__TagName_k__BackingField(::StringW value);

  constexpr ::System::Type*& __get__ControlType_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __get__ControlType_k__BackingField() const;

  constexpr void __set__ControlType_k__BackingField(::System::Type* value);

  static inline ::JetBrains::Annotations::AspChildControlTypeAttribute* New_ctor(::StringW tagName, ::System::Type* controlType);

  /// @brief Method .ctor addr 0x2eba78c size 0x2c virtual false final false
  inline void _ctor(::StringW tagName, ::System::Type* controlType);

  /// @brief Method get_TagName addr 0x2eba7b8 size 0x8 virtual false final false
  inline ::StringW get_TagName();

  /// @brief Method set_TagName addr 0x2eba7c0 size 0x8 virtual false final false
  inline void set_TagName(::StringW value);

  /// @brief Method get_ControlType addr 0x2eba7c8 size 0x8 virtual false final false
  inline ::System::Type* get_ControlType();

  /// @brief Method set_ControlType addr 0x2eba7d0 size 0x8 virtual false final false
  inline void set_ControlType(::System::Type* value);

  // Ctor Parameters [CppParam { name: "", ty: "AspChildControlTypeAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AspChildControlTypeAttribute(AspChildControlTypeAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AspChildControlTypeAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AspChildControlTypeAttribute(AspChildControlTypeAttribute const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AspChildControlTypeAttribute();

public:
  /// @brief Field <TagName>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____TagName_k__BackingField;

  /// @brief Field <ControlType>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::System::Type* ____ControlType_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::JetBrains::Annotations::AspChildControlTypeAttribute, 0x20>, "Size mismatch!");

} // namespace JetBrains::Annotations
NEED_NO_BOX(::JetBrains::Annotations::AspChildControlTypeAttribute);
DEFINE_IL2CPP_ARG_TYPE(::JetBrains::Annotations::AspChildControlTypeAttribute*, "JetBrains.Annotations", "AspChildControlTypeAttribute");
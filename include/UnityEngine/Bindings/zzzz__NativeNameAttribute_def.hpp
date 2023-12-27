#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(NativeNameAttribute)
// Forward declare root types
namespace UnityEngine::Bindings {
class NativeNameAttribute;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Bindings::NativeNameAttribute);
// Type: UnityEngine.Bindings::NativeNameAttribute
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Bindings {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2547))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16015))
// CS Name: ::UnityEngine.Bindings::NativeNameAttribute*
class CORDL_TYPE NativeNameAttribute : public ::System::Attribute {
public:
  // Declarations
  /// @brief Field <Name>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __get__Name_k__BackingField, put = __set__Name_k__BackingField))::StringW _Name_k__BackingField;

  __declspec(property(put = set_Name))::StringW Name;

  constexpr ::StringW& __get__Name_k__BackingField();

  constexpr ::StringW const& __get__Name_k__BackingField() const;

  constexpr void __set__Name_k__BackingField(::StringW value);

  /// @brief Method set_Name addr 0x2d1837c size 0x8 virtual true final true
  inline void set_Name(::StringW value);

  static inline ::UnityEngine::Bindings::NativeNameAttribute* New_ctor(::StringW name);

  /// @brief Method .ctor addr 0x2d18384 size 0x104 virtual false final false
  inline void _ctor(::StringW name);

  // Ctor Parameters [CppParam { name: "", ty: "NativeNameAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NativeNameAttribute(NativeNameAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NativeNameAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NativeNameAttribute(NativeNameAttribute const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NativeNameAttribute();

public:
  /// @brief Field <Name>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____Name_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Bindings::NativeNameAttribute, 0x18>, "Size mismatch!");

} // namespace UnityEngine::Bindings
NEED_NO_BOX(::UnityEngine::Bindings::NativeNameAttribute);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Bindings::NativeNameAttribute*, "UnityEngine.Bindings", "NativeNameAttribute");
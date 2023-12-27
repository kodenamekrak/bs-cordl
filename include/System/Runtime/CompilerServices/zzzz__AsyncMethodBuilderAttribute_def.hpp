#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(AsyncMethodBuilderAttribute)
namespace System {
class Type;
}
// Forward declare root types
namespace System::Runtime::CompilerServices {
class AsyncMethodBuilderAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::CompilerServices::AsyncMethodBuilderAttribute);
// Type: System.Runtime.CompilerServices::AsyncMethodBuilderAttribute
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Runtime::CompilerServices {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2547))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3355))
// CS Name: ::System.Runtime.CompilerServices::AsyncMethodBuilderAttribute*
class CORDL_TYPE AsyncMethodBuilderAttribute : public ::System::Attribute {
public:
  // Declarations
  /// @brief Field <BuilderType>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __get__BuilderType_k__BackingField, put = __set__BuilderType_k__BackingField))::System::Type* _BuilderType_k__BackingField;

  constexpr ::System::Type*& __get__BuilderType_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __get__BuilderType_k__BackingField() const;

  constexpr void __set__BuilderType_k__BackingField(::System::Type* value);

  static inline ::System::Runtime::CompilerServices::AsyncMethodBuilderAttribute* New_ctor(::System::Type* builderType);

  /// @brief Method .ctor addr 0x24da71c size 0x28 virtual false final false
  inline void _ctor(::System::Type* builderType);

  // Ctor Parameters [CppParam { name: "", ty: "AsyncMethodBuilderAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AsyncMethodBuilderAttribute(AsyncMethodBuilderAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AsyncMethodBuilderAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AsyncMethodBuilderAttribute(AsyncMethodBuilderAttribute const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AsyncMethodBuilderAttribute();

public:
  /// @brief Field <BuilderType>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::System::Type* ____BuilderType_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::CompilerServices::AsyncMethodBuilderAttribute, 0x18>, "Size mismatch!");

} // namespace System::Runtime::CompilerServices
NEED_NO_BOX(::System::Runtime::CompilerServices::AsyncMethodBuilderAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::CompilerServices::AsyncMethodBuilderAttribute*, "System.Runtime.CompilerServices", "AsyncMethodBuilderAttribute");
#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__EventArgs_def.hpp"
CORDL_MODULE_EXPORT(RefreshEventArgs)
namespace System {
class Type;
}
// Forward declare root types
namespace System::ComponentModel {
class RefreshEventArgs;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::RefreshEventArgs);
// Type: System.ComponentModel::RefreshEventArgs
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::ComponentModel {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2376))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9451))
// CS Name: ::System.ComponentModel::RefreshEventArgs*
class CORDL_TYPE RefreshEventArgs : public ::System::EventArgs {
public:
  // Declarations
  /// @brief Field <TypeChanged>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __get__TypeChanged_k__BackingField, put = __set__TypeChanged_k__BackingField))::System::Type* _TypeChanged_k__BackingField;

  constexpr ::System::Type*& __get__TypeChanged_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __get__TypeChanged_k__BackingField() const;

  constexpr void __set__TypeChanged_k__BackingField(::System::Type* value);

  static inline ::System::ComponentModel::RefreshEventArgs* New_ctor(::System::Type* typeChanged);

  /// @brief Method .ctor addr 0x2917e34 size 0x6c virtual false final false
  inline void _ctor(::System::Type* typeChanged);

  // Ctor Parameters [CppParam { name: "", ty: "RefreshEventArgs", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RefreshEventArgs(RefreshEventArgs&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RefreshEventArgs", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RefreshEventArgs(RefreshEventArgs const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RefreshEventArgs();

public:
  /// @brief Field <TypeChanged>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::System::Type* ____TypeChanged_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::RefreshEventArgs, 0x18>, "Size mismatch!");

} // namespace System::ComponentModel
NEED_NO_BOX(::System::ComponentModel::RefreshEventArgs);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::RefreshEventArgs*, "System.ComponentModel", "RefreshEventArgs");
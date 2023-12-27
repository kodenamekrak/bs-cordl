#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(InstanceDescriptor)
namespace System::Reflection {
class MemberInfo;
}
namespace System::Collections {
class ICollection;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::ComponentModel::Design::Serialization {
class InstanceDescriptor;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::Design::Serialization::InstanceDescriptor);
// Type: System.ComponentModel.Design.Serialization::InstanceDescriptor
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::ComponentModel::Design::Serialization {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9504))
// CS Name: ::System.ComponentModel.Design.Serialization::InstanceDescriptor*
class CORDL_TYPE InstanceDescriptor : public ::System::Object {
public:
  // Declarations
  /// @brief Field <Arguments>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __get__Arguments_k__BackingField, put = __set__Arguments_k__BackingField))::System::Collections::ICollection* _Arguments_k__BackingField;

  /// @brief Field <IsComplete>k__BackingField, offset 0x18, size 0x1
  __declspec(property(get = __get__IsComplete_k__BackingField, put = __set__IsComplete_k__BackingField)) bool _IsComplete_k__BackingField;

  /// @brief Field <MemberInfo>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __get__MemberInfo_k__BackingField, put = __set__MemberInfo_k__BackingField))::System::Reflection::MemberInfo* _MemberInfo_k__BackingField;

  __declspec(property(get = get_Arguments))::System::Collections::ICollection* Arguments;

  __declspec(property(get = get_MemberInfo))::System::Reflection::MemberInfo* MemberInfo;

  constexpr ::System::Collections::ICollection*& __get__Arguments_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::ICollection*> const& __get__Arguments_k__BackingField() const;

  constexpr void __set__Arguments_k__BackingField(::System::Collections::ICollection* value);

  constexpr bool& __get__IsComplete_k__BackingField();

  constexpr bool const& __get__IsComplete_k__BackingField() const;

  constexpr void __set__IsComplete_k__BackingField(bool value);

  constexpr ::System::Reflection::MemberInfo*& __get__MemberInfo_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Reflection::MemberInfo*> const& __get__MemberInfo_k__BackingField() const;

  constexpr void __set__MemberInfo_k__BackingField(::System::Reflection::MemberInfo* value);

  static inline ::System::ComponentModel::Design::Serialization::InstanceDescriptor* New_ctor(::System::Reflection::MemberInfo* member, ::System::Collections::ICollection* arguments);

  /// @brief Method .ctor addr 0x293ab88 size 0x8 virtual false final false
  inline void _ctor(::System::Reflection::MemberInfo* member, ::System::Collections::ICollection* arguments);

  static inline ::System::ComponentModel::Design::Serialization::InstanceDescriptor* New_ctor(::System::Reflection::MemberInfo* member, ::System::Collections::ICollection* arguments, bool isComplete);

  /// @brief Method .ctor addr 0x293ab90 size 0x50c virtual false final false
  inline void _ctor(::System::Reflection::MemberInfo* member, ::System::Collections::ICollection* arguments, bool isComplete);

  /// @brief Method get_Arguments addr 0x293b09c size 0x8 virtual false final false
  inline ::System::Collections::ICollection* get_Arguments();

  /// @brief Method get_MemberInfo addr 0x293b0a4 size 0x8 virtual false final false
  inline ::System::Reflection::MemberInfo* get_MemberInfo();

  /// @brief Method Invoke addr 0x293b0ac size 0x358 virtual false final false
  inline ::System::Object* Invoke();

  // Ctor Parameters [CppParam { name: "", ty: "InstanceDescriptor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InstanceDescriptor(InstanceDescriptor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InstanceDescriptor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InstanceDescriptor(InstanceDescriptor const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InstanceDescriptor();

public:
  /// @brief Field <Arguments>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::ICollection* ____Arguments_k__BackingField;

  /// @brief Field <IsComplete>k__BackingField, offset: 0x18, size: 0x1, def value: None
  bool ____IsComplete_k__BackingField;

  /// @brief Field <MemberInfo>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::System::Reflection::MemberInfo* ____MemberInfo_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::Design::Serialization::InstanceDescriptor, 0x28>, "Size mismatch!");

} // namespace System::ComponentModel::Design::Serialization
NEED_NO_BOX(::System::ComponentModel::Design::Serialization::InstanceDescriptor);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::Design::Serialization::InstanceDescriptor*, "System.ComponentModel.Design.Serialization", "InstanceDescriptor");
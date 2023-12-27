#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(SubContainerCreatorBindInfo)
namespace System {
class Type;
}
// Forward declare root types
namespace Zenject {
class SubContainerCreatorBindInfo;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::SubContainerCreatorBindInfo);
// Type: Zenject::SubContainerCreatorBindInfo
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11242))
// CS Name: ::Zenject::SubContainerCreatorBindInfo*
class CORDL_TYPE SubContainerCreatorBindInfo : public ::System::Object {
public:
  // Declarations
  /// @brief Field <DefaultParentName>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __get__DefaultParentName_k__BackingField, put = __set__DefaultParentName_k__BackingField))::StringW _DefaultParentName_k__BackingField;

  /// @brief Field <CreateKernel>k__BackingField, offset 0x18, size 0x1
  __declspec(property(get = __get__CreateKernel_k__BackingField, put = __set__CreateKernel_k__BackingField)) bool _CreateKernel_k__BackingField;

  /// @brief Field <KernelType>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __get__KernelType_k__BackingField, put = __set__KernelType_k__BackingField))::System::Type* _KernelType_k__BackingField;

  __declspec(property(get = get_DefaultParentName, put = set_DefaultParentName))::StringW DefaultParentName;

  __declspec(property(get = get_CreateKernel, put = set_CreateKernel)) bool CreateKernel;

  __declspec(property(get = get_KernelType, put = set_KernelType))::System::Type* KernelType;

  constexpr ::StringW& __get__DefaultParentName_k__BackingField();

  constexpr ::StringW const& __get__DefaultParentName_k__BackingField() const;

  constexpr void __set__DefaultParentName_k__BackingField(::StringW value);

  constexpr bool& __get__CreateKernel_k__BackingField();

  constexpr bool const& __get__CreateKernel_k__BackingField() const;

  constexpr void __set__CreateKernel_k__BackingField(bool value);

  constexpr ::System::Type*& __get__KernelType_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __get__KernelType_k__BackingField() const;

  constexpr void __set__KernelType_k__BackingField(::System::Type* value);

  /// @brief Method get_DefaultParentName addr 0x2f0afb0 size 0x8 virtual false final false
  inline ::StringW get_DefaultParentName();

  /// @brief Method set_DefaultParentName addr 0x2f0afb8 size 0x8 virtual false final false
  inline void set_DefaultParentName(::StringW value);

  /// @brief Method get_CreateKernel addr 0x2f0afc0 size 0x8 virtual false final false
  inline bool get_CreateKernel();

  /// @brief Method set_CreateKernel addr 0x2f0afc8 size 0xc virtual false final false
  inline void set_CreateKernel(bool value);

  /// @brief Method get_KernelType addr 0x2f0afd4 size 0x8 virtual false final false
  inline ::System::Type* get_KernelType();

  /// @brief Method set_KernelType addr 0x2f0afdc size 0x8 virtual false final false
  inline void set_KernelType(::System::Type* value);

  static inline ::Zenject::SubContainerCreatorBindInfo* New_ctor();

  /// @brief Method .ctor addr 0x2f0afe4 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "SubContainerCreatorBindInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SubContainerCreatorBindInfo(SubContainerCreatorBindInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SubContainerCreatorBindInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SubContainerCreatorBindInfo(SubContainerCreatorBindInfo const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SubContainerCreatorBindInfo();

public:
  /// @brief Field <DefaultParentName>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____DefaultParentName_k__BackingField;

  /// @brief Field <CreateKernel>k__BackingField, offset: 0x18, size: 0x1, def value: None
  bool ____CreateKernel_k__BackingField;

  /// @brief Field <KernelType>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::System::Type* ____KernelType_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::SubContainerCreatorBindInfo, 0x28>, "Size mismatch!");

} // namespace Zenject
NEED_NO_BOX(::Zenject::SubContainerCreatorBindInfo);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::SubContainerCreatorBindInfo*, "Zenject", "SubContainerCreatorBindInfo");
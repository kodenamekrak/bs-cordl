#pragma once
// IWYU pragma private; include "Zenject/DecoratorToChoiceFromBinder_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(DecoratorToChoiceFromBinder_1)
namespace Zenject {
class BindInfo;
}
namespace Zenject {
class DiContainer;
}
namespace Zenject {
class FactoryBindInfo;
}
namespace Zenject {
template <typename TParam1, typename TContract> class FactoryFromBinder_2;
}
// Forward declare root types
namespace Zenject {
template <typename TContract> class DecoratorToChoiceFromBinder_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Zenject::DecoratorToChoiceFromBinder_1);
// Dependencies System.Object
namespace Zenject {
// cpp template
template <typename TContract>
// Is value type: false
// CS Name: Zenject.DecoratorToChoiceFromBinder`1<TContract>
class CORDL_TYPE DecoratorToChoiceFromBinder_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field _bindContainer, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__bindContainer, put = __cordl_internal_set__bindContainer)) ::Zenject::DiContainer* _bindContainer;

  /// @brief Field _bindInfo, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__bindInfo, put = __cordl_internal_set__bindInfo)) ::Zenject::BindInfo* _bindInfo;

  /// @brief Field _factoryBindInfo, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__factoryBindInfo, put = __cordl_internal_set__factoryBindInfo)) ::Zenject::FactoryBindInfo* _factoryBindInfo;

  static inline ::Zenject::DecoratorToChoiceFromBinder_1<TContract>* New_ctor(::Zenject::DiContainer* bindContainer, ::Zenject::BindInfo* bindInfo, ::Zenject::FactoryBindInfo* factoryBindInfo);

  /// @brief Method With, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TConcrete> inline ::Zenject::FactoryFromBinder_2<TContract, TConcrete>* With();

  constexpr ::Zenject::DiContainer* const& __cordl_internal_get__bindContainer() const;

  constexpr ::Zenject::DiContainer*& __cordl_internal_get__bindContainer();

  constexpr ::Zenject::BindInfo* const& __cordl_internal_get__bindInfo() const;

  constexpr ::Zenject::BindInfo*& __cordl_internal_get__bindInfo();

  constexpr ::Zenject::FactoryBindInfo* const& __cordl_internal_get__factoryBindInfo() const;

  constexpr ::Zenject::FactoryBindInfo*& __cordl_internal_get__factoryBindInfo();

  constexpr void __cordl_internal_set__bindContainer(::Zenject::DiContainer* value);

  constexpr void __cordl_internal_set__bindInfo(::Zenject::BindInfo* value);

  constexpr void __cordl_internal_set__factoryBindInfo(::Zenject::FactoryBindInfo* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::Zenject::DiContainer* bindContainer, ::Zenject::BindInfo* bindInfo, ::Zenject::FactoryBindInfo* factoryBindInfo);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DecoratorToChoiceFromBinder_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DecoratorToChoiceFromBinder_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DecoratorToChoiceFromBinder_1(DecoratorToChoiceFromBinder_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DecoratorToChoiceFromBinder_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DecoratorToChoiceFromBinder_1(DecoratorToChoiceFromBinder_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12189 };

  /// @brief Field _bindContainer, offset: 0x10, size: 0x8, def value: None
  ::Zenject::DiContainer* ____bindContainer;

  /// @brief Field _bindInfo, offset: 0x18, size: 0x8, def value: None
  ::Zenject::BindInfo* ____bindInfo;

  /// @brief Field _factoryBindInfo, offset: 0x20, size: 0x8, def value: None
  ::Zenject::FactoryBindInfo* ____factoryBindInfo;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::DecoratorToChoiceFromBinder_1, "Zenject", "DecoratorToChoiceFromBinder`1");

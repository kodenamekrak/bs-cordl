#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__IFactoryProviderBase_1_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
CORDL_MODULE_EXPORT(IFactoryProvider_1)
namespace System {
class Object;
}
namespace System {
class Action;
}
namespace System {
struct Guid;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace Zenject {
class DiContainer;
}
namespace Zenject {
struct TypeValuePair;
}
namespace Zenject {
class InjectContext;
}
// Forward declare root types
namespace Zenject {
template <typename TContract> class IFactoryProvider_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Zenject::IFactoryProvider_1);
// Type: Zenject::IFactoryProvider`1
// SizeInfo { instance_size: 40, native_size: 40, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Zenject {
// cpp template
template <typename TContract>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11194)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11194), inst: 3458 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11195))
// CS Name: ::Zenject::IFactoryProvider`1<TContract>*
class CORDL_TYPE IFactoryProvider_1 : public ::Zenject::IFactoryProviderBase_1<TContract> {
public:
  // Declarations
  static inline ::Zenject::IFactoryProvider_1<TContract>* New_ctor(::Zenject::DiContainer* container, ::System::Guid factoryId);

  /// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void _ctor(::Zenject::DiContainer* container, ::System::Guid factoryId);

  /// @brief Method GetAllInstancesWithInjectSplit addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void GetAllInstancesWithInjectSplit(::Zenject::InjectContext* context, ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* args, ByRef<::System::Action*> injectAction,
                                             ::System::Collections::Generic::List_1<::System::Object*>* buffer);

  // Ctor Parameters [CppParam { name: "", ty: "IFactoryProvider_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IFactoryProvider_1(IFactoryProvider_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IFactoryProvider_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IFactoryProvider_1(IFactoryProvider_1 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IFactoryProvider_1();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::IFactoryProvider_1, "Zenject", "IFactoryProvider`1");
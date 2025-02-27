#pragma once
// IWYU pragma private; include "Zenject/BindSignalIdToBinder_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__BindSignalToBinder_1_def.hpp"
CORDL_MODULE_EXPORT(BindSignalIdToBinder_1)
namespace System {
class Object;
}
namespace Zenject {
template <typename TSignal> class BindSignalToBinder_1;
}
namespace Zenject {
class DiContainer;
}
namespace Zenject {
class InjectTypeInfo;
}
namespace Zenject {
class SignalBindingBindInfo;
}
// Forward declare root types
namespace Zenject {
template <typename TSignal> class BindSignalIdToBinder_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Zenject::BindSignalIdToBinder_1);
// Dependencies Zenject.BindSignalToBinder`1<TSignal>
namespace Zenject {
// cpp template
template <typename TSignal>
// Is value type: false
// CS Name: Zenject.BindSignalIdToBinder`1<TSignal>
class CORDL_TYPE BindSignalIdToBinder_1 : public ::Zenject::BindSignalToBinder_1<TSignal> {
public:
  // Declarations
  static inline ::Zenject::BindSignalIdToBinder_1<TSignal>* New_ctor(::Zenject::DiContainer* container, ::Zenject::SignalBindingBindInfo* signalBindInfo);

  /// @brief Method WithId, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::Zenject::BindSignalToBinder_1<TSignal>* WithId(::System::Object* identifier);

  /// @brief Method __zenCreate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::Zenject::DiContainer* container, ::Zenject::SignalBindingBindInfo* signalBindInfo);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BindSignalIdToBinder_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BindSignalIdToBinder_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BindSignalIdToBinder_1(BindSignalIdToBinder_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BindSignalIdToBinder_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BindSignalIdToBinder_1(BindSignalIdToBinder_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11982 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::BindSignalIdToBinder_1, "Zenject", "BindSignalIdToBinder`1");

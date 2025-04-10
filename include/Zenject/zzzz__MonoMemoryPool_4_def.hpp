#pragma once
// IWYU pragma private; include "Zenject/MonoMemoryPool_4.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__MemoryPool_4_def.hpp"
CORDL_MODULE_EXPORT(MonoMemoryPool_4)
namespace System {
class Object;
}
namespace UnityEngine {
class Transform;
}
namespace Zenject {
class InjectTypeInfo;
}
// Forward declare root types
namespace Zenject {
template <typename TParam1, typename TParam2, typename TParam3, typename TValue> class MonoMemoryPool_4;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Zenject::MonoMemoryPool_4);
// Dependencies Zenject.MemoryPool`4<TParam1, TParam2, TParam3, TValue>
namespace Zenject {
// cpp template
template <typename TParam1, typename TParam2, typename TParam3, typename TValue>
// Is value type: false
// CS Name: Zenject.MonoMemoryPool`4<TParam1,TParam2,TParam3,TValue>
class CORDL_TYPE MonoMemoryPool_4 : public ::Zenject::MemoryPool_4<TParam1, TParam2, TParam3, TValue> {
public:
  // Declarations
  /// @brief Field _originalParent, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__originalParent, put = __cordl_internal_set__originalParent)) ::UnityW<::UnityEngine::Transform> _originalParent;

  static inline ::Zenject::MonoMemoryPool_4<TParam1, TParam2, TParam3, TValue>* New_ctor();

  /// @brief Method OnCreated, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void OnCreated(TValue item);

  /// @brief Method OnDespawned, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void OnDespawned(TValue item);

  /// @brief Method OnDestroyed, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void OnDestroyed(TValue item);

  /// @brief Method OnSpawned, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void OnSpawned(TValue item);

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__originalParent() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__originalParent();

  constexpr void __cordl_internal_set__originalParent(::UnityW<::UnityEngine::Transform> value);

  /// @brief Method __zenCreate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MonoMemoryPool_4();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MonoMemoryPool_4", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MonoMemoryPool_4(MonoMemoryPool_4&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MonoMemoryPool_4", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MonoMemoryPool_4(MonoMemoryPool_4 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12395 };

  /// @brief Field _originalParent, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ____originalParent;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::MonoMemoryPool_4, "Zenject", "MonoMemoryPool`4");

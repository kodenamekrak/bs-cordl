#pragma once
// IWYU pragma private; include "GlobalNamespace/ZenjectSafeBehaviour.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(ZenjectSafeBehaviour)
namespace System {
class Object;
}
namespace Zenject {
class InjectTypeInfo;
}
// Forward declare root types
namespace GlobalNamespace {
class ZenjectSafeBehaviour;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ZenjectSafeBehaviour);
// Type: ::ZenjectSafeBehaviour
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 34, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::ZenjectSafeBehaviour*
class CORDL_TYPE ZenjectSafeBehaviour : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _isInjected, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get__isInjected, put = __cordl_internal_set__isInjected)) bool _isInjected;

  /// @brief Field _wasOnEnableCalled, offset 0x21, size 0x1
  __declspec(property(get = __cordl_internal_get__wasOnEnableCalled, put = __cordl_internal_set__wasOnEnableCalled)) bool _wasOnEnableCalled;

  /// @brief Method Inject, addr 0x4024160, size 0x20, virtual false, abstract: false, final false
  inline void Inject();

  static inline ::GlobalNamespace::ZenjectSafeBehaviour* New_ctor();

  /// @brief Method OnEnable, addr 0x40241a0, size 0x20, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method OnEnablePostInjection, addr 0x40241c0, size 0x4, virtual true, abstract: false, final false
  inline void OnEnablePostInjection();

  /// @brief Method TryInvokeOnEnablePostInjection, addr 0x4024180, size 0x20, virtual false, abstract: false, final false
  inline void TryInvokeOnEnablePostInjection();

  constexpr bool const& __cordl_internal_get__isInjected() const;

  constexpr bool& __cordl_internal_get__isInjected();

  constexpr bool const& __cordl_internal_get__wasOnEnableCalled() const;

  constexpr bool& __cordl_internal_get__wasOnEnableCalled();

  constexpr void __cordl_internal_set__isInjected(bool value);

  constexpr void __cordl_internal_set__wasOnEnableCalled(bool value);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x4024264, size 0x250, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method __zenInjectMethod0, addr 0x40241c4, size 0xa0, virtual false, abstract: false, final false
  static inline void __zenInjectMethod0(::System::Object* P_0, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_1);

  /// @brief Method .ctor, addr 0x401f564, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ZenjectSafeBehaviour();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ZenjectSafeBehaviour", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ZenjectSafeBehaviour(ZenjectSafeBehaviour&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ZenjectSafeBehaviour", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ZenjectSafeBehaviour(ZenjectSafeBehaviour const&) = delete;

  /// @brief Field _isInjected, offset: 0x20, size: 0x1, def value: None
  bool ____isInjected;

  /// @brief Field _wasOnEnableCalled, offset: 0x21, size: 0x1, def value: None
  bool ____wasOnEnableCalled;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17838 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ZenjectSafeBehaviour, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::ZenjectSafeBehaviour, ____isInjected) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ZenjectSafeBehaviour, ____wasOnEnableCalled) == 0x21, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ZenjectSafeBehaviour);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ZenjectSafeBehaviour*, "", "ZenjectSafeBehaviour");

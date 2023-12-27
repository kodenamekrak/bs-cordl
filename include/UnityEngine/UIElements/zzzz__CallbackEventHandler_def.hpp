#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(CallbackEventHandler)
namespace UnityEngine::UIElements {
template <typename TEventType> class EventCallback_1;
}
namespace UnityEngine::UIElements {
class EventBase;
}
namespace UnityEngine::UIElements {
struct InvokePolicy;
}
namespace UnityEngine::UIElements {
struct DispatchMode;
}
namespace UnityEngine::UIElements {
class IEventHandler;
}
namespace UnityEngine::UIElements {
struct TrickleDown;
}
namespace UnityEngine::UIElements {
class EventCallbackRegistry;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class CallbackEventHandler;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::CallbackEventHandler);
// Type: UnityEngine.UIElements::CallbackEventHandler
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7211))
// CS Name: ::UnityEngine.UIElements::CallbackEventHandler*
class CORDL_TYPE CallbackEventHandler : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_CallbackRegistry, offset 0x10, size 0x8
  __declspec(property(get = __get_m_CallbackRegistry, put = __set_m_CallbackRegistry))::UnityEngine::UIElements::EventCallbackRegistry* m_CallbackRegistry;

  /// @brief Convert operator to "::UnityEngine::UIElements::IEventHandler"
  constexpr operator ::UnityEngine::UIElements::IEventHandler*() noexcept;

  constexpr ::UnityEngine::UIElements::EventCallbackRegistry*& __get_m_CallbackRegistry();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::EventCallbackRegistry*> const& __get_m_CallbackRegistry() const;

  constexpr void __set_m_CallbackRegistry(::UnityEngine::UIElements::EventCallbackRegistry* value);

  /// @brief Method RegisterCallback addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename TEventType> inline void RegisterCallback(::UnityEngine::UIElements::EventCallback_1<TEventType>* callback, ::UnityEngine::UIElements::TrickleDown useTrickleDown);

  /// @brief Method RegisterCallback addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename TEventType>
  inline void RegisterCallback(::UnityEngine::UIElements::EventCallback_1<TEventType>* callback, ::UnityEngine::UIElements::InvokePolicy invokePolicy,
                               ::UnityEngine::UIElements::TrickleDown useTrickleDown);

  /// @brief Method UnregisterCallback addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename TEventType> inline void UnregisterCallback(::UnityEngine::UIElements::EventCallback_1<TEventType>* callback, ::UnityEngine::UIElements::TrickleDown useTrickleDown);

  /// @brief Method SendEvent addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void SendEvent(::UnityEngine::UIElements::EventBase* e);

  /// @brief Method SendEvent addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void SendEvent(::UnityEngine::UIElements::EventBase* e, ::UnityEngine::UIElements::DispatchMode dispatchMode);

  /// @brief Method HandleEventAtTargetPhase addr 0x2e4d8d4 size 0x6c virtual false final false
  inline void HandleEventAtTargetPhase(::UnityEngine::UIElements::EventBase* evt);

  /// @brief Method HandleEvent addr 0x2e50964 size 0x2c0 virtual true final false
  inline void HandleEvent(::UnityEngine::UIElements::EventBase* evt);

  /// @brief Method HasTrickleDownHandlers addr 0x2e4cb6c size 0x28 virtual true final true
  inline bool HasTrickleDownHandlers();

  /// @brief Method HasBubbleUpHandlers addr 0x2e4cb94 size 0x28 virtual true final true
  inline bool HasBubbleUpHandlers();

  /// @brief Method ExecuteDefaultActionAtTarget addr 0x2e50c24 size 0x4 virtual true final false
  inline void ExecuteDefaultActionAtTarget(::UnityEngine::UIElements::EventBase* evt);

  /// @brief Method ExecuteDefaultAction addr 0x2e50c28 size 0x4 virtual true final false
  inline void ExecuteDefaultAction(::UnityEngine::UIElements::EventBase* evt);

  /// @brief Method ExecuteDefaultActionDisabledAtTarget addr 0x2e50c2c size 0x4 virtual true final false
  inline void ExecuteDefaultActionDisabledAtTarget(::UnityEngine::UIElements::EventBase* evt);

  /// @brief Method ExecuteDefaultActionDisabled addr 0x2e50c30 size 0x4 virtual true final false
  inline void ExecuteDefaultActionDisabled(::UnityEngine::UIElements::EventBase* evt);

  static inline ::UnityEngine::UIElements::CallbackEventHandler* New_ctor();

  /// @brief Method .ctor addr 0x2e50c34 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "CallbackEventHandler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CallbackEventHandler(CallbackEventHandler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CallbackEventHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CallbackEventHandler(CallbackEventHandler const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CallbackEventHandler();

public:
  /// @brief Field m_CallbackRegistry, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::UIElements::EventCallbackRegistry* ___m_CallbackRegistry;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::CallbackEventHandler, 0x18>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::CallbackEventHandler);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::CallbackEventHandler*, "UnityEngine.UIElements", "CallbackEventHandler");
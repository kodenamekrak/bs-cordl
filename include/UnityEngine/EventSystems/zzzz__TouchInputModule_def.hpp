#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/EventSystems/zzzz__PointerInputModule_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(TouchInputModule)
namespace UnityEngine::EventSystems {
class PointerEventData;
}
// Forward declare root types
namespace UnityEngine::EventSystems {
class TouchInputModule;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::EventSystems::TouchInputModule);
// Type: UnityEngine.EventSystems::TouchInputModule
// SizeInfo { instance_size: 128, native_size: -1, calculated_instance_size: 128, calculated_native_size: 121, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::EventSystems {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10243)), TypeDefinitionIndex(TypeDefinitionIndex(13203))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13206))
// CS Name: ::UnityEngine.EventSystems::TouchInputModule*
class CORDL_TYPE TouchInputModule : public ::UnityEngine::EventSystems::PointerInputModule {
public:
  // Declarations
  /// @brief Field m_LastMousePosition, offset 0x60, size 0x8
  __declspec(property(get = __get_m_LastMousePosition, put = __set_m_LastMousePosition))::UnityEngine::Vector2 m_LastMousePosition;

  /// @brief Field m_MousePosition, offset 0x68, size 0x8
  __declspec(property(get = __get_m_MousePosition, put = __set_m_MousePosition))::UnityEngine::Vector2 m_MousePosition;

  /// @brief Field m_InputPointerEvent, offset 0x70, size 0x8
  __declspec(property(get = __get_m_InputPointerEvent, put = __set_m_InputPointerEvent))::UnityEngine::EventSystems::PointerEventData* m_InputPointerEvent;

  /// @brief Field m_ForceModuleActive, offset 0x78, size 0x1
  __declspec(property(get = __get_m_ForceModuleActive, put = __set_m_ForceModuleActive)) bool m_ForceModuleActive;

  __declspec(property(get = get_allowActivationOnStandalone, put = set_allowActivationOnStandalone)) bool allowActivationOnStandalone;

  __declspec(property(get = get_forceModuleActive, put = set_forceModuleActive)) bool forceModuleActive;

  constexpr ::UnityEngine::Vector2& __get_m_LastMousePosition();

  constexpr ::UnityEngine::Vector2 const& __get_m_LastMousePosition() const;

  constexpr void __set_m_LastMousePosition(::UnityEngine::Vector2 value);

  constexpr ::UnityEngine::Vector2& __get_m_MousePosition();

  constexpr ::UnityEngine::Vector2 const& __get_m_MousePosition() const;

  constexpr void __set_m_MousePosition(::UnityEngine::Vector2 value);

  constexpr ::UnityEngine::EventSystems::PointerEventData*& __get_m_InputPointerEvent();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::EventSystems::PointerEventData*> const& __get_m_InputPointerEvent() const;

  constexpr void __set_m_InputPointerEvent(::UnityEngine::EventSystems::PointerEventData* value);

  constexpr bool& __get_m_ForceModuleActive();

  constexpr bool const& __get_m_ForceModuleActive() const;

  constexpr void __set_m_ForceModuleActive(bool value);

  static inline ::UnityEngine::EventSystems::TouchInputModule* New_ctor();

  /// @brief Method .ctor addr 0x2d9efec size 0x4 virtual false final false
  inline void _ctor();

  /// @brief Method get_allowActivationOnStandalone addr 0x2d9eff0 size 0x8 virtual false final false
  inline bool get_allowActivationOnStandalone();

  /// @brief Method set_allowActivationOnStandalone addr 0x2d9eff8 size 0xc virtual false final false
  inline void set_allowActivationOnStandalone(bool value);

  /// @brief Method get_forceModuleActive addr 0x2d9f004 size 0x8 virtual false final false
  inline bool get_forceModuleActive();

  /// @brief Method set_forceModuleActive addr 0x2d9f00c size 0xc virtual false final false
  inline void set_forceModuleActive(bool value);

  /// @brief Method UpdateModule addr 0x2d9f018 size 0x150 virtual true final false
  inline void UpdateModule();

  /// @brief Method IsModuleSupported addr 0x2d9f168 size 0x38 virtual true final false
  inline bool IsModuleSupported();

  /// @brief Method ShouldActivateModule addr 0x2d9f1a0 size 0xa4 virtual true final false
  inline bool ShouldActivateModule();

  /// @brief Method UseFakeInput addr 0x2d9f244 size 0x30 virtual false final false
  inline bool UseFakeInput();

  /// @brief Method Process addr 0x2d9f274 size 0x28 virtual true final false
  inline void Process();

  /// @brief Method FakeTouches addr 0x2d9f29c size 0x124 virtual false final false
  inline void FakeTouches();

  /// @brief Method ProcessTouchEvents addr 0x2d9f3c0 size 0x148 virtual false final false
  inline void ProcessTouchEvents();

  /// @brief Method ProcessTouchPress addr 0x2d9f508 size 0x668 virtual false final false
  inline void ProcessTouchPress(::UnityEngine::EventSystems::PointerEventData* pointerEvent, bool pressed, bool released);

  /// @brief Method DeactivateModule addr 0x2d9fb70 size 0x4 virtual true final false
  inline void DeactivateModule();

  /// @brief Method ToString addr 0x2d9fb74 size 0x250 virtual true final false
  inline ::StringW ToString();

  // Ctor Parameters [CppParam { name: "", ty: "TouchInputModule", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TouchInputModule(TouchInputModule&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TouchInputModule", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TouchInputModule(TouchInputModule const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TouchInputModule();

public:
  /// @brief Field m_LastMousePosition, offset: 0x60, size: 0x8, def value: None
  ::UnityEngine::Vector2 ___m_LastMousePosition;

  /// @brief Field m_MousePosition, offset: 0x68, size: 0x8, def value: None
  ::UnityEngine::Vector2 ___m_MousePosition;

  /// @brief Field m_InputPointerEvent, offset: 0x70, size: 0x8, def value: None
  ::UnityEngine::EventSystems::PointerEventData* ___m_InputPointerEvent;

  /// @brief Field m_ForceModuleActive, offset: 0x78, size: 0x1, def value: None
  bool ___m_ForceModuleActive;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::EventSystems::TouchInputModule, 0x80>, "Size mismatch!");

} // namespace UnityEngine::EventSystems
NEED_NO_BOX(::UnityEngine::EventSystems::TouchInputModule);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::EventSystems::TouchInputModule*, "UnityEngine.EventSystems", "TouchInputModule");
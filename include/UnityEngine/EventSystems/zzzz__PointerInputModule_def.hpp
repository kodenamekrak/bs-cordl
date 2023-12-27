#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/EventSystems/zzzz__BaseInputModule_def.hpp"
#include "UnityEngine/EventSystems/zzzz__PointerEventData_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(PointerInputModule)
namespace UnityEngine {
struct Touch;
}
namespace UnityEngine::EventSystems {
class __PointerInputModule__MouseState;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine::EventSystems {
class __PointerInputModule__MouseButtonEventData;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine::EventSystems {
struct __PointerEventData__FramePressState;
}
namespace UnityEngine::EventSystems {
class PointerEventData;
}
namespace UnityEngine::EventSystems {
class BaseEventData;
}
namespace UnityEngine::EventSystems {
class __PointerInputModule__ButtonState;
}
namespace UnityEngine::EventSystems {
struct __PointerEventData__InputButton;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace UnityEngine::EventSystems {
class PointerInputModule;
}
namespace UnityEngine::EventSystems {
class __PointerInputModule__ButtonState;
}
namespace UnityEngine::EventSystems {
class __PointerInputModule__MouseButtonEventData;
}
namespace UnityEngine::EventSystems {
class __PointerInputModule__MouseState;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::EventSystems::PointerInputModule);
MARK_REF_PTR_T(::UnityEngine::EventSystems::__PointerInputModule__ButtonState);
MARK_REF_PTR_T(::UnityEngine::EventSystems::__PointerInputModule__MouseButtonEventData);
MARK_REF_PTR_T(::UnityEngine::EventSystems::__PointerInputModule__MouseState);
// Type: ::ButtonState
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::EventSystems {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(13166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13200))
// CS Name: ::PointerInputModule::ButtonState*
class CORDL_TYPE __PointerInputModule__ButtonState : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_Button, offset 0x10, size 0x4
  __declspec(property(get = __get_m_Button, put = __set_m_Button))::UnityEngine::EventSystems::__PointerEventData__InputButton m_Button;

  /// @brief Field m_EventData, offset 0x18, size 0x8
  __declspec(property(get = __get_m_EventData, put = __set_m_EventData))::UnityEngine::EventSystems::__PointerInputModule__MouseButtonEventData* m_EventData;

  __declspec(property(get = get_eventData, put = set_eventData))::UnityEngine::EventSystems::__PointerInputModule__MouseButtonEventData* eventData;

  __declspec(property(get = get_button, put = set_button))::UnityEngine::EventSystems::__PointerEventData__InputButton button;

  constexpr ::UnityEngine::EventSystems::__PointerEventData__InputButton& __get_m_Button();

  constexpr ::UnityEngine::EventSystems::__PointerEventData__InputButton const& __get_m_Button() const;

  constexpr void __set_m_Button(::UnityEngine::EventSystems::__PointerEventData__InputButton value);

  constexpr ::UnityEngine::EventSystems::__PointerInputModule__MouseButtonEventData*& __get_m_EventData();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::EventSystems::__PointerInputModule__MouseButtonEventData*> const& __get_m_EventData() const;

  constexpr void __set_m_EventData(::UnityEngine::EventSystems::__PointerInputModule__MouseButtonEventData* value);

  /// @brief Method get_eventData addr 0x2d9ce84 size 0x8 virtual false final false
  inline ::UnityEngine::EventSystems::__PointerInputModule__MouseButtonEventData* get_eventData();

  /// @brief Method set_eventData addr 0x2d9ce8c size 0x8 virtual false final false
  inline void set_eventData(::UnityEngine::EventSystems::__PointerInputModule__MouseButtonEventData* value);

  /// @brief Method get_button addr 0x2d9ce94 size 0x8 virtual false final false
  inline ::UnityEngine::EventSystems::__PointerEventData__InputButton get_button();

  /// @brief Method set_button addr 0x2d9ce9c size 0x8 virtual false final false
  inline void set_button(::UnityEngine::EventSystems::__PointerEventData__InputButton value);

  static inline ::UnityEngine::EventSystems::__PointerInputModule__ButtonState* New_ctor();

  /// @brief Method .ctor addr 0x2d9cea4 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__PointerInputModule__ButtonState", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PointerInputModule__ButtonState(__PointerInputModule__ButtonState&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PointerInputModule__ButtonState", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PointerInputModule__ButtonState(__PointerInputModule__ButtonState const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PointerInputModule__ButtonState();

public:
  /// @brief Field m_Button, offset: 0x10, size: 0x4, def value: None
  ::UnityEngine::EventSystems::__PointerEventData__InputButton ___m_Button;

  /// @brief Field m_EventData, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::EventSystems::__PointerInputModule__MouseButtonEventData* ___m_EventData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::EventSystems::__PointerInputModule__ButtonState, 0x20>, "Size mismatch!");

} // namespace UnityEngine::EventSystems
// Type: ::MouseState
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::EventSystems {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13201))
// CS Name: ::PointerInputModule::MouseState*
class CORDL_TYPE __PointerInputModule__MouseState : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_TrackedButtons, offset 0x10, size 0x8
  __declspec(property(get = __get_m_TrackedButtons,
                      put = __set_m_TrackedButtons))::System::Collections::Generic::List_1<::UnityEngine::EventSystems::__PointerInputModule__ButtonState*>* m_TrackedButtons;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::__PointerInputModule__ButtonState*>*& __get_m_TrackedButtons();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::EventSystems::__PointerInputModule__ButtonState*>*> const& __get_m_TrackedButtons() const;

  constexpr void __set_m_TrackedButtons(::System::Collections::Generic::List_1<::UnityEngine::EventSystems::__PointerInputModule__ButtonState*>* value);

  /// @brief Method AnyPressesThisFrame addr 0x2d9ceac size 0xb4 virtual false final false
  inline bool AnyPressesThisFrame();

  /// @brief Method AnyReleasesThisFrame addr 0x2d9cf70 size 0xb8 virtual false final false
  inline bool AnyReleasesThisFrame();

  /// @brief Method GetButtonState addr 0x2d9d03c size 0x198 virtual false final false
  inline ::UnityEngine::EventSystems::__PointerInputModule__ButtonState* GetButtonState(::UnityEngine::EventSystems::__PointerEventData__InputButton button);

  /// @brief Method SetButtonState addr 0x2d9c438 size 0x38 virtual false final false
  inline void SetButtonState(::UnityEngine::EventSystems::__PointerEventData__InputButton button, ::UnityEngine::EventSystems::__PointerEventData__FramePressState stateForMouseButton,
                             ::UnityEngine::EventSystems::PointerEventData* data);

  static inline ::UnityEngine::EventSystems::__PointerInputModule__MouseState* New_ctor();

  /// @brief Method .ctor addr 0x2d9ce08 size 0x7c virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__PointerInputModule__MouseState", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PointerInputModule__MouseState(__PointerInputModule__MouseState&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PointerInputModule__MouseState", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PointerInputModule__MouseState(__PointerInputModule__MouseState const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PointerInputModule__MouseState();

public:
  /// @brief Field m_TrackedButtons, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::__PointerInputModule__ButtonState*>* ___m_TrackedButtons;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::EventSystems::__PointerInputModule__MouseState, 0x18>, "Size mismatch!");

} // namespace UnityEngine::EventSystems
// Type: ::MouseButtonEventData
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::EventSystems {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(13167))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13202))
// CS Name: ::PointerInputModule::MouseButtonEventData*
class CORDL_TYPE __PointerInputModule__MouseButtonEventData : public ::System::Object {
public:
  // Declarations
  /// @brief Field buttonState, offset 0x10, size 0x4
  __declspec(property(get = __get_buttonState, put = __set_buttonState))::UnityEngine::EventSystems::__PointerEventData__FramePressState buttonState;

  /// @brief Field buttonData, offset 0x18, size 0x8
  __declspec(property(get = __get_buttonData, put = __set_buttonData))::UnityEngine::EventSystems::PointerEventData* buttonData;

  constexpr ::UnityEngine::EventSystems::__PointerEventData__FramePressState& __get_buttonState();

  constexpr ::UnityEngine::EventSystems::__PointerEventData__FramePressState const& __get_buttonState() const;

  constexpr void __set_buttonState(::UnityEngine::EventSystems::__PointerEventData__FramePressState value);

  constexpr ::UnityEngine::EventSystems::PointerEventData*& __get_buttonData();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::EventSystems::PointerEventData*> const& __get_buttonData() const;

  constexpr void __set_buttonData(::UnityEngine::EventSystems::PointerEventData* value);

  /// @brief Method PressedThisFrame addr 0x2d9cf60 size 0x10 virtual false final false
  inline bool PressedThisFrame();

  /// @brief Method ReleasedThisFrame addr 0x2d9d028 size 0x14 virtual false final false
  inline bool ReleasedThisFrame();

  static inline ::UnityEngine::EventSystems::__PointerInputModule__MouseButtonEventData* New_ctor();

  /// @brief Method .ctor addr 0x2d9d1d4 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__PointerInputModule__MouseButtonEventData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PointerInputModule__MouseButtonEventData(__PointerInputModule__MouseButtonEventData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PointerInputModule__MouseButtonEventData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PointerInputModule__MouseButtonEventData(__PointerInputModule__MouseButtonEventData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PointerInputModule__MouseButtonEventData();

public:
  /// @brief Field buttonState, offset: 0x10, size: 0x4, def value: None
  ::UnityEngine::EventSystems::__PointerEventData__FramePressState ___buttonState;

  /// @brief Field buttonData, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::EventSystems::PointerEventData* ___buttonData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::EventSystems::__PointerInputModule__MouseButtonEventData, 0x20>, "Size mismatch!");

} // namespace UnityEngine::EventSystems
// Type: UnityEngine.EventSystems::PointerInputModule
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 96, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::EventSystems {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13199))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13203))
// CS Name: ::UnityEngine.EventSystems::PointerInputModule*
class CORDL_TYPE PointerInputModule : public ::UnityEngine::EventSystems::BaseInputModule {
public:
  // Declarations
  using MouseButtonEventData = ::UnityEngine::EventSystems::__PointerInputModule__MouseButtonEventData;

  using MouseState = ::UnityEngine::EventSystems::__PointerInputModule__MouseState;

  using ButtonState = ::UnityEngine::EventSystems::__PointerInputModule__ButtonState;

  /// @brief Field m_PointerData, offset 0x50, size 0x8
  __declspec(property(get = __get_m_PointerData, put = __set_m_PointerData))::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::EventSystems::PointerEventData*>* m_PointerData;

  /// @brief Field m_MouseState, offset 0x58, size 0x8
  __declspec(property(get = __get_m_MouseState, put = __set_m_MouseState))::UnityEngine::EventSystems::__PointerInputModule__MouseState* m_MouseState;

  constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::EventSystems::PointerEventData*>*& __get_m_PointerData();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::EventSystems::PointerEventData*>*> const& __get_m_PointerData() const;

  constexpr void __set_m_PointerData(::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::EventSystems::PointerEventData*>* value);

  constexpr ::UnityEngine::EventSystems::__PointerInputModule__MouseState*& __get_m_MouseState();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::EventSystems::__PointerInputModule__MouseState*> const& __get_m_MouseState() const;

  constexpr void __set_m_MouseState(::UnityEngine::EventSystems::__PointerInputModule__MouseState* value);

  /// @brief Method GetPointerData addr 0x2d9bb64 size 0xe8 virtual false final false
  inline bool GetPointerData(int32_t id, ByRef<::UnityEngine::EventSystems::PointerEventData*> data, bool create);

  /// @brief Method RemovePointerData addr 0x2d9bc4c size 0x5c virtual false final false
  inline void RemovePointerData(::UnityEngine::EventSystems::PointerEventData* data);

  /// @brief Method GetTouchPointerEventData addr 0x2d9bca8 size 0x368 virtual false final false
  inline ::UnityEngine::EventSystems::PointerEventData* GetTouchPointerEventData(::UnityEngine::Touch input, ByRef<bool> pressed, ByRef<bool> released);

  /// @brief Method CopyFromTo addr 0x2d9c010 size 0x90 virtual false final false
  inline void CopyFromTo(::UnityEngine::EventSystems::PointerEventData* from, ::UnityEngine::EventSystems::PointerEventData* to);

  /// @brief Method StateForMouseButton addr 0x2d9c0a0 size 0x7c virtual false final false
  inline ::UnityEngine::EventSystems::__PointerEventData__FramePressState StateForMouseButton(int32_t buttonId);

  /// @brief Method GetMousePointerEventData addr 0x2d9c11c size 0x14 virtual true final false
  inline ::UnityEngine::EventSystems::__PointerInputModule__MouseState* GetMousePointerEventData();

  /// @brief Method GetMousePointerEventData addr 0x2d9c130 size 0x308 virtual true final false
  inline ::UnityEngine::EventSystems::__PointerInputModule__MouseState* GetMousePointerEventData(int32_t id);

  /// @brief Method GetLastPointerEventData addr 0x2d9c470 size 0x20 virtual false final false
  inline ::UnityEngine::EventSystems::PointerEventData* GetLastPointerEventData(int32_t id);

  /// @brief Method ShouldStartDrag addr 0x2d9c490 size 0x30 virtual false final false
  static inline bool ShouldStartDrag(::UnityEngine::Vector2 pressPos, ::UnityEngine::Vector2 currentPos, float_t threshold, bool useDragThreshold);

  /// @brief Method ProcessMove addr 0x2d9c4c0 size 0x44 virtual true final false
  inline void ProcessMove(::UnityEngine::EventSystems::PointerEventData* pointerEvent);

  /// @brief Method ProcessDrag addr 0x2d9c504 size 0x2a8 virtual true final false
  inline void ProcessDrag(::UnityEngine::EventSystems::PointerEventData* pointerEvent);

  /// @brief Method IsPointerOverGameObject addr 0x2d9c7ac size 0x9c virtual true final false
  inline bool IsPointerOverGameObject(int32_t pointerId);

  /// @brief Method ClearSelection addr 0x2d9c848 size 0x1c0 virtual false final false
  inline void ClearSelection();

  /// @brief Method ToString addr 0x2d9ca08 size 0x270 virtual true final false
  inline ::StringW ToString();

  /// @brief Method DeselectIfSelectionChanged addr 0x2d9cc78 size 0xec virtual false final false
  inline void DeselectIfSelectionChanged(::UnityEngine::GameObject* currentOverGo, ::UnityEngine::EventSystems::BaseEventData* pointerEvent);

  static inline ::UnityEngine::EventSystems::PointerInputModule* New_ctor();

  /// @brief Method .ctor addr 0x2d9cd64 size 0xa4 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "PointerInputModule", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PointerInputModule(PointerInputModule&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PointerInputModule", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PointerInputModule(PointerInputModule const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PointerInputModule();

public:
  /// @brief Field m_PointerData, offset: 0x50, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::EventSystems::PointerEventData*>* ___m_PointerData;

  /// @brief Field m_MouseState, offset: 0x58, size: 0x8, def value: None
  ::UnityEngine::EventSystems::__PointerInputModule__MouseState* ___m_MouseState;

  /// @brief Field kMouseLeftId offset 0xffffffff size 0x4
  static constexpr int32_t kMouseLeftId{ static_cast<int32_t>(0xffffffff) };

  /// @brief Field kMouseRightId offset 0xffffffff size 0x4
  static constexpr int32_t kMouseRightId{ static_cast<int32_t>(0xfffffffe) };

  /// @brief Field kMouseMiddleId offset 0xffffffff size 0x4
  static constexpr int32_t kMouseMiddleId{ static_cast<int32_t>(0xfffffffd) };

  /// @brief Field kFakeTouchesId offset 0xffffffff size 0x4
  static constexpr int32_t kFakeTouchesId{ static_cast<int32_t>(0xfffffffc) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::EventSystems::PointerInputModule, 0x60>, "Size mismatch!");

} // namespace UnityEngine::EventSystems
NEED_NO_BOX(::UnityEngine::EventSystems::PointerInputModule);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::EventSystems::PointerInputModule*, "UnityEngine.EventSystems", "PointerInputModule");
NEED_NO_BOX(::UnityEngine::EventSystems::__PointerInputModule__ButtonState);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::EventSystems::__PointerInputModule__ButtonState*, "UnityEngine.EventSystems", "PointerInputModule/ButtonState");
NEED_NO_BOX(::UnityEngine::EventSystems::__PointerInputModule__MouseButtonEventData);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::EventSystems::__PointerInputModule__MouseButtonEventData*, "UnityEngine.EventSystems", "PointerInputModule/MouseButtonEventData");
NEED_NO_BOX(::UnityEngine::EventSystems::__PointerInputModule__MouseState);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::EventSystems::__PointerInputModule__MouseState*, "UnityEngine.EventSystems", "PointerInputModule/MouseState");
#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/EventSystems/zzzz__PointerEventData_def.hpp"
#include "UnityEngine/EventSystems/zzzz__RaycastResult_def.hpp"
#include "UnityEngine/InputSystem/UI/zzzz__PointerModel_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PointerModel)
namespace UnityEngine::InputSystem::UI {
class ExtendedPointerEventData;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine::InputSystem::UI {
struct __PointerModel__ButtonState;
}
namespace UnityEngine::InputSystem::UI {
struct UIPointerType;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine::EventSystems {
class PointerEventData;
}
namespace UnityEngine::EventSystems {
struct RaycastResult;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine::EventSystems {
struct __PointerEventData__FramePressState;
}
// Forward declare root types
namespace UnityEngine::InputSystem::UI {
struct PointerModel;
}
namespace UnityEngine::InputSystem::UI {
struct __PointerModel__ButtonState;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::UI::PointerModel);
MARK_VAL_T(::UnityEngine::InputSystem::UI::__PointerModel__ButtonState);
// Type: ::ButtonState
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 155, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::UI {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13213)), TypeDefinitionIndex(TypeDefinitionIndex(13167)), TypeDefinitionIndex(TypeDefinitionIndex(10243))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6379))
// CS Name: ::PointerModel::ButtonState
struct CORDL_TYPE __PointerModel__ButtonState {
public:
  // Declarations
  __declspec(property(get = get_isPressed, put = set_isPressed)) bool isPressed;

  __declspec(property(get = get_ignoreNextClick, put = set_ignoreNextClick)) bool ignoreNextClick;

  __declspec(property(get = get_pressTime, put = set_pressTime)) float_t pressTime;

  __declspec(property(get = get_clickedOnSameGameObject, put = set_clickedOnSameGameObject)) bool clickedOnSameGameObject;

  __declspec(property(get = get_wasPressedThisFrame)) bool wasPressedThisFrame;

  __declspec(property(get = get_wasReleasedThisFrame)) bool wasReleasedThisFrame;

  /// @brief Method get_isPressed addr 0x2ad688c size 0x8 virtual false final false
  inline bool get_isPressed();

  /// @brief Method set_isPressed addr 0x2ad59f0 size 0x54 virtual false final false
  inline void set_isPressed(bool value);

  /// @brief Method get_ignoreNextClick addr 0x2ad6894 size 0x8 virtual false final false
  inline bool get_ignoreNextClick();

  /// @brief Method set_ignoreNextClick addr 0x2ad689c size 0xc virtual false final false
  inline void set_ignoreNextClick(bool value);

  /// @brief Method get_pressTime addr 0x2ad68a8 size 0x8 virtual false final false
  inline float_t get_pressTime();

  /// @brief Method set_pressTime addr 0x2ad68b0 size 0x8 virtual false final false
  inline void set_pressTime(float_t value);

  /// @brief Method get_clickedOnSameGameObject addr 0x2ad68b8 size 0x8 virtual false final false
  inline bool get_clickedOnSameGameObject();

  /// @brief Method set_clickedOnSameGameObject addr 0x2ad68c0 size 0xc virtual false final false
  inline void set_clickedOnSameGameObject(bool value);

  /// @brief Method get_wasPressedThisFrame addr 0x2ad2774 size 0x10 virtual false final false
  inline bool get_wasPressedThisFrame();

  /// @brief Method get_wasReleasedThisFrame addr 0x2ad20cc size 0x14 virtual false final false
  inline bool get_wasReleasedThisFrame();

  /// @brief Method CopyPressStateTo addr 0x2ad1244 size 0xa0 virtual false final false
  inline void CopyPressStateTo(::UnityEngine::EventSystems::PointerEventData* eventData);

  /// @brief Method CopyPressStateFrom addr 0x2ad2784 size 0x68 virtual false final false
  inline void CopyPressStateFrom(::UnityEngine::EventSystems::PointerEventData* eventData);

  /// @brief Method OnEndFrame addr 0x2ad6880 size 0xc virtual false final false
  inline void OnEndFrame();

  // Ctor Parameters [CppParam { name: "m_IsPressed", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "m_FramePressState", ty:
  // "::UnityEngine::EventSystems::__PointerEventData__FramePressState", modifiers: "", def_value: None }, CppParam { name: "m_PressTime", ty: "float_t", modifiers: "", def_value: None }, CppParam {
  // name: "m_PressRaycast", ty: "::UnityEngine::EventSystems::RaycastResult", modifiers: "", def_value: None }, CppParam { name: "m_PressObject", ty: "::UnityEngine::GameObject*", modifiers: "",
  // def_value: None }, CppParam { name: "m_RawPressObject", ty: "::UnityEngine::GameObject*", modifiers: "", def_value: None }, CppParam { name: "m_LastPressObject", ty: "::UnityEngine::GameObject*",
  // modifiers: "", def_value: None }, CppParam { name: "m_DragObject", ty: "::UnityEngine::GameObject*", modifiers: "", def_value: None }, CppParam { name: "m_PressPosition", ty:
  // "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "m_ClickTime", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_ClickCount", ty: "int32_t",
  // modifiers: "", def_value: None }, CppParam { name: "m_Dragging", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "m_ClickedOnSameGameObject", ty: "bool", modifiers: "", def_value:
  // None }, CppParam { name: "m_IgnoreNextClick", ty: "bool", modifiers: "", def_value: None }]
  constexpr __PointerModel__ButtonState(bool m_IsPressed, ::UnityEngine::EventSystems::__PointerEventData__FramePressState m_FramePressState, float_t m_PressTime,
                                        ::UnityEngine::EventSystems::RaycastResult m_PressRaycast, ::UnityEngine::GameObject* m_PressObject, ::UnityEngine::GameObject* m_RawPressObject,
                                        ::UnityEngine::GameObject* m_LastPressObject, ::UnityEngine::GameObject* m_DragObject, ::UnityEngine::Vector2 m_PressPosition, float_t m_ClickTime,
                                        int32_t m_ClickCount, bool m_Dragging, bool m_ClickedOnSameGameObject, bool m_IgnoreNextClick) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __PointerModel__ButtonState();

  /// @brief Field m_IsPressed, offset: 0x0, size: 0x1, def value: None
  bool m_IsPressed;

  /// @brief Field m_FramePressState, offset: 0x4, size: 0x4, def value: None
  ::UnityEngine::EventSystems::__PointerEventData__FramePressState m_FramePressState;

  /// @brief Field m_PressTime, offset: 0x8, size: 0x4, def value: None
  float_t m_PressTime;

  /// @brief Field m_PressRaycast, offset: 0x10, size: 0x48, def value: None
  ::UnityEngine::EventSystems::RaycastResult m_PressRaycast;

  /// @brief Field m_PressObject, offset: 0x58, size: 0x8, def value: None
  ::UnityEngine::GameObject* m_PressObject;

  /// @brief Field m_RawPressObject, offset: 0x60, size: 0x8, def value: None
  ::UnityEngine::GameObject* m_RawPressObject;

  /// @brief Field m_LastPressObject, offset: 0x68, size: 0x8, def value: None
  ::UnityEngine::GameObject* m_LastPressObject;

  /// @brief Field m_DragObject, offset: 0x70, size: 0x8, def value: None
  ::UnityEngine::GameObject* m_DragObject;

  /// @brief Field m_PressPosition, offset: 0x78, size: 0x8, def value: None
  ::UnityEngine::Vector2 m_PressPosition;

  /// @brief Field m_ClickTime, offset: 0x80, size: 0x4, def value: None
  float_t m_ClickTime;

  /// @brief Field m_ClickCount, offset: 0x84, size: 0x4, def value: None
  int32_t m_ClickCount;

  /// @brief Field m_Dragging, offset: 0x88, size: 0x1, def value: None
  bool m_Dragging;

  /// @brief Field m_ClickedOnSameGameObject, offset: 0x89, size: 0x1, def value: None
  bool m_ClickedOnSameGameObject;

  /// @brief Field m_IgnoreNextClick, offset: 0x8a, size: 0x1, def value: None
  bool m_IgnoreNextClick;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x90 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::UI::__PointerModel__ButtonState, 0x90>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::UI
// Type: UnityEngine.InputSystem.UI::PointerModel
// SizeInfo { instance_size: 520, native_size: -1, calculated_instance_size: 520, calculated_native_size: 532, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::UI {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10243)), TypeDefinitionIndex(TypeDefinitionIndex(10252)), TypeDefinitionIndex(TypeDefinitionIndex(6379)),
// TypeDefinitionIndex(TypeDefinitionIndex(10249))} Self: TypeDefinitionIndex(TypeDefinitionIndex(6380)) CS Name: ::UnityEngine.InputSystem.UI::PointerModel
struct CORDL_TYPE PointerModel {
public:
  // Declarations
  using ButtonState = ::UnityEngine::InputSystem::UI::__PointerModel__ButtonState;

  __declspec(property(get = get_pointerType))::UnityEngine::InputSystem::UI::UIPointerType pointerType;

  __declspec(property(get = get_screenPosition, put = set_screenPosition))::UnityEngine::Vector2 screenPosition;

  __declspec(property(get = get_worldPosition, put = set_worldPosition))::UnityEngine::Vector3 worldPosition;

  __declspec(property(get = get_worldOrientation, put = set_worldOrientation))::UnityEngine::Quaternion worldOrientation;

  __declspec(property(get = get_scrollDelta, put = set_scrollDelta))::UnityEngine::Vector2 scrollDelta;

  __declspec(property(get = get_pressure, put = set_pressure)) float_t pressure;

  __declspec(property(get = get_azimuthAngle, put = set_azimuthAngle)) float_t azimuthAngle;

  __declspec(property(get = get_altitudeAngle, put = set_altitudeAngle)) float_t altitudeAngle;

  __declspec(property(get = get_twist, put = set_twist)) float_t twist;

  __declspec(property(get = get_radius, put = set_radius))::UnityEngine::Vector2 radius;

  /// @brief Method get_pointerType addr 0x2ad1330 size 0x1c virtual false final false
  inline ::UnityEngine::InputSystem::UI::UIPointerType get_pointerType();

  /// @brief Method get_screenPosition addr 0x2ad6768 size 0xc virtual false final false
  inline ::UnityEngine::Vector2 get_screenPosition();

  /// @brief Method set_screenPosition addr 0x2ad53b8 size 0x40 virtual false final false
  inline void set_screenPosition(::UnityEngine::Vector2 value);

  /// @brief Method get_worldPosition addr 0x2ad6774 size 0x10 virtual false final false
  inline ::UnityEngine::Vector3 get_worldPosition();

  /// @brief Method set_worldPosition addr 0x2ad5e0c size 0x54 virtual false final false
  inline void set_worldPosition(::UnityEngine::Vector3 value);

  /// @brief Method get_worldOrientation addr 0x2ad6784 size 0x14 virtual false final false
  inline ::UnityEngine::Quaternion get_worldOrientation();

  /// @brief Method set_worldOrientation addr 0x2ad5d30 size 0x58 virtual false final false
  inline void set_worldOrientation(::UnityEngine::Quaternion value);

  /// @brief Method get_scrollDelta addr 0x2ad6798 size 0xc virtual false final false
  inline ::UnityEngine::Vector2 get_scrollDelta();

  /// @brief Method set_scrollDelta addr 0x2ad5c0c size 0x40 virtual false final false
  inline void set_scrollDelta(::UnityEngine::Vector2 value);

  /// @brief Method get_pressure addr 0x2ad67a4 size 0x8 virtual false final false
  inline float_t get_pressure();

  /// @brief Method set_pressure addr 0x2ad67ac size 0x1c virtual false final false
  inline void set_pressure(float_t value);

  /// @brief Method get_azimuthAngle addr 0x2ad67c8 size 0x8 virtual false final false
  inline float_t get_azimuthAngle();

  /// @brief Method set_azimuthAngle addr 0x2ad67d0 size 0x1c virtual false final false
  inline void set_azimuthAngle(float_t value);

  /// @brief Method get_altitudeAngle addr 0x2ad67ec size 0x8 virtual false final false
  inline float_t get_altitudeAngle();

  /// @brief Method set_altitudeAngle addr 0x2ad67f4 size 0x1c virtual false final false
  inline void set_altitudeAngle(float_t value);

  /// @brief Method get_twist addr 0x2ad6810 size 0x8 virtual false final false
  inline float_t get_twist();

  /// @brief Method set_twist addr 0x2ad6818 size 0x1c virtual false final false
  inline void set_twist(float_t value);

  /// @brief Method get_radius addr 0x2ad6834 size 0xc virtual false final false
  inline ::UnityEngine::Vector2 get_radius();

  /// @brief Method set_radius addr 0x2ad6840 size 0x40 virtual false final false
  inline void set_radius(::UnityEngine::Vector2 value);

  /// @brief Method .ctor addr 0x2ad53f8 size 0x6c virtual false final false
  inline void _ctor(::UnityEngine::InputSystem::UI::ExtendedPointerEventData* eventData);

  /// @brief Method OnFrameFinished addr 0x2ad6018 size 0x48 virtual false final false
  inline void OnFrameFinished();

  /// @brief Method CopyTouchOrPenStateFrom addr 0x2ad6060 size 0xc8 virtual false final false
  inline void CopyTouchOrPenStateFrom(::UnityEngine::EventSystems::PointerEventData* eventData);

  // Ctor Parameters [CppParam { name: "changedThisFrame", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "leftButton", ty:
  // "::UnityEngine::InputSystem::UI::__PointerModel__ButtonState", modifiers: "", def_value: None }, CppParam { name: "rightButton", ty: "::UnityEngine::InputSystem::UI::__PointerModel__ButtonState",
  // modifiers: "", def_value: None }, CppParam { name: "middleButton", ty: "::UnityEngine::InputSystem::UI::__PointerModel__ButtonState", modifiers: "", def_value: None }, CppParam { name:
  // "eventData", ty: "::UnityEngine::InputSystem::UI::ExtendedPointerEventData*", modifiers: "", def_value: None }, CppParam { name: "m_ScreenPosition", ty: "::UnityEngine::Vector2", modifiers: "",
  // def_value: None }, CppParam { name: "m_ScrollDelta", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "m_WorldPosition", ty: "::UnityEngine::Vector3", modifiers:
  // "", def_value: None }, CppParam { name: "m_WorldOrientation", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: None }, CppParam { name: "m_Pressure", ty: "float_t", modifiers: "",
  // def_value: None }, CppParam { name: "m_AzimuthAngle", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_AltitudeAngle", ty: "float_t", modifiers: "", def_value: None },
  // CppParam { name: "m_Twist", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_Radius", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None }]
  constexpr PointerModel(bool changedThisFrame, ::UnityEngine::InputSystem::UI::__PointerModel__ButtonState leftButton, ::UnityEngine::InputSystem::UI::__PointerModel__ButtonState rightButton,
                         ::UnityEngine::InputSystem::UI::__PointerModel__ButtonState middleButton, ::UnityEngine::InputSystem::UI::ExtendedPointerEventData* eventData,
                         ::UnityEngine::Vector2 m_ScreenPosition, ::UnityEngine::Vector2 m_ScrollDelta, ::UnityEngine::Vector3 m_WorldPosition, ::UnityEngine::Quaternion m_WorldOrientation,
                         float_t m_Pressure, float_t m_AzimuthAngle, float_t m_AltitudeAngle, float_t m_Twist, ::UnityEngine::Vector2 m_Radius) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr PointerModel();

  /// @brief Field changedThisFrame, offset: 0x0, size: 0x1, def value: None
  bool changedThisFrame;

  /// @brief Field leftButton, offset: 0x8, size: 0x90, def value: None
  ::UnityEngine::InputSystem::UI::__PointerModel__ButtonState leftButton;

  /// @brief Field rightButton, offset: 0x98, size: 0x90, def value: None
  ::UnityEngine::InputSystem::UI::__PointerModel__ButtonState rightButton;

  /// @brief Field middleButton, offset: 0x128, size: 0x90, def value: None
  ::UnityEngine::InputSystem::UI::__PointerModel__ButtonState middleButton;

  /// @brief Field eventData, offset: 0x1b8, size: 0x8, def value: None
  ::UnityEngine::InputSystem::UI::ExtendedPointerEventData* eventData;

  /// @brief Field m_ScreenPosition, offset: 0x1c0, size: 0x8, def value: None
  ::UnityEngine::Vector2 m_ScreenPosition;

  /// @brief Field m_ScrollDelta, offset: 0x1c8, size: 0x8, def value: None
  ::UnityEngine::Vector2 m_ScrollDelta;

  /// @brief Field m_WorldPosition, offset: 0x1d0, size: 0xc, def value: None
  ::UnityEngine::Vector3 m_WorldPosition;

  /// @brief Field m_WorldOrientation, offset: 0x1dc, size: 0x10, def value: None
  ::UnityEngine::Quaternion m_WorldOrientation;

  /// @brief Field m_Pressure, offset: 0x1ec, size: 0x4, def value: None
  float_t m_Pressure;

  /// @brief Field m_AzimuthAngle, offset: 0x1f0, size: 0x4, def value: None
  float_t m_AzimuthAngle;

  /// @brief Field m_AltitudeAngle, offset: 0x1f4, size: 0x4, def value: None
  float_t m_AltitudeAngle;

  /// @brief Field m_Twist, offset: 0x1f8, size: 0x4, def value: None
  float_t m_Twist;

  /// @brief Field m_Radius, offset: 0x1fc, size: 0x8, def value: None
  ::UnityEngine::Vector2 m_Radius;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x208 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::UI::PointerModel, 0x208>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::UI
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::UI::PointerModel, "UnityEngine.InputSystem.UI", "PointerModel");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::UI::__PointerModel__ButtonState, "UnityEngine.InputSystem.UI", "PointerModel/ButtonState");
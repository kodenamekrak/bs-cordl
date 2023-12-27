#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FocusController)
namespace UnityEngine::UIElements {
class FocusChangeDirection;
}
namespace UnityEngine::UIElements {
struct DispatchMode;
}
namespace UnityEngine::UIElements {
class Focusable;
}
namespace UnityEngine::UIElements {
struct __FocusController__FocusedElement;
}
namespace UnityEngine::UIElements {
class IFocusRing;
}
namespace UnityEngine::UIElements {
class EventBase;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class FocusController;
}
namespace UnityEngine::UIElements {
struct __FocusController__FocusedElement;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::FocusController);
MARK_VAL_T(::UnityEngine::UIElements::__FocusController__FocusedElement);
// Type: ::FocusedElement
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6883))
// CS Name: ::FocusController::FocusedElement
struct CORDL_TYPE __FocusController__FocusedElement {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "m_SubTreeRoot", ty: "::UnityEngine::UIElements::VisualElement*", modifiers: "", def_value: None }, CppParam { name: "m_FocusedElement", ty:
  // "::UnityEngine::UIElements::Focusable*", modifiers: "", def_value: None }]
  constexpr __FocusController__FocusedElement(::UnityEngine::UIElements::VisualElement* m_SubTreeRoot, ::UnityEngine::UIElements::Focusable* m_FocusedElement) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __FocusController__FocusedElement();

  /// @brief Field m_SubTreeRoot, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::UIElements::VisualElement* m_SubTreeRoot;

  /// @brief Field m_FocusedElement, offset: 0x8, size: 0x8, def value: None
  ::UnityEngine::UIElements::Focusable* m_FocusedElement;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__FocusController__FocusedElement, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Type: UnityEngine.UIElements::FocusController
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6884))
// CS Name: ::UnityEngine.UIElements::FocusController*
class CORDL_TYPE FocusController : public ::System::Object {
public:
  // Declarations
  using FocusedElement = ::UnityEngine::UIElements::__FocusController__FocusedElement;

  /// @brief Field <focusRing>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __get__focusRing_k__BackingField, put = __set__focusRing_k__BackingField))::UnityEngine::UIElements::IFocusRing* _focusRing_k__BackingField;

  /// @brief Field m_FocusedElements, offset 0x18, size 0x8
  __declspec(property(get = __get_m_FocusedElements,
                      put = __set_m_FocusedElements))::System::Collections::Generic::List_1<::UnityEngine::UIElements::__FocusController__FocusedElement>* m_FocusedElements;

  /// @brief Field m_LastFocusedElement, offset 0x20, size 0x8
  __declspec(property(get = __get_m_LastFocusedElement, put = __set_m_LastFocusedElement))::UnityEngine::UIElements::Focusable* m_LastFocusedElement;

  /// @brief Field m_LastPendingFocusedElement, offset 0x28, size 0x8
  __declspec(property(get = __get_m_LastPendingFocusedElement, put = __set_m_LastPendingFocusedElement))::UnityEngine::UIElements::Focusable* m_LastPendingFocusedElement;

  /// @brief Field m_PendingFocusCount, offset 0x30, size 0x4
  __declspec(property(get = __get_m_PendingFocusCount, put = __set_m_PendingFocusCount)) int32_t m_PendingFocusCount;

  /// @brief Field <imguiKeyboardControl>k__BackingField, offset 0x34, size 0x4
  __declspec(property(get = __get__imguiKeyboardControl_k__BackingField, put = __set__imguiKeyboardControl_k__BackingField)) int32_t _imguiKeyboardControl_k__BackingField;

  __declspec(property(get = get_focusRing))::UnityEngine::UIElements::IFocusRing* focusRing;

  __declspec(property(get = get_focusedElement))::UnityEngine::UIElements::Focusable* focusedElement;

  __declspec(property(get = get_imguiKeyboardControl, put = set_imguiKeyboardControl)) int32_t imguiKeyboardControl;

  constexpr ::UnityEngine::UIElements::IFocusRing*& __get__focusRing_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::IFocusRing*> const& __get__focusRing_k__BackingField() const;

  constexpr void __set__focusRing_k__BackingField(::UnityEngine::UIElements::IFocusRing* value);

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::__FocusController__FocusedElement>*& __get_m_FocusedElements();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::UIElements::__FocusController__FocusedElement>*> const& __get_m_FocusedElements() const;

  constexpr void __set_m_FocusedElements(::System::Collections::Generic::List_1<::UnityEngine::UIElements::__FocusController__FocusedElement>* value);

  constexpr ::UnityEngine::UIElements::Focusable*& __get_m_LastFocusedElement();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::Focusable*> const& __get_m_LastFocusedElement() const;

  constexpr void __set_m_LastFocusedElement(::UnityEngine::UIElements::Focusable* value);

  constexpr ::UnityEngine::UIElements::Focusable*& __get_m_LastPendingFocusedElement();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::Focusable*> const& __get_m_LastPendingFocusedElement() const;

  constexpr void __set_m_LastPendingFocusedElement(::UnityEngine::UIElements::Focusable* value);

  constexpr int32_t& __get_m_PendingFocusCount();

  constexpr int32_t const& __get_m_PendingFocusCount() const;

  constexpr void __set_m_PendingFocusCount(int32_t value);

  constexpr int32_t& __get__imguiKeyboardControl_k__BackingField();

  constexpr int32_t const& __get__imguiKeyboardControl_k__BackingField() const;

  constexpr void __set__imguiKeyboardControl_k__BackingField(int32_t value);

  static inline ::UnityEngine::UIElements::FocusController* New_ctor(::UnityEngine::UIElements::IFocusRing* focusRing);

  /// @brief Method .ctor addr 0x2dfa8e4 size 0x98 virtual false final false
  inline void _ctor(::UnityEngine::UIElements::IFocusRing* focusRing);

  /// @brief Method get_focusRing addr 0x2dfa97c size 0x8 virtual false final false
  inline ::UnityEngine::UIElements::IFocusRing* get_focusRing();

  /// @brief Method get_focusedElement addr 0x2dfa984 size 0x44 virtual false final false
  inline ::UnityEngine::UIElements::Focusable* get_focusedElement();

  /// @brief Method IsFocused addr 0x2dfac08 size 0x174 virtual false final false
  inline bool IsFocused(::UnityEngine::UIElements::Focusable* f);

  /// @brief Method GetRetargetedFocusedElement addr 0x2dfa9c8 size 0x204 virtual false final false
  inline ::UnityEngine::UIElements::Focusable* GetRetargetedFocusedElement(::UnityEngine::UIElements::VisualElement* retargetAgainst);

  /// @brief Method GetLeafFocusedElement addr 0x2dfad7c size 0xa4 virtual false final false
  inline ::UnityEngine::UIElements::Focusable* GetLeafFocusedElement();

  /// @brief Method IsLocalElement addr 0x2dfabcc size 0x3c virtual false final false
  inline bool IsLocalElement(::UnityEngine::UIElements::Focusable* f);

  /// @brief Method IsPendingFocus addr 0x2dfae20 size 0xb0 virtual false final false
  inline bool IsPendingFocus(::UnityEngine::UIElements::Focusable* f);

  /// @brief Method SetFocusToLastFocusedElement addr 0x2dfaed0 size 0x88 virtual false final false
  inline void SetFocusToLastFocusedElement();

  /// @brief Method BlurLastFocusedElement addr 0x2dfaf58 size 0x88 virtual false final false
  inline void BlurLastFocusedElement();

  /// @brief Method DoFocusChange addr 0x2dfafe0 size 0x190 virtual false final false
  inline void DoFocusChange(::UnityEngine::UIElements::Focusable* f);

  /// @brief Method FocusNextInDirection addr 0x2dfb170 size 0xec virtual false final false
  inline ::UnityEngine::UIElements::Focusable* FocusNextInDirection(::UnityEngine::UIElements::FocusChangeDirection* direction);

  /// @brief Method AboutToReleaseFocus addr 0x2dfb25c size 0x1c4 virtual false final false
  inline void AboutToReleaseFocus(::UnityEngine::UIElements::Focusable* focusable, ::UnityEngine::UIElements::Focusable* willGiveFocusTo, ::UnityEngine::UIElements::FocusChangeDirection* direction,
                                  ::UnityEngine::UIElements::DispatchMode dispatchMode);

  /// @brief Method ReleaseFocus addr 0x2dfb420 size 0x1c4 virtual false final false
  inline void ReleaseFocus(::UnityEngine::UIElements::Focusable* focusable, ::UnityEngine::UIElements::Focusable* willGiveFocusTo, ::UnityEngine::UIElements::FocusChangeDirection* direction,
                           ::UnityEngine::UIElements::DispatchMode dispatchMode);

  /// @brief Method AboutToGrabFocus addr 0x2dfb5e4 size 0x1c4 virtual false final false
  inline void AboutToGrabFocus(::UnityEngine::UIElements::Focusable* focusable, ::UnityEngine::UIElements::Focusable* willTakeFocusFrom, ::UnityEngine::UIElements::FocusChangeDirection* direction,
                               ::UnityEngine::UIElements::DispatchMode dispatchMode);

  /// @brief Method GrabFocus addr 0x2dfb7a8 size 0x1d0 virtual false final false
  inline void GrabFocus(::UnityEngine::UIElements::Focusable* focusable, ::UnityEngine::UIElements::Focusable* willTakeFocusFrom, ::UnityEngine::UIElements::FocusChangeDirection* direction,
                        bool bIsFocusDelegated, ::UnityEngine::UIElements::DispatchMode dispatchMode);

  /// @brief Method Blur addr 0x2df9eb8 size 0x58 virtual false final false
  inline void Blur(::UnityEngine::UIElements::Focusable* focusable, bool bIsFocusDelegated, ::UnityEngine::UIElements::DispatchMode dispatchMode);

  /// @brief Method SwitchFocus addr 0x2df9dc8 size 0xb8 virtual false final false
  inline void SwitchFocus(::UnityEngine::UIElements::Focusable* newFocusedElement, bool bIsFocusDelegated, ::UnityEngine::UIElements::DispatchMode dispatchMode);

  /// @brief Method SwitchFocus addr 0x2dfa580 size 0x294 virtual false final false
  inline void SwitchFocus(::UnityEngine::UIElements::Focusable* newFocusedElement, ::UnityEngine::UIElements::FocusChangeDirection* direction, bool bIsFocusDelegated,
                          ::UnityEngine::UIElements::DispatchMode dispatchMode);

  /// @brief Method SwitchFocusOnEvent addr 0x2dfa120 size 0x2ec virtual false final false
  inline ::UnityEngine::UIElements::Focusable* SwitchFocusOnEvent(::UnityEngine::UIElements::EventBase* e);

  /// @brief Method ReevaluateFocus addr 0x2dfb978 size 0xc0 virtual false final false
  inline void ReevaluateFocus();

  /// @brief Method GetFocusableParentForPointerEvent addr 0x2dfba38 size 0x104 virtual false final false
  inline bool GetFocusableParentForPointerEvent(::UnityEngine::UIElements::Focusable* target, ByRef<::UnityEngine::UIElements::Focusable*> effectiveTarget);

  /// @brief Method get_imguiKeyboardControl addr 0x2dfbb3c size 0x8 virtual false final false
  inline int32_t get_imguiKeyboardControl();

  /// @brief Method set_imguiKeyboardControl addr 0x2dfbb44 size 0x8 virtual false final false
  inline void set_imguiKeyboardControl(int32_t value);

  /// @brief Method SyncIMGUIFocus addr 0x2dfbb4c size 0xcc virtual false final false
  inline void SyncIMGUIFocus(int32_t imguiKeyboardControlID, ::UnityEngine::UIElements::Focusable* imguiContainerHavingKeyboardControl, bool forceSwitch);

  // Ctor Parameters [CppParam { name: "", ty: "FocusController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FocusController(FocusController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FocusController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FocusController(FocusController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FocusController();

public:
  /// @brief Field <focusRing>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::UIElements::IFocusRing* ____focusRing_k__BackingField;

  /// @brief Field m_FocusedElements, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::UIElements::__FocusController__FocusedElement>* ___m_FocusedElements;

  /// @brief Field m_LastFocusedElement, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::UIElements::Focusable* ___m_LastFocusedElement;

  /// @brief Field m_LastPendingFocusedElement, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::UIElements::Focusable* ___m_LastPendingFocusedElement;

  /// @brief Field m_PendingFocusCount, offset: 0x30, size: 0x4, def value: None
  int32_t ___m_PendingFocusCount;

  /// @brief Field <imguiKeyboardControl>k__BackingField, offset: 0x34, size: 0x4, def value: None
  int32_t ____imguiKeyboardControl_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::FocusController, 0x38>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::FocusController);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::FocusController*, "UnityEngine.UIElements", "FocusController");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__FocusController__FocusedElement, "UnityEngine.UIElements", "FocusController/FocusedElement");
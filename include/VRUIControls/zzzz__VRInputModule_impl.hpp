#pragma once
#include "UnityEngine/EventSystems/zzzz__BaseInputModule_impl.hpp"
#include "VRUIControls/zzzz__VRInputModule_def.hpp"
#include "UnityEngine/EventSystems/zzzz__RaycastResult_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "UnityEngine/zzzz__Component_def.hpp"
#include "GlobalNamespace/zzzz__HapticFeedbackManager_def.hpp"
#include "System/zzzz__Comparison_1_def.hpp"
#include "VRUIControls/zzzz__VRPointer_def.hpp"
#include "VRUIControls/zzzz__MouseState_def.hpp"
#include "UnityEngine/EventSystems/zzzz__PointerEventData_def.hpp"
#include "Libraries/HM/HMLib/VR/zzzz__HapticPresetSO_def.hpp"
#include "VRUIControls/zzzz__MouseButtonEventData_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/EventSystems/zzzz__BaseEventData_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::VRUIControls::VRInputModule.add_onProcessMousePressEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VRUIControls::VRInputModule::*)(::System::Action_1<::UnityEngine::GameObject*>*)>(
    &::VRUIControls::VRInputModule::add_onProcessMousePressEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2eb5fe8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::VRInputModule*>::get(), "add_onProcessMousePressEvent", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::GameObject*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VRUIControls::VRInputModule.remove_onProcessMousePressEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VRUIControls::VRInputModule::*)(::System::Action_1<::UnityEngine::GameObject*>*)>(
    &::VRUIControls::VRInputModule::remove_onProcessMousePressEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2eb6098;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::VRInputModule*>::get(), "remove_onProcessMousePressEvent", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::GameObject*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VRUIControls::VRInputModule.OnDisable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VRUIControls::VRInputModule::*)()>(&::VRUIControls::VRInputModule::OnDisable)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2eb6148;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::VRInputModule*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::VRInputModule*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VRUIControls::VRInputModule.GetPointerData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::VRUIControls::VRInputModule::*)(int32_t, ByRef<::UnityEngine::EventSystems::PointerEventData*>, bool)>(
    &::VRUIControls::VRInputModule::GetPointerData)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x2eb636c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::VRInputModule*>::get(), "GetPointerData", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::EventSystems::PointerEventData*>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VRUIControls::VRInputModule.GetMousePointerEventData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VRUIControls::MouseState* (::VRUIControls::VRInputModule::*)(int32_t)>(
    &::VRUIControls::VRInputModule::GetMousePointerEventData)> {
  constexpr static std::size_t size = 0x39c;
  constexpr static std::size_t addrs = 0x2eb6458;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::VRInputModule*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::VRInputModule*>::get(), 27));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VRUIControls::VRInputModule.GetLastPointerEventData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::EventSystems::PointerEventData* (::VRUIControls::VRInputModule::*)(int32_t)>(
    &::VRUIControls::VRInputModule::GetLastPointerEventData)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2eb67f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::VRInputModule*>::get(), "GetLastPointerEventData", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VRUIControls::VRInputModule.ShouldStartDrag
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::VRUIControls::VRInputModule::*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, float_t, bool)>(
    &::VRUIControls::VRInputModule::ShouldStartDrag)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2eb6814;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::VRInputModule*>::get(), "ShouldStartDrag", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VRUIControls::VRInputModule.ProcessMove
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VRUIControls::VRInputModule::*)(::UnityEngine::EventSystems::PointerEventData*)>(
    &::VRUIControls::VRInputModule::ProcessMove)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2eb6844;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::VRInputModule*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::VRInputModule*>::get(), 28));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VRUIControls::VRInputModule.ProcessDrag
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VRUIControls::VRInputModule::*)(::UnityEngine::EventSystems::PointerEventData*)>(
    &::VRUIControls::VRInputModule::ProcessDrag)> {
  constexpr static std::size_t size = 0x2c4;
  constexpr static std::size_t addrs = 0x2eb7154;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::VRInputModule*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::VRInputModule*>::get(), 29));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VRUIControls::VRInputModule.IsPointerOverGameObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::VRUIControls::VRInputModule::*)(int32_t)>(&::VRUIControls::VRInputModule::IsPointerOverGameObject)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2eb7418;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::VRInputModule*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::VRInputModule*>::get(), 20));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VRUIControls::VRInputModule.ClearSelection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VRUIControls::VRInputModule::*)()>(&::VRUIControls::VRInputModule::ClearSelection)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0x2eb6164;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::VRInputModule*>::get(), "ClearSelection",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VRUIControls::VRInputModule.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::VRUIControls::VRInputModule::*)()>(&::VRUIControls::VRInputModule::ToString)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x2eb74b4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::VRInputModule*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::VRInputModule*>::get(), 3));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VRUIControls::VRInputModule.DeselectIfSelectionChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VRUIControls::VRInputModule::*)(::UnityEngine::GameObject*, ::UnityEngine::EventSystems::BaseEventData*)>(
    &::VRUIControls::VRInputModule::DeselectIfSelectionChanged)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x2eb7724;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::VRInputModule*>::get(), "DeselectIfSelectionChanged", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::BaseEventData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VRUIControls::VRInputModule.Process
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VRUIControls::VRInputModule::*)()>(&::VRUIControls::VRInputModule::Process)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x2eb7814;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::VRInputModule*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::VRInputModule*>::get(), 17));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VRUIControls::VRInputModule.SendUpdateEventToSelectedObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::VRUIControls::VRInputModule::*)()>(&::VRUIControls::VRInputModule::SendUpdateEventToSelectedObject)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x2eb8198;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::VRInputModule*>::get(),
                                                                               "SendUpdateEventToSelectedObject", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VRUIControls::VRInputModule.ProcessMousePress
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VRUIControls::VRInputModule::*)(::VRUIControls::MouseButtonEventData*)>(
    &::VRUIControls::VRInputModule::ProcessMousePress)> {
  constexpr static std::size_t size = 0x720;
  constexpr static std::size_t addrs = 0x2eb7a10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::VRInputModule*>::get(), "ProcessMousePress", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VRUIControls::MouseButtonEventData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VRUIControls::VRInputModule.HandlePointerExitAndEnter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VRUIControls::VRInputModule::*)(::UnityEngine::EventSystems::PointerEventData*, ::UnityEngine::GameObject*)>(
    &::VRUIControls::VRInputModule::HandlePointerExitAndEnter)> {
  constexpr static std::size_t size = 0x8f8;
  constexpr static std::size_t addrs = 0x2eb685c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::VRInputModule*>::get(), "HandlePointerExitAndEnter", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::PointerEventData*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VRUIControls::VRInputModule.RaycastComparer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::UnityEngine::EventSystems::RaycastResult, ::UnityEngine::EventSystems::RaycastResult)>(
    &::VRUIControls::VRInputModule::RaycastComparer)> {
  constexpr static std::size_t size = 0x3e4;
  constexpr static std::size_t addrs = 0x2eb82e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::VRInputModule*>::get(), "RaycastComparer", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::RaycastResult>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::RaycastResult>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VRUIControls::VRInputModule._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VRUIControls::VRInputModule::*)()>(&::VRUIControls::VRInputModule::_ctor)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x2eb86c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::VRInputModule*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::VRUIControls::VRPointer*& VRUIControls::VRInputModule::__get__vrPointer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____vrPointer;
}
constexpr ::cordl_internals::to_const_pointer<::VRUIControls::VRPointer*> const& VRUIControls::VRInputModule::__get__vrPointer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____vrPointer;
}
constexpr void VRUIControls::VRInputModule::__set__vrPointer(::VRUIControls::VRPointer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____vrPointer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Libraries::HM::HMLib::VR::HapticPresetSO*& VRUIControls::VRInputModule::__get__rumblePreset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____rumblePreset;
}
constexpr ::cordl_internals::to_const_pointer<::Libraries::HM::HMLib::VR::HapticPresetSO*> const& VRUIControls::VRInputModule::__get__rumblePreset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____rumblePreset;
}
constexpr void VRUIControls::VRInputModule::__set__rumblePreset(::Libraries::HM::HMLib::VR::HapticPresetSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____rumblePreset)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::HapticFeedbackManager*& VRUIControls::VRInputModule::__get__hapticFeedbackManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____hapticFeedbackManager;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::HapticFeedbackManager*> const& VRUIControls::VRInputModule::__get__hapticFeedbackManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____hapticFeedbackManager;
}
constexpr void VRUIControls::VRInputModule::__set__hapticFeedbackManager(::GlobalNamespace::HapticFeedbackManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____hapticFeedbackManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::UnityEngine::GameObject*>*& VRUIControls::VRInputModule::__get_onProcessMousePressEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___onProcessMousePressEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityEngine::GameObject*>*> const& VRUIControls::VRInputModule::__get_onProcessMousePressEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___onProcessMousePressEvent;
}
constexpr void VRUIControls::VRInputModule::__set_onProcessMousePressEvent(::System::Action_1<::UnityEngine::GameObject*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___onProcessMousePressEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::EventSystems::PointerEventData*>*& VRUIControls::VRInputModule::__get__pointerData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____pointerData;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::EventSystems::PointerEventData*>*> const&
VRUIControls::VRInputModule::__get__pointerData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____pointerData;
}
constexpr void VRUIControls::VRInputModule::__set__pointerData(::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::EventSystems::PointerEventData*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____pointerData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Component*>*& VRUIControls::VRInputModule::__get__componentList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____componentList;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Component*>*> const& VRUIControls::VRInputModule::__get__componentList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____componentList;
}
constexpr void VRUIControls::VRInputModule::__set__componentList(::System::Collections::Generic::List_1<::UnityEngine::Component*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____componentList)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::VRUIControls::MouseState*& VRUIControls::VRInputModule::__get__mouseState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____mouseState;
}
constexpr ::cordl_internals::to_const_pointer<::VRUIControls::MouseState*> const& VRUIControls::VRInputModule::__get__mouseState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____mouseState;
}
constexpr void VRUIControls::VRInputModule::__set__mouseState(::VRUIControls::MouseState* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____mouseState)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void VRUIControls::VRInputModule::setStaticF__raycastComparer(::System::Comparison_1<::UnityEngine::EventSystems::RaycastResult>* value) {
  ::cordl_internals::setStaticField<::System::Comparison_1<::UnityEngine::EventSystems::RaycastResult>*, "_raycastComparer",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::VRInputModule*>::get>(
      std::forward<::System::Comparison_1<::UnityEngine::EventSystems::RaycastResult>*>(value));
}
inline ::System::Comparison_1<::UnityEngine::EventSystems::RaycastResult>* VRUIControls::VRInputModule::getStaticF__raycastComparer() {
  return ::cordl_internals::getStaticField<::System::Comparison_1<::UnityEngine::EventSystems::RaycastResult>*, "_raycastComparer",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::VRInputModule*>::get>();
}
inline void VRUIControls::VRInputModule::add_onProcessMousePressEvent(::System::Action_1<::UnityEngine::GameObject*>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::VRInputModule*>::get(), "add_onProcessMousePressEvent", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::GameObject*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void VRUIControls::VRInputModule::remove_onProcessMousePressEvent(::System::Action_1<::UnityEngine::GameObject*>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::VRInputModule*>::get(), "remove_onProcessMousePressEvent", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::GameObject*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void VRUIControls::VRInputModule::OnDisable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::VRInputModule*>::get(), "OnDisable",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool VRUIControls::VRInputModule::GetPointerData(int32_t id, ByRef<::UnityEngine::EventSystems::PointerEventData*> data, bool create) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::VRInputModule*>::get(), "GetPointerData", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::EventSystems::PointerEventData*>>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, id, data, create);
}
inline ::VRUIControls::MouseState* VRUIControls::VRInputModule::GetMousePointerEventData(int32_t id) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::VRInputModule*>::get(), "GetMousePointerEventData", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::VRUIControls::MouseState*, false>(this, ___internal_method, id);
}
inline ::UnityEngine::EventSystems::PointerEventData* VRUIControls::VRInputModule::GetLastPointerEventData(int32_t id) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::VRInputModule*>::get(), "GetLastPointerEventData", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::EventSystems::PointerEventData*, false>(this, ___internal_method, id);
}
inline bool VRUIControls::VRInputModule::ShouldStartDrag(::UnityEngine::Vector2 pressPos, ::UnityEngine::Vector2 currentPos, float_t threshold, bool useDragThreshold) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::VRInputModule*>::get(), "ShouldStartDrag", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, pressPos, currentPos, threshold, useDragThreshold);
}
inline void VRUIControls::VRInputModule::ProcessMove(::UnityEngine::EventSystems::PointerEventData* pointerEvent) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::VRInputModule*>::get(), "ProcessMove", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::PointerEventData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pointerEvent);
}
inline void VRUIControls::VRInputModule::ProcessDrag(::UnityEngine::EventSystems::PointerEventData* pointerEvent) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::VRInputModule*>::get(), "ProcessDrag", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::PointerEventData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pointerEvent);
}
inline bool VRUIControls::VRInputModule::IsPointerOverGameObject(int32_t pointerId) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::VRInputModule*>::get(), "IsPointerOverGameObject", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, pointerId);
}
inline void VRUIControls::VRInputModule::ClearSelection() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::VRInputModule*>::get(), "ClearSelection",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::StringW VRUIControls::VRInputModule::ToString() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::VRInputModule*>::get(), "ToString",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void VRUIControls::VRInputModule::DeselectIfSelectionChanged(::UnityEngine::GameObject* currentOverGo, ::UnityEngine::EventSystems::BaseEventData* pointerEvent) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::VRInputModule*>::get(), "DeselectIfSelectionChanged", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::BaseEventData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, currentOverGo, pointerEvent);
}
inline void VRUIControls::VRInputModule::Process() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::VRInputModule*>::get(), "Process",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool VRUIControls::VRInputModule::SendUpdateEventToSelectedObject() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::VRInputModule*>::get(),
                                                                             "SendUpdateEventToSelectedObject", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void VRUIControls::VRInputModule::ProcessMousePress(::VRUIControls::MouseButtonEventData* data) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::VRInputModule*>::get(), "ProcessMousePress", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::VRUIControls::MouseButtonEventData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, data);
}
inline void VRUIControls::VRInputModule::HandlePointerExitAndEnter(::UnityEngine::EventSystems::PointerEventData* currentPointerData, ::UnityEngine::GameObject* newEnterTarget) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::VRInputModule*>::get(), "HandlePointerExitAndEnter", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::PointerEventData*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, currentPointerData, newEnterTarget);
}
inline int32_t VRUIControls::VRInputModule::RaycastComparer(::UnityEngine::EventSystems::RaycastResult lhs, ::UnityEngine::EventSystems::RaycastResult rhs) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::VRInputModule*>::get(), "RaycastComparer", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::RaycastResult>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::RaycastResult>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, lhs, rhs);
}
inline ::VRUIControls::VRInputModule* VRUIControls::VRInputModule::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::VRUIControls::VRInputModule*>());
}
inline void VRUIControls::VRInputModule::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::VRInputModule*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::VRUIControls::VRInputModule::VRInputModule() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
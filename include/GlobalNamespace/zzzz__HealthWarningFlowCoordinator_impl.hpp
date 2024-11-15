#pragma once
// IWYU pragma private; include "GlobalNamespace/HealthWarningFlowCoordinator.hpp"
#include "GlobalNamespace/zzzz__SelectRegionViewController_impl.hpp"
#include "HMUI/zzzz__FlowCoordinator_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__HealthWarningFlowCoordinator_def.hpp"
#include "BeatSaber/Init/zzzz__IPlatformInit_def.hpp"
#include "GlobalNamespace/zzzz__AppInitScenesTransitionSetupDataContainerSO_def.hpp"
#include "GlobalNamespace/zzzz__EndOfLifeNoticeViewController_def.hpp"
#include "GlobalNamespace/zzzz__EulaViewController_def.hpp"
#include "GlobalNamespace/zzzz__ExplicitContentWarningViewController_def.hpp"
#include "GlobalNamespace/zzzz__FadeInOutController_def.hpp"
#include "GlobalNamespace/zzzz__GameScenesManager_def.hpp"
#include "GlobalNamespace/zzzz__HealthWarningFlowCoordinator_def.hpp"
#include "GlobalNamespace/zzzz__HealthWarningViewController_def.hpp"
#include "GlobalNamespace/zzzz__IFileStorage_def.hpp"
#include "GlobalNamespace/zzzz__NoUserAgeWarningViewController_def.hpp"
#include "GlobalNamespace/zzzz__PlayerDataModel_def.hpp"
#include "GlobalNamespace/zzzz__PrivacyPolicyViewController_def.hpp"
#include "GlobalNamespace/zzzz__ScenesTransitionSetupDataSO_def.hpp"
#include "GlobalNamespace/zzzz__SelectLanguageViewController_def.hpp"
#include "GlobalNamespace/zzzz__SelectRegionViewController_def.hpp"
#include "GlobalNamespace/zzzz__SettingsManager_def.hpp"
#include "HMUI/zzzz__ViewController_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__HealthWarningFlowCoordinator__InitData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__HealthWarningFlowCoordinator__InitData::*)(
    ::GlobalNamespace::ScenesTransitionSetupDataSO*)>(&::GlobalNamespace::__HealthWarningFlowCoordinator__InitData::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x3ba1108;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__HealthWarningFlowCoordinator__InitData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ScenesTransitionSetupDataSO*>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO>& GlobalNamespace::__HealthWarningFlowCoordinator__InitData::__cordl_internal_get_nextScenesTransitionSetupData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nextScenesTransitionSetupData;
}
constexpr ::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO> const& GlobalNamespace::__HealthWarningFlowCoordinator__InitData::__cordl_internal_get_nextScenesTransitionSetupData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nextScenesTransitionSetupData;
}
constexpr void GlobalNamespace::__HealthWarningFlowCoordinator__InitData::__cordl_internal_set_nextScenesTransitionSetupData(::UnityW<::GlobalNamespace::ScenesTransitionSetupDataSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___nextScenesTransitionSetupData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__HealthWarningFlowCoordinator__InitData*
GlobalNamespace::__HealthWarningFlowCoordinator__InitData::New_ctor(::GlobalNamespace::ScenesTransitionSetupDataSO* nextScenesTransitionSetupData) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__HealthWarningFlowCoordinator__InitData*>(nextScenesTransitionSetupData));
}
inline void GlobalNamespace::__HealthWarningFlowCoordinator__InitData::_ctor(::GlobalNamespace::ScenesTransitionSetupDataSO* nextScenesTransitionSetupData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__HealthWarningFlowCoordinator__InitData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ScenesTransitionSetupDataSO*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, nextScenesTransitionSetupData);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__HealthWarningFlowCoordinator__InitData::__HealthWarningFlowCoordinator__InitData() {}
//  Writing Method size for method: ::GlobalNamespace::__HealthWarningFlowCoordinator___HandleSelectLanguageViewControllerDidChangeLanguageAsync_d__22.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::GlobalNamespace::__HealthWarningFlowCoordinator___HandleSelectLanguageViewControllerDidChangeLanguageAsync_d__22::*)()>(
        &::GlobalNamespace::__HealthWarningFlowCoordinator___HandleSelectLanguageViewControllerDidChangeLanguageAsync_d__22::MoveNext)> {
  constexpr static std::size_t size = 0x30c;
  constexpr static std::size_t addrs = 0x3ba1130;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__HealthWarningFlowCoordinator___HandleSelectLanguageViewControllerDidChangeLanguageAsync_d__22>::get(), "MoveNext",
        std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__HealthWarningFlowCoordinator___HandleSelectLanguageViewControllerDidChangeLanguageAsync_d__22.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::GlobalNamespace::__HealthWarningFlowCoordinator___HandleSelectLanguageViewControllerDidChangeLanguageAsync_d__22::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
        &::GlobalNamespace::__HealthWarningFlowCoordinator___HandleSelectLanguageViewControllerDidChangeLanguageAsync_d__22::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3ba143c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__HealthWarningFlowCoordinator___HandleSelectLanguageViewControllerDidChangeLanguageAsync_d__22>::get(),
        "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::__HealthWarningFlowCoordinator___HandleSelectLanguageViewControllerDidChangeLanguageAsync_d__22::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
GlobalNamespace::__HealthWarningFlowCoordinator___HandleSelectLanguageViewControllerDidChangeLanguageAsync_d__22::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
inline void GlobalNamespace::__HealthWarningFlowCoordinator___HandleSelectLanguageViewControllerDidChangeLanguageAsync_d__22::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__HealthWarningFlowCoordinator___HandleSelectLanguageViewControllerDidChangeLanguageAsync_d__22>::get(), "MoveNext",
      std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__HealthWarningFlowCoordinator___HandleSelectLanguageViewControllerDidChangeLanguageAsync_d__22::SetStateMachine(
    ::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__HealthWarningFlowCoordinator___HandleSelectLanguageViewControllerDidChangeLanguageAsync_d__22>::get(),
      "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::HealthWarningFlowCoordinator>",
// modifiers: "", def_value: Some("nullptr") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__HealthWarningFlowCoordinator___HandleSelectLanguageViewControllerDidChangeLanguageAsync_d__22::
    __HealthWarningFlowCoordinator___HandleSelectLanguageViewControllerDidChangeLanguageAsync_d__22(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder,
                                                                                                    ::UnityW<::GlobalNamespace::HealthWarningFlowCoordinator> __4__this,
                                                                                                    ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__HealthWarningFlowCoordinator___HandleSelectLanguageViewControllerDidChangeLanguageAsync_d__22::
    __HealthWarningFlowCoordinator___HandleSelectLanguageViewControllerDidChangeLanguageAsync_d__22() {}
//  Writing Method size for method: ::GlobalNamespace::__HealthWarningFlowCoordinator___WaitForUserAgeCategory_d__30.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__HealthWarningFlowCoordinator___WaitForUserAgeCategory_d__30::*)()>(
    &::GlobalNamespace::__HealthWarningFlowCoordinator___WaitForUserAgeCategory_d__30::MoveNext)> {
  constexpr static std::size_t size = 0x2f8;
  constexpr static std::size_t addrs = 0x3ba1448;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__HealthWarningFlowCoordinator___WaitForUserAgeCategory_d__30>::get(),
                                                 "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__HealthWarningFlowCoordinator___WaitForUserAgeCategory_d__30.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__HealthWarningFlowCoordinator___WaitForUserAgeCategory_d__30::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::__HealthWarningFlowCoordinator___WaitForUserAgeCategory_d__30::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3ba1740;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__HealthWarningFlowCoordinator___WaitForUserAgeCategory_d__30>::get(), "SetStateMachine",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::__HealthWarningFlowCoordinator___WaitForUserAgeCategory_d__30::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
GlobalNamespace::__HealthWarningFlowCoordinator___WaitForUserAgeCategory_d__30::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
inline void GlobalNamespace::__HealthWarningFlowCoordinator___WaitForUserAgeCategory_d__30::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__HealthWarningFlowCoordinator___WaitForUserAgeCategory_d__30>::get(),
                                               "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__HealthWarningFlowCoordinator___WaitForUserAgeCategory_d__30::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__HealthWarningFlowCoordinator___WaitForUserAgeCategory_d__30>::get(), "SetStateMachine",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::UnityW<::GlobalNamespace::HealthWarningFlowCoordinator>",
// modifiers: "", def_value: Some("nullptr") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__HealthWarningFlowCoordinator___WaitForUserAgeCategory_d__30::__HealthWarningFlowCoordinator___WaitForUserAgeCategory_d__30(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, ::UnityW<::GlobalNamespace::HealthWarningFlowCoordinator> __4__this,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__HealthWarningFlowCoordinator___WaitForUserAgeCategory_d__30::__HealthWarningFlowCoordinator___WaitForUserAgeCategory_d__30() {}
//  Writing Method size for method: ::GlobalNamespace::HealthWarningFlowCoordinator.DidActivate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::HealthWarningFlowCoordinator::*)(bool, bool, bool)>(
    &::GlobalNamespace::HealthWarningFlowCoordinator::DidActivate)> {
  constexpr static std::size_t size = 0x598;
  constexpr static std::size_t addrs = 0x3ba0138;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HealthWarningFlowCoordinator*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HealthWarningFlowCoordinator*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HealthWarningFlowCoordinator.DidDeactivate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::HealthWarningFlowCoordinator::*)(bool, bool)>(
    &::GlobalNamespace::HealthWarningFlowCoordinator::DidDeactivate)> {
  constexpr static std::size_t size = 0x310;
  constexpr static std::size_t addrs = 0x3ba0720;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HealthWarningFlowCoordinator*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HealthWarningFlowCoordinator*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HealthWarningFlowCoordinator.TopViewControllerWillChange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::HealthWarningFlowCoordinator::*)(
    ::HMUI::ViewController*, ::HMUI::ViewController*, ::HMUI::__ViewController__AnimationType)>(&::GlobalNamespace::HealthWarningFlowCoordinator::TopViewControllerWillChange)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x3ba0a30;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HealthWarningFlowCoordinator*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HealthWarningFlowCoordinator*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HealthWarningFlowCoordinator.HandleSelectLanguageViewControllerDidChangeLanguageAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::HealthWarningFlowCoordinator::*)()>(
    &::GlobalNamespace::HealthWarningFlowCoordinator::HandleSelectLanguageViewControllerDidChangeLanguageAsync)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x3ba0ab4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HealthWarningFlowCoordinator*>::get(),
                                                 "HandleSelectLanguageViewControllerDidChangeLanguageAsync", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HealthWarningFlowCoordinator.HandleSelectLanguageViewControllerDidPressContinueButton
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::HealthWarningFlowCoordinator::*)()>(
    &::GlobalNamespace::HealthWarningFlowCoordinator::HandleSelectLanguageViewControllerDidPressContinueButton)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x3ba0b44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HealthWarningFlowCoordinator*>::get(),
                                                 "HandleSelectLanguageViewControllerDidPressContinueButton", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HealthWarningFlowCoordinator.HandleSelectRegionViewControllerDidPressContinueButton
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::HealthWarningFlowCoordinator::*)(::GlobalNamespace::__SelectRegionViewController__Region)>(
    &::GlobalNamespace::HealthWarningFlowCoordinator::HandleSelectRegionViewControllerDidPressContinueButton)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x3ba0b90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HealthWarningFlowCoordinator*>::get(),
                                    "HandleSelectRegionViewControllerDidPressContinueButton", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__SelectRegionViewController__Region>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HealthWarningFlowCoordinator.HandleEulaViewControllerDidFinish
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::HealthWarningFlowCoordinator::*)(::GlobalNamespace::__EulaViewController__ButtonType)>(
    &::GlobalNamespace::HealthWarningFlowCoordinator::HandleEulaViewControllerDidFinish)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x3ba0cb4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HealthWarningFlowCoordinator*>::get(), "HandleEulaViewControllerDidFinish", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__EulaViewController__ButtonType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HealthWarningFlowCoordinator.HandlePrivacyPolicyViewControllerDidFinish
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::HealthWarningFlowCoordinator::*)()>(
    &::GlobalNamespace::HealthWarningFlowCoordinator::HandlePrivacyPolicyViewControllerDidFinish)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x3ba0d78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HealthWarningFlowCoordinator*>::get(),
                                                 "HandlePrivacyPolicyViewControllerDidFinish", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HealthWarningFlowCoordinator.HandleHealthWarningViewControllerDidFinish
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::HealthWarningFlowCoordinator::*)()>(
    &::GlobalNamespace::HealthWarningFlowCoordinator::HandleHealthWarningViewControllerDidFinish)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x3ba0dcc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HealthWarningFlowCoordinator*>::get(),
                                                 "HandleHealthWarningViewControllerDidFinish", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HealthWarningFlowCoordinator.HandleEndOfLifeNoticeViewControllerDidFinish
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::HealthWarningFlowCoordinator::*)()>(
    &::GlobalNamespace::HealthWarningFlowCoordinator::HandleEndOfLifeNoticeViewControllerDidFinish)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x3ba0e98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HealthWarningFlowCoordinator*>::get(),
                                                 "HandleEndOfLifeNoticeViewControllerDidFinish", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HealthWarningFlowCoordinator.EndOfLifeNoticeContinueFlow
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::HealthWarningFlowCoordinator::*)()>(
    &::GlobalNamespace::HealthWarningFlowCoordinator::EndOfLifeNoticeContinueFlow)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x3ba0e60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HealthWarningFlowCoordinator*>::get(),
                                                                               "EndOfLifeNoticeContinueFlow", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HealthWarningFlowCoordinator.WaitForUserAgeCategory
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::HealthWarningFlowCoordinator::*)()>(
    &::GlobalNamespace::HealthWarningFlowCoordinator::WaitForUserAgeCategory)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x3ba0ef4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HealthWarningFlowCoordinator*>::get(),
                                                                               "WaitForUserAgeCategory", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HealthWarningFlowCoordinator.HandleUserAgeCategoryArrived
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::HealthWarningFlowCoordinator::*)()>(
    &::GlobalNamespace::HealthWarningFlowCoordinator::HandleUserAgeCategoryArrived)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x3ba1024;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HealthWarningFlowCoordinator*>::get(),
                                                                               "HandleUserAgeCategoryArrived", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HealthWarningFlowCoordinator.CheckPlayerSensitivityFlagAndContinueFlow
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::HealthWarningFlowCoordinator::*)()>(
    &::GlobalNamespace::HealthWarningFlowCoordinator::CheckPlayerSensitivityFlagAndContinueFlow)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x3ba0f84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HealthWarningFlowCoordinator*>::get(),
                                                 "CheckPlayerSensitivityFlagAndContinueFlow", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HealthWarningFlowCoordinator.HandleNoUserAgeWarningViewControllerDidFinish
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::HealthWarningFlowCoordinator::*)()>(
    &::GlobalNamespace::HealthWarningFlowCoordinator::HandleNoUserAgeWarningViewControllerDidFinish)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3ba10a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HealthWarningFlowCoordinator*>::get(),
                                                 "HandleNoUserAgeWarningViewControllerDidFinish", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HealthWarningFlowCoordinator.HandleExplicitContentWarningViewControllerDidFinish
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::HealthWarningFlowCoordinator::*)()>(
    &::GlobalNamespace::HealthWarningFlowCoordinator::HandleExplicitContentWarningViewControllerDidFinish)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x3ba10a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HealthWarningFlowCoordinator*>::get(),
                                                 "HandleExplicitContentWarningViewControllerDidFinish", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HealthWarningFlowCoordinator.ResolveMainViewController
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::HMUI::ViewController> (::GlobalNamespace::HealthWarningFlowCoordinator::*)()>(
    &::GlobalNamespace::HealthWarningFlowCoordinator::ResolveMainViewController)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x3ba06d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HealthWarningFlowCoordinator*>::get(),
                                                                               "ResolveMainViewController", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HealthWarningFlowCoordinator.ResolvePlayerAgreementsViewController
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::HMUI::ViewController> (::GlobalNamespace::HealthWarningFlowCoordinator::*)()>(
    &::GlobalNamespace::HealthWarningFlowCoordinator::ResolvePlayerAgreementsViewController)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x3ba0bc0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HealthWarningFlowCoordinator*>::get(),
                                                 "ResolvePlayerAgreementsViewController", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HealthWarningFlowCoordinator.GoToNextScene
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::HealthWarningFlowCoordinator::*)()>(
    &::GlobalNamespace::HealthWarningFlowCoordinator::GoToNextScene)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x3ba1068;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HealthWarningFlowCoordinator*>::get(),
                                                                               "GoToNextScene", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HealthWarningFlowCoordinator._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::HealthWarningFlowCoordinator::*)()>(
    &::GlobalNamespace::HealthWarningFlowCoordinator::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3ba1100;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HealthWarningFlowCoordinator*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::AppInitScenesTransitionSetupDataContainerSO>& GlobalNamespace::HealthWarningFlowCoordinator::__cordl_internal_get__appInitScenesTransitionSetupDataContainer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____appInitScenesTransitionSetupDataContainer;
}
constexpr ::UnityW<::GlobalNamespace::AppInitScenesTransitionSetupDataContainerSO> const&
GlobalNamespace::HealthWarningFlowCoordinator::__cordl_internal_get__appInitScenesTransitionSetupDataContainer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____appInitScenesTransitionSetupDataContainer;
}
constexpr void
GlobalNamespace::HealthWarningFlowCoordinator::__cordl_internal_set__appInitScenesTransitionSetupDataContainer(::UnityW<::GlobalNamespace::AppInitScenesTransitionSetupDataContainerSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____appInitScenesTransitionSetupDataContainer)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::SelectLanguageViewController>& GlobalNamespace::HealthWarningFlowCoordinator::__cordl_internal_get__selectLanguageViewController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selectLanguageViewController;
}
constexpr ::UnityW<::GlobalNamespace::SelectLanguageViewController> const& GlobalNamespace::HealthWarningFlowCoordinator::__cordl_internal_get__selectLanguageViewController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selectLanguageViewController;
}
constexpr void GlobalNamespace::HealthWarningFlowCoordinator::__cordl_internal_set__selectLanguageViewController(::UnityW<::GlobalNamespace::SelectLanguageViewController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____selectLanguageViewController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::SelectRegionViewController>& GlobalNamespace::HealthWarningFlowCoordinator::__cordl_internal_get__selectRegionViewController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selectRegionViewController;
}
constexpr ::UnityW<::GlobalNamespace::SelectRegionViewController> const& GlobalNamespace::HealthWarningFlowCoordinator::__cordl_internal_get__selectRegionViewController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selectRegionViewController;
}
constexpr void GlobalNamespace::HealthWarningFlowCoordinator::__cordl_internal_set__selectRegionViewController(::UnityW<::GlobalNamespace::SelectRegionViewController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____selectRegionViewController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::EulaViewController>& GlobalNamespace::HealthWarningFlowCoordinator::__cordl_internal_get__eulaViewController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____eulaViewController;
}
constexpr ::UnityW<::GlobalNamespace::EulaViewController> const& GlobalNamespace::HealthWarningFlowCoordinator::__cordl_internal_get__eulaViewController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____eulaViewController;
}
constexpr void GlobalNamespace::HealthWarningFlowCoordinator::__cordl_internal_set__eulaViewController(::UnityW<::GlobalNamespace::EulaViewController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____eulaViewController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::PrivacyPolicyViewController>& GlobalNamespace::HealthWarningFlowCoordinator::__cordl_internal_get__privacyPolicyViewController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____privacyPolicyViewController;
}
constexpr ::UnityW<::GlobalNamespace::PrivacyPolicyViewController> const& GlobalNamespace::HealthWarningFlowCoordinator::__cordl_internal_get__privacyPolicyViewController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____privacyPolicyViewController;
}
constexpr void GlobalNamespace::HealthWarningFlowCoordinator::__cordl_internal_set__privacyPolicyViewController(::UnityW<::GlobalNamespace::PrivacyPolicyViewController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____privacyPolicyViewController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::HealthWarningViewController>& GlobalNamespace::HealthWarningFlowCoordinator::__cordl_internal_get__healthWarningViewController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____healthWarningViewController;
}
constexpr ::UnityW<::GlobalNamespace::HealthWarningViewController> const& GlobalNamespace::HealthWarningFlowCoordinator::__cordl_internal_get__healthWarningViewController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____healthWarningViewController;
}
constexpr void GlobalNamespace::HealthWarningFlowCoordinator::__cordl_internal_set__healthWarningViewController(::UnityW<::GlobalNamespace::HealthWarningViewController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____healthWarningViewController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::ExplicitContentWarningViewController>& GlobalNamespace::HealthWarningFlowCoordinator::__cordl_internal_get__explicitContentWarningViewController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____explicitContentWarningViewController;
}
constexpr ::UnityW<::GlobalNamespace::ExplicitContentWarningViewController> const& GlobalNamespace::HealthWarningFlowCoordinator::__cordl_internal_get__explicitContentWarningViewController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____explicitContentWarningViewController;
}
constexpr void GlobalNamespace::HealthWarningFlowCoordinator::__cordl_internal_set__explicitContentWarningViewController(::UnityW<::GlobalNamespace::ExplicitContentWarningViewController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____explicitContentWarningViewController)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::NoUserAgeWarningViewController>& GlobalNamespace::HealthWarningFlowCoordinator::__cordl_internal_get__noUserAgeWarningViewController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noUserAgeWarningViewController;
}
constexpr ::UnityW<::GlobalNamespace::NoUserAgeWarningViewController> const& GlobalNamespace::HealthWarningFlowCoordinator::__cordl_internal_get__noUserAgeWarningViewController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noUserAgeWarningViewController;
}
constexpr void GlobalNamespace::HealthWarningFlowCoordinator::__cordl_internal_set__noUserAgeWarningViewController(::UnityW<::GlobalNamespace::NoUserAgeWarningViewController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____noUserAgeWarningViewController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::EndOfLifeNoticeViewController>& GlobalNamespace::HealthWarningFlowCoordinator::__cordl_internal_get__endOfLifeNoticeViewController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____endOfLifeNoticeViewController;
}
constexpr ::UnityW<::GlobalNamespace::EndOfLifeNoticeViewController> const& GlobalNamespace::HealthWarningFlowCoordinator::__cordl_internal_get__endOfLifeNoticeViewController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____endOfLifeNoticeViewController;
}
constexpr void GlobalNamespace::HealthWarningFlowCoordinator::__cordl_internal_set__endOfLifeNoticeViewController(::UnityW<::GlobalNamespace::EndOfLifeNoticeViewController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____endOfLifeNoticeViewController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::PlayerDataModel>& GlobalNamespace::HealthWarningFlowCoordinator::__cordl_internal_get__playerDataModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerDataModel;
}
constexpr ::UnityW<::GlobalNamespace::PlayerDataModel> const& GlobalNamespace::HealthWarningFlowCoordinator::__cordl_internal_get__playerDataModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerDataModel;
}
constexpr void GlobalNamespace::HealthWarningFlowCoordinator::__cordl_internal_set__playerDataModel(::UnityW<::GlobalNamespace::PlayerDataModel> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____playerDataModel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::FadeInOutController>& GlobalNamespace::HealthWarningFlowCoordinator::__cordl_internal_get__fadeInOut() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fadeInOut;
}
constexpr ::UnityW<::GlobalNamespace::FadeInOutController> const& GlobalNamespace::HealthWarningFlowCoordinator::__cordl_internal_get__fadeInOut() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fadeInOut;
}
constexpr void GlobalNamespace::HealthWarningFlowCoordinator::__cordl_internal_set__fadeInOut(::UnityW<::GlobalNamespace::FadeInOutController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____fadeInOut)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::GameScenesManager>& GlobalNamespace::HealthWarningFlowCoordinator::__cordl_internal_get__gameScenesManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameScenesManager;
}
constexpr ::UnityW<::GlobalNamespace::GameScenesManager> const& GlobalNamespace::HealthWarningFlowCoordinator::__cordl_internal_get__gameScenesManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameScenesManager;
}
constexpr void GlobalNamespace::HealthWarningFlowCoordinator::__cordl_internal_set__gameScenesManager(::UnityW<::GlobalNamespace::GameScenesManager> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____gameScenesManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__HealthWarningFlowCoordinator__InitData*& GlobalNamespace::HealthWarningFlowCoordinator::__cordl_internal_get__initData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initData;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__HealthWarningFlowCoordinator__InitData*> const&
GlobalNamespace::HealthWarningFlowCoordinator::__cordl_internal_get__initData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initData;
}
constexpr void GlobalNamespace::HealthWarningFlowCoordinator::__cordl_internal_set__initData(::GlobalNamespace::__HealthWarningFlowCoordinator__InitData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____initData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::IFileStorage*& GlobalNamespace::HealthWarningFlowCoordinator::__cordl_internal_get__fileStorage() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fileStorage;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IFileStorage*> const& GlobalNamespace::HealthWarningFlowCoordinator::__cordl_internal_get__fileStorage() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fileStorage;
}
constexpr void GlobalNamespace::HealthWarningFlowCoordinator::__cordl_internal_set__fileStorage(::GlobalNamespace::IFileStorage* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____fileStorage)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::SettingsManager*& GlobalNamespace::HealthWarningFlowCoordinator::__cordl_internal_get__settingsManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____settingsManager;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SettingsManager*> const& GlobalNamespace::HealthWarningFlowCoordinator::__cordl_internal_get__settingsManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____settingsManager;
}
constexpr void GlobalNamespace::HealthWarningFlowCoordinator::__cordl_internal_set__settingsManager(::GlobalNamespace::SettingsManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____settingsManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::BeatSaber::Init::IPlatformInit*& GlobalNamespace::HealthWarningFlowCoordinator::__cordl_internal_get__platformInit() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____platformInit;
}
constexpr ::cordl_internals::to_const_pointer<::BeatSaber::Init::IPlatformInit*> const& GlobalNamespace::HealthWarningFlowCoordinator::__cordl_internal_get__platformInit() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____platformInit;
}
constexpr void GlobalNamespace::HealthWarningFlowCoordinator::__cordl_internal_set__platformInit(::BeatSaber::Init::IPlatformInit* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____platformInit)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::HMUI::ViewController>, ::StringW>*& GlobalNamespace::HealthWarningFlowCoordinator::__cordl_internal_get__viewControllerTitles() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____viewControllerTitles;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::UnityW<::HMUI::ViewController>, ::StringW>*> const&
GlobalNamespace::HealthWarningFlowCoordinator::__cordl_internal_get__viewControllerTitles() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____viewControllerTitles;
}
constexpr void
GlobalNamespace::HealthWarningFlowCoordinator::__cordl_internal_set__viewControllerTitles(::System::Collections::Generic::Dictionary_2<::UnityW<::HMUI::ViewController>, ::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____viewControllerTitles)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__SelectRegionViewController__Region& GlobalNamespace::HealthWarningFlowCoordinator::__cordl_internal_get__selectedRegion() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selectedRegion;
}
constexpr ::GlobalNamespace::__SelectRegionViewController__Region const& GlobalNamespace::HealthWarningFlowCoordinator::__cordl_internal_get__selectedRegion() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selectedRegion;
}
constexpr void GlobalNamespace::HealthWarningFlowCoordinator::__cordl_internal_set__selectedRegion(::GlobalNamespace::__SelectRegionViewController__Region value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____selectedRegion = value;
}
inline void GlobalNamespace::HealthWarningFlowCoordinator::DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HealthWarningFlowCoordinator*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, firstActivation, addedToHierarchy, screenSystemEnabling);
}
inline void GlobalNamespace::HealthWarningFlowCoordinator::DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HealthWarningFlowCoordinator*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, removedFromHierarchy, screenSystemDisabling);
}
inline void GlobalNamespace::HealthWarningFlowCoordinator::TopViewControllerWillChange(::HMUI::ViewController* oldViewController, ::HMUI::ViewController* newViewController,
                                                                                       ::HMUI::__ViewController__AnimationType animationType) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HealthWarningFlowCoordinator*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, oldViewController, newViewController, animationType);
}
inline void GlobalNamespace::HealthWarningFlowCoordinator::HandleSelectLanguageViewControllerDidChangeLanguageAsync() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HealthWarningFlowCoordinator*>::get(),
                                               "HandleSelectLanguageViewControllerDidChangeLanguageAsync", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::HealthWarningFlowCoordinator::HandleSelectLanguageViewControllerDidPressContinueButton() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HealthWarningFlowCoordinator*>::get(),
                                               "HandleSelectLanguageViewControllerDidPressContinueButton", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::HealthWarningFlowCoordinator::HandleSelectRegionViewControllerDidPressContinueButton(::GlobalNamespace::__SelectRegionViewController__Region region) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HealthWarningFlowCoordinator*>::get(),
                                  "HandleSelectRegionViewControllerDidPressContinueButton", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__SelectRegionViewController__Region>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, region);
}
inline void GlobalNamespace::HealthWarningFlowCoordinator::HandleEulaViewControllerDidFinish(::GlobalNamespace::__EulaViewController__ButtonType buttonType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HealthWarningFlowCoordinator*>::get(), "HandleEulaViewControllerDidFinish", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__EulaViewController__ButtonType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, buttonType);
}
inline void GlobalNamespace::HealthWarningFlowCoordinator::HandlePrivacyPolicyViewControllerDidFinish() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HealthWarningFlowCoordinator*>::get(),
                                               "HandlePrivacyPolicyViewControllerDidFinish", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::HealthWarningFlowCoordinator::HandleHealthWarningViewControllerDidFinish() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HealthWarningFlowCoordinator*>::get(),
                                               "HandleHealthWarningViewControllerDidFinish", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::HealthWarningFlowCoordinator::HandleEndOfLifeNoticeViewControllerDidFinish() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HealthWarningFlowCoordinator*>::get(),
                                               "HandleEndOfLifeNoticeViewControllerDidFinish", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::HealthWarningFlowCoordinator::EndOfLifeNoticeContinueFlow() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HealthWarningFlowCoordinator*>::get(),
                                                                             "EndOfLifeNoticeContinueFlow", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::HealthWarningFlowCoordinator::WaitForUserAgeCategory() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HealthWarningFlowCoordinator*>::get(),
                                                                             "WaitForUserAgeCategory", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::HealthWarningFlowCoordinator::HandleUserAgeCategoryArrived() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HealthWarningFlowCoordinator*>::get(),
                                                                             "HandleUserAgeCategoryArrived", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::HealthWarningFlowCoordinator::CheckPlayerSensitivityFlagAndContinueFlow() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HealthWarningFlowCoordinator*>::get(),
                                               "CheckPlayerSensitivityFlagAndContinueFlow", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::HealthWarningFlowCoordinator::HandleNoUserAgeWarningViewControllerDidFinish() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HealthWarningFlowCoordinator*>::get(),
                                               "HandleNoUserAgeWarningViewControllerDidFinish", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::HealthWarningFlowCoordinator::HandleExplicitContentWarningViewControllerDidFinish() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HealthWarningFlowCoordinator*>::get(),
                                               "HandleExplicitContentWarningViewControllerDidFinish", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityW<::HMUI::ViewController> GlobalNamespace::HealthWarningFlowCoordinator::ResolveMainViewController() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HealthWarningFlowCoordinator*>::get(),
                                                                             "ResolveMainViewController", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::HMUI::ViewController>, false>(this, ___internal_method);
}
inline ::UnityW<::HMUI::ViewController> GlobalNamespace::HealthWarningFlowCoordinator::ResolvePlayerAgreementsViewController() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HealthWarningFlowCoordinator*>::get(), "ResolvePlayerAgreementsViewController",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::HMUI::ViewController>, false>(this, ___internal_method);
}
inline void GlobalNamespace::HealthWarningFlowCoordinator::GoToNextScene() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HealthWarningFlowCoordinator*>::get(),
                                                                             "GoToNextScene", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::HealthWarningFlowCoordinator* GlobalNamespace::HealthWarningFlowCoordinator::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::HealthWarningFlowCoordinator*>());
}
inline void GlobalNamespace::HealthWarningFlowCoordinator::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HealthWarningFlowCoordinator*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::HealthWarningFlowCoordinator::HealthWarningFlowCoordinator() {}

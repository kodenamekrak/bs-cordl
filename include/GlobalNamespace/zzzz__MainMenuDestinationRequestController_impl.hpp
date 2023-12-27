#pragma once
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_impl.hpp"
#include "System/Threading/zzzz__CancellationToken_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__MainMenuDestinationRequestController_def.hpp"
#include "GlobalNamespace/zzzz__IDestinationRequestManager_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "GlobalNamespace/zzzz__MenuScenesTransitionSetupDataSO_def.hpp"
#include "GlobalNamespace/zzzz__MainMenuDestinationRequestController_def.hpp"
#include "Zenject/zzzz__IInitializable_def.hpp"
#include "GlobalNamespace/zzzz__MenuDestination_def.hpp"
#include "GlobalNamespace/zzzz__GameScenesManager_def.hpp"
#include "GlobalNamespace/zzzz__ScenesTransitionSetupDataSO_def.hpp"
#include "System/Threading/zzzz__CancellationTokenSource_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__MainMenuDestinationRequestController___ProcessDestinationRequest_d__9.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__MainMenuDestinationRequestController___ProcessDestinationRequest_d__9::*)()>(
    &::GlobalNamespace::__MainMenuDestinationRequestController___ProcessDestinationRequest_d__9::MoveNext)> {
  constexpr static std::size_t size = 0x4cc;
  constexpr static std::size_t addrs = 0x223d848;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MainMenuDestinationRequestController___ProcessDestinationRequest_d__9>::get(),
                                    "MoveNext", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__MainMenuDestinationRequestController___ProcessDestinationRequest_d__9.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__MainMenuDestinationRequestController___ProcessDestinationRequest_d__9::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::__MainMenuDestinationRequestController___ProcessDestinationRequest_d__9::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x223dd14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MainMenuDestinationRequestController___ProcessDestinationRequest_d__9>::get(), "SetStateMachine",
        std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::__MainMenuDestinationRequestController___ProcessDestinationRequest_d__9::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
inline void GlobalNamespace::__MainMenuDestinationRequestController___ProcessDestinationRequest_d__9::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MainMenuDestinationRequestController___ProcessDestinationRequest_d__9>::get(), "MoveNext",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__MainMenuDestinationRequestController___ProcessDestinationRequest_d__9::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MainMenuDestinationRequestController___ProcessDestinationRequest_d__9>::get(), "SetStateMachine",
      std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::MainMenuDestinationRequestController*",
// modifiers: "", def_value: Some("nullptr") }, CppParam { name: "menuDestination", ty: "::GlobalNamespace::MenuDestination*", modifiers: "", def_value: Some("nullptr") }, CppParam { name:
// "_cancellationToken_5__2", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter",
// modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__MainMenuDestinationRequestController___ProcessDestinationRequest_d__9::__MainMenuDestinationRequestController___ProcessDestinationRequest_d__9(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, ::GlobalNamespace::MainMenuDestinationRequestController* __4__this,
    ::GlobalNamespace::MenuDestination* menuDestination, ::System::Threading::CancellationToken _cancellationToken_5__2, ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->menuDestination = menuDestination;
  this->_cancellationToken_5__2 = _cancellationToken_5__2;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__MainMenuDestinationRequestController___ProcessDestinationRequest_d__9::__MainMenuDestinationRequestController___ProcessDestinationRequest_d__9() {}
//  Writing Method size for method: ::GlobalNamespace::MainMenuDestinationRequestController.Initialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MainMenuDestinationRequestController::*)()>(
    &::GlobalNamespace::MainMenuDestinationRequestController::Initialize)> {
  constexpr static std::size_t size = 0x274;
  constexpr static std::size_t addrs = 0x223d0e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainMenuDestinationRequestController*>::get(),
                                                                               "Initialize", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainMenuDestinationRequestController.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MainMenuDestinationRequestController::*)()>(
    &::GlobalNamespace::MainMenuDestinationRequestController::Dispose)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x223d3f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainMenuDestinationRequestController*>::get(),
                                                                               "Dispose", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainMenuDestinationRequestController.HandleGameScenesManagerInstallEarlyBindings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MainMenuDestinationRequestController::*)(
    ::GlobalNamespace::ScenesTransitionSetupDataSO*, ::Zenject::DiContainer*)>(&::GlobalNamespace::MainMenuDestinationRequestController::HandleGameScenesManagerInstallEarlyBindings)> {
  constexpr static std::size_t size = 0x294;
  constexpr static std::size_t addrs = 0x223d5a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainMenuDestinationRequestController*>::get(),
                                                 "HandleGameScenesManagerInstallEarlyBindings", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ScenesTransitionSetupDataSO*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainMenuDestinationRequestController.HandleDestinationRequestManagerDidSendMenuDestinationRequest
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MainMenuDestinationRequestController::*)(::GlobalNamespace::MenuDestination*)>(
    &::GlobalNamespace::MainMenuDestinationRequestController::HandleDestinationRequestManagerDidSendMenuDestinationRequest)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x223d83c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainMenuDestinationRequestController*>::get(), "HandleDestinationRequestManagerDidSendMenuDestinationRequest",
        std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MenuDestination*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainMenuDestinationRequestController.ProcessDestinationRequest
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MainMenuDestinationRequestController::*)(::GlobalNamespace::MenuDestination*)>(
    &::GlobalNamespace::MainMenuDestinationRequestController::ProcessDestinationRequest)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x223d354;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainMenuDestinationRequestController*>::get(), "ProcessDestinationRequest", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MenuDestination*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MainMenuDestinationRequestController._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MainMenuDestinationRequestController::*)()>(
    &::GlobalNamespace::MainMenuDestinationRequestController::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x223d840;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainMenuDestinationRequestController*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Zenject::IInitializable"
constexpr GlobalNamespace::MainMenuDestinationRequestController::operator ::Zenject::IInitializable*() noexcept {
  return static_cast<::Zenject::IInitializable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr GlobalNamespace::MainMenuDestinationRequestController::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr ::GlobalNamespace::IDestinationRequestManager*& GlobalNamespace::MainMenuDestinationRequestController::__get__destinationRequestManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____destinationRequestManager;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IDestinationRequestManager*> const& GlobalNamespace::MainMenuDestinationRequestController::__get__destinationRequestManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____destinationRequestManager;
}
constexpr void GlobalNamespace::MainMenuDestinationRequestController::__set__destinationRequestManager(::GlobalNamespace::IDestinationRequestManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____destinationRequestManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::MenuScenesTransitionSetupDataSO*& GlobalNamespace::MainMenuDestinationRequestController::__get__menuScenesTransitionSetupData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____menuScenesTransitionSetupData;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MenuScenesTransitionSetupDataSO*> const&
GlobalNamespace::MainMenuDestinationRequestController::__get__menuScenesTransitionSetupData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____menuScenesTransitionSetupData;
}
constexpr void GlobalNamespace::MainMenuDestinationRequestController::__set__menuScenesTransitionSetupData(::GlobalNamespace::MenuScenesTransitionSetupDataSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____menuScenesTransitionSetupData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::GameScenesManager*& GlobalNamespace::MainMenuDestinationRequestController::__get__gameScenesManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____gameScenesManager;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameScenesManager*> const& GlobalNamespace::MainMenuDestinationRequestController::__get__gameScenesManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____gameScenesManager;
}
constexpr void GlobalNamespace::MainMenuDestinationRequestController::__set__gameScenesManager(::GlobalNamespace::GameScenesManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____gameScenesManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Threading::CancellationTokenSource*& GlobalNamespace::MainMenuDestinationRequestController::__get__cancellationTokenSource() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____cancellationTokenSource;
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::CancellationTokenSource*> const& GlobalNamespace::MainMenuDestinationRequestController::__get__cancellationTokenSource() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____cancellationTokenSource;
}
constexpr void GlobalNamespace::MainMenuDestinationRequestController::__set__cancellationTokenSource(::System::Threading::CancellationTokenSource* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____cancellationTokenSource)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::MainMenuDestinationRequestController::setStaticF__nextMenuDestination(::GlobalNamespace::MenuDestination* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::MenuDestination*, "_nextMenuDestination",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainMenuDestinationRequestController*>::get>(
      std::forward<::GlobalNamespace::MenuDestination*>(value));
}
inline ::GlobalNamespace::MenuDestination* GlobalNamespace::MainMenuDestinationRequestController::getStaticF__nextMenuDestination() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::MenuDestination*, "_nextMenuDestination",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainMenuDestinationRequestController*>::get>();
}
inline void GlobalNamespace::MainMenuDestinationRequestController::Initialize() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainMenuDestinationRequestController*>::get(),
                                                                             "Initialize", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MainMenuDestinationRequestController::Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainMenuDestinationRequestController*>::get(),
                                                                             "Dispose", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MainMenuDestinationRequestController::HandleGameScenesManagerInstallEarlyBindings(::GlobalNamespace::ScenesTransitionSetupDataSO* scenesTransitionSetupData,
                                                                                                               ::Zenject::DiContainer* container) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainMenuDestinationRequestController*>::get(),
                                               "HandleGameScenesManagerInstallEarlyBindings", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ScenesTransitionSetupDataSO*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, scenesTransitionSetupData, container);
}
inline void GlobalNamespace::MainMenuDestinationRequestController::HandleDestinationRequestManagerDidSendMenuDestinationRequest(::GlobalNamespace::MenuDestination* menuDestination) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainMenuDestinationRequestController*>::get(), "HandleDestinationRequestManagerDidSendMenuDestinationRequest",
      std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MenuDestination*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, menuDestination);
}
inline void GlobalNamespace::MainMenuDestinationRequestController::ProcessDestinationRequest(::GlobalNamespace::MenuDestination* menuDestination) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainMenuDestinationRequestController*>::get(), "ProcessDestinationRequest",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MenuDestination*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, menuDestination);
}
inline ::GlobalNamespace::MainMenuDestinationRequestController* GlobalNamespace::MainMenuDestinationRequestController::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::MainMenuDestinationRequestController*>());
}
inline void GlobalNamespace::MainMenuDestinationRequestController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MainMenuDestinationRequestController*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MainMenuDestinationRequestController::MainMenuDestinationRequestController() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
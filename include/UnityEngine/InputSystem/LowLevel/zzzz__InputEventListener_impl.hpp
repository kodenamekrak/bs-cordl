#pragma once
#include "System/zzzz__IObserver_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputEventPtr_impl.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__InlinedArray_1_impl.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputEventListener_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputEventPtr_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__IObserver_1_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputDevice_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputEventListener_def.hpp"
#include "System/zzzz__IObservable_1_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::__InputEventListener__ObserverState._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::LowLevel::__InputEventListener__ObserverState::*)()>(
    &::UnityEngine::InputSystem::LowLevel::__InputEventListener__ObserverState::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2aeb388;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::__InputEventListener__ObserverState*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::__InputEventListener__ObserverState.__ctor_b__2_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::LowLevel::__InputEventListener__ObserverState::*)(
    ::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::UnityEngine::InputSystem::InputDevice*)>(&::UnityEngine::InputSystem::LowLevel::__InputEventListener__ObserverState::__ctor_b__2_0)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x2aeb418;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::__InputEventListener__ObserverState*>::get(), "<.ctor>b__2_0", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::InputEventPtr>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::System::IObserver_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>*>&
UnityEngine::InputSystem::LowLevel::__InputEventListener__ObserverState::__get_observers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___observers;
}
constexpr ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::System::IObserver_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>*> const&
UnityEngine::InputSystem::LowLevel::__InputEventListener__ObserverState::__get_observers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___observers;
}
constexpr void UnityEngine::InputSystem::LowLevel::__InputEventListener__ObserverState::__set_observers(
    ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::System::IObserver_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___observers = value;
}
constexpr ::System::Action_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::UnityEngine::InputSystem::InputDevice*>*&
UnityEngine::InputSystem::LowLevel::__InputEventListener__ObserverState::__get_onEventDelegate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___onEventDelegate;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::UnityEngine::InputSystem::InputDevice*>*> const&
UnityEngine::InputSystem::LowLevel::__InputEventListener__ObserverState::__get_onEventDelegate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___onEventDelegate;
}
constexpr void UnityEngine::InputSystem::LowLevel::__InputEventListener__ObserverState::__set_onEventDelegate(
    ::System::Action_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::UnityEngine::InputSystem::InputDevice*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___onEventDelegate)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::UnityEngine::InputSystem::LowLevel::__InputEventListener__ObserverState* UnityEngine::InputSystem::LowLevel::__InputEventListener__ObserverState::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::InputSystem::LowLevel::__InputEventListener__ObserverState*>());
}
inline void UnityEngine::InputSystem::LowLevel::__InputEventListener__ObserverState::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::__InputEventListener__ObserverState*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::LowLevel::__InputEventListener__ObserverState::__ctor_b__2_0(::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr,
                                                                                                   ::UnityEngine::InputSystem::InputDevice* device) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::__InputEventListener__ObserverState*>::get(), "<.ctor>b__2_0", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::InputEventPtr>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, eventPtr, device);
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::LowLevel::__InputEventListener__ObserverState::__InputEventListener__ObserverState() {}
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::__InputEventListener__DisposableObserver.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::LowLevel::__InputEventListener__DisposableObserver::*)()>(
    &::UnityEngine::InputSystem::LowLevel::__InputEventListener__DisposableObserver::Dispose)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x2aeb50c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::__InputEventListener__DisposableObserver*>::get(),
                                                 "Dispose", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::__InputEventListener__DisposableObserver._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::LowLevel::__InputEventListener__DisposableObserver::*)()>(
    &::UnityEngine::InputSystem::LowLevel::__InputEventListener__DisposableObserver::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2aeb410;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::__InputEventListener__DisposableObserver*>::get(),
                                                 ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::IDisposable"
constexpr UnityEngine::InputSystem::LowLevel::__InputEventListener__DisposableObserver::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr ::System::IObserver_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>*& UnityEngine::InputSystem::LowLevel::__InputEventListener__DisposableObserver::__get_observer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___observer;
}
constexpr ::cordl_internals::to_const_pointer<::System::IObserver_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>*> const&
UnityEngine::InputSystem::LowLevel::__InputEventListener__DisposableObserver::__get_observer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___observer;
}
constexpr void UnityEngine::InputSystem::LowLevel::__InputEventListener__DisposableObserver::__set_observer(::System::IObserver_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___observer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::InputSystem::LowLevel::__InputEventListener__DisposableObserver::Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::__InputEventListener__DisposableObserver*>::get(),
                                               "Dispose", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::LowLevel::__InputEventListener__DisposableObserver* UnityEngine::InputSystem::LowLevel::__InputEventListener__DisposableObserver::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::InputSystem::LowLevel::__InputEventListener__DisposableObserver*>());
}
inline void UnityEngine::InputSystem::LowLevel::__InputEventListener__DisposableObserver::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::__InputEventListener__DisposableObserver*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::LowLevel::__InputEventListener__DisposableObserver::__InputEventListener__DisposableObserver() {}
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputEventListener.op_Addition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::LowLevel::InputEventListener (*)(
    ::UnityEngine::InputSystem::LowLevel::InputEventListener, ::System::Action_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::UnityEngine::InputSystem::InputDevice*>*)>(
    &::UnityEngine::InputSystem::LowLevel::InputEventListener::op_Addition)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x2ae508c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::InputEventListener>::get(), "op_Addition", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::InputEventListener>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::UnityEngine::InputSystem::InputDevice*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputEventListener.op_Subtraction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::LowLevel::InputEventListener (*)(
    ::UnityEngine::InputSystem::LowLevel::InputEventListener, ::System::Action_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::UnityEngine::InputSystem::InputDevice*>*)>(
    &::UnityEngine::InputSystem::LowLevel::InputEventListener::op_Subtraction)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x2ae5370;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::InputEventListener>::get(), "op_Subtraction", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::InputEventListener>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::UnityEngine::InputSystem::InputDevice*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::InputEventListener.Subscribe
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IDisposable* (::UnityEngine::InputSystem::LowLevel::InputEventListener::*)(::System::IObserver_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>*)>(
        &::UnityEngine::InputSystem::LowLevel::InputEventListener::Subscribe)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x2aeb22c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::InputEventListener>::get(), "Subscribe", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IObserver_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::IObservable_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>"
constexpr UnityEngine::InputSystem::LowLevel::InputEventListener::operator ::System::IObservable_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>*() {
  return static_cast<::System::IObservable_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>*>(static_cast<void*>(::cordl_internals::Box(this)));
}
inline void UnityEngine::InputSystem::LowLevel::InputEventListener::setStaticF_s_ObserverState(::UnityEngine::InputSystem::LowLevel::__InputEventListener__ObserverState* value) {
  ::cordl_internals::setStaticField<::UnityEngine::InputSystem::LowLevel::__InputEventListener__ObserverState*, "s_ObserverState",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::InputEventListener>::get>(
      std::forward<::UnityEngine::InputSystem::LowLevel::__InputEventListener__ObserverState*>(value));
}
inline ::UnityEngine::InputSystem::LowLevel::__InputEventListener__ObserverState* UnityEngine::InputSystem::LowLevel::InputEventListener::getStaticF_s_ObserverState() {
  return ::cordl_internals::getStaticField<::UnityEngine::InputSystem::LowLevel::__InputEventListener__ObserverState*, "s_ObserverState",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::InputEventListener>::get>();
}
inline ::UnityEngine::InputSystem::LowLevel::InputEventListener
UnityEngine::InputSystem::LowLevel::InputEventListener::op_Addition(::UnityEngine::InputSystem::LowLevel::InputEventListener _,
                                                                    ::System::Action_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::UnityEngine::InputSystem::InputDevice*>* callback) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::InputEventListener>::get(), "op_Addition", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::InputEventListener>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::UnityEngine::InputSystem::InputDevice*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::LowLevel::InputEventListener, false>(nullptr, ___internal_method, _, callback);
}
inline ::UnityEngine::InputSystem::LowLevel::InputEventListener
UnityEngine::InputSystem::LowLevel::InputEventListener::op_Subtraction(::UnityEngine::InputSystem::LowLevel::InputEventListener _,
                                                                       ::System::Action_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::UnityEngine::InputSystem::InputDevice*>* callback) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::InputEventListener>::get(), "op_Subtraction", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::InputEventListener>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::UnityEngine::InputSystem::InputDevice*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::LowLevel::InputEventListener, false>(nullptr, ___internal_method, _, callback);
}
inline ::System::IDisposable* UnityEngine::InputSystem::LowLevel::InputEventListener::Subscribe(::System::IObserver_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>* observer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::InputEventListener>::get(), "Subscribe", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IObserver_1<::UnityEngine::InputSystem::LowLevel::InputEventPtr>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::IDisposable*, false>(this, ___internal_method, observer);
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::LowLevel::InputEventListener::InputEventListener() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
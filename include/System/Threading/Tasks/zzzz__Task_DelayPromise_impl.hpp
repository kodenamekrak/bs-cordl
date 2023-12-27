#pragma once
#include "System/Threading/Tasks/zzzz__Task_1_impl.hpp"
#include "System/Threading/Tasks/zzzz__VoidTaskResult_impl.hpp"
#include "System/Threading/zzzz__CancellationTokenRegistration_impl.hpp"
#include "System/Threading/zzzz__CancellationToken_impl.hpp"
#include "System/Threading/Tasks/zzzz__Task_DelayPromise_def.hpp"
#include "System/Threading/zzzz__Timer_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
//  Writing Method size for method: ::System::Threading::Tasks::__Task__DelayPromise._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::Tasks::__Task__DelayPromise::*)(::System::Threading::CancellationToken)>(
    &::System::Threading::Tasks::__Task__DelayPromise::_ctor)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x2629114;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::__Task__DelayPromise*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::__Task__DelayPromise.Complete
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::Tasks::__Task__DelayPromise::*)()>(
    &::System::Threading::Tasks::__Task__DelayPromise::Complete)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x262acb0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::__Task__DelayPromise*>::get(),
                                                                               "Complete", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::System::Threading::CancellationToken& System::Threading::Tasks::__Task__DelayPromise::__get_Token() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___Token;
}
constexpr ::System::Threading::CancellationToken const& System::Threading::Tasks::__Task__DelayPromise::__get_Token() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___Token;
}
constexpr void System::Threading::Tasks::__Task__DelayPromise::__set_Token(::System::Threading::CancellationToken value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___Token = value;
}
constexpr ::System::Threading::CancellationTokenRegistration& System::Threading::Tasks::__Task__DelayPromise::__get_Registration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___Registration;
}
constexpr ::System::Threading::CancellationTokenRegistration const& System::Threading::Tasks::__Task__DelayPromise::__get_Registration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___Registration;
}
constexpr void System::Threading::Tasks::__Task__DelayPromise::__set_Registration(::System::Threading::CancellationTokenRegistration value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___Registration = value;
}
constexpr ::System::Threading::Timer*& System::Threading::Tasks::__Task__DelayPromise::__get_Timer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___Timer;
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::Timer*> const& System::Threading::Tasks::__Task__DelayPromise::__get_Timer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___Timer;
}
constexpr void System::Threading::Tasks::__Task__DelayPromise::__set_Timer(::System::Threading::Timer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Timer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Threading::Tasks::__Task__DelayPromise* System::Threading::Tasks::__Task__DelayPromise::New_ctor(::System::Threading::CancellationToken token) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Threading::Tasks::__Task__DelayPromise*>(token));
}
inline void System::Threading::Tasks::__Task__DelayPromise::_ctor(::System::Threading::CancellationToken token) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::__Task__DelayPromise*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, token);
}
inline void System::Threading::Tasks::__Task__DelayPromise::Complete() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::__Task__DelayPromise*>::get(),
                                                                             "Complete", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Threading::Tasks::__Task__DelayPromise::__Task__DelayPromise() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
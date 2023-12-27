#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Threading/zzzz__CancellationCallbackInfo_def.hpp"
#include "System/Threading/zzzz__ExecutionContext_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/Threading/zzzz__CancellationTokenSource_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/Threading/zzzz__ContextCallback_def.hpp"
#include "System/Threading/zzzz__CancellationCallbackInfo_WithSyncContext_def.hpp"
//  Writing Method size for method: ::System::Threading::CancellationCallbackInfo._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::CancellationCallbackInfo::*)(
    ::System::Action_1<::System::Object*>*, ::System::Object*, ::System::Threading::ExecutionContext*, ::System::Threading::CancellationTokenSource*)>(
    &::System::Threading::CancellationCallbackInfo::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x261300c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::CancellationCallbackInfo*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::System::Object*>*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::ExecutionContext*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationTokenSource*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::CancellationCallbackInfo.ExecuteCallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::CancellationCallbackInfo::*)()>(
    &::System::Threading::CancellationCallbackInfo::ExecuteCallback)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x26136b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::CancellationCallbackInfo*>::get(),
                                                                               "ExecuteCallback", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::CancellationCallbackInfo.ExecutionContextCallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Object*)>(&::System::Threading::CancellationCallbackInfo::ExecutionContextCallback)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x26140cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::CancellationCallbackInfo*>::get(), "ExecutionContextCallback",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Action_1<::System::Object*>*& System::Threading::CancellationCallbackInfo::__get_Callback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___Callback;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::System::Object*>*> const& System::Threading::CancellationCallbackInfo::__get_Callback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___Callback;
}
constexpr void System::Threading::CancellationCallbackInfo::__set_Callback(::System::Action_1<::System::Object*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Callback)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Object*& System::Threading::CancellationCallbackInfo::__get_StateForCallback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___StateForCallback;
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& System::Threading::CancellationCallbackInfo::__get_StateForCallback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___StateForCallback;
}
constexpr void System::Threading::CancellationCallbackInfo::__set_StateForCallback(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___StateForCallback)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Threading::ExecutionContext*& System::Threading::CancellationCallbackInfo::__get_TargetExecutionContext() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___TargetExecutionContext;
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::ExecutionContext*> const& System::Threading::CancellationCallbackInfo::__get_TargetExecutionContext() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___TargetExecutionContext;
}
constexpr void System::Threading::CancellationCallbackInfo::__set_TargetExecutionContext(::System::Threading::ExecutionContext* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___TargetExecutionContext)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Threading::CancellationTokenSource*& System::Threading::CancellationCallbackInfo::__get_CancellationTokenSource() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___CancellationTokenSource;
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::CancellationTokenSource*> const& System::Threading::CancellationCallbackInfo::__get_CancellationTokenSource() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___CancellationTokenSource;
}
constexpr void System::Threading::CancellationCallbackInfo::__set_CancellationTokenSource(::System::Threading::CancellationTokenSource* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___CancellationTokenSource)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Threading::CancellationCallbackInfo::setStaticF_s_executionContextCallback(::System::Threading::ContextCallback* value) {
  ::cordl_internals::setStaticField<::System::Threading::ContextCallback*, "s_executionContextCallback",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::CancellationCallbackInfo*>::get>(
      std::forward<::System::Threading::ContextCallback*>(value));
}
inline ::System::Threading::ContextCallback* System::Threading::CancellationCallbackInfo::getStaticF_s_executionContextCallback() {
  return ::cordl_internals::getStaticField<::System::Threading::ContextCallback*, "s_executionContextCallback",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::CancellationCallbackInfo*>::get>();
}
inline ::System::Threading::CancellationCallbackInfo* System::Threading::CancellationCallbackInfo::New_ctor(::System::Action_1<::System::Object*>* callback, ::System::Object* stateForCallback,
                                                                                                            ::System::Threading::ExecutionContext* targetExecutionContext,
                                                                                                            ::System::Threading::CancellationTokenSource* cancellationTokenSource) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Threading::CancellationCallbackInfo*>(callback, stateForCallback, targetExecutionContext, cancellationTokenSource));
}
inline void System::Threading::CancellationCallbackInfo::_ctor(::System::Action_1<::System::Object*>* callback, ::System::Object* stateForCallback,
                                                               ::System::Threading::ExecutionContext* targetExecutionContext, ::System::Threading::CancellationTokenSource* cancellationTokenSource) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::CancellationCallbackInfo*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::System::Object*>*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::ExecutionContext*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationTokenSource*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, callback, stateForCallback, targetExecutionContext, cancellationTokenSource);
}
inline void System::Threading::CancellationCallbackInfo::ExecuteCallback() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::CancellationCallbackInfo*>::get(),
                                                                             "ExecuteCallback", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Threading::CancellationCallbackInfo::ExecutionContextCallback(::System::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::CancellationCallbackInfo*>::get(), "ExecutionContextCallback",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, obj);
}
// Ctor Parameters []
constexpr ::System::Threading::CancellationCallbackInfo::CancellationCallbackInfo() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
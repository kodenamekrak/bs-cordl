#pragma once
#include "System/Threading/zzzz__SynchronizationContext_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Threading/zzzz__OSSpecificSynchronizationContext_def.hpp"
#include "System/Threading/zzzz__SendOrPostCallback_def.hpp"
#include "System/Threading/zzzz__OSSpecificSynchronizationContext_def.hpp"
#include "System/Threading/zzzz__SynchronizationContext_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConditionalWeakTable_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Threading::__OSSpecificSynchronizationContext__InvocationEntryDelegate._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::__OSSpecificSynchronizationContext__InvocationEntryDelegate::*)(::System::Object*, void*)>(
    &::System::Threading::__OSSpecificSynchronizationContext__InvocationEntryDelegate::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2619014;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::__OSSpecificSynchronizationContext__InvocationEntryDelegate*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::__OSSpecificSynchronizationContext__InvocationEntryDelegate.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::__OSSpecificSynchronizationContext__InvocationEntryDelegate::*)(void*)>(
    &::System::Threading::__OSSpecificSynchronizationContext__InvocationEntryDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x26191bc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(
        ::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::__OSSpecificSynchronizationContext__InvocationEntryDelegate*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::__OSSpecificSynchronizationContext__InvocationEntryDelegate*>::get(), 13));
    return ___internal_method;
  }
};
inline ::System::Threading::__OSSpecificSynchronizationContext__InvocationEntryDelegate*
System::Threading::__OSSpecificSynchronizationContext__InvocationEntryDelegate::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Threading::__OSSpecificSynchronizationContext__InvocationEntryDelegate*>(object, method));
}
inline void System::Threading::__OSSpecificSynchronizationContext__InvocationEntryDelegate::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::__OSSpecificSynchronizationContext__InvocationEntryDelegate*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void System::Threading::__OSSpecificSynchronizationContext__InvocationEntryDelegate::Invoke(void* arg) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::__OSSpecificSynchronizationContext__InvocationEntryDelegate*>::get(),
                                               "Invoke", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, arg);
}
// Ctor Parameters []
constexpr ::System::Threading::__OSSpecificSynchronizationContext__InvocationEntryDelegate::__OSSpecificSynchronizationContext__InvocationEntryDelegate() {}
//  Writing Method size for method: ::System::Threading::__OSSpecificSynchronizationContext__InvocationContext._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::__OSSpecificSynchronizationContext__InvocationContext::*)(
    ::System::Threading::SendOrPostCallback*, ::System::Object*)>(&::System::Threading::__OSSpecificSynchronizationContext__InvocationContext::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x26190d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::__OSSpecificSynchronizationContext__InvocationContext*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::SendOrPostCallback*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::__OSSpecificSynchronizationContext__InvocationContext.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::__OSSpecificSynchronizationContext__InvocationContext::*)()>(
    &::System::Threading::__OSSpecificSynchronizationContext__InvocationContext::Invoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2619108;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::__OSSpecificSynchronizationContext__InvocationContext*>::get(), "Invoke",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::System::Threading::SendOrPostCallback*& System::Threading::__OSSpecificSynchronizationContext__InvocationContext::__get_m_Delegate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_Delegate;
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::SendOrPostCallback*> const& System::Threading::__OSSpecificSynchronizationContext__InvocationContext::__get_m_Delegate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_Delegate;
}
constexpr void System::Threading::__OSSpecificSynchronizationContext__InvocationContext::__set_m_Delegate(::System::Threading::SendOrPostCallback* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Delegate)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Object*& System::Threading::__OSSpecificSynchronizationContext__InvocationContext::__get_m_State() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_State;
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& System::Threading::__OSSpecificSynchronizationContext__InvocationContext::__get_m_State() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_State;
}
constexpr void System::Threading::__OSSpecificSynchronizationContext__InvocationContext::__set_m_State(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_State)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Threading::__OSSpecificSynchronizationContext__InvocationContext*
System::Threading::__OSSpecificSynchronizationContext__InvocationContext::New_ctor(::System::Threading::SendOrPostCallback* d, ::System::Object* state) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Threading::__OSSpecificSynchronizationContext__InvocationContext*>(d, state));
}
inline void System::Threading::__OSSpecificSynchronizationContext__InvocationContext::_ctor(::System::Threading::SendOrPostCallback* d, ::System::Object* state) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::__OSSpecificSynchronizationContext__InvocationContext*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::SendOrPostCallback*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, d, state);
}
inline void System::Threading::__OSSpecificSynchronizationContext__InvocationContext::Invoke() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::__OSSpecificSynchronizationContext__InvocationContext*>::get(), "Invoke",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Threading::__OSSpecificSynchronizationContext__InvocationContext::__OSSpecificSynchronizationContext__InvocationContext() {}
//  Writing Method size for method: ::System::Threading::__OSSpecificSynchronizationContext____c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::__OSSpecificSynchronizationContext____c::*)()>(
    &::System::Threading::__OSSpecificSynchronizationContext____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2619234;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::__OSSpecificSynchronizationContext____c*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::__OSSpecificSynchronizationContext____c._Get_b__3_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::OSSpecificSynchronizationContext* (
    ::System::Threading::__OSSpecificSynchronizationContext____c::*)(::System::Object*)>(&::System::Threading::__OSSpecificSynchronizationContext____c::_Get_b__3_0)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x261923c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::__OSSpecificSynchronizationContext____c*>::get(), "<Get>b__3_0",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
inline void System::Threading::__OSSpecificSynchronizationContext____c::setStaticF___9(::System::Threading::__OSSpecificSynchronizationContext____c* value) {
  ::cordl_internals::setStaticField<::System::Threading::__OSSpecificSynchronizationContext____c*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::__OSSpecificSynchronizationContext____c*>::get>(
      std::forward<::System::Threading::__OSSpecificSynchronizationContext____c*>(value));
}
inline ::System::Threading::__OSSpecificSynchronizationContext____c* System::Threading::__OSSpecificSynchronizationContext____c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::System::Threading::__OSSpecificSynchronizationContext____c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::__OSSpecificSynchronizationContext____c*>::get>();
}
inline void System::Threading::__OSSpecificSynchronizationContext____c::setStaticF___9__3_0(
    ::System::Runtime::CompilerServices::__ConditionalWeakTable_2__CreateValueCallback<::System::Object*, ::System::Threading::OSSpecificSynchronizationContext*>* value) {
  ::cordl_internals::setStaticField<::System::Runtime::CompilerServices::__ConditionalWeakTable_2__CreateValueCallback<::System::Object*, ::System::Threading::OSSpecificSynchronizationContext*>*,
                                    "<>9__3_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::__OSSpecificSynchronizationContext____c*>::get>(
      std::forward<::System::Runtime::CompilerServices::__ConditionalWeakTable_2__CreateValueCallback<::System::Object*, ::System::Threading::OSSpecificSynchronizationContext*>*>(value));
}
inline ::System::Runtime::CompilerServices::__ConditionalWeakTable_2__CreateValueCallback<::System::Object*, ::System::Threading::OSSpecificSynchronizationContext*>*
System::Threading::__OSSpecificSynchronizationContext____c::getStaticF___9__3_0() {
  return ::cordl_internals::getStaticField<
      ::System::Runtime::CompilerServices::__ConditionalWeakTable_2__CreateValueCallback<::System::Object*, ::System::Threading::OSSpecificSynchronizationContext*>*, "<>9__3_0",
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::__OSSpecificSynchronizationContext____c*>::get>();
}
inline ::System::Threading::__OSSpecificSynchronizationContext____c* System::Threading::__OSSpecificSynchronizationContext____c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Threading::__OSSpecificSynchronizationContext____c*>());
}
inline void System::Threading::__OSSpecificSynchronizationContext____c::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::__OSSpecificSynchronizationContext____c*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Threading::OSSpecificSynchronizationContext* System::Threading::__OSSpecificSynchronizationContext____c::_Get_b__3_0(::System::Object* _osContext) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::__OSSpecificSynchronizationContext____c*>::get(), "<Get>b__3_0",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::OSSpecificSynchronizationContext*, false>(this, ___internal_method, _osContext);
}
// Ctor Parameters []
constexpr ::System::Threading::__OSSpecificSynchronizationContext____c::__OSSpecificSynchronizationContext____c() {}
//  Writing Method size for method: ::System::Threading::OSSpecificSynchronizationContext._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::OSSpecificSynchronizationContext::*)(::System::Object*)>(
    &::System::Threading::OSSpecificSynchronizationContext::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2618de8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::OSSpecificSynchronizationContext*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::OSSpecificSynchronizationContext.Get
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::OSSpecificSynchronizationContext* (*)()>(
    &::System::Threading::OSSpecificSynchronizationContext::Get)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x2618ac4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::OSSpecificSynchronizationContext*>::get(),
                                                                               "Get", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::OSSpecificSynchronizationContext.CreateCopy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::SynchronizationContext* (::System::Threading::OSSpecificSynchronizationContext::*)()>(
    &::System::Threading::OSSpecificSynchronizationContext::CreateCopy)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2618e14;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::OSSpecificSynchronizationContext*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::OSSpecificSynchronizationContext*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::OSSpecificSynchronizationContext.Send
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::OSSpecificSynchronizationContext::*)(
    ::System::Threading::SendOrPostCallback*, ::System::Object*)>(&::System::Threading::OSSpecificSynchronizationContext::Send)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2618e7c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::OSSpecificSynchronizationContext*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::OSSpecificSynchronizationContext*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::OSSpecificSynchronizationContext.Post
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::OSSpecificSynchronizationContext::*)(
    ::System::Threading::SendOrPostCallback*, ::System::Object*)>(&::System::Threading::OSSpecificSynchronizationContext::Post)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x2618ebc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::OSSpecificSynchronizationContext*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::OSSpecificSynchronizationContext*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::OSSpecificSynchronizationContext.InvocationEntry
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(void*)>(&::System::Threading::OSSpecificSynchronizationContext::InvocationEntry)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x2618c80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::OSSpecificSynchronizationContext*>::get(), "InvocationEntry",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::OSSpecificSynchronizationContext.GetOSContext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (*)()>(&::System::Threading::OSSpecificSynchronizationContext::GetOSContext)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2618e10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::OSSpecificSynchronizationContext*>::get(),
                                                                               "GetOSContext", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::OSSpecificSynchronizationContext.PostInternal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Object*, void*, void*)>(&::System::Threading::OSSpecificSynchronizationContext::PostInternal)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2619104;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::OSSpecificSynchronizationContext*>::get(), "PostInternal", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Object*& System::Threading::OSSpecificSynchronizationContext::__get_m_OSSynchronizationContext() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_OSSynchronizationContext;
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& System::Threading::OSSpecificSynchronizationContext::__get_m_OSSynchronizationContext() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_OSSynchronizationContext;
}
constexpr void System::Threading::OSSpecificSynchronizationContext::__set_m_OSSynchronizationContext(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_OSSynchronizationContext)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Threading::OSSpecificSynchronizationContext::setStaticF_s_ContextCache(
    ::System::Runtime::CompilerServices::ConditionalWeakTable_2<::System::Object*, ::System::Threading::OSSpecificSynchronizationContext*>* value) {
  ::cordl_internals::setStaticField<::System::Runtime::CompilerServices::ConditionalWeakTable_2<::System::Object*, ::System::Threading::OSSpecificSynchronizationContext*>*, "s_ContextCache",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::OSSpecificSynchronizationContext*>::get>(
      std::forward<::System::Runtime::CompilerServices::ConditionalWeakTable_2<::System::Object*, ::System::Threading::OSSpecificSynchronizationContext*>*>(value));
}
inline ::System::Runtime::CompilerServices::ConditionalWeakTable_2<::System::Object*, ::System::Threading::OSSpecificSynchronizationContext*>*
System::Threading::OSSpecificSynchronizationContext::getStaticF_s_ContextCache() {
  return ::cordl_internals::getStaticField<::System::Runtime::CompilerServices::ConditionalWeakTable_2<::System::Object*, ::System::Threading::OSSpecificSynchronizationContext*>*, "s_ContextCache",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::OSSpecificSynchronizationContext*>::get>();
}
inline ::System::Threading::OSSpecificSynchronizationContext* System::Threading::OSSpecificSynchronizationContext::New_ctor(::System::Object* osContext) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Threading::OSSpecificSynchronizationContext*>(osContext));
}
inline void System::Threading::OSSpecificSynchronizationContext::_ctor(::System::Object* osContext) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::OSSpecificSynchronizationContext*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, osContext);
}
inline ::System::Threading::OSSpecificSynchronizationContext* System::Threading::OSSpecificSynchronizationContext::Get() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::OSSpecificSynchronizationContext*>::get(),
                                                                             "Get", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::OSSpecificSynchronizationContext*, false>(nullptr, ___internal_method);
}
inline ::System::Threading::SynchronizationContext* System::Threading::OSSpecificSynchronizationContext::CreateCopy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::OSSpecificSynchronizationContext*>::get(),
                                                                             "CreateCopy", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::SynchronizationContext*, false>(this, ___internal_method);
}
inline void System::Threading::OSSpecificSynchronizationContext::Send(::System::Threading::SendOrPostCallback* d, ::System::Object* state) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::OSSpecificSynchronizationContext*>::get(), "Send", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::SendOrPostCallback*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, d, state);
}
inline void System::Threading::OSSpecificSynchronizationContext::Post(::System::Threading::SendOrPostCallback* d, ::System::Object* state) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::OSSpecificSynchronizationContext*>::get(), "Post", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::SendOrPostCallback*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, d, state);
}
inline void System::Threading::OSSpecificSynchronizationContext::InvocationEntry(void* arg) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::OSSpecificSynchronizationContext*>::get(), "InvocationEntry",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, arg);
}
inline ::System::Object* System::Threading::OSSpecificSynchronizationContext::GetOSContext() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::OSSpecificSynchronizationContext*>::get(),
                                                                             "GetOSContext", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method);
}
inline void System::Threading::OSSpecificSynchronizationContext::PostInternal(::System::Object* osSynchronizationContext, void* callback, void* arg) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::OSSpecificSynchronizationContext*>::get(), "PostInternal", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, osSynchronizationContext, callback, arg);
}
// Ctor Parameters []
constexpr ::System::Threading::OSSpecificSynchronizationContext::OSSpecificSynchronizationContext() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
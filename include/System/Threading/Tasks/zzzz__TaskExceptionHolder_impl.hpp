#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Threading/Tasks/zzzz__TaskExceptionHolder_def.hpp"
#include "System/Collections/ObjectModel/zzzz__ReadOnlyCollection_1_def.hpp"
#include "System/Runtime/ExceptionServices/zzzz__ExceptionDispatchInfo_def.hpp"
#include "System/Collections/Generic/zzzz__LowLevelListWithIList_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__AggregateException_def.hpp"
#include "System/zzzz__Exception_def.hpp"
//  Writing Method size for method: ::System::Threading::Tasks::TaskExceptionHolder._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::Tasks::TaskExceptionHolder::*)(::System::Threading::Tasks::Task*)>(
    &::System::Threading::Tasks::TaskExceptionHolder::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2624af0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::TaskExceptionHolder*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::TaskExceptionHolder.ShouldFailFastOnUnobservedException
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::System::Threading::Tasks::TaskExceptionHolder::ShouldFailFastOnUnobservedException)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x262c79c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::TaskExceptionHolder*>::get(),
                                                                               "ShouldFailFastOnUnobservedException", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::TaskExceptionHolder.Finalize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::Tasks::TaskExceptionHolder::*)()>(
    &::System::Threading::Tasks::TaskExceptionHolder::Finalize)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x262c7a4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::TaskExceptionHolder*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::TaskExceptionHolder*>::get(), 1));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::TaskExceptionHolder.get_ContainsFaultList
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Threading::Tasks::TaskExceptionHolder::*)()>(
    &::System::Threading::Tasks::TaskExceptionHolder::get_ContainsFaultList)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2624704;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::TaskExceptionHolder*>::get(),
                                                                               "get_ContainsFaultList", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::TaskExceptionHolder.Add
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::Tasks::TaskExceptionHolder::*)(::System::Object*, bool)>(
    &::System::Threading::Tasks::TaskExceptionHolder::Add)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2624b18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::TaskExceptionHolder*>::get(), "Add", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::TaskExceptionHolder.SetCancellationException
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::Tasks::TaskExceptionHolder::*)(::System::Object*)>(
    &::System::Threading::Tasks::TaskExceptionHolder::SetCancellationException)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x262cb48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::TaskExceptionHolder*>::get(), "SetCancellationException",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::TaskExceptionHolder.AddFaultException
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::Tasks::TaskExceptionHolder::*)(::System::Object*)>(
    &::System::Threading::Tasks::TaskExceptionHolder::AddFaultException)> {
  constexpr static std::size_t size = 0x50c;
  constexpr static std::size_t addrs = 0x262cc04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::TaskExceptionHolder*>::get(), "AddFaultException",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::TaskExceptionHolder.MarkAsUnhandled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::Tasks::TaskExceptionHolder::*)()>(
    &::System::Threading::Tasks::TaskExceptionHolder::MarkAsUnhandled)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x262d110;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::TaskExceptionHolder*>::get(),
                                                                               "MarkAsUnhandled", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::TaskExceptionHolder.MarkAsHandled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::Tasks::TaskExceptionHolder::*)(bool)>(
    &::System::Threading::Tasks::TaskExceptionHolder::MarkAsHandled)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x26248dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::TaskExceptionHolder*>::get(), "MarkAsHandled",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::TaskExceptionHolder.CreateExceptionObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::AggregateException* (::System::Threading::Tasks::TaskExceptionHolder::*)(bool, ::System::Exception*)>(
    &::System::Threading::Tasks::TaskExceptionHolder::CreateExceptionObject)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x2624b24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::TaskExceptionHolder*>::get(), "CreateExceptionObject", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::TaskExceptionHolder.GetExceptionDispatchInfos
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Runtime::ExceptionServices::ExceptionDispatchInfo*>* (::System::Threading::Tasks::TaskExceptionHolder::*)()>(
        &::System::Threading::Tasks::TaskExceptionHolder::GetExceptionDispatchInfos)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x2624de4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::TaskExceptionHolder*>::get(),
                                                                               "GetExceptionDispatchInfos", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::Tasks::TaskExceptionHolder.GetCancellationExceptionDispatchInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::ExceptionServices::ExceptionDispatchInfo* (::System::Threading::Tasks::TaskExceptionHolder::*)()>(
    &::System::Threading::Tasks::TaskExceptionHolder::GetCancellationExceptionDispatchInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x262d180;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::TaskExceptionHolder*>::get(),
                                                                               "GetCancellationExceptionDispatchInfo", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::System::Threading::Tasks::Task*& System::Threading::Tasks::TaskExceptionHolder::__get_m_task() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_task;
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task*> const& System::Threading::Tasks::TaskExceptionHolder::__get_m_task() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_task;
}
constexpr void System::Threading::Tasks::TaskExceptionHolder::__set_m_task(::System::Threading::Tasks::Task* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_task)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::LowLevelListWithIList_1<::System::Runtime::ExceptionServices::ExceptionDispatchInfo*>*&
System::Threading::Tasks::TaskExceptionHolder::__get_m_faultExceptions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_faultExceptions;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::LowLevelListWithIList_1<::System::Runtime::ExceptionServices::ExceptionDispatchInfo*>*> const&
System::Threading::Tasks::TaskExceptionHolder::__get_m_faultExceptions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_faultExceptions;
}
constexpr void
System::Threading::Tasks::TaskExceptionHolder::__set_m_faultExceptions(::System::Collections::Generic::LowLevelListWithIList_1<::System::Runtime::ExceptionServices::ExceptionDispatchInfo*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_faultExceptions)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Runtime::ExceptionServices::ExceptionDispatchInfo*& System::Threading::Tasks::TaskExceptionHolder::__get_m_cancellationException() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_cancellationException;
}
constexpr ::cordl_internals::to_const_pointer<::System::Runtime::ExceptionServices::ExceptionDispatchInfo*> const&
System::Threading::Tasks::TaskExceptionHolder::__get_m_cancellationException() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_cancellationException;
}
constexpr void System::Threading::Tasks::TaskExceptionHolder::__set_m_cancellationException(::System::Runtime::ExceptionServices::ExceptionDispatchInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_cancellationException)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& System::Threading::Tasks::TaskExceptionHolder::__get_m_isHandled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_isHandled;
}
constexpr bool const& System::Threading::Tasks::TaskExceptionHolder::__get_m_isHandled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_isHandled;
}
constexpr void System::Threading::Tasks::TaskExceptionHolder::__set_m_isHandled(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___m_isHandled = value;
}
inline void System::Threading::Tasks::TaskExceptionHolder::setStaticF_s_failFastOnUnobservedException(bool value) {
  ::cordl_internals::setStaticField<bool, "s_failFastOnUnobservedException", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::TaskExceptionHolder*>::get>(
      std::forward<bool>(value));
}
inline bool System::Threading::Tasks::TaskExceptionHolder::getStaticF_s_failFastOnUnobservedException() {
  return ::cordl_internals::getStaticField<bool, "s_failFastOnUnobservedException", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::TaskExceptionHolder*>::get>();
}
inline ::System::Threading::Tasks::TaskExceptionHolder* System::Threading::Tasks::TaskExceptionHolder::New_ctor(::System::Threading::Tasks::Task* task) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Threading::Tasks::TaskExceptionHolder*>(task));
}
inline void System::Threading::Tasks::TaskExceptionHolder::_ctor(::System::Threading::Tasks::Task* task) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::TaskExceptionHolder*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::Tasks::Task*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, task);
}
inline bool System::Threading::Tasks::TaskExceptionHolder::ShouldFailFastOnUnobservedException() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::TaskExceptionHolder*>::get(),
                                                                             "ShouldFailFastOnUnobservedException", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline void System::Threading::Tasks::TaskExceptionHolder::Finalize() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::TaskExceptionHolder*>::get(),
                                                                             "Finalize", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool System::Threading::Tasks::TaskExceptionHolder::get_ContainsFaultList() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::TaskExceptionHolder*>::get(),
                                                                             "get_ContainsFaultList", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void System::Threading::Tasks::TaskExceptionHolder::Add(::System::Object* exceptionObject, bool representsCancellation) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::TaskExceptionHolder*>::get(), "Add", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, exceptionObject, representsCancellation);
}
inline void System::Threading::Tasks::TaskExceptionHolder::SetCancellationException(::System::Object* exceptionObject) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::TaskExceptionHolder*>::get(), "SetCancellationException",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, exceptionObject);
}
inline void System::Threading::Tasks::TaskExceptionHolder::AddFaultException(::System::Object* exceptionObject) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::TaskExceptionHolder*>::get(), "AddFaultException",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, exceptionObject);
}
inline void System::Threading::Tasks::TaskExceptionHolder::MarkAsUnhandled() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::TaskExceptionHolder*>::get(),
                                                                             "MarkAsUnhandled", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Threading::Tasks::TaskExceptionHolder::MarkAsHandled(bool calledFromFinalizer) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::TaskExceptionHolder*>::get(), "MarkAsHandled",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, calledFromFinalizer);
}
inline ::System::AggregateException* System::Threading::Tasks::TaskExceptionHolder::CreateExceptionObject(bool calledFromFinalizer, ::System::Exception* includeThisException) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::TaskExceptionHolder*>::get(), "CreateExceptionObject", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::AggregateException*, false>(this, ___internal_method, calledFromFinalizer, includeThisException);
}
inline ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Runtime::ExceptionServices::ExceptionDispatchInfo*>*
System::Threading::Tasks::TaskExceptionHolder::GetExceptionDispatchInfos() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::TaskExceptionHolder*>::get(),
                                                                             "GetExceptionDispatchInfos", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Runtime::ExceptionServices::ExceptionDispatchInfo*>*, false>(this, ___internal_method);
}
inline ::System::Runtime::ExceptionServices::ExceptionDispatchInfo* System::Threading::Tasks::TaskExceptionHolder::GetCancellationExceptionDispatchInfo() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::Tasks::TaskExceptionHolder*>::get(),
                                                                             "GetCancellationExceptionDispatchInfo", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::ExceptionServices::ExceptionDispatchInfo*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Threading::Tasks::TaskExceptionHolder::TaskExceptionHolder() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
#pragma once
// IWYU pragma private; include "GlobalNamespace/IPlatformAchievementsHandler.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "GlobalNamespace/zzzz__IPlatformAchievementsHandler_def.hpp"
#include "GlobalNamespace/zzzz__HMAsyncRequest_def.hpp"
#include "GlobalNamespace/zzzz__IPlatformAchievementsHandler_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__IPlatformAchievementsHandler__UnlockAchievementResult::__IPlatformAchievementsHandler__UnlockAchievementResult(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__IPlatformAchievementsHandler__UnlockAchievementResult::__IPlatformAchievementsHandler__UnlockAchievementResult() {}
constexpr ::GlobalNamespace::__IPlatformAchievementsHandler__UnlockAchievementResult GlobalNamespace::__IPlatformAchievementsHandler__UnlockAchievementResult::OK{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::__IPlatformAchievementsHandler__UnlockAchievementResult GlobalNamespace::__IPlatformAchievementsHandler__UnlockAchievementResult::Failed{ static_cast<int32_t>(0x1) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__IPlatformAchievementsHandler__GetUnlockedAchievementsResult::__IPlatformAchievementsHandler__GetUnlockedAchievementsResult(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__IPlatformAchievementsHandler__GetUnlockedAchievementsResult::__IPlatformAchievementsHandler__GetUnlockedAchievementsResult() {}
constexpr ::GlobalNamespace::__IPlatformAchievementsHandler__GetUnlockedAchievementsResult GlobalNamespace::__IPlatformAchievementsHandler__GetUnlockedAchievementsResult::OK{ static_cast<int32_t>(
    0x0) };
constexpr ::GlobalNamespace::__IPlatformAchievementsHandler__GetUnlockedAchievementsResult GlobalNamespace::__IPlatformAchievementsHandler__GetUnlockedAchievementsResult::Failed{ static_cast<int32_t>(
    0x1) };
//  Writing Method size for method: ::GlobalNamespace::__IPlatformAchievementsHandler__UnlockAchievementCompletionHandler._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__IPlatformAchievementsHandler__UnlockAchievementCompletionHandler::*)(
    ::System::Object*, ::System::IntPtr)>(&::GlobalNamespace::__IPlatformAchievementsHandler__UnlockAchievementCompletionHandler::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x266dbc4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__IPlatformAchievementsHandler__UnlockAchievementCompletionHandler*>::get(),
                                                 ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__IPlatformAchievementsHandler__UnlockAchievementCompletionHandler.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__IPlatformAchievementsHandler__UnlockAchievementCompletionHandler::*)(
    ::GlobalNamespace::__IPlatformAchievementsHandler__UnlockAchievementResult)>(&::GlobalNamespace::__IPlatformAchievementsHandler__UnlockAchievementCompletionHandler::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x266dfc0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(
        ::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__IPlatformAchievementsHandler__UnlockAchievementCompletionHandler*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__IPlatformAchievementsHandler__UnlockAchievementCompletionHandler*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__IPlatformAchievementsHandler__UnlockAchievementCompletionHandler.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::GlobalNamespace::__IPlatformAchievementsHandler__UnlockAchievementCompletionHandler::*)(::GlobalNamespace::__IPlatformAchievementsHandler__UnlockAchievementResult, ::System::AsyncCallback*,
                                                                                              ::System::Object*)>(
    &::GlobalNamespace::__IPlatformAchievementsHandler__UnlockAchievementCompletionHandler::BeginInvoke)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x266dfd4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(
        ::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__IPlatformAchievementsHandler__UnlockAchievementCompletionHandler*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__IPlatformAchievementsHandler__UnlockAchievementCompletionHandler*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__IPlatformAchievementsHandler__UnlockAchievementCompletionHandler.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__IPlatformAchievementsHandler__UnlockAchievementCompletionHandler::*)(
    ::System::IAsyncResult*)>(&::GlobalNamespace::__IPlatformAchievementsHandler__UnlockAchievementCompletionHandler::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x266e058;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(
        ::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__IPlatformAchievementsHandler__UnlockAchievementCompletionHandler*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__IPlatformAchievementsHandler__UnlockAchievementCompletionHandler*>::get(), 15));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__IPlatformAchievementsHandler__UnlockAchievementCompletionHandler*
GlobalNamespace::__IPlatformAchievementsHandler__UnlockAchievementCompletionHandler::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__IPlatformAchievementsHandler__UnlockAchievementCompletionHandler*>(object, method));
}
inline void GlobalNamespace::__IPlatformAchievementsHandler__UnlockAchievementCompletionHandler::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__IPlatformAchievementsHandler__UnlockAchievementCompletionHandler*>::get(),
                                               ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void GlobalNamespace::__IPlatformAchievementsHandler__UnlockAchievementCompletionHandler::Invoke(::GlobalNamespace::__IPlatformAchievementsHandler__UnlockAchievementResult result) {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__IPlatformAchievementsHandler__UnlockAchievementCompletionHandler*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
inline ::System::IAsyncResult*
GlobalNamespace::__IPlatformAchievementsHandler__UnlockAchievementCompletionHandler::BeginInvoke(::GlobalNamespace::__IPlatformAchievementsHandler__UnlockAchievementResult result,
                                                                                                 ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__IPlatformAchievementsHandler__UnlockAchievementCompletionHandler*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, result, callback, object);
}
inline void GlobalNamespace::__IPlatformAchievementsHandler__UnlockAchievementCompletionHandler::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__IPlatformAchievementsHandler__UnlockAchievementCompletionHandler*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__IPlatformAchievementsHandler__UnlockAchievementCompletionHandler::__IPlatformAchievementsHandler__UnlockAchievementCompletionHandler() {}
//  Writing Method size for method: ::GlobalNamespace::__IPlatformAchievementsHandler__GetUnlockedAchievementsCompletionHandler._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__IPlatformAchievementsHandler__GetUnlockedAchievementsCompletionHandler::*)(
    ::System::Object*, ::System::IntPtr)>(&::GlobalNamespace::__IPlatformAchievementsHandler__GetUnlockedAchievementsCompletionHandler::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x266db30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__IPlatformAchievementsHandler__GetUnlockedAchievementsCompletionHandler*>::get(),
                                    ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__IPlatformAchievementsHandler__GetUnlockedAchievementsCompletionHandler.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__IPlatformAchievementsHandler__GetUnlockedAchievementsCompletionHandler::*)(
    ::GlobalNamespace::__IPlatformAchievementsHandler__GetUnlockedAchievementsResult, ::ArrayW<::StringW, ::Array<::StringW>*>)>(
    &::GlobalNamespace::__IPlatformAchievementsHandler__GetUnlockedAchievementsCompletionHandler::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x266e064;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__IPlatformAchievementsHandler__GetUnlockedAchievementsCompletionHandler*>::get(),
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__IPlatformAchievementsHandler__GetUnlockedAchievementsCompletionHandler*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__IPlatformAchievementsHandler__GetUnlockedAchievementsCompletionHandler.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::GlobalNamespace::__IPlatformAchievementsHandler__GetUnlockedAchievementsCompletionHandler::*)(::GlobalNamespace::__IPlatformAchievementsHandler__GetUnlockedAchievementsResult,
                                                                                                    ::ArrayW<::StringW, ::Array<::StringW>*>, ::System::AsyncCallback*, ::System::Object*)>(
    &::GlobalNamespace::__IPlatformAchievementsHandler__GetUnlockedAchievementsCompletionHandler::BeginInvoke)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x266e078;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__IPlatformAchievementsHandler__GetUnlockedAchievementsCompletionHandler*>::get(),
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__IPlatformAchievementsHandler__GetUnlockedAchievementsCompletionHandler*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__IPlatformAchievementsHandler__GetUnlockedAchievementsCompletionHandler.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__IPlatformAchievementsHandler__GetUnlockedAchievementsCompletionHandler::*)(
    ::System::IAsyncResult*)>(&::GlobalNamespace::__IPlatformAchievementsHandler__GetUnlockedAchievementsCompletionHandler::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x266e10c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__IPlatformAchievementsHandler__GetUnlockedAchievementsCompletionHandler*>::get(),
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__IPlatformAchievementsHandler__GetUnlockedAchievementsCompletionHandler*>::get(), 15));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__IPlatformAchievementsHandler__GetUnlockedAchievementsCompletionHandler*
GlobalNamespace::__IPlatformAchievementsHandler__GetUnlockedAchievementsCompletionHandler::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__IPlatformAchievementsHandler__GetUnlockedAchievementsCompletionHandler*>(object, method));
}
inline void GlobalNamespace::__IPlatformAchievementsHandler__GetUnlockedAchievementsCompletionHandler::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__IPlatformAchievementsHandler__GetUnlockedAchievementsCompletionHandler*>::get(), ".ctor",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void GlobalNamespace::__IPlatformAchievementsHandler__GetUnlockedAchievementsCompletionHandler::Invoke(::GlobalNamespace::__IPlatformAchievementsHandler__GetUnlockedAchievementsResult result,
                                                                                                              ::ArrayW<::StringW, ::Array<::StringW>*> unlockedAchievementsIds) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
      il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__IPlatformAchievementsHandler__GetUnlockedAchievementsCompletionHandler*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result, unlockedAchievementsIds);
}
inline ::System::IAsyncResult*
GlobalNamespace::__IPlatformAchievementsHandler__GetUnlockedAchievementsCompletionHandler::BeginInvoke(::GlobalNamespace::__IPlatformAchievementsHandler__GetUnlockedAchievementsResult result,
                                                                                                       ::ArrayW<::StringW, ::Array<::StringW>*> unlockedAchievementsIds,
                                                                                                       ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
      il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__IPlatformAchievementsHandler__GetUnlockedAchievementsCompletionHandler*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, result, unlockedAchievementsIds, callback, object);
}
inline void GlobalNamespace::__IPlatformAchievementsHandler__GetUnlockedAchievementsCompletionHandler::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
      il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__IPlatformAchievementsHandler__GetUnlockedAchievementsCompletionHandler*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__IPlatformAchievementsHandler__GetUnlockedAchievementsCompletionHandler::__IPlatformAchievementsHandler__GetUnlockedAchievementsCompletionHandler() {}
//  Writing Method size for method: ::GlobalNamespace::IPlatformAchievementsHandler.Initialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::IPlatformAchievementsHandler::*)()>(
    &::GlobalNamespace::IPlatformAchievementsHandler::Initialize)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IPlatformAchievementsHandler*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IPlatformAchievementsHandler*>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IPlatformAchievementsHandler.UnlockAchievement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::HMAsyncRequest* (
    ::GlobalNamespace::IPlatformAchievementsHandler::*)(::StringW, ::GlobalNamespace::__IPlatformAchievementsHandler__UnlockAchievementCompletionHandler*)>(
    &::GlobalNamespace::IPlatformAchievementsHandler::UnlockAchievement)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IPlatformAchievementsHandler*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IPlatformAchievementsHandler*>::get(), 1));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IPlatformAchievementsHandler.GetUnlockedAchievements
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::GlobalNamespace::HMAsyncRequest* (::GlobalNamespace::IPlatformAchievementsHandler::*)(::GlobalNamespace::__IPlatformAchievementsHandler__GetUnlockedAchievementsCompletionHandler*)>(
        &::GlobalNamespace::IPlatformAchievementsHandler::GetUnlockedAchievements)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IPlatformAchievementsHandler*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IPlatformAchievementsHandler*>::get(), 2));
    return ___internal_method;
  }
};
inline void GlobalNamespace::IPlatformAchievementsHandler::Initialize() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IPlatformAchievementsHandler*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::HMAsyncRequest*
GlobalNamespace::IPlatformAchievementsHandler::UnlockAchievement(::StringW achievementId, ::GlobalNamespace::__IPlatformAchievementsHandler__UnlockAchievementCompletionHandler* completionHandler) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IPlatformAchievementsHandler*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::HMAsyncRequest*, false>(this, ___internal_method, achievementId, completionHandler);
}
inline ::GlobalNamespace::HMAsyncRequest*
GlobalNamespace::IPlatformAchievementsHandler::GetUnlockedAchievements(::GlobalNamespace::__IPlatformAchievementsHandler__GetUnlockedAchievementsCompletionHandler* completionHandler) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IPlatformAchievementsHandler*>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::HMAsyncRequest*, false>(this, ___internal_method, completionHandler);
}

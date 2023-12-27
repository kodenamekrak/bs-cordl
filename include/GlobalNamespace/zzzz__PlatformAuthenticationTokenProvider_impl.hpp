#pragma once
#include "GlobalNamespace/zzzz__AuthenticationToken_impl.hpp"
#include "GlobalNamespace/zzzz__PlatformUserAuthTokenData_impl.hpp"
#include "GlobalNamespace/zzzz__XPlatformAccessTokenData_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/Threading/zzzz__CancellationToken_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__PlatformAuthenticationTokenProvider_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "GlobalNamespace/zzzz__PlatformAuthenticationTokenProvider_def.hpp"
#include "GlobalNamespace/zzzz__IPlatformUserModel_def.hpp"
#include "GlobalNamespace/zzzz__XPlatformAccessTokenData_def.hpp"
#include "GlobalNamespace/zzzz__UserInfo_def.hpp"
#include "GlobalNamespace/zzzz__PlatformEnvironment_def.hpp"
#include "GlobalNamespace/zzzz__IAuthenticationTokenProvider_def.hpp"
#include "GlobalNamespace/zzzz__AuthenticationToken_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "GlobalNamespace/zzzz__PlatformUserAuthTokenData_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__PlatformAuthenticationTokenProvider___GetAuthenticationToken_d__16.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PlatformAuthenticationTokenProvider___GetAuthenticationToken_d__16::*)()>(
    &::GlobalNamespace::__PlatformAuthenticationTokenProvider___GetAuthenticationToken_d__16::MoveNext)> {
  constexpr static std::size_t size = 0x3ac;
  constexpr static std::size_t addrs = 0x26381c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlatformAuthenticationTokenProvider___GetAuthenticationToken_d__16>::get(),
                                                 "MoveNext", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__PlatformAuthenticationTokenProvider___GetAuthenticationToken_d__16.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PlatformAuthenticationTokenProvider___GetAuthenticationToken_d__16::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::__PlatformAuthenticationTokenProvider___GetAuthenticationToken_d__16::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x263856c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlatformAuthenticationTokenProvider___GetAuthenticationToken_d__16>::get(), "SetStateMachine",
        std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::__PlatformAuthenticationTokenProvider___GetAuthenticationToken_d__16::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
inline void GlobalNamespace::__PlatformAuthenticationTokenProvider___GetAuthenticationToken_d__16::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlatformAuthenticationTokenProvider___GetAuthenticationToken_d__16>::get(),
                                               "MoveNext", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__PlatformAuthenticationTokenProvider___GetAuthenticationToken_d__16::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlatformAuthenticationTokenProvider___GetAuthenticationToken_d__16>::get(), "SetStateMachine",
      std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::AuthenticationToken>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty:
// "::GlobalNamespace::PlatformAuthenticationTokenProvider*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::PlatformUserAuthTokenData*>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__PlatformAuthenticationTokenProvider___GetAuthenticationToken_d__16::__PlatformAuthenticationTokenProvider___GetAuthenticationToken_d__16(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::AuthenticationToken> __t__builder,
    ::GlobalNamespace::PlatformAuthenticationTokenProvider* __4__this, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::PlatformUserAuthTokenData*> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__PlatformAuthenticationTokenProvider___GetAuthenticationToken_d__16::__PlatformAuthenticationTokenProvider___GetAuthenticationToken_d__16() {}
//  Writing Method size for method: ::GlobalNamespace::__PlatformAuthenticationTokenProvider___GetXPlatformAccessToken_d__18.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PlatformAuthenticationTokenProvider___GetXPlatformAccessToken_d__18::*)()>(
    &::GlobalNamespace::__PlatformAuthenticationTokenProvider___GetXPlatformAccessToken_d__18::MoveNext)> {
  constexpr static std::size_t size = 0x330;
  constexpr static std::size_t addrs = 0x26385c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlatformAuthenticationTokenProvider___GetXPlatformAccessToken_d__18>::get(), "MoveNext",
                                    std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__PlatformAuthenticationTokenProvider___GetXPlatformAccessToken_d__18.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PlatformAuthenticationTokenProvider___GetXPlatformAccessToken_d__18::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::__PlatformAuthenticationTokenProvider___GetXPlatformAccessToken_d__18::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x26388f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlatformAuthenticationTokenProvider___GetXPlatformAccessToken_d__18>::get(), "SetStateMachine",
        std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::__PlatformAuthenticationTokenProvider___GetXPlatformAccessToken_d__18::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
inline void GlobalNamespace::__PlatformAuthenticationTokenProvider___GetXPlatformAccessToken_d__18::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlatformAuthenticationTokenProvider___GetXPlatformAccessToken_d__18>::get(),
                                               "MoveNext", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__PlatformAuthenticationTokenProvider___GetXPlatformAccessToken_d__18::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlatformAuthenticationTokenProvider___GetXPlatformAccessToken_d__18>::get(), "SetStateMachine",
      std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::XPlatformAccessTokenData*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "skipCache", ty: "bool",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::PlatformAuthenticationTokenProvider*", modifiers: "", def_value: Some("nullptr") }, CppParam { name:
// "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::XPlatformAccessTokenData*>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__PlatformAuthenticationTokenProvider___GetXPlatformAccessToken_d__18::__PlatformAuthenticationTokenProvider___GetXPlatformAccessToken_d__18(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::XPlatformAccessTokenData*> __t__builder, bool skipCache,
    ::GlobalNamespace::PlatformAuthenticationTokenProvider* __4__this, ::System::Threading::CancellationToken cancellationToken,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::XPlatformAccessTokenData*> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->skipCache = skipCache;
  this->__4__this = __4__this;
  this->cancellationToken = cancellationToken;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__PlatformAuthenticationTokenProvider___GetXPlatformAccessToken_d__18::__PlatformAuthenticationTokenProvider___GetXPlatformAccessToken_d__18() {}
//  Writing Method size for method: ::GlobalNamespace::__PlatformAuthenticationTokenProvider___RequestXPlatformAccessToken_d__19.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PlatformAuthenticationTokenProvider___RequestXPlatformAccessToken_d__19::*)()>(
    &::GlobalNamespace::__PlatformAuthenticationTokenProvider___RequestXPlatformAccessToken_d__19::MoveNext)> {
  constexpr static std::size_t size = 0x324;
  constexpr static std::size_t addrs = 0x263894c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlatformAuthenticationTokenProvider___RequestXPlatformAccessToken_d__19>::get(),
                                    "MoveNext", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__PlatformAuthenticationTokenProvider___RequestXPlatformAccessToken_d__19.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PlatformAuthenticationTokenProvider___RequestXPlatformAccessToken_d__19::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::__PlatformAuthenticationTokenProvider___RequestXPlatformAccessToken_d__19::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2638c70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlatformAuthenticationTokenProvider___RequestXPlatformAccessToken_d__19>::get(), "SetStateMachine",
        std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::__PlatformAuthenticationTokenProvider___RequestXPlatformAccessToken_d__19::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
inline void GlobalNamespace::__PlatformAuthenticationTokenProvider___RequestXPlatformAccessToken_d__19::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlatformAuthenticationTokenProvider___RequestXPlatformAccessToken_d__19>::get(),
                                  "MoveNext", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__PlatformAuthenticationTokenProvider___RequestXPlatformAccessToken_d__19::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PlatformAuthenticationTokenProvider___RequestXPlatformAccessToken_d__19>::get(), "SetStateMachine",
      std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::XPlatformAccessTokenData*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty:
// "::GlobalNamespace::PlatformAuthenticationTokenProvider*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::XPlatformAccessTokenData*>", modifiers: "", def_value:
// Some("{}") }]
constexpr ::GlobalNamespace::__PlatformAuthenticationTokenProvider___RequestXPlatformAccessToken_d__19::__PlatformAuthenticationTokenProvider___RequestXPlatformAccessToken_d__19(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::XPlatformAccessTokenData*> __t__builder,
    ::GlobalNamespace::PlatformAuthenticationTokenProvider* __4__this, ::System::Threading::CancellationToken cancellationToken,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::XPlatformAccessTokenData*> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->cancellationToken = cancellationToken;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__PlatformAuthenticationTokenProvider___RequestXPlatformAccessToken_d__19::__PlatformAuthenticationTokenProvider___RequestXPlatformAccessToken_d__19() {}
//  Writing Method size for method: ::GlobalNamespace::PlatformAuthenticationTokenProvider.get_hashedUserId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::PlatformAuthenticationTokenProvider::*)()>(
    &::GlobalNamespace::PlatformAuthenticationTokenProvider::get_hashedUserId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2637d8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlatformAuthenticationTokenProvider*>::get(),
                                                                               "get_hashedUserId", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlatformAuthenticationTokenProvider.get_userName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::PlatformAuthenticationTokenProvider::*)()>(
    &::GlobalNamespace::PlatformAuthenticationTokenProvider::get_userName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2637d94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlatformAuthenticationTokenProvider*>::get(),
                                                                               "get_userName", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlatformAuthenticationTokenProvider.get_platform
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__AuthenticationToken__Platform (::GlobalNamespace::PlatformAuthenticationTokenProvider::*)()>(
    &::GlobalNamespace::PlatformAuthenticationTokenProvider::get_platform)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2637d9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlatformAuthenticationTokenProvider*>::get(),
                                                                               "get_platform", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlatformAuthenticationTokenProvider._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PlatformAuthenticationTokenProvider::*)(
    ::GlobalNamespace::IPlatformUserModel*, ::GlobalNamespace::UserInfo*)>(&::GlobalNamespace::PlatformAuthenticationTokenProvider::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x2637da4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlatformAuthenticationTokenProvider*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IPlatformUserModel*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::UserInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlatformAuthenticationTokenProvider.GetAuthenticationToken
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::AuthenticationToken>* (
    ::GlobalNamespace::PlatformAuthenticationTokenProvider::*)()>(&::GlobalNamespace::PlatformAuthenticationTokenProvider::GetAuthenticationToken)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x2637e64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlatformAuthenticationTokenProvider*>::get(),
                                                                               "GetAuthenticationToken", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlatformAuthenticationTokenProvider.GetTokenPlatform
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__AuthenticationToken__Platform (::GlobalNamespace::PlatformAuthenticationTokenProvider::*)(
    ::GlobalNamespace::PlatformEnvironment)>(&::GlobalNamespace::PlatformAuthenticationTokenProvider::GetTokenPlatform)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2637f5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlatformAuthenticationTokenProvider*>::get(), "GetTokenPlatform", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlatformEnvironment>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlatformAuthenticationTokenProvider.GetXPlatformAccessToken
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::XPlatformAccessTokenData*>* (
    ::GlobalNamespace::PlatformAuthenticationTokenProvider::*)(::System::Threading::CancellationToken, bool)>(&::GlobalNamespace::PlatformAuthenticationTokenProvider::GetXPlatformAccessToken)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x2637fbc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlatformAuthenticationTokenProvider*>::get(), "GetXPlatformAccessToken", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlatformAuthenticationTokenProvider.RequestXPlatformAccessToken
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::XPlatformAccessTokenData*>* (
    ::GlobalNamespace::PlatformAuthenticationTokenProvider::*)(::System::Threading::CancellationToken)>(&::GlobalNamespace::PlatformAuthenticationTokenProvider::RequestXPlatformAccessToken)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x26380c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlatformAuthenticationTokenProvider*>::get(), "RequestXPlatformAccessToken", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::GlobalNamespace::IAuthenticationTokenProvider"
constexpr GlobalNamespace::PlatformAuthenticationTokenProvider::operator ::GlobalNamespace::IAuthenticationTokenProvider*() noexcept {
  return static_cast<::GlobalNamespace::IAuthenticationTokenProvider*>(static_cast<void*>(this));
}
constexpr ::GlobalNamespace::IPlatformUserModel*& GlobalNamespace::PlatformAuthenticationTokenProvider::__get__platformUserModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____platformUserModel;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IPlatformUserModel*> const& GlobalNamespace::PlatformAuthenticationTokenProvider::__get__platformUserModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____platformUserModel;
}
constexpr void GlobalNamespace::PlatformAuthenticationTokenProvider::__set__platformUserModel(::GlobalNamespace::IPlatformUserModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____platformUserModel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::PlatformAuthenticationTokenProvider::__get__userId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____userId;
}
constexpr ::StringW const& GlobalNamespace::PlatformAuthenticationTokenProvider::__get__userId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____userId;
}
constexpr void GlobalNamespace::PlatformAuthenticationTokenProvider::__set__userId(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____userId)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::PlatformAuthenticationTokenProvider::__get__userName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____userName;
}
constexpr ::StringW const& GlobalNamespace::PlatformAuthenticationTokenProvider::__get__userName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____userName;
}
constexpr void GlobalNamespace::PlatformAuthenticationTokenProvider::__set__userName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____userName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::PlatformAuthenticationTokenProvider::__get__hashedUserId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____hashedUserId;
}
constexpr ::StringW const& GlobalNamespace::PlatformAuthenticationTokenProvider::__get__hashedUserId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____hashedUserId;
}
constexpr void GlobalNamespace::PlatformAuthenticationTokenProvider::__set__hashedUserId(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____hashedUserId)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__AuthenticationToken__Platform& GlobalNamespace::PlatformAuthenticationTokenProvider::__get__platform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____platform;
}
constexpr ::GlobalNamespace::__AuthenticationToken__Platform const& GlobalNamespace::PlatformAuthenticationTokenProvider::__get__platform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____platform;
}
constexpr void GlobalNamespace::PlatformAuthenticationTokenProvider::__set__platform(::GlobalNamespace::__AuthenticationToken__Platform value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____platform = value;
}
constexpr ::GlobalNamespace::XPlatformAccessTokenData*& GlobalNamespace::PlatformAuthenticationTokenProvider::__get__cachedXPlatformAccessToken() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____cachedXPlatformAccessToken;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::XPlatformAccessTokenData*> const& GlobalNamespace::PlatformAuthenticationTokenProvider::__get__cachedXPlatformAccessToken() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____cachedXPlatformAccessToken;
}
constexpr void GlobalNamespace::PlatformAuthenticationTokenProvider::__set__cachedXPlatformAccessToken(::GlobalNamespace::XPlatformAccessTokenData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____cachedXPlatformAccessToken)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Threading::Tasks::Task_1<::GlobalNamespace::XPlatformAccessTokenData*>*& GlobalNamespace::PlatformAuthenticationTokenProvider::__get__xPlatformAccessTokenTask() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____xPlatformAccessTokenTask;
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task_1<::GlobalNamespace::XPlatformAccessTokenData*>*> const&
GlobalNamespace::PlatformAuthenticationTokenProvider::__get__xPlatformAccessTokenTask() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____xPlatformAccessTokenTask;
}
constexpr void GlobalNamespace::PlatformAuthenticationTokenProvider::__set__xPlatformAccessTokenTask(::System::Threading::Tasks::Task_1<::GlobalNamespace::XPlatformAccessTokenData*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____xPlatformAccessTokenTask)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::PlatformAuthenticationTokenProvider::__get__xPlatformTokenRetryDelayExpiration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____xPlatformTokenRetryDelayExpiration;
}
constexpr float_t const& GlobalNamespace::PlatformAuthenticationTokenProvider::__get__xPlatformTokenRetryDelayExpiration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____xPlatformTokenRetryDelayExpiration;
}
constexpr void GlobalNamespace::PlatformAuthenticationTokenProvider::__set__xPlatformTokenRetryDelayExpiration(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____xPlatformTokenRetryDelayExpiration = value;
}
inline ::StringW GlobalNamespace::PlatformAuthenticationTokenProvider::get_hashedUserId() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlatformAuthenticationTokenProvider*>::get(),
                                                                             "get_hashedUserId", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::PlatformAuthenticationTokenProvider::get_userName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlatformAuthenticationTokenProvider*>::get(),
                                                                             "get_userName", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::GlobalNamespace::__AuthenticationToken__Platform GlobalNamespace::PlatformAuthenticationTokenProvider::get_platform() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlatformAuthenticationTokenProvider*>::get(),
                                                                             "get_platform", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__AuthenticationToken__Platform, false>(this, ___internal_method);
}
inline ::GlobalNamespace::PlatformAuthenticationTokenProvider* GlobalNamespace::PlatformAuthenticationTokenProvider::New_ctor(::GlobalNamespace::IPlatformUserModel* platformUserModel,
                                                                                                                              ::GlobalNamespace::UserInfo* userInfo) {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::PlatformAuthenticationTokenProvider*>(platformUserModel, userInfo));
}
inline void GlobalNamespace::PlatformAuthenticationTokenProvider::_ctor(::GlobalNamespace::IPlatformUserModel* platformUserModel, ::GlobalNamespace::UserInfo* userInfo) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlatformAuthenticationTokenProvider*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IPlatformUserModel*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::UserInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, platformUserModel, userInfo);
}
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::AuthenticationToken>* GlobalNamespace::PlatformAuthenticationTokenProvider::GetAuthenticationToken() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlatformAuthenticationTokenProvider*>::get(),
                                                                             "GetAuthenticationToken", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::AuthenticationToken>*, false>(this, ___internal_method);
}
inline ::GlobalNamespace::__AuthenticationToken__Platform GlobalNamespace::PlatformAuthenticationTokenProvider::GetTokenPlatform(::GlobalNamespace::PlatformEnvironment tokenPlatformEnvironment) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlatformAuthenticationTokenProvider*>::get(), "GetTokenPlatform", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlatformEnvironment>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__AuthenticationToken__Platform, false>(this, ___internal_method, tokenPlatformEnvironment);
}
/// @param skipCache: bool (default: false)
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::XPlatformAccessTokenData*>*
GlobalNamespace::PlatformAuthenticationTokenProvider::GetXPlatformAccessToken(::System::Threading::CancellationToken cancellationToken, bool skipCache) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlatformAuthenticationTokenProvider*>::get(), "GetXPlatformAccessToken", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::XPlatformAccessTokenData*>*, false>(this, ___internal_method, cancellationToken, skipCache);
}
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::XPlatformAccessTokenData*>*
GlobalNamespace::PlatformAuthenticationTokenProvider::RequestXPlatformAccessToken(::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PlatformAuthenticationTokenProvider*>::get(), "RequestXPlatformAccessToken", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::XPlatformAccessTokenData*>*, false>(this, ___internal_method, cancellationToken);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlatformAuthenticationTokenProvider::PlatformAuthenticationTokenProvider() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__ReportingCallbackSample_def.hpp"
#include "Oculus/Platform/Models/zzzz__PlatformInitialize_def.hpp"
#include "UnityEngine/UI/zzzz__Text_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ReportingCallbackSample.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ReportingCallbackSample::*)()>(&::GlobalNamespace::ReportingCallbackSample::Start)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x26cce5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ReportingCallbackSample*>::get(), "Start",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ReportingCallbackSample.OnReportButtonIntentNotif
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ReportingCallbackSample::*)(::Oculus::Platform::Message_1<::StringW>*)>(
    &::GlobalNamespace::ReportingCallbackSample::OnReportButtonIntentNotif)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x26cd000;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ReportingCallbackSample*>::get(), "OnReportButtonIntentNotif", std::vector<Il2CppClass*>{},
                                   ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Message_1<::StringW>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ReportingCallbackSample.UpdateConsole
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ReportingCallbackSample::*)(::StringW)>(
    &::GlobalNamespace::ReportingCallbackSample::UpdateConsole)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x26ccf54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ReportingCallbackSample*>::get(), "UpdateConsole",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ReportingCallbackSample._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ReportingCallbackSample::*)()>(&::GlobalNamespace::ReportingCallbackSample::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26cd1ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ReportingCallbackSample*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ReportingCallbackSample._Start_b__2_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ReportingCallbackSample::*)(
    ::Oculus::Platform::Message_1<::Oculus::Platform::Models::PlatformInitialize*>*)>(&::GlobalNamespace::ReportingCallbackSample::_Start_b__2_0)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x26cd1f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ReportingCallbackSample*>::get(), "<Start>b__2_0", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Message_1<::Oculus::Platform::Models::PlatformInitialize*>*>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::UI::Text*& GlobalNamespace::ReportingCallbackSample::__get_InVRConsole() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___InVRConsole;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Text*> const& GlobalNamespace::ReportingCallbackSample::__get_InVRConsole() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___InVRConsole;
}
constexpr void GlobalNamespace::ReportingCallbackSample::__set_InVRConsole(::UnityEngine::UI::Text* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___InVRConsole)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UI::Text*& GlobalNamespace::ReportingCallbackSample::__get_DestinationsConsole() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___DestinationsConsole;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Text*> const& GlobalNamespace::ReportingCallbackSample::__get_DestinationsConsole() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___DestinationsConsole;
}
constexpr void GlobalNamespace::ReportingCallbackSample::__set_DestinationsConsole(::UnityEngine::UI::Text* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___DestinationsConsole)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::ReportingCallbackSample::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ReportingCallbackSample*>::get(), "Start",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::ReportingCallbackSample::OnReportButtonIntentNotif(::Oculus::Platform::Message_1<::StringW>* message) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ReportingCallbackSample*>::get(), "OnReportButtonIntentNotif", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Message_1<::StringW>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, message);
}
inline void GlobalNamespace::ReportingCallbackSample::UpdateConsole(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ReportingCallbackSample*>::get(), "UpdateConsole", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::GlobalNamespace::ReportingCallbackSample* GlobalNamespace::ReportingCallbackSample::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::ReportingCallbackSample*>());
}
inline void GlobalNamespace::ReportingCallbackSample::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ReportingCallbackSample*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::ReportingCallbackSample::_Start_b__2_0(::Oculus::Platform::Message_1<::Oculus::Platform::Models::PlatformInitialize*>* message) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ReportingCallbackSample*>::get(), "<Start>b__2_0", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::Message_1<::Oculus::Platform::Models::PlatformInitialize*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, message);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ReportingCallbackSample::ReportingCallbackSample() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
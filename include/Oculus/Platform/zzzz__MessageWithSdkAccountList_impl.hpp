#pragma once
#include "Oculus/Platform/Models/zzzz__SdkAccountList_impl.hpp"
#include "Oculus/Platform/zzzz__Message_1_impl.hpp"
#include "Oculus/Platform/zzzz__MessageWithSdkAccountList_def.hpp"
#include "Oculus/Platform/Models/zzzz__SdkAccountList_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::MessageWithSdkAccountList._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::MessageWithSdkAccountList::*)(void*)>(
    &::Oculus::Platform::MessageWithSdkAccountList::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x26ef7c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithSdkAccountList*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithSdkAccountList.GetSdkAccountList
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::SdkAccountList* (::Oculus::Platform::MessageWithSdkAccountList::*)()>(
    &::Oculus::Platform::MessageWithSdkAccountList::GetSdkAccountList)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x26f3888;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithSdkAccountList*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithSdkAccountList*>::get(), 60));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithSdkAccountList.GetDataFromMessage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::SdkAccountList* (::Oculus::Platform::MessageWithSdkAccountList::*)(void*)>(
    &::Oculus::Platform::MessageWithSdkAccountList::GetDataFromMessage)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x26f38c4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithSdkAccountList*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithSdkAccountList*>::get(), 72));
    return ___internal_method;
  }
};
inline ::Oculus::Platform::MessageWithSdkAccountList* Oculus::Platform::MessageWithSdkAccountList::New_ctor(void* c_message) {
  return THROW_UNLESS(::il2cpp_utils::New<::Oculus::Platform::MessageWithSdkAccountList*>(c_message));
}
inline void Oculus::Platform::MessageWithSdkAccountList::_ctor(void* c_message) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithSdkAccountList*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, c_message);
}
inline ::Oculus::Platform::Models::SdkAccountList* Oculus::Platform::MessageWithSdkAccountList::GetSdkAccountList() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithSdkAccountList*>::get(),
                                                                             "GetSdkAccountList", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::SdkAccountList*, false>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::SdkAccountList* Oculus::Platform::MessageWithSdkAccountList::GetDataFromMessage(void* c_message) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithSdkAccountList*>::get(), "GetDataFromMessage",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::SdkAccountList*, false>(this, ___internal_method, c_message);
}
// Ctor Parameters []
constexpr ::Oculus::Platform::MessageWithSdkAccountList::MessageWithSdkAccountList() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
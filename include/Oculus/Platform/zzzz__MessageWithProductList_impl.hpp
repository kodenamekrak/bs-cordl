#pragma once
#include "Oculus/Platform/Models/zzzz__ProductList_impl.hpp"
#include "Oculus/Platform/zzzz__Message_1_impl.hpp"
#include "Oculus/Platform/zzzz__MessageWithProductList_def.hpp"
#include "Oculus/Platform/Models/zzzz__ProductList_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::MessageWithProductList._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::MessageWithProductList::*)(void*)>(&::Oculus::Platform::MessageWithProductList::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x26ef660;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithProductList*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithProductList.GetProductList
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::ProductList* (::Oculus::Platform::MessageWithProductList::*)()>(
    &::Oculus::Platform::MessageWithProductList::GetProductList)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x26f3528;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithProductList*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithProductList*>::get(), 56));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::MessageWithProductList.GetDataFromMessage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Models::ProductList* (::Oculus::Platform::MessageWithProductList::*)(void*)>(
    &::Oculus::Platform::MessageWithProductList::GetDataFromMessage)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x26f3564;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithProductList*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithProductList*>::get(), 72));
    return ___internal_method;
  }
};
inline ::Oculus::Platform::MessageWithProductList* Oculus::Platform::MessageWithProductList::New_ctor(void* c_message) {
  return THROW_UNLESS(::il2cpp_utils::New<::Oculus::Platform::MessageWithProductList*>(c_message));
}
inline void Oculus::Platform::MessageWithProductList::_ctor(void* c_message) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithProductList*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, c_message);
}
inline ::Oculus::Platform::Models::ProductList* Oculus::Platform::MessageWithProductList::GetProductList() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithProductList*>::get(),
                                                                             "GetProductList", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::ProductList*, false>(this, ___internal_method);
}
inline ::Oculus::Platform::Models::ProductList* Oculus::Platform::MessageWithProductList::GetDataFromMessage(void* c_message) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::MessageWithProductList*>::get(), "GetDataFromMessage",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Models::ProductList*, false>(this, ___internal_method, c_message);
}
// Ctor Parameters []
constexpr ::Oculus::Platform::MessageWithProductList::MessageWithProductList() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
#pragma once
#include "System/Configuration/zzzz__ConfigurationElement_impl.hpp"
#include "System/Net/Configuration/zzzz__ServicePointManagerElement_def.hpp"
#include "System/Configuration/zzzz__ConfigurationPropertyCollection_def.hpp"
//  Writing Method size for method: ::System::Net::Configuration::ServicePointManagerElement._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Configuration::ServicePointManagerElement::*)()>(
    &::System::Net::Configuration::ServicePointManagerElement::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x2945064;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Configuration::ServicePointManagerElement*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Configuration::ServicePointManagerElement.get_Properties
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Configuration::ConfigurationPropertyCollection* (
    ::System::Net::Configuration::ServicePointManagerElement::*)()>(&::System::Net::Configuration::ServicePointManagerElement::get_Properties)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x294509c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Configuration::ServicePointManagerElement*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Configuration::ServicePointManagerElement*>::get(), 4));
    return ___internal_method;
  }
};
inline ::System::Net::Configuration::ServicePointManagerElement* System::Net::Configuration::ServicePointManagerElement::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Net::Configuration::ServicePointManagerElement*>());
}
inline void System::Net::Configuration::ServicePointManagerElement::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Configuration::ServicePointManagerElement*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Configuration::ConfigurationPropertyCollection* System::Net::Configuration::ServicePointManagerElement::get_Properties() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Configuration::ServicePointManagerElement*>::get(),
                                                                             "get_Properties", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Configuration::ConfigurationPropertyCollection*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Net::Configuration::ServicePointManagerElement::ServicePointManagerElement() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
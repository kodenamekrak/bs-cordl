#pragma once
#include "System/Configuration/zzzz__ConfigurationSectionGroup_impl.hpp"
#include "System/Net/Configuration/zzzz__NetSectionGroup_def.hpp"
//  Writing Method size for method: ::System::Net::Configuration::NetSectionGroup._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Configuration::NetSectionGroup::*)()>(&::System::Net::Configuration::NetSectionGroup::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x2944f4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Configuration::NetSectionGroup*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline ::System::Net::Configuration::NetSectionGroup* System::Net::Configuration::NetSectionGroup::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Net::Configuration::NetSectionGroup*>());
}
inline void System::Net::Configuration::NetSectionGroup::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Configuration::NetSectionGroup*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Net::Configuration::NetSectionGroup::NetSectionGroup() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
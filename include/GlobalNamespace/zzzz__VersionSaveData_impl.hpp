#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__VersionSaveData_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::VersionSaveData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::VersionSaveData::*)()>(&::GlobalNamespace::VersionSaveData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x237284c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VersionSaveData*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::VersionSaveData::__get_version() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___version;
}
constexpr ::StringW const& GlobalNamespace::VersionSaveData::__get_version() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___version;
}
constexpr void GlobalNamespace::VersionSaveData::__set_version(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___version)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::VersionSaveData* GlobalNamespace::VersionSaveData::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::VersionSaveData*>());
}
inline void GlobalNamespace::VersionSaveData::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VersionSaveData*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::VersionSaveData::VersionSaveData() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__MurmurHash_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MurmurHash.MurmurHash2
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (*)(::StringW)>(&::GlobalNamespace::MurmurHash::MurmurHash2)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x12a3c84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MurmurHash*>::get(), "MurmurHash2", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
inline uint32_t GlobalNamespace::MurmurHash::MurmurHash2(::StringW key) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MurmurHash*>::get(), "MurmurHash2", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(nullptr, ___internal_method, key);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MurmurHash::MurmurHash() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
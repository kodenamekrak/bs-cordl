#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Zenject/zzzz__SubContainerCreatorUtil_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "Zenject/zzzz__SubContainerCreatorBindInfo_def.hpp"
//  Writing Method size for method: ::Zenject::SubContainerCreatorUtil.ApplyBindSettings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Zenject::SubContainerCreatorBindInfo*, ::Zenject::DiContainer*)>(
    &::Zenject::SubContainerCreatorUtil::ApplyBindSettings)> {
  constexpr static std::size_t size = 0x304;
  constexpr static std::size_t addrs = 0x2f0b324;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SubContainerCreatorUtil*>::get(), "ApplyBindSettings", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::SubContainerCreatorBindInfo*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get() })));
    return ___internal_method;
  }
};
inline void Zenject::SubContainerCreatorUtil::ApplyBindSettings(::Zenject::SubContainerCreatorBindInfo* subContainerBindInfo, ::Zenject::DiContainer* subContainer) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::SubContainerCreatorUtil*>::get(), "ApplyBindSettings", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::SubContainerCreatorBindInfo*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, subContainerBindInfo, subContainer);
}
// Ctor Parameters []
constexpr ::Zenject::SubContainerCreatorUtil::SubContainerCreatorUtil() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
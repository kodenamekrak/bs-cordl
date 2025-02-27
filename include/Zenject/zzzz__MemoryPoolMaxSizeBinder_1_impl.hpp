#pragma once
// IWYU pragma private; include "Zenject/MemoryPoolMaxSizeBinder_1.hpp"
#include "Zenject/zzzz__MemoryPoolExpandBinder_1_impl.hpp"
#include "Zenject/zzzz__MemoryPoolMaxSizeBinder_1_def.hpp"
#include "Zenject/zzzz__BindInfo_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "Zenject/zzzz__FactoryBindInfo_def.hpp"
#include "Zenject/zzzz__MemoryPoolBindInfo_def.hpp"
#include "Zenject/zzzz__MemoryPoolExpandBinder_1_def.hpp"
template <typename TContract>
inline void Zenject::MemoryPoolMaxSizeBinder_1<TContract>::_ctor(::Zenject::DiContainer* bindContainer, ::Zenject::BindInfo* bindInfo, ::Zenject::FactoryBindInfo* factoryBindInfo,
                                                                 ::Zenject::MemoryPoolBindInfo* poolBindInfo) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::MemoryPoolMaxSizeBinder_1<TContract>*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::BindInfo*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::FactoryBindInfo*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::MemoryPoolBindInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bindContainer, bindInfo, factoryBindInfo, poolBindInfo);
}
template <typename TContract> inline ::Zenject::MemoryPoolExpandBinder_1<TContract>* Zenject::MemoryPoolMaxSizeBinder_1<TContract>::WithMaxSize(int32_t size) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::MemoryPoolMaxSizeBinder_1<TContract>*>::get(), "WithMaxSize",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::MemoryPoolExpandBinder_1<TContract>*, false>(this, ___internal_method, size);
}
template <typename TContract>
inline ::Zenject::MemoryPoolMaxSizeBinder_1<TContract>* Zenject::MemoryPoolMaxSizeBinder_1<TContract>::New_ctor(::Zenject::DiContainer* bindContainer, ::Zenject::BindInfo* bindInfo,
                                                                                                                ::Zenject::FactoryBindInfo* factoryBindInfo,
                                                                                                                ::Zenject::MemoryPoolBindInfo* poolBindInfo) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Zenject::MemoryPoolMaxSizeBinder_1<TContract>*>(bindContainer, bindInfo, factoryBindInfo, poolBindInfo));
}
// Ctor Parameters []
template <typename TContract> constexpr ::Zenject::MemoryPoolMaxSizeBinder_1<TContract>::MemoryPoolMaxSizeBinder_1() {}

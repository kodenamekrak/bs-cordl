#pragma once
// IWYU pragma private; include "Zenject/FactoryToChoiceBinder_5.hpp"
#include "Zenject/zzzz__FactoryFromBinder_5_impl.hpp"
#include "Zenject/zzzz__FactoryToChoiceBinder_5_def.hpp"
#include "Zenject/zzzz__BindInfo_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "Zenject/zzzz__FactoryBindInfo_def.hpp"
#include "Zenject/zzzz__FactoryFromBinder_5_def.hpp"
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TContract>
inline void Zenject::FactoryToChoiceBinder_5<TParam1, TParam2, TParam3, TParam4, TContract>::_ctor(::Zenject::DiContainer* bindContainer, ::Zenject::BindInfo* bindInfo,
                                                                                                   ::Zenject::FactoryBindInfo* factoryBindInfo) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::FactoryToChoiceBinder_5<TParam1, TParam2, TParam3, TParam4, TContract>*>::get(),
                                               ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::BindInfo*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::FactoryBindInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bindContainer, bindInfo, factoryBindInfo);
}
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TContract>
inline ::Zenject::FactoryFromBinder_5<TParam1, TParam2, TParam3, TParam4, TContract>* Zenject::FactoryToChoiceBinder_5<TParam1, TParam2, TParam3, TParam4, TContract>::ToSelf() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::FactoryToChoiceBinder_5<TParam1, TParam2, TParam3, TParam4, TContract>*>::get(),
                                               "ToSelf", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Zenject::FactoryFromBinder_5<TParam1, TParam2, TParam3, TParam4, TContract>*, false>(this, ___internal_method);
}
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TContract>
template <typename TConcrete>
inline ::Zenject::FactoryFromBinder_5<TParam1, TParam2, TParam3, TParam4, TConcrete>* Zenject::FactoryToChoiceBinder_5<TParam1, TParam2, TParam3, TParam4, TContract>::To() {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::FactoryToChoiceBinder_5<TParam1, TParam2, TParam3, TParam4, TContract>*>::get(), "To",
                                  std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TConcrete>::get() }, ::std::span<Il2CppType const* const, 0>())));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TConcrete>::get() }));
  return ::cordl_internals::RunMethodRethrow<::Zenject::FactoryFromBinder_5<TParam1, TParam2, TParam3, TParam4, TConcrete>*, false>(this, ___internal_method);
}
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TContract>
inline ::Zenject::FactoryToChoiceBinder_5<TParam1, TParam2, TParam3, TParam4, TContract>*
Zenject::FactoryToChoiceBinder_5<TParam1, TParam2, TParam3, TParam4, TContract>::New_ctor(::Zenject::DiContainer* bindContainer, ::Zenject::BindInfo* bindInfo,
                                                                                          ::Zenject::FactoryBindInfo* factoryBindInfo) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Zenject::FactoryToChoiceBinder_5<TParam1, TParam2, TParam3, TParam4, TContract>*>(bindContainer, bindInfo, factoryBindInfo));
}
// Ctor Parameters []
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TContract>
constexpr ::Zenject::FactoryToChoiceBinder_5<TParam1, TParam2, TParam3, TParam4, TContract>::FactoryToChoiceBinder_5() {}

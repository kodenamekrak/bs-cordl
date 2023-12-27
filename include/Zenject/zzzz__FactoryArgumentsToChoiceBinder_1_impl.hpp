#pragma once
#include "Zenject/zzzz__FactoryToChoiceBinder_1_impl.hpp"
#include "Zenject/zzzz__FactoryArgumentsToChoiceBinder_1_def.hpp"
#include "Zenject/zzzz__FactoryToChoiceBinder_1_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "Zenject/zzzz__BindInfo_def.hpp"
#include "Zenject/zzzz__TypeValuePair_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Zenject/zzzz__FactoryBindInfo_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
template <typename TContract>
inline ::Zenject::FactoryArgumentsToChoiceBinder_1<TContract>* Zenject::FactoryArgumentsToChoiceBinder_1<TContract>::New_ctor(::Zenject::DiContainer* bindContainer, ::Zenject::BindInfo* bindInfo,
                                                                                                                              ::Zenject::FactoryBindInfo* factoryBindInfo) {
  return THROW_UNLESS(::il2cpp_utils::New<::Zenject::FactoryArgumentsToChoiceBinder_1<TContract>*>(bindContainer, bindInfo, factoryBindInfo));
}
template <typename TContract>
inline void Zenject::FactoryArgumentsToChoiceBinder_1<TContract>::_ctor(::Zenject::DiContainer* bindContainer, ::Zenject::BindInfo* bindInfo, ::Zenject::FactoryBindInfo* factoryBindInfo) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::FactoryArgumentsToChoiceBinder_1<TContract>*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::BindInfo*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::FactoryBindInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bindContainer, bindInfo, factoryBindInfo);
}
template <typename TContract> template <typename T> inline ::Zenject::FactoryToChoiceBinder_1<TContract>* Zenject::FactoryArgumentsToChoiceBinder_1<TContract>::WithFactoryArguments(T param) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::FactoryArgumentsToChoiceBinder_1<TContract>*>::get(), "WithFactoryArguments",
                                               std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<::Zenject::FactoryToChoiceBinder_1<TContract>*, false>(this, ___internal_method, param);
}
template <typename TContract>
template <typename TParam1, typename TParam2>
inline ::Zenject::FactoryToChoiceBinder_1<TContract>* Zenject::FactoryArgumentsToChoiceBinder_1<TContract>::WithFactoryArguments(TParam1 param1, TParam2 param2) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::FactoryArgumentsToChoiceBinder_1<TContract>*>::get(), "WithFactoryArguments",
      std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam2>::get() },
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam2>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(),
                                                                                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam2>::get() }));
  return ::cordl_internals::RunMethodRethrow<::Zenject::FactoryToChoiceBinder_1<TContract>*, false>(this, ___internal_method, param1, param2);
}
template <typename TContract>
template <typename TParam1, typename TParam2, typename TParam3>
inline ::Zenject::FactoryToChoiceBinder_1<TContract>* Zenject::FactoryArgumentsToChoiceBinder_1<TContract>::WithFactoryArguments(TParam1 param1, TParam2 param2, TParam3 param3) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::FactoryArgumentsToChoiceBinder_1<TContract>*>::get(), "WithFactoryArguments",
      std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam2>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam3>::get() },
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam2>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam3>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(),
                                                                                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam2>::get(),
                                                                                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam3>::get() }));
  return ::cordl_internals::RunMethodRethrow<::Zenject::FactoryToChoiceBinder_1<TContract>*, false>(this, ___internal_method, param1, param2, param3);
}
template <typename TContract>
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4>
inline ::Zenject::FactoryToChoiceBinder_1<TContract>* Zenject::FactoryArgumentsToChoiceBinder_1<TContract>::WithFactoryArguments(TParam1 param1, TParam2 param2, TParam3 param3, TParam4 param4) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::FactoryArgumentsToChoiceBinder_1<TContract>*>::get(), "WithFactoryArguments",
      std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam2>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam4>::get() },
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam2>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam4>::get() })));
  static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
      ___internal_method_base,
      std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam2>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam4>::get() }));
  return ::cordl_internals::RunMethodRethrow<::Zenject::FactoryToChoiceBinder_1<TContract>*, false>(this, ___internal_method, param1, param2, param3, param4);
}
template <typename TContract>
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5>
inline ::Zenject::FactoryToChoiceBinder_1<TContract>* Zenject::FactoryArgumentsToChoiceBinder_1<TContract>::WithFactoryArguments(TParam1 param1, TParam2 param2, TParam3 param3, TParam4 param4,
                                                                                                                                 TParam5 param5) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::FactoryArgumentsToChoiceBinder_1<TContract>*>::get(), "WithFactoryArguments",
      std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam2>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam4>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam5>::get() },
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam2>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam4>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam5>::get() })));
  static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
      ___internal_method_base,
      std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam2>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam4>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam5>::get() }));
  return ::cordl_internals::RunMethodRethrow<::Zenject::FactoryToChoiceBinder_1<TContract>*, false>(this, ___internal_method, param1, param2, param3, param4, param5);
}
template <typename TContract>
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6>
inline ::Zenject::FactoryToChoiceBinder_1<TContract>* Zenject::FactoryArgumentsToChoiceBinder_1<TContract>::WithFactoryArguments(TParam1 param1, TParam2 param2, TParam3 param3, TParam4 param4,
                                                                                                                                 TParam5 param5, TParam6 param6) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::FactoryArgumentsToChoiceBinder_1<TContract>*>::get(), "WithFactoryArguments",
      std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam2>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam4>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam5>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam6>::get() },
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam2>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam4>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam5>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TParam6>::get() })));
  static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
      ___internal_method_base,
      std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam2>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam4>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam5>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam6>::get() }));
  return ::cordl_internals::RunMethodRethrow<::Zenject::FactoryToChoiceBinder_1<TContract>*, false>(this, ___internal_method, param1, param2, param3, param4, param5, param6);
}
template <typename TContract>
inline ::Zenject::FactoryToChoiceBinder_1<TContract>* Zenject::FactoryArgumentsToChoiceBinder_1<TContract>::WithFactoryArguments(::ArrayW<::System::Object*, ::Array<::System::Object*>*> args) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::FactoryArgumentsToChoiceBinder_1<TContract>*>::get(), "WithFactoryArguments", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::FactoryToChoiceBinder_1<TContract>*, false>(this, ___internal_method, args);
}
template <typename TContract>
inline ::Zenject::FactoryToChoiceBinder_1<TContract>*
Zenject::FactoryArgumentsToChoiceBinder_1<TContract>::WithFactoryArgumentsExplicit(::System::Collections::Generic::IEnumerable_1<::Zenject::TypeValuePair>* extraArgs) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::FactoryArgumentsToChoiceBinder_1<TContract>*>::get(), "WithFactoryArgumentsExplicit", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::Zenject::TypeValuePair>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::FactoryToChoiceBinder_1<TContract>*, false>(this, ___internal_method, extraArgs);
}
// Ctor Parameters []
template <typename TContract> constexpr ::Zenject::FactoryArgumentsToChoiceBinder_1<TContract>::FactoryArgumentsToChoiceBinder_1() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
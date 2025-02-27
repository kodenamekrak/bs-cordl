#pragma once
// IWYU pragma private; include "Zenject/ConcreteIdBinderGeneric_1.hpp"
#include "Zenject/zzzz__ConcreteBinderGeneric_1_impl.hpp"
#include "Zenject/zzzz__ConcreteIdBinderGeneric_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Zenject/zzzz__BindInfo_def.hpp"
#include "Zenject/zzzz__BindStatement_def.hpp"
#include "Zenject/zzzz__ConcreteBinderGeneric_1_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
template <typename TContract>
inline void Zenject::ConcreteIdBinderGeneric_1<TContract>::_ctor(::Zenject::DiContainer* bindContainer, ::Zenject::BindInfo* bindInfo, ::Zenject::BindStatement* bindStatement) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ConcreteIdBinderGeneric_1<TContract>*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::BindInfo*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::BindStatement*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bindContainer, bindInfo, bindStatement);
}
template <typename TContract> inline ::Zenject::ConcreteBinderGeneric_1<TContract>* Zenject::ConcreteIdBinderGeneric_1<TContract>::WithId(::System::Object* identifier) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ConcreteIdBinderGeneric_1<TContract>*>::get(), "WithId", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::ConcreteBinderGeneric_1<TContract>*, false>(this, ___internal_method, identifier);
}
template <typename TContract>
inline ::Zenject::ConcreteIdBinderGeneric_1<TContract>* Zenject::ConcreteIdBinderGeneric_1<TContract>::New_ctor(::Zenject::DiContainer* bindContainer, ::Zenject::BindInfo* bindInfo,
                                                                                                                ::Zenject::BindStatement* bindStatement) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Zenject::ConcreteIdBinderGeneric_1<TContract>*>(bindContainer, bindInfo, bindStatement));
}
// Ctor Parameters []
template <typename TContract> constexpr ::Zenject::ConcreteIdBinderGeneric_1<TContract>::ConcreteIdBinderGeneric_1() {}

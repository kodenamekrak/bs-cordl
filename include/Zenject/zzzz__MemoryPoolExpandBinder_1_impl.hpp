#pragma once
// IWYU pragma private; include "Zenject/MemoryPoolExpandBinder_1.hpp"
#include "Zenject/zzzz__FactoryArgumentsToChoiceBinder_1_impl.hpp"
#include "Zenject/zzzz__MemoryPoolExpandBinder_1_def.hpp"
#include "Zenject/zzzz__BindInfo_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "Zenject/zzzz__FactoryArgumentsToChoiceBinder_1_def.hpp"
#include "Zenject/zzzz__FactoryBindInfo_def.hpp"
#include "Zenject/zzzz__MemoryPoolBindInfo_def.hpp"
template <typename TContract> constexpr ::Zenject::MemoryPoolBindInfo*& Zenject::MemoryPoolExpandBinder_1<TContract>::__cordl_internal_get__MemoryPoolBindInfo_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____MemoryPoolBindInfo_k__BackingField;
}
template <typename TContract> constexpr ::Zenject::MemoryPoolBindInfo* const& Zenject::MemoryPoolExpandBinder_1<TContract>::__cordl_internal_get__MemoryPoolBindInfo_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____MemoryPoolBindInfo_k__BackingField;
}
template <typename TContract> constexpr void Zenject::MemoryPoolExpandBinder_1<TContract>::__cordl_internal_set__MemoryPoolBindInfo_k__BackingField(::Zenject::MemoryPoolBindInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->____MemoryPoolBindInfo_k__BackingField, value);
}
template <typename TContract>
inline void Zenject::MemoryPoolExpandBinder_1<TContract>::_ctor(::Zenject::DiContainer* bindContainer, ::Zenject::BindInfo* bindInfo, ::Zenject::FactoryBindInfo* factoryBindInfo,
                                                                ::Zenject::MemoryPoolBindInfo* poolBindInfo) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::MemoryPoolExpandBinder_1<TContract>*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::BindInfo*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::FactoryBindInfo*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::MemoryPoolBindInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bindContainer, bindInfo, factoryBindInfo, poolBindInfo);
}
template <typename TContract> inline ::Zenject::MemoryPoolBindInfo* Zenject::MemoryPoolExpandBinder_1<TContract>::get_MemoryPoolBindInfo() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::MemoryPoolExpandBinder_1<TContract>*>::get(),
                                                                             "get_MemoryPoolBindInfo", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Zenject::MemoryPoolBindInfo*, false>(this, ___internal_method);
}
template <typename TContract> inline void Zenject::MemoryPoolExpandBinder_1<TContract>::set_MemoryPoolBindInfo(::Zenject::MemoryPoolBindInfo* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::MemoryPoolExpandBinder_1<TContract>*>::get(), "set_MemoryPoolBindInfo", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::MemoryPoolBindInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename TContract> inline ::Zenject::FactoryArgumentsToChoiceBinder_1<TContract>* Zenject::MemoryPoolExpandBinder_1<TContract>::ExpandByOneAtATime(bool showExpandWarning) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::MemoryPoolExpandBinder_1<TContract>*>::get(), "ExpandByOneAtATime",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::FactoryArgumentsToChoiceBinder_1<TContract>*, false>(this, ___internal_method, showExpandWarning);
}
template <typename TContract> inline ::Zenject::FactoryArgumentsToChoiceBinder_1<TContract>* Zenject::MemoryPoolExpandBinder_1<TContract>::ExpandByDoubling(bool showExpandWarning) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::MemoryPoolExpandBinder_1<TContract>*>::get(), "ExpandByDoubling",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Zenject::FactoryArgumentsToChoiceBinder_1<TContract>*, false>(this, ___internal_method, showExpandWarning);
}
template <typename TContract>
inline ::Zenject::MemoryPoolExpandBinder_1<TContract>* Zenject::MemoryPoolExpandBinder_1<TContract>::New_ctor(::Zenject::DiContainer* bindContainer, ::Zenject::BindInfo* bindInfo,
                                                                                                              ::Zenject::FactoryBindInfo* factoryBindInfo,
                                                                                                              ::Zenject::MemoryPoolBindInfo* poolBindInfo) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Zenject::MemoryPoolExpandBinder_1<TContract>*>(bindContainer, bindInfo, factoryBindInfo, poolBindInfo));
}
// Ctor Parameters []
template <typename TContract> constexpr ::Zenject::MemoryPoolExpandBinder_1<TContract>::MemoryPoolExpandBinder_1() {}

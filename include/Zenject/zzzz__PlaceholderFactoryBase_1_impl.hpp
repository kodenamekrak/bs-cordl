#pragma once
// IWYU pragma private; include "Zenject/PlaceholderFactoryBase_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Zenject/zzzz__IPlaceholderFactory_impl.hpp"
#include "Zenject/zzzz__IValidatable_impl.hpp"
#include "Zenject/zzzz__PlaceholderFactoryBase_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "Zenject/zzzz__IProvider_def.hpp"
#include "Zenject/zzzz__InjectContext_def.hpp"
#include "Zenject/zzzz__InjectTypeInfo_def.hpp"
#include "Zenject/zzzz__TypeValuePair_def.hpp"
template <typename TValue> constexpr ::Zenject::IProvider*& Zenject::PlaceholderFactoryBase_1<TValue>::__cordl_internal_get__provider() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____provider;
}
template <typename TValue> constexpr ::Zenject::IProvider* const& Zenject::PlaceholderFactoryBase_1<TValue>::__cordl_internal_get__provider() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____provider;
}
template <typename TValue> constexpr void Zenject::PlaceholderFactoryBase_1<TValue>::__cordl_internal_set__provider(::Zenject::IProvider* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->____provider, value);
}
template <typename TValue> constexpr ::Zenject::InjectContext*& Zenject::PlaceholderFactoryBase_1<TValue>::__cordl_internal_get__injectContext() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____injectContext;
}
template <typename TValue> constexpr ::Zenject::InjectContext* const& Zenject::PlaceholderFactoryBase_1<TValue>::__cordl_internal_get__injectContext() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____injectContext;
}
template <typename TValue> constexpr void Zenject::PlaceholderFactoryBase_1<TValue>::__cordl_internal_set__injectContext(::Zenject::InjectContext* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->____injectContext, value);
}
template <typename TValue> inline void Zenject::PlaceholderFactoryBase_1<TValue>::Construct(::Zenject::IProvider* provider, ::Zenject::InjectContext* injectContext) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::PlaceholderFactoryBase_1<TValue>*>::get(), "Construct", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::IProvider*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::InjectContext*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, provider, injectContext);
}
template <typename TValue> inline TValue Zenject::PlaceholderFactoryBase_1<TValue>::CreateInternal(::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* extraArgs) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::PlaceholderFactoryBase_1<TValue>*>::get(), "CreateInternal", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<TValue, false>(this, ___internal_method, extraArgs);
}
template <typename TValue> inline void Zenject::PlaceholderFactoryBase_1<TValue>::Validate() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::PlaceholderFactoryBase_1<TValue>*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TValue> inline ::System::Collections::Generic::IEnumerable_1<::System::Type*>* Zenject::PlaceholderFactoryBase_1<TValue>::get_ParamTypes() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::PlaceholderFactoryBase_1<TValue>*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::System::Type*>*, false>(this, ___internal_method);
}
template <typename TValue> inline void Zenject::PlaceholderFactoryBase_1<TValue>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::PlaceholderFactoryBase_1<TValue>*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TValue> inline void Zenject::PlaceholderFactoryBase_1<TValue>::__zenInjectMethod0(::System::Object* P_0, ::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_1) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::PlaceholderFactoryBase_1<TValue>*>::get(), "__zenInjectMethod0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, P_0, P_1);
}
template <typename TValue> inline ::Zenject::InjectTypeInfo* Zenject::PlaceholderFactoryBase_1<TValue>::__zenCreateInjectTypeInfo() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::PlaceholderFactoryBase_1<TValue>*>::get(),
                                                                             "__zenCreateInjectTypeInfo", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(nullptr, ___internal_method);
}
template <typename TValue> inline ::Zenject::PlaceholderFactoryBase_1<TValue>* Zenject::PlaceholderFactoryBase_1<TValue>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Zenject::PlaceholderFactoryBase_1<TValue>*>());
}
/// @brief Convert operator to "::Zenject::IPlaceholderFactory"
template <typename TValue> constexpr Zenject::PlaceholderFactoryBase_1<TValue>::operator ::Zenject::IPlaceholderFactory*() noexcept {
  return static_cast<::Zenject::IPlaceholderFactory*>(static_cast<void*>(this));
}
/// @brief Convert to "::Zenject::IPlaceholderFactory"
template <typename TValue> constexpr ::Zenject::IPlaceholderFactory* Zenject::PlaceholderFactoryBase_1<TValue>::i___Zenject__IPlaceholderFactory() noexcept {
  return static_cast<::Zenject::IPlaceholderFactory*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Zenject::IValidatable"
template <typename TValue> constexpr Zenject::PlaceholderFactoryBase_1<TValue>::operator ::Zenject::IValidatable*() noexcept {
  return static_cast<::Zenject::IValidatable*>(static_cast<void*>(this));
}
/// @brief Convert to "::Zenject::IValidatable"
template <typename TValue> constexpr ::Zenject::IValidatable* Zenject::PlaceholderFactoryBase_1<TValue>::i___Zenject__IValidatable() noexcept {
  return static_cast<::Zenject::IValidatable*>(static_cast<void*>(this));
}
// Ctor Parameters []
template <typename TValue> constexpr ::Zenject::PlaceholderFactoryBase_1<TValue>::PlaceholderFactoryBase_1() {}

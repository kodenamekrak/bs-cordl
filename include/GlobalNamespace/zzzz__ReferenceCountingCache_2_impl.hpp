#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__ReferenceCountingCache_2_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "GlobalNamespace/zzzz__IReferenceCountingCache_2_def.hpp"
/// @brief Convert operator to "::GlobalNamespace::IReferenceCountingCache_2<TKey,TValue>"
template <typename TKey, typename TValue> constexpr GlobalNamespace::ReferenceCountingCache_2<TKey, TValue>::operator ::GlobalNamespace::IReferenceCountingCache_2<TKey, TValue>*() noexcept {
  return static_cast<::GlobalNamespace::IReferenceCountingCache_2<TKey, TValue>*>(static_cast<void*>(this));
}
template <typename TKey, typename TValue> constexpr ::System::Collections::Generic::Dictionary_2<TKey, TValue>*& GlobalNamespace::ReferenceCountingCache_2<TKey, TValue>::__get__items() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____items;
}
template <typename TKey, typename TValue>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<TKey, TValue>*> const& GlobalNamespace::ReferenceCountingCache_2<TKey, TValue>::__get__items() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____items;
}
template <typename TKey, typename TValue> constexpr void GlobalNamespace::ReferenceCountingCache_2<TKey, TValue>::__set__items(::System::Collections::Generic::Dictionary_2<TKey, TValue>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____items)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TKey, typename TValue> constexpr ::System::Collections::Generic::Dictionary_2<TKey, int32_t>*& GlobalNamespace::ReferenceCountingCache_2<TKey, TValue>::__get__referencesCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____referencesCount;
}
template <typename TKey, typename TValue>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<TKey, int32_t>*> const&
GlobalNamespace::ReferenceCountingCache_2<TKey, TValue>::__get__referencesCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____referencesCount;
}
template <typename TKey, typename TValue>
constexpr void GlobalNamespace::ReferenceCountingCache_2<TKey, TValue>::__set__referencesCount(::System::Collections::Generic::Dictionary_2<TKey, int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____referencesCount)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TKey, typename TValue> inline int32_t GlobalNamespace::ReferenceCountingCache_2<TKey, TValue>::Insert(TKey key, TValue item) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ReferenceCountingCache_2<TKey, TValue>*>::get(), "Insert", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, key, item);
}
template <typename TKey, typename TValue> inline int32_t GlobalNamespace::ReferenceCountingCache_2<TKey, TValue>::AddReference(TKey key) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ReferenceCountingCache_2<TKey, TValue>*>::get(), "AddReference",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, key);
}
template <typename TKey, typename TValue> inline int32_t GlobalNamespace::ReferenceCountingCache_2<TKey, TValue>::RemoveReference(TKey key) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ReferenceCountingCache_2<TKey, TValue>*>::get(), "RemoveReference",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, key);
}
template <typename TKey, typename TValue> inline int32_t GlobalNamespace::ReferenceCountingCache_2<TKey, TValue>::GetReferenceCount(TKey key) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ReferenceCountingCache_2<TKey, TValue>*>::get(), "GetReferenceCount",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, key);
}
template <typename TKey, typename TValue> inline bool GlobalNamespace::ReferenceCountingCache_2<TKey, TValue>::TryGet(TKey key, ByRef<TValue> result) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ReferenceCountingCache_2<TKey, TValue>*>::get(), "TryGet", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<TValue>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, key, result);
}
template <typename TKey, typename TValue> inline void GlobalNamespace::ReferenceCountingCache_2<TKey, TValue>::LogError(::StringW message) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ReferenceCountingCache_2<TKey, TValue>*>::get(), "LogError",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, message);
}
template <typename TKey, typename TValue> inline ::GlobalNamespace::ReferenceCountingCache_2<TKey, TValue>* GlobalNamespace::ReferenceCountingCache_2<TKey, TValue>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::ReferenceCountingCache_2<TKey, TValue>*>());
}
template <typename TKey, typename TValue> inline void GlobalNamespace::ReferenceCountingCache_2<TKey, TValue>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ReferenceCountingCache_2<TKey, TValue>*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename TKey, typename TValue> constexpr ::GlobalNamespace::ReferenceCountingCache_2<TKey, TValue>::ReferenceCountingCache_2() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
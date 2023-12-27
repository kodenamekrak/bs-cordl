#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Dynamic/Utils/zzzz__CacheDict_2_def.hpp"
#include "System/Dynamic/Utils/zzzz__CacheDict_2_def.hpp"
// Ctor Parameters []
template <typename TKey, typename TValue> constexpr ::System::Dynamic::Utils::__CacheDict_2__Entry<TKey, TValue>::__CacheDict_2__Entry() {}
template <typename TKey, typename TValue> constexpr int32_t& System::Dynamic::Utils::CacheDict_2<TKey, TValue>::__get__mask() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____mask;
}
template <typename TKey, typename TValue> constexpr int32_t const& System::Dynamic::Utils::CacheDict_2<TKey, TValue>::__get__mask() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____mask;
}
template <typename TKey, typename TValue> constexpr void System::Dynamic::Utils::CacheDict_2<TKey, TValue>::__set__mask(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____mask = value;
}
template <typename TKey, typename TValue>
constexpr ::ArrayW<::System::Dynamic::Utils::__CacheDict_2__Entry<TKey, TValue>*, ::Array<::System::Dynamic::Utils::__CacheDict_2__Entry<TKey, TValue>*>*>&
System::Dynamic::Utils::CacheDict_2<TKey, TValue>::__get__entries() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____entries;
}
template <typename TKey, typename TValue>
constexpr ::ArrayW<::System::Dynamic::Utils::__CacheDict_2__Entry<TKey, TValue>*, ::Array<::System::Dynamic::Utils::__CacheDict_2__Entry<TKey, TValue>*>*> const&
System::Dynamic::Utils::CacheDict_2<TKey, TValue>::__get__entries() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____entries;
}
template <typename TKey, typename TValue>
constexpr void System::Dynamic::Utils::CacheDict_2<TKey, TValue>::__set__entries(
    ::ArrayW<::System::Dynamic::Utils::__CacheDict_2__Entry<TKey, TValue>*, ::Array<::System::Dynamic::Utils::__CacheDict_2__Entry<TKey, TValue>*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____entries)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TKey, typename TValue> inline ::System::Dynamic::Utils::CacheDict_2<TKey, TValue>* System::Dynamic::Utils::CacheDict_2<TKey, TValue>::New_ctor(int32_t size) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Dynamic::Utils::CacheDict_2<TKey, TValue>*>(size));
}
template <typename TKey, typename TValue> inline void System::Dynamic::Utils::CacheDict_2<TKey, TValue>::_ctor(int32_t size) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Dynamic::Utils::CacheDict_2<TKey, TValue>*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, size);
}
template <typename TKey, typename TValue> inline int32_t System::Dynamic::Utils::CacheDict_2<TKey, TValue>::AlignSize(int32_t size) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Dynamic::Utils::CacheDict_2<TKey, TValue>*>::get(), "AlignSize",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, size);
}
// Ctor Parameters []
template <typename TKey, typename TValue> constexpr ::System::Dynamic::Utils::CacheDict_2<TKey, TValue>::CacheDict_2() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
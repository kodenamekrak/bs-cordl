#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__MiscHelpers_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__MiscHelpers_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<TValue>"
template <typename TValue> constexpr UnityEngine::InputSystem::Utilities::__MiscHelpers___EveryNth_d__1_1<TValue>::operator ::System::Collections::Generic::IEnumerable_1<TValue>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<TValue>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template <typename TValue> constexpr UnityEngine::InputSystem::Utilities::__MiscHelpers___EveryNth_d__1_1<TValue>::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<TValue>"
template <typename TValue> constexpr UnityEngine::InputSystem::Utilities::__MiscHelpers___EveryNth_d__1_1<TValue>::operator ::System::Collections::Generic::IEnumerator_1<TValue>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<TValue>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
template <typename TValue> constexpr UnityEngine::InputSystem::Utilities::__MiscHelpers___EveryNth_d__1_1<TValue>::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
template <typename TValue> constexpr UnityEngine::InputSystem::Utilities::__MiscHelpers___EveryNth_d__1_1<TValue>::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
template <typename TValue> constexpr int32_t& UnityEngine::InputSystem::Utilities::__MiscHelpers___EveryNth_d__1_1<TValue>::__get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____1__state;
}
template <typename TValue> constexpr int32_t const& UnityEngine::InputSystem::Utilities::__MiscHelpers___EveryNth_d__1_1<TValue>::__get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____1__state;
}
template <typename TValue> constexpr void UnityEngine::InputSystem::Utilities::__MiscHelpers___EveryNth_d__1_1<TValue>::__set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->_____1__state = value;
}
template <typename TValue> constexpr TValue& UnityEngine::InputSystem::Utilities::__MiscHelpers___EveryNth_d__1_1<TValue>::__get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____2__current;
}
template <typename TValue> constexpr TValue const& UnityEngine::InputSystem::Utilities::__MiscHelpers___EveryNth_d__1_1<TValue>::__get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____2__current;
}
template <typename TValue> constexpr void UnityEngine::InputSystem::Utilities::__MiscHelpers___EveryNth_d__1_1<TValue>::__set___2__current(TValue value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____2__current)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TValue> constexpr int32_t& UnityEngine::InputSystem::Utilities::__MiscHelpers___EveryNth_d__1_1<TValue>::__get___l__initialThreadId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____l__initialThreadId;
}
template <typename TValue> constexpr int32_t const& UnityEngine::InputSystem::Utilities::__MiscHelpers___EveryNth_d__1_1<TValue>::__get___l__initialThreadId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____l__initialThreadId;
}
template <typename TValue> constexpr void UnityEngine::InputSystem::Utilities::__MiscHelpers___EveryNth_d__1_1<TValue>::__set___l__initialThreadId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->_____l__initialThreadId = value;
}
template <typename TValue> constexpr ::System::Collections::Generic::IEnumerable_1<TValue>*& UnityEngine::InputSystem::Utilities::__MiscHelpers___EveryNth_d__1_1<TValue>::__get_enumerable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___enumerable;
}
template <typename TValue>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<TValue>*> const&
UnityEngine::InputSystem::Utilities::__MiscHelpers___EveryNth_d__1_1<TValue>::__get_enumerable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___enumerable;
}
template <typename TValue> constexpr void UnityEngine::InputSystem::Utilities::__MiscHelpers___EveryNth_d__1_1<TValue>::__set_enumerable(::System::Collections::Generic::IEnumerable_1<TValue>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___enumerable)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TValue> constexpr ::System::Collections::Generic::IEnumerable_1<TValue>*& UnityEngine::InputSystem::Utilities::__MiscHelpers___EveryNth_d__1_1<TValue>::__get___3__enumerable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____3__enumerable;
}
template <typename TValue>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<TValue>*> const&
UnityEngine::InputSystem::Utilities::__MiscHelpers___EveryNth_d__1_1<TValue>::__get___3__enumerable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____3__enumerable;
}
template <typename TValue>
constexpr void UnityEngine::InputSystem::Utilities::__MiscHelpers___EveryNth_d__1_1<TValue>::__set___3__enumerable(::System::Collections::Generic::IEnumerable_1<TValue>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____3__enumerable)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TValue> constexpr int32_t& UnityEngine::InputSystem::Utilities::__MiscHelpers___EveryNth_d__1_1<TValue>::__get_start() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___start;
}
template <typename TValue> constexpr int32_t const& UnityEngine::InputSystem::Utilities::__MiscHelpers___EveryNth_d__1_1<TValue>::__get_start() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___start;
}
template <typename TValue> constexpr void UnityEngine::InputSystem::Utilities::__MiscHelpers___EveryNth_d__1_1<TValue>::__set_start(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___start = value;
}
template <typename TValue> constexpr int32_t& UnityEngine::InputSystem::Utilities::__MiscHelpers___EveryNth_d__1_1<TValue>::__get___3__start() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____3__start;
}
template <typename TValue> constexpr int32_t const& UnityEngine::InputSystem::Utilities::__MiscHelpers___EveryNth_d__1_1<TValue>::__get___3__start() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____3__start;
}
template <typename TValue> constexpr void UnityEngine::InputSystem::Utilities::__MiscHelpers___EveryNth_d__1_1<TValue>::__set___3__start(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->_____3__start = value;
}
template <typename TValue> constexpr int32_t& UnityEngine::InputSystem::Utilities::__MiscHelpers___EveryNth_d__1_1<TValue>::__get_n() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___n;
}
template <typename TValue> constexpr int32_t const& UnityEngine::InputSystem::Utilities::__MiscHelpers___EveryNth_d__1_1<TValue>::__get_n() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___n;
}
template <typename TValue> constexpr void UnityEngine::InputSystem::Utilities::__MiscHelpers___EveryNth_d__1_1<TValue>::__set_n(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___n = value;
}
template <typename TValue> constexpr int32_t& UnityEngine::InputSystem::Utilities::__MiscHelpers___EveryNth_d__1_1<TValue>::__get___3__n() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____3__n;
}
template <typename TValue> constexpr int32_t const& UnityEngine::InputSystem::Utilities::__MiscHelpers___EveryNth_d__1_1<TValue>::__get___3__n() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____3__n;
}
template <typename TValue> constexpr void UnityEngine::InputSystem::Utilities::__MiscHelpers___EveryNth_d__1_1<TValue>::__set___3__n(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->_____3__n = value;
}
template <typename TValue> constexpr int32_t& UnityEngine::InputSystem::Utilities::__MiscHelpers___EveryNth_d__1_1<TValue>::__get__index_5__2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____index_5__2;
}
template <typename TValue> constexpr int32_t const& UnityEngine::InputSystem::Utilities::__MiscHelpers___EveryNth_d__1_1<TValue>::__get__index_5__2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____index_5__2;
}
template <typename TValue> constexpr void UnityEngine::InputSystem::Utilities::__MiscHelpers___EveryNth_d__1_1<TValue>::__set__index_5__2(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____index_5__2 = value;
}
template <typename TValue> constexpr ::System::Collections::Generic::IEnumerator_1<TValue>*& UnityEngine::InputSystem::Utilities::__MiscHelpers___EveryNth_d__1_1<TValue>::__get___7__wrap2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____7__wrap2;
}
template <typename TValue>
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerator_1<TValue>*> const&
UnityEngine::InputSystem::Utilities::__MiscHelpers___EveryNth_d__1_1<TValue>::__get___7__wrap2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____7__wrap2;
}
template <typename TValue> constexpr void UnityEngine::InputSystem::Utilities::__MiscHelpers___EveryNth_d__1_1<TValue>::__set___7__wrap2(::System::Collections::Generic::IEnumerator_1<TValue>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____7__wrap2)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TValue>
inline ::UnityEngine::InputSystem::Utilities::__MiscHelpers___EveryNth_d__1_1<TValue>* UnityEngine::InputSystem::Utilities::__MiscHelpers___EveryNth_d__1_1<TValue>::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::InputSystem::Utilities::__MiscHelpers___EveryNth_d__1_1<TValue>*>(__1__state));
}
template <typename TValue> inline void UnityEngine::InputSystem::Utilities::__MiscHelpers___EveryNth_d__1_1<TValue>::_ctor(int32_t __1__state) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::__MiscHelpers___EveryNth_d__1_1<TValue>*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, __1__state);
}
template <typename TValue> inline void UnityEngine::InputSystem::Utilities::__MiscHelpers___EveryNth_d__1_1<TValue>::System_IDisposable_Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::__MiscHelpers___EveryNth_d__1_1<TValue>*>::get(),
                                               "System.IDisposable.Dispose", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TValue> inline bool UnityEngine::InputSystem::Utilities::__MiscHelpers___EveryNth_d__1_1<TValue>::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::__MiscHelpers___EveryNth_d__1_1<TValue>*>::get(),
                                               "MoveNext", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename TValue> inline void UnityEngine::InputSystem::Utilities::__MiscHelpers___EveryNth_d__1_1<TValue>::__m__Finally1() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::__MiscHelpers___EveryNth_d__1_1<TValue>*>::get(),
                                               "<>m__Finally1", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TValue> inline TValue UnityEngine::InputSystem::Utilities::__MiscHelpers___EveryNth_d__1_1<TValue>::System_Collections_Generic_IEnumerator_TValue__get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::__MiscHelpers___EveryNth_d__1_1<TValue>*>::get(),
                                               "System.Collections.Generic.IEnumerator<TValue>.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<TValue, false>(this, ___internal_method);
}
template <typename TValue> inline void UnityEngine::InputSystem::Utilities::__MiscHelpers___EveryNth_d__1_1<TValue>::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::__MiscHelpers___EveryNth_d__1_1<TValue>*>::get(),
                                               "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TValue> inline ::System::Object* UnityEngine::InputSystem::Utilities::__MiscHelpers___EveryNth_d__1_1<TValue>::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::__MiscHelpers___EveryNth_d__1_1<TValue>*>::get(),
                                               "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
template <typename TValue>
inline ::System::Collections::Generic::IEnumerator_1<TValue>*
UnityEngine::InputSystem::Utilities::__MiscHelpers___EveryNth_d__1_1<TValue>::System_Collections_Generic_IEnumerable_TValue__GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::__MiscHelpers___EveryNth_d__1_1<TValue>*>::get(),
                                               "System.Collections.Generic.IEnumerable<TValue>.GetEnumerator", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<TValue>*, false>(this, ___internal_method);
}
template <typename TValue> inline ::System::Collections::IEnumerator* UnityEngine::InputSystem::Utilities::__MiscHelpers___EveryNth_d__1_1<TValue>::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::__MiscHelpers___EveryNth_d__1_1<TValue>*>::get(),
                                               "System.Collections.IEnumerable.GetEnumerator", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename TValue> constexpr ::UnityEngine::InputSystem::Utilities::__MiscHelpers___EveryNth_d__1_1<TValue>::__MiscHelpers___EveryNth_d__1_1() {}
template <typename TKey, typename TValue>
inline TValue UnityEngine::InputSystem::Utilities::MiscHelpers::GetValueOrDefault(::System::Collections::Generic::Dictionary_2<TKey, TValue>* dictionary, TKey key) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::MiscHelpers*>::get(), "GetValueOrDefault",
      std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TKey>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get() },
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::Dictionary_2<TKey, TValue>*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TKey>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TKey>::get(),
                                                                                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get() }));
  return ::cordl_internals::RunMethodRethrow<TValue, false>(nullptr, ___internal_method, dictionary, key);
}
/// @param start: int32_t (default: static_cast<int32_t>(0x0))
template <typename TValue>
inline ::System::Collections::Generic::IEnumerable_1<TValue>* UnityEngine::InputSystem::Utilities::MiscHelpers::EveryNth(::System::Collections::Generic::IEnumerable_1<TValue>* enumerable, int32_t n,
                                                                                                                         int32_t start) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::MiscHelpers*>::get(), "EveryNth",
      std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get() },
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<TValue>*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get() }));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<TValue>*, false>(nullptr, ___internal_method, enumerable, n, start);
}
template <typename TValue> inline int32_t UnityEngine::InputSystem::Utilities::MiscHelpers::IndexOf(::System::Collections::Generic::IEnumerable_1<TValue>* enumerable, TValue value) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Utilities::MiscHelpers*>::get(), "IndexOf",
                                               std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get() },
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<TValue>*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get() }));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, enumerable, value);
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::Utilities::MiscHelpers::MiscHelpers() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
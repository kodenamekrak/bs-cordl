#pragma once
// IWYU pragma private; include "GlobalNamespace/OrderedSet_1.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_impl.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_impl.hpp"
#include "System/Collections/zzzz__IEnumerable_impl.hpp"
#include "System/Collections/zzzz__IEnumerator_impl.hpp"
#include "System/zzzz__IDisposable_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__OrderedSet_1_def.hpp"
#include "GlobalNamespace/zzzz__OrderedSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__Comparison_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
template <typename T> constexpr ::GlobalNamespace::OrderedSet_1_ProcessOrder<T>::OrderedSet_1_ProcessOrder(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
template <typename T> constexpr ::GlobalNamespace::OrderedSet_1_ProcessOrder<T>::OrderedSet_1_ProcessOrder() {}
template <typename T> constexpr ::GlobalNamespace::OrderedSet_1_ProcessOrder<T> GlobalNamespace::OrderedSet_1_ProcessOrder<T>::Lifo{ static_cast<int32_t>(0x0) };
template <typename T> constexpr ::GlobalNamespace::OrderedSet_1_ProcessOrder<T> GlobalNamespace::OrderedSet_1_ProcessOrder<T>::Fifo{ static_cast<int32_t>(0x1) };
template <typename T> constexpr ::GlobalNamespace::OrderedSet_1_ProcessOrder<T> GlobalNamespace::OrderedSet_1_ProcessOrder<T>::DontCare{ static_cast<int32_t>(0x2) };
template <typename T> constexpr T& GlobalNamespace::OrderedSet_1_Node<T>::__cordl_internal_get_value() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___value;
}
template <typename T> constexpr T const& GlobalNamespace::OrderedSet_1_Node<T>::__cordl_internal_get_value() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___value;
}
template <typename T> constexpr void GlobalNamespace::OrderedSet_1_Node<T>::__cordl_internal_set_value(T value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->___value, value);
}
template <typename T> constexpr ::GlobalNamespace::OrderedSet_1_Node<T>*& GlobalNamespace::OrderedSet_1_Node<T>::__cordl_internal_get_previous() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___previous;
}
template <typename T> constexpr ::GlobalNamespace::OrderedSet_1_Node<T>* const& GlobalNamespace::OrderedSet_1_Node<T>::__cordl_internal_get_previous() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___previous;
}
template <typename T> constexpr void GlobalNamespace::OrderedSet_1_Node<T>::__cordl_internal_set_previous(::GlobalNamespace::OrderedSet_1_Node<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->___previous, value);
}
template <typename T> constexpr ::GlobalNamespace::OrderedSet_1_Node<T>*& GlobalNamespace::OrderedSet_1_Node<T>::__cordl_internal_get_next() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___next;
}
template <typename T> constexpr ::GlobalNamespace::OrderedSet_1_Node<T>* const& GlobalNamespace::OrderedSet_1_Node<T>::__cordl_internal_get_next() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___next;
}
template <typename T> constexpr void GlobalNamespace::OrderedSet_1_Node<T>::__cordl_internal_set_next(::GlobalNamespace::OrderedSet_1_Node<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->___next, value);
}
template <typename T> constexpr bool& GlobalNamespace::OrderedSet_1_Node<T>::__cordl_internal_get_isRemoved() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isRemoved;
}
template <typename T> constexpr bool const& GlobalNamespace::OrderedSet_1_Node<T>::__cordl_internal_get_isRemoved() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isRemoved;
}
template <typename T> constexpr void GlobalNamespace::OrderedSet_1_Node<T>::__cordl_internal_set_isRemoved(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isRemoved = value;
}
template <typename T> constexpr int32_t& GlobalNamespace::OrderedSet_1_Node<T>::__cordl_internal_get_clearCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___clearCount;
}
template <typename T> constexpr int32_t const& GlobalNamespace::OrderedSet_1_Node<T>::__cordl_internal_get_clearCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___clearCount;
}
template <typename T> constexpr void GlobalNamespace::OrderedSet_1_Node<T>::__cordl_internal_set_clearCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___clearCount = value;
}
template <typename T> inline void GlobalNamespace::OrderedSet_1_Node<T>::_ctor(T value, int32_t clearCount) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OrderedSet_1_Node<T>*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value, clearCount);
}
template <typename T> inline ::GlobalNamespace::OrderedSet_1_Node<T>* GlobalNamespace::OrderedSet_1_Node<T>::New_ctor(T value, int32_t clearCount) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::OrderedSet_1_Node<T>*>(value, clearCount));
}
// Ctor Parameters []
template <typename T> constexpr ::GlobalNamespace::OrderedSet_1_Node<T>::OrderedSet_1_Node() {}
template <typename T> constexpr int32_t& GlobalNamespace::OrderedSet_1__GetEnumerator_d__23<T>::__cordl_internal_get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
template <typename T> constexpr int32_t const& GlobalNamespace::OrderedSet_1__GetEnumerator_d__23<T>::__cordl_internal_get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
template <typename T> constexpr void GlobalNamespace::OrderedSet_1__GetEnumerator_d__23<T>::__cordl_internal_set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
template <typename T> constexpr T& GlobalNamespace::OrderedSet_1__GetEnumerator_d__23<T>::__cordl_internal_get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
template <typename T> constexpr T const& GlobalNamespace::OrderedSet_1__GetEnumerator_d__23<T>::__cordl_internal_get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
template <typename T> constexpr void GlobalNamespace::OrderedSet_1__GetEnumerator_d__23<T>::__cordl_internal_set___2__current(T value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->_____2__current, value);
}
template <typename T> constexpr ::GlobalNamespace::OrderedSet_1<T>*& GlobalNamespace::OrderedSet_1__GetEnumerator_d__23<T>::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
template <typename T> constexpr ::GlobalNamespace::OrderedSet_1<T>* const& GlobalNamespace::OrderedSet_1__GetEnumerator_d__23<T>::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
template <typename T> constexpr void GlobalNamespace::OrderedSet_1__GetEnumerator_d__23<T>::__cordl_internal_set___4__this(::GlobalNamespace::OrderedSet_1<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->_____4__this, value);
}
template <typename T> constexpr ::GlobalNamespace::OrderedSet_1_Node<T>*& GlobalNamespace::OrderedSet_1__GetEnumerator_d__23<T>::__cordl_internal_get__next_5__2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____next_5__2;
}
template <typename T> constexpr ::GlobalNamespace::OrderedSet_1_Node<T>* const& GlobalNamespace::OrderedSet_1__GetEnumerator_d__23<T>::__cordl_internal_get__next_5__2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____next_5__2;
}
template <typename T> constexpr void GlobalNamespace::OrderedSet_1__GetEnumerator_d__23<T>::__cordl_internal_set__next_5__2(::GlobalNamespace::OrderedSet_1_Node<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->____next_5__2, value);
}
template <typename T> inline void GlobalNamespace::OrderedSet_1__GetEnumerator_d__23<T>::_ctor(int32_t __1__state) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OrderedSet_1__GetEnumerator_d__23<T>*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, __1__state);
}
template <typename T> inline void GlobalNamespace::OrderedSet_1__GetEnumerator_d__23<T>::System_IDisposable_Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OrderedSet_1__GetEnumerator_d__23<T>*>::get(),
                                                                             "System.IDisposable.Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline bool GlobalNamespace::OrderedSet_1__GetEnumerator_d__23<T>::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OrderedSet_1__GetEnumerator_d__23<T>*>::get(),
                                                                             "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename T> inline T GlobalNamespace::OrderedSet_1__GetEnumerator_d__23<T>::System_Collections_Generic_IEnumerator_T__get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OrderedSet_1__GetEnumerator_d__23<T>*>::get(),
                                               "System.Collections.Generic.IEnumerator<T>.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method);
}
template <typename T> inline void GlobalNamespace::OrderedSet_1__GetEnumerator_d__23<T>::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OrderedSet_1__GetEnumerator_d__23<T>*>::get(),
                                               "System.Collections.IEnumerator.Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline ::System::Object* GlobalNamespace::OrderedSet_1__GetEnumerator_d__23<T>::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OrderedSet_1__GetEnumerator_d__23<T>*>::get(),
                                               "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
template <typename T> inline ::GlobalNamespace::OrderedSet_1__GetEnumerator_d__23<T>* GlobalNamespace::OrderedSet_1__GetEnumerator_d__23<T>::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::OrderedSet_1__GetEnumerator_d__23<T>*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<T>"
template <typename T> constexpr GlobalNamespace::OrderedSet_1__GetEnumerator_d__23<T>::operator ::System::Collections::Generic::IEnumerator_1<T>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<T>"
template <typename T> constexpr ::System::Collections::Generic::IEnumerator_1<T>* GlobalNamespace::OrderedSet_1__GetEnumerator_d__23<T>::i___System__Collections__Generic__IEnumerator_1_T_() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
template <typename T> constexpr GlobalNamespace::OrderedSet_1__GetEnumerator_d__23<T>::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
template <typename T> constexpr ::System::Collections::IEnumerator* GlobalNamespace::OrderedSet_1__GetEnumerator_d__23<T>::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
template <typename T> constexpr GlobalNamespace::OrderedSet_1__GetEnumerator_d__23<T>::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
template <typename T> constexpr ::System::IDisposable* GlobalNamespace::OrderedSet_1__GetEnumerator_d__23<T>::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
template <typename T> constexpr ::GlobalNamespace::OrderedSet_1__GetEnumerator_d__23<T>::OrderedSet_1__GetEnumerator_d__23() {}
template <typename T> constexpr ::System::Comparison_1<T>*& GlobalNamespace::OrderedSet_1<T>::__cordl_internal_get__comparison() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____comparison;
}
template <typename T> constexpr ::System::Comparison_1<T>* const& GlobalNamespace::OrderedSet_1<T>::__cordl_internal_get__comparison() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____comparison;
}
template <typename T> constexpr void GlobalNamespace::OrderedSet_1<T>::__cordl_internal_set__comparison(::System::Comparison_1<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->____comparison, value);
}
template <typename T> constexpr ::GlobalNamespace::OrderedSet_1_ProcessOrder<T>& GlobalNamespace::OrderedSet_1<T>::__cordl_internal_get__processOrder() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____processOrder;
}
template <typename T> constexpr ::GlobalNamespace::OrderedSet_1_ProcessOrder<T> const& GlobalNamespace::OrderedSet_1<T>::__cordl_internal_get__processOrder() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____processOrder;
}
template <typename T> constexpr void GlobalNamespace::OrderedSet_1<T>::__cordl_internal_set__processOrder(::GlobalNamespace::OrderedSet_1_ProcessOrder<T> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____processOrder = value;
}
template <typename T> constexpr ::System::Collections::Generic::Dictionary_2<T, ::GlobalNamespace::OrderedSet_1_Node<T>*>*& GlobalNamespace::OrderedSet_1<T>::__cordl_internal_get__sortIndices() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sortIndices;
}
template <typename T>
constexpr ::System::Collections::Generic::Dictionary_2<T, ::GlobalNamespace::OrderedSet_1_Node<T>*>* const& GlobalNamespace::OrderedSet_1<T>::__cordl_internal_get__sortIndices() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sortIndices;
}
template <typename T>
constexpr void GlobalNamespace::OrderedSet_1<T>::__cordl_internal_set__sortIndices(::System::Collections::Generic::Dictionary_2<T, ::GlobalNamespace::OrderedSet_1_Node<T>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->____sortIndices, value);
}
template <typename T> constexpr ::GlobalNamespace::OrderedSet_1_Node<T>*& GlobalNamespace::OrderedSet_1<T>::__cordl_internal_get__head() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____head;
}
template <typename T> constexpr ::GlobalNamespace::OrderedSet_1_Node<T>* const& GlobalNamespace::OrderedSet_1<T>::__cordl_internal_get__head() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____head;
}
template <typename T> constexpr void GlobalNamespace::OrderedSet_1<T>::__cordl_internal_set__head(::GlobalNamespace::OrderedSet_1_Node<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->____head, value);
}
template <typename T> constexpr ::GlobalNamespace::OrderedSet_1_Node<T>*& GlobalNamespace::OrderedSet_1<T>::__cordl_internal_get__tail() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tail;
}
template <typename T> constexpr ::GlobalNamespace::OrderedSet_1_Node<T>* const& GlobalNamespace::OrderedSet_1<T>::__cordl_internal_get__tail() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tail;
}
template <typename T> constexpr void GlobalNamespace::OrderedSet_1<T>::__cordl_internal_set__tail(::GlobalNamespace::OrderedSet_1_Node<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->____tail, value);
}
template <typename T> constexpr int32_t& GlobalNamespace::OrderedSet_1<T>::__cordl_internal_get__clearCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____clearCount;
}
template <typename T> constexpr int32_t const& GlobalNamespace::OrderedSet_1<T>::__cordl_internal_get__clearCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____clearCount;
}
template <typename T> constexpr void GlobalNamespace::OrderedSet_1<T>::__cordl_internal_set__clearCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____clearCount = value;
}
template <typename T> inline int32_t GlobalNamespace::OrderedSet_1<T>::get_count() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OrderedSet_1<T>*>::get(), "get_count",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
template <typename T> inline void GlobalNamespace::OrderedSet_1<T>::_ctor(::System::Comparison_1<T>* comparison, ::GlobalNamespace::OrderedSet_1_ProcessOrder<T> processOrder) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OrderedSet_1<T>*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Comparison_1<T>*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OrderedSet_1_ProcessOrder<T>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, comparison, processOrder);
}
template <typename T> inline void GlobalNamespace::OrderedSet_1<T>::Add(T item) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OrderedSet_1<T>*>::get(), "Add", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, item);
}
template <typename T> inline void GlobalNamespace::OrderedSet_1<T>::Clear() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OrderedSet_1<T>*>::get(), "Clear",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline bool GlobalNamespace::OrderedSet_1<T>::Contains(T item) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OrderedSet_1<T>*>::get(), "Contains", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, item);
}
template <typename T> inline bool GlobalNamespace::OrderedSet_1<T>::Remove(T item) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OrderedSet_1<T>*>::get(), "Remove", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, item);
}
template <typename T> inline void GlobalNamespace::OrderedSet_1<T>::UpdateSortedPosition(T item) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OrderedSet_1<T>*>::get(), "UpdateSortedPosition",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, item);
}
template <typename T> inline void GlobalNamespace::OrderedSet_1<T>::AppendNode(::GlobalNamespace::OrderedSet_1_Node<T>* node) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OrderedSet_1<T>*>::get(), "AppendNode", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OrderedSet_1_Node<T>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, node);
}
template <typename T> inline void GlobalNamespace::OrderedSet_1<T>::AppendNodeUnchecked(::GlobalNamespace::OrderedSet_1_Node<T>* node) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OrderedSet_1<T>*>::get(), "AppendNodeUnchecked", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OrderedSet_1_Node<T>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, node);
}
template <typename T> inline void GlobalNamespace::OrderedSet_1<T>::PrependNode(::GlobalNamespace::OrderedSet_1_Node<T>* node) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OrderedSet_1<T>*>::get(), "PrependNode", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OrderedSet_1_Node<T>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, node);
}
template <typename T> inline void GlobalNamespace::OrderedSet_1<T>::PrependNodeUnchecked(::GlobalNamespace::OrderedSet_1_Node<T>* node) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OrderedSet_1<T>*>::get(), "PrependNodeUnchecked", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OrderedSet_1_Node<T>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, node);
}
template <typename T> inline void GlobalNamespace::OrderedSet_1<T>::SwapNodes(::GlobalNamespace::OrderedSet_1_Node<T>* previous, ::GlobalNamespace::OrderedSet_1_Node<T>* next) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OrderedSet_1<T>*>::get(), "SwapNodes", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OrderedSet_1_Node<T>*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OrderedSet_1_Node<T>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, previous, next);
}
template <typename T> inline void GlobalNamespace::OrderedSet_1<T>::RemoveNode(::GlobalNamespace::OrderedSet_1_Node<T>* node) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OrderedSet_1<T>*>::get(), "RemoveNode", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OrderedSet_1_Node<T>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, node);
}
template <typename T> inline void GlobalNamespace::OrderedSet_1<T>::UpdateSortedPosition(::GlobalNamespace::OrderedSet_1_Node<T>* node) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OrderedSet_1<T>*>::get(), "UpdateSortedPosition", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OrderedSet_1_Node<T>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, node);
}
template <typename T> inline ::System::Collections::Generic::IEnumerator_1<T>* GlobalNamespace::OrderedSet_1<T>::GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OrderedSet_1<T>*>::get(), "GetEnumerator",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<T>*, false>(this, ___internal_method);
}
template <typename T> inline ::System::Collections::IEnumerator* GlobalNamespace::OrderedSet_1<T>::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OrderedSet_1<T>*>::get(), "System.Collections.IEnumerable.GetEnumerator",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method);
}
template <typename T> inline T GlobalNamespace::OrderedSet_1<T>::GetFirstOrDefault() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OrderedSet_1<T>*>::get(), "GetFirstOrDefault",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method);
}
template <typename T> inline bool GlobalNamespace::OrderedSet_1<T>::TryGetFirst(::ByRef<T> value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OrderedSet_1<T>*>::get(), "TryGetFirst", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<T>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, value);
}
template <typename T>
inline ::GlobalNamespace::OrderedSet_1<T>* GlobalNamespace::OrderedSet_1<T>::New_ctor(::System::Comparison_1<T>* comparison, ::GlobalNamespace::OrderedSet_1_ProcessOrder<T> processOrder) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::OrderedSet_1<T>*>(comparison, processOrder));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<T>"
template <typename T> constexpr GlobalNamespace::OrderedSet_1<T>::operator ::System::Collections::Generic::IEnumerable_1<T>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<T>"
template <typename T> constexpr ::System::Collections::Generic::IEnumerable_1<T>* GlobalNamespace::OrderedSet_1<T>::i___System__Collections__Generic__IEnumerable_1_T_() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template <typename T> constexpr GlobalNamespace::OrderedSet_1<T>::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
template <typename T> constexpr ::System::Collections::IEnumerable* GlobalNamespace::OrderedSet_1<T>::i___System__Collections__IEnumerable() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
// Ctor Parameters []
template <typename T> constexpr ::GlobalNamespace::OrderedSet_1<T>::OrderedSet_1() {}

#pragma once
// IWYU pragma private; include "Priority_Queue/StablePriorityQueue_1.hpp"
#include "Priority_Queue/zzzz__IFixedSizePriorityQueue_2_impl.hpp"
#include "Priority_Queue/zzzz__IPriorityQueue_2_impl.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_impl.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_impl.hpp"
#include "System/Collections/zzzz__IEnumerable_impl.hpp"
#include "System/Collections/zzzz__IEnumerator_impl.hpp"
#include "System/zzzz__IDisposable_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Priority_Queue/zzzz__StablePriorityQueue_1_def.hpp"
#include "Priority_Queue/zzzz__StablePriorityQueue_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__Object_def.hpp"
template <typename T> constexpr int32_t& Priority_Queue::StablePriorityQueue_1__GetEnumerator_d__22<T>::__cordl_internal_get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
template <typename T> constexpr int32_t const& Priority_Queue::StablePriorityQueue_1__GetEnumerator_d__22<T>::__cordl_internal_get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
template <typename T> constexpr void Priority_Queue::StablePriorityQueue_1__GetEnumerator_d__22<T>::__cordl_internal_set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
template <typename T> constexpr T& Priority_Queue::StablePriorityQueue_1__GetEnumerator_d__22<T>::__cordl_internal_get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
template <typename T> constexpr T const& Priority_Queue::StablePriorityQueue_1__GetEnumerator_d__22<T>::__cordl_internal_get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
template <typename T> constexpr void Priority_Queue::StablePriorityQueue_1__GetEnumerator_d__22<T>::__cordl_internal_set___2__current(T value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->_____2__current, value);
}
template <typename T> constexpr ::Priority_Queue::StablePriorityQueue_1<T>*& Priority_Queue::StablePriorityQueue_1__GetEnumerator_d__22<T>::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
template <typename T> constexpr ::Priority_Queue::StablePriorityQueue_1<T>* const& Priority_Queue::StablePriorityQueue_1__GetEnumerator_d__22<T>::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
template <typename T> constexpr void Priority_Queue::StablePriorityQueue_1__GetEnumerator_d__22<T>::__cordl_internal_set___4__this(::Priority_Queue::StablePriorityQueue_1<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->_____4__this, value);
}
template <typename T> constexpr int32_t& Priority_Queue::StablePriorityQueue_1__GetEnumerator_d__22<T>::__cordl_internal_get__i_5__2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____i_5__2;
}
template <typename T> constexpr int32_t const& Priority_Queue::StablePriorityQueue_1__GetEnumerator_d__22<T>::__cordl_internal_get__i_5__2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____i_5__2;
}
template <typename T> constexpr void Priority_Queue::StablePriorityQueue_1__GetEnumerator_d__22<T>::__cordl_internal_set__i_5__2(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____i_5__2 = value;
}
template <typename T> inline void Priority_Queue::StablePriorityQueue_1__GetEnumerator_d__22<T>::_ctor(int32_t __1__state) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::StablePriorityQueue_1__GetEnumerator_d__22<T>*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, __1__state);
}
template <typename T> inline void Priority_Queue::StablePriorityQueue_1__GetEnumerator_d__22<T>::System_IDisposable_Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::StablePriorityQueue_1__GetEnumerator_d__22<T>*>::get(),
                                               "System.IDisposable.Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline bool Priority_Queue::StablePriorityQueue_1__GetEnumerator_d__22<T>::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::StablePriorityQueue_1__GetEnumerator_d__22<T>*>::get(), "MoveNext",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename T> inline T Priority_Queue::StablePriorityQueue_1__GetEnumerator_d__22<T>::System_Collections_Generic_IEnumerator_T__get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::StablePriorityQueue_1__GetEnumerator_d__22<T>*>::get(),
                                               "System.Collections.Generic.IEnumerator<T>.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method);
}
template <typename T> inline void Priority_Queue::StablePriorityQueue_1__GetEnumerator_d__22<T>::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::StablePriorityQueue_1__GetEnumerator_d__22<T>*>::get(),
                                               "System.Collections.IEnumerator.Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline ::System::Object* Priority_Queue::StablePriorityQueue_1__GetEnumerator_d__22<T>::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::StablePriorityQueue_1__GetEnumerator_d__22<T>*>::get(),
                                               "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
template <typename T> inline ::Priority_Queue::StablePriorityQueue_1__GetEnumerator_d__22<T>* Priority_Queue::StablePriorityQueue_1__GetEnumerator_d__22<T>::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Priority_Queue::StablePriorityQueue_1__GetEnumerator_d__22<T>*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<T>"
template <typename T> constexpr Priority_Queue::StablePriorityQueue_1__GetEnumerator_d__22<T>::operator ::System::Collections::Generic::IEnumerator_1<T>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<T>"
template <typename T>
constexpr ::System::Collections::Generic::IEnumerator_1<T>* Priority_Queue::StablePriorityQueue_1__GetEnumerator_d__22<T>::i___System__Collections__Generic__IEnumerator_1_T_() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
template <typename T> constexpr Priority_Queue::StablePriorityQueue_1__GetEnumerator_d__22<T>::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
template <typename T> constexpr ::System::Collections::IEnumerator* Priority_Queue::StablePriorityQueue_1__GetEnumerator_d__22<T>::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
template <typename T> constexpr Priority_Queue::StablePriorityQueue_1__GetEnumerator_d__22<T>::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
template <typename T> constexpr ::System::IDisposable* Priority_Queue::StablePriorityQueue_1__GetEnumerator_d__22<T>::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
template <typename T> constexpr ::Priority_Queue::StablePriorityQueue_1__GetEnumerator_d__22<T>::StablePriorityQueue_1__GetEnumerator_d__22() {}
template <typename T> constexpr int32_t& Priority_Queue::StablePriorityQueue_1<T>::__cordl_internal_get__numNodes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____numNodes;
}
template <typename T> constexpr int32_t const& Priority_Queue::StablePriorityQueue_1<T>::__cordl_internal_get__numNodes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____numNodes;
}
template <typename T> constexpr void Priority_Queue::StablePriorityQueue_1<T>::__cordl_internal_set__numNodes(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____numNodes = value;
}
template <typename T> constexpr ::ArrayW<T, ::Array<T>*>& Priority_Queue::StablePriorityQueue_1<T>::__cordl_internal_get__nodes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nodes;
}
template <typename T> constexpr ::ArrayW<T, ::Array<T>*> const& Priority_Queue::StablePriorityQueue_1<T>::__cordl_internal_get__nodes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nodes;
}
template <typename T> constexpr void Priority_Queue::StablePriorityQueue_1<T>::__cordl_internal_set__nodes(::ArrayW<T, ::Array<T>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->____nodes, value);
}
template <typename T> constexpr int64_t& Priority_Queue::StablePriorityQueue_1<T>::__cordl_internal_get__numNodesEverEnqueued() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____numNodesEverEnqueued;
}
template <typename T> constexpr int64_t const& Priority_Queue::StablePriorityQueue_1<T>::__cordl_internal_get__numNodesEverEnqueued() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____numNodesEverEnqueued;
}
template <typename T> constexpr void Priority_Queue::StablePriorityQueue_1<T>::__cordl_internal_set__numNodesEverEnqueued(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____numNodesEverEnqueued = value;
}
template <typename T> inline void Priority_Queue::StablePriorityQueue_1<T>::_ctor(int32_t maxNodes) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::StablePriorityQueue_1<T>*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, maxNodes);
}
template <typename T> inline int32_t Priority_Queue::StablePriorityQueue_1<T>::get_Count() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::StablePriorityQueue_1<T>*>::get(), "get_Count",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
template <typename T> inline int32_t Priority_Queue::StablePriorityQueue_1<T>::get_MaxSize() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::StablePriorityQueue_1<T>*>::get(), "get_MaxSize",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
template <typename T> inline void Priority_Queue::StablePriorityQueue_1<T>::Clear() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::StablePriorityQueue_1<T>*>::get(), "Clear",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline bool Priority_Queue::StablePriorityQueue_1<T>::Contains(T node) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::StablePriorityQueue_1<T>*>::get(), "Contains",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, node);
}
template <typename T> inline void Priority_Queue::StablePriorityQueue_1<T>::Enqueue(T node, float_t priority) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::StablePriorityQueue_1<T>*>::get(), "Enqueue", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, node, priority);
}
template <typename T> inline void Priority_Queue::StablePriorityQueue_1<T>::CascadeUp(T node) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::StablePriorityQueue_1<T>*>::get(), "CascadeUp",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, node);
}
template <typename T> inline void Priority_Queue::StablePriorityQueue_1<T>::CascadeDown(T node) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::StablePriorityQueue_1<T>*>::get(), "CascadeDown",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, node);
}
template <typename T> inline bool Priority_Queue::StablePriorityQueue_1<T>::HasHigherPriority(T higher, T lower) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::StablePriorityQueue_1<T>*>::get(), "HasHigherPriority", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, higher, lower);
}
template <typename T> inline T Priority_Queue::StablePriorityQueue_1<T>::Dequeue() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::StablePriorityQueue_1<T>*>::get(), "Dequeue",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method);
}
template <typename T> inline void Priority_Queue::StablePriorityQueue_1<T>::Resize(int32_t maxNodes) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::StablePriorityQueue_1<T>*>::get(), "Resize",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, maxNodes);
}
template <typename T> inline T Priority_Queue::StablePriorityQueue_1<T>::get_First() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::StablePriorityQueue_1<T>*>::get(), "get_First",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method);
}
template <typename T> inline void Priority_Queue::StablePriorityQueue_1<T>::UpdatePriority(T node, float_t priority) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::StablePriorityQueue_1<T>*>::get(), "UpdatePriority", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, node, priority);
}
template <typename T> inline void Priority_Queue::StablePriorityQueue_1<T>::OnNodeUpdated(T node) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::StablePriorityQueue_1<T>*>::get(), "OnNodeUpdated",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, node);
}
template <typename T> inline void Priority_Queue::StablePriorityQueue_1<T>::Remove(T node) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::StablePriorityQueue_1<T>*>::get(), "Remove",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, node);
}
template <typename T> inline void Priority_Queue::StablePriorityQueue_1<T>::ResetNode(T node) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::StablePriorityQueue_1<T>*>::get(), "ResetNode",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, node);
}
template <typename T> inline ::System::Collections::Generic::IEnumerator_1<T>* Priority_Queue::StablePriorityQueue_1<T>::GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::StablePriorityQueue_1<T>*>::get(),
                                                                             "GetEnumerator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<T>*, false>(this, ___internal_method);
}
template <typename T> inline ::System::Collections::IEnumerator* Priority_Queue::StablePriorityQueue_1<T>::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::StablePriorityQueue_1<T>*>::get(),
                                               "System.Collections.IEnumerable.GetEnumerator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method);
}
template <typename T> inline bool Priority_Queue::StablePriorityQueue_1<T>::IsValidQueue() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Priority_Queue::StablePriorityQueue_1<T>*>::get(), "IsValidQueue",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
template <typename T> inline ::Priority_Queue::StablePriorityQueue_1<T>* Priority_Queue::StablePriorityQueue_1<T>::New_ctor(int32_t maxNodes) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Priority_Queue::StablePriorityQueue_1<T>*>(maxNodes));
}
/// @brief Convert operator to "::Priority_Queue::IFixedSizePriorityQueue_2<T,float_t>"
template <typename T> constexpr Priority_Queue::StablePriorityQueue_1<T>::operator ::Priority_Queue::IFixedSizePriorityQueue_2<T, float_t>*() noexcept {
  return static_cast<::Priority_Queue::IFixedSizePriorityQueue_2<T, float_t>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Priority_Queue::IFixedSizePriorityQueue_2<T,float_t>"
template <typename T> constexpr ::Priority_Queue::IFixedSizePriorityQueue_2<T, float_t>* Priority_Queue::StablePriorityQueue_1<T>::i___Priority_Queue__IFixedSizePriorityQueue_2_T_float_t_() noexcept {
  return static_cast<::Priority_Queue::IFixedSizePriorityQueue_2<T, float_t>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Priority_Queue::IPriorityQueue_2<T,float_t>"
template <typename T> constexpr Priority_Queue::StablePriorityQueue_1<T>::operator ::Priority_Queue::IPriorityQueue_2<T, float_t>*() noexcept {
  return static_cast<::Priority_Queue::IPriorityQueue_2<T, float_t>*>(static_cast<void*>(this));
}
/// @brief Convert to "::Priority_Queue::IPriorityQueue_2<T,float_t>"
template <typename T> constexpr ::Priority_Queue::IPriorityQueue_2<T, float_t>* Priority_Queue::StablePriorityQueue_1<T>::i___Priority_Queue__IPriorityQueue_2_T_float_t_() noexcept {
  return static_cast<::Priority_Queue::IPriorityQueue_2<T, float_t>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<T>"
template <typename T> constexpr Priority_Queue::StablePriorityQueue_1<T>::operator ::System::Collections::Generic::IEnumerable_1<T>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<T>"
template <typename T> constexpr ::System::Collections::Generic::IEnumerable_1<T>* Priority_Queue::StablePriorityQueue_1<T>::i___System__Collections__Generic__IEnumerable_1_T_() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
template <typename T> constexpr Priority_Queue::StablePriorityQueue_1<T>::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
template <typename T> constexpr ::System::Collections::IEnumerable* Priority_Queue::StablePriorityQueue_1<T>::i___System__Collections__IEnumerable() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
// Ctor Parameters []
template <typename T> constexpr ::Priority_Queue::StablePriorityQueue_1<T>::StablePriorityQueue_1() {}

#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/InputControl_1.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__InlinedArray_1_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControl_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControl_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputProcessor_1_def.hpp"
template <typename TValue>
constexpr ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::InputProcessor_1<TValue>*>&
UnityEngine::InputSystem::InputControl_1<TValue>::__cordl_internal_get_m_ProcessorStack() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ProcessorStack;
}
template <typename TValue>
constexpr ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::InputProcessor_1<TValue>*> const&
UnityEngine::InputSystem::InputControl_1<TValue>::__cordl_internal_get_m_ProcessorStack() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ProcessorStack;
}
template <typename TValue>
constexpr void UnityEngine::InputSystem::InputControl_1<TValue>::__cordl_internal_set_m_ProcessorStack(
    ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::InputProcessor_1<TValue>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ProcessorStack = value;
}
template <typename TValue> constexpr TValue& UnityEngine::InputSystem::InputControl_1<TValue>::__cordl_internal_get_m_CachedValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CachedValue;
}
template <typename TValue> constexpr TValue const& UnityEngine::InputSystem::InputControl_1<TValue>::__cordl_internal_get_m_CachedValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CachedValue;
}
template <typename TValue> constexpr void UnityEngine::InputSystem::InputControl_1<TValue>::__cordl_internal_set_m_CachedValue(TValue value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->___m_CachedValue, value);
}
template <typename TValue> constexpr TValue& UnityEngine::InputSystem::InputControl_1<TValue>::__cordl_internal_get_m_UnprocessedCachedValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UnprocessedCachedValue;
}
template <typename TValue> constexpr TValue const& UnityEngine::InputSystem::InputControl_1<TValue>::__cordl_internal_get_m_UnprocessedCachedValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UnprocessedCachedValue;
}
template <typename TValue> constexpr void UnityEngine::InputSystem::InputControl_1<TValue>::__cordl_internal_set_m_UnprocessedCachedValue(TValue value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->___m_UnprocessedCachedValue, value);
}
template <typename TValue> constexpr bool& UnityEngine::InputSystem::InputControl_1<TValue>::__cordl_internal_get_evaluateProcessorsEveryRead() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___evaluateProcessorsEveryRead;
}
template <typename TValue> constexpr bool const& UnityEngine::InputSystem::InputControl_1<TValue>::__cordl_internal_get_evaluateProcessorsEveryRead() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___evaluateProcessorsEveryRead;
}
template <typename TValue> constexpr void UnityEngine::InputSystem::InputControl_1<TValue>::__cordl_internal_set_evaluateProcessorsEveryRead(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___evaluateProcessorsEveryRead = value;
}
template <typename TValue> inline ::System::Type* UnityEngine::InputSystem::InputControl_1<TValue>::get_valueType() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControl_1<TValue>*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(this, ___internal_method);
}
template <typename TValue> inline int32_t UnityEngine::InputSystem::InputControl_1<TValue>::get_valueSizeInBytes() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControl_1<TValue>*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
template <typename TValue> inline ::ByRef<TValue> UnityEngine::InputSystem::InputControl_1<TValue>::get_value() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControl_1<TValue>*>::get(),
                                                                             "get_value", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ByRef<TValue>, false>(this, ___internal_method);
}
template <typename TValue> inline ::ByRef<TValue> UnityEngine::InputSystem::InputControl_1<TValue>::get_unprocessedValue() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControl_1<TValue>*>::get(),
                                                                             "get_unprocessedValue", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ByRef<TValue>, false>(this, ___internal_method);
}
template <typename TValue> inline TValue UnityEngine::InputSystem::InputControl_1<TValue>::ReadValue() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControl_1<TValue>*>::get(),
                                                                             "ReadValue", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<TValue, false>(this, ___internal_method);
}
template <typename TValue> inline TValue UnityEngine::InputSystem::InputControl_1<TValue>::ReadValueFromPreviousFrame() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControl_1<TValue>*>::get(),
                                                                             "ReadValueFromPreviousFrame", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<TValue, false>(this, ___internal_method);
}
template <typename TValue> inline TValue UnityEngine::InputSystem::InputControl_1<TValue>::ReadDefaultValue() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControl_1<TValue>*>::get(),
                                                                             "ReadDefaultValue", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<TValue, false>(this, ___internal_method);
}
template <typename TValue> inline TValue UnityEngine::InputSystem::InputControl_1<TValue>::ReadValueFromState(::cordl_internals::Ptr<void> statePtr) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControl_1<TValue>*>::get(), "ReadValueFromState", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<void>>::get() })));
  return ::cordl_internals::RunMethodRethrow<TValue, false>(this, ___internal_method, statePtr);
}
template <typename TValue> inline TValue UnityEngine::InputSystem::InputControl_1<TValue>::ReadValueFromStateWithCaching(::cordl_internals::Ptr<void> statePtr) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControl_1<TValue>*>::get(), "ReadValueFromStateWithCaching", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<void>>::get() })));
  return ::cordl_internals::RunMethodRethrow<TValue, false>(this, ___internal_method, statePtr);
}
template <typename TValue> inline TValue UnityEngine::InputSystem::InputControl_1<TValue>::ReadUnprocessedValueFromStateWithCaching(::cordl_internals::Ptr<void> statePtr) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControl_1<TValue>*>::get(), "ReadUnprocessedValueFromStateWithCaching",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<void>>::get() })));
  return ::cordl_internals::RunMethodRethrow<TValue, false>(this, ___internal_method, statePtr);
}
template <typename TValue> inline TValue UnityEngine::InputSystem::InputControl_1<TValue>::ReadUnprocessedValue() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControl_1<TValue>*>::get(),
                                                                             "ReadUnprocessedValue", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<TValue, false>(this, ___internal_method);
}
template <typename TValue> inline TValue UnityEngine::InputSystem::InputControl_1<TValue>::ReadUnprocessedValueFromState(::cordl_internals::Ptr<void> statePtr) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControl_1<TValue>*>::get(), 17)));
  return ::cordl_internals::RunMethodRethrow<TValue, false>(this, ___internal_method, statePtr);
}
template <typename TValue> inline ::System::Object* UnityEngine::InputSystem::InputControl_1<TValue>::ReadValueFromStateAsObject(::cordl_internals::Ptr<void> statePtr) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControl_1<TValue>*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, statePtr);
}
template <typename TValue>
inline void UnityEngine::InputSystem::InputControl_1<TValue>::ReadValueFromStateIntoBuffer(::cordl_internals::Ptr<void> statePtr, ::cordl_internals::Ptr<void> bufferPtr, int32_t bufferSize) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControl_1<TValue>*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, statePtr, bufferPtr, bufferSize);
}
template <typename TValue>
inline void UnityEngine::InputSystem::InputControl_1<TValue>::WriteValueFromBufferIntoState(::cordl_internals::Ptr<void> bufferPtr, int32_t bufferSize, ::cordl_internals::Ptr<void> statePtr) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControl_1<TValue>*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bufferPtr, bufferSize, statePtr);
}
template <typename TValue> inline void UnityEngine::InputSystem::InputControl_1<TValue>::WriteValueFromObjectIntoState(::System::Object* value, ::cordl_internals::Ptr<void> statePtr) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControl_1<TValue>*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value, statePtr);
}
template <typename TValue> inline void UnityEngine::InputSystem::InputControl_1<TValue>::WriteValueIntoState(TValue value, ::cordl_internals::Ptr<void> statePtr) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControl_1<TValue>*>::get(), 18)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value, statePtr);
}
template <typename TValue> inline ::System::Object* UnityEngine::InputSystem::InputControl_1<TValue>::ReadValueFromBufferAsObject(::cordl_internals::Ptr<void> buffer, int32_t bufferSize) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControl_1<TValue>*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, buffer, bufferSize);
}
template <typename TValue> inline bool UnityEngine::InputSystem::InputControl_1<TValue>::CompareValue(::ByRef<TValue> firstValue, ::ByRef<TValue> secondValue) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControl_1<TValue>*>::get(),
                                                                             "CompareValue", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<TValue>>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<TValue>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, firstValue, secondValue);
}
template <typename TValue> inline bool UnityEngine::InputSystem::InputControl_1<TValue>::CompareValue(::cordl_internals::Ptr<void> firstStatePtr, ::cordl_internals::Ptr<void> secondStatePtr) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControl_1<TValue>*>::get(), 12)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, firstStatePtr, secondStatePtr);
}
template <typename TValue> inline TValue UnityEngine::InputSystem::InputControl_1<TValue>::ProcessValue(TValue value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControl_1<TValue>*>::get(), "ProcessValue",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TValue>::get() })));
  return ::cordl_internals::RunMethodRethrow<TValue, false>(this, ___internal_method, value);
}
template <typename TValue> inline void UnityEngine::InputSystem::InputControl_1<TValue>::ProcessValue(::ByRef<TValue> value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControl_1<TValue>*>::get(), "ProcessValue",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<TValue>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename TValue> template <typename TProcessor> inline TProcessor UnityEngine::InputSystem::InputControl_1<TValue>::TryGetProcessor() {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControl_1<TValue>*>::get(), "TryGetProcessor",
                                  std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TProcessor>::get() }, ::std::span<Il2CppType const* const, 0>())));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TProcessor>::get() }));
  return ::cordl_internals::RunMethodRethrow<TProcessor, false>(this, ___internal_method);
}
template <typename TValue> inline void UnityEngine::InputSystem::InputControl_1<TValue>::AddProcessor(::System::Object* processor) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControl_1<TValue>*>::get(), 16)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, processor);
}
template <typename TValue> inline void UnityEngine::InputSystem::InputControl_1<TValue>::FinishSetup() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControl_1<TValue>*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TValue>
inline ::ArrayW<::UnityEngine::InputSystem::InputProcessor_1<TValue>*, ::Array<::UnityEngine::InputSystem::InputProcessor_1<TValue>*>*>
UnityEngine::InputSystem::InputControl_1<TValue>::get_processors() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControl_1<TValue>*>::get(),
                                                                             "get_processors", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::InputSystem::InputProcessor_1<TValue>*, ::Array<::UnityEngine::InputSystem::InputProcessor_1<TValue>*>*>, false>(
      this, ___internal_method);
}
template <typename TValue> inline void UnityEngine::InputSystem::InputControl_1<TValue>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControl_1<TValue>*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TValue> inline ::UnityEngine::InputSystem::InputControl_1<TValue>* UnityEngine::InputSystem::InputControl_1<TValue>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::InputSystem::InputControl_1<TValue>*>());
}
// Ctor Parameters []
template <typename TValue> constexpr ::UnityEngine::InputSystem::InputControl_1<TValue>::InputControl_1() {}

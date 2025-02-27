#pragma once
// IWYU pragma private; include "GlobalNamespace/MirroredNoteController_1.hpp"
#include "GlobalNamespace/zzzz__INoteControllerNoteDidPassJumpThreeQuartersEvent_impl.hpp"
#include "GlobalNamespace/zzzz__INoteControllerNoteDidStartDissolvingEvent_impl.hpp"
#include "GlobalNamespace/zzzz__NoteControllerBase_impl.hpp"
#include "GlobalNamespace/zzzz__MirroredNoteController_1_def.hpp"
#include "GlobalNamespace/zzzz__ILazyCopyHashSet_1_def.hpp"
#include "GlobalNamespace/zzzz__INoteControllerDidInitEvent_def.hpp"
#include "GlobalNamespace/zzzz__INoteControllerNoteDidPassJumpThreeQuartersEvent_def.hpp"
#include "GlobalNamespace/zzzz__INoteControllerNoteDidStartDissolvingEvent_def.hpp"
#include "GlobalNamespace/zzzz__LazyCopyHashSet_1_def.hpp"
#include "GlobalNamespace/zzzz__NoteControllerBase_def.hpp"
#include "GlobalNamespace/zzzz__NoteData_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
template <typename T> constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::MirroredNoteController_1<T>::__cordl_internal_get__noteTransform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noteTransform;
}
template <typename T> constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::MirroredNoteController_1<T>::__cordl_internal_get__noteTransform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noteTransform;
}
template <typename T> constexpr void GlobalNamespace::MirroredNoteController_1<T>::__cordl_internal_set__noteTransform(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->____noteTransform, value);
}
template <typename T> constexpr T& GlobalNamespace::MirroredNoteController_1<T>::__cordl_internal_get_followedNote() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___followedNote;
}
template <typename T> constexpr T const& GlobalNamespace::MirroredNoteController_1<T>::__cordl_internal_get_followedNote() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___followedNote;
}
template <typename T> constexpr void GlobalNamespace::MirroredNoteController_1<T>::__cordl_internal_set_followedNote(T value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->___followedNote, value);
}
template <typename T> constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::MirroredNoteController_1<T>::__cordl_internal_get__followedNoteTransform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____followedNoteTransform;
}
template <typename T> constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::MirroredNoteController_1<T>::__cordl_internal_get__followedNoteTransform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____followedNoteTransform;
}
template <typename T> constexpr void GlobalNamespace::MirroredNoteController_1<T>::__cordl_internal_set__followedNoteTransform(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->____followedNoteTransform, value);
}
template <typename T>
constexpr ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::INoteControllerDidInitEvent*>*& GlobalNamespace::MirroredNoteController_1<T>::__cordl_internal_get__didInitEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____didInitEvent;
}
template <typename T>
constexpr ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::INoteControllerDidInitEvent*>* const& GlobalNamespace::MirroredNoteController_1<T>::__cordl_internal_get__didInitEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____didInitEvent;
}
template <typename T>
constexpr void GlobalNamespace::MirroredNoteController_1<T>::__cordl_internal_set__didInitEvent(::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::INoteControllerDidInitEvent*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->____didInitEvent, value);
}
template <typename T>
constexpr ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteDidPassJumpThreeQuartersEvent*>*&
GlobalNamespace::MirroredNoteController_1<T>::__cordl_internal_get__noteDidPassJumpThreeQuartersEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noteDidPassJumpThreeQuartersEvent;
}
template <typename T>
constexpr ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteDidPassJumpThreeQuartersEvent*>* const&
GlobalNamespace::MirroredNoteController_1<T>::__cordl_internal_get__noteDidPassJumpThreeQuartersEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noteDidPassJumpThreeQuartersEvent;
}
template <typename T>
constexpr void GlobalNamespace::MirroredNoteController_1<T>::__cordl_internal_set__noteDidPassJumpThreeQuartersEvent(
    ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteDidPassJumpThreeQuartersEvent*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->____noteDidPassJumpThreeQuartersEvent, value);
}
template <typename T>
constexpr ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteDidStartDissolvingEvent*>*&
GlobalNamespace::MirroredNoteController_1<T>::__cordl_internal_get__noteDidStartDissolvingEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noteDidStartDissolvingEvent;
}
template <typename T>
constexpr ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteDidStartDissolvingEvent*>* const&
GlobalNamespace::MirroredNoteController_1<T>::__cordl_internal_get__noteDidStartDissolvingEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noteDidStartDissolvingEvent;
}
template <typename T>
constexpr void GlobalNamespace::MirroredNoteController_1<T>::__cordl_internal_set__noteDidStartDissolvingEvent(
    ::GlobalNamespace::LazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteDidStartDissolvingEvent*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->____noteDidStartDissolvingEvent, value);
}
template <typename T> inline ::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::INoteControllerDidInitEvent*>* GlobalNamespace::MirroredNoteController_1<T>::get_didInitEvent() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MirroredNoteController_1<T>*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::INoteControllerDidInitEvent*>*, false>(this, ___internal_method);
}
template <typename T>
inline ::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteDidPassJumpThreeQuartersEvent*>*
GlobalNamespace::MirroredNoteController_1<T>::get_noteDidPassJumpThreeQuartersEvent() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MirroredNoteController_1<T>*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteDidPassJumpThreeQuartersEvent*>*, false>(this, ___internal_method);
}
template <typename T>
inline ::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteDidStartDissolvingEvent*>* GlobalNamespace::MirroredNoteController_1<T>::get_noteDidStartDissolvingEvent() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MirroredNoteController_1<T>*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ILazyCopyHashSet_1<::GlobalNamespace::INoteControllerNoteDidStartDissolvingEvent*>*, false>(this, ___internal_method);
}
template <typename T> inline ::GlobalNamespace::NoteData* GlobalNamespace::MirroredNoteController_1<T>::get_noteData() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MirroredNoteController_1<T>*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::NoteData*, false>(this, ___internal_method);
}
template <typename T> inline void GlobalNamespace::MirroredNoteController_1<T>::Update() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MirroredNoteController_1<T>*>::get(), "Update",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline void GlobalNamespace::MirroredNoteController_1<T>::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MirroredNoteController_1<T>*>::get(),
                                                                             "OnDestroy", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline void GlobalNamespace::MirroredNoteController_1<T>::UpdatePositionAndRotation() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MirroredNoteController_1<T>*>::get(),
                                                                             "UpdatePositionAndRotation", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline void GlobalNamespace::MirroredNoteController_1<T>::Mirror(T noteController) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MirroredNoteController_1<T>*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, noteController);
}
template <typename T> inline void GlobalNamespace::MirroredNoteController_1<T>::RemoveListeners() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MirroredNoteController_1<T>*>::get(),
                                                                             "RemoveListeners", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline void GlobalNamespace::MirroredNoteController_1<T>::HandleNoteControllerNoteDidStartDissolving(::GlobalNamespace::NoteControllerBase* noteController, float_t duration) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MirroredNoteController_1<T>*>::get(),
                                               "HandleNoteControllerNoteDidStartDissolving", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteControllerBase*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, noteController, duration);
}
template <typename T> inline void GlobalNamespace::MirroredNoteController_1<T>::HandleNoteControllerNoteDidPassJumpThreeQuarters(::GlobalNamespace::NoteControllerBase* noteController) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MirroredNoteController_1<T>*>::get(), "HandleNoteControllerNoteDidPassJumpThreeQuarters",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteControllerBase*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, noteController);
}
template <typename T> inline void GlobalNamespace::MirroredNoteController_1<T>::Hide(bool hide) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MirroredNoteController_1<T>*>::get(), "Hide",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, hide);
}
template <typename T> inline void GlobalNamespace::MirroredNoteController_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MirroredNoteController_1<T>*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline ::GlobalNamespace::MirroredNoteController_1<T>* GlobalNamespace::MirroredNoteController_1<T>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::MirroredNoteController_1<T>*>());
}
/// @brief Convert operator to "::GlobalNamespace::INoteControllerNoteDidStartDissolvingEvent"
template <typename T> constexpr GlobalNamespace::MirroredNoteController_1<T>::operator ::GlobalNamespace::INoteControllerNoteDidStartDissolvingEvent*() noexcept {
  return static_cast<::GlobalNamespace::INoteControllerNoteDidStartDissolvingEvent*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::INoteControllerNoteDidStartDissolvingEvent"
template <typename T>
constexpr ::GlobalNamespace::INoteControllerNoteDidStartDissolvingEvent* GlobalNamespace::MirroredNoteController_1<T>::i___GlobalNamespace__INoteControllerNoteDidStartDissolvingEvent() noexcept {
  return static_cast<::GlobalNamespace::INoteControllerNoteDidStartDissolvingEvent*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::INoteControllerNoteDidPassJumpThreeQuartersEvent"
template <typename T> constexpr GlobalNamespace::MirroredNoteController_1<T>::operator ::GlobalNamespace::INoteControllerNoteDidPassJumpThreeQuartersEvent*() noexcept {
  return static_cast<::GlobalNamespace::INoteControllerNoteDidPassJumpThreeQuartersEvent*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::INoteControllerNoteDidPassJumpThreeQuartersEvent"
template <typename T>
constexpr ::GlobalNamespace::INoteControllerNoteDidPassJumpThreeQuartersEvent*
GlobalNamespace::MirroredNoteController_1<T>::i___GlobalNamespace__INoteControllerNoteDidPassJumpThreeQuartersEvent() noexcept {
  return static_cast<::GlobalNamespace::INoteControllerNoteDidPassJumpThreeQuartersEvent*>(static_cast<void*>(this));
}
// Ctor Parameters []
template <typename T> constexpr ::GlobalNamespace::MirroredNoteController_1<T>::MirroredNoteController_1() {}

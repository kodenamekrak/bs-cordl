#pragma once
// IWYU pragma private; include "GlobalNamespace/MultiplayerSyncStateManager_5.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerSyncStateManager_5_def.hpp"
#include "GlobalNamespace/zzzz__IConnectedPlayer_def.hpp"
#include "GlobalNamespace/zzzz__IMultiplayerSessionManager_def.hpp"
#include "GlobalNamespace/zzzz__IPacketPool_1_def.hpp"
#include "GlobalNamespace/zzzz__LocalMultiplayerSyncState_3_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerSessionManager_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerSyncStateManager_5_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerSyncState_3_def.hpp"
#include "GlobalNamespace/zzzz__RemoteMultiplayerSyncState_3_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
template <typename TStateTable, typename TType, typename TState, typename TSerializable, typename TDeltaSerializable>
inline void GlobalNamespace::MultiplayerSyncStateManager_5___c<TStateTable, TType, TState, TSerializable, TDeltaSerializable>::setStaticF___9(
    ::GlobalNamespace::MultiplayerSyncStateManager_5___c<TStateTable, TType, TState, TSerializable, TDeltaSerializable>* value) {
  ::cordl_internals::setStaticField<
      ::GlobalNamespace::MultiplayerSyncStateManager_5___c<TStateTable, TType, TState, TSerializable, TDeltaSerializable>*, "<>9",
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSyncStateManager_5___c<TStateTable, TType, TState, TSerializable, TDeltaSerializable>*>::get>(
      std::forward<::GlobalNamespace::MultiplayerSyncStateManager_5___c<TStateTable, TType, TState, TSerializable, TDeltaSerializable>*>(value));
}
template <typename TStateTable, typename TType, typename TState, typename TSerializable, typename TDeltaSerializable>
inline ::GlobalNamespace::MultiplayerSyncStateManager_5___c<TStateTable, TType, TState, TSerializable, TDeltaSerializable>*
GlobalNamespace::MultiplayerSyncStateManager_5___c<TStateTable, TType, TState, TSerializable, TDeltaSerializable>::getStaticF___9() {
  return ::cordl_internals::getStaticField<
      ::GlobalNamespace::MultiplayerSyncStateManager_5___c<TStateTable, TType, TState, TSerializable, TDeltaSerializable>*, "<>9",
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSyncStateManager_5___c<TStateTable, TType, TState, TSerializable, TDeltaSerializable>*>::get>();
}
template <typename TStateTable, typename TType, typename TState, typename TSerializable, typename TDeltaSerializable>
inline void GlobalNamespace::MultiplayerSyncStateManager_5___c<TStateTable, TType, TState, TSerializable, TDeltaSerializable>::setStaticF___9__37_0(
    ::System::Func_2<::GlobalNamespace::RemoteMultiplayerSyncState_3<TStateTable, TType, TState>*, int32_t>* value) {
  ::cordl_internals::setStaticField<
      ::System::Func_2<::GlobalNamespace::RemoteMultiplayerSyncState_3<TStateTable, TType, TState>*, int32_t>*, "<>9__37_0",
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSyncStateManager_5___c<TStateTable, TType, TState, TSerializable, TDeltaSerializable>*>::get>(
      std::forward<::System::Func_2<::GlobalNamespace::RemoteMultiplayerSyncState_3<TStateTable, TType, TState>*, int32_t>*>(value));
}
template <typename TStateTable, typename TType, typename TState, typename TSerializable, typename TDeltaSerializable>
inline ::System::Func_2<::GlobalNamespace::RemoteMultiplayerSyncState_3<TStateTable, TType, TState>*, int32_t>*
GlobalNamespace::MultiplayerSyncStateManager_5___c<TStateTable, TType, TState, TSerializable, TDeltaSerializable>::getStaticF___9__37_0() {
  return ::cordl_internals::getStaticField<
      ::System::Func_2<::GlobalNamespace::RemoteMultiplayerSyncState_3<TStateTable, TType, TState>*, int32_t>*, "<>9__37_0",
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSyncStateManager_5___c<TStateTable, TType, TState, TSerializable, TDeltaSerializable>*>::get>();
}
template <typename TStateTable, typename TType, typename TState, typename TSerializable, typename TDeltaSerializable>
inline void GlobalNamespace::MultiplayerSyncStateManager_5___c<TStateTable, TType, TState, TSerializable, TDeltaSerializable>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSyncStateManager_5___c<TStateTable, TType, TState, TSerializable, TDeltaSerializable>*>::get(), ".ctor",
      std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TStateTable, typename TType, typename TState, typename TSerializable, typename TDeltaSerializable>
inline int32_t GlobalNamespace::MultiplayerSyncStateManager_5___c<TStateTable, TType, TState, TSerializable, TDeltaSerializable>::_HandlePlayerConnected_b__37_0(
    ::GlobalNamespace::RemoteMultiplayerSyncState_3<TStateTable, TType, TState>* s) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSyncStateManager_5___c<TStateTable, TType, TState, TSerializable, TDeltaSerializable>*>::get(),
      "<HandlePlayerConnected>b__37_0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::RemoteMultiplayerSyncState_3<TStateTable, TType, TState>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, s);
}
template <typename TStateTable, typename TType, typename TState, typename TSerializable, typename TDeltaSerializable>
inline ::GlobalNamespace::MultiplayerSyncStateManager_5___c<TStateTable, TType, TState, TSerializable, TDeltaSerializable>*
GlobalNamespace::MultiplayerSyncStateManager_5___c<TStateTable, TType, TState, TSerializable, TDeltaSerializable>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::MultiplayerSyncStateManager_5___c<TStateTable, TType, TState, TSerializable, TDeltaSerializable>*>());
}
// Ctor Parameters []
template <typename TStateTable, typename TType, typename TState, typename TSerializable, typename TDeltaSerializable>
constexpr ::GlobalNamespace::MultiplayerSyncStateManager_5___c<TStateTable, TType, TState, TSerializable, TDeltaSerializable>::MultiplayerSyncStateManager_5___c() {}
template <typename TStateTable, typename TType, typename TState, typename TSerializable, typename TDeltaSerializable>
constexpr ::GlobalNamespace::IMultiplayerSessionManager*&
GlobalNamespace::MultiplayerSyncStateManager_5<TStateTable, TType, TState, TSerializable, TDeltaSerializable>::__cordl_internal_get__multiplayerSessionManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerSessionManager;
}
template <typename TStateTable, typename TType, typename TState, typename TSerializable, typename TDeltaSerializable>
constexpr ::GlobalNamespace::IMultiplayerSessionManager* const&
GlobalNamespace::MultiplayerSyncStateManager_5<TStateTable, TType, TState, TSerializable, TDeltaSerializable>::__cordl_internal_get__multiplayerSessionManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerSessionManager;
}
template <typename TStateTable, typename TType, typename TState, typename TSerializable, typename TDeltaSerializable>
constexpr void GlobalNamespace::MultiplayerSyncStateManager_5<TStateTable, TType, TState, TSerializable, TDeltaSerializable>::__cordl_internal_set__multiplayerSessionManager(
    ::GlobalNamespace::IMultiplayerSessionManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->____multiplayerSessionManager, value);
}
template <typename TStateTable, typename TType, typename TState, typename TSerializable, typename TDeltaSerializable>
constexpr ::GlobalNamespace::LocalMultiplayerSyncState_3<TStateTable, TType, TState>*&
GlobalNamespace::MultiplayerSyncStateManager_5<TStateTable, TType, TState, TSerializable, TDeltaSerializable>::__cordl_internal_get__localState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____localState;
}
template <typename TStateTable, typename TType, typename TState, typename TSerializable, typename TDeltaSerializable>
constexpr ::GlobalNamespace::LocalMultiplayerSyncState_3<TStateTable, TType, TState>* const&
GlobalNamespace::MultiplayerSyncStateManager_5<TStateTable, TType, TState, TSerializable, TDeltaSerializable>::__cordl_internal_get__localState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____localState;
}
template <typename TStateTable, typename TType, typename TState, typename TSerializable, typename TDeltaSerializable>
constexpr void GlobalNamespace::MultiplayerSyncStateManager_5<TStateTable, TType, TState, TSerializable, TDeltaSerializable>::__cordl_internal_set__localState(
    ::GlobalNamespace::LocalMultiplayerSyncState_3<TStateTable, TType, TState>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->____localState, value);
}
template <typename TStateTable, typename TType, typename TState, typename TSerializable, typename TDeltaSerializable>
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::RemoteMultiplayerSyncState_3<TStateTable, TType, TState>*>*&
GlobalNamespace::MultiplayerSyncStateManager_5<TStateTable, TType, TState, TSerializable, TDeltaSerializable>::__cordl_internal_get__connectedPlayerStates() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____connectedPlayerStates;
}
template <typename TStateTable, typename TType, typename TState, typename TSerializable, typename TDeltaSerializable>
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::RemoteMultiplayerSyncState_3<TStateTable, TType, TState>*>* const&
GlobalNamespace::MultiplayerSyncStateManager_5<TStateTable, TType, TState, TSerializable, TDeltaSerializable>::__cordl_internal_get__connectedPlayerStates() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____connectedPlayerStates;
}
template <typename TStateTable, typename TType, typename TState, typename TSerializable, typename TDeltaSerializable>
constexpr void GlobalNamespace::MultiplayerSyncStateManager_5<TStateTable, TType, TState, TSerializable, TDeltaSerializable>::__cordl_internal_set__connectedPlayerStates(
    ::System::Collections::Generic::List_1<::GlobalNamespace::RemoteMultiplayerSyncState_3<TStateTable, TType, TState>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->____connectedPlayerStates, value);
}
template <typename TStateTable, typename TType, typename TState, typename TSerializable, typename TDeltaSerializable>
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::RemoteMultiplayerSyncState_3<TStateTable, TType, TState>*>*&
GlobalNamespace::MultiplayerSyncStateManager_5<TStateTable, TType, TState, TSerializable, TDeltaSerializable>::__cordl_internal_get__disconnectedPlayerStates() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disconnectedPlayerStates;
}
template <typename TStateTable, typename TType, typename TState, typename TSerializable, typename TDeltaSerializable>
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::RemoteMultiplayerSyncState_3<TStateTable, TType, TState>*>* const&
GlobalNamespace::MultiplayerSyncStateManager_5<TStateTable, TType, TState, TSerializable, TDeltaSerializable>::__cordl_internal_get__disconnectedPlayerStates() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disconnectedPlayerStates;
}
template <typename TStateTable, typename TType, typename TState, typename TSerializable, typename TDeltaSerializable>
constexpr void GlobalNamespace::MultiplayerSyncStateManager_5<TStateTable, TType, TState, TSerializable, TDeltaSerializable>::__cordl_internal_set__disconnectedPlayerStates(
    ::System::Collections::Generic::List_1<::GlobalNamespace::RemoteMultiplayerSyncState_3<TStateTable, TType, TState>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  ::cordl_internals::setInstanceField(this, &this->____disconnectedPlayerStates, value);
}
template <typename TStateTable, typename TType, typename TState, typename TSerializable, typename TDeltaSerializable>
inline ::GlobalNamespace::IMultiplayerSessionManager* GlobalNamespace::MultiplayerSyncStateManager_5<TStateTable, TType, TState, TSerializable, TDeltaSerializable>::get_multiplayerSessionManager() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSyncStateManager_5<TStateTable, TType, TState, TSerializable, TDeltaSerializable>*>::get(),
      "get_multiplayerSessionManager", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IMultiplayerSessionManager*, false>(this, ___internal_method);
}
template <typename TStateTable, typename TType, typename TState, typename TSerializable, typename TDeltaSerializable>
inline ::GlobalNamespace::LocalMultiplayerSyncState_3<TStateTable, TType, TState>*
GlobalNamespace::MultiplayerSyncStateManager_5<TStateTable, TType, TState, TSerializable, TDeltaSerializable>::get_localState() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSyncStateManager_5<TStateTable, TType, TState, TSerializable, TDeltaSerializable>*>::get(), "get_localState",
      std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::LocalMultiplayerSyncState_3<TStateTable, TType, TState>*, false>(this, ___internal_method);
}
template <typename TStateTable, typename TType, typename TState, typename TSerializable, typename TDeltaSerializable>
inline int32_t GlobalNamespace::MultiplayerSyncStateManager_5<TStateTable, TType, TState, TSerializable, TDeltaSerializable>::get_connectedPlayerCount() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSyncStateManager_5<TStateTable, TType, TState, TSerializable, TDeltaSerializable>*>::get(),
      "get_connectedPlayerCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
template <typename TStateTable, typename TType, typename TState, typename TSerializable, typename TDeltaSerializable>
inline int32_t GlobalNamespace::MultiplayerSyncStateManager_5<TStateTable, TType, TState, TSerializable, TDeltaSerializable>::get_disconnectedPlayerCount() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSyncStateManager_5<TStateTable, TType, TState, TSerializable, TDeltaSerializable>*>::get(),
      "get_disconnectedPlayerCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
template <typename TStateTable, typename TType, typename TState, typename TSerializable, typename TDeltaSerializable>
inline int64_t GlobalNamespace::MultiplayerSyncStateManager_5<TStateTable, TType, TState, TSerializable, TDeltaSerializable>::get_syncTime() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
      il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSyncStateManager_5<TStateTable, TType, TState, TSerializable, TDeltaSerializable>*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(this, ___internal_method);
}
template <typename TStateTable, typename TType, typename TState, typename TSerializable, typename TDeltaSerializable>
inline int64_t GlobalNamespace::MultiplayerSyncStateManager_5<TStateTable, TType, TState, TSerializable, TDeltaSerializable>::get_deltaUpdateFrequencyMs() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
      il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSyncStateManager_5<TStateTable, TType, TState, TSerializable, TDeltaSerializable>*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(this, ___internal_method);
}
template <typename TStateTable, typename TType, typename TState, typename TSerializable, typename TDeltaSerializable>
inline int64_t GlobalNamespace::MultiplayerSyncStateManager_5<TStateTable, TType, TState, TSerializable, TDeltaSerializable>::get_fullStateUpdateFrequencyMs() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
      il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSyncStateManager_5<TStateTable, TType, TState, TSerializable, TDeltaSerializable>*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(this, ___internal_method);
}
template <typename TStateTable, typename TType, typename TState, typename TSerializable, typename TDeltaSerializable>
inline int32_t GlobalNamespace::MultiplayerSyncStateManager_5<TStateTable, TType, TState, TSerializable, TDeltaSerializable>::get_localBufferSize() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
      il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSyncStateManager_5<TStateTable, TType, TState, TSerializable, TDeltaSerializable>*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
template <typename TStateTable, typename TType, typename TState, typename TSerializable, typename TDeltaSerializable>
inline int32_t GlobalNamespace::MultiplayerSyncStateManager_5<TStateTable, TType, TState, TSerializable, TDeltaSerializable>::get_remoteBufferSize() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
      il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSyncStateManager_5<TStateTable, TType, TState, TSerializable, TDeltaSerializable>*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
template <typename TStateTable, typename TType, typename TState, typename TSerializable, typename TDeltaSerializable>
inline ::GlobalNamespace::IPacketPool_1<TSerializable>* GlobalNamespace::MultiplayerSyncStateManager_5<TStateTable, TType, TState, TSerializable, TDeltaSerializable>::get_serializablePool() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
      il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSyncStateManager_5<TStateTable, TType, TState, TSerializable, TDeltaSerializable>*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IPacketPool_1<TSerializable>*, false>(this, ___internal_method);
}
template <typename TStateTable, typename TType, typename TState, typename TSerializable, typename TDeltaSerializable>
inline ::GlobalNamespace::IPacketPool_1<TDeltaSerializable>*
GlobalNamespace::MultiplayerSyncStateManager_5<TStateTable, TType, TState, TSerializable, TDeltaSerializable>::get_deltaSerializablePool() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
      il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSyncStateManager_5<TStateTable, TType, TState, TSerializable, TDeltaSerializable>*>::get(), 12)));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IPacketPool_1<TDeltaSerializable>*, false>(this, ___internal_method);
}
template <typename TStateTable, typename TType, typename TState, typename TSerializable, typename TDeltaSerializable>
inline ::GlobalNamespace::MultiplayerSessionManager_MessageType GlobalNamespace::MultiplayerSyncStateManager_5<TStateTable, TType, TState, TSerializable, TDeltaSerializable>::get_messageType() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
      il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSyncStateManager_5<TStateTable, TType, TState, TSerializable, TDeltaSerializable>*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MultiplayerSessionManager_MessageType, false>(this, ___internal_method);
}
template <typename TStateTable, typename TType, typename TState, typename TSerializable, typename TDeltaSerializable>
inline ::GlobalNamespace::MultiplayerSessionManager_MessageType GlobalNamespace::MultiplayerSyncStateManager_5<TStateTable, TType, TState, TSerializable, TDeltaSerializable>::get_deltaMessageType() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
      il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSyncStateManager_5<TStateTable, TType, TState, TSerializable, TDeltaSerializable>*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MultiplayerSessionManager_MessageType, false>(this, ___internal_method);
}
template <typename TStateTable, typename TType, typename TState, typename TSerializable, typename TDeltaSerializable>
inline void GlobalNamespace::MultiplayerSyncStateManager_5<TStateTable, TType, TState, TSerializable, TDeltaSerializable>::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSyncStateManager_5<TStateTable, TType, TState, TSerializable, TDeltaSerializable>*>::get(), "Start",
      std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TStateTable, typename TType, typename TState, typename TSerializable, typename TDeltaSerializable>
inline void GlobalNamespace::MultiplayerSyncStateManager_5<TStateTable, TType, TState, TSerializable, TDeltaSerializable>::LateUpdate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSyncStateManager_5<TStateTable, TType, TState, TSerializable, TDeltaSerializable>*>::get(), "LateUpdate",
      std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TStateTable, typename TType, typename TState, typename TSerializable, typename TDeltaSerializable>
inline void GlobalNamespace::MultiplayerSyncStateManager_5<TStateTable, TType, TState, TSerializable, TDeltaSerializable>::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSyncStateManager_5<TStateTable, TType, TState, TSerializable, TDeltaSerializable>*>::get(), "OnDestroy",
      std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TStateTable, typename TType, typename TState, typename TSerializable, typename TDeltaSerializable>
inline TState GlobalNamespace::MultiplayerSyncStateManager_5<TStateTable, TType, TState, TSerializable, TDeltaSerializable>::Interpolate(TState a, int64_t timeA, TState b, int64_t timeB,
                                                                                                                                         int64_t time) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
      il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSyncStateManager_5<TStateTable, TType, TState, TSerializable, TDeltaSerializable>*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<TState, false>(this, ___internal_method, a, timeA, b, timeB, time);
}
template <typename TStateTable, typename TType, typename TState, typename TSerializable, typename TDeltaSerializable>
inline TState GlobalNamespace::MultiplayerSyncStateManager_5<TStateTable, TType, TState, TSerializable, TDeltaSerializable>::Smooth(TState a, TState b, float_t smoooth) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
      il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSyncStateManager_5<TStateTable, TType, TState, TSerializable, TDeltaSerializable>*>::get(), 16)));
  return ::cordl_internals::RunMethodRethrow<TState, false>(this, ___internal_method, a, b, smoooth);
}
template <typename TStateTable, typename TType, typename TState, typename TSerializable, typename TDeltaSerializable>
inline void GlobalNamespace::MultiplayerSyncStateManager_5<TStateTable, TType, TState, TSerializable, TDeltaSerializable>::ClearBufferedStates() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSyncStateManager_5<TStateTable, TType, TState, TSerializable, TDeltaSerializable>*>::get(),
      "ClearBufferedStates", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TStateTable, typename TType, typename TState, typename TSerializable, typename TDeltaSerializable>
inline void GlobalNamespace::MultiplayerSyncStateManager_5<TStateTable, TType, TState, TSerializable, TDeltaSerializable>::TryCreateLocalState() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSyncStateManager_5<TStateTable, TType, TState, TSerializable, TDeltaSerializable>*>::get(),
      "TryCreateLocalState", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TStateTable, typename TType, typename TState, typename TSerializable, typename TDeltaSerializable>
inline void GlobalNamespace::MultiplayerSyncStateManager_5<TStateTable, TType, TState, TSerializable, TDeltaSerializable>::HandlePlayerConnected(::GlobalNamespace::IConnectedPlayer* player) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSyncStateManager_5<TStateTable, TType, TState, TSerializable, TDeltaSerializable>*>::get(),
      "HandlePlayerConnected", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnectedPlayer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, player);
}
template <typename TStateTable, typename TType, typename TState, typename TSerializable, typename TDeltaSerializable>
inline void GlobalNamespace::MultiplayerSyncStateManager_5<TStateTable, TType, TState, TSerializable, TDeltaSerializable>::HandlePlayerDisconnected(::GlobalNamespace::IConnectedPlayer* player) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSyncStateManager_5<TStateTable, TType, TState, TSerializable, TDeltaSerializable>*>::get(),
      "HandlePlayerDisconnected", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnectedPlayer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, player);
}
template <typename TStateTable, typename TType, typename TState, typename TSerializable, typename TDeltaSerializable>
inline void GlobalNamespace::MultiplayerSyncStateManager_5<TStateTable, TType, TState, TSerializable, TDeltaSerializable>::HandleSyncPacket(TSerializable packet,
                                                                                                                                            ::GlobalNamespace::IConnectedPlayer* player) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSyncStateManager_5<TStateTable, TType, TState, TSerializable, TDeltaSerializable>*>::get(),
      "HandleSyncPacket", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TSerializable>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnectedPlayer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, packet, player);
}
template <typename TStateTable, typename TType, typename TState, typename TSerializable, typename TDeltaSerializable>
inline void GlobalNamespace::MultiplayerSyncStateManager_5<TStateTable, TType, TState, TSerializable, TDeltaSerializable>::HandleSyncDeltaPacket(TDeltaSerializable packet,
                                                                                                                                                 ::GlobalNamespace::IConnectedPlayer* player) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSyncStateManager_5<TStateTable, TType, TState, TSerializable, TDeltaSerializable>*>::get(),
      "HandleSyncDeltaPacket", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TDeltaSerializable>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnectedPlayer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, packet, player);
}
template <typename TStateTable, typename TType, typename TState, typename TSerializable, typename TDeltaSerializable>
inline ::GlobalNamespace::MultiplayerSyncState_3<TStateTable, TType, TState>*
GlobalNamespace::MultiplayerSyncStateManager_5<TStateTable, TType, TState, TSerializable, TDeltaSerializable>::GetSyncState(int32_t i) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSyncStateManager_5<TStateTable, TType, TState, TSerializable, TDeltaSerializable>*>::get(), "GetSyncState",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MultiplayerSyncState_3<TStateTable, TType, TState>*, false>(this, ___internal_method, i);
}
template <typename TStateTable, typename TType, typename TState, typename TSerializable, typename TDeltaSerializable>
inline ::GlobalNamespace::MultiplayerSyncState_3<TStateTable, TType, TState>*
GlobalNamespace::MultiplayerSyncStateManager_5<TStateTable, TType, TState, TSerializable, TDeltaSerializable>::GetSyncStateForPlayer(::GlobalNamespace::IConnectedPlayer* player) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSyncStateManager_5<TStateTable, TType, TState, TSerializable, TDeltaSerializable>*>::get(),
      "GetSyncStateForPlayer", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IConnectedPlayer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MultiplayerSyncState_3<TStateTable, TType, TState>*, false>(this, ___internal_method, player);
}
template <typename TStateTable, typename TType, typename TState, typename TSerializable, typename TDeltaSerializable>
inline ::GlobalNamespace::MultiplayerSyncState_3<TStateTable, TType, TState>*
GlobalNamespace::MultiplayerSyncStateManager_5<TStateTable, TType, TState, TSerializable, TDeltaSerializable>::GetDisconnectedSyncState(int32_t i) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSyncStateManager_5<TStateTable, TType, TState, TSerializable, TDeltaSerializable>*>::get(),
      "GetDisconnectedSyncState", std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MultiplayerSyncState_3<TStateTable, TType, TState>*, false>(this, ___internal_method, i);
}
template <typename TStateTable, typename TType, typename TState, typename TSerializable, typename TDeltaSerializable>
inline void GlobalNamespace::MultiplayerSyncStateManager_5<TStateTable, TType, TState, TSerializable, TDeltaSerializable>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerSyncStateManager_5<TStateTable, TType, TState, TSerializable, TDeltaSerializable>*>::get(), ".ctor",
      std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename TStateTable, typename TType, typename TState, typename TSerializable, typename TDeltaSerializable>
inline ::GlobalNamespace::MultiplayerSyncStateManager_5<TStateTable, TType, TState, TSerializable, TDeltaSerializable>*
GlobalNamespace::MultiplayerSyncStateManager_5<TStateTable, TType, TState, TSerializable, TDeltaSerializable>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::MultiplayerSyncStateManager_5<TStateTable, TType, TState, TSerializable, TDeltaSerializable>*>());
}
// Ctor Parameters []
template <typename TStateTable, typename TType, typename TState, typename TSerializable, typename TDeltaSerializable>
constexpr ::GlobalNamespace::MultiplayerSyncStateManager_5<TStateTable, TType, TState, TSerializable, TDeltaSerializable>::MultiplayerSyncStateManager_5() {}

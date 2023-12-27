#pragma once
#include "GlobalNamespace/zzzz__StandardScoreSyncState_impl.hpp"
#include "GlobalNamespace/zzzz__SyncStateId_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__StandardScoreSyncStateNetSerializable_def.hpp"
#include "GlobalNamespace/zzzz__StandardScoreSyncState_def.hpp"
#include "GlobalNamespace/zzzz__PacketPool_1_def.hpp"
#include "GlobalNamespace/zzzz__IPoolablePacket_def.hpp"
#include "LiteNetLib/Utils/zzzz__INetSerializable_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataReader_def.hpp"
#include "GlobalNamespace/zzzz__ISyncStateSerializable_1_def.hpp"
#include "GlobalNamespace/zzzz__SyncStateId_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataWriter_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::StandardScoreSyncStateNetSerializable.get_pool
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::PacketPool_1<::GlobalNamespace::StandardScoreSyncStateNetSerializable*>* (*)()>(
    &::GlobalNamespace::StandardScoreSyncStateNetSerializable::get_pool)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xe5aabc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardScoreSyncStateNetSerializable*>::get(),
                                                                               "get_pool", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardScoreSyncStateNetSerializable.get_id
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::SyncStateId (::GlobalNamespace::StandardScoreSyncStateNetSerializable::*)()>(
    &::GlobalNamespace::StandardScoreSyncStateNetSerializable::get_id)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe5aafc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardScoreSyncStateNetSerializable*>::get(),
                                                                               "get_id", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardScoreSyncStateNetSerializable.set_id
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandardScoreSyncStateNetSerializable::*)(::GlobalNamespace::SyncStateId)>(
    &::GlobalNamespace::StandardScoreSyncStateNetSerializable::set_id)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe5ab04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardScoreSyncStateNetSerializable*>::get(), "set_id", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SyncStateId>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardScoreSyncStateNetSerializable.get_time
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::GlobalNamespace::StandardScoreSyncStateNetSerializable::*)()>(
    &::GlobalNamespace::StandardScoreSyncStateNetSerializable::get_time)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe5ab0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardScoreSyncStateNetSerializable*>::get(),
                                                                               "get_time", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardScoreSyncStateNetSerializable.set_time
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandardScoreSyncStateNetSerializable::*)(int64_t)>(
    &::GlobalNamespace::StandardScoreSyncStateNetSerializable::set_time)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe5ab14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardScoreSyncStateNetSerializable*>::get(), "set_time",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardScoreSyncStateNetSerializable.get_state
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::StandardScoreSyncState (::GlobalNamespace::StandardScoreSyncStateNetSerializable::*)()>(
    &::GlobalNamespace::StandardScoreSyncStateNetSerializable::get_state)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xe5ab1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardScoreSyncStateNetSerializable*>::get(),
                                                                               "get_state", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardScoreSyncStateNetSerializable.set_state
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandardScoreSyncStateNetSerializable::*)(::GlobalNamespace::StandardScoreSyncState)>(
    &::GlobalNamespace::StandardScoreSyncStateNetSerializable::set_state)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xe5ab30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardScoreSyncStateNetSerializable*>::get(), "set_state", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::StandardScoreSyncState>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardScoreSyncStateNetSerializable.Serialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandardScoreSyncStateNetSerializable::*)(::LiteNetLib::Utils::NetDataWriter*)>(
    &::GlobalNamespace::StandardScoreSyncStateNetSerializable::Serialize)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xe5ab44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardScoreSyncStateNetSerializable*>::get(), "Serialize", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardScoreSyncStateNetSerializable.Deserialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandardScoreSyncStateNetSerializable::*)(::LiteNetLib::Utils::NetDataReader*)>(
    &::GlobalNamespace::StandardScoreSyncStateNetSerializable::Deserialize)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xe5ab90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardScoreSyncStateNetSerializable*>::get(), "Deserialize", std::vector<Il2CppClass*>{},
                                   ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardScoreSyncStateNetSerializable.Release
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandardScoreSyncStateNetSerializable::*)()>(
    &::GlobalNamespace::StandardScoreSyncStateNetSerializable::Release)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xe5abe0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardScoreSyncStateNetSerializable*>::get(),
                                                                               "Release", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardScoreSyncStateNetSerializable._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandardScoreSyncStateNetSerializable::*)()>(
    &::GlobalNamespace::StandardScoreSyncStateNetSerializable::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe5ac34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardScoreSyncStateNetSerializable*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::LiteNetLib::Utils::INetSerializable"
constexpr GlobalNamespace::StandardScoreSyncStateNetSerializable::operator ::LiteNetLib::Utils::INetSerializable*() noexcept {
  return static_cast<::LiteNetLib::Utils::INetSerializable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::IPoolablePacket"
constexpr GlobalNamespace::StandardScoreSyncStateNetSerializable::operator ::GlobalNamespace::IPoolablePacket*() noexcept {
  return static_cast<::GlobalNamespace::IPoolablePacket*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::ISyncStateSerializable_1<::GlobalNamespace::StandardScoreSyncState>"
constexpr GlobalNamespace::StandardScoreSyncStateNetSerializable::operator ::GlobalNamespace::ISyncStateSerializable_1<::GlobalNamespace::StandardScoreSyncState>*() noexcept {
  return static_cast<::GlobalNamespace::ISyncStateSerializable_1<::GlobalNamespace::StandardScoreSyncState>*>(static_cast<void*>(this));
}
constexpr ::GlobalNamespace::StandardScoreSyncState& GlobalNamespace::StandardScoreSyncStateNetSerializable::__get__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____state;
}
constexpr ::GlobalNamespace::StandardScoreSyncState const& GlobalNamespace::StandardScoreSyncStateNetSerializable::__get__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____state;
}
constexpr void GlobalNamespace::StandardScoreSyncStateNetSerializable::__set__state(::GlobalNamespace::StandardScoreSyncState value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____state = value;
}
constexpr ::GlobalNamespace::SyncStateId& GlobalNamespace::StandardScoreSyncStateNetSerializable::__get__id_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____id_k__BackingField;
}
constexpr ::GlobalNamespace::SyncStateId const& GlobalNamespace::StandardScoreSyncStateNetSerializable::__get__id_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____id_k__BackingField;
}
constexpr void GlobalNamespace::StandardScoreSyncStateNetSerializable::__set__id_k__BackingField(::GlobalNamespace::SyncStateId value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____id_k__BackingField = value;
}
constexpr int64_t& GlobalNamespace::StandardScoreSyncStateNetSerializable::__get__time_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____time_k__BackingField;
}
constexpr int64_t const& GlobalNamespace::StandardScoreSyncStateNetSerializable::__get__time_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____time_k__BackingField;
}
constexpr void GlobalNamespace::StandardScoreSyncStateNetSerializable::__set__time_k__BackingField(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____time_k__BackingField = value;
}
inline ::GlobalNamespace::PacketPool_1<::GlobalNamespace::StandardScoreSyncStateNetSerializable*>* GlobalNamespace::StandardScoreSyncStateNetSerializable::get_pool() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardScoreSyncStateNetSerializable*>::get(),
                                                                             "get_pool", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PacketPool_1<::GlobalNamespace::StandardScoreSyncStateNetSerializable*>*, false>(nullptr, ___internal_method);
}
inline ::GlobalNamespace::SyncStateId GlobalNamespace::StandardScoreSyncStateNetSerializable::get_id() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardScoreSyncStateNetSerializable*>::get(),
                                                                             "get_id", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::SyncStateId, false>(this, ___internal_method);
}
inline void GlobalNamespace::StandardScoreSyncStateNetSerializable::set_id(::GlobalNamespace::SyncStateId value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardScoreSyncStateNetSerializable*>::get(), "set_id", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SyncStateId>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int64_t GlobalNamespace::StandardScoreSyncStateNetSerializable::get_time() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardScoreSyncStateNetSerializable*>::get(),
                                                                             "get_time", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(this, ___internal_method);
}
inline void GlobalNamespace::StandardScoreSyncStateNetSerializable::set_time(int64_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardScoreSyncStateNetSerializable*>::get(), "set_time",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::GlobalNamespace::StandardScoreSyncState GlobalNamespace::StandardScoreSyncStateNetSerializable::get_state() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardScoreSyncStateNetSerializable*>::get(),
                                                                             "get_state", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::StandardScoreSyncState, false>(this, ___internal_method);
}
inline void GlobalNamespace::StandardScoreSyncStateNetSerializable::set_state(::GlobalNamespace::StandardScoreSyncState value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardScoreSyncStateNetSerializable*>::get(), "set_state", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::StandardScoreSyncState>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::StandardScoreSyncStateNetSerializable::Serialize(::LiteNetLib::Utils::NetDataWriter* writer) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardScoreSyncStateNetSerializable*>::get(), "Serialize", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, writer);
}
inline void GlobalNamespace::StandardScoreSyncStateNetSerializable::Deserialize(::LiteNetLib::Utils::NetDataReader* reader) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardScoreSyncStateNetSerializable*>::get(), "Deserialize", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, reader);
}
inline void GlobalNamespace::StandardScoreSyncStateNetSerializable::Release() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardScoreSyncStateNetSerializable*>::get(),
                                                                             "Release", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::StandardScoreSyncStateNetSerializable* GlobalNamespace::StandardScoreSyncStateNetSerializable::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::StandardScoreSyncStateNetSerializable*>());
}
inline void GlobalNamespace::StandardScoreSyncStateNetSerializable::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardScoreSyncStateNetSerializable*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::StandardScoreSyncStateNetSerializable::StandardScoreSyncStateNetSerializable() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
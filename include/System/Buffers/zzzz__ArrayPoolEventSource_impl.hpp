#pragma once
#include "System/Diagnostics/Tracing/zzzz__EventSource_impl.hpp"
#include "System/Buffers/zzzz__ArrayPoolEventSource_def.hpp"
#include "System/Buffers/zzzz__ArrayPoolEventSource_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Buffers::__ArrayPoolEventSource__BufferAllocatedReason::__ArrayPoolEventSource__BufferAllocatedReason(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Buffers::__ArrayPoolEventSource__BufferAllocatedReason::__ArrayPoolEventSource__BufferAllocatedReason() {}
constexpr ::System::Buffers::__ArrayPoolEventSource__BufferAllocatedReason System::Buffers::__ArrayPoolEventSource__BufferAllocatedReason::Pooled{ static_cast<int32_t>(0x0) };
constexpr ::System::Buffers::__ArrayPoolEventSource__BufferAllocatedReason System::Buffers::__ArrayPoolEventSource__BufferAllocatedReason::OverMaximumSize{ static_cast<int32_t>(0x1) };
constexpr ::System::Buffers::__ArrayPoolEventSource__BufferAllocatedReason System::Buffers::__ArrayPoolEventSource__BufferAllocatedReason::PoolExhausted{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::System::Buffers::ArrayPoolEventSource._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Buffers::ArrayPoolEventSource::*)()>(&::System::Buffers::ArrayPoolEventSource::_ctor)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x258c194;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::ArrayPoolEventSource*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffers::ArrayPoolEventSource.BufferRented
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Buffers::ArrayPoolEventSource::*)(int32_t, int32_t, int32_t, int32_t)>(
    &::System::Buffers::ArrayPoolEventSource::BufferRented)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x258c240;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::ArrayPoolEventSource*>::get(), "BufferRented", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffers::ArrayPoolEventSource.BufferAllocated
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Buffers::ArrayPoolEventSource::*)(
    int32_t, int32_t, int32_t, int32_t, ::System::Buffers::__ArrayPoolEventSource__BufferAllocatedReason)>(&::System::Buffers::ArrayPoolEventSource::BufferAllocated)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x258c350;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::ArrayPoolEventSource*>::get(), "BufferAllocated", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Buffers::__ArrayPoolEventSource__BufferAllocatedReason>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffers::ArrayPoolEventSource.BufferReturned
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Buffers::ArrayPoolEventSource::*)(int32_t, int32_t, int32_t)>(
    &::System::Buffers::ArrayPoolEventSource::BufferReturned)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x258c47c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::ArrayPoolEventSource*>::get(), "BufferReturned", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffers::ArrayPoolEventSource.BufferTrimmed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Buffers::ArrayPoolEventSource::*)(int32_t, int32_t, int32_t)>(
    &::System::Buffers::ArrayPoolEventSource::BufferTrimmed)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x258c494;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::ArrayPoolEventSource*>::get(), "BufferTrimmed", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Buffers::ArrayPoolEventSource.BufferTrimPoll
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Buffers::ArrayPoolEventSource::*)(int32_t, int32_t)>(
    &::System::Buffers::ArrayPoolEventSource::BufferTrimPoll)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x258c4ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::ArrayPoolEventSource*>::get(), "BufferTrimPoll", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
inline void System::Buffers::ArrayPoolEventSource::setStaticF_Log(::System::Buffers::ArrayPoolEventSource* value) {
  ::cordl_internals::setStaticField<::System::Buffers::ArrayPoolEventSource*, "Log", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::ArrayPoolEventSource*>::get>(
      std::forward<::System::Buffers::ArrayPoolEventSource*>(value));
}
inline ::System::Buffers::ArrayPoolEventSource* System::Buffers::ArrayPoolEventSource::getStaticF_Log() {
  return ::cordl_internals::getStaticField<::System::Buffers::ArrayPoolEventSource*, "Log", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::ArrayPoolEventSource*>::get>();
}
inline ::System::Buffers::ArrayPoolEventSource* System::Buffers::ArrayPoolEventSource::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Buffers::ArrayPoolEventSource*>());
}
inline void System::Buffers::ArrayPoolEventSource::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::ArrayPoolEventSource*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Buffers::ArrayPoolEventSource::BufferRented(int32_t bufferId, int32_t bufferSize, int32_t poolId, int32_t bucketId) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::ArrayPoolEventSource*>::get(), "BufferRented", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bufferId, bufferSize, poolId, bucketId);
}
inline void System::Buffers::ArrayPoolEventSource::BufferAllocated(int32_t bufferId, int32_t bufferSize, int32_t poolId, int32_t bucketId,
                                                                   ::System::Buffers::__ArrayPoolEventSource__BufferAllocatedReason reason) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::ArrayPoolEventSource*>::get(), "BufferAllocated", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Buffers::__ArrayPoolEventSource__BufferAllocatedReason>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bufferId, bufferSize, poolId, bucketId, reason);
}
inline void System::Buffers::ArrayPoolEventSource::BufferReturned(int32_t bufferId, int32_t bufferSize, int32_t poolId) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::ArrayPoolEventSource*>::get(), "BufferReturned", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bufferId, bufferSize, poolId);
}
inline void System::Buffers::ArrayPoolEventSource::BufferTrimmed(int32_t bufferId, int32_t bufferSize, int32_t poolId) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::ArrayPoolEventSource*>::get(), "BufferTrimmed", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bufferId, bufferSize, poolId);
}
inline void System::Buffers::ArrayPoolEventSource::BufferTrimPoll(int32_t milliseconds, int32_t pressure) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Buffers::ArrayPoolEventSource*>::get(), "BufferTrimPoll", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, milliseconds, pressure);
}
// Ctor Parameters []
constexpr ::System::Buffers::ArrayPoolEventSource::ArrayPoolEventSource() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
#pragma once
// IWYU pragma private; include "GlobalNamespace/GenericLogger.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__GenericLogger_def.hpp"
#include "GlobalNamespace/zzzz__GenericLogger_def.hpp"
#include "GlobalNamespace/zzzz__IVerboseLogger_def.hpp"
#include "System/Diagnostics/zzzz__Stopwatch_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__GenericLogger__ScopedStopwatch._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__GenericLogger__ScopedStopwatch::*)(::StringW)>(
    &::GlobalNamespace::__GenericLogger__ScopedStopwatch::_ctor)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x396aa78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GenericLogger__ScopedStopwatch*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__GenericLogger__ScopedStopwatch.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__GenericLogger__ScopedStopwatch::*)()>(
    &::GlobalNamespace::__GenericLogger__ScopedStopwatch::Dispose)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x396ab54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GenericLogger__ScopedStopwatch*>::get(),
                                                                               "Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::IDisposable"
constexpr GlobalNamespace::__GenericLogger__ScopedStopwatch::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::__GenericLogger__ScopedStopwatch::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr ::StringW& GlobalNamespace::__GenericLogger__ScopedStopwatch::__cordl_internal_get__processName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____processName;
}
constexpr ::StringW const& GlobalNamespace::__GenericLogger__ScopedStopwatch::__cordl_internal_get__processName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____processName;
}
constexpr void GlobalNamespace::__GenericLogger__ScopedStopwatch::__cordl_internal_set__processName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____processName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Diagnostics::Stopwatch*& GlobalNamespace::__GenericLogger__ScopedStopwatch::__cordl_internal_get__stopwatch() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stopwatch;
}
constexpr ::cordl_internals::to_const_pointer<::System::Diagnostics::Stopwatch*> const& GlobalNamespace::__GenericLogger__ScopedStopwatch::__cordl_internal_get__stopwatch() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stopwatch;
}
constexpr void GlobalNamespace::__GenericLogger__ScopedStopwatch::__cordl_internal_set__stopwatch(::System::Diagnostics::Stopwatch* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____stopwatch)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__GenericLogger__ScopedStopwatch* GlobalNamespace::__GenericLogger__ScopedStopwatch::New_ctor(::StringW processName) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__GenericLogger__ScopedStopwatch*>(processName));
}
inline void GlobalNamespace::__GenericLogger__ScopedStopwatch::_ctor(::StringW processName) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GenericLogger__ScopedStopwatch*>::get(), ".ctor",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, processName);
}
inline void GlobalNamespace::__GenericLogger__ScopedStopwatch::Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GenericLogger__ScopedStopwatch*>::get(),
                                                                             "Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__GenericLogger__ScopedStopwatch::__GenericLogger__ScopedStopwatch() {}
//  Writing Method size for method: ::GlobalNamespace::GenericLogger.Format
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::GlobalNamespace::IVerboseLogger*, ::StringW)>(&::GlobalNamespace::GenericLogger::Format)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x396a7d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GenericLogger*>::get(), "Format", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IVerboseLogger*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GenericLogger.Log
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::GlobalNamespace::IVerboseLogger*, ::StringW)>(&::GlobalNamespace::GenericLogger::Log)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x396a8c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GenericLogger*>::get(), "Log", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IVerboseLogger*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GenericLogger.LogWithTimestamp
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW)>(&::GlobalNamespace::GenericLogger::LogWithTimestamp)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x396a938;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GenericLogger*>::get(), "LogWithTimestamp", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
inline ::StringW GlobalNamespace::GenericLogger::Format(::GlobalNamespace::IVerboseLogger* logger, ::StringW message) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GenericLogger*>::get(), "Format", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IVerboseLogger*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, logger, message);
}
inline void GlobalNamespace::GenericLogger::Log(::GlobalNamespace::IVerboseLogger* logger, ::StringW message) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GenericLogger*>::get(), "Log", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IVerboseLogger*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, logger, message);
}
template <typename T> inline void GlobalNamespace::GenericLogger::Log(T logger, ::StringW message) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GenericLogger*>::get(), "Log",
      std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, logger, message);
}
inline void GlobalNamespace::GenericLogger::LogWithTimestamp(::StringW message) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GenericLogger*>::get(), "LogWithTimestamp", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, message);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GenericLogger::GenericLogger() {}

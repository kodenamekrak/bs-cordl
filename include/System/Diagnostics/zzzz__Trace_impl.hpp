#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Diagnostics/zzzz__Trace_def.hpp"
#include "System/Diagnostics/zzzz__CorrelationManager_def.hpp"
#include "System/Diagnostics/zzzz__TraceListenerCollection_def.hpp"
//  Writing Method size for method: ::System::Diagnostics::Trace.get_Listeners
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Diagnostics::TraceListenerCollection* (*)()>(&::System::Diagnostics::Trace::get_Listeners)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x296c608;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Trace*>::get(), "get_Listeners",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Trace.get_AutoFlush
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::System::Diagnostics::Trace::get_AutoFlush)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x296c8a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Trace*>::get(), "get_AutoFlush",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Diagnostics::Trace.get_CorrelationManager
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Diagnostics::CorrelationManager* (*)()>(&::System::Diagnostics::Trace::get_CorrelationManager)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x296c954;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Trace*>::get(), "get_CorrelationManager",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline void System::Diagnostics::Trace::setStaticF_correlationManager(::System::Diagnostics::CorrelationManager* value) {
  ::cordl_internals::setStaticField<::System::Diagnostics::CorrelationManager*, "correlationManager", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Trace*>::get>(
      std::forward<::System::Diagnostics::CorrelationManager*>(value));
}
inline ::System::Diagnostics::CorrelationManager* System::Diagnostics::Trace::getStaticF_correlationManager() {
  return ::cordl_internals::getStaticField<::System::Diagnostics::CorrelationManager*, "correlationManager",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Trace*>::get>();
}
inline ::System::Diagnostics::TraceListenerCollection* System::Diagnostics::Trace::get_Listeners() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Trace*>::get(), "get_Listeners",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Diagnostics::TraceListenerCollection*, false>(nullptr, ___internal_method);
}
inline bool System::Diagnostics::Trace::get_AutoFlush() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Trace*>::get(), "get_AutoFlush",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline ::System::Diagnostics::CorrelationManager* System::Diagnostics::Trace::get_CorrelationManager() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Diagnostics::Trace*>::get(), "get_CorrelationManager",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Diagnostics::CorrelationManager*, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Diagnostics::Trace::Trace() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
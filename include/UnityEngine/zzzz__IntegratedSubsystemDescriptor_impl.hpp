#pragma once
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__IntegratedSubsystemDescriptor_def.hpp"
#include "UnityEngine/zzzz__ISubsystemDescriptor_def.hpp"
#include "UnityEngine/zzzz__ISubsystem_def.hpp"
//  Writing Method size for method: ::UnityEngine::IntegratedSubsystemDescriptor.get_id
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::IntegratedSubsystemDescriptor::*)()>(
    &::UnityEngine::IntegratedSubsystemDescriptor::get_id)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2d1a10c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::IntegratedSubsystemDescriptor*>::get(), "get_id",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::IntegratedSubsystemDescriptor.UnityEngine_ISubsystemDescriptor_Create
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ISubsystem* (::UnityEngine::IntegratedSubsystemDescriptor::*)()>(
    &::UnityEngine::IntegratedSubsystemDescriptor::UnityEngine_ISubsystemDescriptor_Create)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2d1a184;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::IntegratedSubsystemDescriptor*>::get(),
                                                                               "UnityEngine.ISubsystemDescriptor.Create", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::IntegratedSubsystemDescriptor.CreateImpl
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ISubsystem* (::UnityEngine::IntegratedSubsystemDescriptor::*)()>(
    &::UnityEngine::IntegratedSubsystemDescriptor::CreateImpl)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::IntegratedSubsystemDescriptor*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::IntegratedSubsystemDescriptor*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::IntegratedSubsystemDescriptor._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::IntegratedSubsystemDescriptor::*)()>(&::UnityEngine::IntegratedSubsystemDescriptor::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d1a190;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::IntegratedSubsystemDescriptor*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::UnityEngine::ISubsystemDescriptor"
constexpr UnityEngine::IntegratedSubsystemDescriptor::operator ::UnityEngine::ISubsystemDescriptor*() noexcept {
  return static_cast<::UnityEngine::ISubsystemDescriptor*>(static_cast<void*>(this));
}
constexpr void*& UnityEngine::IntegratedSubsystemDescriptor::__get_m_Ptr() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_Ptr;
}
constexpr void* const& UnityEngine::IntegratedSubsystemDescriptor::__get_m_Ptr() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_Ptr;
}
constexpr void UnityEngine::IntegratedSubsystemDescriptor::__set_m_Ptr(void* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___m_Ptr = value;
}
inline ::StringW UnityEngine::IntegratedSubsystemDescriptor::get_id() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::IntegratedSubsystemDescriptor*>::get(), "get_id",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::UnityEngine::ISubsystem* UnityEngine::IntegratedSubsystemDescriptor::UnityEngine_ISubsystemDescriptor_Create() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::IntegratedSubsystemDescriptor*>::get(),
                                                                             "UnityEngine.ISubsystemDescriptor.Create", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ISubsystem*, false>(this, ___internal_method);
}
inline ::UnityEngine::ISubsystem* UnityEngine::IntegratedSubsystemDescriptor::CreateImpl() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::IntegratedSubsystemDescriptor*>::get(), "CreateImpl",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ISubsystem*, false>(this, ___internal_method);
}
inline ::UnityEngine::IntegratedSubsystemDescriptor* UnityEngine::IntegratedSubsystemDescriptor::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::IntegratedSubsystemDescriptor*>());
}
inline void UnityEngine::IntegratedSubsystemDescriptor::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::IntegratedSubsystemDescriptor*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::IntegratedSubsystemDescriptor::IntegratedSubsystemDescriptor() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
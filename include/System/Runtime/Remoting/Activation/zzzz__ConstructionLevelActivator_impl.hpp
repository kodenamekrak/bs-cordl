#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/Remoting/Activation/zzzz__ConstructionLevelActivator_def.hpp"
#include "System/Runtime/Remoting/Activation/zzzz__IConstructionReturnMessage_def.hpp"
#include "System/Runtime/Remoting/Activation/zzzz__IConstructionCallMessage_def.hpp"
#include "System/Runtime/Remoting/Activation/zzzz__IActivator_def.hpp"
//  Writing Method size for method: ::System::Runtime::Remoting::Activation::ConstructionLevelActivator.get_NextActivator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Remoting::Activation::IActivator* (
    ::System::Runtime::Remoting::Activation::ConstructionLevelActivator::*)()>(&::System::Runtime::Remoting::Activation::ConstructionLevelActivator::get_NextActivator)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24a4f84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Activation::ConstructionLevelActivator*>::get(),
                                                 "get_NextActivator", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Activation::ConstructionLevelActivator.Activate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Remoting::Activation::IConstructionReturnMessage* (
    ::System::Runtime::Remoting::Activation::ConstructionLevelActivator::*)(::System::Runtime::Remoting::Activation::IConstructionCallMessage*)>(
    &::System::Runtime::Remoting::Activation::ConstructionLevelActivator::Activate)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x24a4f8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Activation::ConstructionLevelActivator*>::get(), "Activate", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Activation::IConstructionCallMessage*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Remoting::Activation::ConstructionLevelActivator._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Remoting::Activation::ConstructionLevelActivator::*)()>(
    &::System::Runtime::Remoting::Activation::ConstructionLevelActivator::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24a4324;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Activation::ConstructionLevelActivator*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::Remoting::Activation::IActivator"
constexpr System::Runtime::Remoting::Activation::ConstructionLevelActivator::operator ::System::Runtime::Remoting::Activation::IActivator*() noexcept {
  return static_cast<::System::Runtime::Remoting::Activation::IActivator*>(static_cast<void*>(this));
}
inline ::System::Runtime::Remoting::Activation::IActivator* System::Runtime::Remoting::Activation::ConstructionLevelActivator::get_NextActivator() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Activation::ConstructionLevelActivator*>::get(), "get_NextActivator",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::Activation::IActivator*, false>(this, ___internal_method);
}
inline ::System::Runtime::Remoting::Activation::IConstructionReturnMessage*
System::Runtime::Remoting::Activation::ConstructionLevelActivator::Activate(::System::Runtime::Remoting::Activation::IConstructionCallMessage* msg) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Activation::ConstructionLevelActivator*>::get(), "Activate", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Remoting::Activation::IConstructionCallMessage*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Remoting::Activation::IConstructionReturnMessage*, false>(this, ___internal_method, msg);
}
inline ::System::Runtime::Remoting::Activation::ConstructionLevelActivator* System::Runtime::Remoting::Activation::ConstructionLevelActivator::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Runtime::Remoting::Activation::ConstructionLevelActivator*>());
}
inline void System::Runtime::Remoting::Activation::ConstructionLevelActivator::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Remoting::Activation::ConstructionLevelActivator*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Runtime::Remoting::Activation::ConstructionLevelActivator::ConstructionLevelActivator() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
#pragma once
#include "RootMotion/FinalIK/zzzz__IK_impl.hpp"
#include "RootMotion/FinalIK/zzzz__CCDIK_def.hpp"
#include "RootMotion/FinalIK/zzzz__IKSolverCCD_def.hpp"
#include "RootMotion/FinalIK/zzzz__IKSolver_def.hpp"
//  Writing Method size for method: ::RootMotion::FinalIK::CCDIK.OpenUserManual
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::CCDIK::*)()>(&::RootMotion::FinalIK::CCDIK::OpenUserManual)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x124e2d4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::CCDIK*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::CCDIK*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::CCDIK.OpenScriptReference
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::CCDIK::*)()>(&::RootMotion::FinalIK::CCDIK::OpenScriptReference)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x124e318;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::CCDIK*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::CCDIK*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::CCDIK.SupportGroup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::CCDIK::*)()>(&::RootMotion::FinalIK::CCDIK::SupportGroup)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x124e35c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::CCDIK*>::get(), "SupportGroup",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::CCDIK.ASThread
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::CCDIK::*)()>(&::RootMotion::FinalIK::CCDIK::ASThread)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x124e3a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::CCDIK*>::get(), "ASThread",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::CCDIK.GetIKSolver
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::RootMotion::FinalIK::IKSolver* (::RootMotion::FinalIK::CCDIK::*)()>(&::RootMotion::FinalIK::CCDIK::GetIKSolver)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x124e3e4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::CCDIK*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::CCDIK*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::RootMotion::FinalIK::CCDIK._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::RootMotion::FinalIK::CCDIK::*)()>(&::RootMotion::FinalIK::CCDIK::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x124e3ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::CCDIK*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::RootMotion::FinalIK::IKSolverCCD*& RootMotion::FinalIK::CCDIK::__get_solver() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___solver;
}
constexpr ::cordl_internals::to_const_pointer<::RootMotion::FinalIK::IKSolverCCD*> const& RootMotion::FinalIK::CCDIK::__get_solver() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___solver;
}
constexpr void RootMotion::FinalIK::CCDIK::__set_solver(::RootMotion::FinalIK::IKSolverCCD* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___solver)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void RootMotion::FinalIK::CCDIK::OpenUserManual() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::CCDIK*>::get(), "OpenUserManual",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void RootMotion::FinalIK::CCDIK::OpenScriptReference() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::CCDIK*>::get(), "OpenScriptReference",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void RootMotion::FinalIK::CCDIK::SupportGroup() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::CCDIK*>::get(), "SupportGroup",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void RootMotion::FinalIK::CCDIK::ASThread() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::CCDIK*>::get(), "ASThread",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::RootMotion::FinalIK::IKSolver* RootMotion::FinalIK::CCDIK::GetIKSolver() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::CCDIK*>::get(), "GetIKSolver",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::RootMotion::FinalIK::IKSolver*, false>(this, ___internal_method);
}
inline ::RootMotion::FinalIK::CCDIK* RootMotion::FinalIK::CCDIK::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::RootMotion::FinalIK::CCDIK*>());
}
inline void RootMotion::FinalIK::CCDIK::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::RootMotion::FinalIK::CCDIK*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::RootMotion::FinalIK::CCDIK::CCDIK() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
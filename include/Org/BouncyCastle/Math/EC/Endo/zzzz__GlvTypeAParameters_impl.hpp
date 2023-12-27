#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Math/EC/Endo/zzzz__GlvTypeAParameters_def.hpp"
#include "Org/BouncyCastle/Math/zzzz__BigInteger_def.hpp"
#include "Org/BouncyCastle/Math/EC/Endo/zzzz__ScalarSplitParameters_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Endo::GlvTypeAParameters._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Math::EC::Endo::GlvTypeAParameters::*)(
    ::Org::BouncyCastle::Math::BigInteger*, ::Org::BouncyCastle::Math::BigInteger*, ::Org::BouncyCastle::Math::EC::Endo::ScalarSplitParameters*)>(
    &::Org::BouncyCastle::Math::EC::Endo::GlvTypeAParameters::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x103550c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Endo::GlvTypeAParameters*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::BigInteger*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::BigInteger*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::Endo::ScalarSplitParameters*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Endo::GlvTypeAParameters.get_I
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::BigInteger* (::Org::BouncyCastle::Math::EC::Endo::GlvTypeAParameters::*)()>(
    &::Org::BouncyCastle::Math::EC::Endo::GlvTypeAParameters::get_I)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1035548;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Endo::GlvTypeAParameters*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Endo::GlvTypeAParameters*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Endo::GlvTypeAParameters.get_Lambda
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::BigInteger* (::Org::BouncyCastle::Math::EC::Endo::GlvTypeAParameters::*)()>(
    &::Org::BouncyCastle::Math::EC::Endo::GlvTypeAParameters::get_Lambda)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1035550;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Endo::GlvTypeAParameters*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Endo::GlvTypeAParameters*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Endo::GlvTypeAParameters.get_SplitParams
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::EC::Endo::ScalarSplitParameters* (
    ::Org::BouncyCastle::Math::EC::Endo::GlvTypeAParameters::*)()>(&::Org::BouncyCastle::Math::EC::Endo::GlvTypeAParameters::get_SplitParams)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1035558;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Endo::GlvTypeAParameters*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Endo::GlvTypeAParameters*>::get(), 6));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Math::BigInteger*& Org::BouncyCastle::Math::EC::Endo::GlvTypeAParameters::__get_m_i() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_i;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::BigInteger*> const& Org::BouncyCastle::Math::EC::Endo::GlvTypeAParameters::__get_m_i() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_i;
}
constexpr void Org::BouncyCastle::Math::EC::Endo::GlvTypeAParameters::__set_m_i(::Org::BouncyCastle::Math::BigInteger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_i)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Math::BigInteger*& Org::BouncyCastle::Math::EC::Endo::GlvTypeAParameters::__get_m_lambda() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_lambda;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::BigInteger*> const& Org::BouncyCastle::Math::EC::Endo::GlvTypeAParameters::__get_m_lambda() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_lambda;
}
constexpr void Org::BouncyCastle::Math::EC::Endo::GlvTypeAParameters::__set_m_lambda(::Org::BouncyCastle::Math::BigInteger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_lambda)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Math::EC::Endo::ScalarSplitParameters*& Org::BouncyCastle::Math::EC::Endo::GlvTypeAParameters::__get_m_splitParams() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_splitParams;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::EC::Endo::ScalarSplitParameters*> const& Org::BouncyCastle::Math::EC::Endo::GlvTypeAParameters::__get_m_splitParams() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_splitParams;
}
constexpr void Org::BouncyCastle::Math::EC::Endo::GlvTypeAParameters::__set_m_splitParams(::Org::BouncyCastle::Math::EC::Endo::ScalarSplitParameters* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_splitParams)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Org::BouncyCastle::Math::EC::Endo::GlvTypeAParameters*
Org::BouncyCastle::Math::EC::Endo::GlvTypeAParameters::New_ctor(::Org::BouncyCastle::Math::BigInteger* i, ::Org::BouncyCastle::Math::BigInteger* lambda,
                                                                ::Org::BouncyCastle::Math::EC::Endo::ScalarSplitParameters* splitParams) {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Math::EC::Endo::GlvTypeAParameters*>(i, lambda, splitParams));
}
inline void Org::BouncyCastle::Math::EC::Endo::GlvTypeAParameters::_ctor(::Org::BouncyCastle::Math::BigInteger* i, ::Org::BouncyCastle::Math::BigInteger* lambda,
                                                                         ::Org::BouncyCastle::Math::EC::Endo::ScalarSplitParameters* splitParams) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Endo::GlvTypeAParameters*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::BigInteger*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::BigInteger*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::EC::Endo::ScalarSplitParameters*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, i, lambda, splitParams);
}
inline ::Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Math::EC::Endo::GlvTypeAParameters::get_I() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Endo::GlvTypeAParameters*>::get(),
                                                                             "get_I", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::BigInteger*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Math::EC::Endo::GlvTypeAParameters::get_Lambda() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Endo::GlvTypeAParameters*>::get(),
                                                                             "get_Lambda", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::BigInteger*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Math::EC::Endo::ScalarSplitParameters* Org::BouncyCastle::Math::EC::Endo::GlvTypeAParameters::get_SplitParams() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Endo::GlvTypeAParameters*>::get(),
                                                                             "get_SplitParams", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::EC::Endo::ScalarSplitParameters*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Math::EC::Endo::GlvTypeAParameters::GlvTypeAParameters() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
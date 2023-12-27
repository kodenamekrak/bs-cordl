#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crmf/zzzz__AuthenticatorControl_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerObjectIdentifier_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerUtf8String_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "Org/BouncyCastle/Crmf/zzzz__IControl_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crmf::AuthenticatorControl._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crmf::AuthenticatorControl::*)(::Org::BouncyCastle::Asn1::DerUtf8String*)>(
    &::Org::BouncyCastle::Crmf::AuthenticatorControl::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x120dd84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crmf::AuthenticatorControl*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerUtf8String*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crmf::AuthenticatorControl._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crmf::AuthenticatorControl::*)(::StringW)>(
    &::Org::BouncyCastle::Crmf::AuthenticatorControl::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x120ddac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crmf::AuthenticatorControl*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crmf::AuthenticatorControl.get_Type
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::DerObjectIdentifier* (::Org::BouncyCastle::Crmf::AuthenticatorControl::*)()>(
    &::Org::BouncyCastle::Crmf::AuthenticatorControl::get_Type)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x120de28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crmf::AuthenticatorControl*>::get(),
                                                                               "get_Type", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crmf::AuthenticatorControl.get_Value
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::Asn1Encodable* (::Org::BouncyCastle::Crmf::AuthenticatorControl::*)()>(
    &::Org::BouncyCastle::Crmf::AuthenticatorControl::get_Value)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x120de80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crmf::AuthenticatorControl*>::get(),
                                                                               "get_Value", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Org::BouncyCastle::Crmf::IControl"
constexpr Org::BouncyCastle::Crmf::AuthenticatorControl::operator ::Org::BouncyCastle::Crmf::IControl*() noexcept {
  return static_cast<::Org::BouncyCastle::Crmf::IControl*>(static_cast<void*>(this));
}
constexpr ::Org::BouncyCastle::Asn1::DerUtf8String*& Org::BouncyCastle::Crmf::AuthenticatorControl::__get_token() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___token;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerUtf8String*> const& Org::BouncyCastle::Crmf::AuthenticatorControl::__get_token() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___token;
}
constexpr void Org::BouncyCastle::Crmf::AuthenticatorControl::__set_token(::Org::BouncyCastle::Asn1::DerUtf8String* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___token)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Org::BouncyCastle::Crmf::AuthenticatorControl::setStaticF_type(::Org::BouncyCastle::Asn1::DerObjectIdentifier* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "type",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crmf::AuthenticatorControl*>::get>(
      std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier*>(value));
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Crmf::AuthenticatorControl::getStaticF_type() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, "type",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crmf::AuthenticatorControl*>::get>();
}
inline ::Org::BouncyCastle::Crmf::AuthenticatorControl* Org::BouncyCastle::Crmf::AuthenticatorControl::New_ctor(::Org::BouncyCastle::Asn1::DerUtf8String* token) {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Crmf::AuthenticatorControl*>(token));
}
inline void Org::BouncyCastle::Crmf::AuthenticatorControl::_ctor(::Org::BouncyCastle::Asn1::DerUtf8String* token) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crmf::AuthenticatorControl*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerUtf8String*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, token);
}
inline ::Org::BouncyCastle::Crmf::AuthenticatorControl* Org::BouncyCastle::Crmf::AuthenticatorControl::New_ctor(::StringW token) {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Crmf::AuthenticatorControl*>(token));
}
inline void Org::BouncyCastle::Crmf::AuthenticatorControl::_ctor(::StringW token) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crmf::AuthenticatorControl*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, token);
}
inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* Org::BouncyCastle::Crmf::AuthenticatorControl::get_Type() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crmf::AuthenticatorControl*>::get(),
                                                                             "get_Type", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::DerObjectIdentifier*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1Encodable* Org::BouncyCastle::Crmf::AuthenticatorControl::get_Value() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crmf::AuthenticatorControl*>::get(),
                                                                             "get_Value", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Encodable*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crmf::AuthenticatorControl::AuthenticatorControl() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
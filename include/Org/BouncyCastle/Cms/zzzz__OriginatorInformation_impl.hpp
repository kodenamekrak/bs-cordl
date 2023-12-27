#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Cms/zzzz__OriginatorInformation_def.hpp"
#include "Org/BouncyCastle/X509/Store/zzzz__IX509Store_def.hpp"
#include "Org/BouncyCastle/Asn1/Cms/zzzz__OriginatorInfo_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Cms::OriginatorInformation._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Cms::OriginatorInformation::*)(::Org::BouncyCastle::Asn1::Cms::OriginatorInfo*)>(
    &::Org::BouncyCastle::Cms::OriginatorInformation::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x1206b44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::OriginatorInformation*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Cms::OriginatorInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::OriginatorInformation.GetCertificates
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::X509::Store::IX509Store* (::Org::BouncyCastle::Cms::OriginatorInformation::*)()>(
    &::Org::BouncyCastle::Cms::OriginatorInformation::GetCertificates)> {
  constexpr static std::size_t size = 0x50c;
  constexpr static std::size_t addrs = 0x1206b6c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::OriginatorInformation*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::OriginatorInformation*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::OriginatorInformation.GetCrls
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::X509::Store::IX509Store* (::Org::BouncyCastle::Cms::OriginatorInformation::*)()>(
    &::Org::BouncyCastle::Cms::OriginatorInformation::GetCrls)> {
  constexpr static std::size_t size = 0x50c;
  constexpr static std::size_t addrs = 0x1207078;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::OriginatorInformation*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::OriginatorInformation*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cms::OriginatorInformation.ToAsn1Structure
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::Cms::OriginatorInfo* (::Org::BouncyCastle::Cms::OriginatorInformation::*)()>(
    &::Org::BouncyCastle::Cms::OriginatorInformation::ToAsn1Structure)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1207584;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::OriginatorInformation*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::OriginatorInformation*>::get(), 6));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Asn1::Cms::OriginatorInfo*& Org::BouncyCastle::Cms::OriginatorInformation::__get_originatorInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___originatorInfo;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Cms::OriginatorInfo*> const& Org::BouncyCastle::Cms::OriginatorInformation::__get_originatorInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___originatorInfo;
}
constexpr void Org::BouncyCastle::Cms::OriginatorInformation::__set_originatorInfo(::Org::BouncyCastle::Asn1::Cms::OriginatorInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___originatorInfo)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Org::BouncyCastle::Cms::OriginatorInformation* Org::BouncyCastle::Cms::OriginatorInformation::New_ctor(::Org::BouncyCastle::Asn1::Cms::OriginatorInfo* originatorInfo) {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Cms::OriginatorInformation*>(originatorInfo));
}
inline void Org::BouncyCastle::Cms::OriginatorInformation::_ctor(::Org::BouncyCastle::Asn1::Cms::OriginatorInfo* originatorInfo) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::OriginatorInformation*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Cms::OriginatorInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, originatorInfo);
}
inline ::Org::BouncyCastle::X509::Store::IX509Store* Org::BouncyCastle::Cms::OriginatorInformation::GetCertificates() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::OriginatorInformation*>::get(),
                                                                             "GetCertificates", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::X509::Store::IX509Store*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::X509::Store::IX509Store* Org::BouncyCastle::Cms::OriginatorInformation::GetCrls() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::OriginatorInformation*>::get(), "GetCrls",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::X509::Store::IX509Store*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Cms::OriginatorInfo* Org::BouncyCastle::Cms::OriginatorInformation::ToAsn1Structure() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cms::OriginatorInformation*>::get(),
                                                                             "ToAsn1Structure", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Cms::OriginatorInfo*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Cms::OriginatorInformation::OriginatorInformation() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
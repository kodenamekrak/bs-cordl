#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Cmp/zzzz__CertificateConfirmationContentBuilder_def.hpp"
#include "Org/BouncyCastle/Math/zzzz__BigInteger_def.hpp"
#include "Org/BouncyCastle/Cmp/zzzz__CertificateConfirmationContent_def.hpp"
#include "Org/BouncyCastle/X509/zzzz__X509Certificate_def.hpp"
#include "Org/BouncyCastle/Cms/zzzz__DefaultDigestAlgorithmIdentifierFinder_def.hpp"
#include "Org/BouncyCastle/Cms/zzzz__DefaultSignatureAlgorithmIdentifierFinder_def.hpp"
#include "System/Collections/zzzz__IList_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Cmp::CertificateConfirmationContentBuilder._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Cmp::CertificateConfirmationContentBuilder::*)()>(
    &::Org::BouncyCastle::Cmp::CertificateConfirmationContentBuilder::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x11d553c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cmp::CertificateConfirmationContentBuilder*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cmp::CertificateConfirmationContentBuilder._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Cmp::CertificateConfirmationContentBuilder::*)(
    ::Org::BouncyCastle::Cms::DefaultDigestAlgorithmIdentifierFinder*)>(&::Org::BouncyCastle::Cmp::CertificateConfirmationContentBuilder::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x11d55a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cmp::CertificateConfirmationContentBuilder*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Cms::DefaultDigestAlgorithmIdentifierFinder*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cmp::CertificateConfirmationContentBuilder.AddAcceptedCertificate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Cmp::CertificateConfirmationContentBuilder* (
    ::Org::BouncyCastle::Cmp::CertificateConfirmationContentBuilder::*)(::Org::BouncyCastle::X509::X509Certificate*, ::Org::BouncyCastle::Math::BigInteger*)>(
    &::Org::BouncyCastle::Cmp::CertificateConfirmationContentBuilder::AddAcceptedCertificate)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x11d5624;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cmp::CertificateConfirmationContentBuilder*>::get(), "AddAcceptedCertificate", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::X509Certificate*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::BigInteger*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cmp::CertificateConfirmationContentBuilder.Build
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Cmp::CertificateConfirmationContent* (
    ::Org::BouncyCastle::Cmp::CertificateConfirmationContentBuilder::*)()>(&::Org::BouncyCastle::Cmp::CertificateConfirmationContentBuilder::Build)> {
  constexpr static std::size_t size = 0x470;
  constexpr static std::size_t addrs = 0x11d574c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cmp::CertificateConfirmationContentBuilder*>::get(), "Build",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Cms::DefaultDigestAlgorithmIdentifierFinder*& Org::BouncyCastle::Cmp::CertificateConfirmationContentBuilder::__get_digestAlgFinder() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___digestAlgFinder;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Cms::DefaultDigestAlgorithmIdentifierFinder*> const&
Org::BouncyCastle::Cmp::CertificateConfirmationContentBuilder::__get_digestAlgFinder() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___digestAlgFinder;
}
constexpr void Org::BouncyCastle::Cmp::CertificateConfirmationContentBuilder::__set_digestAlgFinder(::Org::BouncyCastle::Cms::DefaultDigestAlgorithmIdentifierFinder* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___digestAlgFinder)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::IList*& Org::BouncyCastle::Cmp::CertificateConfirmationContentBuilder::__get_acceptedCerts() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___acceptedCerts;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::IList*> const& Org::BouncyCastle::Cmp::CertificateConfirmationContentBuilder::__get_acceptedCerts() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___acceptedCerts;
}
constexpr void Org::BouncyCastle::Cmp::CertificateConfirmationContentBuilder::__set_acceptedCerts(::System::Collections::IList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___acceptedCerts)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::IList*& Org::BouncyCastle::Cmp::CertificateConfirmationContentBuilder::__get_acceptedReqIds() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___acceptedReqIds;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::IList*> const& Org::BouncyCastle::Cmp::CertificateConfirmationContentBuilder::__get_acceptedReqIds() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___acceptedReqIds;
}
constexpr void Org::BouncyCastle::Cmp::CertificateConfirmationContentBuilder::__set_acceptedReqIds(::System::Collections::IList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___acceptedReqIds)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Org::BouncyCastle::Cmp::CertificateConfirmationContentBuilder::setStaticF_sigAlgFinder(::Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder*, "sigAlgFinder",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cmp::CertificateConfirmationContentBuilder*>::get>(
      std::forward<::Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder*>(value));
}
inline ::Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder* Org::BouncyCastle::Cmp::CertificateConfirmationContentBuilder::getStaticF_sigAlgFinder() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Cms::DefaultSignatureAlgorithmIdentifierFinder*, "sigAlgFinder",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cmp::CertificateConfirmationContentBuilder*>::get>();
}
inline ::Org::BouncyCastle::Cmp::CertificateConfirmationContentBuilder* Org::BouncyCastle::Cmp::CertificateConfirmationContentBuilder::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Cmp::CertificateConfirmationContentBuilder*>());
}
inline void Org::BouncyCastle::Cmp::CertificateConfirmationContentBuilder::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cmp::CertificateConfirmationContentBuilder*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Cmp::CertificateConfirmationContentBuilder*
Org::BouncyCastle::Cmp::CertificateConfirmationContentBuilder::New_ctor(::Org::BouncyCastle::Cms::DefaultDigestAlgorithmIdentifierFinder* digestAlgFinder) {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Cmp::CertificateConfirmationContentBuilder*>(digestAlgFinder));
}
inline void Org::BouncyCastle::Cmp::CertificateConfirmationContentBuilder::_ctor(::Org::BouncyCastle::Cms::DefaultDigestAlgorithmIdentifierFinder* digestAlgFinder) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cmp::CertificateConfirmationContentBuilder*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Cms::DefaultDigestAlgorithmIdentifierFinder*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, digestAlgFinder);
}
inline ::Org::BouncyCastle::Cmp::CertificateConfirmationContentBuilder*
Org::BouncyCastle::Cmp::CertificateConfirmationContentBuilder::AddAcceptedCertificate(::Org::BouncyCastle::X509::X509Certificate* certHolder, ::Org::BouncyCastle::Math::BigInteger* certReqId) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cmp::CertificateConfirmationContentBuilder*>::get(), "AddAcceptedCertificate", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::X509::X509Certificate*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Math::BigInteger*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Cmp::CertificateConfirmationContentBuilder*, false>(this, ___internal_method, certHolder, certReqId);
}
inline ::Org::BouncyCastle::Cmp::CertificateConfirmationContent* Org::BouncyCastle::Cmp::CertificateConfirmationContentBuilder::Build() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cmp::CertificateConfirmationContentBuilder*>::get(), "Build",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Cmp::CertificateConfirmationContent*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Cmp::CertificateConfirmationContentBuilder::CertificateConfirmationContentBuilder() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
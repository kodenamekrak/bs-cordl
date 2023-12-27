#pragma once
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "Mono/Security/Interface/zzzz__MonoLocalCertificateSelectionCallback_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509Certificate_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509CertificateCollection_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Mono::Security::Interface::MonoLocalCertificateSelectionCallback._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Security::Interface::MonoLocalCertificateSelectionCallback::*)(::System::Object*, void*)>(
    &::Mono::Security::Interface::MonoLocalCertificateSelectionCallback::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x2402c98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Interface::MonoLocalCertificateSelectionCallback*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::Interface::MonoLocalCertificateSelectionCallback.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::X509Certificates::X509Certificate* (
    ::Mono::Security::Interface::MonoLocalCertificateSelectionCallback::*)(::StringW, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection*,
                                                                           ::System::Security::Cryptography::X509Certificates::X509Certificate*, ::ArrayW<::StringW, ::Array<::StringW>*>)>(
    &::Mono::Security::Interface::MonoLocalCertificateSelectionCallback::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2402d70;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Interface::MonoLocalCertificateSelectionCallback*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Interface::MonoLocalCertificateSelectionCallback*>::get(), 13));
    return ___internal_method;
  }
};
inline ::Mono::Security::Interface::MonoLocalCertificateSelectionCallback* Mono::Security::Interface::MonoLocalCertificateSelectionCallback::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::New<::Mono::Security::Interface::MonoLocalCertificateSelectionCallback*>(object, method));
}
inline void Mono::Security::Interface::MonoLocalCertificateSelectionCallback::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Interface::MonoLocalCertificateSelectionCallback*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::System::Security::Cryptography::X509Certificates::X509Certificate*
Mono::Security::Interface::MonoLocalCertificateSelectionCallback::Invoke(::StringW targetHost, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection* localCertificates,
                                                                         ::System::Security::Cryptography::X509Certificates::X509Certificate* remoteCertificate,
                                                                         ::ArrayW<::StringW, ::Array<::StringW>*> acceptableIssuers) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::Interface::MonoLocalCertificateSelectionCallback*>::get(), "Invoke", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509CertificateCollection*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509Certificate*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::X509Certificates::X509Certificate*, false>(this, ___internal_method, targetHost, localCertificates, remoteCertificate,
                                                                                                                          acceptableIssuers);
}
// Ctor Parameters []
constexpr ::Mono::Security::Interface::MonoLocalCertificateSelectionCallback::MonoLocalCertificateSelectionCallback() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
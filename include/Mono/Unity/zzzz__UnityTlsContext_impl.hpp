#pragma once
#include "Mono/Net/Security/zzzz__MobileTlsContext_impl.hpp"
#include "System/Runtime/InteropServices/zzzz__GCHandle_impl.hpp"
#include "Mono/Unity/zzzz__UnityTlsContext_def.hpp"
#include "Mono/Unity/zzzz__UnityTls_def.hpp"
#include "Mono/Net/Security/zzzz__MobileAuthenticatedStream_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509Certificate_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509Certificate2_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "Mono/Security/Interface/zzzz__MonoTlsConnectionInfo_def.hpp"
#include "Mono/Net/Security/zzzz__MonoSslAuthenticationOptions_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
//  Writing Method size for method: ::Mono::Unity::UnityTlsContext._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Unity::UnityTlsContext::*)(
    ::Mono::Net::Security::MobileAuthenticatedStream*, ::Mono::Net::Security::MonoSslAuthenticationOptions*)>(&::Mono::Unity::UnityTlsContext::_ctor)> {
  constexpr static std::size_t size = 0x708;
  constexpr static std::size_t addrs = 0x281a03c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTlsContext*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Net::Security::MobileAuthenticatedStream*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Net::Security::MonoSslAuthenticationOptions*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Unity::UnityTlsContext.ExtractNativeKeyAndChainFromManagedCertificate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::System::Security::Cryptography::X509Certificates::X509Certificate*, ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_errorstate>,
                         ByRef<::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_x509list>>, ByRef<::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_key>>)>(
        &::Mono::Unity::UnityTlsContext::ExtractNativeKeyAndChainFromManagedCertificate)> {
  constexpr static std::size_t size = 0x340;
  constexpr static std::size_t addrs = 0x281a8f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTlsContext*>::get(), "ExtractNativeKeyAndChainFromManagedCertificate", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509Certificate*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_errorstate>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_x509list>>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_key>>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Unity::UnityTlsContext.get_IsAuthenticated
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Mono::Unity::UnityTlsContext::*)()>(&::Mono::Unity::UnityTlsContext::get_IsAuthenticated)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x281ac34;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTlsContext*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTlsContext*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Unity::UnityTlsContext.get_LocalClientCertificate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::X509Certificates::X509Certificate* (::Mono::Unity::UnityTlsContext::*)()>(
    &::Mono::Unity::UnityTlsContext::get_LocalClientCertificate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x281ac3c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTlsContext*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTlsContext*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Unity::UnityTlsContext.get_RemoteCertificate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::X509Certificates::X509Certificate2* (::Mono::Unity::UnityTlsContext::*)()>(
    &::Mono::Unity::UnityTlsContext::get_RemoteCertificate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x281ac44;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTlsContext*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTlsContext*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Unity::UnityTlsContext.Read
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::ValueTuple_2<int32_t, bool> (::Mono::Unity::UnityTlsContext::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t)>(&::Mono::Unity::UnityTlsContext::Read)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x281ac4c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTlsContext*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTlsContext*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Unity::UnityTlsContext.Write
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::ValueTuple_2<int32_t, bool> (::Mono::Unity::UnityTlsContext::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t)>(&::Mono::Unity::UnityTlsContext::Write)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x281adf4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTlsContext*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTlsContext*>::get(), 12));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Unity::UnityTlsContext.Renegotiate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Unity::UnityTlsContext::*)()>(&::Mono::Unity::UnityTlsContext::Renegotiate)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x281af94;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTlsContext*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTlsContext*>::get(), 15));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Unity::UnityTlsContext.PendingRenegotiation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Mono::Unity::UnityTlsContext::*)()>(&::Mono::Unity::UnityTlsContext::PendingRenegotiation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x281afd4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTlsContext*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTlsContext*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Unity::UnityTlsContext.Shutdown
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Unity::UnityTlsContext::*)()>(&::Mono::Unity::UnityTlsContext::Shutdown)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x281afdc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTlsContext*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTlsContext*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Unity::UnityTlsContext.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Unity::UnityTlsContext::*)(bool)>(&::Mono::Unity::UnityTlsContext::Dispose)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x281b0f0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTlsContext*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTlsContext*>::get(), 16));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Unity::UnityTlsContext.StartHandshake
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Unity::UnityTlsContext::*)()>(&::Mono::Unity::UnityTlsContext::StartHandshake)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x281b168;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTlsContext*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTlsContext*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Unity::UnityTlsContext.ProcessHandshake
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Mono::Unity::UnityTlsContext::*)()>(&::Mono::Unity::UnityTlsContext::ProcessHandshake)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x281b2e8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTlsContext*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTlsContext*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Unity::UnityTlsContext.FinishHandshake
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Unity::UnityTlsContext::*)()>(&::Mono::Unity::UnityTlsContext::FinishHandshake)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x281b4ac;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTlsContext*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTlsContext*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Unity::UnityTlsContext.WriteCallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void* (*)(::cordl_internals::Ptr<void>, ::cordl_internals::Ptr<uint8_t>, void*, ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_errorstate>)>(
        &::Mono::Unity::UnityTlsContext::WriteCallback)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x2819d34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTlsContext*>::get(), "WriteCallback", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<void>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint8_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_errorstate>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Unity::UnityTlsContext.WriteCallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void* (::Mono::Unity::UnityTlsContext::*)(::cordl_internals::Ptr<uint8_t>, void*, ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_errorstate>)>(
        &::Mono::Unity::UnityTlsContext::WriteCallback)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x281b5f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTlsContext*>::get(), "WriteCallback", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint8_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_errorstate>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Unity::UnityTlsContext.ReadCallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void* (*)(::cordl_internals::Ptr<void>, ::cordl_internals::Ptr<uint8_t>, void*, ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_errorstate>)>(
        &::Mono::Unity::UnityTlsContext::ReadCallback)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x2819dfc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTlsContext*>::get(), "ReadCallback", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<void>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint8_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_errorstate>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Unity::UnityTlsContext.ReadCallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void* (::Mono::Unity::UnityTlsContext::*)(::cordl_internals::Ptr<uint8_t>, void*, ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_errorstate>)>(
        &::Mono::Unity::UnityTlsContext::ReadCallback)> {
  constexpr static std::size_t size = 0x2f8;
  constexpr static std::size_t addrs = 0x281ba44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTlsContext*>::get(), "ReadCallback", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint8_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_errorstate>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Unity::UnityTlsContext.VerifyCallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Unity::__UnityTls__unitytls_x509verify_result (*)(
    ::cordl_internals::Ptr<void>, ::Mono::Unity::__UnityTls__unitytls_x509list_ref, ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_errorstate>)>(
    &::Mono::Unity::UnityTlsContext::VerifyCallback)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2819ec4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTlsContext*>::get(), "VerifyCallback", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<void>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Unity::__UnityTls__unitytls_x509list_ref>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_errorstate>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Unity::UnityTlsContext.VerifyCallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Unity::__UnityTls__unitytls_x509verify_result (::Mono::Unity::UnityTlsContext::*)(
    ::Mono::Unity::__UnityTls__unitytls_x509list_ref, ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_errorstate>)>(&::Mono::Unity::UnityTlsContext::VerifyCallback)> {
  constexpr static std::size_t size = 0x408;
  constexpr static std::size_t addrs = 0x281be48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTlsContext*>::get(), "VerifyCallback", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Unity::__UnityTls__unitytls_x509list_ref>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_errorstate>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Unity::UnityTlsContext.CertificateCallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::cordl_internals::Ptr<void>, ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_tlsctx>, ::cordl_internals::Ptr<uint8_t>, void*,
                         ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_x509name>, void*, ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_x509list_ref>,
                         ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_key_ref>, ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_errorstate>)>(
        &::Mono::Unity::UnityTlsContext::CertificateCallback)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x2819f74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTlsContext*>::get(), "CertificateCallback", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<void>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_tlsctx>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint8_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_x509name>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_x509list_ref>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_key_ref>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_errorstate>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Unity::UnityTlsContext.CertificateCallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Unity::UnityTlsContext::*)(
    ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_tlsctx>, ::cordl_internals::Ptr<uint8_t>, void*, ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_x509name>, void*,
    ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_x509list_ref>, ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_key_ref>,
    ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_errorstate>)>(&::Mono::Unity::UnityTlsContext::CertificateCallback)> {
  constexpr static std::size_t size = 0x2cc;
  constexpr static std::size_t addrs = 0x281c2d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTlsContext*>::get(), "CertificateCallback", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_tlsctx>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint8_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_x509name>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_x509list_ref>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_key_ref>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_errorstate>>::get() })));
    return ___internal_method;
  }
};
constexpr ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_tlsctx>& Mono::Unity::UnityTlsContext::__get_tlsContext() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___tlsContext;
}
constexpr ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_tlsctx> const& Mono::Unity::UnityTlsContext::__get_tlsContext() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___tlsContext;
}
constexpr void Mono::Unity::UnityTlsContext::__set_tlsContext(::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_tlsctx> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___tlsContext)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_x509list>& Mono::Unity::UnityTlsContext::__get_requestedClientCertChain() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___requestedClientCertChain;
}
constexpr ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_x509list> const& Mono::Unity::UnityTlsContext::__get_requestedClientCertChain() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___requestedClientCertChain;
}
constexpr void Mono::Unity::UnityTlsContext::__set_requestedClientCertChain(::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_x509list> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___requestedClientCertChain)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_key>& Mono::Unity::UnityTlsContext::__get_requestedClientKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___requestedClientKey;
}
constexpr ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_key> const& Mono::Unity::UnityTlsContext::__get_requestedClientKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___requestedClientKey;
}
constexpr void Mono::Unity::UnityTlsContext::__set_requestedClientKey(::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_key> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___requestedClientKey)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Mono::Unity::__UnityTls__unitytls_tlsctx_read_callback*& Mono::Unity::UnityTlsContext::__get_readCallback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___readCallback;
}
constexpr ::cordl_internals::to_const_pointer<::Mono::Unity::__UnityTls__unitytls_tlsctx_read_callback*> const& Mono::Unity::UnityTlsContext::__get_readCallback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___readCallback;
}
constexpr void Mono::Unity::UnityTlsContext::__set_readCallback(::Mono::Unity::__UnityTls__unitytls_tlsctx_read_callback* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___readCallback)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Mono::Unity::__UnityTls__unitytls_tlsctx_write_callback*& Mono::Unity::UnityTlsContext::__get_writeCallback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___writeCallback;
}
constexpr ::cordl_internals::to_const_pointer<::Mono::Unity::__UnityTls__unitytls_tlsctx_write_callback*> const& Mono::Unity::UnityTlsContext::__get_writeCallback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___writeCallback;
}
constexpr void Mono::Unity::UnityTlsContext::__set_writeCallback(::Mono::Unity::__UnityTls__unitytls_tlsctx_write_callback* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___writeCallback)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Mono::Unity::__UnityTls__unitytls_tlsctx_certificate_callback*& Mono::Unity::UnityTlsContext::__get_certificateCallback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___certificateCallback;
}
constexpr ::cordl_internals::to_const_pointer<::Mono::Unity::__UnityTls__unitytls_tlsctx_certificate_callback*> const& Mono::Unity::UnityTlsContext::__get_certificateCallback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___certificateCallback;
}
constexpr void Mono::Unity::UnityTlsContext::__set_certificateCallback(::Mono::Unity::__UnityTls__unitytls_tlsctx_certificate_callback* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___certificateCallback)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Mono::Unity::__UnityTls__unitytls_tlsctx_x509verify_callback*& Mono::Unity::UnityTlsContext::__get_verifyCallback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___verifyCallback;
}
constexpr ::cordl_internals::to_const_pointer<::Mono::Unity::__UnityTls__unitytls_tlsctx_x509verify_callback*> const& Mono::Unity::UnityTlsContext::__get_verifyCallback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___verifyCallback;
}
constexpr void Mono::Unity::UnityTlsContext::__set_verifyCallback(::Mono::Unity::__UnityTls__unitytls_tlsctx_x509verify_callback* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___verifyCallback)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Security::Cryptography::X509Certificates::X509Certificate*& Mono::Unity::UnityTlsContext::__get_localClientCertificate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___localClientCertificate;
}
constexpr ::cordl_internals::to_const_pointer<::System::Security::Cryptography::X509Certificates::X509Certificate*> const& Mono::Unity::UnityTlsContext::__get_localClientCertificate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___localClientCertificate;
}
constexpr void Mono::Unity::UnityTlsContext::__set_localClientCertificate(::System::Security::Cryptography::X509Certificates::X509Certificate* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___localClientCertificate)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Security::Cryptography::X509Certificates::X509Certificate2*& Mono::Unity::UnityTlsContext::__get_remoteCertificate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___remoteCertificate;
}
constexpr ::cordl_internals::to_const_pointer<::System::Security::Cryptography::X509Certificates::X509Certificate2*> const& Mono::Unity::UnityTlsContext::__get_remoteCertificate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___remoteCertificate;
}
constexpr void Mono::Unity::UnityTlsContext::__set_remoteCertificate(::System::Security::Cryptography::X509Certificates::X509Certificate2* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___remoteCertificate)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Mono::Security::Interface::MonoTlsConnectionInfo*& Mono::Unity::UnityTlsContext::__get_connectioninfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___connectioninfo;
}
constexpr ::cordl_internals::to_const_pointer<::Mono::Security::Interface::MonoTlsConnectionInfo*> const& Mono::Unity::UnityTlsContext::__get_connectioninfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___connectioninfo;
}
constexpr void Mono::Unity::UnityTlsContext::__set_connectioninfo(::Mono::Security::Interface::MonoTlsConnectionInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___connectioninfo)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& Mono::Unity::UnityTlsContext::__get_isAuthenticated() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___isAuthenticated;
}
constexpr bool const& Mono::Unity::UnityTlsContext::__get_isAuthenticated() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___isAuthenticated;
}
constexpr void Mono::Unity::UnityTlsContext::__set_isAuthenticated(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___isAuthenticated = value;
}
constexpr bool& Mono::Unity::UnityTlsContext::__get_hasContext() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___hasContext;
}
constexpr bool const& Mono::Unity::UnityTlsContext::__get_hasContext() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___hasContext;
}
constexpr void Mono::Unity::UnityTlsContext::__set_hasContext(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___hasContext = value;
}
constexpr bool& Mono::Unity::UnityTlsContext::__get_closedGraceful() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___closedGraceful;
}
constexpr bool const& Mono::Unity::UnityTlsContext::__get_closedGraceful() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___closedGraceful;
}
constexpr void Mono::Unity::UnityTlsContext::__set_closedGraceful(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___closedGraceful = value;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& Mono::Unity::UnityTlsContext::__get_writeBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___writeBuffer;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& Mono::Unity::UnityTlsContext::__get_writeBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___writeBuffer;
}
constexpr void Mono::Unity::UnityTlsContext::__set_writeBuffer(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___writeBuffer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& Mono::Unity::UnityTlsContext::__get_readBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___readBuffer;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& Mono::Unity::UnityTlsContext::__get_readBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___readBuffer;
}
constexpr void Mono::Unity::UnityTlsContext::__set_readBuffer(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___readBuffer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Runtime::InteropServices::GCHandle& Mono::Unity::UnityTlsContext::__get_handle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___handle;
}
constexpr ::System::Runtime::InteropServices::GCHandle const& Mono::Unity::UnityTlsContext::__get_handle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___handle;
}
constexpr void Mono::Unity::UnityTlsContext::__set_handle(::System::Runtime::InteropServices::GCHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___handle = value;
}
constexpr ::System::Exception*& Mono::Unity::UnityTlsContext::__get_lastException() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___lastException;
}
constexpr ::cordl_internals::to_const_pointer<::System::Exception*> const& Mono::Unity::UnityTlsContext::__get_lastException() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___lastException;
}
constexpr void Mono::Unity::UnityTlsContext::__set_lastException(::System::Exception* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___lastException)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Mono::Unity::UnityTlsContext* Mono::Unity::UnityTlsContext::New_ctor(::Mono::Net::Security::MobileAuthenticatedStream* parent, ::Mono::Net::Security::MonoSslAuthenticationOptions* options) {
  return THROW_UNLESS(::il2cpp_utils::New<::Mono::Unity::UnityTlsContext*>(parent, options));
}
inline void Mono::Unity::UnityTlsContext::_ctor(::Mono::Net::Security::MobileAuthenticatedStream* parent, ::Mono::Net::Security::MonoSslAuthenticationOptions* options) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTlsContext*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Net::Security::MobileAuthenticatedStream*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Net::Security::MonoSslAuthenticationOptions*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, parent, options);
}
inline void Mono::Unity::UnityTlsContext::ExtractNativeKeyAndChainFromManagedCertificate(::System::Security::Cryptography::X509Certificates::X509Certificate* cert,
                                                                                         ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_errorstate> errorState,
                                                                                         ByRef<::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_x509list>> nativeCertChain,
                                                                                         ByRef<::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_key>> nativeKey) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTlsContext*>::get(), "ExtractNativeKeyAndChainFromManagedCertificate", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::X509Certificates::X509Certificate*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_errorstate>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_x509list>>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_key>>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, cert, errorState, nativeCertChain, nativeKey);
}
inline bool Mono::Unity::UnityTlsContext::get_IsAuthenticated() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTlsContext*>::get(), "get_IsAuthenticated",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Security::Cryptography::X509Certificates::X509Certificate* Mono::Unity::UnityTlsContext::get_LocalClientCertificate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTlsContext*>::get(),
                                                                             "get_LocalClientCertificate", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::X509Certificates::X509Certificate*, false>(this, ___internal_method);
}
inline ::System::Security::Cryptography::X509Certificates::X509Certificate2* Mono::Unity::UnityTlsContext::get_RemoteCertificate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTlsContext*>::get(), "get_RemoteCertificate",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Cryptography::X509Certificates::X509Certificate2*, false>(this, ___internal_method);
}
inline ::System::ValueTuple_2<int32_t, bool> Mono::Unity::UnityTlsContext::Read(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTlsContext*>::get(), "Read", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::ValueTuple_2<int32_t, bool>, false>(this, ___internal_method, buffer, offset, count);
}
inline ::System::ValueTuple_2<int32_t, bool> Mono::Unity::UnityTlsContext::Write(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTlsContext*>::get(), "Write", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::ValueTuple_2<int32_t, bool>, false>(this, ___internal_method, buffer, offset, count);
}
inline void Mono::Unity::UnityTlsContext::Renegotiate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTlsContext*>::get(), "Renegotiate",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool Mono::Unity::UnityTlsContext::PendingRenegotiation() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTlsContext*>::get(), "PendingRenegotiation",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void Mono::Unity::UnityTlsContext::Shutdown() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTlsContext*>::get(), "Shutdown",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Mono::Unity::UnityTlsContext::Dispose(bool disposing) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTlsContext*>::get(), "Dispose", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, disposing);
}
inline void Mono::Unity::UnityTlsContext::StartHandshake() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTlsContext*>::get(), "StartHandshake",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool Mono::Unity::UnityTlsContext::ProcessHandshake() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTlsContext*>::get(), "ProcessHandshake",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void Mono::Unity::UnityTlsContext::FinishHandshake() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTlsContext*>::get(), "FinishHandshake",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void* Mono::Unity::UnityTlsContext::WriteCallback(::cordl_internals::Ptr<void> userData, ::cordl_internals::Ptr<uint8_t> data, void* bufferLen,
                                                         ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_errorstate> errorState) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTlsContext*>::get(), "WriteCallback", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<void>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint8_t>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_errorstate>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void*, false>(nullptr, ___internal_method, userData, data, bufferLen, errorState);
}
inline void* Mono::Unity::UnityTlsContext::WriteCallback(::cordl_internals::Ptr<uint8_t> data, void* bufferLen, ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_errorstate> errorState) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTlsContext*>::get(), "WriteCallback", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint8_t>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_errorstate>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void*, false>(this, ___internal_method, data, bufferLen, errorState);
}
inline void* Mono::Unity::UnityTlsContext::ReadCallback(::cordl_internals::Ptr<void> userData, ::cordl_internals::Ptr<uint8_t> buffer, void* bufferLen,
                                                        ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_errorstate> errorState) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTlsContext*>::get(), "ReadCallback", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<void>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint8_t>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_errorstate>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void*, false>(nullptr, ___internal_method, userData, buffer, bufferLen, errorState);
}
inline void* Mono::Unity::UnityTlsContext::ReadCallback(::cordl_internals::Ptr<uint8_t> buffer, void* bufferLen, ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_errorstate> errorState) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTlsContext*>::get(), "ReadCallback", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint8_t>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_errorstate>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void*, false>(this, ___internal_method, buffer, bufferLen, errorState);
}
inline ::Mono::Unity::__UnityTls__unitytls_x509verify_result Mono::Unity::UnityTlsContext::VerifyCallback(::cordl_internals::Ptr<void> userData, ::Mono::Unity::__UnityTls__unitytls_x509list_ref chain,
                                                                                                          ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_errorstate> errorState) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTlsContext*>::get(), "VerifyCallback", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<void>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Unity::__UnityTls__unitytls_x509list_ref>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_errorstate>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Mono::Unity::__UnityTls__unitytls_x509verify_result, false>(nullptr, ___internal_method, userData, chain, errorState);
}
inline ::Mono::Unity::__UnityTls__unitytls_x509verify_result Mono::Unity::UnityTlsContext::VerifyCallback(::Mono::Unity::__UnityTls__unitytls_x509list_ref chain,
                                                                                                          ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_errorstate> errorState) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTlsContext*>::get(), "VerifyCallback", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Unity::__UnityTls__unitytls_x509list_ref>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_errorstate>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Mono::Unity::__UnityTls__unitytls_x509verify_result, false>(this, ___internal_method, chain, errorState);
}
inline void Mono::Unity::UnityTlsContext::CertificateCallback(::cordl_internals::Ptr<void> userData, ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_tlsctx> ctx,
                                                              ::cordl_internals::Ptr<uint8_t> cn, void* cnLen, ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_x509name> caList,
                                                              void* caListLen, ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_x509list_ref> chain,
                                                              ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_key_ref> key,
                                                              ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_errorstate> errorState) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTlsContext*>::get(), "CertificateCallback", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<void>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_tlsctx>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint8_t>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_x509name>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_x509list_ref>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_key_ref>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_errorstate>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, userData, ctx, cn, cnLen, caList, caListLen, chain, key, errorState);
}
inline void Mono::Unity::UnityTlsContext::CertificateCallback(::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_tlsctx> ctx, ::cordl_internals::Ptr<uint8_t> cn, void* cnLen,
                                                              ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_x509name> caList, void* caListLen,
                                                              ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_x509list_ref> chain,
                                                              ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_key_ref> key,
                                                              ::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_errorstate> errorState) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Unity::UnityTlsContext*>::get(), "CertificateCallback", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_tlsctx>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<uint8_t>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_x509name>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_x509list_ref>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_key_ref>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::Mono::Unity::__UnityTls__unitytls_errorstate>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ctx, cn, cnLen, caList, caListLen, chain, key, errorState);
}
// Ctor Parameters []
constexpr ::Mono::Unity::UnityTlsContext::UnityTlsContext() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
#pragma once
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsProtocol_impl.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsServerProtocol_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsHandshakeHash_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsServer_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__AbstractTlsContext_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsCredentials_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsKeyExchange_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__CertificateRequest_def.hpp"
#include "Org/BouncyCastle/Security/zzzz__SecureRandom_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsContext_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__CertificateStatus_def.hpp"
#include "System/IO/zzzz__MemoryStream_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsPeer_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__Certificate_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__NewSessionTicket_def.hpp"
#include "Org/BouncyCastle/Crypto/Tls/zzzz__TlsServerContextImpl_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::*)(
    ::System::IO::Stream*, ::Org::BouncyCastle::Security::SecureRandom*)>(&::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xfb2844;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Security::SecureRandom*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::*)(
    ::System::IO::Stream*, ::System::IO::Stream*, ::Org::BouncyCastle::Security::SecureRandom*)>(&::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xfb2868;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Security::SecureRandom*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::*)(::Org::BouncyCastle::Security::SecureRandom*)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xfb288c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Security::SecureRandom*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol.Accept
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::*)(::Org::BouncyCastle::Crypto::Tls::TlsServer*)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::Accept)> {
  constexpr static std::size_t size = 0x308;
  constexpr static std::size_t addrs = 0xfb28b0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol*>::get(), 51));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol.CleanupHandshake
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::CleanupHandshake)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xfb2bb8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol*>::get(), 17));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol.get_Context
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::Tls::TlsContext* (::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::get_Context)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xfb2bdc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol.get_ContextAdmin
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::Tls::AbstractTlsContext* (::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::get_ContextAdmin)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xfb2be4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol.get_Peer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::Tls::TlsPeer* (::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::get_Peer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xfb2bec;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol.HandleHandshakeMessage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::*)(uint8_t, ::System::IO::MemoryStream*)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::HandleHandshakeMessage)> {
  constexpr static std::size_t size = 0xcdc;
  constexpr static std::size_t addrs = 0xfb2bf4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol.HandleAlertWarningMessage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::*)(uint8_t)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::HandleAlertWarningMessage)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0xfb3c9c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol.NotifyClientCertificate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::*)(::Org::BouncyCastle::Crypto::Tls::Certificate*)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::NotifyClientCertificate)> {
  constexpr static std::size_t size = 0x2cc;
  constexpr static std::size_t addrs = 0xfb3e10;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol*>::get(), 52));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol.ReceiveCertificateMessage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::*)(::System::IO::MemoryStream*)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::ReceiveCertificateMessage)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xfb4418;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol*>::get(), 53));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol.ReceiveCertificateVerifyMessage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::*)(::System::IO::MemoryStream*)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::ReceiveCertificateVerifyMessage)> {
  constexpr static std::size_t size = 0x4fc;
  constexpr static std::size_t addrs = 0xfb44a4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol*>::get(), 54));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol.ReceiveClientHelloMessage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::*)(::System::IO::MemoryStream*)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::ReceiveClientHelloMessage)> {
  constexpr static std::size_t size = 0x658;
  constexpr static std::size_t addrs = 0xfb509c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol*>::get(), 55));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol.ReceiveClientKeyExchangeMessage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::*)(::System::IO::MemoryStream*)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::ReceiveClientKeyExchangeMessage)> {
  constexpr static std::size_t size = 0x2dc;
  constexpr static std::size_t addrs = 0xfb5b3c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol*>::get(), 56));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol.SendCertificateRequestMessage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::*)(::Org::BouncyCastle::Crypto::Tls::CertificateRequest*)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::SendCertificateRequestMessage)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xfb5e18;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol*>::get(), 57));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol.SendCertificateStatusMessage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::*)(::Org::BouncyCastle::Crypto::Tls::CertificateStatus*)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::SendCertificateStatusMessage)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xfb5ea8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol*>::get(), 58));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol.SendNewSessionTicketMessage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::*)(::Org::BouncyCastle::Crypto::Tls::NewSessionTicket*)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::SendNewSessionTicketMessage)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0xfb5f38;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol*>::get(), 59));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol.SendServerHelloMessage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::SendServerHelloMessage)> {
  constexpr static std::size_t size = 0x874;
  constexpr static std::size_t addrs = 0xfb5ffc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol*>::get(), 60));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol.SendServerHelloDoneMessage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::SendServerHelloDoneMessage)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0xfb6b2c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol*>::get(), 61));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol.SendServerKeyExchangeMessage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
    &::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::SendServerKeyExchangeMessage)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xfb6c58;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol*>::get(), 62));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol.ExpectCertificateVerifyMessage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::*)()>(
    &::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::ExpectCertificateVerifyMessage)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xfb6ce0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol*>::get(), 63));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsServer*& Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::__get_mTlsServer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___mTlsServer;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::TlsServer*> const& Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::__get_mTlsServer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___mTlsServer;
}
constexpr void Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::__set_mTlsServer(::Org::BouncyCastle::Crypto::Tls::TlsServer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mTlsServer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsServerContextImpl*& Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::__get_mTlsServerContext() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___mTlsServerContext;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::TlsServerContextImpl*> const& Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::__get_mTlsServerContext() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___mTlsServerContext;
}
constexpr void Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::__set_mTlsServerContext(::Org::BouncyCastle::Crypto::Tls::TlsServerContextImpl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mTlsServerContext)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange*& Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::__get_mKeyExchange() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___mKeyExchange;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange*> const& Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::__get_mKeyExchange() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___mKeyExchange;
}
constexpr void Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::__set_mKeyExchange(::Org::BouncyCastle::Crypto::Tls::TlsKeyExchange* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mKeyExchange)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsCredentials*& Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::__get_mServerCredentials() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___mServerCredentials;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::TlsCredentials*> const& Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::__get_mServerCredentials() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___mServerCredentials;
}
constexpr void Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::__set_mServerCredentials(::Org::BouncyCastle::Crypto::Tls::TlsCredentials* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mServerCredentials)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Crypto::Tls::CertificateRequest*& Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::__get_mCertificateRequest() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___mCertificateRequest;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::CertificateRequest*> const& Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::__get_mCertificateRequest() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___mCertificateRequest;
}
constexpr void Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::__set_mCertificateRequest(::Org::BouncyCastle::Crypto::Tls::CertificateRequest* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mCertificateRequest)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int16_t& Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::__get_mClientCertificateType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___mClientCertificateType;
}
constexpr int16_t const& Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::__get_mClientCertificateType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___mClientCertificateType;
}
constexpr void Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::__set_mClientCertificateType(int16_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___mClientCertificateType = value;
}
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsHandshakeHash*& Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::__get_mPrepareFinishHash() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___mPrepareFinishHash;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::TlsHandshakeHash*> const& Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::__get_mPrepareFinishHash() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___mPrepareFinishHash;
}
constexpr void Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::__set_mPrepareFinishHash(::Org::BouncyCastle::Crypto::Tls::TlsHandshakeHash* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mPrepareFinishHash)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol* Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::New_ctor(::System::IO::Stream* stream,
                                                                                                                        ::Org::BouncyCastle::Security::SecureRandom* secureRandom) {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol*>(stream, secureRandom));
}
inline void Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::_ctor(::System::IO::Stream* stream, ::Org::BouncyCastle::Security::SecureRandom* secureRandom) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Security::SecureRandom*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stream, secureRandom);
}
inline ::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol* Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::New_ctor(::System::IO::Stream* input, ::System::IO::Stream* output,
                                                                                                                        ::Org::BouncyCastle::Security::SecureRandom* secureRandom) {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol*>(input, output, secureRandom));
}
inline void Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::_ctor(::System::IO::Stream* input, ::System::IO::Stream* output, ::Org::BouncyCastle::Security::SecureRandom* secureRandom) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Security::SecureRandom*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, input, output, secureRandom);
}
inline ::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol* Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::New_ctor(::Org::BouncyCastle::Security::SecureRandom* secureRandom) {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol*>(secureRandom));
}
inline void Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::_ctor(::Org::BouncyCastle::Security::SecureRandom* secureRandom) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Security::SecureRandom*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, secureRandom);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::Accept(::Org::BouncyCastle::Crypto::Tls::TlsServer* tlsServer) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol*>::get(), "Accept", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::TlsServer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, tlsServer);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::CleanupHandshake() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol*>::get(),
                                                                             "CleanupHandshake", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Tls::TlsContext* Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::get_Context() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol*>::get(),
                                                                             "get_Context", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Tls::TlsContext*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Tls::AbstractTlsContext* Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::get_ContextAdmin() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol*>::get(),
                                                                             "get_ContextAdmin", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Tls::AbstractTlsContext*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::Tls::TlsPeer* Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::get_Peer() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol*>::get(),
                                                                             "get_Peer", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Tls::TlsPeer*, false>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::HandleHandshakeMessage(uint8_t type, ::System::IO::MemoryStream* buf) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol*>::get(), "HandleHandshakeMessage", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::MemoryStream*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, type, buf);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::HandleAlertWarningMessage(uint8_t alertDescription) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol*>::get(), "HandleAlertWarningMessage",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, alertDescription);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::NotifyClientCertificate(::Org::BouncyCastle::Crypto::Tls::Certificate* clientCertificate) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol*>::get(), "NotifyClientCertificate", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::Certificate*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, clientCertificate);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::ReceiveCertificateMessage(::System::IO::MemoryStream* buf) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol*>::get(), "ReceiveCertificateMessage",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::MemoryStream*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, buf);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::ReceiveCertificateVerifyMessage(::System::IO::MemoryStream* buf) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol*>::get(), "ReceiveCertificateVerifyMessage",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::MemoryStream*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, buf);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::ReceiveClientHelloMessage(::System::IO::MemoryStream* buf) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol*>::get(), "ReceiveClientHelloMessage",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::MemoryStream*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, buf);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::ReceiveClientKeyExchangeMessage(::System::IO::MemoryStream* buf) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol*>::get(), "ReceiveClientKeyExchangeMessage",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::MemoryStream*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, buf);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::SendCertificateRequestMessage(::Org::BouncyCastle::Crypto::Tls::CertificateRequest* certificateRequest) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol*>::get(), "SendCertificateRequestMessage", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::CertificateRequest*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, certificateRequest);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::SendCertificateStatusMessage(::Org::BouncyCastle::Crypto::Tls::CertificateStatus* certificateStatus) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol*>::get(), "SendCertificateStatusMessage", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::CertificateStatus*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, certificateStatus);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::SendNewSessionTicketMessage(::Org::BouncyCastle::Crypto::Tls::NewSessionTicket* newSessionTicket) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol*>::get(), "SendNewSessionTicketMessage", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Tls::NewSessionTicket*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newSessionTicket);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::SendServerHelloMessage() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol*>::get(),
                                                                             "SendServerHelloMessage", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::SendServerHelloDoneMessage() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol*>::get(),
                                                                             "SendServerHelloDoneMessage", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::SendServerKeyExchangeMessage(::ArrayW<uint8_t, ::Array<uint8_t>*> serverKeyExchange) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol*>::get(), "SendServerKeyExchangeMessage",
                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, serverKeyExchange);
}
inline bool Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::ExpectCertificateVerifyMessage() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol*>::get(),
                                                                             "ExpectCertificateVerifyMessage", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Tls::TlsServerProtocol::TlsServerProtocol() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
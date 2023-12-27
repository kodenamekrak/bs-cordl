#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Bcpg/OpenPgp/zzzz__PgpSecretKey_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__PublicKeyAlgorithmTag_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__AsymmetricKeyParameter_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "Org/BouncyCastle/Security/zzzz__SecureRandom_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__BcpgInputStream_def.hpp"
#include "Org/BouncyCastle/Bcpg/OpenPgp/zzzz__PgpSignatureSubpacketVector_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__HashAlgorithmTag_def.hpp"
#include "Org/BouncyCastle/Bcpg/OpenPgp/zzzz__PgpPrivateKey_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__S2k_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__SecretKeyPacket_def.hpp"
#include "Org/BouncyCastle/Bcpg/OpenPgp/zzzz__PgpKeyPair_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__SymmetricKeyAlgorithmTag_def.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__ECPrivateKeyParameters_def.hpp"
#include "Org/BouncyCastle/Bcpg/OpenPgp/zzzz__PgpPublicKey_def.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__KeyParameter_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::*)(
    ::Org::BouncyCastle::Bcpg::SecretKeyPacket*, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*)>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x10bd784;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::SecretKeyPacket*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::*)(
    ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey*, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*, ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag, ::ArrayW<uint8_t, ::Array<uint8_t>*>,
    bool, bool, ::Org::BouncyCastle::Security::SecureRandom*, bool)>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::_ctor)> {
  constexpr static std::size_t size = 0x728;
  constexpr static std::size_t addrs = 0x10bd7b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Security::SecureRandom*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::*)(
    int32_t, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair*, ::StringW, ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag, ::ArrayW<char16_t, ::Array<char16_t>*>,
    ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*, ::Org::BouncyCastle::Security::SecureRandom*)>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x10be484;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t, ::Array<char16_t>*>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Security::SecureRandom*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::*)(
    int32_t, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair*, ::StringW, ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag, ::ArrayW<char16_t, ::Array<char16_t>*>, bool,
    ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*, ::Org::BouncyCastle::Security::SecureRandom*)>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x10be4b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t, ::Array<char16_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Security::SecureRandom*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::*)(
    int32_t, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair*, ::StringW, ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag, bool, ::ArrayW<char16_t, ::Array<char16_t>*>, bool,
    ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*, ::Org::BouncyCastle::Security::SecureRandom*)>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x10be540;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t, ::Array<char16_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Security::SecureRandom*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::*)(
    int32_t, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair*, ::StringW, ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag, ::ArrayW<uint8_t, ::Array<uint8_t>*>, bool,
    ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*, ::Org::BouncyCastle::Security::SecureRandom*)>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x10be698;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Security::SecureRandom*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::*)(
    int32_t, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair*, ::StringW, ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag, ::ArrayW<uint8_t, ::Array<uint8_t>*>, bool, bool,
    ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*, ::Org::BouncyCastle::Security::SecureRandom*)>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x10be610;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Security::SecureRandom*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::*)(
    int32_t, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair*, ::StringW, ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag, ::Org::BouncyCastle::Bcpg::HashAlgorithmTag,
    ::ArrayW<char16_t, ::Array<char16_t>*>, bool, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*,
    ::Org::BouncyCastle::Security::SecureRandom*)>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::_ctor)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x10be97c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::HashAlgorithmTag>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t, ::Array<char16_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Security::SecureRandom*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::*)(
    int32_t, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair*, ::StringW, ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag, ::Org::BouncyCastle::Bcpg::HashAlgorithmTag, bool,
    ::ArrayW<char16_t, ::Array<char16_t>*>, bool, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*,
    ::Org::BouncyCastle::Security::SecureRandom*)>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::_ctor)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x10bea20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::HashAlgorithmTag>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t, ::Array<char16_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Security::SecureRandom*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::*)(
    int32_t, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair*, ::StringW, ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag, ::Org::BouncyCastle::Bcpg::HashAlgorithmTag,
    ::ArrayW<uint8_t, ::Array<uint8_t>*>, bool, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*,
    ::Org::BouncyCastle::Security::SecureRandom*)>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x10beb3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::HashAlgorithmTag>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Security::SecureRandom*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::*)(
    int32_t, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair*, ::StringW, ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag, ::Org::BouncyCastle::Bcpg::HashAlgorithmTag,
    ::ArrayW<uint8_t, ::Array<uint8_t>*>, bool, bool, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*,
    ::Org::BouncyCastle::Security::SecureRandom*)>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x10beab4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::HashAlgorithmTag>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Security::SecureRandom*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey.CertifiedPublicKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<
    ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* (*)(int32_t, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair*, ::StringW, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*,
                                                          ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*)>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::CertifiedPublicKey)> {
  constexpr static std::size_t size = 0x2b4;
  constexpr static std::size_t addrs = 0x10be6c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>::get(), "CertifiedPublicKey", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey.CertifiedPublicKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<
    ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* (*)(int32_t, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair*, ::StringW, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*,
                                                          ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*, ::Org::BouncyCastle::Bcpg::HashAlgorithmTag)>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::CertifiedPublicKey)> {
  constexpr static std::size_t size = 0x2c0;
  constexpr static std::size_t addrs = 0x10beb70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>::get(), "CertifiedPublicKey", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::HashAlgorithmTag>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::*)(
    int32_t, ::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, ::System::DateTime,
    ::StringW, ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag, ::ArrayW<char16_t, ::Array<char16_t>*>, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*,
    ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*, ::Org::BouncyCastle::Security::SecureRandom*)>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::_ctor)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x10bf078;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t, ::Array<char16_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Security::SecureRandom*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::*)(
    int32_t, ::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*, ::System::DateTime,
    ::StringW, ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag, ::ArrayW<char16_t, ::Array<char16_t>*>, bool, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*,
    ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*, ::Org::BouncyCastle::Security::SecureRandom*)>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::_ctor)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x10bf15c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>::get(), ".ctor", std::vector<Il2CppClass*>{},
            ::std::vector<Il2CppType const*>{
                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag>::get(),
                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>::get(),
                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>::get(),
                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>::get(),
                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t, ::Array<char16_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>::get(),
                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>::get(),
                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Security::SecureRandom*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey.get_IsSigningKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::*)()>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::get_IsSigningKey)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x10bf244;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>::get(),
                                                                               "get_IsSigningKey", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey.get_IsMasterKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::*)()>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::get_IsMasterKey)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x10bf288;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>::get(),
                                                                               "get_IsMasterKey", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey.get_IsPrivateKeyEmpty
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::*)()>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::get_IsPrivateKeyEmpty)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x10bf2a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>::get(),
                                                                               "get_IsPrivateKeyEmpty", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey.get_KeyEncryptionAlgorithm
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag (::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::*)()>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::get_KeyEncryptionAlgorithm)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x10bf2d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>::get(),
                                                                               "get_KeyEncryptionAlgorithm", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey.get_KeyId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::*)()>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::get_KeyId)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x10bf2f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>::get(),
                                                                               "get_KeyId", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey.get_S2kUsage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::*)()>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::get_S2kUsage)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x10bf310;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>::get(),
                                                                               "get_S2kUsage", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey.get_S2k
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Bcpg::S2k* (::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::*)()>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::get_S2k)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x10bf32c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>::get(),
                                                                               "get_S2k", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey.get_PublicKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* (::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::*)()>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::get_PublicKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x10bf348;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>::get(),
                                                                               "get_PublicKey", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey.get_UserIds
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerable* (::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::*)()>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::get_UserIds)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x10bf350;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>::get(),
                                                                               "get_UserIds", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey.get_UserAttributes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerable* (::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::*)()>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::get_UserAttributes)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x10bf36c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>::get(),
                                                                               "get_UserAttributes", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey.ExtractKeyData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::*)(
    ::ArrayW<uint8_t, ::Array<uint8_t>*>, bool)>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::ExtractKeyData)> {
  constexpr static std::size_t size = 0x890;
  constexpr static std::size_t addrs = 0x10bf388;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>::get(), "ExtractKeyData", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey.RecoverKeyData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (*)(
    ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag, ::StringW, ::Org::BouncyCastle::Crypto::Parameters::KeyParameter*, ::ArrayW<uint8_t, ::Array<uint8_t>*>, ::ArrayW<uint8_t, ::Array<uint8_t>*>,
    int32_t, int32_t)>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::RecoverKeyData)> {
  constexpr static std::size_t size = 0x288;
  constexpr static std::size_t addrs = 0x10c0588;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>::get(), "RecoverKeyData", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Parameters::KeyParameter*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey.ExtractPrivateKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey* (
    ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::*)(::ArrayW<char16_t, ::Array<char16_t>*>)>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::ExtractPrivateKey)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x10c0810;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>::get(), "ExtractPrivateKey", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t, ::Array<char16_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey.ExtractPrivateKeyUtf8
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey* (
    ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::*)(::ArrayW<char16_t, ::Array<char16_t>*>)>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::ExtractPrivateKeyUtf8)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x10c0fe0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>::get(), "ExtractPrivateKeyUtf8", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t, ::Array<char16_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey.ExtractPrivateKeyRaw
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey* (
    ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>)>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::ExtractPrivateKeyRaw)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x10c100c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>::get(), "ExtractPrivateKeyRaw", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey.DoExtractPrivateKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey* (
    ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, bool)>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::DoExtractPrivateKey)> {
  constexpr static std::size_t size = 0x7a4;
  constexpr static std::size_t addrs = 0x10c083c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>::get(), "DoExtractPrivateKey", std::vector<Il2CppClass*>{},
                                   ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey.GetECKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters* (
    ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::*)(::StringW, ::Org::BouncyCastle::Bcpg::BcpgInputStream*)>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::GetECKey)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x10c1014;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>::get(), "GetECKey", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::BcpgInputStream*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey.Checksum
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (*)(bool, ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t)>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::Checksum)> {
  constexpr static std::size_t size = 0x26c;
  constexpr static std::size_t addrs = 0x10bded8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>::get(), "Checksum", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey.GetEncoded
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::*)()>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::GetEncoded)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x10c115c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>::get(),
                                                                               "GetEncoded", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey.Encode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::*)(::System::IO::Stream*)>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::Encode)> {
  constexpr static std::size_t size = 0xd04;
  constexpr static std::size_t addrs = 0x10c11d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>::get(), "Encode", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey.CopyWithNewPassword
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey* (*)(::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*, ::ArrayW<char16_t, ::Array<char16_t>*>, ::ArrayW<char16_t, ::Array<char16_t>*>,
                                                                      ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag, ::Org::BouncyCastle::Security::SecureRandom*)>(
        &::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::CopyWithNewPassword)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x10c1f30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>::get(), "CopyWithNewPassword", std::vector<Il2CppClass*>{},
                                   ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t, ::Array<char16_t>*>>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t, ::Array<char16_t>*>>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Security::SecureRandom*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey.CopyWithNewPasswordUtf8
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey* (*)(::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*, ::ArrayW<char16_t, ::Array<char16_t>*>, ::ArrayW<char16_t, ::Array<char16_t>*>,
                                                                      ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag, ::Org::BouncyCastle::Security::SecureRandom*)>(
        &::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::CopyWithNewPasswordUtf8)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x10c23f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>::get(), "CopyWithNewPasswordUtf8", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t, ::Array<char16_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t, ::Array<char16_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Security::SecureRandom*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey.CopyWithNewPasswordRaw
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey* (*)(::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*, ::ArrayW<uint8_t, ::Array<uint8_t>*>, ::ArrayW<uint8_t, ::Array<uint8_t>*>,
                                                                      ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag, ::Org::BouncyCastle::Security::SecureRandom*)>(
        &::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::CopyWithNewPasswordRaw)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x10c245c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>::get(), "CopyWithNewPasswordRaw", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Security::SecureRandom*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey.DoCopyWithNewPassword
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey* (*)(::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*, ::ArrayW<uint8_t, ::Array<uint8_t>*>, ::ArrayW<uint8_t, ::Array<uint8_t>*>,
                                                                      bool, ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag, ::Org::BouncyCastle::Security::SecureRandom*)>(
        &::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::DoCopyWithNewPassword)> {
  constexpr static std::size_t size = 0x450;
  constexpr static std::size_t addrs = 0x10c1fa8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>::get(), "DoCopyWithNewPassword", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Security::SecureRandom*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey.ReplacePublicKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey* (*)(::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*)>(
        &::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::ReplacePublicKey)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x10c246c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>::get(), "ReplacePublicKey", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey.EncryptKeyDataV3
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (*)(
    ::ArrayW<uint8_t, ::Array<uint8_t>*>, ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag, ::ArrayW<uint8_t, ::Array<uint8_t>*>, bool, ::Org::BouncyCastle::Security::SecureRandom*,
    ByRef<::Org::BouncyCastle::Bcpg::S2k*>, ByRef<::ArrayW<uint8_t, ::Array<uint8_t>*>>)>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::EncryptKeyDataV3)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0x10be1d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>::get(), "EncryptKeyDataV3", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Security::SecureRandom*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Org::BouncyCastle::Bcpg::S2k*>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<uint8_t, ::Array<uint8_t>*>>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey.EncryptKeyDataV4
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (*)(
    ::ArrayW<uint8_t, ::Array<uint8_t>*>, ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag, ::Org::BouncyCastle::Bcpg::HashAlgorithmTag, ::ArrayW<uint8_t, ::Array<uint8_t>*>, bool,
    ::Org::BouncyCastle::Security::SecureRandom*, ByRef<::Org::BouncyCastle::Bcpg::S2k*>, ByRef<::ArrayW<uint8_t, ::Array<uint8_t>*>>)>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::EncryptKeyDataV4)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x10be144;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>::get(), "EncryptKeyDataV4", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::HashAlgorithmTag>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Security::SecureRandom*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Org::BouncyCastle::Bcpg::S2k*>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<uint8_t, ::Array<uint8_t>*>>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey.EncryptData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (*)(
    ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag, ::Org::BouncyCastle::Crypto::Parameters::KeyParameter*, ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t,
    ::Org::BouncyCastle::Security::SecureRandom*, ByRef<::ArrayW<uint8_t, ::Array<uint8_t>*>>)>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::EncryptData)> {
  constexpr static std::size_t size = 0x350;
  constexpr static std::size_t addrs = 0x10c2544;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>::get(), "EncryptData", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Parameters::KeyParameter*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Security::SecureRandom*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<uint8_t, ::Array<uint8_t>*>>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey.ParseSecretKeyFromSExpr
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey* (*)(::System::IO::Stream*, ::ArrayW<char16_t, ::Array<char16_t>*>, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*)>(
        &::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::ParseSecretKeyFromSExpr)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x10c29a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>::get(), "ParseSecretKeyFromSExpr", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t, ::Array<char16_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey.ParseSecretKeyFromSExprUtf8
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey* (*)(::System::IO::Stream*, ::ArrayW<char16_t, ::Array<char16_t>*>, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*)>(
        &::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::ParseSecretKeyFromSExprUtf8)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x10c2d2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>::get(), "ParseSecretKeyFromSExprUtf8", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t, ::Array<char16_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey.ParseSecretKeyFromSExprRaw
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey* (*)(::System::IO::Stream*, ::ArrayW<uint8_t, ::Array<uint8_t>*>, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*)>(
        &::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::ParseSecretKeyFromSExprRaw)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x10c2d68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>::get(), "ParseSecretKeyFromSExprRaw", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey.DoParseSecretKeyFromSExpr
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey* (*)(::System::IO::Stream*, ::ArrayW<uint8_t, ::Array<uint8_t>*>, bool, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*)>(
        &::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::DoParseSecretKeyFromSExpr)> {
  constexpr static std::size_t size = 0x350;
  constexpr static std::size_t addrs = 0x10c29dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>::get(), "DoParseSecretKeyFromSExpr", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey.ParseSecretKeyFromSExpr
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey* (*)(::System::IO::Stream*, ::ArrayW<char16_t, ::Array<char16_t>*>)>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::ParseSecretKeyFromSExpr)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x10c31ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>::get(), "ParseSecretKeyFromSExpr", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t, ::Array<char16_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey.ParseSecretKeyFromSExprUtf8
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey* (*)(::System::IO::Stream*, ::ArrayW<char16_t, ::Array<char16_t>*>)>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::ParseSecretKeyFromSExprUtf8)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x10c36ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>::get(), "ParseSecretKeyFromSExprUtf8", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t, ::Array<char16_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey.ParseSecretKeyFromSExprRaw
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey* (*)(::System::IO::Stream*, ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::ParseSecretKeyFromSExprRaw)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x10c3718;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>::get(), "ParseSecretKeyFromSExprRaw", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey.DoParseSecretKeyFromSExpr
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey* (*)(::System::IO::Stream*, ::ArrayW<uint8_t, ::Array<uint8_t>*>, bool)>(
        &::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::DoParseSecretKeyFromSExpr)> {
  constexpr static std::size_t size = 0x4d4;
  constexpr static std::size_t addrs = 0x10c3218;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>::get(), "DoParseSecretKeyFromSExpr", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey.GetDValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (*)(::System::IO::Stream*, ::ArrayW<uint8_t, ::Array<uint8_t>*>, bool, ::StringW)>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::GetDValue)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x10c2fac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>::get(), "GetDValue", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Bcpg::SecretKeyPacket*& Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::__get_secret() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___secret;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Bcpg::SecretKeyPacket*> const& Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::__get_secret() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___secret;
}
constexpr void Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::__set_secret(::Org::BouncyCastle::Bcpg::SecretKeyPacket* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___secret)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*& Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::__get_pub() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___pub;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*> const& Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::__get_pub() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___pub;
}
constexpr void Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::__set_pub(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___pub)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey* Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::New_ctor(::Org::BouncyCastle::Bcpg::SecretKeyPacket* secret,
                                                                                                                  ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* pub) {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>(secret, pub));
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::_ctor(::Org::BouncyCastle::Bcpg::SecretKeyPacket* secret, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* pub) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::SecretKeyPacket*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, secret, pub);
}
inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey* Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::New_ctor(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey* privKey,
                                                                                                                  ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* pubKey,
                                                                                                                  ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm,
                                                                                                                  ::ArrayW<uint8_t, ::Array<uint8_t>*> rawPassPhrase, bool clearPassPhrase,
                                                                                                                  bool useSha1, ::Org::BouncyCastle::Security::SecureRandom* rand, bool isMasterKey) {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>(privKey, pubKey, encAlgorithm, rawPassPhrase, clearPassPhrase, useSha1, rand, isMasterKey));
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::_ctor(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey* privKey, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* pubKey,
                                                                  ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm, ::ArrayW<uint8_t, ::Array<uint8_t>*> rawPassPhrase,
                                                                  bool clearPassPhrase, bool useSha1, ::Org::BouncyCastle::Security::SecureRandom* rand, bool isMasterKey) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Security::SecureRandom*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, privKey, pubKey, encAlgorithm, rawPassPhrase, clearPassPhrase, useSha1, rand, isMasterKey);
}
inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey* Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::New_ctor(int32_t certificationLevel, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair* keyPair,
                                                                                                                  ::StringW id, ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm,
                                                                                                                  ::ArrayW<char16_t, ::Array<char16_t>*> passPhrase,
                                                                                                                  ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* hashedPackets,
                                                                                                                  ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* unhashedPackets,
                                                                                                                  ::Org::BouncyCastle::Security::SecureRandom* rand) {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>(certificationLevel, keyPair, id, encAlgorithm, passPhrase, hashedPackets, unhashedPackets, rand));
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::_ctor(int32_t certificationLevel, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair* keyPair, ::StringW id,
                                                                  ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm, ::ArrayW<char16_t, ::Array<char16_t>*> passPhrase,
                                                                  ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* hashedPackets,
                                                                  ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* unhashedPackets, ::Org::BouncyCastle::Security::SecureRandom* rand) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t, ::Array<char16_t>*>>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Security::SecureRandom*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, certificationLevel, keyPair, id, encAlgorithm, passPhrase, hashedPackets, unhashedPackets, rand);
}
inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey* Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::New_ctor(int32_t certificationLevel, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair* keyPair,
                                                                                                                  ::StringW id, ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm,
                                                                                                                  ::ArrayW<char16_t, ::Array<char16_t>*> passPhrase, bool useSha1,
                                                                                                                  ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* hashedPackets,
                                                                                                                  ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* unhashedPackets,
                                                                                                                  ::Org::BouncyCastle::Security::SecureRandom* rand) {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>(certificationLevel, keyPair, id, encAlgorithm, passPhrase, useSha1, hashedPackets, unhashedPackets, rand));
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::_ctor(int32_t certificationLevel, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair* keyPair, ::StringW id,
                                                                  ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm, ::ArrayW<char16_t, ::Array<char16_t>*> passPhrase, bool useSha1,
                                                                  ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* hashedPackets,
                                                                  ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* unhashedPackets, ::Org::BouncyCastle::Security::SecureRandom* rand) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t, ::Array<char16_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Security::SecureRandom*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, certificationLevel, keyPair, id, encAlgorithm, passPhrase, useSha1, hashedPackets, unhashedPackets, rand);
}
inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey* Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::New_ctor(int32_t certificationLevel, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair* keyPair,
                                                                                                                  ::StringW id, ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm,
                                                                                                                  bool utf8PassPhrase, ::ArrayW<char16_t, ::Array<char16_t>*> passPhrase, bool useSha1,
                                                                                                                  ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* hashedPackets,
                                                                                                                  ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* unhashedPackets,
                                                                                                                  ::Org::BouncyCastle::Security::SecureRandom* rand) {
  return THROW_UNLESS(
      ::il2cpp_utils::New<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>(certificationLevel, keyPair, id, encAlgorithm, utf8PassPhrase, passPhrase, useSha1, hashedPackets, unhashedPackets, rand));
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::_ctor(int32_t certificationLevel, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair* keyPair, ::StringW id,
                                                                  ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm, bool utf8PassPhrase,
                                                                  ::ArrayW<char16_t, ::Array<char16_t>*> passPhrase, bool useSha1,
                                                                  ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* hashedPackets,
                                                                  ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* unhashedPackets, ::Org::BouncyCastle::Security::SecureRandom* rand) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t, ::Array<char16_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Security::SecureRandom*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, certificationLevel, keyPair, id, encAlgorithm, utf8PassPhrase, passPhrase, useSha1, hashedPackets, unhashedPackets,
                                                          rand);
}
inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey* Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::New_ctor(int32_t certificationLevel, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair* keyPair,
                                                                                                                  ::StringW id, ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm,
                                                                                                                  ::ArrayW<uint8_t, ::Array<uint8_t>*> rawPassPhrase, bool useSha1,
                                                                                                                  ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* hashedPackets,
                                                                                                                  ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* unhashedPackets,
                                                                                                                  ::Org::BouncyCastle::Security::SecureRandom* rand) {
  return THROW_UNLESS(
      ::il2cpp_utils::New<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>(certificationLevel, keyPair, id, encAlgorithm, rawPassPhrase, useSha1, hashedPackets, unhashedPackets, rand));
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::_ctor(int32_t certificationLevel, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair* keyPair, ::StringW id,
                                                                  ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm, ::ArrayW<uint8_t, ::Array<uint8_t>*> rawPassPhrase, bool useSha1,
                                                                  ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* hashedPackets,
                                                                  ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* unhashedPackets, ::Org::BouncyCastle::Security::SecureRandom* rand) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Security::SecureRandom*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, certificationLevel, keyPair, id, encAlgorithm, rawPassPhrase, useSha1, hashedPackets, unhashedPackets, rand);
}
inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*
Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::New_ctor(int32_t certificationLevel, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair* keyPair, ::StringW id,
                                                         ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm, ::ArrayW<uint8_t, ::Array<uint8_t>*> rawPassPhrase, bool clearPassPhrase,
                                                         bool useSha1, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* hashedPackets,
                                                         ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* unhashedPackets, ::Org::BouncyCastle::Security::SecureRandom* rand) {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>(certificationLevel, keyPair, id, encAlgorithm, rawPassPhrase, clearPassPhrase, useSha1, hashedPackets,
                                                                                             unhashedPackets, rand));
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::_ctor(int32_t certificationLevel, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair* keyPair, ::StringW id,
                                                                  ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm, ::ArrayW<uint8_t, ::Array<uint8_t>*> rawPassPhrase,
                                                                  bool clearPassPhrase, bool useSha1, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* hashedPackets,
                                                                  ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* unhashedPackets, ::Org::BouncyCastle::Security::SecureRandom* rand) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Security::SecureRandom*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, certificationLevel, keyPair, id, encAlgorithm, rawPassPhrase, clearPassPhrase, useSha1, hashedPackets,
                                                          unhashedPackets, rand);
}
inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey* Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::New_ctor(int32_t certificationLevel, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair* keyPair,
                                                                                                                  ::StringW id, ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm,
                                                                                                                  ::Org::BouncyCastle::Bcpg::HashAlgorithmTag hashAlgorithm,
                                                                                                                  ::ArrayW<char16_t, ::Array<char16_t>*> passPhrase, bool useSha1,
                                                                                                                  ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* hashedPackets,
                                                                                                                  ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* unhashedPackets,
                                                                                                                  ::Org::BouncyCastle::Security::SecureRandom* rand) {
  return THROW_UNLESS(
      ::il2cpp_utils::New<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>(certificationLevel, keyPair, id, encAlgorithm, hashAlgorithm, passPhrase, useSha1, hashedPackets, unhashedPackets, rand));
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::_ctor(int32_t certificationLevel, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair* keyPair, ::StringW id,
                                                                  ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm, ::Org::BouncyCastle::Bcpg::HashAlgorithmTag hashAlgorithm,
                                                                  ::ArrayW<char16_t, ::Array<char16_t>*> passPhrase, bool useSha1,
                                                                  ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* hashedPackets,
                                                                  ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* unhashedPackets, ::Org::BouncyCastle::Security::SecureRandom* rand) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::HashAlgorithmTag>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t, ::Array<char16_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Security::SecureRandom*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, certificationLevel, keyPair, id, encAlgorithm, hashAlgorithm, passPhrase, useSha1, hashedPackets, unhashedPackets,
                                                          rand);
}
inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey* Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::New_ctor(int32_t certificationLevel, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair* keyPair,
                                                                                                                  ::StringW id, ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm,
                                                                                                                  ::Org::BouncyCastle::Bcpg::HashAlgorithmTag hashAlgorithm, bool utf8PassPhrase,
                                                                                                                  ::ArrayW<char16_t, ::Array<char16_t>*> passPhrase, bool useSha1,
                                                                                                                  ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* hashedPackets,
                                                                                                                  ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* unhashedPackets,
                                                                                                                  ::Org::BouncyCastle::Security::SecureRandom* rand) {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>(certificationLevel, keyPair, id, encAlgorithm, hashAlgorithm, utf8PassPhrase, passPhrase, useSha1,
                                                                                             hashedPackets, unhashedPackets, rand));
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::_ctor(int32_t certificationLevel, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair* keyPair, ::StringW id,
                                                                  ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm, ::Org::BouncyCastle::Bcpg::HashAlgorithmTag hashAlgorithm,
                                                                  bool utf8PassPhrase, ::ArrayW<char16_t, ::Array<char16_t>*> passPhrase, bool useSha1,
                                                                  ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* hashedPackets,
                                                                  ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* unhashedPackets, ::Org::BouncyCastle::Security::SecureRandom* rand) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::HashAlgorithmTag>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t, ::Array<char16_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Security::SecureRandom*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, certificationLevel, keyPair, id, encAlgorithm, hashAlgorithm, utf8PassPhrase, passPhrase, useSha1, hashedPackets,
                                                          unhashedPackets, rand);
}
inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey* Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::New_ctor(int32_t certificationLevel, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair* keyPair,
                                                                                                                  ::StringW id, ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm,
                                                                                                                  ::Org::BouncyCastle::Bcpg::HashAlgorithmTag hashAlgorithm,
                                                                                                                  ::ArrayW<uint8_t, ::Array<uint8_t>*> rawPassPhrase, bool useSha1,
                                                                                                                  ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* hashedPackets,
                                                                                                                  ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* unhashedPackets,
                                                                                                                  ::Org::BouncyCastle::Security::SecureRandom* rand) {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>(certificationLevel, keyPair, id, encAlgorithm, hashAlgorithm, rawPassPhrase, useSha1, hashedPackets,
                                                                                             unhashedPackets, rand));
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::_ctor(int32_t certificationLevel, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair* keyPair, ::StringW id,
                                                                  ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm, ::Org::BouncyCastle::Bcpg::HashAlgorithmTag hashAlgorithm,
                                                                  ::ArrayW<uint8_t, ::Array<uint8_t>*> rawPassPhrase, bool useSha1,
                                                                  ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* hashedPackets,
                                                                  ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* unhashedPackets, ::Org::BouncyCastle::Security::SecureRandom* rand) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::HashAlgorithmTag>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Security::SecureRandom*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, certificationLevel, keyPair, id, encAlgorithm, hashAlgorithm, rawPassPhrase, useSha1, hashedPackets,
                                                          unhashedPackets, rand);
}
inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*
Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::New_ctor(int32_t certificationLevel, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair* keyPair, ::StringW id,
                                                         ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm, ::Org::BouncyCastle::Bcpg::HashAlgorithmTag hashAlgorithm,
                                                         ::ArrayW<uint8_t, ::Array<uint8_t>*> rawPassPhrase, bool clearPassPhrase, bool useSha1,
                                                         ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* hashedPackets,
                                                         ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* unhashedPackets, ::Org::BouncyCastle::Security::SecureRandom* rand) {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>(certificationLevel, keyPair, id, encAlgorithm, hashAlgorithm, rawPassPhrase, clearPassPhrase, useSha1,
                                                                                             hashedPackets, unhashedPackets, rand));
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::_ctor(int32_t certificationLevel, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair* keyPair, ::StringW id,
                                                                  ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm, ::Org::BouncyCastle::Bcpg::HashAlgorithmTag hashAlgorithm,
                                                                  ::ArrayW<uint8_t, ::Array<uint8_t>*> rawPassPhrase, bool clearPassPhrase, bool useSha1,
                                                                  ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* hashedPackets,
                                                                  ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* unhashedPackets, ::Org::BouncyCastle::Security::SecureRandom* rand) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::HashAlgorithmTag>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Security::SecureRandom*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, certificationLevel, keyPair, id, encAlgorithm, hashAlgorithm, rawPassPhrase, clearPassPhrase, useSha1,
                                                          hashedPackets, unhashedPackets, rand);
}
inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*
Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::CertifiedPublicKey(int32_t certificationLevel, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair* keyPair, ::StringW id,
                                                                   ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* hashedPackets,
                                                                   ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* unhashedPackets) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>::get(), "CertifiedPublicKey", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*, false>(nullptr, ___internal_method, certificationLevel, keyPair, id, hashedPackets, unhashedPackets);
}
inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::CertifiedPublicKey(
    int32_t certificationLevel, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair* keyPair, ::StringW id, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* hashedPackets,
    ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* unhashedPackets, ::Org::BouncyCastle::Bcpg::HashAlgorithmTag hashAlgorithm) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>::get(), "CertifiedPublicKey", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::HashAlgorithmTag>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*, false>(nullptr, ___internal_method, certificationLevel, keyPair, id, hashedPackets, unhashedPackets,
                                                                                                       hashAlgorithm);
}
inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*
Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::New_ctor(int32_t certificationLevel, ::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag algorithm,
                                                         ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* pubKey, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* privKey,
                                                         ::System::DateTime time, ::StringW id, ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm,
                                                         ::ArrayW<char16_t, ::Array<char16_t>*> passPhrase, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* hashedPackets,
                                                         ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* unhashedPackets, ::Org::BouncyCastle::Security::SecureRandom* rand) {
  return THROW_UNLESS(
      ::il2cpp_utils::New<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>(certificationLevel, algorithm, pubKey, privKey, time, id, encAlgorithm, passPhrase, hashedPackets, unhashedPackets, rand));
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::_ctor(int32_t certificationLevel, ::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag algorithm,
                                                                  ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* pubKey, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* privKey,
                                                                  ::System::DateTime time, ::StringW id, ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm,
                                                                  ::ArrayW<char16_t, ::Array<char16_t>*> passPhrase, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* hashedPackets,
                                                                  ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* unhashedPackets, ::Org::BouncyCastle::Security::SecureRandom* rand) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t, ::Array<char16_t>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Security::SecureRandom*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, certificationLevel, algorithm, pubKey, privKey, time, id, encAlgorithm, passPhrase, hashedPackets, unhashedPackets,
                                                          rand);
}
inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey* Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::New_ctor(
    int32_t certificationLevel, ::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag algorithm, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* pubKey,
    ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* privKey, ::System::DateTime time, ::StringW id, ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm,
    ::ArrayW<char16_t, ::Array<char16_t>*> passPhrase, bool useSha1, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* hashedPackets,
    ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* unhashedPackets, ::Org::BouncyCastle::Security::SecureRandom* rand) {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>(certificationLevel, algorithm, pubKey, privKey, time, id, encAlgorithm, passPhrase, useSha1, hashedPackets,
                                                                                             unhashedPackets, rand));
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::_ctor(int32_t certificationLevel, ::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag algorithm,
                                                                  ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* pubKey, ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* privKey,
                                                                  ::System::DateTime time, ::StringW id, ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm,
                                                                  ::ArrayW<char16_t, ::Array<char16_t>*> passPhrase, bool useSha1,
                                                                  ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* hashedPackets,
                                                                  ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* unhashedPackets, ::Org::BouncyCastle::Security::SecureRandom* rand) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>::get(), ".ctor", std::vector<Il2CppClass*>{},
          ::std::vector<Il2CppType const*>{
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::PublicKeyAlgorithmTag>::get(),
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>::get(),
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*>::get(),
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>::get(),
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t, ::Array<char16_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>::get(),
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>::get(),
              ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Security::SecureRandom*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, certificationLevel, algorithm, pubKey, privKey, time, id, encAlgorithm, passPhrase, useSha1, hashedPackets,
                                                          unhashedPackets, rand);
}
inline bool Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::get_IsSigningKey() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>::get(),
                                                                             "get_IsSigningKey", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::get_IsMasterKey() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>::get(),
                                                                             "get_IsMasterKey", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::get_IsPrivateKeyEmpty() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>::get(),
                                                                             "get_IsPrivateKeyEmpty", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::get_KeyEncryptionAlgorithm() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>::get(),
                                                                             "get_KeyEncryptionAlgorithm", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag, false>(this, ___internal_method);
}
inline int64_t Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::get_KeyId() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>::get(),
                                                                             "get_KeyId", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::get_S2kUsage() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>::get(),
                                                                             "get_S2kUsage", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Bcpg::S2k* Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::get_S2k() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>::get(),
                                                                             "get_S2k", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Bcpg::S2k*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::get_PublicKey() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>::get(),
                                                                             "get_PublicKey", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*, false>(this, ___internal_method);
}
inline ::System::Collections::IEnumerable* Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::get_UserIds() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>::get(),
                                                                             "get_UserIds", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerable*, false>(this, ___internal_method);
}
inline ::System::Collections::IEnumerable* Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::get_UserAttributes() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>::get(),
                                                                             "get_UserAttributes", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerable*, false>(this, ___internal_method);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::ExtractKeyData(::ArrayW<uint8_t, ::Array<uint8_t>*> rawPassPhrase, bool clearPassPhrase) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>::get(), "ExtractKeyData", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method, rawPassPhrase, clearPassPhrase);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::RecoverKeyData(::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm, ::StringW modeAndPadding,
                                                                                                           ::Org::BouncyCastle::Crypto::Parameters::KeyParameter* key,
                                                                                                           ::ArrayW<uint8_t, ::Array<uint8_t>*> iv, ::ArrayW<uint8_t, ::Array<uint8_t>*> keyData,
                                                                                                           int32_t keyOff, int32_t keyLen) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>::get(), "RecoverKeyData", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Parameters::KeyParameter*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(nullptr, ___internal_method, encAlgorithm, modeAndPadding, key, iv, keyData, keyOff, keyLen);
}
inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey* Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::ExtractPrivateKey(::ArrayW<char16_t, ::Array<char16_t>*> passPhrase) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>::get(), "ExtractPrivateKey", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t, ::Array<char16_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey*, false>(this, ___internal_method, passPhrase);
}
inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey* Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::ExtractPrivateKeyUtf8(::ArrayW<char16_t, ::Array<char16_t>*> passPhrase) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>::get(), "ExtractPrivateKeyUtf8", std::vector<Il2CppClass*>{},
                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t, ::Array<char16_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey*, false>(this, ___internal_method, passPhrase);
}
inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey* Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::ExtractPrivateKeyRaw(::ArrayW<uint8_t, ::Array<uint8_t>*> rawPassPhrase) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>::get(), "ExtractPrivateKeyRaw", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey*, false>(this, ___internal_method, rawPassPhrase);
}
inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey* Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::DoExtractPrivateKey(::ArrayW<uint8_t, ::Array<uint8_t>*> rawPassPhrase,
                                                                                                                              bool clearPassPhrase) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>::get(), "DoExtractPrivateKey", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPrivateKey*, false>(this, ___internal_method, rawPassPhrase, clearPassPhrase);
}
inline ::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters* Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::GetECKey(::StringW algorithm,
                                                                                                                                 ::Org::BouncyCastle::Bcpg::BcpgInputStream* bcpgIn) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>::get(), "GetECKey", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::BcpgInputStream*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters*, false>(this, ___internal_method, algorithm, bcpgIn);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::Checksum(bool useSha1, ::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t length) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>::get(), "Checksum", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(nullptr, ___internal_method, useSha1, bytes, length);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::GetEncoded() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>::get(),
                                                                             "GetEncoded", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method);
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::Encode(::System::IO::Stream* outStr) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>::get(), "Encode", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, outStr);
}
inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey* Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::CopyWithNewPassword(::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey* key,
                                                                                                                             ::ArrayW<char16_t, ::Array<char16_t>*> oldPassPhrase,
                                                                                                                             ::ArrayW<char16_t, ::Array<char16_t>*> newPassPhrase,
                                                                                                                             ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag newEncAlgorithm,
                                                                                                                             ::Org::BouncyCastle::Security::SecureRandom* rand) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>::get(), "CopyWithNewPassword", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t, ::Array<char16_t>*>>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t, ::Array<char16_t>*>>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Security::SecureRandom*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*, false>(nullptr, ___internal_method, key, oldPassPhrase, newPassPhrase, newEncAlgorithm, rand);
}
inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey* Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::CopyWithNewPasswordUtf8(::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey* key,
                                                                                                                                 ::ArrayW<char16_t, ::Array<char16_t>*> oldPassPhrase,
                                                                                                                                 ::ArrayW<char16_t, ::Array<char16_t>*> newPassPhrase,
                                                                                                                                 ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag newEncAlgorithm,
                                                                                                                                 ::Org::BouncyCastle::Security::SecureRandom* rand) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>::get(), "CopyWithNewPasswordUtf8", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t, ::Array<char16_t>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t, ::Array<char16_t>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Security::SecureRandom*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*, false>(nullptr, ___internal_method, key, oldPassPhrase, newPassPhrase, newEncAlgorithm, rand);
}
inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey* Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::CopyWithNewPasswordRaw(::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey* key,
                                                                                                                                ::ArrayW<uint8_t, ::Array<uint8_t>*> rawOldPassPhrase,
                                                                                                                                ::ArrayW<uint8_t, ::Array<uint8_t>*> rawNewPassPhrase,
                                                                                                                                ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag newEncAlgorithm,
                                                                                                                                ::Org::BouncyCastle::Security::SecureRandom* rand) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>::get(), "CopyWithNewPasswordRaw", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Security::SecureRandom*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*, false>(nullptr, ___internal_method, key, rawOldPassPhrase, rawNewPassPhrase, newEncAlgorithm, rand);
}
inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*
Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::DoCopyWithNewPassword(::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey* key, ::ArrayW<uint8_t, ::Array<uint8_t>*> rawOldPassPhrase,
                                                                      ::ArrayW<uint8_t, ::Array<uint8_t>*> rawNewPassPhrase, bool clearPassPhrase,
                                                                      ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag newEncAlgorithm, ::Org::BouncyCastle::Security::SecureRandom* rand) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>::get(), "DoCopyWithNewPassword", std::vector<Il2CppClass*>{},
                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>::get(),
                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>::get(),
                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Security::SecureRandom*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*, false>(nullptr, ___internal_method, key, rawOldPassPhrase, rawNewPassPhrase, clearPassPhrase,
                                                                                                       newEncAlgorithm, rand);
}
inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey* Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::ReplacePublicKey(::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey* secretKey,
                                                                                                                          ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* publicKey) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>::get(), "ReplacePublicKey", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*, false>(nullptr, ___internal_method, secretKey, publicKey);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*>
Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::EncryptKeyDataV3(::ArrayW<uint8_t, ::Array<uint8_t>*> rawKeyData, ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm,
                                                                 ::ArrayW<uint8_t, ::Array<uint8_t>*> rawPassPhrase, bool clearPassPhrase, ::Org::BouncyCastle::Security::SecureRandom* random,
                                                                 ByRef<::Org::BouncyCastle::Bcpg::S2k*> s2k, ByRef<::ArrayW<uint8_t, ::Array<uint8_t>*>> iv) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>::get(), "EncryptKeyDataV3", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Security::SecureRandom*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Org::BouncyCastle::Bcpg::S2k*>>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<uint8_t, ::Array<uint8_t>*>>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(nullptr, ___internal_method, rawKeyData, encAlgorithm, rawPassPhrase, clearPassPhrase, random, s2k, iv);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*>
Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::EncryptKeyDataV4(::ArrayW<uint8_t, ::Array<uint8_t>*> rawKeyData, ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm,
                                                                 ::Org::BouncyCastle::Bcpg::HashAlgorithmTag hashAlgorithm, ::ArrayW<uint8_t, ::Array<uint8_t>*> rawPassPhrase, bool clearPassPhrase,
                                                                 ::Org::BouncyCastle::Security::SecureRandom* random, ByRef<::Org::BouncyCastle::Bcpg::S2k*> s2k,
                                                                 ByRef<::ArrayW<uint8_t, ::Array<uint8_t>*>> iv) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>::get(), "EncryptKeyDataV4", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::HashAlgorithmTag>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Security::SecureRandom*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Org::BouncyCastle::Bcpg::S2k*>>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<uint8_t, ::Array<uint8_t>*>>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(nullptr, ___internal_method, rawKeyData, encAlgorithm, hashAlgorithm, rawPassPhrase, clearPassPhrase, random,
                                                                                          s2k, iv);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::EncryptData(::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm,
                                                                                                        ::Org::BouncyCastle::Crypto::Parameters::KeyParameter* key,
                                                                                                        ::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t dataOff, int32_t dataLen,
                                                                                                        ::Org::BouncyCastle::Security::SecureRandom* random,
                                                                                                        ByRef<::ArrayW<uint8_t, ::Array<uint8_t>*>> iv) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>::get(), "EncryptData", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Parameters::KeyParameter*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Security::SecureRandom*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<uint8_t, ::Array<uint8_t>*>>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(nullptr, ___internal_method, encAlgorithm, key, data, dataOff, dataLen, random, iv);
}
inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey* Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::ParseSecretKeyFromSExpr(::System::IO::Stream* inputStream,
                                                                                                                                 ::ArrayW<char16_t, ::Array<char16_t>*> passPhrase,
                                                                                                                                 ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* pubKey) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>::get(), "ParseSecretKeyFromSExpr", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t, ::Array<char16_t>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*, false>(nullptr, ___internal_method, inputStream, passPhrase, pubKey);
}
inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey* Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::ParseSecretKeyFromSExprUtf8(::System::IO::Stream* inputStream,
                                                                                                                                     ::ArrayW<char16_t, ::Array<char16_t>*> passPhrase,
                                                                                                                                     ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* pubKey) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>::get(), "ParseSecretKeyFromSExprUtf8", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t, ::Array<char16_t>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*, false>(nullptr, ___internal_method, inputStream, passPhrase, pubKey);
}
inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey* Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::ParseSecretKeyFromSExprRaw(::System::IO::Stream* inputStream,
                                                                                                                                    ::ArrayW<uint8_t, ::Array<uint8_t>*> rawPassPhrase,
                                                                                                                                    ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* pubKey) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>::get(), "ParseSecretKeyFromSExprRaw", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*, false>(nullptr, ___internal_method, inputStream, rawPassPhrase, pubKey);
}
inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey* Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::DoParseSecretKeyFromSExpr(::System::IO::Stream* inputStream,
                                                                                                                                   ::ArrayW<uint8_t, ::Array<uint8_t>*> rawPassPhrase,
                                                                                                                                   bool clearPassPhrase,
                                                                                                                                   ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* pubKey) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>::get(), "DoParseSecretKeyFromSExpr", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*, false>(nullptr, ___internal_method, inputStream, rawPassPhrase, clearPassPhrase, pubKey);
}
inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey* Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::ParseSecretKeyFromSExpr(::System::IO::Stream* inputStream,
                                                                                                                                 ::ArrayW<char16_t, ::Array<char16_t>*> passPhrase) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>::get(), "ParseSecretKeyFromSExpr", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t, ::Array<char16_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*, false>(nullptr, ___internal_method, inputStream, passPhrase);
}
inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey* Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::ParseSecretKeyFromSExprUtf8(::System::IO::Stream* inputStream,
                                                                                                                                     ::ArrayW<char16_t, ::Array<char16_t>*> passPhrase) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>::get(), "ParseSecretKeyFromSExprUtf8", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t, ::Array<char16_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*, false>(nullptr, ___internal_method, inputStream, passPhrase);
}
inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey* Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::ParseSecretKeyFromSExprRaw(::System::IO::Stream* inputStream,
                                                                                                                                    ::ArrayW<uint8_t, ::Array<uint8_t>*> rawPassPhrase) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>::get(), "ParseSecretKeyFromSExprRaw", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*, false>(nullptr, ___internal_method, inputStream, rawPassPhrase);
}
inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*
Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::DoParseSecretKeyFromSExpr(::System::IO::Stream* inputStream, ::ArrayW<uint8_t, ::Array<uint8_t>*> rawPassPhrase, bool clearPassPhrase) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>::get(), "DoParseSecretKeyFromSExpr", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*, false>(nullptr, ___internal_method, inputStream, rawPassPhrase, clearPassPhrase);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::GetDValue(::System::IO::Stream* inputStream, ::ArrayW<uint8_t, ::Array<uint8_t>*> rawPassPhrase,
                                                                                                      bool clearPassPhrase, ::StringW curveName) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey*>::get(), "GetDValue", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(nullptr, ___internal_method, inputStream, rawPassPhrase, clearPassPhrase, curveName);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKey::PgpSecretKey() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
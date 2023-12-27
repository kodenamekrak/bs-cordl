#pragma once
#include "Org/BouncyCastle/Bcpg/zzzz__HashAlgorithmTag_impl.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__SymmetricKeyAlgorithmTag_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Bcpg/OpenPgp/zzzz__PgpKeyRingGenerator_def.hpp"
#include "Org/BouncyCastle/Bcpg/OpenPgp/zzzz__PgpKeyPair_def.hpp"
#include "Org/BouncyCastle/Bcpg/OpenPgp/zzzz__PgpSignatureSubpacketVector_def.hpp"
#include "Org/BouncyCastle/Bcpg/OpenPgp/zzzz__PgpPublicKeyRing_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__SymmetricKeyAlgorithmTag_def.hpp"
#include "Org/BouncyCastle/Security/zzzz__SecureRandom_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__HashAlgorithmTag_def.hpp"
#include "System/Collections/zzzz__IList_def.hpp"
#include "Org/BouncyCastle/Bcpg/OpenPgp/zzzz__PgpSecretKeyRing_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator::*)(
    int32_t, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair*, ::StringW, ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag, ::ArrayW<char16_t, ::Array<char16_t>*>,
    ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*, ::Org::BouncyCastle::Security::SecureRandom*)>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x10ae5a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator*>::get(), ".ctor", std::vector<Il2CppClass*>{},
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
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator::*)(
    int32_t, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair*, ::StringW, ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag, ::ArrayW<char16_t, ::Array<char16_t>*>, bool,
    ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*, ::Org::BouncyCastle::Security::SecureRandom*)>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x10ae630;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator*>::get(), ".ctor", std::vector<Il2CppClass*>{},
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
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator::*)(
    int32_t, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair*, ::StringW, ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag, bool, ::ArrayW<char16_t, ::Array<char16_t>*>, bool,
    ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*, ::Org::BouncyCastle::Security::SecureRandom*)>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x10ae6b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator*>::get(), ".ctor", std::vector<Il2CppClass*>{},
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
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator::*)(
    int32_t, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair*, ::StringW, ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag, ::ArrayW<uint8_t, ::Array<uint8_t>*>, bool,
    ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*, ::Org::BouncyCastle::Security::SecureRandom*)>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator::_ctor)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x10ae730;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator*>::get(), ".ctor", std::vector<Il2CppClass*>{},
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
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator::*)(
    int32_t, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair*, ::StringW, ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag, ::Org::BouncyCastle::Bcpg::HashAlgorithmTag,
    ::ArrayW<char16_t, ::Array<char16_t>*>, bool, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*,
    ::Org::BouncyCastle::Security::SecureRandom*)>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x10ae8d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator*>::get(), ".ctor", std::vector<Il2CppClass*>{},
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
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator::*)(
    int32_t, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair*, ::StringW, ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag, ::Org::BouncyCastle::Bcpg::HashAlgorithmTag, bool,
    ::ArrayW<char16_t, ::Array<char16_t>*>, bool, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*,
    ::Org::BouncyCastle::Security::SecureRandom*)>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x10ae964;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator*>::get(), ".ctor", std::vector<Il2CppClass*>{},
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
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator::*)(
    int32_t, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair*, ::StringW, ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag, ::Org::BouncyCastle::Bcpg::HashAlgorithmTag,
    ::ArrayW<uint8_t, ::Array<uint8_t>*>, bool, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*,
    ::Org::BouncyCastle::Security::SecureRandom*)>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator::_ctor)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x10ae9f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator*>::get(), ".ctor", std::vector<Il2CppClass*>{},
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
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator.AddSubKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator::*)(::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair*)>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator::AddSubKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x10aeba4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator*>::get(), "AddSubKey", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator.AddSubKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator::*)(
    ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair*, ::Org::BouncyCastle::Bcpg::HashAlgorithmTag)>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator::AddSubKey)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x10aefd4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator*>::get(), "AddSubKey", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::HashAlgorithmTag>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator.AddSubKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator::*)(
    ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair*, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*)>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator::AddSubKey)> {
  constexpr static std::size_t size = 0x428;
  constexpr static std::size_t addrs = 0x10aebac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator*>::get(), "AddSubKey", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator.AddSubKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator::*)(
    ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair*, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*,
    ::Org::BouncyCastle::Bcpg::HashAlgorithmTag)>(&::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator::AddSubKey)> {
  constexpr static std::size_t size = 0x41c;
  constexpr static std::size_t addrs = 0x10aefe0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator*>::get(), "AddSubKey", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::HashAlgorithmTag>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator.GenerateSecretKeyRing
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing* (::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator::*)()>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator::GenerateSecretKeyRing)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x10af4c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator*>::get(),
                                                                               "GenerateSecretKeyRing", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator.GeneratePublicKeyRing
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyRing* (::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator::*)()>(
    &::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator::GeneratePublicKeyRing)> {
  constexpr static std::size_t size = 0x4c4;
  constexpr static std::size_t addrs = 0x10af530;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator*>::get(),
                                                                               "GeneratePublicKeyRing", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::System::Collections::IList*& Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator::__get_keys() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___keys;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::IList*> const& Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator::__get_keys() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___keys;
}
constexpr void Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator::__set_keys(::System::Collections::IList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___keys)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator::__get_id() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___id;
}
constexpr ::StringW const& Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator::__get_id() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___id;
}
constexpr void Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator::__set_id(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___id)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag& Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator::__get_encAlgorithm() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___encAlgorithm;
}
constexpr ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag const& Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator::__get_encAlgorithm() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___encAlgorithm;
}
constexpr void Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator::__set_encAlgorithm(::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___encAlgorithm = value;
}
constexpr ::Org::BouncyCastle::Bcpg::HashAlgorithmTag& Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator::__get_hashAlgorithm() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___hashAlgorithm;
}
constexpr ::Org::BouncyCastle::Bcpg::HashAlgorithmTag const& Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator::__get_hashAlgorithm() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___hashAlgorithm;
}
constexpr void Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator::__set_hashAlgorithm(::Org::BouncyCastle::Bcpg::HashAlgorithmTag value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___hashAlgorithm = value;
}
constexpr int32_t& Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator::__get_certificationLevel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___certificationLevel;
}
constexpr int32_t const& Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator::__get_certificationLevel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___certificationLevel;
}
constexpr void Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator::__set_certificationLevel(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___certificationLevel = value;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator::__get_rawPassPhrase() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___rawPassPhrase;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator::__get_rawPassPhrase() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___rawPassPhrase;
}
constexpr void Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator::__set_rawPassPhrase(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___rawPassPhrase)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator::__get_useSha1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___useSha1;
}
constexpr bool const& Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator::__get_useSha1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___useSha1;
}
constexpr void Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator::__set_useSha1(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___useSha1 = value;
}
constexpr ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair*& Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator::__get_masterKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___masterKey;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair*> const& Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator::__get_masterKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___masterKey;
}
constexpr void Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator::__set_masterKey(::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___masterKey)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*& Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator::__get_hashedPacketVector() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___hashedPacketVector;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*> const&
Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator::__get_hashedPacketVector() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___hashedPacketVector;
}
constexpr void Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator::__set_hashedPacketVector(::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___hashedPacketVector)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*& Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator::__get_unhashedPacketVector() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___unhashedPacketVector;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*> const&
Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator::__get_unhashedPacketVector() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___unhashedPacketVector;
}
constexpr void Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator::__set_unhashedPacketVector(::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___unhashedPacketVector)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Security::SecureRandom*& Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator::__get_rand() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___rand;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Security::SecureRandom*> const& Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator::__get_rand() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___rand;
}
constexpr void Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator::__set_rand(::Org::BouncyCastle::Security::SecureRandom* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___rand)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator*
Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator::New_ctor(int32_t certificationLevel, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair* masterKey, ::StringW id,
                                                                ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm, ::ArrayW<char16_t, ::Array<char16_t>*> passPhrase,
                                                                ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* hashedPackets,
                                                                ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* unhashedPackets, ::Org::BouncyCastle::Security::SecureRandom* rand) {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator*>(certificationLevel, masterKey, id, encAlgorithm, passPhrase, hashedPackets, unhashedPackets, rand));
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator::_ctor(int32_t certificationLevel, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair* masterKey, ::StringW id,
                                                                         ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm, ::ArrayW<char16_t, ::Array<char16_t>*> passPhrase,
                                                                         ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* hashedPackets,
                                                                         ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* unhashedPackets,
                                                                         ::Org::BouncyCastle::Security::SecureRandom* rand) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t, ::Array<char16_t>*>>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Security::SecureRandom*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, certificationLevel, masterKey, id, encAlgorithm, passPhrase, hashedPackets, unhashedPackets, rand);
}
inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator*
Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator::New_ctor(int32_t certificationLevel, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair* masterKey, ::StringW id,
                                                                ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm, ::ArrayW<char16_t, ::Array<char16_t>*> passPhrase, bool useSha1,
                                                                ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* hashedPackets,
                                                                ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* unhashedPackets, ::Org::BouncyCastle::Security::SecureRandom* rand) {
  return THROW_UNLESS(
      ::il2cpp_utils::New<::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator*>(certificationLevel, masterKey, id, encAlgorithm, passPhrase, useSha1, hashedPackets, unhashedPackets, rand));
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator::_ctor(int32_t certificationLevel, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair* masterKey, ::StringW id,
                                                                         ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm, ::ArrayW<char16_t, ::Array<char16_t>*> passPhrase,
                                                                         bool useSha1, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* hashedPackets,
                                                                         ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* unhashedPackets,
                                                                         ::Org::BouncyCastle::Security::SecureRandom* rand) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t, ::Array<char16_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Security::SecureRandom*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, certificationLevel, masterKey, id, encAlgorithm, passPhrase, useSha1, hashedPackets, unhashedPackets, rand);
}
inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator* Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator::New_ctor(
    int32_t certificationLevel, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair* masterKey, ::StringW id, ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm, bool utf8PassPhrase,
    ::ArrayW<char16_t, ::Array<char16_t>*> passPhrase, bool useSha1, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* hashedPackets,
    ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* unhashedPackets, ::Org::BouncyCastle::Security::SecureRandom* rand) {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator*>(certificationLevel, masterKey, id, encAlgorithm, utf8PassPhrase, passPhrase, useSha1, hashedPackets,
                                                                                                    unhashedPackets, rand));
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator::_ctor(int32_t certificationLevel, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair* masterKey, ::StringW id,
                                                                         ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm, bool utf8PassPhrase,
                                                                         ::ArrayW<char16_t, ::Array<char16_t>*> passPhrase, bool useSha1,
                                                                         ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* hashedPackets,
                                                                         ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* unhashedPackets,
                                                                         ::Org::BouncyCastle::Security::SecureRandom* rand) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t, ::Array<char16_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Security::SecureRandom*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, certificationLevel, masterKey, id, encAlgorithm, utf8PassPhrase, passPhrase, useSha1, hashedPackets,
                                                          unhashedPackets, rand);
}
inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator*
Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator::New_ctor(int32_t certificationLevel, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair* masterKey, ::StringW id,
                                                                ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm, ::ArrayW<uint8_t, ::Array<uint8_t>*> rawPassPhrase, bool useSha1,
                                                                ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* hashedPackets,
                                                                ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* unhashedPackets, ::Org::BouncyCastle::Security::SecureRandom* rand) {
  return THROW_UNLESS(
      ::il2cpp_utils::New<::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator*>(certificationLevel, masterKey, id, encAlgorithm, rawPassPhrase, useSha1, hashedPackets, unhashedPackets, rand));
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator::_ctor(int32_t certificationLevel, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair* masterKey, ::StringW id,
                                                                         ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm, ::ArrayW<uint8_t, ::Array<uint8_t>*> rawPassPhrase,
                                                                         bool useSha1, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* hashedPackets,
                                                                         ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* unhashedPackets,
                                                                         ::Org::BouncyCastle::Security::SecureRandom* rand) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Security::SecureRandom*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, certificationLevel, masterKey, id, encAlgorithm, rawPassPhrase, useSha1, hashedPackets, unhashedPackets, rand);
}
inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator*
Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator::New_ctor(int32_t certificationLevel, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair* masterKey, ::StringW id,
                                                                ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm, ::Org::BouncyCastle::Bcpg::HashAlgorithmTag hashAlgorithm,
                                                                ::ArrayW<char16_t, ::Array<char16_t>*> passPhrase, bool useSha1,
                                                                ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* hashedPackets,
                                                                ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* unhashedPackets, ::Org::BouncyCastle::Security::SecureRandom* rand) {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator*>(certificationLevel, masterKey, id, encAlgorithm, hashAlgorithm, passPhrase, useSha1, hashedPackets,
                                                                                                    unhashedPackets, rand));
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator::_ctor(int32_t certificationLevel, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair* masterKey, ::StringW id,
                                                                         ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm, ::Org::BouncyCastle::Bcpg::HashAlgorithmTag hashAlgorithm,
                                                                         ::ArrayW<char16_t, ::Array<char16_t>*> passPhrase, bool useSha1,
                                                                         ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* hashedPackets,
                                                                         ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* unhashedPackets,
                                                                         ::Org::BouncyCastle::Security::SecureRandom* rand) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::HashAlgorithmTag>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t, ::Array<char16_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Security::SecureRandom*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, certificationLevel, masterKey, id, encAlgorithm, hashAlgorithm, passPhrase, useSha1, hashedPackets, unhashedPackets,
                                                          rand);
}
inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator*
Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator::New_ctor(int32_t certificationLevel, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair* masterKey, ::StringW id,
                                                                ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm, ::Org::BouncyCastle::Bcpg::HashAlgorithmTag hashAlgorithm,
                                                                bool utf8PassPhrase, ::ArrayW<char16_t, ::Array<char16_t>*> passPhrase, bool useSha1,
                                                                ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* hashedPackets,
                                                                ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* unhashedPackets, ::Org::BouncyCastle::Security::SecureRandom* rand) {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator*>(certificationLevel, masterKey, id, encAlgorithm, hashAlgorithm, utf8PassPhrase, passPhrase, useSha1,
                                                                                                    hashedPackets, unhashedPackets, rand));
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator::_ctor(int32_t certificationLevel, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair* masterKey, ::StringW id,
                                                                         ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm, ::Org::BouncyCastle::Bcpg::HashAlgorithmTag hashAlgorithm,
                                                                         bool utf8PassPhrase, ::ArrayW<char16_t, ::Array<char16_t>*> passPhrase, bool useSha1,
                                                                         ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* hashedPackets,
                                                                         ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* unhashedPackets,
                                                                         ::Org::BouncyCastle::Security::SecureRandom* rand) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::HashAlgorithmTag>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t, ::Array<char16_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Security::SecureRandom*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, certificationLevel, masterKey, id, encAlgorithm, hashAlgorithm, utf8PassPhrase, passPhrase, useSha1, hashedPackets,
                                                          unhashedPackets, rand);
}
inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator*
Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator::New_ctor(int32_t certificationLevel, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair* masterKey, ::StringW id,
                                                                ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm, ::Org::BouncyCastle::Bcpg::HashAlgorithmTag hashAlgorithm,
                                                                ::ArrayW<uint8_t, ::Array<uint8_t>*> rawPassPhrase, bool useSha1,
                                                                ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* hashedPackets,
                                                                ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* unhashedPackets, ::Org::BouncyCastle::Security::SecureRandom* rand) {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator*>(certificationLevel, masterKey, id, encAlgorithm, hashAlgorithm, rawPassPhrase, useSha1,
                                                                                                    hashedPackets, unhashedPackets, rand));
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator::_ctor(int32_t certificationLevel, ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair* masterKey, ::StringW id,
                                                                         ::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag encAlgorithm, ::Org::BouncyCastle::Bcpg::HashAlgorithmTag hashAlgorithm,
                                                                         ::ArrayW<uint8_t, ::Array<uint8_t>*> rawPassPhrase, bool useSha1,
                                                                         ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* hashedPackets,
                                                                         ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* unhashedPackets,
                                                                         ::Org::BouncyCastle::Security::SecureRandom* rand) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::SymmetricKeyAlgorithmTag>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::HashAlgorithmTag>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Security::SecureRandom*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, certificationLevel, masterKey, id, encAlgorithm, hashAlgorithm, rawPassPhrase, useSha1, hashedPackets,
                                                          unhashedPackets, rand);
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator::AddSubKey(::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair* keyPair) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator*>::get(), "AddSubKey", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, keyPair);
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator::AddSubKey(::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair* keyPair, ::Org::BouncyCastle::Bcpg::HashAlgorithmTag hashAlgorithm) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator*>::get(), "AddSubKey", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::HashAlgorithmTag>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, keyPair, hashAlgorithm);
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator::AddSubKey(::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair* keyPair,
                                                                             ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* hashedPackets,
                                                                             ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* unhashedPackets) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator*>::get(), "AddSubKey", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, keyPair, hashedPackets, unhashedPackets);
}
inline void Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator::AddSubKey(::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair* keyPair,
                                                                             ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* hashedPackets,
                                                                             ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector* unhashedPackets,
                                                                             ::Org::BouncyCastle::Bcpg::HashAlgorithmTag hashAlgorithm) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator*>::get(), "AddSubKey", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyPair*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSignatureSubpacketVector*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::HashAlgorithmTag>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, keyPair, hashedPackets, unhashedPackets, hashAlgorithm);
}
inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing* Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator::GenerateSecretKeyRing() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator*>::get(),
                                                                             "GenerateSecretKeyRing", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Bcpg::OpenPgp::PgpSecretKeyRing*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyRing* Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator::GeneratePublicKeyRing() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator*>::get(),
                                                                             "GeneratePublicKeyRing", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyRing*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Bcpg::OpenPgp::PgpKeyRingGenerator::PgpKeyRingGenerator() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
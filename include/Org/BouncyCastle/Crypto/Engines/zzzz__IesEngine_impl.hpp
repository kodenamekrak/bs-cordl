#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Engines/zzzz__IesEngine_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__BufferedBlockCipher_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IDerivationFunction_def.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__IesParameters_def.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__KdfParameters_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IBasicAgreement_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IMac_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ICipherParameters_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::IesEngine._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Engines::IesEngine::*)(
    ::Org::BouncyCastle::Crypto::IBasicAgreement*, ::Org::BouncyCastle::Crypto::IDerivationFunction*, ::Org::BouncyCastle::Crypto::IMac*)>(&::Org::BouncyCastle::Crypto::Engines::IesEngine::_ctor)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0xed42e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Engines::IesEngine*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IBasicAgreement*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IDerivationFunction*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IMac*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::IesEngine._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Engines::IesEngine::*)(
    ::Org::BouncyCastle::Crypto::IBasicAgreement*, ::Org::BouncyCastle::Crypto::IDerivationFunction*, ::Org::BouncyCastle::Crypto::IMac*, ::Org::BouncyCastle::Crypto::BufferedBlockCipher*)>(
    &::Org::BouncyCastle::Crypto::Engines::IesEngine::_ctor)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0xed43d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Engines::IesEngine*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IBasicAgreement*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IDerivationFunction*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IMac*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::BufferedBlockCipher*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::IesEngine.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Engines::IesEngine::*)(
    bool, ::Org::BouncyCastle::Crypto::ICipherParameters*, ::Org::BouncyCastle::Crypto::ICipherParameters*, ::Org::BouncyCastle::Crypto::ICipherParameters*)>(
    &::Org::BouncyCastle::Crypto::Engines::IesEngine::Init)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0xed44d8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Engines::IesEngine*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Engines::IesEngine*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::IesEngine.DecryptBlock
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::Org::BouncyCastle::Crypto::Engines::IesEngine::*)(
    ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t, ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(&::Org::BouncyCastle::Crypto::Engines::IesEngine::DecryptBlock)> {
  constexpr static std::size_t size = 0x6ac;
  constexpr static std::size_t addrs = 0xed45a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Engines::IesEngine*>::get(), "DecryptBlock", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::IesEngine.EncryptBlock
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::Org::BouncyCastle::Crypto::Engines::IesEngine::*)(
    ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t, ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(&::Org::BouncyCastle::Crypto::Engines::IesEngine::EncryptBlock)> {
  constexpr static std::size_t size = 0x5ec;
  constexpr static std::size_t addrs = 0xed4da4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Engines::IesEngine*>::get(), "EncryptBlock", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::IesEngine.GenerateKdfBytes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::Org::BouncyCastle::Crypto::Engines::IesEngine::*)(
    ::Org::BouncyCastle::Crypto::Parameters::KdfParameters*, int32_t)>(&::Org::BouncyCastle::Crypto::Engines::IesEngine::GenerateKdfBytes)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0xed4c4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Engines::IesEngine*>::get(), "GenerateKdfBytes", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Parameters::KdfParameters*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Engines::IesEngine.ProcessBlock
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::Org::BouncyCastle::Crypto::Engines::IesEngine::*)(
    ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t)>(&::Org::BouncyCastle::Crypto::Engines::IesEngine::ProcessBlock)> {
  constexpr static std::size_t size = 0x284;
  constexpr static std::size_t addrs = 0xed5390;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Engines::IesEngine*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Engines::IesEngine*>::get(), 5));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Crypto::IBasicAgreement*& Org::BouncyCastle::Crypto::Engines::IesEngine::__get_agree() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___agree;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::IBasicAgreement*> const& Org::BouncyCastle::Crypto::Engines::IesEngine::__get_agree() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___agree;
}
constexpr void Org::BouncyCastle::Crypto::Engines::IesEngine::__set_agree(::Org::BouncyCastle::Crypto::IBasicAgreement* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___agree)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Crypto::IDerivationFunction*& Org::BouncyCastle::Crypto::Engines::IesEngine::__get_kdf() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___kdf;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::IDerivationFunction*> const& Org::BouncyCastle::Crypto::Engines::IesEngine::__get_kdf() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___kdf;
}
constexpr void Org::BouncyCastle::Crypto::Engines::IesEngine::__set_kdf(::Org::BouncyCastle::Crypto::IDerivationFunction* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___kdf)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Crypto::IMac*& Org::BouncyCastle::Crypto::Engines::IesEngine::__get_mac() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___mac;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::IMac*> const& Org::BouncyCastle::Crypto::Engines::IesEngine::__get_mac() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___mac;
}
constexpr void Org::BouncyCastle::Crypto::Engines::IesEngine::__set_mac(::Org::BouncyCastle::Crypto::IMac* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mac)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Crypto::BufferedBlockCipher*& Org::BouncyCastle::Crypto::Engines::IesEngine::__get_cipher() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___cipher;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::BufferedBlockCipher*> const& Org::BouncyCastle::Crypto::Engines::IesEngine::__get_cipher() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___cipher;
}
constexpr void Org::BouncyCastle::Crypto::Engines::IesEngine::__set_cipher(::Org::BouncyCastle::Crypto::BufferedBlockCipher* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___cipher)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& Org::BouncyCastle::Crypto::Engines::IesEngine::__get_macBuf() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___macBuf;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& Org::BouncyCastle::Crypto::Engines::IesEngine::__get_macBuf() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___macBuf;
}
constexpr void Org::BouncyCastle::Crypto::Engines::IesEngine::__set_macBuf(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___macBuf)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& Org::BouncyCastle::Crypto::Engines::IesEngine::__get_forEncryption() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___forEncryption;
}
constexpr bool const& Org::BouncyCastle::Crypto::Engines::IesEngine::__get_forEncryption() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___forEncryption;
}
constexpr void Org::BouncyCastle::Crypto::Engines::IesEngine::__set_forEncryption(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___forEncryption = value;
}
constexpr ::Org::BouncyCastle::Crypto::ICipherParameters*& Org::BouncyCastle::Crypto::Engines::IesEngine::__get_privParam() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___privParam;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::ICipherParameters*> const& Org::BouncyCastle::Crypto::Engines::IesEngine::__get_privParam() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___privParam;
}
constexpr void Org::BouncyCastle::Crypto::Engines::IesEngine::__set_privParam(::Org::BouncyCastle::Crypto::ICipherParameters* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___privParam)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Crypto::ICipherParameters*& Org::BouncyCastle::Crypto::Engines::IesEngine::__get_pubParam() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___pubParam;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::ICipherParameters*> const& Org::BouncyCastle::Crypto::Engines::IesEngine::__get_pubParam() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___pubParam;
}
constexpr void Org::BouncyCastle::Crypto::Engines::IesEngine::__set_pubParam(::Org::BouncyCastle::Crypto::ICipherParameters* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___pubParam)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Crypto::Parameters::IesParameters*& Org::BouncyCastle::Crypto::Engines::IesEngine::__get_param() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___param;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Parameters::IesParameters*> const& Org::BouncyCastle::Crypto::Engines::IesEngine::__get_param() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___param;
}
constexpr void Org::BouncyCastle::Crypto::Engines::IesEngine::__set_param(::Org::BouncyCastle::Crypto::Parameters::IesParameters* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___param)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Org::BouncyCastle::Crypto::Engines::IesEngine* Org::BouncyCastle::Crypto::Engines::IesEngine::New_ctor(::Org::BouncyCastle::Crypto::IBasicAgreement* agree,
                                                                                                                ::Org::BouncyCastle::Crypto::IDerivationFunction* kdf,
                                                                                                                ::Org::BouncyCastle::Crypto::IMac* mac) {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Crypto::Engines::IesEngine*>(agree, kdf, mac));
}
inline void Org::BouncyCastle::Crypto::Engines::IesEngine::_ctor(::Org::BouncyCastle::Crypto::IBasicAgreement* agree, ::Org::BouncyCastle::Crypto::IDerivationFunction* kdf,
                                                                 ::Org::BouncyCastle::Crypto::IMac* mac) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Engines::IesEngine*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IBasicAgreement*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IDerivationFunction*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IMac*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, agree, kdf, mac);
}
inline ::Org::BouncyCastle::Crypto::Engines::IesEngine* Org::BouncyCastle::Crypto::Engines::IesEngine::New_ctor(::Org::BouncyCastle::Crypto::IBasicAgreement* agree,
                                                                                                                ::Org::BouncyCastle::Crypto::IDerivationFunction* kdf,
                                                                                                                ::Org::BouncyCastle::Crypto::IMac* mac,
                                                                                                                ::Org::BouncyCastle::Crypto::BufferedBlockCipher* cipher) {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Crypto::Engines::IesEngine*>(agree, kdf, mac, cipher));
}
inline void Org::BouncyCastle::Crypto::Engines::IesEngine::_ctor(::Org::BouncyCastle::Crypto::IBasicAgreement* agree, ::Org::BouncyCastle::Crypto::IDerivationFunction* kdf,
                                                                 ::Org::BouncyCastle::Crypto::IMac* mac, ::Org::BouncyCastle::Crypto::BufferedBlockCipher* cipher) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Engines::IesEngine*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IBasicAgreement*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IDerivationFunction*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IMac*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::BufferedBlockCipher*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, agree, kdf, mac, cipher);
}
inline void Org::BouncyCastle::Crypto::Engines::IesEngine::Init(bool forEncryption, ::Org::BouncyCastle::Crypto::ICipherParameters* privParameters,
                                                                ::Org::BouncyCastle::Crypto::ICipherParameters* pubParameters, ::Org::BouncyCastle::Crypto::ICipherParameters* iesParameters) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Engines::IesEngine*>::get(), "Init", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::ICipherParameters*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::ICipherParameters*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::ICipherParameters*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, forEncryption, privParameters, pubParameters, iesParameters);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Org::BouncyCastle::Crypto::Engines::IesEngine::DecryptBlock(::ArrayW<uint8_t, ::Array<uint8_t>*> in_enc, int32_t inOff, int32_t inLen,
                                                                                                        ::ArrayW<uint8_t, ::Array<uint8_t>*> z) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Engines::IesEngine*>::get(), "DecryptBlock", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method, in_enc, inOff, inLen, z);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Org::BouncyCastle::Crypto::Engines::IesEngine::EncryptBlock(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inOff, int32_t inLen,
                                                                                                        ::ArrayW<uint8_t, ::Array<uint8_t>*> z) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Engines::IesEngine*>::get(), "EncryptBlock", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method, input, inOff, inLen, z);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Org::BouncyCastle::Crypto::Engines::IesEngine::GenerateKdfBytes(::Org::BouncyCastle::Crypto::Parameters::KdfParameters* kParam, int32_t length) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Engines::IesEngine*>::get(), "GenerateKdfBytes", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::Parameters::KdfParameters*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method, kParam, length);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Org::BouncyCastle::Crypto::Engines::IesEngine::ProcessBlock(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inOff, int32_t inLen) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Engines::IesEngine*>::get(), "ProcessBlock", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method, input, inOff, inLen);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Engines::IesEngine::IesEngine() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
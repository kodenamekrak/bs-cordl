#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Agreement/Kdf/zzzz__ConcatenationKdfGenerator_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IDigest_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IDerivationParameters_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IDerivationFunction_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Agreement::Kdf::ConcatenationKdfGenerator._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Agreement::Kdf::ConcatenationKdfGenerator::*)(
    ::Org::BouncyCastle::Crypto::IDigest*)>(&::Org::BouncyCastle::Crypto::Agreement::Kdf::ConcatenationKdfGenerator::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x12165f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::Kdf::ConcatenationKdfGenerator*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IDigest*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Agreement::Kdf::ConcatenationKdfGenerator.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Agreement::Kdf::ConcatenationKdfGenerator::*)(
    ::Org::BouncyCastle::Crypto::IDerivationParameters*)>(&::Org::BouncyCastle::Crypto::Agreement::Kdf::ConcatenationKdfGenerator::Init)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x12166ac;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::Kdf::ConcatenationKdfGenerator*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::Kdf::ConcatenationKdfGenerator*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Agreement::Kdf::ConcatenationKdfGenerator.get_Digest
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::IDigest* (::Org::BouncyCastle::Crypto::Agreement::Kdf::ConcatenationKdfGenerator::*)()>(
    &::Org::BouncyCastle::Crypto::Agreement::Kdf::ConcatenationKdfGenerator::get_Digest)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1216778;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::Kdf::ConcatenationKdfGenerator*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::Kdf::ConcatenationKdfGenerator*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Agreement::Kdf::ConcatenationKdfGenerator.GenerateBytes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Agreement::Kdf::ConcatenationKdfGenerator::*)(
    ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t)>(&::Org::BouncyCastle::Crypto::Agreement::Kdf::ConcatenationKdfGenerator::GenerateBytes)> {
  constexpr static std::size_t size = 0x5d8;
  constexpr static std::size_t addrs = 0x1216780;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::Kdf::ConcatenationKdfGenerator*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::Kdf::ConcatenationKdfGenerator*>::get(), 9));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Org::BouncyCastle::Crypto::IDerivationFunction"
constexpr Org::BouncyCastle::Crypto::Agreement::Kdf::ConcatenationKdfGenerator::operator ::Org::BouncyCastle::Crypto::IDerivationFunction*() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::IDerivationFunction*>(static_cast<void*>(this));
}
constexpr ::Org::BouncyCastle::Crypto::IDigest*& Org::BouncyCastle::Crypto::Agreement::Kdf::ConcatenationKdfGenerator::__get_mDigest() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___mDigest;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::IDigest*> const& Org::BouncyCastle::Crypto::Agreement::Kdf::ConcatenationKdfGenerator::__get_mDigest() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___mDigest;
}
constexpr void Org::BouncyCastle::Crypto::Agreement::Kdf::ConcatenationKdfGenerator::__set_mDigest(::Org::BouncyCastle::Crypto::IDigest* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mDigest)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& Org::BouncyCastle::Crypto::Agreement::Kdf::ConcatenationKdfGenerator::__get_mShared() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___mShared;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& Org::BouncyCastle::Crypto::Agreement::Kdf::ConcatenationKdfGenerator::__get_mShared() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___mShared;
}
constexpr void Org::BouncyCastle::Crypto::Agreement::Kdf::ConcatenationKdfGenerator::__set_mShared(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mShared)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& Org::BouncyCastle::Crypto::Agreement::Kdf::ConcatenationKdfGenerator::__get_mOtherInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___mOtherInfo;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& Org::BouncyCastle::Crypto::Agreement::Kdf::ConcatenationKdfGenerator::__get_mOtherInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___mOtherInfo;
}
constexpr void Org::BouncyCastle::Crypto::Agreement::Kdf::ConcatenationKdfGenerator::__set_mOtherInfo(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mOtherInfo)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& Org::BouncyCastle::Crypto::Agreement::Kdf::ConcatenationKdfGenerator::__get_mHLen() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___mHLen;
}
constexpr int32_t const& Org::BouncyCastle::Crypto::Agreement::Kdf::ConcatenationKdfGenerator::__get_mHLen() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___mHLen;
}
constexpr void Org::BouncyCastle::Crypto::Agreement::Kdf::ConcatenationKdfGenerator::__set_mHLen(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___mHLen = value;
}
inline ::Org::BouncyCastle::Crypto::Agreement::Kdf::ConcatenationKdfGenerator*
Org::BouncyCastle::Crypto::Agreement::Kdf::ConcatenationKdfGenerator::New_ctor(::Org::BouncyCastle::Crypto::IDigest* digest) {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Crypto::Agreement::Kdf::ConcatenationKdfGenerator*>(digest));
}
inline void Org::BouncyCastle::Crypto::Agreement::Kdf::ConcatenationKdfGenerator::_ctor(::Org::BouncyCastle::Crypto::IDigest* digest) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::Kdf::ConcatenationKdfGenerator*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IDigest*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, digest);
}
inline void Org::BouncyCastle::Crypto::Agreement::Kdf::ConcatenationKdfGenerator::Init(::Org::BouncyCastle::Crypto::IDerivationParameters* param) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::Kdf::ConcatenationKdfGenerator*>::get(), "Init", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IDerivationParameters*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, param);
}
inline ::Org::BouncyCastle::Crypto::IDigest* Org::BouncyCastle::Crypto::Agreement::Kdf::ConcatenationKdfGenerator::get_Digest() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::Kdf::ConcatenationKdfGenerator*>::get(), "get_Digest",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::IDigest*, false>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Crypto::Agreement::Kdf::ConcatenationKdfGenerator::GenerateBytes(::ArrayW<uint8_t, ::Array<uint8_t>*> outBytes, int32_t outOff, int32_t len) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Agreement::Kdf::ConcatenationKdfGenerator*>::get(), "GenerateBytes", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, outBytes, outOff, len);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Agreement::Kdf::ConcatenationKdfGenerator::ConcatenationKdfGenerator() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
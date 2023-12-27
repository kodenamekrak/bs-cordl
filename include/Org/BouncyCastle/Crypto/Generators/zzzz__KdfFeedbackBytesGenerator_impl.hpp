#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Generators/zzzz__KdfFeedbackBytesGenerator_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IDerivationFunction_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IDigest_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IMacDerivationFunction_def.hpp"
#include "Org/BouncyCastle/Math/zzzz__BigInteger_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IDerivationParameters_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IMac_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Generators::KdfFeedbackBytesGenerator._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Generators::KdfFeedbackBytesGenerator::*)(::Org::BouncyCastle::Crypto::IMac*)>(
    &::Org::BouncyCastle::Crypto::Generators::KdfFeedbackBytesGenerator::_ctor)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0xefe8e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Generators::KdfFeedbackBytesGenerator*>::get(), ".ctor",
                                   std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IMac*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Generators::KdfFeedbackBytesGenerator.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Generators::KdfFeedbackBytesGenerator::*)(
    ::Org::BouncyCastle::Crypto::IDerivationParameters*)>(&::Org::BouncyCastle::Crypto::Generators::KdfFeedbackBytesGenerator::Init)> {
  constexpr static std::size_t size = 0x2bc;
  constexpr static std::size_t addrs = 0xefe9c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Generators::KdfFeedbackBytesGenerator*>::get(), "Init", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IDerivationParameters*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Generators::KdfFeedbackBytesGenerator.get_Digest
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::IDigest* (::Org::BouncyCastle::Crypto::Generators::KdfFeedbackBytesGenerator::*)()>(
    &::Org::BouncyCastle::Crypto::Generators::KdfFeedbackBytesGenerator::get_Digest)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xefec84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Generators::KdfFeedbackBytesGenerator*>::get(), "get_Digest",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Generators::KdfFeedbackBytesGenerator.GenerateBytes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Generators::KdfFeedbackBytesGenerator::*)(
    ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t)>(&::Org::BouncyCastle::Crypto::Generators::KdfFeedbackBytesGenerator::GenerateBytes)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0xefed0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Generators::KdfFeedbackBytesGenerator*>::get(), "GenerateBytes", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Generators::KdfFeedbackBytesGenerator.generateNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Generators::KdfFeedbackBytesGenerator::*)()>(
    &::Org::BouncyCastle::Crypto::Generators::KdfFeedbackBytesGenerator::generateNext)> {
  constexpr static std::size_t size = 0x38c;
  constexpr static std::size_t addrs = 0xefef14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Generators::KdfFeedbackBytesGenerator*>::get(), "generateNext",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Generators::KdfFeedbackBytesGenerator.GetMac
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::IMac* (::Org::BouncyCastle::Crypto::Generators::KdfFeedbackBytesGenerator::*)()>(
    &::Org::BouncyCastle::Crypto::Generators::KdfFeedbackBytesGenerator::GetMac)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xeff2a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Generators::KdfFeedbackBytesGenerator*>::get(), "GetMac",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Org::BouncyCastle::Crypto::IMacDerivationFunction"
constexpr Org::BouncyCastle::Crypto::Generators::KdfFeedbackBytesGenerator::operator ::Org::BouncyCastle::Crypto::IMacDerivationFunction*() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::IMacDerivationFunction*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Org::BouncyCastle::Crypto::IDerivationFunction"
constexpr Org::BouncyCastle::Crypto::Generators::KdfFeedbackBytesGenerator::operator ::Org::BouncyCastle::Crypto::IDerivationFunction*() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::IDerivationFunction*>(static_cast<void*>(this));
}
constexpr ::Org::BouncyCastle::Crypto::IMac*& Org::BouncyCastle::Crypto::Generators::KdfFeedbackBytesGenerator::__get_prf() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___prf;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::IMac*> const& Org::BouncyCastle::Crypto::Generators::KdfFeedbackBytesGenerator::__get_prf() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___prf;
}
constexpr void Org::BouncyCastle::Crypto::Generators::KdfFeedbackBytesGenerator::__set_prf(::Org::BouncyCastle::Crypto::IMac* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___prf)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& Org::BouncyCastle::Crypto::Generators::KdfFeedbackBytesGenerator::__get_h() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___h;
}
constexpr int32_t const& Org::BouncyCastle::Crypto::Generators::KdfFeedbackBytesGenerator::__get_h() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___h;
}
constexpr void Org::BouncyCastle::Crypto::Generators::KdfFeedbackBytesGenerator::__set_h(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___h = value;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& Org::BouncyCastle::Crypto::Generators::KdfFeedbackBytesGenerator::__get_fixedInputData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___fixedInputData;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& Org::BouncyCastle::Crypto::Generators::KdfFeedbackBytesGenerator::__get_fixedInputData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___fixedInputData;
}
constexpr void Org::BouncyCastle::Crypto::Generators::KdfFeedbackBytesGenerator::__set_fixedInputData(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___fixedInputData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& Org::BouncyCastle::Crypto::Generators::KdfFeedbackBytesGenerator::__get_maxSizeExcl() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___maxSizeExcl;
}
constexpr int32_t const& Org::BouncyCastle::Crypto::Generators::KdfFeedbackBytesGenerator::__get_maxSizeExcl() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___maxSizeExcl;
}
constexpr void Org::BouncyCastle::Crypto::Generators::KdfFeedbackBytesGenerator::__set_maxSizeExcl(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___maxSizeExcl = value;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& Org::BouncyCastle::Crypto::Generators::KdfFeedbackBytesGenerator::__get_ios() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___ios;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& Org::BouncyCastle::Crypto::Generators::KdfFeedbackBytesGenerator::__get_ios() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___ios;
}
constexpr void Org::BouncyCastle::Crypto::Generators::KdfFeedbackBytesGenerator::__set_ios(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___ios)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& Org::BouncyCastle::Crypto::Generators::KdfFeedbackBytesGenerator::__get_iv() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___iv;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& Org::BouncyCastle::Crypto::Generators::KdfFeedbackBytesGenerator::__get_iv() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___iv;
}
constexpr void Org::BouncyCastle::Crypto::Generators::KdfFeedbackBytesGenerator::__set_iv(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___iv)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& Org::BouncyCastle::Crypto::Generators::KdfFeedbackBytesGenerator::__get_useCounter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___useCounter;
}
constexpr bool const& Org::BouncyCastle::Crypto::Generators::KdfFeedbackBytesGenerator::__get_useCounter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___useCounter;
}
constexpr void Org::BouncyCastle::Crypto::Generators::KdfFeedbackBytesGenerator::__set_useCounter(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___useCounter = value;
}
constexpr int32_t& Org::BouncyCastle::Crypto::Generators::KdfFeedbackBytesGenerator::__get_generatedBytes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___generatedBytes;
}
constexpr int32_t const& Org::BouncyCastle::Crypto::Generators::KdfFeedbackBytesGenerator::__get_generatedBytes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___generatedBytes;
}
constexpr void Org::BouncyCastle::Crypto::Generators::KdfFeedbackBytesGenerator::__set_generatedBytes(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___generatedBytes = value;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& Org::BouncyCastle::Crypto::Generators::KdfFeedbackBytesGenerator::__get_k() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___k;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& Org::BouncyCastle::Crypto::Generators::KdfFeedbackBytesGenerator::__get_k() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___k;
}
constexpr void Org::BouncyCastle::Crypto::Generators::KdfFeedbackBytesGenerator::__set_k(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___k)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Org::BouncyCastle::Crypto::Generators::KdfFeedbackBytesGenerator::setStaticF_IntegerMax(::Org::BouncyCastle::Math::BigInteger* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Math::BigInteger*, "IntegerMax",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Generators::KdfFeedbackBytesGenerator*>::get>(
      std::forward<::Org::BouncyCastle::Math::BigInteger*>(value));
}
inline ::Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Crypto::Generators::KdfFeedbackBytesGenerator::getStaticF_IntegerMax() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Math::BigInteger*, "IntegerMax",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Generators::KdfFeedbackBytesGenerator*>::get>();
}
inline void Org::BouncyCastle::Crypto::Generators::KdfFeedbackBytesGenerator::setStaticF_Two(::Org::BouncyCastle::Math::BigInteger* value) {
  ::cordl_internals::setStaticField<::Org::BouncyCastle::Math::BigInteger*, "Two",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Generators::KdfFeedbackBytesGenerator*>::get>(
      std::forward<::Org::BouncyCastle::Math::BigInteger*>(value));
}
inline ::Org::BouncyCastle::Math::BigInteger* Org::BouncyCastle::Crypto::Generators::KdfFeedbackBytesGenerator::getStaticF_Two() {
  return ::cordl_internals::getStaticField<::Org::BouncyCastle::Math::BigInteger*, "Two",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Generators::KdfFeedbackBytesGenerator*>::get>();
}
inline ::Org::BouncyCastle::Crypto::Generators::KdfFeedbackBytesGenerator* Org::BouncyCastle::Crypto::Generators::KdfFeedbackBytesGenerator::New_ctor(::Org::BouncyCastle::Crypto::IMac* prf) {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Crypto::Generators::KdfFeedbackBytesGenerator*>(prf));
}
inline void Org::BouncyCastle::Crypto::Generators::KdfFeedbackBytesGenerator::_ctor(::Org::BouncyCastle::Crypto::IMac* prf) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Generators::KdfFeedbackBytesGenerator*>::get(), ".ctor",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IMac*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, prf);
}
inline void Org::BouncyCastle::Crypto::Generators::KdfFeedbackBytesGenerator::Init(::Org::BouncyCastle::Crypto::IDerivationParameters* parameters) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Generators::KdfFeedbackBytesGenerator*>::get(), "Init", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IDerivationParameters*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, parameters);
}
inline ::Org::BouncyCastle::Crypto::IDigest* Org::BouncyCastle::Crypto::Generators::KdfFeedbackBytesGenerator::get_Digest() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Generators::KdfFeedbackBytesGenerator*>::get(), "get_Digest",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::IDigest*, false>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Crypto::Generators::KdfFeedbackBytesGenerator::GenerateBytes(::ArrayW<uint8_t, ::Array<uint8_t>*> output, int32_t outOff, int32_t length) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Generators::KdfFeedbackBytesGenerator*>::get(), "GenerateBytes", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, output, outOff, length);
}
inline void Org::BouncyCastle::Crypto::Generators::KdfFeedbackBytesGenerator::generateNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Generators::KdfFeedbackBytesGenerator*>::get(), "generateNext",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Crypto::IMac* Org::BouncyCastle::Crypto::Generators::KdfFeedbackBytesGenerator::GetMac() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Generators::KdfFeedbackBytesGenerator*>::get(), "GetMac",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Crypto::IMac*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Generators::KdfFeedbackBytesGenerator::KdfFeedbackBytesGenerator() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
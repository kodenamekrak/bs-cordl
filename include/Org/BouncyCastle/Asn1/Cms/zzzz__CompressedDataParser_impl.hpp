#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Asn1/Cms/zzzz__CompressedDataParser_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerInteger_def.hpp"
#include "Org/BouncyCastle/Asn1/Cms/zzzz__ContentInfoParser_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__AlgorithmIdentifier_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1SequenceParser_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cms::CompressedDataParser._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Asn1::Cms::CompressedDataParser::*)(::Org::BouncyCastle::Asn1::Asn1SequenceParser*)>(
    &::Org::BouncyCastle::Asn1::Cms::CompressedDataParser::_ctor)> {
  constexpr static std::size_t size = 0x2bc;
  constexpr static std::size_t addrs = 0xe75b68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Cms::CompressedDataParser*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1SequenceParser*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cms::CompressedDataParser.get_Version
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::DerInteger* (::Org::BouncyCastle::Asn1::Cms::CompressedDataParser::*)()>(
    &::Org::BouncyCastle::Asn1::Cms::CompressedDataParser::get_Version)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe75e24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Cms::CompressedDataParser*>::get(),
                                                                               "get_Version", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cms::CompressedDataParser.get_CompressionAlgorithmIdentifier
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* (::Org::BouncyCastle::Asn1::Cms::CompressedDataParser::*)()>(
    &::Org::BouncyCastle::Asn1::Cms::CompressedDataParser::get_CompressionAlgorithmIdentifier)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe75e2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Cms::CompressedDataParser*>::get(),
                                                                               "get_CompressionAlgorithmIdentifier", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::Cms::CompressedDataParser.GetEncapContentInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::Cms::ContentInfoParser* (::Org::BouncyCastle::Asn1::Cms::CompressedDataParser::*)()>(
    &::Org::BouncyCastle::Asn1::Cms::CompressedDataParser::GetEncapContentInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe75e34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Cms::CompressedDataParser*>::get(),
                                                                               "GetEncapContentInfo", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Asn1::DerInteger*& Org::BouncyCastle::Asn1::Cms::CompressedDataParser::__get__version() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____version;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerInteger*> const& Org::BouncyCastle::Asn1::Cms::CompressedDataParser::__get__version() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____version;
}
constexpr void Org::BouncyCastle::Asn1::Cms::CompressedDataParser::__set__version(::Org::BouncyCastle::Asn1::DerInteger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____version)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*& Org::BouncyCastle::Asn1::Cms::CompressedDataParser::__get__compressionAlgorithm() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____compressionAlgorithm;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*> const& Org::BouncyCastle::Asn1::Cms::CompressedDataParser::__get__compressionAlgorithm() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____compressionAlgorithm;
}
constexpr void Org::BouncyCastle::Asn1::Cms::CompressedDataParser::__set__compressionAlgorithm(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____compressionAlgorithm)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Org::BouncyCastle::Asn1::Cms::ContentInfoParser*& Org::BouncyCastle::Asn1::Cms::CompressedDataParser::__get__encapContentInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____encapContentInfo;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Cms::ContentInfoParser*> const& Org::BouncyCastle::Asn1::Cms::CompressedDataParser::__get__encapContentInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____encapContentInfo;
}
constexpr void Org::BouncyCastle::Asn1::Cms::CompressedDataParser::__set__encapContentInfo(::Org::BouncyCastle::Asn1::Cms::ContentInfoParser* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____encapContentInfo)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Org::BouncyCastle::Asn1::Cms::CompressedDataParser* Org::BouncyCastle::Asn1::Cms::CompressedDataParser::New_ctor(::Org::BouncyCastle::Asn1::Asn1SequenceParser* seq) {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Asn1::Cms::CompressedDataParser*>(seq));
}
inline void Org::BouncyCastle::Asn1::Cms::CompressedDataParser::_ctor(::Org::BouncyCastle::Asn1::Asn1SequenceParser* seq) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Cms::CompressedDataParser*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1SequenceParser*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, seq);
}
inline ::Org::BouncyCastle::Asn1::DerInteger* Org::BouncyCastle::Asn1::Cms::CompressedDataParser::get_Version() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Cms::CompressedDataParser*>::get(),
                                                                             "get_Version", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::DerInteger*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* Org::BouncyCastle::Asn1::Cms::CompressedDataParser::get_CompressionAlgorithmIdentifier() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Cms::CompressedDataParser*>::get(),
                                                                             "get_CompressionAlgorithmIdentifier", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Cms::ContentInfoParser* Org::BouncyCastle::Asn1::Cms::CompressedDataParser::GetEncapContentInfo() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::Cms::CompressedDataParser*>::get(),
                                                                             "GetEncapContentInfo", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Cms::ContentInfoParser*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::Cms::CompressedDataParser::CompressedDataParser() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
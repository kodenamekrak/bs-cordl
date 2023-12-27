#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerOctetStringParser_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DefiniteLengthInputStream_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__IAsn1Convertible_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1OctetStringParser_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::DerOctetStringParser._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Asn1::DerOctetStringParser::*)(::Org::BouncyCastle::Asn1::DefiniteLengthInputStream*)>(
    &::Org::BouncyCastle::Asn1::DerOctetStringParser::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x11ba3f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::DerOctetStringParser*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DefiniteLengthInputStream*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::DerOctetStringParser.GetOctetStream
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::Stream* (::Org::BouncyCastle::Asn1::DerOctetStringParser::*)()>(
    &::Org::BouncyCastle::Asn1::DerOctetStringParser::GetOctetStream)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x11c3714;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::DerOctetStringParser*>::get(),
                                                                               "GetOctetStream", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::DerOctetStringParser.ToAsn1Object
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (::Org::BouncyCastle::Asn1::DerOctetStringParser::*)()>(
    &::Org::BouncyCastle::Asn1::DerOctetStringParser::ToAsn1Object)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x11c371c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::DerOctetStringParser*>::get(),
                                                                               "ToAsn1Object", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Org::BouncyCastle::Asn1::Asn1OctetStringParser"
constexpr Org::BouncyCastle::Asn1::DerOctetStringParser::operator ::Org::BouncyCastle::Asn1::Asn1OctetStringParser*() noexcept {
  return static_cast<::Org::BouncyCastle::Asn1::Asn1OctetStringParser*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Org::BouncyCastle::Asn1::IAsn1Convertible"
constexpr Org::BouncyCastle::Asn1::DerOctetStringParser::operator ::Org::BouncyCastle::Asn1::IAsn1Convertible*() noexcept {
  return static_cast<::Org::BouncyCastle::Asn1::IAsn1Convertible*>(static_cast<void*>(this));
}
constexpr ::Org::BouncyCastle::Asn1::DefiniteLengthInputStream*& Org::BouncyCastle::Asn1::DerOctetStringParser::__get_stream() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___stream;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DefiniteLengthInputStream*> const& Org::BouncyCastle::Asn1::DerOctetStringParser::__get_stream() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___stream;
}
constexpr void Org::BouncyCastle::Asn1::DerOctetStringParser::__set_stream(::Org::BouncyCastle::Asn1::DefiniteLengthInputStream* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___stream)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Org::BouncyCastle::Asn1::DerOctetStringParser* Org::BouncyCastle::Asn1::DerOctetStringParser::New_ctor(::Org::BouncyCastle::Asn1::DefiniteLengthInputStream* stream) {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Asn1::DerOctetStringParser*>(stream));
}
inline void Org::BouncyCastle::Asn1::DerOctetStringParser::_ctor(::Org::BouncyCastle::Asn1::DefiniteLengthInputStream* stream) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::DerOctetStringParser*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DefiniteLengthInputStream*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stream);
}
inline ::System::IO::Stream* Org::BouncyCastle::Asn1::DerOctetStringParser::GetOctetStream() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::DerOctetStringParser*>::get(),
                                                                             "GetOctetStream", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*, false>(this, ___internal_method);
}
inline ::Org::BouncyCastle::Asn1::Asn1Object* Org::BouncyCastle::Asn1::DerOctetStringParser::ToAsn1Object() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::DerOctetStringParser*>::get(),
                                                                             "ToAsn1Object", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Object*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Asn1::DerOctetStringParser::DerOctetStringParser() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
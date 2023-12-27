#pragma once
#include "Org/BouncyCastle/Bcpg/zzzz__ContainedPacket_impl.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__PacketTag_impl.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__ExperimentalPacket_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__BcpgInputStream_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__PacketTag_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__BcpgOutputStream_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::ExperimentalPacket._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Bcpg::ExperimentalPacket::*)(
    ::Org::BouncyCastle::Bcpg::PacketTag, ::Org::BouncyCastle::Bcpg::BcpgInputStream*)>(&::Org::BouncyCastle::Bcpg::ExperimentalPacket::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x11cf298;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::ExperimentalPacket*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::PacketTag>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::BcpgInputStream*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::ExperimentalPacket.get_Tag
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Bcpg::PacketTag (::Org::BouncyCastle::Bcpg::ExperimentalPacket::*)()>(
    &::Org::BouncyCastle::Bcpg::ExperimentalPacket::get_Tag)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x11d1be4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::ExperimentalPacket*>::get(), "get_Tag",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::ExperimentalPacket.GetContents
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::Org::BouncyCastle::Bcpg::ExperimentalPacket::*)()>(
    &::Org::BouncyCastle::Bcpg::ExperimentalPacket::GetContents)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x11d1bec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::ExperimentalPacket*>::get(),
                                                                               "GetContents", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Bcpg::ExperimentalPacket.Encode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Bcpg::ExperimentalPacket::*)(::Org::BouncyCastle::Bcpg::BcpgOutputStream*)>(
    &::Org::BouncyCastle::Bcpg::ExperimentalPacket::Encode)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x11d1c64;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::ExperimentalPacket*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::ExperimentalPacket*>::get(), 4));
    return ___internal_method;
  }
};
constexpr ::Org::BouncyCastle::Bcpg::PacketTag& Org::BouncyCastle::Bcpg::ExperimentalPacket::__get_tag() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___tag;
}
constexpr ::Org::BouncyCastle::Bcpg::PacketTag const& Org::BouncyCastle::Bcpg::ExperimentalPacket::__get_tag() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___tag;
}
constexpr void Org::BouncyCastle::Bcpg::ExperimentalPacket::__set_tag(::Org::BouncyCastle::Bcpg::PacketTag value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___tag = value;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& Org::BouncyCastle::Bcpg::ExperimentalPacket::__get_contents() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___contents;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& Org::BouncyCastle::Bcpg::ExperimentalPacket::__get_contents() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___contents;
}
constexpr void Org::BouncyCastle::Bcpg::ExperimentalPacket::__set_contents(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___contents)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Org::BouncyCastle::Bcpg::ExperimentalPacket* Org::BouncyCastle::Bcpg::ExperimentalPacket::New_ctor(::Org::BouncyCastle::Bcpg::PacketTag tag,
                                                                                                            ::Org::BouncyCastle::Bcpg::BcpgInputStream* bcpgIn) {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Bcpg::ExperimentalPacket*>(tag, bcpgIn));
}
inline void Org::BouncyCastle::Bcpg::ExperimentalPacket::_ctor(::Org::BouncyCastle::Bcpg::PacketTag tag, ::Org::BouncyCastle::Bcpg::BcpgInputStream* bcpgIn) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::ExperimentalPacket*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::PacketTag>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::BcpgInputStream*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, tag, bcpgIn);
}
inline ::Org::BouncyCastle::Bcpg::PacketTag Org::BouncyCastle::Bcpg::ExperimentalPacket::get_Tag() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::ExperimentalPacket*>::get(), "get_Tag",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Bcpg::PacketTag, false>(this, ___internal_method);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Org::BouncyCastle::Bcpg::ExperimentalPacket::GetContents() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::ExperimentalPacket*>::get(),
                                                                             "GetContents", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method);
}
inline void Org::BouncyCastle::Bcpg::ExperimentalPacket::Encode(::Org::BouncyCastle::Bcpg::BcpgOutputStream* bcpgOut) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Bcpg::ExperimentalPacket*>::get(), "Encode", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Bcpg::BcpgOutputStream*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bcpgOut);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Bcpg::ExperimentalPacket::ExperimentalPacket() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Crypto/Macs/zzzz__Dstu7624Mac_def.hpp"
#include "Org/BouncyCastle/Crypto/Engines/zzzz__Dstu7624Engine_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IMac_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ICipherParameters_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Macs::Dstu7624Mac._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Macs::Dstu7624Mac::*)(int32_t, int32_t)>(
    &::Org::BouncyCastle::Crypto::Macs::Dstu7624Mac::_ctor)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0xf0c490;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Macs::Dstu7624Mac*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Macs::Dstu7624Mac.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Macs::Dstu7624Mac::*)(::Org::BouncyCastle::Crypto::ICipherParameters*)>(
    &::Org::BouncyCastle::Crypto::Macs::Dstu7624Mac::Init)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0xf0c588;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Macs::Dstu7624Mac*>::get(), "Init", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::ICipherParameters*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Macs::Dstu7624Mac.get_AlgorithmName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Org::BouncyCastle::Crypto::Macs::Dstu7624Mac::*)()>(
    &::Org::BouncyCastle::Crypto::Macs::Dstu7624Mac::get_AlgorithmName)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xf0c6b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Macs::Dstu7624Mac*>::get(),
                                                                               "get_AlgorithmName", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Macs::Dstu7624Mac.GetMacSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Macs::Dstu7624Mac::*)()>(
    &::Org::BouncyCastle::Crypto::Macs::Dstu7624Mac::GetMacSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xf0c6f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Macs::Dstu7624Mac*>::get(),
                                                                               "GetMacSize", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Macs::Dstu7624Mac.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Macs::Dstu7624Mac::*)(uint8_t)>(
    &::Org::BouncyCastle::Crypto::Macs::Dstu7624Mac::Update)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xf0c700;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Macs::Dstu7624Mac*>::get(), "Update", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Macs::Dstu7624Mac.BlockUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Macs::Dstu7624Mac::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t)>(
    &::Org::BouncyCastle::Crypto::Macs::Dstu7624Mac::BlockUpdate)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0xf0c7c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Macs::Dstu7624Mac*>::get(), "BlockUpdate", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Macs::Dstu7624Mac.processBlock
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Macs::Dstu7624Mac::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t)>(
    &::Org::BouncyCastle::Crypto::Macs::Dstu7624Mac::processBlock)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xf0c780;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Macs::Dstu7624Mac*>::get(), "processBlock", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Macs::Dstu7624Mac.Xor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Macs::Dstu7624Mac::*)(
    ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, ::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(&::Org::BouncyCastle::Crypto::Macs::Dstu7624Mac::Xor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xf0c908;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Macs::Dstu7624Mac*>::get(), "Xor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Macs::Dstu7624Mac.DoFinal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Org::BouncyCastle::Crypto::Macs::Dstu7624Mac::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t)>(
    &::Org::BouncyCastle::Crypto::Macs::Dstu7624Mac::DoFinal)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0xf0c998;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Macs::Dstu7624Mac*>::get(), "DoFinal", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crypto::Macs::Dstu7624Mac.Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crypto::Macs::Dstu7624Mac::*)()>(&::Org::BouncyCastle::Crypto::Macs::Dstu7624Mac::Reset)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0xf0cacc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Macs::Dstu7624Mac*>::get(), "Reset",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Org::BouncyCastle::Crypto::IMac"
constexpr Org::BouncyCastle::Crypto::Macs::Dstu7624Mac::operator ::Org::BouncyCastle::Crypto::IMac*() noexcept {
  return static_cast<::Org::BouncyCastle::Crypto::IMac*>(static_cast<void*>(this));
}
constexpr int32_t& Org::BouncyCastle::Crypto::Macs::Dstu7624Mac::__get_macSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___macSize;
}
constexpr int32_t const& Org::BouncyCastle::Crypto::Macs::Dstu7624Mac::__get_macSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___macSize;
}
constexpr void Org::BouncyCastle::Crypto::Macs::Dstu7624Mac::__set_macSize(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___macSize = value;
}
constexpr ::Org::BouncyCastle::Crypto::Engines::Dstu7624Engine*& Org::BouncyCastle::Crypto::Macs::Dstu7624Mac::__get_engine() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___engine;
}
constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Engines::Dstu7624Engine*> const& Org::BouncyCastle::Crypto::Macs::Dstu7624Mac::__get_engine() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___engine;
}
constexpr void Org::BouncyCastle::Crypto::Macs::Dstu7624Mac::__set_engine(::Org::BouncyCastle::Crypto::Engines::Dstu7624Engine* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___engine)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& Org::BouncyCastle::Crypto::Macs::Dstu7624Mac::__get_blockSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___blockSize;
}
constexpr int32_t const& Org::BouncyCastle::Crypto::Macs::Dstu7624Mac::__get_blockSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___blockSize;
}
constexpr void Org::BouncyCastle::Crypto::Macs::Dstu7624Mac::__set_blockSize(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___blockSize = value;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& Org::BouncyCastle::Crypto::Macs::Dstu7624Mac::__get_c() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___c;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& Org::BouncyCastle::Crypto::Macs::Dstu7624Mac::__get_c() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___c;
}
constexpr void Org::BouncyCastle::Crypto::Macs::Dstu7624Mac::__set_c(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___c)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& Org::BouncyCastle::Crypto::Macs::Dstu7624Mac::__get_cTemp() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___cTemp;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& Org::BouncyCastle::Crypto::Macs::Dstu7624Mac::__get_cTemp() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___cTemp;
}
constexpr void Org::BouncyCastle::Crypto::Macs::Dstu7624Mac::__set_cTemp(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___cTemp)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& Org::BouncyCastle::Crypto::Macs::Dstu7624Mac::__get_kDelta() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___kDelta;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& Org::BouncyCastle::Crypto::Macs::Dstu7624Mac::__get_kDelta() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___kDelta;
}
constexpr void Org::BouncyCastle::Crypto::Macs::Dstu7624Mac::__set_kDelta(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___kDelta)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& Org::BouncyCastle::Crypto::Macs::Dstu7624Mac::__get_buf() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___buf;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& Org::BouncyCastle::Crypto::Macs::Dstu7624Mac::__get_buf() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___buf;
}
constexpr void Org::BouncyCastle::Crypto::Macs::Dstu7624Mac::__set_buf(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___buf)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& Org::BouncyCastle::Crypto::Macs::Dstu7624Mac::__get_bufOff() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___bufOff;
}
constexpr int32_t const& Org::BouncyCastle::Crypto::Macs::Dstu7624Mac::__get_bufOff() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___bufOff;
}
constexpr void Org::BouncyCastle::Crypto::Macs::Dstu7624Mac::__set_bufOff(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___bufOff = value;
}
inline ::Org::BouncyCastle::Crypto::Macs::Dstu7624Mac* Org::BouncyCastle::Crypto::Macs::Dstu7624Mac::New_ctor(int32_t blockSizeBits, int32_t q) {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Crypto::Macs::Dstu7624Mac*>(blockSizeBits, q));
}
inline void Org::BouncyCastle::Crypto::Macs::Dstu7624Mac::_ctor(int32_t blockSizeBits, int32_t q) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Macs::Dstu7624Mac*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, blockSizeBits, q);
}
inline void Org::BouncyCastle::Crypto::Macs::Dstu7624Mac::Init(::Org::BouncyCastle::Crypto::ICipherParameters* parameters) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Macs::Dstu7624Mac*>::get(), "Init", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::ICipherParameters*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, parameters);
}
inline ::StringW Org::BouncyCastle::Crypto::Macs::Dstu7624Mac::get_AlgorithmName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Macs::Dstu7624Mac*>::get(),
                                                                             "get_AlgorithmName", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline int32_t Org::BouncyCastle::Crypto::Macs::Dstu7624Mac::GetMacSize() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Macs::Dstu7624Mac*>::get(),
                                                                             "GetMacSize", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void Org::BouncyCastle::Crypto::Macs::Dstu7624Mac::Update(uint8_t input) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Macs::Dstu7624Mac*>::get(), "Update", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, input);
}
inline void Org::BouncyCastle::Crypto::Macs::Dstu7624Mac::BlockUpdate(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inOff, int32_t len) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Macs::Dstu7624Mac*>::get(), "BlockUpdate", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, input, inOff, len);
}
inline void Org::BouncyCastle::Crypto::Macs::Dstu7624Mac::processBlock(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inOff) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Macs::Dstu7624Mac*>::get(), "processBlock", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, input, inOff);
}
inline void Org::BouncyCastle::Crypto::Macs::Dstu7624Mac::Xor(::ArrayW<uint8_t, ::Array<uint8_t>*> c, int32_t cOff, ::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inOff,
                                                              ::ArrayW<uint8_t, ::Array<uint8_t>*> xorResult) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Macs::Dstu7624Mac*>::get(), "Xor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, c, cOff, input, inOff, xorResult);
}
inline int32_t Org::BouncyCastle::Crypto::Macs::Dstu7624Mac::DoFinal(::ArrayW<uint8_t, ::Array<uint8_t>*> output, int32_t outOff) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Macs::Dstu7624Mac*>::get(), "DoFinal", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, output, outOff);
}
inline void Org::BouncyCastle::Crypto::Macs::Dstu7624Mac::Reset() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crypto::Macs::Dstu7624Mac*>::get(), "Reset",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Crypto::Macs::Dstu7624Mac::Dstu7624Mac() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
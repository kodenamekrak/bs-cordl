#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__TermInfoReader_def.hpp"
#include "System/zzzz__TermInfoStrings_def.hpp"
#include "System/zzzz__TermInfoNumbers_def.hpp"
//  Writing Method size for method: ::System::TermInfoReader._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::TermInfoReader::*)(::StringW, ::StringW)>(&::System::TermInfoReader::_ctor)> {
  constexpr static std::size_t size = 0x2d8;
  constexpr static std::size_t addrs = 0x2600590;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TermInfoReader*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TermInfoReader._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::TermInfoReader::*)(::StringW, ::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
    &::System::TermInfoReader::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x2600868;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TermInfoReader*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TermInfoReader.DetermineVersion
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::TermInfoReader::*)(int16_t)>(&::System::TermInfoReader::DetermineVersion)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x26064f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TermInfoReader*>::get(), "DetermineVersion", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int16_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TermInfoReader.ReadHeader
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::TermInfoReader::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, ByRef<int32_t>)>(
    &::System::TermInfoReader::ReadHeader)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x2606400;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TermInfoReader*>::get(), "ReadHeader", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TermInfoReader.ReadNames
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::TermInfoReader::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, ByRef<int32_t>)>(
    &::System::TermInfoReader::ReadNames)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x26064c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TermInfoReader*>::get(), "ReadNames", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TermInfoReader.Get
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::TermInfoReader::*)(::System::TermInfoNumbers)>(&::System::TermInfoReader::Get)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x26011f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TermInfoReader*>::get(), "Get", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TermInfoNumbers>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TermInfoReader.Get
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::TermInfoReader::*)(::System::TermInfoStrings)>(&::System::TermInfoReader::Get)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x2601160;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TermInfoReader*>::get(), "Get", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TermInfoStrings>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TermInfoReader.GetStringBytes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::System::TermInfoReader::*)(::System::TermInfoStrings)>(
    &::System::TermInfoReader::GetStringBytes)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x26050a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TermInfoReader*>::get(), "GetStringBytes", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TermInfoStrings>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TermInfoReader.GetInt16
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int16_t (::System::TermInfoReader::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t)>(
    &::System::TermInfoReader::GetInt16)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x26065a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TermInfoReader*>::get(), "GetInt16", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TermInfoReader.GetString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::TermInfoReader::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t)>(
    &::System::TermInfoReader::GetString)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x26065f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TermInfoReader*>::get(), "GetString", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::TermInfoReader.GetStringBytes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (::System::TermInfoReader::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t)>(
    &::System::TermInfoReader::GetStringBytes)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x2606670;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TermInfoReader*>::get(), "GetStringBytes", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
constexpr int32_t& System::TermInfoReader::__get_boolSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___boolSize;
}
constexpr int32_t const& System::TermInfoReader::__get_boolSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___boolSize;
}
constexpr void System::TermInfoReader::__set_boolSize(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___boolSize = value;
}
constexpr int32_t& System::TermInfoReader::__get_numSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___numSize;
}
constexpr int32_t const& System::TermInfoReader::__get_numSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___numSize;
}
constexpr void System::TermInfoReader::__set_numSize(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___numSize = value;
}
constexpr int32_t& System::TermInfoReader::__get_strOffsets() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___strOffsets;
}
constexpr int32_t const& System::TermInfoReader::__get_strOffsets() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___strOffsets;
}
constexpr void System::TermInfoReader::__set_strOffsets(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___strOffsets = value;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& System::TermInfoReader::__get_buffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___buffer;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& System::TermInfoReader::__get_buffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___buffer;
}
constexpr void System::TermInfoReader::__set_buffer(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___buffer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& System::TermInfoReader::__get_booleansOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___booleansOffset;
}
constexpr int32_t const& System::TermInfoReader::__get_booleansOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___booleansOffset;
}
constexpr void System::TermInfoReader::__set_booleansOffset(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___booleansOffset = value;
}
constexpr int32_t& System::TermInfoReader::__get_intOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___intOffset;
}
constexpr int32_t const& System::TermInfoReader::__get_intOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___intOffset;
}
constexpr void System::TermInfoReader::__set_intOffset(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___intOffset = value;
}
inline ::System::TermInfoReader* System::TermInfoReader::New_ctor(::StringW term, ::StringW filename) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::TermInfoReader*>(term, filename));
}
inline void System::TermInfoReader::_ctor(::StringW term, ::StringW filename) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TermInfoReader*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, term, filename);
}
inline ::System::TermInfoReader* System::TermInfoReader::New_ctor(::StringW term, ::ArrayW<uint8_t, ::Array<uint8_t>*> buffer) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::TermInfoReader*>(term, buffer));
}
inline void System::TermInfoReader::_ctor(::StringW term, ::ArrayW<uint8_t, ::Array<uint8_t>*> buffer) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TermInfoReader*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, term, buffer);
}
inline void System::TermInfoReader::DetermineVersion(int16_t magic) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TermInfoReader*>::get(), "DetermineVersion", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int16_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, magic);
}
inline void System::TermInfoReader::ReadHeader(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, ByRef<int32_t> position) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TermInfoReader*>::get(), "ReadHeader", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, buffer, position);
}
inline void System::TermInfoReader::ReadNames(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, ByRef<int32_t> position) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TermInfoReader*>::get(), "ReadNames", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, buffer, position);
}
inline int32_t System::TermInfoReader::Get(::System::TermInfoNumbers number) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TermInfoReader*>::get(), "Get", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TermInfoNumbers>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, number);
}
inline ::StringW System::TermInfoReader::Get(::System::TermInfoStrings tstr) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TermInfoReader*>::get(), "Get", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TermInfoStrings>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, tstr);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> System::TermInfoReader::GetStringBytes(::System::TermInfoStrings tstr) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TermInfoReader*>::get(), "GetStringBytes", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TermInfoStrings>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method, tstr);
}
inline int16_t System::TermInfoReader::GetInt16(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TermInfoReader*>::get(), "GetInt16", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int16_t, false>(this, ___internal_method, buffer, offset);
}
inline ::StringW System::TermInfoReader::GetString(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TermInfoReader*>::get(), "GetString", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, buffer, offset);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> System::TermInfoReader::GetStringBytes(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::TermInfoReader*>::get(), "GetStringBytes", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(this, ___internal_method, buffer, offset);
}
// Ctor Parameters []
constexpr ::System::TermInfoReader::TermInfoReader() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
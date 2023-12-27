#pragma once
#include "System/IO/zzzz__UnmanagedMemoryStream_impl.hpp"
#include "System/Runtime/InteropServices/zzzz__GCHandle_impl.hpp"
#include "System/IO/zzzz__PinnedBufferMemoryStream_def.hpp"
#include "System/zzzz__Span_1_def.hpp"
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
//  Writing Method size for method: ::System::IO::PinnedBufferMemoryStream._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::PinnedBufferMemoryStream::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
    &::System::IO::PinnedBufferMemoryStream::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x2500294;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::PinnedBufferMemoryStream*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::PinnedBufferMemoryStream.Read
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::IO::PinnedBufferMemoryStream::*)(::System::Span_1<uint8_t>)>(
    &::System::IO::PinnedBufferMemoryStream::Read)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x25005b4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::PinnedBufferMemoryStream*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::PinnedBufferMemoryStream*>::get(), 36));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::PinnedBufferMemoryStream.Write
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::PinnedBufferMemoryStream::*)(::System::ReadOnlySpan_1<uint8_t>)>(
    &::System::IO::PinnedBufferMemoryStream::Write)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x25007e4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::PinnedBufferMemoryStream*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::PinnedBufferMemoryStream*>::get(), 39));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::PinnedBufferMemoryStream.Finalize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::PinnedBufferMemoryStream::*)()>(&::System::IO::PinnedBufferMemoryStream::Finalize)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x2500ae4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::PinnedBufferMemoryStream*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::PinnedBufferMemoryStream*>::get(), 1));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::PinnedBufferMemoryStream.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::IO::PinnedBufferMemoryStream::*)(bool)>(&::System::IO::PinnedBufferMemoryStream::Dispose)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2500b88;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::PinnedBufferMemoryStream*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::PinnedBufferMemoryStream*>::get(), 22));
    return ___internal_method;
  }
};
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& System::IO::PinnedBufferMemoryStream::__get__array() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____array;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& System::IO::PinnedBufferMemoryStream::__get__array() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____array;
}
constexpr void System::IO::PinnedBufferMemoryStream::__set__array(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____array)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Runtime::InteropServices::GCHandle& System::IO::PinnedBufferMemoryStream::__get__pinningHandle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____pinningHandle;
}
constexpr ::System::Runtime::InteropServices::GCHandle const& System::IO::PinnedBufferMemoryStream::__get__pinningHandle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____pinningHandle;
}
constexpr void System::IO::PinnedBufferMemoryStream::__set__pinningHandle(::System::Runtime::InteropServices::GCHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____pinningHandle = value;
}
inline ::System::IO::PinnedBufferMemoryStream* System::IO::PinnedBufferMemoryStream::New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> array) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::IO::PinnedBufferMemoryStream*>(array));
}
inline void System::IO::PinnedBufferMemoryStream::_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> array) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::PinnedBufferMemoryStream*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, array);
}
inline int32_t System::IO::PinnedBufferMemoryStream::Read(::System::Span_1<uint8_t> buffer) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::PinnedBufferMemoryStream*>::get(), "Read", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Span_1<uint8_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, buffer);
}
inline void System::IO::PinnedBufferMemoryStream::Write(::System::ReadOnlySpan_1<uint8_t> buffer) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::PinnedBufferMemoryStream*>::get(), "Write", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<uint8_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, buffer);
}
inline void System::IO::PinnedBufferMemoryStream::Finalize() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::PinnedBufferMemoryStream*>::get(), "Finalize",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::IO::PinnedBufferMemoryStream::Dispose(bool disposing) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::PinnedBufferMemoryStream*>::get(), "Dispose", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, disposing);
}
// Ctor Parameters []
constexpr ::System::IO::PinnedBufferMemoryStream::PinnedBufferMemoryStream() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
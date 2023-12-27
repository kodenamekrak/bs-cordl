#pragma once
#include "System/IO/zzzz__MemoryStream_impl.hpp"
#include "System/Net/zzzz__FtpStatusCode_impl.hpp"
#include "System/Net/zzzz__WebResponse_impl.hpp"
#include "System/zzzz__DateTime_impl.hpp"
#include "System/Net/zzzz__FtpWebResponse_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Uri_def.hpp"
#include "System/Net/zzzz__FtpWebResponse_def.hpp"
#include "System/Net/zzzz__FtpStatusCode_def.hpp"
#include "System/Net/zzzz__WebHeaderCollection_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::System::Net::__FtpWebResponse__EmptyStream._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::__FtpWebResponse__EmptyStream::*)()>(&::System::Net::__FtpWebResponse__EmptyStream::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x299acec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__FtpWebResponse__EmptyStream*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline ::System::Net::__FtpWebResponse__EmptyStream* System::Net::__FtpWebResponse__EmptyStream::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Net::__FtpWebResponse__EmptyStream*>());
}
inline void System::Net::__FtpWebResponse__EmptyStream::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::__FtpWebResponse__EmptyStream*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Net::__FtpWebResponse__EmptyStream::__FtpWebResponse__EmptyStream() {}
//  Writing Method size for method: ::System::Net::FtpWebResponse._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::FtpWebResponse::*)(
    ::System::IO::Stream*, int64_t, ::System::Uri*, ::System::Net::FtpStatusCode, ::StringW, ::System::DateTime, ::StringW, ::StringW, ::StringW)>(&::System::Net::FtpWebResponse::_ctor)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x299a58c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpWebResponse*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Uri*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::FtpStatusCode>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FtpWebResponse.UpdateStatus
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::FtpWebResponse::*)(::System::Net::FtpStatusCode, ::StringW, ::StringW)>(
    &::System::Net::FtpWebResponse::UpdateStatus)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x29990f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpWebResponse*>::get(), "UpdateStatus", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::FtpStatusCode>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FtpWebResponse.GetResponseStream
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::Stream* (::System::Net::FtpWebResponse::*)()>(&::System::Net::FtpWebResponse::GetResponseStream)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x299ac84;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpWebResponse*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpWebResponse*>::get(), 12));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FtpWebResponse.SetResponseStream
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::FtpWebResponse::*)(::System::IO::Stream*)>(&::System::Net::FtpWebResponse::SetResponseStream)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x299a4f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpWebResponse*>::get(), "SetResponseStream", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FtpWebResponse.Close
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::FtpWebResponse::*)()>(&::System::Net::FtpWebResponse::Close)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x299ad78;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpWebResponse*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpWebResponse*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FtpWebResponse.get_Headers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::WebHeaderCollection* (::System::Net::FtpWebResponse::*)()>(
    &::System::Net::FtpWebResponse::get_Headers)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x299ae5c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpWebResponse*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpWebResponse*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FtpWebResponse.get_ResponseUri
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Uri* (::System::Net::FtpWebResponse::*)()>(&::System::Net::FtpWebResponse::get_ResponseUri)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x299af7c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpWebResponse*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpWebResponse*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FtpWebResponse.get_StatusCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::FtpStatusCode (::System::Net::FtpWebResponse::*)()>(&::System::Net::FtpWebResponse::get_StatusCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x299af84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpWebResponse*>::get(), "get_StatusCode",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::IDisposable"
constexpr System::Net::FtpWebResponse::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr ::System::IO::Stream*& System::Net::FtpWebResponse::__get__responseStream() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____responseStream;
}
constexpr ::cordl_internals::to_const_pointer<::System::IO::Stream*> const& System::Net::FtpWebResponse::__get__responseStream() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____responseStream;
}
constexpr void System::Net::FtpWebResponse::__set__responseStream(::System::IO::Stream* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____responseStream)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int64_t& System::Net::FtpWebResponse::__get__contentLength() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____contentLength;
}
constexpr int64_t const& System::Net::FtpWebResponse::__get__contentLength() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____contentLength;
}
constexpr void System::Net::FtpWebResponse::__set__contentLength(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____contentLength = value;
}
constexpr ::System::Uri*& System::Net::FtpWebResponse::__get__responseUri() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____responseUri;
}
constexpr ::cordl_internals::to_const_pointer<::System::Uri*> const& System::Net::FtpWebResponse::__get__responseUri() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____responseUri;
}
constexpr void System::Net::FtpWebResponse::__set__responseUri(::System::Uri* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____responseUri)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Net::FtpStatusCode& System::Net::FtpWebResponse::__get__statusCode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____statusCode;
}
constexpr ::System::Net::FtpStatusCode const& System::Net::FtpWebResponse::__get__statusCode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____statusCode;
}
constexpr void System::Net::FtpWebResponse::__set__statusCode(::System::Net::FtpStatusCode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____statusCode = value;
}
constexpr ::StringW& System::Net::FtpWebResponse::__get__statusLine() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____statusLine;
}
constexpr ::StringW const& System::Net::FtpWebResponse::__get__statusLine() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____statusLine;
}
constexpr void System::Net::FtpWebResponse::__set__statusLine(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____statusLine)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Net::WebHeaderCollection*& System::Net::FtpWebResponse::__get__ftpRequestHeaders() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____ftpRequestHeaders;
}
constexpr ::cordl_internals::to_const_pointer<::System::Net::WebHeaderCollection*> const& System::Net::FtpWebResponse::__get__ftpRequestHeaders() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____ftpRequestHeaders;
}
constexpr void System::Net::FtpWebResponse::__set__ftpRequestHeaders(::System::Net::WebHeaderCollection* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____ftpRequestHeaders)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::DateTime& System::Net::FtpWebResponse::__get__lastModified() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____lastModified;
}
constexpr ::System::DateTime const& System::Net::FtpWebResponse::__get__lastModified() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____lastModified;
}
constexpr void System::Net::FtpWebResponse::__set__lastModified(::System::DateTime value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____lastModified = value;
}
constexpr ::StringW& System::Net::FtpWebResponse::__get__bannerMessage() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____bannerMessage;
}
constexpr ::StringW const& System::Net::FtpWebResponse::__get__bannerMessage() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____bannerMessage;
}
constexpr void System::Net::FtpWebResponse::__set__bannerMessage(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____bannerMessage)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Net::FtpWebResponse::__get__welcomeMessage() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____welcomeMessage;
}
constexpr ::StringW const& System::Net::FtpWebResponse::__get__welcomeMessage() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____welcomeMessage;
}
constexpr void System::Net::FtpWebResponse::__set__welcomeMessage(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____welcomeMessage)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Net::FtpWebResponse::__get__exitMessage() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____exitMessage;
}
constexpr ::StringW const& System::Net::FtpWebResponse::__get__exitMessage() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____exitMessage;
}
constexpr void System::Net::FtpWebResponse::__set__exitMessage(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____exitMessage)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Net::FtpWebResponse* System::Net::FtpWebResponse::New_ctor(::System::IO::Stream* responseStream, int64_t contentLength, ::System::Uri* responseUri,
                                                                            ::System::Net::FtpStatusCode statusCode, ::StringW statusLine, ::System::DateTime lastModified, ::StringW bannerMessage,
                                                                            ::StringW welcomeMessage, ::StringW exitMessage) {
  return THROW_UNLESS(
      ::il2cpp_utils::New<::System::Net::FtpWebResponse*>(responseStream, contentLength, responseUri, statusCode, statusLine, lastModified, bannerMessage, welcomeMessage, exitMessage));
}
inline void System::Net::FtpWebResponse::_ctor(::System::IO::Stream* responseStream, int64_t contentLength, ::System::Uri* responseUri, ::System::Net::FtpStatusCode statusCode, ::StringW statusLine,
                                               ::System::DateTime lastModified, ::StringW bannerMessage, ::StringW welcomeMessage, ::StringW exitMessage) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpWebResponse*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Uri*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::FtpStatusCode>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DateTime>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, responseStream, contentLength, responseUri, statusCode, statusLine, lastModified, bannerMessage, welcomeMessage,
                                                          exitMessage);
}
inline void System::Net::FtpWebResponse::UpdateStatus(::System::Net::FtpStatusCode statusCode, ::StringW statusLine, ::StringW exitMessage) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpWebResponse*>::get(), "UpdateStatus", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::FtpStatusCode>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, statusCode, statusLine, exitMessage);
}
inline ::System::IO::Stream* System::Net::FtpWebResponse::GetResponseStream() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpWebResponse*>::get(), "GetResponseStream",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*, false>(this, ___internal_method);
}
inline void System::Net::FtpWebResponse::SetResponseStream(::System::IO::Stream* stream) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpWebResponse*>::get(), "SetResponseStream", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::Stream*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stream);
}
inline void System::Net::FtpWebResponse::Close() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpWebResponse*>::get(), "Close",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Net::WebHeaderCollection* System::Net::FtpWebResponse::get_Headers() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpWebResponse*>::get(), "get_Headers",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Net::WebHeaderCollection*, false>(this, ___internal_method);
}
inline ::System::Uri* System::Net::FtpWebResponse::get_ResponseUri() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpWebResponse*>::get(), "get_ResponseUri",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Uri*, false>(this, ___internal_method);
}
inline ::System::Net::FtpStatusCode System::Net::FtpWebResponse::get_StatusCode() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FtpWebResponse*>::get(), "get_StatusCode",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Net::FtpStatusCode, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Net::FtpWebResponse::FtpWebResponse() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
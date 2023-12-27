#pragma once
#include "System/IO/zzzz__FileAccess_impl.hpp"
#include "System/Net/zzzz__WebRequest_impl.hpp"
#include "System/Net/zzzz__FileWebRequest_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/Net/zzzz__LazyAsyncResult_def.hpp"
#include "System/Net/zzzz__ICredentials_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/zzzz__Uri_def.hpp"
#include "System/Runtime/Serialization/zzzz__ISerializable_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/Threading/zzzz__ManualResetEvent_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/Net/zzzz__IWebProxy_def.hpp"
#include "System/Net/zzzz__WebHeaderCollection_def.hpp"
#include "System/Threading/zzzz__WaitCallback_def.hpp"
#include "System/Net/zzzz__WebResponse_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
//  Writing Method size for method: ::System::Net::FileWebRequest._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::FileWebRequest::*)(::System::Uri*)>(&::System::Net::FileWebRequest::_ctor)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x29b3514;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FileWebRequest*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Uri*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FileWebRequest._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::FileWebRequest::*)(
    ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&::System::Net::FileWebRequest::_ctor)> {
  constexpr static std::size_t size = 0x39c;
  constexpr static std::size_t addrs = 0x29b368c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FileWebRequest*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FileWebRequest.System_Runtime_Serialization_ISerializable_GetObjectData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::System::Net::FileWebRequest::*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(
        &::System::Net::FileWebRequest::System_Runtime_Serialization_ISerializable_GetObjectData)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x29b3a28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FileWebRequest*>::get(), "System.Runtime.Serialization.ISerializable.GetObjectData", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FileWebRequest.GetObjectData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::FileWebRequest::*)(
    ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&::System::Net::FileWebRequest::GetObjectData)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0x29b3a34;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FileWebRequest*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FileWebRequest*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FileWebRequest.get_Aborted
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::FileWebRequest::*)()>(&::System::Net::FileWebRequest::get_Aborted)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x29b3cc4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FileWebRequest*>::get(), "get_Aborted",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FileWebRequest.set_ConnectionGroupName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::FileWebRequest::*)(::StringW)>(&::System::Net::FileWebRequest::set_ConnectionGroupName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29b3cd4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FileWebRequest*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FileWebRequest*>::get(), 12));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FileWebRequest.get_ContentLength
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (::System::Net::FileWebRequest::*)()>(&::System::Net::FileWebRequest::get_ContentLength)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29b3cdc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FileWebRequest*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FileWebRequest*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FileWebRequest.set_ContentLength
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::FileWebRequest::*)(int64_t)>(&::System::Net::FileWebRequest::set_ContentLength)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x29b3ce4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FileWebRequest*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FileWebRequest*>::get(), 15));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FileWebRequest.get_Credentials
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::ICredentials* (::System::Net::FileWebRequest::*)()>(&::System::Net::FileWebRequest::get_Credentials)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29b3d68;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FileWebRequest*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FileWebRequest*>::get(), 16));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FileWebRequest.set_Credentials
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::FileWebRequest::*)(::System::Net::ICredentials*)>(
    &::System::Net::FileWebRequest::set_Credentials)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29b3d70;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FileWebRequest*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FileWebRequest*>::get(), 17));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FileWebRequest.get_Headers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::WebHeaderCollection* (::System::Net::FileWebRequest::*)()>(
    &::System::Net::FileWebRequest::get_Headers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29b3d78;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FileWebRequest*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FileWebRequest*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FileWebRequest.get_Method
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Net::FileWebRequest::*)()>(&::System::Net::FileWebRequest::get_Method)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29b3d80;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FileWebRequest*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FileWebRequest*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FileWebRequest.set_Method
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::FileWebRequest::*)(::StringW)>(&::System::Net::FileWebRequest::set_Method)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x29b3d88;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FileWebRequest*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FileWebRequest*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FileWebRequest.set_PreAuthenticate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::FileWebRequest::*)(bool)>(&::System::Net::FileWebRequest::set_PreAuthenticate)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x29b3e5c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FileWebRequest*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FileWebRequest*>::get(), 21));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FileWebRequest.get_Proxy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::IWebProxy* (::System::Net::FileWebRequest::*)()>(&::System::Net::FileWebRequest::get_Proxy)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29b3e68;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FileWebRequest*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FileWebRequest*>::get(), 19));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FileWebRequest.set_Proxy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::FileWebRequest::*)(::System::Net::IWebProxy*)>(&::System::Net::FileWebRequest::set_Proxy)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29b3e70;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FileWebRequest*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FileWebRequest*>::get(), 20));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FileWebRequest.get_Timeout
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Net::FileWebRequest::*)()>(&::System::Net::FileWebRequest::get_Timeout)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29b3e78;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FileWebRequest*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FileWebRequest*>::get(), 22));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FileWebRequest.set_Timeout
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::FileWebRequest::*)(int32_t)>(&::System::Net::FileWebRequest::set_Timeout)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x29b3e80;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FileWebRequest*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FileWebRequest*>::get(), 23));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FileWebRequest.get_RequestUri
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Uri* (::System::Net::FileWebRequest::*)()>(&::System::Net::FileWebRequest::get_RequestUri)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29b3f08;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FileWebRequest*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FileWebRequest*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FileWebRequest.BeginGetRequestStream
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (::System::Net::FileWebRequest::*)(::System::AsyncCallback*, ::System::Object*)>(
    &::System::Net::FileWebRequest::BeginGetRequestStream)> {
  constexpr static std::size_t size = 0x3d4;
  constexpr static std::size_t addrs = 0x29b3f10;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FileWebRequest*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FileWebRequest*>::get(), 27));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FileWebRequest.BeginGetResponse
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (::System::Net::FileWebRequest::*)(::System::AsyncCallback*, ::System::Object*)>(
    &::System::Net::FileWebRequest::BeginGetResponse)> {
  constexpr static std::size_t size = 0x2e0;
  constexpr static std::size_t addrs = 0x29b4354;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FileWebRequest*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FileWebRequest*>::get(), 25));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FileWebRequest.CanGetRequestStream
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::FileWebRequest::*)()>(&::System::Net::FileWebRequest::CanGetRequestStream)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x29b42e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FileWebRequest*>::get(), "CanGetRequestStream",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FileWebRequest.EndGetRequestStream
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::Stream* (::System::Net::FileWebRequest::*)(::System::IAsyncResult*)>(
    &::System::Net::FileWebRequest::EndGetRequestStream)> {
  constexpr static std::size_t size = 0x304;
  constexpr static std::size_t addrs = 0x29b4634;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FileWebRequest*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FileWebRequest*>::get(), 28));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FileWebRequest.EndGetResponse
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::WebResponse* (::System::Net::FileWebRequest::*)(::System::IAsyncResult*)>(
    &::System::Net::FileWebRequest::EndGetResponse)> {
  constexpr static std::size_t size = 0x304;
  constexpr static std::size_t addrs = 0x29b4938;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FileWebRequest*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FileWebRequest*>::get(), 26));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FileWebRequest.GetResponse
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::WebResponse* (::System::Net::FileWebRequest::*)()>(&::System::Net::FileWebRequest::GetResponse)> {
  constexpr static std::size_t size = 0x370;
  constexpr static std::size_t addrs = 0x29b4c3c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FileWebRequest*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FileWebRequest*>::get(), 24));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FileWebRequest.GetRequestStreamCallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Object*)>(&::System::Net::FileWebRequest::GetRequestStreamCallback)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x29b4fac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FileWebRequest*>::get(), "GetRequestStreamCallback", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FileWebRequest.GetResponseCallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Object*)>(&::System::Net::FileWebRequest::GetResponseCallback)> {
  constexpr static std::size_t size = 0x324;
  constexpr static std::size_t addrs = 0x29b5278;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FileWebRequest*>::get(), "GetResponseCallback", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FileWebRequest.UnblockReader
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::FileWebRequest::*)()>(&::System::Net::FileWebRequest::UnblockReader)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x29b5868;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FileWebRequest*>::get(), "UnblockReader",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FileWebRequest.get_UseDefaultCredentials
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::FileWebRequest::*)()>(&::System::Net::FileWebRequest::get_UseDefaultCredentials)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x29b5940;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FileWebRequest*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FileWebRequest*>::get(), 18));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FileWebRequest.Abort
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::FileWebRequest::*)()>(&::System::Net::FileWebRequest::Abort)> {
  constexpr static std::size_t size = 0x3b4;
  constexpr static std::size_t addrs = 0x29b5964;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FileWebRequest*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FileWebRequest*>::get(), 31));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
constexpr System::Net::FileWebRequest::operator ::System::Runtime::Serialization::ISerializable*() noexcept {
  return static_cast<::System::Runtime::Serialization::ISerializable*>(static_cast<void*>(this));
}
constexpr ::StringW& System::Net::FileWebRequest::__get_m_connectionGroupName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_connectionGroupName;
}
constexpr ::StringW const& System::Net::FileWebRequest::__get_m_connectionGroupName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_connectionGroupName;
}
constexpr void System::Net::FileWebRequest::__set_m_connectionGroupName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_connectionGroupName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int64_t& System::Net::FileWebRequest::__get_m_contentLength() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_contentLength;
}
constexpr int64_t const& System::Net::FileWebRequest::__get_m_contentLength() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_contentLength;
}
constexpr void System::Net::FileWebRequest::__set_m_contentLength(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___m_contentLength = value;
}
constexpr ::System::Net::ICredentials*& System::Net::FileWebRequest::__get_m_credentials() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_credentials;
}
constexpr ::cordl_internals::to_const_pointer<::System::Net::ICredentials*> const& System::Net::FileWebRequest::__get_m_credentials() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_credentials;
}
constexpr void System::Net::FileWebRequest::__set_m_credentials(::System::Net::ICredentials* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_credentials)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::IO::FileAccess& System::Net::FileWebRequest::__get_m_fileAccess() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_fileAccess;
}
constexpr ::System::IO::FileAccess const& System::Net::FileWebRequest::__get_m_fileAccess() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_fileAccess;
}
constexpr void System::Net::FileWebRequest::__set_m_fileAccess(::System::IO::FileAccess value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___m_fileAccess = value;
}
constexpr ::System::Net::WebHeaderCollection*& System::Net::FileWebRequest::__get_m_headers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_headers;
}
constexpr ::cordl_internals::to_const_pointer<::System::Net::WebHeaderCollection*> const& System::Net::FileWebRequest::__get_m_headers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_headers;
}
constexpr void System::Net::FileWebRequest::__set_m_headers(::System::Net::WebHeaderCollection* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_headers)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Net::FileWebRequest::__get_m_method() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_method;
}
constexpr ::StringW const& System::Net::FileWebRequest::__get_m_method() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_method;
}
constexpr void System::Net::FileWebRequest::__set_m_method(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_method)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& System::Net::FileWebRequest::__get_m_preauthenticate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_preauthenticate;
}
constexpr bool const& System::Net::FileWebRequest::__get_m_preauthenticate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_preauthenticate;
}
constexpr void System::Net::FileWebRequest::__set_m_preauthenticate(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___m_preauthenticate = value;
}
constexpr ::System::Net::IWebProxy*& System::Net::FileWebRequest::__get_m_proxy() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_proxy;
}
constexpr ::cordl_internals::to_const_pointer<::System::Net::IWebProxy*> const& System::Net::FileWebRequest::__get_m_proxy() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_proxy;
}
constexpr void System::Net::FileWebRequest::__set_m_proxy(::System::Net::IWebProxy* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_proxy)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Threading::ManualResetEvent*& System::Net::FileWebRequest::__get_m_readerEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_readerEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::ManualResetEvent*> const& System::Net::FileWebRequest::__get_m_readerEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_readerEvent;
}
constexpr void System::Net::FileWebRequest::__set_m_readerEvent(::System::Threading::ManualResetEvent* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_readerEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& System::Net::FileWebRequest::__get_m_readPending() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_readPending;
}
constexpr bool const& System::Net::FileWebRequest::__get_m_readPending() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_readPending;
}
constexpr void System::Net::FileWebRequest::__set_m_readPending(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___m_readPending = value;
}
constexpr ::System::Net::WebResponse*& System::Net::FileWebRequest::__get_m_response() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_response;
}
constexpr ::cordl_internals::to_const_pointer<::System::Net::WebResponse*> const& System::Net::FileWebRequest::__get_m_response() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_response;
}
constexpr void System::Net::FileWebRequest::__set_m_response(::System::Net::WebResponse* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_response)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::IO::Stream*& System::Net::FileWebRequest::__get_m_stream() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_stream;
}
constexpr ::cordl_internals::to_const_pointer<::System::IO::Stream*> const& System::Net::FileWebRequest::__get_m_stream() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_stream;
}
constexpr void System::Net::FileWebRequest::__set_m_stream(::System::IO::Stream* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_stream)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& System::Net::FileWebRequest::__get_m_syncHint() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_syncHint;
}
constexpr bool const& System::Net::FileWebRequest::__get_m_syncHint() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_syncHint;
}
constexpr void System::Net::FileWebRequest::__set_m_syncHint(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___m_syncHint = value;
}
constexpr int32_t& System::Net::FileWebRequest::__get_m_timeout() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_timeout;
}
constexpr int32_t const& System::Net::FileWebRequest::__get_m_timeout() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_timeout;
}
constexpr void System::Net::FileWebRequest::__set_m_timeout(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___m_timeout = value;
}
constexpr ::System::Uri*& System::Net::FileWebRequest::__get_m_uri() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_uri;
}
constexpr ::cordl_internals::to_const_pointer<::System::Uri*> const& System::Net::FileWebRequest::__get_m_uri() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_uri;
}
constexpr void System::Net::FileWebRequest::__set_m_uri(::System::Uri* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_uri)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& System::Net::FileWebRequest::__get_m_writePending() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_writePending;
}
constexpr bool const& System::Net::FileWebRequest::__get_m_writePending() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_writePending;
}
constexpr void System::Net::FileWebRequest::__set_m_writePending(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___m_writePending = value;
}
constexpr bool& System::Net::FileWebRequest::__get_m_writing() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_writing;
}
constexpr bool const& System::Net::FileWebRequest::__get_m_writing() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_writing;
}
constexpr void System::Net::FileWebRequest::__set_m_writing(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___m_writing = value;
}
constexpr ::System::Net::LazyAsyncResult*& System::Net::FileWebRequest::__get_m_WriteAResult() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_WriteAResult;
}
constexpr ::cordl_internals::to_const_pointer<::System::Net::LazyAsyncResult*> const& System::Net::FileWebRequest::__get_m_WriteAResult() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_WriteAResult;
}
constexpr void System::Net::FileWebRequest::__set_m_WriteAResult(::System::Net::LazyAsyncResult* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_WriteAResult)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Net::LazyAsyncResult*& System::Net::FileWebRequest::__get_m_ReadAResult() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_ReadAResult;
}
constexpr ::cordl_internals::to_const_pointer<::System::Net::LazyAsyncResult*> const& System::Net::FileWebRequest::__get_m_ReadAResult() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_ReadAResult;
}
constexpr void System::Net::FileWebRequest::__set_m_ReadAResult(::System::Net::LazyAsyncResult* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ReadAResult)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& System::Net::FileWebRequest::__get_m_Aborted() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_Aborted;
}
constexpr int32_t const& System::Net::FileWebRequest::__get_m_Aborted() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_Aborted;
}
constexpr void System::Net::FileWebRequest::__set_m_Aborted(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___m_Aborted = value;
}
inline void System::Net::FileWebRequest::setStaticF_s_GetRequestStreamCallback(::System::Threading::WaitCallback* value) {
  ::cordl_internals::setStaticField<::System::Threading::WaitCallback*, "s_GetRequestStreamCallback", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FileWebRequest*>::get>(
      std::forward<::System::Threading::WaitCallback*>(value));
}
inline ::System::Threading::WaitCallback* System::Net::FileWebRequest::getStaticF_s_GetRequestStreamCallback() {
  return ::cordl_internals::getStaticField<::System::Threading::WaitCallback*, "s_GetRequestStreamCallback",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FileWebRequest*>::get>();
}
inline void System::Net::FileWebRequest::setStaticF_s_GetResponseCallback(::System::Threading::WaitCallback* value) {
  ::cordl_internals::setStaticField<::System::Threading::WaitCallback*, "s_GetResponseCallback", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FileWebRequest*>::get>(
      std::forward<::System::Threading::WaitCallback*>(value));
}
inline ::System::Threading::WaitCallback* System::Net::FileWebRequest::getStaticF_s_GetResponseCallback() {
  return ::cordl_internals::getStaticField<::System::Threading::WaitCallback*, "s_GetResponseCallback", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FileWebRequest*>::get>();
}
inline ::System::Net::FileWebRequest* System::Net::FileWebRequest::New_ctor(::System::Uri* uri) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Net::FileWebRequest*>(uri));
}
inline void System::Net::FileWebRequest::_ctor(::System::Uri* uri) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FileWebRequest*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Uri*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, uri);
}
inline ::System::Net::FileWebRequest* System::Net::FileWebRequest::New_ctor(::System::Runtime::Serialization::SerializationInfo* serializationInfo,
                                                                            ::System::Runtime::Serialization::StreamingContext streamingContext) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Net::FileWebRequest*>(serializationInfo, streamingContext));
}
inline void System::Net::FileWebRequest::_ctor(::System::Runtime::Serialization::SerializationInfo* serializationInfo, ::System::Runtime::Serialization::StreamingContext streamingContext) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FileWebRequest*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, serializationInfo, streamingContext);
}
inline void System::Net::FileWebRequest::System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo* serializationInfo,
                                                                                                  ::System::Runtime::Serialization::StreamingContext streamingContext) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FileWebRequest*>::get(), "System.Runtime.Serialization.ISerializable.GetObjectData", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, serializationInfo, streamingContext);
}
inline void System::Net::FileWebRequest::GetObjectData(::System::Runtime::Serialization::SerializationInfo* serializationInfo, ::System::Runtime::Serialization::StreamingContext streamingContext) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FileWebRequest*>::get(), "GetObjectData", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, serializationInfo, streamingContext);
}
inline bool System::Net::FileWebRequest::get_Aborted() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FileWebRequest*>::get(), "get_Aborted",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void System::Net::FileWebRequest::set_ConnectionGroupName(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FileWebRequest*>::get(), "set_ConnectionGroupName", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int64_t System::Net::FileWebRequest::get_ContentLength() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FileWebRequest*>::get(), "get_ContentLength",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int64_t, false>(this, ___internal_method);
}
inline void System::Net::FileWebRequest::set_ContentLength(int64_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FileWebRequest*>::get(), "set_ContentLength", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Net::ICredentials* System::Net::FileWebRequest::get_Credentials() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FileWebRequest*>::get(), "get_Credentials",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Net::ICredentials*, false>(this, ___internal_method);
}
inline void System::Net::FileWebRequest::set_Credentials(::System::Net::ICredentials* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FileWebRequest*>::get(), "set_Credentials", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::ICredentials*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Net::WebHeaderCollection* System::Net::FileWebRequest::get_Headers() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FileWebRequest*>::get(), "get_Headers",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Net::WebHeaderCollection*, false>(this, ___internal_method);
}
inline ::StringW System::Net::FileWebRequest::get_Method() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FileWebRequest*>::get(), "get_Method",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void System::Net::FileWebRequest::set_Method(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FileWebRequest*>::get(), "set_Method", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void System::Net::FileWebRequest::set_PreAuthenticate(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FileWebRequest*>::get(), "set_PreAuthenticate", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Net::IWebProxy* System::Net::FileWebRequest::get_Proxy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FileWebRequest*>::get(), "get_Proxy",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Net::IWebProxy*, false>(this, ___internal_method);
}
inline void System::Net::FileWebRequest::set_Proxy(::System::Net::IWebProxy* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FileWebRequest*>::get(), "set_Proxy", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IWebProxy*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t System::Net::FileWebRequest::get_Timeout() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FileWebRequest*>::get(), "get_Timeout",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void System::Net::FileWebRequest::set_Timeout(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FileWebRequest*>::get(), "set_Timeout", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Uri* System::Net::FileWebRequest::get_RequestUri() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FileWebRequest*>::get(), "get_RequestUri",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Uri*, false>(this, ___internal_method);
}
inline ::System::IAsyncResult* System::Net::FileWebRequest::BeginGetRequestStream(::System::AsyncCallback* callback, ::System::Object* state) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FileWebRequest*>::get(), "BeginGetRequestStream", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, callback, state);
}
inline ::System::IAsyncResult* System::Net::FileWebRequest::BeginGetResponse(::System::AsyncCallback* callback, ::System::Object* state) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FileWebRequest*>::get(), "BeginGetResponse", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::AsyncCallback*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, callback, state);
}
inline bool System::Net::FileWebRequest::CanGetRequestStream() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FileWebRequest*>::get(), "CanGetRequestStream",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::IO::Stream* System::Net::FileWebRequest::EndGetRequestStream(::System::IAsyncResult* asyncResult) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FileWebRequest*>::get(), "EndGetRequestStream", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*, false>(this, ___internal_method, asyncResult);
}
inline ::System::Net::WebResponse* System::Net::FileWebRequest::EndGetResponse(::System::IAsyncResult* asyncResult) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FileWebRequest*>::get(), "EndGetResponse", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IAsyncResult*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::WebResponse*, false>(this, ___internal_method, asyncResult);
}
inline ::System::Net::WebResponse* System::Net::FileWebRequest::GetResponse() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FileWebRequest*>::get(), "GetResponse",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Net::WebResponse*, false>(this, ___internal_method);
}
inline void System::Net::FileWebRequest::GetRequestStreamCallback(::System::Object* state) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FileWebRequest*>::get(), "GetRequestStreamCallback", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, state);
}
inline void System::Net::FileWebRequest::GetResponseCallback(::System::Object* state) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FileWebRequest*>::get(), "GetResponseCallback", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, state);
}
inline void System::Net::FileWebRequest::UnblockReader() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FileWebRequest*>::get(), "UnblockReader",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool System::Net::FileWebRequest::get_UseDefaultCredentials() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FileWebRequest*>::get(), "get_UseDefaultCredentials",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void System::Net::FileWebRequest::Abort() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::FileWebRequest*>::get(), "Abort",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Net::FileWebRequest::FileWebRequest() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
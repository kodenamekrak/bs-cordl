#pragma once
// IWYU pragma private; include "OVR/OpenVR/IVROverlay.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "OVR/OpenVR/zzzz__IVROverlay_def.hpp"
#include "OVR/OpenVR/zzzz__EColorSpace_def.hpp"
#include "OVR/OpenVR/zzzz__EDualAnalogWhich_def.hpp"
#include "OVR/OpenVR/zzzz__EOverlayDirection_def.hpp"
#include "OVR/OpenVR/zzzz__ETextureType_def.hpp"
#include "OVR/OpenVR/zzzz__ETrackingUniverseOrigin_def.hpp"
#include "OVR/OpenVR/zzzz__EVROverlayError_def.hpp"
#include "OVR/OpenVR/zzzz__HmdColor_t_def.hpp"
#include "OVR/OpenVR/zzzz__HmdMatrix34_t_def.hpp"
#include "OVR/OpenVR/zzzz__HmdRect2_t_def.hpp"
#include "OVR/OpenVR/zzzz__HmdVector2_t_def.hpp"
#include "OVR/OpenVR/zzzz__IVROverlay_def.hpp"
#include "OVR/OpenVR/zzzz__Texture_t_def.hpp"
#include "OVR/OpenVR/zzzz__VREvent_t_def.hpp"
#include "OVR/OpenVR/zzzz__VRMessageOverlayResponse_def.hpp"
#include "OVR/OpenVR/zzzz__VROverlayFlags_def.hpp"
#include "OVR/OpenVR/zzzz__VROverlayInputMethod_def.hpp"
#include "OVR/OpenVR/zzzz__VROverlayIntersectionMaskPrimitive_t_def.hpp"
#include "OVR/OpenVR/zzzz__VROverlayIntersectionParams_t_def.hpp"
#include "OVR/OpenVR/zzzz__VROverlayIntersectionResults_t_def.hpp"
#include "OVR/OpenVR/zzzz__VROverlayTransformType_def.hpp"
#include "OVR/OpenVR/zzzz__VRTextureBounds_t_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___FindOverlay._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVROverlay___FindOverlay::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::__IVROverlay___FindOverlay::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x4000de0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___FindOverlay*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___FindOverlay.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::__IVROverlay___FindOverlay::*)(::StringW, ByRef<uint64_t>)>(
    &::OVR::OpenVR::__IVROverlay___FindOverlay::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x4000e80;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___FindOverlay*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___FindOverlay*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___FindOverlay.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::__IVROverlay___FindOverlay::*)(::StringW, ByRef<uint64_t>, ::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::__IVROverlay___FindOverlay::BeginInvoke)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x4000e94;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___FindOverlay*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___FindOverlay*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___FindOverlay.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::__IVROverlay___FindOverlay::*)(ByRef<uint64_t>, ::System::IAsyncResult*)>(&::OVR::OpenVR::__IVROverlay___FindOverlay::EndInvoke)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x4000f28;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___FindOverlay*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___FindOverlay*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVROverlay___FindOverlay* OVR::OpenVR::__IVROverlay___FindOverlay::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVROverlay___FindOverlay*>(object, method));
}
inline void OVR::OpenVR::__IVROverlay___FindOverlay::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___FindOverlay*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::__IVROverlay___FindOverlay::Invoke(::StringW pchOverlayKey, ByRef<uint64_t> pOverlayHandle) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___FindOverlay*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, pchOverlayKey, pOverlayHandle);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVROverlay___FindOverlay::BeginInvoke(::StringW pchOverlayKey, ByRef<uint64_t> pOverlayHandle, ::System::AsyncCallback* callback,
                                                                                    ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___FindOverlay*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, pchOverlayKey, pOverlayHandle, callback, object);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::__IVROverlay___FindOverlay::EndInvoke(ByRef<uint64_t> pOverlayHandle, ::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___FindOverlay*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, pOverlayHandle, result);
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::__IVROverlay___FindOverlay::__IVROverlay___FindOverlay() {}
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___CreateOverlay._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVROverlay___CreateOverlay::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::__IVROverlay___CreateOverlay::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x4000f54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___CreateOverlay*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___CreateOverlay.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::__IVROverlay___CreateOverlay::*)(::StringW, ::StringW, ByRef<uint64_t>)>(&::OVR::OpenVR::__IVROverlay___CreateOverlay::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x4000ff4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___CreateOverlay*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___CreateOverlay*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___CreateOverlay.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::__IVROverlay___CreateOverlay::*)(::StringW, ::StringW, ByRef<uint64_t>, ::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::__IVROverlay___CreateOverlay::BeginInvoke)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x4001008;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___CreateOverlay*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___CreateOverlay*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___CreateOverlay.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::__IVROverlay___CreateOverlay::*)(ByRef<uint64_t>, ::System::IAsyncResult*)>(&::OVR::OpenVR::__IVROverlay___CreateOverlay::EndInvoke)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x40010a8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___CreateOverlay*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___CreateOverlay*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVROverlay___CreateOverlay* OVR::OpenVR::__IVROverlay___CreateOverlay::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVROverlay___CreateOverlay*>(object, method));
}
inline void OVR::OpenVR::__IVROverlay___CreateOverlay::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___CreateOverlay*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::__IVROverlay___CreateOverlay::Invoke(::StringW pchOverlayKey, ::StringW pchOverlayName, ByRef<uint64_t> pOverlayHandle) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___CreateOverlay*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, pchOverlayKey, pchOverlayName, pOverlayHandle);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVROverlay___CreateOverlay::BeginInvoke(::StringW pchOverlayKey, ::StringW pchOverlayName, ByRef<uint64_t> pOverlayHandle,
                                                                                      ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___CreateOverlay*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, pchOverlayKey, pchOverlayName, pOverlayHandle, callback, object);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::__IVROverlay___CreateOverlay::EndInvoke(ByRef<uint64_t> pOverlayHandle, ::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___CreateOverlay*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, pOverlayHandle, result);
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::__IVROverlay___CreateOverlay::__IVROverlay___CreateOverlay() {}
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___DestroyOverlay._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVROverlay___DestroyOverlay::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::__IVROverlay___DestroyOverlay::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x40010d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___DestroyOverlay*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___DestroyOverlay.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::__IVROverlay___DestroyOverlay::*)(uint64_t)>(
    &::OVR::OpenVR::__IVROverlay___DestroyOverlay::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x4001160;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___DestroyOverlay*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___DestroyOverlay*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___DestroyOverlay.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::__IVROverlay___DestroyOverlay::*)(uint64_t, ::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::__IVROverlay___DestroyOverlay::BeginInvoke)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x4001174;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___DestroyOverlay*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___DestroyOverlay*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___DestroyOverlay.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::__IVROverlay___DestroyOverlay::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::__IVROverlay___DestroyOverlay::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x40011f8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___DestroyOverlay*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___DestroyOverlay*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVROverlay___DestroyOverlay* OVR::OpenVR::__IVROverlay___DestroyOverlay::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVROverlay___DestroyOverlay*>(object, method));
}
inline void OVR::OpenVR::__IVROverlay___DestroyOverlay::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___DestroyOverlay*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::__IVROverlay___DestroyOverlay::Invoke(uint64_t ulOverlayHandle) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___DestroyOverlay*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, ulOverlayHandle);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVROverlay___DestroyOverlay::BeginInvoke(uint64_t ulOverlayHandle, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___DestroyOverlay*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, ulOverlayHandle, callback, object);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::__IVROverlay___DestroyOverlay::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___DestroyOverlay*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::__IVROverlay___DestroyOverlay::__IVROverlay___DestroyOverlay() {}
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___SetHighQualityOverlay._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVROverlay___SetHighQualityOverlay::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::__IVROverlay___SetHighQualityOverlay::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x4001220;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetHighQualityOverlay*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___SetHighQualityOverlay.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::__IVROverlay___SetHighQualityOverlay::*)(uint64_t)>(
    &::OVR::OpenVR::__IVROverlay___SetHighQualityOverlay::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x40012ac;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetHighQualityOverlay*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetHighQualityOverlay*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___SetHighQualityOverlay.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::__IVROverlay___SetHighQualityOverlay::*)(uint64_t, ::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::__IVROverlay___SetHighQualityOverlay::BeginInvoke)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x40012c0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetHighQualityOverlay*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetHighQualityOverlay*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___SetHighQualityOverlay.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::__IVROverlay___SetHighQualityOverlay::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::__IVROverlay___SetHighQualityOverlay::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x4001344;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetHighQualityOverlay*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetHighQualityOverlay*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVROverlay___SetHighQualityOverlay* OVR::OpenVR::__IVROverlay___SetHighQualityOverlay::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVROverlay___SetHighQualityOverlay*>(object, method));
}
inline void OVR::OpenVR::__IVROverlay___SetHighQualityOverlay::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetHighQualityOverlay*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::__IVROverlay___SetHighQualityOverlay::Invoke(uint64_t ulOverlayHandle) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetHighQualityOverlay*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, ulOverlayHandle);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVROverlay___SetHighQualityOverlay::BeginInvoke(uint64_t ulOverlayHandle, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetHighQualityOverlay*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, ulOverlayHandle, callback, object);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::__IVROverlay___SetHighQualityOverlay::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetHighQualityOverlay*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::__IVROverlay___SetHighQualityOverlay::__IVROverlay___SetHighQualityOverlay() {}
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___GetHighQualityOverlay._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVROverlay___GetHighQualityOverlay::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::__IVROverlay___GetHighQualityOverlay::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x400136c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetHighQualityOverlay*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___GetHighQualityOverlay.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (::OVR::OpenVR::__IVROverlay___GetHighQualityOverlay::*)()>(
    &::OVR::OpenVR::__IVROverlay___GetHighQualityOverlay::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x40013f4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetHighQualityOverlay*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetHighQualityOverlay*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___GetHighQualityOverlay.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::__IVROverlay___GetHighQualityOverlay::*)(::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::__IVROverlay___GetHighQualityOverlay::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x4001408;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetHighQualityOverlay*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetHighQualityOverlay*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___GetHighQualityOverlay.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (::OVR::OpenVR::__IVROverlay___GetHighQualityOverlay::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::__IVROverlay___GetHighQualityOverlay::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x4001428;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetHighQualityOverlay*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetHighQualityOverlay*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVROverlay___GetHighQualityOverlay* OVR::OpenVR::__IVROverlay___GetHighQualityOverlay::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVROverlay___GetHighQualityOverlay*>(object, method));
}
inline void OVR::OpenVR::__IVROverlay___GetHighQualityOverlay::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetHighQualityOverlay*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline uint64_t OVR::OpenVR::__IVROverlay___GetHighQualityOverlay::Invoke() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetHighQualityOverlay*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<uint64_t, false>(this, ___internal_method);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVROverlay___GetHighQualityOverlay::BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetHighQualityOverlay*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, callback, object);
}
inline uint64_t OVR::OpenVR::__IVROverlay___GetHighQualityOverlay::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetHighQualityOverlay*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<uint64_t, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::__IVROverlay___GetHighQualityOverlay::__IVROverlay___GetHighQualityOverlay() {}
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___GetOverlayKey._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVROverlay___GetOverlayKey::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::__IVROverlay___GetOverlayKey::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x4001450;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayKey*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___GetOverlayKey.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::OVR::OpenVR::__IVROverlay___GetOverlayKey::*)(
    uint64_t, ::System::Text::StringBuilder*, uint32_t, ByRef<::OVR::OpenVR::EVROverlayError>)>(&::OVR::OpenVR::__IVROverlay___GetOverlayKey::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x40014dc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayKey*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayKey*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___GetOverlayKey.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::__IVROverlay___GetOverlayKey::*)(uint64_t, ::System::Text::StringBuilder*, uint32_t, ByRef<::OVR::OpenVR::EVROverlayError>, ::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::__IVROverlay___GetOverlayKey::BeginInvoke)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x40014f0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayKey*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayKey*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___GetOverlayKey.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<uint32_t (::OVR::OpenVR::__IVROverlay___GetOverlayKey::*)(ByRef<::OVR::OpenVR::EVROverlayError>, ::System::IAsyncResult*)>(&::OVR::OpenVR::__IVROverlay___GetOverlayKey::EndInvoke)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x40015e8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayKey*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayKey*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVROverlay___GetOverlayKey* OVR::OpenVR::__IVROverlay___GetOverlayKey::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVROverlay___GetOverlayKey*>(object, method));
}
inline void OVR::OpenVR::__IVROverlay___GetOverlayKey::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayKey*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline uint32_t OVR::OpenVR::__IVROverlay___GetOverlayKey::Invoke(uint64_t ulOverlayHandle, ::System::Text::StringBuilder* pchValue, uint32_t unBufferSize,
                                                                  ByRef<::OVR::OpenVR::EVROverlayError> pError) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayKey*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method, ulOverlayHandle, pchValue, unBufferSize, pError);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVROverlay___GetOverlayKey::BeginInvoke(uint64_t ulOverlayHandle, ::System::Text::StringBuilder* pchValue, uint32_t unBufferSize,
                                                                                      ByRef<::OVR::OpenVR::EVROverlayError> pError, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayKey*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, ulOverlayHandle, pchValue, unBufferSize, pError, callback, object);
}
inline uint32_t OVR::OpenVR::__IVROverlay___GetOverlayKey::EndInvoke(ByRef<::OVR::OpenVR::EVROverlayError> pError, ::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayKey*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method, pError, result);
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::__IVROverlay___GetOverlayKey::__IVROverlay___GetOverlayKey() {}
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___GetOverlayName._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVROverlay___GetOverlayName::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::__IVROverlay___GetOverlayName::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x4001614;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayName*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___GetOverlayName.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::OVR::OpenVR::__IVROverlay___GetOverlayName::*)(
    uint64_t, ::System::Text::StringBuilder*, uint32_t, ByRef<::OVR::OpenVR::EVROverlayError>)>(&::OVR::OpenVR::__IVROverlay___GetOverlayName::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x40016a0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayName*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayName*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___GetOverlayName.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::__IVROverlay___GetOverlayName::*)(uint64_t, ::System::Text::StringBuilder*, uint32_t, ByRef<::OVR::OpenVR::EVROverlayError>, ::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::__IVROverlay___GetOverlayName::BeginInvoke)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x40016b4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayName*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayName*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___GetOverlayName.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<uint32_t (::OVR::OpenVR::__IVROverlay___GetOverlayName::*)(ByRef<::OVR::OpenVR::EVROverlayError>, ::System::IAsyncResult*)>(&::OVR::OpenVR::__IVROverlay___GetOverlayName::EndInvoke)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x40017ac;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayName*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayName*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVROverlay___GetOverlayName* OVR::OpenVR::__IVROverlay___GetOverlayName::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVROverlay___GetOverlayName*>(object, method));
}
inline void OVR::OpenVR::__IVROverlay___GetOverlayName::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayName*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline uint32_t OVR::OpenVR::__IVROverlay___GetOverlayName::Invoke(uint64_t ulOverlayHandle, ::System::Text::StringBuilder* pchValue, uint32_t unBufferSize,
                                                                   ByRef<::OVR::OpenVR::EVROverlayError> pError) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayName*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method, ulOverlayHandle, pchValue, unBufferSize, pError);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVROverlay___GetOverlayName::BeginInvoke(uint64_t ulOverlayHandle, ::System::Text::StringBuilder* pchValue, uint32_t unBufferSize,
                                                                                       ByRef<::OVR::OpenVR::EVROverlayError> pError, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayName*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, ulOverlayHandle, pchValue, unBufferSize, pError, callback, object);
}
inline uint32_t OVR::OpenVR::__IVROverlay___GetOverlayName::EndInvoke(ByRef<::OVR::OpenVR::EVROverlayError> pError, ::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayName*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method, pError, result);
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::__IVROverlay___GetOverlayName::__IVROverlay___GetOverlayName() {}
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___SetOverlayName._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVROverlay___SetOverlayName::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::__IVROverlay___SetOverlayName::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x40017d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayName*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___SetOverlayName.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::__IVROverlay___SetOverlayName::*)(uint64_t, ::StringW)>(
    &::OVR::OpenVR::__IVROverlay___SetOverlayName::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x4001864;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayName*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayName*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___SetOverlayName.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::__IVROverlay___SetOverlayName::*)(uint64_t, ::StringW, ::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::__IVROverlay___SetOverlayName::BeginInvoke)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x4001878;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayName*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayName*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___SetOverlayName.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::__IVROverlay___SetOverlayName::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::__IVROverlay___SetOverlayName::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x4001908;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayName*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayName*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVROverlay___SetOverlayName* OVR::OpenVR::__IVROverlay___SetOverlayName::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVROverlay___SetOverlayName*>(object, method));
}
inline void OVR::OpenVR::__IVROverlay___SetOverlayName::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayName*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::__IVROverlay___SetOverlayName::Invoke(uint64_t ulOverlayHandle, ::StringW pchName) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayName*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, ulOverlayHandle, pchName);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVROverlay___SetOverlayName::BeginInvoke(uint64_t ulOverlayHandle, ::StringW pchName, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayName*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, ulOverlayHandle, pchName, callback, object);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::__IVROverlay___SetOverlayName::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayName*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::__IVROverlay___SetOverlayName::__IVROverlay___SetOverlayName() {}
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___GetOverlayImageData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVROverlay___GetOverlayImageData::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::__IVROverlay___GetOverlayImageData::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x4001930;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayImageData*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___GetOverlayImageData.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::__IVROverlay___GetOverlayImageData::*)(
    uint64_t, ::System::IntPtr, uint32_t, ByRef<uint32_t>, ByRef<uint32_t>)>(&::OVR::OpenVR::__IVROverlay___GetOverlayImageData::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x40019bc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayImageData*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayImageData*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___GetOverlayImageData.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::__IVROverlay___GetOverlayImageData::*)(uint64_t, ::System::IntPtr, uint32_t, ByRef<uint32_t>, ByRef<uint32_t>, ::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::__IVROverlay___GetOverlayImageData::BeginInvoke)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x40019d0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayImageData*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayImageData*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___GetOverlayImageData.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::__IVROverlay___GetOverlayImageData::*)(
    ByRef<uint32_t>, ByRef<uint32_t>, ::System::IAsyncResult*)>(&::OVR::OpenVR::__IVROverlay___GetOverlayImageData::EndInvoke)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x4001af0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayImageData*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayImageData*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVROverlay___GetOverlayImageData* OVR::OpenVR::__IVROverlay___GetOverlayImageData::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVROverlay___GetOverlayImageData*>(object, method));
}
inline void OVR::OpenVR::__IVROverlay___GetOverlayImageData::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayImageData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::__IVROverlay___GetOverlayImageData::Invoke(uint64_t ulOverlayHandle, ::System::IntPtr pvBuffer, uint32_t unBufferSize, ByRef<uint32_t> punWidth,
                                                                                              ByRef<uint32_t> punHeight) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayImageData*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, ulOverlayHandle, pvBuffer, unBufferSize, punWidth, punHeight);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVROverlay___GetOverlayImageData::BeginInvoke(uint64_t ulOverlayHandle, ::System::IntPtr pvBuffer, uint32_t unBufferSize, ByRef<uint32_t> punWidth,
                                                                                            ByRef<uint32_t> punHeight, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayImageData*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, ulOverlayHandle, pvBuffer, unBufferSize, punWidth, punHeight, callback, object);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::__IVROverlay___GetOverlayImageData::EndInvoke(ByRef<uint32_t> punWidth, ByRef<uint32_t> punHeight, ::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayImageData*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, punWidth, punHeight, result);
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::__IVROverlay___GetOverlayImageData::__IVROverlay___GetOverlayImageData() {}
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___GetOverlayErrorNameFromEnum._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVROverlay___GetOverlayErrorNameFromEnum::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::__IVROverlay___GetOverlayErrorNameFromEnum::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x4001b24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayErrorNameFromEnum*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___GetOverlayErrorNameFromEnum.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (::OVR::OpenVR::__IVROverlay___GetOverlayErrorNameFromEnum::*)(::OVR::OpenVR::EVROverlayError)>(
    &::OVR::OpenVR::__IVROverlay___GetOverlayErrorNameFromEnum::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x4001bb0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayErrorNameFromEnum*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayErrorNameFromEnum*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___GetOverlayErrorNameFromEnum.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::__IVROverlay___GetOverlayErrorNameFromEnum::*)(::OVR::OpenVR::EVROverlayError, ::System::AsyncCallback*, ::System::Object*)>(
        &::OVR::OpenVR::__IVROverlay___GetOverlayErrorNameFromEnum::BeginInvoke)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x4001bc4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayErrorNameFromEnum*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayErrorNameFromEnum*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___GetOverlayErrorNameFromEnum.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (::OVR::OpenVR::__IVROverlay___GetOverlayErrorNameFromEnum::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::__IVROverlay___GetOverlayErrorNameFromEnum::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x4001c48;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayErrorNameFromEnum*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayErrorNameFromEnum*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVROverlay___GetOverlayErrorNameFromEnum* OVR::OpenVR::__IVROverlay___GetOverlayErrorNameFromEnum::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVROverlay___GetOverlayErrorNameFromEnum*>(object, method));
}
inline void OVR::OpenVR::__IVROverlay___GetOverlayErrorNameFromEnum::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayErrorNameFromEnum*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::System::IntPtr OVR::OpenVR::__IVROverlay___GetOverlayErrorNameFromEnum::Invoke(::OVR::OpenVR::EVROverlayError error) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayErrorNameFromEnum*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr, false>(this, ___internal_method, error);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVROverlay___GetOverlayErrorNameFromEnum::BeginInvoke(::OVR::OpenVR::EVROverlayError error, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayErrorNameFromEnum*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, error, callback, object);
}
inline ::System::IntPtr OVR::OpenVR::__IVROverlay___GetOverlayErrorNameFromEnum::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayErrorNameFromEnum*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::__IVROverlay___GetOverlayErrorNameFromEnum::__IVROverlay___GetOverlayErrorNameFromEnum() {}
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___SetOverlayRenderingPid._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVROverlay___SetOverlayRenderingPid::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::__IVROverlay___SetOverlayRenderingPid::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x4001c70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayRenderingPid*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___SetOverlayRenderingPid.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::__IVROverlay___SetOverlayRenderingPid::*)(uint64_t, uint32_t)>(
    &::OVR::OpenVR::__IVROverlay___SetOverlayRenderingPid::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x4001cfc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayRenderingPid*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayRenderingPid*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___SetOverlayRenderingPid.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::__IVROverlay___SetOverlayRenderingPid::*)(uint64_t, uint32_t, ::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::__IVROverlay___SetOverlayRenderingPid::BeginInvoke)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x4001d10;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayRenderingPid*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayRenderingPid*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___SetOverlayRenderingPid.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::__IVROverlay___SetOverlayRenderingPid::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::__IVROverlay___SetOverlayRenderingPid::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x4001dc8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayRenderingPid*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayRenderingPid*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVROverlay___SetOverlayRenderingPid* OVR::OpenVR::__IVROverlay___SetOverlayRenderingPid::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVROverlay___SetOverlayRenderingPid*>(object, method));
}
inline void OVR::OpenVR::__IVROverlay___SetOverlayRenderingPid::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayRenderingPid*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::__IVROverlay___SetOverlayRenderingPid::Invoke(uint64_t ulOverlayHandle, uint32_t unPID) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayRenderingPid*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, ulOverlayHandle, unPID);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVROverlay___SetOverlayRenderingPid::BeginInvoke(uint64_t ulOverlayHandle, uint32_t unPID, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayRenderingPid*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, ulOverlayHandle, unPID, callback, object);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::__IVROverlay___SetOverlayRenderingPid::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayRenderingPid*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::__IVROverlay___SetOverlayRenderingPid::__IVROverlay___SetOverlayRenderingPid() {}
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___GetOverlayRenderingPid._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVROverlay___GetOverlayRenderingPid::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::__IVROverlay___GetOverlayRenderingPid::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x4001df0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayRenderingPid*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___GetOverlayRenderingPid.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::OVR::OpenVR::__IVROverlay___GetOverlayRenderingPid::*)(uint64_t)>(
    &::OVR::OpenVR::__IVROverlay___GetOverlayRenderingPid::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x4001e7c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayRenderingPid*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayRenderingPid*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___GetOverlayRenderingPid.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::__IVROverlay___GetOverlayRenderingPid::*)(uint64_t, ::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::__IVROverlay___GetOverlayRenderingPid::BeginInvoke)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x4001e90;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayRenderingPid*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayRenderingPid*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___GetOverlayRenderingPid.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::OVR::OpenVR::__IVROverlay___GetOverlayRenderingPid::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::__IVROverlay___GetOverlayRenderingPid::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x4001f14;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayRenderingPid*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayRenderingPid*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVROverlay___GetOverlayRenderingPid* OVR::OpenVR::__IVROverlay___GetOverlayRenderingPid::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVROverlay___GetOverlayRenderingPid*>(object, method));
}
inline void OVR::OpenVR::__IVROverlay___GetOverlayRenderingPid::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayRenderingPid*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline uint32_t OVR::OpenVR::__IVROverlay___GetOverlayRenderingPid::Invoke(uint64_t ulOverlayHandle) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayRenderingPid*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method, ulOverlayHandle);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVROverlay___GetOverlayRenderingPid::BeginInvoke(uint64_t ulOverlayHandle, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayRenderingPid*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, ulOverlayHandle, callback, object);
}
inline uint32_t OVR::OpenVR::__IVROverlay___GetOverlayRenderingPid::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayRenderingPid*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::__IVROverlay___GetOverlayRenderingPid::__IVROverlay___GetOverlayRenderingPid() {}
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___SetOverlayFlag._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVROverlay___SetOverlayFlag::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::__IVROverlay___SetOverlayFlag::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x4001f3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayFlag*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___SetOverlayFlag.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::__IVROverlay___SetOverlayFlag::*)(
    uint64_t, ::OVR::OpenVR::VROverlayFlags, bool)>(&::OVR::OpenVR::__IVROverlay___SetOverlayFlag::Invoke)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x4001fc8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayFlag*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayFlag*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___SetOverlayFlag.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::__IVROverlay___SetOverlayFlag::*)(uint64_t, ::OVR::OpenVR::VROverlayFlags, bool, ::System::AsyncCallback*, ::System::Object*)>(
        &::OVR::OpenVR::__IVROverlay___SetOverlayFlag::BeginInvoke)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x4001fe0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayFlag*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayFlag*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___SetOverlayFlag.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::__IVROverlay___SetOverlayFlag::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::__IVROverlay___SetOverlayFlag::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x40020cc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayFlag*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayFlag*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVROverlay___SetOverlayFlag* OVR::OpenVR::__IVROverlay___SetOverlayFlag::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVROverlay___SetOverlayFlag*>(object, method));
}
inline void OVR::OpenVR::__IVROverlay___SetOverlayFlag::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayFlag*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::__IVROverlay___SetOverlayFlag::Invoke(uint64_t ulOverlayHandle, ::OVR::OpenVR::VROverlayFlags eOverlayFlag, bool bEnabled) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayFlag*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, ulOverlayHandle, eOverlayFlag, bEnabled);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVROverlay___SetOverlayFlag::BeginInvoke(uint64_t ulOverlayHandle, ::OVR::OpenVR::VROverlayFlags eOverlayFlag, bool bEnabled,
                                                                                       ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayFlag*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, ulOverlayHandle, eOverlayFlag, bEnabled, callback, object);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::__IVROverlay___SetOverlayFlag::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayFlag*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::__IVROverlay___SetOverlayFlag::__IVROverlay___SetOverlayFlag() {}
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___GetOverlayFlag._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVROverlay___GetOverlayFlag::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::__IVROverlay___GetOverlayFlag::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x40020f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayFlag*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___GetOverlayFlag.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::__IVROverlay___GetOverlayFlag::*)(
    uint64_t, ::OVR::OpenVR::VROverlayFlags, ByRef<bool>)>(&::OVR::OpenVR::__IVROverlay___GetOverlayFlag::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x4002180;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayFlag*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayFlag*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___GetOverlayFlag.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::__IVROverlay___GetOverlayFlag::*)(uint64_t, ::OVR::OpenVR::VROverlayFlags, ByRef<bool>, ::System::AsyncCallback*, ::System::Object*)>(
        &::OVR::OpenVR::__IVROverlay___GetOverlayFlag::BeginInvoke)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x4002194;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayFlag*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayFlag*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___GetOverlayFlag.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::__IVROverlay___GetOverlayFlag::*)(ByRef<bool>, ::System::IAsyncResult*)>(&::OVR::OpenVR::__IVROverlay___GetOverlayFlag::EndInvoke)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x4002280;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayFlag*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayFlag*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVROverlay___GetOverlayFlag* OVR::OpenVR::__IVROverlay___GetOverlayFlag::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVROverlay___GetOverlayFlag*>(object, method));
}
inline void OVR::OpenVR::__IVROverlay___GetOverlayFlag::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayFlag*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::__IVROverlay___GetOverlayFlag::Invoke(uint64_t ulOverlayHandle, ::OVR::OpenVR::VROverlayFlags eOverlayFlag, ByRef<bool> pbEnabled) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayFlag*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, ulOverlayHandle, eOverlayFlag, pbEnabled);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVROverlay___GetOverlayFlag::BeginInvoke(uint64_t ulOverlayHandle, ::OVR::OpenVR::VROverlayFlags eOverlayFlag, ByRef<bool> pbEnabled,
                                                                                       ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayFlag*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, ulOverlayHandle, eOverlayFlag, pbEnabled, callback, object);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::__IVROverlay___GetOverlayFlag::EndInvoke(ByRef<bool> pbEnabled, ::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayFlag*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, pbEnabled, result);
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::__IVROverlay___GetOverlayFlag::__IVROverlay___GetOverlayFlag() {}
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___SetOverlayColor._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVROverlay___SetOverlayColor::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::__IVROverlay___SetOverlayColor::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x40022ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayColor*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___SetOverlayColor.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::__IVROverlay___SetOverlayColor::*)(uint64_t, float_t, float_t, float_t)>(&::OVR::OpenVR::__IVROverlay___SetOverlayColor::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x4002338;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayColor*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayColor*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___SetOverlayColor.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::__IVROverlay___SetOverlayColor::*)(uint64_t, float_t, float_t, float_t, ::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::__IVROverlay___SetOverlayColor::BeginInvoke)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x400234c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayColor*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayColor*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___SetOverlayColor.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::__IVROverlay___SetOverlayColor::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::__IVROverlay___SetOverlayColor::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x4002434;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayColor*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayColor*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVROverlay___SetOverlayColor* OVR::OpenVR::__IVROverlay___SetOverlayColor::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVROverlay___SetOverlayColor*>(object, method));
}
inline void OVR::OpenVR::__IVROverlay___SetOverlayColor::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayColor*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::__IVROverlay___SetOverlayColor::Invoke(uint64_t ulOverlayHandle, float_t fRed, float_t fGreen, float_t fBlue) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayColor*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, ulOverlayHandle, fRed, fGreen, fBlue);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVROverlay___SetOverlayColor::BeginInvoke(uint64_t ulOverlayHandle, float_t fRed, float_t fGreen, float_t fBlue, ::System::AsyncCallback* callback,
                                                                                        ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayColor*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, ulOverlayHandle, fRed, fGreen, fBlue, callback, object);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::__IVROverlay___SetOverlayColor::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayColor*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::__IVROverlay___SetOverlayColor::__IVROverlay___SetOverlayColor() {}
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___GetOverlayColor._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVROverlay___GetOverlayColor::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::__IVROverlay___GetOverlayColor::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x400245c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayColor*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___GetOverlayColor.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::__IVROverlay___GetOverlayColor::*)(
    uint64_t, ByRef<float_t>, ByRef<float_t>, ByRef<float_t>)>(&::OVR::OpenVR::__IVROverlay___GetOverlayColor::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x40024e8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayColor*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayColor*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___GetOverlayColor.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::__IVROverlay___GetOverlayColor::*)(uint64_t, ByRef<float_t>, ByRef<float_t>, ByRef<float_t>, ::System::AsyncCallback*, ::System::Object*)>(
        &::OVR::OpenVR::__IVROverlay___GetOverlayColor::BeginInvoke)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x40024fc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayColor*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayColor*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___GetOverlayColor.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::__IVROverlay___GetOverlayColor::*)(
    ByRef<float_t>, ByRef<float_t>, ByRef<float_t>, ::System::IAsyncResult*)>(&::OVR::OpenVR::__IVROverlay___GetOverlayColor::EndInvoke)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x40025f4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayColor*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayColor*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVROverlay___GetOverlayColor* OVR::OpenVR::__IVROverlay___GetOverlayColor::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVROverlay___GetOverlayColor*>(object, method));
}
inline void OVR::OpenVR::__IVROverlay___GetOverlayColor::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayColor*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::__IVROverlay___GetOverlayColor::Invoke(uint64_t ulOverlayHandle, ByRef<float_t> pfRed, ByRef<float_t> pfGreen, ByRef<float_t> pfBlue) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayColor*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, ulOverlayHandle, pfRed, pfGreen, pfBlue);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVROverlay___GetOverlayColor::BeginInvoke(uint64_t ulOverlayHandle, ByRef<float_t> pfRed, ByRef<float_t> pfGreen, ByRef<float_t> pfBlue,
                                                                                        ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayColor*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, ulOverlayHandle, pfRed, pfGreen, pfBlue, callback, object);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::__IVROverlay___GetOverlayColor::EndInvoke(ByRef<float_t> pfRed, ByRef<float_t> pfGreen, ByRef<float_t> pfBlue, ::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayColor*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, pfRed, pfGreen, pfBlue, result);
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::__IVROverlay___GetOverlayColor::__IVROverlay___GetOverlayColor() {}
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___SetOverlayAlpha._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVROverlay___SetOverlayAlpha::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::__IVROverlay___SetOverlayAlpha::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x4002628;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayAlpha*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___SetOverlayAlpha.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::__IVROverlay___SetOverlayAlpha::*)(uint64_t, float_t)>(
    &::OVR::OpenVR::__IVROverlay___SetOverlayAlpha::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x40026b4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayAlpha*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayAlpha*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___SetOverlayAlpha.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::__IVROverlay___SetOverlayAlpha::*)(uint64_t, float_t, ::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::__IVROverlay___SetOverlayAlpha::BeginInvoke)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x40026c8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayAlpha*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayAlpha*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___SetOverlayAlpha.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::__IVROverlay___SetOverlayAlpha::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::__IVROverlay___SetOverlayAlpha::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x4002780;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayAlpha*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayAlpha*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVROverlay___SetOverlayAlpha* OVR::OpenVR::__IVROverlay___SetOverlayAlpha::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVROverlay___SetOverlayAlpha*>(object, method));
}
inline void OVR::OpenVR::__IVROverlay___SetOverlayAlpha::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayAlpha*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::__IVROverlay___SetOverlayAlpha::Invoke(uint64_t ulOverlayHandle, float_t fAlpha) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayAlpha*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, ulOverlayHandle, fAlpha);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVROverlay___SetOverlayAlpha::BeginInvoke(uint64_t ulOverlayHandle, float_t fAlpha, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayAlpha*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, ulOverlayHandle, fAlpha, callback, object);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::__IVROverlay___SetOverlayAlpha::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayAlpha*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::__IVROverlay___SetOverlayAlpha::__IVROverlay___SetOverlayAlpha() {}
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___GetOverlayAlpha._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVROverlay___GetOverlayAlpha::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::__IVROverlay___GetOverlayAlpha::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x40027a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayAlpha*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___GetOverlayAlpha.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::__IVROverlay___GetOverlayAlpha::*)(uint64_t, ByRef<float_t>)>(
    &::OVR::OpenVR::__IVROverlay___GetOverlayAlpha::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x4002834;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayAlpha*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayAlpha*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___GetOverlayAlpha.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::__IVROverlay___GetOverlayAlpha::*)(uint64_t, ByRef<float_t>, ::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::__IVROverlay___GetOverlayAlpha::BeginInvoke)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x4002848;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayAlpha*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayAlpha*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___GetOverlayAlpha.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::__IVROverlay___GetOverlayAlpha::*)(
    ByRef<float_t>, ::System::IAsyncResult*)>(&::OVR::OpenVR::__IVROverlay___GetOverlayAlpha::EndInvoke)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x4002904;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayAlpha*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayAlpha*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVROverlay___GetOverlayAlpha* OVR::OpenVR::__IVROverlay___GetOverlayAlpha::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVROverlay___GetOverlayAlpha*>(object, method));
}
inline void OVR::OpenVR::__IVROverlay___GetOverlayAlpha::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayAlpha*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::__IVROverlay___GetOverlayAlpha::Invoke(uint64_t ulOverlayHandle, ByRef<float_t> pfAlpha) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayAlpha*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, ulOverlayHandle, pfAlpha);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVROverlay___GetOverlayAlpha::BeginInvoke(uint64_t ulOverlayHandle, ByRef<float_t> pfAlpha, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayAlpha*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, ulOverlayHandle, pfAlpha, callback, object);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::__IVROverlay___GetOverlayAlpha::EndInvoke(ByRef<float_t> pfAlpha, ::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayAlpha*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, pfAlpha, result);
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::__IVROverlay___GetOverlayAlpha::__IVROverlay___GetOverlayAlpha() {}
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___SetOverlayTexelAspect._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVROverlay___SetOverlayTexelAspect::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::__IVROverlay___SetOverlayTexelAspect::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x4002930;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayTexelAspect*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___SetOverlayTexelAspect.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::__IVROverlay___SetOverlayTexelAspect::*)(uint64_t, float_t)>(
    &::OVR::OpenVR::__IVROverlay___SetOverlayTexelAspect::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x40029bc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayTexelAspect*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayTexelAspect*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___SetOverlayTexelAspect.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::__IVROverlay___SetOverlayTexelAspect::*)(uint64_t, float_t, ::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::__IVROverlay___SetOverlayTexelAspect::BeginInvoke)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x40029d0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayTexelAspect*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayTexelAspect*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___SetOverlayTexelAspect.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::__IVROverlay___SetOverlayTexelAspect::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::__IVROverlay___SetOverlayTexelAspect::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x4002a88;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayTexelAspect*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayTexelAspect*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVROverlay___SetOverlayTexelAspect* OVR::OpenVR::__IVROverlay___SetOverlayTexelAspect::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVROverlay___SetOverlayTexelAspect*>(object, method));
}
inline void OVR::OpenVR::__IVROverlay___SetOverlayTexelAspect::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayTexelAspect*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::__IVROverlay___SetOverlayTexelAspect::Invoke(uint64_t ulOverlayHandle, float_t fTexelAspect) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayTexelAspect*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, ulOverlayHandle, fTexelAspect);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVROverlay___SetOverlayTexelAspect::BeginInvoke(uint64_t ulOverlayHandle, float_t fTexelAspect, ::System::AsyncCallback* callback,
                                                                                              ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayTexelAspect*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, ulOverlayHandle, fTexelAspect, callback, object);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::__IVROverlay___SetOverlayTexelAspect::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayTexelAspect*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::__IVROverlay___SetOverlayTexelAspect::__IVROverlay___SetOverlayTexelAspect() {}
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___GetOverlayTexelAspect._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVROverlay___GetOverlayTexelAspect::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::__IVROverlay___GetOverlayTexelAspect::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x4002ab0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayTexelAspect*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___GetOverlayTexelAspect.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::__IVROverlay___GetOverlayTexelAspect::*)(uint64_t, ByRef<float_t>)>(
    &::OVR::OpenVR::__IVROverlay___GetOverlayTexelAspect::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x4002b3c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayTexelAspect*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayTexelAspect*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___GetOverlayTexelAspect.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::__IVROverlay___GetOverlayTexelAspect::*)(uint64_t, ByRef<float_t>, ::System::AsyncCallback*, ::System::Object*)>(
        &::OVR::OpenVR::__IVROverlay___GetOverlayTexelAspect::BeginInvoke)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x4002b50;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayTexelAspect*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayTexelAspect*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___GetOverlayTexelAspect.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::__IVROverlay___GetOverlayTexelAspect::*)(
    ByRef<float_t>, ::System::IAsyncResult*)>(&::OVR::OpenVR::__IVROverlay___GetOverlayTexelAspect::EndInvoke)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x4002c0c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayTexelAspect*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayTexelAspect*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVROverlay___GetOverlayTexelAspect* OVR::OpenVR::__IVROverlay___GetOverlayTexelAspect::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVROverlay___GetOverlayTexelAspect*>(object, method));
}
inline void OVR::OpenVR::__IVROverlay___GetOverlayTexelAspect::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayTexelAspect*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::__IVROverlay___GetOverlayTexelAspect::Invoke(uint64_t ulOverlayHandle, ByRef<float_t> pfTexelAspect) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayTexelAspect*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, ulOverlayHandle, pfTexelAspect);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVROverlay___GetOverlayTexelAspect::BeginInvoke(uint64_t ulOverlayHandle, ByRef<float_t> pfTexelAspect, ::System::AsyncCallback* callback,
                                                                                              ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayTexelAspect*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, ulOverlayHandle, pfTexelAspect, callback, object);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::__IVROverlay___GetOverlayTexelAspect::EndInvoke(ByRef<float_t> pfTexelAspect, ::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayTexelAspect*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, pfTexelAspect, result);
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::__IVROverlay___GetOverlayTexelAspect::__IVROverlay___GetOverlayTexelAspect() {}
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___SetOverlaySortOrder._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVROverlay___SetOverlaySortOrder::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::__IVROverlay___SetOverlaySortOrder::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x4002c38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlaySortOrder*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___SetOverlaySortOrder.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::__IVROverlay___SetOverlaySortOrder::*)(uint64_t, uint32_t)>(
    &::OVR::OpenVR::__IVROverlay___SetOverlaySortOrder::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x4002cc4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlaySortOrder*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlaySortOrder*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___SetOverlaySortOrder.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::__IVROverlay___SetOverlaySortOrder::*)(uint64_t, uint32_t, ::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::__IVROverlay___SetOverlaySortOrder::BeginInvoke)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x4002cd8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlaySortOrder*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlaySortOrder*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___SetOverlaySortOrder.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::__IVROverlay___SetOverlaySortOrder::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::__IVROverlay___SetOverlaySortOrder::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x4002d90;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlaySortOrder*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlaySortOrder*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVROverlay___SetOverlaySortOrder* OVR::OpenVR::__IVROverlay___SetOverlaySortOrder::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVROverlay___SetOverlaySortOrder*>(object, method));
}
inline void OVR::OpenVR::__IVROverlay___SetOverlaySortOrder::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlaySortOrder*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::__IVROverlay___SetOverlaySortOrder::Invoke(uint64_t ulOverlayHandle, uint32_t unSortOrder) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlaySortOrder*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, ulOverlayHandle, unSortOrder);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVROverlay___SetOverlaySortOrder::BeginInvoke(uint64_t ulOverlayHandle, uint32_t unSortOrder, ::System::AsyncCallback* callback,
                                                                                            ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlaySortOrder*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, ulOverlayHandle, unSortOrder, callback, object);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::__IVROverlay___SetOverlaySortOrder::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlaySortOrder*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::__IVROverlay___SetOverlaySortOrder::__IVROverlay___SetOverlaySortOrder() {}
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___GetOverlaySortOrder._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVROverlay___GetOverlaySortOrder::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::__IVROverlay___GetOverlaySortOrder::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x4002db8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlaySortOrder*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___GetOverlaySortOrder.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::__IVROverlay___GetOverlaySortOrder::*)(uint64_t, ByRef<uint32_t>)>(
    &::OVR::OpenVR::__IVROverlay___GetOverlaySortOrder::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x4002e44;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlaySortOrder*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlaySortOrder*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___GetOverlaySortOrder.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::__IVROverlay___GetOverlaySortOrder::*)(uint64_t, ByRef<uint32_t>, ::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::__IVROverlay___GetOverlaySortOrder::BeginInvoke)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x4002e58;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlaySortOrder*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlaySortOrder*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___GetOverlaySortOrder.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::__IVROverlay___GetOverlaySortOrder::*)(
    ByRef<uint32_t>, ::System::IAsyncResult*)>(&::OVR::OpenVR::__IVROverlay___GetOverlaySortOrder::EndInvoke)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x4002f14;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlaySortOrder*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlaySortOrder*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVROverlay___GetOverlaySortOrder* OVR::OpenVR::__IVROverlay___GetOverlaySortOrder::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVROverlay___GetOverlaySortOrder*>(object, method));
}
inline void OVR::OpenVR::__IVROverlay___GetOverlaySortOrder::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlaySortOrder*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::__IVROverlay___GetOverlaySortOrder::Invoke(uint64_t ulOverlayHandle, ByRef<uint32_t> punSortOrder) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlaySortOrder*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, ulOverlayHandle, punSortOrder);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVROverlay___GetOverlaySortOrder::BeginInvoke(uint64_t ulOverlayHandle, ByRef<uint32_t> punSortOrder, ::System::AsyncCallback* callback,
                                                                                            ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlaySortOrder*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, ulOverlayHandle, punSortOrder, callback, object);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::__IVROverlay___GetOverlaySortOrder::EndInvoke(ByRef<uint32_t> punSortOrder, ::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlaySortOrder*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, punSortOrder, result);
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::__IVROverlay___GetOverlaySortOrder::__IVROverlay___GetOverlaySortOrder() {}
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___SetOverlayWidthInMeters._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVROverlay___SetOverlayWidthInMeters::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::__IVROverlay___SetOverlayWidthInMeters::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x4002f40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayWidthInMeters*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___SetOverlayWidthInMeters.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::__IVROverlay___SetOverlayWidthInMeters::*)(uint64_t, float_t)>(
    &::OVR::OpenVR::__IVROverlay___SetOverlayWidthInMeters::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x4002fcc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayWidthInMeters*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayWidthInMeters*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___SetOverlayWidthInMeters.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::__IVROverlay___SetOverlayWidthInMeters::*)(uint64_t, float_t, ::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::__IVROverlay___SetOverlayWidthInMeters::BeginInvoke)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x4002fe0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayWidthInMeters*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayWidthInMeters*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___SetOverlayWidthInMeters.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::__IVROverlay___SetOverlayWidthInMeters::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::__IVROverlay___SetOverlayWidthInMeters::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x4003098;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayWidthInMeters*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayWidthInMeters*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVROverlay___SetOverlayWidthInMeters* OVR::OpenVR::__IVROverlay___SetOverlayWidthInMeters::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVROverlay___SetOverlayWidthInMeters*>(object, method));
}
inline void OVR::OpenVR::__IVROverlay___SetOverlayWidthInMeters::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayWidthInMeters*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::__IVROverlay___SetOverlayWidthInMeters::Invoke(uint64_t ulOverlayHandle, float_t fWidthInMeters) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayWidthInMeters*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, ulOverlayHandle, fWidthInMeters);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVROverlay___SetOverlayWidthInMeters::BeginInvoke(uint64_t ulOverlayHandle, float_t fWidthInMeters, ::System::AsyncCallback* callback,
                                                                                                ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayWidthInMeters*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, ulOverlayHandle, fWidthInMeters, callback, object);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::__IVROverlay___SetOverlayWidthInMeters::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayWidthInMeters*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::__IVROverlay___SetOverlayWidthInMeters::__IVROverlay___SetOverlayWidthInMeters() {}
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___GetOverlayWidthInMeters._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVROverlay___GetOverlayWidthInMeters::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::__IVROverlay___GetOverlayWidthInMeters::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x40030c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayWidthInMeters*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___GetOverlayWidthInMeters.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::__IVROverlay___GetOverlayWidthInMeters::*)(uint64_t, ByRef<float_t>)>(
    &::OVR::OpenVR::__IVROverlay___GetOverlayWidthInMeters::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x400314c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayWidthInMeters*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayWidthInMeters*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___GetOverlayWidthInMeters.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::__IVROverlay___GetOverlayWidthInMeters::*)(uint64_t, ByRef<float_t>, ::System::AsyncCallback*, ::System::Object*)>(
        &::OVR::OpenVR::__IVROverlay___GetOverlayWidthInMeters::BeginInvoke)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x4003160;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayWidthInMeters*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayWidthInMeters*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___GetOverlayWidthInMeters.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::__IVROverlay___GetOverlayWidthInMeters::*)(
    ByRef<float_t>, ::System::IAsyncResult*)>(&::OVR::OpenVR::__IVROverlay___GetOverlayWidthInMeters::EndInvoke)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x400321c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayWidthInMeters*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayWidthInMeters*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVROverlay___GetOverlayWidthInMeters* OVR::OpenVR::__IVROverlay___GetOverlayWidthInMeters::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVROverlay___GetOverlayWidthInMeters*>(object, method));
}
inline void OVR::OpenVR::__IVROverlay___GetOverlayWidthInMeters::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayWidthInMeters*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::__IVROverlay___GetOverlayWidthInMeters::Invoke(uint64_t ulOverlayHandle, ByRef<float_t> pfWidthInMeters) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayWidthInMeters*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, ulOverlayHandle, pfWidthInMeters);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVROverlay___GetOverlayWidthInMeters::BeginInvoke(uint64_t ulOverlayHandle, ByRef<float_t> pfWidthInMeters, ::System::AsyncCallback* callback,
                                                                                                ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayWidthInMeters*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, ulOverlayHandle, pfWidthInMeters, callback, object);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::__IVROverlay___GetOverlayWidthInMeters::EndInvoke(ByRef<float_t> pfWidthInMeters, ::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayWidthInMeters*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, pfWidthInMeters, result);
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::__IVROverlay___GetOverlayWidthInMeters::__IVROverlay___GetOverlayWidthInMeters() {}
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___SetOverlayAutoCurveDistanceRangeInMeters._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVROverlay___SetOverlayAutoCurveDistanceRangeInMeters::*)(
    ::System::Object*, ::System::IntPtr)>(&::OVR::OpenVR::__IVROverlay___SetOverlayAutoCurveDistanceRangeInMeters::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x4003248;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayAutoCurveDistanceRangeInMeters*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___SetOverlayAutoCurveDistanceRangeInMeters.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::__IVROverlay___SetOverlayAutoCurveDistanceRangeInMeters::*)(
    uint64_t, float_t, float_t)>(&::OVR::OpenVR::__IVROverlay___SetOverlayAutoCurveDistanceRangeInMeters::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x40032d4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayAutoCurveDistanceRangeInMeters*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayAutoCurveDistanceRangeInMeters*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___SetOverlayAutoCurveDistanceRangeInMeters.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::__IVROverlay___SetOverlayAutoCurveDistanceRangeInMeters::*)(uint64_t, float_t, float_t, ::System::AsyncCallback*, ::System::Object*)>(
        &::OVR::OpenVR::__IVROverlay___SetOverlayAutoCurveDistanceRangeInMeters::BeginInvoke)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x40032e8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayAutoCurveDistanceRangeInMeters*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayAutoCurveDistanceRangeInMeters*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___SetOverlayAutoCurveDistanceRangeInMeters.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::__IVROverlay___SetOverlayAutoCurveDistanceRangeInMeters::*)(
    ::System::IAsyncResult*)>(&::OVR::OpenVR::__IVROverlay___SetOverlayAutoCurveDistanceRangeInMeters::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x40033b4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayAutoCurveDistanceRangeInMeters*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayAutoCurveDistanceRangeInMeters*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVROverlay___SetOverlayAutoCurveDistanceRangeInMeters* OVR::OpenVR::__IVROverlay___SetOverlayAutoCurveDistanceRangeInMeters::New_ctor(::System::Object* object,
                                                                                                                                                              ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVROverlay___SetOverlayAutoCurveDistanceRangeInMeters*>(object, method));
}
inline void OVR::OpenVR::__IVROverlay___SetOverlayAutoCurveDistanceRangeInMeters::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayAutoCurveDistanceRangeInMeters*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::__IVROverlay___SetOverlayAutoCurveDistanceRangeInMeters::Invoke(uint64_t ulOverlayHandle, float_t fMinDistanceInMeters,
                                                                                                                   float_t fMaxDistanceInMeters) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayAutoCurveDistanceRangeInMeters*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, ulOverlayHandle, fMinDistanceInMeters, fMaxDistanceInMeters);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVROverlay___SetOverlayAutoCurveDistanceRangeInMeters::BeginInvoke(uint64_t ulOverlayHandle, float_t fMinDistanceInMeters, float_t fMaxDistanceInMeters,
                                                                                                                 ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayAutoCurveDistanceRangeInMeters*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, ulOverlayHandle, fMinDistanceInMeters, fMaxDistanceInMeters, callback, object);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::__IVROverlay___SetOverlayAutoCurveDistanceRangeInMeters::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayAutoCurveDistanceRangeInMeters*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::__IVROverlay___SetOverlayAutoCurveDistanceRangeInMeters::__IVROverlay___SetOverlayAutoCurveDistanceRangeInMeters() {}
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___GetOverlayAutoCurveDistanceRangeInMeters._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVROverlay___GetOverlayAutoCurveDistanceRangeInMeters::*)(
    ::System::Object*, ::System::IntPtr)>(&::OVR::OpenVR::__IVROverlay___GetOverlayAutoCurveDistanceRangeInMeters::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x40033dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayAutoCurveDistanceRangeInMeters*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___GetOverlayAutoCurveDistanceRangeInMeters.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::__IVROverlay___GetOverlayAutoCurveDistanceRangeInMeters::*)(
    uint64_t, ByRef<float_t>, ByRef<float_t>)>(&::OVR::OpenVR::__IVROverlay___GetOverlayAutoCurveDistanceRangeInMeters::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x4003468;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayAutoCurveDistanceRangeInMeters*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayAutoCurveDistanceRangeInMeters*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___GetOverlayAutoCurveDistanceRangeInMeters.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::__IVROverlay___GetOverlayAutoCurveDistanceRangeInMeters::*)(uint64_t, ByRef<float_t>, ByRef<float_t>, ::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::__IVROverlay___GetOverlayAutoCurveDistanceRangeInMeters::BeginInvoke)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x400347c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayAutoCurveDistanceRangeInMeters*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayAutoCurveDistanceRangeInMeters*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___GetOverlayAutoCurveDistanceRangeInMeters.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::__IVROverlay___GetOverlayAutoCurveDistanceRangeInMeters::*)(
    ByRef<float_t>, ByRef<float_t>, ::System::IAsyncResult*)>(&::OVR::OpenVR::__IVROverlay___GetOverlayAutoCurveDistanceRangeInMeters::EndInvoke)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x4003554;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayAutoCurveDistanceRangeInMeters*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayAutoCurveDistanceRangeInMeters*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVROverlay___GetOverlayAutoCurveDistanceRangeInMeters* OVR::OpenVR::__IVROverlay___GetOverlayAutoCurveDistanceRangeInMeters::New_ctor(::System::Object* object,
                                                                                                                                                              ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVROverlay___GetOverlayAutoCurveDistanceRangeInMeters*>(object, method));
}
inline void OVR::OpenVR::__IVROverlay___GetOverlayAutoCurveDistanceRangeInMeters::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayAutoCurveDistanceRangeInMeters*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::__IVROverlay___GetOverlayAutoCurveDistanceRangeInMeters::Invoke(uint64_t ulOverlayHandle, ByRef<float_t> pfMinDistanceInMeters,
                                                                                                                   ByRef<float_t> pfMaxDistanceInMeters) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayAutoCurveDistanceRangeInMeters*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, ulOverlayHandle, pfMinDistanceInMeters, pfMaxDistanceInMeters);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVROverlay___GetOverlayAutoCurveDistanceRangeInMeters::BeginInvoke(uint64_t ulOverlayHandle, ByRef<float_t> pfMinDistanceInMeters,
                                                                                                                 ByRef<float_t> pfMaxDistanceInMeters, ::System::AsyncCallback* callback,
                                                                                                                 ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayAutoCurveDistanceRangeInMeters*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, ulOverlayHandle, pfMinDistanceInMeters, pfMaxDistanceInMeters, callback, object);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::__IVROverlay___GetOverlayAutoCurveDistanceRangeInMeters::EndInvoke(ByRef<float_t> pfMinDistanceInMeters, ByRef<float_t> pfMaxDistanceInMeters,
                                                                                                                      ::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayAutoCurveDistanceRangeInMeters*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, pfMinDistanceInMeters, pfMaxDistanceInMeters, result);
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::__IVROverlay___GetOverlayAutoCurveDistanceRangeInMeters::__IVROverlay___GetOverlayAutoCurveDistanceRangeInMeters() {}
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___SetOverlayTextureColorSpace._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVROverlay___SetOverlayTextureColorSpace::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::__IVROverlay___SetOverlayTextureColorSpace::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x4003588;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayTextureColorSpace*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___SetOverlayTextureColorSpace.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::__IVROverlay___SetOverlayTextureColorSpace::*)(
    uint64_t, ::OVR::OpenVR::EColorSpace)>(&::OVR::OpenVR::__IVROverlay___SetOverlayTextureColorSpace::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x4003614;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayTextureColorSpace*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayTextureColorSpace*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___SetOverlayTextureColorSpace.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::__IVROverlay___SetOverlayTextureColorSpace::*)(uint64_t, ::OVR::OpenVR::EColorSpace, ::System::AsyncCallback*, ::System::Object*)>(
        &::OVR::OpenVR::__IVROverlay___SetOverlayTextureColorSpace::BeginInvoke)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x4003628;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayTextureColorSpace*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayTextureColorSpace*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___SetOverlayTextureColorSpace.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::__IVROverlay___SetOverlayTextureColorSpace::*)(
    ::System::IAsyncResult*)>(&::OVR::OpenVR::__IVROverlay___SetOverlayTextureColorSpace::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x40036e0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayTextureColorSpace*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayTextureColorSpace*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVROverlay___SetOverlayTextureColorSpace* OVR::OpenVR::__IVROverlay___SetOverlayTextureColorSpace::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVROverlay___SetOverlayTextureColorSpace*>(object, method));
}
inline void OVR::OpenVR::__IVROverlay___SetOverlayTextureColorSpace::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayTextureColorSpace*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::__IVROverlay___SetOverlayTextureColorSpace::Invoke(uint64_t ulOverlayHandle, ::OVR::OpenVR::EColorSpace eTextureColorSpace) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayTextureColorSpace*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, ulOverlayHandle, eTextureColorSpace);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVROverlay___SetOverlayTextureColorSpace::BeginInvoke(uint64_t ulOverlayHandle, ::OVR::OpenVR::EColorSpace eTextureColorSpace,
                                                                                                    ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayTextureColorSpace*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, ulOverlayHandle, eTextureColorSpace, callback, object);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::__IVROverlay___SetOverlayTextureColorSpace::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayTextureColorSpace*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::__IVROverlay___SetOverlayTextureColorSpace::__IVROverlay___SetOverlayTextureColorSpace() {}
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___GetOverlayTextureColorSpace._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVROverlay___GetOverlayTextureColorSpace::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::__IVROverlay___GetOverlayTextureColorSpace::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x4003708;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayTextureColorSpace*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___GetOverlayTextureColorSpace.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::__IVROverlay___GetOverlayTextureColorSpace::*)(
    uint64_t, ByRef<::OVR::OpenVR::EColorSpace>)>(&::OVR::OpenVR::__IVROverlay___GetOverlayTextureColorSpace::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x4003794;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayTextureColorSpace*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayTextureColorSpace*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___GetOverlayTextureColorSpace.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::__IVROverlay___GetOverlayTextureColorSpace::*)(uint64_t, ByRef<::OVR::OpenVR::EColorSpace>, ::System::AsyncCallback*, ::System::Object*)>(
        &::OVR::OpenVR::__IVROverlay___GetOverlayTextureColorSpace::BeginInvoke)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x40037a8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayTextureColorSpace*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayTextureColorSpace*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___GetOverlayTextureColorSpace.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::__IVROverlay___GetOverlayTextureColorSpace::*)(
    ByRef<::OVR::OpenVR::EColorSpace>, ::System::IAsyncResult*)>(&::OVR::OpenVR::__IVROverlay___GetOverlayTextureColorSpace::EndInvoke)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x4003864;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayTextureColorSpace*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayTextureColorSpace*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVROverlay___GetOverlayTextureColorSpace* OVR::OpenVR::__IVROverlay___GetOverlayTextureColorSpace::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVROverlay___GetOverlayTextureColorSpace*>(object, method));
}
inline void OVR::OpenVR::__IVROverlay___GetOverlayTextureColorSpace::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayTextureColorSpace*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::__IVROverlay___GetOverlayTextureColorSpace::Invoke(uint64_t ulOverlayHandle, ByRef<::OVR::OpenVR::EColorSpace> peTextureColorSpace) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayTextureColorSpace*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, ulOverlayHandle, peTextureColorSpace);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVROverlay___GetOverlayTextureColorSpace::BeginInvoke(uint64_t ulOverlayHandle, ByRef<::OVR::OpenVR::EColorSpace> peTextureColorSpace,
                                                                                                    ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayTextureColorSpace*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, ulOverlayHandle, peTextureColorSpace, callback, object);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::__IVROverlay___GetOverlayTextureColorSpace::EndInvoke(ByRef<::OVR::OpenVR::EColorSpace> peTextureColorSpace, ::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayTextureColorSpace*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, peTextureColorSpace, result);
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::__IVROverlay___GetOverlayTextureColorSpace::__IVROverlay___GetOverlayTextureColorSpace() {}
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___SetOverlayTextureBounds._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVROverlay___SetOverlayTextureBounds::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::__IVROverlay___SetOverlayTextureBounds::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x4003890;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayTextureBounds*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___SetOverlayTextureBounds.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::__IVROverlay___SetOverlayTextureBounds::*)(
    uint64_t, ByRef<::OVR::OpenVR::VRTextureBounds_t>)>(&::OVR::OpenVR::__IVROverlay___SetOverlayTextureBounds::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x400391c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayTextureBounds*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayTextureBounds*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___SetOverlayTextureBounds.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::__IVROverlay___SetOverlayTextureBounds::*)(uint64_t, ByRef<::OVR::OpenVR::VRTextureBounds_t>, ::System::AsyncCallback*, ::System::Object*)>(
        &::OVR::OpenVR::__IVROverlay___SetOverlayTextureBounds::BeginInvoke)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x4003930;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayTextureBounds*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayTextureBounds*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___SetOverlayTextureBounds.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::__IVROverlay___SetOverlayTextureBounds::*)(
    ByRef<::OVR::OpenVR::VRTextureBounds_t>, ::System::IAsyncResult*)>(&::OVR::OpenVR::__IVROverlay___SetOverlayTextureBounds::EndInvoke)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x40039ec;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayTextureBounds*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayTextureBounds*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVROverlay___SetOverlayTextureBounds* OVR::OpenVR::__IVROverlay___SetOverlayTextureBounds::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVROverlay___SetOverlayTextureBounds*>(object, method));
}
inline void OVR::OpenVR::__IVROverlay___SetOverlayTextureBounds::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayTextureBounds*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::__IVROverlay___SetOverlayTextureBounds::Invoke(uint64_t ulOverlayHandle, ByRef<::OVR::OpenVR::VRTextureBounds_t> pOverlayTextureBounds) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayTextureBounds*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, ulOverlayHandle, pOverlayTextureBounds);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVROverlay___SetOverlayTextureBounds::BeginInvoke(uint64_t ulOverlayHandle, ByRef<::OVR::OpenVR::VRTextureBounds_t> pOverlayTextureBounds,
                                                                                                ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayTextureBounds*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, ulOverlayHandle, pOverlayTextureBounds, callback, object);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::__IVROverlay___SetOverlayTextureBounds::EndInvoke(ByRef<::OVR::OpenVR::VRTextureBounds_t> pOverlayTextureBounds, ::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayTextureBounds*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, pOverlayTextureBounds, result);
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::__IVROverlay___SetOverlayTextureBounds::__IVROverlay___SetOverlayTextureBounds() {}
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___GetOverlayTextureBounds._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVROverlay___GetOverlayTextureBounds::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::__IVROverlay___GetOverlayTextureBounds::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x4003a18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayTextureBounds*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___GetOverlayTextureBounds.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::__IVROverlay___GetOverlayTextureBounds::*)(
    uint64_t, ByRef<::OVR::OpenVR::VRTextureBounds_t>)>(&::OVR::OpenVR::__IVROverlay___GetOverlayTextureBounds::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x4003aa4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayTextureBounds*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayTextureBounds*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___GetOverlayTextureBounds.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::__IVROverlay___GetOverlayTextureBounds::*)(uint64_t, ByRef<::OVR::OpenVR::VRTextureBounds_t>, ::System::AsyncCallback*, ::System::Object*)>(
        &::OVR::OpenVR::__IVROverlay___GetOverlayTextureBounds::BeginInvoke)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x4003ab8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayTextureBounds*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayTextureBounds*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___GetOverlayTextureBounds.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::__IVROverlay___GetOverlayTextureBounds::*)(
    ByRef<::OVR::OpenVR::VRTextureBounds_t>, ::System::IAsyncResult*)>(&::OVR::OpenVR::__IVROverlay___GetOverlayTextureBounds::EndInvoke)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x4003b74;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayTextureBounds*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayTextureBounds*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVROverlay___GetOverlayTextureBounds* OVR::OpenVR::__IVROverlay___GetOverlayTextureBounds::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVROverlay___GetOverlayTextureBounds*>(object, method));
}
inline void OVR::OpenVR::__IVROverlay___GetOverlayTextureBounds::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayTextureBounds*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::__IVROverlay___GetOverlayTextureBounds::Invoke(uint64_t ulOverlayHandle, ByRef<::OVR::OpenVR::VRTextureBounds_t> pOverlayTextureBounds) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayTextureBounds*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, ulOverlayHandle, pOverlayTextureBounds);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVROverlay___GetOverlayTextureBounds::BeginInvoke(uint64_t ulOverlayHandle, ByRef<::OVR::OpenVR::VRTextureBounds_t> pOverlayTextureBounds,
                                                                                                ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayTextureBounds*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, ulOverlayHandle, pOverlayTextureBounds, callback, object);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::__IVROverlay___GetOverlayTextureBounds::EndInvoke(ByRef<::OVR::OpenVR::VRTextureBounds_t> pOverlayTextureBounds, ::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayTextureBounds*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, pOverlayTextureBounds, result);
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::__IVROverlay___GetOverlayTextureBounds::__IVROverlay___GetOverlayTextureBounds() {}
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___GetOverlayRenderModel._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVROverlay___GetOverlayRenderModel::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::__IVROverlay___GetOverlayRenderModel::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x4003ba0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayRenderModel*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___GetOverlayRenderModel.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::OVR::OpenVR::__IVROverlay___GetOverlayRenderModel::*)(
    uint64_t, ::System::Text::StringBuilder*, uint32_t, ByRef<::OVR::OpenVR::HmdColor_t>, ByRef<::OVR::OpenVR::EVROverlayError>)>(&::OVR::OpenVR::__IVROverlay___GetOverlayRenderModel::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x4003c2c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayRenderModel*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayRenderModel*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___GetOverlayRenderModel.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::__IVROverlay___GetOverlayRenderModel::*)(uint64_t, ::System::Text::StringBuilder*, uint32_t, ByRef<::OVR::OpenVR::HmdColor_t>, ByRef<::OVR::OpenVR::EVROverlayError>,
                                                            ::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::__IVROverlay___GetOverlayRenderModel::BeginInvoke)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x4003c40;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayRenderModel*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayRenderModel*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___GetOverlayRenderModel.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::OVR::OpenVR::__IVROverlay___GetOverlayRenderModel::*)(
    ByRef<::OVR::OpenVR::HmdColor_t>, ByRef<::OVR::OpenVR::EVROverlayError>, ::System::IAsyncResult*)>(&::OVR::OpenVR::__IVROverlay___GetOverlayRenderModel::EndInvoke)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x4003d6c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayRenderModel*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayRenderModel*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVROverlay___GetOverlayRenderModel* OVR::OpenVR::__IVROverlay___GetOverlayRenderModel::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVROverlay___GetOverlayRenderModel*>(object, method));
}
inline void OVR::OpenVR::__IVROverlay___GetOverlayRenderModel::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayRenderModel*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline uint32_t OVR::OpenVR::__IVROverlay___GetOverlayRenderModel::Invoke(uint64_t ulOverlayHandle, ::System::Text::StringBuilder* pchValue, uint32_t unBufferSize,
                                                                          ByRef<::OVR::OpenVR::HmdColor_t> pColor, ByRef<::OVR::OpenVR::EVROverlayError> pError) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayRenderModel*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method, ulOverlayHandle, pchValue, unBufferSize, pColor, pError);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVROverlay___GetOverlayRenderModel::BeginInvoke(uint64_t ulOverlayHandle, ::System::Text::StringBuilder* pchValue, uint32_t unBufferSize,
                                                                                              ByRef<::OVR::OpenVR::HmdColor_t> pColor, ByRef<::OVR::OpenVR::EVROverlayError> pError,
                                                                                              ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayRenderModel*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, ulOverlayHandle, pchValue, unBufferSize, pColor, pError, callback, object);
}
inline uint32_t OVR::OpenVR::__IVROverlay___GetOverlayRenderModel::EndInvoke(ByRef<::OVR::OpenVR::HmdColor_t> pColor, ByRef<::OVR::OpenVR::EVROverlayError> pError, ::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayRenderModel*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method, pColor, pError, result);
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::__IVROverlay___GetOverlayRenderModel::__IVROverlay___GetOverlayRenderModel() {}
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___SetOverlayRenderModel._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVROverlay___SetOverlayRenderModel::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::__IVROverlay___SetOverlayRenderModel::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x4003da0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayRenderModel*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___SetOverlayRenderModel.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::__IVROverlay___SetOverlayRenderModel::*)(
    uint64_t, ::StringW, ByRef<::OVR::OpenVR::HmdColor_t>)>(&::OVR::OpenVR::__IVROverlay___SetOverlayRenderModel::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x4003e2c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayRenderModel*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayRenderModel*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___SetOverlayRenderModel.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::__IVROverlay___SetOverlayRenderModel::*)(uint64_t, ::StringW, ByRef<::OVR::OpenVR::HmdColor_t>, ::System::AsyncCallback*, ::System::Object*)>(
        &::OVR::OpenVR::__IVROverlay___SetOverlayRenderModel::BeginInvoke)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x4003e40;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayRenderModel*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayRenderModel*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___SetOverlayRenderModel.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::__IVROverlay___SetOverlayRenderModel::*)(
    ByRef<::OVR::OpenVR::HmdColor_t>, ::System::IAsyncResult*)>(&::OVR::OpenVR::__IVROverlay___SetOverlayRenderModel::EndInvoke)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x4003f04;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayRenderModel*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayRenderModel*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVROverlay___SetOverlayRenderModel* OVR::OpenVR::__IVROverlay___SetOverlayRenderModel::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVROverlay___SetOverlayRenderModel*>(object, method));
}
inline void OVR::OpenVR::__IVROverlay___SetOverlayRenderModel::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayRenderModel*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::__IVROverlay___SetOverlayRenderModel::Invoke(uint64_t ulOverlayHandle, ::StringW pchRenderModel, ByRef<::OVR::OpenVR::HmdColor_t> pColor) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayRenderModel*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, ulOverlayHandle, pchRenderModel, pColor);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVROverlay___SetOverlayRenderModel::BeginInvoke(uint64_t ulOverlayHandle, ::StringW pchRenderModel, ByRef<::OVR::OpenVR::HmdColor_t> pColor,
                                                                                              ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayRenderModel*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, ulOverlayHandle, pchRenderModel, pColor, callback, object);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::__IVROverlay___SetOverlayRenderModel::EndInvoke(ByRef<::OVR::OpenVR::HmdColor_t> pColor, ::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayRenderModel*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, pColor, result);
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::__IVROverlay___SetOverlayRenderModel::__IVROverlay___SetOverlayRenderModel() {}
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___GetOverlayTransformType._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVROverlay___GetOverlayTransformType::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::__IVROverlay___GetOverlayTransformType::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x4003f30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayTransformType*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___GetOverlayTransformType.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::__IVROverlay___GetOverlayTransformType::*)(
    uint64_t, ByRef<::OVR::OpenVR::VROverlayTransformType>)>(&::OVR::OpenVR::__IVROverlay___GetOverlayTransformType::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x4003fbc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayTransformType*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayTransformType*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___GetOverlayTransformType.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::__IVROverlay___GetOverlayTransformType::*)(uint64_t, ByRef<::OVR::OpenVR::VROverlayTransformType>, ::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::__IVROverlay___GetOverlayTransformType::BeginInvoke)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x4003fd0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayTransformType*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayTransformType*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___GetOverlayTransformType.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::__IVROverlay___GetOverlayTransformType::*)(
    ByRef<::OVR::OpenVR::VROverlayTransformType>, ::System::IAsyncResult*)>(&::OVR::OpenVR::__IVROverlay___GetOverlayTransformType::EndInvoke)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x400408c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayTransformType*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayTransformType*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVROverlay___GetOverlayTransformType* OVR::OpenVR::__IVROverlay___GetOverlayTransformType::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVROverlay___GetOverlayTransformType*>(object, method));
}
inline void OVR::OpenVR::__IVROverlay___GetOverlayTransformType::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayTransformType*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::__IVROverlay___GetOverlayTransformType::Invoke(uint64_t ulOverlayHandle, ByRef<::OVR::OpenVR::VROverlayTransformType> peTransformType) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayTransformType*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, ulOverlayHandle, peTransformType);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVROverlay___GetOverlayTransformType::BeginInvoke(uint64_t ulOverlayHandle, ByRef<::OVR::OpenVR::VROverlayTransformType> peTransformType,
                                                                                                ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayTransformType*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, ulOverlayHandle, peTransformType, callback, object);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::__IVROverlay___GetOverlayTransformType::EndInvoke(ByRef<::OVR::OpenVR::VROverlayTransformType> peTransformType, ::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayTransformType*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, peTransformType, result);
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::__IVROverlay___GetOverlayTransformType::__IVROverlay___GetOverlayTransformType() {}
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___SetOverlayTransformAbsolute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVROverlay___SetOverlayTransformAbsolute::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::__IVROverlay___SetOverlayTransformAbsolute::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x40040b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayTransformAbsolute*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___SetOverlayTransformAbsolute.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::__IVROverlay___SetOverlayTransformAbsolute::*)(
    uint64_t, ::OVR::OpenVR::ETrackingUniverseOrigin, ByRef<::OVR::OpenVR::HmdMatrix34_t>)>(&::OVR::OpenVR::__IVROverlay___SetOverlayTransformAbsolute::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x4004144;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayTransformAbsolute*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayTransformAbsolute*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___SetOverlayTransformAbsolute.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::__IVROverlay___SetOverlayTransformAbsolute::*)(uint64_t, ::OVR::OpenVR::ETrackingUniverseOrigin, ByRef<::OVR::OpenVR::HmdMatrix34_t>, ::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::__IVROverlay___SetOverlayTransformAbsolute::BeginInvoke)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x4004158;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayTransformAbsolute*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayTransformAbsolute*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___SetOverlayTransformAbsolute.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::__IVROverlay___SetOverlayTransformAbsolute::*)(
    ByRef<::OVR::OpenVR::HmdMatrix34_t>, ::System::IAsyncResult*)>(&::OVR::OpenVR::__IVROverlay___SetOverlayTransformAbsolute::EndInvoke)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x4004244;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayTransformAbsolute*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayTransformAbsolute*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVROverlay___SetOverlayTransformAbsolute* OVR::OpenVR::__IVROverlay___SetOverlayTransformAbsolute::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVROverlay___SetOverlayTransformAbsolute*>(object, method));
}
inline void OVR::OpenVR::__IVROverlay___SetOverlayTransformAbsolute::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayTransformAbsolute*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::__IVROverlay___SetOverlayTransformAbsolute::Invoke(uint64_t ulOverlayHandle, ::OVR::OpenVR::ETrackingUniverseOrigin eTrackingOrigin,
                                                                                                      ByRef<::OVR::OpenVR::HmdMatrix34_t> pmatTrackingOriginToOverlayTransform) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayTransformAbsolute*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, ulOverlayHandle, eTrackingOrigin, pmatTrackingOriginToOverlayTransform);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVROverlay___SetOverlayTransformAbsolute::BeginInvoke(uint64_t ulOverlayHandle, ::OVR::OpenVR::ETrackingUniverseOrigin eTrackingOrigin,
                                                                                                    ByRef<::OVR::OpenVR::HmdMatrix34_t> pmatTrackingOriginToOverlayTransform,
                                                                                                    ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayTransformAbsolute*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, ulOverlayHandle, eTrackingOrigin, pmatTrackingOriginToOverlayTransform, callback, object);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::__IVROverlay___SetOverlayTransformAbsolute::EndInvoke(ByRef<::OVR::OpenVR::HmdMatrix34_t> pmatTrackingOriginToOverlayTransform,
                                                                                                         ::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayTransformAbsolute*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, pmatTrackingOriginToOverlayTransform, result);
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::__IVROverlay___SetOverlayTransformAbsolute::__IVROverlay___SetOverlayTransformAbsolute() {}
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___GetOverlayTransformAbsolute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVROverlay___GetOverlayTransformAbsolute::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::__IVROverlay___GetOverlayTransformAbsolute::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x4004270;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayTransformAbsolute*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___GetOverlayTransformAbsolute.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::__IVROverlay___GetOverlayTransformAbsolute::*)(
    uint64_t, ByRef<::OVR::OpenVR::ETrackingUniverseOrigin>, ByRef<::OVR::OpenVR::HmdMatrix34_t>)>(&::OVR::OpenVR::__IVROverlay___GetOverlayTransformAbsolute::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x40042fc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayTransformAbsolute*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayTransformAbsolute*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___GetOverlayTransformAbsolute.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::__IVROverlay___GetOverlayTransformAbsolute::*)(uint64_t, ByRef<::OVR::OpenVR::ETrackingUniverseOrigin>, ByRef<::OVR::OpenVR::HmdMatrix34_t>, ::System::AsyncCallback*,
                                                                  ::System::Object*)>(&::OVR::OpenVR::__IVROverlay___GetOverlayTransformAbsolute::BeginInvoke)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x4004310;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayTransformAbsolute*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayTransformAbsolute*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___GetOverlayTransformAbsolute.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::__IVROverlay___GetOverlayTransformAbsolute::*)(
    ByRef<::OVR::OpenVR::ETrackingUniverseOrigin>, ByRef<::OVR::OpenVR::HmdMatrix34_t>, ::System::IAsyncResult*)>(&::OVR::OpenVR::__IVROverlay___GetOverlayTransformAbsolute::EndInvoke)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x4004400;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayTransformAbsolute*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayTransformAbsolute*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVROverlay___GetOverlayTransformAbsolute* OVR::OpenVR::__IVROverlay___GetOverlayTransformAbsolute::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVROverlay___GetOverlayTransformAbsolute*>(object, method));
}
inline void OVR::OpenVR::__IVROverlay___GetOverlayTransformAbsolute::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayTransformAbsolute*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::__IVROverlay___GetOverlayTransformAbsolute::Invoke(uint64_t ulOverlayHandle, ByRef<::OVR::OpenVR::ETrackingUniverseOrigin> peTrackingOrigin,
                                                                                                      ByRef<::OVR::OpenVR::HmdMatrix34_t> pmatTrackingOriginToOverlayTransform) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayTransformAbsolute*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, ulOverlayHandle, peTrackingOrigin, pmatTrackingOriginToOverlayTransform);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVROverlay___GetOverlayTransformAbsolute::BeginInvoke(uint64_t ulOverlayHandle, ByRef<::OVR::OpenVR::ETrackingUniverseOrigin> peTrackingOrigin,
                                                                                                    ByRef<::OVR::OpenVR::HmdMatrix34_t> pmatTrackingOriginToOverlayTransform,
                                                                                                    ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayTransformAbsolute*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, ulOverlayHandle, peTrackingOrigin, pmatTrackingOriginToOverlayTransform, callback, object);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::__IVROverlay___GetOverlayTransformAbsolute::EndInvoke(ByRef<::OVR::OpenVR::ETrackingUniverseOrigin> peTrackingOrigin,
                                                                                                         ByRef<::OVR::OpenVR::HmdMatrix34_t> pmatTrackingOriginToOverlayTransform,
                                                                                                         ::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayTransformAbsolute*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, peTrackingOrigin, pmatTrackingOriginToOverlayTransform, result);
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::__IVROverlay___GetOverlayTransformAbsolute::__IVROverlay___GetOverlayTransformAbsolute() {}
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___SetOverlayTransformTrackedDeviceRelative._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVROverlay___SetOverlayTransformTrackedDeviceRelative::*)(
    ::System::Object*, ::System::IntPtr)>(&::OVR::OpenVR::__IVROverlay___SetOverlayTransformTrackedDeviceRelative::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x4004434;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayTransformTrackedDeviceRelative*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___SetOverlayTransformTrackedDeviceRelative.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::__IVROverlay___SetOverlayTransformTrackedDeviceRelative::*)(
    uint64_t, uint32_t, ByRef<::OVR::OpenVR::HmdMatrix34_t>)>(&::OVR::OpenVR::__IVROverlay___SetOverlayTransformTrackedDeviceRelative::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x40044c0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayTransformTrackedDeviceRelative*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayTransformTrackedDeviceRelative*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___SetOverlayTransformTrackedDeviceRelative.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::__IVROverlay___SetOverlayTransformTrackedDeviceRelative::*)(uint64_t, uint32_t, ByRef<::OVR::OpenVR::HmdMatrix34_t>, ::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::__IVROverlay___SetOverlayTransformTrackedDeviceRelative::BeginInvoke)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x40044d4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayTransformTrackedDeviceRelative*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayTransformTrackedDeviceRelative*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___SetOverlayTransformTrackedDeviceRelative.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::__IVROverlay___SetOverlayTransformTrackedDeviceRelative::*)(
    ByRef<::OVR::OpenVR::HmdMatrix34_t>, ::System::IAsyncResult*)>(&::OVR::OpenVR::__IVROverlay___SetOverlayTransformTrackedDeviceRelative::EndInvoke)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x40045c0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayTransformTrackedDeviceRelative*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayTransformTrackedDeviceRelative*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVROverlay___SetOverlayTransformTrackedDeviceRelative* OVR::OpenVR::__IVROverlay___SetOverlayTransformTrackedDeviceRelative::New_ctor(::System::Object* object,
                                                                                                                                                              ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVROverlay___SetOverlayTransformTrackedDeviceRelative*>(object, method));
}
inline void OVR::OpenVR::__IVROverlay___SetOverlayTransformTrackedDeviceRelative::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayTransformTrackedDeviceRelative*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::__IVROverlay___SetOverlayTransformTrackedDeviceRelative::Invoke(uint64_t ulOverlayHandle, uint32_t unTrackedDevice,
                                                                                                                   ByRef<::OVR::OpenVR::HmdMatrix34_t> pmatTrackedDeviceToOverlayTransform) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayTransformTrackedDeviceRelative*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, ulOverlayHandle, unTrackedDevice, pmatTrackedDeviceToOverlayTransform);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVROverlay___SetOverlayTransformTrackedDeviceRelative::BeginInvoke(uint64_t ulOverlayHandle, uint32_t unTrackedDevice,
                                                                                                                 ByRef<::OVR::OpenVR::HmdMatrix34_t> pmatTrackedDeviceToOverlayTransform,
                                                                                                                 ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayTransformTrackedDeviceRelative*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, ulOverlayHandle, unTrackedDevice, pmatTrackedDeviceToOverlayTransform, callback, object);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::__IVROverlay___SetOverlayTransformTrackedDeviceRelative::EndInvoke(ByRef<::OVR::OpenVR::HmdMatrix34_t> pmatTrackedDeviceToOverlayTransform,
                                                                                                                      ::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayTransformTrackedDeviceRelative*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, pmatTrackedDeviceToOverlayTransform, result);
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::__IVROverlay___SetOverlayTransformTrackedDeviceRelative::__IVROverlay___SetOverlayTransformTrackedDeviceRelative() {}
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___GetOverlayTransformTrackedDeviceRelative._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVROverlay___GetOverlayTransformTrackedDeviceRelative::*)(
    ::System::Object*, ::System::IntPtr)>(&::OVR::OpenVR::__IVROverlay___GetOverlayTransformTrackedDeviceRelative::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x40045ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayTransformTrackedDeviceRelative*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___GetOverlayTransformTrackedDeviceRelative.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::__IVROverlay___GetOverlayTransformTrackedDeviceRelative::*)(
    uint64_t, ByRef<uint32_t>, ByRef<::OVR::OpenVR::HmdMatrix34_t>)>(&::OVR::OpenVR::__IVROverlay___GetOverlayTransformTrackedDeviceRelative::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x4004678;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayTransformTrackedDeviceRelative*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayTransformTrackedDeviceRelative*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___GetOverlayTransformTrackedDeviceRelative.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::__IVROverlay___GetOverlayTransformTrackedDeviceRelative::*)(uint64_t, ByRef<uint32_t>, ByRef<::OVR::OpenVR::HmdMatrix34_t>, ::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::__IVROverlay___GetOverlayTransformTrackedDeviceRelative::BeginInvoke)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x400468c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayTransformTrackedDeviceRelative*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayTransformTrackedDeviceRelative*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___GetOverlayTransformTrackedDeviceRelative.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::__IVROverlay___GetOverlayTransformTrackedDeviceRelative::*)(
    ByRef<uint32_t>, ByRef<::OVR::OpenVR::HmdMatrix34_t>, ::System::IAsyncResult*)>(&::OVR::OpenVR::__IVROverlay___GetOverlayTransformTrackedDeviceRelative::EndInvoke)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x400477c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayTransformTrackedDeviceRelative*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayTransformTrackedDeviceRelative*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVROverlay___GetOverlayTransformTrackedDeviceRelative* OVR::OpenVR::__IVROverlay___GetOverlayTransformTrackedDeviceRelative::New_ctor(::System::Object* object,
                                                                                                                                                              ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVROverlay___GetOverlayTransformTrackedDeviceRelative*>(object, method));
}
inline void OVR::OpenVR::__IVROverlay___GetOverlayTransformTrackedDeviceRelative::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayTransformTrackedDeviceRelative*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::__IVROverlay___GetOverlayTransformTrackedDeviceRelative::Invoke(uint64_t ulOverlayHandle, ByRef<uint32_t> punTrackedDevice,
                                                                                                                   ByRef<::OVR::OpenVR::HmdMatrix34_t> pmatTrackedDeviceToOverlayTransform) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayTransformTrackedDeviceRelative*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, ulOverlayHandle, punTrackedDevice, pmatTrackedDeviceToOverlayTransform);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVROverlay___GetOverlayTransformTrackedDeviceRelative::BeginInvoke(uint64_t ulOverlayHandle, ByRef<uint32_t> punTrackedDevice,
                                                                                                                 ByRef<::OVR::OpenVR::HmdMatrix34_t> pmatTrackedDeviceToOverlayTransform,
                                                                                                                 ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayTransformTrackedDeviceRelative*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, ulOverlayHandle, punTrackedDevice, pmatTrackedDeviceToOverlayTransform, callback, object);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::__IVROverlay___GetOverlayTransformTrackedDeviceRelative::EndInvoke(ByRef<uint32_t> punTrackedDevice,
                                                                                                                      ByRef<::OVR::OpenVR::HmdMatrix34_t> pmatTrackedDeviceToOverlayTransform,
                                                                                                                      ::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayTransformTrackedDeviceRelative*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, punTrackedDevice, pmatTrackedDeviceToOverlayTransform, result);
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::__IVROverlay___GetOverlayTransformTrackedDeviceRelative::__IVROverlay___GetOverlayTransformTrackedDeviceRelative() {}
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___SetOverlayTransformTrackedDeviceComponent._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVROverlay___SetOverlayTransformTrackedDeviceComponent::*)(
    ::System::Object*, ::System::IntPtr)>(&::OVR::OpenVR::__IVROverlay___SetOverlayTransformTrackedDeviceComponent::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x40047b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayTransformTrackedDeviceComponent*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___SetOverlayTransformTrackedDeviceComponent.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::__IVROverlay___SetOverlayTransformTrackedDeviceComponent::*)(
    uint64_t, uint32_t, ::StringW)>(&::OVR::OpenVR::__IVROverlay___SetOverlayTransformTrackedDeviceComponent::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x400483c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayTransformTrackedDeviceComponent*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayTransformTrackedDeviceComponent*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___SetOverlayTransformTrackedDeviceComponent.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::__IVROverlay___SetOverlayTransformTrackedDeviceComponent::*)(uint64_t, uint32_t, ::StringW, ::System::AsyncCallback*, ::System::Object*)>(
        &::OVR::OpenVR::__IVROverlay___SetOverlayTransformTrackedDeviceComponent::BeginInvoke)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x4004850;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayTransformTrackedDeviceComponent*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayTransformTrackedDeviceComponent*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___SetOverlayTransformTrackedDeviceComponent.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::__IVROverlay___SetOverlayTransformTrackedDeviceComponent::*)(
    ::System::IAsyncResult*)>(&::OVR::OpenVR::__IVROverlay___SetOverlayTransformTrackedDeviceComponent::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x4004910;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayTransformTrackedDeviceComponent*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayTransformTrackedDeviceComponent*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVROverlay___SetOverlayTransformTrackedDeviceComponent* OVR::OpenVR::__IVROverlay___SetOverlayTransformTrackedDeviceComponent::New_ctor(::System::Object* object,
                                                                                                                                                                ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVROverlay___SetOverlayTransformTrackedDeviceComponent*>(object, method));
}
inline void OVR::OpenVR::__IVROverlay___SetOverlayTransformTrackedDeviceComponent::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayTransformTrackedDeviceComponent*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::__IVROverlay___SetOverlayTransformTrackedDeviceComponent::Invoke(uint64_t ulOverlayHandle, uint32_t unDeviceIndex, ::StringW pchComponentName) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayTransformTrackedDeviceComponent*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, ulOverlayHandle, unDeviceIndex, pchComponentName);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVROverlay___SetOverlayTransformTrackedDeviceComponent::BeginInvoke(uint64_t ulOverlayHandle, uint32_t unDeviceIndex, ::StringW pchComponentName,
                                                                                                                  ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayTransformTrackedDeviceComponent*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, ulOverlayHandle, unDeviceIndex, pchComponentName, callback, object);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::__IVROverlay___SetOverlayTransformTrackedDeviceComponent::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayTransformTrackedDeviceComponent*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::__IVROverlay___SetOverlayTransformTrackedDeviceComponent::__IVROverlay___SetOverlayTransformTrackedDeviceComponent() {}
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___GetOverlayTransformTrackedDeviceComponent._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVROverlay___GetOverlayTransformTrackedDeviceComponent::*)(
    ::System::Object*, ::System::IntPtr)>(&::OVR::OpenVR::__IVROverlay___GetOverlayTransformTrackedDeviceComponent::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x4004938;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayTransformTrackedDeviceComponent*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___GetOverlayTransformTrackedDeviceComponent.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::__IVROverlay___GetOverlayTransformTrackedDeviceComponent::*)(
    uint64_t, ByRef<uint32_t>, ::System::Text::StringBuilder*, uint32_t)>(&::OVR::OpenVR::__IVROverlay___GetOverlayTransformTrackedDeviceComponent::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x40049c4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayTransformTrackedDeviceComponent*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayTransformTrackedDeviceComponent*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___GetOverlayTransformTrackedDeviceComponent.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::__IVROverlay___GetOverlayTransformTrackedDeviceComponent::*)(uint64_t, ByRef<uint32_t>, ::System::Text::StringBuilder*, uint32_t, ::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::__IVROverlay___GetOverlayTransformTrackedDeviceComponent::BeginInvoke)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x40049d8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayTransformTrackedDeviceComponent*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayTransformTrackedDeviceComponent*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___GetOverlayTransformTrackedDeviceComponent.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::__IVROverlay___GetOverlayTransformTrackedDeviceComponent::*)(
    ByRef<uint32_t>, ::System::IAsyncResult*)>(&::OVR::OpenVR::__IVROverlay___GetOverlayTransformTrackedDeviceComponent::EndInvoke)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x4004ab8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayTransformTrackedDeviceComponent*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayTransformTrackedDeviceComponent*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVROverlay___GetOverlayTransformTrackedDeviceComponent* OVR::OpenVR::__IVROverlay___GetOverlayTransformTrackedDeviceComponent::New_ctor(::System::Object* object,
                                                                                                                                                                ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVROverlay___GetOverlayTransformTrackedDeviceComponent*>(object, method));
}
inline void OVR::OpenVR::__IVROverlay___GetOverlayTransformTrackedDeviceComponent::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayTransformTrackedDeviceComponent*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::__IVROverlay___GetOverlayTransformTrackedDeviceComponent::Invoke(uint64_t ulOverlayHandle, ByRef<uint32_t> punDeviceIndex,
                                                                                                                    ::System::Text::StringBuilder* pchComponentName, uint32_t unComponentNameSize) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayTransformTrackedDeviceComponent*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, ulOverlayHandle, punDeviceIndex, pchComponentName, unComponentNameSize);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVROverlay___GetOverlayTransformTrackedDeviceComponent::BeginInvoke(uint64_t ulOverlayHandle, ByRef<uint32_t> punDeviceIndex,
                                                                                                                  ::System::Text::StringBuilder* pchComponentName, uint32_t unComponentNameSize,
                                                                                                                  ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayTransformTrackedDeviceComponent*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, ulOverlayHandle, punDeviceIndex, pchComponentName, unComponentNameSize, callback, object);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::__IVROverlay___GetOverlayTransformTrackedDeviceComponent::EndInvoke(ByRef<uint32_t> punDeviceIndex, ::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayTransformTrackedDeviceComponent*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, punDeviceIndex, result);
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::__IVROverlay___GetOverlayTransformTrackedDeviceComponent::__IVROverlay___GetOverlayTransformTrackedDeviceComponent() {}
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___GetOverlayTransformOverlayRelative._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVROverlay___GetOverlayTransformOverlayRelative::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::__IVROverlay___GetOverlayTransformOverlayRelative::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x4004ae4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayTransformOverlayRelative*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___GetOverlayTransformOverlayRelative.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::__IVROverlay___GetOverlayTransformOverlayRelative::*)(
    uint64_t, ByRef<uint64_t>, ByRef<::OVR::OpenVR::HmdMatrix34_t>)>(&::OVR::OpenVR::__IVROverlay___GetOverlayTransformOverlayRelative::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x4004b70;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayTransformOverlayRelative*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayTransformOverlayRelative*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___GetOverlayTransformOverlayRelative.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::__IVROverlay___GetOverlayTransformOverlayRelative::*)(uint64_t, ByRef<uint64_t>, ByRef<::OVR::OpenVR::HmdMatrix34_t>, ::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::__IVROverlay___GetOverlayTransformOverlayRelative::BeginInvoke)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x4004b84;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayTransformOverlayRelative*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayTransformOverlayRelative*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___GetOverlayTransformOverlayRelative.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::__IVROverlay___GetOverlayTransformOverlayRelative::*)(
    ByRef<uint64_t>, ByRef<::OVR::OpenVR::HmdMatrix34_t>, ::System::IAsyncResult*)>(&::OVR::OpenVR::__IVROverlay___GetOverlayTransformOverlayRelative::EndInvoke)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x4004c5c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayTransformOverlayRelative*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayTransformOverlayRelative*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVROverlay___GetOverlayTransformOverlayRelative* OVR::OpenVR::__IVROverlay___GetOverlayTransformOverlayRelative::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVROverlay___GetOverlayTransformOverlayRelative*>(object, method));
}
inline void OVR::OpenVR::__IVROverlay___GetOverlayTransformOverlayRelative::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayTransformOverlayRelative*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::__IVROverlay___GetOverlayTransformOverlayRelative::Invoke(uint64_t ulOverlayHandle, ByRef<uint64_t> ulOverlayHandleParent,
                                                                                                             ByRef<::OVR::OpenVR::HmdMatrix34_t> pmatParentOverlayToOverlayTransform) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayTransformOverlayRelative*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, ulOverlayHandle, ulOverlayHandleParent, pmatParentOverlayToOverlayTransform);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVROverlay___GetOverlayTransformOverlayRelative::BeginInvoke(uint64_t ulOverlayHandle, ByRef<uint64_t> ulOverlayHandleParent,
                                                                                                           ByRef<::OVR::OpenVR::HmdMatrix34_t> pmatParentOverlayToOverlayTransform,
                                                                                                           ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayTransformOverlayRelative*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, ulOverlayHandle, ulOverlayHandleParent, pmatParentOverlayToOverlayTransform, callback, object);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::__IVROverlay___GetOverlayTransformOverlayRelative::EndInvoke(ByRef<uint64_t> ulOverlayHandleParent,
                                                                                                                ByRef<::OVR::OpenVR::HmdMatrix34_t> pmatParentOverlayToOverlayTransform,
                                                                                                                ::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayTransformOverlayRelative*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, ulOverlayHandleParent, pmatParentOverlayToOverlayTransform, result);
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::__IVROverlay___GetOverlayTransformOverlayRelative::__IVROverlay___GetOverlayTransformOverlayRelative() {}
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___SetOverlayTransformOverlayRelative._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVROverlay___SetOverlayTransformOverlayRelative::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::__IVROverlay___SetOverlayTransformOverlayRelative::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x4004c90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayTransformOverlayRelative*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___SetOverlayTransformOverlayRelative.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::__IVROverlay___SetOverlayTransformOverlayRelative::*)(
    uint64_t, uint64_t, ByRef<::OVR::OpenVR::HmdMatrix34_t>)>(&::OVR::OpenVR::__IVROverlay___SetOverlayTransformOverlayRelative::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x4004d1c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayTransformOverlayRelative*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayTransformOverlayRelative*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___SetOverlayTransformOverlayRelative.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::__IVROverlay___SetOverlayTransformOverlayRelative::*)(uint64_t, uint64_t, ByRef<::OVR::OpenVR::HmdMatrix34_t>, ::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::__IVROverlay___SetOverlayTransformOverlayRelative::BeginInvoke)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x4004d30;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayTransformOverlayRelative*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayTransformOverlayRelative*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___SetOverlayTransformOverlayRelative.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::__IVROverlay___SetOverlayTransformOverlayRelative::*)(
    ByRef<::OVR::OpenVR::HmdMatrix34_t>, ::System::IAsyncResult*)>(&::OVR::OpenVR::__IVROverlay___SetOverlayTransformOverlayRelative::EndInvoke)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x4004e00;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayTransformOverlayRelative*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayTransformOverlayRelative*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVROverlay___SetOverlayTransformOverlayRelative* OVR::OpenVR::__IVROverlay___SetOverlayTransformOverlayRelative::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVROverlay___SetOverlayTransformOverlayRelative*>(object, method));
}
inline void OVR::OpenVR::__IVROverlay___SetOverlayTransformOverlayRelative::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayTransformOverlayRelative*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::__IVROverlay___SetOverlayTransformOverlayRelative::Invoke(uint64_t ulOverlayHandle, uint64_t ulOverlayHandleParent,
                                                                                                             ByRef<::OVR::OpenVR::HmdMatrix34_t> pmatParentOverlayToOverlayTransform) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayTransformOverlayRelative*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, ulOverlayHandle, ulOverlayHandleParent, pmatParentOverlayToOverlayTransform);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVROverlay___SetOverlayTransformOverlayRelative::BeginInvoke(uint64_t ulOverlayHandle, uint64_t ulOverlayHandleParent,
                                                                                                           ByRef<::OVR::OpenVR::HmdMatrix34_t> pmatParentOverlayToOverlayTransform,
                                                                                                           ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayTransformOverlayRelative*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, ulOverlayHandle, ulOverlayHandleParent, pmatParentOverlayToOverlayTransform, callback, object);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::__IVROverlay___SetOverlayTransformOverlayRelative::EndInvoke(ByRef<::OVR::OpenVR::HmdMatrix34_t> pmatParentOverlayToOverlayTransform,
                                                                                                                ::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayTransformOverlayRelative*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, pmatParentOverlayToOverlayTransform, result);
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::__IVROverlay___SetOverlayTransformOverlayRelative::__IVROverlay___SetOverlayTransformOverlayRelative() {}
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___ShowOverlay._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVROverlay___ShowOverlay::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::__IVROverlay___ShowOverlay::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x4004e2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___ShowOverlay*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___ShowOverlay.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::__IVROverlay___ShowOverlay::*)(uint64_t)>(
    &::OVR::OpenVR::__IVROverlay___ShowOverlay::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x4004eb8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___ShowOverlay*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___ShowOverlay*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___ShowOverlay.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::__IVROverlay___ShowOverlay::*)(uint64_t, ::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::__IVROverlay___ShowOverlay::BeginInvoke)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x4004ecc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___ShowOverlay*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___ShowOverlay*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___ShowOverlay.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::__IVROverlay___ShowOverlay::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::__IVROverlay___ShowOverlay::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x4004f50;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___ShowOverlay*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___ShowOverlay*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVROverlay___ShowOverlay* OVR::OpenVR::__IVROverlay___ShowOverlay::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVROverlay___ShowOverlay*>(object, method));
}
inline void OVR::OpenVR::__IVROverlay___ShowOverlay::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___ShowOverlay*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::__IVROverlay___ShowOverlay::Invoke(uint64_t ulOverlayHandle) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___ShowOverlay*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, ulOverlayHandle);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVROverlay___ShowOverlay::BeginInvoke(uint64_t ulOverlayHandle, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___ShowOverlay*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, ulOverlayHandle, callback, object);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::__IVROverlay___ShowOverlay::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___ShowOverlay*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::__IVROverlay___ShowOverlay::__IVROverlay___ShowOverlay() {}
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___HideOverlay._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVROverlay___HideOverlay::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::__IVROverlay___HideOverlay::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x4004f78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___HideOverlay*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___HideOverlay.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::__IVROverlay___HideOverlay::*)(uint64_t)>(
    &::OVR::OpenVR::__IVROverlay___HideOverlay::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x4005004;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___HideOverlay*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___HideOverlay*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___HideOverlay.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::__IVROverlay___HideOverlay::*)(uint64_t, ::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::__IVROverlay___HideOverlay::BeginInvoke)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x4005018;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___HideOverlay*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___HideOverlay*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___HideOverlay.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::__IVROverlay___HideOverlay::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::__IVROverlay___HideOverlay::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x400509c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___HideOverlay*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___HideOverlay*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVROverlay___HideOverlay* OVR::OpenVR::__IVROverlay___HideOverlay::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVROverlay___HideOverlay*>(object, method));
}
inline void OVR::OpenVR::__IVROverlay___HideOverlay::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___HideOverlay*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::__IVROverlay___HideOverlay::Invoke(uint64_t ulOverlayHandle) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___HideOverlay*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, ulOverlayHandle);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVROverlay___HideOverlay::BeginInvoke(uint64_t ulOverlayHandle, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___HideOverlay*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, ulOverlayHandle, callback, object);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::__IVROverlay___HideOverlay::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___HideOverlay*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::__IVROverlay___HideOverlay::__IVROverlay___HideOverlay() {}
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___IsOverlayVisible._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVROverlay___IsOverlayVisible::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::__IVROverlay___IsOverlayVisible::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x40050c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___IsOverlayVisible*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___IsOverlayVisible.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::__IVROverlay___IsOverlayVisible::*)(uint64_t)>(
    &::OVR::OpenVR::__IVROverlay___IsOverlayVisible::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x4005150;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___IsOverlayVisible*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___IsOverlayVisible*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___IsOverlayVisible.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::__IVROverlay___IsOverlayVisible::*)(uint64_t, ::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::__IVROverlay___IsOverlayVisible::BeginInvoke)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x4005164;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___IsOverlayVisible*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___IsOverlayVisible*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___IsOverlayVisible.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::__IVROverlay___IsOverlayVisible::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::__IVROverlay___IsOverlayVisible::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x40051e8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___IsOverlayVisible*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___IsOverlayVisible*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVROverlay___IsOverlayVisible* OVR::OpenVR::__IVROverlay___IsOverlayVisible::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVROverlay___IsOverlayVisible*>(object, method));
}
inline void OVR::OpenVR::__IVROverlay___IsOverlayVisible::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___IsOverlayVisible*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline bool OVR::OpenVR::__IVROverlay___IsOverlayVisible::Invoke(uint64_t ulOverlayHandle) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___IsOverlayVisible*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, ulOverlayHandle);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVROverlay___IsOverlayVisible::BeginInvoke(uint64_t ulOverlayHandle, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___IsOverlayVisible*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, ulOverlayHandle, callback, object);
}
inline bool OVR::OpenVR::__IVROverlay___IsOverlayVisible::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___IsOverlayVisible*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::__IVROverlay___IsOverlayVisible::__IVROverlay___IsOverlayVisible() {}
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___GetTransformForOverlayCoordinates._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVROverlay___GetTransformForOverlayCoordinates::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::__IVROverlay___GetTransformForOverlayCoordinates::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x4005210;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetTransformForOverlayCoordinates*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___GetTransformForOverlayCoordinates.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::__IVROverlay___GetTransformForOverlayCoordinates::*)(
    uint64_t, ::OVR::OpenVR::ETrackingUniverseOrigin, ::OVR::OpenVR::HmdVector2_t, ByRef<::OVR::OpenVR::HmdMatrix34_t>)>(&::OVR::OpenVR::__IVROverlay___GetTransformForOverlayCoordinates::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x400529c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetTransformForOverlayCoordinates*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetTransformForOverlayCoordinates*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___GetTransformForOverlayCoordinates.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::__IVROverlay___GetTransformForOverlayCoordinates::*)(uint64_t, ::OVR::OpenVR::ETrackingUniverseOrigin, ::OVR::OpenVR::HmdVector2_t, ByRef<::OVR::OpenVR::HmdMatrix34_t>,
                                                                        ::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::__IVROverlay___GetTransformForOverlayCoordinates::BeginInvoke)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x40052b0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetTransformForOverlayCoordinates*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetTransformForOverlayCoordinates*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___GetTransformForOverlayCoordinates.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::__IVROverlay___GetTransformForOverlayCoordinates::*)(
    ByRef<::OVR::OpenVR::HmdMatrix34_t>, ::System::IAsyncResult*)>(&::OVR::OpenVR::__IVROverlay___GetTransformForOverlayCoordinates::EndInvoke)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x40053d0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetTransformForOverlayCoordinates*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetTransformForOverlayCoordinates*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVROverlay___GetTransformForOverlayCoordinates* OVR::OpenVR::__IVROverlay___GetTransformForOverlayCoordinates::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVROverlay___GetTransformForOverlayCoordinates*>(object, method));
}
inline void OVR::OpenVR::__IVROverlay___GetTransformForOverlayCoordinates::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetTransformForOverlayCoordinates*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::__IVROverlay___GetTransformForOverlayCoordinates::Invoke(uint64_t ulOverlayHandle, ::OVR::OpenVR::ETrackingUniverseOrigin eTrackingOrigin,
                                                                                                            ::OVR::OpenVR::HmdVector2_t coordinatesInOverlay,
                                                                                                            ByRef<::OVR::OpenVR::HmdMatrix34_t> pmatTransform) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetTransformForOverlayCoordinates*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, ulOverlayHandle, eTrackingOrigin, coordinatesInOverlay, pmatTransform);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVROverlay___GetTransformForOverlayCoordinates::BeginInvoke(uint64_t ulOverlayHandle, ::OVR::OpenVR::ETrackingUniverseOrigin eTrackingOrigin,
                                                                                                          ::OVR::OpenVR::HmdVector2_t coordinatesInOverlay,
                                                                                                          ByRef<::OVR::OpenVR::HmdMatrix34_t> pmatTransform, ::System::AsyncCallback* callback,
                                                                                                          ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetTransformForOverlayCoordinates*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, ulOverlayHandle, eTrackingOrigin, coordinatesInOverlay, pmatTransform, callback, object);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::__IVROverlay___GetTransformForOverlayCoordinates::EndInvoke(ByRef<::OVR::OpenVR::HmdMatrix34_t> pmatTransform, ::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetTransformForOverlayCoordinates*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, pmatTransform, result);
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::__IVROverlay___GetTransformForOverlayCoordinates::__IVROverlay___GetTransformForOverlayCoordinates() {}
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___PollNextOverlayEvent._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVROverlay___PollNextOverlayEvent::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::__IVROverlay___PollNextOverlayEvent::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x40053fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___PollNextOverlayEvent*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___PollNextOverlayEvent.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::__IVROverlay___PollNextOverlayEvent::*)(uint64_t, ByRef<::OVR::OpenVR::VREvent_t>, uint32_t)>(
    &::OVR::OpenVR::__IVROverlay___PollNextOverlayEvent::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x4005488;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___PollNextOverlayEvent*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___PollNextOverlayEvent*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___PollNextOverlayEvent.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::__IVROverlay___PollNextOverlayEvent::*)(uint64_t, ByRef<::OVR::OpenVR::VREvent_t>, uint32_t, ::System::AsyncCallback*, ::System::Object*)>(
        &::OVR::OpenVR::__IVROverlay___PollNextOverlayEvent::BeginInvoke)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x400549c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___PollNextOverlayEvent*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___PollNextOverlayEvent*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___PollNextOverlayEvent.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::__IVROverlay___PollNextOverlayEvent::*)(
    ByRef<::OVR::OpenVR::VREvent_t>, ::System::IAsyncResult*)>(&::OVR::OpenVR::__IVROverlay___PollNextOverlayEvent::EndInvoke)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x4005588;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___PollNextOverlayEvent*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___PollNextOverlayEvent*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVROverlay___PollNextOverlayEvent* OVR::OpenVR::__IVROverlay___PollNextOverlayEvent::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVROverlay___PollNextOverlayEvent*>(object, method));
}
inline void OVR::OpenVR::__IVROverlay___PollNextOverlayEvent::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___PollNextOverlayEvent*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline bool OVR::OpenVR::__IVROverlay___PollNextOverlayEvent::Invoke(uint64_t ulOverlayHandle, ByRef<::OVR::OpenVR::VREvent_t> pEvent, uint32_t uncbVREvent) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___PollNextOverlayEvent*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, ulOverlayHandle, pEvent, uncbVREvent);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVROverlay___PollNextOverlayEvent::BeginInvoke(uint64_t ulOverlayHandle, ByRef<::OVR::OpenVR::VREvent_t> pEvent, uint32_t uncbVREvent,
                                                                                             ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___PollNextOverlayEvent*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, ulOverlayHandle, pEvent, uncbVREvent, callback, object);
}
inline bool OVR::OpenVR::__IVROverlay___PollNextOverlayEvent::EndInvoke(ByRef<::OVR::OpenVR::VREvent_t> pEvent, ::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___PollNextOverlayEvent*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, pEvent, result);
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::__IVROverlay___PollNextOverlayEvent::__IVROverlay___PollNextOverlayEvent() {}
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___GetOverlayInputMethod._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVROverlay___GetOverlayInputMethod::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::__IVROverlay___GetOverlayInputMethod::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x40055b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayInputMethod*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___GetOverlayInputMethod.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::__IVROverlay___GetOverlayInputMethod::*)(
    uint64_t, ByRef<::OVR::OpenVR::VROverlayInputMethod>)>(&::OVR::OpenVR::__IVROverlay___GetOverlayInputMethod::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x4005640;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayInputMethod*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayInputMethod*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___GetOverlayInputMethod.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::__IVROverlay___GetOverlayInputMethod::*)(uint64_t, ByRef<::OVR::OpenVR::VROverlayInputMethod>, ::System::AsyncCallback*, ::System::Object*)>(
        &::OVR::OpenVR::__IVROverlay___GetOverlayInputMethod::BeginInvoke)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x4005654;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayInputMethod*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayInputMethod*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___GetOverlayInputMethod.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::__IVROverlay___GetOverlayInputMethod::*)(
    ByRef<::OVR::OpenVR::VROverlayInputMethod>, ::System::IAsyncResult*)>(&::OVR::OpenVR::__IVROverlay___GetOverlayInputMethod::EndInvoke)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x4005710;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayInputMethod*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayInputMethod*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVROverlay___GetOverlayInputMethod* OVR::OpenVR::__IVROverlay___GetOverlayInputMethod::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVROverlay___GetOverlayInputMethod*>(object, method));
}
inline void OVR::OpenVR::__IVROverlay___GetOverlayInputMethod::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayInputMethod*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::__IVROverlay___GetOverlayInputMethod::Invoke(uint64_t ulOverlayHandle, ByRef<::OVR::OpenVR::VROverlayInputMethod> peInputMethod) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayInputMethod*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, ulOverlayHandle, peInputMethod);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVROverlay___GetOverlayInputMethod::BeginInvoke(uint64_t ulOverlayHandle, ByRef<::OVR::OpenVR::VROverlayInputMethod> peInputMethod,
                                                                                              ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayInputMethod*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, ulOverlayHandle, peInputMethod, callback, object);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::__IVROverlay___GetOverlayInputMethod::EndInvoke(ByRef<::OVR::OpenVR::VROverlayInputMethod> peInputMethod, ::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayInputMethod*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, peInputMethod, result);
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::__IVROverlay___GetOverlayInputMethod::__IVROverlay___GetOverlayInputMethod() {}
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___SetOverlayInputMethod._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVROverlay___SetOverlayInputMethod::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::__IVROverlay___SetOverlayInputMethod::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x400573c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayInputMethod*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___SetOverlayInputMethod.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::__IVROverlay___SetOverlayInputMethod::*)(
    uint64_t, ::OVR::OpenVR::VROverlayInputMethod)>(&::OVR::OpenVR::__IVROverlay___SetOverlayInputMethod::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x40057c8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayInputMethod*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayInputMethod*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___SetOverlayInputMethod.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::__IVROverlay___SetOverlayInputMethod::*)(uint64_t, ::OVR::OpenVR::VROverlayInputMethod, ::System::AsyncCallback*, ::System::Object*)>(
        &::OVR::OpenVR::__IVROverlay___SetOverlayInputMethod::BeginInvoke)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x40057dc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayInputMethod*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayInputMethod*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___SetOverlayInputMethod.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::__IVROverlay___SetOverlayInputMethod::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::__IVROverlay___SetOverlayInputMethod::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x4005894;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayInputMethod*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayInputMethod*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVROverlay___SetOverlayInputMethod* OVR::OpenVR::__IVROverlay___SetOverlayInputMethod::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVROverlay___SetOverlayInputMethod*>(object, method));
}
inline void OVR::OpenVR::__IVROverlay___SetOverlayInputMethod::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayInputMethod*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::__IVROverlay___SetOverlayInputMethod::Invoke(uint64_t ulOverlayHandle, ::OVR::OpenVR::VROverlayInputMethod eInputMethod) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayInputMethod*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, ulOverlayHandle, eInputMethod);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVROverlay___SetOverlayInputMethod::BeginInvoke(uint64_t ulOverlayHandle, ::OVR::OpenVR::VROverlayInputMethod eInputMethod,
                                                                                              ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayInputMethod*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, ulOverlayHandle, eInputMethod, callback, object);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::__IVROverlay___SetOverlayInputMethod::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayInputMethod*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::__IVROverlay___SetOverlayInputMethod::__IVROverlay___SetOverlayInputMethod() {}
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___GetOverlayMouseScale._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVROverlay___GetOverlayMouseScale::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::__IVROverlay___GetOverlayMouseScale::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x40058bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayMouseScale*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___GetOverlayMouseScale.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::__IVROverlay___GetOverlayMouseScale::*)(
    uint64_t, ByRef<::OVR::OpenVR::HmdVector2_t>)>(&::OVR::OpenVR::__IVROverlay___GetOverlayMouseScale::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x4005948;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayMouseScale*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayMouseScale*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___GetOverlayMouseScale.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::__IVROverlay___GetOverlayMouseScale::*)(uint64_t, ByRef<::OVR::OpenVR::HmdVector2_t>, ::System::AsyncCallback*, ::System::Object*)>(
        &::OVR::OpenVR::__IVROverlay___GetOverlayMouseScale::BeginInvoke)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x400595c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayMouseScale*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayMouseScale*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___GetOverlayMouseScale.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::__IVROverlay___GetOverlayMouseScale::*)(
    ByRef<::OVR::OpenVR::HmdVector2_t>, ::System::IAsyncResult*)>(&::OVR::OpenVR::__IVROverlay___GetOverlayMouseScale::EndInvoke)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x4005a18;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayMouseScale*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayMouseScale*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVROverlay___GetOverlayMouseScale* OVR::OpenVR::__IVROverlay___GetOverlayMouseScale::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVROverlay___GetOverlayMouseScale*>(object, method));
}
inline void OVR::OpenVR::__IVROverlay___GetOverlayMouseScale::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayMouseScale*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::__IVROverlay___GetOverlayMouseScale::Invoke(uint64_t ulOverlayHandle, ByRef<::OVR::OpenVR::HmdVector2_t> pvecMouseScale) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayMouseScale*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, ulOverlayHandle, pvecMouseScale);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVROverlay___GetOverlayMouseScale::BeginInvoke(uint64_t ulOverlayHandle, ByRef<::OVR::OpenVR::HmdVector2_t> pvecMouseScale,
                                                                                             ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayMouseScale*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, ulOverlayHandle, pvecMouseScale, callback, object);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::__IVROverlay___GetOverlayMouseScale::EndInvoke(ByRef<::OVR::OpenVR::HmdVector2_t> pvecMouseScale, ::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayMouseScale*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, pvecMouseScale, result);
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::__IVROverlay___GetOverlayMouseScale::__IVROverlay___GetOverlayMouseScale() {}
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___SetOverlayMouseScale._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVROverlay___SetOverlayMouseScale::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::__IVROverlay___SetOverlayMouseScale::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x4005a44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayMouseScale*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___SetOverlayMouseScale.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::__IVROverlay___SetOverlayMouseScale::*)(
    uint64_t, ByRef<::OVR::OpenVR::HmdVector2_t>)>(&::OVR::OpenVR::__IVROverlay___SetOverlayMouseScale::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x4005ad0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayMouseScale*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayMouseScale*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___SetOverlayMouseScale.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::__IVROverlay___SetOverlayMouseScale::*)(uint64_t, ByRef<::OVR::OpenVR::HmdVector2_t>, ::System::AsyncCallback*, ::System::Object*)>(
        &::OVR::OpenVR::__IVROverlay___SetOverlayMouseScale::BeginInvoke)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x4005ae4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayMouseScale*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayMouseScale*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___SetOverlayMouseScale.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::__IVROverlay___SetOverlayMouseScale::*)(
    ByRef<::OVR::OpenVR::HmdVector2_t>, ::System::IAsyncResult*)>(&::OVR::OpenVR::__IVROverlay___SetOverlayMouseScale::EndInvoke)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x4005ba0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayMouseScale*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayMouseScale*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVROverlay___SetOverlayMouseScale* OVR::OpenVR::__IVROverlay___SetOverlayMouseScale::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVROverlay___SetOverlayMouseScale*>(object, method));
}
inline void OVR::OpenVR::__IVROverlay___SetOverlayMouseScale::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayMouseScale*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::__IVROverlay___SetOverlayMouseScale::Invoke(uint64_t ulOverlayHandle, ByRef<::OVR::OpenVR::HmdVector2_t> pvecMouseScale) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayMouseScale*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, ulOverlayHandle, pvecMouseScale);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVROverlay___SetOverlayMouseScale::BeginInvoke(uint64_t ulOverlayHandle, ByRef<::OVR::OpenVR::HmdVector2_t> pvecMouseScale,
                                                                                             ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayMouseScale*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, ulOverlayHandle, pvecMouseScale, callback, object);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::__IVROverlay___SetOverlayMouseScale::EndInvoke(ByRef<::OVR::OpenVR::HmdVector2_t> pvecMouseScale, ::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayMouseScale*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, pvecMouseScale, result);
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::__IVROverlay___SetOverlayMouseScale::__IVROverlay___SetOverlayMouseScale() {}
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___ComputeOverlayIntersection._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVROverlay___ComputeOverlayIntersection::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::__IVROverlay___ComputeOverlayIntersection::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x4005bcc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___ComputeOverlayIntersection*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___ComputeOverlayIntersection.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::__IVROverlay___ComputeOverlayIntersection::*)(
    uint64_t, ByRef<::OVR::OpenVR::VROverlayIntersectionParams_t>, ByRef<::OVR::OpenVR::VROverlayIntersectionResults_t>)>(&::OVR::OpenVR::__IVROverlay___ComputeOverlayIntersection::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x4005c58;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___ComputeOverlayIntersection*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___ComputeOverlayIntersection*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___ComputeOverlayIntersection.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::__IVROverlay___ComputeOverlayIntersection::*)(uint64_t, ByRef<::OVR::OpenVR::VROverlayIntersectionParams_t>, ByRef<::OVR::OpenVR::VROverlayIntersectionResults_t>,
                                                                 ::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::__IVROverlay___ComputeOverlayIntersection::BeginInvoke)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x4005c6c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___ComputeOverlayIntersection*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___ComputeOverlayIntersection*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___ComputeOverlayIntersection.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::__IVROverlay___ComputeOverlayIntersection::*)(
    ByRef<::OVR::OpenVR::VROverlayIntersectionParams_t>, ByRef<::OVR::OpenVR::VROverlayIntersectionResults_t>, ::System::IAsyncResult*)>(
    &::OVR::OpenVR::__IVROverlay___ComputeOverlayIntersection::EndInvoke)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x4005d5c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___ComputeOverlayIntersection*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___ComputeOverlayIntersection*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVROverlay___ComputeOverlayIntersection* OVR::OpenVR::__IVROverlay___ComputeOverlayIntersection::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVROverlay___ComputeOverlayIntersection*>(object, method));
}
inline void OVR::OpenVR::__IVROverlay___ComputeOverlayIntersection::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___ComputeOverlayIntersection*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline bool OVR::OpenVR::__IVROverlay___ComputeOverlayIntersection::Invoke(uint64_t ulOverlayHandle, ByRef<::OVR::OpenVR::VROverlayIntersectionParams_t> pParams,
                                                                           ByRef<::OVR::OpenVR::VROverlayIntersectionResults_t> pResults) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___ComputeOverlayIntersection*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, ulOverlayHandle, pParams, pResults);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVROverlay___ComputeOverlayIntersection::BeginInvoke(uint64_t ulOverlayHandle, ByRef<::OVR::OpenVR::VROverlayIntersectionParams_t> pParams,
                                                                                                   ByRef<::OVR::OpenVR::VROverlayIntersectionResults_t> pResults, ::System::AsyncCallback* callback,
                                                                                                   ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___ComputeOverlayIntersection*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, ulOverlayHandle, pParams, pResults, callback, object);
}
inline bool OVR::OpenVR::__IVROverlay___ComputeOverlayIntersection::EndInvoke(ByRef<::OVR::OpenVR::VROverlayIntersectionParams_t> pParams,
                                                                              ByRef<::OVR::OpenVR::VROverlayIntersectionResults_t> pResults, ::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___ComputeOverlayIntersection*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, pParams, pResults, result);
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::__IVROverlay___ComputeOverlayIntersection::__IVROverlay___ComputeOverlayIntersection() {}
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___IsHoverTargetOverlay._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVROverlay___IsHoverTargetOverlay::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::__IVROverlay___IsHoverTargetOverlay::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x4005d90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___IsHoverTargetOverlay*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___IsHoverTargetOverlay.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::__IVROverlay___IsHoverTargetOverlay::*)(uint64_t)>(
    &::OVR::OpenVR::__IVROverlay___IsHoverTargetOverlay::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x4005e1c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___IsHoverTargetOverlay*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___IsHoverTargetOverlay*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___IsHoverTargetOverlay.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::__IVROverlay___IsHoverTargetOverlay::*)(uint64_t, ::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::__IVROverlay___IsHoverTargetOverlay::BeginInvoke)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x4005e30;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___IsHoverTargetOverlay*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___IsHoverTargetOverlay*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___IsHoverTargetOverlay.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::__IVROverlay___IsHoverTargetOverlay::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::__IVROverlay___IsHoverTargetOverlay::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x4005eb4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___IsHoverTargetOverlay*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___IsHoverTargetOverlay*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVROverlay___IsHoverTargetOverlay* OVR::OpenVR::__IVROverlay___IsHoverTargetOverlay::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVROverlay___IsHoverTargetOverlay*>(object, method));
}
inline void OVR::OpenVR::__IVROverlay___IsHoverTargetOverlay::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___IsHoverTargetOverlay*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline bool OVR::OpenVR::__IVROverlay___IsHoverTargetOverlay::Invoke(uint64_t ulOverlayHandle) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___IsHoverTargetOverlay*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, ulOverlayHandle);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVROverlay___IsHoverTargetOverlay::BeginInvoke(uint64_t ulOverlayHandle, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___IsHoverTargetOverlay*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, ulOverlayHandle, callback, object);
}
inline bool OVR::OpenVR::__IVROverlay___IsHoverTargetOverlay::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___IsHoverTargetOverlay*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::__IVROverlay___IsHoverTargetOverlay::__IVROverlay___IsHoverTargetOverlay() {}
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___GetGamepadFocusOverlay._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVROverlay___GetGamepadFocusOverlay::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::__IVROverlay___GetGamepadFocusOverlay::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x4005edc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetGamepadFocusOverlay*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___GetGamepadFocusOverlay.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (::OVR::OpenVR::__IVROverlay___GetGamepadFocusOverlay::*)()>(
    &::OVR::OpenVR::__IVROverlay___GetGamepadFocusOverlay::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x4005f64;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetGamepadFocusOverlay*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetGamepadFocusOverlay*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___GetGamepadFocusOverlay.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::__IVROverlay___GetGamepadFocusOverlay::*)(::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::__IVROverlay___GetGamepadFocusOverlay::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x4005f78;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetGamepadFocusOverlay*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetGamepadFocusOverlay*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___GetGamepadFocusOverlay.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (::OVR::OpenVR::__IVROverlay___GetGamepadFocusOverlay::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::__IVROverlay___GetGamepadFocusOverlay::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x4005f98;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetGamepadFocusOverlay*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetGamepadFocusOverlay*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVROverlay___GetGamepadFocusOverlay* OVR::OpenVR::__IVROverlay___GetGamepadFocusOverlay::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVROverlay___GetGamepadFocusOverlay*>(object, method));
}
inline void OVR::OpenVR::__IVROverlay___GetGamepadFocusOverlay::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetGamepadFocusOverlay*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline uint64_t OVR::OpenVR::__IVROverlay___GetGamepadFocusOverlay::Invoke() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetGamepadFocusOverlay*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<uint64_t, false>(this, ___internal_method);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVROverlay___GetGamepadFocusOverlay::BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetGamepadFocusOverlay*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, callback, object);
}
inline uint64_t OVR::OpenVR::__IVROverlay___GetGamepadFocusOverlay::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetGamepadFocusOverlay*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<uint64_t, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::__IVROverlay___GetGamepadFocusOverlay::__IVROverlay___GetGamepadFocusOverlay() {}
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___SetGamepadFocusOverlay._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVROverlay___SetGamepadFocusOverlay::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::__IVROverlay___SetGamepadFocusOverlay::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x4005fc0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetGamepadFocusOverlay*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___SetGamepadFocusOverlay.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::__IVROverlay___SetGamepadFocusOverlay::*)(uint64_t)>(
    &::OVR::OpenVR::__IVROverlay___SetGamepadFocusOverlay::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x400604c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetGamepadFocusOverlay*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetGamepadFocusOverlay*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___SetGamepadFocusOverlay.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::__IVROverlay___SetGamepadFocusOverlay::*)(uint64_t, ::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::__IVROverlay___SetGamepadFocusOverlay::BeginInvoke)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x4006060;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetGamepadFocusOverlay*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetGamepadFocusOverlay*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___SetGamepadFocusOverlay.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::__IVROverlay___SetGamepadFocusOverlay::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::__IVROverlay___SetGamepadFocusOverlay::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x40060e4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetGamepadFocusOverlay*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetGamepadFocusOverlay*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVROverlay___SetGamepadFocusOverlay* OVR::OpenVR::__IVROverlay___SetGamepadFocusOverlay::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVROverlay___SetGamepadFocusOverlay*>(object, method));
}
inline void OVR::OpenVR::__IVROverlay___SetGamepadFocusOverlay::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetGamepadFocusOverlay*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::__IVROverlay___SetGamepadFocusOverlay::Invoke(uint64_t ulNewFocusOverlay) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetGamepadFocusOverlay*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, ulNewFocusOverlay);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVROverlay___SetGamepadFocusOverlay::BeginInvoke(uint64_t ulNewFocusOverlay, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetGamepadFocusOverlay*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, ulNewFocusOverlay, callback, object);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::__IVROverlay___SetGamepadFocusOverlay::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetGamepadFocusOverlay*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::__IVROverlay___SetGamepadFocusOverlay::__IVROverlay___SetGamepadFocusOverlay() {}
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___SetOverlayNeighbor._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVROverlay___SetOverlayNeighbor::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::__IVROverlay___SetOverlayNeighbor::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x400610c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayNeighbor*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___SetOverlayNeighbor.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::__IVROverlay___SetOverlayNeighbor::*)(
    ::OVR::OpenVR::EOverlayDirection, uint64_t, uint64_t)>(&::OVR::OpenVR::__IVROverlay___SetOverlayNeighbor::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x4006198;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayNeighbor*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayNeighbor*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___SetOverlayNeighbor.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::__IVROverlay___SetOverlayNeighbor::*)(::OVR::OpenVR::EOverlayDirection, uint64_t, uint64_t, ::System::AsyncCallback*, ::System::Object*)>(
        &::OVR::OpenVR::__IVROverlay___SetOverlayNeighbor::BeginInvoke)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x40061ac;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayNeighbor*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayNeighbor*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___SetOverlayNeighbor.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::__IVROverlay___SetOverlayNeighbor::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::__IVROverlay___SetOverlayNeighbor::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x400627c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayNeighbor*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayNeighbor*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVROverlay___SetOverlayNeighbor* OVR::OpenVR::__IVROverlay___SetOverlayNeighbor::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVROverlay___SetOverlayNeighbor*>(object, method));
}
inline void OVR::OpenVR::__IVROverlay___SetOverlayNeighbor::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayNeighbor*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::__IVROverlay___SetOverlayNeighbor::Invoke(::OVR::OpenVR::EOverlayDirection eDirection, uint64_t ulFrom, uint64_t ulTo) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayNeighbor*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, eDirection, ulFrom, ulTo);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVROverlay___SetOverlayNeighbor::BeginInvoke(::OVR::OpenVR::EOverlayDirection eDirection, uint64_t ulFrom, uint64_t ulTo,
                                                                                           ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayNeighbor*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, eDirection, ulFrom, ulTo, callback, object);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::__IVROverlay___SetOverlayNeighbor::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayNeighbor*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::__IVROverlay___SetOverlayNeighbor::__IVROverlay___SetOverlayNeighbor() {}
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___MoveGamepadFocusToNeighbor._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVROverlay___MoveGamepadFocusToNeighbor::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::__IVROverlay___MoveGamepadFocusToNeighbor::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x40062a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___MoveGamepadFocusToNeighbor*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___MoveGamepadFocusToNeighbor.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::__IVROverlay___MoveGamepadFocusToNeighbor::*)(
    ::OVR::OpenVR::EOverlayDirection, uint64_t)>(&::OVR::OpenVR::__IVROverlay___MoveGamepadFocusToNeighbor::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x4006330;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___MoveGamepadFocusToNeighbor*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___MoveGamepadFocusToNeighbor*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___MoveGamepadFocusToNeighbor.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::__IVROverlay___MoveGamepadFocusToNeighbor::*)(::OVR::OpenVR::EOverlayDirection, uint64_t, ::System::AsyncCallback*, ::System::Object*)>(
        &::OVR::OpenVR::__IVROverlay___MoveGamepadFocusToNeighbor::BeginInvoke)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x4006344;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___MoveGamepadFocusToNeighbor*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___MoveGamepadFocusToNeighbor*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___MoveGamepadFocusToNeighbor.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::__IVROverlay___MoveGamepadFocusToNeighbor::*)(
    ::System::IAsyncResult*)>(&::OVR::OpenVR::__IVROverlay___MoveGamepadFocusToNeighbor::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x40063fc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___MoveGamepadFocusToNeighbor*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___MoveGamepadFocusToNeighbor*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVROverlay___MoveGamepadFocusToNeighbor* OVR::OpenVR::__IVROverlay___MoveGamepadFocusToNeighbor::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVROverlay___MoveGamepadFocusToNeighbor*>(object, method));
}
inline void OVR::OpenVR::__IVROverlay___MoveGamepadFocusToNeighbor::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___MoveGamepadFocusToNeighbor*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::__IVROverlay___MoveGamepadFocusToNeighbor::Invoke(::OVR::OpenVR::EOverlayDirection eDirection, uint64_t ulFrom) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___MoveGamepadFocusToNeighbor*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, eDirection, ulFrom);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVROverlay___MoveGamepadFocusToNeighbor::BeginInvoke(::OVR::OpenVR::EOverlayDirection eDirection, uint64_t ulFrom, ::System::AsyncCallback* callback,
                                                                                                   ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___MoveGamepadFocusToNeighbor*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, eDirection, ulFrom, callback, object);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::__IVROverlay___MoveGamepadFocusToNeighbor::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___MoveGamepadFocusToNeighbor*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::__IVROverlay___MoveGamepadFocusToNeighbor::__IVROverlay___MoveGamepadFocusToNeighbor() {}
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___SetOverlayDualAnalogTransform._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVROverlay___SetOverlayDualAnalogTransform::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::__IVROverlay___SetOverlayDualAnalogTransform::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x4006424;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayDualAnalogTransform*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___SetOverlayDualAnalogTransform.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::__IVROverlay___SetOverlayDualAnalogTransform::*)(
    uint64_t, ::OVR::OpenVR::EDualAnalogWhich, ::System::IntPtr, float_t)>(&::OVR::OpenVR::__IVROverlay___SetOverlayDualAnalogTransform::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x40064b0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayDualAnalogTransform*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayDualAnalogTransform*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___SetOverlayDualAnalogTransform.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::__IVROverlay___SetOverlayDualAnalogTransform::*)(uint64_t, ::OVR::OpenVR::EDualAnalogWhich, ::System::IntPtr, float_t, ::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::__IVROverlay___SetOverlayDualAnalogTransform::BeginInvoke)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x40064c4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayDualAnalogTransform*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayDualAnalogTransform*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___SetOverlayDualAnalogTransform.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::__IVROverlay___SetOverlayDualAnalogTransform::*)(
    ::System::IAsyncResult*)>(&::OVR::OpenVR::__IVROverlay___SetOverlayDualAnalogTransform::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x40065e0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayDualAnalogTransform*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayDualAnalogTransform*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVROverlay___SetOverlayDualAnalogTransform* OVR::OpenVR::__IVROverlay___SetOverlayDualAnalogTransform::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVROverlay___SetOverlayDualAnalogTransform*>(object, method));
}
inline void OVR::OpenVR::__IVROverlay___SetOverlayDualAnalogTransform::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayDualAnalogTransform*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::__IVROverlay___SetOverlayDualAnalogTransform::Invoke(uint64_t ulOverlay, ::OVR::OpenVR::EDualAnalogWhich eWhich, ::System::IntPtr vCenter,
                                                                                                        float_t fRadius) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayDualAnalogTransform*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, ulOverlay, eWhich, vCenter, fRadius);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVROverlay___SetOverlayDualAnalogTransform::BeginInvoke(uint64_t ulOverlay, ::OVR::OpenVR::EDualAnalogWhich eWhich, ::System::IntPtr vCenter,
                                                                                                      float_t fRadius, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayDualAnalogTransform*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, ulOverlay, eWhich, vCenter, fRadius, callback, object);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::__IVROverlay___SetOverlayDualAnalogTransform::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayDualAnalogTransform*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::__IVROverlay___SetOverlayDualAnalogTransform::__IVROverlay___SetOverlayDualAnalogTransform() {}
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___GetOverlayDualAnalogTransform._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVROverlay___GetOverlayDualAnalogTransform::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::__IVROverlay___GetOverlayDualAnalogTransform::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x4006608;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayDualAnalogTransform*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___GetOverlayDualAnalogTransform.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::__IVROverlay___GetOverlayDualAnalogTransform::*)(
    uint64_t, ::OVR::OpenVR::EDualAnalogWhich, ByRef<::OVR::OpenVR::HmdVector2_t>, ByRef<float_t>)>(&::OVR::OpenVR::__IVROverlay___GetOverlayDualAnalogTransform::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x4006694;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayDualAnalogTransform*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayDualAnalogTransform*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___GetOverlayDualAnalogTransform.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::__IVROverlay___GetOverlayDualAnalogTransform::*)(uint64_t, ::OVR::OpenVR::EDualAnalogWhich, ByRef<::OVR::OpenVR::HmdVector2_t>, ByRef<float_t>, ::System::AsyncCallback*,
                                                                    ::System::Object*)>(&::OVR::OpenVR::__IVROverlay___GetOverlayDualAnalogTransform::BeginInvoke)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x40066a8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayDualAnalogTransform*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayDualAnalogTransform*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___GetOverlayDualAnalogTransform.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::__IVROverlay___GetOverlayDualAnalogTransform::*)(
    ByRef<::OVR::OpenVR::HmdVector2_t>, ByRef<float_t>, ::System::IAsyncResult*)>(&::OVR::OpenVR::__IVROverlay___GetOverlayDualAnalogTransform::EndInvoke)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x40067cc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayDualAnalogTransform*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayDualAnalogTransform*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVROverlay___GetOverlayDualAnalogTransform* OVR::OpenVR::__IVROverlay___GetOverlayDualAnalogTransform::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVROverlay___GetOverlayDualAnalogTransform*>(object, method));
}
inline void OVR::OpenVR::__IVROverlay___GetOverlayDualAnalogTransform::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayDualAnalogTransform*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::__IVROverlay___GetOverlayDualAnalogTransform::Invoke(uint64_t ulOverlay, ::OVR::OpenVR::EDualAnalogWhich eWhich,
                                                                                                        ByRef<::OVR::OpenVR::HmdVector2_t> pvCenter, ByRef<float_t> pfRadius) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayDualAnalogTransform*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, ulOverlay, eWhich, pvCenter, pfRadius);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVROverlay___GetOverlayDualAnalogTransform::BeginInvoke(uint64_t ulOverlay, ::OVR::OpenVR::EDualAnalogWhich eWhich,
                                                                                                      ByRef<::OVR::OpenVR::HmdVector2_t> pvCenter, ByRef<float_t> pfRadius,
                                                                                                      ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayDualAnalogTransform*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, ulOverlay, eWhich, pvCenter, pfRadius, callback, object);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::__IVROverlay___GetOverlayDualAnalogTransform::EndInvoke(ByRef<::OVR::OpenVR::HmdVector2_t> pvCenter, ByRef<float_t> pfRadius,
                                                                                                           ::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayDualAnalogTransform*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, pvCenter, pfRadius, result);
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::__IVROverlay___GetOverlayDualAnalogTransform::__IVROverlay___GetOverlayDualAnalogTransform() {}
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___SetOverlayTexture._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVROverlay___SetOverlayTexture::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::__IVROverlay___SetOverlayTexture::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x4006800;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayTexture*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___SetOverlayTexture.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::__IVROverlay___SetOverlayTexture::*)(
    uint64_t, ByRef<::OVR::OpenVR::Texture_t>)>(&::OVR::OpenVR::__IVROverlay___SetOverlayTexture::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x400688c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayTexture*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayTexture*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___SetOverlayTexture.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::__IVROverlay___SetOverlayTexture::*)(uint64_t, ByRef<::OVR::OpenVR::Texture_t>, ::System::AsyncCallback*, ::System::Object*)>(
        &::OVR::OpenVR::__IVROverlay___SetOverlayTexture::BeginInvoke)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x40068a0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayTexture*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayTexture*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___SetOverlayTexture.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::__IVROverlay___SetOverlayTexture::*)(
    ByRef<::OVR::OpenVR::Texture_t>, ::System::IAsyncResult*)>(&::OVR::OpenVR::__IVROverlay___SetOverlayTexture::EndInvoke)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x400695c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayTexture*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayTexture*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVROverlay___SetOverlayTexture* OVR::OpenVR::__IVROverlay___SetOverlayTexture::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVROverlay___SetOverlayTexture*>(object, method));
}
inline void OVR::OpenVR::__IVROverlay___SetOverlayTexture::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayTexture*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::__IVROverlay___SetOverlayTexture::Invoke(uint64_t ulOverlayHandle, ByRef<::OVR::OpenVR::Texture_t> pTexture) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayTexture*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, ulOverlayHandle, pTexture);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVROverlay___SetOverlayTexture::BeginInvoke(uint64_t ulOverlayHandle, ByRef<::OVR::OpenVR::Texture_t> pTexture, ::System::AsyncCallback* callback,
                                                                                          ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayTexture*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, ulOverlayHandle, pTexture, callback, object);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::__IVROverlay___SetOverlayTexture::EndInvoke(ByRef<::OVR::OpenVR::Texture_t> pTexture, ::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayTexture*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, pTexture, result);
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::__IVROverlay___SetOverlayTexture::__IVROverlay___SetOverlayTexture() {}
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___ClearOverlayTexture._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVROverlay___ClearOverlayTexture::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::__IVROverlay___ClearOverlayTexture::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x4006988;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___ClearOverlayTexture*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___ClearOverlayTexture.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::__IVROverlay___ClearOverlayTexture::*)(uint64_t)>(
    &::OVR::OpenVR::__IVROverlay___ClearOverlayTexture::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x4006a14;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___ClearOverlayTexture*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___ClearOverlayTexture*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___ClearOverlayTexture.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::__IVROverlay___ClearOverlayTexture::*)(uint64_t, ::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::__IVROverlay___ClearOverlayTexture::BeginInvoke)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x4006a28;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___ClearOverlayTexture*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___ClearOverlayTexture*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___ClearOverlayTexture.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::__IVROverlay___ClearOverlayTexture::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::__IVROverlay___ClearOverlayTexture::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x4006aac;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___ClearOverlayTexture*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___ClearOverlayTexture*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVROverlay___ClearOverlayTexture* OVR::OpenVR::__IVROverlay___ClearOverlayTexture::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVROverlay___ClearOverlayTexture*>(object, method));
}
inline void OVR::OpenVR::__IVROverlay___ClearOverlayTexture::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___ClearOverlayTexture*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::__IVROverlay___ClearOverlayTexture::Invoke(uint64_t ulOverlayHandle) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___ClearOverlayTexture*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, ulOverlayHandle);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVROverlay___ClearOverlayTexture::BeginInvoke(uint64_t ulOverlayHandle, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___ClearOverlayTexture*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, ulOverlayHandle, callback, object);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::__IVROverlay___ClearOverlayTexture::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___ClearOverlayTexture*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::__IVROverlay___ClearOverlayTexture::__IVROverlay___ClearOverlayTexture() {}
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___SetOverlayRaw._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVROverlay___SetOverlayRaw::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::__IVROverlay___SetOverlayRaw::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x4006ad4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayRaw*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___SetOverlayRaw.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::__IVROverlay___SetOverlayRaw::*)(
    uint64_t, ::System::IntPtr, uint32_t, uint32_t, uint32_t)>(&::OVR::OpenVR::__IVROverlay___SetOverlayRaw::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x4006b60;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayRaw*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayRaw*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___SetOverlayRaw.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::__IVROverlay___SetOverlayRaw::*)(uint64_t, ::System::IntPtr, uint32_t, uint32_t, uint32_t, ::System::AsyncCallback*, ::System::Object*)>(
        &::OVR::OpenVR::__IVROverlay___SetOverlayRaw::BeginInvoke)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x4006b74;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayRaw*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayRaw*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___SetOverlayRaw.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::__IVROverlay___SetOverlayRaw::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::__IVROverlay___SetOverlayRaw::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x4006c88;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayRaw*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayRaw*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVROverlay___SetOverlayRaw* OVR::OpenVR::__IVROverlay___SetOverlayRaw::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVROverlay___SetOverlayRaw*>(object, method));
}
inline void OVR::OpenVR::__IVROverlay___SetOverlayRaw::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayRaw*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::__IVROverlay___SetOverlayRaw::Invoke(uint64_t ulOverlayHandle, ::System::IntPtr pvBuffer, uint32_t unWidth, uint32_t unHeight, uint32_t unDepth) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayRaw*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, ulOverlayHandle, pvBuffer, unWidth, unHeight, unDepth);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVROverlay___SetOverlayRaw::BeginInvoke(uint64_t ulOverlayHandle, ::System::IntPtr pvBuffer, uint32_t unWidth, uint32_t unHeight, uint32_t unDepth,
                                                                                      ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayRaw*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, ulOverlayHandle, pvBuffer, unWidth, unHeight, unDepth, callback, object);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::__IVROverlay___SetOverlayRaw::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayRaw*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::__IVROverlay___SetOverlayRaw::__IVROverlay___SetOverlayRaw() {}
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___SetOverlayFromFile._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVROverlay___SetOverlayFromFile::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::__IVROverlay___SetOverlayFromFile::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x4006cb0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayFromFile*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___SetOverlayFromFile.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::__IVROverlay___SetOverlayFromFile::*)(uint64_t, ::StringW)>(
    &::OVR::OpenVR::__IVROverlay___SetOverlayFromFile::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x4006d3c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayFromFile*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayFromFile*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___SetOverlayFromFile.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::__IVROverlay___SetOverlayFromFile::*)(uint64_t, ::StringW, ::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::__IVROverlay___SetOverlayFromFile::BeginInvoke)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x4006d50;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayFromFile*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayFromFile*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___SetOverlayFromFile.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::__IVROverlay___SetOverlayFromFile::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::__IVROverlay___SetOverlayFromFile::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x4006de0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayFromFile*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayFromFile*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVROverlay___SetOverlayFromFile* OVR::OpenVR::__IVROverlay___SetOverlayFromFile::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVROverlay___SetOverlayFromFile*>(object, method));
}
inline void OVR::OpenVR::__IVROverlay___SetOverlayFromFile::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayFromFile*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::__IVROverlay___SetOverlayFromFile::Invoke(uint64_t ulOverlayHandle, ::StringW pchFilePath) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayFromFile*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, ulOverlayHandle, pchFilePath);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVROverlay___SetOverlayFromFile::BeginInvoke(uint64_t ulOverlayHandle, ::StringW pchFilePath, ::System::AsyncCallback* callback,
                                                                                           ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayFromFile*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, ulOverlayHandle, pchFilePath, callback, object);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::__IVROverlay___SetOverlayFromFile::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayFromFile*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::__IVROverlay___SetOverlayFromFile::__IVROverlay___SetOverlayFromFile() {}
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___GetOverlayTexture._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVROverlay___GetOverlayTexture::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::__IVROverlay___GetOverlayTexture::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x4006e08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayTexture*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___GetOverlayTexture.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::__IVROverlay___GetOverlayTexture::*)(
    uint64_t, ByRef<::System::IntPtr>, ::System::IntPtr, ByRef<uint32_t>, ByRef<uint32_t>, ByRef<uint32_t>, ByRef<::OVR::OpenVR::ETextureType>, ByRef<::OVR::OpenVR::EColorSpace>,
    ByRef<::OVR::OpenVR::VRTextureBounds_t>)>(&::OVR::OpenVR::__IVROverlay___GetOverlayTexture::Invoke)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x4006e94;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayTexture*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayTexture*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___GetOverlayTexture.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::__IVROverlay___GetOverlayTexture::*)(uint64_t, ByRef<::System::IntPtr>, ::System::IntPtr, ByRef<uint32_t>, ByRef<uint32_t>, ByRef<uint32_t>, ByRef<::OVR::OpenVR::ETextureType>,
                                                        ByRef<::OVR::OpenVR::EColorSpace>, ByRef<::OVR::OpenVR::VRTextureBounds_t>, ::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::__IVROverlay___GetOverlayTexture::BeginInvoke)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x4006eb0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayTexture*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayTexture*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___GetOverlayTexture.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::__IVROverlay___GetOverlayTexture::*)(
    ByRef<::System::IntPtr>, ByRef<uint32_t>, ByRef<uint32_t>, ByRef<uint32_t>, ByRef<::OVR::OpenVR::ETextureType>, ByRef<::OVR::OpenVR::EColorSpace>, ByRef<::OVR::OpenVR::VRTextureBounds_t>,
    ::System::IAsyncResult*)>(&::OVR::OpenVR::__IVROverlay___GetOverlayTexture::EndInvoke)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x4007074;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayTexture*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayTexture*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVROverlay___GetOverlayTexture* OVR::OpenVR::__IVROverlay___GetOverlayTexture::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVROverlay___GetOverlayTexture*>(object, method));
}
inline void OVR::OpenVR::__IVROverlay___GetOverlayTexture::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayTexture*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::__IVROverlay___GetOverlayTexture::Invoke(uint64_t ulOverlayHandle, ByRef<::System::IntPtr> pNativeTextureHandle, ::System::IntPtr pNativeTextureRef,
                                                                                            ByRef<uint32_t> pWidth, ByRef<uint32_t> pHeight, ByRef<uint32_t> pNativeFormat,
                                                                                            ByRef<::OVR::OpenVR::ETextureType> pAPIType, ByRef<::OVR::OpenVR::EColorSpace> pColorSpace,
                                                                                            ByRef<::OVR::OpenVR::VRTextureBounds_t> pTextureBounds) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayTexture*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, ulOverlayHandle, pNativeTextureHandle, pNativeTextureRef, pWidth, pHeight, pNativeFormat,
                                                                                    pAPIType, pColorSpace, pTextureBounds);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVROverlay___GetOverlayTexture::BeginInvoke(uint64_t ulOverlayHandle, ByRef<::System::IntPtr> pNativeTextureHandle, ::System::IntPtr pNativeTextureRef,
                                                                                          ByRef<uint32_t> pWidth, ByRef<uint32_t> pHeight, ByRef<uint32_t> pNativeFormat,
                                                                                          ByRef<::OVR::OpenVR::ETextureType> pAPIType, ByRef<::OVR::OpenVR::EColorSpace> pColorSpace,
                                                                                          ByRef<::OVR::OpenVR::VRTextureBounds_t> pTextureBounds, ::System::AsyncCallback* callback,
                                                                                          ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayTexture*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, ulOverlayHandle, pNativeTextureHandle, pNativeTextureRef, pWidth, pHeight, pNativeFormat,
                                                                             pAPIType, pColorSpace, pTextureBounds, callback, object);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::__IVROverlay___GetOverlayTexture::EndInvoke(ByRef<::System::IntPtr> pNativeTextureHandle, ByRef<uint32_t> pWidth, ByRef<uint32_t> pHeight,
                                                                                               ByRef<uint32_t> pNativeFormat, ByRef<::OVR::OpenVR::ETextureType> pAPIType,
                                                                                               ByRef<::OVR::OpenVR::EColorSpace> pColorSpace, ByRef<::OVR::OpenVR::VRTextureBounds_t> pTextureBounds,
                                                                                               ::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayTexture*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, pNativeTextureHandle, pWidth, pHeight, pNativeFormat, pAPIType, pColorSpace,
                                                                                    pTextureBounds, result);
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::__IVROverlay___GetOverlayTexture::__IVROverlay___GetOverlayTexture() {}
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___ReleaseNativeOverlayHandle._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVROverlay___ReleaseNativeOverlayHandle::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::__IVROverlay___ReleaseNativeOverlayHandle::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x40070b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___ReleaseNativeOverlayHandle*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___ReleaseNativeOverlayHandle.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::__IVROverlay___ReleaseNativeOverlayHandle::*)(
    uint64_t, ::System::IntPtr)>(&::OVR::OpenVR::__IVROverlay___ReleaseNativeOverlayHandle::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x400713c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___ReleaseNativeOverlayHandle*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___ReleaseNativeOverlayHandle*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___ReleaseNativeOverlayHandle.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::__IVROverlay___ReleaseNativeOverlayHandle::*)(uint64_t, ::System::IntPtr, ::System::AsyncCallback*, ::System::Object*)>(
        &::OVR::OpenVR::__IVROverlay___ReleaseNativeOverlayHandle::BeginInvoke)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x4007150;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___ReleaseNativeOverlayHandle*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___ReleaseNativeOverlayHandle*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___ReleaseNativeOverlayHandle.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::__IVROverlay___ReleaseNativeOverlayHandle::*)(
    ::System::IAsyncResult*)>(&::OVR::OpenVR::__IVROverlay___ReleaseNativeOverlayHandle::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x4007208;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___ReleaseNativeOverlayHandle*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___ReleaseNativeOverlayHandle*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVROverlay___ReleaseNativeOverlayHandle* OVR::OpenVR::__IVROverlay___ReleaseNativeOverlayHandle::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVROverlay___ReleaseNativeOverlayHandle*>(object, method));
}
inline void OVR::OpenVR::__IVROverlay___ReleaseNativeOverlayHandle::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___ReleaseNativeOverlayHandle*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::__IVROverlay___ReleaseNativeOverlayHandle::Invoke(uint64_t ulOverlayHandle, ::System::IntPtr pNativeTextureHandle) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___ReleaseNativeOverlayHandle*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, ulOverlayHandle, pNativeTextureHandle);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVROverlay___ReleaseNativeOverlayHandle::BeginInvoke(uint64_t ulOverlayHandle, ::System::IntPtr pNativeTextureHandle, ::System::AsyncCallback* callback,
                                                                                                   ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___ReleaseNativeOverlayHandle*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, ulOverlayHandle, pNativeTextureHandle, callback, object);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::__IVROverlay___ReleaseNativeOverlayHandle::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___ReleaseNativeOverlayHandle*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::__IVROverlay___ReleaseNativeOverlayHandle::__IVROverlay___ReleaseNativeOverlayHandle() {}
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___GetOverlayTextureSize._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVROverlay___GetOverlayTextureSize::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::__IVROverlay___GetOverlayTextureSize::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x4007230;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayTextureSize*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___GetOverlayTextureSize.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::__IVROverlay___GetOverlayTextureSize::*)(
    uint64_t, ByRef<uint32_t>, ByRef<uint32_t>)>(&::OVR::OpenVR::__IVROverlay___GetOverlayTextureSize::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x40072bc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayTextureSize*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayTextureSize*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___GetOverlayTextureSize.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::__IVROverlay___GetOverlayTextureSize::*)(uint64_t, ByRef<uint32_t>, ByRef<uint32_t>, ::System::AsyncCallback*, ::System::Object*)>(
        &::OVR::OpenVR::__IVROverlay___GetOverlayTextureSize::BeginInvoke)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x40072d0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayTextureSize*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayTextureSize*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___GetOverlayTextureSize.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::__IVROverlay___GetOverlayTextureSize::*)(
    ByRef<uint32_t>, ByRef<uint32_t>, ::System::IAsyncResult*)>(&::OVR::OpenVR::__IVROverlay___GetOverlayTextureSize::EndInvoke)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x40073a8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayTextureSize*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayTextureSize*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVROverlay___GetOverlayTextureSize* OVR::OpenVR::__IVROverlay___GetOverlayTextureSize::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVROverlay___GetOverlayTextureSize*>(object, method));
}
inline void OVR::OpenVR::__IVROverlay___GetOverlayTextureSize::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayTextureSize*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::__IVROverlay___GetOverlayTextureSize::Invoke(uint64_t ulOverlayHandle, ByRef<uint32_t> pWidth, ByRef<uint32_t> pHeight) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayTextureSize*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, ulOverlayHandle, pWidth, pHeight);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVROverlay___GetOverlayTextureSize::BeginInvoke(uint64_t ulOverlayHandle, ByRef<uint32_t> pWidth, ByRef<uint32_t> pHeight,
                                                                                              ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayTextureSize*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, ulOverlayHandle, pWidth, pHeight, callback, object);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::__IVROverlay___GetOverlayTextureSize::EndInvoke(ByRef<uint32_t> pWidth, ByRef<uint32_t> pHeight, ::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayTextureSize*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, pWidth, pHeight, result);
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::__IVROverlay___GetOverlayTextureSize::__IVROverlay___GetOverlayTextureSize() {}
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___CreateDashboardOverlay._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVROverlay___CreateDashboardOverlay::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::__IVROverlay___CreateDashboardOverlay::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x40073dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___CreateDashboardOverlay*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___CreateDashboardOverlay.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::__IVROverlay___CreateDashboardOverlay::*)(
    ::StringW, ::StringW, ByRef<uint64_t>, ByRef<uint64_t>)>(&::OVR::OpenVR::__IVROverlay___CreateDashboardOverlay::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x400747c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___CreateDashboardOverlay*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___CreateDashboardOverlay*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___CreateDashboardOverlay.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::__IVROverlay___CreateDashboardOverlay::*)(::StringW, ::StringW, ByRef<uint64_t>, ByRef<uint64_t>, ::System::AsyncCallback*, ::System::Object*)>(
        &::OVR::OpenVR::__IVROverlay___CreateDashboardOverlay::BeginInvoke)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x4007490;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___CreateDashboardOverlay*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___CreateDashboardOverlay*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___CreateDashboardOverlay.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::__IVROverlay___CreateDashboardOverlay::*)(
    ByRef<uint64_t>, ByRef<uint64_t>, ::System::IAsyncResult*)>(&::OVR::OpenVR::__IVROverlay___CreateDashboardOverlay::EndInvoke)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x4007548;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___CreateDashboardOverlay*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___CreateDashboardOverlay*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVROverlay___CreateDashboardOverlay* OVR::OpenVR::__IVROverlay___CreateDashboardOverlay::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVROverlay___CreateDashboardOverlay*>(object, method));
}
inline void OVR::OpenVR::__IVROverlay___CreateDashboardOverlay::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___CreateDashboardOverlay*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::__IVROverlay___CreateDashboardOverlay::Invoke(::StringW pchOverlayKey, ::StringW pchOverlayFriendlyName, ByRef<uint64_t> pMainHandle,
                                                                                                 ByRef<uint64_t> pThumbnailHandle) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___CreateDashboardOverlay*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, pchOverlayKey, pchOverlayFriendlyName, pMainHandle, pThumbnailHandle);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVROverlay___CreateDashboardOverlay::BeginInvoke(::StringW pchOverlayKey, ::StringW pchOverlayFriendlyName, ByRef<uint64_t> pMainHandle,
                                                                                               ByRef<uint64_t> pThumbnailHandle, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___CreateDashboardOverlay*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, pchOverlayKey, pchOverlayFriendlyName, pMainHandle, pThumbnailHandle, callback, object);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::__IVROverlay___CreateDashboardOverlay::EndInvoke(ByRef<uint64_t> pMainHandle, ByRef<uint64_t> pThumbnailHandle, ::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___CreateDashboardOverlay*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, pMainHandle, pThumbnailHandle, result);
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::__IVROverlay___CreateDashboardOverlay::__IVROverlay___CreateDashboardOverlay() {}
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___IsDashboardVisible._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVROverlay___IsDashboardVisible::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::__IVROverlay___IsDashboardVisible::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x400757c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___IsDashboardVisible*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___IsDashboardVisible.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::__IVROverlay___IsDashboardVisible::*)()>(
    &::OVR::OpenVR::__IVROverlay___IsDashboardVisible::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x4007604;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___IsDashboardVisible*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___IsDashboardVisible*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___IsDashboardVisible.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::__IVROverlay___IsDashboardVisible::*)(::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::__IVROverlay___IsDashboardVisible::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x4007618;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___IsDashboardVisible*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___IsDashboardVisible*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___IsDashboardVisible.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::__IVROverlay___IsDashboardVisible::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::__IVROverlay___IsDashboardVisible::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x4007638;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___IsDashboardVisible*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___IsDashboardVisible*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVROverlay___IsDashboardVisible* OVR::OpenVR::__IVROverlay___IsDashboardVisible::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVROverlay___IsDashboardVisible*>(object, method));
}
inline void OVR::OpenVR::__IVROverlay___IsDashboardVisible::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___IsDashboardVisible*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline bool OVR::OpenVR::__IVROverlay___IsDashboardVisible::Invoke() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___IsDashboardVisible*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVROverlay___IsDashboardVisible::BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___IsDashboardVisible*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, callback, object);
}
inline bool OVR::OpenVR::__IVROverlay___IsDashboardVisible::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___IsDashboardVisible*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::__IVROverlay___IsDashboardVisible::__IVROverlay___IsDashboardVisible() {}
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___IsActiveDashboardOverlay._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVROverlay___IsActiveDashboardOverlay::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::__IVROverlay___IsActiveDashboardOverlay::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x4007660;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___IsActiveDashboardOverlay*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___IsActiveDashboardOverlay.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::__IVROverlay___IsActiveDashboardOverlay::*)(uint64_t)>(
    &::OVR::OpenVR::__IVROverlay___IsActiveDashboardOverlay::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x40076ec;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___IsActiveDashboardOverlay*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___IsActiveDashboardOverlay*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___IsActiveDashboardOverlay.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::__IVROverlay___IsActiveDashboardOverlay::*)(uint64_t, ::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::__IVROverlay___IsActiveDashboardOverlay::BeginInvoke)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x4007700;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___IsActiveDashboardOverlay*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___IsActiveDashboardOverlay*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___IsActiveDashboardOverlay.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::__IVROverlay___IsActiveDashboardOverlay::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::__IVROverlay___IsActiveDashboardOverlay::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x4007784;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___IsActiveDashboardOverlay*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___IsActiveDashboardOverlay*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVROverlay___IsActiveDashboardOverlay* OVR::OpenVR::__IVROverlay___IsActiveDashboardOverlay::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVROverlay___IsActiveDashboardOverlay*>(object, method));
}
inline void OVR::OpenVR::__IVROverlay___IsActiveDashboardOverlay::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___IsActiveDashboardOverlay*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline bool OVR::OpenVR::__IVROverlay___IsActiveDashboardOverlay::Invoke(uint64_t ulOverlayHandle) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___IsActiveDashboardOverlay*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, ulOverlayHandle);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVROverlay___IsActiveDashboardOverlay::BeginInvoke(uint64_t ulOverlayHandle, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___IsActiveDashboardOverlay*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, ulOverlayHandle, callback, object);
}
inline bool OVR::OpenVR::__IVROverlay___IsActiveDashboardOverlay::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___IsActiveDashboardOverlay*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::__IVROverlay___IsActiveDashboardOverlay::__IVROverlay___IsActiveDashboardOverlay() {}
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___SetDashboardOverlaySceneProcess._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVROverlay___SetDashboardOverlaySceneProcess::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::__IVROverlay___SetDashboardOverlaySceneProcess::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x40077ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetDashboardOverlaySceneProcess*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___SetDashboardOverlaySceneProcess.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::__IVROverlay___SetDashboardOverlaySceneProcess::*)(
    uint64_t, uint32_t)>(&::OVR::OpenVR::__IVROverlay___SetDashboardOverlaySceneProcess::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x4007838;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetDashboardOverlaySceneProcess*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetDashboardOverlaySceneProcess*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___SetDashboardOverlaySceneProcess.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::__IVROverlay___SetDashboardOverlaySceneProcess::*)(uint64_t, uint32_t, ::System::AsyncCallback*, ::System::Object*)>(
        &::OVR::OpenVR::__IVROverlay___SetDashboardOverlaySceneProcess::BeginInvoke)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x400784c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetDashboardOverlaySceneProcess*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetDashboardOverlaySceneProcess*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___SetDashboardOverlaySceneProcess.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::__IVROverlay___SetDashboardOverlaySceneProcess::*)(
    ::System::IAsyncResult*)>(&::OVR::OpenVR::__IVROverlay___SetDashboardOverlaySceneProcess::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x4007904;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetDashboardOverlaySceneProcess*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetDashboardOverlaySceneProcess*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVROverlay___SetDashboardOverlaySceneProcess* OVR::OpenVR::__IVROverlay___SetDashboardOverlaySceneProcess::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVROverlay___SetDashboardOverlaySceneProcess*>(object, method));
}
inline void OVR::OpenVR::__IVROverlay___SetDashboardOverlaySceneProcess::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetDashboardOverlaySceneProcess*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::__IVROverlay___SetDashboardOverlaySceneProcess::Invoke(uint64_t ulOverlayHandle, uint32_t unProcessId) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetDashboardOverlaySceneProcess*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, ulOverlayHandle, unProcessId);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVROverlay___SetDashboardOverlaySceneProcess::BeginInvoke(uint64_t ulOverlayHandle, uint32_t unProcessId, ::System::AsyncCallback* callback,
                                                                                                        ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetDashboardOverlaySceneProcess*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, ulOverlayHandle, unProcessId, callback, object);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::__IVROverlay___SetDashboardOverlaySceneProcess::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetDashboardOverlaySceneProcess*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::__IVROverlay___SetDashboardOverlaySceneProcess::__IVROverlay___SetDashboardOverlaySceneProcess() {}
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___GetDashboardOverlaySceneProcess._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVROverlay___GetDashboardOverlaySceneProcess::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::__IVROverlay___GetDashboardOverlaySceneProcess::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x400792c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetDashboardOverlaySceneProcess*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___GetDashboardOverlaySceneProcess.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::__IVROverlay___GetDashboardOverlaySceneProcess::*)(
    uint64_t, ByRef<uint32_t>)>(&::OVR::OpenVR::__IVROverlay___GetDashboardOverlaySceneProcess::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x40079b8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetDashboardOverlaySceneProcess*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetDashboardOverlaySceneProcess*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___GetDashboardOverlaySceneProcess.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::__IVROverlay___GetDashboardOverlaySceneProcess::*)(uint64_t, ByRef<uint32_t>, ::System::AsyncCallback*, ::System::Object*)>(
        &::OVR::OpenVR::__IVROverlay___GetDashboardOverlaySceneProcess::BeginInvoke)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x40079cc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetDashboardOverlaySceneProcess*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetDashboardOverlaySceneProcess*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___GetDashboardOverlaySceneProcess.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::__IVROverlay___GetDashboardOverlaySceneProcess::*)(
    ByRef<uint32_t>, ::System::IAsyncResult*)>(&::OVR::OpenVR::__IVROverlay___GetDashboardOverlaySceneProcess::EndInvoke)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x4007a88;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetDashboardOverlaySceneProcess*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetDashboardOverlaySceneProcess*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVROverlay___GetDashboardOverlaySceneProcess* OVR::OpenVR::__IVROverlay___GetDashboardOverlaySceneProcess::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVROverlay___GetDashboardOverlaySceneProcess*>(object, method));
}
inline void OVR::OpenVR::__IVROverlay___GetDashboardOverlaySceneProcess::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetDashboardOverlaySceneProcess*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::__IVROverlay___GetDashboardOverlaySceneProcess::Invoke(uint64_t ulOverlayHandle, ByRef<uint32_t> punProcessId) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetDashboardOverlaySceneProcess*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, ulOverlayHandle, punProcessId);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVROverlay___GetDashboardOverlaySceneProcess::BeginInvoke(uint64_t ulOverlayHandle, ByRef<uint32_t> punProcessId, ::System::AsyncCallback* callback,
                                                                                                        ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetDashboardOverlaySceneProcess*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, ulOverlayHandle, punProcessId, callback, object);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::__IVROverlay___GetDashboardOverlaySceneProcess::EndInvoke(ByRef<uint32_t> punProcessId, ::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetDashboardOverlaySceneProcess*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, punProcessId, result);
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::__IVROverlay___GetDashboardOverlaySceneProcess::__IVROverlay___GetDashboardOverlaySceneProcess() {}
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___ShowDashboard._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVROverlay___ShowDashboard::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::__IVROverlay___ShowDashboard::_ctor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x4007ab4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___ShowDashboard*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___ShowDashboard.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVROverlay___ShowDashboard::*)(::StringW)>(
    &::OVR::OpenVR::__IVROverlay___ShowDashboard::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x4007b50;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___ShowDashboard*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___ShowDashboard*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___ShowDashboard.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::__IVROverlay___ShowDashboard::*)(::StringW, ::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::__IVROverlay___ShowDashboard::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x4007b64;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___ShowDashboard*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___ShowDashboard*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___ShowDashboard.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVROverlay___ShowDashboard::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::__IVROverlay___ShowDashboard::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x4007b84;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___ShowDashboard*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___ShowDashboard*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVROverlay___ShowDashboard* OVR::OpenVR::__IVROverlay___ShowDashboard::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVROverlay___ShowDashboard*>(object, method));
}
inline void OVR::OpenVR::__IVROverlay___ShowDashboard::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___ShowDashboard*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void OVR::OpenVR::__IVROverlay___ShowDashboard::Invoke(::StringW pchOverlayToShow) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___ShowDashboard*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pchOverlayToShow);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVROverlay___ShowDashboard::BeginInvoke(::StringW pchOverlayToShow, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___ShowDashboard*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, pchOverlayToShow, callback, object);
}
inline void OVR::OpenVR::__IVROverlay___ShowDashboard::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___ShowDashboard*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::__IVROverlay___ShowDashboard::__IVROverlay___ShowDashboard() {}
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___GetPrimaryDashboardDevice._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVROverlay___GetPrimaryDashboardDevice::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::__IVROverlay___GetPrimaryDashboardDevice::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x4007b90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetPrimaryDashboardDevice*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___GetPrimaryDashboardDevice.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::OVR::OpenVR::__IVROverlay___GetPrimaryDashboardDevice::*)()>(
    &::OVR::OpenVR::__IVROverlay___GetPrimaryDashboardDevice::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x4007c18;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetPrimaryDashboardDevice*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetPrimaryDashboardDevice*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___GetPrimaryDashboardDevice.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::__IVROverlay___GetPrimaryDashboardDevice::*)(::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::__IVROverlay___GetPrimaryDashboardDevice::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x4007c2c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetPrimaryDashboardDevice*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetPrimaryDashboardDevice*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___GetPrimaryDashboardDevice.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::OVR::OpenVR::__IVROverlay___GetPrimaryDashboardDevice::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::__IVROverlay___GetPrimaryDashboardDevice::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x4007c4c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetPrimaryDashboardDevice*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetPrimaryDashboardDevice*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVROverlay___GetPrimaryDashboardDevice* OVR::OpenVR::__IVROverlay___GetPrimaryDashboardDevice::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVROverlay___GetPrimaryDashboardDevice*>(object, method));
}
inline void OVR::OpenVR::__IVROverlay___GetPrimaryDashboardDevice::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetPrimaryDashboardDevice*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline uint32_t OVR::OpenVR::__IVROverlay___GetPrimaryDashboardDevice::Invoke() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetPrimaryDashboardDevice*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVROverlay___GetPrimaryDashboardDevice::BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetPrimaryDashboardDevice*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, callback, object);
}
inline uint32_t OVR::OpenVR::__IVROverlay___GetPrimaryDashboardDevice::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetPrimaryDashboardDevice*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::__IVROverlay___GetPrimaryDashboardDevice::__IVROverlay___GetPrimaryDashboardDevice() {}
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___ShowKeyboard._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVROverlay___ShowKeyboard::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::__IVROverlay___ShowKeyboard::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x4007c74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___ShowKeyboard*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___ShowKeyboard.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::__IVROverlay___ShowKeyboard::*)(
    int32_t, int32_t, ::StringW, uint32_t, ::StringW, bool, uint64_t)>(&::OVR::OpenVR::__IVROverlay___ShowKeyboard::Invoke)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x4007d00;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___ShowKeyboard*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___ShowKeyboard*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___ShowKeyboard.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::__IVROverlay___ShowKeyboard::*)(int32_t, int32_t, ::StringW, uint32_t, ::StringW, bool, uint64_t, ::System::AsyncCallback*, ::System::Object*)>(
        &::OVR::OpenVR::__IVROverlay___ShowKeyboard::BeginInvoke)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x4007d1c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___ShowKeyboard*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___ShowKeyboard*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___ShowKeyboard.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::__IVROverlay___ShowKeyboard::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::__IVROverlay___ShowKeyboard::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x4007e60;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___ShowKeyboard*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___ShowKeyboard*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVROverlay___ShowKeyboard* OVR::OpenVR::__IVROverlay___ShowKeyboard::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVROverlay___ShowKeyboard*>(object, method));
}
inline void OVR::OpenVR::__IVROverlay___ShowKeyboard::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___ShowKeyboard*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::__IVROverlay___ShowKeyboard::Invoke(int32_t eInputMode, int32_t eLineInputMode, ::StringW pchDescription, uint32_t unCharMax,
                                                                                       ::StringW pchExistingText, bool bUseMinimalMode, uint64_t uUserValue) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___ShowKeyboard*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, eInputMode, eLineInputMode, pchDescription, unCharMax, pchExistingText, bUseMinimalMode,
                                                                                    uUserValue);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVROverlay___ShowKeyboard::BeginInvoke(int32_t eInputMode, int32_t eLineInputMode, ::StringW pchDescription, uint32_t unCharMax,
                                                                                     ::StringW pchExistingText, bool bUseMinimalMode, uint64_t uUserValue, ::System::AsyncCallback* callback,
                                                                                     ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___ShowKeyboard*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, eInputMode, eLineInputMode, pchDescription, unCharMax, pchExistingText, bUseMinimalMode,
                                                                             uUserValue, callback, object);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::__IVROverlay___ShowKeyboard::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___ShowKeyboard*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::__IVROverlay___ShowKeyboard::__IVROverlay___ShowKeyboard() {}
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___ShowKeyboardForOverlay._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVROverlay___ShowKeyboardForOverlay::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::__IVROverlay___ShowKeyboardForOverlay::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x4007e88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___ShowKeyboardForOverlay*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___ShowKeyboardForOverlay.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::__IVROverlay___ShowKeyboardForOverlay::*)(
    uint64_t, int32_t, int32_t, ::StringW, uint32_t, ::StringW, bool, uint64_t)>(&::OVR::OpenVR::__IVROverlay___ShowKeyboardForOverlay::Invoke)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x4007f14;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___ShowKeyboardForOverlay*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___ShowKeyboardForOverlay*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___ShowKeyboardForOverlay.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::__IVROverlay___ShowKeyboardForOverlay::*)(uint64_t, int32_t, int32_t, ::StringW, uint32_t, ::StringW, bool, uint64_t, ::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::__IVROverlay___ShowKeyboardForOverlay::BeginInvoke)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x4007f30;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___ShowKeyboardForOverlay*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___ShowKeyboardForOverlay*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___ShowKeyboardForOverlay.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::__IVROverlay___ShowKeyboardForOverlay::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::__IVROverlay___ShowKeyboardForOverlay::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x4008088;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___ShowKeyboardForOverlay*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___ShowKeyboardForOverlay*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVROverlay___ShowKeyboardForOverlay* OVR::OpenVR::__IVROverlay___ShowKeyboardForOverlay::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVROverlay___ShowKeyboardForOverlay*>(object, method));
}
inline void OVR::OpenVR::__IVROverlay___ShowKeyboardForOverlay::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___ShowKeyboardForOverlay*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::__IVROverlay___ShowKeyboardForOverlay::Invoke(uint64_t ulOverlayHandle, int32_t eInputMode, int32_t eLineInputMode, ::StringW pchDescription,
                                                                                                 uint32_t unCharMax, ::StringW pchExistingText, bool bUseMinimalMode, uint64_t uUserValue) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___ShowKeyboardForOverlay*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, ulOverlayHandle, eInputMode, eLineInputMode, pchDescription, unCharMax, pchExistingText,
                                                                                    bUseMinimalMode, uUserValue);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVROverlay___ShowKeyboardForOverlay::BeginInvoke(uint64_t ulOverlayHandle, int32_t eInputMode, int32_t eLineInputMode, ::StringW pchDescription,
                                                                                               uint32_t unCharMax, ::StringW pchExistingText, bool bUseMinimalMode, uint64_t uUserValue,
                                                                                               ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___ShowKeyboardForOverlay*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, ulOverlayHandle, eInputMode, eLineInputMode, pchDescription, unCharMax, pchExistingText,
                                                                             bUseMinimalMode, uUserValue, callback, object);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::__IVROverlay___ShowKeyboardForOverlay::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___ShowKeyboardForOverlay*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::__IVROverlay___ShowKeyboardForOverlay::__IVROverlay___ShowKeyboardForOverlay() {}
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___GetKeyboardText._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVROverlay___GetKeyboardText::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::__IVROverlay___GetKeyboardText::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x40080b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetKeyboardText*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___GetKeyboardText.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::OVR::OpenVR::__IVROverlay___GetKeyboardText::*)(::System::Text::StringBuilder*, uint32_t)>(
    &::OVR::OpenVR::__IVROverlay___GetKeyboardText::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x4008150;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetKeyboardText*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetKeyboardText*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___GetKeyboardText.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::__IVROverlay___GetKeyboardText::*)(::System::Text::StringBuilder*, uint32_t, ::System::AsyncCallback*, ::System::Object*)>(
        &::OVR::OpenVR::__IVROverlay___GetKeyboardText::BeginInvoke)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x4008164;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetKeyboardText*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetKeyboardText*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___GetKeyboardText.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::OVR::OpenVR::__IVROverlay___GetKeyboardText::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::__IVROverlay___GetKeyboardText::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x40081f8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetKeyboardText*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetKeyboardText*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVROverlay___GetKeyboardText* OVR::OpenVR::__IVROverlay___GetKeyboardText::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVROverlay___GetKeyboardText*>(object, method));
}
inline void OVR::OpenVR::__IVROverlay___GetKeyboardText::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetKeyboardText*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline uint32_t OVR::OpenVR::__IVROverlay___GetKeyboardText::Invoke(::System::Text::StringBuilder* pchText, uint32_t cchText) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetKeyboardText*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method, pchText, cchText);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVROverlay___GetKeyboardText::BeginInvoke(::System::Text::StringBuilder* pchText, uint32_t cchText, ::System::AsyncCallback* callback,
                                                                                        ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetKeyboardText*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, pchText, cchText, callback, object);
}
inline uint32_t OVR::OpenVR::__IVROverlay___GetKeyboardText::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetKeyboardText*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::__IVROverlay___GetKeyboardText::__IVROverlay___GetKeyboardText() {}
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___HideKeyboard._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVROverlay___HideKeyboard::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::__IVROverlay___HideKeyboard::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x4008220;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___HideKeyboard*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___HideKeyboard.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVROverlay___HideKeyboard::*)()>(&::OVR::OpenVR::__IVROverlay___HideKeyboard::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x40082a8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___HideKeyboard*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___HideKeyboard*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___HideKeyboard.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (::OVR::OpenVR::__IVROverlay___HideKeyboard::*)(::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::__IVROverlay___HideKeyboard::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x40082bc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___HideKeyboard*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___HideKeyboard*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___HideKeyboard.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVROverlay___HideKeyboard::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::__IVROverlay___HideKeyboard::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x40082dc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___HideKeyboard*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___HideKeyboard*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVROverlay___HideKeyboard* OVR::OpenVR::__IVROverlay___HideKeyboard::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVROverlay___HideKeyboard*>(object, method));
}
inline void OVR::OpenVR::__IVROverlay___HideKeyboard::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___HideKeyboard*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void OVR::OpenVR::__IVROverlay___HideKeyboard::Invoke() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___HideKeyboard*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVROverlay___HideKeyboard::BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___HideKeyboard*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, callback, object);
}
inline void OVR::OpenVR::__IVROverlay___HideKeyboard::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___HideKeyboard*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::__IVROverlay___HideKeyboard::__IVROverlay___HideKeyboard() {}
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___SetKeyboardTransformAbsolute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVROverlay___SetKeyboardTransformAbsolute::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::__IVROverlay___SetKeyboardTransformAbsolute::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x40082e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetKeyboardTransformAbsolute*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___SetKeyboardTransformAbsolute.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVROverlay___SetKeyboardTransformAbsolute::*)(
    ::OVR::OpenVR::ETrackingUniverseOrigin, ByRef<::OVR::OpenVR::HmdMatrix34_t>)>(&::OVR::OpenVR::__IVROverlay___SetKeyboardTransformAbsolute::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x4008374;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetKeyboardTransformAbsolute*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetKeyboardTransformAbsolute*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___SetKeyboardTransformAbsolute.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::__IVROverlay___SetKeyboardTransformAbsolute::*)(::OVR::OpenVR::ETrackingUniverseOrigin, ByRef<::OVR::OpenVR::HmdMatrix34_t>, ::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::__IVROverlay___SetKeyboardTransformAbsolute::BeginInvoke)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x4008388;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetKeyboardTransformAbsolute*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetKeyboardTransformAbsolute*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___SetKeyboardTransformAbsolute.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVROverlay___SetKeyboardTransformAbsolute::*)(
    ByRef<::OVR::OpenVR::HmdMatrix34_t>, ::System::IAsyncResult*)>(&::OVR::OpenVR::__IVROverlay___SetKeyboardTransformAbsolute::EndInvoke)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x4008444;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetKeyboardTransformAbsolute*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetKeyboardTransformAbsolute*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVROverlay___SetKeyboardTransformAbsolute* OVR::OpenVR::__IVROverlay___SetKeyboardTransformAbsolute::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVROverlay___SetKeyboardTransformAbsolute*>(object, method));
}
inline void OVR::OpenVR::__IVROverlay___SetKeyboardTransformAbsolute::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetKeyboardTransformAbsolute*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void OVR::OpenVR::__IVROverlay___SetKeyboardTransformAbsolute::Invoke(::OVR::OpenVR::ETrackingUniverseOrigin eTrackingOrigin,
                                                                             ByRef<::OVR::OpenVR::HmdMatrix34_t> pmatTrackingOriginToKeyboardTransform) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetKeyboardTransformAbsolute*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, eTrackingOrigin, pmatTrackingOriginToKeyboardTransform);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVROverlay___SetKeyboardTransformAbsolute::BeginInvoke(::OVR::OpenVR::ETrackingUniverseOrigin eTrackingOrigin,
                                                                                                     ByRef<::OVR::OpenVR::HmdMatrix34_t> pmatTrackingOriginToKeyboardTransform,
                                                                                                     ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetKeyboardTransformAbsolute*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, eTrackingOrigin, pmatTrackingOriginToKeyboardTransform, callback, object);
}
inline void OVR::OpenVR::__IVROverlay___SetKeyboardTransformAbsolute::EndInvoke(ByRef<::OVR::OpenVR::HmdMatrix34_t> pmatTrackingOriginToKeyboardTransform, ::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetKeyboardTransformAbsolute*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pmatTrackingOriginToKeyboardTransform, result);
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::__IVROverlay___SetKeyboardTransformAbsolute::__IVROverlay___SetKeyboardTransformAbsolute() {}
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___SetKeyboardPositionForOverlay._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVROverlay___SetKeyboardPositionForOverlay::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::__IVROverlay___SetKeyboardPositionForOverlay::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x4008460;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetKeyboardPositionForOverlay*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___SetKeyboardPositionForOverlay.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVROverlay___SetKeyboardPositionForOverlay::*)(uint64_t, ::OVR::OpenVR::HmdRect2_t)>(
    &::OVR::OpenVR::__IVROverlay___SetKeyboardPositionForOverlay::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x40084ec;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetKeyboardPositionForOverlay*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetKeyboardPositionForOverlay*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___SetKeyboardPositionForOverlay.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::IAsyncResult* (::OVR::OpenVR::__IVROverlay___SetKeyboardPositionForOverlay::*)(uint64_t, ::OVR::OpenVR::HmdRect2_t, ::System::AsyncCallback*, ::System::Object*)>(
        &::OVR::OpenVR::__IVROverlay___SetKeyboardPositionForOverlay::BeginInvoke)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x4008500;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetKeyboardPositionForOverlay*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetKeyboardPositionForOverlay*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___SetKeyboardPositionForOverlay.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVROverlay___SetKeyboardPositionForOverlay::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::__IVROverlay___SetKeyboardPositionForOverlay::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x40085bc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetKeyboardPositionForOverlay*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetKeyboardPositionForOverlay*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVROverlay___SetKeyboardPositionForOverlay* OVR::OpenVR::__IVROverlay___SetKeyboardPositionForOverlay::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVROverlay___SetKeyboardPositionForOverlay*>(object, method));
}
inline void OVR::OpenVR::__IVROverlay___SetKeyboardPositionForOverlay::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetKeyboardPositionForOverlay*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void OVR::OpenVR::__IVROverlay___SetKeyboardPositionForOverlay::Invoke(uint64_t ulOverlayHandle, ::OVR::OpenVR::HmdRect2_t avoidRect) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetKeyboardPositionForOverlay*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ulOverlayHandle, avoidRect);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVROverlay___SetKeyboardPositionForOverlay::BeginInvoke(uint64_t ulOverlayHandle, ::OVR::OpenVR::HmdRect2_t avoidRect, ::System::AsyncCallback* callback,
                                                                                                      ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetKeyboardPositionForOverlay*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, ulOverlayHandle, avoidRect, callback, object);
}
inline void OVR::OpenVR::__IVROverlay___SetKeyboardPositionForOverlay::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetKeyboardPositionForOverlay*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::__IVROverlay___SetKeyboardPositionForOverlay::__IVROverlay___SetKeyboardPositionForOverlay() {}
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___SetOverlayIntersectionMask._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVROverlay___SetOverlayIntersectionMask::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::__IVROverlay___SetOverlayIntersectionMask::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x40085c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayIntersectionMask*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___SetOverlayIntersectionMask.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::__IVROverlay___SetOverlayIntersectionMask::*)(
    uint64_t, ByRef<::OVR::OpenVR::VROverlayIntersectionMaskPrimitive_t>, uint32_t, uint32_t)>(&::OVR::OpenVR::__IVROverlay___SetOverlayIntersectionMask::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x4008654;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayIntersectionMask*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayIntersectionMask*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___SetOverlayIntersectionMask.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::__IVROverlay___SetOverlayIntersectionMask::*)(uint64_t, ByRef<::OVR::OpenVR::VROverlayIntersectionMaskPrimitive_t>, uint32_t, uint32_t, ::System::AsyncCallback*,
                                                                 ::System::Object*)>(&::OVR::OpenVR::__IVROverlay___SetOverlayIntersectionMask::BeginInvoke)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x4008668;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayIntersectionMask*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayIntersectionMask*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___SetOverlayIntersectionMask.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::__IVROverlay___SetOverlayIntersectionMask::*)(
    ByRef<::OVR::OpenVR::VROverlayIntersectionMaskPrimitive_t>, ::System::IAsyncResult*)>(&::OVR::OpenVR::__IVROverlay___SetOverlayIntersectionMask::EndInvoke)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x400876c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayIntersectionMask*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayIntersectionMask*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVROverlay___SetOverlayIntersectionMask* OVR::OpenVR::__IVROverlay___SetOverlayIntersectionMask::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVROverlay___SetOverlayIntersectionMask*>(object, method));
}
inline void OVR::OpenVR::__IVROverlay___SetOverlayIntersectionMask::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayIntersectionMask*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::__IVROverlay___SetOverlayIntersectionMask::Invoke(uint64_t ulOverlayHandle,
                                                                                                     ByRef<::OVR::OpenVR::VROverlayIntersectionMaskPrimitive_t> pMaskPrimitives,
                                                                                                     uint32_t unNumMaskPrimitives, uint32_t unPrimitiveSize) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayIntersectionMask*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, ulOverlayHandle, pMaskPrimitives, unNumMaskPrimitives, unPrimitiveSize);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVROverlay___SetOverlayIntersectionMask::BeginInvoke(uint64_t ulOverlayHandle, ByRef<::OVR::OpenVR::VROverlayIntersectionMaskPrimitive_t> pMaskPrimitives,
                                                                                                   uint32_t unNumMaskPrimitives, uint32_t unPrimitiveSize, ::System::AsyncCallback* callback,
                                                                                                   ::System::Object* object) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayIntersectionMask*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, ulOverlayHandle, pMaskPrimitives, unNumMaskPrimitives, unPrimitiveSize, callback, object);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::__IVROverlay___SetOverlayIntersectionMask::EndInvoke(ByRef<::OVR::OpenVR::VROverlayIntersectionMaskPrimitive_t> pMaskPrimitives,
                                                                                                        ::System::IAsyncResult* result) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___SetOverlayIntersectionMask*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, pMaskPrimitives, result);
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::__IVROverlay___SetOverlayIntersectionMask::__IVROverlay___SetOverlayIntersectionMask() {}
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___GetOverlayFlags._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVROverlay___GetOverlayFlags::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::__IVROverlay___GetOverlayFlags::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x4008798;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayFlags*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___GetOverlayFlags.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::__IVROverlay___GetOverlayFlags::*)(uint64_t, ByRef<uint32_t>)>(
    &::OVR::OpenVR::__IVROverlay___GetOverlayFlags::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x4008824;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayFlags*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayFlags*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___GetOverlayFlags.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::__IVROverlay___GetOverlayFlags::*)(uint64_t, ByRef<uint32_t>, ::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::__IVROverlay___GetOverlayFlags::BeginInvoke)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x4008838;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayFlags*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayFlags*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___GetOverlayFlags.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVROverlayError (::OVR::OpenVR::__IVROverlay___GetOverlayFlags::*)(
    ByRef<uint32_t>, ::System::IAsyncResult*)>(&::OVR::OpenVR::__IVROverlay___GetOverlayFlags::EndInvoke)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x40088f4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayFlags*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayFlags*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVROverlay___GetOverlayFlags* OVR::OpenVR::__IVROverlay___GetOverlayFlags::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVROverlay___GetOverlayFlags*>(object, method));
}
inline void OVR::OpenVR::__IVROverlay___GetOverlayFlags::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayFlags*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::__IVROverlay___GetOverlayFlags::Invoke(uint64_t ulOverlayHandle, ByRef<uint32_t> pFlags) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayFlags*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, ulOverlayHandle, pFlags);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVROverlay___GetOverlayFlags::BeginInvoke(uint64_t ulOverlayHandle, ByRef<uint32_t> pFlags, ::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayFlags*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, ulOverlayHandle, pFlags, callback, object);
}
inline ::OVR::OpenVR::EVROverlayError OVR::OpenVR::__IVROverlay___GetOverlayFlags::EndInvoke(ByRef<uint32_t> pFlags, ::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___GetOverlayFlags*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::EVROverlayError, false>(this, ___internal_method, pFlags, result);
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::__IVROverlay___GetOverlayFlags::__IVROverlay___GetOverlayFlags() {}
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___ShowMessageOverlay._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVROverlay___ShowMessageOverlay::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::__IVROverlay___ShowMessageOverlay::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x4008920;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___ShowMessageOverlay*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___ShowMessageOverlay.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::VRMessageOverlayResponse (::OVR::OpenVR::__IVROverlay___ShowMessageOverlay::*)(
    ::StringW, ::StringW, ::StringW, ::StringW, ::StringW, ::StringW)>(&::OVR::OpenVR::__IVROverlay___ShowMessageOverlay::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x40089c0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___ShowMessageOverlay*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___ShowMessageOverlay*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___ShowMessageOverlay.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::__IVROverlay___ShowMessageOverlay::*)(::StringW, ::StringW, ::StringW, ::StringW, ::StringW, ::StringW, ::System::AsyncCallback*, ::System::Object*)>(
    &::OVR::OpenVR::__IVROverlay___ShowMessageOverlay::BeginInvoke)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x40089d4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___ShowMessageOverlay*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___ShowMessageOverlay*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___ShowMessageOverlay.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::OVR::OpenVR::VRMessageOverlayResponse (::OVR::OpenVR::__IVROverlay___ShowMessageOverlay::*)(::System::IAsyncResult*)>(&::OVR::OpenVR::__IVROverlay___ShowMessageOverlay::EndInvoke)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x4008a08;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___ShowMessageOverlay*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___ShowMessageOverlay*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVROverlay___ShowMessageOverlay* OVR::OpenVR::__IVROverlay___ShowMessageOverlay::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVROverlay___ShowMessageOverlay*>(object, method));
}
inline void OVR::OpenVR::__IVROverlay___ShowMessageOverlay::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___ShowMessageOverlay*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline ::OVR::OpenVR::VRMessageOverlayResponse OVR::OpenVR::__IVROverlay___ShowMessageOverlay::Invoke(::StringW pchText, ::StringW pchCaption, ::StringW pchButton0Text, ::StringW pchButton1Text,
                                                                                                      ::StringW pchButton2Text, ::StringW pchButton3Text) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___ShowMessageOverlay*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::VRMessageOverlayResponse, false>(this, ___internal_method, pchText, pchCaption, pchButton0Text, pchButton1Text, pchButton2Text,
                                                                                             pchButton3Text);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVROverlay___ShowMessageOverlay::BeginInvoke(::StringW pchText, ::StringW pchCaption, ::StringW pchButton0Text, ::StringW pchButton1Text,
                                                                                           ::StringW pchButton2Text, ::StringW pchButton3Text, ::System::AsyncCallback* callback,
                                                                                           ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___ShowMessageOverlay*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, pchText, pchCaption, pchButton0Text, pchButton1Text, pchButton2Text, pchButton3Text, callback,
                                                                             object);
}
inline ::OVR::OpenVR::VRMessageOverlayResponse OVR::OpenVR::__IVROverlay___ShowMessageOverlay::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___ShowMessageOverlay*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::OVR::OpenVR::VRMessageOverlayResponse, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::__IVROverlay___ShowMessageOverlay::__IVROverlay___ShowMessageOverlay() {}
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___CloseMessageOverlay._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVROverlay___CloseMessageOverlay::*)(::System::Object*, ::System::IntPtr)>(
    &::OVR::OpenVR::__IVROverlay___CloseMessageOverlay::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x4008a30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___CloseMessageOverlay*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___CloseMessageOverlay.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVROverlay___CloseMessageOverlay::*)()>(
    &::OVR::OpenVR::__IVROverlay___CloseMessageOverlay::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x4008ab8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___CloseMessageOverlay*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___CloseMessageOverlay*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___CloseMessageOverlay.BeginInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (
    ::OVR::OpenVR::__IVROverlay___CloseMessageOverlay::*)(::System::AsyncCallback*, ::System::Object*)>(&::OVR::OpenVR::__IVROverlay___CloseMessageOverlay::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x4008acc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___CloseMessageOverlay*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___CloseMessageOverlay*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::__IVROverlay___CloseMessageOverlay.EndInvoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::__IVROverlay___CloseMessageOverlay::*)(::System::IAsyncResult*)>(
    &::OVR::OpenVR::__IVROverlay___CloseMessageOverlay::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x4008aec;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___CloseMessageOverlay*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___CloseMessageOverlay*>::get(), 15));
    return ___internal_method;
  }
};
inline ::OVR::OpenVR::__IVROverlay___CloseMessageOverlay* OVR::OpenVR::__IVROverlay___CloseMessageOverlay::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::OVR::OpenVR::__IVROverlay___CloseMessageOverlay*>(object, method));
}
inline void OVR::OpenVR::__IVROverlay___CloseMessageOverlay::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___CloseMessageOverlay*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void OVR::OpenVR::__IVROverlay___CloseMessageOverlay::Invoke() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___CloseMessageOverlay*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::IAsyncResult* OVR::OpenVR::__IVROverlay___CloseMessageOverlay::BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___CloseMessageOverlay*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, callback, object);
}
inline void OVR::OpenVR::__IVROverlay___CloseMessageOverlay::EndInvoke(::System::IAsyncResult* result) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::__IVROverlay___CloseMessageOverlay*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::__IVROverlay___CloseMessageOverlay::__IVROverlay___CloseMessageOverlay() {}
// Ctor Parameters [CppParam { name: "FindOverlay", ty: "::OVR::OpenVR::__IVROverlay___FindOverlay*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "CreateOverlay", ty:
// "::OVR::OpenVR::__IVROverlay___CreateOverlay*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "DestroyOverlay", ty: "::OVR::OpenVR::__IVROverlay___DestroyOverlay*", modifiers: "",
// def_value: Some("nullptr") }, CppParam { name: "SetHighQualityOverlay", ty: "::OVR::OpenVR::__IVROverlay___SetHighQualityOverlay*", modifiers: "", def_value: Some("nullptr") }, CppParam { name:
// "GetHighQualityOverlay", ty: "::OVR::OpenVR::__IVROverlay___GetHighQualityOverlay*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "GetOverlayKey", ty:
// "::OVR::OpenVR::__IVROverlay___GetOverlayKey*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "GetOverlayName", ty: "::OVR::OpenVR::__IVROverlay___GetOverlayName*", modifiers: "",
// def_value: Some("nullptr") }, CppParam { name: "SetOverlayName", ty: "::OVR::OpenVR::__IVROverlay___SetOverlayName*", modifiers: "", def_value: Some("nullptr") }, CppParam { name:
// "GetOverlayImageData", ty: "::OVR::OpenVR::__IVROverlay___GetOverlayImageData*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "GetOverlayErrorNameFromEnum", ty:
// "::OVR::OpenVR::__IVROverlay___GetOverlayErrorNameFromEnum*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "SetOverlayRenderingPid", ty:
// "::OVR::OpenVR::__IVROverlay___SetOverlayRenderingPid*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "GetOverlayRenderingPid", ty:
// "::OVR::OpenVR::__IVROverlay___GetOverlayRenderingPid*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "SetOverlayFlag", ty: "::OVR::OpenVR::__IVROverlay___SetOverlayFlag*",
// modifiers: "", def_value: Some("nullptr") }, CppParam { name: "GetOverlayFlag", ty: "::OVR::OpenVR::__IVROverlay___GetOverlayFlag*", modifiers: "", def_value: Some("nullptr") }, CppParam { name:
// "SetOverlayColor", ty: "::OVR::OpenVR::__IVROverlay___SetOverlayColor*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "GetOverlayColor", ty:
// "::OVR::OpenVR::__IVROverlay___GetOverlayColor*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "SetOverlayAlpha", ty: "::OVR::OpenVR::__IVROverlay___SetOverlayAlpha*", modifiers:
// "", def_value: Some("nullptr") }, CppParam { name: "GetOverlayAlpha", ty: "::OVR::OpenVR::__IVROverlay___GetOverlayAlpha*", modifiers: "", def_value: Some("nullptr") }, CppParam { name:
// "SetOverlayTexelAspect", ty: "::OVR::OpenVR::__IVROverlay___SetOverlayTexelAspect*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "GetOverlayTexelAspect", ty:
// "::OVR::OpenVR::__IVROverlay___GetOverlayTexelAspect*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "SetOverlaySortOrder", ty:
// "::OVR::OpenVR::__IVROverlay___SetOverlaySortOrder*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "GetOverlaySortOrder", ty: "::OVR::OpenVR::__IVROverlay___GetOverlaySortOrder*",
// modifiers: "", def_value: Some("nullptr") }, CppParam { name: "SetOverlayWidthInMeters", ty: "::OVR::OpenVR::__IVROverlay___SetOverlayWidthInMeters*", modifiers: "", def_value: Some("nullptr") },
// CppParam { name: "GetOverlayWidthInMeters", ty: "::OVR::OpenVR::__IVROverlay___GetOverlayWidthInMeters*", modifiers: "", def_value: Some("nullptr") }, CppParam { name:
// "SetOverlayAutoCurveDistanceRangeInMeters", ty: "::OVR::OpenVR::__IVROverlay___SetOverlayAutoCurveDistanceRangeInMeters*", modifiers: "", def_value: Some("nullptr") }, CppParam { name:
// "GetOverlayAutoCurveDistanceRangeInMeters", ty: "::OVR::OpenVR::__IVROverlay___GetOverlayAutoCurveDistanceRangeInMeters*", modifiers: "", def_value: Some("nullptr") }, CppParam { name:
// "SetOverlayTextureColorSpace", ty: "::OVR::OpenVR::__IVROverlay___SetOverlayTextureColorSpace*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "GetOverlayTextureColorSpace", ty:
// "::OVR::OpenVR::__IVROverlay___GetOverlayTextureColorSpace*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "SetOverlayTextureBounds", ty:
// "::OVR::OpenVR::__IVROverlay___SetOverlayTextureBounds*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "GetOverlayTextureBounds", ty:
// "::OVR::OpenVR::__IVROverlay___GetOverlayTextureBounds*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "GetOverlayRenderModel", ty:
// "::OVR::OpenVR::__IVROverlay___GetOverlayRenderModel*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "SetOverlayRenderModel", ty:
// "::OVR::OpenVR::__IVROverlay___SetOverlayRenderModel*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "GetOverlayTransformType", ty:
// "::OVR::OpenVR::__IVROverlay___GetOverlayTransformType*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "SetOverlayTransformAbsolute", ty:
// "::OVR::OpenVR::__IVROverlay___SetOverlayTransformAbsolute*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "GetOverlayTransformAbsolute", ty:
// "::OVR::OpenVR::__IVROverlay___GetOverlayTransformAbsolute*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "SetOverlayTransformTrackedDeviceRelative", ty:
// "::OVR::OpenVR::__IVROverlay___SetOverlayTransformTrackedDeviceRelative*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "GetOverlayTransformTrackedDeviceRelative", ty:
// "::OVR::OpenVR::__IVROverlay___GetOverlayTransformTrackedDeviceRelative*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "SetOverlayTransformTrackedDeviceComponent", ty:
// "::OVR::OpenVR::__IVROverlay___SetOverlayTransformTrackedDeviceComponent*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "GetOverlayTransformTrackedDeviceComponent", ty:
// "::OVR::OpenVR::__IVROverlay___GetOverlayTransformTrackedDeviceComponent*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "GetOverlayTransformOverlayRelative", ty:
// "::OVR::OpenVR::__IVROverlay___GetOverlayTransformOverlayRelative*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "SetOverlayTransformOverlayRelative", ty:
// "::OVR::OpenVR::__IVROverlay___SetOverlayTransformOverlayRelative*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "ShowOverlay", ty: "::OVR::OpenVR::__IVROverlay___ShowOverlay*",
// modifiers: "", def_value: Some("nullptr") }, CppParam { name: "HideOverlay", ty: "::OVR::OpenVR::__IVROverlay___HideOverlay*", modifiers: "", def_value: Some("nullptr") }, CppParam { name:
// "IsOverlayVisible", ty: "::OVR::OpenVR::__IVROverlay___IsOverlayVisible*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "GetTransformForOverlayCoordinates", ty:
// "::OVR::OpenVR::__IVROverlay___GetTransformForOverlayCoordinates*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "PollNextOverlayEvent", ty:
// "::OVR::OpenVR::__IVROverlay___PollNextOverlayEvent*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "GetOverlayInputMethod", ty:
// "::OVR::OpenVR::__IVROverlay___GetOverlayInputMethod*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "SetOverlayInputMethod", ty:
// "::OVR::OpenVR::__IVROverlay___SetOverlayInputMethod*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "GetOverlayMouseScale", ty:
// "::OVR::OpenVR::__IVROverlay___GetOverlayMouseScale*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "SetOverlayMouseScale", ty:
// "::OVR::OpenVR::__IVROverlay___SetOverlayMouseScale*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "ComputeOverlayIntersection", ty:
// "::OVR::OpenVR::__IVROverlay___ComputeOverlayIntersection*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "IsHoverTargetOverlay", ty:
// "::OVR::OpenVR::__IVROverlay___IsHoverTargetOverlay*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "GetGamepadFocusOverlay", ty:
// "::OVR::OpenVR::__IVROverlay___GetGamepadFocusOverlay*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "SetGamepadFocusOverlay", ty:
// "::OVR::OpenVR::__IVROverlay___SetGamepadFocusOverlay*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "SetOverlayNeighbor", ty: "::OVR::OpenVR::__IVROverlay___SetOverlayNeighbor*",
// modifiers: "", def_value: Some("nullptr") }, CppParam { name: "MoveGamepadFocusToNeighbor", ty: "::OVR::OpenVR::__IVROverlay___MoveGamepadFocusToNeighbor*", modifiers: "", def_value:
// Some("nullptr") }, CppParam { name: "SetOverlayDualAnalogTransform", ty: "::OVR::OpenVR::__IVROverlay___SetOverlayDualAnalogTransform*", modifiers: "", def_value: Some("nullptr") }, CppParam {
// name: "GetOverlayDualAnalogTransform", ty: "::OVR::OpenVR::__IVROverlay___GetOverlayDualAnalogTransform*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "SetOverlayTexture", ty:
// "::OVR::OpenVR::__IVROverlay___SetOverlayTexture*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "ClearOverlayTexture", ty: "::OVR::OpenVR::__IVROverlay___ClearOverlayTexture*",
// modifiers: "", def_value: Some("nullptr") }, CppParam { name: "SetOverlayRaw", ty: "::OVR::OpenVR::__IVROverlay___SetOverlayRaw*", modifiers: "", def_value: Some("nullptr") }, CppParam { name:
// "SetOverlayFromFile", ty: "::OVR::OpenVR::__IVROverlay___SetOverlayFromFile*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "GetOverlayTexture", ty:
// "::OVR::OpenVR::__IVROverlay___GetOverlayTexture*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "ReleaseNativeOverlayHandle", ty:
// "::OVR::OpenVR::__IVROverlay___ReleaseNativeOverlayHandle*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "GetOverlayTextureSize", ty:
// "::OVR::OpenVR::__IVROverlay___GetOverlayTextureSize*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "CreateDashboardOverlay", ty:
// "::OVR::OpenVR::__IVROverlay___CreateDashboardOverlay*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "IsDashboardVisible", ty: "::OVR::OpenVR::__IVROverlay___IsDashboardVisible*",
// modifiers: "", def_value: Some("nullptr") }, CppParam { name: "IsActiveDashboardOverlay", ty: "::OVR::OpenVR::__IVROverlay___IsActiveDashboardOverlay*", modifiers: "", def_value: Some("nullptr") },
// CppParam { name: "SetDashboardOverlaySceneProcess", ty: "::OVR::OpenVR::__IVROverlay___SetDashboardOverlaySceneProcess*", modifiers: "", def_value: Some("nullptr") }, CppParam { name:
// "GetDashboardOverlaySceneProcess", ty: "::OVR::OpenVR::__IVROverlay___GetDashboardOverlaySceneProcess*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "ShowDashboard", ty:
// "::OVR::OpenVR::__IVROverlay___ShowDashboard*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "GetPrimaryDashboardDevice", ty:
// "::OVR::OpenVR::__IVROverlay___GetPrimaryDashboardDevice*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "ShowKeyboard", ty: "::OVR::OpenVR::__IVROverlay___ShowKeyboard*",
// modifiers: "", def_value: Some("nullptr") }, CppParam { name: "ShowKeyboardForOverlay", ty: "::OVR::OpenVR::__IVROverlay___ShowKeyboardForOverlay*", modifiers: "", def_value: Some("nullptr") },
// CppParam { name: "GetKeyboardText", ty: "::OVR::OpenVR::__IVROverlay___GetKeyboardText*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "HideKeyboard", ty:
// "::OVR::OpenVR::__IVROverlay___HideKeyboard*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "SetKeyboardTransformAbsolute", ty:
// "::OVR::OpenVR::__IVROverlay___SetKeyboardTransformAbsolute*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "SetKeyboardPositionForOverlay", ty:
// "::OVR::OpenVR::__IVROverlay___SetKeyboardPositionForOverlay*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "SetOverlayIntersectionMask", ty:
// "::OVR::OpenVR::__IVROverlay___SetOverlayIntersectionMask*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "GetOverlayFlags", ty: "::OVR::OpenVR::__IVROverlay___GetOverlayFlags*",
// modifiers: "", def_value: Some("nullptr") }, CppParam { name: "ShowMessageOverlay", ty: "::OVR::OpenVR::__IVROverlay___ShowMessageOverlay*", modifiers: "", def_value: Some("nullptr") }, CppParam {
// name: "CloseMessageOverlay", ty: "::OVR::OpenVR::__IVROverlay___CloseMessageOverlay*", modifiers: "", def_value: Some("nullptr") }]
constexpr ::OVR::OpenVR::IVROverlay::IVROverlay(
    ::OVR::OpenVR::__IVROverlay___FindOverlay* FindOverlay, ::OVR::OpenVR::__IVROverlay___CreateOverlay* CreateOverlay, ::OVR::OpenVR::__IVROverlay___DestroyOverlay* DestroyOverlay,
    ::OVR::OpenVR::__IVROverlay___SetHighQualityOverlay* SetHighQualityOverlay, ::OVR::OpenVR::__IVROverlay___GetHighQualityOverlay* GetHighQualityOverlay,
    ::OVR::OpenVR::__IVROverlay___GetOverlayKey* GetOverlayKey, ::OVR::OpenVR::__IVROverlay___GetOverlayName* GetOverlayName, ::OVR::OpenVR::__IVROverlay___SetOverlayName* SetOverlayName,
    ::OVR::OpenVR::__IVROverlay___GetOverlayImageData* GetOverlayImageData, ::OVR::OpenVR::__IVROverlay___GetOverlayErrorNameFromEnum* GetOverlayErrorNameFromEnum,
    ::OVR::OpenVR::__IVROverlay___SetOverlayRenderingPid* SetOverlayRenderingPid, ::OVR::OpenVR::__IVROverlay___GetOverlayRenderingPid* GetOverlayRenderingPid,
    ::OVR::OpenVR::__IVROverlay___SetOverlayFlag* SetOverlayFlag, ::OVR::OpenVR::__IVROverlay___GetOverlayFlag* GetOverlayFlag, ::OVR::OpenVR::__IVROverlay___SetOverlayColor* SetOverlayColor,
    ::OVR::OpenVR::__IVROverlay___GetOverlayColor* GetOverlayColor, ::OVR::OpenVR::__IVROverlay___SetOverlayAlpha* SetOverlayAlpha, ::OVR::OpenVR::__IVROverlay___GetOverlayAlpha* GetOverlayAlpha,
    ::OVR::OpenVR::__IVROverlay___SetOverlayTexelAspect* SetOverlayTexelAspect, ::OVR::OpenVR::__IVROverlay___GetOverlayTexelAspect* GetOverlayTexelAspect,
    ::OVR::OpenVR::__IVROverlay___SetOverlaySortOrder* SetOverlaySortOrder, ::OVR::OpenVR::__IVROverlay___GetOverlaySortOrder* GetOverlaySortOrder,
    ::OVR::OpenVR::__IVROverlay___SetOverlayWidthInMeters* SetOverlayWidthInMeters, ::OVR::OpenVR::__IVROverlay___GetOverlayWidthInMeters* GetOverlayWidthInMeters,
    ::OVR::OpenVR::__IVROverlay___SetOverlayAutoCurveDistanceRangeInMeters* SetOverlayAutoCurveDistanceRangeInMeters,
    ::OVR::OpenVR::__IVROverlay___GetOverlayAutoCurveDistanceRangeInMeters* GetOverlayAutoCurveDistanceRangeInMeters,
    ::OVR::OpenVR::__IVROverlay___SetOverlayTextureColorSpace* SetOverlayTextureColorSpace, ::OVR::OpenVR::__IVROverlay___GetOverlayTextureColorSpace* GetOverlayTextureColorSpace,
    ::OVR::OpenVR::__IVROverlay___SetOverlayTextureBounds* SetOverlayTextureBounds, ::OVR::OpenVR::__IVROverlay___GetOverlayTextureBounds* GetOverlayTextureBounds,
    ::OVR::OpenVR::__IVROverlay___GetOverlayRenderModel* GetOverlayRenderModel, ::OVR::OpenVR::__IVROverlay___SetOverlayRenderModel* SetOverlayRenderModel,
    ::OVR::OpenVR::__IVROverlay___GetOverlayTransformType* GetOverlayTransformType, ::OVR::OpenVR::__IVROverlay___SetOverlayTransformAbsolute* SetOverlayTransformAbsolute,
    ::OVR::OpenVR::__IVROverlay___GetOverlayTransformAbsolute* GetOverlayTransformAbsolute,
    ::OVR::OpenVR::__IVROverlay___SetOverlayTransformTrackedDeviceRelative* SetOverlayTransformTrackedDeviceRelative,
    ::OVR::OpenVR::__IVROverlay___GetOverlayTransformTrackedDeviceRelative* GetOverlayTransformTrackedDeviceRelative,
    ::OVR::OpenVR::__IVROverlay___SetOverlayTransformTrackedDeviceComponent* SetOverlayTransformTrackedDeviceComponent,
    ::OVR::OpenVR::__IVROverlay___GetOverlayTransformTrackedDeviceComponent* GetOverlayTransformTrackedDeviceComponent,
    ::OVR::OpenVR::__IVROverlay___GetOverlayTransformOverlayRelative* GetOverlayTransformOverlayRelative,
    ::OVR::OpenVR::__IVROverlay___SetOverlayTransformOverlayRelative* SetOverlayTransformOverlayRelative, ::OVR::OpenVR::__IVROverlay___ShowOverlay* ShowOverlay,
    ::OVR::OpenVR::__IVROverlay___HideOverlay* HideOverlay, ::OVR::OpenVR::__IVROverlay___IsOverlayVisible* IsOverlayVisible,
    ::OVR::OpenVR::__IVROverlay___GetTransformForOverlayCoordinates* GetTransformForOverlayCoordinates, ::OVR::OpenVR::__IVROverlay___PollNextOverlayEvent* PollNextOverlayEvent,
    ::OVR::OpenVR::__IVROverlay___GetOverlayInputMethod* GetOverlayInputMethod, ::OVR::OpenVR::__IVROverlay___SetOverlayInputMethod* SetOverlayInputMethod,
    ::OVR::OpenVR::__IVROverlay___GetOverlayMouseScale* GetOverlayMouseScale, ::OVR::OpenVR::__IVROverlay___SetOverlayMouseScale* SetOverlayMouseScale,
    ::OVR::OpenVR::__IVROverlay___ComputeOverlayIntersection* ComputeOverlayIntersection, ::OVR::OpenVR::__IVROverlay___IsHoverTargetOverlay* IsHoverTargetOverlay,
    ::OVR::OpenVR::__IVROverlay___GetGamepadFocusOverlay* GetGamepadFocusOverlay, ::OVR::OpenVR::__IVROverlay___SetGamepadFocusOverlay* SetGamepadFocusOverlay,
    ::OVR::OpenVR::__IVROverlay___SetOverlayNeighbor* SetOverlayNeighbor, ::OVR::OpenVR::__IVROverlay___MoveGamepadFocusToNeighbor* MoveGamepadFocusToNeighbor,
    ::OVR::OpenVR::__IVROverlay___SetOverlayDualAnalogTransform* SetOverlayDualAnalogTransform, ::OVR::OpenVR::__IVROverlay___GetOverlayDualAnalogTransform* GetOverlayDualAnalogTransform,
    ::OVR::OpenVR::__IVROverlay___SetOverlayTexture* SetOverlayTexture, ::OVR::OpenVR::__IVROverlay___ClearOverlayTexture* ClearOverlayTexture,
    ::OVR::OpenVR::__IVROverlay___SetOverlayRaw* SetOverlayRaw, ::OVR::OpenVR::__IVROverlay___SetOverlayFromFile* SetOverlayFromFile,
    ::OVR::OpenVR::__IVROverlay___GetOverlayTexture* GetOverlayTexture, ::OVR::OpenVR::__IVROverlay___ReleaseNativeOverlayHandle* ReleaseNativeOverlayHandle,
    ::OVR::OpenVR::__IVROverlay___GetOverlayTextureSize* GetOverlayTextureSize, ::OVR::OpenVR::__IVROverlay___CreateDashboardOverlay* CreateDashboardOverlay,
    ::OVR::OpenVR::__IVROverlay___IsDashboardVisible* IsDashboardVisible, ::OVR::OpenVR::__IVROverlay___IsActiveDashboardOverlay* IsActiveDashboardOverlay,
    ::OVR::OpenVR::__IVROverlay___SetDashboardOverlaySceneProcess* SetDashboardOverlaySceneProcess, ::OVR::OpenVR::__IVROverlay___GetDashboardOverlaySceneProcess* GetDashboardOverlaySceneProcess,
    ::OVR::OpenVR::__IVROverlay___ShowDashboard* ShowDashboard, ::OVR::OpenVR::__IVROverlay___GetPrimaryDashboardDevice* GetPrimaryDashboardDevice,
    ::OVR::OpenVR::__IVROverlay___ShowKeyboard* ShowKeyboard, ::OVR::OpenVR::__IVROverlay___ShowKeyboardForOverlay* ShowKeyboardForOverlay,
    ::OVR::OpenVR::__IVROverlay___GetKeyboardText* GetKeyboardText, ::OVR::OpenVR::__IVROverlay___HideKeyboard* HideKeyboard,
    ::OVR::OpenVR::__IVROverlay___SetKeyboardTransformAbsolute* SetKeyboardTransformAbsolute, ::OVR::OpenVR::__IVROverlay___SetKeyboardPositionForOverlay* SetKeyboardPositionForOverlay,
    ::OVR::OpenVR::__IVROverlay___SetOverlayIntersectionMask* SetOverlayIntersectionMask, ::OVR::OpenVR::__IVROverlay___GetOverlayFlags* GetOverlayFlags,
    ::OVR::OpenVR::__IVROverlay___ShowMessageOverlay* ShowMessageOverlay, ::OVR::OpenVR::__IVROverlay___CloseMessageOverlay* CloseMessageOverlay) noexcept {
  this->FindOverlay = FindOverlay;
  this->CreateOverlay = CreateOverlay;
  this->DestroyOverlay = DestroyOverlay;
  this->SetHighQualityOverlay = SetHighQualityOverlay;
  this->GetHighQualityOverlay = GetHighQualityOverlay;
  this->GetOverlayKey = GetOverlayKey;
  this->GetOverlayName = GetOverlayName;
  this->SetOverlayName = SetOverlayName;
  this->GetOverlayImageData = GetOverlayImageData;
  this->GetOverlayErrorNameFromEnum = GetOverlayErrorNameFromEnum;
  this->SetOverlayRenderingPid = SetOverlayRenderingPid;
  this->GetOverlayRenderingPid = GetOverlayRenderingPid;
  this->SetOverlayFlag = SetOverlayFlag;
  this->GetOverlayFlag = GetOverlayFlag;
  this->SetOverlayColor = SetOverlayColor;
  this->GetOverlayColor = GetOverlayColor;
  this->SetOverlayAlpha = SetOverlayAlpha;
  this->GetOverlayAlpha = GetOverlayAlpha;
  this->SetOverlayTexelAspect = SetOverlayTexelAspect;
  this->GetOverlayTexelAspect = GetOverlayTexelAspect;
  this->SetOverlaySortOrder = SetOverlaySortOrder;
  this->GetOverlaySortOrder = GetOverlaySortOrder;
  this->SetOverlayWidthInMeters = SetOverlayWidthInMeters;
  this->GetOverlayWidthInMeters = GetOverlayWidthInMeters;
  this->SetOverlayAutoCurveDistanceRangeInMeters = SetOverlayAutoCurveDistanceRangeInMeters;
  this->GetOverlayAutoCurveDistanceRangeInMeters = GetOverlayAutoCurveDistanceRangeInMeters;
  this->SetOverlayTextureColorSpace = SetOverlayTextureColorSpace;
  this->GetOverlayTextureColorSpace = GetOverlayTextureColorSpace;
  this->SetOverlayTextureBounds = SetOverlayTextureBounds;
  this->GetOverlayTextureBounds = GetOverlayTextureBounds;
  this->GetOverlayRenderModel = GetOverlayRenderModel;
  this->SetOverlayRenderModel = SetOverlayRenderModel;
  this->GetOverlayTransformType = GetOverlayTransformType;
  this->SetOverlayTransformAbsolute = SetOverlayTransformAbsolute;
  this->GetOverlayTransformAbsolute = GetOverlayTransformAbsolute;
  this->SetOverlayTransformTrackedDeviceRelative = SetOverlayTransformTrackedDeviceRelative;
  this->GetOverlayTransformTrackedDeviceRelative = GetOverlayTransformTrackedDeviceRelative;
  this->SetOverlayTransformTrackedDeviceComponent = SetOverlayTransformTrackedDeviceComponent;
  this->GetOverlayTransformTrackedDeviceComponent = GetOverlayTransformTrackedDeviceComponent;
  this->GetOverlayTransformOverlayRelative = GetOverlayTransformOverlayRelative;
  this->SetOverlayTransformOverlayRelative = SetOverlayTransformOverlayRelative;
  this->ShowOverlay = ShowOverlay;
  this->HideOverlay = HideOverlay;
  this->IsOverlayVisible = IsOverlayVisible;
  this->GetTransformForOverlayCoordinates = GetTransformForOverlayCoordinates;
  this->PollNextOverlayEvent = PollNextOverlayEvent;
  this->GetOverlayInputMethod = GetOverlayInputMethod;
  this->SetOverlayInputMethod = SetOverlayInputMethod;
  this->GetOverlayMouseScale = GetOverlayMouseScale;
  this->SetOverlayMouseScale = SetOverlayMouseScale;
  this->ComputeOverlayIntersection = ComputeOverlayIntersection;
  this->IsHoverTargetOverlay = IsHoverTargetOverlay;
  this->GetGamepadFocusOverlay = GetGamepadFocusOverlay;
  this->SetGamepadFocusOverlay = SetGamepadFocusOverlay;
  this->SetOverlayNeighbor = SetOverlayNeighbor;
  this->MoveGamepadFocusToNeighbor = MoveGamepadFocusToNeighbor;
  this->SetOverlayDualAnalogTransform = SetOverlayDualAnalogTransform;
  this->GetOverlayDualAnalogTransform = GetOverlayDualAnalogTransform;
  this->SetOverlayTexture = SetOverlayTexture;
  this->ClearOverlayTexture = ClearOverlayTexture;
  this->SetOverlayRaw = SetOverlayRaw;
  this->SetOverlayFromFile = SetOverlayFromFile;
  this->GetOverlayTexture = GetOverlayTexture;
  this->ReleaseNativeOverlayHandle = ReleaseNativeOverlayHandle;
  this->GetOverlayTextureSize = GetOverlayTextureSize;
  this->CreateDashboardOverlay = CreateDashboardOverlay;
  this->IsDashboardVisible = IsDashboardVisible;
  this->IsActiveDashboardOverlay = IsActiveDashboardOverlay;
  this->SetDashboardOverlaySceneProcess = SetDashboardOverlaySceneProcess;
  this->GetDashboardOverlaySceneProcess = GetDashboardOverlaySceneProcess;
  this->ShowDashboard = ShowDashboard;
  this->GetPrimaryDashboardDevice = GetPrimaryDashboardDevice;
  this->ShowKeyboard = ShowKeyboard;
  this->ShowKeyboardForOverlay = ShowKeyboardForOverlay;
  this->GetKeyboardText = GetKeyboardText;
  this->HideKeyboard = HideKeyboard;
  this->SetKeyboardTransformAbsolute = SetKeyboardTransformAbsolute;
  this->SetKeyboardPositionForOverlay = SetKeyboardPositionForOverlay;
  this->SetOverlayIntersectionMask = SetOverlayIntersectionMask;
  this->GetOverlayFlags = GetOverlayFlags;
  this->ShowMessageOverlay = ShowMessageOverlay;
  this->CloseMessageOverlay = CloseMessageOverlay;
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::IVROverlay::IVROverlay() {}

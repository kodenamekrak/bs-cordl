#pragma once
#include "LIV/SDK/Unity/zzzz__SDKMatrix4x4_def.hpp"
#include "LIV/SDK/Unity/zzzz__SDKQuaternion_def.hpp"
#include "LIV/SDK/Unity/zzzz__SDKVector3_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
//  Writing Method size for method: ::LIV::SDK::Unity::SDKMatrix4x4.get_identity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::LIV::SDK::Unity::SDKMatrix4x4 (*)()>(&::LIV::SDK::Unity::SDKMatrix4x4::get_identity)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x221437c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKMatrix4x4>::get(), "get_identity",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKMatrix4x4.op_Implicit___UnityEngine__Matrix4x4
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Matrix4x4 (*)(::LIV::SDK::Unity::SDKMatrix4x4)>(
    &::LIV::SDK::Unity::SDKMatrix4x4::op_Implicit___UnityEngine__Matrix4x4)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x221215c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKMatrix4x4>::get(), "op_Implicit", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LIV::SDK::Unity::SDKMatrix4x4>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKMatrix4x4.op_Implicit___LIV__SDK__Unity__SDKMatrix4x4
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::LIV::SDK::Unity::SDKMatrix4x4 (*)(::UnityEngine::Matrix4x4)>(
    &::LIV::SDK::Unity::SDKMatrix4x4::op_Implicit___LIV__SDK__Unity__SDKMatrix4x4)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2213468;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKMatrix4x4>::get(), "op_Implicit", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKMatrix4x4.Perspective
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::LIV::SDK::Unity::SDKMatrix4x4 (*)(float_t, float_t, float_t, float_t)>(
    &::LIV::SDK::Unity::SDKMatrix4x4::Perspective)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x22143a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKMatrix4x4>::get(), "Perspective", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKMatrix4x4.op_Multiply
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::LIV::SDK::Unity::SDKMatrix4x4 (*)(::LIV::SDK::Unity::SDKMatrix4x4, ::LIV::SDK::Unity::SDKMatrix4x4)>(
    &::LIV::SDK::Unity::SDKMatrix4x4::op_Multiply)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x2214454;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKMatrix4x4>::get(), "op_Multiply", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LIV::SDK::Unity::SDKMatrix4x4>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LIV::SDK::Unity::SDKMatrix4x4>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKMatrix4x4.op_Multiply
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::LIV::SDK::Unity::SDKVector3 (*)(::LIV::SDK::Unity::SDKMatrix4x4, ::LIV::SDK::Unity::SDKVector3)>(
    &::LIV::SDK::Unity::SDKMatrix4x4::op_Multiply)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2214560;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKMatrix4x4>::get(), "op_Multiply", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LIV::SDK::Unity::SDKMatrix4x4>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LIV::SDK::Unity::SDKVector3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKMatrix4x4.Translate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::LIV::SDK::Unity::SDKMatrix4x4 (*)(::LIV::SDK::Unity::SDKVector3)>(&::LIV::SDK::Unity::SDKMatrix4x4::Translate)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x22145b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKMatrix4x4>::get(), "Translate", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LIV::SDK::Unity::SDKVector3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKMatrix4x4.Rotate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::LIV::SDK::Unity::SDKMatrix4x4 (*)(::LIV::SDK::Unity::SDKQuaternion)>(&::LIV::SDK::Unity::SDKMatrix4x4::Rotate)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x22145f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKMatrix4x4>::get(), "Rotate", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LIV::SDK::Unity::SDKQuaternion>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKMatrix4x4.Scale
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::LIV::SDK::Unity::SDKMatrix4x4 (*)(::LIV::SDK::Unity::SDKVector3)>(&::LIV::SDK::Unity::SDKMatrix4x4::Scale)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2214688;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKMatrix4x4>::get(), "Scale", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LIV::SDK::Unity::SDKVector3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKMatrix4x4.TRS
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::LIV::SDK::Unity::SDKMatrix4x4 (*)(::LIV::SDK::Unity::SDKVector3, ::LIV::SDK::Unity::SDKQuaternion, ::LIV::SDK::Unity::SDKVector3)>(&::LIV::SDK::Unity::SDKMatrix4x4::TRS)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x22146b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKMatrix4x4>::get(), "TRS", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LIV::SDK::Unity::SDKVector3>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LIV::SDK::Unity::SDKQuaternion>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LIV::SDK::Unity::SDKVector3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKMatrix4x4.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::LIV::SDK::Unity::SDKMatrix4x4::*)()>(&::LIV::SDK::Unity::SDKMatrix4x4::ToString)> {
  constexpr static std::size_t size = 0x4ac;
  constexpr static std::size_t addrs = 0x2214798;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKMatrix4x4>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKMatrix4x4>::get(), 3));
    return ___internal_method;
  }
};
inline ::LIV::SDK::Unity::SDKMatrix4x4 LIV::SDK::Unity::SDKMatrix4x4::get_identity() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKMatrix4x4>::get(), "get_identity",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::LIV::SDK::Unity::SDKMatrix4x4, false>(nullptr, ___internal_method);
}
inline ::UnityEngine::Matrix4x4 LIV::SDK::Unity::SDKMatrix4x4::op_Implicit___UnityEngine__Matrix4x4(::LIV::SDK::Unity::SDKMatrix4x4 v) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKMatrix4x4>::get(), "op_Implicit", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LIV::SDK::Unity::SDKMatrix4x4>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Matrix4x4, false>(nullptr, ___internal_method, v);
}
inline ::LIV::SDK::Unity::SDKMatrix4x4 LIV::SDK::Unity::SDKMatrix4x4::op_Implicit___LIV__SDK__Unity__SDKMatrix4x4(::UnityEngine::Matrix4x4 v) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKMatrix4x4>::get(), "op_Implicit", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get() })));
  return ::cordl_internals::RunMethodRethrow<::LIV::SDK::Unity::SDKMatrix4x4, false>(nullptr, ___internal_method, v);
}
inline ::LIV::SDK::Unity::SDKMatrix4x4 LIV::SDK::Unity::SDKMatrix4x4::Perspective(float_t vFov, float_t aspect, float_t zNear, float_t zFar) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKMatrix4x4>::get(), "Perspective", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::LIV::SDK::Unity::SDKMatrix4x4, false>(nullptr, ___internal_method, vFov, aspect, zNear, zFar);
}
inline ::LIV::SDK::Unity::SDKMatrix4x4 LIV::SDK::Unity::SDKMatrix4x4::op_Multiply(::LIV::SDK::Unity::SDKMatrix4x4 lhs, ::LIV::SDK::Unity::SDKMatrix4x4 rhs) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKMatrix4x4>::get(), "op_Multiply", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LIV::SDK::Unity::SDKMatrix4x4>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LIV::SDK::Unity::SDKMatrix4x4>::get() })));
  return ::cordl_internals::RunMethodRethrow<::LIV::SDK::Unity::SDKMatrix4x4, false>(nullptr, ___internal_method, lhs, rhs);
}
inline ::LIV::SDK::Unity::SDKVector3 LIV::SDK::Unity::SDKMatrix4x4::op_Multiply(::LIV::SDK::Unity::SDKMatrix4x4 lhs, ::LIV::SDK::Unity::SDKVector3 rhs) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKMatrix4x4>::get(), "op_Multiply", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LIV::SDK::Unity::SDKMatrix4x4>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LIV::SDK::Unity::SDKVector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<::LIV::SDK::Unity::SDKVector3, false>(nullptr, ___internal_method, lhs, rhs);
}
inline ::LIV::SDK::Unity::SDKMatrix4x4 LIV::SDK::Unity::SDKMatrix4x4::Translate(::LIV::SDK::Unity::SDKVector3 value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKMatrix4x4>::get(), "Translate", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LIV::SDK::Unity::SDKVector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<::LIV::SDK::Unity::SDKMatrix4x4, false>(nullptr, ___internal_method, value);
}
inline ::LIV::SDK::Unity::SDKMatrix4x4 LIV::SDK::Unity::SDKMatrix4x4::Rotate(::LIV::SDK::Unity::SDKQuaternion value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKMatrix4x4>::get(), "Rotate", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LIV::SDK::Unity::SDKQuaternion>::get() })));
  return ::cordl_internals::RunMethodRethrow<::LIV::SDK::Unity::SDKMatrix4x4, false>(nullptr, ___internal_method, value);
}
inline ::LIV::SDK::Unity::SDKMatrix4x4 LIV::SDK::Unity::SDKMatrix4x4::Scale(::LIV::SDK::Unity::SDKVector3 value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKMatrix4x4>::get(), "Scale", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LIV::SDK::Unity::SDKVector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<::LIV::SDK::Unity::SDKMatrix4x4, false>(nullptr, ___internal_method, value);
}
inline ::LIV::SDK::Unity::SDKMatrix4x4 LIV::SDK::Unity::SDKMatrix4x4::TRS(::LIV::SDK::Unity::SDKVector3 translation, ::LIV::SDK::Unity::SDKQuaternion rotation, ::LIV::SDK::Unity::SDKVector3 scale) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKMatrix4x4>::get(), "TRS", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LIV::SDK::Unity::SDKVector3>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LIV::SDK::Unity::SDKQuaternion>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LIV::SDK::Unity::SDKVector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<::LIV::SDK::Unity::SDKMatrix4x4, false>(nullptr, ___internal_method, translation, rotation, scale);
}
inline ::StringW LIV::SDK::Unity::SDKMatrix4x4::ToString() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKMatrix4x4>::get(), "ToString",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m00", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m01", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "m02", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m03", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m10", ty: "float_t", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "m11", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m12", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "m13", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m20", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m21", ty: "float_t", modifiers:
// "", def_value: Some("{}") }, CppParam { name: "m22", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m23", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "m30", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m31", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m32", ty: "float_t", modifiers:
// "", def_value: Some("{}") }, CppParam { name: "m33", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::LIV::SDK::Unity::SDKMatrix4x4::SDKMatrix4x4(float_t m00, float_t m01, float_t m02, float_t m03, float_t m10, float_t m11, float_t m12, float_t m13, float_t m20, float_t m21, float_t m22,
                                                        float_t m23, float_t m30, float_t m31, float_t m32, float_t m33) noexcept {
  this->m00 = m00;
  this->m01 = m01;
  this->m02 = m02;
  this->m03 = m03;
  this->m10 = m10;
  this->m11 = m11;
  this->m12 = m12;
  this->m13 = m13;
  this->m20 = m20;
  this->m21 = m21;
  this->m22 = m22;
  this->m23 = m23;
  this->m30 = m30;
  this->m31 = m31;
  this->m32 = m32;
  this->m33 = m33;
}
// Ctor Parameters []
constexpr ::LIV::SDK::Unity::SDKMatrix4x4::SDKMatrix4x4() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
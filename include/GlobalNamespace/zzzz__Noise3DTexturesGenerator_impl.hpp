#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__Noise3DTexturesGenerator_def.hpp"
#include "UnityEngine/zzzz__Color32_def.hpp"
#include "GlobalNamespace/zzzz__Noise3DTexturesGenerator_def.hpp"
#include "UnityEngine/zzzz__Texture3D_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
// Ctor Parameters [CppParam { name: "globalPropertyName", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "materialPropertyNameCouples", ty:
// "::ArrayW<::GlobalNamespace::__Noise3DTexturesGenerator__MaterialPropertyNameCouple,::Array<::GlobalNamespace::__Noise3DTexturesGenerator__MaterialPropertyNameCouple>*>", modifiers: "", def_value:
// Some("nullptr") }]
constexpr ::GlobalNamespace::__Noise3DTexturesGenerator__MaterialTextureParamsCouple::__Noise3DTexturesGenerator__MaterialTextureParamsCouple(
    ::StringW globalPropertyName,
    ::ArrayW<::GlobalNamespace::__Noise3DTexturesGenerator__MaterialPropertyNameCouple, ::Array<::GlobalNamespace::__Noise3DTexturesGenerator__MaterialPropertyNameCouple>*>
        materialPropertyNameCouples) noexcept {
  this->globalPropertyName = globalPropertyName;
  this->materialPropertyNameCouples = materialPropertyNameCouples;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__Noise3DTexturesGenerator__MaterialTextureParamsCouple::__Noise3DTexturesGenerator__MaterialTextureParamsCouple() {}
// Ctor Parameters [CppParam { name: "texturePropertyName", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "material", ty: "::UnityEngine::Material*", modifiers: "",
// def_value: Some("nullptr") }]
constexpr ::GlobalNamespace::__Noise3DTexturesGenerator__MaterialPropertyNameCouple::__Noise3DTexturesGenerator__MaterialPropertyNameCouple(::StringW texturePropertyName,
                                                                                                                                            ::UnityEngine::Material* material) noexcept {
  this->texturePropertyName = texturePropertyName;
  this->material = material;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__Noise3DTexturesGenerator__MaterialPropertyNameCouple::__Noise3DTexturesGenerator__MaterialPropertyNameCouple() {}
//  Writing Method size for method: ::GlobalNamespace::Noise3DTexturesGenerator.Awake
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::Noise3DTexturesGenerator::*)()>(&::GlobalNamespace::Noise3DTexturesGenerator::Awake)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x280afac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Noise3DTexturesGenerator*>::get(), "Awake",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Noise3DTexturesGenerator.CreateNoisePixels
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::Color32, ::Array<::UnityEngine::Color32>*> (*)(
    int32_t, int32_t, int32_t, float_t, int32_t, float_t)>(&::GlobalNamespace::Noise3DTexturesGenerator::CreateNoisePixels)> {
  constexpr static std::size_t size = 0x324;
  constexpr static std::size_t addrs = 0x280b1bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Noise3DTexturesGenerator*>::get(), "CreateNoisePixels", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Noise3DTexturesGenerator._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::Noise3DTexturesGenerator::*)()>(&::GlobalNamespace::Noise3DTexturesGenerator::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x280b4e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Noise3DTexturesGenerator*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::GlobalNamespace::__Noise3DTexturesGenerator__MaterialTextureParamsCouple, ::Array<::GlobalNamespace::__Noise3DTexturesGenerator__MaterialTextureParamsCouple>*>&
GlobalNamespace::Noise3DTexturesGenerator::__get__data() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____data;
}
constexpr ::ArrayW<::GlobalNamespace::__Noise3DTexturesGenerator__MaterialTextureParamsCouple, ::Array<::GlobalNamespace::__Noise3DTexturesGenerator__MaterialTextureParamsCouple>*> const&
GlobalNamespace::Noise3DTexturesGenerator::__get__data() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____data;
}
constexpr void GlobalNamespace::Noise3DTexturesGenerator::__set__data(
    ::ArrayW<::GlobalNamespace::__Noise3DTexturesGenerator__MaterialTextureParamsCouple, ::Array<::GlobalNamespace::__Noise3DTexturesGenerator__MaterialTextureParamsCouple>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____data)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::Noise3DTexturesGenerator::setStaticF__texture(::UnityEngine::Texture3D* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Texture3D*, "_texture", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Noise3DTexturesGenerator*>::get>(
      std::forward<::UnityEngine::Texture3D*>(value));
}
inline ::UnityEngine::Texture3D* GlobalNamespace::Noise3DTexturesGenerator::getStaticF__texture() {
  return ::cordl_internals::getStaticField<::UnityEngine::Texture3D*, "_texture", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Noise3DTexturesGenerator*>::get>();
}
inline void GlobalNamespace::Noise3DTexturesGenerator::Awake() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Noise3DTexturesGenerator*>::get(), "Awake",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::ArrayW<::UnityEngine::Color32, ::Array<::UnityEngine::Color32>*> GlobalNamespace::Noise3DTexturesGenerator::CreateNoisePixels(int32_t width, int32_t height, int32_t depth, float_t scale,
                                                                                                                                       int32_t repeat, float_t contrast) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Noise3DTexturesGenerator*>::get(), "CreateNoisePixels", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Color32, ::Array<::UnityEngine::Color32>*>, false>(nullptr, ___internal_method, width, height, depth, scale, repeat, contrast);
}
inline ::GlobalNamespace::Noise3DTexturesGenerator* GlobalNamespace::Noise3DTexturesGenerator::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::Noise3DTexturesGenerator*>());
}
inline void GlobalNamespace::Noise3DTexturesGenerator::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Noise3DTexturesGenerator*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Noise3DTexturesGenerator::Noise3DTexturesGenerator() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
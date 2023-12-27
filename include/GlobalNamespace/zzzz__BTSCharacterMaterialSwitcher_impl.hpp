#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__BTSCharacterMaterialSwitcher_def.hpp"
#include "GlobalNamespace/zzzz__BTSCharacterMaterialSwitcher_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Renderer_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__BTSCharacterMaterialSwitcher__RendererMaterialsPairs.get_renderer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Renderer* (::GlobalNamespace::__BTSCharacterMaterialSwitcher__RendererMaterialsPairs::*)()>(
    &::GlobalNamespace::__BTSCharacterMaterialSwitcher__RendererMaterialsPairs::get_renderer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2219afc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BTSCharacterMaterialSwitcher__RendererMaterialsPairs*>::get(),
                                                 "get_renderer", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__BTSCharacterMaterialSwitcher__RendererMaterialsPairs.get_materialPairs
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::GlobalNamespace::__BTSCharacterMaterialSwitcher__MaterialPairs*>* (
    ::GlobalNamespace::__BTSCharacterMaterialSwitcher__RendererMaterialsPairs::*)()>(&::GlobalNamespace::__BTSCharacterMaterialSwitcher__RendererMaterialsPairs::get_materialPairs)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2219b04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BTSCharacterMaterialSwitcher__RendererMaterialsPairs*>::get(),
                                                 "get_materialPairs", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__BTSCharacterMaterialSwitcher__RendererMaterialsPairs._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__BTSCharacterMaterialSwitcher__RendererMaterialsPairs::*)(::UnityEngine::Renderer*)>(
    &::GlobalNamespace::__BTSCharacterMaterialSwitcher__RendererMaterialsPairs::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x2219b0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BTSCharacterMaterialSwitcher__RendererMaterialsPairs*>::get(), ".ctor",
                                    std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Renderer*>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Renderer*& GlobalNamespace::__BTSCharacterMaterialSwitcher__RendererMaterialsPairs::__get__renderer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____renderer;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Renderer*> const& GlobalNamespace::__BTSCharacterMaterialSwitcher__RendererMaterialsPairs::__get__renderer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____renderer;
}
constexpr void GlobalNamespace::__BTSCharacterMaterialSwitcher__RendererMaterialsPairs::__set__renderer(::UnityEngine::Renderer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____renderer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::__BTSCharacterMaterialSwitcher__MaterialPairs*>*&
GlobalNamespace::__BTSCharacterMaterialSwitcher__RendererMaterialsPairs::__get__materialPairs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____materialPairs;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::__BTSCharacterMaterialSwitcher__MaterialPairs*>*> const&
GlobalNamespace::__BTSCharacterMaterialSwitcher__RendererMaterialsPairs::__get__materialPairs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____materialPairs;
}
constexpr void GlobalNamespace::__BTSCharacterMaterialSwitcher__RendererMaterialsPairs::__set__materialPairs(
    ::System::Collections::Generic::List_1<::GlobalNamespace::__BTSCharacterMaterialSwitcher__MaterialPairs*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____materialPairs)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::UnityEngine::Renderer* GlobalNamespace::__BTSCharacterMaterialSwitcher__RendererMaterialsPairs::get_renderer() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BTSCharacterMaterialSwitcher__RendererMaterialsPairs*>::get(),
                                               "get_renderer", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Renderer*, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::GlobalNamespace::__BTSCharacterMaterialSwitcher__MaterialPairs*>*
GlobalNamespace::__BTSCharacterMaterialSwitcher__RendererMaterialsPairs::get_materialPairs() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BTSCharacterMaterialSwitcher__RendererMaterialsPairs*>::get(),
                                               "get_materialPairs", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::GlobalNamespace::__BTSCharacterMaterialSwitcher__MaterialPairs*>*, false>(this, ___internal_method);
}
inline ::GlobalNamespace::__BTSCharacterMaterialSwitcher__RendererMaterialsPairs* GlobalNamespace::__BTSCharacterMaterialSwitcher__RendererMaterialsPairs::New_ctor(::UnityEngine::Renderer* renderer) {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__BTSCharacterMaterialSwitcher__RendererMaterialsPairs*>(renderer));
}
inline void GlobalNamespace::__BTSCharacterMaterialSwitcher__RendererMaterialsPairs::_ctor(::UnityEngine::Renderer* renderer) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BTSCharacterMaterialSwitcher__RendererMaterialsPairs*>::get(), ".ctor",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Renderer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, renderer);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__BTSCharacterMaterialSwitcher__RendererMaterialsPairs::__BTSCharacterMaterialSwitcher__RendererMaterialsPairs() {}
//  Writing Method size for method: ::GlobalNamespace::__BTSCharacterMaterialSwitcher__MaterialPairs._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__BTSCharacterMaterialSwitcher__MaterialPairs::*)()>(
    &::GlobalNamespace::__BTSCharacterMaterialSwitcher__MaterialPairs::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2219b9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BTSCharacterMaterialSwitcher__MaterialPairs*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::__BTSCharacterMaterialSwitcher__MaterialPairs::__get_materialIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___materialIndex;
}
constexpr int32_t const& GlobalNamespace::__BTSCharacterMaterialSwitcher__MaterialPairs::__get_materialIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___materialIndex;
}
constexpr void GlobalNamespace::__BTSCharacterMaterialSwitcher__MaterialPairs::__set_materialIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___materialIndex = value;
}
constexpr ::UnityEngine::Material*& GlobalNamespace::__BTSCharacterMaterialSwitcher__MaterialPairs::__get_defaultMaterial() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___defaultMaterial;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Material*> const& GlobalNamespace::__BTSCharacterMaterialSwitcher__MaterialPairs::__get_defaultMaterial() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___defaultMaterial;
}
constexpr void GlobalNamespace::__BTSCharacterMaterialSwitcher__MaterialPairs::__set_defaultMaterial(::UnityEngine::Material* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___defaultMaterial)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Material*& GlobalNamespace::__BTSCharacterMaterialSwitcher__MaterialPairs::__get_alternativeMaterial() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___alternativeMaterial;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Material*> const& GlobalNamespace::__BTSCharacterMaterialSwitcher__MaterialPairs::__get_alternativeMaterial() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___alternativeMaterial;
}
constexpr void GlobalNamespace::__BTSCharacterMaterialSwitcher__MaterialPairs::__set_alternativeMaterial(::UnityEngine::Material* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___alternativeMaterial)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__BTSCharacterMaterialSwitcher__MaterialPairs* GlobalNamespace::__BTSCharacterMaterialSwitcher__MaterialPairs::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__BTSCharacterMaterialSwitcher__MaterialPairs*>());
}
inline void GlobalNamespace::__BTSCharacterMaterialSwitcher__MaterialPairs::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BTSCharacterMaterialSwitcher__MaterialPairs*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__BTSCharacterMaterialSwitcher__MaterialPairs::__BTSCharacterMaterialSwitcher__MaterialPairs() {}
//  Writing Method size for method: ::GlobalNamespace::BTSCharacterMaterialSwitcher.SwapMaterials
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BTSCharacterMaterialSwitcher::*)(bool)>(
    &::GlobalNamespace::BTSCharacterMaterialSwitcher::SwapMaterials)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0x2219850;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BTSCharacterMaterialSwitcher*>::get(), "SwapMaterials",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BTSCharacterMaterialSwitcher._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BTSCharacterMaterialSwitcher::*)()>(
    &::GlobalNamespace::BTSCharacterMaterialSwitcher::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2219af4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BTSCharacterMaterialSwitcher*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::GlobalNamespace::__BTSCharacterMaterialSwitcher__RendererMaterialsPairs*, ::Array<::GlobalNamespace::__BTSCharacterMaterialSwitcher__RendererMaterialsPairs*>*>&
GlobalNamespace::BTSCharacterMaterialSwitcher::__get__rendererMaterialsPairs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____rendererMaterialsPairs;
}
constexpr ::ArrayW<::GlobalNamespace::__BTSCharacterMaterialSwitcher__RendererMaterialsPairs*, ::Array<::GlobalNamespace::__BTSCharacterMaterialSwitcher__RendererMaterialsPairs*>*> const&
GlobalNamespace::BTSCharacterMaterialSwitcher::__get__rendererMaterialsPairs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____rendererMaterialsPairs;
}
constexpr void GlobalNamespace::BTSCharacterMaterialSwitcher::__set__rendererMaterialsPairs(
    ::ArrayW<::GlobalNamespace::__BTSCharacterMaterialSwitcher__RendererMaterialsPairs*, ::Array<::GlobalNamespace::__BTSCharacterMaterialSwitcher__RendererMaterialsPairs*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____rendererMaterialsPairs)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::BTSCharacterMaterialSwitcher::SwapMaterials(bool alternative) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BTSCharacterMaterialSwitcher*>::get(), "SwapMaterials",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, alternative);
}
inline ::GlobalNamespace::BTSCharacterMaterialSwitcher* GlobalNamespace::BTSCharacterMaterialSwitcher::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::BTSCharacterMaterialSwitcher*>());
}
inline void GlobalNamespace::BTSCharacterMaterialSwitcher::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BTSCharacterMaterialSwitcher*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BTSCharacterMaterialSwitcher::BTSCharacterMaterialSwitcher() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
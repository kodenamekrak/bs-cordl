#pragma once
#include "GlobalNamespace/zzzz__LightColorGroupEffect_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "GlobalNamespace/zzzz__WhiteColorOrAlphaGroupEffect_def.hpp"
#include "GlobalNamespace/zzzz__LightColorGroupEffect_def.hpp"
#include "GlobalNamespace/zzzz__EnvironmentColorType_def.hpp"
#include "GlobalNamespace/zzzz__IBpmController_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCallbacksController_def.hpp"
#include "GlobalNamespace/zzzz__LightWithIdManager_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "GlobalNamespace/zzzz__ColorManager_def.hpp"
#include "Tweening/zzzz__SongTimeTweeningManager_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::WhiteColorOrAlphaGroupEffect._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::WhiteColorOrAlphaGroupEffect::*)(
    ::GlobalNamespace::__LightColorGroupEffect__InitData*, ::UnityEngine::Color, ::GlobalNamespace::LightWithIdManager*, ::Tweening::SongTimeTweeningManager*, ::GlobalNamespace::ColorManager*,
    ::GlobalNamespace::BeatmapCallbacksController*, ::GlobalNamespace::IBpmController*)>(&::GlobalNamespace::WhiteColorOrAlphaGroupEffect::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x23a9364;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::WhiteColorOrAlphaGroupEffect*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__LightColorGroupEffect__InitData*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LightWithIdManager*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Tweening::SongTimeTweeningManager*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ColorManager*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapCallbacksController*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBpmController*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::WhiteColorOrAlphaGroupEffect.GetColor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (::GlobalNamespace::WhiteColorOrAlphaGroupEffect::*)(
    ::GlobalNamespace::EnvironmentColorType, bool, float_t)>(&::GlobalNamespace::WhiteColorOrAlphaGroupEffect::GetColor)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x23a93a0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::WhiteColorOrAlphaGroupEffect*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::WhiteColorOrAlphaGroupEffect*>::get(), 4));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Color& GlobalNamespace::WhiteColorOrAlphaGroupEffect::__get__defaultColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____defaultColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::WhiteColorOrAlphaGroupEffect::__get__defaultColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____defaultColor;
}
constexpr void GlobalNamespace::WhiteColorOrAlphaGroupEffect::__set__defaultColor(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____defaultColor = value;
}
inline ::GlobalNamespace::WhiteColorOrAlphaGroupEffect* GlobalNamespace::WhiteColorOrAlphaGroupEffect::New_ctor(::GlobalNamespace::__LightColorGroupEffect__InitData* initData,
                                                                                                                ::UnityEngine::Color defaultColor, ::GlobalNamespace::LightWithIdManager* lightManager,
                                                                                                                ::Tweening::SongTimeTweeningManager* tweeningManager,
                                                                                                                ::GlobalNamespace::ColorManager* colorManager,
                                                                                                                ::GlobalNamespace::BeatmapCallbacksController* beatmapCallbacksController,
                                                                                                                ::GlobalNamespace::IBpmController* bpmController) {
  return THROW_UNLESS(
      ::il2cpp_utils::New<::GlobalNamespace::WhiteColorOrAlphaGroupEffect*>(initData, defaultColor, lightManager, tweeningManager, colorManager, beatmapCallbacksController, bpmController));
}
inline void GlobalNamespace::WhiteColorOrAlphaGroupEffect::_ctor(::GlobalNamespace::__LightColorGroupEffect__InitData* initData, ::UnityEngine::Color defaultColor,
                                                                 ::GlobalNamespace::LightWithIdManager* lightManager, ::Tweening::SongTimeTweeningManager* tweeningManager,
                                                                 ::GlobalNamespace::ColorManager* colorManager, ::GlobalNamespace::BeatmapCallbacksController* beatmapCallbacksController,
                                                                 ::GlobalNamespace::IBpmController* bpmController) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::WhiteColorOrAlphaGroupEffect*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__LightColorGroupEffect__InitData*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LightWithIdManager*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Tweening::SongTimeTweeningManager*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ColorManager*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapCallbacksController*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBpmController*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, initData, defaultColor, lightManager, tweeningManager, colorManager, beatmapCallbacksController, bpmController);
}
inline ::UnityEngine::Color GlobalNamespace::WhiteColorOrAlphaGroupEffect::GetColor(::GlobalNamespace::EnvironmentColorType colorType, bool colorBoost, float_t brightness) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::WhiteColorOrAlphaGroupEffect*>::get(), "GetColor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EnvironmentColorType>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color, false>(this, ___internal_method, colorType, colorBoost, brightness);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::WhiteColorOrAlphaGroupEffect::WhiteColorOrAlphaGroupEffect() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
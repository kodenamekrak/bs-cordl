#pragma once
// IWYU pragma private; include "GlobalNamespace/IAssetSongPreviewAudioClipProvider.hpp"
#include "GlobalNamespace/zzzz__IAssetSongPreviewAudioClipProvider_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::IAssetSongPreviewAudioClipProvider.get_songPreviewAudioClip
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::AudioClip> (::GlobalNamespace::IAssetSongPreviewAudioClipProvider::*)()>(
    &::GlobalNamespace::IAssetSongPreviewAudioClipProvider::get_songPreviewAudioClip)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IAssetSongPreviewAudioClipProvider*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IAssetSongPreviewAudioClipProvider*>::get(), 0));
    return ___internal_method;
  }
};
inline ::UnityW<::UnityEngine::AudioClip> GlobalNamespace::IAssetSongPreviewAudioClipProvider::get_songPreviewAudioClip() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IAssetSongPreviewAudioClipProvider*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::AudioClip>, false>(this, ___internal_method);
}

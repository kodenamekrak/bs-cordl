#pragma once
// IWYU pragma private; include "UnityEngine/Audio/AudioMixerPlayable.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Playables/zzzz__PlayableHandle_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AudioMixerPlayable)
namespace System {
template <typename T> class IEquatable_1;
}
namespace UnityEngine::Playables {
class IPlayable;
}
namespace UnityEngine::Playables {
struct PlayableGraph;
}
namespace UnityEngine::Playables {
struct PlayableHandle;
}
namespace UnityEngine::Playables {
struct Playable;
}
// Forward declare root types
namespace UnityEngine::Audio {
struct AudioMixerPlayable;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Audio::AudioMixerPlayable);
// Type: UnityEngine.Audio::AudioMixerPlayable
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Audio {
// Is value type: true
// CS Name: ::UnityEngine.Audio::AudioMixerPlayable
struct CORDL_TYPE AudioMixerPlayable {
public:
  // Declarations
  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Audio::AudioMixerPlayable>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::Audio::AudioMixerPlayable>*();

  /// @brief Convert operator to "::UnityEngine::Playables::IPlayable"
  constexpr operator ::UnityEngine::Playables::IPlayable*();

  /// @brief Method Create, addr 0x47fb3f0, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Audio::AudioMixerPlayable Create(::UnityEngine::Playables::PlayableGraph graph, int32_t inputCount, bool normalizeInputVolumes);

  /// @brief Method CreateAudioMixerPlayableInternal, addr 0x47fb600, size 0x54, virtual false, abstract: false, final false
  static inline bool CreateAudioMixerPlayableInternal(ByRef<::UnityEngine::Playables::PlayableGraph> graph, bool normalizeInputVolumes, ByRef<::UnityEngine::Playables::PlayableHandle> handle);

  /// @brief Method CreateHandle, addr 0x47fb42c, size 0xe4, virtual false, abstract: false, final false
  static inline ::UnityEngine::Playables::PlayableHandle CreateHandle(::UnityEngine::Playables::PlayableGraph graph, int32_t inputCount, bool normalizeInputVolumes);

  /// @brief Method Equals, addr 0x47fb714, size 0x78, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::Audio::AudioMixerPlayable other);

  /// @brief Method GetHandle, addr 0x47fb654, size 0xc, virtual true, abstract: false, final true
  inline ::UnityEngine::Playables::PlayableHandle GetHandle();

  /// @brief Method .ctor, addr 0x47fb510, size 0xf0, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Playables::PlayableHandle handle);

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::Audio::AudioMixerPlayable>"
  constexpr ::System::IEquatable_1<::UnityEngine::Audio::AudioMixerPlayable>* i___System__IEquatable_1___UnityEngine__Audio__AudioMixerPlayable_();

  /// @brief Convert to "::UnityEngine::Playables::IPlayable"
  constexpr ::UnityEngine::Playables::IPlayable* i___UnityEngine__Playables__IPlayable();

  /// @brief Method op_Explicit, addr 0x47fb690, size 0x84, virtual false, abstract: false, final false
  static inline ::UnityEngine::Audio::AudioMixerPlayable op_Explicit___UnityEngine__Audio__AudioMixerPlayable(::UnityEngine::Playables::Playable playable);

  /// @brief Method op_Implicit, addr 0x47fb660, size 0x30, virtual false, abstract: false, final false
  static inline ::UnityEngine::Playables::Playable op_Implicit___UnityEngine__Playables__Playable(::UnityEngine::Audio::AudioMixerPlayable playable);

  // Ctor Parameters []
  // @brief default ctor
  constexpr AudioMixerPlayable();

  // Ctor Parameters [CppParam { name: "m_Handle", ty: "::UnityEngine::Playables::PlayableHandle", modifiers: "", def_value: None }]
  constexpr AudioMixerPlayable(::UnityEngine::Playables::PlayableHandle m_Handle) noexcept;

  /// @brief Field m_Handle, offset: 0x0, size: 0x10, def value: None
  ::UnityEngine::Playables::PlayableHandle m_Handle;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17791 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Audio::AudioMixerPlayable, 0x10>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Audio::AudioMixerPlayable, m_Handle) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::Audio
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Audio::AudioMixerPlayable, "UnityEngine.Audio", "AudioMixerPlayable");

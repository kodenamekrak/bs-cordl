#pragma once
// IWYU pragma private; include "GlobalNamespace/INoteCutSoundEffectDidFinishEvent.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(INoteCutSoundEffectDidFinishEvent)
namespace GlobalNamespace {
class NoteCutSoundEffect;
}
// Forward declare root types
namespace GlobalNamespace {
class INoteCutSoundEffectDidFinishEvent;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::INoteCutSoundEffectDidFinishEvent);
// Type: ::INoteCutSoundEffectDidFinishEvent
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::INoteCutSoundEffectDidFinishEvent*
class CORDL_TYPE INoteCutSoundEffectDidFinishEvent {
public:
  // Declarations
  /// @brief Method HandleNoteCutSoundEffectDidFinish, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void HandleNoteCutSoundEffectDidFinish(::GlobalNamespace::NoteCutSoundEffect* noteCutSoundEffect);

  // Ctor Parameters [CppParam { name: "", ty: "INoteCutSoundEffectDidFinishEvent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  INoteCutSoundEffectDidFinishEvent(INoteCutSoundEffectDidFinishEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "INoteCutSoundEffectDidFinishEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  INoteCutSoundEffectDidFinishEvent(INoteCutSoundEffectDidFinishEvent const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4010 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::INoteCutSoundEffectDidFinishEvent);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::INoteCutSoundEffectDidFinishEvent*, "", "INoteCutSoundEffectDidFinishEvent");

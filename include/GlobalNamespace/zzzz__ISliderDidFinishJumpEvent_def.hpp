#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(ISliderDidFinishJumpEvent)
namespace GlobalNamespace {
class SliderController;
}
// Forward declare root types
namespace GlobalNamespace {
class ISliderDidFinishJumpEvent;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ISliderDidFinishJumpEvent);
// Type: ::ISliderDidFinishJumpEvent
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4800))
// CS Name: ::ISliderDidFinishJumpEvent*
class CORDL_TYPE ISliderDidFinishJumpEvent {
public:
  // Declarations
  /// @brief Method HandleSliderDidFinishJump addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void HandleSliderDidFinishJump(::GlobalNamespace::SliderController* sliderController);

  // Ctor Parameters [CppParam { name: "", ty: "ISliderDidFinishJumpEvent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ISliderDidFinishJumpEvent(ISliderDidFinishJumpEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ISliderDidFinishJumpEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ISliderDidFinishJumpEvent(ISliderDidFinishJumpEvent const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ISliderDidFinishJumpEvent);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ISliderDidFinishJumpEvent*, "", "ISliderDidFinishJumpEvent");
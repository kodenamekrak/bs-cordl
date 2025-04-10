#pragma once
// IWYU pragma private; include "UnityEngine/Timeline/ITimelineEvaluateCallback.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(ITimelineEvaluateCallback)
// Forward declare root types
namespace UnityEngine::Timeline {
class ITimelineEvaluateCallback;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Timeline::ITimelineEvaluateCallback);
// Dependencies
namespace UnityEngine::Timeline {
// Is value type: false
// CS Name: UnityEngine.Timeline.ITimelineEvaluateCallback
class CORDL_TYPE ITimelineEvaluateCallback {
public:
  // Declarations
  /// @brief Method Evaluate, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Evaluate();

  // Ctor Parameters [CppParam { name: "", ty: "ITimelineEvaluateCallback", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ITimelineEvaluateCallback(ITimelineEvaluateCallback const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15893 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::Timeline
NEED_NO_BOX(::UnityEngine::Timeline::ITimelineEvaluateCallback);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::ITimelineEvaluateCallback*, "UnityEngine.Timeline", "ITimelineEvaluateCallback");

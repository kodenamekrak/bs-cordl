#pragma once
// IWYU pragma private; include "UnityEngine/Timeline/IInterval.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(IInterval)
// Forward declare root types
namespace UnityEngine::Timeline {
class IInterval;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Timeline::IInterval);
// Type: UnityEngine.Timeline::IInterval
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Timeline {
// Is value type: false
// CS Name: ::UnityEngine.Timeline::IInterval*
class CORDL_TYPE IInterval {
public:
  // Declarations
  __declspec(property(get = get_intervalEnd)) int64_t intervalEnd;

  __declspec(property(get = get_intervalStart)) int64_t intervalStart;

  /// @brief Method get_intervalEnd, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int64_t get_intervalEnd();

  /// @brief Method get_intervalStart, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int64_t get_intervalStart();

  // Ctor Parameters [CppParam { name: "", ty: "IInterval", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IInterval(IInterval&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IInterval", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IInterval(IInterval const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15801 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::Timeline
NEED_NO_BOX(::UnityEngine::Timeline::IInterval);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::IInterval*, "UnityEngine.Timeline", "IInterval");

#pragma once
// IWYU pragma private; include "GlobalNamespace/ISaberMovementDataProcessor.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(ISaberMovementDataProcessor)
namespace GlobalNamespace {
struct BladeMovementDataElement;
}
// Forward declare root types
namespace GlobalNamespace {
class ISaberMovementDataProcessor;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ISaberMovementDataProcessor);
// Type: ::ISaberMovementDataProcessor
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::ISaberMovementDataProcessor*
class CORDL_TYPE ISaberMovementDataProcessor {
public:
  // Declarations
  /// @brief Method ProcessNewData, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void ProcessNewData(::GlobalNamespace::BladeMovementDataElement newData, ::GlobalNamespace::BladeMovementDataElement prevData, bool prevDataAreValid);

  // Ctor Parameters [CppParam { name: "", ty: "ISaberMovementDataProcessor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ISaberMovementDataProcessor(ISaberMovementDataProcessor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ISaberMovementDataProcessor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ISaberMovementDataProcessor(ISaberMovementDataProcessor const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16948 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ISaberMovementDataProcessor);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ISaberMovementDataProcessor*, "", "ISaberMovementDataProcessor");

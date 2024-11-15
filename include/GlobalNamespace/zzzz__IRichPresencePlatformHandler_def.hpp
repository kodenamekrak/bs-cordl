#pragma once
// IWYU pragma private; include "GlobalNamespace/IRichPresencePlatformHandler.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IRichPresencePlatformHandler)
namespace GlobalNamespace {
class IRichPresenceData;
}
// Forward declare root types
namespace GlobalNamespace {
class IRichPresencePlatformHandler;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::IRichPresencePlatformHandler);
// Type: ::IRichPresencePlatformHandler
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::IRichPresencePlatformHandler*
class CORDL_TYPE IRichPresencePlatformHandler {
public:
  // Declarations
  /// @brief Method Clear, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void Clear();

  /// @brief Method SetPresence, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void SetPresence(::GlobalNamespace::IRichPresenceData* richPresenceData);

  // Ctor Parameters [CppParam { name: "", ty: "IRichPresencePlatformHandler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IRichPresencePlatformHandler(IRichPresencePlatformHandler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IRichPresencePlatformHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IRichPresencePlatformHandler(IRichPresencePlatformHandler const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5127 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::IRichPresencePlatformHandler);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IRichPresencePlatformHandler*, "", "IRichPresencePlatformHandler");

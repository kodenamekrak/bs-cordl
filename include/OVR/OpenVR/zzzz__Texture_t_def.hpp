#pragma once
// IWYU pragma private; include "OVR/OpenVR/Texture_t.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "OVR/OpenVR/zzzz__EColorSpace_def.hpp"
#include "OVR/OpenVR/zzzz__ETextureType_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Texture_t)
namespace OVR::OpenVR {
struct EColorSpace;
}
namespace OVR::OpenVR {
struct ETextureType;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace OVR::OpenVR {
struct Texture_t;
}
// Write type traits
MARK_VAL_T(::OVR::OpenVR::Texture_t);
// Type: OVR.OpenVR::Texture_t
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: true
// CS Name: ::OVR.OpenVR::Texture_t
struct CORDL_TYPE Texture_t {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr Texture_t();

  // Ctor Parameters [CppParam { name: "handle", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "eType", ty: "::OVR::OpenVR::ETextureType", modifiers: "", def_value: None
  // }, CppParam { name: "eColorSpace", ty: "::OVR::OpenVR::EColorSpace", modifiers: "", def_value: None }]
  constexpr Texture_t(::System::IntPtr handle, ::OVR::OpenVR::ETextureType eType, ::OVR::OpenVR::EColorSpace eColorSpace) noexcept;

  /// @brief Field handle, offset: 0x0, size: 0x8, def value: None
  ::System::IntPtr handle;

  /// @brief Field eType, offset: 0x8, size: 0x4, def value: None
  ::OVR::OpenVR::ETextureType eType;

  /// @brief Field eColorSpace, offset: 0xc, size: 0x4, def value: None
  ::OVR::OpenVR::EColorSpace eColorSpace;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8945 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::Texture_t, 0x10>, "Size mismatch!");

static_assert(offsetof(::OVR::OpenVR::Texture_t, handle) == 0x0, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::Texture_t, eType) == 0x8, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::Texture_t, eColorSpace) == 0xc, "Offset mismatch!");

} // namespace OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::Texture_t, "OVR.OpenVR", "Texture_t");

#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VREvent_PerformanceTest_t)
// Forward declare root types
namespace OVR::OpenVR {
struct VREvent_PerformanceTest_t;
}
// Write type traits
MARK_VAL_T(::OVR::OpenVR::VREvent_PerformanceTest_t);
// Type: OVR.OpenVR::VREvent_PerformanceTest_t
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8678))
// CS Name: ::OVR.OpenVR::VREvent_PerformanceTest_t
struct CORDL_TYPE VREvent_PerformanceTest_t {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "m_nFidelityLevel", ty: "uint32_t", modifiers: "", def_value: None }]
  constexpr VREvent_PerformanceTest_t(uint32_t m_nFidelityLevel) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr VREvent_PerformanceTest_t();

  /// @brief Field m_nFidelityLevel, offset: 0x0, size: 0x4, def value: None
  uint32_t m_nFidelityLevel;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::VREvent_PerformanceTest_t, 0x4>, "Size mismatch!");

} // namespace OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::VREvent_PerformanceTest_t, "OVR.OpenVR", "VREvent_PerformanceTest_t");
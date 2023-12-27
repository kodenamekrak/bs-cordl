#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MergeNullValueHandling)
// Forward declare root types
namespace Newtonsoft::Json::Linq {
struct MergeNullValueHandling;
}
// Write type traits
MARK_VAL_T(::Newtonsoft::Json::Linq::MergeNullValueHandling);
// Type: Newtonsoft.Json.Linq::MergeNullValueHandling
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Linq {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11973))
// CS Name: ::Newtonsoft.Json.Linq::MergeNullValueHandling
struct CORDL_TYPE MergeNullValueHandling {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __MergeNullValueHandling_Unwrapped
  enum struct __MergeNullValueHandling_Unwrapped : int32_t {
    __E_Ignore = static_cast<int32_t>(0x0),
    __E_Merge = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __MergeNullValueHandling_Unwrapped() const noexcept {
    return static_cast<__MergeNullValueHandling_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr MergeNullValueHandling(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr MergeNullValueHandling();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Ignore value: static_cast<int32_t>(0x0)
  static ::Newtonsoft::Json::Linq::MergeNullValueHandling const Ignore;

  /// @brief Field Merge value: static_cast<int32_t>(0x1)
  static ::Newtonsoft::Json::Linq::MergeNullValueHandling const Merge;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Linq::MergeNullValueHandling, 0x4>, "Size mismatch!");

} // namespace Newtonsoft::Json::Linq
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Linq::MergeNullValueHandling, "Newtonsoft.Json.Linq", "MergeNullValueHandling");
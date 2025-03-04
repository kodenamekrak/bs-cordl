#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Cms/CmsAttributeTableParameter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CmsAttributeTableParameter)
// Forward declare root types
namespace Org::BouncyCastle::Cms {
struct CmsAttributeTableParameter;
}
// Write type traits
MARK_VAL_T(::Org::BouncyCastle::Cms::CmsAttributeTableParameter);
// Dependencies
namespace Org::BouncyCastle::Cms {
// Is value type: true
// CS Name: Org.BouncyCastle.Cms.CmsAttributeTableParameter
struct CORDL_TYPE CmsAttributeTableParameter {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __CmsAttributeTableParameter_Unwrapped
  enum struct __CmsAttributeTableParameter_Unwrapped : int32_t {
    __E_ContentType = static_cast<int32_t>(0x0),
    __E_Digest = static_cast<int32_t>(0x1),
    __E_Signature = static_cast<int32_t>(0x2),
    __E_DigestAlgorithmIdentifier = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __CmsAttributeTableParameter_Unwrapped() const noexcept {
    return static_cast<__CmsAttributeTableParameter_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr CmsAttributeTableParameter();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr CmsAttributeTableParameter(int32_t value__) noexcept;

  /// @brief Field ContentType value: I32(0)
  static ::Org::BouncyCastle::Cms::CmsAttributeTableParameter const ContentType;

  /// @brief Field Digest value: I32(1)
  static ::Org::BouncyCastle::Cms::CmsAttributeTableParameter const Digest;

  /// @brief Field DigestAlgorithmIdentifier value: I32(3)
  static ::Org::BouncyCastle::Cms::CmsAttributeTableParameter const DigestAlgorithmIdentifier;

  /// @brief Field Signature value: I32(2)
  static ::Org::BouncyCastle::Cms::CmsAttributeTableParameter const Signature;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 614 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Cms::CmsAttributeTableParameter, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Cms::CmsAttributeTableParameter, 0x4>, "Size mismatch!");

} // namespace Org::BouncyCastle::Cms
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Cms::CmsAttributeTableParameter, "Org.BouncyCastle.Cms", "CmsAttributeTableParameter");

#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Cms/CmsAttributeTableGenerator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(CmsAttributeTableGenerator)
namespace Org::BouncyCastle::Asn1::Cms {
class AttributeTable;
}
namespace System::Collections {
class IDictionary;
}
// Forward declare root types
namespace Org::BouncyCastle::Cms {
class CmsAttributeTableGenerator;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Cms::CmsAttributeTableGenerator);
// Dependencies
namespace Org::BouncyCastle::Cms {
// Is value type: false
// CS Name: Org.BouncyCastle.Cms.CmsAttributeTableGenerator
class CORDL_TYPE CmsAttributeTableGenerator {
public:
  // Declarations
  /// @brief Method GetAttributes, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Cms::AttributeTable* GetAttributes(::System::Collections::IDictionary* parameters);

  // Ctor Parameters [CppParam { name: "", ty: "CmsAttributeTableGenerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CmsAttributeTableGenerator(CmsAttributeTableGenerator const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 615 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Org::BouncyCastle::Cms
NEED_NO_BOX(::Org::BouncyCastle::Cms::CmsAttributeTableGenerator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Cms::CmsAttributeTableGenerator*, "Org.BouncyCastle.Cms", "CmsAttributeTableGenerator");

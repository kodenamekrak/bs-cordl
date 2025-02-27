#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crmf/IEncryptedValuePadder.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(IEncryptedValuePadder)
// Forward declare root types
namespace Org::BouncyCastle::Crmf {
class IEncryptedValuePadder;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crmf::IEncryptedValuePadder);
// Dependencies
namespace Org::BouncyCastle::Crmf {
// Is value type: false
// CS Name: Org.BouncyCastle.Crmf.IEncryptedValuePadder
class CORDL_TYPE IEncryptedValuePadder {
public:
  // Declarations
  /// @brief Method GetPaddedData, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetPaddedData(::ArrayW<uint8_t, ::Array<uint8_t>*> data);

  /// @brief Method GetUnpaddedData, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetUnpaddedData(::ArrayW<uint8_t, ::Array<uint8_t>*> paddedData);

  // Ctor Parameters [CppParam { name: "", ty: "IEncryptedValuePadder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IEncryptedValuePadder(IEncryptedValuePadder const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 702 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Org::BouncyCastle::Crmf
NEED_NO_BOX(::Org::BouncyCastle::Crmf::IEncryptedValuePadder);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crmf::IEncryptedValuePadder*, "Org.BouncyCastle.Crmf", "IEncryptedValuePadder");

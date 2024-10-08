#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/ISignerWithRecovery.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ISignerWithRecovery)
namespace Org::BouncyCastle::Crypto {
class ISigner;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto {
class ISignerWithRecovery;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::ISignerWithRecovery);
// Type: Org.BouncyCastle.Crypto::ISignerWithRecovery
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Crypto::ISignerWithRecovery*
class CORDL_TYPE ISignerWithRecovery {
public:
  // Declarations
  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::ISigner"
  constexpr operator ::Org::BouncyCastle::Crypto::ISigner*() noexcept;

  /// @brief Method GetRecoveredMessage, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetRecoveredMessage();

  /// @brief Method HasFullMessage, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool HasFullMessage();

  /// @brief Method UpdateWithRecoveredMessage, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void UpdateWithRecoveredMessage(::ArrayW<uint8_t, ::Array<uint8_t>*> signature);

  /// @brief Convert to "::Org::BouncyCastle::Crypto::ISigner"
  constexpr ::Org::BouncyCastle::Crypto::ISigner* i___Org__BouncyCastle__Crypto__ISigner() noexcept;

  // Ctor Parameters [CppParam { name: "", ty: "ISignerWithRecovery", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ISignerWithRecovery(ISignerWithRecovery&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ISignerWithRecovery", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ISignerWithRecovery(ISignerWithRecovery const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1145 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Org::BouncyCastle::Crypto
NEED_NO_BOX(::Org::BouncyCastle::Crypto::ISignerWithRecovery);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::ISignerWithRecovery*, "Org.BouncyCastle.Crypto", "ISignerWithRecovery");

#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Modes/Gcm/IGcmExponentiator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IGcmExponentiator)
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Modes::Gcm {
class IGcmExponentiator;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Modes::Gcm::IGcmExponentiator);
// Type: Org.BouncyCastle.Crypto.Modes.Gcm::IGcmExponentiator
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Modes::Gcm {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Crypto.Modes.Gcm::IGcmExponentiator*
class CORDL_TYPE IGcmExponentiator {
public:
  // Declarations
  /// @brief Method ExponentiateX, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void ExponentiateX(int64_t pow, ::ArrayW<uint8_t, ::Array<uint8_t>*> output);

  /// @brief Method Init, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void Init(::ArrayW<uint8_t, ::Array<uint8_t>*> x);

  // Ctor Parameters [CppParam { name: "", ty: "IGcmExponentiator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IGcmExponentiator(IGcmExponentiator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IGcmExponentiator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IGcmExponentiator(IGcmExponentiator const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 949 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Org::BouncyCastle::Crypto::Modes::Gcm
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Modes::Gcm::IGcmExponentiator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Modes::Gcm::IGcmExponentiator*, "Org.BouncyCastle.Crypto.Modes.Gcm", "IGcmExponentiator");

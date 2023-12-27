#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/Digests/zzzz__KeccakDigest_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ShakeDigest)
namespace Org::BouncyCastle::Utilities {
class IMemoable;
}
namespace Org::BouncyCastle::Crypto {
class IXof;
}
namespace Org::BouncyCastle::Crypto {
class IDigest;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Digests {
class ShakeDigest;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Digests::ShakeDigest);
// Type: Org.BouncyCastle.Crypto.Digests::ShakeDigest
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 45, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Digests {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(755))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(774))
// CS Name: ::Org.BouncyCastle.Crypto.Digests::ShakeDigest*
class CORDL_TYPE ShakeDigest : public ::Org::BouncyCastle::Crypto::Digests::KeccakDigest {
public:
  // Declarations
  __declspec(property(get = get_AlgorithmName))::StringW AlgorithmName;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::IXof"
  constexpr operator ::Org::BouncyCastle::Crypto::IXof*() noexcept;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::IDigest"
  constexpr operator ::Org::BouncyCastle::Crypto::IDigest*() noexcept;

  /// @brief Method CheckBitLength addr 0xea5408 size 0xa8 virtual false final false
  static inline int32_t CheckBitLength(int32_t bitLength);

  static inline ::Org::BouncyCastle::Crypto::Digests::ShakeDigest* New_ctor();

  /// @brief Method .ctor addr 0xea54b0 size 0x8 virtual false final false
  inline void _ctor();

  static inline ::Org::BouncyCastle::Crypto::Digests::ShakeDigest* New_ctor(int32_t bitLength);

  /// @brief Method .ctor addr 0xea54b8 size 0x78 virtual false final false
  inline void _ctor(int32_t bitLength);

  static inline ::Org::BouncyCastle::Crypto::Digests::ShakeDigest* New_ctor(::Org::BouncyCastle::Crypto::Digests::ShakeDigest* source);

  /// @brief Method .ctor addr 0xea5530 size 0x68 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Crypto::Digests::ShakeDigest* source);

  /// @brief Method get_AlgorithmName addr 0xea5598 size 0x84 virtual true final false
  inline ::StringW get_AlgorithmName();

  /// @brief Method DoFinal addr 0xea561c size 0x50 virtual true final false
  inline int32_t DoFinal(::ArrayW<uint8_t, ::Array<uint8_t>*> output, int32_t outOff);

  /// @brief Method DoFinal addr 0xea566c size 0x44 virtual true final false
  inline int32_t DoFinal(::ArrayW<uint8_t, ::Array<uint8_t>*> output, int32_t outOff, int32_t outLen);

  /// @brief Method DoOutput addr 0xea56b0 size 0x64 virtual true final false
  inline int32_t DoOutput(::ArrayW<uint8_t, ::Array<uint8_t>*> output, int32_t outOff, int32_t outLen);

  /// @brief Method DoFinal addr 0xea5714 size 0x68 virtual true final false
  inline int32_t DoFinal(::ArrayW<uint8_t, ::Array<uint8_t>*> output, int32_t outOff, uint8_t partialByte, int32_t partialBits);

  /// @brief Method DoFinal addr 0xea577c size 0x120 virtual true final false
  inline int32_t DoFinal(::ArrayW<uint8_t, ::Array<uint8_t>*> output, int32_t outOff, int32_t outLen, uint8_t partialByte, int32_t partialBits);

  /// @brief Method Copy addr 0xea589c size 0x60 virtual true final false
  inline ::Org::BouncyCastle::Utilities::IMemoable* Copy();

  // Ctor Parameters [CppParam { name: "", ty: "ShakeDigest", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ShakeDigest(ShakeDigest&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ShakeDigest", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ShakeDigest(ShakeDigest const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ShakeDigest();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Digests::ShakeDigest, 0x30>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Digests
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Digests::ShakeDigest);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Digests::ShakeDigest*, "Org.BouncyCastle.Crypto.Digests", "ShakeDigest");
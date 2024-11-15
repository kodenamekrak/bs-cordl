#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Prng/CryptoApiRandomGenerator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CryptoApiRandomGenerator)
namespace Org::BouncyCastle::Crypto::Prng {
class IRandomGenerator;
}
namespace System::Security::Cryptography {
class RandomNumberGenerator;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Prng {
class CryptoApiRandomGenerator;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Prng::CryptoApiRandomGenerator);
// Type: Org.BouncyCastle.Crypto.Prng::CryptoApiRandomGenerator
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Prng {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Crypto.Prng::CryptoApiRandomGenerator*
class CORDL_TYPE CryptoApiRandomGenerator : public ::System::Object {
public:
  // Declarations
  /// @brief Field rndProv, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_rndProv, put = __cordl_internal_set_rndProv)) ::System::Security::Cryptography::RandomNumberGenerator* rndProv;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::Prng::IRandomGenerator"
  constexpr operator ::Org::BouncyCastle::Crypto::Prng::IRandomGenerator*() noexcept;

  /// @brief Method AddSeedMaterial, addr 0x23941e4, size 0x4, virtual true, abstract: false, final false
  inline void AddSeedMaterial(::ArrayW<uint8_t, ::Array<uint8_t>*> seed);

  /// @brief Method AddSeedMaterial, addr 0x23941e8, size 0x4, virtual true, abstract: false, final false
  inline void AddSeedMaterial(int64_t seed);

  static inline ::Org::BouncyCastle::Crypto::Prng::CryptoApiRandomGenerator* New_ctor();

  static inline ::Org::BouncyCastle::Crypto::Prng::CryptoApiRandomGenerator* New_ctor(::System::Security::Cryptography::RandomNumberGenerator* rng);

  /// @brief Method NextBytes, addr 0x23941ec, size 0x20, virtual true, abstract: false, final false
  inline void NextBytes(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes);

  /// @brief Method NextBytes, addr 0x239420c, size 0x168, virtual true, abstract: false, final false
  inline void NextBytes(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t start, int32_t len);

  constexpr ::System::Security::Cryptography::RandomNumberGenerator*& __cordl_internal_get_rndProv();

  constexpr ::cordl_internals::to_const_pointer<::System::Security::Cryptography::RandomNumberGenerator*> const& __cordl_internal_get_rndProv() const;

  constexpr void __cordl_internal_set_rndProv(::System::Security::Cryptography::RandomNumberGenerator* value);

  /// @brief Method .ctor, addr 0x2394188, size 0x34, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x23941bc, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::System::Security::Cryptography::RandomNumberGenerator* rng);

  /// @brief Convert to "::Org::BouncyCastle::Crypto::Prng::IRandomGenerator"
  constexpr ::Org::BouncyCastle::Crypto::Prng::IRandomGenerator* i___Org__BouncyCastle__Crypto__Prng__IRandomGenerator() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CryptoApiRandomGenerator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CryptoApiRandomGenerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CryptoApiRandomGenerator(CryptoApiRandomGenerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CryptoApiRandomGenerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CryptoApiRandomGenerator(CryptoApiRandomGenerator const&) = delete;

  /// @brief Field rndProv, offset: 0x10, size: 0x8, def value: None
  ::System::Security::Cryptography::RandomNumberGenerator* ___rndProv;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1106 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Prng::CryptoApiRandomGenerator, 0x18>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Prng::CryptoApiRandomGenerator, ___rndProv) == 0x10, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crypto::Prng
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Prng::CryptoApiRandomGenerator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Prng::CryptoApiRandomGenerator*, "Org.BouncyCastle.Crypto.Prng", "CryptoApiRandomGenerator");

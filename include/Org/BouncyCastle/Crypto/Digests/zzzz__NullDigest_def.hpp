#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Digests/NullDigest.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NullDigest)
namespace Org::BouncyCastle::Crypto {
class IDigest;
}
namespace System::IO {
class MemoryStream;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Digests {
class NullDigest;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Digests::NullDigest);
// Type: Org.BouncyCastle.Crypto.Digests::NullDigest
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Digests {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Crypto.Digests::NullDigest*
class CORDL_TYPE NullDigest : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_AlgorithmName)) ::StringW AlgorithmName;

  /// @brief Field bOut, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_bOut, put = __cordl_internal_set_bOut)) ::System::IO::MemoryStream* bOut;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::IDigest"
  constexpr operator ::Org::BouncyCastle::Crypto::IDigest*() noexcept;

  /// @brief Method BlockUpdate, addr 0x2668590, size 0x24, virtual true, abstract: false, final true
  inline void BlockUpdate(::ArrayW<uint8_t, ::Array<uint8_t>*> inBytes, int32_t inOff, int32_t len);

  /// @brief Method DoFinal, addr 0x26685b4, size 0xc4, virtual true, abstract: false, final true
  inline int32_t DoFinal(::ArrayW<uint8_t, ::Array<uint8_t>*> outBytes, int32_t outOff);

  /// @brief Method GetByteLength, addr 0x2668540, size 0x8, virtual true, abstract: false, final true
  inline int32_t GetByteLength();

  /// @brief Method GetDigestSize, addr 0x2668548, size 0x24, virtual true, abstract: false, final true
  inline int32_t GetDigestSize();

  static inline ::Org::BouncyCastle::Crypto::Digests::NullDigest* New_ctor();

  /// @brief Method Reset, addr 0x2668678, size 0x28, virtual true, abstract: false, final true
  inline void Reset();

  /// @brief Method Update, addr 0x266856c, size 0x24, virtual true, abstract: false, final true
  inline void Update(uint8_t b);

  constexpr ::System::IO::MemoryStream*& __cordl_internal_get_bOut();

  constexpr ::cordl_internals::to_const_pointer<::System::IO::MemoryStream*> const& __cordl_internal_get_bOut() const;

  constexpr void __cordl_internal_set_bOut(::System::IO::MemoryStream* value);

  /// @brief Method .ctor, addr 0x26686a0, size 0x60, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_AlgorithmName, addr 0x2668500, size 0x40, virtual true, abstract: false, final true
  inline ::StringW get_AlgorithmName();

  /// @brief Convert to "::Org::BouncyCastle::Crypto::IDigest"
  constexpr ::Org::BouncyCastle::Crypto::IDigest* i___Org__BouncyCastle__Crypto__IDigest() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NullDigest();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NullDigest", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NullDigest(NullDigest&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NullDigest", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NullDigest(NullDigest const&) = delete;

  /// @brief Field bOut, offset: 0x10, size: 0x8, def value: None
  ::System::IO::MemoryStream* ___bOut;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 761 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Digests::NullDigest, 0x18>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Digests::NullDigest, ___bOut) == 0x10, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crypto::Digests
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Digests::NullDigest);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Digests::NullDigest*, "Org.BouncyCastle.Crypto.Digests", "NullDigest");

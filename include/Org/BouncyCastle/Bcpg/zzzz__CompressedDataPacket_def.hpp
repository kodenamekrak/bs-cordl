#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Bcpg/zzzz__CompressionAlgorithmTag_def.hpp"
#include "Org/BouncyCastle/Bcpg/zzzz__InputStreamPacket_def.hpp"
CORDL_MODULE_EXPORT(CompressedDataPacket)
namespace Org::BouncyCastle::Bcpg {
class BcpgInputStream;
}
namespace Org::BouncyCastle::Bcpg {
struct CompressionAlgorithmTag;
}
// Forward declare root types
namespace Org::BouncyCastle::Bcpg {
class CompressedDataPacket;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Bcpg::CompressedDataPacket);
// Type: Org.BouncyCastle.Bcpg::CompressedDataPacket
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 28, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Bcpg {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(557)), TypeDefinitionIndex(TypeDefinitionIndex(559))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(558))
// CS Name: ::Org.BouncyCastle.Bcpg::CompressedDataPacket*
class CORDL_TYPE CompressedDataPacket : public ::Org::BouncyCastle::Bcpg::InputStreamPacket {
public:
  // Declarations
  /// @brief Field algorithm, offset 0x18, size 0x4
  __declspec(property(get = __get_algorithm, put = __set_algorithm))::Org::BouncyCastle::Bcpg::CompressionAlgorithmTag algorithm;

  __declspec(property(get = get_Algorithm))::Org::BouncyCastle::Bcpg::CompressionAlgorithmTag Algorithm;

  constexpr ::Org::BouncyCastle::Bcpg::CompressionAlgorithmTag& __get_algorithm();

  constexpr ::Org::BouncyCastle::Bcpg::CompressionAlgorithmTag const& __get_algorithm() const;

  constexpr void __set_algorithm(::Org::BouncyCastle::Bcpg::CompressionAlgorithmTag value);

  static inline ::Org::BouncyCastle::Bcpg::CompressedDataPacket* New_ctor(::Org::BouncyCastle::Bcpg::BcpgInputStream* bcpgIn);

  /// @brief Method .ctor addr 0x11cea90 size 0x48 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Bcpg::BcpgInputStream* bcpgIn);

  /// @brief Method get_Algorithm addr 0x11d0414 size 0x8 virtual false final false
  inline ::Org::BouncyCastle::Bcpg::CompressionAlgorithmTag get_Algorithm();

  // Ctor Parameters [CppParam { name: "", ty: "CompressedDataPacket", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CompressedDataPacket(CompressedDataPacket&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CompressedDataPacket", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CompressedDataPacket(CompressedDataPacket const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CompressedDataPacket();

public:
  /// @brief Field algorithm, offset: 0x18, size: 0x4, def value: None
  ::Org::BouncyCastle::Bcpg::CompressionAlgorithmTag ___algorithm;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Bcpg::CompressedDataPacket, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Bcpg
NEED_NO_BOX(::Org::BouncyCastle::Bcpg::CompressedDataPacket);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::CompressedDataPacket*, "Org.BouncyCastle.Bcpg", "CompressedDataPacket");
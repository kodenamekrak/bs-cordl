#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/Tsp/MessageImprint.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MessageImprint)
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Tsp {
class MessageImprint;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Tsp::MessageImprint);
// Type: Org.BouncyCastle.Asn1.Tsp::MessageImprint
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::Tsp {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Asn1.Tsp::MessageImprint*
class CORDL_TYPE MessageImprint : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  __declspec(property(get = get_HashAlgorithm)) ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* HashAlgorithm;

  /// @brief Field hashAlgorithm, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_hashAlgorithm, put = __cordl_internal_set_hashAlgorithm)) ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* hashAlgorithm;

  /// @brief Field hashedMessage, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_hashedMessage, put = __cordl_internal_set_hashedMessage)) ::ArrayW<uint8_t, ::Array<uint8_t>*> hashedMessage;

  /// @brief Method GetHashedMessage, addr 0x24c51c4, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetHashedMessage();

  /// @brief Method GetInstance, addr 0x24c4ff8, size 0xa4, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Asn1::Tsp::MessageImprint* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::Tsp::MessageImprint* New_ctor(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* hashAlgorithm, ::ArrayW<uint8_t, ::Array<uint8_t>*> hashedMessage);

  static inline ::Org::BouncyCastle::Asn1::Tsp::MessageImprint* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method ToAsn1Object, addr 0x24c51cc, size 0x118, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*& __cordl_internal_get_hashAlgorithm();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*> const& __cordl_internal_get_hashAlgorithm() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_hashedMessage() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_hashedMessage();

  constexpr void __cordl_internal_set_hashAlgorithm(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* value);

  constexpr void __cordl_internal_set_hashedMessage(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  /// @brief Method .ctor, addr 0x24c5190, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* hashAlgorithm, ::ArrayW<uint8_t, ::Array<uint8_t>*> hashedMessage);

  /// @brief Method .ctor, addr 0x24c509c, size 0xf4, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method get_HashAlgorithm, addr 0x24c51bc, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* get_HashAlgorithm();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MessageImprint();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MessageImprint", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MessageImprint(MessageImprint&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MessageImprint", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MessageImprint(MessageImprint const&) = delete;

  /// @brief Field hashAlgorithm, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* ___hashAlgorithm;

  /// @brief Field hashedMessage, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___hashedMessage;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 315 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Tsp::MessageImprint, 0x20>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Tsp::MessageImprint, ___hashAlgorithm) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Tsp::MessageImprint, ___hashedMessage) == 0x18, "Offset mismatch!");

} // namespace Org::BouncyCastle::Asn1::Tsp
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Tsp::MessageImprint);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Tsp::MessageImprint*, "Org.BouncyCastle.Asn1.Tsp", "MessageImprint");

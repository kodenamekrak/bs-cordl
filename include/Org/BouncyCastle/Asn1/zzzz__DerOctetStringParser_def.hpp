#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(DerOctetStringParser)
namespace Org::BouncyCastle::Asn1 {
class DefiniteLengthInputStream;
}
namespace System::IO {
class Stream;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class IAsn1Convertible;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1OctetStringParser;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1 {
class DerOctetStringParser;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::DerOctetStringParser);
// Type: Org.BouncyCastle.Asn1::DerOctetStringParser
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(511))
// CS Name: ::Org.BouncyCastle.Asn1::DerOctetStringParser*
class CORDL_TYPE DerOctetStringParser : public ::System::Object {
public:
  // Declarations
  /// @brief Field stream, offset 0x10, size 0x8
  __declspec(property(get = __get_stream, put = __set_stream))::Org::BouncyCastle::Asn1::DefiniteLengthInputStream* stream;

  /// @brief Convert operator to "::Org::BouncyCastle::Asn1::Asn1OctetStringParser"
  constexpr operator ::Org::BouncyCastle::Asn1::Asn1OctetStringParser*() noexcept;

  /// @brief Convert operator to "::Org::BouncyCastle::Asn1::IAsn1Convertible"
  constexpr operator ::Org::BouncyCastle::Asn1::IAsn1Convertible*() noexcept;

  constexpr ::Org::BouncyCastle::Asn1::DefiniteLengthInputStream*& __get_stream();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DefiniteLengthInputStream*> const& __get_stream() const;

  constexpr void __set_stream(::Org::BouncyCastle::Asn1::DefiniteLengthInputStream* value);

  static inline ::Org::BouncyCastle::Asn1::DerOctetStringParser* New_ctor(::Org::BouncyCastle::Asn1::DefiniteLengthInputStream* stream);

  /// @brief Method .ctor addr 0x11ba3f8 size 0x28 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::DefiniteLengthInputStream* stream);

  /// @brief Method GetOctetStream addr 0x11c3714 size 0x8 virtual true final true
  inline ::System::IO::Stream* GetOctetStream();

  /// @brief Method ToAsn1Object addr 0x11c371c size 0x16c virtual true final true
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  // Ctor Parameters [CppParam { name: "", ty: "DerOctetStringParser", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DerOctetStringParser(DerOctetStringParser&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DerOctetStringParser", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DerOctetStringParser(DerOctetStringParser const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DerOctetStringParser();

public:
  /// @brief Field stream, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DefiniteLengthInputStream* ___stream;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::DerOctetStringParser, 0x18>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1
NEED_NO_BOX(::Org::BouncyCastle::Asn1::DerOctetStringParser);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::DerOctetStringParser*, "Org.BouncyCastle.Asn1", "DerOctetStringParser");
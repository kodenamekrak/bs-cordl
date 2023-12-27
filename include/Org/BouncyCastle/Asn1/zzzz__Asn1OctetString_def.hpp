#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Asn1OctetString)
namespace Org::BouncyCastle::Asn1 {
class IAsn1Convertible;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1OctetStringParser;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
namespace System {
class Object;
}
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1 {
class Asn1OctetString;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Asn1OctetString);
// Type: Org.BouncyCastle.Asn1::Asn1OctetString
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(31))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(456))
// CS Name: ::Org.BouncyCastle.Asn1::Asn1OctetString*
class CORDL_TYPE Asn1OctetString : public ::Org::BouncyCastle::Asn1::Asn1Object {
public:
  // Declarations
  /// @brief Field str, offset 0x10, size 0x8
  __declspec(property(get = __get_str, put = __set_str))::ArrayW<uint8_t, ::Array<uint8_t>*> str;

  __declspec(property(get = get_Parser))::Org::BouncyCastle::Asn1::Asn1OctetStringParser* Parser;

  /// @brief Convert operator to "::Org::BouncyCastle::Asn1::Asn1OctetStringParser"
  constexpr operator ::Org::BouncyCastle::Asn1::Asn1OctetStringParser*() noexcept;

  /// @brief Convert operator to "::Org::BouncyCastle::Asn1::IAsn1Convertible"
  constexpr operator ::Org::BouncyCastle::Asn1::IAsn1Convertible*() noexcept;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_str();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_str() const;

  constexpr void __set_str(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  /// @brief Method GetInstance addr 0x11b756c size 0xd4 virtual false final false
  static inline ::Org::BouncyCastle::Asn1::Asn1OctetString* GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject* obj, bool isExplicit);

  /// @brief Method GetInstance addr 0x11b07a0 size 0x2b8 virtual false final false
  static inline ::Org::BouncyCastle::Asn1::Asn1OctetString* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::Asn1OctetString* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> str);

  /// @brief Method .ctor addr 0x11b776c size 0x78 virtual false final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> str);

  /// @brief Method GetOctetStream addr 0x11b77e4 size 0x6c virtual true final true
  inline ::System::IO::Stream* GetOctetStream();

  /// @brief Method get_Parser addr 0x11b7850 size 0x4 virtual false final false
  inline ::Org::BouncyCastle::Asn1::Asn1OctetStringParser* get_Parser();

  /// @brief Method GetOctets addr 0x11b7854 size 0x8 virtual true final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetOctets();

  /// @brief Method Asn1GetHashCode addr 0x11b785c size 0x70 virtual true final false
  inline int32_t Asn1GetHashCode();

  /// @brief Method Asn1Equals addr 0x11b78cc size 0xec virtual true final false
  inline bool Asn1Equals(::Org::BouncyCastle::Asn1::Asn1Object* asn1Object);

  /// @brief Method ToString addr 0x11b79b8 size 0x84 virtual true final false
  inline ::StringW ToString();

  // Ctor Parameters [CppParam { name: "", ty: "Asn1OctetString", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Asn1OctetString(Asn1OctetString&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Asn1OctetString", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Asn1OctetString(Asn1OctetString const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Asn1OctetString();

public:
  /// @brief Field str, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___str;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Asn1OctetString, 0x18>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Asn1OctetString);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Asn1OctetString*, "Org.BouncyCastle.Asn1", "Asn1OctetString");
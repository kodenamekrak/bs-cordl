#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
CORDL_MODULE_EXPORT(RecipientIdentifier)
namespace System {
class Object;
}
namespace Org::BouncyCastle::Asn1 {
class IAsn1Choice;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1OctetString;
}
namespace Org::BouncyCastle::Asn1::Cms {
class IssuerAndSerialNumber;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Cms {
class RecipientIdentifier;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Cms::RecipientIdentifier);
// Type: Org.BouncyCastle.Asn1.Cms::RecipientIdentifier
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::Cms {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(89))
// CS Name: ::Org.BouncyCastle.Asn1.Cms::RecipientIdentifier*
class CORDL_TYPE RecipientIdentifier : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  /// @brief Field id, offset 0x10, size 0x8
  __declspec(property(get = __get_id, put = __set_id))::Org::BouncyCastle::Asn1::Asn1Encodable* id;

  __declspec(property(get = get_IsTagged)) bool IsTagged;

  __declspec(property(get = get_ID))::Org::BouncyCastle::Asn1::Asn1Encodable* _cordl_ID;

  /// @brief Convert operator to "::Org::BouncyCastle::Asn1::IAsn1Choice"
  constexpr operator ::Org::BouncyCastle::Asn1::IAsn1Choice*() noexcept;

  constexpr ::Org::BouncyCastle::Asn1::Asn1Encodable*& __get_id();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1Encodable*> const& __get_id() const;

  constexpr void __set_id(::Org::BouncyCastle::Asn1::Asn1Encodable* value);

  static inline ::Org::BouncyCastle::Asn1::Cms::RecipientIdentifier* New_ctor(::Org::BouncyCastle::Asn1::Cms::IssuerAndSerialNumber* id);

  /// @brief Method .ctor addr 0xe7c8d0 size 0x28 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Cms::IssuerAndSerialNumber* id);

  static inline ::Org::BouncyCastle::Asn1::Cms::RecipientIdentifier* New_ctor(::Org::BouncyCastle::Asn1::Asn1OctetString* id);

  /// @brief Method .ctor addr 0xe7c8f8 size 0x84 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1OctetString* id);

  static inline ::Org::BouncyCastle::Asn1::Cms::RecipientIdentifier* New_ctor(::Org::BouncyCastle::Asn1::Asn1Object* id);

  /// @brief Method .ctor addr 0xe7c97c size 0x28 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Object* id);

  /// @brief Method GetInstance addr 0xe7a11c size 0x230 virtual false final false
  static inline ::Org::BouncyCastle::Asn1::Cms::RecipientIdentifier* GetInstance(::System::Object* o);

  /// @brief Method get_IsTagged addr 0xe7c9a4 size 0x7c virtual false final false
  inline bool get_IsTagged();

  /// @brief Method get_ID addr 0xe7ca20 size 0x88 virtual false final false
  inline ::Org::BouncyCastle::Asn1::Asn1Encodable* get_ID();

  /// @brief Method ToAsn1Object addr 0xe7caa8 size 0x20 virtual true final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  // Ctor Parameters [CppParam { name: "", ty: "RecipientIdentifier", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RecipientIdentifier(RecipientIdentifier&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RecipientIdentifier", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RecipientIdentifier(RecipientIdentifier const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RecipientIdentifier();

public:
  /// @brief Field id, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1Encodable* ___id;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Cms::RecipientIdentifier, 0x18>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::Cms
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Cms::RecipientIdentifier);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Cms::RecipientIdentifier*, "Org.BouncyCastle.Asn1.Cms", "RecipientIdentifier");
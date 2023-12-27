#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
CORDL_MODULE_EXPORT(PkiStatusEncodable)
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace System {
class Object;
}
namespace Org::BouncyCastle::Asn1::Cmp {
struct PkiStatus;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class DerInteger;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Cmp {
class PkiStatusEncodable;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Cmp::PkiStatusEncodable);
// Type: Org.BouncyCastle.Asn1.Cmp::PkiStatusEncodable
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::Cmp {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(42))
// CS Name: ::Org.BouncyCastle.Asn1.Cmp::PkiStatusEncodable*
class CORDL_TYPE PkiStatusEncodable : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  /// @brief Field status, offset 0x10, size 0x8
  __declspec(property(get = __get_status, put = __set_status))::Org::BouncyCastle::Asn1::DerInteger* status;

  /// @brief Field granted, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_granted, put = setStaticF_granted))::Org::BouncyCastle::Asn1::Cmp::PkiStatusEncodable* granted;

  /// @brief Field grantedWithMods, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_grantedWithMods, put = setStaticF_grantedWithMods))::Org::BouncyCastle::Asn1::Cmp::PkiStatusEncodable* grantedWithMods;

  /// @brief Field rejection, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_rejection, put = setStaticF_rejection))::Org::BouncyCastle::Asn1::Cmp::PkiStatusEncodable* rejection;

  /// @brief Field waiting, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_waiting, put = setStaticF_waiting))::Org::BouncyCastle::Asn1::Cmp::PkiStatusEncodable* waiting;

  /// @brief Field revocationWarning, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_revocationWarning, put = setStaticF_revocationWarning))::Org::BouncyCastle::Asn1::Cmp::PkiStatusEncodable* revocationWarning;

  /// @brief Field revocationNotification, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_revocationNotification, put = setStaticF_revocationNotification))::Org::BouncyCastle::Asn1::Cmp::PkiStatusEncodable* revocationNotification;

  /// @brief Field keyUpdateWaiting, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_keyUpdateWaiting, put = setStaticF_keyUpdateWaiting))::Org::BouncyCastle::Asn1::Cmp::PkiStatusEncodable* keyUpdateWaiting;

  __declspec(property(get = get_Value))::Org::BouncyCastle::Math::BigInteger* Value;

  constexpr ::Org::BouncyCastle::Asn1::DerInteger*& __get_status();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerInteger*> const& __get_status() const;

  constexpr void __set_status(::Org::BouncyCastle::Asn1::DerInteger* value);

  static inline void setStaticF_granted(::Org::BouncyCastle::Asn1::Cmp::PkiStatusEncodable* value);

  static inline ::Org::BouncyCastle::Asn1::Cmp::PkiStatusEncodable* getStaticF_granted();

  static inline void setStaticF_grantedWithMods(::Org::BouncyCastle::Asn1::Cmp::PkiStatusEncodable* value);

  static inline ::Org::BouncyCastle::Asn1::Cmp::PkiStatusEncodable* getStaticF_grantedWithMods();

  static inline void setStaticF_rejection(::Org::BouncyCastle::Asn1::Cmp::PkiStatusEncodable* value);

  static inline ::Org::BouncyCastle::Asn1::Cmp::PkiStatusEncodable* getStaticF_rejection();

  static inline void setStaticF_waiting(::Org::BouncyCastle::Asn1::Cmp::PkiStatusEncodable* value);

  static inline ::Org::BouncyCastle::Asn1::Cmp::PkiStatusEncodable* getStaticF_waiting();

  static inline void setStaticF_revocationWarning(::Org::BouncyCastle::Asn1::Cmp::PkiStatusEncodable* value);

  static inline ::Org::BouncyCastle::Asn1::Cmp::PkiStatusEncodable* getStaticF_revocationWarning();

  static inline void setStaticF_revocationNotification(::Org::BouncyCastle::Asn1::Cmp::PkiStatusEncodable* value);

  static inline ::Org::BouncyCastle::Asn1::Cmp::PkiStatusEncodable* getStaticF_revocationNotification();

  static inline void setStaticF_keyUpdateWaiting(::Org::BouncyCastle::Asn1::Cmp::PkiStatusEncodable* value);

  static inline ::Org::BouncyCastle::Asn1::Cmp::PkiStatusEncodable* getStaticF_keyUpdateWaiting();

  static inline ::Org::BouncyCastle::Asn1::Cmp::PkiStatusEncodable* New_ctor(::Org::BouncyCastle::Asn1::Cmp::PkiStatus status);

  /// @brief Method .ctor addr 0xe6d21c size 0x7c virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Cmp::PkiStatus status);

  static inline ::Org::BouncyCastle::Asn1::Cmp::PkiStatusEncodable* New_ctor(::Org::BouncyCastle::Asn1::DerInteger* status);

  /// @brief Method .ctor addr 0xe6d298 size 0x28 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::DerInteger* status);

  /// @brief Method GetInstance addr 0xe6d2c0 size 0x18c virtual false final false
  static inline ::Org::BouncyCastle::Asn1::Cmp::PkiStatusEncodable* GetInstance(::System::Object* obj);

  /// @brief Method get_Value addr 0xe6d44c size 0x1c virtual true final false
  inline ::Org::BouncyCastle::Math::BigInteger* get_Value();

  /// @brief Method ToAsn1Object addr 0xe6d468 size 0x8 virtual true final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  // Ctor Parameters [CppParam { name: "", ty: "PkiStatusEncodable", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PkiStatusEncodable(PkiStatusEncodable&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PkiStatusEncodable", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PkiStatusEncodable(PkiStatusEncodable const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PkiStatusEncodable();

public:
  /// @brief Field status, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerInteger* ___status;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Cmp::PkiStatusEncodable, 0x18>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::Cmp
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Cmp::PkiStatusEncodable);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Cmp::PkiStatusEncodable*, "Org.BouncyCastle.Asn1.Cmp", "PkiStatusEncodable");
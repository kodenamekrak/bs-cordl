#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PgpPublicKeyRingBundle)
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class PgpPublicKeyRing;
}
namespace System::Collections {
class IDictionary;
}
namespace System::Collections {
class IList;
}
namespace System::IO {
class Stream;
}
namespace System::Collections {
class IEnumerable;
}
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class PgpPublicKey;
}
// Forward declare root types
namespace Org::BouncyCastle::Bcpg::OpenPgp {
class PgpPublicKeyRingBundle;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyRingBundle);
// Type: Org.BouncyCastle.Bcpg.OpenPgp::PgpPublicKeyRingBundle
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Bcpg::OpenPgp {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1662))
// CS Name: ::Org.BouncyCastle.Bcpg.OpenPgp::PgpPublicKeyRingBundle*
class CORDL_TYPE PgpPublicKeyRingBundle : public ::System::Object {
public:
  // Declarations
  /// @brief Field pubRings, offset 0x10, size 0x8
  __declspec(property(get = __get_pubRings, put = __set_pubRings))::System::Collections::IDictionary* pubRings;

  /// @brief Field order, offset 0x18, size 0x8
  __declspec(property(get = __get_order, put = __set_order))::System::Collections::IList* order;

  __declspec(property(get = get_Size)) int32_t Size;

  __declspec(property(get = get_Count)) int32_t Count;

  constexpr ::System::Collections::IDictionary*& __get_pubRings();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::IDictionary*> const& __get_pubRings() const;

  constexpr void __set_pubRings(::System::Collections::IDictionary* value);

  constexpr ::System::Collections::IList*& __get_order();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::IList*> const& __get_order() const;

  constexpr void __set_order(::System::Collections::IList* value);

  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyRingBundle* New_ctor(::System::Collections::IDictionary* pubRings, ::System::Collections::IList* order);

  /// @brief Method .ctor addr 0x10bb2e8 size 0x2c virtual false final false
  inline void _ctor(::System::Collections::IDictionary* pubRings, ::System::Collections::IList* order);

  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyRingBundle* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> encoding);

  /// @brief Method .ctor addr 0x10bb314 size 0x78 virtual false final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> encoding);

  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyRingBundle* New_ctor(::System::IO::Stream* inputStream);

  /// @brief Method .ctor addr 0x10bb38c size 0x80 virtual false final false
  inline void _ctor(::System::IO::Stream* inputStream);

  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyRingBundle* New_ctor(::System::Collections::IEnumerable* e);

  /// @brief Method .ctor addr 0x10bb40c size 0x5a0 virtual false final false
  inline void _ctor(::System::Collections::IEnumerable* e);

  /// @brief Method get_Size addr 0x10bb9ac size 0xa4 virtual false final false
  inline int32_t get_Size();

  /// @brief Method get_Count addr 0x10bba50 size 0xa4 virtual false final false
  inline int32_t get_Count();

  /// @brief Method GetKeyRings addr 0x10bbaf4 size 0xe4 virtual false final false
  inline ::System::Collections::IEnumerable* GetKeyRings();

  /// @brief Method GetKeyRings addr 0x10bbbd8 size 0xc virtual false final false
  inline ::System::Collections::IEnumerable* GetKeyRings(::StringW userId);

  /// @brief Method GetKeyRings addr 0x10bc490 size 0xc virtual false final false
  inline ::System::Collections::IEnumerable* GetKeyRings(::StringW userId, bool matchPartial);

  /// @brief Method GetKeyRings addr 0x10bbbe4 size 0x8ac virtual false final false
  inline ::System::Collections::IEnumerable* GetKeyRings(::StringW userId, bool matchPartial, bool ignoreCase);

  /// @brief Method GetPublicKey addr 0x10bc49c size 0x370 virtual false final false
  inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKey* GetPublicKey(int64_t keyId);

  /// @brief Method GetPublicKeyRing addr 0x10bc80c size 0x4d4 virtual false final false
  inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyRing* GetPublicKeyRing(int64_t keyId);

  /// @brief Method Contains addr 0x10bcce0 size 0x18 virtual false final false
  inline bool Contains(int64_t keyID);

  /// @brief Method GetEncoded addr 0x10bccf8 size 0x78 virtual false final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetEncoded();

  /// @brief Method Encode addr 0x10bcd70 size 0x448 virtual false final false
  inline void Encode(::System::IO::Stream* outStr);

  /// @brief Method AddPublicKeyRing addr 0x10bd1b8 size 0x2e8 virtual false final false
  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyRingBundle* AddPublicKeyRing(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyRingBundle* bundle,
                                                                                             ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyRing* publicKeyRing);

  /// @brief Method RemovePublicKeyRing addr 0x10bd4a0 size 0x2e4 virtual false final false
  static inline ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyRingBundle* RemovePublicKeyRing(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyRingBundle* bundle,
                                                                                                ::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyRing* publicKeyRing);

  // Ctor Parameters [CppParam { name: "", ty: "PgpPublicKeyRingBundle", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PgpPublicKeyRingBundle(PgpPublicKeyRingBundle&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PgpPublicKeyRingBundle", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PgpPublicKeyRingBundle(PgpPublicKeyRingBundle const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PgpPublicKeyRingBundle();

public:
  /// @brief Field pubRings, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::IDictionary* ___pubRings;

  /// @brief Field order, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::IList* ___order;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyRingBundle, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Bcpg::OpenPgp
NEED_NO_BOX(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyRingBundle);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::OpenPgp::PgpPublicKeyRingBundle*, "Org.BouncyCastle.Bcpg.OpenPgp", "PgpPublicKeyRingBundle");
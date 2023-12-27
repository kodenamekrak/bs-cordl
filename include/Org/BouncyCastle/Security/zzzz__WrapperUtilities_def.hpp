#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(WrapperUtilities)
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace Org::BouncyCastle::Crypto {
class IWrapper;
}
namespace System::Collections {
class IDictionary;
}
namespace Org::BouncyCastle::Security {
struct __WrapperUtilities__WrapAlgorithm;
}
namespace Org::BouncyCastle::Security {
class __WrapperUtilities__BufferedCipherWrapper;
}
namespace Org::BouncyCastle::Crypto {
class IBufferedCipher;
}
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Security {
struct __WrapperUtilities__WrapAlgorithm;
}
namespace Org::BouncyCastle::Security {
class WrapperUtilities;
}
namespace Org::BouncyCastle::Security {
class __WrapperUtilities__BufferedCipherWrapper;
}
// Write type traits
MARK_VAL_T(::Org::BouncyCastle::Security::__WrapperUtilities__WrapAlgorithm);
MARK_REF_PTR_T(::Org::BouncyCastle::Security::WrapperUtilities);
MARK_REF_PTR_T(::Org::BouncyCastle::Security::__WrapperUtilities__BufferedCipherWrapper);
// Type: ::WrapAlgorithm
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Security {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1760))
// CS Name: ::WrapperUtilities::WrapAlgorithm
struct CORDL_TYPE __WrapperUtilities__WrapAlgorithm {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____WrapperUtilities__WrapAlgorithm_Unwrapped
  enum struct ____WrapperUtilities__WrapAlgorithm_Unwrapped : int32_t {
    __E_AESWRAP = static_cast<int32_t>(0x0),
    __E_CAMELLIAWRAP = static_cast<int32_t>(0x1),
    __E_DESEDEWRAP = static_cast<int32_t>(0x2),
    __E_RC2WRAP = static_cast<int32_t>(0x3),
    __E_SEEDWRAP = static_cast<int32_t>(0x4),
    __E_DESEDERFC3211WRAP = static_cast<int32_t>(0x5),
    __E_AESRFC3211WRAP = static_cast<int32_t>(0x6),
    __E_CAMELLIARFC3211WRAP = static_cast<int32_t>(0x7),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____WrapperUtilities__WrapAlgorithm_Unwrapped() const noexcept {
    return static_cast<____WrapperUtilities__WrapAlgorithm_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __WrapperUtilities__WrapAlgorithm(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __WrapperUtilities__WrapAlgorithm();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field AESWRAP value: static_cast<int32_t>(0x0)
  static ::Org::BouncyCastle::Security::__WrapperUtilities__WrapAlgorithm const AESWRAP;

  /// @brief Field CAMELLIAWRAP value: static_cast<int32_t>(0x1)
  static ::Org::BouncyCastle::Security::__WrapperUtilities__WrapAlgorithm const CAMELLIAWRAP;

  /// @brief Field DESEDEWRAP value: static_cast<int32_t>(0x2)
  static ::Org::BouncyCastle::Security::__WrapperUtilities__WrapAlgorithm const DESEDEWRAP;

  /// @brief Field RC2WRAP value: static_cast<int32_t>(0x3)
  static ::Org::BouncyCastle::Security::__WrapperUtilities__WrapAlgorithm const RC2WRAP;

  /// @brief Field SEEDWRAP value: static_cast<int32_t>(0x4)
  static ::Org::BouncyCastle::Security::__WrapperUtilities__WrapAlgorithm const SEEDWRAP;

  /// @brief Field DESEDERFC3211WRAP value: static_cast<int32_t>(0x5)
  static ::Org::BouncyCastle::Security::__WrapperUtilities__WrapAlgorithm const DESEDERFC3211WRAP;

  /// @brief Field AESRFC3211WRAP value: static_cast<int32_t>(0x6)
  static ::Org::BouncyCastle::Security::__WrapperUtilities__WrapAlgorithm const AESRFC3211WRAP;

  /// @brief Field CAMELLIARFC3211WRAP value: static_cast<int32_t>(0x7)
  static ::Org::BouncyCastle::Security::__WrapperUtilities__WrapAlgorithm const CAMELLIARFC3211WRAP;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Security::__WrapperUtilities__WrapAlgorithm, 0x4>, "Size mismatch!");

} // namespace Org::BouncyCastle::Security
// Type: ::BufferedCipherWrapper
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 25, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Security {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1761))
// CS Name: ::WrapperUtilities::BufferedCipherWrapper*
class CORDL_TYPE __WrapperUtilities__BufferedCipherWrapper : public ::System::Object {
public:
  // Declarations
  /// @brief Field cipher, offset 0x10, size 0x8
  __declspec(property(get = __get_cipher, put = __set_cipher))::Org::BouncyCastle::Crypto::IBufferedCipher* cipher;

  /// @brief Field forWrapping, offset 0x18, size 0x1
  __declspec(property(get = __get_forWrapping, put = __set_forWrapping)) bool forWrapping;

  __declspec(property(get = get_AlgorithmName))::StringW AlgorithmName;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::IWrapper"
  constexpr operator ::Org::BouncyCastle::Crypto::IWrapper*() noexcept;

  constexpr ::Org::BouncyCastle::Crypto::IBufferedCipher*& __get_cipher();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::IBufferedCipher*> const& __get_cipher() const;

  constexpr void __set_cipher(::Org::BouncyCastle::Crypto::IBufferedCipher* value);

  constexpr bool& __get_forWrapping();

  constexpr bool const& __get_forWrapping() const;

  constexpr void __set_forWrapping(bool value);

  static inline ::Org::BouncyCastle::Security::__WrapperUtilities__BufferedCipherWrapper* New_ctor(::Org::BouncyCastle::Crypto::IBufferedCipher* cipher);

  /// @brief Method .ctor addr 0x114ea98 size 0x28 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Crypto::IBufferedCipher* cipher);

  /// @brief Method get_AlgorithmName addr 0x114ebc8 size 0xa0 virtual true final true
  inline ::StringW get_AlgorithmName();

  /// @brief Method Init addr 0x114ec68 size 0xc4 virtual true final true
  inline void Init(bool forWrapping, ::Org::BouncyCastle::Crypto::ICipherParameters* parameters);

  /// @brief Method Wrap addr 0x114ed2c size 0x118 virtual true final true
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Wrap(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inOff, int32_t length);

  /// @brief Method Unwrap addr 0x114ee44 size 0x118 virtual true final true
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Unwrap(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inOff, int32_t length);

  // Ctor Parameters [CppParam { name: "", ty: "__WrapperUtilities__BufferedCipherWrapper", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __WrapperUtilities__BufferedCipherWrapper(__WrapperUtilities__BufferedCipherWrapper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__WrapperUtilities__BufferedCipherWrapper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __WrapperUtilities__BufferedCipherWrapper(__WrapperUtilities__BufferedCipherWrapper const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __WrapperUtilities__BufferedCipherWrapper();

public:
  /// @brief Field cipher, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::IBufferedCipher* ___cipher;

  /// @brief Field forWrapping, offset: 0x18, size: 0x1, def value: None
  bool ___forWrapping;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Security::__WrapperUtilities__BufferedCipherWrapper, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Security
// Type: Org.BouncyCastle.Security::WrapperUtilities
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Security {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1762))
// CS Name: ::Org.BouncyCastle.Security::WrapperUtilities*
class CORDL_TYPE WrapperUtilities : public ::System::Object {
public:
  // Declarations
  using BufferedCipherWrapper = ::Org::BouncyCastle::Security::__WrapperUtilities__BufferedCipherWrapper;

  using WrapAlgorithm = ::Org::BouncyCastle::Security::__WrapperUtilities__WrapAlgorithm;

  /// @brief Field algorithms, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_algorithms, put = setStaticF_algorithms))::System::Collections::IDictionary* algorithms;

  static inline void setStaticF_algorithms(::System::Collections::IDictionary* value);

  static inline ::System::Collections::IDictionary* getStaticF_algorithms();

  static inline ::Org::BouncyCastle::Security::WrapperUtilities* New_ctor();

  /// @brief Method .ctor addr 0x114dcc0 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method GetWrapper addr 0x114e480 size 0x60 virtual false final false
  static inline ::Org::BouncyCastle::Crypto::IWrapper* GetWrapper(::Org::BouncyCastle::Asn1::DerObjectIdentifier* oid);

  /// @brief Method GetWrapper addr 0x114e4e0 size 0x5b8 virtual false final false
  static inline ::Org::BouncyCastle::Crypto::IWrapper* GetWrapper(::StringW algorithm);

  /// @brief Method GetAlgorithmName addr 0x114eac0 size 0x108 virtual false final false
  static inline ::StringW GetAlgorithmName(::Org::BouncyCastle::Asn1::DerObjectIdentifier* oid);

  // Ctor Parameters [CppParam { name: "", ty: "WrapperUtilities", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  WrapperUtilities(WrapperUtilities&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "WrapperUtilities", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  WrapperUtilities(WrapperUtilities const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr WrapperUtilities();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Security::WrapperUtilities, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Security
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Security::__WrapperUtilities__WrapAlgorithm, "Org.BouncyCastle.Security", "WrapperUtilities/WrapAlgorithm");
NEED_NO_BOX(::Org::BouncyCastle::Security::WrapperUtilities);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Security::WrapperUtilities*, "Org.BouncyCastle.Security", "WrapperUtilities");
NEED_NO_BOX(::Org::BouncyCastle::Security::__WrapperUtilities__BufferedCipherWrapper);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Security::__WrapperUtilities__BufferedCipherWrapper*, "Org.BouncyCastle.Security", "WrapperUtilities/BufferedCipherWrapper");
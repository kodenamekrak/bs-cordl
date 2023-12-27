#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CmsEnvelopedHelper)
namespace Org::BouncyCastle::Cms {
class RecipientInformationStore;
}
namespace Org::BouncyCastle::Asn1::Cms {
class RecipientInfo;
}
namespace Org::BouncyCastle::Crypto {
class IBufferedCipher;
}
namespace Org::BouncyCastle::Cms {
class CmsSecureReadable;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Set;
}
namespace System::Collections {
class IList;
}
namespace Org::BouncyCastle::Crypto {
class IWrapper;
}
namespace Org::BouncyCastle::Cms {
class __CmsEnvelopedHelper__CmsAuthenticatedSecureReadable;
}
namespace Org::BouncyCastle::Cms {
class __CmsEnvelopedHelper__CmsEnvelopedSecureReadable;
}
namespace System::Collections {
class IDictionary;
}
namespace Org::BouncyCastle::Cms {
class CmsReadable;
}
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
namespace System {
class Object;
}
namespace Org::BouncyCastle::Crypto {
class IMac;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class KeyParameter;
}
// Forward declare root types
namespace Org::BouncyCastle::Cms {
class CmsEnvelopedHelper;
}
namespace Org::BouncyCastle::Cms {
class __CmsEnvelopedHelper__CmsAuthenticatedSecureReadable;
}
namespace Org::BouncyCastle::Cms {
class __CmsEnvelopedHelper__CmsEnvelopedSecureReadable;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Cms::CmsEnvelopedHelper);
MARK_REF_PTR_T(::Org::BouncyCastle::Cms::__CmsEnvelopedHelper__CmsAuthenticatedSecureReadable);
MARK_REF_PTR_T(::Org::BouncyCastle::Cms::__CmsEnvelopedHelper__CmsEnvelopedSecureReadable);
// Type: ::CmsAuthenticatedSecureReadable
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Cms {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(638))
// CS Name: ::CmsEnvelopedHelper::CmsAuthenticatedSecureReadable*
class CORDL_TYPE __CmsEnvelopedHelper__CmsAuthenticatedSecureReadable : public ::System::Object {
public:
  // Declarations
  /// @brief Field algorithm, offset 0x10, size 0x8
  __declspec(property(get = __get_algorithm, put = __set_algorithm))::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* algorithm;

  /// @brief Field mac, offset 0x18, size 0x8
  __declspec(property(get = __get_mac, put = __set_mac))::Org::BouncyCastle::Crypto::IMac* mac;

  /// @brief Field readable, offset 0x20, size 0x8
  __declspec(property(get = __get_readable, put = __set_readable))::Org::BouncyCastle::Cms::CmsReadable* readable;

  __declspec(property(get = get_Algorithm))::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* Algorithm;

  __declspec(property(get = get_CryptoObject))::System::Object* CryptoObject;

  /// @brief Convert operator to "::Org::BouncyCastle::Cms::CmsSecureReadable"
  constexpr operator ::Org::BouncyCastle::Cms::CmsSecureReadable*() noexcept;

  constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*& __get_algorithm();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*> const& __get_algorithm() const;

  constexpr void __set_algorithm(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* value);

  constexpr ::Org::BouncyCastle::Crypto::IMac*& __get_mac();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::IMac*> const& __get_mac() const;

  constexpr void __set_mac(::Org::BouncyCastle::Crypto::IMac* value);

  constexpr ::Org::BouncyCastle::Cms::CmsReadable*& __get_readable();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Cms::CmsReadable*> const& __get_readable() const;

  constexpr void __set_readable(::Org::BouncyCastle::Cms::CmsReadable* value);

  static inline ::Org::BouncyCastle::Cms::__CmsEnvelopedHelper__CmsAuthenticatedSecureReadable* New_ctor(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* algorithm,
                                                                                                         ::Org::BouncyCastle::Cms::CmsReadable* readable);

  /// @brief Method .ctor addr 0x11e3fdc size 0x30 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* algorithm, ::Org::BouncyCastle::Cms::CmsReadable* readable);

  /// @brief Method get_Algorithm addr 0x11e400c size 0x8 virtual true final true
  inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* get_Algorithm();

  /// @brief Method get_CryptoObject addr 0x11e4014 size 0x8 virtual true final true
  inline ::System::Object* get_CryptoObject();

  /// @brief Method GetReadable addr 0x11e401c size 0x430 virtual true final true
  inline ::Org::BouncyCastle::Cms::CmsReadable* GetReadable(::Org::BouncyCastle::Crypto::Parameters::KeyParameter* sKey);

  // Ctor Parameters [CppParam { name: "", ty: "__CmsEnvelopedHelper__CmsAuthenticatedSecureReadable", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __CmsEnvelopedHelper__CmsAuthenticatedSecureReadable(__CmsEnvelopedHelper__CmsAuthenticatedSecureReadable&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__CmsEnvelopedHelper__CmsAuthenticatedSecureReadable", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __CmsEnvelopedHelper__CmsAuthenticatedSecureReadable(__CmsEnvelopedHelper__CmsAuthenticatedSecureReadable const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __CmsEnvelopedHelper__CmsAuthenticatedSecureReadable();

public:
  /// @brief Field algorithm, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* ___algorithm;

  /// @brief Field mac, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::IMac* ___mac;

  /// @brief Field readable, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Cms::CmsReadable* ___readable;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Cms::__CmsEnvelopedHelper__CmsAuthenticatedSecureReadable, 0x28>, "Size mismatch!");

} // namespace Org::BouncyCastle::Cms
// Type: ::CmsEnvelopedSecureReadable
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Cms {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(639))
// CS Name: ::CmsEnvelopedHelper::CmsEnvelopedSecureReadable*
class CORDL_TYPE __CmsEnvelopedHelper__CmsEnvelopedSecureReadable : public ::System::Object {
public:
  // Declarations
  /// @brief Field algorithm, offset 0x10, size 0x8
  __declspec(property(get = __get_algorithm, put = __set_algorithm))::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* algorithm;

  /// @brief Field cipher, offset 0x18, size 0x8
  __declspec(property(get = __get_cipher, put = __set_cipher))::Org::BouncyCastle::Crypto::IBufferedCipher* cipher;

  /// @brief Field readable, offset 0x20, size 0x8
  __declspec(property(get = __get_readable, put = __set_readable))::Org::BouncyCastle::Cms::CmsReadable* readable;

  __declspec(property(get = get_Algorithm))::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* Algorithm;

  __declspec(property(get = get_CryptoObject))::System::Object* CryptoObject;

  /// @brief Convert operator to "::Org::BouncyCastle::Cms::CmsSecureReadable"
  constexpr operator ::Org::BouncyCastle::Cms::CmsSecureReadable*() noexcept;

  constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*& __get_algorithm();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*> const& __get_algorithm() const;

  constexpr void __set_algorithm(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* value);

  constexpr ::Org::BouncyCastle::Crypto::IBufferedCipher*& __get_cipher();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::IBufferedCipher*> const& __get_cipher() const;

  constexpr void __set_cipher(::Org::BouncyCastle::Crypto::IBufferedCipher* value);

  constexpr ::Org::BouncyCastle::Cms::CmsReadable*& __get_readable();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Cms::CmsReadable*> const& __get_readable() const;

  constexpr void __set_readable(::Org::BouncyCastle::Cms::CmsReadable* value);

  static inline ::Org::BouncyCastle::Cms::__CmsEnvelopedHelper__CmsEnvelopedSecureReadable* New_ctor(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* algorithm,
                                                                                                     ::Org::BouncyCastle::Cms::CmsReadable* readable);

  /// @brief Method .ctor addr 0x11e4478 size 0x30 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* algorithm, ::Org::BouncyCastle::Cms::CmsReadable* readable);

  /// @brief Method get_Algorithm addr 0x11e44a8 size 0x8 virtual true final true
  inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* get_Algorithm();

  /// @brief Method get_CryptoObject addr 0x11e44b0 size 0x8 virtual true final true
  inline ::System::Object* get_CryptoObject();

  /// @brief Method GetReadable addr 0x11e44b8 size 0x63c virtual true final true
  inline ::Org::BouncyCastle::Cms::CmsReadable* GetReadable(::Org::BouncyCastle::Crypto::Parameters::KeyParameter* sKey);

  // Ctor Parameters [CppParam { name: "", ty: "__CmsEnvelopedHelper__CmsEnvelopedSecureReadable", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __CmsEnvelopedHelper__CmsEnvelopedSecureReadable(__CmsEnvelopedHelper__CmsEnvelopedSecureReadable&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__CmsEnvelopedHelper__CmsEnvelopedSecureReadable", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __CmsEnvelopedHelper__CmsEnvelopedSecureReadable(__CmsEnvelopedHelper__CmsEnvelopedSecureReadable const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __CmsEnvelopedHelper__CmsEnvelopedSecureReadable();

public:
  /// @brief Field algorithm, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* ___algorithm;

  /// @brief Field cipher, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::IBufferedCipher* ___cipher;

  /// @brief Field readable, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Cms::CmsReadable* ___readable;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Cms::__CmsEnvelopedHelper__CmsEnvelopedSecureReadable, 0x28>, "Size mismatch!");

} // namespace Org::BouncyCastle::Cms
// Type: Org.BouncyCastle.Cms::CmsEnvelopedHelper
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Cms {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(640))
// CS Name: ::Org.BouncyCastle.Cms::CmsEnvelopedHelper*
class CORDL_TYPE CmsEnvelopedHelper : public ::System::Object {
public:
  // Declarations
  using CmsEnvelopedSecureReadable = ::Org::BouncyCastle::Cms::__CmsEnvelopedHelper__CmsEnvelopedSecureReadable;

  using CmsAuthenticatedSecureReadable = ::Org::BouncyCastle::Cms::__CmsEnvelopedHelper__CmsAuthenticatedSecureReadable;

  /// @brief Field Instance, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Instance, put = setStaticF_Instance))::Org::BouncyCastle::Cms::CmsEnvelopedHelper* Instance;

  /// @brief Field KeySizes, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_KeySizes, put = setStaticF_KeySizes))::System::Collections::IDictionary* KeySizes;

  /// @brief Field BaseCipherNames, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_BaseCipherNames, put = setStaticF_BaseCipherNames))::System::Collections::IDictionary* BaseCipherNames;

  static inline void setStaticF_Instance(::Org::BouncyCastle::Cms::CmsEnvelopedHelper* value);

  static inline ::Org::BouncyCastle::Cms::CmsEnvelopedHelper* getStaticF_Instance();

  static inline void setStaticF_KeySizes(::System::Collections::IDictionary* value);

  static inline ::System::Collections::IDictionary* getStaticF_KeySizes();

  static inline void setStaticF_BaseCipherNames(::System::Collections::IDictionary* value);

  static inline ::System::Collections::IDictionary* getStaticF_BaseCipherNames();

  /// @brief Method GetAsymmetricEncryptionAlgName addr 0x11e2614 size 0x98 virtual false final false
  inline ::StringW GetAsymmetricEncryptionAlgName(::StringW encryptionAlgOid);

  /// @brief Method CreateAsymmetricCipher addr 0x11e26ac size 0x118 virtual false final false
  inline ::Org::BouncyCastle::Crypto::IBufferedCipher* CreateAsymmetricCipher(::StringW encryptionOid);

  /// @brief Method CreateWrapper addr 0x11e27c4 size 0x104 virtual false final false
  inline ::Org::BouncyCastle::Crypto::IWrapper* CreateWrapper(::StringW encryptionOid);

  /// @brief Method GetRfc3211WrapperName addr 0x11e28c8 size 0x1d8 virtual false final false
  inline ::StringW GetRfc3211WrapperName(::StringW oid);

  /// @brief Method GetKeySize addr 0x11e2aa0 size 0x208 virtual false final false
  inline int32_t GetKeySize(::StringW oid);

  /// @brief Method BuildRecipientInformationStore addr 0x11e2ca8 size 0x134 virtual false final false
  static inline ::Org::BouncyCastle::Cms::RecipientInformationStore* BuildRecipientInformationStore(::Org::BouncyCastle::Asn1::Asn1Set* recipientInfos,
                                                                                                    ::Org::BouncyCastle::Cms::CmsSecureReadable* secureReadable);

  /// @brief Method ReadRecipientInfo addr 0x11e2ddc size 0x37c virtual false final false
  static inline void ReadRecipientInfo(::System::Collections::IList* infos, ::Org::BouncyCastle::Asn1::Cms::RecipientInfo* info, ::Org::BouncyCastle::Cms::CmsSecureReadable* secureReadable);

  static inline ::Org::BouncyCastle::Cms::CmsEnvelopedHelper* New_ctor();

  /// @brief Method .ctor addr 0x11e260c size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "CmsEnvelopedHelper", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CmsEnvelopedHelper(CmsEnvelopedHelper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CmsEnvelopedHelper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CmsEnvelopedHelper(CmsEnvelopedHelper const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CmsEnvelopedHelper();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Cms::CmsEnvelopedHelper, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Cms
NEED_NO_BOX(::Org::BouncyCastle::Cms::CmsEnvelopedHelper);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Cms::CmsEnvelopedHelper*, "Org.BouncyCastle.Cms", "CmsEnvelopedHelper");
NEED_NO_BOX(::Org::BouncyCastle::Cms::__CmsEnvelopedHelper__CmsAuthenticatedSecureReadable);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Cms::__CmsEnvelopedHelper__CmsAuthenticatedSecureReadable*, "Org.BouncyCastle.Cms", "CmsEnvelopedHelper/CmsAuthenticatedSecureReadable");
NEED_NO_BOX(::Org::BouncyCastle::Cms::__CmsEnvelopedHelper__CmsEnvelopedSecureReadable);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Cms::__CmsEnvelopedHelper__CmsEnvelopedSecureReadable*, "Org.BouncyCastle.Cms", "CmsEnvelopedHelper/CmsEnvelopedSecureReadable");
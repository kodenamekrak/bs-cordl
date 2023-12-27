#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PkiHeader)
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1OctetString;
}
namespace Org::BouncyCastle::Asn1::X509 {
class GeneralName;
}
namespace System {
class Object;
}
namespace Org::BouncyCastle::Asn1 {
class DerGeneralizedTime;
}
namespace Org::BouncyCastle::Asn1::Cmp {
class InfoTypeAndValue;
}
namespace Org::BouncyCastle::Asn1::Cmp {
class PkiFreeText;
}
namespace Org::BouncyCastle::Asn1 {
class DerInteger;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Cmp {
class PkiHeader;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Cmp::PkiHeader);
// Type: Org.BouncyCastle.Asn1.Cmp::PkiHeader
// SizeInfo { instance_size: 112, native_size: -1, calculated_instance_size: 112, calculated_native_size: 112, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::Cmp {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(37))
// CS Name: ::Org.BouncyCastle.Asn1.Cmp::PkiHeader*
class CORDL_TYPE PkiHeader : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  /// @brief Field pvno, offset 0x10, size 0x8
  __declspec(property(get = __get_pvno, put = __set_pvno))::Org::BouncyCastle::Asn1::DerInteger* pvno;

  /// @brief Field sender, offset 0x18, size 0x8
  __declspec(property(get = __get_sender, put = __set_sender))::Org::BouncyCastle::Asn1::X509::GeneralName* sender;

  /// @brief Field recipient, offset 0x20, size 0x8
  __declspec(property(get = __get_recipient, put = __set_recipient))::Org::BouncyCastle::Asn1::X509::GeneralName* recipient;

  /// @brief Field messageTime, offset 0x28, size 0x8
  __declspec(property(get = __get_messageTime, put = __set_messageTime))::Org::BouncyCastle::Asn1::DerGeneralizedTime* messageTime;

  /// @brief Field protectionAlg, offset 0x30, size 0x8
  __declspec(property(get = __get_protectionAlg, put = __set_protectionAlg))::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* protectionAlg;

  /// @brief Field senderKID, offset 0x38, size 0x8
  __declspec(property(get = __get_senderKID, put = __set_senderKID))::Org::BouncyCastle::Asn1::Asn1OctetString* senderKID;

  /// @brief Field recipKID, offset 0x40, size 0x8
  __declspec(property(get = __get_recipKID, put = __set_recipKID))::Org::BouncyCastle::Asn1::Asn1OctetString* recipKID;

  /// @brief Field transactionID, offset 0x48, size 0x8
  __declspec(property(get = __get_transactionID, put = __set_transactionID))::Org::BouncyCastle::Asn1::Asn1OctetString* transactionID;

  /// @brief Field senderNonce, offset 0x50, size 0x8
  __declspec(property(get = __get_senderNonce, put = __set_senderNonce))::Org::BouncyCastle::Asn1::Asn1OctetString* senderNonce;

  /// @brief Field recipNonce, offset 0x58, size 0x8
  __declspec(property(get = __get_recipNonce, put = __set_recipNonce))::Org::BouncyCastle::Asn1::Asn1OctetString* recipNonce;

  /// @brief Field freeText, offset 0x60, size 0x8
  __declspec(property(get = __get_freeText, put = __set_freeText))::Org::BouncyCastle::Asn1::Cmp::PkiFreeText* freeText;

  /// @brief Field generalInfo, offset 0x68, size 0x8
  __declspec(property(get = __get_generalInfo, put = __set_generalInfo))::Org::BouncyCastle::Asn1::Asn1Sequence* generalInfo;

  /// @brief Field NULL_NAME, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_NULL_NAME, put = setStaticF_NULL_NAME))::Org::BouncyCastle::Asn1::X509::GeneralName* NULL_NAME;

  /// @brief Field CMP_1999, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_CMP_1999, put = setStaticF_CMP_1999)) int32_t CMP_1999;

  /// @brief Field CMP_2000, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_CMP_2000, put = setStaticF_CMP_2000)) int32_t CMP_2000;

  __declspec(property(get = get_Pvno))::Org::BouncyCastle::Asn1::DerInteger* Pvno;

  __declspec(property(get = get_Sender))::Org::BouncyCastle::Asn1::X509::GeneralName* Sender;

  __declspec(property(get = get_Recipient))::Org::BouncyCastle::Asn1::X509::GeneralName* Recipient;

  __declspec(property(get = get_MessageTime))::Org::BouncyCastle::Asn1::DerGeneralizedTime* MessageTime;

  __declspec(property(get = get_ProtectionAlg))::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* ProtectionAlg;

  __declspec(property(get = get_SenderKID))::Org::BouncyCastle::Asn1::Asn1OctetString* SenderKID;

  __declspec(property(get = get_RecipKID))::Org::BouncyCastle::Asn1::Asn1OctetString* RecipKID;

  __declspec(property(get = get_TransactionID))::Org::BouncyCastle::Asn1::Asn1OctetString* TransactionID;

  __declspec(property(get = get_SenderNonce))::Org::BouncyCastle::Asn1::Asn1OctetString* SenderNonce;

  __declspec(property(get = get_RecipNonce))::Org::BouncyCastle::Asn1::Asn1OctetString* RecipNonce;

  __declspec(property(get = get_FreeText))::Org::BouncyCastle::Asn1::Cmp::PkiFreeText* FreeText;

  constexpr ::Org::BouncyCastle::Asn1::DerInteger*& __get_pvno();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerInteger*> const& __get_pvno() const;

  constexpr void __set_pvno(::Org::BouncyCastle::Asn1::DerInteger* value);

  constexpr ::Org::BouncyCastle::Asn1::X509::GeneralName*& __get_sender();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::GeneralName*> const& __get_sender() const;

  constexpr void __set_sender(::Org::BouncyCastle::Asn1::X509::GeneralName* value);

  constexpr ::Org::BouncyCastle::Asn1::X509::GeneralName*& __get_recipient();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::GeneralName*> const& __get_recipient() const;

  constexpr void __set_recipient(::Org::BouncyCastle::Asn1::X509::GeneralName* value);

  constexpr ::Org::BouncyCastle::Asn1::DerGeneralizedTime*& __get_messageTime();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerGeneralizedTime*> const& __get_messageTime() const;

  constexpr void __set_messageTime(::Org::BouncyCastle::Asn1::DerGeneralizedTime* value);

  constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*& __get_protectionAlg();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*> const& __get_protectionAlg() const;

  constexpr void __set_protectionAlg(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* value);

  constexpr ::Org::BouncyCastle::Asn1::Asn1OctetString*& __get_senderKID();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1OctetString*> const& __get_senderKID() const;

  constexpr void __set_senderKID(::Org::BouncyCastle::Asn1::Asn1OctetString* value);

  constexpr ::Org::BouncyCastle::Asn1::Asn1OctetString*& __get_recipKID();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1OctetString*> const& __get_recipKID() const;

  constexpr void __set_recipKID(::Org::BouncyCastle::Asn1::Asn1OctetString* value);

  constexpr ::Org::BouncyCastle::Asn1::Asn1OctetString*& __get_transactionID();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1OctetString*> const& __get_transactionID() const;

  constexpr void __set_transactionID(::Org::BouncyCastle::Asn1::Asn1OctetString* value);

  constexpr ::Org::BouncyCastle::Asn1::Asn1OctetString*& __get_senderNonce();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1OctetString*> const& __get_senderNonce() const;

  constexpr void __set_senderNonce(::Org::BouncyCastle::Asn1::Asn1OctetString* value);

  constexpr ::Org::BouncyCastle::Asn1::Asn1OctetString*& __get_recipNonce();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1OctetString*> const& __get_recipNonce() const;

  constexpr void __set_recipNonce(::Org::BouncyCastle::Asn1::Asn1OctetString* value);

  constexpr ::Org::BouncyCastle::Asn1::Cmp::PkiFreeText*& __get_freeText();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Cmp::PkiFreeText*> const& __get_freeText() const;

  constexpr void __set_freeText(::Org::BouncyCastle::Asn1::Cmp::PkiFreeText* value);

  constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence*& __get_generalInfo();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1Sequence*> const& __get_generalInfo() const;

  constexpr void __set_generalInfo(::Org::BouncyCastle::Asn1::Asn1Sequence* value);

  static inline void setStaticF_NULL_NAME(::Org::BouncyCastle::Asn1::X509::GeneralName* value);

  static inline ::Org::BouncyCastle::Asn1::X509::GeneralName* getStaticF_NULL_NAME();

  static inline void setStaticF_CMP_1999(int32_t value);

  static inline int32_t getStaticF_CMP_1999();

  static inline void setStaticF_CMP_2000(int32_t value);

  static inline int32_t getStaticF_CMP_2000();

  static inline ::Org::BouncyCastle::Asn1::Cmp::PkiHeader* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method .ctor addr 0xe6b8bc size 0x2bc virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method GetInstance addr 0xe6bb78 size 0x188 virtual false final false
  static inline ::Org::BouncyCastle::Asn1::Cmp::PkiHeader* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::Cmp::PkiHeader* New_ctor(int32_t pvno, ::Org::BouncyCastle::Asn1::X509::GeneralName* sender, ::Org::BouncyCastle::Asn1::X509::GeneralName* recipient);

  /// @brief Method .ctor addr 0xe6bd00 size 0x90 virtual false final false
  inline void _ctor(int32_t pvno, ::Org::BouncyCastle::Asn1::X509::GeneralName* sender, ::Org::BouncyCastle::Asn1::X509::GeneralName* recipient);

  static inline ::Org::BouncyCastle::Asn1::Cmp::PkiHeader* New_ctor(::Org::BouncyCastle::Asn1::DerInteger* pvno, ::Org::BouncyCastle::Asn1::X509::GeneralName* sender,
                                                                    ::Org::BouncyCastle::Asn1::X509::GeneralName* recipient);

  /// @brief Method .ctor addr 0xe6bd90 size 0x3c virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::DerInteger* pvno, ::Org::BouncyCastle::Asn1::X509::GeneralName* sender, ::Org::BouncyCastle::Asn1::X509::GeneralName* recipient);

  /// @brief Method get_Pvno addr 0xe6bdcc size 0x8 virtual true final false
  inline ::Org::BouncyCastle::Asn1::DerInteger* get_Pvno();

  /// @brief Method get_Sender addr 0xe6bdd4 size 0x8 virtual true final false
  inline ::Org::BouncyCastle::Asn1::X509::GeneralName* get_Sender();

  /// @brief Method get_Recipient addr 0xe6bddc size 0x8 virtual true final false
  inline ::Org::BouncyCastle::Asn1::X509::GeneralName* get_Recipient();

  /// @brief Method get_MessageTime addr 0xe6bde4 size 0x8 virtual true final false
  inline ::Org::BouncyCastle::Asn1::DerGeneralizedTime* get_MessageTime();

  /// @brief Method get_ProtectionAlg addr 0xe6bdec size 0x8 virtual true final false
  inline ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* get_ProtectionAlg();

  /// @brief Method get_SenderKID addr 0xe6bdf4 size 0x8 virtual true final false
  inline ::Org::BouncyCastle::Asn1::Asn1OctetString* get_SenderKID();

  /// @brief Method get_RecipKID addr 0xe6bdfc size 0x8 virtual true final false
  inline ::Org::BouncyCastle::Asn1::Asn1OctetString* get_RecipKID();

  /// @brief Method get_TransactionID addr 0xe6be04 size 0x8 virtual true final false
  inline ::Org::BouncyCastle::Asn1::Asn1OctetString* get_TransactionID();

  /// @brief Method get_SenderNonce addr 0xe6be0c size 0x8 virtual true final false
  inline ::Org::BouncyCastle::Asn1::Asn1OctetString* get_SenderNonce();

  /// @brief Method get_RecipNonce addr 0xe6be14 size 0x8 virtual true final false
  inline ::Org::BouncyCastle::Asn1::Asn1OctetString* get_RecipNonce();

  /// @brief Method get_FreeText addr 0xe6be1c size 0x8 virtual true final false
  inline ::Org::BouncyCastle::Asn1::Cmp::PkiFreeText* get_FreeText();

  /// @brief Method GetGeneralInfo addr 0xe6be24 size 0x100 virtual true final false
  inline ::ArrayW<::Org::BouncyCastle::Asn1::Cmp::InfoTypeAndValue*, ::Array<::Org::BouncyCastle::Asn1::Cmp::InfoTypeAndValue*>*> GetGeneralInfo();

  /// @brief Method ToAsn1Object addr 0xe6bf24 size 0x22c virtual true final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  // Ctor Parameters [CppParam { name: "", ty: "PkiHeader", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PkiHeader(PkiHeader&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PkiHeader", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PkiHeader(PkiHeader const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PkiHeader();

public:
  /// @brief Field pvno, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerInteger* ___pvno;

  /// @brief Field sender, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::GeneralName* ___sender;

  /// @brief Field recipient, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::GeneralName* ___recipient;

  /// @brief Field messageTime, offset: 0x28, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerGeneralizedTime* ___messageTime;

  /// @brief Field protectionAlg, offset: 0x30, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* ___protectionAlg;

  /// @brief Field senderKID, offset: 0x38, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1OctetString* ___senderKID;

  /// @brief Field recipKID, offset: 0x40, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1OctetString* ___recipKID;

  /// @brief Field transactionID, offset: 0x48, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1OctetString* ___transactionID;

  /// @brief Field senderNonce, offset: 0x50, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1OctetString* ___senderNonce;

  /// @brief Field recipNonce, offset: 0x58, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1OctetString* ___recipNonce;

  /// @brief Field freeText, offset: 0x60, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Cmp::PkiFreeText* ___freeText;

  /// @brief Field generalInfo, offset: 0x68, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1Sequence* ___generalInfo;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Cmp::PkiHeader, 0x70>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::Cmp
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Cmp::PkiHeader);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Cmp::PkiHeader*, "Org.BouncyCastle.Asn1.Cmp", "PkiHeader");
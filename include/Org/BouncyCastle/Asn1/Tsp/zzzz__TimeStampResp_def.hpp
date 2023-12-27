#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
CORDL_MODULE_EXPORT(TimeStampResp)
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1::Cmp {
class PkiStatusInfo;
}
namespace Org::BouncyCastle::Asn1::Cms {
class ContentInfo;
}
namespace System {
class Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Tsp {
class TimeStampResp;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Tsp::TimeStampResp);
// Type: Org.BouncyCastle.Asn1.Tsp::TimeStampResp
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::Tsp {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(317))
// CS Name: ::Org.BouncyCastle.Asn1.Tsp::TimeStampResp*
class CORDL_TYPE TimeStampResp : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  /// @brief Field pkiStatusInfo, offset 0x10, size 0x8
  __declspec(property(get = __get_pkiStatusInfo, put = __set_pkiStatusInfo))::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo* pkiStatusInfo;

  /// @brief Field timeStampToken, offset 0x18, size 0x8
  __declspec(property(get = __get_timeStampToken, put = __set_timeStampToken))::Org::BouncyCastle::Asn1::Cms::ContentInfo* timeStampToken;

  __declspec(property(get = get_Status))::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo* Status;

  __declspec(property(get = get_TimeStampToken))::Org::BouncyCastle::Asn1::Cms::ContentInfo* TimeStampToken;

  constexpr ::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo*& __get_pkiStatusInfo();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo*> const& __get_pkiStatusInfo() const;

  constexpr void __set_pkiStatusInfo(::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo* value);

  constexpr ::Org::BouncyCastle::Asn1::Cms::ContentInfo*& __get_timeStampToken();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Cms::ContentInfo*> const& __get_timeStampToken() const;

  constexpr void __set_timeStampToken(::Org::BouncyCastle::Asn1::Cms::ContentInfo* value);

  /// @brief Method GetInstance addr 0x1079878 size 0xa4 virtual false final false
  static inline ::Org::BouncyCastle::Asn1::Tsp::TimeStampResp* GetInstance(::System::Object* obj);

  static inline ::Org::BouncyCastle::Asn1::Tsp::TimeStampResp* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method .ctor addr 0x107991c size 0x88 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  static inline ::Org::BouncyCastle::Asn1::Tsp::TimeStampResp* New_ctor(::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo* pkiStatusInfo, ::Org::BouncyCastle::Asn1::Cms::ContentInfo* timeStampToken);

  /// @brief Method .ctor addr 0x10799a4 size 0x2c virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo* pkiStatusInfo, ::Org::BouncyCastle::Asn1::Cms::ContentInfo* timeStampToken);

  /// @brief Method get_Status addr 0x10799d0 size 0x8 virtual false final false
  inline ::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo* get_Status();

  /// @brief Method get_TimeStampToken addr 0x10799d8 size 0x8 virtual false final false
  inline ::Org::BouncyCastle::Asn1::Cms::ContentInfo* get_TimeStampToken();

  /// @brief Method ToAsn1Object addr 0x10799e0 size 0x148 virtual true final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  // Ctor Parameters [CppParam { name: "", ty: "TimeStampResp", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TimeStampResp(TimeStampResp&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TimeStampResp", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TimeStampResp(TimeStampResp const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TimeStampResp();

public:
  /// @brief Field pkiStatusInfo, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo* ___pkiStatusInfo;

  /// @brief Field timeStampToken, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Cms::ContentInfo* ___timeStampToken;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Tsp::TimeStampResp, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::Tsp
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Tsp::TimeStampResp);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Tsp::TimeStampResp*, "Org.BouncyCastle.Asn1.Tsp", "TimeStampResp");
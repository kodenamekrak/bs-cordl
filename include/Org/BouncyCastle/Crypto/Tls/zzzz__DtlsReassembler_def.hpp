#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Tls/DtlsReassembler.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DtlsReassembler)
namespace Org::BouncyCastle::Crypto::Tls {
class __DtlsReassembler__Range;
}
namespace System::Collections {
class IList;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class DtlsReassembler;
}
namespace Org::BouncyCastle::Crypto::Tls {
class __DtlsReassembler__Range;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Tls::DtlsReassembler);
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Tls::__DtlsReassembler__Range);
// Type: ::Range
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// CS Name: ::DtlsReassembler::Range*
class CORDL_TYPE __DtlsReassembler__Range : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_End, put = set_End)) int32_t End;

  __declspec(property(get = get_Start, put = set_Start)) int32_t Start;

  /// @brief Field mEnd, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_mEnd, put = __cordl_internal_set_mEnd)) int32_t mEnd;

  /// @brief Field mStart, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_mStart, put = __cordl_internal_set_mStart)) int32_t mStart;

  static inline ::Org::BouncyCastle::Crypto::Tls::__DtlsReassembler__Range* New_ctor(int32_t start, int32_t end);

  constexpr int32_t const& __cordl_internal_get_mEnd() const;

  constexpr int32_t& __cordl_internal_get_mEnd();

  constexpr int32_t const& __cordl_internal_get_mStart() const;

  constexpr int32_t& __cordl_internal_get_mStart();

  constexpr void __cordl_internal_set_mEnd(int32_t value);

  constexpr void __cordl_internal_set_mStart(int32_t value);

  /// @brief Method .ctor, addr 0x23be300, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(int32_t start, int32_t end);

  /// @brief Method get_End, addr 0x23beac4, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_End();

  /// @brief Method get_Start, addr 0x23beab4, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_Start();

  /// @brief Method set_End, addr 0x23beacc, size 0x8, virtual false, abstract: false, final false
  inline void set_End(int32_t value);

  /// @brief Method set_Start, addr 0x23beabc, size 0x8, virtual false, abstract: false, final false
  inline void set_Start(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __DtlsReassembler__Range();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__DtlsReassembler__Range", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __DtlsReassembler__Range(__DtlsReassembler__Range&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__DtlsReassembler__Range", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __DtlsReassembler__Range(__DtlsReassembler__Range const&) = delete;

  /// @brief Field mStart, offset: 0x10, size: 0x4, def value: None
  int32_t ___mStart;

  /// @brief Field mEnd, offset: 0x14, size: 0x4, def value: None
  int32_t ___mEnd;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1227 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Tls::__DtlsReassembler__Range, 0x18>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::__DtlsReassembler__Range, ___mStart) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::__DtlsReassembler__Range, ___mEnd) == 0x14, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crypto::Tls
// Type: Org.BouncyCastle.Crypto.Tls::DtlsReassembler
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Crypto.Tls::DtlsReassembler*
class CORDL_TYPE DtlsReassembler : public ::System::Object {
public:
  // Declarations
  using Range = ::Org::BouncyCastle::Crypto::Tls::__DtlsReassembler__Range;

  __declspec(property(get = get_MsgType)) uint8_t MsgType;

  /// @brief Field mBody, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_mBody, put = __cordl_internal_set_mBody)) ::ArrayW<uint8_t, ::Array<uint8_t>*> mBody;

  /// @brief Field mMissing, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_mMissing, put = __cordl_internal_set_mMissing)) ::System::Collections::IList* mMissing;

  /// @brief Field mMsgType, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_mMsgType, put = __cordl_internal_set_mMsgType)) uint8_t mMsgType;

  /// @brief Method ContributeFragment, addr 0x23be3ec, size 0x57c, virtual false, abstract: false, final false
  inline void ContributeFragment(uint8_t msg_type, int32_t length, ::ArrayW<uint8_t, ::Array<uint8_t>*> buf, int32_t off, int32_t fragment_offset, int32_t fragment_length);

  /// @brief Method GetBodyIfComplete, addr 0x23be334, size 0xb8, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetBodyIfComplete();

  static inline ::Org::BouncyCastle::Crypto::Tls::DtlsReassembler* New_ctor(uint8_t msg_type, int32_t length);

  /// @brief Method Reset, addr 0x23be968, size 0x14c, virtual false, abstract: false, final false
  inline void Reset();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_mBody() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_mBody();

  constexpr ::System::Collections::IList*& __cordl_internal_get_mMissing();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::IList*> const& __cordl_internal_get_mMissing() const;

  constexpr uint8_t const& __cordl_internal_get_mMsgType() const;

  constexpr uint8_t& __cordl_internal_get_mMsgType();

  constexpr void __cordl_internal_set_mBody(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_mMissing(::System::Collections::IList* value);

  constexpr void __cordl_internal_set_mMsgType(uint8_t value);

  /// @brief Method .ctor, addr 0x23be1b8, size 0x148, virtual false, abstract: false, final false
  inline void _ctor(uint8_t msg_type, int32_t length);

  /// @brief Method get_MsgType, addr 0x23be32c, size 0x8, virtual false, abstract: false, final false
  inline uint8_t get_MsgType();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DtlsReassembler();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DtlsReassembler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DtlsReassembler(DtlsReassembler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DtlsReassembler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DtlsReassembler(DtlsReassembler const&) = delete;

  /// @brief Field mMsgType, offset: 0x10, size: 0x1, def value: None
  uint8_t ___mMsgType;

  /// @brief Field mBody, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___mBody;

  /// @brief Field mMissing, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::IList* ___mMissing;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1228 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Tls::DtlsReassembler, 0x28>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::DtlsReassembler, ___mMsgType) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::DtlsReassembler, ___mBody) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::DtlsReassembler, ___mMissing) == 0x20, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::DtlsReassembler);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::DtlsReassembler*, "Org.BouncyCastle.Crypto.Tls", "DtlsReassembler");
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::__DtlsReassembler__Range);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::__DtlsReassembler__Range*, "Org.BouncyCastle.Crypto.Tls", "DtlsReassembler/Range");

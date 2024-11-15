#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/LimitedInputStream.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Utilities/IO/zzzz__BaseInputStream_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LimitedInputStream)
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1 {
class LimitedInputStream;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::LimitedInputStream);
// Type: Org.BouncyCastle.Asn1::LimitedInputStream
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 60, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1 {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Asn1::LimitedInputStream*
class CORDL_TYPE LimitedInputStream : public ::Org::BouncyCastle::Utilities::IO::BaseInputStream {
public:
  // Declarations
  __declspec(property(get = get_Limit)) int32_t Limit;

  /// @brief Field _in, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__in, put = __cordl_internal_set__in)) ::System::IO::Stream* _in;

  /// @brief Field _limit, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get__limit, put = __cordl_internal_set__limit)) int32_t _limit;

  static inline ::Org::BouncyCastle::Asn1::LimitedInputStream* New_ctor(::System::IO::Stream* inStream, int32_t limit);

  /// @brief Method SetParentEofDetect, addr 0x2601cac, size 0x90, virtual true, abstract: false, final false
  inline void SetParentEofDetect(bool on);

  constexpr ::System::IO::Stream*& __cordl_internal_get__in();

  constexpr ::cordl_internals::to_const_pointer<::System::IO::Stream*> const& __cordl_internal_get__in() const;

  constexpr int32_t const& __cordl_internal_get__limit() const;

  constexpr int32_t& __cordl_internal_get__limit();

  constexpr void __cordl_internal_set__in(::System::IO::Stream* value);

  constexpr void __cordl_internal_set__limit(int32_t value);

  /// @brief Method .ctor, addr 0x2601c78, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::Stream* inStream, int32_t limit);

  /// @brief Method get_Limit, addr 0x2601ca4, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_Limit();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LimitedInputStream();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LimitedInputStream", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LimitedInputStream(LimitedInputStream&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LimitedInputStream", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LimitedInputStream(LimitedInputStream const&) = delete;

  /// @brief Field _in, offset: 0x30, size: 0x8, def value: None
  ::System::IO::Stream* ____in;

  /// @brief Field _limit, offset: 0x38, size: 0x4, def value: None
  int32_t ____limit;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 500 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::LimitedInputStream, 0x40>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::LimitedInputStream, ____in) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::LimitedInputStream, ____limit) == 0x38, "Offset mismatch!");

} // namespace Org::BouncyCastle::Asn1
NEED_NO_BOX(::Org::BouncyCastle::Asn1::LimitedInputStream);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::LimitedInputStream*, "Org.BouncyCastle.Asn1", "LimitedInputStream");

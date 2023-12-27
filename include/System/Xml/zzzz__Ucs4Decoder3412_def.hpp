#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/zzzz__Ucs4Decoder_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Ucs4Decoder3412)
// Forward declare root types
namespace System::Xml {
class Ucs4Decoder3412;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Ucs4Decoder3412);
// Type: System.Xml::Ucs4Decoder3412
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 44, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Xml {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11562))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11566))
// CS Name: ::System.Xml::Ucs4Decoder3412*
class CORDL_TYPE Ucs4Decoder3412 : public ::System::Xml::Ucs4Decoder {
public:
  // Declarations
  /// @brief Method GetFullChars addr 0x28a6d20 size 0x214 virtual true final false
  inline int32_t GetFullChars(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t byteIndex, int32_t byteCount, ::ArrayW<char16_t, ::Array<char16_t>*> chars, int32_t charIndex);

  static inline ::System::Xml::Ucs4Decoder3412* New_ctor();

  /// @brief Method .ctor addr 0x28a61f4 size 0x4 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "Ucs4Decoder3412", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Ucs4Decoder3412(Ucs4Decoder3412&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Ucs4Decoder3412", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Ucs4Decoder3412(Ucs4Decoder3412 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Ucs4Decoder3412();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Ucs4Decoder3412, 0x30>, "Size mismatch!");

} // namespace System::Xml
NEED_NO_BOX(::System::Xml::Ucs4Decoder3412);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Ucs4Decoder3412*, "System.Xml", "Ucs4Decoder3412");
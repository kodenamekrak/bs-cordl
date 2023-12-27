#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TextUtilities)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace UnityEngine::TextCore::Text {
class TextUtilities;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::TextCore::Text::TextUtilities);
// Type: UnityEngine.TextCore.Text::TextUtilities
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::TextCore::Text {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13701))
// CS Name: ::UnityEngine.TextCore.Text::TextUtilities*
class CORDL_TYPE TextUtilities : public ::System::Object {
public:
  // Declarations
  /// @brief Method ToUpperFast addr 0x2d43520 size 0x74 virtual false final false
  static inline char16_t ToUpperFast(char16_t c);

  /// @brief Method ToUpperASCIIFast addr 0x2d43594 size 0x74 virtual false final false
  static inline uint32_t ToUpperASCIIFast(uint32_t c);

  /// @brief Method GetHashCodeCaseInSensitive addr 0x2d37a34 size 0x70 virtual false final false
  static inline int32_t GetHashCodeCaseInSensitive(::StringW s);

  /// @brief Method UintToString addr 0x2d3dec0 size 0xd8 virtual false final false
  static inline ::StringW UintToString(::System::Collections::Generic::List_1<uint32_t>* unicodes);

  // Ctor Parameters [CppParam { name: "", ty: "TextUtilities", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TextUtilities(TextUtilities&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TextUtilities", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TextUtilities(TextUtilities const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TextUtilities();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::TextCore::Text::TextUtilities, 0x10>, "Size mismatch!");

} // namespace UnityEngine::TextCore::Text
NEED_NO_BOX(::UnityEngine::TextCore::Text::TextUtilities);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextCore::Text::TextUtilities*, "UnityEngine.TextCore.Text", "TextUtilities");
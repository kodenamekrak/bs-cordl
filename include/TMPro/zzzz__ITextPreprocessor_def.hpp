#pragma once
// IWYU pragma private; include "TMPro/ITextPreprocessor.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ITextPreprocessor)
// Forward declare root types
namespace TMPro {
class ITextPreprocessor;
}
// Write type traits
MARK_REF_PTR_T(::TMPro::ITextPreprocessor);
// Dependencies
namespace TMPro {
// Is value type: false
// CS Name: TMPro.ITextPreprocessor
class CORDL_TYPE ITextPreprocessor {
public:
  // Declarations
  /// @brief Method PreprocessText, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::StringW PreprocessText(::StringW text);

  // Ctor Parameters [CppParam { name: "", ty: "ITextPreprocessor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ITextPreprocessor(ITextPreprocessor const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14421 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace TMPro
NEED_NO_BOX(::TMPro::ITextPreprocessor);
DEFINE_IL2CPP_ARG_TYPE(::TMPro::ITextPreprocessor*, "TMPro", "ITextPreprocessor");

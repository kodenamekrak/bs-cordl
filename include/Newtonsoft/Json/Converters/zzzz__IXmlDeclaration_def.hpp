#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Converters/IXmlDeclaration.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/Converters/zzzz__IXmlNode_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(IXmlDeclaration)
// Forward declare root types
namespace Newtonsoft::Json::Converters {
class IXmlDeclaration;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Converters::IXmlDeclaration);
// Dependencies Newtonsoft.Json.Converters.IXmlNode
namespace Newtonsoft::Json::Converters {
// Is value type: false
// CS Name: Newtonsoft.Json.Converters.IXmlDeclaration
class CORDL_TYPE IXmlDeclaration {
public:
  // Declarations
  __declspec(property(get = get_Encoding, put = set_Encoding)) ::StringW Encoding;

  __declspec(property(get = get_Standalone, put = set_Standalone)) ::StringW Standalone;

  __declspec(property(get = get_Version)) ::StringW Version;

  /// @brief Convert operator to "::Newtonsoft::Json::Converters::IXmlNode"
  constexpr operator ::Newtonsoft::Json::Converters::IXmlNode*() noexcept;

  /// @brief Method get_Encoding, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::StringW get_Encoding();

  /// @brief Method get_Standalone, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::StringW get_Standalone();

  /// @brief Method get_Version, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::StringW get_Version();

  /// @brief Convert to "::Newtonsoft::Json::Converters::IXmlNode"
  constexpr ::Newtonsoft::Json::Converters::IXmlNode* i___Newtonsoft__Json__Converters__IXmlNode() noexcept;

  /// @brief Method set_Encoding, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void set_Encoding(::StringW value);

  /// @brief Method set_Standalone, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void set_Standalone(::StringW value);

  // Ctor Parameters [CppParam { name: "", ty: "IXmlDeclaration", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IXmlDeclaration(IXmlDeclaration const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10490 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Newtonsoft::Json::Converters
NEED_NO_BOX(::Newtonsoft::Json::Converters::IXmlDeclaration);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Converters::IXmlDeclaration*, "Newtonsoft.Json.Converters", "IXmlDeclaration");

#pragma once
// IWYU pragma private; include "System/Xml/IXmlNamespaceResolver.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(IXmlNamespaceResolver)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class IDictionary_2;
}
namespace System::Xml {
struct XmlNamespaceScope;
}
// Forward declare root types
namespace System::Xml {
class IXmlNamespaceResolver;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::IXmlNamespaceResolver);
// Dependencies
namespace System::Xml {
// Is value type: false
// CS Name: System.Xml.IXmlNamespaceResolver
class CORDL_TYPE IXmlNamespaceResolver {
public:
  // Declarations
  /// @brief Method GetNamespacesInScope, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* GetNamespacesInScope(::System::Xml::XmlNamespaceScope scope);

  /// @brief Method LookupNamespace, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::StringW LookupNamespace(::StringW prefix);

  /// @brief Method LookupPrefix, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::StringW LookupPrefix(::StringW namespaceName);

  // Ctor Parameters [CppParam { name: "", ty: "IXmlNamespaceResolver", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IXmlNamespaceResolver(IXmlNamespaceResolver const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7328 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Xml
NEED_NO_BOX(::System::Xml::IXmlNamespaceResolver);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::IXmlNamespaceResolver*, "System.Xml", "IXmlNamespaceResolver");

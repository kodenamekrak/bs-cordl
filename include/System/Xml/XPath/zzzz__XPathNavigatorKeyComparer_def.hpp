#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(XPathNavigatorKeyComparer)
namespace System {
class Object;
}
namespace System::Collections {
class IEqualityComparer;
}
// Forward declare root types
namespace System::Xml::XPath {
class XPathNavigatorKeyComparer;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::XPath::XPathNavigatorKeyComparer);
// Type: System.Xml.XPath::XPathNavigatorKeyComparer
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Xml::XPath {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11583))
// CS Name: ::System.Xml.XPath::XPathNavigatorKeyComparer*
class CORDL_TYPE XPathNavigatorKeyComparer : public ::System::Object {
public:
  // Declarations
  /// @brief Convert operator to "::System::Collections::IEqualityComparer"
  constexpr operator ::System::Collections::IEqualityComparer*() noexcept;

  /// @brief Method System.Collections.IEqualityComparer.Equals addr 0x28abbf4 size 0xdc virtual true final true
  inline bool System_Collections_IEqualityComparer_Equals(::System::Object* obj1, ::System::Object* obj2);

  /// @brief Method System.Collections.IEqualityComparer.GetHashCode addr 0x28abcd0 size 0x1d0 virtual true final true
  inline int32_t System_Collections_IEqualityComparer_GetHashCode(::System::Object* obj);

  static inline ::System::Xml::XPath::XPathNavigatorKeyComparer* New_ctor();

  /// @brief Method .ctor addr 0x28abbec size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "XPathNavigatorKeyComparer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XPathNavigatorKeyComparer(XPathNavigatorKeyComparer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XPathNavigatorKeyComparer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XPathNavigatorKeyComparer(XPathNavigatorKeyComparer const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XPathNavigatorKeyComparer();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::XPath::XPathNavigatorKeyComparer, 0x10>, "Size mismatch!");

} // namespace System::Xml::XPath
NEED_NO_BOX(::System::Xml::XPath::XPathNavigatorKeyComparer);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XPath::XPathNavigatorKeyComparer*, "System.Xml.XPath", "XPathNavigatorKeyComparer");
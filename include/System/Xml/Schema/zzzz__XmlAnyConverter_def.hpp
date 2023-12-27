#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__XmlBaseConverter_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(XmlAnyConverter)
namespace System {
class Object;
}
namespace System {
class Type;
}
namespace System::Xml::Schema {
class XmlValueConverter;
}
namespace System {
struct DateTimeOffset;
}
namespace System::Xml::XPath {
class XPathNavigator;
}
namespace System {
struct Decimal;
}
namespace System::Xml {
class IXmlNamespaceResolver;
}
namespace System::Xml::Schema {
struct XmlTypeCode;
}
namespace System {
struct DateTime;
}
// Forward declare root types
namespace System::Xml::Schema {
class XmlAnyConverter;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::XmlAnyConverter);
// Type: System.Xml.Schema::XmlAnyConverter
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Xml::Schema {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11748))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11756))
// CS Name: ::System.Xml.Schema::XmlAnyConverter*
class CORDL_TYPE XmlAnyConverter : public ::System::Xml::Schema::XmlBaseConverter {
public:
  // Declarations
  /// @brief Field Item, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Item, put = setStaticF_Item))::System::Xml::Schema::XmlValueConverter* Item;

  /// @brief Field AnyAtomic, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_AnyAtomic, put = setStaticF_AnyAtomic))::System::Xml::Schema::XmlValueConverter* AnyAtomic;

  static inline void setStaticF_Item(::System::Xml::Schema::XmlValueConverter* value);

  static inline ::System::Xml::Schema::XmlValueConverter* getStaticF_Item();

  static inline void setStaticF_AnyAtomic(::System::Xml::Schema::XmlValueConverter* value);

  static inline ::System::Xml::Schema::XmlValueConverter* getStaticF_AnyAtomic();

  static inline ::System::Xml::Schema::XmlAnyConverter* New_ctor(::System::Xml::Schema::XmlTypeCode typeCode);

  /// @brief Method .ctor addr 0x28e1df4 size 0x68 virtual false final false
  inline void _ctor(::System::Xml::Schema::XmlTypeCode typeCode);

  /// @brief Method ToBoolean addr 0x28e1e5c size 0x1b4 virtual true final false
  inline bool ToBoolean(::System::Object* value);

  /// @brief Method ToDateTime addr 0x28e214c size 0x1b4 virtual true final false
  inline ::System::DateTime ToDateTime(::System::Object* value);

  /// @brief Method ToDateTimeOffset addr 0x28e2300 size 0x1c4 virtual true final false
  inline ::System::DateTimeOffset ToDateTimeOffset(::System::Object* value);

  /// @brief Method ToDecimal addr 0x28e24c4 size 0x1c4 virtual true final false
  inline ::System::Decimal ToDecimal(::System::Object* value);

  /// @brief Method ToDouble addr 0x28e2688 size 0x1b4 virtual true final false
  inline double_t ToDouble(::System::Object* value);

  /// @brief Method ToInt32 addr 0x28e283c size 0x1b4 virtual true final false
  inline int32_t ToInt32(::System::Object* value);

  /// @brief Method ToInt64 addr 0x28e29f0 size 0x1b4 virtual true final false
  inline int64_t ToInt64(::System::Object* value);

  /// @brief Method ToSingle addr 0x28e2ba4 size 0x1c0 virtual true final false
  inline float_t ToSingle(::System::Object* value);

  /// @brief Method ChangeType addr 0x28e2d64 size 0x1fc virtual true final false
  inline ::System::Object* ChangeType(bool value, ::System::Type* destinationType);

  /// @brief Method ChangeType addr 0x28e30c4 size 0x1f8 virtual true final false
  inline ::System::Object* ChangeType(::System::DateTime value, ::System::Type* destinationType);

  /// @brief Method ChangeType addr 0x28e32bc size 0x240 virtual true final false
  inline ::System::Object* ChangeType(::System::Decimal value, ::System::Type* destinationType);

  /// @brief Method ChangeType addr 0x28e34fc size 0x1f8 virtual true final false
  inline ::System::Object* ChangeType(double_t value, ::System::Type* destinationType);

  /// @brief Method ChangeType addr 0x28e36f4 size 0x1f8 virtual true final false
  inline ::System::Object* ChangeType(int32_t value, ::System::Type* destinationType);

  /// @brief Method ChangeType addr 0x28e38ec size 0x1f8 virtual true final false
  inline ::System::Object* ChangeType(int64_t value, ::System::Type* destinationType);

  /// @brief Method ChangeType addr 0x28e3ae4 size 0x208 virtual true final false
  inline ::System::Object* ChangeType(::StringW value, ::System::Type* destinationType, ::System::Xml::IXmlNamespaceResolver* nsResolver);

  /// @brief Method ChangeType addr 0x28e3cec size 0x14f4 virtual true final false
  inline ::System::Object* ChangeType(::System::Object* value, ::System::Type* destinationType, ::System::Xml::IXmlNamespaceResolver* nsResolver);

  /// @brief Method ChangeTypeWildcardDestination addr 0x28e2010 size 0x13c virtual false final false
  inline ::System::Object* ChangeTypeWildcardDestination(::System::Object* value, ::System::Type* destinationType, ::System::Xml::IXmlNamespaceResolver* nsResolver);

  /// @brief Method ChangeTypeWildcardSource addr 0x28e2f60 size 0x164 virtual false final false
  inline ::System::Object* ChangeTypeWildcardSource(::System::Object* value, ::System::Type* destinationType, ::System::Xml::IXmlNamespaceResolver* nsResolver);

  /// @brief Method ToNavigator addr 0x28e51e0 size 0x88 virtual false final false
  inline ::System::Xml::XPath::XPathNavigator* ToNavigator(::System::Xml::XPath::XPathNavigator* nav);

  // Ctor Parameters [CppParam { name: "", ty: "XmlAnyConverter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlAnyConverter(XmlAnyConverter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlAnyConverter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlAnyConverter(XmlAnyConverter const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlAnyConverter();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::XmlAnyConverter, 0x28>, "Size mismatch!");

} // namespace System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::XmlAnyConverter);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XmlAnyConverter*, "System.Xml.Schema", "XmlAnyConverter");
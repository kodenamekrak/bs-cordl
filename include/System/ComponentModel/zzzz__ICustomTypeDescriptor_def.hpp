#pragma once
// IWYU pragma private; include "System/ComponentModel/ICustomTypeDescriptor.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ICustomTypeDescriptor)
namespace System::ComponentModel {
class AttributeCollection;
}
namespace System::ComponentModel {
class EventDescriptorCollection;
}
namespace System::ComponentModel {
class EventDescriptor;
}
namespace System::ComponentModel {
class PropertyDescriptorCollection;
}
namespace System::ComponentModel {
class PropertyDescriptor;
}
namespace System::ComponentModel {
class TypeConverter;
}
namespace System {
class Attribute;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::ComponentModel {
class ICustomTypeDescriptor;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::ICustomTypeDescriptor);
// Dependencies
namespace System::ComponentModel {
// Is value type: false
// CS Name: System.ComponentModel.ICustomTypeDescriptor
class CORDL_TYPE ICustomTypeDescriptor {
public:
  // Declarations
  /// @brief Method GetAttributes, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::ComponentModel::AttributeCollection* GetAttributes();

  /// @brief Method GetClassName, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::StringW GetClassName();

  /// @brief Method GetComponentName, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::StringW GetComponentName();

  /// @brief Method GetConverter, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::ComponentModel::TypeConverter* GetConverter();

  /// @brief Method GetDefaultEvent, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::ComponentModel::EventDescriptor* GetDefaultEvent();

  /// @brief Method GetDefaultProperty, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::ComponentModel::PropertyDescriptor* GetDefaultProperty();

  /// @brief Method GetEditor, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Object* GetEditor(::System::Type* editorBaseType);

  /// @brief Method GetEvents, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::ComponentModel::EventDescriptorCollection* GetEvents();

  /// @brief Method GetEvents, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::ComponentModel::EventDescriptorCollection* GetEvents(::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> attributes);

  /// @brief Method GetProperties, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::ComponentModel::PropertyDescriptorCollection* GetProperties();

  /// @brief Method GetProperties, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::ComponentModel::PropertyDescriptorCollection* GetProperties(::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> attributes);

  /// @brief Method GetPropertyOwner, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Object* GetPropertyOwner(::System::ComponentModel::PropertyDescriptor* pd);

  // Ctor Parameters [CppParam { name: "", ty: "ICustomTypeDescriptor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ICustomTypeDescriptor(ICustomTypeDescriptor const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9393 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::ComponentModel
NEED_NO_BOX(::System::ComponentModel::ICustomTypeDescriptor);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::ICustomTypeDescriptor*, "System.ComponentModel", "ICustomTypeDescriptor");

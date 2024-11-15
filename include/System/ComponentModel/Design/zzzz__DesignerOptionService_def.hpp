#pragma once
// IWYU pragma private; include "System/ComponentModel/Design/DesignerOptionService.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/ComponentModel/zzzz__PropertyDescriptor_def.hpp"
#include "System/ComponentModel/zzzz__TypeConverter_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DesignerOptionService)
namespace GlobalNamespace {
class __DesignerOptionService__DesignerOptionCollection__WrappedPropertyDescriptor;
}
namespace GlobalNamespace {
class __DesignerOptionService__DesignerOptionConverter__OptionPropertyDescriptor;
}
namespace System::Collections {
class ArrayList;
}
namespace System::Collections {
class ICollection;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::ComponentModel::Design {
class __DesignerOptionService__DesignerOptionCollection;
}
namespace System::ComponentModel::Design {
class __DesignerOptionService__DesignerOptionConverter;
}
namespace System::ComponentModel {
class AttributeCollection;
}
namespace System::ComponentModel {
class ITypeDescriptorContext;
}
namespace System::ComponentModel {
class PropertyDescriptorCollection;
}
namespace System::ComponentModel {
class PropertyDescriptor;
}
namespace System::Globalization {
class CultureInfo;
}
namespace System {
class Array;
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
namespace GlobalNamespace {
class __DesignerOptionService__DesignerOptionCollection__WrappedPropertyDescriptor;
}
namespace GlobalNamespace {
class __DesignerOptionService__DesignerOptionConverter__OptionPropertyDescriptor;
}
namespace System::ComponentModel::Design {
class DesignerOptionService;
}
namespace System::ComponentModel::Design {
class __DesignerOptionService__DesignerOptionCollection;
}
namespace System::ComponentModel::Design {
class __DesignerOptionService__DesignerOptionConverter;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::__DesignerOptionService__DesignerOptionCollection__WrappedPropertyDescriptor);
MARK_REF_PTR_T(::GlobalNamespace::__DesignerOptionService__DesignerOptionConverter__OptionPropertyDescriptor);
MARK_REF_PTR_T(::System::ComponentModel::Design::DesignerOptionService);
MARK_REF_PTR_T(::System::ComponentModel::Design::__DesignerOptionService__DesignerOptionCollection);
MARK_REF_PTR_T(::System::ComponentModel::Design::__DesignerOptionService__DesignerOptionConverter);
// Type: ::WrappedPropertyDescriptor
// SizeInfo { instance_size: 152, native_size: -1, calculated_instance_size: 152, calculated_native_size: 152, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::DesignerOptionService::DesignerOptionCollection::WrappedPropertyDescriptor*
class CORDL_TYPE __DesignerOptionService__DesignerOptionCollection__WrappedPropertyDescriptor : public ::System::ComponentModel::PropertyDescriptor {
public:
  // Declarations
  __declspec(property(get = get_Attributes)) ::System::ComponentModel::AttributeCollection* Attributes;

  __declspec(property(get = get_ComponentType)) ::System::Type* ComponentType;

  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_PropertyType)) ::System::Type* PropertyType;

  /// @brief Field property, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_property, put = __cordl_internal_set_property)) ::System::ComponentModel::PropertyDescriptor* property;

  /// @brief Field target, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_target, put = __cordl_internal_set_target)) ::System::Object* target;

  /// @brief Method CanResetValue, addr 0x441c2b0, size 0x2c, virtual true, abstract: false, final false
  inline bool CanResetValue(::System::Object* component);

  /// @brief Method GetValue, addr 0x441c2dc, size 0x2c, virtual true, abstract: false, final false
  inline ::System::Object* GetValue(::System::Object* component);

  static inline ::GlobalNamespace::__DesignerOptionService__DesignerOptionCollection__WrappedPropertyDescriptor* New_ctor(::System::ComponentModel::PropertyDescriptor* property,
                                                                                                                          ::System::Object* target);

  /// @brief Method ResetValue, addr 0x441c308, size 0x2c, virtual true, abstract: false, final false
  inline void ResetValue(::System::Object* component);

  /// @brief Method SetValue, addr 0x441c334, size 0x2c, virtual true, abstract: false, final false
  inline void SetValue(::System::Object* component, ::System::Object* value);

  /// @brief Method ShouldSerializeValue, addr 0x441c360, size 0x2c, virtual true, abstract: false, final false
  inline bool ShouldSerializeValue(::System::Object* component);

  constexpr ::System::ComponentModel::PropertyDescriptor*& __cordl_internal_get_property();

  constexpr ::cordl_internals::to_const_pointer<::System::ComponentModel::PropertyDescriptor*> const& __cordl_internal_get_property() const;

  constexpr ::System::Object*& __cordl_internal_get_target();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get_target() const;

  constexpr void __cordl_internal_set_property(::System::ComponentModel::PropertyDescriptor* value);

  constexpr void __cordl_internal_set_target(::System::Object* value);

  /// @brief Method .ctor, addr 0x441c158, size 0x50, virtual false, abstract: false, final false
  inline void _ctor(::System::ComponentModel::PropertyDescriptor* property, ::System::Object* target);

  /// @brief Method get_Attributes, addr 0x441c224, size 0x20, virtual true, abstract: false, final false
  inline ::System::ComponentModel::AttributeCollection* get_Attributes();

  /// @brief Method get_ComponentType, addr 0x441c244, size 0x24, virtual true, abstract: false, final false
  inline ::System::Type* get_ComponentType();

  /// @brief Method get_IsReadOnly, addr 0x441c268, size 0x24, virtual true, abstract: false, final false
  inline bool get_IsReadOnly();

  /// @brief Method get_PropertyType, addr 0x441c28c, size 0x24, virtual true, abstract: false, final false
  inline ::System::Type* get_PropertyType();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __DesignerOptionService__DesignerOptionCollection__WrappedPropertyDescriptor();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__DesignerOptionService__DesignerOptionCollection__WrappedPropertyDescriptor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __DesignerOptionService__DesignerOptionCollection__WrappedPropertyDescriptor(__DesignerOptionService__DesignerOptionCollection__WrappedPropertyDescriptor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__DesignerOptionService__DesignerOptionCollection__WrappedPropertyDescriptor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __DesignerOptionService__DesignerOptionCollection__WrappedPropertyDescriptor(__DesignerOptionService__DesignerOptionCollection__WrappedPropertyDescriptor const&) = delete;

  /// @brief Field target, offset: 0x88, size: 0x8, def value: None
  ::System::Object* ___target;

  /// @brief Field property, offset: 0x90, size: 0x8, def value: None
  ::System::ComponentModel::PropertyDescriptor* ___property;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9447 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__DesignerOptionService__DesignerOptionCollection__WrappedPropertyDescriptor, 0x98>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__DesignerOptionService__DesignerOptionCollection__WrappedPropertyDescriptor, ___target) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__DesignerOptionService__DesignerOptionCollection__WrappedPropertyDescriptor, ___property) == 0x90, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::DesignerOptionCollection
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::ComponentModel::Design {
// Is value type: false
// CS Name: ::DesignerOptionService::DesignerOptionCollection*
class CORDL_TYPE __DesignerOptionService__DesignerOptionCollection : public ::System::Object {
public:
  // Declarations
  using WrappedPropertyDescriptor = ::GlobalNamespace::__DesignerOptionService__DesignerOptionCollection__WrappedPropertyDescriptor;

  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = get_Name)) ::StringW Name;

  __declspec(property(get = get_Properties)) ::System::ComponentModel::PropertyDescriptorCollection* Properties;

  __declspec(property(get = System_Collections_ICollection_get_IsSynchronized)) bool System_Collections_ICollection_IsSynchronized;

  __declspec(property(get = System_Collections_ICollection_get_SyncRoot)) ::System::Object* System_Collections_ICollection_SyncRoot;

  /// @brief Field _children, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__children, put = __cordl_internal_set__children)) ::System::Collections::ArrayList* _children;

  /// @brief Field _name, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__name, put = __cordl_internal_set__name)) ::StringW _name;

  /// @brief Field _properties, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__properties, put = __cordl_internal_set__properties)) ::System::ComponentModel::PropertyDescriptorCollection* _properties;

  /// @brief Field _service, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__service, put = __cordl_internal_set__service)) ::System::ComponentModel::Design::DesignerOptionService* _service;

  /// @brief Field _value, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__value, put = __cordl_internal_set__value)) ::System::Object* _value;

  /// @brief Convert operator to "::System::Collections::ICollection"
  constexpr operator ::System::Collections::ICollection*() noexcept;

  /// @brief Method CopyTo, addr 0x441c1a8, size 0x44, virtual true, abstract: false, final true
  inline void CopyTo(::System::Array* array, int32_t index);

  /// @brief Method EnsurePopulated, addr 0x441b974, size 0x88, virtual false, abstract: false, final false
  inline void EnsurePopulated();

  /// @brief Method GetEnumerator, addr 0x441c1ec, size 0x2c, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* GetEnumerator();

  /// @brief Method System.Collections.ICollection.get_IsSynchronized, addr 0x441c218, size 0x8, virtual true, abstract: false, final true
  inline bool System_Collections_ICollection_get_IsSynchronized();

  /// @brief Method System.Collections.ICollection.get_SyncRoot, addr 0x441c220, size 0x4, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_ICollection_get_SyncRoot();

  constexpr ::System::Collections::ArrayList*& __cordl_internal_get__children();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::ArrayList*> const& __cordl_internal_get__children() const;

  constexpr ::StringW const& __cordl_internal_get__name() const;

  constexpr ::StringW& __cordl_internal_get__name();

  constexpr ::System::ComponentModel::PropertyDescriptorCollection*& __cordl_internal_get__properties();

  constexpr ::cordl_internals::to_const_pointer<::System::ComponentModel::PropertyDescriptorCollection*> const& __cordl_internal_get__properties() const;

  constexpr ::System::ComponentModel::Design::DesignerOptionService*& __cordl_internal_get__service();

  constexpr ::cordl_internals::to_const_pointer<::System::ComponentModel::Design::DesignerOptionService*> const& __cordl_internal_get__service() const;

  constexpr ::System::Object*& __cordl_internal_get__value();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get__value() const;

  constexpr void __cordl_internal_set__children(::System::Collections::ArrayList* value);

  constexpr void __cordl_internal_set__name(::StringW value);

  constexpr void __cordl_internal_set__properties(::System::ComponentModel::PropertyDescriptorCollection* value);

  constexpr void __cordl_internal_set__service(::System::ComponentModel::Design::DesignerOptionService* value);

  constexpr void __cordl_internal_set__value(::System::Object* value);

  /// @brief Method get_Count, addr 0x441b948, size 0x2c, virtual true, abstract: false, final true
  inline int32_t get_Count();

  /// @brief Method get_Name, addr 0x441b9fc, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Name();

  /// @brief Method get_Properties, addr 0x441ba04, size 0x754, virtual false, abstract: false, final false
  inline ::System::ComponentModel::PropertyDescriptorCollection* get_Properties();

  /// @brief Convert to "::System::Collections::ICollection"
  constexpr ::System::Collections::ICollection* i___System__Collections__ICollection() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __DesignerOptionService__DesignerOptionCollection();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__DesignerOptionService__DesignerOptionCollection", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __DesignerOptionService__DesignerOptionCollection(__DesignerOptionService__DesignerOptionCollection&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__DesignerOptionService__DesignerOptionCollection", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __DesignerOptionService__DesignerOptionCollection(__DesignerOptionService__DesignerOptionCollection const&) = delete;

  /// @brief Field _service, offset: 0x10, size: 0x8, def value: None
  ::System::ComponentModel::Design::DesignerOptionService* ____service;

  /// @brief Field _name, offset: 0x18, size: 0x8, def value: None
  ::StringW ____name;

  /// @brief Field _value, offset: 0x20, size: 0x8, def value: None
  ::System::Object* ____value;

  /// @brief Field _children, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::ArrayList* ____children;

  /// @brief Field _properties, offset: 0x30, size: 0x8, def value: None
  ::System::ComponentModel::PropertyDescriptorCollection* ____properties;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9448 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::Design::__DesignerOptionService__DesignerOptionCollection, 0x38>, "Size mismatch!");

static_assert(offsetof(::System::ComponentModel::Design::__DesignerOptionService__DesignerOptionCollection, ____service) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::Design::__DesignerOptionService__DesignerOptionCollection, ____name) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::Design::__DesignerOptionService__DesignerOptionCollection, ____value) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::Design::__DesignerOptionService__DesignerOptionCollection, ____children) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::ComponentModel::Design::__DesignerOptionService__DesignerOptionCollection, ____properties) == 0x30, "Offset mismatch!");

} // namespace System::ComponentModel::Design
// Type: ::OptionPropertyDescriptor
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 144, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::DesignerOptionService::DesignerOptionConverter::OptionPropertyDescriptor*
class CORDL_TYPE __DesignerOptionService__DesignerOptionConverter__OptionPropertyDescriptor : public ::System::ComponentModel::PropertyDescriptor {
public:
  // Declarations
  __declspec(property(get = get_ComponentType)) ::System::Type* ComponentType;

  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_PropertyType)) ::System::Type* PropertyType;

  /// @brief Field _option, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__option, put = __cordl_internal_set__option)) ::System::ComponentModel::Design::__DesignerOptionService__DesignerOptionCollection* _option;

  /// @brief Method CanResetValue, addr 0x441cae0, size 0x8, virtual true, abstract: false, final false
  inline bool CanResetValue(::System::Object* component);

  /// @brief Method GetValue, addr 0x441cae8, size 0x8, virtual true, abstract: false, final false
  inline ::System::Object* GetValue(::System::Object* component);

  static inline ::GlobalNamespace::__DesignerOptionService__DesignerOptionConverter__OptionPropertyDescriptor*
  New_ctor(::System::ComponentModel::Design::__DesignerOptionService__DesignerOptionCollection* option);

  /// @brief Method ResetValue, addr 0x441caf0, size 0x4, virtual true, abstract: false, final false
  inline void ResetValue(::System::Object* component);

  /// @brief Method SetValue, addr 0x441caf4, size 0x4, virtual true, abstract: false, final false
  inline void SetValue(::System::Object* component, ::System::Object* value);

  /// @brief Method ShouldSerializeValue, addr 0x441caf8, size 0x8, virtual true, abstract: false, final false
  inline bool ShouldSerializeValue(::System::Object* component);

  constexpr ::System::ComponentModel::Design::__DesignerOptionService__DesignerOptionCollection*& __cordl_internal_get__option();

  constexpr ::cordl_internals::to_const_pointer<::System::ComponentModel::Design::__DesignerOptionService__DesignerOptionCollection*> const& __cordl_internal_get__option() const;

  constexpr void __cordl_internal_set__option(::System::ComponentModel::Design::__DesignerOptionService__DesignerOptionCollection* value);

  /// @brief Method .ctor, addr 0x441c97c, size 0x38, virtual false, abstract: false, final false
  inline void _ctor(::System::ComponentModel::Design::__DesignerOptionService__DesignerOptionCollection* option);

  /// @brief Method get_ComponentType, addr 0x441caa0, size 0x1c, virtual true, abstract: false, final false
  inline ::System::Type* get_ComponentType();

  /// @brief Method get_IsReadOnly, addr 0x441cabc, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsReadOnly();

  /// @brief Method get_PropertyType, addr 0x441cac4, size 0x1c, virtual true, abstract: false, final false
  inline ::System::Type* get_PropertyType();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __DesignerOptionService__DesignerOptionConverter__OptionPropertyDescriptor();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__DesignerOptionService__DesignerOptionConverter__OptionPropertyDescriptor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __DesignerOptionService__DesignerOptionConverter__OptionPropertyDescriptor(__DesignerOptionService__DesignerOptionConverter__OptionPropertyDescriptor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__DesignerOptionService__DesignerOptionConverter__OptionPropertyDescriptor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __DesignerOptionService__DesignerOptionConverter__OptionPropertyDescriptor(__DesignerOptionService__DesignerOptionConverter__OptionPropertyDescriptor const&) = delete;

  /// @brief Field _option, offset: 0x88, size: 0x8, def value: None
  ::System::ComponentModel::Design::__DesignerOptionService__DesignerOptionCollection* ____option;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9449 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__DesignerOptionService__DesignerOptionConverter__OptionPropertyDescriptor, 0x90>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__DesignerOptionService__DesignerOptionConverter__OptionPropertyDescriptor, ____option) == 0x88, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::DesignerOptionConverter
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::ComponentModel::Design {
// Is value type: false
// CS Name: ::DesignerOptionService::DesignerOptionConverter*
class CORDL_TYPE __DesignerOptionService__DesignerOptionConverter : public ::System::ComponentModel::TypeConverter {
public:
  // Declarations
  using OptionPropertyDescriptor = ::GlobalNamespace::__DesignerOptionService__DesignerOptionConverter__OptionPropertyDescriptor;

  /// @brief Method ConvertTo, addr 0x441c9b4, size 0xe4, virtual true, abstract: false, final false
  inline ::System::Object* ConvertTo(::System::ComponentModel::ITypeDescriptorContext* cxt, ::System::Globalization::CultureInfo* culture, ::System::Object* value, ::System::Type* destinationType);

  /// @brief Method GetProperties, addr 0x441c394, size 0x5e8, virtual true, abstract: false, final false
  inline ::System::ComponentModel::PropertyDescriptorCollection* GetProperties(::System::ComponentModel::ITypeDescriptorContext* cxt, ::System::Object* value,
                                                                               ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> attributes);

  /// @brief Method GetPropertiesSupported, addr 0x441c38c, size 0x8, virtual true, abstract: false, final false
  inline bool GetPropertiesSupported(::System::ComponentModel::ITypeDescriptorContext* cxt);

  static inline ::System::ComponentModel::Design::__DesignerOptionService__DesignerOptionConverter* New_ctor();

  /// @brief Method .ctor, addr 0x441ca98, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __DesignerOptionService__DesignerOptionConverter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__DesignerOptionService__DesignerOptionConverter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __DesignerOptionService__DesignerOptionConverter(__DesignerOptionService__DesignerOptionConverter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__DesignerOptionService__DesignerOptionConverter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __DesignerOptionService__DesignerOptionConverter(__DesignerOptionService__DesignerOptionConverter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9450 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::Design::__DesignerOptionService__DesignerOptionConverter, 0x10>, "Size mismatch!");

} // namespace System::ComponentModel::Design
// Type: System.ComponentModel.Design::DesignerOptionService
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::ComponentModel::Design {
// Is value type: false
// CS Name: ::System.ComponentModel.Design::DesignerOptionService*
class CORDL_TYPE DesignerOptionService : public ::System::Object {
public:
  // Declarations
  using DesignerOptionCollection = ::System::ComponentModel::Design::__DesignerOptionService__DesignerOptionCollection;

  using DesignerOptionConverter = ::System::ComponentModel::Design::__DesignerOptionService__DesignerOptionConverter;

  /// @brief Method PopulateOptionCollection, addr 0x441b944, size 0x4, virtual true, abstract: false, final false
  inline void PopulateOptionCollection(::System::ComponentModel::Design::__DesignerOptionService__DesignerOptionCollection* options);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DesignerOptionService();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DesignerOptionService", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DesignerOptionService(DesignerOptionService&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DesignerOptionService", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DesignerOptionService(DesignerOptionService const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9451 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::Design::DesignerOptionService, 0x10>, "Size mismatch!");

} // namespace System::ComponentModel::Design
NEED_NO_BOX(::GlobalNamespace::__DesignerOptionService__DesignerOptionCollection__WrappedPropertyDescriptor);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__DesignerOptionService__DesignerOptionCollection__WrappedPropertyDescriptor*, "System.ComponentModel.Design",
                       "DesignerOptionService/DesignerOptionCollection/WrappedPropertyDescriptor");
NEED_NO_BOX(::GlobalNamespace::__DesignerOptionService__DesignerOptionConverter__OptionPropertyDescriptor);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__DesignerOptionService__DesignerOptionConverter__OptionPropertyDescriptor*, "System.ComponentModel.Design",
                       "DesignerOptionService/DesignerOptionConverter/OptionPropertyDescriptor");
NEED_NO_BOX(::System::ComponentModel::Design::DesignerOptionService);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::Design::DesignerOptionService*, "System.ComponentModel.Design", "DesignerOptionService");
NEED_NO_BOX(::System::ComponentModel::Design::__DesignerOptionService__DesignerOptionCollection);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::Design::__DesignerOptionService__DesignerOptionCollection*, "System.ComponentModel.Design", "DesignerOptionService/DesignerOptionCollection");
NEED_NO_BOX(::System::ComponentModel::Design::__DesignerOptionService__DesignerOptionConverter);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::Design::__DesignerOptionService__DesignerOptionConverter*, "System.ComponentModel.Design", "DesignerOptionService/DesignerOptionConverter");

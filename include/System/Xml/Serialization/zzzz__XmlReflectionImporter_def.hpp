#pragma once
// IWYU pragma private; include "System/Xml/Serialization/XmlReflectionImporter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(XmlReflectionImporter)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Collections {
class ArrayList;
}
namespace System::Xml::Serialization {
class ReflectionHelper;
}
namespace System::Xml::Serialization {
class TypeData;
}
namespace System::Xml::Serialization {
class XmlAttributeOverrides;
}
namespace System::Xml::Serialization {
class XmlAttributes;
}
namespace System::Xml::Serialization {
class XmlReflectionMember;
}
namespace System::Xml::Serialization {
class XmlRootAttribute;
}
namespace System::Xml::Serialization {
class XmlTypeMapElementInfoList;
}
namespace System::Xml::Serialization {
class XmlTypeMapMemberElement;
}
namespace System::Xml::Serialization {
class XmlTypeMapMember;
}
namespace System::Xml::Serialization {
class XmlTypeMapping;
}
namespace System::Xml::Serialization {
class __XmlReflectionImporter____c;
}
namespace System {
template <typename T> class Comparison_1;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Xml::Serialization {
class XmlReflectionImporter;
}
namespace System::Xml::Serialization {
class __XmlReflectionImporter____c;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Serialization::XmlReflectionImporter);
MARK_REF_PTR_T(::System::Xml::Serialization::__XmlReflectionImporter____c);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml::Serialization {
// Is value type: false
// CS Name: ::XmlReflectionImporter::<>c*
class CORDL_TYPE __XmlReflectionImporter____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::System::Xml::Serialization::__XmlReflectionImporter____c* __9;

  /// @brief Field <>9__28_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__28_0, put = setStaticF___9__28_0)) ::System::Comparison_1<::System::Xml::Serialization::XmlReflectionMember*>* __9__28_0;

  static inline ::System::Xml::Serialization::__XmlReflectionImporter____c* New_ctor();

  /// @brief Method <ImportClassMapping>b__28_0, addr 0x4317184, size 0x4c, virtual false, abstract: false, final false
  inline int32_t _ImportClassMapping_b__28_0(::System::Xml::Serialization::XmlReflectionMember* m1, ::System::Xml::Serialization::XmlReflectionMember* m2);

  /// @brief Method .ctor, addr 0x431717c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Xml::Serialization::__XmlReflectionImporter____c* getStaticF___9();

  static inline ::System::Comparison_1<::System::Xml::Serialization::XmlReflectionMember*>* getStaticF___9__28_0();

  static inline void setStaticF___9(::System::Xml::Serialization::__XmlReflectionImporter____c* value);

  static inline void setStaticF___9__28_0(::System::Comparison_1<::System::Xml::Serialization::XmlReflectionMember*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __XmlReflectionImporter____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__XmlReflectionImporter____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __XmlReflectionImporter____c(__XmlReflectionImporter____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__XmlReflectionImporter____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __XmlReflectionImporter____c(__XmlReflectionImporter____c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7398 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Serialization::__XmlReflectionImporter____c, 0x10>, "Size mismatch!");

} // namespace System::Xml::Serialization
// Type: System.Xml.Serialization::XmlReflectionImporter
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 65, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml::Serialization {
// Is value type: false
// CS Name: ::System.Xml.Serialization::XmlReflectionImporter*
class CORDL_TYPE XmlReflectionImporter : public ::System::Object {
public:
  // Declarations
  using __c = ::System::Xml::Serialization::__XmlReflectionImporter____c;

  /// @brief Field allowPrivateTypes, offset 0x40, size 0x1
  __declspec(property(get = __cordl_internal_get_allowPrivateTypes, put = __cordl_internal_set_allowPrivateTypes)) bool allowPrivateTypes;

  /// @brief Field arrayChoiceCount, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_arrayChoiceCount, put = __cordl_internal_set_arrayChoiceCount)) int32_t arrayChoiceCount;

  /// @brief Field attributeOverrides, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_attributeOverrides, put = __cordl_internal_set_attributeOverrides)) ::System::Xml::Serialization::XmlAttributeOverrides* attributeOverrides;

  /// @brief Field errSimple, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_errSimple, put = setStaticF_errSimple)) ::StringW errSimple;

  /// @brief Field errSimple2, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_errSimple2, put = setStaticF_errSimple2)) ::StringW errSimple2;

  /// @brief Field helper, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_helper, put = __cordl_internal_set_helper)) ::System::Xml::Serialization::ReflectionHelper* helper;

  /// @brief Field includedTypes, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_includedTypes, put = __cordl_internal_set_includedTypes)) ::System::Collections::ArrayList* includedTypes;

  /// @brief Field initialDefaultNamespace, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_initialDefaultNamespace, put = __cordl_internal_set_initialDefaultNamespace)) ::StringW initialDefaultNamespace;

  /// @brief Field relatedMaps, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_relatedMaps, put = __cordl_internal_set_relatedMaps)) ::System::Collections::ArrayList* relatedMaps;

  /// @brief Method CanBeNull, addr 0x43133c0, size 0x40, virtual false, abstract: false, final false
  inline bool CanBeNull(::System::Xml::Serialization::TypeData* type);

  /// @brief Method CreateMapMember, addr 0x4314394, size 0x9a4, virtual false, abstract: false, final false
  inline ::System::Xml::Serialization::XmlTypeMapMember* CreateMapMember(::System::Type* declaringType, ::System::Xml::Serialization::XmlReflectionMember* rmember, ::StringW defaultNamespace);

  /// @brief Method CreateTypeMapping, addr 0x4312f6c, size 0x454, virtual false, abstract: false, final false
  inline ::System::Xml::Serialization::XmlTypeMapping* CreateTypeMapping(::System::Xml::Serialization::TypeData* typeData, ::System::Xml::Serialization::XmlRootAttribute* root,
                                                                         ::StringW defaultXmlType, ::StringW defaultNamespace);

  /// @brief Method GetDefaultValue, addr 0x43166a0, size 0x1cc, virtual false, abstract: false, final false
  inline ::System::Object* GetDefaultValue(::System::Xml::Serialization::TypeData* typeData, ::System::Object* defaultValue);

  /// @brief Method GetReflectionMembers, addr 0x43135f0, size 0xd44, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::System::Xml::Serialization::XmlReflectionMember*>* GetReflectionMembers(::System::Type* type);

  /// @brief Method GetTypeNamespace, addr 0x43134e4, size 0x10c, virtual false, abstract: false, final false
  inline ::StringW GetTypeNamespace(::System::Xml::Serialization::TypeData* typeData, ::System::Xml::Serialization::XmlRootAttribute* root, ::StringW defaultNamespace);

  /// @brief Method ImportAnyElementInfo, addr 0x4315068, size 0x640, virtual false, abstract: false, final false
  inline ::System::Xml::Serialization::XmlTypeMapElementInfoList* ImportAnyElementInfo(::StringW defaultNamespace, ::System::Xml::Serialization::XmlReflectionMember* rmember,
                                                                                       ::System::Xml::Serialization::XmlTypeMapMemberElement* member,
                                                                                       ::System::Xml::Serialization::XmlAttributes* atts);

  /// @brief Method ImportClassMapping, addr 0x4313454, size 0x90, virtual false, abstract: false, final false
  inline ::System::Xml::Serialization::XmlTypeMapping* ImportClassMapping(::System::Type* type, ::System::Xml::Serialization::XmlRootAttribute* root, ::StringW defaultNamespace, bool isBaseType);

  /// @brief Method ImportClassMapping, addr 0x43108fc, size 0xfc8, virtual false, abstract: false, final false
  inline ::System::Xml::Serialization::XmlTypeMapping* ImportClassMapping(::System::Xml::Serialization::TypeData* typeData, ::System::Xml::Serialization::XmlRootAttribute* root,
                                                                          ::StringW defaultNamespace, bool isBaseType);

  /// @brief Method ImportElementInfo, addr 0x43156a8, size 0xff8, virtual false, abstract: false, final false
  inline ::System::Xml::Serialization::XmlTypeMapElementInfoList* ImportElementInfo(::System::Type* cls, ::StringW defaultName, ::StringW defaultNamespace, ::System::Type* defaultType,
                                                                                    ::System::Xml::Serialization::XmlTypeMapMemberElement* member, ::System::Xml::Serialization::XmlAttributes* atts);

  /// @brief Method ImportEnumMapping, addr 0x4312858, size 0x600, virtual false, abstract: false, final false
  inline ::System::Xml::Serialization::XmlTypeMapping* ImportEnumMapping(::System::Xml::Serialization::TypeData* typeData, ::System::Xml::Serialization::XmlRootAttribute* root,
                                                                         ::StringW defaultNamespace);

  /// @brief Method ImportIncludedTypes, addr 0x4314e54, size 0x138, virtual false, abstract: false, final false
  inline void ImportIncludedTypes(::System::Type* type, ::StringW defaultNamespace);

  /// @brief Method ImportListMapping, addr 0x4314f8c, size 0xa0, virtual false, abstract: false, final false
  inline ::System::Xml::Serialization::XmlTypeMapping* ImportListMapping(::System::Type* type, ::System::Xml::Serialization::XmlRootAttribute* root, ::StringW defaultNamespace,
                                                                         ::System::Xml::Serialization::XmlAttributes* atts, int32_t nestingLevel);

  /// @brief Method ImportListMapping, addr 0x43118c4, size 0xd0c, virtual false, abstract: false, final false
  inline ::System::Xml::Serialization::XmlTypeMapping* ImportListMapping(::System::Xml::Serialization::TypeData* typeData, ::System::Xml::Serialization::XmlRootAttribute* root,
                                                                         ::StringW defaultNamespace, ::System::Xml::Serialization::XmlAttributes* atts, int32_t nestingLevel);

  /// @brief Method ImportPrimitiveMapping, addr 0x43127a4, size 0xb4, virtual false, abstract: false, final false
  inline ::System::Xml::Serialization::XmlTypeMapping* ImportPrimitiveMapping(::System::Xml::Serialization::TypeData* typeData, ::System::Xml::Serialization::XmlRootAttribute* root,
                                                                              ::StringW defaultNamespace);

  /// @brief Method ImportTextElementInfo, addr 0x431686c, size 0x340, virtual false, abstract: false, final false
  inline void ImportTextElementInfo(::System::Xml::Serialization::XmlTypeMapElementInfoList* list, ::System::Type* defaultType, ::System::Xml::Serialization::XmlTypeMapMemberElement* member,
                                    ::System::Xml::Serialization::XmlAttributes* atts, ::StringW defaultNamespace);

  /// @brief Method ImportTypeMapping, addr 0x43102a0, size 0xc, virtual false, abstract: false, final false
  inline ::System::Xml::Serialization::XmlTypeMapping* ImportTypeMapping(::System::Type* type);

  /// @brief Method ImportTypeMapping, addr 0x4310488, size 0xc, virtual false, abstract: false, final false
  inline ::System::Xml::Serialization::XmlTypeMapping* ImportTypeMapping(::System::Type* type, ::StringW defaultNamespace);

  /// @brief Method ImportTypeMapping, addr 0x43102ac, size 0x1dc, virtual false, abstract: false, final false
  inline ::System::Xml::Serialization::XmlTypeMapping* ImportTypeMapping(::System::Type* type, ::System::Xml::Serialization::XmlRootAttribute* root, ::StringW defaultNamespace);

  /// @brief Method ImportTypeMapping, addr 0x4310494, size 0x468, virtual false, abstract: false, final false
  inline ::System::Xml::Serialization::XmlTypeMapping* ImportTypeMapping(::System::Xml::Serialization::TypeData* typeData, ::System::Xml::Serialization::XmlRootAttribute* root,
                                                                         ::StringW defaultNamespace);

  /// @brief Method ImportXmlNodeMapping, addr 0x43125d0, size 0x1d4, virtual false, abstract: false, final false
  inline ::System::Xml::Serialization::XmlTypeMapping* ImportXmlNodeMapping(::System::Xml::Serialization::TypeData* typeData, ::System::Xml::Serialization::XmlRootAttribute* root,
                                                                            ::StringW defaultNamespace);

  /// @brief Method ImportXmlSerializableMapping, addr 0x4312e58, size 0x114, virtual false, abstract: false, final false
  inline ::System::Xml::Serialization::XmlTypeMapping* ImportXmlSerializableMapping(::System::Xml::Serialization::TypeData* typeData, ::System::Xml::Serialization::XmlRootAttribute* root,
                                                                                    ::StringW defaultNamespace);

  /// @brief Method IncludeType, addr 0x4316bac, size 0x4e8, virtual false, abstract: false, final false
  inline void IncludeType(::System::Type* type);

  static inline ::System::Xml::Serialization::XmlReflectionImporter* New_ctor(::System::Xml::Serialization::XmlAttributeOverrides* attributeOverrides, ::StringW defaultNamespace);

  /// @brief Method RegisterDerivedMap, addr 0x4314d38, size 0x11c, virtual false, abstract: false, final false
  inline void RegisterDerivedMap(::System::Xml::Serialization::XmlTypeMapping* map, ::System::Xml::Serialization::XmlTypeMapping* derivedMap);

  constexpr bool const& __cordl_internal_get_allowPrivateTypes() const;

  constexpr bool& __cordl_internal_get_allowPrivateTypes();

  constexpr int32_t const& __cordl_internal_get_arrayChoiceCount() const;

  constexpr int32_t& __cordl_internal_get_arrayChoiceCount();

  constexpr ::System::Xml::Serialization::XmlAttributeOverrides*& __cordl_internal_get_attributeOverrides();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::Serialization::XmlAttributeOverrides*> const& __cordl_internal_get_attributeOverrides() const;

  constexpr ::System::Xml::Serialization::ReflectionHelper*& __cordl_internal_get_helper();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::Serialization::ReflectionHelper*> const& __cordl_internal_get_helper() const;

  constexpr ::System::Collections::ArrayList*& __cordl_internal_get_includedTypes();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::ArrayList*> const& __cordl_internal_get_includedTypes() const;

  constexpr ::StringW const& __cordl_internal_get_initialDefaultNamespace() const;

  constexpr ::StringW& __cordl_internal_get_initialDefaultNamespace();

  constexpr ::System::Collections::ArrayList*& __cordl_internal_get_relatedMaps();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::ArrayList*> const& __cordl_internal_get_relatedMaps() const;

  constexpr void __cordl_internal_set_allowPrivateTypes(bool value);

  constexpr void __cordl_internal_set_arrayChoiceCount(int32_t value);

  constexpr void __cordl_internal_set_attributeOverrides(::System::Xml::Serialization::XmlAttributeOverrides* value);

  constexpr void __cordl_internal_set_helper(::System::Xml::Serialization::ReflectionHelper* value);

  constexpr void __cordl_internal_set_includedTypes(::System::Collections::ArrayList* value);

  constexpr void __cordl_internal_set_initialDefaultNamespace(::StringW value);

  constexpr void __cordl_internal_set_relatedMaps(::System::Collections::ArrayList* value);

  /// @brief Method .ctor, addr 0x431019c, size 0x104, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::Serialization::XmlAttributeOverrides* attributeOverrides, ::StringW defaultNamespace);

  static inline ::StringW getStaticF_errSimple();

  static inline ::StringW getStaticF_errSimple2();

  static inline void setStaticF_errSimple(::StringW value);

  static inline void setStaticF_errSimple2(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlReflectionImporter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlReflectionImporter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlReflectionImporter(XmlReflectionImporter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlReflectionImporter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlReflectionImporter(XmlReflectionImporter const&) = delete;

  /// @brief Field initialDefaultNamespace, offset: 0x10, size: 0x8, def value: None
  ::StringW ___initialDefaultNamespace;

  /// @brief Field attributeOverrides, offset: 0x18, size: 0x8, def value: None
  ::System::Xml::Serialization::XmlAttributeOverrides* ___attributeOverrides;

  /// @brief Field includedTypes, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::ArrayList* ___includedTypes;

  /// @brief Field helper, offset: 0x28, size: 0x8, def value: None
  ::System::Xml::Serialization::ReflectionHelper* ___helper;

  /// @brief Field arrayChoiceCount, offset: 0x30, size: 0x4, def value: None
  int32_t ___arrayChoiceCount;

  /// @brief Field relatedMaps, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::ArrayList* ___relatedMaps;

  /// @brief Field allowPrivateTypes, offset: 0x40, size: 0x1, def value: None
  bool ___allowPrivateTypes;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7399 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Serialization::XmlReflectionImporter, 0x48>, "Size mismatch!");

static_assert(offsetof(::System::Xml::Serialization::XmlReflectionImporter, ___initialDefaultNamespace) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::XmlReflectionImporter, ___attributeOverrides) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::XmlReflectionImporter, ___includedTypes) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::XmlReflectionImporter, ___helper) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::XmlReflectionImporter, ___arrayChoiceCount) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::XmlReflectionImporter, ___relatedMaps) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::XmlReflectionImporter, ___allowPrivateTypes) == 0x40, "Offset mismatch!");

} // namespace System::Xml::Serialization
NEED_NO_BOX(::System::Xml::Serialization::XmlReflectionImporter);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Serialization::XmlReflectionImporter*, "System.Xml.Serialization", "XmlReflectionImporter");
NEED_NO_BOX(::System::Xml::Serialization::__XmlReflectionImporter____c);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Serialization::__XmlReflectionImporter____c*, "System.Xml.Serialization", "XmlReflectionImporter/<>c");

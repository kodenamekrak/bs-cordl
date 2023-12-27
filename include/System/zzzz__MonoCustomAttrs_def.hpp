#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MonoCustomAttrs)
namespace System {
class __MonoCustomAttrs__AttributeInfo;
}
namespace System::Reflection {
class Assembly;
}
namespace System {
class Object;
}
namespace System::Reflection {
class EventInfo;
}
namespace System::Reflection {
class PropertyInfo;
}
namespace System {
class Type;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System {
class AttributeUsageAttribute;
}
namespace System::Reflection {
class RuntimePropertyInfo;
}
namespace System::Reflection {
class ICustomAttributeProvider;
}
namespace System {
class Attribute;
}
namespace System::Reflection {
class CustomAttributeData;
}
namespace System::Collections::Generic {
template <typename T> class IList_1;
}
namespace System::Reflection {
class RuntimeEventInfo;
}
// Forward declare root types
namespace System {
class MonoCustomAttrs;
}
namespace System {
class __MonoCustomAttrs__AttributeInfo;
}
// Write type traits
MARK_REF_PTR_T(::System::MonoCustomAttrs);
MARK_REF_PTR_T(::System::__MonoCustomAttrs__AttributeInfo);
// Type: ::AttributeInfo
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 28, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2607))
// CS Name: ::MonoCustomAttrs::AttributeInfo*
class CORDL_TYPE __MonoCustomAttrs__AttributeInfo : public ::System::Object {
public:
  // Declarations
  /// @brief Field _usage, offset 0x10, size 0x8
  __declspec(property(get = __get__usage, put = __set__usage))::System::AttributeUsageAttribute* _usage;

  /// @brief Field _inheritanceLevel, offset 0x18, size 0x4
  __declspec(property(get = __get__inheritanceLevel, put = __set__inheritanceLevel)) int32_t _inheritanceLevel;

  __declspec(property(get = get_Usage))::System::AttributeUsageAttribute* Usage;

  __declspec(property(get = get_InheritanceLevel)) int32_t InheritanceLevel;

  constexpr ::System::AttributeUsageAttribute*& __get__usage();

  constexpr ::cordl_internals::to_const_pointer<::System::AttributeUsageAttribute*> const& __get__usage() const;

  constexpr void __set__usage(::System::AttributeUsageAttribute* value);

  constexpr int32_t& __get__inheritanceLevel();

  constexpr int32_t const& __get__inheritanceLevel() const;

  constexpr void __set__inheritanceLevel(int32_t value);

  static inline ::System::__MonoCustomAttrs__AttributeInfo* New_ctor(::System::AttributeUsageAttribute* usage, int32_t inheritanceLevel);

  /// @brief Method .ctor addr 0x25fbbd0 size 0xc virtual false final false
  inline void _ctor(::System::AttributeUsageAttribute* usage, int32_t inheritanceLevel);

  /// @brief Method get_Usage addr 0x25fe2f4 size 0x8 virtual false final false
  inline ::System::AttributeUsageAttribute* get_Usage();

  /// @brief Method get_InheritanceLevel addr 0x25fe2fc size 0x8 virtual false final false
  inline int32_t get_InheritanceLevel();

  // Ctor Parameters [CppParam { name: "", ty: "__MonoCustomAttrs__AttributeInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MonoCustomAttrs__AttributeInfo(__MonoCustomAttrs__AttributeInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MonoCustomAttrs__AttributeInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MonoCustomAttrs__AttributeInfo(__MonoCustomAttrs__AttributeInfo const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MonoCustomAttrs__AttributeInfo();

public:
  /// @brief Field _usage, offset: 0x10, size: 0x8, def value: None
  ::System::AttributeUsageAttribute* ____usage;

  /// @brief Field _inheritanceLevel, offset: 0x18, size: 0x4, def value: None
  int32_t ____inheritanceLevel;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::__MonoCustomAttrs__AttributeInfo, 0x20>, "Size mismatch!");

} // namespace System
// Type: System::MonoCustomAttrs
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2608))
// CS Name: ::System::MonoCustomAttrs*
class CORDL_TYPE MonoCustomAttrs : public ::System::Object {
public:
  // Declarations
  using AttributeInfo = ::System::__MonoCustomAttrs__AttributeInfo;

  /// @brief Field corlib, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_corlib, put = setStaticF_corlib))::System::Reflection::Assembly* corlib;

  /// @brief Field usage_cache, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_usage_cache, put = setStaticF_usage_cache))::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::AttributeUsageAttribute*>* usage_cache;

  /// @brief Field DefaultAttributeUsage, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_DefaultAttributeUsage, put = setStaticF_DefaultAttributeUsage))::System::AttributeUsageAttribute* DefaultAttributeUsage;

  static inline void setStaticF_corlib(::System::Reflection::Assembly* value);

  static inline ::System::Reflection::Assembly* getStaticF_corlib();

  static inline void setStaticF_usage_cache(::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::AttributeUsageAttribute*>* value);

  static inline ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::AttributeUsageAttribute*>* getStaticF_usage_cache();

  static inline void setStaticF_DefaultAttributeUsage(::System::AttributeUsageAttribute* value);

  static inline ::System::AttributeUsageAttribute* getStaticF_DefaultAttributeUsage();

  /// @brief Method IsUserCattrProvider addr 0x25fa558 size 0x1cc virtual false final false
  static inline bool IsUserCattrProvider(::System::Object* obj);

  /// @brief Method GetCustomAttributesInternal addr 0x25fa724 size 0x8 virtual false final false
  static inline ::ArrayW<::System::Attribute*, ::Array<::System::Attribute*>*> GetCustomAttributesInternal(::System::Reflection::ICustomAttributeProvider* obj, ::System::Type* attributeType,
                                                                                                           bool pseudoAttrs);

  /// @brief Method GetPseudoCustomAttributes addr 0x25fa72c size 0x2ec virtual false final false
  static inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> GetPseudoCustomAttributes(::System::Reflection::ICustomAttributeProvider* obj, ::System::Type* attributeType);

  /// @brief Method GetPseudoCustomAttributes addr 0x25faa18 size 0x164 virtual false final false
  static inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> GetPseudoCustomAttributes(::System::Type* type);

  /// @brief Method GetCustomAttributesBase addr 0x25fab7c size 0x1a4 virtual false final false
  static inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> GetCustomAttributesBase(::System::Reflection::ICustomAttributeProvider* obj, ::System::Type* attributeType,
                                                                                                 bool inheritedOnly);

  /// @brief Method GetCustomAttributes addr 0x25fad20 size 0x988 virtual false final false
  static inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> GetCustomAttributes(::System::Reflection::ICustomAttributeProvider* obj, ::System::Type* attributeType, bool inherit);

  /// @brief Method GetCustomAttributes addr 0x25fbbdc size 0x178 virtual false final false
  static inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> GetCustomAttributes(::System::Reflection::ICustomAttributeProvider* obj, bool inherit);

  /// @brief Method GetCustomAttributesDataInternal addr 0x25fbd54 size 0x4 virtual false final false
  static inline ::ArrayW<::System::Reflection::CustomAttributeData*, ::Array<::System::Reflection::CustomAttributeData*>*>
  GetCustomAttributesDataInternal(::System::Reflection::ICustomAttributeProvider* obj);

  /// @brief Method GetCustomAttributesData addr 0x25fbd58 size 0x12c virtual false final false
  static inline ::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeData*>* GetCustomAttributesData(::System::Reflection::ICustomAttributeProvider* obj, bool inherit);

  /// @brief Method GetCustomAttributesData addr 0x25fc030 size 0x1360 virtual false final false
  static inline ::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeData*>* GetCustomAttributesData(::System::Reflection::ICustomAttributeProvider* obj,
                                                                                                                             ::System::Type* attributeType, bool inherit);

  /// @brief Method GetCustomAttributesDataBase addr 0x25fbe84 size 0x1ac virtual false final false
  static inline ::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeData*>* GetCustomAttributesDataBase(::System::Reflection::ICustomAttributeProvider* obj,
                                                                                                                                 ::System::Type* attributeType, bool inheritedOnly);

  /// @brief Method GetPseudoCustomAttributesData addr 0x25fd390 size 0x2f0 virtual false final false
  static inline ::ArrayW<::System::Reflection::CustomAttributeData*, ::Array<::System::Reflection::CustomAttributeData*>*>
  GetPseudoCustomAttributesData(::System::Reflection::ICustomAttributeProvider* obj, ::System::Type* attributeType);

  /// @brief Method GetPseudoCustomAttributesData addr 0x25fd680 size 0x218 virtual false final false
  static inline ::ArrayW<::System::Reflection::CustomAttributeData*, ::Array<::System::Reflection::CustomAttributeData*>*> GetPseudoCustomAttributesData(::System::Type* type);

  /// @brief Method IsDefined addr 0x25fd898 size 0x298 virtual false final false
  static inline bool IsDefined(::System::Reflection::ICustomAttributeProvider* obj, ::System::Type* attributeType, bool inherit);

  /// @brief Method IsDefinedInternal addr 0x25fdb30 size 0x4 virtual false final false
  static inline bool IsDefinedInternal(::System::Reflection::ICustomAttributeProvider* obj, ::System::Type* AttributeType);

  /// @brief Method GetBasePropertyDefinition addr 0x25fdb34 size 0x2e8 virtual false final false
  static inline ::System::Reflection::PropertyInfo* GetBasePropertyDefinition(::System::Reflection::RuntimePropertyInfo* property);

  /// @brief Method GetBaseEventDefinition addr 0x25fde1c size 0x210 virtual false final false
  static inline ::System::Reflection::EventInfo* GetBaseEventDefinition(::System::Reflection::RuntimeEventInfo* evt);

  /// @brief Method GetBase addr 0x25fb6a8 size 0x3b4 virtual false final false
  static inline ::System::Reflection::ICustomAttributeProvider* GetBase(::System::Reflection::ICustomAttributeProvider* obj);

  /// @brief Method RetrieveAttributeUsageNoCache addr 0x25fe02c size 0x24c virtual false final false
  static inline ::System::AttributeUsageAttribute* RetrieveAttributeUsageNoCache(::System::Type* attributeType);

  /// @brief Method RetrieveAttributeUsage addr 0x25fba5c size 0x174 virtual false final false
  static inline ::System::AttributeUsageAttribute* RetrieveAttributeUsage(::System::Type* attributeType);

  // Ctor Parameters [CppParam { name: "", ty: "MonoCustomAttrs", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MonoCustomAttrs(MonoCustomAttrs&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MonoCustomAttrs", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MonoCustomAttrs(MonoCustomAttrs const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MonoCustomAttrs();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::MonoCustomAttrs, 0x10>, "Size mismatch!");

} // namespace System
NEED_NO_BOX(::System::MonoCustomAttrs);
DEFINE_IL2CPP_ARG_TYPE(::System::MonoCustomAttrs*, "System", "MonoCustomAttrs");
NEED_NO_BOX(::System::__MonoCustomAttrs__AttributeInfo);
DEFINE_IL2CPP_ARG_TYPE(::System::__MonoCustomAttrs__AttributeInfo*, "System", "MonoCustomAttrs/AttributeInfo");
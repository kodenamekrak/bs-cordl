#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/Serialization/zzzz__JsonContainerContract_def.hpp"
CORDL_MODULE_EXPORT(JsonArrayContract)
namespace System {
class Object;
}
namespace Newtonsoft::Json::Serialization {
template <typename T> class ObjectConstructor_1;
}
namespace System {
template <typename TResult> class Func_1;
}
namespace System {
class Type;
}
namespace System::Reflection {
class ConstructorInfo;
}
namespace Newtonsoft::Json::Utilities {
class IWrappedCollection;
}
namespace System::Collections {
class IList;
}
// Forward declare root types
namespace Newtonsoft::Json::Serialization {
class JsonArrayContract;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Serialization::JsonArrayContract);
// Type: Newtonsoft.Json.Serialization::JsonArrayContract
// SizeInfo { instance_size: 280, native_size: -1, calculated_instance_size: 280, calculated_native_size: 273, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Serialization {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11907))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11935))
// CS Name: ::Newtonsoft.Json.Serialization::JsonArrayContract*
class CORDL_TYPE JsonArrayContract : public ::Newtonsoft::Json::Serialization::JsonContainerContract {
public:
  // Declarations
  /// @brief Field <CollectionItemType>k__BackingField, offset 0xc0, size 0x8
  __declspec(property(get = __get__CollectionItemType_k__BackingField, put = __set__CollectionItemType_k__BackingField))::System::Type* _CollectionItemType_k__BackingField;

  /// @brief Field <IsMultidimensionalArray>k__BackingField, offset 0xc8, size 0x1
  __declspec(property(get = __get__IsMultidimensionalArray_k__BackingField, put = __set__IsMultidimensionalArray_k__BackingField)) bool _IsMultidimensionalArray_k__BackingField;

  /// @brief Field _genericCollectionDefinitionType, offset 0xd0, size 0x8
  __declspec(property(get = __get__genericCollectionDefinitionType, put = __set__genericCollectionDefinitionType))::System::Type* _genericCollectionDefinitionType;

  /// @brief Field _genericWrapperType, offset 0xd8, size 0x8
  __declspec(property(get = __get__genericWrapperType, put = __set__genericWrapperType))::System::Type* _genericWrapperType;

  /// @brief Field _genericWrapperCreator, offset 0xe0, size 0x8
  __declspec(property(get = __get__genericWrapperCreator, put = __set__genericWrapperCreator))::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>* _genericWrapperCreator;

  /// @brief Field _genericTemporaryCollectionCreator, offset 0xe8, size 0x8
  __declspec(property(get = __get__genericTemporaryCollectionCreator, put = __set__genericTemporaryCollectionCreator))::System::Func_1<::System::Object*>* _genericTemporaryCollectionCreator;

  /// @brief Field <IsArray>k__BackingField, offset 0xf0, size 0x1
  __declspec(property(get = __get__IsArray_k__BackingField, put = __set__IsArray_k__BackingField)) bool _IsArray_k__BackingField;

  /// @brief Field <ShouldCreateWrapper>k__BackingField, offset 0xf1, size 0x1
  __declspec(property(get = __get__ShouldCreateWrapper_k__BackingField, put = __set__ShouldCreateWrapper_k__BackingField)) bool _ShouldCreateWrapper_k__BackingField;

  /// @brief Field <CanDeserialize>k__BackingField, offset 0xf2, size 0x1
  __declspec(property(get = __get__CanDeserialize_k__BackingField, put = __set__CanDeserialize_k__BackingField)) bool _CanDeserialize_k__BackingField;

  /// @brief Field _parameterizedConstructor, offset 0xf8, size 0x8
  __declspec(property(get = __get__parameterizedConstructor, put = __set__parameterizedConstructor))::System::Reflection::ConstructorInfo* _parameterizedConstructor;

  /// @brief Field _parameterizedCreator, offset 0x100, size 0x8
  __declspec(property(get = __get__parameterizedCreator, put = __set__parameterizedCreator))::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>* _parameterizedCreator;

  /// @brief Field _overrideCreator, offset 0x108, size 0x8
  __declspec(property(get = __get__overrideCreator, put = __set__overrideCreator))::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>* _overrideCreator;

  /// @brief Field <HasParameterizedCreator>k__BackingField, offset 0x110, size 0x1
  __declspec(property(get = __get__HasParameterizedCreator_k__BackingField, put = __set__HasParameterizedCreator_k__BackingField)) bool _HasParameterizedCreator_k__BackingField;

  __declspec(property(get = get_CollectionItemType, put = set_CollectionItemType))::System::Type* CollectionItemType;

  __declspec(property(get = get_IsMultidimensionalArray, put = set_IsMultidimensionalArray)) bool IsMultidimensionalArray;

  __declspec(property(get = get_IsArray, put = set_IsArray)) bool IsArray;

  __declspec(property(get = get_ShouldCreateWrapper, put = set_ShouldCreateWrapper)) bool ShouldCreateWrapper;

  __declspec(property(get = get_CanDeserialize, put = set_CanDeserialize)) bool CanDeserialize;

  __declspec(property(get = get_ParameterizedCreator))::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>* ParameterizedCreator;

  __declspec(property(get = get_OverrideCreator, put = set_OverrideCreator))::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>* OverrideCreator;

  __declspec(property(get = get_HasParameterizedCreator, put = set_HasParameterizedCreator)) bool HasParameterizedCreator;

  __declspec(property(get = get_HasParameterizedCreatorInternal)) bool HasParameterizedCreatorInternal;

  constexpr ::System::Type*& __get__CollectionItemType_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __get__CollectionItemType_k__BackingField() const;

  constexpr void __set__CollectionItemType_k__BackingField(::System::Type* value);

  constexpr bool& __get__IsMultidimensionalArray_k__BackingField();

  constexpr bool const& __get__IsMultidimensionalArray_k__BackingField() const;

  constexpr void __set__IsMultidimensionalArray_k__BackingField(bool value);

  constexpr ::System::Type*& __get__genericCollectionDefinitionType();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __get__genericCollectionDefinitionType() const;

  constexpr void __set__genericCollectionDefinitionType(::System::Type* value);

  constexpr ::System::Type*& __get__genericWrapperType();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __get__genericWrapperType() const;

  constexpr void __set__genericWrapperType(::System::Type* value);

  constexpr ::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>*& __get__genericWrapperCreator();

  constexpr ::cordl_internals::to_const_pointer<::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>*> const& __get__genericWrapperCreator() const;

  constexpr void __set__genericWrapperCreator(::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>* value);

  constexpr ::System::Func_1<::System::Object*>*& __get__genericTemporaryCollectionCreator();

  constexpr ::cordl_internals::to_const_pointer<::System::Func_1<::System::Object*>*> const& __get__genericTemporaryCollectionCreator() const;

  constexpr void __set__genericTemporaryCollectionCreator(::System::Func_1<::System::Object*>* value);

  constexpr bool& __get__IsArray_k__BackingField();

  constexpr bool const& __get__IsArray_k__BackingField() const;

  constexpr void __set__IsArray_k__BackingField(bool value);

  constexpr bool& __get__ShouldCreateWrapper_k__BackingField();

  constexpr bool const& __get__ShouldCreateWrapper_k__BackingField() const;

  constexpr void __set__ShouldCreateWrapper_k__BackingField(bool value);

  constexpr bool& __get__CanDeserialize_k__BackingField();

  constexpr bool const& __get__CanDeserialize_k__BackingField() const;

  constexpr void __set__CanDeserialize_k__BackingField(bool value);

  constexpr ::System::Reflection::ConstructorInfo*& __get__parameterizedConstructor();

  constexpr ::cordl_internals::to_const_pointer<::System::Reflection::ConstructorInfo*> const& __get__parameterizedConstructor() const;

  constexpr void __set__parameterizedConstructor(::System::Reflection::ConstructorInfo* value);

  constexpr ::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>*& __get__parameterizedCreator();

  constexpr ::cordl_internals::to_const_pointer<::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>*> const& __get__parameterizedCreator() const;

  constexpr void __set__parameterizedCreator(::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>* value);

  constexpr ::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>*& __get__overrideCreator();

  constexpr ::cordl_internals::to_const_pointer<::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>*> const& __get__overrideCreator() const;

  constexpr void __set__overrideCreator(::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>* value);

  constexpr bool& __get__HasParameterizedCreator_k__BackingField();

  constexpr bool const& __get__HasParameterizedCreator_k__BackingField() const;

  constexpr void __set__HasParameterizedCreator_k__BackingField(bool value);

  /// @brief Method get_CollectionItemType addr 0x267794c size 0x8 virtual false final false
  inline ::System::Type* get_CollectionItemType();

  /// @brief Method set_CollectionItemType addr 0x2677954 size 0x8 virtual false final false
  inline void set_CollectionItemType(::System::Type* value);

  /// @brief Method get_IsMultidimensionalArray addr 0x267795c size 0x8 virtual false final false
  inline bool get_IsMultidimensionalArray();

  /// @brief Method set_IsMultidimensionalArray addr 0x2677964 size 0xc virtual false final false
  inline void set_IsMultidimensionalArray(bool value);

  /// @brief Method get_IsArray addr 0x2677970 size 0x8 virtual false final false
  inline bool get_IsArray();

  /// @brief Method set_IsArray addr 0x2677978 size 0xc virtual false final false
  inline void set_IsArray(bool value);

  /// @brief Method get_ShouldCreateWrapper addr 0x2677984 size 0x8 virtual false final false
  inline bool get_ShouldCreateWrapper();

  /// @brief Method set_ShouldCreateWrapper addr 0x267798c size 0xc virtual false final false
  inline void set_ShouldCreateWrapper(bool value);

  /// @brief Method get_CanDeserialize addr 0x2677998 size 0x8 virtual false final false
  inline bool get_CanDeserialize();

  /// @brief Method set_CanDeserialize addr 0x26779a0 size 0xc virtual false final false
  inline void set_CanDeserialize(bool value);

  /// @brief Method get_ParameterizedCreator addr 0x26779ac size 0x7c virtual false final false
  inline ::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>* get_ParameterizedCreator();

  /// @brief Method get_OverrideCreator addr 0x2677a28 size 0x8 virtual false final false
  inline ::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>* get_OverrideCreator();

  /// @brief Method set_OverrideCreator addr 0x2674e60 size 0x10 virtual false final false
  inline void set_OverrideCreator(::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>* value);

  /// @brief Method get_HasParameterizedCreator addr 0x2677a30 size 0x8 virtual false final false
  inline bool get_HasParameterizedCreator();

  /// @brief Method set_HasParameterizedCreator addr 0x2677a38 size 0xc virtual false final false
  inline void set_HasParameterizedCreator(bool value);

  /// @brief Method get_HasParameterizedCreatorInternal addr 0x2677a44 size 0x28 virtual false final false
  inline bool get_HasParameterizedCreatorInternal();

  static inline ::Newtonsoft::Json::Serialization::JsonArrayContract* New_ctor(::System::Type* underlyingType);

  /// @brief Method .ctor addr 0x26745c8 size 0x898 virtual false final false
  inline void _ctor(::System::Type* underlyingType);

  /// @brief Method CreateWrapper addr 0x2677ac8 size 0x3c0 virtual false final false
  inline ::Newtonsoft::Json::Utilities::IWrappedCollection* CreateWrapper(::System::Object* list);

  /// @brief Method CreateTemporaryCollection addr 0x2677e88 size 0x22c virtual false final false
  inline ::System::Collections::IList* CreateTemporaryCollection();

  // Ctor Parameters [CppParam { name: "", ty: "JsonArrayContract", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  JsonArrayContract(JsonArrayContract&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "JsonArrayContract", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  JsonArrayContract(JsonArrayContract const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr JsonArrayContract();

public:
  /// @brief Field <CollectionItemType>k__BackingField, offset: 0xc0, size: 0x8, def value: None
  ::System::Type* ____CollectionItemType_k__BackingField;

  /// @brief Field <IsMultidimensionalArray>k__BackingField, offset: 0xc8, size: 0x1, def value: None
  bool ____IsMultidimensionalArray_k__BackingField;

  /// @brief Field _genericCollectionDefinitionType, offset: 0xd0, size: 0x8, def value: None
  ::System::Type* ____genericCollectionDefinitionType;

  /// @brief Field _genericWrapperType, offset: 0xd8, size: 0x8, def value: None
  ::System::Type* ____genericWrapperType;

  /// @brief Field _genericWrapperCreator, offset: 0xe0, size: 0x8, def value: None
  ::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>* ____genericWrapperCreator;

  /// @brief Field _genericTemporaryCollectionCreator, offset: 0xe8, size: 0x8, def value: None
  ::System::Func_1<::System::Object*>* ____genericTemporaryCollectionCreator;

  /// @brief Field <IsArray>k__BackingField, offset: 0xf0, size: 0x1, def value: None
  bool ____IsArray_k__BackingField;

  /// @brief Field <ShouldCreateWrapper>k__BackingField, offset: 0xf1, size: 0x1, def value: None
  bool ____ShouldCreateWrapper_k__BackingField;

  /// @brief Field <CanDeserialize>k__BackingField, offset: 0xf2, size: 0x1, def value: None
  bool ____CanDeserialize_k__BackingField;

  /// @brief Field _parameterizedConstructor, offset: 0xf8, size: 0x8, def value: None
  ::System::Reflection::ConstructorInfo* ____parameterizedConstructor;

  /// @brief Field _parameterizedCreator, offset: 0x100, size: 0x8, def value: None
  ::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>* ____parameterizedCreator;

  /// @brief Field _overrideCreator, offset: 0x108, size: 0x8, def value: None
  ::Newtonsoft::Json::Serialization::ObjectConstructor_1<::System::Object*>* ____overrideCreator;

  /// @brief Field <HasParameterizedCreator>k__BackingField, offset: 0x110, size: 0x1, def value: None
  bool ____HasParameterizedCreator_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Serialization::JsonArrayContract, 0x118>, "Size mismatch!");

} // namespace Newtonsoft::Json::Serialization
NEED_NO_BOX(::Newtonsoft::Json::Serialization::JsonArrayContract);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Serialization::JsonArrayContract*, "Newtonsoft.Json.Serialization", "JsonArrayContract");
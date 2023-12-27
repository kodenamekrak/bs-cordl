#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(EventDescriptorCollection)
namespace System::Collections {
class IEnumerator;
}
namespace System::ComponentModel {
class EventDescriptor;
}
namespace System::Collections {
class ICollection;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::ComponentModel {
class __EventDescriptorCollection__ArraySubsetEnumerator;
}
namespace System::Collections {
class IList;
}
namespace System::Collections {
class IComparer;
}
namespace System {
class Object;
}
namespace System {
class Array;
}
// Forward declare root types
namespace System::ComponentModel {
class EventDescriptorCollection;
}
namespace System::ComponentModel {
class __EventDescriptorCollection__ArraySubsetEnumerator;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::EventDescriptorCollection);
MARK_REF_PTR_T(::System::ComponentModel::__EventDescriptorCollection__ArraySubsetEnumerator);
// Type: ::ArraySubsetEnumerator
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::ComponentModel {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9424))
// CS Name: ::EventDescriptorCollection::ArraySubsetEnumerator*
class CORDL_TYPE __EventDescriptorCollection__ArraySubsetEnumerator : public ::System::Object {
public:
  // Declarations
  /// @brief Field _array, offset 0x10, size 0x8
  __declspec(property(get = __get__array, put = __set__array))::System::Array* _array;

  /// @brief Field _total, offset 0x18, size 0x4
  __declspec(property(get = __get__total, put = __set__total)) int32_t _total;

  /// @brief Field _current, offset 0x1c, size 0x4
  __declspec(property(get = __get__current, put = __set__current)) int32_t _current;

  __declspec(property(get = get_Current))::System::Object* Current;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  constexpr ::System::Array*& __get__array();

  constexpr ::cordl_internals::to_const_pointer<::System::Array*> const& __get__array() const;

  constexpr void __set__array(::System::Array* value);

  constexpr int32_t& __get__total();

  constexpr int32_t const& __get__total() const;

  constexpr void __set__total(int32_t value);

  constexpr int32_t& __get__current();

  constexpr int32_t const& __get__current() const;

  constexpr void __set__current(int32_t value);

  static inline ::System::ComponentModel::__EventDescriptorCollection__ArraySubsetEnumerator* New_ctor(::System::Array* array, int32_t count);

  /// @brief Method .ctor addr 0x290f9e8 size 0x34 virtual false final false
  inline void _ctor(::System::Array* array, int32_t count);

  /// @brief Method MoveNext addr 0x290ff6c size 0x28 virtual true final true
  inline bool MoveNext();

  /// @brief Method Reset addr 0x290ff94 size 0xc virtual true final true
  inline void Reset();

  /// @brief Method get_Current addr 0x290ffa0 size 0x64 virtual true final true
  inline ::System::Object* get_Current();

  // Ctor Parameters [CppParam { name: "", ty: "__EventDescriptorCollection__ArraySubsetEnumerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __EventDescriptorCollection__ArraySubsetEnumerator(__EventDescriptorCollection__ArraySubsetEnumerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__EventDescriptorCollection__ArraySubsetEnumerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __EventDescriptorCollection__ArraySubsetEnumerator(__EventDescriptorCollection__ArraySubsetEnumerator const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __EventDescriptorCollection__ArraySubsetEnumerator();

public:
  /// @brief Field _array, offset: 0x10, size: 0x8, def value: None
  ::System::Array* ____array;

  /// @brief Field _total, offset: 0x18, size: 0x4, def value: None
  int32_t ____total;

  /// @brief Field _current, offset: 0x1c, size: 0x4, def value: None
  int32_t ____current;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::__EventDescriptorCollection__ArraySubsetEnumerator, 0x20>, "Size mismatch!");

} // namespace System::ComponentModel
// Type: System.ComponentModel::EventDescriptorCollection
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::ComponentModel {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9425))
// CS Name: ::System.ComponentModel::EventDescriptorCollection*
class CORDL_TYPE EventDescriptorCollection : public ::System::Object {
public:
  // Declarations
  using ArraySubsetEnumerator = ::System::ComponentModel::__EventDescriptorCollection__ArraySubsetEnumerator;

  /// @brief Field _events, offset 0x10, size 0x8
  __declspec(property(get = __get__events, put = __set__events))::ArrayW<::System::ComponentModel::EventDescriptor*, ::Array<::System::ComponentModel::EventDescriptor*>*> _events;

  /// @brief Field _namedSort, offset 0x18, size 0x8
  __declspec(property(get = __get__namedSort, put = __set__namedSort))::ArrayW<::StringW, ::Array<::StringW>*> _namedSort;

  /// @brief Field _comparer, offset 0x20, size 0x8
  __declspec(property(get = __get__comparer, put = __set__comparer))::System::Collections::IComparer* _comparer;

  /// @brief Field _eventsOwned, offset 0x28, size 0x1
  __declspec(property(get = __get__eventsOwned, put = __set__eventsOwned)) bool _eventsOwned;

  /// @brief Field _needSort, offset 0x29, size 0x1
  __declspec(property(get = __get__needSort, put = __set__needSort)) bool _needSort;

  /// @brief Field _readOnly, offset 0x2a, size 0x1
  __declspec(property(get = __get__readOnly, put = __set__readOnly)) bool _readOnly;

  /// @brief Field <Count>k__BackingField, offset 0x2c, size 0x4
  __declspec(property(get = __get__Count_k__BackingField, put = __set__Count_k__BackingField)) int32_t _Count_k__BackingField;

  /// @brief Field Empty, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Empty, put = setStaticF_Empty))::System::ComponentModel::EventDescriptorCollection* Empty;

  __declspec(property(get = get_Count, put = set_Count)) int32_t Count;

  __declspec(property(get = get_Item))::System::ComponentModel::EventDescriptor* Item[];

  __declspec(property(get = get_Item))::System::ComponentModel::EventDescriptor* Item[];

  __declspec(property(get = System_Collections_ICollection_get_IsSynchronized)) bool System_Collections_ICollection_IsSynchronized;

  __declspec(property(get = System_Collections_ICollection_get_SyncRoot))::System::Object* System_Collections_ICollection_SyncRoot;

  __declspec(property(get = System_Collections_ICollection_get_Count)) int32_t System_Collections_ICollection_Count;

  __declspec(property(get = System_Collections_IList_get_Item, put = System_Collections_IList_set_Item))::System::Object* System_Collections_IList_Item[];

  __declspec(property(get = System_Collections_IList_get_IsReadOnly)) bool System_Collections_IList_IsReadOnly;

  __declspec(property(get = System_Collections_IList_get_IsFixedSize)) bool System_Collections_IList_IsFixedSize;

  /// @brief Convert operator to "::System::Collections::ICollection"
  constexpr operator ::System::Collections::ICollection*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::System::Collections::IList"
  constexpr operator ::System::Collections::IList*() noexcept;

  constexpr ::ArrayW<::System::ComponentModel::EventDescriptor*, ::Array<::System::ComponentModel::EventDescriptor*>*>& __get__events();

  constexpr ::ArrayW<::System::ComponentModel::EventDescriptor*, ::Array<::System::ComponentModel::EventDescriptor*>*> const& __get__events() const;

  constexpr void __set__events(::ArrayW<::System::ComponentModel::EventDescriptor*, ::Array<::System::ComponentModel::EventDescriptor*>*> value);

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& __get__namedSort();

  constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& __get__namedSort() const;

  constexpr void __set__namedSort(::ArrayW<::StringW, ::Array<::StringW>*> value);

  constexpr ::System::Collections::IComparer*& __get__comparer();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::IComparer*> const& __get__comparer() const;

  constexpr void __set__comparer(::System::Collections::IComparer* value);

  constexpr bool& __get__eventsOwned();

  constexpr bool const& __get__eventsOwned() const;

  constexpr void __set__eventsOwned(bool value);

  constexpr bool& __get__needSort();

  constexpr bool const& __get__needSort() const;

  constexpr void __set__needSort(bool value);

  constexpr bool& __get__readOnly();

  constexpr bool const& __get__readOnly() const;

  constexpr void __set__readOnly(bool value);

  constexpr int32_t& __get__Count_k__BackingField();

  constexpr int32_t const& __get__Count_k__BackingField() const;

  constexpr void __set__Count_k__BackingField(int32_t value);

  static inline void setStaticF_Empty(::System::ComponentModel::EventDescriptorCollection* value);

  static inline ::System::ComponentModel::EventDescriptorCollection* getStaticF_Empty();

  static inline ::System::ComponentModel::EventDescriptorCollection* New_ctor(::ArrayW<::System::ComponentModel::EventDescriptor*, ::Array<::System::ComponentModel::EventDescriptor*>*> events);

  /// @brief Method .ctor addr 0x290eec4 size 0xb0 virtual false final false
  inline void _ctor(::ArrayW<::System::ComponentModel::EventDescriptor*, ::Array<::System::ComponentModel::EventDescriptor*>*> events);

  static inline ::System::ComponentModel::EventDescriptorCollection* New_ctor(::ArrayW<::System::ComponentModel::EventDescriptor*, ::Array<::System::ComponentModel::EventDescriptor*>*> events,
                                                                              bool readOnly);

  /// @brief Method .ctor addr 0x290ef74 size 0x24 virtual false final false
  inline void _ctor(::ArrayW<::System::ComponentModel::EventDescriptor*, ::Array<::System::ComponentModel::EventDescriptor*>*> events, bool readOnly);

  /// @brief Method get_Count addr 0x290ef98 size 0x8 virtual false final false
  inline int32_t get_Count();

  /// @brief Method set_Count addr 0x290efa0 size 0x8 virtual false final false
  inline void set_Count(int32_t value);

  /// @brief Method get_Item addr 0x290efa8 size 0x8c virtual true final false
  inline ::System::ComponentModel::EventDescriptor* get_Item(int32_t index);

  /// @brief Method get_Item addr 0x290f0e0 size 0x14 virtual true final false
  inline ::System::ComponentModel::EventDescriptor* get_Item(::StringW name);

  /// @brief Method Add addr 0x290f0f4 size 0xd0 virtual false final false
  inline int32_t Add(::System::ComponentModel::EventDescriptor* value);

  /// @brief Method Clear addr 0x290f2c4 size 0x54 virtual false final false
  inline void Clear();

  /// @brief Method Contains addr 0x290f318 size 0x18 virtual false final false
  inline bool Contains(::System::ComponentModel::EventDescriptor* value);

  /// @brief Method System.Collections.ICollection.CopyTo addr 0x290f390 size 0x3c virtual true final true
  inline void System_Collections_ICollection_CopyTo(::System::Array* array, int32_t index);

  /// @brief Method EnsureEventsOwned addr 0x290f034 size 0xac virtual false final false
  inline void EnsureEventsOwned();

  /// @brief Method EnsureSize addr 0x290f1c4 size 0x100 virtual false final false
  inline void EnsureSize(int32_t sizeNeeded);

  /// @brief Method Find addr 0x290f628 size 0x114 virtual true final false
  inline ::System::ComponentModel::EventDescriptor* Find(::StringW name, bool ignoreCase);

  /// @brief Method IndexOf addr 0x290f330 size 0x60 virtual false final false
  inline int32_t IndexOf(::System::ComponentModel::EventDescriptor* value);

  /// @brief Method Insert addr 0x290f73c size 0xf0 virtual false final false
  inline void Insert(int32_t index, ::System::ComponentModel::EventDescriptor* value);

  /// @brief Method Remove addr 0x290f82c size 0x70 virtual false final false
  inline void Remove(::System::ComponentModel::EventDescriptor* value);

  /// @brief Method RemoveAt addr 0x290f89c size 0xb4 virtual false final false
  inline void RemoveAt(int32_t index);

  /// @brief Method GetEnumerator addr 0x290f950 size 0x98 virtual false final false
  inline ::System::Collections::IEnumerator* GetEnumerator();

  /// @brief Method InternalSort addr 0x290f3cc size 0x25c virtual false final false
  inline void InternalSort(::ArrayW<::StringW, ::Array<::StringW>*> names);

  /// @brief Method InternalSort addr 0x290fa1c size 0x78 virtual false final false
  inline void InternalSort(::System::Collections::IComparer* sorter);

  /// @brief Method System.Collections.ICollection.get_IsSynchronized addr 0x290fa94 size 0x8 virtual true final true
  inline bool System_Collections_ICollection_get_IsSynchronized();

  /// @brief Method System.Collections.ICollection.get_SyncRoot addr 0x290fa9c size 0x8 virtual true final true
  inline ::System::Object* System_Collections_ICollection_get_SyncRoot();

  /// @brief Method System.Collections.ICollection.get_Count addr 0x290faa4 size 0x8 virtual true final true
  inline int32_t System_Collections_ICollection_get_Count();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x290faac size 0x4 virtual true final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method System.Collections.IList.get_Item addr 0x290fab0 size 0x10 virtual true final true
  inline ::System::Object* System_Collections_IList_get_Item(int32_t index);

  /// @brief Method System.Collections.IList.set_Item addr 0x290fac0 size 0x178 virtual true final true
  inline void System_Collections_IList_set_Item(int32_t index, ::System::Object* value);

  /// @brief Method System.Collections.IList.Add addr 0x290fc38 size 0x84 virtual true final true
  inline int32_t System_Collections_IList_Add(::System::Object* value);

  /// @brief Method System.Collections.IList.Contains addr 0x290fcbc size 0x90 virtual true final true
  inline bool System_Collections_IList_Contains(::System::Object* value);

  /// @brief Method System.Collections.IList.Clear addr 0x290fd4c size 0x4 virtual true final true
  inline void System_Collections_IList_Clear();

  /// @brief Method System.Collections.IList.IndexOf addr 0x290fd50 size 0x84 virtual true final true
  inline int32_t System_Collections_IList_IndexOf(::System::Object* value);

  /// @brief Method System.Collections.IList.Insert addr 0x290fdd4 size 0x94 virtual true final true
  inline void System_Collections_IList_Insert(int32_t index, ::System::Object* value);

  /// @brief Method System.Collections.IList.Remove addr 0x290fe68 size 0x84 virtual true final true
  inline void System_Collections_IList_Remove(::System::Object* value);

  /// @brief Method System.Collections.IList.RemoveAt addr 0x290feec size 0x4 virtual true final true
  inline void System_Collections_IList_RemoveAt(int32_t index);

  /// @brief Method System.Collections.IList.get_IsReadOnly addr 0x290fef0 size 0x8 virtual true final true
  inline bool System_Collections_IList_get_IsReadOnly();

  /// @brief Method System.Collections.IList.get_IsFixedSize addr 0x290fef8 size 0x8 virtual true final true
  inline bool System_Collections_IList_get_IsFixedSize();

  // Ctor Parameters [CppParam { name: "", ty: "EventDescriptorCollection", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EventDescriptorCollection(EventDescriptorCollection&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EventDescriptorCollection", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EventDescriptorCollection(EventDescriptorCollection const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EventDescriptorCollection();

public:
  /// @brief Field _events, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::System::ComponentModel::EventDescriptor*, ::Array<::System::ComponentModel::EventDescriptor*>*> ____events;

  /// @brief Field _namedSort, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::StringW, ::Array<::StringW>*> ____namedSort;

  /// @brief Field _comparer, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::IComparer* ____comparer;

  /// @brief Field _eventsOwned, offset: 0x28, size: 0x1, def value: None
  bool ____eventsOwned;

  /// @brief Field _needSort, offset: 0x29, size: 0x1, def value: None
  bool ____needSort;

  /// @brief Field _readOnly, offset: 0x2a, size: 0x1, def value: None
  bool ____readOnly;

  /// @brief Field <Count>k__BackingField, offset: 0x2c, size: 0x4, def value: None
  int32_t ____Count_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::EventDescriptorCollection, 0x30>, "Size mismatch!");

} // namespace System::ComponentModel
NEED_NO_BOX(::System::ComponentModel::EventDescriptorCollection);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::EventDescriptorCollection*, "System.ComponentModel", "EventDescriptorCollection");
NEED_NO_BOX(::System::ComponentModel::__EventDescriptorCollection__ArraySubsetEnumerator);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::__EventDescriptorCollection__ArraySubsetEnumerator*, "System.ComponentModel", "EventDescriptorCollection/ArraySubsetEnumerator");
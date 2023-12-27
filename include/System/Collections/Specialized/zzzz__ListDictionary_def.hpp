#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ListDictionary)
namespace System::Collections {
class IEnumerator;
}
namespace System {
class Object;
}
namespace System::Collections::Specialized {
class __ListDictionary__NodeKeyValueCollection;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IComparer;
}
namespace System::Collections {
class IDictionary;
}
namespace System::Collections::Specialized {
class __ListDictionary__DictionaryNode;
}
namespace System::Collections {
class ICollection;
}
namespace System {
class Array;
}
namespace System::Collections {
class IDictionaryEnumerator;
}
namespace System::Collections::Specialized {
class __ListDictionary__NodeEnumerator;
}
namespace System::Collections {
struct DictionaryEntry;
}
namespace GlobalNamespace {
class __ListDictionary__NodeKeyValueCollection__NodeKeyValueEnumerator;
}
// Forward declare root types
namespace GlobalNamespace {
class __ListDictionary__NodeKeyValueCollection__NodeKeyValueEnumerator;
}
namespace System::Collections::Specialized {
class ListDictionary;
}
namespace System::Collections::Specialized {
class __ListDictionary__DictionaryNode;
}
namespace System::Collections::Specialized {
class __ListDictionary__NodeEnumerator;
}
namespace System::Collections::Specialized {
class __ListDictionary__NodeKeyValueCollection;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::__ListDictionary__NodeKeyValueCollection__NodeKeyValueEnumerator);
MARK_REF_PTR_T(::System::Collections::Specialized::ListDictionary);
MARK_REF_PTR_T(::System::Collections::Specialized::__ListDictionary__DictionaryNode);
MARK_REF_PTR_T(::System::Collections::Specialized::__ListDictionary__NodeEnumerator);
MARK_REF_PTR_T(::System::Collections::Specialized::__ListDictionary__NodeKeyValueCollection);
// Type: ::NodeEnumerator
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 37, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Collections::Specialized {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9508))
// CS Name: ::ListDictionary::NodeEnumerator*
class CORDL_TYPE __ListDictionary__NodeEnumerator : public ::System::Object {
public:
  // Declarations
  /// @brief Field _list, offset 0x10, size 0x8
  __declspec(property(get = __get__list, put = __set__list))::System::Collections::Specialized::ListDictionary* _list;

  /// @brief Field _current, offset 0x18, size 0x8
  __declspec(property(get = __get__current, put = __set__current))::System::Collections::Specialized::__ListDictionary__DictionaryNode* _current;

  /// @brief Field _version, offset 0x20, size 0x4
  __declspec(property(get = __get__version, put = __set__version)) int32_t _version;

  /// @brief Field _start, offset 0x24, size 0x1
  __declspec(property(get = __get__start, put = __set__start)) bool _start;

  __declspec(property(get = get_Current))::System::Object* Current;

  __declspec(property(get = get_Entry))::System::Collections::DictionaryEntry Entry;

  __declspec(property(get = get_Key))::System::Object* Key;

  __declspec(property(get = get_Value))::System::Object* Value;

  /// @brief Convert operator to "::System::Collections::IDictionaryEnumerator"
  constexpr operator ::System::Collections::IDictionaryEnumerator*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  constexpr ::System::Collections::Specialized::ListDictionary*& __get__list();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Specialized::ListDictionary*> const& __get__list() const;

  constexpr void __set__list(::System::Collections::Specialized::ListDictionary* value);

  constexpr ::System::Collections::Specialized::__ListDictionary__DictionaryNode*& __get__current();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Specialized::__ListDictionary__DictionaryNode*> const& __get__current() const;

  constexpr void __set__current(::System::Collections::Specialized::__ListDictionary__DictionaryNode* value);

  constexpr int32_t& __get__version();

  constexpr int32_t const& __get__version() const;

  constexpr void __set__version(int32_t value);

  constexpr bool& __get__start();

  constexpr bool const& __get__start() const;

  constexpr void __set__start(bool value);

  static inline ::System::Collections::Specialized::__ListDictionary__NodeEnumerator* New_ctor(::System::Collections::Specialized::ListDictionary* list);

  /// @brief Method .ctor addr 0x293c1e4 size 0x44 virtual false final false
  inline void _ctor(::System::Collections::Specialized::ListDictionary* list);

  /// @brief Method get_Current addr 0x293c420 size 0x64 virtual true final true
  inline ::System::Object* get_Current();

  /// @brief Method get_Entry addr 0x293c484 size 0x80 virtual true final true
  inline ::System::Collections::DictionaryEntry get_Entry();

  /// @brief Method get_Key addr 0x293c504 size 0x64 virtual true final true
  inline ::System::Object* get_Key();

  /// @brief Method get_Value addr 0x293c568 size 0x64 virtual true final true
  inline ::System::Object* get_Value();

  /// @brief Method MoveNext addr 0x293c5cc size 0xa0 virtual true final true
  inline bool MoveNext();

  /// @brief Method Reset addr 0x293c66c size 0x80 virtual true final true
  inline void Reset();

  // Ctor Parameters [CppParam { name: "", ty: "__ListDictionary__NodeEnumerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ListDictionary__NodeEnumerator(__ListDictionary__NodeEnumerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ListDictionary__NodeEnumerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ListDictionary__NodeEnumerator(__ListDictionary__NodeEnumerator const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ListDictionary__NodeEnumerator();

public:
  /// @brief Field _list, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Specialized::ListDictionary* ____list;

  /// @brief Field _current, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Specialized::__ListDictionary__DictionaryNode* ____current;

  /// @brief Field _version, offset: 0x20, size: 0x4, def value: None
  int32_t ____version;

  /// @brief Field _start, offset: 0x24, size: 0x1, def value: None
  bool ____start;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Collections::Specialized::__ListDictionary__NodeEnumerator, 0x28>, "Size mismatch!");

} // namespace System::Collections::Specialized
// Type: ::NodeKeyValueEnumerator
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 38, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9509))
// CS Name: ::ListDictionary::NodeKeyValueCollection::NodeKeyValueEnumerator*
class CORDL_TYPE __ListDictionary__NodeKeyValueCollection__NodeKeyValueEnumerator : public ::System::Object {
public:
  // Declarations
  /// @brief Field _list, offset 0x10, size 0x8
  __declspec(property(get = __get__list, put = __set__list))::System::Collections::Specialized::ListDictionary* _list;

  /// @brief Field _current, offset 0x18, size 0x8
  __declspec(property(get = __get__current, put = __set__current))::System::Collections::Specialized::__ListDictionary__DictionaryNode* _current;

  /// @brief Field _version, offset 0x20, size 0x4
  __declspec(property(get = __get__version, put = __set__version)) int32_t _version;

  /// @brief Field _isKeys, offset 0x24, size 0x1
  __declspec(property(get = __get__isKeys, put = __set__isKeys)) bool _isKeys;

  /// @brief Field _start, offset 0x25, size 0x1
  __declspec(property(get = __get__start, put = __set__start)) bool _start;

  __declspec(property(get = get_Current))::System::Object* Current;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  constexpr ::System::Collections::Specialized::ListDictionary*& __get__list();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Specialized::ListDictionary*> const& __get__list() const;

  constexpr void __set__list(::System::Collections::Specialized::ListDictionary* value);

  constexpr ::System::Collections::Specialized::__ListDictionary__DictionaryNode*& __get__current();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Specialized::__ListDictionary__DictionaryNode*> const& __get__current() const;

  constexpr void __set__current(::System::Collections::Specialized::__ListDictionary__DictionaryNode* value);

  constexpr int32_t& __get__version();

  constexpr int32_t const& __get__version() const;

  constexpr void __set__version(int32_t value);

  constexpr bool& __get__isKeys();

  constexpr bool const& __get__isKeys() const;

  constexpr void __set__isKeys(bool value);

  constexpr bool& __get__start();

  constexpr bool const& __get__start() const;

  constexpr void __set__start(bool value);

  static inline ::GlobalNamespace::__ListDictionary__NodeKeyValueCollection__NodeKeyValueEnumerator* New_ctor(::System::Collections::Specialized::ListDictionary* list, bool isKeys);

  /// @brief Method .ctor addr 0x293c908 size 0x4c virtual false final false
  inline void _ctor(::System::Collections::Specialized::ListDictionary* list, bool isKeys);

  /// @brief Method get_Current addr 0x293c954 size 0x78 virtual true final true
  inline ::System::Object* get_Current();

  /// @brief Method MoveNext addr 0x293c9cc size 0xa0 virtual true final true
  inline bool MoveNext();

  /// @brief Method Reset addr 0x293ca6c size 0x80 virtual true final true
  inline void Reset();

  // Ctor Parameters [CppParam { name: "", ty: "__ListDictionary__NodeKeyValueCollection__NodeKeyValueEnumerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ListDictionary__NodeKeyValueCollection__NodeKeyValueEnumerator(__ListDictionary__NodeKeyValueCollection__NodeKeyValueEnumerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ListDictionary__NodeKeyValueCollection__NodeKeyValueEnumerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ListDictionary__NodeKeyValueCollection__NodeKeyValueEnumerator(__ListDictionary__NodeKeyValueCollection__NodeKeyValueEnumerator const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ListDictionary__NodeKeyValueCollection__NodeKeyValueEnumerator();

public:
  /// @brief Field _list, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Specialized::ListDictionary* ____list;

  /// @brief Field _current, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Specialized::__ListDictionary__DictionaryNode* ____current;

  /// @brief Field _version, offset: 0x20, size: 0x4, def value: None
  int32_t ____version;

  /// @brief Field _isKeys, offset: 0x24, size: 0x1, def value: None
  bool ____isKeys;

  /// @brief Field _start, offset: 0x25, size: 0x1, def value: None
  bool ____start;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__ListDictionary__NodeKeyValueCollection__NodeKeyValueEnumerator, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::NodeKeyValueCollection
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 25, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Collections::Specialized {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9510))
// CS Name: ::ListDictionary::NodeKeyValueCollection*
class CORDL_TYPE __ListDictionary__NodeKeyValueCollection : public ::System::Object {
public:
  // Declarations
  using NodeKeyValueEnumerator = ::GlobalNamespace::__ListDictionary__NodeKeyValueCollection__NodeKeyValueEnumerator;

  /// @brief Field _list, offset 0x10, size 0x8
  __declspec(property(get = __get__list, put = __set__list))::System::Collections::Specialized::ListDictionary* _list;

  /// @brief Field _isKeys, offset 0x18, size 0x1
  __declspec(property(get = __get__isKeys, put = __set__isKeys)) bool _isKeys;

  __declspec(property(get = System_Collections_ICollection_get_Count)) int32_t System_Collections_ICollection_Count;

  __declspec(property(get = System_Collections_ICollection_get_IsSynchronized)) bool System_Collections_ICollection_IsSynchronized;

  __declspec(property(get = System_Collections_ICollection_get_SyncRoot))::System::Object* System_Collections_ICollection_SyncRoot;

  /// @brief Convert operator to "::System::Collections::ICollection"
  constexpr operator ::System::Collections::ICollection*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  constexpr ::System::Collections::Specialized::ListDictionary*& __get__list();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Specialized::ListDictionary*> const& __get__list() const;

  constexpr void __set__list(::System::Collections::Specialized::ListDictionary* value);

  constexpr bool& __get__isKeys();

  constexpr bool const& __get__isKeys() const;

  constexpr void __set__isKeys(bool value);

  static inline ::System::Collections::Specialized::__ListDictionary__NodeKeyValueCollection* New_ctor(::System::Collections::Specialized::ListDictionary* list, bool isKeys);

  /// @brief Method .ctor addr 0x293bb08 size 0x30 virtual false final false
  inline void _ctor(::System::Collections::Specialized::ListDictionary* list, bool isKeys);

  /// @brief Method System.Collections.ICollection.CopyTo addr 0x293c6ec size 0x14c virtual true final true
  inline void System_Collections_ICollection_CopyTo(::System::Array* array, int32_t index);

  /// @brief Method System.Collections.ICollection.get_Count addr 0x293c838 size 0x38 virtual true final true
  inline int32_t System_Collections_ICollection_get_Count();

  /// @brief Method System.Collections.ICollection.get_IsSynchronized addr 0x293c870 size 0x8 virtual true final true
  inline bool System_Collections_ICollection_get_IsSynchronized();

  /// @brief Method System.Collections.ICollection.get_SyncRoot addr 0x293c878 size 0x18 virtual true final true
  inline ::System::Object* System_Collections_ICollection_get_SyncRoot();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x293c890 size 0x78 virtual true final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  // Ctor Parameters [CppParam { name: "", ty: "__ListDictionary__NodeKeyValueCollection", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ListDictionary__NodeKeyValueCollection(__ListDictionary__NodeKeyValueCollection&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ListDictionary__NodeKeyValueCollection", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ListDictionary__NodeKeyValueCollection(__ListDictionary__NodeKeyValueCollection const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ListDictionary__NodeKeyValueCollection();

public:
  /// @brief Field _list, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Specialized::ListDictionary* ____list;

  /// @brief Field _isKeys, offset: 0x18, size: 0x1, def value: None
  bool ____isKeys;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Collections::Specialized::__ListDictionary__NodeKeyValueCollection, 0x20>, "Size mismatch!");

} // namespace System::Collections::Specialized
// Type: ::DictionaryNode
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Collections::Specialized {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9511))
// CS Name: ::ListDictionary::DictionaryNode*
class CORDL_TYPE __ListDictionary__DictionaryNode : public ::System::Object {
public:
  // Declarations
  /// @brief Field key, offset 0x10, size 0x8
  __declspec(property(get = __get_key, put = __set_key))::System::Object* key;

  /// @brief Field value, offset 0x18, size 0x8
  __declspec(property(get = __get_value, put = __set_value))::System::Object* value;

  /// @brief Field next, offset 0x20, size 0x8
  __declspec(property(get = __get_next, put = __set_next))::System::Collections::Specialized::__ListDictionary__DictionaryNode* next;

  constexpr ::System::Object*& __get_key();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __get_key() const;

  constexpr void __set_key(::System::Object* value);

  constexpr ::System::Object*& __get_value();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __get_value() const;

  constexpr void __set_value(::System::Object* value);

  constexpr ::System::Collections::Specialized::__ListDictionary__DictionaryNode*& __get_next();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Specialized::__ListDictionary__DictionaryNode*> const& __get_next() const;

  constexpr void __set_next(::System::Collections::Specialized::__ListDictionary__DictionaryNode* value);

  static inline ::System::Collections::Specialized::__ListDictionary__DictionaryNode* New_ctor();

  /// @brief Method .ctor addr 0x293ba8c size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__ListDictionary__DictionaryNode", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ListDictionary__DictionaryNode(__ListDictionary__DictionaryNode&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ListDictionary__DictionaryNode", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ListDictionary__DictionaryNode(__ListDictionary__DictionaryNode const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ListDictionary__DictionaryNode();

public:
  /// @brief Field key, offset: 0x10, size: 0x8, def value: None
  ::System::Object* ___key;

  /// @brief Field value, offset: 0x18, size: 0x8, def value: None
  ::System::Object* ___value;

  /// @brief Field next, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Specialized::__ListDictionary__DictionaryNode* ___next;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Collections::Specialized::__ListDictionary__DictionaryNode, 0x28>, "Size mismatch!");

} // namespace System::Collections::Specialized
// Type: System.Collections.Specialized::ListDictionary
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Collections::Specialized {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9512))
// CS Name: ::System.Collections.Specialized::ListDictionary*
class CORDL_TYPE ListDictionary : public ::System::Object {
public:
  // Declarations
  using DictionaryNode = ::System::Collections::Specialized::__ListDictionary__DictionaryNode;

  using NodeKeyValueCollection = ::System::Collections::Specialized::__ListDictionary__NodeKeyValueCollection;

  using NodeEnumerator = ::System::Collections::Specialized::__ListDictionary__NodeEnumerator;

  /// @brief Field head, offset 0x10, size 0x8
  __declspec(property(get = __get_head, put = __set_head))::System::Collections::Specialized::__ListDictionary__DictionaryNode* head;

  /// @brief Field version, offset 0x18, size 0x4
  __declspec(property(get = __get_version, put = __set_version)) int32_t version;

  /// @brief Field count, offset 0x1c, size 0x4
  __declspec(property(get = __get_count, put = __set_count)) int32_t count;

  /// @brief Field comparer, offset 0x20, size 0x8
  __declspec(property(get = __get_comparer, put = __set_comparer))::System::Collections::IComparer* comparer;

  /// @brief Field _syncRoot, offset 0x28, size 0x8
  __declspec(property(get = __get__syncRoot, put = __set__syncRoot))::System::Object* _syncRoot;

  __declspec(property(get = get_Item, put = set_Item))::System::Object* Item[];

  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = get_Keys))::System::Collections::ICollection* Keys;

  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_IsFixedSize)) bool IsFixedSize;

  __declspec(property(get = get_IsSynchronized)) bool IsSynchronized;

  __declspec(property(get = get_SyncRoot))::System::Object* SyncRoot;

  __declspec(property(get = get_Values))::System::Collections::ICollection* Values;

  /// @brief Convert operator to "::System::Collections::IDictionary"
  constexpr operator ::System::Collections::IDictionary*() noexcept;

  /// @brief Convert operator to "::System::Collections::ICollection"
  constexpr operator ::System::Collections::ICollection*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  constexpr ::System::Collections::Specialized::__ListDictionary__DictionaryNode*& __get_head();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Specialized::__ListDictionary__DictionaryNode*> const& __get_head() const;

  constexpr void __set_head(::System::Collections::Specialized::__ListDictionary__DictionaryNode* value);

  constexpr int32_t& __get_version();

  constexpr int32_t const& __get_version() const;

  constexpr void __set_version(int32_t value);

  constexpr int32_t& __get_count();

  constexpr int32_t const& __get_count() const;

  constexpr void __set_count(int32_t value);

  constexpr ::System::Collections::IComparer*& __get_comparer();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::IComparer*> const& __get_comparer() const;

  constexpr void __set_comparer(::System::Collections::IComparer* value);

  constexpr ::System::Object*& __get__syncRoot();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __get__syncRoot() const;

  constexpr void __set__syncRoot(::System::Object* value);

  static inline ::System::Collections::Specialized::ListDictionary* New_ctor();

  /// @brief Method .ctor addr 0x293b734 size 0x8 virtual false final false
  inline void _ctor();

  static inline ::System::Collections::Specialized::ListDictionary* New_ctor(::System::Collections::IComparer* comparer);

  /// @brief Method .ctor addr 0x293b73c size 0x28 virtual false final false
  inline void _ctor(::System::Collections::IComparer* comparer);

  /// @brief Method get_Item addr 0x293b764 size 0x164 virtual true final true
  inline ::System::Object* get_Item(::System::Object* key);

  /// @brief Method set_Item addr 0x293b8c8 size 0x1c4 virtual true final true
  inline void set_Item(::System::Object* key, ::System::Object* value);

  /// @brief Method get_Count addr 0x293ba94 size 0x8 virtual true final true
  inline int32_t get_Count();

  /// @brief Method get_Keys addr 0x293ba9c size 0x6c virtual true final true
  inline ::System::Collections::ICollection* get_Keys();

  /// @brief Method get_IsReadOnly addr 0x293bb38 size 0x8 virtual true final true
  inline bool get_IsReadOnly();

  /// @brief Method get_IsFixedSize addr 0x293bb40 size 0x8 virtual true final true
  inline bool get_IsFixedSize();

  /// @brief Method get_IsSynchronized addr 0x293bb48 size 0x8 virtual true final true
  inline bool get_IsSynchronized();

  /// @brief Method get_SyncRoot addr 0x293bb50 size 0x7c virtual true final true
  inline ::System::Object* get_SyncRoot();

  /// @brief Method get_Values addr 0x293bbcc size 0x68 virtual true final true
  inline ::System::Collections::ICollection* get_Values();

  /// @brief Method Add addr 0x293bc34 size 0x218 virtual true final true
  inline void Add(::System::Object* key, ::System::Object* value);

  /// @brief Method Clear addr 0x293be4c size 0x14 virtual true final true
  inline void Clear();

  /// @brief Method Contains addr 0x293be60 size 0x154 virtual true final true
  inline bool Contains(::System::Object* key);

  /// @brief Method CopyTo addr 0x293bfb4 size 0x1d0 virtual true final true
  inline void CopyTo(::System::Array* array, int32_t index);

  /// @brief Method GetEnumerator addr 0x293c184 size 0x60 virtual true final true
  inline ::System::Collections::IDictionaryEnumerator* GetEnumerator();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x293c228 size 0x60 virtual true final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method Remove addr 0x293c288 size 0x198 virtual true final true
  inline void Remove(::System::Object* key);

  // Ctor Parameters [CppParam { name: "", ty: "ListDictionary", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ListDictionary(ListDictionary&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ListDictionary", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ListDictionary(ListDictionary const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ListDictionary();

public:
  /// @brief Field head, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Specialized::__ListDictionary__DictionaryNode* ___head;

  /// @brief Field version, offset: 0x18, size: 0x4, def value: None
  int32_t ___version;

  /// @brief Field count, offset: 0x1c, size: 0x4, def value: None
  int32_t ___count;

  /// @brief Field comparer, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::IComparer* ___comparer;

  /// @brief Field _syncRoot, offset: 0x28, size: 0x8, def value: None
  ::System::Object* ____syncRoot;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Collections::Specialized::ListDictionary, 0x30>, "Size mismatch!");

} // namespace System::Collections::Specialized
NEED_NO_BOX(::GlobalNamespace::__ListDictionary__NodeKeyValueCollection__NodeKeyValueEnumerator);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__ListDictionary__NodeKeyValueCollection__NodeKeyValueEnumerator*, "System.Collections.Specialized",
                       "ListDictionary/NodeKeyValueCollection/NodeKeyValueEnumerator");
NEED_NO_BOX(::System::Collections::Specialized::ListDictionary);
DEFINE_IL2CPP_ARG_TYPE(::System::Collections::Specialized::ListDictionary*, "System.Collections.Specialized", "ListDictionary");
NEED_NO_BOX(::System::Collections::Specialized::__ListDictionary__DictionaryNode);
DEFINE_IL2CPP_ARG_TYPE(::System::Collections::Specialized::__ListDictionary__DictionaryNode*, "System.Collections.Specialized", "ListDictionary/DictionaryNode");
NEED_NO_BOX(::System::Collections::Specialized::__ListDictionary__NodeEnumerator);
DEFINE_IL2CPP_ARG_TYPE(::System::Collections::Specialized::__ListDictionary__NodeEnumerator*, "System.Collections.Specialized", "ListDictionary/NodeEnumerator");
NEED_NO_BOX(::System::Collections::Specialized::__ListDictionary__NodeKeyValueCollection);
DEFINE_IL2CPP_ARG_TYPE(::System::Collections::Specialized::__ListDictionary__NodeKeyValueCollection*, "System.Collections.Specialized", "ListDictionary/NodeKeyValueCollection");
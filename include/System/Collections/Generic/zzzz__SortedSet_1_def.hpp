#pragma once
// IWYU pragma private; include "System/Collections/Generic/SortedSet_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__ICollection_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyCollection_1_def.hpp"
#include "System/Collections/Generic/zzzz__ISet_1_def.hpp"
#include "System/Collections/Generic/zzzz__NodeColor_def.hpp"
#include "System/Collections/zzzz__ICollection_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Runtime/Serialization/zzzz__IDeserializationCallback_def.hpp"
#include "System/Runtime/Serialization/zzzz__ISerializable_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SortedSet_1)
namespace System::Collections::Generic {
template <typename T> class IComparer_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections::Generic {
struct NodeColor;
}
namespace System::Collections::Generic {
template <typename T> struct SortedSet_1_ElementCount;
}
namespace System::Collections::Generic {
template <typename T> struct SortedSet_1_Enumerator;
}
namespace System::Collections::Generic {
template <typename T> class SortedSet_1_Node;
}
namespace System::Collections::Generic {
template <typename T> class SortedSet_1___c__DisplayClass52_0;
}
namespace System::Collections::Generic {
template <typename T> class SortedSet_1___c__DisplayClass53_0;
}
namespace System::Collections::Generic {
template <typename T> class Stack_1;
}
namespace System::Collections::Generic {
struct TreeRotation;
}
namespace System::Collections::Generic {
template <typename T> class TreeWalkPredicate_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System {
class Array;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Collections::Generic {
template <typename T> class SortedSet_1;
}
namespace System::Collections::Generic {
template <typename T> class SortedSet_1_Node;
}
namespace System::Collections::Generic {
template <typename T> class SortedSet_1___c__DisplayClass52_0;
}
namespace System::Collections::Generic {
template <typename T> class SortedSet_1___c__DisplayClass53_0;
}
namespace System::Collections::Generic {
template <typename T> struct SortedSet_1_ElementCount;
}
namespace System::Collections::Generic {
template <typename T> struct SortedSet_1_Enumerator;
}
// Write type traits
MARK_GEN_REF_PTR_T(::System::Collections::Generic::SortedSet_1);
MARK_GEN_REF_PTR_T(::System::Collections::Generic::SortedSet_1_Node);
MARK_GEN_REF_PTR_T(::System::Collections::Generic::SortedSet_1___c__DisplayClass52_0);
MARK_GEN_REF_PTR_T(::System::Collections::Generic::SortedSet_1___c__DisplayClass53_0);
MARK_GEN_VAL_T(::System::Collections::Generic::SortedSet_1_ElementCount);
MARK_GEN_VAL_T(::System::Collections::Generic::SortedSet_1_Enumerator);
// Dependencies System.Collections.Generic.NodeColor, System.Object
namespace System::Collections::Generic {
// cpp template
template <typename T>
// Is value type: false
// CS Name: System.Collections.Generic.SortedSet`1/Node<T>
class CORDL_TYPE SortedSet_1_Node : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Color, put = set_Color)) ::System::Collections::Generic::NodeColor Color;

  __declspec(property(get = get_Is2Node)) bool Is2Node;

  __declspec(property(get = get_Is4Node)) bool Is4Node;

  __declspec(property(get = get_IsBlack)) bool IsBlack;

  __declspec(property(get = get_IsRed)) bool IsRed;

  __declspec(property(get = get_Item, put = set_Item)) T Item;

  __declspec(property(get = get_Left, put = set_Left)) ::System::Collections::Generic::SortedSet_1_Node<T>* Left;

  __declspec(property(get = get_Right, put = set_Right)) ::System::Collections::Generic::SortedSet_1_Node<T>* Right;

  /// @brief Field <Color>k__BackingField, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get__Color_k__BackingField, put = __cordl_internal_set__Color_k__BackingField)) ::System::Collections::Generic::NodeColor _Color_k__BackingField;

  /// @brief Field <Item>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__Item_k__BackingField, put = __cordl_internal_set__Item_k__BackingField)) T _Item_k__BackingField;

  /// @brief Field <Left>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__Left_k__BackingField, put = __cordl_internal_set__Left_k__BackingField)) ::System::Collections::Generic::SortedSet_1_Node<T>* _Left_k__BackingField;

  /// @brief Field <Right>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__Right_k__BackingField,
                      put = __cordl_internal_set__Right_k__BackingField)) ::System::Collections::Generic::SortedSet_1_Node<T>* _Right_k__BackingField;

  /// @brief Method ColorBlack, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void ColorBlack();

  /// @brief Method ColorRed, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void ColorRed();

  /// @brief Method GetRotation, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::TreeRotation GetRotation(::System::Collections::Generic::SortedSet_1_Node<T>* current, ::System::Collections::Generic::SortedSet_1_Node<T>* sibling);

  /// @brief Method GetSibling, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::SortedSet_1_Node<T>* GetSibling(::System::Collections::Generic::SortedSet_1_Node<T>* node);

  /// @brief Method IsNonNullRed, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline bool IsNonNullRed(::System::Collections::Generic::SortedSet_1_Node<T>* node);

  /// @brief Method IsNullOrBlack, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline bool IsNullOrBlack(::System::Collections::Generic::SortedSet_1_Node<T>* node);

  /// @brief Method Merge2Nodes, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Merge2Nodes();

  static inline ::System::Collections::Generic::SortedSet_1_Node<T>* New_ctor(T item, ::System::Collections::Generic::NodeColor color);

  /// @brief Method ReplaceChild, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void ReplaceChild(::System::Collections::Generic::SortedSet_1_Node<T>* child, ::System::Collections::Generic::SortedSet_1_Node<T>* newChild);

  /// @brief Method Rotate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::SortedSet_1_Node<T>* Rotate(::System::Collections::Generic::TreeRotation rotation);

  /// @brief Method RotateLeft, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::SortedSet_1_Node<T>* RotateLeft();

  /// @brief Method RotateLeftRight, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::SortedSet_1_Node<T>* RotateLeftRight();

  /// @brief Method RotateRight, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::SortedSet_1_Node<T>* RotateRight();

  /// @brief Method RotateRightLeft, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::SortedSet_1_Node<T>* RotateRightLeft();

  /// @brief Method Split4Node, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Split4Node();

  constexpr ::System::Collections::Generic::NodeColor const& __cordl_internal_get__Color_k__BackingField() const;

  constexpr ::System::Collections::Generic::NodeColor& __cordl_internal_get__Color_k__BackingField();

  constexpr T const& __cordl_internal_get__Item_k__BackingField() const;

  constexpr T& __cordl_internal_get__Item_k__BackingField();

  constexpr ::System::Collections::Generic::SortedSet_1_Node<T>* const& __cordl_internal_get__Left_k__BackingField() const;

  constexpr ::System::Collections::Generic::SortedSet_1_Node<T>*& __cordl_internal_get__Left_k__BackingField();

  constexpr ::System::Collections::Generic::SortedSet_1_Node<T>* const& __cordl_internal_get__Right_k__BackingField() const;

  constexpr ::System::Collections::Generic::SortedSet_1_Node<T>*& __cordl_internal_get__Right_k__BackingField();

  constexpr void __cordl_internal_set__Color_k__BackingField(::System::Collections::Generic::NodeColor value);

  constexpr void __cordl_internal_set__Item_k__BackingField(T value);

  constexpr void __cordl_internal_set__Left_k__BackingField(::System::Collections::Generic::SortedSet_1_Node<T>* value);

  constexpr void __cordl_internal_set__Right_k__BackingField(::System::Collections::Generic::SortedSet_1_Node<T>* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(T item, ::System::Collections::Generic::NodeColor color);

  /// @brief Method get_Color, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::NodeColor get_Color();

  /// @brief Method get_Is2Node, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool get_Is2Node();

  /// @brief Method get_Is4Node, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool get_Is4Node();

  /// @brief Method get_IsBlack, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool get_IsBlack();

  /// @brief Method get_IsRed, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool get_IsRed();

  /// @brief Method get_Item, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline T get_Item();

  /// @brief Method get_Left, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::SortedSet_1_Node<T>* get_Left();

  /// @brief Method get_Right, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::SortedSet_1_Node<T>* get_Right();

  /// @brief Method set_Color, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_Color(::System::Collections::Generic::NodeColor value);

  /// @brief Method set_Item, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_Item(T value);

  /// @brief Method set_Left, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_Left(::System::Collections::Generic::SortedSet_1_Node<T>* value);

  /// @brief Method set_Right, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_Right(::System::Collections::Generic::SortedSet_1_Node<T>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SortedSet_1_Node();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SortedSet_1_Node", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SortedSet_1_Node(SortedSet_1_Node&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SortedSet_1_Node", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SortedSet_1_Node(SortedSet_1_Node const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9519 };

  /// @brief Field <Item>k__BackingField, offset: 0x10, size: 0x8, def value: None
  T ____Item_k__BackingField;

  /// @brief Field <Left>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::SortedSet_1_Node<T>* ____Left_k__BackingField;

  /// @brief Field <Right>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::SortedSet_1_Node<T>* ____Right_k__BackingField;

  /// @brief Field <Color>k__BackingField, offset: 0x28, size: 0x1, def value: None
  ::System::Collections::Generic::NodeColor ____Color_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Collections::Generic
// Dependencies System.Collections.Generic.IEnumerator`1<T>, System.Collections.IEnumerator, System.IDisposable, System.Runtime.Serialization.IDeserializationCallback,
// System.Runtime.Serialization.ISerializable
namespace System::Collections::Generic {
// cpp template
template <typename T>
// Is value type: true
// CS Name: System.Collections.Generic.SortedSet`1/Enumerator<T>
struct CORDL_TYPE SortedSet_1_Enumerator {
public:
  // Declarations
  __declspec(property(get = get_Current)) T Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field s_dummyNode, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_dummyNode, put = setStaticF_s_dummyNode)) ::System::Collections::Generic::SortedSet_1_Node<T>* s_dummyNode;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<T>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<T>*();

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*();

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*();

  /// @brief Convert operator to "::System::Runtime::Serialization::IDeserializationCallback"
  constexpr operator ::System::Runtime::Serialization::IDeserializationCallback*();

  /// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
  constexpr operator ::System::Runtime::Serialization::ISerializable*();

  /// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Initialize, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Initialize();

  /// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool MoveNext();

  /// @brief Method Reset, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Reset();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.Runtime.Serialization.IDeserializationCallback.OnDeserialization, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void System_Runtime_Serialization_IDeserializationCallback_OnDeserialization(::System::Object* sender);

  /// @brief Method System.Runtime.Serialization.ISerializable.GetObjectData, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::SortedSet_1<T>* set);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::SortedSet_1<T>* set, bool reverse);

  static inline ::System::Collections::Generic::SortedSet_1_Node<T>* getStaticF_s_dummyNode();

  /// @brief Method get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline T get_Current();

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<T>"
  constexpr ::System::Collections::Generic::IEnumerator_1<T>* i___System__Collections__Generic__IEnumerator_1_T_();

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable();

  /// @brief Convert to "::System::Runtime::Serialization::IDeserializationCallback"
  constexpr ::System::Runtime::Serialization::IDeserializationCallback* i___System__Runtime__Serialization__IDeserializationCallback();

  /// @brief Convert to "::System::Runtime::Serialization::ISerializable"
  constexpr ::System::Runtime::Serialization::ISerializable* i___System__Runtime__Serialization__ISerializable();

  static inline void setStaticF_s_dummyNode(::System::Collections::Generic::SortedSet_1_Node<T>* value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr SortedSet_1_Enumerator();

  // Ctor Parameters [CppParam { name: "_tree", ty: "::System::Collections::Generic::SortedSet_1<T>*", modifiers: "", def_value: None }, CppParam { name: "_version", ty: "int32_t", modifiers: "",
  // def_value: None }, CppParam { name: "_stack", ty: "::System::Collections::Generic::Stack_1<::System::Collections::Generic::SortedSet_1_Node<T>*>*", modifiers: "", def_value: None }, CppParam {
  // name: "_current", ty: "::System::Collections::Generic::SortedSet_1_Node<T>*", modifiers: "", def_value: None }, CppParam { name: "_reverse", ty: "bool", modifiers: "", def_value: None }]
  constexpr SortedSet_1_Enumerator(::System::Collections::Generic::SortedSet_1<T>* _tree, int32_t _version,
                                   ::System::Collections::Generic::Stack_1<::System::Collections::Generic::SortedSet_1_Node<T>*>* _stack, ::System::Collections::Generic::SortedSet_1_Node<T>* _current,
                                   bool _reverse) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9520 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x28 };

  /// @brief Field _tree, offset: 0x0, size: 0x8, def value: None
  ::System::Collections::Generic::SortedSet_1<T>* _tree;

  /// @brief Field _version, offset: 0x8, size: 0x4, def value: None
  int32_t _version;

  /// @brief Field _stack, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::Stack_1<::System::Collections::Generic::SortedSet_1_Node<T>*>* _stack;

  /// @brief Field _current, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::SortedSet_1_Node<T>* _current;

  /// @brief Field _reverse, offset: 0x20, size: 0x1, def value: None
  bool _reverse;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace System::Collections::Generic
// Dependencies
namespace System::Collections::Generic {
// cpp template
template <typename T>
// Is value type: true
// CS Name: System.Collections.Generic.SortedSet`1/ElementCount<T>
struct CORDL_TYPE SortedSet_1_ElementCount {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr SortedSet_1_ElementCount();

  // Ctor Parameters [CppParam { name: "UniqueCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "UnfoundCount", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr SortedSet_1_ElementCount(int32_t UniqueCount, int32_t UnfoundCount) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9521 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field UniqueCount, offset: 0x0, size: 0x4, def value: None
  int32_t UniqueCount;

  /// @brief Field UnfoundCount, offset: 0x4, size: 0x4, def value: None
  int32_t UnfoundCount;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace System::Collections::Generic
// Dependencies System.Object
namespace System::Collections::Generic {
// cpp template
template <typename T>
// Is value type: false
// CS Name: System.Collections.Generic.SortedSet`1/<>c__DisplayClass52_0<T>
class CORDL_TYPE SortedSet_1___c__DisplayClass52_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field array, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_array, put = __cordl_internal_set_array)) ::ArrayW<T, ::Array<T>*> array;

  /// @brief Field count, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_count, put = __cordl_internal_set_count)) int32_t count;

  /// @brief Field index, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_index, put = __cordl_internal_set_index)) int32_t index;

  static inline ::System::Collections::Generic::SortedSet_1___c__DisplayClass52_0<T>* New_ctor();

  /// @brief Method <CopyTo>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool _CopyTo_b__0(::System::Collections::Generic::SortedSet_1_Node<T>* node);

  constexpr ::ArrayW<T, ::Array<T>*> const& __cordl_internal_get_array() const;

  constexpr ::ArrayW<T, ::Array<T>*>& __cordl_internal_get_array();

  constexpr int32_t const& __cordl_internal_get_count() const;

  constexpr int32_t& __cordl_internal_get_count();

  constexpr int32_t const& __cordl_internal_get_index() const;

  constexpr int32_t& __cordl_internal_get_index();

  constexpr void __cordl_internal_set_array(::ArrayW<T, ::Array<T>*> value);

  constexpr void __cordl_internal_set_count(int32_t value);

  constexpr void __cordl_internal_set_index(int32_t value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SortedSet_1___c__DisplayClass52_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SortedSet_1___c__DisplayClass52_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SortedSet_1___c__DisplayClass52_0(SortedSet_1___c__DisplayClass52_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SortedSet_1___c__DisplayClass52_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SortedSet_1___c__DisplayClass52_0(SortedSet_1___c__DisplayClass52_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9522 };

  /// @brief Field index, offset: 0x10, size: 0x4, def value: None
  int32_t ___index;

  /// @brief Field count, offset: 0x14, size: 0x4, def value: None
  int32_t ___count;

  /// @brief Field array, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<T, ::Array<T>*> ___array;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Collections::Generic
// Dependencies System.Object
namespace System::Collections::Generic {
// cpp template
template <typename T>
// Is value type: false
// CS Name: System.Collections.Generic.SortedSet`1/<>c__DisplayClass53_0<T>
class CORDL_TYPE SortedSet_1___c__DisplayClass53_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field index, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_index, put = __cordl_internal_set_index)) int32_t index;

  /// @brief Field objects, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_objects, put = __cordl_internal_set_objects)) ::ArrayW<::System::Object*, ::Array<::System::Object*>*> objects;

  static inline ::System::Collections::Generic::SortedSet_1___c__DisplayClass53_0<T>* New_ctor();

  /// @brief Method <System.Collections.ICollection.CopyTo>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool _System_Collections_ICollection_CopyTo_b__0(::System::Collections::Generic::SortedSet_1_Node<T>* node);

  constexpr int32_t const& __cordl_internal_get_index() const;

  constexpr int32_t& __cordl_internal_get_index();

  constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*> const& __cordl_internal_get_objects() const;

  constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*>& __cordl_internal_get_objects();

  constexpr void __cordl_internal_set_index(int32_t value);

  constexpr void __cordl_internal_set_objects(::ArrayW<::System::Object*, ::Array<::System::Object*>*> value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SortedSet_1___c__DisplayClass53_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SortedSet_1___c__DisplayClass53_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SortedSet_1___c__DisplayClass53_0(SortedSet_1___c__DisplayClass53_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SortedSet_1___c__DisplayClass53_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SortedSet_1___c__DisplayClass53_0(SortedSet_1___c__DisplayClass53_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9523 };

  /// @brief Field index, offset: 0x10, size: 0x4, def value: None
  int32_t ___index;

  /// @brief Field objects, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::System::Object*, ::Array<::System::Object*>*> ___objects;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Collections::Generic
// Dependencies System.Collections.Generic.ICollection`1<T>, System.Collections.Generic.IEnumerable`1<T>, System.Collections.Generic.IReadOnlyCollection`1<T>, System.Collections.Generic.ISet`1<T>,
// System.Collections.ICollection, System.Collections.IEnumerable, System.Object, System.Runtime.Serialization.IDeserializationCallback, System.Runtime.Serialization.ISerializable
namespace System::Collections::Generic {
// cpp template
template <typename T>
// Is value type: false
// CS Name: System.Collections.Generic.SortedSet`1<T>
class CORDL_TYPE SortedSet_1 : public ::System::Object {
public:
  // Declarations
  using ElementCount = ::System::Collections::Generic::SortedSet_1_ElementCount<T>;

  using Enumerator = ::System::Collections::Generic::SortedSet_1_Enumerator<T>;

  using Node = ::System::Collections::Generic::SortedSet_1_Node<T>;

  using __c__DisplayClass52_0 = ::System::Collections::Generic::SortedSet_1___c__DisplayClass52_0<T>;

  using __c__DisplayClass53_0 = ::System::Collections::Generic::SortedSet_1___c__DisplayClass53_0<T>;

  __declspec(property(get = get_Comparer)) ::System::Collections::Generic::IComparer_1<T>* Comparer;

  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = System_Collections_Generic_ICollection_T__get_IsReadOnly)) bool System_Collections_Generic_ICollection_T__IsReadOnly;

  __declspec(property(get = System_Collections_ICollection_get_IsSynchronized)) bool System_Collections_ICollection_IsSynchronized;

  __declspec(property(get = System_Collections_ICollection_get_SyncRoot)) ::System::Object* System_Collections_ICollection_SyncRoot;

  /// @brief Field _syncRoot, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__syncRoot, put = __cordl_internal_set__syncRoot)) ::System::Object* _syncRoot;

  /// @brief Field comparer, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_comparer, put = __cordl_internal_set_comparer)) ::System::Collections::Generic::IComparer_1<T>* comparer;

  /// @brief Field count, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_count, put = __cordl_internal_set_count)) int32_t count;

  /// @brief Field root, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_root, put = __cordl_internal_set_root)) ::System::Collections::Generic::SortedSet_1_Node<T>* root;

  /// @brief Field siInfo, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_siInfo, put = __cordl_internal_set_siInfo)) ::System::Runtime::Serialization::SerializationInfo* siInfo;

  /// @brief Field version, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_version, put = __cordl_internal_set_version)) int32_t version;

  /// @brief Convert operator to "::System::Collections::Generic::ICollection_1<T>"
  constexpr operator ::System::Collections::Generic::ICollection_1<T>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<T>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<T>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IReadOnlyCollection_1<T>"
  constexpr operator ::System::Collections::Generic::IReadOnlyCollection_1<T>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::ISet_1<T>"
  constexpr operator ::System::Collections::Generic::ISet_1<T>*() noexcept;

  /// @brief Convert operator to "::System::Collections::ICollection"
  constexpr operator ::System::Collections::ICollection*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::System::Runtime::Serialization::IDeserializationCallback"
  constexpr operator ::System::Runtime::Serialization::IDeserializationCallback*() noexcept;

  /// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
  constexpr operator ::System::Runtime::Serialization::ISerializable*() noexcept;

  /// @brief Method Add, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool Add(T item);

  /// @brief Method AddIfNotPresent, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool AddIfNotPresent(T item);

  /// @brief Method CheckUniqueAndUnfoundElements, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::SortedSet_1_ElementCount<T> CheckUniqueAndUnfoundElements(::System::Collections::Generic::IEnumerable_1<T>* other, bool returnIfUnfound);

  /// @brief Method Clear, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Clear();

  /// @brief Method Contains, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool Contains(T item);

  /// @brief Method CopyTo, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void CopyTo(::ArrayW<T, ::Array<T>*> array, int32_t index);

  /// @brief Method CopyTo, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void CopyTo(::ArrayW<T, ::Array<T>*> array, int32_t index, int32_t count);

  /// @brief Method DoRemove, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool DoRemove(T item);

  /// @brief Method FindNode, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::SortedSet_1_Node<T>* FindNode(T item);

  /// @brief Method GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::SortedSet_1_Enumerator<T> GetEnumerator();

  /// @brief Method GetObjectData, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method HasEqualComparer, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool HasEqualComparer(::System::Collections::Generic::SortedSet_1<T>* other);

  /// @brief Method InOrderTreeWalk, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool InOrderTreeWalk(::System::Collections::Generic::TreeWalkPredicate_1<T>* action);

  /// @brief Method InsertionBalance, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void InsertionBalance(::System::Collections::Generic::SortedSet_1_Node<T>* current, ::ByRef<::System::Collections::Generic::SortedSet_1_Node<T>*> parent,
                               ::System::Collections::Generic::SortedSet_1_Node<T>* grandParent, ::System::Collections::Generic::SortedSet_1_Node<T>* greatGrandParent);

  /// @brief Method InternalIndexOf, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int32_t InternalIndexOf(T item);

  /// @brief Method IsWithinRange, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool IsWithinRange(T item);

  /// @brief Method Log2, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline int32_t Log2(int32_t value);

  static inline ::System::Collections::Generic::SortedSet_1<T>* New_ctor();

  static inline ::System::Collections::Generic::SortedSet_1<T>* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method OnDeserialization, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void OnDeserialization(::System::Object* sender);

  /// @brief Method Remove, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool Remove(T item);

  /// @brief Method ReplaceChildOrRoot, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void ReplaceChildOrRoot(::System::Collections::Generic::SortedSet_1_Node<T>* parent, ::System::Collections::Generic::SortedSet_1_Node<T>* child,
                                 ::System::Collections::Generic::SortedSet_1_Node<T>* newChild);

  /// @brief Method ReplaceNode, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void ReplaceNode(::System::Collections::Generic::SortedSet_1_Node<T>* match, ::System::Collections::Generic::SortedSet_1_Node<T>* parentOfMatch,
                          ::System::Collections::Generic::SortedSet_1_Node<T>* successor, ::System::Collections::Generic::SortedSet_1_Node<T>* parentOfSuccessor);

  /// @brief Method SetEquals, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool SetEquals(::System::Collections::Generic::IEnumerable_1<T>* other);

  /// @brief Method System.Collections.Generic.ICollection<T>.Add, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void System_Collections_Generic_ICollection_T__Add(T item);

  /// @brief Method System.Collections.Generic.ICollection<T>.get_IsReadOnly, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool System_Collections_Generic_ICollection_T__get_IsReadOnly();

  /// @brief Method System.Collections.Generic.IEnumerable<T>.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<T>* System_Collections_Generic_IEnumerable_T__GetEnumerator();

  /// @brief Method System.Collections.ICollection.CopyTo, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void System_Collections_ICollection_CopyTo(::System::Array* array, int32_t index);

  /// @brief Method System.Collections.ICollection.get_IsSynchronized, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool System_Collections_ICollection_get_IsSynchronized();

  /// @brief Method System.Collections.ICollection.get_SyncRoot, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_ICollection_get_SyncRoot();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method System.Runtime.Serialization.IDeserializationCallback.OnDeserialization, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void System_Runtime_Serialization_IDeserializationCallback_OnDeserialization(::System::Object* sender);

  /// @brief Method System.Runtime.Serialization.ISerializable.GetObjectData, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method VersionCheck, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void VersionCheck();

  constexpr ::System::Object* const& __cordl_internal_get__syncRoot() const;

  constexpr ::System::Object*& __cordl_internal_get__syncRoot();

  constexpr ::System::Collections::Generic::IComparer_1<T>* const& __cordl_internal_get_comparer() const;

  constexpr ::System::Collections::Generic::IComparer_1<T>*& __cordl_internal_get_comparer();

  constexpr int32_t const& __cordl_internal_get_count() const;

  constexpr int32_t& __cordl_internal_get_count();

  constexpr ::System::Collections::Generic::SortedSet_1_Node<T>* const& __cordl_internal_get_root() const;

  constexpr ::System::Collections::Generic::SortedSet_1_Node<T>*& __cordl_internal_get_root();

  constexpr ::System::Runtime::Serialization::SerializationInfo* const& __cordl_internal_get_siInfo() const;

  constexpr ::System::Runtime::Serialization::SerializationInfo*& __cordl_internal_get_siInfo();

  constexpr int32_t const& __cordl_internal_get_version() const;

  constexpr int32_t& __cordl_internal_get_version();

  constexpr void __cordl_internal_set__syncRoot(::System::Object* value);

  constexpr void __cordl_internal_set_comparer(::System::Collections::Generic::IComparer_1<T>* value);

  constexpr void __cordl_internal_set_count(int32_t value);

  constexpr void __cordl_internal_set_root(::System::Collections::Generic::SortedSet_1_Node<T>* value);

  constexpr void __cordl_internal_set_siInfo(::System::Runtime::Serialization::SerializationInfo* value);

  constexpr void __cordl_internal_set_version(int32_t value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method get_Comparer, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IComparer_1<T>* get_Comparer();

  /// @brief Method get_Count, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline int32_t get_Count();

  /// @brief Convert to "::System::Collections::Generic::ICollection_1<T>"
  constexpr ::System::Collections::Generic::ICollection_1<T>* i___System__Collections__Generic__ICollection_1_T_() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<T>"
  constexpr ::System::Collections::Generic::IEnumerable_1<T>* i___System__Collections__Generic__IEnumerable_1_T_() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IReadOnlyCollection_1<T>"
  constexpr ::System::Collections::Generic::IReadOnlyCollection_1<T>* i___System__Collections__Generic__IReadOnlyCollection_1_T_() noexcept;

  /// @brief Convert to "::System::Collections::Generic::ISet_1<T>"
  constexpr ::System::Collections::Generic::ISet_1<T>* i___System__Collections__Generic__ISet_1_T_() noexcept;

  /// @brief Convert to "::System::Collections::ICollection"
  constexpr ::System::Collections::ICollection* i___System__Collections__ICollection() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Convert to "::System::Runtime::Serialization::IDeserializationCallback"
  constexpr ::System::Runtime::Serialization::IDeserializationCallback* i___System__Runtime__Serialization__IDeserializationCallback() noexcept;

  /// @brief Convert to "::System::Runtime::Serialization::ISerializable"
  constexpr ::System::Runtime::Serialization::ISerializable* i___System__Runtime__Serialization__ISerializable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SortedSet_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SortedSet_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SortedSet_1(SortedSet_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SortedSet_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SortedSet_1(SortedSet_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9524 };

  /// @brief Field root, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::SortedSet_1_Node<T>* ___root;

  /// @brief Field comparer, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::IComparer_1<T>* ___comparer;

  /// @brief Field count, offset: 0x20, size: 0x4, def value: None
  int32_t ___count;

  /// @brief Field version, offset: 0x24, size: 0x4, def value: None
  int32_t ___version;

  /// @brief Field _syncRoot, offset: 0x28, size: 0x8, def value: None
  ::System::Object* ____syncRoot;

  /// @brief Field siInfo, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::Serialization::SerializationInfo* ___siInfo;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Collections::Generic
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Collections::Generic::SortedSet_1, "System.Collections.Generic", "SortedSet`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Collections::Generic::SortedSet_1_Node, "System.Collections.Generic", "SortedSet`1/Node");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Collections::Generic::SortedSet_1___c__DisplayClass52_0, "System.Collections.Generic", "SortedSet`1/<>c__DisplayClass52_0");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Collections::Generic::SortedSet_1___c__DisplayClass53_0, "System.Collections.Generic", "SortedSet`1/<>c__DisplayClass53_0");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::System::Collections::Generic::SortedSet_1_ElementCount, "System.Collections.Generic", "SortedSet`1/ElementCount");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::System::Collections::Generic::SortedSet_1_Enumerator, "System.Collections.Generic", "SortedSet`1/Enumerator");

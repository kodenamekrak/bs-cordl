#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SharedVertex)
namespace System::Collections {
class IEnumerator;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class ICollection_1;
}
namespace UnityEngine::ProBuilder {
class __SharedVertex____c;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> struct KeyValuePair_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine {
struct Vector3;
}
namespace System::Collections::Generic {
template <typename T> class IList_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
// Forward declare root types
namespace UnityEngine::ProBuilder {
class SharedVertex;
}
namespace UnityEngine::ProBuilder {
class __SharedVertex____c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ProBuilder::SharedVertex);
MARK_REF_PTR_T(::UnityEngine::ProBuilder::__SharedVertex____c);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::ProBuilder {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12199))
// CS Name: ::SharedVertex::<>c*
class CORDL_TYPE __SharedVertex____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::UnityEngine::ProBuilder::__SharedVertex____c* __9;

  /// @brief Field <>9__26_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__26_0, put = setStaticF___9__26_0))::System::Func_2<::System::Collections::Generic::KeyValuePair_2<int32_t, int32_t>, bool>* __9__26_0;

  static inline void setStaticF___9(::UnityEngine::ProBuilder::__SharedVertex____c* value);

  static inline ::UnityEngine::ProBuilder::__SharedVertex____c* getStaticF___9();

  static inline void setStaticF___9__26_0(::System::Func_2<::System::Collections::Generic::KeyValuePair_2<int32_t, int32_t>, bool>* value);

  static inline ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<int32_t, int32_t>, bool>* getStaticF___9__26_0();

  static inline ::UnityEngine::ProBuilder::__SharedVertex____c* New_ctor();

  /// @brief Method .ctor addr 0x2b784ec size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <SortedRemoveAndShift>b__26_0 addr 0x2b784f4 size 0x40 virtual false final false
  inline bool _SortedRemoveAndShift_b__26_0(::System::Collections::Generic::KeyValuePair_2<int32_t, int32_t> x);

  // Ctor Parameters [CppParam { name: "", ty: "__SharedVertex____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __SharedVertex____c(__SharedVertex____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__SharedVertex____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __SharedVertex____c(__SharedVertex____c const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __SharedVertex____c();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::__SharedVertex____c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::ProBuilder
// Type: UnityEngine.ProBuilder::SharedVertex
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::ProBuilder {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12200))
// CS Name: ::UnityEngine.ProBuilder::SharedVertex*
class CORDL_TYPE SharedVertex : public ::System::Object {
public:
  // Declarations
  using __c = ::UnityEngine::ProBuilder::__SharedVertex____c;

  /// @brief Field m_Vertices, offset 0x10, size 0x8
  __declspec(property(get = __get_m_Vertices, put = __set_m_Vertices))::ArrayW<int32_t, ::Array<int32_t>*> m_Vertices;

  __declspec(property(get = get_arrayInternal))::ArrayW<int32_t, ::Array<int32_t>*> arrayInternal;

  __declspec(property(get = get_Item, put = set_Item)) int32_t Item[];

  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  /// @brief Convert operator to "::System::Collections::Generic::ICollection_1<int32_t>"
  constexpr operator ::System::Collections::Generic::ICollection_1<int32_t>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<int32_t>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<int32_t>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __get_m_Vertices();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __get_m_Vertices() const;

  constexpr void __set_m_Vertices(::ArrayW<int32_t, ::Array<int32_t>*> value);

  /// @brief Method get_arrayInternal addr 0x2b76c9c size 0x8 virtual false final false
  inline ::ArrayW<int32_t, ::Array<int32_t>*> get_arrayInternal();

  static inline ::UnityEngine::ProBuilder::SharedVertex* New_ctor(::System::Collections::Generic::IEnumerable_1<int32_t>* indexes);

  /// @brief Method .ctor addr 0x2b75f94 size 0xb0 virtual false final false
  inline void _ctor(::System::Collections::Generic::IEnumerable_1<int32_t>* indexes);

  static inline ::UnityEngine::ProBuilder::SharedVertex* New_ctor(::UnityEngine::ProBuilder::SharedVertex* sharedVertex);

  /// @brief Method .ctor addr 0x2b76ca4 size 0xd0 virtual false final false
  inline void _ctor(::UnityEngine::ProBuilder::SharedVertex* sharedVertex);

  /// @brief Method get_Item addr 0x2b69db8 size 0x30 virtual false final false
  inline int32_t get_Item(int32_t i);

  /// @brief Method set_Item addr 0x2b76d90 size 0x30 virtual false final false
  inline void set_Item(int32_t i, int32_t value);

  /// @brief Method GetEnumerator addr 0x2b76dc0 size 0xa0 virtual true final true
  inline ::System::Collections::Generic::IEnumerator_1<int32_t>* GetEnumerator();

  /// @brief Method ToString addr 0x2b76e60 size 0x68 virtual true final false
  inline ::StringW ToString();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x2b76ec8 size 0x4 virtual true final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method Add addr 0x2b76ecc size 0x60 virtual true final true
  inline void Add(int32_t item);

  /// @brief Method Clear addr 0x2b76f2c size 0x50 virtual true final true
  inline void Clear();

  /// @brief Method Contains addr 0x2b76f7c size 0x64 virtual true final true
  inline bool Contains(int32_t item);

  /// @brief Method CopyTo addr 0x2b76fe0 size 0x1c virtual true final true
  inline void CopyTo(::ArrayW<int32_t, ::Array<int32_t>*> array, int32_t arrayIndex);

  /// @brief Method Remove addr 0x2b76ffc size 0x94 virtual true final true
  inline bool Remove(int32_t item);

  /// @brief Method get_Count addr 0x2b76d74 size 0x1c virtual true final true
  inline int32_t get_Count();

  /// @brief Method get_IsReadOnly addr 0x2b77090 size 0x1c virtual true final true
  inline bool get_IsReadOnly();

  /// @brief Method GetSharedVertexLookup addr 0x2b770ac size 0x414 virtual false final false
  static inline void GetSharedVertexLookup(::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::SharedVertex*>* sharedVertices,
                                           ::System::Collections::Generic::Dictionary_2<int32_t, int32_t>* lookup);

  /// @brief Method ShiftIndexes addr 0x2b774c0 size 0x40 virtual false final false
  inline void ShiftIndexes(int32_t offset);

  /// @brief Method ToSharedVertices addr 0x2b77500 size 0x6e8 virtual false final false
  static inline ::ArrayW<::UnityEngine::ProBuilder::SharedVertex*, ::Array<::UnityEngine::ProBuilder::SharedVertex*>*>
  ToSharedVertices(::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<int32_t, int32_t>>* lookup);

  /// @brief Method ToSharedVertices addr 0x2b77be8 size 0x17c virtual false final false
  static inline ::ArrayW<::UnityEngine::ProBuilder::SharedVertex*, ::Array<::UnityEngine::ProBuilder::SharedVertex*>*>
  ToSharedVertices(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<int32_t>*>* list);

  /// @brief Method GetSharedVerticesWithPositions addr 0x2b76044 size 0x5d8 virtual false final false
  static inline ::ArrayW<::UnityEngine::ProBuilder::SharedVertex*, ::Array<::UnityEngine::ProBuilder::SharedVertex*>*>
  GetSharedVerticesWithPositions(::System::Collections::Generic::IList_1<::UnityEngine::Vector3>* positions);

  /// @brief Method RemoveAndShift addr 0x2b77d64 size 0xa8 virtual false final false
  static inline ::ArrayW<::UnityEngine::ProBuilder::SharedVertex*, ::Array<::UnityEngine::ProBuilder::SharedVertex*>*>
  RemoveAndShift(::System::Collections::Generic::Dictionary_2<int32_t, int32_t>* lookup, ::System::Collections::Generic::IEnumerable_1<int32_t>* remove);

  /// @brief Method SortedRemoveAndShift addr 0x2b77e0c size 0x350 virtual false final false
  static inline ::ArrayW<::UnityEngine::ProBuilder::SharedVertex*, ::Array<::UnityEngine::ProBuilder::SharedVertex*>*>
  SortedRemoveAndShift(::System::Collections::Generic::Dictionary_2<int32_t, int32_t>* lookup, ::System::Collections::Generic::List_1<int32_t>* remove);

  /// @brief Method SetCoincident addr 0x2b7815c size 0x32c virtual false final false
  static inline void SetCoincident(ByRef<::System::Collections::Generic::Dictionary_2<int32_t, int32_t>*> lookup, ::System::Collections::Generic::IEnumerable_1<int32_t>* vertices);

  // Ctor Parameters [CppParam { name: "", ty: "SharedVertex", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SharedVertex(SharedVertex&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SharedVertex", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SharedVertex(SharedVertex const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SharedVertex();

public:
  /// @brief Field m_Vertices, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ___m_Vertices;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::SharedVertex, 0x18>, "Size mismatch!");

} // namespace UnityEngine::ProBuilder
NEED_NO_BOX(::UnityEngine::ProBuilder::SharedVertex);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::SharedVertex*, "UnityEngine.ProBuilder", "SharedVertex");
NEED_NO_BOX(::UnityEngine::ProBuilder::__SharedVertex____c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::__SharedVertex____c*, "UnityEngine.ProBuilder", "SharedVertex/<>c");
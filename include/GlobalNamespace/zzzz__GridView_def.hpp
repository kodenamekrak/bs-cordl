#pragma once
// IWYU pragma private; include "GlobalNamespace/GridView.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GridView)
namespace GlobalNamespace {
class __GridView__GridViewCellsEnumerator;
}
namespace GlobalNamespace {
class __GridView__GridViewCellsEnumerator___GetEnumerator_d__1;
}
namespace GlobalNamespace {
class __GridView__IDataSource;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Collections::Generic {
template <typename T> class Queue_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace UnityEngine {
class MonoBehaviour;
}
namespace UnityEngine {
class RectTransform;
}
// Forward declare root types
namespace GlobalNamespace {
class GridView;
}
namespace GlobalNamespace {
class __GridView__GridViewCellsEnumerator;
}
namespace GlobalNamespace {
class __GridView__GridViewCellsEnumerator___GetEnumerator_d__1;
}
namespace GlobalNamespace {
class __GridView__IDataSource;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::GridView);
MARK_REF_PTR_T(::GlobalNamespace::__GridView__GridViewCellsEnumerator);
MARK_REF_PTR_T(::GlobalNamespace::__GridView__GridViewCellsEnumerator___GetEnumerator_d__1);
MARK_REF_PTR_T(::GlobalNamespace::__GridView__IDataSource);
// Type: ::IDataSource
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::GridView::IDataSource*
class CORDL_TYPE __GridView__IDataSource {
public:
  // Declarations
  __declspec(property(get = get_cellHeight)) float_t cellHeight;

  __declspec(property(get = get_cellWidth)) float_t cellWidth;

  __declspec(property(get = get_numberOfCells)) int32_t numberOfCells;

  /// @brief Method CellForIdx, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::UnityW<::UnityEngine::MonoBehaviour> CellForIdx(::GlobalNamespace::GridView* gridView, int32_t idx);

  /// @brief Method get_cellHeight, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline float_t get_cellHeight();

  /// @brief Method get_cellWidth, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline float_t get_cellWidth();

  /// @brief Method get_numberOfCells, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int32_t get_numberOfCells();

  // Ctor Parameters [CppParam { name: "", ty: "__GridView__IDataSource", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __GridView__IDataSource(__GridView__IDataSource&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__GridView__IDataSource", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __GridView__IDataSource(__GridView__IDataSource const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4956 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
// Type: ::<GetEnumerator>d__1
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 88, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::GridView::GridViewCellsEnumerator::<GetEnumerator>d__1*
class CORDL_TYPE __GridView__GridViewCellsEnumerator___GetEnumerator_d__1 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_UnityEngine_MonoBehaviour__get_Current)) ::UnityW<::UnityEngine::MonoBehaviour>
      System_Collections_Generic_IEnumerator_UnityEngine_MonoBehaviour__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) ::UnityW<::UnityEngine::MonoBehaviour> __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::GlobalNamespace::__GridView__GridViewCellsEnumerator* __4__this;

  /// @brief Field <>7__wrap1, offset 0x28, size 0x18
  __declspec(property(get = __cordl_internal_get___7__wrap1, put = __cordl_internal_set___7__wrap1)) ::GlobalNamespace::__Dictionary_2__KeyCollection__Enumerator<
      ::UnityW<::UnityEngine::MonoBehaviour>, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MonoBehaviour>>*>
      __7__wrap1;

  /// @brief Field <>7__wrap2, offset 0x40, size 0x18
  __declspec(property(get = __cordl_internal_get___7__wrap2, put = __cordl_internal_set___7__wrap2)) ::System::Collections::Generic::__List_1__Enumerator<::UnityW<::UnityEngine::MonoBehaviour>>
      __7__wrap2;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::UnityW<::UnityEngine::MonoBehaviour>>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::UnityW<::UnityEngine::MonoBehaviour>>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x3aa3e78, size 0x2b0, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GlobalNamespace::__GridView__GridViewCellsEnumerator___GetEnumerator_d__1* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<UnityEngine.MonoBehaviour>.get_Current, addr 0x3aa41c8, size 0x8, virtual true, abstract: false, final true
  inline ::UnityW<::UnityEngine::MonoBehaviour> System_Collections_Generic_IEnumerator_UnityEngine_MonoBehaviour__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x3aa41d0, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x3aa4208, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x3aa3dc8, size 0xb0, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::UnityW<::UnityEngine::MonoBehaviour> const& __cordl_internal_get___2__current() const;

  constexpr ::UnityW<::UnityEngine::MonoBehaviour>& __cordl_internal_get___2__current();

  constexpr ::GlobalNamespace::__GridView__GridViewCellsEnumerator*& __cordl_internal_get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__GridView__GridViewCellsEnumerator*> const& __cordl_internal_get___4__this() const;

  constexpr ::GlobalNamespace::__Dictionary_2__KeyCollection__Enumerator<::UnityW<::UnityEngine::MonoBehaviour>, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MonoBehaviour>>*> const&
  __cordl_internal_get___7__wrap1() const;

  constexpr ::GlobalNamespace::__Dictionary_2__KeyCollection__Enumerator<::UnityW<::UnityEngine::MonoBehaviour>, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MonoBehaviour>>*>&
  __cordl_internal_get___7__wrap1();

  constexpr ::System::Collections::Generic::__List_1__Enumerator<::UnityW<::UnityEngine::MonoBehaviour>> const& __cordl_internal_get___7__wrap2() const;

  constexpr ::System::Collections::Generic::__List_1__Enumerator<::UnityW<::UnityEngine::MonoBehaviour>>& __cordl_internal_get___7__wrap2();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::UnityW<::UnityEngine::MonoBehaviour> value);

  constexpr void __cordl_internal_set___4__this(::GlobalNamespace::__GridView__GridViewCellsEnumerator* value);

  constexpr void __cordl_internal_set___7__wrap1(
      ::GlobalNamespace::__Dictionary_2__KeyCollection__Enumerator<::UnityW<::UnityEngine::MonoBehaviour>, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MonoBehaviour>>*> value);

  constexpr void __cordl_internal_set___7__wrap2(::System::Collections::Generic::__List_1__Enumerator<::UnityW<::UnityEngine::MonoBehaviour>> value);

  /// @brief Method <>m__Finally1, addr 0x3aa4178, size 0x50, virtual false, abstract: false, final false
  inline void __m__Finally1();

  /// @brief Method <>m__Finally2, addr 0x3aa4128, size 0x50, virtual false, abstract: false, final false
  inline void __m__Finally2();

  /// @brief Method .ctor, addr 0x3aa3d9c, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::UnityW<::UnityEngine::MonoBehaviour>>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::UnityW<::UnityEngine::MonoBehaviour>>* i___System__Collections__Generic__IEnumerator_1___UnityW___UnityEngine__MonoBehaviour__() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __GridView__GridViewCellsEnumerator___GetEnumerator_d__1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__GridView__GridViewCellsEnumerator___GetEnumerator_d__1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __GridView__GridViewCellsEnumerator___GetEnumerator_d__1(__GridView__GridViewCellsEnumerator___GetEnumerator_d__1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__GridView__GridViewCellsEnumerator___GetEnumerator_d__1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __GridView__GridViewCellsEnumerator___GetEnumerator_d__1(__GridView__GridViewCellsEnumerator___GetEnumerator_d__1 const&) = delete;

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::MonoBehaviour> _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::__GridView__GridViewCellsEnumerator* _____4__this;

  /// @brief Field <>7__wrap1, offset: 0x28, size: 0x18, def value: None
  ::GlobalNamespace::__Dictionary_2__KeyCollection__Enumerator<::UnityW<::UnityEngine::MonoBehaviour>, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MonoBehaviour>>*> _____7__wrap1;

  /// @brief Field <>7__wrap2, offset: 0x40, size: 0x18, def value: None
  ::System::Collections::Generic::__List_1__Enumerator<::UnityW<::UnityEngine::MonoBehaviour>> _____7__wrap2;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4957 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__GridView__GridViewCellsEnumerator___GetEnumerator_d__1, 0x58>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__GridView__GridViewCellsEnumerator___GetEnumerator_d__1, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__GridView__GridViewCellsEnumerator___GetEnumerator_d__1, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__GridView__GridViewCellsEnumerator___GetEnumerator_d__1, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__GridView__GridViewCellsEnumerator___GetEnumerator_d__1, _____7__wrap1) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__GridView__GridViewCellsEnumerator___GetEnumerator_d__1, _____7__wrap2) == 0x40, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::GridViewCellsEnumerator
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::GridView::GridViewCellsEnumerator*
class CORDL_TYPE __GridView__GridViewCellsEnumerator : public ::System::Object {
public:
  // Declarations
  using _GetEnumerator_d__1 = ::GlobalNamespace::__GridView__GridViewCellsEnumerator___GetEnumerator_d__1;

  /// @brief Field _gridView, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__gridView, put = __cordl_internal_set__gridView)) ::UnityW<::GlobalNamespace::GridView> _gridView;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::MonoBehaviour>>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::MonoBehaviour>>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Method GetEnumerator, addr 0x3a9ef0c, size 0x60, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<::UnityW<::UnityEngine::MonoBehaviour>>* GetEnumerator();

  static inline ::GlobalNamespace::__GridView__GridViewCellsEnumerator* New_ctor(::GlobalNamespace::GridView* gridView);

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x3aa3dc4, size 0x4, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  constexpr ::UnityW<::GlobalNamespace::GridView> const& __cordl_internal_get__gridView() const;

  constexpr ::UnityW<::GlobalNamespace::GridView>& __cordl_internal_get__gridView();

  constexpr void __cordl_internal_set__gridView(::UnityW<::GlobalNamespace::GridView> value);

  /// @brief Method .ctor, addr 0x3aa3c68, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::GridView* gridView);

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::MonoBehaviour>>"
  constexpr ::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::MonoBehaviour>>* i___System__Collections__Generic__IEnumerable_1___UnityW___UnityEngine__MonoBehaviour__() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __GridView__GridViewCellsEnumerator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__GridView__GridViewCellsEnumerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __GridView__GridViewCellsEnumerator(__GridView__GridViewCellsEnumerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__GridView__GridViewCellsEnumerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __GridView__GridViewCellsEnumerator(__GridView__GridViewCellsEnumerator const&) = delete;

  /// @brief Field _gridView, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::GridView> ____gridView;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4958 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__GridView__GridViewCellsEnumerator, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__GridView__GridViewCellsEnumerator, ____gridView) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::GridView
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 88, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::GridView*
class CORDL_TYPE GridView : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using GridViewCellsEnumerator = ::GlobalNamespace::__GridView__GridViewCellsEnumerator;

  using IDataSource = ::GlobalNamespace::__GridView__IDataSource;

  /// @brief Field _availableCellsPerPrefabDictionary, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__availableCellsPerPrefabDictionary, put = __cordl_internal_set__availableCellsPerPrefabDictionary)) ::System::Collections::Generic::Dictionary_2<
      ::UnityW<::UnityEngine::MonoBehaviour>, ::System::Collections::Generic::Queue_1<::UnityW<::UnityEngine::MonoBehaviour>>*>* _availableCellsPerPrefabDictionary;

  /// @brief Field <cellsEnumerator>k__BackingField, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__cellsEnumerator_k__BackingField,
                      put = __cordl_internal_set__cellsEnumerator_k__BackingField)) ::GlobalNamespace::__GridView__GridViewCellsEnumerator* _cellsEnumerator_k__BackingField;

  /// @brief Field _columnCount, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__columnCount, put = __cordl_internal_set__columnCount)) int32_t _columnCount;

  /// @brief Field _contentTransform, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__contentTransform, put = __cordl_internal_set__contentTransform)) ::UnityW<::UnityEngine::RectTransform> _contentTransform;

  /// @brief Field _dataSource, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__dataSource, put = __cordl_internal_set__dataSource)) ::GlobalNamespace::__GridView__IDataSource* _dataSource;

  /// @brief Field _rowCount, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get__rowCount, put = __cordl_internal_set__rowCount)) int32_t _rowCount;

  /// @brief Field _spawnedCellsPerPrefabDictionary, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__spawnedCellsPerPrefabDictionary, put = __cordl_internal_set__spawnedCellsPerPrefabDictionary)) ::System::Collections::Generic::Dictionary_2<
      ::UnityW<::UnityEngine::MonoBehaviour>, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MonoBehaviour>>*>* _spawnedCellsPerPrefabDictionary;

  /// @brief Field _visibleColumnCount, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get__visibleColumnCount, put = __cordl_internal_set__visibleColumnCount)) int32_t _visibleColumnCount;

  __declspec(property(get = get_cellsEnumerator, put = set_cellsEnumerator)) ::GlobalNamespace::__GridView__GridViewCellsEnumerator* cellsEnumerator;

  __declspec(property(get = get_columnCount)) int32_t columnCount;

  __declspec(property(get = get_contentTransform)) ::UnityW<::UnityEngine::RectTransform> contentTransform;

  __declspec(property(get = get_dataSource)) ::GlobalNamespace::__GridView__IDataSource* dataSource;

  __declspec(property(get = get_rowCount)) int32_t rowCount;

  __declspec(property(get = get_visibleColumnCount)) int32_t visibleColumnCount;

  /// @brief Method GetActiveCellsForIdentifier, addr 0x3a9eb64, size 0xe4, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MonoBehaviour>>* GetActiveCellsForIdentifier(::UnityEngine::MonoBehaviour* prefab);

  /// @brief Method GetReusableCellView, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline T GetReusableCellView(::UnityEngine::MonoBehaviour* prefab);

  /// @brief Method Hide, addr 0x3aa3c90, size 0x24, virtual false, abstract: false, final false
  inline void Hide();

  static inline ::GlobalNamespace::GridView* New_ctor();

  /// @brief Method ReloadData, addr 0x3a9f384, size 0x6ec, virtual false, abstract: false, final false
  inline void ReloadData();

  /// @brief Method SetDataSource, addr 0x3a9e0c0, size 0x90, virtual false, abstract: false, final false
  inline void SetDataSource(::GlobalNamespace::__GridView__IDataSource* newDataSource, bool reloadData);

  /// @brief Method Show, addr 0x3aa3cb4, size 0x24, virtual false, abstract: false, final false
  inline void Show();

  constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::MonoBehaviour>, ::System::Collections::Generic::Queue_1<::UnityW<::UnityEngine::MonoBehaviour>>*>*&
  __cordl_internal_get__availableCellsPerPrefabDictionary();

  constexpr ::cordl_internals::to_const_pointer<
      ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::MonoBehaviour>, ::System::Collections::Generic::Queue_1<::UnityW<::UnityEngine::MonoBehaviour>>*>*> const&
  __cordl_internal_get__availableCellsPerPrefabDictionary() const;

  constexpr ::GlobalNamespace::__GridView__GridViewCellsEnumerator*& __cordl_internal_get__cellsEnumerator_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__GridView__GridViewCellsEnumerator*> const& __cordl_internal_get__cellsEnumerator_k__BackingField() const;

  constexpr int32_t const& __cordl_internal_get__columnCount() const;

  constexpr int32_t& __cordl_internal_get__columnCount();

  constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get__contentTransform() const;

  constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get__contentTransform();

  constexpr ::GlobalNamespace::__GridView__IDataSource*& __cordl_internal_get__dataSource();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__GridView__IDataSource*> const& __cordl_internal_get__dataSource() const;

  constexpr int32_t const& __cordl_internal_get__rowCount() const;

  constexpr int32_t& __cordl_internal_get__rowCount();

  constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::MonoBehaviour>, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MonoBehaviour>>*>*&
  __cordl_internal_get__spawnedCellsPerPrefabDictionary();

  constexpr ::cordl_internals::to_const_pointer<
      ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::MonoBehaviour>, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MonoBehaviour>>*>*> const&
  __cordl_internal_get__spawnedCellsPerPrefabDictionary() const;

  constexpr int32_t const& __cordl_internal_get__visibleColumnCount() const;

  constexpr int32_t& __cordl_internal_get__visibleColumnCount();

  constexpr void __cordl_internal_set__availableCellsPerPrefabDictionary(
      ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::MonoBehaviour>, ::System::Collections::Generic::Queue_1<::UnityW<::UnityEngine::MonoBehaviour>>*>* value);

  constexpr void __cordl_internal_set__cellsEnumerator_k__BackingField(::GlobalNamespace::__GridView__GridViewCellsEnumerator* value);

  constexpr void __cordl_internal_set__columnCount(int32_t value);

  constexpr void __cordl_internal_set__contentTransform(::UnityW<::UnityEngine::RectTransform> value);

  constexpr void __cordl_internal_set__dataSource(::GlobalNamespace::__GridView__IDataSource* value);

  constexpr void __cordl_internal_set__rowCount(int32_t value);

  constexpr void __cordl_internal_set__spawnedCellsPerPrefabDictionary(
      ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::MonoBehaviour>, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MonoBehaviour>>*>* value);

  constexpr void __cordl_internal_set__visibleColumnCount(int32_t value);

  /// @brief Method .ctor, addr 0x3aa3cd8, size 0xc4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_cellsEnumerator, addr 0x3aa3c48, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__GridView__GridViewCellsEnumerator* get_cellsEnumerator();

  /// @brief Method get_columnCount, addr 0x3aa3c60, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_columnCount();

  /// @brief Method get_contentTransform, addr 0x3aa3c40, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::RectTransform> get_contentTransform();

  /// @brief Method get_dataSource, addr 0x3aa3c38, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__GridView__IDataSource* get_dataSource();

  /// @brief Method get_rowCount, addr 0x3aa3c58, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_rowCount();

  /// @brief Method get_visibleColumnCount, addr 0x3aa3c30, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_visibleColumnCount();

  /// @brief Method set_cellsEnumerator, addr 0x3aa3c50, size 0x8, virtual false, abstract: false, final false
  inline void set_cellsEnumerator(::GlobalNamespace::__GridView__GridViewCellsEnumerator* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GridView();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GridView", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GridView(GridView&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GridView", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GridView(GridView const&) = delete;

  /// @brief Field _contentTransform, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::RectTransform> ____contentTransform;

  /// @brief Field _columnCount, offset: 0x28, size: 0x4, def value: None
  int32_t ____columnCount;

  /// @brief Field _visibleColumnCount, offset: 0x2c, size: 0x4, def value: None
  int32_t ____visibleColumnCount;

  /// @brief Field _dataSource, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::__GridView__IDataSource* ____dataSource;

  /// @brief Field _rowCount, offset: 0x38, size: 0x4, def value: None
  int32_t ____rowCount;

  /// @brief Field _availableCellsPerPrefabDictionary, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::MonoBehaviour>, ::System::Collections::Generic::Queue_1<::UnityW<::UnityEngine::MonoBehaviour>>*>*
      ____availableCellsPerPrefabDictionary;

  /// @brief Field _spawnedCellsPerPrefabDictionary, offset: 0x48, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::MonoBehaviour>, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::MonoBehaviour>>*>*
      ____spawnedCellsPerPrefabDictionary;

  /// @brief Field <cellsEnumerator>k__BackingField, offset: 0x50, size: 0x8, def value: None
  ::GlobalNamespace::__GridView__GridViewCellsEnumerator* ____cellsEnumerator_k__BackingField;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4959 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GridView, 0x58>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::GridView, ____contentTransform) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GridView, ____columnCount) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GridView, ____visibleColumnCount) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GridView, ____dataSource) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GridView, ____rowCount) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GridView, ____availableCellsPerPrefabDictionary) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GridView, ____spawnedCellsPerPrefabDictionary) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GridView, ____cellsEnumerator_k__BackingField) == 0x50, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::GridView);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GridView*, "", "GridView");
NEED_NO_BOX(::GlobalNamespace::__GridView__GridViewCellsEnumerator);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__GridView__GridViewCellsEnumerator*, "", "GridView/GridViewCellsEnumerator");
NEED_NO_BOX(::GlobalNamespace::__GridView__GridViewCellsEnumerator___GetEnumerator_d__1);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__GridView__GridViewCellsEnumerator___GetEnumerator_d__1*, "", "GridView/GridViewCellsEnumerator/<GetEnumerator>d__1");
NEED_NO_BOX(::GlobalNamespace::__GridView__IDataSource);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__GridView__IDataSource*, "", "GridView/IDataSource");

#pragma once
// IWYU pragma private; include "System/ValueTuple_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/zzzz__IStructuralComparable_def.hpp"
#include "System/Collections/zzzz__IStructuralEquatable_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ITuple_def.hpp"
#include "System/zzzz__IComparable_1_def.hpp"
#include "System/zzzz__IComparable_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__IValueTupleInternal_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ValueTuple_1)
namespace System::Collections {
class IComparer;
}
namespace System::Collections {
class IEqualityComparer;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System {
template <typename T1> struct ValueTuple_1;
}
// Write type traits
MARK_GEN_VAL_T(::System::ValueTuple_1);
// Dependencies System.Collections.IStructuralComparable, System.Collections.IStructuralEquatable, System.IComparable, System.IComparable`1<T>, System.IEquatable`1<T>, System.IValueTupleInternal,
// System.Runtime.CompilerServices.ITuple
namespace System {
// cpp template
template <typename T1>
// Is value type: true
// CS Name: System.ValueTuple`1<T1>
struct CORDL_TYPE ValueTuple_1 {
public:
  // Declarations
  __declspec(property(get = System_Runtime_CompilerServices_ITuple_get_Length)) int32_t System_Runtime_CompilerServices_ITuple_Length;

  /// @brief Convert operator to "::System::Collections::IStructuralComparable"
  constexpr operator ::System::Collections::IStructuralComparable*();

  /// @brief Convert operator to "::System::Collections::IStructuralEquatable"
  constexpr operator ::System::Collections::IStructuralEquatable*();

  /// @brief Convert operator to "::System::IComparable"
  constexpr operator ::System::IComparable*();

  /// @brief Convert operator to "::System::IComparable_1<::System::ValueTuple_1<T1>>"
  constexpr operator ::System::IComparable_1<::System::ValueTuple_1<T1>>*();

  /// @brief Convert operator to "::System::IEquatable_1<::System::ValueTuple_1<T1>>"
  constexpr operator ::System::IEquatable_1<::System::ValueTuple_1<T1>>*();

  /// @brief Convert operator to "::System::IValueTupleInternal"
  constexpr operator ::System::IValueTupleInternal*();

  /// @brief Convert operator to "::System::Runtime::CompilerServices::ITuple"
  constexpr operator ::System::Runtime::CompilerServices::ITuple*();

  /// @brief Method CompareTo, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline int32_t CompareTo(::System::ValueTuple_1<T1> other);

  /// @brief Method Equals, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool Equals(::System::ValueTuple_1<T1> other);

  /// @brief Method GetHashCode, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method System.Collections.IStructuralComparable.CompareTo, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline int32_t System_Collections_IStructuralComparable_CompareTo(::System::Object* other, ::System::Collections::IComparer* comparer);

  /// @brief Method System.Collections.IStructuralEquatable.Equals, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool System_Collections_IStructuralEquatable_Equals(::System::Object* other, ::System::Collections::IEqualityComparer* comparer);

  /// @brief Method System.Collections.IStructuralEquatable.GetHashCode, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline int32_t System_Collections_IStructuralEquatable_GetHashCode(::System::Collections::IEqualityComparer* comparer);

  /// @brief Method System.IComparable.CompareTo, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline int32_t System_IComparable_CompareTo(::System::Object* other);

  /// @brief Method System.IValueTupleInternal.GetHashCode, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline int32_t System_IValueTupleInternal_GetHashCode(::System::Collections::IEqualityComparer* comparer);

  /// @brief Method System.IValueTupleInternal.ToStringEnd, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::StringW System_IValueTupleInternal_ToStringEnd();

  /// @brief Method System.Runtime.CompilerServices.ITuple.get_Length, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline int32_t System_Runtime_CompilerServices_ITuple_get_Length();

  /// @brief Method ToString, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(T1 item1);

  /// @brief Convert to "::System::Collections::IStructuralComparable"
  constexpr ::System::Collections::IStructuralComparable* i___System__Collections__IStructuralComparable();

  /// @brief Convert to "::System::Collections::IStructuralEquatable"
  constexpr ::System::Collections::IStructuralEquatable* i___System__Collections__IStructuralEquatable();

  /// @brief Convert to "::System::IComparable"
  constexpr ::System::IComparable* i___System__IComparable();

  /// @brief Convert to "::System::IComparable_1<::System::ValueTuple_1<T1>>"
  constexpr ::System::IComparable_1<::System::ValueTuple_1<T1>>* i___System__IComparable_1___System__ValueTuple_1_T1__();

  /// @brief Convert to "::System::IEquatable_1<::System::ValueTuple_1<T1>>"
  constexpr ::System::IEquatable_1<::System::ValueTuple_1<T1>>* i___System__IEquatable_1___System__ValueTuple_1_T1__();

  /// @brief Convert to "::System::IValueTupleInternal"
  constexpr ::System::IValueTupleInternal* i___System__IValueTupleInternal();

  /// @brief Convert to "::System::Runtime::CompilerServices::ITuple"
  constexpr ::System::Runtime::CompilerServices::ITuple* i___System__Runtime__CompilerServices__ITuple();

  // Ctor Parameters []
  // @brief default ctor
  constexpr ValueTuple_1();

  // Ctor Parameters [CppParam { name: "Item1", ty: "T1", modifiers: "", def_value: None }]
  constexpr ValueTuple_1(T1 Item1) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2505 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field Item1, offset: 0x0, size: 0x8, def value: None
  T1 Item1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace System
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::System::ValueTuple_1, "System", "ValueTuple`1");

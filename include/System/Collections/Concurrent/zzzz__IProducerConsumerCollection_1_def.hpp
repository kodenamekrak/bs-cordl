#pragma once
// IWYU pragma private; include "System/Collections/Concurrent/IProducerConsumerCollection_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(IProducerConsumerCollection_1)
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections {
class ICollection;
}
namespace System::Collections {
class IEnumerable;
}
// Forward declare root types
namespace System::Collections::Concurrent {
template <typename T> class IProducerConsumerCollection_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::System::Collections::Concurrent::IProducerConsumerCollection_1);
// Type: System.Collections.Concurrent::IProducerConsumerCollection`1
// SizeInfo { instance_size: 0, native_size: 0, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Collections::Concurrent {
// cpp template
template <typename T>
// Is value type: false
// CS Name: ::System.Collections.Concurrent::IProducerConsumerCollection`1<T>*
class CORDL_TYPE IProducerConsumerCollection_1 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<T>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<T>*() noexcept;

  /// @brief Convert operator to "::System::Collections::ICollection"
  constexpr operator ::System::Collections::ICollection*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Method ToArray, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::ArrayW<T, ::Array<T>*> ToArray();

  /// @brief Method TryAdd, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool TryAdd(T item);

  /// @brief Method TryTake, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool TryTake(ByRef<T> item);

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<T>"
  constexpr ::System::Collections::Generic::IEnumerable_1<T>* i___System__Collections__Generic__IEnumerable_1_T_() noexcept;

  /// @brief Convert to "::System::Collections::ICollection"
  constexpr ::System::Collections::ICollection* i___System__Collections__ICollection() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  // Ctor Parameters [CppParam { name: "", ty: "IProducerConsumerCollection_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IProducerConsumerCollection_1(IProducerConsumerCollection_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IProducerConsumerCollection_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IProducerConsumerCollection_1(IProducerConsumerCollection_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3821 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Collections::Concurrent
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Collections::Concurrent::IProducerConsumerCollection_1, "System.Collections.Concurrent", "IProducerConsumerCollection`1");

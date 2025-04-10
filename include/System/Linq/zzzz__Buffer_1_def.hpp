#pragma once
// IWYU pragma private; include "System/Linq/Buffer_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Buffer_1)
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
// Forward declare root types
namespace System::Linq {
template <typename TElement> struct Buffer_1;
}
// Write type traits
MARK_GEN_VAL_T(::System::Linq::Buffer_1);
// Dependencies
namespace System::Linq {
// cpp template
template <typename TElement>
// Is value type: true
// CS Name: System.Linq.Buffer`1<TElement>
struct CORDL_TYPE Buffer_1 {
public:
  // Declarations
  /// @brief Method ToArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::ArrayW<TElement, ::Array<TElement>*> ToArray();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::IEnumerable_1<TElement>* source);

  // Ctor Parameters []
  // @brief default ctor
  constexpr Buffer_1();

  // Ctor Parameters [CppParam { name: "items", ty: "::ArrayW<TElement,::Array<TElement>*>", modifiers: "", def_value: None }, CppParam { name: "count", ty: "int32_t", modifiers: "", def_value: None
  // }]
  constexpr Buffer_1(::ArrayW<TElement, ::Array<TElement>*> items, int32_t count) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13608 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field items, offset: 0x0, size: 0x8, def value: None
  ::ArrayW<TElement, ::Array<TElement>*> items;

  /// @brief Field count, offset: 0x8, size: 0x4, def value: None
  int32_t count;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace System::Linq
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::System::Linq::Buffer_1, "System.Linq", "Buffer`1");

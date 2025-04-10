#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/ArrayExtensions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ArrayExtensions)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class ArrayExtensions;
}
// Write type traits
MARK_REF_PTR_T(::HoudiniEngineUnity::ArrayExtensions);
// Dependencies System.Object
namespace HoudiniEngineUnity {
// Is value type: false
// CS Name: HoudiniEngineUnity.ArrayExtensions
class CORDL_TYPE ArrayExtensions : public ::System::Object {
public:
  // Declarations
  /// @brief Method CopyToWithResize, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void CopyToWithResize(::ArrayW<T, ::Array<T>*> srcArray, ::ByRef<::ArrayW<T, ::Array<T>*>> destArray);

  /// @brief Method Init, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void Init(::ArrayW<T, ::Array<T>*> array, T defaultValue);

  /// @brief Method Init, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void Init(::System::Collections::Generic::List_1<T>* array, T defaultValue);

  /// @brief Method IsEquivalentArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline bool IsEquivalentArray(::ArrayW<T, ::Array<T>*> arr, ::ArrayW<T, ::Array<T>*> other);

  /// @brief Method IsNull, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline bool IsNull(::ArrayW<T, ::Array<T>*> arr);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ArrayExtensions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ArrayExtensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ArrayExtensions(ArrayExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ArrayExtensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ArrayExtensions(ArrayExtensions const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11809 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::ArrayExtensions, 0x10>, "Size mismatch!");

} // namespace HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::ArrayExtensions);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::ArrayExtensions*, "HoudiniEngineUnity", "ArrayExtensions");

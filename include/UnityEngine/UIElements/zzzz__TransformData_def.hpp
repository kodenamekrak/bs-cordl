#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__Rotate_def.hpp"
#include "UnityEngine/UIElements/zzzz__Scale_def.hpp"
#include "UnityEngine/UIElements/zzzz__TransformOrigin_def.hpp"
#include "UnityEngine/UIElements/zzzz__Translate_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TransformData)
namespace UnityEngine::UIElements {
struct Rotate;
}
namespace System {
class Object;
}
namespace UnityEngine::UIElements {
template <typename T> class IStyleDataGroup_1;
}
namespace UnityEngine::UIElements {
struct TransformOrigin;
}
namespace System {
template <typename T> class IEquatable_1;
}
namespace UnityEngine::UIElements {
struct Scale;
}
namespace UnityEngine::UIElements {
struct Translate;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct TransformData;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::TransformData);
// Type: UnityEngine.UIElements::TransformData
// SizeInfo { instance_size: 84, native_size: 84, calculated_instance_size: 84, calculated_native_size: 100, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7302)), TypeDefinitionIndex(TypeDefinitionIndex(7295)), TypeDefinitionIndex(TypeDefinitionIndex(7317)),
// TypeDefinitionIndex(TypeDefinitionIndex(7318))} Self: TypeDefinitionIndex(TypeDefinitionIndex(7359)) CS Name: ::UnityEngine.UIElements::TransformData
struct CORDL_TYPE TransformData {
public:
  // Declarations
  /// @brief Convert operator to "::UnityEngine::UIElements::IStyleDataGroup_1<::UnityEngine::UIElements::TransformData>"
  constexpr operator ::UnityEngine::UIElements::IStyleDataGroup_1<::UnityEngine::UIElements::TransformData>*();

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::UIElements::TransformData>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::UIElements::TransformData>*();

  /// @brief Method Copy addr 0x2e843b8 size 0x1c virtual true final true
  inline ::UnityEngine::UIElements::TransformData Copy();

  /// @brief Method CopyFrom addr 0x2e843d4 size 0x14 virtual true final true
  inline void CopyFrom(ByRef<::UnityEngine::UIElements::TransformData> other);

  /// @brief Method op_Equality addr 0x2e843e8 size 0x128 virtual false final false
  static inline bool op_Equality(::UnityEngine::UIElements::TransformData lhs, ::UnityEngine::UIElements::TransformData rhs);

  /// @brief Method Equals addr 0x2e84510 size 0x44 virtual true final true
  inline bool Equals(::UnityEngine::UIElements::TransformData other);

  /// @brief Method Equals addr 0x2e84554 size 0xa0 virtual true final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode addr 0x2e845f4 size 0x64 virtual true final false
  inline int32_t GetHashCode();

  // Ctor Parameters [CppParam { name: "rotate", ty: "::UnityEngine::UIElements::Rotate", modifiers: "", def_value: None }, CppParam { name: "scale", ty: "::UnityEngine::UIElements::Scale", modifiers:
  // "", def_value: None }, CppParam { name: "transformOrigin", ty: "::UnityEngine::UIElements::TransformOrigin", modifiers: "", def_value: None }, CppParam { name: "translate", ty:
  // "::UnityEngine::UIElements::Translate", modifiers: "", def_value: None }]
  constexpr TransformData(::UnityEngine::UIElements::Rotate rotate, ::UnityEngine::UIElements::Scale scale, ::UnityEngine::UIElements::TransformOrigin transformOrigin,
                          ::UnityEngine::UIElements::Translate translate) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr TransformData();

  /// @brief Field rotate, offset: 0x0, size: 0x18, def value: None
  ::UnityEngine::UIElements::Rotate rotate;

  /// @brief Field scale, offset: 0x18, size: 0x10, def value: None
  ::UnityEngine::UIElements::Scale scale;

  /// @brief Field transformOrigin, offset: 0x28, size: 0x14, def value: None
  ::UnityEngine::UIElements::TransformOrigin transformOrigin;

  /// @brief Field translate, offset: 0x3c, size: 0x18, def value: None
  ::UnityEngine::UIElements::Translate translate;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x54 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::TransformData, 0x54>, "Size mismatch!");

} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::TransformData, "UnityEngine.UIElements", "TransformData");
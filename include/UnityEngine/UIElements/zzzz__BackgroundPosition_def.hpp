#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/BackgroundPosition.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__BackgroundPositionKeyword_def.hpp"
#include "UnityEngine/UIElements/zzzz__Length_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BackgroundPosition)
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class Object;
}
namespace UnityEngine::UIElements {
struct BackgroundPositionKeyword;
}
namespace UnityEngine::UIElements {
struct Length;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct BackgroundPosition;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::BackgroundPosition);
// Type: UnityEngine.UIElements::BackgroundPosition
// SizeInfo { instance_size: 12, native_size: 12, calculated_instance_size: 12, calculated_native_size: 28, minimum_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: ::UnityEngine.UIElements::BackgroundPosition
struct CORDL_TYPE BackgroundPosition {
public:
  // Declarations
  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::UIElements::BackgroundPosition>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::UIElements::BackgroundPosition>*();

  /// @brief Method Equals, addr 0x4909574, size 0x7c, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x49095f0, size 0x54, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::UIElements::BackgroundPosition other);

  /// @brief Method GetHashCode, addr 0x4909644, size 0x48, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method Initial, addr 0x490950c, size 0x34, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::BackgroundPosition Initial();

  /// @brief Method ToString, addr 0x4909730, size 0xbc, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method .ctor, addr 0x49094c8, size 0x38, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::UIElements::BackgroundPositionKeyword keyword);

  /// @brief Method .ctor, addr 0x4909500, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::UIElements::BackgroundPositionKeyword keyword, ::UnityEngine::UIElements::Length offset);

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::UIElements::BackgroundPosition>"
  constexpr ::System::IEquatable_1<::UnityEngine::UIElements::BackgroundPosition>* i___System__IEquatable_1___UnityEngine__UIElements__BackgroundPosition_();

  /// @brief Method op_Equality, addr 0x490968c, size 0x50, virtual false, abstract: false, final false
  static inline bool op_Equality(::UnityEngine::UIElements::BackgroundPosition style1, ::UnityEngine::UIElements::BackgroundPosition style2);

  /// @brief Method op_Inequality, addr 0x49096dc, size 0x54, virtual false, abstract: false, final false
  static inline bool op_Inequality(::UnityEngine::UIElements::BackgroundPosition style1, ::UnityEngine::UIElements::BackgroundPosition style2);

  // Ctor Parameters []
  // @brief default ctor
  constexpr BackgroundPosition();

  // Ctor Parameters [CppParam { name: "keyword", ty: "::UnityEngine::UIElements::BackgroundPositionKeyword", modifiers: "", def_value: None }, CppParam { name: "offset", ty:
  // "::UnityEngine::UIElements::Length", modifiers: "", def_value: None }]
  constexpr BackgroundPosition(::UnityEngine::UIElements::BackgroundPositionKeyword keyword, ::UnityEngine::UIElements::Length offset) noexcept;

  /// @brief Field keyword, offset: 0x0, size: 0x4, def value: None
  ::UnityEngine::UIElements::BackgroundPositionKeyword keyword;

  /// @brief Field offset, offset: 0x4, size: 0x8, def value: None
  ::UnityEngine::UIElements::Length offset;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5425 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xc };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::BackgroundPosition, 0xc>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BackgroundPosition, keyword) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::BackgroundPosition, offset) == 0x4, "Offset mismatch!");

} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::BackgroundPosition, "UnityEngine.UIElements", "BackgroundPosition");

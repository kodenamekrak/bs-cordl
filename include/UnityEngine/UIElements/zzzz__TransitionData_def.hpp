#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TransitionData)
namespace UnityEngine::UIElements {
struct TimeValue;
}
namespace UnityEngine::UIElements {
struct StylePropertyName;
}
namespace UnityEngine::UIElements {
template <typename T> class IStyleDataGroup_1;
}
namespace UnityEngine::UIElements {
struct EasingFunction;
}
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class Object;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct TransitionData;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::TransitionData);
// Type: UnityEngine.UIElements::TransitionData
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7360))
// CS Name: ::UnityEngine.UIElements::TransitionData
struct CORDL_TYPE TransitionData {
public:
  // Declarations
  /// @brief Convert operator to "::UnityEngine::UIElements::IStyleDataGroup_1<::UnityEngine::UIElements::TransitionData>"
  constexpr operator ::UnityEngine::UIElements::IStyleDataGroup_1<::UnityEngine::UIElements::TransitionData>*();

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::UIElements::TransitionData>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::UIElements::TransitionData>*();

  /// @brief Method Copy addr 0x2e84658 size 0x144 virtual true final true
  inline ::UnityEngine::UIElements::TransitionData Copy();

  /// @brief Method CopyFrom addr 0x2e8479c size 0x160 virtual true final true
  inline void CopyFrom(ByRef<::UnityEngine::UIElements::TransitionData> other);

  /// @brief Method op_Equality addr 0x2e848fc size 0x4c virtual false final false
  static inline bool op_Equality(::UnityEngine::UIElements::TransitionData lhs, ::UnityEngine::UIElements::TransitionData rhs);

  /// @brief Method Equals addr 0x2e84948 size 0x4c virtual true final true
  inline bool Equals(::UnityEngine::UIElements::TransitionData other);

  /// @brief Method Equals addr 0x2e84994 size 0xb0 virtual true final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode addr 0x2e84a44 size 0x9c virtual true final false
  inline int32_t GetHashCode();

  // Ctor Parameters [CppParam { name: "transitionDelay", ty: "::System::Collections::Generic::List_1<::UnityEngine::UIElements::TimeValue>*", modifiers: "", def_value: None }, CppParam { name:
  // "transitionDuration", ty: "::System::Collections::Generic::List_1<::UnityEngine::UIElements::TimeValue>*", modifiers: "", def_value: None }, CppParam { name: "transitionProperty", ty:
  // "::System::Collections::Generic::List_1<::UnityEngine::UIElements::StylePropertyName>*", modifiers: "", def_value: None }, CppParam { name: "transitionTimingFunction", ty:
  // "::System::Collections::Generic::List_1<::UnityEngine::UIElements::EasingFunction>*", modifiers: "", def_value: None }]
  constexpr TransitionData(::System::Collections::Generic::List_1<::UnityEngine::UIElements::TimeValue>* transitionDelay,
                           ::System::Collections::Generic::List_1<::UnityEngine::UIElements::TimeValue>* transitionDuration,
                           ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StylePropertyName>* transitionProperty,
                           ::System::Collections::Generic::List_1<::UnityEngine::UIElements::EasingFunction>* transitionTimingFunction) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr TransitionData();

  /// @brief Field transitionDelay, offset: 0x0, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::UIElements::TimeValue>* transitionDelay;

  /// @brief Field transitionDuration, offset: 0x8, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::UIElements::TimeValue>* transitionDuration;

  /// @brief Field transitionProperty, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StylePropertyName>* transitionProperty;

  /// @brief Field transitionTimingFunction, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::UIElements::EasingFunction>* transitionTimingFunction;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::TransitionData, 0x20>, "Size mismatch!");

} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::TransitionData, "UnityEngine.UIElements", "TransitionData");
#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/Length.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__Length_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Length)
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class Object;
}
namespace UnityEngine::UIElements {
struct LengthUnit;
}
namespace UnityEngine::UIElements {
struct __Length__Unit;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct __Length__Unit;
}
namespace UnityEngine::UIElements {
struct Length;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::__Length__Unit);
MARK_VAL_T(::UnityEngine::UIElements::Length);
// Type: ::Unit
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: ::Length::Unit
struct CORDL_TYPE __Length__Unit {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____Length__Unit_Unwrapped
  enum struct ____Length__Unit_Unwrapped : int32_t {
    __E_Pixel = static_cast<int32_t>(0x0),
    __E_Percent = static_cast<int32_t>(0x1),
    __E_Auto = static_cast<int32_t>(0x2),
    __E_None = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____Length__Unit_Unwrapped() const noexcept {
    return static_cast<____Length__Unit_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __Length__Unit();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __Length__Unit(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Auto value: static_cast<int32_t>(0x2)
  static ::UnityEngine::UIElements::__Length__Unit const Auto;

  /// @brief Field None value: static_cast<int32_t>(0x3)
  static ::UnityEngine::UIElements::__Length__Unit const None;

  /// @brief Field Percent value: static_cast<int32_t>(0x1)
  static ::UnityEngine::UIElements::__Length__Unit const Percent;

  /// @brief Field Pixel value: static_cast<int32_t>(0x0)
  static ::UnityEngine::UIElements::__Length__Unit const Pixel;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6061 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__Length__Unit, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__Length__Unit, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::UIElements
// Type: UnityEngine.UIElements::Length
// SizeInfo { instance_size: 8, native_size: 8, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: ::UnityEngine.UIElements::Length
struct CORDL_TYPE Length {
public:
  // Declarations
  using Unit = ::UnityEngine::UIElements::__Length__Unit;

  __declspec(property(get = get_unit)) ::UnityEngine::UIElements::LengthUnit unit;

  __declspec(property(get = get_value, put = set_value)) float_t value;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::UIElements::Length>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::UIElements::Length>*();

  /// @brief Method Auto, addr 0x4a1d4f0, size 0x8, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::Length Auto();

  /// @brief Method Equals, addr 0x4a1d618, size 0x8c, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x4a1d5f0, size 0x28, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::UIElements::Length other);

  /// @brief Method GetHashCode, addr 0x4a1b150, size 0x28, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method IsAuto, addr 0x4a1d55c, size 0x10, virtual false, abstract: false, final false
  inline bool IsAuto();

  /// @brief Method IsNone, addr 0x4a1d56c, size 0x10, virtual false, abstract: false, final false
  inline bool IsNone();

  /// @brief Method None, addr 0x4a1d520, size 0x8, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::Length None();

  /// @brief Method Percent, addr 0x4a1d4a0, size 0x28, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::Length Percent(float_t value);

  /// @brief Method ToString, addr 0x4a1d6a4, size 0x1c0, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method .ctor, addr 0x4a1d57c, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(float_t value);

  /// @brief Method .ctor, addr 0x4a1d4c8, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(float_t value, ::UnityEngine::UIElements::LengthUnit unit);

  /// @brief Method .ctor, addr 0x4a1d4f8, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(float_t value, ::UnityEngine::UIElements::__Length__Unit unit);

  /// @brief Method get_unit, addr 0x4a1d554, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::LengthUnit get_unit();

  /// @brief Method get_value, addr 0x4a1d528, size 0x8, virtual false, abstract: false, final false
  inline float_t get_value();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::UIElements::Length>"
  constexpr ::System::IEquatable_1<::UnityEngine::UIElements::Length>* i___System__IEquatable_1___UnityEngine__UIElements__Length_();

  /// @brief Method op_Equality, addr 0x4a1adb8, size 0x28, virtual false, abstract: false, final false
  static inline bool op_Equality(::UnityEngine::UIElements::Length lhs, ::UnityEngine::UIElements::Length rhs);

  /// @brief Method op_Implicit, addr 0x4a1d5a4, size 0x24, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::Length op_Implicit___UnityEngine__UIElements__Length(float_t value);

  /// @brief Method op_Inequality, addr 0x4a1d5c8, size 0x28, virtual false, abstract: false, final false
  static inline bool op_Inequality(::UnityEngine::UIElements::Length lhs, ::UnityEngine::UIElements::Length rhs);

  /// @brief Method set_value, addr 0x4a1d530, size 0x24, virtual false, abstract: false, final false
  inline void set_value(float_t value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr Length();

  // Ctor Parameters [CppParam { name: "m_Value", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_Unit", ty: "::UnityEngine::UIElements::__Length__Unit", modifiers: "", def_value:
  // None }]
  constexpr Length(float_t m_Value, ::UnityEngine::UIElements::__Length__Unit m_Unit) noexcept;

  /// @brief Field m_Value, offset: 0x0, size: 0x4, def value: None
  float_t m_Value;

  /// @brief Field m_Unit, offset: 0x4, size: 0x4, def value: None
  ::UnityEngine::UIElements::__Length__Unit m_Unit;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6062 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field k_MaxValue offset 0xffffffff size 0x4
  static constexpr float_t k_MaxValue{ 8388608.0 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::Length, 0x8>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Length, m_Value) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::Length, m_Unit) == 0x4, "Offset mismatch!");

} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__Length__Unit, "UnityEngine.UIElements", "Length/Unit");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::Length, "UnityEngine.UIElements", "Length");

#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__GUILayoutOption_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GUILayoutOption)
namespace System {
class Object;
}
namespace UnityEngine {
struct __GUILayoutOption__Type;
}
// Forward declare root types
namespace UnityEngine {
struct __GUILayoutOption__Type;
}
namespace UnityEngine {
class GUILayoutOption;
}
// Write type traits
MARK_VAL_T(::UnityEngine::__GUILayoutOption__Type);
MARK_REF_PTR_T(::UnityEngine::GUILayoutOption);
// Type: ::Type
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14629))
// CS Name: ::GUILayoutOption::Type
struct CORDL_TYPE __GUILayoutOption__Type {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____GUILayoutOption__Type_Unwrapped
  enum struct ____GUILayoutOption__Type_Unwrapped : int32_t {
    __E_fixedWidth = static_cast<int32_t>(0x0),
    __E_fixedHeight = static_cast<int32_t>(0x1),
    __E_minWidth = static_cast<int32_t>(0x2),
    __E_maxWidth = static_cast<int32_t>(0x3),
    __E_minHeight = static_cast<int32_t>(0x4),
    __E_maxHeight = static_cast<int32_t>(0x5),
    __E_stretchWidth = static_cast<int32_t>(0x6),
    __E_stretchHeight = static_cast<int32_t>(0x7),
    __E_alignStart = static_cast<int32_t>(0x8),
    __E_alignMiddle = static_cast<int32_t>(0x9),
    __E_alignEnd = static_cast<int32_t>(0xa),
    __E_alignJustify = static_cast<int32_t>(0xb),
    __E_equalSize = static_cast<int32_t>(0xc),
    __E_spacing = static_cast<int32_t>(0xd),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____GUILayoutOption__Type_Unwrapped() const noexcept {
    return static_cast<____GUILayoutOption__Type_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __GUILayoutOption__Type(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __GUILayoutOption__Type();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field fixedWidth value: static_cast<int32_t>(0x0)
  static ::UnityEngine::__GUILayoutOption__Type const fixedWidth;

  /// @brief Field fixedHeight value: static_cast<int32_t>(0x1)
  static ::UnityEngine::__GUILayoutOption__Type const fixedHeight;

  /// @brief Field minWidth value: static_cast<int32_t>(0x2)
  static ::UnityEngine::__GUILayoutOption__Type const minWidth;

  /// @brief Field maxWidth value: static_cast<int32_t>(0x3)
  static ::UnityEngine::__GUILayoutOption__Type const maxWidth;

  /// @brief Field minHeight value: static_cast<int32_t>(0x4)
  static ::UnityEngine::__GUILayoutOption__Type const minHeight;

  /// @brief Field maxHeight value: static_cast<int32_t>(0x5)
  static ::UnityEngine::__GUILayoutOption__Type const maxHeight;

  /// @brief Field stretchWidth value: static_cast<int32_t>(0x6)
  static ::UnityEngine::__GUILayoutOption__Type const stretchWidth;

  /// @brief Field stretchHeight value: static_cast<int32_t>(0x7)
  static ::UnityEngine::__GUILayoutOption__Type const stretchHeight;

  /// @brief Field alignStart value: static_cast<int32_t>(0x8)
  static ::UnityEngine::__GUILayoutOption__Type const alignStart;

  /// @brief Field alignMiddle value: static_cast<int32_t>(0x9)
  static ::UnityEngine::__GUILayoutOption__Type const alignMiddle;

  /// @brief Field alignEnd value: static_cast<int32_t>(0xa)
  static ::UnityEngine::__GUILayoutOption__Type const alignEnd;

  /// @brief Field alignJustify value: static_cast<int32_t>(0xb)
  static ::UnityEngine::__GUILayoutOption__Type const alignJustify;

  /// @brief Field equalSize value: static_cast<int32_t>(0xc)
  static ::UnityEngine::__GUILayoutOption__Type const equalSize;

  /// @brief Field spacing value: static_cast<int32_t>(0xd)
  static ::UnityEngine::__GUILayoutOption__Type const spacing;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::__GUILayoutOption__Type, 0x4>, "Size mismatch!");

} // namespace UnityEngine
// Type: UnityEngine::GUILayoutOption
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14629)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14630))
// CS Name: ::UnityEngine::GUILayoutOption*
class CORDL_TYPE GUILayoutOption : public ::System::Object {
public:
  // Declarations
  using Type = ::UnityEngine::__GUILayoutOption__Type;

  /// @brief Field type, offset 0x10, size 0x4
  __declspec(property(get = __get_type, put = __set_type))::UnityEngine::__GUILayoutOption__Type type;

  /// @brief Field value, offset 0x18, size 0x8
  __declspec(property(get = __get_value, put = __set_value))::System::Object* value;

  constexpr ::UnityEngine::__GUILayoutOption__Type& __get_type();

  constexpr ::UnityEngine::__GUILayoutOption__Type const& __get_type() const;

  constexpr void __set_type(::UnityEngine::__GUILayoutOption__Type value);

  constexpr ::System::Object*& __get_value();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __get_value() const;

  constexpr void __set_value(::System::Object* value);

  static inline ::UnityEngine::GUILayoutOption* New_ctor(::UnityEngine::__GUILayoutOption__Type type, ::System::Object* value);

  /// @brief Method .ctor addr 0x2d0e124 size 0x30 virtual false final false
  inline void _ctor(::UnityEngine::__GUILayoutOption__Type type, ::System::Object* value);

  // Ctor Parameters [CppParam { name: "", ty: "GUILayoutOption", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GUILayoutOption(GUILayoutOption&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GUILayoutOption", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GUILayoutOption(GUILayoutOption const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GUILayoutOption();

public:
  /// @brief Field type, offset: 0x10, size: 0x4, def value: None
  ::UnityEngine::__GUILayoutOption__Type ___type;

  /// @brief Field value, offset: 0x18, size: 0x8, def value: None
  ::System::Object* ___value;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::GUILayoutOption, 0x20>, "Size mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::__GUILayoutOption__Type, "UnityEngine", "GUILayoutOption/Type");
NEED_NO_BOX(::UnityEngine::GUILayoutOption);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::GUILayoutOption*, "UnityEngine", "GUILayoutOption");
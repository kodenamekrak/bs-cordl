#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TouchScreenKeyboard_InternalConstructorHelperArguments)
// Forward declare root types
namespace UnityEngine {
struct TouchScreenKeyboard_InternalConstructorHelperArguments;
}
// Write type traits
MARK_VAL_T(::UnityEngine::TouchScreenKeyboard_InternalConstructorHelperArguments);
// Type: UnityEngine::TouchScreenKeyboard_InternalConstructorHelperArguments
// SizeInfo { instance_size: 24, native_size: 24, calculated_instance_size: 24, calculated_native_size: 40, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10182))
// CS Name: ::UnityEngine::TouchScreenKeyboard_InternalConstructorHelperArguments
struct CORDL_TYPE TouchScreenKeyboard_InternalConstructorHelperArguments {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "keyboardType", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "autocorrection", ty: "uint32_t", modifiers: "", def_value: None }, CppParam {
  // name: "multiline", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "secure", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "alert", ty: "uint32_t",
  // modifiers: "", def_value: None }, CppParam { name: "characterLimit", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr TouchScreenKeyboard_InternalConstructorHelperArguments(uint32_t keyboardType, uint32_t autocorrection, uint32_t multiline, uint32_t secure, uint32_t alert,
                                                                   int32_t characterLimit) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr TouchScreenKeyboard_InternalConstructorHelperArguments();

  /// @brief Field keyboardType, offset: 0x0, size: 0x4, def value: None
  uint32_t keyboardType;

  /// @brief Field autocorrection, offset: 0x4, size: 0x4, def value: None
  uint32_t autocorrection;

  /// @brief Field multiline, offset: 0x8, size: 0x4, def value: None
  uint32_t multiline;

  /// @brief Field secure, offset: 0xc, size: 0x4, def value: None
  uint32_t secure;

  /// @brief Field alert, offset: 0x10, size: 0x4, def value: None
  uint32_t alert;

  /// @brief Field characterLimit, offset: 0x14, size: 0x4, def value: None
  int32_t characterLimit;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::TouchScreenKeyboard_InternalConstructorHelperArguments, 0x18>, "Size mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TouchScreenKeyboard_InternalConstructorHelperArguments, "UnityEngine", "TouchScreenKeyboard_InternalConstructorHelperArguments");
#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FourCC)
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Utilities {
struct FourCC;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::Utilities::FourCC);
// Type: UnityEngine.InputSystem.Utilities::FourCC
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::Utilities {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6667))
// CS Name: ::UnityEngine.InputSystem.Utilities::FourCC
struct CORDL_TYPE FourCC {
public:
  // Declarations
  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::InputSystem::Utilities::FourCC>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::InputSystem::Utilities::FourCC>*();

  /// @brief Method .ctor addr 0x2b0fadc size 0x8 virtual false final false
  inline void _ctor(int32_t code);

  /// @brief Method .ctor addr 0x2b0b85c size 0x20 virtual false final false
  inline void _ctor(char16_t a, char16_t b, char16_t c, char16_t d);

  /// @brief Method .ctor addr 0x2b0fae4 size 0x170 virtual false final false
  inline void _ctor(::StringW str);

  /// @brief Method op_Implicit addr 0x2b0fc54 size 0x4 virtual false final false
  static inline int32_t op_Implicit_int32_t(::UnityEngine::InputSystem::Utilities::FourCC fourCC);

  /// @brief Method op_Implicit addr 0x2b0fc58 size 0x8 virtual false final false
  static inline ::UnityEngine::InputSystem::Utilities::FourCC op_Implicit___UnityEngine__InputSystem__Utilities__FourCC(int32_t i);

  /// @brief Method ToString addr 0x2b0fc60 size 0x1b0 virtual true final false
  inline ::StringW ToString();

  /// @brief Method Equals addr 0x2b0fe10 size 0x10 virtual true final true
  inline bool Equals(::UnityEngine::InputSystem::Utilities::FourCC other);

  /// @brief Method Equals addr 0x2b0fe20 size 0x78 virtual true final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode addr 0x2b0fe98 size 0x8 virtual true final false
  inline int32_t GetHashCode();

  /// @brief Method op_Equality addr 0x2b0fea0 size 0xc virtual false final false
  static inline bool op_Equality(::UnityEngine::InputSystem::Utilities::FourCC left, ::UnityEngine::InputSystem::Utilities::FourCC right);

  /// @brief Method op_Inequality addr 0x2b0feac size 0xc virtual false final false
  static inline bool op_Inequality(::UnityEngine::InputSystem::Utilities::FourCC left, ::UnityEngine::InputSystem::Utilities::FourCC right);

  /// @brief Method FromInt32 addr 0x2b0feb8 size 0x8 virtual false final false
  static inline ::UnityEngine::InputSystem::Utilities::FourCC FromInt32(int32_t i);

  /// @brief Method ToInt32 addr 0x2b0fec0 size 0x4 virtual false final false
  static inline int32_t ToInt32(::UnityEngine::InputSystem::Utilities::FourCC fourCC);

  // Ctor Parameters [CppParam { name: "m_Code", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr FourCC(int32_t m_Code) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr FourCC();

  /// @brief Field m_Code, offset: 0x0, size: 0x4, def value: None
  int32_t m_Code;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Utilities::FourCC, 0x4>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::Utilities
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Utilities::FourCC, "UnityEngine.InputSystem.Utilities", "FourCC");
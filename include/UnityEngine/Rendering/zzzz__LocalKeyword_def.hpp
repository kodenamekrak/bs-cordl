#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/zzzz__LocalKeywordSpace_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LocalKeyword)
namespace System {
template <typename T> class IEquatable_1;
}
namespace UnityEngine::Rendering {
struct LocalKeywordSpace;
}
namespace System {
class Object;
}
// Forward declare root types
namespace UnityEngine::Rendering {
struct LocalKeyword;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::LocalKeyword);
// Type: UnityEngine.Rendering::LocalKeyword
// SizeInfo { instance_size: 24, native_size: 24, calculated_instance_size: 24, calculated_native_size: 36, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Rendering {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10373))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10369))
// CS Name: ::UnityEngine.Rendering::LocalKeyword
struct CORDL_TYPE LocalKeyword {
public:
  // Declarations
  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Rendering::LocalKeyword>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::Rendering::LocalKeyword>*();

  /// @brief Method ToString addr 0x2cef09c size 0x8 virtual true final false
  inline ::StringW ToString();

  /// @brief Method Equals addr 0x2cef0a4 size 0x8c virtual true final false
  inline bool Equals(::System::Object* o);

  /// @brief Method Equals addr 0x2cef130 size 0x48 virtual true final true
  inline bool Equals(::UnityEngine::Rendering::LocalKeyword rhs);

  /// @brief Method GetHashCode addr 0x2cef180 size 0x50 virtual true final false
  inline int32_t GetHashCode();

  // Ctor Parameters [CppParam { name: "m_SpaceInfo", ty: "::UnityEngine::Rendering::LocalKeywordSpace", modifiers: "", def_value: None }, CppParam { name: "m_Name", ty: "::StringW", modifiers: "",
  // def_value: None }, CppParam { name: "m_Index", ty: "uint32_t", modifiers: "", def_value: None }]
  constexpr LocalKeyword(::UnityEngine::Rendering::LocalKeywordSpace m_SpaceInfo, ::StringW m_Name, uint32_t m_Index) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr LocalKeyword();

  /// @brief Field m_SpaceInfo, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::Rendering::LocalKeywordSpace m_SpaceInfo;

  /// @brief Field m_Name, offset: 0x8, size: 0x8, def value: None
  ::StringW m_Name;

  /// @brief Field m_Index, offset: 0x10, size: 0x4, def value: None
  uint32_t m_Index;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::LocalKeyword, 0x18>, "Size mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::LocalKeyword, "UnityEngine.Rendering", "LocalKeyword");
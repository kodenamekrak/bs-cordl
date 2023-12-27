#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(TransformData)
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace HoudiniEngineUnity {
struct TransformData;
}
// Write type traits
MARK_VAL_T(::HoudiniEngineUnity::TransformData);
// Type: HoudiniEngineUnity::TransformData
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 96, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10249)), TypeDefinitionIndex(TypeDefinitionIndex(10252))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9823))
// CS Name: ::HoudiniEngineUnity::TransformData
struct CORDL_TYPE TransformData {
public:
  // Declarations
  /// @brief Method .ctor addr 0x21b3370 size 0x98 virtual false final false
  inline void _ctor(::UnityEngine::Transform* other);

  /// @brief Method CopyTo addr 0x21b3408 size 0x80 virtual false final false
  inline void CopyTo(::UnityEngine::Transform* other, bool copyParent);

  /// @brief Method CopyToLocal addr 0x21b3488 size 0x80 virtual false final false
  inline void CopyToLocal(::UnityEngine::Transform* other, bool copyParent);

  // Ctor Parameters [CppParam { name: "position", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "rotation", ty: "::UnityEngine::Quaternion", modifiers: "",
  // def_value: None }, CppParam { name: "localPosition", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "localScale", ty: "::UnityEngine::Vector3", modifiers: "",
  // def_value: None }, CppParam { name: "localRotation", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: None }, CppParam { name: "parent", ty: "::UnityEngine::Transform*", modifiers: "",
  // def_value: None }]
  constexpr TransformData(::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation, ::UnityEngine::Vector3 localPosition, ::UnityEngine::Vector3 localScale,
                          ::UnityEngine::Quaternion localRotation, ::UnityEngine::Transform* parent) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr TransformData();

  /// @brief Field position, offset: 0x0, size: 0xc, def value: None
  ::UnityEngine::Vector3 position;

  /// @brief Field rotation, offset: 0xc, size: 0x10, def value: None
  ::UnityEngine::Quaternion rotation;

  /// @brief Field localPosition, offset: 0x1c, size: 0xc, def value: None
  ::UnityEngine::Vector3 localPosition;

  /// @brief Field localScale, offset: 0x28, size: 0xc, def value: None
  ::UnityEngine::Vector3 localScale;

  /// @brief Field localRotation, offset: 0x34, size: 0x10, def value: None
  ::UnityEngine::Quaternion localRotation;

  /// @brief Field parent, offset: 0x48, size: 0x8, def value: None
  ::UnityEngine::Transform* parent;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x50 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::TransformData, 0x50>, "Size mismatch!");

} // namespace HoudiniEngineUnity
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::TransformData, "HoudiniEngineUnity", "TransformData");
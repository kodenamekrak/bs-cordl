#pragma once
// IWYU pragma private; include "UnityEngine/ProBuilder/Shapes/Cube.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/ProBuilder/Shapes/zzzz__Shape_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Cube)
namespace UnityEngine::ProBuilder::Shapes {
class Shape;
}
namespace UnityEngine::ProBuilder {
class ProBuilderMesh;
}
namespace UnityEngine {
struct Bounds;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::ProBuilder::Shapes {
class Cube;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ProBuilder::Shapes::Cube);
// Type: UnityEngine.ProBuilder.Shapes::Cube
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::ProBuilder::Shapes {
// Is value type: false
// CS Name: ::UnityEngine.ProBuilder.Shapes::Cube*
class CORDL_TYPE Cube : public ::UnityEngine::ProBuilder::Shapes::Shape {
public:
  // Declarations
  /// @brief Field k_CubeTriangles, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_k_CubeTriangles, put = setStaticF_k_CubeTriangles)) ::ArrayW<int32_t, ::Array<int32_t>*> k_CubeTriangles;

  /// @brief Field k_CubeVertices, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_k_CubeVertices, put = setStaticF_k_CubeVertices)) ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> k_CubeVertices;

  /// @brief Method CopyShape, addr 0x46eb980, size 0x4, virtual true, abstract: false, final false
  inline void CopyShape(::UnityEngine::ProBuilder::Shapes::Shape* shape);

  static inline ::UnityEngine::ProBuilder::Shapes::Cube* New_ctor();

  /// @brief Method RebuildMesh, addr 0x46eb984, size 0x20c, virtual true, abstract: false, final false
  inline ::UnityEngine::Bounds RebuildMesh(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::UnityEngine::Vector3 size, ::UnityEngine::Quaternion rotation);

  /// @brief Method .ctor, addr 0x46ebb90, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::ArrayW<int32_t, ::Array<int32_t>*> getStaticF_k_CubeTriangles();

  static inline ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> getStaticF_k_CubeVertices();

  static inline void setStaticF_k_CubeTriangles(::ArrayW<int32_t, ::Array<int32_t>*> value);

  static inline void setStaticF_k_CubeVertices(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Cube();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Cube", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Cube(Cube&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Cube", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Cube(Cube const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14305 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::Shapes::Cube, 0x10>, "Size mismatch!");

} // namespace UnityEngine::ProBuilder::Shapes
NEED_NO_BOX(::UnityEngine::ProBuilder::Shapes::Cube);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::Shapes::Cube*, "UnityEngine.ProBuilder.Shapes", "Cube");

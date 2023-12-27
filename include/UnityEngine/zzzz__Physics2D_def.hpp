#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Physics2D)
namespace UnityEngine {
class Rigidbody2D;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct PhysicsScene2D;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine {
struct RaycastHit2D;
}
namespace UnityEngine {
struct ContactFilter2D;
}
namespace UnityEngine {
struct Ray;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine {
class Physics2D;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Physics2D);
// Type: UnityEngine::Physics2D
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15930))
// CS Name: ::UnityEngine::Physics2D*
class CORDL_TYPE Physics2D : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_LastDisabledRigidbody2D, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_m_LastDisabledRigidbody2D,
                             put = setStaticF_m_LastDisabledRigidbody2D))::System::Collections::Generic::List_1<::UnityEngine::Rigidbody2D*>* m_LastDisabledRigidbody2D;

  static inline void setStaticF_m_LastDisabledRigidbody2D(::System::Collections::Generic::List_1<::UnityEngine::Rigidbody2D*>* value);

  static inline ::System::Collections::Generic::List_1<::UnityEngine::Rigidbody2D*>* getStaticF_m_LastDisabledRigidbody2D();

  /// @brief Method get_defaultPhysicsScene addr 0x2d124bc size 0x8 virtual false final false
  static inline ::UnityEngine::PhysicsScene2D get_defaultPhysicsScene();

  /// @brief Method get_queriesHitTriggers addr 0x2d124c4 size 0x28 virtual false final false
  static inline bool get_queriesHitTriggers();

  /// @brief Method Raycast addr 0x2d124ec size 0xc4 virtual false final false
  static inline ::UnityEngine::RaycastHit2D Raycast(::UnityEngine::Vector2 origin, ::UnityEngine::Vector2 direction);

  /// @brief Method Raycast addr 0x2d125b0 size 0xcc virtual false final false
  static inline ::UnityEngine::RaycastHit2D Raycast(::UnityEngine::Vector2 origin, ::UnityEngine::Vector2 direction, float_t distance);

  /// @brief Method Raycast addr 0x2d1267c size 0x11c virtual false final false
  static inline ::UnityEngine::RaycastHit2D Raycast(::UnityEngine::Vector2 origin, ::UnityEngine::Vector2 direction, float_t distance, int32_t layerMask);

  /// @brief Method Raycast addr 0x2d12798 size 0x11c virtual false final false
  static inline ::UnityEngine::RaycastHit2D Raycast(::UnityEngine::Vector2 origin, ::UnityEngine::Vector2 direction, float_t distance, int32_t layerMask, float_t minDepth);

  /// @brief Method Raycast addr 0x2d128b4 size 0x124 virtual false final false
  static inline ::UnityEngine::RaycastHit2D Raycast(::UnityEngine::Vector2 origin, ::UnityEngine::Vector2 direction, float_t distance, int32_t layerMask, float_t minDepth, float_t maxDepth);

  /// @brief Method Raycast addr 0x2d129d8 size 0xbc virtual false final false
  static inline int32_t Raycast(::UnityEngine::Vector2 origin, ::UnityEngine::Vector2 direction, ::UnityEngine::ContactFilter2D contactFilter,
                                ::ArrayW<::UnityEngine::RaycastHit2D, ::Array<::UnityEngine::RaycastHit2D>*> results);

  /// @brief Method Raycast addr 0x2d12a94 size 0xc4 virtual false final false
  static inline int32_t Raycast(::UnityEngine::Vector2 origin, ::UnityEngine::Vector2 direction, ::UnityEngine::ContactFilter2D contactFilter,
                                ::ArrayW<::UnityEngine::RaycastHit2D, ::Array<::UnityEngine::RaycastHit2D>*> results, float_t distance);

  /// @brief Method Raycast addr 0x2d12b58 size 0xc4 virtual false final false
  static inline int32_t Raycast(::UnityEngine::Vector2 origin, ::UnityEngine::Vector2 direction, ::UnityEngine::ContactFilter2D contactFilter,
                                ::System::Collections::Generic::List_1<::UnityEngine::RaycastHit2D>* results, float_t distance);

  /// @brief Method GetRayIntersection addr 0x2d12c1c size 0xc0 virtual false final false
  static inline ::UnityEngine::RaycastHit2D GetRayIntersection(::UnityEngine::Ray ray, float_t distance, int32_t layerMask);

  /// @brief Method GetRayIntersectionAll addr 0x2d12cdc size 0xac virtual false final false
  static inline ::ArrayW<::UnityEngine::RaycastHit2D, ::Array<::UnityEngine::RaycastHit2D>*> GetRayIntersectionAll(::UnityEngine::Ray ray);

  /// @brief Method GetRayIntersectionAll addr 0x2d12e38 size 0xac virtual false final false
  static inline ::ArrayW<::UnityEngine::RaycastHit2D, ::Array<::UnityEngine::RaycastHit2D>*> GetRayIntersectionAll(::UnityEngine::Ray ray, float_t distance);

  /// @brief Method GetRayIntersectionAll addr 0x2d12ee4 size 0xb8 virtual false final false
  static inline ::ArrayW<::UnityEngine::RaycastHit2D, ::Array<::UnityEngine::RaycastHit2D>*> GetRayIntersectionAll(::UnityEngine::Ray ray, float_t distance, int32_t layerMask);

  /// @brief Method GetRayIntersectionAll_Internal addr 0x2d12d88 size 0xb0 virtual false final false
  static inline ::ArrayW<::UnityEngine::RaycastHit2D, ::Array<::UnityEngine::RaycastHit2D>*> GetRayIntersectionAll_Internal(::UnityEngine::PhysicsScene2D physicsScene, ::UnityEngine::Vector3 origin,
                                                                                                                            ::UnityEngine::Vector3 direction, float_t distance, int32_t layerMask);

  /// @brief Method GetRayIntersectionNonAlloc addr 0x2d13008 size 0x98 virtual false final false
  static inline int32_t GetRayIntersectionNonAlloc(::UnityEngine::Ray ray, ::ArrayW<::UnityEngine::RaycastHit2D, ::Array<::UnityEngine::RaycastHit2D>*> results);

  /// @brief Method GetRayIntersectionNonAlloc addr 0x2d130a0 size 0xa0 virtual false final false
  static inline int32_t GetRayIntersectionNonAlloc(::UnityEngine::Ray ray, ::ArrayW<::UnityEngine::RaycastHit2D, ::Array<::UnityEngine::RaycastHit2D>*> results, float_t distance);

  /// @brief Method GetRayIntersectionNonAlloc addr 0x2d13140 size 0xa4 virtual false final false
  static inline int32_t GetRayIntersectionNonAlloc(::UnityEngine::Ray ray, ::ArrayW<::UnityEngine::RaycastHit2D, ::Array<::UnityEngine::RaycastHit2D>*> results, float_t distance, int32_t layerMask);

  /// @brief Method GetRayIntersectionAll_Internal_Injected addr 0x2d12f9c size 0x6c virtual false final false
  static inline ::ArrayW<::UnityEngine::RaycastHit2D, ::Array<::UnityEngine::RaycastHit2D>*> GetRayIntersectionAll_Internal_Injected(ByRef<::UnityEngine::PhysicsScene2D> physicsScene,
                                                                                                                                     ByRef<::UnityEngine::Vector3> origin,
                                                                                                                                     ByRef<::UnityEngine::Vector3> direction, float_t distance,
                                                                                                                                     int32_t layerMask);

  // Ctor Parameters [CppParam { name: "", ty: "Physics2D", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Physics2D(Physics2D&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Physics2D", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Physics2D(Physics2D const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Physics2D();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Physics2D, 0x10>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::Physics2D);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Physics2D*, "UnityEngine", "Physics2D");
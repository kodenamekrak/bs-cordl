#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/ProBuilder/zzzz__EntityType_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(Entity)
namespace UnityEngine::ProBuilder {
struct EntityType;
}
// Forward declare root types
namespace UnityEngine::ProBuilder {
class Entity;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ProBuilder::Entity);
// Type: UnityEngine.ProBuilder::Entity
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 28, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::ProBuilder {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12156)), TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12122))
// CS Name: ::UnityEngine.ProBuilder::Entity*
class CORDL_TYPE Entity : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field m_EntityType, offset 0x18, size 0x4
  __declspec(property(get = __get_m_EntityType, put = __set_m_EntityType))::UnityEngine::ProBuilder::EntityType m_EntityType;

  __declspec(property(get = get_entityType))::UnityEngine::ProBuilder::EntityType entityType;

  constexpr ::UnityEngine::ProBuilder::EntityType& __get_m_EntityType();

  constexpr ::UnityEngine::ProBuilder::EntityType const& __get_m_EntityType() const;

  constexpr void __set_m_EntityType(::UnityEngine::ProBuilder::EntityType value);

  /// @brief Method get_entityType addr 0x2b3ffb8 size 0x8 virtual false final false
  inline ::UnityEngine::ProBuilder::EntityType get_entityType();

  /// @brief Method Awake addr 0x2b3ffc0 size 0xc8 virtual false final false
  inline void Awake();

  /// @brief Method SetEntity addr 0x2b40088 size 0x8 virtual false final false
  inline void SetEntity(::UnityEngine::ProBuilder::EntityType t);

  static inline ::UnityEngine::ProBuilder::Entity* New_ctor();

  /// @brief Method .ctor addr 0x2b40090 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "Entity", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Entity(Entity&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Entity", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Entity(Entity const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Entity();

public:
  /// @brief Field m_EntityType, offset: 0x18, size: 0x4, def value: None
  ::UnityEngine::ProBuilder::EntityType ___m_EntityType;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::Entity, 0x20>, "Size mismatch!");

} // namespace UnityEngine::ProBuilder
NEED_NO_BOX(::UnityEngine::ProBuilder::Entity);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::Entity*, "UnityEngine.ProBuilder", "Entity");
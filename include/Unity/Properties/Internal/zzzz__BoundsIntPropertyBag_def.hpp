#pragma once
// IWYU pragma private; include "Unity/Properties/Internal/BoundsIntPropertyBag.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Properties/zzzz__ContainerPropertyBag_1_def.hpp"
#include "Unity/Properties/zzzz__Property_2_def.hpp"
#include "UnityEngine/zzzz__BoundsInt_def.hpp"
#include "UnityEngine/zzzz__Vector3Int_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(BoundsIntPropertyBag)
namespace Unity::Properties::Internal {
class __BoundsIntPropertyBag__PositionProperty;
}
namespace Unity::Properties::Internal {
class __BoundsIntPropertyBag__SizeProperty;
}
// Forward declare root types
namespace Unity::Properties::Internal {
class BoundsIntPropertyBag;
}
namespace Unity::Properties::Internal {
class __BoundsIntPropertyBag__PositionProperty;
}
namespace Unity::Properties::Internal {
class __BoundsIntPropertyBag__SizeProperty;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Properties::Internal::BoundsIntPropertyBag);
MARK_REF_PTR_T(::Unity::Properties::Internal::__BoundsIntPropertyBag__PositionProperty);
MARK_REF_PTR_T(::Unity::Properties::Internal::__BoundsIntPropertyBag__SizeProperty);
// Type: ::PositionProperty
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Properties::Internal {
// Is value type: false
// CS Name: ::BoundsIntPropertyBag::PositionProperty*
class CORDL_TYPE __BoundsIntPropertyBag__PositionProperty : public ::Unity::Properties::Property_2<::UnityEngine::BoundsInt, ::UnityEngine::Vector3Int> {
public:
  // Declarations
  __declspec(property(get = get_Name)) ::StringW Name;

  static inline ::Unity::Properties::Internal::__BoundsIntPropertyBag__PositionProperty* New_ctor();

  /// @brief Method .ctor, addr 0x48b037c, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Name, addr 0x48b040c, size 0x40, virtual true, abstract: false, final false
  inline ::StringW get_Name();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BoundsIntPropertyBag__PositionProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__BoundsIntPropertyBag__PositionProperty", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BoundsIntPropertyBag__PositionProperty(__BoundsIntPropertyBag__PositionProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BoundsIntPropertyBag__PositionProperty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BoundsIntPropertyBag__PositionProperty(__BoundsIntPropertyBag__PositionProperty const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17478 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Properties::Internal::__BoundsIntPropertyBag__PositionProperty, 0x18>, "Size mismatch!");

} // namespace Unity::Properties::Internal
// Type: ::SizeProperty
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Properties::Internal {
// Is value type: false
// CS Name: ::BoundsIntPropertyBag::SizeProperty*
class CORDL_TYPE __BoundsIntPropertyBag__SizeProperty : public ::Unity::Properties::Property_2<::UnityEngine::BoundsInt, ::UnityEngine::Vector3Int> {
public:
  // Declarations
  __declspec(property(get = get_Name)) ::StringW Name;

  static inline ::Unity::Properties::Internal::__BoundsIntPropertyBag__SizeProperty* New_ctor();

  /// @brief Method .ctor, addr 0x48b03c4, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Name, addr 0x48b044c, size 0x40, virtual true, abstract: false, final false
  inline ::StringW get_Name();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BoundsIntPropertyBag__SizeProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__BoundsIntPropertyBag__SizeProperty", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BoundsIntPropertyBag__SizeProperty(__BoundsIntPropertyBag__SizeProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BoundsIntPropertyBag__SizeProperty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BoundsIntPropertyBag__SizeProperty(__BoundsIntPropertyBag__SizeProperty const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17479 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Properties::Internal::__BoundsIntPropertyBag__SizeProperty, 0x18>, "Size mismatch!");

} // namespace Unity::Properties::Internal
// Type: Unity.Properties.Internal::BoundsIntPropertyBag
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Properties::Internal {
// Is value type: false
// CS Name: ::Unity.Properties.Internal::BoundsIntPropertyBag*
class CORDL_TYPE BoundsIntPropertyBag : public ::Unity::Properties::ContainerPropertyBag_1<::UnityEngine::BoundsInt> {
public:
  // Declarations
  using PositionProperty = ::Unity::Properties::Internal::__BoundsIntPropertyBag__PositionProperty;

  using SizeProperty = ::Unity::Properties::Internal::__BoundsIntPropertyBag__SizeProperty;

  static inline ::Unity::Properties::Internal::BoundsIntPropertyBag* New_ctor();

  /// @brief Method .ctor, addr 0x48af24c, size 0xf0, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BoundsIntPropertyBag();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BoundsIntPropertyBag", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BoundsIntPropertyBag(BoundsIntPropertyBag&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BoundsIntPropertyBag", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BoundsIntPropertyBag(BoundsIntPropertyBag const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17480 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Properties::Internal::BoundsIntPropertyBag, 0x28>, "Size mismatch!");

} // namespace Unity::Properties::Internal
NEED_NO_BOX(::Unity::Properties::Internal::BoundsIntPropertyBag);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Properties::Internal::BoundsIntPropertyBag*, "Unity.Properties.Internal", "BoundsIntPropertyBag");
NEED_NO_BOX(::Unity::Properties::Internal::__BoundsIntPropertyBag__PositionProperty);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Properties::Internal::__BoundsIntPropertyBag__PositionProperty*, "Unity.Properties.Internal", "BoundsIntPropertyBag/PositionProperty");
NEED_NO_BOX(::Unity::Properties::Internal::__BoundsIntPropertyBag__SizeProperty);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Properties::Internal::__BoundsIntPropertyBag__SizeProperty*, "Unity.Properties.Internal", "BoundsIntPropertyBag/SizeProperty");

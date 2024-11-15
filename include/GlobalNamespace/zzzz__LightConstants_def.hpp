#pragma once
// IWYU pragma private; include "GlobalNamespace/LightConstants.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LightConstants)
namespace GlobalNamespace {
struct __LightConstants__BakeId;
}
namespace System::Collections::Generic {
template <typename T> class IReadOnlyList_1;
}
// Forward declare root types
namespace GlobalNamespace {
struct __LightConstants__BakeId;
}
namespace GlobalNamespace {
class LightConstants;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__LightConstants__BakeId);
MARK_REF_PTR_T(::GlobalNamespace::LightConstants);
// Type: ::BakeId
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::LightConstants::BakeId
struct CORDL_TYPE __LightConstants__BakeId {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____LightConstants__BakeId_Unwrapped
  enum struct ____LightConstants__BakeId_Unwrapped : int32_t {
    __E_A = static_cast<int32_t>(0x1),
    __E_B = static_cast<int32_t>(0x2),
    __E_C = static_cast<int32_t>(0x3),
    __E_D = static_cast<int32_t>(0x4),
    __E_E = static_cast<int32_t>(0x5),
    __E_F = static_cast<int32_t>(0x6),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____LightConstants__BakeId_Unwrapped() const noexcept {
    return static_cast<____LightConstants__BakeId_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __LightConstants__BakeId();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __LightConstants__BakeId(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field A value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__LightConstants__BakeId const A;

  /// @brief Field B value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__LightConstants__BakeId const B;

  /// @brief Field C value: static_cast<int32_t>(0x3)
  static ::GlobalNamespace::__LightConstants__BakeId const C;

  /// @brief Field D value: static_cast<int32_t>(0x4)
  static ::GlobalNamespace::__LightConstants__BakeId const D;

  /// @brief Field E value: static_cast<int32_t>(0x5)
  static ::GlobalNamespace::__LightConstants__BakeId const E;

  /// @brief Field F value: static_cast<int32_t>(0x6)
  static ::GlobalNamespace::__LightConstants__BakeId const F;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16278 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__LightConstants__BakeId, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__LightConstants__BakeId, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::LightConstants
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::LightConstants*
class CORDL_TYPE LightConstants : public ::System::Object {
public:
  // Declarations
  using BakeId = ::GlobalNamespace::__LightConstants__BakeId;

  /// @brief Field allBakeIds, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_allBakeIds, put = setStaticF_allBakeIds)) ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::__LightConstants__BakeId>* allBakeIds;

  /// @brief Method GetComputeFieldPropertyId, addr 0x398bc80, size 0x50, virtual false, abstract: false, final false
  static inline int32_t GetComputeFieldPropertyId(::StringW fieldName);

  /// @brief Method GetLightProbeLightBakeIdPropertyId, addr 0x398bbd8, size 0xa8, virtual false, abstract: false, final false
  static inline int32_t GetLightProbeLightBakeIdPropertyId(::GlobalNamespace::__LightConstants__BakeId bakeId);

  /// @brief Method GetLightmapLightBakeIdPropertyId, addr 0x398bb30, size 0xa8, virtual false, abstract: false, final false
  static inline int32_t GetLightmapLightBakeIdPropertyId(::GlobalNamespace::__LightConstants__BakeId bakeId);

  static inline ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::__LightConstants__BakeId>* getStaticF_allBakeIds();

  static inline void setStaticF_allBakeIds(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::__LightConstants__BakeId>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LightConstants();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LightConstants", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LightConstants(LightConstants&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LightConstants", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LightConstants(LightConstants const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16279 };

  /// @brief Field kBaseLightId offset 0xffffffff size 0x4
  static constexpr int32_t kBaseLightId{ static_cast<int32_t>(0x19) };

  /// @brief Field kLightProbeLightBakeIdPrefix offset 0xffffffff size 0x8
  static constexpr ::ConstString kLightProbeLightBakeIdPrefix{ u"_LightProbeLightBakeId" };

  /// @brief Field kLightmapLightBakeIdPrefix offset 0xffffffff size 0x8
  static constexpr ::ConstString kLightmapLightBakeIdPrefix{ u"_LightmapLightBakeId" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LightConstants, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__LightConstants__BakeId, "", "LightConstants/BakeId");
NEED_NO_BOX(::GlobalNamespace::LightConstants);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LightConstants*, "", "LightConstants");

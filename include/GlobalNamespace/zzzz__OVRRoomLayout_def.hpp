#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRRoomLayout.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRRoomLayout)
namespace GlobalNamespace {
template <typename T> class IOVRAnchorComponent_1;
}
namespace GlobalNamespace {
struct OVRAnchor;
}
namespace GlobalNamespace {
template <typename TResult> struct OVRTask_1;
}
namespace GlobalNamespace {
struct __OVRPlugin__SpaceComponentType;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
struct Guid;
}
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
struct OVRRoomLayout;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRRoomLayout);
// Type: ::OVRRoomLayout
// SizeInfo { instance_size: 8, native_size: 8, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::OVRRoomLayout
struct CORDL_TYPE OVRRoomLayout {
public:
  // Declarations
  __declspec(property(get = get_Handle)) uint64_t Handle;

  __declspec(property(get = IOVRAnchorComponent_OVRRoomLayout__get_Handle)) uint64_t IOVRAnchorComponent_OVRRoomLayout__Handle;

  __declspec(property(get = IOVRAnchorComponent_OVRRoomLayout__get_Type)) ::GlobalNamespace::__OVRPlugin__SpaceComponentType IOVRAnchorComponent_OVRRoomLayout__Type;

  __declspec(property(get = get_IsEnabled)) bool IsEnabled;

  __declspec(property(get = get_IsNull)) bool IsNull;

  /// @brief Field Null, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Null, put = setStaticF_Null)) ::GlobalNamespace::OVRRoomLayout Null;

  __declspec(property(get = get_Type)) ::GlobalNamespace::__OVRPlugin__SpaceComponentType Type;

  /// @brief Convert operator to "::GlobalNamespace::IOVRAnchorComponent_1<::GlobalNamespace::OVRRoomLayout>"
  constexpr operator ::GlobalNamespace::IOVRAnchorComponent_1<::GlobalNamespace::OVRRoomLayout>*();

  /// @brief Convert operator to "::System::IEquatable_1<::GlobalNamespace::OVRRoomLayout>"
  constexpr operator ::System::IEquatable_1<::GlobalNamespace::OVRRoomLayout>*();

  /// @brief Method Equals, addr 0x3f3f1ec, size 0x90, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x3f3f0a8, size 0x68, virtual true, abstract: false, final true
  inline bool Equals(::GlobalNamespace::OVRRoomLayout other);

  /// @brief Method FetchLayoutAnchorsAsync, addr 0x3f3f3c0, size 0x314, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OVRTask_1<bool> FetchLayoutAnchorsAsync(::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>* anchors);

  /// @brief Method GetHashCode, addr 0x3f3f27c, size 0x94, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method IOVRAnchorComponent<OVRRoomLayout>.FromAnchor, addr 0x3f3ee80, size 0x30, virtual true, abstract: false, final true
  inline ::GlobalNamespace::OVRRoomLayout IOVRAnchorComponent_OVRRoomLayout__FromAnchor(::GlobalNamespace::OVRAnchor anchor);

  /// @brief Method IOVRAnchorComponent<OVRRoomLayout>.SetEnabledAsync, addr 0x3f3f05c, size 0x4c, virtual true, abstract: false, final true
  inline ::GlobalNamespace::OVRTask_1<bool> IOVRAnchorComponent_OVRRoomLayout__SetEnabledAsync(bool enabled, double_t timeout);

  /// @brief Method IOVRAnchorComponent<OVRRoomLayout>.get_Handle, addr 0x3f3ee2c, size 0x54, virtual true, abstract: false, final true
  inline uint64_t IOVRAnchorComponent_OVRRoomLayout__get_Handle();

  /// @brief Method IOVRAnchorComponent<OVRRoomLayout>.get_Type, addr 0x3f3edd4, size 0x50, virtual true, abstract: false, final true
  inline ::GlobalNamespace::__OVRPlugin__SpaceComponentType IOVRAnchorComponent_OVRRoomLayout__get_Type();

  /// @brief Method ToString, addr 0x3f3f310, size 0xa8, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method TryGetRoomLayout, addr 0x3f3f6d4, size 0x11c, virtual false, abstract: false, final false
  inline bool TryGetRoomLayout(ByRef<::System::Guid> ceiling, ByRef<::System::Guid> floor, ByRef<::ArrayW<::System::Guid, ::Array<::System::Guid>*>> walls);

  /// @brief Method .ctor, addr 0x3f3eeb0, size 0x64, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::OVRAnchor anchor);

  static inline ::GlobalNamespace::OVRRoomLayout getStaticF_Null();

  /// @brief Method get_Handle, addr 0x3f3f3b8, size 0x8, virtual false, abstract: false, final false
  inline uint64_t get_Handle();

  /// @brief Method get_IsEnabled, addr 0x3f3ef70, size 0xec, virtual true, abstract: false, final true
  inline bool get_IsEnabled();

  /// @brief Method get_IsNull, addr 0x3f3ef14, size 0x5c, virtual true, abstract: false, final true
  inline bool get_IsNull();

  /// @brief Method get_Type, addr 0x3f3ee24, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__OVRPlugin__SpaceComponentType get_Type();

  /// @brief Convert to "::GlobalNamespace::IOVRAnchorComponent_1<::GlobalNamespace::OVRRoomLayout>"
  constexpr ::GlobalNamespace::IOVRAnchorComponent_1<::GlobalNamespace::OVRRoomLayout>* i___GlobalNamespace__IOVRAnchorComponent_1___GlobalNamespace__OVRRoomLayout_();

  /// @brief Convert to "::System::IEquatable_1<::GlobalNamespace::OVRRoomLayout>"
  constexpr ::System::IEquatable_1<::GlobalNamespace::OVRRoomLayout>* i___System__IEquatable_1___GlobalNamespace__OVRRoomLayout_();

  /// @brief Method op_Equality, addr 0x3f3f110, size 0x6c, virtual false, abstract: false, final false
  static inline bool op_Equality(::GlobalNamespace::OVRRoomLayout lhs, ::GlobalNamespace::OVRRoomLayout rhs);

  /// @brief Method op_Inequality, addr 0x3f3f17c, size 0x70, virtual false, abstract: false, final false
  static inline bool op_Inequality(::GlobalNamespace::OVRRoomLayout lhs, ::GlobalNamespace::OVRRoomLayout rhs);

  static inline void setStaticF_Null(::GlobalNamespace::OVRRoomLayout value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRRoomLayout();

  // Ctor Parameters [CppParam { name: "_Handle_k__BackingField", ty: "uint64_t", modifiers: "", def_value: None }]
  constexpr OVRRoomLayout(uint64_t _Handle_k__BackingField) noexcept;

  /// @brief Field <Handle>k__BackingField, offset: 0x0, size: 0x8, def value: None
  uint64_t _Handle_k__BackingField;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7805 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRRoomLayout, 0x8>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRRoomLayout, _Handle_k__BackingField) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRRoomLayout, "", "OVRRoomLayout");

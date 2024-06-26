#pragma once
// IWYU pragma private; include "GlobalNamespace/DlcPromoPanelModel.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__DlcPromoPanelModel_def.hpp"
#include "GlobalNamespace/zzzz__PlayerSensitivityFlag_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DlcPromoPanelModel)
namespace GlobalNamespace {
class BeatmapLevelPack;
}
namespace GlobalNamespace {
class BeatmapLevel;
}
namespace GlobalNamespace {
class BeatmapLevelsModel;
}
namespace GlobalNamespace {
class DlcPromoPanelDataSO;
}
namespace GlobalNamespace {
struct EntitlementStatus;
}
namespace GlobalNamespace {
class IAdditionalContentModel;
}
namespace GlobalNamespace {
class IAnalyticsModel;
}
namespace GlobalNamespace {
class IPlatformInit;
}
namespace GlobalNamespace {
class PackDefinitionSO;
}
namespace GlobalNamespace {
class PackPromoInfoSO;
}
namespace GlobalNamespace {
class PlayerDataModel;
}
namespace GlobalNamespace {
struct PlayerSensitivityFlag;
}
namespace GlobalNamespace {
class PromoBannerInfoSO;
}
namespace GlobalNamespace {
class __DlcPromoPanelModel__PromoInfo;
}
namespace GlobalNamespace {
struct __DlcPromoPanelModel__PromoInfo__PromoType;
}
namespace GlobalNamespace {
struct __DlcPromoPanelModel___GetPackDataForMainMenuPromoBannerInternal_d__24;
}
namespace GlobalNamespace {
struct __DlcPromoPanelModel___GetPackDataForMainMenuPromoBanner_d__23;
}
namespace GlobalNamespace {
struct __DlcPromoPanelModel___HandleAdditionalContentModelDidInvalidateData_d__33;
}
namespace GlobalNamespace {
struct __DlcPromoPanelModel___InitializeInternalAsync_d__19;
}
namespace GlobalNamespace {
struct __DlcPromoPanelModel___Initialize_d__17;
}
namespace GlobalNamespace {
struct __DlcPromoPanelModel___LoadPackPromoInfoAsync_d__22;
}
namespace GlobalNamespace {
struct __DlcPromoPanelModel___UpdateModelDataAsync_d__20;
}
namespace GlobalNamespace {
struct __DlcPromoPanelModel___UpdateOwnedPacksAsync_d__32;
}
namespace GlobalNamespace {
struct __DlcPromoPanelModel___UpdatePromoInfosAsync_d__21;
}
namespace GlobalNamespace {
class __DlcPromoPanelModel____c;
}
namespace GlobalNamespace {
class __DlcPromoPanelModel____c__DisplayClass24_0;
}
namespace GlobalNamespace {
class __PackPromoInfoSO__LevelPromoInfo;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct AsyncTaskMethodBuilder_1;
}
namespace System::Runtime::CompilerServices {
struct AsyncTaskMethodBuilder;
}
namespace System::Runtime::CompilerServices {
struct AsyncVoidMethodBuilder;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct TaskAwaiter_1;
}
namespace System::Runtime::CompilerServices {
struct TaskAwaiter;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
class Random;
}
namespace System {
template <typename T1, typename T2> struct ValueTuple_2;
}
namespace UnityEngine {
class Sprite;
}
namespace Zenject {
class IInitializable;
}
// Forward declare root types
namespace GlobalNamespace {
struct __DlcPromoPanelModel__PromoInfo__PromoType;
}
namespace GlobalNamespace {
class DlcPromoPanelModel;
}
namespace GlobalNamespace {
class __DlcPromoPanelModel__PromoInfo;
}
namespace GlobalNamespace {
class __DlcPromoPanelModel____c;
}
namespace GlobalNamespace {
class __DlcPromoPanelModel____c__DisplayClass24_0;
}
namespace GlobalNamespace {
struct __DlcPromoPanelModel___GetPackDataForMainMenuPromoBannerInternal_d__24;
}
namespace GlobalNamespace {
struct __DlcPromoPanelModel___GetPackDataForMainMenuPromoBanner_d__23;
}
namespace GlobalNamespace {
struct __DlcPromoPanelModel___HandleAdditionalContentModelDidInvalidateData_d__33;
}
namespace GlobalNamespace {
struct __DlcPromoPanelModel___InitializeInternalAsync_d__19;
}
namespace GlobalNamespace {
struct __DlcPromoPanelModel___Initialize_d__17;
}
namespace GlobalNamespace {
struct __DlcPromoPanelModel___LoadPackPromoInfoAsync_d__22;
}
namespace GlobalNamespace {
struct __DlcPromoPanelModel___UpdateModelDataAsync_d__20;
}
namespace GlobalNamespace {
struct __DlcPromoPanelModel___UpdateOwnedPacksAsync_d__32;
}
namespace GlobalNamespace {
struct __DlcPromoPanelModel___UpdatePromoInfosAsync_d__21;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__DlcPromoPanelModel__PromoInfo__PromoType);
MARK_REF_PTR_T(::GlobalNamespace::DlcPromoPanelModel);
MARK_REF_PTR_T(::GlobalNamespace::__DlcPromoPanelModel__PromoInfo);
MARK_REF_PTR_T(::GlobalNamespace::__DlcPromoPanelModel____c);
MARK_REF_PTR_T(::GlobalNamespace::__DlcPromoPanelModel____c__DisplayClass24_0);
MARK_VAL_T(::GlobalNamespace::__DlcPromoPanelModel___GetPackDataForMainMenuPromoBannerInternal_d__24);
MARK_VAL_T(::GlobalNamespace::__DlcPromoPanelModel___GetPackDataForMainMenuPromoBanner_d__23);
MARK_VAL_T(::GlobalNamespace::__DlcPromoPanelModel___HandleAdditionalContentModelDidInvalidateData_d__33);
MARK_VAL_T(::GlobalNamespace::__DlcPromoPanelModel___InitializeInternalAsync_d__19);
MARK_VAL_T(::GlobalNamespace::__DlcPromoPanelModel___Initialize_d__17);
MARK_VAL_T(::GlobalNamespace::__DlcPromoPanelModel___LoadPackPromoInfoAsync_d__22);
MARK_VAL_T(::GlobalNamespace::__DlcPromoPanelModel___UpdateModelDataAsync_d__20);
MARK_VAL_T(::GlobalNamespace::__DlcPromoPanelModel___UpdateOwnedPacksAsync_d__32);
MARK_VAL_T(::GlobalNamespace::__DlcPromoPanelModel___UpdatePromoInfosAsync_d__21);
// Type: ::PromoType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::DlcPromoPanelModel::PromoInfo::PromoType
struct CORDL_TYPE __DlcPromoPanelModel__PromoInfo__PromoType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____DlcPromoPanelModel__PromoInfo__PromoType_Unwrapped
  enum struct ____DlcPromoPanelModel__PromoInfo__PromoType_Unwrapped : int32_t {
    __E_Pack = static_cast<int32_t>(0x0),
    __E_Level = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____DlcPromoPanelModel__PromoInfo__PromoType_Unwrapped() const noexcept {
    return static_cast<____DlcPromoPanelModel__PromoInfo__PromoType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __DlcPromoPanelModel__PromoInfo__PromoType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __DlcPromoPanelModel__PromoInfo__PromoType(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Level value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__DlcPromoPanelModel__PromoInfo__PromoType const Level;

  /// @brief Field Pack value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__DlcPromoPanelModel__PromoInfo__PromoType const Pack;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__DlcPromoPanelModel__PromoInfo__PromoType, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__DlcPromoPanelModel__PromoInfo__PromoType, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::PromoInfo
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 60, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::DlcPromoPanelModel::PromoInfo*
class CORDL_TYPE __DlcPromoPanelModel__PromoInfo : public ::System::Object {
public:
  // Declarations
  using PromoType = ::GlobalNamespace::__DlcPromoPanelModel__PromoInfo__PromoType;

  /// @brief Field bannerImage, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_bannerImage, put = __cordl_internal_set_bannerImage))::UnityW<::UnityEngine::Sprite> bannerImage;

  /// @brief Field bannerPromoText, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_bannerPromoText, put = __cordl_internal_set_bannerPromoText))::StringW bannerPromoText;

  /// @brief Field bannerPromoTextPosition, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_bannerPromoTextPosition, put = __cordl_internal_set_bannerPromoTextPosition)) float_t bannerPromoTextPosition;

  /// @brief Field contentRating, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_contentRating, put = __cordl_internal_set_contentRating))::GlobalNamespace::PlayerSensitivityFlag contentRating;

  /// @brief Field id, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_id, put = __cordl_internal_set_id))::StringW id;

  /// @brief Field promoType, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_promoType, put = __cordl_internal_set_promoType))::GlobalNamespace::__DlcPromoPanelModel__PromoInfo__PromoType promoType;

  static inline ::GlobalNamespace::__DlcPromoPanelModel__PromoInfo* New_ctor(::GlobalNamespace::__PackPromoInfoSO__LevelPromoInfo* levelPromoInfo,
                                                                             ::GlobalNamespace::PlayerSensitivityFlag contentRating);

  static inline ::GlobalNamespace::__DlcPromoPanelModel__PromoInfo* New_ctor(::StringW packId, ::GlobalNamespace::PromoBannerInfoSO* promoBannerInfo,
                                                                             ::GlobalNamespace::PlayerSensitivityFlag contentRating);

  constexpr ::UnityW<::UnityEngine::Sprite> const& __cordl_internal_get_bannerImage() const;

  constexpr ::UnityW<::UnityEngine::Sprite>& __cordl_internal_get_bannerImage();

  constexpr ::StringW const& __cordl_internal_get_bannerPromoText() const;

  constexpr ::StringW& __cordl_internal_get_bannerPromoText();

  constexpr float_t const& __cordl_internal_get_bannerPromoTextPosition() const;

  constexpr float_t& __cordl_internal_get_bannerPromoTextPosition();

  constexpr ::GlobalNamespace::PlayerSensitivityFlag const& __cordl_internal_get_contentRating() const;

  constexpr ::GlobalNamespace::PlayerSensitivityFlag& __cordl_internal_get_contentRating();

  constexpr ::StringW const& __cordl_internal_get_id() const;

  constexpr ::StringW& __cordl_internal_get_id();

  constexpr ::GlobalNamespace::__DlcPromoPanelModel__PromoInfo__PromoType const& __cordl_internal_get_promoType() const;

  constexpr ::GlobalNamespace::__DlcPromoPanelModel__PromoInfo__PromoType& __cordl_internal_get_promoType();

  constexpr void __cordl_internal_set_bannerImage(::UnityW<::UnityEngine::Sprite> value);

  constexpr void __cordl_internal_set_bannerPromoText(::StringW value);

  constexpr void __cordl_internal_set_bannerPromoTextPosition(float_t value);

  constexpr void __cordl_internal_set_contentRating(::GlobalNamespace::PlayerSensitivityFlag value);

  constexpr void __cordl_internal_set_id(::StringW value);

  constexpr void __cordl_internal_set_promoType(::GlobalNamespace::__DlcPromoPanelModel__PromoInfo__PromoType value);

  /// @brief Method .ctor, addr 0x14f1ea8, size 0x5c, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::__PackPromoInfoSO__LevelPromoInfo* levelPromoInfo, ::GlobalNamespace::PlayerSensitivityFlag contentRating);

  /// @brief Method .ctor, addr 0x14f1e50, size 0x58, virtual false, abstract: false, final false
  inline void _ctor(::StringW packId, ::GlobalNamespace::PromoBannerInfoSO* promoBannerInfo, ::GlobalNamespace::PlayerSensitivityFlag contentRating);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __DlcPromoPanelModel__PromoInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__DlcPromoPanelModel__PromoInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __DlcPromoPanelModel__PromoInfo(__DlcPromoPanelModel__PromoInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__DlcPromoPanelModel__PromoInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __DlcPromoPanelModel__PromoInfo(__DlcPromoPanelModel__PromoInfo const&) = delete;

  /// @brief Field promoType, offset: 0x10, size: 0x4, def value: None
  ::GlobalNamespace::__DlcPromoPanelModel__PromoInfo__PromoType ___promoType;

  /// @brief Field id, offset: 0x18, size: 0x8, def value: None
  ::StringW ___id;

  /// @brief Field contentRating, offset: 0x20, size: 0x4, def value: None
  ::GlobalNamespace::PlayerSensitivityFlag ___contentRating;

  /// @brief Field bannerImage, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Sprite> ___bannerImage;

  /// @brief Field bannerPromoText, offset: 0x30, size: 0x8, def value: None
  ::StringW ___bannerPromoText;

  /// @brief Field bannerPromoTextPosition, offset: 0x38, size: 0x4, def value: None
  float_t ___bannerPromoTextPosition;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__DlcPromoPanelModel__PromoInfo, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__DlcPromoPanelModel__PromoInfo, ___promoType) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__DlcPromoPanelModel__PromoInfo, ___id) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__DlcPromoPanelModel__PromoInfo, ___contentRating) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__DlcPromoPanelModel__PromoInfo, ___bannerImage) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__DlcPromoPanelModel__PromoInfo, ___bannerPromoText) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__DlcPromoPanelModel__PromoInfo, ___bannerPromoTextPosition) == 0x38, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<Initialize>d__17
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::DlcPromoPanelModel::<Initialize>d__17
struct CORDL_TYPE __DlcPromoPanelModel___Initialize_d__17 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x14f1f04, size 0x238, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x14f213c, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __DlcPromoPanelModel___Initialize_d__17();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::DlcPromoPanelModel*", modifiers: "",
  // def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
  constexpr __DlcPromoPanelModel___Initialize_d__17(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, ::GlobalNamespace::DlcPromoPanelModel* __4__this,
                                                    ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::DlcPromoPanelModel* __4__this;

  /// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__DlcPromoPanelModel___Initialize_d__17, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__DlcPromoPanelModel___Initialize_d__17, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__DlcPromoPanelModel___Initialize_d__17, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__DlcPromoPanelModel___Initialize_d__17, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__DlcPromoPanelModel___Initialize_d__17, __u__1) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<InitializeInternalAsync>d__19
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::DlcPromoPanelModel::<InitializeInternalAsync>d__19
struct CORDL_TYPE __DlcPromoPanelModel___InitializeInternalAsync_d__19 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x14f2148, size 0x588, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x14f26d0, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __DlcPromoPanelModel___InitializeInternalAsync_d__19();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::DlcPromoPanelModel*", modifiers: "",
  // def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }, CppParam { name: "__u__2", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: None }]
  constexpr __DlcPromoPanelModel___InitializeInternalAsync_d__19(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                                 ::GlobalNamespace::DlcPromoPanelModel* __4__this, ::System::Runtime::CompilerServices::TaskAwaiter __u__1,
                                                                 ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__2) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::DlcPromoPanelModel* __4__this;

  /// @brief Field <>u__1, offset: 0x28, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  /// @brief Field <>u__2, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__2;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__DlcPromoPanelModel___InitializeInternalAsync_d__19, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__DlcPromoPanelModel___InitializeInternalAsync_d__19, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__DlcPromoPanelModel___InitializeInternalAsync_d__19, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__DlcPromoPanelModel___InitializeInternalAsync_d__19, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__DlcPromoPanelModel___InitializeInternalAsync_d__19, __u__1) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__DlcPromoPanelModel___InitializeInternalAsync_d__19, __u__2) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<UpdateModelDataAsync>d__20
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::DlcPromoPanelModel::<UpdateModelDataAsync>d__20
struct CORDL_TYPE __DlcPromoPanelModel___UpdateModelDataAsync_d__20 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x14f26dc, size 0x224, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x14f2900, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __DlcPromoPanelModel___UpdateModelDataAsync_d__20();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::DlcPromoPanelModel*", modifiers: "",
  // def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
  constexpr __DlcPromoPanelModel___UpdateModelDataAsync_d__20(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder,
                                                              ::GlobalNamespace::DlcPromoPanelModel* __4__this, ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::DlcPromoPanelModel* __4__this;

  /// @brief Field <>u__1, offset: 0x28, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__DlcPromoPanelModel___UpdateModelDataAsync_d__20, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__DlcPromoPanelModel___UpdateModelDataAsync_d__20, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__DlcPromoPanelModel___UpdateModelDataAsync_d__20, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__DlcPromoPanelModel___UpdateModelDataAsync_d__20, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__DlcPromoPanelModel___UpdateModelDataAsync_d__20, __u__1) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::DlcPromoPanelModel::<>c*
class CORDL_TYPE __DlcPromoPanelModel____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::GlobalNamespace::__DlcPromoPanelModel____c* __9;

  /// @brief Field <>9__21_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__21_0, put = setStaticF___9__21_0))::System::Func_2<::UnityW<::GlobalNamespace::PackDefinitionSO>, bool>* __9__21_0;

  static inline ::GlobalNamespace::__DlcPromoPanelModel____c* New_ctor();

  /// @brief Method <UpdatePromoInfosAsync>b__21_0, addr 0x14f2978, size 0x28, virtual false, abstract: false, final false
  inline bool _UpdatePromoInfosAsync_b__21_0(::GlobalNamespace::PackDefinitionSO* packDefinition);

  /// @brief Method .ctor, addr 0x14f2970, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::GlobalNamespace::__DlcPromoPanelModel____c* getStaticF___9();

  static inline ::System::Func_2<::UnityW<::GlobalNamespace::PackDefinitionSO>, bool>* getStaticF___9__21_0();

  static inline void setStaticF___9(::GlobalNamespace::__DlcPromoPanelModel____c* value);

  static inline void setStaticF___9__21_0(::System::Func_2<::UnityW<::GlobalNamespace::PackDefinitionSO>, bool>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __DlcPromoPanelModel____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__DlcPromoPanelModel____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __DlcPromoPanelModel____c(__DlcPromoPanelModel____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__DlcPromoPanelModel____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __DlcPromoPanelModel____c(__DlcPromoPanelModel____c const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__DlcPromoPanelModel____c, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::<UpdatePromoInfosAsync>d__21
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::DlcPromoPanelModel::<UpdatePromoInfosAsync>d__21
struct CORDL_TYPE __DlcPromoPanelModel___UpdatePromoInfosAsync_d__21 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x14f29a0, size 0x71c, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x14f30bc, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __DlcPromoPanelModel___UpdatePromoInfosAsync_d__21();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::DlcPromoPanelModel*", modifiers: "",
  // def_value: None }, CppParam { name: "_validPackDefinitions_5__2", ty: "::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>*", modifiers: "", def_value: None },
  // CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<::UnityW<::GlobalNamespace::PackPromoInfoSO>,::Array<::UnityW<::GlobalNamespace::PackPromoInfoSO>>*>>",
  // modifiers: "", def_value: None }]
  constexpr __DlcPromoPanelModel___UpdatePromoInfosAsync_d__21(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::GlobalNamespace::DlcPromoPanelModel* __4__this,
      ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>* _validPackDefinitions_5__2,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<::UnityW<::GlobalNamespace::PackPromoInfoSO>, ::Array<::UnityW<::GlobalNamespace::PackPromoInfoSO>>*>> __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::DlcPromoPanelModel* __4__this;

  /// @brief Field <validPackDefinitions>5__2, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>* _validPackDefinitions_5__2;

  /// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<::UnityW<::GlobalNamespace::PackPromoInfoSO>, ::Array<::UnityW<::GlobalNamespace::PackPromoInfoSO>>*>> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__DlcPromoPanelModel___UpdatePromoInfosAsync_d__21, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__DlcPromoPanelModel___UpdatePromoInfosAsync_d__21, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__DlcPromoPanelModel___UpdatePromoInfosAsync_d__21, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__DlcPromoPanelModel___UpdatePromoInfosAsync_d__21, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__DlcPromoPanelModel___UpdatePromoInfosAsync_d__21, _validPackDefinitions_5__2) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__DlcPromoPanelModel___UpdatePromoInfosAsync_d__21, __u__1) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<LoadPackPromoInfoAsync>d__22
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::DlcPromoPanelModel::<LoadPackPromoInfoAsync>d__22
struct CORDL_TYPE __DlcPromoPanelModel___LoadPackPromoInfoAsync_d__22 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x14f30c8, size 0x2e0, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x14f33a8, size 0x58, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __DlcPromoPanelModel___LoadPackPromoInfoAsync_d__22();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::UnityW<::GlobalNamespace::PackPromoInfoSO>>", modifiers: "", def_value: None }, CppParam { name: "pack", ty:
  // "::UnityW<::GlobalNamespace::PackDefinitionSO>", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityW<::GlobalNamespace::PackPromoInfoSO>>", modifiers: "", def_value: None }]
  constexpr __DlcPromoPanelModel___LoadPackPromoInfoAsync_d__22(int32_t __1__state,
                                                                ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::UnityW<::GlobalNamespace::PackPromoInfoSO>> __t__builder,
                                                                ::UnityW<::GlobalNamespace::PackDefinitionSO> pack,
                                                                ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityW<::GlobalNamespace::PackPromoInfoSO>> __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::UnityW<::GlobalNamespace::PackPromoInfoSO>> __t__builder;

  /// @brief Field pack, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PackDefinitionSO> pack;

  /// @brief Field <>u__1, offset: 0x28, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityW<::GlobalNamespace::PackPromoInfoSO>> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__DlcPromoPanelModel___LoadPackPromoInfoAsync_d__22, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__DlcPromoPanelModel___LoadPackPromoInfoAsync_d__22, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__DlcPromoPanelModel___LoadPackPromoInfoAsync_d__22, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__DlcPromoPanelModel___LoadPackPromoInfoAsync_d__22, pack) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__DlcPromoPanelModel___LoadPackPromoInfoAsync_d__22, __u__1) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<GetPackDataForMainMenuPromoBanner>d__23
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::DlcPromoPanelModel::<GetPackDataForMainMenuPromoBanner>d__23
struct CORDL_TYPE __DlcPromoPanelModel___GetPackDataForMainMenuPromoBanner_d__23 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x14f3400, size 0x21c, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x14f361c, size 0x58, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __DlcPromoPanelModel___GetPackDataForMainMenuPromoBanner_d__23();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_2<::GlobalNamespace::__DlcPromoPanelModel__PromoInfo*,bool>>", modifiers: "", def_value: None }, CppParam {
  // name: "__4__this", ty: "::GlobalNamespace::DlcPromoPanelModel*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::GlobalNamespace::__DlcPromoPanelModel__PromoInfo*,bool>>", modifiers: "", def_value: None }]
  constexpr __DlcPromoPanelModel___GetPackDataForMainMenuPromoBanner_d__23(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_2<::GlobalNamespace::__DlcPromoPanelModel__PromoInfo*, bool>> __t__builder,
      ::GlobalNamespace::DlcPromoPanelModel* __4__this,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::GlobalNamespace::__DlcPromoPanelModel__PromoInfo*, bool>> __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_2<::GlobalNamespace::__DlcPromoPanelModel__PromoInfo*, bool>> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::DlcPromoPanelModel* __4__this;

  /// @brief Field <>u__1, offset: 0x28, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::GlobalNamespace::__DlcPromoPanelModel__PromoInfo*, bool>> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__DlcPromoPanelModel___GetPackDataForMainMenuPromoBanner_d__23, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__DlcPromoPanelModel___GetPackDataForMainMenuPromoBanner_d__23, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__DlcPromoPanelModel___GetPackDataForMainMenuPromoBanner_d__23, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__DlcPromoPanelModel___GetPackDataForMainMenuPromoBanner_d__23, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__DlcPromoPanelModel___GetPackDataForMainMenuPromoBanner_d__23, __u__1) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c__DisplayClass24_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 20, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::DlcPromoPanelModel::<>c__DisplayClass24_0*
class CORDL_TYPE __DlcPromoPanelModel____c__DisplayClass24_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field sensitivityFlag, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_sensitivityFlag, put = __cordl_internal_set_sensitivityFlag))::GlobalNamespace::PlayerSensitivityFlag sensitivityFlag;

  static inline ::GlobalNamespace::__DlcPromoPanelModel____c__DisplayClass24_0* New_ctor();

  /// @brief Method <GetPackDataForMainMenuPromoBannerInternal>b__0, addr 0x14f367c, size 0x24, virtual false, abstract: false, final false
  inline bool _GetPackDataForMainMenuPromoBannerInternal_b__0(::GlobalNamespace::__DlcPromoPanelModel__PromoInfo* x);

  /// @brief Method <GetPackDataForMainMenuPromoBannerInternal>b__1, addr 0x14f36a0, size 0x24, virtual false, abstract: false, final false
  inline bool _GetPackDataForMainMenuPromoBannerInternal_b__1(::GlobalNamespace::__DlcPromoPanelModel__PromoInfo* x);

  constexpr ::GlobalNamespace::PlayerSensitivityFlag const& __cordl_internal_get_sensitivityFlag() const;

  constexpr ::GlobalNamespace::PlayerSensitivityFlag& __cordl_internal_get_sensitivityFlag();

  constexpr void __cordl_internal_set_sensitivityFlag(::GlobalNamespace::PlayerSensitivityFlag value);

  /// @brief Method .ctor, addr 0x14f3674, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __DlcPromoPanelModel____c__DisplayClass24_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__DlcPromoPanelModel____c__DisplayClass24_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __DlcPromoPanelModel____c__DisplayClass24_0(__DlcPromoPanelModel____c__DisplayClass24_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__DlcPromoPanelModel____c__DisplayClass24_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __DlcPromoPanelModel____c__DisplayClass24_0(__DlcPromoPanelModel____c__DisplayClass24_0 const&) = delete;

  /// @brief Field sensitivityFlag, offset: 0x10, size: 0x4, def value: None
  ::GlobalNamespace::PlayerSensitivityFlag ___sensitivityFlag;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__DlcPromoPanelModel____c__DisplayClass24_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__DlcPromoPanelModel____c__DisplayClass24_0, ___sensitivityFlag) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<GetPackDataForMainMenuPromoBannerInternal>d__24
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::DlcPromoPanelModel::<GetPackDataForMainMenuPromoBannerInternal>d__24
struct CORDL_TYPE __DlcPromoPanelModel___GetPackDataForMainMenuPromoBannerInternal_d__24 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x14f36c4, size 0x63c, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x14f3d00, size 0x58, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __DlcPromoPanelModel___GetPackDataForMainMenuPromoBannerInternal_d__24();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_2<::GlobalNamespace::__DlcPromoPanelModel__PromoInfo*,bool>>", modifiers: "", def_value: None }, CppParam {
  // name: "__4__this", ty: "::GlobalNamespace::DlcPromoPanelModel*", modifiers: "", def_value: None }, CppParam { name: "__8__1", ty:
  // "::GlobalNamespace::__DlcPromoPanelModel____c__DisplayClass24_0*", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers:
  // "", def_value: None }]
  constexpr __DlcPromoPanelModel___GetPackDataForMainMenuPromoBannerInternal_d__24(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_2<::GlobalNamespace::__DlcPromoPanelModel__PromoInfo*, bool>> __t__builder,
      ::GlobalNamespace::DlcPromoPanelModel* __4__this, ::GlobalNamespace::__DlcPromoPanelModel____c__DisplayClass24_0* __8__1, ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_2<::GlobalNamespace::__DlcPromoPanelModel__PromoInfo*, bool>> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::DlcPromoPanelModel* __4__this;

  /// @brief Field <>8__1, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::__DlcPromoPanelModel____c__DisplayClass24_0* __8__1;

  /// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__DlcPromoPanelModel___GetPackDataForMainMenuPromoBannerInternal_d__24, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__DlcPromoPanelModel___GetPackDataForMainMenuPromoBannerInternal_d__24, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__DlcPromoPanelModel___GetPackDataForMainMenuPromoBannerInternal_d__24, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__DlcPromoPanelModel___GetPackDataForMainMenuPromoBannerInternal_d__24, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__DlcPromoPanelModel___GetPackDataForMainMenuPromoBannerInternal_d__24, __8__1) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__DlcPromoPanelModel___GetPackDataForMainMenuPromoBannerInternal_d__24, __u__1) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<UpdateOwnedPacksAsync>d__32
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::DlcPromoPanelModel::<UpdateOwnedPacksAsync>d__32
struct CORDL_TYPE __DlcPromoPanelModel___UpdateOwnedPacksAsync_d__32 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x14f3d58, size 0x830, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x14f4588, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __DlcPromoPanelModel___UpdateOwnedPacksAsync_d__32();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::DlcPromoPanelModel*", modifiers: "",
  // def_value: None }, CppParam { name: "_newNotOwnedMusicPackPromoInfos_5__2", ty: "::System::Collections::Generic::List_1<::GlobalNamespace::__DlcPromoPanelModel__PromoInfo*>*", modifiers: "",
  // def_value: None }, CppParam { name: "_newOwnedMusicPackPromoInfos_5__3", ty: "::System::Collections::Generic::List_1<::GlobalNamespace::__DlcPromoPanelModel__PromoInfo*>*", modifiers: "",
  // def_value: None }, CppParam { name: "_allPromoInfos_5__4", ty: "::ArrayW<::GlobalNamespace::__DlcPromoPanelModel__PromoInfo*,::Array<::GlobalNamespace::__DlcPromoPanelModel__PromoInfo*>*>",
  // modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<::GlobalNamespace::EntitlementStatus,::Array<::GlobalNamespace::EntitlementStatus>*>>", modifiers: "", def_value: None }]
  constexpr __DlcPromoPanelModel___UpdateOwnedPacksAsync_d__32(
      int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::GlobalNamespace::DlcPromoPanelModel* __4__this,
      ::System::Collections::Generic::List_1<::GlobalNamespace::__DlcPromoPanelModel__PromoInfo*>* _newNotOwnedMusicPackPromoInfos_5__2,
      ::System::Collections::Generic::List_1<::GlobalNamespace::__DlcPromoPanelModel__PromoInfo*>* _newOwnedMusicPackPromoInfos_5__3,
      ::ArrayW<::GlobalNamespace::__DlcPromoPanelModel__PromoInfo*, ::Array<::GlobalNamespace::__DlcPromoPanelModel__PromoInfo*>*> _allPromoInfos_5__4,
      ::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<::GlobalNamespace::EntitlementStatus, ::Array<::GlobalNamespace::EntitlementStatus>*>> __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::DlcPromoPanelModel* __4__this;

  /// @brief Field <newNotOwnedMusicPackPromoInfos>5__2, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::__DlcPromoPanelModel__PromoInfo*>* _newNotOwnedMusicPackPromoInfos_5__2;

  /// @brief Field <newOwnedMusicPackPromoInfos>5__3, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::__DlcPromoPanelModel__PromoInfo*>* _newOwnedMusicPackPromoInfos_5__3;

  /// @brief Field <allPromoInfos>5__4, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__DlcPromoPanelModel__PromoInfo*, ::Array<::GlobalNamespace::__DlcPromoPanelModel__PromoInfo*>*> _allPromoInfos_5__4;

  /// @brief Field <>u__1, offset: 0x40, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::ArrayW<::GlobalNamespace::EntitlementStatus, ::Array<::GlobalNamespace::EntitlementStatus>*>> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x48 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__DlcPromoPanelModel___UpdateOwnedPacksAsync_d__32, 0x48>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__DlcPromoPanelModel___UpdateOwnedPacksAsync_d__32, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__DlcPromoPanelModel___UpdateOwnedPacksAsync_d__32, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__DlcPromoPanelModel___UpdateOwnedPacksAsync_d__32, __4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__DlcPromoPanelModel___UpdateOwnedPacksAsync_d__32, _newNotOwnedMusicPackPromoInfos_5__2) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__DlcPromoPanelModel___UpdateOwnedPacksAsync_d__32, _newOwnedMusicPackPromoInfos_5__3) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__DlcPromoPanelModel___UpdateOwnedPacksAsync_d__32, _allPromoInfos_5__4) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__DlcPromoPanelModel___UpdateOwnedPacksAsync_d__32, __u__1) == 0x40, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<HandleAdditionalContentModelDidInvalidateData>d__33
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::DlcPromoPanelModel::<HandleAdditionalContentModelDidInvalidateData>d__33
struct CORDL_TYPE __DlcPromoPanelModel___HandleAdditionalContentModelDidInvalidateData_d__33 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x14f4594, size 0x228, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x14f47bc, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __DlcPromoPanelModel___HandleAdditionalContentModelDidInvalidateData_d__33();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::DlcPromoPanelModel*", modifiers: "",
  // def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
  constexpr __DlcPromoPanelModel___HandleAdditionalContentModelDidInvalidateData_d__33(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder,
                                                                                       ::GlobalNamespace::DlcPromoPanelModel* __4__this,
                                                                                       ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::DlcPromoPanelModel* __4__this;

  /// @brief Field <>u__1, offset: 0x30, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__DlcPromoPanelModel___HandleAdditionalContentModelDidInvalidateData_d__33, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__DlcPromoPanelModel___HandleAdditionalContentModelDidInvalidateData_d__33, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__DlcPromoPanelModel___HandleAdditionalContentModelDidInvalidateData_d__33, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__DlcPromoPanelModel___HandleAdditionalContentModelDidInvalidateData_d__33, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__DlcPromoPanelModel___HandleAdditionalContentModelDidInvalidateData_d__33, __u__1) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::DlcPromoPanelModel
// SizeInfo { instance_size: 128, native_size: -1, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::DlcPromoPanelModel*
class CORDL_TYPE DlcPromoPanelModel : public ::System::Object {
public:
  // Declarations
  using PromoInfo = ::GlobalNamespace::__DlcPromoPanelModel__PromoInfo;

  using _GetPackDataForMainMenuPromoBannerInternal_d__24 = ::GlobalNamespace::__DlcPromoPanelModel___GetPackDataForMainMenuPromoBannerInternal_d__24;

  using _GetPackDataForMainMenuPromoBanner_d__23 = ::GlobalNamespace::__DlcPromoPanelModel___GetPackDataForMainMenuPromoBanner_d__23;

  using _HandleAdditionalContentModelDidInvalidateData_d__33 = ::GlobalNamespace::__DlcPromoPanelModel___HandleAdditionalContentModelDidInvalidateData_d__33;

  using _InitializeInternalAsync_d__19 = ::GlobalNamespace::__DlcPromoPanelModel___InitializeInternalAsync_d__19;

  using _Initialize_d__17 = ::GlobalNamespace::__DlcPromoPanelModel___Initialize_d__17;

  using _LoadPackPromoInfoAsync_d__22 = ::GlobalNamespace::__DlcPromoPanelModel___LoadPackPromoInfoAsync_d__22;

  using _UpdateModelDataAsync_d__20 = ::GlobalNamespace::__DlcPromoPanelModel___UpdateModelDataAsync_d__20;

  using _UpdateOwnedPacksAsync_d__32 = ::GlobalNamespace::__DlcPromoPanelModel___UpdateOwnedPacksAsync_d__32;

  using _UpdatePromoInfosAsync_d__21 = ::GlobalNamespace::__DlcPromoPanelModel___UpdatePromoInfosAsync_d__21;

  using __c = ::GlobalNamespace::__DlcPromoPanelModel____c;

  using __c__DisplayClass24_0 = ::GlobalNamespace::__DlcPromoPanelModel____c__DisplayClass24_0;

  /// @brief Field _additionalContentModel, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__additionalContentModel, put = __cordl_internal_set__additionalContentModel))::GlobalNamespace::IAdditionalContentModel* _additionalContentModel;

  /// @brief Field _analyticsModel, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__analyticsModel, put = __cordl_internal_set__analyticsModel))::GlobalNamespace::IAnalyticsModel* _analyticsModel;

  /// @brief Field _beatmapLevelsModel, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapLevelsModel, put = __cordl_internal_set__beatmapLevelsModel))::GlobalNamespace::BeatmapLevelsModel* _beatmapLevelsModel;

  /// @brief Field _cacheNextPackDataTask, offset 0x78, size 0x8
  __declspec(property(
      get = __cordl_internal_get__cacheNextPackDataTask,
      put = __cordl_internal_set__cacheNextPackDataTask))::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::GlobalNamespace::__DlcPromoPanelModel__PromoInfo*, bool>>* _cacheNextPackDataTask;

  /// @brief Field _defaultPromoInfo, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__defaultPromoInfo, put = __cordl_internal_set__defaultPromoInfo))::GlobalNamespace::__DlcPromoPanelModel__PromoInfo* _defaultPromoInfo;

  /// @brief Field _dlcPromoPanelData, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__dlcPromoPanelData, put = __cordl_internal_set__dlcPromoPanelData))::UnityW<::GlobalNamespace::DlcPromoPanelDataSO> _dlcPromoPanelData;

  /// @brief Field _initializationTask, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__initializationTask, put = __cordl_internal_set__initializationTask))::System::Threading::Tasks::Task* _initializationTask;

  /// @brief Field _initialized, offset 0x51, size 0x1
  __declspec(property(get = __cordl_internal_get__initialized, put = __cordl_internal_set__initialized)) bool _initialized;

  /// @brief Field _notOwnedMusicPackPromoInfos, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__notOwnedMusicPackPromoInfos,
                      put = __cordl_internal_set__notOwnedMusicPackPromoInfos))::ArrayW<::GlobalNamespace::__DlcPromoPanelModel__PromoInfo*,
                                                                                        ::Array<::GlobalNamespace::__DlcPromoPanelModel__PromoInfo*>*> _notOwnedMusicPackPromoInfos;

  /// @brief Field _ownedMusicPackPromoInfos, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__ownedMusicPackPromoInfos,
                      put = __cordl_internal_set__ownedMusicPackPromoInfos))::ArrayW<::GlobalNamespace::__DlcPromoPanelModel__PromoInfo*,
                                                                                     ::Array<::GlobalNamespace::__DlcPromoPanelModel__PromoInfo*>*> _ownedMusicPackPromoInfos;

  /// @brief Field _platformInit, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__platformInit, put = __cordl_internal_set__platformInit))::GlobalNamespace::IPlatformInit* _platformInit;

  /// @brief Field _playerDataModel, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__playerDataModel, put = __cordl_internal_set__playerDataModel))::UnityW<::GlobalNamespace::PlayerDataModel> _playerDataModel;

  /// @brief Field _promoInfos, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__promoInfos,
                      put = __cordl_internal_set__promoInfos))::System::Collections::Generic::List_1<::GlobalNamespace::__DlcPromoPanelModel__PromoInfo*>* _promoInfos;

  /// @brief Field _random, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__random, put = __cordl_internal_set__random))::System::Random* _random;

  /// @brief Field _updatingNotOwnedPacks, offset 0x50, size 0x1
  __declspec(property(get = __cordl_internal_get__updatingNotOwnedPacks, put = __cordl_internal_set__updatingNotOwnedPacks)) bool _updatingNotOwnedPacks;

  /// @brief Convert operator to "::Zenject::IInitializable"
  constexpr operator ::Zenject::IInitializable*() noexcept;

  /// @brief Method BuyLevelButtonWasPressed, addr 0x14f1930, size 0xf0, virtual false, abstract: false, final false
  inline void BuyLevelButtonWasPressed(::GlobalNamespace::BeatmapLevel* level, ::StringW page, ::StringW customText);

  /// @brief Method BuyLevelButtonWasShown, addr 0x14f1a20, size 0xf0, virtual false, abstract: false, final false
  inline void BuyLevelButtonWasShown(::GlobalNamespace::BeatmapLevel* level, ::StringW page, ::StringW customText);

  /// @brief Method BuyPackButtonWasPressed, addr 0x14f1b10, size 0xf0, virtual false, abstract: false, final false
  inline void BuyPackButtonWasPressed(::GlobalNamespace::BeatmapLevelPack* pack, ::StringW page, ::StringW customText);

  /// @brief Method BuyPackButtonWasShown, addr 0x14f1c00, size 0xf0, virtual false, abstract: false, final false
  inline void BuyPackButtonWasShown(::GlobalNamespace::BeatmapLevelPack* pack, ::StringW page, ::StringW customText);

  /// @brief Method GetExperimentEventData, addr 0x14f1714, size 0x120, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* GetExperimentEventData(::StringW itemId, ::StringW page, ::StringW customText);

  /// @brief Method GetPackDataForMainMenuPromoBanner, addr 0x14f1414, size 0xf0, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::GlobalNamespace::__DlcPromoPanelModel__PromoInfo*, bool>>* GetPackDataForMainMenuPromoBanner();

  /// @brief Method GetPackDataForMainMenuPromoBannerInternal, addr 0x14f1504, size 0xf4, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::GlobalNamespace::__DlcPromoPanelModel__PromoInfo*, bool>>* GetPackDataForMainMenuPromoBannerInternal();

  /// @brief Method HandleAdditionalContentModelDidInvalidateData, addr 0x14f1dbc, size 0x94, virtual false, abstract: false, final false
  inline void HandleAdditionalContentModelDidInvalidateData();

  /// @brief Method Initialize, addr 0x14f100c, size 0x94, virtual true, abstract: false, final true
  inline void Initialize();

  /// @brief Method InitializeAsync, addr 0x14f10a0, size 0x24, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* InitializeAsync();

  /// @brief Method InitializeInternalAsync, addr 0x14f10c4, size 0xcc, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* InitializeInternalAsync();

  /// @brief Method LoadPackPromoInfoAsync, addr 0x14f1324, size 0xf0, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<::UnityW<::GlobalNamespace::PackPromoInfoSO>>* LoadPackPromoInfoAsync(::GlobalNamespace::PackDefinitionSO* pack);

  /// @brief Method MainMenuDlcPromoBannerWasPressed, addr 0x14f1834, size 0xfc, virtual false, abstract: false, final false
  inline void MainMenuDlcPromoBannerWasPressed(::StringW packId, ::StringW customText);

  /// @brief Method MainMenuDlcPromoBannerWasShown, addr 0x14f15f8, size 0x11c, virtual false, abstract: false, final false
  inline void MainMenuDlcPromoBannerWasShown(::StringW packId, ::StringW customText);

  static inline ::GlobalNamespace::DlcPromoPanelModel* New_ctor(::GlobalNamespace::IAdditionalContentModel* additionalContentModel, ::GlobalNamespace::BeatmapLevelsModel* beatmapLevelsModel,
                                                                ::GlobalNamespace::IAnalyticsModel* analyticsModel, ::GlobalNamespace::DlcPromoPanelDataSO* defaultDlcPromoPanelData,
                                                                ::GlobalNamespace::PlayerDataModel* playerDataModel, ::GlobalNamespace::IPlatformInit* platformInit);

  /// @brief Method UpdateModelDataAsync, addr 0x14f1190, size 0xc8, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* UpdateModelDataAsync();

  /// @brief Method UpdateOwnedPacksAsync, addr 0x14f1cf0, size 0xcc, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* UpdateOwnedPacksAsync();

  /// @brief Method UpdatePromoInfosAsync, addr 0x14f1258, size 0xcc, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* UpdatePromoInfosAsync();

  constexpr ::GlobalNamespace::IAdditionalContentModel*& __cordl_internal_get__additionalContentModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IAdditionalContentModel*> const& __cordl_internal_get__additionalContentModel() const;

  constexpr ::GlobalNamespace::IAnalyticsModel*& __cordl_internal_get__analyticsModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IAnalyticsModel*> const& __cordl_internal_get__analyticsModel() const;

  constexpr ::GlobalNamespace::BeatmapLevelsModel*& __cordl_internal_get__beatmapLevelsModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapLevelsModel*> const& __cordl_internal_get__beatmapLevelsModel() const;

  constexpr ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::GlobalNamespace::__DlcPromoPanelModel__PromoInfo*, bool>>*& __cordl_internal_get__cacheNextPackDataTask();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::GlobalNamespace::__DlcPromoPanelModel__PromoInfo*, bool>>*> const&
  __cordl_internal_get__cacheNextPackDataTask() const;

  constexpr ::GlobalNamespace::__DlcPromoPanelModel__PromoInfo*& __cordl_internal_get__defaultPromoInfo();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__DlcPromoPanelModel__PromoInfo*> const& __cordl_internal_get__defaultPromoInfo() const;

  constexpr ::UnityW<::GlobalNamespace::DlcPromoPanelDataSO> const& __cordl_internal_get__dlcPromoPanelData() const;

  constexpr ::UnityW<::GlobalNamespace::DlcPromoPanelDataSO>& __cordl_internal_get__dlcPromoPanelData();

  constexpr ::System::Threading::Tasks::Task*& __cordl_internal_get__initializationTask();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task*> const& __cordl_internal_get__initializationTask() const;

  constexpr bool const& __cordl_internal_get__initialized() const;

  constexpr bool& __cordl_internal_get__initialized();

  constexpr ::ArrayW<::GlobalNamespace::__DlcPromoPanelModel__PromoInfo*, ::Array<::GlobalNamespace::__DlcPromoPanelModel__PromoInfo*>*> const&
  __cordl_internal_get__notOwnedMusicPackPromoInfos() const;

  constexpr ::ArrayW<::GlobalNamespace::__DlcPromoPanelModel__PromoInfo*, ::Array<::GlobalNamespace::__DlcPromoPanelModel__PromoInfo*>*>& __cordl_internal_get__notOwnedMusicPackPromoInfos();

  constexpr ::ArrayW<::GlobalNamespace::__DlcPromoPanelModel__PromoInfo*, ::Array<::GlobalNamespace::__DlcPromoPanelModel__PromoInfo*>*> const& __cordl_internal_get__ownedMusicPackPromoInfos() const;

  constexpr ::ArrayW<::GlobalNamespace::__DlcPromoPanelModel__PromoInfo*, ::Array<::GlobalNamespace::__DlcPromoPanelModel__PromoInfo*>*>& __cordl_internal_get__ownedMusicPackPromoInfos();

  constexpr ::GlobalNamespace::IPlatformInit*& __cordl_internal_get__platformInit();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IPlatformInit*> const& __cordl_internal_get__platformInit() const;

  constexpr ::UnityW<::GlobalNamespace::PlayerDataModel> const& __cordl_internal_get__playerDataModel() const;

  constexpr ::UnityW<::GlobalNamespace::PlayerDataModel>& __cordl_internal_get__playerDataModel();

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::__DlcPromoPanelModel__PromoInfo*>*& __cordl_internal_get__promoInfos();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::__DlcPromoPanelModel__PromoInfo*>*> const& __cordl_internal_get__promoInfos() const;

  constexpr ::System::Random*& __cordl_internal_get__random();

  constexpr ::cordl_internals::to_const_pointer<::System::Random*> const& __cordl_internal_get__random() const;

  constexpr bool const& __cordl_internal_get__updatingNotOwnedPacks() const;

  constexpr bool& __cordl_internal_get__updatingNotOwnedPacks();

  constexpr void __cordl_internal_set__additionalContentModel(::GlobalNamespace::IAdditionalContentModel* value);

  constexpr void __cordl_internal_set__analyticsModel(::GlobalNamespace::IAnalyticsModel* value);

  constexpr void __cordl_internal_set__beatmapLevelsModel(::GlobalNamespace::BeatmapLevelsModel* value);

  constexpr void __cordl_internal_set__cacheNextPackDataTask(::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::GlobalNamespace::__DlcPromoPanelModel__PromoInfo*, bool>>* value);

  constexpr void __cordl_internal_set__defaultPromoInfo(::GlobalNamespace::__DlcPromoPanelModel__PromoInfo* value);

  constexpr void __cordl_internal_set__dlcPromoPanelData(::UnityW<::GlobalNamespace::DlcPromoPanelDataSO> value);

  constexpr void __cordl_internal_set__initializationTask(::System::Threading::Tasks::Task* value);

  constexpr void __cordl_internal_set__initialized(bool value);

  constexpr void __cordl_internal_set__notOwnedMusicPackPromoInfos(::ArrayW<::GlobalNamespace::__DlcPromoPanelModel__PromoInfo*, ::Array<::GlobalNamespace::__DlcPromoPanelModel__PromoInfo*>*> value);

  constexpr void __cordl_internal_set__ownedMusicPackPromoInfos(::ArrayW<::GlobalNamespace::__DlcPromoPanelModel__PromoInfo*, ::Array<::GlobalNamespace::__DlcPromoPanelModel__PromoInfo*>*> value);

  constexpr void __cordl_internal_set__platformInit(::GlobalNamespace::IPlatformInit* value);

  constexpr void __cordl_internal_set__playerDataModel(::UnityW<::GlobalNamespace::PlayerDataModel> value);

  constexpr void __cordl_internal_set__promoInfos(::System::Collections::Generic::List_1<::GlobalNamespace::__DlcPromoPanelModel__PromoInfo*>* value);

  constexpr void __cordl_internal_set__random(::System::Random* value);

  constexpr void __cordl_internal_set__updatingNotOwnedPacks(bool value);

  /// @brief Method .ctor, addr 0x14f0f50, size 0xbc, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::IAdditionalContentModel* additionalContentModel, ::GlobalNamespace::BeatmapLevelsModel* beatmapLevelsModel, ::GlobalNamespace::IAnalyticsModel* analyticsModel,
                    ::GlobalNamespace::DlcPromoPanelDataSO* defaultDlcPromoPanelData, ::GlobalNamespace::PlayerDataModel* playerDataModel, ::GlobalNamespace::IPlatformInit* platformInit);

  /// @brief Convert to "::Zenject::IInitializable"
  constexpr ::Zenject::IInitializable* i___Zenject__IInitializable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DlcPromoPanelModel();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DlcPromoPanelModel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DlcPromoPanelModel(DlcPromoPanelModel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DlcPromoPanelModel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DlcPromoPanelModel(DlcPromoPanelModel const&) = delete;

  /// @brief Field _additionalContentModel, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::IAdditionalContentModel* ____additionalContentModel;

  /// @brief Field _beatmapLevelsModel, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapLevelsModel* ____beatmapLevelsModel;

  /// @brief Field _analyticsModel, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::IAnalyticsModel* ____analyticsModel;

  /// @brief Field _dlcPromoPanelData, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::DlcPromoPanelDataSO> ____dlcPromoPanelData;

  /// @brief Field _playerDataModel, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PlayerDataModel> ____playerDataModel;

  /// @brief Field _platformInit, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::IPlatformInit* ____platformInit;

  /// @brief Field _notOwnedMusicPackPromoInfos, offset: 0x40, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__DlcPromoPanelModel__PromoInfo*, ::Array<::GlobalNamespace::__DlcPromoPanelModel__PromoInfo*>*> ____notOwnedMusicPackPromoInfos;

  /// @brief Field _ownedMusicPackPromoInfos, offset: 0x48, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__DlcPromoPanelModel__PromoInfo*, ::Array<::GlobalNamespace::__DlcPromoPanelModel__PromoInfo*>*> ____ownedMusicPackPromoInfos;

  /// @brief Field _updatingNotOwnedPacks, offset: 0x50, size: 0x1, def value: None
  bool ____updatingNotOwnedPacks;

  /// @brief Field _initialized, offset: 0x51, size: 0x1, def value: None
  bool ____initialized;

  /// @brief Field _random, offset: 0x58, size: 0x8, def value: None
  ::System::Random* ____random;

  /// @brief Field _promoInfos, offset: 0x60, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::__DlcPromoPanelModel__PromoInfo*>* ____promoInfos;

  /// @brief Field _defaultPromoInfo, offset: 0x68, size: 0x8, def value: None
  ::GlobalNamespace::__DlcPromoPanelModel__PromoInfo* ____defaultPromoInfo;

  /// @brief Field _initializationTask, offset: 0x70, size: 0x8, def value: None
  ::System::Threading::Tasks::Task* ____initializationTask;

  /// @brief Field _cacheNextPackDataTask, offset: 0x78, size: 0x8, def value: None
  ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::GlobalNamespace::__DlcPromoPanelModel__PromoInfo*, bool>>* ____cacheNextPackDataTask;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::DlcPromoPanelModel, 0x80>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::DlcPromoPanelModel, ____additionalContentModel) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DlcPromoPanelModel, ____beatmapLevelsModel) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DlcPromoPanelModel, ____analyticsModel) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DlcPromoPanelModel, ____dlcPromoPanelData) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DlcPromoPanelModel, ____playerDataModel) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DlcPromoPanelModel, ____platformInit) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DlcPromoPanelModel, ____notOwnedMusicPackPromoInfos) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DlcPromoPanelModel, ____ownedMusicPackPromoInfos) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DlcPromoPanelModel, ____updatingNotOwnedPacks) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DlcPromoPanelModel, ____initialized) == 0x51, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DlcPromoPanelModel, ____random) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DlcPromoPanelModel, ____promoInfos) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DlcPromoPanelModel, ____defaultPromoInfo) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DlcPromoPanelModel, ____initializationTask) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DlcPromoPanelModel, ____cacheNextPackDataTask) == 0x78, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__DlcPromoPanelModel__PromoInfo__PromoType, "", "DlcPromoPanelModel/PromoInfo/PromoType");
NEED_NO_BOX(::GlobalNamespace::DlcPromoPanelModel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DlcPromoPanelModel*, "", "DlcPromoPanelModel");
NEED_NO_BOX(::GlobalNamespace::__DlcPromoPanelModel__PromoInfo);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__DlcPromoPanelModel__PromoInfo*, "", "DlcPromoPanelModel/PromoInfo");
NEED_NO_BOX(::GlobalNamespace::__DlcPromoPanelModel____c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__DlcPromoPanelModel____c*, "", "DlcPromoPanelModel/<>c");
NEED_NO_BOX(::GlobalNamespace::__DlcPromoPanelModel____c__DisplayClass24_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__DlcPromoPanelModel____c__DisplayClass24_0*, "", "DlcPromoPanelModel/<>c__DisplayClass24_0");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__DlcPromoPanelModel___GetPackDataForMainMenuPromoBannerInternal_d__24, "", "DlcPromoPanelModel/<GetPackDataForMainMenuPromoBannerInternal>d__24");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__DlcPromoPanelModel___GetPackDataForMainMenuPromoBanner_d__23, "", "DlcPromoPanelModel/<GetPackDataForMainMenuPromoBanner>d__23");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__DlcPromoPanelModel___HandleAdditionalContentModelDidInvalidateData_d__33, "", "DlcPromoPanelModel/<HandleAdditionalContentModelDidInvalidateData>d__33");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__DlcPromoPanelModel___InitializeInternalAsync_d__19, "", "DlcPromoPanelModel/<InitializeInternalAsync>d__19");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__DlcPromoPanelModel___Initialize_d__17, "", "DlcPromoPanelModel/<Initialize>d__17");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__DlcPromoPanelModel___LoadPackPromoInfoAsync_d__22, "", "DlcPromoPanelModel/<LoadPackPromoInfoAsync>d__22");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__DlcPromoPanelModel___UpdateModelDataAsync_d__20, "", "DlcPromoPanelModel/<UpdateModelDataAsync>d__20");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__DlcPromoPanelModel___UpdateOwnedPacksAsync_d__32, "", "DlcPromoPanelModel/<UpdateOwnedPacksAsync>d__32");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__DlcPromoPanelModel___UpdatePromoInfosAsync_d__21, "", "DlcPromoPanelModel/<UpdatePromoInfosAsync>d__21");

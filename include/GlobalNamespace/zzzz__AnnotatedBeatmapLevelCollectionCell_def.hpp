#pragma once
// IWYU pragma private; include "GlobalNamespace/AnnotatedBeatmapLevelCollectionCell.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__EntitlementStatus_def.hpp"
#include "HMUI/zzzz__SelectableCell_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AnnotatedBeatmapLevelCollectionCell)
namespace GlobalNamespace {
class BeatmapLevelPack;
}
namespace GlobalNamespace {
class BeatmapLevel;
}
namespace GlobalNamespace {
struct EntitlementStatus;
}
namespace GlobalNamespace {
class IEntitlementModel;
}
namespace GlobalNamespace {
struct __AnnotatedBeatmapLevelCollectionCell___RefreshAvailabilityAsync_d__23;
}
namespace HMUI {
class ImageView;
}
namespace HMUI {
struct __SelectableCell__TransitionType;
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
namespace System::Threading {
class CancellationTokenSource;
}
namespace System::Threading {
struct CancellationToken;
}
namespace TMPro {
class TextMeshProUGUI;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Sprite;
}
// Forward declare root types
namespace GlobalNamespace {
class AnnotatedBeatmapLevelCollectionCell;
}
namespace GlobalNamespace {
struct __AnnotatedBeatmapLevelCollectionCell___RefreshAvailabilityAsync_d__23;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell);
MARK_VAL_T(::GlobalNamespace::__AnnotatedBeatmapLevelCollectionCell___RefreshAvailabilityAsync_d__23);
// Type: ::<RefreshAvailabilityAsync>d__23
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 112, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::AnnotatedBeatmapLevelCollectionCell::<RefreshAvailabilityAsync>d__23
struct CORDL_TYPE __AnnotatedBeatmapLevelCollectionCell___RefreshAvailabilityAsync_d__23 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext, addr 0x274d7d0, size 0x4f4, virtual true, abstract: false, final true
  inline void MoveNext();

  /// @brief Method SetStateMachine, addr 0x274dcc4, size 0xc, virtual true, abstract: false, final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  /// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* i___System__Runtime__CompilerServices__IAsyncStateMachine();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __AnnotatedBeatmapLevelCollectionCell___RefreshAvailabilityAsync_d__23();

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty:
  // "::UnityW<::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell>", modifiers: "", def_value: None }, CppParam { name: "entitlementModel", ty: "::GlobalNamespace::IEntitlementModel*", modifiers:
  // "", def_value: None }, CppParam { name: "_cancellationToken_5__2", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "_numberOfOwnedLevels_5__3",
  // ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_error_5__4", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "__7__wrap4", ty:
  // "::ArrayW<::GlobalNamespace::BeatmapLevel*,::Array<::GlobalNamespace::BeatmapLevel*>*>", modifiers: "", def_value: None }, CppParam { name: "__7__wrap5", ty: "int32_t", modifiers: "", def_value:
  // None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus>", modifiers: "", def_value: None }]
  constexpr __AnnotatedBeatmapLevelCollectionCell___RefreshAvailabilityAsync_d__23(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder,
                                                                                   ::UnityW<::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell> __4__this,
                                                                                   ::GlobalNamespace::IEntitlementModel* entitlementModel,
                                                                                   ::System::Threading::CancellationToken _cancellationToken_5__2, int32_t _numberOfOwnedLevels_5__3, bool _error_5__4,
                                                                                   ::ArrayW<::GlobalNamespace::BeatmapLevel*, ::Array<::GlobalNamespace::BeatmapLevel*>*> __7__wrap4,
                                                                                   int32_t __7__wrap5,
                                                                                   ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus> __u__1) noexcept;

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x20, def value: None
  ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell> __4__this;

  /// @brief Field entitlementModel, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::IEntitlementModel* entitlementModel;

  /// @brief Field <cancellationToken>5__2, offset: 0x38, size: 0x8, def value: None
  ::System::Threading::CancellationToken _cancellationToken_5__2;

  /// @brief Field <numberOfOwnedLevels>5__3, offset: 0x40, size: 0x4, def value: None
  int32_t _numberOfOwnedLevels_5__3;

  /// @brief Field <error>5__4, offset: 0x44, size: 0x1, def value: None
  bool _error_5__4;

  /// @brief Field <>7__wrap4, offset: 0x48, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::BeatmapLevel*, ::Array<::GlobalNamespace::BeatmapLevel*>*> __7__wrap4;

  /// @brief Field <>7__wrap5, offset: 0x50, size: 0x4, def value: None
  int32_t __7__wrap5;

  /// @brief Field <>u__1, offset: 0x58, size: 0x8, def value: None
  ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus> __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x60 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__AnnotatedBeatmapLevelCollectionCell___RefreshAvailabilityAsync_d__23, 0x60>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__AnnotatedBeatmapLevelCollectionCell___RefreshAvailabilityAsync_d__23, __1__state) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AnnotatedBeatmapLevelCollectionCell___RefreshAvailabilityAsync_d__23, __t__builder) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AnnotatedBeatmapLevelCollectionCell___RefreshAvailabilityAsync_d__23, __4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AnnotatedBeatmapLevelCollectionCell___RefreshAvailabilityAsync_d__23, entitlementModel) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AnnotatedBeatmapLevelCollectionCell___RefreshAvailabilityAsync_d__23, _cancellationToken_5__2) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AnnotatedBeatmapLevelCollectionCell___RefreshAvailabilityAsync_d__23, _numberOfOwnedLevels_5__3) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AnnotatedBeatmapLevelCollectionCell___RefreshAvailabilityAsync_d__23, _error_5__4) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AnnotatedBeatmapLevelCollectionCell___RefreshAvailabilityAsync_d__23, __7__wrap4) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AnnotatedBeatmapLevelCollectionCell___RefreshAvailabilityAsync_d__23, __7__wrap5) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__AnnotatedBeatmapLevelCollectionCell___RefreshAvailabilityAsync_d__23, __u__1) == 0x58, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::AnnotatedBeatmapLevelCollectionCell
// SizeInfo { instance_size: 216, native_size: -1, calculated_instance_size: 216, calculated_native_size: 216, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::AnnotatedBeatmapLevelCollectionCell*
class CORDL_TYPE AnnotatedBeatmapLevelCollectionCell : public ::HMUI::SelectableCell {
public:
  // Declarations
  using _RefreshAvailabilityAsync_d__23 = ::GlobalNamespace::__AnnotatedBeatmapLevelCollectionCell___RefreshAvailabilityAsync_d__23;

  /// @brief Field _beatmapLevelPack, offset 0xc8, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapLevelPack, put = __cordl_internal_set__beatmapLevelPack))::GlobalNamespace::BeatmapLevelPack* _beatmapLevelPack;

  /// @brief Field _cancellationTokenSource, offset 0xd0, size 0x8
  __declspec(property(get = __cordl_internal_get__cancellationTokenSource, put = __cordl_internal_set__cancellationTokenSource))::System::Threading::CancellationTokenSource* _cancellationTokenSource;

  /// @brief Field <cellIndex>k__BackingField, offset 0xc0, size 0x4
  __declspec(property(get = __cordl_internal_get__cellIndex_k__BackingField, put = __cordl_internal_set__cellIndex_k__BackingField)) int32_t _cellIndex_k__BackingField;

  /// @brief Field _coverImage, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__coverImage, put = __cordl_internal_set__coverImage))::UnityW<::HMUI::ImageView> _coverImage;

  /// @brief Field _defaultCoverSprite, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get__defaultCoverSprite, put = __cordl_internal_set__defaultCoverSprite))::UnityW<::UnityEngine::Sprite> _defaultCoverSprite;

  /// @brief Field _downloadIconObject, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__downloadIconObject, put = __cordl_internal_set__downloadIconObject))::UnityW<::UnityEngine::GameObject> _downloadIconObject;

  /// @brief Field _highlightedColor0, offset 0x98, size 0x10
  __declspec(property(get = __cordl_internal_get__highlightedColor0, put = __cordl_internal_set__highlightedColor0))::UnityEngine::Color _highlightedColor0;

  /// @brief Field _highlightedColor1, offset 0xa8, size 0x10
  __declspec(property(get = __cordl_internal_get__highlightedColor1, put = __cordl_internal_set__highlightedColor1))::UnityEngine::Color _highlightedColor1;

  /// @brief Field _infoText, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__infoText, put = __cordl_internal_set__infoText))::UnityW<::TMPro::TextMeshProUGUI> _infoText;

  /// @brief Field _newBadgeObject, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__newBadgeObject, put = __cordl_internal_set__newBadgeObject))::UnityW<::UnityEngine::GameObject> _newBadgeObject;

  /// @brief Field _selectedColor0, offset 0x78, size 0x10
  __declspec(property(get = __cordl_internal_get__selectedColor0, put = __cordl_internal_set__selectedColor0))::UnityEngine::Color _selectedColor0;

  /// @brief Field _selectedColor1, offset 0x88, size 0x10
  __declspec(property(get = __cordl_internal_get__selectedColor1, put = __cordl_internal_set__selectedColor1))::UnityEngine::Color _selectedColor1;

  /// @brief Field _selectionImage, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__selectionImage, put = __cordl_internal_set__selectionImage))::UnityW<::HMUI::ImageView> _selectionImage;

  /// @brief Field _updatedBadgeObject, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__updatedBadgeObject, put = __cordl_internal_set__updatedBadgeObject))::UnityW<::UnityEngine::GameObject> _updatedBadgeObject;

  __declspec(property(get = get_cellIndex, put = set_cellIndex)) int32_t cellIndex;

  /// @brief Method CancelAsyncOperations, addr 0x274d794, size 0x14, virtual false, abstract: false, final false
  inline void CancelAsyncOperations();

  /// @brief Method GetInfoText, addr 0x274d4a8, size 0xf0, virtual false, abstract: false, final false
  inline ::StringW GetInfoText(::StringW name, int32_t songs, int32_t purchased);

  /// @brief Method HighlightDidChange, addr 0x274d6f0, size 0x4, virtual true, abstract: false, final false
  inline void HighlightDidChange(::HMUI::__SelectableCell__TransitionType transitionType);

  /// @brief Method InternalToggle, addr 0x274d5dc, size 0x24, virtual true, abstract: false, final false
  inline void InternalToggle();

  static inline ::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell* New_ctor();

  /// @brief Method RefreshAvailabilityAsync, addr 0x274d6f4, size 0xa0, virtual false, abstract: false, final false
  inline void RefreshAvailabilityAsync(::GlobalNamespace::IEntitlementModel* entitlementModel);

  /// @brief Method RefreshVisuals, addr 0x274d604, size 0xec, virtual false, abstract: false, final false
  inline void RefreshVisuals();

  /// @brief Method SelectionDidChange, addr 0x274d600, size 0x4, virtual true, abstract: false, final false
  inline void SelectionDidChange(::HMUI::__SelectableCell__TransitionType transitionType);

  /// @brief Method SetData, addr 0x274d38c, size 0x11c, virtual false, abstract: false, final false
  inline void SetData(::GlobalNamespace::BeatmapLevelPack* beatmapLevelPack, bool isPromoted, bool isUpdated);

  /// @brief Method SetDownloadIconVisible, addr 0x274d598, size 0x44, virtual false, abstract: false, final false
  inline void SetDownloadIconVisible(bool visible);

  constexpr ::GlobalNamespace::BeatmapLevelPack*& __cordl_internal_get__beatmapLevelPack();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapLevelPack*> const& __cordl_internal_get__beatmapLevelPack() const;

  constexpr ::System::Threading::CancellationTokenSource*& __cordl_internal_get__cancellationTokenSource();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::CancellationTokenSource*> const& __cordl_internal_get__cancellationTokenSource() const;

  constexpr int32_t const& __cordl_internal_get__cellIndex_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__cellIndex_k__BackingField();

  constexpr ::UnityW<::HMUI::ImageView> const& __cordl_internal_get__coverImage() const;

  constexpr ::UnityW<::HMUI::ImageView>& __cordl_internal_get__coverImage();

  constexpr ::UnityW<::UnityEngine::Sprite> const& __cordl_internal_get__defaultCoverSprite() const;

  constexpr ::UnityW<::UnityEngine::Sprite>& __cordl_internal_get__defaultCoverSprite();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__downloadIconObject() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__downloadIconObject();

  constexpr ::UnityEngine::Color const& __cordl_internal_get__highlightedColor0() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get__highlightedColor0();

  constexpr ::UnityEngine::Color const& __cordl_internal_get__highlightedColor1() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get__highlightedColor1();

  constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get__infoText() const;

  constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get__infoText();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__newBadgeObject() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__newBadgeObject();

  constexpr ::UnityEngine::Color const& __cordl_internal_get__selectedColor0() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get__selectedColor0();

  constexpr ::UnityEngine::Color const& __cordl_internal_get__selectedColor1() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get__selectedColor1();

  constexpr ::UnityW<::HMUI::ImageView> const& __cordl_internal_get__selectionImage() const;

  constexpr ::UnityW<::HMUI::ImageView>& __cordl_internal_get__selectionImage();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__updatedBadgeObject() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__updatedBadgeObject();

  constexpr void __cordl_internal_set__beatmapLevelPack(::GlobalNamespace::BeatmapLevelPack* value);

  constexpr void __cordl_internal_set__cancellationTokenSource(::System::Threading::CancellationTokenSource* value);

  constexpr void __cordl_internal_set__cellIndex_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__coverImage(::UnityW<::HMUI::ImageView> value);

  constexpr void __cordl_internal_set__defaultCoverSprite(::UnityW<::UnityEngine::Sprite> value);

  constexpr void __cordl_internal_set__downloadIconObject(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set__highlightedColor0(::UnityEngine::Color value);

  constexpr void __cordl_internal_set__highlightedColor1(::UnityEngine::Color value);

  constexpr void __cordl_internal_set__infoText(::UnityW<::TMPro::TextMeshProUGUI> value);

  constexpr void __cordl_internal_set__newBadgeObject(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set__selectedColor0(::UnityEngine::Color value);

  constexpr void __cordl_internal_set__selectedColor1(::UnityEngine::Color value);

  constexpr void __cordl_internal_set__selectionImage(::UnityW<::HMUI::ImageView> value);

  constexpr void __cordl_internal_set__updatedBadgeObject(::UnityW<::UnityEngine::GameObject> value);

  /// @brief Method .ctor, addr 0x274d7a8, size 0x28, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_cellIndex, addr 0x274d37c, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_cellIndex();

  /// @brief Method set_cellIndex, addr 0x274d384, size 0x8, virtual false, abstract: false, final false
  inline void set_cellIndex(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AnnotatedBeatmapLevelCollectionCell();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AnnotatedBeatmapLevelCollectionCell", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AnnotatedBeatmapLevelCollectionCell(AnnotatedBeatmapLevelCollectionCell&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AnnotatedBeatmapLevelCollectionCell", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AnnotatedBeatmapLevelCollectionCell(AnnotatedBeatmapLevelCollectionCell const&) = delete;

  /// @brief Field _infoText, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::TMPro::TextMeshProUGUI> ____infoText;

  /// @brief Field _coverImage, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::HMUI::ImageView> ____coverImage;

  /// @brief Field _selectionImage, offset: 0x58, size: 0x8, def value: None
  ::UnityW<::HMUI::ImageView> ____selectionImage;

  /// @brief Field _downloadIconObject, offset: 0x60, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ____downloadIconObject;

  /// @brief Field _newBadgeObject, offset: 0x68, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ____newBadgeObject;

  /// @brief Field _updatedBadgeObject, offset: 0x70, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ____updatedBadgeObject;

  /// @brief Field _selectedColor0, offset: 0x78, size: 0x10, def value: None
  ::UnityEngine::Color ____selectedColor0;

  /// @brief Field _selectedColor1, offset: 0x88, size: 0x10, def value: None
  ::UnityEngine::Color ____selectedColor1;

  /// @brief Field _highlightedColor0, offset: 0x98, size: 0x10, def value: None
  ::UnityEngine::Color ____highlightedColor0;

  /// @brief Field _highlightedColor1, offset: 0xa8, size: 0x10, def value: None
  ::UnityEngine::Color ____highlightedColor1;

  /// @brief Field _defaultCoverSprite, offset: 0xb8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Sprite> ____defaultCoverSprite;

  /// @brief Field <cellIndex>k__BackingField, offset: 0xc0, size: 0x4, def value: None
  int32_t ____cellIndex_k__BackingField;

  /// @brief Field _beatmapLevelPack, offset: 0xc8, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapLevelPack* ____beatmapLevelPack;

  /// @brief Field _cancellationTokenSource, offset: 0xd0, size: 0x8, def value: None
  ::System::Threading::CancellationTokenSource* ____cancellationTokenSource;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell, 0xd8>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell, ____infoText) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell, ____coverImage) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell, ____selectionImage) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell, ____downloadIconObject) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell, ____newBadgeObject) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell, ____updatedBadgeObject) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell, ____selectedColor0) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell, ____selectedColor1) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell, ____highlightedColor0) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell, ____highlightedColor1) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell, ____defaultCoverSprite) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell, ____cellIndex_k__BackingField) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell, ____beatmapLevelPack) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell, ____cancellationTokenSource) == 0xd0, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AnnotatedBeatmapLevelCollectionCell*, "", "AnnotatedBeatmapLevelCollectionCell");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__AnnotatedBeatmapLevelCollectionCell___RefreshAvailabilityAsync_d__23, "", "AnnotatedBeatmapLevelCollectionCell/<RefreshAvailabilityAsync>d__23");

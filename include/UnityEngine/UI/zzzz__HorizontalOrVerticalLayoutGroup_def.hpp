#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UI/zzzz__LayoutGroup_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(HorizontalOrVerticalLayoutGroup)
namespace UnityEngine {
class RectTransform;
}
// Forward declare root types
namespace UnityEngine::UI {
class HorizontalOrVerticalLayoutGroup;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UI::HorizontalOrVerticalLayoutGroup);
// Type: UnityEngine.UI::HorizontalOrVerticalLayoutGroup
// SizeInfo { instance_size: 104, native_size: -1, calculated_instance_size: 104, calculated_native_size: 99, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::UI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13091))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13083))
// CS Name: ::UnityEngine.UI::HorizontalOrVerticalLayoutGroup*
class CORDL_TYPE HorizontalOrVerticalLayoutGroup : public ::UnityEngine::UI::LayoutGroup {
public:
  // Declarations
  /// @brief Field m_Spacing, offset 0x58, size 0x4
  __declspec(property(get = __get_m_Spacing, put = __set_m_Spacing)) float_t m_Spacing;

  /// @brief Field m_ChildForceExpandWidth, offset 0x5c, size 0x1
  __declspec(property(get = __get_m_ChildForceExpandWidth, put = __set_m_ChildForceExpandWidth)) bool m_ChildForceExpandWidth;

  /// @brief Field m_ChildForceExpandHeight, offset 0x5d, size 0x1
  __declspec(property(get = __get_m_ChildForceExpandHeight, put = __set_m_ChildForceExpandHeight)) bool m_ChildForceExpandHeight;

  /// @brief Field m_ChildControlWidth, offset 0x5e, size 0x1
  __declspec(property(get = __get_m_ChildControlWidth, put = __set_m_ChildControlWidth)) bool m_ChildControlWidth;

  /// @brief Field m_ChildControlHeight, offset 0x5f, size 0x1
  __declspec(property(get = __get_m_ChildControlHeight, put = __set_m_ChildControlHeight)) bool m_ChildControlHeight;

  /// @brief Field m_ChildScaleWidth, offset 0x60, size 0x1
  __declspec(property(get = __get_m_ChildScaleWidth, put = __set_m_ChildScaleWidth)) bool m_ChildScaleWidth;

  /// @brief Field m_ChildScaleHeight, offset 0x61, size 0x1
  __declspec(property(get = __get_m_ChildScaleHeight, put = __set_m_ChildScaleHeight)) bool m_ChildScaleHeight;

  /// @brief Field m_ReverseArrangement, offset 0x62, size 0x1
  __declspec(property(get = __get_m_ReverseArrangement, put = __set_m_ReverseArrangement)) bool m_ReverseArrangement;

  __declspec(property(get = get_spacing, put = set_spacing)) float_t spacing;

  __declspec(property(get = get_childForceExpandWidth, put = set_childForceExpandWidth)) bool childForceExpandWidth;

  __declspec(property(get = get_childForceExpandHeight, put = set_childForceExpandHeight)) bool childForceExpandHeight;

  __declspec(property(get = get_childControlWidth, put = set_childControlWidth)) bool childControlWidth;

  __declspec(property(get = get_childControlHeight, put = set_childControlHeight)) bool childControlHeight;

  __declspec(property(get = get_childScaleWidth, put = set_childScaleWidth)) bool childScaleWidth;

  __declspec(property(get = get_childScaleHeight, put = set_childScaleHeight)) bool childScaleHeight;

  __declspec(property(get = get_reverseArrangement, put = set_reverseArrangement)) bool reverseArrangement;

  constexpr float_t& __get_m_Spacing();

  constexpr float_t const& __get_m_Spacing() const;

  constexpr void __set_m_Spacing(float_t value);

  constexpr bool& __get_m_ChildForceExpandWidth();

  constexpr bool const& __get_m_ChildForceExpandWidth() const;

  constexpr void __set_m_ChildForceExpandWidth(bool value);

  constexpr bool& __get_m_ChildForceExpandHeight();

  constexpr bool const& __get_m_ChildForceExpandHeight() const;

  constexpr void __set_m_ChildForceExpandHeight(bool value);

  constexpr bool& __get_m_ChildControlWidth();

  constexpr bool const& __get_m_ChildControlWidth() const;

  constexpr void __set_m_ChildControlWidth(bool value);

  constexpr bool& __get_m_ChildControlHeight();

  constexpr bool const& __get_m_ChildControlHeight() const;

  constexpr void __set_m_ChildControlHeight(bool value);

  constexpr bool& __get_m_ChildScaleWidth();

  constexpr bool const& __get_m_ChildScaleWidth() const;

  constexpr void __set_m_ChildScaleWidth(bool value);

  constexpr bool& __get_m_ChildScaleHeight();

  constexpr bool const& __get_m_ChildScaleHeight() const;

  constexpr void __set_m_ChildScaleHeight(bool value);

  constexpr bool& __get_m_ReverseArrangement();

  constexpr bool const& __get_m_ReverseArrangement() const;

  constexpr void __set_m_ReverseArrangement(bool value);

  /// @brief Method get_spacing addr 0x2d7692c size 0x8 virtual false final false
  inline float_t get_spacing();

  /// @brief Method set_spacing addr 0x2d76934 size 0x5c virtual false final false
  inline void set_spacing(float_t value);

  /// @brief Method get_childForceExpandWidth addr 0x2d76990 size 0x8 virtual false final false
  inline bool get_childForceExpandWidth();

  /// @brief Method set_childForceExpandWidth addr 0x2d76998 size 0x5c virtual false final false
  inline void set_childForceExpandWidth(bool value);

  /// @brief Method get_childForceExpandHeight addr 0x2d769f4 size 0x8 virtual false final false
  inline bool get_childForceExpandHeight();

  /// @brief Method set_childForceExpandHeight addr 0x2d769fc size 0x5c virtual false final false
  inline void set_childForceExpandHeight(bool value);

  /// @brief Method get_childControlWidth addr 0x2d76a58 size 0x8 virtual false final false
  inline bool get_childControlWidth();

  /// @brief Method set_childControlWidth addr 0x2d76a60 size 0x5c virtual false final false
  inline void set_childControlWidth(bool value);

  /// @brief Method get_childControlHeight addr 0x2d76abc size 0x8 virtual false final false
  inline bool get_childControlHeight();

  /// @brief Method set_childControlHeight addr 0x2d76ac4 size 0x5c virtual false final false
  inline void set_childControlHeight(bool value);

  /// @brief Method get_childScaleWidth addr 0x2d76b20 size 0x8 virtual false final false
  inline bool get_childScaleWidth();

  /// @brief Method set_childScaleWidth addr 0x2d76b28 size 0x5c virtual false final false
  inline void set_childScaleWidth(bool value);

  /// @brief Method get_childScaleHeight addr 0x2d76b84 size 0x8 virtual false final false
  inline bool get_childScaleHeight();

  /// @brief Method set_childScaleHeight addr 0x2d76b8c size 0x5c virtual false final false
  inline void set_childScaleHeight(bool value);

  /// @brief Method get_reverseArrangement addr 0x2d76be8 size 0x8 virtual false final false
  inline bool get_reverseArrangement();

  /// @brief Method set_reverseArrangement addr 0x2d76bf0 size 0x5c virtual false final false
  inline void set_reverseArrangement(bool value);

  /// @brief Method CalcAlongAxis addr 0x2d75ff8 size 0x2a4 virtual false final false
  inline void CalcAlongAxis(int32_t axis, bool isVertical);

  /// @brief Method SetChildrenAlongAxis addr 0x2d762b4 size 0x66c virtual false final false
  inline void SetChildrenAlongAxis(int32_t axis, bool isVertical);

  /// @brief Method GetChildSizes addr 0x2d76c4c size 0x118 virtual false final false
  inline void GetChildSizes(::UnityEngine::RectTransform* child, int32_t axis, bool controlSize, bool childForceExpand, ByRef<float_t> min, ByRef<float_t> preferred, ByRef<float_t> flexible);

  static inline ::UnityEngine::UI::HorizontalOrVerticalLayoutGroup* New_ctor();

  /// @brief Method .ctor addr 0x2d75fcc size 0xc virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "HorizontalOrVerticalLayoutGroup", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HorizontalOrVerticalLayoutGroup(HorizontalOrVerticalLayoutGroup&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HorizontalOrVerticalLayoutGroup", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HorizontalOrVerticalLayoutGroup(HorizontalOrVerticalLayoutGroup const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HorizontalOrVerticalLayoutGroup();

public:
  /// @brief Field m_Spacing, offset: 0x58, size: 0x4, def value: None
  float_t ___m_Spacing;

  /// @brief Field m_ChildForceExpandWidth, offset: 0x5c, size: 0x1, def value: None
  bool ___m_ChildForceExpandWidth;

  /// @brief Field m_ChildForceExpandHeight, offset: 0x5d, size: 0x1, def value: None
  bool ___m_ChildForceExpandHeight;

  /// @brief Field m_ChildControlWidth, offset: 0x5e, size: 0x1, def value: None
  bool ___m_ChildControlWidth;

  /// @brief Field m_ChildControlHeight, offset: 0x5f, size: 0x1, def value: None
  bool ___m_ChildControlHeight;

  /// @brief Field m_ChildScaleWidth, offset: 0x60, size: 0x1, def value: None
  bool ___m_ChildScaleWidth;

  /// @brief Field m_ChildScaleHeight, offset: 0x61, size: 0x1, def value: None
  bool ___m_ChildScaleHeight;

  /// @brief Field m_ReverseArrangement, offset: 0x62, size: 0x1, def value: None
  bool ___m_ReverseArrangement;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UI::HorizontalOrVerticalLayoutGroup, 0x68>, "Size mismatch!");

} // namespace UnityEngine::UI
NEED_NO_BOX(::UnityEngine::UI::HorizontalOrVerticalLayoutGroup);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::HorizontalOrVerticalLayoutGroup*, "UnityEngine.UI", "HorizontalOrVerticalLayoutGroup");
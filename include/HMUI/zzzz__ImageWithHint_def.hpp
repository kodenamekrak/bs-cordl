#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ImageWithHint)
namespace HMUI {
class HoverHint;
}
namespace UnityEngine {
class Sprite;
}
namespace UnityEngine::UI {
class Image;
}
// Forward declare root types
namespace HMUI {
class ImageWithHint;
}
// Write type traits
MARK_REF_PTR_T(::HMUI::ImageWithHint);
// Type: HMUI::ImageWithHint
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace HMUI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13628))
// CS Name: ::HMUI::ImageWithHint*
class CORDL_TYPE ImageWithHint : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _image, offset 0x18, size 0x8
  __declspec(property(get = __get__image, put = __set__image))::UnityEngine::UI::Image* _image;

  /// @brief Field _hoverHint, offset 0x20, size 0x8
  __declspec(property(get = __get__hoverHint, put = __set__hoverHint))::HMUI::HoverHint* _hoverHint;

  __declspec(property(get = get_sprite, put = set_sprite))::UnityEngine::Sprite* sprite;

  __declspec(property(put = set_hintText))::StringW hintText;

  constexpr ::UnityEngine::UI::Image*& __get__image();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Image*> const& __get__image() const;

  constexpr void __set__image(::UnityEngine::UI::Image* value);

  constexpr ::HMUI::HoverHint*& __get__hoverHint();

  constexpr ::cordl_internals::to_const_pointer<::HMUI::HoverHint*> const& __get__hoverHint() const;

  constexpr void __set__hoverHint(::HMUI::HoverHint* value);

  /// @brief Method set_sprite addr 0x21408f8 size 0x1c virtual false final false
  inline void set_sprite(::UnityEngine::Sprite* value);

  /// @brief Method get_sprite addr 0x2140914 size 0x1c virtual false final false
  inline ::UnityEngine::Sprite* get_sprite();

  /// @brief Method set_hintText addr 0x2140930 size 0x1c virtual false final false
  inline void set_hintText(::StringW value);

  static inline ::HMUI::ImageWithHint* New_ctor();

  /// @brief Method .ctor addr 0x214094c size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "ImageWithHint", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ImageWithHint(ImageWithHint&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ImageWithHint", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ImageWithHint(ImageWithHint const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ImageWithHint();

public:
  /// @brief Field _image, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::UI::Image* ____image;

  /// @brief Field _hoverHint, offset: 0x20, size: 0x8, def value: None
  ::HMUI::HoverHint* ____hoverHint;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::ImageWithHint, 0x28>, "Size mismatch!");

} // namespace HMUI
NEED_NO_BOX(::HMUI::ImageWithHint);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::ImageWithHint*, "HMUI", "ImageWithHint");
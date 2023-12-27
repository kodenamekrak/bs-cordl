#pragma once
#include "UnityEngine/EventSystems/zzzz__UIBehaviour_impl.hpp"
#include "UnityEngine/UI/zzzz__ContentSizeFitter_impl.hpp"
#include "UnityEngine/zzzz__DrivenRectTransformTracker_impl.hpp"
#include "UnityEngine/UI/zzzz__ContentSizeFitter_def.hpp"
#include "UnityEngine/UI/zzzz__ILayoutSelfController_def.hpp"
#include "UnityEngine/UI/zzzz__ILayoutController_def.hpp"
#include "UnityEngine/UI/zzzz__ContentSizeFitter_def.hpp"
#include "UnityEngine/zzzz__RectTransform_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UI::__ContentSizeFitter__FitMode::__ContentSizeFitter__FitMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::UI::__ContentSizeFitter__FitMode::__ContentSizeFitter__FitMode() {}
constexpr ::UnityEngine::UI::__ContentSizeFitter__FitMode UnityEngine::UI::__ContentSizeFitter__FitMode::Unconstrained{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::UI::__ContentSizeFitter__FitMode UnityEngine::UI::__ContentSizeFitter__FitMode::MinSize{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::UI::__ContentSizeFitter__FitMode UnityEngine::UI::__ContentSizeFitter__FitMode::PreferredSize{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::UnityEngine::UI::ContentSizeFitter.get_horizontalFit
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UI::__ContentSizeFitter__FitMode (::UnityEngine::UI::ContentSizeFitter::*)()>(
    &::UnityEngine::UI::ContentSizeFitter::get_horizontalFit)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d74720;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ContentSizeFitter*>::get(),
                                                                               "get_horizontalFit", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ContentSizeFitter.set_horizontalFit
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::ContentSizeFitter::*)(::UnityEngine::UI::__ContentSizeFitter__FitMode)>(
    &::UnityEngine::UI::ContentSizeFitter::set_horizontalFit)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2d74728;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ContentSizeFitter*>::get(), "set_horizontalFit", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::__ContentSizeFitter__FitMode>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ContentSizeFitter.get_verticalFit
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UI::__ContentSizeFitter__FitMode (::UnityEngine::UI::ContentSizeFitter::*)()>(
    &::UnityEngine::UI::ContentSizeFitter::get_verticalFit)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d74820;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ContentSizeFitter*>::get(), "get_verticalFit",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ContentSizeFitter.set_verticalFit
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::ContentSizeFitter::*)(::UnityEngine::UI::__ContentSizeFitter__FitMode)>(
    &::UnityEngine::UI::ContentSizeFitter::set_verticalFit)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2d74828;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ContentSizeFitter*>::get(), "set_verticalFit", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::__ContentSizeFitter__FitMode>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ContentSizeFitter.get_rectTransform
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::RectTransform* (::UnityEngine::UI::ContentSizeFitter::*)()>(
    &::UnityEngine::UI::ContentSizeFitter::get_rectTransform)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x2d7489c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ContentSizeFitter*>::get(),
                                                                               "get_rectTransform", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ContentSizeFitter._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::ContentSizeFitter::*)()>(&::UnityEngine::UI::ContentSizeFitter::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d74930;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ContentSizeFitter*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ContentSizeFitter.OnEnable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::ContentSizeFitter::*)()>(&::UnityEngine::UI::ContentSizeFitter::OnEnable)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2d74938;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ContentSizeFitter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ContentSizeFitter*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ContentSizeFitter.OnDisable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::ContentSizeFitter::*)()>(&::UnityEngine::UI::ContentSizeFitter::OnDisable)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2d74954;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ContentSizeFitter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ContentSizeFitter*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ContentSizeFitter.OnRectTransformDimensionsChange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::ContentSizeFitter::*)()>(
    &::UnityEngine::UI::ContentSizeFitter::OnRectTransformDimensionsChange)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2d749d0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ContentSizeFitter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ContentSizeFitter*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ContentSizeFitter.HandleSelfFittingAlongAxis
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::ContentSizeFitter::*)(int32_t)>(
    &::UnityEngine::UI::ContentSizeFitter::HandleSelfFittingAlongAxis)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x2d749d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ContentSizeFitter*>::get(), "HandleSelfFittingAlongAxis",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ContentSizeFitter.SetLayoutHorizontal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::ContentSizeFitter::*)()>(&::UnityEngine::UI::ContentSizeFitter::SetLayoutHorizontal)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2d74ad0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ContentSizeFitter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ContentSizeFitter*>::get(), 19));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ContentSizeFitter.SetLayoutVertical
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::ContentSizeFitter::*)()>(&::UnityEngine::UI::ContentSizeFitter::SetLayoutVertical)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d74af4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ContentSizeFitter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ContentSizeFitter*>::get(), 20));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ContentSizeFitter.SetDirty
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::ContentSizeFitter::*)()>(&::UnityEngine::UI::ContentSizeFitter::SetDirty)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2d7479c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ContentSizeFitter*>::get(), "SetDirty",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::UnityEngine::UI::ILayoutSelfController"
constexpr UnityEngine::UI::ContentSizeFitter::operator ::UnityEngine::UI::ILayoutSelfController*() noexcept {
  return static_cast<::UnityEngine::UI::ILayoutSelfController*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::UI::ILayoutController"
constexpr UnityEngine::UI::ContentSizeFitter::operator ::UnityEngine::UI::ILayoutController*() noexcept {
  return static_cast<::UnityEngine::UI::ILayoutController*>(static_cast<void*>(this));
}
constexpr ::UnityEngine::UI::__ContentSizeFitter__FitMode& UnityEngine::UI::ContentSizeFitter::__get_m_HorizontalFit() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_HorizontalFit;
}
constexpr ::UnityEngine::UI::__ContentSizeFitter__FitMode const& UnityEngine::UI::ContentSizeFitter::__get_m_HorizontalFit() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_HorizontalFit;
}
constexpr void UnityEngine::UI::ContentSizeFitter::__set_m_HorizontalFit(::UnityEngine::UI::__ContentSizeFitter__FitMode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___m_HorizontalFit = value;
}
constexpr ::UnityEngine::UI::__ContentSizeFitter__FitMode& UnityEngine::UI::ContentSizeFitter::__get_m_VerticalFit() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_VerticalFit;
}
constexpr ::UnityEngine::UI::__ContentSizeFitter__FitMode const& UnityEngine::UI::ContentSizeFitter::__get_m_VerticalFit() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_VerticalFit;
}
constexpr void UnityEngine::UI::ContentSizeFitter::__set_m_VerticalFit(::UnityEngine::UI::__ContentSizeFitter__FitMode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___m_VerticalFit = value;
}
constexpr ::UnityEngine::RectTransform*& UnityEngine::UI::ContentSizeFitter::__get_m_Rect() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_Rect;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::RectTransform*> const& UnityEngine::UI::ContentSizeFitter::__get_m_Rect() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_Rect;
}
constexpr void UnityEngine::UI::ContentSizeFitter::__set_m_Rect(::UnityEngine::RectTransform* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Rect)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::DrivenRectTransformTracker& UnityEngine::UI::ContentSizeFitter::__get_m_Tracker() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_Tracker;
}
constexpr ::UnityEngine::DrivenRectTransformTracker const& UnityEngine::UI::ContentSizeFitter::__get_m_Tracker() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_Tracker;
}
constexpr void UnityEngine::UI::ContentSizeFitter::__set_m_Tracker(::UnityEngine::DrivenRectTransformTracker value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___m_Tracker = value;
}
inline ::UnityEngine::UI::__ContentSizeFitter__FitMode UnityEngine::UI::ContentSizeFitter::get_horizontalFit() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ContentSizeFitter*>::get(), "get_horizontalFit",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UI::__ContentSizeFitter__FitMode, false>(this, ___internal_method);
}
inline void UnityEngine::UI::ContentSizeFitter::set_horizontalFit(::UnityEngine::UI::__ContentSizeFitter__FitMode value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ContentSizeFitter*>::get(), "set_horizontalFit", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::__ContentSizeFitter__FitMode>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::UI::__ContentSizeFitter__FitMode UnityEngine::UI::ContentSizeFitter::get_verticalFit() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ContentSizeFitter*>::get(), "get_verticalFit",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UI::__ContentSizeFitter__FitMode, false>(this, ___internal_method);
}
inline void UnityEngine::UI::ContentSizeFitter::set_verticalFit(::UnityEngine::UI::__ContentSizeFitter__FitMode value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ContentSizeFitter*>::get(), "set_verticalFit", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::__ContentSizeFitter__FitMode>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::RectTransform* UnityEngine::UI::ContentSizeFitter::get_rectTransform() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ContentSizeFitter*>::get(), "get_rectTransform",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::RectTransform*, false>(this, ___internal_method);
}
inline ::UnityEngine::UI::ContentSizeFitter* UnityEngine::UI::ContentSizeFitter::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::UI::ContentSizeFitter*>());
}
inline void UnityEngine::UI::ContentSizeFitter::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ContentSizeFitter*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UI::ContentSizeFitter::OnEnable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ContentSizeFitter*>::get(), "OnEnable",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UI::ContentSizeFitter::OnDisable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ContentSizeFitter*>::get(), "OnDisable",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UI::ContentSizeFitter::OnRectTransformDimensionsChange() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ContentSizeFitter*>::get(),
                                                                             "OnRectTransformDimensionsChange", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UI::ContentSizeFitter::HandleSelfFittingAlongAxis(int32_t axis) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ContentSizeFitter*>::get(), "HandleSelfFittingAlongAxis",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, axis);
}
inline void UnityEngine::UI::ContentSizeFitter::SetLayoutHorizontal() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ContentSizeFitter*>::get(),
                                                                             "SetLayoutHorizontal", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UI::ContentSizeFitter::SetLayoutVertical() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ContentSizeFitter*>::get(), "SetLayoutVertical",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UI::ContentSizeFitter::SetDirty() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ContentSizeFitter*>::get(), "SetDirty",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::UI::ContentSizeFitter::ContentSizeFitter() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
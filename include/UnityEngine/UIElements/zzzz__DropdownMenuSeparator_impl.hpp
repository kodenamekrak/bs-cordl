#pragma once
#include "UnityEngine/UIElements/zzzz__DropdownMenuItem_impl.hpp"
#include "UnityEngine/UIElements/zzzz__DropdownMenuSeparator_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::DropdownMenuSeparator._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::DropdownMenuSeparator::*)(::StringW)>(
    &::UnityEngine::UIElements::DropdownMenuSeparator::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2e08544;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DropdownMenuSeparator*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& UnityEngine::UIElements::DropdownMenuSeparator::__get__subMenuPath_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____subMenuPath_k__BackingField;
}
constexpr ::StringW const& UnityEngine::UIElements::DropdownMenuSeparator::__get__subMenuPath_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____subMenuPath_k__BackingField;
}
constexpr void UnityEngine::UIElements::DropdownMenuSeparator::__set__subMenuPath_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____subMenuPath_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::UnityEngine::UIElements::DropdownMenuSeparator* UnityEngine::UIElements::DropdownMenuSeparator::New_ctor(::StringW subMenuPath) {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::UIElements::DropdownMenuSeparator*>(subMenuPath));
}
inline void UnityEngine::UIElements::DropdownMenuSeparator::_ctor(::StringW subMenuPath) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DropdownMenuSeparator*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, subMenuPath);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::DropdownMenuSeparator::DropdownMenuSeparator() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
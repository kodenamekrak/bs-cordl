#pragma once
#include "HMUI/zzzz__TableCell_impl.hpp"
#include "GlobalNamespace/zzzz__TableCellWithSeparator_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "HMUI/zzzz__ITableCellOwner_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::TableCellWithSeparator.TableViewSetup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TableCellWithSeparator::*)(::HMUI::ITableCellOwner*, int32_t)>(
    &::GlobalNamespace::TableCellWithSeparator::TableViewSetup)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x2116274;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TableCellWithSeparator*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TableCellWithSeparator*>::get(), 16));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TableCellWithSeparator._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TableCellWithSeparator::*)()>(&::GlobalNamespace::TableCellWithSeparator::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2116358;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TableCellWithSeparator*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::GameObject*& GlobalNamespace::TableCellWithSeparator::__get__separator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____separator;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> const& GlobalNamespace::TableCellWithSeparator::__get__separator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____separator;
}
constexpr void GlobalNamespace::TableCellWithSeparator::__set__separator(::UnityEngine::GameObject* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____separator)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::TableCellWithSeparator::TableViewSetup(::HMUI::ITableCellOwner* tableCellOwner, int32_t idx) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TableCellWithSeparator*>::get(), "TableViewSetup", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::ITableCellOwner*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, tableCellOwner, idx);
}
inline ::GlobalNamespace::TableCellWithSeparator* GlobalNamespace::TableCellWithSeparator::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::TableCellWithSeparator*>());
}
inline void GlobalNamespace::TableCellWithSeparator::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TableCellWithSeparator*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TableCellWithSeparator::TableCellWithSeparator() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
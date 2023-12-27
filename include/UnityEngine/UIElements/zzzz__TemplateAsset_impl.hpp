#pragma once
#include "UnityEngine/UIElements/zzzz__VisualElementAsset_impl.hpp"
#include "UnityEngine/UIElements/zzzz__TemplateAsset_def.hpp"
#include "UnityEngine/UIElements/zzzz__TemplateAsset_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualTreeAsset_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
// Ctor Parameters [CppParam { name: "m_ElementName", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "m_AttributeName", ty: "::StringW", modifiers: "", def_value:
// Some("nullptr") }, CppParam { name: "m_Value", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }]
constexpr ::UnityEngine::UIElements::__TemplateAsset__AttributeOverride::__TemplateAsset__AttributeOverride(::StringW m_ElementName, ::StringW m_AttributeName, ::StringW m_Value) noexcept {
  this->m_ElementName = m_ElementName;
  this->m_AttributeName = m_AttributeName;
  this->m_Value = m_Value;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::__TemplateAsset__AttributeOverride::__TemplateAsset__AttributeOverride() {}
//  Writing Method size for method: ::UnityEngine::UIElements::TemplateAsset.get_attributeOverrides
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::UIElements::__TemplateAsset__AttributeOverride>* (
    ::UnityEngine::UIElements::TemplateAsset::*)()>(&::UnityEngine::UIElements::TemplateAsset::get_attributeOverrides)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2e0ff1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TemplateAsset*>::get(),
                                                                               "get_attributeOverrides", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::TemplateAsset.get_slotUsages
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::UIElements::__VisualTreeAsset__SlotUsageEntry>* (
    ::UnityEngine::UIElements::TemplateAsset::*)()>(&::UnityEngine::UIElements::TemplateAsset::get_slotUsages)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e0ff9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TemplateAsset*>::get(),
                                                                               "get_slotUsages", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::StringW& UnityEngine::UIElements::TemplateAsset::__get_m_TemplateAlias() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_TemplateAlias;
}
constexpr ::StringW const& UnityEngine::UIElements::TemplateAsset::__get_m_TemplateAlias() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_TemplateAlias;
}
constexpr void UnityEngine::UIElements::TemplateAsset::__set_m_TemplateAlias(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_TemplateAlias)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::__TemplateAsset__AttributeOverride>*& UnityEngine::UIElements::TemplateAsset::__get_m_AttributeOverrides() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_AttributeOverrides;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::UIElements::__TemplateAsset__AttributeOverride>*> const&
UnityEngine::UIElements::TemplateAsset::__get_m_AttributeOverrides() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_AttributeOverrides;
}
constexpr void UnityEngine::UIElements::TemplateAsset::__set_m_AttributeOverrides(::System::Collections::Generic::List_1<::UnityEngine::UIElements::__TemplateAsset__AttributeOverride>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_AttributeOverrides)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::__VisualTreeAsset__SlotUsageEntry>*& UnityEngine::UIElements::TemplateAsset::__get_m_SlotUsages() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_SlotUsages;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::UIElements::__VisualTreeAsset__SlotUsageEntry>*> const&
UnityEngine::UIElements::TemplateAsset::__get_m_SlotUsages() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_SlotUsages;
}
constexpr void UnityEngine::UIElements::TemplateAsset::__set_m_SlotUsages(::System::Collections::Generic::List_1<::UnityEngine::UIElements::__VisualTreeAsset__SlotUsageEntry>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_SlotUsages)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Collections::Generic::List_1<::UnityEngine::UIElements::__TemplateAsset__AttributeOverride>* UnityEngine::UIElements::TemplateAsset::get_attributeOverrides() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TemplateAsset*>::get(),
                                                                             "get_attributeOverrides", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::UIElements::__TemplateAsset__AttributeOverride>*, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::UnityEngine::UIElements::__VisualTreeAsset__SlotUsageEntry>* UnityEngine::UIElements::TemplateAsset::get_slotUsages() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::TemplateAsset*>::get(), "get_slotUsages",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::UIElements::__VisualTreeAsset__SlotUsageEntry>*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::TemplateAsset::TemplateAsset() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
#pragma once
#include "UnityEngine/UIElements/zzzz__BaseField_1_impl.hpp"
#include "UnityEngine/UIElements/zzzz__BaseFieldTraits_2_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
#include "UnityEngine/UIElements/zzzz__IUxmlAttributes_def.hpp"
#include "UnityEngine/UIElements/zzzz__CreationContext_def.hpp"
template <typename TValueType, typename TValueUxmlAttributeType> constexpr TValueUxmlAttributeType& UnityEngine::UIElements::BaseFieldTraits_2<TValueType, TValueUxmlAttributeType>::__get_m_Value() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_Value;
}
template <typename TValueType, typename TValueUxmlAttributeType>
constexpr TValueUxmlAttributeType const& UnityEngine::UIElements::BaseFieldTraits_2<TValueType, TValueUxmlAttributeType>::__get_m_Value() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_Value;
}
template <typename TValueType, typename TValueUxmlAttributeType>
constexpr void UnityEngine::UIElements::BaseFieldTraits_2<TValueType, TValueUxmlAttributeType>::__set_m_Value(TValueUxmlAttributeType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Value)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename TValueType, typename TValueUxmlAttributeType>
inline void UnityEngine::UIElements::BaseFieldTraits_2<TValueType, TValueUxmlAttributeType>::Init(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::IUxmlAttributes* bag,
                                                                                                  ::UnityEngine::UIElements::CreationContext cc) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseFieldTraits_2<TValueType, TValueUxmlAttributeType>*>::get(), "Init", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::VisualElement*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::IUxmlAttributes*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::CreationContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ve, bag, cc);
}
template <typename TValueType, typename TValueUxmlAttributeType>
inline ::UnityEngine::UIElements::BaseFieldTraits_2<TValueType, TValueUxmlAttributeType>* UnityEngine::UIElements::BaseFieldTraits_2<TValueType, TValueUxmlAttributeType>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::UIElements::BaseFieldTraits_2<TValueType, TValueUxmlAttributeType>*>());
}
template <typename TValueType, typename TValueUxmlAttributeType> inline void UnityEngine::UIElements::BaseFieldTraits_2<TValueType, TValueUxmlAttributeType>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::BaseFieldTraits_2<TValueType, TValueUxmlAttributeType>*>::get(),
                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename TValueType, typename TValueUxmlAttributeType> constexpr ::UnityEngine::UIElements::BaseFieldTraits_2<TValueType, TValueUxmlAttributeType>::BaseFieldTraits_2() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
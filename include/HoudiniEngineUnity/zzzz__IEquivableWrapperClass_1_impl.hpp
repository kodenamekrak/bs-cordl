#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/IEquivableWrapperClass_1.hpp"
#include "HoudiniEngineUnity/zzzz__IEquivable_1_impl.hpp"
#include "HoudiniEngineUnity/zzzz__IEquivableWrapperClass_1_def.hpp"
template <typename T> inline bool HoudiniEngineUnity::IEquivableWrapperClass_1<T>::IsNull() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::IEquivableWrapperClass_1<T>*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
/// @brief Convert operator to "::HoudiniEngineUnity::IEquivable_1<T>"
template <typename T> constexpr HoudiniEngineUnity::IEquivableWrapperClass_1<T>::operator ::HoudiniEngineUnity::IEquivable_1<T>*() noexcept {
  return static_cast<::HoudiniEngineUnity::IEquivable_1<T>*>(static_cast<void*>(this));
}
/// @brief Convert to "::HoudiniEngineUnity::IEquivable_1<T>"
template <typename T> constexpr ::HoudiniEngineUnity::IEquivable_1<T>* HoudiniEngineUnity::IEquivableWrapperClass_1<T>::i___HoudiniEngineUnity__IEquivable_1_T_() noexcept {
  return static_cast<::HoudiniEngineUnity::IEquivable_1<T>*>(static_cast<void*>(this));
}

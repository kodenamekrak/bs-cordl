#pragma once
#include "GlobalNamespace/zzzz__FloatFxGroupEffectTarget_impl.hpp"
#include "GlobalNamespace/zzzz__FloatFxGroupEffectCollectionTarget_def.hpp"
#include "GlobalNamespace/zzzz__FloatFxGroupEffectTarget_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::FloatFxGroupEffectCollectionTarget.SetValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FloatFxGroupEffectCollectionTarget::*)(float_t)>(
    &::GlobalNamespace::FloatFxGroupEffectCollectionTarget::SetValue)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x23a5820;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FloatFxGroupEffectCollectionTarget*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FloatFxGroupEffectCollectionTarget*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FloatFxGroupEffectCollectionTarget.TriggerValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FloatFxGroupEffectCollectionTarget::*)(float_t)>(
    &::GlobalNamespace::FloatFxGroupEffectCollectionTarget::TriggerValue)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x23a5894;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FloatFxGroupEffectCollectionTarget*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FloatFxGroupEffectCollectionTarget*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FloatFxGroupEffectCollectionTarget._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FloatFxGroupEffectCollectionTarget::*)()>(
    &::GlobalNamespace::FloatFxGroupEffectCollectionTarget::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23a5908;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FloatFxGroupEffectCollectionTarget*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::GlobalNamespace::FloatFxGroupEffectTarget*, ::Array<::GlobalNamespace::FloatFxGroupEffectTarget*>*>&
GlobalNamespace::FloatFxGroupEffectCollectionTarget::__get__floatFxGroupEffectTargets() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____floatFxGroupEffectTargets;
}
constexpr ::ArrayW<::GlobalNamespace::FloatFxGroupEffectTarget*, ::Array<::GlobalNamespace::FloatFxGroupEffectTarget*>*> const&
GlobalNamespace::FloatFxGroupEffectCollectionTarget::__get__floatFxGroupEffectTargets() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____floatFxGroupEffectTargets;
}
constexpr void GlobalNamespace::FloatFxGroupEffectCollectionTarget::__set__floatFxGroupEffectTargets(
    ::ArrayW<::GlobalNamespace::FloatFxGroupEffectTarget*, ::Array<::GlobalNamespace::FloatFxGroupEffectTarget*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____floatFxGroupEffectTargets)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::FloatFxGroupEffectCollectionTarget::SetValue(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FloatFxGroupEffectCollectionTarget*>::get(), "SetValue",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::FloatFxGroupEffectCollectionTarget::TriggerValue(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FloatFxGroupEffectCollectionTarget*>::get(), "TriggerValue",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::GlobalNamespace::FloatFxGroupEffectCollectionTarget* GlobalNamespace::FloatFxGroupEffectCollectionTarget::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::FloatFxGroupEffectCollectionTarget*>());
}
inline void GlobalNamespace::FloatFxGroupEffectCollectionTarget::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FloatFxGroupEffectCollectionTarget*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FloatFxGroupEffectCollectionTarget::FloatFxGroupEffectCollectionTarget() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
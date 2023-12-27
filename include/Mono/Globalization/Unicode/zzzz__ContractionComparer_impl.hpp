#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Mono/Globalization/Unicode/zzzz__ContractionComparer_def.hpp"
#include "System/Collections/Generic/zzzz__IComparer_1_def.hpp"
#include "Mono/Globalization/Unicode/zzzz__Contraction_def.hpp"
//  Writing Method size for method: ::Mono::Globalization::Unicode::ContractionComparer.Compare
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Mono::Globalization::Unicode::ContractionComparer::*)(
    ::Mono::Globalization::Unicode::Contraction*, ::Mono::Globalization::Unicode::Contraction*)>(&::Mono::Globalization::Unicode::ContractionComparer::Compare)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x24155c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Globalization::Unicode::ContractionComparer*>::get(), "Compare", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Globalization::Unicode::Contraction*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Globalization::Unicode::Contraction*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Globalization::Unicode::ContractionComparer._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Globalization::Unicode::ContractionComparer::*)()>(
    &::Mono::Globalization::Unicode::ContractionComparer::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2415658;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Globalization::Unicode::ContractionComparer*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Collections::Generic::IComparer_1<::Mono::Globalization::Unicode::Contraction*>"
constexpr Mono::Globalization::Unicode::ContractionComparer::operator ::System::Collections::Generic::IComparer_1<::Mono::Globalization::Unicode::Contraction*>*() noexcept {
  return static_cast<::System::Collections::Generic::IComparer_1<::Mono::Globalization::Unicode::Contraction*>*>(static_cast<void*>(this));
}
inline void Mono::Globalization::Unicode::ContractionComparer::setStaticF_Instance(::Mono::Globalization::Unicode::ContractionComparer* value) {
  ::cordl_internals::setStaticField<::Mono::Globalization::Unicode::ContractionComparer*, "Instance",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Globalization::Unicode::ContractionComparer*>::get>(
      std::forward<::Mono::Globalization::Unicode::ContractionComparer*>(value));
}
inline ::Mono::Globalization::Unicode::ContractionComparer* Mono::Globalization::Unicode::ContractionComparer::getStaticF_Instance() {
  return ::cordl_internals::getStaticField<::Mono::Globalization::Unicode::ContractionComparer*, "Instance",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Globalization::Unicode::ContractionComparer*>::get>();
}
inline int32_t Mono::Globalization::Unicode::ContractionComparer::Compare(::Mono::Globalization::Unicode::Contraction* c1, ::Mono::Globalization::Unicode::Contraction* c2) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Globalization::Unicode::ContractionComparer*>::get(), "Compare", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Globalization::Unicode::Contraction*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Globalization::Unicode::Contraction*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, c1, c2);
}
inline ::Mono::Globalization::Unicode::ContractionComparer* Mono::Globalization::Unicode::ContractionComparer::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::Mono::Globalization::Unicode::ContractionComparer*>());
}
inline void Mono::Globalization::Unicode::ContractionComparer::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Globalization::Unicode::ContractionComparer*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Mono::Globalization::Unicode::ContractionComparer::ContractionComparer() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
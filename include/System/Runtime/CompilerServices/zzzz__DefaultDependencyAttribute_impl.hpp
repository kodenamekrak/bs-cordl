#pragma once
#include "System/Runtime/CompilerServices/zzzz__LoadHint_impl.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__DefaultDependencyAttribute_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__LoadHint_def.hpp"
//  Writing Method size for method: ::System::Runtime::CompilerServices::DefaultDependencyAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::CompilerServices::DefaultDependencyAttribute::*)(
    ::System::Runtime::CompilerServices::LoadHint)>(&::System::Runtime::CompilerServices::DefaultDependencyAttribute::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x24debb4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::DefaultDependencyAttribute*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::LoadHint>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Runtime::CompilerServices::LoadHint& System::Runtime::CompilerServices::DefaultDependencyAttribute::__get_loadHint() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___loadHint;
}
constexpr ::System::Runtime::CompilerServices::LoadHint const& System::Runtime::CompilerServices::DefaultDependencyAttribute::__get_loadHint() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___loadHint;
}
constexpr void System::Runtime::CompilerServices::DefaultDependencyAttribute::__set_loadHint(::System::Runtime::CompilerServices::LoadHint value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___loadHint = value;
}
inline ::System::Runtime::CompilerServices::DefaultDependencyAttribute*
System::Runtime::CompilerServices::DefaultDependencyAttribute::New_ctor(::System::Runtime::CompilerServices::LoadHint loadHintArgument) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Runtime::CompilerServices::DefaultDependencyAttribute*>(loadHintArgument));
}
inline void System::Runtime::CompilerServices::DefaultDependencyAttribute::_ctor(::System::Runtime::CompilerServices::LoadHint loadHintArgument) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::DefaultDependencyAttribute*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::LoadHint>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, loadHintArgument);
}
// Ctor Parameters []
constexpr ::System::Runtime::CompilerServices::DefaultDependencyAttribute::DefaultDependencyAttribute() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
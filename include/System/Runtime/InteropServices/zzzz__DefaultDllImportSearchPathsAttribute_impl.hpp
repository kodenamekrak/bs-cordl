#pragma once
#include "System/Runtime/InteropServices/zzzz__DllImportSearchPath_impl.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "System/Runtime/InteropServices/zzzz__DefaultDllImportSearchPathsAttribute_def.hpp"
#include "System/Runtime/InteropServices/zzzz__DllImportSearchPath_def.hpp"
//  Writing Method size for method: ::System::Runtime::InteropServices::DefaultDllImportSearchPathsAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::InteropServices::DefaultDllImportSearchPathsAttribute::*)(
    ::System::Runtime::InteropServices::DllImportSearchPath)>(&::System::Runtime::InteropServices::DefaultDllImportSearchPathsAttribute::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x24d72e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::InteropServices::DefaultDllImportSearchPathsAttribute*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::InteropServices::DllImportSearchPath>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Runtime::InteropServices::DllImportSearchPath& System::Runtime::InteropServices::DefaultDllImportSearchPathsAttribute::__get__paths() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____paths;
}
constexpr ::System::Runtime::InteropServices::DllImportSearchPath const& System::Runtime::InteropServices::DefaultDllImportSearchPathsAttribute::__get__paths() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____paths;
}
constexpr void System::Runtime::InteropServices::DefaultDllImportSearchPathsAttribute::__set__paths(::System::Runtime::InteropServices::DllImportSearchPath value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____paths = value;
}
inline ::System::Runtime::InteropServices::DefaultDllImportSearchPathsAttribute*
System::Runtime::InteropServices::DefaultDllImportSearchPathsAttribute::New_ctor(::System::Runtime::InteropServices::DllImportSearchPath paths) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Runtime::InteropServices::DefaultDllImportSearchPathsAttribute*>(paths));
}
inline void System::Runtime::InteropServices::DefaultDllImportSearchPathsAttribute::_ctor(::System::Runtime::InteropServices::DllImportSearchPath paths) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::InteropServices::DefaultDllImportSearchPathsAttribute*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::InteropServices::DllImportSearchPath>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, paths);
}
// Ctor Parameters []
constexpr ::System::Runtime::InteropServices::DefaultDllImportSearchPathsAttribute::DefaultDllImportSearchPathsAttribute() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__TypeNames_def.hpp"
#include "System/zzzz__TypeNames_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__TypeName_def.hpp"
//  Writing Method size for method: ::System::__TypeNames__ATypeName.get_DisplayName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::__TypeNames__ATypeName::*)()>(&::System::__TypeNames__ATypeName::get_DisplayName)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::__TypeNames__ATypeName*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::__TypeNames__ATypeName*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::__TypeNames__ATypeName.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::__TypeNames__ATypeName::*)(::System::TypeName*)>(&::System::__TypeNames__ATypeName::Equals)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x2606728;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::__TypeNames__ATypeName*>::get(), "Equals", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TypeName*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::__TypeNames__ATypeName.GetHashCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::__TypeNames__ATypeName::*)()>(&::System::__TypeNames__ATypeName::GetHashCode)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x26067f8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::__TypeNames__ATypeName*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::__TypeNames__ATypeName*>::get(), 2));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::__TypeNames__ATypeName.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::__TypeNames__ATypeName::*)(::System::Object*)>(&::System::__TypeNames__ATypeName::Equals)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2606820;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::__TypeNames__ATypeName*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::__TypeNames__ATypeName*>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::__TypeNames__ATypeName._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::__TypeNames__ATypeName::*)()>(&::System::__TypeNames__ATypeName::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2606880;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::__TypeNames__ATypeName*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::TypeName"
constexpr System::__TypeNames__ATypeName::operator ::System::TypeName*() noexcept {
  return static_cast<::System::TypeName*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IEquatable_1<::System::TypeName*>"
constexpr System::__TypeNames__ATypeName::operator ::System::IEquatable_1<::System::TypeName*>*() noexcept {
  return static_cast<::System::IEquatable_1<::System::TypeName*>*>(static_cast<void*>(this));
}
inline ::StringW System::__TypeNames__ATypeName::get_DisplayName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::__TypeNames__ATypeName*>::get(), "get_DisplayName",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline bool System::__TypeNames__ATypeName::Equals(::System::TypeName* other) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::__TypeNames__ATypeName*>::get(), "Equals", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TypeName*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, other);
}
inline int32_t System::__TypeNames__ATypeName::GetHashCode() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::__TypeNames__ATypeName*>::get(), "GetHashCode",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline bool System::__TypeNames__ATypeName::Equals(::System::Object* other) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::__TypeNames__ATypeName*>::get(), "Equals", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, other);
}
inline ::System::__TypeNames__ATypeName* System::__TypeNames__ATypeName::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::System::__TypeNames__ATypeName*>());
}
inline void System::__TypeNames__ATypeName::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::__TypeNames__ATypeName*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::__TypeNames__ATypeName::__TypeNames__ATypeName() {}
// Ctor Parameters []
constexpr ::System::TypeNames::TypeNames() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
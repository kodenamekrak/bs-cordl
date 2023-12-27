#pragma once
#include "UnityEngine/zzzz__AsyncOperation_impl.hpp"
#include "UnityEngine/zzzz__ResourceRequest_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
//  Writing Method size for method: ::UnityEngine::ResourceRequest.GetResult
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Object* (::UnityEngine::ResourceRequest::*)()>(&::UnityEngine::ResourceRequest::GetResult)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2cddfec;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceRequest*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceRequest*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceRequest.get_asset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Object* (::UnityEngine::ResourceRequest::*)()>(&::UnityEngine::ResourceRequest::get_asset)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2cde070;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceRequest*>::get(), "get_asset",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceRequest._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ResourceRequest::*)()>(&::UnityEngine::ResourceRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2cde07c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceRequest*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::StringW& UnityEngine::ResourceRequest::__get_m_Path() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_Path;
}
constexpr ::StringW const& UnityEngine::ResourceRequest::__get_m_Path() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_Path;
}
constexpr void UnityEngine::ResourceRequest::__set_m_Path(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Path)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Type*& UnityEngine::ResourceRequest::__get_m_Type() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_Type;
}
constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& UnityEngine::ResourceRequest::__get_m_Type() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_Type;
}
constexpr void UnityEngine::ResourceRequest::__set_m_Type(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Type)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::UnityEngine::Object* UnityEngine::ResourceRequest::GetResult() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceRequest*>::get(), "GetResult",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Object*, false>(this, ___internal_method);
}
inline ::UnityEngine::Object* UnityEngine::ResourceRequest::get_asset() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceRequest*>::get(), "get_asset",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Object*, false>(this, ___internal_method);
}
inline ::UnityEngine::ResourceRequest* UnityEngine::ResourceRequest::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::ResourceRequest*>());
}
inline void UnityEngine::ResourceRequest::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ResourceRequest*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::ResourceRequest::ResourceRequest() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
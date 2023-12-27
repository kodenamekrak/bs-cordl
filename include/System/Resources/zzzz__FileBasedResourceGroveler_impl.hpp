#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Resources/zzzz__FileBasedResourceGroveler_def.hpp"
#include "System/Resources/zzzz__IResourceGroveler_def.hpp"
#include "System/Resources/zzzz__ResourceManager_def.hpp"
//  Writing Method size for method: ::System::Resources::FileBasedResourceGroveler._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::System::Resources::FileBasedResourceGroveler::*)(::System::Resources::__ResourceManager__ResourceManagerMediator*)>(&::System::Resources::FileBasedResourceGroveler::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x24e0f64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::FileBasedResourceGroveler*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Resources::__ResourceManager__ResourceManagerMediator*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Resources::IResourceGroveler"
constexpr System::Resources::FileBasedResourceGroveler::operator ::System::Resources::IResourceGroveler*() noexcept {
  return static_cast<::System::Resources::IResourceGroveler*>(static_cast<void*>(this));
}
constexpr ::System::Resources::__ResourceManager__ResourceManagerMediator*& System::Resources::FileBasedResourceGroveler::__get__mediator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____mediator;
}
constexpr ::cordl_internals::to_const_pointer<::System::Resources::__ResourceManager__ResourceManagerMediator*> const& System::Resources::FileBasedResourceGroveler::__get__mediator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____mediator;
}
constexpr void System::Resources::FileBasedResourceGroveler::__set__mediator(::System::Resources::__ResourceManager__ResourceManagerMediator* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____mediator)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Resources::FileBasedResourceGroveler* System::Resources::FileBasedResourceGroveler::New_ctor(::System::Resources::__ResourceManager__ResourceManagerMediator* mediator) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Resources::FileBasedResourceGroveler*>(mediator));
}
inline void System::Resources::FileBasedResourceGroveler::_ctor(::System::Resources::__ResourceManager__ResourceManagerMediator* mediator) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Resources::FileBasedResourceGroveler*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Resources::__ResourceManager__ResourceManagerMediator*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, mediator);
}
// Ctor Parameters []
constexpr ::System::Resources::FileBasedResourceGroveler::FileBasedResourceGroveler() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Utilities/Collections/zzzz__EnumerableProxy_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Collections::EnumerableProxy._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Utilities::Collections::EnumerableProxy::*)(::System::Collections::IEnumerable*)>(
    &::Org::BouncyCastle::Utilities::Collections::EnumerableProxy::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x1157b7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Utilities::Collections::EnumerableProxy*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IEnumerable*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Utilities::Collections::EnumerableProxy.GetEnumerator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (::Org::BouncyCastle::Utilities::Collections::EnumerableProxy::*)()>(
    &::Org::BouncyCastle::Utilities::Collections::EnumerableProxy::GetEnumerator)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x1157bf4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Utilities::Collections::EnumerableProxy*>::get(), "GetEnumerator",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr Org::BouncyCastle::Utilities::Collections::EnumerableProxy::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
constexpr ::System::Collections::IEnumerable*& Org::BouncyCastle::Utilities::Collections::EnumerableProxy::__get_inner() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___inner;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::IEnumerable*> const& Org::BouncyCastle::Utilities::Collections::EnumerableProxy::__get_inner() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___inner;
}
constexpr void Org::BouncyCastle::Utilities::Collections::EnumerableProxy::__set_inner(::System::Collections::IEnumerable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___inner)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Org::BouncyCastle::Utilities::Collections::EnumerableProxy* Org::BouncyCastle::Utilities::Collections::EnumerableProxy::New_ctor(::System::Collections::IEnumerable* inner) {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Utilities::Collections::EnumerableProxy*>(inner));
}
inline void Org::BouncyCastle::Utilities::Collections::EnumerableProxy::_ctor(::System::Collections::IEnumerable* inner) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Utilities::Collections::EnumerableProxy*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::IEnumerable*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, inner);
}
inline ::System::Collections::IEnumerator* Org::BouncyCastle::Utilities::Collections::EnumerableProxy::GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Utilities::Collections::EnumerableProxy*>::get(), "GetEnumerator",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Utilities::Collections::EnumerableProxy::EnumerableProxy() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Org/BouncyCastle/Math/EC/Multiplier/zzzz__WTauNafPreCompInfo_def.hpp"
#include "Org/BouncyCastle/Math/EC/Multiplier/zzzz__PreCompInfo_def.hpp"
#include "Org/BouncyCastle/Math/EC/zzzz__AbstractF2mPoint_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Multiplier::WTauNafPreCompInfo.get_PreComp
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<
    ::ArrayW<::Org::BouncyCastle::Math::EC::AbstractF2mPoint*, ::Array<::Org::BouncyCastle::Math::EC::AbstractF2mPoint*>*> (::Org::BouncyCastle::Math::EC::Multiplier::WTauNafPreCompInfo::*)()>(
    &::Org::BouncyCastle::Math::EC::Multiplier::WTauNafPreCompInfo::get_PreComp)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x103ade8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Multiplier::WTauNafPreCompInfo*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Multiplier::WTauNafPreCompInfo*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Multiplier::WTauNafPreCompInfo.set_PreComp
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Math::EC::Multiplier::WTauNafPreCompInfo::*)(
    ::ArrayW<::Org::BouncyCastle::Math::EC::AbstractF2mPoint*, ::Array<::Org::BouncyCastle::Math::EC::AbstractF2mPoint*>*>)>(
    &::Org::BouncyCastle::Math::EC::Multiplier::WTauNafPreCompInfo::set_PreComp)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x103adf0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Multiplier::WTauNafPreCompInfo*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Multiplier::WTauNafPreCompInfo*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Math::EC::Multiplier::WTauNafPreCompInfo._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Math::EC::Multiplier::WTauNafPreCompInfo::*)()>(
    &::Org::BouncyCastle::Math::EC::Multiplier::WTauNafPreCompInfo::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x103ade0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Multiplier::WTauNafPreCompInfo*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo"
constexpr Org::BouncyCastle::Math::EC::Multiplier::WTauNafPreCompInfo::operator ::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo*() noexcept {
  return static_cast<::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo*>(static_cast<void*>(this));
}
constexpr ::ArrayW<::Org::BouncyCastle::Math::EC::AbstractF2mPoint*, ::Array<::Org::BouncyCastle::Math::EC::AbstractF2mPoint*>*>&
Org::BouncyCastle::Math::EC::Multiplier::WTauNafPreCompInfo::__get_m_preComp() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_preComp;
}
constexpr ::ArrayW<::Org::BouncyCastle::Math::EC::AbstractF2mPoint*, ::Array<::Org::BouncyCastle::Math::EC::AbstractF2mPoint*>*> const&
Org::BouncyCastle::Math::EC::Multiplier::WTauNafPreCompInfo::__get_m_preComp() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_preComp;
}
constexpr void Org::BouncyCastle::Math::EC::Multiplier::WTauNafPreCompInfo::__set_m_preComp(
    ::ArrayW<::Org::BouncyCastle::Math::EC::AbstractF2mPoint*, ::Array<::Org::BouncyCastle::Math::EC::AbstractF2mPoint*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_preComp)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::ArrayW<::Org::BouncyCastle::Math::EC::AbstractF2mPoint*, ::Array<::Org::BouncyCastle::Math::EC::AbstractF2mPoint*>*>
Org::BouncyCastle::Math::EC::Multiplier::WTauNafPreCompInfo::get_PreComp() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Multiplier::WTauNafPreCompInfo*>::get(), "get_PreComp",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::Org::BouncyCastle::Math::EC::AbstractF2mPoint*, ::Array<::Org::BouncyCastle::Math::EC::AbstractF2mPoint*>*>, false>(this, ___internal_method);
}
inline void
Org::BouncyCastle::Math::EC::Multiplier::WTauNafPreCompInfo::set_PreComp(::ArrayW<::Org::BouncyCastle::Math::EC::AbstractF2mPoint*, ::Array<::Org::BouncyCastle::Math::EC::AbstractF2mPoint*>*> value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Multiplier::WTauNafPreCompInfo*>::get(), "set_PreComp", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::Org::BouncyCastle::Math::EC::AbstractF2mPoint*, ::Array<::Org::BouncyCastle::Math::EC::AbstractF2mPoint*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Org::BouncyCastle::Math::EC::Multiplier::WTauNafPreCompInfo* Org::BouncyCastle::Math::EC::Multiplier::WTauNafPreCompInfo::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::Org::BouncyCastle::Math::EC::Multiplier::WTauNafPreCompInfo*>());
}
inline void Org::BouncyCastle::Math::EC::Multiplier::WTauNafPreCompInfo::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Math::EC::Multiplier::WTauNafPreCompInfo*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Org::BouncyCastle::Math::EC::Multiplier::WTauNafPreCompInfo::WTauNafPreCompInfo() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
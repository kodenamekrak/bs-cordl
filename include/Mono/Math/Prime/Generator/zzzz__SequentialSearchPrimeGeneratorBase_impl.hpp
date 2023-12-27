#pragma once
#include "Mono/Math/Prime/Generator/zzzz__PrimeGeneratorBase_impl.hpp"
#include "Mono/Math/Prime/Generator/zzzz__SequentialSearchPrimeGeneratorBase_def.hpp"
#include "Mono/Math/zzzz__BigInteger_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Mono::Math::Prime::Generator::SequentialSearchPrimeGeneratorBase.GenerateSearchBase
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Math::BigInteger* (
    ::Mono::Math::Prime::Generator::SequentialSearchPrimeGeneratorBase::*)(int32_t, ::System::Object*)>(&::Mono::Math::Prime::Generator::SequentialSearchPrimeGeneratorBase::GenerateSearchBase)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2410418;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Math::Prime::Generator::SequentialSearchPrimeGeneratorBase*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Math::Prime::Generator::SequentialSearchPrimeGeneratorBase*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Math::Prime::Generator::SequentialSearchPrimeGeneratorBase.GenerateNewPrime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Math::BigInteger* (::Mono::Math::Prime::Generator::SequentialSearchPrimeGeneratorBase::*)(int32_t)>(
    &::Mono::Math::Prime::Generator::SequentialSearchPrimeGeneratorBase::GenerateNewPrime)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x241048c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Math::Prime::Generator::SequentialSearchPrimeGeneratorBase*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Math::Prime::Generator::SequentialSearchPrimeGeneratorBase*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Math::Prime::Generator::SequentialSearchPrimeGeneratorBase.GenerateNewPrime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Math::BigInteger* (
    ::Mono::Math::Prime::Generator::SequentialSearchPrimeGeneratorBase::*)(int32_t, ::System::Object*)>(&::Mono::Math::Prime::Generator::SequentialSearchPrimeGeneratorBase::GenerateNewPrime)> {
  constexpr static std::size_t size = 0x2e4;
  constexpr static std::size_t addrs = 0x241049c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Math::Prime::Generator::SequentialSearchPrimeGeneratorBase*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Math::Prime::Generator::SequentialSearchPrimeGeneratorBase*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Math::Prime::Generator::SequentialSearchPrimeGeneratorBase.IsPrimeAcceptable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Mono::Math::Prime::Generator::SequentialSearchPrimeGeneratorBase::*)(
    ::Mono::Math::BigInteger*, ::System::Object*)>(&::Mono::Math::Prime::Generator::SequentialSearchPrimeGeneratorBase::IsPrimeAcceptable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2410780;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Math::Prime::Generator::SequentialSearchPrimeGeneratorBase*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Math::Prime::Generator::SequentialSearchPrimeGeneratorBase*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Math::Prime::Generator::SequentialSearchPrimeGeneratorBase._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Math::Prime::Generator::SequentialSearchPrimeGeneratorBase::*)()>(
    &::Mono::Math::Prime::Generator::SequentialSearchPrimeGeneratorBase::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x240f100;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Math::Prime::Generator::SequentialSearchPrimeGeneratorBase*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline ::Mono::Math::BigInteger* Mono::Math::Prime::Generator::SequentialSearchPrimeGeneratorBase::GenerateSearchBase(int32_t bits, ::System::Object* context) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Math::Prime::Generator::SequentialSearchPrimeGeneratorBase*>::get(), "GenerateSearchBase", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Mono::Math::BigInteger*, false>(this, ___internal_method, bits, context);
}
inline ::Mono::Math::BigInteger* Mono::Math::Prime::Generator::SequentialSearchPrimeGeneratorBase::GenerateNewPrime(int32_t bits) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Math::Prime::Generator::SequentialSearchPrimeGeneratorBase*>::get(), "GenerateNewPrime",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Mono::Math::BigInteger*, false>(this, ___internal_method, bits);
}
inline ::Mono::Math::BigInteger* Mono::Math::Prime::Generator::SequentialSearchPrimeGeneratorBase::GenerateNewPrime(int32_t bits, ::System::Object* context) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Math::Prime::Generator::SequentialSearchPrimeGeneratorBase*>::get(), "GenerateNewPrime", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Mono::Math::BigInteger*, false>(this, ___internal_method, bits, context);
}
inline bool Mono::Math::Prime::Generator::SequentialSearchPrimeGeneratorBase::IsPrimeAcceptable(::Mono::Math::BigInteger* bi, ::System::Object* context) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Math::Prime::Generator::SequentialSearchPrimeGeneratorBase*>::get(), "IsPrimeAcceptable", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Math::BigInteger*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, bi, context);
}
inline ::Mono::Math::Prime::Generator::SequentialSearchPrimeGeneratorBase* Mono::Math::Prime::Generator::SequentialSearchPrimeGeneratorBase::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::Mono::Math::Prime::Generator::SequentialSearchPrimeGeneratorBase*>());
}
inline void Mono::Math::Prime::Generator::SequentialSearchPrimeGeneratorBase::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Math::Prime::Generator::SequentialSearchPrimeGeneratorBase*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Mono::Math::Prime::Generator::SequentialSearchPrimeGeneratorBase::SequentialSearchPrimeGeneratorBase() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
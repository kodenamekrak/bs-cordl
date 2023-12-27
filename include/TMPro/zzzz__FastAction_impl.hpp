#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "TMPro/zzzz__FastAction_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/Collections/Generic/zzzz__LinkedList_1_def.hpp"
#include "System/Collections/Generic/zzzz__LinkedListNode_1_def.hpp"
//  Writing Method size for method: ::TMPro::FastAction.Add
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::FastAction::*)(::System::Action*)>(&::TMPro::FastAction::Add)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x2bef0e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::FastAction*>::get(), "Add", std::vector<Il2CppClass*>{},
                                                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::FastAction.Remove
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::FastAction::*)(::System::Action*)>(&::TMPro::FastAction::Remove)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x2bef1a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::FastAction*>::get(), "Remove", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::FastAction.Call
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::FastAction::*)()>(&::TMPro::FastAction::Call)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x2bef260;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::FastAction*>::get(), "Call", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::FastAction._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::FastAction::*)()>(&::TMPro::FastAction::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x2bef2f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::FastAction*>::get(), ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::LinkedList_1<::System::Action*>*& TMPro::FastAction::__get_delegates() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___delegates;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::LinkedList_1<::System::Action*>*> const& TMPro::FastAction::__get_delegates() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___delegates;
}
constexpr void TMPro::FastAction::__set_delegates(::System::Collections::Generic::LinkedList_1<::System::Action*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___delegates)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<::System::Action*, ::System::Collections::Generic::LinkedListNode_1<::System::Action*>*>*& TMPro::FastAction::__get_lookup() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___lookup;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::System::Action*, ::System::Collections::Generic::LinkedListNode_1<::System::Action*>*>*> const&
TMPro::FastAction::__get_lookup() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___lookup;
}
constexpr void TMPro::FastAction::__set_lookup(::System::Collections::Generic::Dictionary_2<::System::Action*, ::System::Collections::Generic::LinkedListNode_1<::System::Action*>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___lookup)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void TMPro::FastAction::Add(::System::Action* rhs) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::FastAction*>::get(), "Add", std::vector<Il2CppClass*>{},
                                                                             ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, rhs);
}
inline void TMPro::FastAction::Remove(::System::Action* rhs) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::FastAction*>::get(), "Remove", std::vector<Il2CppClass*>{},
                                                                             ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, rhs);
}
inline void TMPro::FastAction::Call() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::FastAction*>::get(), "Call", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::TMPro::FastAction* TMPro::FastAction::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::TMPro::FastAction*>());
}
inline void TMPro::FastAction::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::FastAction*>::get(), ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::TMPro::FastAction::FastAction() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
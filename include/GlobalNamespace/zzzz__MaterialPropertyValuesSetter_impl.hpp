#pragma once
#include "GlobalNamespace/zzzz__MaterialPropertyValuesSetter_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector4_impl.hpp"
#include "GlobalNamespace/zzzz__MaterialPropertyValuesSetter_def.hpp"
#include "GlobalNamespace/zzzz__MaterialPropertyValuesSetter_def.hpp"
#include "GlobalNamespace/zzzz__MaterialPropertyBlockController_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyValuePairBase.get_propertyId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyValuePairBase::*)()>(
    &::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyValuePairBase::get_propertyId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21158cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyValuePairBase*>::get(),
                                                 "get_propertyId", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyValuePairBase.set_propertyId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyValuePairBase::*)(int32_t)>(
    &::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyValuePairBase::set_propertyId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21158d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyValuePairBase*>::get(), "set_propertyId",
                                    std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyValuePairBase._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyValuePairBase::*)()>(
    &::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyValuePairBase::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x21158dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyValuePairBase*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyValuePairBase.RefreshPropertyId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyValuePairBase::*)()>(
    &::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyValuePairBase::RefreshPropertyId)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x21158a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyValuePairBase*>::get(),
                                                 "RefreshPropertyId", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::__MaterialPropertyValuesSetter__PropertyValuePairBase::__get__propertyName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____propertyName;
}
constexpr ::StringW const& GlobalNamespace::__MaterialPropertyValuesSetter__PropertyValuePairBase::__get__propertyName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____propertyName;
}
constexpr void GlobalNamespace::__MaterialPropertyValuesSetter__PropertyValuePairBase::__set__propertyName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____propertyName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& GlobalNamespace::__MaterialPropertyValuesSetter__PropertyValuePairBase::__get__propertyId_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____propertyId_k__BackingField;
}
constexpr int32_t const& GlobalNamespace::__MaterialPropertyValuesSetter__PropertyValuePairBase::__get__propertyId_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____propertyId_k__BackingField;
}
constexpr void GlobalNamespace::__MaterialPropertyValuesSetter__PropertyValuePairBase::__set__propertyId_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____propertyId_k__BackingField = value;
}
inline int32_t GlobalNamespace::__MaterialPropertyValuesSetter__PropertyValuePairBase::get_propertyId() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyValuePairBase*>::get(),
                                               "get_propertyId", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void GlobalNamespace::__MaterialPropertyValuesSetter__PropertyValuePairBase::set_propertyId(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyValuePairBase*>::get(), "set_propertyId",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyValuePairBase* GlobalNamespace::__MaterialPropertyValuesSetter__PropertyValuePairBase::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyValuePairBase*>());
}
inline void GlobalNamespace::__MaterialPropertyValuesSetter__PropertyValuePairBase::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyValuePairBase*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__MaterialPropertyValuesSetter__PropertyValuePairBase::RefreshPropertyId() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyValuePairBase*>::get(),
                                               "RefreshPropertyId", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyValuePairBase::__MaterialPropertyValuesSetter__PropertyValuePairBase() {}
//  Writing Method size for method: ::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameFloatValuePair._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameFloatValuePair::*)()>(
    &::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameFloatValuePair::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2115904;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameFloatValuePair*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameFloatValuePair::__get_value() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___value;
}
constexpr float_t const& GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameFloatValuePair::__get_value() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___value;
}
constexpr void GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameFloatValuePair::__set_value(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___value = value;
}
inline ::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameFloatValuePair* GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameFloatValuePair::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameFloatValuePair*>());
}
inline void GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameFloatValuePair::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameFloatValuePair*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameFloatValuePair::__MaterialPropertyValuesSetter__PropertyNameFloatValuePair() {}
//  Writing Method size for method: ::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameIntValuePair._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameIntValuePair::*)()>(
    &::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameIntValuePair::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x211592c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameIntValuePair*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameIntValuePair::__get_value() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___value;
}
constexpr int32_t const& GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameIntValuePair::__get_value() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___value;
}
constexpr void GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameIntValuePair::__set_value(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___value = value;
}
inline ::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameIntValuePair* GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameIntValuePair::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameIntValuePair*>());
}
inline void GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameIntValuePair::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameIntValuePair*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameIntValuePair::__MaterialPropertyValuesSetter__PropertyNameIntValuePair() {}
//  Writing Method size for method: ::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameVectorValuePair._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameVectorValuePair::*)()>(
    &::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameVectorValuePair::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2115954;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameVectorValuePair*>::get(),
                                                 ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Vector4& GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameVectorValuePair::__get_vector() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___vector;
}
constexpr ::UnityEngine::Vector4 const& GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameVectorValuePair::__get_vector() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___vector;
}
constexpr void GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameVectorValuePair::__set_vector(::UnityEngine::Vector4 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___vector = value;
}
inline ::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameVectorValuePair* GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameVectorValuePair::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameVectorValuePair*>());
}
inline void GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameVectorValuePair::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameVectorValuePair*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameVectorValuePair::__MaterialPropertyValuesSetter__PropertyNameVectorValuePair() {}
//  Writing Method size for method: ::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameColorValuePair._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameColorValuePair::*)()>(
    &::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameColorValuePair::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x211597c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameColorValuePair*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Color& GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameColorValuePair::__get_color() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___color;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameColorValuePair::__get_color() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___color;
}
constexpr void GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameColorValuePair::__set_color(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___color = value;
}
inline ::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameColorValuePair* GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameColorValuePair::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameColorValuePair*>());
}
inline void GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameColorValuePair::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameColorValuePair*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameColorValuePair::__MaterialPropertyValuesSetter__PropertyNameColorValuePair() {}
//  Writing Method size for method: ::GlobalNamespace::MaterialPropertyValuesSetter.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MaterialPropertyValuesSetter::*)()>(
    &::GlobalNamespace::MaterialPropertyValuesSetter::Start)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x21154f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MaterialPropertyValuesSetter*>::get(), "Start",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MaterialPropertyValuesSetter.OnValidate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MaterialPropertyValuesSetter::*)()>(
    &::GlobalNamespace::MaterialPropertyValuesSetter::OnValidate)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x211580c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MaterialPropertyValuesSetter*>::get(),
                                                                               "OnValidate", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MaterialPropertyValuesSetter.RefreshPropertyIds
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MaterialPropertyValuesSetter::*)()>(
    &::GlobalNamespace::MaterialPropertyValuesSetter::RefreshPropertyIds)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x2115510;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MaterialPropertyValuesSetter*>::get(),
                                                                               "RefreshPropertyIds", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MaterialPropertyValuesSetter.ApplyParams
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MaterialPropertyValuesSetter::*)()>(
    &::GlobalNamespace::MaterialPropertyValuesSetter::ApplyParams)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x2115668;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MaterialPropertyValuesSetter*>::get(),
                                                                               "ApplyParams", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MaterialPropertyValuesSetter._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MaterialPropertyValuesSetter::*)()>(
    &::GlobalNamespace::MaterialPropertyValuesSetter::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21158c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MaterialPropertyValuesSetter*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::MaterialPropertyBlockController*& GlobalNamespace::MaterialPropertyValuesSetter::__get__materialPropertyBlockController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____materialPropertyBlockController;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MaterialPropertyBlockController*> const&
GlobalNamespace::MaterialPropertyValuesSetter::__get__materialPropertyBlockController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____materialPropertyBlockController;
}
constexpr void GlobalNamespace::MaterialPropertyValuesSetter::__set__materialPropertyBlockController(::GlobalNamespace::MaterialPropertyBlockController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____materialPropertyBlockController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameFloatValuePair*, ::Array<::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameFloatValuePair*>*>&
GlobalNamespace::MaterialPropertyValuesSetter::__get__floats() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____floats;
}
constexpr ::ArrayW<::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameFloatValuePair*, ::Array<::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameFloatValuePair*>*> const&
GlobalNamespace::MaterialPropertyValuesSetter::__get__floats() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____floats;
}
constexpr void GlobalNamespace::MaterialPropertyValuesSetter::__set__floats(
    ::ArrayW<::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameFloatValuePair*, ::Array<::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameFloatValuePair*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____floats)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameVectorValuePair*, ::Array<::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameVectorValuePair*>*>&
GlobalNamespace::MaterialPropertyValuesSetter::__get__vectors() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____vectors;
}
constexpr ::ArrayW<::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameVectorValuePair*, ::Array<::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameVectorValuePair*>*> const&
GlobalNamespace::MaterialPropertyValuesSetter::__get__vectors() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____vectors;
}
constexpr void GlobalNamespace::MaterialPropertyValuesSetter::__set__vectors(
    ::ArrayW<::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameVectorValuePair*, ::Array<::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameVectorValuePair*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____vectors)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameColorValuePair*, ::Array<::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameColorValuePair*>*>&
GlobalNamespace::MaterialPropertyValuesSetter::__get__colors() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____colors;
}
constexpr ::ArrayW<::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameColorValuePair*, ::Array<::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameColorValuePair*>*> const&
GlobalNamespace::MaterialPropertyValuesSetter::__get__colors() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____colors;
}
constexpr void GlobalNamespace::MaterialPropertyValuesSetter::__set__colors(
    ::ArrayW<::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameColorValuePair*, ::Array<::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameColorValuePair*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____colors)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameIntValuePair*, ::Array<::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameIntValuePair*>*>&
GlobalNamespace::MaterialPropertyValuesSetter::__get__ints() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____ints;
}
constexpr ::ArrayW<::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameIntValuePair*, ::Array<::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameIntValuePair*>*> const&
GlobalNamespace::MaterialPropertyValuesSetter::__get__ints() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____ints;
}
constexpr void GlobalNamespace::MaterialPropertyValuesSetter::__set__ints(
    ::ArrayW<::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameIntValuePair*, ::Array<::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameIntValuePair*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____ints)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::MaterialPropertyValuesSetter::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MaterialPropertyValuesSetter*>::get(), "Start",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MaterialPropertyValuesSetter::OnValidate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MaterialPropertyValuesSetter*>::get(),
                                                                             "OnValidate", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MaterialPropertyValuesSetter::RefreshPropertyIds() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MaterialPropertyValuesSetter*>::get(),
                                                                             "RefreshPropertyIds", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MaterialPropertyValuesSetter::ApplyParams() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MaterialPropertyValuesSetter*>::get(),
                                                                             "ApplyParams", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::MaterialPropertyValuesSetter* GlobalNamespace::MaterialPropertyValuesSetter::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::MaterialPropertyValuesSetter*>());
}
inline void GlobalNamespace::MaterialPropertyValuesSetter::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MaterialPropertyValuesSetter*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MaterialPropertyValuesSetter::MaterialPropertyValuesSetter() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
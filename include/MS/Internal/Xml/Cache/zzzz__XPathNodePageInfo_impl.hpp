#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "MS/Internal/Xml/Cache/zzzz__XPathNodePageInfo_def.hpp"
#include "MS/Internal/Xml/Cache/zzzz__XPathNode_def.hpp"
//  Writing Method size for method: ::MS::Internal::Xml::Cache::XPathNodePageInfo.get_PageNumber
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::MS::Internal::Xml::Cache::XPathNodePageInfo::*)()>(
    &::MS::Internal::Xml::Cache::XPathNodePageInfo::get_PageNumber)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28eb808;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::MS::Internal::Xml::Cache::XPathNodePageInfo*>::get(),
                                                                               "get_PageNumber", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MS::Internal::Xml::Cache::XPathNodePageInfo.get_NodeCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::MS::Internal::Xml::Cache::XPathNodePageInfo::*)()>(
    &::MS::Internal::Xml::Cache::XPathNodePageInfo::get_NodeCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28eb810;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::MS::Internal::Xml::Cache::XPathNodePageInfo*>::get(),
                                                                               "get_NodeCount", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::MS::Internal::Xml::Cache::XPathNodePageInfo.get_NextPage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::MS::Internal::Xml::Cache::XPathNode, ::Array<::MS::Internal::Xml::Cache::XPathNode>*> (
    ::MS::Internal::Xml::Cache::XPathNodePageInfo::*)()>(&::MS::Internal::Xml::Cache::XPathNodePageInfo::get_NextPage)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28eb818;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::MS::Internal::Xml::Cache::XPathNodePageInfo*>::get(),
                                                                               "get_NextPage", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr int32_t& MS::Internal::Xml::Cache::XPathNodePageInfo::__get__pageNum() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____pageNum;
}
constexpr int32_t const& MS::Internal::Xml::Cache::XPathNodePageInfo::__get__pageNum() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____pageNum;
}
constexpr void MS::Internal::Xml::Cache::XPathNodePageInfo::__set__pageNum(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____pageNum = value;
}
constexpr int32_t& MS::Internal::Xml::Cache::XPathNodePageInfo::__get__nodeCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____nodeCount;
}
constexpr int32_t const& MS::Internal::Xml::Cache::XPathNodePageInfo::__get__nodeCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____nodeCount;
}
constexpr void MS::Internal::Xml::Cache::XPathNodePageInfo::__set__nodeCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____nodeCount = value;
}
constexpr ::ArrayW<::MS::Internal::Xml::Cache::XPathNode, ::Array<::MS::Internal::Xml::Cache::XPathNode>*>& MS::Internal::Xml::Cache::XPathNodePageInfo::__get__pageNext() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____pageNext;
}
constexpr ::ArrayW<::MS::Internal::Xml::Cache::XPathNode, ::Array<::MS::Internal::Xml::Cache::XPathNode>*> const& MS::Internal::Xml::Cache::XPathNodePageInfo::__get__pageNext() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____pageNext;
}
constexpr void MS::Internal::Xml::Cache::XPathNodePageInfo::__set__pageNext(::ArrayW<::MS::Internal::Xml::Cache::XPathNode, ::Array<::MS::Internal::Xml::Cache::XPathNode>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____pageNext)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline int32_t MS::Internal::Xml::Cache::XPathNodePageInfo::get_PageNumber() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::MS::Internal::Xml::Cache::XPathNodePageInfo*>::get(),
                                                                             "get_PageNumber", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t MS::Internal::Xml::Cache::XPathNodePageInfo::get_NodeCount() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::MS::Internal::Xml::Cache::XPathNodePageInfo*>::get(),
                                                                             "get_NodeCount", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::ArrayW<::MS::Internal::Xml::Cache::XPathNode, ::Array<::MS::Internal::Xml::Cache::XPathNode>*> MS::Internal::Xml::Cache::XPathNodePageInfo::get_NextPage() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::MS::Internal::Xml::Cache::XPathNodePageInfo*>::get(),
                                                                             "get_NextPage", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::MS::Internal::Xml::Cache::XPathNode, ::Array<::MS::Internal::Xml::Cache::XPathNode>*>, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::MS::Internal::Xml::Cache::XPathNodePageInfo::XPathNodePageInfo() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
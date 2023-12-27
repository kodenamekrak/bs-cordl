#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Xml/XPath/zzzz__XPathDocument_def.hpp"
#include "MS/Internal/Xml/Cache/zzzz__XPathNode_def.hpp"
#include "System/Xml/zzzz__XmlNameTable_def.hpp"
#include "MS/Internal/Xml/Cache/zzzz__XPathNodeRef_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
//  Writing Method size for method: ::System::Xml::XPath::XPathDocument.get_NameTable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlNameTable* (::System::Xml::XPath::XPathDocument::*)()>(
    &::System::Xml::XPath::XPathDocument::get_NameTable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28a9d78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XPath::XPathDocument*>::get(), "get_NameTable",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XPath::XPathDocument.GetXmlNamespaceNode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Xml::XPath::XPathDocument::*)(
    ByRef<::ArrayW<::MS::Internal::Xml::Cache::XPathNode, ::Array<::MS::Internal::Xml::Cache::XPathNode>*>>)>(&::System::Xml::XPath::XPathDocument::GetXmlNamespaceNode)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x28a9d80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XPath::XPathDocument*>::get(), "GetXmlNamespaceNode", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<::MS::Internal::Xml::Cache::XPathNode, ::Array<::MS::Internal::Xml::Cache::XPathNode>*>>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::XPath::XPathDocument.LookupNamespaces
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Xml::XPath::XPathDocument::*)(
    ::ArrayW<::MS::Internal::Xml::Cache::XPathNode, ::Array<::MS::Internal::Xml::Cache::XPathNode>*>, int32_t,
    ByRef<::ArrayW<::MS::Internal::Xml::Cache::XPathNode, ::Array<::MS::Internal::Xml::Cache::XPathNode>*>>)>(&::System::Xml::XPath::XPathDocument::LookupNamespaces)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x28a9d90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XPath::XPathDocument*>::get(), "LookupNamespaces", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::MS::Internal::Xml::Cache::XPathNode, ::Array<::MS::Internal::Xml::Cache::XPathNode>*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<::MS::Internal::Xml::Cache::XPathNode, ::Array<::MS::Internal::Xml::Cache::XPathNode>*>>>::get() })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::MS::Internal::Xml::Cache::XPathNode, ::Array<::MS::Internal::Xml::Cache::XPathNode>*>& System::Xml::XPath::XPathDocument::__get_pageXmlNmsp() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___pageXmlNmsp;
}
constexpr ::ArrayW<::MS::Internal::Xml::Cache::XPathNode, ::Array<::MS::Internal::Xml::Cache::XPathNode>*> const& System::Xml::XPath::XPathDocument::__get_pageXmlNmsp() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___pageXmlNmsp;
}
constexpr void System::Xml::XPath::XPathDocument::__set_pageXmlNmsp(::ArrayW<::MS::Internal::Xml::Cache::XPathNode, ::Array<::MS::Internal::Xml::Cache::XPathNode>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___pageXmlNmsp)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& System::Xml::XPath::XPathDocument::__get_idxXmlNmsp() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___idxXmlNmsp;
}
constexpr int32_t const& System::Xml::XPath::XPathDocument::__get_idxXmlNmsp() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___idxXmlNmsp;
}
constexpr void System::Xml::XPath::XPathDocument::__set_idxXmlNmsp(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___idxXmlNmsp = value;
}
constexpr ::System::Xml::XmlNameTable*& System::Xml::XPath::XPathDocument::__get_nameTable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___nameTable;
}
constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlNameTable*> const& System::Xml::XPath::XPathDocument::__get_nameTable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___nameTable;
}
constexpr void System::Xml::XPath::XPathDocument::__set_nameTable(::System::Xml::XmlNameTable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___nameTable)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<::MS::Internal::Xml::Cache::XPathNodeRef, ::MS::Internal::Xml::Cache::XPathNodeRef>*& System::Xml::XPath::XPathDocument::__get_mapNmsp() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___mapNmsp;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::MS::Internal::Xml::Cache::XPathNodeRef, ::MS::Internal::Xml::Cache::XPathNodeRef>*> const&
System::Xml::XPath::XPathDocument::__get_mapNmsp() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___mapNmsp;
}
constexpr void
System::Xml::XPath::XPathDocument::__set_mapNmsp(::System::Collections::Generic::Dictionary_2<::MS::Internal::Xml::Cache::XPathNodeRef, ::MS::Internal::Xml::Cache::XPathNodeRef>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___mapNmsp)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Xml::XmlNameTable* System::Xml::XPath::XPathDocument::get_NameTable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XPath::XPathDocument*>::get(), "get_NameTable",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlNameTable*, false>(this, ___internal_method);
}
inline int32_t System::Xml::XPath::XPathDocument::GetXmlNamespaceNode(ByRef<::ArrayW<::MS::Internal::Xml::Cache::XPathNode, ::Array<::MS::Internal::Xml::Cache::XPathNode>*>> pageXmlNmsp) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XPath::XPathDocument*>::get(), "GetXmlNamespaceNode", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<::MS::Internal::Xml::Cache::XPathNode, ::Array<::MS::Internal::Xml::Cache::XPathNode>*>>>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, pageXmlNmsp);
}
inline int32_t System::Xml::XPath::XPathDocument::LookupNamespaces(::ArrayW<::MS::Internal::Xml::Cache::XPathNode, ::Array<::MS::Internal::Xml::Cache::XPathNode>*> pageElem, int32_t idxElem,
                                                                   ByRef<::ArrayW<::MS::Internal::Xml::Cache::XPathNode, ::Array<::MS::Internal::Xml::Cache::XPathNode>*>> pageNmsp) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::XPath::XPathDocument*>::get(), "LookupNamespaces", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::MS::Internal::Xml::Cache::XPathNode, ::Array<::MS::Internal::Xml::Cache::XPathNode>*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<::MS::Internal::Xml::Cache::XPathNode, ::Array<::MS::Internal::Xml::Cache::XPathNode>*>>>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, pageElem, idxElem, pageNmsp);
}
// Ctor Parameters []
constexpr ::System::Xml::XPath::XPathDocument::XPathDocument() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
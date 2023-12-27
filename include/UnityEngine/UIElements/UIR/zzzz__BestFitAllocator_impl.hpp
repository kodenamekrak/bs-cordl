#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__LinkedPoolItem_1_impl.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__LinkedPool_1_impl.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__BestFitAllocator_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__BestFitAllocator_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__Alloc_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::__BestFitAllocator__Block.get_size
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::UnityEngine::UIElements::UIR::__BestFitAllocator__Block::*)()>(
    &::UnityEngine::UIElements::UIR::__BestFitAllocator__Block::get_size)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2dd4ffc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::__BestFitAllocator__Block*>::get(), "get_size",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::__BestFitAllocator__Block._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::__BestFitAllocator__Block::*)()>(
    &::UnityEngine::UIElements::UIR::__BestFitAllocator__Block::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2dd5254;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::__BestFitAllocator__Block*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr uint32_t& UnityEngine::UIElements::UIR::__BestFitAllocator__Block::__get_start() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___start;
}
constexpr uint32_t const& UnityEngine::UIElements::UIR::__BestFitAllocator__Block::__get_start() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___start;
}
constexpr void UnityEngine::UIElements::UIR::__BestFitAllocator__Block::__set_start(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___start = value;
}
constexpr uint32_t& UnityEngine::UIElements::UIR::__BestFitAllocator__Block::__get_end() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___end;
}
constexpr uint32_t const& UnityEngine::UIElements::UIR::__BestFitAllocator__Block::__get_end() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___end;
}
constexpr void UnityEngine::UIElements::UIR::__BestFitAllocator__Block::__set_end(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___end = value;
}
constexpr ::UnityEngine::UIElements::UIR::__BestFitAllocator__Block*& UnityEngine::UIElements::UIR::__BestFitAllocator__Block::__get_prev() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___prev;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UIR::__BestFitAllocator__Block*> const& UnityEngine::UIElements::UIR::__BestFitAllocator__Block::__get_prev() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___prev;
}
constexpr void UnityEngine::UIElements::UIR::__BestFitAllocator__Block::__set_prev(::UnityEngine::UIElements::UIR::__BestFitAllocator__Block* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___prev)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UIElements::UIR::__BestFitAllocator__Block*& UnityEngine::UIElements::UIR::__BestFitAllocator__Block::__get_next() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___next;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UIR::__BestFitAllocator__Block*> const& UnityEngine::UIElements::UIR::__BestFitAllocator__Block::__get_next() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___next;
}
constexpr void UnityEngine::UIElements::UIR::__BestFitAllocator__Block::__set_next(::UnityEngine::UIElements::UIR::__BestFitAllocator__Block* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___next)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UIElements::UIR::__BestFitAllocator__Block*& UnityEngine::UIElements::UIR::__BestFitAllocator__Block::__get_prevAvailable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___prevAvailable;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UIR::__BestFitAllocator__Block*> const& UnityEngine::UIElements::UIR::__BestFitAllocator__Block::__get_prevAvailable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___prevAvailable;
}
constexpr void UnityEngine::UIElements::UIR::__BestFitAllocator__Block::__set_prevAvailable(::UnityEngine::UIElements::UIR::__BestFitAllocator__Block* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___prevAvailable)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UIElements::UIR::__BestFitAllocator__Block*& UnityEngine::UIElements::UIR::__BestFitAllocator__Block::__get_nextAvailable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___nextAvailable;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UIR::__BestFitAllocator__Block*> const& UnityEngine::UIElements::UIR::__BestFitAllocator__Block::__get_nextAvailable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___nextAvailable;
}
constexpr void UnityEngine::UIElements::UIR::__BestFitAllocator__Block::__set_nextAvailable(::UnityEngine::UIElements::UIR::__BestFitAllocator__Block* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___nextAvailable)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& UnityEngine::UIElements::UIR::__BestFitAllocator__Block::__get_allocated() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___allocated;
}
constexpr bool const& UnityEngine::UIElements::UIR::__BestFitAllocator__Block::__get_allocated() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___allocated;
}
constexpr void UnityEngine::UIElements::UIR::__BestFitAllocator__Block::__set_allocated(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___allocated = value;
}
inline uint32_t UnityEngine::UIElements::UIR::__BestFitAllocator__Block::get_size() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::__BestFitAllocator__Block*>::get(),
                                                                             "get_size", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::UIR::__BestFitAllocator__Block* UnityEngine::UIElements::UIR::__BestFitAllocator__Block::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::UIElements::UIR::__BestFitAllocator__Block*>());
}
inline void UnityEngine::UIElements::UIR::__BestFitAllocator__Block::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::__BestFitAllocator__Block*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::UIR::__BestFitAllocator__Block::__BestFitAllocator__Block() {}
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::__BestFitAllocator__BlockPool.CreateBlock
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::UIR::__BestFitAllocator__Block* (*)()>(
    &::UnityEngine::UIElements::UIR::__BestFitAllocator__BlockPool::CreateBlock)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2dd51fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::__BestFitAllocator__BlockPool*>::get(), "CreateBlock",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::__BestFitAllocator__BlockPool.ResetBlock
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::UIElements::UIR::__BestFitAllocator__Block*)>(
    &::UnityEngine::UIElements::UIR::__BestFitAllocator__BlockPool::ResetBlock)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2dd529c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::__BestFitAllocator__BlockPool*>::get(), "ResetBlock", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::__BestFitAllocator__Block*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::__BestFitAllocator__BlockPool._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::__BestFitAllocator__BlockPool::*)()>(
    &::UnityEngine::UIElements::UIR::__BestFitAllocator__BlockPool::_ctor)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x2dd4ec4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::__BestFitAllocator__BlockPool*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline ::UnityEngine::UIElements::UIR::__BestFitAllocator__Block* UnityEngine::UIElements::UIR::__BestFitAllocator__BlockPool::CreateBlock() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::__BestFitAllocator__BlockPool*>::get(), "CreateBlock",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::UIR::__BestFitAllocator__Block*, false>(nullptr, ___internal_method);
}
inline void UnityEngine::UIElements::UIR::__BestFitAllocator__BlockPool::ResetBlock(::UnityEngine::UIElements::UIR::__BestFitAllocator__Block* block) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::__BestFitAllocator__BlockPool*>::get(), "ResetBlock", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::__BestFitAllocator__Block*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, block);
}
inline ::UnityEngine::UIElements::UIR::__BestFitAllocator__BlockPool* UnityEngine::UIElements::UIR::__BestFitAllocator__BlockPool::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::UIElements::UIR::__BestFitAllocator__BlockPool*>());
}
inline void UnityEngine::UIElements::UIR::__BestFitAllocator__BlockPool::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::__BestFitAllocator__BlockPool*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::UIR::__BestFitAllocator__BlockPool::__BestFitAllocator__BlockPool() {}
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::BestFitAllocator._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::BestFitAllocator::*)(uint32_t)>(
    &::UnityEngine::UIElements::UIR::BestFitAllocator::_ctor)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x2dcbf90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::BestFitAllocator*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::BestFitAllocator.get_totalSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::UnityEngine::UIElements::UIR::BestFitAllocator::*)()>(
    &::UnityEngine::UIElements::UIR::BestFitAllocator::get_totalSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2dd4fb4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::BestFitAllocator*>::get(),
                                                                               "get_totalSize", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::BestFitAllocator.get_highWatermark
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::UnityEngine::UIElements::UIR::BestFitAllocator::*)()>(
    &::UnityEngine::UIElements::UIR::BestFitAllocator::get_highWatermark)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2dcc4a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::BestFitAllocator*>::get(),
                                                                               "get_highWatermark", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::BestFitAllocator.Allocate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::UIR::Alloc (::UnityEngine::UIElements::UIR::BestFitAllocator::*)(uint32_t)>(
    &::UnityEngine::UIElements::UIR::BestFitAllocator::Allocate)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x2dcbd58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::BestFitAllocator*>::get(), "Allocate",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::BestFitAllocator.Free
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::BestFitAllocator::*)(::UnityEngine::UIElements::UIR::Alloc)>(
    &::UnityEngine::UIElements::UIR::BestFitAllocator::Free)> {
  constexpr static std::size_t size = 0x25c;
  constexpr static std::size_t addrs = 0x2dcc248;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::BestFitAllocator*>::get(), "Free", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::Alloc>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::BestFitAllocator.CoalesceBlockWithPrevious
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::UIR::__BestFitAllocator__Block* (
    ::UnityEngine::UIElements::UIR::BestFitAllocator::*)(::UnityEngine::UIElements::UIR::__BestFitAllocator__Block*)>(&::UnityEngine::UIElements::UIR::BestFitAllocator::CoalesceBlockWithPrevious)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x2dd50f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::BestFitAllocator*>::get(), "CoalesceBlockWithPrevious", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::__BestFitAllocator__Block*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::BestFitAllocator.BestFitFindAvailableBlock
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::UIR::__BestFitAllocator__Block* (
    ::UnityEngine::UIElements::UIR::BestFitAllocator::*)(uint32_t)>(&::UnityEngine::UIElements::UIR::BestFitAllocator::BestFitFindAvailableBlock)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2dd4fbc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::BestFitAllocator*>::get(), "BestFitFindAvailableBlock",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIR::BestFitAllocator.SplitBlock
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::UIR::BestFitAllocator::*)(
    ::UnityEngine::UIElements::UIR::__BestFitAllocator__Block*, uint32_t)>(&::UnityEngine::UIElements::UIR::BestFitAllocator::SplitBlock)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x2dd5008;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::BestFitAllocator*>::get(), "SplitBlock", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::__BestFitAllocator__Block*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
constexpr uint32_t& UnityEngine::UIElements::UIR::BestFitAllocator::__get__totalSize_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____totalSize_k__BackingField;
}
constexpr uint32_t const& UnityEngine::UIElements::UIR::BestFitAllocator::__get__totalSize_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____totalSize_k__BackingField;
}
constexpr void UnityEngine::UIElements::UIR::BestFitAllocator::__set__totalSize_k__BackingField(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____totalSize_k__BackingField = value;
}
constexpr ::UnityEngine::UIElements::UIR::__BestFitAllocator__Block*& UnityEngine::UIElements::UIR::BestFitAllocator::__get_m_FirstBlock() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_FirstBlock;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UIR::__BestFitAllocator__Block*> const& UnityEngine::UIElements::UIR::BestFitAllocator::__get_m_FirstBlock() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_FirstBlock;
}
constexpr void UnityEngine::UIElements::UIR::BestFitAllocator::__set_m_FirstBlock(::UnityEngine::UIElements::UIR::__BestFitAllocator__Block* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_FirstBlock)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UIElements::UIR::__BestFitAllocator__Block*& UnityEngine::UIElements::UIR::BestFitAllocator::__get_m_FirstAvailableBlock() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_FirstAvailableBlock;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UIR::__BestFitAllocator__Block*> const& UnityEngine::UIElements::UIR::BestFitAllocator::__get_m_FirstAvailableBlock() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_FirstAvailableBlock;
}
constexpr void UnityEngine::UIElements::UIR::BestFitAllocator::__set_m_FirstAvailableBlock(::UnityEngine::UIElements::UIR::__BestFitAllocator__Block* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_FirstAvailableBlock)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UIElements::UIR::__BestFitAllocator__BlockPool*& UnityEngine::UIElements::UIR::BestFitAllocator::__get_m_BlockPool() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_BlockPool;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UIR::__BestFitAllocator__BlockPool*> const& UnityEngine::UIElements::UIR::BestFitAllocator::__get_m_BlockPool() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_BlockPool;
}
constexpr void UnityEngine::UIElements::UIR::BestFitAllocator::__set_m_BlockPool(::UnityEngine::UIElements::UIR::__BestFitAllocator__BlockPool* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_BlockPool)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr uint32_t& UnityEngine::UIElements::UIR::BestFitAllocator::__get_m_HighWatermark() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_HighWatermark;
}
constexpr uint32_t const& UnityEngine::UIElements::UIR::BestFitAllocator::__get_m_HighWatermark() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_HighWatermark;
}
constexpr void UnityEngine::UIElements::UIR::BestFitAllocator::__set_m_HighWatermark(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___m_HighWatermark = value;
}
inline ::UnityEngine::UIElements::UIR::BestFitAllocator* UnityEngine::UIElements::UIR::BestFitAllocator::New_ctor(uint32_t size) {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::UIElements::UIR::BestFitAllocator*>(size));
}
inline void UnityEngine::UIElements::UIR::BestFitAllocator::_ctor(uint32_t size) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::BestFitAllocator*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, size);
}
inline uint32_t UnityEngine::UIElements::UIR::BestFitAllocator::get_totalSize() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::BestFitAllocator*>::get(),
                                                                             "get_totalSize", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method);
}
inline uint32_t UnityEngine::UIElements::UIR::BestFitAllocator::get_highWatermark() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::BestFitAllocator*>::get(),
                                                                             "get_highWatermark", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::UIR::Alloc UnityEngine::UIElements::UIR::BestFitAllocator::Allocate(uint32_t size) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::BestFitAllocator*>::get(), "Allocate",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::UIR::Alloc, false>(this, ___internal_method, size);
}
inline void UnityEngine::UIElements::UIR::BestFitAllocator::Free(::UnityEngine::UIElements::UIR::Alloc alloc) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::BestFitAllocator*>::get(), "Free", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::Alloc>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, alloc);
}
inline ::UnityEngine::UIElements::UIR::__BestFitAllocator__Block*
UnityEngine::UIElements::UIR::BestFitAllocator::CoalesceBlockWithPrevious(::UnityEngine::UIElements::UIR::__BestFitAllocator__Block* block) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::BestFitAllocator*>::get(), "CoalesceBlockWithPrevious", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::__BestFitAllocator__Block*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::UIR::__BestFitAllocator__Block*, false>(this, ___internal_method, block);
}
inline ::UnityEngine::UIElements::UIR::__BestFitAllocator__Block* UnityEngine::UIElements::UIR::BestFitAllocator::BestFitFindAvailableBlock(uint32_t size) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::BestFitAllocator*>::get(), "BestFitFindAvailableBlock",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::UIR::__BestFitAllocator__Block*, false>(this, ___internal_method, size);
}
inline void UnityEngine::UIElements::UIR::BestFitAllocator::SplitBlock(::UnityEngine::UIElements::UIR::__BestFitAllocator__Block* block, uint32_t size) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::UIR::BestFitAllocator*>::get(), "SplitBlock", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::UIR::__BestFitAllocator__Block*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, block, size);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::UIR::BestFitAllocator::BestFitAllocator() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
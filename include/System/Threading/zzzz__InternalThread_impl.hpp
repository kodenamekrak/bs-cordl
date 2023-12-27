#pragma once
#include "System/Runtime/ConstrainedExecution/zzzz__CriticalFinalizerObject_impl.hpp"
#include "System/Threading/zzzz__ThreadState_impl.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__UIntPtr_impl.hpp"
#include "System/Threading/zzzz__InternalThread_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Threading::InternalThread.Thread_free_internal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::InternalThread::*)()>(&::System::Threading::InternalThread::Thread_free_internal)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x261f804;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::InternalThread*>::get(),
                                                                               "Thread_free_internal", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::InternalThread.Finalize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::InternalThread::*)()>(&::System::Threading::InternalThread::Finalize)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x261f808;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::InternalThread*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::InternalThread*>::get(), 1));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::InternalThread._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::InternalThread::*)()>(&::System::Threading::InternalThread::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x261f89c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::InternalThread*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr int32_t& System::Threading::InternalThread::__get_lock_thread_id() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___lock_thread_id;
}
constexpr int32_t const& System::Threading::InternalThread::__get_lock_thread_id() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___lock_thread_id;
}
constexpr void System::Threading::InternalThread::__set_lock_thread_id(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___lock_thread_id = value;
}
constexpr void*& System::Threading::InternalThread::__get_handle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___handle;
}
constexpr void* const& System::Threading::InternalThread::__get_handle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___handle;
}
constexpr void System::Threading::InternalThread::__set_handle(void* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___handle = value;
}
constexpr void*& System::Threading::InternalThread::__get_native_handle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___native_handle;
}
constexpr void* const& System::Threading::InternalThread::__get_native_handle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___native_handle;
}
constexpr void System::Threading::InternalThread::__set_native_handle(void* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___native_handle = value;
}
constexpr void*& System::Threading::InternalThread::__get_name_chars() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___name_chars;
}
constexpr void* const& System::Threading::InternalThread::__get_name_chars() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___name_chars;
}
constexpr void System::Threading::InternalThread::__set_name_chars(void* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___name_chars = value;
}
constexpr int32_t& System::Threading::InternalThread::__get_name_free() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___name_free;
}
constexpr int32_t const& System::Threading::InternalThread::__get_name_free() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___name_free;
}
constexpr void System::Threading::InternalThread::__set_name_free(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___name_free = value;
}
constexpr int32_t& System::Threading::InternalThread::__get_name_length() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___name_length;
}
constexpr int32_t const& System::Threading::InternalThread::__get_name_length() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___name_length;
}
constexpr void System::Threading::InternalThread::__set_name_length(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___name_length = value;
}
constexpr ::System::Threading::ThreadState& System::Threading::InternalThread::__get_state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___state;
}
constexpr ::System::Threading::ThreadState const& System::Threading::InternalThread::__get_state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___state;
}
constexpr void System::Threading::InternalThread::__set_state(::System::Threading::ThreadState value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___state = value;
}
constexpr ::System::Object*& System::Threading::InternalThread::__get_abort_exc() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___abort_exc;
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& System::Threading::InternalThread::__get_abort_exc() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___abort_exc;
}
constexpr void System::Threading::InternalThread::__set_abort_exc(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___abort_exc)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& System::Threading::InternalThread::__get_abort_state_handle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___abort_state_handle;
}
constexpr int32_t const& System::Threading::InternalThread::__get_abort_state_handle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___abort_state_handle;
}
constexpr void System::Threading::InternalThread::__set_abort_state_handle(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___abort_state_handle = value;
}
constexpr int64_t& System::Threading::InternalThread::__get_thread_id() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___thread_id;
}
constexpr int64_t const& System::Threading::InternalThread::__get_thread_id() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___thread_id;
}
constexpr void System::Threading::InternalThread::__set_thread_id(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___thread_id = value;
}
constexpr void*& System::Threading::InternalThread::__get_debugger_thread() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___debugger_thread;
}
constexpr void* const& System::Threading::InternalThread::__get_debugger_thread() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___debugger_thread;
}
constexpr void System::Threading::InternalThread::__set_debugger_thread(void* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___debugger_thread = value;
}
constexpr void*& System::Threading::InternalThread::__get_static_data() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___static_data;
}
constexpr void* const& System::Threading::InternalThread::__get_static_data() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___static_data;
}
constexpr void System::Threading::InternalThread::__set_static_data(void* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___static_data = value;
}
constexpr void*& System::Threading::InternalThread::__get_runtime_thread_info() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___runtime_thread_info;
}
constexpr void* const& System::Threading::InternalThread::__get_runtime_thread_info() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___runtime_thread_info;
}
constexpr void System::Threading::InternalThread::__set_runtime_thread_info(void* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___runtime_thread_info = value;
}
constexpr ::System::Object*& System::Threading::InternalThread::__get_current_appcontext() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___current_appcontext;
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& System::Threading::InternalThread::__get_current_appcontext() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___current_appcontext;
}
constexpr void System::Threading::InternalThread::__set_current_appcontext(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___current_appcontext)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Object*& System::Threading::InternalThread::__get_root_domain_thread() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___root_domain_thread;
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& System::Threading::InternalThread::__get_root_domain_thread() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___root_domain_thread;
}
constexpr void System::Threading::InternalThread::__set_root_domain_thread(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___root_domain_thread)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& System::Threading::InternalThread::__get__serialized_principal() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____serialized_principal;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& System::Threading::InternalThread::__get__serialized_principal() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____serialized_principal;
}
constexpr void System::Threading::InternalThread::__set__serialized_principal(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____serialized_principal)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& System::Threading::InternalThread::__get__serialized_principal_version() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____serialized_principal_version;
}
constexpr int32_t const& System::Threading::InternalThread::__get__serialized_principal_version() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____serialized_principal_version;
}
constexpr void System::Threading::InternalThread::__set__serialized_principal_version(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____serialized_principal_version = value;
}
constexpr void*& System::Threading::InternalThread::__get_appdomain_refs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___appdomain_refs;
}
constexpr void* const& System::Threading::InternalThread::__get_appdomain_refs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___appdomain_refs;
}
constexpr void System::Threading::InternalThread::__set_appdomain_refs(void* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___appdomain_refs = value;
}
constexpr int32_t& System::Threading::InternalThread::__get_interruption_requested() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___interruption_requested;
}
constexpr int32_t const& System::Threading::InternalThread::__get_interruption_requested() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___interruption_requested;
}
constexpr void System::Threading::InternalThread::__set_interruption_requested(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___interruption_requested = value;
}
constexpr void*& System::Threading::InternalThread::__get_longlived() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___longlived;
}
constexpr void* const& System::Threading::InternalThread::__get_longlived() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___longlived;
}
constexpr void System::Threading::InternalThread::__set_longlived(void* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___longlived = value;
}
constexpr bool& System::Threading::InternalThread::__get_threadpool_thread() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___threadpool_thread;
}
constexpr bool const& System::Threading::InternalThread::__get_threadpool_thread() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___threadpool_thread;
}
constexpr void System::Threading::InternalThread::__set_threadpool_thread(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___threadpool_thread = value;
}
constexpr bool& System::Threading::InternalThread::__get_thread_interrupt_requested() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___thread_interrupt_requested;
}
constexpr bool const& System::Threading::InternalThread::__get_thread_interrupt_requested() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___thread_interrupt_requested;
}
constexpr void System::Threading::InternalThread::__set_thread_interrupt_requested(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___thread_interrupt_requested = value;
}
constexpr int32_t& System::Threading::InternalThread::__get_stack_size() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___stack_size;
}
constexpr int32_t const& System::Threading::InternalThread::__get_stack_size() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___stack_size;
}
constexpr void System::Threading::InternalThread::__set_stack_size(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___stack_size = value;
}
constexpr uint8_t& System::Threading::InternalThread::__get_apartment_state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___apartment_state;
}
constexpr uint8_t const& System::Threading::InternalThread::__get_apartment_state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___apartment_state;
}
constexpr void System::Threading::InternalThread::__set_apartment_state(uint8_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___apartment_state = value;
}
constexpr int32_t& System::Threading::InternalThread::__get_critical_region_level() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___critical_region_level;
}
constexpr int32_t const& System::Threading::InternalThread::__get_critical_region_level() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___critical_region_level;
}
constexpr void System::Threading::InternalThread::__set_critical_region_level(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___critical_region_level = value;
}
constexpr int32_t& System::Threading::InternalThread::__get_managed_id() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___managed_id;
}
constexpr int32_t const& System::Threading::InternalThread::__get_managed_id() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___managed_id;
}
constexpr void System::Threading::InternalThread::__set_managed_id(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___managed_id = value;
}
constexpr int32_t& System::Threading::InternalThread::__get_small_id() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___small_id;
}
constexpr int32_t const& System::Threading::InternalThread::__get_small_id() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___small_id;
}
constexpr void System::Threading::InternalThread::__set_small_id(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___small_id = value;
}
constexpr void*& System::Threading::InternalThread::__get_manage_callback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___manage_callback;
}
constexpr void* const& System::Threading::InternalThread::__get_manage_callback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___manage_callback;
}
constexpr void System::Threading::InternalThread::__set_manage_callback(void* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___manage_callback = value;
}
constexpr void*& System::Threading::InternalThread::__get_flags() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___flags;
}
constexpr void* const& System::Threading::InternalThread::__get_flags() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___flags;
}
constexpr void System::Threading::InternalThread::__set_flags(void* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___flags = value;
}
constexpr void*& System::Threading::InternalThread::__get_thread_pinning_ref() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___thread_pinning_ref;
}
constexpr void* const& System::Threading::InternalThread::__get_thread_pinning_ref() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___thread_pinning_ref;
}
constexpr void System::Threading::InternalThread::__set_thread_pinning_ref(void* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___thread_pinning_ref = value;
}
constexpr void*& System::Threading::InternalThread::__get_abort_protected_block_count() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___abort_protected_block_count;
}
constexpr void* const& System::Threading::InternalThread::__get_abort_protected_block_count() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___abort_protected_block_count;
}
constexpr void System::Threading::InternalThread::__set_abort_protected_block_count(void* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___abort_protected_block_count = value;
}
constexpr int32_t& System::Threading::InternalThread::__get_priority() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___priority;
}
constexpr int32_t const& System::Threading::InternalThread::__get_priority() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___priority;
}
constexpr void System::Threading::InternalThread::__set_priority(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___priority = value;
}
constexpr void*& System::Threading::InternalThread::__get_owned_mutex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___owned_mutex;
}
constexpr void* const& System::Threading::InternalThread::__get_owned_mutex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___owned_mutex;
}
constexpr void System::Threading::InternalThread::__set_owned_mutex(void* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___owned_mutex = value;
}
constexpr void*& System::Threading::InternalThread::__get_suspended_event() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___suspended_event;
}
constexpr void* const& System::Threading::InternalThread::__get_suspended_event() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___suspended_event;
}
constexpr void System::Threading::InternalThread::__set_suspended_event(void* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___suspended_event = value;
}
constexpr int32_t& System::Threading::InternalThread::__get_self_suspended() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___self_suspended;
}
constexpr int32_t const& System::Threading::InternalThread::__get_self_suspended() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___self_suspended;
}
constexpr void System::Threading::InternalThread::__set_self_suspended(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___self_suspended = value;
}
constexpr void*& System::Threading::InternalThread::__get_thread_state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___thread_state;
}
constexpr void* const& System::Threading::InternalThread::__get_thread_state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___thread_state;
}
constexpr void System::Threading::InternalThread::__set_thread_state(void* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___thread_state = value;
}
constexpr void*& System::Threading::InternalThread::__get_netcore0() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___netcore0;
}
constexpr void* const& System::Threading::InternalThread::__get_netcore0() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___netcore0;
}
constexpr void System::Threading::InternalThread::__set_netcore0(void* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___netcore0 = value;
}
constexpr void*& System::Threading::InternalThread::__get_netcore1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___netcore1;
}
constexpr void* const& System::Threading::InternalThread::__get_netcore1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___netcore1;
}
constexpr void System::Threading::InternalThread::__set_netcore1(void* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___netcore1 = value;
}
constexpr void*& System::Threading::InternalThread::__get_netcore2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___netcore2;
}
constexpr void* const& System::Threading::InternalThread::__get_netcore2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___netcore2;
}
constexpr void System::Threading::InternalThread::__set_netcore2(void* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___netcore2 = value;
}
constexpr void*& System::Threading::InternalThread::__get_last() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___last;
}
constexpr void* const& System::Threading::InternalThread::__get_last() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___last;
}
constexpr void System::Threading::InternalThread::__set_last(void* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___last = value;
}
inline void System::Threading::InternalThread::Thread_free_internal() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::InternalThread*>::get(),
                                                                             "Thread_free_internal", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Threading::InternalThread::Finalize() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::InternalThread*>::get(), "Finalize",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Threading::InternalThread* System::Threading::InternalThread::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Threading::InternalThread*>());
}
inline void System::Threading::InternalThread::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::InternalThread*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Threading::InternalThread::InternalThread() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
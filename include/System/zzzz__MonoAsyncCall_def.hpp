#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MonoAsyncCall)
namespace System {
class Object;
}
// Forward declare root types
namespace System {
class MonoAsyncCall;
}
// Write type traits
MARK_REF_PTR_T(::System::MonoAsyncCall);
// Type: System::MonoAsyncCall
// SizeInfo { instance_size: 64, native_size: 48, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2603)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2606))
// CS Name: ::System::MonoAsyncCall*
class CORDL_TYPE MonoAsyncCall : public ::System::Object {
public:
  // Declarations
  /// @brief Field msg, offset 0x10, size 0x8
  __declspec(property(get = __get_msg, put = __set_msg))::System::Object* msg;

  /// @brief Field cb_method, offset 0x18, size 0x8
  __declspec(property(get = __get_cb_method, put = __set_cb_method)) void* cb_method;

  /// @brief Field cb_target, offset 0x20, size 0x8
  __declspec(property(get = __get_cb_target, put = __set_cb_target))::System::Object* cb_target;

  /// @brief Field state, offset 0x28, size 0x8
  __declspec(property(get = __get_state, put = __set_state))::System::Object* state;

  /// @brief Field res, offset 0x30, size 0x8
  __declspec(property(get = __get_res, put = __set_res))::System::Object* res;

  /// @brief Field out_args, offset 0x38, size 0x8
  __declspec(property(get = __get_out_args, put = __set_out_args))::System::Object* out_args;

  constexpr ::System::Object*& __get_msg();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __get_msg() const;

  constexpr void __set_msg(::System::Object* value);

  constexpr void*& __get_cb_method();

  constexpr void* const& __get_cb_method() const;

  constexpr void __set_cb_method(void* value);

  constexpr ::System::Object*& __get_cb_target();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __get_cb_target() const;

  constexpr void __set_cb_target(::System::Object* value);

  constexpr ::System::Object*& __get_state();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __get_state() const;

  constexpr void __set_state(::System::Object* value);

  constexpr ::System::Object*& __get_res();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __get_res() const;

  constexpr void __set_res(::System::Object* value);

  constexpr ::System::Object*& __get_out_args();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __get_out_args() const;

  constexpr void __set_out_args(::System::Object* value);

  static inline ::System::MonoAsyncCall* New_ctor();

  /// @brief Method .ctor addr 0x25fa554 size 0x4 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "MonoAsyncCall", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MonoAsyncCall(MonoAsyncCall&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MonoAsyncCall", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MonoAsyncCall(MonoAsyncCall const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MonoAsyncCall();

public:
  /// @brief Field msg, offset: 0x10, size: 0x8, def value: None
  ::System::Object* ___msg;

  /// @brief Field cb_method, offset: 0x18, size: 0x8, def value: None
  void* ___cb_method;

  /// @brief Field cb_target, offset: 0x20, size: 0x8, def value: None
  ::System::Object* ___cb_target;

  /// @brief Field state, offset: 0x28, size: 0x8, def value: None
  ::System::Object* ___state;

  /// @brief Field res, offset: 0x30, size: 0x8, def value: None
  ::System::Object* ___res;

  /// @brief Field out_args, offset: 0x38, size: 0x8, def value: None
  ::System::Object* ___out_args;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::MonoAsyncCall, 0x40>, "Size mismatch!");

} // namespace System
NEED_NO_BOX(::System::MonoAsyncCall);
DEFINE_IL2CPP_ARG_TYPE(::System::MonoAsyncCall*, "System", "MonoAsyncCall");
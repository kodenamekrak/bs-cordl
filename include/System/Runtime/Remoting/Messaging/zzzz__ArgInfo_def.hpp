#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ArgInfo)
namespace System::Runtime::Remoting::Messaging {
struct ArgInfoType;
}
namespace System::Reflection {
class MethodBase;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Runtime::Remoting::Messaging {
class ArgInfo;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Remoting::Messaging::ArgInfo);
// Type: System.Runtime.Remoting.Messaging::ArgInfo
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Runtime::Remoting::Messaging {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3150))
// CS Name: ::System.Runtime.Remoting.Messaging::ArgInfo*
class CORDL_TYPE ArgInfo : public ::System::Object {
public:
  // Declarations
  /// @brief Field _paramMap, offset 0x10, size 0x8
  __declspec(property(get = __get__paramMap, put = __set__paramMap))::ArrayW<int32_t, ::Array<int32_t>*> _paramMap;

  /// @brief Field _inoutArgCount, offset 0x18, size 0x4
  __declspec(property(get = __get__inoutArgCount, put = __set__inoutArgCount)) int32_t _inoutArgCount;

  /// @brief Field _method, offset 0x20, size 0x8
  __declspec(property(get = __get__method, put = __set__method))::System::Reflection::MethodBase* _method;

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __get__paramMap();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __get__paramMap() const;

  constexpr void __set__paramMap(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr int32_t& __get__inoutArgCount();

  constexpr int32_t const& __get__inoutArgCount() const;

  constexpr void __set__inoutArgCount(int32_t value);

  constexpr ::System::Reflection::MethodBase*& __get__method();

  constexpr ::cordl_internals::to_const_pointer<::System::Reflection::MethodBase*> const& __get__method() const;

  constexpr void __set__method(::System::Reflection::MethodBase* value);

  static inline ::System::Runtime::Remoting::Messaging::ArgInfo* New_ctor(::System::Reflection::MethodBase* method, ::System::Runtime::Remoting::Messaging::ArgInfoType type);

  /// @brief Method .ctor addr 0x24a7594 size 0x1b4 virtual false final false
  inline void _ctor(::System::Reflection::MethodBase* method, ::System::Runtime::Remoting::Messaging::ArgInfoType type);

  /// @brief Method GetInOutArgs addr 0x24a7748 size 0x100 virtual false final false
  inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> GetInOutArgs(::ArrayW<::System::Object*, ::Array<::System::Object*>*> args);

  // Ctor Parameters [CppParam { name: "", ty: "ArgInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ArgInfo(ArgInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ArgInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ArgInfo(ArgInfo const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ArgInfo();

public:
  /// @brief Field _paramMap, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ____paramMap;

  /// @brief Field _inoutArgCount, offset: 0x18, size: 0x4, def value: None
  int32_t ____inoutArgCount;

  /// @brief Field _method, offset: 0x20, size: 0x8, def value: None
  ::System::Reflection::MethodBase* ____method;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Remoting::Messaging::ArgInfo, 0x28>, "Size mismatch!");

} // namespace System::Runtime::Remoting::Messaging
NEED_NO_BOX(::System::Runtime::Remoting::Messaging::ArgInfo);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Messaging::ArgInfo*, "System.Runtime.Remoting.Messaging", "ArgInfo");
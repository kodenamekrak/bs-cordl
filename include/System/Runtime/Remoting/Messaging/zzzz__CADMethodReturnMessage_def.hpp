#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/Remoting/Messaging/zzzz__CADMessageBase_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CADMethodReturnMessage)
namespace System::Runtime::Remoting::Messaging {
class IMessage;
}
namespace System {
class Exception;
}
namespace System::Runtime::Remoting::Messaging {
class IMethodReturnMessage;
}
namespace System::Collections {
class ArrayList;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
namespace System::Runtime::Remoting::Messaging {
class CADArgHolder;
}
// Forward declare root types
namespace System::Runtime::Remoting::Messaging {
class CADMethodReturnMessage;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Remoting::Messaging::CADMethodReturnMessage);
// Type: System.Runtime.Remoting.Messaging::CADMethodReturnMessage
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Runtime::Remoting::Messaging {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3155))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3157))
// CS Name: ::System.Runtime.Remoting.Messaging::CADMethodReturnMessage*
class CORDL_TYPE CADMethodReturnMessage : public ::System::Runtime::Remoting::Messaging::CADMessageBase {
public:
  // Declarations
  /// @brief Field _returnValue, offset 0x38, size 0x8
  __declspec(property(get = __get__returnValue, put = __set__returnValue))::System::Object* _returnValue;

  /// @brief Field _exception, offset 0x40, size 0x8
  __declspec(property(get = __get__exception, put = __set__exception))::System::Runtime::Remoting::Messaging::CADArgHolder* _exception;

  /// @brief Field _sig, offset 0x48, size 0x8
  __declspec(property(get = __get__sig, put = __set__sig))::ArrayW<::System::Type*, ::Array<::System::Type*>*> _sig;

  __declspec(property(get = get_PropertiesCount)) int32_t PropertiesCount;

  constexpr ::System::Object*& __get__returnValue();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __get__returnValue() const;

  constexpr void __set__returnValue(::System::Object* value);

  constexpr ::System::Runtime::Remoting::Messaging::CADArgHolder*& __get__exception();

  constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Remoting::Messaging::CADArgHolder*> const& __get__exception() const;

  constexpr void __set__exception(::System::Runtime::Remoting::Messaging::CADArgHolder* value);

  constexpr ::ArrayW<::System::Type*, ::Array<::System::Type*>*>& __get__sig();

  constexpr ::ArrayW<::System::Type*, ::Array<::System::Type*>*> const& __get__sig() const;

  constexpr void __set__sig(::ArrayW<::System::Type*, ::Array<::System::Type*>*> value);

  /// @brief Method Create addr 0x24aa504 size 0x90 virtual false final false
  static inline ::System::Runtime::Remoting::Messaging::CADMethodReturnMessage* Create(::System::Runtime::Remoting::Messaging::IMessage* callMsg);

  static inline ::System::Runtime::Remoting::Messaging::CADMethodReturnMessage* New_ctor(::System::Runtime::Remoting::Messaging::IMethodReturnMessage* retMsg);

  /// @brief Method .ctor addr 0x24aa594 size 0x37c virtual false final false
  inline void _ctor(::System::Runtime::Remoting::Messaging::IMethodReturnMessage* retMsg);

  /// @brief Method GetArguments addr 0x24aa910 size 0x140 virtual false final false
  inline ::System::Collections::ArrayList* GetArguments();

  /// @brief Method GetArgs addr 0x24aaa50 size 0x10 virtual false final false
  inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> GetArgs(::System::Collections::ArrayList* args);

  /// @brief Method GetReturnValue addr 0x24aaa60 size 0x10 virtual false final false
  inline ::System::Object* GetReturnValue(::System::Collections::ArrayList* args);

  /// @brief Method GetException addr 0x24aaa70 size 0xa4 virtual false final false
  inline ::System::Exception* GetException(::System::Collections::ArrayList* args);

  /// @brief Method get_PropertiesCount addr 0x24aab14 size 0x8 virtual false final false
  inline int32_t get_PropertiesCount();

  // Ctor Parameters [CppParam { name: "", ty: "CADMethodReturnMessage", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CADMethodReturnMessage(CADMethodReturnMessage&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CADMethodReturnMessage", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CADMethodReturnMessage(CADMethodReturnMessage const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CADMethodReturnMessage();

public:
  /// @brief Field _returnValue, offset: 0x38, size: 0x8, def value: None
  ::System::Object* ____returnValue;

  /// @brief Field _exception, offset: 0x40, size: 0x8, def value: None
  ::System::Runtime::Remoting::Messaging::CADArgHolder* ____exception;

  /// @brief Field _sig, offset: 0x48, size: 0x8, def value: None
  ::ArrayW<::System::Type*, ::Array<::System::Type*>*> ____sig;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Remoting::Messaging::CADMethodReturnMessage, 0x50>, "Size mismatch!");

} // namespace System::Runtime::Remoting::Messaging
NEED_NO_BOX(::System::Runtime::Remoting::Messaging::CADMethodReturnMessage);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Messaging::CADMethodReturnMessage*, "System.Runtime.Remoting.Messaging", "CADMethodReturnMessage");
#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ObjRef)
namespace System::Runtime::Remoting {
class IChannelInfo;
}
namespace System::Runtime::Serialization {
class IObjectReference;
}
namespace System {
class Type;
}
namespace System {
class Object;
}
namespace System::Runtime::Remoting {
class IRemotingTypeInfo;
}
namespace System::Runtime::Serialization {
class ISerializable;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Remoting {
class IEnvoyInfo;
}
// Forward declare root types
namespace System::Runtime::Remoting {
class ObjRef;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Remoting::ObjRef);
// Type: System.Runtime.Remoting::ObjRef
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Runtime::Remoting {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3063))
// CS Name: ::System.Runtime.Remoting::ObjRef*
class CORDL_TYPE ObjRef : public ::System::Object {
public:
  // Declarations
  /// @brief Field channel_info, offset 0x10, size 0x8
  __declspec(property(get = __get_channel_info, put = __set_channel_info))::System::Runtime::Remoting::IChannelInfo* channel_info;

  /// @brief Field uri, offset 0x18, size 0x8
  __declspec(property(get = __get_uri, put = __set_uri))::StringW uri;

  /// @brief Field typeInfo, offset 0x20, size 0x8
  __declspec(property(get = __get_typeInfo, put = __set_typeInfo))::System::Runtime::Remoting::IRemotingTypeInfo* typeInfo;

  /// @brief Field envoyInfo, offset 0x28, size 0x8
  __declspec(property(get = __get_envoyInfo, put = __set_envoyInfo))::System::Runtime::Remoting::IEnvoyInfo* envoyInfo;

  /// @brief Field flags, offset 0x30, size 0x4
  __declspec(property(get = __get_flags, put = __set_flags)) int32_t flags;

  /// @brief Field _serverType, offset 0x38, size 0x8
  __declspec(property(get = __get__serverType, put = __set__serverType))::System::Type* _serverType;

  /// @brief Field MarshalledObjectRef, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_MarshalledObjectRef, put = setStaticF_MarshalledObjectRef)) int32_t MarshalledObjectRef;

  /// @brief Field WellKnowObjectRef, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_WellKnowObjectRef, put = setStaticF_WellKnowObjectRef)) int32_t WellKnowObjectRef;

  __declspec(property(get = get_IsReferenceToWellKnow)) bool IsReferenceToWellKnow;

  __declspec(property(get = get_ChannelInfo))::System::Runtime::Remoting::IChannelInfo* ChannelInfo;

  __declspec(property(get = get_EnvoyInfo, put = set_EnvoyInfo))::System::Runtime::Remoting::IEnvoyInfo* EnvoyInfo;

  __declspec(property(get = get_TypeInfo, put = set_TypeInfo))::System::Runtime::Remoting::IRemotingTypeInfo* TypeInfo;

  __declspec(property(get = get_URI, put = set_URI))::StringW URI;

  __declspec(property(get = get_ServerType))::System::Type* ServerType;

  /// @brief Convert operator to "::System::Runtime::Serialization::IObjectReference"
  constexpr operator ::System::Runtime::Serialization::IObjectReference*() noexcept;

  /// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
  constexpr operator ::System::Runtime::Serialization::ISerializable*() noexcept;

  constexpr ::System::Runtime::Remoting::IChannelInfo*& __get_channel_info();

  constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Remoting::IChannelInfo*> const& __get_channel_info() const;

  constexpr void __set_channel_info(::System::Runtime::Remoting::IChannelInfo* value);

  constexpr ::StringW& __get_uri();

  constexpr ::StringW const& __get_uri() const;

  constexpr void __set_uri(::StringW value);

  constexpr ::System::Runtime::Remoting::IRemotingTypeInfo*& __get_typeInfo();

  constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Remoting::IRemotingTypeInfo*> const& __get_typeInfo() const;

  constexpr void __set_typeInfo(::System::Runtime::Remoting::IRemotingTypeInfo* value);

  constexpr ::System::Runtime::Remoting::IEnvoyInfo*& __get_envoyInfo();

  constexpr ::cordl_internals::to_const_pointer<::System::Runtime::Remoting::IEnvoyInfo*> const& __get_envoyInfo() const;

  constexpr void __set_envoyInfo(::System::Runtime::Remoting::IEnvoyInfo* value);

  constexpr int32_t& __get_flags();

  constexpr int32_t const& __get_flags() const;

  constexpr void __set_flags(int32_t value);

  constexpr ::System::Type*& __get__serverType();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __get__serverType() const;

  constexpr void __set__serverType(::System::Type* value);

  static inline void setStaticF_MarshalledObjectRef(int32_t value);

  static inline int32_t getStaticF_MarshalledObjectRef();

  static inline void setStaticF_WellKnowObjectRef(int32_t value);

  static inline int32_t getStaticF_WellKnowObjectRef();

  static inline ::System::Runtime::Remoting::ObjRef* New_ctor();

  /// @brief Method .ctor addr 0x2485a34 size 0x1c virtual false final false
  inline void _ctor();

  static inline ::System::Runtime::Remoting::ObjRef* New_ctor(::StringW uri, ::System::Runtime::Remoting::IChannelInfo* cinfo);

  /// @brief Method .ctor addr 0x2485aac size 0x2c virtual false final false
  inline void _ctor(::StringW uri, ::System::Runtime::Remoting::IChannelInfo* cinfo);

  /// @brief Method DeserializeInTheCurrentDomain addr 0x2485ad8 size 0x12c virtual false final false
  inline ::System::Runtime::Remoting::ObjRef* DeserializeInTheCurrentDomain(int32_t domainId, ::ArrayW<uint8_t, ::Array<uint8_t>*> tInfo);

  /// @brief Method SerializeType addr 0x2485c04 size 0x7c virtual false final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> SerializeType();

  static inline ::System::Runtime::Remoting::ObjRef* New_ctor(::System::Type* type, ::StringW url, ::System::Object* remoteChannelData);

  /// @brief Method .ctor addr 0x2485c80 size 0x100 virtual false final false
  inline void _ctor(::System::Type* type, ::StringW url, ::System::Object* remoteChannelData);

  static inline ::System::Runtime::Remoting::ObjRef* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method .ctor addr 0x2485d80 size 0x534 virtual false final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method get_IsReferenceToWellKnow addr 0x24862b4 size 0x68 virtual false final false
  inline bool get_IsReferenceToWellKnow();

  /// @brief Method get_ChannelInfo addr 0x248631c size 0x8 virtual true final false
  inline ::System::Runtime::Remoting::IChannelInfo* get_ChannelInfo();

  /// @brief Method get_EnvoyInfo addr 0x2486324 size 0x8 virtual true final false
  inline ::System::Runtime::Remoting::IEnvoyInfo* get_EnvoyInfo();

  /// @brief Method set_EnvoyInfo addr 0x248632c size 0x8 virtual true final false
  inline void set_EnvoyInfo(::System::Runtime::Remoting::IEnvoyInfo* value);

  /// @brief Method get_TypeInfo addr 0x2486334 size 0x8 virtual true final false
  inline ::System::Runtime::Remoting::IRemotingTypeInfo* get_TypeInfo();

  /// @brief Method set_TypeInfo addr 0x248633c size 0x8 virtual true final false
  inline void set_TypeInfo(::System::Runtime::Remoting::IRemotingTypeInfo* value);

  /// @brief Method get_URI addr 0x2486344 size 0x8 virtual true final false
  inline ::StringW get_URI();

  /// @brief Method set_URI addr 0x248634c size 0x8 virtual true final false
  inline void set_URI(::StringW value);

  /// @brief Method GetObjectData addr 0x2486354 size 0x1d8 virtual true final false
  inline void GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method GetRealObject addr 0x248652c size 0xa4 virtual true final false
  inline ::System::Object* GetRealObject(::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method UpdateChannelInfo addr 0x2485a50 size 0x5c virtual false final false
  inline void UpdateChannelInfo();

  /// @brief Method get_ServerType addr 0x2486628 size 0x144 virtual false final false
  inline ::System::Type* get_ServerType();

  // Ctor Parameters [CppParam { name: "", ty: "ObjRef", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ObjRef(ObjRef&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ObjRef", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ObjRef(ObjRef const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ObjRef();

public:
  /// @brief Field channel_info, offset: 0x10, size: 0x8, def value: None
  ::System::Runtime::Remoting::IChannelInfo* ___channel_info;

  /// @brief Field uri, offset: 0x18, size: 0x8, def value: None
  ::StringW ___uri;

  /// @brief Field typeInfo, offset: 0x20, size: 0x8, def value: None
  ::System::Runtime::Remoting::IRemotingTypeInfo* ___typeInfo;

  /// @brief Field envoyInfo, offset: 0x28, size: 0x8, def value: None
  ::System::Runtime::Remoting::IEnvoyInfo* ___envoyInfo;

  /// @brief Field flags, offset: 0x30, size: 0x4, def value: None
  int32_t ___flags;

  /// @brief Field _serverType, offset: 0x38, size: 0x8, def value: None
  ::System::Type* ____serverType;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Remoting::ObjRef, 0x40>, "Size mismatch!");

} // namespace System::Runtime::Remoting
NEED_NO_BOX(::System::Runtime::Remoting::ObjRef);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::ObjRef*, "System.Runtime.Remoting", "ObjRef");
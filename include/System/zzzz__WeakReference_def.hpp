#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/InteropServices/zzzz__GCHandle_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(WeakReference)
namespace System::Runtime::Serialization {
class ISerializable;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System {
class Object;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
// Forward declare root types
namespace System {
class WeakReference;
}
// Write type traits
MARK_REF_PTR_T(::System::WeakReference);
// Type: System::WeakReference
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(3336))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2642))
// CS Name: ::System::WeakReference*
class CORDL_TYPE WeakReference : public ::System::Object {
public:
  // Declarations
  /// @brief Field isLongReference, offset 0x10, size 0x1
  __declspec(property(get = __get_isLongReference, put = __set_isLongReference)) bool isLongReference;

  /// @brief Field gcHandle, offset 0x18, size 0x8
  __declspec(property(get = __get_gcHandle, put = __set_gcHandle))::System::Runtime::InteropServices::GCHandle gcHandle;

  __declspec(property(get = get_IsAlive)) bool IsAlive;

  __declspec(property(get = get_Target, put = set_Target))::System::Object* Target;

  __declspec(property(get = get_TrackResurrection)) bool TrackResurrection;

  /// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
  constexpr operator ::System::Runtime::Serialization::ISerializable*() noexcept;

  constexpr bool& __get_isLongReference();

  constexpr bool const& __get_isLongReference() const;

  constexpr void __set_isLongReference(bool value);

  constexpr ::System::Runtime::InteropServices::GCHandle& __get_gcHandle();

  constexpr ::System::Runtime::InteropServices::GCHandle const& __get_gcHandle() const;

  constexpr void __set_gcHandle(::System::Runtime::InteropServices::GCHandle value);

  /// @brief Method AllocateHandle addr 0x2609100 size 0x28 virtual false final false
  inline void AllocateHandle(::System::Object* target);

  static inline ::System::WeakReference* New_ctor();

  /// @brief Method .ctor addr 0x2609128 size 0x8 virtual false final false
  inline void _ctor();

  static inline ::System::WeakReference* New_ctor(::System::Object* target);

  /// @brief Method .ctor addr 0x2609130 size 0x30 virtual false final false
  inline void _ctor(::System::Object* target);

  static inline ::System::WeakReference* New_ctor(::System::Object* target, bool trackResurrection);

  /// @brief Method .ctor addr 0x2609160 size 0x34 virtual false final false
  inline void _ctor(::System::Object* target, bool trackResurrection);

  static inline ::System::WeakReference* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method .ctor addr 0x2609194 size 0x138 virtual false final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method get_IsAlive addr 0x26092cc size 0x20 virtual true final false
  inline bool get_IsAlive();

  /// @brief Method get_Target addr 0x26092ec size 0x34 virtual true final false
  inline ::System::Object* get_Target();

  /// @brief Method set_Target addr 0x2609320 size 0xc virtual true final false
  inline void set_Target(::System::Object* value);

  /// @brief Method get_TrackResurrection addr 0x260932c size 0x8 virtual true final false
  inline bool get_TrackResurrection();

  /// @brief Method Finalize addr 0x2609334 size 0x9c virtual true final false
  inline void Finalize();

  /// @brief Method GetObjectData addr 0x26093d0 size 0x184 virtual true final false
  inline void GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  // Ctor Parameters [CppParam { name: "", ty: "WeakReference", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  WeakReference(WeakReference&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "WeakReference", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  WeakReference(WeakReference const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr WeakReference();

public:
  /// @brief Field isLongReference, offset: 0x10, size: 0x1, def value: None
  bool ___isLongReference;

  /// @brief Field gcHandle, offset: 0x18, size: 0x8, def value: None
  ::System::Runtime::InteropServices::GCHandle ___gcHandle;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::WeakReference, 0x20>, "Size mismatch!");

} // namespace System
NEED_NO_BOX(::System::WeakReference);
DEFINE_IL2CPP_ARG_TYPE(::System::WeakReference*, "System", "WeakReference");
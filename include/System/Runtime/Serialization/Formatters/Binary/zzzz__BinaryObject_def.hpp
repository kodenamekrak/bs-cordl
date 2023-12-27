#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BinaryObject)
namespace System::Runtime::Serialization::Formatters::Binary {
class __BinaryWriter;
}
namespace System::Runtime::Serialization::Formatters::Binary {
class __BinaryParser;
}
// Forward declare root types
namespace System::Runtime::Serialization::Formatters::Binary {
class BinaryObject;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Serialization::Formatters::Binary::BinaryObject);
// Type: System.Runtime.Serialization.Formatters.Binary::BinaryObject
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Runtime::Serialization::Formatters::Binary {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3261))
// CS Name: ::System.Runtime.Serialization.Formatters.Binary::BinaryObject*
class CORDL_TYPE BinaryObject : public ::System::Object {
public:
  // Declarations
  /// @brief Field objectId, offset 0x10, size 0x4
  __declspec(property(get = __get_objectId, put = __set_objectId)) int32_t objectId;

  /// @brief Field mapId, offset 0x14, size 0x4
  __declspec(property(get = __get_mapId, put = __set_mapId)) int32_t mapId;

  constexpr int32_t& __get_objectId();

  constexpr int32_t const& __get_objectId() const;

  constexpr void __set_objectId(int32_t value);

  constexpr int32_t& __get_mapId();

  constexpr int32_t const& __get_mapId() const;

  constexpr void __set_mapId(int32_t value);

  static inline ::System::Runtime::Serialization::Formatters::Binary::BinaryObject* New_ctor();

  /// @brief Method .ctor addr 0x24c1ee4 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method Set addr 0x24c1eec size 0x8 virtual false final false
  inline void Set(int32_t objectId, int32_t mapId);

  /// @brief Method Write addr 0x24c1ef4 size 0x70 virtual true final true
  inline void Write(::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter* sout);

  /// @brief Method Read addr 0x24c1f64 size 0x44 virtual true final true
  inline void Read(::System::Runtime::Serialization::Formatters::Binary::__BinaryParser* input);

  /// @brief Method Dump addr 0x24c1fa8 size 0x4 virtual false final false
  inline void Dump();

  // Ctor Parameters [CppParam { name: "", ty: "BinaryObject", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BinaryObject(BinaryObject&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BinaryObject", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BinaryObject(BinaryObject const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BinaryObject();

public:
  /// @brief Field objectId, offset: 0x10, size: 0x4, def value: None
  int32_t ___objectId;

  /// @brief Field mapId, offset: 0x14, size: 0x4, def value: None
  int32_t ___mapId;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::Formatters::Binary::BinaryObject, 0x18>, "Size mismatch!");

} // namespace System::Runtime::Serialization::Formatters::Binary
NEED_NO_BOX(::System::Runtime::Serialization::Formatters::Binary::BinaryObject);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::Formatters::Binary::BinaryObject*, "System.Runtime.Serialization.Formatters.Binary", "BinaryObject");
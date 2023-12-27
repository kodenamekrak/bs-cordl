#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(JsonConverter)
namespace System {
class Type;
}
namespace Newtonsoft::Json {
class JsonSerializer;
}
namespace Newtonsoft::Json {
class JsonWriter;
}
namespace Newtonsoft::Json {
class JsonReader;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Newtonsoft::Json {
class JsonConverter;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::JsonConverter);
// Type: Newtonsoft.Json::JsonConverter
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Newtonsoft::Json {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11830))
// CS Name: ::Newtonsoft.Json::JsonConverter*
class CORDL_TYPE JsonConverter : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_CanRead)) bool CanRead;

  __declspec(property(get = get_CanWrite)) bool CanWrite;

  /// @brief Method WriteJson addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void WriteJson(::Newtonsoft::Json::JsonWriter* writer, ::System::Object* value, ::Newtonsoft::Json::JsonSerializer* serializer);

  /// @brief Method ReadJson addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::System::Object* ReadJson(::Newtonsoft::Json::JsonReader* reader, ::System::Type* objectType, ::System::Object* existingValue, ::Newtonsoft::Json::JsonSerializer* serializer);

  /// @brief Method CanConvert addr 0x0 size 0xffffffffffffffff virtual true final false
  inline bool CanConvert(::System::Type* objectType);

  /// @brief Method get_CanRead addr 0x264a514 size 0x8 virtual true final false
  inline bool get_CanRead();

  /// @brief Method get_CanWrite addr 0x264a51c size 0x8 virtual true final false
  inline bool get_CanWrite();

  static inline ::Newtonsoft::Json::JsonConverter* New_ctor();

  /// @brief Method .ctor addr 0x264a524 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "JsonConverter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  JsonConverter(JsonConverter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "JsonConverter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  JsonConverter(JsonConverter const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr JsonConverter();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::JsonConverter, 0x10>, "Size mismatch!");

} // namespace Newtonsoft::Json
NEED_NO_BOX(::Newtonsoft::Json::JsonConverter);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::JsonConverter*, "Newtonsoft.Json", "JsonConverter");
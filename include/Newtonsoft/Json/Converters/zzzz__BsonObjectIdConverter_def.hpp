#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/zzzz__JsonConverter_def.hpp"
CORDL_MODULE_EXPORT(BsonObjectIdConverter)
namespace Newtonsoft::Json {
class JsonReader;
}
namespace System {
class Type;
}
namespace System {
class Object;
}
namespace Newtonsoft::Json {
class JsonWriter;
}
namespace Newtonsoft::Json {
class JsonSerializer;
}
// Forward declare root types
namespace Newtonsoft::Json::Converters {
class BsonObjectIdConverter;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Converters::BsonObjectIdConverter);
// Type: Newtonsoft.Json.Converters::BsonObjectIdConverter
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Converters {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11830))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12036))
// CS Name: ::Newtonsoft.Json.Converters::BsonObjectIdConverter*
class CORDL_TYPE BsonObjectIdConverter : public ::Newtonsoft::Json::JsonConverter {
public:
  // Declarations
  /// @brief Method WriteJson addr 0x26b4ad4 size 0x100 virtual true final false
  inline void WriteJson(::Newtonsoft::Json::JsonWriter* writer, ::System::Object* value, ::Newtonsoft::Json::JsonSerializer* serializer);

  /// @brief Method ReadJson addr 0x26b4bd4 size 0x190 virtual true final false
  inline ::System::Object* ReadJson(::Newtonsoft::Json::JsonReader* reader, ::System::Type* objectType, ::System::Object* existingValue, ::Newtonsoft::Json::JsonSerializer* serializer);

  /// @brief Method CanConvert addr 0x26b4d64 size 0x84 virtual true final false
  inline bool CanConvert(::System::Type* objectType);

  static inline ::Newtonsoft::Json::Converters::BsonObjectIdConverter* New_ctor();

  /// @brief Method .ctor addr 0x26b4de8 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "BsonObjectIdConverter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BsonObjectIdConverter(BsonObjectIdConverter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BsonObjectIdConverter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BsonObjectIdConverter(BsonObjectIdConverter const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BsonObjectIdConverter();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Converters::BsonObjectIdConverter, 0x10>, "Size mismatch!");

} // namespace Newtonsoft::Json::Converters
NEED_NO_BOX(::Newtonsoft::Json::Converters::BsonObjectIdConverter);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Converters::BsonObjectIdConverter*, "Newtonsoft.Json.Converters", "BsonObjectIdConverter");
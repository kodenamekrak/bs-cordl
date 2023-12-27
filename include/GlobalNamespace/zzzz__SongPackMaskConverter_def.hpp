#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/zzzz__JsonConverter_def.hpp"
CORDL_MODULE_EXPORT(SongPackMaskConverter)
namespace Newtonsoft::Json {
class JsonSerializer;
}
namespace System {
class Type;
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
namespace GlobalNamespace {
class SongPackMaskConverter;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SongPackMaskConverter);
// Type: ::SongPackMaskConverter
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11830))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15048))
// CS Name: ::SongPackMaskConverter*
class CORDL_TYPE SongPackMaskConverter : public ::Newtonsoft::Json::JsonConverter {
public:
  // Declarations
  /// @brief Method CanConvert addr 0x12a9f3c size 0x88 virtual true final false
  inline bool CanConvert(::System::Type* objectType);

  /// @brief Method ReadJson addr 0x12a9fc4 size 0x94 virtual true final false
  inline ::System::Object* ReadJson(::Newtonsoft::Json::JsonReader* reader, ::System::Type* objectType, ::System::Object* existingValue, ::Newtonsoft::Json::JsonSerializer* serializer);

  /// @brief Method WriteJson addr 0x12aa058 size 0xb0 virtual true final false
  inline void WriteJson(::Newtonsoft::Json::JsonWriter* writer, ::System::Object* value, ::Newtonsoft::Json::JsonSerializer* serializer);

  static inline ::GlobalNamespace::SongPackMaskConverter* New_ctor();

  /// @brief Method .ctor addr 0x12aa108 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "SongPackMaskConverter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SongPackMaskConverter(SongPackMaskConverter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SongPackMaskConverter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SongPackMaskConverter(SongPackMaskConverter const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SongPackMaskConverter();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SongPackMaskConverter, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SongPackMaskConverter);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SongPackMaskConverter*, "", "SongPackMaskConverter");
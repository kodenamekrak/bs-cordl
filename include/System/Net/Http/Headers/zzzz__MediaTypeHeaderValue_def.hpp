#pragma once
// IWYU pragma private; include "System/Net/Http/Headers/MediaTypeHeaderValue.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MediaTypeHeaderValue)
namespace System::Collections::Generic {
template <typename T> class ICollection_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Net::Http::Headers {
class Lexer;
}
namespace System::Net::Http::Headers {
class NameValueHeaderValue;
}
namespace System::Net::Http::Headers {
struct Token;
}
namespace System::Net::Http::Headers {
class __MediaTypeHeaderValue____c;
}
namespace System {
class ICloneable;
}
namespace System {
template <typename T> struct Nullable_1;
}
namespace System {
class Object;
}
namespace System {
template <typename T> class Predicate_1;
}
// Forward declare root types
namespace System::Net::Http::Headers {
class MediaTypeHeaderValue;
}
namespace System::Net::Http::Headers {
class __MediaTypeHeaderValue____c;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::Http::Headers::MediaTypeHeaderValue);
MARK_REF_PTR_T(::System::Net::Http::Headers::__MediaTypeHeaderValue____c);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Net::Http::Headers {
// Is value type: false
// CS Name: ::MediaTypeHeaderValue::<>c*
class CORDL_TYPE __MediaTypeHeaderValue____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::System::Net::Http::Headers::__MediaTypeHeaderValue____c* __9;

  /// @brief Field <>9__6_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__6_0, put = setStaticF___9__6_0)) ::System::Predicate_1<::System::Net::Http::Headers::NameValueHeaderValue*>* __9__6_0;

  static inline ::System::Net::Http::Headers::__MediaTypeHeaderValue____c* New_ctor();

  /// @brief Method .ctor, addr 0x41c16dc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <get_CharSet>b__6_0, addr 0x41c16e4, size 0x58, virtual false, abstract: false, final false
  inline bool _get_CharSet_b__6_0(::System::Net::Http::Headers::NameValueHeaderValue* l);

  static inline ::System::Net::Http::Headers::__MediaTypeHeaderValue____c* getStaticF___9();

  static inline ::System::Predicate_1<::System::Net::Http::Headers::NameValueHeaderValue*>* getStaticF___9__6_0();

  static inline void setStaticF___9(::System::Net::Http::Headers::__MediaTypeHeaderValue____c* value);

  static inline void setStaticF___9__6_0(::System::Predicate_1<::System::Net::Http::Headers::NameValueHeaderValue*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MediaTypeHeaderValue____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__MediaTypeHeaderValue____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MediaTypeHeaderValue____c(__MediaTypeHeaderValue____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MediaTypeHeaderValue____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MediaTypeHeaderValue____c(__MediaTypeHeaderValue____c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16681 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::Http::Headers::__MediaTypeHeaderValue____c, 0x10>, "Size mismatch!");

} // namespace System::Net::Http::Headers
// Type: System.Net.Http.Headers::MediaTypeHeaderValue
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Net::Http::Headers {
// Is value type: false
// CS Name: ::System.Net.Http.Headers::MediaTypeHeaderValue*
class CORDL_TYPE MediaTypeHeaderValue : public ::System::Object {
public:
  // Declarations
  using __c = ::System::Net::Http::Headers::__MediaTypeHeaderValue____c;

  __declspec(property(get = get_CharSet, put = set_CharSet)) ::StringW CharSet;

  __declspec(property(put = set_MediaType)) ::StringW MediaType;

  __declspec(property(get = get_Parameters)) ::System::Collections::Generic::ICollection_1<::System::Net::Http::Headers::NameValueHeaderValue*>* Parameters;

  /// @brief Field media_type, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_media_type, put = __cordl_internal_set_media_type)) ::StringW media_type;

  /// @brief Field parameters, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_parameters,
                      put = __cordl_internal_set_parameters)) ::System::Collections::Generic::List_1<::System::Net::Http::Headers::NameValueHeaderValue*>* parameters;

  /// @brief Convert operator to "::System::ICloneable"
  constexpr operator ::System::ICloneable*() noexcept;

  /// @brief Method Equals, addr 0x41c1350, size 0xc8, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode, addr 0x41c1418, size 0x7c, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  static inline ::System::Net::Http::Headers::MediaTypeHeaderValue* New_ctor();

  static inline ::System::Net::Http::Headers::MediaTypeHeaderValue* New_ctor(::StringW mediaType);

  static inline ::System::Net::Http::Headers::MediaTypeHeaderValue* New_ctor(::System::Net::Http::Headers::MediaTypeHeaderValue* source);

  /// @brief Method System.ICloneable.Clone, addr 0x41c12f8, size 0x58, virtual true, abstract: false, final true
  inline ::System::Object* System_ICloneable_Clone();

  /// @brief Method ToString, addr 0x41c1494, size 0x6c, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method TryParse, addr 0x41c1500, size 0x180, virtual false, abstract: false, final false
  static inline bool TryParse(::StringW input, ByRef<::System::Net::Http::Headers::MediaTypeHeaderValue*> parsedValue);

  /// @brief Method TryParseMediaType, addr 0x41c1170, size 0x188, virtual false, abstract: false, final false
  static inline ::System::Nullable_1<::System::Net::Http::Headers::Token> TryParseMediaType(::System::Net::Http::Headers::Lexer* lexer, ByRef<::StringW> media);

  constexpr ::StringW const& __cordl_internal_get_media_type() const;

  constexpr ::StringW& __cordl_internal_get_media_type();

  constexpr ::System::Collections::Generic::List_1<::System::Net::Http::Headers::NameValueHeaderValue*>*& __cordl_internal_get_parameters();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::System::Net::Http::Headers::NameValueHeaderValue*>*> const& __cordl_internal_get_parameters() const;

  constexpr void __cordl_internal_set_media_type(::StringW value);

  constexpr void __cordl_internal_set_parameters(::System::Collections::Generic::List_1<::System::Net::Http::Headers::NameValueHeaderValue*>* value);

  /// @brief Method .ctor, addr 0x41c1168, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x41b82fc, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::StringW mediaType);

  /// @brief Method .ctor, addr 0x41c0e88, size 0x268, virtual false, abstract: false, final false
  inline void _ctor(::System::Net::Http::Headers::MediaTypeHeaderValue* source);

  /// @brief Method get_CharSet, addr 0x41b6eac, size 0x10c, virtual false, abstract: false, final false
  inline ::StringW get_CharSet();

  /// @brief Method get_Parameters, addr 0x41c10f0, size 0x78, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::ICollection_1<::System::Net::Http::Headers::NameValueHeaderValue*>* get_Parameters();

  /// @brief Convert to "::System::ICloneable"
  constexpr ::System::ICloneable* i___System__ICloneable() noexcept;

  /// @brief Method set_CharSet, addr 0x41b8328, size 0xa0, virtual false, abstract: false, final false
  inline void set_CharSet(::StringW value);

  /// @brief Method set_MediaType, addr 0x41c0d30, size 0x158, virtual false, abstract: false, final false
  inline void set_MediaType(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MediaTypeHeaderValue();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MediaTypeHeaderValue", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MediaTypeHeaderValue(MediaTypeHeaderValue&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MediaTypeHeaderValue", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MediaTypeHeaderValue(MediaTypeHeaderValue const&) = delete;

  /// @brief Field parameters, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::System::Net::Http::Headers::NameValueHeaderValue*>* ___parameters;

  /// @brief Field media_type, offset: 0x18, size: 0x8, def value: None
  ::StringW ___media_type;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16682 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::Http::Headers::MediaTypeHeaderValue, 0x20>, "Size mismatch!");

static_assert(offsetof(::System::Net::Http::Headers::MediaTypeHeaderValue, ___parameters) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Net::Http::Headers::MediaTypeHeaderValue, ___media_type) == 0x18, "Offset mismatch!");

} // namespace System::Net::Http::Headers
NEED_NO_BOX(::System::Net::Http::Headers::MediaTypeHeaderValue);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Http::Headers::MediaTypeHeaderValue*, "System.Net.Http.Headers", "MediaTypeHeaderValue");
NEED_NO_BOX(::System::Net::Http::Headers::__MediaTypeHeaderValue____c);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Http::Headers::__MediaTypeHeaderValue____c*, "System.Net.Http.Headers", "MediaTypeHeaderValue/<>c");

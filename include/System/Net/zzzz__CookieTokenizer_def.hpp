#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Net/zzzz__CookieToken_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CookieTokenizer)
namespace System::Net {
struct CookieToken;
}
namespace System::Net {
struct __CookieTokenizer__RecognizedAttribute;
}
// Forward declare root types
namespace System::Net {
class CookieTokenizer;
}
namespace System::Net {
struct __CookieTokenizer__RecognizedAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::CookieTokenizer);
MARK_VAL_T(::System::Net::__CookieTokenizer__RecognizedAttribute);
// Type: ::RecognizedAttribute
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 28, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Net {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9121))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9122))
// CS Name: ::CookieTokenizer::RecognizedAttribute
struct CORDL_TYPE __CookieTokenizer__RecognizedAttribute {
public:
  // Declarations
  __declspec(property(get = get_Token))::System::Net::CookieToken Token;

  /// @brief Method .ctor addr 0x29ad630 size 0xc virtual false final false
  inline void _ctor(::StringW name, ::System::Net::CookieToken token);

  /// @brief Method get_Token addr 0x29ad63c size 0x8 virtual false final false
  inline ::System::Net::CookieToken get_Token();

  /// @brief Method IsEqualTo addr 0x29ad2fc size 0x24 virtual false final false
  inline bool IsEqualTo(::StringW value);

  // Ctor Parameters [CppParam { name: "m_name", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "m_token", ty: "::System::Net::CookieToken", modifiers: "", def_value: None }]
  constexpr __CookieTokenizer__RecognizedAttribute(::StringW m_name, ::System::Net::CookieToken m_token) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __CookieTokenizer__RecognizedAttribute();

  /// @brief Field m_name, offset: 0x0, size: 0x8, def value: None
  ::StringW m_name;

  /// @brief Field m_token, offset: 0x8, size: 0x4, def value: None
  ::System::Net::CookieToken m_token;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::__CookieTokenizer__RecognizedAttribute, 0x10>, "Size mismatch!");

} // namespace System::Net
// Type: System.Net::CookieTokenizer
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Net {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9121)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9123))
// CS Name: ::System.Net::CookieTokenizer*
class CORDL_TYPE CookieTokenizer : public ::System::Object {
public:
  // Declarations
  using RecognizedAttribute = ::System::Net::__CookieTokenizer__RecognizedAttribute;

  /// @brief Field m_eofCookie, offset 0x10, size 0x1
  __declspec(property(get = __get_m_eofCookie, put = __set_m_eofCookie)) bool m_eofCookie;

  /// @brief Field m_index, offset 0x14, size 0x4
  __declspec(property(get = __get_m_index, put = __set_m_index)) int32_t m_index;

  /// @brief Field m_length, offset 0x18, size 0x4
  __declspec(property(get = __get_m_length, put = __set_m_length)) int32_t m_length;

  /// @brief Field m_name, offset 0x20, size 0x8
  __declspec(property(get = __get_m_name, put = __set_m_name))::StringW m_name;

  /// @brief Field m_quoted, offset 0x28, size 0x1
  __declspec(property(get = __get_m_quoted, put = __set_m_quoted)) bool m_quoted;

  /// @brief Field m_start, offset 0x2c, size 0x4
  __declspec(property(get = __get_m_start, put = __set_m_start)) int32_t m_start;

  /// @brief Field m_token, offset 0x30, size 0x4
  __declspec(property(get = __get_m_token, put = __set_m_token))::System::Net::CookieToken m_token;

  /// @brief Field m_tokenLength, offset 0x34, size 0x4
  __declspec(property(get = __get_m_tokenLength, put = __set_m_tokenLength)) int32_t m_tokenLength;

  /// @brief Field m_tokenStream, offset 0x38, size 0x8
  __declspec(property(get = __get_m_tokenStream, put = __set_m_tokenStream))::StringW m_tokenStream;

  /// @brief Field m_value, offset 0x40, size 0x8
  __declspec(property(get = __get_m_value, put = __set_m_value))::StringW m_value;

  /// @brief Field RecognizedAttributes, offset 0xffffffff, size 0x8
  static __declspec(property(
      get = getStaticF_RecognizedAttributes,
      put = setStaticF_RecognizedAttributes))::ArrayW<::System::Net::__CookieTokenizer__RecognizedAttribute, ::Array<::System::Net::__CookieTokenizer__RecognizedAttribute>*> RecognizedAttributes;

  /// @brief Field RecognizedServerAttributes, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_RecognizedServerAttributes,
                             put = setStaticF_RecognizedServerAttributes))::ArrayW<::System::Net::__CookieTokenizer__RecognizedAttribute,
                                                                                   ::Array<::System::Net::__CookieTokenizer__RecognizedAttribute>*> RecognizedServerAttributes;

  __declspec(property(get = get_EndOfCookie, put = set_EndOfCookie)) bool EndOfCookie;

  __declspec(property(get = get_Eof)) bool Eof;

  __declspec(property(get = get_Name, put = set_Name))::StringW Name;

  __declspec(property(get = get_Quoted, put = set_Quoted)) bool Quoted;

  __declspec(property(get = get_Token, put = set_Token))::System::Net::CookieToken Token;

  __declspec(property(get = get_Value, put = set_Value))::StringW Value;

  constexpr bool& __get_m_eofCookie();

  constexpr bool const& __get_m_eofCookie() const;

  constexpr void __set_m_eofCookie(bool value);

  constexpr int32_t& __get_m_index();

  constexpr int32_t const& __get_m_index() const;

  constexpr void __set_m_index(int32_t value);

  constexpr int32_t& __get_m_length();

  constexpr int32_t const& __get_m_length() const;

  constexpr void __set_m_length(int32_t value);

  constexpr ::StringW& __get_m_name();

  constexpr ::StringW const& __get_m_name() const;

  constexpr void __set_m_name(::StringW value);

  constexpr bool& __get_m_quoted();

  constexpr bool const& __get_m_quoted() const;

  constexpr void __set_m_quoted(bool value);

  constexpr int32_t& __get_m_start();

  constexpr int32_t const& __get_m_start() const;

  constexpr void __set_m_start(int32_t value);

  constexpr ::System::Net::CookieToken& __get_m_token();

  constexpr ::System::Net::CookieToken const& __get_m_token() const;

  constexpr void __set_m_token(::System::Net::CookieToken value);

  constexpr int32_t& __get_m_tokenLength();

  constexpr int32_t const& __get_m_tokenLength() const;

  constexpr void __set_m_tokenLength(int32_t value);

  constexpr ::StringW& __get_m_tokenStream();

  constexpr ::StringW const& __get_m_tokenStream() const;

  constexpr void __set_m_tokenStream(::StringW value);

  constexpr ::StringW& __get_m_value();

  constexpr ::StringW const& __get_m_value() const;

  constexpr void __set_m_value(::StringW value);

  static inline void setStaticF_RecognizedAttributes(::ArrayW<::System::Net::__CookieTokenizer__RecognizedAttribute, ::Array<::System::Net::__CookieTokenizer__RecognizedAttribute>*> value);

  static inline ::ArrayW<::System::Net::__CookieTokenizer__RecognizedAttribute, ::Array<::System::Net::__CookieTokenizer__RecognizedAttribute>*> getStaticF_RecognizedAttributes();

  static inline void setStaticF_RecognizedServerAttributes(::ArrayW<::System::Net::__CookieTokenizer__RecognizedAttribute, ::Array<::System::Net::__CookieTokenizer__RecognizedAttribute>*> value);

  static inline ::ArrayW<::System::Net::__CookieTokenizer__RecognizedAttribute, ::Array<::System::Net::__CookieTokenizer__RecognizedAttribute>*> getStaticF_RecognizedServerAttributes();

  static inline ::System::Net::CookieTokenizer* New_ctor(::StringW tokenStream);

  /// @brief Method .ctor addr 0x29acc0c size 0x38 virtual false final false
  inline void _ctor(::StringW tokenStream);

  /// @brief Method get_EndOfCookie addr 0x29acc44 size 0x8 virtual false final false
  inline bool get_EndOfCookie();

  /// @brief Method set_EndOfCookie addr 0x29acc4c size 0xc virtual false final false
  inline void set_EndOfCookie(bool value);

  /// @brief Method get_Eof addr 0x29acc58 size 0x10 virtual false final false
  inline bool get_Eof();

  /// @brief Method get_Name addr 0x29acc68 size 0x8 virtual false final false
  inline ::StringW get_Name();

  /// @brief Method set_Name addr 0x29acc70 size 0x8 virtual false final false
  inline void set_Name(::StringW value);

  /// @brief Method get_Quoted addr 0x29acc78 size 0x8 virtual false final false
  inline bool get_Quoted();

  /// @brief Method set_Quoted addr 0x29acc80 size 0xc virtual false final false
  inline void set_Quoted(bool value);

  /// @brief Method get_Token addr 0x29acc8c size 0x8 virtual false final false
  inline ::System::Net::CookieToken get_Token();

  /// @brief Method set_Token addr 0x29acc94 size 0x8 virtual false final false
  inline void set_Token(::System::Net::CookieToken value);

  /// @brief Method get_Value addr 0x29acc9c size 0x8 virtual false final false
  inline ::StringW get_Value();

  /// @brief Method set_Value addr 0x29acca4 size 0x8 virtual false final false
  inline void set_Value(::StringW value);

  /// @brief Method Extract addr 0x29accac size 0x88 virtual false final false
  inline ::StringW Extract();

  /// @brief Method FindNext addr 0x29acd34 size 0x2a4 virtual false final false
  inline ::System::Net::CookieToken FindNext(bool ignoreComma, bool ignoreEquals);

  /// @brief Method Next addr 0x29acfd8 size 0x100 virtual false final false
  inline ::System::Net::CookieToken Next(bool first, bool parseResponseCookies);

  /// @brief Method Reset addr 0x29ad0d8 size 0x68 virtual false final false
  inline void Reset();

  /// @brief Method TokenFromName addr 0x29ad140 size 0x1bc virtual false final false
  inline ::System::Net::CookieToken TokenFromName(bool parseResponseCookies);

  // Ctor Parameters [CppParam { name: "", ty: "CookieTokenizer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CookieTokenizer(CookieTokenizer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CookieTokenizer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CookieTokenizer(CookieTokenizer const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CookieTokenizer();

public:
  /// @brief Field m_eofCookie, offset: 0x10, size: 0x1, def value: None
  bool ___m_eofCookie;

  /// @brief Field m_index, offset: 0x14, size: 0x4, def value: None
  int32_t ___m_index;

  /// @brief Field m_length, offset: 0x18, size: 0x4, def value: None
  int32_t ___m_length;

  /// @brief Field m_name, offset: 0x20, size: 0x8, def value: None
  ::StringW ___m_name;

  /// @brief Field m_quoted, offset: 0x28, size: 0x1, def value: None
  bool ___m_quoted;

  /// @brief Field m_start, offset: 0x2c, size: 0x4, def value: None
  int32_t ___m_start;

  /// @brief Field m_token, offset: 0x30, size: 0x4, def value: None
  ::System::Net::CookieToken ___m_token;

  /// @brief Field m_tokenLength, offset: 0x34, size: 0x4, def value: None
  int32_t ___m_tokenLength;

  /// @brief Field m_tokenStream, offset: 0x38, size: 0x8, def value: None
  ::StringW ___m_tokenStream;

  /// @brief Field m_value, offset: 0x40, size: 0x8, def value: None
  ::StringW ___m_value;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::CookieTokenizer, 0x48>, "Size mismatch!");

} // namespace System::Net
NEED_NO_BOX(::System::Net::CookieTokenizer);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::CookieTokenizer*, "System.Net", "CookieTokenizer");
DEFINE_IL2CPP_ARG_TYPE(::System::Net::__CookieTokenizer__RecognizedAttribute, "System.Net", "CookieTokenizer/RecognizedAttribute");
#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/IO/zzzz__Stream_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ZInflaterInputStream)
namespace System::IO {
struct SeekOrigin;
}
namespace System::IO {
class Stream;
}
namespace Org::BouncyCastle::Utilities::Zlib {
class ZStream;
}
// Forward declare root types
namespace Org::BouncyCastle::Utilities::Zlib {
class ZInflaterInputStream;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Utilities::Zlib::ZInflaterInputStream);
// Type: Org.BouncyCastle.Utilities.Zlib::ZInflaterInputStream
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 81, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Utilities::Zlib {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3619))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1828))
// CS Name: ::Org.BouncyCastle.Utilities.Zlib::ZInflaterInputStream*
class CORDL_TYPE ZInflaterInputStream : public ::System::IO::Stream {
public:
  // Declarations
  /// @brief Field z, offset 0x28, size 0x8
  __declspec(property(get = __get_z, put = __set_z))::Org::BouncyCastle::Utilities::Zlib::ZStream* z;

  /// @brief Field flushLevel, offset 0x30, size 0x4
  __declspec(property(get = __get_flushLevel, put = __set_flushLevel)) int32_t flushLevel;

  /// @brief Field buf, offset 0x38, size 0x8
  __declspec(property(get = __get_buf, put = __set_buf))::ArrayW<uint8_t, ::Array<uint8_t>*> buf;

  /// @brief Field buf1, offset 0x40, size 0x8
  __declspec(property(get = __get_buf1, put = __set_buf1))::ArrayW<uint8_t, ::Array<uint8_t>*> buf1;

  /// @brief Field inp, offset 0x48, size 0x8
  __declspec(property(get = __get_inp, put = __set_inp))::System::IO::Stream* inp;

  /// @brief Field nomoreinput, offset 0x50, size 0x1
  __declspec(property(get = __get_nomoreinput, put = __set_nomoreinput)) bool nomoreinput;

  __declspec(property(get = get_CanRead)) bool CanRead;

  __declspec(property(get = get_CanSeek)) bool CanSeek;

  __declspec(property(get = get_CanWrite)) bool CanWrite;

  __declspec(property(get = get_Length)) int64_t Length;

  __declspec(property(get = get_Position, put = set_Position)) int64_t Position;

  constexpr ::Org::BouncyCastle::Utilities::Zlib::ZStream*& __get_z();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Utilities::Zlib::ZStream*> const& __get_z() const;

  constexpr void __set_z(::Org::BouncyCastle::Utilities::Zlib::ZStream* value);

  constexpr int32_t& __get_flushLevel();

  constexpr int32_t const& __get_flushLevel() const;

  constexpr void __set_flushLevel(int32_t value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_buf();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_buf() const;

  constexpr void __set_buf(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_buf1();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_buf1() const;

  constexpr void __set_buf1(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::System::IO::Stream*& __get_inp();

  constexpr ::cordl_internals::to_const_pointer<::System::IO::Stream*> const& __get_inp() const;

  constexpr void __set_inp(::System::IO::Stream* value);

  constexpr bool& __get_nomoreinput();

  constexpr bool const& __get_nomoreinput() const;

  constexpr void __set_nomoreinput(bool value);

  static inline ::Org::BouncyCastle::Utilities::Zlib::ZInflaterInputStream* New_ctor(::System::IO::Stream* inp);

  /// @brief Method .ctor addr 0x1169db4 size 0x8 virtual false final false
  inline void _ctor(::System::IO::Stream* inp);

  static inline ::Org::BouncyCastle::Utilities::Zlib::ZInflaterInputStream* New_ctor(::System::IO::Stream* inp, bool nowrap);

  /// @brief Method .ctor addr 0x1169dbc size 0x108 virtual false final false
  inline void _ctor(::System::IO::Stream* inp, bool nowrap);

  /// @brief Method get_CanRead addr 0x1169ed0 size 0x8 virtual true final false
  inline bool get_CanRead();

  /// @brief Method get_CanSeek addr 0x1169ed8 size 0x8 virtual true final false
  inline bool get_CanSeek();

  /// @brief Method get_CanWrite addr 0x1169ee0 size 0x8 virtual true final false
  inline bool get_CanWrite();

  /// @brief Method get_Length addr 0x1169ee8 size 0x8 virtual true final false
  inline int64_t get_Length();

  /// @brief Method get_Position addr 0x1169ef0 size 0x8 virtual true final false
  inline int64_t get_Position();

  /// @brief Method set_Position addr 0x1169ef8 size 0x4 virtual true final false
  inline void set_Position(int64_t value);

  /// @brief Method Write addr 0x1169efc size 0x4 virtual true final false
  inline void Write(::ArrayW<uint8_t, ::Array<uint8_t>*> b, int32_t off, int32_t len);

  /// @brief Method Seek addr 0x1169f00 size 0x8 virtual true final false
  inline int64_t Seek(int64_t offset, ::System::IO::SeekOrigin origin);

  /// @brief Method SetLength addr 0x1169f08 size 0x4 virtual true final false
  inline void SetLength(int64_t value);

  /// @brief Method Read addr 0x1169f0c size 0x19c virtual true final false
  inline int32_t Read(::ArrayW<uint8_t, ::Array<uint8_t>*> b, int32_t off, int32_t len);

  /// @brief Method Flush addr 0x116a0c4 size 0x24 virtual true final false
  inline void Flush();

  /// @brief Method WriteByte addr 0x116a0e8 size 0x4 virtual true final false
  inline void WriteByte(uint8_t b);

  /// @brief Method Close addr 0x116a0ec size 0x78 virtual true final false
  inline void Close();

  /// @brief Method ReadByte addr 0x116a184 size 0x58 virtual true final false
  inline int32_t ReadByte();

  // Ctor Parameters [CppParam { name: "", ty: "ZInflaterInputStream", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ZInflaterInputStream(ZInflaterInputStream&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ZInflaterInputStream", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ZInflaterInputStream(ZInflaterInputStream const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ZInflaterInputStream();

public:
  /// @brief Field z, offset: 0x28, size: 0x8, def value: None
  ::Org::BouncyCastle::Utilities::Zlib::ZStream* ___z;

  /// @brief Field flushLevel, offset: 0x30, size: 0x4, def value: None
  int32_t ___flushLevel;

  /// @brief Field buf, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___buf;

  /// @brief Field buf1, offset: 0x40, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___buf1;

  /// @brief Field inp, offset: 0x48, size: 0x8, def value: None
  ::System::IO::Stream* ___inp;

  /// @brief Field nomoreinput, offset: 0x50, size: 0x1, def value: None
  bool ___nomoreinput;

  /// @brief Field BUFSIZE offset 0xffffffff size 0x4
  static constexpr int32_t BUFSIZE{ static_cast<int32_t>(0x1060) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Utilities::Zlib::ZInflaterInputStream, 0x58>, "Size mismatch!");

} // namespace Org::BouncyCastle::Utilities::Zlib
NEED_NO_BOX(::Org::BouncyCastle::Utilities::Zlib::ZInflaterInputStream);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Utilities::Zlib::ZInflaterInputStream*, "Org.BouncyCastle.Utilities.Zlib", "ZInflaterInputStream");
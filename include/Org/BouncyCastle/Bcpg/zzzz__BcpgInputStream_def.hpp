#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Utilities/IO/zzzz__BaseInputStream_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BcpgInputStream)
namespace Org::BouncyCastle::Bcpg {
struct PacketTag;
}
namespace System::IO {
class Stream;
}
namespace Org::BouncyCastle::Bcpg {
class __BcpgInputStream__PartialInputStream;
}
namespace Org::BouncyCastle::Bcpg {
class Packet;
}
// Forward declare root types
namespace Org::BouncyCastle::Bcpg {
class BcpgInputStream;
}
namespace Org::BouncyCastle::Bcpg {
class __BcpgInputStream__PartialInputStream;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Bcpg::BcpgInputStream);
MARK_REF_PTR_T(::Org::BouncyCastle::Bcpg::__BcpgInputStream__PartialInputStream);
// Type: ::PartialInputStream
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Bcpg {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(498))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(552))
// CS Name: ::BcpgInputStream::PartialInputStream*
class CORDL_TYPE __BcpgInputStream__PartialInputStream : public ::Org::BouncyCastle::Utilities::IO::BaseInputStream {
public:
  // Declarations
  /// @brief Field m_in, offset 0x30, size 0x8
  __declspec(property(get = __get_m_in, put = __set_m_in))::Org::BouncyCastle::Bcpg::BcpgInputStream* m_in;

  /// @brief Field partial, offset 0x38, size 0x1
  __declspec(property(get = __get_partial, put = __set_partial)) bool partial;

  /// @brief Field dataLength, offset 0x3c, size 0x4
  __declspec(property(get = __get_dataLength, put = __set_dataLength)) int32_t dataLength;

  constexpr ::Org::BouncyCastle::Bcpg::BcpgInputStream*& __get_m_in();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Bcpg::BcpgInputStream*> const& __get_m_in() const;

  constexpr void __set_m_in(::Org::BouncyCastle::Bcpg::BcpgInputStream* value);

  constexpr bool& __get_partial();

  constexpr bool const& __get_partial() const;

  constexpr void __set_partial(bool value);

  constexpr int32_t& __get_dataLength();

  constexpr int32_t const& __get_dataLength() const;

  constexpr void __set_dataLength(int32_t value);

  static inline ::Org::BouncyCastle::Bcpg::__BcpgInputStream__PartialInputStream* New_ctor(::Org::BouncyCastle::Bcpg::BcpgInputStream* bcpgIn, bool partial, int32_t dataLength);

  /// @brief Method .ctor addr 0x11cd280 size 0x40 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Bcpg::BcpgInputStream* bcpgIn, bool partial, int32_t dataLength);

  /// @brief Method ReadByte addr 0x11cf344 size 0xac virtual true final false
  inline int32_t ReadByte();

  /// @brief Method Read addr 0x11cf520 size 0xe0 virtual true final false
  inline int32_t Read(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count);

  /// @brief Method ReadPartialDataLength addr 0x11cf3f0 size 0x130 virtual false final false
  inline int32_t ReadPartialDataLength();

  // Ctor Parameters [CppParam { name: "", ty: "__BcpgInputStream__PartialInputStream", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BcpgInputStream__PartialInputStream(__BcpgInputStream__PartialInputStream&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BcpgInputStream__PartialInputStream", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BcpgInputStream__PartialInputStream(__BcpgInputStream__PartialInputStream const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BcpgInputStream__PartialInputStream();

public:
  /// @brief Field m_in, offset: 0x30, size: 0x8, def value: None
  ::Org::BouncyCastle::Bcpg::BcpgInputStream* ___m_in;

  /// @brief Field partial, offset: 0x38, size: 0x1, def value: None
  bool ___partial;

  /// @brief Field dataLength, offset: 0x3c, size: 0x4, def value: None
  int32_t ___dataLength;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Bcpg::__BcpgInputStream__PartialInputStream, 0x40>, "Size mismatch!");

} // namespace Org::BouncyCastle::Bcpg
// Type: Org.BouncyCastle.Bcpg::BcpgInputStream
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Bcpg {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(498))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(553))
// CS Name: ::Org.BouncyCastle.Bcpg::BcpgInputStream*
class CORDL_TYPE BcpgInputStream : public ::Org::BouncyCastle::Utilities::IO::BaseInputStream {
public:
  // Declarations
  using PartialInputStream = ::Org::BouncyCastle::Bcpg::__BcpgInputStream__PartialInputStream;

  /// @brief Field m_in, offset 0x30, size 0x8
  __declspec(property(get = __get_m_in, put = __set_m_in))::System::IO::Stream* m_in;

  /// @brief Field next, offset 0x38, size 0x1
  __declspec(property(get = __get_next, put = __set_next)) bool next;

  /// @brief Field nextB, offset 0x3c, size 0x4
  __declspec(property(get = __get_nextB, put = __set_nextB)) int32_t nextB;

  constexpr ::System::IO::Stream*& __get_m_in();

  constexpr ::cordl_internals::to_const_pointer<::System::IO::Stream*> const& __get_m_in() const;

  constexpr void __set_m_in(::System::IO::Stream* value);

  constexpr bool& __get_next();

  constexpr bool const& __get_next() const;

  constexpr void __set_next(bool value);

  constexpr int32_t& __get_nextB();

  constexpr int32_t const& __get_nextB() const;

  constexpr void __set_nextB(int32_t value);

  /// @brief Method Wrap addr 0x11cc880 size 0x98 virtual false final false
  static inline ::Org::BouncyCastle::Bcpg::BcpgInputStream* Wrap(::System::IO::Stream* inStr);

  static inline ::Org::BouncyCastle::Bcpg::BcpgInputStream* New_ctor(::System::IO::Stream* inputStream);

  /// @brief Method .ctor addr 0x11cc918 size 0x2c virtual false final false
  inline void _ctor(::System::IO::Stream* inputStream);

  /// @brief Method ReadByte addr 0x11cc944 size 0x40 virtual true final false
  inline int32_t ReadByte();

  /// @brief Method Read addr 0x11cc984 size 0xb4 virtual true final false
  inline int32_t Read(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count);

  /// @brief Method ReadAll addr 0x11cca38 size 0x8 virtual false final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ReadAll();

  /// @brief Method ReadFully addr 0x11cca40 size 0x5c virtual false final false
  inline void ReadFully(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t off, int32_t len);

  /// @brief Method ReadFully addr 0x11cca9c size 0x1c virtual false final false
  inline void ReadFully(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer);

  /// @brief Method NextPacketTag addr 0x11ccab8 size 0xe0 virtual false final false
  inline ::Org::BouncyCastle::Bcpg::PacketTag NextPacketTag();

  /// @brief Method ReadPacket addr 0x11ccb98 size 0x6e8 virtual false final false
  inline ::Org::BouncyCastle::Bcpg::Packet* ReadPacket();

  /// @brief Method Close addr 0x11cf2dc size 0x68 virtual true final false
  inline void Close();

  // Ctor Parameters [CppParam { name: "", ty: "BcpgInputStream", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BcpgInputStream(BcpgInputStream&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BcpgInputStream", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BcpgInputStream(BcpgInputStream const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BcpgInputStream();

public:
  /// @brief Field m_in, offset: 0x30, size: 0x8, def value: None
  ::System::IO::Stream* ___m_in;

  /// @brief Field next, offset: 0x38, size: 0x1, def value: None
  bool ___next;

  /// @brief Field nextB, offset: 0x3c, size: 0x4, def value: None
  int32_t ___nextB;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Bcpg::BcpgInputStream, 0x40>, "Size mismatch!");

} // namespace Org::BouncyCastle::Bcpg
NEED_NO_BOX(::Org::BouncyCastle::Bcpg::BcpgInputStream);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::BcpgInputStream*, "Org.BouncyCastle.Bcpg", "BcpgInputStream");
NEED_NO_BOX(::Org::BouncyCastle::Bcpg::__BcpgInputStream__PartialInputStream);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::__BcpgInputStream__PartialInputStream*, "Org.BouncyCastle.Bcpg", "BcpgInputStream/PartialInputStream");
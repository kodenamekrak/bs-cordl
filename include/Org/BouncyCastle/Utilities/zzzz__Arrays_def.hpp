#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Utilities/Arrays.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Arrays)
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Utilities {
class Arrays;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Utilities::Arrays);
// Dependencies System.Object
namespace Org::BouncyCastle::Utilities {
// Is value type: false
// CS Name: Org.BouncyCastle.Utilities.Arrays
class CORDL_TYPE Arrays : public ::System::Object {
public:
  // Declarations
  /// @brief Field EmptyBytes, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_EmptyBytes, put = setStaticF_EmptyBytes)) ::ArrayW<uint8_t, ::Array<uint8_t>*> EmptyBytes;

  /// @brief Field EmptyInts, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_EmptyInts, put = setStaticF_EmptyInts)) ::ArrayW<int32_t, ::Array<int32_t>*> EmptyInts;

  /// @brief Method Append, addr 0x25e2ff8, size 0xd0, virtual false, abstract: false, final false
  static inline ::ArrayW<int16_t, ::Array<int16_t>*> Append(::ArrayW<int16_t, ::Array<int16_t>*> a, int16_t b);

  /// @brief Method Append, addr 0x25e30c8, size 0xd0, virtual false, abstract: false, final false
  static inline ::ArrayW<int32_t, ::Array<int32_t>*> Append(::ArrayW<int32_t, ::Array<int32_t>*> a, int32_t b);

  /// @brief Method Append, addr 0x25e2f2c, size 0xcc, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Append(::ArrayW<uint8_t, ::Array<uint8_t>*> a, uint8_t b);

  /// @brief Method AreAllZeroes, addr 0x25e14cc, size 0x6c, virtual false, abstract: false, final false
  static inline bool AreAllZeroes(::ArrayW<uint8_t, ::Array<uint8_t>*> buf, int32_t off, int32_t len);

  /// @brief Method AreEqual, addr 0x25e1538, size 0x80, virtual false, abstract: false, final false
  static inline bool AreEqual(::ArrayW<bool, ::Array<bool>*> a, ::ArrayW<bool, ::Array<bool>*> b);

  /// @brief Method AreEqual, addr 0x25e1634, size 0x80, virtual false, abstract: false, final false
  static inline bool AreEqual(::ArrayW<char16_t, ::Array<char16_t>*> a, ::ArrayW<char16_t, ::Array<char16_t>*> b);

  /// @brief Method AreEqual, addr 0x25e1be4, size 0x80, virtual false, abstract: false, final false
  static inline bool AreEqual(::ArrayW<int32_t, ::Array<int32_t>*> a, ::ArrayW<int32_t, ::Array<int32_t>*> b);

  /// @brief Method AreEqual, addr 0x25e1cd0, size 0x80, virtual false, abstract: false, final false
  static inline bool AreEqual(::ArrayW<uint32_t, ::Array<uint32_t>*> a, ::ArrayW<uint32_t, ::Array<uint32_t>*> b);

  /// @brief Method AreEqual, addr 0x25e180c, size 0xa8, virtual false, abstract: false, final false
  static inline bool AreEqual(::ArrayW<uint8_t, ::Array<uint8_t>*> a, int32_t aFromIndex, int32_t aToIndex, ::ArrayW<uint8_t, ::Array<uint8_t>*> b, int32_t bFromIndex, int32_t bToIndex);

  /// @brief Method AreEqual, addr 0x25e1720, size 0x80, virtual false, abstract: false, final false
  static inline bool AreEqual(::ArrayW<uint8_t, ::Array<uint8_t>*> a, ::ArrayW<uint8_t, ::Array<uint8_t>*> b);

  /// @brief Method AreSame, addr 0x25e18b4, size 0x64, virtual false, abstract: false, final false
  static inline bool AreSame(::ArrayW<uint8_t, ::Array<uint8_t>*> a, ::ArrayW<uint8_t, ::Array<uint8_t>*> b);

  /// @brief Method Clear, addr 0x25e3878, size 0x18, virtual false, abstract: false, final false
  static inline void Clear(::ArrayW<int32_t, ::Array<int32_t>*> data);

  /// @brief Method Clear, addr 0x25e3860, size 0x18, virtual false, abstract: false, final false
  static inline void Clear(::ArrayW<uint8_t, ::Array<uint8_t>*> data);

  /// @brief Method Clone, addr 0x25e2134, size 0x78, virtual false, abstract: false, final false
  static inline ::ArrayW<bool, ::Array<bool>*> Clone(::ArrayW<bool, ::Array<bool>*> data);

  /// @brief Method Clone, addr 0x25e2224, size 0x78, virtual false, abstract: false, final false
  static inline ::ArrayW<int32_t, ::Array<int32_t>*> Clone(::ArrayW<int32_t, ::Array<int32_t>*> data);

  /// @brief Method Clone, addr 0x25e2314, size 0x78, virtual false, abstract: false, final false
  static inline ::ArrayW<int64_t, ::Array<int64_t>*> Clone(::ArrayW<int64_t, ::Array<int64_t>*> data);

  /// @brief Method Clone, addr 0x25e229c, size 0x78, virtual false, abstract: false, final false
  static inline ::ArrayW<uint32_t, ::Array<uint32_t>*> Clone(::ArrayW<uint32_t, ::Array<uint32_t>*> data);

  /// @brief Method Clone, addr 0x25e238c, size 0x78, virtual false, abstract: false, final false
  static inline ::ArrayW<uint64_t, ::Array<uint64_t>*> Clone(::ArrayW<uint64_t, ::Array<uint64_t>*> data);

  /// @brief Method Clone, addr 0x25e24a4, size 0xa0, virtual false, abstract: false, final false
  static inline ::ArrayW<uint64_t, ::Array<uint64_t>*> Clone(::ArrayW<uint64_t, ::Array<uint64_t>*> data, ::ArrayW<uint64_t, ::Array<uint64_t>*> existing);

  /// @brief Method Clone, addr 0x25e21ac, size 0x78, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Clone(::ArrayW<uint8_t, ::Array<uint8_t>*> data);

  /// @brief Method Clone, addr 0x25e2404, size 0xa0, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Clone(::ArrayW<uint8_t, ::Array<uint8_t>*> data, ::ArrayW<uint8_t, ::Array<uint8_t>*> existing);

  /// @brief Method Concatenate, addr 0x25e33f8, size 0xf4, virtual false, abstract: false, final false
  static inline ::ArrayW<int32_t, ::Array<int32_t>*> Concatenate(::ArrayW<int32_t, ::Array<int32_t>*> a, ::ArrayW<int32_t, ::Array<int32_t>*> b);

  /// @brief Method Concatenate, addr 0x25e3198, size 0xf4, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Concatenate(::ArrayW<uint8_t, ::Array<uint8_t>*> a, ::ArrayW<uint8_t, ::Array<uint8_t>*> b);

  /// @brief Method ConcatenateAll, addr 0x25e328c, size 0x16c, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ConcatenateAll(::ArrayW<::ArrayW<uint8_t, ::Array<uint8_t>*>, ::Array<::ArrayW<uint8_t, ::Array<uint8_t>*>>*> vs);

  /// @brief Method ConstantTimeAreEqual, addr 0x25e1918, size 0x10c, virtual false, abstract: false, final false
  static inline bool ConstantTimeAreEqual(::ArrayW<uint8_t, ::Array<uint8_t>*> a, ::ArrayW<uint8_t, ::Array<uint8_t>*> b);

  /// @brief Method ConstantTimeAreEqual, addr 0x25e1a24, size 0x1c0, virtual false, abstract: false, final false
  static inline bool ConstantTimeAreEqual(int32_t len, ::ArrayW<uint8_t, ::Array<uint8_t>*> a, int32_t aOff, ::ArrayW<uint8_t, ::Array<uint8_t>*> b, int32_t bOff);

  /// @brief Method Contains, addr 0x25e25a0, size 0x5c, virtual false, abstract: false, final false
  static inline bool Contains(::ArrayW<int16_t, ::Array<int16_t>*> a, int16_t n);

  /// @brief Method Contains, addr 0x25e25fc, size 0x5c, virtual false, abstract: false, final false
  static inline bool Contains(::ArrayW<int32_t, ::Array<int32_t>*> a, int32_t n);

  /// @brief Method Contains, addr 0x25e2544, size 0x5c, virtual false, abstract: false, final false
  static inline bool Contains(::ArrayW<uint8_t, ::Array<uint8_t>*> a, uint8_t n);

  /// @brief Method CopyOf, addr 0x25e29e0, size 0xb8, virtual false, abstract: false, final false
  static inline ::ArrayW<::Org::BouncyCastle::Math::BigInteger*, ::Array<::Org::BouncyCastle::Math::BigInteger*>*>
  CopyOf(::ArrayW<::Org::BouncyCastle::Math::BigInteger*, ::Array<::Org::BouncyCastle::Math::BigInteger*>*> data, int32_t newLength);

  /// @brief Method CopyOf, addr 0x25e27b8, size 0xb8, virtual false, abstract: false, final false
  static inline ::ArrayW<char16_t, ::Array<char16_t>*> CopyOf(::ArrayW<char16_t, ::Array<char16_t>*> data, int32_t newLength);

  /// @brief Method CopyOf, addr 0x25e2870, size 0xb8, virtual false, abstract: false, final false
  static inline ::ArrayW<int32_t, ::Array<int32_t>*> CopyOf(::ArrayW<int32_t, ::Array<int32_t>*> data, int32_t newLength);

  /// @brief Method CopyOf, addr 0x25e2928, size 0xb8, virtual false, abstract: false, final false
  static inline ::ArrayW<int64_t, ::Array<int64_t>*> CopyOf(::ArrayW<int64_t, ::Array<int64_t>*> data, int32_t newLength);

  /// @brief Method CopyOf, addr 0x25e2700, size 0xb8, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> CopyOf(::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t newLength);

  /// @brief Method CopyOfRange, addr 0x25e2e34, size 0xf8, virtual false, abstract: false, final false
  static inline ::ArrayW<::Org::BouncyCastle::Math::BigInteger*, ::Array<::Org::BouncyCastle::Math::BigInteger*>*>
  CopyOfRange(::ArrayW<::Org::BouncyCastle::Math::BigInteger*, ::Array<::Org::BouncyCastle::Math::BigInteger*>*> data, int32_t from, int32_t to);

  /// @brief Method CopyOfRange, addr 0x25e2c44, size 0xf8, virtual false, abstract: false, final false
  static inline ::ArrayW<int32_t, ::Array<int32_t>*> CopyOfRange(::ArrayW<int32_t, ::Array<int32_t>*> data, int32_t from, int32_t to);

  /// @brief Method CopyOfRange, addr 0x25e2d3c, size 0xf8, virtual false, abstract: false, final false
  static inline ::ArrayW<int64_t, ::Array<int64_t>*> CopyOfRange(::ArrayW<int64_t, ::Array<int64_t>*> data, int32_t from, int32_t to);

  /// @brief Method CopyOfRange, addr 0x25e2a98, size 0xf8, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> CopyOfRange(::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t from, int32_t to);

  /// @brief Method Fill, addr 0x25e2658, size 0x5c, virtual false, abstract: false, final false
  static inline void Fill(::ArrayW<uint8_t, ::Array<uint8_t>*> buf, uint8_t b);

  /// @brief Method Fill, addr 0x25e26b4, size 0x4c, virtual false, abstract: false, final false
  static inline void Fill(::ArrayW<uint8_t, ::Array<uint8_t>*> buf, int32_t from, int32_t to, uint8_t b);

  /// @brief Method GetHashCode, addr 0x25e1f70, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t GetHashCode(::ArrayW<int32_t, ::Array<int32_t>*> data);

  /// @brief Method GetHashCode, addr 0x25e1fac, size 0x54, virtual false, abstract: false, final false
  static inline int32_t GetHashCode(::ArrayW<int32_t, ::Array<int32_t>*> data, int32_t off, int32_t len);

  /// @brief Method GetHashCode, addr 0x25e2000, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t GetHashCode(::ArrayW<uint32_t, ::Array<uint32_t>*> data);

  /// @brief Method GetHashCode, addr 0x25e203c, size 0x54, virtual false, abstract: false, final false
  static inline int32_t GetHashCode(::ArrayW<uint32_t, ::Array<uint32_t>*> data, int32_t off, int32_t len);

  /// @brief Method GetHashCode, addr 0x25e2090, size 0x48, virtual false, abstract: false, final false
  static inline int32_t GetHashCode(::ArrayW<uint64_t, ::Array<uint64_t>*> data);

  /// @brief Method GetHashCode, addr 0x25e20d8, size 0x5c, virtual false, abstract: false, final false
  static inline int32_t GetHashCode(::ArrayW<uint64_t, ::Array<uint64_t>*> data, int32_t off, int32_t len);

  /// @brief Method GetHashCode, addr 0x25e1ee0, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t GetHashCode(::ArrayW<uint8_t, ::Array<uint8_t>*> data);

  /// @brief Method GetHashCode, addr 0x25e1f1c, size 0x54, virtual false, abstract: false, final false
  static inline int32_t GetHashCode(::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t off, int32_t len);

  /// @brief Method GetLength, addr 0x25e2b90, size 0xb4, virtual false, abstract: false, final false
  static inline int32_t GetLength(int32_t from, int32_t to);

  /// @brief Method HaveSameContents, addr 0x25e15b8, size 0x7c, virtual false, abstract: false, final false
  static inline bool HaveSameContents(::ArrayW<bool, ::Array<bool>*> a, ::ArrayW<bool, ::Array<bool>*> b);

  /// @brief Method HaveSameContents, addr 0x25e16b4, size 0x6c, virtual false, abstract: false, final false
  static inline bool HaveSameContents(::ArrayW<char16_t, ::Array<char16_t>*> a, ::ArrayW<char16_t, ::Array<char16_t>*> b);

  /// @brief Method HaveSameContents, addr 0x25e1c64, size 0x6c, virtual false, abstract: false, final false
  static inline bool HaveSameContents(::ArrayW<int32_t, ::Array<int32_t>*> a, ::ArrayW<int32_t, ::Array<int32_t>*> b);

  /// @brief Method HaveSameContents, addr 0x25e1d50, size 0x6c, virtual false, abstract: false, final false
  static inline bool HaveSameContents(::ArrayW<uint32_t, ::Array<uint32_t>*> a, ::ArrayW<uint32_t, ::Array<uint32_t>*> b);

  /// @brief Method HaveSameContents, addr 0x25e17a0, size 0x6c, virtual false, abstract: false, final false
  static inline bool HaveSameContents(::ArrayW<uint8_t, ::Array<uint8_t>*> a, ::ArrayW<uint8_t, ::Array<uint8_t>*> b);

  /// @brief Method IsNullOrContainsNull, addr 0x25e3890, size 0x4c, virtual false, abstract: false, final false
  static inline bool IsNullOrContainsNull(::ArrayW<::System::Object*, ::Array<::System::Object*>*> array);

  /// @brief Method IsNullOrEmpty, addr 0x25e38f8, size 0x1c, virtual false, abstract: false, final false
  static inline bool IsNullOrEmpty(::ArrayW<::System::Object*, ::Array<::System::Object*>*> array);

  /// @brief Method IsNullOrEmpty, addr 0x25e38dc, size 0x1c, virtual false, abstract: false, final false
  static inline bool IsNullOrEmpty(::ArrayW<uint8_t, ::Array<uint8_t>*> array);

  static inline ::Org::BouncyCastle::Utilities::Arrays* New_ctor();

  /// @brief Method Prepend, addr 0x25e35a0, size 0xb4, virtual false, abstract: false, final false
  static inline ::ArrayW<int16_t, ::Array<int16_t>*> Prepend(::ArrayW<int16_t, ::Array<int16_t>*> a, int16_t b);

  /// @brief Method Prepend, addr 0x25e3654, size 0xb4, virtual false, abstract: false, final false
  static inline ::ArrayW<int32_t, ::Array<int32_t>*> Prepend(::ArrayW<int32_t, ::Array<int32_t>*> a, int32_t b);

  /// @brief Method Prepend, addr 0x25e34ec, size 0xb4, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Prepend(::ArrayW<uint8_t, ::Array<uint8_t>*> a, uint8_t b);

  /// @brief Method Reverse, addr 0x25e37b4, size 0xac, virtual false, abstract: false, final false
  static inline ::ArrayW<int32_t, ::Array<int32_t>*> Reverse(::ArrayW<int32_t, ::Array<int32_t>*> a);

  /// @brief Method Reverse, addr 0x25e3708, size 0xac, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Reverse(::ArrayW<uint8_t, ::Array<uint8_t>*> a);

  /// @brief Method ToString, addr 0x25e1dbc, size 0x124, virtual false, abstract: false, final false
  static inline ::StringW ToString(::ArrayW<::System::Object*, ::Array<::System::Object*>*> a);

  /// @brief Method .ctor, addr 0x25e39b0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF_EmptyBytes();

  static inline ::ArrayW<int32_t, ::Array<int32_t>*> getStaticF_EmptyInts();

  static inline void setStaticF_EmptyBytes(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline void setStaticF_EmptyInts(::ArrayW<int32_t, ::Array<int32_t>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Arrays();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Arrays", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Arrays(Arrays&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Arrays", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Arrays(Arrays const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1831 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Utilities::Arrays, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Utilities
NEED_NO_BOX(::Org::BouncyCastle::Utilities::Arrays);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Utilities::Arrays*, "Org.BouncyCastle.Utilities", "Arrays");

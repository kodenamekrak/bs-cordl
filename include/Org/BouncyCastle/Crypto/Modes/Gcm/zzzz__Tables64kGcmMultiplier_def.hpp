#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Tables64kGcmMultiplier)
namespace Org::BouncyCastle::Crypto::Modes::Gcm {
class IGcmMultiplier;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Modes::Gcm {
class Tables64kGcmMultiplier;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Modes::Gcm::Tables64kGcmMultiplier);
// Type: Org.BouncyCastle.Crypto.Modes.Gcm::Tables64kGcmMultiplier
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Modes::Gcm {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(955))
// CS Name: ::Org.BouncyCastle.Crypto.Modes.Gcm::Tables64kGcmMultiplier*
class CORDL_TYPE Tables64kGcmMultiplier : public ::System::Object {
public:
  // Declarations
  /// @brief Field H, offset 0x10, size 0x8
  __declspec(property(get = __get_H, put = __set_H))::ArrayW<uint8_t, ::Array<uint8_t>*> H;

  /// @brief Field M, offset 0x18, size 0x8
  __declspec(property(get = __get_M, put = __set_M))::ArrayW<::ArrayW<::ArrayW<uint32_t, ::Array<uint32_t>*>, ::Array<::ArrayW<uint32_t, ::Array<uint32_t>*>>*>,
                                                             ::Array<::ArrayW<::ArrayW<uint32_t, ::Array<uint32_t>*>, ::Array<::ArrayW<uint32_t, ::Array<uint32_t>*>>*>>*> M;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::Modes::Gcm::IGcmMultiplier"
  constexpr operator ::Org::BouncyCastle::Crypto::Modes::Gcm::IGcmMultiplier*() noexcept;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_H();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_H() const;

  constexpr void __set_H(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::ArrayW<::ArrayW<::ArrayW<uint32_t, ::Array<uint32_t>*>, ::Array<::ArrayW<uint32_t, ::Array<uint32_t>*>>*>,
                     ::Array<::ArrayW<::ArrayW<uint32_t, ::Array<uint32_t>*>, ::Array<::ArrayW<uint32_t, ::Array<uint32_t>*>>*>>*>&
  __get_M();

  constexpr ::ArrayW<::ArrayW<::ArrayW<uint32_t, ::Array<uint32_t>*>, ::Array<::ArrayW<uint32_t, ::Array<uint32_t>*>>*>,
                     ::Array<::ArrayW<::ArrayW<uint32_t, ::Array<uint32_t>*>, ::Array<::ArrayW<uint32_t, ::Array<uint32_t>*>>*>>*> const&
  __get_M() const;

  constexpr void __set_M(::ArrayW<::ArrayW<::ArrayW<uint32_t, ::Array<uint32_t>*>, ::Array<::ArrayW<uint32_t, ::Array<uint32_t>*>>*>,
                                  ::Array<::ArrayW<::ArrayW<uint32_t, ::Array<uint32_t>*>, ::Array<::ArrayW<uint32_t, ::Array<uint32_t>*>>*>>*>
                             value);

  /// @brief Method Init addr 0xf13b58 size 0x614 virtual true final true
  inline void Init(::ArrayW<uint8_t, ::Array<uint8_t>*> H);

  /// @brief Method MultiplyH addr 0xf1416c size 0x150 virtual true final true
  inline void MultiplyH(::ArrayW<uint8_t, ::Array<uint8_t>*> x);

  static inline ::Org::BouncyCastle::Crypto::Modes::Gcm::Tables64kGcmMultiplier* New_ctor();

  /// @brief Method .ctor addr 0xf142bc size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "Tables64kGcmMultiplier", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Tables64kGcmMultiplier(Tables64kGcmMultiplier&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Tables64kGcmMultiplier", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Tables64kGcmMultiplier(Tables64kGcmMultiplier const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Tables64kGcmMultiplier();

public:
  /// @brief Field H, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___H;

  /// @brief Field M, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::ArrayW<::ArrayW<uint32_t, ::Array<uint32_t>*>, ::Array<::ArrayW<uint32_t, ::Array<uint32_t>*>>*>,
           ::Array<::ArrayW<::ArrayW<uint32_t, ::Array<uint32_t>*>, ::Array<::ArrayW<uint32_t, ::Array<uint32_t>*>>*>>*>
      ___M;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Modes::Gcm::Tables64kGcmMultiplier, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Modes::Gcm
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Modes::Gcm::Tables64kGcmMultiplier);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Modes::Gcm::Tables64kGcmMultiplier*, "Org.BouncyCastle.Crypto.Modes.Gcm", "Tables64kGcmMultiplier");
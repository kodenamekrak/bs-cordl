#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(KdfDoublePipelineIterationParameters)
namespace Org::BouncyCastle::Crypto {
class IDerivationParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Parameters {
class KdfDoublePipelineIterationParameters;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Parameters::KdfDoublePipelineIterationParameters);
// Type: Org.BouncyCastle.Crypto.Parameters::KdfDoublePipelineIterationParameters
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Parameters {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1062))
// CS Name: ::Org.BouncyCastle.Crypto.Parameters::KdfDoublePipelineIterationParameters*
class CORDL_TYPE KdfDoublePipelineIterationParameters : public ::System::Object {
public:
  // Declarations
  /// @brief Field ki, offset 0x10, size 0x8
  __declspec(property(get = __get_ki, put = __set_ki))::ArrayW<uint8_t, ::Array<uint8_t>*> ki;

  /// @brief Field useCounter, offset 0x18, size 0x1
  __declspec(property(get = __get_useCounter, put = __set_useCounter)) bool useCounter;

  /// @brief Field r, offset 0x1c, size 0x4
  __declspec(property(get = __get_r, put = __set_r)) int32_t r;

  /// @brief Field fixedInputData, offset 0x20, size 0x8
  __declspec(property(get = __get_fixedInputData, put = __set_fixedInputData))::ArrayW<uint8_t, ::Array<uint8_t>*> fixedInputData;

  /// @brief Field UNUSED_R, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_UNUSED_R, put = setStaticF_UNUSED_R)) int32_t UNUSED_R;

  __declspec(property(get = get_Ki))::ArrayW<uint8_t, ::Array<uint8_t>*> Ki;

  __declspec(property(get = get_UseCounter)) bool UseCounter;

  __declspec(property(get = get_R)) int32_t R;

  __declspec(property(get = get_FixedInputData))::ArrayW<uint8_t, ::Array<uint8_t>*> FixedInputData;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::IDerivationParameters"
  constexpr operator ::Org::BouncyCastle::Crypto::IDerivationParameters*() noexcept;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_ki();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_ki() const;

  constexpr void __set_ki(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr bool& __get_useCounter();

  constexpr bool const& __get_useCounter() const;

  constexpr void __set_useCounter(bool value);

  constexpr int32_t& __get_r();

  constexpr int32_t const& __get_r() const;

  constexpr void __set_r(int32_t value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_fixedInputData();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_fixedInputData() const;

  constexpr void __set_fixedInputData(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline void setStaticF_UNUSED_R(int32_t value);

  static inline int32_t getStaticF_UNUSED_R();

  static inline ::Org::BouncyCastle::Crypto::Parameters::KdfDoublePipelineIterationParameters* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> ki, ::ArrayW<uint8_t, ::Array<uint8_t>*> fixedInputData,
                                                                                                        int32_t r, bool useCounter);

  /// @brief Method .ctor addr 0xf3701c size 0x164 virtual false final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> ki, ::ArrayW<uint8_t, ::Array<uint8_t>*> fixedInputData, int32_t r, bool useCounter);

  /// @brief Method CreateWithCounter addr 0xf37180 size 0x7c virtual false final false
  static inline ::Org::BouncyCastle::Crypto::Parameters::KdfDoublePipelineIterationParameters* CreateWithCounter(::ArrayW<uint8_t, ::Array<uint8_t>*> ki,
                                                                                                                 ::ArrayW<uint8_t, ::Array<uint8_t>*> fixedInputData, int32_t r);

  /// @brief Method CreateWithoutCounter addr 0xf371fc size 0x90 virtual false final false
  static inline ::Org::BouncyCastle::Crypto::Parameters::KdfDoublePipelineIterationParameters* CreateWithoutCounter(::ArrayW<uint8_t, ::Array<uint8_t>*> ki,
                                                                                                                    ::ArrayW<uint8_t, ::Array<uint8_t>*> fixedInputData);

  /// @brief Method get_Ki addr 0xf3728c size 0x5c virtual false final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> get_Ki();

  /// @brief Method get_UseCounter addr 0xf372e8 size 0x8 virtual false final false
  inline bool get_UseCounter();

  /// @brief Method get_R addr 0xf372f0 size 0x8 virtual false final false
  inline int32_t get_R();

  /// @brief Method get_FixedInputData addr 0xf372f8 size 0x5c virtual false final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> get_FixedInputData();

  // Ctor Parameters [CppParam { name: "", ty: "KdfDoublePipelineIterationParameters", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  KdfDoublePipelineIterationParameters(KdfDoublePipelineIterationParameters&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "KdfDoublePipelineIterationParameters", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  KdfDoublePipelineIterationParameters(KdfDoublePipelineIterationParameters const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr KdfDoublePipelineIterationParameters();

public:
  /// @brief Field ki, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___ki;

  /// @brief Field useCounter, offset: 0x18, size: 0x1, def value: None
  bool ___useCounter;

  /// @brief Field r, offset: 0x1c, size: 0x4, def value: None
  int32_t ___r;

  /// @brief Field fixedInputData, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___fixedInputData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Parameters::KdfDoublePipelineIterationParameters, 0x28>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Parameters
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Parameters::KdfDoublePipelineIterationParameters);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Parameters::KdfDoublePipelineIterationParameters*, "Org.BouncyCastle.Crypto.Parameters", "KdfDoublePipelineIterationParameters");
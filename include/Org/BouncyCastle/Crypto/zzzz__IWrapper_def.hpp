#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/IWrapper.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IWrapper)
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto {
class IWrapper;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::IWrapper);
// Dependencies
namespace Org::BouncyCastle::Crypto {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.IWrapper
class CORDL_TYPE IWrapper {
public:
  // Declarations
  __declspec(property(get = get_AlgorithmName)) ::StringW AlgorithmName;

  /// @brief Method Init, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Init(bool forWrapping, ::Org::BouncyCastle::Crypto::ICipherParameters* parameters);

  /// @brief Method Unwrap, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Unwrap(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inOff, int32_t length);

  /// @brief Method Wrap, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Wrap(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inOff, int32_t length);

  /// @brief Method get_AlgorithmName, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::StringW get_AlgorithmName();

  // Ctor Parameters [CppParam { name: "", ty: "IWrapper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IWrapper(IWrapper const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 826 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Org::BouncyCastle::Crypto
NEED_NO_BOX(::Org::BouncyCastle::Crypto::IWrapper);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::IWrapper*, "Org.BouncyCastle.Crypto", "IWrapper");

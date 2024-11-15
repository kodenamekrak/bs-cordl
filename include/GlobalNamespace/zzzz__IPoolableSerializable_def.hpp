#pragma once
// IWYU pragma private; include "GlobalNamespace/IPoolableSerializable.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IPoolableSerializable)
namespace LiteNetLib::Utils {
class INetSerializable;
}
// Forward declare root types
namespace GlobalNamespace {
class IPoolableSerializable;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::IPoolableSerializable);
// Type: ::IPoolableSerializable
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::IPoolableSerializable*
class CORDL_TYPE IPoolableSerializable {
public:
  // Declarations
  /// @brief Convert operator to "::LiteNetLib::Utils::INetSerializable"
  constexpr operator ::LiteNetLib::Utils::INetSerializable*() noexcept;

  /// @brief Method Release, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void Release();

  /// @brief Method Retain, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void Retain();

  /// @brief Convert to "::LiteNetLib::Utils::INetSerializable"
  constexpr ::LiteNetLib::Utils::INetSerializable* i___LiteNetLib__Utils__INetSerializable() noexcept;

  // Ctor Parameters [CppParam { name: "", ty: "IPoolableSerializable", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IPoolableSerializable(IPoolableSerializable&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IPoolableSerializable", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IPoolableSerializable(IPoolableSerializable const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16946 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::IPoolableSerializable);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IPoolableSerializable*, "", "IPoolableSerializable");

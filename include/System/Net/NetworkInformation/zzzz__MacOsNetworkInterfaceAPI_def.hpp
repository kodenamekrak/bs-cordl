#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Net/NetworkInformation/zzzz__UnixNetworkInterfaceAPI_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MacOsNetworkInterfaceAPI)
namespace System::Net::NetworkInformation {
class NetworkInterface;
}
// Forward declare root types
namespace System::Net::NetworkInformation {
class MacOsNetworkInterfaceAPI;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::NetworkInformation::MacOsNetworkInterfaceAPI);
// Type: System.Net.NetworkInformation::MacOsNetworkInterfaceAPI
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 20, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Net::NetworkInformation {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9291))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9279))
// CS Name: ::System.Net.NetworkInformation::MacOsNetworkInterfaceAPI*
class CORDL_TYPE MacOsNetworkInterfaceAPI : public ::System::Net::NetworkInformation::UnixNetworkInterfaceAPI {
public:
  // Declarations
  /// @brief Field AF_INET6, offset 0x10, size 0x4
  __declspec(property(get = __get_AF_INET6, put = __set_AF_INET6)) int32_t AF_INET6;

  constexpr int32_t& __get_AF_INET6();

  constexpr int32_t const& __get_AF_INET6() const;

  constexpr void __set_AF_INET6(int32_t value);

  static inline ::System::Net::NetworkInformation::MacOsNetworkInterfaceAPI* New_ctor();

  /// @brief Method .ctor addr 0x29ef57c size 0x20 virtual false final false
  inline void _ctor();

  static inline ::System::Net::NetworkInformation::MacOsNetworkInterfaceAPI* New_ctor(int32_t AF_INET6);

  /// @brief Method .ctor addr 0x29ed9ac size 0x28 virtual false final false
  inline void _ctor(int32_t AF_INET6);

  /// @brief Method GetAllNetworkInterfaces addr 0x29ef59c size 0xa6c virtual true final false
  inline ::ArrayW<::System::Net::NetworkInformation::NetworkInterface*, ::Array<::System::Net::NetworkInformation::NetworkInterface*>*> GetAllNetworkInterfaces();

  // Ctor Parameters [CppParam { name: "", ty: "MacOsNetworkInterfaceAPI", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MacOsNetworkInterfaceAPI(MacOsNetworkInterfaceAPI&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MacOsNetworkInterfaceAPI", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MacOsNetworkInterfaceAPI(MacOsNetworkInterfaceAPI const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MacOsNetworkInterfaceAPI();

public:
  /// @brief Field AF_INET6, offset: 0x10, size: 0x4, def value: None
  int32_t ___AF_INET6;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::NetworkInformation::MacOsNetworkInterfaceAPI, 0x18>, "Size mismatch!");

} // namespace System::Net::NetworkInformation
NEED_NO_BOX(::System::Net::NetworkInformation::MacOsNetworkInterfaceAPI);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::NetworkInformation::MacOsNetworkInterfaceAPI*, "System.Net.NetworkInformation", "MacOsNetworkInterfaceAPI");
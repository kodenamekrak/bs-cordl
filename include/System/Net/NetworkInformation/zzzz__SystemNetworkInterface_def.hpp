#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(SystemNetworkInterface)
namespace System::Net::NetworkInformation {
class NetworkInterface;
}
namespace System::Net::NetworkInformation {
class NetworkInterfaceFactory;
}
// Forward declare root types
namespace System::Net::NetworkInformation {
class SystemNetworkInterface;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::NetworkInformation::SystemNetworkInterface);
// Type: System.Net.NetworkInformation::SystemNetworkInterface
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Net::NetworkInformation {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9282))
// CS Name: ::System.Net.NetworkInformation::SystemNetworkInterface*
class CORDL_TYPE SystemNetworkInterface : public ::System::Object {
public:
  // Declarations
  /// @brief Field nif, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_nif, put = setStaticF_nif))::System::Net::NetworkInformation::NetworkInterfaceFactory* nif;

  static inline void setStaticF_nif(::System::Net::NetworkInformation::NetworkInterfaceFactory* value);

  static inline ::System::Net::NetworkInformation::NetworkInterfaceFactory* getStaticF_nif();

  /// @brief Method GetNetworkInterfaces addr 0x29eb7d4 size 0xfc virtual false final false
  static inline ::ArrayW<::System::Net::NetworkInformation::NetworkInterface*, ::Array<::System::Net::NetworkInformation::NetworkInterface*>*> GetNetworkInterfaces();

  // Ctor Parameters [CppParam { name: "", ty: "SystemNetworkInterface", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SystemNetworkInterface(SystemNetworkInterface&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SystemNetworkInterface", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SystemNetworkInterface(SystemNetworkInterface const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SystemNetworkInterface();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::NetworkInformation::SystemNetworkInterface, 0x10>, "Size mismatch!");

} // namespace System::Net::NetworkInformation
NEED_NO_BOX(::System::Net::NetworkInformation::SystemNetworkInterface);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::NetworkInformation::SystemNetworkInterface*, "System.Net.NetworkInformation", "SystemNetworkInterface");
#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Net/NetworkInformation/zzzz__IPInterfaceProperties_def.hpp"
CORDL_MODULE_EXPORT(UnixIPInterfaceProperties)
namespace System::Net::NetworkInformation {
class UnixNetworkInterface;
}
namespace System::Net {
class IPAddress;
}
namespace System::Net::NetworkInformation {
class UnicastIPAddressInformationCollection;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Text::RegularExpressions {
class Regex;
}
// Forward declare root types
namespace System::Net::NetworkInformation {
class UnixIPInterfaceProperties;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::NetworkInformation::UnixIPInterfaceProperties);
// Type: System.Net.NetworkInformation::UnixIPInterfaceProperties
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Net::NetworkInformation {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9250))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9290))
// CS Name: ::System.Net.NetworkInformation::UnixIPInterfaceProperties*
class CORDL_TYPE UnixIPInterfaceProperties : public ::System::Net::NetworkInformation::IPInterfaceProperties {
public:
  // Declarations
  /// @brief Field iface, offset 0x10, size 0x8
  __declspec(property(get = __get_iface, put = __set_iface))::System::Net::NetworkInformation::UnixNetworkInterface* iface;

  /// @brief Field addresses, offset 0x18, size 0x8
  __declspec(property(get = __get_addresses, put = __set_addresses))::System::Collections::Generic::List_1<::System::Net::IPAddress*>* addresses;

  /// @brief Field ns, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_ns, put = setStaticF_ns))::System::Text::RegularExpressions::Regex* ns;

  /// @brief Field search, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_search, put = setStaticF_search))::System::Text::RegularExpressions::Regex* search;

  __declspec(property(get = get_UnicastAddresses))::System::Net::NetworkInformation::UnicastIPAddressInformationCollection* UnicastAddresses;

  constexpr ::System::Net::NetworkInformation::UnixNetworkInterface*& __get_iface();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::NetworkInformation::UnixNetworkInterface*> const& __get_iface() const;

  constexpr void __set_iface(::System::Net::NetworkInformation::UnixNetworkInterface* value);

  constexpr ::System::Collections::Generic::List_1<::System::Net::IPAddress*>*& __get_addresses();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::System::Net::IPAddress*>*> const& __get_addresses() const;

  constexpr void __set_addresses(::System::Collections::Generic::List_1<::System::Net::IPAddress*>* value);

  static inline void setStaticF_ns(::System::Text::RegularExpressions::Regex* value);

  static inline ::System::Text::RegularExpressions::Regex* getStaticF_ns();

  static inline void setStaticF_search(::System::Text::RegularExpressions::Regex* value);

  static inline ::System::Text::RegularExpressions::Regex* getStaticF_search();

  static inline ::System::Net::NetworkInformation::UnixIPInterfaceProperties* New_ctor(::System::Net::NetworkInformation::UnixNetworkInterface* iface,
                                                                                       ::System::Collections::Generic::List_1<::System::Net::IPAddress*>* addresses);

  /// @brief Method .ctor addr 0x29ec0e4 size 0x2c virtual false final false
  inline void _ctor(::System::Net::NetworkInformation::UnixNetworkInterface* iface, ::System::Collections::Generic::List_1<::System::Net::IPAddress*>* addresses);

  /// @brief Method get_UnicastAddresses addr 0x29f088c size 0x274 virtual true final false
  inline ::System::Net::NetworkInformation::UnicastIPAddressInformationCollection* get_UnicastAddresses();

  // Ctor Parameters [CppParam { name: "", ty: "UnixIPInterfaceProperties", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UnixIPInterfaceProperties(UnixIPInterfaceProperties&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UnixIPInterfaceProperties", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UnixIPInterfaceProperties(UnixIPInterfaceProperties const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UnixIPInterfaceProperties();

public:
  /// @brief Field iface, offset: 0x10, size: 0x8, def value: None
  ::System::Net::NetworkInformation::UnixNetworkInterface* ___iface;

  /// @brief Field addresses, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::System::Net::IPAddress*>* ___addresses;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::NetworkInformation::UnixIPInterfaceProperties, 0x20>, "Size mismatch!");

} // namespace System::Net::NetworkInformation
NEED_NO_BOX(::System::Net::NetworkInformation::UnixIPInterfaceProperties);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::NetworkInformation::UnixIPInterfaceProperties*, "System.Net.NetworkInformation", "UnixIPInterfaceProperties");
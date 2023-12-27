#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/X9/zzzz__X9ECParametersHolder_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(GMNamedCurves)
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Asn1::X9 {
class X9ECParametersHolder;
}
namespace Org::BouncyCastle::Asn1::GM {
class __GMNamedCurves__SM2P256V1Holder;
}
namespace Org::BouncyCastle::Math::EC {
class ECCurve;
}
namespace Org::BouncyCastle::Asn1::X9 {
class X9ECParameters;
}
namespace System::Collections {
class IDictionary;
}
namespace Org::BouncyCastle::Asn1::GM {
class __GMNamedCurves__WapiP192V1Holder;
}
namespace System::Collections {
class IEnumerable;
}
namespace Org::BouncyCastle::Asn1::X9 {
class X9ECPoint;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::GM {
class GMNamedCurves;
}
namespace Org::BouncyCastle::Asn1::GM {
class __GMNamedCurves__SM2P256V1Holder;
}
namespace Org::BouncyCastle::Asn1::GM {
class __GMNamedCurves__WapiP192V1Holder;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::GM::GMNamedCurves);
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::GM::__GMNamedCurves__SM2P256V1Holder);
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::GM::__GMNamedCurves__WapiP192V1Holder);
// Type: ::SM2P256V1Holder
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::GM {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(168))
// CS Name: ::GMNamedCurves::SM2P256V1Holder*
class CORDL_TYPE __GMNamedCurves__SM2P256V1Holder : public ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder {
public:
  // Declarations
  /// @brief Field Instance, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Instance, put = setStaticF_Instance))::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* Instance;

  static inline void setStaticF_Instance(::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* value);

  static inline ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* getStaticF_Instance();

  static inline ::Org::BouncyCastle::Asn1::GM::__GMNamedCurves__SM2P256V1Holder* New_ctor();

  /// @brief Method .ctor addr 0xe9d2ac size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method CreateParameters addr 0xe9d2b4 size 0x1d4 virtual true final false
  inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* CreateParameters();

  // Ctor Parameters [CppParam { name: "", ty: "__GMNamedCurves__SM2P256V1Holder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __GMNamedCurves__SM2P256V1Holder(__GMNamedCurves__SM2P256V1Holder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__GMNamedCurves__SM2P256V1Holder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __GMNamedCurves__SM2P256V1Holder(__GMNamedCurves__SM2P256V1Holder const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __GMNamedCurves__SM2P256V1Holder();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::GM::__GMNamedCurves__SM2P256V1Holder, 0x18>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::GM
// Type: ::WapiP192V1Holder
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::GM {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(169))
// CS Name: ::GMNamedCurves::WapiP192V1Holder*
class CORDL_TYPE __GMNamedCurves__WapiP192V1Holder : public ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder {
public:
  // Declarations
  /// @brief Field Instance, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Instance, put = setStaticF_Instance))::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* Instance;

  static inline void setStaticF_Instance(::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* value);

  static inline ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* getStaticF_Instance();

  static inline ::Org::BouncyCastle::Asn1::GM::__GMNamedCurves__WapiP192V1Holder* New_ctor();

  /// @brief Method .ctor addr 0xe9d4ec size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method CreateParameters addr 0xe9d4f4 size 0x1d4 virtual true final false
  inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* CreateParameters();

  // Ctor Parameters [CppParam { name: "", ty: "__GMNamedCurves__WapiP192V1Holder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __GMNamedCurves__WapiP192V1Holder(__GMNamedCurves__WapiP192V1Holder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__GMNamedCurves__WapiP192V1Holder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __GMNamedCurves__WapiP192V1Holder(__GMNamedCurves__WapiP192V1Holder const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __GMNamedCurves__WapiP192V1Holder();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::GM::__GMNamedCurves__WapiP192V1Holder, 0x18>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::GM
// Type: Org.BouncyCastle.Asn1.GM::GMNamedCurves
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::GM {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(170))
// CS Name: ::Org.BouncyCastle.Asn1.GM::GMNamedCurves*
class CORDL_TYPE GMNamedCurves : public ::System::Object {
public:
  // Declarations
  using WapiP192V1Holder = ::Org::BouncyCastle::Asn1::GM::__GMNamedCurves__WapiP192V1Holder;

  using SM2P256V1Holder = ::Org::BouncyCastle::Asn1::GM::__GMNamedCurves__SM2P256V1Holder;

  /// @brief Field objIds, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_objIds, put = setStaticF_objIds))::System::Collections::IDictionary* objIds;

  /// @brief Field curves, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_curves, put = setStaticF_curves))::System::Collections::IDictionary* curves;

  /// @brief Field names, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_names, put = setStaticF_names))::System::Collections::IDictionary* names;

  static inline void setStaticF_objIds(::System::Collections::IDictionary* value);

  static inline ::System::Collections::IDictionary* getStaticF_objIds();

  static inline void setStaticF_curves(::System::Collections::IDictionary* value);

  static inline ::System::Collections::IDictionary* getStaticF_curves();

  static inline void setStaticF_names(::System::Collections::IDictionary* value);

  static inline ::System::Collections::IDictionary* getStaticF_names();

  static inline ::Org::BouncyCastle::Asn1::GM::GMNamedCurves* New_ctor();

  /// @brief Method .ctor addr 0xe9c874 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method ConfigureBasepoint addr 0xe9c87c size 0xf0 virtual false final false
  static inline ::Org::BouncyCastle::Asn1::X9::X9ECPoint* ConfigureBasepoint(::Org::BouncyCastle::Math::EC::ECCurve* curve, ::StringW encoding);

  /// @brief Method ConfigureCurve addr 0xe9c96c size 0x4 virtual false final false
  static inline ::Org::BouncyCastle::Math::EC::ECCurve* ConfigureCurve(::Org::BouncyCastle::Math::EC::ECCurve* curve);

  /// @brief Method FromHex addr 0xe9c970 size 0xa0 virtual false final false
  static inline ::Org::BouncyCastle::Math::BigInteger* FromHex(::StringW hex);

  /// @brief Method DefineCurve addr 0xe9ca10 size 0x210 virtual false final false
  static inline void DefineCurve(::StringW name, ::Org::BouncyCastle::Asn1::DerObjectIdentifier* oid, ::Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* holder);

  /// @brief Method GetByName addr 0xe9cda0 size 0x80 virtual false final false
  static inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* GetByName(::StringW name);

  /// @brief Method GetByOid addr 0xe9cf74 size 0x12c virtual false final false
  static inline ::Org::BouncyCastle::Asn1::X9::X9ECParameters* GetByOid(::Org::BouncyCastle::Asn1::DerObjectIdentifier* oid);

  /// @brief Method GetOid addr 0xe9ce20 size 0x154 virtual false final false
  static inline ::Org::BouncyCastle::Asn1::DerObjectIdentifier* GetOid(::StringW name);

  /// @brief Method GetName addr 0xe9d0a0 size 0x100 virtual false final false
  static inline ::StringW GetName(::Org::BouncyCastle::Asn1::DerObjectIdentifier* oid);

  /// @brief Method get_Names addr 0xe9d1a0 size 0x10c virtual false final false
  static inline ::System::Collections::IEnumerable* get_Names();

  // Ctor Parameters [CppParam { name: "", ty: "GMNamedCurves", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GMNamedCurves(GMNamedCurves&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GMNamedCurves", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GMNamedCurves(GMNamedCurves const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GMNamedCurves();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::GM::GMNamedCurves, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::GM
NEED_NO_BOX(::Org::BouncyCastle::Asn1::GM::GMNamedCurves);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::GM::GMNamedCurves*, "Org.BouncyCastle.Asn1.GM", "GMNamedCurves");
NEED_NO_BOX(::Org::BouncyCastle::Asn1::GM::__GMNamedCurves__SM2P256V1Holder);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::GM::__GMNamedCurves__SM2P256V1Holder*, "Org.BouncyCastle.Asn1.GM", "GMNamedCurves/SM2P256V1Holder");
NEED_NO_BOX(::Org::BouncyCastle::Asn1::GM::__GMNamedCurves__WapiP192V1Holder);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::GM::__GMNamedCurves__WapiP192V1Holder*, "Org.BouncyCastle.Asn1.GM", "GMNamedCurves/WapiP192V1Holder");
#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SecureStringHasher)
namespace System::Collections::Generic {
template <typename T> class IEqualityComparer_1;
}
namespace System::Xml {
class __SecureStringHasher__HashCodeOfStringDelegate;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Xml {
class SecureStringHasher;
}
namespace System::Xml {
class __SecureStringHasher__HashCodeOfStringDelegate;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::SecureStringHasher);
MARK_REF_PTR_T(::System::Xml::__SecureStringHasher__HashCodeOfStringDelegate);
// Type: ::HashCodeOfStringDelegate
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Xml {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11441))
// CS Name: ::SecureStringHasher::HashCodeOfStringDelegate*
class CORDL_TYPE __SecureStringHasher__HashCodeOfStringDelegate : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::System::Xml::__SecureStringHasher__HashCodeOfStringDelegate* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor addr 0x285491c size 0xd8 virtual false final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke addr 0x28549f4 size 0x14 virtual true final false
  inline int32_t Invoke(::StringW s, int32_t sLen, int64_t additionalEntropy);

  // Ctor Parameters [CppParam { name: "", ty: "__SecureStringHasher__HashCodeOfStringDelegate", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __SecureStringHasher__HashCodeOfStringDelegate(__SecureStringHasher__HashCodeOfStringDelegate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__SecureStringHasher__HashCodeOfStringDelegate", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __SecureStringHasher__HashCodeOfStringDelegate(__SecureStringHasher__HashCodeOfStringDelegate const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __SecureStringHasher__HashCodeOfStringDelegate();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::__SecureStringHasher__HashCodeOfStringDelegate, 0x80>, "Size mismatch!");

} // namespace System::Xml
// Type: System.Xml::SecureStringHasher
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 20, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Xml {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11442))
// CS Name: ::System.Xml::SecureStringHasher*
class CORDL_TYPE SecureStringHasher : public ::System::Object {
public:
  // Declarations
  using HashCodeOfStringDelegate = ::System::Xml::__SecureStringHasher__HashCodeOfStringDelegate;

  /// @brief Field hashCodeRandomizer, offset 0x10, size 0x4
  __declspec(property(get = __get_hashCodeRandomizer, put = __set_hashCodeRandomizer)) int32_t hashCodeRandomizer;

  /// @brief Field hashCodeDelegate, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_hashCodeDelegate, put = setStaticF_hashCodeDelegate))::System::Xml::__SecureStringHasher__HashCodeOfStringDelegate* hashCodeDelegate;

  /// @brief Convert operator to "::System::Collections::Generic::IEqualityComparer_1<::StringW>"
  constexpr operator ::System::Collections::Generic::IEqualityComparer_1<::StringW>*() noexcept;

  constexpr int32_t& __get_hashCodeRandomizer();

  constexpr int32_t const& __get_hashCodeRandomizer() const;

  constexpr void __set_hashCodeRandomizer(int32_t value);

  static inline void setStaticF_hashCodeDelegate(::System::Xml::__SecureStringHasher__HashCodeOfStringDelegate* value);

  static inline ::System::Xml::__SecureStringHasher__HashCodeOfStringDelegate* getStaticF_hashCodeDelegate();

  static inline ::System::Xml::SecureStringHasher* New_ctor();

  /// @brief Method .ctor addr 0x2854680 size 0x24 virtual false final false
  inline void _ctor();

  /// @brief Method Equals addr 0x28546a4 size 0x18 virtual true final true
  inline bool Equals(::StringW x, ::StringW y);

  /// @brief Method GetHashCode addr 0x28546bc size 0x9c virtual true final true
  inline int32_t GetHashCode(::StringW key);

  /// @brief Method GetHashCodeOfString addr 0x28548b0 size 0x6c virtual false final false
  static inline int32_t GetHashCodeOfString(::StringW key, int32_t sLen, int64_t additionalEntropy);

  /// @brief Method GetHashCodeDelegate addr 0x2854758 size 0x158 virtual false final false
  static inline ::System::Xml::__SecureStringHasher__HashCodeOfStringDelegate* GetHashCodeDelegate();

  // Ctor Parameters [CppParam { name: "", ty: "SecureStringHasher", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SecureStringHasher(SecureStringHasher&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SecureStringHasher", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SecureStringHasher(SecureStringHasher const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SecureStringHasher();

public:
  /// @brief Field hashCodeRandomizer, offset: 0x10, size: 0x4, def value: None
  int32_t ___hashCodeRandomizer;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::SecureStringHasher, 0x18>, "Size mismatch!");

} // namespace System::Xml
NEED_NO_BOX(::System::Xml::SecureStringHasher);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::SecureStringHasher*, "System.Xml", "SecureStringHasher");
NEED_NO_BOX(::System::Xml::__SecureStringHasher__HashCodeOfStringDelegate);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::__SecureStringHasher__HashCodeOfStringDelegate*, "System.Xml", "SecureStringHasher/HashCodeOfStringDelegate");
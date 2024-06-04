#pragma once
// IWYU pragma private; include "System/Data/InvalidConstraintException.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Data/zzzz__DataException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(InvalidConstraintException)
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
// Forward declare root types
namespace System::Data {
class InvalidConstraintException;
}
// Write type traits
MARK_REF_PTR_T(::System::Data::InvalidConstraintException);
// Type: System.Data::InvalidConstraintException
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 140, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Data {
// Is value type: false
// CS Name: ::System.Data::InvalidConstraintException*
class CORDL_TYPE InvalidConstraintException : public ::System::Data::DataException {
public:
  // Declarations
  static inline ::System::Data::InvalidConstraintException* New_ctor();

  static inline ::System::Data::InvalidConstraintException* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  static inline ::System::Data::InvalidConstraintException* New_ctor(::StringW s);

  /// @brief Method .ctor, addr 0x2ca2e18, size 0x5c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x2ca2e10, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method .ctor, addr 0x2ca2e74, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(::StringW s);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InvalidConstraintException();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InvalidConstraintException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InvalidConstraintException(InvalidConstraintException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InvalidConstraintException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InvalidConstraintException(InvalidConstraintException const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Data::InvalidConstraintException, 0x90>, "Size mismatch!");

} // namespace System::Data
NEED_NO_BOX(::System::Data::InvalidConstraintException);
DEFINE_IL2CPP_ARG_TYPE(::System::Data::InvalidConstraintException*, "System.Data", "InvalidConstraintException");
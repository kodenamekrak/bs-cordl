#pragma once
// IWYU pragma private; include "System/AggregateException.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Exception_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(AggregateException)
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class IList_1;
}
namespace System::Collections::ObjectModel {
template <typename T> class ReadOnlyCollection_1;
}
namespace System::Runtime::ExceptionServices {
class ExceptionDispatchInfo;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System {
class Exception;
}
// Forward declare root types
namespace System {
class AggregateException;
}
// Write type traits
MARK_REF_PTR_T(::System::AggregateException);
// Type: System::AggregateException
// SizeInfo { instance_size: 152, native_size: -1, calculated_instance_size: 152, calculated_native_size: 152, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System {
// Is value type: false
// CS Name: ::System::AggregateException*
class CORDL_TYPE AggregateException : public ::System::Exception {
public:
  // Declarations
  __declspec(property(get = get_InnerExceptions)) ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Exception*>* InnerExceptions;

  __declspec(property(get = get_Message)) ::StringW Message;

  /// @brief Field m_innerExceptions, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_m_innerExceptions,
                      put = __cordl_internal_set_m_innerExceptions)) ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Exception*>* m_innerExceptions;

  /// @brief Method Flatten, addr 0x3cf3dc0, size 0x3b4, virtual false, abstract: false, final false
  inline ::System::AggregateException* Flatten();

  /// @brief Method GetObjectData, addr 0x3cf3c6c, size 0x14c, virtual true, abstract: false, final false
  inline void GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  static inline ::System::AggregateException* New_ctor();

  static inline ::System::AggregateException* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  static inline ::System::AggregateException* New_ctor(::System::Collections::Generic::IEnumerable_1<::System::Runtime::ExceptionServices::ExceptionDispatchInfo*>* innerExceptionInfos);

  static inline ::System::AggregateException* New_ctor(::ArrayW<::System::Exception*, ::Array<::System::Exception*>*> innerExceptions);

  static inline ::System::AggregateException* New_ctor(::System::Collections::Generic::IEnumerable_1<::System::Exception*>* innerExceptions);

  static inline ::System::AggregateException* New_ctor(::StringW message,
                                                       ::System::Collections::Generic::IEnumerable_1<::System::Runtime::ExceptionServices::ExceptionDispatchInfo*>* innerExceptionInfos);

  static inline ::System::AggregateException* New_ctor(::StringW message, ::System::Collections::Generic::IList_1<::System::Runtime::ExceptionServices::ExceptionDispatchInfo*>* innerExceptionInfos);

  static inline ::System::AggregateException* New_ctor(::StringW message, ::ArrayW<::System::Exception*, ::Array<::System::Exception*>*> innerExceptions);

  static inline ::System::AggregateException* New_ctor(::StringW message, ::System::Collections::Generic::IEnumerable_1<::System::Exception*>* innerExceptions);

  static inline ::System::AggregateException* New_ctor(::StringW message, ::System::Collections::Generic::IList_1<::System::Exception*>* innerExceptions);

  /// @brief Method ToString, addr 0x3cf4300, size 0x214, virtual true, abstract: false, final false
  inline ::StringW ToString();

  constexpr ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Exception*>*& __cordl_internal_get_m_innerExceptions();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Exception*>*> const& __cordl_internal_get_m_innerExceptions() const;

  constexpr void __cordl_internal_set_m_innerExceptions(::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Exception*>* value);

  /// @brief Method .ctor, addr 0x3cf2eac, size 0x124, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x3cf3a94, size 0x1d8, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method .ctor, addr 0x3cf3534, size 0x58, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::IEnumerable_1<::System::Runtime::ExceptionServices::ExceptionDispatchInfo*>* innerExceptionInfos);

  /// @brief Method .ctor, addr 0x3cf30e4, size 0x58, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<::System::Exception*, ::Array<::System::Exception*>*> innerExceptions);

  /// @brief Method .ctor, addr 0x3cf2fd0, size 0x58, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::IEnumerable_1<::System::Exception*>* innerExceptions);

  /// @brief Method .ctor, addr 0x3cf358c, size 0xbc, virtual false, abstract: false, final false
  inline void _ctor(::StringW message, ::System::Collections::Generic::IEnumerable_1<::System::Runtime::ExceptionServices::ExceptionDispatchInfo*>* innerExceptionInfos);

  /// @brief Method .ctor, addr 0x3cf3648, size 0x44c, virtual false, abstract: false, final false
  inline void _ctor(::StringW message, ::System::Collections::Generic::IList_1<::System::Runtime::ExceptionServices::ExceptionDispatchInfo*>* innerExceptionInfos);

  /// @brief Method .ctor, addr 0x3cf313c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor(::StringW message, ::ArrayW<::System::Exception*, ::Array<::System::Exception*>*> innerExceptions);

  /// @brief Method .ctor, addr 0x3cf3028, size 0xbc, virtual false, abstract: false, final false
  inline void _ctor(::StringW message, ::System::Collections::Generic::IEnumerable_1<::System::Exception*>* innerExceptions);

  /// @brief Method .ctor, addr 0x3cf3140, size 0x3d0, virtual false, abstract: false, final false
  inline void _ctor(::StringW message, ::System::Collections::Generic::IList_1<::System::Exception*>* innerExceptions);

  /// @brief Method get_InnerExceptions, addr 0x3cf3db8, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Exception*>* get_InnerExceptions();

  /// @brief Method get_Message, addr 0x3cf4174, size 0x18c, virtual true, abstract: false, final false
  inline ::StringW get_Message();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AggregateException();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AggregateException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AggregateException(AggregateException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AggregateException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AggregateException(AggregateException const&) = delete;

  /// @brief Field m_innerExceptions, offset: 0x90, size: 0x8, def value: None
  ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Exception*>* ___m_innerExceptions;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2344 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::AggregateException, 0x98>, "Size mismatch!");

static_assert(offsetof(::System::AggregateException, ___m_innerExceptions) == 0x90, "Offset mismatch!");

} // namespace System
NEED_NO_BOX(::System::AggregateException);
DEFINE_IL2CPP_ARG_TYPE(::System::AggregateException*, "System", "AggregateException");

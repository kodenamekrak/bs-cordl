#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/IO/zzzz__MemoryStream_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__ConfiguredTaskAwaitable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HttpContent)
namespace System::Net::Http {
class __HttpContent__FixedMemoryStream;
}
namespace System {
template <typename T> struct Nullable_1;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System::Net {
class TransportContext;
}
namespace System::Net::Http {
struct __HttpContent___LoadIntoBufferAsync_d__17;
}
namespace System::Text {
class Encoding;
}
namespace System::Net::Http {
struct __HttpContent___ReadAsStringAsync_d__20;
}
namespace System::Net::Http::Headers {
class HttpContentHeaders;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System {
class IDisposable;
}
namespace System::IO {
class Stream;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
struct AsyncTaskMethodBuilder;
}
namespace System::Runtime::CompilerServices {
struct __ConfiguredTaskAwaitable__ConfiguredTaskAwaiter;
}
namespace System::Runtime::CompilerServices {
template <typename TResult> struct AsyncTaskMethodBuilder_1;
}
// Forward declare root types
namespace System::Net::Http {
class HttpContent;
}
namespace System::Net::Http {
class __HttpContent__FixedMemoryStream;
}
namespace System::Net::Http {
struct __HttpContent___LoadIntoBufferAsync_d__17;
}
namespace System::Net::Http {
struct __HttpContent___ReadAsStringAsync_d__20;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::Http::HttpContent);
MARK_REF_PTR_T(::System::Net::Http::__HttpContent__FixedMemoryStream);
MARK_VAL_T(::System::Net::Http::__HttpContent___LoadIntoBufferAsync_d__17);
MARK_VAL_T(::System::Net::Http::__HttpContent___ReadAsStringAsync_d__20);
// Type: ::FixedMemoryStream
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Net::Http {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3566))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14646))
// CS Name: ::HttpContent::FixedMemoryStream*
class CORDL_TYPE __HttpContent__FixedMemoryStream : public ::System::IO::MemoryStream {
public:
  // Declarations
  /// @brief Field maxSize, offset 0x50, size 0x8
  __declspec(property(get = __get_maxSize, put = __set_maxSize)) int64_t maxSize;

  constexpr int64_t& __get_maxSize();

  constexpr int64_t const& __get_maxSize() const;

  constexpr void __set_maxSize(int64_t value);

  static inline ::System::Net::Http::__HttpContent__FixedMemoryStream* New_ctor(int64_t maxSize);

  /// @brief Method .ctor addr 0x283288c size 0x28 virtual false final false
  inline void _ctor(int64_t maxSize);

  /// @brief Method CheckOverflow addr 0x2832ae4 size 0xb0 virtual false final false
  inline void CheckOverflow(int32_t count);

  /// @brief Method WriteByte addr 0x2832bfc size 0x30 virtual true final false
  inline void WriteByte(uint8_t value);

  /// @brief Method Write addr 0x2832c2c size 0x48 virtual true final false
  inline void Write(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count);

  // Ctor Parameters [CppParam { name: "", ty: "__HttpContent__FixedMemoryStream", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __HttpContent__FixedMemoryStream(__HttpContent__FixedMemoryStream&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__HttpContent__FixedMemoryStream", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __HttpContent__FixedMemoryStream(__HttpContent__FixedMemoryStream const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __HttpContent__FixedMemoryStream();

public:
  /// @brief Field maxSize, offset: 0x50, size: 0x8, def value: None
  int64_t ___maxSize;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::Http::__HttpContent__FixedMemoryStream, 0x58>, "Size mismatch!");

} // namespace System::Net::Http
// Type: ::<LoadIntoBufferAsync>d__17
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Net::Http {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3395)), TypeDefinitionIndex(TypeDefinitionIndex(3401))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14647))
// CS Name: ::HttpContent::<LoadIntoBufferAsync>d__17
struct CORDL_TYPE __HttpContent___LoadIntoBufferAsync_d__17 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext addr 0x2832c74 size 0x264 virtual true final true
  inline void MoveNext();

  /// @brief Method SetStateMachine addr 0x2832ed8 size 0xc virtual true final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::System::Net::Http::HttpContent*", modifiers: "", def_value:
  // None }, CppParam { name: "maxBufferSize", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty:
  // "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter", modifiers: "", def_value: None }]
  constexpr __HttpContent___LoadIntoBufferAsync_d__17(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::System::Net::Http::HttpContent* __4__this,
                                                      int64_t maxBufferSize, ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __u__1) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __HttpContent___LoadIntoBufferAsync_d__17();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::System::Net::Http::HttpContent* __4__this;

  /// @brief Field maxBufferSize, offset: 0x28, size: 0x8, def value: None
  int64_t maxBufferSize;

  /// @brief Field <>u__1, offset: 0x30, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::Http::__HttpContent___LoadIntoBufferAsync_d__17, 0x40>, "Size mismatch!");

} // namespace System::Net::Http
// Type: ::<ReadAsStringAsync>d__20
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Net::Http {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3395)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3402), inst: 397 }),
// TypeDefinitionIndex(TypeDefinitionIndex(3402))} Self: TypeDefinitionIndex(TypeDefinitionIndex(14648)) CS Name: ::HttpContent::<ReadAsStringAsync>d__20
struct CORDL_TYPE __HttpContent___ReadAsStringAsync_d__20 {
public:
  // Declarations
  /// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
  constexpr operator ::System::Runtime::CompilerServices::IAsyncStateMachine*();

  /// @brief Method MoveNext addr 0x2832ee4 size 0x370 virtual true final true
  inline void MoveNext();

  /// @brief Method SetStateMachine addr 0x28333d0 size 0x58 virtual true final true
  inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);

  // Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty:
  // "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW>", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::System::Net::Http::HttpContent*", modifiers: "",
  // def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter", modifiers: "", def_value: None }]
  constexpr __HttpContent___ReadAsStringAsync_d__20(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW> __t__builder,
                                                    ::System::Net::Http::HttpContent* __4__this, ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __u__1) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __HttpContent___ReadAsStringAsync_d__20();

  /// @brief Field <>1__state, offset: 0x0, size: 0x4, def value: None
  int32_t __1__state;

  /// @brief Field <>t__builder, offset: 0x8, size: 0x18, def value: None
  ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW> __t__builder;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::System::Net::Http::HttpContent* __4__this;

  /// @brief Field <>u__1, offset: 0x28, size: 0x10, def value: None
  ::System::Runtime::CompilerServices::__ConfiguredTaskAwaitable__ConfiguredTaskAwaiter __u__1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::Http::__HttpContent___ReadAsStringAsync_d__20, 0x38>, "Size mismatch!");

} // namespace System::Net::Http
// Type: System.Net.Http::HttpContent
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Net::Http {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14649))
// CS Name: ::System.Net.Http::HttpContent*
class CORDL_TYPE HttpContent : public ::System::Object {
public:
  // Declarations
  using _ReadAsStringAsync_d__20 = ::System::Net::Http::__HttpContent___ReadAsStringAsync_d__20;

  using _LoadIntoBufferAsync_d__17 = ::System::Net::Http::__HttpContent___LoadIntoBufferAsync_d__17;

  using FixedMemoryStream = ::System::Net::Http::__HttpContent__FixedMemoryStream;

  /// @brief Field buffer, offset 0x10, size 0x8
  __declspec(property(get = __get_buffer, put = __set_buffer))::System::Net::Http::__HttpContent__FixedMemoryStream* buffer;

  /// @brief Field disposed, offset 0x18, size 0x1
  __declspec(property(get = __get_disposed, put = __set_disposed)) bool disposed;

  /// @brief Field headers, offset 0x20, size 0x8
  __declspec(property(get = __get_headers, put = __set_headers))::System::Net::Http::Headers::HttpContentHeaders* headers;

  __declspec(property(get = get_Headers))::System::Net::Http::Headers::HttpContentHeaders* Headers;

  __declspec(property(get = get_LoadedBufferLength))::System::Nullable_1<int64_t> LoadedBufferLength;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  constexpr ::System::Net::Http::__HttpContent__FixedMemoryStream*& __get_buffer();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::Http::__HttpContent__FixedMemoryStream*> const& __get_buffer() const;

  constexpr void __set_buffer(::System::Net::Http::__HttpContent__FixedMemoryStream* value);

  constexpr bool& __get_disposed();

  constexpr bool const& __get_disposed() const;

  constexpr void __set_disposed(bool value);

  constexpr ::System::Net::Http::Headers::HttpContentHeaders*& __get_headers();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::Http::Headers::HttpContentHeaders*> const& __get_headers() const;

  constexpr void __set_headers(::System::Net::Http::Headers::HttpContentHeaders* value);

  /// @brief Method get_Headers addr 0x282e3b4 size 0x6c virtual false final false
  inline ::System::Net::Http::Headers::HttpContentHeaders* get_Headers();

  /// @brief Method get_LoadedBufferLength addr 0x2832730 size 0x7c virtual false final false
  inline ::System::Nullable_1<int64_t> get_LoadedBufferLength();

  /// @brief Method CopyToAsync addr 0x28304c8 size 0x8 virtual false final false
  inline ::System::Threading::Tasks::Task* CopyToAsync(::System::IO::Stream* stream);

  /// @brief Method CopyToAsync addr 0x28327ac size 0x7c virtual false final false
  inline ::System::Threading::Tasks::Task* CopyToAsync(::System::IO::Stream* stream, ::System::Net::TransportContext* context);

  /// @brief Method CreateFixedMemoryStream addr 0x2832828 size 0x64 virtual false final false
  static inline ::System::Net::Http::__HttpContent__FixedMemoryStream* CreateFixedMemoryStream(int64_t maxBufferSize);

  /// @brief Method Dispose addr 0x28328b4 size 0x10 virtual true final true
  inline void Dispose();

  /// @brief Method Dispose addr 0x28328c4 size 0x2c virtual true final false
  inline void Dispose(bool disposing);

  /// @brief Method LoadIntoBufferAsync addr 0x28328f0 size 0x8 virtual false final false
  inline ::System::Threading::Tasks::Task* LoadIntoBufferAsync();

  /// @brief Method LoadIntoBufferAsync addr 0x28303f0 size 0xd8 virtual false final false
  inline ::System::Threading::Tasks::Task* LoadIntoBufferAsync(int64_t maxBufferSize);

  /// @brief Method ReadAsStringAsync addr 0x2832578 size 0xf0 virtual false final false
  inline ::System::Threading::Tasks::Task_1<::StringW>* ReadAsStringAsync();

  /// @brief Method GetEncodingFromBuffer addr 0x28328f8 size 0x178 virtual false final false
  static inline ::System::Text::Encoding* GetEncodingFromBuffer(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t length, ByRef<int32_t> preambleLength);

  /// @brief Method StartsWith addr 0x2832a70 size 0x74 virtual false final false
  static inline int32_t StartsWith(::ArrayW<uint8_t, ::Array<uint8_t>*> array, int32_t length, ::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  /// @brief Method SerializeToStreamAsync addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::System::Threading::Tasks::Task* SerializeToStreamAsync(::System::IO::Stream* stream, ::System::Net::TransportContext* context);

  /// @brief Method TryComputeLength addr 0x0 size 0xffffffffffffffff virtual true final false
  inline bool TryComputeLength(ByRef<int64_t> length);

  static inline ::System::Net::Http::HttpContent* New_ctor();

  /// @brief Method .ctor addr 0x2830b9c size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "HttpContent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HttpContent(HttpContent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HttpContent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HttpContent(HttpContent const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HttpContent();

public:
  /// @brief Field buffer, offset: 0x10, size: 0x8, def value: None
  ::System::Net::Http::__HttpContent__FixedMemoryStream* ___buffer;

  /// @brief Field disposed, offset: 0x18, size: 0x1, def value: None
  bool ___disposed;

  /// @brief Field headers, offset: 0x20, size: 0x8, def value: None
  ::System::Net::Http::Headers::HttpContentHeaders* ___headers;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::Http::HttpContent, 0x28>, "Size mismatch!");

} // namespace System::Net::Http
NEED_NO_BOX(::System::Net::Http::HttpContent);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Http::HttpContent*, "System.Net.Http", "HttpContent");
NEED_NO_BOX(::System::Net::Http::__HttpContent__FixedMemoryStream);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Http::__HttpContent__FixedMemoryStream*, "System.Net.Http", "HttpContent/FixedMemoryStream");
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Http::__HttpContent___LoadIntoBufferAsync_d__17, "System.Net.Http", "HttpContent/<LoadIntoBufferAsync>d__17");
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Http::__HttpContent___ReadAsStringAsync_d__20, "System.Net.Http", "HttpContent/<ReadAsStringAsync>d__20");
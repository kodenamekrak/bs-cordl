#pragma once
// IWYU pragma private; include "GlobalNamespace/MockBeatmapDataConverter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(MockBeatmapDataConverter)
namespace GlobalNamespace {
class IReadonlyBeatmapData;
}
namespace GlobalNamespace {
class MockBeatmapData;
}
namespace GlobalNamespace {
class MockNoteData;
}
namespace GlobalNamespace {
class MockObstacleData;
}
namespace GlobalNamespace {
class NoteData;
}
namespace GlobalNamespace {
class ObstacleData;
}
namespace GlobalNamespace {
class __MockBeatmapDataConverter____c;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
// Forward declare root types
namespace GlobalNamespace {
class MockBeatmapDataConverter;
}
namespace GlobalNamespace {
class __MockBeatmapDataConverter____c;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MockBeatmapDataConverter);
MARK_REF_PTR_T(::GlobalNamespace::__MockBeatmapDataConverter____c);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MockBeatmapDataConverter::<>c*
class CORDL_TYPE __MockBeatmapDataConverter____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::GlobalNamespace::__MockBeatmapDataConverter____c* __9;

  /// @brief Field <>9__0_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__0_0, put = setStaticF___9__0_0)) ::System::Func_2<::GlobalNamespace::NoteData*, bool>* __9__0_0;

  /// @brief Field <>9__0_1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__0_1, put = setStaticF___9__0_1)) ::System::Func_2<::GlobalNamespace::NoteData*, ::GlobalNamespace::MockNoteData*>* __9__0_1;

  /// @brief Field <>9__0_2, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__0_2, put = setStaticF___9__0_2)) ::System::Func_2<::GlobalNamespace::NoteData*, bool>* __9__0_2;

  /// @brief Field <>9__0_3, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__0_3, put = setStaticF___9__0_3)) ::System::Func_2<::GlobalNamespace::NoteData*, ::GlobalNamespace::MockNoteData*>* __9__0_3;

  /// @brief Field <>9__0_4, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__0_4, put = setStaticF___9__0_4)) ::System::Func_2<::GlobalNamespace::NoteData*, bool>* __9__0_4;

  /// @brief Field <>9__0_5, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__0_5, put = setStaticF___9__0_5)) ::System::Func_2<::GlobalNamespace::NoteData*, ::GlobalNamespace::MockNoteData*>* __9__0_5;

  /// @brief Field <>9__0_6, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__0_6, put = setStaticF___9__0_6)) ::System::Func_2<::GlobalNamespace::ObstacleData*, ::GlobalNamespace::MockObstacleData*>* __9__0_6;

  static inline ::GlobalNamespace::__MockBeatmapDataConverter____c* New_ctor();

  /// @brief Method <ToMockBeatmapData>b__0_0, addr 0x3b61ebc, size 0x20, virtual false, abstract: false, final false
  inline bool _ToMockBeatmapData_b__0_0(::GlobalNamespace::NoteData* nd);

  /// @brief Method <ToMockBeatmapData>b__0_1, addr 0x3b61edc, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::MockNoteData* _ToMockBeatmapData_b__0_1(::GlobalNamespace::NoteData* nd);

  /// @brief Method <ToMockBeatmapData>b__0_2, addr 0x3b61ee4, size 0x20, virtual false, abstract: false, final false
  inline bool _ToMockBeatmapData_b__0_2(::GlobalNamespace::NoteData* nd);

  /// @brief Method <ToMockBeatmapData>b__0_3, addr 0x3b61f04, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::MockNoteData* _ToMockBeatmapData_b__0_3(::GlobalNamespace::NoteData* nd);

  /// @brief Method <ToMockBeatmapData>b__0_4, addr 0x3b61f0c, size 0x20, virtual false, abstract: false, final false
  inline bool _ToMockBeatmapData_b__0_4(::GlobalNamespace::NoteData* nd);

  /// @brief Method <ToMockBeatmapData>b__0_5, addr 0x3b61f2c, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::MockNoteData* _ToMockBeatmapData_b__0_5(::GlobalNamespace::NoteData* nd);

  /// @brief Method <ToMockBeatmapData>b__0_6, addr 0x3b61f34, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::MockObstacleData* _ToMockBeatmapData_b__0_6(::GlobalNamespace::ObstacleData* od);

  /// @brief Method .ctor, addr 0x3b61eb4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::GlobalNamespace::__MockBeatmapDataConverter____c* getStaticF___9();

  static inline ::System::Func_2<::GlobalNamespace::NoteData*, bool>* getStaticF___9__0_0();

  static inline ::System::Func_2<::GlobalNamespace::NoteData*, ::GlobalNamespace::MockNoteData*>* getStaticF___9__0_1();

  static inline ::System::Func_2<::GlobalNamespace::NoteData*, bool>* getStaticF___9__0_2();

  static inline ::System::Func_2<::GlobalNamespace::NoteData*, ::GlobalNamespace::MockNoteData*>* getStaticF___9__0_3();

  static inline ::System::Func_2<::GlobalNamespace::NoteData*, bool>* getStaticF___9__0_4();

  static inline ::System::Func_2<::GlobalNamespace::NoteData*, ::GlobalNamespace::MockNoteData*>* getStaticF___9__0_5();

  static inline ::System::Func_2<::GlobalNamespace::ObstacleData*, ::GlobalNamespace::MockObstacleData*>* getStaticF___9__0_6();

  static inline void setStaticF___9(::GlobalNamespace::__MockBeatmapDataConverter____c* value);

  static inline void setStaticF___9__0_0(::System::Func_2<::GlobalNamespace::NoteData*, bool>* value);

  static inline void setStaticF___9__0_1(::System::Func_2<::GlobalNamespace::NoteData*, ::GlobalNamespace::MockNoteData*>* value);

  static inline void setStaticF___9__0_2(::System::Func_2<::GlobalNamespace::NoteData*, bool>* value);

  static inline void setStaticF___9__0_3(::System::Func_2<::GlobalNamespace::NoteData*, ::GlobalNamespace::MockNoteData*>* value);

  static inline void setStaticF___9__0_4(::System::Func_2<::GlobalNamespace::NoteData*, bool>* value);

  static inline void setStaticF___9__0_5(::System::Func_2<::GlobalNamespace::NoteData*, ::GlobalNamespace::MockNoteData*>* value);

  static inline void setStaticF___9__0_6(::System::Func_2<::GlobalNamespace::ObstacleData*, ::GlobalNamespace::MockObstacleData*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MockBeatmapDataConverter____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__MockBeatmapDataConverter____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MockBeatmapDataConverter____c(__MockBeatmapDataConverter____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MockBeatmapDataConverter____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MockBeatmapDataConverter____c(__MockBeatmapDataConverter____c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4520 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MockBeatmapDataConverter____c, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::MockBeatmapDataConverter
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MockBeatmapDataConverter*
class CORDL_TYPE MockBeatmapDataConverter : public ::System::Object {
public:
  // Declarations
  using __c = ::GlobalNamespace::__MockBeatmapDataConverter____c;

  /// @brief Method ToMockBeatmapData, addr 0x3b61480, size 0x8d0, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::MockBeatmapData* ToMockBeatmapData(::GlobalNamespace::IReadonlyBeatmapData* beatmapData);

  /// @brief Method ToMockNoteData, addr 0x3b61d50, size 0x84, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::MockNoteData* ToMockNoteData(::GlobalNamespace::NoteData* noteData);

  /// @brief Method ToMockObstacleData, addr 0x3b61dd4, size 0x84, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::MockObstacleData* ToMockObstacleData(::GlobalNamespace::ObstacleData* obstacleData);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MockBeatmapDataConverter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MockBeatmapDataConverter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MockBeatmapDataConverter(MockBeatmapDataConverter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MockBeatmapDataConverter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MockBeatmapDataConverter(MockBeatmapDataConverter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4521 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MockBeatmapDataConverter, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MockBeatmapDataConverter);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MockBeatmapDataConverter*, "", "MockBeatmapDataConverter");
NEED_NO_BOX(::GlobalNamespace::__MockBeatmapDataConverter____c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MockBeatmapDataConverter____c*, "", "MockBeatmapDataConverter/<>c");

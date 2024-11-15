#pragma once
// IWYU pragma private; include "GlobalNamespace/BurstSliderSpawner.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(BurstSliderSpawner)
namespace GlobalNamespace {
class NoteData;
}
namespace GlobalNamespace {
class SliderData;
}
namespace GlobalNamespace {
struct __BeatmapObjectSpawnMovementData__NoteSpawnData;
}
namespace GlobalNamespace {
struct __BeatmapObjectSpawnMovementData__SliderSpawnData;
}
namespace GlobalNamespace {
class __BurstSliderSpawner__ProcessNoteDataDelegate;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace GlobalNamespace {
class BurstSliderSpawner;
}
namespace GlobalNamespace {
class __BurstSliderSpawner__ProcessNoteDataDelegate;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BurstSliderSpawner);
MARK_REF_PTR_T(::GlobalNamespace::__BurstSliderSpawner__ProcessNoteDataDelegate);
// Type: ::ProcessNoteDataDelegate
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::BurstSliderSpawner::ProcessNoteDataDelegate*
class CORDL_TYPE __BurstSliderSpawner__ProcessNoteDataDelegate : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x3a88fe0, size 0xcc, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::GlobalNamespace::NoteData* noteData, ByRef<::GlobalNamespace::__BeatmapObjectSpawnMovementData__NoteSpawnData> noteSpawnData, bool forceIsFirstNote,
                                             ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x3a890ac, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(ByRef<::GlobalNamespace::__BeatmapObjectSpawnMovementData__NoteSpawnData> noteSpawnData, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x3a88fc8, size 0x18, virtual true, abstract: false, final false
  inline void Invoke(::GlobalNamespace::NoteData* noteData, ByRef<::GlobalNamespace::__BeatmapObjectSpawnMovementData__NoteSpawnData> noteSpawnData, bool forceIsFirstNote);

  static inline ::GlobalNamespace::__BurstSliderSpawner__ProcessNoteDataDelegate* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x3a88ec4, size 0x104, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BurstSliderSpawner__ProcessNoteDataDelegate();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__BurstSliderSpawner__ProcessNoteDataDelegate", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BurstSliderSpawner__ProcessNoteDataDelegate(__BurstSliderSpawner__ProcessNoteDataDelegate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BurstSliderSpawner__ProcessNoteDataDelegate", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BurstSliderSpawner__ProcessNoteDataDelegate(__BurstSliderSpawner__ProcessNoteDataDelegate const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4067 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BurstSliderSpawner__ProcessNoteDataDelegate, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::BurstSliderSpawner
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::BurstSliderSpawner*
class CORDL_TYPE BurstSliderSpawner : public ::System::Object {
public:
  // Declarations
  using ProcessNoteDataDelegate = ::GlobalNamespace::__BurstSliderSpawner__ProcessNoteDataDelegate;

  /// @brief Method BezierCurve, addr 0x3a88a60, size 0x78, virtual false, abstract: false, final false
  static inline void BezierCurve(::UnityEngine::Vector2 p0, ::UnityEngine::Vector2 p1, ::UnityEngine::Vector2 p2, float_t t, ByRef<::UnityEngine::Vector2> pos, ByRef<::UnityEngine::Vector2> tangent);

  /// @brief Method ProcessSliderData, addr 0x3a88ad8, size 0x3ec, virtual false, abstract: false, final false
  static inline void ProcessSliderData(::GlobalNamespace::SliderData* sliderData, ByRef<::GlobalNamespace::__BeatmapObjectSpawnMovementData__SliderSpawnData> sliderSpawnData, bool forceIsFirstNote,
                                       ::GlobalNamespace::__BurstSliderSpawner__ProcessNoteDataDelegate* processNoteData);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BurstSliderSpawner();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BurstSliderSpawner", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BurstSliderSpawner(BurstSliderSpawner&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BurstSliderSpawner", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BurstSliderSpawner(BurstSliderSpawner const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4068 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BurstSliderSpawner, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BurstSliderSpawner);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BurstSliderSpawner*, "", "BurstSliderSpawner");
NEED_NO_BOX(::GlobalNamespace::__BurstSliderSpawner__ProcessNoteDataDelegate);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BurstSliderSpawner__ProcessNoteDataDelegate*, "", "BurstSliderSpawner/ProcessNoteDataDelegate");

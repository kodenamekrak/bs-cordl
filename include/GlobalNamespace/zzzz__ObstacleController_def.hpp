#pragma once
// IWYU pragma private; include "GlobalNamespace/ObstacleController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ObstacleControllerBase_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "Zenject/zzzz__MonoMemoryPool_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ObstacleController)
namespace GlobalNamespace {
class ColorManager;
}
namespace GlobalNamespace {
class IAudioTimeSource;
}
namespace GlobalNamespace {
class IBeatmapObjectController;
}
namespace GlobalNamespace {
class ObstacleData;
}
namespace GlobalNamespace {
class PlayerTransforms;
}
namespace GlobalNamespace {
class StretchableObstacle;
}
namespace GlobalNamespace {
class __ObstacleController__Pool;
}
namespace GlobalNamespace {
class __ObstacleController___DissolveCoroutine_d__65;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
template <typename T1, typename T2> class Action_2;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace UnityEngine {
struct Bounds;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class ObstacleController;
}
namespace GlobalNamespace {
class __ObstacleController__Pool;
}
namespace GlobalNamespace {
class __ObstacleController___DissolveCoroutine_d__65;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ObstacleController);
MARK_REF_PTR_T(::GlobalNamespace::__ObstacleController__Pool);
MARK_REF_PTR_T(::GlobalNamespace::__ObstacleController___DissolveCoroutine_d__65);
// Type: ::Pool
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::ObstacleController::Pool*
class CORDL_TYPE __ObstacleController__Pool : public ::Zenject::MonoMemoryPool_1<::UnityW<::GlobalNamespace::ObstacleController>> {
public:
  // Declarations
  static inline ::GlobalNamespace::__ObstacleController__Pool* New_ctor();

  /// @brief Method .ctor, addr 0x3a9692c, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ObstacleController__Pool();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ObstacleController__Pool", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ObstacleController__Pool(__ObstacleController__Pool&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ObstacleController__Pool", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ObstacleController__Pool(__ObstacleController__Pool const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4130 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__ObstacleController__Pool, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::<DissolveCoroutine>d__65
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 44, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::ObstacleController::<DissolveCoroutine>d__65*
class CORDL_TYPE __ObstacleController___DissolveCoroutine_d__65 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object* System_Collections_Generic_IEnumerator_System_Object__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) ::System::Object* __2__current;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::ObstacleController> __4__this;

  /// @brief Field duration, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_duration, put = __cordl_internal_set_duration)) float_t duration;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x3a96978, size 0xe4, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::GlobalNamespace::__ObstacleController___DissolveCoroutine_d__65* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x3a96a5c, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x3a96a64, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x3a96a9c, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x3a96974, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Object*& __cordl_internal_get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get___2__current() const;

  constexpr ::UnityW<::GlobalNamespace::ObstacleController> const& __cordl_internal_get___4__this() const;

  constexpr ::UnityW<::GlobalNamespace::ObstacleController>& __cordl_internal_get___4__this();

  constexpr float_t const& __cordl_internal_get_duration() const;

  constexpr float_t& __cordl_internal_get_duration();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Object* value);

  constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::ObstacleController> value);

  constexpr void __cordl_internal_set_duration(float_t value);

  /// @brief Method .ctor, addr 0x3a96840, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ObstacleController___DissolveCoroutine_d__65();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ObstacleController___DissolveCoroutine_d__65", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ObstacleController___DissolveCoroutine_d__65(__ObstacleController___DissolveCoroutine_d__65&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ObstacleController___DissolveCoroutine_d__65", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ObstacleController___DissolveCoroutine_d__65(__ObstacleController___DissolveCoroutine_d__65 const&) = delete;

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Object* _____2__current;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::ObstacleController> _____4__this;

  /// @brief Field duration, offset: 0x28, size: 0x4, def value: None
  float_t ___duration;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4131 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__ObstacleController___DissolveCoroutine_d__65, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__ObstacleController___DissolveCoroutine_d__65, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ObstacleController___DissolveCoroutine_d__65, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ObstacleController___DissolveCoroutine_d__65, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__ObstacleController___DissolveCoroutine_d__65, ___duration) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::ObstacleController
// SizeInfo { instance_size: 296, native_size: -1, calculated_instance_size: 296, calculated_native_size: 296, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::ObstacleController*
class CORDL_TYPE ObstacleController : public ::GlobalNamespace::ObstacleControllerBase {
public:
  // Declarations
  using Pool = ::GlobalNamespace::__ObstacleController__Pool;

  using _DissolveCoroutine_d__65 = ::GlobalNamespace::__ObstacleController___DissolveCoroutine_d__65;

  /// @brief Field _audioTimeSyncController, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__audioTimeSyncController, put = __cordl_internal_set__audioTimeSyncController)) ::GlobalNamespace::IAudioTimeSource* _audioTimeSyncController;

  /// @brief Field _bounds, offset 0xd4, size 0x18
  __declspec(property(get = __cordl_internal_get__bounds, put = __cordl_internal_set__bounds)) ::UnityEngine::Bounds _bounds;

  /// @brief Field _color, offset 0xf8, size 0x10
  __declspec(property(get = __cordl_internal_get__color, put = __cordl_internal_set__color)) ::UnityEngine::Color _color;

  /// @brief Field _colorManager, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__colorManager, put = __cordl_internal_set__colorManager)) ::GlobalNamespace::ColorManager* _colorManager;

  /// @brief Field _dissolving, offset 0xec, size 0x1
  __declspec(property(get = __cordl_internal_get__dissolving, put = __cordl_internal_set__dissolving)) bool _dissolving;

  /// @brief Field _endDistanceOffset, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get__endDistanceOffset, put = __cordl_internal_set__endDistanceOffset)) float_t _endDistanceOffset;

  /// @brief Field _endPos, offset 0xac, size 0xc
  __declspec(property(get = __cordl_internal_get__endPos, put = __cordl_internal_set__endPos)) ::UnityEngine::Vector3 _endPos;

  /// @brief Field _finishMovementTime, offset 0xd0, size 0x4
  __declspec(property(get = __cordl_internal_get__finishMovementTime, put = __cordl_internal_set__finishMovementTime)) float_t _finishMovementTime;

  /// @brief Field _height, offset 0x8c, size 0x4
  __declspec(property(get = __cordl_internal_get__height, put = __cordl_internal_set__height)) float_t _height;

  /// @brief Field _inverseWorldRotation, offset 0x118, size 0x10
  __declspec(property(get = __cordl_internal_get__inverseWorldRotation, put = __cordl_internal_set__inverseWorldRotation)) ::UnityEngine::Quaternion _inverseWorldRotation;

  /// @brief Field _length, offset 0x90, size 0x4
  __declspec(property(get = __cordl_internal_get__length, put = __cordl_internal_set__length)) float_t _length;

  /// @brief Field _midPos, offset 0xa0, size 0xc
  __declspec(property(get = __cordl_internal_get__midPos, put = __cordl_internal_set__midPos)) ::UnityEngine::Vector3 _midPos;

  /// @brief Field _move1Duration, offset 0xb8, size 0x4
  __declspec(property(get = __cordl_internal_get__move1Duration, put = __cordl_internal_set__move1Duration)) float_t _move1Duration;

  /// @brief Field _move2Duration, offset 0xbc, size 0x4
  __declspec(property(get = __cordl_internal_get__move2Duration, put = __cordl_internal_set__move2Duration)) float_t _move2Duration;

  /// @brief Field _obstacleData, offset 0xf0, size 0x8
  __declspec(property(get = __cordl_internal_get__obstacleData, put = __cordl_internal_set__obstacleData)) ::GlobalNamespace::ObstacleData* _obstacleData;

  /// @brief Field _obstacleDuration, offset 0xc4, size 0x4
  __declspec(property(get = __cordl_internal_get__obstacleDuration, put = __cordl_internal_set__obstacleDuration)) float_t _obstacleDuration;

  /// @brief Field _passedAvoidedMarkReported, offset 0xc9, size 0x1
  __declspec(property(get = __cordl_internal_get__passedAvoidedMarkReported, put = __cordl_internal_set__passedAvoidedMarkReported)) bool _passedAvoidedMarkReported;

  /// @brief Field _passedAvoidedMarkTime, offset 0xcc, size 0x4
  __declspec(property(get = __cordl_internal_get__passedAvoidedMarkTime, put = __cordl_internal_set__passedAvoidedMarkTime)) float_t _passedAvoidedMarkTime;

  /// @brief Field _passedThreeQuartersOfMove2Reported, offset 0xc8, size 0x1
  __declspec(property(get = __cordl_internal_get__passedThreeQuartersOfMove2Reported, put = __cordl_internal_set__passedThreeQuartersOfMove2Reported)) bool _passedThreeQuartersOfMove2Reported;

  /// @brief Field _playerTransforms, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__playerTransforms, put = __cordl_internal_set__playerTransforms)) ::UnityW<::GlobalNamespace::PlayerTransforms> _playerTransforms;

  /// @brief Field _startPos, offset 0x94, size 0xc
  __declspec(property(get = __cordl_internal_get__startPos, put = __cordl_internal_set__startPos)) ::UnityEngine::Vector3 _startPos;

  /// @brief Field _startTimeOffset, offset 0xc0, size 0x4
  __declspec(property(get = __cordl_internal_get__startTimeOffset, put = __cordl_internal_set__startTimeOffset)) float_t _startTimeOffset;

  /// @brief Field _stretchableObstacle, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__stretchableObstacle, put = __cordl_internal_set__stretchableObstacle)) ::UnityW<::GlobalNamespace::StretchableObstacle> _stretchableObstacle;

  /// @brief Field _visualWrappers, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__visualWrappers,
                      put = __cordl_internal_set__visualWrappers)) ::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*>
      _visualWrappers;

  /// @brief Field _width, offset 0x88, size 0x4
  __declspec(property(get = __cordl_internal_get__width, put = __cordl_internal_set__width)) float_t _width;

  /// @brief Field _worldRotation, offset 0x108, size 0x10
  __declspec(property(get = __cordl_internal_get__worldRotation, put = __cordl_internal_set__worldRotation)) ::UnityEngine::Quaternion _worldRotation;

  __declspec(property(get = get_bounds)) ::UnityEngine::Bounds bounds;

  __declspec(property(get = get_color)) ::UnityEngine::Color color;

  /// @brief Field didDissolveEvent, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_didDissolveEvent, put = __cordl_internal_set_didDissolveEvent)) ::System::Action_1<::UnityW<::GlobalNamespace::ObstacleController>>* didDissolveEvent;

  /// @brief Field didUpdateProgress, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_didUpdateProgress,
                      put = __cordl_internal_set_didUpdateProgress)) ::System::Action_2<::UnityW<::GlobalNamespace::ObstacleController>, float_t>* didUpdateProgress;

  /// @brief Field finishedMovementEvent, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_finishedMovementEvent,
                      put = __cordl_internal_set_finishedMovementEvent)) ::System::Action_1<::UnityW<::GlobalNamespace::ObstacleController>>* finishedMovementEvent;

  __declspec(property(get = get_hasPassedAvoidedMark)) bool hasPassedAvoidedMark;

  __declspec(property(get = get_height)) float_t height;

  __declspec(property(get = get_length)) float_t length;

  __declspec(property(get = get_move1Duration)) float_t move1Duration;

  __declspec(property(get = get_move2Duration)) float_t move2Duration;

  __declspec(property(get = get_obstacleData)) ::GlobalNamespace::ObstacleData* obstacleData;

  /// @brief Field passedAvoidedMarkEvent, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_passedAvoidedMarkEvent,
                      put = __cordl_internal_set_passedAvoidedMarkEvent)) ::System::Action_1<::UnityW<::GlobalNamespace::ObstacleController>>* passedAvoidedMarkEvent;

  /// @brief Field passedThreeQuartersOfMove2Event, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_passedThreeQuartersOfMove2Event,
                      put = __cordl_internal_set_passedThreeQuartersOfMove2Event)) ::System::Action_1<::UnityW<::GlobalNamespace::ObstacleController>>* passedThreeQuartersOfMove2Event;

  __declspec(property(get = get_width)) float_t width;

  /// @brief Convert operator to "::GlobalNamespace::IBeatmapObjectController"
  constexpr operator ::GlobalNamespace::IBeatmapObjectController*() noexcept;

  /// @brief Method Dissolve, addr 0x3a96868, size 0x38, virtual true, abstract: false, final true
  inline void Dissolve(float_t duration);

  /// @brief Method DissolveCoroutine, addr 0x3a967d0, size 0x70, virtual false, abstract: false, final false
  inline ::System::Collections::IEnumerator* DissolveCoroutine(float_t duration);

  /// @brief Method GetPosForTime, addr 0x3a966ac, size 0x124, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 GetPosForTime(float_t time);

  /// @brief Method Hide, addr 0x3a968a0, size 0x6c, virtual true, abstract: false, final true
  inline void Hide(bool hide);

  /// @brief Method Init, addr 0x3a961cc, size 0x2e8, virtual true, abstract: false, final false
  inline void Init(::GlobalNamespace::ObstacleData* obstacleData, ::UnityEngine::Vector3 startPos, ::UnityEngine::Vector3 midPos, ::UnityEngine::Vector3 endPos, float_t move1Duration,
                   float_t move2Duration, float_t singleLineWidth, float_t height);

  /// @brief Method ManualUpdate, addr 0x3a964c0, size 0x1ec, virtual true, abstract: false, final false
  inline void ManualUpdate();

  static inline ::GlobalNamespace::ObstacleController* New_ctor();

  /// @brief Method Pause, addr 0x3a9690c, size 0x10, virtual true, abstract: false, final true
  inline void Pause(bool pause);

  /// @brief Method Update, addr 0x3a964b4, size 0xc, virtual false, abstract: false, final false
  inline void Update();

  constexpr ::GlobalNamespace::IAudioTimeSource*& __cordl_internal_get__audioTimeSyncController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IAudioTimeSource*> const& __cordl_internal_get__audioTimeSyncController() const;

  constexpr ::UnityEngine::Bounds const& __cordl_internal_get__bounds() const;

  constexpr ::UnityEngine::Bounds& __cordl_internal_get__bounds();

  constexpr ::UnityEngine::Color const& __cordl_internal_get__color() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get__color();

  constexpr ::GlobalNamespace::ColorManager*& __cordl_internal_get__colorManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ColorManager*> const& __cordl_internal_get__colorManager() const;

  constexpr bool const& __cordl_internal_get__dissolving() const;

  constexpr bool& __cordl_internal_get__dissolving();

  constexpr float_t const& __cordl_internal_get__endDistanceOffset() const;

  constexpr float_t& __cordl_internal_get__endDistanceOffset();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__endPos() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__endPos();

  constexpr float_t const& __cordl_internal_get__finishMovementTime() const;

  constexpr float_t& __cordl_internal_get__finishMovementTime();

  constexpr float_t const& __cordl_internal_get__height() const;

  constexpr float_t& __cordl_internal_get__height();

  constexpr ::UnityEngine::Quaternion const& __cordl_internal_get__inverseWorldRotation() const;

  constexpr ::UnityEngine::Quaternion& __cordl_internal_get__inverseWorldRotation();

  constexpr float_t const& __cordl_internal_get__length() const;

  constexpr float_t& __cordl_internal_get__length();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__midPos() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__midPos();

  constexpr float_t const& __cordl_internal_get__move1Duration() const;

  constexpr float_t& __cordl_internal_get__move1Duration();

  constexpr float_t const& __cordl_internal_get__move2Duration() const;

  constexpr float_t& __cordl_internal_get__move2Duration();

  constexpr ::GlobalNamespace::ObstacleData*& __cordl_internal_get__obstacleData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ObstacleData*> const& __cordl_internal_get__obstacleData() const;

  constexpr float_t const& __cordl_internal_get__obstacleDuration() const;

  constexpr float_t& __cordl_internal_get__obstacleDuration();

  constexpr bool const& __cordl_internal_get__passedAvoidedMarkReported() const;

  constexpr bool& __cordl_internal_get__passedAvoidedMarkReported();

  constexpr float_t const& __cordl_internal_get__passedAvoidedMarkTime() const;

  constexpr float_t& __cordl_internal_get__passedAvoidedMarkTime();

  constexpr bool const& __cordl_internal_get__passedThreeQuartersOfMove2Reported() const;

  constexpr bool& __cordl_internal_get__passedThreeQuartersOfMove2Reported();

  constexpr ::UnityW<::GlobalNamespace::PlayerTransforms> const& __cordl_internal_get__playerTransforms() const;

  constexpr ::UnityW<::GlobalNamespace::PlayerTransforms>& __cordl_internal_get__playerTransforms();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__startPos() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get__startPos();

  constexpr float_t const& __cordl_internal_get__startTimeOffset() const;

  constexpr float_t& __cordl_internal_get__startTimeOffset();

  constexpr ::UnityW<::GlobalNamespace::StretchableObstacle> const& __cordl_internal_get__stretchableObstacle() const;

  constexpr ::UnityW<::GlobalNamespace::StretchableObstacle>& __cordl_internal_get__stretchableObstacle();

  constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*> const& __cordl_internal_get__visualWrappers() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*>& __cordl_internal_get__visualWrappers();

  constexpr float_t const& __cordl_internal_get__width() const;

  constexpr float_t& __cordl_internal_get__width();

  constexpr ::UnityEngine::Quaternion const& __cordl_internal_get__worldRotation() const;

  constexpr ::UnityEngine::Quaternion& __cordl_internal_get__worldRotation();

  constexpr ::System::Action_1<::UnityW<::GlobalNamespace::ObstacleController>>*& __cordl_internal_get_didDissolveEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityW<::GlobalNamespace::ObstacleController>>*> const& __cordl_internal_get_didDissolveEvent() const;

  constexpr ::System::Action_2<::UnityW<::GlobalNamespace::ObstacleController>, float_t>*& __cordl_internal_get_didUpdateProgress();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::UnityW<::GlobalNamespace::ObstacleController>, float_t>*> const& __cordl_internal_get_didUpdateProgress() const;

  constexpr ::System::Action_1<::UnityW<::GlobalNamespace::ObstacleController>>*& __cordl_internal_get_finishedMovementEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityW<::GlobalNamespace::ObstacleController>>*> const& __cordl_internal_get_finishedMovementEvent() const;

  constexpr ::System::Action_1<::UnityW<::GlobalNamespace::ObstacleController>>*& __cordl_internal_get_passedAvoidedMarkEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityW<::GlobalNamespace::ObstacleController>>*> const& __cordl_internal_get_passedAvoidedMarkEvent() const;

  constexpr ::System::Action_1<::UnityW<::GlobalNamespace::ObstacleController>>*& __cordl_internal_get_passedThreeQuartersOfMove2Event();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityW<::GlobalNamespace::ObstacleController>>*> const& __cordl_internal_get_passedThreeQuartersOfMove2Event() const;

  constexpr void __cordl_internal_set__audioTimeSyncController(::GlobalNamespace::IAudioTimeSource* value);

  constexpr void __cordl_internal_set__bounds(::UnityEngine::Bounds value);

  constexpr void __cordl_internal_set__color(::UnityEngine::Color value);

  constexpr void __cordl_internal_set__colorManager(::GlobalNamespace::ColorManager* value);

  constexpr void __cordl_internal_set__dissolving(bool value);

  constexpr void __cordl_internal_set__endDistanceOffset(float_t value);

  constexpr void __cordl_internal_set__endPos(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set__finishMovementTime(float_t value);

  constexpr void __cordl_internal_set__height(float_t value);

  constexpr void __cordl_internal_set__inverseWorldRotation(::UnityEngine::Quaternion value);

  constexpr void __cordl_internal_set__length(float_t value);

  constexpr void __cordl_internal_set__midPos(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set__move1Duration(float_t value);

  constexpr void __cordl_internal_set__move2Duration(float_t value);

  constexpr void __cordl_internal_set__obstacleData(::GlobalNamespace::ObstacleData* value);

  constexpr void __cordl_internal_set__obstacleDuration(float_t value);

  constexpr void __cordl_internal_set__passedAvoidedMarkReported(bool value);

  constexpr void __cordl_internal_set__passedAvoidedMarkTime(float_t value);

  constexpr void __cordl_internal_set__passedThreeQuartersOfMove2Reported(bool value);

  constexpr void __cordl_internal_set__playerTransforms(::UnityW<::GlobalNamespace::PlayerTransforms> value);

  constexpr void __cordl_internal_set__startPos(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set__startTimeOffset(float_t value);

  constexpr void __cordl_internal_set__stretchableObstacle(::UnityW<::GlobalNamespace::StretchableObstacle> value);

  constexpr void __cordl_internal_set__visualWrappers(::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*> value);

  constexpr void __cordl_internal_set__width(float_t value);

  constexpr void __cordl_internal_set__worldRotation(::UnityEngine::Quaternion value);

  constexpr void __cordl_internal_set_didDissolveEvent(::System::Action_1<::UnityW<::GlobalNamespace::ObstacleController>>* value);

  constexpr void __cordl_internal_set_didUpdateProgress(::System::Action_2<::UnityW<::GlobalNamespace::ObstacleController>, float_t>* value);

  constexpr void __cordl_internal_set_finishedMovementEvent(::System::Action_1<::UnityW<::GlobalNamespace::ObstacleController>>* value);

  constexpr void __cordl_internal_set_passedAvoidedMarkEvent(::System::Action_1<::UnityW<::GlobalNamespace::ObstacleController>>* value);

  constexpr void __cordl_internal_set_passedThreeQuartersOfMove2Event(::System::Action_1<::UnityW<::GlobalNamespace::ObstacleController>>* value);

  /// @brief Method .ctor, addr 0x3a9691c, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_didDissolveEvent, addr 0x3a95eb0, size 0xb0, virtual false, abstract: false, final false
  inline void add_didDissolveEvent(::System::Action_1<::UnityW<::GlobalNamespace::ObstacleController>>* value);

  /// @brief Method add_didUpdateProgress, addr 0x3a96010, size 0xb0, virtual false, abstract: false, final false
  inline void add_didUpdateProgress(::System::Action_2<::UnityW<::GlobalNamespace::ObstacleController>, float_t>* value);

  /// @brief Method add_finishedMovementEvent, addr 0x3a95a90, size 0xb0, virtual false, abstract: false, final false
  inline void add_finishedMovementEvent(::System::Action_1<::UnityW<::GlobalNamespace::ObstacleController>>* value);

  /// @brief Method add_passedAvoidedMarkEvent, addr 0x3a95d50, size 0xb0, virtual false, abstract: false, final false
  inline void add_passedAvoidedMarkEvent(::System::Action_1<::UnityW<::GlobalNamespace::ObstacleController>>* value);

  /// @brief Method add_passedThreeQuartersOfMove2Event, addr 0x3a95bf0, size 0xb0, virtual false, abstract: false, final false
  inline void add_passedThreeQuartersOfMove2Event(::System::Action_1<::UnityW<::GlobalNamespace::ObstacleController>>* value);

  /// @brief Method get_bounds, addr 0x3a96170, size 0x14, virtual false, abstract: false, final false
  inline ::UnityEngine::Bounds get_bounds();

  /// @brief Method get_color, addr 0x3a961bc, size 0x10, virtual false, abstract: false, final false
  inline ::UnityEngine::Color get_color();

  /// @brief Method get_hasPassedAvoidedMark, addr 0x3a9618c, size 0x8, virtual false, abstract: false, final false
  inline bool get_hasPassedAvoidedMark();

  /// @brief Method get_height, addr 0x3a961ac, size 0x8, virtual false, abstract: false, final false
  inline float_t get_height();

  /// @brief Method get_length, addr 0x3a961b4, size 0x8, virtual false, abstract: false, final false
  inline float_t get_length();

  /// @brief Method get_move1Duration, addr 0x3a96194, size 0x8, virtual false, abstract: false, final false
  inline float_t get_move1Duration();

  /// @brief Method get_move2Duration, addr 0x3a9619c, size 0x8, virtual false, abstract: false, final false
  inline float_t get_move2Duration();

  /// @brief Method get_obstacleData, addr 0x3a96184, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::ObstacleData* get_obstacleData();

  /// @brief Method get_width, addr 0x3a961a4, size 0x8, virtual false, abstract: false, final false
  inline float_t get_width();

  /// @brief Convert to "::GlobalNamespace::IBeatmapObjectController"
  constexpr ::GlobalNamespace::IBeatmapObjectController* i___GlobalNamespace__IBeatmapObjectController() noexcept;

  /// @brief Method remove_didDissolveEvent, addr 0x3a95f60, size 0xb0, virtual false, abstract: false, final false
  inline void remove_didDissolveEvent(::System::Action_1<::UnityW<::GlobalNamespace::ObstacleController>>* value);

  /// @brief Method remove_didUpdateProgress, addr 0x3a960c0, size 0xb0, virtual false, abstract: false, final false
  inline void remove_didUpdateProgress(::System::Action_2<::UnityW<::GlobalNamespace::ObstacleController>, float_t>* value);

  /// @brief Method remove_finishedMovementEvent, addr 0x3a95b40, size 0xb0, virtual false, abstract: false, final false
  inline void remove_finishedMovementEvent(::System::Action_1<::UnityW<::GlobalNamespace::ObstacleController>>* value);

  /// @brief Method remove_passedAvoidedMarkEvent, addr 0x3a95e00, size 0xb0, virtual false, abstract: false, final false
  inline void remove_passedAvoidedMarkEvent(::System::Action_1<::UnityW<::GlobalNamespace::ObstacleController>>* value);

  /// @brief Method remove_passedThreeQuartersOfMove2Event, addr 0x3a95ca0, size 0xb0, virtual false, abstract: false, final false
  inline void remove_passedThreeQuartersOfMove2Event(::System::Action_1<::UnityW<::GlobalNamespace::ObstacleController>>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ObstacleController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ObstacleController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ObstacleController(ObstacleController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ObstacleController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ObstacleController(ObstacleController const&) = delete;

  /// @brief Field _stretchableObstacle, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::StretchableObstacle> ____stretchableObstacle;

  /// @brief Field _endDistanceOffset, offset: 0x38, size: 0x4, def value: None
  float_t ____endDistanceOffset;

  /// @brief Field _visualWrappers, offset: 0x40, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*> ____visualWrappers;

  /// @brief Field _playerTransforms, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PlayerTransforms> ____playerTransforms;

  /// @brief Field _audioTimeSyncController, offset: 0x50, size: 0x8, def value: None
  ::GlobalNamespace::IAudioTimeSource* ____audioTimeSyncController;

  /// @brief Field _colorManager, offset: 0x58, size: 0x8, def value: None
  ::GlobalNamespace::ColorManager* ____colorManager;

  /// @brief Field finishedMovementEvent, offset: 0x60, size: 0x8, def value: None
  ::System::Action_1<::UnityW<::GlobalNamespace::ObstacleController>>* ___finishedMovementEvent;

  /// @brief Field passedThreeQuartersOfMove2Event, offset: 0x68, size: 0x8, def value: None
  ::System::Action_1<::UnityW<::GlobalNamespace::ObstacleController>>* ___passedThreeQuartersOfMove2Event;

  /// @brief Field passedAvoidedMarkEvent, offset: 0x70, size: 0x8, def value: None
  ::System::Action_1<::UnityW<::GlobalNamespace::ObstacleController>>* ___passedAvoidedMarkEvent;

  /// @brief Field didDissolveEvent, offset: 0x78, size: 0x8, def value: None
  ::System::Action_1<::UnityW<::GlobalNamespace::ObstacleController>>* ___didDissolveEvent;

  /// @brief Field didUpdateProgress, offset: 0x80, size: 0x8, def value: None
  ::System::Action_2<::UnityW<::GlobalNamespace::ObstacleController>, float_t>* ___didUpdateProgress;

  /// @brief Field _width, offset: 0x88, size: 0x4, def value: None
  float_t ____width;

  /// @brief Field _height, offset: 0x8c, size: 0x4, def value: None
  float_t ____height;

  /// @brief Field _length, offset: 0x90, size: 0x4, def value: None
  float_t ____length;

  /// @brief Field _startPos, offset: 0x94, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____startPos;

  /// @brief Field _midPos, offset: 0xa0, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____midPos;

  /// @brief Field _endPos, offset: 0xac, size: 0xc, def value: None
  ::UnityEngine::Vector3 ____endPos;

  /// @brief Field _move1Duration, offset: 0xb8, size: 0x4, def value: None
  float_t ____move1Duration;

  /// @brief Field _move2Duration, offset: 0xbc, size: 0x4, def value: None
  float_t ____move2Duration;

  /// @brief Field _startTimeOffset, offset: 0xc0, size: 0x4, def value: None
  float_t ____startTimeOffset;

  /// @brief Field _obstacleDuration, offset: 0xc4, size: 0x4, def value: None
  float_t ____obstacleDuration;

  /// @brief Field _passedThreeQuartersOfMove2Reported, offset: 0xc8, size: 0x1, def value: None
  bool ____passedThreeQuartersOfMove2Reported;

  /// @brief Field _passedAvoidedMarkReported, offset: 0xc9, size: 0x1, def value: None
  bool ____passedAvoidedMarkReported;

  /// @brief Field _passedAvoidedMarkTime, offset: 0xcc, size: 0x4, def value: None
  float_t ____passedAvoidedMarkTime;

  /// @brief Field _finishMovementTime, offset: 0xd0, size: 0x4, def value: None
  float_t ____finishMovementTime;

  /// @brief Field _bounds, offset: 0xd4, size: 0x18, def value: None
  ::UnityEngine::Bounds ____bounds;

  /// @brief Field _dissolving, offset: 0xec, size: 0x1, def value: None
  bool ____dissolving;

  /// @brief Field _obstacleData, offset: 0xf0, size: 0x8, def value: None
  ::GlobalNamespace::ObstacleData* ____obstacleData;

  /// @brief Field _color, offset: 0xf8, size: 0x10, def value: None
  ::UnityEngine::Color ____color;

  /// @brief Field _worldRotation, offset: 0x108, size: 0x10, def value: None
  ::UnityEngine::Quaternion ____worldRotation;

  /// @brief Field _inverseWorldRotation, offset: 0x118, size: 0x10, def value: None
  ::UnityEngine::Quaternion ____inverseWorldRotation;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4132 };

  /// @brief Field kAvoidMarkTimeOffset offset 0xffffffff size 0x4
  static constexpr float_t kAvoidMarkTimeOffset{ 0.15 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ObstacleController, 0x128>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::ObstacleController, ____stretchableObstacle) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObstacleController, ____endDistanceOffset) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObstacleController, ____visualWrappers) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObstacleController, ____playerTransforms) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObstacleController, ____audioTimeSyncController) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObstacleController, ____colorManager) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObstacleController, ___finishedMovementEvent) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObstacleController, ___passedThreeQuartersOfMove2Event) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObstacleController, ___passedAvoidedMarkEvent) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObstacleController, ___didDissolveEvent) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObstacleController, ___didUpdateProgress) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObstacleController, ____width) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObstacleController, ____height) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObstacleController, ____length) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObstacleController, ____startPos) == 0x94, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObstacleController, ____midPos) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObstacleController, ____endPos) == 0xac, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObstacleController, ____move1Duration) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObstacleController, ____move2Duration) == 0xbc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObstacleController, ____startTimeOffset) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObstacleController, ____obstacleDuration) == 0xc4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObstacleController, ____passedThreeQuartersOfMove2Reported) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObstacleController, ____passedAvoidedMarkReported) == 0xc9, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObstacleController, ____passedAvoidedMarkTime) == 0xcc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObstacleController, ____finishMovementTime) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObstacleController, ____bounds) == 0xd4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObstacleController, ____dissolving) == 0xec, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObstacleController, ____obstacleData) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObstacleController, ____color) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObstacleController, ____worldRotation) == 0x108, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ObstacleController, ____inverseWorldRotation) == 0x118, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ObstacleController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ObstacleController*, "", "ObstacleController");
NEED_NO_BOX(::GlobalNamespace::__ObstacleController__Pool);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__ObstacleController__Pool*, "", "ObstacleController/Pool");
NEED_NO_BOX(::GlobalNamespace::__ObstacleController___DissolveCoroutine_d__65);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__ObstacleController___DissolveCoroutine_d__65*, "", "ObstacleController/<DissolveCoroutine>d__65");

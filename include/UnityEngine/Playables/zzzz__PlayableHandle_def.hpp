#pragma once
// IWYU pragma private; include "UnityEngine/Playables/PlayableHandle.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PlayableHandle)
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
namespace UnityEngine::Playables {
struct DirectorWrapMode;
}
namespace UnityEngine::Playables {
struct PlayState;
}
namespace UnityEngine::Playables {
struct PlayableGraph;
}
namespace UnityEngine::Playables {
struct PlayableTraversalMode;
}
namespace UnityEngine::Playables {
struct Playable;
}
// Forward declare root types
namespace UnityEngine::Playables {
struct PlayableHandle;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Playables::PlayableHandle);
// Type: UnityEngine.Playables::PlayableHandle
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 28, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Playables {
// Is value type: true
// CS Name: ::UnityEngine.Playables::PlayableHandle
struct CORDL_TYPE PlayableHandle {
public:
  // Declarations
  /// @brief Field m_Null, offset 0xffffffff, size 0x10
  static __declspec(property(get = getStaticF_m_Null, put = setStaticF_m_Null))::UnityEngine::Playables::PlayableHandle m_Null;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Playables::PlayableHandle>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::Playables::PlayableHandle>*();

  /// @brief Method CheckInputBounds, addr 0x34616f4, size 0x18, virtual false, abstract: false, final false
  inline bool CheckInputBounds(int32_t inputIndex);

  /// @brief Method CheckInputBounds, addr 0x34619b0, size 0x224, virtual false, abstract: false, final false
  inline bool CheckInputBounds(int32_t inputIndex, bool acceptAny);

  /// @brief Method CompareVersion, addr 0x3461850, size 0x34, virtual false, abstract: false, final false
  static inline bool CompareVersion(::UnityEngine::Playables::PlayableHandle lhs, ::UnityEngine::Playables::PlayableHandle rhs);

  /// @brief Method Equals, addr 0x34618fc, size 0x80, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::Playables::PlayableHandle other);

  /// @brief Method Equals, addr 0x3461884, size 0x78, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* p);

  /// @brief Method GetDuration, addr 0x34623d4, size 0x74, virtual false, abstract: false, final false
  inline double_t GetDuration();

  /// @brief Method GetDuration_Injected, addr 0x3462448, size 0x3c, virtual false, abstract: false, final false
  static inline double_t GetDuration_Injected(ByRef<::UnityEngine::Playables::PlayableHandle> _unity_self);

  /// @brief Method GetGraph, addr 0x346261c, size 0x8c, virtual false, abstract: false, final false
  inline ::UnityEngine::Playables::PlayableGraph GetGraph();

  /// @brief Method GetGraph_Injected, addr 0x34626a8, size 0x44, virtual false, abstract: false, final false
  static inline void GetGraph_Injected(ByRef<::UnityEngine::Playables::PlayableHandle> _unity_self, ByRef<::UnityEngine::Playables::PlayableGraph> ret);

  /// @brief Method GetHashCode, addr 0x346197c, size 0x34, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method GetInput, addr 0x3461610, size 0x4, virtual false, abstract: false, final false
  inline ::UnityEngine::Playables::Playable GetInput(int32_t inputPort);

  /// @brief Method GetInputCount, addr 0x3461bd4, size 0x74, virtual false, abstract: false, final false
  inline int32_t GetInputCount();

  /// @brief Method GetInputCount_Injected, addr 0x34626ec, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t GetInputCount_Injected(ByRef<::UnityEngine::Playables::PlayableHandle> _unity_self);

  /// @brief Method GetInputHandle, addr 0x3461614, size 0x9c, virtual false, abstract: false, final false
  inline ::UnityEngine::Playables::PlayableHandle GetInputHandle(int32_t index);

  /// @brief Method GetInputHandle_Injected, addr 0x3462c7c, size 0x54, virtual false, abstract: false, final false
  static inline void GetInputHandle_Injected(ByRef<::UnityEngine::Playables::PlayableHandle> _unity_self, int32_t index, ByRef<::UnityEngine::Playables::PlayableHandle> ret);

  /// @brief Method GetInputWeight, addr 0x34617a0, size 0x2c, virtual false, abstract: false, final false
  inline float_t GetInputWeight(int32_t inputIndex);

  /// @brief Method GetInputWeightFromIndex, addr 0x34617cc, size 0x84, virtual false, abstract: false, final false
  inline float_t GetInputWeightFromIndex(int32_t index);

  /// @brief Method GetInputWeightFromIndex_Injected, addr 0x3462d24, size 0x44, virtual false, abstract: false, final false
  static inline float_t GetInputWeightFromIndex_Injected(ByRef<::UnityEngine::Playables::PlayableHandle> _unity_self, int32_t index);

  /// @brief Method GetObject, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline T GetObject();

  /// @brief Method GetPlayState, addr 0x3461dfc, size 0x74, virtual false, abstract: false, final false
  inline ::UnityEngine::Playables::PlayState GetPlayState();

  /// @brief Method GetPlayState_Injected, addr 0x3461e70, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Playables::PlayState GetPlayState_Injected(ByRef<::UnityEngine::Playables::PlayableHandle> _unity_self);

  /// @brief Method GetPlayableType, addr 0x3460964, size 0x74, virtual false, abstract: false, final false
  inline ::System::Type* GetPlayableType();

  /// @brief Method GetPlayableType_Injected, addr 0x3461cf8, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::Type* GetPlayableType_Injected(ByRef<::UnityEngine::Playables::PlayableHandle> _unity_self);

  /// @brief Method GetPreviousTime, addr 0x34628dc, size 0x74, virtual false, abstract: false, final false
  inline double_t GetPreviousTime();

  /// @brief Method GetPreviousTime_Injected, addr 0x3462950, size 0x3c, virtual false, abstract: false, final false
  static inline double_t GetPreviousTime_Injected(ByRef<::UnityEngine::Playables::PlayableHandle> _unity_self);

  /// @brief Method GetScriptInstance, addr 0x3462bcc, size 0x74, virtual false, abstract: false, final false
  inline ::System::Object* GetScriptInstance();

  /// @brief Method GetScriptInstance_Injected, addr 0x3462c40, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::Object* GetScriptInstance_Injected(ByRef<::UnityEngine::Playables::PlayableHandle> _unity_self);

  /// @brief Method GetTime, addr 0x34620dc, size 0x74, virtual false, abstract: false, final false
  inline double_t GetTime();

  /// @brief Method GetTimeWrapMode, addr 0x3462a54, size 0x74, virtual false, abstract: false, final false
  inline ::UnityEngine::Playables::DirectorWrapMode GetTimeWrapMode();

  /// @brief Method GetTimeWrapMode_Injected, addr 0x3462ac8, size 0x3c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Playables::DirectorWrapMode GetTimeWrapMode_Injected(ByRef<::UnityEngine::Playables::PlayableHandle> _unity_self);

  /// @brief Method GetTime_Injected, addr 0x3462150, size 0x3c, virtual false, abstract: false, final false
  static inline double_t GetTime_Injected(ByRef<::UnityEngine::Playables::PlayableHandle> _unity_self);

  /// @brief Method IsDone, addr 0x346225c, size 0x74, virtual false, abstract: false, final false
  inline bool IsDone();

  /// @brief Method IsDone_Injected, addr 0x34622d0, size 0x3c, virtual false, abstract: false, final false
  static inline bool IsDone_Injected(ByRef<::UnityEngine::Playables::PlayableHandle> _unity_self);

  /// @brief Method IsPlayableOfType, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline bool IsPlayableOfType();

  /// @brief Method IsValid, addr 0x3461c48, size 0x74, virtual false, abstract: false, final false
  inline bool IsValid();

  /// @brief Method IsValid_Injected, addr 0x3461cbc, size 0x3c, virtual false, abstract: false, final false
  static inline bool IsValid_Injected(ByRef<::UnityEngine::Playables::PlayableHandle> _unity_self);

  /// @brief Method Pause, addr 0x3461f5c, size 0x74, virtual false, abstract: false, final false
  inline void Pause();

  /// @brief Method Pause_Injected, addr 0x3461fd0, size 0x3c, virtual false, abstract: false, final false
  static inline void Pause_Injected(ByRef<::UnityEngine::Playables::PlayableHandle> _unity_self);

  /// @brief Method Play, addr 0x3461eac, size 0x74, virtual false, abstract: false, final false
  inline void Play();

  /// @brief Method Play_Injected, addr 0x3461f20, size 0x3c, virtual false, abstract: false, final false
  static inline void Play_Injected(ByRef<::UnityEngine::Playables::PlayableHandle> _unity_self);

  /// @brief Method SetDone, addr 0x346230c, size 0x84, virtual false, abstract: false, final false
  inline void SetDone(bool value);

  /// @brief Method SetDone_Injected, addr 0x3462390, size 0x44, virtual false, abstract: false, final false
  static inline void SetDone_Injected(ByRef<::UnityEngine::Playables::PlayableHandle> _unity_self, bool value);

  /// @brief Method SetDuration, addr 0x3462484, size 0x84, virtual false, abstract: false, final false
  inline void SetDuration(double_t value);

  /// @brief Method SetDuration_Injected, addr 0x3462508, size 0x4c, virtual false, abstract: false, final false
  static inline void SetDuration_Injected(ByRef<::UnityEngine::Playables::PlayableHandle> _unity_self, double_t value);

  /// @brief Method SetInputCount, addr 0x3462728, size 0x84, virtual false, abstract: false, final false
  inline void SetInputCount(int32_t value);

  /// @brief Method SetInputCount_Injected, addr 0x34627ac, size 0x44, virtual false, abstract: false, final false
  static inline void SetInputCount_Injected(ByRef<::UnityEngine::Playables::PlayableHandle> _unity_self, int32_t value);

  /// @brief Method SetInputWeight, addr 0x34616b0, size 0x44, virtual false, abstract: false, final false
  inline bool SetInputWeight(int32_t inputIndex, float_t weight);

  /// @brief Method SetInputWeight, addr 0x34627f0, size 0x98, virtual false, abstract: false, final false
  inline void SetInputWeight(::UnityEngine::Playables::PlayableHandle input, float_t weight);

  /// @brief Method SetInputWeightFromIndex, addr 0x346170c, size 0x94, virtual false, abstract: false, final false
  inline void SetInputWeightFromIndex(int32_t index, float_t weight);

  /// @brief Method SetInputWeightFromIndex_Injected, addr 0x3462cd0, size 0x54, virtual false, abstract: false, final false
  static inline void SetInputWeightFromIndex_Injected(ByRef<::UnityEngine::Playables::PlayableHandle> _unity_self, int32_t index, float_t weight);

  /// @brief Method SetInputWeight_Injected, addr 0x3462888, size 0x54, virtual false, abstract: false, final false
  static inline void SetInputWeight_Injected(ByRef<::UnityEngine::Playables::PlayableHandle> _unity_self, ByRef<::UnityEngine::Playables::PlayableHandle> input, float_t weight);

  /// @brief Method SetPropagateSetTime, addr 0x3462554, size 0x84, virtual false, abstract: false, final false
  inline void SetPropagateSetTime(bool value);

  /// @brief Method SetPropagateSetTime_Injected, addr 0x34625d8, size 0x44, virtual false, abstract: false, final false
  static inline void SetPropagateSetTime_Injected(ByRef<::UnityEngine::Playables::PlayableHandle> _unity_self, bool value);

  /// @brief Method SetScriptInstance, addr 0x3461d34, size 0x84, virtual false, abstract: false, final false
  inline void SetScriptInstance(::System::Object* scriptInstance);

  /// @brief Method SetScriptInstance_Injected, addr 0x3461db8, size 0x44, virtual false, abstract: false, final false
  static inline void SetScriptInstance_Injected(ByRef<::UnityEngine::Playables::PlayableHandle> _unity_self, ::System::Object* scriptInstance);

  /// @brief Method SetSpeed, addr 0x346200c, size 0x84, virtual false, abstract: false, final false
  inline void SetSpeed(double_t value);

  /// @brief Method SetSpeed_Injected, addr 0x3462090, size 0x4c, virtual false, abstract: false, final false
  static inline void SetSpeed_Injected(ByRef<::UnityEngine::Playables::PlayableHandle> _unity_self, double_t value);

  /// @brief Method SetTime, addr 0x346218c, size 0x84, virtual false, abstract: false, final false
  inline void SetTime(double_t value);

  /// @brief Method SetTimeWrapMode, addr 0x3462b04, size 0x84, virtual false, abstract: false, final false
  inline void SetTimeWrapMode(::UnityEngine::Playables::DirectorWrapMode mode);

  /// @brief Method SetTimeWrapMode_Injected, addr 0x3462b88, size 0x44, virtual false, abstract: false, final false
  static inline void SetTimeWrapMode_Injected(ByRef<::UnityEngine::Playables::PlayableHandle> _unity_self, ::UnityEngine::Playables::DirectorWrapMode mode);

  /// @brief Method SetTime_Injected, addr 0x3462210, size 0x4c, virtual false, abstract: false, final false
  static inline void SetTime_Injected(ByRef<::UnityEngine::Playables::PlayableHandle> _unity_self, double_t value);

  /// @brief Method SetTraversalMode, addr 0x346298c, size 0x84, virtual false, abstract: false, final false
  inline void SetTraversalMode(::UnityEngine::Playables::PlayableTraversalMode mode);

  /// @brief Method SetTraversalMode_Injected, addr 0x3462a10, size 0x44, virtual false, abstract: false, final false
  static inline void SetTraversalMode_Injected(ByRef<::UnityEngine::Playables::PlayableHandle> _unity_self, ::UnityEngine::Playables::PlayableTraversalMode mode);

  static inline ::UnityEngine::Playables::PlayableHandle getStaticF_m_Null();

  /// @brief Method get_Null, addr 0x3460abc, size 0x58, virtual false, abstract: false, final false
  static inline ::UnityEngine::Playables::PlayableHandle get_Null();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::Playables::PlayableHandle>"
  constexpr ::System::IEquatable_1<::UnityEngine::Playables::PlayableHandle>* i___System__IEquatable_1___UnityEngine__Playables__PlayableHandle_();

  /// @brief Method op_Equality, addr 0x345f3d4, size 0x88, virtual false, abstract: false, final false
  static inline bool op_Equality(::UnityEngine::Playables::PlayableHandle x, ::UnityEngine::Playables::PlayableHandle y);

  static inline void setStaticF_m_Null(::UnityEngine::Playables::PlayableHandle value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr PlayableHandle();

  // Ctor Parameters [CppParam { name: "m_Handle", ty: "::System::IntPtr", modifiers: "", def_value: None }, CppParam { name: "m_Version", ty: "uint32_t", modifiers: "", def_value: None }]
  constexpr PlayableHandle(::System::IntPtr m_Handle, uint32_t m_Version) noexcept;

  /// @brief Field m_Handle, offset: 0x0, size: 0x8, def value: None
  ::System::IntPtr m_Handle;

  /// @brief Field m_Version, offset: 0x8, size: 0x4, def value: None
  uint32_t m_Version;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Playables::PlayableHandle, 0x10>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Playables::PlayableHandle, m_Handle) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Playables::PlayableHandle, m_Version) == 0x8, "Offset mismatch!");

} // namespace UnityEngine::Playables
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Playables::PlayableHandle, "UnityEngine.Playables", "PlayableHandle");

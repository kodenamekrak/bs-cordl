#pragma once
// IWYU pragma private; include "UnityEngine/ProBuilder/Smoothing.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Smoothing)
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace UnityEngine::ProBuilder {
struct EdgeLookup;
}
namespace UnityEngine::ProBuilder {
class Face;
}
namespace UnityEngine::ProBuilder {
class ProBuilderMesh;
}
namespace UnityEngine::ProBuilder {
class WingedEdge;
}
namespace UnityEngine::ProBuilder {
class __Smoothing____c;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::ProBuilder {
class Smoothing;
}
namespace UnityEngine::ProBuilder {
class __Smoothing____c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ProBuilder::Smoothing);
MARK_REF_PTR_T(::UnityEngine::ProBuilder::__Smoothing____c);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::ProBuilder {
// Is value type: false
// CS Name: ::Smoothing::<>c*
class CORDL_TYPE __Smoothing____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::ProBuilder::__Smoothing____c* __9;

  /// @brief Field <>9__5_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__5_0, put = setStaticF___9__5_0)) ::System::Func_2<::UnityEngine::ProBuilder::Face*, int32_t>* __9__5_0;

  /// @brief Field <>9__9_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__9_0, put = setStaticF___9__9_0)) ::System::Func_2<::UnityEngine::ProBuilder::Face*, int32_t>* __9__9_0;

  static inline ::UnityEngine::ProBuilder::__Smoothing____c* New_ctor();

  /// @brief Method <ApplySmoothingGroups>b__9_0, addr 0x46dd884, size 0x18, virtual false, abstract: false, final false
  inline int32_t _ApplySmoothingGroups_b__9_0(::UnityEngine::ProBuilder::Face* x);

  /// @brief Method <GetUnusedSmoothingGroup>b__5_0, addr 0x46dd86c, size 0x18, virtual false, abstract: false, final false
  inline int32_t _GetUnusedSmoothingGroup_b__5_0(::UnityEngine::ProBuilder::Face* x);

  /// @brief Method .ctor, addr 0x46dd864, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::ProBuilder::__Smoothing____c* getStaticF___9();

  static inline ::System::Func_2<::UnityEngine::ProBuilder::Face*, int32_t>* getStaticF___9__5_0();

  static inline ::System::Func_2<::UnityEngine::ProBuilder::Face*, int32_t>* getStaticF___9__9_0();

  static inline void setStaticF___9(::UnityEngine::ProBuilder::__Smoothing____c* value);

  static inline void setStaticF___9__5_0(::System::Func_2<::UnityEngine::ProBuilder::Face*, int32_t>* value);

  static inline void setStaticF___9__9_0(::System::Func_2<::UnityEngine::ProBuilder::Face*, int32_t>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Smoothing____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__Smoothing____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Smoothing____c(__Smoothing____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Smoothing____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Smoothing____c(__Smoothing____c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14282 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::__Smoothing____c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::ProBuilder
// Type: UnityEngine.ProBuilder::Smoothing
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::ProBuilder {
// Is value type: false
// CS Name: ::UnityEngine.ProBuilder::Smoothing*
class CORDL_TYPE Smoothing : public ::System::Object {
public:
  // Declarations
  using __c = ::UnityEngine::ProBuilder::__Smoothing____c;

  /// @brief Method ApplySmoothingGroups, addr 0x46dc8b4, size 0x8, virtual false, abstract: false, final false
  static inline void ApplySmoothingGroups(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>* faces,
                                          float_t angleThreshold);

  /// @brief Method ApplySmoothingGroups, addr 0x46dc8bc, size 0x858, virtual false, abstract: false, final false
  static inline void ApplySmoothingGroups(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>* faces,
                                          float_t angleThreshold, ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> normals);

  /// @brief Method FindSoftEdgesRecursive, addr 0x46dd114, size 0x2dc, virtual false, abstract: false, final false
  static inline bool FindSoftEdgesRecursive(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> normals, ::UnityEngine::ProBuilder::WingedEdge* wing, float_t angleThreshold,
                                            ::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Face*>* processed);

  /// @brief Method GetNextUnusedSmoothingGroup, addr 0x46dc7e4, size 0xb0, virtual false, abstract: false, final false
  static inline int32_t GetNextUnusedSmoothingGroup(int32_t start, ::System::Collections::Generic::HashSet_1<int32_t>* used);

  /// @brief Method GetUnusedSmoothingGroup, addr 0x46dc60c, size 0x1d8, virtual false, abstract: false, final false
  static inline int32_t GetUnusedSmoothingGroup(::UnityEngine::ProBuilder::ProBuilderMesh* mesh);

  /// @brief Method IsSmooth, addr 0x46dc894, size 0x20, virtual false, abstract: false, final false
  static inline bool IsSmooth(int32_t index);

  /// @brief Method IsSoftEdge, addr 0x46dd3f0, size 0x418, virtual false, abstract: false, final false
  static inline bool IsSoftEdge(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> normals, ::UnityEngine::ProBuilder::EdgeLookup left, ::UnityEngine::ProBuilder::EdgeLookup right,
                                float_t threshold);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Smoothing();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Smoothing", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Smoothing(Smoothing&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Smoothing", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Smoothing(Smoothing const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14283 };

  /// @brief Field hardRangeMax offset 0xffffffff size 0x4
  static constexpr int32_t hardRangeMax{ static_cast<int32_t>(0x2a) };

  /// @brief Field hardRangeMin offset 0xffffffff size 0x4
  static constexpr int32_t hardRangeMin{ static_cast<int32_t>(0x19) };

  /// @brief Field smoothRangeMax offset 0xffffffff size 0x4
  static constexpr int32_t smoothRangeMax{ static_cast<int32_t>(0x18) };

  /// @brief Field smoothRangeMin offset 0xffffffff size 0x4
  static constexpr int32_t smoothRangeMin{ static_cast<int32_t>(0x1) };

  /// @brief Field smoothingGroupNone offset 0xffffffff size 0x4
  static constexpr int32_t smoothingGroupNone{ static_cast<int32_t>(0x0) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::Smoothing, 0x10>, "Size mismatch!");

} // namespace UnityEngine::ProBuilder
NEED_NO_BOX(::UnityEngine::ProBuilder::Smoothing);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::Smoothing*, "UnityEngine.ProBuilder", "Smoothing");
NEED_NO_BOX(::UnityEngine::ProBuilder::__Smoothing____c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::__Smoothing____c*, "UnityEngine.ProBuilder", "Smoothing/<>c");

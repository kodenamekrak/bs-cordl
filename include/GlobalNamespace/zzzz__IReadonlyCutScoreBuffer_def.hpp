#pragma once
// IWYU pragma private; include "GlobalNamespace/IReadonlyCutScoreBuffer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(IReadonlyCutScoreBuffer)
namespace GlobalNamespace {
class ICutScoreBufferDidChangeReceiver;
}
namespace GlobalNamespace {
class ICutScoreBufferDidFinishReceiver;
}
namespace GlobalNamespace {
struct NoteCutInfo;
}
namespace GlobalNamespace {
class ScoreModel_NoteScoreDefinition;
}
// Forward declare root types
namespace GlobalNamespace {
class IReadonlyCutScoreBuffer;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::IReadonlyCutScoreBuffer);
// Dependencies
namespace GlobalNamespace {
// Is value type: false
// CS Name: IReadonlyCutScoreBuffer
class CORDL_TYPE IReadonlyCutScoreBuffer {
public:
  // Declarations
  __declspec(property(get = get_afterCutScore)) int32_t afterCutScore;

  __declspec(property(get = get_afterCutSwingRating)) float_t afterCutSwingRating;

  __declspec(property(get = get_beforeCutScore)) int32_t beforeCutScore;

  __declspec(property(get = get_beforeCutSwingRating)) float_t beforeCutSwingRating;

  __declspec(property(get = get_centerDistanceCutScore)) int32_t centerDistanceCutScore;

  __declspec(property(get = get_cutScore)) int32_t cutScore;

  __declspec(property(get = get_isFinished)) bool isFinished;

  __declspec(property(get = get_maxPossibleCutScore)) int32_t maxPossibleCutScore;

  __declspec(property(get = get_noteCutInfo)) ::GlobalNamespace::NoteCutInfo noteCutInfo;

  __declspec(property(get = get_noteScoreDefinition)) ::GlobalNamespace::ScoreModel_NoteScoreDefinition* noteScoreDefinition;

  /// @brief Method RegisterDidChangeReceiver, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void RegisterDidChangeReceiver(::GlobalNamespace::ICutScoreBufferDidChangeReceiver* receiver);

  /// @brief Method RegisterDidFinishReceiver, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void RegisterDidFinishReceiver(::GlobalNamespace::ICutScoreBufferDidFinishReceiver* receiver);

  /// @brief Method UnregisterDidChangeReceiver, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void UnregisterDidChangeReceiver(::GlobalNamespace::ICutScoreBufferDidChangeReceiver* receiver);

  /// @brief Method UnregisterDidFinishReceiver, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void UnregisterDidFinishReceiver(::GlobalNamespace::ICutScoreBufferDidFinishReceiver* receiver);

  /// @brief Method get_afterCutScore, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int32_t get_afterCutScore();

  /// @brief Method get_afterCutSwingRating, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline float_t get_afterCutSwingRating();

  /// @brief Method get_beforeCutScore, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int32_t get_beforeCutScore();

  /// @brief Method get_beforeCutSwingRating, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline float_t get_beforeCutSwingRating();

  /// @brief Method get_centerDistanceCutScore, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int32_t get_centerDistanceCutScore();

  /// @brief Method get_cutScore, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int32_t get_cutScore();

  /// @brief Method get_isFinished, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool get_isFinished();

  /// @brief Method get_maxPossibleCutScore, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int32_t get_maxPossibleCutScore();

  /// @brief Method get_noteCutInfo, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::GlobalNamespace::NoteCutInfo get_noteCutInfo();

  /// @brief Method get_noteScoreDefinition, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::GlobalNamespace::ScoreModel_NoteScoreDefinition* get_noteScoreDefinition();

  // Ctor Parameters [CppParam { name: "", ty: "IReadonlyCutScoreBuffer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IReadonlyCutScoreBuffer(IReadonlyCutScoreBuffer const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4678 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::IReadonlyCutScoreBuffer);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IReadonlyCutScoreBuffer*, "", "IReadonlyCutScoreBuffer");

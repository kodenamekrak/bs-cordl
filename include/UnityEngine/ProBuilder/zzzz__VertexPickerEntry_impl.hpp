#pragma once
// IWYU pragma private; include "UnityEngine/ProBuilder/VertexPickerEntry.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/ProBuilder/zzzz__VertexPickerEntry_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__ProBuilderMesh_def.hpp"
// Ctor Parameters [CppParam { name: "mesh", ty: "::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh>", modifiers: "", def_value: Some("{}") }, CppParam { name: "vertex", ty: "int32_t", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "screenDistance", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "worldPosition", ty: "::UnityEngine::Vector3", modifiers: "",
// def_value: Some("{}") }]
constexpr ::UnityEngine::ProBuilder::VertexPickerEntry::VertexPickerEntry(::UnityW<::UnityEngine::ProBuilder::ProBuilderMesh> mesh, int32_t vertex, float_t screenDistance,
                                                                          ::UnityEngine::Vector3 worldPosition) noexcept {
  this->mesh = mesh;
  this->vertex = vertex;
  this->screenDistance = screenDistance;
  this->worldPosition = worldPosition;
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::VertexPickerEntry::VertexPickerEntry() {}

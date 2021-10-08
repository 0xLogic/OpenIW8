/*
==============
HavokPhysicsHitCollector::GetModifierShapecastRotation
==============
*/

const hkQuaternionf *__fastcall HavokPhysicsHitCollector::GetModifierShapecastRotation(HavokPhysicsHitCollector *this)
{
  return ?GetModifierShapecastRotation@HavokPhysicsHitCollector@@QEBAAEBVhkQuaternionf@@XZ(this);
}

/*
==============
HavokPhysicsHitCollector::SetShapecastDataForModifiers
==============
*/

void __fastcall HavokPhysicsHitCollector::SetShapecastDataForModifiers(HavokPhysicsHitCollector *this, const hkVector4f *start, const hkVector4f *end, const hkQuaternionf *rotation, hknpShapeCastQuery *query)
{
  ?SetShapecastDataForModifiers@HavokPhysicsHitCollector@@QEAAXAEBVhkVector4f@@0AEBVhkQuaternionf@@PEAUhknpShapeCastQuery@@@Z(this, start, end, rotation, query);
}

/*
==============
HavokPhysicsClosestHitCollector::processClosestPointsCvxCvx
==============
*/

void __fastcall HavokPhysicsClosestHitCollector::processClosestPointsCvxCvx(HavokPhysicsClosestHitCollector *this, const hknpCollisionQueryDispatcher *dispatcher, const hknpClosestPointsQuery *initialQuery, const hknpConvexVertexShape *query, const hknpQueryFilterData *queryFilterData, const hknpShapeQueryInfo *queryInfo, const hknpConvexVertexShape *target, const hknpQueryFilterData *targetFilterData, const hknpShapeQueryInfo *targetInfo, const hkTransformf *queryToTarget)
{
  ?processClosestPointsCvxCvx@HavokPhysicsClosestHitCollector@@UEAAXPEBVhknpCollisionQueryDispatcher@@AEBUhknpClosestPointsQuery@@AEBUhknpConvexVertexShape@@AEBUhknpQueryFilterData@@AEBUhknpShapeQueryInfo@@234AEBVhkTransformf@@@Z(this, dispatcher, initialQuery, query, queryFilterData, queryInfo, target, targetFilterData, targetInfo, queryToTarget);
}

/*
==============
HavokPhysicsHitCollector::GetModifierCastStart
==============
*/

const hkVector4f *__fastcall HavokPhysicsHitCollector::GetModifierCastStart(HavokPhysicsHitCollector *this)
{
  return ?GetModifierCastStart@HavokPhysicsHitCollector@@QEBAAEBVhkVector4f@@XZ(this);
}

/*
==============
HavokPhysicsHitCollector::GetModifierRaycastQuery
==============
*/

hknpRayCastQuery *__fastcall HavokPhysicsHitCollector::GetModifierRaycastQuery(HavokPhysicsHitCollector *this)
{
  return ?GetModifierRaycastQuery@HavokPhysicsHitCollector@@QEBAPEAUhknpRayCastQuery@@XZ(this);
}

/*
==============
HavokPhysicsFlippedGetClosestPointsQueryCollector::addHit
==============
*/

void __fastcall HavokPhysicsFlippedGetClosestPointsQueryCollector::addHit(HavokPhysicsFlippedGetClosestPointsQueryCollector *this, const hknpCollisionResult *flippedHit)
{
  ?addHit@HavokPhysicsFlippedGetClosestPointsQueryCollector@@UEAAXAEBUhknpCollisionResult@@@Z(this, flippedHit);
}

/*
==============
HavokPhysicsHitCollector::HasModifiers
==============
*/

bool __fastcall HavokPhysicsHitCollector::HasModifiers(HavokPhysicsHitCollector *this)
{
  return ?HasModifiers@HavokPhysicsHitCollector@@QEAA_NXZ(this);
}

/*
==============
HavokPhysicsHitCollector::SetRaycastDataForModifiers
==============
*/

void __fastcall HavokPhysicsHitCollector::SetRaycastDataForModifiers(HavokPhysicsHitCollector *this, const hkVector4f *start, const hkVector4f *end, hknpRayCastQuery *query)
{
  ?SetRaycastDataForModifiers@HavokPhysicsHitCollector@@QEAAXAEBVhkVector4f@@0PEAUhknpRayCastQuery@@@Z(this, start, end, query);
}

/*
==============
HavokPhysicsHitCollector::GetModifierBatchRaycastFlags
==============
*/

hkFlags<enum hkcdRayQueryFlags::Enum,unsigned int> *__fastcall HavokPhysicsHitCollector::GetModifierBatchRaycastFlags(HavokPhysicsHitCollector *this, hkFlags<enum hkcdRayQueryFlags::Enum,unsigned int> *result)
{
  return ?GetModifierBatchRaycastFlags@HavokPhysicsHitCollector@@QEBA?AV?$hkFlags@W4Enum@hkcdRayQueryFlags@@I@@XZ(this, result);
}

/*
==============
HavokPhysicsFlippedGetClosestPointsQueryCollector::HavokPhysicsFlippedGetClosestPointsQueryCollector
==============
*/

void __fastcall HavokPhysicsFlippedGetClosestPointsQueryCollector::HavokPhysicsFlippedGetClosestPointsQueryCollector(HavokPhysicsFlippedGetClosestPointsQueryCollector *this, hknpCollisionQueryCollector *childCollector)
{
  ??0HavokPhysicsFlippedGetClosestPointsQueryCollector@@QEAA@PEAVhknpCollisionQueryCollector@@@Z(this, childCollector);
}

/*
==============
HavokPhysicsFlippedGetClosestPointsQueryCollector::reset
==============
*/

void __fastcall HavokPhysicsFlippedGetClosestPointsQueryCollector::reset(HavokPhysicsFlippedGetClosestPointsQueryCollector *this)
{
  ?reset@HavokPhysicsFlippedGetClosestPointsQueryCollector@@UEAAXXZ(this);
}

/*
==============
HavokPhysicsAllHitsCollector::HavokPhysicsAllHitsCollector
==============
*/

void __fastcall HavokPhysicsAllHitsCollector::HavokPhysicsAllHitsCollector(HavokPhysicsAllHitsCollector *this, HavokPhysicsHitCollector *collector, Physics_WorldId worldId)
{
  ??0HavokPhysicsAllHitsCollector@@QEAA@PEAVHavokPhysicsHitCollector@@W4Physics_WorldId@@@Z(this, collector, worldId);
}

/*
==============
HavokPhysicsHitCollector::WillBeIgnored
==============
*/

bool __fastcall HavokPhysicsHitCollector::WillBeIgnored(HavokPhysicsHitCollector *this, hknpCollisionResult *hit)
{
  return ?WillBeIgnored@HavokPhysicsHitCollector@@QEBA_NPEAUhknpCollisionResult@@@Z(this, hit);
}

/*
==============
HavokPhysicsHitCollector::~HavokPhysicsHitCollector
==============
*/

void __fastcall HavokPhysicsHitCollector::~HavokPhysicsHitCollector(HavokPhysicsHitCollector *this)
{
  ??1HavokPhysicsHitCollector@@UEAA@XZ(this);
}

/*
==============
HavokPhysicsAllHitsCollector::processClosestPointsCvxCvx
==============
*/

void __fastcall HavokPhysicsAllHitsCollector::processClosestPointsCvxCvx(HavokPhysicsAllHitsCollector *this, const hknpCollisionQueryDispatcher *dispatcher, const hknpClosestPointsQuery *initialQuery, const hknpConvexVertexShape *query, const hknpQueryFilterData *queryFilterData, const hknpShapeQueryInfo *queryInfo, const hknpConvexVertexShape *target, const hknpQueryFilterData *targetFilterData, const hknpShapeQueryInfo *targetInfo, const hkTransformf *queryToTarget)
{
  ?processClosestPointsCvxCvx@HavokPhysicsAllHitsCollector@@UEAAXPEBVhknpCollisionQueryDispatcher@@AEBUhknpClosestPointsQuery@@AEBUhknpConvexVertexShape@@AEBUhknpQueryFilterData@@AEBUhknpShapeQueryInfo@@234AEBVhkTransformf@@@Z(this, dispatcher, initialQuery, query, queryFilterData, queryInfo, target, targetFilterData, targetInfo, queryToTarget);
}

/*
==============
HavokPhysicsHitCollector::GetCollectorType
==============
*/

Physics_CollisionQueryCollectionType __fastcall HavokPhysicsHitCollector::GetCollectorType(HavokPhysicsHitCollector *this)
{
  return ?GetCollectorType@HavokPhysicsHitCollector@@QEAA?AW4Physics_CollisionQueryCollectionType@@XZ(this);
}

/*
==============
HavokPhysicsHitCollector::AllowsInsideHits
==============
*/

bool __fastcall HavokPhysicsHitCollector::AllowsInsideHits(HavokPhysicsHitCollector *this)
{
  return ?AllowsInsideHits@HavokPhysicsHitCollector@@QEAA_NXZ(this);
}

/*
==============
HavokPhysicsAnyHitCollector::processClosestPointsCvxCvx
==============
*/

void __fastcall HavokPhysicsAnyHitCollector::processClosestPointsCvxCvx(HavokPhysicsAnyHitCollector *this, const hknpCollisionQueryDispatcher *dispatcher, const hknpClosestPointsQuery *initialQuery, const hknpConvexVertexShape *query, const hknpQueryFilterData *queryFilterData, const hknpShapeQueryInfo *queryInfo, const hknpConvexVertexShape *target, const hknpQueryFilterData *targetFilterData, const hknpShapeQueryInfo *targetInfo, const hkTransformf *queryToTarget)
{
  ?processClosestPointsCvxCvx@HavokPhysicsAnyHitCollector@@UEAAXPEBVhknpCollisionQueryDispatcher@@AEBUhknpClosestPointsQuery@@AEBUhknpConvexVertexShape@@AEBUhknpQueryFilterData@@AEBUhknpShapeQueryInfo@@234AEBVhkTransformf@@@Z(this, dispatcher, initialQuery, query, queryFilterData, queryInfo, target, targetFilterData, targetInfo, queryToTarget);
}

/*
==============
HavokPhysicsHitCollector::GetCollector
==============
*/

hknpCollisionQueryCollector *__fastcall HavokPhysicsHitCollector::GetCollector(HavokPhysicsHitCollector *this)
{
  return ?GetCollector@HavokPhysicsHitCollector@@QEAAPEAVhknpCollisionQueryCollector@@XZ(this);
}

/*
==============
HavokPhysicsHitCollector::GetModifierBatchRaycastQuery
==============
*/

hknpCollisionQuery *__fastcall HavokPhysicsHitCollector::GetModifierBatchRaycastQuery(HavokPhysicsHitCollector *this)
{
  return ?GetModifierBatchRaycastQuery@HavokPhysicsHitCollector@@QEBAPEAUhknpCollisionQuery@@XZ(this);
}

/*
==============
HavokPhysicsHitCollector::GetCollector
==============
*/

const hknpCollisionQueryCollector *__fastcall HavokPhysicsHitCollector::GetCollector(HavokPhysicsHitCollector *this)
{
  return ?GetCollector@HavokPhysicsHitCollector@@QEBAPEBVhknpCollisionQueryCollector@@XZ(this);
}

/*
==============
HavokPhysicsHitCollector::SetBatchRaycastDataForModifiers
==============
*/

void __fastcall HavokPhysicsHitCollector::SetBatchRaycastDataForModifiers(HavokPhysicsHitCollector *this, const hkVector4f *start, const hkVector4f *end, hknpCollisionQuery *query, hkFlags<enum hkcdRayQueryFlags::Enum,unsigned int> raycastFlags)
{
  ?SetBatchRaycastDataForModifiers@HavokPhysicsHitCollector@@QEAAXAEBVhkVector4f@@0PEAUhknpCollisionQuery@@V?$hkFlags@W4Enum@hkcdRayQueryFlags@@I@@@Z(this, start, end, query, raycastFlags);
}

/*
==============
HavokPhysicsHitCollector::SetCollector
==============
*/

void __fastcall HavokPhysicsHitCollector::SetCollector(HavokPhysicsHitCollector *this, Physics_CollisionQueryCollectionType collectionType, hknpCollisionQueryCollector *collector)
{
  ?SetCollector@HavokPhysicsHitCollector@@QEAAXW4Physics_CollisionQueryCollectionType@@PEAVhknpCollisionQueryCollector@@@Z(this, collectionType, collector);
}

/*
==============
HavokPhysics_ProcessClosestPointsCvxCvx
==============
*/

void __fastcall HavokPhysics_ProcessClosestPointsCvxCvx(hknpCollisionQueryCollector *collector, const hknpCollisionQueryDispatcher *dispatcher, const hknpClosestPointsQuery *initialQuery, const hknpConvexVertexShape *query, const hknpQueryFilterData *queryFilterData, const hknpShapeQueryInfo *queryInfo, const hknpConvexVertexShape *target, const hknpQueryFilterData *targetFilterData, const hknpShapeQueryInfo *targetInfo, const hkTransformf *queryToTarget)
{
  ?HavokPhysics_ProcessClosestPointsCvxCvx@@YAXPEAVhknpCollisionQueryCollector@@PEBVhknpCollisionQueryDispatcher@@AEBUhknpClosestPointsQuery@@AEBUhknpConvexVertexShape@@AEBUhknpQueryFilterData@@AEBUhknpShapeQueryInfo@@345AEBVhkTransformf@@@Z(collector, dispatcher, initialQuery, query, queryFilterData, queryInfo, target, targetFilterData, targetInfo, queryToTarget);
}

/*
==============
HavokPhysicsHitCollector::GetModifierCastEnd
==============
*/

const hkVector4f *__fastcall HavokPhysicsHitCollector::GetModifierCastEnd(HavokPhysicsHitCollector *this)
{
  return ?GetModifierCastEnd@HavokPhysicsHitCollector@@QEBAAEBVhkVector4f@@XZ(this);
}

/*
==============
HavokPhysicsHitCollector::EnableInsideHits
==============
*/

void __fastcall HavokPhysicsHitCollector::EnableInsideHits(HavokPhysicsHitCollector *this, const bool enable)
{
  ?EnableInsideHits@HavokPhysicsHitCollector@@QEAAX_N@Z(this, enable);
}

/*
==============
HavokPhysicsAnyHitCollector::addHit
==============
*/

void __fastcall HavokPhysicsAnyHitCollector::addHit(HavokPhysicsAnyHitCollector *this, const hknpCollisionResult *hit)
{
  ?addHit@HavokPhysicsAnyHitCollector@@UEAAXAEBUhknpCollisionResult@@@Z(this, hit);
}

/*
==============
HavokPhysicsFlippedGetClosestPointsQueryCollector::processClosestPointsCvxCvx
==============
*/

void __fastcall HavokPhysicsFlippedGetClosestPointsQueryCollector::processClosestPointsCvxCvx(HavokPhysicsFlippedGetClosestPointsQueryCollector *this, const hknpCollisionQueryDispatcher *m_dispatcher, const hknpClosestPointsQuery *initialQuery, const hknpConvexVertexShape *query, const hknpQueryFilterData *queryFilterData, const hknpShapeQueryInfo *queryInfo, const hknpConvexVertexShape *target, const hknpQueryFilterData *targetFilterData, const hknpShapeQueryInfo *targetInfo, const hkTransformf *queryToTarget)
{
  ?processClosestPointsCvxCvx@HavokPhysicsFlippedGetClosestPointsQueryCollector@@UEAAXPEBVhknpCollisionQueryDispatcher@@AEBUhknpClosestPointsQuery@@AEBUhknpConvexVertexShape@@AEBUhknpQueryFilterData@@AEBUhknpShapeQueryInfo@@234AEBVhkTransformf@@@Z(this, m_dispatcher, initialQuery, query, queryFilterData, queryInfo, target, targetFilterData, targetInfo, queryToTarget);
}

/*
==============
HavokPhysicsHitCollector::AddModifier
==============
*/

void __fastcall HavokPhysicsHitCollector::AddModifier(HavokPhysicsHitCollector *this, HavokPhysicsHitCollector_Modifier *modifier)
{
  ?AddModifier@HavokPhysicsHitCollector@@QEAAXPEAVHavokPhysicsHitCollector_Modifier@@@Z(this, modifier);
}

/*
==============
HavokPhysicsHitCollector::ApplyModifiers
==============
*/

void __fastcall HavokPhysicsHitCollector::ApplyModifiers(HavokPhysicsHitCollector *this, hknpCollisionResult *hit)
{
  ?ApplyModifiers@HavokPhysicsHitCollector@@QEAAXPEAUhknpCollisionResult@@@Z(this, hit);
}

/*
==============
HavokPhysicsHitCollector::WillHitReplaceCurrentHit
==============
*/

bool __fastcall HavokPhysicsHitCollector::WillHitReplaceCurrentHit(HavokPhysicsHitCollector *this, hknpCollisionResult *hit)
{
  return ?WillHitReplaceCurrentHit@HavokPhysicsHitCollector@@QEBA_NPEAUhknpCollisionResult@@@Z(this, hit);
}

/*
==============
HavokPhysicsAllHitsCollector::addHit
==============
*/

void __fastcall HavokPhysicsAllHitsCollector::addHit(HavokPhysicsAllHitsCollector *this, const hknpCollisionResult *hit)
{
  ?addHit@HavokPhysicsAllHitsCollector@@UEAAXAEBUhknpCollisionResult@@@Z(this, hit);
}

/*
==============
HavokPhysicsHitCollector::HavokPhysicsHitCollector
==============
*/

void __fastcall HavokPhysicsHitCollector::HavokPhysicsHitCollector(HavokPhysicsHitCollector *this)
{
  ??0HavokPhysicsHitCollector@@QEAA@XZ(this);
}

/*
==============
HavokPhysicsHitCollector::GetModifier
==============
*/

HavokPhysicsHitCollector_Modifier *__fastcall HavokPhysicsHitCollector::GetModifier(HavokPhysicsHitCollector *this, int index)
{
  return ?GetModifier@HavokPhysicsHitCollector@@QEAAPEAVHavokPhysicsHitCollector_Modifier@@H@Z(this, index);
}

/*
==============
HavokPhysicsHitCollector::Reset
==============
*/

void __fastcall HavokPhysicsHitCollector::Reset(HavokPhysicsHitCollector *this, bool clearModifiers)
{
  ?Reset@HavokPhysicsHitCollector@@QEAAX_N@Z(this, clearModifiers);
}

/*
==============
HavokPhysicsClosestHitCollector::addHit
==============
*/

void __fastcall HavokPhysicsClosestHitCollector::addHit(HavokPhysicsClosestHitCollector *this, const hknpCollisionResult *hit)
{
  ?addHit@HavokPhysicsClosestHitCollector@@UEAAXAEBUhknpCollisionResult@@@Z(this, hit);
}

/*
==============
HavokPhysicsHitCollector::GetModifierShapecastQuery
==============
*/

hknpShapeCastQuery *__fastcall HavokPhysicsHitCollector::GetModifierShapecastQuery(HavokPhysicsHitCollector *this)
{
  return ?GetModifierShapecastQuery@HavokPhysicsHitCollector@@QEBAPEAUhknpShapeCastQuery@@XZ(this);
}

/*
==============
HavokPhysicsClosestHitCollector::HavokPhysicsClosestHitCollector
==============
*/

void __fastcall HavokPhysicsClosestHitCollector::HavokPhysicsClosestHitCollector(HavokPhysicsClosestHitCollector *this, HavokPhysicsHitCollector *collector, Physics_WorldId worldId)
{
  ??0HavokPhysicsClosestHitCollector@@QEAA@PEAVHavokPhysicsHitCollector@@W4Physics_WorldId@@@Z(this, collector, worldId);
}

/*
==============
HavokPhysicsAnyHitCollector::HavokPhysicsAnyHitCollector
==============
*/

void __fastcall HavokPhysicsAnyHitCollector::HavokPhysicsAnyHitCollector(HavokPhysicsAnyHitCollector *this, HavokPhysicsHitCollector *collector, Physics_WorldId worldId)
{
  ??0HavokPhysicsAnyHitCollector@@QEAA@PEAVHavokPhysicsHitCollector@@W4Physics_WorldId@@@Z(this, collector, worldId);
}

/*
==============
HavokPhysicsAllHitsCollector::HavokPhysicsAllHitsCollector
==============
*/
void HavokPhysicsAllHitsCollector::HavokPhysicsAllHitsCollector(HavokPhysicsAllHitsCollector *this, HavokPhysicsHitCollector *collector, Physics_WorldId worldId)
{
  _RBX = this;
  this->__vftable = (HavokPhysicsAllHitsCollector_vtbl *)hknpCollisionQueryCollector::`vftable';
  this->m_hints.m_storage = 0;
  this->m_numHits = 0;
  __asm
  {
    vmovups xmm0, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+250h; __m128 const near * const g_vectorfConstants
    vmovups xmmword ptr [rbx+10h], xmm0
  }
  this->m_earlyOut.m_bool = 0;
  this->__vftable = (HavokPhysicsAllHitsCollector_vtbl *)hknpAllHitsCollector::`vftable';
  this->m_hits.m_data = (hknpCollisionResult *)this->m_hits.m_storage;
  this->m_hits.m_size = 0;
  this->m_hits.m_capacityAndFlags = -2147483638;
  this->m_numHits = 0;
  __asm
  {
    vmovups xmm0, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+250h; __m128 const near * const g_vectorfConstants
    vmovups xmmword ptr [rbx+10h], xmm0
  }
  this->m_earlyOut.m_bool = 0;
  this->m_hits.m_size = 0;
  this->m_hints.m_storage |= 0x40u;
  this->__vftable = (HavokPhysicsAllHitsCollector_vtbl *)&HavokPhysicsAllHitsCollector::`vftable';
  if ( !collector && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicshitcollectors.cpp", 567, ASSERT_TYPE_ASSERT, "(collector)", (const char *)&queryFormat, "collector", -2i64) )
    __debugbreak();
  _RBX->m_collector = collector;
  _RBX->m_worldId = worldId;
  _RBX->m_hints.m_storage = 2;
}

/*
==============
HavokPhysicsAnyHitCollector::HavokPhysicsAnyHitCollector
==============
*/
void HavokPhysicsAnyHitCollector::HavokPhysicsAnyHitCollector(HavokPhysicsAnyHitCollector *this, HavokPhysicsHitCollector *collector, Physics_WorldId worldId)
{
  _RBX = this;
  this->__vftable = (HavokPhysicsAnyHitCollector_vtbl *)hknpCollisionQueryCollector::`vftable';
  this->m_hints.m_storage = 0;
  this->m_numHits = 0;
  __asm
  {
    vmovups xmm0, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+250h; __m128 const near * const g_vectorfConstants
    vmovups xmmword ptr [rbx+10h], xmm0
  }
  this->m_earlyOut.m_bool = 0;
  this->__vftable = (HavokPhysicsAnyHitCollector_vtbl *)hknpClosestHitCollector::`vftable';
  *(_QWORD *)&this->m_hit.m_queryType = 0i64;
  __asm
  {
    vxorps  xmm1, xmm1, xmm1
    vmovups ymmword ptr [rbx+30h], ymm1
  }
  this->m_hit.m_fraction = 3.40282e38;
  this->m_hit.m_queryBodyInfo.m_bodyId.m_serialAndIndex = 0xFFFFFF;
  *(_QWORD *)&this->m_hit.m_queryBodyInfo.m_shapeKey.m_value = -1i64;
  this->m_hit.m_queryBodyInfo.m_filterData.m_materialId.m_value = -1;
  this->m_hit.m_queryBodyInfo.m_filterData.m_collisionFilterInfo = 0;
  this->m_hit.m_queryBodyInfo.m_filterData.m_userData = 0i64;
  this->m_hit.m_hitBodyInfo.m_bodyId.m_serialAndIndex = 0xFFFFFF;
  *(_QWORD *)&this->m_hit.m_hitBodyInfo.m_shapeKey.m_value = -1i64;
  this->m_hit.m_hitBodyInfo.m_filterData.m_materialId.m_value = -1;
  this->m_hit.m_hitBodyInfo.m_filterData.m_collisionFilterInfo = 0;
  this->m_hit.m_hitBodyInfo.m_filterData.m_userData = 0i64;
  this->m_numHits = 0;
  __asm
  {
    vmovups xmm0, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+250h; __m128 const near * const g_vectorfConstants
    vmovups xmmword ptr [rbx+10h], xmm0
  }
  this->m_earlyOut.m_bool = 0;
  *(_QWORD *)&this->m_hit.m_queryType = 0i64;
  __asm { vmovups ymmword ptr [rbx+30h], ymm1 }
  this->m_hit.m_fraction = 3.40282e38;
  this->m_hit.m_queryBodyInfo.m_bodyId.m_serialAndIndex = 0xFFFFFF;
  *(_QWORD *)&this->m_hit.m_queryBodyInfo.m_shapeKey.m_value = -1i64;
  this->m_hit.m_queryBodyInfo.m_filterData.m_materialId.m_value = -1;
  this->m_hit.m_queryBodyInfo.m_filterData.m_collisionFilterInfo = 0;
  this->m_hit.m_queryBodyInfo.m_filterData.m_userData = 0i64;
  this->m_hit.m_hitBodyInfo.m_bodyId.m_serialAndIndex = 0xFFFFFF;
  *(_QWORD *)&this->m_hit.m_hitBodyInfo.m_shapeKey.m_value = -1i64;
  this->m_hit.m_hitBodyInfo.m_filterData.m_materialId.m_value = -1;
  this->m_hit.m_hitBodyInfo.m_filterData.m_collisionFilterInfo = 0;
  this->m_hit.m_hitBodyInfo.m_filterData.m_userData = 0i64;
  this->__vftable = (HavokPhysicsAnyHitCollector_vtbl *)&hknpAnyHitCollector::`vftable';
  this->m_hints.m_storage |= 1u;
  this->__vftable = (HavokPhysicsAnyHitCollector_vtbl *)&HavokPhysicsAnyHitCollector::`vftable';
  if ( !collector && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicshitcollectors.cpp", 401, ASSERT_TYPE_ASSERT, "(collector)", (const char *)&queryFormat, "collector", -2i64) )
    __debugbreak();
  _RBX->m_collector = collector;
  _RBX->m_worldId = worldId;
  _RBX->m_hints.m_storage = 2;
}

/*
==============
HavokPhysicsClosestHitCollector::HavokPhysicsClosestHitCollector
==============
*/
void HavokPhysicsClosestHitCollector::HavokPhysicsClosestHitCollector(HavokPhysicsClosestHitCollector *this, HavokPhysicsHitCollector *collector, Physics_WorldId worldId)
{
  _RBX = this;
  this->__vftable = (HavokPhysicsClosestHitCollector_vtbl *)hknpCollisionQueryCollector::`vftable';
  this->m_hints.m_storage = 0;
  this->m_numHits = 0;
  __asm
  {
    vmovups xmm0, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+250h; __m128 const near * const g_vectorfConstants
    vmovups xmmword ptr [rbx+10h], xmm0
  }
  this->m_earlyOut.m_bool = 0;
  this->__vftable = (HavokPhysicsClosestHitCollector_vtbl *)hknpClosestHitCollector::`vftable';
  *(_QWORD *)&this->m_hit.m_queryType = 0i64;
  __asm
  {
    vxorps  xmm1, xmm1, xmm1
    vmovups ymmword ptr [rbx+30h], ymm1
  }
  this->m_hit.m_fraction = 3.40282e38;
  this->m_hit.m_queryBodyInfo.m_bodyId.m_serialAndIndex = 0xFFFFFF;
  *(_QWORD *)&this->m_hit.m_queryBodyInfo.m_shapeKey.m_value = -1i64;
  this->m_hit.m_queryBodyInfo.m_filterData.m_materialId.m_value = -1;
  this->m_hit.m_queryBodyInfo.m_filterData.m_collisionFilterInfo = 0;
  this->m_hit.m_queryBodyInfo.m_filterData.m_userData = 0i64;
  this->m_hit.m_hitBodyInfo.m_bodyId.m_serialAndIndex = 0xFFFFFF;
  *(_QWORD *)&this->m_hit.m_hitBodyInfo.m_shapeKey.m_value = -1i64;
  this->m_hit.m_hitBodyInfo.m_filterData.m_materialId.m_value = -1;
  this->m_hit.m_hitBodyInfo.m_filterData.m_collisionFilterInfo = 0;
  this->m_hit.m_hitBodyInfo.m_filterData.m_userData = 0i64;
  this->m_numHits = 0;
  __asm
  {
    vmovups xmm0, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+250h; __m128 const near * const g_vectorfConstants
    vmovups xmmword ptr [rbx+10h], xmm0
  }
  this->m_earlyOut.m_bool = 0;
  *(_QWORD *)&this->m_hit.m_queryType = 0i64;
  __asm { vmovups ymmword ptr [rbx+30h], ymm1 }
  this->m_hit.m_fraction = 3.40282e38;
  this->m_hit.m_queryBodyInfo.m_bodyId.m_serialAndIndex = 0xFFFFFF;
  *(_QWORD *)&this->m_hit.m_queryBodyInfo.m_shapeKey.m_value = -1i64;
  this->m_hit.m_queryBodyInfo.m_filterData.m_materialId.m_value = -1;
  this->m_hit.m_queryBodyInfo.m_filterData.m_collisionFilterInfo = 0;
  this->m_hit.m_queryBodyInfo.m_filterData.m_userData = 0i64;
  this->m_hit.m_hitBodyInfo.m_bodyId.m_serialAndIndex = 0xFFFFFF;
  *(_QWORD *)&this->m_hit.m_hitBodyInfo.m_shapeKey.m_value = -1i64;
  this->m_hit.m_hitBodyInfo.m_filterData.m_materialId.m_value = -1;
  this->m_hit.m_hitBodyInfo.m_filterData.m_collisionFilterInfo = 0;
  this->m_hit.m_hitBodyInfo.m_filterData.m_userData = 0i64;
  this->__vftable = (HavokPhysicsClosestHitCollector_vtbl *)&HavokPhysicsClosestHitCollector::`vftable';
  if ( !collector && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicshitcollectors.cpp", 475, ASSERT_TYPE_ASSERT, "(collector)", (const char *)&queryFormat, "collector", -2i64) )
    __debugbreak();
  _RBX->m_collector = collector;
  _RBX->m_worldId = worldId;
  _RBX->m_hints.m_storage = 2;
}

/*
==============
HavokPhysicsFlippedGetClosestPointsQueryCollector::HavokPhysicsFlippedGetClosestPointsQueryCollector
==============
*/
void HavokPhysicsFlippedGetClosestPointsQueryCollector::HavokPhysicsFlippedGetClosestPointsQueryCollector(HavokPhysicsFlippedGetClosestPointsQueryCollector *this, hknpCollisionQueryCollector *childCollector)
{
  bool v3; 

  this->__vftable = (HavokPhysicsFlippedGetClosestPointsQueryCollector_vtbl *)hknpCollisionQueryCollector::`vftable';
  this->m_hints.m_storage = 0;
  this->m_numHits = 0;
  __asm
  {
    vmovups xmm0, xmmword ptr cs:?g_vectorfConstants@@3QBT__m128@@B+250h; __m128 const near * const g_vectorfConstants
    vmovups xmmword ptr [rcx+10h], xmm0
  }
  this->m_earlyOut.m_bool = 0;
  v3 = this->m_earlyOut.m_bool == 0;
  this->__vftable = (HavokPhysicsFlippedGetClosestPointsQueryCollector_vtbl *)&HavokPhysicsFlippedGetClosestPointsQueryCollector::`vftable';
  this->m_childCollector = childCollector;
  this->m_hints.m_storage = childCollector->m_hints.m_storage;
  __asm
  {
    vminps  xmm1, xmm0, xmmword ptr [rdx+10h]
    vmovups xmmword ptr [rcx+10h], xmm1
  }
  if ( !v3 || childCollector->m_earlyOut.m_bool )
  {
    this->m_earlyOut.m_bool = 1;
    this->m_numHits = childCollector->m_numHits;
  }
  else
  {
    this->m_earlyOut.m_bool = 0;
    this->m_numHits = childCollector->m_numHits;
  }
}

/*
==============
HavokPhysicsHitCollector::HavokPhysicsHitCollector
==============
*/
void HavokPhysicsHitCollector::HavokPhysicsHitCollector(HavokPhysicsHitCollector *this)
{
  this->__vftable = (HavokPhysicsHitCollector_vtbl *)&HavokPhysicsHitCollector::`vftable';
  this->m_modifiers.m_data = NULL;
  this->m_modifiers.m_size = 0;
  this->m_modifiers.m_capacityAndFlags = 0x80000000;
  this->m_collector = NULL;
  this->m_modifierRaycastQuery = NULL;
  this->m_modifierShapecastQuery = NULL;
  this->m_enableInsideHits = 0;
  this->m_collectionType = PHYSICS_COLLISIONQUERY_COLLECTION_TYPE_UNKNOWN;
}

/*
==============
HavokPhysicsHitCollector::~HavokPhysicsHitCollector
==============
*/
void HavokPhysicsHitCollector::~HavokPhysicsHitCollector(HavokPhysicsHitCollector *this)
{
  HavokPhysicsHitCollector_Modifier **m_data; 
  HavokPhysicsHitCollector_Modifier *v3; 
  unsigned __int16 m_refCount; 
  hknpCollisionQueryCollector *m_collector; 
  hkMemoryAllocator *v6; 
  int m_capacityAndFlags; 
  signed __int32 v8[8]; 
  __int64 v9; 

  v9 = -2i64;
  this->__vftable = (HavokPhysicsHitCollector_vtbl *)&HavokPhysicsHitCollector::`vftable';
  m_data = this->m_modifiers.m_data;
  if ( m_data != &m_data[this->m_modifiers.m_size] )
  {
    do
    {
      v3 = *m_data;
      _InterlockedOr(v8, 0);
      m_refCount = v3->m_refCount;
      _InterlockedOr(v8, 0);
      if ( m_refCount != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicshitcollectors.cpp", 85, ASSERT_TYPE_ASSERT, "(modifier->getReferenceCount() == 1)", (const char *)&queryFormat, "modifier->getReferenceCount() == 1", v9) )
        __debugbreak();
      hkReferencedObject::removeReference(v3);
      ++m_data;
    }
    while ( m_data != &this->m_modifiers.m_data[this->m_modifiers.m_size] );
  }
  this->m_modifiers.m_size = 0;
  if ( !this->m_collector && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicshitcollectors.cpp", 93, ASSERT_TYPE_ASSERT, "(m_collector)", (const char *)&queryFormat, "m_collector") )
    __debugbreak();
  m_collector = this->m_collector;
  if ( m_collector )
    ((void (__fastcall *)(hknpCollisionQueryCollector *, __int64))m_collector->~hkBaseObject)(m_collector, 1i64);
  v6 = hkMemHeapAllocator();
  this->m_modifiers.m_size = 0;
  m_capacityAndFlags = this->m_modifiers.m_capacityAndFlags;
  if ( m_capacityAndFlags >= 0 )
    hkMemoryAllocator::bufFree2(v6, this->m_modifiers.m_data, 8, m_capacityAndFlags & 0x3FFFFFFF);
  this->m_modifiers.m_data = NULL;
  this->m_modifiers.m_capacityAndFlags = 0x80000000;
  this->__vftable = (HavokPhysicsHitCollector_vtbl *)&HavokPhysicsHitCollectorDummy::`vftable';
}

/*
==============
HavokPhysicsHitCollector::AddModifier
==============
*/
void HavokPhysicsHitCollector::AddModifier(HavokPhysicsHitCollector *this, HavokPhysicsHitCollector_Modifier *modifier)
{
  hkArray<HavokPhysicsHitCollector_Modifier *,hkContainerHeapAllocator> *p_m_modifiers; 
  hkMemoryAllocator *v4; 
  int m_size; 

  p_m_modifiers = &this->m_modifiers;
  v4 = hkMemHeapAllocator();
  m_size = p_m_modifiers->m_size;
  if ( m_size == (p_m_modifiers->m_capacityAndFlags & 0x3FFFFFFF) )
  {
    hkArrayUtil::_reserveMore(v4, p_m_modifiers, 8);
    m_size = p_m_modifiers->m_size;
  }
  p_m_modifiers->m_data[m_size] = modifier;
  ++p_m_modifiers->m_size;
}

/*
==============
HavokPhysicsHitCollector::AllowsInsideHits
==============
*/
_BOOL8 HavokPhysicsHitCollector::AllowsInsideHits(HavokPhysicsHitCollector *this)
{
  return this->m_enableInsideHits;
}

/*
==============
HavokPhysicsHitCollector::ApplyModifiers
==============
*/
void HavokPhysicsHitCollector::ApplyModifiers(HavokPhysicsHitCollector *this, hknpCollisionResult *hit)
{
  HavokPhysicsHitCollector_Modifier **m_data; 

  m_data = this->m_modifiers.m_data;
  if ( m_data != &m_data[this->m_modifiers.m_size] )
  {
    do
    {
      (*m_data)->ModifyHit(*m_data, this, hit);
      ++m_data;
    }
    while ( m_data != &this->m_modifiers.m_data[this->m_modifiers.m_size] );
  }
}

/*
==============
HavokPhysicsHitCollector::EnableInsideHits
==============
*/
void HavokPhysicsHitCollector::EnableInsideHits(HavokPhysicsHitCollector *this, const bool enable)
{
  this->m_enableInsideHits = enable;
}

/*
==============
HavokPhysicsHitCollector::GetCollector
==============
*/
hknpCollisionQueryCollector *HavokPhysicsHitCollector::GetCollector(HavokPhysicsHitCollector *this)
{
  return this->m_collector;
}

/*
==============
HavokPhysicsHitCollector::GetCollector
==============
*/
hknpCollisionQueryCollector *HavokPhysicsHitCollector::GetCollector(HavokPhysicsHitCollector *this)
{
  return this->m_collector;
}

/*
==============
HavokPhysicsHitCollector::GetCollectorType
==============
*/
__int64 HavokPhysicsHitCollector::GetCollectorType(HavokPhysicsHitCollector *this)
{
  return (unsigned int)this->m_collectionType;
}

/*
==============
HavokPhysicsHitCollector::GetModifier
==============
*/
HavokPhysicsHitCollector_Modifier *HavokPhysicsHitCollector::GetModifier(HavokPhysicsHitCollector *this, int index)
{
  return this->m_modifiers.m_data[index];
}

/*
==============
HavokPhysicsHitCollector::GetModifierBatchRaycastFlags
==============
*/
hkFlags<enum hkcdRayQueryFlags::Enum,unsigned int> *HavokPhysicsHitCollector::GetModifierBatchRaycastFlags(HavokPhysicsHitCollector *this, hkFlags<enum hkcdRayQueryFlags::Enum,unsigned int> *result)
{
  result->m_storage = (unsigned int)this->m_modifierBatchRaycastFlags;
  return result;
}

/*
==============
HavokPhysicsHitCollector::GetModifierBatchRaycastQuery
==============
*/
hknpCollisionQuery *HavokPhysicsHitCollector::GetModifierBatchRaycastQuery(HavokPhysicsHitCollector *this)
{
  return this->m_modifierBatchRaycastQuery;
}

/*
==============
HavokPhysicsHitCollector::GetModifierCastEnd
==============
*/
hkVector4f *HavokPhysicsHitCollector::GetModifierCastEnd(HavokPhysicsHitCollector *this)
{
  return &this->m_modifierCastEnd;
}

/*
==============
HavokPhysicsHitCollector::GetModifierCastStart
==============
*/
hkVector4f *HavokPhysicsHitCollector::GetModifierCastStart(HavokPhysicsHitCollector *this)
{
  return &this->m_modifierCastStart;
}

/*
==============
HavokPhysicsHitCollector::GetModifierRaycastQuery
==============
*/
hknpRayCastQuery *HavokPhysicsHitCollector::GetModifierRaycastQuery(HavokPhysicsHitCollector *this)
{
  return this->m_modifierRaycastQuery;
}

/*
==============
HavokPhysicsHitCollector::GetModifierShapecastQuery
==============
*/
hknpShapeCastQuery *HavokPhysicsHitCollector::GetModifierShapecastQuery(HavokPhysicsHitCollector *this)
{
  return this->m_modifierShapecastQuery;
}

/*
==============
HavokPhysicsHitCollector::GetModifierShapecastRotation
==============
*/
hkQuaternionf *HavokPhysicsHitCollector::GetModifierShapecastRotation(HavokPhysicsHitCollector *this)
{
  return &this->m_modifierShapecastRotation;
}

/*
==============
HavokPhysicsHitCollector::HasModifiers
==============
*/
bool HavokPhysicsHitCollector::HasModifiers(HavokPhysicsHitCollector *this)
{
  return this->m_modifiers.m_size > 0;
}

/*
==============
HavokPhysics_ProcessClosestPointsCvxCvx
==============
*/
void HavokPhysics_ProcessClosestPointsCvxCvx(hknpCollisionQueryCollector *collector, const hknpCollisionQueryDispatcher *dispatcher, const hknpClosestPointsQuery *initialQuery, const hknpConvexVertexShape *query, const hknpQueryFilterData *queryFilterData, const hknpShapeQueryInfo *queryInfo, const hknpConvexVertexShape *target, const hknpQueryFilterData *targetFilterData, const hknpShapeQueryInfo *targetInfo, const hkTransformf *queryToTarget)
{
  const hknpCollisionFilter *m_filter; 
  unsigned __int64 m_userData; 
  __int64 m_storage; 
  __int64 m_offset; 
  hknpClosestPointsQuery initialQuerya; 
  hknpConvexVertexShape querya; 

  m_filter = initialQuery->m_filter;
  if ( m_filter && m_filter->m_type.m_storage == 6 && (m_userData = initialQuery->m_filterData.m_userData) != 0 && *(_QWORD *)(m_userData + 24) && !Physics_GetBrushBasisFromUserData(targetFilterData->m_userData) )
  {
    _RDX = *(const hknpConvexShape **)(m_userData + 24);
    if ( (_RDX->m_flags.m_storage & 1) == 0 )
      _RDX = NULL;
  }
  else
  {
    _RDX = NULL;
    if ( (query->m_shape->m_flags.m_storage & 1) != 0 )
      _RDX = query->m_shape;
  }
  m_storage = _RDX->m_type.m_storage;
  initialQuerya.m_filterData.m_collisionFilterInfo = 0;
  initialQuerya.m_filterData.m_userData = 0i64;
  querya.m_type = hknpConvexDispatch::s_shapeTypeToCvxDispatch[m_storage].m_disptach.m_storage;
  m_offset = _RDX->m_vertices.m_offset;
  initialQuerya.m_filter = NULL;
  querya.m_vertices = (const hkcdVertex *)((char *)&_RDX->m_vertices + m_offset);
  querya.m_numVertices = _RDX->m_vertices.m_size;
  __asm { vmovss  xmm0, dword ptr [rdx+20h] }
  initialQuerya.m_filterData.m_materialId.m_value = -1;
  __asm { vmovss  [rsp+118h+query.m_convexRadius], xmm0 }
  querya.m_shape = _RDX;
  initialQuerya.m_shapeTagCodec = NULL;
  initialQuerya.m_shape = NULL;
  __asm { vxorps  xmm0, xmm0, xmm0 }
  initialQuerya.m_body = NULL;
  __asm { vmovss  [rsp+118h+initialQuery.m_maxDistance], xmm0 }
  *(_DWORD *)initialQuerya.m_levelOfDetail = 2;
  initialQuerya.m_broadPhaseFilterMask = -5;
  hknpCollisionQueryDispatcher::_getClosestPointsCvxCvxPreScaledImpl<hknpCollisionQueryCollector,hknpClosestPointsQuery,hknpCollisionResult>((hknpCollisionQueryDispatcher *)dispatcher, &initialQuerya, &querya, queryFilterData, queryInfo, target, targetFilterData, targetInfo, queryToTarget, collector);
}

/*
==============
HavokPhysicsHitCollector::Reset
==============
*/
void HavokPhysicsHitCollector::Reset(HavokPhysicsHitCollector *this, bool clearModifiers)
{
  HavokPhysicsHitCollector_Modifier **m_data; 
  HavokPhysicsHitCollector_Modifier *v4; 
  unsigned __int16 m_refCount; 
  bool v6; 
  signed __int32 v7[8]; 

  if ( clearModifiers )
  {
    m_data = this->m_modifiers.m_data;
    if ( m_data != &m_data[this->m_modifiers.m_size] )
    {
      do
      {
        v4 = *m_data;
        _InterlockedOr(v7, 0);
        m_refCount = v4->m_refCount;
        _InterlockedOr(v7, 0);
        if ( m_refCount != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicshitcollectors.cpp", 113, ASSERT_TYPE_ASSERT, "(modifier->getReferenceCount() == 1)", (const char *)&queryFormat, "modifier->getReferenceCount() == 1") )
          __debugbreak();
        hkReferencedObject::removeReference(v4);
        ++m_data;
      }
      while ( m_data != &this->m_modifiers.m_data[this->m_modifiers.m_size] );
    }
    this->m_modifiers.m_size = 0;
  }
  v6 = this->m_collector == NULL;
  this->m_modifierRaycastQuery = NULL;
  this->m_modifierShapecastQuery = NULL;
  this->m_enableInsideHits = 0;
  if ( v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicshitcollectors.cpp", 128, ASSERT_TYPE_ASSERT, "(m_collector)", (const char *)&queryFormat, "m_collector") )
    __debugbreak();
  this->m_collector->reset(this->m_collector);
}

/*
==============
HavokPhysicsHitCollector::SetBatchRaycastDataForModifiers
==============
*/
void HavokPhysicsHitCollector::SetBatchRaycastDataForModifiers(HavokPhysicsHitCollector *this, const hkVector4f *start, const hkVector4f *end, hknpCollisionQuery *query, hkFlags<enum hkcdRayQueryFlags::Enum,unsigned int> raycastFlags)
{
  __asm
  {
    vmovups xmm0, xmmword ptr [rdx]
    vmovups xmmword ptr [rcx+30h], xmm0
    vmovups xmm1, xmmword ptr [r8]
    vmovups xmmword ptr [rcx+40h], xmm1
  }
  this->m_modifierBatchRaycastQuery = query;
  this->m_modifierBatchRaycastFlags = raycastFlags;
}

/*
==============
HavokPhysicsHitCollector::SetCollector
==============
*/
void HavokPhysicsHitCollector::SetCollector(HavokPhysicsHitCollector *this, Physics_CollisionQueryCollectionType collectionType, hknpCollisionQueryCollector *collector)
{
  hknpCollisionQueryCollector *m_collector; 

  m_collector = this->m_collector;
  if ( m_collector )
    ((void (__fastcall *)(hknpCollisionQueryCollector *, __int64))m_collector->~hkBaseObject)(m_collector, 1i64);
  this->m_collectionType = collectionType;
  this->m_collector = collector;
}

/*
==============
HavokPhysicsHitCollector::SetRaycastDataForModifiers
==============
*/
void HavokPhysicsHitCollector::SetRaycastDataForModifiers(HavokPhysicsHitCollector *this, const hkVector4f *start, const hkVector4f *end, hknpRayCastQuery *query)
{
  __asm
  {
    vmovups xmm0, xmmword ptr [rdx]
    vmovups xmmword ptr [rcx+30h], xmm0
    vmovups xmm1, xmmword ptr [r8]
    vmovups xmmword ptr [rcx+40h], xmm1
  }
  this->m_modifierRaycastQuery = query;
}

/*
==============
HavokPhysicsHitCollector::SetShapecastDataForModifiers
==============
*/
void HavokPhysicsHitCollector::SetShapecastDataForModifiers(HavokPhysicsHitCollector *this, const hkVector4f *start, const hkVector4f *end, const hkQuaternionf *rotation, hknpShapeCastQuery *query)
{
  __asm
  {
    vmovups xmm0, xmmword ptr [rdx]
    vmovups xmmword ptr [rcx+30h], xmm0
    vmovups xmm1, xmmword ptr [r8]
    vmovups xmmword ptr [rcx+40h], xmm1
    vmovups xmm0, xmmword ptr [r9]
    vmovups xmmword ptr [rcx+70h], xmm0
  }
  this->m_modifierShapecastQuery = query;
}

/*
==============
HavokPhysicsHitCollector::WillBeIgnored
==============
*/
char HavokPhysicsHitCollector::WillBeIgnored(HavokPhysicsHitCollector *this, hknpCollisionResult *hit)
{
  Physics_CollisionQueryCollectionType m_collectionType; 
  __int32 v5; 

  _RDI = hit;
  if ( !hit && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicshitcollectors.cpp", 284, ASSERT_TYPE_ASSERT, "(hit)", (const char *)&queryFormat, "hit") )
    __debugbreak();
  if ( !this->m_collector && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicshitcollectors.cpp", 285, ASSERT_TYPE_ASSERT, "(m_collector)", (const char *)&queryFormat, "m_collector") )
    __debugbreak();
  m_collectionType = this->m_collectionType;
  if ( m_collectionType )
  {
    v5 = m_collectionType - 1;
    if ( v5 )
    {
      if ( v5 != 1 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicshitcollectors.cpp", 331, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "HavokPhysicsHitCollector::WillBeIgnored Unknown type") )
        {
          __debugbreak();
          return 1;
        }
        return 1;
      }
      return 0;
    }
    _RAX = this->m_collector;
    if ( !_RAX->m_numHits )
      return 0;
    __asm
    {
      vmovss  xmm0, dword ptr [rax+50h]
      vcomiss xmm0, dword ptr [rdi+20h]
    }
    if ( _RAX->m_numHits )
      return 0;
  }
  else
  {
    _RAX = this->m_collector;
    if ( !_RAX->m_numHits )
      return 0;
    __asm
    {
      vmovss  xmm0, dword ptr [rax+50h]
      vcomiss xmm0, dword ptr [rdi+20h]
    }
    if ( _RAX->m_numHits )
      return 0;
  }
  return 1;
}

/*
==============
HavokPhysicsHitCollector::WillHitReplaceCurrentHit
==============
*/
char HavokPhysicsHitCollector::WillHitReplaceCurrentHit(HavokPhysicsHitCollector *this, hknpCollisionResult *hit)
{
  Physics_CollisionQueryCollectionType m_collectionType; 
  __int32 v5; 

  _RDI = hit;
  if ( !hit && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicshitcollectors.cpp", 343, ASSERT_TYPE_ASSERT, "(hit)", (const char *)&queryFormat, "hit") )
    __debugbreak();
  if ( !this->m_collector && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicshitcollectors.cpp", 344, ASSERT_TYPE_ASSERT, "(m_collector)", (const char *)&queryFormat, "m_collector") )
    __debugbreak();
  m_collectionType = this->m_collectionType;
  if ( m_collectionType )
  {
    v5 = m_collectionType - 1;
    if ( v5 )
    {
      if ( v5 != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicshitcollectors.cpp", 390, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "HavokPhysicsHitCollector::WillHitReplaceCurrentHit Unknown type") )
      {
        __debugbreak();
        return 0;
      }
      return 0;
    }
    _RAX = this->m_collector;
    if ( !_RAX->m_numHits )
      return 1;
    __asm
    {
      vmovss  xmm0, dword ptr [rax+50h]
      vcomiss xmm0, dword ptr [rdi+20h]
    }
    if ( _RAX->m_numHits )
      return 1;
  }
  else
  {
    _RAX = this->m_collector;
    if ( !_RAX->m_numHits )
      return 1;
    __asm
    {
      vmovss  xmm0, dword ptr [rax+50h]
      vcomiss xmm0, dword ptr [rdi+20h]
    }
    if ( _RAX->m_numHits )
      return 1;
  }
  return 0;
}

/*
==============
HavokPhysicsAllHitsCollector::addHit
==============
*/
void HavokPhysicsAllHitsCollector::addHit(HavokPhysicsAllHitsCollector *this, const hknpCollisionResult *hit)
{
  HavokPhysicsHitCollector *m_collector; 
  int m_queryType; 
  __int64 m_size; 
  __int64 v14; 
  int v16; 
  HavokPhysicsHitCollector_Modifier **m_data; 
  HavokPhysicsHitCollector_Modifier **v18; 
  bool v19; 
  unsigned __int64 v20; 
  const hknpCollisionResult *v27; 
  int v34; 
  int v35; 
  int v36; 
  int v37; 
  int v38; 
  int v39; 
  int v40; 
  int v41; 
  int v42; 
  int v43; 
  int v44; 
  int v45; 
  int v46; 
  int v47; 
  int v48; 
  int v49; 
  int v50; 
  int v51; 
  __m256i v52; 
  unsigned int m_serialAndIndex; 
  unsigned int m_value; 
  int v56; 
  unsigned __int16 v57; 
  unsigned int m_collisionFilterInfo; 
  unsigned __int64 m_userData; 
  unsigned int v60; 
  unsigned int v61; 
  int v62; 
  unsigned __int16 v63; 
  unsigned int v64; 
  __int64 v65; 
  int v66; 
  int v67; 

  _RBX = hit;
  if ( !this->m_collector && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicshitcollectors.cpp", 577, ASSERT_TYPE_ASSERT, "(m_collector)", (const char *)&queryFormat, "m_collector") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rbx]
    vmovss  [rbp+57h+var_C0], xmm0
  }
  if ( (v34 & 0x7F800000) == 2139095040 )
    goto LABEL_50;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+4]
    vmovss  [rbp+57h+var_C0], xmm0
  }
  if ( (v35 & 0x7F800000) == 2139095040 )
    goto LABEL_50;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+8]
    vmovss  [rbp+57h+var_C0], xmm0
  }
  if ( (v36 & 0x7F800000) == 2139095040 )
  {
LABEL_50:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicshitcollectors.cpp", 578, ASSERT_TYPE_ASSERT, "(!IS_NAN( hit.m_position( 0 ) ) && !IS_NAN( hit.m_position( 1 ) ) && !IS_NAN( hit.m_position( 2 ) ))", (const char *)&queryFormat, "!IS_NAN( hit.m_position( 0 ) ) && !IS_NAN( hit.m_position( 1 ) ) && !IS_NAN( hit.m_position( 2 ) )") )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+10h]
    vmovss  [rbp+57h+var_C0], xmm0
  }
  if ( (v37 & 0x7F800000) == 2139095040 )
    goto LABEL_51;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+14h]
    vmovss  [rbp+57h+var_C0], xmm0
  }
  if ( (v38 & 0x7F800000) == 2139095040 )
    goto LABEL_51;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+18h]
    vmovss  [rbp+57h+var_C0], xmm0
  }
  if ( (v39 & 0x7F800000) == 2139095040 )
  {
LABEL_51:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicshitcollectors.cpp", 579, ASSERT_TYPE_ASSERT, "(!IS_NAN( hit.m_normal( 0 ) ) && !IS_NAN( hit.m_normal( 1 ) ) && !IS_NAN( hit.m_normal( 2 ) ))", (const char *)&queryFormat, "!IS_NAN( hit.m_normal( 0 ) ) && !IS_NAN( hit.m_normal( 1 ) ) && !IS_NAN( hit.m_normal( 2 ) )") )
      __debugbreak();
  }
  m_collector = this->m_collector;
  m_queryType = _RBX->m_queryType;
  m_size = m_collector->m_modifiers.m_size;
  if ( (int)m_size <= 0 )
  {
    if ( m_queryType != 1 || m_collector->m_enableInsideHits || (_RBX->m_rayCastResult.m_value & 4) == 0 )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rbx]
        vmovss  [rbp+57h+var_C0], xmm0
      }
      if ( (v46 & 0x7F800000) == 2139095040 )
        goto LABEL_52;
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+4]
        vmovss  [rbp+57h+var_C0], xmm0
      }
      if ( (v47 & 0x7F800000) == 2139095040 )
        goto LABEL_52;
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+8]
        vmovss  [rbp+57h+var_C0], xmm0
      }
      if ( (v48 & 0x7F800000) == 2139095040 )
      {
LABEL_52:
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicshitcollectors.cpp", 608, ASSERT_TYPE_ASSERT, "(!IS_NAN( hit.m_position( 0 ) ) && !IS_NAN( hit.m_position( 1 ) ) && !IS_NAN( hit.m_position( 2 ) ))", (const char *)&queryFormat, "!IS_NAN( hit.m_position( 0 ) ) && !IS_NAN( hit.m_position( 1 ) ) && !IS_NAN( hit.m_position( 2 ) )") )
          __debugbreak();
      }
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+10h]
        vmovss  [rbp+57h+var_C0], xmm0
      }
      if ( (v49 & 0x7F800000) == 2139095040 )
        goto LABEL_53;
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+14h]
        vmovss  [rbp+57h+var_C0], xmm0
      }
      if ( (v50 & 0x7F800000) == 2139095040 )
        goto LABEL_53;
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+18h]
        vmovss  [rbp+57h+var_C0], xmm0
      }
      if ( (v51 & 0x7F800000) == 2139095040 )
      {
LABEL_53:
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicshitcollectors.cpp", 609, ASSERT_TYPE_ASSERT, "(!IS_NAN( hit.m_normal( 0 ) ) && !IS_NAN( hit.m_normal( 1 ) ) && !IS_NAN( hit.m_normal( 2 ) ))", (const char *)&queryFormat, "!IS_NAN( hit.m_normal( 0 ) ) && !IS_NAN( hit.m_normal( 1 ) ) && !IS_NAN( hit.m_normal( 2 ) )") )
          __debugbreak();
      }
      v27 = _RBX;
      goto LABEL_47;
    }
  }
  else
  {
    __asm { vmovups ymm0, ymmword ptr [rbx] }
    m_serialAndIndex = _RBX->m_queryBodyInfo.m_bodyId.m_serialAndIndex;
    m_value = _RBX->m_queryBodyInfo.m_shapeKey.m_value;
    v56 = *(_DWORD *)_RBX->m_queryBodyInfo.m_levelOfDetail;
    v57 = _RBX->m_queryBodyInfo.m_filterData.m_materialId.m_value;
    m_collisionFilterInfo = _RBX->m_queryBodyInfo.m_filterData.m_collisionFilterInfo;
    m_userData = _RBX->m_queryBodyInfo.m_filterData.m_userData;
    v60 = _RBX->m_hitBodyInfo.m_bodyId.m_serialAndIndex;
    v61 = _RBX->m_hitBodyInfo.m_shapeKey.m_value;
    v62 = *(_DWORD *)_RBX->m_hitBodyInfo.m_levelOfDetail;
    v63 = _RBX->m_hitBodyInfo.m_filterData.m_materialId.m_value;
    v64 = _RBX->m_hitBodyInfo.m_filterData.m_collisionFilterInfo;
    v14 = _RBX->m_hitBodyInfo.m_filterData.m_userData;
    __asm
    {
      vmovups [rbp+57h+var_B0], ymm0
      vmovss  xmm0, dword ptr [rbx+20h]
    }
    v65 = v14;
    v16 = _RBX->m_rayCastResult.m_value;
    v67 = v16;
    __asm { vmovss  [rbp+57h+var_90], xmm0 }
    v66 = m_queryType;
    m_data = m_collector->m_modifiers.m_data;
    v18 = &m_data[m_size];
    v19 = m_data < v18;
    if ( m_data != v18 )
    {
      do
      {
        (*m_data)->ModifyHit(*m_data, m_collector, (hknpCollisionResult *)&v52);
        ++m_data;
        v20 = (unsigned __int64)&m_collector->m_modifiers.m_data[m_collector->m_modifiers.m_size];
        v19 = (unsigned __int64)m_data < v20;
      }
      while ( m_data != (HavokPhysicsHitCollector_Modifier **)v20 );
      LOBYTE(v16) = v67;
      __asm { vmovss  xmm0, [rbp+57h+var_90] }
    }
    __asm { vcomiss xmm0, cs:__real@3f800000 }
    if ( v19 && (m_queryType != 1 || this->m_collector->m_enableInsideHits || (v16 & 5) == 0) )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rbp+57h+var_B0]
        vmovss  [rbp+57h+var_C0], xmm0
      }
      if ( (v40 & 0x7F800000) == 2139095040 )
        goto LABEL_54;
      __asm
      {
        vmovss  xmm0, dword ptr [rbp+57h+var_B0+4]
        vmovss  [rbp+57h+var_C0], xmm0
      }
      if ( (v41 & 0x7F800000) == 2139095040 )
        goto LABEL_54;
      __asm
      {
        vmovss  xmm0, dword ptr [rbp+57h+var_B0+8]
        vmovss  [rbp+57h+var_C0], xmm0
      }
      if ( (v42 & 0x7F800000) == 2139095040 )
      {
LABEL_54:
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicshitcollectors.cpp", 595, ASSERT_TYPE_ASSERT, "(!IS_NAN( modifiedHit.m_position( 0 ) ) && !IS_NAN( modifiedHit.m_position( 1 ) ) && !IS_NAN( modifiedHit.m_position( 2 ) ))", (const char *)&queryFormat, "!IS_NAN( modifiedHit.m_position( 0 ) ) && !IS_NAN( modifiedHit.m_position( 1 ) ) && !IS_NAN( modifiedHit.m_position( 2 ) )") )
          __debugbreak();
      }
      __asm
      {
        vmovss  xmm0, dword ptr [rbp+57h+var_B0+10h]
        vmovss  [rbp+57h+var_C0], xmm0
      }
      if ( (v43 & 0x7F800000) == 2139095040 )
        goto LABEL_55;
      __asm
      {
        vmovss  xmm0, dword ptr [rbp+57h+var_B0+14h]
        vmovss  [rbp+57h+var_C0], xmm0
      }
      if ( (v44 & 0x7F800000) == 2139095040 )
        goto LABEL_55;
      __asm
      {
        vmovss  xmm0, dword ptr [rbp+57h+var_B0+18h]
        vmovss  [rbp+57h+var_C0], xmm0
      }
      if ( (v45 & 0x7F800000) == 2139095040 )
      {
LABEL_55:
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicshitcollectors.cpp", 596, ASSERT_TYPE_ASSERT, "(!IS_NAN( modifiedHit.m_normal( 0 ) ) && !IS_NAN( modifiedHit.m_normal( 1 ) ) && !IS_NAN( modifiedHit.m_normal( 2 ) ))", (const char *)&queryFormat, "!IS_NAN( modifiedHit.m_normal( 0 ) ) && !IS_NAN( modifiedHit.m_normal( 1 ) ) && !IS_NAN( modifiedHit.m_normal( 2 ) )") )
          __debugbreak();
      }
      v27 = (const hknpCollisionResult *)&v52;
LABEL_47:
      hknpAllHitsCollector::addHit(this, v27);
    }
  }
}

/*
==============
HavokPhysicsAnyHitCollector::addHit
==============
*/
void HavokPhysicsAnyHitCollector::addHit(HavokPhysicsAnyHitCollector *this, const hknpCollisionResult *hit)
{
  HavokPhysicsHitCollector *m_collector; 
  int m_queryType; 
  __int64 m_size; 
  __int16 m_value; 
  int m_serialAndIndex; 
  int v18; 
  int v19; 
  int v20; 
  int v21; 
  __int64 v22; 
  int v23; 
  HavokPhysicsHitCollector_Modifier **m_data; 
  HavokPhysicsHitCollector_Modifier **v25; 
  bool v26; 
  unsigned __int64 v27; 
  __int16 v28; 
  int v29; 
  int v30; 
  int v31; 
  int v45; 
  int v46; 
  int v47; 
  int v48; 
  int v49; 
  int v50; 
  int v51; 
  int v52; 
  int v53; 
  int v54; 
  int v55; 
  int v56; 
  int v57; 
  int v58; 
  int v59; 
  int v60; 
  int v61; 
  int v62; 
  int v63; 
  __int64 v64; 
  __int128 v65; 
  int v68; 
  int v69; 
  int v70; 
  __int16 v71; 
  int v72; 
  __int64 v73; 
  int v74; 
  int v75; 
  int v76; 
  __int16 v77; 
  int m_collisionFilterInfo; 
  __int64 m_userData; 
  int v80; 
  int v81; 

  _RDI = hit;
  _RBX = this;
  if ( !this->m_collector && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicshitcollectors.cpp", 411, ASSERT_TYPE_ASSERT, "(m_collector)", (const char *)&queryFormat, "m_collector") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rdi]
    vmovss  [rbp+57h+var_D0], xmm0
  }
  if ( (v57 & 0x7F800000) == 2139095040 )
    goto LABEL_55;
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+4]
    vmovss  [rbp+57h+var_D0], xmm0
  }
  if ( (v58 & 0x7F800000) == 2139095040 )
    goto LABEL_55;
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+8]
    vmovss  [rbp+57h+var_D0], xmm0
  }
  if ( (v59 & 0x7F800000) == 2139095040 )
  {
LABEL_55:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicshitcollectors.cpp", 412, ASSERT_TYPE_ASSERT, "(!IS_NAN( hit.m_position( 0 ) ) && !IS_NAN( hit.m_position( 1 ) ) && !IS_NAN( hit.m_position( 2 ) ))", (const char *)&queryFormat, "!IS_NAN( hit.m_position( 0 ) ) && !IS_NAN( hit.m_position( 1 ) ) && !IS_NAN( hit.m_position( 2 ) )") )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+10h]
    vmovss  [rbp+57h+var_D0], xmm0
  }
  if ( (v60 & 0x7F800000) == 2139095040 )
    goto LABEL_56;
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+14h]
    vmovss  [rbp+57h+var_D0], xmm0
  }
  if ( (v61 & 0x7F800000) == 2139095040 )
    goto LABEL_56;
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+18h]
    vmovss  [rbp+57h+var_D0], xmm0
  }
  if ( (v62 & 0x7F800000) == 2139095040 )
  {
LABEL_56:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicshitcollectors.cpp", 413, ASSERT_TYPE_ASSERT, "(!IS_NAN( hit.m_normal( 0 ) ) && !IS_NAN( hit.m_normal( 1 ) ) && !IS_NAN( hit.m_normal( 2 ) ))", (const char *)&queryFormat, "!IS_NAN( hit.m_normal( 0 ) ) && !IS_NAN( hit.m_normal( 1 ) ) && !IS_NAN( hit.m_normal( 2 ) )") )
      __debugbreak();
  }
  m_collector = _RBX->m_collector;
  m_queryType = _RDI->m_queryType;
  m_size = m_collector->m_modifiers.m_size;
  if ( (int)m_size <= 0 )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+50h]
      vcomiss xmm0, dword ptr [rdi+20h]
    }
    if ( ((_DWORD)m_size || !_RBX->m_numHits) && (m_queryType != 1 || m_collector->m_enableInsideHits || (_RDI->m_rayCastResult.m_value & 4) == 0) )
    {
      __asm
      {
        vmovups xmm0, xmmword ptr [rdi]
        vmovups xmmword ptr [rbx+30h], xmm0
        vmovups xmm1, xmmword ptr [rdi+10h]
        vmovups xmmword ptr [rbx+40h], xmm1
      }
      _RBX->m_hit.m_fraction = _RDI->m_fraction;
      _RBX->m_hit.m_queryBodyInfo.m_bodyId.m_serialAndIndex = _RDI->m_queryBodyInfo.m_bodyId.m_serialAndIndex;
      _RBX->m_hit.m_queryBodyInfo.m_shapeKey.m_value = _RDI->m_queryBodyInfo.m_shapeKey.m_value;
      *(_DWORD *)_RBX->m_hit.m_queryBodyInfo.m_levelOfDetail = *(_DWORD *)_RDI->m_queryBodyInfo.m_levelOfDetail;
      _RBX->m_hit.m_queryBodyInfo.m_filterData.m_materialId.m_value = _RDI->m_queryBodyInfo.m_filterData.m_materialId.m_value;
      _RBX->m_hit.m_queryBodyInfo.m_filterData.m_collisionFilterInfo = _RDI->m_queryBodyInfo.m_filterData.m_collisionFilterInfo;
      _RBX->m_hit.m_queryBodyInfo.m_filterData.m_userData = _RDI->m_queryBodyInfo.m_filterData.m_userData;
      _RBX->m_hit.m_hitBodyInfo.m_bodyId.m_serialAndIndex = _RDI->m_hitBodyInfo.m_bodyId.m_serialAndIndex;
      _RBX->m_hit.m_hitBodyInfo.m_shapeKey.m_value = _RDI->m_hitBodyInfo.m_shapeKey.m_value;
      *(_DWORD *)_RBX->m_hit.m_hitBodyInfo.m_levelOfDetail = *(_DWORD *)_RDI->m_hitBodyInfo.m_levelOfDetail;
      _RBX->m_hit.m_hitBodyInfo.m_filterData.m_materialId.m_value = _RDI->m_hitBodyInfo.m_filterData.m_materialId.m_value;
      _RBX->m_hit.m_hitBodyInfo.m_filterData.m_collisionFilterInfo = _RDI->m_hitBodyInfo.m_filterData.m_collisionFilterInfo;
      _RBX->m_hit.m_hitBodyInfo.m_filterData.m_userData = _RDI->m_hitBodyInfo.m_filterData.m_userData;
      _RBX->m_hit.m_queryType = _RDI->m_queryType;
      _RBX->m_hit.m_rayCastResult.m_value = _RDI->m_rayCastResult.m_value;
      _RBX->m_numHits = 1;
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+30h]
        vmovss  [rsp+110h+var_E0], xmm0
      }
      if ( (v51 & 0x7F800000) == 2139095040 )
        goto LABEL_57;
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+34h]
        vmovss  [rsp+110h+var_E0], xmm0
      }
      if ( (v52 & 0x7F800000) == 2139095040 )
        goto LABEL_57;
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+38h]
        vmovss  [rsp+110h+var_E0], xmm0
      }
      if ( (v53 & 0x7F800000) == 2139095040 )
      {
LABEL_57:
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicshitcollectors.cpp", 453, ASSERT_TYPE_ASSERT, "(!IS_NAN( m_hit.m_position( 0 ) ) && !IS_NAN( m_hit.m_position( 1 ) ) && !IS_NAN( m_hit.m_position( 2 ) ))", (const char *)&queryFormat, "!IS_NAN( m_hit.m_position( 0 ) ) && !IS_NAN( m_hit.m_position( 1 ) ) && !IS_NAN( m_hit.m_position( 2 ) )") )
          __debugbreak();
      }
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+40h]
        vmovss  [rsp+110h+var_E0], xmm0
      }
      if ( (v54 & 0x7F800000) == 2139095040 )
        goto LABEL_58;
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+44h]
        vmovss  [rsp+110h+var_E0], xmm0
      }
      if ( (v55 & 0x7F800000) == 2139095040 )
        goto LABEL_58;
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+48h]
        vmovss  [rsp+110h+var_E0], xmm0
      }
      if ( (v56 & 0x7F800000) == 2139095040 )
      {
LABEL_58:
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicshitcollectors.cpp", 454, ASSERT_TYPE_ASSERT, "(!IS_NAN( m_hit.m_normal( 0 ) ) && !IS_NAN( m_hit.m_normal( 1 ) ) && !IS_NAN( m_hit.m_normal( 2 ) ))", (const char *)&queryFormat, "!IS_NAN( m_hit.m_normal( 0 ) ) && !IS_NAN( m_hit.m_normal( 1 ) ) && !IS_NAN( m_hit.m_normal( 2 ) )") )
          __debugbreak();
      }
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vmovups xmmword ptr [rbx+10h], xmm0
      }
      _RBX->m_earlyOut.m_bool = 1;
    }
  }
  else
  {
    __asm
    {
      vmovups xmm1, xmmword ptr [rdi]
      vmovups xmm2, xmmword ptr [rdi+10h]
      vmovss  xmm0, dword ptr [rdi+20h]
    }
    m_value = _RDI->m_queryBodyInfo.m_filterData.m_materialId.m_value;
    m_serialAndIndex = _RDI->m_queryBodyInfo.m_bodyId.m_serialAndIndex;
    v18 = _RDI->m_queryBodyInfo.m_shapeKey.m_value;
    v19 = *(_DWORD *)_RDI->m_queryBodyInfo.m_levelOfDetail;
    v20 = _RDI->m_hitBodyInfo.m_bodyId.m_serialAndIndex;
    v75 = _RDI->m_hitBodyInfo.m_shapeKey.m_value;
    v76 = *(_DWORD *)_RDI->m_hitBodyInfo.m_levelOfDetail;
    v77 = _RDI->m_hitBodyInfo.m_filterData.m_materialId.m_value;
    m_collisionFilterInfo = _RDI->m_hitBodyInfo.m_filterData.m_collisionFilterInfo;
    v63 = m_collisionFilterInfo;
    v21 = _RDI->m_queryBodyInfo.m_filterData.m_collisionFilterInfo;
    m_userData = _RDI->m_hitBodyInfo.m_filterData.m_userData;
    v22 = _RDI->m_queryBodyInfo.m_filterData.m_userData;
    v64 = m_userData;
    v23 = _RDI->m_rayCastResult.m_value;
    v81 = v23;
    __asm
    {
      vmovss  [rbp+57h+var_80], xmm0
      vmovups [rbp+57h+var_A0], xmm1
      vmovups [rbp+57h+var_90], xmm2
    }
    v68 = m_serialAndIndex;
    v69 = v18;
    v70 = v19;
    v71 = m_value;
    v72 = v21;
    v73 = v22;
    v74 = v20;
    v80 = m_queryType;
    m_data = m_collector->m_modifiers.m_data;
    v25 = &m_data[m_size];
    v26 = m_data < v25;
    if ( m_data == v25 )
    {
      v30 = v75;
      v29 = v76;
      v28 = v77;
    }
    else
    {
      do
      {
        (*m_data)->ModifyHit(*m_data, m_collector, (hknpCollisionResult *)&v65);
        ++m_data;
        v27 = (unsigned __int64)&m_collector->m_modifiers.m_data[m_collector->m_modifiers.m_size];
        v26 = (unsigned __int64)m_data < v27;
      }
      while ( m_data != (HavokPhysicsHitCollector_Modifier **)v27 );
      v23 = v81;
      v28 = v77;
      v29 = v76;
      v30 = v75;
      v20 = v74;
      v22 = v73;
      v21 = v72;
      m_value = v71;
      v19 = v70;
      v18 = v69;
      __asm
      {
        vmovss  xmm0, [rbp+57h+var_80]
        vmovups xmm2, [rbp+57h+var_90]
        vmovups xmm1, [rbp+57h+var_A0]
      }
      v64 = m_userData;
      v63 = m_collisionFilterInfo;
      m_serialAndIndex = v68;
    }
    __asm { vcomiss xmm0, cs:__real@3f800000 }
    if ( v26 )
    {
      __asm { vcomiss xmm0, dword ptr [rbx+50h] }
      if ( (v26 || !_RBX->m_numHits) && (m_queryType != 1 || _RBX->m_collector->m_enableInsideHits || (v23 & 5) == 0) )
      {
        __asm
        {
          vmovss  dword ptr [rbx+50h], xmm0
          vmovups xmmword ptr [rbx+30h], xmm1
          vmovups xmmword ptr [rbx+40h], xmm2
        }
        _RBX->m_hit.m_queryBodyInfo.m_bodyId.m_serialAndIndex = m_serialAndIndex;
        _RBX->m_hit.m_queryBodyInfo.m_shapeKey.m_value = v18;
        *(_DWORD *)_RBX->m_hit.m_queryBodyInfo.m_levelOfDetail = v19;
        _RBX->m_hit.m_queryBodyInfo.m_filterData.m_materialId.m_value = m_value;
        _RBX->m_hit.m_queryBodyInfo.m_filterData.m_collisionFilterInfo = v21;
        _RBX->m_hit.m_queryBodyInfo.m_filterData.m_userData = v22;
        _RBX->m_hit.m_hitBodyInfo.m_bodyId.m_serialAndIndex = v20;
        _RBX->m_hit.m_hitBodyInfo.m_shapeKey.m_value = v30;
        *(_DWORD *)_RBX->m_hit.m_hitBodyInfo.m_levelOfDetail = v29;
        _RBX->m_hit.m_hitBodyInfo.m_filterData.m_materialId.m_value = v28;
        _RBX->m_hit.m_hitBodyInfo.m_filterData.m_collisionFilterInfo = v63;
        _RBX->m_hit.m_hitBodyInfo.m_filterData.m_userData = v64;
        v31 = v80;
        _RBX->m_hit.m_rayCastResult.m_value = v23;
        _RBX->m_hit.m_queryType = v31;
        _RBX->m_numHits = 1;
        __asm
        {
          vmovss  xmm0, dword ptr [rbx+30h]
          vmovss  [rsp+110h+var_E0], xmm0
        }
        if ( (v45 & 0x7F800000) == 2139095040 )
          goto LABEL_59;
        __asm
        {
          vmovss  xmm0, dword ptr [rbx+34h]
          vmovss  [rsp+110h+var_E0], xmm0
        }
        if ( (v46 & 0x7F800000) == 2139095040 )
          goto LABEL_59;
        __asm
        {
          vmovss  xmm0, dword ptr [rbx+38h]
          vmovss  [rsp+110h+var_E0], xmm0
        }
        if ( (v47 & 0x7F800000) == 2139095040 )
        {
LABEL_59:
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicshitcollectors.cpp", 434, ASSERT_TYPE_ASSERT, "(!IS_NAN( m_hit.m_position( 0 ) ) && !IS_NAN( m_hit.m_position( 1 ) ) && !IS_NAN( m_hit.m_position( 2 ) ))", (const char *)&queryFormat, "!IS_NAN( m_hit.m_position( 0 ) ) && !IS_NAN( m_hit.m_position( 1 ) ) && !IS_NAN( m_hit.m_position( 2 ) )") )
            __debugbreak();
        }
        __asm
        {
          vmovss  xmm0, dword ptr [rbx+40h]
          vmovss  [rsp+110h+var_E0], xmm0
        }
        if ( (v48 & 0x7F800000) == 2139095040 )
          goto LABEL_60;
        __asm
        {
          vmovss  xmm0, dword ptr [rbx+44h]
          vmovss  [rsp+110h+var_E0], xmm0
        }
        if ( (v49 & 0x7F800000) == 2139095040 )
          goto LABEL_60;
        __asm
        {
          vmovss  xmm0, dword ptr [rbx+48h]
          vmovss  [rsp+110h+var_E0], xmm0
        }
        if ( (v50 & 0x7F800000) == 2139095040 )
        {
LABEL_60:
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicshitcollectors.cpp", 435, ASSERT_TYPE_ASSERT, "(!IS_NAN( m_hit.m_normal( 0 ) ) && !IS_NAN( m_hit.m_normal( 1 ) ) && !IS_NAN( m_hit.m_normal( 2 ) ))", (const char *)&queryFormat, "!IS_NAN( m_hit.m_normal( 0 ) ) && !IS_NAN( m_hit.m_normal( 1 ) ) && !IS_NAN( m_hit.m_normal( 2 ) )") )
            __debugbreak();
        }
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vmovups xmmword ptr [rbx+10h], xmm0
        }
        _RBX->m_earlyOut.m_bool = 1;
      }
    }
  }
}

/*
==============
HavokPhysicsClosestHitCollector::addHit
==============
*/
void HavokPhysicsClosestHitCollector::addHit(HavokPhysicsClosestHitCollector *this, const hknpCollisionResult *hit)
{
  HavokPhysicsHitCollector *m_collector; 
  int m_queryType; 
  __int64 m_size; 
  unsigned __int64 v14; 
  HavokPhysicsHitCollector_Modifier **m_data; 
  HavokPhysicsHitCollector_Modifier **v16; 
  bool v17; 
  unsigned __int64 v18; 
  unsigned __int8 v19; 
  unsigned __int8 v20; 
  char v23; 
  int v24; 
  int v25; 
  int v27; 
  int v34; 
  unsigned __int8 DecalTypeFromUserData; 
  unsigned __int8 v36; 
  char v39; 
  int v55; 
  int v56; 
  int v57; 
  int v58; 
  int v59; 
  int v60; 
  int v61; 
  int v62; 
  int v63; 
  int v64; 
  int v65; 
  int v66; 
  int v67; 
  int v68; 
  int v69; 
  int v70; 
  int v71; 
  int v72; 
  __m256i v74; 
  int m_serialAndIndex; 
  unsigned int m_value; 
  int v78; 
  unsigned __int16 v79; 
  unsigned int m_collisionFilterInfo; 
  unsigned __int64 m_userData; 
  unsigned int v82; 
  unsigned int v83; 
  int v84; 
  unsigned __int16 v85; 
  unsigned int v86; 
  unsigned __int64 userData; 
  int v88; 
  int v89; 

  __asm { vmovaps [rsp+0F0h+var_30], xmm6 }
  _RSI = hit;
  _RDI = this;
  if ( !this->m_collector && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicshitcollectors.cpp", 485, ASSERT_TYPE_ASSERT, "(m_collector)", (const char *)&queryFormat, "m_collector") )
    __debugbreak();
  __asm
  {
    vmovss  xmm0, dword ptr [rsi]
    vmovss  [rbp+57h+var_C0], xmm0
  }
  if ( (v55 & 0x7F800000) == 2139095040 )
    goto LABEL_67;
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+4]
    vmovss  [rbp+57h+var_C0], xmm0
  }
  if ( (v56 & 0x7F800000) == 2139095040 )
    goto LABEL_67;
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+8]
    vmovss  [rbp+57h+var_C0], xmm0
  }
  if ( (v57 & 0x7F800000) == 2139095040 )
  {
LABEL_67:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicshitcollectors.cpp", 486, ASSERT_TYPE_ASSERT, "(!IS_NAN( hit.m_position( 0 ) ) && !IS_NAN( hit.m_position( 1 ) ) && !IS_NAN( hit.m_position( 2 ) ))", (const char *)&queryFormat, "!IS_NAN( hit.m_position( 0 ) ) && !IS_NAN( hit.m_position( 1 ) ) && !IS_NAN( hit.m_position( 2 ) )") )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+10h]
    vmovss  [rbp+57h+var_C0], xmm0
  }
  if ( (v58 & 0x7F800000) == 2139095040 )
    goto LABEL_68;
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+14h]
    vmovss  [rbp+57h+var_C0], xmm0
  }
  if ( (v59 & 0x7F800000) == 2139095040 )
    goto LABEL_68;
  __asm
  {
    vmovss  xmm0, dword ptr [rsi+18h]
    vmovss  [rbp+57h+var_C0], xmm0
  }
  if ( (v60 & 0x7F800000) == 2139095040 )
  {
LABEL_68:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicshitcollectors.cpp", 487, ASSERT_TYPE_ASSERT, "(!IS_NAN( hit.m_normal( 0 ) ) && !IS_NAN( hit.m_normal( 1 ) ) && !IS_NAN( hit.m_normal( 2 ) ))", (const char *)&queryFormat, "!IS_NAN( hit.m_normal( 0 ) ) && !IS_NAN( hit.m_normal( 1 ) ) && !IS_NAN( hit.m_normal( 2 ) )") )
      __debugbreak();
  }
  m_collector = _RDI->m_collector;
  m_queryType = _RSI->m_queryType;
  __asm { vmovss  xmm6, cs:__real@3f800000 }
  m_size = m_collector->m_modifiers.m_size;
  if ( (int)m_size <= 0 )
  {
    DecalTypeFromUserData = Physics_GetDecalTypeFromUserData(_RDI->m_hit.m_hitBodyInfo.m_filterData.m_userData);
    v36 = Physics_GetDecalTypeFromUserData(_RSI->m_hitBodyInfo.m_filterData.m_userData);
    if ( DecalTypeFromUserData == v36 )
      goto LABEL_42;
    __asm
    {
      vmovss  xmm0, dword ptr [rsi+20h]
      vsubss  xmm1, xmm0, dword ptr [rdi+50h]
      vandps  xmm1, xmm1, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
      vcomiss xmm1, cs:__real@358637bd
    }
    if ( DecalTypeFromUserData >= v36 )
LABEL_42:
      v39 = 0;
    else
      v39 = 1;
    if ( !_RDI->m_numHits )
      goto LABEL_49;
    if ( !v39 )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rdi+50h]
        vcomiss xmm0, dword ptr [rsi+20h]
      }
      goto LABEL_62;
    }
    if ( v36 )
    {
LABEL_49:
      if ( m_queryType == 1 && !_RDI->m_collector->m_enableInsideHits && (_RSI->m_rayCastResult.m_value & 4) != 0 )
        goto LABEL_64;
      __asm
      {
        vmovups xmm0, xmmword ptr [rsi]
        vmovups xmmword ptr [rdi+30h], xmm0
        vmovups xmm1, xmmword ptr [rsi+10h]
        vmovups xmmword ptr [rdi+40h], xmm1
      }
      _RDI->m_hit.m_fraction = _RSI->m_fraction;
      _RDI->m_hit.m_queryBodyInfo.m_bodyId.m_serialAndIndex = _RSI->m_queryBodyInfo.m_bodyId.m_serialAndIndex;
      _RDI->m_hit.m_queryBodyInfo.m_shapeKey.m_value = _RSI->m_queryBodyInfo.m_shapeKey.m_value;
      *(_DWORD *)_RDI->m_hit.m_queryBodyInfo.m_levelOfDetail = *(_DWORD *)_RSI->m_queryBodyInfo.m_levelOfDetail;
      _RDI->m_hit.m_queryBodyInfo.m_filterData.m_materialId.m_value = _RSI->m_queryBodyInfo.m_filterData.m_materialId.m_value;
      _RDI->m_hit.m_queryBodyInfo.m_filterData.m_collisionFilterInfo = _RSI->m_queryBodyInfo.m_filterData.m_collisionFilterInfo;
      _RDI->m_hit.m_queryBodyInfo.m_filterData.m_userData = _RSI->m_queryBodyInfo.m_filterData.m_userData;
      _RDI->m_hit.m_hitBodyInfo.m_bodyId.m_serialAndIndex = _RSI->m_hitBodyInfo.m_bodyId.m_serialAndIndex;
      _RDI->m_hit.m_hitBodyInfo.m_shapeKey.m_value = _RSI->m_hitBodyInfo.m_shapeKey.m_value;
      *(_DWORD *)_RDI->m_hit.m_hitBodyInfo.m_levelOfDetail = *(_DWORD *)_RSI->m_hitBodyInfo.m_levelOfDetail;
      _RDI->m_hit.m_hitBodyInfo.m_filterData.m_materialId.m_value = _RSI->m_hitBodyInfo.m_filterData.m_materialId.m_value;
      _RDI->m_hit.m_hitBodyInfo.m_filterData.m_collisionFilterInfo = _RSI->m_hitBodyInfo.m_filterData.m_collisionFilterInfo;
      _RDI->m_hit.m_hitBodyInfo.m_filterData.m_userData = _RSI->m_hitBodyInfo.m_filterData.m_userData;
      _RDI->m_hit.m_queryType = _RSI->m_queryType;
      _RDI->m_hit.m_rayCastResult.m_value = _RSI->m_rayCastResult.m_value;
      _RDI->m_numHits = 1;
      __asm
      {
        vmovss  xmm0, dword ptr [rdi+30h]
        vmovss  [rbp+57h+var_C0], xmm0
      }
      if ( (v67 & 0x7F800000) == 2139095040 )
        goto LABEL_69;
      __asm
      {
        vmovss  xmm0, dword ptr [rdi+34h]
        vmovss  [rbp+57h+var_C0], xmm0
      }
      if ( (v68 & 0x7F800000) == 2139095040 )
        goto LABEL_69;
      __asm
      {
        vmovss  xmm0, dword ptr [rdi+38h]
        vmovss  [rbp+57h+var_C0], xmm0
      }
      if ( (v69 & 0x7F800000) == 2139095040 )
      {
LABEL_69:
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicshitcollectors.cpp", 539, ASSERT_TYPE_ASSERT, "(!IS_NAN( m_hit.m_position( 0 ) ) && !IS_NAN( m_hit.m_position( 1 ) ) && !IS_NAN( m_hit.m_position( 2 ) ))", (const char *)&queryFormat, "!IS_NAN( m_hit.m_position( 0 ) ) && !IS_NAN( m_hit.m_position( 1 ) ) && !IS_NAN( m_hit.m_position( 2 ) )") )
          __debugbreak();
      }
      __asm
      {
        vmovss  xmm0, dword ptr [rdi+40h]
        vmovss  [rbp+57h+var_C0], xmm0
      }
      if ( (v70 & 0x7F800000) != 2139095040 )
      {
        __asm
        {
          vmovss  xmm0, dword ptr [rdi+44h]
          vmovss  [rbp+57h+var_C0], xmm0
        }
        if ( (v71 & 0x7F800000) != 2139095040 )
        {
          __asm
          {
            vmovss  xmm0, dword ptr [rdi+48h]
            vmovss  [rbp+57h+var_C0], xmm0
          }
          if ( (v72 & 0x7F800000) != 2139095040 )
            goto LABEL_61;
        }
      }
      v34 = 540;
      goto LABEL_59;
    }
  }
  else
  {
    __asm { vmovups ymm0, ymmword ptr [rsi] }
    m_serialAndIndex = _RSI->m_queryBodyInfo.m_bodyId.m_serialAndIndex;
    m_value = _RSI->m_queryBodyInfo.m_shapeKey.m_value;
    v78 = *(_DWORD *)_RSI->m_queryBodyInfo.m_levelOfDetail;
    v79 = _RSI->m_queryBodyInfo.m_filterData.m_materialId.m_value;
    m_collisionFilterInfo = _RSI->m_queryBodyInfo.m_filterData.m_collisionFilterInfo;
    m_userData = _RSI->m_queryBodyInfo.m_filterData.m_userData;
    v82 = _RSI->m_hitBodyInfo.m_bodyId.m_serialAndIndex;
    v83 = _RSI->m_hitBodyInfo.m_shapeKey.m_value;
    v84 = *(_DWORD *)_RSI->m_hitBodyInfo.m_levelOfDetail;
    v85 = _RSI->m_hitBodyInfo.m_filterData.m_materialId.m_value;
    v86 = _RSI->m_hitBodyInfo.m_filterData.m_collisionFilterInfo;
    v14 = _RSI->m_hitBodyInfo.m_filterData.m_userData;
    __asm
    {
      vmovups [rbp+57h+var_B0], ymm0
      vmovss  xmm0, dword ptr [rsi+20h]
    }
    userData = v14;
    v89 = _RSI->m_rayCastResult.m_value;
    __asm { vmovss  [rbp+57h+var_90], xmm0 }
    v88 = m_queryType;
    m_data = m_collector->m_modifiers.m_data;
    v16 = &m_data[m_size];
    v17 = m_data < v16;
    if ( m_data != v16 )
    {
      do
      {
        (*m_data)->ModifyHit(*m_data, m_collector, (hknpCollisionResult *)&v74);
        ++m_data;
        v18 = (unsigned __int64)&m_collector->m_modifiers.m_data[m_collector->m_modifiers.m_size];
        v17 = (unsigned __int64)m_data < v18;
      }
      while ( m_data != (HavokPhysicsHitCollector_Modifier **)v18 );
      __asm { vmovss  xmm0, [rbp+57h+var_90] }
    }
    __asm { vcomiss xmm0, xmm6 }
    if ( !v17 )
      goto LABEL_62;
    v19 = Physics_GetDecalTypeFromUserData(_RDI->m_hit.m_hitBodyInfo.m_filterData.m_userData);
    v20 = Physics_GetDecalTypeFromUserData(userData);
    __asm { vmovss  xmm2, [rbp+57h+var_90] }
    if ( v19 == v20 )
      goto LABEL_22;
    __asm
    {
      vsubss  xmm0, xmm2, dword ptr [rdi+50h]
      vandps  xmm0, xmm0, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
      vcomiss xmm0, cs:__real@358637bd
    }
    if ( v19 >= v20 )
LABEL_22:
      v23 = 0;
    else
      v23 = 1;
    if ( !_RDI->m_numHits )
      goto LABEL_27;
    if ( !v23 )
    {
      __asm { vcomiss xmm2, dword ptr [rdi+50h] }
      goto LABEL_62;
    }
    if ( v20 )
    {
LABEL_27:
      v24 = v89;
      if ( m_queryType == 1 && !_RDI->m_collector->m_enableInsideHits && (v89 & 5) != 0 )
        goto LABEL_64;
      v25 = m_serialAndIndex;
      __asm
      {
        vmovups ymm0, [rbp+57h+var_B0]
        vmovups ymmword ptr [rdi+30h], ymm0
        vmovss  dword ptr [rdi+50h], xmm2
      }
      _RDI->m_hit.m_queryBodyInfo.m_bodyId.m_serialAndIndex = v25;
      _RDI->m_hit.m_queryBodyInfo.m_shapeKey.m_value = m_value;
      *(_DWORD *)_RDI->m_hit.m_queryBodyInfo.m_levelOfDetail = v78;
      _RDI->m_hit.m_queryBodyInfo.m_filterData.m_materialId.m_value = v79;
      _RDI->m_hit.m_queryBodyInfo.m_filterData.m_collisionFilterInfo = m_collisionFilterInfo;
      _RDI->m_hit.m_queryBodyInfo.m_filterData.m_userData = m_userData;
      _RDI->m_hit.m_hitBodyInfo.m_bodyId.m_serialAndIndex = v82;
      _RDI->m_hit.m_hitBodyInfo.m_shapeKey.m_value = v83;
      *(_DWORD *)_RDI->m_hit.m_hitBodyInfo.m_levelOfDetail = v84;
      _RDI->m_hit.m_hitBodyInfo.m_filterData.m_materialId.m_value = v85;
      _RDI->m_hit.m_hitBodyInfo.m_filterData.m_collisionFilterInfo = v86;
      _RDI->m_hit.m_hitBodyInfo.m_filterData.m_userData = userData;
      v27 = v88;
      _RDI->m_hit.m_rayCastResult.m_value = v24;
      _RDI->m_hit.m_queryType = v27;
      _RDI->m_numHits = 1;
      __asm
      {
        vmovss  xmm0, dword ptr [rdi+30h]
        vmovss  [rbp+57h+var_C0], xmm0
      }
      if ( (v61 & 0x7F800000) == 2139095040 )
        goto LABEL_70;
      __asm
      {
        vmovss  xmm0, dword ptr [rdi+34h]
        vmovss  [rbp+57h+var_C0], xmm0
      }
      if ( (v62 & 0x7F800000) == 2139095040 )
        goto LABEL_70;
      __asm
      {
        vmovss  xmm0, dword ptr [rdi+38h]
        vmovss  [rbp+57h+var_C0], xmm0
      }
      if ( (v63 & 0x7F800000) == 2139095040 )
      {
LABEL_70:
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicshitcollectors.cpp", 514, ASSERT_TYPE_ASSERT, "(!IS_NAN( m_hit.m_position( 0 ) ) && !IS_NAN( m_hit.m_position( 1 ) ) && !IS_NAN( m_hit.m_position( 2 ) ))", (const char *)&queryFormat, "!IS_NAN( m_hit.m_position( 0 ) ) && !IS_NAN( m_hit.m_position( 1 ) ) && !IS_NAN( m_hit.m_position( 2 ) )") )
          __debugbreak();
      }
      __asm
      {
        vmovss  xmm0, dword ptr [rdi+40h]
        vmovss  [rbp+57h+var_C0], xmm0
      }
      if ( (v64 & 0x7F800000) != 2139095040 )
      {
        __asm
        {
          vmovss  xmm0, dword ptr [rdi+44h]
          vmovss  [rbp+57h+var_C0], xmm0
        }
        if ( (v65 & 0x7F800000) != 2139095040 )
        {
          __asm
          {
            vmovss  xmm0, dword ptr [rdi+48h]
            vmovss  [rbp+57h+var_C0], xmm0
          }
          if ( (v66 & 0x7F800000) != 2139095040 )
            goto LABEL_61;
        }
      }
      v34 = 515;
LABEL_59:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicshitcollectors.cpp", v34, ASSERT_TYPE_ASSERT, "(!IS_NAN( m_hit.m_normal( 0 ) ) && !IS_NAN( m_hit.m_normal( 1 ) ) && !IS_NAN( m_hit.m_normal( 2 ) ))", (const char *)&queryFormat, "!IS_NAN( m_hit.m_normal( 0 ) ) && !IS_NAN( m_hit.m_normal( 1 ) ) && !IS_NAN( m_hit.m_normal( 2 ) )") )
        __debugbreak();
LABEL_61:
      __asm
      {
        vmovss  xmm0, dword ptr [rdi+50h]
        vaddss  xmm1, xmm0, cs:__real@358637bd
        vminss  xmm2, xmm1, xmm6
        vmovss  [rbp+57h+var_C0], xmm2
        vbroadcastss xmm0, [rbp+57h+var_C0]
        vmovups xmmword ptr [rdi+10h], xmm0
      }
    }
  }
LABEL_62:
  if ( Physics_IsDetailWorld(_RDI->m_worldId) )
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vmovss  xmm1, xmm0, xmm6
      vshufps xmm1, xmm1, xmm1, 0
      vmovups xmmword ptr [rdi+10h], xmm1
    }
  }
LABEL_64:
  __asm { vmovaps xmm6, [rsp+0F0h+var_30] }
}

/*
==============
HavokPhysicsFlippedGetClosestPointsQueryCollector::addHit
==============
*/
void HavokPhysicsFlippedGetClosestPointsQueryCollector::addHit(HavokPhysicsFlippedGetClosestPointsQueryCollector *this, const hknpCollisionResult *flippedHit)
{
  hknpCollisionQueryCollector *m_childCollector; 
  unsigned __int64 m_userData; 
  bool v18; 
  hknpCollisionQueryCollector *v20; 
  bool v22; 
  __m256i v23; 
  __m256i v24; 
  __m256i v25; 
  unsigned __int64 v26; 
  void *retaddr; 

  _R11 = &retaddr;
  __asm
  {
    vmovups ymm0, ymmword ptr [rdx]
    vmovups ymm1, ymmword ptr [rdx+20h]
    vmovups [rsp+0A8h+var_68], ymm1
    vmovups xmm1, xmmword ptr [rdx+60h]
    vmovups [rsp+0A8h+var_88], ymm0
    vmovups ymm0, ymmword ptr [rdx+40h]
    vmovups [rsp+0A8h+var_48], ymm0
    vmovups xmmword ptr [r11-28h], xmm1
    vpxor   xmm0, xmm0, xmm0
  }
  _RBX = this;
  m_childCollector = this->m_childCollector;
  __asm { vpinsrw xmm0, xmm0, eax, 1 }
  v24.m256i_i64[1] = *(_QWORD *)&flippedHit->m_hitBodyInfo.m_bodyId.m_serialAndIndex;
  v24.m256i_i32[4] = *(_DWORD *)flippedHit->m_hitBodyInfo.m_levelOfDetail;
  v24.m256i_i16[12] = flippedHit->m_hitBodyInfo.m_filterData.m_materialId.m_value;
  v24.m256i_i32[7] = flippedHit->m_hitBodyInfo.m_filterData.m_collisionFilterInfo;
  m_userData = flippedHit->m_hitBodyInfo.m_filterData.m_userData;
  __asm
  {
    vpshufd xmm1, xmm0, 40h ; '@'
    vxorps  xmm0, xmm1, xmmword ptr [rdx+10h]
    vbroadcastss xmm1, dword ptr [rdx+20h]
    vmulps  xmm2, xmm1, xmmword ptr [rdx+10h]
    vmovups xmmword ptr [rsp+0A8h+var_88+10h], xmm0
    vaddps  xmm0, xmm2, xmmword ptr [rdx]
    vmovups xmmword ptr [rsp+0A8h+var_88], xmm0
  }
  v25.m256i_i64[0] = m_userData;
  v25.m256i_i64[1] = *(_QWORD *)&flippedHit->m_queryBodyInfo.m_bodyId.m_serialAndIndex;
  v25.m256i_i32[4] = *(_DWORD *)flippedHit->m_queryBodyInfo.m_levelOfDetail;
  v25.m256i_i16[12] = flippedHit->m_queryBodyInfo.m_filterData.m_materialId.m_value;
  v25.m256i_i32[7] = flippedHit->m_queryBodyInfo.m_filterData.m_collisionFilterInfo;
  v26 = flippedHit->m_queryBodyInfo.m_filterData.m_userData;
  m_childCollector->addHit(m_childCollector, (const hknpCollisionResult *)&v23);
  v18 = _RBX->m_earlyOut.m_bool == 0;
  __asm { vmovups xmm0, xmmword ptr [rbx+10h] }
  v20 = _RBX->m_childCollector;
  __asm
  {
    vminps  xmm1, xmm0, xmmword ptr [rcx+10h]
    vmovups xmmword ptr [rbx+10h], xmm1
  }
  v22 = !v18 || v20->m_earlyOut.m_bool;
  _RBX->m_earlyOut.m_bool = v22;
  _RBX->m_numHits = v20->m_numHits;
}

/*
==============
HavokPhysicsAllHitsCollector::processClosestPointsCvxCvx
==============
*/

void __fastcall HavokPhysicsAllHitsCollector::processClosestPointsCvxCvx(HavokPhysicsAllHitsCollector *this, const hknpCollisionQueryDispatcher *dispatcher, const hknpClosestPointsQuery *initialQuery, const hknpConvexVertexShape *query, const hknpQueryFilterData *queryFilterData, const hknpShapeQueryInfo *queryInfo, const hknpConvexVertexShape *target, const hknpQueryFilterData *targetFilterData, const hknpShapeQueryInfo *targetInfo, const hkTransformf *queryToTarget)
{
  HavokPhysics_ProcessClosestPointsCvxCvx(this, dispatcher, initialQuery, query, queryFilterData, queryInfo, target, targetFilterData, targetInfo, queryToTarget);
}

/*
==============
HavokPhysicsAnyHitCollector::processClosestPointsCvxCvx
==============
*/

void __fastcall HavokPhysicsAnyHitCollector::processClosestPointsCvxCvx(HavokPhysicsAnyHitCollector *this, const hknpCollisionQueryDispatcher *dispatcher, const hknpClosestPointsQuery *initialQuery, const hknpConvexVertexShape *query, const hknpQueryFilterData *queryFilterData, const hknpShapeQueryInfo *queryInfo, const hknpConvexVertexShape *target, const hknpQueryFilterData *targetFilterData, const hknpShapeQueryInfo *targetInfo, const hkTransformf *queryToTarget)
{
  HavokPhysics_ProcessClosestPointsCvxCvx(this, dispatcher, initialQuery, query, queryFilterData, queryInfo, target, targetFilterData, targetInfo, queryToTarget);
}

/*
==============
HavokPhysicsClosestHitCollector::processClosestPointsCvxCvx
==============
*/

void __fastcall HavokPhysicsClosestHitCollector::processClosestPointsCvxCvx(HavokPhysicsClosestHitCollector *this, const hknpCollisionQueryDispatcher *dispatcher, const hknpClosestPointsQuery *initialQuery, const hknpConvexVertexShape *query, const hknpQueryFilterData *queryFilterData, const hknpShapeQueryInfo *queryInfo, const hknpConvexVertexShape *target, const hknpQueryFilterData *targetFilterData, const hknpShapeQueryInfo *targetInfo, const hkTransformf *queryToTarget)
{
  HavokPhysics_ProcessClosestPointsCvxCvx(this, dispatcher, initialQuery, query, queryFilterData, queryInfo, target, targetFilterData, targetInfo, queryToTarget);
}

/*
==============
HavokPhysicsFlippedGetClosestPointsQueryCollector::processClosestPointsCvxCvx
==============
*/
void HavokPhysicsFlippedGetClosestPointsQueryCollector::processClosestPointsCvxCvx(HavokPhysicsFlippedGetClosestPointsQueryCollector *this, const hknpCollisionQueryDispatcher *m_dispatcher, const hknpClosestPointsQuery *initialQuery, const hknpConvexVertexShape *query, const hknpQueryFilterData *queryFilterData, const hknpShapeQueryInfo *queryInfo, const hknpConvexVertexShape *target, const hknpQueryFilterData *targetFilterData, const hknpShapeQueryInfo *targetInfo, const hkTransformf *queryToTarget)
{
  hknpClosestPointsQuery initialQuerya; 

  *(_DWORD *)initialQuerya.m_levelOfDetail = 2;
  initialQuerya.m_filterData.m_materialId.m_value = -1;
  initialQuerya.m_broadPhaseFilterMask = -5;
  initialQuerya.m_filterData.m_collisionFilterInfo = 0;
  initialQuerya.m_filterData.m_userData = 0i64;
  initialQuerya.m_filter = NULL;
  initialQuerya.m_shapeTagCodec = NULL;
  initialQuerya.m_shape = NULL;
  initialQuerya.m_body = NULL;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vmovss  [rsp+98h+initialQuery.m_maxDistance], xmm0
  }
  hknpCollisionQueryDispatcher::_getClosestPointsCvxCvxPreScaledImpl<hknpCollisionQueryCollector,hknpClosestPointsQuery,hknpCollisionResult>((hknpCollisionQueryDispatcher *)m_dispatcher, &initialQuerya, query, queryFilterData, queryInfo, target, targetFilterData, targetInfo, queryToTarget, this);
}

/*
==============
HavokPhysicsFlippedGetClosestPointsQueryCollector::reset
==============
*/
void HavokPhysicsFlippedGetClosestPointsQueryCollector::reset(HavokPhysicsFlippedGetClosestPointsQueryCollector *this)
{
  bool v2; 
  hknpCollisionQueryCollector *m_childCollector; 

  _RBX = this;
  this->m_childCollector->reset(this->m_childCollector);
  v2 = _RBX->m_earlyOut.m_bool == 0;
  __asm { vmovups xmm0, xmmword ptr [rbx+10h] }
  m_childCollector = _RBX->m_childCollector;
  __asm
  {
    vminps  xmm1, xmm0, xmmword ptr [rcx+10h]
    vmovups xmmword ptr [rbx+10h], xmm1
  }
  if ( !v2 || m_childCollector->m_earlyOut.m_bool )
  {
    _RBX->m_earlyOut.m_bool = 1;
    _RBX->m_numHits = m_childCollector->m_numHits;
  }
  else
  {
    _RBX->m_earlyOut.m_bool = 0;
    _RBX->m_numHits = m_childCollector->m_numHits;
  }
}


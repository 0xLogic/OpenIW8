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
  this->__vftable = (HavokPhysicsAllHitsCollector_vtbl *)hknpCollisionQueryCollector::`vftable';
  this->m_hints.m_storage = 0;
  this->m_numHits = 0;
  this->m_earlyOutThreshold.m_real = g_vectorfConstants[37];
  this->m_earlyOut.m_bool = 0;
  this->__vftable = (HavokPhysicsAllHitsCollector_vtbl *)hknpAllHitsCollector::`vftable';
  this->m_hits.m_data = (hknpCollisionResult *)this->m_hits.m_storage;
  this->m_hits.m_size = 0;
  this->m_hits.m_capacityAndFlags = -2147483638;
  this->m_numHits = 0;
  this->m_earlyOutThreshold.m_real = g_vectorfConstants[37];
  this->m_earlyOut.m_bool = 0;
  this->m_hits.m_size = 0;
  this->m_hints.m_storage |= 0x40u;
  this->__vftable = (HavokPhysicsAllHitsCollector_vtbl *)&HavokPhysicsAllHitsCollector::`vftable';
  if ( !collector && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicshitcollectors.cpp", 567, ASSERT_TYPE_ASSERT, "(collector)", (const char *)&queryFormat, "collector", -2i64) )
    __debugbreak();
  this->m_collector = collector;
  this->m_worldId = worldId;
  this->m_hints.m_storage = 2;
}

/*
==============
HavokPhysicsAnyHitCollector::HavokPhysicsAnyHitCollector
==============
*/
void HavokPhysicsAnyHitCollector::HavokPhysicsAnyHitCollector(HavokPhysicsAnyHitCollector *this, HavokPhysicsHitCollector *collector, Physics_WorldId worldId)
{
  this->__vftable = (HavokPhysicsAnyHitCollector_vtbl *)hknpCollisionQueryCollector::`vftable';
  this->m_hints.m_storage = 0;
  this->m_numHits = 0;
  this->m_earlyOutThreshold.m_real = g_vectorfConstants[37];
  this->m_earlyOut.m_bool = 0;
  this->__vftable = (HavokPhysicsAnyHitCollector_vtbl *)hknpClosestHitCollector::`vftable';
  *(_QWORD *)&this->m_hit.m_queryType = 0i64;
  *(__m256i *)this->m_hit.m_position.m_quad.m128_f32 = (__m256i)0i64;
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
  this->m_earlyOutThreshold.m_real = g_vectorfConstants[37];
  this->m_earlyOut.m_bool = 0;
  *(_QWORD *)&this->m_hit.m_queryType = 0i64;
  *(__m256i *)this->m_hit.m_position.m_quad.m128_f32 = (__m256i)0i64;
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
  this->m_collector = collector;
  this->m_worldId = worldId;
  this->m_hints.m_storage = 2;
}

/*
==============
HavokPhysicsClosestHitCollector::HavokPhysicsClosestHitCollector
==============
*/
void HavokPhysicsClosestHitCollector::HavokPhysicsClosestHitCollector(HavokPhysicsClosestHitCollector *this, HavokPhysicsHitCollector *collector, Physics_WorldId worldId)
{
  this->__vftable = (HavokPhysicsClosestHitCollector_vtbl *)hknpCollisionQueryCollector::`vftable';
  this->m_hints.m_storage = 0;
  this->m_numHits = 0;
  this->m_earlyOutThreshold.m_real = g_vectorfConstants[37];
  this->m_earlyOut.m_bool = 0;
  this->__vftable = (HavokPhysicsClosestHitCollector_vtbl *)hknpClosestHitCollector::`vftable';
  *(_QWORD *)&this->m_hit.m_queryType = 0i64;
  *(__m256i *)this->m_hit.m_position.m_quad.m128_f32 = (__m256i)0i64;
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
  this->m_earlyOutThreshold.m_real = g_vectorfConstants[37];
  this->m_earlyOut.m_bool = 0;
  *(_QWORD *)&this->m_hit.m_queryType = 0i64;
  *(__m256i *)this->m_hit.m_position.m_quad.m128_f32 = (__m256i)0i64;
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
  this->m_collector = collector;
  this->m_worldId = worldId;
  this->m_hints.m_storage = 2;
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
  _XMM0 = g_vectorfConstants[37];
  this->m_earlyOutThreshold.m_real = g_vectorfConstants[37];
  this->m_earlyOut.m_bool = 0;
  v3 = this->m_earlyOut.m_bool == 0;
  this->__vftable = (HavokPhysicsFlippedGetClosestPointsQueryCollector_vtbl *)&HavokPhysicsFlippedGetClosestPointsQueryCollector::`vftable';
  this->m_childCollector = childCollector;
  this->m_hints.m_storage = childCollector->m_hints.m_storage;
  __asm { vminps  xmm1, xmm0, xmmword ptr [rdx+10h] }
  this->m_earlyOutThreshold = (hkSimdFloat32)_XMM1.m_real;
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
  const hknpConvexShape *m_shape; 
  __int64 m_storage; 
  __int64 m_offset; 
  float m_convexRadius; 
  hknpClosestPointsQuery initialQuerya; 
  hknpConvexVertexShape querya; 

  m_filter = initialQuery->m_filter;
  if ( m_filter && m_filter->m_type.m_storage == 6 && (m_userData = initialQuery->m_filterData.m_userData) != 0 && *(_QWORD *)(m_userData + 24) && !Physics_GetBrushBasisFromUserData(targetFilterData->m_userData) )
  {
    m_shape = *(const hknpConvexShape **)(m_userData + 24);
    if ( (m_shape->m_flags.m_storage & 1) == 0 )
      m_shape = NULL;
  }
  else
  {
    m_shape = NULL;
    if ( (query->m_shape->m_flags.m_storage & 1) != 0 )
      m_shape = query->m_shape;
  }
  m_storage = m_shape->m_type.m_storage;
  initialQuerya.m_filterData.m_collisionFilterInfo = 0;
  initialQuerya.m_filterData.m_userData = 0i64;
  querya.m_type = hknpConvexDispatch::s_shapeTypeToCvxDispatch[m_storage].m_disptach.m_storage;
  m_offset = m_shape->m_vertices.m_offset;
  initialQuerya.m_filter = NULL;
  querya.m_vertices = (const hkcdVertex *)((char *)&m_shape->m_vertices + m_offset);
  querya.m_numVertices = m_shape->m_vertices.m_size;
  m_convexRadius = m_shape->m_convexRadius;
  initialQuerya.m_filterData.m_materialId.m_value = -1;
  querya.m_convexRadius = m_convexRadius;
  querya.m_shape = m_shape;
  initialQuerya.m_shapeTagCodec = NULL;
  initialQuerya.m_shape = NULL;
  initialQuerya.m_body = NULL;
  initialQuerya.m_maxDistance = 0.0;
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
  this->m_modifierCastStart = (hkVector4f)start->m_quad;
  this->m_modifierCastEnd = (hkVector4f)end->m_quad;
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
  this->m_modifierCastStart = (hkVector4f)start->m_quad;
  this->m_modifierCastEnd = (hkVector4f)end->m_quad;
  this->m_modifierRaycastQuery = query;
}

/*
==============
HavokPhysicsHitCollector::SetShapecastDataForModifiers
==============
*/
void HavokPhysicsHitCollector::SetShapecastDataForModifiers(HavokPhysicsHitCollector *this, const hkVector4f *start, const hkVector4f *end, const hkQuaternionf *rotation, hknpShapeCastQuery *query)
{
  this->m_modifierCastStart = (hkVector4f)start->m_quad;
  this->m_modifierCastEnd = (hkVector4f)end->m_quad;
  this->m_modifierShapecastRotation = (hkQuaternionf)rotation->m_vec.m_quad;
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
  hknpCollisionQueryCollector *m_collector; 
  hknpCollisionQueryCollector *v8; 

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
    m_collector = this->m_collector;
    if ( !m_collector->m_numHits || *(float *)&m_collector[1].m_earlyOut.m_bool > hit->m_fraction )
      return 0;
  }
  else
  {
    v8 = this->m_collector;
    if ( !v8->m_numHits || *(float *)&v8[1].m_earlyOut.m_bool > hit->m_fraction )
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
  hknpCollisionQueryCollector *m_collector; 
  hknpCollisionQueryCollector *v8; 

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
    m_collector = this->m_collector;
    if ( !m_collector->m_numHits || *(float *)&m_collector[1].m_earlyOut.m_bool > hit->m_fraction )
      return 1;
  }
  else
  {
    v8 = this->m_collector;
    if ( !v8->m_numHits || *(float *)&v8[1].m_earlyOut.m_bool > hit->m_fraction )
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
  hknpCollisionQueryType::Enum m_queryType; 
  __int64 m_size; 
  __m256i v7; 
  unsigned __int64 v8; 
  int m_fraction_low; 
  unsigned int v10; 
  HavokPhysicsHitCollector_Modifier **m_data; 
  const hknpCollisionResult *v12; 
  __int64 v13; 
  int v14; 
  __m256i v15; 
  int v16; 
  unsigned int m_serialAndIndex; 
  unsigned int m_value; 
  int v19; 
  unsigned __int16 v20; 
  unsigned int m_collisionFilterInfo; 
  unsigned __int64 m_userData; 
  unsigned int v23; 
  unsigned int v24; 
  int v25; 
  unsigned __int16 v26; 
  unsigned int v27; 
  unsigned __int64 v28; 
  hknpCollisionQueryType::Enum v29; 
  unsigned int v30; 

  if ( !this->m_collector && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicshitcollectors.cpp", 577, ASSERT_TYPE_ASSERT, "(m_collector)", (const char *)&queryFormat, "m_collector") )
    __debugbreak();
  v14 = hit->m_position.m_quad.m128_i32[0];
  if ( (hit->m_position.m_quad.m128_i32[0] & 0x7F800000) == 2139095040 || (v14 = hit->m_position.m_quad.m128_i32[1], (v14 & 0x7F800000) == 2139095040) || (v14 = hit->m_position.m_quad.m128_i32[2], (v14 & 0x7F800000) == 2139095040) )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicshitcollectors.cpp", 578, ASSERT_TYPE_ASSERT, "(!IS_NAN( hit.m_position( 0 ) ) && !IS_NAN( hit.m_position( 1 ) ) && !IS_NAN( hit.m_position( 2 ) ))", (const char *)&queryFormat, "!IS_NAN( hit.m_position( 0 ) ) && !IS_NAN( hit.m_position( 1 ) ) && !IS_NAN( hit.m_position( 2 ) )", v14) )
      __debugbreak();
  }
  if ( ((hit->m_normal.m_quad.m128_i32[0] & 0x7F800000) == 2139095040 || (hit->m_normal.m_quad.m128_i32[1] & 0x7F800000) == 2139095040 || (hit->m_normal.m_quad.m128_i32[2] & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicshitcollectors.cpp", 579, ASSERT_TYPE_ASSERT, "(!IS_NAN( hit.m_normal( 0 ) ) && !IS_NAN( hit.m_normal( 1 ) ) && !IS_NAN( hit.m_normal( 2 ) ))", (const char *)&queryFormat, "!IS_NAN( hit.m_normal( 0 ) ) && !IS_NAN( hit.m_normal( 1 ) ) && !IS_NAN( hit.m_normal( 2 ) )") )
    __debugbreak();
  m_collector = this->m_collector;
  m_queryType = hit->m_queryType;
  m_size = m_collector->m_modifiers.m_size;
  if ( (int)m_size <= 0 )
  {
    if ( m_queryType != RAY_CAST || m_collector->m_enableInsideHits || (hit->m_rayCastResult.m_value & 4) == 0 )
    {
      LODWORD(v13) = hit->m_position.m_quad.m128_i32[0];
      if ( (hit->m_position.m_quad.m128_i32[0] & 0x7F800000) == 2139095040 || (LODWORD(v13) = hit->m_position.m_quad.m128_i32[1], (v13 & 0x7F800000) == 2139095040) || (LODWORD(v13) = hit->m_position.m_quad.m128_i32[2], (v13 & 0x7F800000) == 2139095040) )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicshitcollectors.cpp", 608, ASSERT_TYPE_ASSERT, "(!IS_NAN( hit.m_position( 0 ) ) && !IS_NAN( hit.m_position( 1 ) ) && !IS_NAN( hit.m_position( 2 ) ))", (const char *)&queryFormat, "!IS_NAN( hit.m_position( 0 ) ) && !IS_NAN( hit.m_position( 1 ) ) && !IS_NAN( hit.m_position( 2 ) )", v13) )
          __debugbreak();
      }
      if ( ((hit->m_normal.m_quad.m128_i32[0] & 0x7F800000) == 2139095040 || (hit->m_normal.m_quad.m128_i32[1] & 0x7F800000) == 2139095040 || (hit->m_normal.m_quad.m128_i32[2] & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicshitcollectors.cpp", 609, ASSERT_TYPE_ASSERT, "(!IS_NAN( hit.m_normal( 0 ) ) && !IS_NAN( hit.m_normal( 1 ) ) && !IS_NAN( hit.m_normal( 2 ) ))", (const char *)&queryFormat, "!IS_NAN( hit.m_normal( 0 ) ) && !IS_NAN( hit.m_normal( 1 ) ) && !IS_NAN( hit.m_normal( 2 ) )") )
        __debugbreak();
      v12 = hit;
      goto LABEL_47;
    }
  }
  else
  {
    v7 = *(__m256i *)hit->m_position.m_quad.m128_f32;
    m_serialAndIndex = hit->m_queryBodyInfo.m_bodyId.m_serialAndIndex;
    m_value = hit->m_queryBodyInfo.m_shapeKey.m_value;
    v19 = *(_DWORD *)hit->m_queryBodyInfo.m_levelOfDetail;
    v20 = hit->m_queryBodyInfo.m_filterData.m_materialId.m_value;
    m_collisionFilterInfo = hit->m_queryBodyInfo.m_filterData.m_collisionFilterInfo;
    m_userData = hit->m_queryBodyInfo.m_filterData.m_userData;
    v23 = hit->m_hitBodyInfo.m_bodyId.m_serialAndIndex;
    v24 = hit->m_hitBodyInfo.m_shapeKey.m_value;
    v25 = *(_DWORD *)hit->m_hitBodyInfo.m_levelOfDetail;
    v26 = hit->m_hitBodyInfo.m_filterData.m_materialId.m_value;
    v27 = hit->m_hitBodyInfo.m_filterData.m_collisionFilterInfo;
    v8 = hit->m_hitBodyInfo.m_filterData.m_userData;
    v15 = v7;
    m_fraction_low = SLODWORD(hit->m_fraction);
    v28 = v8;
    v10 = hit->m_rayCastResult.m_value;
    v30 = v10;
    v16 = m_fraction_low;
    v29 = m_queryType;
    m_data = m_collector->m_modifiers.m_data;
    if ( m_data != &m_data[m_size] )
    {
      do
      {
        (*m_data)->ModifyHit(*m_data, m_collector, (hknpCollisionResult *)&v15);
        ++m_data;
      }
      while ( m_data != &m_collector->m_modifiers.m_data[m_collector->m_modifiers.m_size] );
      LOBYTE(v10) = v30;
      m_fraction_low = v16;
    }
    if ( *(float *)&m_fraction_low < 1.0 && (m_queryType != RAY_CAST || this->m_collector->m_enableInsideHits || (v10 & 5) == 0) )
    {
      *(float *)&v13 = *(float *)v15.m256i_i32;
      if ( (v15.m256i_i32[0] & 0x7F800000) == 2139095040 || (*(float *)&v13 = *(float *)&v15.m256i_i32[1], (v15.m256i_i32[1] & 0x7F800000) == 2139095040) || (*(float *)&v13 = *(float *)&v15.m256i_i32[2], (v15.m256i_i32[2] & 0x7F800000) == 2139095040) )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicshitcollectors.cpp", 595, ASSERT_TYPE_ASSERT, "(!IS_NAN( modifiedHit.m_position( 0 ) ) && !IS_NAN( modifiedHit.m_position( 1 ) ) && !IS_NAN( modifiedHit.m_position( 2 ) ))", (const char *)&queryFormat, "!IS_NAN( modifiedHit.m_position( 0 ) ) && !IS_NAN( modifiedHit.m_position( 1 ) ) && !IS_NAN( modifiedHit.m_position( 2 ) )", v13) )
          __debugbreak();
      }
      *(float *)&v13 = *(float *)&v15.m256i_i32[4];
      if ( (v15.m256i_i32[4] & 0x7F800000) == 2139095040 || (*(float *)&v13 = *(float *)&v15.m256i_i32[5], (v15.m256i_i32[5] & 0x7F800000) == 2139095040) || (*(float *)&v13 = *(float *)&v15.m256i_i32[6], (v15.m256i_i32[6] & 0x7F800000) == 2139095040) )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicshitcollectors.cpp", 596, ASSERT_TYPE_ASSERT, "(!IS_NAN( modifiedHit.m_normal( 0 ) ) && !IS_NAN( modifiedHit.m_normal( 1 ) ) && !IS_NAN( modifiedHit.m_normal( 2 ) ))", (const char *)&queryFormat, "!IS_NAN( modifiedHit.m_normal( 0 ) ) && !IS_NAN( modifiedHit.m_normal( 1 ) ) && !IS_NAN( modifiedHit.m_normal( 2 ) )", v13) )
          __debugbreak();
      }
      v12 = (const hknpCollisionResult *)&v15;
LABEL_47:
      hknpAllHitsCollector::addHit(this, v12);
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
  hknpCollisionQueryType::Enum m_queryType; 
  __int64 m_size; 
  hkVector4f v7; 
  hkVector4f v8; 
  float m_fraction; 
  unsigned __int16 m_value; 
  unsigned int m_serialAndIndex; 
  unsigned int v12; 
  int v13; 
  unsigned int v14; 
  unsigned int v15; 
  unsigned __int64 v16; 
  unsigned int v17; 
  HavokPhysicsHitCollector_Modifier **m_data; 
  unsigned __int16 v19; 
  int v20; 
  unsigned int v21; 
  hknpCollisionQueryType::Enum v22; 
  unsigned int v23; 
  unsigned __int64 v24; 
  __m128 m_quad; 
  __m128 v26; 
  float v27; 
  unsigned int v28; 
  unsigned int v29; 
  int v30; 
  unsigned __int16 v31; 
  unsigned int v32; 
  unsigned __int64 v33; 
  unsigned int v34; 
  unsigned int v35; 
  int v36; 
  unsigned __int16 v37; 
  unsigned int m_collisionFilterInfo; 
  unsigned __int64 m_userData; 
  hknpCollisionQueryType::Enum v40; 
  unsigned int v41; 

  if ( !this->m_collector && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicshitcollectors.cpp", 411, ASSERT_TYPE_ASSERT, "(m_collector)", (const char *)&queryFormat, "m_collector") )
    __debugbreak();
  if ( ((hit->m_position.m_quad.m128_i32[0] & 0x7F800000) == 2139095040 || (hit->m_position.m_quad.m128_i32[1] & 0x7F800000) == 2139095040 || (hit->m_position.m_quad.m128_i32[2] & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicshitcollectors.cpp", 412, ASSERT_TYPE_ASSERT, "(!IS_NAN( hit.m_position( 0 ) ) && !IS_NAN( hit.m_position( 1 ) ) && !IS_NAN( hit.m_position( 2 ) ))", (const char *)&queryFormat, "!IS_NAN( hit.m_position( 0 ) ) && !IS_NAN( hit.m_position( 1 ) ) && !IS_NAN( hit.m_position( 2 ) )") )
    __debugbreak();
  if ( ((hit->m_normal.m_quad.m128_i32[0] & 0x7F800000) == 2139095040 || (hit->m_normal.m_quad.m128_i32[1] & 0x7F800000) == 2139095040 || (hit->m_normal.m_quad.m128_i32[2] & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicshitcollectors.cpp", 413, ASSERT_TYPE_ASSERT, "(!IS_NAN( hit.m_normal( 0 ) ) && !IS_NAN( hit.m_normal( 1 ) ) && !IS_NAN( hit.m_normal( 2 ) ))", (const char *)&queryFormat, "!IS_NAN( hit.m_normal( 0 ) ) && !IS_NAN( hit.m_normal( 1 ) ) && !IS_NAN( hit.m_normal( 2 ) )") )
    __debugbreak();
  m_collector = this->m_collector;
  m_queryType = hit->m_queryType;
  m_size = m_collector->m_modifiers.m_size;
  if ( (int)m_size <= 0 )
  {
    if ( (this->m_hit.m_fraction > hit->m_fraction || !this->m_numHits) && (m_queryType != RAY_CAST || m_collector->m_enableInsideHits || (hit->m_rayCastResult.m_value & 4) == 0) )
    {
      this->m_hit.m_position = hit->m_position;
      this->m_hit.m_normal = hit->m_normal;
      this->m_hit.m_fraction = hit->m_fraction;
      this->m_hit.m_queryBodyInfo.m_bodyId.m_serialAndIndex = hit->m_queryBodyInfo.m_bodyId.m_serialAndIndex;
      this->m_hit.m_queryBodyInfo.m_shapeKey.m_value = hit->m_queryBodyInfo.m_shapeKey.m_value;
      *(_DWORD *)this->m_hit.m_queryBodyInfo.m_levelOfDetail = *(_DWORD *)hit->m_queryBodyInfo.m_levelOfDetail;
      this->m_hit.m_queryBodyInfo.m_filterData.m_materialId.m_value = hit->m_queryBodyInfo.m_filterData.m_materialId.m_value;
      this->m_hit.m_queryBodyInfo.m_filterData.m_collisionFilterInfo = hit->m_queryBodyInfo.m_filterData.m_collisionFilterInfo;
      this->m_hit.m_queryBodyInfo.m_filterData.m_userData = hit->m_queryBodyInfo.m_filterData.m_userData;
      this->m_hit.m_hitBodyInfo.m_bodyId.m_serialAndIndex = hit->m_hitBodyInfo.m_bodyId.m_serialAndIndex;
      this->m_hit.m_hitBodyInfo.m_shapeKey.m_value = hit->m_hitBodyInfo.m_shapeKey.m_value;
      *(_DWORD *)this->m_hit.m_hitBodyInfo.m_levelOfDetail = *(_DWORD *)hit->m_hitBodyInfo.m_levelOfDetail;
      this->m_hit.m_hitBodyInfo.m_filterData.m_materialId.m_value = hit->m_hitBodyInfo.m_filterData.m_materialId.m_value;
      this->m_hit.m_hitBodyInfo.m_filterData.m_collisionFilterInfo = hit->m_hitBodyInfo.m_filterData.m_collisionFilterInfo;
      this->m_hit.m_hitBodyInfo.m_filterData.m_userData = hit->m_hitBodyInfo.m_filterData.m_userData;
      this->m_hit.m_queryType = hit->m_queryType;
      this->m_hit.m_rayCastResult.m_value = hit->m_rayCastResult.m_value;
      this->m_numHits = 1;
      if ( ((this->m_hit.m_position.m_quad.m128_i32[0] & 0x7F800000) == 2139095040 || (this->m_hit.m_position.m_quad.m128_i32[1] & 0x7F800000) == 2139095040 || (this->m_hit.m_position.m_quad.m128_i32[2] & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicshitcollectors.cpp", 453, ASSERT_TYPE_ASSERT, "(!IS_NAN( m_hit.m_position( 0 ) ) && !IS_NAN( m_hit.m_position( 1 ) ) && !IS_NAN( m_hit.m_position( 2 ) ))", (const char *)&queryFormat, "!IS_NAN( m_hit.m_position( 0 ) ) && !IS_NAN( m_hit.m_position( 1 ) ) && !IS_NAN( m_hit.m_position( 2 ) )") )
        __debugbreak();
      if ( ((this->m_hit.m_normal.m_quad.m128_i32[0] & 0x7F800000) == 2139095040 || (this->m_hit.m_normal.m_quad.m128_i32[1] & 0x7F800000) == 2139095040 || (this->m_hit.m_normal.m_quad.m128_i32[2] & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicshitcollectors.cpp", 454, ASSERT_TYPE_ASSERT, "(!IS_NAN( m_hit.m_normal( 0 ) ) && !IS_NAN( m_hit.m_normal( 1 ) ) && !IS_NAN( m_hit.m_normal( 2 ) ))", (const char *)&queryFormat, "!IS_NAN( m_hit.m_normal( 0 ) ) && !IS_NAN( m_hit.m_normal( 1 ) ) && !IS_NAN( m_hit.m_normal( 2 ) )") )
        __debugbreak();
      this->m_earlyOutThreshold = 0i64;
      this->m_earlyOut.m_bool = 1;
    }
  }
  else
  {
    v7.m_quad = (__m128)hit->m_position;
    v8.m_quad = (__m128)hit->m_normal;
    m_fraction = hit->m_fraction;
    m_value = hit->m_queryBodyInfo.m_filterData.m_materialId.m_value;
    m_serialAndIndex = hit->m_queryBodyInfo.m_bodyId.m_serialAndIndex;
    v12 = hit->m_queryBodyInfo.m_shapeKey.m_value;
    v13 = *(_DWORD *)hit->m_queryBodyInfo.m_levelOfDetail;
    v14 = hit->m_hitBodyInfo.m_bodyId.m_serialAndIndex;
    v35 = hit->m_hitBodyInfo.m_shapeKey.m_value;
    v36 = *(_DWORD *)hit->m_hitBodyInfo.m_levelOfDetail;
    v37 = hit->m_hitBodyInfo.m_filterData.m_materialId.m_value;
    m_collisionFilterInfo = hit->m_hitBodyInfo.m_filterData.m_collisionFilterInfo;
    v23 = m_collisionFilterInfo;
    v15 = hit->m_queryBodyInfo.m_filterData.m_collisionFilterInfo;
    m_userData = hit->m_hitBodyInfo.m_filterData.m_userData;
    v16 = hit->m_queryBodyInfo.m_filterData.m_userData;
    v24 = m_userData;
    v17 = hit->m_rayCastResult.m_value;
    v41 = v17;
    v27 = m_fraction;
    m_quad = v7.m_quad;
    v26 = v8.m_quad;
    v28 = m_serialAndIndex;
    v29 = v12;
    v30 = v13;
    v31 = m_value;
    v32 = v15;
    v33 = v16;
    v34 = v14;
    v40 = m_queryType;
    m_data = m_collector->m_modifiers.m_data;
    if ( m_data == &m_data[m_size] )
    {
      v21 = v35;
      v20 = v36;
      v19 = v37;
    }
    else
    {
      do
      {
        (*m_data)->ModifyHit(*m_data, m_collector, (hknpCollisionResult *)&m_quad);
        ++m_data;
      }
      while ( m_data != &m_collector->m_modifiers.m_data[m_collector->m_modifiers.m_size] );
      v17 = v41;
      v19 = v37;
      v20 = v36;
      v21 = v35;
      v14 = v34;
      v16 = v33;
      v15 = v32;
      m_value = v31;
      v13 = v30;
      v12 = v29;
      m_fraction = v27;
      v8.m_quad = v26;
      v7.m_quad = m_quad;
      v24 = m_userData;
      v23 = m_collisionFilterInfo;
      m_serialAndIndex = v28;
    }
    if ( m_fraction < 1.0 && (m_fraction < this->m_hit.m_fraction || !this->m_numHits) && (m_queryType != RAY_CAST || this->m_collector->m_enableInsideHits || (v17 & 5) == 0) )
    {
      this->m_hit.m_fraction = m_fraction;
      this->m_hit.m_position = (hkVector4f)v7.m_quad;
      this->m_hit.m_normal = (hkVector4f)v8.m_quad;
      this->m_hit.m_queryBodyInfo.m_bodyId.m_serialAndIndex = m_serialAndIndex;
      this->m_hit.m_queryBodyInfo.m_shapeKey.m_value = v12;
      *(_DWORD *)this->m_hit.m_queryBodyInfo.m_levelOfDetail = v13;
      this->m_hit.m_queryBodyInfo.m_filterData.m_materialId.m_value = m_value;
      this->m_hit.m_queryBodyInfo.m_filterData.m_collisionFilterInfo = v15;
      this->m_hit.m_queryBodyInfo.m_filterData.m_userData = v16;
      this->m_hit.m_hitBodyInfo.m_bodyId.m_serialAndIndex = v14;
      this->m_hit.m_hitBodyInfo.m_shapeKey.m_value = v21;
      *(_DWORD *)this->m_hit.m_hitBodyInfo.m_levelOfDetail = v20;
      this->m_hit.m_hitBodyInfo.m_filterData.m_materialId.m_value = v19;
      this->m_hit.m_hitBodyInfo.m_filterData.m_collisionFilterInfo = v23;
      this->m_hit.m_hitBodyInfo.m_filterData.m_userData = v24;
      v22 = v40;
      this->m_hit.m_rayCastResult.m_value = v17;
      this->m_hit.m_queryType = v22;
      this->m_numHits = 1;
      if ( ((this->m_hit.m_position.m_quad.m128_i32[0] & 0x7F800000) == 2139095040 || (this->m_hit.m_position.m_quad.m128_i32[1] & 0x7F800000) == 2139095040 || (this->m_hit.m_position.m_quad.m128_i32[2] & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicshitcollectors.cpp", 434, ASSERT_TYPE_ASSERT, "(!IS_NAN( m_hit.m_position( 0 ) ) && !IS_NAN( m_hit.m_position( 1 ) ) && !IS_NAN( m_hit.m_position( 2 ) ))", (const char *)&queryFormat, "!IS_NAN( m_hit.m_position( 0 ) ) && !IS_NAN( m_hit.m_position( 1 ) ) && !IS_NAN( m_hit.m_position( 2 ) )") )
        __debugbreak();
      if ( ((this->m_hit.m_normal.m_quad.m128_i32[0] & 0x7F800000) == 2139095040 || (this->m_hit.m_normal.m_quad.m128_i32[1] & 0x7F800000) == 2139095040 || (this->m_hit.m_normal.m_quad.m128_i32[2] & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicshitcollectors.cpp", 435, ASSERT_TYPE_ASSERT, "(!IS_NAN( m_hit.m_normal( 0 ) ) && !IS_NAN( m_hit.m_normal( 1 ) ) && !IS_NAN( m_hit.m_normal( 2 ) ))", (const char *)&queryFormat, "!IS_NAN( m_hit.m_normal( 0 ) ) && !IS_NAN( m_hit.m_normal( 1 ) ) && !IS_NAN( m_hit.m_normal( 2 ) )") )
        __debugbreak();
      this->m_earlyOutThreshold = 0i64;
      this->m_earlyOut.m_bool = 1;
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
  hknpCollisionQueryType::Enum m_queryType; 
  __int64 m_size; 
  __m256i v7; 
  unsigned __int64 v8; 
  float m_fraction; 
  HavokPhysicsHitCollector_Modifier **m_data; 
  char v11; 
  char v12; 
  float v13; 
  bool v14; 
  unsigned int v15; 
  unsigned int v16; 
  hknpCollisionQueryType::Enum v17; 
  int v18; 
  char DecalTypeFromUserData; 
  char v20; 
  bool v21; 
  __int128 m_fraction_low; 
  __m128 v26; 
  float v27; 
  __m256i v28; 
  float v29; 
  unsigned int m_serialAndIndex; 
  unsigned int m_value; 
  int v32; 
  unsigned __int16 v33; 
  unsigned int m_collisionFilterInfo; 
  unsigned __int64 m_userData; 
  unsigned int v36; 
  unsigned int v37; 
  int v38; 
  unsigned __int16 v39; 
  unsigned int v40; 
  unsigned __int64 userData; 
  hknpCollisionQueryType::Enum v42; 
  unsigned int v43; 

  if ( !this->m_collector && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicshitcollectors.cpp", 485, ASSERT_TYPE_ASSERT, "(m_collector)", (const char *)&queryFormat, "m_collector") )
    __debugbreak();
  if ( ((hit->m_position.m_quad.m128_i32[0] & 0x7F800000) == 2139095040 || (hit->m_position.m_quad.m128_i32[1] & 0x7F800000) == 2139095040 || (hit->m_position.m_quad.m128_i32[2] & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicshitcollectors.cpp", 486, ASSERT_TYPE_ASSERT, "(!IS_NAN( hit.m_position( 0 ) ) && !IS_NAN( hit.m_position( 1 ) ) && !IS_NAN( hit.m_position( 2 ) ))", (const char *)&queryFormat, "!IS_NAN( hit.m_position( 0 ) ) && !IS_NAN( hit.m_position( 1 ) ) && !IS_NAN( hit.m_position( 2 ) )") )
    __debugbreak();
  if ( ((hit->m_normal.m_quad.m128_i32[0] & 0x7F800000) == 2139095040 || (hit->m_normal.m_quad.m128_i32[1] & 0x7F800000) == 2139095040 || (hit->m_normal.m_quad.m128_i32[2] & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicshitcollectors.cpp", 487, ASSERT_TYPE_ASSERT, "(!IS_NAN( hit.m_normal( 0 ) ) && !IS_NAN( hit.m_normal( 1 ) ) && !IS_NAN( hit.m_normal( 2 ) ))", (const char *)&queryFormat, "!IS_NAN( hit.m_normal( 0 ) ) && !IS_NAN( hit.m_normal( 1 ) ) && !IS_NAN( hit.m_normal( 2 ) )") )
    __debugbreak();
  m_collector = this->m_collector;
  m_queryType = hit->m_queryType;
  m_size = m_collector->m_modifiers.m_size;
  if ( (int)m_size <= 0 )
  {
    DecalTypeFromUserData = Physics_GetDecalTypeFromUserData(this->m_hit.m_hitBodyInfo.m_filterData.m_userData);
    v20 = Physics_GetDecalTypeFromUserData(hit->m_hitBodyInfo.m_filterData.m_userData);
    v21 = DecalTypeFromUserData != v20 && COERCE_FLOAT(COERCE_UNSIGNED_INT(hit->m_fraction - this->m_hit.m_fraction) & _xmm) < 0.000001;
    if ( this->m_numHits )
    {
      if ( v21 )
      {
        if ( !v20 )
          goto LABEL_64;
      }
      else if ( this->m_hit.m_fraction <= hit->m_fraction )
      {
LABEL_64:
        if ( Physics_IsDetailWorld(this->m_worldId) )
        {
          v26 = 0i64;
          v26.m128_f32[0] = 1.0;
          this->m_earlyOutThreshold.m_real = _mm_shuffle_ps(v26, v26, 0);
        }
        return;
      }
    }
    if ( m_queryType != RAY_CAST || this->m_collector->m_enableInsideHits || (hit->m_rayCastResult.m_value & 4) == 0 )
    {
      this->m_hit.m_position = hit->m_position;
      this->m_hit.m_normal = hit->m_normal;
      this->m_hit.m_fraction = hit->m_fraction;
      this->m_hit.m_queryBodyInfo.m_bodyId.m_serialAndIndex = hit->m_queryBodyInfo.m_bodyId.m_serialAndIndex;
      this->m_hit.m_queryBodyInfo.m_shapeKey.m_value = hit->m_queryBodyInfo.m_shapeKey.m_value;
      *(_DWORD *)this->m_hit.m_queryBodyInfo.m_levelOfDetail = *(_DWORD *)hit->m_queryBodyInfo.m_levelOfDetail;
      this->m_hit.m_queryBodyInfo.m_filterData.m_materialId.m_value = hit->m_queryBodyInfo.m_filterData.m_materialId.m_value;
      this->m_hit.m_queryBodyInfo.m_filterData.m_collisionFilterInfo = hit->m_queryBodyInfo.m_filterData.m_collisionFilterInfo;
      this->m_hit.m_queryBodyInfo.m_filterData.m_userData = hit->m_queryBodyInfo.m_filterData.m_userData;
      this->m_hit.m_hitBodyInfo.m_bodyId.m_serialAndIndex = hit->m_hitBodyInfo.m_bodyId.m_serialAndIndex;
      this->m_hit.m_hitBodyInfo.m_shapeKey.m_value = hit->m_hitBodyInfo.m_shapeKey.m_value;
      *(_DWORD *)this->m_hit.m_hitBodyInfo.m_levelOfDetail = *(_DWORD *)hit->m_hitBodyInfo.m_levelOfDetail;
      this->m_hit.m_hitBodyInfo.m_filterData.m_materialId.m_value = hit->m_hitBodyInfo.m_filterData.m_materialId.m_value;
      this->m_hit.m_hitBodyInfo.m_filterData.m_collisionFilterInfo = hit->m_hitBodyInfo.m_filterData.m_collisionFilterInfo;
      this->m_hit.m_hitBodyInfo.m_filterData.m_userData = hit->m_hitBodyInfo.m_filterData.m_userData;
      this->m_hit.m_queryType = hit->m_queryType;
      this->m_hit.m_rayCastResult.m_value = hit->m_rayCastResult.m_value;
      this->m_numHits = 1;
      if ( ((this->m_hit.m_position.m_quad.m128_i32[0] & 0x7F800000) == 2139095040 || (this->m_hit.m_position.m_quad.m128_i32[1] & 0x7F800000) == 2139095040 || (this->m_hit.m_position.m_quad.m128_i32[2] & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicshitcollectors.cpp", 539, ASSERT_TYPE_ASSERT, "(!IS_NAN( m_hit.m_position( 0 ) ) && !IS_NAN( m_hit.m_position( 1 ) ) && !IS_NAN( m_hit.m_position( 2 ) ))", (const char *)&queryFormat, "!IS_NAN( m_hit.m_position( 0 ) ) && !IS_NAN( m_hit.m_position( 1 ) ) && !IS_NAN( m_hit.m_position( 2 ) )") )
        __debugbreak();
      if ( (this->m_hit.m_normal.m_quad.m128_i32[0] & 0x7F800000) != 2139095040 && (this->m_hit.m_normal.m_quad.m128_i32[1] & 0x7F800000) != 2139095040 && (this->m_hit.m_normal.m_quad.m128_i32[2] & 0x7F800000) != 2139095040 )
        goto LABEL_63;
      v18 = 540;
      goto LABEL_61;
    }
  }
  else
  {
    v7 = *(__m256i *)hit->m_position.m_quad.m128_f32;
    m_serialAndIndex = hit->m_queryBodyInfo.m_bodyId.m_serialAndIndex;
    m_value = hit->m_queryBodyInfo.m_shapeKey.m_value;
    v32 = *(_DWORD *)hit->m_queryBodyInfo.m_levelOfDetail;
    v33 = hit->m_queryBodyInfo.m_filterData.m_materialId.m_value;
    m_collisionFilterInfo = hit->m_queryBodyInfo.m_filterData.m_collisionFilterInfo;
    m_userData = hit->m_queryBodyInfo.m_filterData.m_userData;
    v36 = hit->m_hitBodyInfo.m_bodyId.m_serialAndIndex;
    v37 = hit->m_hitBodyInfo.m_shapeKey.m_value;
    v38 = *(_DWORD *)hit->m_hitBodyInfo.m_levelOfDetail;
    v39 = hit->m_hitBodyInfo.m_filterData.m_materialId.m_value;
    v40 = hit->m_hitBodyInfo.m_filterData.m_collisionFilterInfo;
    v8 = hit->m_hitBodyInfo.m_filterData.m_userData;
    v28 = v7;
    m_fraction = hit->m_fraction;
    userData = v8;
    v43 = hit->m_rayCastResult.m_value;
    v29 = m_fraction;
    v42 = m_queryType;
    m_data = m_collector->m_modifiers.m_data;
    if ( m_data != &m_data[m_size] )
    {
      do
      {
        (*m_data)->ModifyHit(*m_data, m_collector, (hknpCollisionResult *)&v28);
        ++m_data;
      }
      while ( m_data != &m_collector->m_modifiers.m_data[m_collector->m_modifiers.m_size] );
      m_fraction = v29;
    }
    if ( m_fraction >= 1.0 )
      goto LABEL_64;
    v11 = Physics_GetDecalTypeFromUserData(this->m_hit.m_hitBodyInfo.m_filterData.m_userData);
    v12 = Physics_GetDecalTypeFromUserData(userData);
    v13 = v29;
    v14 = v11 != v12 && COERCE_FLOAT(COERCE_UNSIGNED_INT(v29 - this->m_hit.m_fraction) & _xmm) < 0.000001;
    if ( this->m_numHits )
    {
      if ( v14 )
      {
        if ( !v12 )
          goto LABEL_64;
      }
      else if ( v29 >= this->m_hit.m_fraction )
      {
        goto LABEL_64;
      }
    }
    v15 = v43;
    if ( m_queryType != RAY_CAST || this->m_collector->m_enableInsideHits || (v43 & 5) == 0 )
    {
      v16 = m_serialAndIndex;
      *(__m256i *)this->m_hit.m_position.m_quad.m128_f32 = v28;
      this->m_hit.m_fraction = v13;
      this->m_hit.m_queryBodyInfo.m_bodyId.m_serialAndIndex = v16;
      this->m_hit.m_queryBodyInfo.m_shapeKey.m_value = m_value;
      *(_DWORD *)this->m_hit.m_queryBodyInfo.m_levelOfDetail = v32;
      this->m_hit.m_queryBodyInfo.m_filterData.m_materialId.m_value = v33;
      this->m_hit.m_queryBodyInfo.m_filterData.m_collisionFilterInfo = m_collisionFilterInfo;
      this->m_hit.m_queryBodyInfo.m_filterData.m_userData = m_userData;
      this->m_hit.m_hitBodyInfo.m_bodyId.m_serialAndIndex = v36;
      this->m_hit.m_hitBodyInfo.m_shapeKey.m_value = v37;
      *(_DWORD *)this->m_hit.m_hitBodyInfo.m_levelOfDetail = v38;
      this->m_hit.m_hitBodyInfo.m_filterData.m_materialId.m_value = v39;
      this->m_hit.m_hitBodyInfo.m_filterData.m_collisionFilterInfo = v40;
      this->m_hit.m_hitBodyInfo.m_filterData.m_userData = userData;
      v17 = v42;
      this->m_hit.m_rayCastResult.m_value = v15;
      this->m_hit.m_queryType = v17;
      this->m_numHits = 1;
      if ( ((this->m_hit.m_position.m_quad.m128_i32[0] & 0x7F800000) == 2139095040 || (this->m_hit.m_position.m_quad.m128_i32[1] & 0x7F800000) == 2139095040 || (this->m_hit.m_position.m_quad.m128_i32[2] & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicshitcollectors.cpp", 514, ASSERT_TYPE_ASSERT, "(!IS_NAN( m_hit.m_position( 0 ) ) && !IS_NAN( m_hit.m_position( 1 ) ) && !IS_NAN( m_hit.m_position( 2 ) ))", (const char *)&queryFormat, "!IS_NAN( m_hit.m_position( 0 ) ) && !IS_NAN( m_hit.m_position( 1 ) ) && !IS_NAN( m_hit.m_position( 2 ) )") )
        __debugbreak();
      if ( (this->m_hit.m_normal.m_quad.m128_i32[0] & 0x7F800000) != 2139095040 && (this->m_hit.m_normal.m_quad.m128_i32[1] & 0x7F800000) != 2139095040 && (this->m_hit.m_normal.m_quad.m128_i32[2] & 0x7F800000) != 2139095040 )
        goto LABEL_63;
      v18 = 515;
LABEL_61:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\havok\\havokphysicshitcollectors.cpp", v18, ASSERT_TYPE_ASSERT, "(!IS_NAN( m_hit.m_normal( 0 ) ) && !IS_NAN( m_hit.m_normal( 1 ) ) && !IS_NAN( m_hit.m_normal( 2 ) ))", (const char *)&queryFormat, "!IS_NAN( m_hit.m_normal( 0 ) ) && !IS_NAN( m_hit.m_normal( 1 ) ) && !IS_NAN( m_hit.m_normal( 2 ) )") )
        __debugbreak();
LABEL_63:
      m_fraction_low = LODWORD(this->m_hit.m_fraction);
      *(float *)&m_fraction_low = this->m_hit.m_fraction + 0.000001;
      _XMM1 = m_fraction_low;
      __asm { vminss  xmm2, xmm1, xmm6 }
      v27 = *(float *)&_XMM2;
      __asm { vbroadcastss xmm0, [rbp+57h+var_C0] }
      this->m_earlyOutThreshold = (hkSimdFloat32)_XMM0.m_real;
      goto LABEL_64;
    }
  }
}

/*
==============
HavokPhysicsFlippedGetClosestPointsQueryCollector::addHit
==============
*/
void HavokPhysicsFlippedGetClosestPointsQueryCollector::addHit(HavokPhysicsFlippedGetClosestPointsQueryCollector *this, const hknpCollisionResult *flippedHit)
{
  __m256i v3; 
  __int128 v4; 
  hknpCollisionQueryCollector *m_childCollector; 
  unsigned __int64 m_userData; 
  __int128 v11; 
  __m128 v13; 
  bool v14; 
  hknpCollisionQueryCollector *v16; 
  bool v18; 
  __m256i v19; 
  __m256i v20; 
  __m256i v21; 
  __int128 v22; 

  v3 = *(__m256i *)flippedHit->m_position.m_quad.m128_f32;
  v20 = *(__m256i *)&flippedHit->m_fraction;
  v4 = *(_OWORD *)&flippedHit->m_hitBodyInfo.m_filterData.m_userData;
  v19 = v3;
  v21 = *(__m256i *)&flippedHit->m_queryBodyInfo.m_filterData.m_userData;
  v22 = v4;
  __asm { vpxor   xmm0, xmm0, xmm0 }
  m_childCollector = this->m_childCollector;
  __asm { vpinsrw xmm0, xmm0, eax, 1 }
  v20.m256i_i64[1] = *(_QWORD *)&flippedHit->m_hitBodyInfo.m_bodyId.m_serialAndIndex;
  v20.m256i_i32[4] = *(_DWORD *)flippedHit->m_hitBodyInfo.m_levelOfDetail;
  v20.m256i_i16[12] = flippedHit->m_hitBodyInfo.m_filterData.m_materialId.m_value;
  v20.m256i_i32[7] = flippedHit->m_hitBodyInfo.m_filterData.m_collisionFilterInfo;
  m_userData = flippedHit->m_hitBodyInfo.m_filterData.m_userData;
  __asm { vpshufd xmm1, xmm0, 40h ; '@' }
  v11 = _XMM1 ^ *(_OWORD *)&flippedHit->m_normal;
  __asm { vbroadcastss xmm1, dword ptr [rdx+20h] }
  v13 = _mm128_mul_ps(_XMM1, flippedHit->m_normal.m_quad);
  *(_OWORD *)&v19.m256i_u64[2] = v11;
  *(__m128 *)v19.m256i_i8 = _mm128_add_ps(v13, flippedHit->m_position.m_quad);
  v21.m256i_i64[0] = m_userData;
  v21.m256i_i64[1] = *(_QWORD *)&flippedHit->m_queryBodyInfo.m_bodyId.m_serialAndIndex;
  v21.m256i_i32[4] = *(_DWORD *)flippedHit->m_queryBodyInfo.m_levelOfDetail;
  v21.m256i_i16[12] = flippedHit->m_queryBodyInfo.m_filterData.m_materialId.m_value;
  v21.m256i_i32[7] = flippedHit->m_queryBodyInfo.m_filterData.m_collisionFilterInfo;
  *(_QWORD *)&v22 = flippedHit->m_queryBodyInfo.m_filterData.m_userData;
  m_childCollector->addHit(m_childCollector, (const hknpCollisionResult *)&v19);
  v14 = this->m_earlyOut.m_bool == 0;
  _XMM0.m_real = (__m128)this->m_earlyOutThreshold;
  v16 = this->m_childCollector;
  __asm { vminps  xmm1, xmm0, xmmword ptr [rcx+10h] }
  this->m_earlyOutThreshold = (hkSimdFloat32)_XMM1.m_real;
  v18 = !v14 || v16->m_earlyOut.m_bool;
  this->m_earlyOut.m_bool = v18;
  this->m_numHits = v16->m_numHits;
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
  initialQuerya.m_maxDistance = 0.0;
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

  this->m_childCollector->reset(this->m_childCollector);
  v2 = this->m_earlyOut.m_bool == 0;
  _XMM0.m_real = (__m128)this->m_earlyOutThreshold;
  m_childCollector = this->m_childCollector;
  __asm { vminps  xmm1, xmm0, xmmword ptr [rcx+10h] }
  this->m_earlyOutThreshold = (hkSimdFloat32)_XMM1.m_real;
  if ( !v2 || m_childCollector->m_earlyOut.m_bool )
  {
    this->m_earlyOut.m_bool = 1;
    this->m_numHits = m_childCollector->m_numHits;
  }
  else
  {
    this->m_earlyOut.m_bool = 0;
    this->m_numHits = m_childCollector->m_numHits;
  }
}


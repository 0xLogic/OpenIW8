/*
==============
BgTrace::InitShapeCast
==============
*/

void __fastcall BgTrace::InitShapeCast(BgTrace *this)
{
  ?InitShapeCast@BgTrace@@AEAAXXZ(this);
}

/*
==============
BgTrace::InitCoreTraceData
==============
*/

void __fastcall BgTrace::InitCoreTraceData(BgTrace *this, BgTrace::BgTraceLocalData *localData, const Bounds *bounds, const vec3_t *start, const vec3_t *end, trace_t *outResult)
{
  ?InitCoreTraceData@BgTrace@@AEAAXPEAUBgTraceLocalData@1@PEBUBounds@@AEBTvec3_t@@2PEAUtrace_t@@@Z(this, localData, bounds, start, end, outResult);
}

/*
==============
BgPlayerTraceInfo::AntilagToMoverInfo
==============
*/

void __fastcall BgPlayerTraceInfo::AntilagToMoverInfo(BgPlayerTraceInfo *this, const BgAntiLagEntityInfo *antiLagInfo, BgTraceMoverInfo *info)
{
  ?AntilagToMoverInfo@BgPlayerTraceInfo@@IEAAXPEBUBgAntiLagEntityInfo@@PEAUBgTraceMoverInfo@@@Z(this, antiLagInfo, info);
}

/*
==============
BgTraceBase::BgTraceBase
==============
*/

void __fastcall BgTraceBase::BgTraceBase(BgTraceBase *this)
{
  ??0BgTraceBase@@QEAA@XZ(this);
}

/*
==============
BgPlayerTraceInfo::ClearCage
==============
*/

void __fastcall BgPlayerTraceInfo::ClearCage(BG_PMove_Cage *cage)
{
  ?ClearCage@BgPlayerTraceInfo@@KAXPEAUBG_PMove_Cage@@@Z(cage);
}

/*
==============
BgTrace::BgTrace
==============
*/

void __fastcall BgTrace::BgTrace(BgTrace *this, const BgPlayerTraceInfo *playerInfo)
{
  ??0BgTrace@@QEAA@PEBVBgPlayerTraceInfo@@@Z(this, playerInfo);
}

/*
==============
BgTrace::GetBodiesForMover
==============
*/

void __fastcall BgTrace::GetBodiesForMover(BgTrace *this, int moverIndex, int maxBodies, int *numBodies, unsigned int *bodyIdList)
{
  ?GetBodiesForMover@BgTrace@@AEAAXHHPEAHPEAI@Z(this, moverIndex, maxBodies, numBodies, bodyIdList);
}

/*
==============
BgPlayerTraceInfo::SetMoverListFromAntilagBuffer
==============
*/

void __fastcall BgPlayerTraceInfo::SetMoverListFromAntilagBuffer(BgPlayerTraceInfo *this, pmove_t *pm, const BgAntiLagEntityInfo *antilagList, const int antilagMoverCount)
{
  ?SetMoverListFromAntilagBuffer@BgPlayerTraceInfo@@QEAAXPEAVpmove_t@@PEBUBgAntiLagEntityInfo@@H@Z(this, pm, antilagList, antilagMoverCount);
}

/*
==============
BgTrace::BgTraceToQueryContext
==============
*/

void __fastcall BgTrace::BgTraceToQueryContext(BgTrace *this, PhysicsQuery_ContextSettings *outSettings)
{
  ?BgTraceToQueryContext@BgTrace@@AEBAXPEAVPhysicsQuery_ContextSettings@@@Z(this, outSettings);
}

/*
==============
BgTrace::Reset
==============
*/

void __fastcall BgTrace::Reset(BgTrace *this, const BgPlayerTraceInfo *playerInfo)
{
  ?Reset@BgTrace@@QEAAXPEBVBgPlayerTraceInfo@@@Z(this, playerInfo);
}

/*
==============
BgPlayerTraceInfo::GetRideMoverEntityIndex
==============
*/

int __fastcall BgPlayerTraceInfo::GetRideMoverEntityIndex(BgPlayerTraceInfo *this)
{
  return ?GetRideMoverEntityIndex@BgPlayerTraceInfo@@QEBAHXZ(this);
}

/*
==============
BgPlayerTraceInfo::GetRideMoverEntityInfo
==============
*/

const BgTraceMoverInfo *__fastcall BgPlayerTraceInfo::GetRideMoverEntityInfo(BgPlayerTraceInfo *this)
{
  return ?GetRideMoverEntityInfo@BgPlayerTraceInfo@@QEBAPEBUBgTraceMoverInfo@@XZ(this);
}

/*
==============
BgTrace::LegacyPlayerTrace
==============
*/

void __fastcall BgTrace::LegacyPlayerTrace(BgTrace *this, const pmove_t *pm, trace_t *const outResults, const vec3_t *start, const vec3_t *end, const Bounds *bounds, int passEntityNum, int contentMask, bool allowCheapPointQueries)
{
  ?LegacyPlayerTrace@BgTrace@@QEBAXPEBVpmove_t@@QEAUtrace_t@@AEBTvec3_t@@2PEBUBounds@@HH_N@Z(this, pm, outResults, start, end, bounds, passEntityNum, contentMask, allowCheapPointQueries);
}

/*
==============
BgTrace::ProcessAllSolid
==============
*/

void __fastcall BgTrace::ProcessAllSolid(BgTrace *this, HavokPhysics_CollisionQueryResult *traceResult, HavokPhysics_CollisionQueryResult *queryResult, trace_t *results, const vec3_t *end)
{
  ?ProcessAllSolid@BgTrace@@AEAAXPEAVHavokPhysics_CollisionQueryResult@@0PEAUtrace_t@@AEBTvec3_t@@@Z(this, traceResult, queryResult, results, end);
}

/*
==============
BgTraceBase::ResetBaseInfo
==============
*/

void __fastcall BgTraceBase::ResetBaseInfo(BgTraceBase *this, Physics_WorldId worldId, int traceMask, int ignoreEnt)
{
  ?ResetBaseInfo@BgTraceBase@@QEAAXW4Physics_WorldId@@HH@Z(this, worldId, traceMask, ignoreEnt);
}

/*
==============
BgTrace::CastShape
==============
*/

void __fastcall BgTrace::CastShape(BgTrace *this, bool subTrace)
{
  ?CastShape@BgTrace@@AEAAX_N@Z(this, subTrace);
}

/*
==============
BgTrace::DebugPrintCage
==============
*/

void __fastcall BgTrace::DebugPrintCage(bool isServer, int clientNum, const char *message)
{
  ?DebugPrintCage@BgTrace@@SAX_NHPEBD@Z(isServer, clientNum, message);
}

/*
==============
BgTrace::BgTrace
==============
*/

void __fastcall BgTrace::BgTrace(BgTrace *this)
{
  ??0BgTrace@@QEAA@XZ(this);
}

/*
==============
BgPlayerTraceInfo::BgPlayerTraceInfo
==============
*/

void __fastcall BgPlayerTraceInfo::BgPlayerTraceInfo(BgPlayerTraceInfo *this)
{
  ??0BgPlayerTraceInfo@@QEAA@XZ(this);
}

/*
==============
BgPlayerTraceInfo::BuildCage
==============
*/

BG_PMove_Cage *__fastcall BgPlayerTraceInfo::BuildCage(BgPlayerTraceInfo *this, const vec3_t *playerOrigin, const vec3_t *start, const vec3_t *end, const Bounds *bounds, int contentMask)
{
  return ?BuildCage@BgPlayerTraceInfo@@QEBAPEAUBG_PMove_Cage@@AEBTvec3_t@@00PEBUBounds@@H@Z(this, playerOrigin, start, end, bounds, contentMask);
}

/*
==============
BgTrace::PerformPlayerToEntityTrace
==============
*/

void __fastcall BgTrace::PerformPlayerToEntityTrace(BgTrace *this, int entIndex, const Bounds *bounds, const vec3_t *start, const vec3_t *end, trace_t *outResult)
{
  ?PerformPlayerToEntityTrace@BgTrace@@QEAAXHPEBUBounds@@AEBTvec3_t@@1PEAUtrace_t@@@Z(this, entIndex, bounds, start, end, outResult);
}

/*
==============
BgTrace::BuildTraceQuat
==============
*/

void __fastcall BgTrace::BuildTraceQuat(BgTrace *this, vec4_t *outQuat)
{
  ?BuildTraceQuat@BgTrace@@AEAAXAEATvec4_t@@@Z(this, outQuat);
}

/*
==============
BgTrace::LegacyTraceHandler
==============
*/

void __fastcall BgTrace::LegacyTraceHandler(BgTrace *this, Physics_WorldId worldId, trace_t *results, const vec3_t *start, const vec3_t *end, const Bounds *bounds, int passEntityNum, int contentMask, const playerState_s *ps)
{
  ?LegacyTraceHandler@BgTrace@@QEBAXW4Physics_WorldId@@PEAUtrace_t@@AEBTvec3_t@@2PEBUBounds@@HHPEBUplayerState_s@@@Z(this, worldId, results, start, end, bounds, passEntityNum, contentMask, ps);
}

/*
==============
BgTrace::LegacyPlayerTraceIgnoreBodies
==============
*/

void __fastcall BgTrace::LegacyPlayerTraceIgnoreBodies(BgTrace *this, const pmove_t *pm, trace_t *const outResults, const vec3_t *start, const vec3_t *end, const Bounds *bounds, int passEntityNum, unsigned int *ignoreBodies, unsigned int numIgnoreBodies, int contentMask, bool allowCheapPointQueries)
{
  ?LegacyPlayerTraceIgnoreBodies@BgTrace@@QEBAXPEBVpmove_t@@QEAUtrace_t@@AEBTvec3_t@@2PEBUBounds@@HPEAIIH_N@Z(this, pm, outResults, start, end, bounds, passEntityNum, ignoreBodies, numIgnoreBodies, contentMask, allowCheapPointQueries);
}

/*
==============
BgPlayerTraceInfo::UpdatePostPmove
==============
*/

void __fastcall BgPlayerTraceInfo::UpdatePostPmove(BgPlayerTraceInfo *this, pmove_t *pm)
{
  ?UpdatePostPmove@BgPlayerTraceInfo@@QEAAXPEAVpmove_t@@@Z(this, pm);
}

/*
==============
BgTrace::FinishShapeCast
==============
*/

void __fastcall BgTrace::FinishShapeCast(BgTrace *this)
{
  ?FinishShapeCast@BgTrace@@AEAAXXZ(this);
}

/*
==============
BgPlayerTraceInfo::ResetPmovePlayerTraceInfo
==============
*/

void __fastcall BgPlayerTraceInfo::ResetPmovePlayerTraceInfo(BgPlayerTraceInfo *this, pmove_t *pm, bool updateMoverInfo)
{
  ?ResetPmovePlayerTraceInfo@BgPlayerTraceInfo@@QEAAXPEAVpmove_t@@_N@Z(this, pm, updateMoverInfo);
}

/*
==============
BgPlayerTraceInfo::SetPlayerInfo
==============
*/

void __fastcall BgPlayerTraceInfo::SetPlayerInfo(BgPlayerTraceInfo *this, LocalClientNum_t localClientNum, const playerState_s *ps, const BgHandler *bgHandler)
{
  ?SetPlayerInfo@BgPlayerTraceInfo@@QEAAXW4LocalClientNum_t@@PEBUplayerState_s@@PEBVBgHandler@@@Z(this, localClientNum, ps, bgHandler);
}

/*
==============
BgTrace::LegacyTrace
==============
*/

void __fastcall BgTrace::LegacyTrace(BgTrace *this, const pmove_t *pm, trace_t *results, const vec3_t *start, const vec3_t *end, const Bounds *bounds, int passEntityNum, int contentMask)
{
  ?LegacyTrace@BgTrace@@QEBAXPEBVpmove_t@@PEAUtrace_t@@AEBTvec3_t@@2PEBUBounds@@HH@Z(this, pm, results, start, end, bounds, passEntityNum, contentMask);
}

/*
==============
BgPlayerTraceInfo::SetRideMover
==============
*/

void __fastcall BgPlayerTraceInfo::SetRideMover(BgPlayerTraceInfo *this, const BgAntiLag *antiLag, const int antiLagTime, const int rideMoverEnt, const BgHandler *handler, playerState_s *ps)
{
  ?SetRideMover@BgPlayerTraceInfo@@QEAAXPEBVBgAntiLag@@HHPEBVBgHandler@@PEAUplayerState_s@@@Z(this, antiLag, antiLagTime, rideMoverEnt, handler, ps);
}

/*
==============
BgTrace::PerformPlayerTrace
==============
*/

void __fastcall BgTrace::PerformPlayerTrace(BgTrace *this, const Bounds *bounds, const vec3_t *start, const vec3_t *end, trace_t *outResult)
{
  ?PerformPlayerTrace@BgTrace@@QEAAXPEBUBounds@@AEBTvec3_t@@1PEAUtrace_t@@@Z(this, bounds, start, end, outResult);
}

/*
==============
BgPlayerTraceInfo::UpdatePrePmove
==============
*/

void __fastcall BgPlayerTraceInfo::UpdatePrePmove(BgPlayerTraceInfo *this, pmove_t *pm)
{
  ?UpdatePrePmove@BgPlayerTraceInfo@@QEAAXPEAVpmove_t@@@Z(this, pm);
}

/*
==============
BgPlayerTraceInfo::BgPlayerTraceInfo
==============
*/
void BgPlayerTraceInfo::BgPlayerTraceInfo(BgPlayerTraceInfo *this)
{
  this->m_worldId = PHYSICS_WORLD_ID_INVALID;
  this->m_traceMask = 1;
  this->m_ignoreEnt = 2047;
  this->__vftable = (BgPlayerTraceInfo_vtbl *)&BgPlayerTraceInfo::`vftable';
  this->m_moverList.m_size = 0i64;
  this->m_ps = NULL;
  this->m_bgHandler = NULL;
  this->m_localClientNum = LOCAL_CLIENT_INVALID;
  this->m_rideMoverIndex = -1;
}

/*
==============
BgTrace::BgTrace
==============
*/
void BgTrace::BgTrace(BgTrace *this, const BgPlayerTraceInfo *playerInfo)
{
  BgTraceBase *v2; 

  this->m_worldId = PHYSICS_WORLD_ID_INVALID;
  this->m_traceMask = 1;
  v2 = &playerInfo->BgTraceBase;
  this->m_ignoreEnt = 2047;
  if ( !playerInfo )
    v2 = NULL;
  this->BgTraceBase = *v2;
  this->m_playerInfo = playerInfo;
  this->m_localData = NULL;
}

/*
==============
BgTrace::BgTrace
==============
*/
void BgTrace::BgTrace(BgTrace *this)
{
  this->m_worldId = PHYSICS_WORLD_ID_INVALID;
  this->m_playerInfo = NULL;
  this->m_localData = NULL;
  this->m_traceMask = 1;
  this->m_ignoreEnt = 2047;
}

/*
==============
BgTraceBase::BgTraceBase
==============
*/
void BgTraceBase::BgTraceBase(BgTraceBase *this)
{
  this->m_worldId = PHYSICS_WORLD_ID_INVALID;
  this->m_traceMask = 1;
  this->m_ignoreEnt = 2047;
}

/*
==============
BgPlayerTraceInfo::AntilagToMoverInfo
==============
*/
void BgPlayerTraceInfo::AntilagToMoverInfo(BgPlayerTraceInfo *this, const BgAntiLagEntityInfo *antiLagInfo, BgTraceMoverInfo *info)
{
  info->entIndex = antiLagInfo->entityIndex;
  BgAntiLagEntity_GetOrigin(antiLagInfo, &info->origin);
  info->angles = antiLagInfo->angles;
  info->velocity = antiLagInfo->velocity;
  info->angVelocity = antiLagInfo->angVelocity;
}

/*
==============
BgTrace::BgTraceToQueryContext
==============
*/
void BgTrace::BgTraceToQueryContext(BgTrace *this, PhysicsQuery_ContextSettings *outSettings)
{
  int m_flags; 

  m_flags = this->m_flags;
  if ( (m_flags & 0x40) != 0 )
  {
    outSettings->m_flags |= 1u;
    m_flags = this->m_flags;
  }
  if ( (m_flags & 0x80) != 0 )
  {
    outSettings->m_flags |= 2u;
    m_flags = this->m_flags;
  }
  if ( (m_flags & 0x100) != 0 )
  {
    outSettings->m_flags |= 8u;
    m_flags = this->m_flags;
  }
  if ( (m_flags & 0x200) != 0 )
  {
    outSettings->m_flags |= 0x10u;
    m_flags = this->m_flags;
  }
  if ( (m_flags & 2) != 0 )
    outSettings->m_flags |= 0x20u;
  if ( Com_GameMode_SupportsFeature(WEAPON_RAISING_ALTSWITCH_ADS|0x100) )
    outSettings->m_flags |= 4u;
}

/*
==============
BgPlayerTraceInfo::BuildCage
==============
*/
BG_PMove_Cage *BgPlayerTraceInfo::BuildCage(BgPlayerTraceInfo *this, const vec3_t *playerOrigin, const vec3_t *start, const vec3_t *end, const Bounds *bounds, int contentMask)
{
  const dvar_t *v10; 
  const dvar_t *v11; 
  __int64 v12; 
  __int64 v13; 
  float v14; 
  float v15; 
  float v16; 
  float v17; 
  float v18; 
  float v19; 
  int v24; 
  BgHandler_vtbl *v25; 
  char v26; 
  __int64 v27; 
  char v29; 
  Physics_WorldId m_worldId; 
  unsigned int NumHits; 
  unsigned int v32; 
  __int64 v33; 
  hkMemoryAllocator *v34; 
  int clientNum; 
  bool v36; 
  HavokPhysics_BroadphaseCollisionQueryResult result; 
  Physics_AABBBroadphaseQueryExtendedData extendedData; 
  __int64 v39; 
  Bounds v40; 
  vec3_t max; 
  vec3_t min; 

  v39 = -2i64;
  v10 = DCONST_DVARBOOL_pmove_useCage;
  if ( !DCONST_DVARBOOL_pmove_useCage && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "pmove_useCage") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v10);
  if ( !v10->current.enabled || (contentMask & bg_pmove_contents) != contentMask )
    return 0i64;
  if ( this->m_worldId <= (unsigned int)PHYSICS_WORLD_ID_SERVER_DETAIL )
  {
    v11 = DCONST_DVARBOOL_pmove_useServerCage;
    if ( !DCONST_DVARBOOL_pmove_useServerCage && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "pmove_useServerCage") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v11);
    if ( !v11->current.enabled )
      return 0i64;
  }
  v12 = this->GetCage(this);
  v13 = v12;
  if ( *(_BYTE *)v12 )
    playerOrigin = (const vec3_t *)(v12 + 520);
  v14 = playerOrigin->v[2];
  v15 = playerOrigin->v[1];
  v16 = playerOrigin->v[0];
  v17 = s_bg_pmove_cageDims.v[0];
  min.v[0] = playerOrigin->v[0] - s_bg_pmove_cageDims.v[0];
  v18 = s_bg_pmove_cageDims.v[1];
  min.v[1] = v15 - s_bg_pmove_cageDims.v[1];
  v19 = s_bg_pmove_cageDims.v[2];
  min.v[2] = v14 - s_bg_pmove_cageDims.v[2];
  max.v[0] = v16 + s_bg_pmove_cageDims.v[0];
  max.v[1] = v15 + s_bg_pmove_cageDims.v[1];
  max.v[2] = s_bg_pmove_cageDims.v[2] + v14;
  _XMM0 = LODWORD(bounds->halfSize.v[1]);
  __asm { vmaxss  xmm1, xmm0, dword ptr [rax+0Ch] }
  _XMM0 = LODWORD(bounds->halfSize.v[2]);
  __asm { vmaxss  xmm1, xmm0, xmm1 }
  *(_QWORD *)v40.midPoint.v = *(_QWORD *)start->v;
  v40.midPoint.v[2] = start->v[2];
  v40.halfSize.v[0] = 0.0;
  v40.halfSize.v[1] = 0.0;
  v40.halfSize.v[2] = 0.0;
  Bounds_AddPoint(&v40, end);
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v16 - v40.midPoint.v[0]) & _xmm) > (float)(v17 - (float)((float)(*(float *)&_XMM1 * 2.0) + v40.halfSize.v[0])) || COERCE_FLOAT(COERCE_UNSIGNED_INT(v15 - v40.midPoint.v[1]) & _xmm) > (float)(v18 - (float)((float)(*(float *)&_XMM1 * 2.0) + v40.halfSize.v[1])) || COERCE_FLOAT(COERCE_UNSIGNED_INT(v14 - v40.midPoint.v[2]) & _xmm) > (float)(v19 - (float)((float)(*(float *)&_XMM1 * 2.0) + v40.halfSize.v[2])) )
  {
    clientNum = this->m_ps->clientNum;
    v36 = this->m_bgHandler->IsClient((BgHandler *)this->m_bgHandler);
    BgTrace::DebugPrintCage(!v36, clientNum, "Cage Failed Bounds for Client ");
    return 0i64;
  }
  v24 = this->m_ps->clientNum;
  v25 = this->m_bgHandler->__vftable;
  if ( *(_BYTE *)v13 )
  {
    v26 = ((__int64 (*)(void))v25->IsClient)();
    BgTrace::DebugPrintCage(v26 == 0, v24, "Cage Reused for Client ");
    v27 = 0i64;
    if ( *(_DWORD *)(v13 + 4) <= 0x80u )
      return (BG_PMove_Cage *)v13;
    return (BG_PMove_Cage *)v27;
  }
  else
  {
    v29 = ((__int64 (*)(void))v25->IsClient)();
    BgTrace::DebugPrintCage(v29 == 0, v24, "Rebuilding Cage for Client ");
    Sys_ProfBeginNamedEvent(0xFF9400D3, "PMove Cage Calculation");
    m_worldId = this->m_worldId;
    extendedData.ignoreBodies = NULL;
    extendedData.phaseSelection = All;
    extendedData.contents = bg_pmove_contents;
    result.m_propertyBag.m_bag = NULL;
    *(_DWORD *)&result.m_memSizeAndFlags = 0x1FFFF;
    result.__vftable = (HavokPhysics_BroadphaseCollisionQueryResult_vtbl *)&HavokPhysics_BroadphaseCollisionQueryResult::`vftable';
    result.m_hits.m_data = NULL;
    result.m_hits.m_size = 0;
    result.m_hits.m_capacityAndFlags = 0x80000000;
    result.m_worldId = m_worldId;
    Physics_AABBBroadphaseQuery(m_worldId, &min, &max, &extendedData, &result);
    NumHits = HavokPhysics_BroadphaseCollisionQueryResult::GetNumHits(&result);
    *(_DWORD *)(v13 + 4) = NumHits;
    if ( NumHits <= 0x80 )
    {
      v32 = 0;
      if ( NumHits )
      {
        do
        {
          *(_DWORD *)(v13 + 4i64 * v32 + 8) = HavokPhysics_BroadphaseCollisionQueryResult::GetHitBodyId(&result, v32);
          ++v32;
        }
        while ( v32 < *(_DWORD *)(v13 + 4) );
      }
    }
    *(_BYTE *)v13 = 1;
    *(float *)(v13 + 520) = v16;
    *(float *)(v13 + 524) = v15;
    *(float *)(v13 + 528) = v14;
    Sys_ProfEndNamedEvent();
    v33 = 0i64;
    if ( *(_DWORD *)(v13 + 4) <= 0x80u )
      v33 = v13;
    v34 = hkMemHeapAllocator();
    result.m_hits.m_size = 0;
    if ( result.m_hits.m_capacityAndFlags >= 0 )
      hkMemoryAllocator::bufFree2(v34, result.m_hits.m_data, 4, result.m_hits.m_capacityAndFlags & 0x3FFFFFFF);
    result.m_hits.m_data = NULL;
    result.m_hits.m_capacityAndFlags = 0x80000000;
    hkReferencedObject::~hkReferencedObject(&result);
    return (BG_PMove_Cage *)v33;
  }
}

/*
==============
BgTrace::BuildTraceQuat
==============
*/
void BgTrace::BuildTraceQuat(BgTrace *this, vec4_t *outQuat)
{
  BgPlayerTraceInfo *m_playerInfo; 
  const playerState_s *m_ps; 
  const BgTraceMoverInfo *RideMoverEntityInfo; 
  WorldUpReferenceFrame v7; 

  m_playerInfo = (BgPlayerTraceInfo *)this->m_playerInfo;
  m_ps = m_playerInfo->m_ps;
  if ( !m_ps || (this->m_flags & 2) != 0 )
    goto LABEL_13;
  RideMoverEntityInfo = BgPlayerTraceInfo::GetRideMoverEntityInfo(m_playerInfo);
  if ( WorldUpReferenceFrame::HasValidWorldUpInPs(m_ps) )
  {
    WorldUpReferenceFrame::WorldUpReferenceFrame(&v7, m_ps, this->m_playerInfo->m_bgHandler);
    *outQuat = quat_identity;
    WorldUpReferenceFrame::ApplyReferenceFrameToQuat(&v7, outQuat);
    return;
  }
  if ( !RideMoverEntityInfo || RideMoverEntityInfo->velocity.v[0] == 0.0 && RideMoverEntityInfo->velocity.v[1] == 0.0 && RideMoverEntityInfo->velocity.v[2] == 0.0 && RideMoverEntityInfo->angVelocity.v[0] == 0.0 && RideMoverEntityInfo->angVelocity.v[1] == 0.0 && RideMoverEntityInfo->angVelocity.v[2] == 0.0 )
LABEL_13:
    *outQuat = quat_identity;
  else
    BGMovingPlatforms::GetBestPlatformUp(m_ps, &RideMoverEntityInfo->angles, NULL, outQuat);
}

/*
==============
BgTrace::CastShape
==============
*/
void BgTrace::CastShape(BgTrace *this, bool subTrace)
{
  BgTrace::BgTraceLocalData *m_localData; 
  bool v5; 
  const vec4_t *rotation; 
  const vec3_t *p_start; 
  HavokPhysics_CollisionQueryResult **p_resultQueryAny; 
  HavokPhysics_CollisionQueryResult *result; 
  BG_PMove_Cage *cage; 
  hknpShape *shape; 
  int m_flags; 
  const vec3_t *p_end; 
  const vec3_t *v14; 
  HavokPhysics_CollisionQueryResult **p_resultQuery; 
  const vec4_t *p_quaternionRotation; 
  HavokPhysics_CollisionQueryResult *startResult; 
  BG_PMove_Cage *v18; 
  HavokPhysics_CollisionQueryResult *resultTrace; 
  hknpShape *v20; 
  BgTrace::BgTraceLocalData *v21; 
  trace_t *v22; 
  HavokPhysics_CollisionQueryResult *v23; 
  int m_traceMask; 
  BgTrace::BgTraceLocalData *v25; 
  hknpShape *v26; 
  unsigned int ShapecastHitBodyId; 
  BgTrace::BgTraceLocalData *v28; 
  int v29; 
  const vec3_t *v30; 
  HavokPhysics_CollisionQueryResult **v31; 
  double RaycastHitFraction; 
  BgTrace::BgTraceLocalData *v33; 
  unsigned int RaycastHitBodyId; 
  Physics_ShapecastExtendedData v35; 
  Physics_GetClosestPointsExtendedData extendedData; 

  if ( !this->m_localData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_trace.cpp", 199, ASSERT_TYPE_ASSERT, "(m_localData)", (const char *)&queryFormat, "m_localData") )
    __debugbreak();
  if ( !subTrace || this->m_localData->numSubTraceMovers )
  {
    m_localData = this->m_localData;
    if ( m_localData->shapeTrace )
    {
      if ( !m_localData->sweptTrace )
      {
        v5 = (this->m_flags & 1) == 0;
        rotation = &m_localData->quaternionRotation;
        extendedData.contents = this->m_traceMask;
        p_start = &m_localData->start;
        extendedData.simplify = 0;
        extendedData.phaseSelection = All;
        extendedData.collisionBuffer = 0.0;
        extendedData.ignoreBodies = m_localData->ignoreBodies;
        extendedData.nonBrushShape = m_localData->nonBrushShape;
        p_resultQueryAny = &m_localData->resultQueryAny;
        if ( v5 )
          p_resultQueryAny = &m_localData->resultQuery;
        result = *p_resultQueryAny;
        if ( subTrace )
        {
          Physics_GetClosestPoints(this->m_worldId, m_localData->numSubTraceMovers, m_localData->subTraceMovers, m_localData->shape, p_start, &m_localData->quaternionRotation, 0.0, &extendedData, *p_resultQueryAny);
        }
        else
        {
          cage = m_localData->cage;
          shape = m_localData->shape;
          if ( cage )
            Physics_GetClosestPoints(this->m_worldId, cage->numBodies, cage->bodies, shape, p_start, rotation, 0.0, &extendedData, result);
          else
            Physics_GetClosestPoints(this->m_worldId, shape, p_start, rotation, 0.0, &extendedData, result);
        }
LABEL_33:
        Physics_ConvertClosestPointsToLegacyTrace(result, this->m_localData->result);
        return;
      }
      m_flags = this->m_flags;
      p_end = &m_localData->end;
      v35.contents = this->m_traceMask;
      v14 = &m_localData->start;
      v35.accuracy = FLOAT_0_016000001;
      v35.simplifyStart = 0;
      v35.phaseSelection = All;
      v35.startTolerance = 0.0;
      v35.ignoreBodies = m_localData->ignoreBodies;
      v35.collisionBuffer = FLOAT_0_125;
      v35.nonBrushShape = m_localData->nonBrushShape;
      v35.secondPassShape = m_localData->paddedShape;
      v35.permitOutwardTrace = (m_flags & 0x10) == 0;
      p_resultQuery = &m_localData->resultQueryAny;
      if ( (m_flags & 1) == 0 )
        p_resultQuery = &m_localData->resultQuery;
      p_quaternionRotation = &m_localData->quaternionRotation;
      startResult = *p_resultQuery;
      if ( subTrace )
      {
        Physics_Shapecast(this->m_worldId, m_localData->numSubTraceMovers, m_localData->subTraceMovers, m_localData->shape, v14, &m_localData->end, &m_localData->quaternionRotation, &v35, m_localData->resultTrace, startResult);
      }
      else
      {
        v18 = m_localData->cage;
        resultTrace = m_localData->resultTrace;
        v20 = m_localData->shape;
        if ( v18 )
          Physics_Shapecast(this->m_worldId, v18->numBodies, v18->bodies, v20, v14, p_end, p_quaternionRotation, &v35, resultTrace, startResult);
        else
          Physics_Shapecast(this->m_worldId, v20, v14, p_end, p_quaternionRotation, &v35, resultTrace, startResult);
      }
      Physics_ConvertShapeQueryResultToLegacyTrace(this->m_localData->resultTrace, startResult, this->m_localData->result);
      v21 = this->m_localData;
      v22 = v21->result;
      v23 = v21->resultTrace;
      if ( v22->startsolid )
      {
        m_traceMask = this->m_traceMask;
        extendedData.nonBrushShape = NULL;
        extendedData.contents = m_traceMask;
        extendedData.collisionBuffer = 0.0;
        extendedData.simplify = 0;
        extendedData.ignoreBodies = NULL;
        extendedData.phaseSelection = All;
        extendedData.nonBrushShape = v21->nonBrushShape;
        HavokPhysics_CollisionQueryResult::Reset(startResult, 1);
        v25 = this->m_localData;
        v26 = v25->shape;
        ShapecastHitBodyId = HavokPhysics_CollisionQueryResult::GetShapecastHitBodyId(v23, 0);
        Physics_GetClosestPoints(this->m_worldId, ShapecastHitBodyId, v26, &v21->end, &v25->quaternionRotation, 0.0, &extendedData, startResult);
        if ( HavokPhysics_CollisionQueryResult::HasHit(startResult) )
          v22->allsolid = 1;
      }
    }
    else
    {
      if ( subTrace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_trace.cpp", 265, ASSERT_TYPE_ASSERT, "(!subTrace)", (const char *)&queryFormat, "!subTrace") )
        __debugbreak();
      v28 = this->m_localData;
      v29 = this->m_traceMask;
      v30 = &v28->start;
      if ( !v28->sweptTrace )
      {
        v5 = (this->m_flags & 1) == 0;
        v35.contents = this->m_traceMask;
        LOBYTE(v35.startTolerance) = 0;
        LODWORD(v35.ignoreBodies) = 1;
        v35.collisionBuffer = 0.0;
        *((float *)&v35.ignoreBodies + 1) = 0.0;
        *(_QWORD *)&v35.accuracy = v28->ignoreBodies;
        v31 = &v28->resultQueryAny;
        if ( v5 )
          v31 = &v28->resultQuery;
        result = *v31;
        Physics_QueryPoint(this->m_worldId, v30, 0.0, (Physics_QueryPointExtendedData *)&v35, *v31);
        goto LABEL_33;
      }
      extendedData.ignoreBodies = NULL;
      LODWORD(extendedData.collisionBuffer) = 1;
      extendedData.nonBrushShape = (hknpShape *)0x100000000i64;
      LOWORD(extendedData.phaseSelection) = 256;
      extendedData.contents = v29;
      *(&extendedData.collisionBuffer + 1) = 0.0;
      extendedData.ignoreBodies = v28->ignoreBodies;
      Physics_Raycast(this->m_worldId, v30, &v28->end, (Physics_RaycastExtendedData *)&extendedData, v28->resultTrace);
      if ( HavokPhysics_CollisionQueryResult::HasHit(this->m_localData->resultTrace) )
      {
        RaycastHitFraction = HavokPhysics_CollisionQueryResult::GetRaycastHitFraction(this->m_localData->resultTrace, 0);
        if ( *(float *)&RaycastHitFraction <= 0.0 )
        {
          v35.contents = this->m_traceMask;
          v33 = this->m_localData;
          *((float *)&v35.ignoreBodies + 1) = 0.0;
          LOBYTE(v35.startTolerance) = 0;
          *(_QWORD *)&v35.accuracy = 0i64;
          LODWORD(v35.ignoreBodies) = 1;
          v35.collisionBuffer = 0.0;
          RaycastHitBodyId = HavokPhysics_CollisionQueryResult::GetRaycastHitBodyId(v33->resultTrace, 0);
          if ( (RaycastHitBodyId & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_trace.cpp", 292, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( hitBodyId ))", (const char *)&queryFormat, "Physics_IsRigidBodyIdValid( hitBodyId )") )
            __debugbreak();
          Physics_QueryPoint(this->m_worldId, RaycastHitBodyId, &this->m_localData->start, -0.1251, (Physics_QueryPointExtendedData *)&v35, this->m_localData->resultQuery);
        }
      }
      Physics_ConvertRayQueryResultToLegacyTrace(this->m_localData->resultTrace, this->m_localData->resultQuery, NULL, this->m_localData->result);
    }
  }
}

/*
==============
BgPlayerTraceInfo::ClearCage
==============
*/
void BgPlayerTraceInfo::ClearCage(BG_PMove_Cage *cage)
{
  cage->isValid = 0;
}

/*
==============
BgTrace::DebugPrintCage
==============
*/
void BgTrace::DebugPrintCage(bool isServer, int clientNum, const char *message)
{
  const dvar_t *v6; 

  if ( !message && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_trace.cpp", 738, ASSERT_TYPE_ASSERT, "(message)", (const char *)&queryFormat, "message") )
    __debugbreak();
  v6 = DCONST_DVARBOOL_pmove_debugPrintCage;
  if ( !DCONST_DVARBOOL_pmove_debugPrintCage && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "pmove_debugPrintCage") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  if ( v6->current.enabled && isServer )
    Com_DPrintf(14, "%s %d\n", message, (unsigned int)clientNum);
}

/*
==============
BgTrace::FinishShapeCast
==============
*/
void BgTrace::FinishShapeCast(BgTrace *this)
{
  BgTrace::BgTraceLocalData *m_localData; 

  if ( !this->m_localData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_trace.cpp", 150, ASSERT_TYPE_ASSERT, "(m_localData)", (const char *)&queryFormat, "m_localData") )
    __debugbreak();
  m_localData = this->m_localData;
  if ( m_localData->shapeTrace )
  {
    PhysicsQuery_LegacyTraceReleaseShapes(this->m_worldId, m_localData->baseShapeNeedsRelease, &m_localData->shape, &m_localData->paddedShape);
    m_localData = this->m_localData;
  }
  if ( m_localData->lockWorld )
    Physics_UnlockWorld(this->m_worldId);
  Sys_ProfEndNamedEvent();
}

/*
==============
BgTrace::GetBodiesForMover
==============
*/
void BgTrace::GetBodiesForMover(BgTrace *this, int moverIndex, int maxBodies, int *numBodies, unsigned int *bodyIdList)
{
  unsigned int *v5; 
  PhysicsObject *v10; 
  __int64 m_worldId; 
  unsigned int v12; 
  signed int v13; 
  int NumRigidBodys; 
  int v15; 
  Physics_WorldId v16; 
  hknpBodyId *RigidBodyID; 
  __int64 v18; 

  v5 = bodyIdList;
  if ( !bodyIdList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_trace.cpp", 303, ASSERT_TYPE_ASSERT, "(bodyIdList)", (const char *)&queryFormat, "bodyIdList") )
    __debugbreak();
  v10 = this->m_playerInfo->m_bgHandler->GetPhysicsObject((BgHandler *)this->m_playerInfo->m_bgHandler, moverIndex, this->m_playerInfo->m_localClientNum);
  m_worldId = this->m_worldId;
  v12 = v10->physicsInstances[m_worldId];
  if ( v12 != -1 )
  {
    v13 = 0;
    NumRigidBodys = Physics_GetNumRigidBodys((const Physics_WorldId)m_worldId, v12);
    if ( NumRigidBodys > 0 )
    {
      v15 = *numBodies;
      do
      {
        if ( v15 >= maxBodies && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_trace.cpp", 312, ASSERT_TYPE_ASSERT, "((*numBodies) < maxBodies)", (const char *)&queryFormat, "(*numBodies) < maxBodies") )
          __debugbreak();
        v16 = this->m_worldId;
        if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
          __debugbreak();
        if ( (unsigned int)v16 > PHYSICS_WORLD_ID_CLIENT1_DETAIL )
        {
          LODWORD(v18) = v16;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 106, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v18) )
            __debugbreak();
        }
        if ( !g_physicsClientWorldsCreated && (unsigned int)(v16 - 2) <= 5 )
        {
          LODWORD(v18) = v16;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 108, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v18) )
            __debugbreak();
        }
        if ( !g_physicsServerWorldsCreated && (unsigned int)v16 <= PHYSICS_WORLD_ID_SERVER_DETAIL )
        {
          LODWORD(v18) = v16;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v18) )
            __debugbreak();
        }
        RigidBodyID = HavokPhysics_GetRigidBodyID((hknpBodyId *)&bodyIdList, v16, v12, v13++);
        v5[(*numBodies)++] = RigidBodyID->m_serialAndIndex;
        v15 = *numBodies;
      }
      while ( v13 < NumRigidBodys );
    }
  }
}

/*
==============
BgPlayerTraceInfo::GetRideMoverEntityIndex
==============
*/
__int64 BgPlayerTraceInfo::GetRideMoverEntityIndex(BgPlayerTraceInfo *this)
{
  const BgTraceMoverInfo *RideMoverEntityInfo; 

  RideMoverEntityInfo = BgPlayerTraceInfo::GetRideMoverEntityInfo(this);
  if ( RideMoverEntityInfo )
    return (unsigned int)RideMoverEntityInfo->entIndex;
  else
    return 2047i64;
}

/*
==============
BgPlayerTraceInfo::GetRideMoverEntityInfo
==============
*/
const BgTraceMoverInfo *BgPlayerTraceInfo::GetRideMoverEntityInfo(BgPlayerTraceInfo *this)
{
  unsigned int m_rideMoverIndex; 
  unsigned int m_size; 
  ntl::fixed_vector<BgTraceMoverInfo,5,0> *p_m_moverList; 
  unsigned __int64 v6; 
  unsigned int v7; 
  unsigned int v8; 

  m_rideMoverIndex = this->m_rideMoverIndex;
  if ( m_rideMoverIndex == -1 )
    return 0i64;
  m_size = this->m_moverList.m_size;
  if ( m_rideMoverIndex >= m_size )
  {
    v8 = m_size;
    v7 = m_rideMoverIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_trace.cpp", 43, ASSERT_TYPE_ASSERT, "(unsigned)( m_rideMoverIndex ) < (unsigned)( m_moverList.size() )", "m_rideMoverIndex doesn't index m_moverList.size()\n\t%i not in [0, %i)", v7, v8) )
      __debugbreak();
  }
  p_m_moverList = &this->m_moverList;
  v6 = this->m_rideMoverIndex;
  if ( v6 >= p_m_moverList->m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 236, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
    __debugbreak();
  if ( v6 >= 5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\fixed_memory_block.h", 99, ASSERT_TYPE_ASSERT, "( index < num_elements )", (const char *)&queryFormat, "index < num_elements") )
    __debugbreak();
  return (const BgTraceMoverInfo *)((char *)p_m_moverList + 52 * v6);
}

/*
==============
BgTrace::InitCoreTraceData
==============
*/
void BgTrace::InitCoreTraceData(BgTrace *this, BgTrace::BgTraceLocalData *localData, const Bounds *bounds, const vec3_t *start, const vec3_t *end, trace_t *outResult)
{
  BgTrace::BgTraceLocalData *m_localData; 
  float v11; 
  float v12; 
  float v13; 
  const Bounds *v14; 
  float v15; 
  float v16; 
  bool v17; 

  memset_0(localData, 0, sizeof(BgTrace::BgTraceLocalData));
  this->m_localData = localData;
  memset_0(&outResult->position, 0, 0x54ui64);
  outResult->fraction = 1.0;
  this->m_localData->result = outResult;
  this->m_localData->bounds = bounds;
  m_localData = this->m_localData;
  m_localData->start = *start;
  v11 = end->v[0];
  m_localData->end.v[0] = end->v[0];
  v12 = end->v[1];
  m_localData->end.v[1] = v12;
  v13 = end->v[2];
  m_localData->end.v[2] = v13;
  v14 = m_localData->bounds;
  v15 = v14->halfSize.v[0];
  v16 = v14->halfSize.v[2];
  v17 = v11 != m_localData->start.v[0] || v12 != m_localData->start.v[1] || v13 != m_localData->start.v[2];
  m_localData->sweptTrace = v17;
  this->m_localData->shapeTrace = v16 != 0.0 && v15 != 0.0;
}

/*
==============
BgTrace::InitShapeCast
==============
*/
void BgTrace::InitShapeCast(BgTrace *this)
{
  hkMonitorStream *Value; 
  hkMonitorStream *v3; 
  bool v4; 
  BgTrace::BgTraceLocalData *m_localData; 
  unsigned int v6; 
  int v7; 
  BgTrace::BgTraceLocalData *v8; 
  __int64 v9; 
  vec4_t *p_quaternionRotation; 
  BgPlayerTraceInfo *m_playerInfo; 
  const playerState_s *m_ps; 
  const BgTraceMoverInfo *RideMoverEntityInfo; 
  char *TraceShapeBuffers; 
  int m_flags; 
  PhysicsQuery_ContextSettings contextSettings; 
  __int64 v17; 
  hkMonitorStream *v18; 
  WorldUpReferenceFrame v19; 

  v17 = -2i64;
  if ( !this->m_localData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_trace.cpp", 90, ASSERT_TYPE_ASSERT, "(m_localData)", (const char *)&queryFormat, "m_localData") )
    __debugbreak();
  Value = (hkMonitorStream *)TlsGetValue(hkMonitorStream__m_instance.m_slotID);
  v3 = Value;
  if ( Value )
    hkMonitorStream::timerBegin(Value, "TtLegacyQuery: PhysicsQuery_LegacyCapsuleTrace");
  v18 = v3;
  Sys_ProfBeginNamedEvent(0xFFFF6347, "PhysicsQuery_LegacyCapsuleTrace_Internal");
  if ( this->m_worldId > (unsigned int)PHYSICS_WORLD_ID_CLIENT1_DETAIL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_trace.cpp", 95, ASSERT_TYPE_ASSERT, "(m_worldId >= PHYSICS_WORLD_ID_FIRST && m_worldId <= PHYSICS_WORLD_ID_LAST)", (const char *)&queryFormat, "m_worldId >= PHYSICS_WORLD_ID_FIRST && m_worldId <= PHYSICS_WORLD_ID_LAST") )
    __debugbreak();
  if ( !PhysicsQuery_IsWorldInitialized(this->m_worldId) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_trace.cpp", 96, ASSERT_TYPE_ASSERT, "(PhysicsQuery_IsWorldInitialized( m_worldId ))", (const char *)&queryFormat, "PhysicsQuery_IsWorldInitialized( m_worldId )") )
    __debugbreak();
  if ( !this->m_localData->result && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_trace.cpp", 97, ASSERT_TYPE_ASSERT, "(m_localData->result)", (const char *)&queryFormat, "m_localData->result") )
    __debugbreak();
  if ( !this->m_localData->bounds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_trace.cpp", 98, ASSERT_TYPE_ASSERT, "(m_localData->bounds)", (const char *)&queryFormat, "m_localData->bounds") )
    __debugbreak();
  if ( Physics_GetThreadId() >= 0x1C && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_trace.cpp", 100, ASSERT_TYPE_ASSERT, "(Physics_GetThreadId() < PHYSICS_MAX_SUPPORTED_NUM_THREADS)", (const char *)&queryFormat, "Physics_GetThreadId() < PHYSICS_MAX_SUPPORTED_NUM_THREADS") )
    __debugbreak();
  this->m_localData->legacyEntryId = 28 * this->m_worldId + Physics_GetThreadId();
  v4 = Physics_IsPredictiveWorld(this->m_worldId) && !Sys_IsMainThread();
  this->m_localData->lockWorld = v4;
  m_localData = this->m_localData;
  if ( m_localData->lockWorld )
  {
    Physics_LockWorld(this->m_worldId);
    m_localData = this->m_localData;
  }
  this->m_localData->resultQuery = PhysicsQuery_GetResultContainer(PQ_TYPE_LEGACY, m_localData->legacyEntryId);
  HavokPhysics_CollisionQueryResult::Reset(this->m_localData->resultQuery, 1);
  this->m_localData->resultQueryAny = PhysicsQuery_GetResultContainer(PQ_TYPE_LEGACYANY, this->m_localData->legacyEntryId);
  HavokPhysics_CollisionQueryResult::Reset(this->m_localData->resultQueryAny, 1);
  this->m_localData->resultTrace = PhysicsQuery_GetResultContainer(PQ_TYPE_LEGACYTRACE, this->m_localData->legacyEntryId);
  HavokPhysics_CollisionQueryResult::Reset(this->m_localData->resultTrace, 1);
  this->m_localData->ignoreBodies = PhysicsQuery_GetIgnoreBodies(this->m_localData->legacyEntryId);
  HavokPhysics_IgnoreBodies::Reset(this->m_localData->ignoreBodies);
  v6 = 0;
  v7 = 0;
  v8 = this->m_localData;
  if ( v8->ignoreListCount > 0 )
  {
    v9 = 0i64;
    do
    {
      PhysicsQuery_AddEntityChainToIgnoreList(this->m_localData->ignoreList[v9], this->m_localData->ignoreBodies, 1, 1, 0, 1, 0);
      ++v7;
      ++v9;
      v8 = this->m_localData;
    }
    while ( v7 < v8->ignoreListCount );
  }
  if ( (this->m_flags & 0x20) != 0 )
  {
    HavokPhysics_IgnoreBodies::SetIgnoreRefs(v8->ignoreBodies, -2);
    v8 = this->m_localData;
  }
  if ( v8->shapeTrace )
  {
    p_quaternionRotation = &v8->quaternionRotation;
    m_playerInfo = (BgPlayerTraceInfo *)this->m_playerInfo;
    m_ps = m_playerInfo->m_ps;
    if ( m_ps && (this->m_flags & 2) == 0 )
    {
      RideMoverEntityInfo = BgPlayerTraceInfo::GetRideMoverEntityInfo(m_playerInfo);
      if ( WorldUpReferenceFrame::HasValidWorldUpInPs(m_ps) )
      {
        WorldUpReferenceFrame::WorldUpReferenceFrame(&v19, m_ps, this->m_playerInfo->m_bgHandler);
        *p_quaternionRotation = quat_identity;
        WorldUpReferenceFrame::ApplyReferenceFrameToQuat(&v19, p_quaternionRotation);
LABEL_46:
        TraceShapeBuffers = GetTraceShapeBuffers(this->m_localData->legacyEntryId);
        contextSettings.m_flags = 0;
        m_flags = this->m_flags;
        if ( (m_flags & 0x40) != 0 )
        {
          contextSettings.m_flags = 1;
          v6 = 1;
        }
        if ( (m_flags & 0x80) != 0 )
        {
          v6 |= 2u;
          contextSettings.m_flags = v6;
        }
        if ( (m_flags & 0x100) != 0 )
        {
          v6 |= 8u;
          contextSettings.m_flags = v6;
        }
        if ( (m_flags & 0x200) != 0 )
        {
          v6 |= 0x10u;
          contextSettings.m_flags = v6;
        }
        if ( (m_flags & 2) != 0 )
          contextSettings.m_flags = v6 | 0x20;
        if ( Com_GameMode_SupportsFeature(WEAPON_RAISING_ALTSWITCH_ADS|0x100) )
          contextSettings.m_flags |= 4;
        this->m_localData->baseShapeNeedsRelease = PhysicsQuery_LegacyTraceCreateShape(this->m_worldId, this->m_playerInfo->m_ps, this->m_localData->bounds, 0, TraceShapeBuffers, (this->m_flags & 2) != 0, &this->m_localData->shape, &this->m_localData->nonBrushShape, &this->m_localData->paddedShape, &contextSettings);
        goto LABEL_59;
      }
      if ( RideMoverEntityInfo && (RideMoverEntityInfo->velocity.v[0] != 0.0 || RideMoverEntityInfo->velocity.v[1] != 0.0 || RideMoverEntityInfo->velocity.v[2] != 0.0 || RideMoverEntityInfo->angVelocity.v[0] != 0.0 || RideMoverEntityInfo->angVelocity.v[1] != 0.0 || RideMoverEntityInfo->angVelocity.v[2] != 0.0) )
      {
        BGMovingPlatforms::GetBestPlatformUp(m_ps, &RideMoverEntityInfo->angles, NULL, p_quaternionRotation);
        goto LABEL_46;
      }
    }
    *p_quaternionRotation = quat_identity;
    goto LABEL_46;
  }
LABEL_59:
  if ( v3 )
    hkMonitorStream::timerEnd(v3, "Et");
}

/*
==============
BgTrace::LegacyPlayerTrace
==============
*/
void BgTrace::LegacyPlayerTrace(BgTrace *this, const pmove_t *pm, trace_t *const outResults, const vec3_t *start, const vec3_t *end, const Bounds *bounds, int passEntityNum, int contentMask, bool allowCheapPointQueries)
{
  const dvar_t *v9; 
  int m_flags; 
  unsigned int v15; 
  PhysicsQuery_ContextSettings traceContext; 
  BgTrace v17; 

  v9 = DCONST_DVARBOOL_useBgTraceSystem;
  if ( !DCONST_DVARBOOL_useBgTraceSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "useBgTraceSystem") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v9);
  if ( v9->current.enabled )
  {
    v17 = *this;
    v17.m_ignoreEnt = passEntityNum;
    BgTrace::PerformPlayerTrace(&v17, bounds, start, end, outResults);
  }
  else
  {
    m_flags = this->m_flags;
    traceContext.m_flags = 0;
    v15 = 0;
    if ( (m_flags & 0x40) != 0 )
    {
      v15 = 1;
      traceContext.m_flags = 1;
    }
    if ( (m_flags & 0x80) != 0 )
    {
      v15 |= 2u;
      traceContext.m_flags = v15;
    }
    if ( (m_flags & 0x100) != 0 )
    {
      v15 |= 8u;
      traceContext.m_flags = v15;
    }
    if ( (m_flags & 0x200) != 0 )
    {
      v15 |= 0x10u;
      traceContext.m_flags = v15;
    }
    if ( (m_flags & 2) != 0 )
      traceContext.m_flags = v15 | 0x20;
    if ( Com_GameMode_SupportsFeature(WEAPON_RAISING_ALTSWITCH_ADS|0x100) )
      traceContext.m_flags |= 4;
    PM_playerTrace(pm, outResults, start, end, bounds, passEntityNum, NULL, 0, contentMask, allowCheapPointQueries, &traceContext);
  }
}

/*
==============
BgTrace::LegacyPlayerTraceIgnoreBodies
==============
*/
void BgTrace::LegacyPlayerTraceIgnoreBodies(BgTrace *this, const pmove_t *pm, trace_t *const outResults, const vec3_t *start, const vec3_t *end, const Bounds *bounds, int passEntityNum, unsigned int *ignoreBodies, unsigned int numIgnoreBodies, int contentMask, bool allowCheapPointQueries)
{
  const dvar_t *v11; 
  int m_flags; 
  unsigned int v17; 
  PhysicsQuery_ContextSettings traceContext; 
  BgTrace v19; 

  v11 = DCONST_DVARBOOL_useBgTraceSystem;
  if ( !DCONST_DVARBOOL_useBgTraceSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "useBgTraceSystem") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v11);
  if ( v11->current.enabled )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_trace.cpp", 662, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "This a code path that is no longer supported.") )
      __debugbreak();
    v19 = *this;
    v19.m_ignoreEnt = passEntityNum;
    BgTrace::PerformPlayerTrace(&v19, bounds, start, end, outResults);
  }
  else
  {
    m_flags = this->m_flags;
    v17 = 0;
    traceContext.m_flags = 0;
    if ( (m_flags & 0x40) != 0 )
    {
      v17 = 1;
      traceContext.m_flags = 1;
    }
    if ( (m_flags & 0x80) != 0 )
    {
      v17 |= 2u;
      traceContext.m_flags = v17;
    }
    if ( (m_flags & 0x100) != 0 )
    {
      v17 |= 8u;
      traceContext.m_flags = v17;
    }
    if ( (m_flags & 0x200) != 0 )
    {
      v17 |= 0x10u;
      traceContext.m_flags = v17;
    }
    if ( (m_flags & 2) != 0 )
      traceContext.m_flags = v17 | 0x20;
    if ( Com_GameMode_SupportsFeature(WEAPON_RAISING_ALTSWITCH_ADS|0x100) )
      traceContext.m_flags |= 4;
    PM_playerTrace(pm, outResults, start, end, bounds, passEntityNum, ignoreBodies, numIgnoreBodies, contentMask, allowCheapPointQueries, &traceContext);
  }
}

/*
==============
BgTrace::LegacyTrace
==============
*/
void BgTrace::LegacyTrace(BgTrace *this, const pmove_t *pm, trace_t *results, const vec3_t *start, const vec3_t *end, const Bounds *bounds, int passEntityNum, int contentMask)
{
  const dvar_t *v8; 
  BgTrace v13; 

  v8 = DCONST_DVARBOOL_useBgTraceSystem;
  if ( !DCONST_DVARBOOL_useBgTraceSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "useBgTraceSystem") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v8);
  if ( v8->current.enabled )
  {
    v13 = *this;
    v13.m_ignoreEnt = passEntityNum;
    BgTrace::PerformPlayerTrace(&v13, bounds, start, end, results);
  }
  else
  {
    PM_trace(pm, results, start, end, bounds, passEntityNum, contentMask);
  }
}

/*
==============
BgTrace::LegacyTraceHandler
==============
*/
void BgTrace::LegacyTraceHandler(BgTrace *this, Physics_WorldId worldId, trace_t *results, const vec3_t *start, const vec3_t *end, const Bounds *bounds, int passEntityNum, int contentMask, const playerState_s *ps)
{
  const dvar_t *v9; 
  int m_flags; 
  unsigned int v15; 
  PhysicsQuery_ContextSettings traceContext; 
  BgTrace v17; 

  v9 = DCONST_DVARBOOL_useBgTraceSystem;
  if ( !DCONST_DVARBOOL_useBgTraceSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "useBgTraceSystem") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v9);
  if ( v9->current.enabled )
  {
    v17 = *this;
    v17.m_ignoreEnt = passEntityNum;
    BgTrace::PerformPlayerTrace(&v17, bounds, start, end, results);
  }
  else
  {
    m_flags = this->m_flags;
    v15 = 0;
    traceContext.m_flags = 0;
    if ( (m_flags & 0x40) != 0 )
    {
      v15 = 1;
      traceContext.m_flags = 1;
    }
    if ( (m_flags & 0x80) != 0 )
    {
      v15 |= 2u;
      traceContext.m_flags = v15;
    }
    if ( (m_flags & 0x100) != 0 )
    {
      v15 |= 8u;
      traceContext.m_flags = v15;
    }
    if ( (m_flags & 0x200) != 0 )
    {
      v15 |= 0x10u;
      traceContext.m_flags = v15;
    }
    if ( (m_flags & 2) != 0 )
      traceContext.m_flags = v15 | 0x20;
    if ( Com_GameMode_SupportsFeature(WEAPON_RAISING_ALTSWITCH_ADS|0x100) )
      traceContext.m_flags |= 4;
    PM_traceHandler(this->m_playerInfo, worldId, results, start, end, bounds, passEntityNum, contentMask, ps, &traceContext);
  }
}

/*
==============
BgTrace::PerformPlayerToEntityTrace
==============
*/
void BgTrace::PerformPlayerToEntityTrace(BgTrace *this, int entIndex, const Bounds *bounds, const vec3_t *start, const vec3_t *end, trace_t *outResult)
{
  const char *v10; 
  BgTrace::BgTraceLocalData localData; 
  char v12; 

  if ( !this->m_playerInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_trace.cpp", 572, ASSERT_TYPE_ASSERT, "(m_playerInfo)", (const char *)&queryFormat, "m_playerInfo") )
    __debugbreak();
  if ( !this->m_playerInfo->m_ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_trace.cpp", 573, ASSERT_TYPE_ASSERT, "(m_playerInfo->m_ps)", (const char *)&queryFormat, "m_playerInfo->m_ps") )
    __debugbreak();
  BgTrace::InitCoreTraceData(this, &localData, bounds, start, end, outResult);
  this->m_localData->ignoreListCount = 0;
  this->m_localData->ignoreList = (int *)&v12;
  BgTrace::GetBodiesForMover(this, entIndex, 128, &this->m_localData->numSubTraceMovers, this->m_localData->subTraceMovers);
  v10 = "PMove Trace No Cage";
  if ( this->m_localData->cage )
    v10 = "PMove Trace Cage";
  Sys_ProfBeginNamedEvent(0xFF9400D3, v10);
  this->m_playerInfo->StartTracePerfProbe((BgPlayerTraceInfo *)this->m_playerInfo);
  BgTrace::InitShapeCast(this);
  BgTrace::CastShape(this, 1);
  BgTrace::FinishShapeCast(this);
  this->m_playerInfo->EndTracePerfProbe((BgPlayerTraceInfo *)this->m_playerInfo);
  Sys_ProfEndNamedEvent();
  this->m_localData = NULL;
}

/*
==============
BgTrace::PerformPlayerTrace
==============
*/
void BgTrace::PerformPlayerTrace(BgTrace *this, const Bounds *bounds, const vec3_t *start, const vec3_t *end, trace_t *outResult)
{
  int m_ignoreEnt; 
  unsigned int v10; 
  unsigned int m_size; 
  unsigned __int64 v12; 
  __int64 v13; 
  const BgPlayerTraceInfo *m_playerInfo; 
  int v15; 
  const char *v16; 
  trace_t *v17; 
  __int64 v18; 
  BgTrace::BgTraceLocalData localData; 
  char v20; 

  if ( !this->m_playerInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_trace.cpp", 346, ASSERT_TYPE_ASSERT, "(m_playerInfo)", (const char *)&queryFormat, "m_playerInfo") )
    __debugbreak();
  if ( !this->m_playerInfo->m_ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_trace.cpp", 347, ASSERT_TYPE_ASSERT, "(m_playerInfo->m_ps)", (const char *)&queryFormat, "m_playerInfo->m_ps") )
    __debugbreak();
  BgTrace::InitCoreTraceData(this, &localData, bounds, start, end, outResult);
  this->m_localData->ignoreListCount = 0;
  this->m_localData->ignoreList = (int *)&v20;
  m_ignoreEnt = this->m_ignoreEnt;
  if ( m_ignoreEnt != 2047 )
    this->m_localData->ignoreList[this->m_localData->ignoreListCount++] = m_ignoreEnt;
  if ( this->m_localData->shapeTrace )
  {
    this->m_localData->cage = BgPlayerTraceInfo::BuildCage((BgPlayerTraceInfo *)this->m_playerInfo, &this->m_playerInfo->m_ps->origin, start, end, bounds, this->m_traceMask);
    if ( (this->m_flags & 8) != 0 )
    {
      v10 = 0;
      m_size = this->m_playerInfo->m_moverList.m_size;
      if ( m_size )
      {
        v12 = 0i64;
        v13 = 0i64;
        do
        {
          if ( v10 >= 5 )
          {
            LODWORD(v18) = 5;
            LODWORD(v17) = v10;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_trace.cpp", 377, ASSERT_TYPE_ASSERT, "(unsigned)( next ) < (unsigned)( 5 )", "next doesn't index MAX_TRACE_MOVERS\n\t%i not in [0, %i)", v17, v18) )
              __debugbreak();
          }
          m_playerInfo = this->m_playerInfo;
          if ( v12 >= m_playerInfo->m_moverList.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 236, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
            __debugbreak();
          if ( v12 >= 5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\fixed_memory_block.h", 99, ASSERT_TYPE_ASSERT, "( index < num_elements )", (const char *)&queryFormat, "index < num_elements") )
            __debugbreak();
          v15 = *(_DWORD *)&m_playerInfo->m_moverList.m_data.m_buffer[v13];
          if ( v15 != this->m_ignoreEnt && v10 != this->m_playerInfo->m_rideMoverIndex )
          {
            BgTrace::GetBodiesForMover(this, v15, 128, &this->m_localData->numSubTraceMovers, this->m_localData->subTraceMovers);
            this->m_localData->ignoreList[this->m_localData->ignoreListCount++] = v15;
          }
          ++v10;
          ++v12;
          v13 += 52i64;
        }
        while ( v10 < m_size );
      }
    }
  }
  if ( this->m_localData->ignoreListCount > 128 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_trace.cpp", 403, ASSERT_TYPE_ASSERT, "(m_localData->ignoreListCount <= 128)", (const char *)&queryFormat, "m_localData->ignoreListCount <= MAX_TRACE_MOVER_BODIES") )
    __debugbreak();
  v16 = "PMove Trace No Cage";
  if ( this->m_localData->cage )
    v16 = "PMove Trace Cage";
  Sys_ProfBeginNamedEvent(0xFF9400D3, v16);
  this->m_playerInfo->StartTracePerfProbe((BgPlayerTraceInfo *)this->m_playerInfo);
  BgTrace::InitShapeCast(this);
  BgTrace::CastShape(this, 0);
  BgTrace::FinishShapeCast(this);
  this->m_playerInfo->EndTracePerfProbe((BgPlayerTraceInfo *)this->m_playerInfo);
  Sys_ProfEndNamedEvent();
  this->m_localData = NULL;
}

/*
==============
BgTrace::ProcessAllSolid
==============
*/
void BgTrace::ProcessAllSolid(BgTrace *this, HavokPhysics_CollisionQueryResult *traceResult, HavokPhysics_CollisionQueryResult *queryResult, trace_t *results, const vec3_t *end)
{
  BgTrace::BgTraceLocalData *m_localData; 
  hknpShape *shape; 
  unsigned int ShapecastHitBodyId; 
  Physics_GetClosestPointsExtendedData extendedData; 

  if ( results->startsolid )
  {
    extendedData.simplify = 0;
    extendedData.ignoreBodies = NULL;
    extendedData.collisionBuffer = 0.0;
    extendedData.nonBrushShape = NULL;
    extendedData.phaseSelection = All;
    extendedData.contents = this->m_traceMask;
    extendedData.nonBrushShape = this->m_localData->nonBrushShape;
    HavokPhysics_CollisionQueryResult::Reset(queryResult, 1);
    m_localData = this->m_localData;
    shape = m_localData->shape;
    ShapecastHitBodyId = HavokPhysics_CollisionQueryResult::GetShapecastHitBodyId(traceResult, 0);
    Physics_GetClosestPoints(this->m_worldId, ShapecastHitBodyId, shape, end, &m_localData->quaternionRotation, 0.0, &extendedData, queryResult);
    if ( HavokPhysics_CollisionQueryResult::HasHit(queryResult) )
      results->allsolid = 1;
  }
}

/*
==============
BgTrace::Reset
==============
*/
void BgTrace::Reset(BgTrace *this, const BgPlayerTraceInfo *playerInfo)
{
  BgTraceBase *v2; 

  v2 = &playerInfo->BgTraceBase;
  if ( !playerInfo )
    v2 = NULL;
  this->BgTraceBase = *v2;
  this->m_playerInfo = playerInfo;
  this->m_localData = NULL;
}

/*
==============
BgTraceBase::ResetBaseInfo
==============
*/
void BgTraceBase::ResetBaseInfo(BgTraceBase *this, Physics_WorldId worldId, int traceMask, int ignoreEnt)
{
  this->m_flags = 0;
  this->m_traceMask = traceMask & 0xFDFFBFFF;
  this->m_worldId = worldId;
  this->m_ignoreEnt = ignoreEnt;
}

/*
==============
BgPlayerTraceInfo::ResetPmovePlayerTraceInfo
==============
*/
void BgPlayerTraceInfo::ResetPmovePlayerTraceInfo(BgPlayerTraceInfo *this, pmove_t *pm, bool updateMoverInfo)
{
  const dvar_t *v6; 
  playerState_s *ps; 
  BgPlayerTraceInfo *m_playerTraceInfo; 
  int clientNum; 
  int tracemask; 
  Physics_WorldId v11; 
  BgPlayerTraceInfo *v12; 
  const BgHandler *m_bgHandler; 
  const dvar_t *v14; 
  int serverTime; 
  BgAntiLagEntityInfo *p_antilagList; 
  __int64 v17; 
  int v18; 
  BgAntiLag *antiLag; 
  BgPlayerTraceInfo *v20; 
  BgTrace *m_trace; 
  BgTraceBase *v22; 
  BgTraceBase v23; 
  unsigned int outNumInfoItems[4]; 
  BgAntiLagEntityInfo antilagList; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_trace.cpp", 918, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  v6 = DCONST_DVARBOOL_useBgTraceSystem;
  if ( !DCONST_DVARBOOL_useBgTraceSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "useBgTraceSystem") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  if ( v6->current.enabled )
  {
    ps = pm->ps;
    if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_trace.cpp", 927, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    m_playerTraceInfo = pm->m_playerTraceInfo;
    clientNum = ps->clientNum;
    tracemask = pm->tracemask;
    v11 = this->m_bgHandler->GetPhysicsWorldId((BgHandler *)this->m_bgHandler);
    m_playerTraceInfo->m_ignoreEnt = clientNum;
    m_playerTraceInfo->m_worldId = v11;
    m_playerTraceInfo->m_flags = 0;
    m_playerTraceInfo->m_traceMask = tracemask & 0xFDFFBFFF;
    v12 = pm->m_playerTraceInfo;
    m_bgHandler = this->m_bgHandler;
    v12->m_localClientNum = pm->localClientNum;
    v12->m_ps = ps;
    v12->m_bgHandler = m_bgHandler;
    v14 = DCONST_DVARBOOL_usePmoveMoverSystem;
    if ( !DCONST_DVARBOOL_usePmoveMoverSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "usePmoveMoverSystem") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v14);
    if ( v14->current.enabled && updateMoverInfo )
    {
      serverTime = pm->cmd.serverTime;
      BgPlayerTraceInfo::SetRideMover(pm->m_playerTraceInfo, pm->antiLag, serverTime, ps->movingPlatforms.m_movingPlatformEntity, pm->m_bgHandler, ps);
      p_antilagList = &antilagList;
      v17 = 128i64;
      do
      {
        BgAntiLagEntityInfo::BgAntiLagEntityInfo(p_antilagList++);
        --v17;
      }
      while ( v17 );
      v18 = ps->clientNum;
      antiLag = (BgAntiLag *)pm->antiLag;
      outNumInfoItems[0] = 0;
      BgAntiLag::GetEntityInfoListAtTime(antiLag, v18, 0x2Bu, 128, serverTime, outNumInfoItems, &antilagList);
      BgPlayerTraceInfo::SetMoverListFromAntilagBuffer(pm->m_playerTraceInfo, pm, &antilagList, outNumInfoItems[0]);
    }
  }
  v20 = pm->m_playerTraceInfo;
  m_trace = pm->m_trace;
  v22 = &v20->BgTraceBase;
  if ( !v20 )
    v22 = NULL;
  v23 = *v22;
  m_trace->m_localData = NULL;
  m_trace->m_playerInfo = v20;
  m_trace->BgTraceBase = v23;
}

/*
==============
BgPlayerTraceInfo::SetMoverListFromAntilagBuffer
==============
*/
void BgPlayerTraceInfo::SetMoverListFromAntilagBuffer(BgPlayerTraceInfo *this, pmove_t *pm, const BgAntiLagEntityInfo *antilagList, const int antilagMoverCount)
{
  __int64 v4; 
  const BgAntiLagEntityInfo *v5; 
  BgPlayerTraceInfo *v6; 
  unsigned __int64 i; 
  int m_movingPlatformEntity; 
  int v9; 
  __int64 v10; 
  unsigned __int16 *p_entityIndex; 
  _DWORD *v; 
  float *p_commandTime; 
  unsigned int v14; 
  ntl::fixed_vector<BgTraceMoverInfo,5,0> *p_m_moverList; 
  int *v16; 
  __int64 v17; 
  const BgAntiLagEntityInfo *v18; 
  char *v19; 
  __int64 v20; 
  const BgAntiLagEntityInfo *v21; 
  playerState_s *ps; 
  __int64 v23; 
  int v24; 
  int v25[3]; 
  int v26; 
  int v27; 
  const BgAntiLagEntityInfo *v28; 
  char v29[8]; 
  BgPlayerTraceInfo *v30; 
  pmove_t *v31; 
  __int64 v32; 
  float v33[128]; 
  int v34[128]; 

  v32 = -2i64;
  v4 = antilagMoverCount;
  v27 = antilagMoverCount;
  v5 = antilagList;
  v28 = antilagList;
  v31 = pm;
  v6 = this;
  v30 = this;
  if ( !this->m_ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_trace.cpp", 522, ASSERT_TYPE_ASSERT, "(m_ps)", (const char *)&queryFormat, "m_ps") )
    __debugbreak();
  v6->m_rideMoverIndex = -1;
  for ( i = 0i64; i < v6->m_moverList.m_size; ++i )
  {
    if ( i >= 5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\fixed_memory_block.h", 107, ASSERT_TYPE_ASSERT, "( index < num_elements )", (const char *)&queryFormat, "index < num_elements") )
      __debugbreak();
  }
  v6->m_moverList.m_size = 0i64;
  if ( BGMovingPlatformPS::IsOnMovingPlatform(&v6->m_ps->movingPlatforms) )
    m_movingPlatformEntity = v6->m_ps->movingPlatforms.m_movingPlatformEntity;
  else
    m_movingPlatformEntity = 2047;
  v26 = m_movingPlatformEntity;
  v9 = 0;
  if ( (int)v4 > 0 )
  {
    v10 = 0i64;
    p_entityIndex = &v5->entityIndex;
    do
    {
      v34[v10] = v9;
      if ( *p_entityIndex == m_movingPlatformEntity )
      {
        v33[v10] = 0.0;
      }
      else
      {
        v = (_DWORD *)v5[v9].origin.origin.v;
        if ( !v && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_antilag.h", 810, ASSERT_TYPE_ASSERT, "(antiLagentity)", (const char *)&queryFormat, "antiLagentity") )
          __debugbreak();
        LOWORD(v24) = (unsigned int)v >> 8;
        BYTE2(v24) = BYTE3(v);
        HIBYTE(v24) = (_BYTE)v;
        v25[1] = v[2] ^ *v ^ v24 ^ s_antilag_aab_Y;
        v25[2] = v[1] ^ v[2] ^ v24 ^ s_antilag_aab_Z;
        v25[0] = v[1] ^ v24 ^ ~s_antilag_aab_X;
        memset(v29, 0, sizeof(v29));
        if ( ((v25[0] & 0x7F800000) == 2139095040 || (v25[1] & 0x7F800000) == 2139095040 || (v25[2] & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_antilag.h", 803, ASSERT_TYPE_SANITY, "( !IS_NAN( ( to )[0] ) && !IS_NAN( ( to )[1] ) && !IS_NAN( ( to )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( to )[0] ) && !IS_NAN( ( to )[1] ) && !IS_NAN( ( to )[2] )") )
          __debugbreak();
        p_commandTime = (float *)&v6->m_ps->commandTime;
        v33[v10] = (float)((float)((float)(p_commandTime[13] - *(float *)&v25[1]) * (float)(p_commandTime[13] - *(float *)&v25[1])) + (float)((float)(p_commandTime[12] - *(float *)v25) * (float)(p_commandTime[12] - *(float *)v25))) + (float)((float)(p_commandTime[14] - *(float *)&v25[2]) * (float)(p_commandTime[14] - *(float *)&v25[2]));
        memset(v25, 0, sizeof(v25));
        m_movingPlatformEntity = v26;
        v5 = v28;
      }
      ++v9;
      ++v10;
      p_entityIndex += 70;
    }
    while ( v10 < v4 );
    LODWORD(v4) = v27;
  }
  v6->SortMoverList(v6, v4, v34, v33);
  v14 = 5;
  if ( (int)v4 < 5 )
    v14 = v4;
  if ( v14 )
  {
    p_m_moverList = &v6->m_moverList;
    v16 = v34;
    v17 = v14;
    v18 = v28;
    do
    {
      if ( p_m_moverList->m_size >= 5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 180, ASSERT_TYPE_ASSERT, "( size() < max_size() )", (const char *)&queryFormat, "size() < max_size()") )
        __debugbreak();
      v19 = &p_m_moverList->m_data.m_buffer[52 * p_m_moverList->m_size];
      *(_QWORD *)v19 = 0i64;
      *((_QWORD *)v19 + 1) = 0i64;
      *((_QWORD *)v19 + 2) = 0i64;
      *((_QWORD *)v19 + 3) = 0i64;
      *((_QWORD *)v19 + 4) = 0i64;
      *((_QWORD *)v19 + 5) = 0i64;
      *((_DWORD *)v19 + 12) = 0;
      ++p_m_moverList->m_size;
      v20 = *v16;
      if ( (unsigned int)v20 >= (unsigned int)v4 )
      {
        LODWORD(v23) = v4;
        LODWORD(ps) = *v16;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_trace.cpp", 559, ASSERT_TYPE_ASSERT, "(unsigned)( antilagListIndex ) < (unsigned)( antilagMoverCount )", "antilagListIndex doesn't index antilagMoverCount\n\t%i not in [0, %i)", ps, v23) )
          __debugbreak();
      }
      v21 = &v18[v20];
      *(_DWORD *)v19 = v21->entityIndex;
      BgAntiLagEntity_GetOrigin(v21, (vec3_t *)(v19 + 4));
      *((_DWORD *)v19 + 4) = LODWORD(v21->angles.v[0]);
      *((_DWORD *)v19 + 5) = LODWORD(v21->angles.v[1]);
      *((_DWORD *)v19 + 6) = LODWORD(v21->angles.v[2]);
      *((_DWORD *)v19 + 7) = LODWORD(v21->velocity.v[0]);
      *((_DWORD *)v19 + 8) = LODWORD(v21->velocity.v[1]);
      *((_DWORD *)v19 + 9) = LODWORD(v21->velocity.v[2]);
      *((_DWORD *)v19 + 10) = LODWORD(v21->angVelocity.v[0]);
      *((_DWORD *)v19 + 11) = LODWORD(v21->angVelocity.v[1]);
      *((_DWORD *)v19 + 12) = LODWORD(v21->angVelocity.v[2]);
      ++v16;
      --v17;
    }
    while ( v17 );
    v6 = v30;
  }
  BgPlayerTraceInfo::SetRideMover(v6, v31->antiLag, v31->cmd.serverTime, v6->m_ps->movingPlatforms.m_movingPlatformEntity, v31->m_bgHandler, v31->ps);
}

/*
==============
BgPlayerTraceInfo::SetPlayerInfo
==============
*/
void BgPlayerTraceInfo::SetPlayerInfo(BgPlayerTraceInfo *this, LocalClientNum_t localClientNum, const playerState_s *ps, const BgHandler *bgHandler)
{
  this->m_localClientNum = localClientNum;
  this->m_ps = ps;
  this->m_bgHandler = bgHandler;
}

/*
==============
BgPlayerTraceInfo::SetRideMover
==============
*/
void BgPlayerTraceInfo::SetRideMover(BgPlayerTraceInfo *this, const BgAntiLag *antiLag, const int antiLagTime, const int rideMoverEnt, const BgHandler *handler, playerState_s *ps)
{
  const BgHandler *v6; 
  const BgTraceMoverInfo *RideMoverEntityInfo; 
  int entIndex; 
  const dvar_t *v11; 
  int v12; 
  ntl::fixed_vector<BgTraceMoverInfo,5,0> *p_m_moverList; 
  unsigned __int64 v14; 
  int clientNum; 
  ntl::fixed_vector<BgTraceMoverInfo,5,0> *v16; 
  char *v17; 
  unsigned __int64 v18; 
  BGMovingPlatformPS *p_movingPlatforms; 
  int m_size; 
  BgAntiLagEntityInfo outInfo; 

  v6 = handler;
  RideMoverEntityInfo = BgPlayerTraceInfo::GetRideMoverEntityInfo(this);
  if ( RideMoverEntityInfo )
    entIndex = RideMoverEntityInfo->entIndex;
  else
    entIndex = 2047;
  v11 = DCONST_DVARBOOL_usePmoveMoverSystem;
  if ( !DCONST_DVARBOOL_usePmoveMoverSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "usePmoveMoverSystem") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v11);
  if ( !v11->current.enabled )
  {
    this->m_rideMoverIndex = -1;
    return;
  }
  if ( entIndex != rideMoverEnt )
  {
    if ( rideMoverEnt == 2047 )
      goto LABEL_39;
    v12 = 0;
    m_size = this->m_moverList.m_size;
    if ( m_size > 0 )
    {
      p_m_moverList = &this->m_moverList;
      v14 = 0i64;
      while ( 1 )
      {
        if ( v14 >= this->m_moverList.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 243, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
          __debugbreak();
        if ( v14 >= 5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\fixed_memory_block.h", 107, ASSERT_TYPE_ASSERT, "( index < num_elements )", (const char *)&queryFormat, "index < num_elements") )
          __debugbreak();
        if ( *(_DWORD *)p_m_moverList->m_data.m_buffer == rideMoverEnt )
          break;
        ++v12;
        ++v14;
        p_m_moverList = (ntl::fixed_vector<BgTraceMoverInfo,5,0> *)((char *)p_m_moverList + 52);
        if ( (__int64)v14 >= m_size )
          goto LABEL_23;
      }
      this->m_rideMoverIndex = v12;
LABEL_23:
      v6 = handler;
    }
    if ( v12 != m_size )
      goto LABEL_40;
    clientNum = ps->clientNum;
    outInfo.boneInfo.boneList.m_usedSize = 0;
    outInfo.boneInfo.boneList.m_maxSize = 0;
    if ( !BgAntiLag::GetEntityInfoAtTime((BgAntiLag *)antiLag, clientNum, rideMoverEnt, 0xBu, antiLagTime, &outInfo) )
    {
LABEL_39:
      this->m_rideMoverIndex = -1;
    }
    else
    {
      v16 = &this->m_moverList;
      if ( this->m_moverList.m_size )
      {
        v18 = this->m_moverList.m_size - 1;
        if ( v18 >= 5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\fixed_memory_block.h", 107, ASSERT_TYPE_ASSERT, "( index < num_elements )", (const char *)&queryFormat, "index < num_elements") )
          __debugbreak();
        v17 = &v16->m_data.m_buffer[52 * v18];
      }
      else
      {
        if ( this->m_moverList.m_size >= 5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 180, ASSERT_TYPE_ASSERT, "( size() < max_size() )", (const char *)&queryFormat, "size() < max_size()") )
          __debugbreak();
        v17 = &v16->m_data.m_buffer[52 * this->m_moverList.m_size];
        *(_QWORD *)v17 = 0i64;
        *((_QWORD *)v17 + 1) = 0i64;
        *((_QWORD *)v17 + 2) = 0i64;
        *((_QWORD *)v17 + 3) = 0i64;
        *((_QWORD *)v17 + 4) = 0i64;
        *((_QWORD *)v17 + 5) = 0i64;
        *((_DWORD *)v17 + 12) = 0;
        ++this->m_moverList.m_size;
      }
      if ( !v17 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_trace.cpp", 497, ASSERT_TYPE_ASSERT, "(back)", (const char *)&queryFormat, "back") )
        __debugbreak();
      *(_DWORD *)v17 = outInfo.entityIndex;
      BgAntiLagEntity_GetOrigin(&outInfo, (vec3_t *)(v17 + 4));
      *(vec3_t *)(v17 + 16) = outInfo.angles;
      *(vec3_t *)(v17 + 28) = outInfo.velocity;
      *(vec3_t *)(v17 + 40) = outInfo.angVelocity;
      this->m_rideMoverIndex = LODWORD(this->m_moverList.m_size) - 1;
    }
LABEL_40:
    p_movingPlatforms = &ps->movingPlatforms;
    if ( this->m_rideMoverIndex == -1 )
      BGMovingPlatformPS::ClearMoverID(p_movingPlatforms, ps, v6);
    else
      BGMovingPlatformPS::SetMoverEntityID(p_movingPlatforms, ps, v6, p_movingPlatforms->m_movingPlatformEntity, rideMoverEnt, 0, 0);
  }
}

/*
==============
BgPlayerTraceInfo::UpdatePostPmove
==============
*/
void BgPlayerTraceInfo::UpdatePostPmove(BgPlayerTraceInfo *this, pmove_t *pm)
{
  BgAntiLag *antiLag; 

  antiLag = (BgAntiLag *)pm->antiLag;
  if ( antiLag )
    BgAntiLag::ValidateRefCountZero(antiLag, "Post PmoveSingle.");
}

/*
==============
BgPlayerTraceInfo::UpdatePrePmove
==============
*/
void BgPlayerTraceInfo::UpdatePrePmove(BgPlayerTraceInfo *this, pmove_t *pm)
{
  BgAntiLag *antiLag; 
  const dvar_t *v5; 
  const dvar_t *v6; 
  BgPlayerTraceInfo *m_playerTraceInfo; 
  BgTrace *m_trace; 
  BgTraceBase *v9; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_trace.cpp", 957, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  antiLag = (BgAntiLag *)pm->antiLag;
  if ( antiLag )
    BgAntiLag::ValidateRefCountZero(antiLag, "Pre PmoveSingle.");
  v5 = DCONST_DVARBOOL_useBgTraceSystem;
  if ( !DCONST_DVARBOOL_useBgTraceSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "useBgTraceSystem") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v5);
  if ( v5->current.enabled )
  {
    BgPlayerTraceInfo::ResetPmovePlayerTraceInfo(this, pm, 1);
  }
  else
  {
    v6 = DCONST_DVARBOOL_usePmoveMoverSystem;
    if ( !DCONST_DVARBOOL_usePmoveMoverSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "usePmoveMoverSystem") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v6);
    if ( v6->current.enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_trace.cpp", 971, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Cannot use usePmoveMoverSystem without also using useBgTraceSystem.") )
      __debugbreak();
    m_playerTraceInfo = pm->m_playerTraceInfo;
    m_trace = pm->m_trace;
    v9 = &m_playerTraceInfo->BgTraceBase;
    if ( !m_playerTraceInfo )
      v9 = NULL;
    m_trace->BgTraceBase = *v9;
    m_trace->m_playerInfo = m_playerTraceInfo;
    m_trace->m_localData = NULL;
  }
}


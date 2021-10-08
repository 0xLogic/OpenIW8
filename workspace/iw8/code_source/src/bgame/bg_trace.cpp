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
  this->m_worldId = PHYSICS_WORLD_ID_INVALID;
  this->m_traceMask = 1;
  _RAX = &playerInfo->BgTraceBase;
  this->m_ignoreEnt = 2047;
  if ( !playerInfo )
    _RAX = NULL;
  __asm
  {
    vmovups xmm0, xmmword ptr [rax]
    vmovups xmmword ptr [rcx], xmm0
  }
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
  const dvar_t *v19; 
  const dvar_t *v20; 
  BG_PMove_Cage *v21; 
  char v45; 
  char v46; 
  int v60; 
  BgHandler_vtbl *v61; 
  char v62; 
  BG_PMove_Cage *v63; 
  BG_PMove_Cage *v64; 
  char v65; 
  Physics_WorldId m_worldId; 
  unsigned int NumHits; 
  unsigned int v68; 
  BG_PMove_Cage *v69; 
  hkMemoryAllocator *v70; 
  int clientNum; 
  bool v72; 
  HavokPhysics_BroadphaseCollisionQueryResult result; 
  Physics_AABBBroadphaseQueryExtendedData extendedData; 
  __int64 v84; 
  Bounds v85; 
  vec3_t max; 
  vec3_t min; 
  char v88; 
  void *retaddr; 

  _RAX = &retaddr;
  v84 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm8
    vmovaps xmmword ptr [rax-78h], xmm9
    vmovaps xmmword ptr [rax-88h], xmm10
    vmovaps xmmword ptr [rax-98h], xmm11
    vmovaps xmmword ptr [rax-0A8h], xmm12
    vmovaps xmmword ptr [rax-0B8h], xmm13
  }
  _R14 = start;
  _RBX = playerOrigin;
  v19 = DCONST_DVARBOOL_pmove_useCage;
  if ( !DCONST_DVARBOOL_pmove_useCage && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "pmove_useCage") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v19);
  if ( !v19->current.enabled || (contentMask & bg_pmove_contents) != contentMask )
    goto LABEL_29;
  if ( this->m_worldId <= (unsigned int)PHYSICS_WORLD_ID_SERVER_DETAIL )
  {
    v20 = DCONST_DVARBOOL_pmove_useServerCage;
    if ( !DCONST_DVARBOOL_pmove_useServerCage && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "pmove_useServerCage") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v20);
    if ( !v20->current.enabled )
      goto LABEL_29;
  }
  v21 = (BG_PMove_Cage *)this->GetCage(this);
  _RDI = v21;
  if ( v21->isValid )
    _RBX = &v21->playerOrigin;
  __asm
  {
    vmovss  xmm8, dword ptr [rbx+8]
    vmovss  xmm9, dword ptr [rbx+4]
    vmovss  xmm13, dword ptr [rbx]
    vmovss  xmm7, dword ptr cs:s_bg_pmove_cageDims
    vsubss  xmm0, xmm13, xmm7
    vmovss  dword ptr [rbp+80h+min], xmm0
    vmovss  xmm11, dword ptr cs:s_bg_pmove_cageDims+4
    vsubss  xmm1, xmm9, xmm11
    vmovss  dword ptr [rbp+80h+min+4], xmm1
    vmovss  xmm10, dword ptr cs:s_bg_pmove_cageDims+8
    vsubss  xmm0, xmm8, xmm10
    vmovss  dword ptr [rbp+80h+min+8], xmm0
    vaddss  xmm1, xmm13, xmm7
    vmovss  dword ptr [rbp+80h+max], xmm1
    vaddss  xmm0, xmm9, xmm11
    vmovss  dword ptr [rbp+80h+max+4], xmm0
    vaddss  xmm1, xmm10, xmm8
    vmovss  dword ptr [rbp+80h+max+8], xmm1
  }
  _RAX = bounds;
  __asm
  {
    vmovss  xmm0, dword ptr [rax+10h]
    vmaxss  xmm1, xmm0, dword ptr [rax+0Ch]
    vmovss  xmm0, dword ptr [rax+14h]
    vmaxss  xmm1, xmm0, xmm1
    vmulss  xmm6, xmm1, cs:__real@40000000
    vmovss  xmm2, dword ptr [r14]
    vmovss  dword ptr [rbp+80h+var_F0.midPoint], xmm2
    vmovss  xmm0, dword ptr [r14+4]
    vmovss  dword ptr [rbp+80h+var_F0.midPoint+4], xmm0
    vmovss  xmm1, dword ptr [r14+8]
    vmovss  dword ptr [rbp+80h+var_F0.midPoint+8], xmm1
    vxorps  xmm0, xmm0, xmm0
    vmovss  dword ptr [rbp+80h+var_F0.halfSize], xmm0
    vmovss  dword ptr [rbp+80h+var_F0.halfSize+4], xmm0
    vmovss  dword ptr [rbp+80h+var_F0.halfSize+8], xmm0
  }
  Bounds_AddPoint(&v85, end);
  __asm
  {
    vaddss  xmm12, xmm6, dword ptr [rbp+80h+var_F0.halfSize+4]
    vaddss  xmm5, xmm6, dword ptr [rbp+80h+var_F0.halfSize+8]
    vsubss  xmm3, xmm13, dword ptr [rbp+80h+var_F0.midPoint]
    vmovss  xmm4, dword ptr cs:__xmm@7fffffff7fffffff7fffffff7fffffff
    vandps  xmm3, xmm3, xmm4
    vaddss  xmm1, xmm6, dword ptr [rbp+80h+var_F0.halfSize]
    vsubss  xmm2, xmm7, xmm1
    vcomiss xmm3, xmm2
  }
  if ( !(v45 | v46) )
    goto LABEL_28;
  __asm
  {
    vsubss  xmm1, xmm9, dword ptr [rbp+80h+var_F0.midPoint+4]
    vandps  xmm1, xmm1, xmm4
    vsubss  xmm0, xmm11, xmm12
    vcomiss xmm1, xmm0
  }
  if ( !(v45 | v46) )
    goto LABEL_28;
  __asm
  {
    vsubss  xmm1, xmm8, dword ptr [rbp+80h+var_F0.midPoint+8]
    vandps  xmm1, xmm1, xmm4
    vsubss  xmm0, xmm10, xmm5
    vcomiss xmm1, xmm0
  }
  if ( !(v45 | v46) )
  {
LABEL_28:
    clientNum = this->m_ps->clientNum;
    v72 = this->m_bgHandler->IsClient((BgHandler *)this->m_bgHandler);
    BgTrace::DebugPrintCage(!v72, clientNum, "Cage Failed Bounds for Client ");
LABEL_29:
    v64 = NULL;
    goto LABEL_30;
  }
  v60 = this->m_ps->clientNum;
  v61 = this->m_bgHandler->__vftable;
  if ( _RDI->isValid )
  {
    v62 = ((__int64 (*)(void))v61->IsClient)();
    BgTrace::DebugPrintCage(v62 == 0, v60, "Cage Reused for Client ");
    v63 = NULL;
    if ( _RDI->numBodies <= 0x80 )
      v63 = _RDI;
    v64 = v63;
  }
  else
  {
    v65 = ((__int64 (*)(void))v61->IsClient)();
    BgTrace::DebugPrintCage(v65 == 0, v60, "Rebuilding Cage for Client ");
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
    _RDI->numBodies = NumHits;
    if ( NumHits <= 0x80 )
    {
      v68 = 0;
      if ( NumHits )
      {
        do
        {
          _RDI->bodies[v68] = HavokPhysics_BroadphaseCollisionQueryResult::GetHitBodyId(&result, v68);
          ++v68;
        }
        while ( v68 < _RDI->numBodies );
      }
    }
    _RDI->isValid = 1;
    __asm
    {
      vmovss  dword ptr [rdi+208h], xmm13
      vmovss  dword ptr [rdi+20Ch], xmm9
      vmovss  dword ptr [rdi+210h], xmm8
    }
    Sys_ProfEndNamedEvent();
    v69 = NULL;
    if ( _RDI->numBodies <= 0x80 )
      v69 = _RDI;
    v70 = hkMemHeapAllocator();
    result.m_hits.m_size = 0;
    if ( result.m_hits.m_capacityAndFlags >= 0 )
      hkMemoryAllocator::bufFree2(v70, result.m_hits.m_data, 4, result.m_hits.m_capacityAndFlags & 0x3FFFFFFF);
    result.m_hits.m_data = NULL;
    result.m_hits.m_capacityAndFlags = 0x80000000;
    hkReferencedObject::~hkReferencedObject(&result);
    v64 = v69;
  }
LABEL_30:
  _R11 = &v88;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
    vmovaps xmm12, xmmword ptr [r11-70h]
    vmovaps xmm13, xmmword ptr [r11-80h]
  }
  return v64;
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
  WorldUpReferenceFrame v17; 

  _RDI = outQuat;
  m_playerInfo = (BgPlayerTraceInfo *)this->m_playerInfo;
  m_ps = m_playerInfo->m_ps;
  if ( !m_ps || (this->m_flags & 2) != 0 )
    goto LABEL_7;
  _RBX = BgPlayerTraceInfo::GetRideMoverEntityInfo(m_playerInfo);
  if ( WorldUpReferenceFrame::HasValidWorldUpInPs(m_ps) )
  {
    WorldUpReferenceFrame::WorldUpReferenceFrame(&v17, m_ps, this->m_playerInfo->m_bgHandler);
    __asm
    {
      vmovss  xmm0, dword ptr cs:?quat_identity@@3Tvec4_t@@B; vec4_t const quat_identity
      vmovss  dword ptr [rdi], xmm0
      vmovss  xmm1, dword ptr cs:?quat_identity@@3Tvec4_t@@B+4; vec4_t const quat_identity
      vmovss  dword ptr [rdi+4], xmm1
      vmovss  xmm0, dword ptr cs:?quat_identity@@3Tvec4_t@@B+8; vec4_t const quat_identity
      vmovss  dword ptr [rdi+8], xmm0
      vmovss  xmm1, dword ptr cs:?quat_identity@@3Tvec4_t@@B+0Ch; vec4_t const quat_identity
      vmovss  dword ptr [rdi+0Ch], xmm1
    }
    WorldUpReferenceFrame::ApplyReferenceFrameToQuat(&v17, _RDI);
    return;
  }
  if ( _RBX )
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vucomiss xmm0, dword ptr [rbx+1Ch]
    }
    BGMovingPlatforms::GetBestPlatformUp(m_ps, &_RBX->angles, NULL, _RDI);
  }
  else
  {
LABEL_7:
    __asm
    {
      vmovss  xmm0, dword ptr cs:?quat_identity@@3Tvec4_t@@B; vec4_t const quat_identity
      vmovss  dword ptr [rdi], xmm0
      vmovss  xmm1, dword ptr cs:?quat_identity@@3Tvec4_t@@B+4; vec4_t const quat_identity
      vmovss  dword ptr [rdi+4], xmm1
      vmovss  xmm0, dword ptr cs:?quat_identity@@3Tvec4_t@@B+8; vec4_t const quat_identity
      vmovss  dword ptr [rdi+8], xmm0
      vmovss  xmm1, dword ptr cs:?quat_identity@@3Tvec4_t@@B+0Ch; vec4_t const quat_identity
      vmovss  dword ptr [rdi+0Ch], xmm1
    }
  }
}

/*
==============
BgTrace::CastShape
==============
*/

void __fastcall BgTrace::CastShape(BgTrace *this, bool subTrace, double _XMM2_8)
{
  BgTrace::BgTraceLocalData *m_localData; 
  bool v8; 
  const vec4_t *v9; 
  const vec3_t *v10; 
  HavokPhysics_CollisionQueryResult **p_resultQuery; 
  HavokPhysics_CollisionQueryResult *result; 
  BG_PMove_Cage *v14; 
  hknpShape *v15; 
  int m_flags; 
  const vec3_t *p_end; 
  const vec3_t *p_start; 
  HavokPhysics_CollisionQueryResult **p_resultQueryAny; 
  const vec4_t *p_quaternionRotation; 
  HavokPhysics_CollisionQueryResult *startResult; 
  BG_PMove_Cage *cage; 
  HavokPhysics_CollisionQueryResult *resultTrace; 
  hknpShape *shape; 
  BgTrace::BgTraceLocalData *v28; 
  trace_t *v29; 
  HavokPhysics_CollisionQueryResult *v30; 
  int m_traceMask; 
  BgTrace::BgTraceLocalData *v32; 
  hknpShape *v33; 
  unsigned int ShapecastHitBodyId; 
  BgTrace::BgTraceLocalData *v36; 
  int v37; 
  const vec3_t *v38; 
  HavokPhysics_CollisionQueryResult **v40; 
  char v42; 
  BgTrace::BgTraceLocalData *v43; 
  unsigned int RaycastHitBodyId; 
  float fmt; 
  float rotation; 
  float v48; 
  float v49; 
  Physics_ShapecastExtendedData v50; 
  Physics_GetClosestPointsExtendedData extendedData; 

  if ( !this->m_localData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_trace.cpp", 199, ASSERT_TYPE_ASSERT, "(m_localData)", (const char *)&queryFormat, "m_localData") )
    __debugbreak();
  if ( !subTrace || this->m_localData->numSubTraceMovers )
  {
    m_localData = this->m_localData;
    __asm { vmovaps [rsp+0E0h+var_30], xmm6 }
    if ( m_localData->shapeTrace )
    {
      if ( m_localData->sweptTrace )
      {
        m_flags = this->m_flags;
        p_end = &m_localData->end;
        __asm { vmovss  xmm0, cs:__real@3c83126f }
        v50.contents = this->m_traceMask;
        p_start = &m_localData->start;
        __asm
        {
          vmovss  [rbp+57h+var_90.accuracy], xmm0
          vmovss  xmm0, cs:__real@3e000000
        }
        v50.simplifyStart = 0;
        v50.phaseSelection = All;
        __asm
        {
          vxorps  xmm6, xmm6, xmm6
          vmovss  [rbp+57h+var_90.startTolerance], xmm6
        }
        v50.ignoreBodies = m_localData->ignoreBodies;
        __asm { vmovss  [rbp+57h+var_90.collisionBuffer], xmm0 }
        v50.nonBrushShape = m_localData->nonBrushShape;
        v50.secondPassShape = m_localData->paddedShape;
        v50.permitOutwardTrace = (m_flags & 0x10) == 0;
        p_resultQueryAny = &m_localData->resultQueryAny;
        if ( (m_flags & 1) == 0 )
          p_resultQueryAny = &m_localData->resultQuery;
        p_quaternionRotation = &m_localData->quaternionRotation;
        startResult = *p_resultQueryAny;
        if ( subTrace )
        {
          Physics_Shapecast(this->m_worldId, m_localData->numSubTraceMovers, m_localData->subTraceMovers, m_localData->shape, p_start, &m_localData->end, &m_localData->quaternionRotation, &v50, m_localData->resultTrace, startResult);
        }
        else
        {
          cage = m_localData->cage;
          resultTrace = m_localData->resultTrace;
          shape = m_localData->shape;
          if ( cage )
            Physics_Shapecast(this->m_worldId, cage->numBodies, cage->bodies, shape, p_start, p_end, p_quaternionRotation, &v50, resultTrace, startResult);
          else
            Physics_Shapecast(this->m_worldId, shape, p_start, p_end, p_quaternionRotation, &v50, resultTrace, startResult);
        }
        Physics_ConvertShapeQueryResultToLegacyTrace(this->m_localData->resultTrace, startResult, this->m_localData->result);
        v28 = this->m_localData;
        v29 = v28->result;
        v30 = v28->resultTrace;
        if ( v29->startsolid )
        {
          m_traceMask = this->m_traceMask;
          extendedData.nonBrushShape = NULL;
          extendedData.contents = m_traceMask;
          __asm { vmovss  [rbp+57h+var_58.collisionBuffer], xmm6 }
          extendedData.simplify = 0;
          extendedData.ignoreBodies = NULL;
          extendedData.phaseSelection = All;
          extendedData.nonBrushShape = v28->nonBrushShape;
          HavokPhysics_CollisionQueryResult::Reset(startResult, 1);
          v32 = this->m_localData;
          v33 = v32->shape;
          ShapecastHitBodyId = HavokPhysics_CollisionQueryResult::GetShapecastHitBodyId(v30, 0);
          __asm { vmovss  dword ptr [rsp+0E0h+rotation], xmm6 }
          Physics_GetClosestPoints(this->m_worldId, ShapecastHitBodyId, v33, &v28->end, &v32->quaternionRotation, rotation, &extendedData, startResult);
          if ( HavokPhysics_CollisionQueryResult::HasHit(startResult) )
            v29->allsolid = 1;
        }
        goto LABEL_25;
      }
      v8 = (this->m_flags & 1) == 0;
      v9 = &m_localData->quaternionRotation;
      extendedData.contents = this->m_traceMask;
      v10 = &m_localData->start;
      extendedData.simplify = 0;
      extendedData.phaseSelection = All;
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vmovss  [rbp+57h+var_58.collisionBuffer], xmm0
      }
      extendedData.ignoreBodies = m_localData->ignoreBodies;
      extendedData.nonBrushShape = m_localData->nonBrushShape;
      p_resultQuery = &m_localData->resultQueryAny;
      if ( v8 )
        p_resultQuery = &m_localData->resultQuery;
      result = *p_resultQuery;
      if ( subTrace )
      {
        __asm { vmovss  dword ptr [rsp+0E0h+var_B0], xmm0 }
        Physics_GetClosestPoints(this->m_worldId, m_localData->numSubTraceMovers, m_localData->subTraceMovers, m_localData->shape, v10, &m_localData->quaternionRotation, v48, &extendedData, *p_resultQuery);
      }
      else
      {
        v14 = m_localData->cage;
        v15 = m_localData->shape;
        if ( v14 )
        {
          __asm { vmovss  dword ptr [rsp+0E0h+var_B0], xmm0 }
          Physics_GetClosestPoints(this->m_worldId, v14->numBodies, v14->bodies, v15, v10, v9, v49, &extendedData, result);
        }
        else
        {
          __asm { vmovss  dword ptr [rsp+0E0h+fmt], xmm0 }
          Physics_GetClosestPoints(this->m_worldId, v15, v10, v9, fmt, &extendedData, result);
        }
      }
    }
    else
    {
      if ( subTrace && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_trace.cpp", 265, ASSERT_TYPE_ASSERT, "(!subTrace)", (const char *)&queryFormat, "!subTrace") )
        __debugbreak();
      v36 = this->m_localData;
      v37 = this->m_traceMask;
      v38 = &v36->start;
      if ( v36->sweptTrace )
      {
        extendedData.ignoreBodies = NULL;
        LODWORD(extendedData.collisionBuffer) = 1;
        extendedData.nonBrushShape = (hknpShape *)0x100000000i64;
        LOWORD(extendedData.phaseSelection) = 256;
        extendedData.contents = v37;
        __asm
        {
          vxorps  xmm6, xmm6, xmm6
          vmovss  dword ptr [rbp+57h+var_58+14h], xmm6
        }
        extendedData.ignoreBodies = v36->ignoreBodies;
        Physics_Raycast(this->m_worldId, v38, &v36->end, (Physics_RaycastExtendedData *)&extendedData, v36->resultTrace);
        if ( HavokPhysics_CollisionQueryResult::HasHit(this->m_localData->resultTrace) )
        {
          *(double *)&_XMM0 = HavokPhysics_CollisionQueryResult::GetRaycastHitFraction(this->m_localData->resultTrace, 0);
          __asm { vcomiss xmm0, xmm6 }
          if ( v42 | v8 )
          {
            v50.contents = this->m_traceMask;
            v43 = this->m_localData;
            __asm { vmovss  dword ptr [rbp+57h+var_90.ignoreBodies+4], xmm6 }
            LOBYTE(v50.startTolerance) = 0;
            *(_QWORD *)&v50.accuracy = 0i64;
            LODWORD(v50.ignoreBodies) = 1;
            v50.collisionBuffer = 0.0;
            RaycastHitBodyId = HavokPhysics_CollisionQueryResult::GetRaycastHitBodyId(v43->resultTrace, 0);
            if ( (RaycastHitBodyId & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_trace.cpp", 292, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( hitBodyId ))", (const char *)&queryFormat, "Physics_IsRigidBodyIdValid( hitBodyId )") )
              __debugbreak();
            __asm { vmovss  xmm3, cs:__real@be001a37; maxDistance }
            Physics_QueryPoint(this->m_worldId, RaycastHitBodyId, &this->m_localData->start, *(float *)&_XMM3, (Physics_QueryPointExtendedData *)&v50, this->m_localData->resultQuery);
          }
        }
        Physics_ConvertRayQueryResultToLegacyTrace(this->m_localData->resultTrace, this->m_localData->resultQuery, NULL, this->m_localData->result);
        goto LABEL_25;
      }
      v8 = (this->m_flags & 1) == 0;
      v50.contents = this->m_traceMask;
      LOBYTE(v50.startTolerance) = 0;
      LODWORD(v50.ignoreBodies) = 1;
      v50.collisionBuffer = 0.0;
      __asm
      {
        vxorps  xmm2, xmm2, xmm2; maxDistance
        vmovss  dword ptr [rbp+57h+var_90.ignoreBodies+4], xmm2
      }
      *(_QWORD *)&v50.accuracy = v36->ignoreBodies;
      v40 = &v36->resultQueryAny;
      if ( v8 )
        v40 = &v36->resultQuery;
      result = *v40;
      Physics_QueryPoint(this->m_worldId, v38, *(float *)&_XMM2, (Physics_QueryPointExtendedData *)&v50, *v40);
    }
    Physics_ConvertClosestPointsToLegacyTrace(result, this->m_localData->result);
LABEL_25:
    __asm { vmovaps xmm6, [rsp+0E0h+var_30] }
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
  char v10; 
  char v19; 

  memset_0(localData, 0, sizeof(BgTrace::BgTraceLocalData));
  this->m_localData = localData;
  memset_0(&outResult->position, 0, 0x54ui64);
  outResult->fraction = 1.0;
  this->m_localData->result = outResult;
  this->m_localData->bounds = bounds;
  _RCX = this->m_localData;
  _RCX->start = *start;
  _RAX = end;
  __asm
  {
    vmovss  xmm0, dword ptr [rax]
    vmovss  dword ptr [rcx+274h], xmm0
    vmovss  xmm2, dword ptr [rax+4]
    vmovss  dword ptr [rcx+278h], xmm2
    vmovss  xmm1, dword ptr [rax+8]
    vmovss  dword ptr [rcx+27Ch], xmm1
    vucomiss xmm0, dword ptr [rcx+268h]
  }
  _RAX = _RCX->bounds;
  __asm
  {
    vmovss  xmm3, dword ptr [rax+0Ch]
    vmovss  xmm4, dword ptr [rax+14h]
  }
  if ( !v10 )
    goto LABEL_5;
  __asm { vucomiss xmm2, dword ptr [rcx+26Ch] }
  if ( !v10 )
    goto LABEL_5;
  __asm { vucomiss xmm1, dword ptr [rcx+270h] }
  if ( v10 )
  {
    v19 = 0;
    v10 = 1;
  }
  else
  {
LABEL_5:
    v19 = 1;
  }
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vucomiss xmm4, xmm0
  }
  _RCX->sweptTrace = v19;
  if ( v10 )
  {
    this->m_localData->shapeTrace = 0;
  }
  else
  {
    __asm { vucomiss xmm3, xmm0 }
    this->m_localData->shapeTrace = 1;
  }
}

/*
==============
BgTrace::InitShapeCast
==============
*/
void BgTrace::InitShapeCast(BgTrace *this)
{
  hkMonitorStream *Value; 
  hkMonitorStream *v4; 
  bool v5; 
  BgTrace::BgTraceLocalData *m_localData; 
  unsigned int v7; 
  int v8; 
  BgTrace::BgTraceLocalData *v9; 
  __int64 v10; 
  BgPlayerTraceInfo *m_playerInfo; 
  const playerState_s *m_ps; 
  char *TraceShapeBuffers; 
  int m_flags; 
  PhysicsQuery_ContextSettings contextSettings; 
  __int64 v27; 
  hkMonitorStream *v28; 
  WorldUpReferenceFrame v29; 

  v27 = -2i64;
  if ( !this->m_localData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_trace.cpp", 90, ASSERT_TYPE_ASSERT, "(m_localData)", (const char *)&queryFormat, "m_localData") )
    __debugbreak();
  Value = (hkMonitorStream *)TlsGetValue(hkMonitorStream__m_instance.m_slotID);
  v4 = Value;
  if ( Value )
    hkMonitorStream::timerBegin(Value, "TtLegacyQuery: PhysicsQuery_LegacyCapsuleTrace");
  v28 = v4;
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
  v5 = Physics_IsPredictiveWorld(this->m_worldId) && !Sys_IsMainThread();
  this->m_localData->lockWorld = v5;
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
  v7 = 0;
  v8 = 0;
  v9 = this->m_localData;
  if ( v9->ignoreListCount > 0 )
  {
    v10 = 0i64;
    do
    {
      PhysicsQuery_AddEntityChainToIgnoreList(this->m_localData->ignoreList[v10], this->m_localData->ignoreBodies, 1, 1, 0, 1, 0);
      ++v8;
      ++v10;
      v9 = this->m_localData;
    }
    while ( v8 < v9->ignoreListCount );
  }
  if ( (this->m_flags & 0x20) != 0 )
  {
    HavokPhysics_IgnoreBodies::SetIgnoreRefs(v9->ignoreBodies, -2);
    v9 = this->m_localData;
  }
  if ( v9->shapeTrace )
  {
    _RBP = &v9->quaternionRotation;
    m_playerInfo = (BgPlayerTraceInfo *)this->m_playerInfo;
    m_ps = m_playerInfo->m_ps;
    if ( m_ps && (this->m_flags & 2) == 0 )
    {
      _R14 = BgPlayerTraceInfo::GetRideMoverEntityInfo(m_playerInfo);
      if ( WorldUpReferenceFrame::HasValidWorldUpInPs(m_ps) )
      {
        WorldUpReferenceFrame::WorldUpReferenceFrame(&v29, m_ps, this->m_playerInfo->m_bgHandler);
        __asm
        {
          vmovss  xmm0, dword ptr cs:?quat_identity@@3Tvec4_t@@B; vec4_t const quat_identity
          vmovss  dword ptr [rbp+0], xmm0
          vmovss  xmm1, dword ptr cs:?quat_identity@@3Tvec4_t@@B+4; vec4_t const quat_identity
          vmovss  dword ptr [rbp+4], xmm1
          vmovss  xmm0, dword ptr cs:?quat_identity@@3Tvec4_t@@B+8; vec4_t const quat_identity
          vmovss  dword ptr [rbp+8], xmm0
          vmovss  xmm1, dword ptr cs:?quat_identity@@3Tvec4_t@@B+0Ch; vec4_t const quat_identity
          vmovss  dword ptr [rbp+0Ch], xmm1
        }
        WorldUpReferenceFrame::ApplyReferenceFrameToQuat(&v29, _RBP);
LABEL_40:
        TraceShapeBuffers = GetTraceShapeBuffers(this->m_localData->legacyEntryId);
        contextSettings.m_flags = 0;
        m_flags = this->m_flags;
        if ( (m_flags & 0x40) != 0 )
        {
          contextSettings.m_flags = 1;
          v7 = 1;
        }
        if ( (m_flags & 0x80) != 0 )
        {
          v7 |= 2u;
          contextSettings.m_flags = v7;
        }
        if ( (m_flags & 0x100) != 0 )
        {
          v7 |= 8u;
          contextSettings.m_flags = v7;
        }
        if ( (m_flags & 0x200) != 0 )
        {
          v7 |= 0x10u;
          contextSettings.m_flags = v7;
        }
        if ( (m_flags & 2) != 0 )
          contextSettings.m_flags = v7 | 0x20;
        if ( Com_GameMode_SupportsFeature(WEAPON_RAISING_ALTSWITCH_ADS|0x100) )
          contextSettings.m_flags |= 4;
        this->m_localData->baseShapeNeedsRelease = PhysicsQuery_LegacyTraceCreateShape(this->m_worldId, this->m_playerInfo->m_ps, this->m_localData->bounds, 0, TraceShapeBuffers, (this->m_flags & 2) != 0, &this->m_localData->shape, &this->m_localData->nonBrushShape, &this->m_localData->paddedShape, &contextSettings);
        goto LABEL_53;
      }
      if ( _R14 )
      {
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vucomiss xmm0, dword ptr [r14+1Ch]
        }
        BGMovingPlatforms::GetBestPlatformUp(m_ps, &_R14->angles, NULL, _RBP);
        goto LABEL_40;
      }
    }
    __asm
    {
      vmovss  xmm0, dword ptr cs:?quat_identity@@3Tvec4_t@@B; vec4_t const quat_identity
      vmovss  dword ptr [rbp+0], xmm0
      vmovss  xmm1, dword ptr cs:?quat_identity@@3Tvec4_t@@B+4; vec4_t const quat_identity
      vmovss  dword ptr [rbp+4], xmm1
      vmovss  xmm0, dword ptr cs:?quat_identity@@3Tvec4_t@@B+8; vec4_t const quat_identity
      vmovss  dword ptr [rbp+8], xmm0
      vmovss  xmm1, dword ptr cs:?quat_identity@@3Tvec4_t@@B+0Ch; vec4_t const quat_identity
      vmovss  dword ptr [rbp+0Ch], xmm1
    }
    goto LABEL_40;
  }
LABEL_53:
  if ( v4 )
    hkMonitorStream::timerEnd(v4, "Et");
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
  unsigned int v16; 
  PhysicsQuery_ContextSettings traceContext; 
  BgTrace v18; 

  v9 = DCONST_DVARBOOL_useBgTraceSystem;
  _RDI = this;
  if ( !DCONST_DVARBOOL_useBgTraceSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "useBgTraceSystem") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v9);
  if ( v9->current.enabled )
  {
    __asm
    {
      vmovups ymm0, ymmword ptr [rdi]
      vmovups ymmword ptr [rsp+98h+var_30.baseclass_0.m_worldId], ymm0
    }
    v18.m_ignoreEnt = passEntityNum;
    BgTrace::PerformPlayerTrace(&v18, bounds, start, end, outResults);
  }
  else
  {
    m_flags = _RDI->m_flags;
    traceContext.m_flags = 0;
    v16 = 0;
    if ( (m_flags & 0x40) != 0 )
    {
      v16 = 1;
      traceContext.m_flags = 1;
    }
    if ( (m_flags & 0x80) != 0 )
    {
      v16 |= 2u;
      traceContext.m_flags = v16;
    }
    if ( (m_flags & 0x100) != 0 )
    {
      v16 |= 8u;
      traceContext.m_flags = v16;
    }
    if ( (m_flags & 0x200) != 0 )
    {
      v16 |= 0x10u;
      traceContext.m_flags = v16;
    }
    if ( (m_flags & 2) != 0 )
      traceContext.m_flags = v16 | 0x20;
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
  unsigned int v18; 
  PhysicsQuery_ContextSettings traceContext; 
  BgTrace v20; 

  v11 = DCONST_DVARBOOL_useBgTraceSystem;
  _RDI = this;
  if ( !DCONST_DVARBOOL_useBgTraceSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "useBgTraceSystem") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v11);
  if ( v11->current.enabled )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_trace.cpp", 662, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "This a code path that is no longer supported.") )
      __debugbreak();
    __asm
    {
      vmovups ymm0, ymmword ptr [rdi]
      vmovups ymmword ptr [rsp+98h+var_30.baseclass_0.m_worldId], ymm0
    }
    v20.m_ignoreEnt = passEntityNum;
    BgTrace::PerformPlayerTrace(&v20, bounds, start, end, outResults);
  }
  else
  {
    m_flags = _RDI->m_flags;
    v18 = 0;
    traceContext.m_flags = 0;
    if ( (m_flags & 0x40) != 0 )
    {
      v18 = 1;
      traceContext.m_flags = 1;
    }
    if ( (m_flags & 0x80) != 0 )
    {
      v18 |= 2u;
      traceContext.m_flags = v18;
    }
    if ( (m_flags & 0x100) != 0 )
    {
      v18 |= 8u;
      traceContext.m_flags = v18;
    }
    if ( (m_flags & 0x200) != 0 )
    {
      v18 |= 0x10u;
      traceContext.m_flags = v18;
    }
    if ( (m_flags & 2) != 0 )
      traceContext.m_flags = v18 | 0x20;
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
  BgTrace v14; 

  v8 = DCONST_DVARBOOL_useBgTraceSystem;
  _R14 = this;
  if ( !DCONST_DVARBOOL_useBgTraceSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "useBgTraceSystem") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v8);
  if ( v8->current.enabled )
  {
    __asm
    {
      vmovups ymm0, ymmword ptr [r14]
      vmovups ymmword ptr [rsp+68h+var_28.baseclass_0.m_worldId], ymm0
    }
    v14.m_ignoreEnt = passEntityNum;
    BgTrace::PerformPlayerTrace(&v14, bounds, start, end, results);
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
  unsigned int v16; 
  PhysicsQuery_ContextSettings traceContext; 
  BgTrace v18; 

  v9 = DCONST_DVARBOOL_useBgTraceSystem;
  _RDI = this;
  if ( !DCONST_DVARBOOL_useBgTraceSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "useBgTraceSystem") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v9);
  if ( v9->current.enabled )
  {
    __asm
    {
      vmovups ymm0, ymmword ptr [rdi]
      vmovups ymmword ptr [rsp+88h+var_30.baseclass_0.m_worldId], ymm0
    }
    v18.m_ignoreEnt = passEntityNum;
    BgTrace::PerformPlayerTrace(&v18, bounds, start, end, results);
  }
  else
  {
    m_flags = _RDI->m_flags;
    v16 = 0;
    traceContext.m_flags = 0;
    if ( (m_flags & 0x40) != 0 )
    {
      v16 = 1;
      traceContext.m_flags = 1;
    }
    if ( (m_flags & 0x80) != 0 )
    {
      v16 |= 2u;
      traceContext.m_flags = v16;
    }
    if ( (m_flags & 0x100) != 0 )
    {
      v16 |= 8u;
      traceContext.m_flags = v16;
    }
    if ( (m_flags & 0x200) != 0 )
    {
      v16 |= 0x10u;
      traceContext.m_flags = v16;
    }
    if ( (m_flags & 2) != 0 )
      traceContext.m_flags = v16 | 0x20;
    if ( Com_GameMode_SupportsFeature(WEAPON_RAISING_ALTSWITCH_ADS|0x100) )
      traceContext.m_flags |= 4;
    PM_traceHandler(_RDI->m_playerInfo, worldId, results, start, end, bounds, passEntityNum, contentMask, ps, &traceContext);
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
  bool HasHit; 
  float v16; 
  Physics_GetClosestPointsExtendedData extendedData; 

  if ( results->startsolid )
  {
    extendedData.simplify = 0;
    extendedData.ignoreBodies = NULL;
    __asm
    {
      vmovaps [rsp+98h+var_28], xmm6
      vxorps  xmm6, xmm6, xmm6
      vmovss  [rsp+98h+var_58.collisionBuffer], xmm6
    }
    extendedData.nonBrushShape = NULL;
    extendedData.phaseSelection = All;
    extendedData.contents = this->m_traceMask;
    extendedData.nonBrushShape = this->m_localData->nonBrushShape;
    HavokPhysics_CollisionQueryResult::Reset(queryResult, 1);
    m_localData = this->m_localData;
    shape = m_localData->shape;
    ShapecastHitBodyId = HavokPhysics_CollisionQueryResult::GetShapecastHitBodyId(traceResult, 0);
    __asm { vmovss  [rsp+98h+var_70], xmm6 }
    Physics_GetClosestPoints(this->m_worldId, ShapecastHitBodyId, shape, end, &m_localData->quaternionRotation, v16, &extendedData, queryResult);
    HasHit = HavokPhysics_CollisionQueryResult::HasHit(queryResult);
    __asm { vmovaps xmm6, [rsp+98h+var_28] }
    if ( HasHit )
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
  _RAX = &playerInfo->BgTraceBase;
  if ( !playerInfo )
    _RAX = NULL;
  __asm
  {
    vmovups xmm0, xmmword ptr [rax]
    vmovups xmmword ptr [rcx], xmm0
  }
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
  _RDX = pm->m_trace;
  _RAX = &v20->BgTraceBase;
  if ( !v20 )
    _RAX = NULL;
  __asm { vmovups xmm0, xmmword ptr [rax] }
  _RDX->m_localData = NULL;
  _RDX->m_playerInfo = v20;
  __asm { vmovups xmmword ptr [rdx], xmm0 }
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
  unsigned __int16 *p_entityIndex; 
  _DWORD *v; 
  unsigned int v28; 
  ntl::fixed_vector<BgTraceMoverInfo,5,0> *p_m_moverList; 
  int *v30; 
  __int64 v31; 
  const BgAntiLagEntityInfo *v32; 
  char *v33; 
  __int64 v34; 
  const BgAntiLagEntityInfo *v35; 
  playerState_s *ps; 
  __int64 v37; 
  int v38; 
  int v39; 
  int v40; 
  int v41; 
  int v42[3]; 
  int v43; 
  int v44; 
  const BgAntiLagEntityInfo *v45; 
  char v46[8]; 
  BgPlayerTraceInfo *v47; 
  pmove_t *v48; 
  __int64 v49; 
  float v50[128]; 
  int v51[128]; 

  v49 = -2i64;
  v4 = antilagMoverCount;
  v44 = antilagMoverCount;
  v5 = antilagList;
  v45 = antilagList;
  v48 = pm;
  v6 = this;
  v47 = this;
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
  v43 = m_movingPlatformEntity;
  v9 = 0;
  if ( (int)v4 > 0 )
  {
    _RBX = 0i64;
    p_entityIndex = &v5->entityIndex;
    do
    {
      v51[_RBX] = v9;
      if ( *p_entityIndex == m_movingPlatformEntity )
      {
        v50[_RBX] = 0.0;
      }
      else
      {
        v = (_DWORD *)v5[v9].origin.origin.v;
        if ( !v && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_antilag.h", 810, ASSERT_TYPE_ASSERT, "(antiLagentity)", (const char *)&queryFormat, "antiLagentity") )
          __debugbreak();
        LOWORD(v41) = (unsigned int)v >> 8;
        BYTE2(v41) = BYTE3(v);
        HIBYTE(v41) = (_BYTE)v;
        v42[1] = v[2] ^ *v ^ v41 ^ s_antilag_aab_Y;
        v42[2] = v[1] ^ v[2] ^ v41 ^ s_antilag_aab_Z;
        v42[0] = v[1] ^ v41 ^ ~s_antilag_aab_X;
        memset(v46, 0, sizeof(v46));
        __asm
        {
          vmovss  xmm0, [rsp+4D0h+var_480]
          vmovss  dword ptr [rsp+4D0h+var_490], xmm0
        }
        if ( (v38 & 0x7F800000) == 2139095040 )
          goto LABEL_42;
        __asm
        {
          vmovss  xmm0, [rsp+4D0h+var_47C]
          vmovss  dword ptr [rsp+4D0h+var_490], xmm0
        }
        if ( (v39 & 0x7F800000) == 2139095040 )
          goto LABEL_42;
        __asm
        {
          vmovss  xmm0, [rsp+4D0h+var_478]
          vmovss  dword ptr [rsp+4D0h+var_490], xmm0
        }
        if ( (v40 & 0x7F800000) == 2139095040 )
        {
LABEL_42:
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_antilag.h", 803, ASSERT_TYPE_SANITY, "( !IS_NAN( ( to )[0] ) && !IS_NAN( ( to )[1] ) && !IS_NAN( ( to )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( to )[0] ) && !IS_NAN( ( to )[1] ) && !IS_NAN( ( to )[2] )") )
            __debugbreak();
        }
        _RAX = v6->m_ps;
        __asm
        {
          vmovss  xmm0, dword ptr [rax+30h]
          vsubss  xmm3, xmm0, [rsp+4D0h+var_480]
          vmovss  xmm1, dword ptr [rax+34h]
          vsubss  xmm2, xmm1, [rsp+4D0h+var_47C]
          vmovss  xmm0, dword ptr [rax+38h]
          vsubss  xmm4, xmm0, [rsp+4D0h+var_478]
          vmulss  xmm2, xmm2, xmm2
          vmulss  xmm1, xmm3, xmm3
          vaddss  xmm3, xmm2, xmm1
          vmulss  xmm0, xmm4, xmm4
          vaddss  xmm2, xmm3, xmm0
          vmovss  [rbp+rbx*4+3D0h+var_440], xmm2
        }
        memset(v42, 0, sizeof(v42));
        m_movingPlatformEntity = v43;
        v5 = v45;
      }
      ++v9;
      ++_RBX;
      p_entityIndex += 70;
    }
    while ( _RBX < v4 );
    LODWORD(v4) = v44;
  }
  v6->SortMoverList(v6, v4, v51, v50);
  v28 = 5;
  if ( (int)v4 < 5 )
    v28 = v4;
  if ( v28 )
  {
    p_m_moverList = &v6->m_moverList;
    v30 = v51;
    v31 = v28;
    v32 = v45;
    do
    {
      if ( p_m_moverList->m_size >= 5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 180, ASSERT_TYPE_ASSERT, "( size() < max_size() )", (const char *)&queryFormat, "size() < max_size()") )
        __debugbreak();
      v33 = &p_m_moverList->m_data.m_buffer[52 * p_m_moverList->m_size];
      *(_QWORD *)v33 = 0i64;
      *((_QWORD *)v33 + 1) = 0i64;
      *((_QWORD *)v33 + 2) = 0i64;
      *((_QWORD *)v33 + 3) = 0i64;
      *((_QWORD *)v33 + 4) = 0i64;
      *((_QWORD *)v33 + 5) = 0i64;
      *((_DWORD *)v33 + 12) = 0;
      ++p_m_moverList->m_size;
      v34 = *v30;
      if ( (unsigned int)v34 >= (unsigned int)v4 )
      {
        LODWORD(v37) = v4;
        LODWORD(ps) = *v30;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_trace.cpp", 559, ASSERT_TYPE_ASSERT, "(unsigned)( antilagListIndex ) < (unsigned)( antilagMoverCount )", "antilagListIndex doesn't index antilagMoverCount\n\t%i not in [0, %i)", ps, v37) )
          __debugbreak();
      }
      v35 = &v32[v34];
      *(_DWORD *)v33 = v35->entityIndex;
      BgAntiLagEntity_GetOrigin(v35, (vec3_t *)(v33 + 4));
      *((_DWORD *)v33 + 4) = LODWORD(v35->angles.v[0]);
      *((_DWORD *)v33 + 5) = LODWORD(v35->angles.v[1]);
      *((_DWORD *)v33 + 6) = LODWORD(v35->angles.v[2]);
      *((_DWORD *)v33 + 7) = LODWORD(v35->velocity.v[0]);
      *((_DWORD *)v33 + 8) = LODWORD(v35->velocity.v[1]);
      *((_DWORD *)v33 + 9) = LODWORD(v35->velocity.v[2]);
      *((_DWORD *)v33 + 10) = LODWORD(v35->angVelocity.v[0]);
      *((_DWORD *)v33 + 11) = LODWORD(v35->angVelocity.v[1]);
      *((_DWORD *)v33 + 12) = LODWORD(v35->angVelocity.v[2]);
      ++v30;
      --v31;
    }
    while ( v31 );
    v6 = v47;
  }
  BgPlayerTraceInfo::SetRideMover(v6, v48->antiLag, v48->cmd.serverTime, v6->m_ps->movingPlatforms.m_movingPlatformEntity, v48->m_bgHandler, v48->ps);
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
        _RBX = &v16->m_data.m_buffer[52 * v18];
      }
      else
      {
        if ( this->m_moverList.m_size >= 5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 180, ASSERT_TYPE_ASSERT, "( size() < max_size() )", (const char *)&queryFormat, "size() < max_size()") )
          __debugbreak();
        _RBX = &v16->m_data.m_buffer[52 * this->m_moverList.m_size];
        *(_QWORD *)_RBX = 0i64;
        *((_QWORD *)_RBX + 1) = 0i64;
        *((_QWORD *)_RBX + 2) = 0i64;
        *((_QWORD *)_RBX + 3) = 0i64;
        *((_QWORD *)_RBX + 4) = 0i64;
        *((_QWORD *)_RBX + 5) = 0i64;
        *((_DWORD *)_RBX + 12) = 0;
        ++this->m_moverList.m_size;
      }
      if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_trace.cpp", 497, ASSERT_TYPE_ASSERT, "(back)", (const char *)&queryFormat, "back") )
        __debugbreak();
      *(_DWORD *)_RBX = outInfo.entityIndex;
      BgAntiLagEntity_GetOrigin(&outInfo, (vec3_t *)(_RBX + 4));
      __asm
      {
        vmovss  xmm0, dword ptr [rsp+148h+var_E8.baseclass_0.angles]
        vmovss  dword ptr [rbx+10h], xmm0
        vmovss  xmm1, dword ptr [rsp+148h+var_E8.baseclass_0.angles+4]
        vmovss  dword ptr [rbx+14h], xmm1
        vmovss  xmm0, dword ptr [rsp+148h+var_E8.baseclass_0.angles+8]
        vmovss  dword ptr [rbx+18h], xmm0
        vmovss  xmm1, dword ptr [rsp+148h+var_E8.velocity]
        vmovss  dword ptr [rbx+1Ch], xmm1
        vmovss  xmm0, dword ptr [rsp+148h+var_E8.velocity+4]
        vmovss  dword ptr [rbx+20h], xmm0
        vmovss  xmm1, dword ptr [rsp+148h+var_E8.velocity+8]
        vmovss  dword ptr [rbx+24h], xmm1
        vmovss  xmm0, dword ptr [rsp+148h+var_E8.angVelocity]
        vmovss  dword ptr [rbx+28h], xmm0
        vmovss  xmm1, dword ptr [rsp+148h+var_E8.angVelocity+4]
        vmovss  dword ptr [rbx+2Ch], xmm1
        vmovss  xmm0, dword ptr [rsp+148h+var_E8.angVelocity+8]
        vmovss  dword ptr [rbx+30h], xmm0
      }
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
    _RDX = pm->m_trace;
    _RAX = &m_playerTraceInfo->BgTraceBase;
    if ( !m_playerTraceInfo )
      _RAX = NULL;
    __asm
    {
      vmovups xmm0, xmmword ptr [rax]
      vmovups xmmword ptr [rdx], xmm0
    }
    _RDX->m_playerInfo = m_playerTraceInfo;
    _RDX->m_localData = NULL;
  }
}


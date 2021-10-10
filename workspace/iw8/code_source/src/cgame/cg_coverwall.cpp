/*
==============
CG_CoverWall_GetCoverGrid
==============
*/

const unsigned int *__fastcall CG_CoverWall_GetCoverGrid(const centity_t *cent)
{
  return ?CG_CoverWall_GetCoverGrid@@YAPEBIPEBUcentity_t@@@Z(cent);
}

/*
==============
CG_CoverWall_ResetEntity
==============
*/

void __fastcall CG_CoverWall_ResetEntity(const LocalClientNum_t localClientNum, centity_t *cent)
{
  ?CG_CoverWall_ResetEntity@@YAXW4LocalClientNum_t@@PEAUcentity_t@@@Z(localClientNum, cent);
}

/*
==============
CG_CoverWall_Init
==============
*/

void __fastcall CG_CoverWall_Init(const LocalClientNum_t localClientNum, centity_t *cent)
{
  ?CG_CoverWall_Init@@YAXW4LocalClientNum_t@@PEAUcentity_t@@@Z(localClientNum, cent);
}

/*
==============
CG_CoverWall_ProcessEntity
==============
*/

void __fastcall CG_CoverWall_ProcessEntity(const LocalClientNum_t localClientNum, centity_t *cent)
{
  ?CG_CoverWall_ProcessEntity@@YAXW4LocalClientNum_t@@PEAUcentity_t@@@Z(localClientNum, cent);
}

/*
==============
CG_CoverWall_InitSystem
==============
*/

void CG_CoverWall_InitSystem(void)
{
  ?CG_CoverWall_InitSystem@@YAXXZ();
}

/*
==============
CG_CoverWall_InitStaticData
==============
*/

void __fastcall CG_CoverWall_InitStaticData(const LocalClientNum_t localClientNum, centity_t *cent)
{
  ?CG_CoverWall_InitStaticData@@YAXW4LocalClientNum_t@@PEAUcentity_t@@@Z(localClientNum, cent);
}

/*
==============
CG_CoverWall_FreeStaticData
==============
*/

void __fastcall CG_CoverWall_FreeStaticData(const LocalClientNum_t localClientNum, centity_t *cent)
{
  ?CG_CoverWall_FreeStaticData@@YAXW4LocalClientNum_t@@PEAUcentity_t@@@Z(localClientNum, cent);
}

/*
==============
CG_CoverWall_ShutdownEntity
==============
*/

void __fastcall CG_CoverWall_ShutdownEntity(const LocalClientNum_t localClientNum, centity_t *cent)
{
  ?CG_CoverWall_ShutdownEntity@@YAXW4LocalClientNum_t@@PEAUcentity_t@@@Z(localClientNum, cent);
}

/*
==============
CG_CoverWall_GetPreviousCoverGrid
==============
*/

const unsigned int *__fastcall CG_CoverWall_GetPreviousCoverGrid(const centity_t *cent)
{
  return ?CG_CoverWall_GetPreviousCoverGrid@@YAPEBIPEBUcentity_t@@@Z(cent);
}

/*
==============
CG_CoverWall_FreeStaticData
==============
*/
void CG_CoverWall_FreeStaticData(const LocalClientNum_t localClientNum, centity_t *cent)
{
  CG_CoverWall_t *CoverData; 

  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_coverwall.cpp", 116, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  CoverData = CG_CoverWall_GetCoverData(localClientNum, cent);
  if ( !CoverData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_coverwall.cpp", 119, ASSERT_TYPE_ASSERT, "(coverwall)", (const char *)&queryFormat, "coverwall") )
    __debugbreak();
  memset_0(CoverData, 0, sizeof(CG_CoverWall_t));
}

/*
==============
CG_CoverWall_GetCoverData
==============
*/
CG_CoverWall_t *CG_CoverWall_GetCoverData(const LocalClientNum_t localClientNum, const centity_t *cent)
{
  __int64 v2; 
  int v4; 
  CG_CoverWall_t *i; 
  __int64 v7; 

  v2 = localClientNum;
  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_coverwall.cpp", 54, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  v4 = 0;
  for ( i = s_coverWalls[v2]; i->cent != cent; ++i )
  {
    if ( (unsigned int)++v4 >= 0x10 )
      return 0i64;
  }
  if ( (unsigned int)v2 >= 2 )
  {
    LODWORD(v7) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_coverwall.cpp", 47, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v7, 2) )
      __debugbreak();
  }
  return &s_coverWalls[v2][v4];
}

/*
==============
CG_CoverWall_GetCoverDataFromIdx
==============
*/
CG_CoverWall_t *CG_CoverWall_GetCoverDataFromIdx(const LocalClientNum_t localClientNum, unsigned int idx)
{
  __int64 v2; 
  __int64 v3; 
  __int64 v5; 
  int v6; 

  v2 = idx;
  v3 = localClientNum;
  if ( idx >= 0x10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_coverwall.cpp", 46, ASSERT_TYPE_ASSERT, "(idx < 16)", (const char *)&queryFormat, "idx < COVERWALL_MAX_NUM") )
    __debugbreak();
  if ( (unsigned int)v3 >= 2 )
  {
    v6 = 2;
    LODWORD(v5) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_coverwall.cpp", 47, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v5, v6) )
      __debugbreak();
  }
  return &s_coverWalls[v3][v2];
}

/*
==============
CG_CoverWall_GetCoverGrid
==============
*/
LerpEntityStateTypeUnion *CG_CoverWall_GetCoverGrid(const centity_t *cent)
{
  if ( cent )
    return &cent->nextState.lerp.u;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_coverwall.cpp", 590, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  return (LerpEntityStateTypeUnion *)488;
}

/*
==============
CG_CoverWall_GetPreviousCoverGrid
==============
*/
LerpEntityStateTypeUnion *CG_CoverWall_GetPreviousCoverGrid(const centity_t *cent)
{
  if ( cent )
    return &cent->prevState.u;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_coverwall.cpp", 597, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  return (LerpEntityStateTypeUnion *)364;
}

/*
==============
CG_CoverWall_Init
==============
*/
void CG_CoverWall_Init(const LocalClientNum_t localClientNum, centity_t *cent)
{
  __int64 v2; 
  unsigned int v4; 
  CG_CoverWall_t *v5; 
  CG_CoverWall_t *CoverDataFromIdx; 

  v2 = localClientNum;
  if ( !CG_CoverWall_GetCoverData(localClientNum, cent) )
  {
    if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_coverwall.cpp", 90, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
      __debugbreak();
    v4 = 0;
    v5 = s_coverWalls[v2];
    while ( v5->cent )
    {
      ++v4;
      ++v5;
      if ( v4 >= 0x10 )
        goto LABEL_19;
    }
    CoverDataFromIdx = CG_CoverWall_GetCoverDataFromIdx((const LocalClientNum_t)v2, v4);
    memset_0(CoverDataFromIdx, 0, sizeof(CG_CoverWall_t));
    if ( !CoverDataFromIdx && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_coverwall.cpp", 100, ASSERT_TYPE_ASSERT, "(coverWall)", (const char *)&queryFormat, "coverWall") )
      __debugbreak();
    if ( CoverDataFromIdx->cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_coverwall.cpp", 101, ASSERT_TYPE_ASSERT, "(coverWall->cent == 0)", (const char *)&queryFormat, "coverWall->cent == NULL") )
      __debugbreak();
    if ( CoverDataFromIdx->morphedThisFrame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_coverwall.cpp", 102, ASSERT_TYPE_ASSERT, "(coverWall->morphedThisFrame == false)", (const char *)&queryFormat, "coverWall->morphedThisFrame == false") )
      __debugbreak();
    CoverDataFromIdx->cent = cent;
    CoverDataFromIdx->morphedThisFrame = 0;
LABEL_19:
    BG_CoverWall_SetGridPos((unsigned int *)&cent->prevState.u, 0, 0, 0, 0);
    CG_CoverWall_PushNearbyRagdolls((const LocalClientNum_t)v2, cent, 1);
  }
}

/*
==============
CG_CoverWall_InitStaticData
==============
*/
void CG_CoverWall_InitStaticData(const LocalClientNum_t localClientNum, centity_t *cent)
{
  __int64 v2; 
  unsigned int v4; 
  CG_CoverWall_t *i; 
  CG_CoverWall_t *CoverDataFromIdx; 

  v2 = localClientNum;
  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_coverwall.cpp", 90, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  v4 = 0;
  for ( i = s_coverWalls[v2]; i->cent; ++i )
  {
    if ( ++v4 >= 0x10 )
      return;
  }
  CoverDataFromIdx = CG_CoverWall_GetCoverDataFromIdx((const LocalClientNum_t)v2, v4);
  memset_0(CoverDataFromIdx, 0, sizeof(CG_CoverWall_t));
  if ( !CoverDataFromIdx && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_coverwall.cpp", 100, ASSERT_TYPE_ASSERT, "(coverWall)", (const char *)&queryFormat, "coverWall") )
    __debugbreak();
  if ( CoverDataFromIdx->cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_coverwall.cpp", 101, ASSERT_TYPE_ASSERT, "(coverWall->cent == 0)", (const char *)&queryFormat, "coverWall->cent == NULL") )
    __debugbreak();
  if ( CoverDataFromIdx->morphedThisFrame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_coverwall.cpp", 102, ASSERT_TYPE_ASSERT, "(coverWall->morphedThisFrame == false)", (const char *)&queryFormat, "coverWall->morphedThisFrame == false") )
    __debugbreak();
  CoverDataFromIdx->cent = cent;
  CoverDataFromIdx->morphedThisFrame = 0;
}

/*
==============
CG_CoverWall_InitSystem
==============
*/
void CG_CoverWall_InitSystem(void)
{
  memset_0(s_coverWalls, 0, sizeof(s_coverWalls));
}

/*
==============
CG_CoverWall_ProcessEntity
==============
*/
void CG_CoverWall_ProcessEntity(const LocalClientNum_t localClientNum, centity_t *cent)
{
  CG_CoverWall_t *CoverData; 
  int time2; 
  CgEntitySystem *EntitySystem; 
  DObj *DObj_General; 
  const unsigned int *CoverGrid; 
  const unsigned int *PreviousCoverGrid; 
  int time; 
  CG_CoverWall_t *v11; 
  int v12; 
  int v13; 
  int v14; 
  __int64 v15; 
  GfxSceneHudOutlineInfo *HudOutlineInfo; 
  unsigned int number; 
  __m256i v18; 
  DObj *obj; 
  cg_t *cgameGlob; 
  GfxSceneHudOutlineInfo result; 
  GfxSceneHudOutlineInfo v24; 
  vec3_t outLightingOrigin; 

  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_coverwall.cpp", 516, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( (cent->flags & 1) != 0 )
  {
    cgameGlob = CG_GetLocalClientGlobals(localClientNum);
    if ( !cgameGlob && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_coverwall.cpp", 521, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
      __debugbreak();
    if ( cent == (centity_t *)-400i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_coverwall.cpp", 524, ASSERT_TYPE_ASSERT, "(ns)", (const char *)&queryFormat, "ns") )
      __debugbreak();
    CoverData = CG_CoverWall_GetCoverData(localClientNum, cent);
    if ( !CoverData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_coverwall.cpp", 266, ASSERT_TYPE_ASSERT, "(coverWall)", (const char *)&queryFormat, "coverWall") )
      __debugbreak();
    if ( (cent->nextState.lerp.u.actor.clothType & 1) != 0 && CoverData->morphedThisFrame )
      CG_CoverWall_PushNearbyRagdolls(localClientNum, cent, 0);
    time2 = cent->nextState.time2;
    if ( CG_GetLocalClientGlobals(localClientNum)->time - time2 >= 180 )
    {
      if ( CG_PhysicsCoverWall_IsRegistered(localClientNum, cent) )
        CG_PhysicsCoverWall_UpdateCoverWall(localClientNum, cent);
      else
        CG_PhysicsCoverWall_AddCoverWall(localClientNum, cent);
    }
    EntitySystem = CgEntitySystem::GetEntitySystem(localClientNum);
    if ( EntitySystem->IsMP(EntitySystem) )
      DObj_General = CgEntitySystemMP::GetDObj_General((CgEntitySystemMP *)EntitySystem, cent, NULL);
    else
      DObj_General = Com_GetClientDObj(cent->nextState.number, EntitySystem->m_localClientNum);
    obj = DObj_General;
    if ( DObj_General )
    {
      CoverGrid = CG_CoverWall_GetCoverGrid(cent);
      PreviousCoverGrid = CG_CoverWall_GetPreviousCoverGrid(cent);
      time = CG_GetLocalClientGlobals(localClientNum)->time;
      v11 = CG_CoverWall_GetCoverData(localClientNum, cent);
      v11->morphedThisFrame = 0;
      if ( memcmp_0(CoverGrid, PreviousCoverGrid, 0x1Cui64) )
        v11->morphedThisFrame = 1;
      v12 = -4;
      do
      {
        v13 = -6;
        do
        {
          v14 = BG_CoverWall_GridPosToDataArrayIndex(v13, 0, v12);
          v15 = v14;
          if ( v14 >= 224 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_coverwall.cpp", 298, ASSERT_TYPE_ASSERT, "(idx < (32 * 7))", (const char *)&queryFormat, "idx < (32 * COVERWALL_GRID_ARRAY_SIZE)") )
            __debugbreak();
          if ( BG_CoverWall_GetGridPos(CoverGrid, v13, 0, v12) && !v11->spawnGrid[v15] )
          {
            v11->spawnGrid[v15] = time;
            v11->morphedThisFrame = 1;
          }
          ++v13;
        }
        while ( v13 <= 6 );
        ++v12;
      }
      while ( v12 <= 9 );
      CG_CoverWall_SpawnCoverBlockFx(localClientNum, cent);
      CG_CoverWall_UpdatePreControllers(localClientNum, obj, cent);
      CG_Entity_CalcLightingOrigin(&cent->pose, obj, &outLightingOrigin);
      HudOutlineInfo = CG_Entity_GetHudOutlineInfo(&result, cgameGlob, cent);
      number = cent->nextState.number;
      v18 = *(__m256i *)&HudOutlineInfo->color;
      v24.characterEVOffset = HudOutlineInfo->characterEVOffset;
      *(__m256i *)&v24.color = v18;
      memset(&result, 0, sizeof(result));
      CG_Entity_AddDObjToScene(localClientNum, obj, &cent->pose, number, 0x1000u, (shaderOverride_t *)&result, &v24, &outLightingOrigin, 0.0, 0);
    }
  }
}

/*
==============
CG_CoverWall_PushNearbyRagdolls
==============
*/
void CG_CoverWall_PushNearbyRagdolls(const LocalClientNum_t localClientNum, centity_t *cent, bool isInitialPush)
{
  __int32 v5; 
  hkMonitorStream *Value; 
  hkMonitorStream *v7; 
  const dvar_t *v8; 
  float v9; 
  const dvar_t *v10; 
  float v11; 
  const dvar_t *v12; 
  float v13; 
  const dvar_t *v14; 
  float v15; 
  __int64 v16; 
  int v21; 
  unsigned int *p_physicsInstanceId; 
  float v23; 
  Ragdoll *Ragdoll; 
  int v25; 
  int v26; 
  const BoneOrientation *PhysicsPoseBoneOrientations; 
  int NumRigidBodys; 
  __int64 v29; 
  unsigned int v30; 
  float *v31; 
  LocalClientNum_t v32; 
  unsigned int v33; 
  unsigned int m_serialAndIndex; 
  float v35; 
  float v36; 
  __int128 v37; 
  __int128 v38; 
  __int128 v39; 
  float v40; 
  __int128 v41; 
  CgHandler *Handler; 
  __int128 v46; 
  __int64 v50; 
  __int64 v51; 
  float mass; 
  LocalClientNum_t _localClientNum; 
  int v54; 
  vec3_t outOrigin; 
  hknpBodyId result; 
  cg_t *LocalClientGlobals; 
  __int64 v58; 
  hkMonitorStream *v59; 
  __int64 v60; 
  hkMonitorStream *v61; 
  vec3_t vec; 
  vec3_t position; 
  WorldUpReferenceFrame v64; 

  v60 = -2i64;
  v5 = localClientNum;
  _localClientNum = localClientNum;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_coverwall.cpp", 154, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  Value = (hkMonitorStream *)TlsGetValue(hkMonitorStream__m_instance.m_slotID);
  v7 = Value;
  v59 = Value;
  if ( Value )
    hkMonitorStream::timerBegin(Value, "TtCG_PhysicsCoverWall_PushRagdolls");
  v61 = v7;
  Sys_ProfBeginNamedEvent(0xFFE0FFFF, "CG_CoverWall_PushNearbyRagdolls");
  CG_GetPoseOrigin(&cent->pose, &outOrigin);
  CG_EntityWorkers_EnterCriticalSection_Unverified();
  if ( ragdoll_enable->current.enabled )
  {
    v8 = DCONST_DVARMPSPFLT_g_coverWall_ragdollImpulseMag;
    if ( !DCONST_DVARMPSPFLT_g_coverWall_ragdollImpulseMag && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_coverWall_ragdollImpulseMag") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v8);
    v9 = v8->current.value;
    v10 = DCONST_DVARMPSPFLT_g_coverWall_ragdollDistCheck;
    if ( !DCONST_DVARMPSPFLT_g_coverWall_ragdollDistCheck && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_coverWall_ragdollDistCheck") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v10);
    v11 = v10->current.value;
    v12 = DCONST_DVARMPSPFLT_g_coverWall_ragdollDistCheck;
    if ( !DCONST_DVARMPSPFLT_g_coverWall_ragdollDistCheck && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_coverWall_ragdollDistCheck") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v12);
    v13 = v11 * v12->current.value;
    v14 = DCONST_DVARMPSPFLT_g_coverWall_ragdollImpulseUpContribution;
    if ( !DCONST_DVARMPSPFLT_g_coverWall_ragdollImpulseUpContribution && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_coverWall_ragdollImpulseUpContribution") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v14);
    v15 = v14->current.value;
    v16 = 0i64;
    _XMM0 = isInitialPush;
    __asm { vpcmpeqd xmm2, xmm0, xmm1 }
    _XMM0 = LODWORD(FLOAT_4_0);
    __asm { vblendvps xmm1, xmm0, xmm9, xmm2 }
    mass = *(float *)&_XMM1;
    vec.v[0] = 0.0;
    vec.v[1] = 0.0;
    vec.v[2] = 0.0;
    position.v[0] = 0.0;
    position.v[1] = 0.0;
    position.v[2] = 0.0;
    CG_EntityWorkers_AcquireWriteLock_Physics(NONE_UNVERIFIED);
    v21 = 1;
    v54 = 1;
    p_physicsInstanceId = &g_ragdollBodies[0].state.physicsInstanceId;
    v23 = *(float *)&_XMM1;
    do
    {
      if ( !v21 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.inl", 64, ASSERT_TYPE_ASSERT, "(ragdollHandle != 0)", (const char *)&queryFormat, "ragdollHandle != RAGDOLL_INVALID") )
        __debugbreak();
      if ( (unsigned int)(v21 - 1) >= 0x40 )
      {
        LODWORD(v51) = 64;
        LODWORD(v50) = v21 - 1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.inl", 65, ASSERT_TYPE_ASSERT, "(unsigned)( ragdollHandle - 1 ) < (unsigned)( 64 )", "ragdollHandle - 1 doesn't index RAGDOLL_MAX\n\t%i not in [0, %i)", v50, v51) )
          __debugbreak();
      }
      Ragdoll = Ragdoll_GetRagdoll(v21);
      if ( !Ragdoll && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.inl", 69, ASSERT_TYPE_ASSERT, "(ragdoll)", (const char *)&queryFormat, "ragdoll") )
        __debugbreak();
      if ( Ragdoll->allocated )
      {
        if ( !v21 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.inl", 19, ASSERT_TYPE_ASSERT, "(ragdollHandle != 0)", (const char *)&queryFormat, "ragdollHandle != RAGDOLL_INVALID") )
          __debugbreak();
        if ( (unsigned int)(v21 - 1) >= 0x40 )
        {
          LODWORD(v51) = 64;
          LODWORD(v50) = v21 - 1;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.inl", 20, ASSERT_TYPE_ASSERT, "(unsigned)( ragdollHandle - 1 ) < (unsigned)( 64 )", "ragdollHandle - 1 doesn't index RAGDOLL_MAX\n\t%i not in [0, %i)", v50, v51) )
            __debugbreak();
        }
        if ( p_physicsInstanceId == (unsigned int *)7344 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_coverwall.cpp", 193, ASSERT_TYPE_ASSERT, "(ragdoll)", (const char *)&queryFormat, "ragdoll") )
          __debugbreak();
        v25 = *(p_physicsInstanceId - 1826);
        if ( v25 == v5 && *p_physicsInstanceId != -1 )
        {
          v26 = 3 * v25 + 3;
          PhysicsPoseBoneOrientations = Ragdoll_GetPhysicsPoseBoneOrientations((const Ragdoll *)(p_physicsInstanceId - 1836));
          if ( !PhysicsPoseBoneOrientations && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_coverwall.cpp", 211, ASSERT_TYPE_ASSERT, "(boneOrientations)", (const char *)&queryFormat, "boneOrientations") )
            __debugbreak();
          NumRigidBodys = Physics_GetNumRigidBodys((const Physics_WorldId)v26, *p_physicsInstanceId);
          v29 = NumRigidBodys;
          if ( NumRigidBodys > 64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_coverwall.cpp", 215, ASSERT_TYPE_ASSERT, "(numBodies <= 64)", (const char *)&queryFormat, "numBodies <= RAGDOLL_MAX_BONES") )
            __debugbreak();
          if ( (_DWORD)v29 != *(p_physicsInstanceId - 1748) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_coverwall.cpp", 216, ASSERT_TYPE_ASSERT, "(numBodies == Ragdoll_GetNumBones( ragdoll ))", (const char *)&queryFormat, "numBodies == Ragdoll_GetNumBones( ragdoll )") )
            __debugbreak();
          v30 = 0;
          v58 = v29;
          if ( (int)v29 <= 0 )
          {
            v5 = _localClientNum;
          }
          else
          {
            v31 = &PhysicsPoseBoneOrientations->origin.v[2];
            v32 = _localClientNum;
            do
            {
              v33 = *p_physicsInstanceId;
              if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
                __debugbreak();
              if ( (unsigned int)v26 > 7 )
              {
                LODWORD(v51) = v26;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 106, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v51) )
                  __debugbreak();
              }
              if ( v33 == -1 )
              {
                LODWORD(v51) = v26;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 107, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid Instance in world %i", "instanceId != PHYSICSINSTANCEID_INVALID", v51) )
                  __debugbreak();
              }
              if ( !g_physicsClientWorldsCreated && (unsigned int)(v26 - 2) <= 5 )
              {
                LODWORD(v51) = v26;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 108, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v51) )
                  __debugbreak();
              }
              if ( !g_physicsServerWorldsCreated && (unsigned int)v26 <= 1 )
              {
                LODWORD(v51) = v26;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v51) )
                  __debugbreak();
              }
              m_serialAndIndex = HavokPhysics_GetRigidBodyID(&result, (const Physics_WorldId)v26, v33, v30)->m_serialAndIndex;
              if ( (m_serialAndIndex & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_coverwall.cpp", 222, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( authBodyId ))", (const char *)&queryFormat, "Physics_IsRigidBodyIdValid( authBodyId )") )
                __debugbreak();
              if ( v30 )
              {
                v40 = vec.v[2];
                v38 = LODWORD(vec.v[1]);
                v36 = vec.v[0];
              }
              else
              {
                v35 = *(v31 - 2);
                if ( (float)((float)((float)((float)(outOrigin.v[1] - *(v31 - 1)) * (float)(outOrigin.v[1] - *(v31 - 1))) + (float)((float)(outOrigin.v[0] - v35) * (float)(outOrigin.v[0] - v35))) + (float)((float)(outOrigin.v[2] - *v31) * (float)(outOrigin.v[2] - *v31))) > v13 )
                  break;
                v36 = v35 - outOrigin.v[0];
                vec.v[0] = v36;
                v37 = *((unsigned int *)v31 - 1);
                v39 = v37;
                *(float *)&v39 = *(float *)&v37 - outOrigin.v[1];
                v38 = v39;
                vec.v[1] = *(float *)&v37 - outOrigin.v[1];
                v40 = *v31 - outOrigin.v[2];
              }
              v41 = v38;
              *(float *)&v41 = fsqrt((float)((float)(*(float *)&v38 * *(float *)&v38) + (float)(v36 * v36)) + (float)(v40 * v40));
              _XMM3 = v41;
              __asm
              {
                vcmpless xmm0, xmm3, xmm11
                vblendvps xmm1, xmm3, xmm9, xmm0
              }
              vec.v[0] = v36 * (float)(1.0 / *(float *)&_XMM1);
              vec.v[1] = *(float *)&v38 * (float)(1.0 / *(float *)&_XMM1);
              vec.v[2] = v40 * (float)(1.0 / *(float *)&_XMM1);
              if ( v15 > 0.0 )
              {
                Handler = CgHandler::getHandler(v32);
                WorldUpReferenceFrame::WorldUpReferenceFrame(&v64, &LocalClientGlobals->predictedPlayerState, Handler);
                WorldUpReferenceFrame::AddUpContribution(&v64, v15, &vec);
                v46 = LODWORD(vec.v[1]);
                *(float *)&v46 = fsqrt((float)((float)(*(float *)&v46 * *(float *)&v46) + (float)(vec.v[0] * vec.v[0])) + (float)(vec.v[2] * vec.v[2]));
                _XMM3 = v46;
                __asm
                {
                  vcmpless xmm0, xmm3, xmm11
                  vblendvps xmm1, xmm3, xmm9, xmm0
                }
                vec.v[0] = vec.v[0] * (float)(1.0 / *(float *)&_XMM1);
                vec.v[1] = vec.v[1] * (float)(1.0 / *(float *)&_XMM1);
                vec.v[2] = vec.v[2] * (float)(1.0 / *(float *)&_XMM1);
              }
              position = *(vec3_t *)(v31 - 2);
              mass = 0.0;
              Physics_GetRigidBodyMass((Physics_WorldId)v26, m_serialAndIndex, &mass);
              Physics_ApplyImpulse((Physics_WorldId)v26, m_serialAndIndex, &position, &vec, (float)(v9 * mass) * v23);
              ++v30;
              ++v16;
              v31 += 7;
            }
            while ( v16 < v58 );
            v5 = v32;
          }
          v16 = 0i64;
          v21 = v54;
        }
      }
      v54 = ++v21;
      p_physicsInstanceId += 3529;
    }
    while ( v21 <= 64 );
    CG_EntityWorkers_ReleaseWriteLock_Physics(NONE_UNVERIFIED);
    v7 = v59;
  }
  CG_EntityWorkers_LeaveCriticalSection_Unverified();
  memset(&outOrigin, 0, sizeof(outOrigin));
  Sys_ProfEndNamedEvent();
  if ( v7 )
    hkMonitorStream::timerEnd(v7, "Et");
}

/*
==============
CG_CoverWall_ResetEntity
==============
*/
void CG_CoverWall_ResetEntity(const LocalClientNum_t localClientNum, centity_t *cent)
{
  __int64 v2; 
  unsigned int v4; 
  CG_CoverWall_t *v5; 
  CG_CoverWall_t *CoverDataFromIdx; 

  v2 = localClientNum;
  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_coverwall.cpp", 583, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( !CG_CoverWall_GetCoverData((const LocalClientNum_t)v2, cent) )
  {
    if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_coverwall.cpp", 90, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
      __debugbreak();
    v4 = 0;
    v5 = s_coverWalls[v2];
    while ( v5->cent )
    {
      ++v4;
      ++v5;
      if ( v4 >= 0x10 )
        goto LABEL_22;
    }
    CoverDataFromIdx = CG_CoverWall_GetCoverDataFromIdx((const LocalClientNum_t)v2, v4);
    memset_0(CoverDataFromIdx, 0, sizeof(CG_CoverWall_t));
    if ( !CoverDataFromIdx && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_coverwall.cpp", 100, ASSERT_TYPE_ASSERT, "(coverWall)", (const char *)&queryFormat, "coverWall") )
      __debugbreak();
    if ( CoverDataFromIdx->cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_coverwall.cpp", 101, ASSERT_TYPE_ASSERT, "(coverWall->cent == 0)", (const char *)&queryFormat, "coverWall->cent == NULL") )
      __debugbreak();
    if ( CoverDataFromIdx->morphedThisFrame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_coverwall.cpp", 102, ASSERT_TYPE_ASSERT, "(coverWall->morphedThisFrame == false)", (const char *)&queryFormat, "coverWall->morphedThisFrame == false") )
      __debugbreak();
    CoverDataFromIdx->cent = cent;
    CoverDataFromIdx->morphedThisFrame = 0;
LABEL_22:
    BG_CoverWall_SetGridPos((unsigned int *)&cent->prevState.u, 0, 0, 0, 0);
    CG_CoverWall_PushNearbyRagdolls((const LocalClientNum_t)v2, cent, 1);
  }
}

/*
==============
CG_CoverWall_ShutdownEntity
==============
*/
void CG_CoverWall_ShutdownEntity(const LocalClientNum_t localClientNum, centity_t *cent)
{
  CG_CoverWall_t *CoverData; 

  if ( CG_PhysicsCoverWall_IsRegistered(localClientNum, cent) )
    CG_PhysicsCoverWall_RemoveCoverWall(localClientNum, cent);
  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_coverwall.cpp", 116, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  CoverData = CG_CoverWall_GetCoverData(localClientNum, cent);
  if ( !CoverData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_coverwall.cpp", 119, ASSERT_TYPE_ASSERT, "(coverwall)", (const char *)&queryFormat, "coverwall") )
    __debugbreak();
  memset_0(CoverData, 0, sizeof(CG_CoverWall_t));
}

/*
==============
CG_CoverWall_SpawnCoverBlockFx
==============
*/
void CG_CoverWall_SpawnCoverBlockFx(const LocalClientNum_t localClientNum, centity_t *cent)
{
  CG_CoverWall_t *CoverData; 
  FXRegisteredDef *p_fxCoverBlockMelt; 
  FXRegisteredDef *p_fxCoverBlockSpawn; 
  int time; 
  double v8; 
  float v9; 
  const dvar_t *v10; 
  double v11; 
  float sagAmount; 
  int v13; 
  int v14; 
  __int64 v15; 
  const dvar_t *v16; 
  void (__fastcall *FunctionPointer_origin)(const vec4_t *, vec3_t *); 
  __int128 v21; 
  unsigned int *v31; 
  const dvar_t *v32; 
  float value; 
  double v34; 
  void (__fastcall *v35)(const vec4_t *, vec3_t *); 
  __int128 v39; 
  vec3_t origin; 
  vec3_t v51; 
  FXRegisteredDef *v52; 
  FXRegisteredDef *def; 
  unsigned int *grid; 
  unsigned int *CoverGrid; 
  __int64 v56; 
  vec3_t outWorldPos; 
  vec3_t outAngles; 
  vec3_t outNoise; 
  tmat33_t<vec3_t> axis; 
  tmat33_t<vec3_t> v61; 

  v56 = -2i64;
  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_coverwall.cpp", 311, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  CoverGrid = (unsigned int *)CG_CoverWall_GetCoverGrid(cent);
  grid = (unsigned int *)CG_CoverWall_GetPreviousCoverGrid(cent);
  CoverData = CG_CoverWall_GetCoverData(localClientNum, cent);
  if ( !CoverData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_coverwall.cpp", 317, ASSERT_TYPE_ASSERT, "(cg_coverWall)", (const char *)&queryFormat, "cg_coverWall") )
    __debugbreak();
  if ( CoverData->morphedThisFrame )
  {
    AnglesToAxis(&cent->pose.angles, &axis);
    if ( (cent->nextState.lerp.u.anonymous.data[7] & 2) != 0 && cgMedia.fxCoverBlockMelt.m_particleSystemDef )
    {
      p_fxCoverBlockMelt = &cgMedia.fxCoverBlockMelt;
    }
    else
    {
      p_fxCoverBlockMelt = &cgMedia.fxCoverBlockExplode;
      if ( !cgMedia.fxCoverBlockExplode.m_particleSystemDef )
        p_fxCoverBlockMelt = NULL;
    }
    v52 = p_fxCoverBlockMelt;
    p_fxCoverBlockSpawn = &cgMedia.fxCoverBlockSpawn;
    if ( !cgMedia.fxCoverBlockSpawn.m_particleSystemDef )
      p_fxCoverBlockSpawn = NULL;
    def = p_fxCoverBlockSpawn;
    time = CG_GetLocalClientGlobals(localClientNum)->time;
    v8 = BG_CoverWall_CalcSagAnimWeight(cent->nextState.time2, time);
    v9 = *(float *)&v8;
    v10 = DCONST_DVARINT_g_coverWall_spawnDelayMS;
    if ( !DCONST_DVARINT_g_coverWall_spawnDelayMS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_coverWall_spawnDelayMS") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v10);
    v11 = BG_CoverWall_CalcSagAnimWeight(cent->nextState.time2, time + v10->current.integer);
    sagAmount = *(float *)&v11;
    v13 = -4;
    do
    {
      v14 = -6;
      do
      {
        v15 = BG_CoverWall_GridPosToDataArrayIndex(v14, 0, v13);
        v16 = DCONST_DVARMPSPBOOL_g_coverWall_useSpawnFx;
        if ( !DCONST_DVARMPSPBOOL_g_coverWall_useSpawnFx && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_coverWall_useSpawnFx") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v16);
        if ( v16->current.enabled )
        {
          if ( (int)v15 >= 224 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_coverwall.cpp", 358, ASSERT_TYPE_ASSERT, "(idx < 32 * 7)", (const char *)&queryFormat, "idx < 32 * COVERWALL_GRID_ARRAY_SIZE") )
            __debugbreak();
          if ( CoverData->spawnGrid[v15] == time )
          {
            if ( !cent->pose.origin.Get_origin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 380, ASSERT_TYPE_ASSERT, "(pose->origin.Get_origin)", (const char *)&queryFormat, "pose->origin.Get_origin") )
              __debugbreak();
            FunctionPointer_origin = ObfuscateGetFunctionPointer_origin(cent->pose.origin.Get_origin, &cent->pose);
            FunctionPointer_origin(&cent->pose.origin.origin.origin, &origin);
            if ( cent->pose.isPosePrecise )
            {
              _XMM0 = LODWORD(origin.v[0]);
              __asm { vcvtdq2pd xmm0, xmm0 }
              *((_QWORD *)&v21 + 1) = *((_QWORD *)&_XMM0 + 1);
              *(double *)&v21 = *(double *)&_XMM0 * 0.000244140625;
              _XMM1 = v21;
              __asm { vcvtsd2ss xmm2, xmm1, xmm1 }
              origin.v[0] = *(float *)&_XMM2;
              _XMM0 = LODWORD(origin.v[1]);
              __asm { vcvtdq2pd xmm0, xmm0 }
              *((_QWORD *)&v21 + 1) = *((_QWORD *)&_XMM0 + 1);
              *(double *)&v21 = *(double *)&_XMM0 * 0.000244140625;
              _XMM1 = v21;
              __asm { vcvtsd2ss xmm2, xmm1, xmm1 }
              origin.v[1] = *(float *)&_XMM2;
              _XMM0 = LODWORD(origin.v[2]);
              __asm { vcvtdq2pd xmm0, xmm0 }
              *((_QWORD *)&v21 + 1) = *((_QWORD *)&_XMM0 + 1);
              *(double *)&v21 = *(double *)&_XMM0 * 0.000244140625;
              _XMM1 = v21;
              __asm { vcvtsd2ss xmm2, xmm1, xmm1 }
              origin.v[2] = *(float *)&_XMM2;
            }
            BG_CoverWall_GridPosToWorldPos(&origin, &cent->pose.angles, v14, 0, v13, sagAmount, &outWorldPos);
            BG_CoverWall_CalcNoiseForPosition(v14, 0, v13, &outNoise);
            outWorldPos.v[0] = (float)(outNoise.v[1] * axis.m[1].v[0]) + outWorldPos.v[0];
            outWorldPos.v[1] = (float)(outNoise.v[1] * axis.m[1].v[1]) + outWorldPos.v[1];
            outWorldPos.v[2] = (float)(outNoise.v[1] * axis.m[1].v[2]) + outWorldPos.v[2];
            BG_CoverWall_CalcAnglesForPosition(v14, 0, v13, &outAngles);
            outAngles.v[0] = outAngles.v[0] + cent->pose.angles.v[0];
            outAngles.v[1] = outAngles.v[1] + cent->pose.angles.v[1];
            outAngles.v[2] = outAngles.v[2] + cent->pose.angles.v[2];
            AnglesToAxis(&outAngles, &v61);
            if ( def )
              FX_PlayOrientedEffect(localClientNum, def, time, &outWorldPos, &v61);
            memset(&origin, 0, sizeof(origin));
          }
        }
        if ( BG_CoverWall_GetGridPos(grid, v14, 0, v13) )
        {
          v31 = CoverGrid;
          if ( !BG_CoverWall_GetGridPos(CoverGrid, v14, 0, v13) )
          {
            if ( BG_CoverWall_IsAnyNeighborSet(v31, v14, 0, v13) )
              goto LABEL_43;
            v32 = DVARFLT_g_coverWall_deathFxChanceToPlay;
            if ( !DVARFLT_g_coverWall_deathFxChanceToPlay && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_coverWall_deathFxChanceToPlay") )
              __debugbreak();
            Dvar_CheckFrontendServerThread(v32);
            value = v32->current.value;
            v34 = I_random();
            if ( *(float *)&v34 <= value )
            {
LABEL_43:
              if ( CoverData->spawnGrid[v15] != -1 )
              {
                if ( !cent->pose.origin.Get_origin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 380, ASSERT_TYPE_ASSERT, "(pose->origin.Get_origin)", (const char *)&queryFormat, "pose->origin.Get_origin") )
                  __debugbreak();
                v35 = ObfuscateGetFunctionPointer_origin(cent->pose.origin.Get_origin, &cent->pose);
                v35(&cent->pose.origin.origin.origin, &v51);
                if ( cent->pose.isPosePrecise )
                {
                  _XMM0 = LODWORD(v51.v[0]);
                  __asm { vcvtdq2pd xmm0, xmm0 }
                  *((_QWORD *)&v39 + 1) = *((_QWORD *)&_XMM0 + 1);
                  *(double *)&v39 = *(double *)&_XMM0 * 0.000244140625;
                  _XMM1 = v39;
                  __asm { vcvtsd2ss xmm2, xmm1, xmm1 }
                  v51.v[0] = *(float *)&_XMM2;
                  _XMM0 = LODWORD(v51.v[1]);
                  __asm { vcvtdq2pd xmm0, xmm0 }
                  *((_QWORD *)&v39 + 1) = *((_QWORD *)&_XMM0 + 1);
                  *(double *)&v39 = *(double *)&_XMM0 * 0.000244140625;
                  _XMM1 = v39;
                  __asm { vcvtsd2ss xmm2, xmm1, xmm1 }
                  v51.v[1] = *(float *)&_XMM2;
                  _XMM0 = LODWORD(v51.v[2]);
                  __asm { vcvtdq2pd xmm0, xmm0 }
                  *((_QWORD *)&v39 + 1) = *((_QWORD *)&_XMM0 + 1);
                  *(double *)&v39 = *(double *)&_XMM0 * 0.000244140625;
                  _XMM1 = v39;
                  __asm { vcvtsd2ss xmm2, xmm1, xmm1 }
                  v51.v[2] = *(float *)&_XMM2;
                }
                BG_CoverWall_GridPosToWorldPos(&v51, &cent->pose.angles, v14, 0, v13, v9, &outWorldPos);
                BG_CoverWall_CalcAnglesForPosition(v14, 0, v13, &outAngles);
                BG_CoverWall_CalcNoiseForPosition(v14, 0, v13, &outNoise);
                outWorldPos.v[0] = outWorldPos.v[0] + outNoise.v[0];
                outWorldPos.v[1] = outWorldPos.v[1] + outNoise.v[1];
                outWorldPos.v[2] = outWorldPos.v[2] + outNoise.v[2];
                AnglesToAxis(&outAngles, &v61);
                CoverData->spawnGrid[v15] = -1;
                if ( v52 )
                  FX_PlayOrientedEffect(localClientNum, v52, time, &outWorldPos, &v61);
                memset(&v51, 0, sizeof(v51));
              }
            }
          }
        }
        ++v14;
      }
      while ( v14 <= 6 );
      ++v13;
    }
    while ( v13 <= 9 );
  }
}

/*
==============
CG_CoverWall_UpdatePreControllers
==============
*/
void CG_CoverWall_UpdatePreControllers(LocalClientNum_t localClientNum, DObj *obj, centity_t *cent)
{
  CG_CoverWall_t *CoverData; 
  unsigned int v7; 
  DObjPartBits *p_partBits; 
  cg_t *LocalClientGlobals; 
  const dvar_t *v10; 
  int time; 
  int integer; 
  const dvar_t *v13; 
  unsigned int v14; 
  int v15; 
  int v16; 
  int v17; 
  __int64 v18; 
  int v19; 
  int v20; 
  int v21; 
  unsigned int *spawnGrid; 
  double v23; 
  unsigned int v24; 
  int time2; 
  double v26; 
  char *fmt; 
  __int64 v28; 
  __int64 v29; 
  __int64 v30; 
  __int64 v31; 
  bool enabled; 
  int v33; 
  unsigned int *grid; 
  DObjPartBits partBits; 
  unsigned int v38[4]; 
  double v39; 
  unsigned int v40; 

  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_coverwall.cpp", 426, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  grid = (unsigned int *)CG_CoverWall_GetCoverGrid(cent);
  if ( !grid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_coverwall.cpp", 429, ASSERT_TYPE_ASSERT, "(coverGrid)", (const char *)&queryFormat, "coverGrid") )
    __debugbreak();
  CoverData = CG_CoverWall_GetCoverData(localClientNum, cent);
  if ( !CoverData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_coverwall.cpp", 432, ASSERT_TYPE_ASSERT, "(cg_coverWall)", (const char *)&queryFormat, "cg_coverWall") )
    __debugbreak();
  DObjGetHidePartBits(obj, &partBits);
  v7 = 0;
  p_partBits = &partBits;
  do
  {
    *(_OWORD *)p_partBits->array = _xmm_ffffffffffffffffffffffffffffffff;
    p_partBits = (DObjPartBits *)((char *)p_partBits + 16);
    ++v7;
  }
  while ( v7 < 2 );
  memset(v38, 0, sizeof(v38));
  v39 = 0.0;
  v40 = 0;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  v10 = DCONST_DVARINT_g_coverWall_spawnDelayMS;
  time = LocalClientGlobals->time;
  if ( !DCONST_DVARINT_g_coverWall_spawnDelayMS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_coverWall_spawnDelayMS") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v10);
  integer = v10->current.integer;
  v13 = DCONST_DVARMPSPBOOL_g_coverWall_useSpawnDelay;
  v33 = integer;
  if ( !DCONST_DVARMPSPBOOL_g_coverWall_useSpawnDelay && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_coverWall_useSpawnDelay") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v13);
  enabled = v13->current.enabled;
  v14 = 1;
  v15 = -4;
  do
  {
    v16 = -6;
    do
    {
      v17 = BG_CoverWall_GridPosToDataArrayIndex(v16, 0, v15);
      v18 = v17;
      if ( v17 >= 224 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_coverwall.cpp", 454, ASSERT_TYPE_ASSERT, "(arrayIdx < (32 * 7))", (const char *)&queryFormat, "arrayIdx < (32 * COVERWALL_GRID_ARRAY_SIZE)") )
        __debugbreak();
      v19 = CoverData->spawnGrid[v18];
      if ( v19 )
      {
        if ( BG_CoverWall_GetGridPos(grid, v16, 0, v15) )
        {
          v20 = time - v19;
          if ( time - v19 < 0 )
          {
            LODWORD(v29) = time;
            LODWORD(v28) = time - v19;
            LODWORD(fmt) = v15;
            Com_Printf(16, "Found a cover block at pos ( %d, %d, %d ) with a negative lifetime of %d, current game time is %d\n", (unsigned int)v16, 0i64, fmt, v28, v29);
            v21 = 0;
            spawnGrid = (unsigned int *)CoverData->spawnGrid;
            do
              Com_Printf(16, "SpawnTime at grid Location %d is %d\n", (unsigned int)v21++, *spawnGrid++);
            while ( v21 < 224 );
            integer = v33;
          }
          if ( v20 < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_coverwall.cpp", 477, ASSERT_TYPE_ASSERT, "((gameTime - spawnTime) >= 0)", (const char *)&queryFormat, "(gameTime - spawnTime) >= 0") )
            __debugbreak();
          if ( !enabled || v20 >= integer )
          {
            if ( v14 >= 0x100 )
            {
              LODWORD(v31) = 256;
              LODWORD(v30) = v14;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 290, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v30, v31) )
                __debugbreak();
            }
            partBits.array[(unsigned __int64)v14 >> 5] &= ~(0x80000000 >> (v14 & 0x1F));
          }
        }
        BG_CoverWall_SetGridPos(v38, 1, v16, 0, v15);
        ++v14;
      }
      ++v16;
    }
    while ( v16 <= 6 );
    ++v15;
  }
  while ( v15 <= 9 );
  v23 = v39;
  v24 = v40;
  time2 = cent->nextState.time2;
  *(_OWORD *)&cent->pose.actor.pitch = *(_OWORD *)v38;
  *((double *)&cent->pose.moverFx + 2) = v23;
  cent->pose.coverWall.coverGrid[6] = v24;
  v26 = BG_CoverWall_CalcSagAnimWeight(time2, time);
  cent->pose.coverWall.sag = *(float *)&v26;
  DObjSetHidePartBits(obj, &partBits);
}


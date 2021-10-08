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
  CG_CoverWall_t *v12; 
  int v13; 
  int v14; 
  int v15; 
  __int64 v16; 
  unsigned int number; 
  float v22; 
  DObj *obj; 
  cg_t *cgameGlob; 
  GfxSceneHudOutlineInfo result; 
  GfxSceneHudOutlineInfo v28; 
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
      v12 = CG_CoverWall_GetCoverData(localClientNum, cent);
      v12->morphedThisFrame = 0;
      if ( memcmp_0(CoverGrid, PreviousCoverGrid, 0x1Cui64) )
        v12->morphedThisFrame = 1;
      v13 = -4;
      do
      {
        v14 = -6;
        do
        {
          v15 = BG_CoverWall_GridPosToDataArrayIndex(v14, 0, v13);
          v16 = v15;
          if ( v15 >= 224 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_coverwall.cpp", 298, ASSERT_TYPE_ASSERT, "(idx < (32 * 7))", (const char *)&queryFormat, "idx < (32 * COVERWALL_GRID_ARRAY_SIZE)") )
            __debugbreak();
          if ( BG_CoverWall_GetGridPos(CoverGrid, v14, 0, v13) && !v12->spawnGrid[v16] )
          {
            v12->spawnGrid[v16] = time;
            v12->morphedThisFrame = 1;
          }
          ++v14;
        }
        while ( v14 <= 6 );
        ++v13;
      }
      while ( v13 <= 9 );
      CG_CoverWall_SpawnCoverBlockFx(localClientNum, cent);
      CG_CoverWall_UpdatePreControllers(localClientNum, obj, cent);
      CG_Entity_CalcLightingOrigin(&cent->pose, obj, &outLightingOrigin);
      _RAX = CG_Entity_GetHudOutlineInfo(&result, cgameGlob, cent);
      number = cent->nextState.number;
      __asm { vmovups ymm0, ymmword ptr [rax] }
      v28.characterEVOffset = _RAX->characterEVOffset;
      result.characterEVOffset = NULL_SHADER_OVERRIDE_1.atlasTime;
      __asm
      {
        vmovups [rsp+128h+var_88], ymm0
        vmovups ymm0, ymmword ptr cs:NULL_SHADER_OVERRIDE_1.scrollRateX
        vmovups ymmword ptr [rsp+128h+result.color], ymm0
        vxorps  xmm0, xmm0, xmm0
        vmovss  [rsp+128h+var_E8], xmm0
      }
      CG_Entity_AddDObjToScene(localClientNum, obj, &cent->pose, number, 0x1000u, (shaderOverride_t *)&result, &v28, &outLightingOrigin, v22, 0);
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
  __int32 v15; 
  hkMonitorStream *Value; 
  hkMonitorStream *v17; 
  const dvar_t *v22; 
  int v35; 
  unsigned int *p_physicsInstanceId; 
  Ragdoll *Ragdoll; 
  int v40; 
  int v41; 
  const BoneOrientation *PhysicsPoseBoneOrientations; 
  int NumRigidBodys; 
  __int64 v44; 
  unsigned int v45; 
  LocalClientNum_t v47; 
  unsigned int v48; 
  unsigned int m_serialAndIndex; 
  CgHandler *Handler; 
  float fmt; 
  __int64 v112; 
  __int64 v113; 
  float mass; 
  LocalClientNum_t _localClientNum; 
  int v116; 
  vec3_t outOrigin; 
  hknpBodyId result; 
  cg_t *LocalClientGlobals; 
  __int64 v120; 
  hkMonitorStream *v121; 
  __int64 v122; 
  hkMonitorStream *v123; 
  vec3_t vec; 
  vec3_t position; 
  WorldUpReferenceFrame v126; 
  char v127; 
  void *retaddr; 

  _RAX = &retaddr;
  v122 = -2i64;
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
    vmovaps xmmword ptr [rax-0C8h], xmm14
  }
  v15 = localClientNum;
  _localClientNum = localClientNum;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_coverwall.cpp", 154, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  Value = (hkMonitorStream *)TlsGetValue(hkMonitorStream__m_instance.m_slotID);
  v17 = Value;
  v121 = Value;
  if ( Value )
    hkMonitorStream::timerBegin(Value, "TtCG_PhysicsCoverWall_PushRagdolls");
  v123 = v17;
  Sys_ProfBeginNamedEvent(0xFFE0FFFF, "CG_CoverWall_PushNearbyRagdolls");
  CG_GetPoseOrigin(&cent->pose, &outOrigin);
  CG_EntityWorkers_EnterCriticalSection_Unverified();
  if ( ragdoll_enable->current.enabled )
  {
    _RDI = DCONST_DVARMPSPFLT_g_coverWall_ragdollImpulseMag;
    if ( !DCONST_DVARMPSPFLT_g_coverWall_ragdollImpulseMag && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_coverWall_ragdollImpulseMag") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RDI);
    __asm { vmovss  xmm13, dword ptr [rdi+28h] }
    _RDI = DCONST_DVARMPSPFLT_g_coverWall_ragdollDistCheck;
    if ( !DCONST_DVARMPSPFLT_g_coverWall_ragdollDistCheck && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_coverWall_ragdollDistCheck") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RDI);
    __asm { vmovss  xmm6, dword ptr [rdi+28h] }
    v22 = DCONST_DVARMPSPFLT_g_coverWall_ragdollDistCheck;
    if ( !DCONST_DVARMPSPFLT_g_coverWall_ragdollDistCheck && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_coverWall_ragdollDistCheck") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v22);
    __asm { vmulss  xmm12, xmm6, dword ptr [rdi+28h] }
    _RDI = DCONST_DVARMPSPFLT_g_coverWall_ragdollImpulseUpContribution;
    if ( !DCONST_DVARMPSPFLT_g_coverWall_ragdollImpulseUpContribution && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_coverWall_ragdollImpulseUpContribution") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RDI);
    __asm { vmovss  xmm10, dword ptr [rdi+28h] }
    _R12 = 0i64;
    __asm { vmovd   xmm1, r12d }
    _EAX = isInitialPush;
    __asm
    {
      vmovd   xmm0, eax
      vpcmpeqd xmm2, xmm0, xmm1
      vmovss  xmm9, cs:__real@3f800000
      vmovss  xmm0, cs:__real@40800000
      vblendvps xmm1, xmm0, xmm9, xmm2
      vmovss  [rsp+1B0h+mass], xmm1
      vxorps  xmm8, xmm8, xmm8
      vmovss  dword ptr [rbp+0B0h+vec], xmm8
      vmovss  dword ptr [rbp+0B0h+vec+4], xmm8
      vmovss  dword ptr [rbp+0B0h+vec+8], xmm8
      vmovss  dword ptr [rbp+0B0h+position], xmm8
      vmovss  dword ptr [rbp+0B0h+position+4], xmm8
      vmovss  dword ptr [rbp+0B0h+position+8], xmm8
    }
    CG_EntityWorkers_AcquireWriteLock_Physics(NONE_UNVERIFIED);
    v35 = 1;
    v116 = 1;
    p_physicsInstanceId = &g_ragdollBodies[0].state.physicsInstanceId;
    __asm
    {
      vmovss  xmm14, [rsp+1B0h+mass]
      vmovss  xmm11, cs:__real@80000000
    }
    do
    {
      if ( !v35 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.inl", 64, ASSERT_TYPE_ASSERT, "(ragdollHandle != 0)", (const char *)&queryFormat, "ragdollHandle != RAGDOLL_INVALID") )
        __debugbreak();
      if ( (unsigned int)(v35 - 1) >= 0x40 )
      {
        LODWORD(v113) = 64;
        LODWORD(v112) = v35 - 1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.inl", 65, ASSERT_TYPE_ASSERT, "(unsigned)( ragdollHandle - 1 ) < (unsigned)( 64 )", "ragdollHandle - 1 doesn't index RAGDOLL_MAX\n\t%i not in [0, %i)", v112, v113) )
          __debugbreak();
      }
      Ragdoll = Ragdoll_GetRagdoll(v35);
      if ( !Ragdoll && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.inl", 69, ASSERT_TYPE_ASSERT, "(ragdoll)", (const char *)&queryFormat, "ragdoll") )
        __debugbreak();
      if ( Ragdoll->allocated )
      {
        if ( !v35 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.inl", 19, ASSERT_TYPE_ASSERT, "(ragdollHandle != 0)", (const char *)&queryFormat, "ragdollHandle != RAGDOLL_INVALID") )
          __debugbreak();
        if ( (unsigned int)(v35 - 1) >= 0x40 )
        {
          LODWORD(v113) = 64;
          LODWORD(v112) = v35 - 1;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\ragdoll\\ragdoll.inl", 20, ASSERT_TYPE_ASSERT, "(unsigned)( ragdollHandle - 1 ) < (unsigned)( 64 )", "ragdollHandle - 1 doesn't index RAGDOLL_MAX\n\t%i not in [0, %i)", v112, v113) )
            __debugbreak();
        }
        if ( p_physicsInstanceId == (unsigned int *)7344 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_coverwall.cpp", 193, ASSERT_TYPE_ASSERT, "(ragdoll)", (const char *)&queryFormat, "ragdoll") )
          __debugbreak();
        v40 = *(p_physicsInstanceId - 1826);
        if ( v40 == v15 && *p_physicsInstanceId != -1 )
        {
          v41 = 3 * v40 + 3;
          PhysicsPoseBoneOrientations = Ragdoll_GetPhysicsPoseBoneOrientations((const Ragdoll *)(p_physicsInstanceId - 1836));
          if ( !PhysicsPoseBoneOrientations && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_coverwall.cpp", 211, ASSERT_TYPE_ASSERT, "(boneOrientations)", (const char *)&queryFormat, "boneOrientations") )
            __debugbreak();
          NumRigidBodys = Physics_GetNumRigidBodys((const Physics_WorldId)v41, *p_physicsInstanceId);
          v44 = NumRigidBodys;
          if ( NumRigidBodys > 64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_coverwall.cpp", 215, ASSERT_TYPE_ASSERT, "(numBodies <= 64)", (const char *)&queryFormat, "numBodies <= RAGDOLL_MAX_BONES") )
            __debugbreak();
          if ( (_DWORD)v44 != *(p_physicsInstanceId - 1748) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_coverwall.cpp", 216, ASSERT_TYPE_ASSERT, "(numBodies == Ragdoll_GetNumBones( ragdoll ))", (const char *)&queryFormat, "numBodies == Ragdoll_GetNumBones( ragdoll )") )
            __debugbreak();
          v45 = 0;
          v120 = v44;
          if ( (int)v44 <= 0 )
          {
            v15 = _localClientNum;
          }
          else
          {
            _R14 = &PhysicsPoseBoneOrientations->origin.v[2];
            v47 = _localClientNum;
            do
            {
              v48 = *p_physicsInstanceId;
              if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
                __debugbreak();
              if ( (unsigned int)v41 > 7 )
              {
                LODWORD(v113) = v41;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 106, ASSERT_TYPE_ASSERT, "(worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid world index %i", "worldId >= PHYSICS_WORLD_ID_FIRST && worldId <= PHYSICS_WORLD_ID_LAST", v113) )
                  __debugbreak();
              }
              if ( v48 == -1 )
              {
                LODWORD(v113) = v41;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 107, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid Instance in world %i", "instanceId != PHYSICSINSTANCEID_INVALID", v113) )
                  __debugbreak();
              }
              if ( !g_physicsClientWorldsCreated && (unsigned int)(v41 - 2) <= 5 )
              {
                LODWORD(v113) = v41;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 108, ASSERT_TYPE_ASSERT, "(g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in client world %i when client worlds have not been set up", "g_physicsClientWorldsCreated || worldId < PHYSICS_WORLD_ID_CLIENT_FIRST || worldId > PHYSICS_WORLD_ID_CLIENT_LAST", v113) )
                  __debugbreak();
              }
              if ( !g_physicsServerWorldsCreated && (unsigned int)v41 <= 1 )
              {
                LODWORD(v113) = v41;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v113) )
                  __debugbreak();
              }
              m_serialAndIndex = HavokPhysics_GetRigidBodyID(&result, (const Physics_WorldId)v41, v48, v45)->m_serialAndIndex;
              if ( (m_serialAndIndex & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_coverwall.cpp", 222, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( authBodyId ))", (const char *)&queryFormat, "Physics_IsRigidBodyIdValid( authBodyId )") )
                __debugbreak();
              if ( v45 )
              {
                __asm
                {
                  vmovss  xmm6, dword ptr [rbp+0B0h+vec+8]
                  vmovss  xmm5, dword ptr [rbp+0B0h+vec+4]
                  vmovss  xmm4, dword ptr [rbp+0B0h+vec]
                }
              }
              else
              {
                __asm
                {
                  vmovss  xmm4, dword ptr [r14-8]
                  vmovss  xmm5, dword ptr [rsp+1B0h+outOrigin]
                  vsubss  xmm2, xmm5, xmm4
                  vmovss  xmm6, dword ptr [rsp+1B0h+outOrigin+4]
                  vsubss  xmm0, xmm6, dword ptr [r14-4]
                  vmovss  xmm7, dword ptr [rsp+1B0h+outOrigin+8]
                  vsubss  xmm3, xmm7, dword ptr [r14]
                  vmulss  xmm1, xmm0, xmm0
                  vmulss  xmm0, xmm2, xmm2
                  vaddss  xmm2, xmm1, xmm0
                  vmulss  xmm1, xmm3, xmm3
                  vaddss  xmm2, xmm2, xmm1
                  vcomiss xmm2, xmm12
                  vsubss  xmm4, xmm4, xmm5
                  vmovss  dword ptr [rbp+0B0h+vec], xmm4
                  vmovss  xmm0, dword ptr [r14-4]
                  vsubss  xmm5, xmm0, xmm6
                  vmovss  dword ptr [rbp+0B0h+vec+4], xmm5
                  vmovss  xmm1, dword ptr [r14]
                  vsubss  xmm6, xmm1, xmm7
                }
              }
              __asm
              {
                vmulss  xmm1, xmm5, xmm5
                vmulss  xmm0, xmm4, xmm4
                vaddss  xmm2, xmm1, xmm0
                vmulss  xmm1, xmm6, xmm6
                vaddss  xmm2, xmm2, xmm1
                vsqrtss xmm3, xmm2, xmm2
                vcmpless xmm0, xmm3, xmm11
                vblendvps xmm1, xmm3, xmm9, xmm0
                vdivss  xmm2, xmm9, xmm1
                vmulss  xmm0, xmm4, xmm2
                vmovss  dword ptr [rbp+0B0h+vec], xmm0
                vmulss  xmm1, xmm5, xmm2
                vmovss  dword ptr [rbp+0B0h+vec+4], xmm1
                vmulss  xmm0, xmm6, xmm2
                vmovss  dword ptr [rbp+0B0h+vec+8], xmm0
                vcomiss xmm10, xmm8
              }
              if ( v45 )
              {
                Handler = CgHandler::getHandler(v47);
                WorldUpReferenceFrame::WorldUpReferenceFrame(&v126, &LocalClientGlobals->predictedPlayerState, Handler);
                __asm { vmovaps xmm1, xmm10; height }
                WorldUpReferenceFrame::AddUpContribution(&v126, *(float *)&_XMM1, &vec);
                __asm
                {
                  vmovss  xmm6, dword ptr [rbp+0B0h+vec+4]
                  vmulss  xmm1, xmm6, xmm6
                  vmovss  xmm4, dword ptr [rbp+0B0h+vec]
                  vmulss  xmm0, xmm4, xmm4
                  vaddss  xmm2, xmm1, xmm0
                  vmovss  xmm5, dword ptr [rbp+0B0h+vec+8]
                  vmulss  xmm1, xmm5, xmm5
                  vaddss  xmm0, xmm2, xmm1
                  vsqrtss xmm3, xmm0, xmm0
                  vcmpless xmm0, xmm3, xmm11
                  vblendvps xmm1, xmm3, xmm9, xmm0
                  vdivss  xmm2, xmm9, xmm1
                  vmulss  xmm0, xmm4, xmm2
                  vmovss  dword ptr [rbp+0B0h+vec], xmm0
                  vmulss  xmm1, xmm6, xmm2
                  vmovss  dword ptr [rbp+0B0h+vec+4], xmm1
                  vmulss  xmm0, xmm5, xmm2
                  vmovss  dword ptr [rbp+0B0h+vec+8], xmm0
                }
              }
              __asm
              {
                vmovss  xmm0, dword ptr [r14-8]
                vmovss  dword ptr [rbp+0B0h+position], xmm0
                vmovss  xmm1, dword ptr [r14-4]
                vmovss  dword ptr [rbp+0B0h+position+4], xmm1
                vmovss  xmm0, dword ptr [r14]
                vmovss  dword ptr [rbp+0B0h+position+8], xmm0
                vmovss  [rsp+1B0h+mass], xmm8
              }
              Physics_GetRigidBodyMass((Physics_WorldId)v41, m_serialAndIndex, &mass);
              __asm
              {
                vmulss  xmm1, xmm13, [rsp+1B0h+mass]
                vmulss  xmm2, xmm1, xmm14
                vmovss  dword ptr [rsp+1B0h+fmt], xmm2
              }
              Physics_ApplyImpulse((Physics_WorldId)v41, m_serialAndIndex, &position, &vec, fmt);
              ++v45;
              ++_R12;
              _R14 += 7;
            }
            while ( _R12 < v120 );
            v15 = v47;
          }
          _R12 = 0i64;
          v35 = v116;
        }
      }
      v116 = ++v35;
      p_physicsInstanceId += 3529;
    }
    while ( v35 <= 64 );
    CG_EntityWorkers_ReleaseWriteLock_Physics(NONE_UNVERIFIED);
    v17 = v121;
  }
  CG_EntityWorkers_LeaveCriticalSection_Unverified();
  memset(&outOrigin, 0, sizeof(outOrigin));
  Sys_ProfEndNamedEvent();
  if ( v17 )
    hkMonitorStream::timerEnd(v17, "Et");
  _R11 = &v127;
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
    vmovaps xmm14, xmmword ptr [r11-90h]
  }
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
  const dvar_t *v15; 
  int v17; 
  int v19; 
  __int64 v20; 
  const dvar_t *v21; 
  void (__fastcall *FunctionPointer_origin)(const vec4_t *, vec3_t *); 
  unsigned int *v47; 
  char v50; 
  char v51; 
  void (__fastcall *v52)(const vec4_t *, vec3_t *); 
  float sagAmount; 
  float sagAmounta; 
  vec3_t origin; 
  vec3_t v79; 
  FXRegisteredDef *v80; 
  FXRegisteredDef *def; 
  unsigned int *grid; 
  unsigned int *CoverGrid; 
  __int64 v84; 
  vec3_t outWorldPos; 
  vec3_t outAngles; 
  vec3_t outNoise; 
  tmat33_t<vec3_t> axis; 
  tmat33_t<vec3_t> v89; 
  char v90; 
  void *retaddr; 

  _RAX = &retaddr;
  v84 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm8
    vmovaps xmmword ptr [rax-78h], xmm9
  }
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
    v80 = p_fxCoverBlockMelt;
    p_fxCoverBlockSpawn = &cgMedia.fxCoverBlockSpawn;
    if ( !cgMedia.fxCoverBlockSpawn.m_particleSystemDef )
      p_fxCoverBlockSpawn = NULL;
    def = p_fxCoverBlockSpawn;
    time = CG_GetLocalClientGlobals(localClientNum)->time;
    *(double *)&_XMM0 = BG_CoverWall_CalcSagAnimWeight(cent->nextState.time2, time);
    __asm { vmovaps xmm8, xmm0 }
    v15 = DCONST_DVARINT_g_coverWall_spawnDelayMS;
    if ( !DCONST_DVARINT_g_coverWall_spawnDelayMS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_coverWall_spawnDelayMS") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v15);
    *(double *)&_XMM0 = BG_CoverWall_CalcSagAnimWeight(cent->nextState.time2, time + v15->current.integer);
    __asm { vmovaps xmm9, xmm0 }
    v17 = -4;
    __asm { vmovsd  xmm7, cs:__real@3f30000000000000 }
    do
    {
      v19 = -6;
      do
      {
        v20 = BG_CoverWall_GridPosToDataArrayIndex(v19, 0, v17);
        v21 = DCONST_DVARMPSPBOOL_g_coverWall_useSpawnFx;
        if ( !DCONST_DVARMPSPBOOL_g_coverWall_useSpawnFx && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_coverWall_useSpawnFx") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v21);
        if ( v21->current.enabled )
        {
          if ( (int)v20 >= 224 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_coverwall.cpp", 358, ASSERT_TYPE_ASSERT, "(idx < 32 * 7)", (const char *)&queryFormat, "idx < 32 * COVERWALL_GRID_ARRAY_SIZE") )
            __debugbreak();
          if ( CoverData->spawnGrid[v20] == time )
          {
            if ( !cent->pose.origin.Get_origin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 380, ASSERT_TYPE_ASSERT, "(pose->origin.Get_origin)", (const char *)&queryFormat, "pose->origin.Get_origin") )
              __debugbreak();
            FunctionPointer_origin = ObfuscateGetFunctionPointer_origin(cent->pose.origin.Get_origin, &cent->pose);
            FunctionPointer_origin(&cent->pose.origin.origin.origin, &origin);
            if ( cent->pose.isPosePrecise )
            {
              __asm
              {
                vmovd   xmm0, dword ptr [rsp+190h+origin]
                vcvtdq2pd xmm0, xmm0
                vmulsd  xmm1, xmm0, xmm7
                vcvtsd2ss xmm2, xmm1, xmm1
                vmovss  dword ptr [rsp+190h+origin], xmm2
                vmovd   xmm0, dword ptr [rsp+190h+origin+4]
                vcvtdq2pd xmm0, xmm0
                vmulsd  xmm1, xmm0, xmm7
                vcvtsd2ss xmm2, xmm1, xmm1
                vmovss  dword ptr [rsp+190h+origin+4], xmm2
                vmovd   xmm0, dword ptr [rsp+190h+origin+8]
                vcvtdq2pd xmm0, xmm0
                vmulsd  xmm1, xmm0, xmm7
                vcvtsd2ss xmm2, xmm1, xmm1
                vmovss  dword ptr [rsp+190h+origin+8], xmm2
              }
            }
            __asm { vmovss  [rsp+190h+sagAmount], xmm9 }
            BG_CoverWall_GridPosToWorldPos(&origin, &cent->pose.angles, v19, 0, v17, sagAmount, &outWorldPos);
            BG_CoverWall_CalcNoiseForPosition(v19, 0, v17, &outNoise);
            __asm
            {
              vmovss  xmm4, dword ptr [rbp+90h+outNoise+4]
              vmulss  xmm2, xmm4, dword ptr [rbp+90h+axis+0Ch]
              vaddss  xmm2, xmm2, dword ptr [rbp+90h+var_100]
              vmovss  dword ptr [rbp+90h+var_100], xmm2
              vmulss  xmm3, xmm4, dword ptr [rbp+90h+axis+10h]
              vaddss  xmm2, xmm3, dword ptr [rbp+90h+var_100+4]
              vmovss  dword ptr [rbp+90h+var_100+4], xmm2
              vmulss  xmm3, xmm4, dword ptr [rbp+90h+axis+14h]
              vaddss  xmm2, xmm3, dword ptr [rbp+90h+var_100+8]
              vmovss  dword ptr [rbp+90h+var_100+8], xmm2
            }
            BG_CoverWall_CalcAnglesForPosition(v19, 0, v17, &outAngles);
            __asm
            {
              vmovss  xmm0, dword ptr [rbp+90h+outAngles]
              vaddss  xmm1, xmm0, dword ptr [rbx+48h]
              vmovss  dword ptr [rbp+90h+outAngles], xmm1
              vmovss  xmm2, dword ptr [rbp+90h+outAngles+4]
              vaddss  xmm0, xmm2, dword ptr [rbx+4Ch]
              vmovss  dword ptr [rbp+90h+outAngles+4], xmm0
              vmovss  xmm1, dword ptr [rbp+90h+outAngles+8]
              vaddss  xmm2, xmm1, dword ptr [rbx+50h]
              vmovss  dword ptr [rbp+90h+outAngles+8], xmm2
            }
            AnglesToAxis(&outAngles, &v89);
            if ( def )
              FX_PlayOrientedEffect(localClientNum, def, time, &outWorldPos, &v89);
            memset(&origin, 0, sizeof(origin));
          }
        }
        if ( BG_CoverWall_GetGridPos(grid, v19, 0, v17) )
        {
          v47 = CoverGrid;
          if ( !BG_CoverWall_GetGridPos(CoverGrid, v19, 0, v17) )
          {
            if ( BG_CoverWall_IsAnyNeighborSet(v47, v19, 0, v17) )
              goto LABEL_43;
            _RDI = DVARFLT_g_coverWall_deathFxChanceToPlay;
            if ( !DVARFLT_g_coverWall_deathFxChanceToPlay && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_coverWall_deathFxChanceToPlay") )
              __debugbreak();
            Dvar_CheckFrontendServerThread(_RDI);
            __asm { vmovss  xmm6, dword ptr [rdi+28h] }
            *(double *)&_XMM0 = I_random();
            __asm { vcomiss xmm0, xmm6 }
            if ( v50 | v51 )
            {
LABEL_43:
              if ( CoverData->spawnGrid[v20] != -1 )
              {
                if ( !cent->pose.origin.Get_origin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 380, ASSERT_TYPE_ASSERT, "(pose->origin.Get_origin)", (const char *)&queryFormat, "pose->origin.Get_origin") )
                  __debugbreak();
                v52 = ObfuscateGetFunctionPointer_origin(cent->pose.origin.Get_origin, &cent->pose);
                v52(&cent->pose.origin.origin.origin, &v79);
                if ( cent->pose.isPosePrecise )
                {
                  __asm
                  {
                    vmovd   xmm0, dword ptr [rsp+190h+var_138]
                    vcvtdq2pd xmm0, xmm0
                    vmulsd  xmm1, xmm0, xmm7
                    vcvtsd2ss xmm2, xmm1, xmm1
                    vmovss  dword ptr [rsp+190h+var_138], xmm2
                    vmovd   xmm0, dword ptr [rsp+190h+var_138+4]
                    vcvtdq2pd xmm0, xmm0
                    vmulsd  xmm1, xmm0, xmm7
                    vcvtsd2ss xmm2, xmm1, xmm1
                    vmovss  dword ptr [rsp+190h+var_138+4], xmm2
                    vmovd   xmm0, dword ptr [rsp+190h+var_138+8]
                    vcvtdq2pd xmm0, xmm0
                    vmulsd  xmm1, xmm0, xmm7
                    vcvtsd2ss xmm2, xmm1, xmm1
                    vmovss  dword ptr [rsp+190h+var_138+8], xmm2
                  }
                }
                __asm { vmovss  [rsp+190h+sagAmount], xmm8 }
                BG_CoverWall_GridPosToWorldPos(&v79, &cent->pose.angles, v19, 0, v17, sagAmounta, &outWorldPos);
                BG_CoverWall_CalcAnglesForPosition(v19, 0, v17, &outAngles);
                BG_CoverWall_CalcNoiseForPosition(v19, 0, v17, &outNoise);
                __asm
                {
                  vmovss  xmm0, dword ptr [rbp+90h+var_100]
                  vaddss  xmm1, xmm0, dword ptr [rbp+90h+outNoise]
                  vmovss  dword ptr [rbp+90h+var_100], xmm1
                  vmovss  xmm2, dword ptr [rbp+90h+var_100+4]
                  vaddss  xmm0, xmm2, dword ptr [rbp+90h+outNoise+4]
                  vmovss  dword ptr [rbp+90h+var_100+4], xmm0
                  vmovss  xmm1, dword ptr [rbp+90h+var_100+8]
                  vaddss  xmm2, xmm1, dword ptr [rbp+90h+outNoise+8]
                  vmovss  dword ptr [rbp+90h+var_100+8], xmm2
                }
                AnglesToAxis(&outAngles, &v89);
                CoverData->spawnGrid[v20] = -1;
                if ( v80 )
                  FX_PlayOrientedEffect(localClientNum, v80, time, &outWorldPos, &v89);
                memset(&v79, 0, sizeof(v79));
              }
            }
          }
        }
        ++v19;
      }
      while ( v19 <= 6 );
      ++v17;
    }
    while ( v17 <= 9 );
  }
  _R11 = &v90;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
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
  unsigned int v9; 
  cg_t *LocalClientGlobals; 
  const dvar_t *v12; 
  int time; 
  int integer; 
  const dvar_t *v15; 
  unsigned int v16; 
  int v17; 
  int v18; 
  int v19; 
  __int64 v20; 
  int v21; 
  int v22; 
  int v23; 
  unsigned int *spawnGrid; 
  unsigned int v28; 
  int time2; 
  char *fmt; 
  __int64 v32; 
  __int64 v33; 
  __int64 v34; 
  __int64 v35; 
  bool enabled; 
  int v37; 
  unsigned int *grid; 
  DObjPartBits partBits; 
  unsigned int v42[4]; 
  __int64 v43; 
  unsigned int v44; 

  __asm { vmovaps [rsp+108h+var_48], xmm6 }
  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_coverwall.cpp", 426, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  grid = (unsigned int *)CG_CoverWall_GetCoverGrid(cent);
  if ( !grid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_coverwall.cpp", 429, ASSERT_TYPE_ASSERT, "(coverGrid)", (const char *)&queryFormat, "coverGrid") )
    __debugbreak();
  CoverData = CG_CoverWall_GetCoverData(localClientNum, cent);
  if ( !CoverData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_coverwall.cpp", 432, ASSERT_TYPE_ASSERT, "(cg_coverWall)", (const char *)&queryFormat, "cg_coverWall") )
    __debugbreak();
  DObjGetHidePartBits(obj, &partBits);
  __asm { vmovdqu xmm6, cs:__xmm@ffffffffffffffffffffffffffffffff }
  v9 = 0;
  _RDI = &partBits;
  do
  {
    __asm { vmovdqu xmmword ptr [rdi], xmm6 }
    _RDI = (DObjPartBits *)((char *)_RDI + 16);
    ++v9;
  }
  while ( v9 < 2 );
  memset(v42, 0, sizeof(v42));
  v43 = 0i64;
  v44 = 0;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  v12 = DCONST_DVARINT_g_coverWall_spawnDelayMS;
  time = LocalClientGlobals->time;
  if ( !DCONST_DVARINT_g_coverWall_spawnDelayMS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_coverWall_spawnDelayMS") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v12);
  integer = v12->current.integer;
  v15 = DCONST_DVARMPSPBOOL_g_coverWall_useSpawnDelay;
  v37 = integer;
  if ( !DCONST_DVARMPSPBOOL_g_coverWall_useSpawnDelay && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_coverWall_useSpawnDelay") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v15);
  enabled = v15->current.enabled;
  v16 = 1;
  v17 = -4;
  do
  {
    v18 = -6;
    do
    {
      v19 = BG_CoverWall_GridPosToDataArrayIndex(v18, 0, v17);
      v20 = v19;
      if ( v19 >= 224 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_coverwall.cpp", 454, ASSERT_TYPE_ASSERT, "(arrayIdx < (32 * 7))", (const char *)&queryFormat, "arrayIdx < (32 * COVERWALL_GRID_ARRAY_SIZE)") )
        __debugbreak();
      v21 = CoverData->spawnGrid[v20];
      if ( v21 )
      {
        if ( BG_CoverWall_GetGridPos(grid, v18, 0, v17) )
        {
          v22 = time - v21;
          if ( time - v21 < 0 )
          {
            LODWORD(v33) = time;
            LODWORD(v32) = time - v21;
            LODWORD(fmt) = v17;
            Com_Printf(16, "Found a cover block at pos ( %d, %d, %d ) with a negative lifetime of %d, current game time is %d\n", (unsigned int)v18, 0i64, fmt, v32, v33);
            v23 = 0;
            spawnGrid = (unsigned int *)CoverData->spawnGrid;
            do
              Com_Printf(16, "SpawnTime at grid Location %d is %d\n", (unsigned int)v23++, *spawnGrid++);
            while ( v23 < 224 );
            integer = v37;
          }
          if ( v22 < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_coverwall.cpp", 477, ASSERT_TYPE_ASSERT, "((gameTime - spawnTime) >= 0)", (const char *)&queryFormat, "(gameTime - spawnTime) >= 0") )
            __debugbreak();
          if ( !enabled || v22 >= integer )
          {
            if ( v16 >= 0x100 )
            {
              LODWORD(v35) = 256;
              LODWORD(v34) = v16;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 290, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v34, v35) )
                __debugbreak();
            }
            partBits.array[(unsigned __int64)v16 >> 5] &= ~(0x80000000 >> (v16 & 0x1F));
          }
        }
        BG_CoverWall_SetGridPos(v42, 1, v18, 0, v17);
        ++v16;
      }
      ++v18;
    }
    while ( v18 <= 6 );
    ++v17;
  }
  while ( v17 <= 9 );
  _RBX = cent;
  __asm
  {
    vmovups xmm0, xmmword ptr [rsp+108h+var_78]
    vmovsd  xmm1, [rsp+108h+var_68]
  }
  v28 = v44;
  time2 = cent->nextState.time2;
  __asm
  {
    vmovups xmmword ptr [rbx+0A0h], xmm0
    vmovsd  qword ptr [rbx+0B0h], xmm1
  }
  cent->pose.coverWall.coverGrid[6] = v28;
  *(double *)&_XMM0 = BG_CoverWall_CalcSagAnimWeight(time2, time);
  __asm { vmovss  dword ptr [rbx+0BCh], xmm0 }
  DObjSetHidePartBits(obj, &partBits);
  __asm { vmovaps xmm6, [rsp+108h+var_48] }
}


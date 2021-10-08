/*
==============
CgViewSystemSP::SetViewValues
==============
*/

void __fastcall CgViewSystemSP::SetViewValues(CgViewSystemSP *this)
{
  ?SetViewValues@CgViewSystemSP@@UEBAXXZ(this);
}

/*
==============
CG_ViewSP_DrawActiveFrameInit
==============
*/

void __fastcall CG_ViewSP_DrawActiveFrameInit(const LocalClientNum_t localClientNum, Scr_UpdateFrame_State updateState, ClientVisionSetData *cvsData, refdef_t *refDef, int clientTime, int clientFrameTime, float lodOverride)
{
  ?CG_ViewSP_DrawActiveFrameInit@@YAXW4LocalClientNum_t@@W4Scr_UpdateFrame_State@@PEAUClientVisionSetData@@PEAUrefdef_t@@HHM@Z(localClientNum, updateState, cvsData, refDef, clientTime, clientFrameTime, lodOverride);
}

/*
==============
CG_ViewSP_BeginFrame
==============
*/

void __fastcall CG_ViewSP_BeginFrame(const LocalClientNum_t localClientNum, DemoType demoType, Scr_UpdateFrame_State updateState, int serverTime, int animFrametime)
{
  ?CG_ViewSP_BeginFrame@@YAXW4LocalClientNum_t@@W4DemoType@@W4Scr_UpdateFrame_State@@HH@Z(localClientNum, demoType, updateState, serverTime, animFrametime);
}

/*
==============
CG_SetDebugAngles
==============
*/

void __fastcall CG_SetDebugAngles(const vec3_t *angles)
{
  ?CG_SetDebugAngles@@YAXAEBTvec3_t@@@Z(angles);
}

/*
==============
CG_ViewSP_Init
==============
*/

void __fastcall CG_ViewSP_Init(const LocalClientNum_t localClientNum)
{
  ?CG_ViewSP_Init@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_ViewSP_DrawActiveFrame
==============
*/

void __fastcall CG_ViewSP_DrawActiveFrame(const LocalClientNum_t localClientNum, int isFirstClientView, Scr_UpdateFrame_State updateState, CubemapShot cubemapShot, int cubemapSize, unsigned int drawType)
{
  ?CG_ViewSP_DrawActiveFrame@@YAXW4LocalClientNum_t@@HW4Scr_UpdateFrame_State@@W4CubemapShot@@HI@Z(localClientNum, isFirstClientView, updateState, cubemapShot, cubemapSize, drawType);
}

/*
==============
CgViewSystemSP::CalcRadialMotionBlur
==============
*/

void __fastcall CgViewSystemSP::CalcRadialMotionBlur(CgViewSystemSP *this)
{
  ?CalcRadialMotionBlur@CgViewSystemSP@@UEBAXXZ(this);
}

/*
==============
CgViewSystemSP::UpdateFullFrameFX
==============
*/

void __fastcall CgViewSystemSP::UpdateFullFrameFX(CgViewSystemSP *this)
{
  ?UpdateFullFrameFX@CgViewSystemSP@@UEBAXXZ(this);
}

/*
==============
CG_SetDebugOrigin
==============
*/

void __fastcall CG_SetDebugOrigin(const vec3_t *origin)
{
  ?CG_SetDebugOrigin@@YAXAEBTvec3_t@@@Z(origin);
}

/*
==============
CG_ViewSP_ArchiveViewInfo
==============
*/

void __fastcall CG_ViewSP_ArchiveViewInfo(const LocalClientNum_t localClientNum, MemoryFile *memFile)
{
  ?CG_ViewSP_ArchiveViewInfo@@YAXW4LocalClientNum_t@@PEAUMemoryFile@@@Z(localClientNum, memFile);
}

/*
==============
CgViewSystemSP::CalcLinkedToPlayerViewTags
==============
*/

void __fastcall CgViewSystemSP::CalcLinkedToPlayerViewTags(CgViewSystemSP *this, CgViewSystem::ViewmodelPhase phase)
{
  ?CalcLinkedToPlayerViewTags@CgViewSystemSP@@UEBAXW4ViewmodelPhase@CgViewSystem@@@Z(this, phase);
}

/*
==============
CG_CheckResetLinkState
==============
*/
bool CG_CheckResetLinkState(const playerState_s *ps, unsigned __int64 linkIndex, ViewJostleState *linkState)
{
  unsigned __int64 v3; 
  bool result; 

  v3 = linkIndex;
  if ( linkState->linkedEnt == ps->viewLinkedEntityData[v3].linkedEnt )
    return 0;
  linkState->oldViewanglesLocal = ps->viewangles;
  *(_OWORD *)linkState->oldLinkedTagAnglesLocal.v = 0ui64;
  *(_QWORD *)&linkState->oldPos.y = 0i64;
  *(_OWORD *)linkState->oldLinearVelocity.v = 0ui64;
  *(_QWORD *)&linkState->accumulatedLinearVelocity.y = 0i64;
  *(_QWORD *)linkState->oldOffsetangles.v = 0i64;
  linkState->oldOffsetangles.v[2] = 0.0;
  linkState->linkedEnt = ps->viewLinkedEntityData[v3].linkedEnt;
  result = 1;
  *(_WORD *)&linkState->isAttachmentCached = 0;
  return result;
}

/*
==============
CG_SetDebugAngles
==============
*/
void CG_SetDebugAngles(const vec3_t *angles)
{
  const dvar_t *v5; 
  LocalClientNum_t OnlyLocalClientNum; 

  _RDI = angles;
  v5 = DVARINT_cl_freemove;
  if ( !DVARINT_cl_freemove && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_freemove") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v5);
  if ( v5->current.integer )
  {
    __asm
    {
      vmovaps [rsp+78h+var_18], xmm6
      vmovaps [rsp+78h+var_28], xmm8
      vmovaps [rsp+78h+var_38], xmm9
    }
    OnlyLocalClientNum = CL_GetOnlyLocalClientNum();
    _RAX = CG_GetLocalClientGlobals(OnlyLocalClientNum);
    __asm
    {
      vmovss  xmm0, dword ptr [rdi]
      vmovss  xmm3, dword ptr [rdi+4]
      vmovss  xmm6, dword ptr [rdi+8]
      vsubss  xmm1, xmm0, dword ptr [rax+178C0h]
      vaddss  xmm5, xmm1, dword ptr [rax+0BCh]
      vmovss  xmm8, cs:__real@3f000000
      vmovss  dword ptr [rax+0BCh], xmm5
      vsubss  xmm0, xmm3, dword ptr [rax+178C4h]
      vaddss  xmm1, xmm0, dword ptr [rax+0C0h]
      vmovss  dword ptr [rax+0C0h], xmm1
      vsubss  xmm2, xmm6, dword ptr [rax+178C8h]
      vaddss  xmm0, xmm2, dword ptr [rax+0C4h]
      vmovss  xmm6, cs:__real@37800000
      vmovss  dword ptr [rax+0C4h], xmm0
      vmulss  xmm0, xmm5, cs:__real@43360b61
      vmovss  xmm5, cs:__real@43b40000
      vaddss  xmm1, xmm0, xmm8
    }
    _RDX = _RAX;
    __asm
    {
      vxorps  xmm9, xmm9, xmm9
      vroundss xmm2, xmm9, xmm1, 1
      vcvttss2si eax, xmm2
    }
    _ECX = (unsigned __int16)_RAX;
    __asm
    {
      vmovd   xmm0, ecx
      vcvtdq2ps xmm0, xmm0
      vmulss  xmm3, xmm0, xmm6
      vaddss  xmm1, xmm3, xmm8
      vroundss xmm2, xmm9, xmm1, 1
      vsubss  xmm0, xmm3, xmm2
      vmulss  xmm0, xmm0, xmm5
      vmovss  dword ptr [rdx+0BCh], xmm0
      vmovss  xmm1, dword ptr [rdx+0C0h]
      vmulss  xmm0, xmm1, cs:__real@43360b61
      vaddss  xmm3, xmm0, xmm8
      vroundss xmm0, xmm9, xmm3, 1
      vcvttss2si eax, xmm0
    }
    _ECX = (unsigned __int16)_RAX;
    __asm
    {
      vmovd   xmm0, ecx
      vcvtdq2ps xmm0, xmm0
      vmulss  xmm4, xmm0, xmm6
      vaddss  xmm2, xmm4, xmm8
      vroundss xmm3, xmm9, xmm2, 1
      vsubss  xmm1, xmm4, xmm3
      vmulss  xmm0, xmm1, xmm5
      vmovss  dword ptr [rdx+0C0h], xmm0
      vmovss  xmm1, dword ptr [rdx+0C4h]
      vmulss  xmm0, xmm1, cs:__real@43360b61
      vaddss  xmm3, xmm0, xmm8
      vroundss xmm0, xmm9, xmm3, 1
      vcvttss2si eax, xmm0
    }
    _ECX = (unsigned __int16)_RAX;
    __asm
    {
      vmovd   xmm0, ecx
      vcvtdq2ps xmm0, xmm0
      vmulss  xmm4, xmm0, xmm6
      vmovaps xmm6, [rsp+78h+var_18]
      vaddss  xmm2, xmm4, xmm8
      vmovaps xmm8, [rsp+78h+var_28]
      vroundss xmm3, xmm9, xmm2, 1
      vmovaps xmm9, [rsp+78h+var_38]
      vsubss  xmm1, xmm4, xmm3
      vmulss  xmm0, xmm1, xmm5
      vmovss  dword ptr [rdx+0C4h], xmm0
    }
  }
}

/*
==============
CG_SetDebugOrigin
==============
*/
void CG_SetDebugOrigin(const vec3_t *origin)
{
  const dvar_t *v1; 
  LocalClientNum_t OnlyLocalClientNum; 

  v1 = DVARINT_cl_freemove;
  if ( !DVARINT_cl_freemove && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_freemove") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  if ( v1->current.integer )
  {
    OnlyLocalClientNum = CL_GetOnlyLocalClientNum();
    CG_GetLocalClientGlobals(OnlyLocalClientNum)->predictedPlayerState.origin = *origin;
  }
}

/*
==============
CG_ViewSP_ArchiveViewInfo
==============
*/
void CG_ViewSP_ArchiveViewInfo(const LocalClientNum_t localClientNum, MemoryFile *memFile)
{
  cg_t *LocalClientGlobals; 

  if ( !memFile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_view_sp.cpp", 2281, ASSERT_TYPE_ASSERT, "(memFile)", (const char *)&queryFormat, "memFile") )
    __debugbreak();
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  MemFile_ArchiveData(memFile, 4, &LocalClientGlobals->vehicleInitView);
  MemFile_ArchiveData(memFile, 36, &LocalClientGlobals->prevVehicleInvAxis);
}

/*
==============
CG_ViewSP_BeginFrame
==============
*/
void CG_ViewSP_BeginFrame(const LocalClientNum_t localClientNum, DemoType demoType, Scr_UpdateFrame_State updateState, int serverTime, int animFrametime)
{
  __int64 v7; 
  unsigned __int64 v11; 
  cg_t *LocalClientGlobals; 
  int time; 
  BgAnimStatic *v14; 
  cg_t *v15; 
  float v20; 
  unsigned __int8 v21; 
  cg_t *v22; 
  __int64 v23; 
  __int64 linkedEnt; 
  CgEntitySystem *EntitySystem; 
  int v26; 
  __int64 v27; 
  int v28; 
  __int64 v29; 
  __int64 v30; 
  __int64 v31; 
  __int64 v32; 
  vec3_t outOrg; 

  v7 = localClientNum;
  Profile2_UpdateEntry(27);
  v11 = (unsigned __int64)&dword_14FDE803C & 3;
  if ( ((unsigned __int8)&dword_14FDE803C & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &dword_14FDE803C) )
    __debugbreak();
  _InterlockedIncrement(&dword_14FDE803C);
  CgStatic::SetActiveStatics((const LocalClientNum_t)v7);
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)v7);
  time = LocalClientGlobals->time;
  LocalClientGlobals->animFrametime = animFrametime;
  LocalClientGlobals->demoType = demoType;
  LocalClientGlobals->frametime = serverTime - time;
  LocalClientGlobals->oldTime = time;
  LocalClientGlobals->time = serverTime;
  LocalClientGlobals->frametimeInputSec = 0.0;
  LocalClientGlobals->originInterpolated = 0;
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) )
  {
    if ( !(_BYTE)CgStatic::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static.h", 110, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the client game statics for localClientNum %d but the ype is not known\n", "ms_allocatedType != GameModeType::NONE", v7) )
      __debugbreak();
    if ( (unsigned int)v7 >= LODWORD(CgStatic::ms_allocatedCount) )
    {
      *(float *)&v30 = CgStatic::ms_allocatedCount;
      LODWORD(v29) = v7;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static.h", 111, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v29, v30) )
        __debugbreak();
    }
    if ( !CgStatic::ms_cgameStaticsArray[v7] )
    {
      LODWORD(v30) = v7;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static.h", 112, ASSERT_TYPE_ASSERT, "(ms_cgameStaticsArray[localClientNum])", "%s\n\tTrying to access unallocated client game statics for localClientNum %d\n", "ms_cgameStaticsArray[localClientNum]", v30) )
        __debugbreak();
    }
    v14 = CgStatic::ms_cgameStaticsArray[v7]->GetAnimStatics(CgStatic::ms_cgameStaticsArray[v7]);
    if ( !v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_view_sp.cpp", 872, ASSERT_TYPE_ASSERT, "(bgameAnim)", (const char *)&queryFormat, "bgameAnim") )
      __debugbreak();
    v14->time = LocalClientGlobals->time;
    v14->frametime = LocalClientGlobals->frametime;
  }
  if ( LocalClientGlobals->frametime < 0 )
  {
    LODWORD(v30) = LocalClientGlobals->time;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_view_sp.cpp", 878, ASSERT_TYPE_ASSERT, "(cgameGlob->frametime >= 0)", "%s\n\tcgameGlob->time: %d, cgameGlob->oldTime: %d, cgameGlob->frametime: %d", "cgameGlob->frametime >= 0", v30, LocalClientGlobals->oldTime, LocalClientGlobals->frametime) )
      __debugbreak();
  }
  if ( LocalClientGlobals->frametime - LocalClientGlobals->animFrametime < 0 )
  {
    LODWORD(v32) = LocalClientGlobals->frametime;
    LODWORD(v31) = LocalClientGlobals->oldTime;
    LODWORD(v30) = LocalClientGlobals->time;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_view_sp.cpp", 879, ASSERT_TYPE_ASSERT, "(cgameGlob->frametime - cgameGlob->animFrametime >= 0)", "%s\n\tcgameGlob->time: %d, cgameGlob->oldTime: %d, cgameGlob->frametime: %d, cgameGlob->animFrametime: %d", "cgameGlob->frametime - cgameGlob->animFrametime >= 0", v30, v31, v32, LocalClientGlobals->animFrametime) )
      __debugbreak();
  }
  CG_PlayerState_RestorePredictedPlayerState((const LocalClientNum_t)v7);
  CG_PredictSP_SavePlayerState((LocalClientNum_t)v7);
  Sys_WaitWorkerCmdsOfType(WRKCMD_PHYSICS_STEP_WORLD_DETAIL);
  v15 = CG_GetLocalClientGlobals((const LocalClientNum_t)v7);
  RefdefView_GetOrg(&v15->refdef.view, &outOrg);
  *(double *)&_XMM0 = Com_GetTimeScale();
  __asm
  {
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, dword ptr [rdi+65E4h]
    vmulss  xmm2, xmm1, cs:__real@3a83126f
    vmulss  xmm1, xmm0, xmm2; timeStep
  }
  Cloth_Update_FrameFlip(v7, *(const float *)&_XMM1, &outOrg);
  CG_SnapshotSP_ProcessSnapshots((const LocalClientNum_t)v7);
  if ( !LocalClientGlobals->snap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_view_sp.cpp", 902, ASSERT_TYPE_ASSERT, "(cgameGlob->snap)", (const char *)&queryFormat, "cgameGlob->snap") )
    __debugbreak();
  if ( !LocalClientGlobals->nextSnap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_view_sp.cpp", 903, ASSERT_TYPE_ASSERT, "(cgameGlob->nextSnap)", (const char *)&queryFormat, "cgameGlob->nextSnap") )
    __debugbreak();
  if ( LocalClientGlobals->nextSnap->serverTime != G_MainSP_GetServerSnapTime() )
  {
    LODWORD(v32) = G_MainSP_GetServerSnapTime();
    LODWORD(v31) = LocalClientGlobals->nextSnap->serverTime;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_view_sp.cpp", 904, ASSERT_TYPE_ASSERT, "( cgameGlob->nextSnap->serverTime ) == ( G_MainSP_GetServerSnapTime() )", "%s == %s\n\t%i, %i", "cgameGlob->nextSnap->serverTime", "G_MainSP_GetServerSnapTime()", v31, v32) )
      __debugbreak();
  }
  if ( updateState == SET_SHAPE_KEY_A || updateState == NOP )
    R_ClearScene();
  CG_LaserClearUnused((const LocalClientNum_t)v7);
  FX_ClearEntImpactMarks((LocalClientNum_t)v7);
  FX_BeginMarks((LocalClientNum_t)v7, serverTime);
  v20 = cl_maxLocalClients;
  if ( (unsigned int)v7 >= LODWORD(cl_maxLocalClients) )
  {
    *(float *)&v30 = cl_maxLocalClients;
    LODWORD(v29) = v7;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_static.h", 352, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( (cl_maxLocalClients) )", "localClientNum doesn't index MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v29, v30) )
      __debugbreak();
    v20 = cl_maxLocalClients;
  }
  if ( v20 == 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_static.h", 336, ASSERT_TYPE_ASSERT, "(cl_maxLocalClients)", "%s\n\tMust be called after client allocation", "cl_maxLocalClients") )
    __debugbreak();
  if ( cls.m_localClientsActive.activeCount <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_static.h", 353, ASSERT_TYPE_ASSERT, "(GetGameLocalClientActiveCount() > 0)", "%s\n\tClient active data has not been setup", "GetGameLocalClientActiveCount() > 0") )
    __debugbreak();
  if ( cls.m_localClientsActive.firstActiveIndex == LOCAL_CLIENT_INVALID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_static.h", 354, ASSERT_TYPE_ASSERT, "(m_localClientsActive.firstActiveIndex != LOCAL_CLIENT_INVALID)", "%s\n\tClient active data has not been setup", "m_localClientsActive.firstActiveIndex != LOCAL_CLIENT_INVALID") )
    __debugbreak();
  if ( (_DWORD)v7 == cls.m_localClientsActive.firstActiveIndex )
    FX_MarksCacheWorldCells(g_worldDraw);
  CG_ClearHudGrenades(LocalClientGlobals);
  CG_PredictSP_SetupPlayerState((LocalClientNum_t)v7);
  LocalClientGlobals->movingPlatforms.m_contactEnt = 2047;
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_FAST_LAND|WEAPON_OFFHAND_END) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_view_sp.cpp", 833, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::VIEW_LINKED_ENTITIES ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::VIEW_LINKED_ENTITIES )") )
    __debugbreak();
  v21 = 0;
  v22 = CG_GetLocalClientGlobals((const LocalClientNum_t)v7);
  if ( v22->predictedPlayerState.numViewLinkedEnts > 0 )
  {
    do
    {
      v23 = v21;
      linkedEnt = v22->predictedPlayerState.viewLinkedEntityData[v23].linkedEnt;
      EntitySystem = CgEntitySystem::GetEntitySystem((const LocalClientNum_t)v7);
      if ( (unsigned int)linkedEnt >= 0x800 )
      {
        LODWORD(v30) = 2048;
        LODWORD(v29) = linkedEnt;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", v29, v30) )
          __debugbreak();
      }
      v26 = v22->predictedPlayerState.viewLinkedEntityData[v23].flags & 1;
      v27 = linkedEnt;
      if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_FAST_LAND|WEAPON_OFFHAND_END) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 687, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::VIEW_LINKED_ENTITIES ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::VIEW_LINKED_ENTITIES )") )
        __debugbreak();
      v28 = EntitySystem->m_entities[v27].flags | 0x4000;
      EntitySystem->m_entities[v27].flags = v28;
      if ( v26 )
        EntitySystem->m_entities[v27].flags = v28 | 0x8000;
      ++v21;
    }
    while ( v21 < v22->predictedPlayerState.numViewLinkedEnts );
    v11 = (unsigned __int64)&dword_14FDE803C & 3;
  }
  CG_ViewSP_SortClientLinkedEntities((const LocalClientNum_t)v7);
  CgStatic::ClearActiveStatics((const LocalClientNum_t)v7);
  if ( !LocalClientGlobals->nextSnap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_view_sp.cpp", 931, ASSERT_TYPE_ASSERT, "(cgameGlob->nextSnap != nullptr)", (const char *)&queryFormat, "cgameGlob->nextSnap != nullptr") )
    __debugbreak();
  ScriptableCl_BeginFrame((const LocalClientNum_t)v7, LocalClientGlobals->nextSnap->serverTime, 0);
  Profile2_UpdateEntry(27);
  if ( v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &dword_14FDE803C) )
    __debugbreak();
  _InterlockedDecrement(&dword_14FDE803C);
}

/*
==============
CG_ViewSP_CalcViewValues
==============
*/
void CG_ViewSP_CalcViewValues(const LocalClientNum_t localClientNum)
{
  __int64 v5; 
  const dvar_t *v7; 
  CgHandler *Handler; 
  bool IsThirdPersonMode; 
  vec3_t *inOutAngles; 
  bool ShouldRunPrediction; 
  bool v16; 
  float v18; 
  cg_t *LocalClientGlobals; 
  bool outIsThirdPerson; 
  int outIsRemoteEyes; 
  vec3_t outOrg; 
  __int64 v26; 
  vec3_t v27; 
  WorldUpReferenceFrame v28; 
  char v29; 
  void *retaddr; 

  _RAX = &retaddr;
  v26 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
  }
  v5 = localClientNum;
  outIsRemoteEyes = 0;
  _RSI = CG_GetLocalClientGlobals(localClientNum);
  v7 = DVARBOOL_cg_drawpaused;
  if ( !DVARBOOL_cg_drawpaused && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawpaused") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v7);
  if ( v7->current.enabled )
  {
    *(double *)&_XMM0 = CL_Screen_GetMenuBlurRadius((LocalClientNum_t)v5);
    __asm { vmovaps xmm6, xmm0 }
  }
  else
  {
    __asm { vxorps  xmm6, xmm6, xmm6 }
  }
  *(double *)&_XMM0 = CG_View_GetZNear((const LocalClientNum_t)v5);
  __asm { vmovaps xmm7, xmm0 }
  Handler = CgHandler::getHandler((LocalClientNum_t)v5);
  if ( !CgWeaponMap::ms_instance[v5] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
    __debugbreak();
  IsThirdPersonMode = BG_IsThirdPersonMode(CgWeaponMap::ms_instance[v5], &_RSI->predictedPlayerState);
  outIsThirdPerson = BG_ShouldHandleThirdPersonVehicleCamera(&_RSI->predictedPlayerState, Handler);
  __asm
  {
    vmovaps xmm2, xmm6; uiBlurRadius
    vmovaps xmm1, xmm7; zNear
  }
  CG_View_SetupRefDef((const LocalClientNum_t)v5, *(const float *)&_XMM1, *(const float *)&_XMM2);
  if ( _RSI->cubemapShot )
  {
    CG_View_CalcCubemapViewValues((const LocalClientNum_t)v5);
  }
  else
  {
    if ( !CL_Cameraman_Enabled() || CL_Cameraman_IsDemoActive() )
    {
      s_visionSetUpdateData_0.cvsData = &_RSI->cvsData;
      s_visionSetUpdateData_0.time = _RSI->refdef.time;
      Sys_AddWorkerCmd(WRKCMD_CG_VISIONSETUPDATE, &s_visionSetUpdateData_0);
    }
    CG_View_SetupViewport((const LocalClientNum_t)v5);
    CG_View_SetupAimAssist((const LocalClientNum_t)v5);
    if ( CL_Cameraman_Enabled() && !CL_Cameraman_IsDemoActive() )
      goto LABEL_17;
    CG_ViewMotion_Update((const LocalClientNum_t)v5);
    *(double *)&_XMM0 = BG_GetSpeed(&_RSI->predictedPlayerState, _RSI->time, Handler);
    __asm { vmovss  dword ptr [rsi+49D84h], xmm0 }
    if ( CG_ViewSP_PausedClientFreeMove((LocalClientNum_t)v5) )
    {
      inOutAngles = &_RSI->refdefViewAngles;
      CG_View_OffsetCrosshair((const LocalClientNum_t)v5, &_RSI->refdefViewAngles);
    }
    else
    {
      CG_View_CalcViewOrigin((const LocalClientNum_t)v5);
      inOutAngles = &_RSI->refdefViewAngles;
      if ( !CG_View_CalcVehicleCamera((const LocalClientNum_t)v5, &outIsRemoteEyes) )
      {
        BG_CalcLinkedViewValues(&_RSI->predictedPlayerState, &_RSI->refdefViewAngles);
        WorldUpReferenceFrame::WorldUpReferenceFrame(&v28, &_RSI->predictedPlayerState, Handler);
        WorldUpReferenceFrame::ApplyReferenceFrameToAngles(&v28, &_RSI->refdefViewAngles);
        if ( !Dvar_GetInt_Internal_DebugName(DVARINT_cl_freemove, "cl_freemove") )
        {
          RefdefView_GetOrg(&_RSI->refdef.view, &outOrg);
          CG_CalcErrorDecay((const LocalClientNum_t)v5, &outOrg);
          RefdefView_SetOrg(&_RSI->refdef.view, &outOrg);
        }
        CG_View_CalcTurretCamera((const LocalClientNum_t)v5, 1);
        CG_View_CalcRemoteEyes((LocalClientNum_t)v5, &outIsRemoteEyes);
        if ( !outIsRemoteEyes )
        {
          _RSI->remoteMissileCamInitialized = 0;
          CG_View_CalcCameraTweaks((const LocalClientNum_t)v5);
          CG_View_TraceProfiling((const LocalClientNum_t)v5);
          RefdefView_GetOrg(&_RSI->refdef.view, &outOrg);
          CG_View_AddViewHeight((const LocalClientNum_t)v5, &outOrg);
          RefdefView_SetOrg(&_RSI->refdef.view, &outOrg);
          ShouldRunPrediction = CG_PredictSP_ShouldRunPrediction((const LocalClientNum_t)v5);
          CG_View_OffsetFirstPersonView((const LocalClientNum_t)v5, ShouldRunPrediction, &_RSI->refdefViewAngles, &outOrg);
          RefdefView_SetOrg(&_RSI->refdef.view, &outOrg);
          CG_View_OffsetCrosshair((const LocalClientNum_t)v5, &_RSI->refdefViewAngles);
        }
        memset(&outOrg, 0, sizeof(outOrg));
      }
    }
    v16 = !outIsRemoteEyes && !IsThirdPersonMode && !outIsThirdPerson;
    CG_View_ApplySmoothing((const LocalClientNum_t)v5, v16, inOutAngles);
    if ( !_RSI->IsClientGamePaused(_RSI) )
      CG_View_UpdateWeaponMovement_Post(_RSI);
    CG_View_CalcDrivingCamera((const LocalClientNum_t)v5);
    if ( !CG_ViewSP_PausedClientFreeMove((LocalClientNum_t)v5) )
      CG_ShakeCamera((LocalClientNum_t)v5);
    RefdefView_GetOrg(&_RSI->refdef.view, &v27);
    __asm
    {
      vmovsd  xmm0, qword ptr [rbp+57h+var_88]
      vmovsd  qword ptr [rbp+57h+outOrg], xmm0
    }
    v18 = v27.v[2];
    outOrg.v[2] = v27.v[2];
    if ( !_RSI->aimAssistEyeOrigin.initialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\anticheat\\security_obfuscation_integer.h", 186, ASSERT_TYPE_ASSERT, "(initialized)", (const char *)&queryFormat, "initialized") )
      __debugbreak();
    _RSI->aimAssistEyeOrigin.secureInt32_3_aab += _RSI->aimAssistEyeOrigin.secureInt32_3_set_aab;
    _RSI->aimAssistEyeOrigin.data[0] = ((((_DWORD)_RSI + 98316) ^ _RSI->aimAssistEyeOrigin.secureInt32_3_aab) * ((((_DWORD)_RSI + 98316) ^ _RSI->aimAssistEyeOrigin.secureInt32_3_aab) + 2)) ^ LODWORD(outOrg.v[0]);
    _RSI->aimAssistEyeOrigin.data[1] = ((((_DWORD)_RSI + 98320) ^ _RSI->aimAssistEyeOrigin.secureInt32_3_aab) * ((((_DWORD)_RSI + 98320) ^ _RSI->aimAssistEyeOrigin.secureInt32_3_aab) + 2)) ^ LODWORD(outOrg.v[1]);
    _RSI->aimAssistEyeOrigin.data[2] = ((((_DWORD)_RSI + 98324) ^ _RSI->aimAssistEyeOrigin.secureInt32_3_aab) * ((((_DWORD)_RSI + 98324) ^ _RSI->aimAssistEyeOrigin.secureInt32_3_aab) + 2)) ^ LODWORD(v18);
    memset(&outOrg, 0, sizeof(outOrg));
    AnglesToAxis(inOutAngles, &_RSI->refdef.view.axis);
    if ( !outIsRemoteEyes )
    {
      if ( !outIsThirdPerson )
      {
        s_shakeCmdData_0.localClientNum = v5;
        s_shakeCmdData_0.cameraData = &s_shakeData_0;
        Sys_AddWorkerCmd(WRKCMD_SHAKE_CALC, &s_shakeCmdData_0);
      }
      LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)v5);
      if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_view_sp.cpp", 459, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
        __debugbreak();
      if ( (unsigned int)(LocalClientGlobals->predictedPlayerState.pm_type - 2) > 1 && !CG_View_ApplyLinkCameraAnimation((const LocalClientNum_t)v5) )
        CG_View_CalcViewAnimation((const LocalClientNum_t)v5);
      CG_Camera_Vehicles_Update((LocalClientNum_t)v5, &outIsThirdPerson, &_RSI->refdef.view);
      if ( !outIsThirdPerson )
      {
        Sys_WaitWorkerCmdsOfType(WRKCMD_SHAKE_CALC);
        RefdefView_GetOrg(&_RSI->refdef.view, &outOrg);
        CG_Shake_ApplyHandheldCamera((const LocalClientNum_t)v5, &s_shakeData_0.handheldTranslation, &s_shakeData_0.impulseTranslation, &s_shakeData_0.handheldAngles, &s_shakeData_0.impulseAngles, &outOrg, inOutAngles);
        RefdefView_SetOrg(&_RSI->refdef.view, &outOrg);
        memset(&outOrg, 0, sizeof(outOrg));
      }
      AnglesToAxis(inOutAngles, &_RSI->refdef.view.axis);
      CG_PerturbCamera(_RSI);
    }
    Sys_WaitWorkerCmdsOnlyOfType(WRKCMD_CG_VISIONSETUPDATE);
    CG_View_FinalizeViewValues((const LocalClientNum_t)v5);
    if ( CL_Cameraman_Enabled() && CL_Cameraman_IsDemoActive() )
    {
LABEL_17:
      CL_Cameraman_CalcViewValues((LocalClientNum_t)v5, 0);
      CG_View_CalcFov((const LocalClientNum_t)v5);
    }
    else
    {
      CG_DrawDebug_Player_ViewValues((LocalClientNum_t)v5);
      AdvancedSwayState::DebugDraw(&_RSI->vmMotionState, (const LocalClientNum_t)v5);
    }
  }
  _R11 = &v29;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
  }
}

/*
==============
CG_ViewSP_ComputeViewLinkedEntityTransforms
==============
*/
void CG_ViewSP_ComputeViewLinkedEntityTransforms(const LocalClientNum_t localClientNum)
{
  cg_t *LocalClientGlobals; 
  signed int v19; 
  unsigned __int8 *p_flags; 
  __int64 v22; 
  CgEntitySystem *EntitySystem; 
  unsigned int number; 
  unsigned int v26; 
  unsigned int v27; 
  const DObj *v28; 
  void (__fastcall *v32)(const vec3_t *, vec4_t *); 
  vec3_t *p_outOrigin; 
  ViewJostleState *outJostleState; 
  __int64 v49; 
  int v50; 
  int v51; 
  int v52; 
  vec3_t outOrigin; 
  __int64 v54; 
  vec3_t outAngles; 
  int v56[4]; 
  CgViewSystem::JostleConfig config; 
  tmat43_t<vec3_t> out; 
  tmat43_t<vec3_t> world; 
  char v60; 
  void *retaddr; 

  _RAX = &retaddr;
  v54 = -2i64;
  __asm { vmovaps xmmword ptr [rax-38h], xmm6 }
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_FAST_LAND|WEAPON_OFFHAND_END) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_view_sp.cpp", 1013, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::VIEW_LINKED_ENTITIES ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::VIEW_LINKED_ENTITIES )") )
    __debugbreak();
  CG_ViewSP_SortClientLinkedEntities(localClientNum);
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  config.respectBlendOut = 1;
  _RDI = DVARFLT_cg_helmetViewSwayRate;
  if ( !DVARFLT_cg_helmetViewSwayRate && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_helmetViewSwayRate") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RDI);
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+28h]
    vmovss  [rbp+40h+config.viewSwayScale], xmm0
  }
  _RDI = DVARFLT_cg_helmetAnimSwayRate;
  if ( !DVARFLT_cg_helmetAnimSwayRate && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_helmetAnimSwayRate") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RDI);
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+28h]
    vmovss  [rbp+40h+config.animSwayScale], xmm0
  }
  _RDI = DVARFLT_cg_helmetMaxLinearVelocityInfluence;
  if ( !DVARFLT_cg_helmetMaxLinearVelocityInfluence && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_helmetMaxLinearVelocityInfluence") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RDI);
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+28h]
    vmovss  [rbp+40h+config.maxLinearVelocityInfluence], xmm0
  }
  _RDI = DVARVEC3_cg_helmetLinearVelocityToAngleRate;
  if ( !DVARVEC3_cg_helmetLinearVelocityToAngleRate && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 734, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_helmetLinearVelocityToAngleRate") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RDI);
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+28h]
    vmovss  dword ptr [rbp+40h+config.linearVelocityToAngleRate], xmm0
    vmovss  xmm1, dword ptr [rdi+2Ch]
    vmovss  dword ptr [rbp+40h+config.linearVelocityToAngleRate+4], xmm1
    vmovss  xmm0, dword ptr [rdi+30h]
    vmovss  dword ptr [rbp+40h+config.linearVelocityToAngleRate+8], xmm0
  }
  _RDI = DVARVEC3_cg_helmetMaxOffsetFromView;
  if ( !DVARVEC3_cg_helmetMaxOffsetFromView && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 734, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_helmetMaxOffsetFromView") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RDI);
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+28h]
    vmovss  dword ptr [rbp+40h+config.maxOffset], xmm0
    vmovss  xmm1, dword ptr [rdi+2Ch]
    vmovss  dword ptr [rbp+40h+config.maxOffset+4], xmm1
    vmovss  xmm0, dword ptr [rdi+30h]
    vmovss  dword ptr [rbp+40h+config.maxOffset+8], xmm0
  }
  AxisCopy(&LocalClientGlobals->refdef.view.axis, (tmat33_t<vec3_t> *)&out);
  RefdefView_GetOrg(&LocalClientGlobals->refdef.view, &out.m[3]);
  v19 = 0;
  if ( LocalClientGlobals->predictedPlayerState.numViewLinkedEnts > 0 )
  {
    p_flags = &LocalClientGlobals->predictedPlayerState.viewLinkedEntityData[0].flags;
    __asm { vmovss  xmm6, cs:__real@45800000 }
    do
    {
      v22 = *((unsigned __int16 *)p_flags - 1);
      EntitySystem = CgEntitySystem::GetEntitySystem(localClientNum);
      if ( (unsigned int)v22 >= 0x800 )
      {
        LODWORD(v49) = 2048;
        LODWORD(outJostleState) = v22;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", outJostleState, v49) )
          __debugbreak();
      }
      _RDI = &EntitySystem->m_entities[v22];
      if ( !CG_ViewSP_ShouldDrawViewLinkedEntity(localClientNum, _RDI) )
        goto LABEL_62;
      number = _RDI->nextState.number;
      if ( number > 0x9E4 )
      {
        LODWORD(v49) = _RDI->nextState.number;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 55, ASSERT_TYPE_ASSERT, "( ( handle >= 0 && handle < ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) ) )", "%s\n\t( handle ) = %i", "( handle >= 0 && handle < ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) )", v49) )
          __debugbreak();
      }
      if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
      {
        LODWORD(v49) = 2;
        LODWORD(outJostleState) = localClientNum;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 58, ASSERT_TYPE_ASSERT, "(unsigned)( localClientIndex ) < (unsigned)( (2) )", "localClientIndex doesn't index MAX_DOBJ_CLIENTS\n\t%i not in [0, %i)", outJostleState, v49) )
          __debugbreak();
      }
      v26 = 2533 * localClientNum + number;
      if ( v26 >= 0x13CA )
      {
        LODWORD(v49) = v26;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 62, ASSERT_TYPE_ASSERT, "( ( (unsigned)handle < ( sizeof( *array_counter( clientObjMap ) ) + 0 ) ) )", "%s\n\t( handle ) = %i", "( (unsigned)handle < ( sizeof( *array_counter( clientObjMap ) ) + 0 ) )", v49) )
          __debugbreak();
      }
      v27 = clientObjMap[v26];
      if ( v27 )
      {
        if ( v27 >= (unsigned int)s_objCount )
        {
          LODWORD(v49) = v27;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 64, ASSERT_TYPE_ASSERT, "( ( !objIndex || ( (unsigned)objIndex < s_objCount ) ) )", "%s\n\t( objIndex ) = %i", "( !objIndex || ( (unsigned)objIndex < s_objCount ) )", v49) )
            __debugbreak();
        }
        v28 = (const DObj *)s_objBuf[v27];
        if ( v28 )
          goto LABEL_43;
      }
      else
      {
        v28 = NULL;
      }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_view_sp.cpp", 1043, ASSERT_TYPE_ASSERT, "(dobj)", (const char *)&queryFormat, "dobj") )
        __debugbreak();
LABEL_43:
      DObjLock(v28);
      DObjSkelReset(v28);
      DObjUnlock(v28);
      CG_Entity_UpdatePreviousPosition(_RDI);
      MatrixMultiply43(&LocalClientGlobals->linkedToPlayerView[v19].viewToLinkedTagTransform, &out, &world);
      BG_UpdateViewLinkedModelTransform((const ViewLinkedData *)(p_flags - 30), &world, &outOrigin, &outAngles);
      __asm
      {
        vmovss  xmm0, dword ptr [rsp+140h+outOrigin]
        vmovss  [rsp+140h+var_100], xmm0
      }
      if ( (v50 & 0x7F800000) == 2139095040 )
        goto LABEL_66;
      __asm
      {
        vmovss  xmm0, dword ptr [rsp+140h+outOrigin+4]
        vmovss  [rsp+140h+var_100], xmm0
      }
      if ( (v51 & 0x7F800000) == 2139095040 )
        goto LABEL_66;
      __asm
      {
        vmovss  xmm0, dword ptr [rsp+140h+outOrigin+8]
        vmovss  [rsp+140h+var_100], xmm0
      }
      if ( (v52 & 0x7F800000) == 2139095040 )
      {
LABEL_66:
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 411, ASSERT_TYPE_SANITY, "( !IS_NAN( ( inOrigin )[0] ) && !IS_NAN( ( inOrigin )[1] ) && !IS_NAN( ( inOrigin )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( inOrigin )[0] ) && !IS_NAN( ( inOrigin )[1] ) && !IS_NAN( ( inOrigin )[2] )") )
          __debugbreak();
      }
      if ( !_RDI->pose.origin.Set_origin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 413, ASSERT_TYPE_ASSERT, "(pose->origin.Set_origin)", (const char *)&queryFormat, "pose->origin.Set_origin") )
        __debugbreak();
      if ( _RDI->pose.isEntityPose )
      {
        CG_Pose_ValidateSetEntityPoseOrigin(&_RDI->pose);
        _RDI->pose.entOriginSet = 1;
        _RDI->pose.hasStaleEntityPose = 1;
      }
      v32 = ObfuscateSetFunctionPointer_origin(_RDI->pose.origin.Set_origin, &_RDI->pose);
      if ( _RDI->pose.isPosePrecise )
      {
        __asm
        {
          vmulss  xmm1, xmm6, dword ptr [rsp+140h+outOrigin]
          vcvttss2si ecx, xmm1
        }
        v56[0] = _ECX;
        __asm
        {
          vmulss  xmm1, xmm6, dword ptr [rsp+140h+outOrigin+4]
          vcvttss2si ecx, xmm1
        }
        v56[1] = _ECX;
        __asm
        {
          vmulss  xmm1, xmm6, dword ptr [rsp+140h+outOrigin+8]
          vcvttss2si ecx, xmm1
        }
        v56[2] = _ECX;
        p_outOrigin = (vec3_t *)v56;
      }
      else
      {
        p_outOrigin = &outOrigin;
      }
      v32(p_outOrigin, &_RDI->pose.origin.origin.origin);
      __asm
      {
        vmovss  xmm0, dword ptr [rsp+140h+outOrigin]
        vmovss  dword ptr [rdi+1Ch], xmm0
        vmovss  xmm1, dword ptr [rsp+140h+outOrigin+4]
        vmovss  dword ptr [rdi+20h], xmm1
        vmovss  xmm0, dword ptr [rsp+140h+outOrigin+8]
        vmovss  dword ptr [rdi+24h], xmm0
      }
      if ( (*p_flags & 0x10) != 0 )
      {
        if ( (unsigned int)v19 >= 4 )
        {
          LODWORD(v49) = 4;
          LODWORD(outJostleState) = v19;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_view_sp.cpp", 1067, ASSERT_TYPE_ASSERT, "(unsigned)( linkIndex ) < (unsigned)( 4 )", "linkIndex doesn't index MAX_VIEW_LINKED_ENTITIES\n\t%i not in [0, %i)", outJostleState, v49) )
            __debugbreak();
        }
        CG_View_CalculateViewJostle(LocalClientGlobals, &config, &world, &outAngles, &outAngles, &LocalClientGlobals->linkedToPlayerView[v19]);
      }
      __asm
      {
        vmovss  xmm0, dword ptr [rsp+140h+outAngles]
        vmovss  dword ptr [rdi+48h], xmm0
        vmovss  xmm1, dword ptr [rsp+140h+outAngles+4]
        vmovss  dword ptr [rdi+4Ch], xmm1
        vmovss  xmm0, dword ptr [rsp+140h+outAngles+8]
        vmovss  dword ptr [rdi+50h], xmm0
      }
      memset(&outOrigin, 0, sizeof(outOrigin));
LABEL_62:
      ++v19;
      p_flags += 32;
    }
    while ( v19 < LocalClientGlobals->predictedPlayerState.numViewLinkedEnts );
  }
  _R11 = &v60;
  __asm { vmovaps xmm6, xmmword ptr [r11-10h] }
}

/*
==============
CG_ViewSP_DoFollowEnt
==============
*/
void CG_ViewSP_DoFollowEnt(const LocalClientNum_t localClientNum)
{
  int prevFollowEnt; 
  const dvar_t *v7; 
  const dvar_t *v8; 
  const dvar_t *v9; 
  centity_t *Entity; 
  const cpose_t *p_pose; 
  void (__fastcall *FunctionPointer_origin)(const vec4_t *, vec3_t *); 
  const dvar_t *v31; 
  const dvar_t *v32; 
  int v40[4]; 
  __int64 v41; 
  char v43; 
  void *retaddr; 

  _RAX = &retaddr;
  v41 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm8
  }
  _RDI = CG_GetLocalClientGlobals(localClientNum);
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_view_sp.cpp", 336, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  prevFollowEnt = _RDI->prevFollowEnt;
  _RDI->prevFollowEnt = -1;
  v7 = DVARINT_cl_freemove;
  if ( !DVARINT_cl_freemove && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_freemove") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v7);
  if ( v7->current.integer )
  {
    v8 = DVARINT_cg_followEnt;
    if ( !DVARINT_cg_followEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_followEnt") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v8);
    if ( v8->current.integer >= 0 )
    {
      v9 = DVARINT_cg_followEnt;
      if ( !DVARINT_cg_followEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_followEnt") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v9);
      Entity = CG_GetEntity((const LocalClientNum_t)_RDI->localClientNum, v9->current.integer);
      p_pose = &Entity->pose;
      if ( (Entity->flags & 1) != 0 )
      {
        if ( !Entity->pose.origin.Get_origin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 380, ASSERT_TYPE_ASSERT, "(pose->origin.Get_origin)", (const char *)&queryFormat, "pose->origin.Get_origin") )
          __debugbreak();
        FunctionPointer_origin = ObfuscateGetFunctionPointer_origin(p_pose->origin.Get_origin, p_pose);
        FunctionPointer_origin(&p_pose->origin.origin.origin, (vec3_t *)v40);
        if ( p_pose->isPosePrecise )
        {
          __asm
          {
            vmovd   xmm0, [rsp+0B8h+var_78]
            vcvtdq2pd xmm0, xmm0
            vmovsd  xmm2, cs:__real@3f30000000000000
            vmulsd  xmm0, xmm0, xmm2
            vcvtsd2ss xmm3, xmm0, xmm0
            vmovss  [rsp+0B8h+var_78], xmm3
            vmovd   xmm1, [rsp+0B8h+var_74]
            vcvtdq2pd xmm1, xmm1
            vmulsd  xmm0, xmm1, xmm2
            vcvtsd2ss xmm4, xmm0, xmm0
            vmovss  [rsp+0B8h+var_74], xmm4
            vmovd   xmm1, [rsp+0B8h+var_70]
            vcvtdq2pd xmm1, xmm1
            vmulsd  xmm0, xmm1, xmm2
            vcvtsd2ss xmm5, xmm0, xmm0
            vmovss  [rsp+0B8h+var_70], xmm5
          }
        }
        else
        {
          __asm
          {
            vmovss  xmm5, [rsp+0B8h+var_70]
            vmovss  xmm4, [rsp+0B8h+var_74]
            vmovss  xmm3, [rsp+0B8h+var_78]
          }
        }
        __asm
        {
          vsubss  xmm6, xmm3, dword ptr [rdi+66B0Ch]
          vsubss  xmm7, xmm4, dword ptr [rdi+66B10h]
          vsubss  xmm8, xmm5, dword ptr [rdi+66B14h]
          vmovss  dword ptr [rdi+66B0Ch], xmm3
          vmovss  xmm0, [rsp+0B8h+var_74]
          vmovss  dword ptr [rdi+66B10h], xmm0
          vmovss  xmm1, [rsp+0B8h+var_70]
          vmovss  dword ptr [rdi+66B14h], xmm1
        }
        v31 = DVARINT_cg_followEnt;
        if ( !DVARINT_cg_followEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_followEnt") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v31);
        _RDI->prevFollowEnt = v31->current.integer;
        v32 = DVARINT_cg_followEnt;
        if ( !DVARINT_cg_followEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_followEnt") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v32);
        if ( prevFollowEnt == v32->current.integer )
        {
          __asm
          {
            vaddss  xmm0, xmm6, dword ptr [rdi+38h]
            vmovss  dword ptr [rdi+38h], xmm0
            vaddss  xmm1, xmm7, dword ptr [rdi+3Ch]
            vmovss  dword ptr [rdi+3Ch], xmm1
            vaddss  xmm0, xmm8, dword ptr [rdi+40h]
            vmovss  dword ptr [rdi+40h], xmm0
          }
        }
        memset(v40, 0, 0xCui64);
      }
      else
      {
        Dvar_SetInt_Internal(DVARINT_cg_followEnt, -1);
      }
    }
  }
  _R11 = &v43;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, [rsp+0B8h+var_48]
    vmovaps xmm8, xmmword ptr [r11-30h]
  }
}

/*
==============
CG_ViewSP_DrawActiveFrame
==============
*/
void CG_ViewSP_DrawActiveFrame(const LocalClientNum_t localClientNum, int isFirstClientView, Scr_UpdateFrame_State updateState, CubemapShot cubemapShot, int cubemapSize, unsigned int drawType)
{
  __int64 v12; 
  CgClientSideEffectsSystem *v13; 
  CgVehicleSystem *v14; 
  cg_t *LocalClientGlobals; 
  const dvar_t *v18; 
  int frametime; 
  int time; 
  DObj *v23; 
  DObj *ClientDObj; 
  const snapshot_t *snap; 
  const snapshot_t *nextSnap; 
  unsigned int v27; 
  cg_t *v28; 
  cg_t *v29; 
  int shellshockIndex; 
  int shellshockDuration; 
  int shellshockTime; 
  const shellshock_parms_t *ShellshockParms; 
  int v34; 
  int v35; 
  CgEntitySystem *EntitySystem; 
  cg_t *v37; 
  CgAntiLag *Instance; 
  CgBallistics *System; 
  cg_t *v43; 
  Scr_UpdateFrame_State v44; 
  const Material **serverMaterialsTouch; 
  cg_t *v46; 
  ClConfigStrings *ClConfigStrings; 
  const char *v48; 
  const char *v49; 
  XModel *v50; 
  int v51; 
  LocalClientNum_t OnlyLocalClientNum; 
  cg_t *v53; 
  unsigned __int8 i; 
  playerState_s *v55; 
  int v56; 
  Physics_WorldId v57; 
  cg_t *v77; 
  const dvar_t *v78; 
  int IsPlayerZeroG; 
  int thermalVisionActive; 
  BOOL v85; 
  const vec3_t *FocusOrigin; 
  const vec3_t *ClientVelocity; 
  CgHandler *Handler; 
  char v109; 
  char v110; 
  __int64 v113; 
  float fmt; 
  __int64 isZeroG; 
  __int64 isZeroGa; 
  int isZeroGb; 
  int isZeroGc; 
  int isZeroGd; 
  __int64 inPip; 
  __int64 inPipa; 
  float inPipb; 
  float inPipc; 
  __int64 streamRender; 
  __int64 v128; 
  vec3_t origin; 
  float outCosFovLimit; 
  float outZoomFactor; 
  int v134; 
  int data[2]; 
  vec3_t v136; 
  vec3_t viewOrg; 
  vec3_t eyeOrg; 
  CgWeaponSystem *v139; 
  CgViewSystem *v140; 
  unsigned int v141; 
  unsigned int v142; 
  CgBallistics *v143; 
  CgSoundSystem *v144; 
  playerState_s *p_predictedPlayerState; 
  unsigned __int64 v146; 
  unsigned int v147; 
  unsigned int v148; 
  unsigned int v149; 
  unsigned int v150; 
  vec3_t outOrg; 
  unsigned int *v152; 
  unsigned int *v153; 
  __int64 v154; 
  secure_uint32_3_t *p_aimAssistEyeOrigin; 
  unsigned int *v156; 
  unsigned int *v157; 
  secure_uint32_3_t *p_aimAssistViewOrigin; 
  vec3_t clientPos; 
  vec4_t out; 
  WorldUpReferenceFrame v161; 
  char v162; 
  void *retaddr; 

  _RAX = &retaddr;
  v154 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
  }
  v12 = localClientNum;
  Profile2_UpdateEntry(30);
  v146 = (unsigned __int64)&dword_14FDE8048 & 3;
  if ( ((unsigned __int8)&dword_14FDE8048 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &dword_14FDE8048) )
    __debugbreak();
  _InterlockedIncrement(&dword_14FDE8048);
  if ( (_BYTE)CgViewSystem::ms_allocatedType != HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.h", 278, ASSERT_TYPE_ASSERT, "(ms_allocatedType == SubSystem::VIEW_SYSTEM_TYPE)", "%s\n\tTrying to access the view system for localClientNum %d but the view system type does not match-> System Type:%d  Allocated Type:%d\n", "ms_allocatedType == SubSystem::VIEW_SYSTEM_TYPE", v12, 1, (unsigned __int8)CgViewSystem::ms_allocatedType) )
    __debugbreak();
  if ( (unsigned int)v12 >= CgViewSystem::ms_allocatedCount )
  {
    LODWORD(inPip) = CgViewSystem::ms_allocatedCount;
    LODWORD(isZeroG) = v12;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.h", 279, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", isZeroG, inPip) )
      __debugbreak();
  }
  if ( !CgViewSystem::ms_viewSystemArray[v12] )
  {
    LODWORD(inPip) = v12;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.h", 280, ASSERT_TYPE_ASSERT, "(ms_viewSystemArray[localClientNum])", "%s\n\tTrying to access unallocated view system for localClientNum %d\n", "ms_viewSystemArray[localClientNum]", inPip) )
      __debugbreak();
  }
  v140 = CgViewSystem::ms_viewSystemArray[v12];
  if ( !(_BYTE)CgSoundSystem::ms_allocatedType )
  {
    LODWORD(inPip) = v12;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_sound.h", 179, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the sound system for localClientNum %d but the sound system type is not known\n", "ms_allocatedType != GameModeType::NONE", inPip) )
      __debugbreak();
  }
  if ( (unsigned int)v12 >= CgSoundSystem::ms_allocatedCount )
  {
    LODWORD(inPip) = CgSoundSystem::ms_allocatedCount;
    LODWORD(isZeroG) = v12;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_sound.h", 180, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", isZeroG, inPip) )
      __debugbreak();
  }
  if ( !CgSoundSystem::ms_soundSystemArray[v12] )
  {
    LODWORD(inPip) = v12;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_sound.h", 181, ASSERT_TYPE_ASSERT, "(ms_soundSystemArray[localClientNum])", "%s\n\tTrying to access unallocated sound system for localClientNum %d\n", "ms_soundSystemArray[localClientNum]", inPip) )
      __debugbreak();
  }
  v144 = CgSoundSystem::ms_soundSystemArray[v12];
  if ( CgWeaponSystem::ms_allocatedType == WEAPONS_TYPE_NONE )
  {
    LODWORD(inPip) = v12;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapons.h", 530, ASSERT_TYPE_ASSERT, "(ms_allocatedType != CgWeaponsType::WEAPONS_TYPE_NONE)", "%s\n\tTrying to access the weapon system for localClientNum %d but the weapon system type is not known\n", "ms_allocatedType != CgWeaponsType::WEAPONS_TYPE_NONE", inPip) )
      __debugbreak();
  }
  if ( (unsigned int)v12 >= CgWeaponSystem::ms_allocatedCount )
  {
    LODWORD(inPip) = CgWeaponSystem::ms_allocatedCount;
    LODWORD(isZeroG) = v12;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapons.h", 531, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", isZeroG, inPip) )
      __debugbreak();
  }
  if ( !CgWeaponSystem::ms_weaponSystemArray[v12] )
  {
    LODWORD(inPip) = v12;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapons.h", 532, ASSERT_TYPE_ASSERT, "(ms_weaponSystemArray[localClientNum])", "%s\n\tTrying to access unallocated weapon system for localClientNum %d\n", "ms_weaponSystemArray[localClientNum]", inPip) )
      __debugbreak();
  }
  v139 = CgWeaponSystem::ms_weaponSystemArray[v12];
  if ( (_BYTE)CgClientSideEffectsSystem::ms_allocatedType != HALF )
  {
    LODWORD(v128) = (unsigned __int8)CgClientSideEffectsSystem::ms_allocatedType;
    LODWORD(streamRender) = 1;
    LODWORD(inPip) = v12;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_side_effects.h", 321, ASSERT_TYPE_ASSERT, "(ms_allocatedType == SubSystem::CSE_SYSTEM_TYPE)", "%s\n\tTrying to access the client-side effects system for localClientNum %d but the client-side effects system type does not match-> System Type:%d  Allocated Type:%d\n", "ms_allocatedType == SubSystem::CSE_SYSTEM_TYPE", inPip, streamRender, v128) )
      __debugbreak();
  }
  if ( (unsigned int)v12 >= CgClientSideEffectsSystem::ms_allocatedCount )
  {
    LODWORD(inPip) = CgClientSideEffectsSystem::ms_allocatedCount;
    LODWORD(isZeroG) = v12;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_side_effects.h", 322, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", isZeroG, inPip) )
      __debugbreak();
  }
  if ( !CgClientSideEffectsSystem::ms_cseSystemArray[v12] )
  {
    LODWORD(inPip) = v12;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_side_effects.h", 323, ASSERT_TYPE_ASSERT, "(ms_cseSystemArray[localClientNum])", "%s\n\tTrying to access unallocated client-side effects system for localClientNum %d\n", "ms_cseSystemArray[localClientNum]", inPip) )
      __debugbreak();
  }
  v13 = CgClientSideEffectsSystem::ms_cseSystemArray[v12];
  if ( !(_BYTE)CgVehicleSystem::ms_allocatedType )
  {
    LODWORD(inPip) = v12;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.h", 406, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the vehicle system for localClientNum %d but the vehicle system type is not known\n", "ms_allocatedType != GameModeType::NONE", inPip) )
      __debugbreak();
  }
  if ( (unsigned int)v12 >= CgVehicleSystem::ms_allocatedCount )
  {
    LODWORD(inPip) = CgVehicleSystem::ms_allocatedCount;
    LODWORD(isZeroG) = v12;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.h", 407, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", isZeroG, inPip) )
      __debugbreak();
  }
  if ( !CgVehicleSystem::ms_vehicleSystemArray[v12] )
  {
    LODWORD(inPip) = v12;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.h", 408, ASSERT_TYPE_ASSERT, "(ms_vehicleSystemArray[localClientNum])", "%s\n\tTrying to access unallocated vehicle system for localClientNum %d\n", "ms_vehicleSystemArray[localClientNum]", inPip) )
      __debugbreak();
  }
  v14 = CgVehicleSystem::ms_vehicleSystemArray[v12];
  _R15 = CG_GetLocalClientGlobals((const LocalClientNum_t)v12);
  _R15->cubemapShot = cubemapShot;
  _R15->cubemapSize = cubemapSize;
  memset_0(&_R15->viewModelQueuedRenderInfo, 0, 0xD0ui64);
  _R15->viewModelQueuedRenderInfo.m_enabled = 0;
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)v12);
  p_predictedPlayerState = &LocalClientGlobals->predictedPlayerState;
  if ( LocalClientGlobals == (cg_t *)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_view_sp.cpp", 1687, ASSERT_TYPE_ASSERT, "(predictedPlayerState)", (const char *)&queryFormat, "predictedPlayerState") )
    __debugbreak();
  CG_Radar_ClearJamming((const LocalClientNum_t)v12);
  CgStatic::SetActiveStatics((const LocalClientNum_t)v12);
  LODWORD(_R15->refdef.forceFoVx) = cl_forceFoVx->current.integer;
  LODWORD(_R15->refdef.forceFoVy) = cl_forceFoVy->current.integer;
  __asm
  {
    vmovss  xmm0, cs:?cls@@3UClStatic@@A.vidConfig.sceneAspectRatio; ClStatic cls
    vmovss  dword ptr [r15+17834h], xmm0
  }
  _R15->refdef.forceFoVEnabled = cl_forceFoVEnabled->current.color[0];
  v18 = DVARINT_cl_freemove;
  if ( !DVARINT_cl_freemove && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_freemove") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v18);
  if ( !v18->current.integer )
    RefdefView_SetOrg(&_R15->refdef.view, &_R15->refdef.viewOffset);
  Sys_ProfBeginNamedEvent(0xFFFF6347, "clear scene view");
  g_activeRefDef = &_R15->refdef;
  _R15->refdef.deferredScreenshotIndex = R_Screenshot_ConsumeDeferredRequest();
  R_ClearSceneView((LocalClientNum_t)v12);
  CG_View_InitXCamView(_R15);
  Sys_ProfEndNamedEvent();
  CL_Main_ResetSkeletonCache();
  if ( isFirstClientView )
    XAnimProceduralBonesAllocator_BeginClientFrame();
  Ragdoll_PreUpdate((LocalClientNum_t)v12);
  Ragdoll_UpdateRestFx((LocalClientNum_t)v12);
  CG_DrawDebug_Player((LocalClientNum_t)v12);
  ScrPlace_BeginDisplayView();
  if ( CL_Cameraman_Enabled() )
    CL_Cameraman_CalcViewValues((LocalClientNum_t)v12, 1);
  frametime = _R15->frametime;
  time = _R15->time;
  if ( _R15 == (cg_t *)-26912i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_view_sp.cpp", 941, ASSERT_TYPE_ASSERT, "(refDef)", (const char *)&queryFormat, "refDef") )
    __debugbreak();
  FX_BeginUpdateView((LocalClientNum_t)v12);
  _R15->refdef.time = time;
  _R15->refdef.frameTime = frametime;
  CG_VisionSetsUpdate_PrePlayerStatePrediction((const LocalClientNum_t)v12);
  __asm
  {
    vmovss  xmm7, cs:__real@3f800000
    vmovaps xmm1, xmm7; lodOverride
  }
  R_SetLodOrigin(&_R15->refdef, *(float *)&_XMM1);
  if ( isFirstClientView && (updateState == SET_SHAPE_KEY_A || updateState == NOP) )
  {
    Sys_ProfBeginNamedEvent(0xFFFF6347, "update ent info");
    Profile_Begin(3);
    Profile_BeginCSV(2);
    v23 = (DObj *)CG_GetLocalClientGlobals((const LocalClientNum_t)v12);
    if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) )
    {
      ClientDObj = Com_GetClientDObj(v23[76].skel.partBits.skel.array[0], (LocalClientNum_t)v12);
      if ( ClientDObj )
        CG_EntitySP_DObjUpdateInfo((const cg_t *)&v134, v23, (bool)ClientDObj);
    }
    Profile_EndCSV(2);
    Profile_EndInternal(NULL);
    Sys_ProfEndNamedEvent();
  }
  snap = _R15->snap;
  nextSnap = _R15->nextSnap;
  v27 = BG_Omnvar_PerGameCount();
  CG_Omnvar_UpdateInterpolation((const LocalClientNum_t)v12, v27, (const OmnvarData *const)((char *)&snap[690].__vftable + 4), (const OmnvarData *const)((char *)&nextSnap[690].__vftable + 4));
  CG_ProcessRadiantCmds(RADIANT_GAMEMODE_SP);
  CG_CorpseFade_Update((const LocalClientNum_t)v12);
  v28 = CG_GetLocalClientGlobals((const LocalClientNum_t)v12);
  v29 = v28;
  shellshockIndex = v28->predictedPlayerState.shellshockIndex;
  if ( shellshockIndex )
  {
    shellshockDuration = v28->predictedPlayerState.shellshockDuration;
    shellshockTime = v28->predictedPlayerState.shellshockTime;
  }
  else
  {
    shellshockDuration = v28->testShock.duration;
    shellshockTime = v28->testShock.time;
  }
  ShellshockParms = BG_GetShellshockParms(shellshockIndex);
  CG_StartShellShock(v29, ShellshockParms, shellshockTime, shellshockDuration);
  CG_UpdateShellShock((LocalClientNum_t)v12, v29->shellshock.parms, v29->shellshock.startTime, v29->shellshock.duration);
  CG_View_UpdateShieldViewFx((const LocalClientNum_t)v12);
  CG_View_UpdateScopeOutlineInfo((LocalClientNum_t)v12);
  CG_View_UpdateViewmodelOutline((LocalClientNum_t)v12);
  CG_View_UpdateDepthScanParams((LocalClientNum_t)v12);
  v34 = 0;
  _R15->rumbleScale = 0.0;
  v35 = isFirstClientView;
  if ( isFirstClientView && (updateState == SET_SHAPE_KEY_A || updateState == NOP) )
  {
    EntitySystem = CgEntitySystem::GetEntitySystem((const LocalClientNum_t)v12);
    v37 = CG_GetLocalClientGlobals((const LocalClientNum_t)v12);
    Instance = CgAntiLag::GetInstance((const LocalClientNum_t)v12);
    if ( !Instance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_view_sp.cpp", 1126, ASSERT_TYPE_ASSERT, "(antilag)", (const char *)&queryFormat, "antilag") )
      __debugbreak();
    CG_ClientModel_ResetPrevPose((const LocalClientNum_t)v12);
    SND_AddPhysicsQueryBlock();
    ScriptableCl_Spatial_Update((const LocalClientNum_t)v12);
    ScriptableCl_UpdateNonEntitySharedInstances((const LocalClientNum_t)v12);
    BgAntiLag::PurgeLerpMoverCommands(Instance, v37->frametime);
    Profile2_UpdateEntry(32);
    if ( ((unsigned __int8)&dword_14FDE8050 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &dword_14FDE8050) )
      __debugbreak();
    _InterlockedIncrement(&dword_14FDE8050);
    EntitySystem->AddPacketEntities(EntitySystem, (const LocalClientNum_t)v12);
    Profile2_UpdateEntry(32);
    if ( ((unsigned __int64)&dword_14FDE8050 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &dword_14FDE8050) )
      __debugbreak();
    _InterlockedDecrement(&dword_14FDE8050);
    SND_ReleasePhysicsQueryBlock();
    Profile_Begin(801);
    CGMovingPlatformClient::UpdateFrameCache(&v37->movingPlatforms, (const LocalClientNum_t)v12);
    Profile_EndInternal(NULL);
    Sys_ThreadsSP_AllowSendClientMessages();
    v34 = 0;
    v35 = isFirstClientView;
  }
  CgSimBulletFirePellet_WaitForWorkers((LocalClientNum_t)v12);
  System = CgBallistics::GetSystem((const LocalClientNum_t)v12);
  v143 = System;
  if ( !System && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_view_sp.cpp", 1794, ASSERT_TYPE_ASSERT, "(ballisticsSystem)", (const char *)&queryFormat, "ballisticsSystem") )
    __debugbreak();
  CgBallistics::WaitForWorkers(System);
  CgSimBulletFirePellet_ProcessEvents((LocalClientNum_t)v12);
  __asm { vmovss  xmm6, cs:__real@3c888889 }
  if ( v35 )
  {
    CG_Cloth_Entity_Update((const LocalClientNum_t)v12);
    Physics_WaitForAllCommandsToFinish();
    __asm { vmovaps xmm0, xmm6; timeStep }
    Physics_CheckForGarbageCollectionClient(*(float *)&_XMM0);
    if ( !(_DWORD)v12 )
      PhysPerfRaycast_Update();
    Sys_ProfBeginNamedEvent(0xFFF08080, "Physics_ProcessDeferredForceCallbacks");
    Physics_ProcessDeferredForceCallbacks((const Physics_WorldId)(3 * v12 + 3));
    Sys_ProfEndNamedEvent();
    CgVehicleSystem::PhysicsProcessDeferredEvents(v14);
    data[0] = 3 * v12 + 2;
    *(double *)&_XMM0 = Com_GetTimeScale();
    __asm
    {
      vmulss  xmm1, xmm0, cs:?cls@@3UClStatic@@A.frametime_rawSeconds; ClStatic cls
      vmovss  [rsp+1D0h+var_154], xmm1
    }
    Sys_AddWorkerCmd(WRKCMD_PHYSICS_UPDATE_PREDICTIVE_WORLD_PRE, data);
    Sys_AddWorkerCmd(WRKCMD_PHYSICS_UPDATE_PREDICTIVE_WORLD, data);
    DynEntCL_AddWorkerCmd((LocalClientNum_t)v12);
    *(double *)&_XMM0 = Com_GetTimeScale();
    __asm { vmulss  xmm1, xmm0, xmm6; timeStep }
    Ragdoll_AddUpdateWorkerCmds((LocalClientNum_t)v12, *(float *)&_XMM1);
    CG_Particle_AddProcessFxPhysicsObjectRequestsWorkerCmd((LocalClientNum_t)v12);
    v35 = isFirstClientView;
  }
  Sys_ProfBeginNamedEvent(0xFFF08080, "CG_RumbleSP_Update");
  CG_Rumble_ProcessDeferred((LocalClientNum_t)v12);
  CG_RumbleSP_Update((const LocalClientNum_t)v12);
  Sys_ProfEndNamedEvent();
  Sys_ProfBeginNamedEvent(0xFF44CCFF, "CG_TriggerUpdate");
  CG_TriggerUpdate((LocalClientNum_t)v12);
  Sys_ProfEndNamedEvent();
  Sys_ProfBeginNamedEvent(0xFF191970, "CG_UpdateClientSideEffects");
  CgClientSideEffectsSystem::Update(v13);
  Sys_ProfEndNamedEvent();
  if ( Com_GameMode_SupportsFeature(WEAPON_RECHAMBERING) )
  {
    Sys_ProfBeginNamedEvent(0xFFFAEBD7, "Add Client Side Sounds");
    CgClientSideEffectsSystem::AddSounds(v13);
    CgClientSideEffectsSystem::UpdateEffects(v13);
    Sys_ProfEndNamedEvent();
  }
  Profile_Begin(603);
  Physics_WaitForPredictiveWorldUpdateCommandToFinish();
  Profile_EndInternal(NULL);
  SND_AddPhysicsQueryBlock();
  if ( v35 )
  {
    v43 = CG_GetLocalClientGlobals((const LocalClientNum_t)v12);
    Profile2_UpdateEntry(34);
    if ( ((unsigned __int8)&dword_14FDE8058 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &dword_14FDE8058) )
      __debugbreak();
    _InterlockedIncrement(&dword_14FDE8058);
    R_UpdateSound();
    Sys_ProfBeginNamedEvent(0xFFFF6347, "pre player state");
    v44 = updateState;
    if ( updateState == SET_SHAPE_KEY_A || updateState == NOP )
      CG_PredictSP_PrePredictAllPlayerState();
    Sys_ProfEndNamedEvent();
    serverMaterialsTouch = (const Material **)cgMedia.serverMaterialsTouch;
    do
    {
      if ( !*serverMaterialsTouch )
        break;
      Stream_TouchMaterial(*serverMaterialsTouch);
      ++v34;
      ++serverMaterialsTouch;
    }
    while ( v34 < 32 );
    CL_Main_SyncGpu((LocalClientNum_t)v12);
    R_ToggleSmpFrame((LocalClientNum_t)v12);
    CG_HighPriorityWeapon_Update((const LocalClientNum_t)v12);
    CG_Turret_Update((const LocalClientNum_t)v12);
    Sys_ProfBeginNamedEvent(0xFFFF6347, "handle client input");
    if ( updateState == SET_SHAPE_KEY_A || updateState == NOP )
      CL_InputSP_HandleClientInput((LocalClientNum_t)v12);
    Sys_ProfEndNamedEvent();
    CG_ModelPreviewerFrame(v43);
    CG_AddModelPreviewerModel((LocalClientNum_t)v12, v43->frametime);
    CG_CreateFx_Frame(v43);
    Sys_ProfBeginNamedEvent(0xFFFF6347, "player state");
    if ( updateState == SET_SHAPE_KEY_A || updateState == NOP )
      CG_PredictSP_PredictAllPlayerState();
    Sys_ProfEndNamedEvent();
    Profile2_UpdateEntry(34);
    if ( ((unsigned __int64)&dword_14FDE8058 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &dword_14FDE8058) )
      __debugbreak();
    _InterlockedDecrement(&dword_14FDE8058);
    System = v143;
  }
  else
  {
    CG_GetLocalClientGlobals((const LocalClientNum_t)v12);
    Physics_WaitForAllCommandsToFinish();
    R_ToggleSmpFrame((LocalClientNum_t)v12);
    v44 = updateState;
  }
  SND_ReleasePhysicsQueryBlock();
  CG_LightSampler_Update((LocalClientNum_t)v12);
  Sys_ProfBeginNamedEvent(0xFFEE82EE, "CG_ViewSP_ClientViewUpdateViewModels");
  v46 = CG_GetLocalClientGlobals((const LocalClientNum_t)v12);
  if ( v46->predictedPlayerState.viewmodelIndex > 0 )
  {
    ClConfigStrings = ClConfigStrings::GetClConfigStrings();
    v48 = ClConfigStrings->GetModelString(ClConfigStrings, v46->predictedPlayerState.viewmodelIndex);
    v49 = v48;
    if ( (!v48 || !*v48) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_view_sp.cpp", 1343, ASSERT_TYPE_ASSERT, "(modelName && modelName[0])", (const char *)&queryFormat, "modelName && modelName[0]") )
      __debugbreak();
    v50 = R_RegisterModel(v49);
    CG_UpdateHandViewmodels((LocalClientNum_t)v12, v50);
  }
  CG_UpdateWeaponViewmodels((LocalClientNum_t)v12);
  Sys_ProfEndNamedEvent();
  CG_VisionSetsUpdate_PostPlayerStatePrediction((const LocalClientNum_t)v12);
  CG_VisionSets_UpdateWeaponADS((const LocalClientNum_t)v12);
  CG_WeaponSounds_Update((const LocalClientNum_t)v12);
  CG_Foliage_ProcessLocalCharacterEntity((const LocalClientNum_t)v12);
  if ( CG_PIP_IsActive((LocalClientNum_t)v12) )
    R_Set_IsPipClientView();
  CG_ClearTurretFire();
  DynEntCL_WaitForAddWorkerCmds();
  Sys_WaitWorkerCmdsOfType(WRKCMD_PROCESS_DEFERRED_PARTICLE_PHYSICS);
  CG_PlayerStateSP_TransitionPlayerState((LocalClientNum_t)v12, &_R15->predictedPlayerState, &_R15->oldTransPlayerState);
  CG_SndUpdateAutoSim();
  CG_SndUpdateSubmix((LocalClientNum_t)v12);
  R_EndDelayedSceneModels(1);
  Sys_ProfBeginNamedEvent(0xFFD2691E, "First Client Update");
  v51 = isFirstClientView;
  if ( isFirstClientView )
  {
    R_MarkSceneEnts();
  }
  else
  {
    R_ClearDObjInScene(0x800u);
    R_ClearDObjInScene(0x801u);
    if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_FAST_LAND|WEAPON_OFFHAND_END) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_view_sp.cpp", 1108, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::VIEW_LINKED_ENTITIES ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::VIEW_LINKED_ENTITIES )") )
      __debugbreak();
    OnlyLocalClientNum = CL_GetOnlyLocalClientNum();
    v53 = CG_GetLocalClientGlobals(OnlyLocalClientNum);
    for ( i = 0; i < v53->predictedPlayerState.numViewLinkedEnts; ++i )
      R_ClearDObjInScene(v53->predictedPlayerState.viewLinkedEntityData[i].linkedEnt);
    R_ResetSceneEnts();
    v51 = 0;
  }
  Sys_ProfEndNamedEvent();
  Sys_ProfBeginNamedEvent(0xFFFFC0CB, "Prepare Client Workers");
  CG_ContextMount_UmbraOffsetTrace_StartWorkers((const LocalClientNum_t)v12);
  CG_TraceGroundWorkers_StartWorkers((const LocalClientNum_t)v12);
  CgBallistics::StartWorkers(System, 1);
  if ( !CgSimBulletFirePellet_DelayUntilPlayerOriginUpdate(_R15) )
    CgSimBulletFirePellet_StartWorkers((LocalClientNum_t)v12);
  CgSimBulletFirePellet_WaitForWorkers((LocalClientNum_t)v12);
  CgBallistics::WaitForWorkers(System);
  CgSimBulletFirePellet_ProcessEvents((LocalClientNum_t)v12);
  CG_TraceGroundWorkers_WaitForWorkers();
  CG_TraceGroundWorkers_ProcessOutput((const LocalClientNum_t)v12);
  CgWeaponSystem::DrawDebugBulletLines(v139);
  CG_ProcessTurretFire((const LocalClientNum_t)v12);
  Sys_WaitWorkerCmdsOfType(WRKCMD_ADD_DYNENT_SPATIAL);
  Sys_WaitWorkerCmdsOfType(WRKCMD_RAGDOLL_UPDATE);
  Sys_ProfEndNamedEvent();
  CG_ViewSP_DoFollowEnt((const LocalClientNum_t)v12);
  CG_ViewSP_UpdateKickAngles((const LocalClientNum_t)v12);
  CG_View_UpdateTurretZoom((const LocalClientNum_t)v12);
  CG_Ladder_Update((LocalClientNum_t)v12);
  CG_SmoothOutWeaponPosFracForMispredictionErrors((const LocalClientNum_t)v12);
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_FAST_LAND|WEAPON_OFFHAND_END) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_view_sp.cpp", 1086, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::VIEW_LINKED_ENTITIES ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::VIEW_LINKED_ENTITIES )") )
    __debugbreak();
  v55 = &CG_GetLocalClientGlobals((const LocalClientNum_t)v12)->predictedPlayerState;
  if ( BG_Gesture_IsGestureTypePlaying(v55, GESTURE_TYPE_IK_TARGET) && v55->numViewLinkedEnts > 0 )
  {
    CG_ViewSP_CalcViewValues((const LocalClientNum_t)v12);
    CG_ViewSP_ComputeViewLinkedEntityTransforms((const LocalClientNum_t)v12);
  }
  Sys_ProfBeginNamedEvent(0xFFFF6347, "view anim");
  CG_UpdateViewWeaponAnim((LocalClientNum_t)v12);
  Sys_ProfEndNamedEvent();
  v140->SetViewValues(v140);
  CG_View_UpdateMainThreadTraceSafeLogic((LocalClientNum_t)v12);
  CG_LaserDrawAll((LocalClientNum_t)v12, LASER_COLLISION_AUTH);
  Sys_ProfBeginNamedEvent(0xFFFFC0CB, "Client Physics Update");
  if ( v51 && (v44 == SET_SHAPE_KEY_A || v44 == NOP) )
  {
    v56 = _R15->frametime;
    v57 = 3 * v12 + 3;
    __asm { vmovaps xmm2, xmm6; timeStep }
    PhysicsSVFX_Update(v57, (LocalClientNum_t)v12, *(float *)&_XMM2);
    DynEnt_UpdateFrameFlags((LocalClientNum_t)v12);
    CG_ClientModel_SyncLoaded((const LocalClientNum_t)v12);
    CL_UI_ClientModel_Update();
    Profile_Begin(657);
    *(double *)&_XMM0 = Com_GetTimeScale();
    __asm { vmulss  xmm1, xmm0, cs:?cls@@3UClStatic@@A.frametime_rawSeconds; timeStep }
    Physics_PreStepWorld(v57, *(float *)&_XMM1);
    Profile_EndInternal(NULL);
    ScriptableCl_UpdateClientInstances((const LocalClientNum_t)v12, v56);
    __asm { vmovaps xmm1, xmm7; velocityScale }
    Physics_ProcessDeferredKeyframe(v57, *(const float *)&_XMM1);
    __asm { vxorps  xmm3, xmm3, xmm3; stepTimeOverride }
    Physics_StepWorld(v57, 0, 1, *(float *)&_XMM3);
    FX_Update1((LocalClientNum_t)v12);
    v51 = isFirstClientView;
  }
  Sys_ProfEndNamedEvent();
  if ( v51 )
  {
    Profile_Begin(7);
    FX_Update0((LocalClientNum_t)v12, _R15->time);
    Profile_EndInternal(NULL);
    Sys_ProfBeginNamedEvent(0xFFB22222, "mayhem update normal");
    Mayhem_Update((LocalClientNum_t)v12, MAYHEM_UPDATE_NORMAL);
    Sys_ProfEndNamedEvent();
  }
  Com_DevhostUpdate(103);
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, dword ptr [r15+65E4h]
    vmovss  xmm6, cs:__real@3a83126f
    vmulss  xmm0, xmm0, xmm6; deltaTimeSeconds
  }
  AnimVisualizer_Update(*(float *)&_XMM0);
  if ( v51 )
    CG_ClientModel_Update((const LocalClientNum_t)v12);
  if ( _R15->predictedPlayerEntity->nextState.loopSound && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_view_sp.cpp", 2074, ASSERT_TYPE_ASSERT, "(!cgameGlob->predictedPlayerEntity->nextState.loopSound)", "%s\n\tPlayLoopSound() must not be called on the player entity in SP.", "!cgameGlob->predictedPlayerEntity->nextState.loopSound") )
    __debugbreak();
  CG_PlayersSP_ClearPlayersFromScene((LocalClientNum_t)v12);
  CG_PlayersSP_AddLocalPlayerToScene((LocalClientNum_t)v12, 1);
  if ( CgSimBulletFirePellet_DelayUntilPlayerOriginUpdate(_R15) )
  {
    CgBallistics::StartWorkers(System, 1);
    CgSimBulletFirePellet_StartWorkers((LocalClientNum_t)v12);
    CgSimBulletFirePellet_WaitForWorkers((LocalClientNum_t)v12);
    CgBallistics::WaitForWorkers(System);
    CgSimBulletFirePellet_ProcessEvents((LocalClientNum_t)v12);
  }
  if ( v51 && v44 == SET_SHAPE_KEY_A || v44 == NOP )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [r15+38h]
      vaddss  xmm1, xmm0, dword ptr [r15+6470h]
      vmovss  dword ptr [rbp+0D0h+clientPos], xmm1
      vmovss  xmm2, dword ptr [r15+3Ch]
      vaddss  xmm0, xmm2, dword ptr [r15+6474h]
      vmovss  dword ptr [rbp+0D0h+clientPos+4], xmm0
      vmovss  xmm1, dword ptr [r15+40h]
      vaddss  xmm2, xmm1, dword ptr [r15+6478h]
      vmovss  dword ptr [rbp+0D0h+clientPos+8], xmm2
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
      vmulss  xmm2, xmm0, xmm6; deltaGameTimeSec
      vxorps  xmm1, xmm1, xmm1
      vcvtsi2ss xmm1, xmm1, ecx
      vmulss  xmm1, xmm1, xmm6; gameTimeSec
    }
    R_ReactiveMotion_Update((LocalClientNum_t)v12, *(const float *)&_XMM1, *(const float *)&_XMM2, &clientPos, &_R15->predictedPlayerState.velocity);
  }
  v77 = CG_GetLocalClientGlobals((const LocalClientNum_t)v12);
  v77->cvsData.transitory.thermalVisionActive = CG_View_IsThermalVisionOn((const LocalClientNum_t)v12);
  CG_View_UpdateLocSelInfo((const LocalClientNum_t)v12);
  CgSoundSystem::UpdateBreathingSounds(v144);
  CG_View_InitXCamView(_R15);
  CG_ViewSP_ComputeViewLinkedEntityTransforms((const LocalClientNum_t)v12);
  CG_ViewSP_UpdateViewLinkedEntities((const LocalClientNum_t)v12);
  CgWeaponSystem::ProcessDeferredTracer(v139);
  CgBallistics::FinishFrame(System);
  CG_UpdateLocalEntities((const LocalClientNum_t)v12);
  Sys_ProfBeginNamedEvent(0xFFFF6347, "player entity");
  v78 = DVARINT_cl_freemove;
  if ( !DVARINT_cl_freemove && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_freemove") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v78);
  if ( v78->current.integer )
  {
    __asm { vmovaps xmm1, xmm7; lodOverride }
    R_SetLodOrigin(&_R15->refdef, *(float *)&_XMM1);
  }
  IsPlayerZeroG = BG_IsPlayerZeroG(&_R15->predictedPlayerState);
  thermalVisionActive = _R15->cvsData.transitory.thermalVisionActive;
  *(double *)&_XMM0 = R_GetFarPlaneDist();
  __asm { vmovaps xmm3, xmm0; zfar }
  FX_Update2((LocalClientNum_t)v12, &_R15->refdef, &_R15->refdef.view, *(float *)&_XMM3, thermalVisionActive, IsPlayerZeroG, 0);
  AxisToQuat(&_R15->refdef.view.axis, &out);
  RefdefView_GetOrg(&_R15->refdef.view, &outOrg);
  CG_Rumble_SetReceiver((LocalClientNum_t)v12, _R15->predictedPlayerState.clientNum, &outOrg, &out);
  CG_Slide_UpdateClient((LocalClientNum_t)v12);
  CG_Ladder_PlayAudioClient((const LocalClientNum_t)v12);
  CG_View_UpdateTestFX((const LocalClientNum_t)v12);
  if ( isFirstClientView )
  {
    Sys_ProfBeginNamedEvent(0xFFB22222, "mayhem update delayed");
    Mayhem_Update((LocalClientNum_t)v12, MAYHEM_UPDATE_DELAYED);
    Sys_ProfEndNamedEvent();
  }
  CG_View_DumpAnims((const LocalClientNum_t)v12);
  CG_View_DumpAnims3D((const LocalClientNum_t)v12);
  CG_View_DumpDObj((const LocalClientNum_t)v12);
  Sys_ProfEndNamedEvent();
  R_EndDObjScene();
  Physics_AddToScene((LocalClientNum_t)v12);
  CG_LaserDrawAll((LocalClientNum_t)v12, LASER_COLLISION_PRED);
  CG_Deploy_Update((LocalClientNum_t)v12);
  if ( !(_BYTE)CgCompassSystem::ms_allocatedType )
  {
    LODWORD(inPipa) = v12;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.h", 575, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the compass system for localClientNum %d but the compass system type is not known\n", "ms_allocatedType != GameModeType::NONE", inPipa) )
      __debugbreak();
  }
  if ( (unsigned int)v12 >= CgCompassSystem::ms_allocatedCount )
  {
    LODWORD(inPipa) = CgCompassSystem::ms_allocatedCount;
    LODWORD(isZeroGa) = v12;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.h", 576, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", isZeroGa, inPipa) )
      __debugbreak();
  }
  if ( !CgCompassSystem::ms_compassSystemArray[v12] )
  {
    LODWORD(inPipa) = v12;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.h", 577, ASSERT_TYPE_ASSERT, "(ms_compassSystemArray[localClientNum])", "%s\n\tTrying to access unallocated compass system for localClientNum %d\n", "ms_compassSystemArray[localClientNum]", inPipa) )
      __debugbreak();
  }
  CgCompassSystem::UpdatePlayerOrientation(CgCompassSystem::ms_compassSystemArray[v12], &_R15->predictedPlayerState);
  FX_Update3((LocalClientNum_t)v12);
  Sys_ProfBeginNamedEvent(0xFFFF6347, "aim assist");
  if ( !_R15->aimAssistEyeOrigin.initialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\anticheat\\security_obfuscation_integer.h", 221, ASSERT_TYPE_ASSERT, "(initialized)", (const char *)&queryFormat, "initialized") )
    __debugbreak();
  p_aimAssistEyeOrigin = &_R15->aimAssistEyeOrigin;
  v147 = ((_DWORD)_R15 + 98316) ^ _R15->aimAssistEyeOrigin.secureInt32_3_aab;
  LODWORD(eyeOrg.v[0]) = _R15->aimAssistEyeOrigin.data[0] ^ (v147 * (v147 + 2));
  v156 = &_R15->aimAssistEyeOrigin.data[1];
  v148 = ((_DWORD)_R15 + 98320) ^ _R15->aimAssistEyeOrigin.secureInt32_3_aab;
  LODWORD(eyeOrg.v[1]) = _R15->aimAssistEyeOrigin.data[1] ^ (v148 * (v148 + 2));
  v157 = &_R15->aimAssistEyeOrigin.data[2];
  v149 = ((_DWORD)_R15 + 98324) ^ _R15->aimAssistEyeOrigin.secureInt32_3_aab;
  LODWORD(eyeOrg.v[2]) = _R15->aimAssistEyeOrigin.data[2] ^ (v149 * (v149 + 2));
  if ( !_R15->aimAssistViewOrigin.initialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\anticheat\\security_obfuscation_integer.h", 221, ASSERT_TYPE_ASSERT, "(initialized)", (const char *)&queryFormat, "initialized") )
    __debugbreak();
  p_aimAssistViewOrigin = &_R15->aimAssistViewOrigin;
  v150 = ((_DWORD)_R15 + 98340) ^ _R15->aimAssistViewOrigin.secureInt32_3_aab;
  LODWORD(viewOrg.v[0]) = _R15->aimAssistViewOrigin.data[0] ^ (v150 * (v150 + 2));
  v152 = &_R15->aimAssistViewOrigin.data[1];
  v141 = ((_DWORD)_R15 + 98344) ^ _R15->aimAssistViewOrigin.secureInt32_3_aab;
  LODWORD(viewOrg.v[1]) = _R15->aimAssistViewOrigin.data[1] ^ (v141 * (v141 + 2));
  v153 = &_R15->aimAssistViewOrigin.data[2];
  v142 = ((_DWORD)_R15 + 98348) ^ _R15->aimAssistViewOrigin.secureInt32_3_aab;
  LODWORD(viewOrg.v[2]) = _R15->aimAssistViewOrigin.data[2] ^ (v142 * (v142 + 2));
  __asm
  {
    vmovss  xmm0, dword ptr [r15+6934h]
    vmovss  xmm1, dword ptr [r15+6930h]
    vmovss  [rsp+1D0h+isZeroG], xmm0
    vmovss  dword ptr [rsp+1D0h+fmt], xmm1
  }
  AimAssist_UpdateScreenTargets((LocalClientNum_t)v12, &eyeOrg, &viewOrg, &_R15->aimAssistViewAngles, fmt, *(float *)&isZeroGb);
  Sys_ProfEndNamedEvent();
  v140->UpdateFullFrameFX(v140);
  CG_ViewSP_UpdateSelectedWeapon((const LocalClientNum_t)v12);
  if ( !Dvar_GetBoolSafe("NMMPTOSMKQ") )
  {
    v85 = CL_Pause_IsGamePaused() && !Dvar_GetBoolSafe("NLONRMOLKS");
    R_Cinematic_SetPaused((CinematicEnum)v85, 0);
  }
  CG_CreateFx_UpdateCursor((LocalClientNum_t)v12);
  _RBX = CG_GetLocalClientGlobals((const LocalClientNum_t)v12);
  FocusOrigin = CG_Camera_GetFocusOrigin((LocalClientNum_t)v12);
  RefdefView_GetOrg(&_RBX->refdef.view, &origin);
  CL_StreamViews_UpdateVelocity((const LocalClientNum_t)v12, FocusOrigin, _RBX->time, _RBX->frametime);
  __asm
  {
    vmovss  xmm1, dword ptr [rbx+697Ch]; defaultTanHalfFovY
    vmovss  xmm0, dword ptr [rbx+6934h]; currentTanHalfFovY
  }
  CL_StreamViews_CalculateZoomFactorAndCosFovLimit(*(float *)&_XMM0, *(float *)&_XMM1, &outZoomFactor, &outCosFovLimit);
  ClientVelocity = CL_StreamViews_GetClientVelocity((const LocalClientNum_t)v12);
  __asm
  {
    vmovss  xmm0, [rsp+1D0h+outCosFovLimit]
    vmovss  dword ptr [rsp+1D0h+inPip], xmm0
    vmovss  xmm1, [rsp+1D0h+outZoomFactor]
    vmovss  [rsp+1D0h+isZeroG], xmm1
  }
  CL_StreamViews_SetManualView(MOVEMENT, (LocalClientNum_t)v12, &origin, &_RBX->refdefViewAngles, ClientVelocity, *(float *)&isZeroGc, inPipb, 1);
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+38h]
    vmovss  dword ptr [rsp+1D0h+origin], xmm0
    vmovss  xmm1, dword ptr [rbx+3Ch]
    vmovss  dword ptr [rsp+1D0h+origin+4], xmm1
    vmovss  xmm0, dword ptr [rbx+40h]
    vmovss  dword ptr [rsp+1D0h+origin+8], xmm0
  }
  Handler = CgHandler::getHandler((LocalClientNum_t)v12);
  WorldUpReferenceFrame::WorldUpReferenceFrame(&v161, &_RBX->predictedPlayerState, Handler);
  __asm { vmovss  xmm1, dword ptr [rbx+1F0h]; height }
  WorldUpReferenceFrame::AddUpContribution(&v161, *(float *)&_XMM1, &origin);
  RefdefView_GetOrg(&_RBX->refdef.view, &v136);
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+1D0h+origin]
    vsubss  xmm3, xmm0, dword ptr [rbp+0D0h+var_150]
    vmovss  xmm1, dword ptr [rsp+1D0h+origin+4]
    vsubss  xmm2, xmm1, dword ptr [rbp+0D0h+var_150+4]
    vmovss  xmm0, dword ptr [rsp+1D0h+origin+8]
    vsubss  xmm4, xmm0, dword ptr [rbp+0D0h+var_150+8]
    vmulss  xmm2, xmm2, xmm2
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm3, xmm2, xmm1
    vmulss  xmm0, xmm4, xmm4
    vaddss  xmm2, xmm3, xmm0
    vcomiss xmm2, cs:__real@4a800000
  }
  if ( v109 | v110 )
  {
    CL_StreamViews_ClearManualView(DODGE, (LocalClientNum_t)v12);
  }
  else
  {
    __asm
    {
      vmovss  xmm0, [rsp+1D0h+outCosFovLimit]
      vmovss  dword ptr [rsp+1D0h+inPip], xmm0
      vmovss  xmm1, [rsp+1D0h+outZoomFactor]
      vmovss  [rsp+1D0h+isZeroG], xmm1
    }
    CL_StreamViews_SetManualView(DODGE, (LocalClientNum_t)v12, &origin, &_RBX->refdefViewAngles, ClientVelocity, *(float *)&isZeroGd, inPipc, 0);
  }
  CL_UIStreaming_UpdateImages();
  memset(&v136, 0, sizeof(v136));
  memset(&origin, 0, sizeof(origin));
  CG_SND_Update((const LocalClientNum_t)v12);
  CG_DrawSP_DrawActive((const LocalClientNum_t)v12, drawType);
  CG_GameInterface_ViewSP_DrawActiveFrame((const LocalClientNum_t)v12);
  CgStatic::ClearActiveStatics((const LocalClientNum_t)v12);
  _R15->playerTeleported = 0;
  v113 = (__int64)p_predictedPlayerState;
  _R15->lastMantleflags = p_predictedPlayerState->mantleState.flags;
  _R15->prevWeaponFlags = *(GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64> *)(v113 + 1832);
  GamerProfile_CheckBBPrintInitialConfig((const LocalClientNum_t)v12);
  CL_Input_EndFrame((LocalClientNum_t)v12);
  Profile2_UpdateEntry(30);
  if ( v146 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &dword_14FDE8048) )
    __debugbreak();
  _InterlockedDecrement(&dword_14FDE8048);
  memset(&viewOrg, 0, sizeof(viewOrg));
  memset(&eyeOrg, 0, sizeof(eyeOrg));
  memset(&outOrg, 0, sizeof(outOrg));
  _R11 = &v162;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
  }
}

/*
==============
CG_ViewSP_DrawActiveFrameInit
==============
*/
void CG_ViewSP_DrawActiveFrameInit(const LocalClientNum_t localClientNum, Scr_UpdateFrame_State updateState, ClientVisionSetData *cvsData, refdef_t *refDef, int clientTime, int clientFrameTime, float lodOverride)
{
  if ( !refDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_view_sp.cpp", 941, ASSERT_TYPE_ASSERT, "(refDef)", (const char *)&queryFormat, "refDef") )
    __debugbreak();
  FX_BeginUpdateView(localClientNum);
  refDef->time = clientTime;
  refDef->frameTime = clientFrameTime;
  CG_VisionSetsUpdate_PrePlayerStatePrediction(localClientNum);
  __asm { vmovss  xmm1, [rsp+38h+lodOverride]; lodOverride }
  R_SetLodOrigin(refDef, *(float *)&_XMM1);
}

/*
==============
CG_ViewSP_Init
==============
*/
void CG_ViewSP_Init(const LocalClientNum_t localClientNum)
{
  cg_t *LocalClientGlobals; 

  CG_PredictSP_ClearSavedPlayerState(localClientNum);
  CG_PredictSP_SetupPlayerState(localClientNum);
  CL_Main_InvalidateSkeletonCache();
  CG_PredictSP_PredictPlayerState(localClientNum);
  CG_UpdateViewWeaponAnim(localClientNum);
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( LocalClientGlobals->firstSnapshot )
    LocalClientGlobals->refdef.forceFoVEnabled = cl_forceFoVEnabled->current.color[0];
  CG_View_CalcFov(localClientNum);
}

/*
==============
CG_ViewSP_PausedClientFreeMove
==============
*/
bool CG_ViewSP_PausedClientFreeMove(LocalClientNum_t localClientNum)
{
  bool result; 
  const dvar_t *v13; 
  const ClActiveClient *Client; 
  int CmdNumber; 
  const ClActiveClient *v16; 
  int v17; 
  int v18; 
  unsigned __int64 v19; 
  vec3_t *p_inOrg; 
  __int64 v23; 
  int v36; 
  const dvar_t *v37; 
  CgHandler *Handler; 
  unsigned __int8 v69; 
  unsigned __int8 v70; 
  char v71; 
  int v72; 
  char *fmt; 
  int v134; 
  vec3_t inOrg; 
  __int64 v136; 
  vec3_t vec; 
  WorldUpReferenceFrame v138; 
  char v139; 
  int packedAngle; 
  int v141; 
  int v142; 
  char v143; 
  char v144; 
  unsigned __int8 v145; 
  unsigned __int8 v146; 
  char v147; 
  void *retaddr; 

  _RAX = &retaddr;
  v136 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm8
    vmovaps xmmword ptr [rax-68h], xmm9
    vmovaps xmmword ptr [rax-78h], xmm10
    vmovaps xmmword ptr [rax-88h], xmm11
    vmovaps xmmword ptr [rax-98h], xmm12
    vmovaps xmmword ptr [rax-0A8h], xmm13
    vmovaps xmmword ptr [rax-0B8h], xmm14
  }
  if ( !CL_Pause_IsGamePaused() )
    goto LABEL_2;
  v13 = DVARINT_cl_freemove;
  if ( !DVARINT_cl_freemove && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_freemove") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v13);
  if ( v13->current.integer )
  {
    Client = ClActiveClient::GetClient(localClientNum);
    CmdNumber = ClActiveClient_GetCmdNumber(Client);
    v16 = ClActiveClient::GetClient(localClientNum);
    v17 = ClActiveClient_GetCmdNumber(v16);
    v18 = v17;
    v134 = v17;
    if ( CmdNumber > v17 )
    {
      LODWORD(fmt) = v17;
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143CEE128, 754i64, (unsigned int)CmdNumber, fmt);
    }
    if ( CmdNumber > v18 - 128 && CmdNumber > 0 )
    {
      _RBX = &v16->cmds[CmdNumber & 0x7F];
      memset(&v134, 0, sizeof(v134));
      if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_active_client.h", 385, ASSERT_TYPE_ASSERT, "(requestedCmd)", (const char *)&queryFormat, "requestedCmd") )
        __debugbreak();
      _RCX = &v139;
      v23 = 2i64;
      do
      {
        __asm
        {
          vmovups ymm0, ymmword ptr [rbx]
          vmovups ymmword ptr [rcx], ymm0
          vmovups ymm0, ymmword ptr [rbx+20h]
          vmovups ymmword ptr [rcx+20h], ymm0
          vmovups ymm0, ymmword ptr [rbx+40h]
          vmovups ymmword ptr [rcx+40h], ymm0
          vmovups xmm0, xmmword ptr [rbx+60h]
          vmovups xmmword ptr [rcx+60h], xmm0
        }
        _RCX += 128;
        __asm
        {
          vmovups xmm1, xmmword ptr [rbx+70h]
          vmovups xmmword ptr [rcx-10h], xmm1
        }
        _RBX = (usercmd_s *)((char *)_RBX + 128);
        --v23;
      }
      while ( v23 );
      *(_QWORD *)_RCX = _RBX->buttons;
      _RDI = CG_GetLocalClientGlobals(localClientNum);
      *(double *)&_XMM0 = BG_UsrCmdUnpackAngle(packedAngle);
      __asm { vmovss  dword ptr cs:angles, xmm0 }
      *(double *)&_XMM0 = BG_UsrCmdUnpackAngle(v141);
      __asm { vmovss  dword ptr cs:angles+4, xmm0 }
      *(double *)&_XMM0 = BG_UsrCmdUnpackAngle(v142);
      __asm
      {
        vmovss  dword ptr cs:angles+8, xmm0
        vmovss  xmm1, dword ptr cs:angles
        vaddss  xmm2, xmm1, dword ptr [rdi+0BCh]
        vmovss  dword ptr cs:angles, xmm2
        vmovss  xmm3, dword ptr cs:angles+4
        vaddss  xmm1, xmm3, dword ptr [rdi+0C0h]
        vmovss  dword ptr cs:angles+4, xmm1
        vaddss  xmm0, xmm0, dword ptr [rdi+0C4h]
        vmovss  dword ptr cs:angles+8, xmm0
      }
      if ( !pausedFreeMove )
      {
        pausedFreeMove = 1;
        oldMsec = Sys_Milliseconds();
        moveMsec = 0;
      }
      v36 = Sys_Milliseconds();
      v37 = DVARFLT_cl_freemoveScale;
      if ( !DVARFLT_cl_freemoveScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_freemoveScale") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v37);
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, eax
        vmulss  xmm1, xmm0, cs:__real@3d4ccccd
        vmulss  xmm6, xmm1, dword ptr [r14+28h]
      }
      oldMsec = v36;
      Handler = CgHandler::getHandler(localClientNum);
      WorldUpReferenceFrame::WorldUpReferenceFrame(&v138, &_RDI->predictedPlayerState, Handler);
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vmovss  dword ptr [rsp+270h+vec+4], xmm0
        vmovss  dword ptr [rsp+270h+vec], xmm0
        vmovss  xmm0, cs:__real@3f800000
        vmovss  dword ptr [rsp+270h+vec+8], xmm0
      }
      WorldUpReferenceFrame::ApplyReferenceFrameToVector(&v138, &vec);
      __asm
      {
        vmovss  xmm0, dword ptr cs:angles
        vmovss  dword ptr [rdi+178C0h], xmm0
        vmovss  xmm1, dword ptr cs:angles+4
        vmovss  dword ptr [rdi+178C4h], xmm1
        vmovss  xmm0, dword ptr cs:angles+8
        vmovss  dword ptr [rdi+178C8h], xmm0
      }
      AnglesToAxis(&_RDI->refdefViewAngles, &_RDI->refdef.view.axis);
      WorldUpReferenceFrame::ApplyReferenceFrameToAxis(&v138, &_RDI->refdef.view.axis);
      __asm
      {
        vmovss  xmm7, dword ptr [rsp+270h+vec+4]
        vmulss  xmm1, xmm7, dword ptr [rdi+694Ch]
        vmovss  xmm8, dword ptr [rsp+270h+vec+8]
        vmulss  xmm0, xmm8, dword ptr [rdi+6948h]
        vsubss  xmm10, xmm1, xmm0
        vmulss  xmm2, xmm8, dword ptr [rdi+6944h]
        vmovss  xmm9, dword ptr [rsp+270h+vec]
        vmulss  xmm0, xmm9, dword ptr [rdi+694Ch]
        vsubss  xmm11, xmm2, xmm0
        vmulss  xmm2, xmm9, dword ptr [rdi+6948h]
        vmulss  xmm1, xmm7, dword ptr [rdi+6944h]
        vsubss  xmm5, xmm2, xmm1
        vmulss  xmm3, xmm8, xmm11
        vmulss  xmm0, xmm7, xmm5
        vsubss  xmm12, xmm3, xmm0
        vmulss  xmm2, xmm9, xmm5
        vmulss  xmm1, xmm8, xmm10
        vsubss  xmm13, xmm2, xmm1
        vmulss  xmm3, xmm7, xmm10
        vmulss  xmm0, xmm9, xmm11
        vsubss  xmm14, xmm3, xmm0
      }
      v69 = v146;
      v70 = v145;
      v71 = v143;
      if ( v144 || v143 || v145 || v146 )
      {
        v72 = moveMsec;
        if ( !moveMsec )
          v72 = v36;
        moveMsec = v72;
        __asm { vmovss  xmm4, cs:__real@3e4ccccd }
        if ( v144 )
        {
          _EAX = -v144;
          __asm
          {
            vmovd   xmm0, eax
            vcvtdq2ps xmm0, xmm0
            vmulss  xmm1, xmm0, xmm4
            vmulss  xmm3, xmm1, xmm6
            vmulss  xmm0, xmm3, xmm10
            vaddss  xmm1, xmm0, dword ptr [rdi+38h]
            vmovss  dword ptr [rdi+38h], xmm1
            vmulss  xmm2, xmm3, xmm11
            vaddss  xmm0, xmm2, dword ptr [rdi+3Ch]
            vmovss  dword ptr [rdi+3Ch], xmm0
            vmulss  xmm1, xmm3, xmm5
            vaddss  xmm2, xmm1, dword ptr [rdi+40h]
            vmovss  dword ptr [rdi+40h], xmm2
          }
        }
        if ( v71 )
        {
          _EAX = v71;
          __asm
          {
            vmovd   xmm0, eax
            vcvtdq2ps xmm0, xmm0
            vmulss  xmm1, xmm0, xmm4
            vmulss  xmm3, xmm1, xmm6
            vmulss  xmm0, xmm12, xmm3
            vaddss  xmm1, xmm0, dword ptr [rdi+38h]
            vmovss  dword ptr [rdi+38h], xmm1
            vmulss  xmm2, xmm13, xmm3
            vaddss  xmm0, xmm2, dword ptr [rdi+3Ch]
            vmovss  dword ptr [rdi+3Ch], xmm0
            vmulss  xmm1, xmm14, xmm3
            vaddss  xmm2, xmm1, dword ptr [rdi+40h]
            vmovss  dword ptr [rdi+40h], xmm2
          }
        }
        if ( v36 - v72 < 250 )
          __asm { vmulss  xmm6, xmm6, cs:__real@3e800000 }
        if ( v70 )
        {
          _EAX = v70;
          __asm
          {
            vmovd   xmm0, eax
            vcvtdq2ps xmm0, xmm0
            vmulss  xmm1, xmm0, xmm4
            vmulss  xmm3, xmm1, xmm6
            vmulss  xmm0, xmm9, xmm3
            vaddss  xmm1, xmm0, dword ptr [rdi+38h]
            vmovss  dword ptr [rdi+38h], xmm1
            vmulss  xmm2, xmm7, xmm3
            vaddss  xmm0, xmm2, dword ptr [rdi+3Ch]
            vmovss  dword ptr [rdi+3Ch], xmm0
            vmulss  xmm1, xmm8, xmm3
            vaddss  xmm2, xmm1, dword ptr [rdi+40h]
            vmovss  dword ptr [rdi+40h], xmm2
          }
        }
        if ( v69 )
        {
          _EAX = -v69;
          __asm
          {
            vmovd   xmm0, eax
            vcvtdq2ps xmm0, xmm0
            vmulss  xmm1, xmm0, xmm4
            vmulss  xmm3, xmm1, xmm6
            vmulss  xmm0, xmm9, xmm3
            vaddss  xmm1, xmm0, dword ptr [rdi+38h]
            vmovss  dword ptr [rdi+38h], xmm1
            vmulss  xmm2, xmm7, xmm3
            vaddss  xmm0, xmm2, dword ptr [rdi+3Ch]
            vmovss  dword ptr [rdi+3Ch], xmm0
            vmulss  xmm1, xmm8, xmm3
            vaddss  xmm2, xmm1, dword ptr [rdi+40h]
            vmovss  dword ptr [rdi+40h], xmm2
          }
        }
      }
      else
      {
        moveMsec = 0;
      }
      CG_PlayerState_ClearExtrapolatedPlayerState(localClientNum);
      __asm
      {
        vmovss  xmm0, dword ptr [rdi+38h]
        vmovss  dword ptr [rsp+270h+inOrg], xmm0
        vmovss  xmm1, dword ptr [rdi+3Ch]
        vmovss  dword ptr [rsp+270h+inOrg+4], xmm1
        vmovss  xmm0, dword ptr [rdi+40h]
        vmovss  dword ptr [rsp+270h+inOrg+8], xmm0
        vmovss  xmm1, dword ptr [rdi+1F0h]; height
      }
      WorldUpReferenceFrame::AddUpContribution(&v138, *(float *)&_XMM1, &inOrg);
      RefdefView_SetOrg(&_RDI->refdef.view, &inOrg);
      AxisToAngles(&_RDI->refdef.view.axis, &_RDI->refdefViewAngles);
      p_inOrg = &inOrg;
      v19 = 12i64;
    }
    else
    {
      v19 = 4i64;
      p_inOrg = (vec3_t *)&v134;
      pausedFreeMove = 0;
    }
    result = 1;
    memset(p_inOrg, 0, v19);
  }
  else
  {
LABEL_2:
    pausedFreeMove = 0;
    result = 0;
  }
  _R11 = &v147;
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
  return result;
}

/*
==============
CG_ViewSP_ShouldDrawViewLinkedEntity
==============
*/
char CG_ViewSP_ShouldDrawViewLinkedEntity(const LocalClientNum_t localClientNum, const centity_t *cent)
{
  DObj *ClientDObj; 
  const dvar_t *v5; 

  ClientDObj = Com_GetClientDObj(cent->nextState.number, localClientNum);
  if ( (cent->flags & 1) == 0 || !ClientDObj || CG_Entity_IsNoDraw(localClientNum, &cent->nextState, NULL) )
    return 0;
  v5 = DVARINT_cl_freemove;
  if ( !DVARINT_cl_freemove && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_freemove") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v5);
  if ( v5->current.integer )
    return 0;
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_FAST_LAND|WEAPON_OFFHAND_END) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_view_sp.cpp", 390, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::VIEW_LINKED_ENTITIES ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::VIEW_LINKED_ENTITIES )") )
    __debugbreak();
  return 1;
}

/*
==============
CG_ViewSP_SortClientLinkedEntities
==============
*/
void CG_ViewSP_SortClientLinkedEntities(const LocalClientNum_t localClientNum)
{
  __int64 v3; 
  unsigned __int64 v4; 
  unsigned __int16 *p_linkedEnt; 
  unsigned __int16 *i; 
  __int64 v7; 
  ViewJostleState *v8; 
  __int64 v9; 
  unsigned __int16 linkedEnt; 
  unsigned __int64 v28; 
  unsigned __int16 v35; 
  unsigned __int64 v36; 
  unsigned __int16 v43; 
  unsigned __int64 v44; 
  unsigned __int16 v51; 
  ViewJostleState v58; 

  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_FAST_LAND|WEAPON_OFFHAND_END) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_view_sp.cpp", 780, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::VIEW_LINKED_ENTITIES ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::VIEW_LINKED_ENTITIES )") )
    __debugbreak();
  _RBX = CG_GetLocalClientGlobals(localClientNum);
  v3 = 0i64;
  v4 = 0i64;
  p_linkedEnt = &_RBX->linkedToPlayerView[0].linkedEnt;
  for ( i = &_RBX->predictedPlayerState.viewLinkedEntityData[0].linkedEnt; *p_linkedEnt == *i; i += 16 )
  {
    ++v4;
    p_linkedEnt += 62;
    if ( v4 >= 4 )
      return;
  }
  v7 = 4i64;
  v8 = &v58;
  do
  {
    ViewJostleState::ViewJostleState(v8++);
    --v7;
  }
  while ( v7 );
  v9 = 3i64;
  _RAX = _RBX->linkedToPlayerView;
  _RCX = &v58;
  do
  {
    _RCX = (ViewJostleState *)((char *)_RCX + 128);
    __asm { vmovups xmm0, xmmword ptr [rax] }
    _RAX = (ViewJostleState *)((char *)_RAX + 128);
    __asm
    {
      vmovups xmmword ptr [rcx-80h], xmm0
      vmovups xmm1, xmmword ptr [rax-70h]
      vmovups xmmword ptr [rcx-70h], xmm1
      vmovups xmm0, xmmword ptr [rax-60h]
      vmovups xmmword ptr [rcx-60h], xmm0
      vmovups xmm1, xmmword ptr [rax-50h]
      vmovups xmmword ptr [rcx-50h], xmm1
      vmovups xmm0, xmmword ptr [rax-40h]
      vmovups xmmword ptr [rcx-40h], xmm0
      vmovups xmm1, xmmword ptr [rax-30h]
      vmovups xmmword ptr [rcx-30h], xmm1
      vmovups xmm0, xmmword ptr [rax-20h]
      vmovups xmmword ptr [rcx-20h], xmm0
      vmovups xmm1, xmmword ptr [rax-10h]
      vmovups xmmword ptr [rcx-10h], xmm1
    }
    --v9;
  }
  while ( v9 );
  __asm
  {
    vmovups xmm0, xmmword ptr [rax]
    vmovups xmmword ptr [rcx], xmm0
    vmovups xmm1, xmmword ptr [rax+10h]
    vmovups xmmword ptr [rcx+10h], xmm1
    vmovups xmm0, xmmword ptr [rax+20h]
    vmovups xmmword ptr [rcx+20h], xmm0
    vmovups xmm1, xmmword ptr [rax+30h]
    vmovups xmmword ptr [rcx+30h], xmm1
    vmovups xmm0, xmmword ptr [rax+40h]
    vmovups xmmword ptr [rcx+40h], xmm0
    vmovups xmm1, xmmword ptr [rax+50h]
    vmovups xmmword ptr [rcx+50h], xmm1
    vmovups xmm0, xmmword ptr [rax+60h]
    vmovups xmmword ptr [rcx+60h], xmm0
  }
  memset_0(_RBX->linkedToPlayerView, (unsigned __int8)v9, sizeof(_RBX->linkedToPlayerView));
  linkedEnt = _RBX->predictedPlayerState.viewLinkedEntityData[0].linkedEnt;
  if ( linkedEnt && linkedEnt != 2047 )
  {
    v28 = 0i64;
    _RAX = &v58;
    while ( _RAX->linkedEnt != linkedEnt )
    {
      ++v28;
      ++_RAX;
      if ( v28 >= 4 )
        goto LABEL_19;
    }
    __asm
    {
      vmovups ymm0, ymmword ptr [rax]
      vmovups ymmword ptr [rbx+49E08h], ymm0
      vmovups ymm1, ymmword ptr [rax+20h]
      vmovups ymmword ptr [rbx+49E28h], ymm1
      vmovups ymm0, ymmword ptr [rax+40h]
      vmovups ymmword ptr [rbx+49E48h], ymm0
      vmovups xmm1, xmmword ptr [rax+60h]
      vmovups xmmword ptr [rbx+49E68h], xmm1
      vmovsd  xmm0, qword ptr [rax+70h]
      vmovsd  qword ptr [rbx+49E78h], xmm0
    }
    *(_DWORD *)&_RBX->linkedToPlayerView[0].linkedEnt = *(_DWORD *)&_RAX->linkedEnt;
  }
LABEL_19:
  v35 = _RBX->predictedPlayerState.viewLinkedEntityData[1].linkedEnt;
  if ( v35 && v35 != 2047 )
  {
    v36 = 0i64;
    _RAX = &v58;
    while ( _RAX->linkedEnt != v35 )
    {
      ++v36;
      ++_RAX;
      if ( v36 >= 4 )
        goto LABEL_26;
    }
    __asm
    {
      vmovups ymm0, ymmword ptr [rax]
      vmovups ymmword ptr [rbx+49E84h], ymm0
      vmovups ymm1, ymmword ptr [rax+20h]
      vmovups ymmword ptr [rbx+49EA4h], ymm1
      vmovups ymm0, ymmword ptr [rax+40h]
      vmovups ymmword ptr [rbx+49EC4h], ymm0
      vmovups xmm1, xmmword ptr [rax+60h]
      vmovups xmmword ptr [rbx+49EE4h], xmm1
      vmovsd  xmm0, qword ptr [rax+70h]
      vmovsd  qword ptr [rbx+49EF4h], xmm0
    }
    *(_DWORD *)&_RBX->linkedToPlayerView[1].linkedEnt = *(_DWORD *)&_RAX->linkedEnt;
  }
LABEL_26:
  v43 = _RBX->predictedPlayerState.viewLinkedEntityData[2].linkedEnt;
  if ( v43 && v43 != 2047 )
  {
    v44 = 0i64;
    _RAX = &v58;
    while ( _RAX->linkedEnt != v43 )
    {
      ++v44;
      ++_RAX;
      if ( v44 >= 4 )
        goto LABEL_33;
    }
    __asm
    {
      vmovups ymm0, ymmword ptr [rax]
      vmovups ymmword ptr [rbx+49F00h], ymm0
      vmovups ymm1, ymmword ptr [rax+20h]
      vmovups ymmword ptr [rbx+49F20h], ymm1
      vmovups ymm0, ymmword ptr [rax+40h]
      vmovups ymmword ptr [rbx+49F40h], ymm0
      vmovups xmm1, xmmword ptr [rax+60h]
      vmovups xmmword ptr [rbx+49F60h], xmm1
      vmovsd  xmm0, qword ptr [rax+70h]
      vmovsd  qword ptr [rbx+49F70h], xmm0
    }
    *(_DWORD *)&_RBX->linkedToPlayerView[2].linkedEnt = *(_DWORD *)&_RAX->linkedEnt;
  }
LABEL_33:
  v51 = _RBX->predictedPlayerState.viewLinkedEntityData[3].linkedEnt;
  if ( v51 && v51 != 2047 )
  {
    for ( _RAX = &v58; _RAX->linkedEnt != v51; ++_RAX )
    {
      if ( (unsigned __int64)++v3 >= 4 )
        return;
    }
    __asm
    {
      vmovups ymm0, ymmword ptr [rax]
      vmovups ymmword ptr [rbx+49F7Ch], ymm0
      vmovups ymm1, ymmword ptr [rax+20h]
      vmovups ymmword ptr [rbx+49F9Ch], ymm1
      vmovups ymm0, ymmword ptr [rax+40h]
      vmovups ymmword ptr [rbx+49FBCh], ymm0
      vmovups xmm1, xmmword ptr [rax+60h]
      vmovups xmmword ptr [rbx+49FDCh], xmm1
      vmovsd  xmm0, qword ptr [rax+70h]
      vmovsd  qword ptr [rbx+49FECh], xmm0
    }
    *(_DWORD *)&_RBX->linkedToPlayerView[3].linkedEnt = *(_DWORD *)&_RAX->linkedEnt;
  }
}

/*
==============
CG_ViewSP_UpdateKickAngles
==============
*/
void CG_ViewSP_UpdateKickAngles(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  cg_t *v2; 
  vec3_t *inOutRawKickAngles; 
  vec3_t *outKickAngles; 
  int outKickAnglesa; 
  vec3_t v6; 
  vec3_t v7; 
  vec3_t inOutKickAVel; 
  CgWeaponMap *weaponMap; 
  CgViewSystem *v10; 

  v1 = localClientNum;
  if ( !CgWeaponMap::ms_instance[localClientNum] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
    __debugbreak();
  weaponMap = CgWeaponMap::ms_instance[v1];
  if ( !(_BYTE)CgViewSystem::ms_allocatedType )
  {
    outKickAnglesa = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.h", 267, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the view system for localClientNum %d but the view system type is not known\n", "ms_allocatedType != GameModeType::NONE", outKickAnglesa) )
      __debugbreak();
  }
  if ( (unsigned int)v1 >= CgViewSystem::ms_allocatedCount )
  {
    LODWORD(outKickAngles) = CgViewSystem::ms_allocatedCount;
    LODWORD(inOutRawKickAngles) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.h", 268, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", inOutRawKickAngles, outKickAngles) )
      __debugbreak();
  }
  if ( !CgViewSystem::ms_viewSystemArray[v1] )
  {
    LODWORD(outKickAngles) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.h", 269, ASSERT_TYPE_ASSERT, "(ms_viewSystemArray[localClientNum])", "%s\n\tTrying to access unallocated view system for localClientNum %d\n", "ms_viewSystemArray[localClientNum]", outKickAngles) )
      __debugbreak();
  }
  v10 = CgViewSystem::ms_viewSystemArray[v1];
  if ( !Com_GameMode_SupportsFeature(WEAPON_LEAP_LOOP) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_api.h", 118, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::SINGLE_LOCAL_CLIENT ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::SINGLE_LOCAL_CLIENT )") )
    __debugbreak();
  if ( SLODWORD(cl_maxLocalClients) > 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_api.h", 119, ASSERT_TYPE_ASSERT, "(cl_maxLocalClients <= 1)", "%s\n\tShould not use this function when more than one local clients are possible.", "cl_maxLocalClients <= 1") )
    __debugbreak();
  if ( (_DWORD)v1 )
  {
    LODWORD(inOutRawKickAngles) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_globals_sp.h", 69, ASSERT_TYPE_ASSERT, "( ( localClientNum == CL_GetOnlyLocalClientNum() ) )", "( localClientNum ) = %i", inOutRawKickAngles) )
      __debugbreak();
  }
  if ( cg_t::ms_allocatedType != GLOB_TYPE_SP )
  {
    LODWORD(outKickAngles) = cg_t::ms_allocatedType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_globals_sp.h", 70, ASSERT_TYPE_ASSERT, "(CG_Globals_GetType() == CgGlobalsType::GLOB_TYPE_SP)", "%s\n\tCgGlobalsSP::GetLocalClientGlobals: Trying to get single-player globals but the globals were not allocated as single-player. Allocated type is:%d\n", "CG_Globals_GetType() == CgGlobalsType::GLOB_TYPE_SP", outKickAngles) )
      __debugbreak();
  }
  v2 = cg_t::ms_cgArray[v1];
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_SLOW_SOFT_LAND|WEAPON_OFFHAND_END) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_view_sp.cpp", 311, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::VIEW_KICK_ANGLES ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::VIEW_KICK_ANGLES )") )
    __debugbreak();
  if ( !v2->kickAVel.initialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\anticheat\\security_obfuscation_integer.h", 221, ASSERT_TYPE_ASSERT, "(initialized)", (const char *)&queryFormat, "initialized") )
    __debugbreak();
  LODWORD(inOutKickAVel.v[0]) = ((((_DWORD)v2 + 302476) ^ v2->kickAVel.secureInt32_3_aab) * ((((_DWORD)v2 + 302476) ^ v2->kickAVel.secureInt32_3_aab) + 2)) ^ v2->kickAVel.data[0];
  LODWORD(inOutKickAVel.v[1]) = ((((_DWORD)v2 + 302480) ^ v2->kickAVel.secureInt32_3_aab) * ((((_DWORD)v2 + 302480) ^ v2->kickAVel.secureInt32_3_aab) + 2)) ^ v2->kickAVel.data[1];
  LODWORD(inOutKickAVel.v[2]) = ((((_DWORD)v2 + 302484) ^ v2->kickAVel.secureInt32_3_aab) * ((((_DWORD)v2 + 302484) ^ v2->kickAVel.secureInt32_3_aab) + 2)) ^ v2->kickAVel.data[2];
  if ( !v2->rawKickAngles.initialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\anticheat\\security_obfuscation_integer.h", 221, ASSERT_TYPE_ASSERT, "(initialized)", (const char *)&queryFormat, "initialized") )
    __debugbreak();
  LODWORD(v7.v[0]) = ((((_DWORD)v2 + 302500) ^ v2->rawKickAngles.secureInt32_3_aab) * ((((_DWORD)v2 + 302500) ^ v2->rawKickAngles.secureInt32_3_aab) + 2)) ^ v2->rawKickAngles.data[0];
  LODWORD(v7.v[1]) = ((((_DWORD)v2 + 302504) ^ v2->rawKickAngles.secureInt32_3_aab) * ((((_DWORD)v2 + 302504) ^ v2->rawKickAngles.secureInt32_3_aab) + 2)) ^ v2->rawKickAngles.data[1];
  LODWORD(v7.v[2]) = v2->rawKickAngles.data[2] ^ ((((_DWORD)v2 + 302508) ^ v2->rawKickAngles.secureInt32_3_aab) * ((((_DWORD)v2 + 302508) ^ v2->rawKickAngles.secureInt32_3_aab) + 2));
  if ( !v2->kickAngles.initialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\anticheat\\security_obfuscation_integer.h", 221, ASSERT_TYPE_ASSERT, "(initialized)", (const char *)&queryFormat, "initialized") )
    __debugbreak();
  LODWORD(v6.v[0]) = ((((_DWORD)v2 + 302524) ^ v2->kickAngles.secureInt32_3_aab) * ((((_DWORD)v2 + 302524) ^ v2->kickAngles.secureInt32_3_aab) + 2)) ^ v2->kickAngles.data[0];
  LODWORD(v6.v[1]) = ((((_DWORD)v2 + 302528) ^ v2->kickAngles.secureInt32_3_aab) * ((((_DWORD)v2 + 302528) ^ v2->kickAngles.secureInt32_3_aab) + 2)) ^ v2->kickAngles.data[1];
  LODWORD(v6.v[2]) = v2->kickAngles.data[2] ^ ((((_DWORD)v2 + 302532) ^ v2->kickAngles.secureInt32_3_aab) * ((((_DWORD)v2 + 302532) ^ v2->kickAngles.secureInt32_3_aab) + 2));
  BG_KickAngles(weaponMap, &v2->predictedPlayerState, v2->frametime, &v2->kickTimeRemaining, &inOutKickAVel, &v7, &v6, &v2->kickNeedsToCrossCenter);
  if ( !v2->kickAVel.initialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\anticheat\\security_obfuscation_integer.h", 186, ASSERT_TYPE_ASSERT, "(initialized)", (const char *)&queryFormat, "initialized") )
    __debugbreak();
  v2->kickAVel.secureInt32_3_aab += v2->kickAVel.secureInt32_3_set_aab;
  v2->kickAVel.data[0] = LODWORD(inOutKickAVel.v[0]) ^ ((((_DWORD)v2 + 302476) ^ v2->kickAVel.secureInt32_3_aab) * ((((_DWORD)v2 + 302476) ^ v2->kickAVel.secureInt32_3_aab) + 2));
  v2->kickAVel.data[1] = ((v2->kickAVel.secureInt32_3_aab ^ ((_DWORD)v2 + 302480)) * ((v2->kickAVel.secureInt32_3_aab ^ ((_DWORD)v2 + 302480)) + 2)) ^ LODWORD(inOutKickAVel.v[1]);
  v2->kickAVel.data[2] = ((v2->kickAVel.secureInt32_3_aab ^ ((_DWORD)v2 + 302484)) * ((v2->kickAVel.secureInt32_3_aab ^ ((_DWORD)v2 + 302484)) + 2)) ^ LODWORD(inOutKickAVel.v[2]);
  if ( !v2->rawKickAngles.initialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\anticheat\\security_obfuscation_integer.h", 186, ASSERT_TYPE_ASSERT, "(initialized)", (const char *)&queryFormat, "initialized") )
    __debugbreak();
  v2->rawKickAngles.secureInt32_3_aab += v2->rawKickAngles.secureInt32_3_set_aab;
  v2->rawKickAngles.data[0] = ((((_DWORD)v2 + 302500) ^ v2->rawKickAngles.secureInt32_3_aab) * ((((_DWORD)v2 + 302500) ^ v2->rawKickAngles.secureInt32_3_aab) + 2)) ^ LODWORD(v7.v[0]);
  v2->rawKickAngles.data[1] = ((((_DWORD)v2 + 302504) ^ v2->rawKickAngles.secureInt32_3_aab) * ((((_DWORD)v2 + 302504) ^ v2->rawKickAngles.secureInt32_3_aab) + 2)) ^ LODWORD(v7.v[1]);
  v2->rawKickAngles.data[2] = ((((_DWORD)v2 + 302508) ^ v2->rawKickAngles.secureInt32_3_aab) * ((((_DWORD)v2 + 302508) ^ v2->rawKickAngles.secureInt32_3_aab) + 2)) ^ LODWORD(v7.v[2]);
  if ( !v2->kickAngles.initialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\anticheat\\security_obfuscation_integer.h", 186, ASSERT_TYPE_ASSERT, "(initialized)", (const char *)&queryFormat, "initialized") )
    __debugbreak();
  v2->kickAngles.secureInt32_3_aab += v2->kickAngles.secureInt32_3_set_aab;
  v2->kickAngles.data[0] = ((((_DWORD)v2 + 302524) ^ v2->kickAngles.secureInt32_3_aab) * ((((_DWORD)v2 + 302524) ^ v2->kickAngles.secureInt32_3_aab) + 2)) ^ LODWORD(v6.v[0]);
  v2->kickAngles.data[1] = ((((_DWORD)v2 + 302528) ^ v2->kickAngles.secureInt32_3_aab) * ((((_DWORD)v2 + 302528) ^ v2->kickAngles.secureInt32_3_aab) + 2)) ^ LODWORD(v6.v[1]);
  v2->kickAngles.data[2] = ((((_DWORD)v2 + 302532) ^ v2->kickAngles.secureInt32_3_aab) * ((((_DWORD)v2 + 302532) ^ v2->kickAngles.secureInt32_3_aab) + 2)) ^ LODWORD(v6.v[2]);
  CgViewSystem::UpdateViewKickState(v10, &v2->kickCorrection);
  memset(&v6, 0, sizeof(v6));
  memset(&v7, 0, sizeof(v7));
  memset(&inOutKickAVel, 0, sizeof(inOutKickAVel));
}

/*
==============
CG_ViewSP_UpdateSelectedWeapon
==============
*/
void CG_ViewSP_UpdateSelectedWeapon(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  CgWeaponMap *v3; 
  const dvar_t *v4; 
  int EquippedWeaponIndex; 
  __int64 v6; 
  const Weapon *CurrentWeaponForPlayer; 

  v1 = localClientNum;
  _R14 = CG_GetLocalClientGlobals(localClientNum);
  if ( !CgWeaponMap::ms_instance[v1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
    __debugbreak();
  v3 = CgWeaponMap::ms_instance[v1];
  if ( _R14->weaponSelect.weaponIdx )
  {
    if ( !v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 1105, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
      __debugbreak();
    if ( _R14 == (cg_t *)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 1106, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    v4 = DVARBOOL_bg_giveAll;
    if ( !DVARBOOL_bg_giveAll || (Dvar_CheckFrontendServerThread(DVARBOOL_bg_giveAll), !v4->current.enabled) )
    {
      if ( !v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 1089, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
        __debugbreak();
      if ( _R14 == (cg_t *)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 1090, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
        __debugbreak();
      if ( _R14->weaponSelect.weaponIdx && (EquippedWeaponIndex = BG_GetEquippedWeaponIndex(v3, &_R14->predictedPlayerState, &_R14->weaponSelect), EquippedWeaponIndex >= 0) )
        v6 = (__int64)&_R14->predictedPlayerState.weapEquippedData[EquippedWeaponIndex];
      else
        v6 = 0i64;
      if ( !v6 )
      {
        CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(v3, &_R14->predictedPlayerState);
        if ( !CG_SelectWeapon((LocalClientNum_t)v1, CurrentWeaponForPlayer, 0) )
        {
          __asm
          {
            vmovups ymm0, ymmword ptr cs:?NULL_WEAPON@@3UWeapon@@B.weaponIdx; Weapon const NULL_WEAPON
            vmovups ymmword ptr [r14+18114h], ymm0
            vmovups xmm1, xmmword ptr cs:?NULL_WEAPON@@3UWeapon@@B.attachmentVariationIndices+5; Weapon const NULL_WEAPON
            vmovups xmmword ptr [r14+18134h], xmm1
            vmovsd  xmm0, qword ptr cs:?NULL_WEAPON@@3UWeapon@@B.attachmentVariationIndices+15h; Weapon const NULL_WEAPON
            vmovsd  qword ptr [r14+18144h], xmm0
          }
          *(_QWORD *)&_R14->weaponSelect.weaponCamo = *(unsigned int *)&NULL_WEAPON.weaponCamo;
        }
      }
    }
  }
}

/*
==============
CG_ViewSP_UpdateViewLinkedEntities
==============
*/
void CG_ViewSP_UpdateViewLinkedEntities(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  cg_t *LocalClientGlobals; 
  CgEntitySystem *EntitySystem; 
  int v4; 
  unsigned __int16 *p_linkedEnt; 
  __int64 v6; 
  CgEntitySystem *v7; 
  const centity_t *v8; 
  unsigned int v9; 
  unsigned int number; 
  CgEntitySystem *v11; 
  centity_t *Entity; 
  __int64 v13; 
  __int64 v14; 

  v1 = localClientNum;
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_FAST_LAND|WEAPON_OFFHAND_END) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_view_sp.cpp", 986, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::VIEW_LINKED_ENTITIES ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::VIEW_LINKED_ENTITIES )") )
    __debugbreak();
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)v1);
  Profile2_UpdateEntry(33);
  if ( ((unsigned __int8)&dword_14FDE8054 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &dword_14FDE8054) )
    __debugbreak();
  _InterlockedIncrement(&dword_14FDE8054);
  EntitySystem = CgEntitySystem::GetEntitySystem((const LocalClientNum_t)v1);
  EntitySystem->AddPostPlayerStatePacketEntities(EntitySystem, (const LocalClientNum_t)v1);
  Profile2_UpdateEntry(33);
  if ( ((unsigned __int64)&dword_14FDE8054 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &dword_14FDE8054) )
    __debugbreak();
  _InterlockedDecrement(&dword_14FDE8054);
  v4 = 0;
  if ( LocalClientGlobals->predictedPlayerState.numViewLinkedEnts > 0 )
  {
    p_linkedEnt = &LocalClientGlobals->predictedPlayerState.viewLinkedEntityData[0].linkedEnt;
    do
    {
      v6 = *p_linkedEnt;
      v7 = CgEntitySystem::GetEntitySystem((const LocalClientNum_t)v1);
      if ( (unsigned int)v6 >= 0x800 )
      {
        LODWORD(v14) = 2048;
        LODWORD(v13) = v6;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", v13, v14) )
          __debugbreak();
      }
      v8 = &v7->m_entities[v6];
      if ( CG_ViewSP_ShouldDrawViewLinkedEntity((const LocalClientNum_t)v1, v8) )
      {
        v9 = v7->m_entities[v6].nextState.lerp.eFlags.m_flags[0];
        number = v8->nextState.number;
        v11 = CgEntitySystem::GetEntitySystem((const LocalClientNum_t)v1);
        v11->AddPacketEntity(v11, number);
        if ( g_processEvents )
        {
          Entity = CG_GetEntity((const LocalClientNum_t)v1, number);
          if ( !(_BYTE)CgEventSystem::ms_allocatedType )
          {
            LODWORD(v14) = v1;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.h", 224, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the event system for localClientNum %d but the event system type is not known\n", "ms_allocatedType != GameModeType::NONE", v14) )
              __debugbreak();
          }
          if ( (unsigned int)v1 >= CgEventSystem::ms_allocatedCount )
          {
            LODWORD(v14) = CgEventSystem::ms_allocatedCount;
            LODWORD(v13) = v1;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.h", 225, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v13, v14) )
              __debugbreak();
          }
          if ( !CgEventSystem::ms_eventSystemArray[v1] )
          {
            LODWORD(v14) = v1;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.h", 226, ASSERT_TYPE_ASSERT, "(ms_eventSystemArray[localClientNum])", "%s\n\tTrying to access unallocated event system for localClientNum %d\n", "ms_eventSystemArray[localClientNum]", v14) )
              __debugbreak();
          }
          CgEventSystem::CheckEntityEvents(CgEventSystem::ms_eventSystemArray[v1], Entity, 0);
        }
        v8->nextState.lerp.eFlags.m_flags[0] = v9;
      }
      ++v4;
      p_linkedEnt += 16;
    }
    while ( v4 < LocalClientGlobals->predictedPlayerState.numViewLinkedEnts );
  }
}

/*
==============
CgViewSystemSP::CalcLinkedToPlayerViewTags
==============
*/
void CgViewSystemSP::CalcLinkedToPlayerViewTags(CgViewSystemSP *this, CgViewSystem::ViewmodelPhase phase)
{
  CgViewSystem::ViewmodelPhase v3; 
  playerState_s *p_predictedPlayerState; 
  bool v6; 
  __int16 remoteEyesEnt; 
  bool v8; 
  scr_string_t *p_linkedTag; 
  __int64 v12; 
  CgEntitySystem *EntitySystem; 
  PlayerHandIndex v15; 
  const DObj *ClientDObj; 
  const DObj *v17; 
  scr_string_t v18; 
  scr_string_t v19; 
  bool v20; 
  int v21; 
  int v22; 
  const cpose_t *ViewModelPoseForHand; 
  CgHandler *Handler; 
  unsigned __int64 numViewLinkedEnts; 
  __int64 v30; 
  __int64 v31; 
  bool v32; 
  char v33; 
  unsigned __int8 v34; 
  unsigned __int8 v35; 
  unsigned __int8 inOutIndex[4]; 
  CgViewSystem::ViewmodelPhase v37; 
  __int16 linkEnt; 
  unsigned __int64 linkIndex; 
  int modelIndex; 
  playerState_s *ps; 
  cg_t *LocalClientGlobals; 
  tmat43_t<vec3_t> outAxis; 
  tmat43_t<vec3_t> in2; 
  tmat43_t<vec3_t> out; 
  tmat33_t<vec3_t> axis; 
  WorldUpReferenceFrame v47; 
  DObjHierarchyIterator iter; 

  v37 = phase;
  v3 = phase;
  if ( (unsigned int)phase >= VM_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_view_sp.cpp", 1469, ASSERT_TYPE_ASSERT, "(unsigned)( phase ) < (unsigned)( VM_COUNT )", "phase doesn't index VM_COUNT\n\t%i not in [0, %i)", phase, 3) )
    __debugbreak();
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_FAST_LAND|WEAPON_OFFHAND_END) )
  {
    LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
    if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_view_sp.cpp", 1477, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
      __debugbreak();
    p_predictedPlayerState = &LocalClientGlobals->predictedPlayerState;
    v6 = LocalClientGlobals->predictedPlayerState.numViewLinkedEnts <= 0;
    ps = &LocalClientGlobals->predictedPlayerState;
    if ( !v6 )
    {
      Profile_Begin(782);
      if ( !LocalClientGlobals->predictedPlayerState.viewLinkEntsFollowRemoteEyes || !GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&LocalClientGlobals->predictedPlayerState.otherFlags, ACTIVE, 1u) || (remoteEyesEnt = LocalClientGlobals->predictedPlayerState.remoteEyesEnt, remoteEyesEnt == 2047) || (v33 = 1, !remoteEyesEnt) )
        v33 = 0;
      linkEnt = LocalClientGlobals->predictedPlayerState.linkEnt;
      AxisCopy(&LocalClientGlobals->refdef.view.axis, (tmat33_t<vec3_t> *)&out);
      RefdefView_GetOrg(&LocalClientGlobals->refdef.view, &out.m[3]);
      MatrixInverseOrthogonal43(&out, &in2);
      v8 = LocalClientGlobals->predictedPlayerState.numViewLinkedEnts == 0;
      linkIndex = 0i64;
      if ( !v8 )
      {
        _RBX = LocalClientGlobals->linkedToPlayerView;
        p_linkedTag = &LocalClientGlobals->predictedPlayerState.viewLinkedEntityData[0].linkedTag;
        __asm
        {
          vmovaps [rsp+9C0h+var_40], xmm6
          vmovss  xmm6, cs:__real@3f800000
        }
        while ( 1 )
        {
          v12 = *((unsigned __int16 *)p_linkedTag + 2);
          EntitySystem = CgEntitySystem::GetEntitySystem((const LocalClientNum_t)this->m_localClientNum);
          if ( (unsigned int)v12 >= 0x800 )
          {
            LODWORD(v31) = 2048;
            LODWORD(v30) = v12;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", v30, v31) )
              __debugbreak();
          }
          v32 = 0;
          if ( !CG_ViewSP_ShouldDrawViewLinkedEntity((const LocalClientNum_t)this->m_localClientNum, &EntitySystem->m_entities[v12]) )
            goto LABEL_57;
          if ( *p_linkedTag == scr_const.tag_origin )
          {
            __asm { vmovaps xmm3, xmm6; scale }
            v32 = CG_CheckResetLinkState(p_predictedPlayerState, linkIndex, _RBX);
            MatrixSet43(&_RBX->viewToLinkedTagTransform, &vec3_origin, &identityMatrix33, *(float *)&_XMM3);
            goto LABEL_54;
          }
          if ( v33 )
          {
            if ( v3 != VM_PRE_MOTION )
            {
              v32 = CG_CheckResetLinkState(p_predictedPlayerState, linkIndex, _RBX);
              CalcNonViewmodelLinkedToPlayerView(this->m_localClientNum, &LocalClientGlobals->refdef, p_predictedPlayerState->remoteEyesEnt, *p_linkedTag, &outAxis);
              MatrixMultiply43(&outAxis, &in2, &_RBX->viewToLinkedTagTransform);
              goto LABEL_54;
            }
            goto LABEL_57;
          }
          if ( (unsigned int)(v3 - 1) > 1 )
          {
            if ( linkEnt != 2047 )
            {
              if ( v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_view_sp.cpp", 1580, ASSERT_TYPE_ASSERT, "(phase == VM_NONE)", (const char *)&queryFormat, "phase == VM_NONE") )
                __debugbreak();
              v32 = CG_CheckResetLinkState(p_predictedPlayerState, linkIndex, _RBX);
              CalcNonViewmodelLinkedToPlayerView(this->m_localClientNum, &LocalClientGlobals->refdef, p_predictedPlayerState->linkEnt, *p_linkedTag, &outAxis);
              MatrixMultiply43(&outAxis, &in2, &_RBX->viewToLinkedTagTransform);
            }
            goto LABEL_54;
          }
          v15 = WEAPON_HAND_DEFAULT;
          while ( 1 )
          {
            ClientDObj = Com_GetClientDObj(v15 + 2048, this->m_localClientNum);
            v17 = ClientDObj;
            if ( !ClientDObj )
              goto LABEL_50;
            v18 = *p_linkedTag;
            inOutIndex[0] = -2;
            if ( !DObjGetBoneIndexInternal_83(ClientDObj, v18, inOutIndex, &modelIndex) )
              goto LABEL_50;
            v19 = *p_linkedTag;
            v20 = v3 == VM_PRE_MOTION;
            if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_view_sp.cpp", 398, ASSERT_TYPE_ASSERT, "(linkState)", (const char *)&queryFormat, "linkState") )
              __debugbreak();
            if ( !_RBX->isAttachmentCached )
            {
              v34 = -2;
              if ( !DObjGetBoneIndexInternal_83(v17, v19, &v34, &modelIndex) )
                CrashReport_TriggerNow();
              v35 = -2;
              if ( !DObjGetBoneIndexInternal_83(v17, scr_const.tag_cambone, &v35, &modelIndex) )
                goto LABEL_49;
              v21 = v34;
              _RBX->isAttachedToCam = 0;
              v22 = DObjHierarchyIterator_Begin(&iter, v17, v21);
              if ( v22 != 255 )
              {
                while ( v22 != v35 )
                {
                  v22 = DObjHierarchyIterator_NextParent(&iter);
                  if ( v22 == 255 )
                    goto LABEL_46;
                }
                _RBX->isAttachedToCam = 1;
              }
LABEL_46:
              _RBX->isAttachmentCached = 1;
            }
            if ( v20 == _RBX->isAttachedToCam )
            {
              v32 = CG_CheckResetLinkState(ps, linkIndex, _RBX);
              ViewModelPoseForHand = CG_GetViewModelPoseForHand(this->m_localClientNum, v15);
              if ( CG_DObjGetWorldTagMatrix(ViewModelPoseForHand, v17, *p_linkedTag, (tmat33_t<vec3_t> *)&outAxis, &outAxis.m[3]) )
                break;
            }
LABEL_49:
            v3 = v37;
LABEL_50:
            if ( ++v15 >= NUM_WEAPON_HANDS )
              goto LABEL_53;
          }
          MatrixMultiply43(&outAxis, &in2, &_RBX->viewToLinkedTagTransform);
LABEL_53:
          p_predictedPlayerState = ps;
LABEL_54:
          if ( v32 )
          {
            MatrixMultiply43(&_RBX->viewToLinkedTagTransform, &out, &outAxis);
            Handler = CgHandler::getHandler(this->m_localClientNum);
            WorldUpReferenceFrame::WorldUpReferenceFrame(&v47, p_predictedPlayerState, Handler);
            WorldUpReferenceFrame::RemoveReferenceFrameFromAxis(&v47, (const tmat33_t<vec3_t> *)&outAxis, &axis);
            AxisToAngles(&axis, &_RBX->oldLinkedTagAnglesLocal);
            __asm
            {
              vmovss  xmm0, dword ptr [rbp+8C0h+outAxis+24h]
              vmovss  xmm1, dword ptr [rbp+8C0h+outAxis+28h]
              vmovss  dword ptr [rbx+48h], xmm0
              vmovss  xmm0, dword ptr [rbp+8C0h+outAxis+2Ch]
              vmovss  dword ptr [rbx+50h], xmm0
              vmovss  dword ptr [rbx+4Ch], xmm1
            }
          }
          v3 = v37;
LABEL_57:
          p_linkedTag += 8;
          numViewLinkedEnts = p_predictedPlayerState->numViewLinkedEnts;
          ++_RBX;
          if ( ++linkIndex >= numViewLinkedEnts )
          {
            __asm { vmovaps xmm6, [rsp+9C0h+var_40] }
            break;
          }
        }
      }
      Profile_EndInternal(NULL);
    }
  }
}

/*
==============
CalcNonViewmodelLinkedToPlayerView
==============
*/
void CalcNonViewmodelLinkedToPlayerView(LocalClientNum_t localClientNum, const refdef_t *r_refdef, int entIndex, scr_string_t linkedTag, tmat43_t<vec3_t> *outAxis)
{
  centity_t *Entity; 
  const cpose_t *p_pose; 
  const DObj *ClientDObj; 
  vec3_t outOrg; 
  __int64 v15; 
  tmat43_t<vec3_t> v16; 
  tmat43_t<vec3_t> outTagMat; 
  tmat43_t<vec3_t> out; 
  tmat43_t<vec3_t> in2; 
  tmat43_t<vec3_t> in1; 

  v15 = -2i64;
  if ( entIndex == 2047 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_view_sp.cpp", 1432, ASSERT_TYPE_ASSERT, "(entIndex != ENTITYNUM_NONE)", (const char *)&queryFormat, "entIndex != ENTITYNUM_NONE") )
    __debugbreak();
  if ( !linkedTag && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_view_sp.cpp", 1433, ASSERT_TYPE_ASSERT, "(linkedTag != ( static_cast< scr_string_t >( 0 ) ))", (const char *)&queryFormat, "linkedTag != NULL_SCR_STRING") )
    __debugbreak();
  Entity = CG_GetEntity(localClientNum, entIndex);
  p_pose = &Entity->pose;
  if ( Entity && (Entity->flags & 1) != 0 && (ClientDObj = Com_GetClientDObj(Entity->nextState.number, localClientNum)) != NULL && CG_DObjGetWorldTagMatrix(p_pose, ClientDObj, linkedTag, (tmat33_t<vec3_t> *)&outTagMat, &outTagMat.m[3]) && CG_DObjGetWorldTagMatrix(p_pose, ClientDObj, scr_const.tag_camera, (tmat33_t<vec3_t> *)&v16, &v16.m[3]) )
  {
    MatrixInverseOrthogonal43(&v16, &out);
    MatrixMultiply43(&outTagMat, &out, &in1);
    RefdefView_GetOrg(&r_refdef->view, &outOrg);
    __asm { vmovss  xmm3, cs:__real@3f800000; scale }
    MatrixSet43(&in2, &outOrg, &r_refdef->view.axis, *(float *)&_XMM3);
    MatrixMultiply43(&in1, &in2, outAxis);
    memset(&outOrg, 0, sizeof(outOrg));
  }
  else
  {
    __asm { vmovss  xmm3, cs:__real@3f800000; scale }
    MatrixSet43(outAxis, &vec3_origin, &identityMatrix33, *(float *)&_XMM3);
  }
}

/*
==============
CgViewSystemSP::CalcRadialMotionBlur
==============
*/
void CgViewSystemSP::CalcRadialMotionBlur(CgViewSystemSP *this)
{
  CG_View_CalcWeaponFireMotionBlurInternal((const LocalClientNum_t)this->m_localClientNum);
  CG_View_CalcRadialMotionBlurInternal((const LocalClientNum_t)this->m_localClientNum);
}

/*
==============
CgViewSystemSP::SetViewValues
==============
*/
void CgViewSystemSP::SetViewValues(CgViewSystemSP *this)
{
  Sys_ProfBeginNamedEvent(0xFFFF6347, "view values");
  CG_ViewSP_CalcViewValues((const LocalClientNum_t)this->m_localClientNum);
  CgViewSystem::SetViewValues(this);
  Sys_ProfEndNamedEvent();
}

/*
==============
CgViewSystemSP::UpdateFullFrameFX
==============
*/

void __fastcall CgViewSystemSP::UpdateFullFrameFX(CgViewSystemSP *this, __int64 a2, __int64 a3, double _XMM3_8)
{
  float v6; 

  __asm
  {
    vxorps  xmm3, xmm3, xmm3; multiplayerAdsStart
    vmovss  [rsp+38h+var_18], xmm3
  }
  CG_View_UpdateSceneDepthOfField((const LocalClientNum_t)this->m_localClientNum, 0, 0, *(float *)&_XMM3, v6);
  CG_View_UpdateSceneLensProfile((const LocalClientNum_t)this->m_localClientNum);
  this->CalcRadialMotionBlur(this);
  CG_View_UpdateWaterSheetingFX((const LocalClientNum_t)this->m_localClientNum);
  CG_View_CalcVignette((const LocalClientNum_t)this->m_localClientNum);
  CG_View_UpdateShellShock((const LocalClientNum_t)this->m_localClientNum);
}


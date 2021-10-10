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
  const dvar_t *v2; 
  LocalClientNum_t OnlyLocalClientNum; 
  cg_t *LocalClientGlobals; 
  float v5; 
  float v6; 
  float v9; 

  v2 = DVARINT_cl_freemove;
  if ( !DVARINT_cl_freemove && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_freemove") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  if ( v2->current.integer )
  {
    OnlyLocalClientNum = CL_GetOnlyLocalClientNum();
    LocalClientGlobals = CG_GetLocalClientGlobals(OnlyLocalClientNum);
    v5 = angles->v[1];
    v6 = angles->v[2];
    LocalClientGlobals->predictedPlayerState.delta_angles.v[0] = (float)(angles->v[0] - LocalClientGlobals->refdefViewAngles.v[0]) + LocalClientGlobals->predictedPlayerState.delta_angles.v[0];
    LocalClientGlobals->predictedPlayerState.delta_angles.v[1] = (float)(v5 - LocalClientGlobals->refdefViewAngles.v[1]) + LocalClientGlobals->predictedPlayerState.delta_angles.v[1];
    LocalClientGlobals->predictedPlayerState.delta_angles.v[2] = (float)(v6 - LocalClientGlobals->refdefViewAngles.v[2]) + LocalClientGlobals->predictedPlayerState.delta_angles.v[2];
    _XMM9 = 0i64;
    __asm { vroundss xmm2, xmm9, xmm1, 1 }
    v9 = _mm_cvtepi32_ps((__m128i)(unsigned __int16)(int)*(float *)&_XMM2).m128_f32[0];
    __asm { vroundss xmm2, xmm9, xmm1, 1 }
    LocalClientGlobals->predictedPlayerState.delta_angles.v[0] = (float)((float)(v9 * 0.000015258789) - *(float *)&_XMM2) * 360.0;
    __asm
    {
      vroundss xmm0, xmm9, xmm3, 1
      vroundss xmm3, xmm9, xmm2, 1
    }
    LocalClientGlobals->predictedPlayerState.delta_angles.v[1] = (float)((float)(_mm_cvtepi32_ps((__m128i)(unsigned __int16)(int)*(float *)&_XMM0).m128_f32[0] * 0.000015258789) - *(float *)&_XMM3) * 360.0;
    __asm
    {
      vroundss xmm0, xmm9, xmm3, 1
      vroundss xmm3, xmm9, xmm2, 1
    }
    LocalClientGlobals->predictedPlayerState.delta_angles.v[2] = (float)((float)(_mm_cvtepi32_ps((__m128i)(unsigned __int16)(int)*(float *)&_XMM0).m128_f32[0] * 0.000015258789) - *(float *)&_XMM3) * 360.0;
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
  __int64 v5; 
  unsigned __int64 v9; 
  cg_t *LocalClientGlobals; 
  int time; 
  BgAnimStatic *v12; 
  cg_t *v13; 
  double TimeScale; 
  float v15; 
  unsigned __int8 v16; 
  cg_t *v17; 
  __int64 v18; 
  __int64 linkedEnt; 
  CgEntitySystem *EntitySystem; 
  int v21; 
  __int64 v22; 
  int v23; 
  __int64 v24; 
  __int64 v25; 
  __int64 v26; 
  __int64 v27; 
  vec3_t outOrg; 

  v5 = localClientNum;
  Profile2_UpdateEntry(27);
  v9 = (unsigned __int64)&dword_14FDE803C & 3;
  if ( ((unsigned __int8)&dword_14FDE803C & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &dword_14FDE803C) )
    __debugbreak();
  _InterlockedIncrement(&dword_14FDE803C);
  CgStatic::SetActiveStatics((const LocalClientNum_t)v5);
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)v5);
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
    if ( !(_BYTE)CgStatic::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static.h", 110, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the client game statics for localClientNum %d but the ype is not known\n", "ms_allocatedType != GameModeType::NONE", v5) )
      __debugbreak();
    if ( (unsigned int)v5 >= LODWORD(CgStatic::ms_allocatedCount) )
    {
      *(float *)&v25 = CgStatic::ms_allocatedCount;
      LODWORD(v24) = v5;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static.h", 111, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v24, v25) )
        __debugbreak();
    }
    if ( !CgStatic::ms_cgameStaticsArray[v5] )
    {
      LODWORD(v25) = v5;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static.h", 112, ASSERT_TYPE_ASSERT, "(ms_cgameStaticsArray[localClientNum])", "%s\n\tTrying to access unallocated client game statics for localClientNum %d\n", "ms_cgameStaticsArray[localClientNum]", v25) )
        __debugbreak();
    }
    v12 = CgStatic::ms_cgameStaticsArray[v5]->GetAnimStatics(CgStatic::ms_cgameStaticsArray[v5]);
    if ( !v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_view_sp.cpp", 872, ASSERT_TYPE_ASSERT, "(bgameAnim)", (const char *)&queryFormat, "bgameAnim") )
      __debugbreak();
    v12->time = LocalClientGlobals->time;
    v12->frametime = LocalClientGlobals->frametime;
  }
  if ( LocalClientGlobals->frametime < 0 )
  {
    LODWORD(v25) = LocalClientGlobals->time;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_view_sp.cpp", 878, ASSERT_TYPE_ASSERT, "(cgameGlob->frametime >= 0)", "%s\n\tcgameGlob->time: %d, cgameGlob->oldTime: %d, cgameGlob->frametime: %d", "cgameGlob->frametime >= 0", v25, LocalClientGlobals->oldTime, LocalClientGlobals->frametime) )
      __debugbreak();
  }
  if ( LocalClientGlobals->frametime - LocalClientGlobals->animFrametime < 0 )
  {
    LODWORD(v27) = LocalClientGlobals->frametime;
    LODWORD(v26) = LocalClientGlobals->oldTime;
    LODWORD(v25) = LocalClientGlobals->time;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_view_sp.cpp", 879, ASSERT_TYPE_ASSERT, "(cgameGlob->frametime - cgameGlob->animFrametime >= 0)", "%s\n\tcgameGlob->time: %d, cgameGlob->oldTime: %d, cgameGlob->frametime: %d, cgameGlob->animFrametime: %d", "cgameGlob->frametime - cgameGlob->animFrametime >= 0", v25, v26, v27, LocalClientGlobals->animFrametime) )
      __debugbreak();
  }
  CG_PlayerState_RestorePredictedPlayerState((const LocalClientNum_t)v5);
  CG_PredictSP_SavePlayerState((LocalClientNum_t)v5);
  Sys_WaitWorkerCmdsOfType(WRKCMD_PHYSICS_STEP_WORLD_DETAIL);
  v13 = CG_GetLocalClientGlobals((const LocalClientNum_t)v5);
  RefdefView_GetOrg(&v13->refdef.view, &outOrg);
  TimeScale = Com_GetTimeScale();
  Cloth_Update_FrameFlip(v5, *(float *)&TimeScale * (float)((float)LocalClientGlobals->frametime * 0.001), &outOrg);
  CG_SnapshotSP_ProcessSnapshots((const LocalClientNum_t)v5);
  if ( !LocalClientGlobals->snap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_view_sp.cpp", 902, ASSERT_TYPE_ASSERT, "(cgameGlob->snap)", (const char *)&queryFormat, "cgameGlob->snap") )
    __debugbreak();
  if ( !LocalClientGlobals->nextSnap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_view_sp.cpp", 903, ASSERT_TYPE_ASSERT, "(cgameGlob->nextSnap)", (const char *)&queryFormat, "cgameGlob->nextSnap") )
    __debugbreak();
  if ( LocalClientGlobals->nextSnap->serverTime != G_MainSP_GetServerSnapTime() )
  {
    LODWORD(v27) = G_MainSP_GetServerSnapTime();
    LODWORD(v26) = LocalClientGlobals->nextSnap->serverTime;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_view_sp.cpp", 904, ASSERT_TYPE_ASSERT, "( cgameGlob->nextSnap->serverTime ) == ( G_MainSP_GetServerSnapTime() )", "%s == %s\n\t%i, %i", "cgameGlob->nextSnap->serverTime", "G_MainSP_GetServerSnapTime()", v26, v27) )
      __debugbreak();
  }
  if ( updateState == SET_SHAPE_KEY_A || updateState == NOP )
    R_ClearScene();
  CG_LaserClearUnused((const LocalClientNum_t)v5);
  FX_ClearEntImpactMarks((LocalClientNum_t)v5);
  FX_BeginMarks((LocalClientNum_t)v5, serverTime);
  v15 = cl_maxLocalClients;
  if ( (unsigned int)v5 >= LODWORD(cl_maxLocalClients) )
  {
    *(float *)&v25 = cl_maxLocalClients;
    LODWORD(v24) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_static.h", 352, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( (cl_maxLocalClients) )", "localClientNum doesn't index MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v24, v25) )
      __debugbreak();
    v15 = cl_maxLocalClients;
  }
  if ( v15 == 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_static.h", 336, ASSERT_TYPE_ASSERT, "(cl_maxLocalClients)", "%s\n\tMust be called after client allocation", "cl_maxLocalClients") )
    __debugbreak();
  if ( cls.m_localClientsActive.activeCount <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_static.h", 353, ASSERT_TYPE_ASSERT, "(GetGameLocalClientActiveCount() > 0)", "%s\n\tClient active data has not been setup", "GetGameLocalClientActiveCount() > 0") )
    __debugbreak();
  if ( cls.m_localClientsActive.firstActiveIndex == LOCAL_CLIENT_INVALID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_static.h", 354, ASSERT_TYPE_ASSERT, "(m_localClientsActive.firstActiveIndex != LOCAL_CLIENT_INVALID)", "%s\n\tClient active data has not been setup", "m_localClientsActive.firstActiveIndex != LOCAL_CLIENT_INVALID") )
    __debugbreak();
  if ( (_DWORD)v5 == cls.m_localClientsActive.firstActiveIndex )
    FX_MarksCacheWorldCells(g_worldDraw);
  CG_ClearHudGrenades(LocalClientGlobals);
  CG_PredictSP_SetupPlayerState((LocalClientNum_t)v5);
  LocalClientGlobals->movingPlatforms.m_contactEnt = 2047;
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_FAST_LAND|WEAPON_OFFHAND_END) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_view_sp.cpp", 833, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::VIEW_LINKED_ENTITIES ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::VIEW_LINKED_ENTITIES )") )
    __debugbreak();
  v16 = 0;
  v17 = CG_GetLocalClientGlobals((const LocalClientNum_t)v5);
  if ( v17->predictedPlayerState.numViewLinkedEnts > 0 )
  {
    do
    {
      v18 = v16;
      linkedEnt = v17->predictedPlayerState.viewLinkedEntityData[v18].linkedEnt;
      EntitySystem = CgEntitySystem::GetEntitySystem((const LocalClientNum_t)v5);
      if ( (unsigned int)linkedEnt >= 0x800 )
      {
        LODWORD(v25) = 2048;
        LODWORD(v24) = linkedEnt;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", v24, v25) )
          __debugbreak();
      }
      v21 = v17->predictedPlayerState.viewLinkedEntityData[v18].flags & 1;
      v22 = linkedEnt;
      if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_FAST_LAND|WEAPON_OFFHAND_END) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 687, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::VIEW_LINKED_ENTITIES ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::VIEW_LINKED_ENTITIES )") )
        __debugbreak();
      v23 = EntitySystem->m_entities[v22].flags | 0x4000;
      EntitySystem->m_entities[v22].flags = v23;
      if ( v21 )
        EntitySystem->m_entities[v22].flags = v23 | 0x8000;
      ++v16;
    }
    while ( v16 < v17->predictedPlayerState.numViewLinkedEnts );
    v9 = (unsigned __int64)&dword_14FDE803C & 3;
  }
  CG_ViewSP_SortClientLinkedEntities((const LocalClientNum_t)v5);
  CgStatic::ClearActiveStatics((const LocalClientNum_t)v5);
  if ( !LocalClientGlobals->nextSnap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_view_sp.cpp", 931, ASSERT_TYPE_ASSERT, "(cgameGlob->nextSnap != nullptr)", (const char *)&queryFormat, "cgameGlob->nextSnap != nullptr") )
    __debugbreak();
  ScriptableCl_BeginFrame((const LocalClientNum_t)v5, LocalClientGlobals->nextSnap->serverTime, 0);
  Profile2_UpdateEntry(27);
  if ( v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &dword_14FDE803C) )
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
  __int64 v1; 
  cg_t *LocalClientGlobals; 
  const dvar_t *v3; 
  double MenuBlurRadius; 
  float v5; 
  double ZNear; 
  CgHandler *Handler; 
  bool IsThirdPersonMode; 
  double Speed; 
  vec3_t *inOutAngles; 
  bool ShouldRunPrediction; 
  bool v12; 
  float v13; 
  cg_t *v14; 
  bool outIsThirdPerson; 
  int outIsRemoteEyes; 
  vec3_t outOrg; 
  __int64 v18; 
  vec3_t v19; 
  WorldUpReferenceFrame v20; 

  v18 = -2i64;
  v1 = localClientNum;
  outIsRemoteEyes = 0;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  v3 = DVARBOOL_cg_drawpaused;
  if ( !DVARBOOL_cg_drawpaused && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawpaused") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  if ( v3->current.enabled )
  {
    MenuBlurRadius = CL_Screen_GetMenuBlurRadius((LocalClientNum_t)v1);
    v5 = *(float *)&MenuBlurRadius;
  }
  else
  {
    v5 = 0.0;
  }
  ZNear = CG_View_GetZNear((const LocalClientNum_t)v1);
  Handler = CgHandler::getHandler((LocalClientNum_t)v1);
  if ( !CgWeaponMap::ms_instance[v1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
    __debugbreak();
  IsThirdPersonMode = BG_IsThirdPersonMode(CgWeaponMap::ms_instance[v1], &LocalClientGlobals->predictedPlayerState);
  outIsThirdPerson = BG_ShouldHandleThirdPersonVehicleCamera(&LocalClientGlobals->predictedPlayerState, Handler);
  CG_View_SetupRefDef((const LocalClientNum_t)v1, *(const float *)&ZNear, v5);
  if ( LocalClientGlobals->cubemapShot )
  {
    CG_View_CalcCubemapViewValues((const LocalClientNum_t)v1);
  }
  else
  {
    if ( !CL_Cameraman_Enabled() || CL_Cameraman_IsDemoActive() )
    {
      s_visionSetUpdateData_0.cvsData = &LocalClientGlobals->cvsData;
      s_visionSetUpdateData_0.time = LocalClientGlobals->refdef.time;
      Sys_AddWorkerCmd(WRKCMD_CG_VISIONSETUPDATE, &s_visionSetUpdateData_0);
    }
    CG_View_SetupViewport((const LocalClientNum_t)v1);
    CG_View_SetupAimAssist((const LocalClientNum_t)v1);
    if ( CL_Cameraman_Enabled() && !CL_Cameraman_IsDemoActive() )
      goto LABEL_17;
    CG_ViewMotion_Update((const LocalClientNum_t)v1);
    Speed = BG_GetSpeed(&LocalClientGlobals->predictedPlayerState, LocalClientGlobals->time, Handler);
    LocalClientGlobals->xyspeed = *(float *)&Speed;
    if ( CG_ViewSP_PausedClientFreeMove((LocalClientNum_t)v1) )
    {
      inOutAngles = &LocalClientGlobals->refdefViewAngles;
      CG_View_OffsetCrosshair((const LocalClientNum_t)v1, &LocalClientGlobals->refdefViewAngles);
    }
    else
    {
      CG_View_CalcViewOrigin((const LocalClientNum_t)v1);
      inOutAngles = &LocalClientGlobals->refdefViewAngles;
      if ( !CG_View_CalcVehicleCamera((const LocalClientNum_t)v1, &outIsRemoteEyes) )
      {
        BG_CalcLinkedViewValues(&LocalClientGlobals->predictedPlayerState, &LocalClientGlobals->refdefViewAngles);
        WorldUpReferenceFrame::WorldUpReferenceFrame(&v20, &LocalClientGlobals->predictedPlayerState, Handler);
        WorldUpReferenceFrame::ApplyReferenceFrameToAngles(&v20, &LocalClientGlobals->refdefViewAngles);
        if ( !Dvar_GetInt_Internal_DebugName(DVARINT_cl_freemove, "cl_freemove") )
        {
          RefdefView_GetOrg(&LocalClientGlobals->refdef.view, &outOrg);
          CG_CalcErrorDecay((const LocalClientNum_t)v1, &outOrg);
          RefdefView_SetOrg(&LocalClientGlobals->refdef.view, &outOrg);
        }
        CG_View_CalcTurretCamera((const LocalClientNum_t)v1, 1);
        CG_View_CalcRemoteEyes((LocalClientNum_t)v1, &outIsRemoteEyes);
        if ( !outIsRemoteEyes )
        {
          LocalClientGlobals->remoteMissileCamInitialized = 0;
          CG_View_CalcCameraTweaks((const LocalClientNum_t)v1);
          CG_View_TraceProfiling((const LocalClientNum_t)v1);
          RefdefView_GetOrg(&LocalClientGlobals->refdef.view, &outOrg);
          CG_View_AddViewHeight((const LocalClientNum_t)v1, &outOrg);
          RefdefView_SetOrg(&LocalClientGlobals->refdef.view, &outOrg);
          ShouldRunPrediction = CG_PredictSP_ShouldRunPrediction((const LocalClientNum_t)v1);
          CG_View_OffsetFirstPersonView((const LocalClientNum_t)v1, ShouldRunPrediction, &LocalClientGlobals->refdefViewAngles, &outOrg);
          RefdefView_SetOrg(&LocalClientGlobals->refdef.view, &outOrg);
          CG_View_OffsetCrosshair((const LocalClientNum_t)v1, &LocalClientGlobals->refdefViewAngles);
        }
        memset(&outOrg, 0, sizeof(outOrg));
      }
    }
    v12 = !outIsRemoteEyes && !IsThirdPersonMode && !outIsThirdPerson;
    CG_View_ApplySmoothing((const LocalClientNum_t)v1, v12, inOutAngles);
    if ( !LocalClientGlobals->IsClientGamePaused(LocalClientGlobals) )
      CG_View_UpdateWeaponMovement_Post(LocalClientGlobals);
    CG_View_CalcDrivingCamera((const LocalClientNum_t)v1);
    if ( !CG_ViewSP_PausedClientFreeMove((LocalClientNum_t)v1) )
      CG_ShakeCamera((LocalClientNum_t)v1);
    RefdefView_GetOrg(&LocalClientGlobals->refdef.view, &v19);
    outOrg = v19;
    v13 = v19.v[2];
    if ( !LocalClientGlobals->aimAssistEyeOrigin.initialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\anticheat\\security_obfuscation_integer.h", 186, ASSERT_TYPE_ASSERT, "(initialized)", (const char *)&queryFormat, "initialized") )
      __debugbreak();
    LocalClientGlobals->aimAssistEyeOrigin.secureInt32_3_aab += LocalClientGlobals->aimAssistEyeOrigin.secureInt32_3_set_aab;
    LocalClientGlobals->aimAssistEyeOrigin.data[0] = ((((_DWORD)LocalClientGlobals + 98316) ^ LocalClientGlobals->aimAssistEyeOrigin.secureInt32_3_aab) * ((((_DWORD)LocalClientGlobals + 98316) ^ LocalClientGlobals->aimAssistEyeOrigin.secureInt32_3_aab) + 2)) ^ LODWORD(outOrg.v[0]);
    LocalClientGlobals->aimAssistEyeOrigin.data[1] = ((((_DWORD)LocalClientGlobals + 98320) ^ LocalClientGlobals->aimAssistEyeOrigin.secureInt32_3_aab) * ((((_DWORD)LocalClientGlobals + 98320) ^ LocalClientGlobals->aimAssistEyeOrigin.secureInt32_3_aab) + 2)) ^ LODWORD(outOrg.v[1]);
    LocalClientGlobals->aimAssistEyeOrigin.data[2] = ((((_DWORD)LocalClientGlobals + 98324) ^ LocalClientGlobals->aimAssistEyeOrigin.secureInt32_3_aab) * ((((_DWORD)LocalClientGlobals + 98324) ^ LocalClientGlobals->aimAssistEyeOrigin.secureInt32_3_aab) + 2)) ^ LODWORD(v13);
    memset(&outOrg, 0, sizeof(outOrg));
    AnglesToAxis(inOutAngles, &LocalClientGlobals->refdef.view.axis);
    if ( !outIsRemoteEyes )
    {
      if ( !outIsThirdPerson )
      {
        s_shakeCmdData_0.localClientNum = v1;
        s_shakeCmdData_0.cameraData = &s_shakeData_0;
        Sys_AddWorkerCmd(WRKCMD_SHAKE_CALC, &s_shakeCmdData_0);
      }
      v14 = CG_GetLocalClientGlobals((const LocalClientNum_t)v1);
      if ( !v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_view_sp.cpp", 459, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
        __debugbreak();
      if ( (unsigned int)(v14->predictedPlayerState.pm_type - 2) > 1 && !CG_View_ApplyLinkCameraAnimation((const LocalClientNum_t)v1) )
        CG_View_CalcViewAnimation((const LocalClientNum_t)v1);
      CG_Camera_Vehicles_Update((LocalClientNum_t)v1, &outIsThirdPerson, &LocalClientGlobals->refdef.view);
      if ( !outIsThirdPerson )
      {
        Sys_WaitWorkerCmdsOfType(WRKCMD_SHAKE_CALC);
        RefdefView_GetOrg(&LocalClientGlobals->refdef.view, &outOrg);
        CG_Shake_ApplyHandheldCamera((const LocalClientNum_t)v1, &s_shakeData_0.handheldTranslation, &s_shakeData_0.impulseTranslation, &s_shakeData_0.handheldAngles, &s_shakeData_0.impulseAngles, &outOrg, inOutAngles);
        RefdefView_SetOrg(&LocalClientGlobals->refdef.view, &outOrg);
        memset(&outOrg, 0, sizeof(outOrg));
      }
      AnglesToAxis(inOutAngles, &LocalClientGlobals->refdef.view.axis);
      CG_PerturbCamera(LocalClientGlobals);
    }
    Sys_WaitWorkerCmdsOnlyOfType(WRKCMD_CG_VISIONSETUPDATE);
    CG_View_FinalizeViewValues((const LocalClientNum_t)v1);
    if ( CL_Cameraman_Enabled() && CL_Cameraman_IsDemoActive() )
    {
LABEL_17:
      CL_Cameraman_CalcViewValues((LocalClientNum_t)v1, 0);
      CG_View_CalcFov((const LocalClientNum_t)v1);
    }
    else
    {
      CG_DrawDebug_Player_ViewValues((LocalClientNum_t)v1);
      AdvancedSwayState::DebugDraw(&LocalClientGlobals->vmMotionState, (const LocalClientNum_t)v1);
    }
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
  const dvar_t *v3; 
  const dvar_t *v4; 
  const dvar_t *v5; 
  const dvar_t *v6; 
  const dvar_t *v7; 
  signed int v8; 
  unsigned __int8 *p_flags; 
  __int64 v10; 
  CgEntitySystem *EntitySystem; 
  centity_t *v12; 
  unsigned int number; 
  unsigned int v14; 
  unsigned int v15; 
  const DObj *v16; 
  void (__fastcall *v17)(const vec3_t *, vec4_t *); 
  vec3_t *p_outOrigin; 
  ViewJostleState *outJostleState; 
  __int64 v20; 
  vec3_t outOrigin; 
  __int64 v22; 
  vec3_t outAngles; 
  int v24[4]; 
  CgViewSystem::JostleConfig config; 
  tmat43_t<vec3_t> out; 
  tmat43_t<vec3_t> world; 

  v22 = -2i64;
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_FAST_LAND|WEAPON_OFFHAND_END) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_view_sp.cpp", 1013, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::VIEW_LINKED_ENTITIES ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::VIEW_LINKED_ENTITIES )") )
    __debugbreak();
  CG_ViewSP_SortClientLinkedEntities(localClientNum);
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  config.respectBlendOut = 1;
  v3 = DVARFLT_cg_helmetViewSwayRate;
  if ( !DVARFLT_cg_helmetViewSwayRate && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_helmetViewSwayRate") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  LODWORD(config.viewSwayScale) = v3->current.integer;
  v4 = DVARFLT_cg_helmetAnimSwayRate;
  if ( !DVARFLT_cg_helmetAnimSwayRate && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_helmetAnimSwayRate") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  LODWORD(config.animSwayScale) = v4->current.integer;
  v5 = DVARFLT_cg_helmetMaxLinearVelocityInfluence;
  if ( !DVARFLT_cg_helmetMaxLinearVelocityInfluence && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_helmetMaxLinearVelocityInfluence") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v5);
  LODWORD(config.maxLinearVelocityInfluence) = v5->current.integer;
  v6 = DVARVEC3_cg_helmetLinearVelocityToAngleRate;
  if ( !DVARVEC3_cg_helmetLinearVelocityToAngleRate && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 734, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_helmetLinearVelocityToAngleRate") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  *(_QWORD *)config.linearVelocityToAngleRate.v = v6->current.integer64;
  config.linearVelocityToAngleRate.v[2] = v6->current.vector.v[2];
  v7 = DVARVEC3_cg_helmetMaxOffsetFromView;
  if ( !DVARVEC3_cg_helmetMaxOffsetFromView && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 734, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_helmetMaxOffsetFromView") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v7);
  config.maxOffset = *(vec3_t *)&v7->current.string;
  AxisCopy(&LocalClientGlobals->refdef.view.axis, (tmat33_t<vec3_t> *)&out);
  RefdefView_GetOrg(&LocalClientGlobals->refdef.view, &out.m[3]);
  v8 = 0;
  if ( LocalClientGlobals->predictedPlayerState.numViewLinkedEnts > 0 )
  {
    p_flags = &LocalClientGlobals->predictedPlayerState.viewLinkedEntityData[0].flags;
    do
    {
      v10 = *((unsigned __int16 *)p_flags - 1);
      EntitySystem = CgEntitySystem::GetEntitySystem(localClientNum);
      if ( (unsigned int)v10 >= 0x800 )
      {
        LODWORD(v20) = 2048;
        LODWORD(outJostleState) = v10;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", outJostleState, v20) )
          __debugbreak();
      }
      v12 = &EntitySystem->m_entities[v10];
      if ( !CG_ViewSP_ShouldDrawViewLinkedEntity(localClientNum, v12) )
        goto LABEL_62;
      number = v12->nextState.number;
      if ( number > 0x9E4 )
      {
        LODWORD(v20) = v12->nextState.number;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 55, ASSERT_TYPE_ASSERT, "( ( handle >= 0 && handle < ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) ) )", "%s\n\t( handle ) = %i", "( handle >= 0 && handle < ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) )", v20) )
          __debugbreak();
      }
      if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
      {
        LODWORD(v20) = 2;
        LODWORD(outJostleState) = localClientNum;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 58, ASSERT_TYPE_ASSERT, "(unsigned)( localClientIndex ) < (unsigned)( (2) )", "localClientIndex doesn't index MAX_DOBJ_CLIENTS\n\t%i not in [0, %i)", outJostleState, v20) )
          __debugbreak();
      }
      v14 = 2533 * localClientNum + number;
      if ( v14 >= 0x13CA )
      {
        LODWORD(v20) = v14;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 62, ASSERT_TYPE_ASSERT, "( ( (unsigned)handle < ( sizeof( *array_counter( clientObjMap ) ) + 0 ) ) )", "%s\n\t( handle ) = %i", "( (unsigned)handle < ( sizeof( *array_counter( clientObjMap ) ) + 0 ) )", v20) )
          __debugbreak();
      }
      v15 = clientObjMap[v14];
      if ( v15 )
      {
        if ( v15 >= (unsigned int)s_objCount )
        {
          LODWORD(v20) = v15;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 64, ASSERT_TYPE_ASSERT, "( ( !objIndex || ( (unsigned)objIndex < s_objCount ) ) )", "%s\n\t( objIndex ) = %i", "( !objIndex || ( (unsigned)objIndex < s_objCount ) )", v20) )
            __debugbreak();
        }
        v16 = (const DObj *)s_objBuf[v15];
        if ( v16 )
          goto LABEL_43;
      }
      else
      {
        v16 = NULL;
      }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_view_sp.cpp", 1043, ASSERT_TYPE_ASSERT, "(dobj)", (const char *)&queryFormat, "dobj") )
        __debugbreak();
LABEL_43:
      DObjLock(v16);
      DObjSkelReset(v16);
      DObjUnlock(v16);
      CG_Entity_UpdatePreviousPosition(v12);
      MatrixMultiply43(&LocalClientGlobals->linkedToPlayerView[v8].viewToLinkedTagTransform, &out, &world);
      BG_UpdateViewLinkedModelTransform((const ViewLinkedData *)(p_flags - 30), &world, &outOrigin, &outAngles);
      if ( ((LODWORD(outOrigin.v[0]) & 0x7F800000) == 2139095040 || (LODWORD(outOrigin.v[1]) & 0x7F800000) == 2139095040 || (LODWORD(outOrigin.v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 411, ASSERT_TYPE_SANITY, "( !IS_NAN( ( inOrigin )[0] ) && !IS_NAN( ( inOrigin )[1] ) && !IS_NAN( ( inOrigin )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( inOrigin )[0] ) && !IS_NAN( ( inOrigin )[1] ) && !IS_NAN( ( inOrigin )[2] )") )
        __debugbreak();
      if ( !v12->pose.origin.Set_origin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 413, ASSERT_TYPE_ASSERT, "(pose->origin.Set_origin)", (const char *)&queryFormat, "pose->origin.Set_origin") )
        __debugbreak();
      if ( v12->pose.isEntityPose )
      {
        CG_Pose_ValidateSetEntityPoseOrigin(&v12->pose);
        v12->pose.entOriginSet = 1;
        v12->pose.hasStaleEntityPose = 1;
      }
      v17 = ObfuscateSetFunctionPointer_origin(v12->pose.origin.Set_origin, &v12->pose);
      if ( v12->pose.isPosePrecise )
      {
        v24[0] = (int)(float)(4096.0 * outOrigin.v[0]);
        v24[1] = (int)(float)(4096.0 * outOrigin.v[1]);
        v24[2] = (int)(float)(4096.0 * outOrigin.v[2]);
        p_outOrigin = (vec3_t *)v24;
      }
      else
      {
        p_outOrigin = &outOrigin;
      }
      v17(p_outOrigin, &v12->pose.origin.origin.origin);
      v12->pose.actualOrigin = outOrigin;
      if ( (*p_flags & 0x10) != 0 )
      {
        if ( (unsigned int)v8 >= 4 )
        {
          LODWORD(v20) = 4;
          LODWORD(outJostleState) = v8;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_view_sp.cpp", 1067, ASSERT_TYPE_ASSERT, "(unsigned)( linkIndex ) < (unsigned)( 4 )", "linkIndex doesn't index MAX_VIEW_LINKED_ENTITIES\n\t%i not in [0, %i)", outJostleState, v20) )
            __debugbreak();
        }
        CG_View_CalculateViewJostle(LocalClientGlobals, &config, &world, &outAngles, &outAngles, &LocalClientGlobals->linkedToPlayerView[v8]);
      }
      v12->pose.angles = outAngles;
      memset(&outOrigin, 0, sizeof(outOrigin));
LABEL_62:
      ++v8;
      p_flags += 32;
    }
    while ( v8 < LocalClientGlobals->predictedPlayerState.numViewLinkedEnts );
  }
}

/*
==============
CG_ViewSP_DoFollowEnt
==============
*/
void CG_ViewSP_DoFollowEnt(const LocalClientNum_t localClientNum)
{
  cg_t *LocalClientGlobals; 
  int prevFollowEnt; 
  const dvar_t *v3; 
  const dvar_t *v4; 
  const dvar_t *v5; 
  centity_t *Entity; 
  const cpose_t *p_pose; 
  void (__fastcall *FunctionPointer_origin)(const vec4_t *, vec3_t *); 
  __int128 v12; 
  float v22; 
  float v23; 
  float v24; 
  const dvar_t *v25; 
  const dvar_t *v26; 
  int v27[4]; 
  __int64 v28; 

  v28 = -2i64;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_view_sp.cpp", 336, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  prevFollowEnt = LocalClientGlobals->prevFollowEnt;
  LocalClientGlobals->prevFollowEnt = -1;
  v3 = DVARINT_cl_freemove;
  if ( !DVARINT_cl_freemove && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_freemove") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  if ( v3->current.integer )
  {
    v4 = DVARINT_cg_followEnt;
    if ( !DVARINT_cg_followEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_followEnt") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v4);
    if ( v4->current.integer >= 0 )
    {
      v5 = DVARINT_cg_followEnt;
      if ( !DVARINT_cg_followEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_followEnt") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v5);
      Entity = CG_GetEntity((const LocalClientNum_t)LocalClientGlobals->localClientNum, v5->current.integer);
      p_pose = &Entity->pose;
      if ( (Entity->flags & 1) != 0 )
      {
        if ( !Entity->pose.origin.Get_origin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 380, ASSERT_TYPE_ASSERT, "(pose->origin.Get_origin)", (const char *)&queryFormat, "pose->origin.Get_origin") )
          __debugbreak();
        FunctionPointer_origin = ObfuscateGetFunctionPointer_origin(p_pose->origin.Get_origin, p_pose);
        FunctionPointer_origin(&p_pose->origin.origin.origin, (vec3_t *)v27);
        if ( p_pose->isPosePrecise )
        {
          _XMM0 = (unsigned int)v27[0];
          __asm { vcvtdq2pd xmm0, xmm0 }
          *((_QWORD *)&v12 + 1) = *((_QWORD *)&_XMM0 + 1);
          *(double *)&v12 = *(double *)&_XMM0 * 0.000244140625;
          _XMM0 = v12;
          __asm { vcvtsd2ss xmm3, xmm0, xmm0 }
          v27[0] = _XMM3;
          _XMM1 = (unsigned int)v27[1];
          __asm { vcvtdq2pd xmm1, xmm1 }
          *((_QWORD *)&v12 + 1) = *((_QWORD *)&_XMM1 + 1);
          *(double *)&v12 = *(double *)&_XMM1 * 0.000244140625;
          _XMM0 = v12;
          __asm { vcvtsd2ss xmm4, xmm0, xmm0 }
          v27[1] = _XMM4;
          _XMM1 = (unsigned int)v27[2];
          __asm { vcvtdq2pd xmm1, xmm1 }
          *((_QWORD *)&v12 + 1) = *((_QWORD *)&_XMM1 + 1);
          *(double *)&v12 = *(double *)&_XMM1 * 0.000244140625;
          _XMM0 = v12;
          __asm { vcvtsd2ss xmm5, xmm0, xmm0 }
          v27[2] = _XMM5;
        }
        else
        {
          LODWORD(_XMM5) = v27[2];
          LODWORD(_XMM4) = v27[1];
          LODWORD(_XMM3) = v27[0];
        }
        v22 = *(float *)&_XMM3 - LocalClientGlobals->prevFollowEntOrg.v[0];
        v23 = *(float *)&_XMM4 - LocalClientGlobals->prevFollowEntOrg.v[1];
        v24 = *(float *)&_XMM5 - LocalClientGlobals->prevFollowEntOrg.v[2];
        LocalClientGlobals->prevFollowEntOrg.v[0] = *(float *)&_XMM3;
        LocalClientGlobals->prevFollowEntOrg.v[1] = *(float *)&v27[1];
        LocalClientGlobals->prevFollowEntOrg.v[2] = *(float *)&v27[2];
        v25 = DVARINT_cg_followEnt;
        if ( !DVARINT_cg_followEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_followEnt") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v25);
        LocalClientGlobals->prevFollowEnt = v25->current.integer;
        v26 = DVARINT_cg_followEnt;
        if ( !DVARINT_cg_followEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_followEnt") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v26);
        if ( prevFollowEnt == v26->current.integer )
        {
          LocalClientGlobals->predictedPlayerState.origin.v[0] = v22 + LocalClientGlobals->predictedPlayerState.origin.v[0];
          LocalClientGlobals->predictedPlayerState.origin.v[1] = v23 + LocalClientGlobals->predictedPlayerState.origin.v[1];
          LocalClientGlobals->predictedPlayerState.origin.v[2] = v24 + LocalClientGlobals->predictedPlayerState.origin.v[2];
        }
        memset(v27, 0, 0xCui64);
      }
      else
      {
        Dvar_SetInt_Internal(DVARINT_cg_followEnt, -1);
      }
    }
  }
}

/*
==============
CG_ViewSP_DrawActiveFrame
==============
*/
void CG_ViewSP_DrawActiveFrame(const LocalClientNum_t localClientNum, int isFirstClientView, Scr_UpdateFrame_State updateState, CubemapShot cubemapShot, int cubemapSize, unsigned int drawType)
{
  __int64 v8; 
  CgClientSideEffectsSystem *v9; 
  CgVehicleSystem *v10; 
  cg_t *LocalClientGlobals; 
  cg_t *v12; 
  const dvar_t *v13; 
  int frametime; 
  int time; 
  DObj *v16; 
  DObj *ClientDObj; 
  const snapshot_t *snap; 
  const snapshot_t *nextSnap; 
  unsigned int v20; 
  cg_t *v21; 
  cg_t *v22; 
  int shellshockIndex; 
  int shellshockDuration; 
  int shellshockTime; 
  const shellshock_parms_t *ShellshockParms; 
  int v27; 
  int v28; 
  CgEntitySystem *EntitySystem; 
  cg_t *v30; 
  CgAntiLag *Instance; 
  CgBallistics *System; 
  double TimeScale; 
  double v34; 
  cg_t *v35; 
  Scr_UpdateFrame_State v36; 
  const Material **serverMaterialsTouch; 
  cg_t *v38; 
  ClConfigStrings *ClConfigStrings; 
  const char *v40; 
  const char *v41; 
  XModel *v42; 
  int v43; 
  LocalClientNum_t OnlyLocalClientNum; 
  cg_t *v45; 
  unsigned __int8 i; 
  playerState_s *v47; 
  int v48; 
  Physics_WorldId v49; 
  double v50; 
  cg_t *v51; 
  const dvar_t *v52; 
  int IsPlayerZeroG; 
  int thermalVisionActive; 
  double FarPlaneDist; 
  BOOL v56; 
  cg_t *v57; 
  const vec3_t *FocusOrigin; 
  const vec3_t *ClientVelocity; 
  CgHandler *Handler; 
  __int64 v61; 
  __int64 isZeroG; 
  __int64 isZeroGa; 
  __int64 inPip; 
  __int64 inPipa; 
  __int64 streamRender; 
  __int64 v67; 
  vec3_t origin; 
  float outCosFovLimit; 
  float outZoomFactor; 
  int v73; 
  int data[2]; 
  vec3_t v75; 
  vec3_t viewOrg; 
  vec3_t eyeOrg; 
  CgWeaponSystem *v78; 
  CgViewSystem *v79; 
  unsigned int v80; 
  unsigned int v81; 
  CgBallistics *v82; 
  CgSoundSystem *v83; 
  playerState_s *p_predictedPlayerState; 
  unsigned __int64 v85; 
  unsigned int v86; 
  unsigned int v87; 
  unsigned int v88; 
  unsigned int v89; 
  vec3_t outOrg; 
  unsigned int *v91; 
  unsigned int *v92; 
  __int64 v93; 
  secure_uint32_3_t *p_aimAssistEyeOrigin; 
  unsigned int *v95; 
  unsigned int *v96; 
  secure_uint32_3_t *p_aimAssistViewOrigin; 
  vec3_t clientPos; 
  vec4_t out; 
  WorldUpReferenceFrame v100; 

  v93 = -2i64;
  v8 = localClientNum;
  Profile2_UpdateEntry(30);
  v85 = (unsigned __int64)&dword_14FDE8048 & 3;
  if ( ((unsigned __int8)&dword_14FDE8048 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &dword_14FDE8048) )
    __debugbreak();
  _InterlockedIncrement(&dword_14FDE8048);
  if ( (_BYTE)CgViewSystem::ms_allocatedType != HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.h", 278, ASSERT_TYPE_ASSERT, "(ms_allocatedType == SubSystem::VIEW_SYSTEM_TYPE)", "%s\n\tTrying to access the view system for localClientNum %d but the view system type does not match-> System Type:%d  Allocated Type:%d\n", "ms_allocatedType == SubSystem::VIEW_SYSTEM_TYPE", v8, 1, (unsigned __int8)CgViewSystem::ms_allocatedType) )
    __debugbreak();
  if ( (unsigned int)v8 >= CgViewSystem::ms_allocatedCount )
  {
    LODWORD(inPip) = CgViewSystem::ms_allocatedCount;
    LODWORD(isZeroG) = v8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.h", 279, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", isZeroG, inPip) )
      __debugbreak();
  }
  if ( !CgViewSystem::ms_viewSystemArray[v8] )
  {
    LODWORD(inPip) = v8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_view.h", 280, ASSERT_TYPE_ASSERT, "(ms_viewSystemArray[localClientNum])", "%s\n\tTrying to access unallocated view system for localClientNum %d\n", "ms_viewSystemArray[localClientNum]", inPip) )
      __debugbreak();
  }
  v79 = CgViewSystem::ms_viewSystemArray[v8];
  if ( !(_BYTE)CgSoundSystem::ms_allocatedType )
  {
    LODWORD(inPip) = v8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_sound.h", 179, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the sound system for localClientNum %d but the sound system type is not known\n", "ms_allocatedType != GameModeType::NONE", inPip) )
      __debugbreak();
  }
  if ( (unsigned int)v8 >= CgSoundSystem::ms_allocatedCount )
  {
    LODWORD(inPip) = CgSoundSystem::ms_allocatedCount;
    LODWORD(isZeroG) = v8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_sound.h", 180, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", isZeroG, inPip) )
      __debugbreak();
  }
  if ( !CgSoundSystem::ms_soundSystemArray[v8] )
  {
    LODWORD(inPip) = v8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_sound.h", 181, ASSERT_TYPE_ASSERT, "(ms_soundSystemArray[localClientNum])", "%s\n\tTrying to access unallocated sound system for localClientNum %d\n", "ms_soundSystemArray[localClientNum]", inPip) )
      __debugbreak();
  }
  v83 = CgSoundSystem::ms_soundSystemArray[v8];
  if ( CgWeaponSystem::ms_allocatedType == WEAPONS_TYPE_NONE )
  {
    LODWORD(inPip) = v8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapons.h", 530, ASSERT_TYPE_ASSERT, "(ms_allocatedType != CgWeaponsType::WEAPONS_TYPE_NONE)", "%s\n\tTrying to access the weapon system for localClientNum %d but the weapon system type is not known\n", "ms_allocatedType != CgWeaponsType::WEAPONS_TYPE_NONE", inPip) )
      __debugbreak();
  }
  if ( (unsigned int)v8 >= CgWeaponSystem::ms_allocatedCount )
  {
    LODWORD(inPip) = CgWeaponSystem::ms_allocatedCount;
    LODWORD(isZeroG) = v8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapons.h", 531, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", isZeroG, inPip) )
      __debugbreak();
  }
  if ( !CgWeaponSystem::ms_weaponSystemArray[v8] )
  {
    LODWORD(inPip) = v8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapons.h", 532, ASSERT_TYPE_ASSERT, "(ms_weaponSystemArray[localClientNum])", "%s\n\tTrying to access unallocated weapon system for localClientNum %d\n", "ms_weaponSystemArray[localClientNum]", inPip) )
      __debugbreak();
  }
  v78 = CgWeaponSystem::ms_weaponSystemArray[v8];
  if ( (_BYTE)CgClientSideEffectsSystem::ms_allocatedType != HALF )
  {
    LODWORD(v67) = (unsigned __int8)CgClientSideEffectsSystem::ms_allocatedType;
    LODWORD(streamRender) = 1;
    LODWORD(inPip) = v8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_side_effects.h", 321, ASSERT_TYPE_ASSERT, "(ms_allocatedType == SubSystem::CSE_SYSTEM_TYPE)", "%s\n\tTrying to access the client-side effects system for localClientNum %d but the client-side effects system type does not match-> System Type:%d  Allocated Type:%d\n", "ms_allocatedType == SubSystem::CSE_SYSTEM_TYPE", inPip, streamRender, v67) )
      __debugbreak();
  }
  if ( (unsigned int)v8 >= CgClientSideEffectsSystem::ms_allocatedCount )
  {
    LODWORD(inPip) = CgClientSideEffectsSystem::ms_allocatedCount;
    LODWORD(isZeroG) = v8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_side_effects.h", 322, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", isZeroG, inPip) )
      __debugbreak();
  }
  if ( !CgClientSideEffectsSystem::ms_cseSystemArray[v8] )
  {
    LODWORD(inPip) = v8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_side_effects.h", 323, ASSERT_TYPE_ASSERT, "(ms_cseSystemArray[localClientNum])", "%s\n\tTrying to access unallocated client-side effects system for localClientNum %d\n", "ms_cseSystemArray[localClientNum]", inPip) )
      __debugbreak();
  }
  v9 = CgClientSideEffectsSystem::ms_cseSystemArray[v8];
  if ( !(_BYTE)CgVehicleSystem::ms_allocatedType )
  {
    LODWORD(inPip) = v8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.h", 406, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the vehicle system for localClientNum %d but the vehicle system type is not known\n", "ms_allocatedType != GameModeType::NONE", inPip) )
      __debugbreak();
  }
  if ( (unsigned int)v8 >= CgVehicleSystem::ms_allocatedCount )
  {
    LODWORD(inPip) = CgVehicleSystem::ms_allocatedCount;
    LODWORD(isZeroG) = v8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.h", 407, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", isZeroG, inPip) )
      __debugbreak();
  }
  if ( !CgVehicleSystem::ms_vehicleSystemArray[v8] )
  {
    LODWORD(inPip) = v8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.h", 408, ASSERT_TYPE_ASSERT, "(ms_vehicleSystemArray[localClientNum])", "%s\n\tTrying to access unallocated vehicle system for localClientNum %d\n", "ms_vehicleSystemArray[localClientNum]", inPip) )
      __debugbreak();
  }
  v10 = CgVehicleSystem::ms_vehicleSystemArray[v8];
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)v8);
  LocalClientGlobals->cubemapShot = cubemapShot;
  LocalClientGlobals->cubemapSize = cubemapSize;
  memset_0(&LocalClientGlobals->viewModelQueuedRenderInfo, 0, 0xD0ui64);
  LocalClientGlobals->viewModelQueuedRenderInfo.m_enabled = 0;
  v12 = CG_GetLocalClientGlobals((const LocalClientNum_t)v8);
  p_predictedPlayerState = &v12->predictedPlayerState;
  if ( v12 == (cg_t *)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_view_sp.cpp", 1687, ASSERT_TYPE_ASSERT, "(predictedPlayerState)", (const char *)&queryFormat, "predictedPlayerState") )
    __debugbreak();
  CG_Radar_ClearJamming((const LocalClientNum_t)v8);
  CgStatic::SetActiveStatics((const LocalClientNum_t)v8);
  LODWORD(LocalClientGlobals->refdef.forceFoVx) = cl_forceFoVx->current.integer;
  LODWORD(LocalClientGlobals->refdef.forceFoVy) = cl_forceFoVy->current.integer;
  LocalClientGlobals->refdef.sceneAspect = cls.vidConfig.sceneAspectRatio;
  LocalClientGlobals->refdef.forceFoVEnabled = cl_forceFoVEnabled->current.color[0];
  v13 = DVARINT_cl_freemove;
  if ( !DVARINT_cl_freemove && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_freemove") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v13);
  if ( !v13->current.integer )
    RefdefView_SetOrg(&LocalClientGlobals->refdef.view, &LocalClientGlobals->refdef.viewOffset);
  Sys_ProfBeginNamedEvent(0xFFFF6347, "clear scene view");
  g_activeRefDef = &LocalClientGlobals->refdef;
  LocalClientGlobals->refdef.deferredScreenshotIndex = R_Screenshot_ConsumeDeferredRequest();
  R_ClearSceneView((LocalClientNum_t)v8);
  CG_View_InitXCamView(LocalClientGlobals);
  Sys_ProfEndNamedEvent();
  CL_Main_ResetSkeletonCache();
  if ( isFirstClientView )
    XAnimProceduralBonesAllocator_BeginClientFrame();
  Ragdoll_PreUpdate((LocalClientNum_t)v8);
  Ragdoll_UpdateRestFx((LocalClientNum_t)v8);
  CG_DrawDebug_Player((LocalClientNum_t)v8);
  ScrPlace_BeginDisplayView();
  if ( CL_Cameraman_Enabled() )
    CL_Cameraman_CalcViewValues((LocalClientNum_t)v8, 1);
  frametime = LocalClientGlobals->frametime;
  time = LocalClientGlobals->time;
  if ( LocalClientGlobals == (cg_t *)-26912i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_view_sp.cpp", 941, ASSERT_TYPE_ASSERT, "(refDef)", (const char *)&queryFormat, "refDef") )
    __debugbreak();
  FX_BeginUpdateView((LocalClientNum_t)v8);
  LocalClientGlobals->refdef.time = time;
  LocalClientGlobals->refdef.frameTime = frametime;
  CG_VisionSetsUpdate_PrePlayerStatePrediction((const LocalClientNum_t)v8);
  R_SetLodOrigin(&LocalClientGlobals->refdef, 1.0);
  if ( isFirstClientView && (updateState == SET_SHAPE_KEY_A || updateState == NOP) )
  {
    Sys_ProfBeginNamedEvent(0xFFFF6347, "update ent info");
    Profile_Begin(3);
    Profile_BeginCSV(2);
    v16 = (DObj *)CG_GetLocalClientGlobals((const LocalClientNum_t)v8);
    if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) )
    {
      ClientDObj = Com_GetClientDObj(v16[76].skel.partBits.skel.array[0], (LocalClientNum_t)v8);
      if ( ClientDObj )
        CG_EntitySP_DObjUpdateInfo((const cg_t *)&v73, v16, (bool)ClientDObj);
    }
    Profile_EndCSV(2);
    Profile_EndInternal(NULL);
    Sys_ProfEndNamedEvent();
  }
  snap = LocalClientGlobals->snap;
  nextSnap = LocalClientGlobals->nextSnap;
  v20 = BG_Omnvar_PerGameCount();
  CG_Omnvar_UpdateInterpolation((const LocalClientNum_t)v8, v20, (const OmnvarData *const)((char *)&snap[690].__vftable + 4), (const OmnvarData *const)((char *)&nextSnap[690].__vftable + 4));
  CG_ProcessRadiantCmds(RADIANT_GAMEMODE_SP);
  CG_CorpseFade_Update((const LocalClientNum_t)v8);
  v21 = CG_GetLocalClientGlobals((const LocalClientNum_t)v8);
  v22 = v21;
  shellshockIndex = v21->predictedPlayerState.shellshockIndex;
  if ( shellshockIndex )
  {
    shellshockDuration = v21->predictedPlayerState.shellshockDuration;
    shellshockTime = v21->predictedPlayerState.shellshockTime;
  }
  else
  {
    shellshockDuration = v21->testShock.duration;
    shellshockTime = v21->testShock.time;
  }
  ShellshockParms = BG_GetShellshockParms(shellshockIndex);
  CG_StartShellShock(v22, ShellshockParms, shellshockTime, shellshockDuration);
  CG_UpdateShellShock((LocalClientNum_t)v8, v22->shellshock.parms, v22->shellshock.startTime, v22->shellshock.duration);
  CG_View_UpdateShieldViewFx((const LocalClientNum_t)v8);
  CG_View_UpdateScopeOutlineInfo((LocalClientNum_t)v8);
  CG_View_UpdateViewmodelOutline((LocalClientNum_t)v8);
  CG_View_UpdateDepthScanParams((LocalClientNum_t)v8);
  v27 = 0;
  LocalClientGlobals->rumbleScale = 0.0;
  v28 = isFirstClientView;
  if ( isFirstClientView && (updateState == SET_SHAPE_KEY_A || updateState == NOP) )
  {
    EntitySystem = CgEntitySystem::GetEntitySystem((const LocalClientNum_t)v8);
    v30 = CG_GetLocalClientGlobals((const LocalClientNum_t)v8);
    Instance = CgAntiLag::GetInstance((const LocalClientNum_t)v8);
    if ( !Instance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_view_sp.cpp", 1126, ASSERT_TYPE_ASSERT, "(antilag)", (const char *)&queryFormat, "antilag") )
      __debugbreak();
    CG_ClientModel_ResetPrevPose((const LocalClientNum_t)v8);
    SND_AddPhysicsQueryBlock();
    ScriptableCl_Spatial_Update((const LocalClientNum_t)v8);
    ScriptableCl_UpdateNonEntitySharedInstances((const LocalClientNum_t)v8);
    BgAntiLag::PurgeLerpMoverCommands(Instance, v30->frametime);
    Profile2_UpdateEntry(32);
    if ( ((unsigned __int8)&dword_14FDE8050 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &dword_14FDE8050) )
      __debugbreak();
    _InterlockedIncrement(&dword_14FDE8050);
    EntitySystem->AddPacketEntities(EntitySystem, (const LocalClientNum_t)v8);
    Profile2_UpdateEntry(32);
    if ( ((unsigned __int64)&dword_14FDE8050 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &dword_14FDE8050) )
      __debugbreak();
    _InterlockedDecrement(&dword_14FDE8050);
    SND_ReleasePhysicsQueryBlock();
    Profile_Begin(801);
    CGMovingPlatformClient::UpdateFrameCache(&v30->movingPlatforms, (const LocalClientNum_t)v8);
    Profile_EndInternal(NULL);
    Sys_ThreadsSP_AllowSendClientMessages();
    v27 = 0;
    v28 = isFirstClientView;
  }
  CgSimBulletFirePellet_WaitForWorkers((LocalClientNum_t)v8);
  System = CgBallistics::GetSystem((const LocalClientNum_t)v8);
  v82 = System;
  if ( !System && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_view_sp.cpp", 1794, ASSERT_TYPE_ASSERT, "(ballisticsSystem)", (const char *)&queryFormat, "ballisticsSystem") )
    __debugbreak();
  CgBallistics::WaitForWorkers(System);
  CgSimBulletFirePellet_ProcessEvents((LocalClientNum_t)v8);
  if ( v28 )
  {
    CG_Cloth_Entity_Update((const LocalClientNum_t)v8);
    Physics_WaitForAllCommandsToFinish();
    Physics_CheckForGarbageCollectionClient(0.016666668);
    if ( !(_DWORD)v8 )
      PhysPerfRaycast_Update();
    Sys_ProfBeginNamedEvent(0xFFF08080, "Physics_ProcessDeferredForceCallbacks");
    Physics_ProcessDeferredForceCallbacks((const Physics_WorldId)(3 * v8 + 3));
    Sys_ProfEndNamedEvent();
    CgVehicleSystem::PhysicsProcessDeferredEvents(v10);
    data[0] = 3 * v8 + 2;
    TimeScale = Com_GetTimeScale();
    *(float *)&data[1] = *(float *)&TimeScale * cls.frametime_rawSeconds;
    Sys_AddWorkerCmd(WRKCMD_PHYSICS_UPDATE_PREDICTIVE_WORLD_PRE, data);
    Sys_AddWorkerCmd(WRKCMD_PHYSICS_UPDATE_PREDICTIVE_WORLD, data);
    DynEntCL_AddWorkerCmd((LocalClientNum_t)v8);
    v34 = Com_GetTimeScale();
    Ragdoll_AddUpdateWorkerCmds((LocalClientNum_t)v8, *(float *)&v34 * 0.016666668);
    CG_Particle_AddProcessFxPhysicsObjectRequestsWorkerCmd((LocalClientNum_t)v8);
    v28 = isFirstClientView;
  }
  Sys_ProfBeginNamedEvent(0xFFF08080, "CG_RumbleSP_Update");
  CG_Rumble_ProcessDeferred((LocalClientNum_t)v8);
  CG_RumbleSP_Update((const LocalClientNum_t)v8);
  Sys_ProfEndNamedEvent();
  Sys_ProfBeginNamedEvent(0xFF44CCFF, "CG_TriggerUpdate");
  CG_TriggerUpdate((LocalClientNum_t)v8);
  Sys_ProfEndNamedEvent();
  Sys_ProfBeginNamedEvent(0xFF191970, "CG_UpdateClientSideEffects");
  CgClientSideEffectsSystem::Update(v9);
  Sys_ProfEndNamedEvent();
  if ( Com_GameMode_SupportsFeature(WEAPON_RECHAMBERING) )
  {
    Sys_ProfBeginNamedEvent(0xFFFAEBD7, "Add Client Side Sounds");
    CgClientSideEffectsSystem::AddSounds(v9);
    CgClientSideEffectsSystem::UpdateEffects(v9);
    Sys_ProfEndNamedEvent();
  }
  Profile_Begin(603);
  Physics_WaitForPredictiveWorldUpdateCommandToFinish();
  Profile_EndInternal(NULL);
  SND_AddPhysicsQueryBlock();
  if ( v28 )
  {
    v35 = CG_GetLocalClientGlobals((const LocalClientNum_t)v8);
    Profile2_UpdateEntry(34);
    if ( ((unsigned __int8)&dword_14FDE8058 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &dword_14FDE8058) )
      __debugbreak();
    _InterlockedIncrement(&dword_14FDE8058);
    R_UpdateSound();
    Sys_ProfBeginNamedEvent(0xFFFF6347, "pre player state");
    v36 = updateState;
    if ( updateState == SET_SHAPE_KEY_A || updateState == NOP )
      CG_PredictSP_PrePredictAllPlayerState();
    Sys_ProfEndNamedEvent();
    serverMaterialsTouch = (const Material **)cgMedia.serverMaterialsTouch;
    do
    {
      if ( !*serverMaterialsTouch )
        break;
      Stream_TouchMaterial(*serverMaterialsTouch);
      ++v27;
      ++serverMaterialsTouch;
    }
    while ( v27 < 32 );
    CL_Main_SyncGpu((LocalClientNum_t)v8);
    R_ToggleSmpFrame((LocalClientNum_t)v8);
    CG_HighPriorityWeapon_Update((const LocalClientNum_t)v8);
    CG_Turret_Update((const LocalClientNum_t)v8);
    Sys_ProfBeginNamedEvent(0xFFFF6347, "handle client input");
    if ( updateState == SET_SHAPE_KEY_A || updateState == NOP )
      CL_InputSP_HandleClientInput((LocalClientNum_t)v8);
    Sys_ProfEndNamedEvent();
    CG_ModelPreviewerFrame(v35);
    CG_AddModelPreviewerModel((LocalClientNum_t)v8, v35->frametime);
    CG_CreateFx_Frame(v35);
    Sys_ProfBeginNamedEvent(0xFFFF6347, "player state");
    if ( updateState == SET_SHAPE_KEY_A || updateState == NOP )
      CG_PredictSP_PredictAllPlayerState();
    Sys_ProfEndNamedEvent();
    Profile2_UpdateEntry(34);
    if ( ((unsigned __int64)&dword_14FDE8058 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &dword_14FDE8058) )
      __debugbreak();
    _InterlockedDecrement(&dword_14FDE8058);
    System = v82;
  }
  else
  {
    CG_GetLocalClientGlobals((const LocalClientNum_t)v8);
    Physics_WaitForAllCommandsToFinish();
    R_ToggleSmpFrame((LocalClientNum_t)v8);
    v36 = updateState;
  }
  SND_ReleasePhysicsQueryBlock();
  CG_LightSampler_Update((LocalClientNum_t)v8);
  Sys_ProfBeginNamedEvent(0xFFEE82EE, "CG_ViewSP_ClientViewUpdateViewModels");
  v38 = CG_GetLocalClientGlobals((const LocalClientNum_t)v8);
  if ( v38->predictedPlayerState.viewmodelIndex > 0 )
  {
    ClConfigStrings = ClConfigStrings::GetClConfigStrings();
    v40 = ClConfigStrings->GetModelString(ClConfigStrings, v38->predictedPlayerState.viewmodelIndex);
    v41 = v40;
    if ( (!v40 || !*v40) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_view_sp.cpp", 1343, ASSERT_TYPE_ASSERT, "(modelName && modelName[0])", (const char *)&queryFormat, "modelName && modelName[0]") )
      __debugbreak();
    v42 = R_RegisterModel(v41);
    CG_UpdateHandViewmodels((LocalClientNum_t)v8, v42);
  }
  CG_UpdateWeaponViewmodels((LocalClientNum_t)v8);
  Sys_ProfEndNamedEvent();
  CG_VisionSetsUpdate_PostPlayerStatePrediction((const LocalClientNum_t)v8);
  CG_VisionSets_UpdateWeaponADS((const LocalClientNum_t)v8);
  CG_WeaponSounds_Update((const LocalClientNum_t)v8);
  CG_Foliage_ProcessLocalCharacterEntity((const LocalClientNum_t)v8);
  if ( CG_PIP_IsActive((LocalClientNum_t)v8) )
    R_Set_IsPipClientView();
  CG_ClearTurretFire();
  DynEntCL_WaitForAddWorkerCmds();
  Sys_WaitWorkerCmdsOfType(WRKCMD_PROCESS_DEFERRED_PARTICLE_PHYSICS);
  CG_PlayerStateSP_TransitionPlayerState((LocalClientNum_t)v8, &LocalClientGlobals->predictedPlayerState, &LocalClientGlobals->oldTransPlayerState);
  CG_SndUpdateAutoSim();
  CG_SndUpdateSubmix((LocalClientNum_t)v8);
  R_EndDelayedSceneModels(1);
  Sys_ProfBeginNamedEvent(0xFFD2691E, "First Client Update");
  v43 = isFirstClientView;
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
    v45 = CG_GetLocalClientGlobals(OnlyLocalClientNum);
    for ( i = 0; i < v45->predictedPlayerState.numViewLinkedEnts; ++i )
      R_ClearDObjInScene(v45->predictedPlayerState.viewLinkedEntityData[i].linkedEnt);
    R_ResetSceneEnts();
    v43 = 0;
  }
  Sys_ProfEndNamedEvent();
  Sys_ProfBeginNamedEvent(0xFFFFC0CB, "Prepare Client Workers");
  CG_ContextMount_UmbraOffsetTrace_StartWorkers((const LocalClientNum_t)v8);
  CG_TraceGroundWorkers_StartWorkers((const LocalClientNum_t)v8);
  CgBallistics::StartWorkers(System, 1);
  if ( !CgSimBulletFirePellet_DelayUntilPlayerOriginUpdate(LocalClientGlobals) )
    CgSimBulletFirePellet_StartWorkers((LocalClientNum_t)v8);
  CgSimBulletFirePellet_WaitForWorkers((LocalClientNum_t)v8);
  CgBallistics::WaitForWorkers(System);
  CgSimBulletFirePellet_ProcessEvents((LocalClientNum_t)v8);
  CG_TraceGroundWorkers_WaitForWorkers();
  CG_TraceGroundWorkers_ProcessOutput((const LocalClientNum_t)v8);
  CgWeaponSystem::DrawDebugBulletLines(v78);
  CG_ProcessTurretFire((const LocalClientNum_t)v8);
  Sys_WaitWorkerCmdsOfType(WRKCMD_ADD_DYNENT_SPATIAL);
  Sys_WaitWorkerCmdsOfType(WRKCMD_RAGDOLL_UPDATE);
  Sys_ProfEndNamedEvent();
  CG_ViewSP_DoFollowEnt((const LocalClientNum_t)v8);
  CG_ViewSP_UpdateKickAngles((const LocalClientNum_t)v8);
  CG_View_UpdateTurretZoom((const LocalClientNum_t)v8);
  CG_Ladder_Update((LocalClientNum_t)v8);
  CG_SmoothOutWeaponPosFracForMispredictionErrors((const LocalClientNum_t)v8);
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_FAST_LAND|WEAPON_OFFHAND_END) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_view_sp.cpp", 1086, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::VIEW_LINKED_ENTITIES ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::VIEW_LINKED_ENTITIES )") )
    __debugbreak();
  v47 = &CG_GetLocalClientGlobals((const LocalClientNum_t)v8)->predictedPlayerState;
  if ( BG_Gesture_IsGestureTypePlaying(v47, GESTURE_TYPE_IK_TARGET) && v47->numViewLinkedEnts > 0 )
  {
    CG_ViewSP_CalcViewValues((const LocalClientNum_t)v8);
    CG_ViewSP_ComputeViewLinkedEntityTransforms((const LocalClientNum_t)v8);
  }
  Sys_ProfBeginNamedEvent(0xFFFF6347, "view anim");
  CG_UpdateViewWeaponAnim((LocalClientNum_t)v8);
  Sys_ProfEndNamedEvent();
  v79->SetViewValues(v79);
  CG_View_UpdateMainThreadTraceSafeLogic((LocalClientNum_t)v8);
  CG_LaserDrawAll((LocalClientNum_t)v8, LASER_COLLISION_AUTH);
  Sys_ProfBeginNamedEvent(0xFFFFC0CB, "Client Physics Update");
  if ( v43 && (v36 == SET_SHAPE_KEY_A || v36 == NOP) )
  {
    v48 = LocalClientGlobals->frametime;
    v49 = 3 * v8 + 3;
    PhysicsSVFX_Update(v49, (LocalClientNum_t)v8, 0.016666668);
    DynEnt_UpdateFrameFlags((LocalClientNum_t)v8);
    CG_ClientModel_SyncLoaded((const LocalClientNum_t)v8);
    CL_UI_ClientModel_Update();
    Profile_Begin(657);
    v50 = Com_GetTimeScale();
    Physics_PreStepWorld(v49, *(float *)&v50 * cls.frametime_rawSeconds);
    Profile_EndInternal(NULL);
    ScriptableCl_UpdateClientInstances((const LocalClientNum_t)v8, v48);
    Physics_ProcessDeferredKeyframe(v49, 1.0);
    Physics_StepWorld(v49, 0, 1, 0.0);
    FX_Update1((LocalClientNum_t)v8);
    v43 = isFirstClientView;
  }
  Sys_ProfEndNamedEvent();
  if ( v43 )
  {
    Profile_Begin(7);
    FX_Update0((LocalClientNum_t)v8, LocalClientGlobals->time);
    Profile_EndInternal(NULL);
    Sys_ProfBeginNamedEvent(0xFFB22222, "mayhem update normal");
    Mayhem_Update((LocalClientNum_t)v8, MAYHEM_UPDATE_NORMAL);
    Sys_ProfEndNamedEvent();
  }
  Com_DevhostUpdate(103);
  AnimVisualizer_Update((float)LocalClientGlobals->frametime * 0.001);
  if ( v43 )
    CG_ClientModel_Update((const LocalClientNum_t)v8);
  if ( LocalClientGlobals->predictedPlayerEntity->nextState.loopSound && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_view_sp.cpp", 2074, ASSERT_TYPE_ASSERT, "(!cgameGlob->predictedPlayerEntity->nextState.loopSound)", "%s\n\tPlayLoopSound() must not be called on the player entity in SP.", "!cgameGlob->predictedPlayerEntity->nextState.loopSound") )
    __debugbreak();
  CG_PlayersSP_ClearPlayersFromScene((LocalClientNum_t)v8);
  CG_PlayersSP_AddLocalPlayerToScene((LocalClientNum_t)v8, 1);
  if ( CgSimBulletFirePellet_DelayUntilPlayerOriginUpdate(LocalClientGlobals) )
  {
    CgBallistics::StartWorkers(System, 1);
    CgSimBulletFirePellet_StartWorkers((LocalClientNum_t)v8);
    CgSimBulletFirePellet_WaitForWorkers((LocalClientNum_t)v8);
    CgBallistics::WaitForWorkers(System);
    CgSimBulletFirePellet_ProcessEvents((LocalClientNum_t)v8);
  }
  if ( v43 && v36 == SET_SHAPE_KEY_A || v36 == NOP )
  {
    clientPos.v[0] = LocalClientGlobals->predictedPlayerState.origin.v[0] + LocalClientGlobals->playerBox.midPoint.v[0];
    clientPos.v[1] = LocalClientGlobals->predictedPlayerState.origin.v[1] + LocalClientGlobals->playerBox.midPoint.v[1];
    clientPos.v[2] = LocalClientGlobals->predictedPlayerState.origin.v[2] + LocalClientGlobals->playerBox.midPoint.v[2];
    R_ReactiveMotion_Update((LocalClientNum_t)v8, (float)LocalClientGlobals->time * 0.001, (float)(LocalClientGlobals->time - LocalClientGlobals->oldTime) * 0.001, &clientPos, &LocalClientGlobals->predictedPlayerState.velocity);
  }
  v51 = CG_GetLocalClientGlobals((const LocalClientNum_t)v8);
  v51->cvsData.transitory.thermalVisionActive = CG_View_IsThermalVisionOn((const LocalClientNum_t)v8);
  CG_View_UpdateLocSelInfo((const LocalClientNum_t)v8);
  CgSoundSystem::UpdateBreathingSounds(v83);
  CG_View_InitXCamView(LocalClientGlobals);
  CG_ViewSP_ComputeViewLinkedEntityTransforms((const LocalClientNum_t)v8);
  CG_ViewSP_UpdateViewLinkedEntities((const LocalClientNum_t)v8);
  CgWeaponSystem::ProcessDeferredTracer(v78);
  CgBallistics::FinishFrame(System);
  CG_UpdateLocalEntities((const LocalClientNum_t)v8);
  Sys_ProfBeginNamedEvent(0xFFFF6347, "player entity");
  v52 = DVARINT_cl_freemove;
  if ( !DVARINT_cl_freemove && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_freemove") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v52);
  if ( v52->current.integer )
    R_SetLodOrigin(&LocalClientGlobals->refdef, 1.0);
  IsPlayerZeroG = BG_IsPlayerZeroG(&LocalClientGlobals->predictedPlayerState);
  thermalVisionActive = LocalClientGlobals->cvsData.transitory.thermalVisionActive;
  FarPlaneDist = R_GetFarPlaneDist();
  FX_Update2((LocalClientNum_t)v8, &LocalClientGlobals->refdef, &LocalClientGlobals->refdef.view, *(float *)&FarPlaneDist, thermalVisionActive, IsPlayerZeroG, 0);
  AxisToQuat(&LocalClientGlobals->refdef.view.axis, &out);
  RefdefView_GetOrg(&LocalClientGlobals->refdef.view, &outOrg);
  CG_Rumble_SetReceiver((LocalClientNum_t)v8, LocalClientGlobals->predictedPlayerState.clientNum, &outOrg, &out);
  CG_Slide_UpdateClient((LocalClientNum_t)v8);
  CG_Ladder_PlayAudioClient((const LocalClientNum_t)v8);
  CG_View_UpdateTestFX((const LocalClientNum_t)v8);
  if ( isFirstClientView )
  {
    Sys_ProfBeginNamedEvent(0xFFB22222, "mayhem update delayed");
    Mayhem_Update((LocalClientNum_t)v8, MAYHEM_UPDATE_DELAYED);
    Sys_ProfEndNamedEvent();
  }
  CG_View_DumpAnims((const LocalClientNum_t)v8);
  CG_View_DumpAnims3D((const LocalClientNum_t)v8);
  CG_View_DumpDObj((const LocalClientNum_t)v8);
  Sys_ProfEndNamedEvent();
  R_EndDObjScene();
  Physics_AddToScene((LocalClientNum_t)v8);
  CG_LaserDrawAll((LocalClientNum_t)v8, LASER_COLLISION_PRED);
  CG_Deploy_Update((LocalClientNum_t)v8);
  if ( !(_BYTE)CgCompassSystem::ms_allocatedType )
  {
    LODWORD(inPipa) = v8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.h", 575, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the compass system for localClientNum %d but the compass system type is not known\n", "ms_allocatedType != GameModeType::NONE", inPipa) )
      __debugbreak();
  }
  if ( (unsigned int)v8 >= CgCompassSystem::ms_allocatedCount )
  {
    LODWORD(inPipa) = CgCompassSystem::ms_allocatedCount;
    LODWORD(isZeroGa) = v8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.h", 576, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", isZeroGa, inPipa) )
      __debugbreak();
  }
  if ( !CgCompassSystem::ms_compassSystemArray[v8] )
  {
    LODWORD(inPipa) = v8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.h", 577, ASSERT_TYPE_ASSERT, "(ms_compassSystemArray[localClientNum])", "%s\n\tTrying to access unallocated compass system for localClientNum %d\n", "ms_compassSystemArray[localClientNum]", inPipa) )
      __debugbreak();
  }
  CgCompassSystem::UpdatePlayerOrientation(CgCompassSystem::ms_compassSystemArray[v8], &LocalClientGlobals->predictedPlayerState);
  FX_Update3((LocalClientNum_t)v8);
  Sys_ProfBeginNamedEvent(0xFFFF6347, "aim assist");
  if ( !LocalClientGlobals->aimAssistEyeOrigin.initialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\anticheat\\security_obfuscation_integer.h", 221, ASSERT_TYPE_ASSERT, "(initialized)", (const char *)&queryFormat, "initialized") )
    __debugbreak();
  p_aimAssistEyeOrigin = &LocalClientGlobals->aimAssistEyeOrigin;
  v86 = ((_DWORD)LocalClientGlobals + 98316) ^ LocalClientGlobals->aimAssistEyeOrigin.secureInt32_3_aab;
  LODWORD(eyeOrg.v[0]) = LocalClientGlobals->aimAssistEyeOrigin.data[0] ^ (v86 * (v86 + 2));
  v95 = &LocalClientGlobals->aimAssistEyeOrigin.data[1];
  v87 = ((_DWORD)LocalClientGlobals + 98320) ^ LocalClientGlobals->aimAssistEyeOrigin.secureInt32_3_aab;
  LODWORD(eyeOrg.v[1]) = LocalClientGlobals->aimAssistEyeOrigin.data[1] ^ (v87 * (v87 + 2));
  v96 = &LocalClientGlobals->aimAssistEyeOrigin.data[2];
  v88 = ((_DWORD)LocalClientGlobals + 98324) ^ LocalClientGlobals->aimAssistEyeOrigin.secureInt32_3_aab;
  LODWORD(eyeOrg.v[2]) = LocalClientGlobals->aimAssistEyeOrigin.data[2] ^ (v88 * (v88 + 2));
  if ( !LocalClientGlobals->aimAssistViewOrigin.initialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\anticheat\\security_obfuscation_integer.h", 221, ASSERT_TYPE_ASSERT, "(initialized)", (const char *)&queryFormat, "initialized") )
    __debugbreak();
  p_aimAssistViewOrigin = &LocalClientGlobals->aimAssistViewOrigin;
  v89 = ((_DWORD)LocalClientGlobals + 98340) ^ LocalClientGlobals->aimAssistViewOrigin.secureInt32_3_aab;
  LODWORD(viewOrg.v[0]) = LocalClientGlobals->aimAssistViewOrigin.data[0] ^ (v89 * (v89 + 2));
  v91 = &LocalClientGlobals->aimAssistViewOrigin.data[1];
  v80 = ((_DWORD)LocalClientGlobals + 98344) ^ LocalClientGlobals->aimAssistViewOrigin.secureInt32_3_aab;
  LODWORD(viewOrg.v[1]) = LocalClientGlobals->aimAssistViewOrigin.data[1] ^ (v80 * (v80 + 2));
  v92 = &LocalClientGlobals->aimAssistViewOrigin.data[2];
  v81 = ((_DWORD)LocalClientGlobals + 98348) ^ LocalClientGlobals->aimAssistViewOrigin.secureInt32_3_aab;
  LODWORD(viewOrg.v[2]) = LocalClientGlobals->aimAssistViewOrigin.data[2] ^ (v81 * (v81 + 2));
  AimAssist_UpdateScreenTargets((LocalClientNum_t)v8, &eyeOrg, &viewOrg, &LocalClientGlobals->aimAssistViewAngles, LocalClientGlobals->refdef.view.fov.tanHalfFovX, LocalClientGlobals->refdef.view.fov.tanHalfFovY);
  Sys_ProfEndNamedEvent();
  v79->UpdateFullFrameFX(v79);
  CG_ViewSP_UpdateSelectedWeapon((const LocalClientNum_t)v8);
  if ( !Dvar_GetBoolSafe("NMMPTOSMKQ") )
  {
    v56 = CL_Pause_IsGamePaused() && !Dvar_GetBoolSafe("NLONRMOLKS");
    R_Cinematic_SetPaused((CinematicEnum)v56, 0);
  }
  CG_CreateFx_UpdateCursor((LocalClientNum_t)v8);
  v57 = CG_GetLocalClientGlobals((const LocalClientNum_t)v8);
  FocusOrigin = CG_Camera_GetFocusOrigin((LocalClientNum_t)v8);
  RefdefView_GetOrg(&v57->refdef.view, &origin);
  CL_StreamViews_UpdateVelocity((const LocalClientNum_t)v8, FocusOrigin, v57->time, v57->frametime);
  CL_StreamViews_CalculateZoomFactorAndCosFovLimit(v57->refdef.view.fov.tanHalfFovY, v57->refdef.view.defaultFov.tanHalfFovY, &outZoomFactor, &outCosFovLimit);
  ClientVelocity = CL_StreamViews_GetClientVelocity((const LocalClientNum_t)v8);
  CL_StreamViews_SetManualView(MOVEMENT, (LocalClientNum_t)v8, &origin, &v57->refdefViewAngles, ClientVelocity, outZoomFactor, outCosFovLimit, 1);
  origin = v57->predictedPlayerState.origin;
  Handler = CgHandler::getHandler((LocalClientNum_t)v8);
  WorldUpReferenceFrame::WorldUpReferenceFrame(&v100, &v57->predictedPlayerState, Handler);
  WorldUpReferenceFrame::AddUpContribution(&v100, v57->predictedPlayerState.viewHeightCurrent, &origin);
  RefdefView_GetOrg(&v57->refdef.view, &v75);
  if ( (float)((float)((float)((float)(origin.v[1] - v75.v[1]) * (float)(origin.v[1] - v75.v[1])) + (float)((float)(origin.v[0] - v75.v[0]) * (float)(origin.v[0] - v75.v[0]))) + (float)((float)(origin.v[2] - v75.v[2]) * (float)(origin.v[2] - v75.v[2]))) <= 4194304.0 )
    CL_StreamViews_ClearManualView(DODGE, (LocalClientNum_t)v8);
  else
    CL_StreamViews_SetManualView(DODGE, (LocalClientNum_t)v8, &origin, &v57->refdefViewAngles, ClientVelocity, outZoomFactor, outCosFovLimit, 0);
  CL_UIStreaming_UpdateImages();
  memset(&v75, 0, sizeof(v75));
  memset(&origin, 0, sizeof(origin));
  CG_SND_Update((const LocalClientNum_t)v8);
  CG_DrawSP_DrawActive((const LocalClientNum_t)v8, drawType);
  CG_GameInterface_ViewSP_DrawActiveFrame((const LocalClientNum_t)v8);
  CgStatic::ClearActiveStatics((const LocalClientNum_t)v8);
  LocalClientGlobals->playerTeleported = 0;
  v61 = (__int64)p_predictedPlayerState;
  LocalClientGlobals->lastMantleflags = p_predictedPlayerState->mantleState.flags;
  LocalClientGlobals->prevWeaponFlags = *(GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64> *)(v61 + 1832);
  GamerProfile_CheckBBPrintInitialConfig((const LocalClientNum_t)v8);
  CL_Input_EndFrame((LocalClientNum_t)v8);
  Profile2_UpdateEntry(30);
  if ( v85 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &dword_14FDE8048) )
    __debugbreak();
  _InterlockedDecrement(&dword_14FDE8048);
  memset(&viewOrg, 0, sizeof(viewOrg));
  memset(&eyeOrg, 0, sizeof(eyeOrg));
  memset(&outOrg, 0, sizeof(outOrg));
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
  R_SetLodOrigin(refDef, lodOverride);
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
  const dvar_t *v3; 
  const ClActiveClient *Client; 
  int CmdNumber; 
  const ClActiveClient *v6; 
  int v7; 
  int v8; 
  unsigned __int64 v9; 
  vec3_t *p_inOrg; 
  __int64 v11; 
  char *v12; 
  __int64 v13; 
  cg_t *LocalClientGlobals; 
  double v15; 
  double v16; 
  double v17; 
  int v18; 
  const dvar_t *v19; 
  float v20; 
  CgHandler *Handler; 
  float v22; 
  float v23; 
  float v24; 
  float v25; 
  float v26; 
  float v27; 
  float v28; 
  float v29; 
  float v30; 
  unsigned __int8 v31; 
  unsigned __int8 v32; 
  char v33; 
  int v34; 
  float v35; 
  float v36; 
  float v37; 
  float v38; 
  char *fmt; 
  int v40; 
  vec3_t inOrg; 
  __int64 v42; 
  vec3_t vec; 
  WorldUpReferenceFrame v44; 
  char v45; 
  int packedAngle; 
  int v47; 
  int v48; 
  char v49; 
  char v50; 
  unsigned __int8 v51; 
  unsigned __int8 v52; 

  v42 = -2i64;
  if ( !CL_Pause_IsGamePaused() )
    goto LABEL_2;
  v3 = DVARINT_cl_freemove;
  if ( !DVARINT_cl_freemove && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_freemove") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  if ( v3->current.integer )
  {
    Client = ClActiveClient::GetClient(localClientNum);
    CmdNumber = ClActiveClient_GetCmdNumber(Client);
    v6 = ClActiveClient::GetClient(localClientNum);
    v7 = ClActiveClient_GetCmdNumber(v6);
    v8 = v7;
    v40 = v7;
    if ( CmdNumber > v7 )
    {
      LODWORD(fmt) = v7;
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143CEE128, 754i64, (unsigned int)CmdNumber, fmt);
    }
    if ( CmdNumber > v8 - 128 && CmdNumber > 0 )
    {
      v11 = (__int64)&v6->cmds[CmdNumber & 0x7F];
      memset(&v40, 0, sizeof(v40));
      if ( !v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_active_client.h", 385, ASSERT_TYPE_ASSERT, "(requestedCmd)", (const char *)&queryFormat, "requestedCmd") )
        __debugbreak();
      v12 = &v45;
      v13 = 2i64;
      do
      {
        *(__m256i *)v12 = *(__m256i *)v11;
        *((__m256i *)v12 + 1) = *(__m256i *)(v11 + 32);
        *((__m256i *)v12 + 2) = *(__m256i *)(v11 + 64);
        *((_OWORD *)v12 + 6) = *(_OWORD *)(v11 + 96);
        v12 += 128;
        *((_OWORD *)v12 - 1) = *(_OWORD *)(v11 + 112);
        v11 += 128i64;
        --v13;
      }
      while ( v13 );
      *(_QWORD *)v12 = *(_QWORD *)v11;
      LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
      v15 = BG_UsrCmdUnpackAngle(packedAngle);
      angles.v[0] = *(float *)&v15;
      v16 = BG_UsrCmdUnpackAngle(v47);
      angles.v[1] = *(float *)&v16;
      v17 = BG_UsrCmdUnpackAngle(v48);
      angles.v[2] = *(float *)&v17;
      angles.v[0] = angles.v[0] + LocalClientGlobals->predictedPlayerState.delta_angles.v[0];
      angles.v[1] = angles.v[1] + LocalClientGlobals->predictedPlayerState.delta_angles.v[1];
      angles.v[2] = *(float *)&v17 + LocalClientGlobals->predictedPlayerState.delta_angles.v[2];
      if ( !pausedFreeMove )
      {
        pausedFreeMove = 1;
        oldMsec = Sys_Milliseconds();
        moveMsec = 0;
      }
      v18 = Sys_Milliseconds();
      v19 = DVARFLT_cl_freemoveScale;
      if ( !DVARFLT_cl_freemoveScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_freemoveScale") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v19);
      v20 = (float)((float)(v18 - oldMsec) * 0.050000001) * v19->current.value;
      oldMsec = v18;
      Handler = CgHandler::getHandler(localClientNum);
      WorldUpReferenceFrame::WorldUpReferenceFrame(&v44, &LocalClientGlobals->predictedPlayerState, Handler);
      vec.v[1] = 0.0;
      vec.v[0] = 0.0;
      vec.v[2] = FLOAT_1_0;
      WorldUpReferenceFrame::ApplyReferenceFrameToVector(&v44, &vec);
      LocalClientGlobals->refdefViewAngles = angles;
      AnglesToAxis(&LocalClientGlobals->refdefViewAngles, &LocalClientGlobals->refdef.view.axis);
      WorldUpReferenceFrame::ApplyReferenceFrameToAxis(&v44, &LocalClientGlobals->refdef.view.axis);
      v22 = vec.v[1];
      v23 = vec.v[2];
      v24 = (float)(vec.v[1] * LocalClientGlobals->refdef.view.axis.m[0].v[2]) - (float)(vec.v[2] * LocalClientGlobals->refdef.view.axis.m[0].v[1]);
      v25 = vec.v[0];
      v26 = (float)(vec.v[2] * LocalClientGlobals->refdef.view.axis.m[0].v[0]) - (float)(vec.v[0] * LocalClientGlobals->refdef.view.axis.m[0].v[2]);
      v27 = (float)(vec.v[0] * LocalClientGlobals->refdef.view.axis.m[0].v[1]) - (float)(vec.v[1] * LocalClientGlobals->refdef.view.axis.m[0].v[0]);
      v28 = (float)(vec.v[2] * v26) - (float)(vec.v[1] * v27);
      v29 = (float)(vec.v[0] * v27) - (float)(vec.v[2] * v24);
      v30 = (float)(vec.v[1] * v24) - (float)(vec.v[0] * v26);
      v31 = v52;
      v32 = v51;
      v33 = v49;
      if ( v50 || v49 || v51 || v52 )
      {
        v34 = moveMsec;
        if ( !moveMsec )
          v34 = v18;
        moveMsec = v34;
        if ( v50 )
        {
          v35 = (float)(_mm_cvtepi32_ps((__m128i)(unsigned int)-v50).m128_f32[0] * 0.2) * v20;
          LocalClientGlobals->predictedPlayerState.origin.v[0] = (float)(v35 * v24) + LocalClientGlobals->predictedPlayerState.origin.v[0];
          LocalClientGlobals->predictedPlayerState.origin.v[1] = (float)(v35 * v26) + LocalClientGlobals->predictedPlayerState.origin.v[1];
          LocalClientGlobals->predictedPlayerState.origin.v[2] = (float)(v35 * v27) + LocalClientGlobals->predictedPlayerState.origin.v[2];
        }
        if ( v33 )
        {
          v36 = (float)(_mm_cvtepi32_ps((__m128i)(unsigned int)v33).m128_f32[0] * 0.2) * v20;
          LocalClientGlobals->predictedPlayerState.origin.v[0] = (float)(v28 * v36) + LocalClientGlobals->predictedPlayerState.origin.v[0];
          LocalClientGlobals->predictedPlayerState.origin.v[1] = (float)(v29 * v36) + LocalClientGlobals->predictedPlayerState.origin.v[1];
          LocalClientGlobals->predictedPlayerState.origin.v[2] = (float)(v30 * v36) + LocalClientGlobals->predictedPlayerState.origin.v[2];
        }
        if ( v18 - v34 < 250 )
          v20 = v20 * 0.25;
        if ( v32 )
        {
          v37 = (float)(_mm_cvtepi32_ps((__m128i)v32).m128_f32[0] * 0.2) * v20;
          LocalClientGlobals->predictedPlayerState.origin.v[0] = (float)(v25 * v37) + LocalClientGlobals->predictedPlayerState.origin.v[0];
          LocalClientGlobals->predictedPlayerState.origin.v[1] = (float)(v22 * v37) + LocalClientGlobals->predictedPlayerState.origin.v[1];
          LocalClientGlobals->predictedPlayerState.origin.v[2] = (float)(v23 * v37) + LocalClientGlobals->predictedPlayerState.origin.v[2];
        }
        if ( v31 )
        {
          v38 = (float)(_mm_cvtepi32_ps((__m128i)(unsigned int)-v31).m128_f32[0] * 0.2) * v20;
          LocalClientGlobals->predictedPlayerState.origin.v[0] = (float)(v25 * v38) + LocalClientGlobals->predictedPlayerState.origin.v[0];
          LocalClientGlobals->predictedPlayerState.origin.v[1] = (float)(v22 * v38) + LocalClientGlobals->predictedPlayerState.origin.v[1];
          LocalClientGlobals->predictedPlayerState.origin.v[2] = (float)(v23 * v38) + LocalClientGlobals->predictedPlayerState.origin.v[2];
        }
      }
      else
      {
        moveMsec = 0;
      }
      CG_PlayerState_ClearExtrapolatedPlayerState(localClientNum);
      inOrg = LocalClientGlobals->predictedPlayerState.origin;
      WorldUpReferenceFrame::AddUpContribution(&v44, LocalClientGlobals->predictedPlayerState.viewHeightCurrent, &inOrg);
      RefdefView_SetOrg(&LocalClientGlobals->refdef.view, &inOrg);
      AxisToAngles(&LocalClientGlobals->refdef.view.axis, &LocalClientGlobals->refdefViewAngles);
      p_inOrg = &inOrg;
      v9 = 12i64;
    }
    else
    {
      v9 = 4i64;
      p_inOrg = (vec3_t *)&v40;
      pausedFreeMove = 0;
    }
    result = 1;
    memset(p_inOrg, 0, v9);
  }
  else
  {
LABEL_2:
    pausedFreeMove = 0;
    return 0;
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
  cg_t *LocalClientGlobals; 
  __int64 v3; 
  unsigned __int64 v4; 
  unsigned __int16 *p_linkedEnt; 
  unsigned __int16 *i; 
  __int64 v7; 
  ViewJostleState *v8; 
  __int64 v9; 
  __int128 *linkedToPlayerView; 
  ViewJostleState *v11; 
  __int128 v12; 
  unsigned __int16 linkedEnt; 
  unsigned __int64 v14; 
  ViewJostleState *v15; 
  unsigned __int16 v16; 
  unsigned __int64 v17; 
  ViewJostleState *v18; 
  unsigned __int16 v19; 
  unsigned __int64 v20; 
  ViewJostleState *v21; 
  unsigned __int16 v22; 
  ViewJostleState *j; 
  ViewJostleState v24; 

  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_FAST_LAND|WEAPON_OFFHAND_END) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_view_sp.cpp", 780, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::VIEW_LINKED_ENTITIES ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::VIEW_LINKED_ENTITIES )") )
    __debugbreak();
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  v3 = 0i64;
  v4 = 0i64;
  p_linkedEnt = &LocalClientGlobals->linkedToPlayerView[0].linkedEnt;
  for ( i = &LocalClientGlobals->predictedPlayerState.viewLinkedEntityData[0].linkedEnt; *p_linkedEnt == *i; i += 16 )
  {
    ++v4;
    p_linkedEnt += 62;
    if ( v4 >= 4 )
      return;
  }
  v7 = 4i64;
  v8 = &v24;
  do
  {
    ViewJostleState::ViewJostleState(v8++);
    --v7;
  }
  while ( v7 );
  v9 = 3i64;
  linkedToPlayerView = (__int128 *)LocalClientGlobals->linkedToPlayerView;
  v11 = &v24;
  do
  {
    v11 = (ViewJostleState *)((char *)v11 + 128);
    v12 = *linkedToPlayerView;
    linkedToPlayerView += 8;
    *(_OWORD *)&v11[-2].linkedEnt = v12;
    *(_OWORD *)v11[-1].viewToLinkedTagTransform.row1.v = *(linkedToPlayerView - 7);
    *(_OWORD *)&v11[-1].viewToLinkedTagTransform.row2.y = *(linkedToPlayerView - 6);
    *(_OWORD *)&v11[-1].viewToLinkedTagTransform.row3.z = *(linkedToPlayerView - 5);
    *(_OWORD *)v11[-1].oldLinkedTagAnglesLocal.v = *(linkedToPlayerView - 4);
    *(_OWORD *)&v11[-1].oldPos.y = *(linkedToPlayerView - 3);
    *(_OWORD *)&v11[-1].oldLinearVelocity.z = *(linkedToPlayerView - 2);
    *(_OWORD *)v11[-1].oldOffsetangles.v = *(linkedToPlayerView - 1);
    --v9;
  }
  while ( v9 );
  *(_OWORD *)v11->viewToLinkedTagTransform.m[0].v = *linkedToPlayerView;
  *(_OWORD *)&v11->viewToLinkedTagTransform.row1.y = linkedToPlayerView[1];
  *(_OWORD *)&v11->viewToLinkedTagTransform.row2.z = linkedToPlayerView[2];
  *(_OWORD *)v11->oldViewanglesLocal.v = linkedToPlayerView[3];
  *(_OWORD *)&v11->oldLinkedTagAnglesLocal.y = linkedToPlayerView[4];
  *(_OWORD *)&v11->oldPos.z = linkedToPlayerView[5];
  *(_OWORD *)v11->accumulatedLinearVelocity.v = linkedToPlayerView[6];
  memset_0(LocalClientGlobals->linkedToPlayerView, 0, sizeof(LocalClientGlobals->linkedToPlayerView));
  linkedEnt = LocalClientGlobals->predictedPlayerState.viewLinkedEntityData[0].linkedEnt;
  if ( linkedEnt && linkedEnt != 2047 )
  {
    v14 = 0i64;
    v15 = &v24;
    while ( v15->linkedEnt != linkedEnt )
    {
      ++v14;
      ++v15;
      if ( v14 >= 4 )
        goto LABEL_19;
    }
    *(__m256i *)LocalClientGlobals->linkedToPlayerView[0].viewToLinkedTagTransform.m[0].v = *(__m256i *)v15->viewToLinkedTagTransform.m[0].v;
    *(__m256i *)&LocalClientGlobals->linkedToPlayerView[0].viewToLinkedTagTransform.row2.z = *(__m256i *)&v15->viewToLinkedTagTransform.row2.z;
    *(__m256i *)&LocalClientGlobals->linkedToPlayerView[0].oldLinkedTagAnglesLocal.y = *(__m256i *)&v15->oldLinkedTagAnglesLocal.y;
    *(_OWORD *)LocalClientGlobals->linkedToPlayerView[0].accumulatedLinearVelocity.v = *(_OWORD *)v15->accumulatedLinearVelocity.v;
    *(double *)&LocalClientGlobals->linkedToPlayerView[0].oldOffsetangles.y = *(double *)&v15->oldOffsetangles.y;
    *(_DWORD *)&LocalClientGlobals->linkedToPlayerView[0].linkedEnt = *(_DWORD *)&v15->linkedEnt;
  }
LABEL_19:
  v16 = LocalClientGlobals->predictedPlayerState.viewLinkedEntityData[1].linkedEnt;
  if ( v16 && v16 != 2047 )
  {
    v17 = 0i64;
    v18 = &v24;
    while ( v18->linkedEnt != v16 )
    {
      ++v17;
      ++v18;
      if ( v17 >= 4 )
        goto LABEL_26;
    }
    *(__m256i *)LocalClientGlobals->linkedToPlayerView[1].viewToLinkedTagTransform.m[0].v = *(__m256i *)v18->viewToLinkedTagTransform.m[0].v;
    *(__m256i *)&LocalClientGlobals->linkedToPlayerView[1].viewToLinkedTagTransform.row2.z = *(__m256i *)&v18->viewToLinkedTagTransform.row2.z;
    *(__m256i *)&LocalClientGlobals->linkedToPlayerView[1].oldLinkedTagAnglesLocal.y = *(__m256i *)&v18->oldLinkedTagAnglesLocal.y;
    *(_OWORD *)LocalClientGlobals->linkedToPlayerView[1].accumulatedLinearVelocity.v = *(_OWORD *)v18->accumulatedLinearVelocity.v;
    *(double *)&LocalClientGlobals->linkedToPlayerView[1].oldOffsetangles.y = *(double *)&v18->oldOffsetangles.y;
    *(_DWORD *)&LocalClientGlobals->linkedToPlayerView[1].linkedEnt = *(_DWORD *)&v18->linkedEnt;
  }
LABEL_26:
  v19 = LocalClientGlobals->predictedPlayerState.viewLinkedEntityData[2].linkedEnt;
  if ( v19 && v19 != 2047 )
  {
    v20 = 0i64;
    v21 = &v24;
    while ( v21->linkedEnt != v19 )
    {
      ++v20;
      ++v21;
      if ( v20 >= 4 )
        goto LABEL_33;
    }
    *(__m256i *)LocalClientGlobals->linkedToPlayerView[2].viewToLinkedTagTransform.m[0].v = *(__m256i *)v21->viewToLinkedTagTransform.m[0].v;
    *(__m256i *)&LocalClientGlobals->linkedToPlayerView[2].viewToLinkedTagTransform.row2.z = *(__m256i *)&v21->viewToLinkedTagTransform.row2.z;
    *(__m256i *)&LocalClientGlobals->linkedToPlayerView[2].oldLinkedTagAnglesLocal.y = *(__m256i *)&v21->oldLinkedTagAnglesLocal.y;
    *(_OWORD *)LocalClientGlobals->linkedToPlayerView[2].accumulatedLinearVelocity.v = *(_OWORD *)v21->accumulatedLinearVelocity.v;
    *(double *)&LocalClientGlobals->linkedToPlayerView[2].oldOffsetangles.y = *(double *)&v21->oldOffsetangles.y;
    *(_DWORD *)&LocalClientGlobals->linkedToPlayerView[2].linkedEnt = *(_DWORD *)&v21->linkedEnt;
  }
LABEL_33:
  v22 = LocalClientGlobals->predictedPlayerState.viewLinkedEntityData[3].linkedEnt;
  if ( v22 && v22 != 2047 )
  {
    for ( j = &v24; j->linkedEnt != v22; ++j )
    {
      if ( (unsigned __int64)++v3 >= 4 )
        return;
    }
    *(__m256i *)LocalClientGlobals->linkedToPlayerView[3].viewToLinkedTagTransform.m[0].v = *(__m256i *)j->viewToLinkedTagTransform.m[0].v;
    *(__m256i *)&LocalClientGlobals->linkedToPlayerView[3].viewToLinkedTagTransform.row2.z = *(__m256i *)&j->viewToLinkedTagTransform.row2.z;
    *(__m256i *)&LocalClientGlobals->linkedToPlayerView[3].oldLinkedTagAnglesLocal.y = *(__m256i *)&j->oldLinkedTagAnglesLocal.y;
    *(_OWORD *)LocalClientGlobals->linkedToPlayerView[3].accumulatedLinearVelocity.v = *(_OWORD *)j->accumulatedLinearVelocity.v;
    *(double *)&LocalClientGlobals->linkedToPlayerView[3].oldOffsetangles.y = *(double *)&j->oldOffsetangles.y;
    *(_DWORD *)&LocalClientGlobals->linkedToPlayerView[3].linkedEnt = *(_DWORD *)&j->linkedEnt;
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
  cg_t *LocalClientGlobals; 
  CgWeaponMap *v3; 
  const dvar_t *v4; 
  int EquippedWeaponIndex; 
  __int64 v6; 
  const Weapon *CurrentWeaponForPlayer; 

  v1 = localClientNum;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( !CgWeaponMap::ms_instance[v1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
    __debugbreak();
  v3 = CgWeaponMap::ms_instance[v1];
  if ( LocalClientGlobals->weaponSelect.weaponIdx )
  {
    if ( !v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 1105, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
      __debugbreak();
    if ( LocalClientGlobals == (cg_t *)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 1106, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    v4 = DVARBOOL_bg_giveAll;
    if ( !DVARBOOL_bg_giveAll || (Dvar_CheckFrontendServerThread(DVARBOOL_bg_giveAll), !v4->current.enabled) )
    {
      if ( !v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 1089, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
        __debugbreak();
      if ( LocalClientGlobals == (cg_t *)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 1090, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
        __debugbreak();
      if ( LocalClientGlobals->weaponSelect.weaponIdx && (EquippedWeaponIndex = BG_GetEquippedWeaponIndex(v3, &LocalClientGlobals->predictedPlayerState, &LocalClientGlobals->weaponSelect), EquippedWeaponIndex >= 0) )
        v6 = (__int64)&LocalClientGlobals->predictedPlayerState.weapEquippedData[EquippedWeaponIndex];
      else
        v6 = 0i64;
      if ( !v6 )
      {
        CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(v3, &LocalClientGlobals->predictedPlayerState);
        if ( !CG_SelectWeapon((LocalClientNum_t)v1, CurrentWeaponForPlayer, 0) )
        {
          *(__m256i *)&LocalClientGlobals->weaponSelect.weaponIdx = *(__m256i *)&NULL_WEAPON.weaponIdx;
          *(_OWORD *)&LocalClientGlobals->weaponSelect.attachmentVariationIndices[5] = *(_OWORD *)&NULL_WEAPON.attachmentVariationIndices[5];
          *(double *)&LocalClientGlobals->weaponSelect.attachmentVariationIndices[21] = *(double *)&NULL_WEAPON.attachmentVariationIndices[21];
          *(_QWORD *)&LocalClientGlobals->weaponSelect.weaponCamo = *(unsigned int *)&NULL_WEAPON.weaponCamo;
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
  CgViewSystem::ViewmodelPhase v2; 
  playerState_s *p_predictedPlayerState; 
  bool v5; 
  __int16 remoteEyesEnt; 
  bool v7; 
  ViewJostleState *linkedToPlayerView; 
  scr_string_t *p_linkedTag; 
  __int64 v10; 
  CgEntitySystem *EntitySystem; 
  PlayerHandIndex v12; 
  const DObj *ClientDObj; 
  const DObj *v14; 
  scr_string_t v15; 
  scr_string_t v16; 
  bool v17; 
  int v18; 
  int v19; 
  const cpose_t *ViewModelPoseForHand; 
  CgHandler *Handler; 
  float v22; 
  unsigned __int64 numViewLinkedEnts; 
  __int64 v24; 
  __int64 v25; 
  bool v26; 
  char v27; 
  unsigned __int8 v28; 
  unsigned __int8 v29; 
  unsigned __int8 inOutIndex[4]; 
  CgViewSystem::ViewmodelPhase v31; 
  __int16 linkEnt; 
  unsigned __int64 linkIndex; 
  int modelIndex; 
  playerState_s *ps; 
  cg_t *LocalClientGlobals; 
  tmat43_t<vec3_t> outAxis; 
  tmat43_t<vec3_t> in2; 
  tmat43_t<vec3_t> out; 
  tmat33_t<vec3_t> axis; 
  WorldUpReferenceFrame v41; 
  DObjHierarchyIterator iter; 

  v31 = phase;
  v2 = phase;
  if ( (unsigned int)phase >= VM_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_view_sp.cpp", 1469, ASSERT_TYPE_ASSERT, "(unsigned)( phase ) < (unsigned)( VM_COUNT )", "phase doesn't index VM_COUNT\n\t%i not in [0, %i)", phase, 3) )
    __debugbreak();
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_FAST_LAND|WEAPON_OFFHAND_END) )
  {
    LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)this->m_localClientNum);
    if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_view_sp.cpp", 1477, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
      __debugbreak();
    p_predictedPlayerState = &LocalClientGlobals->predictedPlayerState;
    v5 = LocalClientGlobals->predictedPlayerState.numViewLinkedEnts <= 0;
    ps = &LocalClientGlobals->predictedPlayerState;
    if ( !v5 )
    {
      Profile_Begin(782);
      if ( !LocalClientGlobals->predictedPlayerState.viewLinkEntsFollowRemoteEyes || !GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&LocalClientGlobals->predictedPlayerState.otherFlags, ACTIVE, 1u) || (remoteEyesEnt = LocalClientGlobals->predictedPlayerState.remoteEyesEnt, remoteEyesEnt == 2047) || (v27 = 1, !remoteEyesEnt) )
        v27 = 0;
      linkEnt = LocalClientGlobals->predictedPlayerState.linkEnt;
      AxisCopy(&LocalClientGlobals->refdef.view.axis, (tmat33_t<vec3_t> *)&out);
      RefdefView_GetOrg(&LocalClientGlobals->refdef.view, &out.m[3]);
      MatrixInverseOrthogonal43(&out, &in2);
      v7 = LocalClientGlobals->predictedPlayerState.numViewLinkedEnts == 0;
      linkIndex = 0i64;
      if ( v7 )
        goto LABEL_58;
      linkedToPlayerView = LocalClientGlobals->linkedToPlayerView;
      p_linkedTag = &LocalClientGlobals->predictedPlayerState.viewLinkedEntityData[0].linkedTag;
      while ( 1 )
      {
        v10 = *((unsigned __int16 *)p_linkedTag + 2);
        EntitySystem = CgEntitySystem::GetEntitySystem((const LocalClientNum_t)this->m_localClientNum);
        if ( (unsigned int)v10 >= 0x800 )
        {
          LODWORD(v25) = 2048;
          LODWORD(v24) = v10;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", v24, v25) )
            __debugbreak();
        }
        v26 = 0;
        if ( !CG_ViewSP_ShouldDrawViewLinkedEntity((const LocalClientNum_t)this->m_localClientNum, &EntitySystem->m_entities[v10]) )
          goto LABEL_57;
        if ( *p_linkedTag == scr_const.tag_origin )
        {
          v26 = CG_CheckResetLinkState(p_predictedPlayerState, linkIndex, linkedToPlayerView);
          MatrixSet43(&linkedToPlayerView->viewToLinkedTagTransform, &vec3_origin, &identityMatrix33, 1.0);
          goto LABEL_54;
        }
        if ( v27 )
        {
          if ( v2 != VM_PRE_MOTION )
          {
            v26 = CG_CheckResetLinkState(p_predictedPlayerState, linkIndex, linkedToPlayerView);
            CalcNonViewmodelLinkedToPlayerView(this->m_localClientNum, &LocalClientGlobals->refdef, p_predictedPlayerState->remoteEyesEnt, *p_linkedTag, &outAxis);
            MatrixMultiply43(&outAxis, &in2, &linkedToPlayerView->viewToLinkedTagTransform);
            goto LABEL_54;
          }
          goto LABEL_57;
        }
        if ( (unsigned int)(v2 - 1) > 1 )
        {
          if ( linkEnt != 2047 )
          {
            if ( v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_view_sp.cpp", 1580, ASSERT_TYPE_ASSERT, "(phase == VM_NONE)", (const char *)&queryFormat, "phase == VM_NONE") )
              __debugbreak();
            v26 = CG_CheckResetLinkState(p_predictedPlayerState, linkIndex, linkedToPlayerView);
            CalcNonViewmodelLinkedToPlayerView(this->m_localClientNum, &LocalClientGlobals->refdef, p_predictedPlayerState->linkEnt, *p_linkedTag, &outAxis);
            MatrixMultiply43(&outAxis, &in2, &linkedToPlayerView->viewToLinkedTagTransform);
          }
          goto LABEL_54;
        }
        v12 = WEAPON_HAND_DEFAULT;
        while ( 1 )
        {
          ClientDObj = Com_GetClientDObj(v12 + 2048, this->m_localClientNum);
          v14 = ClientDObj;
          if ( !ClientDObj )
            goto LABEL_50;
          v15 = *p_linkedTag;
          inOutIndex[0] = -2;
          if ( !DObjGetBoneIndexInternal_83(ClientDObj, v15, inOutIndex, &modelIndex) )
            goto LABEL_50;
          v16 = *p_linkedTag;
          v17 = v2 == VM_PRE_MOTION;
          if ( !linkedToPlayerView && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_view_sp.cpp", 398, ASSERT_TYPE_ASSERT, "(linkState)", (const char *)&queryFormat, "linkState") )
            __debugbreak();
          if ( !linkedToPlayerView->isAttachmentCached )
          {
            v28 = -2;
            if ( !DObjGetBoneIndexInternal_83(v14, v16, &v28, &modelIndex) )
              CrashReport_TriggerNow();
            v29 = -2;
            if ( !DObjGetBoneIndexInternal_83(v14, scr_const.tag_cambone, &v29, &modelIndex) )
              goto LABEL_49;
            v18 = v28;
            linkedToPlayerView->isAttachedToCam = 0;
            v19 = DObjHierarchyIterator_Begin(&iter, v14, v18);
            if ( v19 != 255 )
            {
              while ( v19 != v29 )
              {
                v19 = DObjHierarchyIterator_NextParent(&iter);
                if ( v19 == 255 )
                  goto LABEL_46;
              }
              linkedToPlayerView->isAttachedToCam = 1;
            }
LABEL_46:
            linkedToPlayerView->isAttachmentCached = 1;
          }
          if ( v17 == linkedToPlayerView->isAttachedToCam )
          {
            v26 = CG_CheckResetLinkState(ps, linkIndex, linkedToPlayerView);
            ViewModelPoseForHand = CG_GetViewModelPoseForHand(this->m_localClientNum, v12);
            if ( CG_DObjGetWorldTagMatrix(ViewModelPoseForHand, v14, *p_linkedTag, (tmat33_t<vec3_t> *)&outAxis, &outAxis.m[3]) )
              break;
          }
LABEL_49:
          v2 = v31;
LABEL_50:
          if ( ++v12 >= NUM_WEAPON_HANDS )
            goto LABEL_53;
        }
        MatrixMultiply43(&outAxis, &in2, &linkedToPlayerView->viewToLinkedTagTransform);
LABEL_53:
        p_predictedPlayerState = ps;
LABEL_54:
        if ( v26 )
        {
          MatrixMultiply43(&linkedToPlayerView->viewToLinkedTagTransform, &out, &outAxis);
          Handler = CgHandler::getHandler(this->m_localClientNum);
          WorldUpReferenceFrame::WorldUpReferenceFrame(&v41, p_predictedPlayerState, Handler);
          WorldUpReferenceFrame::RemoveReferenceFrameFromAxis(&v41, (const tmat33_t<vec3_t> *)&outAxis, &axis);
          AxisToAngles(&axis, &linkedToPlayerView->oldLinkedTagAnglesLocal);
          v22 = outAxis.m[3].v[1];
          linkedToPlayerView->oldPos.v[0] = outAxis.m[3].v[0];
          linkedToPlayerView->oldPos.v[2] = outAxis.m[3].v[2];
          linkedToPlayerView->oldPos.v[1] = v22;
        }
        v2 = v31;
LABEL_57:
        p_linkedTag += 8;
        numViewLinkedEnts = p_predictedPlayerState->numViewLinkedEnts;
        ++linkedToPlayerView;
        if ( ++linkIndex >= numViewLinkedEnts )
        {
LABEL_58:
          Profile_EndInternal(NULL);
          return;
        }
      }
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
  __int64 v13; 
  tmat43_t<vec3_t> v14; 
  tmat43_t<vec3_t> outTagMat; 
  tmat43_t<vec3_t> out; 
  tmat43_t<vec3_t> in2; 
  tmat43_t<vec3_t> in1; 

  v13 = -2i64;
  if ( entIndex == 2047 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_view_sp.cpp", 1432, ASSERT_TYPE_ASSERT, "(entIndex != ENTITYNUM_NONE)", (const char *)&queryFormat, "entIndex != ENTITYNUM_NONE") )
    __debugbreak();
  if ( !linkedTag && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_view_sp.cpp", 1433, ASSERT_TYPE_ASSERT, "(linkedTag != ( static_cast< scr_string_t >( 0 ) ))", (const char *)&queryFormat, "linkedTag != NULL_SCR_STRING") )
    __debugbreak();
  Entity = CG_GetEntity(localClientNum, entIndex);
  p_pose = &Entity->pose;
  if ( Entity && (Entity->flags & 1) != 0 && (ClientDObj = Com_GetClientDObj(Entity->nextState.number, localClientNum)) != NULL && CG_DObjGetWorldTagMatrix(p_pose, ClientDObj, linkedTag, (tmat33_t<vec3_t> *)&outTagMat, &outTagMat.m[3]) && CG_DObjGetWorldTagMatrix(p_pose, ClientDObj, scr_const.tag_camera, (tmat33_t<vec3_t> *)&v14, &v14.m[3]) )
  {
    MatrixInverseOrthogonal43(&v14, &out);
    MatrixMultiply43(&outTagMat, &out, &in1);
    RefdefView_GetOrg(&r_refdef->view, &outOrg);
    MatrixSet43(&in2, &outOrg, &r_refdef->view.axis, 1.0);
    MatrixMultiply43(&in1, &in2, outAxis);
    memset(&outOrg, 0, sizeof(outOrg));
  }
  else
  {
    MatrixSet43(outAxis, &vec3_origin, &identityMatrix33, 1.0);
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
void CgViewSystemSP::UpdateFullFrameFX(CgViewSystemSP *this)
{
  CG_View_UpdateSceneDepthOfField((const LocalClientNum_t)this->m_localClientNum, 0, 0, 0.0, 0.0);
  CG_View_UpdateSceneLensProfile((const LocalClientNum_t)this->m_localClientNum);
  this->CalcRadialMotionBlur(this);
  CG_View_UpdateWaterSheetingFX((const LocalClientNum_t)this->m_localClientNum);
  CG_View_CalcVignette((const LocalClientNum_t)this->m_localClientNum);
  CG_View_UpdateShellShock((const LocalClientNum_t)this->m_localClientNum);
}


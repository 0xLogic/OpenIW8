/*
==============
CG_MLG_Camera_CleanupPredictedPlayerState
==============
*/

void __fastcall CG_MLG_Camera_CleanupPredictedPlayerState(const LocalClientNum_t localClientNum, CgGlobalsMP *cgameGlobMP)
{
  ?CG_MLG_Camera_CleanupPredictedPlayerState@@YAXW4LocalClientNum_t@@PEAVCgGlobalsMP@@@Z(localClientNum, cgameGlobMP);
}

/*
==============
CG_ViewMP_AddAdsDOFTraceCmd
==============
*/

void __fastcall CG_ViewMP_AddAdsDOFTraceCmd(const LocalClientNum_t localClientNum)
{
  ?CG_ViewMP_AddAdsDOFTraceCmd@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CgViewSystemMP::UpdateFullFrameFX
==============
*/

void __fastcall CgViewSystemMP::UpdateFullFrameFX(CgViewSystemMP *this)
{
  ?UpdateFullFrameFX@CgViewSystemMP@@UEBAXXZ(this);
}

/*
==============
CG_ViewMP_GetViewHandsModelName
==============
*/

const char *__fastcall CG_ViewMP_GetViewHandsModelName(const LocalClientNum_t localClientNum, const CgGlobalsMP *cgameGlob)
{
  return ?CG_ViewMP_GetViewHandsModelName@@YAPEBDW4LocalClientNum_t@@PEBVCgGlobalsMP@@@Z(localClientNum, cgameGlob);
}

/*
==============
CG_ViewMP_LastStandPoseOrderFixActive
==============
*/

bool __fastcall CG_ViewMP_LastStandPoseOrderFixActive(const LocalClientNum_t localClientNum)
{
  return ?CG_ViewMP_LastStandPoseOrderFixActive@@YA_NW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_ViewMP_Init
==============
*/

void __fastcall CG_ViewMP_Init(const LocalClientNum_t localClientNum)
{
  ?CG_ViewMP_Init@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_ViewMP_DofTraceCmd
==============
*/

void __fastcall CG_ViewMP_DofTraceCmd(const void *const cmdData)
{
  ?CG_ViewMP_DofTraceCmd@@YAXQEBX@Z(cmdData);
}

/*
==============
CG_ViewMP_DrawActiveFrame
==============
*/

int __fastcall CG_ViewMP_DrawActiveFrame(const LocalClientNum_t localClientNum, int serverTime, DemoType demoType, CubemapShot cubemapShot, int cubemapSize, int renderScreen, unsigned int drawType)
{
  return ?CG_ViewMP_DrawActiveFrame@@YAHW4LocalClientNum_t@@HW4DemoType@@W4CubemapShot@@HHI@Z(localClientNum, serverTime, demoType, cubemapShot, cubemapSize, renderScreen, drawType);
}

/*
==============
CG_MLG_Camera_ApplyUpdate
==============
*/

void __fastcall CG_MLG_Camera_ApplyUpdate(const LocalClientNum_t localClientNum, CgGlobalsMP *cgameGlobMP)
{
  ?CG_MLG_Camera_ApplyUpdate@@YAXW4LocalClientNum_t@@PEAVCgGlobalsMP@@@Z(localClientNum, cgameGlobMP);
}

/*
==============
CG_ViewMP_IsKillstreakThermalVisionOn
==============
*/

int __fastcall CG_ViewMP_IsKillstreakThermalVisionOn(const LocalClientNum_t localClientNum)
{
  return ?CG_ViewMP_IsKillstreakThermalVisionOn@@YAHW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_ViewMP_UpdateViewModelsStreamed
==============
*/

void __fastcall CG_ViewMP_UpdateViewModelsStreamed(const LocalClientNum_t localClientNum)
{
  ?CG_ViewMP_UpdateViewModelsStreamed@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CgViewSystemMP::CalcLinkedToPlayerViewTags
==============
*/

void __fastcall CgViewSystemMP::CalcLinkedToPlayerViewTags(CgViewSystemMP *this, CgViewSystem::ViewmodelPhase phase)
{
  ?CalcLinkedToPlayerViewTags@CgViewSystemMP@@UEBAXW4ViewmodelPhase@CgViewSystem@@@Z(this, phase);
}

/*
==============
CgViewSystemMP::CalcRadialMotionBlur
==============
*/

void __fastcall CgViewSystemMP::CalcRadialMotionBlur(CgViewSystemMP *this)
{
  ?CalcRadialMotionBlur@CgViewSystemMP@@UEBAXXZ(this);
}

/*
==============
CG_MLG_Freecam_UpdateState
==============
*/

bool __fastcall CG_MLG_Freecam_UpdateState(const LocalClientNum_t localClientNum, CgGlobalsMP *cgameGlobMP)
{
  return ?CG_MLG_Freecam_UpdateState@@YA_NW4LocalClientNum_t@@PEAVCgGlobalsMP@@@Z(localClientNum, cgameGlobMP);
}

/*
==============
CgViewSystemMP::SetViewValues
==============
*/

void __fastcall CgViewSystemMP::SetViewValues(CgViewSystemMP *this)
{
  ?SetViewValues@CgViewSystemMP@@UEBAXXZ(this);
}

/*
==============
CG_ViewMP_GetCorpseViewPosition
==============
*/

bool __fastcall CG_ViewMP_GetCorpseViewPosition(const LocalClientNum_t localClientNum, vec3_t *outViewOrigin, bool useTag)
{
  return ?CG_ViewMP_GetCorpseViewPosition@@YA_NW4LocalClientNum_t@@AEATvec3_t@@_N@Z(localClientNum, outViewOrigin, useTag);
}

/*
==============
CG_ViewMP_ShouldUpdatePlayerCardsStreaming
==============
*/

bool __fastcall CG_ViewMP_ShouldUpdatePlayerCardsStreaming(const LocalClientNum_t localClientNum)
{
  return ?CG_ViewMP_ShouldUpdatePlayerCardsStreaming@@YA_NW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_CameraUpdateOrderFix_AddPostPlayerStateEnts
==============
*/
void CG_CameraUpdateOrderFix_AddPostPlayerStateEnts(LocalClientNum_t localClientNum, CgEntitySystem *entitySystem)
{
  if ( !entitySystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_view_mp.cpp", 3301, ASSERT_TYPE_ASSERT, "(entitySystem)", (const char *)&queryFormat, "entitySystem") )
    __debugbreak();
  if ( localClientNum != entitySystem->m_localClientNum && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 592, ASSERT_TYPE_ASSERT, "( localClientNum ) == ( m_localClientNum )", "%s == %s\n\t%i, %i", "localClientNum", "m_localClientNum", localClientNum, entitySystem->m_localClientNum) )
    __debugbreak();
  if ( entitySystem->m_entityWork.postPsEntityCount )
    goto LABEL_12;
  if ( entitySystem->m_entityWork.postPsEntityHead != 2047 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 593, ASSERT_TYPE_ASSERT, "(m_entityWork.postPsEntityCount > 0 || m_entityWork.postPsEntityHead == ENTITYNUM_NONE)", (const char *)&queryFormat, "m_entityWork.postPsEntityCount > 0 || m_entityWork.postPsEntityHead == ENTITYNUM_NONE") )
    __debugbreak();
  if ( entitySystem->m_entityWork.postPsEntityCount )
  {
LABEL_12:
    Profile2_UpdateEntry(33);
    if ( ((unsigned __int8)&dword_14FDE8054 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &dword_14FDE8054) )
      __debugbreak();
    _InterlockedIncrement(&dword_14FDE8054);
    entitySystem->AddPostPlayerStatePacketEntities(entitySystem, (const LocalClientNum_t)localClientNum);
    Profile2_UpdateEntry(33);
    if ( ((unsigned __int64)&dword_14FDE8054 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &dword_14FDE8054) )
      __debugbreak();
    _InterlockedDecrement(&dword_14FDE8054);
  }
}

/*
==============
CG_CameraUpdateOrderFix_PostPhysicsWorkers_Phase0
==============
*/
void CG_CameraUpdateOrderFix_PostPhysicsWorkers_Phase0(CgGlobalsMP *cgameGlob)
{
  if ( !cgameGlob && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_view_mp.cpp", 3209, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  CG_ViewMP_UpdateKickAngles(cgameGlob);
}

/*
==============
CG_CameraUpdateOrderFix_PostPhysicsWorkers_Phase1
==============
*/
void CG_CameraUpdateOrderFix_PostPhysicsWorkers_Phase1(CgGlobalsMP *cgameGlob)
{
  if ( !cgameGlob && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_view_mp.cpp", 3217, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  CG_View_UpdateTurretZoom((const LocalClientNum_t)cgameGlob->localClientNum);
}

/*
==============
CG_CameraUpdateOrderFix_PostPhysicsWorkers_Phase2
==============
*/
void CG_CameraUpdateOrderFix_PostPhysicsWorkers_Phase2(CgGlobalsMP *cgameGlob)
{
  LocalClientNum_t localClientNum; 

  if ( !cgameGlob && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_view_mp.cpp", 3225, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  localClientNum = cgameGlob->localClientNum;
  CG_SmoothOutWeaponPosFracForMispredictionErrors(localClientNum);
  Sys_ProfBeginNamedEvent(0xFFFF6347, "view anim (CameraUpdateOrderFix)");
  CG_UpdateViewWeaponAnim(localClientNum);
  Sys_ProfEndNamedEvent();
  Sys_ProfBeginNamedEvent(0xFFFF6347, "view values (CameraUpdateOrderFix)");
  CG_KillCam_UpdateKillCamEntityCache(localClientNum);
  CG_PlayersMP_QueueProcessAnimationCmd(localClientNum, cgameGlob->predictedPlayerEntity, 1);
  CG_ViewMP_CalcViewValues(localClientNum);
  CG_CalloutMarkerPing_StartContextualPingWorkerThread(localClientNum);
  CG_PlayerVisibilityMP_QueueVisibilityTests(localClientNum);
  CG_PlayerVisibilityMP_DebugTest(localClientNum);
  CG_ClientAntiCheatMP_QueueTargetThroughWallsWorker(localClientNum);
  CG_KillCam_PostUpdateKillCamEntityCache(localClientNum);
  CG_PlayersMP_WaitForProcessAnimationCmds();
  CG_View_CalcUICamera(localClientNum);
  CG_View_SetViewNowDvar(localClientNum);
  CG_ViewMP_LerpKillCamView(localClientNum);
  RefdefView_GetOrg(&cgameGlob->refdef.view, &cgameGlob->lastFrameViewPos);
  CG_ViewmodelShieldHitsProcess(localClientNum);
  CG_AddViewWeapon(localClientNum);
  CG_CalloutMarkerPing_ExecuteQueuedMarkAction(localClientNum);
  Sys_ProfEndNamedEvent();
}

/*
==============
CG_MLG_Camera_ApplyUpdate
==============
*/
void CG_MLG_Camera_ApplyUpdate(const LocalClientNum_t localClientNum, CgGlobalsMP *cgameGlobMP)
{
  CgMLGCameraManager *CameraManager; 
  CameraStateInterface *MLGCurrentCameraState; 
  CgHandler *Handler; 
  int clientNum; 
  CgStatic *LocalClientStatics; 
  const vec3_t *MLGCurrentCameraPosition; 
  ClActiveClientMP *ClientMP; 
  const vec3_t *MLGCurrentCameraAngles; 
  vec3_t result; 

  CameraManager = CgMLGSpectator::GetCameraManager(cgameGlobMP->m_mlgSpectatorPtr);
  MLGCurrentCameraState = CgMLGCameraManager::GetMLGCurrentCameraState(CameraManager);
  Handler = CgHandler::getHandler(localClientNum);
  clientNum = cgameGlobMP->predictedPlayerState.clientNum;
  LocalClientStatics = CgStatic::GetLocalClientStatics((const LocalClientNum_t)Handler->m_localClientNum);
  CgStatic::GetCharacterInfo(LocalClientStatics, clientNum);
  if ( MLGCurrentCameraState )
  {
    if ( MLGCurrentCameraState->GetCameraState(MLGCurrentCameraState) != SPECTATOR_ACTIVE )
    {
      MLGCurrentCameraPosition = CgMLGCameraManager::GetMLGCurrentCameraPosition(CameraManager, &result);
      RefdefView_SetOrg(&cgameGlobMP->refdef.view, MLGCurrentCameraPosition);
      RefdefView_GetOrg(&cgameGlobMP->refdef.view, &cgameGlobMP->refdef.viewOffset);
      ClientMP = ClActiveClientMP::GetClientMP(localClientNum);
      MLGCurrentCameraAngles = CgMLGCameraManager::GetMLGCurrentCameraAngles(CameraManager, &result);
      ClActiveClient_SetCLViewangles(ClientMP, MLGCurrentCameraAngles);
      ClActiveClient_GetCLViewangles(ClientMP, &cgameGlobMP->refdefViewAngles);
      AnglesToAxis(&cgameGlobMP->refdefViewAngles, &cgameGlobMP->refdef.view.axis);
      *(double *)&_XMM0 = CgMLGCameraManager::GetMLGCurrentCameraFoV(CameraManager);
      __asm { vmovaps xmm1, xmm0; fov }
      CG_View_SetFovDvarValue(localClientNum, *(const float *)&_XMM1);
    }
  }
}

/*
==============
CG_MLG_Camera_CleanupPredictedPlayerState
==============
*/
void CG_MLG_Camera_CleanupPredictedPlayerState(const LocalClientNum_t localClientNum, CgGlobalsMP *cgameGlobMP)
{
  CgMLGCameraManager *CameraManager; 
  int FocusedPlayer; 
  characterInfo_t *CharacterInfo; 

  CameraManager = CgMLGSpectator::GetCameraManager(cgameGlobMP->m_mlgSpectatorPtr);
  FocusedPlayer = CgMLGCameraManager::GetFocusedPlayer(CameraManager, localClientNum);
  if ( FocusedPlayer == -1 || (CharacterInfo = CG_GetCharacterInfo(cgameGlobMP, FocusedPlayer)) == NULL )
  {
    cgameGlobMP->predictedPlayerState.perks = 0i64;
  }
  else
  {
    cgameGlobMP->predictedPlayerState.perks.array[0] = CharacterInfo->perks.array[0];
    cgameGlobMP->predictedPlayerState.perks.array[1] = CharacterInfo->perks.array[1];
  }
}

/*
==============
CG_MLG_Freecam_UpdateState
==============
*/
bool CG_MLG_Freecam_UpdateState(const LocalClientNum_t localClientNum, CgGlobalsMP *cgameGlobMP)
{
  CgMLGCameraManager *CameraManager; 
  CameraStateInterface *MLGCurrentCameraState; 
  __int64 v6; 
  CgHandler *Handler; 
  int clientNum; 
  CgStatic *LocalClientStatics; 

  CameraManager = CgMLGSpectator::GetCameraManager(cgameGlobMP->m_mlgSpectatorPtr);
  MLGCurrentCameraState = CgMLGCameraManager::GetMLGCurrentCameraState(CameraManager);
  v6 = (__int64)MLGCurrentCameraState;
  if ( MLGCurrentCameraState )
    v6 = (__int64)MLGCurrentCameraState->UpdateState(MLGCurrentCameraState, localClientNum);
  Handler = CgHandler::getHandler(localClientNum);
  clientNum = cgameGlobMP->predictedPlayerState.clientNum;
  LocalClientStatics = CgStatic::GetLocalClientStatics((const LocalClientNum_t)Handler->m_localClientNum);
  CgStatic::GetCharacterInfo(LocalClientStatics, clientNum);
  return v6 && (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v6 + 16i64))(v6) != 1;
}

/*
==============
CG_ViewMP_AddAdsDOFTraceCmd
==============
*/
void CG_ViewMP_AddAdsDOFTraceCmd(const LocalClientNum_t localClientNum)
{
  s_dofTraceData.clientNum = localClientNum;
  s_dofTraceData.distance = &s_dofTraceDistance;
  Sys_AddWorkerCmd(WRKCMD_CG_VIEWMP_DOFTRACE, &s_dofTraceData);
}

/*
==============
CG_ViewMP_CalcViewValues
==============
*/
void CG_ViewMP_CalcViewValues(const LocalClientNum_t localClientNum)
{
  __int64 v5; 
  CgHandler *v10; 
  char IsThirdPersonMode; 
  CgGlobalsMP *LocalClientGlobals; 
  CgGlobalsMP *v15; 
  CgMLGCameraManager *CameraManager; 
  CameraStateInterface *MLGCurrentCameraState; 
  __int64 v18; 
  CgHandler *v19; 
  int clientNum; 
  CgStatic *LocalClientStatics; 
  CgHandler *v25; 
  CgHandler *v27; 
  bool v28; 
  bool ShouldRunPrediction; 
  bool v30; 
  CgGlobalsMP *v31; 
  cg_t *v32; 
  CgWeaponMap *v33; 
  cg_t *v34; 
  CgWeaponMap *Instance; 
  char v36; 
  bool m_fixedDeathCameraIsActive; 
  bool outIsThirdPerson; 
  char v45; 
  bool outOverrideLegacyCamera; 
  int outIsRemoteEyes; 
  vec3_t outOrg; 
  BgHandler *handler; 
  vec3_t viewOrigin; 
  __int64 v51; 
  WorldUpReferenceFrame v52; 
  char v53; 
  void *retaddr; 

  _RAX = &retaddr;
  v51 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
  }
  v5 = localClientNum;
  outIsRemoteEyes = 0;
  Sys_ProfBeginNamedEvent(0xFFFF6347, "CG_ViewMP_CalcViewValues");
  _RSI = CG_GetLocalClientGlobals((const LocalClientNum_t)v5);
  *(double *)&_XMM0 = CL_Screen_GetMenuBlurRadius((LocalClientNum_t)v5);
  __asm { vmovaps xmm7, xmm0 }
  if ( CgGlobalsMP::GetLocalClientGlobals((const LocalClientNum_t)v5)->m_frontEndScene )
  {
    _RDI = DVARFLT_cg_frontEndSceneZnear;
    if ( !DVARFLT_cg_frontEndSceneZnear && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_frontEndSceneZnear") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RDI);
    __asm { vmovss  xmm6, dword ptr [rdi+28h] }
  }
  else
  {
    if ( CG_View_IsKillCamDefaultView((const LocalClientNum_t)v5) || CG_View_IsKillCamView((const LocalClientNum_t)v5) && CG_IsCinematicCameraActive((LocalClientNum_t)v5) )
      *(double *)&_XMM0 = CG_View_GetZNearDvar((const LocalClientNum_t)v5);
    else
      *(double *)&_XMM0 = CG_View_GetZNear((const LocalClientNum_t)v5);
    __asm { vmovaps xmm6, xmm0 }
  }
  v10 = CgHandler::getHandler((LocalClientNum_t)v5);
  handler = v10;
  if ( !CgWeaponMap::ms_instance[v5] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
    __debugbreak();
  IsThirdPersonMode = BG_IsThirdPersonMode(CgWeaponMap::ms_instance[v5], &_RSI->predictedPlayerState);
  v45 = IsThirdPersonMode;
  outIsThirdPerson = BG_ShouldHandleThirdPersonVehicleCamera(&_RSI->predictedPlayerState, v10);
  __asm
  {
    vmovaps xmm2, xmm7; uiBlurRadius
    vmovaps xmm1, xmm6; zNear
  }
  CG_View_SetupRefDef((const LocalClientNum_t)v5, *(const float *)&_XMM1, *(const float *)&_XMM2);
  CG_ViewMP_SetupRefDefBrCircle((const LocalClientNum_t)v5);
  if ( _RSI->cubemapShot )
  {
    CG_View_CalcCubemapViewValues((const LocalClientNum_t)v5);
    CG_ClientAntiCheatMP_ResetLastRecordedViewValues((const LocalClientNum_t)v5);
    goto LABEL_89;
  }
  if ( !CL_Cameraman_Enabled() )
  {
    s_visionSetUpdateData.cvsData = &_RSI->cvsData;
    s_visionSetUpdateData.time = _RSI->refdef.time;
    Sys_AddWorkerCmd(WRKCMD_CG_VISIONSETUPDATE, &s_visionSetUpdateData);
  }
  CG_Execution_Debug((LocalClientNum_t)v5);
  CG_View_SetupViewport((const LocalClientNum_t)v5);
  CG_View_SetupAimAssist((const LocalClientNum_t)v5);
  if ( CL_Cameraman_Enabled() )
  {
    CL_Cameraman_CalcViewValues((LocalClientNum_t)v5, 0);
    CG_View_CalcFov((const LocalClientNum_t)v5);
    CG_ClientAntiCheatMP_ResetLastRecordedViewValues((const LocalClientNum_t)v5);
    goto LABEL_89;
  }
  LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals((const LocalClientNum_t)v5);
  v15 = LocalClientGlobals;
  if ( LocalClientGlobals->m_isMLGSpectator )
  {
    CameraManager = CgMLGSpectator::GetCameraManager(LocalClientGlobals->m_mlgSpectatorPtr);
    MLGCurrentCameraState = CgMLGCameraManager::GetMLGCurrentCameraState(CameraManager);
    v18 = (__int64)MLGCurrentCameraState;
    if ( MLGCurrentCameraState )
      v18 = (__int64)MLGCurrentCameraState->UpdateState(MLGCurrentCameraState, (const LocalClientNum_t)v5);
    v19 = CgHandler::getHandler((LocalClientNum_t)v5);
    clientNum = v15->predictedPlayerState.clientNum;
    LocalClientStatics = CgStatic::GetLocalClientStatics((const LocalClientNum_t)v19->m_localClientNum);
    CgStatic::GetCharacterInfo(LocalClientStatics, clientNum);
    if ( v18 && (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v18 + 16i64))(v18) != 1 )
    {
      CG_View_CalcFov((const LocalClientNum_t)v5);
LABEL_27:
      Sys_WaitWorkerCmdsOnlyOfType(WRKCMD_CG_VISIONSETUPDATE);
      CG_View_FinalizeViewValues((const LocalClientNum_t)v5);
      CG_ClientAntiCheatMP_ResetLastRecordedViewValues((const LocalClientNum_t)v5);
      goto LABEL_89;
    }
    IsThirdPersonMode = v45;
  }
  if ( !_RSI->IsClientGamePaused(_RSI) && !Com_MP_GetShouldClientPause() )
    CG_ViewMotion_Update((const LocalClientNum_t)v5);
  if ( _RSI->predictedPlayerState.pm_type == 6 )
  {
    RefdefView_SetOrg(&_RSI->refdef.view, &_RSI->predictedPlayerState.origin);
    _RCX = &_RSI->refdefViewAngles;
    _RSI->refdefViewAngles.v[0] = _RSI->predictedPlayerState.viewangles.v[0];
    __asm
    {
      vmovss  xmm0, dword ptr [rsi+1E4h]
      vmovss  dword ptr [rcx+4], xmm0
      vmovss  xmm1, dword ptr [rsi+1E8h]
      vmovss  dword ptr [rcx+8], xmm1
    }
    AnglesToAxis(&_RSI->refdefViewAngles, &_RSI->refdef.view.axis);
LABEL_34:
    Sys_WaitWorkerCmdsOnlyOfType(WRKCMD_CG_VISIONSETUPDATE);
    CG_VisionSetApplyToRefdef(&_RSI->refdef, &_RSI->cvsData);
    CG_View_CalcFov((const LocalClientNum_t)v5);
    CG_ClientAntiCheatMP_ResetLastRecordedViewValues((const LocalClientNum_t)v5);
    goto LABEL_89;
  }
  if ( CG_View_IsKillCamEntityView((const LocalClientNum_t)v5) )
  {
    CG_KillCam_UpdateKillCamEntity((const LocalClientNum_t)v5, _RSI->killCamEntityType);
    Sys_WaitWorkerCmdsOnlyOfType(WRKCMD_CG_VISIONSETUPDATE);
    CG_VisionSetApplyToRefdef(&_RSI->refdef, &_RSI->cvsData);
    CG_View_SetHudOutline((const LocalClientNum_t)v5);
    CG_View_SetThermal((const LocalClientNum_t)v5);
    CG_ClientAntiCheatMP_ResetLastRecordedViewValues((const LocalClientNum_t)v5);
    goto LABEL_89;
  }
  if ( CG_IsCinematicCameraActive((LocalClientNum_t)v5) )
    goto LABEL_34;
  if ( _RSI->radiantCamUseOriginOverride )
    goto LABEL_27;
  v25 = CgHandler::getHandler((LocalClientNum_t)v5);
  *(double *)&_XMM0 = BG_GetSpeed(&_RSI->predictedPlayerState, _RSI->time, v25);
  __asm { vmovss  dword ptr [rsi+49D84h], xmm0 }
  Sys_ProfBeginNamedEvent(0xFFFF0000, "CG_View_CalcViewOrigin");
  CG_View_CalcViewOrigin((const LocalClientNum_t)v5);
  Sys_ProfEndNamedEvent();
  __asm { vxorps  xmm2, xmm2, xmm2; normalizedValue }
  CG_PlayerFade_SetFadeValue((const LocalClientNum_t)v5, _RSI->predictedPlayerState.clientNum, *(const float *)&_XMM2);
  outOverrideLegacyCamera = 0;
  CG_Camera_Active_Update((LocalClientNum_t)v5, &_RSI->refdef.view, &outOverrideLegacyCamera);
  if ( !outOverrideLegacyCamera )
  {
    if ( !CG_View_CalcVehicleCamera((const LocalClientNum_t)v5, &outIsRemoteEyes) )
    {
      BG_CalcLinkedViewValues(&_RSI->predictedPlayerState, &_RSI->refdefViewAngles);
      v27 = CgHandler::getHandler((LocalClientNum_t)v5);
      WorldUpReferenceFrame::WorldUpReferenceFrame(&v52, &_RSI->predictedPlayerState, v27, 1);
      WorldUpReferenceFrame::ApplyReferenceFrameToAngles(&v52, &_RSI->refdefViewAngles);
      RefdefView_GetOrg(&_RSI->refdef.view, &outOrg);
      CG_CalcErrorDecay((const LocalClientNum_t)v5, &outOrg);
      RefdefView_SetOrg(&_RSI->refdef.view, &outOrg);
      v28 = CG_GameInterface_ViewMP_UsingWorldSpaceTurret((LocalClientNum_t)v5);
      CG_View_CalcTurretCamera((const LocalClientNum_t)v5, v28);
      CG_View_CalcRemoteEyes((LocalClientNum_t)v5, &outIsRemoteEyes);
      if ( outIsRemoteEyes )
        goto LABEL_47;
      _RSI->remoteMissileCamInitialized = 0;
      CG_View_CalcCameraTweaks((const LocalClientNum_t)v5);
      CG_View_TraceProfiling((const LocalClientNum_t)v5);
      RefdefView_GetOrg(&_RSI->refdef.view, &outOrg);
      CG_View_AddViewHeight((const LocalClientNum_t)v5, &outOrg);
      RefdefView_SetOrg(&_RSI->refdef.view, &outOrg);
      ShouldRunPrediction = CG_PredictMP_ShouldRunPrediction((const LocalClientNum_t)v5);
      CG_View_OffsetFirstPersonView((const LocalClientNum_t)v5, ShouldRunPrediction, &_RSI->refdefViewAngles, &outOrg);
      RefdefView_SetOrg(&_RSI->refdef.view, &outOrg);
      CG_View_OffsetCrosshair((const LocalClientNum_t)v5, &_RSI->refdefViewAngles);
    }
    if ( !outIsRemoteEyes && !IsThirdPersonMode && !outIsThirdPerson )
    {
      v30 = 1;
LABEL_48:
      CG_View_ApplySmoothing((const LocalClientNum_t)v5, v30, &_RSI->refdefViewAngles);
      if ( !_RSI->IsClientGamePaused(_RSI) && !Com_MP_GetShouldClientPause() )
        CG_View_UpdateWeaponMovement_Post(_RSI);
      CG_View_CalcDrivingCamera((const LocalClientNum_t)v5);
      CG_ShakeCamera((LocalClientNum_t)v5);
      RefdefView_GetOrg(&_RSI->refdef.view, &outOrg);
      secure_uint32_3_t::secureInt32_3_Set(&_RSI->aimAssistEyeOrigin, (const SecureVec3 *)&outOrg);
      AnglesToAxis(&_RSI->refdefViewAngles, &_RSI->refdef.view.axis);
      v31 = CgGlobalsMP::GetLocalClientGlobals((const LocalClientNum_t)v5);
      if ( !v31 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_view_mp.cpp", 520, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
        __debugbreak();
      v31->m_fixedDeathCameraIsActive = 0;
      if ( outIsRemoteEyes )
        goto LABEL_82;
      if ( !IsThirdPersonMode && !outIsThirdPerson )
      {
        s_shakeCmdData.localClientNum = v5;
        s_shakeCmdData.cameraData = &s_shakeData;
        Sys_AddWorkerCmd(WRKCMD_SHAKE_CALC, &s_shakeCmdData);
      }
      v32 = CG_GetLocalClientGlobals((const LocalClientNum_t)v5);
      if ( !v32 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_view_mp.cpp", 428, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
        __debugbreak();
      if ( (unsigned int)(v32->predictedPlayerState.pm_type - 2) <= 1 || v32->renderingThirdPerson || (v33 = CgWeaponMap::GetInstance((const LocalClientNum_t)v5), BG_IsThirdPersonMode(v33, &v32->predictedPlayerState)) || !CG_View_ApplyLinkCameraAnimation((const LocalClientNum_t)v5) )
      {
        v34 = CG_GetLocalClientGlobals((const LocalClientNum_t)v5);
        if ( !v34 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_view_mp.cpp", 402, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
          __debugbreak();
        if ( (unsigned int)(v34->predictedPlayerState.pm_type - 5) > 1 && !v34->renderingThirdPerson )
        {
          Instance = CgWeaponMap::GetInstance((const LocalClientNum_t)v5);
          if ( !BG_IsThirdPersonMode(Instance, &v34->predictedPlayerState) )
            CG_View_CalcViewAnimation((const LocalClientNum_t)v5);
        }
      }
      CG_Camera_Vehicles_Update((LocalClientNum_t)v5, &outIsThirdPerson, &_RSI->refdef.view);
      if ( !outIsThirdPerson && _RSI->renderingThirdPerson && BG_GetRemoteControlledVehicleEntityNum(&_RSI->predictedPlayerState, handler) == 2047 )
      {
        CG_ViewMP_OffsetThirdPersonView((const LocalClientNum_t)v5);
        v36 = v45;
      }
      else
      {
        v36 = v45;
        if ( !v45 )
          goto LABEL_79;
        CG_ViewMP_UpdateThirdPersonMode((LocalClientNum_t)v5, &_RSI->baseGunAngles);
      }
      if ( v36 )
      {
LABEL_81:
        CG_GameInterface_ViewMP_FinalizeNonRemoteView((LocalClientNum_t)v5);
        AnglesToAxis(&_RSI->refdefViewAngles, &_RSI->refdef.view.axis);
        CG_PerturbCamera(_RSI);
LABEL_82:
        memset(&outOrg, 0, sizeof(outOrg));
        goto LABEL_83;
      }
LABEL_79:
      if ( !outIsThirdPerson )
      {
        Sys_WaitWorkerCmdsOfType(WRKCMD_SHAKE_CALC);
        RefdefView_GetOrg(&_RSI->refdef.view, &outOrg);
        CG_Shake_ApplyHandheldCamera((const LocalClientNum_t)v5, &s_shakeData.handheldTranslation, &s_shakeData.impulseTranslation, &s_shakeData.handheldAngles, &s_shakeData.impulseAngles, &outOrg, &_RSI->refdefViewAngles);
        RefdefView_SetOrg(&_RSI->refdef.view, &outOrg);
      }
      goto LABEL_81;
    }
LABEL_47:
    v30 = 0;
    goto LABEL_48;
  }
LABEL_83:
  _RDI = CgGlobalsMP::GetLocalClientGlobals((const LocalClientNum_t)v5);
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_view_mp.cpp", 529, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  m_fixedDeathCameraIsActive = _RDI->m_fixedDeathCameraIsActive;
  _RDI->m_fixedDeathCameraWasActive = m_fixedDeathCameraIsActive;
  if ( !m_fixedDeathCameraIsActive )
    RefdefView_GetOrg(&_RDI->refdef.view, &_RDI->m_fixedDeathCameraPos);
  _RDI->m_fixedDeathCameraPrevAngles.v[0] = _RDI->refdefViewAngles.v[0];
  __asm
  {
    vmovss  xmm0, dword ptr [rdi+178C4h]
    vmovss  dword ptr [rdi+0C6620h], xmm0
    vmovss  xmm1, dword ptr [rdi+178C8h]
    vmovss  dword ptr [rdi+0C6624h], xmm1
  }
  Sys_WaitWorkerCmdsOnlyOfType(WRKCMD_CG_VISIONSETUPDATE);
  Sys_ProfBeginNamedEvent(0xFFFF0000, "CG_View_FinalizeViewValues");
  CG_View_FinalizeViewValues((const LocalClientNum_t)v5);
  Sys_ProfEndNamedEvent();
  RefdefView_GetOrg(&_RSI->refdef.view, &viewOrigin);
  CG_ClientAntiCheatMP_LogViewValues((const LocalClientNum_t)v5, &_RSI->refdefViewAngles, &viewOrigin, _RSI->time);
  CG_DrawDebug_Player_ViewValues((LocalClientNum_t)v5);
  AdvancedSwayState::DebugDraw(&_RSI->vmMotionState, (const LocalClientNum_t)v5);
  memset(&viewOrigin, 0, sizeof(viewOrigin));
LABEL_89:
  Sys_ProfEndNamedEvent();
  _R11 = &v53;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
  }
}

/*
==============
CG_ViewMP_DofTraceCmd
==============
*/
void CG_ViewMP_DofTraceCmd(const void *const cmdData)
{
  LocalClientNum_t v2; 
  cg_t *LocalClientGlobals; 
  int clientNum; 
  int skipEntityCount; 
  centity_t *TurretEntity; 
  vec3_t outOrg; 
  int skipEntities; 
  int number; 
  __int64 v39; 
  vec3_t end; 
  trace_t results; 

  v39 = -2i64;
  _RBP = *((_QWORD *)cmdData + 1);
  v2 = *(_DWORD *)cmdData;
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)*(_DWORD *)cmdData);
  clientNum = LocalClientGlobals->predictedPlayerState.clientNum;
  RefdefView_GetOrg(&LocalClientGlobals->refdef.view, &outOrg);
  __asm
  {
    vmovss  xmm3, cs:__real@46000000
    vmulss  xmm0, xmm3, dword ptr [rdi+6944h]
    vaddss  xmm1, xmm0, dword ptr [rsp+108h+outOrg]
    vmovss  dword ptr [rsp+108h+end], xmm1
    vmulss  xmm0, xmm3, dword ptr [rdi+6948h]
    vaddss  xmm1, xmm0, dword ptr [rsp+108h+outOrg+4]
    vmovss  dword ptr [rsp+108h+end+4], xmm1
    vmulss  xmm0, xmm3, dword ptr [rdi+694Ch]
    vaddss  xmm1, xmm0, dword ptr [rsp+108h+outOrg+8]
    vmovss  dword ptr [rsp+108h+end+8], xmm1
  }
  skipEntities = clientNum;
  number = 2047;
  skipEntityCount = 1;
  TurretEntity = CG_GetTurretEntity(v2);
  if ( TurretEntity && (TurretEntity->flags & 1) != 0 )
  {
    number = TurretEntity->nextState.number;
    skipEntityCount = 2;
  }
  PhysicsQuery_LegacyTraceSkipEntities((Physics_WorldId)(3 * v2 + 2), &results, &outOrg, &end, &bounds_origin, &skipEntities, skipEntityCount, 0, 41969953, 0, NULL, All);
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+108h+end]
    vsubss  xmm1, xmm0, dword ptr [rsp+108h+outOrg]
    vmovss  xmm3, [rsp+108h+results.fraction]
    vmulss  xmm1, xmm1, xmm3
    vaddss  xmm4, xmm1, dword ptr [rsp+108h+outOrg]
    vmovss  xmm0, dword ptr [rsp+108h+end+4]
    vsubss  xmm1, xmm0, dword ptr [rsp+108h+outOrg+4]
    vmulss  xmm2, xmm1, xmm3
    vaddss  xmm5, xmm2, dword ptr [rsp+108h+outOrg+4]
    vmovss  xmm0, dword ptr [rsp+108h+end+8]
    vsubss  xmm1, xmm0, dword ptr [rsp+108h+outOrg+8]
    vmulss  xmm2, xmm1, xmm3
    vaddss  xmm3, xmm2, dword ptr [rsp+108h+outOrg+8]
    vsubss  xmm4, xmm4, dword ptr [rsp+108h+outOrg]
    vsubss  xmm0, xmm5, dword ptr [rsp+108h+outOrg+4]
    vsubss  xmm5, xmm3, dword ptr [rsp+108h+outOrg+8]
    vmulss  xmm1, xmm0, xmm0
    vmulss  xmm0, xmm4, xmm4
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm5, xmm5
    vaddss  xmm2, xmm2, xmm1
    vsqrtss xmm0, xmm2, xmm2
    vmovss  dword ptr [rbp+0], xmm0
  }
  memset(&outOrg, 0, sizeof(outOrg));
}

/*
==============
CG_ViewMP_DrawActiveFrame
==============
*/
__int64 CG_ViewMP_DrawActiveFrame(const LocalClientNum_t localClientNum, int serverTime, DemoType demoType, CubemapShot cubemapShot, int cubemapSize, int renderScreen, unsigned int drawType)
{
  __int64 v18; 
  const dvar_t *v19; 
  const dvar_t *v20; 
  CgStatic *LocalClientStatics; 
  __int64 v23; 
  const dvar_t *v24; 
  cg_t *LocalClientGlobals; 
  playerState_s *p_predictedPlayerState; 
  int clientNum; 
  __int64 v28; 
  cg_t *v29; 
  int time; 
  int v31; 
  cg_t *v32; 
  __int64 v38; 
  __int64 v39; 
  int inKillCam; 
  const cg_t *v41; 
  const dvar_t *v42; 
  const cg_t *v43; 
  unsigned int i; 
  const snapshot_t *nextSnap; 
  __int64 v46; 
  CgMLGCameraManager *CameraManager; 
  int FocusedPlayer; 
  characterInfo_t *v51; 
  CgMLGCameraManager *v52; 
  CameraStateInterface *MLGCurrentCameraState; 
  CgHandler *Handler; 
  int v55; 
  CgStatic *v56; 
  const vec3_t *MLGCurrentCameraPosition; 
  ClActiveClientMP *ClientMP; 
  const vec3_t *MLGCurrentCameraAngles; 
  const snapshot_t *snap; 
  const snapshot_t *v66; 
  unsigned int v67; 
  const CgSnapshotMP *PrevSnap; 
  int shellshockIndex; 
  int shellshockDuration; 
  int shellshockTime; 
  const shellshock_parms_t *ShellshockParms; 
  int renderingThirdPerson; 
  bool v74; 
  __int16 activeExecutionPartnerEntNum; 
  bool v76; 
  CgAntiLag *Instance; 
  CgEntitySystem *v80; 
  CgBallistics *System; 
  Physics_WorldId v82; 
  CgClientSideEffectsSystem *v84; 
  bool ShouldSkipPredictionForGameplay; 
  CgGlobalsMP *v97; 
  CgGlobalsMP *v98; 
  const char *ViewHandsModelName; 
  XModel *v100; 
  CgGlobalsMP *v101; 
  const dvar_t *v102; 
  centity_t *predictedPlayerEntity; 
  CgWeaponSystem *v104; 
  char v108; 
  char v109; 
  int IsPlayerZeroG; 
  int thermalVisionActive; 
  bool ShouldClientPause; 
  __int64 v119; 
  __int64 v120; 
  float fmt; 
  __int64 isZeroG; 
  __int64 isZeroGa; 
  int isZeroGb; 
  __int64 inPip; 
  __int64 inPipa; 
  bool enabled; 
  bool v133; 
  int v134; 
  CgStatic *v135; 
  CgEntitySystem *entitySystem; 
  CgVehicleSystem *VehicleSystem; 
  CgClientSideEffectsSystem *v138; 
  characterInfo_t *CharacterInfo; 
  CgWeaponSystem *v140; 
  CgSoundSystem *SoundSystem; 
  CgViewSystem *ViewSystem; 
  playerState_s *v143; 
  SecureVec3 v144; 
  SecureVec3 outData; 
  vec3_t position; 
  __int64 v147; 
  vec3_t clientPos; 
  vec3_t outOrg; 
  vec4_t out; 
  vec3_t result; 
  vec3_t v152; 
  char v153; 
  void *retaddr; 

  _RAX = &retaddr;
  v147 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm8
    vmovaps xmmword ptr [rax-78h], xmm9
  }
  v18 = localClientNum;
  v19 = DCONST_DVARBOOL_bg_cameraUpdateOrderFix;
  if ( !DCONST_DVARBOOL_bg_cameraUpdateOrderFix && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_cameraUpdateOrderFix") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v19);
  enabled = v19->current.enabled;
  v20 = DCONST_DVARBOOL_cg_localPlayerDObjFrameOrderFix;
  if ( !DCONST_DVARBOOL_cg_localPlayerDObjFrameOrderFix && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_localPlayerDObjFrameOrderFix") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v20);
  v133 = v20->current.enabled;
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_view_mp.cpp", 3439, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  Profile2_UpdateEntry(30);
  if ( ((unsigned __int8)&dword_14FDE8048 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &dword_14FDE8048) )
    __debugbreak();
  _InterlockedIncrement(&dword_14FDE8048);
  R_ClearScene();
  Sys_ProfBeginNamedEvent(0xFFFF6347, "clear scene view");
  R_ClearSceneView((LocalClientNum_t)v18);
  Sys_ProfEndNamedEvent();
  Sys_ProfBeginNamedEvent(0xFFFF6347, "Reset Entity Pose State");
  if ( (_BYTE)CgEntitySystem::ms_allocatedType != HALF_HALF )
  {
    LODWORD(inPip) = v18;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 299, ASSERT_TYPE_ASSERT, "(ms_allocatedType == SubSystem::ENTITY_SYSTEM_TYPE)", "%s\n\tTrying to access the entity system for localClientNum %d but the entity system type does not match-> System Type:%d  Allocated Type:%d\n", "ms_allocatedType == SubSystem::ENTITY_SYSTEM_TYPE", inPip, 2, (unsigned __int8)CgEntitySystem::ms_allocatedType) )
      __debugbreak();
  }
  if ( (unsigned int)v18 >= CgEntitySystem::ms_allocatedCount )
  {
    LODWORD(inPip) = CgEntitySystem::ms_allocatedCount;
    LODWORD(isZeroG) = v18;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 300, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", isZeroG, inPip) )
      __debugbreak();
  }
  if ( !CgEntitySystem::ms_entitySystemArray[v18] )
  {
    LODWORD(inPip) = v18;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 301, ASSERT_TYPE_ASSERT, "(ms_entitySystemArray[localClientNum])", "%s\n\tTrying to access unallocated entity system for localClientNum %d\n", "ms_entitySystemArray[localClientNum]", inPip) )
      __debugbreak();
  }
  CgEntitySystemMP::ResetEntityPoseState((CgEntitySystemMP *)CgEntitySystem::ms_entitySystemArray[v18]);
  Sys_ProfEndNamedEvent();
  CG_LaserClearUnused((const LocalClientNum_t)v18);
  FX_BeginMarks((LocalClientNum_t)v18, serverTime);
  if ( ClStatic::IsFirstActiveGameLocalClient(&cls, (LocalClientNum_t)v18) )
    FX_MarksCacheWorldCells(g_worldDraw);
  FX_BeginUpdateView((LocalClientNum_t)v18);
  ScrPlace_BeginDisplayView();
  _RBP = CgGlobalsMP::GetLocalClientGlobals((const LocalClientNum_t)v18);
  LocalClientStatics = CgStatic::GetLocalClientStatics((const LocalClientNum_t)v18);
  v135 = LocalClientStatics;
  SoundSystem = CgSoundSystem::GetSoundSystem((const LocalClientNum_t)v18);
  entitySystem = CgEntitySystem::GetEntitySystem((const LocalClientNum_t)v18);
  if ( !(_BYTE)CgClientSideEffectsSystem::ms_allocatedType )
  {
    LODWORD(inPip) = v18;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_side_effects.h", 310, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the client-side effects system for localClientNum %d but the client-side effects system type is not known\n", "ms_allocatedType != GameModeType::NONE", inPip) )
      __debugbreak();
  }
  if ( (unsigned int)v18 >= CgClientSideEffectsSystem::ms_allocatedCount )
  {
    LODWORD(inPip) = CgClientSideEffectsSystem::ms_allocatedCount;
    LODWORD(isZeroG) = v18;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_side_effects.h", 311, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", isZeroG, inPip) )
      __debugbreak();
  }
  if ( !CgClientSideEffectsSystem::ms_cseSystemArray[v18] )
  {
    LODWORD(inPip) = v18;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_side_effects.h", 312, ASSERT_TYPE_ASSERT, "(ms_cseSystemArray[localClientNum])", "%s\n\tTrying to access unallocated client-side effects system for localClientNum %d\n", "ms_cseSystemArray[localClientNum]", inPip) )
      __debugbreak();
  }
  v138 = CgClientSideEffectsSystem::ms_cseSystemArray[v18];
  if ( CgWeaponSystem::ms_allocatedType == WEAPONS_TYPE_NONE )
  {
    LODWORD(inPip) = v18;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapons.h", 530, ASSERT_TYPE_ASSERT, "(ms_allocatedType != CgWeaponsType::WEAPONS_TYPE_NONE)", "%s\n\tTrying to access the weapon system for localClientNum %d but the weapon system type is not known\n", "ms_allocatedType != CgWeaponsType::WEAPONS_TYPE_NONE", inPip) )
      __debugbreak();
  }
  if ( (unsigned int)v18 >= CgWeaponSystem::ms_allocatedCount )
  {
    LODWORD(inPip) = CgWeaponSystem::ms_allocatedCount;
    LODWORD(isZeroG) = v18;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapons.h", 531, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", isZeroG, inPip) )
      __debugbreak();
  }
  if ( !CgWeaponSystem::ms_weaponSystemArray[v18] )
  {
    LODWORD(inPip) = v18;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapons.h", 532, ASSERT_TYPE_ASSERT, "(ms_weaponSystemArray[localClientNum])", "%s\n\tTrying to access unallocated weapon system for localClientNum %d\n", "ms_weaponSystemArray[localClientNum]", inPip) )
      __debugbreak();
  }
  v140 = CgWeaponSystem::ms_weaponSystemArray[v18];
  ViewSystem = CgViewSystem::GetViewSystem((const LocalClientNum_t)v18);
  VehicleSystem = CgVehicleSystem::GetVehicleSystem((const LocalClientNum_t)v18);
  memset_0(&_RBP->viewModelQueuedRenderInfo, 0, 0xD0ui64);
  _RBP->viewModelQueuedRenderInfo.m_enabled = enabled;
  v23 = (__int64)LocalClientStatics->GetAnimStatics(LocalClientStatics);
  if ( !v23 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_view_mp.cpp", 3475, ASSERT_TYPE_ASSERT, "(cgameAnim)", (const char *)&queryFormat, "cgameAnim") )
    __debugbreak();
  g_activeRefDef = &_RBP->refdef;
  _RBP->refdef.deferredScreenshotIndex = R_Screenshot_ConsumeDeferredRequest();
  _RBP->oldTime = _RBP->time;
  v24 = DVARBOOL_mp_paused;
  if ( !DVARBOOL_mp_paused && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mp_paused") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v24);
  if ( v24->current.enabled )
    serverTime = _RBP->time;
  else
    _RBP->time = serverTime;
  *(_DWORD *)(v23 + 19528) = serverTime;
  _RBP->demoType = demoType;
  _RBP->cubemapShot = cubemapShot;
  _RBP->cubemapSize = cubemapSize;
  _RBP->renderScreen = renderScreen;
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)v18);
  p_predictedPlayerState = &LocalClientGlobals->predictedPlayerState;
  v143 = &LocalClientGlobals->predictedPlayerState;
  if ( LocalClientGlobals == (cg_t *)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_view_mp.cpp", 3502, ASSERT_TYPE_ASSERT, "(predictedPlayerState)", (const char *)&queryFormat, "predictedPlayerState") )
    __debugbreak();
  clientNum = p_predictedPlayerState->clientNum;
  v28 = (__int64)v135;
  v29 = CG_GetLocalClientGlobals((const LocalClientNum_t)v135->m_localClientNum);
  if ( !v29 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static_inline.h", 25, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  CharacterInfo = CG_GetCharacterInfo(v29, clientNum);
  time = _RBP->time;
  v31 = time - _RBP->oldTime;
  _RBP->frametime = v31;
  _RBP->originInterpolated = 0;
  if ( v31 < 0 )
  {
    _RBP->frametime = 0;
    _RBP->oldTime = time;
  }
  CG_DrawNetMP_AddLagometerFrameInfo(_RBP);
  CG_ClientNetPerf_AddFrameInfo(_RBP);
  *(_DWORD *)(v23 + 19540) = _RBP->frametime;
  v32 = CG_GetLocalClientGlobals((const LocalClientNum_t)v18);
  RefdefView_GetOrg(&v32->refdef.view, &outOrg);
  *(double *)&_XMM0 = Com_GetTimeScale();
  __asm
  {
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, dword ptr [rbp+65E4h]
    vmovss  xmm9, cs:__real@3a83126f
    vmulss  xmm1, xmm1, xmm9
    vmulss  xmm1, xmm0, xmm1; timeStep
  }
  Cloth_Update_FrameFlip(v18, *(const float *)&_XMM1, &outOrg);
  CG_CalloutMarkerPing_OnBeginDrawActiveFrame((LocalClientNum_t)v18);
  v38 = tls_index;
  v39 = *((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index);
  if ( *(_QWORD *)(v39 + 272) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static.h", 84, ASSERT_TYPE_ASSERT, "( ( ms_activeBgs == 0 ) )", "( ms_activeBgs ) = %p", *(const void **)(v39 + 272)) )
    __debugbreak();
  if ( !(_BYTE)CgStatic::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static.h", 85, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to set the active bgs to the client game static but the allocated type is not known.", "ms_allocatedType != GameModeType::NONE") )
    __debugbreak();
  if ( (unsigned int)v18 >= LODWORD(CgStatic::ms_allocatedCount) )
  {
    *(float *)&inPip = CgStatic::ms_allocatedCount;
    LODWORD(isZeroG) = v18;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static.h", 86, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", isZeroG, inPip) )
      __debugbreak();
  }
  if ( !CgStatic::ms_cgameStaticsArray[v18] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static.h", 87, ASSERT_TYPE_ASSERT, "(ms_cgameStaticsArray[localClientNum] != 0)", "%s\n\tTrying to set the active bgs to the client game static but the client game static has not been allocated", "ms_cgameStaticsArray[localClientNum] != NULL") )
    __debugbreak();
  *(_QWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + v38) + 272i64) = CgStatic::ms_cgameStaticsArray[v18];
  if ( CG_Snapshot_GetSnapshotType() != SNAP_TYPE_MP )
  {
    LODWORD(inPip) = CG_Snapshot_GetSnapshotType();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_view_mp.cpp", 3549, ASSERT_TYPE_ASSERT, "(CG_Snapshot_GetSnapshotType() == CgSnapshotType::SNAP_TYPE_MP)", "%s\n\tCG_ViewMP_UpdateSceneDepthOfField: Trying to get multiplayer snapshot but no multiplayer snapshots have been allocated. CgSnapshotType:%d\n", "CG_Snapshot_GetSnapshotType() == CgSnapshotType::SNAP_TYPE_MP", inPip) )
      __debugbreak();
  }
  CG_SnapshotMP_GetPrevSnap((const LocalClientNum_t)v18);
  Sys_ProfBeginNamedEvent(0xFFFF6347, "Physics Wait Pre ProcSnap");
  Physics_WaitForAllCommandsToFinish();
  Sys_ProfEndNamedEvent();
  CG_Foliage_WaitForProcessCharacterEntityCmds();
  CG_ClientAntiCheatMP_WaitForAllWorkers();
  CG_PlayerVisibilityMP_WaitForAllWorkers();
  if ( CG_PlayersMP_IsWeaponVisibilityTestActive((const LocalClientNum_t)v18) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_view_mp.cpp", 3573, ASSERT_TYPE_ASSERT, "( !CG_PlayersMP_IsWeaponVisibilityTestActive( localClientNum ) )", "Weapon visibility must complete before setNextSnap. This impacts dobj creation and animation") )
    __debugbreak();
  inKillCam = _RBP->inKillCam;
  if ( CL_TransientsCommonMP_AnyUnloadsProcessed() )
  {
    v41 = CG_GetLocalClientGlobals((const LocalClientNum_t)v18);
    if ( !CG_ViewMP_HasViewModelsStreamed(v41) )
    {
      CG_Weapon_FreeViewModelDobj((const LocalClientNum_t)v18);
      CG_Globals_ResetPlayerWeaponInfo((const LocalClientNum_t)v18);
    }
  }
  CG_SnapshotMP_ProcessSnapshots((const LocalClientNum_t)v18);
  CG_DistanceCacheMP_CacheLocalClientPlayerState((const LocalClientNum_t)v18);
  CG_Radar_ClearJamming((const LocalClientNum_t)v18);
  CG_CorpseFade_Update((const LocalClientNum_t)v18);
  CG_WeaponFade_Update((const LocalClientNum_t)v18);
  CG_PlayerFade_Update((const LocalClientNum_t)v18);
  if ( v31 < 0 && _RBP->inKillCam == inKillCam )
    FX_RewindTo((LocalClientNum_t)v18, _RBP->time, v31);
  v42 = DCONST_DVARBOOL_cg_skipStreamedModelValidation;
  if ( !DCONST_DVARBOOL_cg_skipStreamedModelValidation && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_skipStreamedModelValidation") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v42);
  if ( !v42->current.enabled )
  {
    v43 = CG_GetLocalClientGlobals((const LocalClientNum_t)v18);
    if ( !CG_ViewMP_HasViewModelsStreamed(v43) )
    {
      for ( i = 0; i < 2; ++i )
        DObjDumpInfo(v43->m_weaponHand[i].viewModelDObj);
      v28 = (__int64)v135;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_view_mp.cpp", 3188, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "One or more view model has been unloaded. The view model should have been freed before unloading.") )
        __debugbreak();
    }
  }
  if ( !_RBP->renderScreen || (nextSnap = _RBP->nextSnap) == NULL || (nextSnap->snapFlags & 2) != 0 )
  {
    CgStatic::ClearActiveStatics((const LocalClientNum_t)v18);
    Profile2_UpdateEntry(30);
    if ( ((unsigned __int64)&dword_14FDE8048 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &dword_14FDE8048) )
      __debugbreak();
    _InterlockedDecrement(&dword_14FDE8048);
    goto LABEL_279;
  }
  if ( CL_Main_IsServerLoadingMap() )
  {
    CgStatic::ClearActiveStatics((const LocalClientNum_t)v18);
    Profile2_End(30);
LABEL_279:
    v120 = 0i64;
    goto LABEL_280;
  }
  CL_MainMP_SetWaitingOnServerToLoadMap((LocalClientNum_t)v18, 0);
  v46 = *(_QWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + v38) + 272i64);
  if ( (!v46 || v28 != v46) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_view_mp.cpp", 3635, ASSERT_TYPE_ASSERT, "(BgStatic::HasActiveStatics() && (cgameStatic == BgStatic::GetActiveStatics()))", "%s\n\tEntering client game processing loop without a valid client game state", "BgStatic::HasActiveStatics() && (cgameStatic == BgStatic::GetActiveStatics())") )
    __debugbreak();
  if ( !_RBP->snap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_view_mp.cpp", 3637, ASSERT_TYPE_ASSERT, "(cgameGlob->snap)", (const char *)&queryFormat, "cgameGlob->snap") )
    __debugbreak();
  if ( !_RBP->nextSnap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_view_mp.cpp", 3638, ASSERT_TYPE_ASSERT, "(cgameGlob->nextSnap)", (const char *)&queryFormat, "cgameGlob->nextSnap") )
    __debugbreak();
  CG_PredictMP_SetupPlayerState((LocalClientNum_t)v18);
  if ( Sys_ExistsWorkerCmdsOfType(WRKCMD_TRACE) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_view_mp.cpp", 3643, ASSERT_TYPE_ASSERT, "(!Sys_ExistsWorkerCmdsOfType( WRKCMD_TRACE ))", (const char *)&queryFormat, "!Sys_ExistsWorkerCmdsOfType( WRKCMD_TRACE )") )
    __debugbreak();
  if ( Sys_ExistsWorkerCmdsOfType(WRKCMD_TRACE_AIM_TARGET) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_view_mp.cpp", 3644, ASSERT_TYPE_ASSERT, "(!Sys_ExistsWorkerCmdsOfType( WRKCMD_TRACE_AIM_TARGET ))", (const char *)&queryFormat, "!Sys_ExistsWorkerCmdsOfType( WRKCMD_TRACE_AIM_TARGET )") )
    __debugbreak();
  CL_Main_ResetSkeletonCache();
  if ( ClStatic::IsFirstActiveGameLocalClient(&cls, (LocalClientNum_t)v18) )
    XAnimProceduralBonesAllocator_BeginClientFrame();
  Ragdoll_PreUpdate((LocalClientNum_t)v18);
  Ragdoll_UpdateRestFx((LocalClientNum_t)v18);
  CG_DrawDebug_Player((LocalClientNum_t)v18);
  RefdefView_SetOrg(&_RBP->refdef.view, &_RBP->refdef.viewOffset);
  if ( _RBP->radiantCamUseOriginOverride )
  {
    RefdefView_SetOrg(&_RBP->refdef.view, &_RBP->radiantCameraOrigin);
    _RCX = &_RBP->refdefViewAngles;
    _RBP->refdefViewAngles.v[0] = _RBP->radiantCameraAngles.v[0];
    __asm
    {
      vmovss  xmm0, dword ptr [rbp+18058h]
      vmovss  dword ptr [rcx+4], xmm0
      vmovss  xmm1, dword ptr [rbp+1805Ch]
      vmovss  dword ptr [rcx+8], xmm1
    }
    AnglesToAxis(&_RBP->refdefViewAngles, &_RBP->refdef.view.axis);
    RefdefView_GetOrg(&_RBP->refdef.view, &_RBP->refdef.viewOffset);
  }
  if ( _RBP->m_isMLGSpectator )
  {
    CameraManager = CgMLGSpectator::GetCameraManager(_RBP->m_mlgSpectatorPtr);
    FocusedPlayer = CgMLGCameraManager::GetFocusedPlayer(CameraManager, (const LocalClientNum_t)v18);
    if ( FocusedPlayer == -1 || (v51 = CG_GetCharacterInfo(_RBP, FocusedPlayer)) == NULL )
    {
      _RBP->predictedPlayerState.perks = 0i64;
    }
    else
    {
      _RBP->predictedPlayerState.perks.array[0] = v51->perks.array[0];
      _RBP->predictedPlayerState.perks.array[1] = v51->perks.array[1];
    }
    v52 = CgMLGSpectator::GetCameraManager(_RBP->m_mlgSpectatorPtr);
    MLGCurrentCameraState = CgMLGCameraManager::GetMLGCurrentCameraState(v52);
    Handler = CgHandler::getHandler((LocalClientNum_t)v18);
    v55 = _RBP->predictedPlayerState.clientNum;
    v56 = CgStatic::GetLocalClientStatics((const LocalClientNum_t)Handler->m_localClientNum);
    CgStatic::GetCharacterInfo(v56, v55);
    if ( MLGCurrentCameraState )
    {
      if ( MLGCurrentCameraState->GetCameraState(MLGCurrentCameraState) != SPECTATOR_ACTIVE )
      {
        MLGCurrentCameraPosition = CgMLGCameraManager::GetMLGCurrentCameraPosition(v52, &result);
        RefdefView_SetOrg(&_RBP->refdef.view, MLGCurrentCameraPosition);
        RefdefView_GetOrg(&_RBP->refdef.view, &_RBP->refdef.viewOffset);
        ClientMP = ClActiveClientMP::GetClientMP((const LocalClientNum_t)v18);
        MLGCurrentCameraAngles = CgMLGCameraManager::GetMLGCurrentCameraAngles(v52, &v152);
        ClActiveClient_SetCLViewangles(ClientMP, MLGCurrentCameraAngles);
        ClActiveClient_GetCLViewangles(ClientMP, &_RBP->refdefViewAngles);
        AnglesToAxis(&_RBP->refdefViewAngles, &_RBP->refdef.view.axis);
        *(double *)&_XMM0 = CgMLGCameraManager::GetMLGCurrentCameraFoV(v52);
        __asm { vmovaps xmm1, xmm0; fov }
        CG_View_SetFovDvarValue((const LocalClientNum_t)v18, *(const float *)&_XMM1);
      }
    }
  }
  _RBP->refdef.time = _RBP->time;
  _RBP->refdef.frameTime = _RBP->frametime;
  if ( CL_Cameraman_Enabled() )
    CL_Cameraman_CalcViewValues((LocalClientNum_t)v18, 1);
  if ( CG_IsCinematicCameraActive((LocalClientNum_t)v18) )
    CG_UpdateCinematicCamera((LocalClientNum_t)v18);
  __asm
  {
    vmovss  xmm8, cs:__real@3f800000
    vmovaps xmm1, xmm8; lodOverride
  }
  R_SetLodOrigin(&_RBP->refdef, *(float *)&_XMM1);
  __asm { vxorps  xmm7, xmm7, xmm7 }
  if ( !Dvar_GetBool_Internal_DebugName(DVARBOOL_cg_umbraWorstCaseMinObjectContributionEnabled, "cg_umbraWorstCaseMinObjectContributionEnabled") || Com_FrontEndScene_IsActive() || !CL_TransientsWorldMP_IsActive() || CL_TransientsWorldMP_AnyTilesVisibleAtLOD((const LocalClientNum_t)v18, 0) )
    __asm { vxorps  xmm0, xmm0, xmm0; umbraWorstCaseMinObjectContribution }
  else
    *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_cg_umbraWorstCaseMinObjectContributionValue, "cg_umbraWorstCaseMinObjectContributionValue");
  R_SetWorstCaseMinObjectContribution(*(const float *)&_XMM0);
  snap = _RBP->snap;
  v66 = _RBP->nextSnap;
  v67 = BG_Omnvar_PerSnapCount();
  CG_Omnvar_UpdateInterpolation((const LocalClientNum_t)v18, v67, (const OmnvarData *const)((char *)&snap[44772].__vftable + 4), (const OmnvarData *const)((char *)&v66[44772].__vftable + 4));
  if ( CG_GetOmnvar_IntegerByName((LocalClientNum_t)v18, "post_game_state", &v134, NULL, NULL) && v134 == 5 )
  {
    CL_TransientsWorldMP_OnFrontendPreload();
    Com_FastFile_SetFrontendPreloadRequest();
  }
  CG_ViewMP_UpdateActiveLocalGameClient(_RBP, (LocalClientNum_t)v18);
  CG_ProcessRadiantCmds(RADIANT_GAMEMODE_MP);
  PrevSnap = CG_SnapshotMP_GetPrevSnap((const LocalClientNum_t)v18);
  shellshockIndex = PrevSnap->ps.shellshockIndex;
  if ( shellshockIndex )
  {
    shellshockDuration = PrevSnap->ps.shellshockDuration;
    shellshockTime = PrevSnap->ps.shellshockTime;
  }
  else
  {
    shellshockDuration = _RBP->testShock.duration;
    shellshockTime = _RBP->testShock.cg_t::time;
  }
  ShellshockParms = BG_GetShellshockParms(shellshockIndex);
  CG_StartShellShock(_RBP, ShellshockParms, shellshockTime, shellshockDuration);
  CG_UpdateShellShock((LocalClientNum_t)v18, _RBP->shellshock.parms, _RBP->shellshock.startTime, _RBP->shellshock.duration);
  CG_Execution_CheckEndCamera((LocalClientNum_t)v18);
  renderingThirdPerson = _RBP->renderingThirdPerson;
  CG_ViewMP_UpdateThirdPerson((LocalClientNum_t)v18);
  v74 = !renderingThirdPerson && _RBP->renderingThirdPerson;
  if ( !_RBP->inKillCam && v74 )
  {
    CG_CustomizationMP_ResetCustomizationLatchForClient((const LocalClientNum_t)v18, _RBP->predictedPlayerEntity->nextState.clientNum);
    if ( _RBP->predictedPlayerState.clientNum == CG_GetLocalClientGlobals((const LocalClientNum_t)v18)->clientNum )
    {
      activeExecutionPartnerEntNum = _RBP->predictedPlayerState.activeExecutionPartnerEntNum;
      if ( activeExecutionPartnerEntNum != 2047 )
        CG_CustomizationMP_ResetCustomizationLatchForClient((const LocalClientNum_t)v18, activeExecutionPartnerEntNum);
    }
  }
  v76 = _RBP->renderingThirdPerson && _RBP->predictedPlayerState.vehicleState.entity != 2047;
  CG_ViewMP_SetClientEntCollision((LocalClientNum_t)v18, v76);
  CG_ClearHudGrenades(_RBP);
  CG_ViewMP_UpdateEntInfo((const LocalClientNum_t)v18);
  CGMovingPlatformAimAssist::AimAssistResetFrameData((LocalClientNum_t)v18);
  CG_View_UpdateShieldViewFx((const LocalClientNum_t)v18);
  CG_View_UpdateScopeOutlineInfo((LocalClientNum_t)v18);
  CG_View_UpdateViewmodelOutline((LocalClientNum_t)v18);
  CG_View_UpdateDepthScanParams((LocalClientNum_t)v18);
  Physics_WaitForAllCommandsToFinish();
  __asm
  {
    vmovss  xmm6, cs:__real@3c888889
    vmovaps xmm0, xmm6; timeStep
  }
  Physics_CheckForGarbageCollectionClient(*(float *)&_XMM0);
  if ( CG_PlayersMP_IsWeaponVisibilityTestActive((const LocalClientNum_t)v18) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_view_mp.cpp", 3812, ASSERT_TYPE_ASSERT, "( !CG_PlayersMP_IsWeaponVisibilityTestActive( localClientNum ) )", "Weapon visibility must complete before AddPacketEntities. This impacts dobj creation and animation") )
    __debugbreak();
  SND_AddPhysicsQueryBlock();
  CG_ClientModel_ResetPrevPose((const LocalClientNum_t)v18);
  if ( !_RBP->nextSnap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_view_mp.cpp", 3827, ASSERT_TYPE_ASSERT, "(cgameGlob->nextSnap != nullptr)", (const char *)&queryFormat, "cgameGlob->nextSnap != nullptr") )
    __debugbreak();
  ScriptableCl_BeginFrame((const LocalClientNum_t)v18, _RBP->nextSnap->serverTime, _RBP->inKillCam != inKillCam);
  ScriptableCl_Spatial_Update((const LocalClientNum_t)v18);
  ScriptableCl_UpdateNonEntitySharedInstances((const LocalClientNum_t)v18);
  CG_Door_UpdateScriptableAngles((const LocalClientNum_t)v18);
  if ( !CgAntiLag::IsDisabledForMigration((const LocalClientNum_t)v18) )
  {
    Instance = CgAntiLag::GetInstance((const LocalClientNum_t)v18);
    if ( !Instance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_view_mp.cpp", 3842, ASSERT_TYPE_ASSERT, "(antilag)", (const char *)&queryFormat, "antilag") )
      __debugbreak();
    BgAntiLag::PurgeLerpMoverCommands(Instance, _RBP->time);
  }
  CG_Door_InitPMoveData((const LocalClientNum_t)v18);
  CgVehicleSystem::PhysicsProcessDeferredEvents(VehicleSystem);
  Profile2_Begin(32);
  v80 = entitySystem;
  entitySystem->AddPacketEntities(entitySystem, (unsigned int)v18);
  Profile2_End(32);
  CG_DistanceCacheMP_Validate((const LocalClientNum_t)v18);
  CG_CustomizationMP_ResetCustomizationLatchForFarCharacters((const LocalClientNum_t)v18);
  CG_WorldStreaming_Update((const LocalClientNum_t)v18);
  v80->AddDeferredEntitiesToStreamingDistanceCache(v80, (const LocalClientNum_t)v18);
  CG_CustomizationStreamingMP_LoadCustomizations((const LocalClientNum_t)v18);
  CG_WeaponStreamingMP_LoadWeapons((const LocalClientNum_t)v18);
  Profile_Begin(801);
  CGMovingPlatformClient::UpdateFrameCache(&_RBP->movingPlatforms, (const LocalClientNum_t)v18);
  Profile_EndInternal(NULL);
  CG_Execution_StartWorkers((LocalClientNum_t)v18);
  Physics_WaitForPredictiveWorldUpdatePreCommandToFinish();
  SND_ReleasePhysicsQueryBlock();
  CG_Execution_WaitForWorkers((LocalClientNum_t)v18);
  if ( !(_DWORD)v18 )
    PhysPerfRaycast_Update();
  CgSimBulletFirePellet_WaitForWorkers((LocalClientNum_t)v18);
  System = CgBallistics::GetSystem((const LocalClientNum_t)v18);
  if ( !System && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_view_mp.cpp", 3906, ASSERT_TYPE_ASSERT, "(balisticsSystem)", (const char *)&queryFormat, "balisticsSystem") )
    __debugbreak();
  CgBallistics::WaitForWorkers(System);
  CgSimBulletFirePellet_ProcessEvents((LocalClientNum_t)v18);
  Sys_ProfBeginNamedEvent(0xFFF08080, "Physics_ProcessDeferredForceCallbacks");
  v82 = 3 * v18 + 3;
  Physics_ProcessDeferredForceCallbacks(v82);
  Sys_ProfEndNamedEvent();
  R_StartDelayedSceneModelWorker();
  DynEntCL_AddWorkerCmd((LocalClientNum_t)v18);
  *(double *)&_XMM0 = Com_GetTimeScale();
  __asm { vmulss  xmm1, xmm0, xmm6; timeStep }
  Ragdoll_AddUpdateWorkerCmds((LocalClientNum_t)v18, *(float *)&_XMM1);
  CG_Particle_AddProcessFxPhysicsObjectRequestsWorkerCmd((LocalClientNum_t)v18);
  CG_Cloth_Entity_Update((const LocalClientNum_t)v18);
  Sys_ProfBeginNamedEvent(0xFFFFA500, "CG_Radar_UpdateJammingLevel");
  CG_Radar_UpdateJammingLevel((const LocalClientNum_t)v18);
  Sys_ProfEndNamedEvent();
  Sys_ProfBeginNamedEvent(0xFFF08080, "CG_RumbleMP_Update");
  CG_Rumble_ProcessDeferred((LocalClientNum_t)v18);
  CG_RumbleMP_Update((const LocalClientNum_t)v18);
  Sys_ProfEndNamedEvent();
  Sys_ProfBeginNamedEvent(0xFF44CCFF, "CG_TriggerUpdate");
  CG_TriggerUpdate((LocalClientNum_t)v18);
  Sys_ProfEndNamedEvent();
  Sys_ProfBeginNamedEvent(0xFF191970, "CG_UpdateClientSideEffects");
  v84 = v138;
  CgClientSideEffectsSystem::Update(v138);
  Sys_ProfEndNamedEvent();
  if ( Com_GameMode_SupportsFeature(WEAPON_RECHAMBERING) )
  {
    Sys_ProfBeginNamedEvent(0xFFFAEBD7, "Add Client Side Sounds");
    CgClientSideEffectsSystem::AddSounds(v84);
    CgClientSideEffectsSystem::UpdateEffects(v84);
    Sys_ProfEndNamedEvent();
  }
  Sys_ProfBeginNamedEvent(0xFFDAA520, "CG_VisionSetsUpdate_PrePlayerStatePrediction");
  CG_VisionSetsUpdate_PrePlayerStatePrediction((const LocalClientNum_t)v18);
  Sys_ProfEndNamedEvent();
  Profile_Begin(603);
  Physics_WaitForPredictiveWorldUpdateCommandToFinish();
  Profile_EndInternal(NULL);
  FX_UpdateTeam((LocalClientNum_t)v18, CharacterInfo->team);
  if ( ClStatic::IsFirstActiveGameLocalClient(&cls, (LocalClientNum_t)v18) )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rbp+6470h]
      vaddss  xmm1, xmm0, dword ptr [rbp+38h]
      vmovss  dword ptr [rsp+1B8h+clientPos], xmm1
      vmovss  xmm2, dword ptr [rbp+3Ch]
      vaddss  xmm0, xmm2, dword ptr [rbp+6474h]
      vmovss  dword ptr [rsp+1B8h+clientPos+4], xmm0
      vmovss  xmm1, dword ptr [rbp+40h]
      vaddss  xmm2, xmm1, dword ptr [rbp+6478h]
      vmovss  dword ptr [rsp+1B8h+clientPos+8], xmm2
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
      vmulss  xmm2, xmm0, xmm9; deltaGameTimeSec
      vxorps  xmm1, xmm1, xmm1
      vcvtsi2ss xmm1, xmm1, ecx
      vmulss  xmm1, xmm1, xmm9; gameTimeSec
    }
    R_ReactiveMotion_Update((LocalClientNum_t)v18, *(const float *)&_XMM1, *(const float *)&_XMM2, &clientPos, &_RBP->predictedPlayerState.velocity);
    R_UpdateSound();
  }
  Sys_ProfBeginNamedEvent(0xFFFF6347, "pre player state");
  Profile_BeginCSV(4);
  CG_Foliage_WaitForProcessCharacterEntityCmds();
  SND_AddPhysicsQueryBlock();
  CG_PredictMP_PrePredictSinglePlayerState((LocalClientNum_t)v18);
  SND_ReleasePhysicsQueryBlock();
  Profile_EndCSV(4);
  Sys_ProfEndNamedEvent();
  if ( ClStatic::IsFirstActiveGameLocalClient(&cls, (LocalClientNum_t)v18) )
    CL_Main_SyncGpu((LocalClientNum_t)v18);
  R_ToggleSmpFrame((LocalClientNum_t)v18);
  CG_FrontEndScene_FrameUpdate((LocalClientNum_t)v18);
  CG_HighPriorityWeapon_Update((const LocalClientNum_t)v18);
  CG_Skydive_Update((const LocalClientNum_t)v18);
  CG_Turret_Update((const LocalClientNum_t)v18);
  CG_Ladder_Update((LocalClientNum_t)v18);
  CG_LightSampler_Update((LocalClientNum_t)v18);
  ShouldSkipPredictionForGameplay = CG_PredictMP_ShouldSkipPredictionForGameplay((const LocalClientNum_t)v18, _RBP, &_RBP->predictedPlayerState);
  CG_PlayerSecondaryCollision_StartBroadphaseWorker((const LocalClientNum_t)v18, !ShouldSkipPredictionForGameplay, &_RBP->predictedPlayerState);
  Sys_ProfBeginNamedEvent(0xFFFF6347, "handle client input");
  R_GPU_RecordLatencyEvent(LATENCY_EVENT_CL_INPUT, rg.frontEndFrameCount);
  CG_Utils_UpdateActiveInputContext((LocalClientNum_t)v18);
  if ( (unsigned int)v18 >= 2 )
  {
    LODWORD(inPip) = 2;
    LODWORD(isZeroG) = v18;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 174, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", isZeroG, inPip) )
      __debugbreak();
  }
  if ( clientUIActives[v18].connectionState == CA_ACTIVE && CL_Input_AllowInput((LocalClientNum_t)v18) )
  {
    if ( ClStatic::IsFirstActiveGameLocalClient(&cls, (LocalClientNum_t)v18) )
    {
      cls.inputUpdatedPrevFrame = 1;
      IN_Frame();
    }
    CL_Input_AutomatedInput_Frame((LocalClientNum_t)v18);
    CL_Input_SequenceUpdate((const LocalClientNum_t)v18);
    CL_InputMP_CreateNewCommands_1((LocalClientNum_t)v18);
  }
  Sys_ProfEndNamedEvent();
  CG_CreateFx_Frame(_RBP);
  CG_ModelPreviewerFrame(_RBP);
  CG_AddModelPreviewerModel((LocalClientNum_t)v18, _RBP->frametime);
  Sys_ProfBeginNamedEvent(0xFFFF6347, "player state");
  Profile_BeginCSV(7);
  SND_AddPhysicsQueryBlock();
  CG_PredictMP_PredictPlayerState((LocalClientNum_t)v18);
  CG_Skydive_PostPlayerStateUpdate((const LocalClientNum_t)v18);
  v97 = CgGlobalsMP::GetLocalClientGlobals((const LocalClientNum_t)v18);
  v98 = v97;
  if ( v97->renderingThirdPerson )
  {
    if ( v97->activeCameraEnabledThirdPerson && !CG_Camera_Active_IsThirdPerson((LocalClientNum_t)v18) )
      *(_QWORD *)&v98->renderingThirdPerson = 0i64;
  }
  else if ( v97->predictedPlayerState.pm_type != 3 && (!BG_IsSpectating(&v97->predictedPlayerState) || CG_View_IsKillCamView((const LocalClientNum_t)v18)) && CG_Camera_Active_IsThirdPerson((LocalClientNum_t)v18) )
  {
    v98->renderingThirdPerson = 1;
    v98->activeCameraEnabledThirdPerson = 1;
  }
  SND_ReleasePhysicsQueryBlock();
  CG_UpdateWeaponViewmodels((LocalClientNum_t)v18);
  Sys_ProfBeginNamedEvent(0xFFEE82EE, "CG_ViewMP_UpdateViewHands");
  ViewHandsModelName = CG_ViewMP_GetViewHandsModelName((const LocalClientNum_t)v18, _RBP);
  if ( ViewHandsModelName && *ViewHandsModelName )
  {
    v100 = R_RegisterModel(ViewHandsModelName);
    CG_UpdateHandViewmodels((LocalClientNum_t)v18, v100);
  }
  Sys_ProfEndNamedEvent();
  CG_ClearTurretFire();
  CG_DrawNetMP_AddDeathMonitorSample((LocalClientNum_t)v18);
  if ( enabled )
    CG_CameraUpdateOrderFix_AddPostPlayerStateEnts((LocalClientNum_t)v18, v80);
  v101 = CgGlobalsMP::GetLocalClientGlobals((const LocalClientNum_t)v18);
  if ( GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&v101->predictedPlayerState.otherFlags, ACTIVE, 0xBu) )
  {
    v102 = DVARBOOL_killswitch_last_stand_pose_eval_order_fix_enabled;
    if ( !DVARBOOL_killswitch_last_stand_pose_eval_order_fix_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "killswitch_last_stand_pose_eval_order_fix_enabled") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v102);
    if ( v102->current.enabled && !v101->predictedPlayerState.pm_type )
    {
      if ( CG_PlayersMP_ShouldProcessLocalPlayerEntity((LocalClientNum_t)v18) )
      {
        predictedPlayerEntity = _RBP->predictedPlayerEntity;
        if ( predictedPlayerEntity )
          CG_EntityMP_CalcLerpPositions((LocalClientNum_t)v18, predictedPlayerEntity);
      }
    }
  }
  if ( enabled )
  {
    CG_ViewMP_UpdateKickAngles(_RBP);
    CG_View_UpdateTurretZoom((const LocalClientNum_t)_RBP->localClientNum);
    CG_CameraUpdateOrderFix_PostPhysicsWorkers_Phase2(_RBP);
  }
  s_dofTraceData.clientNum = v18;
  s_dofTraceData.distance = &s_dofTraceDistance;
  Sys_AddWorkerCmd(WRKCMD_CG_VIEWMP_DOFTRACE, &s_dofTraceData);
  if ( v133 )
  {
    CG_PlayersMP_UpdateLocalPlayerEntityModels((LocalClientNum_t)v18);
    CG_ViewMP_ProcessLocalPlayerEntity(_RBP);
  }
  DynEntCL_WaitForAddWorkerCmds();
  Sys_WaitWorkerCmdsOfType(WRKCMD_PROCESS_DEFERRED_PARTICLE_PHYSICS);
  if ( enabled )
    CG_ViewWeaponCleanUp((const LocalClientNum_t)_RBP->localClientNum);
  CG_PlayerStateMP_TransitionPlayerState((LocalClientNum_t)v18, &_RBP->predictedPlayerState, &_RBP->oldTransPlayerState);
  if ( !enabled )
    CG_CameraUpdateOrderFix_AddPostPlayerStateEnts((LocalClientNum_t)v18, entitySystem);
  CG_View_CalcWeaponInspectDoF(_RBP);
  CG_VisionSetsUpdate_PostPlayerStatePrediction((const LocalClientNum_t)v18);
  CG_VisionSets_UpdateWeaponADS((const LocalClientNum_t)v18);
  CG_WeaponSounds_Update((const LocalClientNum_t)v18);
  CG_SndUpdateAutoSim();
  CG_SndUpdateSubmix((LocalClientNum_t)v18);
  if ( !v133 )
    CG_PlayersMP_UpdateLocalPlayerEntityModels((LocalClientNum_t)v18);
  CG_ContextMount_UmbraOffsetTrace_StartWorkers((const LocalClientNum_t)v18);
  CG_TraceGroundWorkers_StartWorkers((const LocalClientNum_t)v18);
  CgBallistics::StartWorkers(System, 1);
  if ( !CgSimBulletFirePellet_DelayUntilPlayerOriginUpdate(_RBP) )
    CgSimBulletFirePellet_StartWorkers((LocalClientNum_t)v18);
  if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_cg_enableLaserWorkers, "cg_enableLaserWorkers") )
  {
    if ( Com_GameMode_SupportsFeature(WEAPON_SLIDE) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_view_mp.cpp", 4214, ASSERT_TYPE_ASSERT, "(!Com_GameMode_SupportsFeature( Com_GameMode_Feature::LASER_DETAILED_PHYSICS_WORLD ))", (const char *)&queryFormat, "!Com_GameMode_SupportsFeature( Com_GameMode_Feature::LASER_DETAILED_PHYSICS_WORLD )") )
      __debugbreak();
    CG_Laser_AddDrawAllWorkers((const LocalClientNum_t)v18, LASER_COLLISION_ALL);
  }
  CG_ProcessTurretFire((const LocalClientNum_t)v18);
  if ( !v133 )
    CG_ViewMP_ProcessLocalPlayerEntity(_RBP);
  CG_FootstepTracker_Update((LocalClientNum_t)v18);
  CG_Execution_XCamUpdateTransform((LocalClientNum_t)v18);
  CG_View_UpdateMainThreadTraceSafeLogic((LocalClientNum_t)v18);
  if ( CgSimBulletFirePellet_DelayUntilPlayerOriginUpdate(_RBP) )
    CgSimBulletFirePellet_StartWorkers((LocalClientNum_t)v18);
  CgSimBulletFirePellet_WaitForWorkers((LocalClientNum_t)v18);
  CgBallistics::WaitForWorkers(System);
  CgSimBulletFirePellet_ProcessEvents((LocalClientNum_t)v18);
  CG_TraceGroundWorkers_WaitForWorkers();
  CG_TraceGroundWorkers_ProcessOutput((const LocalClientNum_t)v18);
  v104 = v140;
  CgWeaponSystem::DrawDebugBulletLines(v140);
  Sys_WaitWorkerCmdsOfType(WRKCMD_ADD_DYNENT_SPATIAL);
  Sys_WaitWorkerCmdsOfType(WRKCMD_RAGDOLL_UPDATE);
  ScriptableCl_UpdateClientInstances((const LocalClientNum_t)v18, _RBP->frametime);
  __asm { vmovaps xmm2, xmm6; timeStep }
  PhysicsSVFX_Update(v82, (LocalClientNum_t)v18, *(float *)&_XMM2);
  DynEnt_UpdateFrameFlags((LocalClientNum_t)v18);
  CG_ClientModel_SyncLoaded((const LocalClientNum_t)v18);
  CL_UI_ClientModel_Update();
  if ( Com_GameMode_SupportsFeature(WEAPON_RECHAMBERING|0x100) && Dvar_GetBool_Internal_DebugName(DVARBOOL_physics_killswitchEnableClientAuthWorldUseCGameTimeForWorldStep, "physics_killswitchEnableClientAuthWorldUseCGameTimeForWorldStep") )
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, dword ptr [rbp+65E4h]
      vmulss  xmm6, xmm0, xmm9
    }
  }
  else
  {
    *(double *)&_XMM0 = Com_GetTimeScale();
    __asm { vmulss  xmm6, xmm0, cs:?cls@@3UClStatic@@A.frametime_rawSeconds; ClStatic cls }
  }
  *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_physics_maxClientWorldTimeStep, "physics_maxClientWorldTimeStep");
  __asm { vcomiss xmm0, xmm7 }
  if ( !(v108 | v109) )
    __asm { vminss  xmm6, xmm0, xmm6 }
  Profile_Begin(657);
  __asm { vmovaps xmm1, xmm6; timeStep }
  Physics_PreStepWorld(v82, *(float *)&_XMM1);
  Profile_EndInternal(NULL);
  __asm { vmovaps xmm1, xmm8; velocityScale }
  Physics_ProcessDeferredKeyframe(v82, *(const float *)&_XMM1);
  __asm { vxorps  xmm3, xmm3, xmm3; stepTimeOverride }
  Physics_StepWorld(v82, 0, 1, *(float *)&_XMM3);
  Physics_AddToScene((LocalClientNum_t)v18);
  FX_Update0((LocalClientNum_t)v18, _RBP->time);
  FX_Update1((LocalClientNum_t)v18);
  _RBP->cvsData.transitory.thermalVisionActive = CG_View_IsThermalVisionOn((const LocalClientNum_t)v18);
  CG_ViewMP_UpdateBRCircleSounds((const LocalClientNum_t)v18);
  CG_View_UpdateLocSelInfo((const LocalClientNum_t)v18);
  if ( !enabled )
    CG_CameraUpdateOrderFix_PostPhysicsWorkers_Phase0(_RBP);
  CL_InputMP_SavePredictedData((const LocalClientNum_t)v18);
  if ( CL_InputMP_ReadyToSendPacket((LocalClientNum_t)v18) && (!Com_GameMode_SupportsFeature(WEAPON_SCOPE_TOGGLE_ON|WEAPON_FIRING|0x80) || !Com_MP_GetIsLocalServerPaused()) )
    CL_InputMP_WritePacket((LocalClientNum_t)v18);
  Profile_EndCSV(7);
  Sys_ProfEndNamedEvent();
  if ( !enabled )
    CG_CameraUpdateOrderFix_PostPhysicsWorkers_Phase1(_RBP);
  CgSoundSystem::UpdateBreathingSounds(SoundSystem);
  if ( enabled )
  {
    CG_View_UpdateXCamView((LocalClientNum_t)v18);
    CG_Entity_ProcessQueuedViewModelDObj((const LocalClientNum_t)v18);
  }
  else
  {
    CG_CameraUpdateOrderFix_PostPhysicsWorkers_Phase2(_RBP);
    CG_ViewWeaponCleanUp((const LocalClientNum_t)_RBP->localClientNum);
  }
  CG_PlayerMP_AddViewLinkedHelmet((const LocalClientNum_t)v18);
  CG_Heat_UpdateViewmodel((LocalClientNum_t)v18);
  if ( !(_BYTE)CgDrawSystem::ms_allocatedType )
  {
    LODWORD(inPip) = v18;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw.h", 176, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the draw system for localClientNum %d but the draw system type is not known\n", "ms_allocatedType != GameModeType::NONE", inPip) )
      __debugbreak();
  }
  if ( (unsigned int)v18 >= CgDrawSystem::ms_allocatedCount )
  {
    LODWORD(inPip) = CgDrawSystem::ms_allocatedCount;
    LODWORD(isZeroG) = v18;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw.h", 177, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", isZeroG, inPip) )
      __debugbreak();
  }
  if ( !CgDrawSystem::ms_drawSystemArray[v18] )
  {
    LODWORD(inPip) = v18;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw.h", 178, ASSERT_TYPE_ASSERT, "(ms_drawSystemArray[localClientNum])", "%s\n\tTrying to access unallocated draw system for localClientNum %d\n", "ms_drawSystemArray[localClientNum]", inPip) )
      __debugbreak();
  }
  CgDrawSystem::ms_drawSystemArray[v18]->UpdateScissor(CgDrawSystem::ms_drawSystemArray[v18]);
  Sys_ProfBeginNamedEvent(0xFFFF6347, "player entity");
  CgWeaponSystem::ProcessDeferredTracer(v104);
  CgBallistics::FinishFrame(System);
  CG_ProcessDeathCamImpacts((const LocalClientNum_t)v18);
  CG_UpdateLocalEntities((const LocalClientNum_t)v18);
  IsPlayerZeroG = BG_IsPlayerZeroG(&_RBP->predictedPlayerState);
  thermalVisionActive = _RBP->cvsData.transitory.thermalVisionActive;
  *(double *)&_XMM0 = R_GetFarPlaneDist();
  __asm { vmovaps xmm3, xmm0; zfar }
  FX_Update2((LocalClientNum_t)v18, &_RBP->refdef, &_RBP->refdef.view, *(float *)&_XMM3, thermalVisionActive, IsPlayerZeroG, 0);
  AxisToQuat(&_RBP->refdef.view.axis, &out);
  RefdefView_GetOrg(&_RBP->refdef.view, &position);
  CG_Rumble_SetReceiver((LocalClientNum_t)v18, _RBP->predictedPlayerState.clientNum, &position, &out);
  CG_Slide_UpdateClient((LocalClientNum_t)v18);
  CG_Ladder_PlayAudioClient((const LocalClientNum_t)v18);
  CG_View_UpdateTestFX((const LocalClientNum_t)v18);
  if ( ClStatic::IsFirstActiveGameLocalClient(&cls, (LocalClientNum_t)v18) )
  {
    Sys_ProfBeginNamedEvent(0xFFB22222, "mayhem update all");
    Mayhem_Update((LocalClientNum_t)v18, MAYHEM_UPDATE_ALL);
    Sys_ProfEndNamedEvent();
  }
  Com_DevhostUpdate(103);
  CG_CalloutMarkerPing_WaitForContextualPingWorkerThread((const LocalClientNum_t)v18);
  CG_ClientModel_Update((const LocalClientNum_t)v18);
  if ( !(_DWORD)v18 )
  {
    CG_View_DumpAnims(LOCAL_CLIENT_0);
    CG_View_DumpAnims3D(LOCAL_CLIENT_0);
    CG_View_DumpDObj(LOCAL_CLIENT_0);
  }
  CG_LatencyTestMP_Update((LocalClientNum_t)v18);
  R_EndDelayedSceneModels(1);
  Sys_ProfEndNamedEvent();
  Sys_ProfBeginNamedEvent(0xFFFF6347, "remaining fx");
  R_EndDObjScene();
  if ( !Dvar_GetBool_Internal_DebugName(DVARBOOL_cg_enableLaserWorkers, "cg_enableLaserWorkers") )
  {
    if ( Com_GameMode_SupportsFeature(WEAPON_SLIDE) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_view_mp.cpp", 4453, ASSERT_TYPE_ASSERT, "(!Com_GameMode_SupportsFeature( Com_GameMode_Feature::LASER_DETAILED_PHYSICS_WORLD ))", (const char *)&queryFormat, "!Com_GameMode_SupportsFeature( Com_GameMode_Feature::LASER_DETAILED_PHYSICS_WORLD )") )
      __debugbreak();
    CG_LaserDrawAll((LocalClientNum_t)v18, LASER_COLLISION_ALL);
  }
  Sys_WaitWorkerCmdsOfType(WRKCMD_DRAW_LASERS);
  CG_Deploy_Update((LocalClientNum_t)v18);
  if ( !(_BYTE)CgCompassSystem::ms_allocatedType )
  {
    LODWORD(inPipa) = v18;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.h", 575, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the compass system for localClientNum %d but the compass system type is not known\n", "ms_allocatedType != GameModeType::NONE", inPipa) )
      __debugbreak();
  }
  if ( (unsigned int)v18 >= CgCompassSystem::ms_allocatedCount )
  {
    LODWORD(inPipa) = CgCompassSystem::ms_allocatedCount;
    LODWORD(isZeroGa) = v18;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.h", 576, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", isZeroGa, inPipa) )
      __debugbreak();
  }
  if ( !CgCompassSystem::ms_compassSystemArray[v18] )
  {
    LODWORD(inPipa) = v18;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.h", 577, ASSERT_TYPE_ASSERT, "(ms_compassSystemArray[localClientNum])", "%s\n\tTrying to access unallocated compass system for localClientNum %d\n", "ms_compassSystemArray[localClientNum]", inPipa) )
      __debugbreak();
  }
  CgCompassSystem::UpdatePlayerOrientation(CgCompassSystem::ms_compassSystemArray[v18], &_RBP->predictedPlayerState);
  CG_CalloutMarkerPing_Predicted_Update((LocalClientNum_t)v18);
  FX_Update3((LocalClientNum_t)v18);
  Sys_ProfEndNamedEvent();
  Sys_ProfBeginNamedEvent(0xFFFFFFFF, "aim assist screen");
  secure_uint32_3_t::secureInt32_3_Get(&_RBP->aimAssistEyeOrigin, &outData);
  secure_uint32_3_t::secureInt32_3_Get(&_RBP->aimAssistViewOrigin, &v144);
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+6934h]
    vmovss  xmm1, dword ptr [rbp+6930h]
    vmovss  [rsp+1B8h+isZeroG], xmm0
    vmovss  dword ptr [rsp+1B8h+fmt], xmm1
  }
  AimAssist_UpdateScreenTargets((LocalClientNum_t)v18, (const vec3_t *)&outData, (const vec3_t *)&v144, &_RBP->aimAssistViewAngles, fmt, *(float *)&isZeroGb);
  if ( Com_GameMode_SupportsFeature(WEAPON_SCOPE_TOGGLE_ON|WEAPON_FIRING|0x80) )
  {
    ShouldClientPause = Com_MP_GetShouldClientPause();
    R_Cinematic_SetPaused((CinematicEnum)ShouldClientPause, 0);
  }
  Sys_ProfEndNamedEvent();
  CG_CreateFx_UpdateCursor((LocalClientNum_t)v18);
  CollAvoid_UpdateAvoidTargets((LocalClientNum_t)v18);
  CG_ViewMP_UpdateSceneDepthOfField((const LocalClientNum_t)v18);
  CG_View_UpdateShellShock((const LocalClientNum_t)v18);
  ViewSystem->CalcRadialMotionBlur(ViewSystem);
  CG_View_UpdateSceneLensProfile((const LocalClientNum_t)v18);
  CG_View_UpdateWaterSheetingFX((const LocalClientNum_t)v18);
  CG_View_CalcVignette((const LocalClientNum_t)v18);
  CG_ViewMP_ValidateWeaponSelect((const LocalClientNum_t)v18, _RBP);
  CG_ViewMP_UpdateStreaming((const LocalClientNum_t)v18, _RBP);
  CG_SND_Update((const LocalClientNum_t)v18);
  CG_DrawMP_DrawActive((const LocalClientNum_t)v18, drawType);
  AimTargetMP_FinishProcessingEntities((const LocalClientNum_t)v18);
  CG_PlayersMP_WaitUpdateClientWeaponVisibility((const LocalClientNum_t)v18);
  CG_GameInterface_ViewMP_DrawActiveFrame((const LocalClientNum_t)v18);
  CgStatic::ClearActiveStatics((const LocalClientNum_t)v18);
  _RBP->playerTeleported = 0;
  v119 = (__int64)v143;
  _RBP->lastMantleflags = v143->mantleState.flags;
  _RBP->prevWeaponFlags = *(GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64> *)(v119 + 1832);
  GamerProfile_CheckBBPrintInitialConfig((const LocalClientNum_t)v18);
  CL_Input_EndFrame((LocalClientNum_t)v18);
  Profile2_End(30);
  memset(&v144, 0, sizeof(v144));
  memset(&outData, 0, sizeof(outData));
  memset(&position, 0, sizeof(position));
  v120 = 1i64;
LABEL_280:
  _R11 = &v153;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
  }
  return v120;
}

/*
==============
CG_ViewMP_FixedDeathCameraThirdPersonUpdate
==============
*/
void CG_ViewMP_FixedDeathCameraThirdPersonUpdate(const LocalClientNum_t localClientNum, const vec3_t *corpsePos, const int lerpTimeMs)
{
  CgGlobalsMP *LocalClientGlobals; 
  CgGlobalsMP *v8; 
  bool v9; 
  char v23; 
  vec4_t out; 
  vec4_t quat; 
  vec4_t result; 
  tmat33_t<vec3_t> axis; 

  _EBP = lerpTimeMs;
  _RSI = corpsePos;
  LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals(localClientNum);
  v8 = LocalClientGlobals;
  v9 = !LocalClientGlobals->m_fixedDeathCameraWasActive;
  LocalClientGlobals->m_fixedDeathCameraIsActive = 1;
  if ( v9 )
  {
    LocalClientGlobals->m_fixedDeathCameraActivationTime = LocalClientGlobals->time;
    LocalClientGlobals->m_fixedDeathCameraInitialAngles.v[0] = LocalClientGlobals->m_fixedDeathCameraPrevAngles.v[0];
    LocalClientGlobals->m_fixedDeathCameraInitialAngles.v[1] = LocalClientGlobals->m_fixedDeathCameraPrevAngles.v[1];
    LocalClientGlobals->m_fixedDeathCameraInitialAngles.v[2] = LocalClientGlobals->m_fixedDeathCameraPrevAngles.v[2];
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rsi]
    vsubss  xmm3, xmm0, dword ptr [rax+0C6604h]
    vmovss  xmm1, dword ptr [rsi+4]
    vsubss  xmm2, xmm1, dword ptr [rax+0C6608h]
    vmovss  xmm0, dword ptr [rsi+8]
    vsubss  xmm4, xmm0, dword ptr [rax+0C660Ch]
    vmulss  xmm2, xmm2, xmm2
    vmulss  xmm1, xmm3, xmm3
    vmulss  xmm0, xmm4, xmm4
    vaddss  xmm3, xmm2, xmm1
    vaddss  xmm2, xmm3, xmm0
    vcomiss xmm2, cs:__real@3a83126f
  }
  if ( v9 )
  {
    LocalClientGlobals->refdefViewAngles.v[0] = LocalClientGlobals->m_fixedDeathCameraPrevAngles.v[0];
    LocalClientGlobals->refdefViewAngles.v[1] = LocalClientGlobals->m_fixedDeathCameraPrevAngles.v[1];
    LocalClientGlobals->refdefViewAngles.v[2] = LocalClientGlobals->m_fixedDeathCameraPrevAngles.v[2];
    AnglesToAxis(&LocalClientGlobals->refdefViewAngles, &LocalClientGlobals->refdef.view.axis);
  }
  else
  {
    __asm
    {
      vmovaps [rsp+0C8h+var_38], xmm6
      vmovaps [rsp+0C8h+var_48], xmm7
    }
    LookAtAxisAndDistance(&LocalClientGlobals->m_fixedDeathCameraPos, _RSI, &axis);
    __asm
    {
      vmovss  xmm6, cs:__real@3f800000
      vmovaps xmm7, xmm6
    }
    v23 = 0;
    if ( _EBP > 0 )
    {
      _EAX = v8->time - v8->m_fixedDeathCameraActivationTime;
      __asm
      {
        vmovd   xmm1, eax
        vcvtdq2ps xmm1, xmm1
        vmovd   xmm0, ebp
        vcvtdq2ps xmm0, xmm0
        vdivss  xmm0, xmm1, xmm0; val
        vxorps  xmm1, xmm1, xmm1; min
        vmovaps xmm2, xmm6; max
      }
      *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      __asm
      {
        vmovaps xmm5, xmm0
        vmulss  xmm0, xmm0, cs:__real@40c00000
        vsubss  xmm2, xmm0, cs:__real@41700000
        vmulss  xmm3, xmm2, xmm5
        vaddss  xmm4, xmm3, cs:__real@41200000
        vmulss  xmm0, xmm5, xmm5
        vmulss  xmm2, xmm0, xmm5
        vmulss  xmm0, xmm4, xmm2; val
        vmovaps xmm2, xmm6; max
        vxorps  xmm1, xmm1, xmm1; min
      }
      *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      __asm { vmovaps xmm7, xmm0 }
    }
    __asm
    {
      vcomiss xmm7, xmm6
      vmovaps xmm6, [rsp+0C8h+var_38]
    }
    if ( v23 )
    {
      AnglesToQuat(&v8->m_fixedDeathCameraInitialAngles, &quat);
      AxisToQuat(&axis, &out);
      __asm { vmovaps xmm2, xmm7; frac }
      QuatSlerp(&quat, &out, *(float *)&_XMM2, &result);
      QuatToAxis(&result, &v8->refdef.view.axis);
    }
    else
    {
      MatrixCopy33(&axis, &v8->refdef.view.axis);
    }
    AxisToAngles(&v8->refdef.view.axis, &v8->refdefViewAngles);
    __asm { vmovaps xmm7, [rsp+0C8h+var_48] }
  }
  RefdefView_SetOrg(&v8->refdef.view, &v8->m_fixedDeathCameraPos);
}

/*
==============
CG_ViewMP_GetCorpseViewPosition
==============
*/
char CG_ViewMP_GetCorpseViewPosition(const LocalClientNum_t localClientNum, vec3_t *outViewOrigin, bool useTag)
{
  cg_t *LocalClientGlobals; 
  cg_t *v8; 
  centity_t *Entity; 
  const cpose_t *p_pose; 
  const DObj *ClientDObj; 
  __int64 v19; 

  _RDI = outViewOrigin;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  v8 = LocalClientGlobals;
  if ( LocalClientGlobals->predictedPlayerState.pm_type < 7 || LocalClientGlobals->predictedPlayerState.corpseIndex == 15 )
    return 0;
  if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 130, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
    __debugbreak();
  if ( v8->predictedPlayerState.corpseIndex >= ComCharacterLimits::ms_gameData.m_clientCorpseCount )
  {
    if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 130, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
      __debugbreak();
    LODWORD(v19) = v8->predictedPlayerState.corpseIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_view_mp.cpp", 363, ASSERT_TYPE_ASSERT, "(unsigned)( cgameGlob->predictedPlayerState.corpseIndex ) < (unsigned)( ComCharacterLimits::GetClientCorpseMaxCount() )", "cgameGlob->predictedPlayerState.corpseIndex doesn't index ComCharacterLimits::GetClientCorpseMaxCount()\n\t%i not in [0, %i)", v19, ComCharacterLimits::ms_gameData.m_clientCorpseCount) )
      __debugbreak();
  }
  if ( v8->predictedPlayerState.corpseIndex >= ComCharacterLimits::GetClientCorpseMaxCount() )
    return 0;
  if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 152, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
    __debugbreak();
  Entity = CG_GetEntity(localClientNum, ComCharacterLimits::ms_gameData.m_characterCount + v8->predictedPlayerState.corpseIndex);
  p_pose = &Entity->pose;
  if ( (Entity->flags & 1) == 0 )
    return 0;
  if ( useTag )
  {
    ClientDObj = Com_GetClientDObj(Entity->nextState.number, localClientNum);
    if ( ClientDObj )
      CG_DObjGetWorldTagPos(p_pose, ClientDObj, scr_const.j_mainroot, _RDI);
  }
  else
  {
    CG_GetPoseOrigin(&Entity->pose, _RDI);
  }
  *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_cg_thirdPersonCorpseUpOffset, "cg_thirdPersonCorpseUpOffset");
  __asm
  {
    vmulss  xmm2, xmm0, dword ptr cs:?identityMatrix33@@3T?$tmat33_t@Tvec3_t@@@@B+18h; tmat33_t<vec3_t> const identityMatrix33
    vaddss  xmm3, xmm2, dword ptr [rdi]
    vmovss  dword ptr [rdi], xmm3
    vmulss  xmm2, xmm0, dword ptr cs:?identityMatrix33@@3T?$tmat33_t@Tvec3_t@@@@B+1Ch; tmat33_t<vec3_t> const identityMatrix33
    vaddss  xmm3, xmm2, dword ptr [rdi+4]
    vmovss  dword ptr [rdi+4], xmm3
    vmulss  xmm0, xmm0, dword ptr cs:?identityMatrix33@@3T?$tmat33_t@Tvec3_t@@@@B+20h; tmat33_t<vec3_t> const identityMatrix33
    vaddss  xmm2, xmm0, dword ptr [rdi+8]
    vmovss  dword ptr [rdi+8], xmm2
  }
  return 1;
}

/*
==============
CG_ViewMP_GetTransientsCommonMPPriorityFlagsForLocalClient
==============
*/
__int64 CG_ViewMP_GetTransientsCommonMPPriorityFlagsForLocalClient(const LocalClientNum_t localClientNum)
{
  const dvar_t *v2; 
  int integer; 
  const dvar_t *v5; 
  int v6; 
  const dvar_t *v7; 
  int v8; 
  unsigned int v9; 
  char v21; 
  __int64 result; 

  v2 = DVARINT_party_teamCount;
  __asm { vmovaps [rsp+58h+var_18], xmm6 }
  if ( !DVARINT_party_teamCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "party_teamCount") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  integer = v2->current.integer;
  if ( integer < 2 )
    goto LABEL_13;
  v5 = DVARINT_party_maxplayers;
  if ( !DVARINT_party_maxplayers && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "party_maxplayers") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v5);
  v6 = v5->current.integer;
  v7 = DCONST_DVARINT_cg_streamingMaxTeamSizeForBoostedTeammatePrioritization;
  v8 = v6 / integer;
  if ( !DCONST_DVARINT_cg_streamingMaxTeamSizeForBoostedTeammatePrioritization && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_streamingMaxTeamSizeForBoostedTeammatePrioritization") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v7);
  if ( v8 > v7->current.integer )
LABEL_13:
    v9 = 0;
  else
    v9 = 1;
  _RAX = CL_StreamViews_GetClientVelocity(localClientNum);
  _RDI = DCONST_DVARFLT_cg_streamingMinVelocityDeprioritizeCommonMPTransients;
  __asm
  {
    vmovss  xmm0, dword ptr [rax+4]
    vmovss  xmm2, dword ptr [rax]
    vmovss  xmm3, dword ptr [rax+8]
    vmulss  xmm1, xmm0, xmm0
    vmulss  xmm0, xmm2, xmm2
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm2, xmm2, xmm1
    vsqrtss xmm6, xmm2, xmm2
  }
  if ( !DCONST_DVARFLT_cg_streamingMinVelocityDeprioritizeCommonMPTransients && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_streamingMinVelocityDeprioritizeCommonMPTransients") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RDI);
  __asm { vcomiss xmm6, dword ptr [rdi+28h] }
  if ( v21 )
  {
    if ( CL_StreamViews_GetNumberOfManualViewsSet(localClientNum) > 1 )
      v9 |= 6u;
  }
  else
  {
    v9 |= 2u;
  }
  result = v9;
  __asm { vmovaps xmm6, [rsp+58h+var_18] }
  return result;
}

/*
==============
CG_ViewMP_GetViewHandsModelName
==============
*/
const char *CG_ViewMP_GetViewHandsModelName(const LocalClientNum_t localClientNum, const CgGlobalsMP *cgameGlob)
{
  __int64 v2; 
  const Weapon *ViewmodelWeapon; 
  bool v5; 
  char v6; 
  ClConfigStrings *ClConfigStrings; 
  __int64 v8; 
  CgStatic *LocalClientStatics; 
  const characterInfo_t *CharacterInfo; 
  const clientInfo_t *v11; 
  const char *ClientModelFromServerIndex; 
  const char *ActiveModel; 
  bool outIsModelLoaded; 
  bool outIsCustomModel; 

  v2 = localClientNum;
  if ( !cgameGlob && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_view_mp.cpp", 2209, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  if ( !CgWeaponMap::ms_instance[v2] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
    __debugbreak();
  ViewmodelWeapon = BG_GetViewmodelWeapon(CgWeaponMap::ms_instance[v2], &cgameGlob->predictedPlayerState);
  v5 = cgameGlob->predictedPlayerState.clientNum < cls.maxClients;
  if ( cgameGlob->playerWeaponInfo.handModel || cgameGlob->predictedPlayerState.clientNum >= cls.maxClients || !ViewmodelWeapon->weaponIdx )
  {
    v6 = 0;
    if ( cgameGlob->predictedPlayerState.viewmodelIndex <= 0 )
      return (char *)&queryFormat.fmt + 3;
  }
  else
  {
    v6 = 1;
  }
  ClConfigStrings = ClConfigStrings::GetClConfigStrings();
  v8 = (__int64)ClConfigStrings->GetModelString(ClConfigStrings, cgameGlob->predictedPlayerState.viewmodelIndex);
  if ( v5 )
  {
    LocalClientStatics = CgStatic::GetLocalClientStatics((const LocalClientNum_t)v2);
    CharacterInfo = CgStatic::GetCharacterInfo(LocalClientStatics, cgameGlob->predictedPlayerState.clientNum);
    v11 = LocalClientStatics->GetClientInfo(LocalClientStatics, cgameGlob->predictedPlayerState.clientNum);
    ClientModelFromServerIndex = CG_CustomizationMP_GetClientModelFromServerIndex((const LocalClientNum_t)v2, v11, CharacterInfo, CUSTOMIZATION_TYPE_VIEWHANDS, cgameGlob->predictedPlayerState.viewmodelIndex, &outIsModelLoaded, &outIsCustomModel);
    v8 = (__int64)ClientModelFromServerIndex;
    if ( v6 )
    {
      if ( !ClientModelFromServerIndex || !*ClientModelFromServerIndex )
      {
        ActiveModel = CG_CustomizationMP_GetActiveModel((const LocalClientNum_t)v2, v11, CharacterInfo, CUSTOMIZATION_TYPE_VIEWHANDS, &outIsModelLoaded);
        v8 = (__int64)ActiveModel;
        if ( (!ActiveModel || !*ActiveModel) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_view_mp.cpp", 2244, ASSERT_TYPE_ASSERT, "(validModelName && (validModelName[0] != '\\0'))", (const char *)&queryFormat, "validModelName && (validModelName[0] != '\\0')") )
          __debugbreak();
      }
    }
  }
  return (const char *)v8;
}

/*
==============
CG_ViewMP_HasViewModelsStreamed
==============
*/
char CG_ViewMP_HasViewModelsStreamed(const cg_t *cgameGlob)
{
  int v2; 
  DObj *viewModelDObj; 
  __int64 v4; 
  const XModel *v5; 

  if ( !cgameGlob && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_view_mp.cpp", 3146, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  v2 = 0;
  while ( 1 )
  {
    viewModelDObj = cgameGlob->m_weaponHand[v2].viewModelDObj;
    if ( viewModelDObj )
    {
      v4 = 0i64;
      if ( viewModelDObj->numModels )
        break;
    }
LABEL_12:
    if ( (unsigned int)++v2 >= 2 )
      return 1;
  }
  while ( 1 )
  {
    v5 = viewModelDObj->models[v4];
    if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_view_mp.cpp", 3159, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
      __debugbreak();
    if ( !CL_TransientsMP_IsXModelLoaded(v5) )
      break;
    v4 = (unsigned int)(v4 + 1);
    if ( (unsigned int)v4 >= viewModelDObj->numModels )
      goto LABEL_12;
  }
  if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 121, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
    __debugbreak();
  Com_Printf(16, "CG_ViewMP_HasViewModelsStreamed detected view model %s was unloaded while in use.\n", v5->name);
  return 0;
}

/*
==============
CG_ViewMP_Init
==============
*/
void CG_ViewMP_Init(const LocalClientNum_t localClientNum)
{
  CG_ViewMP_UpdateThirdPerson(localClientNum);
  CG_PredictMP_ClearSavedPlayerState(localClientNum);
  CG_PredictMP_SetupPlayerState(localClientNum);
  CL_Main_InvalidateSkeletonCache();
  CG_PredictMP_PredictPlayerState(localClientNum);
  CG_UpdateViewWeaponAnim(localClientNum);
  CG_View_CalcFov(localClientNum);
}

/*
==============
CG_ViewMP_IsKillstreakThermalVisionOn
==============
*/
_BOOL8 CG_ViewMP_IsKillstreakThermalVisionOn(const LocalClientNum_t localClientNum)
{
  cg_t *LocalClientGlobals; 
  BOOL v2; 
  BOOL v3; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_view_mp.cpp", 344, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  v2 = GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&LocalClientGlobals->predictedPlayerState.otherFlags, ACTIVE, 3u);
  v3 = GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&LocalClientGlobals->predictedPlayerState.otherFlags, ACTIVE, 1u) || (LocalClientGlobals->predictedPlayerState.linkFlags.m_flags[0] & 4) != 0;
  return v2 && v3;
}

/*
==============
CG_ViewMP_LastStandPoseOrderFixActive
==============
*/
bool CG_ViewMP_LastStandPoseOrderFixActive(const LocalClientNum_t localClientNum)
{
  CgGlobalsMP *LocalClientGlobals; 
  const dvar_t *v3; 

  LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals(localClientNum);
  if ( !GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&LocalClientGlobals->predictedPlayerState.otherFlags, ACTIVE, 0xBu) )
    return 0;
  v3 = DVARBOOL_killswitch_last_stand_pose_eval_order_fix_enabled;
  if ( !DVARBOOL_killswitch_last_stand_pose_eval_order_fix_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "killswitch_last_stand_pose_eval_order_fix_enabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  return v3->current.enabled && !LocalClientGlobals->predictedPlayerState.pm_type && CG_PlayersMP_ShouldProcessLocalPlayerEntity(localClientNum);
}

/*
==============
CG_ViewMP_LerpKillCamView
==============
*/

void __fastcall CG_ViewMP_LerpKillCamView(const LocalClientNum_t localClientNum, double _XMM1_8, double _XMM2_8, double _XMM3_8)
{
  int killCamLerpEndTime; 
  int killCamEntity; 
  centity_t *Entity; 
  int v118; 
  int v119; 
  int v120; 
  vec3_t outOrg; 
  __int64 v122; 
  vec3_t end; 
  vec3_t outOrigin; 
  trace_t results; 
  char v126; 
  void *retaddr; 

  _RAX = &retaddr;
  v122 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm6
    vmovaps xmmword ptr [rax-38h], xmm7
    vmovaps xmmword ptr [rax-48h], xmm10
  }
  Sys_ProfBeginNamedEvent(0xFFFF6347, "CG_ViewMP_LerpKillCamView");
  _RBX = CG_GetLocalClientGlobals(localClientNum);
  RefdefView_GetOrg(&_RBX->refdef.view, &outOrg);
  if ( _RBX->inKillCam )
  {
    killCamLerpEndTime = _RBX->killCamLerpEndTime;
    if ( killCamLerpEndTime > _RBX->time )
    {
      if ( killCamLerpEndTime <= _RBX->oldTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_view_mp.cpp", 280, ASSERT_TYPE_ASSERT, "( cgameGlob->killCamLerpEndTime ) > ( cgameGlob->oldTime )", "%s > %s\n\t%i, %i", "cgameGlob->killCamLerpEndTime", "cgameGlob->oldTime", _RBX->killCamLerpEndTime, _RBX->oldTime) )
        __debugbreak();
      __asm
      {
        vxorps  xmm1, xmm1, xmm1
        vcvtsi2ss xmm1, xmm1, dword ptr [rbx+65E4h]
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, eax
        vdivss  xmm10, xmm1, xmm0
      }
      killCamEntity = _RBX->killCamEntity;
      __asm
      {
        vxorps  xmm1, xmm1, xmm1
        vxorps  xmm2, xmm2, xmm2
        vxorps  xmm4, xmm4, xmm4
      }
      if ( killCamEntity != 2047 && _RBX->killCamFirstFrameRan )
      {
        Entity = CG_GetEntity(localClientNum, killCamEntity);
        __asm
        {
          vxorps  xmm1, xmm1, xmm1
          vxorps  xmm2, xmm2, xmm2
          vxorps  xmm4, xmm4, xmm4
        }
        if ( (Entity->flags & 1) != 0 && _RBX->frametime > 0 )
        {
          CG_GetPoseOrigin(&Entity->pose, &outOrigin);
          __asm
          {
            vmovss  xmm0, dword ptr [rbp+50h+outOrigin]
            vsubss  xmm5, xmm0, dword ptr [rbx+0B5160h]
            vmovss  xmm1, dword ptr [rbp+50h+outOrigin+4]
            vsubss  xmm4, xmm1, dword ptr [rbx+0B5164h]
            vmovss  xmm0, dword ptr [rbp+50h+outOrigin+8]
            vsubss  xmm3, xmm0, dword ptr [rbx+0B5168h]
            vxorps  xmm2, xmm2, xmm2
            vcvtsi2ss xmm2, xmm2, dword ptr [rbx+65E4h]
            vmovss  xmm1, cs:__real@3f800000
            vdivss  xmm0, xmm1, xmm2
            vmulss  xmm1, xmm0, xmm5
            vmulss  xmm2, xmm0, xmm4
            vmulss  xmm4, xmm0, xmm3
          }
          memset(&outOrigin, 0, sizeof(outOrigin));
        }
      }
      __asm
      {
        vxorps  xmm3, xmm3, xmm3
        vcvtsi2ss xmm3, xmm3, eax
        vmulss  xmm0, xmm3, xmm1
        vaddss  xmm1, xmm0, dword ptr [rsp+150h+outOrg]
        vmovss  dword ptr [rbp+50h+end], xmm1
        vmulss  xmm2, xmm3, xmm2
        vaddss  xmm0, xmm2, dword ptr [rsp+150h+outOrg+4]
        vmovss  dword ptr [rbp+50h+end+4], xmm0
        vmulss  xmm1, xmm3, xmm4
        vaddss  xmm2, xmm1, dword ptr [rsp+150h+outOrg+8]
        vmovss  dword ptr [rbp+50h+end+8], xmm2
      }
      PhysicsQuery_LegacyTrace((Physics_WorldId)(3 * localClientNum + 2), &results, &outOrg, &end, &KILLCAM_BOUNDS_0, _RBX->predictedPlayerState.clientNum, 0, 8390785, 0, NULL, All);
      if ( results.startsolid )
      {
        __asm { vmovsd  xmm0, qword ptr [rsp+150h+outOrg] }
        end.v[2] = outOrg.v[2];
        __asm
        {
          vmovss  xmm5, dword ptr [rbp+50h+end+8]
          vshufps xmm6, xmm0, xmm0, 55h ; 'U'
          vmovsd  qword ptr [rbp+50h+end], xmm0
          vmovss  xmm7, dword ptr [rbp+50h+end]
        }
      }
      else
      {
        __asm
        {
          vmovss  xmm0, dword ptr [rbp+50h+end]
          vsubss  xmm1, xmm0, dword ptr [rsp+150h+outOrg]
          vmovss  xmm5, [rbp+50h+results.fraction]
          vmulss  xmm1, xmm1, xmm5
          vaddss  xmm7, xmm1, dword ptr [rsp+150h+outOrg]
          vmovss  dword ptr [rbp+50h+end], xmm7
          vmovss  xmm0, dword ptr [rbp+50h+end+4]
          vsubss  xmm1, xmm0, dword ptr [rsp+150h+outOrg+4]
          vmulss  xmm2, xmm1, xmm5
          vaddss  xmm6, xmm2, dword ptr [rsp+150h+outOrg+4]
          vmovss  dword ptr [rbp+50h+end+4], xmm6
          vmovss  xmm0, dword ptr [rbp+50h+end+8]
          vsubss  xmm1, xmm0, dword ptr [rsp+150h+outOrg+8]
          vmulss  xmm2, xmm1, xmm5
          vaddss  xmm5, xmm2, dword ptr [rsp+150h+outOrg+8]
          vmovss  dword ptr [rbp+50h+end+8], xmm5
        }
      }
      __asm
      {
        vmovss  xmm2, dword ptr [rbx+0B5190h]
        vsubss  xmm0, xmm7, xmm2
        vmulss  xmm1, xmm0, xmm10
        vaddss  xmm2, xmm1, xmm2
        vmovss  dword ptr [rsp+150h+outOrg], xmm2
        vmovss  xmm3, dword ptr [rbx+0B5194h]
        vsubss  xmm0, xmm6, xmm3
        vmulss  xmm1, xmm0, xmm10
        vaddss  xmm2, xmm1, xmm3
        vmovss  dword ptr [rsp+150h+outOrg+4], xmm2
        vmovss  xmm4, dword ptr [rbx+0B5198h]
        vsubss  xmm0, xmm5, xmm4
        vmulss  xmm1, xmm0, xmm10
        vaddss  xmm2, xmm1, xmm4
        vmovss  dword ptr [rsp+150h+outOrg+8], xmm2
      }
      _RCX = &_RBX->refdefViewAngles;
      __asm
      {
        vmovss  xmm0, dword ptr [rcx]
        vmovss  xmm4, dword ptr [rbx+0B5184h]
        vsubss  xmm0, xmm0, xmm4
        vmulss  xmm3, xmm0, cs:__real@3b360b61
        vaddss  xmm1, xmm3, cs:__real@3f000000
        vxorps  xmm7, xmm7, xmm7
        vroundss xmm0, xmm7, xmm1, 1
        vsubss  xmm0, xmm3, xmm0
        vmovss  xmm6, cs:__real@43b40000
        vmulss  xmm0, xmm0, xmm6
        vmulss  xmm1, xmm0, xmm10
        vaddss  xmm2, xmm1, xmm4
        vmovss  dword ptr [rcx], xmm2
        vmovss  xmm0, dword ptr [rbx+178C4h]
        vmovss  xmm5, dword ptr [rbx+0B5188h]
        vsubss  xmm0, xmm0, xmm5
        vmulss  xmm4, xmm0, cs:__real@3b360b61
        vaddss  xmm2, xmm4, cs:__real@3f000000
        vroundss xmm3, xmm7, xmm2, 1
        vsubss  xmm0, xmm4, xmm3
        vmulss  xmm1, xmm0, xmm6
        vmulss  xmm2, xmm1, xmm10
        vaddss  xmm3, xmm2, xmm5
        vmovss  dword ptr [rbx+178C4h], xmm3
        vmovss  xmm0, dword ptr [rbx+178C8h]
        vmovss  xmm5, dword ptr [rbx+0B518Ch]
        vsubss  xmm0, xmm0, xmm5
        vmulss  xmm4, xmm0, cs:__real@3b360b61
        vaddss  xmm2, xmm4, cs:__real@3f000000
        vroundss xmm3, xmm7, xmm2, 1
        vsubss  xmm0, xmm4, xmm3
        vmulss  xmm1, xmm0, xmm6
        vmulss  xmm2, xmm1, xmm10
        vaddss  xmm3, xmm2, xmm5
        vmovss  dword ptr [rbx+178C8h], xmm3
      }
      AnglesToAxis(&_RBX->refdefViewAngles, &_RBX->refdef.view.axis);
      if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_STILL_LAND|WEAPON_FIRING) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_view_mp.cpp", 315, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_THIRD_PERSON ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_THIRD_PERSON )") )
        __debugbreak();
      _RBX->renderingThirdPerson = 1;
    }
    if ( _RBX->killCamEntityType )
    {
      CG_KillCam_GetKillCamEntityOrgAngles(localClientNum, &_RBX->killCamPrevBombOrigin, &outOrigin);
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+0B5160h]
        vmovss  dword ptr [rsp+150h+var_F0], xmm0
      }
      if ( (v118 & 0x7F800000) == 2139095040 )
        goto LABEL_28;
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+0B5164h]
        vmovss  dword ptr [rsp+150h+var_F0], xmm0
      }
      if ( (v119 & 0x7F800000) == 2139095040 )
        goto LABEL_28;
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+0B5168h]
        vmovss  dword ptr [rsp+150h+var_F0], xmm0
      }
      if ( (v120 & 0x7F800000) == 2139095040 )
      {
LABEL_28:
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_view_mp.cpp", 324, ASSERT_TYPE_SANITY, "( !IS_NAN( ( cgameGlob->killCamPrevBombOrigin )[0] ) && !IS_NAN( ( cgameGlob->killCamPrevBombOrigin )[1] ) && !IS_NAN( ( cgameGlob->killCamPrevBombOrigin )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( cgameGlob->killCamPrevBombOrigin )[0] ) && !IS_NAN( ( cgameGlob->killCamPrevBombOrigin )[1] ) && !IS_NAN( ( cgameGlob->killCamPrevBombOrigin )[2] )") )
          __debugbreak();
      }
      _RBX->killCamFirstFrameRan = 1;
    }
  }
  _RBX->killCamOldViewAngles.v[0] = _RBX->refdefViewAngles.v[0];
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+178C4h]
    vmovss  dword ptr [rbx+0B5188h], xmm0
    vmovss  xmm1, dword ptr [rbx+178C8h]
    vmovss  dword ptr [rbx+0B518Ch], xmm1
    vmovss  xmm0, dword ptr [rsp+150h+outOrg]
    vmovss  dword ptr [rbx+0B5190h], xmm0
    vmovss  xmm1, dword ptr [rsp+150h+outOrg+4]
    vmovss  dword ptr [rbx+0B5194h], xmm1
    vmovss  xmm0, dword ptr [rsp+150h+outOrg+8]
    vmovss  dword ptr [rbx+0B5198h], xmm0
  }
  RefdefView_SetOrg(&_RBX->refdef.view, &outOrg);
  memset(&outOrg, 0, sizeof(outOrg));
  Sys_ProfEndNamedEvent();
  _R11 = &v126;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm10, xmmword ptr [r11-30h]
  }
}

/*
==============
CG_ViewMP_NoKickReturn
==============
*/
bool CG_ViewMP_NoKickReturn(const LocalClientNum_t localClientNum, const playerState_s *ps)
{
  __int64 v3; 
  CgWeaponMap *v5; 
  const Weapon *Weapon; 
  GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64> *p_weapFlags; 
  const Weapon *v8; 
  __int64 weaponIdx; 
  bool v10; 
  bool v11; 
  __int64 v15; 

  v3 = localClientNum;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_view_mp.cpp", 2039, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !CgWeaponMap::ms_instance[v3] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
    __debugbreak();
  v5 = CgWeaponMap::ms_instance[v3];
  if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 885, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 886, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  Weapon = BgWeaponMap::GetWeapon(v5, ps->weapCommon.weaponHandle);
  p_weapFlags = &ps->weapCommon.weapFlags;
  v8 = Weapon;
  if ( !GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(p_weapFlags, ACTIVE, 0x22u) && !GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(p_weapFlags, ACTIVE, 0x11u) )
    GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(p_weapFlags, ACTIVE, 0x1Bu);
  weaponIdx = v8->weaponIdx;
  if ( (unsigned int)weaponIdx > bg_lastParsedWeaponIndex )
  {
    LODWORD(v15) = v8->weaponIdx;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1218, ASSERT_TYPE_ASSERT, "( weaponIndex ) <= ( bg_lastParsedWeaponIndex )", "weaponIndex not in [0, bg_lastParsedWeaponIndex]\n\t%u not in [0, %u]", v15, bg_lastParsedWeaponIndex) )
      __debugbreak();
  }
  v10 = bg_weaponCompleteDefs[weaponIdx] == NULL;
  if ( !bg_weaponCompleteDefs[weaponIdx] )
  {
    v11 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1219, ASSERT_TYPE_ASSERT, "(bg_weaponCompleteDefs[weaponIndex])", (const char *)&queryFormat, "bg_weaponCompleteDefs[weaponIndex]");
    v10 = !v11;
    if ( v11 )
      __debugbreak();
  }
  _RAX = bg_weaponCompleteDefs[weaponIdx];
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vucomiss xmm0, dword ptr [rax+1CCh]
  }
  if ( !v10 )
    return 0;
  __asm { vucomiss xmm0, dword ptr [rax+1D0h] }
  return v10;
}

/*
==============
CG_ViewMP_OffsetChaseCamView
==============
*/
void CG_ViewMP_OffsetChaseCamView(LocalClientNum_t localClientNum)
{
  const dvar_t *v9; 
  int integer; 
  ClActiveClientMP *ClientMP; 
  float startSolidOffset; 
  vec3_t outOrg; 
  vec3_t clViewangles; 
  vec3_t angles; 
  __int64 v75; 
  vec3_t end; 
  vec3_t forward; 
  vec3_t up; 
  vec3_t right; 
  char v80; 
  void *retaddr; 

  _RAX = &retaddr;
  v75 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm6
    vmovaps xmmword ptr [rax-38h], xmm7
    vmovaps xmmword ptr [rax-48h], xmm8
    vmovaps xmmword ptr [rax-58h], xmm9
    vmovaps xmmword ptr [rax-68h], xmm10
    vmovaps xmmword ptr [rax-78h], xmm11
  }
  v9 = DCONST_DVARINT_cg_thirdPersonMode;
  if ( !DCONST_DVARINT_cg_thirdPersonMode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_thirdPersonMode") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v9);
  integer = v9->current.integer;
  _RDI = DCONST_DVARFLT_cg_thirdPersonAngle;
  if ( !DCONST_DVARFLT_cg_thirdPersonAngle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_thirdPersonAngle") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RDI);
  __asm { vmovss  xmm11, dword ptr [rdi+28h] }
  _RDI = DCONST_DVARFLT_cg_thirdPersonRange;
  if ( !DCONST_DVARFLT_cg_thirdPersonRange && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_thirdPersonRange") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RDI);
  __asm { vmovss  xmm10, dword ptr [rdi+28h] }
  _RBX = CG_GetLocalClientGlobals(localClientNum);
  if ( _RBX == (cg_t *)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2275, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&_RBX->predictedPlayerState.otherFlags, GameModeFlagValues::ms_mpValue, 0x21u) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_view_mp.cpp", 462, ASSERT_TYPE_ASSERT, "(BG_IsSpectating( &cgameGlob->predictedPlayerState ))", (const char *)&queryFormat, "BG_IsSpectating( &cgameGlob->predictedPlayerState )") )
    __debugbreak();
  ClientMP = ClActiveClientMP::GetClientMP(localClientNum);
  ClActiveClient_GetCLViewangles(ClientMP, &clViewangles);
  ClActiveClient_GetCLViewangles(ClientMP, &angles);
  if ( integer == 1 )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+130h+angles+4]
      vaddss  xmm8, xmm0, dword ptr [rbx+178C4h]
      vmovss  dword ptr [rsp+130h+angles+4], xmm8
      vmovss  xmm0, dword ptr [rsp+130h+clViewangles+4]
      vaddss  xmm1, xmm0, dword ptr [rbx+178C4h]
    }
  }
  else
  {
    __asm
    {
      vmovss  xmm8, dword ptr [rsp+130h+angles+4]
      vmovss  xmm1, dword ptr [rsp+130h+clViewangles+4]
    }
  }
  __asm
  {
    vmulss  xmm3, xmm1, cs:__real@3b360b61
    vaddss  xmm1, xmm3, cs:__real@3f000000
    vxorps  xmm6, xmm6, xmm6
    vroundss xmm0, xmm6, xmm1, 1
    vsubss  xmm0, xmm3, xmm0
    vmulss  xmm0, xmm0, cs:__real@43b40000
    vmovss  dword ptr [rsp+130h+clViewangles+4], xmm0
    vmulss  xmm4, xmm8, cs:__real@3b360b61
    vaddss  xmm1, xmm4, cs:__real@3f000000
    vroundss xmm3, xmm6, xmm1, 1
    vsubss  xmm0, xmm4, xmm3
    vmulss  xmm1, xmm0, cs:__real@43b40000
    vmovss  dword ptr [rsp+130h+angles+4], xmm1
  }
  AngleVectors(&clViewangles, &forward, NULL, NULL);
  RefdefView_GetOrg(&_RBX->refdef.view, &outOrg);
  __asm
  {
    vmovss  xmm3, cs:__real@44000000
    vmulss  xmm1, xmm3, dword ptr [rbp+30h+forward]
    vmovss  xmm9, dword ptr [rsp+130h+outOrg]
    vaddss  xmm8, xmm1, xmm9
    vmulss  xmm2, xmm3, dword ptr [rbp+30h+forward+4]
    vmovss  xmm7, dword ptr [rsp+130h+outOrg+4]
    vaddss  xmm6, xmm2, xmm7
    vmulss  xmm1, xmm3, dword ptr [rbp+30h+forward+8]
    vaddss  xmm4, xmm1, dword ptr [rsp+130h+outOrg+8]
    vunpcklps xmm0, xmm9, xmm7
    vmovsd  qword ptr [rsp+130h+outOrg], xmm0
    vmovsd  qword ptr [rsp+130h+end], xmm0
  }
  end.v[2] = outOrg.v[2];
  __asm
  {
    vsubss  xmm3, xmm8, xmm9
    vsubss  xmm1, xmm6, xmm7
    vsubss  xmm0, xmm4, dword ptr [rsp+130h+outOrg+8]; Y
    vmulss  xmm2, xmm1, xmm1
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm2, xmm2, xmm1
    vsqrtss xmm3, xmm2, xmm2
    vmaxss  xmm1, xmm3, cs:__real@3f800000; X
  }
  *(float *)&_XMM0 = atan2f_0(*(float *)&_XMM0, *(float *)&_XMM1);
  __asm
  {
    vmulss  xmm1, xmm0, cs:__real@c2652ee0
    vmovss  dword ptr [rsp+130h+clViewangles], xmm1
    vmovss  xmm2, dword ptr [rsp+130h+clViewangles+4]
    vsubss  xmm0, xmm2, xmm11
    vmovss  dword ptr [rsp+130h+clViewangles+4], xmm0
  }
  AngleVectors(&clViewangles, &forward, &right, &up);
  __asm
  {
    vxorps  xmm4, xmm10, cs:__xmm@80000000800000008000000080000000
    vmulss  xmm2, xmm4, dword ptr [rbp+30h+forward]
    vaddss  xmm2, xmm2, dword ptr [rsp+130h+end]
    vmovss  dword ptr [rsp+130h+end], xmm2
    vmulss  xmm3, xmm4, dword ptr [rbp+30h+forward+4]
    vaddss  xmm2, xmm3, dword ptr [rsp+130h+end+4]
    vmovss  dword ptr [rsp+130h+end+4], xmm2
    vmulss  xmm3, xmm4, dword ptr [rbp+30h+forward+8]
    vaddss  xmm2, xmm3, dword ptr [rbp+30h+end+8]
    vmovss  dword ptr [rbp+30h+end+8], xmm2
    vmovss  xmm0, cs:__real@41700000
    vmovss  [rsp+130h+startSolidOffset], xmm0
  }
  CG_View_ThirdPersonViewTrace(localClientNum, &_RBX->predictedPlayerState, &outOrg, &end, 33636369, startSolidOffset, &outOrg);
  RefdefView_SetOrg(&_RBX->refdef.view, &outOrg);
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+130h+angles]
    vmovss  dword ptr [rbx+178C0h], xmm0
    vmovss  xmm1, dword ptr [rsp+130h+angles+4]
    vmovss  dword ptr [rbx+178C4h], xmm1
    vmovss  xmm0, dword ptr [rsp+130h+angles+8]
    vmovss  dword ptr [rbx+178C8h], xmm0
  }
  AnglesToAxis(&angles, &_RBX->refdef.view.axis);
  memset(&outOrg, 0, sizeof(outOrg));
  memset(&clViewangles, 0, sizeof(clViewangles));
  memset(&angles, 0, sizeof(angles));
  _R11 = &v80;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
  }
}

/*
==============
CG_ViewMP_OffsetThirdPersonView
==============
*/
void CG_ViewMP_OffsetThirdPersonView(const LocalClientNum_t localClientNum)
{
  CgHandler *Handler; 
  int pm_type; 
  bool v20; 
  bool v21; 
  const vec4_t *v29; 
  BOOL Bool_Internal_DebugName; 
  BOOL v34; 
  int v129; 
  bool v130; 
  int entity; 
  char v148; 
  const char *v185; 
  const dvar_t *v186; 
  int Int_Internal_DebugName; 
  const dvar_t *v188; 
  float outLocation; 
  vec3_t outOrg; 
  _BOOL8 v209; 
  vec3_t bodyReferencePoint; 
  __int64 v211; 
  vec3_t end; 
  vec3_t v213; 
  vec3_t forward; 
  vec3_t idealLocation; 
  vec3_t angles; 
  vec3_t center; 
  vec3_t right; 
  vec3_t up; 
  WorldUpReferenceFrame v220; 
  trace_t results; 
  char v222; 
  void *retaddr; 

  _RAX = &retaddr;
  v211 = -2i64;
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
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_STILL_LAND|WEAPON_FIRING) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_view_mp.cpp", 710, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_THIRD_PERSON ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_THIRD_PERSON )") )
    __debugbreak();
  _RDI = CgGlobalsMP::GetLocalClientGlobals(localClientNum);
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_view_mp.cpp", 713, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  Handler = CgHandler::getHandler(localClientNum);
  WorldUpReferenceFrame::WorldUpReferenceFrame(&v220, &_RDI->predictedPlayerState, Handler);
  __asm { vmovss  xmm12, cs:__real@41700000 }
  if ( BG_IsTurretActive(&_RDI->predictedPlayerState) )
  {
    _RSI = DCONST_DVARFLT_thirdPersonViewTurretHeight;
    if ( !DCONST_DVARFLT_thirdPersonViewTurretHeight && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "thirdPersonViewTurretHeight") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RSI);
    __asm { vmovss  xmm6, dword ptr [rsi+28h] }
  }
  else if ( _RDI->predictedPlayerState.vehicleState.entity == 2047 )
  {
    if ( _RDI->m_isMLGSpectator )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rdi+1F0h]
        vaddss  xmm6, xmm0, xmm12
      }
    }
    else
    {
      __asm { vmovss  xmm6, dword ptr [rdi+1F0h] }
    }
  }
  else
  {
    __asm { vmovss  xmm6, cs:__real@41a00000 }
  }
  RefdefView_GetOrg(&_RDI->refdef.view, &outOrg);
  __asm { vmovaps xmm1, xmm6; height }
  WorldUpReferenceFrame::AddUpContribution(&v220, *(float *)&_XMM1, &outOrg);
  RefdefView_SetOrg(&_RDI->refdef.view, &outOrg);
  if ( CG_Camera_DeathCam_Update(localClientNum, &_RDI->refdef.view) )
    goto LABEL_79;
  pm_type = _RDI->predictedPlayerState.pm_type;
  LOBYTE(v209) = pm_type >= 7;
  v20 = pm_type >= 7 && _RDI->m_fixedDeathCameraClientForced;
  v21 = pm_type >= 7 && GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagStrict(&_RDI->predictedPlayerState.otherFlags, FOG_SCALE|0x20);
  if ( CG_GameInterface_RunDeathCamOverride(localClientNum, v209) )
    goto LABEL_79;
  if ( !v20 )
  {
    if ( !v21 )
    {
      if ( !BG_IsSpectating(&_RDI->predictedPlayerState) || _RDI->predictedPlayerState.deltaTime )
      {
        __asm
        {
          vmovsd  xmm0, qword ptr [rsp+260h+outOrg]
          vmovsd  qword ptr [rsp+260h+bodyReferencePoint], xmm0
        }
        bodyReferencePoint.v[2] = outOrg.v[2];
        *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_cg_thirdPersonAngle, "cg_thirdPersonAngle");
        __asm { vmovaps xmm13, xmm0 }
        *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_cg_thirdPersonRange, "cg_thirdPersonRange");
        __asm { vmovaps xmm11, xmm0 }
        Bool_Internal_DebugName = Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_cg_thirdPersonNoYaw, "cg_thirdPersonNoYaw");
        v34 = Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_cg_thirdPersonNoPitch, "cg_thirdPersonNoPitch");
        if ( BG_IsTurretActive(&_RDI->predictedPlayerState) )
        {
          Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_thirdPersonViewTurretRangeAddition, "thirdPersonViewTurretRangeAddition");
          __asm { vaddss  xmm11, xmm11, xmm0 }
        }
        __asm
        {
          vmovss  xmm4, dword ptr [rdi+178C4h]
          vmovss  xmm5, dword ptr [rdi+178C8h]
          vmovss  xmm9, cs:__real@3b360b61
          vmulss  xmm3, xmm9, dword ptr [rdi+178C0h]
          vmovss  xmm14, cs:__real@3f000000
          vaddss  xmm1, xmm3, xmm14
          vxorps  xmm8, xmm8, xmm8
          vroundss xmm0, xmm8, xmm1, 1
          vsubss  xmm0, xmm3, xmm0
          vmovss  xmm7, cs:__real@43b40000
          vmulss  xmm0, xmm0, xmm7
          vmovss  dword ptr [rbp+160h+var_1C0], xmm0
          vmulss  xmm4, xmm9, xmm4
          vaddss  xmm1, xmm4, xmm14
          vroundss xmm3, xmm8, xmm1, 1
          vsubss  xmm0, xmm4, xmm3
          vmulss  xmm1, xmm0, xmm7
          vmovss  dword ptr [rbp+160h+var_1C0+4], xmm1
          vmulss  xmm4, xmm9, xmm5
          vaddss  xmm2, xmm4, xmm14
          vroundss xmm3, xmm8, xmm2, 1
          vsubss  xmm0, xmm4, xmm3
          vmulss  xmm1, xmm0, xmm7
          vmovss  dword ptr [rbp+160h+var_1C0+8], xmm1
          vmovss  xmm0, dword ptr [rdi+178C0h]
          vmovss  dword ptr [rbp+160h+angles], xmm0
          vmovss  xmm5, dword ptr [rdi+178C4h]
          vmovss  xmm6, dword ptr [rdi+178C8h]
          vmulss  xmm4, xmm0, xmm9
          vaddss  xmm1, xmm4, xmm14
          vroundss xmm3, xmm8, xmm1, 1
          vsubss  xmm0, xmm4, xmm3
          vmulss  xmm10, xmm0, xmm7
          vmovss  dword ptr [rbp+160h+angles], xmm10
          vmulss  xmm4, xmm9, xmm5
          vaddss  xmm1, xmm4, xmm14
          vroundss xmm3, xmm8, xmm1, 1
          vsubss  xmm0, xmm4, xmm3
          vmulss  xmm1, xmm0, xmm7
          vmovss  dword ptr [rbp+160h+angles+4], xmm1
          vmulss  xmm4, xmm9, xmm6
          vaddss  xmm2, xmm4, xmm14
          vroundss xmm3, xmm8, xmm2, 1
          vsubss  xmm0, xmm4, xmm3
          vmulss  xmm1, xmm0, xmm7
          vmovss  dword ptr [rbp+160h+angles+8], xmm1
          vxorps  xmm7, xmm7, xmm7
        }
        if ( Bool_Internal_DebugName )
        {
          __asm
          {
            vmovss  dword ptr [rbp+160h+var_1C0+4], xmm7
            vmovss  dword ptr [rbp+160h+angles+4], xmm7
          }
        }
        if ( v34 )
        {
          __asm
          {
            vmovss  dword ptr [rbp+160h+var_1C0], xmm7
            vxorps  xmm10, xmm10, xmm10
            vmovss  dword ptr [rbp+160h+angles], xmm10
          }
        }
        if ( _RDI->predictedPlayerState.pm_type < 7 )
        {
          __asm
          {
            vmovss  xmm1, cs:__real@42340000
            vcmpltss xmm0, xmm1, xmm10
            vblendvps xmm0, xmm10, xmm1, xmm0
            vmovss  dword ptr [rbp+160h+angles], xmm0
          }
        }
        else
        {
          __asm
          {
            vmovss  dword ptr [rbp+160h+angles], xmm7
            vmovss  dword ptr [rbp+160h+angles+8], xmm7
            vxorps  xmm0, xmm0, xmm0
            vcvtsi2ss xmm0, xmm0, dword ptr [rdi+264h]
            vmovss  dword ptr [rbp+160h+angles+4], xmm0
            vmovss  dword ptr [rbp+160h+var_1C0], xmm7
            vmovss  dword ptr [rbp+160h+var_1C0+8], xmm7
            vxorps  xmm0, xmm0, xmm0
            vcvtsi2ss xmm0, xmm0, dword ptr [rdi+264h]
            vmovss  dword ptr [rbp+160h+var_1C0+4], xmm0
          }
        }
        AngleVectors(&angles, &forward, NULL, NULL);
        __asm
        {
          vmovss  xmm3, cs:__real@44000000
          vmulss  xmm1, xmm3, dword ptr [rbp+160h+forward]
          vaddss  xmm2, xmm1, dword ptr [rsp+260h+outOrg]
          vmovss  dword ptr [rbp+160h+center], xmm2
          vmulss  xmm1, xmm3, dword ptr [rbp+160h+forward+4]
          vaddss  xmm2, xmm1, dword ptr [rsp+260h+outOrg+4]
          vmovss  dword ptr [rbp+160h+center+4], xmm2
          vmulss  xmm1, xmm3, dword ptr [rbp+160h+forward+8]
          vaddss  xmm2, xmm1, dword ptr [rsp+260h+outOrg+8]
          vmovss  dword ptr [rbp+160h+center+8], xmm2
          vmovss  xmm8, cs:__real@40800000
          vmovss  xmm9, cs:__real@40000000
        }
        if ( Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_cg_thirdPersonCamDebug, "cg_thirdPersonCamDebug") )
        {
          __asm
          {
            vmulss  xmm1, xmm8, dword ptr [rbp+160h+forward]
            vaddss  xmm2, xmm1, dword ptr [rsp+260h+outOrg]
            vmovss  dword ptr [rbp+160h+end], xmm2
            vmulss  xmm1, xmm8, dword ptr [rbp+160h+forward+4]
            vaddss  xmm2, xmm1, dword ptr [rsp+260h+outOrg+4]
            vmovss  dword ptr [rbp+160h+end+4], xmm2
            vmulss  xmm1, xmm8, dword ptr [rbp+160h+forward+8]
            vaddss  xmm2, xmm1, dword ptr [rsp+260h+outOrg+8]
            vmovss  dword ptr [rbp+160h+end+8], xmm2
          }
          CG_DebugLine(&outOrg, &end, &colorYellow, 1, 600);
          __asm { vmovaps xmm1, xmm9; radius }
          CG_DebugSphere(&outOrg, *(float *)&_XMM1, &colorYellow, 1, 600);
          __asm { vmovaps xmm1, xmm9; radius }
          CG_DebugSphere(&center, *(float *)&_XMM1, &colorFacebookBlue, 0, 600);
        }
        __asm
        {
          vmovss  xmm0, dword ptr [rsp+260h+outOrg]
          vmovss  dword ptr [rbp+160h+idealLocation], xmm0
          vmovss  xmm1, dword ptr [rsp+260h+outOrg+4]
          vmovss  dword ptr [rbp+160h+idealLocation+4], xmm1
          vmovss  xmm0, dword ptr [rsp+260h+outOrg+8]
          vaddss  xmm2, xmm0, cs:__real@41200000
          vmovss  dword ptr [rbp+160h+idealLocation+8], xmm2
          vmulss  xmm0, xmm14, dword ptr [rbp+160h+var_1C0]
          vmovss  dword ptr [rbp+160h+var_1C0], xmm0
          vmovss  xmm2, dword ptr [rbp+160h+var_1C0+4]
          vsubss  xmm1, xmm2, xmm13
          vmovss  dword ptr [rbp+160h+var_1C0+4], xmm1
        }
        AngleVectors(&v213, &forward, &right, &up);
        __asm
        {
          vxorps  xmm3, xmm11, cs:__xmm@80000000800000008000000080000000
          vmulss  xmm1, xmm3, dword ptr [rbp+160h+forward]
          vaddss  xmm1, xmm1, dword ptr [rbp+160h+idealLocation]
          vmovss  dword ptr [rbp+160h+idealLocation], xmm1
          vmulss  xmm2, xmm3, dword ptr [rbp+160h+forward+4]
          vaddss  xmm1, xmm2, dword ptr [rbp+160h+idealLocation+4]
          vmovss  dword ptr [rbp+160h+idealLocation+4], xmm1
          vmulss  xmm3, xmm3, dword ptr [rbp+160h+forward+8]
          vaddss  xmm1, xmm3, dword ptr [rbp+160h+idealLocation+8]
          vmovss  dword ptr [rbp+160h+idealLocation+8], xmm1
          vmovss  xmm10, cs:__real@3f800000
        }
        if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_deathCameraFailsafe, "deathCameraFailsafe") && _RDI->m_deathCameraFailsafeLock )
        {
          __asm
          {
            vmovss  xmm0, dword ptr [rsp+260h+bodyReferencePoint]
            vsubss  xmm3, xmm0, dword ptr [rdi+0C66ACh]
            vmovss  xmm1, dword ptr [rsp+260h+bodyReferencePoint+4]
            vsubss  xmm2, xmm1, dword ptr [rdi+0C66B0h]
            vmovss  xmm0, dword ptr [rbp+160h+bodyReferencePoint+8]
            vsubss  xmm4, xmm0, dword ptr [rdi+0C66B4h]
            vmulss  xmm2, xmm2, xmm2
            vmulss  xmm1, xmm3, xmm3
            vaddss  xmm3, xmm2, xmm1
            vmulss  xmm0, xmm4, xmm4
            vaddss  xmm2, xmm3, xmm0
            vsqrtss xmm6, xmm2, xmm2
          }
          *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_deathCameraFailsafeOffset, "deathCameraFailsafeOffset");
          __asm { vcomiss xmm6, xmm0 }
          if ( v148 )
          {
            CG_ViewMP_SolveDeathCameraFailsafePosition(_RDI, &forward, &right, &idealLocation, &bodyReferencePoint, &outOrg);
            RefdefView_SetOrg(&_RDI->refdef.view, &outOrg);
            __asm
            {
              vmovss  xmm0, dword ptr [rsp+260h+outOrg]
              vmovss  dword ptr [rdi+0C66ACh], xmm0
              vmovss  xmm1, dword ptr [rsp+260h+outOrg+4]
              vmovss  dword ptr [rdi+0C66B0h], xmm1
              vmovss  xmm0, dword ptr [rsp+260h+outOrg+8]
              vmovss  dword ptr [rdi+0C66B4h], xmm0
            }
          }
          else
          {
            RefdefView_SetOrg(&_RDI->refdef.view, &_RDI->m_deathCameraFailsafePosition);
          }
        }
        else
        {
          v129 = 33636369;
          if ( pm_type >= 7 )
            v129 = 8456721;
          __asm { vmovss  dword ptr [rsp+260h+outLocation], xmm12 }
          v130 = CG_View_ThirdPersonViewTrace(localClientNum, &_RDI->predictedPlayerState, &outOrg, &idealLocation, v129, outLocation, &outOrg);
          RefdefView_SetOrg(&_RDI->refdef.view, &outOrg);
          if ( !Dvar_GetBool_Internal_DebugName(DVARBOOL_deathCameraFailsafe, "deathCameraFailsafe") || v130 )
          {
            if ( pm_type >= 7 )
            {
              entity = _RDI->predictedPlayerState.vehicleState.entity;
              if ( entity == 2047 )
                entity = _RDI->predictedPlayerState.clientNum;
              PhysicsQuery_LegacyTrace((Physics_WorldId)(3 * localClientNum + 2), &results, &_RDI->m_fixedDeathCameraPos, &outOrg, &bounds_origin, entity, 0, 2065, 0, NULL, All);
              if ( Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_cg_thirdPersonCamDebug, "cg_thirdPersonCamDebug") )
                CG_DebugLine(&_RDI->m_fixedDeathCameraPos, &outOrg, &colorGreen, 1, 600);
              if ( v130 )
              {
                __asm
                {
                  vmovss  xmm0, dword ptr [rsp+260h+outOrg]
                  vsubss  xmm3, xmm0, dword ptr [rsp+260h+bodyReferencePoint]
                  vmovss  xmm1, dword ptr [rsp+260h+outOrg+4]
                  vsubss  xmm2, xmm1, dword ptr [rsp+260h+bodyReferencePoint+4]
                  vmovss  xmm0, dword ptr [rsp+260h+outOrg+8]
                  vsubss  xmm4, xmm0, dword ptr [rbp+160h+bodyReferencePoint+8]
                  vmulss  xmm2, xmm2, xmm2
                  vmulss  xmm1, xmm3, xmm3
                  vaddss  xmm3, xmm2, xmm1
                  vmulss  xmm0, xmm4, xmm4
                  vaddss  xmm2, xmm3, xmm0
                  vsqrtss xmm7, xmm2, xmm2
                }
              }
              __asm
              {
                vmovss  xmm0, dword ptr [rdi+0C6630h]
                vsubss  xmm6, xmm0, xmm7
              }
              *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_cg_deathCamMaxCutThreshold, "cg_deathCamMaxCutThreshold");
              __asm
              {
                vcomiss xmm6, xmm0
                vmovss  dword ptr [rdi+0C6630h], xmm7
              }
              if ( v130 && v148 )
              {
                __asm
                {
                  vmovss  xmm0, [rbp+160h+results.fraction]
                  vcomiss xmm0, xmm10
                }
              }
              else
              {
                if ( Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_cg_thirdPersonCamDebug, "cg_thirdPersonCamDebug") )
                {
                  __asm
                  {
                    vmovss  xmm0, dword ptr [rsp+260h+outOrg]
                    vsubss  xmm1, xmm0, dword ptr [rdi+0C6604h]
                    vmovss  xmm5, [rbp+160h+results.fraction]
                    vmulss  xmm1, xmm1, xmm5
                    vaddss  xmm0, xmm1, dword ptr [rdi+0C6604h]
                    vmovss  dword ptr [rbp+160h+end], xmm0
                    vmovss  xmm1, dword ptr [rsp+260h+outOrg+4]
                    vsubss  xmm0, xmm1, dword ptr [rdi+0C6608h]
                    vmulss  xmm2, xmm0, xmm5
                    vaddss  xmm3, xmm2, dword ptr [rdi+0C6608h]
                    vmovss  dword ptr [rbp+160h+end+4], xmm3
                    vmovss  xmm0, dword ptr [rsp+260h+outOrg+8]
                    vsubss  xmm1, xmm0, dword ptr [rdi+0C660Ch]
                    vmulss  xmm2, xmm1, xmm5
                    vaddss  xmm3, xmm2, dword ptr [rdi+0C660Ch]
                    vmovss  dword ptr [rbp+160h+end+8], xmm3
                    vmovss  xmm1, cs:__real@40c00000; radius
                  }
                  CG_DebugSphere(&end, *(float *)&_XMM1, &colorRed, 1, 600);
                }
                RefdefView_SetOrg(&_RDI->refdef.view, &_RDI->m_fixedDeathCameraPos);
                _RDI->m_fixedDeathCameraClientForced = 1;
              }
            }
          }
          else
          {
            CG_ViewMP_SolveDeathCameraFailsafePosition(_RDI, &forward, &right, &idealLocation, &bodyReferencePoint, &outOrg);
            RefdefView_SetOrg(&_RDI->refdef.view, &outOrg);
            __asm
            {
              vmovss  xmm0, dword ptr [rsp+260h+outOrg]
              vmovss  dword ptr [rdi+0C66ACh], xmm0
              vmovss  xmm1, dword ptr [rsp+260h+outOrg+4]
              vmovss  dword ptr [rdi+0C66B0h], xmm1
              vmovss  xmm0, dword ptr [rsp+260h+outOrg+8]
              vmovss  dword ptr [rdi+0C66B4h], xmm0
            }
            _RDI->m_deathCameraFailsafeLock = 1;
          }
        }
        RefdefView_GetOrg(&_RDI->refdef.view, &outOrg);
        __asm
        {
          vmovss  xmm0, dword ptr [rbp+160h+center]
          vsubss  xmm2, xmm0, dword ptr [rsp+260h+outOrg]
          vmovss  dword ptr [rbp+160h+center], xmm2
          vmovss  xmm0, dword ptr [rbp+160h+center+4]
          vsubss  xmm1, xmm0, dword ptr [rsp+260h+outOrg+4]
          vmovss  dword ptr [rbp+160h+center+4], xmm1
          vmovss  xmm0, dword ptr [rbp+160h+center+8]
          vsubss  xmm0, xmm0, dword ptr [rsp+260h+outOrg+8]; Y
          vmovss  dword ptr [rbp+160h+center+8], xmm0
          vmulss  xmm2, xmm2, xmm2
          vmulss  xmm1, xmm1, xmm1
          vaddss  xmm2, xmm2, xmm1
          vsqrtss xmm3, xmm2, xmm2
          vmaxss  xmm1, xmm3, xmm10; X
        }
        *(float *)&_XMM0 = atan2f_0(*(float *)&_XMM0, *(float *)&_XMM1);
        __asm
        {
          vmulss  xmm1, xmm0, cs:__real@c2652ee0
          vmovss  dword ptr [rbp+160h+var_1C0], xmm1
          vmovss  dword ptr [rdi+178C0h], xmm1
          vmovss  xmm0, dword ptr [rbp+160h+var_1C0+4]
          vmovss  dword ptr [rdi+178C4h], xmm0
          vmovss  xmm1, dword ptr [rbp+160h+var_1C0+8]
          vmovss  dword ptr [rdi+178C8h], xmm1
        }
        AnglesToAxis(&v213, &_RDI->refdef.view.axis);
        if ( Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_cg_thirdPersonCamDebug, "cg_thirdPersonCamDebug") )
        {
          __asm
          {
            vmulss  xmm1, xmm8, dword ptr [rdi+6944h]
            vaddss  xmm2, xmm1, dword ptr [rsp+260h+outOrg]
            vmovss  dword ptr [rbp+160h+end], xmm2
            vmulss  xmm1, xmm8, dword ptr [rdi+6948h]
            vaddss  xmm2, xmm1, dword ptr [rsp+260h+outOrg+4]
            vmovss  dword ptr [rbp+160h+end+4], xmm2
            vmulss  xmm3, xmm8, dword ptr [rdi+694Ch]
            vaddss  xmm2, xmm3, dword ptr [rsp+260h+outOrg+8]
            vmovss  dword ptr [rbp+160h+end+8], xmm2
          }
          CG_DebugLine(&outOrg, &end, &colorGreen, 1, 600);
          __asm { vmovaps xmm1, xmm9; radius }
          CG_DebugSphere(&outOrg, *(float *)&_XMM1, &colorGreen, 1, 600);
        }
        memset(&bodyReferencePoint, 0, sizeof(bodyReferencePoint));
      }
      else
      {
        CG_ViewMP_OffsetChaseCamView(localClientNum);
        if ( Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_cg_thirdPersonCamDebug, "cg_thirdPersonCamDebug") )
        {
          RefdefView_GetOrg(&_RDI->refdef.view, &outOrg);
          __asm
          {
            vmovss  xmm3, cs:__real@40800000
            vmulss  xmm0, xmm3, dword ptr [rdi+6944h]
            vaddss  xmm1, xmm0, dword ptr [rsp+260h+outOrg]
            vmovss  dword ptr [rbp+160h+end], xmm1
            vmulss  xmm0, xmm3, dword ptr [rdi+6948h]
            vaddss  xmm1, xmm0, dword ptr [rsp+260h+outOrg+4]
            vmovss  dword ptr [rbp+160h+end+4], xmm1
            vmulss  xmm0, xmm3, dword ptr [rdi+694Ch]
            vaddss  xmm1, xmm0, dword ptr [rsp+260h+outOrg+8]
            vmovss  dword ptr [rbp+160h+end+8], xmm1
          }
          CG_DebugLine(&outOrg, &end, &colorBlue, 1, 600);
          v29 = &colorBlue;
LABEL_78:
          __asm { vmovss  xmm1, cs:__real@40000000; radius }
          CG_DebugSphere(&outOrg, *(float *)&_XMM1, v29, 1, 600);
          goto LABEL_79;
        }
      }
      goto LABEL_79;
    }
    goto LABEL_72;
  }
  if ( v21 )
  {
LABEL_72:
    v185 = "cg_fixedDeathCamInterpTimeMs";
    v186 = DVARINT_cg_fixedDeathCamInterpTimeMs;
    goto LABEL_73;
  }
  v185 = "cg_fixedDeathCamTraceFailedInterpTimeMs";
  v186 = DVARINT_cg_fixedDeathCamTraceFailedInterpTimeMs;
LABEL_73:
  Int_Internal_DebugName = Dvar_GetInt_Internal_DebugName(v186, v185);
  CG_ViewMP_FixedDeathCameraThirdPersonUpdate(localClientNum, &outOrg, Int_Internal_DebugName);
  v188 = DCONST_DVARBOOL_cg_thirdPersonCamDebug;
  if ( !DCONST_DVARBOOL_cg_thirdPersonCamDebug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_thirdPersonCamDebug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v188);
  if ( v188->current.enabled )
  {
    AngleVectors(&_RDI->refdefViewAngles, &forward, NULL, NULL);
    __asm
    {
      vmovss  xmm3, cs:__real@40800000
      vmulss  xmm1, xmm3, dword ptr [rbp+160h+forward]
      vaddss  xmm2, xmm1, dword ptr [rsp+260h+outOrg]
      vmovss  dword ptr [rbp+160h+end], xmm2
      vmulss  xmm1, xmm3, dword ptr [rbp+160h+forward+4]
      vaddss  xmm2, xmm1, dword ptr [rsp+260h+outOrg+4]
      vmovss  dword ptr [rbp+160h+end+4], xmm2
      vmulss  xmm1, xmm3, dword ptr [rbp+160h+forward+8]
      vaddss  xmm2, xmm1, dword ptr [rsp+260h+outOrg+8]
      vmovss  dword ptr [rbp+160h+end+8], xmm2
    }
    CG_DebugLine(&outOrg, &end, &colorCyan, 1, 600);
    v29 = &colorCyan;
    goto LABEL_78;
  }
LABEL_79:
  memset(&outOrg, 0, sizeof(outOrg));
  _R11 = &v222;
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
CG_ViewMP_PrefetchPlayerCards
==============
*/
void CG_ViewMP_PrefetchPlayerCards(LocalClientNum_t localClientNum)
{
  const dvar_t *v5; 
  CgGlobalsMP *LocalClientGlobals; 
  unsigned int v7; 
  unsigned int maxClients; 
  const dvar_t *v9; 
  unsigned int unsignedInt; 
  unsigned int m_nextPrefetchPlayerCardClientIndex; 
  unsigned int v12; 
  const char *v14; 
  bool v17; 
  bool v18; 
  bool v19; 
  bool v23; 
  char v29; 
  char v30; 
  bool v32; 
  __int64 v33; 
  __int64 v34; 
  const PartyData *GameParty; 
  const dvar_t *v36; 
  int CacheLocation; 
  __int16 v38; 
  __int16 v39; 
  CachedPlayerCard *v40; 
  unsigned int v41; 
  const GfxImage **image; 
  char *v43; 
  StreamMiniDistance v44; 
  const GfxImage *v45; 
  unsigned __int16 v46; 
  const GfxImage *BackgroundImageByRef; 
  double v51; 
  double v52; 
  double v53; 
  __int16 v54[2]; 
  unsigned int v55; 
  int v56; 
  unsigned int v57; 
  unsigned int v58; 
  int v59; 
  CgStatic *LocalClientStatics; 
  XUID result; 
  CgGlobalsMP *v62; 
  __int64 v63; 
  char v64; 
  void *retaddr; 
  unsigned int v66; 
  int out_patch; 
  int out_backing; 

  _RAX = &retaddr;
  v63 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
  }
  v5 = DCONST_DVARBOOL_cg_prefetchPlayercards;
  if ( !DCONST_DVARBOOL_cg_prefetchPlayercards && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_prefetchPlayercards") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v5);
  if ( !v5->current.enabled )
    goto LABEL_76;
  Sys_ProfBeginNamedEvent(0xFFFFFFFF, "CG_ViewMP_PrefetchPlayerCards");
  LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals(localClientNum);
  v62 = LocalClientGlobals;
  LocalClientStatics = CgStatic::GetLocalClientStatics(localClientNum);
  v7 = 0;
  v66 = 0;
  maxClients = cls.maxClients;
  v59 = cls.maxClients;
  v9 = DCONST_DVARINT_cg_prefetchPlayerCardsFrameCount;
  if ( !DCONST_DVARINT_cg_prefetchPlayerCardsFrameCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_prefetchPlayerCardsFrameCount") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v9);
  unsignedInt = maxClients;
  if ( v9->current.integer < (signed int)maxClients )
    unsignedInt = v9->current.unsignedInt;
  v57 = unsignedInt;
  m_nextPrefetchPlayerCardClientIndex = LocalClientGlobals->m_nextPrefetchPlayerCardClientIndex;
  v55 = m_nextPrefetchPlayerCardClientIndex;
  v12 = m_nextPrefetchPlayerCardClientIndex + maxClients;
  v58 = m_nextPrefetchPlayerCardClientIndex + maxClients;
  if ( maxClients <= 0x14 )
  {
    _RBX = DCONST_DVARFLT_cg_imageHintDistancePlayerCards;
    if ( !DCONST_DVARFLT_cg_imageHintDistancePlayerCards )
    {
      v14 = "cg_imageHintDistancePlayerCards";
LABEL_15:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", v14) )
        __debugbreak();
    }
  }
  else
  {
    _RBX = DCONST_DVARFLT_cg_imageHintDistancePlayerCardsLow;
    if ( !DCONST_DVARFLT_cg_imageHintDistancePlayerCardsLow )
    {
      v14 = "cg_imageHintDistancePlayerCardsLow";
      goto LABEL_15;
    }
  }
  Dvar_CheckFrontendServerThread(_RBX);
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+28h]
    vmulss  xmm6, xmm0, xmm0
    vmovss  [rsp+0E8h+out_patch], xmm6
  }
  v17 = (out_patch & 0x7F800000u) < 0x7F800000;
  v18 = (out_patch & 0x7F800000u) <= 0x7F800000;
  if ( (out_patch & 0x7F800000) == 2139095040 )
  {
    v19 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_mini_distance.h", 51, ASSERT_TYPE_SANITY, "( !IS_NAN( distance ) )", (const char *)&queryFormat, "!IS_NAN( distance )");
    v17 = 0;
    v18 = !v19;
    if ( v19 )
      __debugbreak();
  }
  __asm
  {
    vxorps  xmm7, xmm7, xmm7
    vcomiss xmm6, xmm7
  }
  if ( v17 )
  {
    __asm
    {
      vcvtss2sd xmm1, xmm6, xmm6
      vxorpd  xmm0, xmm0, xmm0
      vmovsd  [rsp+0E8h+var_A8], xmm0
      vmovsd  [rsp+0E8h+var_B0], xmm1
    }
    v23 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_mini_distance.h", 52, ASSERT_TYPE_ASSERT, "( distance ) >= ( 0.f )", "%s >= %s\n\t%g, %g", "distance", "0.f", v51, v53);
    v17 = 0;
    v18 = !v23;
    if ( v23 )
      __debugbreak();
  }
  __asm
  {
    vmulss  xmm0, xmm6, cs:__real@3ecccccd
    vminss  xmm1, xmm0, cs:__real@3f800000
    vmovss  xmm3, cs:__real@437f0000
    vmulss  xmm2, xmm1, xmm3
    vcvttss2si edx, xmm2
  }
  v56 = _EDX;
  __asm { vcomiss xmm2, xmm7 }
  if ( v17 )
    goto LABEL_26;
  __asm { vcomiss xmm2, cs:__real@4b800000 }
  if ( !v18 )
  {
LABEL_26:
    v29 = 0;
    v18 = 1;
  }
  else
  {
    v29 = 1;
  }
  __asm
  {
    vcomiss xmm2, xmm7
    vcomiss xmm2, xmm3
  }
  v30 = v18;
  if ( !v29 || !v30 )
  {
    __asm
    {
      vcvtss2sd xmm0, xmm2, xmm2
      vmovsd  [rsp+0E8h+var_B0], xmm0
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 437, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (IntegralType) 0x%jx == (FloatType) %f", "unsigned char __cdecl float_to_integral_cast<unsigned char,float>(float)", (unsigned __int8)_EDX, v52) )
      __debugbreak();
  }
  if ( m_nextPrefetchPlayerCardClientIndex < v12 )
  {
    while ( 1 )
    {
      v32 = v7 == unsignedInt;
      if ( v7 >= unsignedInt )
        goto LABEL_72;
      v33 = m_nextPrefetchPlayerCardClientIndex % maxClients;
      v34 = ((__int64 (__fastcall *)(CgStatic *))LocalClientStatics->GetClientInfo)(LocalClientStatics);
      if ( !v34 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_view_mp.cpp", 1939, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
        __debugbreak();
      GameParty = Live_GetGameParty();
      if ( Party_IsMemberIndexDataAvailable(GameParty, v33) || *(_BYTE *)(v34 + 188) )
        break;
      v36 = DCONST_DVARBOOL_cl_devLoadPlayerCards;
      if ( !DCONST_DVARBOOL_cl_devLoadPlayerCards && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_devLoadPlayerCards") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v36);
      if ( v36->current.enabled )
      {
        PlayercardCache_GetRandomPatchAndBacking(v33, &out_patch, &out_backing);
LABEL_47:
        v38 = out_patch;
        if ( (out_patch < 0 || (unsigned int)out_patch > 0xFFFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,int>(int)", "unsigned", (unsigned __int16)out_patch, "signed", out_patch) )
          __debugbreak();
        v54[0] = v38;
        v39 = out_backing;
        if ( (out_backing < 0 || (unsigned int)out_backing > 0xFFFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,int>(int)", "unsigned", (unsigned __int16)out_backing, "signed", out_backing) )
          __debugbreak();
        v54[1] = v39;
        v40 = &LocalClientGlobals->m_cachedPlayerCard[v33];
        v41 = 0;
        image = LocalClientGlobals->m_cachedPlayerCard[v33].image;
        v43 = (char *)((char *)v54 - (char *)v40);
        v44.mValue = v56;
        do
        {
          v45 = *image;
          v46 = *(_WORD *)&v43[(_QWORD)v40];
          if ( !*image || v40->index[0] != v46 )
          {
            if ( v41 )
              BackgroundImageByRef = PlayerCards_GetBackgroundImageByRef(v46);
            else
              BackgroundImageByRef = PlayerCards_GetPatchImageByRef(v46);
            v45 = BackgroundImageByRef;
            if ( BackgroundImageByRef )
              Com_Printf(14, "CG_ViewMP_PrefetchPlayerCards: Image '%s' for player %d\n", BackgroundImageByRef->name, (unsigned int)v33);
            *image = v45;
            v40->index[0] = v46;
          }
          if ( v45 && (v45->flags & 0x40) != 0 )
            Stream_HintImageAtDistance(v45, v44);
          ++v41;
          ++image;
          v40 = (CachedPlayerCard *)((char *)v40 + 2);
        }
        while ( v41 < 2 );
        v7 = ++v66;
        m_nextPrefetchPlayerCardClientIndex = v55;
        unsignedInt = v57;
        LocalClientGlobals = v62;
        v12 = v58;
        goto LABEL_70;
      }
      v7 = v66;
LABEL_70:
      v55 = ++m_nextPrefetchPlayerCardClientIndex;
      maxClients = v59;
      if ( m_nextPrefetchPlayerCardClientIndex >= v12 )
        goto LABEL_71;
    }
    CacheLocation = PlayerCardData_GetCacheLocation();
    Party_GetXuid(&result, GameParty, v33);
    PlayercardCache_GetPlayercard_Patch_Backing(result, (const char *)(v34 + 4), CacheLocation, &out_patch, &out_backing);
    goto LABEL_47;
  }
LABEL_71:
  v32 = v7 == unsignedInt;
LABEL_72:
  if ( v32 )
    LocalClientGlobals->m_nextPrefetchPlayerCardClientIndex = m_nextPrefetchPlayerCardClientIndex % maxClients;
  else
    LocalClientGlobals->m_nextPrefetchPlayerCardClientIndex = 0;
  Sys_ProfEndNamedEvent();
LABEL_76:
  _R11 = &v64;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
  }
}

/*
==============
CG_ViewMP_ProcessLocalPlayerEntity
==============
*/
void CG_ViewMP_ProcessLocalPlayerEntity(CgGlobalsMP *cgameGlob)
{
  LocalClientNum_t localClientNum; 
  centity_t *predictedPlayerEntity; 
  __int64 v4; 
  unsigned int scriptableIndex; 

  if ( !cgameGlob && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_view_mp.cpp", 3341, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  localClientNum = cgameGlob->localClientNum;
  if ( CG_PlayersMP_ShouldProcessLocalPlayerEntity(localClientNum) )
  {
    CG_PlayersMP_ProcessLocalPlayerEntity(localClientNum);
  }
  else
  {
    predictedPlayerEntity = cgameGlob->predictedPlayerEntity;
    if ( ScriptableCl_IsScriptableEntity(localClientNum, predictedPlayerEntity) )
    {
      if ( ScriptableCl_GetIndexForEntity(localClientNum, predictedPlayerEntity, &scriptableIndex) )
      {
        ScriptableCl_UpdatePosition(localClientNum, scriptableIndex, predictedPlayerEntity);
        ScriptableCl_UpdateSharedInstance(localClientNum, scriptableIndex, predictedPlayerEntity->nextState.number);
      }
      else
      {
        LODWORD(v4) = predictedPlayerEntity->nextState.eType;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_view_mp.cpp", 3363, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Player Entity has a reserved scriptable but cannot resolve the index for that scriptable. Entity Type:%d, Entity Number:%d", v4, predictedPlayerEntity->nextState.number) )
          __debugbreak();
      }
    }
  }
}

/*
==============
CG_ViewMP_SetClientEntCollision
==============
*/
void CG_ViewMP_SetClientEntCollision(LocalClientNum_t localClientNum, bool enableCollision)
{
  cg_t *LocalClientGlobals; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( LocalClientGlobals )
  {
    LocalClientGlobals->clientCollisionLinked = enableCollision;
  }
  else
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_view_mp.cpp", 2139, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
      __debugbreak();
    MEMORY[0xB5324] = enableCollision;
  }
}

/*
==============
CG_ViewMP_SetupRefDefBrCircle
==============
*/
void CG_ViewMP_SetupRefDefBrCircle(const LocalClientNum_t localClientNum)
{
  CgGlobalsMP *LocalClientGlobals; 
  centity_t *m_brCircleEnt; 
  const dvar_t *v6; 
  const dvar_t *v7; 
  const dvar_t *v8; 
  const dvar_t *v9; 
  const dvar_t *v30; 
  const dvar_t *v31; 
  const dvar_t *v32; 
  const dvar_t *v33; 
  const dvar_t *v34; 
  const dvar_t *v35; 
  const dvar_t *v36; 
  const dvar_t *v37; 
  const dvar_t *v38; 
  char v42; 
  char v43; 
  int m_brCircleStartTime; 
  int v46; 
  vec3_t outOrigin; 

  LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals(localClientNum);
  _RSI = LocalClientGlobals;
  m_brCircleEnt = LocalClientGlobals->m_brCircleEnt;
  if ( m_brCircleEnt && (m_brCircleEnt->flags & 1) != 0 )
  {
    CG_GetPoseOrigin(&m_brCircleEnt->pose, &outOrigin);
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+88h+outOrigin]
      vmovss  xmm1, dword ptr [rsp+88h+outOrigin+4]
      vmovss  dword ptr [rsi+6B3Ch], xmm0
      vmovss  dword ptr [rsi+6B40h], xmm1
    }
    _RSI->refdef.brCircle.radius = _RSI->m_brCircleRadius;
    v6 = DCONST_DVARFLT_cg_brCircleFogHeight;
    if ( !DCONST_DVARFLT_cg_brCircleFogHeight && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_brCircleFogHeight") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v6);
    LODWORD(_RSI->refdef.brCircle.height) = v6->current.integer;
    v7 = DCONST_DVARFLT_cg_brCircleFogInset;
    if ( !DCONST_DVARFLT_cg_brCircleFogInset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_brCircleFogInset") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v7);
    LODWORD(_RSI->refdef.brCircle.fogInset) = v7->current.integer;
    v8 = DCONST_DVARFLT_cg_brCircleFogOuterColorDistance;
    if ( !DCONST_DVARFLT_cg_brCircleFogOuterColorDistance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_brCircleFogOuterColorDistance") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v8);
    LODWORD(_RSI->refdef.brCircle.blendDistance) = v8->current.integer;
    v9 = DCONST_DVARFLT_cg_brCircleSkyDistanceMultiplier;
    if ( !DCONST_DVARFLT_cg_brCircleSkyDistanceMultiplier && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_brCircleSkyDistanceMultiplier") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v9);
    LODWORD(_RSI->refdef.brCircle.skyDistanceMultiplier) = v9->current.integer;
    Dvar_GetVec3_Internal_DebugName(DVARVEC3_cg_brCircleVolumetricFogInnerColor, "cg_brCircleVolumetricFogInnerColor", &_RSI->refdef.brCircle.volumetricInnerColor);
    Dvar_GetVec3_Internal_DebugName(DVARVEC3_cg_brCircleVolumetricFogOuterColor, "cg_brCircleVolumetricFogOuterColor", &_RSI->refdef.brCircle.volumetricOuterColor);
    Dvar_GetVec3_Internal_DebugName(DVARVEC3_cg_brCircleDistanceFogInnerColor, "cg_brCircleDistanceFogInnerColor", &_RSI->refdef.brCircle.distanceInnerColor);
    Dvar_GetVec3_Internal_DebugName(DVARVEC3_cg_brCircleDistanceFogOuterColor, "cg_brCircleDistanceFogOuterColor", &_RSI->refdef.brCircle.distanceOuterColor);
    _RDI = DVARVEC4_cg_brCirclePerceptualTint;
    if ( !DVARVEC4_cg_brCirclePerceptualTint && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 741, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_brCirclePerceptualTint") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RDI);
    __asm
    {
      vmovss  xmm2, dword ptr [rdi+34h]
      vmulss  xmm0, xmm2, dword ptr [rdi+28h]
      vmovss  xmm1, dword ptr [rdi+2Ch]
      vmovss  xmm3, dword ptr [rdi+30h]
      vmovss  dword ptr [rsi+6B30h], xmm0
      vmulss  xmm0, xmm2, xmm3
      vmulss  xmm1, xmm2, xmm1
      vmovss  dword ptr [rsi+6B38h], xmm0
      vmovss  dword ptr [rsi+6B34h], xmm1
    }
    _RDI = DCONST_DVARVEC2_cg_brCircleVolumetricFogParams;
    if ( !DCONST_DVARVEC2_cg_brCircleVolumetricFogParams && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 727, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_brCircleVolumetricFogParams") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RDI);
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+28h]
      vmovss  xmm1, dword ptr [rdi+2Ch]
      vmovss  dword ptr [rsi+6B58h], xmm0
      vmovss  dword ptr [rsi+6B5Ch], xmm1
    }
    _RDI = DCONST_DVARVEC3_cg_brCircleDistanceFogParams;
    if ( !DCONST_DVARVEC3_cg_brCircleDistanceFogParams && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 734, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_brCircleDistanceFogParams") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RDI);
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+28h]
      vmovss  xmm1, dword ptr [rdi+2Ch]
      vmovss  xmm2, dword ptr [rdi+30h]
      vmovss  dword ptr [rsi+6B64h], xmm0
      vmovss  dword ptr [rsi+6B68h], xmm1
      vmovss  dword ptr [rsi+6B6Ch], xmm2
    }
    _RDI = DCONST_DVARVEC2_cg_brCircleHeightFalloff;
    if ( !DCONST_DVARVEC2_cg_brCircleHeightFalloff && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 727, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_brCircleHeightFalloff") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RDI);
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+28h]
      vmovss  xmm1, dword ptr [rdi+2Ch]
      vmovss  dword ptr [rsi+6B60h], xmm0
      vmovss  dword ptr [rsi+6B54h], xmm1
    }
    _RDI = DCONST_DVARVEC2_cg_brCircleDistanceFogBlend;
    if ( !DCONST_DVARVEC2_cg_brCircleDistanceFogBlend && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 727, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_brCircleDistanceFogBlend") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RDI);
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+28h]
      vmovss  xmm1, dword ptr [rdi+2Ch]
      vmovss  dword ptr [rsi+6B74h], xmm0
      vmovss  dword ptr [rsi+6B78h], xmm1
    }
    v30 = DCONST_DVARFLT_cg_brCircleDistanceHeightBlend;
    if ( !DCONST_DVARFLT_cg_brCircleDistanceHeightBlend && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_brCircleDistanceHeightBlend") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v30);
    LODWORD(_RSI->refdef.brCircle.distanceHeightBlend) = v30->current.integer;
    v31 = DCONST_DVARFLT_cg_brCircleDistanceHeightViewBlend;
    if ( !DCONST_DVARFLT_cg_brCircleDistanceHeightViewBlend && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_brCircleDistanceHeightViewBlend") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v31);
    LODWORD(_RSI->refdef.brCircle.distanceHeightViewBlend) = v31->current.integer;
    v32 = DCONST_DVARFLT_cg_brCircleDistanceHeightBlendStart;
    if ( !DCONST_DVARFLT_cg_brCircleDistanceHeightBlendStart && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_brCircleDistanceHeightBlendStart") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v32);
    LODWORD(_RSI->refdef.brCircle.distanceHeightBlendStart) = v32->current.integer;
    v33 = DCONST_DVARFLT_cg_brCircleFogDensityScale;
    if ( !DCONST_DVARFLT_cg_brCircleFogDensityScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_brCircleFogDensityScale") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v33);
    LODWORD(_RSI->refdef.brCircle.densityScale) = v33->current.integer;
    v34 = DCONST_DVARFLT_cg_brCircleFogDensityBias;
    if ( !DCONST_DVARFLT_cg_brCircleFogDensityBias && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_brCircleFogDensityBias") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v34);
    LODWORD(_RSI->refdef.brCircle.densityBias) = v34->current.integer;
    v35 = DCONST_DVARFLT_cg_brCircleFogDensityNoiseScale;
    if ( !DCONST_DVARFLT_cg_brCircleFogDensityNoiseScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_brCircleFogDensityNoiseScale") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v35);
    LODWORD(_RSI->refdef.brCircle.densityNoiseScale) = v35->current.integer;
    v36 = DCONST_DVARFLT_cg_brCircleFogDensityNoiseBias;
    if ( !DCONST_DVARFLT_cg_brCircleFogDensityNoiseBias && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_brCircleFogDensityNoiseBias") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v36);
    LODWORD(_RSI->refdef.brCircle.densityNoiseBias) = v36->current.integer;
    v37 = DCONST_DVARVEC2_cg_brCircleFogDensityTiling;
    if ( !DCONST_DVARVEC2_cg_brCircleFogDensityTiling && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 727, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_brCircleFogDensityTiling") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v37);
    LODWORD(_RSI->refdef.brCircle.densityTiling.v[0]) = v37->current.integer;
    _RSI->refdef.brCircle.densityTiling.v[1] = v37->current.vector.v[1];
    v38 = DCONST_DVARVEC2_cg_brCircleFogDensityScrollingSpeed;
    if ( !DCONST_DVARVEC2_cg_brCircleFogDensityScrollingSpeed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 727, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_brCircleFogDensityScrollingSpeed") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v38);
    LODWORD(_RSI->refdef.brCircle.densityScrollingSpeed.v[0]) = v38->current.integer;
    _RSI->refdef.brCircle.densityScrollingSpeed.v[1] = v38->current.vector.v[1];
    _RDI = DCONST_DVARFLT_cg_brCircleFogBlendInTime;
    if ( !DCONST_DVARFLT_cg_brCircleFogBlendInTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_brCircleFogBlendInTime") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RDI);
    __asm
    {
      vmovss  xmm1, dword ptr [rdi+28h]
      vxorps  xmm3, xmm3, xmm3
      vcomiss xmm1, xmm3
    }
    if ( !(v42 | v43) )
    {
      m_brCircleStartTime = _RSI->m_brCircleStartTime;
      if ( m_brCircleStartTime > 0 )
      {
        v46 = _RSI->predictedPlayerState.serverTime - m_brCircleStartTime;
        if ( v46 < 0 )
          v46 = 0;
        _ECX = v46;
      }
      else
      {
        _ECX = 0;
      }
      __asm
      {
        vmovd   xmm0, ecx
        vcvtdq2ps xmm0, xmm0
        vmulss  xmm2, xmm0, cs:__real@3a83126f
        vdivss  xmm0, xmm2, xmm1; val
        vmovss  xmm2, cs:__real@3f800000; max
        vxorps  xmm1, xmm1, xmm1; min
      }
      *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      __asm
      {
        vsubss  xmm1, xmm0, cs:__real@3f800000
        vmulss  xmm1, xmm1, cs:__real@41200000; Y
        vmovss  xmm0, cs:__real@40000000; X
      }
      *(float *)&_XMM0 = powf_0(*(float *)&_XMM0, *(float *)&_XMM1);
      __asm
      {
        vmulss  xmm1, xmm0, dword ptr [rsi+6B64h]
        vmulss  xmm0, xmm0, dword ptr [rsi+6B58h]
        vmovss  dword ptr [rsi+6B58h], xmm0
        vmovss  dword ptr [rsi+6B64h], xmm1
      }
    }
  }
  else
  {
    LocalClientGlobals->m_brCircleStartTime = 0;
  }
}

/*
==============
CG_ViewMP_ShouldRenderThirdPerson
==============
*/
__int64 CG_ViewMP_ShouldRenderThirdPerson(LocalClientNum_t localClientNum, CgGlobalsMP *cgameGlob)
{
  unsigned int v4; 
  CgMLGSpectator *MLGSpectator; 
  CgMLGCameraManager *CameraManager; 
  CgHandler *Handler; 

  if ( !cgameGlob && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_view_mp.cpp", 1040, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  if ( cgameGlob->predictedPlayerState.pm_type == 3 )
    return 0i64;
  v4 = 1;
  if ( cgameGlob->m_isMLGSpectator )
  {
    MLGSpectator = CgMLGSpectator::GetMLGSpectator(localClientNum);
    CameraManager = CgMLGSpectator::GetCameraManager(MLGSpectator);
    if ( CgMLGCameraManager::ShouldRenderThirdPerson(CameraManager) )
      return 1i64;
  }
  if ( cgameGlob->vehicleEntryHidesPlayer || CG_Camera_Transition_IsHidingWorldmodel(localClientNum, 0) )
    return 0i64;
  Handler = CgHandler::getHandler(cgameGlob->localClientNum);
  if ( BG_GetRemoteControlledVehicleEntityNum(&cgameGlob->predictedPlayerState, Handler) != 2047 || GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&cgameGlob->predictedPlayerState.otherFlags, ACTIVE, 1u) || cgameGlob->predictedPlayerState.pm_type >= 7 || (cgameGlob->predictedPlayerState.linkFlags.m_flags[0] & 4) != 0 || XCamData::IsActive(&cgameGlob->xCam) || cgameGlob->predictedPlayerState.activeExecution != 255 || (unsigned int)(Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_execution_debug, "execution_debug") - 1) <= 1 || CG_View_IsKillCamEntityView(localClientNum) || CG_IsCinematicCameraActive(localClientNum) )
    return 1i64;
  if ( CG_Camera_Active_IsThirdPerson(localClientNum) )
  {
    cgameGlob->activeCameraEnabledThirdPerson = 1;
    return 1i64;
  }
  if ( !BG_IsSpectating(&cgameGlob->predictedPlayerState) || CG_View_IsKillCamView(localClientNum) )
  {
    if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_STILL_LAND|WEAPON_FIRING) || !Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_bg_thirdPerson, "bg_thirdPerson") )
      return 0;
    return v4;
  }
  else
  {
    if ( GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&cgameGlob->predictedPlayerState.otherFlags, GameModeFlagValues::ms_mpValue, 0x2Bu) )
      return 1i64;
    return (unsigned int)cgameGlob->spectatingThirdPerson;
  }
}

/*
==============
CG_ViewMP_ShouldUpdatePlayerCardsStreaming
==============
*/
bool CG_ViewMP_ShouldUpdatePlayerCardsStreaming(const LocalClientNum_t localClientNum)
{
  return CgGlobalsMP::GetLocalClientGlobals(localClientNum)->m_usePlayerCards && ClStatic::IsFirstActiveGameLocalClient(&cls, localClientNum);
}

/*
==============
CG_ViewMP_SolveDeathCameraFailsafePosition
==============
*/
bool CG_ViewMP_SolveDeathCameraFailsafePosition(const CgGlobalsMP *cgameGlob, const vec3_t *forward, const vec3_t *right, const vec3_t *idealLocation, const vec3_t *bodyReferencePoint, vec3_t *outLocation)
{
  LocalClientNum_t localClientNum; 
  int *v20; 
  int v22; 
  unsigned int v23; 
  int skipEntity; 
  char v53; 
  bool result; 
  vec3_t start; 
  tmat33_t<vec3_t> outAxis; 
  Bounds bounds; 
  trace_t results; 
  int v69[2]; 
  char v70; 
  char v74; 
  char v78; 
  char v82; 
  char v86; 
  char v90; 
  char v94; 
  char v98; 
  char v102; 
  char v106; 
  char v110; 
  char v114; 
  char v118; 
  char v119; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm8
  }
  _R15 = idealLocation;
  _RBX = bodyReferencePoint;
  if ( !cgameGlob && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_view_mp.cpp", 606, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  __asm
  {
    vmovss  xmm8, cs:__real@3f800000
    vmovss  xmm0, cs:__real@bf800000
    vxorps  xmm1, xmm1, xmm1
  }
  v70 = 0;
  v74 = 0;
  v78 = 1;
  __asm
  {
    vmovss  [rbp+160h+var_140], xmm1
    vmovss  [rbp+160h+var_13C], xmm1
    vmovss  [rbp+160h+var_138], xmm1
    vmovss  [rbp+160h+var_130], xmm1
    vmovss  [rbp+160h+var_12C], xmm1
    vmovss  [rbp+160h+var_128], xmm8
    vmovss  [rbp+160h+var_120], xmm1
    vmovss  [rbp+160h+var_11C], xmm1
    vmovss  [rbp+160h+var_118], xmm8
    vmovss  [rbp+160h+var_110], xmm8
    vmovss  [rbp+160h+var_10C], xmm1
    vmovss  [rbp+160h+var_108], xmm8
    vmovss  [rbp+160h+var_100], xmm1
    vmovss  [rbp+160h+var_FC], xmm8
    vmovss  [rbp+160h+var_F8], xmm8
    vmovss  [rbp+160h+var_F0], xmm1
    vmovss  [rbp+160h+var_EC], xmm0
    vmovss  [rbp+160h+var_E8], xmm8
    vmovss  [rbp+160h+var_E0], xmm1
    vmovss  [rbp+160h+var_DC], xmm8
    vmovss  [rbp+160h+var_D8], xmm1
    vmovss  [rbp+160h+var_D0], xmm1
    vmovss  [rbp+160h+var_CC], xmm0
    vmovss  [rbp+160h+var_C8], xmm1
    vmovss  [rbp+160h+var_C0], xmm8
    vmovss  [rbp+160h+var_BC], xmm8
    vmovss  [rbp+160h+var_B8], xmm8
    vmovss  [rbp+160h+var_B0], xmm8
    vmovss  [rbp+160h+var_AC], xmm0
    vmovss  [rbp+160h+var_A8], xmm8
    vmovss  [rbp+160h+var_A0], xmm8
    vmovss  [rbp+160h+var_9C], xmm8
    vmovss  [rbp+160h+var_98], xmm1
    vmovss  [rbp+160h+var_90], xmm8
    vmovss  [rbp+160h+var_8C], xmm0
    vmovss  [rbp+160h+var_88], xmm1
    vmovss  [rbp+160h+var_80], xmm8
    vmovss  [rbp+160h+var_7C], xmm1
    vmovss  [rbp+160h+var_78], xmm0
  }
  v82 = 1;
  v86 = 0;
  v90 = 0;
  v94 = 0;
  v98 = 0;
  v102 = 1;
  v106 = 1;
  v110 = 1;
  v114 = 1;
  v118 = 1;
  GenerateAxisFromForwardVector(forward, &identityMatrix33, &outAxis);
  __asm { vmovss  xmm1, cs:__real@41200000 }
  localClientNum = cgameGlob->localClientNum;
  v20 = v69;
  __asm
  {
    vmovups xmm0, cs:__xmm@41200000000000000000000000000000
    vmovss  dword ptr [rbp+160h+bounds.halfSize+4], xmm1
    vmovss  dword ptr [rbp+160h+bounds.halfSize+8], xmm1
  }
  v22 = 3 * localClientNum + 2;
  v23 = 0;
  __asm { vmovups xmmword ptr [rbp+160h+bounds.midPoint], xmm0 }
  while ( 1 )
  {
    if ( *((_BYTE *)v20 + 8) )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rbx]
        vmovss  xmm1, dword ptr [rbx+4]
        vmovss  dword ptr [rsp+260h+start], xmm0
        vmovss  xmm0, dword ptr [rbx+8]
      }
    }
    else
    {
      __asm
      {
        vmovss  xmm0, dword ptr [r15]
        vmovss  xmm1, dword ptr [r15+4]
        vmovss  dword ptr [rsp+260h+start], xmm0
        vmovss  xmm0, dword ptr [r15+8]
      }
    }
    _RDI = DVARFLT_deathCameraFailsafeOffset;
    __asm
    {
      vmovss  dword ptr [rsp+260h+start+8], xmm0
      vmovss  dword ptr [rsp+260h+start+4], xmm1
    }
    if ( !DVARFLT_deathCameraFailsafeOffset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "deathCameraFailsafeOffset") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RDI);
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+28h]
      vmulss  xmm5, xmm0, dword ptr [rsi-4]
      vmulss  xmm6, xmm0, dword ptr [rsi]
      vmulss  xmm7, xmm0, dword ptr [rsi+4]
      vmulss  xmm1, xmm5, dword ptr [rsp+260h+outAxis]
      vmulss  xmm0, xmm6, dword ptr [rbp+160h+outAxis+0Ch]
      vmulss  xmm4, xmm6, dword ptr [rbp+160h+outAxis+10h]
    }
    skipEntity = cgameGlob->predictedPlayerState.vehicleState.entity;
    __asm
    {
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm7, dword ptr [rbp+160h+outAxis+18h]
      vmulss  xmm0, xmm7, dword ptr [rbp+160h+outAxis+1Ch]
      vaddss  xmm3, xmm2, xmm1
      vaddss  xmm2, xmm3, dword ptr [rsp+260h+start]
      vmulss  xmm1, xmm5, dword ptr [rsp+260h+outAxis+4]
      vaddss  xmm3, xmm4, xmm1
      vmulss  xmm1, xmm7, dword ptr [rbp+160h+outAxis+20h]
      vaddss  xmm3, xmm3, xmm0
      vmovss  dword ptr [rsp+260h+start], xmm2
      vaddss  xmm2, xmm3, dword ptr [rsp+260h+start+4]
      vmulss  xmm3, xmm5, dword ptr [rbp+160h+outAxis+8]
      vmovss  dword ptr [rsp+260h+start+4], xmm2
      vmulss  xmm2, xmm6, dword ptr [rbp+160h+outAxis+14h]
      vaddss  xmm4, xmm3, xmm2
      vaddss  xmm3, xmm4, xmm1
      vaddss  xmm0, xmm3, dword ptr [rsp+260h+start+8]
      vmovss  dword ptr [rsp+260h+start+8], xmm0
    }
    if ( skipEntity == 2047 )
      skipEntity = cgameGlob->predictedPlayerState.clientNum;
    PhysicsQuery_LegacyTrace((Physics_WorldId)v22, &results, &start, &start, &bounds, skipEntity, 0, 33636369, 0, NULL, All);
    __asm
    {
      vmovss  xmm0, [rbp+160h+results.fraction]
      vucomiss xmm0, xmm8
    }
    if ( v53 )
    {
      PhysicsQuery_LegacyTrace((Physics_WorldId)v22, &results, bodyReferencePoint, &start, &bounds_origin, skipEntity, 0, 8456721, 0, NULL, All);
      __asm
      {
        vmovss  xmm0, [rbp+160h+results.fraction]
        vucomiss xmm0, xmm8
      }
      if ( v53 )
        break;
    }
    ++v23;
    v20 += 4;
    if ( v23 >= 0xD )
    {
      result = 0;
      goto LABEL_17;
    }
  }
  _RAX = outLocation;
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+260h+start]
    vmovss  xmm1, dword ptr [rsp+260h+start+4]
    vmovss  dword ptr [rax], xmm0
    vmovss  xmm0, dword ptr [rsp+260h+start+8]
    vmovss  dword ptr [rax+8], xmm0
    vmovss  dword ptr [rax+4], xmm1
  }
  result = 1;
LABEL_17:
  _R11 = &v119;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
  }
  return result;
}

/*
==============
CG_ViewMP_UpdateActiveLocalGameClient
==============
*/
void CG_ViewMP_UpdateActiveLocalGameClient(CgGlobalsMP *cgameGlob, LocalClientNum_t localClientNum)
{
  __int64 v2; 
  unsigned int m_omnvarIndexPostGameState; 
  bool Bool_Internal_DebugName; 
  bool v6; 
  char v7; 
  const char *v8; 
  __int64 v9; 
  const char *String_Internal_DebugName; 
  signed __int64 v11; 
  char v12; 
  __int64 v13; 
  char v14; 
  OmnvarValue v15; 
  bool v16; 
  bool v17; 
  bool Bool; 
  bool v19; 
  bool v20; 
  int v21; 
  bool v22; 
  int minvalue; 
  OmnvarValue v24; 
  int v25; 
  bool v26; 
  bool v27; 
  int v28; 
  unsigned int m_omnvarIndexScriptableLootHide; 
  const OmnvarData *v30; 
  const OmnvarDef *v31; 
  unsigned int m_omnvarIndexUiHidePlayerIcons; 
  const OmnvarData *v33; 
  const OmnvarDef *v34; 
  CgStatic *LocalClientStatics; 
  __int64 v36; 
  char v37; 
  bool v38; 
  int ControllerFromClient; 
  const dvar_t *v40; 
  int v41; 
  const dvar_t *v42; 
  Online_Commerce *Instance; 
  Online_Commerce *v44; 
  char v45; 
  Online_Commerce *v46; 
  bool HavePaidEntitlement; 
  bool v48; 
  __int64 v49; 
  __int64 v50; 
  bool v51; 
  unsigned int m_spectatorConstString; 
  OmnvarValue current; 
  unsigned int m_deadConstString; 
  OmnvarData *v55; 
  OmnvarData *data; 
  OmnvarDef *def; 
  OmnvarData *v58; 
  OmnvarDef *v59; 
  const OmnvarDef *v60; 
  OmnvarData *v61; 
  OmnvarData *v62; 
  OmnvarDef *v63; 
  bool v64; 
  bool v65; 
  int v66; 

  v2 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 182, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, 2) )
      __debugbreak();
    LODWORD(v50) = 2;
    LODWORD(v49) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 165, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v49, v50) )
      __debugbreak();
  }
  if ( !clientUIActives[v2].frontEndSceneState[0] && CL_GetLocalClientAnyConnectionState((const LocalClientNum_t)v2) == CA_ACTIVE )
  {
    m_omnvarIndexPostGameState = cgameGlob->m_omnvarIndexPostGameState;
    if ( m_omnvarIndexPostGameState != -1 && cgameGlob->m_omnvarIndexMatchInProgress != -1 && cgameGlob->m_omnvarIndexSessionState != -1 && cgameGlob->m_omnvarIndexStartMatchType != -1 && cgameGlob->m_omnvarIndexMatchHasMoreThan1Player != -1 && cgameGlob->m_omnvarIndexPlayerRespawning != -1 )
    {
      v61 = CG_Omnvar_GetData((LocalClientNum_t)v2, m_omnvarIndexPostGameState);
      v58 = CG_Omnvar_GetData((LocalClientNum_t)v2, cgameGlob->m_omnvarIndexMatchInProgress);
      v55 = CG_Omnvar_GetData((LocalClientNum_t)v2, cgameGlob->m_omnvarIndexSessionState);
      v62 = CG_Omnvar_GetData((LocalClientNum_t)v2, cgameGlob->m_omnvarIndexMatchHasMoreThan1Player);
      data = CG_Omnvar_GetData((LocalClientNum_t)v2, cgameGlob->m_omnvarIndexPlayerRespawning);
      v60 = BG_Omnvar_GetDef(cgameGlob->m_omnvarIndexPostGameState);
      v59 = (OmnvarDef *)BG_Omnvar_GetDef(cgameGlob->m_omnvarIndexMatchInProgress);
      v63 = (OmnvarDef *)BG_Omnvar_GetDef(cgameGlob->m_omnvarIndexMatchHasMoreThan1Player);
      def = (OmnvarDef *)BG_Omnvar_GetDef(cgameGlob->m_omnvarIndexPlayerRespawning);
      v51 = 0;
      Bool_Internal_DebugName = Dvar_GetBool_Internal_DebugName(DVARBOOL_should_show_debug_info_for_sony_realtime_multiplayer, "should_show_debug_info_for_sony_realtime_multiplayer");
      v6 = 0;
      v7 = 1;
      v64 = Dvar_GetBool_Internal_DebugName(DVARBOOL_should_check_for_intermission_to_pump_sony_realtime_multiplayer, "should_check_for_intermission_to_pump_sony_realtime_multiplayer");
      v65 = Dvar_GetBool_Internal_DebugName(DVARBOOL_should_check_for_intermission_to_pump_sony_realtime_multiplayer_only_for_br, "should_check_for_intermission_to_pump_sony_realtime_multiplayer_only_for_br");
      v8 = "br";
      v9 = 0x7FFFFFFFi64;
      String_Internal_DebugName = Dvar_GetString_Internal_DebugName(DVARSTR_ui_gametype, "ui_gametype");
      if ( !String_Internal_DebugName && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
        __debugbreak();
      v11 = String_Internal_DebugName - "br";
      while ( 1 )
      {
        v12 = v8[v11];
        v13 = v9;
        v14 = *v8++;
        --v9;
        if ( !v13 )
        {
LABEL_21:
          v66 = 0;
          goto LABEL_22;
        }
        if ( v12 != v14 )
          break;
        if ( !v12 )
          goto LABEL_21;
      }
      v21 = 1;
      if ( v12 < v14 )
        v21 = -1;
      v66 = v21;
LABEL_22:
      if ( !cgameGlob->m_isSpectatorConstStringSetup )
      {
        NetConstStrings_GetLuiStringIndex("spectator", &cgameGlob->m_spectatorConstString);
        cgameGlob->m_isSpectatorConstStringSetup = 1;
      }
      if ( !cgameGlob->m_isDeadConstStringSetup )
      {
        NetConstStrings_GetLuiStringIndex("dead", &cgameGlob->m_deadConstString);
        cgameGlob->m_isDeadConstStringSetup = 1;
      }
      if ( !cgameGlob->m_isIntermissionConstStringSetup )
      {
        NetConstStrings_GetLuiStringIndex("intermission", &cgameGlob->m_intermissionConstString);
        cgameGlob->m_isIntermissionConstStringSetup = 1;
      }
      m_spectatorConstString = cgameGlob->m_spectatorConstString;
      current = v55->current;
      v15 = current;
      v16 = current.integer == m_spectatorConstString;
      if ( Bool_Internal_DebugName )
      {
        if ( v16 != s_isSpectatorValInPreviousFrame )
        {
          Com_Printf(25, "Sony Real time multiplay : isSpectator changed from %d to %d\n", s_isSpectatorValInPreviousFrame, v16);
          v15 = v55->current;
        }
        s_isSpectatorValInPreviousFrame = current.integer == m_spectatorConstString;
      }
      m_deadConstString = cgameGlob->m_deadConstString;
      v17 = v15.integer == m_deadConstString;
      if ( Bool_Internal_DebugName )
      {
        if ( v17 != s_isDeadValInPreviousFrame )
          Com_Printf(25, "Sony Real time multiplay : isDead changed from %d to %d\n", s_isDeadValInPreviousFrame, v17);
        s_isDeadValInPreviousFrame = v15.integer == m_deadConstString;
      }
      if ( v64 && (!v65 || !v66) )
        v6 = v55->current.integer == cgameGlob->m_intermissionConstString;
      if ( Bool_Internal_DebugName )
      {
        if ( v6 != s_isInIntermissionValInPreviousFrame )
          Com_Printf(25, "Sony Real time multiplay : isInIntermission changed from %d to %d\n", s_isInIntermissionValInPreviousFrame, v6);
        s_isInIntermissionValInPreviousFrame = v6;
      }
      if ( !cgameGlob->inKillCam )
        cgameGlob->m_wasSpectatorBeforeKillCam = v16;
      Bool = Omnvar_GetBool(def, data);
      if ( Bool_Internal_DebugName )
      {
        if ( Bool != s_isPlayerRespawningValInPreviousFrame )
          Com_Printf(25, "Sony Real time multiplay : isPlayerRespawning changed from %d to %d\n", s_isPlayerRespawningValInPreviousFrame, Bool);
        s_isPlayerRespawningValInPreviousFrame = Bool;
      }
      if ( current.integer == m_spectatorConstString || v15.integer == m_deadConstString )
      {
        v20 = 0;
      }
      else
      {
        v19 = !Bool;
        v20 = 0;
        if ( v19 )
        {
          v20 = !v6;
          v51 = !v6;
        }
      }
      if ( Bool_Internal_DebugName )
      {
        if ( v20 != s_isConsideredPlayingValInPreviousFrame )
          Com_Printf(25, "Sony Real time multiplay : isConsideredPlaying changed from %d to %d\n", s_isConsideredPlayingValInPreviousFrame, v20);
        s_isConsideredPlayingValInPreviousFrame = v20;
      }
      v22 = Omnvar_GetBool(v59, v58);
      if ( Bool_Internal_DebugName )
      {
        if ( v22 != s_isMatchInProgressValInPreviousFrame )
          Com_Printf(25, "Sony Real time multiplay : isMatchInProgress changed from %d to %d\n", s_isMatchInProgressValInPreviousFrame, v22);
        s_isMatchInProgressValInPreviousFrame = v22;
      }
      if ( !v60 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_omnvar.h", 206, ASSERT_TYPE_ASSERT, "(def)", (const char *)&queryFormat, "def") )
        __debugbreak();
      if ( !v61 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_omnvar.h", 207, ASSERT_TYPE_ASSERT, "(data)", (const char *)&queryFormat, "data") )
        __debugbreak();
      if ( v60->type != OMNVAR_TYPE_INT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_omnvar.h", 208, ASSERT_TYPE_ASSERT, "(def->type == OMNVAR_TYPE_INT)", (const char *)&queryFormat, "def->type == OMNVAR_TYPE_INT") )
        __debugbreak();
      minvalue = v60->minvalue;
      v24 = v61->current;
      v19 = v24.integer + minvalue == 0;
      v25 = v24.integer + minvalue;
      v26 = !v19;
      if ( Bool_Internal_DebugName )
      {
        if ( v26 != s_isPostGameValInPreviousFrame )
          Com_Printf(25, "Sony Real time multiplay : isPostGame changed from %d to %d\n", s_isPostGameValInPreviousFrame, v26);
        s_isPostGameValInPreviousFrame = v26;
      }
      v27 = Omnvar_GetBool(v63, v62);
      if ( Bool_Internal_DebugName )
      {
        if ( v27 != s_doesMatchHaveMoreThan1PlayerValInPreviousFrame )
          Com_Printf(25, "Sony Real time multiplay : doesMatchHaveMoreThan1Player changed from %d to %d\n", s_doesMatchHaveMoreThan1PlayerValInPreviousFrame, v27);
        s_doesMatchHaveMoreThan1PlayerValInPreviousFrame = v27;
      }
      v28 = v66;
      if ( v66 )
        goto LABEL_136;
      if ( !Dvar_GetBool_Internal_DebugName(DVARBOOL_should_check_sony_realtime_multiplayer_br_killswitch_flags, "should_check_sony_realtime_multiplayer_br_killswitch_flags") )
      {
LABEL_135:
        v28 = 0;
LABEL_136:
        v38 = !v25 && v22 && v51 && v27 && v7;
        if ( !v28 )
        {
          ControllerFromClient = CL_Mgr_GetControllerFromClient((LocalClientNum_t)v2);
          v40 = DVARBOOL_com_force_free_to_play;
          v41 = ControllerFromClient;
          if ( !DVARBOOL_com_force_free_to_play && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "com_force_free_to_play") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(v40);
          if ( v40->current.enabled )
            goto LABEL_177;
          v42 = DVARBOOL_com_force_premium;
          if ( !DVARBOOL_com_force_premium && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "com_force_premium") )
            __debugbreak();
          if ( (Dvar_CheckFrontendServerThread(v42), v42->current.enabled) || Content_IsEnumerationDone() && Content_DoWeHavePaidContentPackEntitlement() || ((Instance = Online_Commerce::GetInstance(), Online_Commerce::GetPaidEntitlementTaskState(Instance, v41) == ENTITLEMENT_STATE_COMPLETE) || (v44 = Online_Commerce::GetInstance(), Online_Commerce::GetPaidEntitlementTaskState(v44, v41) == ENTITLEMENT_STATE_ERROR) ? (v45 = 1) : (v45 = 0), (v46 = Online_Commerce::GetInstance(), HavePaidEntitlement = Online_Commerce::HavePaidEntitlement(v46, v41), Live_IsUserSignedInToLive(v41)) && v45 && HavePaidEntitlement) )
          {
            if ( Live_IsFlagSetInRealtimeMultiplayBRPumpDisabledDvar(PREMIUM_USER) )
              v7 = 0;
          }
          else
          {
LABEL_177:
            if ( Live_IsFlagSetInRealtimeMultiplayBRPumpDisabledDvar(F2P_USER) )
              v7 = 0;
          }
        }
        v48 = v38 && v7;
        if ( Bool_Internal_DebugName )
        {
          if ( v48 != s_shouldPumpRealtimeMultiplayValInPreviousFrame )
            Com_Printf(25, "Sony Real time multiplay : shouldPumpRealtimeMultiplay changed from %d to %d\n", s_shouldPumpRealtimeMultiplayValInPreviousFrame, v48);
          s_shouldPumpRealtimeMultiplayValInPreviousFrame = v48;
        }
        if ( v48 )
          Live_UpdateActiveLocalGameClient((LocalClientNum_t)v2);
        return;
      }
      if ( Live_IsFlagSetInRealtimeMultiplayBRGameSpecificKillswitchDvar(PREGAME_LOBBY) )
      {
        m_omnvarIndexScriptableLootHide = cgameGlob->m_omnvarIndexScriptableLootHide;
        if ( m_omnvarIndexScriptableLootHide != -1 )
        {
          v30 = CG_Omnvar_GetData((LocalClientNum_t)v2, m_omnvarIndexScriptableLootHide);
          v31 = BG_Omnvar_GetDef(cgameGlob->m_omnvarIndexScriptableLootHide);
          if ( Omnvar_GetBool(v31, v30) )
          {
            if ( Bool_Internal_DebugName )
            {
              if ( !s_isinBRPreMatchLobbyInPreviousFrame )
                Com_Printf(25, "Sony Real time multiplay : isinBRPreMatchLobby changed from 0 to 1\n");
              s_isinBRPreMatchLobbyInPreviousFrame = 1;
            }
            v7 = 0;
            goto LABEL_109;
          }
          if ( Bool_Internal_DebugName )
          {
            if ( s_isinBRPreMatchLobbyInPreviousFrame )
              Com_Printf(25, "Sony Real time multiplay : isinBRPreMatchLobby changed from 1 to 0\n");
            s_isinBRPreMatchLobbyInPreviousFrame = 0;
          }
        }
      }
      if ( Live_IsFlagSetInRealtimeMultiplayBRGameSpecificKillswitchDvar(CINEMATIC) )
      {
        m_omnvarIndexUiHidePlayerIcons = cgameGlob->m_omnvarIndexUiHidePlayerIcons;
        if ( m_omnvarIndexUiHidePlayerIcons != -1 )
        {
          v33 = CG_Omnvar_GetData((LocalClientNum_t)v2, m_omnvarIndexUiHidePlayerIcons);
          v34 = BG_Omnvar_GetDef(cgameGlob->m_omnvarIndexUiHidePlayerIcons);
          if ( Omnvar_GetBool(v34, v33) )
          {
            if ( Bool_Internal_DebugName )
            {
              if ( !s_isHidePlayerIconsInPreviousFrame )
                Com_Printf(25, "Sony Real time multiplay : isHidePlayerIcons changed from 0 to 1\n");
              s_isHidePlayerIconsInPreviousFrame = 1;
            }
            v7 = 0;
          }
          else if ( Bool_Internal_DebugName )
          {
            if ( s_isHidePlayerIconsInPreviousFrame )
              Com_Printf(25, "Sony Real time multiplay : isHidePlayerIcons changed from 1 to 0\n");
            s_isHidePlayerIconsInPreviousFrame = 0;
          }
        }
      }
LABEL_109:
      LocalClientStatics = CgStatic::GetLocalClientStatics((const LocalClientNum_t)v2);
      v36 = (__int64)LocalClientStatics->GetClientInfo(LocalClientStatics, cgameGlob->clientNum);
      if ( !v36 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_view_mp.cpp", 2896, ASSERT_TYPE_ASSERT, "(clientInfo)", (const char *)&queryFormat, "clientInfo") )
        __debugbreak();
      v37 = UnpackValue(*(_DWORD *)(v36 + 120), 6u, 0xAu);
      if ( !v7 )
        goto LABEL_135;
      if ( Live_IsFlagSetInRealtimeMultiplayBRGameSpecificKillswitchDvar(GULAG_SPECTATOR) )
      {
        if ( (v37 & 2) != 0 )
        {
          if ( Bool_Internal_DebugName )
          {
            if ( !s_isGulagSpectatorInPreviousFrame )
              Com_Printf(25, "Sony Real time multiplay : isGulagSpectator changed from 0 to 1\n");
            s_isGulagSpectatorInPreviousFrame = 1;
          }
          v7 = 0;
          goto LABEL_135;
        }
        if ( Bool_Internal_DebugName )
        {
          if ( s_isGulagSpectatorInPreviousFrame )
            Com_Printf(25, "Sony Real time multiplay : isGulagSpectator changed from 1 to 0\n");
          s_isGulagSpectatorInPreviousFrame = 0;
        }
      }
      if ( Live_IsFlagSetInRealtimeMultiplayBRGameSpecificKillswitchDvar(GULAG_COMBATANT) )
      {
        if ( (v37 & 4) != 0 )
        {
          if ( Bool_Internal_DebugName )
          {
            if ( !s_isGulagCombatantInPreviousFrame )
              Com_Printf(25, "Sony Real time multiplay : isGulagCombatant changed from 0 to 1\n");
            s_isGulagCombatantInPreviousFrame = 1;
          }
          v7 = 0;
        }
        else if ( Bool_Internal_DebugName )
        {
          if ( s_isGulagCombatantInPreviousFrame )
            Com_Printf(25, "Sony Real time multiplay : isGulagCombatant changed from 1 to 0\n");
          s_isGulagCombatantInPreviousFrame = 0;
        }
      }
      goto LABEL_135;
    }
  }
}

/*
==============
CG_ViewMP_UpdateAdsDofPhysicalApplyAimAssist
==============
*/
void CG_ViewMP_UpdateAdsDofPhysicalApplyAimAssist(LocalClientNum_t localClientNum, float *start, float *end)
{
  int v8; 
  int ScreenTargetCount; 
  __int64 ScreenTargetEntity; 
  CgEntitySystem *EntitySystem; 
  const cpose_t *p_pose; 
  void (__fastcall *FunctionPointer_origin)(const vec4_t *, vec3_t *); 
  __int64 v47; 
  __int64 v48; 
  int v49[4]; 

  _R13 = end;
  _R12 = start;
  _R14 = CG_GetLocalClientGlobals(localClientNum);
  v8 = 0;
  ScreenTargetCount = AimAssist_GetScreenTargetCount(localClientNum);
  if ( ScreenTargetCount > 0 )
  {
    __asm
    {
      vmovaps [rsp+0A8h+var_48], xmm6
      vmovsd  xmm6, cs:__real@3f30000000000000
    }
    do
    {
      ScreenTargetEntity = AimAssist_GetScreenTargetEntity(localClientNum, v8);
      EntitySystem = CgEntitySystem::GetEntitySystem(localClientNum);
      if ( (unsigned int)ScreenTargetEntity >= 0x800 )
      {
        LODWORD(v48) = 2048;
        LODWORD(v47) = ScreenTargetEntity;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", v47, v48) )
          __debugbreak();
      }
      p_pose = &EntitySystem->m_entities[ScreenTargetEntity].pose;
      if ( !p_pose && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 379, ASSERT_TYPE_ASSERT, "(pose)", (const char *)&queryFormat, "pose") )
        __debugbreak();
      if ( !p_pose->origin.Get_origin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 380, ASSERT_TYPE_ASSERT, "(pose->origin.Get_origin)", (const char *)&queryFormat, "pose->origin.Get_origin") )
        __debugbreak();
      FunctionPointer_origin = ObfuscateGetFunctionPointer_origin(p_pose->origin.Get_origin, p_pose);
      FunctionPointer_origin(&p_pose->origin.origin.origin, (vec3_t *)v49);
      if ( p_pose->isPosePrecise )
      {
        __asm
        {
          vmovd   xmm0, [rsp+0A8h+var_68]
          vcvtdq2pd xmm0, xmm0
          vmulsd  xmm1, xmm0, xmm6
          vmovd   xmm0, [rsp+0A8h+var_64]
          vcvtdq2pd xmm0, xmm0
          vcvtsd2ss xmm2, xmm1, xmm1
          vmulsd  xmm1, xmm0, xmm6
          vmovd   xmm0, [rsp+0A8h+var_60]
          vcvtsd2ss xmm4, xmm1, xmm1
          vcvtdq2pd xmm0, xmm0
          vmulsd  xmm1, xmm0, xmm6
          vcvtsd2ss xmm5, xmm1, xmm1
          vmovss  [rsp+0A8h+var_60], xmm5
          vmovss  [rsp+0A8h+var_68], xmm2
          vmovss  [rsp+0A8h+var_64], xmm4
        }
      }
      else
      {
        __asm
        {
          vmovss  xmm5, [rsp+0A8h+var_60]
          vmovss  xmm4, [rsp+0A8h+var_64]
          vmovss  xmm2, [rsp+0A8h+var_68]
        }
      }
      __asm
      {
        vmovss  xmm0, dword ptr [r14+38h]
        vmovss  xmm1, dword ptr [r14+3Ch]
        vsubss  xmm3, xmm0, xmm2
        vmovss  xmm0, dword ptr [r14+40h]
        vsubss  xmm2, xmm1, xmm4
        vsubss  xmm4, xmm0, xmm5
        vmulss  xmm2, xmm2, xmm2
        vmulss  xmm1, xmm3, xmm3
        vaddss  xmm3, xmm2, xmm1
        vmulss  xmm0, xmm4, xmm4
        vaddss  xmm2, xmm3, xmm0
        vmovss  xmm0, dword ptr [r12]
        vsqrtss xmm5, xmm2, xmm2
        vminss  xmm1, xmm0, xmm5
        vmovss  dword ptr [r12], xmm1
        vmovss  xmm2, dword ptr [r13+0]
      }
      ++v8;
      __asm
      {
        vmaxss  xmm0, xmm2, xmm5
        vmovss  dword ptr [r13+0], xmm0
      }
      memset(v49, 0, 0xCui64);
    }
    while ( v8 < ScreenTargetCount );
    __asm { vmovaps xmm6, [rsp+0A8h+var_48] }
  }
}

/*
==============
CG_ViewMP_UpdateBRCircleSounds
==============
*/
void CG_ViewMP_UpdateBRCircleSounds(const LocalClientNum_t localClientNum)
{
  centity_t *m_brCircleEnt; 
  const dvar_t *v14; 
  SndAliasLookup v15; 
  const dvar_t *v16; 
  const char *string; 
  char v55; 
  CgSoundSystem *SoundSystem; 
  CgSoundSystem *v58; 
  char v59; 
  unsigned int v76; 
  SndAliasList *Alias; 
  int fmt; 
  int v108; 
  int v113[2]; 
  vec3_t outOrigin; 

  _RBX = CgGlobalsMP::GetLocalClientGlobals(localClientNum);
  m_brCircleEnt = _RBX->m_brCircleEnt;
  if ( m_brCircleEnt && (m_brCircleEnt->flags & 1) != 0 )
  {
    v14 = DCONST_DVARSTR_cg_brCircleLoopSound;
    __asm
    {
      vmovaps [rsp+148h+var_38], xmm6
      vmovaps [rsp+148h+var_48], xmm7
      vmovaps [rsp+148h+var_58], xmm8
      vmovaps [rsp+148h+var_68], xmm9
      vmovaps [rsp+148h+var_78], xmm10
      vmovaps [rsp+148h+var_88], xmm11
      vmovaps [rsp+148h+var_98], xmm12
      vmovaps [rsp+148h+var_A8], xmm13
      vmovaps [rsp+148h+var_B8], xmm14
      vmovaps [rsp+148h+var_C8], xmm15
    }
    if ( !DCONST_DVARSTR_cg_brCircleLoopSound && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 748, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_brCircleLoopSound") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v14);
    v15.name = v14->current.string;
    v16 = DCONST_DVARSTR_cg_brCircleTickSound;
    if ( !DCONST_DVARSTR_cg_brCircleTickSound && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 748, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_brCircleTickSound") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v16);
    string = v16->current.string;
    _RDI = DCONST_DVARFLT_cg_brCircleProximityDistMin;
    if ( !DCONST_DVARFLT_cg_brCircleProximityDistMin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_brCircleProximityDistMin") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RDI);
    __asm { vmovss  xmm15, dword ptr [rdi+28h] }
    _RDI = DCONST_DVARFLT_cg_brCircleProximityDistMax;
    if ( !DCONST_DVARFLT_cg_brCircleProximityDistMax && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_brCircleProximityDistMax") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RDI);
    __asm { vmovss  xmm0, dword ptr [rdi+28h] }
    _RDI = DCONST_DVARFLT_cg_brCircleProximityVolumeMin;
    __asm { vmovss  [rsp+148h+var_108], xmm0 }
    if ( !DCONST_DVARFLT_cg_brCircleProximityVolumeMin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_brCircleProximityVolumeMin") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RDI);
    __asm { vmovss  xmm0, dword ptr [rdi+28h] }
    _RDI = DCONST_DVARFLT_cg_brCircleProximityVolumeMax;
    __asm { vmovss  [rsp+148h+var_104], xmm0 }
    if ( !DCONST_DVARFLT_cg_brCircleProximityVolumeMax && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_brCircleProximityVolumeMax") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RDI);
    __asm { vmovss  xmm13, dword ptr [rdi+28h] }
    _RDI = DCONST_DVARFLT_cg_brCircleLoopPitchMin;
    if ( !DCONST_DVARFLT_cg_brCircleLoopPitchMin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_brCircleLoopPitchMin") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RDI);
    __asm { vmovss  xmm0, dword ptr [rdi+28h] }
    _RDI = DCONST_DVARFLT_cg_brCircleLoopPitchMax;
    __asm { vmovss  [rsp+148h+var_FC], xmm0 }
    if ( !DCONST_DVARFLT_cg_brCircleLoopPitchMax && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_brCircleLoopPitchMax") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RDI);
    __asm { vmovss  xmm0, dword ptr [rdi+28h] }
    _RDI = DCONST_DVARFLT_cg_brCircleTickIntervalMin;
    __asm { vmovss  [rsp+148h+var_100], xmm0 }
    if ( !DCONST_DVARFLT_cg_brCircleTickIntervalMin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_brCircleTickIntervalMin") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RDI);
    __asm { vmovss  xmm12, dword ptr [rdi+28h] }
    _RDI = DCONST_DVARFLT_cg_brCircleTickIntervalMax;
    if ( !DCONST_DVARFLT_cg_brCircleTickIntervalMax && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_brCircleTickIntervalMax") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RDI);
    __asm { vmovss  xmm10, dword ptr [rdi+28h] }
    _RDI = DCONST_DVARFLT_cg_brCircleTickPitchMin;
    if ( !DCONST_DVARFLT_cg_brCircleTickPitchMin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_brCircleTickPitchMin") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RDI);
    __asm { vmovss  xmm11, dword ptr [rdi+28h] }
    _RDI = DCONST_DVARFLT_cg_brCircleTickPitchMax;
    if ( !DCONST_DVARFLT_cg_brCircleTickPitchMax && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_brCircleTickPitchMax") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RDI);
    __asm { vmovss  xmm14, dword ptr [rdi+28h] }
    CG_GetPoseOrigin(&_RBX->m_brCircleEnt->pose, &outOrigin);
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+40h]
      vmovss  xmm1, dword ptr [rbx+38h]
      vsubss  xmm5, xmm1, dword ptr [rsp+148h+outOrigin]
      vmovss  xmm7, cs:__real@3f800000
      vmovss  dword ptr [rsp+148h+outOrigin+8], xmm0
      vmovss  xmm0, dword ptr [rbx+3Ch]
      vsubss  xmm4, xmm0, dword ptr [rsp+148h+outOrigin+4]
      vmulss  xmm1, xmm5, xmm5
      vmulss  xmm2, xmm4, xmm4
      vaddss  xmm0, xmm2, xmm1
      vsqrtss xmm3, xmm0, xmm0
      vcmpless xmm0, xmm3, cs:__real@80000000
      vblendvps xmm0, xmm3, xmm7, xmm0
      vdivss  xmm1, xmm7, xmm0
      vmovss  xmm0, dword ptr [rbx+0CA368h]
      vsubss  xmm6, xmm0, xmm3
      vmulss  xmm8, xmm5, xmm1
      vmulss  xmm9, xmm4, xmm1
    }
    SoundSystem = CgSoundSystem::GetSoundSystem(localClientNum);
    __asm
    {
      vmovss  xmm4, [rsp+148h+var_108]
      vcomiss xmm6, xmm4
    }
    v58 = SoundSystem;
    if ( v55 | v59 )
    {
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcomiss xmm6, xmm0
      }
      if ( v55 )
      {
        __asm
        {
          vmovss  xmm0, dword ptr [rbx+38h]
          vmovss  xmm1, dword ptr [rbx+3Ch]
          vmovss  [rsp+148h+var_F8], xmm0
          vmovss  xmm0, dword ptr [rbx+40h]
          vmovss  [rsp+148h+var_F0], xmm0
        }
      }
      else
      {
        __asm
        {
          vmovss  xmm3, dword ptr [rbx+0CA368h]
          vmulss  xmm1, xmm8, xmm3
          vaddss  xmm2, xmm1, dword ptr [rsp+148h+outOrigin]
          vmovss  [rsp+148h+var_F8], xmm2
          vmovss  xmm2, dword ptr [rbx+40h]
          vmulss  xmm3, xmm9, xmm3
          vaddss  xmm1, xmm3, dword ptr [rsp+148h+outOrigin+4]
          vmovss  [rsp+148h+var_F0], xmm2
        }
      }
      __asm
      {
        vmovss  [rsp+148h+var_F4], xmm1
        vmovaps xmm1, xmm15; min
        vmovaps xmm2, xmm4; max
        vmovaps xmm0, xmm6; val
      }
      *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      __asm
      {
        vmovss  xmm1, [rsp+148h+var_108]
        vsubss  xmm1, xmm1, xmm15
        vsubss  xmm2, xmm0, xmm15
        vdivss  xmm8, xmm2, xmm1
      }
      v76 = ((__int64 (__fastcall *)(CgSoundSystem *, __int64, int *, SndAliasLookup))v58->PlaySoundAliasByName2)(v58, 2046i64, v113, v15);
      _RBX->m_brCircleLoopSoundId = v76;
      __asm
      {
        vmulss  xmm6, xmm8, [rsp+148h+var_104]
        vsubss  xmm7, xmm7, xmm8
      }
      if ( v76 )
      {
        __asm
        {
          vmulss  xmm0, xmm7, xmm13
          vaddss  xmm1, xmm0, xmm6
          vmulss  xmm1, xmm1, xmm1; volume
        }
        SND_ScaleVoiceVolumeById(v76, *(float *)&_XMM1, 0);
        __asm
        {
          vmulss  xmm1, xmm7, [rsp+148h+var_100]
          vmulss  xmm0, xmm8, [rsp+148h+var_FC]
          vaddss  xmm1, xmm1, xmm0; pitch
        }
        SND_ScaleVoicePitchById(_RBX->m_brCircleLoopSoundId, *(float *)&_XMM1, 0);
      }
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, eax
        vmulss  xmm3, xmm0, cs:__real@3a83126f
        vmulss  xmm2, xmm7, xmm12
        vmulss  xmm1, xmm8, xmm10
        vaddss  xmm0, xmm2, xmm1
        vcomiss xmm3, xmm0
      }
      if ( _RBX->time > (unsigned int)_RBX->m_brCircleLastProxTickTime )
      {
        __asm
        {
          vmulss  xmm0, xmm7, xmm13
          vaddss  xmm6, xmm0, xmm6
        }
        Alias = SND_TryFindAlias(string);
        __asm
        {
          vmulss  xmm1, xmm7, xmm14
          vmulss  xmm0, xmm8, xmm11
          vaddss  xmm2, xmm1, xmm0
          vmulss  xmm3, xmm6, xmm6
          vmovss  dword ptr [rsp+148h+var_120], xmm2
          vmovss  dword ptr [rsp+148h+fmt], xmm3
        }
        ((void (__fastcall *)(CgSoundSystem *, __int64, int *, SndAliasList *, int, int, _DWORD))v58->PlaySoundAliasScaledAsync)(v58, 2046i64, v113, Alias, fmt, v108, 0);
        _RBX->m_brCircleLastProxTickTime = _RBX->time;
      }
    }
    else
    {
      if ( _RBX->m_brCircleLoopSoundId )
      {
        CgSoundSystem::StopSoundAlias(SoundSystem, 2046, v15);
        _RBX->m_brCircleLoopSoundId = 0;
      }
      _RBX->m_brCircleLastProxTickTime = 0;
    }
    __asm
    {
      vmovaps xmm14, [rsp+148h+var_B8]
      vmovaps xmm13, [rsp+148h+var_A8]
      vmovaps xmm12, [rsp+148h+var_98]
      vmovaps xmm11, [rsp+148h+var_88]
      vmovaps xmm10, [rsp+148h+var_78]
      vmovaps xmm9, [rsp+148h+var_68]
      vmovaps xmm8, [rsp+148h+var_58]
      vmovaps xmm7, [rsp+148h+var_48]
      vmovaps xmm6, [rsp+148h+var_38]
      vmovaps xmm15, [rsp+148h+var_C8]
    }
  }
}

/*
==============
CG_ViewMP_UpdateEntInfo
==============
*/
void CG_ViewMP_UpdateEntInfo(const LocalClientNum_t localClientNum)
{
  const CgSnapshotMP *NextSnap; 
  CgGlobalsMP *LocalClientGlobals; 
  int PerkNetworkPriorityIndex; 
  unsigned __int64 v5; 
  unsigned int i; 
  __int64 v7; 
  unsigned int number; 
  unsigned int v9; 
  unsigned int v10; 
  __int64 v11; 
  __int64 v12; 

  Sys_ProfBeginNamedEvent(0xFFFFFFFF, "CG_ViewMP_UpdateEntInfo");
  Profile_Begin(3);
  Profile_BeginCSV(2);
  NextSnap = CG_SnapshotMP_GetNextSnap(localClientNum);
  if ( !NextSnap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_view_mp.cpp", 2154, ASSERT_TYPE_ASSERT, "(nextSnap)", (const char *)&queryFormat, "nextSnap") )
    __debugbreak();
  LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals(localClientNum);
  PerkNetworkPriorityIndex = BG_GetPerkNetworkPriorityIndex(0x37u);
  v5 = (unsigned int)PerkNetworkPriorityIndex;
  if ( PerkNetworkPriorityIndex >= 0 )
  {
    if ( (unsigned int)PerkNetworkPriorityIndex >= 0x40 )
    {
      LODWORD(v11) = PerkNetworkPriorityIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v11, 64) )
        __debugbreak();
    }
    if ( ((0x80000000 >> (v5 & 0x1F)) & LocalClientGlobals->predictedPlayerState.perks.array[v5 >> 5]) != 0 )
    {
      Sys_ProfBeginNamedEvent(0xFFEE82EE, "Update Player Tracker");
      for ( i = 0; i < NextSnap->numEntities; ++i )
      {
        v7 = i;
        number = NextSnap->entities[v7].number;
        if ( (int)number >= cls.maxClients )
          break;
        if ( number > 0x9E4 )
        {
          LODWORD(v12) = NextSnap->entities[v7].number;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 55, ASSERT_TYPE_ASSERT, "( ( handle >= 0 && handle < ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) ) )", "%s\n\t( handle ) = %i", "( handle >= 0 && handle < ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) )", v12) )
            __debugbreak();
        }
        if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
        {
          LODWORD(v12) = 2;
          LODWORD(v11) = localClientNum;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 58, ASSERT_TYPE_ASSERT, "(unsigned)( localClientIndex ) < (unsigned)( (2) )", "localClientIndex doesn't index MAX_DOBJ_CLIENTS\n\t%i not in [0, %i)", v11, v12) )
            __debugbreak();
        }
        v9 = number + 2533 * localClientNum;
        if ( v9 >= 0x13CA )
        {
          LODWORD(v12) = number + 2533 * localClientNum;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 62, ASSERT_TYPE_ASSERT, "( ( (unsigned)handle < ( sizeof( *array_counter( clientObjMap ) ) + 0 ) ) )", "%s\n\t( handle ) = %i", "( (unsigned)handle < ( sizeof( *array_counter( clientObjMap ) ) + 0 ) )", v12) )
            __debugbreak();
        }
        v10 = clientObjMap[v9];
        if ( v10 )
        {
          if ( v10 >= (unsigned int)s_objCount )
          {
            LODWORD(v12) = v10;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 64, ASSERT_TYPE_ASSERT, "( ( !objIndex || ( (unsigned)objIndex < s_objCount ) ) )", "%s\n\t( objIndex ) = %i", "( !objIndex || ( (unsigned)objIndex < s_objCount ) )", v12) )
              __debugbreak();
          }
          if ( s_objBuf[v10] )
            CG_TrackerPerk_UpdateEntity(localClientNum, number);
        }
      }
      Sys_ProfEndNamedEvent();
    }
  }
  Profile_EndCSV(2);
  Profile_EndInternal(NULL);
  Sys_ProfEndNamedEvent();
}

/*
==============
CG_ViewMP_UpdateKickAngles
==============
*/
void CG_ViewMP_UpdateKickAngles(cg_t *cgameGlob)
{
  unsigned int secureInt32_3_aab; 
  secure_uint32_3_t *p_kickAVel; 
  unsigned int v6; 
  unsigned int *v7; 
  unsigned int *v8; 
  secure_uint32_3_t *p_rawKickAngles; 
  unsigned int v10; 
  secure_uint32_3_t *p_kickAngles; 
  unsigned int v12; 
  LocalClientNum_t localClientNum; 
  CgViewSystem *ViewSystem; 
  ClActiveClientMP *ClientMP; 
  unsigned int v16; 
  unsigned int v23; 
  bool v29; 
  SecureVec3 inData; 
  vec3_t outKickAngles; 
  vec3_t inOutRawKickAngles; 
  __int64 v33; 
  vec3_t weaponMap; 

  v33 = -2i64;
  if ( !cgameGlob && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_view_mp.cpp", 2055, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  if ( GameModeFlagValues::ms_mpValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 190, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a MP-only context", "IsFlagActive( index )") )
    __debugbreak();
  if ( GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&cgameGlob->predictedPlayerState.otherFlags, ACTIVE, 0x22u) )
  {
    v29 = CG_ViewMP_NoKickReturn((const LocalClientNum_t)cgameGlob->localClientNum, &cgameGlob->predictedPlayerState);
    if ( v29 )
    {
      if ( !cgameGlob->kickAVel.initialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\anticheat\\security_obfuscation_integer.h", 221, ASSERT_TYPE_ASSERT, "(initialized)", (const char *)&queryFormat, "initialized") )
        __debugbreak();
      secureInt32_3_aab = cgameGlob->kickAVel.secureInt32_3_aab;
      LODWORD(inData.x) = ((((_DWORD)cgameGlob + 302476) ^ secureInt32_3_aab) * ((((_DWORD)cgameGlob + 302476) ^ secureInt32_3_aab) + 2)) ^ cgameGlob->kickAVel.data[0];
      LODWORD(inData.y) = ((((_DWORD)cgameGlob + 302480) ^ secureInt32_3_aab) * ((((_DWORD)cgameGlob + 302480) ^ secureInt32_3_aab) + 2)) ^ cgameGlob->kickAVel.data[1];
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vmovss  dword ptr [rbp+57h+inData.___u0+8], xmm0
      }
      secure_uint32_3_t::secureInt32_3_Set(&cgameGlob->kickAVel, &inData);
    }
    *(_QWORD *)weaponMap.v = CgWeaponMap::GetInstance((const LocalClientNum_t)cgameGlob->localClientNum);
    p_kickAVel = &cgameGlob->kickAVel;
    if ( !cgameGlob->kickAVel.initialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\anticheat\\security_obfuscation_integer.h", 221, ASSERT_TYPE_ASSERT, "(initialized)", (const char *)&queryFormat, "initialized") )
      __debugbreak();
    v6 = cgameGlob->kickAVel.secureInt32_3_aab;
    LODWORD(inData.x) = ((((_DWORD)cgameGlob + 302476) ^ v6) * ((((_DWORD)cgameGlob + 302476) ^ v6) + 2)) ^ cgameGlob->kickAVel.data[0];
    v7 = &cgameGlob->kickAVel.data[1];
    LODWORD(inData.y) = ((((_DWORD)cgameGlob + 302480) ^ v6) * ((((_DWORD)cgameGlob + 302480) ^ v6) + 2)) ^ cgameGlob->kickAVel.data[1];
    v8 = &cgameGlob->kickAVel.data[2];
    LODWORD(inData.z) = cgameGlob->kickAVel.data[2] ^ ((((_DWORD)cgameGlob + 302484) ^ v6) * ((((_DWORD)cgameGlob + 302484) ^ v6) + 2));
    p_rawKickAngles = &cgameGlob->rawKickAngles;
    if ( !cgameGlob->rawKickAngles.initialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\anticheat\\security_obfuscation_integer.h", 221, ASSERT_TYPE_ASSERT, "(initialized)", (const char *)&queryFormat, "initialized") )
      __debugbreak();
    v10 = cgameGlob->rawKickAngles.secureInt32_3_aab;
    LODWORD(inOutRawKickAngles.v[0]) = ((((_DWORD)cgameGlob + 302500) ^ v10) * ((((_DWORD)cgameGlob + 302500) ^ v10) + 2)) ^ cgameGlob->rawKickAngles.data[0];
    LODWORD(inOutRawKickAngles.v[1]) = cgameGlob->rawKickAngles.data[1] ^ ((((_DWORD)cgameGlob + 302504) ^ v10) * ((((_DWORD)cgameGlob + 302504) ^ v10) + 2));
    LODWORD(inOutRawKickAngles.v[2]) = ((((_DWORD)cgameGlob + 302508) ^ v10) * ((((_DWORD)cgameGlob + 302508) ^ v10) + 2)) ^ cgameGlob->rawKickAngles.data[2];
    p_kickAngles = &cgameGlob->kickAngles;
    if ( !cgameGlob->kickAngles.initialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\anticheat\\security_obfuscation_integer.h", 221, ASSERT_TYPE_ASSERT, "(initialized)", (const char *)&queryFormat, "initialized") )
      __debugbreak();
    v12 = cgameGlob->kickAngles.secureInt32_3_aab;
    LODWORD(outKickAngles.v[0]) = ((((_DWORD)cgameGlob + 302524) ^ v12) * ((((_DWORD)cgameGlob + 302524) ^ v12) + 2)) ^ cgameGlob->kickAngles.data[0];
    LODWORD(outKickAngles.v[1]) = cgameGlob->kickAngles.data[1] ^ ((((_DWORD)cgameGlob + 302528) ^ v12) * ((((_DWORD)cgameGlob + 302528) ^ v12) + 2));
    LODWORD(outKickAngles.v[2]) = ((((_DWORD)cgameGlob + 302532) ^ v12) * ((((_DWORD)cgameGlob + 302532) ^ v12) + 2)) ^ cgameGlob->kickAngles.data[2];
    BG_KickAngles(*(const BgWeaponMap **)weaponMap.v, &cgameGlob->predictedPlayerState, cgameGlob->frametime, &cgameGlob->kickTimeRemaining, (vec3_t *)&inData, &inOutRawKickAngles, &outKickAngles, &cgameGlob->kickNeedsToCrossCenter);
    if ( !cgameGlob->kickAVel.initialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\anticheat\\security_obfuscation_integer.h", 186, ASSERT_TYPE_ASSERT, "(initialized)", (const char *)&queryFormat, "initialized") )
      __debugbreak();
    cgameGlob->kickAVel.secureInt32_3_aab += cgameGlob->kickAVel.secureInt32_3_set_aab;
    cgameGlob->kickAVel.data[0] = ((((_DWORD)cgameGlob + 302476) ^ cgameGlob->kickAVel.secureInt32_3_aab) * ((((_DWORD)cgameGlob + 302476) ^ cgameGlob->kickAVel.secureInt32_3_aab) + 2)) ^ LODWORD(inData.x);
    *v7 = (((unsigned int)v7 ^ cgameGlob->kickAVel.secureInt32_3_aab) * (((unsigned int)v7 ^ cgameGlob->kickAVel.secureInt32_3_aab) + 2)) ^ LODWORD(inData.y);
    *v8 = (((unsigned int)v8 ^ cgameGlob->kickAVel.secureInt32_3_aab) * (((unsigned int)v8 ^ cgameGlob->kickAVel.secureInt32_3_aab) + 2)) ^ LODWORD(inData.z);
    if ( !cgameGlob->rawKickAngles.initialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\anticheat\\security_obfuscation_integer.h", 186, ASSERT_TYPE_ASSERT, "(initialized)", (const char *)&queryFormat, "initialized") )
      __debugbreak();
    cgameGlob->rawKickAngles.secureInt32_3_aab += cgameGlob->rawKickAngles.secureInt32_3_set_aab;
    cgameGlob->rawKickAngles.data[0] = ((((_DWORD)cgameGlob + 302500) ^ cgameGlob->rawKickAngles.secureInt32_3_aab) * ((((_DWORD)cgameGlob + 302500) ^ cgameGlob->rawKickAngles.secureInt32_3_aab) + 2)) ^ LODWORD(inOutRawKickAngles.v[0]);
    cgameGlob->rawKickAngles.data[1] = ((cgameGlob->rawKickAngles.secureInt32_3_aab ^ ((_DWORD)cgameGlob + 302504)) * ((cgameGlob->rawKickAngles.secureInt32_3_aab ^ ((_DWORD)cgameGlob + 302504)) + 2)) ^ LODWORD(inOutRawKickAngles.v[1]);
    cgameGlob->rawKickAngles.data[2] = ((cgameGlob->rawKickAngles.secureInt32_3_aab ^ ((_DWORD)cgameGlob + 302508)) * ((cgameGlob->rawKickAngles.secureInt32_3_aab ^ ((_DWORD)cgameGlob + 302508)) + 2)) ^ LODWORD(inOutRawKickAngles.v[2]);
    if ( !cgameGlob->kickAngles.initialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\anticheat\\security_obfuscation_integer.h", 186, ASSERT_TYPE_ASSERT, "(initialized)", (const char *)&queryFormat, "initialized") )
      __debugbreak();
    cgameGlob->kickAngles.secureInt32_3_aab += cgameGlob->kickAngles.secureInt32_3_set_aab;
    cgameGlob->kickAngles.data[0] = ((cgameGlob->kickAngles.secureInt32_3_aab ^ ((_DWORD)cgameGlob + 302524)) * ((cgameGlob->kickAngles.secureInt32_3_aab ^ ((_DWORD)cgameGlob + 302524)) + 2)) ^ LODWORD(outKickAngles.v[0]);
    cgameGlob->kickAngles.data[1] = ((cgameGlob->kickAngles.secureInt32_3_aab ^ ((_DWORD)cgameGlob + 302528)) * ((cgameGlob->kickAngles.secureInt32_3_aab ^ ((_DWORD)cgameGlob + 302528)) + 2)) ^ LODWORD(outKickAngles.v[1]);
    cgameGlob->kickAngles.data[2] = ((cgameGlob->kickAngles.secureInt32_3_aab ^ ((_DWORD)cgameGlob + 302532)) * ((cgameGlob->kickAngles.secureInt32_3_aab ^ ((_DWORD)cgameGlob + 302532)) + 2)) ^ LODWORD(outKickAngles.v[2]);
    localClientNum = cgameGlob->localClientNum;
    if ( v29 )
    {
      ClientMP = ClActiveClientMP::GetClientMP(localClientNum);
      ClActiveClient_GetCLViewangles(ClientMP, &weaponMap);
      if ( !p_kickAngles->initialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\anticheat\\security_obfuscation_integer.h", 221, ASSERT_TYPE_ASSERT, "(initialized)", (const char *)&queryFormat, "initialized") )
        __debugbreak();
      v16 = p_kickAngles->secureInt32_3_aab;
      LODWORD(outKickAngles.v[0]) = p_kickAngles->data[0] ^ ((v16 ^ (unsigned int)p_kickAngles) * ((v16 ^ (unsigned int)p_kickAngles) + 2));
      LODWORD(outKickAngles.v[1]) = ((v16 ^ ((_DWORD)p_kickAngles + 4)) * ((v16 ^ ((_DWORD)p_kickAngles + 4)) + 2)) ^ p_kickAngles->data[1];
      LODWORD(outKickAngles.v[2]) = p_kickAngles->data[2] ^ ((v16 ^ ((_DWORD)p_kickAngles + 8)) * ((v16 ^ ((_DWORD)p_kickAngles + 8)) + 2));
      __asm
      {
        vmovss  xmm0, dword ptr [rbp+57h+weaponMap]
        vaddss  xmm1, xmm0, dword ptr [rbp+57h+var_68]
        vmovss  dword ptr [rbp+57h+weaponMap], xmm1
        vmovss  xmm2, dword ptr [rbp+57h+weaponMap+4]
        vaddss  xmm0, xmm2, dword ptr [rbp+57h+var_68+4]
        vmovss  dword ptr [rbp+57h+weaponMap+4], xmm0
        vmovss  xmm1, [rbp+57h+var_38]
        vaddss  xmm2, xmm1, dword ptr [rbp+57h+var_68+8]
        vmovss  [rbp+57h+var_38], xmm2
      }
      ClActiveClient_SetCLViewangles(ClientMP, &weaponMap);
      *(_QWORD *)ClientMP->cgameKickAngles.v = 0i64;
      ClientMP->cgameKickAngles.v[2] = 0.0;
      secure_uint32_3_t::secureInt32_3_Reset(p_kickAngles);
      secure_uint32_3_t::secureInt32_3_Reset(p_rawKickAngles);
      if ( !p_kickAVel->initialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\anticheat\\security_obfuscation_integer.h", 221, ASSERT_TYPE_ASSERT, "(initialized)", (const char *)&queryFormat, "initialized") )
        __debugbreak();
      v23 = p_kickAVel->secureInt32_3_aab;
      LODWORD(inData.x) = p_kickAVel->data[0] ^ ((v23 ^ (unsigned int)p_kickAVel) * ((v23 ^ (unsigned int)p_kickAVel) + 2));
      LODWORD(inData.y) = ((v23 ^ (unsigned int)v7) * ((v23 ^ (unsigned int)v7) + 2)) ^ *v7;
      LODWORD(inData.z) = *v8 ^ ((v23 ^ (unsigned int)v8) * ((v23 ^ (unsigned int)v8) + 2));
      _RBX = DCONST_DVARFLT_no_kick_velocity_dampen;
      if ( !DCONST_DVARFLT_no_kick_velocity_dampen && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "no_kick_velocity_dampen") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RBX);
      __asm
      {
        vmovss  xmm3, dword ptr [rbx+28h]
        vmulss  xmm1, xmm3, dword ptr [rbp+57h+inData.___u0]
        vmovss  dword ptr [rbp+57h+inData.___u0], xmm1
        vmulss  xmm0, xmm3, dword ptr [rbp+57h+inData.___u0+4]
        vmovss  dword ptr [rbp+57h+inData.___u0+4], xmm0
        vmulss  xmm2, xmm3, dword ptr [rbp+57h+inData.___u0+8]
        vmovss  dword ptr [rbp+57h+inData.___u0+8], xmm2
      }
      secure_uint32_3_t::secureInt32_3_Set(p_kickAVel, &inData);
      memset(&weaponMap, 0, sizeof(weaponMap));
    }
    else
    {
      ViewSystem = CgViewSystem::GetViewSystem(localClientNum);
      if ( !ViewSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_view_mp.cpp", 2099, ASSERT_TYPE_ASSERT, "(viewSystem)", (const char *)&queryFormat, "viewSystem") )
        __debugbreak();
      CgViewSystem::UpdateViewKickState(ViewSystem, &weaponMap);
    }
  }
  else
  {
    secure_uint32_3_t::secureInt32_3_Reset(&cgameGlob->kickAVel);
    secure_uint32_3_t::secureInt32_3_Reset(&cgameGlob->kickAngles);
    secure_uint32_3_t::secureInt32_3_Reset(&cgameGlob->rawKickAngles);
  }
  memset(&outKickAngles, 0, sizeof(outKickAngles));
  memset(&inOutRawKickAngles, 0, sizeof(inOutRawKickAngles));
  memset(&inData, 0, sizeof(inData));
}

/*
==============
CG_ViewMP_UpdateSceneDepthOfField
==============
*/
void CG_ViewMP_UpdateSceneDepthOfField(const LocalClientNum_t localClientNum)
{
  CgWeaponMap *Instance; 
  bool IsThirdPersonMode; 
  float fmt; 
  CgSnapshotType SnapshotType; 
  float end; 
  float start; 

  _RDI = CG_GetLocalClientGlobals(localClientNum);
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_view_mp.cpp", 1816, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  if ( CG_Snapshot_GetSnapshotType() != SNAP_TYPE_MP )
  {
    SnapshotType = CG_Snapshot_GetSnapshotType();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_view_mp.cpp", 1818, ASSERT_TYPE_ASSERT, "(CG_Snapshot_GetSnapshotType() == CgSnapshotType::SNAP_TYPE_MP)", "%s\n\tCG_ViewMP_UpdateSceneDepthOfField: Trying to get multiplayer snapshot but no multiplayer snapshots have been allocated. CgSnapshotType:%d\n", "CG_Snapshot_GetSnapshotType() == CgSnapshotType::SNAP_TYPE_MP", SnapshotType) )
      __debugbreak();
  }
  if ( (!_RDI->m_isMLGSpectator || !_RDI->spectatingThirdPerson) && !CG_View_IsKillCamEntityView(localClientNum) )
  {
    if ( CG_IsCinematicCameraActive(localClientNum) )
    {
      CG_CinematicCameraSetDof(localClientNum);
    }
    else
    {
      __asm
      {
        vmovaps [rsp+68h+var_18], xmm6
        vmovaps [rsp+68h+var_28], xmm7
      }
      Instance = CgWeaponMap::GetInstance(localClientNum);
      IsThirdPersonMode = BG_IsThirdPersonMode(Instance, &_RDI->predictedPlayerState);
      __asm
      {
        vmovss  xmm6, dword ptr [rdi+1230h]
        vmovss  xmm7, dword ptr [rdi+1234h]
      }
      if ( !IsThirdPersonMode && R_DOF_GetPhysicalEnable() && (unsigned int)(_RDI->predictedPlayerState.dofPhysicalScriptingState - 2) > 1 )
      {
        Sys_WaitWorkerCmdsOnlyOfType(WRKCMD_CG_VIEWMP_DOFTRACE);
        __asm
        {
          vmovss  xmm0, cs:?s_dofTraceDistance@@3MA; float s_dofTraceDistance
          vmovss  [rsp+68h+start], xmm0
          vmovss  [rsp+68h+end], xmm0
        }
        CG_ViewMP_UpdateAdsDofPhysicalApplyAimAssist(localClientNum, &start, &end);
        __asm
        {
          vmovss  xmm0, [rsp+68h+end]
          vmaxss  xmm7, xmm0, cs:__real@46000000
          vmovss  xmm6, [rsp+68h+start]
        }
      }
      __asm
      {
        vmovaps xmm3, xmm6; multiplayerAdsStart
        vmovss  dword ptr [rsp+68h+fmt], xmm7
      }
      CG_View_UpdateSceneDepthOfField(localClientNum, 1, IsThirdPersonMode, *(float *)&_XMM3, fmt);
      __asm
      {
        vmovaps xmm7, [rsp+68h+var_28]
        vmovaps xmm6, [rsp+68h+var_18]
      }
    }
  }
}

/*
==============
CG_ViewMP_UpdateStreaming
==============
*/
void CG_ViewMP_UpdateStreaming(const LocalClientNum_t localClientNum, CgGlobalsMP *cgameGlob)
{
  bool IsFirstActiveGameLocalClient; 
  const Material **cardImages; 
  __int64 v6; 
  const vec3_t *FocusOrigin; 
  const vec3_t *ClientVelocity; 
  CL_TransientsCommonMP_PrioritizationFlags PrioritizationFlags; 
  centity_t *predictedPlayerEntity; 
  entityType_s eType; 
  bool v18; 
  CL_TransientsCollisionMP_PriorityMode v19; 
  CL_TransientsCollisionMP_PriorityMode PriorityMode; 
  int TransientsCommonMPPriorityFlagsForLocalClient; 
  float zoomFactor; 
  float v23; 
  vec3_t outOrg; 
  float outCosFovLimit; 
  float outZoomFactor; 

  _RSI = cgameGlob;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_view_mp.cpp", 2449, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  if ( !_RSI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_view_mp.cpp", 2450, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  IsFirstActiveGameLocalClient = ClStatic::IsFirstActiveGameLocalClient(&cls, localClientNum);
  if ( CgGlobalsMP::GetLocalClientGlobals(localClientNum)->m_usePlayerCards && ClStatic::IsFirstActiveGameLocalClient(&cls, localClientNum) )
  {
    CG_ViewMP_PrefetchPlayerCards(localClientNum);
    PlayercardCache_TouchMaterials(localClientNum);
  }
  if ( !_RSI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_view_mp.cpp", 2018, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  if ( _RSI->m_useConsumableCards )
  {
    cardImages = (const Material **)_RSI->m_cachedConsumableCards.cardImages;
    v6 = 5i64;
    do
    {
      if ( *cardImages )
        Stream_TouchMaterial(*cardImages);
      ++cardImages;
      --v6;
    }
    while ( v6 );
  }
  CL_UIStreaming_UpdateImages();
  CL_StreamViews_ClearAllManualViews(localClientNum);
  RefdefView_GetOrg(&_RSI->refdef.view, &outOrg);
  FocusOrigin = CG_Camera_GetFocusOrigin(localClientNum);
  CL_StreamViews_UpdateVelocity(localClientNum, FocusOrigin, _RSI->time, _RSI->frametime);
  __asm
  {
    vmovss  xmm1, dword ptr [rsi+697Ch]; defaultTanHalfFovY
    vmovss  xmm0, dword ptr [rsi+6934h]; currentTanHalfFovY
  }
  CL_StreamViews_CalculateZoomFactorAndCosFovLimit(*(float *)&_XMM0, *(float *)&_XMM1, &outZoomFactor, &outCosFovLimit);
  ClientVelocity = CL_StreamViews_GetClientVelocity(localClientNum);
  __asm
  {
    vmovss  xmm0, [rsp+88h+outCosFovLimit]
    vmovss  dword ptr [rsp+88h+var_58], xmm0
    vmovss  xmm1, [rsp+88h+outZoomFactor]
    vmovss  [rsp+88h+zoomFactor], xmm1
  }
  CL_StreamViews_SetManualView(MOVEMENT, localClientNum, &outOrg, &_RSI->refdef.view.axis, ClientVelocity, zoomFactor, v23, 1);
  _RDI = DCONST_DVARFLT_cg_debugCamPivot;
  if ( !DCONST_DVARFLT_cg_debugCamPivot && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_debugCamPivot") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RDI);
  __asm { vmovss  xmm0, dword ptr [rdi+28h] }
  PrioritizationFlags = CL_TRANSIENTS_COMMON_MP_PRIORITIZATION_FLAGS_NONE;
  __asm { vcomiss xmm0, cs:__real@3a83126f }
  if ( !_RSI->m_frontEndScene )
    CG_ViewMP_UpdateStreamingForPlayerOrigin(localClientNum, _RSI);
  CG_WorldStreaming_TouchClientStreamManualViews(localClientNum);
  CG_DistanceCacheMP_SetClientStreamManualViews(localClientNum);
  if ( !_RSI->m_frontEndScene )
  {
    if ( IsFirstActiveGameLocalClient )
    {
      if ( !LODWORD(cl_maxLocalClients) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_static.h", 336, ASSERT_TYPE_ASSERT, "(cl_maxLocalClients)", "%s\n\tMust be called after client allocation", "cl_maxLocalClients") )
        __debugbreak();
      CL_TransientsWorldMP_ResetGridStreaming(cls.m_localClientsActive.activeCount > 1);
      CL_TransientsCollisionMP_ResetGridStreaming();
    }
    CL_TransientsWorldMP_SetGridStreamingClientStreamViews(localClientNum);
    CL_TransientsCollisionMP_SetGridStreamingClientStreamViews(localClientNum);
    predictedPlayerEntity = _RSI->predictedPlayerEntity;
    if ( !predictedPlayerEntity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_view_mp.cpp", 2521, ASSERT_TYPE_ASSERT, "( ( cent != nullptr ) )", "( cent ) = %p", NULL) )
      __debugbreak();
    eType = predictedPlayerEntity->nextState.eType;
    if ( _RSI == (CgGlobalsMP *)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2289, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    v18 = BG_IsSpectating(&_RSI->predictedPlayerState) || _RSI->predictedPlayerState.pm_type == 5 || _RSI->inKillCam;
    if ( IsFirstActiveGameLocalClient )
    {
      if ( v18 )
        v19 = CL_TRANSIENTS_COLLISION_MP_PRIORITYMODE_SPECTATING;
      else
        v19 = eType == ET_INVISIBLE;
    }
    else
    {
      PriorityMode = CL_TransientsCollisionMP_GetPriorityMode();
      if ( v18 && PriorityMode == CL_TRANSIENTS_COLLISION_MP_PRIORITYMODE_SPECTATING || eType == ET_INVISIBLE && PriorityMode == CL_TRANSIENTS_COLLISION_MP_PRIORITYMODE_LOW )
      {
LABEL_50:
        if ( !IsFirstActiveGameLocalClient )
          PrioritizationFlags = CL_TransientsCommonMP_GetPrioritizationFlags();
        TransientsCommonMPPriorityFlagsForLocalClient = CG_ViewMP_GetTransientsCommonMPPriorityFlagsForLocalClient(localClientNum);
        CL_TransientsCommonMP_SetPrioritizationFlags((const CL_TransientsCommonMP_PrioritizationFlags)(TransientsCommonMPPriorityFlagsForLocalClient | PrioritizationFlags));
        goto LABEL_53;
      }
      v19 = CL_TRANSIENTS_COLLISION_MP_PRIORITYMODE_NORMAL;
    }
    CL_TransientsCollisionMP_SetPriorityMode(v19);
    goto LABEL_50;
  }
LABEL_53:
  memset(&outOrg, 0, sizeof(outOrg));
}

/*
==============
CG_ViewMP_UpdateStreamingForPlayerOrigin
==============
*/
void CG_ViewMP_UpdateStreamingForPlayerOrigin(const LocalClientNum_t localClientNum, CgGlobalsMP *cgameGlob)
{
  centity_t *Entity; 
  char v31; 
  char v32; 
  float zoomFactor; 
  float cosFovLimit; 
  vec3_t origin; 
  vec3_t outOrg; 
  int v43[3]; 
  __int64 v44; 
  tmat33_t<vec3_t> axis; 
  char v46; 
  void *retaddr; 

  _RAX = &retaddr;
  v44 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm6
    vmovaps xmmword ptr [rax-38h], xmm7
    vmovaps xmmword ptr [rax-48h], xmm8
  }
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_view_mp.cpp", 2353, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  if ( !cgameGlob && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_view_mp.cpp", 2354, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  _RSI = &cgameGlob->predictedPlayerState;
  if ( cgameGlob == (CgGlobalsMP *)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_view_mp.cpp", 2357, ASSERT_TYPE_ASSERT, "( ( ps != nullptr ) )", "( ps ) = %p", _RSI) )
    __debugbreak();
  Entity = CG_GetEntity(localClientNum, cgameGlob->predictedPlayerState.clientNum);
  if ( !Entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_view_mp.cpp", 2360, ASSERT_TYPE_ASSERT, "( ( cent != nullptr ) )", "( cent ) = %p", NULL) )
    __debugbreak();
  if ( (Entity->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_view_mp.cpp", 2361, ASSERT_TYPE_ASSERT, "(CENextValid( cent ))", (const char *)&queryFormat, "CENextValid( cent )") )
    __debugbreak();
  if ( Entity->nextState.eType != ET_INVISIBLE )
  {
    __asm
    {
      vmovss  xmm6, dword ptr [rsi+30h]
      vmovss  [rsp+0F8h+var_98], xmm6
      vmovss  xmm7, dword ptr [rsi+34h]
      vmovss  [rsp+0F8h+var_94], xmm7
      vmovss  xmm8, dword ptr [rsi+38h]
      vmovss  [rsp+0F8h+var_90], xmm8
    }
    AnglesToAxis(&cgameGlob->predictedPlayerState.worldUpAngles, &axis);
    __asm
    {
      vmovss  xmm3, dword ptr [rsi+1E8h]
      vmulss  xmm1, xmm3, dword ptr [rsp+0F8h+axis+18h]
      vaddss  xmm2, xmm1, xmm6
      vmovss  dword ptr [rsp+0F8h+origin], xmm2
      vmulss  xmm1, xmm3, dword ptr [rsp+0F8h+axis+1Ch]
      vaddss  xmm2, xmm1, xmm7
      vmovss  dword ptr [rsp+0F8h+origin+4], xmm2
      vmulss  xmm1, xmm3, dword ptr [rsp+0F8h+axis+20h]
      vaddss  xmm2, xmm1, xmm8
      vmovss  dword ptr [rsp+0F8h+origin+8], xmm2
    }
    RefdefView_GetOrg(&cgameGlob->refdef.view, &outOrg);
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+0F8h+origin]
      vsubss  xmm3, xmm0, dword ptr [rsp+0F8h+outOrg]
      vmovss  xmm1, dword ptr [rsp+0F8h+origin+4]
      vsubss  xmm2, xmm1, dword ptr [rsp+0F8h+outOrg+4]
      vmovss  xmm0, dword ptr [rsp+0F8h+origin+8]
      vsubss  xmm4, xmm0, dword ptr [rsp+0F8h+outOrg+8]
      vmulss  xmm2, xmm2, xmm2
      vmulss  xmm1, xmm3, xmm3
      vaddss  xmm3, xmm2, xmm1
      vmulss  xmm0, xmm4, xmm4
      vaddss  xmm2, xmm3, xmm0
      vcomiss xmm2, cs:__real@4a800000
    }
    if ( !(v31 | v32) )
    {
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vmovss  [rsp+0F8h+cosFovLimit], xmm0
        vmovss  xmm1, cs:__real@3f800000
        vmovss  [rsp+0F8h+zoomFactor], xmm1
      }
      CL_StreamViews_SetManualView(DODGE, localClientNum, &origin, &vec3_origin, &vec3_origin, zoomFactor, cosFovLimit, 0);
    }
    memset(&outOrg, 0, sizeof(outOrg));
  }
  memset(v43, 0, sizeof(v43));
  memset(&origin, 0, sizeof(origin));
  _R11 = &v46;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
  }
}

/*
==============
CG_ViewMP_UpdateThirdPerson
==============
*/
void CG_ViewMP_UpdateThirdPerson(LocalClientNum_t localClientNum)
{
  CgGlobalsMP *LocalClientGlobals; 
  int ShouldRenderThirdPerson; 

  LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals(localClientNum);
  LocalClientGlobals->activeCameraEnabledThirdPerson = 0;
  ShouldRenderThirdPerson = CG_ViewMP_ShouldRenderThirdPerson(localClientNum, LocalClientGlobals);
  LocalClientGlobals->renderingThirdPerson = ShouldRenderThirdPerson;
  if ( ShouldRenderThirdPerson && !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_STILL_LAND|WEAPON_FIRING) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_view_mp.cpp", 1160, ASSERT_TYPE_SANITY, "( !cgameGlob->renderingThirdPerson || Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_THIRD_PERSON ) )", (const char *)&queryFormat, "!cgameGlob->renderingThirdPerson || Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_THIRD_PERSON )") )
    __debugbreak();
  if ( !LocalClientGlobals->renderingThirdPerson )
  {
    LocalClientGlobals->m_fixedDeathCameraClientForced = 0;
    LocalClientGlobals->m_deathCameraPrevDistance = 0.0;
    LocalClientGlobals->m_deathCameraFailsafeLock = 0;
    *(_QWORD *)LocalClientGlobals->m_deathCameraFailsafePosition.v = 0i64;
    LocalClientGlobals->m_deathCameraFailsafePosition.v[2] = 0.0;
  }
}

/*
==============
CG_ViewMP_UpdateThirdPersonMode
==============
*/
void CG_ViewMP_UpdateThirdPersonMode(LocalClientNum_t localClientNum, const vec3_t *viewAngles)
{
  __int64 v9; 
  int viewlocked_entNum; 
  centity_t *Entity; 
  const DObj *ClientDObj; 
  CgHandler *Handler; 
  CgWeaponMap *Instance; 
  const char *v21; 
  bool v25; 
  vec3_t outOrg; 
  __int64 v71; 
  vec3_t v1; 
  vec3_t cameraOffset; 
  vec3_t outOrigin; 
  char v75; 
  void *retaddr; 

  _RAX = &retaddr;
  v71 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm8
    vmovaps xmmword ptr [rax-78h], xmm9
  }
  v9 = localClientNum;
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_STILL_LAND|WEAPON_FIRING) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_view_mp.cpp", 984, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_THIRD_PERSON ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_THIRD_PERSON )") )
    __debugbreak();
  _RBP = CG_GetLocalClientGlobals((const LocalClientNum_t)v9);
  _RBX = &_RBP->predictedPlayerState;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, dword ptr [rax+65E4h]
    vmulss  xmm8, xmm0, cs:__real@3a83126f
  }
  if ( !CG_Weapons_GetVehicleViewOrigin((const LocalClientNum_t)v9, &_RBP->predictedPlayerState, &outOrigin) )
  {
    if ( BG_IsTurretActive(_RBX) )
    {
      if ( _RBP->predictedPlayerState.viewlocked == PLAYERVIEWLOCK_NONE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapons_inline.h", 29, ASSERT_TYPE_ASSERT, "(ps->viewlocked)", (const char *)&queryFormat, "ps->viewlocked") )
        __debugbreak();
      viewlocked_entNum = _RBP->predictedPlayerState.viewlocked_entNum;
      if ( viewlocked_entNum == 2047 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapons_inline.h", 32, ASSERT_TYPE_ASSERT, "(entityNum != ENTITYNUM_NONE)", (const char *)&queryFormat, "entityNum != ENTITYNUM_NONE") )
        __debugbreak();
      Entity = CG_GetEntity((const LocalClientNum_t)v9, viewlocked_entNum);
      ClientDObj = Com_GetClientDObj(Entity->nextState.number, (LocalClientNum_t)v9);
      if ( !ClientDObj )
        Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143EF1430, 540i64, (unsigned int)Entity->nextState.number);
      if ( !CG_DObjGetWorldTagPos(&Entity->pose, ClientDObj, scr_const.tag_player, &outOrigin) )
        Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143EF14A0, 541i64);
    }
    else
    {
      Handler = CgHandler::getHandler((LocalClientNum_t)v9);
      Instance = CgWeaponMap::GetInstance((const LocalClientNum_t)v9);
      BG_GetPlayerEyePosition(Instance, _RBX, &outOrigin, Handler);
    }
  }
  if ( BG_IsTurretActive(_RBX) )
  {
    _RDI = DCONST_DVARVEC3_camera_thirdPersonOffsetTurretAds;
    if ( DCONST_DVARVEC3_camera_thirdPersonOffsetTurretAds )
      goto LABEL_24;
    v21 = "camera_thirdPersonOffsetTurretAds";
  }
  else
  {
    _RDI = DCONST_DVARVEC3_camera_thirdPersonOffsetAds;
    if ( DCONST_DVARVEC3_camera_thirdPersonOffsetAds )
      goto LABEL_24;
    v21 = "camera_thirdPersonOffsetAds";
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 734, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", v21) )
    __debugbreak();
LABEL_24:
  Dvar_CheckFrontendServerThread(_RDI);
  __asm
  {
    vmovss  xmm6, dword ptr [rdi+30h]
    vmovss  xmm7, dword ptr [rdi+2Ch]
    vmovss  xmm9, dword ptr [rdi+28h]
  }
  if ( _RBP == (cg_t *)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2214, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v25 = GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&_RBP->predictedPlayerState.otherFlags, GameModeFlagValues::ms_mpValue, 0x26u);
  __asm
  {
    vmovaps xmm3, xmm8; deltaTime
    vmovss  xmm2, cs:THIRD_PERSON_ADS_LERP_RATE; rate
    vmovss  xmm1, dword ptr [rbp+7D318h]; cur
  }
  if ( v25 )
    __asm { vmovss  xmm0, cs:__real@bf800000 }
  else
    __asm { vmovss  xmm0, cs:__real@3f800000; tgt }
  *(double *)&_XMM0 = DiffTrack(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3);
  __asm
  {
    vmovss  dword ptr [rbp+7D318h], xmm0
    vmulss  xmm7, xmm7, xmm0
  }
  if ( !CgWeaponMap::ms_instance[v9] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
    __debugbreak();
  if ( BG_UsingSniperScope(CgWeaponMap::ms_instance[v9], _RBX) )
  {
    __asm
    {
      vxorps  xmm6, xmm6, xmm6
      vxorps  xmm7, xmm7, xmm7
    }
  }
  _RDI = DCONST_DVARVEC3_camera_thirdPersonOffset;
  if ( !DCONST_DVARVEC3_camera_thirdPersonOffset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 734, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "camera_thirdPersonOffset") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RDI);
  __asm
  {
    vmovss  xmm3, dword ptr [rdi+2Ch]
    vmovss  xmm5, dword ptr [rdi+30h]
    vmovss  xmm4, dword ptr [rbx+730h]
    vsubss  xmm0, xmm9, dword ptr [rdi+28h]
    vmulss  xmm1, xmm0, xmm4
    vaddss  xmm2, xmm1, dword ptr [rdi+28h]
    vmovss  dword ptr [rsp+118h+cameraOffset], xmm2
    vsubss  xmm0, xmm7, xmm3
    vmulss  xmm1, xmm0, xmm4
    vaddss  xmm2, xmm1, xmm3
    vmovss  dword ptr [rsp+118h+cameraOffset+4], xmm2
    vsubss  xmm0, xmm6, xmm5
    vmulss  xmm1, xmm0, xmm4
    vaddss  xmm2, xmm1, xmm5
    vmovss  dword ptr [rsp+118h+cameraOffset+8], xmm2
  }
  RefdefView_GetOrg(&_RBP->refdef.view, &outOrg);
  CG_View_UpdateThirdPersonCameraCollision((LocalClientNum_t)v9, _RBP->predictedPlayerState.clientNum, &outOrigin, &cameraOffset, viewAngles, 0, 0, &outOrg, &v1);
  RefdefView_SetOrg(&_RBP->refdef.view, &outOrg);
  AnglesSubtract(&v1, viewAngles, &v1);
  __asm
  {
    vmovss  xmm2, cs:__real@41f00000; max
    vmovss  xmm1, cs:__real@c1f00000; min
    vmovss  xmm0, dword ptr [rsp+118h+v1]; val
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovss  dword ptr [rsp+118h+v1], xmm0
    vmovss  xmm2, cs:__real@41f00000; max
    vmovss  xmm1, cs:__real@c1f00000; min
    vmovss  xmm0, dword ptr [rsp+118h+v1+4]; val
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovss  dword ptr [rsp+118h+v1+4], xmm0
    vmovss  xmm0, dword ptr [rsp+118h+v1]
    vaddss  xmm1, xmm0, dword ptr [r12]
    vmulss  xmm3, xmm1, cs:__real@3b360b61
    vaddss  xmm2, xmm3, cs:__real@3f000000
    vxorps  xmm6, xmm6, xmm6
    vroundss xmm0, xmm6, xmm2, 1
    vsubss  xmm0, xmm3, xmm0
    vmulss  xmm0, xmm0, cs:__real@43b40000
    vmovss  dword ptr [rbp+7D310h], xmm0
    vmovss  xmm1, dword ptr [rsp+118h+v1+4]
    vaddss  xmm2, xmm1, dword ptr [r12+4]
    vmulss  xmm4, xmm2, cs:__real@3b360b61
    vaddss  xmm3, xmm4, cs:__real@3f000000
    vroundss xmm2, xmm6, xmm3, 1
    vsubss  xmm0, xmm4, xmm2
    vmulss  xmm1, xmm0, cs:__real@43b40000
    vmovss  dword ptr [rbp+7D314h], xmm1
  }
  memset(&outOrg, 0, sizeof(outOrg));
  _R11 = &v75;
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
CG_ViewMP_UpdateViewModelsStreamed
==============
*/
void CG_ViewMP_UpdateViewModelsStreamed(const LocalClientNum_t localClientNum)
{
  const cg_t *LocalClientGlobals; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( !CG_ViewMP_HasViewModelsStreamed(LocalClientGlobals) )
  {
    CG_Weapon_FreeViewModelDobj(localClientNum);
    CG_Globals_ResetPlayerWeaponInfo(localClientNum);
  }
}

/*
==============
CG_ViewMP_ValidateWeaponSelect
==============
*/
void CG_ViewMP_ValidateWeaponSelect(const LocalClientNum_t localClientNum, CgGlobalsMP *cgameGlob)
{
  __int64 v3; 
  CgWeaponMap *v4; 
  unsigned int NumWeapons; 
  const playerState_s *p_predictedPlayerState; 
  int i; 
  const Weapon *Weapon; 
  const dvar_t *v12; 
  int EquippedWeaponIndex; 
  __int64 v14; 
  int v15; 
  __int64 v16; 
  bool v17; 
  int IsUnderbarrelWeapon; 
  char v19; 
  __int64 v20; 
  __int64 v21; 

  _R15 = cgameGlob;
  v3 = localClientNum;
  if ( !cgameGlob && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_view_mp.cpp", 2274, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  if ( !CgWeaponMap::ms_instance[v3] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
    __debugbreak();
  v4 = CgWeaponMap::ms_instance[v3];
  if ( _R15->weaponSelect.weaponIdx >= BG_GetNumWeapons() )
  {
    NumWeapons = BG_GetNumWeapons();
    Com_PrintWarning(17, "WARNING: Invalid weaponSelect setting %i (out of range 0 - %i)\n", _R15->weaponSelect.weaponIdx, NumWeapons - 1);
    __asm
    {
      vmovups ymm0, ymmword ptr cs:?NULL_WEAPON@@3UWeapon@@B.weaponIdx; Weapon const NULL_WEAPON
      vmovups ymmword ptr [r15+18114h], ymm0
      vmovups xmm1, xmmword ptr cs:?NULL_WEAPON@@3UWeapon@@B.attachmentVariationIndices+5; Weapon const NULL_WEAPON
      vmovups xmmword ptr [r15+18134h], xmm1
      vmovsd  xmm0, qword ptr cs:?NULL_WEAPON@@3UWeapon@@B.attachmentVariationIndices+15h; Weapon const NULL_WEAPON
      vmovsd  qword ptr [r15+18144h], xmm0
    }
    p_predictedPlayerState = &_R15->predictedPlayerState;
    *(_DWORD *)&_R15->weaponSelect.weaponCamo = *(_DWORD *)&NULL_WEAPON.weaponCamo;
    _R15->weaponSelectInAlt = 0;
    for ( i = 0; i < 15; ++i )
    {
      if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 839, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
        __debugbreak();
      if ( _R15 == (CgGlobalsMP *)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 840, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
        __debugbreak();
      if ( (unsigned int)i >= 0xF )
      {
        LODWORD(v21) = 15;
        LODWORD(v20) = i;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 841, ASSERT_TYPE_ASSERT, "(unsigned)( equippedIndex ) < (unsigned)( 15 )", "equippedIndex doesn't index MAX_EQUIPPED_WEAPONS\n\t%i not in [0, %i)", v20, v21) )
          __debugbreak();
      }
      Weapon = BgWeaponMap::GetWeapon(v4, p_predictedPlayerState->weaponsEquipped[i]);
      if ( Weapon->weaponIdx )
      {
        if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 1105, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
          __debugbreak();
        if ( _R15 == (CgGlobalsMP *)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 1106, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
          __debugbreak();
        v12 = DVARBOOL_bg_giveAll;
        if ( DVARBOOL_bg_giveAll )
        {
          Dvar_CheckFrontendServerThread(DVARBOOL_bg_giveAll);
          if ( v12->current.enabled )
            goto LABEL_69;
        }
        if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 1089, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
          __debugbreak();
        if ( _R15 == (CgGlobalsMP *)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 1090, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
          __debugbreak();
        if ( Weapon->weaponIdx && (EquippedWeaponIndex = BG_GetEquippedWeaponIndex(v4, p_predictedPlayerState, Weapon), EquippedWeaponIndex >= 0) )
          v14 = (__int64)&p_predictedPlayerState->weapEquippedData[EquippedWeaponIndex];
        else
          v14 = 0i64;
        if ( v14 )
        {
LABEL_69:
          if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 1063, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
            __debugbreak();
          if ( _R15 == (CgGlobalsMP *)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 1064, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
            __debugbreak();
          v15 = BG_GetEquippedWeaponIndex(v4, p_predictedPlayerState, Weapon);
          v17 = v15 >= 0 && (v16 = v15, (const playerState_s *)((char *)p_predictedPlayerState + v16 * 16) != (const playerState_s *)-1540i64) && p_predictedPlayerState->weapEquippedData[v16].inAltMode;
          if ( CG_SelectWeapon((LocalClientNum_t)v3, Weapon, v17) )
            break;
        }
      }
    }
    _R15 = cgameGlob;
  }
  if ( _R15->weaponSelectInAlt )
  {
    IsUnderbarrelWeapon = BG_OffhandIsUnderbarrelWeapon(v4, &_R15->predictedPlayerState, 0x3000ui64);
    if ( _R15 == (CgGlobalsMP *)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1422, ASSERT_TYPE_ASSERT, "(playerState)", (const char *)&queryFormat, "playerState") )
      __debugbreak();
    if ( GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&_R15->predictedPlayerState.weapCommon.weapFlags, GameModeFlagValues::ms_mpValue, 0x35u) )
    {
      if ( !Com_GameMode_SupportsFeature(WEAPON_INSPECT|WEAPON_LADDER_AIM) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1426, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::WEAPON_OFFHAND_UNDERBARREL ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::WEAPON_OFFHAND_UNDERBARREL )") )
        __debugbreak();
      v19 = 1;
    }
    else
    {
      v19 = 0;
    }
    if ( IsUnderbarrelWeapon && !v19 )
    {
      if ( !Com_GameMode_SupportsFeature(WEAPON_INSPECT|WEAPON_LADDER_AIM) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_view_mp.cpp", 2311, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::WEAPON_OFFHAND_UNDERBARREL ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::WEAPON_OFFHAND_UNDERBARREL )") )
        __debugbreak();
      _R15->weaponSelectInAlt = 0;
    }
  }
}

/*
==============
CG_View_CalcUICamera
==============
*/

void __fastcall CG_View_CalcUICamera(const LocalClientNum_t localClientNum, double _XMM1_8)
{
  unsigned int v17; 
  bool v19; 
  __int64 v43; 
  __int64 v44; 
  __int64 v45; 
  __int64 v46; 
  __int64 v47; 
  __int64 v48; 
  __int64 v49; 
  __int64 v50; 
  __int64 v51; 
  __int64 v52; 
  vec3_t outOrg; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm6
    vmovaps xmmword ptr [rax-38h], xmm7
  }
  if ( Com_FrontEndScene_IsActive() && !Com_FrontEndScene_FreeCamEnabled() )
  {
    _RSI = CG_GetLocalClientGlobals(localClientNum);
    if ( !_RSI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_view_mp.cpp", 1259, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
      __debugbreak();
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, dword ptr [rsi+65E4h]
      vmulss  xmm3, xmm0, cs:__real@3a83126f
      vxorps  xmm1, xmm1, xmm1
      vcmpless xmm2, xmm3, xmm1
      vmovss  xmm0, cs:__real@3dcccccd
      vblendvps xmm1, xmm3, xmm0, xmm2; Y
      vmovss  xmm0, cs:__real@3e4ccccd; X
    }
    *(float *)&_XMM0 = powf_0(*(float *)&_XMM0, *(float *)&_XMM1);
    __asm { vmovaps xmm7, xmm0 }
    v17 = 0;
    _RBX = &_RSI->currentCameraOffset;
    v19 = 1;
    do
    {
      if ( !v19 )
      {
        LODWORD(v48) = 3;
        LODWORD(v43) = v17;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v43, v48) )
          __debugbreak();
        LODWORD(v49) = 3;
        LODWORD(v44) = v17;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v44, v49) )
          __debugbreak();
        LODWORD(v50) = 3;
        LODWORD(v45) = v17;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v45, v50) )
          __debugbreak();
      }
      __asm
      {
        vmovss  xmm0, dword ptr [rbx]
        vsubss  xmm1, xmm0, dword ptr [rbx-0Ch]
        vmulss  xmm2, xmm1, xmm7
        vaddss  xmm6, xmm2, dword ptr [rbx-0Ch]
      }
      if ( v17 >= 3 )
      {
        LODWORD(v48) = 3;
        LODWORD(v43) = v17;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v43, v48) )
          __debugbreak();
      }
      __asm { vmovss  dword ptr [rbx], xmm6 }
      if ( v17 >= 3 )
      {
        LODWORD(v48) = 3;
        LODWORD(v43) = v17;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v43, v48) )
          __debugbreak();
        LODWORD(v51) = 3;
        LODWORD(v46) = v17;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v46, v51) )
          __debugbreak();
        LODWORD(v52) = 3;
        LODWORD(v47) = v17;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v47, v52) )
          __debugbreak();
      }
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+18h]
        vsubss  xmm1, xmm0, dword ptr [rbx+0Ch]
        vmulss  xmm2, xmm1, xmm7
        vaddss  xmm6, xmm2, dword ptr [rbx+0Ch]
      }
      if ( v17 >= 3 )
      {
        LODWORD(v48) = 3;
        LODWORD(v43) = v17;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v43, v48) )
          __debugbreak();
      }
      __asm { vmovss  dword ptr [rbx+18h], xmm6 }
      ++v17;
      _RBX = (vec3_t *)((char *)_RBX + 4);
      v19 = v17 < 3;
    }
    while ( (int)v17 < 3 );
    RefdefView_GetOrg(&_RSI->refdef.view, &outOrg);
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+98h+outOrg]
      vaddss  xmm1, xmm0, dword ptr [rsi+17FD4h]
      vmovss  dword ptr [rsp+98h+outOrg], xmm1
      vmovss  xmm2, dword ptr [rsp+98h+outOrg+4]
      vaddss  xmm0, xmm2, dword ptr [rsi+17FD8h]
      vmovss  dword ptr [rsp+98h+outOrg+4], xmm0
      vmovss  xmm1, dword ptr [rsp+98h+outOrg+8]
      vaddss  xmm2, xmm1, dword ptr [rsi+17FDCh]
      vmovss  dword ptr [rsp+98h+outOrg+8], xmm2
    }
    RefdefView_SetOrg(&_RSI->refdef.view, &outOrg);
    _RCX = &_RSI->refdefViewAngles;
    __asm
    {
      vmovss  xmm0, dword ptr [rcx]
      vaddss  xmm1, xmm0, dword ptr [rsi+17FECh]
      vmovss  dword ptr [rcx], xmm1
      vmovss  xmm2, dword ptr [rsi+17FF0h]
      vaddss  xmm0, xmm2, dword ptr [rcx+4]
      vmovss  dword ptr [rcx+4], xmm0
      vmovss  xmm1, dword ptr [rsi+17FF4h]
      vaddss  xmm2, xmm1, dword ptr [rcx+8]
      vmovss  dword ptr [rcx+8], xmm2
    }
    AnglesToAxis(&_RSI->refdefViewAngles, &_RSI->refdef.view.axis);
    memset(&outOrg, 0, sizeof(outOrg));
  }
  __asm
  {
    vmovaps xmm6, [rsp+98h+var_28]
    vmovaps xmm7, [rsp+98h+var_38]
  }
}

/*
==============
CgViewSystemMP::CalcLinkedToPlayerViewTags
==============
*/
void CgViewSystemMP::CalcLinkedToPlayerViewTags(CgViewSystemMP *this, CgViewSystem::ViewmodelPhase phase)
{
  ;
}

/*
==============
CgViewSystemMP::CalcRadialMotionBlur
==============
*/
void CgViewSystemMP::CalcRadialMotionBlur(CgViewSystemMP *this)
{
  CG_View_CalcWeaponFireMotionBlurInternal((const LocalClientNum_t)this->m_localClientNum);
  CG_View_CalcRadialMotionBlurInternal((const LocalClientNum_t)this->m_localClientNum);
}

/*
==============
CgViewSystemMP::SetViewValues
==============
*/
void CgViewSystemMP::SetViewValues(CgViewSystemMP *this)
{
  Sys_ProfBeginNamedEvent(0xFFFF6347, "view values (SetViewValues)");
  CG_ViewMP_CalcViewValues((const LocalClientNum_t)this->m_localClientNum);
  CgViewSystem::SetViewValues(this);
  Sys_ProfEndNamedEvent();
}

/*
==============
CgViewSystemMP::UpdateFullFrameFX
==============
*/
void CgViewSystemMP::UpdateFullFrameFX(CgViewSystemMP *this)
{
  CG_ViewMP_UpdateSceneDepthOfField((const LocalClientNum_t)this->m_localClientNum);
  CG_View_UpdateSceneLensProfile((const LocalClientNum_t)this->m_localClientNum);
  CG_View_UpdateWaterSheetingFX((const LocalClientNum_t)this->m_localClientNum);
  CG_View_CalcVignette((const LocalClientNum_t)this->m_localClientNum);
}


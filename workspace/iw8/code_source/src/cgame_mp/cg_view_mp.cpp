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
  double MLGCurrentCameraFoV; 
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
      MLGCurrentCameraFoV = CgMLGCameraManager::GetMLGCurrentCameraFoV(CameraManager);
      CG_View_SetFovDvarValue(localClientNum, *(const float *)&MLGCurrentCameraFoV);
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
  __int64 v1; 
  cg_t *LocalClientGlobals; 
  double MenuBlurRadius; 
  float v4; 
  const dvar_t *v5; 
  float value; 
  double ZNearDvar; 
  CgHandler *v8; 
  char IsThirdPersonMode; 
  CgGlobalsMP *v10; 
  CgGlobalsMP *v11; 
  CgMLGCameraManager *CameraManager; 
  CameraStateInterface *MLGCurrentCameraState; 
  __int64 v14; 
  CgHandler *v15; 
  int clientNum; 
  CgStatic *LocalClientStatics; 
  CgHandler *v18; 
  double Speed; 
  CgHandler *v20; 
  bool v21; 
  bool ShouldRunPrediction; 
  bool v23; 
  CgGlobalsMP *v24; 
  cg_t *v25; 
  CgWeaponMap *v26; 
  cg_t *v27; 
  CgWeaponMap *Instance; 
  char v29; 
  CgGlobalsMP *v30; 
  bool m_fixedDeathCameraIsActive; 
  bool outIsThirdPerson; 
  char v33; 
  bool outOverrideLegacyCamera; 
  int outIsRemoteEyes; 
  vec3_t outOrg; 
  BgHandler *handler; 
  vec3_t viewOrigin; 
  __int64 v39; 
  WorldUpReferenceFrame v40; 

  v39 = -2i64;
  v1 = localClientNum;
  outIsRemoteEyes = 0;
  Sys_ProfBeginNamedEvent(0xFFFF6347, "CG_ViewMP_CalcViewValues");
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)v1);
  MenuBlurRadius = CL_Screen_GetMenuBlurRadius((LocalClientNum_t)v1);
  v4 = *(float *)&MenuBlurRadius;
  if ( CgGlobalsMP::GetLocalClientGlobals((const LocalClientNum_t)v1)->m_frontEndScene )
  {
    v5 = DVARFLT_cg_frontEndSceneZnear;
    if ( !DVARFLT_cg_frontEndSceneZnear && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_frontEndSceneZnear") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v5);
    value = v5->current.value;
  }
  else
  {
    if ( CG_View_IsKillCamDefaultView((const LocalClientNum_t)v1) || CG_View_IsKillCamView((const LocalClientNum_t)v1) && CG_IsCinematicCameraActive((LocalClientNum_t)v1) )
      ZNearDvar = CG_View_GetZNearDvar((const LocalClientNum_t)v1);
    else
      ZNearDvar = CG_View_GetZNear((const LocalClientNum_t)v1);
    value = *(float *)&ZNearDvar;
  }
  v8 = CgHandler::getHandler((LocalClientNum_t)v1);
  handler = v8;
  if ( !CgWeaponMap::ms_instance[v1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
    __debugbreak();
  IsThirdPersonMode = BG_IsThirdPersonMode(CgWeaponMap::ms_instance[v1], &LocalClientGlobals->predictedPlayerState);
  v33 = IsThirdPersonMode;
  outIsThirdPerson = BG_ShouldHandleThirdPersonVehicleCamera(&LocalClientGlobals->predictedPlayerState, v8);
  CG_View_SetupRefDef((const LocalClientNum_t)v1, value, v4);
  CG_ViewMP_SetupRefDefBrCircle((const LocalClientNum_t)v1);
  if ( LocalClientGlobals->cubemapShot )
  {
    CG_View_CalcCubemapViewValues((const LocalClientNum_t)v1);
    CG_ClientAntiCheatMP_ResetLastRecordedViewValues((const LocalClientNum_t)v1);
    goto LABEL_89;
  }
  if ( !CL_Cameraman_Enabled() )
  {
    s_visionSetUpdateData.cvsData = &LocalClientGlobals->cvsData;
    s_visionSetUpdateData.time = LocalClientGlobals->refdef.time;
    Sys_AddWorkerCmd(WRKCMD_CG_VISIONSETUPDATE, &s_visionSetUpdateData);
  }
  CG_Execution_Debug((LocalClientNum_t)v1);
  CG_View_SetupViewport((const LocalClientNum_t)v1);
  CG_View_SetupAimAssist((const LocalClientNum_t)v1);
  if ( CL_Cameraman_Enabled() )
  {
    CL_Cameraman_CalcViewValues((LocalClientNum_t)v1, 0);
    CG_View_CalcFov((const LocalClientNum_t)v1);
    CG_ClientAntiCheatMP_ResetLastRecordedViewValues((const LocalClientNum_t)v1);
    goto LABEL_89;
  }
  v10 = CgGlobalsMP::GetLocalClientGlobals((const LocalClientNum_t)v1);
  v11 = v10;
  if ( v10->m_isMLGSpectator )
  {
    CameraManager = CgMLGSpectator::GetCameraManager(v10->m_mlgSpectatorPtr);
    MLGCurrentCameraState = CgMLGCameraManager::GetMLGCurrentCameraState(CameraManager);
    v14 = (__int64)MLGCurrentCameraState;
    if ( MLGCurrentCameraState )
      v14 = (__int64)MLGCurrentCameraState->UpdateState(MLGCurrentCameraState, (const LocalClientNum_t)v1);
    v15 = CgHandler::getHandler((LocalClientNum_t)v1);
    clientNum = v11->predictedPlayerState.clientNum;
    LocalClientStatics = CgStatic::GetLocalClientStatics((const LocalClientNum_t)v15->m_localClientNum);
    CgStatic::GetCharacterInfo(LocalClientStatics, clientNum);
    if ( v14 && (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v14 + 16i64))(v14) != 1 )
    {
      CG_View_CalcFov((const LocalClientNum_t)v1);
LABEL_27:
      Sys_WaitWorkerCmdsOnlyOfType(WRKCMD_CG_VISIONSETUPDATE);
      CG_View_FinalizeViewValues((const LocalClientNum_t)v1);
      CG_ClientAntiCheatMP_ResetLastRecordedViewValues((const LocalClientNum_t)v1);
      goto LABEL_89;
    }
    IsThirdPersonMode = v33;
  }
  if ( !LocalClientGlobals->IsClientGamePaused(LocalClientGlobals) && !Com_MP_GetShouldClientPause() )
    CG_ViewMotion_Update((const LocalClientNum_t)v1);
  if ( LocalClientGlobals->predictedPlayerState.pm_type == 6 )
  {
    RefdefView_SetOrg(&LocalClientGlobals->refdef.view, &LocalClientGlobals->predictedPlayerState.origin);
    LocalClientGlobals->refdefViewAngles.v[0] = LocalClientGlobals->predictedPlayerState.viewangles.v[0];
    LocalClientGlobals->refdefViewAngles.v[1] = LocalClientGlobals->predictedPlayerState.viewangles.v[1];
    LocalClientGlobals->refdefViewAngles.v[2] = LocalClientGlobals->predictedPlayerState.viewangles.v[2];
    AnglesToAxis(&LocalClientGlobals->refdefViewAngles, &LocalClientGlobals->refdef.view.axis);
LABEL_34:
    Sys_WaitWorkerCmdsOnlyOfType(WRKCMD_CG_VISIONSETUPDATE);
    CG_VisionSetApplyToRefdef(&LocalClientGlobals->refdef, &LocalClientGlobals->cvsData);
    CG_View_CalcFov((const LocalClientNum_t)v1);
    CG_ClientAntiCheatMP_ResetLastRecordedViewValues((const LocalClientNum_t)v1);
    goto LABEL_89;
  }
  if ( CG_View_IsKillCamEntityView((const LocalClientNum_t)v1) )
  {
    CG_KillCam_UpdateKillCamEntity((const LocalClientNum_t)v1, LocalClientGlobals->killCamEntityType);
    Sys_WaitWorkerCmdsOnlyOfType(WRKCMD_CG_VISIONSETUPDATE);
    CG_VisionSetApplyToRefdef(&LocalClientGlobals->refdef, &LocalClientGlobals->cvsData);
    CG_View_SetHudOutline((const LocalClientNum_t)v1);
    CG_View_SetThermal((const LocalClientNum_t)v1);
    CG_ClientAntiCheatMP_ResetLastRecordedViewValues((const LocalClientNum_t)v1);
    goto LABEL_89;
  }
  if ( CG_IsCinematicCameraActive((LocalClientNum_t)v1) )
    goto LABEL_34;
  if ( LocalClientGlobals->radiantCamUseOriginOverride )
    goto LABEL_27;
  v18 = CgHandler::getHandler((LocalClientNum_t)v1);
  Speed = BG_GetSpeed(&LocalClientGlobals->predictedPlayerState, LocalClientGlobals->time, v18);
  LocalClientGlobals->xyspeed = *(float *)&Speed;
  Sys_ProfBeginNamedEvent(0xFFFF0000, "CG_View_CalcViewOrigin");
  CG_View_CalcViewOrigin((const LocalClientNum_t)v1);
  Sys_ProfEndNamedEvent();
  CG_PlayerFade_SetFadeValue((const LocalClientNum_t)v1, LocalClientGlobals->predictedPlayerState.clientNum, 0.0);
  outOverrideLegacyCamera = 0;
  CG_Camera_Active_Update((LocalClientNum_t)v1, &LocalClientGlobals->refdef.view, &outOverrideLegacyCamera);
  if ( !outOverrideLegacyCamera )
  {
    if ( !CG_View_CalcVehicleCamera((const LocalClientNum_t)v1, &outIsRemoteEyes) )
    {
      BG_CalcLinkedViewValues(&LocalClientGlobals->predictedPlayerState, &LocalClientGlobals->refdefViewAngles);
      v20 = CgHandler::getHandler((LocalClientNum_t)v1);
      WorldUpReferenceFrame::WorldUpReferenceFrame(&v40, &LocalClientGlobals->predictedPlayerState, v20, 1);
      WorldUpReferenceFrame::ApplyReferenceFrameToAngles(&v40, &LocalClientGlobals->refdefViewAngles);
      RefdefView_GetOrg(&LocalClientGlobals->refdef.view, &outOrg);
      CG_CalcErrorDecay((const LocalClientNum_t)v1, &outOrg);
      RefdefView_SetOrg(&LocalClientGlobals->refdef.view, &outOrg);
      v21 = CG_GameInterface_ViewMP_UsingWorldSpaceTurret((LocalClientNum_t)v1);
      CG_View_CalcTurretCamera((const LocalClientNum_t)v1, v21);
      CG_View_CalcRemoteEyes((LocalClientNum_t)v1, &outIsRemoteEyes);
      if ( outIsRemoteEyes )
        goto LABEL_47;
      LocalClientGlobals->remoteMissileCamInitialized = 0;
      CG_View_CalcCameraTweaks((const LocalClientNum_t)v1);
      CG_View_TraceProfiling((const LocalClientNum_t)v1);
      RefdefView_GetOrg(&LocalClientGlobals->refdef.view, &outOrg);
      CG_View_AddViewHeight((const LocalClientNum_t)v1, &outOrg);
      RefdefView_SetOrg(&LocalClientGlobals->refdef.view, &outOrg);
      ShouldRunPrediction = CG_PredictMP_ShouldRunPrediction((const LocalClientNum_t)v1);
      CG_View_OffsetFirstPersonView((const LocalClientNum_t)v1, ShouldRunPrediction, &LocalClientGlobals->refdefViewAngles, &outOrg);
      RefdefView_SetOrg(&LocalClientGlobals->refdef.view, &outOrg);
      CG_View_OffsetCrosshair((const LocalClientNum_t)v1, &LocalClientGlobals->refdefViewAngles);
    }
    if ( !outIsRemoteEyes && !IsThirdPersonMode && !outIsThirdPerson )
    {
      v23 = 1;
LABEL_48:
      CG_View_ApplySmoothing((const LocalClientNum_t)v1, v23, &LocalClientGlobals->refdefViewAngles);
      if ( !LocalClientGlobals->IsClientGamePaused(LocalClientGlobals) && !Com_MP_GetShouldClientPause() )
        CG_View_UpdateWeaponMovement_Post(LocalClientGlobals);
      CG_View_CalcDrivingCamera((const LocalClientNum_t)v1);
      CG_ShakeCamera((LocalClientNum_t)v1);
      RefdefView_GetOrg(&LocalClientGlobals->refdef.view, &outOrg);
      secure_uint32_3_t::secureInt32_3_Set(&LocalClientGlobals->aimAssistEyeOrigin, (const SecureVec3 *)&outOrg);
      AnglesToAxis(&LocalClientGlobals->refdefViewAngles, &LocalClientGlobals->refdef.view.axis);
      v24 = CgGlobalsMP::GetLocalClientGlobals((const LocalClientNum_t)v1);
      if ( !v24 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_view_mp.cpp", 520, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
        __debugbreak();
      v24->m_fixedDeathCameraIsActive = 0;
      if ( outIsRemoteEyes )
        goto LABEL_82;
      if ( !IsThirdPersonMode && !outIsThirdPerson )
      {
        s_shakeCmdData.localClientNum = v1;
        s_shakeCmdData.cameraData = &s_shakeData;
        Sys_AddWorkerCmd(WRKCMD_SHAKE_CALC, &s_shakeCmdData);
      }
      v25 = CG_GetLocalClientGlobals((const LocalClientNum_t)v1);
      if ( !v25 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_view_mp.cpp", 428, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
        __debugbreak();
      if ( (unsigned int)(v25->predictedPlayerState.pm_type - 2) <= 1 || v25->renderingThirdPerson || (v26 = CgWeaponMap::GetInstance((const LocalClientNum_t)v1), BG_IsThirdPersonMode(v26, &v25->predictedPlayerState)) || !CG_View_ApplyLinkCameraAnimation((const LocalClientNum_t)v1) )
      {
        v27 = CG_GetLocalClientGlobals((const LocalClientNum_t)v1);
        if ( !v27 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_view_mp.cpp", 402, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
          __debugbreak();
        if ( (unsigned int)(v27->predictedPlayerState.pm_type - 5) > 1 && !v27->renderingThirdPerson )
        {
          Instance = CgWeaponMap::GetInstance((const LocalClientNum_t)v1);
          if ( !BG_IsThirdPersonMode(Instance, &v27->predictedPlayerState) )
            CG_View_CalcViewAnimation((const LocalClientNum_t)v1);
        }
      }
      CG_Camera_Vehicles_Update((LocalClientNum_t)v1, &outIsThirdPerson, &LocalClientGlobals->refdef.view);
      if ( !outIsThirdPerson && LocalClientGlobals->renderingThirdPerson && BG_GetRemoteControlledVehicleEntityNum(&LocalClientGlobals->predictedPlayerState, handler) == 2047 )
      {
        CG_ViewMP_OffsetThirdPersonView((const LocalClientNum_t)v1);
        v29 = v33;
      }
      else
      {
        v29 = v33;
        if ( !v33 )
          goto LABEL_79;
        CG_ViewMP_UpdateThirdPersonMode((LocalClientNum_t)v1, &LocalClientGlobals->baseGunAngles);
      }
      if ( v29 )
      {
LABEL_81:
        CG_GameInterface_ViewMP_FinalizeNonRemoteView((LocalClientNum_t)v1);
        AnglesToAxis(&LocalClientGlobals->refdefViewAngles, &LocalClientGlobals->refdef.view.axis);
        CG_PerturbCamera(LocalClientGlobals);
LABEL_82:
        memset(&outOrg, 0, sizeof(outOrg));
        goto LABEL_83;
      }
LABEL_79:
      if ( !outIsThirdPerson )
      {
        Sys_WaitWorkerCmdsOfType(WRKCMD_SHAKE_CALC);
        RefdefView_GetOrg(&LocalClientGlobals->refdef.view, &outOrg);
        CG_Shake_ApplyHandheldCamera((const LocalClientNum_t)v1, &s_shakeData.handheldTranslation, &s_shakeData.impulseTranslation, &s_shakeData.handheldAngles, &s_shakeData.impulseAngles, &outOrg, &LocalClientGlobals->refdefViewAngles);
        RefdefView_SetOrg(&LocalClientGlobals->refdef.view, &outOrg);
      }
      goto LABEL_81;
    }
LABEL_47:
    v23 = 0;
    goto LABEL_48;
  }
LABEL_83:
  v30 = CgGlobalsMP::GetLocalClientGlobals((const LocalClientNum_t)v1);
  if ( !v30 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_view_mp.cpp", 529, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  m_fixedDeathCameraIsActive = v30->m_fixedDeathCameraIsActive;
  v30->m_fixedDeathCameraWasActive = m_fixedDeathCameraIsActive;
  if ( !m_fixedDeathCameraIsActive )
    RefdefView_GetOrg(&v30->refdef.view, &v30->m_fixedDeathCameraPos);
  v30->m_fixedDeathCameraPrevAngles.v[0] = v30->refdefViewAngles.v[0];
  v30->m_fixedDeathCameraPrevAngles.v[1] = v30->refdefViewAngles.v[1];
  v30->m_fixedDeathCameraPrevAngles.v[2] = v30->refdefViewAngles.v[2];
  Sys_WaitWorkerCmdsOnlyOfType(WRKCMD_CG_VISIONSETUPDATE);
  Sys_ProfBeginNamedEvent(0xFFFF0000, "CG_View_FinalizeViewValues");
  CG_View_FinalizeViewValues((const LocalClientNum_t)v1);
  Sys_ProfEndNamedEvent();
  RefdefView_GetOrg(&LocalClientGlobals->refdef.view, &viewOrigin);
  CG_ClientAntiCheatMP_LogViewValues((const LocalClientNum_t)v1, &LocalClientGlobals->refdefViewAngles, &viewOrigin, LocalClientGlobals->time);
  CG_DrawDebug_Player_ViewValues((LocalClientNum_t)v1);
  AdvancedSwayState::DebugDraw(&LocalClientGlobals->vmMotionState, (const LocalClientNum_t)v1);
  memset(&viewOrigin, 0, sizeof(viewOrigin));
LABEL_89:
  Sys_ProfEndNamedEvent();
}

/*
==============
CG_ViewMP_DofTraceCmd
==============
*/
void CG_ViewMP_DofTraceCmd(const void *const cmdData)
{
  float *v1; 
  LocalClientNum_t v2; 
  cg_t *LocalClientGlobals; 
  int clientNum; 
  int skipEntityCount; 
  centity_t *TurretEntity; 
  vec3_t outOrg; 
  int skipEntities; 
  int number; 
  __int64 v10; 
  vec3_t end; 
  trace_t results; 

  v10 = -2i64;
  v1 = (float *)*((_QWORD *)cmdData + 1);
  v2 = *(_DWORD *)cmdData;
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)*(_DWORD *)cmdData);
  clientNum = LocalClientGlobals->predictedPlayerState.clientNum;
  RefdefView_GetOrg(&LocalClientGlobals->refdef.view, &outOrg);
  end.v[0] = (float)(8192.0 * LocalClientGlobals->refdef.view.axis.m[0].v[0]) + outOrg.v[0];
  end.v[1] = (float)(8192.0 * LocalClientGlobals->refdef.view.axis.m[0].v[1]) + outOrg.v[1];
  end.v[2] = (float)(8192.0 * LocalClientGlobals->refdef.view.axis.m[0].v[2]) + outOrg.v[2];
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
  *v1 = fsqrt((float)((float)((float)((float)((float)((float)(end.v[1] - outOrg.v[1]) * results.fraction) + outOrg.v[1]) - outOrg.v[1]) * (float)((float)((float)((float)(end.v[1] - outOrg.v[1]) * results.fraction) + outOrg.v[1]) - outOrg.v[1])) + (float)((float)((float)((float)((float)(end.v[0] - outOrg.v[0]) * results.fraction) + outOrg.v[0]) - outOrg.v[0]) * (float)((float)((float)((float)(end.v[0] - outOrg.v[0]) * results.fraction) + outOrg.v[0]) - outOrg.v[0]))) + (float)((float)((float)((float)((float)(end.v[2] - outOrg.v[2]) * results.fraction) + outOrg.v[2]) - outOrg.v[2]) * (float)((float)((float)((float)(end.v[2] - outOrg.v[2]) * results.fraction) + outOrg.v[2]) - outOrg.v[2])));
  memset(&outOrg, 0, sizeof(outOrg));
}

/*
==============
CG_ViewMP_DrawActiveFrame
==============
*/
__int64 CG_ViewMP_DrawActiveFrame(const LocalClientNum_t localClientNum, int serverTime, DemoType demoType, CubemapShot cubemapShot, int cubemapSize, int renderScreen, unsigned int drawType)
{
  __int64 v10; 
  const dvar_t *v11; 
  const dvar_t *v12; 
  CgGlobalsMP *LocalClientGlobals; 
  CgStatic *LocalClientStatics; 
  __int64 v15; 
  const dvar_t *v16; 
  cg_t *v17; 
  playerState_s *p_predictedPlayerState; 
  int clientNum; 
  __int64 v20; 
  cg_t *v21; 
  int time; 
  int v23; 
  cg_t *v24; 
  double TimeScale; 
  __int64 v26; 
  __int64 v27; 
  int inKillCam; 
  const cg_t *v29; 
  const dvar_t *v30; 
  const cg_t *v31; 
  unsigned int i; 
  const snapshot_t *nextSnap; 
  __int64 v34; 
  CgMLGCameraManager *CameraManager; 
  int FocusedPlayer; 
  characterInfo_t *v37; 
  CgMLGCameraManager *v38; 
  CameraStateInterface *MLGCurrentCameraState; 
  CgHandler *Handler; 
  int v41; 
  CgStatic *v42; 
  const vec3_t *MLGCurrentCameraPosition; 
  ClActiveClientMP *ClientMP; 
  const vec3_t *MLGCurrentCameraAngles; 
  double MLGCurrentCameraFoV; 
  double Float_Internal_DebugName; 
  const snapshot_t *snap; 
  const snapshot_t *v49; 
  unsigned int v50; 
  const CgSnapshotMP *PrevSnap; 
  int shellshockIndex; 
  int shellshockDuration; 
  int shellshockTime; 
  const shellshock_parms_t *ShellshockParms; 
  int renderingThirdPerson; 
  bool v57; 
  __int16 activeExecutionPartnerEntNum; 
  bool v59; 
  CgAntiLag *Instance; 
  CgEntitySystem *v62; 
  CgBallistics *System; 
  Physics_WorldId v64; 
  double v65; 
  CgClientSideEffectsSystem *v66; 
  bool ShouldSkipPredictionForGameplay; 
  CgGlobalsMP *v68; 
  CgGlobalsMP *v69; 
  const char *ViewHandsModelName; 
  XModel *v71; 
  CgGlobalsMP *v72; 
  const dvar_t *v73; 
  centity_t *predictedPlayerEntity; 
  CgWeaponSystem *v75; 
  double v77; 
  int IsPlayerZeroG; 
  int thermalVisionActive; 
  double FarPlaneDist; 
  bool ShouldClientPause; 
  __int64 v82; 
  __int64 isZeroG; 
  __int64 isZeroGa; 
  __int64 inPip; 
  __int64 inPipa; 
  bool enabled; 
  bool v89; 
  int v90; 
  CgStatic *v91; 
  CgEntitySystem *entitySystem; 
  CgVehicleSystem *VehicleSystem; 
  CgClientSideEffectsSystem *v94; 
  characterInfo_t *CharacterInfo; 
  CgWeaponSystem *v96; 
  CgSoundSystem *SoundSystem; 
  CgViewSystem *ViewSystem; 
  playerState_s *v99; 
  SecureVec3 v100; 
  SecureVec3 outData; 
  vec3_t position; 
  __int64 v103; 
  vec3_t clientPos; 
  vec3_t outOrg; 
  vec4_t out; 
  vec3_t result; 
  vec3_t v108; 

  v103 = -2i64;
  v10 = localClientNum;
  v11 = DCONST_DVARBOOL_bg_cameraUpdateOrderFix;
  if ( !DCONST_DVARBOOL_bg_cameraUpdateOrderFix && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "bg_cameraUpdateOrderFix") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v11);
  enabled = v11->current.enabled;
  v12 = DCONST_DVARBOOL_cg_localPlayerDObjFrameOrderFix;
  if ( !DCONST_DVARBOOL_cg_localPlayerDObjFrameOrderFix && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_localPlayerDObjFrameOrderFix") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v12);
  v89 = v12->current.enabled;
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_view_mp.cpp", 3439, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  Profile2_UpdateEntry(30);
  if ( ((unsigned __int8)&dword_14FDE8048 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &dword_14FDE8048) )
    __debugbreak();
  _InterlockedIncrement(&dword_14FDE8048);
  R_ClearScene();
  Sys_ProfBeginNamedEvent(0xFFFF6347, "clear scene view");
  R_ClearSceneView((LocalClientNum_t)v10);
  Sys_ProfEndNamedEvent();
  Sys_ProfBeginNamedEvent(0xFFFF6347, "Reset Entity Pose State");
  if ( (_BYTE)CgEntitySystem::ms_allocatedType != HALF_HALF )
  {
    LODWORD(inPip) = v10;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 299, ASSERT_TYPE_ASSERT, "(ms_allocatedType == SubSystem::ENTITY_SYSTEM_TYPE)", "%s\n\tTrying to access the entity system for localClientNum %d but the entity system type does not match-> System Type:%d  Allocated Type:%d\n", "ms_allocatedType == SubSystem::ENTITY_SYSTEM_TYPE", inPip, 2, (unsigned __int8)CgEntitySystem::ms_allocatedType) )
      __debugbreak();
  }
  if ( (unsigned int)v10 >= CgEntitySystem::ms_allocatedCount )
  {
    LODWORD(inPip) = CgEntitySystem::ms_allocatedCount;
    LODWORD(isZeroG) = v10;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 300, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", isZeroG, inPip) )
      __debugbreak();
  }
  if ( !CgEntitySystem::ms_entitySystemArray[v10] )
  {
    LODWORD(inPip) = v10;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 301, ASSERT_TYPE_ASSERT, "(ms_entitySystemArray[localClientNum])", "%s\n\tTrying to access unallocated entity system for localClientNum %d\n", "ms_entitySystemArray[localClientNum]", inPip) )
      __debugbreak();
  }
  CgEntitySystemMP::ResetEntityPoseState((CgEntitySystemMP *)CgEntitySystem::ms_entitySystemArray[v10]);
  Sys_ProfEndNamedEvent();
  CG_LaserClearUnused((const LocalClientNum_t)v10);
  FX_BeginMarks((LocalClientNum_t)v10, serverTime);
  if ( ClStatic::IsFirstActiveGameLocalClient(&cls, (LocalClientNum_t)v10) )
    FX_MarksCacheWorldCells(g_worldDraw);
  FX_BeginUpdateView((LocalClientNum_t)v10);
  ScrPlace_BeginDisplayView();
  LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals((const LocalClientNum_t)v10);
  LocalClientStatics = CgStatic::GetLocalClientStatics((const LocalClientNum_t)v10);
  v91 = LocalClientStatics;
  SoundSystem = CgSoundSystem::GetSoundSystem((const LocalClientNum_t)v10);
  entitySystem = CgEntitySystem::GetEntitySystem((const LocalClientNum_t)v10);
  if ( !(_BYTE)CgClientSideEffectsSystem::ms_allocatedType )
  {
    LODWORD(inPip) = v10;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_side_effects.h", 310, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the client-side effects system for localClientNum %d but the client-side effects system type is not known\n", "ms_allocatedType != GameModeType::NONE", inPip) )
      __debugbreak();
  }
  if ( (unsigned int)v10 >= CgClientSideEffectsSystem::ms_allocatedCount )
  {
    LODWORD(inPip) = CgClientSideEffectsSystem::ms_allocatedCount;
    LODWORD(isZeroG) = v10;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_side_effects.h", 311, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", isZeroG, inPip) )
      __debugbreak();
  }
  if ( !CgClientSideEffectsSystem::ms_cseSystemArray[v10] )
  {
    LODWORD(inPip) = v10;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_client_side_effects.h", 312, ASSERT_TYPE_ASSERT, "(ms_cseSystemArray[localClientNum])", "%s\n\tTrying to access unallocated client-side effects system for localClientNum %d\n", "ms_cseSystemArray[localClientNum]", inPip) )
      __debugbreak();
  }
  v94 = CgClientSideEffectsSystem::ms_cseSystemArray[v10];
  if ( CgWeaponSystem::ms_allocatedType == WEAPONS_TYPE_NONE )
  {
    LODWORD(inPip) = v10;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapons.h", 530, ASSERT_TYPE_ASSERT, "(ms_allocatedType != CgWeaponsType::WEAPONS_TYPE_NONE)", "%s\n\tTrying to access the weapon system for localClientNum %d but the weapon system type is not known\n", "ms_allocatedType != CgWeaponsType::WEAPONS_TYPE_NONE", inPip) )
      __debugbreak();
  }
  if ( (unsigned int)v10 >= CgWeaponSystem::ms_allocatedCount )
  {
    LODWORD(inPip) = CgWeaponSystem::ms_allocatedCount;
    LODWORD(isZeroG) = v10;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapons.h", 531, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", isZeroG, inPip) )
      __debugbreak();
  }
  if ( !CgWeaponSystem::ms_weaponSystemArray[v10] )
  {
    LODWORD(inPip) = v10;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapons.h", 532, ASSERT_TYPE_ASSERT, "(ms_weaponSystemArray[localClientNum])", "%s\n\tTrying to access unallocated weapon system for localClientNum %d\n", "ms_weaponSystemArray[localClientNum]", inPip) )
      __debugbreak();
  }
  v96 = CgWeaponSystem::ms_weaponSystemArray[v10];
  ViewSystem = CgViewSystem::GetViewSystem((const LocalClientNum_t)v10);
  VehicleSystem = CgVehicleSystem::GetVehicleSystem((const LocalClientNum_t)v10);
  memset_0(&LocalClientGlobals->viewModelQueuedRenderInfo, 0, 0xD0ui64);
  LocalClientGlobals->viewModelQueuedRenderInfo.m_enabled = enabled;
  v15 = (__int64)LocalClientStatics->GetAnimStatics(LocalClientStatics);
  if ( !v15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_view_mp.cpp", 3475, ASSERT_TYPE_ASSERT, "(cgameAnim)", (const char *)&queryFormat, "cgameAnim") )
    __debugbreak();
  g_activeRefDef = &LocalClientGlobals->refdef;
  LocalClientGlobals->refdef.deferredScreenshotIndex = R_Screenshot_ConsumeDeferredRequest();
  LocalClientGlobals->oldTime = LocalClientGlobals->time;
  v16 = DVARBOOL_mp_paused;
  if ( !DVARBOOL_mp_paused && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "mp_paused") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v16);
  if ( v16->current.enabled )
    serverTime = LocalClientGlobals->time;
  else
    LocalClientGlobals->time = serverTime;
  *(_DWORD *)(v15 + 19528) = serverTime;
  LocalClientGlobals->demoType = demoType;
  LocalClientGlobals->cubemapShot = cubemapShot;
  LocalClientGlobals->cubemapSize = cubemapSize;
  LocalClientGlobals->renderScreen = renderScreen;
  v17 = CG_GetLocalClientGlobals((const LocalClientNum_t)v10);
  p_predictedPlayerState = &v17->predictedPlayerState;
  v99 = &v17->predictedPlayerState;
  if ( v17 == (cg_t *)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_view_mp.cpp", 3502, ASSERT_TYPE_ASSERT, "(predictedPlayerState)", (const char *)&queryFormat, "predictedPlayerState") )
    __debugbreak();
  clientNum = p_predictedPlayerState->clientNum;
  v20 = (__int64)v91;
  v21 = CG_GetLocalClientGlobals((const LocalClientNum_t)v91->m_localClientNum);
  if ( !v21 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static_inline.h", 25, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  CharacterInfo = CG_GetCharacterInfo(v21, clientNum);
  time = LocalClientGlobals->time;
  v23 = time - LocalClientGlobals->oldTime;
  LocalClientGlobals->frametime = v23;
  LocalClientGlobals->originInterpolated = 0;
  if ( v23 < 0 )
  {
    LocalClientGlobals->frametime = 0;
    LocalClientGlobals->oldTime = time;
  }
  CG_DrawNetMP_AddLagometerFrameInfo(LocalClientGlobals);
  CG_ClientNetPerf_AddFrameInfo(LocalClientGlobals);
  *(_DWORD *)(v15 + 19540) = LocalClientGlobals->frametime;
  v24 = CG_GetLocalClientGlobals((const LocalClientNum_t)v10);
  RefdefView_GetOrg(&v24->refdef.view, &outOrg);
  TimeScale = Com_GetTimeScale();
  Cloth_Update_FrameFlip(v10, *(float *)&TimeScale * (float)((float)LocalClientGlobals->frametime * 0.001), &outOrg);
  CG_CalloutMarkerPing_OnBeginDrawActiveFrame((LocalClientNum_t)v10);
  v26 = tls_index;
  v27 = *((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index);
  if ( *(_QWORD *)(v27 + 272) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static.h", 84, ASSERT_TYPE_ASSERT, "( ( ms_activeBgs == 0 ) )", "( ms_activeBgs ) = %p", *(const void **)(v27 + 272)) )
    __debugbreak();
  if ( !(_BYTE)CgStatic::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static.h", 85, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to set the active bgs to the client game static but the allocated type is not known.", "ms_allocatedType != GameModeType::NONE") )
    __debugbreak();
  if ( (unsigned int)v10 >= LODWORD(CgStatic::ms_allocatedCount) )
  {
    *(float *)&inPip = CgStatic::ms_allocatedCount;
    LODWORD(isZeroG) = v10;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static.h", 86, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", isZeroG, inPip) )
      __debugbreak();
  }
  if ( !CgStatic::ms_cgameStaticsArray[v10] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static.h", 87, ASSERT_TYPE_ASSERT, "(ms_cgameStaticsArray[localClientNum] != 0)", "%s\n\tTrying to set the active bgs to the client game static but the client game static has not been allocated", "ms_cgameStaticsArray[localClientNum] != NULL") )
    __debugbreak();
  *(_QWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + v26) + 272i64) = CgStatic::ms_cgameStaticsArray[v10];
  if ( CG_Snapshot_GetSnapshotType() != SNAP_TYPE_MP )
  {
    LODWORD(inPip) = CG_Snapshot_GetSnapshotType();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_view_mp.cpp", 3549, ASSERT_TYPE_ASSERT, "(CG_Snapshot_GetSnapshotType() == CgSnapshotType::SNAP_TYPE_MP)", "%s\n\tCG_ViewMP_UpdateSceneDepthOfField: Trying to get multiplayer snapshot but no multiplayer snapshots have been allocated. CgSnapshotType:%d\n", "CG_Snapshot_GetSnapshotType() == CgSnapshotType::SNAP_TYPE_MP", inPip) )
      __debugbreak();
  }
  CG_SnapshotMP_GetPrevSnap((const LocalClientNum_t)v10);
  Sys_ProfBeginNamedEvent(0xFFFF6347, "Physics Wait Pre ProcSnap");
  Physics_WaitForAllCommandsToFinish();
  Sys_ProfEndNamedEvent();
  CG_Foliage_WaitForProcessCharacterEntityCmds();
  CG_ClientAntiCheatMP_WaitForAllWorkers();
  CG_PlayerVisibilityMP_WaitForAllWorkers();
  if ( CG_PlayersMP_IsWeaponVisibilityTestActive((const LocalClientNum_t)v10) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_view_mp.cpp", 3573, ASSERT_TYPE_ASSERT, "( !CG_PlayersMP_IsWeaponVisibilityTestActive( localClientNum ) )", "Weapon visibility must complete before setNextSnap. This impacts dobj creation and animation") )
    __debugbreak();
  inKillCam = LocalClientGlobals->inKillCam;
  if ( CL_TransientsCommonMP_AnyUnloadsProcessed() )
  {
    v29 = CG_GetLocalClientGlobals((const LocalClientNum_t)v10);
    if ( !CG_ViewMP_HasViewModelsStreamed(v29) )
    {
      CG_Weapon_FreeViewModelDobj((const LocalClientNum_t)v10);
      CG_Globals_ResetPlayerWeaponInfo((const LocalClientNum_t)v10);
    }
  }
  CG_SnapshotMP_ProcessSnapshots((const LocalClientNum_t)v10);
  CG_DistanceCacheMP_CacheLocalClientPlayerState((const LocalClientNum_t)v10);
  CG_Radar_ClearJamming((const LocalClientNum_t)v10);
  CG_CorpseFade_Update((const LocalClientNum_t)v10);
  CG_WeaponFade_Update((const LocalClientNum_t)v10);
  CG_PlayerFade_Update((const LocalClientNum_t)v10);
  if ( v23 < 0 && LocalClientGlobals->inKillCam == inKillCam )
    FX_RewindTo((LocalClientNum_t)v10, LocalClientGlobals->time, v23);
  v30 = DCONST_DVARBOOL_cg_skipStreamedModelValidation;
  if ( !DCONST_DVARBOOL_cg_skipStreamedModelValidation && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_skipStreamedModelValidation") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v30);
  if ( !v30->current.enabled )
  {
    v31 = CG_GetLocalClientGlobals((const LocalClientNum_t)v10);
    if ( !CG_ViewMP_HasViewModelsStreamed(v31) )
    {
      for ( i = 0; i < 2; ++i )
        DObjDumpInfo(v31->m_weaponHand[i].viewModelDObj);
      v20 = (__int64)v91;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_view_mp.cpp", 3188, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "One or more view model has been unloaded. The view model should have been freed before unloading.") )
        __debugbreak();
    }
  }
  if ( !LocalClientGlobals->renderScreen || (nextSnap = LocalClientGlobals->nextSnap) == NULL || (nextSnap->snapFlags & 2) != 0 )
  {
    CgStatic::ClearActiveStatics((const LocalClientNum_t)v10);
    Profile2_UpdateEntry(30);
    if ( ((unsigned __int64)&dword_14FDE8048 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &dword_14FDE8048) )
      __debugbreak();
    _InterlockedDecrement(&dword_14FDE8048);
    return 0i64;
  }
  if ( CL_Main_IsServerLoadingMap() )
  {
    CgStatic::ClearActiveStatics((const LocalClientNum_t)v10);
    Profile2_End(30);
    return 0i64;
  }
  CL_MainMP_SetWaitingOnServerToLoadMap((LocalClientNum_t)v10, 0);
  v34 = *(_QWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + v26) + 272i64);
  if ( (!v34 || v20 != v34) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_view_mp.cpp", 3635, ASSERT_TYPE_ASSERT, "(BgStatic::HasActiveStatics() && (cgameStatic == BgStatic::GetActiveStatics()))", "%s\n\tEntering client game processing loop without a valid client game state", "BgStatic::HasActiveStatics() && (cgameStatic == BgStatic::GetActiveStatics())") )
    __debugbreak();
  if ( !LocalClientGlobals->snap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_view_mp.cpp", 3637, ASSERT_TYPE_ASSERT, "(cgameGlob->snap)", (const char *)&queryFormat, "cgameGlob->snap") )
    __debugbreak();
  if ( !LocalClientGlobals->nextSnap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_view_mp.cpp", 3638, ASSERT_TYPE_ASSERT, "(cgameGlob->nextSnap)", (const char *)&queryFormat, "cgameGlob->nextSnap") )
    __debugbreak();
  CG_PredictMP_SetupPlayerState((LocalClientNum_t)v10);
  if ( Sys_ExistsWorkerCmdsOfType(WRKCMD_TRACE) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_view_mp.cpp", 3643, ASSERT_TYPE_ASSERT, "(!Sys_ExistsWorkerCmdsOfType( WRKCMD_TRACE ))", (const char *)&queryFormat, "!Sys_ExistsWorkerCmdsOfType( WRKCMD_TRACE )") )
    __debugbreak();
  if ( Sys_ExistsWorkerCmdsOfType(WRKCMD_TRACE_AIM_TARGET) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_view_mp.cpp", 3644, ASSERT_TYPE_ASSERT, "(!Sys_ExistsWorkerCmdsOfType( WRKCMD_TRACE_AIM_TARGET ))", (const char *)&queryFormat, "!Sys_ExistsWorkerCmdsOfType( WRKCMD_TRACE_AIM_TARGET )") )
    __debugbreak();
  CL_Main_ResetSkeletonCache();
  if ( ClStatic::IsFirstActiveGameLocalClient(&cls, (LocalClientNum_t)v10) )
    XAnimProceduralBonesAllocator_BeginClientFrame();
  Ragdoll_PreUpdate((LocalClientNum_t)v10);
  Ragdoll_UpdateRestFx((LocalClientNum_t)v10);
  CG_DrawDebug_Player((LocalClientNum_t)v10);
  RefdefView_SetOrg(&LocalClientGlobals->refdef.view, &LocalClientGlobals->refdef.viewOffset);
  if ( LocalClientGlobals->radiantCamUseOriginOverride )
  {
    RefdefView_SetOrg(&LocalClientGlobals->refdef.view, &LocalClientGlobals->radiantCameraOrigin);
    LocalClientGlobals->refdefViewAngles.v[0] = LocalClientGlobals->radiantCameraAngles.v[0];
    LocalClientGlobals->refdefViewAngles.v[1] = LocalClientGlobals->radiantCameraAngles.v[1];
    LocalClientGlobals->refdefViewAngles.v[2] = LocalClientGlobals->radiantCameraAngles.v[2];
    AnglesToAxis(&LocalClientGlobals->refdefViewAngles, &LocalClientGlobals->refdef.view.axis);
    RefdefView_GetOrg(&LocalClientGlobals->refdef.view, &LocalClientGlobals->refdef.viewOffset);
  }
  if ( LocalClientGlobals->m_isMLGSpectator )
  {
    CameraManager = CgMLGSpectator::GetCameraManager(LocalClientGlobals->m_mlgSpectatorPtr);
    FocusedPlayer = CgMLGCameraManager::GetFocusedPlayer(CameraManager, (const LocalClientNum_t)v10);
    if ( FocusedPlayer == -1 || (v37 = CG_GetCharacterInfo(LocalClientGlobals, FocusedPlayer)) == NULL )
    {
      LocalClientGlobals->predictedPlayerState.perks = 0i64;
    }
    else
    {
      LocalClientGlobals->predictedPlayerState.perks.array[0] = v37->perks.array[0];
      LocalClientGlobals->predictedPlayerState.perks.array[1] = v37->perks.array[1];
    }
    v38 = CgMLGSpectator::GetCameraManager(LocalClientGlobals->m_mlgSpectatorPtr);
    MLGCurrentCameraState = CgMLGCameraManager::GetMLGCurrentCameraState(v38);
    Handler = CgHandler::getHandler((LocalClientNum_t)v10);
    v41 = LocalClientGlobals->predictedPlayerState.clientNum;
    v42 = CgStatic::GetLocalClientStatics((const LocalClientNum_t)Handler->m_localClientNum);
    CgStatic::GetCharacterInfo(v42, v41);
    if ( MLGCurrentCameraState )
    {
      if ( MLGCurrentCameraState->GetCameraState(MLGCurrentCameraState) != SPECTATOR_ACTIVE )
      {
        MLGCurrentCameraPosition = CgMLGCameraManager::GetMLGCurrentCameraPosition(v38, &result);
        RefdefView_SetOrg(&LocalClientGlobals->refdef.view, MLGCurrentCameraPosition);
        RefdefView_GetOrg(&LocalClientGlobals->refdef.view, &LocalClientGlobals->refdef.viewOffset);
        ClientMP = ClActiveClientMP::GetClientMP((const LocalClientNum_t)v10);
        MLGCurrentCameraAngles = CgMLGCameraManager::GetMLGCurrentCameraAngles(v38, &v108);
        ClActiveClient_SetCLViewangles(ClientMP, MLGCurrentCameraAngles);
        ClActiveClient_GetCLViewangles(ClientMP, &LocalClientGlobals->refdefViewAngles);
        AnglesToAxis(&LocalClientGlobals->refdefViewAngles, &LocalClientGlobals->refdef.view.axis);
        MLGCurrentCameraFoV = CgMLGCameraManager::GetMLGCurrentCameraFoV(v38);
        CG_View_SetFovDvarValue((const LocalClientNum_t)v10, *(const float *)&MLGCurrentCameraFoV);
      }
    }
  }
  LocalClientGlobals->refdef.time = LocalClientGlobals->time;
  LocalClientGlobals->refdef.frameTime = LocalClientGlobals->frametime;
  if ( CL_Cameraman_Enabled() )
    CL_Cameraman_CalcViewValues((LocalClientNum_t)v10, 1);
  if ( CG_IsCinematicCameraActive((LocalClientNum_t)v10) )
    CG_UpdateCinematicCamera((LocalClientNum_t)v10);
  R_SetLodOrigin(&LocalClientGlobals->refdef, 1.0);
  if ( !Dvar_GetBool_Internal_DebugName(DVARBOOL_cg_umbraWorstCaseMinObjectContributionEnabled, "cg_umbraWorstCaseMinObjectContributionEnabled") || Com_FrontEndScene_IsActive() || !CL_TransientsWorldMP_IsActive() || CL_TransientsWorldMP_AnyTilesVisibleAtLOD((const LocalClientNum_t)v10, 0) )
    LODWORD(Float_Internal_DebugName) = 0;
  else
    Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_cg_umbraWorstCaseMinObjectContributionValue, "cg_umbraWorstCaseMinObjectContributionValue");
  R_SetWorstCaseMinObjectContribution(*(const float *)&Float_Internal_DebugName);
  snap = LocalClientGlobals->snap;
  v49 = LocalClientGlobals->nextSnap;
  v50 = BG_Omnvar_PerSnapCount();
  CG_Omnvar_UpdateInterpolation((const LocalClientNum_t)v10, v50, (const OmnvarData *const)((char *)&snap[44772].__vftable + 4), (const OmnvarData *const)((char *)&v49[44772].__vftable + 4));
  if ( CG_GetOmnvar_IntegerByName((LocalClientNum_t)v10, "post_game_state", &v90, NULL, NULL) && v90 == 5 )
  {
    CL_TransientsWorldMP_OnFrontendPreload();
    Com_FastFile_SetFrontendPreloadRequest();
  }
  CG_ViewMP_UpdateActiveLocalGameClient(LocalClientGlobals, (LocalClientNum_t)v10);
  CG_ProcessRadiantCmds(RADIANT_GAMEMODE_MP);
  PrevSnap = CG_SnapshotMP_GetPrevSnap((const LocalClientNum_t)v10);
  shellshockIndex = PrevSnap->ps.shellshockIndex;
  if ( shellshockIndex )
  {
    shellshockDuration = PrevSnap->ps.shellshockDuration;
    shellshockTime = PrevSnap->ps.shellshockTime;
  }
  else
  {
    shellshockDuration = LocalClientGlobals->testShock.duration;
    shellshockTime = LocalClientGlobals->testShock.cg_t::time;
  }
  ShellshockParms = BG_GetShellshockParms(shellshockIndex);
  CG_StartShellShock(LocalClientGlobals, ShellshockParms, shellshockTime, shellshockDuration);
  CG_UpdateShellShock((LocalClientNum_t)v10, LocalClientGlobals->shellshock.parms, LocalClientGlobals->shellshock.startTime, LocalClientGlobals->shellshock.duration);
  CG_Execution_CheckEndCamera((LocalClientNum_t)v10);
  renderingThirdPerson = LocalClientGlobals->renderingThirdPerson;
  CG_ViewMP_UpdateThirdPerson((LocalClientNum_t)v10);
  v57 = !renderingThirdPerson && LocalClientGlobals->renderingThirdPerson;
  if ( !LocalClientGlobals->inKillCam && v57 )
  {
    CG_CustomizationMP_ResetCustomizationLatchForClient((const LocalClientNum_t)v10, LocalClientGlobals->predictedPlayerEntity->nextState.clientNum);
    if ( LocalClientGlobals->predictedPlayerState.clientNum == CG_GetLocalClientGlobals((const LocalClientNum_t)v10)->clientNum )
    {
      activeExecutionPartnerEntNum = LocalClientGlobals->predictedPlayerState.activeExecutionPartnerEntNum;
      if ( activeExecutionPartnerEntNum != 2047 )
        CG_CustomizationMP_ResetCustomizationLatchForClient((const LocalClientNum_t)v10, activeExecutionPartnerEntNum);
    }
  }
  v59 = LocalClientGlobals->renderingThirdPerson && LocalClientGlobals->predictedPlayerState.vehicleState.entity != 2047;
  CG_ViewMP_SetClientEntCollision((LocalClientNum_t)v10, v59);
  CG_ClearHudGrenades(LocalClientGlobals);
  CG_ViewMP_UpdateEntInfo((const LocalClientNum_t)v10);
  CGMovingPlatformAimAssist::AimAssistResetFrameData((LocalClientNum_t)v10);
  CG_View_UpdateShieldViewFx((const LocalClientNum_t)v10);
  CG_View_UpdateScopeOutlineInfo((LocalClientNum_t)v10);
  CG_View_UpdateViewmodelOutline((LocalClientNum_t)v10);
  CG_View_UpdateDepthScanParams((LocalClientNum_t)v10);
  Physics_WaitForAllCommandsToFinish();
  _XMM0 = LODWORD(FLOAT_0_016666668);
  Physics_CheckForGarbageCollectionClient(0.016666668);
  if ( CG_PlayersMP_IsWeaponVisibilityTestActive((const LocalClientNum_t)v10) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_view_mp.cpp", 3812, ASSERT_TYPE_ASSERT, "( !CG_PlayersMP_IsWeaponVisibilityTestActive( localClientNum ) )", "Weapon visibility must complete before AddPacketEntities. This impacts dobj creation and animation") )
    __debugbreak();
  SND_AddPhysicsQueryBlock();
  CG_ClientModel_ResetPrevPose((const LocalClientNum_t)v10);
  if ( !LocalClientGlobals->nextSnap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_view_mp.cpp", 3827, ASSERT_TYPE_ASSERT, "(cgameGlob->nextSnap != nullptr)", (const char *)&queryFormat, "cgameGlob->nextSnap != nullptr") )
    __debugbreak();
  ScriptableCl_BeginFrame((const LocalClientNum_t)v10, LocalClientGlobals->nextSnap->serverTime, LocalClientGlobals->inKillCam != inKillCam);
  ScriptableCl_Spatial_Update((const LocalClientNum_t)v10);
  ScriptableCl_UpdateNonEntitySharedInstances((const LocalClientNum_t)v10);
  CG_Door_UpdateScriptableAngles((const LocalClientNum_t)v10);
  if ( !CgAntiLag::IsDisabledForMigration((const LocalClientNum_t)v10) )
  {
    Instance = CgAntiLag::GetInstance((const LocalClientNum_t)v10);
    if ( !Instance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_view_mp.cpp", 3842, ASSERT_TYPE_ASSERT, "(antilag)", (const char *)&queryFormat, "antilag") )
      __debugbreak();
    BgAntiLag::PurgeLerpMoverCommands(Instance, LocalClientGlobals->time);
  }
  CG_Door_InitPMoveData((const LocalClientNum_t)v10);
  CgVehicleSystem::PhysicsProcessDeferredEvents(VehicleSystem);
  Profile2_Begin(32);
  v62 = entitySystem;
  entitySystem->AddPacketEntities(entitySystem, (unsigned int)v10);
  Profile2_End(32);
  CG_DistanceCacheMP_Validate((const LocalClientNum_t)v10);
  CG_CustomizationMP_ResetCustomizationLatchForFarCharacters((const LocalClientNum_t)v10);
  CG_WorldStreaming_Update((const LocalClientNum_t)v10);
  v62->AddDeferredEntitiesToStreamingDistanceCache(v62, (const LocalClientNum_t)v10);
  CG_CustomizationStreamingMP_LoadCustomizations((const LocalClientNum_t)v10);
  CG_WeaponStreamingMP_LoadWeapons((const LocalClientNum_t)v10);
  Profile_Begin(801);
  CGMovingPlatformClient::UpdateFrameCache(&LocalClientGlobals->movingPlatforms, (const LocalClientNum_t)v10);
  Profile_EndInternal(NULL);
  CG_Execution_StartWorkers((LocalClientNum_t)v10);
  Physics_WaitForPredictiveWorldUpdatePreCommandToFinish();
  SND_ReleasePhysicsQueryBlock();
  CG_Execution_WaitForWorkers((LocalClientNum_t)v10);
  if ( !(_DWORD)v10 )
    PhysPerfRaycast_Update();
  CgSimBulletFirePellet_WaitForWorkers((LocalClientNum_t)v10);
  System = CgBallistics::GetSystem((const LocalClientNum_t)v10);
  if ( !System && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_view_mp.cpp", 3906, ASSERT_TYPE_ASSERT, "(balisticsSystem)", (const char *)&queryFormat, "balisticsSystem") )
    __debugbreak();
  CgBallistics::WaitForWorkers(System);
  CgSimBulletFirePellet_ProcessEvents((LocalClientNum_t)v10);
  Sys_ProfBeginNamedEvent(0xFFF08080, "Physics_ProcessDeferredForceCallbacks");
  v64 = 3 * v10 + 3;
  Physics_ProcessDeferredForceCallbacks(v64);
  Sys_ProfEndNamedEvent();
  R_StartDelayedSceneModelWorker();
  DynEntCL_AddWorkerCmd((LocalClientNum_t)v10);
  v65 = Com_GetTimeScale();
  Ragdoll_AddUpdateWorkerCmds((LocalClientNum_t)v10, *(float *)&v65 * 0.016666668);
  CG_Particle_AddProcessFxPhysicsObjectRequestsWorkerCmd((LocalClientNum_t)v10);
  CG_Cloth_Entity_Update((const LocalClientNum_t)v10);
  Sys_ProfBeginNamedEvent(0xFFFFA500, "CG_Radar_UpdateJammingLevel");
  CG_Radar_UpdateJammingLevel((const LocalClientNum_t)v10);
  Sys_ProfEndNamedEvent();
  Sys_ProfBeginNamedEvent(0xFFF08080, "CG_RumbleMP_Update");
  CG_Rumble_ProcessDeferred((LocalClientNum_t)v10);
  CG_RumbleMP_Update((const LocalClientNum_t)v10);
  Sys_ProfEndNamedEvent();
  Sys_ProfBeginNamedEvent(0xFF44CCFF, "CG_TriggerUpdate");
  CG_TriggerUpdate((LocalClientNum_t)v10);
  Sys_ProfEndNamedEvent();
  Sys_ProfBeginNamedEvent(0xFF191970, "CG_UpdateClientSideEffects");
  v66 = v94;
  CgClientSideEffectsSystem::Update(v94);
  Sys_ProfEndNamedEvent();
  if ( Com_GameMode_SupportsFeature(WEAPON_RECHAMBERING) )
  {
    Sys_ProfBeginNamedEvent(0xFFFAEBD7, "Add Client Side Sounds");
    CgClientSideEffectsSystem::AddSounds(v66);
    CgClientSideEffectsSystem::UpdateEffects(v66);
    Sys_ProfEndNamedEvent();
  }
  Sys_ProfBeginNamedEvent(0xFFDAA520, "CG_VisionSetsUpdate_PrePlayerStatePrediction");
  CG_VisionSetsUpdate_PrePlayerStatePrediction((const LocalClientNum_t)v10);
  Sys_ProfEndNamedEvent();
  Profile_Begin(603);
  Physics_WaitForPredictiveWorldUpdateCommandToFinish();
  Profile_EndInternal(NULL);
  FX_UpdateTeam((LocalClientNum_t)v10, CharacterInfo->team);
  if ( ClStatic::IsFirstActiveGameLocalClient(&cls, (LocalClientNum_t)v10) )
  {
    clientPos.v[0] = LocalClientGlobals->playerBox.midPoint.v[0] + LocalClientGlobals->predictedPlayerState.origin.v[0];
    clientPos.v[1] = LocalClientGlobals->predictedPlayerState.origin.v[1] + LocalClientGlobals->playerBox.midPoint.v[1];
    clientPos.v[2] = LocalClientGlobals->predictedPlayerState.origin.v[2] + LocalClientGlobals->playerBox.midPoint.v[2];
    *((_QWORD *)&_XMM0 + 1) = 0i64;
    R_ReactiveMotion_Update((LocalClientNum_t)v10, (float)LocalClientGlobals->time * 0.001, (float)(LocalClientGlobals->time - LocalClientGlobals->oldTime) * 0.001, &clientPos, &LocalClientGlobals->predictedPlayerState.velocity);
    R_UpdateSound();
  }
  Sys_ProfBeginNamedEvent(0xFFFF6347, "pre player state");
  Profile_BeginCSV(4);
  CG_Foliage_WaitForProcessCharacterEntityCmds();
  SND_AddPhysicsQueryBlock();
  CG_PredictMP_PrePredictSinglePlayerState((LocalClientNum_t)v10);
  SND_ReleasePhysicsQueryBlock();
  Profile_EndCSV(4);
  Sys_ProfEndNamedEvent();
  if ( ClStatic::IsFirstActiveGameLocalClient(&cls, (LocalClientNum_t)v10) )
    CL_Main_SyncGpu((LocalClientNum_t)v10);
  R_ToggleSmpFrame((LocalClientNum_t)v10);
  CG_FrontEndScene_FrameUpdate((LocalClientNum_t)v10);
  CG_HighPriorityWeapon_Update((const LocalClientNum_t)v10);
  CG_Skydive_Update((const LocalClientNum_t)v10);
  CG_Turret_Update((const LocalClientNum_t)v10);
  CG_Ladder_Update((LocalClientNum_t)v10);
  CG_LightSampler_Update((LocalClientNum_t)v10);
  ShouldSkipPredictionForGameplay = CG_PredictMP_ShouldSkipPredictionForGameplay((const LocalClientNum_t)v10, LocalClientGlobals, &LocalClientGlobals->predictedPlayerState);
  CG_PlayerSecondaryCollision_StartBroadphaseWorker((const LocalClientNum_t)v10, !ShouldSkipPredictionForGameplay, &LocalClientGlobals->predictedPlayerState);
  Sys_ProfBeginNamedEvent(0xFFFF6347, "handle client input");
  R_GPU_RecordLatencyEvent(LATENCY_EVENT_CL_INPUT, rg.frontEndFrameCount);
  CG_Utils_UpdateActiveInputContext((LocalClientNum_t)v10);
  if ( (unsigned int)v10 >= 2 )
  {
    LODWORD(inPip) = 2;
    LODWORD(isZeroG) = v10;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 174, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", isZeroG, inPip) )
      __debugbreak();
  }
  if ( clientUIActives[v10].connectionState == CA_ACTIVE && CL_Input_AllowInput((LocalClientNum_t)v10) )
  {
    if ( ClStatic::IsFirstActiveGameLocalClient(&cls, (LocalClientNum_t)v10) )
    {
      cls.inputUpdatedPrevFrame = 1;
      IN_Frame();
    }
    CL_Input_AutomatedInput_Frame((LocalClientNum_t)v10);
    CL_Input_SequenceUpdate((const LocalClientNum_t)v10);
    CL_InputMP_CreateNewCommands_1((LocalClientNum_t)v10);
  }
  Sys_ProfEndNamedEvent();
  CG_CreateFx_Frame(LocalClientGlobals);
  CG_ModelPreviewerFrame(LocalClientGlobals);
  CG_AddModelPreviewerModel((LocalClientNum_t)v10, LocalClientGlobals->frametime);
  Sys_ProfBeginNamedEvent(0xFFFF6347, "player state");
  Profile_BeginCSV(7);
  SND_AddPhysicsQueryBlock();
  CG_PredictMP_PredictPlayerState((LocalClientNum_t)v10);
  CG_Skydive_PostPlayerStateUpdate((const LocalClientNum_t)v10);
  v68 = CgGlobalsMP::GetLocalClientGlobals((const LocalClientNum_t)v10);
  v69 = v68;
  if ( v68->renderingThirdPerson )
  {
    if ( v68->activeCameraEnabledThirdPerson && !CG_Camera_Active_IsThirdPerson((LocalClientNum_t)v10) )
      *(_QWORD *)&v69->renderingThirdPerson = 0i64;
  }
  else if ( v68->predictedPlayerState.pm_type != 3 && (!BG_IsSpectating(&v68->predictedPlayerState) || CG_View_IsKillCamView((const LocalClientNum_t)v10)) && CG_Camera_Active_IsThirdPerson((LocalClientNum_t)v10) )
  {
    v69->renderingThirdPerson = 1;
    v69->activeCameraEnabledThirdPerson = 1;
  }
  SND_ReleasePhysicsQueryBlock();
  CG_UpdateWeaponViewmodels((LocalClientNum_t)v10);
  Sys_ProfBeginNamedEvent(0xFFEE82EE, "CG_ViewMP_UpdateViewHands");
  ViewHandsModelName = CG_ViewMP_GetViewHandsModelName((const LocalClientNum_t)v10, LocalClientGlobals);
  if ( ViewHandsModelName && *ViewHandsModelName )
  {
    v71 = R_RegisterModel(ViewHandsModelName);
    CG_UpdateHandViewmodels((LocalClientNum_t)v10, v71);
  }
  Sys_ProfEndNamedEvent();
  CG_ClearTurretFire();
  CG_DrawNetMP_AddDeathMonitorSample((LocalClientNum_t)v10);
  if ( enabled )
    CG_CameraUpdateOrderFix_AddPostPlayerStateEnts((LocalClientNum_t)v10, v62);
  v72 = CgGlobalsMP::GetLocalClientGlobals((const LocalClientNum_t)v10);
  if ( GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&v72->predictedPlayerState.otherFlags, ACTIVE, 0xBu) )
  {
    v73 = DVARBOOL_killswitch_last_stand_pose_eval_order_fix_enabled;
    if ( !DVARBOOL_killswitch_last_stand_pose_eval_order_fix_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "killswitch_last_stand_pose_eval_order_fix_enabled") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v73);
    if ( v73->current.enabled && !v72->predictedPlayerState.pm_type )
    {
      if ( CG_PlayersMP_ShouldProcessLocalPlayerEntity((LocalClientNum_t)v10) )
      {
        predictedPlayerEntity = LocalClientGlobals->predictedPlayerEntity;
        if ( predictedPlayerEntity )
          CG_EntityMP_CalcLerpPositions((LocalClientNum_t)v10, predictedPlayerEntity);
      }
    }
  }
  if ( enabled )
  {
    CG_ViewMP_UpdateKickAngles(LocalClientGlobals);
    CG_View_UpdateTurretZoom((const LocalClientNum_t)LocalClientGlobals->localClientNum);
    CG_CameraUpdateOrderFix_PostPhysicsWorkers_Phase2(LocalClientGlobals);
  }
  s_dofTraceData.clientNum = v10;
  s_dofTraceData.distance = &s_dofTraceDistance;
  Sys_AddWorkerCmd(WRKCMD_CG_VIEWMP_DOFTRACE, &s_dofTraceData);
  if ( v89 )
  {
    CG_PlayersMP_UpdateLocalPlayerEntityModels((LocalClientNum_t)v10);
    CG_ViewMP_ProcessLocalPlayerEntity(LocalClientGlobals);
  }
  DynEntCL_WaitForAddWorkerCmds();
  Sys_WaitWorkerCmdsOfType(WRKCMD_PROCESS_DEFERRED_PARTICLE_PHYSICS);
  if ( enabled )
    CG_ViewWeaponCleanUp((const LocalClientNum_t)LocalClientGlobals->localClientNum);
  CG_PlayerStateMP_TransitionPlayerState((LocalClientNum_t)v10, &LocalClientGlobals->predictedPlayerState, &LocalClientGlobals->oldTransPlayerState);
  if ( !enabled )
    CG_CameraUpdateOrderFix_AddPostPlayerStateEnts((LocalClientNum_t)v10, entitySystem);
  CG_View_CalcWeaponInspectDoF(LocalClientGlobals);
  CG_VisionSetsUpdate_PostPlayerStatePrediction((const LocalClientNum_t)v10);
  CG_VisionSets_UpdateWeaponADS((const LocalClientNum_t)v10);
  CG_WeaponSounds_Update((const LocalClientNum_t)v10);
  CG_SndUpdateAutoSim();
  CG_SndUpdateSubmix((LocalClientNum_t)v10);
  if ( !v89 )
    CG_PlayersMP_UpdateLocalPlayerEntityModels((LocalClientNum_t)v10);
  CG_ContextMount_UmbraOffsetTrace_StartWorkers((const LocalClientNum_t)v10);
  CG_TraceGroundWorkers_StartWorkers((const LocalClientNum_t)v10);
  CgBallistics::StartWorkers(System, 1);
  if ( !CgSimBulletFirePellet_DelayUntilPlayerOriginUpdate(LocalClientGlobals) )
    CgSimBulletFirePellet_StartWorkers((LocalClientNum_t)v10);
  if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_cg_enableLaserWorkers, "cg_enableLaserWorkers") )
  {
    if ( Com_GameMode_SupportsFeature(WEAPON_SLIDE) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_view_mp.cpp", 4214, ASSERT_TYPE_ASSERT, "(!Com_GameMode_SupportsFeature( Com_GameMode_Feature::LASER_DETAILED_PHYSICS_WORLD ))", (const char *)&queryFormat, "!Com_GameMode_SupportsFeature( Com_GameMode_Feature::LASER_DETAILED_PHYSICS_WORLD )") )
      __debugbreak();
    CG_Laser_AddDrawAllWorkers((const LocalClientNum_t)v10, LASER_COLLISION_ALL);
  }
  CG_ProcessTurretFire((const LocalClientNum_t)v10);
  if ( !v89 )
    CG_ViewMP_ProcessLocalPlayerEntity(LocalClientGlobals);
  CG_FootstepTracker_Update((LocalClientNum_t)v10);
  CG_Execution_XCamUpdateTransform((LocalClientNum_t)v10);
  CG_View_UpdateMainThreadTraceSafeLogic((LocalClientNum_t)v10);
  if ( CgSimBulletFirePellet_DelayUntilPlayerOriginUpdate(LocalClientGlobals) )
    CgSimBulletFirePellet_StartWorkers((LocalClientNum_t)v10);
  CgSimBulletFirePellet_WaitForWorkers((LocalClientNum_t)v10);
  CgBallistics::WaitForWorkers(System);
  CgSimBulletFirePellet_ProcessEvents((LocalClientNum_t)v10);
  CG_TraceGroundWorkers_WaitForWorkers();
  CG_TraceGroundWorkers_ProcessOutput((const LocalClientNum_t)v10);
  v75 = v96;
  CgWeaponSystem::DrawDebugBulletLines(v96);
  Sys_WaitWorkerCmdsOfType(WRKCMD_ADD_DYNENT_SPATIAL);
  Sys_WaitWorkerCmdsOfType(WRKCMD_RAGDOLL_UPDATE);
  ScriptableCl_UpdateClientInstances((const LocalClientNum_t)v10, LocalClientGlobals->frametime);
  PhysicsSVFX_Update(v64, (LocalClientNum_t)v10, 0.016666668);
  DynEnt_UpdateFrameFlags((LocalClientNum_t)v10);
  CG_ClientModel_SyncLoaded((const LocalClientNum_t)v10);
  CL_UI_ClientModel_Update();
  if ( Com_GameMode_SupportsFeature(WEAPON_RECHAMBERING|0x100) && Dvar_GetBool_Internal_DebugName(DVARBOOL_physics_killswitchEnableClientAuthWorldUseCGameTimeForWorldStep, "physics_killswitchEnableClientAuthWorldUseCGameTimeForWorldStep") )
  {
    *((_QWORD *)&_XMM0 + 1) = 0i64;
    *(float *)&_XMM6 = (float)LocalClientGlobals->frametime * 0.001;
  }
  else
  {
    v77 = Com_GetTimeScale();
    *(float *)&_XMM6 = *(float *)&v77 * cls.frametime_rawSeconds;
  }
  *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_physics_maxClientWorldTimeStep, "physics_maxClientWorldTimeStep");
  if ( *(float *)&_XMM0 > 0.0 )
    __asm { vminss  xmm6, xmm0, xmm6 }
  Profile_Begin(657);
  Physics_PreStepWorld(v64, *(float *)&_XMM6);
  Profile_EndInternal(NULL);
  Physics_ProcessDeferredKeyframe(v64, 1.0);
  Physics_StepWorld(v64, 0, 1, 0.0);
  Physics_AddToScene((LocalClientNum_t)v10);
  FX_Update0((LocalClientNum_t)v10, LocalClientGlobals->time);
  FX_Update1((LocalClientNum_t)v10);
  LocalClientGlobals->cvsData.transitory.thermalVisionActive = CG_View_IsThermalVisionOn((const LocalClientNum_t)v10);
  CG_ViewMP_UpdateBRCircleSounds((const LocalClientNum_t)v10);
  CG_View_UpdateLocSelInfo((const LocalClientNum_t)v10);
  if ( !enabled )
    CG_CameraUpdateOrderFix_PostPhysicsWorkers_Phase0(LocalClientGlobals);
  CL_InputMP_SavePredictedData((const LocalClientNum_t)v10);
  if ( CL_InputMP_ReadyToSendPacket((LocalClientNum_t)v10) && (!Com_GameMode_SupportsFeature(WEAPON_SCOPE_TOGGLE_ON|WEAPON_FIRING|0x80) || !Com_MP_GetIsLocalServerPaused()) )
    CL_InputMP_WritePacket((LocalClientNum_t)v10);
  Profile_EndCSV(7);
  Sys_ProfEndNamedEvent();
  if ( !enabled )
    CG_CameraUpdateOrderFix_PostPhysicsWorkers_Phase1(LocalClientGlobals);
  CgSoundSystem::UpdateBreathingSounds(SoundSystem);
  if ( enabled )
  {
    CG_View_UpdateXCamView((LocalClientNum_t)v10);
    CG_Entity_ProcessQueuedViewModelDObj((const LocalClientNum_t)v10);
  }
  else
  {
    CG_CameraUpdateOrderFix_PostPhysicsWorkers_Phase2(LocalClientGlobals);
    CG_ViewWeaponCleanUp((const LocalClientNum_t)LocalClientGlobals->localClientNum);
  }
  CG_PlayerMP_AddViewLinkedHelmet((const LocalClientNum_t)v10);
  CG_Heat_UpdateViewmodel((LocalClientNum_t)v10);
  if ( !(_BYTE)CgDrawSystem::ms_allocatedType )
  {
    LODWORD(inPip) = v10;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw.h", 176, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the draw system for localClientNum %d but the draw system type is not known\n", "ms_allocatedType != GameModeType::NONE", inPip) )
      __debugbreak();
  }
  if ( (unsigned int)v10 >= CgDrawSystem::ms_allocatedCount )
  {
    LODWORD(inPip) = CgDrawSystem::ms_allocatedCount;
    LODWORD(isZeroG) = v10;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw.h", 177, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", isZeroG, inPip) )
      __debugbreak();
  }
  if ( !CgDrawSystem::ms_drawSystemArray[v10] )
  {
    LODWORD(inPip) = v10;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_draw.h", 178, ASSERT_TYPE_ASSERT, "(ms_drawSystemArray[localClientNum])", "%s\n\tTrying to access unallocated draw system for localClientNum %d\n", "ms_drawSystemArray[localClientNum]", inPip) )
      __debugbreak();
  }
  CgDrawSystem::ms_drawSystemArray[v10]->UpdateScissor(CgDrawSystem::ms_drawSystemArray[v10]);
  Sys_ProfBeginNamedEvent(0xFFFF6347, "player entity");
  CgWeaponSystem::ProcessDeferredTracer(v75);
  CgBallistics::FinishFrame(System);
  CG_ProcessDeathCamImpacts((const LocalClientNum_t)v10);
  CG_UpdateLocalEntities((const LocalClientNum_t)v10);
  IsPlayerZeroG = BG_IsPlayerZeroG(&LocalClientGlobals->predictedPlayerState);
  thermalVisionActive = LocalClientGlobals->cvsData.transitory.thermalVisionActive;
  FarPlaneDist = R_GetFarPlaneDist();
  FX_Update2((LocalClientNum_t)v10, &LocalClientGlobals->refdef, &LocalClientGlobals->refdef.view, *(float *)&FarPlaneDist, thermalVisionActive, IsPlayerZeroG, 0);
  AxisToQuat(&LocalClientGlobals->refdef.view.axis, &out);
  RefdefView_GetOrg(&LocalClientGlobals->refdef.view, &position);
  CG_Rumble_SetReceiver((LocalClientNum_t)v10, LocalClientGlobals->predictedPlayerState.clientNum, &position, &out);
  CG_Slide_UpdateClient((LocalClientNum_t)v10);
  CG_Ladder_PlayAudioClient((const LocalClientNum_t)v10);
  CG_View_UpdateTestFX((const LocalClientNum_t)v10);
  if ( ClStatic::IsFirstActiveGameLocalClient(&cls, (LocalClientNum_t)v10) )
  {
    Sys_ProfBeginNamedEvent(0xFFB22222, "mayhem update all");
    Mayhem_Update((LocalClientNum_t)v10, MAYHEM_UPDATE_ALL);
    Sys_ProfEndNamedEvent();
  }
  Com_DevhostUpdate(103);
  CG_CalloutMarkerPing_WaitForContextualPingWorkerThread((const LocalClientNum_t)v10);
  CG_ClientModel_Update((const LocalClientNum_t)v10);
  if ( !(_DWORD)v10 )
  {
    CG_View_DumpAnims(LOCAL_CLIENT_0);
    CG_View_DumpAnims3D(LOCAL_CLIENT_0);
    CG_View_DumpDObj(LOCAL_CLIENT_0);
  }
  CG_LatencyTestMP_Update((LocalClientNum_t)v10);
  R_EndDelayedSceneModels(1);
  Sys_ProfEndNamedEvent();
  Sys_ProfBeginNamedEvent(0xFFFF6347, "remaining fx");
  R_EndDObjScene();
  if ( !Dvar_GetBool_Internal_DebugName(DVARBOOL_cg_enableLaserWorkers, "cg_enableLaserWorkers") )
  {
    if ( Com_GameMode_SupportsFeature(WEAPON_SLIDE) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_view_mp.cpp", 4453, ASSERT_TYPE_ASSERT, "(!Com_GameMode_SupportsFeature( Com_GameMode_Feature::LASER_DETAILED_PHYSICS_WORLD ))", (const char *)&queryFormat, "!Com_GameMode_SupportsFeature( Com_GameMode_Feature::LASER_DETAILED_PHYSICS_WORLD )") )
      __debugbreak();
    CG_LaserDrawAll((LocalClientNum_t)v10, LASER_COLLISION_ALL);
  }
  Sys_WaitWorkerCmdsOfType(WRKCMD_DRAW_LASERS);
  CG_Deploy_Update((LocalClientNum_t)v10);
  if ( !(_BYTE)CgCompassSystem::ms_allocatedType )
  {
    LODWORD(inPipa) = v10;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.h", 575, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the compass system for localClientNum %d but the compass system type is not known\n", "ms_allocatedType != GameModeType::NONE", inPipa) )
      __debugbreak();
  }
  if ( (unsigned int)v10 >= CgCompassSystem::ms_allocatedCount )
  {
    LODWORD(inPipa) = CgCompassSystem::ms_allocatedCount;
    LODWORD(isZeroGa) = v10;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.h", 576, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", isZeroGa, inPipa) )
      __debugbreak();
  }
  if ( !CgCompassSystem::ms_compassSystemArray[v10] )
  {
    LODWORD(inPipa) = v10;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_compass.h", 577, ASSERT_TYPE_ASSERT, "(ms_compassSystemArray[localClientNum])", "%s\n\tTrying to access unallocated compass system for localClientNum %d\n", "ms_compassSystemArray[localClientNum]", inPipa) )
      __debugbreak();
  }
  CgCompassSystem::UpdatePlayerOrientation(CgCompassSystem::ms_compassSystemArray[v10], &LocalClientGlobals->predictedPlayerState);
  CG_CalloutMarkerPing_Predicted_Update((LocalClientNum_t)v10);
  FX_Update3((LocalClientNum_t)v10);
  Sys_ProfEndNamedEvent();
  Sys_ProfBeginNamedEvent(0xFFFFFFFF, "aim assist screen");
  secure_uint32_3_t::secureInt32_3_Get(&LocalClientGlobals->aimAssistEyeOrigin, &outData);
  secure_uint32_3_t::secureInt32_3_Get(&LocalClientGlobals->aimAssistViewOrigin, &v100);
  AimAssist_UpdateScreenTargets((LocalClientNum_t)v10, (const vec3_t *)&outData, (const vec3_t *)&v100, &LocalClientGlobals->aimAssistViewAngles, LocalClientGlobals->refdef.view.fov.tanHalfFovX, LocalClientGlobals->refdef.view.fov.tanHalfFovY);
  if ( Com_GameMode_SupportsFeature(WEAPON_SCOPE_TOGGLE_ON|WEAPON_FIRING|0x80) )
  {
    ShouldClientPause = Com_MP_GetShouldClientPause();
    R_Cinematic_SetPaused((CinematicEnum)ShouldClientPause, 0);
  }
  Sys_ProfEndNamedEvent();
  CG_CreateFx_UpdateCursor((LocalClientNum_t)v10);
  CollAvoid_UpdateAvoidTargets((LocalClientNum_t)v10);
  CG_ViewMP_UpdateSceneDepthOfField((const LocalClientNum_t)v10);
  CG_View_UpdateShellShock((const LocalClientNum_t)v10);
  ViewSystem->CalcRadialMotionBlur(ViewSystem);
  CG_View_UpdateSceneLensProfile((const LocalClientNum_t)v10);
  CG_View_UpdateWaterSheetingFX((const LocalClientNum_t)v10);
  CG_View_CalcVignette((const LocalClientNum_t)v10);
  CG_ViewMP_ValidateWeaponSelect((const LocalClientNum_t)v10, LocalClientGlobals);
  CG_ViewMP_UpdateStreaming((const LocalClientNum_t)v10, LocalClientGlobals);
  CG_SND_Update((const LocalClientNum_t)v10);
  CG_DrawMP_DrawActive((const LocalClientNum_t)v10, drawType);
  AimTargetMP_FinishProcessingEntities((const LocalClientNum_t)v10);
  CG_PlayersMP_WaitUpdateClientWeaponVisibility((const LocalClientNum_t)v10);
  CG_GameInterface_ViewMP_DrawActiveFrame((const LocalClientNum_t)v10);
  CgStatic::ClearActiveStatics((const LocalClientNum_t)v10);
  LocalClientGlobals->playerTeleported = 0;
  v82 = (__int64)v99;
  LocalClientGlobals->lastMantleflags = v99->mantleState.flags;
  LocalClientGlobals->prevWeaponFlags = *(GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64> *)(v82 + 1832);
  GamerProfile_CheckBBPrintInitialConfig((const LocalClientNum_t)v10);
  CL_Input_EndFrame((LocalClientNum_t)v10);
  Profile2_End(30);
  memset(&v100, 0, sizeof(v100));
  memset(&outData, 0, sizeof(outData));
  memset(&position, 0, sizeof(position));
  return 1i64;
}

/*
==============
CG_ViewMP_FixedDeathCameraThirdPersonUpdate
==============
*/
void CG_ViewMP_FixedDeathCameraThirdPersonUpdate(const LocalClientNum_t localClientNum, const vec3_t *corpsePos, const int lerpTimeMs)
{
  CgGlobalsMP *LocalClientGlobals; 
  CgGlobalsMP *v6; 
  bool v7; 
  float v8; 
  float v9; 
  float v10; 
  float v11; 
  double v12; 
  float v13; 
  vec4_t out; 
  vec4_t quat; 
  vec4_t result; 
  tmat33_t<vec3_t> axis; 

  LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals(localClientNum);
  v6 = LocalClientGlobals;
  v7 = !LocalClientGlobals->m_fixedDeathCameraWasActive;
  LocalClientGlobals->m_fixedDeathCameraIsActive = 1;
  if ( v7 )
  {
    LocalClientGlobals->m_fixedDeathCameraActivationTime = LocalClientGlobals->time;
    LocalClientGlobals->m_fixedDeathCameraInitialAngles.v[0] = LocalClientGlobals->m_fixedDeathCameraPrevAngles.v[0];
    LocalClientGlobals->m_fixedDeathCameraInitialAngles.v[1] = LocalClientGlobals->m_fixedDeathCameraPrevAngles.v[1];
    LocalClientGlobals->m_fixedDeathCameraInitialAngles.v[2] = LocalClientGlobals->m_fixedDeathCameraPrevAngles.v[2];
  }
  v8 = corpsePos->v[1] - LocalClientGlobals->m_fixedDeathCameraPos.v[1];
  v9 = corpsePos->v[2] - LocalClientGlobals->m_fixedDeathCameraPos.v[2];
  if ( (float)((float)((float)(v8 * v8) + (float)((float)(corpsePos->v[0] - LocalClientGlobals->m_fixedDeathCameraPos.v[0]) * (float)(corpsePos->v[0] - LocalClientGlobals->m_fixedDeathCameraPos.v[0]))) + (float)(v9 * v9)) > 0.001 )
  {
    LookAtAxisAndDistance(&LocalClientGlobals->m_fixedDeathCameraPos, corpsePos, &axis);
    v10 = FLOAT_1_0;
    if ( lerpTimeMs > 0 )
    {
      v11 = _mm_cvtepi32_ps((__m128i)(unsigned int)(v6->time - v6->m_fixedDeathCameraActivationTime)).m128_f32[0] / _mm_cvtepi32_ps((__m128i)(unsigned int)lerpTimeMs).m128_f32[0];
      v12 = I_fclamp(v11, 0.0, 1.0);
      v13 = (float)((float)((float)((float)(*(float *)&v12 * 6.0) - 15.0) * *(float *)&v12) + 10.0) * (float)((float)(v11 * v11) * v11);
      I_fclamp(v13, 0.0, 1.0);
      v10 = v13;
    }
    if ( v10 < 1.0 )
    {
      AnglesToQuat(&v6->m_fixedDeathCameraInitialAngles, &quat);
      AxisToQuat(&axis, &out);
      QuatSlerp(&quat, &out, v10, &result);
      QuatToAxis(&result, &v6->refdef.view.axis);
    }
    else
    {
      MatrixCopy33(&axis, &v6->refdef.view.axis);
    }
    AxisToAngles(&v6->refdef.view.axis, &v6->refdefViewAngles);
  }
  else
  {
    LocalClientGlobals->refdefViewAngles.v[0] = LocalClientGlobals->m_fixedDeathCameraPrevAngles.v[0];
    LocalClientGlobals->refdefViewAngles.v[1] = LocalClientGlobals->m_fixedDeathCameraPrevAngles.v[1];
    LocalClientGlobals->refdefViewAngles.v[2] = LocalClientGlobals->m_fixedDeathCameraPrevAngles.v[2];
    AnglesToAxis(&LocalClientGlobals->refdefViewAngles, &LocalClientGlobals->refdef.view.axis);
  }
  RefdefView_SetOrg(&v6->refdef.view, &v6->m_fixedDeathCameraPos);
}

/*
==============
CG_ViewMP_GetCorpseViewPosition
==============
*/
char CG_ViewMP_GetCorpseViewPosition(const LocalClientNum_t localClientNum, vec3_t *outViewOrigin, bool useTag)
{
  cg_t *LocalClientGlobals; 
  cg_t *v7; 
  centity_t *Entity; 
  const cpose_t *p_pose; 
  const DObj *ClientDObj; 
  double Float_Internal_DebugName; 
  __int64 v13; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  v7 = LocalClientGlobals;
  if ( LocalClientGlobals->predictedPlayerState.pm_type < 7 || LocalClientGlobals->predictedPlayerState.corpseIndex == 15 )
    return 0;
  if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 130, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
    __debugbreak();
  if ( v7->predictedPlayerState.corpseIndex >= ComCharacterLimits::ms_gameData.m_clientCorpseCount )
  {
    if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 130, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
      __debugbreak();
    LODWORD(v13) = v7->predictedPlayerState.corpseIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_view_mp.cpp", 363, ASSERT_TYPE_ASSERT, "(unsigned)( cgameGlob->predictedPlayerState.corpseIndex ) < (unsigned)( ComCharacterLimits::GetClientCorpseMaxCount() )", "cgameGlob->predictedPlayerState.corpseIndex doesn't index ComCharacterLimits::GetClientCorpseMaxCount()\n\t%i not in [0, %i)", v13, ComCharacterLimits::ms_gameData.m_clientCorpseCount) )
      __debugbreak();
  }
  if ( v7->predictedPlayerState.corpseIndex >= ComCharacterLimits::GetClientCorpseMaxCount() )
    return 0;
  if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 152, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
    __debugbreak();
  Entity = CG_GetEntity(localClientNum, ComCharacterLimits::ms_gameData.m_characterCount + v7->predictedPlayerState.corpseIndex);
  p_pose = &Entity->pose;
  if ( (Entity->flags & 1) == 0 )
    return 0;
  if ( useTag )
  {
    ClientDObj = Com_GetClientDObj(Entity->nextState.number, localClientNum);
    if ( ClientDObj )
      CG_DObjGetWorldTagPos(p_pose, ClientDObj, scr_const.j_mainroot, outViewOrigin);
  }
  else
  {
    CG_GetPoseOrigin(&Entity->pose, outViewOrigin);
  }
  Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_cg_thirdPersonCorpseUpOffset, "cg_thirdPersonCorpseUpOffset");
  outViewOrigin->v[0] = (float)(*(float *)&Float_Internal_DebugName * 0.0) + outViewOrigin->v[0];
  outViewOrigin->v[1] = (float)(*(float *)&Float_Internal_DebugName * 0.0) + outViewOrigin->v[1];
  outViewOrigin->v[2] = (float)(*(float *)&Float_Internal_DebugName * 1.0) + outViewOrigin->v[2];
  return 1;
}

/*
==============
CG_ViewMP_GetTransientsCommonMPPriorityFlagsForLocalClient
==============
*/
__int64 CG_ViewMP_GetTransientsCommonMPPriorityFlagsForLocalClient(const LocalClientNum_t localClientNum)
{
  const dvar_t *v1; 
  int integer; 
  const dvar_t *v4; 
  int v5; 
  const dvar_t *v6; 
  int v7; 
  unsigned int v8; 
  const vec3_t *ClientVelocity; 
  const dvar_t *v10; 
  float v11; 

  v1 = DVARINT_party_teamCount;
  if ( !DVARINT_party_teamCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "party_teamCount") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  integer = v1->current.integer;
  if ( integer < 2 )
    goto LABEL_13;
  v4 = DVARINT_party_maxplayers;
  if ( !DVARINT_party_maxplayers && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "party_maxplayers") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  v5 = v4->current.integer;
  v6 = DCONST_DVARINT_cg_streamingMaxTeamSizeForBoostedTeammatePrioritization;
  v7 = v5 / integer;
  if ( !DCONST_DVARINT_cg_streamingMaxTeamSizeForBoostedTeammatePrioritization && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_streamingMaxTeamSizeForBoostedTeammatePrioritization") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  if ( v7 > v6->current.integer )
LABEL_13:
    v8 = 0;
  else
    v8 = 1;
  ClientVelocity = CL_StreamViews_GetClientVelocity(localClientNum);
  v10 = DCONST_DVARFLT_cg_streamingMinVelocityDeprioritizeCommonMPTransients;
  v11 = fsqrt((float)((float)(ClientVelocity->v[1] * ClientVelocity->v[1]) + (float)(ClientVelocity->v[0] * ClientVelocity->v[0])) + (float)(ClientVelocity->v[2] * ClientVelocity->v[2]));
  if ( !DCONST_DVARFLT_cg_streamingMinVelocityDeprioritizeCommonMPTransients && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_streamingMinVelocityDeprioritizeCommonMPTransients") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v10);
  if ( v11 < v10->current.value )
  {
    if ( CL_StreamViews_GetNumberOfManualViewsSet(localClientNum) > 1 )
      v8 |= 6u;
  }
  else
  {
    v8 |= 2u;
  }
  return v8;
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
void CG_ViewMP_LerpKillCamView(const LocalClientNum_t localClientNum)
{
  cg_t *LocalClientGlobals; 
  int killCamLerpEndTime; 
  float v4; 
  int killCamEntity; 
  float v6; 
  float v7; 
  float v8; 
  centity_t *Entity; 
  float v10; 
  float v11; 
  float v12; 
  float v13; 
  float v14; 
  vec3_t outOrg; 
  __int64 v20; 
  vec3_t end; 
  vec3_t outOrigin; 
  trace_t results; 

  v20 = -2i64;
  Sys_ProfBeginNamedEvent(0xFFFF6347, "CG_ViewMP_LerpKillCamView");
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  RefdefView_GetOrg(&LocalClientGlobals->refdef.view, &outOrg);
  if ( LocalClientGlobals->inKillCam )
  {
    killCamLerpEndTime = LocalClientGlobals->killCamLerpEndTime;
    if ( killCamLerpEndTime > LocalClientGlobals->time )
    {
      if ( killCamLerpEndTime <= LocalClientGlobals->oldTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_view_mp.cpp", 280, ASSERT_TYPE_ASSERT, "( cgameGlob->killCamLerpEndTime ) > ( cgameGlob->oldTime )", "%s > %s\n\t%i, %i", "cgameGlob->killCamLerpEndTime", "cgameGlob->oldTime", LocalClientGlobals->killCamLerpEndTime, LocalClientGlobals->oldTime) )
        __debugbreak();
      v4 = (float)LocalClientGlobals->frametime / (float)(LocalClientGlobals->killCamLerpEndTime - LocalClientGlobals->oldTime);
      killCamEntity = LocalClientGlobals->killCamEntity;
      v6 = 0.0;
      v7 = 0.0;
      v8 = 0.0;
      if ( killCamEntity != 2047 && LocalClientGlobals->killCamFirstFrameRan )
      {
        Entity = CG_GetEntity(localClientNum, killCamEntity);
        v6 = 0.0;
        v7 = 0.0;
        v8 = 0.0;
        if ( (Entity->flags & 1) != 0 && LocalClientGlobals->frametime > 0 )
        {
          CG_GetPoseOrigin(&Entity->pose, &outOrigin);
          v10 = 1.0 / (float)LocalClientGlobals->frametime;
          v6 = v10 * (float)(outOrigin.v[0] - LocalClientGlobals->killCamPrevBombOrigin.v[0]);
          v7 = v10 * (float)(outOrigin.v[1] - LocalClientGlobals->killCamPrevBombOrigin.v[1]);
          v8 = v10 * (float)(outOrigin.v[2] - LocalClientGlobals->killCamPrevBombOrigin.v[2]);
          memset(&outOrigin, 0, sizeof(outOrigin));
        }
      }
      v11 = (float)(LocalClientGlobals->killCamLerpEndTime - LocalClientGlobals->time);
      end.v[0] = (float)(v11 * v6) + outOrg.v[0];
      end.v[1] = (float)(v11 * v7) + outOrg.v[1];
      end.v[2] = (float)(v11 * v8) + outOrg.v[2];
      PhysicsQuery_LegacyTrace((Physics_WorldId)(3 * localClientNum + 2), &results, &outOrg, &end, &KILLCAM_BOUNDS_0, LocalClientGlobals->predictedPlayerState.clientNum, 0, 8390785, 0, NULL, All);
      if ( results.startsolid )
      {
        end = outOrg;
        v12 = outOrg.v[2];
        LODWORD(v13) = _mm_shuffle_ps((__m128)*(unsigned __int64 *)outOrg.v, (__m128)*(unsigned __int64 *)outOrg.v, 85).m128_u32[0];
        v14 = end.v[0];
      }
      else
      {
        v14 = (float)((float)(end.v[0] - outOrg.v[0]) * results.fraction) + outOrg.v[0];
        end.v[0] = v14;
        v13 = (float)((float)(end.v[1] - outOrg.v[1]) * results.fraction) + outOrg.v[1];
        end.v[1] = v13;
        v12 = (float)((float)(end.v[2] - outOrg.v[2]) * results.fraction) + outOrg.v[2];
        end.v[2] = v12;
      }
      outOrg.v[0] = (float)((float)(v14 - LocalClientGlobals->killCamOldViewOrg.v[0]) * v4) + LocalClientGlobals->killCamOldViewOrg.v[0];
      outOrg.v[1] = (float)((float)(v13 - LocalClientGlobals->killCamOldViewOrg.v[1]) * v4) + LocalClientGlobals->killCamOldViewOrg.v[1];
      outOrg.v[2] = (float)((float)(v12 - LocalClientGlobals->killCamOldViewOrg.v[2]) * v4) + LocalClientGlobals->killCamOldViewOrg.v[2];
      _XMM7 = 0i64;
      __asm { vroundss xmm0, xmm7, xmm1, 1 }
      LocalClientGlobals->refdefViewAngles.v[0] = (float)((float)((float)((float)((float)(LocalClientGlobals->refdefViewAngles.v[0] - LocalClientGlobals->killCamOldViewAngles.v[0]) * 0.0027777778) - *(float *)&_XMM0) * 360.0) * v4) + LocalClientGlobals->killCamOldViewAngles.v[0];
      __asm { vroundss xmm3, xmm7, xmm2, 1 }
      LocalClientGlobals->refdefViewAngles.v[1] = (float)((float)((float)((float)((float)(LocalClientGlobals->refdefViewAngles.v[1] - LocalClientGlobals->killCamOldViewAngles.v[1]) * 0.0027777778) - *(float *)&_XMM3) * 360.0) * v4) + LocalClientGlobals->killCamOldViewAngles.v[1];
      __asm { vroundss xmm3, xmm7, xmm2, 1 }
      LocalClientGlobals->refdefViewAngles.v[2] = (float)((float)((float)((float)((float)(LocalClientGlobals->refdefViewAngles.v[2] - LocalClientGlobals->killCamOldViewAngles.v[2]) * 0.0027777778) - *(float *)&_XMM3) * 360.0) * v4) + LocalClientGlobals->killCamOldViewAngles.v[2];
      AnglesToAxis(&LocalClientGlobals->refdefViewAngles, &LocalClientGlobals->refdef.view.axis);
      if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_STILL_LAND|WEAPON_FIRING) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_view_mp.cpp", 315, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_THIRD_PERSON ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_THIRD_PERSON )") )
        __debugbreak();
      LocalClientGlobals->renderingThirdPerson = 1;
    }
    if ( LocalClientGlobals->killCamEntityType )
    {
      CG_KillCam_GetKillCamEntityOrgAngles(localClientNum, &LocalClientGlobals->killCamPrevBombOrigin, &outOrigin);
      if ( ((LODWORD(LocalClientGlobals->killCamPrevBombOrigin.v[0]) & 0x7F800000) == 2139095040 || (LODWORD(LocalClientGlobals->killCamPrevBombOrigin.v[1]) & 0x7F800000) == 2139095040 || (LODWORD(LocalClientGlobals->killCamPrevBombOrigin.v[2]) & 0x7F800000) == 2139095040) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_view_mp.cpp", 324, ASSERT_TYPE_SANITY, "( !IS_NAN( ( cgameGlob->killCamPrevBombOrigin )[0] ) && !IS_NAN( ( cgameGlob->killCamPrevBombOrigin )[1] ) && !IS_NAN( ( cgameGlob->killCamPrevBombOrigin )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( cgameGlob->killCamPrevBombOrigin )[0] ) && !IS_NAN( ( cgameGlob->killCamPrevBombOrigin )[1] ) && !IS_NAN( ( cgameGlob->killCamPrevBombOrigin )[2] )") )
        __debugbreak();
      LocalClientGlobals->killCamFirstFrameRan = 1;
    }
  }
  LocalClientGlobals->killCamOldViewAngles.v[0] = LocalClientGlobals->refdefViewAngles.v[0];
  LocalClientGlobals->killCamOldViewAngles.v[1] = LocalClientGlobals->refdefViewAngles.v[1];
  LocalClientGlobals->killCamOldViewAngles.v[2] = LocalClientGlobals->refdefViewAngles.v[2];
  LocalClientGlobals->killCamOldViewOrg = outOrg;
  RefdefView_SetOrg(&LocalClientGlobals->refdef.view, &outOrg);
  memset(&outOrg, 0, sizeof(outOrg));
  Sys_ProfEndNamedEvent();
}

/*
==============
CG_ViewMP_NoKickReturn
==============
*/
bool CG_ViewMP_NoKickReturn(const LocalClientNum_t localClientNum, const playerState_s *ps)
{
  __int64 v2; 
  CgWeaponMap *v4; 
  const Weapon *Weapon; 
  GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64> *p_weapFlags; 
  const Weapon *v7; 
  __int64 weaponIdx; 
  WeaponCompleteDef *v9; 
  __int64 v11; 

  v2 = localClientNum;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_view_mp.cpp", 2039, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !CgWeaponMap::ms_instance[v2] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
    __debugbreak();
  v4 = CgWeaponMap::ms_instance[v2];
  if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 885, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 886, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  Weapon = BgWeaponMap::GetWeapon(v4, ps->weapCommon.weaponHandle);
  p_weapFlags = &ps->weapCommon.weapFlags;
  v7 = Weapon;
  if ( !GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(p_weapFlags, ACTIVE, 0x22u) && !GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(p_weapFlags, ACTIVE, 0x11u) )
    GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(p_weapFlags, ACTIVE, 0x1Bu);
  weaponIdx = v7->weaponIdx;
  if ( (unsigned int)weaponIdx > bg_lastParsedWeaponIndex )
  {
    LODWORD(v11) = v7->weaponIdx;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1218, ASSERT_TYPE_ASSERT, "( weaponIndex ) <= ( bg_lastParsedWeaponIndex )", "weaponIndex not in [0, bg_lastParsedWeaponIndex]\n\t%u not in [0, %u]", v11, bg_lastParsedWeaponIndex) )
      __debugbreak();
  }
  if ( !bg_weaponCompleteDefs[weaponIdx] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1219, ASSERT_TYPE_ASSERT, "(bg_weaponCompleteDefs[weaponIndex])", (const char *)&queryFormat, "bg_weaponCompleteDefs[weaponIndex]") )
    __debugbreak();
  v9 = bg_weaponCompleteDefs[weaponIdx];
  return v9->fAdsViewKickCenterSpeed == 0.0 && v9->fHipViewKickCenterSpeed == 0.0;
}

/*
==============
CG_ViewMP_OffsetChaseCamView
==============
*/
void CG_ViewMP_OffsetChaseCamView(LocalClientNum_t localClientNum)
{
  const dvar_t *v2; 
  int integer; 
  const dvar_t *v4; 
  float value; 
  const dvar_t *v6; 
  int v7; 
  cg_t *LocalClientGlobals; 
  ClActiveClientMP *ClientMP; 
  float v10; 
  float v11; 
  float v16; 
  __int128 v17; 
  float v18; 
  vec3_t outOrg; 
  vec3_t clViewangles; 
  vec3_t angles; 
  __int64 v25; 
  vec3_t end; 
  vec3_t forward; 
  vec3_t up; 
  vec3_t right; 

  v25 = -2i64;
  v2 = DCONST_DVARINT_cg_thirdPersonMode;
  if ( !DCONST_DVARINT_cg_thirdPersonMode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_thirdPersonMode") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  integer = v2->current.integer;
  v4 = DCONST_DVARFLT_cg_thirdPersonAngle;
  if ( !DCONST_DVARFLT_cg_thirdPersonAngle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_thirdPersonAngle") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  value = v4->current.value;
  v6 = DCONST_DVARFLT_cg_thirdPersonRange;
  if ( !DCONST_DVARFLT_cg_thirdPersonRange && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_thirdPersonRange") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  v7 = v6->current.integer;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( LocalClientGlobals == (cg_t *)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2275, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&LocalClientGlobals->predictedPlayerState.otherFlags, GameModeFlagValues::ms_mpValue, 0x21u) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_view_mp.cpp", 462, ASSERT_TYPE_ASSERT, "(BG_IsSpectating( &cgameGlob->predictedPlayerState ))", (const char *)&queryFormat, "BG_IsSpectating( &cgameGlob->predictedPlayerState )") )
    __debugbreak();
  ClientMP = ClActiveClientMP::GetClientMP(localClientNum);
  ClActiveClient_GetCLViewangles(ClientMP, &clViewangles);
  ClActiveClient_GetCLViewangles(ClientMP, &angles);
  if ( integer == 1 )
  {
    v10 = angles.v[1] + LocalClientGlobals->refdefViewAngles.v[1];
    angles.v[1] = v10;
    v11 = clViewangles.v[1] + LocalClientGlobals->refdefViewAngles.v[1];
  }
  else
  {
    v10 = angles.v[1];
    v11 = clViewangles.v[1];
  }
  _XMM6 = 0i64;
  __asm { vroundss xmm0, xmm6, xmm1, 1 }
  clViewangles.v[1] = (float)((float)(v11 * 0.0027777778) - *(float *)&_XMM0) * 360.0;
  __asm { vroundss xmm3, xmm6, xmm1, 1 }
  angles.v[1] = (float)((float)(v10 * 0.0027777778) - *(float *)&_XMM3) * 360.0;
  AngleVectors(&clViewangles, &forward, NULL, NULL);
  RefdefView_GetOrg(&LocalClientGlobals->refdef.view, &outOrg);
  _XMM9 = LODWORD(outOrg.v[0]);
  v16 = (float)(512.0 * forward.v[0]) + outOrg.v[0];
  v17 = LODWORD(FLOAT_512_0);
  v18 = outOrg.v[1];
  *(float *)&v17 = (float)(512.0 * forward.v[1]) + outOrg.v[1];
  __asm { vunpcklps xmm0, xmm9, xmm7 }
  *(double *)outOrg.v = *(double *)&_XMM0;
  *(double *)end.v = *(double *)&_XMM0;
  end.v[2] = outOrg.v[2];
  *(float *)&v17 = fsqrt((float)((float)(*(float *)&v17 - v18) * (float)(*(float *)&v17 - v18)) + (float)((float)(v16 - *(float *)&_XMM9) * (float)(v16 - *(float *)&_XMM9)));
  _XMM3 = v17;
  __asm { vmaxss  xmm1, xmm3, cs:__real@3f800000; X }
  clViewangles.v[0] = atan2f_0((float)((float)(512.0 * forward.v[2]) + outOrg.v[2]) - outOrg.v[2], *(float *)&_XMM1) * -57.295776;
  clViewangles.v[1] = clViewangles.v[1] - value;
  AngleVectors(&clViewangles, &forward, &right, &up);
  end.v[0] = (float)(COERCE_FLOAT(v7 ^ _xmm) * forward.v[0]) + end.v[0];
  end.v[1] = (float)(COERCE_FLOAT(v7 ^ _xmm) * forward.v[1]) + end.v[1];
  end.v[2] = (float)(COERCE_FLOAT(v7 ^ _xmm) * forward.v[2]) + end.v[2];
  CG_View_ThirdPersonViewTrace(localClientNum, &LocalClientGlobals->predictedPlayerState, &outOrg, &end, 33636369, 15.0, &outOrg);
  RefdefView_SetOrg(&LocalClientGlobals->refdef.view, &outOrg);
  LocalClientGlobals->refdefViewAngles = angles;
  AnglesToAxis(&angles, &LocalClientGlobals->refdef.view.axis);
  memset(&outOrg, 0, sizeof(outOrg));
  memset(&clViewangles, 0, sizeof(clViewangles));
  memset(&angles, 0, sizeof(angles));
}

/*
==============
CG_ViewMP_OffsetThirdPersonView
==============
*/
void CG_ViewMP_OffsetThirdPersonView(const LocalClientNum_t localClientNum)
{
  CgGlobalsMP *LocalClientGlobals; 
  CgHandler *Handler; 
  const dvar_t *v4; 
  float value; 
  int pm_type; 
  bool v7; 
  bool v8; 
  const vec4_t *v9; 
  double Float_Internal_DebugName; 
  float v11; 
  double v12; 
  float v13; 
  BOOL Bool_Internal_DebugName; 
  BOOL v15; 
  double v16; 
  float v17; 
  float v18; 
  float v23; 
  float v24; 
  __int128 v25; 
  float v30; 
  float v34; 
  double v35; 
  int v36; 
  bool v37; 
  int entity; 
  float v39; 
  double v40; 
  __int128 v41; 
  const char *v44; 
  const dvar_t *v45; 
  int Int_Internal_DebugName; 
  const dvar_t *v47; 
  vec3_t outOrg; 
  _BOOL8 v49; 
  vec3_t bodyReferencePoint; 
  __int64 v51; 
  vec3_t end; 
  vec3_t v53; 
  vec3_t forward; 
  vec3_t idealLocation; 
  vec3_t angles; 
  vec3_t center; 
  vec3_t right; 
  vec3_t up; 
  WorldUpReferenceFrame v60; 
  trace_t results; 

  v51 = -2i64;
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_STILL_LAND|WEAPON_FIRING) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_view_mp.cpp", 710, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_THIRD_PERSON ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_THIRD_PERSON )") )
    __debugbreak();
  LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals(localClientNum);
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_view_mp.cpp", 713, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  Handler = CgHandler::getHandler(localClientNum);
  WorldUpReferenceFrame::WorldUpReferenceFrame(&v60, &LocalClientGlobals->predictedPlayerState, Handler);
  if ( BG_IsTurretActive(&LocalClientGlobals->predictedPlayerState) )
  {
    v4 = DCONST_DVARFLT_thirdPersonViewTurretHeight;
    if ( !DCONST_DVARFLT_thirdPersonViewTurretHeight && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "thirdPersonViewTurretHeight") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v4);
    value = v4->current.value;
  }
  else if ( LocalClientGlobals->predictedPlayerState.vehicleState.entity == 2047 )
  {
    if ( LocalClientGlobals->m_isMLGSpectator )
      value = LocalClientGlobals->predictedPlayerState.viewHeightCurrent + 15.0;
    else
      value = LocalClientGlobals->predictedPlayerState.viewHeightCurrent;
  }
  else
  {
    value = FLOAT_20_0;
  }
  RefdefView_GetOrg(&LocalClientGlobals->refdef.view, &outOrg);
  WorldUpReferenceFrame::AddUpContribution(&v60, value, &outOrg);
  RefdefView_SetOrg(&LocalClientGlobals->refdef.view, &outOrg);
  if ( CG_Camera_DeathCam_Update(localClientNum, &LocalClientGlobals->refdef.view) )
    goto LABEL_79;
  pm_type = LocalClientGlobals->predictedPlayerState.pm_type;
  LOBYTE(v49) = pm_type >= 7;
  v7 = pm_type >= 7 && LocalClientGlobals->m_fixedDeathCameraClientForced;
  v8 = pm_type >= 7 && GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagStrict(&LocalClientGlobals->predictedPlayerState.otherFlags, FOG_SCALE|0x20);
  if ( CG_GameInterface_RunDeathCamOverride(localClientNum, v49) )
    goto LABEL_79;
  if ( !v7 )
  {
    if ( !v8 )
    {
      if ( !BG_IsSpectating(&LocalClientGlobals->predictedPlayerState) || LocalClientGlobals->predictedPlayerState.deltaTime )
      {
        bodyReferencePoint = outOrg;
        Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_cg_thirdPersonAngle, "cg_thirdPersonAngle");
        v11 = *(float *)&Float_Internal_DebugName;
        v12 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_cg_thirdPersonRange, "cg_thirdPersonRange");
        v13 = *(float *)&v12;
        Bool_Internal_DebugName = Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_cg_thirdPersonNoYaw, "cg_thirdPersonNoYaw");
        v15 = Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_cg_thirdPersonNoPitch, "cg_thirdPersonNoPitch");
        if ( BG_IsTurretActive(&LocalClientGlobals->predictedPlayerState) )
        {
          v16 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_thirdPersonViewTurretRangeAddition, "thirdPersonViewTurretRangeAddition");
          v13 = v13 + *(float *)&v16;
        }
        v17 = LocalClientGlobals->refdefViewAngles.v[1];
        v18 = LocalClientGlobals->refdefViewAngles.v[2];
        _XMM8 = 0i64;
        __asm { vroundss xmm0, xmm8, xmm1, 1 }
        v53.v[0] = (float)((float)(0.0027777778 * LocalClientGlobals->refdefViewAngles.v[0]) - *(float *)&_XMM0) * 360.0;
        __asm { vroundss xmm3, xmm8, xmm1, 1 }
        v53.v[1] = (float)((float)(0.0027777778 * v17) - *(float *)&_XMM3) * 360.0;
        __asm { vroundss xmm3, xmm8, xmm2, 1 }
        v53.v[2] = (float)((float)(0.0027777778 * v18) - *(float *)&_XMM3) * 360.0;
        angles.v[0] = LocalClientGlobals->refdefViewAngles.v[0];
        v23 = LocalClientGlobals->refdefViewAngles.v[1];
        v24 = LocalClientGlobals->refdefViewAngles.v[2];
        v25 = LODWORD(angles.v[0]);
        __asm { vroundss xmm3, xmm8, xmm1, 1 }
        *(float *)&v25 = (float)((float)(angles.v[0] * 0.0027777778) - *(float *)&_XMM3) * 360.0;
        _XMM10 = v25;
        angles.v[0] = *(float *)&v25;
        __asm { vroundss xmm3, xmm8, xmm1, 1 }
        angles.v[1] = (float)((float)(0.0027777778 * v23) - *(float *)&_XMM3) * 360.0;
        __asm { vroundss xmm3, xmm8, xmm2, 1 }
        angles.v[2] = (float)((float)(0.0027777778 * v24) - *(float *)&_XMM3) * 360.0;
        v30 = 0.0;
        if ( Bool_Internal_DebugName )
        {
          v53.v[1] = 0.0;
          angles.v[1] = 0.0;
        }
        if ( v15 )
        {
          v53.v[0] = 0.0;
          _XMM10 = 0i64;
          angles.v[0] = 0.0;
        }
        if ( LocalClientGlobals->predictedPlayerState.pm_type < 7 )
        {
          _XMM1 = LODWORD(FLOAT_45_0);
          __asm
          {
            vcmpltss xmm0, xmm1, xmm10
            vblendvps xmm0, xmm10, xmm1, xmm0
          }
          angles.v[0] = *(float *)&_XMM0;
        }
        else
        {
          angles.v[0] = 0.0;
          angles.v[2] = 0.0;
          angles.v[1] = (float)LocalClientGlobals->predictedPlayerState.stats[1];
          v53.v[0] = 0.0;
          v53.v[2] = 0.0;
          v53.v[1] = (float)LocalClientGlobals->predictedPlayerState.stats[1];
        }
        AngleVectors(&angles, &forward, NULL, NULL);
        center.v[0] = (float)(512.0 * forward.v[0]) + outOrg.v[0];
        center.v[1] = (float)(512.0 * forward.v[1]) + outOrg.v[1];
        center.v[2] = (float)(512.0 * forward.v[2]) + outOrg.v[2];
        if ( Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_cg_thirdPersonCamDebug, "cg_thirdPersonCamDebug") )
        {
          end.v[0] = (float)(4.0 * forward.v[0]) + outOrg.v[0];
          end.v[1] = (float)(4.0 * forward.v[1]) + outOrg.v[1];
          end.v[2] = (float)(4.0 * forward.v[2]) + outOrg.v[2];
          CG_DebugLine(&outOrg, &end, &colorYellow, 1, 600);
          CG_DebugSphere(&outOrg, 2.0, &colorYellow, 1, 600);
          CG_DebugSphere(&center, 2.0, &colorFacebookBlue, 0, 600);
        }
        idealLocation.v[0] = outOrg.v[0];
        idealLocation.v[1] = outOrg.v[1];
        idealLocation.v[2] = outOrg.v[2] + 10.0;
        v53.v[0] = 0.5 * v53.v[0];
        v53.v[1] = v53.v[1] - v11;
        AngleVectors(&v53, &forward, &right, &up);
        idealLocation.v[0] = (float)(COERCE_FLOAT(LODWORD(v13) ^ _xmm) * forward.v[0]) + idealLocation.v[0];
        idealLocation.v[1] = (float)(COERCE_FLOAT(LODWORD(v13) ^ _xmm) * forward.v[1]) + idealLocation.v[1];
        idealLocation.v[2] = (float)(COERCE_FLOAT(LODWORD(v13) ^ _xmm) * forward.v[2]) + idealLocation.v[2];
        if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_deathCameraFailsafe, "deathCameraFailsafe") && LocalClientGlobals->m_deathCameraFailsafeLock )
        {
          v34 = fsqrt((float)((float)((float)(bodyReferencePoint.v[1] - LocalClientGlobals->m_deathCameraFailsafePosition.v[1]) * (float)(bodyReferencePoint.v[1] - LocalClientGlobals->m_deathCameraFailsafePosition.v[1])) + (float)((float)(bodyReferencePoint.v[0] - LocalClientGlobals->m_deathCameraFailsafePosition.v[0]) * (float)(bodyReferencePoint.v[0] - LocalClientGlobals->m_deathCameraFailsafePosition.v[0]))) + (float)((float)(bodyReferencePoint.v[2] - LocalClientGlobals->m_deathCameraFailsafePosition.v[2]) * (float)(bodyReferencePoint.v[2] - LocalClientGlobals->m_deathCameraFailsafePosition.v[2])));
          v35 = Dvar_GetFloat_Internal_DebugName(DVARFLT_deathCameraFailsafeOffset, "deathCameraFailsafeOffset");
          if ( v34 >= *(float *)&v35 )
          {
            RefdefView_SetOrg(&LocalClientGlobals->refdef.view, &LocalClientGlobals->m_deathCameraFailsafePosition);
          }
          else
          {
            CG_ViewMP_SolveDeathCameraFailsafePosition(LocalClientGlobals, &forward, &right, &idealLocation, &bodyReferencePoint, &outOrg);
            RefdefView_SetOrg(&LocalClientGlobals->refdef.view, &outOrg);
            LocalClientGlobals->m_deathCameraFailsafePosition = outOrg;
          }
        }
        else
        {
          v36 = 33636369;
          if ( pm_type >= 7 )
            v36 = 8456721;
          v37 = CG_View_ThirdPersonViewTrace(localClientNum, &LocalClientGlobals->predictedPlayerState, &outOrg, &idealLocation, v36, 15.0, &outOrg);
          RefdefView_SetOrg(&LocalClientGlobals->refdef.view, &outOrg);
          if ( !Dvar_GetBool_Internal_DebugName(DVARBOOL_deathCameraFailsafe, "deathCameraFailsafe") || v37 )
          {
            if ( pm_type >= 7 )
            {
              entity = LocalClientGlobals->predictedPlayerState.vehicleState.entity;
              if ( entity == 2047 )
                entity = LocalClientGlobals->predictedPlayerState.clientNum;
              PhysicsQuery_LegacyTrace((Physics_WorldId)(3 * localClientNum + 2), &results, &LocalClientGlobals->m_fixedDeathCameraPos, &outOrg, &bounds_origin, entity, 0, 2065, 0, NULL, All);
              if ( Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_cg_thirdPersonCamDebug, "cg_thirdPersonCamDebug") )
                CG_DebugLine(&LocalClientGlobals->m_fixedDeathCameraPos, &outOrg, &colorGreen, 1, 600);
              if ( v37 )
                v30 = fsqrt((float)((float)((float)(outOrg.v[1] - bodyReferencePoint.v[1]) * (float)(outOrg.v[1] - bodyReferencePoint.v[1])) + (float)((float)(outOrg.v[0] - bodyReferencePoint.v[0]) * (float)(outOrg.v[0] - bodyReferencePoint.v[0]))) + (float)((float)(outOrg.v[2] - bodyReferencePoint.v[2]) * (float)(outOrg.v[2] - bodyReferencePoint.v[2])));
              v39 = LocalClientGlobals->m_deathCameraPrevDistance - v30;
              v40 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_cg_deathCamMaxCutThreshold, "cg_deathCamMaxCutThreshold");
              LocalClientGlobals->m_deathCameraPrevDistance = v30;
              if ( !v37 || v39 >= *(float *)&v40 || results.fraction < 1.0 )
              {
                if ( Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_cg_thirdPersonCamDebug, "cg_thirdPersonCamDebug") )
                {
                  end.v[0] = (float)((float)(outOrg.v[0] - LocalClientGlobals->m_fixedDeathCameraPos.v[0]) * results.fraction) + LocalClientGlobals->m_fixedDeathCameraPos.v[0];
                  end.v[1] = (float)((float)(outOrg.v[1] - LocalClientGlobals->m_fixedDeathCameraPos.v[1]) * results.fraction) + LocalClientGlobals->m_fixedDeathCameraPos.v[1];
                  end.v[2] = (float)((float)(outOrg.v[2] - LocalClientGlobals->m_fixedDeathCameraPos.v[2]) * results.fraction) + LocalClientGlobals->m_fixedDeathCameraPos.v[2];
                  CG_DebugSphere(&end, 6.0, &colorRed, 1, 600);
                }
                RefdefView_SetOrg(&LocalClientGlobals->refdef.view, &LocalClientGlobals->m_fixedDeathCameraPos);
                LocalClientGlobals->m_fixedDeathCameraClientForced = 1;
              }
            }
          }
          else
          {
            CG_ViewMP_SolveDeathCameraFailsafePosition(LocalClientGlobals, &forward, &right, &idealLocation, &bodyReferencePoint, &outOrg);
            RefdefView_SetOrg(&LocalClientGlobals->refdef.view, &outOrg);
            LocalClientGlobals->m_deathCameraFailsafePosition = outOrg;
            LocalClientGlobals->m_deathCameraFailsafeLock = 1;
          }
        }
        RefdefView_GetOrg(&LocalClientGlobals->refdef.view, &outOrg);
        v41 = LODWORD(center.v[0]);
        center.v[0] = center.v[0] - outOrg.v[0];
        center.v[1] = center.v[1] - outOrg.v[1];
        center.v[2] = center.v[2] - outOrg.v[2];
        *(float *)&v41 = fsqrt((float)(center.v[0] * center.v[0]) + (float)(center.v[1] * center.v[1]));
        _XMM3 = v41;
        __asm { vmaxss  xmm1, xmm3, xmm10; X }
        v53.v[0] = atan2f_0(center.v[2], *(float *)&_XMM1) * -57.295776;
        LocalClientGlobals->refdefViewAngles = v53;
        AnglesToAxis(&v53, &LocalClientGlobals->refdef.view.axis);
        if ( Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_cg_thirdPersonCamDebug, "cg_thirdPersonCamDebug") )
        {
          end.v[0] = (float)(4.0 * LocalClientGlobals->refdef.view.axis.m[0].v[0]) + outOrg.v[0];
          end.v[1] = (float)(4.0 * LocalClientGlobals->refdef.view.axis.m[0].v[1]) + outOrg.v[1];
          end.v[2] = (float)(4.0 * LocalClientGlobals->refdef.view.axis.m[0].v[2]) + outOrg.v[2];
          CG_DebugLine(&outOrg, &end, &colorGreen, 1, 600);
          CG_DebugSphere(&outOrg, 2.0, &colorGreen, 1, 600);
        }
        memset(&bodyReferencePoint, 0, sizeof(bodyReferencePoint));
      }
      else
      {
        CG_ViewMP_OffsetChaseCamView(localClientNum);
        if ( Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_cg_thirdPersonCamDebug, "cg_thirdPersonCamDebug") )
        {
          RefdefView_GetOrg(&LocalClientGlobals->refdef.view, &outOrg);
          end.v[0] = (float)(4.0 * LocalClientGlobals->refdef.view.axis.m[0].v[0]) + outOrg.v[0];
          end.v[1] = (float)(4.0 * LocalClientGlobals->refdef.view.axis.m[0].v[1]) + outOrg.v[1];
          end.v[2] = (float)(4.0 * LocalClientGlobals->refdef.view.axis.m[0].v[2]) + outOrg.v[2];
          CG_DebugLine(&outOrg, &end, &colorBlue, 1, 600);
          v9 = &colorBlue;
LABEL_78:
          CG_DebugSphere(&outOrg, 2.0, v9, 1, 600);
          goto LABEL_79;
        }
      }
      goto LABEL_79;
    }
    goto LABEL_72;
  }
  if ( v8 )
  {
LABEL_72:
    v44 = "cg_fixedDeathCamInterpTimeMs";
    v45 = DVARINT_cg_fixedDeathCamInterpTimeMs;
    goto LABEL_73;
  }
  v44 = "cg_fixedDeathCamTraceFailedInterpTimeMs";
  v45 = DVARINT_cg_fixedDeathCamTraceFailedInterpTimeMs;
LABEL_73:
  Int_Internal_DebugName = Dvar_GetInt_Internal_DebugName(v45, v44);
  CG_ViewMP_FixedDeathCameraThirdPersonUpdate(localClientNum, &outOrg, Int_Internal_DebugName);
  v47 = DCONST_DVARBOOL_cg_thirdPersonCamDebug;
  if ( !DCONST_DVARBOOL_cg_thirdPersonCamDebug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_thirdPersonCamDebug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v47);
  if ( v47->current.enabled )
  {
    AngleVectors(&LocalClientGlobals->refdefViewAngles, &forward, NULL, NULL);
    end.v[0] = (float)(4.0 * forward.v[0]) + outOrg.v[0];
    end.v[1] = (float)(4.0 * forward.v[1]) + outOrg.v[1];
    end.v[2] = (float)(4.0 * forward.v[2]) + outOrg.v[2];
    CG_DebugLine(&outOrg, &end, &colorCyan, 1, 600);
    v9 = &colorCyan;
    goto LABEL_78;
  }
LABEL_79:
  memset(&outOrg, 0, sizeof(outOrg));
}

/*
==============
CG_ViewMP_PrefetchPlayerCards
==============
*/
void CG_ViewMP_PrefetchPlayerCards(LocalClientNum_t localClientNum)
{
  const dvar_t *v2; 
  CgGlobalsMP *LocalClientGlobals; 
  unsigned int v4; 
  unsigned int maxClients; 
  const dvar_t *v6; 
  unsigned int unsignedInt; 
  unsigned int m_nextPrefetchPlayerCardClientIndex; 
  unsigned int v9; 
  const dvar_t *v10; 
  const char *v11; 
  __int128 v13; 
  float v17; 
  int v18; 
  bool v19; 
  bool v20; 
  bool v21; 
  __int64 v22; 
  __int64 v23; 
  const PartyData *GameParty; 
  const dvar_t *v25; 
  int CacheLocation; 
  __int16 v27; 
  __int16 v28; 
  CachedPlayerCard *v29; 
  unsigned int v30; 
  const GfxImage **image; 
  char *v32; 
  StreamMiniDistance v33; 
  const GfxImage *v34; 
  unsigned __int16 v35; 
  const GfxImage *BackgroundImageByRef; 
  __int16 v37[2]; 
  unsigned int v38; 
  int v39; 
  unsigned int v40; 
  unsigned int v41; 
  int v42; 
  CgStatic *LocalClientStatics; 
  XUID result; 
  CgGlobalsMP *v45; 
  __int64 v46; 
  unsigned int v47; 
  int out_patch; 
  int out_backing; 

  v46 = -2i64;
  v2 = DCONST_DVARBOOL_cg_prefetchPlayercards;
  if ( !DCONST_DVARBOOL_cg_prefetchPlayercards && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_prefetchPlayercards") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  if ( !v2->current.enabled )
    return;
  Sys_ProfBeginNamedEvent(0xFFFFFFFF, "CG_ViewMP_PrefetchPlayerCards");
  LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals(localClientNum);
  v45 = LocalClientGlobals;
  LocalClientStatics = CgStatic::GetLocalClientStatics(localClientNum);
  v4 = 0;
  v47 = 0;
  maxClients = cls.maxClients;
  v42 = cls.maxClients;
  v6 = DCONST_DVARINT_cg_prefetchPlayerCardsFrameCount;
  if ( !DCONST_DVARINT_cg_prefetchPlayerCardsFrameCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_prefetchPlayerCardsFrameCount") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  unsignedInt = maxClients;
  if ( v6->current.integer < (signed int)maxClients )
    unsignedInt = v6->current.unsignedInt;
  v40 = unsignedInt;
  m_nextPrefetchPlayerCardClientIndex = LocalClientGlobals->m_nextPrefetchPlayerCardClientIndex;
  v38 = m_nextPrefetchPlayerCardClientIndex;
  v9 = m_nextPrefetchPlayerCardClientIndex + maxClients;
  v41 = m_nextPrefetchPlayerCardClientIndex + maxClients;
  if ( maxClients <= 0x14 )
  {
    v10 = DCONST_DVARFLT_cg_imageHintDistancePlayerCards;
    if ( !DCONST_DVARFLT_cg_imageHintDistancePlayerCards )
    {
      v11 = "cg_imageHintDistancePlayerCards";
LABEL_15:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", v11) )
        __debugbreak();
    }
  }
  else
  {
    v10 = DCONST_DVARFLT_cg_imageHintDistancePlayerCardsLow;
    if ( !DCONST_DVARFLT_cg_imageHintDistancePlayerCardsLow )
    {
      v11 = "cg_imageHintDistancePlayerCardsLow";
      goto LABEL_15;
    }
  }
  Dvar_CheckFrontendServerThread(v10);
  _XMM0 = v10->current.unsignedInt;
  v13 = _XMM0;
  *(float *)&v13 = *(float *)&_XMM0 * *(float *)&_XMM0;
  *(float *)&out_patch = *(float *)&_XMM0 * *(float *)&_XMM0;
  if ( (COERCE_UNSIGNED_INT(*(float *)&_XMM0 * *(float *)&_XMM0) & 0x7F800000) == 2139095040 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_mini_distance.h", 51, ASSERT_TYPE_SANITY, "( !IS_NAN( distance ) )", (const char *)&queryFormat, "!IS_NAN( distance )") )
    __debugbreak();
  if ( *(float *)&v13 < 0.0 )
  {
    __asm { vxorpd  xmm0, xmm0, xmm0 }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_mini_distance.h", 52, ASSERT_TYPE_ASSERT, "( distance ) >= ( 0.f )", "%s >= %s\n\t%g, %g", "distance", "0.f", *(float *)&v13, *(double *)&_XMM0) )
      __debugbreak();
  }
  *(float *)&v13 = *(float *)&v13 * 0.40000001;
  _XMM0 = v13;
  __asm { vminss  xmm1, xmm0, cs:__real@3f800000 }
  v17 = *(float *)&_XMM1 * 255.0;
  v18 = (int)(float)(*(float *)&_XMM1 * 255.0);
  v39 = v18;
  v19 = (float)(*(float *)&_XMM1 * 255.0) >= 0.0 && v17 <= 16777216.0;
  v20 = v17 >= 0.0 && v17 <= 255.0;
  if ( (!v19 || !v20) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 437, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (IntegralType) 0x%jx == (FloatType) %f", "unsigned char __cdecl float_to_integral_cast<unsigned char,float>(float)", (unsigned __int8)v18, (float)(*(float *)&_XMM1 * 255.0)) )
    __debugbreak();
  if ( m_nextPrefetchPlayerCardClientIndex < v9 )
  {
    while ( 1 )
    {
      v21 = v4 == unsignedInt;
      if ( v4 >= unsignedInt )
        goto LABEL_73;
      v22 = m_nextPrefetchPlayerCardClientIndex % maxClients;
      v23 = ((__int64 (__fastcall *)(CgStatic *))LocalClientStatics->GetClientInfo)(LocalClientStatics);
      if ( !v23 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_view_mp.cpp", 1939, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
        __debugbreak();
      GameParty = Live_GetGameParty();
      if ( Party_IsMemberIndexDataAvailable(GameParty, v22) || *(_BYTE *)(v23 + 188) )
        break;
      v25 = DCONST_DVARBOOL_cl_devLoadPlayerCards;
      if ( !DCONST_DVARBOOL_cl_devLoadPlayerCards && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_devLoadPlayerCards") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v25);
      if ( v25->current.enabled )
      {
        PlayercardCache_GetRandomPatchAndBacking(v22, &out_patch, &out_backing);
LABEL_48:
        v27 = out_patch;
        if ( (out_patch < 0 || (unsigned int)out_patch > 0xFFFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,int>(int)", "unsigned", (unsigned __int16)out_patch, "signed", out_patch) )
          __debugbreak();
        v37[0] = v27;
        v28 = out_backing;
        if ( (out_backing < 0 || (unsigned int)out_backing > 0xFFFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,int>(int)", "unsigned", (unsigned __int16)out_backing, "signed", out_backing) )
          __debugbreak();
        v37[1] = v28;
        v29 = &LocalClientGlobals->m_cachedPlayerCard[v22];
        v30 = 0;
        image = LocalClientGlobals->m_cachedPlayerCard[v22].image;
        v32 = (char *)((char *)v37 - (char *)v29);
        v33.mValue = v39;
        do
        {
          v34 = *image;
          v35 = *(_WORD *)&v32[(_QWORD)v29];
          if ( !*image || v29->index[0] != v35 )
          {
            if ( v30 )
              BackgroundImageByRef = PlayerCards_GetBackgroundImageByRef(v35);
            else
              BackgroundImageByRef = PlayerCards_GetPatchImageByRef(v35);
            v34 = BackgroundImageByRef;
            if ( BackgroundImageByRef )
              Com_Printf(14, "CG_ViewMP_PrefetchPlayerCards: Image '%s' for player %d\n", BackgroundImageByRef->name, (unsigned int)v22);
            *image = v34;
            v29->index[0] = v35;
          }
          if ( v34 && (v34->flags & 0x40) != 0 )
            Stream_HintImageAtDistance(v34, v33);
          ++v30;
          ++image;
          v29 = (CachedPlayerCard *)((char *)v29 + 2);
        }
        while ( v30 < 2 );
        v4 = ++v47;
        m_nextPrefetchPlayerCardClientIndex = v38;
        unsignedInt = v40;
        LocalClientGlobals = v45;
        v9 = v41;
        goto LABEL_71;
      }
      v4 = v47;
LABEL_71:
      v38 = ++m_nextPrefetchPlayerCardClientIndex;
      maxClients = v42;
      if ( m_nextPrefetchPlayerCardClientIndex >= v9 )
        goto LABEL_72;
    }
    CacheLocation = PlayerCardData_GetCacheLocation();
    Party_GetXuid(&result, GameParty, v22);
    PlayercardCache_GetPlayercard_Patch_Backing(result, (const char *)(v23 + 4), CacheLocation, &out_patch, &out_backing);
    goto LABEL_48;
  }
LABEL_72:
  v21 = v4 == unsignedInt;
LABEL_73:
  if ( v21 )
    LocalClientGlobals->m_nextPrefetchPlayerCardClientIndex = m_nextPrefetchPlayerCardClientIndex % maxClients;
  else
    LocalClientGlobals->m_nextPrefetchPlayerCardClientIndex = 0;
  Sys_ProfEndNamedEvent();
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
  CgGlobalsMP *v2; 
  centity_t *m_brCircleEnt; 
  float v4; 
  const dvar_t *v5; 
  const dvar_t *v6; 
  const dvar_t *v7; 
  const dvar_t *v8; 
  const dvar_t *v9; 
  float v10; 
  float v11; 
  float v12; 
  const dvar_t *v13; 
  float v14; 
  const dvar_t *v15; 
  float v16; 
  float v17; 
  const dvar_t *v18; 
  float v19; 
  const dvar_t *v20; 
  float v21; 
  const dvar_t *v22; 
  const dvar_t *v23; 
  const dvar_t *v24; 
  const dvar_t *v25; 
  const dvar_t *v26; 
  const dvar_t *v27; 
  const dvar_t *v28; 
  const dvar_t *v29; 
  const dvar_t *v30; 
  const dvar_t *v31; 
  float value; 
  int m_brCircleStartTime; 
  unsigned int v34; 
  int v35; 
  double v36; 
  float v37; 
  vec3_t outOrigin; 

  LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals(localClientNum);
  v2 = LocalClientGlobals;
  m_brCircleEnt = LocalClientGlobals->m_brCircleEnt;
  if ( m_brCircleEnt && (m_brCircleEnt->flags & 1) != 0 )
  {
    CG_GetPoseOrigin(&m_brCircleEnt->pose, &outOrigin);
    v4 = outOrigin.v[1];
    v2->refdef.brCircle.position.v[0] = outOrigin.v[0];
    v2->refdef.brCircle.position.v[1] = v4;
    v2->refdef.brCircle.radius = v2->m_brCircleRadius;
    v5 = DCONST_DVARFLT_cg_brCircleFogHeight;
    if ( !DCONST_DVARFLT_cg_brCircleFogHeight && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_brCircleFogHeight") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v5);
    LODWORD(v2->refdef.brCircle.height) = v5->current.integer;
    v6 = DCONST_DVARFLT_cg_brCircleFogInset;
    if ( !DCONST_DVARFLT_cg_brCircleFogInset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_brCircleFogInset") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v6);
    LODWORD(v2->refdef.brCircle.fogInset) = v6->current.integer;
    v7 = DCONST_DVARFLT_cg_brCircleFogOuterColorDistance;
    if ( !DCONST_DVARFLT_cg_brCircleFogOuterColorDistance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_brCircleFogOuterColorDistance") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v7);
    LODWORD(v2->refdef.brCircle.blendDistance) = v7->current.integer;
    v8 = DCONST_DVARFLT_cg_brCircleSkyDistanceMultiplier;
    if ( !DCONST_DVARFLT_cg_brCircleSkyDistanceMultiplier && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_brCircleSkyDistanceMultiplier") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v8);
    LODWORD(v2->refdef.brCircle.skyDistanceMultiplier) = v8->current.integer;
    Dvar_GetVec3_Internal_DebugName(DVARVEC3_cg_brCircleVolumetricFogInnerColor, "cg_brCircleVolumetricFogInnerColor", &v2->refdef.brCircle.volumetricInnerColor);
    Dvar_GetVec3_Internal_DebugName(DVARVEC3_cg_brCircleVolumetricFogOuterColor, "cg_brCircleVolumetricFogOuterColor", &v2->refdef.brCircle.volumetricOuterColor);
    Dvar_GetVec3_Internal_DebugName(DVARVEC3_cg_brCircleDistanceFogInnerColor, "cg_brCircleDistanceFogInnerColor", &v2->refdef.brCircle.distanceInnerColor);
    Dvar_GetVec3_Internal_DebugName(DVARVEC3_cg_brCircleDistanceFogOuterColor, "cg_brCircleDistanceFogOuterColor", &v2->refdef.brCircle.distanceOuterColor);
    v9 = DVARVEC4_cg_brCirclePerceptualTint;
    if ( !DVARVEC4_cg_brCirclePerceptualTint && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 741, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_brCirclePerceptualTint") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v9);
    v10 = v9->current.vector.v[3];
    v11 = v9->current.vector.v[1];
    v12 = v9->current.vector.v[2];
    v2->refdef.brCircle.perceptualTint.v[0] = v10 * v9->current.value;
    v2->refdef.brCircle.perceptualTint.v[2] = v10 * v12;
    v2->refdef.brCircle.perceptualTint.v[1] = v10 * v11;
    v13 = DCONST_DVARVEC2_cg_brCircleVolumetricFogParams;
    if ( !DCONST_DVARVEC2_cg_brCircleVolumetricFogParams && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 727, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_brCircleVolumetricFogParams") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v13);
    v14 = v13->current.vector.v[1];
    v2->refdef.brCircle.volumetricDensity = v13->current.value;
    v2->refdef.brCircle.volumetricScale = v14;
    v15 = DCONST_DVARVEC3_cg_brCircleDistanceFogParams;
    if ( !DCONST_DVARVEC3_cg_brCircleDistanceFogParams && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 734, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_brCircleDistanceFogParams") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v15);
    v16 = v15->current.vector.v[1];
    v17 = v15->current.vector.v[2];
    v2->refdef.brCircle.distanceDensity = v15->current.value;
    v2->refdef.brCircle.distanceScale = v16;
    v2->refdef.brCircle.distanceHalfPlane = v17;
    v18 = DCONST_DVARVEC2_cg_brCircleHeightFalloff;
    if ( !DCONST_DVARVEC2_cg_brCircleHeightFalloff && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 727, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_brCircleHeightFalloff") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v18);
    v19 = v18->current.vector.v[1];
    v2->refdef.brCircle.distanceHeightFalloff = v18->current.value;
    v2->refdef.brCircle.volumetricHeightFalloff = v19;
    v20 = DCONST_DVARVEC2_cg_brCircleDistanceFogBlend;
    if ( !DCONST_DVARVEC2_cg_brCircleDistanceFogBlend && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 727, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_brCircleDistanceFogBlend") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v20);
    v21 = v20->current.vector.v[1];
    v2->refdef.brCircle.aFogColorBlend = v20->current.value;
    v2->refdef.brCircle.aFogDistanceBlend = v21;
    v22 = DCONST_DVARFLT_cg_brCircleDistanceHeightBlend;
    if ( !DCONST_DVARFLT_cg_brCircleDistanceHeightBlend && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_brCircleDistanceHeightBlend") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v22);
    LODWORD(v2->refdef.brCircle.distanceHeightBlend) = v22->current.integer;
    v23 = DCONST_DVARFLT_cg_brCircleDistanceHeightViewBlend;
    if ( !DCONST_DVARFLT_cg_brCircleDistanceHeightViewBlend && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_brCircleDistanceHeightViewBlend") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v23);
    LODWORD(v2->refdef.brCircle.distanceHeightViewBlend) = v23->current.integer;
    v24 = DCONST_DVARFLT_cg_brCircleDistanceHeightBlendStart;
    if ( !DCONST_DVARFLT_cg_brCircleDistanceHeightBlendStart && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_brCircleDistanceHeightBlendStart") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v24);
    LODWORD(v2->refdef.brCircle.distanceHeightBlendStart) = v24->current.integer;
    v25 = DCONST_DVARFLT_cg_brCircleFogDensityScale;
    if ( !DCONST_DVARFLT_cg_brCircleFogDensityScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_brCircleFogDensityScale") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v25);
    LODWORD(v2->refdef.brCircle.densityScale) = v25->current.integer;
    v26 = DCONST_DVARFLT_cg_brCircleFogDensityBias;
    if ( !DCONST_DVARFLT_cg_brCircleFogDensityBias && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_brCircleFogDensityBias") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v26);
    LODWORD(v2->refdef.brCircle.densityBias) = v26->current.integer;
    v27 = DCONST_DVARFLT_cg_brCircleFogDensityNoiseScale;
    if ( !DCONST_DVARFLT_cg_brCircleFogDensityNoiseScale && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_brCircleFogDensityNoiseScale") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v27);
    LODWORD(v2->refdef.brCircle.densityNoiseScale) = v27->current.integer;
    v28 = DCONST_DVARFLT_cg_brCircleFogDensityNoiseBias;
    if ( !DCONST_DVARFLT_cg_brCircleFogDensityNoiseBias && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_brCircleFogDensityNoiseBias") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v28);
    LODWORD(v2->refdef.brCircle.densityNoiseBias) = v28->current.integer;
    v29 = DCONST_DVARVEC2_cg_brCircleFogDensityTiling;
    if ( !DCONST_DVARVEC2_cg_brCircleFogDensityTiling && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 727, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_brCircleFogDensityTiling") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v29);
    LODWORD(v2->refdef.brCircle.densityTiling.v[0]) = v29->current.integer;
    v2->refdef.brCircle.densityTiling.v[1] = v29->current.vector.v[1];
    v30 = DCONST_DVARVEC2_cg_brCircleFogDensityScrollingSpeed;
    if ( !DCONST_DVARVEC2_cg_brCircleFogDensityScrollingSpeed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 727, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_brCircleFogDensityScrollingSpeed") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v30);
    LODWORD(v2->refdef.brCircle.densityScrollingSpeed.v[0]) = v30->current.integer;
    v2->refdef.brCircle.densityScrollingSpeed.v[1] = v30->current.vector.v[1];
    v31 = DCONST_DVARFLT_cg_brCircleFogBlendInTime;
    if ( !DCONST_DVARFLT_cg_brCircleFogBlendInTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_brCircleFogBlendInTime") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v31);
    value = v31->current.value;
    if ( value > 0.0 )
    {
      m_brCircleStartTime = v2->m_brCircleStartTime;
      if ( m_brCircleStartTime > 0 )
      {
        v35 = v2->predictedPlayerState.serverTime - m_brCircleStartTime;
        if ( v35 < 0 )
          v35 = 0;
        v34 = v35;
      }
      else
      {
        v34 = 0;
      }
      v36 = I_fclamp((float)(_mm_cvtepi32_ps((__m128i)v34).m128_f32[0] * 0.001) / value, 0.0, 1.0);
      *(float *)&v36 = powf_0(2.0, (float)(*(float *)&v36 - 1.0) * 10.0);
      v37 = *(float *)&v36 * v2->refdef.brCircle.distanceDensity;
      v2->refdef.brCircle.volumetricDensity = *(float *)&v36 * v2->refdef.brCircle.volumetricDensity;
      v2->refdef.brCircle.distanceDensity = v37;
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
char CG_ViewMP_SolveDeathCameraFailsafePosition(const CgGlobalsMP *cgameGlob, const vec3_t *forward, const vec3_t *right, const vec3_t *idealLocation, const vec3_t *bodyReferencePoint, vec3_t *outLocation)
{
  LocalClientNum_t localClientNum; 
  int *v10; 
  int v11; 
  unsigned int v12; 
  float v13; 
  float v14; 
  const dvar_t *v15; 
  float value; 
  float v17; 
  float v18; 
  float v19; 
  int skipEntity; 
  float v22; 
  vec3_t start; 
  tmat33_t<vec3_t> outAxis; 
  Bounds bounds; 
  trace_t results; 
  float v27; 
  int v28[2]; 
  char v29; 
  float v30; 
  float v31; 
  float v32; 
  char v33; 
  float v34; 
  float v35; 
  float v36; 
  char v37; 
  float v38; 
  float v39; 
  float v40; 
  char v41; 
  float v42; 
  float v43; 
  float v44; 
  char v45; 
  float v46; 
  float v47; 
  float v48; 
  char v49; 
  float v50; 
  float v51; 
  float v52; 
  char v53; 
  float v54; 
  float v55; 
  float v56; 
  char v57; 
  float v58; 
  float v59; 
  float v60; 
  char v61; 
  float v62; 
  float v63; 
  float v64; 
  char v65; 
  float v66; 
  float v67; 
  float v68; 
  char v69; 
  float v70; 
  float v71; 
  float v72; 
  char v73; 
  float v74; 
  float v75; 
  float v76; 
  char v77; 

  if ( !cgameGlob && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_view_mp.cpp", 606, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  v29 = 0;
  v33 = 0;
  v37 = 1;
  v27 = 0.0;
  *(float *)v28 = 0.0;
  *(float *)&v28[1] = 0.0;
  v30 = 0.0;
  v31 = 0.0;
  v32 = FLOAT_1_0;
  v34 = 0.0;
  v35 = 0.0;
  v36 = FLOAT_1_0;
  v38 = FLOAT_1_0;
  v39 = 0.0;
  v40 = FLOAT_1_0;
  v42 = 0.0;
  v43 = FLOAT_1_0;
  v44 = FLOAT_1_0;
  v46 = 0.0;
  v47 = FLOAT_N1_0;
  v48 = FLOAT_1_0;
  v50 = 0.0;
  v51 = FLOAT_1_0;
  v52 = 0.0;
  v54 = 0.0;
  v55 = FLOAT_N1_0;
  v56 = 0.0;
  v58 = FLOAT_1_0;
  v59 = FLOAT_1_0;
  v60 = FLOAT_1_0;
  v62 = FLOAT_1_0;
  v63 = FLOAT_N1_0;
  v64 = FLOAT_1_0;
  v66 = FLOAT_1_0;
  v67 = FLOAT_1_0;
  v68 = 0.0;
  v70 = FLOAT_1_0;
  v71 = FLOAT_N1_0;
  v72 = 0.0;
  v74 = FLOAT_1_0;
  v75 = 0.0;
  v76 = FLOAT_N1_0;
  v41 = 1;
  v45 = 0;
  v49 = 0;
  v53 = 0;
  v57 = 0;
  v61 = 1;
  v65 = 1;
  v69 = 1;
  v73 = 1;
  v77 = 1;
  GenerateAxisFromForwardVector(forward, &identityMatrix33, &outAxis);
  localClientNum = cgameGlob->localClientNum;
  v10 = v28;
  bounds.halfSize.v[1] = FLOAT_10_0;
  bounds.halfSize.v[2] = FLOAT_10_0;
  v11 = 3 * localClientNum + 2;
  v12 = 0;
  *(_OWORD *)bounds.midPoint.v = _xmm;
  while ( 1 )
  {
    if ( *((_BYTE *)v10 + 8) )
    {
      v13 = bodyReferencePoint->v[1];
      start.v[0] = bodyReferencePoint->v[0];
      v14 = bodyReferencePoint->v[2];
    }
    else
    {
      v13 = idealLocation->v[1];
      start.v[0] = idealLocation->v[0];
      v14 = idealLocation->v[2];
    }
    v15 = DVARFLT_deathCameraFailsafeOffset;
    start.v[2] = v14;
    start.v[1] = v13;
    if ( !DVARFLT_deathCameraFailsafeOffset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "deathCameraFailsafeOffset") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v15);
    value = v15->current.value;
    v17 = value * *((float *)v10 - 1);
    v18 = value * *(float *)v10;
    v19 = value * *((float *)v10 + 1);
    skipEntity = cgameGlob->predictedPlayerState.vehicleState.entity;
    start.v[0] = (float)((float)((float)(v17 * outAxis.m[0].v[0]) + (float)(v18 * outAxis.m[1].v[0])) + (float)(v19 * outAxis.m[2].v[0])) + start.v[0];
    start.v[1] = (float)((float)((float)(v18 * outAxis.m[1].v[1]) + (float)(v17 * outAxis.m[0].v[1])) + (float)(v19 * outAxis.m[2].v[1])) + start.v[1];
    start.v[2] = (float)((float)((float)(v17 * outAxis.m[0].v[2]) + (float)(v18 * outAxis.m[1].v[2])) + (float)(v19 * outAxis.m[2].v[2])) + start.v[2];
    if ( skipEntity == 2047 )
      skipEntity = cgameGlob->predictedPlayerState.clientNum;
    PhysicsQuery_LegacyTrace((Physics_WorldId)v11, &results, &start, &start, &bounds, skipEntity, 0, 33636369, 0, NULL, All);
    if ( results.fraction == 1.0 )
    {
      PhysicsQuery_LegacyTrace((Physics_WorldId)v11, &results, bodyReferencePoint, &start, &bounds_origin, skipEntity, 0, 8456721, 0, NULL, All);
      if ( results.fraction == 1.0 )
        break;
    }
    ++v12;
    v10 += 4;
    if ( v12 >= 0xD )
      return 0;
  }
  v22 = start.v[1];
  outLocation->v[0] = start.v[0];
  outLocation->v[2] = start.v[2];
  outLocation->v[1] = v22;
  return 1;
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
  cg_t *LocalClientGlobals; 
  int v7; 
  int ScreenTargetCount; 
  __int64 ScreenTargetEntity; 
  CgEntitySystem *EntitySystem; 
  const cpose_t *p_pose; 
  void (__fastcall *FunctionPointer_origin)(const vec4_t *, vec3_t *); 
  __int128 v16; 
  __int64 v30; 
  __int64 v31; 
  int v32[4]; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  v7 = 0;
  ScreenTargetCount = AimAssist_GetScreenTargetCount(localClientNum);
  if ( ScreenTargetCount > 0 )
  {
    do
    {
      ScreenTargetEntity = AimAssist_GetScreenTargetEntity(localClientNum, v7);
      EntitySystem = CgEntitySystem::GetEntitySystem(localClientNum);
      if ( (unsigned int)ScreenTargetEntity >= 0x800 )
      {
        LODWORD(v31) = 2048;
        LODWORD(v30) = ScreenTargetEntity;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", v30, v31) )
          __debugbreak();
      }
      p_pose = &EntitySystem->m_entities[ScreenTargetEntity].pose;
      if ( !p_pose && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 379, ASSERT_TYPE_ASSERT, "(pose)", (const char *)&queryFormat, "pose") )
        __debugbreak();
      if ( !p_pose->origin.Get_origin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 380, ASSERT_TYPE_ASSERT, "(pose->origin.Get_origin)", (const char *)&queryFormat, "pose->origin.Get_origin") )
        __debugbreak();
      FunctionPointer_origin = ObfuscateGetFunctionPointer_origin(p_pose->origin.Get_origin, p_pose);
      FunctionPointer_origin(&p_pose->origin.origin.origin, (vec3_t *)v32);
      if ( p_pose->isPosePrecise )
      {
        _XMM0 = (unsigned int)v32[0];
        __asm { vcvtdq2pd xmm0, xmm0 }
        *((_QWORD *)&v16 + 1) = *((_QWORD *)&_XMM0 + 1);
        *(double *)&v16 = *(double *)&_XMM0 * 0.000244140625;
        _XMM1 = v16;
        _XMM0 = (unsigned int)v32[1];
        __asm
        {
          vcvtdq2pd xmm0, xmm0
          vcvtsd2ss xmm2, xmm1, xmm1
        }
        *((_QWORD *)&v16 + 1) = *((_QWORD *)&_XMM0 + 1);
        *(double *)&v16 = *(double *)&_XMM0 * 0.000244140625;
        _XMM1 = v16;
        _XMM0 = (unsigned int)v32[2];
        __asm
        {
          vcvtsd2ss xmm4, xmm1, xmm1
          vcvtdq2pd xmm0, xmm0
        }
        *((_QWORD *)&v16 + 1) = *((_QWORD *)&_XMM0 + 1);
        *(double *)&v16 = *(double *)&_XMM0 * 0.000244140625;
        _XMM1 = v16;
        __asm { vcvtsd2ss xmm5, xmm1, xmm1 }
        v32[2] = _XMM5;
        v32[0] = _XMM2;
        v32[1] = _XMM4;
      }
      else
      {
        LODWORD(_XMM5) = v32[2];
        LODWORD(_XMM4) = v32[1];
        LODWORD(_XMM2) = v32[0];
      }
      _XMM0 = *(unsigned int *)start;
      fsqrt((float)((float)((float)(LocalClientGlobals->predictedPlayerState.origin.v[1] - *(float *)&_XMM4) * (float)(LocalClientGlobals->predictedPlayerState.origin.v[1] - *(float *)&_XMM4)) + (float)((float)(LocalClientGlobals->predictedPlayerState.origin.v[0] - *(float *)&_XMM2) * (float)(LocalClientGlobals->predictedPlayerState.origin.v[0] - *(float *)&_XMM2))) + (float)((float)(LocalClientGlobals->predictedPlayerState.origin.v[2] - *(float *)&_XMM5) * (float)(LocalClientGlobals->predictedPlayerState.origin.v[2] - *(float *)&_XMM5)));
      __asm { vminss  xmm1, xmm0, xmm5 }
      *start = *(float *)&_XMM1;
      _XMM2 = *(unsigned int *)end;
      ++v7;
      __asm { vmaxss  xmm0, xmm2, xmm5 }
      *end = *(float *)&_XMM0;
      memset(v32, 0, 0xCui64);
    }
    while ( v7 < ScreenTargetCount );
  }
}

/*
==============
CG_ViewMP_UpdateBRCircleSounds
==============
*/
void CG_ViewMP_UpdateBRCircleSounds(const LocalClientNum_t localClientNum)
{
  CgGlobalsMP *LocalClientGlobals; 
  centity_t *m_brCircleEnt; 
  const dvar_t *v4; 
  SndAliasLookup v5; 
  const dvar_t *v6; 
  const char *string; 
  const dvar_t *v8; 
  float value; 
  const dvar_t *v10; 
  float v11; 
  const dvar_t *v12; 
  float v13; 
  const dvar_t *v14; 
  float v15; 
  const dvar_t *v16; 
  float v17; 
  const dvar_t *v18; 
  float v19; 
  const dvar_t *v20; 
  float v21; 
  const dvar_t *v22; 
  float v23; 
  const dvar_t *v24; 
  float v25; 
  const dvar_t *v26; 
  float v27; 
  float v28; 
  float v29; 
  __int128 v30; 
  float v34; 
  float v35; 
  float v36; 
  CgSoundSystem *SoundSystem; 
  CgSoundSystem *v38; 
  float v39; 
  float m_brCircleRadius; 
  double v41; 
  float v42; 
  unsigned int v43; 
  float v44; 
  float v45; 
  SndAliasList *Alias; 
  float v47; 
  float v48; 
  float v49; 
  float v50; 
  int v51[4]; 
  vec3_t outOrigin; 

  LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals(localClientNum);
  m_brCircleEnt = LocalClientGlobals->m_brCircleEnt;
  if ( m_brCircleEnt && (m_brCircleEnt->flags & 1) != 0 )
  {
    v4 = DCONST_DVARSTR_cg_brCircleLoopSound;
    if ( !DCONST_DVARSTR_cg_brCircleLoopSound && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 748, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_brCircleLoopSound") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v4);
    v5.name = v4->current.string;
    v6 = DCONST_DVARSTR_cg_brCircleTickSound;
    if ( !DCONST_DVARSTR_cg_brCircleTickSound && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 748, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_brCircleTickSound") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v6);
    string = v6->current.string;
    v8 = DCONST_DVARFLT_cg_brCircleProximityDistMin;
    if ( !DCONST_DVARFLT_cg_brCircleProximityDistMin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_brCircleProximityDistMin") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v8);
    value = v8->current.value;
    v10 = DCONST_DVARFLT_cg_brCircleProximityDistMax;
    if ( !DCONST_DVARFLT_cg_brCircleProximityDistMax && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_brCircleProximityDistMax") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v10);
    v11 = v10->current.value;
    v12 = DCONST_DVARFLT_cg_brCircleProximityVolumeMin;
    v47 = v11;
    if ( !DCONST_DVARFLT_cg_brCircleProximityVolumeMin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_brCircleProximityVolumeMin") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v12);
    v13 = v12->current.value;
    v14 = DCONST_DVARFLT_cg_brCircleProximityVolumeMax;
    v48 = v13;
    if ( !DCONST_DVARFLT_cg_brCircleProximityVolumeMax && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_brCircleProximityVolumeMax") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v14);
    v15 = v14->current.value;
    v16 = DCONST_DVARFLT_cg_brCircleLoopPitchMin;
    if ( !DCONST_DVARFLT_cg_brCircleLoopPitchMin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_brCircleLoopPitchMin") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v16);
    v17 = v16->current.value;
    v18 = DCONST_DVARFLT_cg_brCircleLoopPitchMax;
    v50 = v17;
    if ( !DCONST_DVARFLT_cg_brCircleLoopPitchMax && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_brCircleLoopPitchMax") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v18);
    v19 = v18->current.value;
    v20 = DCONST_DVARFLT_cg_brCircleTickIntervalMin;
    v49 = v19;
    if ( !DCONST_DVARFLT_cg_brCircleTickIntervalMin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_brCircleTickIntervalMin") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v20);
    v21 = v20->current.value;
    v22 = DCONST_DVARFLT_cg_brCircleTickIntervalMax;
    if ( !DCONST_DVARFLT_cg_brCircleTickIntervalMax && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_brCircleTickIntervalMax") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v22);
    v23 = v22->current.value;
    v24 = DCONST_DVARFLT_cg_brCircleTickPitchMin;
    if ( !DCONST_DVARFLT_cg_brCircleTickPitchMin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_brCircleTickPitchMin") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v24);
    v25 = v24->current.value;
    v26 = DCONST_DVARFLT_cg_brCircleTickPitchMax;
    if ( !DCONST_DVARFLT_cg_brCircleTickPitchMax && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_brCircleTickPitchMax") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v26);
    v27 = v26->current.value;
    CG_GetPoseOrigin(&LocalClientGlobals->m_brCircleEnt->pose, &outOrigin);
    v28 = LocalClientGlobals->predictedPlayerState.origin.v[0] - outOrigin.v[0];
    outOrigin.v[2] = LocalClientGlobals->predictedPlayerState.origin.v[2];
    v30 = LODWORD(LocalClientGlobals->predictedPlayerState.origin.v[1]);
    v29 = LocalClientGlobals->predictedPlayerState.origin.v[1] - outOrigin.v[1];
    *(float *)&v30 = fsqrt((float)(v29 * v29) + (float)(v28 * v28));
    _XMM3 = v30;
    __asm
    {
      vcmpless xmm0, xmm3, cs:__real@80000000
      vblendvps xmm0, xmm3, xmm7, xmm0
    }
    v34 = LocalClientGlobals->m_brCircleRadius - *(float *)&v30;
    v35 = v28 * (float)(1.0 / *(float *)&_XMM0);
    v36 = v29 * (float)(1.0 / *(float *)&_XMM0);
    SoundSystem = CgSoundSystem::GetSoundSystem(localClientNum);
    v38 = SoundSystem;
    if ( v34 <= v47 )
    {
      if ( v34 >= 0.0 )
      {
        m_brCircleRadius = LocalClientGlobals->m_brCircleRadius;
        *(float *)v51 = (float)(v35 * m_brCircleRadius) + outOrigin.v[0];
        v39 = (float)(v36 * m_brCircleRadius) + outOrigin.v[1];
      }
      else
      {
        v39 = LocalClientGlobals->predictedPlayerState.origin.v[1];
        v51[0] = LODWORD(LocalClientGlobals->predictedPlayerState.origin.v[0]);
      }
      v51[2] = LODWORD(LocalClientGlobals->predictedPlayerState.origin.v[2]);
      *(float *)&v51[1] = v39;
      v41 = I_fclamp(v34, value, v47);
      v42 = (float)(*(float *)&v41 - value) / (float)(v47 - value);
      v43 = ((__int64 (__fastcall *)(CgSoundSystem *, __int64, int *, SndAliasLookup))v38->PlaySoundAliasByName2)(v38, 2046i64, v51, v5);
      LocalClientGlobals->m_brCircleLoopSoundId = v43;
      v44 = v42 * v48;
      v45 = 1.0 - v42;
      if ( v43 )
      {
        SND_ScaleVoiceVolumeById(v43, (float)((float)(v45 * v15) + v44) * (float)((float)(v45 * v15) + v44), 0);
        SND_ScaleVoicePitchById(LocalClientGlobals->m_brCircleLoopSoundId, (float)(v45 * v49) + (float)(v42 * v50), 0);
      }
      if ( (float)((float)(LocalClientGlobals->time - LocalClientGlobals->m_brCircleLastProxTickTime) * 0.001) > (float)((float)(v45 * v21) + (float)(v42 * v23)) )
      {
        Alias = SND_TryFindAlias(string);
        ((void (__fastcall *)(CgSoundSystem *, __int64, int *, SndAliasList *, _DWORD, _DWORD, _DWORD))v38->PlaySoundAliasScaledAsync)(v38, 2046i64, v51, Alias, (float)((float)(v45 * v15) + v44) * (float)((float)(v45 * v15) + v44), (float)(v45 * v27) + (float)(v42 * v25), 0);
        LocalClientGlobals->m_brCircleLastProxTickTime = LocalClientGlobals->time;
      }
    }
    else
    {
      if ( LocalClientGlobals->m_brCircleLoopSoundId )
      {
        CgSoundSystem::StopSoundAlias(SoundSystem, 2046, v5);
        LocalClientGlobals->m_brCircleLoopSoundId = 0;
      }
      LocalClientGlobals->m_brCircleLastProxTickTime = 0;
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
  unsigned int v4; 
  unsigned int *v5; 
  unsigned int *v6; 
  secure_uint32_3_t *p_rawKickAngles; 
  unsigned int v8; 
  secure_uint32_3_t *p_kickAngles; 
  unsigned int v10; 
  LocalClientNum_t localClientNum; 
  CgViewSystem *ViewSystem; 
  ClActiveClientMP *ClientMP; 
  unsigned int v14; 
  unsigned int v15; 
  const dvar_t *v16; 
  float value; 
  bool v18; 
  SecureVec3 inData; 
  vec3_t outKickAngles; 
  vec3_t inOutRawKickAngles; 
  __int64 v22; 
  vec3_t weaponMap; 

  v22 = -2i64;
  if ( !cgameGlob && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_view_mp.cpp", 2055, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  if ( GameModeFlagValues::ms_mpValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 190, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a MP-only context", "IsFlagActive( index )") )
    __debugbreak();
  if ( GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&cgameGlob->predictedPlayerState.otherFlags, ACTIVE, 0x22u) )
  {
    v18 = CG_ViewMP_NoKickReturn((const LocalClientNum_t)cgameGlob->localClientNum, &cgameGlob->predictedPlayerState);
    if ( v18 )
    {
      if ( !cgameGlob->kickAVel.initialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\anticheat\\security_obfuscation_integer.h", 221, ASSERT_TYPE_ASSERT, "(initialized)", (const char *)&queryFormat, "initialized") )
        __debugbreak();
      secureInt32_3_aab = cgameGlob->kickAVel.secureInt32_3_aab;
      LODWORD(inData.x) = ((((_DWORD)cgameGlob + 302476) ^ secureInt32_3_aab) * ((((_DWORD)cgameGlob + 302476) ^ secureInt32_3_aab) + 2)) ^ cgameGlob->kickAVel.data[0];
      LODWORD(inData.y) = ((((_DWORD)cgameGlob + 302480) ^ secureInt32_3_aab) * ((((_DWORD)cgameGlob + 302480) ^ secureInt32_3_aab) + 2)) ^ cgameGlob->kickAVel.data[1];
      inData.z = 0.0;
      secure_uint32_3_t::secureInt32_3_Set(&cgameGlob->kickAVel, &inData);
    }
    *(_QWORD *)weaponMap.v = CgWeaponMap::GetInstance((const LocalClientNum_t)cgameGlob->localClientNum);
    p_kickAVel = &cgameGlob->kickAVel;
    if ( !cgameGlob->kickAVel.initialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\anticheat\\security_obfuscation_integer.h", 221, ASSERT_TYPE_ASSERT, "(initialized)", (const char *)&queryFormat, "initialized") )
      __debugbreak();
    v4 = cgameGlob->kickAVel.secureInt32_3_aab;
    LODWORD(inData.x) = ((((_DWORD)cgameGlob + 302476) ^ v4) * ((((_DWORD)cgameGlob + 302476) ^ v4) + 2)) ^ cgameGlob->kickAVel.data[0];
    v5 = &cgameGlob->kickAVel.data[1];
    LODWORD(inData.y) = ((((_DWORD)cgameGlob + 302480) ^ v4) * ((((_DWORD)cgameGlob + 302480) ^ v4) + 2)) ^ cgameGlob->kickAVel.data[1];
    v6 = &cgameGlob->kickAVel.data[2];
    LODWORD(inData.z) = cgameGlob->kickAVel.data[2] ^ ((((_DWORD)cgameGlob + 302484) ^ v4) * ((((_DWORD)cgameGlob + 302484) ^ v4) + 2));
    p_rawKickAngles = &cgameGlob->rawKickAngles;
    if ( !cgameGlob->rawKickAngles.initialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\anticheat\\security_obfuscation_integer.h", 221, ASSERT_TYPE_ASSERT, "(initialized)", (const char *)&queryFormat, "initialized") )
      __debugbreak();
    v8 = cgameGlob->rawKickAngles.secureInt32_3_aab;
    LODWORD(inOutRawKickAngles.v[0]) = ((((_DWORD)cgameGlob + 302500) ^ v8) * ((((_DWORD)cgameGlob + 302500) ^ v8) + 2)) ^ cgameGlob->rawKickAngles.data[0];
    LODWORD(inOutRawKickAngles.v[1]) = cgameGlob->rawKickAngles.data[1] ^ ((((_DWORD)cgameGlob + 302504) ^ v8) * ((((_DWORD)cgameGlob + 302504) ^ v8) + 2));
    LODWORD(inOutRawKickAngles.v[2]) = ((((_DWORD)cgameGlob + 302508) ^ v8) * ((((_DWORD)cgameGlob + 302508) ^ v8) + 2)) ^ cgameGlob->rawKickAngles.data[2];
    p_kickAngles = &cgameGlob->kickAngles;
    if ( !cgameGlob->kickAngles.initialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\anticheat\\security_obfuscation_integer.h", 221, ASSERT_TYPE_ASSERT, "(initialized)", (const char *)&queryFormat, "initialized") )
      __debugbreak();
    v10 = cgameGlob->kickAngles.secureInt32_3_aab;
    LODWORD(outKickAngles.v[0]) = ((((_DWORD)cgameGlob + 302524) ^ v10) * ((((_DWORD)cgameGlob + 302524) ^ v10) + 2)) ^ cgameGlob->kickAngles.data[0];
    LODWORD(outKickAngles.v[1]) = cgameGlob->kickAngles.data[1] ^ ((((_DWORD)cgameGlob + 302528) ^ v10) * ((((_DWORD)cgameGlob + 302528) ^ v10) + 2));
    LODWORD(outKickAngles.v[2]) = ((((_DWORD)cgameGlob + 302532) ^ v10) * ((((_DWORD)cgameGlob + 302532) ^ v10) + 2)) ^ cgameGlob->kickAngles.data[2];
    BG_KickAngles(*(const BgWeaponMap **)weaponMap.v, &cgameGlob->predictedPlayerState, cgameGlob->frametime, &cgameGlob->kickTimeRemaining, (vec3_t *)&inData, &inOutRawKickAngles, &outKickAngles, &cgameGlob->kickNeedsToCrossCenter);
    if ( !cgameGlob->kickAVel.initialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\anticheat\\security_obfuscation_integer.h", 186, ASSERT_TYPE_ASSERT, "(initialized)", (const char *)&queryFormat, "initialized") )
      __debugbreak();
    cgameGlob->kickAVel.secureInt32_3_aab += cgameGlob->kickAVel.secureInt32_3_set_aab;
    cgameGlob->kickAVel.data[0] = ((((_DWORD)cgameGlob + 302476) ^ cgameGlob->kickAVel.secureInt32_3_aab) * ((((_DWORD)cgameGlob + 302476) ^ cgameGlob->kickAVel.secureInt32_3_aab) + 2)) ^ LODWORD(inData.x);
    *v5 = (((unsigned int)v5 ^ cgameGlob->kickAVel.secureInt32_3_aab) * (((unsigned int)v5 ^ cgameGlob->kickAVel.secureInt32_3_aab) + 2)) ^ LODWORD(inData.y);
    *v6 = (((unsigned int)v6 ^ cgameGlob->kickAVel.secureInt32_3_aab) * (((unsigned int)v6 ^ cgameGlob->kickAVel.secureInt32_3_aab) + 2)) ^ LODWORD(inData.z);
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
    if ( v18 )
    {
      ClientMP = ClActiveClientMP::GetClientMP(localClientNum);
      ClActiveClient_GetCLViewangles(ClientMP, &weaponMap);
      if ( !p_kickAngles->initialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\anticheat\\security_obfuscation_integer.h", 221, ASSERT_TYPE_ASSERT, "(initialized)", (const char *)&queryFormat, "initialized") )
        __debugbreak();
      v14 = p_kickAngles->secureInt32_3_aab;
      LODWORD(outKickAngles.v[0]) = p_kickAngles->data[0] ^ ((v14 ^ (unsigned int)p_kickAngles) * ((v14 ^ (unsigned int)p_kickAngles) + 2));
      LODWORD(outKickAngles.v[1]) = ((v14 ^ ((_DWORD)p_kickAngles + 4)) * ((v14 ^ ((_DWORD)p_kickAngles + 4)) + 2)) ^ p_kickAngles->data[1];
      LODWORD(outKickAngles.v[2]) = p_kickAngles->data[2] ^ ((v14 ^ ((_DWORD)p_kickAngles + 8)) * ((v14 ^ ((_DWORD)p_kickAngles + 8)) + 2));
      weaponMap.v[0] = weaponMap.v[0] + outKickAngles.v[0];
      weaponMap.v[1] = weaponMap.v[1] + outKickAngles.v[1];
      weaponMap.v[2] = weaponMap.v[2] + outKickAngles.v[2];
      ClActiveClient_SetCLViewangles(ClientMP, &weaponMap);
      *(_QWORD *)ClientMP->cgameKickAngles.v = 0i64;
      ClientMP->cgameKickAngles.v[2] = 0.0;
      secure_uint32_3_t::secureInt32_3_Reset(p_kickAngles);
      secure_uint32_3_t::secureInt32_3_Reset(p_rawKickAngles);
      if ( !p_kickAVel->initialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\anticheat\\security_obfuscation_integer.h", 221, ASSERT_TYPE_ASSERT, "(initialized)", (const char *)&queryFormat, "initialized") )
        __debugbreak();
      v15 = p_kickAVel->secureInt32_3_aab;
      LODWORD(inData.x) = p_kickAVel->data[0] ^ ((v15 ^ (unsigned int)p_kickAVel) * ((v15 ^ (unsigned int)p_kickAVel) + 2));
      LODWORD(inData.y) = ((v15 ^ (unsigned int)v5) * ((v15 ^ (unsigned int)v5) + 2)) ^ *v5;
      LODWORD(inData.z) = *v6 ^ ((v15 ^ (unsigned int)v6) * ((v15 ^ (unsigned int)v6) + 2));
      v16 = DCONST_DVARFLT_no_kick_velocity_dampen;
      if ( !DCONST_DVARFLT_no_kick_velocity_dampen && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "no_kick_velocity_dampen") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v16);
      value = v16->current.value;
      inData.x = value * inData.x;
      inData.y = value * inData.y;
      inData.z = value * inData.z;
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
  cg_t *LocalClientGlobals; 
  CgWeaponMap *Instance; 
  bool IsThirdPersonMode; 
  float dofPhysicalAdsStart; 
  CgSnapshotType SnapshotType; 
  float end; 
  float start; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_view_mp.cpp", 1816, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  if ( CG_Snapshot_GetSnapshotType() != SNAP_TYPE_MP )
  {
    SnapshotType = CG_Snapshot_GetSnapshotType();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_view_mp.cpp", 1818, ASSERT_TYPE_ASSERT, "(CG_Snapshot_GetSnapshotType() == CgSnapshotType::SNAP_TYPE_MP)", "%s\n\tCG_ViewMP_UpdateSceneDepthOfField: Trying to get multiplayer snapshot but no multiplayer snapshots have been allocated. CgSnapshotType:%d\n", "CG_Snapshot_GetSnapshotType() == CgSnapshotType::SNAP_TYPE_MP", SnapshotType) )
      __debugbreak();
  }
  if ( (!LocalClientGlobals->m_isMLGSpectator || !LocalClientGlobals->spectatingThirdPerson) && !CG_View_IsKillCamEntityView(localClientNum) )
  {
    if ( CG_IsCinematicCameraActive(localClientNum) )
    {
      CG_CinematicCameraSetDof(localClientNum);
    }
    else
    {
      Instance = CgWeaponMap::GetInstance(localClientNum);
      IsThirdPersonMode = BG_IsThirdPersonMode(Instance, &LocalClientGlobals->predictedPlayerState);
      dofPhysicalAdsStart = LocalClientGlobals->predictedPlayerState.dofPhysicalAdsStart;
      *(float *)&_XMM7 = LocalClientGlobals->predictedPlayerState.dofPhysicalAdsEnd;
      if ( !IsThirdPersonMode && R_DOF_GetPhysicalEnable() && (unsigned int)(LocalClientGlobals->predictedPlayerState.dofPhysicalScriptingState - 2) > 1 )
      {
        Sys_WaitWorkerCmdsOnlyOfType(WRKCMD_CG_VIEWMP_DOFTRACE);
        start = s_dofTraceDistance;
        end = s_dofTraceDistance;
        CG_ViewMP_UpdateAdsDofPhysicalApplyAimAssist(localClientNum, &start, &end);
        _XMM0 = LODWORD(end);
        __asm { vmaxss  xmm7, xmm0, cs:__real@46000000 }
        dofPhysicalAdsStart = start;
      }
      CG_View_UpdateSceneDepthOfField(localClientNum, 1, IsThirdPersonMode, dofPhysicalAdsStart, *(float *)&_XMM7);
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
  ConsumableCardCache *p_m_cachedConsumableCards; 
  __int64 v6; 
  const vec3_t *FocusOrigin; 
  const vec3_t *ClientVelocity; 
  const dvar_t *v9; 
  CL_TransientsCommonMP_PrioritizationFlags PrioritizationFlags; 
  centity_t *predictedPlayerEntity; 
  entityType_s eType; 
  bool v15; 
  CL_TransientsCollisionMP_PriorityMode v16; 
  CL_TransientsCollisionMP_PriorityMode PriorityMode; 
  int TransientsCommonMPPriorityFlagsForLocalClient; 
  vec3_t outOrg; 
  float outCosFovLimit; 
  float outZoomFactor; 

  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_view_mp.cpp", 2449, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  if ( !cgameGlob && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_view_mp.cpp", 2450, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  IsFirstActiveGameLocalClient = ClStatic::IsFirstActiveGameLocalClient(&cls, localClientNum);
  if ( CgGlobalsMP::GetLocalClientGlobals(localClientNum)->m_usePlayerCards && ClStatic::IsFirstActiveGameLocalClient(&cls, localClientNum) )
  {
    CG_ViewMP_PrefetchPlayerCards(localClientNum);
    PlayercardCache_TouchMaterials(localClientNum);
  }
  if ( !cgameGlob && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_view_mp.cpp", 2018, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  if ( cgameGlob->m_useConsumableCards )
  {
    p_m_cachedConsumableCards = &cgameGlob->m_cachedConsumableCards;
    v6 = 5i64;
    do
    {
      if ( p_m_cachedConsumableCards->cardImages[0] )
        Stream_TouchMaterial(p_m_cachedConsumableCards->cardImages[0]);
      p_m_cachedConsumableCards = (ConsumableCardCache *)((char *)p_m_cachedConsumableCards + 8);
      --v6;
    }
    while ( v6 );
  }
  CL_UIStreaming_UpdateImages();
  CL_StreamViews_ClearAllManualViews(localClientNum);
  RefdefView_GetOrg(&cgameGlob->refdef.view, &outOrg);
  FocusOrigin = CG_Camera_GetFocusOrigin(localClientNum);
  CL_StreamViews_UpdateVelocity(localClientNum, FocusOrigin, cgameGlob->time, cgameGlob->frametime);
  CL_StreamViews_CalculateZoomFactorAndCosFovLimit(cgameGlob->refdef.view.fov.tanHalfFovY, cgameGlob->refdef.view.defaultFov.tanHalfFovY, &outZoomFactor, &outCosFovLimit);
  ClientVelocity = CL_StreamViews_GetClientVelocity(localClientNum);
  CL_StreamViews_SetManualView(MOVEMENT, localClientNum, &outOrg, &cgameGlob->refdef.view.axis, ClientVelocity, outZoomFactor, outCosFovLimit, 1);
  v9 = DCONST_DVARFLT_cg_debugCamPivot;
  if ( !DCONST_DVARFLT_cg_debugCamPivot && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_debugCamPivot") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v9);
  _XMM0 = v9->current.unsignedInt;
  PrioritizationFlags = CL_TRANSIENTS_COMMON_MP_PRIORITIZATION_FLAGS_NONE;
  if ( *(float *)&_XMM0 > 0.001 )
  {
    __asm { vmaxss  xmm1, xmm0, cs:__real@3dcccccd; radius }
    CG_DebugSphere(FocusOrigin, *(float *)&_XMM1, &colorCyan, 0, 0);
  }
  if ( !cgameGlob->m_frontEndScene )
    CG_ViewMP_UpdateStreamingForPlayerOrigin(localClientNum, cgameGlob);
  CG_WorldStreaming_TouchClientStreamManualViews(localClientNum);
  CG_DistanceCacheMP_SetClientStreamManualViews(localClientNum);
  if ( !cgameGlob->m_frontEndScene )
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
    predictedPlayerEntity = cgameGlob->predictedPlayerEntity;
    if ( !predictedPlayerEntity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_view_mp.cpp", 2521, ASSERT_TYPE_ASSERT, "( ( cent != nullptr ) )", "( cent ) = %p", NULL) )
      __debugbreak();
    eType = predictedPlayerEntity->nextState.eType;
    if ( cgameGlob == (CgGlobalsMP *)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2289, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    v15 = BG_IsSpectating(&cgameGlob->predictedPlayerState) || cgameGlob->predictedPlayerState.pm_type == 5 || cgameGlob->inKillCam;
    if ( IsFirstActiveGameLocalClient )
    {
      if ( v15 )
        v16 = CL_TRANSIENTS_COLLISION_MP_PRIORITYMODE_SPECTATING;
      else
        v16 = eType == ET_INVISIBLE;
    }
    else
    {
      PriorityMode = CL_TransientsCollisionMP_GetPriorityMode();
      if ( v15 && PriorityMode == CL_TRANSIENTS_COLLISION_MP_PRIORITYMODE_SPECTATING || eType == ET_INVISIBLE && PriorityMode == CL_TRANSIENTS_COLLISION_MP_PRIORITYMODE_LOW )
      {
LABEL_52:
        if ( !IsFirstActiveGameLocalClient )
          PrioritizationFlags = CL_TransientsCommonMP_GetPrioritizationFlags();
        TransientsCommonMPPriorityFlagsForLocalClient = CG_ViewMP_GetTransientsCommonMPPriorityFlagsForLocalClient(localClientNum);
        CL_TransientsCommonMP_SetPrioritizationFlags((const CL_TransientsCommonMP_PrioritizationFlags)(TransientsCommonMPPriorityFlagsForLocalClient | PrioritizationFlags));
        goto LABEL_55;
      }
      v16 = CL_TRANSIENTS_COLLISION_MP_PRIORITYMODE_NORMAL;
    }
    CL_TransientsCollisionMP_SetPriorityMode(v16);
    goto LABEL_52;
  }
LABEL_55:
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
  float viewHeightCurrent; 
  vec3_t origin; 
  vec3_t outOrg; 
  int v8[3]; 
  __int64 v9; 
  tmat33_t<vec3_t> axis; 

  v9 = -2i64;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_view_mp.cpp", 2353, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  if ( !cgameGlob && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_view_mp.cpp", 2354, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  if ( cgameGlob == (CgGlobalsMP *)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_view_mp.cpp", 2357, ASSERT_TYPE_ASSERT, "( ( ps != nullptr ) )", "( ps ) = %p", NULL) )
    __debugbreak();
  Entity = CG_GetEntity(localClientNum, cgameGlob->predictedPlayerState.clientNum);
  if ( !Entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_view_mp.cpp", 2360, ASSERT_TYPE_ASSERT, "( ( cent != nullptr ) )", "( cent ) = %p", NULL) )
    __debugbreak();
  if ( (Entity->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_view_mp.cpp", 2361, ASSERT_TYPE_ASSERT, "(CENextValid( cent ))", (const char *)&queryFormat, "CENextValid( cent )") )
    __debugbreak();
  if ( Entity->nextState.eType != ET_INVISIBLE )
  {
    v8[0] = LODWORD(cgameGlob->predictedPlayerState.origin.v[0]);
    v8[1] = LODWORD(cgameGlob->predictedPlayerState.origin.v[1]);
    v8[2] = LODWORD(cgameGlob->predictedPlayerState.origin.v[2]);
    AnglesToAxis(&cgameGlob->predictedPlayerState.worldUpAngles, &axis);
    viewHeightCurrent = cgameGlob->predictedPlayerState.viewHeightCurrent;
    origin.v[0] = (float)(viewHeightCurrent * axis.m[2].v[0]) + *(float *)v8;
    origin.v[1] = (float)(viewHeightCurrent * axis.m[2].v[1]) + *(float *)&v8[1];
    origin.v[2] = (float)(viewHeightCurrent * axis.m[2].v[2]) + *(float *)&v8[2];
    RefdefView_GetOrg(&cgameGlob->refdef.view, &outOrg);
    if ( (float)((float)((float)((float)(origin.v[1] - outOrg.v[1]) * (float)(origin.v[1] - outOrg.v[1])) + (float)((float)(origin.v[0] - outOrg.v[0]) * (float)(origin.v[0] - outOrg.v[0]))) + (float)((float)(origin.v[2] - outOrg.v[2]) * (float)(origin.v[2] - outOrg.v[2]))) > 4194304.0 )
      CL_StreamViews_SetManualView(DODGE, localClientNum, &origin, &vec3_origin, &vec3_origin, 1.0, 0.0, 0);
    memset(&outOrg, 0, sizeof(outOrg));
  }
  memset(v8, 0, sizeof(v8));
  memset(&origin, 0, sizeof(origin));
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
  __int64 v3; 
  cg_t *LocalClientGlobals; 
  const playerState_s *p_predictedPlayerState; 
  float v6; 
  int viewlocked_entNum; 
  centity_t *Entity; 
  const DObj *ClientDObj; 
  CgHandler *Handler; 
  CgWeaponMap *Instance; 
  const dvar_t *v12; 
  const char *v13; 
  float v14; 
  float v15; 
  float value; 
  float v17; 
  double v18; 
  float v19; 
  const dvar_t *v20; 
  float v21; 
  float v22; 
  float fWeaponPosFrac; 
  double v24; 
  double v25; 
  vec3_t outOrg; 
  __int64 v30; 
  vec3_t v1; 
  vec3_t cameraOffset; 
  vec3_t outOrigin; 

  v30 = -2i64;
  v3 = localClientNum;
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_STILL_LAND|WEAPON_FIRING) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_view_mp.cpp", 984, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_THIRD_PERSON ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_THIRD_PERSON )") )
    __debugbreak();
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)v3);
  p_predictedPlayerState = &LocalClientGlobals->predictedPlayerState;
  v6 = (float)LocalClientGlobals->frametime * 0.001;
  if ( !CG_Weapons_GetVehicleViewOrigin((const LocalClientNum_t)v3, &LocalClientGlobals->predictedPlayerState, &outOrigin) )
  {
    if ( BG_IsTurretActive(p_predictedPlayerState) )
    {
      if ( LocalClientGlobals->predictedPlayerState.viewlocked == PLAYERVIEWLOCK_NONE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapons_inline.h", 29, ASSERT_TYPE_ASSERT, "(ps->viewlocked)", (const char *)&queryFormat, "ps->viewlocked") )
        __debugbreak();
      viewlocked_entNum = LocalClientGlobals->predictedPlayerState.viewlocked_entNum;
      if ( viewlocked_entNum == 2047 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapons_inline.h", 32, ASSERT_TYPE_ASSERT, "(entityNum != ENTITYNUM_NONE)", (const char *)&queryFormat, "entityNum != ENTITYNUM_NONE") )
        __debugbreak();
      Entity = CG_GetEntity((const LocalClientNum_t)v3, viewlocked_entNum);
      ClientDObj = Com_GetClientDObj(Entity->nextState.number, (LocalClientNum_t)v3);
      if ( !ClientDObj )
        Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143EF1430, 540i64, (unsigned int)Entity->nextState.number);
      if ( !CG_DObjGetWorldTagPos(&Entity->pose, ClientDObj, scr_const.tag_player, &outOrigin) )
        Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143EF14A0, 541i64);
    }
    else
    {
      Handler = CgHandler::getHandler((LocalClientNum_t)v3);
      Instance = CgWeaponMap::GetInstance((const LocalClientNum_t)v3);
      BG_GetPlayerEyePosition(Instance, p_predictedPlayerState, &outOrigin, Handler);
    }
  }
  if ( BG_IsTurretActive(p_predictedPlayerState) )
  {
    v12 = DCONST_DVARVEC3_camera_thirdPersonOffsetTurretAds;
    if ( DCONST_DVARVEC3_camera_thirdPersonOffsetTurretAds )
      goto LABEL_24;
    v13 = "camera_thirdPersonOffsetTurretAds";
  }
  else
  {
    v12 = DCONST_DVARVEC3_camera_thirdPersonOffsetAds;
    if ( DCONST_DVARVEC3_camera_thirdPersonOffsetAds )
      goto LABEL_24;
    v13 = "camera_thirdPersonOffsetAds";
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 734, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", v13) )
    __debugbreak();
LABEL_24:
  Dvar_CheckFrontendServerThread(v12);
  v14 = v12->current.vector.v[2];
  v15 = v12->current.vector.v[1];
  value = v12->current.value;
  if ( LocalClientGlobals == (cg_t *)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2214, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&LocalClientGlobals->predictedPlayerState.otherFlags, GameModeFlagValues::ms_mpValue, 0x26u) )
    v17 = FLOAT_N1_0;
  else
    v17 = FLOAT_1_0;
  v18 = DiffTrack(v17, LocalClientGlobals->thirdPersonAdsLerp, THIRD_PERSON_ADS_LERP_RATE, v6);
  LocalClientGlobals->thirdPersonAdsLerp = *(float *)&v18;
  v19 = v15 * *(float *)&v18;
  if ( !CgWeaponMap::ms_instance[v3] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
    __debugbreak();
  if ( BG_UsingSniperScope(CgWeaponMap::ms_instance[v3], p_predictedPlayerState) )
  {
    v14 = 0.0;
    v19 = 0.0;
  }
  v20 = DCONST_DVARVEC3_camera_thirdPersonOffset;
  if ( !DCONST_DVARVEC3_camera_thirdPersonOffset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 734, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "camera_thirdPersonOffset") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v20);
  v21 = v20->current.vector.v[1];
  v22 = v20->current.vector.v[2];
  fWeaponPosFrac = LocalClientGlobals->predictedPlayerState.weapCommon.fWeaponPosFrac;
  cameraOffset.v[0] = (float)((float)(value - v20->current.value) * fWeaponPosFrac) + v20->current.value;
  cameraOffset.v[1] = (float)((float)(v19 - v21) * fWeaponPosFrac) + v21;
  cameraOffset.v[2] = (float)((float)(v14 - v22) * fWeaponPosFrac) + v22;
  RefdefView_GetOrg(&LocalClientGlobals->refdef.view, &outOrg);
  CG_View_UpdateThirdPersonCameraCollision((LocalClientNum_t)v3, LocalClientGlobals->predictedPlayerState.clientNum, &outOrigin, &cameraOffset, viewAngles, 0, 0, &outOrg, &v1);
  RefdefView_SetOrg(&LocalClientGlobals->refdef.view, &outOrg);
  AnglesSubtract(&v1, viewAngles, &v1);
  v24 = I_fclamp(v1.v[0], -30.0, 30.0);
  v1.v[0] = *(float *)&v24;
  v25 = I_fclamp(v1.v[1], -30.0, 30.0);
  v1.v[1] = *(float *)&v25;
  _XMM6 = 0i64;
  __asm { vroundss xmm0, xmm6, xmm2, 1 }
  LocalClientGlobals->thirdPersonGunPitch = (float)((float)((float)(v1.v[0] + viewAngles->v[0]) * 0.0027777778) - *(float *)&_XMM0) * 360.0;
  __asm { vroundss xmm2, xmm6, xmm3, 1 }
  LocalClientGlobals->thirdPersonGunYaw = (float)((float)((float)(v1.v[1] + viewAngles->v[1]) * 0.0027777778) - *(float *)&_XMM2) * 360.0;
  memset(&outOrg, 0, sizeof(outOrg));
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
  CgGlobalsMP *v2; 
  __int64 v3; 
  CgWeaponMap *v4; 
  unsigned int NumWeapons; 
  const playerState_s *p_predictedPlayerState; 
  int i; 
  const Weapon *Weapon; 
  const dvar_t *v9; 
  int EquippedWeaponIndex; 
  __int64 v11; 
  int v12; 
  __int64 v13; 
  bool v14; 
  int IsUnderbarrelWeapon; 
  char v16; 
  __int64 v17; 
  __int64 v18; 

  v2 = cgameGlob;
  v3 = localClientNum;
  if ( !cgameGlob && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_view_mp.cpp", 2274, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  if ( !CgWeaponMap::ms_instance[v3] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
    __debugbreak();
  v4 = CgWeaponMap::ms_instance[v3];
  if ( v2->weaponSelect.weaponIdx >= BG_GetNumWeapons() )
  {
    NumWeapons = BG_GetNumWeapons();
    Com_PrintWarning(17, "WARNING: Invalid weaponSelect setting %i (out of range 0 - %i)\n", v2->weaponSelect.weaponIdx, NumWeapons - 1);
    v2->weaponSelect = NULL_WEAPON;
    p_predictedPlayerState = &v2->predictedPlayerState;
    v2->weaponSelectInAlt = 0;
    for ( i = 0; i < 15; ++i )
    {
      if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 839, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
        __debugbreak();
      if ( v2 == (CgGlobalsMP *)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 840, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
        __debugbreak();
      if ( (unsigned int)i >= 0xF )
      {
        LODWORD(v18) = 15;
        LODWORD(v17) = i;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 841, ASSERT_TYPE_ASSERT, "(unsigned)( equippedIndex ) < (unsigned)( 15 )", "equippedIndex doesn't index MAX_EQUIPPED_WEAPONS\n\t%i not in [0, %i)", v17, v18) )
          __debugbreak();
      }
      Weapon = BgWeaponMap::GetWeapon(v4, p_predictedPlayerState->weaponsEquipped[i]);
      if ( Weapon->weaponIdx )
      {
        if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 1105, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
          __debugbreak();
        if ( v2 == (CgGlobalsMP *)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 1106, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
          __debugbreak();
        v9 = DVARBOOL_bg_giveAll;
        if ( DVARBOOL_bg_giveAll )
        {
          Dvar_CheckFrontendServerThread(DVARBOOL_bg_giveAll);
          if ( v9->current.enabled )
            goto LABEL_69;
        }
        if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 1089, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
          __debugbreak();
        if ( v2 == (CgGlobalsMP *)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 1090, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
          __debugbreak();
        if ( Weapon->weaponIdx && (EquippedWeaponIndex = BG_GetEquippedWeaponIndex(v4, p_predictedPlayerState, Weapon), EquippedWeaponIndex >= 0) )
          v11 = (__int64)&p_predictedPlayerState->weapEquippedData[EquippedWeaponIndex];
        else
          v11 = 0i64;
        if ( v11 )
        {
LABEL_69:
          if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 1063, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
            __debugbreak();
          if ( v2 == (CgGlobalsMP *)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 1064, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
            __debugbreak();
          v12 = BG_GetEquippedWeaponIndex(v4, p_predictedPlayerState, Weapon);
          v14 = v12 >= 0 && (v13 = v12, (const playerState_s *)((char *)p_predictedPlayerState + v13 * 16) != (const playerState_s *)-1540i64) && p_predictedPlayerState->weapEquippedData[v13].inAltMode;
          if ( CG_SelectWeapon((LocalClientNum_t)v3, Weapon, v14) )
            break;
        }
      }
    }
    v2 = cgameGlob;
  }
  if ( v2->weaponSelectInAlt )
  {
    IsUnderbarrelWeapon = BG_OffhandIsUnderbarrelWeapon(v4, &v2->predictedPlayerState, 0x3000ui64);
    if ( v2 == (CgGlobalsMP *)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1422, ASSERT_TYPE_ASSERT, "(playerState)", (const char *)&queryFormat, "playerState") )
      __debugbreak();
    if ( GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&v2->predictedPlayerState.weapCommon.weapFlags, GameModeFlagValues::ms_mpValue, 0x35u) )
    {
      if ( !Com_GameMode_SupportsFeature(WEAPON_INSPECT|WEAPON_LADDER_AIM) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1426, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::WEAPON_OFFHAND_UNDERBARREL ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::WEAPON_OFFHAND_UNDERBARREL )") )
        __debugbreak();
      v16 = 1;
    }
    else
    {
      v16 = 0;
    }
    if ( IsUnderbarrelWeapon && !v16 )
    {
      if ( !Com_GameMode_SupportsFeature(WEAPON_INSPECT|WEAPON_LADDER_AIM) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_view_mp.cpp", 2311, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::WEAPON_OFFHAND_UNDERBARREL ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::WEAPON_OFFHAND_UNDERBARREL )") )
        __debugbreak();
      v2->weaponSelectInAlt = 0;
    }
  }
}

/*
==============
CG_View_CalcUICamera
==============
*/
void CG_View_CalcUICamera(const LocalClientNum_t localClientNum)
{
  cg_t *LocalClientGlobals; 
  __int128 v3; 
  float v7; 
  unsigned int v8; 
  float *v; 
  bool v10; 
  float v11; 
  float v12; 
  __int64 v13; 
  __int64 v14; 
  __int64 v15; 
  __int64 v16; 
  __int64 v17; 
  __int64 v18; 
  __int64 v19; 
  __int64 v20; 
  __int64 v21; 
  __int64 v22; 
  vec3_t outOrg; 

  if ( Com_FrontEndScene_IsActive() && !Com_FrontEndScene_FreeCamEnabled() )
  {
    LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
    if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_view_mp.cpp", 1259, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
      __debugbreak();
    v3 = 0i64;
    *(float *)&v3 = (float)LocalClientGlobals->frametime * 0.001;
    _XMM3 = v3;
    __asm
    {
      vcmpless xmm2, xmm3, xmm1
      vblendvps xmm1, xmm3, xmm0, xmm2; Y
    }
    v7 = powf_0(0.2, *(float *)&_XMM1);
    v8 = 0;
    v = LocalClientGlobals->currentCameraOffset.v;
    v10 = 1;
    do
    {
      if ( !v10 )
      {
        LODWORD(v18) = 3;
        LODWORD(v13) = v8;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v13, v18) )
          __debugbreak();
        LODWORD(v19) = 3;
        LODWORD(v14) = v8;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v14, v19) )
          __debugbreak();
        LODWORD(v20) = 3;
        LODWORD(v15) = v8;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v15, v20) )
          __debugbreak();
      }
      v11 = (float)((float)(*v - *(v - 3)) * v7) + *(v - 3);
      if ( v8 >= 3 )
      {
        LODWORD(v18) = 3;
        LODWORD(v13) = v8;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v13, v18) )
          __debugbreak();
      }
      *v = v11;
      if ( v8 >= 3 )
      {
        LODWORD(v18) = 3;
        LODWORD(v13) = v8;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v13, v18) )
          __debugbreak();
        LODWORD(v21) = 3;
        LODWORD(v16) = v8;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v16, v21) )
          __debugbreak();
        LODWORD(v22) = 3;
        LODWORD(v17) = v8;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v17, v22) )
          __debugbreak();
      }
      v12 = (float)((float)(v[6] - v[3]) * v7) + v[3];
      if ( v8 >= 3 )
      {
        LODWORD(v18) = 3;
        LODWORD(v13) = v8;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 53, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v13, v18) )
          __debugbreak();
      }
      v[6] = v12;
      ++v8;
      ++v;
      v10 = v8 < 3;
    }
    while ( (int)v8 < 3 );
    RefdefView_GetOrg(&LocalClientGlobals->refdef.view, &outOrg);
    outOrg.v[0] = outOrg.v[0] + LocalClientGlobals->currentCameraOffset.v[0];
    outOrg.v[1] = outOrg.v[1] + LocalClientGlobals->currentCameraOffset.v[1];
    outOrg.v[2] = outOrg.v[2] + LocalClientGlobals->currentCameraOffset.v[2];
    RefdefView_SetOrg(&LocalClientGlobals->refdef.view, &outOrg);
    LocalClientGlobals->refdefViewAngles.v[0] = LocalClientGlobals->refdefViewAngles.v[0] + LocalClientGlobals->currentCameraAngleOffset.v[0];
    LocalClientGlobals->refdefViewAngles.v[1] = LocalClientGlobals->currentCameraAngleOffset.v[1] + LocalClientGlobals->refdefViewAngles.v[1];
    LocalClientGlobals->refdefViewAngles.v[2] = LocalClientGlobals->currentCameraAngleOffset.v[2] + LocalClientGlobals->refdefViewAngles.v[2];
    AnglesToAxis(&LocalClientGlobals->refdefViewAngles, &LocalClientGlobals->refdef.view.axis);
    memset(&outOrg, 0, sizeof(outOrg));
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


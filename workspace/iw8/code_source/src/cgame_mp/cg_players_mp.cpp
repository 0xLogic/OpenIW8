/*
==============
CG_PlayersMP_UpdateLocalPlayerEntityModels
==============
*/

void __fastcall CG_PlayersMP_UpdateLocalPlayerEntityModels(LocalClientNum_t localClientNum)
{
  ?CG_PlayersMP_UpdateLocalPlayerEntityModels@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_PlayersMP_LerpEmission
==============
*/

double __fastcall CG_PlayersMP_LerpEmission(LocalClientNum_t localClientNum, const characterInfo_t *ci)
{
  double result; 

  *(float *)&result = ?CG_PlayersMP_LerpEmission@@YAMW4LocalClientNum_t@@PEBUcharacterInfo_t@@@Z(localClientNum, ci);
  return result;
}

/*
==============
CG_PlayersMP_QueueProcessAnimationCmd
==============
*/

void __fastcall CG_PlayersMP_QueueProcessAnimationCmd(LocalClientNum_t localClientNum, centity_t *cent, bool isPredictedPlayer)
{
  ?CG_PlayersMP_QueueProcessAnimationCmd@@YAXW4LocalClientNum_t@@PEAUcentity_t@@_N@Z(localClientNum, cent, isPredictedPlayer);
}

/*
==============
CG_PlayersMP_IsPlayerAboveCullingThreshold
==============
*/

bool __fastcall CG_PlayersMP_IsPlayerAboveCullingThreshold(const CgGlobalsMP *cgameGlob, const centity_t *cent, unsigned int threshold)
{
  return ?CG_PlayersMP_IsPlayerAboveCullingThreshold@@YA_NPEBVCgGlobalsMP@@PEBUcentity_t@@I@Z(cgameGlob, cent, threshold);
}

/*
==============
CG_PlayersMP_ResetPlayerBrCircleEffects
==============
*/

void CG_PlayersMP_ResetPlayerBrCircleEffects(void)
{
  ?CG_PlayersMP_ResetPlayerBrCircleEffects@@YAXXZ();
}

/*
==============
CG_PlayersMP_WaitForProcessAnimationCmds
==============
*/

void CG_PlayersMP_WaitForProcessAnimationCmds(void)
{
  ?CG_PlayersMP_WaitForProcessAnimationCmds@@YAXXZ();
}

/*
==============
CG_PlayersMP_AgentCorpse
==============
*/

void __fastcall CG_PlayersMP_AgentCorpse(LocalClientNum_t localClientNum, centity_t *cent)
{
  ?CG_PlayersMP_AgentCorpse@@YAXW4LocalClientNum_t@@PEAUcentity_t@@@Z(localClientNum, cent);
}

/*
==============
CG_PlayersMP_ComputePlayerDistanceAndFOV
==============
*/

void __fastcall CG_PlayersMP_ComputePlayerDistanceAndFOV(const LocalClientNum_t localClientNum, const centity_t *cent, const vec3_t *viewOrigin, const vec3_t *viewDir, const int time, const bool evaluateTrajectory, CgCharacterAnimUpdateInfo *outCharacterPriority)
{
  ?CG_PlayersMP_ComputePlayerDistanceAndFOV@@YAXW4LocalClientNum_t@@PEBUcentity_t@@AEBTvec3_t@@2H_NPEAUCgCharacterAnimUpdateInfo@@@Z(localClientNum, cent, viewOrigin, viewDir, time, evaluateTrajectory, outCharacterPriority);
}

/*
==============
CG_PlayersMP_UpdateAgentModels
==============
*/

bool __fastcall CG_PlayersMP_UpdateAgentModels(const LocalClientNum_t localClientNum, characterInfo_t *characterInfo)
{
  return ?CG_PlayersMP_UpdateAgentModels@@YA_NW4LocalClientNum_t@@PEAUcharacterInfo_t@@@Z(localClientNum, characterInfo);
}

/*
==============
CG_PlayersMP_ResetCharacterEntity
==============
*/

void __fastcall CG_PlayersMP_ResetCharacterEntity(LocalClientNum_t localClientNum, CgGlobalsMP *cgameGlob, centity_t *cent, int resetAnimation)
{
  ?CG_PlayersMP_ResetCharacterEntity@@YAXW4LocalClientNum_t@@PEAVCgGlobalsMP@@PEAUcentity_t@@H@Z(localClientNum, cgameGlob, cent, resetAnimation);
}

/*
==============
CG_PlayersMP_ResetClientWeaponVisibility
==============
*/

void __fastcall CG_PlayersMP_ResetClientWeaponVisibility(const LocalClientNum_t localClientNum)
{
  ?CG_PlayersMP_ResetClientWeaponVisibility@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_PlayersMP_UpdatePlayerEventPriorities
==============
*/

void __fastcall CG_PlayersMP_UpdatePlayerEventPriorities(const LocalClientNum_t localClientNum, const CgSnapshotMP *nextSnap)
{
  ?CG_PlayersMP_UpdatePlayerEventPriorities@@YAXW4LocalClientNum_t@@PEBUCgSnapshotMP@@@Z(localClientNum, nextSnap);
}

/*
==============
CG_PlayersMP_UpdatePerSnapshotCullingPriorities
==============
*/

void __fastcall CG_PlayersMP_UpdatePerSnapshotCullingPriorities(const LocalClientNum_t localClientNum, const CgSnapshotMP *nextSnap)
{
  ?CG_PlayersMP_UpdatePerSnapshotCullingPriorities@@YAXW4LocalClientNum_t@@PEBUCgSnapshotMP@@@Z(localClientNum, nextSnap);
}

/*
==============
CG_PlayersMP_UpdateClientWeaponVisibilityCmd
==============
*/

void __fastcall CG_PlayersMP_UpdateClientWeaponVisibilityCmd(const void *const cmd)
{
  ?CG_PlayersMP_UpdateClientWeaponVisibilityCmd@@YAXQEBX@Z(cmd);
}

/*
==============
CG_PlayersMP_UpdateAnimSet
==============
*/

void __fastcall CG_PlayersMP_UpdateAnimSet(const cg_t *const cgameGlob, const centity_t *const cent, characterInfo_t *const ci)
{
  ?CG_PlayersMP_UpdateAnimSet@@YAXQEBVcg_t@@QEBUcentity_t@@QEAUcharacterInfo_t@@@Z(cgameGlob, cent, ci);
}

/*
==============
CG_PlayersMP_IsWeaponVisibilityTestActive
==============
*/

bool __fastcall CG_PlayersMP_IsWeaponVisibilityTestActive(const LocalClientNum_t localClientNum)
{
  return ?CG_PlayersMP_IsWeaponVisibilityTestActive@@YA_NW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_PlayersMP_ProcessAnimationCmd
==============
*/

void __fastcall CG_PlayersMP_ProcessAnimationCmd(const void *const cmdData)
{
  ?CG_PlayersMP_ProcessAnimationCmd@@YAXQEBX@Z(cmdData);
}

/*
==============
CG_PlayersMP_PreControllers
==============
*/

void __fastcall CG_PlayersMP_PreControllers(LocalClientNum_t localClientNum, DObj *obj, centity_t *cent)
{
  ?CG_PlayersMP_PreControllers@@YAXW4LocalClientNum_t@@PEAUDObj@@PEAUcentity_t@@@Z(localClientNum, obj, cent);
}

/*
==============
CG_PlayersMP_StartUpdateClientWeaponVisibility
==============
*/

void __fastcall CG_PlayersMP_StartUpdateClientWeaponVisibility(const LocalClientNum_t localClientNum)
{
  ?CG_PlayersMP_StartUpdateClientWeaponVisibility@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_PlayersMP_CalcCoarseCullData
==============
*/

void __fastcall CG_PlayersMP_CalcCoarseCullData(const LocalClientNum_t localClientNum)
{
  ?CG_PlayersMP_CalcCoarseCullData@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_PlayersMP_BucketPlayerEvents_DisableOverBudgetEvents
==============
*/

void __fastcall CG_PlayersMP_BucketPlayerEvents_DisableOverBudgetEvents(const LocalClientNum_t localClientNum, CgPlayerEventInventory *eventInventory)
{
  ?CG_PlayersMP_BucketPlayerEvents_DisableOverBudgetEvents@@YAXW4LocalClientNum_t@@AEAUCgPlayerEventInventory@@@Z(localClientNum, eventInventory);
}

/*
==============
CG_PlayersMP_SetCharacterAngles
==============
*/

void __fastcall CG_PlayersMP_SetCharacterAngles(CgGlobalsMP *cgameGlob, centity_t *cent, float lerp)
{
  ?CG_PlayersMP_SetCharacterAngles@@YAXPEAVCgGlobalsMP@@PEAUcentity_t@@M@Z(cgameGlob, cent, lerp);
}

/*
==============
CG_PlayerMP_AddViewLinkedHelmet
==============
*/

void __fastcall CG_PlayerMP_AddViewLinkedHelmet(const LocalClientNum_t localClientNum)
{
  ?CG_PlayerMP_AddViewLinkedHelmet@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_PlayersMP_ProcessPlayer
==============
*/

void __fastcall CG_PlayersMP_ProcessPlayer(LocalClientNum_t localClientNum, centity_t *cent)
{
  ?CG_PlayersMP_ProcessPlayer@@YAXW4LocalClientNum_t@@PEAUcentity_t@@@Z(localClientNum, cent);
}

/*
==============
CG_PlayersMP_ProcessPlayerPostUpdate
==============
*/

void __fastcall CG_PlayersMP_ProcessPlayerPostUpdate(LocalClientNum_t localClientNum, const unsigned int entityIndex, const unsigned int clientIndex, const vec3_t *poseOrigin)
{
  ?CG_PlayersMP_ProcessPlayerPostUpdate@@YAXW4LocalClientNum_t@@IIAEBTvec3_t@@@Z(localClientNum, entityIndex, clientIndex, poseOrigin);
}

/*
==============
CG_PlayersMP_ProcessCorpse
==============
*/

void __fastcall CG_PlayersMP_ProcessCorpse(LocalClientNum_t localClientNum, centity_t *cent)
{
  ?CG_PlayersMP_ProcessCorpse@@YAXW4LocalClientNum_t@@PEAUcentity_t@@@Z(localClientNum, cent);
}

/*
==============
CG_PlayersMP_ShouldProcessLocalPlayerEntity
==============
*/

int __fastcall CG_PlayersMP_ShouldProcessLocalPlayerEntity(LocalClientNum_t localClientNum)
{
  return ?CG_PlayersMP_ShouldProcessLocalPlayerEntity@@YAHW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_PlayersMP_UpdateCorpseDObj
==============
*/

void __fastcall CG_PlayersMP_UpdateCorpseDObj(LocalClientNum_t localClientNum, const centity_t *cent, characterInfo_t *ci)
{
  ?CG_PlayersMP_UpdateCorpseDObj@@YAXW4LocalClientNum_t@@PEBUcentity_t@@PEAUcharacterInfo_t@@@Z(localClientNum, cent, ci);
}

/*
==============
CG_PlayersMP_CorpseSyncMelee
==============
*/

void __fastcall CG_PlayersMP_CorpseSyncMelee(LocalClientNum_t localClientNum, const playerState_s *ps)
{
  ?CG_PlayersMP_CorpseSyncMelee@@YAXW4LocalClientNum_t@@PEBUplayerState_s@@@Z(localClientNum, ps);
}

/*
==============
CG_PlayersMP_ProcessLocalPlayerEntity
==============
*/

void __fastcall CG_PlayersMP_ProcessLocalPlayerEntity(LocalClientNum_t localClientNum)
{
  ?CG_PlayersMP_ProcessLocalPlayerEntity@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_PlayersMP_WaitUpdateClientWeaponVisibility
==============
*/

void __fastcall CG_PlayersMP_WaitUpdateClientWeaponVisibility(const LocalClientNum_t localClientNum)
{
  ?CG_PlayersMP_WaitUpdateClientWeaponVisibility@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_PlayersMP_UpdateCharacterDObj
==============
*/

void __fastcall CG_PlayersMP_UpdateCharacterDObj(LocalClientNum_t localClientNum, centity_t *cent)
{
  ?CG_PlayersMP_UpdateCharacterDObj@@YAXW4LocalClientNum_t@@PEAUcentity_t@@@Z(localClientNum, cent);
}

/*
==============
CG_PlayersMP_UpdatePerFrameCullingPriorities
==============
*/

void __fastcall CG_PlayersMP_UpdatePerFrameCullingPriorities(const LocalClientNum_t localClientNum)
{
  ?CG_PlayersMP_UpdatePerFrameCullingPriorities@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_PlayersMP_UpdatePlayerModels
==============
*/

bool __fastcall CG_PlayersMP_UpdatePlayerModels(const LocalClientNum_t localClientNum, const clientInfo_t *clientInfo, characterInfo_t *characterInfo)
{
  return ?CG_PlayersMP_UpdatePlayerModels@@YA_NW4LocalClientNum_t@@PEBUclientInfo_t@@PEAUcharacterInfo_t@@@Z(localClientNum, clientInfo, characterInfo);
}

/*
==============
CG_AddPlayerToWeaponVisibilityList
==============
*/
void CG_AddPlayerToWeaponVisibilityList(LocalClientNum_t localClientNum, centity_t *cent, characterInfo_t *ci)
{
  __int64 v3; 
  unsigned __int8 weaponVisTestCounter; 
  const dvar_t *v7; 
  const dvar_t *v8; 
  volatile int *v9; 
  __int64 v10; 
  int v11; 
  __int64 v12; 
  __int16 number; 

  v3 = localClientNum;
  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 248, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( (*(_BYTE *)&cent->nextState.animInfo.selectAnim & 1) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 249, ASSERT_TYPE_ASSERT, "(!cent->nextState.animInfo.selectAnim.usingAnimState)", (const char *)&queryFormat, "!cent->nextState.animInfo.selectAnim.usingAnimState") )
    __debugbreak();
  if ( !ci && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 250, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
    __debugbreak();
  weaponVisTestCounter = cent->weaponVisTestCounter;
  if ( weaponVisTestCounter )
  {
    cent->weaponVisTestCounter = weaponVisTestCounter - 1;
  }
  else
  {
    if ( !CG_WeaponVisibility_PlayerHasCandidateWeapon_Held((LocalClientNum_t)v3, cent) && !CG_WeaponVisibility_PlayerHasCandidateWeapon_Stowed((LocalClientNum_t)v3, cent, ci) )
      goto LABEL_19;
    v7 = DVARBOOL_killswitch_weapon_visibility_client_hint_enabled;
    if ( !DVARBOOL_killswitch_weapon_visibility_client_hint_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "killswitch_weapon_visibility_client_hint_enabled") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v7);
    if ( !v7->current.enabled || ci->isNearEnvironmentCollision )
    {
      v8 = DVARINT_cg_weaponVisInterval;
      if ( !DVARINT_cg_weaponVisInterval && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_weaponVisInterval") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v8);
      cent->weaponVisTestCounter = truncate_cast<unsigned char,int>(v8->current.integer);
      v9 = &s_weaponVisCount[v3];
      v10 = v3;
      v11 = Sys_InterlockedExchangeAdd(v9, 1);
      v12 = v11;
      if ( (unsigned int)v11 < 0x40 )
      {
        number = cent->nextState.number;
        if ( number < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,short>(short)", "unsigned", (unsigned __int16)number, "signed", number) )
          __debugbreak();
        s_weaponVisEnt[v10][v12] = number;
      }
      else
      {
        Sys_InterlockedDecrement(v9);
      }
    }
    else
    {
LABEL_19:
      CG_WeaponVisibility_SetOccluded(ci, 0, 0);
      cent->weaponVisTestCounter = 0;
    }
  }
}

/*
==============
CG_CheckValidPlayerCharacterInfoModels
==============
*/
__int64 CG_CheckValidPlayerCharacterInfoModels(LocalClientNum_t localClientNum, characterInfo_t *ci)
{
  unsigned int v4; 
  char (*i)[64]; 

  if ( !ci && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 1446, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
    __debugbreak();
  if ( !ci->model[0] || CG_CustomizationMP_IsModelValid(localClientNum, CUSTOMIZATION_TYPE_BODY, ci->model) )
  {
    v4 = 0;
    for ( i = ci->attachModelNames; !*(_BYTE *)i || CG_CustomizationMP_IsModelValid(localClientNum, CUSTOMIZATION_TYPE_HEAD, ci->attachModelNames[(unsigned __int64)v4]); ++i )
    {
      if ( ++v4 >= 9 )
        return 1i64;
    }
  }
  return 0i64;
}

/*
==============
CG_HandlePositionAndBlendForIKTurret
==============
*/
char CG_HandlePositionAndBlendForIKTurret(LocalClientNum_t localClientNum, centity_t *playerEnt, characterInfo_t *ci, centity_t *turretEnt, const DObj *turretDObj, const Weapon *turretWeapon)
{
  centity_t *LinkToParent; 
  CgGlobalsMP *LocalClientGlobals; 
  const snapshot_t *snap; 
  const snapshot_t *nextSnap; 
  const playerState_s *v18; 
  const playerState_s *v19; 
  bool v26; 
  const WeaponDef *v41; 
  int number; 
  const vec3_t *p_viewangles; 
  const dvar_t *v47; 
  scr_string_t v55; 
  int WorldTagMatrix; 
  scr_string_t v60; 
  char v61; 
  Weapon *r_weapon; 
  vec3_t playerOrigin; 
  vec3_t angles; 
  tmat33_t<vec3_t> outTagMat; 
  vec3_t outOrigin; 
  vec3_t turretOrigin; 
  tmat33_t<vec3_t> v68; 
  vec3_t in1; 
  tmat43_t<vec3_t> axis; 
  tmat33_t<vec3_t> out; 
  tmat33_t<vec3_t> v72; 
  tmat33_t<vec3_t> v73; 

  _RBX = turretEnt;
  _RDI = ci;
  _RSI = playerEnt;
  r_weapon = (Weapon *)turretWeapon;
  if ( !playerEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 294, ASSERT_TYPE_ASSERT, "(playerEnt)", (const char *)&queryFormat, "playerEnt") )
    __debugbreak();
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 295, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
    __debugbreak();
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 296, ASSERT_TYPE_ASSERT, "(turretEnt)", (const char *)&queryFormat, "turretEnt") )
    __debugbreak();
  if ( !turretDObj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 297, ASSERT_TYPE_ASSERT, "(turretDObj)", (const char *)&queryFormat, "turretDObj") )
    __debugbreak();
  if ( !BG_TurretWeaponUses3pIK(turretWeapon, 0) )
    return 0;
  if ( CG_DObjGetWorldTagMatrix(&_RBX->pose, turretDObj, scr_const.tag_gunner, &outTagMat, &outOrigin) )
  {
    __asm
    {
      vmovaps [rsp+210h+var_50], xmm6
      vmovaps [rsp+210h+var_60], xmm7
      vmovaps [rsp+210h+var_70], xmm9
    }
    LinkToParent = CG_Entity_GetLinkToParent(localClientNum, _RBX);
    if ( !LinkToParent || (v61 = 1, LinkToParent->nextState.eType != ET_VEHICLE) )
      v61 = 0;
    LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals(localClientNum);
    snap = LocalClientGlobals->snap;
    nextSnap = LocalClientGlobals->nextSnap;
    if ( !snap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 324, ASSERT_TYPE_ASSERT, "(prevSnap)", (const char *)&queryFormat, "prevSnap") )
      __debugbreak();
    if ( !nextSnap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 325, ASSERT_TYPE_ASSERT, "(nextSnap)", (const char *)&queryFormat, "nextSnap") )
      __debugbreak();
    v18 = snap->GetPlayerState(snap, (const LocalClientNum_t)localClientNum);
    v19 = nextSnap->GetPlayerState(nextSnap, (const LocalClientNum_t)localClientNum);
    if ( !v18 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 328, ASSERT_TYPE_ASSERT, "(prevPs)", (const char *)&queryFormat, "prevPs") )
      __debugbreak();
    if ( !v19 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 329, ASSERT_TYPE_ASSERT, "(nextPs)", (const char *)&queryFormat, "nextPs") )
      __debugbreak();
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+1ECh]
      vsubss  xmm1, xmm0, dword ptr [rbx+170h]
      vmulss  xmm5, xmm1, cs:__real@3b360b61
      vaddss  xmm2, xmm5, cs:__real@3f000000
      vmovss  xmm9, cs:__real@3f800000
    }
    _EAX = v19->commandTime - v18->commandTime;
    v26 = _EAX == 1;
    __asm
    {
      vxorps  xmm1, xmm1, xmm1
      vroundss xmm3, xmm1, xmm2, 1
    }
    if ( _EAX < 1 )
      _EAX = 1;
    __asm
    {
      vmovd   xmm0, eax
      vcvtdq2ps xmm0, xmm0
      vdivss  xmm4, xmm9, xmm0
      vmulss  xmm2, xmm4, cs:smoothDurationMs_0
      vcomiss xmm2, xmm9
      vsubss  xmm0, xmm5, xmm3
      vmulss  xmm1, xmm0, cs:__real@43b40000
      vmulss  xmm7, xmm1, xmm4
    }
    if ( v19->commandTime != v18->commandTime && !v26 )
    {
      __asm
      {
        vmovss  xmm1, dword ptr [rbx+0E4h]
        vdivss  xmm3, xmm9, xmm2
        vmulss  xmm0, xmm1, xmm3
        vsubss  xmm2, xmm1, xmm0
        vmulss  xmm1, xmm3, xmm7
        vaddss  xmm7, xmm2, xmm1
      }
    }
    __asm { vmovss  dword ptr [rbx+0E4h], xmm7 }
    AxisToAngles(&outTagMat, &_RSI->pose.angles);
    v41 = BG_WeaponDef(r_weapon, 0);
    if ( !v41 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 345, ASSERT_TYPE_ASSERT, "(weapDef)", (const char *)&queryFormat, "weapDef") )
      __debugbreak();
    if ( !BG_Turret_HasPmoveMovement(v41) )
      CG_SetPoseOrigin(&_RSI->pose, &outOrigin);
    CG_GetPoseOrigin(&_RBX->pose, &turretOrigin);
    CG_GetPoseOrigin(&_RSI->pose, &playerOrigin);
    if ( !_RSI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 552, ASSERT_TYPE_ASSERT, "(pose)", (const char *)&queryFormat, "pose") )
      __debugbreak();
    __asm { vmovss  xmm0, dword ptr [rsi+48h] }
    number = _RSI->nextState.number;
    __asm
    {
      vmovss  xmm1, dword ptr [rsi+4Ch]
      vmovss  dword ptr [rsp+210h+angles], xmm0
      vmovss  xmm0, dword ptr [rsi+50h]
      vmovss  dword ptr [rsp+210h+angles+8], xmm0
      vmovss  dword ptr [rsp+210h+angles+4], xmm1
    }
    p_viewangles = &LocalClientGlobals->predictedPlayerState.viewangles;
    if ( LocalClientGlobals->clientNum != number )
      p_viewangles = &_RDI->playerAngles;
    BG_Turret_UpdateAnimParams(_RDI, &playerOrigin, p_viewangles, &turretOrigin, &_RBX->pose.angles);
    v47 = DVARBOOL_turretDebugYawDeltas;
    if ( !DVARBOOL_turretDebugYawDeltas && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "turretDebugYawDeltas") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v47);
    if ( v47->current.enabled )
    {
      __asm { vmovss  xmm1, cs:__real@40000000; radius }
      CG_DebugSphere(&outOrigin, *(float *)&_XMM1, &colorGreen, 0, 1);
      __asm { vmovss  xmm2, cs:__real@40800000; length }
      CG_DebugAxis(&outTagMat, &outOrigin, *(float *)&_XMM2, 0, 1);
    }
    __asm { vxorps  xmm6, xmm6, xmm6 }
    if ( !v61 )
    {
      __asm
      {
        vandps  xmm0, xmm7, cs:__xmm@7fffffff7fffffff7fffffff7fffffff
        vcomiss xmm0, xmm6
      }
    }
    __asm { vmovss  dword ptr [rdi+8C4h], xmm6 }
    AnglesToAxis(&angles, (tmat33_t<vec3_t> *)&axis);
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+210h+playerOrigin]
      vmovss  xmm1, dword ptr [rsp+210h+playerOrigin+4]
      vmovss  [rbp+110h+var_FC], xmm0
      vmovss  xmm0, dword ptr [rsp+210h+playerOrigin+8]
      vmovss  [rbp+110h+var_F4], xmm0
      vmovss  [rbp+110h+var_F8], xmm1
    }
    v55 = XAnimIKGetLocatorTagName(XANIM_IK_ACTOR_RIGHT_HAND);
    WorldTagMatrix = CG_DObjGetWorldTagMatrix(&_RBX->pose, turretDObj, v55, &v68, &in1);
    __asm
    {
      vmovaps xmm9, [rsp+210h+var_70]
      vmovaps xmm7, [rsp+210h+var_60]
      vmovaps xmm6, [rsp+210h+var_50]
    }
    if ( WorldTagMatrix )
    {
      MatrixTransposeTransformVector43(&in1, &axis, &_RDI->IKHandPos[1]);
      MatrixInverse(&outTagMat, &out);
      MatrixMultiply(&v68, &out, &v72);
      AxisToAngles(&v72, &_RDI->IKHandAng[1]);
    }
    v60 = XAnimIKGetLocatorTagName(XANIM_IK_ACTOR_LEFT_HAND);
    if ( CG_DObjGetWorldTagMatrix(&_RBX->pose, turretDObj, v60, &v68, &in1) )
    {
      MatrixTransposeTransformVector43(&in1, &axis, _RDI->IKHandPos);
      MatrixInverse(&outTagMat, &out);
      MatrixMultiply(&v68, &out, &v73);
      AxisToAngles(&v73, _RDI->IKHandAng);
    }
    return 1;
  }
  else
  {
    Com_PrintWarning(17, "WARNING: aborting player positioning on turret since 'tag_gunner' does not exist, turrets that use 3p IK position the player on tag_gunner.\n");
    return 1;
  }
}

/*
==============
CG_PlayerMP_AddViewLinkedHelmet
==============
*/
void CG_PlayerMP_AddViewLinkedHelmet(const LocalClientNum_t localClientNum)
{
  cg_t *LocalClientGlobals; 
  unsigned int clientNum; 
  characterInfo_t *CharacterInfo; 
  const characterInfo_t *v7; 
  const SuitDef *SuitDef; 
  const DObj *ClientDObj; 
  const DObj *v11; 
  const XModel *Model; 
  centity_t *Entity; 
  bool v30; 
  unsigned __int8 v32; 
  float v51; 
  float v52; 
  unsigned __int8 index[8]; 
  vec3_t outOrigin; 
  __int64 v55; 
  shaderOverride_t v56; 
  GfxSceneEntityMutableShaderData v57; 
  vec3_t lightingOrigin; 
  vec3_t angles; 
  DObjAnimMat outMat; 
  tmat43_t<vec3_t> in1; 
  tmat43_t<vec3_t> axis; 
  tmat43_t<vec3_t> v63; 
  tmat43_t<vec3_t> v64; 
  tmat43_t<vec3_t> dst; 
  tmat43_t<vec3_t> out; 
  GfxSceneEntityMutableShaderData entityMutableShaderData; 
  char v68; 
  void *retaddr; 

  _RAX = &retaddr;
  v55 = -2i64;
  __asm { vmovaps xmmword ptr [rax-38h], xmm6 }
  if ( CG_Players_ShouldDrawPlayerHelmet(localClientNum) )
  {
    LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
    clientNum = LocalClientGlobals->predictedPlayerState.clientNum;
    if ( LocalClientGlobals->HasCharacterInfo(LocalClientGlobals, clientNum) )
    {
      CharacterInfo = CG_GetCharacterInfo(LocalClientGlobals, clientNum);
      v7 = CharacterInfo;
      if ( CharacterInfo )
      {
        SuitDef = BG_GetSuitDef(CharacterInfo->suitIndex);
        _RDI = SuitDef;
        if ( SuitDef )
        {
          if ( SuitDef->cam_drawHelmet )
          {
            ClientDObj = Com_GetClientDObj(2115, localClientNum);
            v11 = ClientDObj;
            if ( ClientDObj )
            {
              Model = DObjGetModel(ClientDObj, 0);
              if ( !Model && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 1652, ASSERT_TYPE_ASSERT, "(helmetModel != nullptr)", (const char *)&queryFormat, "helmetModel != nullptr") )
                __debugbreak();
              index[0] = -2;
              if ( XModelGetBoneIndex(Model, scr_const.j_head, 0, index) )
              {
                DObjGetBasePoseMatrix(v11, index[0], &outMat);
                QuatToAxis(&outMat.quat, (tmat33_t<vec3_t> *)&axis);
                __asm
                {
                  vmovss  xmm0, dword ptr [rbp+290h+outMat.trans]
                  vmovss  [rbp+290h+var_1BC], xmm0
                  vmovss  xmm1, dword ptr [rbp+290h+outMat.trans+4]
                  vmovss  [rbp+290h+var_1B8], xmm1
                  vmovss  xmm0, dword ptr [rbp+290h+outMat.trans+8]
                  vmovss  [rbp+290h+var_1B4], xmm0
                }
                MatrixInverseOrthogonal43(&axis, &out);
                AnglesToAxis(&_RDI->cam_camtoHelmetOffsetAngles, (tmat33_t<vec3_t> *)&v63);
                __asm
                {
                  vmovss  xmm0, dword ptr [rdi+2Ch]
                  vmovss  [rbp+290h+var_18C], xmm0
                  vmovss  xmm1, dword ptr [rdi+30h]
                  vmovss  [rbp+290h+var_188], xmm1
                  vmovss  xmm0, dword ptr [rdi+34h]
                  vmovss  [rbp+290h+var_184], xmm0
                }
                MatrixCopy33(&LocalClientGlobals->refdef.view.axis, (tmat33_t<vec3_t> *)&dst);
                RefdefView_GetOrg(&LocalClientGlobals->refdef.view, &dst.m[3]);
                MatrixMultiply43(&out, &v63, &in1);
                MatrixMultiply43(&in1, &dst, &v64);
                if ( !Mat33IsOrthonormal((const tmat33_t<vec3_t> *)&v64) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 1688, ASSERT_TYPE_ASSERT, "( Mat33IsOrthonormal( leading_submatrix<mat33_t>( modelToWorld ) ) )", "mat3 isn't orthonormal") )
                  __debugbreak();
                _RBX = &LocalClientGlobals->firstPersonHelmetPose;
                AxisToAngles((const tmat33_t<vec3_t> *)&v64, &angles);
                if ( LocalClientGlobals == (cg_t *)-304312i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 559, ASSERT_TYPE_ASSERT, "(pose)", (const char *)&queryFormat, "pose") )
                  __debugbreak();
                __asm
                {
                  vmovss  xmm0, dword ptr [rbp+290h+angles]
                  vmovss  dword ptr [rbx+48h], xmm0
                  vmovss  xmm1, dword ptr [rbp+290h+angles+4]
                  vmovss  dword ptr [rbx+4Ch], xmm1
                  vmovss  xmm0, dword ptr [rbp+290h+angles+8]
                  vmovss  dword ptr [rbx+50h], xmm0
                }
                CG_SetPoseOrigin(&LocalClientGlobals->firstPersonHelmetPose, &v64.m[3]);
                if ( LocalClientGlobals == (cg_t *)-304312i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 643, ASSERT_TYPE_ASSERT, "(pose)", (const char *)&queryFormat, "pose") )
                  __debugbreak();
                __asm
                {
                  vmovss  xmm0, dword ptr [rbp+290h+angles]
                  vmovss  dword ptr [rbx+78h], xmm0
                  vmovss  xmm1, dword ptr [rbp+290h+angles+4]
                  vmovss  dword ptr [rbx+7Ch], xmm1
                  vmovss  xmm0, dword ptr [rbp+290h+angles+8]
                  vmovss  dword ptr [rbx+80h], xmm0
                }
                CG_SetPrevPoseOrigin(&LocalClientGlobals->firstPersonHelmetPose, &v64.m[3]);
                Entity = CG_GetEntity(localClientNum, LocalClientGlobals->predictedPlayerState.clientNum);
                CG_GetPoseOrigin(&Entity->pose, &outOrigin);
                __asm
                {
                  vmovsd  xmm0, qword ptr [rsp+390h+outOrigin]
                  vmovsd  qword ptr [rbp+290h+var_250], xmm0
                }
                lightingOrigin.v[2] = outOrigin.v[2];
                if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&Entity->nextState.lerp.eFlags, ACTIVE, 4u) )
                {
                  __asm
                  {
                    vmovss  xmm0, dword ptr [rbp+290h+var_250+8]
                    vaddss  xmm1, xmm0, cs:__real@41400000
                  }
                }
                else
                {
                  v30 = GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&Entity->nextState.lerp.eFlags, ACTIVE, 3u);
                  __asm { vmovss  xmm0, dword ptr [rbp+290h+var_250+8] }
                  if ( v30 )
                    __asm { vaddss  xmm1, xmm0, cs:__real@41a00000 }
                  else
                    __asm { vaddss  xmm1, xmm0, cs:__real@42000000 }
                }
                __asm { vmovss  dword ptr [rbp+290h+var_250+8], xmm1 }
                *(double *)&_XMM0 = CG_PlayersMP_LerpEmission(localClientNum, v7);
                __asm { vmulss  xmm0, xmm0, cs:__real@437f0000; val }
                v32 = float_to_integral_cast<unsigned char,float>(*(float *)&_XMM0);
                __asm
                {
                  vmovups ymm0, ymmword ptr cs:NULL_SHADER_OVERRIDE_9.scrollRateX
                  vmovups ymmword ptr [rsp+390h+var_338.scrollRateR], ymm0
                }
                v56.atlasTime = NULL_SHADER_OVERRIDE_9.atlasTime;
                __asm
                {
                  vmovups ymm0, ymmword ptr cs:NULL_HUDOUTLINE_INFO_9.color
                  vmovups ymmword ptr [rbp+290h+in1], ymm0
                }
                in1.m[2].v[2] = NULL_HUDOUTLINE_INFO_9.characterEVOffset;
                __asm
                {
                  vxorps  xmm6, xmm6, xmm6
                  vmovss  [rsp+390h+var_360], xmm6
                }
                _RAX = CG_Entity_GetMutableShaderData(&v57, localClientNum, v11, v32 << 24, (GfxSceneHudOutlineInfo *)&in1, &v56, v51);
                _RCX = &entityMutableShaderData;
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
                  vmovups xmm0, xmmword ptr [rax+70h]
                  vmovups xmmword ptr [rcx+70h], xmm0
                  vmovups xmm1, xmmword ptr [rax+80h]
                  vmovups xmmword ptr [rcx+80h], xmm1
                  vmovups xmm0, xmmword ptr [rax+90h]
                  vmovups xmmword ptr [rcx+90h], xmm0
                  vmovups xmm1, xmmword ptr [rax+0A0h]
                  vmovups xmmword ptr [rcx+0A0h], xmm1
                  vmovss  [rsp+390h+var_360], xmm6
                }
                R_AddViewmodelDObjToScene(v11, &LocalClientGlobals->firstPersonHelmetPose, 0x843u, 0x4020Du, &entityMutableShaderData, &lightingOrigin, v52, 0);
                memset(&outOrigin, 0, sizeof(outOrigin));
              }
            }
          }
        }
      }
    }
  }
  _R11 = &v68;
  __asm { vmovaps xmm6, xmmword ptr [r11-10h] }
}

/*
==============
CG_PlayerTurretPositionAndBlend
==============
*/
void CG_PlayerTurretPositionAndBlend(LocalClientNum_t localClientNum, centity_t *cent)
{
  int otherEntityNum; 
  CgStatic *LocalClientStatics; 
  characterInfo_t *CharacterInfo; 
  centity_t *Entity; 
  centity_t *v17; 
  const DObj *ClientDObj; 
  unsigned int Animset; 
  unsigned int animationNumber; 
  CgWeaponMap *Instance; 
  const Weapon *WeaponForEntity; 
  const PlayerAnimEntry *animation; 
  CgWeaponMap *v24; 
  const Weapon *v25; 
  weapClass_t WeaponClass; 
  bool v28; 
  bool v29; 
  const BgAnimStatic *v31; 
  const XAnim_s *Anims; 
  int XAnimIndex; 
  SuitAnimType SuitAnimIndexFromCharacter; 
  unsigned int v35; 
  int NumChildren; 
  const char *AnimDebugName; 
  int v53; 
  unsigned int ChildAt; 
  int v56; 
  char v57; 
  const char *v58; 
  char v68; 
  const DObj *v82; 
  LocalClientNum_t v85; 
  cpose_t *v86; 
  unsigned int v93; 
  unsigned int v94; 
  const DObj *v96; 
  unsigned int v97; 
  unsigned int v99; 
  const SuitDef *SuitDef; 
  float fmt; 
  float fmta; 
  float fmtb; 
  float fmtc; 
  float fmtd; 
  float fmte; 
  float fmtf; 
  float fmtg; 
  float fmth; 
  float fmti; 
  float turretWeapon; 
  float turretWeapona; 
  float turretWeaponb; 
  float turretWeaponc; 
  float turretWeapond; 
  float turretWeapone; 
  float turretWeaponf; 
  float curveID; 
  float curveIDa; 
  float curveIDb; 
  float curveIDc; 
  float curveIDd; 
  float curveIDe; 
  float curveIDf; 
  unsigned int animIndex; 
  unsigned int v155; 
  unsigned int childIndex; 
  vec3_t inOrigin; 
  vec3_t start; 
  unsigned int v159[2]; 
  LocalClientNum_t v160; 
  void *objID; 
  vec3_t end; 
  CgGlobalsMP *LocalClientGlobals; 
  vec3_t v164; 
  XAnimTree *tree; 
  cpose_t *pose; 
  cpose_t *p_pose; 
  __int64 v168; 
  vec3_t trans; 
  vec3_t v170; 
  vec4_t rot; 
  tmat43_t<vec3_t> axis; 
  tmat43_t<vec3_t> v173; 
  tmat43_t<vec3_t> v174; 
  tmat43_t<vec3_t> outTagMat; 
  tmat43_t<vec3_t> v176; 
  tmat33_t<vec3_t> v177; 
  tmat43_t<vec3_t> out; 
  trace_t results; 
  char v180; 
  void *retaddr; 

  _RAX = &retaddr;
  v168 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm8
    vmovaps xmmword ptr [rax-78h], xmm9
    vmovaps xmmword ptr [rax-88h], xmm10
    vmovaps xmmword ptr [rax-98h], xmm11
    vmovaps xmmword ptr [rax-0A8h], xmm12
  }
  pose = &cent->pose;
  v160 = localClientNum;
  otherEntityNum = cent->nextState.otherEntityNum;
  if ( otherEntityNum >= cls.maxClients && (_WORD)otherEntityNum != 2047 )
  {
    LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals(localClientNum);
    LocalClientStatics = CgStatic::GetLocalClientStatics(localClientNum);
    CharacterInfo = CgStatic::GetCharacterInfo(LocalClientStatics, cent->nextState.clientNum);
    if ( !CharacterInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 502, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
      __debugbreak();
    if ( CharacterInfo->infoValid )
    {
      Entity = CG_GetEntity(localClientNum, cent->nextState.otherEntityNum);
      v17 = Entity;
      p_pose = &Entity->pose;
      if ( (Entity->flags & 1) != 0 )
      {
        ClientDObj = Com_GetClientDObj(Entity->nextState.number, localClientNum);
        if ( ClientDObj )
        {
          objID = Com_GetClientDObj(cent->nextState.number, localClientNum);
          if ( objID )
          {
            if ( PlayerASM_IsEnabled() )
            {
              Animset = BG_PlayerASM_GetAnimset(CharacterInfo);
              animationNumber = CharacterInfo->legs.animationNumber;
              if ( !animationNumber || !BG_PlayerASM_IsTurretAlias(animationNumber, Animset) )
              {
                Instance = CgWeaponMap::GetInstance(localClientNum);
                WeaponForEntity = BG_GetWeaponForEntity(Instance, &v17->nextState);
                if ( !WeaponForEntity->weaponIdx && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 529, ASSERT_TYPE_ASSERT, "(turretWeapon.weaponIdx)", (const char *)&queryFormat, "turretWeapon.weaponIdx") )
                  __debugbreak();
                CG_HandlePositionAndBlendForIKTurret(localClientNum, cent, CharacterInfo, v17, ClientDObj, WeaponForEntity);
                goto LABEL_71;
              }
            }
            else
            {
              if ( !CharacterInfo->legs.animationNumber )
                goto LABEL_71;
              animation = CharacterInfo->legs.animation;
              if ( !animation || (animation->flags & 4) == 0 )
                goto LABEL_71;
            }
            v24 = CgWeaponMap::GetInstance(localClientNum);
            v25 = BG_GetWeaponForEntity(v24, &v17->nextState);
            if ( !v25->weaponIdx && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 542, ASSERT_TYPE_ASSERT, "(turretWeapon.weaponIdx)", (const char *)&queryFormat, "turretWeapon.weaponIdx") )
              __debugbreak();
            if ( !CG_HandlePositionAndBlendForIKTurret(localClientNum, cent, CharacterInfo, v17, ClientDObj, v25) )
            {
              if ( CG_DObjGetWorldTagMatrix(&v17->pose, ClientDObj, scr_const.tag_weapon, (tmat33_t<vec3_t> *)&outTagMat, &outTagMat.m[3]) )
              {
                if ( LocalClientGlobals->frametime )
                {
                  _RBX = BG_WeaponDef(v25, 0);
                  *(_QWORD *)v159 = _RBX;
                  WeaponClass = BG_GetWeaponClass(v25, 0);
                  v28 = WeaponClass == WEAPCLASS_TURRET;
                  if ( WeaponClass != WEAPCLASS_TURRET )
                  {
                    v29 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 559, ASSERT_TYPE_ASSERT, "(BG_GetWeaponClass( turretWeapon, false ) == WEAPCLASS_TURRET)", (const char *)&queryFormat, "BG_GetWeaponClass( turretWeapon, false ) == WEAPCLASS_TURRET");
                    v28 = !v29;
                    if ( v29 )
                      __debugbreak();
                  }
                  __asm
                  {
                    vxorps  xmm7, xmm7, xmm7
                    vucomiss xmm7, dword ptr [rbx+0C9Ch]
                  }
                  if ( v28 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 560, ASSERT_TYPE_ASSERT, "(weapDef->fAnimHorRotateInc)", (const char *)&queryFormat, "weapDef->fAnimHorRotateInc") )
                    __debugbreak();
                  v31 = LocalClientStatics->GetAnimStatics(LocalClientStatics);
                  if ( !v31 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 564, ASSERT_TYPE_ASSERT, "(bgameAnim)", (const char *)&queryFormat, "bgameAnim") )
                    __debugbreak();
                  tree = CharacterInfo->pXAnimTree;
                  if ( PlayerASM_IsEnabled() )
                  {
                    Anims = BG_PlayerASM_GetAnims(CharacterInfo->legs.animsetIndex);
                    XAnimIndex = BG_PlayerASM_GetXAnimIndex(CharacterInfo->legs.animsetIndex, CharacterInfo->legs.animationNumber);
                  }
                  else
                  {
                    SuitAnimIndexFromCharacter = BG_GetSuitAnimIndexFromCharacter(CharacterInfo);
                    Anims = v31->animScriptData.animTree.anims;
                    XAnimIndex = BG_AnimationMP_GetXAnimIndex(v31, SuitAnimIndexFromCharacter, CharacterInfo->legs.animationNumber & 0xFFFFEFFF);
                  }
                  v35 = XAnimIndex;
                  animIndex = XAnimIndex;
                  AnglesToAxis(&v17->pose.angles, (tmat33_t<vec3_t> *)&axis);
                  CG_GetPoseOrigin(&v17->pose, &axis.m[3]);
                  MatrixInverseOrthogonal43(&axis, &out);
                  MatrixMultiply43(&outTagMat, &out, &v173);
                  *(double *)&_XMM0 = vectosignedyaw((const vec2_t *)&v173);
                  __asm { vmovaps xmm11, xmm0 }
                  CG_GetPoseOrigin(&cent->pose, &inOrigin);
                  __asm
                  {
                    vmovss  xmm1, dword ptr [rsp+380h+inOrigin]
                    vsubss  xmm4, xmm1, dword ptr [rbp+280h+var_23C]
                    vmovss  xmm2, dword ptr [rsp+380h+inOrigin+4]
                    vsubss  xmm3, xmm2, dword ptr [rbp+280h+var_23C+4]
                    vmovss  xmm1, dword ptr [rsp+380h+inOrigin+8]
                    vsubss  xmm5, xmm1, dword ptr [rbp+280h+var_23C+8]
                    vmulss  xmm3, xmm3, dword ptr [rbp+280h+axis+1Ch]
                    vmulss  xmm0, xmm4, dword ptr [rbp+280h+axis+18h]
                    vaddss  xmm4, xmm3, xmm0
                    vmulss  xmm1, xmm5, dword ptr [rbp+280h+axis+20h]
                    vaddss  xmm0, xmm4, xmm1
                    vsubss  xmm12, xmm0, dword ptr [rbp+280h+var_230+2Ch]
                  }
                  NumChildren = XAnimGetNumChildren(Anims, v35);
                  __asm
                  {
                    vxorps  xmm9, xmm9, xmm9
                    vxorps  xmm10, xmm10, xmm10
                  }
                  childIndex = 0;
                  v155 = 0;
                  if ( !NumChildren )
                  {
                    AnimDebugName = XAnimGetAnimDebugName(Anims, v35);
                    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143E2FBB8, 1165i64, AnimDebugName);
                  }
                  v53 = 0;
                  __asm { vmovss  xmm8, cs:__real@3f000000 }
                  do
                  {
                    ChildAt = XAnimGetChildAt(Anims, animIndex, NumChildren - v53 - 1);
                    v56 = XAnimGetNumChildren(Anims, ChildAt);
                    v57 = 0;
                    if ( !v56 )
                    {
                      v58 = XAnimGetAnimDebugName(Anims, ChildAt);
                      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143E2FBB8, 1166i64, v58);
                    }
                    __asm
                    {
                      vxorps  xmm2, xmm2, xmm2
                      vcvtsi2ss xmm2, xmm2, edi
                      vdivss  xmm1, xmm11, dword ptr [r13+0C9Ch]
                      vmulss  xmm0, xmm2, xmm8
                      vaddss  xmm3, xmm1, xmm0
                      vcomiss xmm3, xmm7
                    }
                    if ( v57 )
                      __asm { vmovaps xmm1, xmm7 }
                    else
                      __asm { vminss  xmm1, xmm2, xmm3 }
                    __asm
                    {
                      vcvttss2si edi, xmm1
                      vxorps  xmm0, xmm0, xmm0
                      vcvtsi2ss xmm0, xmm0, edi
                      vsubss  xmm6, xmm1, xmm0
                    }
                    v159[0] = XAnimGetChildAt(Anims, ChildAt, _EDI);
                    __asm { vmovss  dword ptr [rsp+380h+fmt], xmm7 }
                    XAnimGetAbsDelta(Anims, v159[0], &rot, &trans, fmt);
                    __asm { vucomiss xmm6, xmm7 }
                    if ( v28 )
                    {
                      __asm { vmovss  xmm3, dword ptr [rbp+280h+trans+8] }
                    }
                    else
                    {
                      v155 = XAnimGetChildAt(Anims, ChildAt, _EDI + 1);
                      __asm { vmovss  dword ptr [rsp+380h+fmt], xmm7 }
                      XAnimGetAbsDelta(Anims, v155, &rot, &v170, fmta);
                      __asm
                      {
                        vmovss  xmm0, dword ptr [rbp+280h+var_280]
                        vsubss  xmm1, xmm0, dword ptr [rbp+280h+trans]
                        vmulss  xmm2, xmm1, xmm6
                        vaddss  xmm3, xmm2, dword ptr [rbp+280h+trans]
                        vmovss  dword ptr [rbp+280h+trans], xmm3
                        vmovss  xmm0, dword ptr [rbp+280h+var_280+4]
                        vsubss  xmm1, xmm0, dword ptr [rbp+280h+trans+4]
                        vmulss  xmm2, xmm1, xmm6
                        vaddss  xmm3, xmm2, dword ptr [rbp+280h+trans+4]
                        vmovss  dword ptr [rbp+280h+trans+4], xmm3
                        vmovss  xmm5, dword ptr [rbp+280h+trans+8]
                        vmovss  xmm0, dword ptr [rbp+280h+var_280+8]
                        vsubss  xmm1, xmm0, xmm5
                        vmulss  xmm2, xmm1, xmm6
                        vaddss  xmm3, xmm5, xmm2
                        vmovss  dword ptr [rbp+280h+trans+8], xmm3
                      }
                    }
                    __asm { vcomiss xmm3, xmm12 }
                    if ( !v68 )
                      break;
                    __asm { vmovaps xmm9, xmm3 }
                    childIndex = _EDI;
                    __asm { vmovaps xmm10, xmm6 }
                    ++v53;
                  }
                  while ( v53 < NumChildren );
                  v82 = (const DObj *)objID;
                  __asm { vmovss  dword ptr [rsp+380h+fmt], xmm7 }
                  XAnimClearTreeGoalWeightsStrict(tree, 0, XANIM_SUBTREE_DEFAULT, animIndex, fmtb, objID, LINEAR);
                  __asm
                  {
                    vmovss  xmm8, cs:__real@3f800000
                    vsubss  xmm0, xmm8, xmm6
                    vmovss  dword ptr [rsp+380h+curveID], xmm8
                    vmovss  dword ptr [rsp+380h+turretWeapon], xmm7
                    vmovss  dword ptr [rsp+380h+fmt], xmm0
                  }
                  XAnimSetGoalWeight(v82, 0, XANIM_SUBTREE_DEFAULT, v159[0], fmtc, turretWeapon, curveID, (scr_string_t)0, 0, 0, LINEAR, NULL);
                  __asm { vucomiss xmm6, xmm7 }
                  v85 = v160;
                  v86 = pose;
                  if ( !v28 )
                  {
                    __asm
                    {
                      vmovss  dword ptr [rsp+380h+curveID], xmm8
                      vmovss  dword ptr [rsp+380h+turretWeapon], xmm7
                      vmovss  dword ptr [rsp+380h+fmt], xmm6
                    }
                    XAnimSetGoalWeight(v82, 0, XANIM_SUBTREE_DEFAULT, v155, fmtd, turretWeapona, curveIDa, (scr_string_t)0, 0, 0, LINEAR, NULL);
                  }
                  if ( !v53 || v53 == NumChildren )
                  {
                    __asm
                    {
                      vmovss  dword ptr [rsp+380h+curveID], xmm8
                      vmovss  dword ptr [rsp+380h+turretWeapon], xmm7
                      vmovss  dword ptr [rsp+380h+fmt], xmm8
                    }
                    XAnimSetGoalWeight(v82, 0, XANIM_SUBTREE_DEFAULT, ChildAt, fmti, turretWeaponf, curveIDf, (scr_string_t)0, 0, 0, LINEAR, NULL);
                    v93 = animIndex;
                    v96 = (const DObj *)objID;
                  }
                  else
                  {
                    __asm
                    {
                      vmovss  xmm0, dword ptr [rbp+280h+trans+8]
                      vsubss  xmm1, xmm0, xmm9
                      vucomiss xmm1, xmm7
                    }
                    if ( v53 == NumChildren && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 657, ASSERT_TYPE_ASSERT, "(trans[2] - fPrevTransZ)", (const char *)&queryFormat, "trans[2] - fPrevTransZ") )
                      __debugbreak();
                    __asm
                    {
                      vsubss  xmm2, xmm12, xmm9
                      vmovss  xmm0, dword ptr [rbp+280h+trans+8]
                      vsubss  xmm1, xmm0, xmm9
                      vdivss  xmm6, xmm2, xmm1
                      vmovss  dword ptr [rsp+380h+curveID], xmm8
                      vmovss  dword ptr [rsp+380h+turretWeapon], xmm7
                      vmovss  dword ptr [rsp+380h+fmt], xmm6
                    }
                    XAnimSetGoalWeight(v82, 0, XANIM_SUBTREE_DEFAULT, ChildAt, fmte, turretWeaponb, curveIDb, (scr_string_t)0, 0, 0, LINEAR, NULL);
                    v93 = animIndex;
                    v94 = XAnimGetChildAt(Anims, animIndex, NumChildren - v53);
                    __asm
                    {
                      vsubss  xmm0, xmm8, xmm6
                      vmovss  dword ptr [rsp+380h+curveID], xmm8
                      vmovss  dword ptr [rsp+380h+turretWeapon], xmm7
                      vmovss  dword ptr [rsp+380h+fmt], xmm0
                    }
                    v96 = (const DObj *)objID;
                    XAnimSetGoalWeight((const DObj *)objID, 0, XANIM_SUBTREE_DEFAULT, v94, fmtf, turretWeaponc, curveIDc, (scr_string_t)0, 0, 0, LINEAR, NULL);
                    v97 = XAnimGetChildAt(Anims, v94, childIndex);
                    __asm
                    {
                      vsubss  xmm0, xmm8, xmm10
                      vmovss  dword ptr [rsp+380h+curveID], xmm8
                      vmovss  dword ptr [rsp+380h+turretWeapon], xmm7
                      vmovss  dword ptr [rsp+380h+fmt], xmm0
                    }
                    XAnimSetGoalWeight(v96, 0, XANIM_SUBTREE_DEFAULT, v97, fmtg, turretWeapond, curveIDd, (scr_string_t)0, 0, 0, LINEAR, NULL);
                    __asm { vucomiss xmm10, xmm7 }
                    if ( !v28 )
                    {
                      v99 = XAnimGetChildAt(Anims, v94, childIndex + 1);
                      __asm
                      {
                        vmovss  dword ptr [rsp+380h+curveID], xmm8
                        vmovss  dword ptr [rsp+380h+turretWeapon], xmm7
                        vmovss  dword ptr [rsp+380h+fmt], xmm10
                      }
                      XAnimSetGoalWeight(v96, 0, XANIM_SUBTREE_DEFAULT, v99, fmth, turretWeapone, curveIDe, (scr_string_t)0, 0, 0, LINEAR, NULL);
                    }
                  }
                  XAnimCalcAbsDelta(v96, 0, XANIM_SUBTREE_DEFAULT, v93, &rot, &trans);
                  __asm { vmovaps xmm1, xmm11; angle }
                  VectorAngleMultiply((vec2_t *)&trans, *(float *)&_XMM1);
                  __asm
                  {
                    vmovss  xmm0, dword ptr [rbp+280h+trans]
                    vaddss  xmm1, xmm0, dword ptr [rbp+280h+var_230+24h]
                    vmovss  [rbp+280h+var_1DC], xmm1
                    vmovss  xmm2, dword ptr [rbp+280h+var_230+28h]
                    vaddss  xmm0, xmm2, dword ptr [rbp+280h+trans+4]
                    vmovss  [rbp+280h+var_1D8], xmm0
                    vmovss  xmm1, dword ptr [rbp+280h+var_230+2Ch]
                    vaddss  xmm2, xmm1, dword ptr [rbp+280h+trans+8]
                    vmovss  [rbp+280h+var_1D4], xmm2
                  }
                  QuatToAxis(&rot, &v177);
                  *(double *)&_XMM0 = vectoyaw((const vec2_t *)&v177);
                  __asm { vaddss  xmm0, xmm0, xmm11; yaw }
                  YawToAxis(*(float *)&_XMM0, (tmat33_t<vec3_t> *)&v174);
                  MatrixMultiply43(&v174, &axis, &v176);
                  AxisToAngles((const tmat33_t<vec3_t> *)&v176, &v86->angles);
                  CG_SetPoseOrigin(v86, &v176.m[3]);
                  CG_GetPoseOrigin(v86, &start);
                  __asm
                  {
                    vmovsd  xmm0, qword ptr [rbp+280h+start]
                    vmovsd  qword ptr [rbp+280h+end], xmm0
                  }
                  end.v[2] = start.v[2];
                  SuitDef = BG_GetSuitDef(LocalClientGlobals->predictedPlayerState.suitIndex);
                  if ( !SuitDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 699, ASSERT_TYPE_ASSERT, "(suitDef)", (const char *)&queryFormat, "suitDef") )
                    __debugbreak();
                  CG_GetPoseOrigin(p_pose, &v164);
                  if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() == LONG )
                  {
                    __asm
                    {
                      vmovss  xmm1, dword ptr [rbp+280h+var_2C0+8]
                      vaddss  xmm0, xmm1, cs:__real@41900000
                    }
                  }
                  else
                  {
                    BG_Suit_GetProneViewHeight(SuitDef);
                    __asm
                    {
                      vxorps  xmm0, xmm0, xmm0
                      vcvtsi2ss xmm0, xmm0, eax
                      vmovss  xmm1, dword ptr [rbp+280h+var_2C0+8]
                      vsubss  xmm0, xmm1, xmm0
                    }
                  }
                  __asm
                  {
                    vmovss  dword ptr [rbp+280h+start+8], xmm0
                    vxorps  xmm0, xmm0, xmm0
                    vcvtsi2ss xmm0, xmm0, dword ptr [rdi+200h]
                    vsubss  xmm1, xmm1, xmm0
                    vmovss  dword ptr [rbp+280h+end+8], xmm1
                  }
                  PhysicsQuery_LegacyTrace((Physics_WorldId)(3 * v85 + 2), &results, &start, &end, &bounds_origin, SLOWORD(v86[1].prevOrigin.prevOrigin.xyz.z), 0, 33636369, 0, NULL, All);
                  __asm
                  {
                    vmovss  xmm2, [rbp+280h+results.fraction]
                    vcomiss xmm2, xmm8
                  }
                  if ( v57 )
                  {
                    __asm
                    {
                      vmovss  xmm0, dword ptr [rbp+280h+end+8]
                      vsubss  xmm1, xmm0, dword ptr [rbp+280h+start+8]
                      vmulss  xmm2, xmm1, xmm2
                      vaddss  xmm6, xmm2, dword ptr [rbp+280h+start+8]
                    }
                    CG_GetPoseOrigin(v86, &inOrigin);
                    __asm { vmovss  dword ptr [rsp+380h+inOrigin+8], xmm6 }
                    CG_SetPoseOrigin(v86, &inOrigin);
                  }
                  memset(&v164, 0, sizeof(v164));
                  memset(&inOrigin, 0, sizeof(inOrigin));
                }
              }
              else
              {
                Com_PrintWarning(17, "WARNING: aborting player positioning on turret since 'tag_weapon' does not exist\n");
              }
            }
          }
        }
      }
    }
  }
LABEL_71:
  memset(&end, 0, sizeof(end));
  memset(&start, 0, sizeof(start));
  _R11 = &v180;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
    vmovaps xmm12, xmmword ptr [r11-70h]
  }
}

/*
==============
CG_PlayersMP_AgentCorpse
==============
*/
void CG_PlayersMP_AgentCorpse(LocalClientNum_t localClientNum, centity_t *cent)
{
  __int64 v3; 
  cgs_t *LocalClientStaticGlobals; 
  unsigned int v5; 
  __int64 v6; 
  DObj *ClientDObj; 
  CgWeaponMap *Instance; 
  const DObj *v10; 
  DObj *v11; 
  unsigned int v12; 
  CgWeaponMap *v13; 
  CgHandler *Handler; 
  bool v17; 
  CgStatic *LocalClientStatics; 
  const characterInfo_t *CharacterInfo; 
  unsigned int v21; 
  unsigned int number; 
  bool *isOverHalfWayFaded; 
  bool *isOverHalfWayFadeda; 
  vec3_t *movingPlatformAngles; 
  float v29; 
  bool v30; 
  bool isFadeComplete; 
  bool isFadeActive; 
  unsigned int scriptableIndex; 
  vec3_t v34; 
  const DObj *v35; 
  __int64 v36; 
  GfxSceneHudOutlineInfo v37; 
  shaderOverride_t v38; 
  vec3_t outOrigin; 

  v36 = -2i64;
  v3 = localClientNum;
  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 3776, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( s_weaponVisActive[v3] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 3777, ASSERT_TYPE_ASSERT, "(!CG_PlayersMP_IsWeaponVisibilityTestActive( localClientNum ))", (const char *)&queryFormat, "!CG_PlayersMP_IsWeaponVisibilityTestActive( localClientNum )") )
    __debugbreak();
  if ( !GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&cent->nextState.lerp.eFlags, ACTIVE, 0x11u) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 3781, ASSERT_TYPE_ASSERT, "(es->lerp.eFlags.TestFlag( EntityStateFlagsCommon::DEAD ))", (const char *)&queryFormat, "es->lerp.eFlags.TestFlag( EntityStateFlagsCommon::DEAD )") )
    __debugbreak();
  if ( !CG_Entity_IsNoDraw((const LocalClientNum_t)v3, &cent->nextState, NULL) )
  {
    LocalClientStaticGlobals = CG_GetLocalClientStaticGlobals((const LocalClientNum_t)v3);
    if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 160, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
      __debugbreak();
    v5 = cent->nextState.number - ComCharacterLimits::ms_gameData.m_clientCorpseCount - ComCharacterLimits::ms_gameData.m_characterCount;
    if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 137, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
      __debugbreak();
    if ( v5 >= ComCharacterLimits::ms_gameData.m_agentCorpseCount )
    {
      if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 137, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
        __debugbreak();
      LODWORD(isOverHalfWayFaded) = v5;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 3790, ASSERT_TYPE_ASSERT, "(unsigned)( corpseIndex ) < (unsigned)( ComCharacterLimits::GetAgentCorpseMaxCount() )", "corpseIndex doesn't index ComCharacterLimits::GetAgentCorpseMaxCount()\n\t%i not in [0, %i)", isOverHalfWayFaded, ComCharacterLimits::ms_gameData.m_agentCorpseCount) )
        __debugbreak();
    }
    if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 137, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
      __debugbreak();
    if ( (unsigned __int64)(int)ComCharacterLimits::ms_gameData.m_agentCorpseCount > 8 )
    {
      if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 137, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
        __debugbreak();
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 3791, ASSERT_TYPE_ASSERT, "( ComCharacterLimits::GetAgentCorpseMaxCount() ) <= ( ( sizeof( *array_counter( cgs->agentCorpseInfo ) ) + 0 ) )", "%s <= %s\n\t%i, %i", "ComCharacterLimits::GetAgentCorpseMaxCount()", "ARRAY_COUNT( cgs->agentCorpseInfo )", ComCharacterLimits::ms_gameData.m_agentCorpseCount, 8) )
        __debugbreak();
    }
    v6 = (int)v5;
    _RSI = (__int64)&LocalClientStaticGlobals->agentCorpseInfo[v6].ci;
    ClientDObj = Com_GetClientDObj(cent->nextState.number, (LocalClientNum_t)v3);
    Instance = CgWeaponMap::GetInstance((const LocalClientNum_t)v3);
    BG_AnimationMP_UpdateAgentCorpseDObj((LocalClientNum_t)v3, ClientDObj, Instance, &cent->nextState, (characterInfo_t *)_RSI);
    v10 = Com_GetClientDObj(cent->nextState.number, (LocalClientNum_t)v3);
    v11 = (DObj *)v10;
    v35 = v10;
    if ( v10 )
    {
      if ( (LocalClientStaticGlobals->agentCorpseInfo[v6].flag & 0x10) != 0 )
      {
        XAnimBonePhysicsRestoreState(v10, &LocalClientStaticGlobals->agentCorpseInfo[v6].transferredDynamicBonesState);
        LocalClientStaticGlobals->agentCorpseInfo[v6].flag &= ~0x10u;
      }
      CG_CorpseFade_ApplyDissolveMaterial((const LocalClientNum_t)v3, v11, cent->nextState.number, &isFadeActive, &isFadeComplete, &v30);
      v11->flags |= 0x40u;
      v12 = 0;
      if ( FX_Dismemberment_ProcessEntity((LocalClientNum_t)v3, v11, v30) )
        v12 = 128;
      *(_DWORD *)_RSI = cent->nextState.clientNum;
      *(_QWORD *)(_RSI + 2768) = 0i64;
      *(_BYTE *)(_RSI + 14497) = 0;
      if ( (cent->nextState.animInfo.animData & 1) != (*(_DWORD *)(_RSI + 2568) != 0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 3844, ASSERT_TYPE_ASSERT, "((!!es->animInfo.selectAnim.usingAnimState) == (!!ci->usingAnimState))", (const char *)&queryFormat, "(!!es->animInfo.selectAnim.usingAnimState) == (!!ci->usingAnimState)") )
        __debugbreak();
      if ( *(_DWORD *)(_RSI + 2568) )
      {
        if ( ScriptableCl_IsScriptableEntity((const LocalClientNum_t)v3, cent) )
        {
          if ( ScriptableCl_GetIndexForEntity((const LocalClientNum_t)v3, cent, &scriptableIndex) )
          {
            ScriptableCl_UpdatePosition((const LocalClientNum_t)v3, scriptableIndex, cent);
            ScriptableCl_UpdateSharedInstance((const LocalClientNum_t)v3, scriptableIndex, cent->nextState.number);
          }
          else
          {
            LODWORD(movingPlatformAngles) = cent->nextState.number;
            LODWORD(isOverHalfWayFadeda) = cent->nextState.eType;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 3859, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Entity has a reserved scriptable but cannot resolve the index for that scriptable. Entity Type:%d, Entity Number:%d", isOverHalfWayFadeda, movingPlatformAngles) )
              __debugbreak();
          }
        }
        BG_AIAnim_UpdateExecutionParameter(v11, (const characterInfo_t *)_RSI);
        BG_AnimationState_Update(&cent->nextState, (characterInfo_t *)_RSI, 0);
      }
      else
      {
        CG_Players_CopyAnimStateFromEntity((characterInfo_t *)_RSI, &cent->nextState);
        CG_Players_SetUseShadowAnims((characterInfo_t *const)_RSI, 0);
        CG_GetPoseOrigin(&cent->pose, &outOrigin);
        v13 = CgWeaponMap::GetInstance((const LocalClientNum_t)v3);
        Handler = CgHandler::getHandler((LocalClientNum_t)v3);
        BG_PlayerAnimation(Handler, v13, &cent->nextState, (characterInfo_t *)_RSI, &outOrigin, &vec3_origin, &vec3_origin);
      }
      CG_GetPoseOrigin(&cent->pose, &v34);
      if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&cent->nextState.lerp.eFlags, ACTIVE, 4u) )
      {
        __asm
        {
          vmovss  xmm0, dword ptr [rbp+57h+var_D8+8]
          vaddss  xmm1, xmm0, cs:__real@41400000
        }
      }
      else
      {
        v17 = GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&cent->nextState.lerp.eFlags, ACTIVE, 3u);
        __asm { vmovss  xmm0, dword ptr [rbp+57h+var_D8+8] }
        if ( v17 )
          __asm { vaddss  xmm1, xmm0, cs:__real@41a00000 }
        else
          __asm { vaddss  xmm1, xmm0, cs:__real@42000000 }
      }
      __asm { vmovss  dword ptr [rbp+57h+var_D8+8], xmm1 }
      if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagStrict(&cent->nextState.lerp.eFlags, (EntityStateFlagsMP)27) )
      {
        LocalClientStatics = CgStatic::GetLocalClientStatics((const LocalClientNum_t)v3);
        CharacterInfo = CgStatic::GetCharacterInfo(LocalClientStatics, *(_DWORD *)_RSI);
        if ( !CharacterInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 3891, ASSERT_TYPE_ASSERT, "(ciOld)", (const char *)&queryFormat, "ciOld") )
          __debugbreak();
        *(_DWORD *)(_RSI + 5232) = 3000;
        *(_DWORD *)(_RSI + 5228) = CG_GetLocalClientGlobals((const LocalClientNum_t)v3)->time;
        *(double *)&_XMM0 = CG_PlayersMP_LerpEmission((LocalClientNum_t)v3, CharacterInfo);
        __asm { vmovss  dword ptr [rsi+1474h], xmm0 }
        *(_DWORD *)(_RSI + 5240) = 0;
      }
      *(double *)&_XMM0 = CG_PlayersMP_LerpEmission((LocalClientNum_t)v3, (const characterInfo_t *)_RSI);
      __asm { vmulss  xmm0, xmm0, cs:__real@437f0000; val }
      v21 = float_to_integral_cast<unsigned char,float>(*(float *)&_XMM0) << 24;
      if ( !isFadeComplete )
      {
        number = cent->nextState.number;
        __asm
        {
          vmovups ymm0, ymmword ptr cs:NULL_HUDOUTLINE_INFO_9.color
          vmovups [rbp+57h+var_B0], ymm0
        }
        v37.characterEVOffset = NULL_HUDOUTLINE_INFO_9.characterEVOffset;
        __asm
        {
          vmovups ymm0, ymmword ptr cs:NULL_SHADER_OVERRIDE_9.scrollRateX
          vmovups [rbp+57h+var_80], ymm0
        }
        v38.atlasTime = NULL_SHADER_OVERRIDE_9.atlasTime;
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vmovss  [rsp+130h+var_F0], xmm0
        }
        CG_Entity_AddDObjToScene((const LocalClientNum_t)v3, v35, &cent->pose, number, v12, &v38, &v37, &v34, v29, v21);
      }
    }
    else
    {
      LocalClientStaticGlobals->agentCorpseInfo[v6].flag &= ~0x10u;
    }
  }
  memset(&v34, 0, sizeof(v34));
}

/*
==============
CG_PlayersMP_ApplyWorldUp
==============
*/

void __fastcall CG_PlayersMP_ApplyWorldUp(const centity_t *const cent, double lerp, const vec3_t *localAngles, vec3_t *outWorldAngles)
{
  entityType_s eType; 
  char v10; 
  char v11; 
  vec3_t end; 
  vec3_t outAngles; 
  vec3_t outWorldUpAngles; 
  tmat33_t<vec3_t> axis; 
  tmat33_t<vec3_t> in1; 
  tmat33_t<vec3_t> out; 

  __asm
  {
    vmovaps [rsp+120h+var_40], xmm6
    vmovaps xmm6, xmm1
  }
  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 726, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( cent == (const centity_t *const)-400i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 1921, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  eType = cent->nextState.eType;
  if ( (((eType - 1) & 0xFFED) != 0 || eType == ET_ITEM) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 727, ASSERT_TYPE_ASSERT, "(BG_IsCharacterEntity( &cent->nextState ))", (const char *)&queryFormat, "BG_IsCharacterEntity( &cent->nextState )") )
    __debugbreak();
  WorldUpReferenceFrame::UnpackEntityStateAngles(cent->prevState.u.anonymous.data[3], &outWorldUpAngles);
  WorldUpReferenceFrame::UnpackEntityStateAngles(cent->nextState.lerp.u.anonymous.data[3], &end);
  __asm
  {
    vmovss  xmm0, dword ptr [rbp+57h+outWorldUpAngles]
    vucomiss xmm0, dword ptr [rsp+120h+end]
  }
  if ( v11 )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rbp+57h+outWorldUpAngles+4]
      vucomiss xmm0, dword ptr [rsp+120h+end+4]
    }
    if ( v11 )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rbp+57h+outWorldUpAngles+8]
        vucomiss xmm0, dword ptr [rsp+120h+end+8]
      }
      if ( v11 )
        goto LABEL_16;
    }
  }
  __asm { vcomiss xmm6, cs:__real@3f800000 }
  if ( !v10 )
  {
LABEL_16:
    __asm
    {
      vmovsd  xmm0, qword ptr [rsp+120h+end]
      vmovsd  qword ptr [rsp+120h+outAngles], xmm0
    }
    outAngles.v[2] = end.v[2];
  }
  else
  {
    __asm { vmovaps xmm2, xmm6; fraction }
    BgSpaceship::AngleLerp(&outWorldUpAngles, &end, *(const float *)&_XMM2, &outAngles);
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+120h+outAngles]
    vxorps  xmm1, xmm1, xmm1
    vucomiss xmm0, xmm1
  }
  if ( !v11 )
    goto LABEL_22;
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+120h+outAngles+4]
    vucomiss xmm0, xmm1
  }
  if ( !v11 )
    goto LABEL_22;
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+120h+outAngles+8]
    vucomiss xmm0, xmm1
  }
  if ( v11 )
  {
    if ( localAngles != outWorldAngles )
    {
      outWorldAngles->v[0] = localAngles->v[0];
      outWorldAngles->v[1] = localAngles->v[1];
      outWorldAngles->v[2] = localAngles->v[2];
    }
  }
  else
  {
LABEL_22:
    AnglesToAxis(&outAngles, &axis);
    AnglesToAxis(localAngles, &in1);
    MatrixMultiply(&in1, &axis, &out);
    AxisToAngles(&out, outWorldAngles);
  }
  __asm { vmovaps xmm6, [rsp+120h+var_40] }
}

/*
==============
CG_PlayersMP_BucketPlayerEvents
==============
*/
void CG_PlayersMP_BucketPlayerEvents(const LocalClientNum_t localClientNum, CgPlayerEventInventory *eventInventory)
{
  const dvar_t *v2; 
  bool v5; 
  int integer; 
  int v7; 
  bool *inventoryEmpty; 
  CgPlayerEventInventory *v9; 
  unsigned int *v10; 
  __int64 v11; 
  unsigned int v12; 
  unsigned int v13; 
  unsigned int v14; 
  unsigned int v15; 
  unsigned int v16; 
  unsigned int v17; 
  unsigned int v18; 
  unsigned int v19; 
  CgPlayerEventInventory *v20; 
  ClientBits *p_eventBits; 
  int v22; 
  __int64 v23; 
  int v24; 
  CgPlayerEventInventory *v25; 
  ClientBits *j; 
  const CG_PlayersMP_BucketPlayerEvents::__l2::EventPriority *v27; 
  __int64 inventoryType; 
  bool *v29; 
  ClientBits *v30; 
  unsigned int v31; 
  unsigned int v32; 
  ClientBits *v33; 
  unsigned int v34; 
  unsigned int v35; 
  unsigned int v36; 
  unsigned int v37; 
  unsigned int v38; 
  unsigned int v39; 
  unsigned int v40; 
  CgSortedPlayerOrderMask mask; 
  __int64 v42; 
  int v43; 
  int v44; 
  int v45; 
  int v46; 
  int v47; 
  int v48; 
  CgEventLod endDistanceLod; 
  bool *v50; 
  unsigned int *v51; 
  unsigned int v52; 
  unsigned int v53; 
  unsigned int v54; 
  unsigned int v55; 
  unsigned int v56; 
  unsigned int v57; 
  unsigned int v58; 
  __int64 v59; 
  CgPlayerEventInventory *v60; 
  LocalClientNum_t v61; 
  int v62; 
  ClientBits *i; 
  CgPlayerEventInventory *eventInventorya; 
  __int64 v65; 
  int animCalcUpdatesBudget; 
  LocalClientNum_t localClientNuma; 
  unsigned int v68; 
  unsigned int v69; 
  unsigned int v70; 
  const CG_PlayersMP_BucketPlayerEvents::__l2::EventPriority *v71; 
  CgGlobalsMP *LocalClientGlobals; 
  CgPlayerEventInventory *v73; 
  unsigned int *v74; 
  ClientBits eventBits; 

  v2 = DCONST_DVARINT_cg_event_playerAnimCalcFrameCount;
  v73 = eventInventory;
  localClientNuma = localClientNum;
  if ( !DCONST_DVARINT_cg_event_playerAnimCalcFrameCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_event_playerAnimCalcFrameCount") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  v5 = !eventInventory->corpseBulletHit[0];
  integer = v2->current.integer;
  animCalcUpdatesBudget = integer;
  if ( !v5 )
    animCalcUpdatesBudget = --integer;
  if ( eventInventory->corpseBulletHit[1] )
    animCalcUpdatesBudget = --integer;
  if ( eventInventory->corpseBulletHit[2] )
    animCalcUpdatesBudget = --integer;
  if ( eventInventory->corpseBulletHit[3] )
    animCalcUpdatesBudget = --integer;
  if ( eventInventory->corpseBulletHit[4] )
    animCalcUpdatesBudget = --integer;
  if ( eventInventory->corpseBulletHit[5] )
    animCalcUpdatesBudget = --integer;
  if ( eventInventory->corpseBulletHit[6] )
    animCalcUpdatesBudget = --integer;
  if ( eventInventory->corpseBulletHit[7] )
    animCalcUpdatesBudget = --integer;
  if ( integer < 0 )
    Com_Printf(14, "CgEventLod: overbudget on mandatory events (fatal bullet hits) by %i events\n", (unsigned int)-integer);
  LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals(localClientNum);
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 1159, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  CG_PlayersMP_BucketPlayerEvents_ConsumeEvents(localClientNum, eventInventory->playerEventInventory, LocalClientGlobals->m_playerOrderDistanceSortedCount, 1, &animCalcUpdatesBudget, eventInventory);
  if ( animCalcUpdatesBudget < 0 )
    Com_Printf(14, "CgEventLod: overbudget on mandatory events (fatal bullet hits + local player bullet hits) by %i events\n", (unsigned int)-animCalcUpdatesBudget);
  v7 = 0;
  inventoryEmpty = eventInventory->inventoryEmpty;
  v9 = eventInventory;
  memset(&eventBits, 0, sizeof(eventBits));
  v74 = &eventInventory->playerEventInventory[0].array[2];
  v10 = &eventInventory->playerEventInventory[0].array[2];
  v11 = 6i64;
  v12 = 0;
  v13 = 0;
  v14 = 0;
  v15 = 0;
  v16 = 0;
  v17 = 0;
  v18 = 0;
  do
  {
    v19 = 0;
    v20 = v9;
    while ( !v20->playerEventInventory[0].array[0] )
    {
      ++v19;
      v20 = (CgPlayerEventInventory *)((char *)v20 + 4);
      if ( v19 >= 7 )
      {
        *inventoryEmpty = 1;
        goto LABEL_33;
      }
    }
    *inventoryEmpty = 0;
    v12 |= *(v10 - 2);
    v13 |= *(v10 - 1);
    v14 |= *v10;
    v15 |= v10[1];
    v16 |= v10[2];
    v17 |= v10[3];
    v18 |= v10[4];
LABEL_33:
    v9 = (CgPlayerEventInventory *)((char *)v9 + 28);
    ++inventoryEmpty;
    v10 += 7;
    --v11;
  }
  while ( v11 );
  eventBits.array[0] = v12;
  p_eventBits = &eventBits;
  eventBits.array[1] = v13;
  v22 = 0;
  eventBits.array[2] = v14;
  v23 = 7i64;
  eventBits.array[3] = v15;
  eventBits.array[4] = v16;
  eventBits.array[5] = v17;
  eventBits.array[6] = v18;
  do
  {
    v22 += __popcnt(p_eventBits->array[0]);
    p_eventBits = (ClientBits *)((char *)p_eventBits + 4);
    --v23;
  }
  while ( v23 );
  if ( v22 )
  {
    v24 = animCalcUpdatesBudget;
    v25 = v73;
    if ( v22 > animCalcUpdatesBudget )
    {
      v27 = priorityOrder;
      v70 = 0;
      v71 = priorityOrder;
      do
      {
        if ( v24 <= 0 )
          break;
        inventoryType = (unsigned __int8)v27->inventoryType;
        v29 = &v25->inventoryEmpty[inventoryType];
        v30 = &v25->playerEventInventory[inventoryType];
        if ( *v29 )
        {
          v31 = 0;
          while ( !v30->array[0] )
          {
            ++v31;
            v30 = (ClientBits *)((char *)v30 + 4);
            if ( v31 >= 7 )
              goto LABEL_67;
          }
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 1214, ASSERT_TYPE_ASSERT, "(eventInventory.playerEventInventory[prioritizedEvent.inventoryType].noBitsOn())", (const char *)&queryFormat, "eventInventory.playerEventInventory[prioritizedEvent.inventoryType].noBitsOn()") )
            __debugbreak();
        }
        else
        {
          v32 = 0;
          v33 = v30;
          while ( !v33->array[0] )
          {
            ++v32;
            v33 = (ClientBits *)((char *)v33 + 4);
            if ( v32 >= 7 )
            {
              *v29 = 1;
              goto LABEL_67;
            }
          }
          v34 = v30->array[5];
          v35 = v30->array[6];
          v36 = v30->array[0];
          v37 = v30->array[1];
          v38 = v30->array[2];
          v39 = v30->array[3];
          v40 = v30->array[4];
          eventBits.array[0] = v30->array[0];
          eventBits.array[1] = v37;
          eventBits.array[2] = v38;
          mask = v71->mask;
          eventBits.array[3] = v39;
          eventBits.array[4] = v40;
          v68 = v34;
          eventBits.array[5] = v34;
          v69 = v35;
          eventBits.array[6] = v35;
          if ( mask != CG_SORTED_PLAYER_ORDER_MASK_COUNT )
          {
            if ( (unsigned __int8)mask >= CG_SORTED_PLAYER_ORDER_MASK_COUNT )
            {
              LODWORD(v65) = 3;
              LODWORD(eventInventorya) = (unsigned __int8)mask;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 1226, ASSERT_TYPE_ASSERT, "(unsigned)( prioritizedEvent.mask ) < (unsigned)( ( sizeof( *array_counter( cgameGlob->m_playerOrderDistanceSortedIndexMasks ) ) + 0 ) )", "prioritizedEvent.mask doesn't index cgameGlob->m_playerOrderDistanceSortedIndexMasks\n\t%i not in [0, %i)", eventInventorya, v65) )
                __debugbreak();
              v35 = v69;
              v34 = v68;
            }
            v42 = (unsigned __int8)v71->mask;
            v43 = LocalClientGlobals->m_playerOrderDistanceSortedIndexMasks[v42].array[0] & v36;
            v44 = LocalClientGlobals->m_playerOrderDistanceSortedIndexMasks[v42].array[1] & v37;
            v45 = LocalClientGlobals->m_playerOrderDistanceSortedIndexMasks[v42].array[2] & v38;
            v46 = LocalClientGlobals->m_playerOrderDistanceSortedIndexMasks[v42].array[3] & v39;
            v47 = LocalClientGlobals->m_playerOrderDistanceSortedIndexMasks[v42].array[4] & v40;
            v48 = LocalClientGlobals->m_playerOrderDistanceSortedIndexMasks[v42].array[5] & v34;
            eventBits.array[6] = LocalClientGlobals->m_playerOrderDistanceSortedIndexMasks[v42].array[6] & v35;
            eventBits.array[0] = v43;
            eventBits.array[1] = v44;
            eventBits.array[2] = v45;
            eventBits.array[3] = v46;
            eventBits.array[4] = v47;
            eventBits.array[5] = v48;
          }
          v27 = v71;
          endDistanceLod = v71->endDistanceLod;
          if ( (unsigned __int8)endDistanceLod >= (CG_EVENT_LOD_COUNT|CG_EVENT_LOD0) )
          {
            LODWORD(v65) = 7;
            LODWORD(eventInventorya) = (unsigned __int8)endDistanceLod;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 1229, ASSERT_TYPE_ASSERT, "(unsigned)( prioritizedEvent.endDistanceLod ) < (unsigned)( ( sizeof( *array_counter( cgameGlob->m_playerOrderDistanceSortedDistanceLodStartIndex ) ) + 0 ) )", "prioritizedEvent.endDistanceLod doesn't index cgameGlob->m_playerOrderDistanceSortedDistanceLodStartIndex\n\t%i not in [0, %i)", eventInventorya, v65) )
              __debugbreak();
          }
          CG_PlayersMP_BucketPlayerEvents_ConsumeEvents(localClientNuma, &eventBits, LocalClientGlobals->m_playerOrderDistanceSortedDistanceLodStartIndex[(unsigned __int8)v27->endDistanceLod], 0, &animCalcUpdatesBudget, v25);
          v24 = animCalcUpdatesBudget;
        }
LABEL_67:
        v71 = ++v27;
        ++v70;
      }
      while ( v70 < 0xD );
      v50 = v25->inventoryEmpty;
      memset(&eventBits, 0, sizeof(eventBits));
      v51 = v74;
      v52 = 0;
      v53 = 0;
      v54 = 0;
      v55 = 0;
      v56 = 0;
      v57 = 0;
      v58 = 0;
      v59 = 6i64;
      do
      {
        if ( !*v50 )
        {
          v52 |= *(v51 - 2);
          v53 |= *(v51 - 1);
          v54 |= *v51;
          v55 |= v51[1];
          v56 |= v51[2];
          v57 |= v51[3];
          v58 |= v51[4];
        }
        ++v50;
        v51 += 7;
        --v59;
      }
      while ( v59 );
      v60 = v73;
      v61 = localClientNuma;
      eventBits.array[0] = v52;
      eventBits.array[1] = v53;
      eventBits.array[2] = v54;
      eventBits.array[3] = v55;
      eventBits.array[4] = v56;
      eventBits.array[5] = v57;
      eventBits.array[6] = v58;
      if ( v24 > 0 )
      {
        CG_PlayersMP_BucketPlayerEvents_ConsumeEvents(localClientNuma, &eventBits, LocalClientGlobals->m_playerOrderDistanceSortedCount, 0, &animCalcUpdatesBudget, v73);
        v24 = animCalcUpdatesBudget;
      }
      v62 = 0;
      for ( i = &eventBits; !i->array[0]; i = (ClientBits *)((char *)i + 4) )
      {
        if ( (unsigned int)++v62 >= 7 )
          return;
      }
      if ( v24 > 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 1256, ASSERT_TYPE_ASSERT, "( animCalcUpdatesBudget ) <= ( 0 )", "%s <= %s\n\t%i, %i", "animCalcUpdatesBudget", "0", v24, 0i64) )
        __debugbreak();
      CG_PlayersMP_BucketPlayerEvents_DisableOverBudgetEvents(v61, v60);
    }
    else
    {
      CG_PlayersMP_BucketPlayerEvents_ConsumeEvents(localClientNuma, &eventBits, LocalClientGlobals->m_playerOrderDistanceSortedCount, 0, &animCalcUpdatesBudget, v73);
      for ( j = &eventBits; !j->array[0]; j = (ClientBits *)((char *)j + 4) )
      {
        if ( (unsigned int)++v7 >= 7 )
          return;
      }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 1198, ASSERT_TYPE_ASSERT, "(initialInventory.noBitsOn())", (const char *)&queryFormat, "initialInventory.noBitsOn()") )
        __debugbreak();
    }
  }
}

/*
==============
CG_PlayersMP_BucketPlayerEvents_ConsumeEvents
==============
*/
void CG_PlayersMP_BucketPlayerEvents_ConsumeEvents(const LocalClientNum_t localClientNum, ClientBits *eventBits, const unsigned int endBit, const bool allowDebt, int *animCalcUpdatesBudget, CgPlayerEventInventory *eventInventory)
{
  bool v7; 
  unsigned int v8; 
  ClientBits *v9; 
  CgGlobalsMP *v10; 
  unsigned int v11; 
  __int64 v12; 
  unsigned int v13; 
  __int64 v14; 
  unsigned __int16 v15; 
  __int64 v16; 
  char *v17; 
  unsigned __int8 v18; 
  unsigned int v19; 
  unsigned __int64 v20; 
  CgPlayerEventInventory *v21; 
  ClientBits *v22; 
  char *v23; 
  bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u> > *v24; 
  unsigned int i; 
  __int64 v32; 
  __int64 v33; 
  __int64 v34; 
  __int64 v35; 
  int v36; 
  unsigned int v37; 
  unsigned int v38; 
  unsigned int v39; 
  unsigned __int64 v40; 
  CgGlobalsMP *LocalClientGlobals; 

  __asm { vmovaps [rsp+0B8h+var_48], xmm6 }
  v7 = allowDebt;
  v8 = endBit;
  v9 = eventBits;
  LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals(localClientNum);
  v10 = LocalClientGlobals;
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 1001, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  v11 = v9->array[0];
  LODWORD(v12) = 0;
  v36 = 0;
  while ( v11 )
  {
LABEL_8:
    v13 = __lzcnt(v11);
    v14 = v13 + 32 * (_DWORD)v12;
    v37 = v13 + 32 * v12;
    if ( v13 >= 0x20 )
    {
      LODWORD(v33) = 32;
      LODWORD(v32) = v13;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_bitops.h", 104, ASSERT_TYPE_ASSERT, "(unsigned)( count ) < (unsigned)( 32 )", "count doesn't index 32\n\t%i not in [0, %i)", v32, v33) )
        __debugbreak();
    }
    if ( (v11 & (0x80000000 >> v13)) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarrayiterator.h", 76, ASSERT_TYPE_ASSERT, "(iter->bits & bit)", (const char *)&queryFormat, "iter->bits & bit") )
      __debugbreak();
    v39 = ~(0x80000000 >> v13) & v11;
    if ( (unsigned int)v14 >= v8 || !v7 && *animCalcUpdatesBudget <= 0 )
      goto LABEL_46;
    if ( (unsigned int)v14 >= v10->m_playerOrderDistanceSortedCount )
    {
      LODWORD(v33) = v10->m_playerOrderDistanceSortedCount;
      LODWORD(v32) = v14;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 1016, ASSERT_TYPE_ASSERT, "(unsigned)( eventBitsIterator.index ) < (unsigned)( cgameGlob->m_playerOrderDistanceSortedCount )", "eventBitsIterator.index doesn't index cgameGlob->m_playerOrderDistanceSortedCount\n\t%i not in [0, %i)", v32, v33) )
        __debugbreak();
    }
    v15 = v10->m_playerOrderDistanceSortedIndex[v14];
    v16 = (unsigned int)v14;
    if ( v15 >= 0xF8u )
    {
      LODWORD(v33) = 248;
      LODWORD(v32) = v15;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 1018, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( ( sizeof( *array_counter( cgameGlob->m_playerUpdateAnimInfo ) ) + 0 ) )", "clientNum doesn't index cgameGlob->m_playerUpdateAnimInfo\n\t%i not in [0, %i)", v32, v33) )
        __debugbreak();
    }
    v17 = (char *)v10 + 56 * v15;
    v18 = 0;
    v19 = 0x80000000 >> (v14 & 0x1F);
    v38 = v19;
    v20 = 4 * ((unsigned __int64)(unsigned int)v14 >> 5);
    v40 = v20;
    do
    {
      v21 = eventInventory;
      v22 = &eventInventory->playerEventInventory[v18];
      if ( (unsigned int)v14 >= 0xE0 )
      {
        LODWORD(v33) = 224;
        LODWORD(v32) = v14;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v32, v33) )
          __debugbreak();
        v21 = eventInventory;
      }
      v23 = (char *)v22 + v20;
      if ( (v19 & *(unsigned int *)((_BYTE *)v22->array + v20)) != 0 )
      {
        v24 = &v21->bulletHitPartBits[v16];
        if ( v18 <= 1u )
        {
          _RDI = v17 + 813876;
          _RSI = (char *)((char *)v24 - (v17 + 813876));
          for ( i = 0; i < 2; ++i )
          {
            __asm
            {
              vlddqu  xmm6, xmmword ptr [rsi+rdi]
              vlddqu  xmm0, xmmword ptr [rdi]
              vpor    xmm6, xmm0, xmm6
              vmovdqu xmmword ptr [rdi], xmm6
            }
            _RDI += 16;
          }
          v17[813908] |= 4u;
          LODWORD(v14) = v37;
          bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u>>::resetAllBits(v24);
          v19 = v38;
          v16 = v37;
        }
        else if ( v18 > 2u )
        {
          if ( v18 <= 4u )
            v17[813908] |= 1u;
          else
            v17[813908] |= 2u;
        }
        if ( (unsigned int)v14 >= 0xE0 )
        {
          LODWORD(v35) = 224;
          LODWORD(v34) = v14;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 290, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v34, v35) )
            __debugbreak();
        }
        v20 = v40;
        *(_DWORD *)v23 &= ~v19;
      }
      ++v18;
    }
    while ( v18 < 6u );
    if ( (unsigned int)v14 >= 0xE0 )
    {
      LODWORD(v35) = 224;
      LODWORD(v34) = v14;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 290, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v34, v35) )
        __debugbreak();
    }
    v9 = eventBits;
    LODWORD(v12) = v36;
    v11 = v39;
    *(unsigned int *)((char *)eventBits->array + v20) &= ~v19;
    --*animCalcUpdatesBudget;
    v10 = LocalClientGlobals;
    v7 = allowDebt;
    v8 = endBit;
  }
  while ( 1 )
  {
    v12 = (unsigned int)(v12 + 1);
    v36 = v12;
    if ( (unsigned int)v12 >= 7 )
      break;
    v11 = v9->array[v12];
    if ( v11 )
      goto LABEL_8;
  }
LABEL_46:
  __asm { vmovaps xmm6, [rsp+0B8h+var_48] }
}

/*
==============
CG_PlayersMP_BucketPlayerEvents_DisableOverBudgetEvents
==============
*/
void CG_PlayersMP_BucketPlayerEvents_DisableOverBudgetEvents(const LocalClientNum_t localClientNum, CgPlayerEventInventory *eventInventory)
{
  CgGlobalsMP *LocalClientGlobals; 
  bool *inventoryEmpty; 
  CgPlayerEventInventoryType v5; 
  unsigned int v6; 
  __int64 v7; 
  unsigned int v8; 
  __int64 v9; 
  unsigned __int16 v10; 
  char *v11; 
  __int64 v12; 
  __int64 v13; 
  bool *v15; 

  LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals(localClientNum);
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 1080, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  inventoryEmpty = eventInventory->inventoryEmpty;
  v5 = CG_PLAYER_EVENT_INVENTORY_TYPE_LOCAL_PLAYER_BULLET_HIT_TARGET;
  v15 = eventInventory->inventoryEmpty;
  do
  {
    if ( !*inventoryEmpty )
    {
      v6 = eventInventory->playerEventInventory[0].array[0];
      LODWORD(v7) = 0;
      while ( v6 )
      {
LABEL_10:
        v8 = __lzcnt(v6);
        v9 = v8 + 32 * (_DWORD)v7;
        if ( v8 >= 0x20 )
        {
          LODWORD(v13) = 32;
          LODWORD(v12) = v8;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_bitops.h", 104, ASSERT_TYPE_ASSERT, "(unsigned)( count ) < (unsigned)( 32 )", "count doesn't index 32\n\t%i not in [0, %i)", v12, v13) )
            __debugbreak();
        }
        if ( (v6 & (0x80000000 >> v8)) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarrayiterator.h", 76, ASSERT_TYPE_ASSERT, "(iter->bits & bit)", (const char *)&queryFormat, "iter->bits & bit") )
          __debugbreak();
        v6 &= ~(0x80000000 >> v8);
        if ( (unsigned int)v9 >= LocalClientGlobals->m_playerOrderDistanceSortedCount )
        {
          LODWORD(v13) = LocalClientGlobals->m_playerOrderDistanceSortedCount;
          LODWORD(v12) = v8 + 32 * v7;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 1091, ASSERT_TYPE_ASSERT, "(unsigned)( inventoryIterator.index ) < (unsigned)( cgameGlob->m_playerOrderDistanceSortedCount )", "inventoryIterator.index doesn't index cgameGlob->m_playerOrderDistanceSortedCount\n\t%i not in [0, %i)", v12, v13) )
            __debugbreak();
        }
        v10 = LocalClientGlobals->m_playerOrderDistanceSortedIndex[v9];
        if ( v10 >= 0xF8u )
        {
          LODWORD(v13) = 248;
          LODWORD(v12) = v10;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 1093, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( ( sizeof( *array_counter( cgameGlob->m_playerUpdateAnimInfo ) ) + 0 ) )", "clientNum doesn't index cgameGlob->m_playerUpdateAnimInfo\n\t%i not in [0, %i)", v12, v13) )
            __debugbreak();
        }
        v11 = (char *)LocalClientGlobals + 56 * v10;
        switch ( v5 )
        {
          case CG_PLAYER_EVENT_INVENTORY_TYPE_LOCAL_PLAYER_BULLET_HIT_TARGET:
          case CG_PLAYER_EVENT_INVENTORY_TYPE_BULLET_HIT_TARGET:
            *((_DWORD *)v11 + 203467) |= 0x60000000u;
            break;
          case CG_PLAYER_EVENT_INVENTORY_TYPE_MUZZLE_FLASH_DEFERRED:
          case CG_PLAYER_EVENT_INVENTORY_TYPE_MUZZLE_FLASH:
            *((_DWORD *)v11 + 203467) |= 0x800000u;
            break;
          case CG_PLAYER_EVENT_INVENTORY_TYPE_MUZZLE_POINT:
            *((_DWORD *)v11 + 203467) |= 0xE000000u;
            break;
          case CG_PLAYER_EVENT_INVENTORY_TYPE_EJECT_BRASS:
            *((_DWORD *)v11 + 203467) |= 0x80000000;
            break;
          default:
            break;
        }
        CG_Event_Debug_AddOverBudgetCount(localClientNum, v5);
      }
      while ( 1 )
      {
        v7 = (unsigned int)(v7 + 1);
        if ( (unsigned int)v7 >= 7 )
          break;
        v6 = eventInventory->playerEventInventory[0].array[v7];
        if ( v6 )
          goto LABEL_10;
      }
      inventoryEmpty = v15;
    }
    ++inventoryEmpty;
    ++v5;
    eventInventory = (CgPlayerEventInventory *)((char *)eventInventory + 28);
    v15 = inventoryEmpty;
  }
  while ( (unsigned __int8)v5 < CG_PLAYER_EVENT_INVENTORY_TYPE_COUNT );
}

/*
==============
CG_PlayersMP_CalcCoarseCullData
==============
*/
void CG_PlayersMP_CalcCoarseCullData(const LocalClientNum_t localClientNum)
{
  unsigned int v1; 
  const dvar_t *v2; 
  __int64 v3; 
  __int64 v4; 
  cg_t *LocalClientGlobals; 
  __int64 m_clientCount; 
  float v7; 
  __int64 v8; 
  CgEntitySystem *v9; 
  __int64 v10; 
  __int64 m_agentCount; 
  unsigned int v13; 
  __int64 v14; 
  __int64 v15; 
  CgEntitySystem *v16; 
  __int64 v17; 
  __int64 v19; 
  __int64 v20; 
  vec3_t v21; 
  vec3_t outOrg; 

  v1 = 0;
  v2 = DVARBOOL_cg_playersmp_CoarseCullSystem_Enable;
  v3 = localClientNum;
  v4 = (__int64)(int)localClientNum << 6;
  *(_QWORD *)&s_coarseCullData[0].array[v4] = 0i64;
  *(_QWORD *)&s_coarseCullData[0].array[v4 + 2] = 0i64;
  *(_QWORD *)&s_coarseCullData[0].array[v4 + 4] = 0i64;
  *(_QWORD *)&s_coarseCullData[0].array[v4 + 6] = 0i64;
  *(_QWORD *)&s_coarseCullData[0].array[v4 + 8] = 0i64;
  *(_QWORD *)&s_coarseCullData[0].array[v4 + 10] = 0i64;
  *(_QWORD *)&s_coarseCullData[0].array[v4 + 12] = 0i64;
  *(_QWORD *)&s_coarseCullData[0].array[v4 + 14] = 0i64;
  *(_QWORD *)&s_coarseCullData[0].array[v4 + 16] = 0i64;
  *(_QWORD *)&s_coarseCullData[0].array[v4 + 18] = 0i64;
  *(_QWORD *)&s_coarseCullData[0].array[v4 + 20] = 0i64;
  *(_QWORD *)&s_coarseCullData[0].array[v4 + 22] = 0i64;
  *(_QWORD *)&s_coarseCullData[0].array[v4 + 24] = 0i64;
  *(_QWORD *)&s_coarseCullData[0].array[v4 + 26] = 0i64;
  *(_QWORD *)&s_coarseCullData[0].array[v4 + 28] = 0i64;
  *(_QWORD *)&s_coarseCullData[0].array[v4 + 30] = 0i64;
  *(_QWORD *)&s_coarseCullData[0].array[v4 + 32] = 0i64;
  *(_QWORD *)&s_coarseCullData[0].array[v4 + 34] = 0i64;
  *(_QWORD *)&s_coarseCullData[0].array[v4 + 36] = 0i64;
  *(_QWORD *)&s_coarseCullData[0].array[v4 + 38] = 0i64;
  *(_QWORD *)&s_coarseCullData[0].array[v4 + 40] = 0i64;
  *(_QWORD *)&s_coarseCullData[0].array[v4 + 42] = 0i64;
  *(_QWORD *)&s_coarseCullData[0].array[v4 + 44] = 0i64;
  *(_QWORD *)&s_coarseCullData[0].array[v4 + 46] = 0i64;
  *(_QWORD *)&s_coarseCullData[0].array[v4 + 48] = 0i64;
  *(_QWORD *)&s_coarseCullData[0].array[v4 + 50] = 0i64;
  *(_QWORD *)&s_coarseCullData[0].array[v4 + 52] = 0i64;
  *(_QWORD *)&s_coarseCullData[0].array[v4 + 54] = 0i64;
  *(_QWORD *)&s_coarseCullData[0].array[v4 + 56] = 0i64;
  *(_QWORD *)&s_coarseCullData[0].array[v4 + 58] = 0i64;
  *(_QWORD *)&s_coarseCullData[0].array[v4 + 60] = 0i64;
  *(_QWORD *)&s_coarseCullData[0].array[v4 + 62] = 0i64;
  if ( !v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_playersmp_CoarseCullSystem_Enable") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  if ( v2->current.enabled )
  {
    LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)v3);
    RefdefView_GetOrg(&LocalClientGlobals->refdef.view, &outOrg);
    if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 109, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
      __debugbreak();
    m_clientCount = (int)ComCharacterLimits::ms_gameData.m_clientCount;
    v7 = outOrg.v[2];
    if ( (int)ComCharacterLimits::ms_gameData.m_clientCount > 0 )
    {
      v8 = 0i64;
      do
      {
        if ( !(_BYTE)CgEntitySystem::ms_allocatedType )
        {
          LODWORD(v20) = v3;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 288, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the entity system for localClientNum %d but the entity system type is not known\n", "ms_allocatedType != GameModeType::NONE", v20) )
            __debugbreak();
        }
        if ( (unsigned int)v3 >= CgEntitySystem::ms_allocatedCount )
        {
          LODWORD(v20) = CgEntitySystem::ms_allocatedCount;
          LODWORD(v19) = v3;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 289, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v19, v20) )
            __debugbreak();
        }
        if ( !CgEntitySystem::ms_entitySystemArray[v3] )
        {
          LODWORD(v20) = v3;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 290, ASSERT_TYPE_ASSERT, "(ms_entitySystemArray[localClientNum])", "%s\n\tTrying to access unallocated entity system for localClientNum %d\n", "ms_entitySystemArray[localClientNum]", v20) )
            __debugbreak();
        }
        v9 = CgEntitySystem::ms_entitySystemArray[v3];
        if ( v1 >= 0x800 )
        {
          LODWORD(v20) = 2048;
          LODWORD(v19) = v1;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", v19, v20) )
            __debugbreak();
        }
        v10 = (__int64)&v9->m_entities[v8];
        if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 1809, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
          __debugbreak();
        if ( *(_WORD *)(v10 + 408) == 1 )
        {
          __asm { vmovsd  xmm0, qword ptr [rsp+98h+outOrg] }
          v21.v[2] = v7;
          __asm { vmovsd  [rsp+98h+var_58], xmm0 }
          CG_PlayersMP_CalcCoarseCullData_ProcessEntity((LocalClientNum_t)v3, (const centity_t *const)v10, &v21);
        }
        ++v1;
        ++v8;
        --m_clientCount;
      }
      while ( m_clientCount );
    }
    if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 116, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
      __debugbreak();
    m_agentCount = (int)ComCharacterLimits::ms_gameData.m_agentCount;
    if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 168, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
      __debugbreak();
    v13 = ComCharacterLimits::ms_gameData.m_clientCount;
    v14 = m_agentCount;
    if ( (int)m_agentCount > 0 )
    {
      v15 = (int)ComCharacterLimits::ms_gameData.m_clientCount;
      do
      {
        if ( !(_BYTE)CgEntitySystem::ms_allocatedType )
        {
          LODWORD(v20) = v3;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 288, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the entity system for localClientNum %d but the entity system type is not known\n", "ms_allocatedType != GameModeType::NONE", v20) )
            __debugbreak();
        }
        if ( (unsigned int)v3 >= CgEntitySystem::ms_allocatedCount )
        {
          LODWORD(v20) = CgEntitySystem::ms_allocatedCount;
          LODWORD(v19) = v3;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 289, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v19, v20) )
            __debugbreak();
        }
        if ( !CgEntitySystem::ms_entitySystemArray[v3] )
        {
          LODWORD(v20) = v3;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 290, ASSERT_TYPE_ASSERT, "(ms_entitySystemArray[localClientNum])", "%s\n\tTrying to access unallocated entity system for localClientNum %d\n", "ms_entitySystemArray[localClientNum]", v20) )
            __debugbreak();
        }
        v16 = CgEntitySystem::ms_entitySystemArray[v3];
        if ( v13 >= 0x800 )
        {
          LODWORD(v20) = 2048;
          LODWORD(v19) = v13;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", v19, v20) )
            __debugbreak();
        }
        v17 = (__int64)&v16->m_entities[v15];
        if ( !v17 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 1833, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
          __debugbreak();
        if ( *(_WORD *)(v17 + 408) == 17 )
        {
          __asm { vmovsd  xmm0, qword ptr [rsp+98h+outOrg] }
          v21.v[2] = v7;
          __asm { vmovsd  [rsp+98h+var_58], xmm0 }
          CG_PlayersMP_CalcCoarseCullData_ProcessEntity((LocalClientNum_t)v3, (const centity_t *const)v17, &v21);
        }
        ++v13;
        ++v15;
        --v14;
      }
      while ( v14 );
    }
  }
}

/*
==============
CG_PlayersMP_CalcCoarseCullData_ProcessEntity
==============
*/
bool CG_PlayersMP_CalcCoarseCullData_ProcessEntity(LocalClientNum_t localClientNum, const centity_t *const cent, const vec3_t *camPos)
{
  unsigned int number; 
  __int64 v7; 
  DObj *ClientDObj; 
  unsigned int viewInfoIndex; 
  unsigned int v11; 
  bool v12; 
  bool v17; 
  char v32; 
  bool v36; 
  vec3_t outOrigin; 
  Bounds bounds; 

  number = cent->nextState.number;
  v7 = localClientNum;
  ClientDObj = Com_GetClientDObj(number, localClientNum);
  _RSI = ClientDObj;
  if ( !ClientDObj || !ClientDObj->numModels )
    return 0;
  CG_GetPoseOrigin(&cent->pose, &outOrigin);
  if ( !frontEndDataOut && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 1746, ASSERT_TYPE_ASSERT, "(frontEndDataOut)", (const char *)&queryFormat, "frontEndDataOut") )
    __debugbreak();
  viewInfoIndex = frontEndDataOut->viewInfoIndex;
  v11 = cent->nextState.hudData.data & 0x3F;
  v12 = v11 != 0;
  if ( !v11 )
  {
    __asm
    {
      vmovss  xmm2, dword ptr [rsi+0C8h]
      vmovss  xmm0, dword ptr [rsp+0C8h+outOrigin]
      vmovss  xmm1, dword ptr [rsp+0C8h+outOrigin+4]
      vmovss  dword ptr [rsp+0C8h+bounds.midPoint], xmm0
      vmovss  xmm0, dword ptr [rsp+0C8h+outOrigin+8]
      vmovss  dword ptr [rsp+0C8h+bounds.midPoint+8], xmm0
      vmovss  dword ptr [rsp+0C8h+bounds.midPoint+4], xmm1
      vmovss  dword ptr [rsp+0C8h+bounds.halfSize], xmm2
      vmovss  dword ptr [rsp+0C8h+bounds.halfSize+4], xmm2
      vmovss  dword ptr [rsp+0C8h+bounds.halfSize+8], xmm2
    }
    v12 = R_Umbra_IsBoxVisible(&bounds, 0, viewInfoIndex, 0) == 1;
  }
  v17 = !v12;
  if ( !v12 )
  {
    _RBP = DVARFLT_cg_playersmp_CoarseCullSystem_SunShadowDist;
    __asm
    {
      vmovaps [rsp+0C8h+var_38], xmm6
      vmovaps [rsp+0C8h+var_48], xmm7
    }
    if ( !DVARFLT_cg_playersmp_CoarseCullSystem_SunShadowDist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_playersmp_CoarseCullSystem_SunShadowDist") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBP);
    __asm
    {
      vmovss  xmm4, dword ptr [rbp+28h]
      vmovss  xmm6, dword ptr [rsp+0C8h+outOrigin+4]
      vsubss  xmm0, xmm6, dword ptr [r12+4]
      vmovss  xmm5, dword ptr [rsp+0C8h+outOrigin]
      vsubss  xmm2, xmm5, dword ptr [r12]
      vmovss  xmm7, dword ptr [rsp+0C8h+outOrigin+8]
      vsubss  xmm3, xmm7, dword ptr [r12+8]
      vmulss  xmm1, xmm0, xmm0
      vmulss  xmm0, xmm2, xmm2
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm3, xmm3
      vaddss  xmm3, xmm2, xmm1
      vmulss  xmm0, xmm4, xmm4
      vcomiss xmm3, xmm0
    }
    if ( v32 )
    {
      __asm
      {
        vmovss  xmm0, dword ptr [rsi+0C8h]
        vmovss  dword ptr [rsp+0C8h+bounds.midPoint], xmm5
        vmovss  dword ptr [rsp+0C8h+bounds.midPoint+4], xmm6
        vmovss  dword ptr [rsp+0C8h+bounds.midPoint+8], xmm7
        vmovss  dword ptr [rsp+0C8h+bounds.halfSize], xmm0
        vmovss  dword ptr [rsp+0C8h+bounds.halfSize+4], xmm0
        vmovss  dword ptr [rsp+0C8h+bounds.halfSize+8], xmm0
      }
      v12 = R_Umbra_IsBoxVisible(&bounds, 2u, viewInfoIndex, 0) == 1;
    }
    __asm { vmovaps xmm6, [rsp+0C8h+var_38] }
    v17 = !v12;
    __asm { vmovaps xmm7, [rsp+0C8h+var_48] }
  }
  v36 = v17;
  if ( !v12 )
  {
    if ( number >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", number, 2048) )
      __debugbreak();
    s_coarseCullData[v7].array[(unsigned __int64)number >> 5] |= 0x80000000 >> (number & 0x1F);
  }
  return v36;
}

/*
==============
CG_PlayersMP_CalculateThermalTemperatureScale
==============
*/
float CG_PlayersMP_CalculateThermalTemperatureScale(const LocalClientNum_t localClientNum, const centity_t *cent, GfxSceneHudOutlineInfo *hudOutlineInfo)
{
  __int64 v7; 
  CgGlobalsMP *LocalClientGlobals; 
  const Weapon *CurrentWeaponForPlayer; 
  bool v10; 
  char v16; 
  GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32> *p_nextState; 
  vec2_t outStartAndEnd; 
  char v31; 
  void *retaddr; 

  _R11 = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [r11-48h], xmm6
    vmovaps xmmword ptr [r11-68h], xmm8
    vmovaps xmmword ptr [r11-78h], xmm9
  }
  v7 = localClientNum;
  LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals(localClientNum);
  if ( !CgWeaponMap::ms_instance[v7] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
    __debugbreak();
  CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(CgWeaponMap::ms_instance[v7], &LocalClientGlobals->predictedPlayerState);
  v10 = BG_UsingAlternate(&LocalClientGlobals->predictedPlayerState);
  BG_GetWeaponThermalPlayerFadeDistStartAndEnd(CurrentWeaponForPlayer, v10, &outStartAndEnd);
  _RBX = DCONST_DVARFLT_r_thermalPlayerFadeDistanceEnd_tweak;
  __asm
  {
    vxorps  xmm6, xmm6, xmm6
    vcvtsi2ss xmm6, xmm6, eax
  }
  if ( !DCONST_DVARFLT_r_thermalPlayerFadeDistanceEnd_tweak && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_thermalPlayerFadeDistanceEnd_tweak") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm
  {
    vmovss  xmm8, cs:__real@3f800000
    vxorps  xmm9, xmm9, xmm9
    vcomiss xmm9, dword ptr [rbx+28h]
  }
  if ( v16 )
  {
    _RBX = DCONST_DVARFLT_r_thermalPlayerFadeDistanceStart_tweak;
    __asm { vmovaps xmm6, xmm8 }
    if ( !DCONST_DVARFLT_r_thermalPlayerFadeDistanceStart_tweak && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_thermalPlayerFadeDistanceStart_tweak") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm { vmovss  xmm0, dword ptr [rbx+28h] }
    _RBX = DCONST_DVARFLT_r_thermalPlayerFadeDistanceEnd_tweak;
    __asm { vmovss  dword ptr [rsp+0E8h+outStartAndEnd], xmm0 }
    if ( !DCONST_DVARFLT_r_thermalPlayerFadeDistanceEnd_tweak && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_thermalPlayerFadeDistanceEnd_tweak") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+28h]
      vmovss  dword ptr [rsp+0E8h+outStartAndEnd+4], xmm0
    }
  }
  p_nextState = (GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32> *)&LocalClientGlobals->predictedPlayerEntity->nextState;
  if ( LocalClientGlobals->predictedPlayerEntity == (centity_t *)-400i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 1896, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(p_nextState + 3, GameModeFlagValues::ms_mpValue, 0x19u) )
  {
    __asm
    {
      vucomiss xmm6, xmm9
      vmovss  xmm0, dword ptr [rsp+0E8h+outStartAndEnd]
      vmovss  xmm1, dword ptr [rsp+0E8h+outStartAndEnd+4]
      vcomiss xmm0, xmm1
    }
  }
  __asm { vmovaps xmm0, xmm8 }
  _R11 = &v31;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-38h]
    vmovaps xmm8, xmmword ptr [r11-58h]
    vmovaps xmm9, xmmword ptr [r11-68h]
  }
  return *(float *)&_XMM0;
}

/*
==============
CG_PlayersMP_ClearPlayerHelmetDObj
==============
*/
void CG_PlayersMP_ClearPlayerHelmetDObj(LocalClientNum_t localClientNum, cg_t *const cgameGlob)
{
  if ( !cgameGlob && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 1570, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 1573, ASSERT_TYPE_ASSERT, "( Sys_IsMainThread() )", "Trying to call CG_PlayersMP_ClearPlayerHelmetDObj from non-main thread.") )
    __debugbreak();
  cg_t::FreePlayerHelmet(cgameGlob);
}

/*
==============
CG_PlayersMP_ComputePlayerDistanceAndFOV
==============
*/
void CG_PlayersMP_ComputePlayerDistanceAndFOV(const LocalClientNum_t localClientNum, const centity_t *cent, const vec3_t *viewOrigin, const vec3_t *viewDir, const int time, const bool evaluateTrajectory, CgCharacterAnimUpdateInfo *outCharacterPriority)
{
  char v11; 
  char v12; 
  vec3_t outPos; 
  __int64 v33; 
  CgTrajectory v34; 

  v33 = -2i64;
  __asm { vmovaps [rsp+98h+var_28], xmm6 }
  _RBX = outCharacterPriority;
  if ( !outCharacterPriority && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 771, ASSERT_TYPE_ASSERT, "(outCharacterPriority)", (const char *)&queryFormat, "outCharacterPriority") )
    __debugbreak();
  if ( evaluateTrajectory )
  {
    CgTrajectory::CgTrajectory(&v34, localClientNum, cent, &cent->nextState.lerp);
    BgTrajectory::SetFlags(&v34, 1);
    BgTrajectory::SetFlags(&v34, 2);
    BgTrajectory::EvaluatePosTrajectory(&v34, time, &outPos);
  }
  else
  {
    CG_GetPoseOrigin(&cent->pose, &outPos);
  }
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+98h+outPos]
    vsubss  xmm5, xmm0, dword ptr [rbp+0]
    vmovss  xmm1, dword ptr [rsp+98h+outPos+4]
    vsubss  xmm4, xmm1, dword ptr [rbp+4]
    vmovss  xmm0, dword ptr [rsp+98h+outPos+8]
    vsubss  xmm6, xmm0, dword ptr [rbp+8]
    vmulss  xmm1, xmm4, xmm4
    vmulss  xmm0, xmm5, xmm5
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm6, xmm6
    vaddss  xmm2, xmm2, xmm1
    vsqrtss xmm3, xmm2, xmm2
    vmovss  dword ptr [rbx+4], xmm3
    vcomiss xmm3, cs:__real@80000000
  }
  if ( v11 | v12 )
  {
    __asm { vmovss  xmm0, cs:__real@3f800000 }
  }
  else
  {
    __asm
    {
      vmulss  xmm1, xmm4, dword ptr [rsi+4]
      vmulss  xmm0, xmm5, dword ptr [rsi]
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm6, dword ptr [rsi+8]
      vaddss  xmm0, xmm2, xmm1
      vdivss  xmm0, xmm0, xmm3
    }
  }
  __asm { vmovss  dword ptr [rbx+8], xmm0 }
  memset(&outPos, 0, sizeof(outPos));
  __asm { vmovaps xmm6, [rsp+98h+var_28] }
}

/*
==============
CG_PlayersMP_CorpseSyncMelee
==============
*/
void CG_PlayersMP_CorpseSyncMelee(LocalClientNum_t localClientNum, const playerState_s *ps)
{
  __int16 meleeChargeEnt; 
  const entityState_t *p_nextState; 
  unsigned int eType; 
  int v11; 
  cgs_t *LocalClientStaticGlobals; 
  entityType_s v13; 
  unsigned int v14; 
  const characterInfo_t *p_ci; 
  unsigned int v16; 
  char v29; 
  unsigned int Anim; 
  unsigned int v37; 
  int v38; 
  bool v39; 
  int LegsAnimation; 
  CgWeaponMap *Instance; 
  int v42; 
  const Weapon *CurrentWeaponForPlayer; 
  CgHandler *pmoveHandler; 
  bool v45; 
  weapAnimFiles_t v46; 
  const DObj *ClientDObj; 
  XAnimTree *Tree; 
  unsigned int XAnimIndex; 
  CgStatic *LocalClientStatics; 
  const BgAnimStatic *v52; 
  SuitAnimType SuitAnimIndex; 
  int v54; 
  float fmt; 
  __int64 bIsAlternate; 
  vec3_t outOrigin; 
  __int64 v61; 
  vec3_t incomingVector; 
  char v63; 
  void *retaddr; 

  _RAX = &retaddr;
  v61 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
  }
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 3461, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  meleeChargeEnt = ps->meleeChargeEnt;
  if ( (meleeChargeEnt < 0 || (unsigned __int16)meleeChargeEnt > 0x7FEu) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 3462, ASSERT_TYPE_ASSERT, "(PM_MeleeValidChargeTarget( ps->meleeChargeEnt ))", (const char *)&queryFormat, "PM_MeleeValidChargeTarget( ps->meleeChargeEnt )") )
    __debugbreak();
  _RSI = CG_GetEntity(localClientNum, ps->meleeChargeEnt);
  if ( !_RSI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 3464, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  p_nextState = &_RSI->nextState;
  if ( _RSI == (centity_t *)-400i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 1983, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  eType = (unsigned __int16)_RSI->nextState.eType;
  if ( (unsigned __int16)eType <= 0x15u )
  {
    v11 = 2359300;
    if ( _bittest(&v11, eType) )
    {
      LocalClientStaticGlobals = CG_GetLocalClientStaticGlobals(localClientNum);
      v13 = _RSI->nextState.eType;
      if ( v13 == ET_PLAYER_CORPSE )
      {
        v14 = p_nextState->number - ComCharacterLimits::GetClientCorpseEntityIndexOffset();
        if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 130, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
          __debugbreak();
        if ( v14 >= ComCharacterLimits::ms_gameData.m_clientCorpseCount )
        {
          if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 130, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
            __debugbreak();
          LODWORD(bIsAlternate) = v14;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 3476, ASSERT_TYPE_ASSERT, "(unsigned)( corpseIndex ) < (unsigned)( ComCharacterLimits::GetClientCorpseMaxCount() )", "corpseIndex doesn't index ComCharacterLimits::GetClientCorpseMaxCount()\n\t%i not in [0, %i)", bIsAlternate, ComCharacterLimits::ms_gameData.m_clientCorpseCount) )
            __debugbreak();
        }
        if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 130, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
          __debugbreak();
        if ( (unsigned __int64)(int)ComCharacterLimits::ms_gameData.m_clientCorpseCount > 8 )
        {
          if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 130, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
            __debugbreak();
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 3477, ASSERT_TYPE_ASSERT, "( ComCharacterLimits::GetClientCorpseMaxCount() ) <= ( ( sizeof( *array_counter( cgs->corpseinfo ) ) + 0 ) )", "%s <= %s\n\t%i, %i", "ComCharacterLimits::GetClientCorpseMaxCount()", "ARRAY_COUNT( cgs->corpseinfo )", ComCharacterLimits::ms_gameData.m_clientCorpseCount, 8) )
            __debugbreak();
        }
        p_ci = &LocalClientStaticGlobals->corpseinfo[v14].ci;
LABEL_56:
        if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x16u) && ps->weapState[0].weaponState == 23 )
        {
          CG_GetPoseOrigin(&_RSI->pose, &outOrigin);
          __asm
          {
            vmovss  xmm0, dword ptr [rsp+0D8h+outOrigin]
            vsubss  xmm2, xmm0, dword ptr [r15+30h]
            vmovss  dword ptr [rsp+0D8h+incomingVector], xmm2
            vmovss  xmm0, dword ptr [rsp+0D8h+outOrigin+4]
            vsubss  xmm1, xmm0, dword ptr [r15+34h]
            vmovss  dword ptr [rsp+0D8h+incomingVector+4], xmm1
            vmovss  xmm0, dword ptr [rsp+0D8h+outOrigin+8]
            vsubss  xmm3, xmm0, dword ptr [r15+38h]
            vmovss  dword ptr [rsp+0D8h+incomingVector+8], xmm3
            vmulss  xmm1, xmm1, xmm1
            vmulss  xmm0, xmm2, xmm2
            vaddss  xmm2, xmm1, xmm0
            vmulss  xmm1, xmm3, xmm3
            vaddss  xmm6, xmm2, xmm1
            vxorps  xmm7, xmm7, xmm7
            vcomiss xmm6, xmm7
          }
          if ( v29 | v39 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 639, ASSERT_TYPE_SANITY, "( val > 0 )", (const char *)&queryFormat, "val > 0") )
            __debugbreak();
          __asm
          {
            vmovaps xmm1, xmm6
            vrsqrtss xmm3, xmm1, xmm6
            vmulss  xmm1, xmm3, dword ptr [rsp+0D8h+incomingVector]
            vmovss  dword ptr [rsp+0D8h+incomingVector], xmm1
            vmulss  xmm0, xmm3, dword ptr [rsp+0D8h+incomingVector+4]
            vmovss  dword ptr [rsp+0D8h+incomingVector+4], xmm0
            vmulss  xmm2, xmm3, dword ptr [rsp+0D8h+incomingVector+8]
            vmovss  dword ptr [rsp+0D8h+incomingVector+8], xmm2
            vmovss  xmm2, cs:COSINE_MELEE_ORIENT_ANGLE_832; cosineDividingAngle
          }
          *(double *)&_XMM0 = BG_GetCardinalYawOfIncomingVector(&_RSI->pose.angles, &incomingVector, *(float *)&_XMM2);
          __asm { vmovss  dword ptr [rsi+4Ch], xmm0 }
          if ( !p_ci->usingAnimState )
          {
            if ( PlayerASM_IsEnabled() )
            {
              Anim = BG_PlayerASM_GetAnim(p_ci, MOVEMENT);
              v37 = BG_PlayerASM_GetAnim(&_RSI->nextState, MOVEMENT);
              v38 = 0;
              v39 = Anim == v37;
            }
            else
            {
              LegsAnimation = BG_AnimationMP_GetLegsAnimation(&_RSI->nextState);
              v38 = 0;
              v39 = p_ci->playerAnim.legsAnim == LegsAnimation;
            }
            LOBYTE(v38) = !v39;
            if ( v38 )
            {
              Instance = CgWeaponMap::GetInstance(localClientNum);
              v42 = ps->weapState[0].weapAnim & 0xFFFFEFFF;
              CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(Instance, ps);
              pmoveHandler = CgHandler::getHandler(localClientNum);
              v45 = BG_UsingAlternate(ps);
              v46 = BG_MapWeaponAnimStateToAnimIndex(Instance, ps, v42, 0, CurrentWeaponForPlayer, v45, WEAPON_HAND_DEFAULT, pmoveHandler);
              *(double *)&_XMM0 = CG_GetWeaponAnimTime(localClientNum, WEAPON_HAND_DEFAULT, v46);
              __asm
              {
                vmovaps xmm6, xmm0
                vcomiss xmm0, xmm7
              }
              if ( !v29 )
              {
                ClientDObj = Com_GetClientDObj(p_nextState->number, localClientNum);
                if ( ClientDObj )
                {
                  Tree = DObjGetTree(ClientDObj);
                  if ( Tree )
                  {
                    if ( PlayerASM_IsEnabled() )
                    {
                      XAnimIndex = BG_PlayerASM_GetXAnimIndex(p_nextState, MOVEMENT);
                    }
                    else
                    {
                      LocalClientStatics = CgStatic::GetLocalClientStatics(localClientNum);
                      v52 = LocalClientStatics->GetAnimStatics(LocalClientStatics);
                      if ( !v52 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 3551, ASSERT_TYPE_ASSERT, "(bgameAnim)", (const char *)&queryFormat, "bgameAnim") )
                        __debugbreak();
                      SuitAnimIndex = BG_AnimationMP_GetSuitAnimIndex(p_nextState);
                      v54 = BG_AnimationMP_GetLegsAnimation(p_nextState);
                      XAnimIndex = BG_AnimationMP_GetXAnimIndex(v52, SuitAnimIndex, v54 & 0xFFFFEFFF);
                    }
                    __asm { vmovss  dword ptr [rsp+0D8h+fmt], xmm6 }
                    XAnimSetTime(Tree, 0, XANIM_SUBTREE_DEFAULT, XAnimIndex, fmt);
                  }
                }
              }
            }
          }
          memset(&outOrigin, 0, sizeof(outOrigin));
        }
        goto LABEL_79;
      }
      if ( v13 == ET_AGENT_CORPSE )
      {
        v16 = p_nextState->number - ComCharacterLimits::GetAgentCorpseEntityIndexOffset();
        if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 137, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
          __debugbreak();
        if ( v16 >= ComCharacterLimits::ms_gameData.m_agentCorpseCount )
        {
          if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 137, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
            __debugbreak();
          LODWORD(bIsAlternate) = v16;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 3484, ASSERT_TYPE_ASSERT, "(unsigned)( corpseIndex ) < (unsigned)( ComCharacterLimits::GetAgentCorpseMaxCount() )", "corpseIndex doesn't index ComCharacterLimits::GetAgentCorpseMaxCount()\n\t%i not in [0, %i)", bIsAlternate, ComCharacterLimits::ms_gameData.m_agentCorpseCount) )
            __debugbreak();
        }
        if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 137, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
          __debugbreak();
        if ( (unsigned __int64)(int)ComCharacterLimits::ms_gameData.m_agentCorpseCount > 8 )
        {
          if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 137, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
            __debugbreak();
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 3485, ASSERT_TYPE_ASSERT, "( ComCharacterLimits::GetAgentCorpseMaxCount() ) <= ( ( sizeof( *array_counter( cgs->agentCorpseInfo ) ) + 0 ) )", "%s <= %s\n\t%i, %i", "ComCharacterLimits::GetAgentCorpseMaxCount()", "ARRAY_COUNT( cgs->agentCorpseInfo )", ComCharacterLimits::ms_gameData.m_agentCorpseCount, 8) )
            __debugbreak();
        }
        p_ci = &LocalClientStaticGlobals->agentCorpseInfo[v16].ci;
        goto LABEL_56;
      }
      LODWORD(bIsAlternate) = v13;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 3491, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "CG_CorpseSyncMelee: Unknown corpse type: %d", bIsAlternate) )
        __debugbreak();
    }
  }
LABEL_79:
  _R11 = &v63;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
  }
}

/*
==============
CG_PlayersMP_GetHelmetModel
==============
*/
XModel *CG_PlayersMP_GetHelmetModel(LocalClientNum_t localClientNum, int entityNum)
{
  CgStatic *LocalClientStatics; 
  const clientInfo_t *v5; 
  cg_t *LocalClientGlobals; 
  const characterInfo_t *CharacterInfo; 
  const char *ActiveModel; 
  bool outIsModelLoaded; 

  LocalClientStatics = CgStatic::GetLocalClientStatics(localClientNum);
  v5 = LocalClientStatics->GetClientInfo(LocalClientStatics, entityNum);
  if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 1520, ASSERT_TYPE_ASSERT, "(clientInfo)", (const char *)&queryFormat, "clientInfo") )
    __debugbreak();
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)LocalClientStatics->m_localClientNum);
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static_inline.h", 25, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  CharacterInfo = CG_GetCharacterInfo(LocalClientGlobals, entityNum);
  if ( !CharacterInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 1523, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
    __debugbreak();
  if ( BG_Customization_IsEnabled() && (outIsModelLoaded = 0, (ActiveModel = CG_CustomizationMP_GetActiveModel(localClientNum, v5, CharacterInfo, CUSTOMIZATION_TYPE_HEAD, &outIsModelLoaded)) != NULL) && *ActiveModel && outIsModelLoaded )
    return R_RegisterModel(ActiveModel);
  else
    return 0i64;
}

/*
==============
CG_PlayersMP_IsPlayerAboveCullingThreshold
==============
*/
bool CG_PlayersMP_IsPlayerAboveCullingThreshold(const CgGlobalsMP *cgameGlob, const centity_t *cent, unsigned int threshold)
{
  int number; 
  __int64 v8; 

  if ( !cgameGlob && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 2477, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 2478, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  number = cent->nextState.number;
  if ( number >= cls.maxClients || !cgameGlob->m_playerOrderDistanceSortedCount )
    return 1;
  if ( (unsigned __int16)number >= 0xF8u )
  {
    LODWORD(v8) = cent->nextState.number;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 2494, ASSERT_TYPE_ASSERT, "(unsigned)( cent->nextState.number ) < (unsigned)( ( sizeof( *array_counter( cgameGlob->m_playerOrderLookupDistancePriority ) ) + 0 ) )", "cent->nextState.number doesn't index cgameGlob->m_playerOrderLookupDistancePriority\n\t%i not in [0, %i)", v8, 248) )
      __debugbreak();
  }
  return cgameGlob->m_playerOrderLookupDistancePriority[cent->nextState.number] <= threshold;
}

/*
==============
CG_PlayersMP_IsWeaponVisibilityTestActive
==============
*/
_BOOL8 CG_PlayersMP_IsWeaponVisibilityTestActive(const LocalClientNum_t localClientNum)
{
  return s_weaponVisActive[localClientNum];
}

/*
==============
CG_PlayersMP_LerpEmission
==============
*/
float CG_PlayersMP_LerpEmission(LocalClientNum_t localClientNum, const characterInfo_t *ci)
{
  char v22; 

  __asm
  {
    vmovaps [rsp+58h+var_18], xmm6
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, dword ptr [rdx+1470h]
    vmovaps [rsp+58h+var_28], xmm7
    vxorps  xmm7, xmm7, xmm7
    vucomiss xmm0, xmm7
  }
  CG_GetLocalClientGlobals(localClientNum);
  __asm
  {
    vmovss  xmm6, cs:__real@3f800000
    vxorps  xmm1, xmm1, xmm1
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, dword ptr [rbx+1470h]
    vcvtsi2ss xmm1, xmm1, ecx
    vdivss  xmm0, xmm1, xmm0; val
    vxorps  xmm1, xmm1, xmm1; min
    vmovaps xmm2, xmm6; max
  }
  *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
  __asm
  {
    vmovaps xmm2, xmm0
    vsubss  xmm0, xmm6, xmm0
    vmulss  xmm1, xmm0, dword ptr [rbx+1474h]
    vmulss  xmm0, xmm2, dword ptr [rbx+1478h]
    vaddss  xmm6, xmm1, xmm0
    vcomiss xmm6, xmm7
  }
  if ( v22 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 1502, ASSERT_TYPE_ASSERT, "(intensity >= 0.f)", (const char *)&queryFormat, "intensity >= 0.f") )
    __debugbreak();
  __asm
  {
    vmovaps xmm7, [rsp+58h+var_28]
    vmovaps xmm0, xmm6
    vmovaps xmm6, [rsp+58h+var_18]
  }
  return *(float *)&_XMM0;
}

/*
==============
CG_PlayersMP_PreCachePlayerAnimCalcRequests
==============
*/
void CG_PlayersMP_PreCachePlayerAnimCalcRequests(const LocalClientNum_t localClientNum, const centity_t *cent, const characterInfo_t *ci, const CgCharacterAnimUpdateInfo *animUpdateInfo, DObj *obj)
{
  unsigned int v8; 
  unsigned int v10; 
  const DObj *v13; 
  CgWeaponMap *Instance; 
  const Weapon *WeaponForEntity; 
  unsigned __int8 NextBoneIndex; 
  DObjPartBits *p_partBits; 
  int outBoneIndex[2]; 
  scr_string_t name[2]; 
  characterInfo_t *cia; 
  TagPair result; 
  DObjPartBits partBits; 
  CharacterModelType modelTypesToSearch[4]; 

  __asm { vmovaps [rsp+0F0h+var_50], xmm6 }
  outBoneIndex[1] = localClientNum;
  cia = (characterInfo_t *)ci;
  *(_QWORD *)name = obj;
  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 2610, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  if ( !animUpdateInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 2611, ASSERT_TYPE_ASSERT, "(animUpdateInfo)", (const char *)&queryFormat, "animUpdateInfo") )
    __debugbreak();
  v8 = 0;
  _RSI = &partBits;
  v10 = 0;
  _R12 = (char *)animUpdateInfo - (char *)&partBits;
  do
  {
    __asm
    {
      vlddqu  xmm6, xmmword ptr [r12+rsi+14h]
      vmovdqu xmmword ptr [rsi], xmm6
    }
    _RSI = (DObjPartBits *)((char *)_RSI + 16);
    ++v10;
  }
  while ( v10 < 2 );
  v13 = *(const DObj **)name;
  if ( (animUpdateInfo->preCacheTagFlags & 1) != 0 )
  {
    if ( cent->nextState.eType != ET_PLAYER && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 2621, ASSERT_TYPE_ASSERT, "(cent->nextState.eType == ET_PLAYER)", (const char *)&queryFormat, "cent->nextState.eType == ET_PLAYER") )
      __debugbreak();
    Instance = CgWeaponMap::GetInstance((const LocalClientNum_t)outBoneIndex[1]);
    WeaponForEntity = BG_GetWeaponForEntity(Instance, &cent->nextState);
    BG_GetWeaponFlashTagname(&result, WeaponForEntity, cent->nextState.inAltWeaponMode, 0);
    LOBYTE(outBoneIndex[0]) = -2;
    name[0] = 0;
    modelTypesToSearch[0] = CHAR_MODEL_WEAPON_HELD;
    modelTypesToSearch[1] = CHAR_MODEL_WEAPON_HELD_LEFT;
    modelTypesToSearch[2] = CHAR_MODEL_WEAPON_EXECUTION;
    TagPair::GetTagNameAndBoneIndexForCharacter(&result, v13, cia, modelTypesToSearch, 3, name, (unsigned __int8 *)outBoneIndex);
    if ( LOBYTE(outBoneIndex[0]) != 0xFE )
    {
      XAnimSetPartBit(&partBits, LOBYTE(outBoneIndex[0]));
      if ( (cent->flags & 0x10) != 0 )
      {
        NextBoneIndex = DObjGetNextBoneIndex(v13, name[0], outBoneIndex[0]);
        LOBYTE(outBoneIndex[0]) = NextBoneIndex;
        if ( NextBoneIndex != 0xFF )
          XAnimSetPartBit(&partBits, NextBoneIndex);
      }
    }
  }
  if ( (animUpdateInfo->preCacheTagFlags & 2) != 0 )
  {
    if ( cent->nextState.eType != ET_PLAYER && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 2647, ASSERT_TYPE_ASSERT, "(cent->nextState.eType == ET_PLAYER)", (const char *)&queryFormat, "cent->nextState.eType == ET_PLAYER") )
      __debugbreak();
    strcpy((char *)outBoneIndex, "þ");
    if ( DObjGetBoneAndModelIndexClient(v13, scr_const.tag_brass, (unsigned __int16 *)outBoneIndex, &outBoneIndex[1]) )
      XAnimSetPartBit(&partBits, LOWORD(outBoneIndex[0]));
    if ( DObjGetBoneAndModelIndexClient(v13, scr_const.tag_brass_2, (unsigned __int16 *)outBoneIndex, &outBoneIndex[1]) )
      XAnimSetPartBit(&partBits, LOWORD(outBoneIndex[0]));
  }
  if ( (animUpdateInfo->preCacheTagFlags & 4) != 0 )
  {
    strcpy((char *)outBoneIndex, "þ");
    if ( DObjGetBoneAndModelIndexClient(v13, scr_const.tag_weapon_left, (unsigned __int16 *)outBoneIndex, &outBoneIndex[1]) )
      XAnimSetPartBit(&partBits, LOWORD(outBoneIndex[0]));
  }
  p_partBits = &partBits;
  while ( !p_partBits->array[0] )
  {
    ++v8;
    p_partBits = (DObjPartBits *)((char *)p_partBits + 4);
    if ( v8 >= 8 )
      goto LABEL_36;
  }
  DObjLock(v13);
  CG_Pose_CalcDObjPose(&cent->pose, v13, &partBits);
  if ( !DObjSkelAreBonesUpToDate(v13, &partBits) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 2671, ASSERT_TYPE_ASSERT, "(DObjSkelAreBonesUpToDate( obj, &preCacheParts ))", (const char *)&queryFormat, "DObjSkelAreBonesUpToDate( obj, &preCacheParts )") )
    __debugbreak();
  DObjUnlock(v13);
LABEL_36:
  __asm { vmovaps xmm6, [rsp+0F0h+var_50] }
}

/*
==============
CG_PlayersMP_PreControllers
==============
*/
void CG_PlayersMP_PreControllers(LocalClientNum_t localClientNum, DObj *obj, centity_t *cent)
{
  CgGlobalsMP *LocalClientGlobals; 
  CgStatic *LocalClientStatics; 
  __int16 eType_low; 
  int clientNum; 
  cg_t *v11; 
  AnimationController Controller; 

  Sys_ProfBeginNamedEvent(0xFF00008B, "CG_PlayersMP_PreControllers");
  LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals(localClientNum);
  LocalClientStatics = CgStatic::GetLocalClientStatics(localClientNum);
  eType_low = LOBYTE(cent->nextState.eType);
  cent->pose.eType = eType_low;
  if ( eType_low != cent->nextState.eType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 2327, ASSERT_TYPE_ASSERT, "(cent->pose.eType == cent->nextState.eType)", (const char *)&queryFormat, "cent->pose.eType == cent->nextState.eType", -2i64) )
    __debugbreak();
  clientNum = cent->nextState.clientNum;
  v11 = CG_GetLocalClientGlobals((const LocalClientNum_t)LocalClientStatics->m_localClientNum);
  if ( !v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static_inline.h", 25, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  _RDI = CG_GetCharacterInfo(v11, clientNum);
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 2330, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
    __debugbreak();
  if ( _RDI->infoValid )
  {
    *(double *)&_XMM0 = BG_AnimationMP_UnpackPitch(cent->nextState.lerp.u.player.torsoPitchPacked);
    __asm { vmovss  dword ptr [rdi+0AD0h], xmm0 }
    *(double *)&_XMM0 = BG_AnimationMP_UnpackPitch(cent->nextState.lerp.u.player.waistPitchPacked);
    __asm { vmovss  dword ptr [rdi+0AD4h], xmm0 }
    if ( _RDI->usingAnimState )
    {
      if ( BG_AnimationState_LerpControllers(&cent->nextState, _RDI, LocalClientGlobals->frametime) )
      {
        Controller = BG_AnimationState_GetController(&cent->nextState);
        BG_AnimationState_SetPlayerInfo(Controller, obj, &_RDI->control, (CEntPlayerInfo *)&cent->pose.160);
      }
    }
    else
    {
      CG_Players_CopyAnimStateFromEntity(_RDI, &cent->nextState);
      BG_Player_DoControllersSetup(&cent->nextState, _RDI, LocalClientGlobals->frametime);
      BG_Player_SetPlayerInfo(obj, &_RDI->control, (CEntPlayerInfo *)&cent->pose.160);
    }
  }
  else
  {
    cent->pose.player.control = NULL;
  }
  Sys_ProfEndNamedEvent();
}

/*
==============
CG_PlayersMP_PreProcess
==============
*/
void CG_PlayersMP_PreProcess(LocalClientNum_t localClientNum, centity_t *cent, const bool isPredictedPlayer)
{
  CgStatic *LocalClientStatics; 
  int clientNum; 
  cg_t *LocalClientGlobals; 
  characterInfo_t *CharacterInfo; 
  unsigned int v9; 
  bool *attachTagIndexChanged; 
  __int64 v11; 
  signed int v12; 
  DObj *ClientDObj; 
  bool v14; 
  scr_string_t LeftHandIKTagName; 
  const DObj *v16; 
  scr_string_t tag_origin; 
  const DObj *v18; 
  __int64 v23; 
  __int64 v24; 
  unsigned int scriptableIndex[3]; 
  vec3_t v27; 
  vec3_t v28; 
  __int64 v29; 
  tmat43_t<vec3_t> v30; 
  vec3_t centa; 
  vec3_t cgameGlob; 
  __m256i outTagMat; 
  __int128 outTagMat_32; 
  tmat33_t<vec3_t> axis; 
  vec3_t v36; 

  v29 = -2i64;
  *(_QWORD *)centa.v = cent;
  scriptableIndex[0] = localClientNum;
  Sys_ProfBeginNamedEvent(0xFFFF00FF, "CG_PlayersMP_PreProcess");
  *(_QWORD *)cgameGlob.v = CgGlobalsMP::GetLocalClientGlobals(localClientNum);
  LocalClientStatics = CgStatic::GetLocalClientStatics(localClientNum);
  clientNum = cent->nextState.clientNum;
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)LocalClientStatics->m_localClientNum);
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static_inline.h", 25, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  CharacterInfo = CG_GetCharacterInfo(LocalClientGlobals, clientNum);
  if ( !CharacterInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 2202, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
    __debugbreak();
  if ( CharacterInfo->modelIndexChanged && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 2204, ASSERT_TYPE_ASSERT, "(!ci->modelIndexChanged)", "%s\n\tCG_PlayersMP_PreProcess: Body model changed without properly updating the character info model name.", "!ci->modelIndexChanged") )
    __debugbreak();
  v9 = 0;
  attachTagIndexChanged = CharacterInfo->attachTagIndexChanged;
  do
  {
    if ( *(attachTagIndexChanged - 9) )
    {
      LODWORD(v24) = v9;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 2207, ASSERT_TYPE_ASSERT, "(!ci->attachModelIndexChanged[attachIndex])", "%s\n\tCG_PlayersMP_PreProcess: Attachment model[%d] changed without properly updating the character info model name.", "!ci->attachModelIndexChanged[attachIndex]", v24) )
        __debugbreak();
    }
    if ( *attachTagIndexChanged )
    {
      LODWORD(v24) = v9;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 2208, ASSERT_TYPE_ASSERT, "(!ci->attachTagIndexChanged[attachIndex])", "%s\n\tCG_PlayersMP_PreProcess: Attachment tag[%d] changed without properly updating the character info model name.", "!ci->attachTagIndexChanged[attachIndex]", v24) )
        __debugbreak();
    }
    ++v9;
    ++attachTagIndexChanged;
  }
  while ( v9 < 9 );
  v11 = *(_QWORD *)centa.v;
  v12 = scriptableIndex[0];
  ClientDObj = Com_GetClientDObj(*(__int16 *)(*(_QWORD *)centa.v + 400i64), (LocalClientNum_t)scriptableIndex[0]);
  if ( ClientDObj )
  {
    if ( s_weaponVisActive[scriptableIndex[0]] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 2218, ASSERT_TYPE_ASSERT, "(!CG_PlayersMP_IsWeaponVisibilityTestActive( localClientNum ))", (const char *)&queryFormat, "!CG_PlayersMP_IsWeaponVisibilityTestActive( localClientNum )") )
      __debugbreak();
    if ( !isPredictedPlayer )
      CG_PlayersMP_ProcessAnimation((LocalClientNum_t)scriptableIndex[0], *(centity_t **)centa.v, 0);
    if ( !CG_ViewMP_LastStandPoseOrderFixActive((const LocalClientNum_t)scriptableIndex[0]) )
      CG_EntityMP_CalcLerpPositions((LocalClientNum_t)scriptableIndex[0], *(centity_t **)centa.v);
    v14 = CG_Player_AlignPlayerModelForScriptLink(*(cg_t **)cgameGlob.v, *(centity_t **)centa.v);
    if ( CharacterInfo->useShadowAnims && !v14 )
      CG_Players_CalcFirstPersonModelPlacement((LocalClientNum_t)scriptableIndex[0], (const playerState_s *)(*(_QWORD *)cgameGlob.v + 8i64), *(centity_t **)centa.v);
    if ( BG_IsTurretActiveFlags((const GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32> *)(*(_QWORD *)centa.v + 412i64)) )
    {
      if ( *(_QWORD *)centa.v == -412i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2072, ASSERT_TYPE_ASSERT, "(esFlags)", (const char *)&queryFormat, "esFlags") )
        __debugbreak();
      if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal((GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32> *)(*(_QWORD *)centa.v + 412i64), ACTIVE, 7u) )
      {
        if ( !Com_GameMode_SupportsFeature(WEAPON_DROPPING_LADDER_CLIMB) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2076, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::TURRET_REMOTE_CONTROL ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::TURRET_REMOTE_CONTROL )") )
          __debugbreak();
      }
      else
      {
        CG_PlayerTurretPositionAndBlend((LocalClientNum_t)scriptableIndex[0], *(centity_t **)centa.v);
      }
    }
    if ( (CharacterInfo->carryObjectFlags & 1) == 0 )
      goto LABEL_45;
    LeftHandIKTagName = BG_CarryObject_GetLeftHandIKTagName();
    v16 = Com_GetClientDObj(*(__int16 *)(*(_QWORD *)centa.v + 400i64), (LocalClientNum_t)scriptableIndex[0]);
    if ( CG_DObjGetWorldTagMatrix(*(const cpose_t **)centa.v, v16, LeftHandIKTagName, (tmat33_t<vec3_t> *)&outTagMat, (vec3_t *)((char *)&outTagMat_32 + 4)) )
    {
      CG_GetPoseOrigin(*(const cpose_t **)centa.v, &centa);
      tag_origin = scr_const.tag_origin;
      v18 = Com_GetClientDObj(*(__int16 *)(v11 + 400), (LocalClientNum_t)scriptableIndex[0]);
      CG_DObjGetWorldTagMatrix((const cpose_t *)v11, v18, tag_origin, &axis, &v36);
      AxisToAngles(&axis, &cgameGlob);
      __asm
      {
        vmovups ymm0, ymmword ptr [rbp+70h+outTagMat]
        vmovups [rbp+70h+var_F0], ymm0
        vmovups xmm1, xmmword ptr [rbp-10h]
        vmovups [rbp+70h+var_D0], xmm1
        vmovsd  xmm0, [rbp+70h+cgameGlob]
        vmovsd  [rsp+170h+var_120], xmm0
      }
      v27.v[2] = cgameGlob.v[2];
      __asm
      {
        vmovsd  xmm0, [rbp+70h+cent]
        vmovsd  [rsp+170h+var_110], xmm0
      }
      v28.v[2] = centa.v[2];
      BG_CarryObject_SetCharacterIKInfo(&v28, &v27, &v30, CharacterInfo);
      if ( CharacterInfo->carryObjectIKEnabled )
        goto LABEL_45;
      CharacterInfo->carryObjectIKEnabled = 1;
    }
    else
    {
      if ( !CharacterInfo->carryObjectIKEnabled )
        goto LABEL_45;
      CharacterInfo->carryObjectIKEnabled = 0;
    }
    CharacterInfo->dobjDirty = 1;
LABEL_45:
    CG_GameInterface_PlayersMP_PreProcess((LocalClientNum_t)v12, (centity_t *)v11);
    CG_PlayersMP_PreControllers((LocalClientNum_t)v12, ClientDObj, (centity_t *)v11);
    if ( ScriptableCl_IsScriptableEntity((const LocalClientNum_t)v12, (const centity_t *)v11) )
    {
      if ( ScriptableCl_GetIndexForEntity((const LocalClientNum_t)v12, (const centity_t *)v11, scriptableIndex) )
      {
        ScriptableCl_UpdatePosition((const LocalClientNum_t)v12, scriptableIndex[0], (const centity_t *const)v11);
        ScriptableCl_UpdateSharedInstance((const LocalClientNum_t)v12, scriptableIndex[0], *(__int16 *)(v11 + 400));
      }
      else
      {
        LODWORD(v24) = *(__int16 *)(v11 + 400);
        LODWORD(v23) = *(__int16 *)(v11 + 408);
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 2304, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Entity has a reserved scriptable but cannot resolve the index for that scriptable. Entity Type:%d, Entity Number:%d", v23, v24) )
          __debugbreak();
      }
    }
  }
  Sys_ProfEndNamedEvent();
}

/*
==============
CG_PlayersMP_ProcessAnimation
==============
*/
void CG_PlayersMP_ProcessAnimation(LocalClientNum_t localClientNum, centity_t *cent, const bool isPredictedPlayer)
{
  CgStatic *LocalClientStatics; 
  int clientNum; 
  cg_t *LocalClientGlobals; 
  DObj *ClientDObj; 
  int skipEntity; 
  char v39; 
  CgWeaponMap *Instance; 
  BOOL v41; 
  const dvar_t *v42; 
  bool v43; 
  CgWeaponMap *v44; 
  CgHandler *Handler; 
  vec3_t trBase; 
  vec3_t end; 
  vec3_t outOrigin; 
  trace_t results; 
  char v54; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm8
  }
  Sys_ProfBeginNamedEvent(0xFF808080, "CG_PlayersMP_ProcessAnimation");
  _RDI = CgGlobalsMP::GetLocalClientGlobals(localClientNum);
  LocalClientStatics = CgStatic::GetLocalClientStatics(localClientNum);
  clientNum = cent->nextState.clientNum;
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)LocalClientStatics->m_localClientNum);
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static_inline.h", 25, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  _RBX = CG_GetCharacterInfo(LocalClientGlobals, clientNum);
  if ( (_RBX->usingAnimState != 0) != (cent->nextState.animInfo.animData & 1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 2050, ASSERT_TYPE_ASSERT, "(!!ci->usingAnimState == !!es->animInfo.selectAnim.usingAnimState)", (const char *)&queryFormat, "!!ci->usingAnimState == !!es->animInfo.selectAnim.usingAnimState") )
    __debugbreak();
  ClientDObj = Com_GetClientDObj(cent->nextState.number, localClientNum);
  if ( ClientDObj )
  {
    _RBX->zeroGravity = BG_IsPlayerZeroGFloating(&_RDI->predictedPlayerState);
    if ( _RBX->usingAnimState )
    {
      if ( (cent->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 2065, ASSERT_TYPE_ASSERT, "(CENextValid( cent ))", (const char *)&queryFormat, "CENextValid( cent )") )
        __debugbreak();
      __asm { vmovss  xmm7, dword ptr [rdi+65E0h] }
      *(double *)&_XMM0 = BG_AnimationMP_UnpackPitch(cent->nextState.lerp.u.player.torsoPitchPacked);
      __asm { vmovaps xmm6, xmm0 }
      BG_AnimationMP_UnpackPitch(cent->prevState.u.player.torsoPitchPacked);
      __asm
      {
        vmovss  xmm8, cs:__real@3f800000
        vsubss  xmm1, xmm8, xmm7
        vmulss  xmm2, xmm1, xmm0
        vmulss  xmm0, xmm7, xmm6
        vaddss  xmm2, xmm2, xmm0
        vmovss  dword ptr [rbx+0AD0h], xmm2
        vmovss  xmm7, dword ptr [rdi+65E0h]
      }
      *(double *)&_XMM0 = BG_AnimationMP_UnpackPitch(cent->nextState.lerp.u.player.waistPitchPacked);
      __asm { vmovaps xmm6, xmm0 }
      BG_AnimationMP_UnpackPitch(cent->prevState.u.player.waistPitchPacked);
      __asm
      {
        vsubss  xmm1, xmm8, xmm7
        vmulss  xmm2, xmm1, xmm0
        vmulss  xmm0, xmm7, xmm6
        vaddss  xmm2, xmm2, xmm0
        vmovss  dword ptr [rbx+0AD4h], xmm2
        vmovss  xmm0, dword ptr [rbx+0AD0h]; pitch
      }
      *(double *)&_XMM0 = BG_AnimationMP_QuantizePitch(*(float *)&_XMM0);
      __asm
      {
        vmovss  dword ptr [rbx+0AD0h], xmm0
        vmovss  xmm0, dword ptr [rbx+0AD4h]; pitch
      }
      *(double *)&_XMM0 = BG_AnimationMP_QuantizePitch(*(float *)&_XMM0);
      __asm { vmovss  dword ptr [rbx+0AD4h], xmm0 }
      skipEntity = cent->nextState.number;
      Trajectory_GetTrBase(&cent->nextState.lerp.pos, &trBase);
      __asm
      {
        vmovss  xmm0, dword ptr [rsp+178h+trBase+8]
        vaddss  xmm2, xmm0, cs:__real@41400000
        vmovss  dword ptr [rsp+178h+trBase+8], xmm2
        vmovss  xmm0, dword ptr [rsp+178h+trBase]
        vmovss  dword ptr [rsp+178h+end], xmm0
        vmovss  xmm1, dword ptr [rsp+178h+trBase+4]
        vmovss  dword ptr [rsp+178h+end+4], xmm1
        vsubss  xmm0, xmm2, cs:__real@41c00000
        vmovss  dword ptr [rsp+178h+end+8], xmm0
      }
      CG_EntityWorkers_AcquireReadLock_Physics(BASE);
      PhysicsQuery_LegacyTrace((Physics_WorldId)(3 * localClientNum + 2), &results, &trBase, &end, &bounds_origin, skipEntity, 0, 33685521, 1, NULL, All);
      CG_EntityWorkers_ReleaseReadLock_Physics(BASE);
      __asm
      {
        vmovss  xmm0, [rsp+178h+results.fraction]
        vcomiss xmm0, xmm8
      }
      if ( v39 )
        cent->surfaceType = (results.surfaceFlags >> 19) & 0x3F;
      else
        cent->surfaceType = 0;
      memset(&trBase, 0, sizeof(trBase));
      BG_AIAnim_UpdateExecutionParameter(ClientDObj, _RBX);
      CG_AIAnim_UpdateGroundTurretParameter(localClientNum, ClientDObj, _RBX);
      BG_AnimationState_Update(&cent->nextState, _RBX, 0);
      goto LABEL_37;
    }
    *(double *)&_XMM0 = BG_AnimationMP_UnpackPitch(cent->nextState.lerp.u.player.torsoPitchPacked);
    __asm { vmovss  dword ptr [rbx+0AD0h], xmm0 }
    *(double *)&_XMM0 = BG_AnimationMP_UnpackPitch(cent->nextState.lerp.u.player.waistPitchPacked);
    __asm { vmovss  dword ptr [rbx+0AD4h], xmm0 }
    v41 = 0;
    if ( isPredictedPlayer && !_RDI->renderingThirdPerson )
    {
      Instance = CgWeaponMap::GetInstance(localClientNum);
      if ( !BG_IsThirdPersonMode(Instance, &_RDI->predictedPlayerState) )
        v41 = 1;
    }
    _RBX->isFirstPerson = v41;
    CG_Players_CopyAnimStateFromEntity(_RBX, &cent->nextState);
    if ( isPredictedPlayer || bitarray_base<bitarray<224>>::testBit(&_RDI->m_playerUpdateAnimBits, cent->nextState.number) )
    {
      if ( PlayerASM_IsEnabled() )
      {
        _RBX->playerASMLocomotion.instantBlend = 0;
        if ( Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_cg_playerAnimUpdateInstantBlend, "cg_playerAnimUpdateInstantBlend") )
          _RBX->playerASMLocomotion.instantBlend = bitarray_base<bitarray<224>>::testBit(&_RDI->m_playerUpdateLRUAnimBits, cent->nextState.number);
        if ( !CG_PredictPlayerASMState(localClientNum, cent) )
          _RBX->legsPredictingForThisAnim = 0;
      }
      else
      {
        CG_PredictCharacterState(localClientNum, cent);
      }
      CG_GetPoseOrigin(&cent->pose, &outOrigin);
      CGMovingPlatformClient::GetMoverInfoFromClientEntity(localClientNum, cent, &trBase, &end);
      v44 = CgWeaponMap::GetInstance(localClientNum);
      Handler = CgHandler::getHandler(localClientNum);
      BG_PlayerAnimation(Handler, v44, &cent->nextState, _RBX, &outOrigin, &trBase, &end);
    }
    else
    {
      v42 = DVARBOOL_cg_playerAnimReuseSkelPose;
      if ( !DVARBOOL_cg_playerAnimReuseSkelPose && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_playerAnimReuseSkelPose") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v42);
      if ( v42->current.enabled )
      {
        v43 = 1;
LABEL_36:
        cent->pose.reusePreviousSkelPose = v43;
LABEL_37:
        if ( CG_Cloth_Entity_HasClothBinding(localClientNum, cent->nextState.number) )
          CG_Cloth_Entity_ActivateClothNode(localClientNum, ClientDObj);
        goto LABEL_39;
      }
    }
    v43 = 0;
    goto LABEL_36;
  }
LABEL_39:
  Sys_ProfEndNamedEvent();
  _R11 = &v54;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
  }
}

/*
==============
CG_PlayersMP_ProcessAnimationCmd
==============
*/
void CG_PlayersMP_ProcessAnimationCmd(const void *const cmdData)
{
  bool v1; 
  __int64 v3; 
  __int64 v4; 
  __int64 v5; 
  __int64 v6; 
  __int64 v7; 
  __int64 v8; 
  __int64 v9; 
  __int64 v10; 
  float v11; 

  v1 = (_BYTE)CgStatic::ms_allocatedType == NONE;
  v3 = tls_index;
  v4 = *((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index);
  v5 = *(_QWORD *)(v4 + 272);
  *(_QWORD *)(v4 + 272) = 0i64;
  v6 = *(int *)cmdData;
  if ( v1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static.h", 85, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to set the active bgs to the client game static but the allocated type is not known.", "ms_allocatedType != GameModeType::NONE") )
    __debugbreak();
  if ( (unsigned int)v6 >= LODWORD(CgStatic::ms_allocatedCount) )
  {
    v11 = CgStatic::ms_allocatedCount;
    LODWORD(v9) = v6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static.h", 86, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v9, v11) )
      __debugbreak();
  }
  if ( !CgStatic::ms_cgameStaticsArray[v6] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static.h", 87, ASSERT_TYPE_ASSERT, "(ms_cgameStaticsArray[localClientNum] != 0)", "%s\n\tTrying to set the active bgs to the client game static but the client game static has not been allocated", "ms_cgameStaticsArray[localClientNum] != NULL") )
    __debugbreak();
  *(_QWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + v3) + 272i64) = CgStatic::ms_cgameStaticsArray[v6];
  if ( CG_PlayersMP_ShouldProcessLocalPlayerEntity(*(LocalClientNum_t *)cmdData) && Com_GetClientDObj(*(__int16 *)(*((_QWORD *)cmdData + 1) + 400i64), (LocalClientNum_t)*(_DWORD *)cmdData) )
    CG_PlayersMP_ProcessAnimation(*(LocalClientNum_t *)cmdData, *((centity_t **)cmdData + 1), *((_BYTE *)cmdData + 16));
  v7 = *(int *)cmdData;
  if ( !(_BYTE)CgStatic::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static.h", 96, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to clear the active bgs from the client game statics but the allocated type is not known.", "ms_allocatedType != GameModeType::NONE") )
    __debugbreak();
  if ( (unsigned int)v7 >= LODWORD(CgStatic::ms_allocatedCount) )
  {
    *(float *)&v10 = CgStatic::ms_allocatedCount;
    LODWORD(v9) = v7;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static.h", 97, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v9, v10) )
      __debugbreak();
  }
  if ( !CgStatic::ms_cgameStaticsArray[v7] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static.h", 98, ASSERT_TYPE_ASSERT, "(ms_cgameStaticsArray[localClientNum] != 0)", "%s\n\tTrying to clear the active bgs from the client game statics but the client game static has not been allocated", "ms_cgameStaticsArray[localClientNum] != NULL") )
    __debugbreak();
  v8 = *((_QWORD *)NtCurrentTeb()->Reserved1[11] + v3);
  if ( *(CgStatic **)(v8 + 272) != CgStatic::ms_cgameStaticsArray[v7] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static.h", 99, ASSERT_TYPE_ASSERT, "( ( ms_activeBgs == ms_cgameStaticsArray[localClientNum] ) )", "( ms_activeBgs ) = %p", *(const void **)(v8 + 272)) )
    __debugbreak();
  *(_QWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + v3) + 272i64) = v5;
}

/*
==============
CG_PlayersMP_ProcessCorpse
==============
*/
void CG_PlayersMP_ProcessCorpse(LocalClientNum_t localClientNum, centity_t *cent)
{
  __int64 v4; 
  entityState_t *p_nextState; 
  unsigned int v6; 
  cgs_t *LocalClientStaticGlobals; 
  __int64 v8; 
  const dvar_t *v10; 
  DObj *ClientDObj; 
  CgWeaponMap *Instance; 
  CgGlobalsMP *LocalClientGlobals; 
  const DObj *v16; 
  DObj *v17; 
  bool v18; 
  unsigned int v19; 
  const centity_t *v20; 
  CgWeaponMap *v21; 
  CgHandler *Handler; 
  bool v25; 
  CgStatic *LocalClientStatics; 
  const characterInfo_t *CharacterInfo; 
  unsigned int v29; 
  __int64 v30; 
  unsigned int number; 
  __int64 attachIgnoreCollision; 
  __int64 attachIgnoreCollisiona; 
  __int64 attachIgnoreCollisionb; 
  vec3_t *movingPlatformAngles; 
  vec3_t *movingPlatformAnglesa; 
  float v40; 
  bool isOverHalfWayFaded; 
  bool isFadeActive; 
  bool isFadeComplete; 
  unsigned int scriptableIndex; 
  vec3_t v45; 
  unsigned int v46; 
  unsigned int v47; 
  cpose_t *pose; 
  CgGlobalsMP *v49; 
  __int64 v50; 
  GfxSceneHudOutlineInfo v51; 
  shaderOverride_t v52; 
  vec3_t outOrigin; 

  v50 = -2i64;
  pose = &cent->pose;
  v4 = localClientNum;
  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 3597, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( s_weaponVisActive[v4] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 3598, ASSERT_TYPE_ASSERT, "(!CG_PlayersMP_IsWeaponVisibilityTestActive( localClientNum ))", (const char *)&queryFormat, "!CG_PlayersMP_IsWeaponVisibilityTestActive( localClientNum )") )
    __debugbreak();
  Sys_ProfBeginNamedEvent(0xFF550099, "CG_PlayersMP_ProcessCorpse");
  p_nextState = &cent->nextState;
  if ( !GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&cent->nextState.lerp.eFlags, ACTIVE, 0x11u) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 3603, ASSERT_TYPE_ASSERT, "(es->lerp.eFlags.TestFlag( EntityStateFlagsCommon::DEAD ))", (const char *)&queryFormat, "es->lerp.eFlags.TestFlag( EntityStateFlagsCommon::DEAD )") )
    __debugbreak();
  if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 152, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
    __debugbreak();
  v6 = p_nextState->number - ComCharacterLimits::ms_gameData.m_characterCount;
  v46 = v6;
  if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 130, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
    __debugbreak();
  if ( v6 >= ComCharacterLimits::ms_gameData.m_clientCorpseCount )
  {
    if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 130, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
      __debugbreak();
    LODWORD(attachIgnoreCollision) = v6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 3606, ASSERT_TYPE_ASSERT, "(unsigned)( corpseIndex ) < (unsigned)( ComCharacterLimits::GetClientCorpseMaxCount() )", "corpseIndex doesn't index ComCharacterLimits::GetClientCorpseMaxCount()\n\t%i not in [0, %i)", attachIgnoreCollision, ComCharacterLimits::ms_gameData.m_clientCorpseCount) )
      __debugbreak();
  }
  LocalClientStaticGlobals = CG_GetLocalClientStaticGlobals((const LocalClientNum_t)v4);
  if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 130, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
    __debugbreak();
  if ( (unsigned __int64)(int)ComCharacterLimits::ms_gameData.m_clientCorpseCount > 8 )
  {
    if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 130, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 3610, ASSERT_TYPE_ASSERT, "( ComCharacterLimits::GetClientCorpseMaxCount() ) <= ( ( sizeof( *array_counter( cgs->corpseinfo ) ) + 0 ) )", "%s <= %s\n\t%i, %i", "ComCharacterLimits::GetClientCorpseMaxCount()", "ARRAY_COUNT( cgs->corpseinfo )", ComCharacterLimits::ms_gameData.m_clientCorpseCount, 8) )
      __debugbreak();
  }
  v8 = (int)v6;
  _RSI = (__int64)&LocalClientStaticGlobals->corpseinfo[v8].ci;
  v10 = DVARBOOL_cg_customizationStreaming_highPriorityCorpses;
  if ( !DVARBOOL_cg_customizationStreaming_highPriorityCorpses && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_customizationStreaming_highPriorityCorpses") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v10);
  if ( v10->current.enabled && LocalClientStaticGlobals->corpseinfo[v8].sortIndex < 2u )
  {
    _RDI = DCONST_DVARFLT_cg_highPriorityCorpseDistanceSqMultiplier;
    if ( !DCONST_DVARFLT_cg_highPriorityCorpseDistanceSqMultiplier && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_highPriorityCorpseDistanceSqMultiplier") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RDI);
    __asm { vmovss  xmm2, dword ptr [rdi+28h] }
  }
  else
  {
    __asm { vmovss  xmm2, cs:__real@3f800000; distanceSqMultiplier }
  }
  CG_DistanceCacheMP_AddPlayerCorpse((const LocalClientNum_t)v4, p_nextState->number, *(const float *)&_XMM2);
  if ( (cent->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 3565, ASSERT_TYPE_ASSERT, "(CENextValid( cent ))", (const char *)&queryFormat, "CENextValid( cent )") )
    __debugbreak();
  if ( (cgs_t *)((char *)LocalClientStaticGlobals + v8 * 26904) == (cgs_t *)-80i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 3566, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
    __debugbreak();
  if ( !(unsigned int)CG_CheckValidPlayerCharacterInfoModels((LocalClientNum_t)v4, &LocalClientStaticGlobals->corpseinfo[v8].ci) )
  {
    Com_PrintWarning(14, "WARNING: Disabling corpse for entity %u, corpse has invalid models.\n", (unsigned int)p_nextState->number);
    FX_Dismemberment_Clear((LocalClientNum_t)v4, *(_DWORD *)_RSI);
    LocalClientStaticGlobals->corpseinfo[v8].ci.infoValid = 0;
  }
  if ( CgGlobalsMP::GetLocalClientGlobals((const LocalClientNum_t)v4)->m_usePlayerAnimation )
  {
    ClientDObj = Com_GetClientDObj(p_nextState->number, (LocalClientNum_t)v4);
    Instance = CgWeaponMap::GetInstance((const LocalClientNum_t)v4);
    BG_AnimationMP_UpdatePlayerDObj((LocalClientNum_t)v4, ClientDObj, Instance, p_nextState, &LocalClientStaticGlobals->corpseinfo[v8].ci, 0);
  }
  LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals((const LocalClientNum_t)v4);
  v49 = LocalClientGlobals;
  v16 = Com_GetClientDObj(p_nextState->number, (LocalClientNum_t)v4);
  v17 = (DObj *)v16;
  if ( v16 )
  {
    if ( (LocalClientStaticGlobals->corpseinfo[v8].flag & 0x10) != 0 )
    {
      XAnimBonePhysicsRestoreState(v16, &LocalClientStaticGlobals->corpseinfo[v8].transferredDynamicBonesState);
      LocalClientStaticGlobals->corpseinfo[v8].flag &= ~0x10u;
    }
    XAnimBonePhysicsSetSettlingEnabled(v17, 0);
    if ( !CG_Entity_IsNoDraw((const LocalClientNum_t)v4, p_nextState, NULL) )
    {
      CG_CorpseFade_ApplyDissolveMaterial((const LocalClientNum_t)v4, v17, p_nextState->number, &isFadeActive, &isFadeComplete, &isOverHalfWayFaded);
      v17->flags |= 0x40u;
      v18 = FX_Dismemberment_ProcessEntity((LocalClientNum_t)v4, v17, isOverHalfWayFaded);
      v19 = 0;
      if ( v18 )
        v19 = 128;
      v47 = v19;
      if ( !(unsigned int)CG_CheckValidPlayerCharacterInfoModels((LocalClientNum_t)v4, &LocalClientStaticGlobals->corpseinfo[v8].ci) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 3675, ASSERT_TYPE_ASSERT, "(CG_CheckValidPlayerCharacterInfoModels( localClientNum, ci ))", (const char *)&queryFormat, "CG_CheckValidPlayerCharacterInfoModels( localClientNum, ci )") )
        __debugbreak();
      *(_DWORD *)_RSI = p_nextState->clientNum;
      CG_Players_CopyAnimStateFromEntity((characterInfo_t *)_RSI, p_nextState);
      *(double *)&_XMM0 = BG_AnimationMP_UnpackPitch(p_nextState->lerp.u.player.torsoPitchPacked);
      __asm { vmovss  dword ptr [rsi+0AD0h], xmm0 }
      *(double *)&_XMM0 = BG_AnimationMP_UnpackPitch(p_nextState->lerp.u.player.waistPitchPacked);
      __asm { vmovss  dword ptr [rsi+0AD4h], xmm0 }
      CG_Players_SetUseShadowAnims((characterInfo_t *const)_RSI, 0);
      LocalClientStaticGlobals->corpseinfo[v8].ci.zeroGravity = BG_IsPlayerZeroGFloating(&LocalClientGlobals->predictedPlayerState);
      v20 = (const centity_t *)pose;
      CG_GetPoseOrigin(pose, &outOrigin);
      v21 = CgWeaponMap::GetInstance((const LocalClientNum_t)v4);
      Handler = CgHandler::getHandler((LocalClientNum_t)v4);
      BG_PlayerAnimation(Handler, v21, p_nextState, (characterInfo_t *)_RSI, &outOrigin, &vec3_origin, &vec3_origin);
      if ( CG_Cloth_Entity_HasClothBinding((const LocalClientNum_t)v4, p_nextState->number) )
        CG_Cloth_Entity_ActivateClothNode((const LocalClientNum_t)v4, v17);
      CG_GetPoseOrigin(&v20->pose, &v45);
      if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&p_nextState->lerp.eFlags, ACTIVE, 4u) )
      {
        __asm
        {
          vmovss  xmm0, dword ptr [rsp+140h+var_E8+8]
          vaddss  xmm1, xmm0, cs:__real@41400000
        }
      }
      else
      {
        v25 = GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&p_nextState->lerp.eFlags, ACTIVE, 3u);
        __asm { vmovss  xmm0, dword ptr [rsp+140h+var_E8+8] }
        if ( v25 )
          __asm { vaddss  xmm1, xmm0, cs:__real@41a00000 }
        else
          __asm { vaddss  xmm1, xmm0, cs:__real@42000000 }
      }
      __asm { vmovss  dword ptr [rsp+140h+var_E8+8], xmm1 }
      if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagStrict(&p_nextState->lerp.eFlags, (EntityStateFlagsMP)27) )
      {
        LocalClientStatics = CgStatic::GetLocalClientStatics((const LocalClientNum_t)v4);
        CharacterInfo = CgStatic::GetCharacterInfo(LocalClientStatics, *(_DWORD *)_RSI);
        if ( !CharacterInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 3718, ASSERT_TYPE_ASSERT, "(ciOld)", (const char *)&queryFormat, "ciOld") )
          __debugbreak();
        *(_DWORD *)(_RSI + 5232) = 3000;
        *(_DWORD *)(_RSI + 5228) = CG_GetLocalClientGlobals((const LocalClientNum_t)v4)->time;
        *(double *)&_XMM0 = CG_PlayersMP_LerpEmission((LocalClientNum_t)v4, CharacterInfo);
        __asm { vmovss  dword ptr [rsi+1474h], xmm0 }
        *(_DWORD *)(_RSI + 5240) = 0;
      }
      *(double *)&_XMM0 = CG_PlayersMP_LerpEmission((LocalClientNum_t)v4, (const characterInfo_t *)_RSI);
      __asm { vmulss  xmm0, xmm0, cs:__real@437f0000; val }
      v29 = float_to_integral_cast<unsigned char,float>(*(float *)&_XMM0) << 24;
      if ( ScriptableCl_GetIndexForEntity((const LocalClientNum_t)v4, v20, &scriptableIndex) )
      {
        ScriptableCl_UpdatePosition((const LocalClientNum_t)v4, scriptableIndex, v20);
        ScriptableCl_UpdateSharedInstance((const LocalClientNum_t)v4, scriptableIndex, p_nextState->number);
      }
      v30 = (int)v46;
      if ( v46 >= 8 )
      {
        LODWORD(movingPlatformAngles) = 8;
        LODWORD(attachIgnoreCollisiona) = v46;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 3737, ASSERT_TYPE_ASSERT, "(unsigned)( corpseIndex ) < (unsigned)( ( sizeof( *array_counter( cgameGlob->m_playerCorpseUpdateAnimInfoValid ) ) + 0 ) )", "corpseIndex doesn't index cgameGlob->m_playerCorpseUpdateAnimInfoValid\n\t%i not in [0, %i)", attachIgnoreCollisiona, movingPlatformAngles) )
          __debugbreak();
        LODWORD(movingPlatformAnglesa) = 8;
        LODWORD(attachIgnoreCollisionb) = v30;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 3738, ASSERT_TYPE_ASSERT, "(unsigned)( corpseIndex ) < (unsigned)( ( sizeof( *array_counter( cgameGlob->m_playerCorpseUpdateAnimInfo ) ) + 0 ) )", "corpseIndex doesn't index cgameGlob->m_playerCorpseUpdateAnimInfo\n\t%i not in [0, %i)", attachIgnoreCollisionb, movingPlatformAnglesa) )
          __debugbreak();
      }
      if ( v49->m_playerCorpseUpdateAnimInfoValid[v30] )
        CG_PlayersMP_PreCachePlayerAnimCalcRequests((const LocalClientNum_t)v4, v20, (const characterInfo_t *)_RSI, &v49->m_playerCorpseUpdateAnimInfo[v30], v17);
      if ( !isFadeActive )
      {
        DObjFreeMaterialOverrides(v17);
        DObjFreeMaterialData(v17);
      }
      if ( !isFadeComplete )
      {
        number = p_nextState->number;
        __asm
        {
          vmovups ymm0, ymmword ptr cs:NULL_HUDOUTLINE_INFO_9.color
          vmovups [rbp+40h+var_B0], ymm0
        }
        v51.characterEVOffset = NULL_HUDOUTLINE_INFO_9.characterEVOffset;
        __asm
        {
          vmovups ymm0, ymmword ptr cs:NULL_SHADER_OVERRIDE_9.scrollRateX
          vmovups [rbp+40h+var_80], ymm0
        }
        v52.atlasTime = NULL_SHADER_OVERRIDE_9.atlasTime;
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vmovss  [rsp+140h+var_100], xmm0
        }
        CG_Entity_AddDObjToScene((const LocalClientNum_t)v4, v17, &v20->pose, number, v47, &v52, &v51, &v45, v40, v29);
      }
    }
  }
  else
  {
    LocalClientStaticGlobals->corpseinfo[v8].flag &= ~0x10u;
  }
  Sys_ProfEndNamedEvent();
  memset(&v45, 0, sizeof(v45));
}

/*
==============
CG_PlayersMP_ProcessLocalPlayerEntity
==============
*/
void CG_PlayersMP_ProcessLocalPlayerEntity(LocalClientNum_t localClientNum)
{
  CgGlobalsMP *LocalClientGlobals; 
  int clientNum; 
  DObj *ClientDObj; 
  CgWeaponMap *Instance; 
  CgHandler *Handler; 
  bool v7; 
  const centity_t *Entity; 
  int frametime; 

  LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals(localClientNum);
  clientNum = LocalClientGlobals->predictedPlayerState.clientNum;
  ClientDObj = Com_GetClientDObj(clientNum, localClientNum);
  if ( ClientDObj )
  {
    v7 = 1;
    if ( !LocalClientGlobals->renderingThirdPerson )
    {
      Instance = CgWeaponMap::GetInstance(localClientNum);
      if ( !BG_IsThirdPersonMode(Instance, &LocalClientGlobals->predictedPlayerState) )
      {
        Handler = CgHandler::getHandler(localClientNum);
        if ( !BG_ShouldHandleThirdPersonVehicleCamera(&LocalClientGlobals->predictedPlayerState, Handler) )
          v7 = 0;
      }
    }
    CG_EntityMP_ResetDObjNoteTracks();
    CG_EntityMP_DObjUpdateInfo((const int)&frametime, (DObj *)(unsigned int)LocalClientGlobals->frametime, (bool)ClientDObj, v7);
    Entity = CG_GetEntity((const LocalClientNum_t)LocalClientGlobals->localClientNum, clientNum);
    if ( (_WORD)frametime != 0xFFFF && CG_EntityMP_IsValidNotetrackEnt(localClientNum, Entity, clientNum) )
      CG_EntityMP_ProcessEntityNoteTracks(LocalClientGlobals, ClientDObj, clientNum, (const XAnimNotifyHandle)frametime);
  }
  CG_PlayersMP_PreProcess(localClientNum, LocalClientGlobals->predictedPlayerEntity, 1);
  CG_EntityMP_ProcessEntity(localClientNum, LocalClientGlobals->predictedPlayerEntity);
  CG_DrawDebug_DrawCharacterHitBox(localClientNum, LocalClientGlobals->predictedPlayerState.clientNum);
  CG_DrawDebug_DrawLineOfSightLatency(localClientNum);
}

/*
==============
CG_PlayersMP_ProcessPlayer
==============
*/

void __fastcall CG_PlayersMP_ProcessPlayer(LocalClientNum_t localClientNum, centity_t *cent, double _XMM2_8, double _XMM3_8)
{
  __int64 v11; 
  entityState_t *p_nextState; 
  entityType_s eType; 
  bool IsPlayerEntityNumber; 
  unsigned int v18; 
  CgStatic *LocalClientStatics; 
  __int64 v21; 
  unsigned int v22; 
  char *v23; 
  ParticleManager *ParticleManager; 
  CgWeaponMap *Instance; 
  const BgAnimStatic *v26; 
  bool v30; 
  unsigned int v31; 
  characterInfo_t *CharacterInfo; 
  team_t team; 
  team_t v34; 
  int v35; 
  DObj *v37; 
  int m_isMLGSpectator; 
  HudData v39; 
  int v40; 
  const HudOutlineDef *HudOutlineDefFromPlayerState; 
  CgHandler *Handler; 
  bool v44; 
  int v45; 
  CgMLGSpectator *MLGSpectator; 
  CgWeaponMap *v50; 
  bool v51; 
  bool v52; 
  bool v53; 
  bool v54; 
  bool v55; 
  bool drawShadow; 
  const CgEventLodData *p_eventLodData; 
  const CgCharacterAnimUpdateInfo *CharacterAnimUpdateInfoIfSorted; 
  const dvar_t *v59; 
  unsigned int unsignedInt; 
  int v61; 
  bool v68; 
  bool useAlternateColor; 
  unsigned int number; 
  bool v71; 
  bool v72; 
  cg_t *LocalClientGlobals; 
  char v95; 
  bool v96; 
  unsigned int v97; 
  const char *v100; 
  centity_t *predictedPlayerEntity; 
  float fmt; 
  float fmta; 
  __int64 emissiveMaterialData; 
  __int64 emissiveMaterialDataa; 
  __int64 drawLegs; 
  __int64 drawLegsa; 
  float v133; 
  char v134; 
  bool v135; 
  char v136; 
  bool IsHidingViewmodel; 
  bool v138; 
  bool v139; 
  bool v140; 
  unsigned int scriptableIndex; 
  int v142; 
  int clientNum; 
  unsigned int renderFlags[2]; 
  DObj *obj; 
  GfxSceneHudOutlineInfo obj_8; 
  vec3_t outOrigin; 
  vec3_t lightingOrigin; 
  float characterEVOffset; 
  CgTrajectory v150; 
  __int64 v151; 
  vec3_t xyz; 
  vec3_t outlinedEntityOrigin; 
  vec3_t vel; 
  vec4_t playerViewOrigin; 
  __m256i v156; 
  LocalClientNum_t v157; 
  char v158; 
  void *retaddr; 

  _RAX = &retaddr;
  v151 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm8
    vmovaps xmmword ptr [rax-78h], xmm9
    vmovaps xmmword ptr [rax-88h], xmm10
  }
  v11 = localClientNum;
  Sys_ProfBeginNamedEvent(0xFF0000FF, "CG_PlayersMP_ProcessPlayer");
  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 2749, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( (cent->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 2750, ASSERT_TYPE_ASSERT, "(CENextValid( cent ))", (const char *)&queryFormat, "CENextValid( cent )") )
    __debugbreak();
  __asm
  {
    vmovups ymm0, ymmword ptr cs:NULL_HUDOUTLINE_INFO_9.color
    vmovups ymmword ptr [rsp+200h+obj+8], ymm0
  }
  characterEVOffset = NULL_HUDOUTLINE_INFO_9.characterEVOffset;
  p_nextState = &cent->nextState;
  if ( !CgWeaponMap::ms_instance[v11] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
    __debugbreak();
  *(_QWORD *)vel.v = BG_GetWeaponForEntity(CgWeaponMap::ms_instance[v11], &cent->nextState);
  _R12 = CgGlobalsMP::GetLocalClientGlobals((const LocalClientNum_t)v11);
  eType = cent->nextState.eType;
  __asm { vmovss  xmm10, cs:__real@3f800000 }
  if ( eType == ET_PLAYER )
  {
    __asm { vmovaps xmm2, xmm10; distanceSqMultiplier }
    CG_DistanceCacheMP_AddPlayer((const LocalClientNum_t)v11, p_nextState->number, *(const float *)&_XMM2_8);
  }
  else if ( eType == ET_AGENT )
  {
    __asm { vmovaps xmm2, xmm10; distanceSqMultiplier }
    CG_DistanceCacheMP_AddAgent((const LocalClientNum_t)v11, p_nextState->number, *(const float *)&_XMM2_8);
  }
  IsPlayerEntityNumber = CG_IsPlayerEntityNumber(&_R12->predictedPlayerState, p_nextState->number);
  v138 = IsPlayerEntityNumber;
  if ( CG_Entity_IsNoDraw((const LocalClientNum_t)v11, &cent->nextState, NULL) )
  {
    if ( !IsPlayerEntityNumber && ScriptableCl_IsScriptableEntity((const LocalClientNum_t)v11, cent) && ScriptableCl_GetIndexForEntity((const LocalClientNum_t)v11, cent, &scriptableIndex) )
    {
      ScriptableCl_UpdatePosition((const LocalClientNum_t)v11, scriptableIndex, cent);
      ScriptableCl_UpdateSharedInstance((const LocalClientNum_t)v11, scriptableIndex, p_nextState->number);
    }
    goto LABEL_219;
  }
  if ( !GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&cent->nextState.lerp.eFlags, ACTIVE, 0x11u) )
  {
    if ( !IsPlayerEntityNumber )
      CG_PlayersMP_PreProcess((LocalClientNum_t)v11, cent, 0);
    obj = Com_GetClientDObj(p_nextState->number, (LocalClientNum_t)v11);
    if ( obj )
    {
      CG_EntityMP_ValidateDObj((const LocalClientNum_t)v11, cent);
      if ( !IsPlayerEntityNumber )
        AimTargetMP_ProcessEntity((const LocalClientNum_t)v11, cent);
      v18 = cent->nextState.clientNum;
      clientNum = v18;
      if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
        __debugbreak();
      if ( v18 >= ComCharacterLimits::ms_gameData.m_characterCount )
      {
        if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
          __debugbreak();
        LODWORD(emissiveMaterialData) = v18;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 2829, ASSERT_TYPE_ASSERT, "(unsigned)( iClientNum ) < (unsigned)( ComCharacterLimits::GetCharacterMaxCount() )", "iClientNum doesn't index ComCharacterLimits::GetCharacterMaxCount()\n\t%i not in [0, %i)", emissiveMaterialData, ComCharacterLimits::ms_gameData.m_characterCount) )
          __debugbreak();
      }
      LocalClientStatics = CgStatic::GetLocalClientStatics((const LocalClientNum_t)v11);
      *(_QWORD *)xyz.v = LocalClientStatics;
      _R14 = CgStatic::GetCharacterInfo(LocalClientStatics, v18);
      if ( !_R14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 2833, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
        __debugbreak();
      *(_QWORD *)_R14->velocity.v = 0i64;
      _R14->velocity.v[2] = 0.0;
      if ( CG_MainMP_IsPrematchCountdown((const LocalClientNum_t)v11) )
      {
        if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_cg_prematch_playerVisbilityRequiresCharacterModels, "cg_prematch_playerVisbilityRequiresCharacterModels") )
        {
          if ( !_R14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 2368, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
            __debugbreak();
          if ( _R14->dobjModelLoaded )
          {
            v21 = 0i64;
            v22 = 0;
            v23 = _R14->attachModelNames[0];
            while ( !*v23 || _R14->dobjAttachModelLoaded[v21] )
            {
              ++v22;
              ++v21;
              v23 += 64;
              if ( v22 >= 9 )
                goto LABEL_47;
            }
          }
          goto LABEL_219;
        }
LABEL_47:
        if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_cg_prematch_playerVisbilityRequiresWeaponModels, "cg_prematch_playerVisbilityRequiresWeaponModels") )
        {
          if ( !_R14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 2388, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
            __debugbreak();
          if ( _R14->dobjHeldWeapon.weaponIdx && !_R14->dobjHeldWeaponLoaded || _R14->dobjStowedWeapon.weaponIdx && !_R14->dobjStowedWeaponLoaded || _R14->dobjThrownWeapon.weaponIdx && !_R14->dobjThrownWeaponLoaded || _R14->dobjExecutionWeapon.weaponIdx && !_R14->dobjExecutionWeaponLoaded || _R14->dobjAccessoryWeapon.weaponIdx && !_R14->dobjAccessoryWeaponLoaded )
            goto LABEL_219;
        }
      }
      if ( (cent->flags & 0x20000) != 0 )
      {
        ParticleManager = ParticleManager::GetParticleManager((LocalClientNum_t)v11);
        if ( ParticleManager )
        {
          ParticleManager::EnableDrawForAllSystemsOnDObj(ParticleManager, p_nextState->number, 1);
          cent->flags &= ~0x20000u;
        }
      }
      if ( (*(_BYTE *)&cent->nextState.animInfo.selectAnim & 1) == 0 )
      {
        CG_AddPlayerToWeaponVisibilityList((LocalClientNum_t)v11, cent, _R14);
        Instance = CgWeaponMap::GetInstance((const LocalClientNum_t)v11);
        v26 = LocalClientStatics->GetAnimStatics(LocalClientStatics);
        if ( (*(_BYTE *)&cent->nextState.animInfo.selectAnim & 1) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 4395, ASSERT_TYPE_ASSERT, "(!cent->nextState.animInfo.selectAnim.usingAnimState)", (const char *)&queryFormat, "!cent->nextState.animInfo.selectAnim.usingAnimState") )
          __debugbreak();
        if ( !_R14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 4396, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
          __debugbreak();
        if ( cent->pose.cullIn == 2 )
        {
          if ( cent == (centity_t *)-400i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 4402, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
            __debugbreak();
          BG_UpdateSecondaryWeaponVisibilities(v26, Instance, &cent->nextState, _R14);
        }
        LocalClientStatics = *(CgStatic **)xyz.v;
      }
      scriptableIndex = !BG_HasPerk(&_R14->perks, 0x24u);
      LODWORD(xyz.v[0]) = !BG_HasPerk(&_R14->perks, 0x31u);
      CG_GetPoseOrigin(&cent->pose, &outOrigin);
      __asm
      {
        vmovsd  xmm0, qword ptr [rbp+100h+outOrigin]
        vmovsd  qword ptr [rbp+100h+lightingOrigin], xmm0
      }
      lightingOrigin.v[2] = outOrigin.v[2];
      if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&cent->nextState.lerp.eFlags, ACTIVE, 4u) )
      {
        __asm
        {
          vmovss  xmm0, dword ptr [rbp+100h+lightingOrigin+8]
          vaddss  xmm1, xmm0, cs:__real@41400000
        }
      }
      else
      {
        v30 = GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&cent->nextState.lerp.eFlags, ACTIVE, 3u);
        __asm { vmovss  xmm0, dword ptr [rbp+100h+lightingOrigin+8] }
        if ( v30 )
          __asm { vaddss  xmm1, xmm0, cs:__real@41a00000 }
        else
          __asm { vaddss  xmm1, xmm0, cs:__real@42000000 }
      }
      __asm { vmovss  dword ptr [rbp+100h+lightingOrigin+8], xmm1 }
      if ( v138 )
      {
        *(double *)&_XMM0 = DObjGetRadius(obj);
        __asm { vmovaps xmm3, xmm0; radius }
        v31 = R_LinkDObjEntity_NoCull(v11, p_nextState->number, &outOrigin, *(float *)&_XMM3_8);
        cent->flags |= 0x80000u;
        *(double *)&_XMM0 = DObjGetRadius(obj);
        __asm { vmovss  dword ptr [rsp+200h+fmt], xmm0 }
        CG_Entity_CheckLightCount(p_nextState->number, obj, v31, &outOrigin, fmt);
      }
      CharacterInfo = CgStatic::GetCharacterInfo(LocalClientStatics, _R12->predictedPlayerState.clientNum);
      if ( !CharacterInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 2944, ASSERT_TYPE_ASSERT, "(playerCI)", (const char *)&queryFormat, "playerCI") )
        __debugbreak();
      team = CharacterInfo->team;
      v34 = _R14->team;
      if ( _R12 == (CgGlobalsMP *)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_teams.h", 163, ASSERT_TYPE_ASSERT, "(playerState)", (const char *)&queryFormat, "playerState") )
        __debugbreak();
      if ( team == TEAM_ZERO || (v136 = 1, team != v34) )
        v136 = 0;
      if ( !CG_View_IsThermalVisionOn((const LocalClientNum_t)v11) && !CG_View_ThermalScoped((LocalClientNum_t)v11, _R12) || (v134 = 1, CG_View_IsEMPJammed((const LocalClientNum_t)v11)) )
        v134 = 0;
      v35 = 4096;
      renderFlags[0] = 4096;
      __asm { vxorps  xmm9, xmm9, xmm9 }
      if ( (_BYTE)scriptableIndex )
      {
        v35 = 5120;
        renderFlags[0] = 5120;
        if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_thermal_player_fade_distance_enable, "thermal_player_fade_distance_enable") )
        {
          *(float *)&_XMM0 = CG_PlayersMP_CalculateThermalTemperatureScale((const LocalClientNum_t)v11, cent, &obj_8);
          __asm { vmovss  [rbp+100h+var_174], xmm0 }
        }
        else
        {
          __asm { vmovss  [rbp+100h+var_174], xmm10 }
        }
      }
      else
      {
        __asm { vmovss  [rbp+100h+var_174], xmm9 }
      }
      obj_8.temperatureSet = 1;
      if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&cent->nextState.lerp.eFlags, ACTIVE, 0xDu) )
        renderFlags[0] = v35 | 0x200;
      v37 = obj;
      obj->flags |= 0x80u;
      FX_Dismemberment_ProcessTimeout((LocalClientNum_t)v11, v37);
      v44 = _R12->predictedPlayerState.pm_type == 5;
      m_isMLGSpectator = v44;
      v142 = v44;
      if ( !v44 )
      {
        m_isMLGSpectator = _R12->m_isMLGSpectator;
        v142 = m_isMLGSpectator;
      }
      v139 = CG_Utils_StencilScriptControlled((const LocalClientNum_t)v11);
      v39.0 = ($D69577AC11C1636F320D0973E2FBC7CA)cent->nextState.hudData;
      if ( (*(_BYTE *)&v39.0 & 0x3F) != 0 )
      {
        if ( !_R12->scopeForceEnemyOutlines && !m_isMLGSpectator )
        {
          v40 = _R12->time - _R12->predictedPlayerState.deltaTime;
          if ( cent->currentHudOutlineIndex != (cent->nextState.hudData.data & 0x3F) )
          {
            cent->hudOutlineStartTime = v40;
            cent->currentHudOutlineIndex = cent->nextState.hudData.data & 0x3F;
            v39.0 = ($D69577AC11C1636F320D0973E2FBC7CA)cent->nextState.hudData;
          }
          HudOutlineDefFromPlayerState = BG_GetHudOutlineDefFromPlayerState(&_R12->predictedPlayerState, *(_BYTE *)&v39.0 & 0x3F);
          if ( HudOutlineDefFromPlayerState )
          {
            Handler = CgHandler::getHandler((LocalClientNum_t)v11);
            if ( BG_HudOutline_ShouldDrawOnEnt(HudOutlineDefFromPlayerState, Handler, &_R12->predictedPlayerState, &cent->nextState) )
            {
              if ( v139 )
              {
                if ( HudOutlineDefFromPlayerState->drawInStencil && CG_Utils_ShouldHighlightInScope((const LocalClientNum_t)v11) && (CG_Utils_ShouldHighlightCharacters((const LocalClientNum_t)v11) && cent->nextState.eType == ET_PLAYER || CG_Utils_ShouldHighlightAgents((const LocalClientNum_t)v11) && cent->nextState.eType == ET_AGENT) )
                {
                  __asm
                  {
                    vxorps  xmm0, xmm0, xmm0
                    vcvtsi2ss xmm0, xmm0, eax
                    vmovss  dword ptr [rsp+200h+obj+0Ch], xmm0
                  }
                  if ( CG_Utils_PlayerLockedOn((const LocalClientNum_t)v11, cent) )
                    obj_8.useAlternateColor = 1;
                }
              }
              else if ( !HudOutlineDefFromPlayerState->drawInStencil )
              {
                CG_GetPoseOrigin(&cent->pose, &outlinedEntityOrigin);
                CG_Entity_GetPlayerViewOriginEntityWorkerHack(&_R12->predictedPlayerState, (vec3_t *)&playerViewOrigin);
                obj_8.color = BG_HudOutline_GetColor(HudOutlineDefFromPlayerState, cent->hudOutlineStartTime, v40, (const vec3_t *)&playerViewOrigin, &outlinedEntityOrigin);
                obj_8.drawOccludedPixels = HudOutlineDefFromPlayerState->drawOccludedPixels;
                obj_8.drawNonOccludedPixels = HudOutlineDefFromPlayerState->drawNonOccludedPixels;
                obj_8.lineWidth = truncate_cast<unsigned char,int>(HudOutlineDefFromPlayerState->outlineWidth);
                obj_8.renderMode = HudOutlineDefFromPlayerState->outlineType;
                obj_8.fill = HudOutlineDefFromPlayerState->drawFill;
              }
            }
          }
        }
      }
      else
      {
        cent->currentHudOutlineIndex = 0;
      }
      if ( _R12->scopeForceEnemyOutlines && !v136 )
      {
        v44 = v134 ? (_BYTE)scriptableIndex == 0 : LOBYTE(xyz.v[0]) == 0;
        if ( !v44 )
        {
          v45 = v142;
          if ( v142 )
          {
LABEL_134:
            if ( clientNum < cls.maxClients )
            {
              if ( v45 )
              {
                MLGSpectator = CgMLGSpectator::GetMLGSpectator((const LocalClientNum_t)v11);
                if ( CgMLGSpectator::ShouldDisplayPlayerOutline(MLGSpectator, (const LocalClientNum_t)v11, (const team_t)_R14->team) && (!v134 || (_BYTE)scriptableIndex) )
                {
                  __asm { vmovss  dword ptr [rsp+200h+fmt], xmm10 }
                  obj_8.color = CG_Utils_GetHudOutlineTeamColor(_R12, (const LocalClientNum_t)v11, (const team_t)_R14->team, 0, fmta);
                  obj_8.forSpectator = 1;
                  *(_WORD *)&obj_8.drawOccludedPixels = 257;
                  *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_r_hudOutlineWidth, "r_hudOutlineWidth");
                  __asm { vcvttss2si eax, xmm0 }
                  obj_8.lineWidth = _EAX;
                  obj_8.renderMode = 0;
                  obj_8.specialActive = CgMLGSpectator::IsClientSpecialActive(MLGSpectator, clientNum) != 0;
                }
              }
            }
            if ( cent->nextState.eType == ET_PLAYER )
            {
              LUIOnEntityElementSpawnerMP::UpdateFiltersForPlayer((const LocalClientNum_t)v11, p_nextState->number);
            }
            else if ( cent->nextState.eType == ET_AGENT )
            {
              LUIOnEntityElementSpawnerMP::UpdateFiltersForAgent((const LocalClientNum_t)v11, p_nextState->number);
            }
            *(double *)&_XMM0 = CG_PlayersMP_LerpEmission((LocalClientNum_t)v11, _R14);
            __asm { vmulss  xmm0, xmm0, cs:__real@437f0000; val }
            scriptableIndex = float_to_integral_cast<unsigned char,float>(*(float *)&_XMM0) << 24;
            v51 = 0;
            if ( v138 && !_R12->renderingThirdPerson )
            {
              v50 = CgWeaponMap::GetInstance((const LocalClientNum_t)v11);
              if ( !BG_IsThirdPersonMode(v50, &_R12->predictedPlayerState) && !CG_Camera_Transition_IsHidingViewmodel((LocalClientNum_t)v11) )
                v51 = 1;
            }
            v52 = CG_CinematicCameraShouldRenderCharacter((LocalClientNum_t)v11, p_nextState->number) != 0;
            if ( (!_R12->m_isMLGSpectator || clientNum >= cls.maxClients || CG_MLGCameraShouldRenderCharacter((const LocalClientNum_t)v11, cent)) && v52 )
            {
              if ( v51 )
              {
                v53 = BG_Skydive_DrawLegs(&_R12->predictedPlayerState);
                v54 = Mantle_DrawLegsModel(&_R12->predictedPlayerState);
                v140 = BG_ContextMount_DrawLegsModel(&_R12->predictedPlayerState);
                IsHidingViewmodel = CG_Camera_Transition_IsHidingViewmodel((LocalClientNum_t)v11);
                v135 = BG_VehicleOccupancy_HideLegs(&_R12->predictedPlayerState);
                v55 = Dvar_GetBool_Internal_DebugName(DCONST_DVARMPSPBOOL_cg_drawPlayerLegs, "cg_drawPlayerLegs") && v53 && v54 && v140 && !IsHidingViewmodel && !v135 && !_R12->vehicleEntryHidesPlayer;
                drawShadow = Dvar_GetBool_Internal_DebugName(DCONST_DVARMPBOOL_cg_drawPlayerShadow, "cg_drawPlayerShadow");
                CG_Players_AddFirstPersonBodyModelsToScene((LocalClientNum_t)v11, cent, obj, renderFlags[0], &lightingOrigin, scriptableIndex, v55, drawShadow);
              }
              else
              {
                if ( LOBYTE(xyz.v[0]) && !v136 && CG_Utils_ShouldHighlightInScope((const LocalClientNum_t)v11) && !CG_Utils_StencilScriptControlled((const LocalClientNum_t)v11) && (CG_Utils_ShouldHighlightCharacters((const LocalClientNum_t)v11) && cent->nextState.eType == ET_PLAYER || CG_Utils_ShouldHighlightAgents((const LocalClientNum_t)v11) && cent->nextState.eType == ET_AGENT) )
                {
                  __asm { vmovss  dword ptr [rsp+200h+obj+0Ch], xmm10 }
                  v68 = CG_Utils_PlayerLockedOn((const LocalClientNum_t)v11, cent);
                  useAlternateColor = obj_8.useAlternateColor;
                  if ( v68 )
                    useAlternateColor = 1;
                  obj_8.useAlternateColor = useAlternateColor;
                }
                number = p_nextState->number;
                if ( number >= 0x800 )
                {
                  LODWORD(drawLegs) = 2048;
                  LODWORD(emissiveMaterialData) = p_nextState->number;
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", emissiveMaterialData, drawLegs) )
                    __debugbreak();
                }
                v71 = ((0x80000000 >> (number & 0x1F)) & s_coarseCullData[v11].array[(unsigned __int64)number >> 5]) != 0;
                p_eventLodData = NULL;
                v72 = 0;
                if ( !v142 )
                  v72 = v71;
                if ( v72 )
                {
                  if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_playerCulledDebugOverlay, "playerCulledDebugOverlay") )
                  {
                    CG_GetPoseOrigin(&cent->pose, (vec3_t *)&playerViewOrigin);
                    __asm { vmovaps xmm2, xmm10; scale }
                    CL_AddDebugString((const vec3_t *)&playerViewOrigin, &colorWhite, *(float *)&_XMM2_8, "Umbra Culled", 0, 1);
                  }
                  goto LABEL_166;
                }
                LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)v11);
                RefdefView_GetOrg(&LocalClientGlobals->refdef.view, &outlinedEntityOrigin);
                CG_GetPoseOrigin(&cent->pose, &xyz);
                __asm
                {
                  vmovss  xmm0, dword ptr [rbp+100h+outlinedEntityOrigin]
                  vsubss  xmm3, xmm0, dword ptr [rbp+100h+xyz]
                  vmovss  xmm1, dword ptr [rbp+100h+outlinedEntityOrigin+4]
                  vsubss  xmm2, xmm1, dword ptr [rbp+100h+xyz+4]
                  vmovss  xmm0, dword ptr [rbp+100h+outlinedEntityOrigin+8]
                  vsubss  xmm4, xmm0, dword ptr [rbp+100h+xyz+8]
                  vmulss  xmm2, xmm2, xmm2
                  vmulss  xmm1, xmm3, xmm3
                  vaddss  xmm3, xmm2, xmm1
                  vmulss  xmm0, xmm4, xmm4
                  vaddss  xmm8, xmm3, xmm0
                  vmovss  xmm1, dword ptr [r12+17FF8h]
                  vsubss  xmm2, xmm1, cs:__real@41000000
                  vmulss  xmm0, xmm2, cs:__real@3c8fb824; val
                  vmovaps xmm2, xmm10; max
                  vxorps  xmm1, xmm1, xmm1; min
                }
                *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
                __asm { vmovaps xmm7, xmm0 }
                *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_playerCullDistMaxZoom, "playerCullDistMaxZoom");
                __asm { vmovaps xmm6, xmm0 }
                *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_playerCullDistHip, "playerCullDistHip");
                __asm
                {
                  vsubss  xmm1, xmm10, xmm7
                  vmulss  xmm2, xmm1, xmm6
                  vmulss  xmm0, xmm0, xmm7
                  vaddss  xmm2, xmm2, xmm0
                  vmulss  xmm1, xmm2, xmm2
                  vcomiss xmm1, xmm8
                }
                v96 = !(v95 | v44);
                if ( !(v95 | v44) && !CG_PlayerFade_IsPlayerFadedOut((const LocalClientNum_t)v11) )
                {
                  _R12->GetShaderOverrideData(_R12, (shaderOverride_t *)&v156, clientNum, *(const Weapon **)vel.v);
                  v97 = p_nextState->number;
                  __asm
                  {
                    vmovups ymm0, ymmword ptr [rsp+200h+obj+8]
                    vmovups ymmword ptr [rsp+200h+obj+8], ymm0
                  }
                  obj_8.characterEVOffset = characterEVOffset;
                  __asm
                  {
                    vmovups ymm0, [rbp+100h+var_B8]
                    vmovups ymmword ptr [rbp+100h+var_130.baseclass_0.__vftable], ymm0
                  }
                  v150.m_localClientNum = v157;
                  __asm { vmovss  [rsp+200h+var_1C0], xmm9 }
                  CG_Entity_AddDObjToScene((const LocalClientNum_t)v11, obj, &cent->pose, v97, renderFlags[0], (shaderOverride_t *)&v150, &obj_8, &lightingOrigin, v133, scriptableIndex);
                }
                if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_playerCulledDebugOverlay, "playerCulledDebugOverlay") )
                {
                  v100 = "Dist Culled";
                  if ( v96 )
                    v100 = "Submitted";
                  p_eventLodData = NULL;
                  __asm { vmovaps xmm2, xmm10; scale }
                  CL_AddDebugString(&xyz, &colorWhite, *(float *)&_XMM2_8, v100, 0, 1);
                  goto LABEL_166;
                }
              }
            }
            p_eventLodData = NULL;
LABEL_166:
            if ( !v138 )
            {
              CharacterAnimUpdateInfoIfSorted = CgGlobalsMP::GetCharacterAnimUpdateInfoIfSorted(_R12, p_nextState->number);
              p_eventLodData = &CharacterAnimUpdateInfoIfSorted->eventLodData;
              if ( CharacterAnimUpdateInfoIfSorted )
                CG_PlayersMP_PreCachePlayerAnimCalcRequests((const LocalClientNum_t)v11, cent, _R14, CharacterAnimUpdateInfoIfSorted, obj);
            }
            if ( !GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&cent->nextState.lerp.eFlags, ACTIVE, 0x11u) )
            {
              AnglesToQuat(&cent->pose.angles, &playerViewOrigin);
              CG_AddPlayerWeapon((LocalClientNum_t)v11, &outOrigin, &playerViewOrigin, NULL, NULL, cent, 1, p_eventLodData);
              CG_AddPlayerExecutionProp((LocalClientNum_t)v11, cent);
              CG_Heat_UpdateWorldmodel((LocalClientNum_t)v11, cent);
              CG_Slide_UpdateClientEntity((LocalClientNum_t)v11, cent);
              CG_Ladder_PlayAudioClientEntity((const LocalClientNum_t)v11, cent);
              CG_Skydive_UpdateClientEntity((LocalClientNum_t)v11, cent);
              v59 = DCONST_DVARINT_cg_playerFoliageSoundCount;
              if ( !DCONST_DVARINT_cg_playerFoliageSoundCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_playerFoliageSoundCount") )
                __debugbreak();
              Dvar_CheckFrontendServerThread(v59);
              unsignedInt = v59->current.unsignedInt;
              v61 = p_nextState->number;
              if ( v61 >= cls.maxClients || !_R12->m_playerOrderDistanceSortedCount )
                goto LABEL_179;
              if ( (unsigned __int16)v61 >= 0xF8u )
              {
                LODWORD(drawLegsa) = 248;
                LODWORD(emissiveMaterialDataa) = p_nextState->number;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 2494, ASSERT_TYPE_ASSERT, "(unsigned)( cent->nextState.number ) < (unsigned)( ( sizeof( *array_counter( cgameGlob->m_playerOrderLookupDistancePriority ) ) + 0 ) )", "cent->nextState.number doesn't index cgameGlob->m_playerOrderLookupDistancePriority\n\t%i not in [0, %i)", emissiveMaterialDataa, drawLegsa) )
                  __debugbreak();
              }
              if ( _R12->m_playerOrderLookupDistancePriority[p_nextState->number] <= unsignedInt )
              {
LABEL_179:
                CG_Foliage_QueueProcessCharacterEntityCmd((const LocalClientNum_t)v11, cent);
                if ( v138 )
                  CG_Foliage_StartProcessCharacterEntityCmds();
              }
            }
            CG_Slide_UpdateClientFX((LocalClientNum_t)v11, cent);
            if ( v138 )
              CG_PlayersMP_ProcessPlayerBrCircleEffects((LocalClientNum_t)v11, _R12, cent);
            if ( Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_weaponOcclusionAdjustEnabled, "weaponOcclusionAdjustEnabled") )
            {
              if ( _R12->frametime > 0 )
              {
                _EAX = 0;
                __asm { vmovd   xmm1, eax }
                _EAX = _R14->heldWeaponOccluded;
                __asm
                {
                  vmovd   xmm0, eax
                  vpcmpeqd xmm2, xmm0, xmm1
                  vblendvps xmm6, xmm10, xmm9, xmm2
                  vcomiss xmm6, dword ptr [r14+918h]
                }
                Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_weaponOcclusionAdjustBlendInTime, "weaponOcclusionAdjustBlendInTime");
                __asm
                {
                  vxorps  xmm3, xmm3, xmm3
                  vcvtsi2ss xmm3, xmm3, eax
                  vxorps  xmm0, xmm0, xmm0
                  vcvtsi2ss xmm0, xmm0, dword ptr [r12+65E4h]
                  vdivss  xmm2, xmm3, xmm0; sampleCount
                  vmovaps xmm1, xmm6; newSample
                  vmovss  xmm0, dword ptr [r14+918h]; average
                }
                *(double *)&_XMM0 = ExponentialMovingAverage(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
                __asm
                {
                  vmovaps xmm2, xmm10; max
                  vxorps  xmm1, xmm1, xmm1; min
                }
                *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2_8);
                __asm { vmovss  dword ptr [r14+918h], xmm0 }
              }
            }
            else
            {
              _R14->weaponOccludedAdjustFrac = 0.0;
            }
            predictedPlayerEntity = _R12->predictedPlayerEntity;
            if ( predictedPlayerEntity && predictedPlayerEntity->nextState.number != p_nextState->number )
            {
              CgTrajectory::CgTrajectory(&v150, (const LocalClientNum_t)v11, cent, &cent->prevState);
              BgTrajectory::EvaluatePosTrajectory(&v150, _R12->snap->serverTime, &xyz);
              v150.m_es = &cent->nextState.lerp;
              BgTrajectory::EvaluatePosTrajectory(&v150, _R12->nextSnap->serverTime, &outlinedEntityOrigin);
              __asm
              {
                vmovss  xmm0, dword ptr [rbp+100h+outlinedEntityOrigin]
                vsubss  xmm5, xmm0, dword ptr [rbp+100h+xyz]
                vmovss  dword ptr [rbp+100h+vel], xmm5
                vmovss  xmm1, dword ptr [rbp+100h+outlinedEntityOrigin+4]
                vsubss  xmm4, xmm1, dword ptr [rbp+100h+xyz+4]
                vmovss  dword ptr [rbp+100h+vel+4], xmm4
                vmovss  xmm0, dword ptr [rbp+100h+outlinedEntityOrigin+8]
                vsubss  xmm3, xmm0, dword ptr [rbp+100h+xyz+8]
                vmovss  dword ptr [rbp+100h+vel+8], xmm3
                vxorps  xmm2, xmm2, xmm2
                vcvtsi2ss xmm2, xmm2, edx
                vmulss  xmm0, xmm5, xmm2
                vmovss  dword ptr [rbp+100h+vel], xmm0
                vmulss  xmm1, xmm2, xmm4
                vmovss  dword ptr [rbp+100h+vel+4], xmm1
                vmulss  xmm0, xmm2, xmm3
                vmovss  dword ptr [rbp+100h+vel+8], xmm0
              }
              R_ReactiveMotion_AddEffector_MT(&outOrigin, &vel, p_nextState->number);
            }
            XAnimBonePhysicsSetDObjMatrix(obj, &outOrigin, &cent->pose.angles);
            if ( !CG_EntityWorkers_TryAddPostPlayerUpdate(p_nextState->number, clientNum, &outOrigin) )
              CG_PlayersMP_ProcessPlayerPostUpdate((LocalClientNum_t)v11, p_nextState->number, clientNum, &outOrigin);
            memset(&outOrigin, 0, sizeof(outOrigin));
            goto LABEL_219;
          }
          obj_8.color = CG_Utils_GetHudOutlineColor(_R12->scopeForceEnemyOutlineColorIndex);
          obj_8.drawOccludedPixels = _R12->scopeForceEnemyOutlinesDisableDepthTest;
          obj_8.drawNonOccludedPixels = 1;
          *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_r_hudOutlineWidth, "r_hudOutlineWidth");
          __asm { vcvttss2si eax, xmm0 }
          obj_8.lineWidth = _EAX;
          obj_8.renderMode = 0;
        }
      }
      v45 = v142;
      goto LABEL_134;
    }
  }
LABEL_219:
  Sys_ProfEndNamedEvent();
  memset(&lightingOrigin, 0, sizeof(lightingOrigin));
  _R11 = &v158;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
  }
}

/*
==============
CG_PlayersMP_ProcessPlayerBrCircleEffects
==============
*/
void CG_PlayersMP_ProcessPlayerBrCircleEffects(LocalClientNum_t localClientNum, const CgGlobalsMP *cgameGlob, const centity_t *cent)
{
  centity_t *m_brCircleEnt; 
  __int64 v11; 
  playerState_s *p_predictedPlayerState; 
  int number; 
  char v14; 
  ParticleManager *ParticleManager; 
  ParticleManager *v32; 
  char v33; 
  ParticleSystemHandle *v44; 
  ParticleSystemHandle v67; 
  cg_t *LocalClientGlobals; 
  int spawnTimeMsec; 
  int v87; 
  ParticleSystem *v88; 
  ParticleSystemHandle v104; 
  ParticleManager *v105; 
  float4 emitterPos; 
  tmat43_t<vec3_t> dst; 
  vec3_t outOrigin; 
  char emitterOrientationMat[64]; 
  void *retaddr; 

  _R11 = &retaddr;
  m_brCircleEnt = cgameGlob->m_brCircleEnt;
  _RDI = cgameGlob;
  v11 = localClientNum;
  if ( m_brCircleEnt && (m_brCircleEnt->flags & 1) != 0 )
  {
    p_predictedPlayerState = &cgameGlob->predictedPlayerState;
    number = cent->nextState.number;
    __asm
    {
      vmovaps xmmword ptr [r11-38h], xmm6
      vmovaps xmmword ptr [r11-48h], xmm7
      vmovaps xmmword ptr [r11-58h], xmm8
      vmovaps xmmword ptr [r11-68h], xmm9
    }
    if ( cgameGlob == (const CgGlobalsMP *)-8i64 )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_local.h", 128, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
        __debugbreak();
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2296, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
        __debugbreak();
    }
    if ( GameModeFlagValues::ms_mpValue == ACTIVE && !GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&p_predictedPlayerState->otherFlags, ACTIVE, 0x22u) )
    {
      if ( !p_predictedPlayerState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2308, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
        __debugbreak();
      if ( (!Com_GameMode_SupportsFeature(WEAPON_RAISING_ALTSWITCH_ADS) || !GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&p_predictedPlayerState->otherFlags, GameModeFlagValues::ms_mpValue, 0x29u)) && !BG_IsSpectating(p_predictedPlayerState) )
        goto LABEL_40;
    }
    if ( number != p_predictedPlayerState->clientNum )
    {
LABEL_40:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 2524, ASSERT_TYPE_ASSERT, "(CG_IsPlayerEntityNumber( &cgameGlob->predictedPlayerState, es->number ))", (const char *)&queryFormat, "CG_IsPlayerEntityNumber( &cgameGlob->predictedPlayerState, es->number )") )
        __debugbreak();
    }
    CG_GetPoseOrigin(&_RDI->m_brCircleEnt->pose, &outOrigin);
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+40h]
      vmovss  xmm1, dword ptr [rsp+1A8h+outOrigin]
      vsubss  xmm3, xmm1, dword ptr [rdi+38h]
      vmovss  dword ptr [rsp+1A8h+outOrigin+8], xmm0
      vmovss  xmm0, dword ptr [rsp+1A8h+outOrigin+4]
      vsubss  xmm4, xmm0, dword ptr [rdi+3Ch]
      vmulss  xmm2, xmm4, xmm4
      vmulss  xmm1, xmm3, xmm3
      vaddss  xmm0, xmm2, xmm1
      vmovss  xmm2, cs:__real@3f800000
      vsqrtss xmm7, xmm0, xmm0
      vcmpless xmm0, xmm7, cs:__real@80000000
      vblendvps xmm0, xmm7, xmm2, xmm0
      vdivss  xmm1, xmm2, xmm0
      vmulss  xmm9, xmm3, xmm1
      vxorps  xmm6, xmm6, xmm6
      vucomiss xmm9, xmm6
      vmulss  xmm8, xmm4, xmm1
    }
    if ( v14 )
    {
      __asm { vucomiss xmm8, xmm6 }
      if ( v14 )
      {
        __asm
        {
          vxorps  xmm7, xmm7, xmm7
          vmovaps xmm9, xmm2
          vxorps  xmm8, xmm8, xmm8
        }
      }
    }
    ParticleManager = ParticleManager::GetParticleManager((LocalClientNum_t)v11);
    __asm { vcomiss xmm7, dword ptr [rdi+0CA368h] }
    v32 = ParticleManager;
    if ( v33 )
    {
      v104 = s_playerBrCircleFX[v11];
      if ( v104 )
      {
        ParticleManager::KillSystem(ParticleManager, v104);
        s_playerBrCircleFX[v11] = PARTICLE_SYSTEM_INVALID_HANDLE;
      }
    }
    else
    {
      __asm { vmovaps [rsp+1A8h+var_78], xmm10 }
      MatrixCopy44To43(&identityMatrix44, &dst);
      __asm
      {
        vmovss  xmm0, dword ptr [rdi+38h]
        vmovss  xmm1, dword ptr [rdi+3Ch]
        vmovss  dword ptr [rsp+1A8h+dst+24h], xmm0
        vmovss  xmm0, dword ptr [rdi+40h]
        vmovss  dword ptr [rsp+1A8h+dst+2Ch], xmm0
        vmovss  dword ptr [rsp+1A8h+dst], xmm9
        vmovss  dword ptr [rsp+1A8h+dst+4], xmm8
        vmovss  dword ptr [rsp+1A8h+dst+8], xmm6
        vmovss  dword ptr [rsp+1A8h+dst+28h], xmm1
      }
      PerpendicularVector(dst.m, &dst.m[2]);
      __asm
      {
        vmovss  xmm3, dword ptr [rsp+1A8h+dst+4]
        vmovss  xmm10, dword ptr [rsp+1A8h+dst+20h]
        vmovss  xmm2, dword ptr [rsp+1A8h+dst]
        vmovss  xmm9, dword ptr [rsp+1A8h+dst+1Ch]
        vmovss  xmm6, dword ptr [rsp+1A8h+dst+8]
        vmovss  xmm8, dword ptr [rsp+1A8h+dst+18h]
        vmulss  xmm0, xmm10, xmm3
      }
      emitterPos.v.m128_i32[3] = 0;
      v44 = &s_playerBrCircleFX[v11];
      __asm
      {
        vmulss  xmm1, xmm9, xmm6
        vsubss  xmm7, xmm1, xmm0
        vmulss  xmm1, xmm10, xmm2
        vmulss  xmm0, xmm8, xmm6
        vsubss  xmm5, xmm1, xmm0
        vmulss  xmm1, xmm8, xmm3
        vmulss  xmm0, xmm9, xmm2
        vsubss  xmm4, xmm1, xmm0
        vmovups xmm0, xmmword ptr [rsp+90h]
        vmovss  xmm0, xmm0, xmm2
        vinsertps xmm0, xmm0, xmm3, 10h
        vinsertps xmm0, xmm0, xmm6, 20h ; ' '
        vmovups xmmword ptr [rsp+90h], xmm0
        vmovups xmmword ptr [rsp+1A8h+emitterOrientationMat], xmm0
      }
      emitterPos.v.m128_i32[3] = 0;
      __asm
      {
        vmovups xmm0, xmmword ptr [rsp+90h]
        vmovss  xmm0, xmm0, xmm7
        vinsertps xmm0, xmm0, xmm5, 10h
        vinsertps xmm0, xmm0, xmm4, 20h ; ' '
        vmovups xmmword ptr [rsp+90h], xmm0
        vmovups xmmword ptr [rsp+1A8h+emitterOrientationMat+10h], xmm0
      }
      emitterPos.v.m128_i32[3] = 0;
      __asm
      {
        vmovups xmm0, xmmword ptr [rsp+90h]
        vmovss  xmm0, xmm0, xmm8
        vinsertps xmm0, xmm0, xmm9, 10h
        vinsertps xmm0, xmm0, xmm10, 20h ; ' '
        vmovaps xmm10, [rsp+1A8h+var_78]
        vmovups xmmword ptr [rsp+90h], xmm0
      }
      emitterPos.v.m128_i32[3] = 0;
      __asm { vmovups xmm3, xmmword ptr [rsp+90h] }
      v67 = *v44;
      __asm
      {
        vmovups xmmword ptr [rsp+1A8h+emitterOrientationMat+20h], xmm0
        vmovss  xmm0, dword ptr [rsp+1A8h+dst+24h]
        vmovss  xmm3, xmm3, xmm0
        vinsertps xmm3, xmm3, dword ptr [rsp+1A8h+dst+28h], 10h
        vinsertps xmm3, xmm3, dword ptr [rsp+1A8h+dst+2Ch], arg_18
        vxorps  xmm0, xmm3, xmmword ptr cs:?g_one@@3Ufloat4@@B.v; float4 const g_one
        vandps  xmm1, xmm0, xmmword ptr cs:?g_keepW@@3Ufloat4@@B.v; float4 const g_keepW
        vxorps  xmm2, xmm1, xmm3
        vmovups xmmword ptr [rsp+1A8h+emitterOrientationMat+30h], xmm2
        vmovss  dword ptr [rsp+1A8h+dst+0Ch], xmm7
        vmovss  dword ptr [rsp+1A8h+dst+10h], xmm5
        vmovss  dword ptr [rsp+1A8h+dst+14h], xmm4
        vmovups xmmword ptr [rsp+90h], xmm3
      }
      if ( v67 )
      {
        v87 = 0;
        if ( g_particleSystemsGeneration[4096 * v11 + (v67 & 0xFFF)].__all32 == v67 )
          v87 = v67 & 0xFFF;
        v88 = g_particleSystems[v11][v87];
        _RBX = NULL;
        if ( (unsigned __int64)v88 >= 0x1000 )
          _RBX = v88;
        if ( _RBX )
        {
          Particle_AssertFloat4IsNormalized((const float4 *)emitterOrientationMat);
          Particle_AssertFloat4IsNormalized((const float4 *)&emitterOrientationMat[16]);
          Particle_AssertFloat4IsNormalized((const float4 *)&emitterOrientationMat[32]);
          __asm
          {
            vmovups ymm0, ymmword ptr [rsp+1A8h+emitterOrientationMat]
            vmovups ymmword ptr [rbx], ymm0
            vmovups ymm1, ymmword ptr [rsp+1A8h+emitterOrientationMat+20h]
            vmovups ymmword ptr [rbx+20h], ymm1
            vmovups xmm1, xmmword ptr [rbx+20h]
            vshufps xmm4, xmm1, xmmword ptr [rbx+30h], 44h ; 'D'
            vshufps xmm5, xmm1, xmmword ptr [rbx+30h], 0EEh ; 'î'
            vmovups xmm3, xmmword ptr [rbx]
            vshufps xmm6, xmm3, xmmword ptr [rbx+10h], 44h ; 'D'
            vshufps xmm2, xmm3, xmmword ptr [rbx+10h], 0EEh ; 'î'
            vshufps xmm0, xmm6, xmm4, 88h ; 'ˆ'
            vshufps xmm1, xmm6, xmm4, 0DDh ; 'Ý'
            vmovups xmmword ptr [rsp+1A8h+var_158+10h], xmm1
            vmovups xmmword ptr [rsp+1A8h+var_158], xmm0
            vshufps xmm0, xmm2, xmm5, 88h ; 'ˆ'
            vshufps xmm1, xmm2, xmm5, 0DDh ; 'Ý'
            vmovups xmmword ptr [rsp+1A8h+var_138], xmm0
            vmovups ymm0, [rsp+1A8h+var_158]
            vmovups xmmword ptr [rsp+1A8h+var_138+10h], xmm1
            vmovups ymm1, [rsp+1A8h+var_138]
            vmovups ymmword ptr [rbx+40h], ymm0
            vmovups ymmword ptr [rbx+60h], ymm1
          }
        }
        else
        {
          *v44 = PARTICLE_SYSTEM_INVALID_HANDLE;
        }
      }
      else
      {
        LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)v11);
        __asm { vmovss  xmm0, dword ptr [rdi+38h] }
        spawnTimeMsec = LocalClientGlobals->time;
        emitterPos.v.m128_i32[3] = 0;
        __asm
        {
          vmovups xmm3, xmmword ptr [rsp+90h]
          vmovss  xmm3, xmm3, xmm0
          vinsertps xmm3, xmm3, dword ptr [rdi+3Ch], 10h
          vinsertps xmm3, xmm3, dword ptr [rdi+40h], 20h ; ' '
          vmovups xmmword ptr [rsp+1A8h+emitterPos.v], xmm3
          vmovups xmmword ptr [rsp+1A8h+emitterPos.v], xmm3
        }
        *v44 = ParticleManager::AddSystem(v32, (LocalClientNum_t)v11, cgMedia.fxBrCircleAsh.m_particleSystemDef, &emitterPos, (const vector3 *)emitterOrientationMat, spawnTimeMsec, PARTICLE_SYSTEM_FLAG_NONE, NULL, NULL);
      }
    }
    __asm
    {
      vmovaps xmm8, [rsp+1A8h+var_58]
      vmovaps xmm7, [rsp+1A8h+var_48]
      vmovaps xmm6, [rsp+1A8h+var_38]
      vmovaps xmm9, [rsp+1A8h+var_68]
    }
  }
  else if ( s_playerBrCircleFX[localClientNum] )
  {
    v105 = ParticleManager::GetParticleManager(localClientNum);
    ParticleManager::KillSystem(v105, s_playerBrCircleFX[v11]);
    s_playerBrCircleFX[v11] = PARTICLE_SYSTEM_INVALID_HANDLE;
  }
}

/*
==============
CG_PlayersMP_ProcessPlayerPostUpdate
==============
*/
void CG_PlayersMP_ProcessPlayerPostUpdate(LocalClientNum_t localClientNum, const unsigned int entityIndex, const unsigned int clientIndex, const vec3_t *poseOrigin)
{
  CgGlobalsMP *LocalClientGlobals; 
  const dvar_t *v9; 
  vec3_t trBase; 
  __int64 v16; 
  Bounds bounds; 

  v16 = -2i64;
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 2421, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals(localClientNum);
  _RBP = CG_GetEntity(localClientNum, entityIndex);
  if ( !CG_IsPlayerEntityNumber(&LocalClientGlobals->predictedPlayerState, entityIndex) )
  {
    if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagStrict(&_RBP->nextState.lerp.eFlags, (EntityStateFlagsMP)20) )
      CG_EntityMP_UpdateScramblerEffect(localClientNum, entityIndex, entityIndex, poseOrigin, JAMMING_TYPE_LINEAR);
    if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagStrict(&_RBP->nextState.lerp.eFlags, LEGACY_LADDER_CENTERLINE|LEGACY_MOUNT|0x10) )
      CG_EntityMP_UpdatePortableRadarEffect(localClientNum, entityIndex, entityIndex, poseOrigin);
  }
  v9 = DVARBOOL_cg_debugAntiLagShowPlayerServerSnap;
  if ( DVARBOOL_cg_debugAntiLagShowPlayerServerSnap )
  {
    Dvar_CheckFrontendServerThread(DVARBOOL_cg_debugAntiLagShowPlayerServerSnap);
    if ( v9->current.enabled )
    {
      __asm
      {
        vmovups xmm0, cs:__xmm@41700000420c00000000000000000000
        vmovups xmmword ptr [rsp+0A8h+bounds.midPoint], xmm0
        vmovss  xmm1, cs:__real@41700000
        vmovss  dword ptr [rsp+0A8h+bounds.halfSize+4], xmm1
        vmovss  xmm0, cs:__real@420c0000
        vmovss  dword ptr [rsp+0A8h+bounds.halfSize+8], xmm0
        vmovss  xmm2, dword ptr [rbp+4Ch]; yaw
      }
      CG_DebugBox(poseOrigin, &bounds, *(float *)&_XMM2, &colorGreen, 1, 0);
      Trajectory_GetTrBase(&_RBP->nextState.lerp.pos, &trBase);
      __asm { vmovss  xmm2, dword ptr [rbp+1D4h]; yaw }
      CG_DebugBox(&trBase, &bounds, *(float *)&_XMM2, &colorRed, 1, 0);
      memset(&trBase, 0, sizeof(trBase));
    }
  }
  CG_LatencyTestMP_ProcessPlayerEntity(localClientNum, _RBP);
}

/*
==============
CG_PlayersMP_QueueProcessAnimationCmd
==============
*/
void CG_PlayersMP_QueueProcessAnimationCmd(LocalClientNum_t localClientNum, centity_t *cent, bool isPredictedPlayer)
{
  LocalClientNum_t data; 
  centity_t *v4; 
  bool v5; 

  data = localClientNum;
  v4 = cent;
  v5 = isPredictedPlayer;
  Sys_AddWorkerCmd(WRKCMD_CG_PLAYERSMP_PROCESSANIMATION, &data);
}

/*
==============
CG_PlayersMP_ResetCharacterEntity
==============
*/
void CG_PlayersMP_ResetCharacterEntity(LocalClientNum_t localClientNum, CgGlobalsMP *cgameGlob, centity_t *cent, int resetAnimation)
{
  entityState_t *p_nextState; 
  CgStatic *LocalClientStatics; 
  int clientNum; 
  CgStatic *v13; 
  cg_t *LocalClientGlobals; 
  DObj *ClientDObj; 
  XAnimTree *pXAnimTree; 
  __int64 v18; 
  unsigned int suitIndex; 
  unsigned int AnimsetIndexBySuit; 
  unsigned int Animset; 
  XAnimOwner v26; 
  __int64 v27; 
  CgGlobalsMP *v28; 
  const dvar_t *v29; 
  float fmt; 
  float fmta; 
  float fmtb; 
  __int64 forceBlendTime; 
  int forceBlendTimea; 
  int forceBlendTimeb; 
  void *objID; 
  float objIDa; 
  float objIDb; 

  if ( !cgameGlob && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 4132, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 4133, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  p_nextState = &cent->nextState;
  LocalClientStatics = CgStatic::GetLocalClientStatics(localClientNum);
  clientNum = cent->nextState.clientNum;
  v13 = LocalClientStatics;
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)LocalClientStatics->m_localClientNum);
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static_inline.h", 25, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  _RDI = CG_GetCharacterInfo(LocalClientGlobals, clientNum);
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 4139, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
    __debugbreak();
  cg_t::ResetCgCharacterInfo(cgameGlob, p_nextState->number);
  ClientDObj = Com_GetClientDObj(p_nextState->number, localClientNum);
  if ( !GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&cent->nextState.lerp.eFlags, ACTIVE, 0x11u) && resetAnimation )
  {
    pXAnimTree = _RDI->pXAnimTree;
    if ( !pXAnimTree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 4150, ASSERT_TYPE_ASSERT, "(pAnimTree)", (const char *)&queryFormat, "pAnimTree") )
      __debugbreak();
    if ( ClientDObj )
    {
      if ( !DObjGetTree(ClientDObj) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 4154, ASSERT_TYPE_ASSERT, "(DObjGetTree( obj ))", (const char *)&queryFormat, "DObjGetTree( obj )") )
        __debugbreak();
      if ( DObjGetTree(ClientDObj) != pXAnimTree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 4155, ASSERT_TYPE_ASSERT, "(DObjGetTree( obj ) == pAnimTree)", (const char *)&queryFormat, "DObjGetTree( obj ) == pAnimTree") )
        __debugbreak();
      v18 = (__int64)v13->GetAnimStatics(v13);
      if ( !v18 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 4158, ASSERT_TYPE_ASSERT, "(bgameAnim)", (const char *)&queryFormat, "bgameAnim") )
        __debugbreak();
      if ( _RDI->usingAnimState )
      {
        BG_AnimationState_Reset(&cent->nextState, _RDI);
      }
      else
      {
        __asm
        {
          vmovaps [rsp+0A8h+var_48], xmm7
          vxorps  xmm7, xmm7, xmm7
          vmovss  dword ptr [rsp+0A8h+fmt], xmm7
        }
        XAnimClearTreeGoalWeights(pXAnimTree, 0, XANIM_SUBTREE_DEFAULT, 0, fmt, 1, ClientDObj, LINEAR);
        if ( !PlayerASM_IsEnabled() )
        {
          __asm
          {
            vmovaps [rsp+0A8h+var_38], xmm6
            vmovss  xmm6, cs:__real@3f800000
            vmovss  dword ptr [rsp+0A8h+objID], xmm6
            vmovss  [rsp+0A8h+forceBlendTime], xmm7
            vmovss  dword ptr [rsp+0A8h+fmt], xmm7
          }
          XAnimSetCompleteGoalWeight(ClientDObj, 0, XANIM_SUBTREE_DEFAULT, *(unsigned __int16 *)(v18 + 40), fmta, *(float *)&forceBlendTimea, objIDa, (scr_string_t)0, 0, 0, LINEAR, NULL);
          __asm
          {
            vmovss  dword ptr [rsp+0A8h+objID], xmm6
            vmovss  [rsp+0A8h+forceBlendTime], xmm7
            vmovss  dword ptr [rsp+0A8h+fmt], xmm6
          }
          XAnimSetCompleteGoalWeight(ClientDObj, 0, XANIM_SUBTREE_DEFAULT, *(unsigned __int16 *)(v18 + 42), fmtb, *(float *)&forceBlendTimeb, objIDb, (scr_string_t)0, 0, 0, LINEAR, NULL);
          __asm { vmovaps xmm6, [rsp+0A8h+var_38] }
        }
        __asm { vmovaps xmm7, [rsp+0A8h+var_48] }
      }
      memset_0(&_RDI->legs, 0, sizeof(_RDI->legs));
      _RDI->legs.yawAngle = _RDI->playerAngles.v[1];
      _RDI->legs.pitchAngle = 0.0;
      memset_0(&_RDI->torso, 0, sizeof(_RDI->torso));
      _RDI->torso.yawAngle = _RDI->playerAngles.v[1];
      _RDI->torso.pitchAngle = _RDI->playerAngles.v[0];
      _RDI->stanceTransitionTime = *(_DWORD *)(v18 + 19528);
      XAnimBonePhysicsReset(ClientDObj);
    }
    if ( !_RDI->usingAnimState && PlayerASM_IsEnabled() )
      _RDI->playerASMLocomotion.forceUpdate = 1;
  }
  if ( !_RDI->usingAnimState && PlayerASM_IsEnabled() )
  {
    if ( CG_IsPlayerEntityNumber(&cgameGlob->predictedPlayerState, cent->nextState.clientNum) && !BG_IsSpectating(&cgameGlob->predictedPlayerState) )
    {
      suitIndex = _RDI->suitIndex;
      if ( PlayerASM_IsEnabled() && !PlayerASM_IsConnectingPaths() )
      {
        AnimsetIndexBySuit = BG_PlayerASM_GetAnimsetIndexBySuit(suitIndex);
        if ( ((cent->nextState.animInfo.animData >> 1) & 3) != AnimsetIndexBySuit )
          cent->nextState.animInfo.animData = cent->nextState.animInfo.animData & 0x80000001 | (2 * (AnimsetIndexBySuit & 3));
      }
    }
    Animset = BG_PlayerASM_GetAnimset(&cent->nextState);
    LOBYTE(v26) = 1;
    BG_PlayersASM_ResetAnimTree(Animset, CG_MainMP_AllocXAnimClient, v26, _RDI);
  }
  v27 = (unsigned int)cent->nextState.clientNum;
  v28 = CgGlobalsMP::GetLocalClientGlobals(localClientNum);
  if ( (unsigned int)v27 >= 0xF8 )
  {
    LODWORD(objID) = 248;
    LODWORD(forceBlendTime) = v27;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 1355, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( ( sizeof( *array_counter( cgameGlob->m_playerUpdateAnimInfo ) ) + 0 ) )", "clientNum doesn't index ARRAY_COUNT( cgameGlob->m_playerUpdateAnimInfo )\n\t%i not in [0, %i)", forceBlendTime, objID) )
      __debugbreak();
  }
  v28->m_playerUpdateAnimInfo[v27].accumulatedTime = 0;
  memset_0(_RDI->shaderOverride, 0, sizeof(_RDI->shaderOverride));
  CG_PlayersMP_UpdateCharacterScriptable(localClientNum, p_nextState, _RDI, ClientDObj);
  v29 = DVARBOOL_cg_debugposition;
  if ( !DVARBOOL_cg_debugposition && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_debugposition") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v29);
  if ( v29->current.enabled )
  {
    __asm
    {
      vmovss  xmm3, dword ptr [rdi+858h]
      vcvtss2sd xmm3, xmm3, xmm3
      vmovq   r9, xmm3
    }
    Com_Printf(17, "%i ResetPlayerEntity yaw=%f\n", (unsigned int)p_nextState->number, *(double *)&_XMM3);
  }
}

/*
==============
CG_PlayersMP_ResetClientWeaponVisibility
==============
*/
void CG_PlayersMP_ResetClientWeaponVisibility(const LocalClientNum_t localClientNum)
{
  unsigned __int64 v1; 
  int v3; 

  v1 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v3 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 4589, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( s_weaponVisCount ) ) + 0 ) )", "localClientNum doesn't index s_weaponVisCount\n\t%i not in [0, %i)", localClientNum, v3) )
      __debugbreak();
  }
  if ( Sys_ExistsWorkerCmdsOfType(WRKCMD_WEAPON_VISIBILITY) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 4669, ASSERT_TYPE_ASSERT, "( !Sys_ExistsWorkerCmdsOfType( WRKCMD_WEAPON_VISIBILITY ) )", "Should be waited on as a front-end worker command") )
    __debugbreak();
  if ( v1 >= 2 )
  {
    j___report_rangecheckfailure(v1);
    JUMPOUT(0x141EEDD58i64);
  }
  s_weaponVisActive[v1] = 0;
  s_weaponVisCount[v1] = 0;
  memset_0(s_weaponVisEnt[v1], 0, sizeof(unsigned __int16[64]));
}

/*
==============
CG_PlayersMP_ResetPlayerBrCircleEffects
==============
*/
void CG_PlayersMP_ResetPlayerBrCircleEffects(void)
{
  *(_QWORD *)s_playerBrCircleFX = 0i64;
}

/*
==============
CG_PlayersMP_SetCharacterAngles
==============
*/

void __fastcall CG_PlayersMP_SetCharacterAngles(CgGlobalsMP *cgameGlob, centity_t *cent, double lerp)
{
  entityType_s eType; 
  CgStatic *LocalClientStatics; 
  int clientNum; 
  cg_t *LocalClientGlobals; 
  unsigned int groundRefEnt; 
  CgHandler *Handler; 
  vec3_t *p_angles; 
  const vec3_t *p_playerAngles; 
  __int64 v104; 
  vec3_t outSlopeNormal; 
  vec3_t v106; 
  vec3_t angles; 
  tmat33_t<vec3_t> axis; 
  tmat33_t<vec3_t> in1; 
  tmat33_t<vec3_t> out; 
  char v111; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm8
    vmovaps xmmword ptr [rax-68h], xmm9
    vmovaps xmmword ptr [rax-78h], xmm10
    vmovaps xmm8, xmm2
  }
  if ( !cgameGlob && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 1369, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 1370, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( cent == (centity_t *)-400i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 1921, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  eType = cent->nextState.eType;
  if ( (((eType - 1) & 0xFFED) != 0 || eType == ET_ITEM) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 1371, ASSERT_TYPE_ASSERT, "(BG_IsCharacterEntity( &cent->nextState ))", (const char *)&queryFormat, "BG_IsCharacterEntity( &cent->nextState )") )
    __debugbreak();
  LocalClientStatics = CgStatic::GetLocalClientStatics((const LocalClientNum_t)cgameGlob->localClientNum);
  clientNum = cent->nextState.clientNum;
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)LocalClientStatics->m_localClientNum);
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static_inline.h", 25, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  _RBX = CG_GetCharacterInfo(LocalClientGlobals, clientNum);
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 1378, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
    __debugbreak();
  __asm { vmovaps xmm2, xmm8; lerpRatio }
  _RBX->leftStickInputInterpolated = BG_LerpPackedPolarCoordsToCartesian(cent->prevState.u.player.leftStickPolarPacked, cent->nextState.lerp.u.player.leftStickPolarPacked, *(const float *)&_XMM2);
  __asm
  {
    vmovaps xmm2, xmm8; lerpRatio
    vmovss  xmm9, cs:__real@3f800000
  }
  _RBX->rightStickInputInterpolated = BG_LerpPackedPolarCoordsToCartesian(cent->prevState.u.player.rightStickPolarPacked, cent->nextState.lerp.u.player.rightStickPolarPacked, *(const float *)&_XMM2);
  __asm { vmovaps xmm1, xmm9; maxAbsValueSize }
  *(double *)&_XMM0 = MSG_UnpackSignedFloat(cent->nextState.lerp.u.player.extraAnimData.anonymous.data[0], *(float *)&_XMM1, 0x10u);
  __asm
  {
    vmovaps xmm1, xmm9; maxAbsValueSize
    vmovaps xmm6, xmm0
    vsubss  xmm7, xmm9, xmm8
  }
  *(double *)&_XMM0 = MSG_UnpackSignedFloat(cent->prevState.u.player.extraAnimData.anonymous.data[0], *(float *)&_XMM1, 0x10u);
  __asm
  {
    vmulss  xmm1, xmm8, xmm6
    vmulss  xmm2, xmm0, xmm7
    vaddss  xmm2, xmm2, xmm1
    vmovss  dword ptr [rbx+904h], xmm2
    vmovaps xmm1, xmm9; maxAbsValueSize
  }
  *(double *)&_XMM0 = MSG_UnpackSignedFloat(cent->nextState.lerp.u.player.extraAnimData.anonymous.data[1], *(float *)&_XMM1, 0x10u);
  __asm
  {
    vmovaps xmm1, xmm9; maxAbsValueSize
    vmovaps xmm6, xmm0
  }
  *(double *)&_XMM0 = MSG_UnpackSignedFloat(cent->prevState.u.player.extraAnimData.anonymous.data[1], *(float *)&_XMM1, 0x10u);
  __asm
  {
    vmulss  xmm1, xmm8, xmm6
    vmulss  xmm2, xmm0, xmm7
    vaddss  xmm2, xmm2, xmm1
    vmovss  dword ptr [rbx+908h], xmm2
    vmovaps xmm1, xmm9; maxAbsValueSize
  }
  *(double *)&_XMM0 = MSG_UnpackSignedFloat(cent->nextState.lerp.u.player.extraAnimData.anonymous.data[2], *(float *)&_XMM1, 0x10u);
  __asm
  {
    vmovaps xmm1, xmm9; maxAbsValueSize
    vmovaps xmm6, xmm0
  }
  *(double *)&_XMM0 = MSG_UnpackSignedFloat(cent->prevState.u.player.extraAnimData.anonymous.data[2], *(float *)&_XMM1, 0x10u);
  __asm
  {
    vmulss  xmm2, xmm0, xmm7
    vmulss  xmm1, xmm8, xmm6
    vaddss  xmm2, xmm2, xmm1
    vmovss  dword ptr [rbx+90Ch], xmm2
  }
  *(double *)&_XMM0 = BG_MovementDirToDegrees(cent->nextState.lerp.u.player.movementDir);
  __asm { vmovaps xmm6, xmm0 }
  *(double *)&_XMM0 = BG_MovementDirToDegrees(cent->prevState.u.player.movementDir);
  __asm
  {
    vmovss  xmm7, cs:__real@3b360b61
    vsubss  xmm1, xmm6, xmm0
    vmulss  xmm4, xmm1, xmm7
    vaddss  xmm2, xmm4, cs:__real@3f000000
    vxorps  xmm1, xmm1, xmm1
    vmovss  xmm2, xmm1, xmm2
    vmovaps xmm5, xmm0
    vxorps  xmm10, xmm10, xmm10
    vroundss xmm3, xmm10, xmm2, 1
    vsubss  xmm1, xmm4, xmm3
    vmulss  xmm1, xmm1, cs:__real@43b40000
    vmulss  xmm0, xmm1, xmm8
    vmovss  xmm1, dword ptr [rbx+8BCh]; angle2
    vaddss  xmm6, xmm0, xmm5
    vmovaps xmm0, xmm6; angle1
  }
  *(double *)&_XMM0 = AngleDelta(*(const float *)&_XMM0, *(const float *)&_XMM1);
  __asm
  {
    vmovss  dword ptr [rbx+8C0h], xmm0
    vmovss  dword ptr [rbx+8BCh], xmm6
  }
  BG_SlopeWorldmodel_Unpack(&cent->prevState.u.player.slopePacked, &outSlopeNormal);
  BG_SlopeWorldmodel_Unpack(&cent->nextState.lerp.u.player.slopePacked, &v106);
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+168h+var_118]
    vsubss  xmm1, xmm0, dword ptr [rsp+168h+outSlopeNormal]
    vmulss  xmm2, xmm1, xmm8
    vaddss  xmm6, xmm2, dword ptr [rsp+168h+outSlopeNormal]
    vmovss  dword ptr [rbx+393Ch], xmm6
    vmovss  xmm0, dword ptr [rsp+168h+var_118+4]
    vsubss  xmm1, xmm0, dword ptr [rsp+168h+outSlopeNormal+4]
    vmulss  xmm2, xmm1, xmm8
    vaddss  xmm5, xmm2, dword ptr [rsp+168h+outSlopeNormal+4]
    vmovss  dword ptr [rbx+3940h], xmm5
    vmovss  xmm0, dword ptr [rsp+168h+var_118+8]
    vsubss  xmm1, xmm0, dword ptr [rsp+168h+outSlopeNormal+8]
    vmulss  xmm2, xmm1, xmm8
    vaddss  xmm3, xmm2, dword ptr [rsp+168h+outSlopeNormal+8]
    vmulss  xmm1, xmm6, xmm6
    vmulss  xmm0, xmm5, xmm5
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm3, xmm3
    vaddss  xmm4, xmm2, xmm1
    vcvtss2sd xmm0, xmm4, xmm4
    vcomisd xmm0, cs:__real@3d719799812dea11
    vmovss  dword ptr [rbx+3944h], xmm3
    vsqrtss xmm1, xmm4, xmm4
    vcmpless xmm0, xmm1, cs:__real@80000000
    vblendvps xmm0, xmm1, xmm9, xmm0
    vdivss  xmm2, xmm9, xmm0
    vmulss  xmm0, xmm2, xmm6
    vmovss  dword ptr [rbx+393Ch], xmm0
    vmulss  xmm0, xmm2, xmm5
    vmovss  dword ptr [rbx+3940h], xmm0
    vmulss  xmm0, xmm2, xmm3
    vmovss  dword ptr [rbx+3944h], xmm0
  }
  if ( PlayerASM_IsEnabled() )
  {
    *(double *)&_XMM0 = BG_MovementDirToDegrees(cent->nextState.lerp.u.player.velocityDir);
    __asm { vmovaps xmm6, xmm0 }
    BG_MovementDirToDegrees(cent->prevState.u.player.velocityDir);
    __asm
    {
      vsubss  xmm1, xmm6, xmm0
      vmulss  xmm5, xmm1, xmm7
      vaddss  xmm3, xmm5, cs:__real@3f000000
      vxorps  xmm2, xmm2, xmm2
      vmovss  xmm1, xmm2, xmm3
      vroundss xmm4, xmm10, xmm1, 1
      vsubss  xmm2, xmm5, xmm4
      vmulss  xmm1, xmm2, cs:__real@43b40000
      vmulss  xmm3, xmm1, xmm8
      vaddss  xmm0, xmm3, xmm0; velocityAngle
    }
    BG_PlayerASM_UpdateAngles(*(const float *)&_XMM0, _RBX);
  }
  if ( !Com_GameMode_SupportsFeature(WEAPON_MELEE) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 1411, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::ENTITY_GROUND_REF ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::ENTITY_GROUND_REF )") )
    __debugbreak();
  groundRefEnt = cgameGlob->predictedPlayerState.groundRefEnt;
  if ( groundRefEnt >= 0x800 )
  {
    LODWORD(v104) = cgameGlob->predictedPlayerState.groundRefEnt;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 1413, ASSERT_TYPE_ASSERT, "(unsigned)( groundRefEnt ) < (unsigned)( ( 2048 ) )", "groundRefEnt doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v104, 2048) )
      __debugbreak();
  }
  if ( groundRefEnt == 2047 || (Handler = CgHandler::getHandler(cgameGlob->localClientNum), !Handler->GetEntityAngles(Handler, groundRefEnt, &angles)) )
  {
    p_angles = &cent->pose.angles;
    p_playerAngles = &_RBX->playerAngles;
    _RBX->playerAngles.v[0] = cent->pose.angles.v[0];
    _RBX->playerAngles.v[1] = cent->pose.angles.v[1];
    _RBX->playerAngles.v[2] = cent->pose.angles.v[2];
  }
  else
  {
    AnglesToAxis(&angles, &axis);
    p_angles = &cent->pose.angles;
    AnglesToAxis(&cent->pose.angles, &in1);
    MatrixMultiply(&in1, &axis, &out);
    p_playerAngles = &_RBX->playerAngles;
    AxisToAngles(&out, &_RBX->playerAngles);
  }
  __asm { vmovaps xmm1, xmm8; lerp }
  CG_PlayersMP_ApplyWorldUp(cent, *(double *)&_XMM1, p_playerAngles, &_RBX->playerAnglesWorld);
  if ( !_RBX->usingAnimState )
  {
    p_angles->v[0] = 0.0;
    cent->pose.angles.v[2] = 0.0;
  }
  __asm { vmovaps xmm1, xmm8; lerp }
  CG_PlayersMP_ApplyWorldUp(cent, *(double *)&_XMM1, p_angles, p_angles);
  _R11 = &v111;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
  }
}

/*
==============
CG_PlayersMP_ShouldProcessLocalPlayerEntity
==============
*/
__int64 CG_PlayersMP_ShouldProcessLocalPlayerEntity(LocalClientNum_t localClientNum)
{
  cg_t *LocalClientGlobals; 
  unsigned int v3; 
  centity_t *predictedPlayerEntity; 
  CgWeaponMap *Instance; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( GameModeFlagValues::ms_mpValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 190, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a MP-only context", "IsFlagActive( index )") )
    __debugbreak();
  v3 = 1;
  if ( !GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&LocalClientGlobals->predictedPlayerState.otherFlags, ACTIVE, 0x22u) )
  {
    if ( GameModeFlagValues::ms_mpValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 190, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a MP-only context", "IsFlagActive( index )") )
      __debugbreak();
    if ( !GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&LocalClientGlobals->predictedPlayerState.otherFlags, ACTIVE, 0x21u) )
      return 0i64;
  }
  if ( !Com_GetClientDObj(LocalClientGlobals->predictedPlayerState.clientNum, localClientNum) )
    return 0i64;
  predictedPlayerEntity = LocalClientGlobals->predictedPlayerEntity;
  if ( CG_Entity_IsNoDraw(localClientNum, &predictedPlayerEntity->nextState, NULL) || GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&predictedPlayerEntity->nextState.lerp.eFlags, ACTIVE, 0x11u) )
    return 0i64;
  if ( LocalClientGlobals == (cg_t *)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2393, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&LocalClientGlobals->predictedPlayerState.otherFlags, ACTIVE, 0x18u) )
  {
    if ( !Com_GameMode_SupportsFeature(WEAPON_DROPPING_LADDER_CLIMB) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2396, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::TURRET_REMOTE_CONTROL ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::TURRET_REMOTE_CONTROL )") )
    {
      __debugbreak();
      return 1i64;
    }
  }
  else
  {
    if ( !Dvar_GetBool_Internal_DebugName(DCONST_DVARMPBOOL_cg_drawPlayerShadow, "cg_drawPlayerShadow") && !Dvar_GetBool_Internal_DebugName(DCONST_DVARMPSPBOOL_cg_drawPlayerLegs, "cg_drawPlayerLegs") )
      goto LABEL_32;
    if ( LocalClientGlobals == (cg_t *)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2152, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    if ( BG_IsTurretActiveFlags(&LocalClientGlobals->predictedPlayerState.eFlags) )
    {
LABEL_32:
      if ( !LocalClientGlobals->renderingThirdPerson )
      {
        Instance = CgWeaponMap::GetInstance(localClientNum);
        if ( !BG_IsThirdPersonMode(Instance, &LocalClientGlobals->predictedPlayerState) )
          return 0;
      }
    }
  }
  return v3;
}

/*
==============
CG_PlayersMP_StartUpdateClientWeaponVisibility
==============
*/
void CG_PlayersMP_StartUpdateClientWeaponVisibility(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  __int64 v2; 
  __int64 v3; 
  __int64 v4; 
  unsigned __int16 *v5; 
  __int64 v6; 
  __int64 v7; 
  LocalClientNum_t data; 
  unsigned __int16 v9; 

  v1 = localClientNum;
  data = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 4639, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( s_weaponVisCount ) ) + 0 ) )", "localClientNum doesn't index s_weaponVisCount\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  v2 = v1;
  v3 = s_weaponVisCount[v1];
  if ( (unsigned int)v3 > 0x40 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 4641, ASSERT_TYPE_ASSERT, "( visCount ) <= ( WEAPON_VISIBILITY_MAX_PLAYERS )", "%s <= %s\n\t%i, %i", "visCount", "WEAPON_VISIBILITY_MAX_PLAYERS", v3, 64) )
    __debugbreak();
  s_weaponVisCount[v2] = 0;
  v4 = v3;
  if ( (int)v3 > 0 )
  {
    v5 = s_weaponVisEnt[v2];
    do
    {
      if ( *v5 >= 0x7FEu )
      {
        LODWORD(v7) = 2046;
        LODWORD(v6) = *v5;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 4647, ASSERT_TYPE_ASSERT, "(unsigned)( s_weaponVisEnt[localClientNum][visIndex] ) < (unsigned)( ENTITYNUM_ORDINARY_END )", "s_weaponVisEnt[localClientNum][visIndex] doesn't index ENTITYNUM_ORDINARY_END\n\t%i not in [0, %i)", v6, v7) )
          __debugbreak();
      }
      v9 = *v5;
      Sys_AddWorkerCmd(WRKCMD_WEAPON_VISIBILITY, &data);
      ++v5;
      --v4;
    }
    while ( v4 );
  }
  s_weaponVisActive[v2] = 1;
}

/*
==============
CG_PlayersMP_UpdateAgentModels
==============
*/
__int64 CG_PlayersMP_UpdateAgentModels(const LocalClientNum_t localClientNum, characterInfo_t *characterInfo)
{
  __int64 v2; 
  ClConfigStrings *ClConfigStrings; 
  const char *v5; 
  const char *v6; 
  unsigned int v7; 
  bool *attachTagIndexChanged; 
  int *attachTagIndex; 
  __int64 v10; 
  __int64 v11; 
  unsigned __int64 v12; 
  const char *v13; 
  char *v14; 
  char *v15; 
  char v16; 
  __int64 v17; 
  char v18; 
  __int64 v19; 
  __int64 v20; 
  unsigned __int64 v21; 
  const char *v22; 
  char *v23; 
  char *v24; 
  char v25; 
  __int64 v26; 
  char v27; 
  unsigned __int8 v29; 
  ClConfigStrings *v30; 

  v2 = localClientNum;
  if ( !characterInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 1980, ASSERT_TYPE_ASSERT, "(characterInfo != nullptr)", (const char *)&queryFormat, "characterInfo != nullptr") )
    __debugbreak();
  if ( s_weaponVisActive[v2] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 1981, ASSERT_TYPE_ASSERT, "(!CG_PlayersMP_IsWeaponVisibilityTestActive( localClientNum ))", (const char *)&queryFormat, "!CG_PlayersMP_IsWeaponVisibilityTestActive( localClientNum )") )
    __debugbreak();
  ClConfigStrings = ClConfigStrings::GetClConfigStrings();
  v30 = ClConfigStrings;
  v29 = 0;
  if ( characterInfo->modelIndexChanged )
  {
    v5 = ClConfigStrings->GetModelString(ClConfigStrings, characterInfo->modelIndex);
    characterInfo->dobjModelLoaded = 1;
    v6 = v5;
    if ( I_strcmp(characterInfo->model, v5) )
    {
      Core_strcpy(characterInfo->model, 0x40ui64, v6);
      v29 = 1;
    }
    characterInfo->modelIndexChanged = 0;
  }
  v7 = 0;
  attachTagIndexChanged = characterInfo->attachTagIndexChanged;
  attachTagIndex = characterInfo->attachTagIndex;
  do
  {
    if ( *(attachTagIndexChanged - 9) )
    {
      v10 = (__int64)ClConfigStrings->GetModelString(ClConfigStrings, *(attachTagIndex - 9));
      v11 = 0x7FFFFFFFi64;
      v12 = (unsigned __int64)v7 << 6;
      v13 = (const char *)v10;
      attachTagIndexChanged[677] = 1;
      v14 = (char *)v10;
      v15 = &characterInfo->attachModelNames[0][v12];
      if ( (characterInfo_t *)((char *)characterInfo + v12) == (characterInfo_t *)-161i64 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, (AssertType)(v12 + (_DWORD)characterInfo + 162), "( s0 )", (const char *)&queryFormat, "s0") )
        __debugbreak();
      if ( !v13 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 182, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
        __debugbreak();
      do
      {
        v16 = v14[v15 - v13];
        v17 = v11;
        v18 = *v14++;
        --v11;
        if ( !v17 )
          break;
        if ( v16 != v18 )
        {
          Core_strcpy(v15, 0x40ui64, v13);
          v29 = 1;
          break;
        }
      }
      while ( v16 );
      ClConfigStrings = v30;
      *(attachTagIndexChanged - 9) = 0;
    }
    if ( *attachTagIndexChanged )
    {
      v19 = (__int64)ClConfigStrings->GetClientTagString(ClConfigStrings, *attachTagIndex);
      v20 = 0x7FFFFFFFi64;
      v21 = (unsigned __int64)v7 << 6;
      v22 = (const char *)v19;
      v23 = (char *)v19;
      v24 = &characterInfo->attachTagNames[0][v21];
      if ( (characterInfo_t *)((char *)characterInfo + v21) == (characterInfo_t *)-737i64 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, (AssertType)(v21 + (_DWORD)characterInfo + 738), "( s0 )", (const char *)&queryFormat, "s0") )
        __debugbreak();
      if ( !v22 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 182, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
        __debugbreak();
      do
      {
        v25 = v23[v24 - v22];
        v26 = v20;
        v27 = *v23++;
        --v20;
        if ( !v26 )
          break;
        if ( v25 != v27 )
        {
          Core_strcpy(v24, 0x40ui64, v22);
          v29 = 1;
          break;
        }
      }
      while ( v25 );
      *attachTagIndexChanged = 0;
    }
    ClConfigStrings = v30;
    ++v7;
    ++attachTagIndex;
    ++attachTagIndexChanged;
  }
  while ( v7 < 9 );
  return v29;
}

/*
==============
CG_PlayersMP_UpdateAnimSet
==============
*/
void CG_PlayersMP_UpdateAnimSet(const cg_t *const cgameGlob, const centity_t *const cent, characterInfo_t *const ci)
{
  CgWeaponMap *Instance; 
  bool v7; 

  if ( !cgameGlob && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 4035, ASSERT_TYPE_ASSERT, "(cgameGlob != nullptr)", (const char *)&queryFormat, "cgameGlob != nullptr") )
    __debugbreak();
  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 4036, ASSERT_TYPE_ASSERT, "(cent != nullptr)", (const char *)&queryFormat, "cent != nullptr") )
    __debugbreak();
  if ( (cent->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 4037, ASSERT_TYPE_ASSERT, "(CENextValid( cent ))", (const char *)&queryFormat, "CENextValid( cent )") )
    __debugbreak();
  if ( !ci && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 4038, ASSERT_TYPE_ASSERT, "(ci != nullptr)", (const char *)&queryFormat, "ci != nullptr") )
    __debugbreak();
  if ( CG_IsPlayerEntityNumber(&cgameGlob->predictedPlayerState, cent->nextState.number) )
  {
    if ( !CG_PlayersMP_ShouldProcessLocalPlayerEntity(cgameGlob->localClientNum) )
      return;
    Instance = CgWeaponMap::GetInstance((const LocalClientNum_t)cgameGlob->localClientNum);
    v7 = !cgameGlob->renderingThirdPerson && !BG_IsThirdPersonMode(Instance, &cgameGlob->predictedPlayerState);
  }
  else
  {
    v7 = 0;
  }
  CG_Players_SetUseShadowAnims(ci, v7);
}

/*
==============
CG_PlayersMP_UpdateCharacterDObj
==============
*/
void CG_PlayersMP_UpdateCharacterDObj(LocalClientNum_t localClientNum, centity_t *cent)
{
  __int64 v2; 
  entityState_t *p_nextState; 
  CgGlobalsMP *LocalClientGlobals; 
  CgStatic *LocalClientStatics; 
  int clientNum; 
  CgStatic *v8; 
  cg_t *v9; 
  characterInfo_t *ci; 
  CgWeaponMap *Instance; 
  bool v12; 
  entityType_s eType; 
  const clientInfo_t *v14; 
  DObj *ClientDObj; 
  bool v16; 
  const CgWeaponMap *v17; 
  const DObj *v18; 
  cg_t *v19; 
  int number; 
  XModel *HelmetModel; 
  const DObj *Model; 
  XModel *v23; 
  DObj *v24; 
  __int64 entnum; 
  __int64 v26; 
  __int64 v27; 
  DObjModel outDObjModel; 

  v2 = localClientNum;
  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 4063, ASSERT_TYPE_ASSERT, "(cent != nullptr)", (const char *)&queryFormat, "cent != nullptr") )
    __debugbreak();
  if ( s_weaponVisActive[v2] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 4064, ASSERT_TYPE_ASSERT, "(!CG_PlayersMP_IsWeaponVisibilityTestActive( localClientNum ))", (const char *)&queryFormat, "!CG_PlayersMP_IsWeaponVisibilityTestActive( localClientNum )") )
    __debugbreak();
  p_nextState = &cent->nextState;
  if ( cent->nextState.clientNum != cent->nextState.number && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 4065, ASSERT_TYPE_ASSERT, "( cent->nextState.clientNum ) == ( cent->nextState.number )", "%s == %s\n\t%i, %i", "cent->nextState.clientNum", "cent->nextState.number", cent->nextState.clientNum, cent->nextState.number) )
    __debugbreak();
  LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals((const LocalClientNum_t)v2);
  LocalClientStatics = CgStatic::GetLocalClientStatics((const LocalClientNum_t)v2);
  clientNum = cent->nextState.clientNum;
  v8 = LocalClientStatics;
  v9 = CG_GetLocalClientGlobals((const LocalClientNum_t)LocalClientStatics->m_localClientNum);
  if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static_inline.h", 25, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  ci = CG_GetCharacterInfo(v9, clientNum);
  if ( !ci && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 4070, ASSERT_TYPE_ASSERT, "(ci != nullptr)", (const char *)&queryFormat, "ci != nullptr") )
    __debugbreak();
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 4035, ASSERT_TYPE_ASSERT, "(cgameGlob != nullptr)", (const char *)&queryFormat, "cgameGlob != nullptr") )
    __debugbreak();
  if ( (cent->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 4037, ASSERT_TYPE_ASSERT, "(CENextValid( cent ))", (const char *)&queryFormat, "CENextValid( cent )") )
    __debugbreak();
  if ( !ci && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 4038, ASSERT_TYPE_ASSERT, "(ci != nullptr)", (const char *)&queryFormat, "ci != nullptr") )
    __debugbreak();
  if ( CG_IsPlayerEntityNumber(&LocalClientGlobals->predictedPlayerState, p_nextState->number) )
  {
    if ( !CG_PlayersMP_ShouldProcessLocalPlayerEntity(LocalClientGlobals->localClientNum) )
      goto LABEL_33;
    Instance = CgWeaponMap::GetInstance((const LocalClientNum_t)LocalClientGlobals->localClientNum);
    v12 = !LocalClientGlobals->renderingThirdPerson && !BG_IsThirdPersonMode(Instance, &LocalClientGlobals->predictedPlayerState);
  }
  else
  {
    v12 = 0;
  }
  CG_Players_SetUseShadowAnims(ci, v12);
LABEL_33:
  eType = cent->nextState.eType;
  if ( eType == ET_PLAYER )
  {
    v14 = v8->GetClientInfo(v8, cent->nextState.clientNum);
    if ( CG_PlayersMP_UpdatePlayerModels((const LocalClientNum_t)v2, v14, ci) )
      ci->dobjDirty = 1;
    if ( !(unsigned int)CG_CheckValidPlayerCharacterInfoModels((LocalClientNum_t)v2, ci) )
    {
      LODWORD(entnum) = cent->nextState.clientNum;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 4083, ASSERT_TYPE_ASSERT, "(CG_CheckValidPlayerCharacterInfoModels( localClientNum, ci ))", "%s\n\tClient model update failed. Should have been verified in CG_PlayersMP_UpdatePlayerModels. Client %i ('%s')", "CG_CheckValidPlayerCharacterInfoModels( localClientNum, ci )", entnum, ci->model) )
        __debugbreak();
    }
  }
  else
  {
    if ( eType != ET_AGENT )
    {
      LODWORD(v27) = 17;
      LODWORD(v26) = eType;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 4087, ASSERT_TYPE_ASSERT, "( cent->nextState.eType ) == ( ET_AGENT )", "%s == %s\n\t%i, %i", "cent->nextState.eType", "ET_AGENT", v26, v27) )
        __debugbreak();
    }
    if ( CG_PlayersMP_UpdateAgentModels((const LocalClientNum_t)v2, ci) )
      ci->dobjDirty = 1;
  }
  if ( (ci->usingAnimState != 0) != (cent->nextState.animInfo.animData & 1) )
  {
    LODWORD(v26) = cent->nextState.animInfo.animData & 1;
    LODWORD(entnum) = ci->usingAnimState;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 4094, ASSERT_TYPE_ASSERT, "(!!ci->usingAnimState == !!cent->nextState.animInfo.selectAnim.usingAnimState)", "%s\n\tCharacter was not reset when changing its animation system. Was %d and is now %d", "!!ci->usingAnimState == !!cent->nextState.animInfo.selectAnim.usingAnimState", entnum, v26) )
      __debugbreak();
  }
  ClientDObj = Com_GetClientDObj(cent->nextState.clientNum, (LocalClientNum_t)v2);
  v16 = !ClientDObj || ci->dobjDirty;
  if ( LocalClientGlobals->m_usePlayerAnimation )
  {
    v17 = CgWeaponMap::GetInstance((const LocalClientNum_t)v2);
    CG_PlayersMP_UpdatePlayerDObj((LocalClientNum_t)v2, cent, ClientDObj, v17, &cent->nextState, ci);
  }
  if ( CG_Entity_ShouldCreateClothOnInit((const LocalClientNum_t)v2, p_nextState->number) )
    CG_Entity_CreateCloth((const LocalClientNum_t)v2, p_nextState->number);
  v18 = Com_GetClientDObj(cent->nextState.clientNum, (LocalClientNum_t)v2);
  if ( v18 && v16 )
    CG_PlayersMP_UpdateCharacterScriptable((const LocalClientNum_t)v2, &cent->nextState, ci, v18);
  if ( LocalClientGlobals->m_usePlayerAnimation )
  {
    CG_Players_UpdatePlayerLegsDObj((LocalClientNum_t)v2, cent);
    v19 = CG_GetLocalClientGlobals((const LocalClientNum_t)v2);
    if ( p_nextState->number == v19->predictedPlayerState.clientNum )
    {
      if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 1590, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
        __debugbreak();
      number = p_nextState->number;
      if ( CG_GetLocalClientGlobals((const LocalClientNum_t)v2)->refreshHelmetMaterialOverride )
        goto LABEL_67;
      HelmetModel = CG_PlayersMP_GetHelmetModel((LocalClientNum_t)v2, number);
      Model = Com_GetClientDObj(2115, (LocalClientNum_t)v2);
      if ( Model )
        Model = (const DObj *)DObjGetModel(Model, 0);
      if ( HelmetModel != (XModel *)Model )
      {
LABEL_67:
        CG_PlayersMP_ClearPlayerHelmetDObj((LocalClientNum_t)v2, v19);
        v23 = CG_PlayersMP_GetHelmetModel((LocalClientNum_t)v2, p_nextState->number);
        if ( v23 )
        {
          DObjInitModel(v23, (scr_string_t)0, 1, 0, NULL, &outDObjModel);
          v24 = Com_ClientDObjCreate(&outDObjModel, 1u, NULL, 2115, (LocalClientNum_t)v2, 1, 0x843u);
          DObjSetCamoMaterialOverride(v24, &outDObjModel, 1);
          v19->refreshHelmetMaterialOverride = 0;
        }
      }
    }
  }
}

/*
==============
CG_PlayersMP_UpdateCharacterScriptable
==============
*/
void CG_PlayersMP_UpdateCharacterScriptable(const LocalClientNum_t localClientNum, const entityState_t *es, const characterInfo_t *ci, const DObj *dobj)
{
  const ScriptableDef *v8; 
  const SuitDef *SuitDef; 
  const ScriptableDef *ScriptableDef; 
  ScriptableBindResult updated; 
  const char *name; 
  const char *v13; 

  if ( !es && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 3916, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  if ( !ci && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 3917, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
    __debugbreak();
  v8 = NULL;
  if ( (*(_BYTE *)&es->animInfo.selectAnim & 1) != 0 )
  {
    ScriptableDef = ScriptableBg_GetScriptableDef(es->eType, dobj);
LABEL_12:
    v8 = ScriptableDef;
    goto LABEL_13;
  }
  SuitDef = BG_GetSuitDef(ci->suitIndex);
  if ( SuitDef )
  {
    ScriptableDef = SuitDef->scriptableDef;
    if ( ScriptableDef )
      goto LABEL_12;
  }
LABEL_13:
  updated = ScriptableCl_UpdateReservedScriptableEntityBinding(localClientNum, es->number, v8);
  if ( updated )
  {
    if ( updated == Completed )
    {
      if ( v8 )
        name = v8->name;
      else
        name = "<none>";
      Com_Printf(14, "CG_PlayersMP_UpdateCharacterScriptable: Succesfully bound scriptable '%s' to entity %i.\n", name, (unsigned int)es->number);
    }
  }
  else
  {
    if ( v8 )
      v13 = v8->name;
    else
      v13 = "<none>";
    Com_Printf(14, "CG_PlayersMP_UpdateCharacterScriptable: Failed to bind scriptable '%s' to entity %i. Playerstate could be out of sync with the world, will try again.\n", v13, (unsigned int)es->number);
  }
}

/*
==============
CG_PlayersMP_UpdateClientWeaponVisibilityCmd
==============
*/
void CG_PlayersMP_UpdateClientWeaponVisibilityCmd(const void *const cmd)
{
  unsigned __int16 v4; 
  centity_t *Entity; 
  const dvar_t *v6; 
  CgStatic *LocalClientStatics; 
  __int64 clientNum; 
  cg_t *LocalClientGlobals; 
  const characterInfo_t *CharacterInfo; 
  const dvar_t *v11; 
  int integer; 
  const char *v14; 
  float fmt; 
  __int64 duration; 
  __int64 v18; 
  vec3_t outOrigin; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm { vmovaps xmmword ptr [rax-28h], xmm6 }
  if ( *(_DWORD *)cmd >= 2u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 4602, ASSERT_TYPE_ASSERT, "(unsigned)( visCmd->localClientNum ) < (unsigned)( ( sizeof( *array_counter( s_weaponVisEnt ) ) + 0 ) )", "visCmd->localClientNum doesn't index s_weaponVisEnt\n\t%i not in [0, %i)", *(_DWORD *)cmd, 2) )
    __debugbreak();
  v4 = *((_WORD *)cmd + 2);
  if ( v4 >= 0x7FEu )
  {
    LODWORD(v18) = 2046;
    LODWORD(duration) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 4603, ASSERT_TYPE_ASSERT, "(unsigned)( visCmd->entNum ) < (unsigned)( ENTITYNUM_ORDINARY_END )", "visCmd->entNum doesn't index ENTITYNUM_ORDINARY_END\n\t%i not in [0, %i)", duration, v18) )
      __debugbreak();
  }
  Entity = CG_GetEntity((const LocalClientNum_t)*(_DWORD *)cmd, *((unsigned __int16 *)cmd + 2));
  if ( !Entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 4606, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( Entity->pose.cullIn == 2 )
  {
    CG_WeaponVisibility_Update(*(const LocalClientNum_t *)cmd, Entity);
    v6 = DVARBOOL_cg_drawWVisDebug;
    if ( !DVARBOOL_cg_drawWVisDebug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawWVisDebug") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v6);
    if ( v6->current.enabled )
    {
      LocalClientStatics = CgStatic::GetLocalClientStatics((const LocalClientNum_t)*(_DWORD *)cmd);
      clientNum = Entity->nextState.clientNum;
      LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)LocalClientStatics->m_localClientNum);
      if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static_inline.h", 33, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
        __debugbreak();
      if ( LocalClientGlobals->IsMP(LocalClientGlobals) )
      {
        if ( (unsigned int)clientNum >= LocalClientGlobals[1].predictedPlayerState.rxvOmnvars[64].timeModified )
        {
          LODWORD(v18) = LocalClientGlobals[1].predictedPlayerState.rxvOmnvars[64].timeModified;
          LODWORD(duration) = clientNum;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_globals_mp_inline.h", 19, ASSERT_TYPE_ASSERT, "(unsigned)( characterIndex ) < (unsigned)( static_cast<int>( m_characterInfoCount ) )", "characterIndex doesn't index static_cast<int>( m_characterInfoCount )\n\t%i not in [0, %i)", duration, v18) )
            __debugbreak();
        }
        CharacterInfo = (const characterInfo_t *)(*(_QWORD *)&LocalClientGlobals[1].predictedPlayerState.rxvOmnvars[62] + 14792 * clientNum);
      }
      else
      {
        CharacterInfo = CgGlobalsSP::GetCharacterInfo((CgGlobalsSP *)LocalClientGlobals, clientNum);
      }
      if ( !CharacterInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 4617, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
        __debugbreak();
      CG_GetPoseOrigin(&Entity->pose, &outOrigin);
      v11 = DVARINT_cg_weaponVisInterval;
      if ( !DVARINT_cg_weaponVisInterval && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_weaponVisInterval") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v11);
      integer = v11->current.integer;
      __asm { vmovss  xmm6, cs:fontSize }
      v14 = j_va("Ent %i: heldOccluded %i, stowedOccluded %i", (unsigned int)Entity->nextState.number, CharacterInfo->heldWeaponOccluded, CharacterInfo->stowedWeaponOccluded);
      __asm { vmovss  dword ptr [rsp+88h+fmt], xmm6 }
      CG_DebugStarWithText(&outOrigin, &colorRed, &colorRed, v14, fmt, integer);
      memset(&outOrigin, 0, sizeof(outOrigin));
    }
  }
  __asm { vmovaps xmm6, [rsp+88h+var_28] }
}

/*
==============
CG_PlayersMP_UpdateCorpseDObj
==============
*/
void CG_PlayersMP_UpdateCorpseDObj(LocalClientNum_t localClientNum, const centity_t *cent, characterInfo_t *ci)
{
  DObj *ClientDObj; 
  CgWeaponMap *Instance; 

  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 3564, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( (cent->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 3565, ASSERT_TYPE_ASSERT, "(CENextValid( cent ))", (const char *)&queryFormat, "CENextValid( cent )") )
    __debugbreak();
  if ( !ci && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 3566, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
    __debugbreak();
  if ( !(unsigned int)CG_CheckValidPlayerCharacterInfoModels(localClientNum, ci) )
  {
    Com_PrintWarning(14, "WARNING: Disabling corpse for entity %u, corpse has invalid models.\n", (unsigned int)cent->nextState.number);
    FX_Dismemberment_Clear(localClientNum, ci->entityNum);
    ci->infoValid = 0;
  }
  if ( CgGlobalsMP::GetLocalClientGlobals(localClientNum)->m_usePlayerAnimation )
  {
    ClientDObj = Com_GetClientDObj(cent->nextState.number, localClientNum);
    Instance = CgWeaponMap::GetInstance(localClientNum);
    BG_AnimationMP_UpdatePlayerDObj(localClientNum, ClientDObj, Instance, &cent->nextState, ci, 0);
  }
}

/*
==============
CG_PlayersMP_UpdateDistanceSortedIndexMasks
==============
*/
void CG_PlayersMP_UpdateDistanceSortedIndexMasks(const LocalClientNum_t localClientNum, const unsigned __int16 clientNum, const unsigned __int16 sortedCharacterIndex, const CgCharacterAnimUpdateInfo *updateAnimInfo, CgGlobalsMP *cgameGlob)
{
  const cpose_t *Pose; 
  bitarray_base<bitarray<224> > *m_playerOrderDistanceSortedIndexMasks; 
  CgEventLodFOV fovLod; 

  if ( !cgameGlob && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 793, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  Pose = CG_GetPose(localClientNum, clientNum);
  if ( !Pose && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 795, ASSERT_TYPE_ASSERT, "(pose)", (const char *)&queryFormat, "pose") )
    __debugbreak();
  m_playerOrderDistanceSortedIndexMasks = cgameGlob->m_playerOrderDistanceSortedIndexMasks;
  if ( Pose->cullIn == 2 )
    bitarray_base<bitarray<224>>::setBit(m_playerOrderDistanceSortedIndexMasks, sortedCharacterIndex);
  else
    bitarray_base<bitarray<224>>::resetBit(m_playerOrderDistanceSortedIndexMasks, sortedCharacterIndex);
  fovLod = updateAnimInfo->eventLodData.fovLod;
  if ( fovLod )
  {
    if ( fovLod != CG_EVENT_LOD_WIDE_FOV )
      return;
  }
  else
  {
    bitarray_base<bitarray<224>>::setBit(&cgameGlob->m_playerOrderDistanceSortedIndexMasks[1], sortedCharacterIndex);
  }
  bitarray_base<bitarray<224>>::setBit(&cgameGlob->m_playerOrderDistanceSortedIndexMasks[2], sortedCharacterIndex);
}

/*
==============
CG_PlayersMP_UpdateLocalPlayerEntityModels
==============
*/
void CG_PlayersMP_UpdateLocalPlayerEntityModels(LocalClientNum_t localClientNum)
{
  CgGlobalsMP *LocalClientGlobals; 
  centity_t *predictedPlayerEntity; 
  const dvar_t *v4; 

  LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals(localClientNum);
  predictedPlayerEntity = LocalClientGlobals->predictedPlayerEntity;
  if ( (predictedPlayerEntity->flags & 1) != 0 && predictedPlayerEntity->nextState.eType == ET_PLAYER )
  {
    CG_PlayersMP_UpdateCharacterDObj(localClientNum, predictedPlayerEntity);
  }
  else
  {
    v4 = DVARBOOL_cg_playerLegsDObjFixActive;
    if ( !DVARBOOL_cg_playerLegsDObjFixActive && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_playerLegsDObjFixActive") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v4);
    if ( v4->current.enabled && LocalClientGlobals->m_usePlayerAnimation )
    {
      CG_Players_ClearPlayerLegsDObj(localClientNum, LocalClientGlobals);
      CG_PlayersMP_ClearPlayerHelmetDObj(localClientNum, LocalClientGlobals);
    }
  }
}

/*
==============
CG_PlayersMP_UpdatePerFrameCullingPriorities
==============
*/
void CG_PlayersMP_UpdatePerFrameCullingPriorities(const LocalClientNum_t localClientNum)
{
  unsigned __int64 v1; 
  const ObfuscateErrorText *v3; 
  __int64 v7; 
  unsigned __int16 v8; 
  int v9; 
  unsigned __int16 v10; 
  CgCharacterAnimUpdateInfo *v11; 
  CgEntitySystem *v12; 
  __int64 v13; 
  CgEventLodFOV fovLod; 
  int v15; 
  CgEventLodEventTypeBits *p_eventTypeDisabledOverride; 
  __int64 evaluateTrajectory; 
  CgCharacterAnimUpdateInfo *outCharacterPriority; 
  __int64 v19; 
  vec3_t outOrg; 
  __int64 v21; 
  vec3_t viewDir; 

  v21 = -2i64;
  v1 = localClientNum;
  _RDI = CgGlobalsMP::GetLocalClientGlobals(localClientNum);
  v3 = &queryFormat;
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 923, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  if ( s_perSnapshotPriorityUpdateDoneThisFrame[v1] )
  {
    if ( v1 >= 2 )
    {
      j___report_rangecheckfailure(v3);
      JUMPOUT(0x141EF06A3i64);
    }
    s_perSnapshotPriorityUpdateDoneThisFrame[v1] = 0;
  }
  else
  {
    CG_EventMP_RefreshDconstDvars();
    RefdefView_GetOrg(&_RDI->refdef.view, &outOrg);
    __asm
    {
      vmovss  xmm0, dword ptr [rdi+6944h]
      vmovss  dword ptr [rsp+0A8h+viewDir], xmm0
      vmovss  xmm1, dword ptr [rdi+6948h]
      vmovss  dword ptr [rsp+0A8h+viewDir+4], xmm1
      vmovss  xmm0, dword ptr [rdi+694Ch]
      vmovss  dword ptr [rsp+0A8h+viewDir+8], xmm0
    }
    v7 = 3i64;
    do
    {
      *(_QWORD *)_RDI->m_playerOrderDistanceSortedIndexMasks[0].array = 0i64;
      *(_QWORD *)&_RDI->m_playerOrderDistanceSortedIndexMasks[0].array[2] = 0i64;
      *(_QWORD *)&_RDI->m_playerOrderDistanceSortedIndexMasks[0].array[4] = 0i64;
      _RDI->m_playerOrderDistanceSortedIndexMasks[0].array[6] = 0;
      --v7;
    }
    while ( v7 );
    v8 = 0;
    if ( _RDI->m_playerOrderDistanceSortedCount )
    {
      v9 = 0;
      do
      {
        if ( v8 >= 0xF8u )
        {
          LODWORD(outCharacterPriority) = 248;
          LODWORD(evaluateTrajectory) = v9;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 949, ASSERT_TYPE_ASSERT, "(unsigned)( sortedCharacterIndex ) < (unsigned)( ( sizeof( *array_counter( cgameGlob->m_playerOrderDistanceSortedIndex ) ) + 0 ) )", "sortedCharacterIndex doesn't index cgameGlob->m_playerOrderDistanceSortedIndex\n\t%i not in [0, %i)", evaluateTrajectory, outCharacterPriority) )
            __debugbreak();
        }
        v10 = _RDI->m_playerOrderDistanceSortedIndex[v8];
        if ( v10 >= 0xF8u )
        {
          LODWORD(outCharacterPriority) = 248;
          LODWORD(evaluateTrajectory) = v10;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 952, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( ( sizeof( *array_counter( cgameGlob->m_playerUpdateAnimInfo ) ) + 0 ) )", "clientNum doesn't index cgameGlob->m_playerUpdateAnimInfo\n\t%i not in [0, %i)", evaluateTrajectory, outCharacterPriority) )
            __debugbreak();
        }
        v11 = &_RDI->m_playerUpdateAnimInfo[v10];
        if ( !(_BYTE)CgEntitySystem::ms_allocatedType )
        {
          LODWORD(outCharacterPriority) = v1;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 288, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the entity system for localClientNum %d but the entity system type is not known\n", "ms_allocatedType != GameModeType::NONE", outCharacterPriority) )
            __debugbreak();
        }
        if ( (unsigned int)v1 >= CgEntitySystem::ms_allocatedCount )
        {
          LODWORD(outCharacterPriority) = CgEntitySystem::ms_allocatedCount;
          LODWORD(evaluateTrajectory) = v1;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 289, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", evaluateTrajectory, outCharacterPriority) )
            __debugbreak();
        }
        if ( !CgEntitySystem::ms_entitySystemArray[v1] )
        {
          LODWORD(outCharacterPriority) = v1;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 290, ASSERT_TYPE_ASSERT, "(ms_entitySystemArray[localClientNum])", "%s\n\tTrying to access unallocated entity system for localClientNum %d\n", "ms_entitySystemArray[localClientNum]", outCharacterPriority) )
            __debugbreak();
        }
        v12 = CgEntitySystem::ms_entitySystemArray[v1];
        if ( v10 >= 0x800u )
        {
          LODWORD(outCharacterPriority) = 2048;
          LODWORD(evaluateTrajectory) = v10;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", evaluateTrajectory, outCharacterPriority) )
            __debugbreak();
        }
        v13 = (__int64)&v12->m_entities[v10];
        if ( !v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 956, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
          __debugbreak();
        if ( (*(_BYTE *)(v13 + 648) & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 957, ASSERT_TYPE_ASSERT, "(CENextValid( cent ))", (const char *)&queryFormat, "CENextValid( cent )") )
          __debugbreak();
        *(_QWORD *)&v11->eventLodData.distanceLod = 0i64;
        *(_QWORD *)&_RDI->m_playerUpdateAnimInfo[v10].eventLodData.cosAngleFromLookAt = 0i64;
        fovLod = _RDI->m_playerUpdateAnimInfo[v10].eventLodData.fovLod;
        if ( fovLod )
        {
          LODWORD(v19) = (unsigned __int8)fovLod;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_event_mp.h", 54, ASSERT_TYPE_ASSERT, "( outData.fovLod ) == ( CG_EVENT_LOD_NARROW_FOV )", "%s == %s\n\t%u, %u", "outData.fovLod", "CG_EVENT_LOD_NARROW_FOV", v19, 0i64) )
            __debugbreak();
        }
        v15 = 0;
        p_eventTypeDisabledOverride = &_RDI->m_playerUpdateAnimInfo[v10].eventLodData.eventTypeDisabledOverride;
        while ( !p_eventTypeDisabledOverride->array[0] )
        {
          ++v15;
          ++p_eventTypeDisabledOverride;
          if ( v15 )
            goto LABEL_44;
        }
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_event_mp.h", 55, ASSERT_TYPE_ASSERT, "(outData.eventTypeDisabledOverride.noBitsOn())", (const char *)&queryFormat, "outData.eventTypeDisabledOverride.noBitsOn()") )
          __debugbreak();
LABEL_44:
        CG_PlayersMP_ComputePlayerDistanceAndFOV((const LocalClientNum_t)v1, (const centity_t *)v13, &outOrg, &viewDir, _RDI->time, 1, v11);
        CG_EventMP_FinalizeEventLodData(&v11->eventLodData);
        CG_PlayersMP_UpdateDistanceSortedIndexMasks((const LocalClientNum_t)v1, v10, v8++, v11, _RDI);
        v9 = v8;
      }
      while ( v8 < _RDI->m_playerOrderDistanceSortedCount );
    }
    memset(&outOrg, 0, sizeof(outOrg));
  }
}

/*
==============
CG_PlayersMP_UpdatePerSnapshotCullingPriorities
==============
*/
void CG_PlayersMP_UpdatePerSnapshotCullingPriorities(const LocalClientNum_t localClientNum, const CgSnapshotMP *nextSnap)
{
  __int64 v3; 
  unsigned __int16 v5; 
  unsigned __int16 v6; 
  __int64 v7; 
  const dvar_t *v8; 
  const dvar_t *v9; 
  __int64 v13; 
  clientState_t *clients; 
  __int64 clientIndex; 
  CgEntitySystem *v16; 
  __int64 v17; 
  __int64 v18; 
  __int64 v19; 
  CgEventLodFOV fovLod; 
  int v21; 
  _DWORD *v22; 
  unsigned int v23; 
  CgEventLod v24; 
  unsigned __int16 *v25; 
  unsigned __int16 v26; 
  const CgCharacterAnimUpdateInfo *v27; 
  unsigned __int16 v28; 
  LocalClientNum_t v29; 
  __int64 evaluateTrajectory; 
  CgCharacterAnimUpdateInfo *outCharacterPriority; 
  __int64 v32; 
  int v34; 
  vec3_t outOrg; 
  __int64 v36; 
  vec3_t viewDir; 
  unsigned __int16 _First[200]; 

  v36 = -2i64;
  v3 = localClientNum;
  if ( !nextSnap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 830, ASSERT_TYPE_ASSERT, "(nextSnap)", (const char *)&queryFormat, "nextSnap") )
    __debugbreak();
  _RBX = CgGlobalsMP::GetLocalClientGlobals((const LocalClientNum_t)v3);
  v5 = 0;
  v6 = 0;
  memset_0(_RBX->m_playerOrderLookupDistancePriority, 255, sizeof(_RBX->m_playerOrderLookupDistancePriority));
  DebugWipe(_RBX->m_playerOrderDistanceSortedIndex, 0x1F0ui64);
  DebugWipe(_RBX->m_playerOrderDistanceSortedDistanceLodStartIndex, 0xEui64);
  v7 = 3i64;
  do
  {
    *(_QWORD *)_RBX->m_playerOrderDistanceSortedIndexMasks[0].array = 0i64;
    *(_QWORD *)&_RBX->m_playerOrderDistanceSortedIndexMasks[0].array[2] = 0i64;
    *(_QWORD *)&_RBX->m_playerOrderDistanceSortedIndexMasks[0].array[4] = 0i64;
    _RBX->m_playerOrderDistanceSortedIndexMasks[0].array[6] = 0;
    --v7;
  }
  while ( v7 );
  v8 = DCONST_DVARINT_cg_event_forceLod;
  if ( !DCONST_DVARINT_cg_event_forceLod && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_event_forceLod") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v8);
  if ( v8->current.enabled )
    goto LABEL_14;
  v9 = DCONST_DVARBOOL_cg_playerCullingPriorities;
  if ( !DCONST_DVARBOOL_cg_playerCullingPriorities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_playerCullingPriorities") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v9);
  if ( v9->current.enabled )
  {
LABEL_14:
    RefdefView_GetOrg(&_RBX->refdef.view, &outOrg);
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+6944h]
      vmovss  dword ptr [rsp+258h+viewDir], xmm0
      vmovss  xmm1, dword ptr [rbx+6948h]
      vmovss  dword ptr [rsp+258h+viewDir+4], xmm1
      vmovss  xmm0, dword ptr [rbx+694Ch]
      vmovss  dword ptr [rsp+258h+viewDir+8], xmm0
    }
    if ( nextSnap->numClients > 0xC8u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 859, ASSERT_TYPE_ASSERT, "( nextSnap->numClients ) <= ( ( sizeof( *array_counter( playerPrioritiesCharacterIndex ) ) + 0 ) )", "%s <= %s\n\t%i, %i", "nextSnap->numClients", "ARRAY_COUNT( playerPrioritiesCharacterIndex )", nextSnap->numClients, 200) )
      __debugbreak();
    v34 = 0;
    if ( nextSnap->numClients > 0 )
    {
      v13 = v3;
      clients = nextSnap->clients;
      do
      {
        if ( clients->clientIndex >= (unsigned int)cls.maxClients )
        {
          LODWORD(outCharacterPriority) = cls.maxClients;
          LODWORD(evaluateTrajectory) = clients->clientIndex;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 865, ASSERT_TYPE_ASSERT, "(unsigned)( clientState->clientIndex ) < (unsigned)( cls.maxClients )", "clientState->clientIndex doesn't index cls.maxClients\n\t%i not in [0, %i)", evaluateTrajectory, outCharacterPriority) )
            __debugbreak();
        }
        clientIndex = clients->clientIndex;
        if ( !(_BYTE)CgEntitySystem::ms_allocatedType )
        {
          LODWORD(outCharacterPriority) = v3;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 288, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the entity system for localClientNum %d but the entity system type is not known\n", "ms_allocatedType != GameModeType::NONE", outCharacterPriority) )
            __debugbreak();
        }
        if ( (unsigned int)v3 >= CgEntitySystem::ms_allocatedCount )
        {
          LODWORD(outCharacterPriority) = CgEntitySystem::ms_allocatedCount;
          LODWORD(evaluateTrajectory) = v3;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 289, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", evaluateTrajectory, outCharacterPriority) )
            __debugbreak();
        }
        if ( !CgEntitySystem::ms_entitySystemArray[v13] )
        {
          LODWORD(outCharacterPriority) = v3;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 290, ASSERT_TYPE_ASSERT, "(ms_entitySystemArray[localClientNum])", "%s\n\tTrying to access unallocated entity system for localClientNum %d\n", "ms_entitySystemArray[localClientNum]", outCharacterPriority) )
            __debugbreak();
        }
        v16 = CgEntitySystem::ms_entitySystemArray[v13];
        if ( (unsigned int)clientIndex >= 0x800 )
        {
          LODWORD(outCharacterPriority) = 2048;
          LODWORD(evaluateTrajectory) = clientIndex;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", evaluateTrajectory, outCharacterPriority) )
            __debugbreak();
        }
        v17 = (__int64)&v16->m_entities[clientIndex];
        if ( (*(_BYTE *)(v17 + 648) & 1) != 0 && *(_WORD *)(v17 + 408) == 1 )
        {
          if ( clients->clientIndex >= 0xF8u )
          {
            LODWORD(outCharacterPriority) = 248;
            LODWORD(evaluateTrajectory) = clients->clientIndex;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 871, ASSERT_TYPE_ASSERT, "(unsigned)( clientState->clientIndex ) < (unsigned)( ( sizeof( *array_counter( cgameGlob->m_playerUpdateAnimInfo ) ) + 0 ) )", "clientState->clientIndex doesn't index cgameGlob->m_playerUpdateAnimInfo\n\t%i not in [0, %i)", evaluateTrajectory, outCharacterPriority) )
              __debugbreak();
          }
          v18 = clients->clientIndex;
          v19 = (__int64)&_RBX->m_playerUpdateAnimInfo[v18];
          *(_QWORD *)v19 = 0i64;
          *(_QWORD *)(v19 + 8) = 0i64;
          fovLod = _RBX->m_playerUpdateAnimInfo[v18].eventLodData.fovLod;
          if ( fovLod )
          {
            LODWORD(v32) = (unsigned __int8)fovLod;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_event_mp.h", 54, ASSERT_TYPE_ASSERT, "( outData.fovLod ) == ( CG_EVENT_LOD_NARROW_FOV )", "%s == %s\n\t%u, %u", "outData.fovLod", "CG_EVENT_LOD_NARROW_FOV", v32, 0i64) )
              __debugbreak();
          }
          v21 = 0;
          v22 = (_DWORD *)(v19 + 12);
          while ( !*v22 )
          {
            ++v21;
            ++v22;
            if ( v21 )
              goto LABEL_48;
          }
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_event_mp.h", 55, ASSERT_TYPE_ASSERT, "(outData.eventTypeDisabledOverride.noBitsOn())", (const char *)&queryFormat, "outData.eventTypeDisabledOverride.noBitsOn()") )
            __debugbreak();
LABEL_48:
          CG_PlayersMP_ComputePlayerDistanceAndFOV((const LocalClientNum_t)v3, (const centity_t *)v17, &outOrg, &viewDir, _RBX->time, 1, (CgCharacterAnimUpdateInfo *)v19);
          CG_EventMP_FinalizeEventLodData((CgEventLodData *)v19);
          v23 = clients->clientIndex;
          if ( (clients->clientIndex < 0 || v23 > 0xFFFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,int>(int)", "unsigned", (unsigned __int16)v23, "signed", (int)v23) )
            __debugbreak();
          _First[v6++] = v23;
        }
        ++v34;
        ++clients;
        v13 = v3;
      }
      while ( v34 < nextSnap->numClients );
    }
    std::_Sort_unchecked<unsigned short *,CgPlayersMPSortFunctor>(_First, &_First[v6], v6, (CgPlayersMPSortFunctor)_RBX);
    v24 = CG_EVENT_LOD_FULL_RES;
    _RBX->m_playerOrderDistanceSortedDistanceLodStartIndex[0] = 0;
    if ( !v6 )
      goto LABEL_76;
    v25 = _First;
    do
    {
      v26 = *v25;
      if ( *v25 >= 0xF8u )
      {
        LODWORD(outCharacterPriority) = 248;
        LODWORD(evaluateTrajectory) = v26;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 891, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( ( sizeof( *array_counter( cgameGlob->m_playerOrderLookupDistancePriority ) ) + 0 ) )", "clientNum doesn't index cgameGlob->m_playerOrderLookupDistancePriority\n\t%i not in [0, %i)", evaluateTrajectory, outCharacterPriority) )
          __debugbreak();
      }
      v27 = &_RBX->m_playerUpdateAnimInfo[v26];
      *(unsigned __int16 *)((char *)v25 + (char *)_RBX - (char *)_First + 812760) = v26;
      _RBX->m_playerOrderLookupDistancePriority[v26] = v5;
      v28 = v26;
      v29 = localClientNum;
      CG_PlayersMP_UpdateDistanceSortedIndexMasks(localClientNum, v28, v5, v27, _RBX);
      if ( (unsigned __int8)v24 < (unsigned int)v27->eventLodData.distanceLod )
      {
        do
        {
          if ( (unsigned __int8)++v24 >= (CG_EVENT_LOD_COUNT|CG_EVENT_LOD0) )
          {
            LODWORD(outCharacterPriority) = 7;
            LODWORD(evaluateTrajectory) = (unsigned __int8)v24;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 902, ASSERT_TYPE_ASSERT, "(unsigned)( currentDistanceLod ) < (unsigned)( ( sizeof( *array_counter( cgameGlob->m_playerOrderDistanceSortedDistanceLodStartIndex ) ) + 0 ) )", "currentDistanceLod doesn't index cgameGlob->m_playerOrderDistanceSortedDistanceLodStartIndex\n\t%i not in [0, %i)", evaluateTrajectory, outCharacterPriority) )
              __debugbreak();
          }
          _RBX->m_playerOrderDistanceSortedDistanceLodStartIndex[(unsigned __int8)v24] = v5;
        }
        while ( (unsigned __int8)v24 < (unsigned int)v27->eventLodData.distanceLod );
        v29 = localClientNum;
      }
      ++v5;
      ++v25;
    }
    while ( v5 < v6 );
    if ( (unsigned __int8)v24 < CG_EVENT_LOD_COUNT )
    {
LABEL_76:
      do
      {
        if ( (unsigned __int8)++v24 >= (CG_EVENT_LOD_COUNT|CG_EVENT_LOD0) )
        {
          LODWORD(outCharacterPriority) = 7;
          LODWORD(evaluateTrajectory) = (unsigned __int8)v24;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 909, ASSERT_TYPE_ASSERT, "(unsigned)( currentDistanceLod ) < (unsigned)( ( sizeof( *array_counter( cgameGlob->m_playerOrderDistanceSortedDistanceLodStartIndex ) ) + 0 ) )", "currentDistanceLod doesn't index cgameGlob->m_playerOrderDistanceSortedDistanceLodStartIndex\n\t%i not in [0, %i)", evaluateTrajectory, outCharacterPriority) )
            __debugbreak();
        }
        _RBX->m_playerOrderDistanceSortedDistanceLodStartIndex[(unsigned __int8)v24] = v6;
      }
      while ( (unsigned __int8)v24 < CG_EVENT_LOD_COUNT );
      v29 = localClientNum;
    }
    s_perSnapshotPriorityUpdateDoneThisFrame[v29] = 1;
    memset(&outOrg, 0, sizeof(outOrg));
  }
  _RBX->m_playerOrderDistanceSortedCount = v6;
}

/*
==============
CG_PlayersMP_UpdatePlayerAttachModel
==============
*/
char CG_PlayersMP_UpdatePlayerAttachModel(const LocalClientNum_t localClientNum, const clientInfo_t *clientInfo, characterInfo_t *characterInfo, const unsigned int attachmentIndex, const char *modelName)
{
  __int64 v5; 
  char *v8; 
  __int64 v10; 

  v5 = attachmentIndex;
  if ( !clientInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 1879, ASSERT_TYPE_ASSERT, "(clientInfo)", (const char *)&queryFormat, "clientInfo") )
    __debugbreak();
  if ( !characterInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 1880, ASSERT_TYPE_ASSERT, "(characterInfo)", (const char *)&queryFormat, "characterInfo") )
    __debugbreak();
  if ( !modelName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 1881, ASSERT_TYPE_ASSERT, "(modelName)", (const char *)&queryFormat, "modelName") )
    __debugbreak();
  if ( !CG_CustomizationMP_IsModelValid(localClientNum, CUSTOMIZATION_TYPE_HEAD, modelName) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 1882, ASSERT_TYPE_ASSERT, "(CG_CustomizationMP_IsModelValid( localClientNum, CUSTOMIZATION_TYPE_HEAD, modelName ))", (const char *)&queryFormat, "CG_CustomizationMP_IsModelValid( localClientNum, CUSTOMIZATION_TYPE_HEAD, modelName )") )
    __debugbreak();
  if ( (unsigned int)v5 >= 9 )
  {
    LODWORD(v10) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 1883, ASSERT_TYPE_ASSERT, "(unsigned)( attachmentIndex ) < (unsigned)( ( sizeof( *array_counter( characterInfo->attachModelNames ) ) + 0 ) )", "attachmentIndex doesn't index ARRAY_COUNT( characterInfo->attachModelNames )\n\t%i not in [0, %i)", v10, 9) )
      __debugbreak();
  }
  v8 = characterInfo->attachModelNames[v5];
  if ( !I_strcmp(v8, modelName) )
    return 0;
  Core_strcpy(v8, 0x40ui64, modelName);
  return 1;
}

/*
==============
CG_PlayersMP_UpdatePlayerBodyModel
==============
*/
char CG_PlayersMP_UpdatePlayerBodyModel(const LocalClientNum_t localClientNum, const clientInfo_t *clientInfo, characterInfo_t *characterInfo, const char *modelName)
{
  int v8; 

  if ( !clientInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 1860, ASSERT_TYPE_ASSERT, "(clientInfo)", (const char *)&queryFormat, "clientInfo") )
    __debugbreak();
  if ( !characterInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 1861, ASSERT_TYPE_ASSERT, "(characterInfo)", (const char *)&queryFormat, "characterInfo") )
    __debugbreak();
  if ( !modelName && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 1862, ASSERT_TYPE_ASSERT, "(modelName)", (const char *)&queryFormat, "modelName") )
    __debugbreak();
  v8 = 1;
  if ( !CG_CustomizationMP_IsModelValid(localClientNum, CUSTOMIZATION_TYPE_BODY, modelName) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 1863, ASSERT_TYPE_ASSERT, "(CG_CustomizationMP_IsModelValid( localClientNum, CUSTOMIZATION_TYPE_BODY, modelName ))", (const char *)&queryFormat, "CG_CustomizationMP_IsModelValid( localClientNum, CUSTOMIZATION_TYPE_BODY, modelName )") )
    __debugbreak();
  if ( !I_strcmp(characterInfo->model, modelName) )
    return 0;
  if ( !BG_Customization_IsFemaleCustomization(&clientInfo->customization) || !BG_Customization_IsCustomizationModel(CUSTOMIZATION_TYPE_BODY, modelName) )
    v8 = 0;
  characterInfo->isFemale = v8;
  Core_strcpy(characterInfo->model, 0x40ui64, modelName);
  return 1;
}

/*
==============
CG_PlayersMP_UpdatePlayerDObj
==============
*/
void CG_PlayersMP_UpdatePlayerDObj(LocalClientNum_t localClientNum, centity_t *cent, DObj *obj, const CgWeaponMap *weaponMap, const entityState_t *es, characterInfo_t *ci)
{
  __int64 v9; 
  bool dobjUsingExecutionProp; 
  unsigned int eType; 
  bool usingExecutionProp; 
  int v15; 
  entityType_s v37; 
  unsigned int v38; 
  bool v39; 
  bool v40; 
  int v41; 
  float fmt; 
  XAnimTree *fmta; 
  bool outIsUsingExecutionProp; 
  bool outIsExecutionVictim; 
  bool outIsExecutionAttacker[6]; 
  CharacterModelType modelTypesToApply[2]; 
  DObjStickerSlotList result; 
  DObjStickerSlotList stickerSlots; 
  Weapon weapon; 
  Weapon r_heldWeapon; 
  Weapon r_stowedWeapon; 
  Weapon r_accessoryWeapon; 
  Weapon r_thrownWeapon; 
  Weapon r_turretWeapon; 

  v9 = localClientNum;
  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 3955, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( !es && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 3956, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  if ( s_weaponVisActive[v9] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 3957, ASSERT_TYPE_ASSERT, "(!CG_PlayersMP_IsWeaponVisibilityTestActive( localClientNum ))", (const char *)&queryFormat, "!CG_PlayersMP_IsWeaponVisibilityTestActive( localClientNum )") )
    __debugbreak();
  BG_GetCharacterWeapons(weaponMap, es, ci, &r_heldWeapon, &r_thrownWeapon, &r_stowedWeapon, &weapon, &r_accessoryWeapon, &r_turretWeapon);
  if ( !ci->pXAnimTree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 3967, ASSERT_TYPE_ASSERT, "(ci->pXAnimTree)", (const char *)&queryFormat, "ci->pXAnimTree") )
    __debugbreak();
  if ( ci->animTreeDirty )
  {
    if ( obj )
    {
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vmovss  dword ptr [rsp+380h+fmt], xmm0
      }
      XAnimClearTreeGoalWeights(ci->pXAnimTree, 0, XANIM_SUBTREE_DEFAULT, 0, fmt, 1, obj, LINEAR);
    }
    ci->animTreeDirty = 0;
  }
  dobjUsingExecutionProp = ci->dobjUsingExecutionProp;
  if ( !es )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 687, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 595, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
      __debugbreak();
  }
  eType = (unsigned __int16)es->eType;
  usingExecutionProp = 0;
  outIsExecutionAttacker[0] = 0;
  v15 = 131111;
  outIsExecutionVictim = 0;
  outIsUsingExecutionProp = 0;
  if ( (unsigned __int16)eType <= 0x11u && _bittest(&v15, eType) )
  {
    BG_GetExecutionFlags(es->lerp.u.player.playerFlags, outIsExecutionAttacker, &outIsExecutionVictim, &outIsUsingExecutionProp);
    usingExecutionProp = outIsUsingExecutionProp;
  }
  if ( BG_AnimationMP_IsCharacterDObjDirty(obj, &ci->replicatedPartBits, ci, &r_heldWeapon, &r_stowedWeapon, &r_thrownWeapon, &weapon, &r_accessoryWeapon, (es->lerp.u.player.playerFlags & 0x80) != 0, usingExecutionProp, !ci->dobjForceCheckWeaponModelLoaded) )
  {
    CG_Execution_CheckShowHideEffects((LocalClientNum_t)v9, es->clientNum, ci, obj, &ci->dobjExecutionWeapon, MOVEMENT, dobjUsingExecutionProp, usingExecutionProp);
    CG_Entity_StowClothForDObjRebuild((const LocalClientNum_t)v9, es->clientNum);
    BG_UpdateCharacterDObj((LocalClientNum_t)v9, obj, es, ci, 0, &r_heldWeapon, &r_stowedWeapon, &r_thrownWeapon, &weapon, &r_accessoryWeapon, &r_turretWeapon, 1);
    obj = Com_GetClientDObj(es->clientNum, (LocalClientNum_t)v9);
    CG_Execution_CheckShowHideEffects((LocalClientNum_t)v9, es->clientNum, ci, obj, &weapon, DODGE, dobjUsingExecutionProp, usingExecutionProp);
    CG_Entity_DestroyStowedCloth((const LocalClientNum_t)v9, es->clientNum);
    if ( !obj )
      return;
    if ( r_heldWeapon.weaponIdx )
    {
      modelTypesToApply[0] = CHAR_MODEL_WEAPON_HELD;
      modelTypesToApply[1] = CHAR_MODEL_WEAPON_HELD_LEFT;
      _RAX = CG_Weapons_BuildStickerSlotList(&result, (const LocalClientNum_t)v9, modelTypesToApply, 2, &r_heldWeapon);
      __asm
      {
        vmovups ymm0, ymmword ptr [rax]
        vmovups ymmword ptr [rbp+280h+stickerSlots.modelTypeToApply], ymm0
        vmovups ymm1, ymmword ptr [rax+20h]
        vmovups ymmword ptr [rbp+280h+stickerSlots.modelTypeToApply+20h], ymm1
        vmovups ymm0, ymmword ptr [rax+40h]
        vmovups ymmword ptr [rbp+280h+stickerSlots.modelTypeToApply+40h], ymm0
        vmovups ymm1, ymmword ptr [rax+60h]
        vmovups ymmword ptr [rbp+280h+stickerSlots.slots.overrideMaterial], ymm1
        vmovups xmm0, xmmword ptr [rax+80h]
        vmovups xmmword ptr [rbp+280h+stickerSlots.slots.overrideMaterial+20h], xmm0
        vmovsd  xmm1, qword ptr [rax+90h]
        vmovsd  [rbp+280h+stickerSlots.slots.overrideMaterial+30h], xmm1
      }
      DObjSetStickerMaterialOverrides(obj, ci->dobjModelTypes, &stickerSlots);
    }
    if ( r_stowedWeapon.weaponIdx )
    {
      modelTypesToApply[0] = CHAR_MODEL_WEAPON_STOWED;
      _RAX = CG_Weapons_BuildStickerSlotList(&result, (const LocalClientNum_t)v9, modelTypesToApply, 1, &r_stowedWeapon);
      __asm
      {
        vmovups ymm0, ymmword ptr [rax]
        vmovups ymmword ptr [rbp+280h+stickerSlots.modelTypeToApply], ymm0
        vmovups ymm1, ymmword ptr [rax+20h]
        vmovups ymmword ptr [rbp+280h+stickerSlots.modelTypeToApply+20h], ymm1
        vmovups ymm0, ymmword ptr [rax+40h]
        vmovups ymmword ptr [rbp+280h+stickerSlots.modelTypeToApply+40h], ymm0
        vmovups ymm1, ymmword ptr [rax+60h]
        vmovups ymmword ptr [rbp+280h+stickerSlots.slots.overrideMaterial], ymm1
        vmovups xmm0, xmmword ptr [rax+80h]
        vmovups xmmword ptr [rbp+280h+stickerSlots.slots.overrideMaterial+20h], xmm0
        vmovsd  xmm1, qword ptr [rax+90h]
        vmovsd  [rbp+280h+stickerSlots.slots.overrideMaterial+30h], xmm1
      }
      DObjSetStickerMaterialOverrides(obj, ci->dobjModelTypes, &stickerSlots);
    }
    if ( weapon.weaponIdx )
    {
      modelTypesToApply[0] = CHAR_MODEL_WEAPON_EXECUTION;
      _RAX = CG_Weapons_BuildStickerSlotList(&result, (const LocalClientNum_t)v9, modelTypesToApply, 1, &weapon);
      __asm
      {
        vmovups ymm0, ymmword ptr [rax]
        vmovups ymmword ptr [rbp+280h+stickerSlots.modelTypeToApply], ymm0
        vmovups ymm1, ymmword ptr [rax+20h]
        vmovups ymmword ptr [rbp+280h+stickerSlots.modelTypeToApply+20h], ymm1
        vmovups ymm0, ymmword ptr [rax+40h]
        vmovups ymmword ptr [rbp+280h+stickerSlots.modelTypeToApply+40h], ymm0
        vmovups ymm1, ymmword ptr [rax+60h]
        vmovups ymmword ptr [rbp+280h+stickerSlots.slots.overrideMaterial], ymm1
        vmovups xmm0, xmmword ptr [rax+80h]
        vmovups xmmword ptr [rbp+280h+stickerSlots.slots.overrideMaterial+20h], xmm0
        vmovsd  xmm1, qword ptr [rax+90h]
        vmovsd  [rbp+280h+stickerSlots.slots.overrideMaterial+30h], xmm1
      }
      DObjSetStickerMaterialOverrides(obj, ci->dobjModelTypes, &stickerSlots);
    }
    BG_Player_SetPlayerInfo(obj, &ci->control, (CEntPlayerInfo *)&cent->pose.160);
    XAnimBonePhysicsSetSettlingEnabled(obj, 0);
  }
  fmta = ci->pXAnimTree;
  ci->dobjForceCheckWeaponModelLoaded = 0;
  BG_PlayerMP_SetWeaponPackageAnims(&r_heldWeapon, &weapon, ci, es, fmta);
  if ( Com_GameMode_SupportsFeature(WEAPON_LADDER_CLIMB|0x80) )
  {
    v37 = es->eType;
    if ( ((v37 - 1) & 0xFFEE) == 0 && v37 != ET_AGENT_CORPSE )
    {
      if ( cent == (centity_t *)-288i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 667, ASSERT_TYPE_ASSERT, "(prevLerpState)", (const char *)&queryFormat, "prevLerpState") )
        __debugbreak();
      if ( cent == (centity_t *)-400i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 668, ASSERT_TYPE_ASSERT, "(nextState)", (const char *)&queryFormat, "nextState") )
        __debugbreak();
      outIsExecutionAttacker[0] = 0;
      if ( cent == (centity_t *)-400i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 595, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
        __debugbreak();
      v38 = (unsigned __int16)cent->nextState.eType;
      v39 = 0;
      v40 = 0;
      outIsUsingExecutionProp = 0;
      outIsExecutionVictim = 0;
      if ( (unsigned __int16)v38 <= 0x11u )
      {
        v41 = 131111;
        if ( _bittest(&v41, v38) )
        {
          BG_GetExecutionFlags(cent->nextState.lerp.u.player.playerFlags, &outIsUsingExecutionProp, &outIsExecutionVictim, outIsExecutionAttacker);
          v39 = outIsUsingExecutionProp;
          v40 = outIsExecutionVictim;
        }
      }
      if ( (((unsigned __int16)cent->prevState.u.player.playerFlags >> 5) & 3) != 1 && (((unsigned __int16)cent->prevState.u.player.playerFlags >> 5) & 3) != 2 && (((unsigned __int16)cent->prevState.u.player.playerFlags >> 5) & 3) != 3 && (v39 || v40) )
        XAnimBonePhysicsReset(obj);
    }
  }
}

/*
==============
CG_PlayersMP_UpdatePlayerEventPriorities
==============
*/
void CG_PlayersMP_UpdatePlayerEventPriorities(const LocalClientNum_t localClientNum, const CgSnapshotMP *nextSnap)
{
  __int64 v3; 
  const CgSnapshotMP *v4; 
  CgGlobalsMP *v5; 
  const dvar_t *v6; 
  __int64 v7; 
  CgEventSystemMP *v8; 
  int v9; 
  unsigned __int16 v10; 
  int v11; 
  unsigned __int16 v13; 
  __int64 v14; 
  const CgCharacterAnimUpdateInfo *v15; 
  CgEntitySystem *v16; 
  const centity_t *v17; 
  unsigned int v18; 
  entityType_s *p_eType; 
  __int64 v22; 
  CgEntitySystem *v23; 
  __int64 v24; 
  __int64 v25; 
  bool enabled; 
  unsigned int pos; 
  int clientNum; 
  CgEventSystemMP *v29; 
  CgGlobalsMP *LocalClientGlobals; 
  CgPlayerEventInventory inventory; 

  v3 = localClientNum;
  v4 = nextSnap;
  LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals(localClientNum);
  v5 = LocalClientGlobals;
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 1267, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  v6 = DCONST_DVARINT_cg_event_forceLod;
  if ( !DCONST_DVARINT_cg_event_forceLod && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_event_forceLod") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  enabled = v6->current.enabled;
  clientNum = LocalClientGlobals->predictedPlayerState.clientNum;
  if ( (_BYTE)CgEventSystem::ms_allocatedType != HALF_HALF )
  {
    LODWORD(v25) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.h", 235, ASSERT_TYPE_ASSERT, "(ms_allocatedType == SubSystem::EVENT_SYSTEM_TYPE)", "%s\n\tTrying to access the event system for localClientNum %d but the event system type does not match-> System Type:%d  Allocated Type:%d\n", "ms_allocatedType == SubSystem::EVENT_SYSTEM_TYPE", v25, 2, (unsigned __int8)CgEventSystem::ms_allocatedType) )
      __debugbreak();
  }
  if ( (unsigned int)v3 >= CgEventSystem::ms_allocatedCount )
  {
    LODWORD(v25) = CgEventSystem::ms_allocatedCount;
    LODWORD(v24) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.h", 236, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v24, v25) )
      __debugbreak();
  }
  v7 = v3;
  if ( !CgEventSystem::ms_eventSystemArray[v3] )
  {
    LODWORD(v25) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.h", 237, ASSERT_TYPE_ASSERT, "(ms_eventSystemArray[localClientNum])", "%s\n\tTrying to access unallocated event system for localClientNum %d\n", "ms_eventSystemArray[localClientNum]", v25) )
      __debugbreak();
  }
  v8 = (CgEventSystemMP *)CgEventSystem::ms_eventSystemArray[v7];
  v29 = v8;
  if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 1278, ASSERT_TYPE_ASSERT, "(eventSystem)", (const char *)&queryFormat, "eventSystem") )
    __debugbreak();
  memset_0(&inventory, 0, sizeof(inventory));
  g_disableCgEventLogging = 1;
  v9 = 0;
  *(_QWORD *)LocalClientGlobals->m_playerCorpseUpdateAnimInfoValid = 0i64;
  v10 = 0;
  if ( LocalClientGlobals->m_playerOrderDistanceSortedCount )
  {
    v11 = 0;
    __asm { vmovaps [rsp+2088h+var_48], xmm6 }
    pos = 0;
    __asm { vpxor   xmm6, xmm6, xmm6 }
    do
    {
      if ( v10 >= 0xF8u )
      {
        LODWORD(v25) = 248;
        LODWORD(v24) = v11;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 1291, ASSERT_TYPE_ASSERT, "(unsigned)( sortedCharacterIndex ) < (unsigned)( ( sizeof( *array_counter( cgameGlob->m_playerOrderDistanceSortedIndex ) ) + 0 ) )", "sortedCharacterIndex doesn't index cgameGlob->m_playerOrderDistanceSortedIndex\n\t%i not in [0, %i)", v24, v25) )
          __debugbreak();
      }
      v13 = v5->m_playerOrderDistanceSortedIndex[v10];
      if ( v13 >= 0xF8u )
      {
        LODWORD(v25) = 248;
        LODWORD(v24) = v13;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 1294, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( ( sizeof( *array_counter( cgameGlob->m_playerUpdateAnimInfo ) ) + 0 ) )", "clientNum doesn't index cgameGlob->m_playerUpdateAnimInfo\n\t%i not in [0, %i)", v24, v25) )
          __debugbreak();
      }
      v14 = v13;
      v15 = &v5->m_playerUpdateAnimInfo[v13];
      if ( !(_BYTE)CgEntitySystem::ms_allocatedType )
      {
        LODWORD(v25) = v3;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 288, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the entity system for localClientNum %d but the entity system type is not known\n", "ms_allocatedType != GameModeType::NONE", v25) )
          __debugbreak();
      }
      if ( (unsigned int)v3 >= CgEntitySystem::ms_allocatedCount )
      {
        LODWORD(v25) = CgEntitySystem::ms_allocatedCount;
        LODWORD(v24) = v3;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 289, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v24, v25) )
          __debugbreak();
      }
      if ( !CgEntitySystem::ms_entitySystemArray[v7] )
      {
        LODWORD(v25) = v3;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 290, ASSERT_TYPE_ASSERT, "(ms_entitySystemArray[localClientNum])", "%s\n\tTrying to access unallocated entity system for localClientNum %d\n", "ms_entitySystemArray[localClientNum]", v25) )
          __debugbreak();
      }
      v16 = CgEntitySystem::ms_entitySystemArray[v7];
      if ( (unsigned int)v14 >= 0x800 )
      {
        LODWORD(v25) = 2048;
        LODWORD(v24) = v14;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", v24, v25) )
          __debugbreak();
      }
      v17 = &v16->m_entities[v14];
      if ( (CgEntitySystem *)((char *)v16 + 760 * v14) == (CgEntitySystem *)-16i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 1298, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
        __debugbreak();
      if ( (v16->m_entities[v14].flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 1299, ASSERT_TYPE_ASSERT, "(CENextValid( cent ))", (const char *)&queryFormat, "CENextValid( cent )") )
        __debugbreak();
      v18 = 0;
      _RDI = &v15->preCacheAnimBones;
      do
      {
        __asm { vmovdqu xmmword ptr [rdi], xmm6 }
        _RDI = (DObjPartBits *)((char *)_RDI + 16);
        ++v18;
      }
      while ( v18 < 2 );
      v9 = 0;
      v15->preCacheTagFlags = 0;
      if ( enabled && (_DWORD)v14 != clientNum )
      {
        if ( g_processEvents )
          CgEventSystemMP::InventoryNonLocalPlayerEntityEvents(v29, v17, v15, v10, &inventory);
        if ( !GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&v17->nextState.lerp.eFlags, ACTIVE, 0x11u) && (v17->flags & 0x14) != 0 && CG_EventLod_ShouldPerformEvent((const LocalClientNum_t)v3, CG_EVENT_LOD_TYPE_PLAYER_MUZZLE_FLASH_VFX, &v15->eventLodData) )
          bitarray_base<bitarray<224>>::setBit((bitarray_base<bitarray<224> > *)&inventory.inventoryEmpty[28 * (((v17->flags & 0x40) == 0) | 2i64) - 168], pos);
      }
      v5 = LocalClientGlobals;
      v7 = v3;
      v11 = ++v10;
      pos = v10;
    }
    while ( v10 < LocalClientGlobals->m_playerOrderDistanceSortedCount );
    v8 = v29;
    v4 = nextSnap;
    __asm { vmovaps xmm6, [rsp+2088h+var_48] }
  }
  if ( enabled )
  {
    if ( g_processEvents && v4->numEntities > 0 )
    {
      p_eType = &v4->entities[0].eType;
      do
      {
        v22 = *((__int16 *)p_eType - 4);
        if ( *p_eType >= ET_EVENTS )
        {
          if ( !(_BYTE)CgEntitySystem::ms_allocatedType )
          {
            LODWORD(v25) = v3;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 288, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the entity system for localClientNum %d but the entity system type is not known\n", "ms_allocatedType != GameModeType::NONE", v25) )
              __debugbreak();
          }
          if ( (unsigned int)v3 >= CgEntitySystem::ms_allocatedCount )
          {
            LODWORD(v25) = CgEntitySystem::ms_allocatedCount;
            LODWORD(v24) = v3;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 289, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v24, v25) )
              __debugbreak();
          }
          if ( !CgEntitySystem::ms_entitySystemArray[v7] )
          {
            LODWORD(v25) = v3;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 290, ASSERT_TYPE_ASSERT, "(ms_entitySystemArray[localClientNum])", "%s\n\tTrying to access unallocated entity system for localClientNum %d\n", "ms_entitySystemArray[localClientNum]", v25) )
              __debugbreak();
          }
          v23 = CgEntitySystem::ms_entitySystemArray[v7];
          if ( (unsigned int)v22 >= 0x800 )
          {
            LODWORD(v25) = 2048;
            LODWORD(v24) = v22;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", v24, v25) )
              __debugbreak();
          }
          CgEventSystemMP::InventoryStandaloneEvent(v8, &v23->m_entities[v22], &inventory);
        }
        v7 = v3;
        ++v9;
        p_eType += 124;
      }
      while ( v9 < v4->numEntities );
    }
    CG_PlayersMP_BucketPlayerEvents((const LocalClientNum_t)v3, &inventory);
  }
  g_disableCgEventLogging = 0;
}

/*
==============
CG_PlayersMP_UpdatePlayerModels
==============
*/
__int64 CG_PlayersMP_UpdatePlayerModels(const LocalClientNum_t localClientNum, const clientInfo_t *clientInfo, characterInfo_t *characterInfo)
{
  LocalClientNum_t v5; 
  unsigned __int8 v6; 
  const char *ClientModelFromServerIndex; 
  char updated; 
  const char *ActiveModel; 
  char v10; 
  bool *attachTagIndexChanged; 
  int *attachTagIndex; 
  __int64 v13; 
  const char *v14; 
  char v15; 
  const char *v16; 
  ClConfigStrings *ClConfigStrings; 
  const char *v18; 
  char v19; 
  const char *v20; 
  char v23; 

  v5 = localClientNum;
  if ( !clientInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 1917, ASSERT_TYPE_ASSERT, "(clientInfo != nullptr)", (const char *)&queryFormat, "clientInfo != nullptr") )
    __debugbreak();
  if ( !characterInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 1918, ASSERT_TYPE_ASSERT, "(characterInfo != nullptr)", (const char *)&queryFormat, "characterInfo != nullptr") )
    __debugbreak();
  v6 = 0;
  if ( characterInfo->modelIndexChanged )
  {
    ClientModelFromServerIndex = CG_CustomizationMP_GetClientModelFromServerIndex(v5, clientInfo, characterInfo, CUSTOMIZATION_TYPE_BODY, characterInfo->modelIndex, &characterInfo->dobjModelLoaded, &characterInfo->isCustomizationModel);
    updated = CG_PlayersMP_UpdatePlayerBodyModel(v5, clientInfo, characterInfo, ClientModelFromServerIndex);
    characterInfo->modelIndexChanged = 0;
LABEL_11:
    v6 = updated;
    goto LABEL_12;
  }
  if ( characterInfo->isCustomizationModel )
  {
    ActiveModel = CG_CustomizationMP_GetActiveModel(v5, clientInfo, characterInfo, CUSTOMIZATION_TYPE_BODY, &characterInfo->dobjModelLoaded);
    updated = CG_PlayersMP_UpdatePlayerBodyModel(v5, clientInfo, characterInfo, ActiveModel);
    goto LABEL_11;
  }
LABEL_12:
  v10 = 0;
  attachTagIndexChanged = characterInfo->attachTagIndexChanged;
  v23 = 0;
  attachTagIndex = characterInfo->attachTagIndex;
  v13 = 0i64;
  do
  {
    if ( *(attachTagIndexChanged - 9) )
    {
      v14 = CG_CustomizationMP_GetClientModelFromServerIndex(v5, clientInfo, characterInfo, CUSTOMIZATION_TYPE_HEAD, *(attachTagIndex - 9), &characterInfo->dobjAttachModelLoaded[v13], &characterInfo->isCustomizationAttachModel[v13]);
      v15 = CG_PlayersMP_UpdatePlayerAttachModel(v5, clientInfo, characterInfo, v13, v14);
      *(attachTagIndexChanged - 9) = 0;
    }
    else
    {
      if ( !*(attachTagIndexChanged - 19) )
        goto LABEL_18;
      v16 = CG_CustomizationMP_GetActiveModel(v5, clientInfo, characterInfo, CUSTOMIZATION_TYPE_HEAD, &characterInfo->dobjAttachModelLoaded[v13]);
      v15 = CG_PlayersMP_UpdatePlayerAttachModel(v5, clientInfo, characterInfo, v13, v16);
    }
    v6 |= v15;
    v10 |= !attachTagIndexChanged[677];
    v23 = v10;
LABEL_18:
    if ( *attachTagIndexChanged )
    {
      ClConfigStrings = ClConfigStrings::GetClConfigStrings();
      v18 = ClConfigStrings->GetClientTagString(ClConfigStrings, *attachTagIndex);
      if ( !clientInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 1897, ASSERT_TYPE_ASSERT, "(clientInfo)", (const char *)&queryFormat, "clientInfo") )
        __debugbreak();
      if ( !v18 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 1899, ASSERT_TYPE_ASSERT, "(tagName)", (const char *)&queryFormat, "tagName") )
        __debugbreak();
      if ( I_strcmp(characterInfo->attachTagNames[(unsigned __int64)(unsigned int)v13], v18) )
      {
        Core_strcpy(characterInfo->attachTagNames[(unsigned __int64)(unsigned int)v13], 0x40ui64, v18);
        v19 = 1;
      }
      else
      {
        v19 = 0;
      }
      v5 = localClientNum;
      v6 |= v19;
      v10 = v23;
      *attachTagIndexChanged = 0;
    }
    v13 = (unsigned int)(v13 + 1);
    ++attachTagIndex;
    ++attachTagIndexChanged;
  }
  while ( (unsigned int)v13 < 9 );
  if ( v10 )
  {
    if ( characterInfo->isCustomizationModel && characterInfo->dobjModelLoaded )
    {
      v20 = CG_CustomizationMP_GetActiveModel(v5, clientInfo, characterInfo, CUSTOMIZATION_TYPE_BODY, &characterInfo->dobjModelLoaded);
      v6 |= CG_PlayersMP_UpdatePlayerBodyModel(v5, clientInfo, characterInfo, v20);
      if ( characterInfo->dobjModelLoaded && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 1968, ASSERT_TYPE_ASSERT, "( !characterInfo->dobjModelLoaded )", "Expected to fallback to a default character body.") )
        __debugbreak();
    }
  }
  return v6;
}

/*
==============
CG_PlayersMP_WaitForProcessAnimationCmds
==============
*/
void CG_PlayersMP_WaitForProcessAnimationCmds(void)
{
  Sys_WaitWorkerCmdsOnlyOfType(WRKCMD_CG_PLAYERSMP_PROCESSANIMATION);
}

/*
==============
CG_PlayersMP_WaitUpdateClientWeaponVisibility
==============
*/
void CG_PlayersMP_WaitUpdateClientWeaponVisibility(const LocalClientNum_t localClientNum)
{
  unsigned __int64 v1; 
  __int64 v2; 

  v1 = localClientNum;
  if ( Sys_ExistsWorkerCmdsOfType(WRKCMD_WEAPON_VISIBILITY) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 4669, ASSERT_TYPE_ASSERT, "( !Sys_ExistsWorkerCmdsOfType( WRKCMD_WEAPON_VISIBILITY ) )", "Should be waited on as a front-end worker command") )
    __debugbreak();
  if ( v1 >= 2 )
  {
    j___report_rangecheckfailure(v2);
    JUMPOUT(0x141EF2DEFi64);
  }
  s_weaponVisActive[v1] = 0;
}

/*
==============
CG_WeaponVisibility_CalcTrace_Held
==============
*/
bool CG_WeaponVisibility_CalcTrace_Held(const centity_t *const cent, const characterInfo_t *const ci, const DObj *const obj, const WeaponDef *const weapDef, vec3_t *inOutStart, vec3_t *outEnd)
{
  const XModel *worldModel; 
  int VisibilityBoneIndex; 
  unsigned __int8 v16; 
  bool v17; 
  DObjAnimMat *baseMat; 
  float v39; 
  bool result; 
  bool *outUseWeaponTag; 
  bool *outUseWeaponTaga; 
  __int64 v77; 
  __int64 v78; 
  bool v79; 
  vec3_t outOrigin; 
  Bounds bounds; 
  tmat33_t<vec3_t> outTagMat; 

  _RDI = inOutStart;
  _RBX = weapDef;
  _R13 = outEnd;
  if ( !weapDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 4233, ASSERT_TYPE_ASSERT, "(weapDef)", (const char *)&queryFormat, "weapDef") )
    __debugbreak();
  worldModel = _RBX->worldModel;
  v79 = 0;
  VisibilityBoneIndex = CG_Weapons_GetVisibilityBoneIndex(obj, ci, &ci->dobjHeldWeapon, 0, WEAPON_HAND_DEFAULT, &v79);
  v16 = truncate_cast<unsigned char,int>(VisibilityBoneIndex);
  if ( v16 == 0xFE || !CG_DObjGetWorldBoneMatrix(&cent->pose, obj, v16, &outTagMat, &outOrigin) )
    return 0;
  v17 = !v79;
  __asm
  {
    vmovss  xmm0, dword ptr [rbx+844h]
    vaddss  xmm1, xmm0, dword ptr [rdi+8]
    vmovss  xmm0, dword ptr [rsp+108h+outOrigin+8]
    vmovss  dword ptr [rdi+8], xmm1
    vaddss  xmm5, xmm0, dword ptr [rbx+844h]
    vmovaps [rsp+108h+var_58], xmm6
    vmovss  dword ptr [rsp+108h+outOrigin+8], xmm5
    vmovaps [rsp+108h+var_68], xmm7
  }
  if ( v17 )
  {
    if ( !worldModel && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 158, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
      __debugbreak();
    _RBX = _RBX->iVisibilityAxis;
    baseMat = worldModel->baseMat;
    if ( (unsigned int)_RBX >= 3 )
    {
      LODWORD(outUseWeaponTag) = _RBX;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 326, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( m ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( m )\n\t%i not in [0, %i)", outUseWeaponTag, 3) )
        __debugbreak();
    }
    _R15 = 3 * _RBX;
    XModelGetBounds(worldModel, &bounds);
    if ( worldModel->numsurfs )
    {
      if ( (unsigned int)_RBX >= 3 )
      {
        LODWORD(v77) = 3;
        LODWORD(outUseWeaponTag) = _RBX;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", outUseWeaponTag, v77) )
          __debugbreak();
      }
      __asm
      {
        vmovss  xmm0, dword ptr [rsp+rbx*4+108h+bounds.halfSize]
        vmulss  xmm1, xmm0, cs:__real@40000000
      }
    }
    else
    {
      __asm { vxorps  xmm1, xmm1, xmm1 }
    }
    __asm { vsubss  xmm7, xmm1, cs:__real@40400000 }
    if ( (unsigned int)_RBX >= 3 )
    {
      LODWORD(v77) = 3;
      LODWORD(outUseWeaponTag) = _RBX;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", outUseWeaponTag, v77) )
        __debugbreak();
      LODWORD(v78) = 3;
      LODWORD(outUseWeaponTaga) = _RBX;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", outUseWeaponTaga, v78) )
        __debugbreak();
    }
    __asm
    {
      vmovss  xmm0, dword ptr [rsp+rbx*4+108h+bounds.midPoint]
      vsubss  xmm6, xmm0, dword ptr [rsp+rbx*4+108h+bounds.halfSize]
    }
    vec3_t::operator[](&baseMat->trans, _RBX);
    __asm
    {
      vmovss  xmm5, dword ptr [rsp+r15*4+108h+outTagMat+4]
      vmovss  xmm3, dword ptr [rsp+r15*4+108h+outTagMat+8]
      vsubss  xmm2, xmm6, dword ptr [rax]
      vmovss  xmm6, dword ptr [rsp+r15*4+108h+outTagMat]
      vmulss  xmm0, xmm6, xmm2
      vaddss  xmm4, xmm0, dword ptr [rsp+108h+outOrigin]
      vmulss  xmm0, xmm5, xmm2
      vaddss  xmm1, xmm0, dword ptr [rsp+108h+outOrigin+4]
      vmovss  dword ptr [rdi+4], xmm1
      vmulss  xmm0, xmm3, xmm2
      vaddss  xmm1, xmm0, dword ptr [rsp+108h+outOrigin+8]
      vmovss  dword ptr [rdi+8], xmm1
      vmovss  dword ptr [rdi], xmm4
      vmulss  xmm2, xmm6, xmm7
      vaddss  xmm0, xmm2, xmm4
      vmovss  dword ptr [r13+0], xmm0
      vmulss  xmm1, xmm5, xmm7
      vaddss  xmm2, xmm1, dword ptr [rdi+4]
      vmulss  xmm0, xmm3, xmm7
      vmovss  dword ptr [r13+4], xmm2
      vaddss  xmm1, xmm0, dword ptr [rdi+8]
      vmovss  dword ptr [r13+8], xmm1
    }
  }
  else
  {
    __asm
    {
      vmovss  xmm7, dword ptr [rsp+108h+outOrigin+4]
      vsubss  xmm0, xmm7, dword ptr [rdi+4]
      vmovss  xmm6, dword ptr [rsp+108h+outOrigin]
      vsubss  xmm2, xmm6, dword ptr [rdi]
      vsubss  xmm3, xmm5, xmm1
      vmulss  xmm1, xmm0, xmm0
      vmulss  xmm0, xmm2, xmm2
      vaddss  xmm2, xmm1, xmm0
      vmulss  xmm1, xmm3, xmm3
      vaddss  xmm2, xmm2, xmm1
      vcvtss2sd xmm0, xmm2, xmm2
      vcomisd xmm0, cs:__real@3d719799812dea11
      vmovss  xmm4, cs:scale_1
    }
    v39 = outOrigin.v[2];
    __asm
    {
      vunpcklps xmm0, xmm6, xmm7
      vmovsd  qword ptr [r13+0], xmm0
    }
    outEnd->v[2] = v39;
    __asm
    {
      vmovss  xmm0, dword ptr [rdi]
      vmovss  xmm2, dword ptr [rdi+4]
      vsubss  xmm1, xmm0, xmm6
      vmulss  xmm1, xmm1, xmm4
      vaddss  xmm0, xmm1, xmm6
      vsubss  xmm1, xmm2, xmm7
      vmovss  dword ptr [rdi], xmm0
      vmulss  xmm0, xmm1, xmm4
      vmovss  xmm1, dword ptr [rdi+8]
      vaddss  xmm3, xmm0, xmm7
      vsubss  xmm0, xmm1, xmm5
      vmulss  xmm2, xmm0, xmm4
      vmovss  dword ptr [rdi+4], xmm3
      vaddss  xmm3, xmm2, xmm5
      vmovss  dword ptr [rdi+8], xmm3
    }
  }
  __asm { vmovaps xmm7, [rsp+108h+var_68] }
  result = 1;
  __asm { vmovaps xmm6, [rsp+108h+var_58] }
  return result;
}

/*
==============
CG_WeaponVisibility_PlayerHasCandidateWeapon_Held
==============
*/
bool CG_WeaponVisibility_PlayerHasCandidateWeapon_Held(LocalClientNum_t localClientNum, const centity_t *cent)
{
  CgStatic *LocalClientStatics; 
  int clientNum; 
  cg_t *LocalClientGlobals; 
  characterInfo_t *CharacterInfo; 
  const WeaponDef *v7; 

  LocalClientStatics = CgStatic::GetLocalClientStatics(localClientNum);
  clientNum = cent->nextState.clientNum;
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)LocalClientStatics->m_localClientNum);
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static_inline.h", 25, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  CharacterInfo = CG_GetCharacterInfo(LocalClientGlobals, clientNum);
  if ( !CharacterInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 196, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
    __debugbreak();
  if ( !CharacterInfo->dobjHeldWeapon.weaponIdx || BG_IsRiotShield(&CharacterInfo->dobjHeldWeapon, 0) )
    return 0;
  v7 = BG_WeaponDef(&CharacterInfo->dobjHeldWeapon, 0);
  if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 205, ASSERT_TYPE_ASSERT, "(weapDef)", (const char *)&queryFormat, "weapDef") )
    __debugbreak();
  return v7->worldModel != NULL;
}

/*
==============
CG_WeaponVisibility_PlayerHasCandidateWeapon_Stowed
==============
*/
bool CG_WeaponVisibility_PlayerHasCandidateWeapon_Stowed(LocalClientNum_t localClientNum, const centity_t *cent, characterInfo_t *ci)
{
  const dvar_t *v3; 
  const dvar_t *v5; 

  v3 = DVARBOOL_killswitch_weapon_visibility_attachedmodel_check_enabled;
  if ( !DVARBOOL_killswitch_weapon_visibility_attachedmodel_check_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "killswitch_weapon_visibility_attachedmodel_check_enabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  if ( v3->current.enabled && ci->attachModelIsOnBack )
    return 1;
  v5 = DVARBOOL_killswitch_weapon_visibility_stowed_check_enabled;
  if ( !DVARBOOL_killswitch_weapon_visibility_stowed_check_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "killswitch_weapon_visibility_stowed_check_enabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v5);
  return v5->current.enabled && BG_StowedOcclusionTestEnabled(&ci->dobjStowedWeapon);
}

/*
==============
CG_WeaponVisibility_SetOccluded
==============
*/
void CG_WeaponVisibility_SetOccluded(characterInfo_t *const ci, bool isHeldOccluded, bool isStowedOccluded)
{
  if ( !ci && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 4410, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
    __debugbreak();
  if ( ci->heldWeaponOccluded != isHeldOccluded || ci->stowedWeaponOccluded != isStowedOccluded )
  {
    ci->heldWeaponOccluded = isHeldOccluded;
    ci->stowedWeaponOccluded = isStowedOccluded;
    ci->dobjDirty = 1;
  }
}

/*
==============
CG_WeaponVisibility_Trace_HitAlongLength
==============
*/
_BOOL8 CG_WeaponVisibility_Trace_HitAlongLength(LocalClientNum_t localClientNum, const centity_t *cent, const vec3_t *spineOrigin, const vec3_t *weaponTipOrigin)
{
  bool v6; 
  const dvar_t *v7; 
  bool v8; 
  const dvar_t *v9; 
  const dvar_t *v11; 
  const dvar_t *v13; 
  const vec4_t *v14; 

  v6 = CG_WeaponVisibility_Trace_Internal(localClientNum, spineOrigin, weaponTipOrigin, cent->nextState.number);
  v7 = DVARBOOL_cg_drawWVisDebug;
  v8 = v6;
  if ( !DVARBOOL_cg_drawWVisDebug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawWVisDebug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v7);
  if ( v7->current.enabled )
  {
    v9 = DVARINT_cg_weaponVisInterval;
    if ( !DVARINT_cg_weaponVisInterval && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_weaponVisInterval") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v9);
    __asm { vmovss  xmm1, cs:radius_4; radius }
    CG_DebugSphere(spineOrigin, *(float *)&_XMM1, &colorBlue, 0, v9->current.integer);
    v11 = DVARINT_cg_weaponVisInterval;
    if ( !DVARINT_cg_weaponVisInterval && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_weaponVisInterval") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v11);
    __asm { vmovss  xmm1, cs:radius_4; radius }
    CG_DebugSphere(weaponTipOrigin, *(float *)&_XMM1, &colorBlue, 0, v11->current.integer);
    v13 = DVARINT_cg_weaponVisInterval;
    if ( !DVARINT_cg_weaponVisInterval && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_weaponVisInterval") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v13);
    v14 = &colorGreen;
    if ( v8 )
      v14 = &colorRed;
    CG_DebugLine(spineOrigin, weaponTipOrigin, v14, 0, v13->current.integer);
  }
  return v8;
}

/*
==============
CG_WeaponVisibility_Trace_HitToEye
==============
*/
_BOOL8 CG_WeaponVisibility_Trace_HitToEye(LocalClientNum_t localClientNum, const centity_t *cent, const vec3_t *spineOrigin, const vec3_t *eyeOrigin)
{
  const vec3_t *v9; 
  bool v37; 
  const dvar_t *v38; 
  const dvar_t *v39; 
  const dvar_t *v41; 
  const vec4_t *v42; 
  _BOOL8 result; 
  vec3_t end; 
  int v50[3]; 
  __int64 v51; 
  char v52; 
  void *retaddr; 

  _RAX = &retaddr;
  v51 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm8
    vmovaps xmmword ptr [rax-68h], xmm9
  }
  v9 = spineOrigin;
  __asm
  {
    vmovss  xmm0, dword ptr [r9]
    vmovss  dword ptr [rsp+0D8h+end], xmm0
    vmovss  xmm1, dword ptr [r9+4]
    vmovss  dword ptr [rsp+0D8h+end+4], xmm1
    vmovss  xmm2, dword ptr [r9+8]
    vmovss  dword ptr [rsp+0D8h+end+8], xmm2
    vmovss  xmm7, dword ptr [r8]
    vsubss  xmm3, xmm7, xmm0
    vmovss  [rsp+0D8h+var_88], xmm3
    vmovss  xmm8, dword ptr [r8+4]
    vsubss  xmm4, xmm8, xmm1
    vmovss  [rsp+0D8h+var_84], xmm4
    vmovss  xmm9, dword ptr [r8+8]
    vsubss  xmm5, xmm9, xmm2
    vmovss  dword ptr [rax-80h], xmm5
    vmulss  xmm1, xmm4, xmm4
    vmulss  xmm0, xmm3, xmm3
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm5, xmm5
    vaddss  xmm0, xmm2, xmm1
    vcomiss xmm0, cs:__real@47800000
    vsqrtss xmm1, xmm0, xmm0
    vmovss  xmm0, cs:__real@3f800000
    vdivss  xmm2, xmm0, xmm1
    vmulss  xmm3, xmm2, xmm3
    vmulss  xmm4, xmm2, xmm4
    vmulss  xmm6, xmm2, xmm5
    vmovss  xmm5, cs:__real@43800000
    vmulss  xmm0, xmm3, xmm5
    vsubss  xmm1, xmm7, xmm0
    vmovss  dword ptr [rsp+0D8h+end], xmm1
    vmulss  xmm2, xmm4, xmm5
    vsubss  xmm0, xmm8, xmm2
    vmovss  dword ptr [rsp+0D8h+end+4], xmm0
    vmulss  xmm1, xmm6, xmm5
    vsubss  xmm2, xmm9, xmm1
    vmovss  dword ptr [rsp+0D8h+end+8], xmm2
  }
  v37 = CG_WeaponVisibility_Trace_Internal(localClientNum, spineOrigin, &end, cent->nextState.number);
  v38 = DVARBOOL_cg_drawWVisDebug;
  if ( !DVARBOOL_cg_drawWVisDebug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawWVisDebug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v38);
  if ( v38->current.enabled )
  {
    v39 = DVARINT_cg_weaponVisInterval;
    if ( !DVARINT_cg_weaponVisInterval && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_weaponVisInterval") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v39);
    __asm { vmovss  xmm1, cs:radius_5; radius }
    CG_DebugSphere(v9, *(float *)&_XMM1, &colorBlue, 0, v39->current.integer);
    v41 = DVARINT_cg_weaponVisInterval;
    if ( !DVARINT_cg_weaponVisInterval && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_weaponVisInterval") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v41);
    v42 = &colorGreen;
    if ( v37 )
      v42 = &colorRed;
    CG_DebugLine(v9, &end, v42, 0, v41->current.integer);
  }
  memset(v50, 0, sizeof(v50));
  memset(&end, 0, sizeof(end));
  result = v37;
  _R11 = &v52;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
  }
  return result;
}

/*
==============
CG_WeaponVisibility_Trace_Internal
==============
*/
__int64 CG_WeaponVisibility_Trace_Internal(LocalClientNum_t localClientNum, const vec3_t *start, const vec3_t *end, const int ignoreEnt)
{
  __int32 v8; 
  hkMemoryAllocator *v11; 
  hkMemoryAllocator *v12; 
  Physics_RaycastExtendedData extendedData; 
  HavokPhysics_IgnoreBodies ignoreBodies; 
  __int64 v16; 
  PhysicsQuery_RaycastHit hit; 

  v16 = -2i64;
  v8 = 3 * localClientNum + 2;
  HavokPhysics_IgnoreBodies::HavokPhysics_IgnoreBodies(&ignoreBodies, 1, 0);
  HavokPhysics_IgnoreBodies::Reset(&ignoreBodies);
  PhysicsQuery_AddEntityChainToIgnoreList(ignoreEnt, &ignoreBodies, 1, 1, 0, 1, 1);
  extendedData.characterProxyType = PHYSICS_CHARACTERPROXY_TYPE_COLLISION;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vmovss  [rbp+57h+extendedData.collisionBuffer], xmm0
  }
  extendedData.phaseSelection = All;
  extendedData.insideHitType = Physics_RaycastInsideHitType_InsideHits;
  *(_WORD *)&extendedData.collectInsideHits = 256;
  extendedData.contents = 36865;
  extendedData.ignoreBodies = &ignoreBodies;
  PhysicsQuery_ImmediateRaycastClosest((Physics_WorldId)v8, start, end, &extendedData, &hit);
  if ( hit.isValid )
  {
    __asm
    {
      vmovss  xmm0, [rbp+57h+hit.fraction]
      vcomiss xmm0, cs:__real@3f800000
    }
  }
  v11 = hkMemHeapAllocator();
  ignoreBodies.m_ignoreBodies.m_size = 0;
  if ( ignoreBodies.m_ignoreBodies.m_capacityAndFlags >= 0 )
    hkMemoryAllocator::bufFree2(v11, ignoreBodies.m_ignoreBodies.m_data, 4, ignoreBodies.m_ignoreBodies.m_capacityAndFlags & 0x3FFFFFFF);
  ignoreBodies.m_ignoreBodies.m_data = NULL;
  ignoreBodies.m_ignoreBodies.m_capacityAndFlags = 0x80000000;
  v12 = hkMemHeapAllocator();
  ignoreBodies.m_ignoreEntities.m_size = 0;
  if ( ignoreBodies.m_ignoreEntities.m_capacityAndFlags >= 0 )
    hkMemoryAllocator::bufFree2(v12, ignoreBodies.m_ignoreEntities.m_data, 8, ignoreBodies.m_ignoreEntities.m_capacityAndFlags & 0x3FFFFFFF);
  return 0i64;
}

/*
==============
CG_WeaponVisibility_Update
==============
*/
void CG_WeaponVisibility_Update(const LocalClientNum_t localClientNum, const centity_t *cent)
{
  CgStatic *LocalClientStatics; 
  int clientNum; 
  cg_t *LocalClientGlobals; 
  const dvar_t *v9; 
  bool HasCandidateWeapon_Held; 
  bool HasCandidateWeapon_Stowed; 
  bool v13; 
  const DObj *ClientDObj; 
  CgGlobalsMP *v15; 
  char v16; 
  const WeaponDef *v17; 
  bool v19; 
  unsigned int v23; 
  unsigned int v24; 
  bool *p_lengthTrace; 
  __int64 v27; 
  bool v31; 
  signed int v35; 
  bool v36; 
  vec3_t *outEnd; 
  __int64 v38; 
  unsigned __int8 inOutIndex; 
  char v40; 
  vec3_t inOutStart; 
  vec3_t weaponTipOrigin; 
  int modelIndex; 
  vec3_t v44; 
  vec3_t outOrigin; 
  vec3_t outOrg; 
  characterInfo_t *v47; 
  __int64 v48; 
  tmat43_t<vec3_t> dst; 
  tmat33_t<vec3_t> src; 
  tmat33_t<vec3_t> outTagMat; 
  vec3_t ptr[6]; 

  v48 = -2i64;
  if ( (unsigned int)localClientNum >= LODWORD(cl_maxLocalClients) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 4448, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( (cl_maxLocalClients) )", "localClientNum doesn't index MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, cl_maxLocalClients) )
    __debugbreak();
  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 4449, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  LocalClientStatics = CgStatic::GetLocalClientStatics(localClientNum);
  clientNum = cent->nextState.clientNum;
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)LocalClientStatics->m_localClientNum);
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static_inline.h", 25, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  _RBX = CG_GetCharacterInfo(LocalClientGlobals, clientNum);
  v47 = _RBX;
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 4454, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
    __debugbreak();
  v9 = DVARBOOL_killswitch_weapon_visibility_client_hint_enabled;
  if ( !DVARBOOL_killswitch_weapon_visibility_client_hint_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "killswitch_weapon_visibility_client_hint_enabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v9);
  if ( v9->current.enabled && !_RBX->isNearEnvironmentCollision )
    goto LABEL_18;
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcomiss xmm0, dword ptr [rbx+998h]
  }
  HasCandidateWeapon_Held = CG_WeaponVisibility_PlayerHasCandidateWeapon_Held(localClientNum, cent);
  HasCandidateWeapon_Stowed = CG_WeaponVisibility_PlayerHasCandidateWeapon_Stowed(localClientNum, cent, _RBX);
  v13 = HasCandidateWeapon_Stowed;
  if ( HasCandidateWeapon_Held || HasCandidateWeapon_Stowed )
  {
    ClientDObj = Com_GetClientDObj(cent->nextState.number, localClientNum);
    v15 = CgGlobalsMP::GetLocalClientGlobals(localClientNum);
    RefdefView_GetOrg(&v15->refdef.view, &outOrg);
    if ( ClientDObj && (inOutIndex = -2, DObjGetBoneIndexInternal_76(ClientDObj, scr_const.j_spine4, &inOutIndex, &modelIndex)) && inOutIndex != 0xFF && CG_DObjGetWorldBoneMatrix(&cent->pose, ClientDObj, inOutIndex, &outTagMat, &outOrigin) )
    {
      if ( v13 )
      {
        inOutIndex = -2;
        if ( !DObjGetBoneIndexInternal_76(ClientDObj, scr_const.tag_shield_back, &inOutIndex, &modelIndex) || inOutIndex == 0xFF || !CG_DObjGetWorldBoneMatrix(&cent->pose, ClientDObj, inOutIndex, &src, &v44) )
          v13 = 0;
      }
      inOutIndex = 0;
      v16 = 0;
      if ( HasCandidateWeapon_Held )
      {
        v17 = BG_WeaponDef(&_RBX->dobjHeldWeapon, 0);
        __asm
        {
          vmovsd  xmm0, qword ptr [rbp+0C0h+outOrigin]
          vmovsd  qword ptr [rsp+1C0h+inOutStart], xmm0
        }
        inOutStart.v[2] = outOrigin.v[2];
        if ( CG_WeaponVisibility_CalcTrace_Held(cent, _RBX, ClientDObj, v17, &inOutStart, &weaponTipOrigin) )
        {
          if ( !CG_WeaponVisibility_Trace_HitAlongLength(localClientNum, cent, &inOutStart, &weaponTipOrigin) || (v19 = CG_WeaponVisibility_Trace_HitToEye(localClientNum, cent, &inOutStart, &outOrg), inOutIndex = 1, !v19) )
            inOutIndex = 0;
        }
        memset(&weaponTipOrigin, 0, sizeof(weaponTipOrigin));
        memset(&inOutStart, 0, sizeof(inOutStart));
      }
      if ( v13 )
      {
        MatrixCopy33(&src, (tmat33_t<vec3_t> *)&dst);
        __asm
        {
          vmovss  xmm0, dword ptr [rsp+1C0h+var_150]
          vmovss  [rbp+0C0h+var_EC], xmm0
          vmovss  xmm1, dword ptr [rsp+1C0h+var_150+4]
          vmovss  [rbp+0C0h+var_E8], xmm1
          vmovss  xmm0, dword ptr [rsp+1C0h+var_150+8]
          vmovss  [rbp+0C0h+var_E4], xmm0
        }
        v23 = 0;
        `eh vector constructor iterator'(ptr, 0xCui64, 6ui64, (void (__fastcall *)(void *))SecureVec3::SecureVec3, (void (__fastcall *)(void *))SecureVec3::~SecureVec3);
        v40 = 0;
        v24 = 0;
        _RSI = (_DWORD *)ptr;
        p_lengthTrace = &startEndOffsets[0].lengthTrace;
        do
        {
          v27 = (int)v24;
          MatrixTransformVector43(&startEndOffsets[v27].start, &dst, &weaponTipOrigin);
          if ( v23 >= 6 )
          {
            LODWORD(v38) = 6;
            LODWORD(outEnd) = v23;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 4545, ASSERT_TYPE_ASSERT, "(unsigned)( losCount ) < (unsigned)( ( sizeof( *array_counter( losOrigin ) ) + 0 ) )", "losCount doesn't index ARRAY_COUNT( losOrigin )\n\t%i not in [0, %i)", outEnd, v38) )
              __debugbreak();
          }
          __asm
          {
            vmovss  xmm0, dword ptr [rsp+1C0h+weaponTipOrigin]
            vmovss  dword ptr [rsi], xmm0
            vmovss  xmm1, dword ptr [rsp+1C0h+weaponTipOrigin+4]
            vmovss  dword ptr [rsi+4], xmm1
            vmovss  xmm0, dword ptr [rsp+1C0h+weaponTipOrigin+8]
            vmovss  dword ptr [rsi+8], xmm0
          }
          ++v23;
          _RSI += 3;
          if ( *p_lengthTrace )
          {
            MatrixTransformVector43(&startEndOffsets[v27].end, &dst, &inOutStart);
            v31 = CG_WeaponVisibility_Trace_HitAlongLength(localClientNum, cent, &weaponTipOrigin, &inOutStart);
            v40 |= v31;
            if ( !v31 )
            {
              if ( v23 >= 6 )
              {
                LODWORD(v38) = 6;
                LODWORD(outEnd) = v23;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 4561, ASSERT_TYPE_ASSERT, "(unsigned)( losCount ) < (unsigned)( ( sizeof( *array_counter( losOrigin ) ) + 0 ) )", "losCount doesn't index ARRAY_COUNT( losOrigin )\n\t%i not in [0, %i)", outEnd, v38) )
                  __debugbreak();
              }
              __asm
              {
                vmovss  xmm0, dword ptr [rsp+1C0h+inOutStart]
                vmovss  dword ptr [rsi], xmm0
                vmovss  xmm1, dword ptr [rsp+1C0h+inOutStart+4]
                vmovss  dword ptr [rsi+4], xmm1
                vmovss  xmm0, dword ptr [rsp+1C0h+inOutStart+8]
                vmovss  dword ptr [rsi+8], xmm0
              }
              ++v23;
              _RSI += 3;
            }
            memset(&inOutStart, 0, sizeof(inOutStart));
          }
          memset(&weaponTipOrigin, 0, sizeof(weaponTipOrigin));
          ++v24;
          p_lengthTrace += 28;
        }
        while ( v24 < 3 );
        v35 = 0;
        v16 = 0;
        if ( v40 )
        {
          v16 = 1;
          do
          {
            if ( v35 >= (int)v23 )
              break;
            v36 = CG_WeaponVisibility_Trace_HitToEye(localClientNum, cent, &ptr[v35++], &outOrg);
            v16 &= v36;
          }
          while ( v16 );
        }
        memset(&dst, 0, sizeof(dst));
        `eh vector destructor iterator'(ptr, 0xCui64, 6ui64, (void (__fastcall *)(void *))SecureVec3::~SecureVec3);
        _RBX = v47;
      }
      CG_WeaponVisibility_SetOccluded(_RBX, inOutIndex, v16);
      memset(&v44, 0, sizeof(v44));
    }
    else
    {
      CG_WeaponVisibility_SetOccluded(_RBX, 0, 0);
    }
    memset(&outOrigin, 0, sizeof(outOrigin));
    memset(&outOrg, 0, sizeof(outOrg));
  }
  else
  {
LABEL_18:
    CG_WeaponVisibility_SetOccluded(_RBX, 0, 0);
  }
}


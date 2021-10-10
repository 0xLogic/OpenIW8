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
  const playerState_s *v15; 
  const playerState_s *v16; 
  int v17; 
  float v20; 
  float v21; 
  const WeaponDef *v22; 
  int number; 
  float v24; 
  vec3_t *p_viewangles; 
  const dvar_t *v26; 
  float v27; 
  const vec4_t *v28; 
  double Float_Internal_DebugName; 
  float v30; 
  scr_string_t v31; 
  scr_string_t v32; 
  char v33; 
  vec3_t r_weapon; 
  vec3_t playerOrigin; 
  vec3_t angles; 
  tmat33_t<vec3_t> outTagMat; 
  vec3_t outOrigin; 
  vec3_t turretOrigin; 
  tmat33_t<vec3_t> v40; 
  vec3_t in1; 
  tmat43_t<vec3_t> axis; 
  tmat33_t<vec3_t> out; 
  tmat33_t<vec3_t> v44; 
  tmat33_t<vec3_t> v45; 

  *(_QWORD *)r_weapon.v = turretWeapon;
  if ( !playerEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 294, ASSERT_TYPE_ASSERT, "(playerEnt)", (const char *)&queryFormat, "playerEnt") )
    __debugbreak();
  if ( !ci && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 295, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
    __debugbreak();
  if ( !turretEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 296, ASSERT_TYPE_ASSERT, "(turretEnt)", (const char *)&queryFormat, "turretEnt") )
    __debugbreak();
  if ( !turretDObj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 297, ASSERT_TYPE_ASSERT, "(turretDObj)", (const char *)&queryFormat, "turretDObj") )
    __debugbreak();
  if ( !BG_TurretWeaponUses3pIK(turretWeapon, 0) )
    return 0;
  if ( CG_DObjGetWorldTagMatrix(&turretEnt->pose, turretDObj, scr_const.tag_gunner, &outTagMat, &outOrigin) )
  {
    LinkToParent = CG_Entity_GetLinkToParent(localClientNum, turretEnt);
    if ( !LinkToParent || (v33 = 1, LinkToParent->nextState.eType != ET_VEHICLE) )
      v33 = 0;
    LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals(localClientNum);
    snap = LocalClientGlobals->snap;
    nextSnap = LocalClientGlobals->nextSnap;
    if ( !snap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 324, ASSERT_TYPE_ASSERT, "(prevSnap)", (const char *)&queryFormat, "prevSnap") )
      __debugbreak();
    if ( !nextSnap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 325, ASSERT_TYPE_ASSERT, "(nextSnap)", (const char *)&queryFormat, "nextSnap") )
      __debugbreak();
    v15 = snap->GetPlayerState(snap, (const LocalClientNum_t)localClientNum);
    v16 = nextSnap->GetPlayerState(nextSnap, (const LocalClientNum_t)localClientNum);
    if ( !v15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 328, ASSERT_TYPE_ASSERT, "(prevPs)", (const char *)&queryFormat, "prevPs") )
      __debugbreak();
    if ( !v16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 329, ASSERT_TYPE_ASSERT, "(nextPs)", (const char *)&queryFormat, "nextPs") )
      __debugbreak();
    v17 = v16->commandTime - v15->commandTime;
    _XMM1 = 0i64;
    __asm { vroundss xmm3, xmm1, xmm2, 1 }
    if ( v17 < 1 )
      v17 = 1;
    v20 = 1.0 / _mm_cvtepi32_ps((__m128i)(unsigned int)v17).m128_f32[0];
    v21 = (float)((float)((float)((float)(turretEnt->nextState.lerp.u.turret.gunAngles.v[1] - turretEnt->prevState.u.turret.gunAngles.v[1]) * 0.0027777778) - *(float *)&_XMM3) * 360.0) * v20;
    if ( (float)(v20 * smoothDurationMs_0) > 1.0 )
      v21 = (float)(turretEnt->pose.turret.playerYawSpeedSmooth - (float)(turretEnt->pose.turret.playerYawSpeedSmooth * (float)(1.0 / (float)(v20 * smoothDurationMs_0)))) + (float)((float)(1.0 / (float)(v20 * smoothDurationMs_0)) * v21);
    turretEnt->pose.turret.playerYawSpeedSmooth = v21;
    AxisToAngles(&outTagMat, &playerEnt->pose.angles);
    v22 = BG_WeaponDef(*(const Weapon **)r_weapon.v, 0);
    if ( !v22 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 345, ASSERT_TYPE_ASSERT, "(weapDef)", (const char *)&queryFormat, "weapDef") )
      __debugbreak();
    if ( !BG_Turret_HasPmoveMovement(v22) )
      CG_SetPoseOrigin(&playerEnt->pose, &outOrigin);
    CG_GetPoseOrigin(&turretEnt->pose, &turretOrigin);
    CG_GetPoseOrigin(&playerEnt->pose, &playerOrigin);
    if ( !playerEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 552, ASSERT_TYPE_ASSERT, "(pose)", (const char *)&queryFormat, "pose") )
      __debugbreak();
    number = playerEnt->nextState.number;
    v24 = playerEnt->pose.angles.v[1];
    angles.v[0] = playerEnt->pose.angles.v[0];
    angles.v[2] = playerEnt->pose.angles.v[2];
    angles.v[1] = v24;
    p_viewangles = &LocalClientGlobals->predictedPlayerState.viewangles;
    if ( LocalClientGlobals->clientNum != number )
      p_viewangles = &ci->playerAngles;
    BG_Turret_UpdateAnimParams(ci, &playerOrigin, p_viewangles, &turretOrigin, &turretEnt->pose.angles);
    v26 = DVARBOOL_turretDebugYawDeltas;
    if ( !DVARBOOL_turretDebugYawDeltas && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "turretDebugYawDeltas") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v26);
    if ( v26->current.enabled )
    {
      CG_DebugSphere(&outOrigin, 2.0, &colorGreen, 0, 1);
      CG_DebugAxis(&outTagMat, &outOrigin, 4.0, 0, 1);
    }
    v27 = 0.0;
    if ( !v33 && COERCE_FLOAT(LODWORD(v21) & _xmm) > 0.0 )
    {
      if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_turretDebugYawDeltas, "turretDebugYawDeltas") )
      {
        CG_GetPoseOrigin(&playerEnt->pose, &r_weapon);
        v28 = &colorRed;
        if ( v21 >= 0.0 )
          v28 = &colorGreen;
        CG_DebugSphere(&r_weapon, 2.0, v28, 0, 18);
      }
      Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_turretYawDeltaRange, "turretYawDeltaRange");
      v30 = v21 / *(float *)&Float_Internal_DebugName;
      I_fclamp(v21 / *(float *)&Float_Internal_DebugName, -1.0, 1.0);
      v27 = v30;
    }
    ci->turretYawFraction = v27;
    AnglesToAxis(&angles, (tmat33_t<vec3_t> *)&axis);
    axis.m[3] = playerOrigin;
    v31 = XAnimIKGetLocatorTagName(XANIM_IK_ACTOR_RIGHT_HAND);
    if ( CG_DObjGetWorldTagMatrix(&turretEnt->pose, turretDObj, v31, &v40, &in1) )
    {
      MatrixTransposeTransformVector43(&in1, &axis, &ci->IKHandPos[1]);
      MatrixInverse(&outTagMat, &out);
      MatrixMultiply(&v40, &out, &v44);
      AxisToAngles(&v44, &ci->IKHandAng[1]);
    }
    v32 = XAnimIKGetLocatorTagName(XANIM_IK_ACTOR_LEFT_HAND);
    if ( CG_DObjGetWorldTagMatrix(&turretEnt->pose, turretDObj, v32, &v40, &in1) )
    {
      MatrixTransposeTransformVector43(&in1, &axis, ci->IKHandPos);
      MatrixInverse(&outTagMat, &out);
      MatrixMultiply(&v40, &out, &v45);
      AxisToAngles(&v45, ci->IKHandAng);
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
  const characterInfo_t *v5; 
  const SuitDef *SuitDef; 
  const SuitDef *v7; 
  const DObj *ClientDObj; 
  const DObj *v9; 
  const XModel *Model; 
  centity_t *Entity; 
  float v12; 
  double v13; 
  unsigned __int8 v14; 
  unsigned __int8 index[8]; 
  vec3_t outOrigin; 
  _QWORD v17[7]; 
  GfxSceneEntityMutableShaderData v18; 
  vec3_t lightingOrigin; 
  vec3_t angles; 
  DObjAnimMat outMat; 
  tmat43_t<vec3_t> in1; 
  tmat43_t<vec3_t> axis; 
  tmat43_t<vec3_t> v24; 
  tmat43_t<vec3_t> v25; 
  tmat43_t<vec3_t> dst; 
  tmat43_t<vec3_t> out; 
  GfxSceneEntityMutableShaderData entityMutableShaderData; 

  v17[0] = -2i64;
  if ( CG_Players_ShouldDrawPlayerHelmet(localClientNum) )
  {
    LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
    clientNum = LocalClientGlobals->predictedPlayerState.clientNum;
    if ( LocalClientGlobals->HasCharacterInfo(LocalClientGlobals, clientNum) )
    {
      CharacterInfo = CG_GetCharacterInfo(LocalClientGlobals, clientNum);
      v5 = CharacterInfo;
      if ( CharacterInfo )
      {
        SuitDef = BG_GetSuitDef(CharacterInfo->suitIndex);
        v7 = SuitDef;
        if ( SuitDef )
        {
          if ( SuitDef->cam_drawHelmet )
          {
            ClientDObj = Com_GetClientDObj(2115, localClientNum);
            v9 = ClientDObj;
            if ( ClientDObj )
            {
              Model = DObjGetModel(ClientDObj, 0);
              if ( !Model && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 1652, ASSERT_TYPE_ASSERT, "(helmetModel != nullptr)", (const char *)&queryFormat, "helmetModel != nullptr") )
                __debugbreak();
              index[0] = -2;
              if ( XModelGetBoneIndex(Model, scr_const.j_head, 0, index) )
              {
                DObjGetBasePoseMatrix(v9, index[0], &outMat);
                QuatToAxis(&outMat.quat, (tmat33_t<vec3_t> *)&axis);
                axis.m[3] = outMat.trans;
                MatrixInverseOrthogonal43(&axis, &out);
                AnglesToAxis(&v7->cam_camtoHelmetOffsetAngles, (tmat33_t<vec3_t> *)&v24);
                v24.m[3] = v7->cam_camtoHelmetOffsetOrigin;
                MatrixCopy33(&LocalClientGlobals->refdef.view.axis, (tmat33_t<vec3_t> *)&dst);
                RefdefView_GetOrg(&LocalClientGlobals->refdef.view, &dst.m[3]);
                MatrixMultiply43(&out, &v24, &in1);
                MatrixMultiply43(&in1, &dst, &v25);
                if ( !Mat33IsOrthonormal((const tmat33_t<vec3_t> *)&v25) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 1688, ASSERT_TYPE_ASSERT, "( Mat33IsOrthonormal( leading_submatrix<mat33_t>( modelToWorld ) ) )", "mat3 isn't orthonormal") )
                  __debugbreak();
                AxisToAngles((const tmat33_t<vec3_t> *)&v25, &angles);
                if ( LocalClientGlobals == (cg_t *)-304312i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 559, ASSERT_TYPE_ASSERT, "(pose)", (const char *)&queryFormat, "pose") )
                  __debugbreak();
                LocalClientGlobals->firstPersonHelmetPose.angles = angles;
                CG_SetPoseOrigin(&LocalClientGlobals->firstPersonHelmetPose, &v25.m[3]);
                if ( LocalClientGlobals == (cg_t *)-304312i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 643, ASSERT_TYPE_ASSERT, "(pose)", (const char *)&queryFormat, "pose") )
                  __debugbreak();
                LocalClientGlobals->firstPersonHelmetPose.prevAngles = angles;
                CG_SetPrevPoseOrigin(&LocalClientGlobals->firstPersonHelmetPose, &v25.m[3]);
                Entity = CG_GetEntity(localClientNum, LocalClientGlobals->predictedPlayerState.clientNum);
                CG_GetPoseOrigin(&Entity->pose, &outOrigin);
                lightingOrigin = outOrigin;
                if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&Entity->nextState.lerp.eFlags, ACTIVE, 4u) )
                {
                  v12 = lightingOrigin.v[2] + 12.0;
                }
                else if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&Entity->nextState.lerp.eFlags, ACTIVE, 3u) )
                {
                  v12 = lightingOrigin.v[2] + 20.0;
                }
                else
                {
                  v12 = lightingOrigin.v[2] + 32.0;
                }
                lightingOrigin.v[2] = v12;
                v13 = CG_PlayersMP_LerpEmission(localClientNum, v5);
                v14 = float_to_integral_cast<unsigned char,float>(*(float *)&v13 * 255.0);
                memset(&v17[1], 0, 36);
                memset(&in1, 0, 36);
                entityMutableShaderData = *CG_Entity_GetMutableShaderData(&v18, localClientNum, v9, v14 << 24, (GfxSceneHudOutlineInfo *)&in1, (shaderOverride_t *)&v17[1], 0.0);
                R_AddViewmodelDObjToScene(v9, &LocalClientGlobals->firstPersonHelmetPose, 0x843u, 0x4020Du, &entityMutableShaderData, &lightingOrigin, 0.0, 0);
                memset(&outOrigin, 0, sizeof(outOrigin));
              }
            }
          }
        }
      }
    }
  }
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
  centity_t *v8; 
  const DObj *ClientDObj; 
  unsigned int Animset; 
  unsigned int animationNumber; 
  CgWeaponMap *Instance; 
  const Weapon *turretWeapon; 
  const PlayerAnimEntry *animation; 
  CgWeaponMap *v15; 
  const Weapon *WeaponForEntity; 
  const WeaponDef *v17; 
  const BgAnimStatic *v18; 
  const XAnim_s *Anims; 
  int XAnimIndex; 
  SuitAnimType SuitAnimIndexFromCharacter; 
  unsigned int v22; 
  double v23; 
  float v24; 
  float v25; 
  int NumChildren; 
  float v27; 
  float v28; 
  const char *AnimDebugName; 
  int v30; 
  __int64 v31; 
  unsigned int ChildAt; 
  int v33; 
  const char *v34; 
  __int128 v36; 
  float v38; 
  float v39; 
  const DObj *v40; 
  LocalClientNum_t v41; 
  cpose_t *v42; 
  float v43; 
  unsigned int v44; 
  unsigned int v45; 
  const DObj *v46; 
  unsigned int v47; 
  unsigned int v48; 
  double v49; 
  const SuitDef *SuitDef; 
  float v51; 
  float v52; 
  int ProneViewHeight; 
  float v54; 
  unsigned int animIndex; 
  unsigned int v56; 
  int childIndex; 
  vec3_t inOrigin; 
  vec3_t start; 
  unsigned int v60[2]; 
  LocalClientNum_t v61; 
  void *objID; 
  vec3_t end; 
  CgGlobalsMP *LocalClientGlobals; 
  vec3_t v65; 
  XAnimTree *tree; 
  cpose_t *pose; 
  cpose_t *p_pose; 
  __int64 v69; 
  vec3_t trans; 
  vec3_t v71; 
  vec4_t rot; 
  tmat43_t<vec3_t> axis; 
  tmat43_t<vec3_t> v74; 
  tmat43_t<vec3_t> v75; 
  tmat43_t<vec3_t> outTagMat; 
  tmat43_t<vec3_t> v77; 
  tmat33_t<vec3_t> v78; 
  tmat43_t<vec3_t> out; 
  trace_t results; 

  v69 = -2i64;
  pose = &cent->pose;
  v61 = localClientNum;
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
      v8 = Entity;
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
                turretWeapon = BG_GetWeaponForEntity(Instance, &v8->nextState);
                if ( !turretWeapon->weaponIdx && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 529, ASSERT_TYPE_ASSERT, "(turretWeapon.weaponIdx)", (const char *)&queryFormat, "turretWeapon.weaponIdx") )
                  __debugbreak();
                CG_HandlePositionAndBlendForIKTurret(localClientNum, cent, CharacterInfo, v8, ClientDObj, turretWeapon);
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
            v15 = CgWeaponMap::GetInstance(localClientNum);
            WeaponForEntity = BG_GetWeaponForEntity(v15, &v8->nextState);
            if ( !WeaponForEntity->weaponIdx && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 542, ASSERT_TYPE_ASSERT, "(turretWeapon.weaponIdx)", (const char *)&queryFormat, "turretWeapon.weaponIdx") )
              __debugbreak();
            if ( !CG_HandlePositionAndBlendForIKTurret(localClientNum, cent, CharacterInfo, v8, ClientDObj, WeaponForEntity) )
            {
              if ( CG_DObjGetWorldTagMatrix(&v8->pose, ClientDObj, scr_const.tag_weapon, (tmat33_t<vec3_t> *)&outTagMat, &outTagMat.m[3]) )
              {
                if ( LocalClientGlobals->frametime )
                {
                  v17 = BG_WeaponDef(WeaponForEntity, 0);
                  *(_QWORD *)v60 = v17;
                  if ( BG_GetWeaponClass(WeaponForEntity, 0) != WEAPCLASS_TURRET && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 559, ASSERT_TYPE_ASSERT, "(BG_GetWeaponClass( turretWeapon, false ) == WEAPCLASS_TURRET)", (const char *)&queryFormat, "BG_GetWeaponClass( turretWeapon, false ) == WEAPCLASS_TURRET") )
                    __debugbreak();
                  if ( v17->fAnimHorRotateInc == 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 560, ASSERT_TYPE_ASSERT, "(weapDef->fAnimHorRotateInc)", (const char *)&queryFormat, "weapDef->fAnimHorRotateInc") )
                    __debugbreak();
                  v18 = LocalClientStatics->GetAnimStatics(LocalClientStatics);
                  if ( !v18 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 564, ASSERT_TYPE_ASSERT, "(bgameAnim)", (const char *)&queryFormat, "bgameAnim") )
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
                    Anims = v18->animScriptData.animTree.anims;
                    XAnimIndex = BG_AnimationMP_GetXAnimIndex(v18, SuitAnimIndexFromCharacter, CharacterInfo->legs.animationNumber & 0xFFFFEFFF);
                  }
                  v22 = XAnimIndex;
                  animIndex = XAnimIndex;
                  AnglesToAxis(&v8->pose.angles, (tmat33_t<vec3_t> *)&axis);
                  CG_GetPoseOrigin(&v8->pose, &axis.m[3]);
                  MatrixInverseOrthogonal43(&axis, &out);
                  MatrixMultiply43(&outTagMat, &out, &v74);
                  v23 = vectosignedyaw((const vec2_t *)&v74);
                  v24 = *(float *)&v23;
                  CG_GetPoseOrigin(&cent->pose, &inOrigin);
                  v25 = (float)((float)((float)((float)(inOrigin.v[1] - axis.m[3].v[1]) * axis.m[2].v[1]) + (float)((float)(inOrigin.v[0] - axis.m[3].v[0]) * axis.m[2].v[0])) + (float)((float)(inOrigin.v[2] - axis.m[3].v[2]) * axis.m[2].v[2])) - v74.m[3].v[2];
                  NumChildren = XAnimGetNumChildren(Anims, v22);
                  v27 = 0.0;
                  v28 = 0.0;
                  childIndex = 0;
                  v56 = 0;
                  if ( !NumChildren )
                  {
                    AnimDebugName = XAnimGetAnimDebugName(Anims, v22);
                    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143E2FBB8, 1165i64, AnimDebugName);
                  }
                  v30 = 0;
                  v31 = *(_QWORD *)v60;
                  do
                  {
                    ChildAt = XAnimGetChildAt(Anims, animIndex, NumChildren - v30 - 1);
                    v33 = XAnimGetNumChildren(Anims, ChildAt);
                    if ( !v33 )
                    {
                      v34 = XAnimGetAnimDebugName(Anims, ChildAt);
                      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143E2FBB8, 1166i64, v34);
                    }
                    v36 = 0i64;
                    *(float *)&v36 = (float)(v33 - 1);
                    _XMM2 = v36;
                    if ( (float)((float)(*(float *)&v23 / *(float *)(v31 + 3228)) + (float)(*(float *)&v36 * 0.5)) >= 0.0 )
                      __asm { vminss  xmm1, xmm2, xmm3 }
                    else
                      LODWORD(_XMM1) = 0;
                    v38 = *(float *)&_XMM1 - (float)(int)*(float *)&_XMM1;
                    v60[0] = XAnimGetChildAt(Anims, ChildAt, (int)*(float *)&_XMM1);
                    XAnimGetAbsDelta(Anims, v60[0], &rot, &trans, 0.0);
                    if ( v38 == 0.0 )
                    {
                      v39 = trans.v[2];
                    }
                    else
                    {
                      v56 = XAnimGetChildAt(Anims, ChildAt, (int)*(float *)&_XMM1 + 1);
                      XAnimGetAbsDelta(Anims, v56, &rot, &v71, 0.0);
                      trans.v[0] = (float)((float)(v71.v[0] - trans.v[0]) * v38) + trans.v[0];
                      trans.v[1] = (float)((float)(v71.v[1] - trans.v[1]) * v38) + trans.v[1];
                      v39 = trans.v[2] + (float)((float)(v71.v[2] - trans.v[2]) * v38);
                      trans.v[2] = v39;
                    }
                    if ( v39 >= v25 )
                      break;
                    v27 = v39;
                    childIndex = (int)*(float *)&_XMM1;
                    v28 = *(float *)&_XMM1 - (float)(int)*(float *)&_XMM1;
                    ++v30;
                  }
                  while ( v30 < NumChildren );
                  v40 = (const DObj *)objID;
                  XAnimClearTreeGoalWeightsStrict(tree, 0, XANIM_SUBTREE_DEFAULT, animIndex, 0.0, objID, LINEAR);
                  XAnimSetGoalWeight(v40, 0, XANIM_SUBTREE_DEFAULT, v60[0], 1.0 - v38, 0.0, 1.0, (scr_string_t)0, 0, 0, LINEAR, NULL);
                  v41 = v61;
                  v42 = pose;
                  if ( v38 != 0.0 )
                    XAnimSetGoalWeight(v40, 0, XANIM_SUBTREE_DEFAULT, v56, v38, 0.0, 1.0, (scr_string_t)0, 0, 0, LINEAR, NULL);
                  if ( !v30 || v30 == NumChildren )
                  {
                    XAnimSetGoalWeight(v40, 0, XANIM_SUBTREE_DEFAULT, ChildAt, 1.0, 0.0, 1.0, (scr_string_t)0, 0, 0, LINEAR, NULL);
                    v44 = animIndex;
                    v46 = (const DObj *)objID;
                  }
                  else
                  {
                    if ( (float)(trans.v[2] - v27) == 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 657, ASSERT_TYPE_ASSERT, "(trans[2] - fPrevTransZ)", (const char *)&queryFormat, "trans[2] - fPrevTransZ") )
                      __debugbreak();
                    v43 = (float)(v25 - v27) / (float)(trans.v[2] - v27);
                    XAnimSetGoalWeight(v40, 0, XANIM_SUBTREE_DEFAULT, ChildAt, v43, 0.0, 1.0, (scr_string_t)0, 0, 0, LINEAR, NULL);
                    v44 = animIndex;
                    v45 = XAnimGetChildAt(Anims, animIndex, NumChildren - v30);
                    v46 = (const DObj *)objID;
                    XAnimSetGoalWeight((const DObj *)objID, 0, XANIM_SUBTREE_DEFAULT, v45, 1.0 - v43, 0.0, 1.0, (scr_string_t)0, 0, 0, LINEAR, NULL);
                    v47 = XAnimGetChildAt(Anims, v45, childIndex);
                    XAnimSetGoalWeight(v46, 0, XANIM_SUBTREE_DEFAULT, v47, 1.0 - v28, 0.0, 1.0, (scr_string_t)0, 0, 0, LINEAR, NULL);
                    if ( v28 != 0.0 )
                    {
                      v48 = XAnimGetChildAt(Anims, v45, childIndex + 1);
                      XAnimSetGoalWeight(v46, 0, XANIM_SUBTREE_DEFAULT, v48, v28, 0.0, 1.0, (scr_string_t)0, 0, 0, LINEAR, NULL);
                    }
                  }
                  XAnimCalcAbsDelta(v46, 0, XANIM_SUBTREE_DEFAULT, v44, &rot, &trans);
                  VectorAngleMultiply((vec2_t *)&trans, *(float *)&v23);
                  v75.m[3].v[0] = trans.v[0] + v74.m[3].v[0];
                  v75.m[3].v[1] = v74.m[3].v[1] + trans.v[1];
                  v75.m[3].v[2] = v74.m[3].v[2] + trans.v[2];
                  QuatToAxis(&rot, &v78);
                  v49 = vectoyaw((const vec2_t *)&v78);
                  YawToAxis(*(float *)&v49 + v24, (tmat33_t<vec3_t> *)&v75);
                  MatrixMultiply43(&v75, &axis, &v77);
                  AxisToAngles((const tmat33_t<vec3_t> *)&v77, &v42->angles);
                  CG_SetPoseOrigin(v42, &v77.m[3]);
                  CG_GetPoseOrigin(v42, &start);
                  end = start;
                  SuitDef = BG_GetSuitDef(LocalClientGlobals->predictedPlayerState.suitIndex);
                  if ( !SuitDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 699, ASSERT_TYPE_ASSERT, "(suitDef)", (const char *)&queryFormat, "suitDef") )
                    __debugbreak();
                  CG_GetPoseOrigin(p_pose, &v65);
                  if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() == LONG )
                  {
                    v51 = v65.v[2];
                    v52 = v65.v[2] + 18.0;
                  }
                  else
                  {
                    ProneViewHeight = BG_Suit_GetProneViewHeight(SuitDef);
                    v51 = v65.v[2];
                    v52 = v65.v[2] - (float)ProneViewHeight;
                  }
                  start.v[2] = v52;
                  end.v[2] = v51 - (float)SuitDef->viewheight_stand;
                  PhysicsQuery_LegacyTrace((Physics_WorldId)(3 * v41 + 2), &results, &start, &end, &bounds_origin, SLOWORD(v42[1].prevOrigin.prevOrigin.xyz.z), 0, 33636369, 0, NULL, All);
                  if ( results.fraction < 1.0 )
                  {
                    v54 = (float)((float)(end.v[2] - start.v[2]) * results.fraction) + start.v[2];
                    CG_GetPoseOrigin(v42, &inOrigin);
                    inOrigin.v[2] = v54;
                    CG_SetPoseOrigin(v42, &inOrigin);
                  }
                  memset(&v65, 0, sizeof(v65));
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
  __int64 p_ci; 
  DObj *ClientDObj; 
  CgWeaponMap *Instance; 
  const DObj *v10; 
  DObj *v11; 
  unsigned int v12; 
  CgWeaponMap *v13; 
  CgHandler *Handler; 
  float v15; 
  CgStatic *LocalClientStatics; 
  const characterInfo_t *CharacterInfo; 
  double v18; 
  double v19; 
  unsigned int v20; 
  unsigned int number; 
  bool *isOverHalfWayFaded; 
  bool *isOverHalfWayFadeda; 
  vec3_t *movingPlatformAngles; 
  bool v25; 
  bool isFadeComplete; 
  bool isFadeActive; 
  unsigned int scriptableIndex; 
  vec3_t v29; 
  const DObj *v30; 
  __int64 v31; 
  GfxSceneHudOutlineInfo v32; 
  shaderOverride_t v33; 
  vec3_t outOrigin; 

  v31 = -2i64;
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
    p_ci = (__int64)&LocalClientStaticGlobals->agentCorpseInfo[v6].ci;
    ClientDObj = Com_GetClientDObj(cent->nextState.number, (LocalClientNum_t)v3);
    Instance = CgWeaponMap::GetInstance((const LocalClientNum_t)v3);
    BG_AnimationMP_UpdateAgentCorpseDObj((LocalClientNum_t)v3, ClientDObj, Instance, &cent->nextState, (characterInfo_t *)p_ci);
    v10 = Com_GetClientDObj(cent->nextState.number, (LocalClientNum_t)v3);
    v11 = (DObj *)v10;
    v30 = v10;
    if ( v10 )
    {
      if ( (LocalClientStaticGlobals->agentCorpseInfo[v6].flag & 0x10) != 0 )
      {
        XAnimBonePhysicsRestoreState(v10, &LocalClientStaticGlobals->agentCorpseInfo[v6].transferredDynamicBonesState);
        LocalClientStaticGlobals->agentCorpseInfo[v6].flag &= ~0x10u;
      }
      CG_CorpseFade_ApplyDissolveMaterial((const LocalClientNum_t)v3, v11, cent->nextState.number, &isFadeActive, &isFadeComplete, &v25);
      v11->flags |= 0x40u;
      v12 = 0;
      if ( FX_Dismemberment_ProcessEntity((LocalClientNum_t)v3, v11, v25) )
        v12 = 128;
      *(_DWORD *)p_ci = cent->nextState.clientNum;
      *(_QWORD *)(p_ci + 2768) = 0i64;
      *(_BYTE *)(p_ci + 14497) = 0;
      if ( (cent->nextState.animInfo.animData & 1) != (*(_DWORD *)(p_ci + 2568) != 0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 3844, ASSERT_TYPE_ASSERT, "((!!es->animInfo.selectAnim.usingAnimState) == (!!ci->usingAnimState))", (const char *)&queryFormat, "(!!es->animInfo.selectAnim.usingAnimState) == (!!ci->usingAnimState)") )
        __debugbreak();
      if ( *(_DWORD *)(p_ci + 2568) )
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
        BG_AIAnim_UpdateExecutionParameter(v11, (const characterInfo_t *)p_ci);
        BG_AnimationState_Update(&cent->nextState, (characterInfo_t *)p_ci, 0);
      }
      else
      {
        CG_Players_CopyAnimStateFromEntity((characterInfo_t *)p_ci, &cent->nextState);
        CG_Players_SetUseShadowAnims((characterInfo_t *const)p_ci, 0);
        CG_GetPoseOrigin(&cent->pose, &outOrigin);
        v13 = CgWeaponMap::GetInstance((const LocalClientNum_t)v3);
        Handler = CgHandler::getHandler((LocalClientNum_t)v3);
        BG_PlayerAnimation(Handler, v13, &cent->nextState, (characterInfo_t *)p_ci, &outOrigin, &vec3_origin, &vec3_origin);
      }
      CG_GetPoseOrigin(&cent->pose, &v29);
      if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&cent->nextState.lerp.eFlags, ACTIVE, 4u) )
      {
        v15 = v29.v[2] + 12.0;
      }
      else if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&cent->nextState.lerp.eFlags, ACTIVE, 3u) )
      {
        v15 = v29.v[2] + 20.0;
      }
      else
      {
        v15 = v29.v[2] + 32.0;
      }
      v29.v[2] = v15;
      if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagStrict(&cent->nextState.lerp.eFlags, (EntityStateFlagsMP)27) )
      {
        LocalClientStatics = CgStatic::GetLocalClientStatics((const LocalClientNum_t)v3);
        CharacterInfo = CgStatic::GetCharacterInfo(LocalClientStatics, *(_DWORD *)p_ci);
        if ( !CharacterInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 3891, ASSERT_TYPE_ASSERT, "(ciOld)", (const char *)&queryFormat, "ciOld") )
          __debugbreak();
        *(_DWORD *)(p_ci + 5232) = 3000;
        *(_DWORD *)(p_ci + 5228) = CG_GetLocalClientGlobals((const LocalClientNum_t)v3)->time;
        v18 = CG_PlayersMP_LerpEmission((LocalClientNum_t)v3, CharacterInfo);
        *(float *)(p_ci + 5236) = *(float *)&v18;
        *(_DWORD *)(p_ci + 5240) = 0;
      }
      v19 = CG_PlayersMP_LerpEmission((LocalClientNum_t)v3, (const characterInfo_t *)p_ci);
      v20 = float_to_integral_cast<unsigned char,float>(*(float *)&v19 * 255.0) << 24;
      if ( !isFadeComplete )
      {
        number = cent->nextState.number;
        memset(&v32, 0, sizeof(v32));
        memset(&v33, 0, sizeof(v33));
        CG_Entity_AddDObjToScene((const LocalClientNum_t)v3, v30, &cent->pose, number, v12, &v33, &v32, &v29, 0.0, v20);
      }
    }
    else
    {
      LocalClientStaticGlobals->agentCorpseInfo[v6].flag &= ~0x10u;
    }
  }
  memset(&v29, 0, sizeof(v29));
}

/*
==============
CG_PlayersMP_ApplyWorldUp
==============
*/
void CG_PlayersMP_ApplyWorldUp(const centity_t *const cent, const float lerp, const vec3_t *localAngles, vec3_t *outWorldAngles)
{
  entityType_s eType; 
  vec3_t end; 
  vec3_t outAngles; 
  vec3_t outWorldUpAngles; 
  tmat33_t<vec3_t> axis; 
  tmat33_t<vec3_t> in1; 
  tmat33_t<vec3_t> out; 

  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 726, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( cent == (const centity_t *const)-400i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 1921, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  eType = cent->nextState.eType;
  if ( (((eType - 1) & 0xFFED) != 0 || eType == ET_ITEM) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 727, ASSERT_TYPE_ASSERT, "(BG_IsCharacterEntity( &cent->nextState ))", (const char *)&queryFormat, "BG_IsCharacterEntity( &cent->nextState )") )
    __debugbreak();
  WorldUpReferenceFrame::UnpackEntityStateAngles(cent->prevState.u.anonymous.data[3], &outWorldUpAngles);
  WorldUpReferenceFrame::UnpackEntityStateAngles(cent->nextState.lerp.u.anonymous.data[3], &end);
  if ( outWorldUpAngles.v[0] == end.v[0] && outWorldUpAngles.v[1] == end.v[1] && outWorldUpAngles.v[2] == end.v[2] || lerp >= 1.0 )
    outAngles = end;
  else
    BgSpaceship::AngleLerp(&outWorldUpAngles, &end, lerp, &outAngles);
  if ( outAngles.v[0] == 0.0 && outAngles.v[1] == 0.0 && outAngles.v[2] == 0.0 )
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
    AnglesToAxis(&outAngles, &axis);
    AnglesToAxis(localAngles, &in1);
    MatrixMultiply(&in1, &axis, &out);
    AxisToAngles(&out, outWorldAngles);
  }
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
  bool v6; 
  unsigned int v7; 
  ClientBits *v8; 
  CgGlobalsMP *v9; 
  unsigned int v10; 
  __int64 v11; 
  unsigned int v12; 
  __int64 v13; 
  unsigned __int16 v14; 
  __int64 v15; 
  char *v16; 
  unsigned __int8 v17; 
  unsigned int v18; 
  unsigned __int64 v19; 
  CgPlayerEventInventory *v20; 
  ClientBits *v21; 
  char *v22; 
  bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u> > *v23; 
  unsigned int i; 
  __int64 v30; 
  __int64 v31; 
  __int64 v32; 
  __int64 v33; 
  int v34; 
  unsigned int v35; 
  unsigned int v36; 
  unsigned int v37; 
  unsigned __int64 v38; 
  CgGlobalsMP *LocalClientGlobals; 

  v6 = allowDebt;
  v7 = endBit;
  v8 = eventBits;
  LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals(localClientNum);
  v9 = LocalClientGlobals;
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 1001, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  v10 = v8->array[0];
  LODWORD(v11) = 0;
  v34 = 0;
  while ( v10 )
  {
LABEL_8:
    v12 = __lzcnt(v10);
    v13 = v12 + 32 * (_DWORD)v11;
    v35 = v12 + 32 * v11;
    if ( v12 >= 0x20 )
    {
      LODWORD(v31) = 32;
      LODWORD(v30) = v12;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_bitops.h", 104, ASSERT_TYPE_ASSERT, "(unsigned)( count ) < (unsigned)( 32 )", "count doesn't index 32\n\t%i not in [0, %i)", v30, v31) )
        __debugbreak();
    }
    if ( (v10 & (0x80000000 >> v12)) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarrayiterator.h", 76, ASSERT_TYPE_ASSERT, "(iter->bits & bit)", (const char *)&queryFormat, "iter->bits & bit") )
      __debugbreak();
    v37 = ~(0x80000000 >> v12) & v10;
    if ( (unsigned int)v13 >= v7 || !v6 && *animCalcUpdatesBudget <= 0 )
      return;
    if ( (unsigned int)v13 >= v9->m_playerOrderDistanceSortedCount )
    {
      LODWORD(v31) = v9->m_playerOrderDistanceSortedCount;
      LODWORD(v30) = v13;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 1016, ASSERT_TYPE_ASSERT, "(unsigned)( eventBitsIterator.index ) < (unsigned)( cgameGlob->m_playerOrderDistanceSortedCount )", "eventBitsIterator.index doesn't index cgameGlob->m_playerOrderDistanceSortedCount\n\t%i not in [0, %i)", v30, v31) )
        __debugbreak();
    }
    v14 = v9->m_playerOrderDistanceSortedIndex[v13];
    v15 = (unsigned int)v13;
    if ( v14 >= 0xF8u )
    {
      LODWORD(v31) = 248;
      LODWORD(v30) = v14;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 1018, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( ( sizeof( *array_counter( cgameGlob->m_playerUpdateAnimInfo ) ) + 0 ) )", "clientNum doesn't index cgameGlob->m_playerUpdateAnimInfo\n\t%i not in [0, %i)", v30, v31) )
        __debugbreak();
    }
    v16 = (char *)v9 + 56 * v14;
    v17 = 0;
    v18 = 0x80000000 >> (v13 & 0x1F);
    v36 = v18;
    v19 = 4 * ((unsigned __int64)(unsigned int)v13 >> 5);
    v38 = v19;
    do
    {
      v20 = eventInventory;
      v21 = &eventInventory->playerEventInventory[v17];
      if ( (unsigned int)v13 >= 0xE0 )
      {
        LODWORD(v31) = 224;
        LODWORD(v30) = v13;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v30, v31) )
          __debugbreak();
        v20 = eventInventory;
      }
      v22 = (char *)v21 + v19;
      if ( (v18 & *(unsigned int *)((_BYTE *)v21->array + v19)) != 0 )
      {
        v23 = &v20->bulletHitPartBits[v15];
        if ( v17 <= 1u )
        {
          _RDI = v16 + 813876;
          _RSI = (char *)((char *)v23 - (v16 + 813876));
          for ( i = 0; i < 2; ++i )
          {
            __asm
            {
              vlddqu  xmm6, xmmword ptr [rsi+rdi]
              vlddqu  xmm0, xmmword ptr [rdi]
              vpor    xmm6, xmm0, xmm6
            }
            *_RDI++ = _XMM6;
          }
          v16[813908] |= 4u;
          LODWORD(v13) = v35;
          bitarray_simd<256,bitarray_traits_simd128<bitarray_memory_traits_simd128u>>::resetAllBits(v23);
          v18 = v36;
          v15 = v35;
        }
        else if ( v17 > 2u )
        {
          if ( v17 <= 4u )
            v16[813908] |= 1u;
          else
            v16[813908] |= 2u;
        }
        if ( (unsigned int)v13 >= 0xE0 )
        {
          LODWORD(v33) = 224;
          LODWORD(v32) = v13;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 290, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v32, v33) )
            __debugbreak();
        }
        v19 = v38;
        *(_DWORD *)v22 &= ~v18;
      }
      ++v17;
    }
    while ( v17 < 6u );
    if ( (unsigned int)v13 >= 0xE0 )
    {
      LODWORD(v33) = 224;
      LODWORD(v32) = v13;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 290, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v32, v33) )
        __debugbreak();
    }
    v8 = eventBits;
    LODWORD(v11) = v34;
    v10 = v37;
    *(unsigned int *)((char *)eventBits->array + v19) &= ~v18;
    --*animCalcUpdatesBudget;
    v9 = LocalClientGlobals;
    v6 = allowDebt;
    v7 = endBit;
  }
  while ( 1 )
  {
    v11 = (unsigned int)(v11 + 1);
    v34 = v11;
    if ( (unsigned int)v11 >= 7 )
      break;
    v10 = v8->array[v11];
    if ( v10 )
      goto LABEL_8;
  }
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
  unsigned int v12; 
  __int64 v13; 
  __int64 v14; 
  CgEntitySystem *v15; 
  __int64 v16; 
  __int64 v17; 
  __int64 v18; 
  vec3_t v19; 
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
          LODWORD(v18) = v3;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 288, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the entity system for localClientNum %d but the entity system type is not known\n", "ms_allocatedType != GameModeType::NONE", v18) )
            __debugbreak();
        }
        if ( (unsigned int)v3 >= CgEntitySystem::ms_allocatedCount )
        {
          LODWORD(v18) = CgEntitySystem::ms_allocatedCount;
          LODWORD(v17) = v3;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 289, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v17, v18) )
            __debugbreak();
        }
        if ( !CgEntitySystem::ms_entitySystemArray[v3] )
        {
          LODWORD(v18) = v3;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 290, ASSERT_TYPE_ASSERT, "(ms_entitySystemArray[localClientNum])", "%s\n\tTrying to access unallocated entity system for localClientNum %d\n", "ms_entitySystemArray[localClientNum]", v18) )
            __debugbreak();
        }
        v9 = CgEntitySystem::ms_entitySystemArray[v3];
        if ( v1 >= 0x800 )
        {
          LODWORD(v18) = 2048;
          LODWORD(v17) = v1;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", v17, v18) )
            __debugbreak();
        }
        v10 = (__int64)&v9->m_entities[v8];
        if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 1809, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
          __debugbreak();
        if ( *(_WORD *)(v10 + 408) == 1 )
        {
          v19.v[2] = v7;
          *(double *)v19.v = *(double *)outOrg.v;
          CG_PlayersMP_CalcCoarseCullData_ProcessEntity((LocalClientNum_t)v3, (const centity_t *const)v10, &v19);
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
    v12 = ComCharacterLimits::ms_gameData.m_clientCount;
    v13 = m_agentCount;
    if ( (int)m_agentCount > 0 )
    {
      v14 = (int)ComCharacterLimits::ms_gameData.m_clientCount;
      do
      {
        if ( !(_BYTE)CgEntitySystem::ms_allocatedType )
        {
          LODWORD(v18) = v3;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 288, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the entity system for localClientNum %d but the entity system type is not known\n", "ms_allocatedType != GameModeType::NONE", v18) )
            __debugbreak();
        }
        if ( (unsigned int)v3 >= CgEntitySystem::ms_allocatedCount )
        {
          LODWORD(v18) = CgEntitySystem::ms_allocatedCount;
          LODWORD(v17) = v3;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 289, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v17, v18) )
            __debugbreak();
        }
        if ( !CgEntitySystem::ms_entitySystemArray[v3] )
        {
          LODWORD(v18) = v3;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 290, ASSERT_TYPE_ASSERT, "(ms_entitySystemArray[localClientNum])", "%s\n\tTrying to access unallocated entity system for localClientNum %d\n", "ms_entitySystemArray[localClientNum]", v18) )
            __debugbreak();
        }
        v15 = CgEntitySystem::ms_entitySystemArray[v3];
        if ( v12 >= 0x800 )
        {
          LODWORD(v18) = 2048;
          LODWORD(v17) = v12;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", v17, v18) )
            __debugbreak();
        }
        v16 = (__int64)&v15->m_entities[v14];
        if ( !v16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 1833, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
          __debugbreak();
        if ( *(_WORD *)(v16 + 408) == 17 )
        {
          v19.v[2] = v7;
          *(double *)v19.v = *(double *)outOrg.v;
          CG_PlayersMP_CalcCoarseCullData_ProcessEntity((LocalClientNum_t)v3, (const centity_t *const)v16, &v19);
        }
        ++v12;
        ++v14;
        --v13;
      }
      while ( v13 );
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
  __int128 v3; 
  __int128 v4; 
  unsigned int number; 
  __int64 v7; 
  DObj *ClientDObj; 
  DObj *v10; 
  unsigned int viewInfoIndex; 
  unsigned int v12; 
  bool v13; 
  float radius; 
  bool v15; 
  const dvar_t *v16; 
  float v17; 
  bool v18; 
  vec3_t outOrigin; 
  Bounds bounds; 
  __int128 v22; 
  __int128 v23; 

  number = cent->nextState.number;
  v7 = localClientNum;
  ClientDObj = Com_GetClientDObj(number, localClientNum);
  v10 = ClientDObj;
  if ( !ClientDObj || !ClientDObj->numModels )
    return 0;
  CG_GetPoseOrigin(&cent->pose, &outOrigin);
  if ( !frontEndDataOut && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 1746, ASSERT_TYPE_ASSERT, "(frontEndDataOut)", (const char *)&queryFormat, "frontEndDataOut") )
    __debugbreak();
  viewInfoIndex = frontEndDataOut->viewInfoIndex;
  v12 = cent->nextState.hudData.data & 0x3F;
  v13 = v12 != 0;
  if ( !v12 )
  {
    radius = v10->radius;
    bounds.midPoint = outOrigin;
    bounds.halfSize.v[0] = radius;
    bounds.halfSize.v[1] = radius;
    bounds.halfSize.v[2] = radius;
    v13 = R_Umbra_IsBoxVisible(&bounds, 0, viewInfoIndex, 0) == 1;
  }
  v15 = !v13;
  if ( !v13 )
  {
    v16 = DVARFLT_cg_playersmp_CoarseCullSystem_SunShadowDist;
    v23 = v3;
    v22 = v4;
    if ( !DVARFLT_cg_playersmp_CoarseCullSystem_SunShadowDist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_playersmp_CoarseCullSystem_SunShadowDist") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v16);
    if ( (float)((float)((float)((float)(outOrigin.v[1] - camPos->v[1]) * (float)(outOrigin.v[1] - camPos->v[1])) + (float)((float)(outOrigin.v[0] - camPos->v[0]) * (float)(outOrigin.v[0] - camPos->v[0]))) + (float)((float)(outOrigin.v[2] - camPos->v[2]) * (float)(outOrigin.v[2] - camPos->v[2]))) < (float)(v16->current.value * v16->current.value) )
    {
      v17 = v10->radius;
      bounds.midPoint = outOrigin;
      bounds.halfSize.v[0] = v17;
      bounds.halfSize.v[1] = v17;
      bounds.halfSize.v[2] = v17;
      v13 = R_Umbra_IsBoxVisible(&bounds, 2u, viewInfoIndex, 0) == 1;
    }
    v15 = !v13;
  }
  v18 = v15;
  if ( !v13 )
  {
    if ( number >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", number, 2048) )
      __debugbreak();
    s_coarseCullData[v7].array[(unsigned __int64)number >> 5] |= 0x80000000 >> (number & 0x1F);
  }
  return v18;
}

/*
==============
CG_PlayersMP_CalculateThermalTemperatureScale
==============
*/
float CG_PlayersMP_CalculateThermalTemperatureScale(const LocalClientNum_t localClientNum, const centity_t *cent, GfxSceneHudOutlineInfo *hudOutlineInfo)
{
  __int64 v4; 
  CgGlobalsMP *LocalClientGlobals; 
  const Weapon *CurrentWeaponForPlayer; 
  bool v7; 
  bool WeaponThermalPlayerFadeDistStartAndEnd; 
  const dvar_t *v9; 
  float v10; 
  const dvar_t *v11; 
  float value; 
  const dvar_t *v13; 
  GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32> *p_nextState; 
  float v15; 
  float v16; 
  double v17; 
  vec2_t outStartAndEnd; 
  vec3_t outOrigin; 
  vec3_t v21; 

  v4 = localClientNum;
  LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals(localClientNum);
  if ( !CgWeaponMap::ms_instance[v4] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
    __debugbreak();
  CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(CgWeaponMap::ms_instance[v4], &LocalClientGlobals->predictedPlayerState);
  v7 = BG_UsingAlternate(&LocalClientGlobals->predictedPlayerState);
  WeaponThermalPlayerFadeDistStartAndEnd = BG_GetWeaponThermalPlayerFadeDistStartAndEnd(CurrentWeaponForPlayer, v7, &outStartAndEnd);
  v9 = DCONST_DVARFLT_r_thermalPlayerFadeDistanceEnd_tweak;
  v10 = (float)WeaponThermalPlayerFadeDistStartAndEnd;
  if ( !DCONST_DVARFLT_r_thermalPlayerFadeDistanceEnd_tweak && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_thermalPlayerFadeDistanceEnd_tweak") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v9);
  if ( v9->current.value > 0.0 )
  {
    v11 = DCONST_DVARFLT_r_thermalPlayerFadeDistanceStart_tweak;
    v10 = FLOAT_1_0;
    if ( !DCONST_DVARFLT_r_thermalPlayerFadeDistanceStart_tweak && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_thermalPlayerFadeDistanceStart_tweak") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v11);
    value = v11->current.value;
    v13 = DCONST_DVARFLT_r_thermalPlayerFadeDistanceEnd_tweak;
    outStartAndEnd.v[0] = value;
    if ( !DCONST_DVARFLT_r_thermalPlayerFadeDistanceEnd_tweak && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_thermalPlayerFadeDistanceEnd_tweak") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v13);
    LODWORD(outStartAndEnd.v[1]) = v13->current.integer;
  }
  p_nextState = (GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32> *)&LocalClientGlobals->predictedPlayerEntity->nextState;
  if ( LocalClientGlobals->predictedPlayerEntity == (centity_t *)-400i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 1896, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  if ( !GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(p_nextState + 3, GameModeFlagValues::ms_mpValue, 0x19u) || v10 == 0.0 || outStartAndEnd.v[0] >= outStartAndEnd.v[1] )
    return FLOAT_1_0;
  v15 = outStartAndEnd.v[0] * outStartAndEnd.v[0];
  v16 = outStartAndEnd.v[1] * outStartAndEnd.v[1];
  CG_GetPoseOrigin(&cent->pose, &outOrigin);
  CG_Entity_GetPlayerViewOriginEntityWorkerHack(&LocalClientGlobals->predictedPlayerState, &v21);
  v17 = I_fclamp((float)((float)((float)((float)((float)(outOrigin.v[1] - v21.v[1]) * (float)(outOrigin.v[1] - v21.v[1])) + (float)((float)(outOrigin.v[0] - v21.v[0]) * (float)(outOrigin.v[0] - v21.v[0]))) + (float)((float)(outOrigin.v[2] - v21.v[2]) * (float)(outOrigin.v[2] - v21.v[2]))) - v15) / (float)(v16 - v15), 0.0, 1.0);
  return 1.0 - *(float *)&v17;
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
  float v11; 
  float v12; 
  float v13; 
  float v14; 
  float v15; 
  vec3_t outPos; 
  __int64 v17; 
  CgTrajectory v18; 

  v17 = -2i64;
  if ( !outCharacterPriority && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 771, ASSERT_TYPE_ASSERT, "(outCharacterPriority)", (const char *)&queryFormat, "outCharacterPriority") )
    __debugbreak();
  if ( evaluateTrajectory )
  {
    CgTrajectory::CgTrajectory(&v18, localClientNum, cent, &cent->nextState.lerp);
    BgTrajectory::SetFlags(&v18, 1);
    BgTrajectory::SetFlags(&v18, 2);
    BgTrajectory::EvaluatePosTrajectory(&v18, time, &outPos);
  }
  else
  {
    CG_GetPoseOrigin(&cent->pose, &outPos);
  }
  v11 = outPos.v[0] - viewOrigin->v[0];
  v12 = outPos.v[1] - viewOrigin->v[1];
  v13 = outPos.v[2] - viewOrigin->v[2];
  v14 = fsqrt((float)((float)(v12 * v12) + (float)(v11 * v11)) + (float)(v13 * v13));
  outCharacterPriority->eventLodData.distance = v14;
  if ( v14 > -0.0 )
    v15 = (float)((float)((float)(v12 * viewDir->v[1]) + (float)(v11 * viewDir->v[0])) + (float)(v13 * viewDir->v[2])) / v14;
  else
    v15 = FLOAT_1_0;
  outCharacterPriority->eventLodData.cosAngleFromLookAt = v15;
  memset(&outPos, 0, sizeof(outPos));
}

/*
==============
CG_PlayersMP_CorpseSyncMelee
==============
*/
void CG_PlayersMP_CorpseSyncMelee(LocalClientNum_t localClientNum, const playerState_s *ps)
{
  __int16 meleeChargeEnt; 
  centity_t *Entity; 
  const entityState_t *p_nextState; 
  unsigned int eType; 
  int v8; 
  cgs_t *LocalClientStaticGlobals; 
  entityType_s v10; 
  unsigned int v11; 
  const characterInfo_t *p_ci; 
  unsigned int v13; 
  __int128 v14; 
  double CardinalYawOfIncomingVector; 
  unsigned int Anim; 
  unsigned int v19; 
  int v20; 
  bool v21; 
  int LegsAnimation; 
  CgWeaponMap *Instance; 
  int v24; 
  const Weapon *CurrentWeaponForPlayer; 
  CgHandler *pmoveHandler; 
  bool v27; 
  weapAnimFiles_t v28; 
  double WeaponAnimTime; 
  const DObj *ClientDObj; 
  XAnimTree *Tree; 
  unsigned int XAnimIndex; 
  CgStatic *LocalClientStatics; 
  const BgAnimStatic *v34; 
  SuitAnimType SuitAnimIndex; 
  int v36; 
  __int64 bIsAlternate; 
  vec3_t outOrigin; 
  __int64 v39; 
  vec3_t incomingVector; 

  v39 = -2i64;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 3461, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  meleeChargeEnt = ps->meleeChargeEnt;
  if ( (meleeChargeEnt < 0 || (unsigned __int16)meleeChargeEnt > 0x7FEu) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 3462, ASSERT_TYPE_ASSERT, "(PM_MeleeValidChargeTarget( ps->meleeChargeEnt ))", (const char *)&queryFormat, "PM_MeleeValidChargeTarget( ps->meleeChargeEnt )") )
    __debugbreak();
  Entity = CG_GetEntity(localClientNum, ps->meleeChargeEnt);
  if ( !Entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 3464, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  p_nextState = &Entity->nextState;
  if ( Entity == (centity_t *)-400i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 1983, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  eType = (unsigned __int16)Entity->nextState.eType;
  if ( (unsigned __int16)eType <= 0x15u )
  {
    v8 = 2359300;
    if ( _bittest(&v8, eType) )
    {
      LocalClientStaticGlobals = CG_GetLocalClientStaticGlobals(localClientNum);
      v10 = Entity->nextState.eType;
      if ( v10 == ET_PLAYER_CORPSE )
      {
        v11 = p_nextState->number - ComCharacterLimits::GetClientCorpseEntityIndexOffset();
        if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 130, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
          __debugbreak();
        if ( v11 >= ComCharacterLimits::ms_gameData.m_clientCorpseCount )
        {
          if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 130, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
            __debugbreak();
          LODWORD(bIsAlternate) = v11;
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
        p_ci = &LocalClientStaticGlobals->corpseinfo[v11].ci;
LABEL_56:
        if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x16u) && ps->weapState[0].weaponState == 23 )
        {
          CG_GetPoseOrigin(&Entity->pose, &outOrigin);
          incomingVector.v[0] = outOrigin.v[0] - ps->origin.v[0];
          v14 = LODWORD(outOrigin.v[1]);
          incomingVector.v[1] = outOrigin.v[1] - ps->origin.v[1];
          incomingVector.v[2] = outOrigin.v[2] - ps->origin.v[2];
          *(float *)&v14 = (float)((float)(incomingVector.v[1] * incomingVector.v[1]) + (float)(incomingVector.v[0] * incomingVector.v[0])) + (float)(incomingVector.v[2] * incomingVector.v[2]);
          if ( *(float *)&v14 <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 639, ASSERT_TYPE_SANITY, "( val > 0 )", (const char *)&queryFormat, "val > 0") )
            __debugbreak();
          _XMM1 = v14;
          __asm { vrsqrtss xmm3, xmm1, xmm6 }
          incomingVector.v[0] = *(float *)&_XMM3 * incomingVector.v[0];
          incomingVector.v[1] = *(float *)&_XMM3 * incomingVector.v[1];
          incomingVector.v[2] = *(float *)&_XMM3 * incomingVector.v[2];
          CardinalYawOfIncomingVector = BG_GetCardinalYawOfIncomingVector(&Entity->pose.angles, &incomingVector, COSINE_MELEE_ORIENT_ANGLE_832);
          Entity->pose.angles.v[1] = *(float *)&CardinalYawOfIncomingVector;
          if ( !p_ci->usingAnimState )
          {
            if ( PlayerASM_IsEnabled() )
            {
              Anim = BG_PlayerASM_GetAnim(p_ci, MOVEMENT);
              v19 = BG_PlayerASM_GetAnim(&Entity->nextState, MOVEMENT);
              v20 = 0;
              v21 = Anim == v19;
            }
            else
            {
              LegsAnimation = BG_AnimationMP_GetLegsAnimation(&Entity->nextState);
              v20 = 0;
              v21 = p_ci->playerAnim.legsAnim == LegsAnimation;
            }
            LOBYTE(v20) = !v21;
            if ( v20 )
            {
              Instance = CgWeaponMap::GetInstance(localClientNum);
              v24 = ps->weapState[0].weapAnim & 0xFFFFEFFF;
              CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(Instance, ps);
              pmoveHandler = CgHandler::getHandler(localClientNum);
              v27 = BG_UsingAlternate(ps);
              v28 = BG_MapWeaponAnimStateToAnimIndex(Instance, ps, v24, 0, CurrentWeaponForPlayer, v27, WEAPON_HAND_DEFAULT, pmoveHandler);
              WeaponAnimTime = CG_GetWeaponAnimTime(localClientNum, WEAPON_HAND_DEFAULT, v28);
              if ( *(float *)&WeaponAnimTime >= 0.0 )
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
                      v34 = LocalClientStatics->GetAnimStatics(LocalClientStatics);
                      if ( !v34 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 3551, ASSERT_TYPE_ASSERT, "(bgameAnim)", (const char *)&queryFormat, "bgameAnim") )
                        __debugbreak();
                      SuitAnimIndex = BG_AnimationMP_GetSuitAnimIndex(p_nextState);
                      v36 = BG_AnimationMP_GetLegsAnimation(p_nextState);
                      XAnimIndex = BG_AnimationMP_GetXAnimIndex(v34, SuitAnimIndex, v36 & 0xFFFFEFFF);
                    }
                    XAnimSetTime(Tree, 0, XANIM_SUBTREE_DEFAULT, XAnimIndex, *(float *)&WeaponAnimTime);
                  }
                }
              }
            }
          }
          memset(&outOrigin, 0, sizeof(outOrigin));
        }
        return;
      }
      if ( v10 == ET_AGENT_CORPSE )
      {
        v13 = p_nextState->number - ComCharacterLimits::GetAgentCorpseEntityIndexOffset();
        if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 137, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
          __debugbreak();
        if ( v13 >= ComCharacterLimits::ms_gameData.m_agentCorpseCount )
        {
          if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 137, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
            __debugbreak();
          LODWORD(bIsAlternate) = v13;
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
        p_ci = &LocalClientStaticGlobals->agentCorpseInfo[v13].ci;
        goto LABEL_56;
      }
      LODWORD(bIsAlternate) = v10;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 3491, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "CG_CorpseSyncMelee: Unknown corpse type: %d", bIsAlternate) )
        __debugbreak();
    }
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
  float emissiveBlendTargetStrength; 
  cg_t *LocalClientGlobals; 
  double v5; 

  if ( (float)ci->emissiveBlendDuration == 0.0 )
  {
    emissiveBlendTargetStrength = ci->emissiveBlendTargetStrength;
  }
  else
  {
    LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
    v5 = I_fclamp((float)(LocalClientGlobals->time - ci->emissiveBlendStart) / (float)ci->emissiveBlendDuration, 0.0, 1.0);
    emissiveBlendTargetStrength = (float)((float)(1.0 - *(float *)&v5) * ci->emissiveBlendStartStrength) + (float)(*(float *)&v5 * ci->emissiveBlendTargetStrength);
  }
  if ( emissiveBlendTargetStrength < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 1502, ASSERT_TYPE_ASSERT, "(intensity >= 0.f)", (const char *)&queryFormat, "intensity >= 0.f") )
    __debugbreak();
  return emissiveBlendTargetStrength;
}

/*
==============
CG_PlayersMP_PreCachePlayerAnimCalcRequests
==============
*/
void CG_PlayersMP_PreCachePlayerAnimCalcRequests(const LocalClientNum_t localClientNum, const centity_t *cent, const characterInfo_t *ci, const CgCharacterAnimUpdateInfo *animUpdateInfo, DObj *obj)
{
  int v7; 
  unsigned int v9; 
  const DObj *v12; 
  CgWeaponMap *Instance; 
  const Weapon *WeaponForEntity; 
  unsigned __int8 NextBoneIndex; 
  DObjPartBits *i; 
  int outBoneIndex[2]; 
  scr_string_t name[2]; 
  characterInfo_t *cia; 
  TagPair result; 
  DObjPartBits partBits; 
  CharacterModelType modelTypesToSearch[4]; 

  outBoneIndex[1] = localClientNum;
  cia = (characterInfo_t *)ci;
  *(_QWORD *)name = obj;
  if ( !obj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 2610, ASSERT_TYPE_ASSERT, "(obj)", (const char *)&queryFormat, "obj") )
    __debugbreak();
  if ( !animUpdateInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 2611, ASSERT_TYPE_ASSERT, "(animUpdateInfo)", (const char *)&queryFormat, "animUpdateInfo") )
    __debugbreak();
  v7 = 0;
  _RSI = &partBits;
  v9 = 0;
  _R12 = (char *)animUpdateInfo - (char *)&partBits;
  do
  {
    __asm { vlddqu  xmm6, xmmword ptr [r12+rsi+14h] }
    *(_OWORD *)_RSI->array = _XMM6;
    _RSI = (DObjPartBits *)((char *)_RSI + 16);
    ++v9;
  }
  while ( v9 < 2 );
  v12 = *(const DObj **)name;
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
    TagPair::GetTagNameAndBoneIndexForCharacter(&result, v12, cia, modelTypesToSearch, 3, name, (unsigned __int8 *)outBoneIndex);
    if ( LOBYTE(outBoneIndex[0]) != 0xFE )
    {
      XAnimSetPartBit(&partBits, LOBYTE(outBoneIndex[0]));
      if ( (cent->flags & 0x10) != 0 )
      {
        NextBoneIndex = DObjGetNextBoneIndex(v12, name[0], outBoneIndex[0]);
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
    if ( DObjGetBoneAndModelIndexClient(v12, scr_const.tag_brass, (unsigned __int16 *)outBoneIndex, &outBoneIndex[1]) )
      XAnimSetPartBit(&partBits, LOWORD(outBoneIndex[0]));
    if ( DObjGetBoneAndModelIndexClient(v12, scr_const.tag_brass_2, (unsigned __int16 *)outBoneIndex, &outBoneIndex[1]) )
      XAnimSetPartBit(&partBits, LOWORD(outBoneIndex[0]));
  }
  if ( (animUpdateInfo->preCacheTagFlags & 4) != 0 )
  {
    strcpy((char *)outBoneIndex, "þ");
    if ( DObjGetBoneAndModelIndexClient(v12, scr_const.tag_weapon_left, (unsigned __int16 *)outBoneIndex, &outBoneIndex[1]) )
      XAnimSetPartBit(&partBits, LOWORD(outBoneIndex[0]));
  }
  for ( i = &partBits; !i->array[0]; i = (DObjPartBits *)((char *)i + 4) )
  {
    if ( (unsigned int)++v7 >= 8 )
      return;
  }
  DObjLock(v12);
  CG_Pose_CalcDObjPose(&cent->pose, v12, &partBits);
  if ( !DObjSkelAreBonesUpToDate(v12, &partBits) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 2671, ASSERT_TYPE_ASSERT, "(DObjSkelAreBonesUpToDate( obj, &preCacheParts ))", (const char *)&queryFormat, "DObjSkelAreBonesUpToDate( obj, &preCacheParts )") )
    __debugbreak();
  DObjUnlock(v12);
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
  cg_t *v10; 
  characterInfo_t *CharacterInfo; 
  double v12; 
  double v13; 
  AnimationController Controller; 

  Sys_ProfBeginNamedEvent(0xFF00008B, "CG_PlayersMP_PreControllers");
  LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals(localClientNum);
  LocalClientStatics = CgStatic::GetLocalClientStatics(localClientNum);
  eType_low = LOBYTE(cent->nextState.eType);
  cent->pose.eType = eType_low;
  if ( eType_low != cent->nextState.eType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 2327, ASSERT_TYPE_ASSERT, "(cent->pose.eType == cent->nextState.eType)", (const char *)&queryFormat, "cent->pose.eType == cent->nextState.eType", -2i64) )
    __debugbreak();
  clientNum = cent->nextState.clientNum;
  v10 = CG_GetLocalClientGlobals((const LocalClientNum_t)LocalClientStatics->m_localClientNum);
  if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static_inline.h", 25, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  CharacterInfo = CG_GetCharacterInfo(v10, clientNum);
  if ( !CharacterInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 2330, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
    __debugbreak();
  if ( CharacterInfo->infoValid )
  {
    v12 = BG_AnimationMP_UnpackPitch(cent->nextState.lerp.u.player.torsoPitchPacked);
    CharacterInfo->fTorsoPitch = *(float *)&v12;
    v13 = BG_AnimationMP_UnpackPitch(cent->nextState.lerp.u.player.waistPitchPacked);
    CharacterInfo->fWaistPitch = *(float *)&v13;
    if ( CharacterInfo->usingAnimState )
    {
      if ( BG_AnimationState_LerpControllers(&cent->nextState, CharacterInfo, LocalClientGlobals->frametime) )
      {
        Controller = BG_AnimationState_GetController(&cent->nextState);
        BG_AnimationState_SetPlayerInfo(Controller, obj, &CharacterInfo->control, (CEntPlayerInfo *)&cent->pose.160);
      }
    }
    else
    {
      CG_Players_CopyAnimStateFromEntity(CharacterInfo, &cent->nextState);
      BG_Player_DoControllersSetup(&cent->nextState, CharacterInfo, LocalClientGlobals->frametime);
      BG_Player_SetPlayerInfo(obj, &CharacterInfo->control, (CEntPlayerInfo *)&cent->pose.160);
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
  __int64 v19; 
  __int64 v20; 
  unsigned int scriptableIndex[3]; 
  vec3_t v23; 
  vec3_t v24; 
  __int64 v25; 
  tmat43_t<vec3_t> v26; 
  vec3_t centa; 
  vec3_t cgameGlob; 
  __m256i outTagMat; 
  __int128 outTagMat_32; 
  tmat33_t<vec3_t> axis; 
  vec3_t v32; 

  v25 = -2i64;
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
      LODWORD(v20) = v9;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 2207, ASSERT_TYPE_ASSERT, "(!ci->attachModelIndexChanged[attachIndex])", "%s\n\tCG_PlayersMP_PreProcess: Attachment model[%d] changed without properly updating the character info model name.", "!ci->attachModelIndexChanged[attachIndex]", v20) )
        __debugbreak();
    }
    if ( *attachTagIndexChanged )
    {
      LODWORD(v20) = v9;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 2208, ASSERT_TYPE_ASSERT, "(!ci->attachTagIndexChanged[attachIndex])", "%s\n\tCG_PlayersMP_PreProcess: Attachment tag[%d] changed without properly updating the character info model name.", "!ci->attachTagIndexChanged[attachIndex]", v20) )
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
      CG_DObjGetWorldTagMatrix((const cpose_t *)v11, v18, tag_origin, &axis, &v32);
      AxisToAngles(&axis, &cgameGlob);
      *(__m256i *)v26.m[0].v = outTagMat;
      *(_OWORD *)&v26.row2.z = outTagMat_32;
      v23 = cgameGlob;
      v24 = centa;
      BG_CarryObject_SetCharacterIKInfo(&v24, &v23, &v26, CharacterInfo);
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
        LODWORD(v20) = *(__int16 *)(v11 + 400);
        LODWORD(v19) = *(__int16 *)(v11 + 408);
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 2304, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Entity has a reserved scriptable but cannot resolve the index for that scriptable. Entity Type:%d, Entity Number:%d", v19, v20) )
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
  CgGlobalsMP *LocalClientGlobals; 
  CgStatic *LocalClientStatics; 
  int clientNum; 
  cg_t *v9; 
  characterInfo_t *CharacterInfo; 
  DObj *ClientDObj; 
  float frameInterpolation; 
  double v13; 
  float v14; 
  double v15; 
  float v16; 
  double v17; 
  float v18; 
  double v19; 
  double v20; 
  double v21; 
  int skipEntity; 
  double v23; 
  double v24; 
  CgWeaponMap *Instance; 
  BOOL v26; 
  const dvar_t *v27; 
  bool v28; 
  CgWeaponMap *v29; 
  CgHandler *Handler; 
  vec3_t trBase; 
  vec3_t end; 
  vec3_t outOrigin; 
  trace_t results; 

  Sys_ProfBeginNamedEvent(0xFF808080, "CG_PlayersMP_ProcessAnimation");
  LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals(localClientNum);
  LocalClientStatics = CgStatic::GetLocalClientStatics(localClientNum);
  clientNum = cent->nextState.clientNum;
  v9 = CG_GetLocalClientGlobals((const LocalClientNum_t)LocalClientStatics->m_localClientNum);
  if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static_inline.h", 25, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  CharacterInfo = CG_GetCharacterInfo(v9, clientNum);
  if ( (CharacterInfo->usingAnimState != 0) != (cent->nextState.animInfo.animData & 1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 2050, ASSERT_TYPE_ASSERT, "(!!ci->usingAnimState == !!es->animInfo.selectAnim.usingAnimState)", (const char *)&queryFormat, "!!ci->usingAnimState == !!es->animInfo.selectAnim.usingAnimState") )
    __debugbreak();
  ClientDObj = Com_GetClientDObj(cent->nextState.number, localClientNum);
  if ( ClientDObj )
  {
    CharacterInfo->zeroGravity = BG_IsPlayerZeroGFloating(&LocalClientGlobals->predictedPlayerState);
    if ( CharacterInfo->usingAnimState )
    {
      if ( (cent->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 2065, ASSERT_TYPE_ASSERT, "(CENextValid( cent ))", (const char *)&queryFormat, "CENextValid( cent )") )
        __debugbreak();
      frameInterpolation = LocalClientGlobals->frameInterpolation;
      v13 = BG_AnimationMP_UnpackPitch(cent->nextState.lerp.u.player.torsoPitchPacked);
      v14 = *(float *)&v13;
      v15 = BG_AnimationMP_UnpackPitch(cent->prevState.u.player.torsoPitchPacked);
      CharacterInfo->fTorsoPitch = (float)((float)(1.0 - frameInterpolation) * *(float *)&v15) + (float)(frameInterpolation * v14);
      v16 = LocalClientGlobals->frameInterpolation;
      v17 = BG_AnimationMP_UnpackPitch(cent->nextState.lerp.u.player.waistPitchPacked);
      v18 = *(float *)&v17;
      v19 = BG_AnimationMP_UnpackPitch(cent->prevState.u.player.waistPitchPacked);
      CharacterInfo->fWaistPitch = (float)((float)(1.0 - v16) * *(float *)&v19) + (float)(v16 * v18);
      v20 = BG_AnimationMP_QuantizePitch(CharacterInfo->fTorsoPitch);
      CharacterInfo->fTorsoPitch = *(float *)&v20;
      v21 = BG_AnimationMP_QuantizePitch(CharacterInfo->fWaistPitch);
      CharacterInfo->fWaistPitch = *(float *)&v21;
      skipEntity = cent->nextState.number;
      Trajectory_GetTrBase(&cent->nextState.lerp.pos, &trBase);
      trBase.v[2] = trBase.v[2] + 12.0;
      end.v[0] = trBase.v[0];
      end.v[1] = trBase.v[1];
      end.v[2] = trBase.v[2] - 24.0;
      CG_EntityWorkers_AcquireReadLock_Physics(BASE);
      PhysicsQuery_LegacyTrace((Physics_WorldId)(3 * localClientNum + 2), &results, &trBase, &end, &bounds_origin, skipEntity, 0, 33685521, 1, NULL, All);
      CG_EntityWorkers_ReleaseReadLock_Physics(BASE);
      if ( results.fraction >= 1.0 )
        cent->surfaceType = 0;
      else
        cent->surfaceType = (results.surfaceFlags >> 19) & 0x3F;
      memset(&trBase, 0, sizeof(trBase));
      BG_AIAnim_UpdateExecutionParameter(ClientDObj, CharacterInfo);
      CG_AIAnim_UpdateGroundTurretParameter(localClientNum, ClientDObj, CharacterInfo);
      BG_AnimationState_Update(&cent->nextState, CharacterInfo, 0);
      goto LABEL_37;
    }
    v23 = BG_AnimationMP_UnpackPitch(cent->nextState.lerp.u.player.torsoPitchPacked);
    CharacterInfo->fTorsoPitch = *(float *)&v23;
    v24 = BG_AnimationMP_UnpackPitch(cent->nextState.lerp.u.player.waistPitchPacked);
    CharacterInfo->fWaistPitch = *(float *)&v24;
    v26 = 0;
    if ( isPredictedPlayer && !LocalClientGlobals->renderingThirdPerson )
    {
      Instance = CgWeaponMap::GetInstance(localClientNum);
      if ( !BG_IsThirdPersonMode(Instance, &LocalClientGlobals->predictedPlayerState) )
        v26 = 1;
    }
    CharacterInfo->isFirstPerson = v26;
    CG_Players_CopyAnimStateFromEntity(CharacterInfo, &cent->nextState);
    if ( isPredictedPlayer || bitarray_base<bitarray<224>>::testBit(&LocalClientGlobals->m_playerUpdateAnimBits, cent->nextState.number) )
    {
      if ( PlayerASM_IsEnabled() )
      {
        CharacterInfo->playerASMLocomotion.instantBlend = 0;
        if ( Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_cg_playerAnimUpdateInstantBlend, "cg_playerAnimUpdateInstantBlend") )
          CharacterInfo->playerASMLocomotion.instantBlend = bitarray_base<bitarray<224>>::testBit(&LocalClientGlobals->m_playerUpdateLRUAnimBits, cent->nextState.number);
        if ( !CG_PredictPlayerASMState(localClientNum, cent) )
          CharacterInfo->legsPredictingForThisAnim = 0;
      }
      else
      {
        CG_PredictCharacterState(localClientNum, cent);
      }
      CG_GetPoseOrigin(&cent->pose, &outOrigin);
      CGMovingPlatformClient::GetMoverInfoFromClientEntity(localClientNum, cent, &trBase, &end);
      v29 = CgWeaponMap::GetInstance(localClientNum);
      Handler = CgHandler::getHandler(localClientNum);
      BG_PlayerAnimation(Handler, v29, &cent->nextState, CharacterInfo, &outOrigin, &trBase, &end);
    }
    else
    {
      v27 = DVARBOOL_cg_playerAnimReuseSkelPose;
      if ( !DVARBOOL_cg_playerAnimReuseSkelPose && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_playerAnimReuseSkelPose") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v27);
      if ( v27->current.enabled )
      {
        v28 = 1;
LABEL_36:
        cent->pose.reusePreviousSkelPose = v28;
LABEL_37:
        if ( CG_Cloth_Entity_HasClothBinding(localClientNum, cent->nextState.number) )
          CG_Cloth_Entity_ActivateClothNode(localClientNum, ClientDObj);
        goto LABEL_39;
      }
    }
    v28 = 0;
    goto LABEL_36;
  }
LABEL_39:
  Sys_ProfEndNamedEvent();
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
  __int64 v3; 
  entityState_t *p_nextState; 
  unsigned int v5; 
  cgs_t *LocalClientStaticGlobals; 
  __int64 v7; 
  __int64 p_ci; 
  const dvar_t *v9; 
  const dvar_t *v10; 
  float value; 
  DObj *ClientDObj; 
  CgWeaponMap *Instance; 
  CgGlobalsMP *LocalClientGlobals; 
  const DObj *v15; 
  DObj *v16; 
  bool v17; 
  unsigned int v18; 
  double v19; 
  double v20; 
  const centity_t *v21; 
  CgWeaponMap *v22; 
  CgHandler *Handler; 
  float v24; 
  CgStatic *LocalClientStatics; 
  const characterInfo_t *CharacterInfo; 
  double v27; 
  double v28; 
  unsigned int v29; 
  __int64 v30; 
  unsigned int number; 
  __int64 attachIgnoreCollision; 
  __int64 attachIgnoreCollisiona; 
  __int64 attachIgnoreCollisionb; 
  vec3_t *movingPlatformAngles; 
  vec3_t *movingPlatformAnglesa; 
  bool isOverHalfWayFaded; 
  bool isFadeActive; 
  bool isFadeComplete; 
  unsigned int scriptableIndex; 
  vec3_t v41; 
  unsigned int v42; 
  unsigned int v43; 
  cpose_t *pose; 
  CgGlobalsMP *v45; 
  __int64 v46; 
  GfxSceneHudOutlineInfo v47; 
  shaderOverride_t v48; 
  vec3_t outOrigin; 

  v46 = -2i64;
  pose = &cent->pose;
  v3 = localClientNum;
  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 3597, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( s_weaponVisActive[v3] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 3598, ASSERT_TYPE_ASSERT, "(!CG_PlayersMP_IsWeaponVisibilityTestActive( localClientNum ))", (const char *)&queryFormat, "!CG_PlayersMP_IsWeaponVisibilityTestActive( localClientNum )") )
    __debugbreak();
  Sys_ProfBeginNamedEvent(0xFF550099, "CG_PlayersMP_ProcessCorpse");
  p_nextState = &cent->nextState;
  if ( !GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&cent->nextState.lerp.eFlags, ACTIVE, 0x11u) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 3603, ASSERT_TYPE_ASSERT, "(es->lerp.eFlags.TestFlag( EntityStateFlagsCommon::DEAD ))", (const char *)&queryFormat, "es->lerp.eFlags.TestFlag( EntityStateFlagsCommon::DEAD )") )
    __debugbreak();
  if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 152, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
    __debugbreak();
  v5 = p_nextState->number - ComCharacterLimits::ms_gameData.m_characterCount;
  v42 = v5;
  if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 130, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
    __debugbreak();
  if ( v5 >= ComCharacterLimits::ms_gameData.m_clientCorpseCount )
  {
    if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 130, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
      __debugbreak();
    LODWORD(attachIgnoreCollision) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 3606, ASSERT_TYPE_ASSERT, "(unsigned)( corpseIndex ) < (unsigned)( ComCharacterLimits::GetClientCorpseMaxCount() )", "corpseIndex doesn't index ComCharacterLimits::GetClientCorpseMaxCount()\n\t%i not in [0, %i)", attachIgnoreCollision, ComCharacterLimits::ms_gameData.m_clientCorpseCount) )
      __debugbreak();
  }
  LocalClientStaticGlobals = CG_GetLocalClientStaticGlobals((const LocalClientNum_t)v3);
  if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 130, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
    __debugbreak();
  if ( (unsigned __int64)(int)ComCharacterLimits::ms_gameData.m_clientCorpseCount > 8 )
  {
    if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 130, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 3610, ASSERT_TYPE_ASSERT, "( ComCharacterLimits::GetClientCorpseMaxCount() ) <= ( ( sizeof( *array_counter( cgs->corpseinfo ) ) + 0 ) )", "%s <= %s\n\t%i, %i", "ComCharacterLimits::GetClientCorpseMaxCount()", "ARRAY_COUNT( cgs->corpseinfo )", ComCharacterLimits::ms_gameData.m_clientCorpseCount, 8) )
      __debugbreak();
  }
  v7 = (int)v5;
  p_ci = (__int64)&LocalClientStaticGlobals->corpseinfo[v7].ci;
  v9 = DVARBOOL_cg_customizationStreaming_highPriorityCorpses;
  if ( !DVARBOOL_cg_customizationStreaming_highPriorityCorpses && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_customizationStreaming_highPriorityCorpses") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v9);
  if ( v9->current.enabled && LocalClientStaticGlobals->corpseinfo[v7].sortIndex < 2u )
  {
    v10 = DCONST_DVARFLT_cg_highPriorityCorpseDistanceSqMultiplier;
    if ( !DCONST_DVARFLT_cg_highPriorityCorpseDistanceSqMultiplier && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_highPriorityCorpseDistanceSqMultiplier") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v10);
    value = v10->current.value;
  }
  else
  {
    value = FLOAT_1_0;
  }
  CG_DistanceCacheMP_AddPlayerCorpse((const LocalClientNum_t)v3, p_nextState->number, value);
  if ( (cent->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 3565, ASSERT_TYPE_ASSERT, "(CENextValid( cent ))", (const char *)&queryFormat, "CENextValid( cent )") )
    __debugbreak();
  if ( (cgs_t *)((char *)LocalClientStaticGlobals + v7 * 26904) == (cgs_t *)-80i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 3566, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
    __debugbreak();
  if ( !(unsigned int)CG_CheckValidPlayerCharacterInfoModels((LocalClientNum_t)v3, &LocalClientStaticGlobals->corpseinfo[v7].ci) )
  {
    Com_PrintWarning(14, "WARNING: Disabling corpse for entity %u, corpse has invalid models.\n", (unsigned int)p_nextState->number);
    FX_Dismemberment_Clear((LocalClientNum_t)v3, *(_DWORD *)p_ci);
    LocalClientStaticGlobals->corpseinfo[v7].ci.infoValid = 0;
  }
  if ( CgGlobalsMP::GetLocalClientGlobals((const LocalClientNum_t)v3)->m_usePlayerAnimation )
  {
    ClientDObj = Com_GetClientDObj(p_nextState->number, (LocalClientNum_t)v3);
    Instance = CgWeaponMap::GetInstance((const LocalClientNum_t)v3);
    BG_AnimationMP_UpdatePlayerDObj((LocalClientNum_t)v3, ClientDObj, Instance, p_nextState, &LocalClientStaticGlobals->corpseinfo[v7].ci, 0);
  }
  LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals((const LocalClientNum_t)v3);
  v45 = LocalClientGlobals;
  v15 = Com_GetClientDObj(p_nextState->number, (LocalClientNum_t)v3);
  v16 = (DObj *)v15;
  if ( v15 )
  {
    if ( (LocalClientStaticGlobals->corpseinfo[v7].flag & 0x10) != 0 )
    {
      XAnimBonePhysicsRestoreState(v15, &LocalClientStaticGlobals->corpseinfo[v7].transferredDynamicBonesState);
      LocalClientStaticGlobals->corpseinfo[v7].flag &= ~0x10u;
    }
    XAnimBonePhysicsSetSettlingEnabled(v16, 0);
    if ( !CG_Entity_IsNoDraw((const LocalClientNum_t)v3, p_nextState, NULL) )
    {
      CG_CorpseFade_ApplyDissolveMaterial((const LocalClientNum_t)v3, v16, p_nextState->number, &isFadeActive, &isFadeComplete, &isOverHalfWayFaded);
      v16->flags |= 0x40u;
      v17 = FX_Dismemberment_ProcessEntity((LocalClientNum_t)v3, v16, isOverHalfWayFaded);
      v18 = 0;
      if ( v17 )
        v18 = 128;
      v43 = v18;
      if ( !(unsigned int)CG_CheckValidPlayerCharacterInfoModels((LocalClientNum_t)v3, &LocalClientStaticGlobals->corpseinfo[v7].ci) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 3675, ASSERT_TYPE_ASSERT, "(CG_CheckValidPlayerCharacterInfoModels( localClientNum, ci ))", (const char *)&queryFormat, "CG_CheckValidPlayerCharacterInfoModels( localClientNum, ci )") )
        __debugbreak();
      *(_DWORD *)p_ci = p_nextState->clientNum;
      CG_Players_CopyAnimStateFromEntity((characterInfo_t *)p_ci, p_nextState);
      v19 = BG_AnimationMP_UnpackPitch(p_nextState->lerp.u.player.torsoPitchPacked);
      LocalClientStaticGlobals->corpseinfo[v7].ci.fTorsoPitch = *(float *)&v19;
      v20 = BG_AnimationMP_UnpackPitch(p_nextState->lerp.u.player.waistPitchPacked);
      LocalClientStaticGlobals->corpseinfo[v7].ci.fWaistPitch = *(float *)&v20;
      CG_Players_SetUseShadowAnims((characterInfo_t *const)p_ci, 0);
      LocalClientStaticGlobals->corpseinfo[v7].ci.zeroGravity = BG_IsPlayerZeroGFloating(&LocalClientGlobals->predictedPlayerState);
      v21 = (const centity_t *)pose;
      CG_GetPoseOrigin(pose, &outOrigin);
      v22 = CgWeaponMap::GetInstance((const LocalClientNum_t)v3);
      Handler = CgHandler::getHandler((LocalClientNum_t)v3);
      BG_PlayerAnimation(Handler, v22, p_nextState, (characterInfo_t *)p_ci, &outOrigin, &vec3_origin, &vec3_origin);
      if ( CG_Cloth_Entity_HasClothBinding((const LocalClientNum_t)v3, p_nextState->number) )
        CG_Cloth_Entity_ActivateClothNode((const LocalClientNum_t)v3, v16);
      CG_GetPoseOrigin(&v21->pose, &v41);
      if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&p_nextState->lerp.eFlags, ACTIVE, 4u) )
      {
        v24 = v41.v[2] + 12.0;
      }
      else if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&p_nextState->lerp.eFlags, ACTIVE, 3u) )
      {
        v24 = v41.v[2] + 20.0;
      }
      else
      {
        v24 = v41.v[2] + 32.0;
      }
      v41.v[2] = v24;
      if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagStrict(&p_nextState->lerp.eFlags, (EntityStateFlagsMP)27) )
      {
        LocalClientStatics = CgStatic::GetLocalClientStatics((const LocalClientNum_t)v3);
        CharacterInfo = CgStatic::GetCharacterInfo(LocalClientStatics, *(_DWORD *)p_ci);
        if ( !CharacterInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 3718, ASSERT_TYPE_ASSERT, "(ciOld)", (const char *)&queryFormat, "ciOld") )
          __debugbreak();
        *(_DWORD *)(p_ci + 5232) = 3000;
        *(_DWORD *)(p_ci + 5228) = CG_GetLocalClientGlobals((const LocalClientNum_t)v3)->time;
        v27 = CG_PlayersMP_LerpEmission((LocalClientNum_t)v3, CharacterInfo);
        *(float *)(p_ci + 5236) = *(float *)&v27;
        *(_DWORD *)(p_ci + 5240) = 0;
      }
      v28 = CG_PlayersMP_LerpEmission((LocalClientNum_t)v3, (const characterInfo_t *)p_ci);
      v29 = float_to_integral_cast<unsigned char,float>(*(float *)&v28 * 255.0) << 24;
      if ( ScriptableCl_GetIndexForEntity((const LocalClientNum_t)v3, v21, &scriptableIndex) )
      {
        ScriptableCl_UpdatePosition((const LocalClientNum_t)v3, scriptableIndex, v21);
        ScriptableCl_UpdateSharedInstance((const LocalClientNum_t)v3, scriptableIndex, p_nextState->number);
      }
      v30 = (int)v42;
      if ( v42 >= 8 )
      {
        LODWORD(movingPlatformAngles) = 8;
        LODWORD(attachIgnoreCollisiona) = v42;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 3737, ASSERT_TYPE_ASSERT, "(unsigned)( corpseIndex ) < (unsigned)( ( sizeof( *array_counter( cgameGlob->m_playerCorpseUpdateAnimInfoValid ) ) + 0 ) )", "corpseIndex doesn't index cgameGlob->m_playerCorpseUpdateAnimInfoValid\n\t%i not in [0, %i)", attachIgnoreCollisiona, movingPlatformAngles) )
          __debugbreak();
        LODWORD(movingPlatformAnglesa) = 8;
        LODWORD(attachIgnoreCollisionb) = v30;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 3738, ASSERT_TYPE_ASSERT, "(unsigned)( corpseIndex ) < (unsigned)( ( sizeof( *array_counter( cgameGlob->m_playerCorpseUpdateAnimInfo ) ) + 0 ) )", "corpseIndex doesn't index cgameGlob->m_playerCorpseUpdateAnimInfo\n\t%i not in [0, %i)", attachIgnoreCollisionb, movingPlatformAnglesa) )
          __debugbreak();
      }
      if ( v45->m_playerCorpseUpdateAnimInfoValid[v30] )
        CG_PlayersMP_PreCachePlayerAnimCalcRequests((const LocalClientNum_t)v3, v21, (const characterInfo_t *)p_ci, &v45->m_playerCorpseUpdateAnimInfo[v30], v16);
      if ( !isFadeActive )
      {
        DObjFreeMaterialOverrides(v16);
        DObjFreeMaterialData(v16);
      }
      if ( !isFadeComplete )
      {
        number = p_nextState->number;
        memset(&v47, 0, sizeof(v47));
        memset(&v48, 0, sizeof(v48));
        CG_Entity_AddDObjToScene((const LocalClientNum_t)v3, v16, &v21->pose, number, v43, &v48, &v47, &v41, 0.0, v29);
      }
    }
  }
  else
  {
    LocalClientStaticGlobals->corpseinfo[v7].flag &= ~0x10u;
  }
  Sys_ProfEndNamedEvent();
  memset(&v41, 0, sizeof(v41));
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
void CG_PlayersMP_ProcessPlayer(LocalClientNum_t localClientNum, centity_t *cent)
{
  __int64 v3; 
  entityState_t *p_nextState; 
  CgGlobalsMP *LocalClientGlobals; 
  entityType_s eType; 
  bool IsPlayerEntityNumber; 
  unsigned int v9; 
  CgStatic *LocalClientStatics; 
  characterInfo_t *CharacterInfo; 
  __int64 v12; 
  unsigned int v13; 
  char *v14; 
  ParticleManager *ParticleManager; 
  CgWeaponMap *Instance; 
  const BgAnimStatic *v17; 
  float v18; 
  double Radius; 
  unsigned int v20; 
  double v21; 
  characterInfo_t *v22; 
  team_t team; 
  team_t v24; 
  int v25; 
  DObj *v26; 
  int m_isMLGSpectator; 
  HudData v28; 
  int v29; 
  const HudOutlineDef *HudOutlineDefFromPlayerState; 
  CgHandler *Handler; 
  bool v32; 
  int v33; 
  double v34; 
  CgMLGSpectator *MLGSpectator; 
  double Float_Internal_DebugName; 
  double v37; 
  CgWeaponMap *v38; 
  bool v39; 
  bool v40; 
  bool v41; 
  bool v42; 
  bool v43; 
  bool drawShadow; 
  const CgEventLodData *p_eventLodData; 
  const CgCharacterAnimUpdateInfo *CharacterAnimUpdateInfoIfSorted; 
  const dvar_t *v47; 
  unsigned int unsignedInt; 
  int v49; 
  const char *v53; 
  const dvar_t *v54; 
  bool v55; 
  bool useAlternateColor; 
  unsigned int number; 
  bool v58; 
  bool v59; 
  cg_t *v60; 
  float v61; 
  float v62; 
  double v63; 
  float v64; 
  double v65; 
  float v66; 
  unsigned int v67; 
  const char *v68; 
  int Int_Internal_DebugName; 
  double v70; 
  double v71; 
  centity_t *predictedPlayerEntity; 
  float v73; 
  __int64 emissiveMaterialData; 
  __int64 emissiveMaterialDataa; 
  __int64 drawLegs; 
  __int64 drawLegsa; 
  char v78; 
  bool v79; 
  char v80; 
  bool IsHidingViewmodel; 
  bool v82; 
  bool v83; 
  bool v84; 
  unsigned int scriptableIndex; 
  int v86; 
  int clientNum; 
  unsigned int renderFlags[2]; 
  DObj *obj; 
  GfxSceneHudOutlineInfo obj_8; 
  vec3_t outOrigin; 
  vec3_t lightingOrigin; 
  float characterEVOffset; 
  CgTrajectory v94; 
  __int64 v95; 
  vec3_t xyz; 
  vec3_t outlinedEntityOrigin; 
  vec3_t vel; 
  vec4_t playerViewOrigin; 
  __m256i v100; 
  LocalClientNum_t v101; 

  v95 = -2i64;
  v3 = localClientNum;
  Sys_ProfBeginNamedEvent(0xFF0000FF, "CG_PlayersMP_ProcessPlayer");
  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 2749, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( (cent->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 2750, ASSERT_TYPE_ASSERT, "(CENextValid( cent ))", (const char *)&queryFormat, "CENextValid( cent )") )
    __debugbreak();
  *(__m256i *)&obj_8.color = *(__m256i *)&NULL_HUDOUTLINE_INFO_9.color;
  characterEVOffset = NULL_HUDOUTLINE_INFO_9.characterEVOffset;
  p_nextState = &cent->nextState;
  if ( !CgWeaponMap::ms_instance[v3] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
    __debugbreak();
  *(_QWORD *)vel.v = BG_GetWeaponForEntity(CgWeaponMap::ms_instance[v3], &cent->nextState);
  LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals((const LocalClientNum_t)v3);
  eType = cent->nextState.eType;
  _XMM10 = LODWORD(FLOAT_1_0);
  if ( eType == ET_PLAYER )
  {
    CG_DistanceCacheMP_AddPlayer((const LocalClientNum_t)v3, p_nextState->number, 1.0);
  }
  else if ( eType == ET_AGENT )
  {
    CG_DistanceCacheMP_AddAgent((const LocalClientNum_t)v3, p_nextState->number, 1.0);
  }
  IsPlayerEntityNumber = CG_IsPlayerEntityNumber(&LocalClientGlobals->predictedPlayerState, p_nextState->number);
  v82 = IsPlayerEntityNumber;
  if ( CG_Entity_IsNoDraw((const LocalClientNum_t)v3, &cent->nextState, NULL) )
  {
    if ( !IsPlayerEntityNumber && ScriptableCl_IsScriptableEntity((const LocalClientNum_t)v3, cent) && ScriptableCl_GetIndexForEntity((const LocalClientNum_t)v3, cent, &scriptableIndex) )
    {
      ScriptableCl_UpdatePosition((const LocalClientNum_t)v3, scriptableIndex, cent);
      ScriptableCl_UpdateSharedInstance((const LocalClientNum_t)v3, scriptableIndex, p_nextState->number);
    }
    goto LABEL_222;
  }
  if ( !GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&cent->nextState.lerp.eFlags, ACTIVE, 0x11u) )
  {
    if ( !IsPlayerEntityNumber )
      CG_PlayersMP_PreProcess((LocalClientNum_t)v3, cent, 0);
    obj = Com_GetClientDObj(p_nextState->number, (LocalClientNum_t)v3);
    if ( obj )
    {
      CG_EntityMP_ValidateDObj((const LocalClientNum_t)v3, cent);
      if ( !IsPlayerEntityNumber )
        AimTargetMP_ProcessEntity((const LocalClientNum_t)v3, cent);
      v9 = cent->nextState.clientNum;
      clientNum = v9;
      if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
        __debugbreak();
      if ( v9 >= ComCharacterLimits::ms_gameData.m_characterCount )
      {
        if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
          __debugbreak();
        LODWORD(emissiveMaterialData) = v9;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 2829, ASSERT_TYPE_ASSERT, "(unsigned)( iClientNum ) < (unsigned)( ComCharacterLimits::GetCharacterMaxCount() )", "iClientNum doesn't index ComCharacterLimits::GetCharacterMaxCount()\n\t%i not in [0, %i)", emissiveMaterialData, ComCharacterLimits::ms_gameData.m_characterCount) )
          __debugbreak();
      }
      LocalClientStatics = CgStatic::GetLocalClientStatics((const LocalClientNum_t)v3);
      *(_QWORD *)xyz.v = LocalClientStatics;
      CharacterInfo = CgStatic::GetCharacterInfo(LocalClientStatics, v9);
      if ( !CharacterInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 2833, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
        __debugbreak();
      *(_QWORD *)CharacterInfo->velocity.v = 0i64;
      CharacterInfo->velocity.v[2] = 0.0;
      if ( CG_MainMP_IsPrematchCountdown((const LocalClientNum_t)v3) )
      {
        if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_cg_prematch_playerVisbilityRequiresCharacterModels, "cg_prematch_playerVisbilityRequiresCharacterModels") )
        {
          if ( !CharacterInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 2368, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
            __debugbreak();
          if ( CharacterInfo->dobjModelLoaded )
          {
            v12 = 0i64;
            v13 = 0;
            v14 = CharacterInfo->attachModelNames[0];
            while ( !*v14 || CharacterInfo->dobjAttachModelLoaded[v12] )
            {
              ++v13;
              ++v12;
              v14 += 64;
              if ( v13 >= 9 )
                goto LABEL_47;
            }
          }
          goto LABEL_222;
        }
LABEL_47:
        if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_cg_prematch_playerVisbilityRequiresWeaponModels, "cg_prematch_playerVisbilityRequiresWeaponModels") )
        {
          if ( !CharacterInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 2388, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
            __debugbreak();
          if ( CharacterInfo->dobjHeldWeapon.weaponIdx && !CharacterInfo->dobjHeldWeaponLoaded || CharacterInfo->dobjStowedWeapon.weaponIdx && !CharacterInfo->dobjStowedWeaponLoaded || CharacterInfo->dobjThrownWeapon.weaponIdx && !CharacterInfo->dobjThrownWeaponLoaded || CharacterInfo->dobjExecutionWeapon.weaponIdx && !CharacterInfo->dobjExecutionWeaponLoaded || CharacterInfo->dobjAccessoryWeapon.weaponIdx && !CharacterInfo->dobjAccessoryWeaponLoaded )
            goto LABEL_222;
        }
      }
      if ( (cent->flags & 0x20000) != 0 )
      {
        ParticleManager = ParticleManager::GetParticleManager((LocalClientNum_t)v3);
        if ( ParticleManager )
        {
          ParticleManager::EnableDrawForAllSystemsOnDObj(ParticleManager, p_nextState->number, 1);
          cent->flags &= ~0x20000u;
        }
      }
      if ( (*(_BYTE *)&cent->nextState.animInfo.selectAnim & 1) == 0 )
      {
        CG_AddPlayerToWeaponVisibilityList((LocalClientNum_t)v3, cent, CharacterInfo);
        Instance = CgWeaponMap::GetInstance((const LocalClientNum_t)v3);
        v17 = LocalClientStatics->GetAnimStatics(LocalClientStatics);
        if ( (*(_BYTE *)&cent->nextState.animInfo.selectAnim & 1) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 4395, ASSERT_TYPE_ASSERT, "(!cent->nextState.animInfo.selectAnim.usingAnimState)", (const char *)&queryFormat, "!cent->nextState.animInfo.selectAnim.usingAnimState") )
          __debugbreak();
        if ( !CharacterInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 4396, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
          __debugbreak();
        if ( cent->pose.cullIn == 2 )
        {
          if ( cent == (centity_t *)-400i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 4402, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
            __debugbreak();
          BG_UpdateSecondaryWeaponVisibilities(v17, Instance, &cent->nextState, CharacterInfo);
        }
        LocalClientStatics = *(CgStatic **)xyz.v;
      }
      scriptableIndex = !BG_HasPerk(&CharacterInfo->perks, 0x24u);
      LODWORD(xyz.v[0]) = !BG_HasPerk(&CharacterInfo->perks, 0x31u);
      CG_GetPoseOrigin(&cent->pose, &outOrigin);
      lightingOrigin = outOrigin;
      if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&cent->nextState.lerp.eFlags, ACTIVE, 4u) )
      {
        v18 = lightingOrigin.v[2] + 12.0;
      }
      else if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&cent->nextState.lerp.eFlags, ACTIVE, 3u) )
      {
        v18 = lightingOrigin.v[2] + 20.0;
      }
      else
      {
        v18 = lightingOrigin.v[2] + 32.0;
      }
      lightingOrigin.v[2] = v18;
      if ( v82 )
      {
        Radius = DObjGetRadius(obj);
        v20 = R_LinkDObjEntity_NoCull(v3, p_nextState->number, &outOrigin, *(float *)&Radius);
        cent->flags |= 0x80000u;
        v21 = DObjGetRadius(obj);
        CG_Entity_CheckLightCount(p_nextState->number, obj, v20, &outOrigin, *(float *)&v21);
      }
      v22 = CgStatic::GetCharacterInfo(LocalClientStatics, LocalClientGlobals->predictedPlayerState.clientNum);
      if ( !v22 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 2944, ASSERT_TYPE_ASSERT, "(playerCI)", (const char *)&queryFormat, "playerCI") )
        __debugbreak();
      team = v22->team;
      v24 = CharacterInfo->team;
      if ( LocalClientGlobals == (CgGlobalsMP *)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_teams.h", 163, ASSERT_TYPE_ASSERT, "(playerState)", (const char *)&queryFormat, "playerState") )
        __debugbreak();
      if ( team == TEAM_ZERO || (v80 = 1, team != v24) )
        v80 = 0;
      if ( !CG_View_IsThermalVisionOn((const LocalClientNum_t)v3) && !CG_View_ThermalScoped((LocalClientNum_t)v3, LocalClientGlobals) || (v78 = 1, CG_View_IsEMPJammed((const LocalClientNum_t)v3)) )
        v78 = 0;
      v25 = 4096;
      renderFlags[0] = 4096;
      if ( (_BYTE)scriptableIndex )
      {
        v25 = 5120;
        renderFlags[0] = 5120;
        if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_thermal_player_fade_distance_enable, "thermal_player_fade_distance_enable") )
          obj_8.temperatureScale = CG_PlayersMP_CalculateThermalTemperatureScale((const LocalClientNum_t)v3, cent, &obj_8);
        else
          obj_8.temperatureScale = FLOAT_1_0;
      }
      else
      {
        obj_8.temperatureScale = 0.0;
      }
      obj_8.temperatureSet = 1;
      if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&cent->nextState.lerp.eFlags, ACTIVE, 0xDu) )
        renderFlags[0] = v25 | 0x200;
      v26 = obj;
      obj->flags |= 0x80u;
      FX_Dismemberment_ProcessTimeout((LocalClientNum_t)v3, v26);
      v32 = LocalClientGlobals->predictedPlayerState.pm_type == 5;
      m_isMLGSpectator = v32;
      v86 = v32;
      if ( !v32 )
      {
        m_isMLGSpectator = LocalClientGlobals->m_isMLGSpectator;
        v86 = m_isMLGSpectator;
      }
      v83 = CG_Utils_StencilScriptControlled((const LocalClientNum_t)v3);
      v28.0 = ($D69577AC11C1636F320D0973E2FBC7CA)cent->nextState.hudData;
      if ( (*(_BYTE *)&v28.0 & 0x3F) != 0 )
      {
        if ( !LocalClientGlobals->scopeForceEnemyOutlines && !m_isMLGSpectator )
        {
          v29 = LocalClientGlobals->time - LocalClientGlobals->predictedPlayerState.deltaTime;
          if ( cent->currentHudOutlineIndex != (cent->nextState.hudData.data & 0x3F) )
          {
            cent->hudOutlineStartTime = v29;
            cent->currentHudOutlineIndex = cent->nextState.hudData.data & 0x3F;
            v28.0 = ($D69577AC11C1636F320D0973E2FBC7CA)cent->nextState.hudData;
          }
          HudOutlineDefFromPlayerState = BG_GetHudOutlineDefFromPlayerState(&LocalClientGlobals->predictedPlayerState, *(_BYTE *)&v28.0 & 0x3F);
          if ( HudOutlineDefFromPlayerState )
          {
            Handler = CgHandler::getHandler((LocalClientNum_t)v3);
            if ( BG_HudOutline_ShouldDrawOnEnt(HudOutlineDefFromPlayerState, Handler, &LocalClientGlobals->predictedPlayerState, &cent->nextState) )
            {
              if ( v83 )
              {
                if ( HudOutlineDefFromPlayerState->drawInStencil && CG_Utils_ShouldHighlightInScope((const LocalClientNum_t)v3) && (CG_Utils_ShouldHighlightCharacters((const LocalClientNum_t)v3) && cent->nextState.eType == ET_PLAYER || CG_Utils_ShouldHighlightAgents((const LocalClientNum_t)v3) && cent->nextState.eType == ET_AGENT) )
                {
                  obj_8.scopeStencil = (float)HudOutlineDefFromPlayerState->drawInStencil;
                  if ( CG_Utils_PlayerLockedOn((const LocalClientNum_t)v3, cent) )
                    obj_8.useAlternateColor = 1;
                }
              }
              else if ( !HudOutlineDefFromPlayerState->drawInStencil )
              {
                CG_GetPoseOrigin(&cent->pose, &outlinedEntityOrigin);
                CG_Entity_GetPlayerViewOriginEntityWorkerHack(&LocalClientGlobals->predictedPlayerState, (vec3_t *)&playerViewOrigin);
                obj_8.color = BG_HudOutline_GetColor(HudOutlineDefFromPlayerState, cent->hudOutlineStartTime, v29, (const vec3_t *)&playerViewOrigin, &outlinedEntityOrigin);
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
      if ( LocalClientGlobals->scopeForceEnemyOutlines && !v80 )
      {
        v32 = v78 ? (_BYTE)scriptableIndex == 0 : LOBYTE(xyz.v[0]) == 0;
        if ( !v32 )
        {
          v33 = v86;
          if ( v86 )
          {
LABEL_134:
            if ( clientNum < cls.maxClients )
            {
              if ( v33 )
              {
                MLGSpectator = CgMLGSpectator::GetMLGSpectator((const LocalClientNum_t)v3);
                if ( CgMLGSpectator::ShouldDisplayPlayerOutline(MLGSpectator, (const LocalClientNum_t)v3, (const team_t)CharacterInfo->team) && (!v78 || (_BYTE)scriptableIndex) )
                {
                  obj_8.color = CG_Utils_GetHudOutlineTeamColor(LocalClientGlobals, (const LocalClientNum_t)v3, (const team_t)CharacterInfo->team, 0, 1.0);
                  obj_8.forSpectator = 1;
                  *(_WORD *)&obj_8.drawOccludedPixels = 257;
                  Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(DVARFLT_r_hudOutlineWidth, "r_hudOutlineWidth");
                  obj_8.lineWidth = (int)*(float *)&Float_Internal_DebugName;
                  obj_8.renderMode = 0;
                  obj_8.specialActive = CgMLGSpectator::IsClientSpecialActive(MLGSpectator, clientNum) != 0;
                }
              }
            }
            if ( cent->nextState.eType == ET_PLAYER )
            {
              LUIOnEntityElementSpawnerMP::UpdateFiltersForPlayer((const LocalClientNum_t)v3, p_nextState->number);
            }
            else if ( cent->nextState.eType == ET_AGENT )
            {
              LUIOnEntityElementSpawnerMP::UpdateFiltersForAgent((const LocalClientNum_t)v3, p_nextState->number);
            }
            v37 = CG_PlayersMP_LerpEmission((LocalClientNum_t)v3, CharacterInfo);
            scriptableIndex = float_to_integral_cast<unsigned char,float>(*(float *)&v37 * 255.0) << 24;
            v39 = 0;
            if ( v82 && !LocalClientGlobals->renderingThirdPerson )
            {
              v38 = CgWeaponMap::GetInstance((const LocalClientNum_t)v3);
              if ( !BG_IsThirdPersonMode(v38, &LocalClientGlobals->predictedPlayerState) && !CG_Camera_Transition_IsHidingViewmodel((LocalClientNum_t)v3) )
                v39 = 1;
            }
            v40 = CG_CinematicCameraShouldRenderCharacter((LocalClientNum_t)v3, p_nextState->number) != 0;
            if ( (!LocalClientGlobals->m_isMLGSpectator || clientNum >= cls.maxClients || CG_MLGCameraShouldRenderCharacter((const LocalClientNum_t)v3, cent)) && v40 )
            {
              if ( v39 )
              {
                v41 = BG_Skydive_DrawLegs(&LocalClientGlobals->predictedPlayerState);
                v42 = Mantle_DrawLegsModel(&LocalClientGlobals->predictedPlayerState);
                v84 = BG_ContextMount_DrawLegsModel(&LocalClientGlobals->predictedPlayerState);
                IsHidingViewmodel = CG_Camera_Transition_IsHidingViewmodel((LocalClientNum_t)v3);
                v79 = BG_VehicleOccupancy_HideLegs(&LocalClientGlobals->predictedPlayerState);
                v43 = Dvar_GetBool_Internal_DebugName(DCONST_DVARMPSPBOOL_cg_drawPlayerLegs, "cg_drawPlayerLegs") && v41 && v42 && v84 && !IsHidingViewmodel && !v79 && !LocalClientGlobals->vehicleEntryHidesPlayer;
                drawShadow = Dvar_GetBool_Internal_DebugName(DCONST_DVARMPBOOL_cg_drawPlayerShadow, "cg_drawPlayerShadow");
                CG_Players_AddFirstPersonBodyModelsToScene((LocalClientNum_t)v3, cent, obj, renderFlags[0], &lightingOrigin, scriptableIndex, v43, drawShadow);
              }
              else
              {
                if ( LOBYTE(xyz.v[0]) && !v80 && CG_Utils_ShouldHighlightInScope((const LocalClientNum_t)v3) && !CG_Utils_StencilScriptControlled((const LocalClientNum_t)v3) && (CG_Utils_ShouldHighlightCharacters((const LocalClientNum_t)v3) && cent->nextState.eType == ET_PLAYER || CG_Utils_ShouldHighlightAgents((const LocalClientNum_t)v3) && cent->nextState.eType == ET_AGENT) )
                {
                  obj_8.scopeStencil = FLOAT_1_0;
                  v55 = CG_Utils_PlayerLockedOn((const LocalClientNum_t)v3, cent);
                  useAlternateColor = obj_8.useAlternateColor;
                  if ( v55 )
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
                v58 = ((0x80000000 >> (number & 0x1F)) & s_coarseCullData[v3].array[(unsigned __int64)number >> 5]) != 0;
                p_eventLodData = NULL;
                v59 = 0;
                if ( !v86 )
                  v59 = v58;
                if ( v59 )
                {
                  if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_playerCulledDebugOverlay, "playerCulledDebugOverlay") )
                  {
                    CG_GetPoseOrigin(&cent->pose, (vec3_t *)&playerViewOrigin);
                    CL_AddDebugString((const vec3_t *)&playerViewOrigin, &colorWhite, 1.0, "Umbra Culled", 0, 1);
                  }
                  goto LABEL_166;
                }
                v60 = CG_GetLocalClientGlobals((const LocalClientNum_t)v3);
                RefdefView_GetOrg(&v60->refdef.view, &outlinedEntityOrigin);
                CG_GetPoseOrigin(&cent->pose, &xyz);
                v61 = (float)((float)((float)(outlinedEntityOrigin.v[1] - xyz.v[1]) * (float)(outlinedEntityOrigin.v[1] - xyz.v[1])) + (float)((float)(outlinedEntityOrigin.v[0] - xyz.v[0]) * (float)(outlinedEntityOrigin.v[0] - xyz.v[0]))) + (float)((float)(outlinedEntityOrigin.v[2] - xyz.v[2]) * (float)(outlinedEntityOrigin.v[2] - xyz.v[2]));
                v62 = (float)(LocalClientGlobals->lastViewFov - 8.0) * 0.01754386;
                I_fclamp(v62, 0.0, 1.0);
                v63 = Dvar_GetFloat_Internal_DebugName(DVARFLT_playerCullDistMaxZoom, "playerCullDistMaxZoom");
                v64 = *(float *)&v63;
                v65 = Dvar_GetFloat_Internal_DebugName(DVARFLT_playerCullDistHip, "playerCullDistHip");
                v66 = (float)((float)((float)(1.0 - v62) * v64) + (float)(*(float *)&v65 * v62)) * (float)((float)((float)(1.0 - v62) * v64) + (float)(*(float *)&v65 * v62));
                if ( v66 > v61 && !CG_PlayerFade_IsPlayerFadedOut((const LocalClientNum_t)v3) )
                {
                  LocalClientGlobals->GetShaderOverrideData(LocalClientGlobals, (shaderOverride_t *)&v100, clientNum, *(const Weapon **)vel.v);
                  v67 = p_nextState->number;
                  obj_8.characterEVOffset = characterEVOffset;
                  *(__m256i *)&v94.__vftable = v100;
                  v94.m_localClientNum = v101;
                  CG_Entity_AddDObjToScene((const LocalClientNum_t)v3, obj, &cent->pose, v67, renderFlags[0], (shaderOverride_t *)&v94, &obj_8, &lightingOrigin, 0.0, scriptableIndex);
                }
                if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_playerCulledDebugOverlay, "playerCulledDebugOverlay") )
                {
                  v68 = "Dist Culled";
                  if ( v66 > v61 )
                    v68 = "Submitted";
                  p_eventLodData = NULL;
                  CL_AddDebugString(&xyz, &colorWhite, 1.0, v68, 0, 1);
                  goto LABEL_166;
                }
              }
            }
            p_eventLodData = NULL;
LABEL_166:
            if ( !v82 )
            {
              CharacterAnimUpdateInfoIfSorted = CgGlobalsMP::GetCharacterAnimUpdateInfoIfSorted(LocalClientGlobals, p_nextState->number);
              p_eventLodData = &CharacterAnimUpdateInfoIfSorted->eventLodData;
              if ( CharacterAnimUpdateInfoIfSorted )
                CG_PlayersMP_PreCachePlayerAnimCalcRequests((const LocalClientNum_t)v3, cent, CharacterInfo, CharacterAnimUpdateInfoIfSorted, obj);
            }
            if ( !GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&cent->nextState.lerp.eFlags, ACTIVE, 0x11u) )
            {
              AnglesToQuat(&cent->pose.angles, &playerViewOrigin);
              CG_AddPlayerWeapon((LocalClientNum_t)v3, &outOrigin, &playerViewOrigin, NULL, NULL, cent, 1, p_eventLodData);
              CG_AddPlayerExecutionProp((LocalClientNum_t)v3, cent);
              CG_Heat_UpdateWorldmodel((LocalClientNum_t)v3, cent);
              CG_Slide_UpdateClientEntity((LocalClientNum_t)v3, cent);
              CG_Ladder_PlayAudioClientEntity((const LocalClientNum_t)v3, cent);
              CG_Skydive_UpdateClientEntity((LocalClientNum_t)v3, cent);
              v47 = DCONST_DVARINT_cg_playerFoliageSoundCount;
              if ( !DCONST_DVARINT_cg_playerFoliageSoundCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_playerFoliageSoundCount") )
                __debugbreak();
              Dvar_CheckFrontendServerThread(v47);
              unsignedInt = v47->current.unsignedInt;
              v49 = p_nextState->number;
              if ( v49 >= cls.maxClients || !LocalClientGlobals->m_playerOrderDistanceSortedCount )
                goto LABEL_179;
              if ( (unsigned __int16)v49 >= 0xF8u )
              {
                LODWORD(drawLegsa) = 248;
                LODWORD(emissiveMaterialDataa) = p_nextState->number;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 2494, ASSERT_TYPE_ASSERT, "(unsigned)( cent->nextState.number ) < (unsigned)( ( sizeof( *array_counter( cgameGlob->m_playerOrderLookupDistancePriority ) ) + 0 ) )", "cent->nextState.number doesn't index cgameGlob->m_playerOrderLookupDistancePriority\n\t%i not in [0, %i)", emissiveMaterialDataa, drawLegsa) )
                  __debugbreak();
              }
              if ( LocalClientGlobals->m_playerOrderLookupDistancePriority[p_nextState->number] <= unsignedInt )
              {
LABEL_179:
                CG_Foliage_QueueProcessCharacterEntityCmd((const LocalClientNum_t)v3, cent);
                if ( v82 )
                  CG_Foliage_StartProcessCharacterEntityCmds();
              }
            }
            CG_Slide_UpdateClientFX((LocalClientNum_t)v3, cent);
            if ( v82 )
              CG_PlayersMP_ProcessPlayerBrCircleEffects((LocalClientNum_t)v3, LocalClientGlobals, cent);
            if ( Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_weaponOcclusionAdjustEnabled, "weaponOcclusionAdjustEnabled") )
            {
              if ( LocalClientGlobals->frametime > 0 )
              {
                _XMM0 = CharacterInfo->heldWeaponOccluded;
                __asm
                {
                  vpcmpeqd xmm2, xmm0, xmm1
                  vblendvps xmm6, xmm10, xmm9, xmm2
                }
                if ( *(float *)&_XMM6 >= CharacterInfo->weaponOccludedAdjustFrac )
                {
                  v53 = "weaponOcclusionAdjustBlendInTime";
                  v54 = DCONST_DVARINT_weaponOcclusionAdjustBlendInTime;
                }
                else
                {
                  v53 = "weaponOcclusionAdjustBlendOutTime";
                  v54 = DCONST_DVARINT_weaponOcclusionAdjustBlendOutTime;
                }
                Int_Internal_DebugName = Dvar_GetInt_Internal_DebugName(v54, v53);
                v70 = ExponentialMovingAverage(CharacterInfo->weaponOccludedAdjustFrac, *(float *)&_XMM6, (float)Int_Internal_DebugName / (float)LocalClientGlobals->frametime);
                v71 = I_fclamp(*(float *)&v70, 0.0, 1.0);
                CharacterInfo->weaponOccludedAdjustFrac = *(float *)&v71;
              }
            }
            else
            {
              CharacterInfo->weaponOccludedAdjustFrac = 0.0;
            }
            predictedPlayerEntity = LocalClientGlobals->predictedPlayerEntity;
            if ( predictedPlayerEntity && predictedPlayerEntity->nextState.number != p_nextState->number )
            {
              CgTrajectory::CgTrajectory(&v94, (const LocalClientNum_t)v3, cent, &cent->prevState);
              BgTrajectory::EvaluatePosTrajectory(&v94, LocalClientGlobals->snap->serverTime, &xyz);
              v94.m_es = &cent->nextState.lerp;
              BgTrajectory::EvaluatePosTrajectory(&v94, LocalClientGlobals->nextSnap->serverTime, &outlinedEntityOrigin);
              vel.v[0] = outlinedEntityOrigin.v[0] - xyz.v[0];
              vel.v[1] = outlinedEntityOrigin.v[1] - xyz.v[1];
              vel.v[2] = outlinedEntityOrigin.v[2] - xyz.v[2];
              v73 = (float)(LocalClientGlobals->nextSnap->serverTime - LocalClientGlobals->snap->serverTime);
              vel.v[0] = (float)(outlinedEntityOrigin.v[0] - xyz.v[0]) * v73;
              vel.v[1] = v73 * (float)(outlinedEntityOrigin.v[1] - xyz.v[1]);
              vel.v[2] = v73 * (float)(outlinedEntityOrigin.v[2] - xyz.v[2]);
              R_ReactiveMotion_AddEffector_MT(&outOrigin, &vel, p_nextState->number);
            }
            XAnimBonePhysicsSetDObjMatrix(obj, &outOrigin, &cent->pose.angles);
            if ( !CG_EntityWorkers_TryAddPostPlayerUpdate(p_nextState->number, clientNum, &outOrigin) )
              CG_PlayersMP_ProcessPlayerPostUpdate((LocalClientNum_t)v3, p_nextState->number, clientNum, &outOrigin);
            memset(&outOrigin, 0, sizeof(outOrigin));
            goto LABEL_222;
          }
          obj_8.color = CG_Utils_GetHudOutlineColor(LocalClientGlobals->scopeForceEnemyOutlineColorIndex);
          obj_8.drawOccludedPixels = LocalClientGlobals->scopeForceEnemyOutlinesDisableDepthTest;
          obj_8.drawNonOccludedPixels = 1;
          v34 = Dvar_GetFloat_Internal_DebugName(DVARFLT_r_hudOutlineWidth, "r_hudOutlineWidth");
          obj_8.lineWidth = (int)*(float *)&v34;
          obj_8.renderMode = 0;
        }
      }
      v33 = v86;
      goto LABEL_134;
    }
  }
LABEL_222:
  Sys_ProfEndNamedEvent();
  memset(&lightingOrigin, 0, sizeof(lightingOrigin));
}

/*
==============
CG_PlayersMP_ProcessPlayerBrCircleEffects
==============
*/
void CG_PlayersMP_ProcessPlayerBrCircleEffects(LocalClientNum_t localClientNum, const CgGlobalsMP *cgameGlob, const centity_t *cent)
{
  centity_t *m_brCircleEnt; 
  __int64 v5; 
  playerState_s *p_predictedPlayerState; 
  int number; 
  float v8; 
  float v9; 
  __int128 v10; 
  float v14; 
  float v15; 
  ParticleManager *ParticleManager; 
  ParticleManager *v17; 
  float v18; 
  ParticleSystemHandle *v19; 
  __m128 v; 
  __m128 v25; 
  __m128 v29; 
  ParticleSystemHandle v32; 
  __m128 v34; 
  cg_t *LocalClientGlobals; 
  float v38; 
  int spawnTimeMsec; 
  __m128 v41; 
  int v44; 
  ParticleSystem *v45; 
  ParticleSystem *v46; 
  __m128 v47; 
  __m128 v48; 
  __m128 v49; 
  __m128 v50; 
  __m128 v51; 
  ParticleSystemHandle v52; 
  ParticleManager *v53; 
  __m256i v54; 
  __m256i v55; 
  float4 emitterPos; 
  tmat43_t<vec3_t> dst; 
  vec3_t outOrigin; 
  char emitterOrientationMat[64]; 

  m_brCircleEnt = cgameGlob->m_brCircleEnt;
  v5 = localClientNum;
  if ( m_brCircleEnt && (m_brCircleEnt->flags & 1) != 0 )
  {
    p_predictedPlayerState = &cgameGlob->predictedPlayerState;
    number = cent->nextState.number;
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
        goto LABEL_39;
    }
    if ( number != p_predictedPlayerState->clientNum )
    {
LABEL_39:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 2524, ASSERT_TYPE_ASSERT, "(CG_IsPlayerEntityNumber( &cgameGlob->predictedPlayerState, es->number ))", (const char *)&queryFormat, "CG_IsPlayerEntityNumber( &cgameGlob->predictedPlayerState, es->number )") )
        __debugbreak();
    }
    CG_GetPoseOrigin(&cgameGlob->m_brCircleEnt->pose, &outOrigin);
    v8 = outOrigin.v[0] - cgameGlob->predictedPlayerState.origin.v[0];
    outOrigin.v[2] = cgameGlob->predictedPlayerState.origin.v[2];
    v10 = LODWORD(outOrigin.v[1]);
    v9 = outOrigin.v[1] - cgameGlob->predictedPlayerState.origin.v[1];
    *(float *)&v10 = fsqrt((float)(v9 * v9) + (float)(v8 * v8));
    _XMM7 = v10;
    __asm
    {
      vcmpless xmm0, xmm7, cs:__real@80000000
      vblendvps xmm0, xmm7, xmm2, xmm0
    }
    v14 = v8 * (float)(1.0 / *(float *)&_XMM0);
    v15 = v9 * (float)(1.0 / *(float *)&_XMM0);
    if ( v14 == 0.0 && (float)(v9 * (float)(1.0 / *(float *)&_XMM0)) == 0.0 )
    {
      LODWORD(_XMM7) = 0;
      v14 = FLOAT_1_0;
      v15 = 0.0;
    }
    ParticleManager = ParticleManager::GetParticleManager((LocalClientNum_t)v5);
    v17 = ParticleManager;
    if ( *(float *)&_XMM7 < cgameGlob->m_brCircleRadius )
    {
      v52 = s_playerBrCircleFX[v5];
      if ( v52 )
      {
        ParticleManager::KillSystem(ParticleManager, v52);
        s_playerBrCircleFX[v5] = PARTICLE_SYSTEM_INVALID_HANDLE;
      }
    }
    else
    {
      MatrixCopy44To43(&identityMatrix44, &dst);
      v18 = cgameGlob->predictedPlayerState.origin.v[1];
      dst.m[3].v[0] = cgameGlob->predictedPlayerState.origin.v[0];
      dst.m[3].v[2] = cgameGlob->predictedPlayerState.origin.v[2];
      dst.m[0].v[0] = v14;
      dst.m[0].v[1] = v15;
      dst.m[0].v[2] = 0.0;
      dst.m[3].v[1] = v18;
      PerpendicularVector(dst.m, &dst.m[2]);
      emitterPos.v.m128_i32[3] = 0;
      v19 = &s_playerBrCircleFX[v5];
      v = emitterPos.v;
      v.m128_f32[0] = dst.m[0].v[0];
      _XMM0 = v;
      __asm
      {
        vinsertps xmm0, xmm0, xmm3, 10h
        vinsertps xmm0, xmm0, xmm6, 20h ; ' '
      }
      emitterPos.v = _XMM0;
      *(__m128 *)emitterOrientationMat = _XMM0;
      emitterPos.v.m128_i32[3] = 0;
      v25 = emitterPos.v;
      v25.m128_f32[0] = (float)(dst.m[2].v[1] * dst.m[0].v[2]) - (float)(dst.m[2].v[2] * dst.m[0].v[1]);
      _XMM0 = v25;
      __asm
      {
        vinsertps xmm0, xmm0, xmm5, 10h
        vinsertps xmm0, xmm0, xmm4, 20h ; ' '
      }
      emitterPos.v = _XMM0;
      *(__m128 *)&emitterOrientationMat[16] = _XMM0;
      emitterPos.v.m128_i32[3] = 0;
      v29 = emitterPos.v;
      v29.m128_f32[0] = dst.m[2].v[0];
      _XMM0 = v29;
      __asm
      {
        vinsertps xmm0, xmm0, xmm9, 10h
        vinsertps xmm0, xmm0, xmm10, 20h ; ' '
      }
      emitterPos.v = _XMM0;
      emitterPos.v.m128_i32[3] = 0;
      v32 = *v19;
      *(__m128 *)&emitterOrientationMat[32] = _XMM0;
      v34 = emitterPos.v;
      v34.m128_f32[0] = dst.m[3].v[0];
      _XMM3 = v34;
      __asm
      {
        vinsertps xmm3, xmm3, dword ptr [rsp+1A8h+dst+28h], 10h
        vinsertps xmm3, xmm3, dword ptr [rsp+1A8h+dst+2Ch], arg_18
      }
      *(_OWORD *)&emitterOrientationMat[48] = (*(_OWORD *)&_XMM3 ^ *(_OWORD *)&g_one.v) & *(_OWORD *)&g_keepW.v ^ *(_OWORD *)&_XMM3;
      dst.m[1].v[0] = (float)(dst.m[2].v[1] * dst.m[0].v[2]) - (float)(dst.m[2].v[2] * dst.m[0].v[1]);
      dst.m[1].v[1] = (float)(dst.m[2].v[2] * dst.m[0].v[0]) - (float)(dst.m[2].v[0] * dst.m[0].v[2]);
      dst.m[1].v[2] = (float)(dst.m[2].v[0] * dst.m[0].v[1]) - (float)(dst.m[2].v[1] * dst.m[0].v[0]);
      emitterPos.v = _XMM3;
      if ( v32 )
      {
        v44 = 0;
        if ( g_particleSystemsGeneration[4096 * v5 + (v32 & 0xFFF)].__all32 == v32 )
          v44 = v32 & 0xFFF;
        v45 = g_particleSystems[v5][v44];
        v46 = NULL;
        if ( (unsigned __int64)v45 >= 0x1000 )
          v46 = v45;
        if ( v46 )
        {
          Particle_AssertFloat4IsNormalized((const float4 *)emitterOrientationMat);
          Particle_AssertFloat4IsNormalized((const float4 *)&emitterOrientationMat[16]);
          Particle_AssertFloat4IsNormalized((const float4 *)&emitterOrientationMat[32]);
          *(__m256i *)v46->m_systemTransform.x.v.m128_f32 = *(__m256i *)emitterOrientationMat;
          *(__m256i *)v46->m_systemTransform.z.v.m128_f32 = *(__m256i *)&emitterOrientationMat[32];
          v47 = v46->m_systemTransform.z.v;
          v48 = _mm_shuffle_ps(v47, v46->m_systemTransform.w.v, 68);
          v49 = _mm_shuffle_ps(v47, v46->m_systemTransform.w.v, 238);
          v50 = _mm_shuffle_ps(v46->m_systemTransform.x.v, v46->m_systemTransform.y.v, 68);
          v51 = _mm_shuffle_ps(v46->m_systemTransform.x.v, v46->m_systemTransform.y.v, 238);
          *(__m128 *)&v54.m256i_u64[2] = _mm_shuffle_ps(v50, v48, 221);
          *(__m128 *)v54.m256i_i8 = _mm_shuffle_ps(v50, v48, 136);
          *(__m128 *)v55.m256i_i8 = _mm_shuffle_ps(v51, v49, 136);
          *(__m128 *)&v55.m256i_u64[2] = _mm_shuffle_ps(v51, v49, 221);
          *(__m256i *)v46->m_systemTransformTranspose.x.v.m128_f32 = v54;
          *(__m256i *)v46->m_systemTransformTranspose.z.v.m128_f32 = v55;
        }
        else
        {
          *v19 = PARTICLE_SYSTEM_INVALID_HANDLE;
        }
      }
      else
      {
        LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)v5);
        v38 = cgameGlob->predictedPlayerState.origin.v[0];
        spawnTimeMsec = LocalClientGlobals->time;
        emitterPos.v.m128_i32[3] = 0;
        v41 = emitterPos.v;
        v41.m128_f32[0] = v38;
        _XMM3 = v41;
        __asm
        {
          vinsertps xmm3, xmm3, dword ptr [rdi+3Ch], 10h
          vinsertps xmm3, xmm3, dword ptr [rdi+40h], 20h ; ' '
        }
        emitterPos.v = _XMM3;
        *v19 = ParticleManager::AddSystem(v17, (LocalClientNum_t)v5, cgMedia.fxBrCircleAsh.m_particleSystemDef, &emitterPos, (const vector3 *)emitterOrientationMat, spawnTimeMsec, PARTICLE_SYSTEM_FLAG_NONE, NULL, NULL);
      }
    }
  }
  else if ( s_playerBrCircleFX[localClientNum] )
  {
    v53 = ParticleManager::GetParticleManager(localClientNum);
    ParticleManager::KillSystem(v53, s_playerBrCircleFX[v5]);
    s_playerBrCircleFX[v5] = PARTICLE_SYSTEM_INVALID_HANDLE;
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
  centity_t *Entity; 
  const dvar_t *v9; 
  vec3_t trBase; 
  __int64 v11; 
  Bounds bounds; 

  v11 = -2i64;
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 2421, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals(localClientNum);
  Entity = CG_GetEntity(localClientNum, entityIndex);
  if ( !CG_IsPlayerEntityNumber(&LocalClientGlobals->predictedPlayerState, entityIndex) )
  {
    if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagStrict(&Entity->nextState.lerp.eFlags, (EntityStateFlagsMP)20) )
      CG_EntityMP_UpdateScramblerEffect(localClientNum, entityIndex, entityIndex, poseOrigin, JAMMING_TYPE_LINEAR);
    if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagStrict(&Entity->nextState.lerp.eFlags, LEGACY_LADDER_CENTERLINE|LEGACY_MOUNT|0x10) )
      CG_EntityMP_UpdatePortableRadarEffect(localClientNum, entityIndex, entityIndex, poseOrigin);
  }
  v9 = DVARBOOL_cg_debugAntiLagShowPlayerServerSnap;
  if ( DVARBOOL_cg_debugAntiLagShowPlayerServerSnap )
  {
    Dvar_CheckFrontendServerThread(DVARBOOL_cg_debugAntiLagShowPlayerServerSnap);
    if ( v9->current.enabled )
    {
      *(_OWORD *)bounds.midPoint.v = _xmm;
      bounds.halfSize.v[1] = FLOAT_15_0;
      bounds.halfSize.v[2] = FLOAT_35_0;
      CG_DebugBox(poseOrigin, &bounds, Entity->pose.angles.v[1], &colorGreen, 1, 0);
      Trajectory_GetTrBase(&Entity->nextState.lerp.pos, &trBase);
      CG_DebugBox(&trBase, &bounds, Entity->nextState.lerp.apos.trBase.v[1], &colorRed, 1, 0);
      memset(&trBase, 0, sizeof(trBase));
    }
  }
  CG_LatencyTestMP_ProcessPlayerEntity(localClientNum, Entity);
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
  CgStatic *v11; 
  cg_t *LocalClientGlobals; 
  characterInfo_t *CharacterInfo; 
  DObj *ClientDObj; 
  XAnimTree *pXAnimTree; 
  __int64 v16; 
  unsigned int suitIndex; 
  unsigned int AnimsetIndexBySuit; 
  unsigned int Animset; 
  XAnimOwner v20; 
  __int64 v21; 
  CgGlobalsMP *v22; 
  const dvar_t *v23; 
  __int64 forceBlendTime; 
  void *objID; 

  if ( !cgameGlob && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 4132, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 4133, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  p_nextState = &cent->nextState;
  LocalClientStatics = CgStatic::GetLocalClientStatics(localClientNum);
  clientNum = cent->nextState.clientNum;
  v11 = LocalClientStatics;
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)LocalClientStatics->m_localClientNum);
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static_inline.h", 25, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  CharacterInfo = CG_GetCharacterInfo(LocalClientGlobals, clientNum);
  if ( !CharacterInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 4139, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
    __debugbreak();
  cg_t::ResetCgCharacterInfo(cgameGlob, p_nextState->number);
  ClientDObj = Com_GetClientDObj(p_nextState->number, localClientNum);
  if ( !GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&cent->nextState.lerp.eFlags, ACTIVE, 0x11u) && resetAnimation )
  {
    pXAnimTree = CharacterInfo->pXAnimTree;
    if ( !pXAnimTree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 4150, ASSERT_TYPE_ASSERT, "(pAnimTree)", (const char *)&queryFormat, "pAnimTree") )
      __debugbreak();
    if ( ClientDObj )
    {
      if ( !DObjGetTree(ClientDObj) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 4154, ASSERT_TYPE_ASSERT, "(DObjGetTree( obj ))", (const char *)&queryFormat, "DObjGetTree( obj )") )
        __debugbreak();
      if ( DObjGetTree(ClientDObj) != pXAnimTree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 4155, ASSERT_TYPE_ASSERT, "(DObjGetTree( obj ) == pAnimTree)", (const char *)&queryFormat, "DObjGetTree( obj ) == pAnimTree") )
        __debugbreak();
      v16 = (__int64)v11->GetAnimStatics(v11);
      if ( !v16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 4158, ASSERT_TYPE_ASSERT, "(bgameAnim)", (const char *)&queryFormat, "bgameAnim") )
        __debugbreak();
      if ( CharacterInfo->usingAnimState )
      {
        BG_AnimationState_Reset(&cent->nextState, CharacterInfo);
      }
      else
      {
        XAnimClearTreeGoalWeights(pXAnimTree, 0, XANIM_SUBTREE_DEFAULT, 0, 0.0, 1, ClientDObj, LINEAR);
        if ( !PlayerASM_IsEnabled() )
        {
          XAnimSetCompleteGoalWeight(ClientDObj, 0, XANIM_SUBTREE_DEFAULT, *(unsigned __int16 *)(v16 + 40), 0.0, 0.0, 1.0, (scr_string_t)0, 0, 0, LINEAR, NULL);
          XAnimSetCompleteGoalWeight(ClientDObj, 0, XANIM_SUBTREE_DEFAULT, *(unsigned __int16 *)(v16 + 42), 1.0, 0.0, 1.0, (scr_string_t)0, 0, 0, LINEAR, NULL);
        }
      }
      memset_0(&CharacterInfo->legs, 0, sizeof(CharacterInfo->legs));
      CharacterInfo->legs.yawAngle = CharacterInfo->playerAngles.v[1];
      CharacterInfo->legs.pitchAngle = 0.0;
      memset_0(&CharacterInfo->torso, 0, sizeof(CharacterInfo->torso));
      CharacterInfo->torso.yawAngle = CharacterInfo->playerAngles.v[1];
      CharacterInfo->torso.pitchAngle = CharacterInfo->playerAngles.v[0];
      CharacterInfo->stanceTransitionTime = *(_DWORD *)(v16 + 19528);
      XAnimBonePhysicsReset(ClientDObj);
    }
    if ( !CharacterInfo->usingAnimState && PlayerASM_IsEnabled() )
      CharacterInfo->playerASMLocomotion.forceUpdate = 1;
  }
  if ( !CharacterInfo->usingAnimState && PlayerASM_IsEnabled() )
  {
    if ( CG_IsPlayerEntityNumber(&cgameGlob->predictedPlayerState, cent->nextState.clientNum) && !BG_IsSpectating(&cgameGlob->predictedPlayerState) )
    {
      suitIndex = CharacterInfo->suitIndex;
      if ( PlayerASM_IsEnabled() && !PlayerASM_IsConnectingPaths() )
      {
        AnimsetIndexBySuit = BG_PlayerASM_GetAnimsetIndexBySuit(suitIndex);
        if ( ((cent->nextState.animInfo.animData >> 1) & 3) != AnimsetIndexBySuit )
          cent->nextState.animInfo.animData = cent->nextState.animInfo.animData & 0x80000001 | (2 * (AnimsetIndexBySuit & 3));
      }
    }
    Animset = BG_PlayerASM_GetAnimset(&cent->nextState);
    LOBYTE(v20) = 1;
    BG_PlayersASM_ResetAnimTree(Animset, CG_MainMP_AllocXAnimClient, v20, CharacterInfo);
  }
  v21 = (unsigned int)cent->nextState.clientNum;
  v22 = CgGlobalsMP::GetLocalClientGlobals(localClientNum);
  if ( (unsigned int)v21 >= 0xF8 )
  {
    LODWORD(objID) = 248;
    LODWORD(forceBlendTime) = v21;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 1355, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( ( sizeof( *array_counter( cgameGlob->m_playerUpdateAnimInfo ) ) + 0 ) )", "clientNum doesn't index ARRAY_COUNT( cgameGlob->m_playerUpdateAnimInfo )\n\t%i not in [0, %i)", forceBlendTime, objID) )
      __debugbreak();
  }
  v22->m_playerUpdateAnimInfo[v21].accumulatedTime = 0;
  memset_0(CharacterInfo->shaderOverride, 0, sizeof(CharacterInfo->shaderOverride));
  CG_PlayersMP_UpdateCharacterScriptable(localClientNum, p_nextState, CharacterInfo, ClientDObj);
  v23 = DVARBOOL_cg_debugposition;
  if ( !DVARBOOL_cg_debugposition && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_debugposition") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v23);
  if ( v23->current.enabled )
    Com_Printf(17, "%i ResetPlayerEntity yaw=%f\n", (unsigned int)p_nextState->number, CharacterInfo->torso.yawAngle);
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
void CG_PlayersMP_SetCharacterAngles(CgGlobalsMP *cgameGlob, centity_t *cent, float lerp)
{
  entityType_s eType; 
  CgStatic *LocalClientStatics; 
  int clientNum; 
  cg_t *LocalClientGlobals; 
  characterInfo_t *CharacterInfo; 
  double v10; 
  float v11; 
  double v12; 
  double v13; 
  float v14; 
  double v15; 
  double v16; 
  float v17; 
  double v18; 
  double v19; 
  float v20; 
  double v21; 
  float v24; 
  double v25; 
  float v26; 
  float v27; 
  float v28; 
  __int128 v29; 
  double v33; 
  float v34; 
  double v35; 
  unsigned int groundRefEnt; 
  CgHandler *Handler; 
  vec3_t *p_angles; 
  const vec3_t *p_playerAngles; 
  __int64 v41; 
  vec3_t outSlopeNormal; 
  vec3_t v43; 
  vec3_t angles; 
  tmat33_t<vec3_t> axis; 
  tmat33_t<vec3_t> in1; 
  tmat33_t<vec3_t> out; 

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
  CharacterInfo = CG_GetCharacterInfo(LocalClientGlobals, clientNum);
  if ( !CharacterInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 1378, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
    __debugbreak();
  CharacterInfo->leftStickInputInterpolated = BG_LerpPackedPolarCoordsToCartesian(cent->prevState.u.player.leftStickPolarPacked, cent->nextState.lerp.u.player.leftStickPolarPacked, lerp);
  CharacterInfo->rightStickInputInterpolated = BG_LerpPackedPolarCoordsToCartesian(cent->prevState.u.player.rightStickPolarPacked, cent->nextState.lerp.u.player.rightStickPolarPacked, lerp);
  v10 = MSG_UnpackSignedFloat(cent->nextState.lerp.u.player.extraAnimData.anonymous.data[0], 1.0, 0x10u);
  v11 = *(float *)&v10;
  v12 = MSG_UnpackSignedFloat(cent->prevState.u.player.extraAnimData.anonymous.data[0], 1.0, 0x10u);
  CharacterInfo->skydivePitchInterpolated = (float)(*(float *)&v12 * (float)(1.0 - lerp)) + (float)(lerp * v11);
  v13 = MSG_UnpackSignedFloat(cent->nextState.lerp.u.player.extraAnimData.anonymous.data[1], 1.0, 0x10u);
  v14 = *(float *)&v13;
  v15 = MSG_UnpackSignedFloat(cent->prevState.u.player.extraAnimData.anonymous.data[1], 1.0, 0x10u);
  CharacterInfo->skydiveRollInterpolated = (float)(*(float *)&v15 * (float)(1.0 - lerp)) + (float)(lerp * v14);
  v16 = MSG_UnpackSignedFloat(cent->nextState.lerp.u.player.extraAnimData.anonymous.data[2], 1.0, 0x10u);
  v17 = *(float *)&v16;
  v18 = MSG_UnpackSignedFloat(cent->prevState.u.player.extraAnimData.anonymous.data[2], 1.0, 0x10u);
  CharacterInfo->skydiveThrottleInterpolated = (float)(*(float *)&v18 * (float)(1.0 - lerp)) + (float)(lerp * v17);
  v19 = BG_MovementDirToDegrees(cent->nextState.lerp.u.player.movementDir);
  v20 = *(float *)&v19;
  v21 = BG_MovementDirToDegrees(cent->prevState.u.player.movementDir);
  _XMM10 = 0i64;
  __asm { vroundss xmm3, xmm10, xmm2, 1 }
  v24 = (float)((float)((float)((float)((float)(v20 - *(float *)&v21) * 0.0027777778) - *(float *)&_XMM3) * 360.0) * lerp) + *(float *)&v21;
  v25 = AngleDelta(v24, CharacterInfo->lerpMoveDir);
  CharacterInfo->deltaLerpMoveDir = *(float *)&v25;
  CharacterInfo->lerpMoveDir = v24;
  BG_SlopeWorldmodel_Unpack(&cent->prevState.u.player.slopePacked, &outSlopeNormal);
  BG_SlopeWorldmodel_Unpack(&cent->nextState.lerp.u.player.slopePacked, &v43);
  v29 = LODWORD(v43.v[0]);
  v26 = (float)((float)(v43.v[0] - outSlopeNormal.v[0]) * lerp) + outSlopeNormal.v[0];
  CharacterInfo->groundNormalInterpolated.v[0] = v26;
  v27 = (float)((float)(v43.v[1] - outSlopeNormal.v[1]) * lerp) + outSlopeNormal.v[1];
  CharacterInfo->groundNormalInterpolated.v[1] = v27;
  v28 = (float)((float)(v43.v[2] - outSlopeNormal.v[2]) * lerp) + outSlopeNormal.v[2];
  *(float *)&v29 = (float)((float)(v26 * v26) + (float)(v27 * v27)) + (float)(v28 * v28);
  CharacterInfo->groundNormalInterpolated.v[2] = v28;
  if ( *(float *)&v29 >= 1.0e-12 )
  {
    *(float *)&v29 = fsqrt(*(float *)&v29);
    _XMM1 = v29;
    __asm
    {
      vcmpless xmm0, xmm1, cs:__real@80000000
      vblendvps xmm0, xmm1, xmm9, xmm0
    }
    CharacterInfo->groundNormalInterpolated.v[0] = (float)(1.0 / *(float *)&_XMM0) * v26;
    CharacterInfo->groundNormalInterpolated.v[1] = (float)(1.0 / *(float *)&_XMM0) * v27;
    CharacterInfo->groundNormalInterpolated.v[2] = (float)(1.0 / *(float *)&_XMM0) * v28;
  }
  else
  {
    *(_QWORD *)CharacterInfo->groundNormalInterpolated.v = 0i64;
    CharacterInfo->groundNormalInterpolated.v[2] = 1.0;
  }
  if ( PlayerASM_IsEnabled() )
  {
    v33 = BG_MovementDirToDegrees(cent->nextState.lerp.u.player.velocityDir);
    v34 = *(float *)&v33;
    v35 = BG_MovementDirToDegrees(cent->prevState.u.player.velocityDir);
    __asm { vroundss xmm4, xmm10, xmm1, 1 }
    BG_PlayerASM_UpdateAngles((float)((float)((float)((float)((float)(v34 - *(float *)&v35) * 0.0027777778) - *(float *)&_XMM4) * 360.0) * lerp) + *(float *)&v35, CharacterInfo);
  }
  if ( !Com_GameMode_SupportsFeature(WEAPON_MELEE) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 1411, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::ENTITY_GROUND_REF ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::ENTITY_GROUND_REF )") )
    __debugbreak();
  groundRefEnt = cgameGlob->predictedPlayerState.groundRefEnt;
  if ( groundRefEnt >= 0x800 )
  {
    LODWORD(v41) = cgameGlob->predictedPlayerState.groundRefEnt;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 1413, ASSERT_TYPE_ASSERT, "(unsigned)( groundRefEnt ) < (unsigned)( ( 2048 ) )", "groundRefEnt doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v41, 2048) )
      __debugbreak();
  }
  if ( groundRefEnt == 2047 || (Handler = CgHandler::getHandler(cgameGlob->localClientNum), !Handler->GetEntityAngles(Handler, groundRefEnt, &angles)) )
  {
    p_angles = &cent->pose.angles;
    p_playerAngles = &CharacterInfo->playerAngles;
    CharacterInfo->playerAngles.v[0] = cent->pose.angles.v[0];
    CharacterInfo->playerAngles.v[1] = cent->pose.angles.v[1];
    CharacterInfo->playerAngles.v[2] = cent->pose.angles.v[2];
  }
  else
  {
    AnglesToAxis(&angles, &axis);
    p_angles = &cent->pose.angles;
    AnglesToAxis(&cent->pose.angles, &in1);
    MatrixMultiply(&in1, &axis, &out);
    p_playerAngles = &CharacterInfo->playerAngles;
    AxisToAngles(&out, &CharacterInfo->playerAngles);
  }
  CG_PlayersMP_ApplyWorldUp(cent, lerp, p_playerAngles, &CharacterInfo->playerAnglesWorld);
  if ( !CharacterInfo->usingAnimState )
  {
    p_angles->v[0] = 0.0;
    cent->pose.angles.v[2] = 0.0;
  }
  CG_PlayersMP_ApplyWorldUp(cent, lerp, p_angles, p_angles);
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
  unsigned __int16 v2; 
  centity_t *Entity; 
  const dvar_t *v4; 
  CgStatic *LocalClientStatics; 
  __int64 clientNum; 
  cg_t *LocalClientGlobals; 
  const characterInfo_t *CharacterInfo; 
  const dvar_t *v9; 
  int integer; 
  float v11; 
  const char *v12; 
  __int64 duration; 
  __int64 v14; 
  vec3_t outOrigin; 

  if ( *(_DWORD *)cmd >= 2u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 4602, ASSERT_TYPE_ASSERT, "(unsigned)( visCmd->localClientNum ) < (unsigned)( ( sizeof( *array_counter( s_weaponVisEnt ) ) + 0 ) )", "visCmd->localClientNum doesn't index s_weaponVisEnt\n\t%i not in [0, %i)", *(_DWORD *)cmd, 2) )
    __debugbreak();
  v2 = *((_WORD *)cmd + 2);
  if ( v2 >= 0x7FEu )
  {
    LODWORD(v14) = 2046;
    LODWORD(duration) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 4603, ASSERT_TYPE_ASSERT, "(unsigned)( visCmd->entNum ) < (unsigned)( ENTITYNUM_ORDINARY_END )", "visCmd->entNum doesn't index ENTITYNUM_ORDINARY_END\n\t%i not in [0, %i)", duration, v14) )
      __debugbreak();
  }
  Entity = CG_GetEntity((const LocalClientNum_t)*(_DWORD *)cmd, *((unsigned __int16 *)cmd + 2));
  if ( !Entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 4606, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( Entity->pose.cullIn == 2 )
  {
    CG_WeaponVisibility_Update(*(const LocalClientNum_t *)cmd, Entity);
    v4 = DVARBOOL_cg_drawWVisDebug;
    if ( !DVARBOOL_cg_drawWVisDebug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawWVisDebug") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v4);
    if ( v4->current.enabled )
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
          LODWORD(v14) = LocalClientGlobals[1].predictedPlayerState.rxvOmnvars[64].timeModified;
          LODWORD(duration) = clientNum;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_globals_mp_inline.h", 19, ASSERT_TYPE_ASSERT, "(unsigned)( characterIndex ) < (unsigned)( static_cast<int>( m_characterInfoCount ) )", "characterIndex doesn't index static_cast<int>( m_characterInfoCount )\n\t%i not in [0, %i)", duration, v14) )
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
      v9 = DVARINT_cg_weaponVisInterval;
      if ( !DVARINT_cg_weaponVisInterval && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_weaponVisInterval") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v9);
      integer = v9->current.integer;
      v11 = fontSize;
      v12 = j_va("Ent %i: heldOccluded %i, stowedOccluded %i", (unsigned int)Entity->nextState.number, CharacterInfo->heldWeaponOccluded, CharacterInfo->stowedWeaponOccluded);
      CG_DebugStarWithText(&outOrigin, &colorRed, &colorRed, v12, v11, integer);
      memset(&outOrigin, 0, sizeof(outOrigin));
    }
  }
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
  CgGlobalsMP *LocalClientGlobals; 
  const ObfuscateErrorText *v3; 
  __int64 v4; 
  unsigned __int16 v5; 
  int v6; 
  unsigned __int16 v7; 
  CgCharacterAnimUpdateInfo *v8; 
  CgEntitySystem *v9; 
  __int64 v10; 
  CgEventLodFOV fovLod; 
  int v12; 
  CgEventLodEventTypeBits *p_eventTypeDisabledOverride; 
  __int64 evaluateTrajectory; 
  CgCharacterAnimUpdateInfo *outCharacterPriority; 
  __int64 v16; 
  vec3_t outOrg; 
  __int64 v18; 
  vec3_t viewDir; 

  v18 = -2i64;
  v1 = localClientNum;
  LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals(localClientNum);
  v3 = &queryFormat;
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 923, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
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
    RefdefView_GetOrg(&LocalClientGlobals->refdef.view, &outOrg);
    viewDir = LocalClientGlobals->refdef.view.axis.m[0];
    v4 = 3i64;
    do
    {
      *(_QWORD *)LocalClientGlobals->m_playerOrderDistanceSortedIndexMasks[0].array = 0i64;
      *(_QWORD *)&LocalClientGlobals->m_playerOrderDistanceSortedIndexMasks[0].array[2] = 0i64;
      *(_QWORD *)&LocalClientGlobals->m_playerOrderDistanceSortedIndexMasks[0].array[4] = 0i64;
      LocalClientGlobals->m_playerOrderDistanceSortedIndexMasks[0].array[6] = 0;
      --v4;
    }
    while ( v4 );
    v5 = 0;
    if ( LocalClientGlobals->m_playerOrderDistanceSortedCount )
    {
      v6 = 0;
      do
      {
        if ( v5 >= 0xF8u )
        {
          LODWORD(outCharacterPriority) = 248;
          LODWORD(evaluateTrajectory) = v6;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 949, ASSERT_TYPE_ASSERT, "(unsigned)( sortedCharacterIndex ) < (unsigned)( ( sizeof( *array_counter( cgameGlob->m_playerOrderDistanceSortedIndex ) ) + 0 ) )", "sortedCharacterIndex doesn't index cgameGlob->m_playerOrderDistanceSortedIndex\n\t%i not in [0, %i)", evaluateTrajectory, outCharacterPriority) )
            __debugbreak();
        }
        v7 = LocalClientGlobals->m_playerOrderDistanceSortedIndex[v5];
        if ( v7 >= 0xF8u )
        {
          LODWORD(outCharacterPriority) = 248;
          LODWORD(evaluateTrajectory) = v7;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 952, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( ( sizeof( *array_counter( cgameGlob->m_playerUpdateAnimInfo ) ) + 0 ) )", "clientNum doesn't index cgameGlob->m_playerUpdateAnimInfo\n\t%i not in [0, %i)", evaluateTrajectory, outCharacterPriority) )
            __debugbreak();
        }
        v8 = &LocalClientGlobals->m_playerUpdateAnimInfo[v7];
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
        v9 = CgEntitySystem::ms_entitySystemArray[v1];
        if ( v7 >= 0x800u )
        {
          LODWORD(outCharacterPriority) = 2048;
          LODWORD(evaluateTrajectory) = v7;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", evaluateTrajectory, outCharacterPriority) )
            __debugbreak();
        }
        v10 = (__int64)&v9->m_entities[v7];
        if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 956, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
          __debugbreak();
        if ( (*(_BYTE *)(v10 + 648) & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 957, ASSERT_TYPE_ASSERT, "(CENextValid( cent ))", (const char *)&queryFormat, "CENextValid( cent )") )
          __debugbreak();
        *(_QWORD *)&v8->eventLodData.distanceLod = 0i64;
        *(_QWORD *)&LocalClientGlobals->m_playerUpdateAnimInfo[v7].eventLodData.cosAngleFromLookAt = 0i64;
        fovLod = LocalClientGlobals->m_playerUpdateAnimInfo[v7].eventLodData.fovLod;
        if ( fovLod )
        {
          LODWORD(v16) = (unsigned __int8)fovLod;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_event_mp.h", 54, ASSERT_TYPE_ASSERT, "( outData.fovLod ) == ( CG_EVENT_LOD_NARROW_FOV )", "%s == %s\n\t%u, %u", "outData.fovLod", "CG_EVENT_LOD_NARROW_FOV", v16, 0i64) )
            __debugbreak();
        }
        v12 = 0;
        p_eventTypeDisabledOverride = &LocalClientGlobals->m_playerUpdateAnimInfo[v7].eventLodData.eventTypeDisabledOverride;
        while ( !p_eventTypeDisabledOverride->array[0] )
        {
          ++v12;
          ++p_eventTypeDisabledOverride;
          if ( v12 )
            goto LABEL_44;
        }
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_event_mp.h", 55, ASSERT_TYPE_ASSERT, "(outData.eventTypeDisabledOverride.noBitsOn())", (const char *)&queryFormat, "outData.eventTypeDisabledOverride.noBitsOn()") )
          __debugbreak();
LABEL_44:
        CG_PlayersMP_ComputePlayerDistanceAndFOV((const LocalClientNum_t)v1, (const centity_t *)v10, &outOrg, &viewDir, LocalClientGlobals->time, 1, v8);
        CG_EventMP_FinalizeEventLodData(&v8->eventLodData);
        CG_PlayersMP_UpdateDistanceSortedIndexMasks((const LocalClientNum_t)v1, v7, v5++, v8, LocalClientGlobals);
        v6 = v5;
      }
      while ( v5 < LocalClientGlobals->m_playerOrderDistanceSortedCount );
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
  CgGlobalsMP *LocalClientGlobals; 
  unsigned __int16 v5; 
  unsigned __int16 v6; 
  __int64 v7; 
  const dvar_t *v8; 
  const dvar_t *v9; 
  __int64 v10; 
  clientState_t *clients; 
  __int64 clientIndex; 
  CgEntitySystem *v13; 
  __int64 v14; 
  __int64 v15; 
  __int64 v16; 
  CgEventLodFOV fovLod; 
  int v18; 
  _DWORD *v19; 
  unsigned int v20; 
  CgEventLod v21; 
  unsigned __int16 *v22; 
  unsigned __int16 v23; 
  const CgCharacterAnimUpdateInfo *v24; 
  unsigned __int16 v25; 
  LocalClientNum_t v26; 
  __int64 evaluateTrajectory; 
  CgCharacterAnimUpdateInfo *outCharacterPriority; 
  __int64 v29; 
  int v31; 
  vec3_t outOrg; 
  __int64 v33; 
  vec3_t viewDir; 
  unsigned __int16 _First[200]; 

  v33 = -2i64;
  v3 = localClientNum;
  if ( !nextSnap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 830, ASSERT_TYPE_ASSERT, "(nextSnap)", (const char *)&queryFormat, "nextSnap") )
    __debugbreak();
  LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals((const LocalClientNum_t)v3);
  v5 = 0;
  v6 = 0;
  memset_0(LocalClientGlobals->m_playerOrderLookupDistancePriority, 255, sizeof(LocalClientGlobals->m_playerOrderLookupDistancePriority));
  DebugWipe(LocalClientGlobals->m_playerOrderDistanceSortedIndex, 0x1F0ui64);
  DebugWipe(LocalClientGlobals->m_playerOrderDistanceSortedDistanceLodStartIndex, 0xEui64);
  v7 = 3i64;
  do
  {
    *(_QWORD *)LocalClientGlobals->m_playerOrderDistanceSortedIndexMasks[0].array = 0i64;
    *(_QWORD *)&LocalClientGlobals->m_playerOrderDistanceSortedIndexMasks[0].array[2] = 0i64;
    *(_QWORD *)&LocalClientGlobals->m_playerOrderDistanceSortedIndexMasks[0].array[4] = 0i64;
    LocalClientGlobals->m_playerOrderDistanceSortedIndexMasks[0].array[6] = 0;
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
    RefdefView_GetOrg(&LocalClientGlobals->refdef.view, &outOrg);
    viewDir = LocalClientGlobals->refdef.view.axis.m[0];
    if ( nextSnap->numClients > 0xC8u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 859, ASSERT_TYPE_ASSERT, "( nextSnap->numClients ) <= ( ( sizeof( *array_counter( playerPrioritiesCharacterIndex ) ) + 0 ) )", "%s <= %s\n\t%i, %i", "nextSnap->numClients", "ARRAY_COUNT( playerPrioritiesCharacterIndex )", nextSnap->numClients, 200) )
      __debugbreak();
    v31 = 0;
    if ( nextSnap->numClients > 0 )
    {
      v10 = v3;
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
        if ( !CgEntitySystem::ms_entitySystemArray[v10] )
        {
          LODWORD(outCharacterPriority) = v3;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 290, ASSERT_TYPE_ASSERT, "(ms_entitySystemArray[localClientNum])", "%s\n\tTrying to access unallocated entity system for localClientNum %d\n", "ms_entitySystemArray[localClientNum]", outCharacterPriority) )
            __debugbreak();
        }
        v13 = CgEntitySystem::ms_entitySystemArray[v10];
        if ( (unsigned int)clientIndex >= 0x800 )
        {
          LODWORD(outCharacterPriority) = 2048;
          LODWORD(evaluateTrajectory) = clientIndex;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", evaluateTrajectory, outCharacterPriority) )
            __debugbreak();
        }
        v14 = (__int64)&v13->m_entities[clientIndex];
        if ( (*(_BYTE *)(v14 + 648) & 1) != 0 && *(_WORD *)(v14 + 408) == 1 )
        {
          if ( clients->clientIndex >= 0xF8u )
          {
            LODWORD(outCharacterPriority) = 248;
            LODWORD(evaluateTrajectory) = clients->clientIndex;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 871, ASSERT_TYPE_ASSERT, "(unsigned)( clientState->clientIndex ) < (unsigned)( ( sizeof( *array_counter( cgameGlob->m_playerUpdateAnimInfo ) ) + 0 ) )", "clientState->clientIndex doesn't index cgameGlob->m_playerUpdateAnimInfo\n\t%i not in [0, %i)", evaluateTrajectory, outCharacterPriority) )
              __debugbreak();
          }
          v15 = clients->clientIndex;
          v16 = (__int64)&LocalClientGlobals->m_playerUpdateAnimInfo[v15];
          *(_QWORD *)v16 = 0i64;
          *(_QWORD *)(v16 + 8) = 0i64;
          fovLod = LocalClientGlobals->m_playerUpdateAnimInfo[v15].eventLodData.fovLod;
          if ( fovLod )
          {
            LODWORD(v29) = (unsigned __int8)fovLod;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_event_mp.h", 54, ASSERT_TYPE_ASSERT, "( outData.fovLod ) == ( CG_EVENT_LOD_NARROW_FOV )", "%s == %s\n\t%u, %u", "outData.fovLod", "CG_EVENT_LOD_NARROW_FOV", v29, 0i64) )
              __debugbreak();
          }
          v18 = 0;
          v19 = (_DWORD *)(v16 + 12);
          while ( !*v19 )
          {
            ++v18;
            ++v19;
            if ( v18 )
              goto LABEL_48;
          }
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_event_mp.h", 55, ASSERT_TYPE_ASSERT, "(outData.eventTypeDisabledOverride.noBitsOn())", (const char *)&queryFormat, "outData.eventTypeDisabledOverride.noBitsOn()") )
            __debugbreak();
LABEL_48:
          CG_PlayersMP_ComputePlayerDistanceAndFOV((const LocalClientNum_t)v3, (const centity_t *)v14, &outOrg, &viewDir, LocalClientGlobals->time, 1, (CgCharacterAnimUpdateInfo *)v16);
          CG_EventMP_FinalizeEventLodData((CgEventLodData *)v16);
          v20 = clients->clientIndex;
          if ( (clients->clientIndex < 0 || v20 > 0xFFFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,int>(int)", "unsigned", (unsigned __int16)v20, "signed", (int)v20) )
            __debugbreak();
          _First[v6++] = v20;
        }
        ++v31;
        ++clients;
        v10 = v3;
      }
      while ( v31 < nextSnap->numClients );
    }
    std::_Sort_unchecked<unsigned short *,CgPlayersMPSortFunctor>(_First, &_First[v6], v6, (CgPlayersMPSortFunctor)LocalClientGlobals);
    v21 = CG_EVENT_LOD_FULL_RES;
    LocalClientGlobals->m_playerOrderDistanceSortedDistanceLodStartIndex[0] = 0;
    if ( !v6 )
      goto LABEL_76;
    v22 = _First;
    do
    {
      v23 = *v22;
      if ( *v22 >= 0xF8u )
      {
        LODWORD(outCharacterPriority) = 248;
        LODWORD(evaluateTrajectory) = v23;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 891, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( ( sizeof( *array_counter( cgameGlob->m_playerOrderLookupDistancePriority ) ) + 0 ) )", "clientNum doesn't index cgameGlob->m_playerOrderLookupDistancePriority\n\t%i not in [0, %i)", evaluateTrajectory, outCharacterPriority) )
          __debugbreak();
      }
      v24 = &LocalClientGlobals->m_playerUpdateAnimInfo[v23];
      *(unsigned __int16 *)((char *)v22 + (char *)LocalClientGlobals - (char *)_First + 812760) = v23;
      LocalClientGlobals->m_playerOrderLookupDistancePriority[v23] = v5;
      v25 = v23;
      v26 = localClientNum;
      CG_PlayersMP_UpdateDistanceSortedIndexMasks(localClientNum, v25, v5, v24, LocalClientGlobals);
      if ( (unsigned __int8)v21 < (unsigned int)v24->eventLodData.distanceLod )
      {
        do
        {
          if ( (unsigned __int8)++v21 >= (CG_EVENT_LOD_COUNT|CG_EVENT_LOD0) )
          {
            LODWORD(outCharacterPriority) = 7;
            LODWORD(evaluateTrajectory) = (unsigned __int8)v21;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 902, ASSERT_TYPE_ASSERT, "(unsigned)( currentDistanceLod ) < (unsigned)( ( sizeof( *array_counter( cgameGlob->m_playerOrderDistanceSortedDistanceLodStartIndex ) ) + 0 ) )", "currentDistanceLod doesn't index cgameGlob->m_playerOrderDistanceSortedDistanceLodStartIndex\n\t%i not in [0, %i)", evaluateTrajectory, outCharacterPriority) )
              __debugbreak();
          }
          LocalClientGlobals->m_playerOrderDistanceSortedDistanceLodStartIndex[(unsigned __int8)v21] = v5;
        }
        while ( (unsigned __int8)v21 < (unsigned int)v24->eventLodData.distanceLod );
        v26 = localClientNum;
      }
      ++v5;
      ++v22;
    }
    while ( v5 < v6 );
    if ( (unsigned __int8)v21 < CG_EVENT_LOD_COUNT )
    {
LABEL_76:
      do
      {
        if ( (unsigned __int8)++v21 >= (CG_EVENT_LOD_COUNT|CG_EVENT_LOD0) )
        {
          LODWORD(outCharacterPriority) = 7;
          LODWORD(evaluateTrajectory) = (unsigned __int8)v21;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 909, ASSERT_TYPE_ASSERT, "(unsigned)( currentDistanceLod ) < (unsigned)( ( sizeof( *array_counter( cgameGlob->m_playerOrderDistanceSortedDistanceLodStartIndex ) ) + 0 ) )", "currentDistanceLod doesn't index cgameGlob->m_playerOrderDistanceSortedDistanceLodStartIndex\n\t%i not in [0, %i)", evaluateTrajectory, outCharacterPriority) )
            __debugbreak();
        }
        LocalClientGlobals->m_playerOrderDistanceSortedDistanceLodStartIndex[(unsigned __int8)v21] = v6;
      }
      while ( (unsigned __int8)v21 < CG_EVENT_LOD_COUNT );
      v26 = localClientNum;
    }
    s_perSnapshotPriorityUpdateDoneThisFrame[v26] = 1;
    memset(&outOrg, 0, sizeof(outOrg));
  }
  LocalClientGlobals->m_playerOrderDistanceSortedCount = v6;
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
  __int64 v8; 
  bool dobjUsingExecutionProp; 
  unsigned int eType; 
  bool usingExecutionProp; 
  int v13; 
  entityType_s v14; 
  unsigned int v15; 
  bool v16; 
  bool v17; 
  int v18; 
  XAnimTree *fmt; 
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

  v8 = localClientNum;
  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 3955, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( !es && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 3956, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  if ( s_weaponVisActive[v8] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 3957, ASSERT_TYPE_ASSERT, "(!CG_PlayersMP_IsWeaponVisibilityTestActive( localClientNum ))", (const char *)&queryFormat, "!CG_PlayersMP_IsWeaponVisibilityTestActive( localClientNum )") )
    __debugbreak();
  BG_GetCharacterWeapons(weaponMap, es, ci, &r_heldWeapon, &r_thrownWeapon, &r_stowedWeapon, &weapon, &r_accessoryWeapon, &r_turretWeapon);
  if ( !ci->pXAnimTree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 3967, ASSERT_TYPE_ASSERT, "(ci->pXAnimTree)", (const char *)&queryFormat, "ci->pXAnimTree") )
    __debugbreak();
  if ( ci->animTreeDirty )
  {
    if ( obj )
      XAnimClearTreeGoalWeights(ci->pXAnimTree, 0, XANIM_SUBTREE_DEFAULT, 0, 0.0, 1, obj, LINEAR);
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
  v13 = 131111;
  outIsExecutionVictim = 0;
  outIsUsingExecutionProp = 0;
  if ( (unsigned __int16)eType <= 0x11u && _bittest(&v13, eType) )
  {
    BG_GetExecutionFlags(es->lerp.u.player.playerFlags, outIsExecutionAttacker, &outIsExecutionVictim, &outIsUsingExecutionProp);
    usingExecutionProp = outIsUsingExecutionProp;
  }
  if ( BG_AnimationMP_IsCharacterDObjDirty(obj, &ci->replicatedPartBits, ci, &r_heldWeapon, &r_stowedWeapon, &r_thrownWeapon, &weapon, &r_accessoryWeapon, (es->lerp.u.player.playerFlags & 0x80) != 0, usingExecutionProp, !ci->dobjForceCheckWeaponModelLoaded) )
  {
    CG_Execution_CheckShowHideEffects((LocalClientNum_t)v8, es->clientNum, ci, obj, &ci->dobjExecutionWeapon, MOVEMENT, dobjUsingExecutionProp, usingExecutionProp);
    CG_Entity_StowClothForDObjRebuild((const LocalClientNum_t)v8, es->clientNum);
    BG_UpdateCharacterDObj((LocalClientNum_t)v8, obj, es, ci, 0, &r_heldWeapon, &r_stowedWeapon, &r_thrownWeapon, &weapon, &r_accessoryWeapon, &r_turretWeapon, 1);
    obj = Com_GetClientDObj(es->clientNum, (LocalClientNum_t)v8);
    CG_Execution_CheckShowHideEffects((LocalClientNum_t)v8, es->clientNum, ci, obj, &weapon, DODGE, dobjUsingExecutionProp, usingExecutionProp);
    CG_Entity_DestroyStowedCloth((const LocalClientNum_t)v8, es->clientNum);
    if ( !obj )
      return;
    if ( r_heldWeapon.weaponIdx )
    {
      modelTypesToApply[0] = CHAR_MODEL_WEAPON_HELD;
      modelTypesToApply[1] = CHAR_MODEL_WEAPON_HELD_LEFT;
      stickerSlots = *CG_Weapons_BuildStickerSlotList(&result, (const LocalClientNum_t)v8, modelTypesToApply, 2, &r_heldWeapon);
      DObjSetStickerMaterialOverrides(obj, ci->dobjModelTypes, &stickerSlots);
    }
    if ( r_stowedWeapon.weaponIdx )
    {
      modelTypesToApply[0] = CHAR_MODEL_WEAPON_STOWED;
      stickerSlots = *CG_Weapons_BuildStickerSlotList(&result, (const LocalClientNum_t)v8, modelTypesToApply, 1, &r_stowedWeapon);
      DObjSetStickerMaterialOverrides(obj, ci->dobjModelTypes, &stickerSlots);
    }
    if ( weapon.weaponIdx )
    {
      modelTypesToApply[0] = CHAR_MODEL_WEAPON_EXECUTION;
      stickerSlots = *CG_Weapons_BuildStickerSlotList(&result, (const LocalClientNum_t)v8, modelTypesToApply, 1, &weapon);
      DObjSetStickerMaterialOverrides(obj, ci->dobjModelTypes, &stickerSlots);
    }
    BG_Player_SetPlayerInfo(obj, &ci->control, (CEntPlayerInfo *)&cent->pose.160);
    XAnimBonePhysicsSetSettlingEnabled(obj, 0);
  }
  fmt = ci->pXAnimTree;
  ci->dobjForceCheckWeaponModelLoaded = 0;
  BG_PlayerMP_SetWeaponPackageAnims(&r_heldWeapon, &weapon, ci, es, fmt);
  if ( Com_GameMode_SupportsFeature(WEAPON_LADDER_CLIMB|0x80) )
  {
    v14 = es->eType;
    if ( ((v14 - 1) & 0xFFEE) == 0 && v14 != ET_AGENT_CORPSE )
    {
      if ( cent == (centity_t *)-288i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 667, ASSERT_TYPE_ASSERT, "(prevLerpState)", (const char *)&queryFormat, "prevLerpState") )
        __debugbreak();
      if ( cent == (centity_t *)-400i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 668, ASSERT_TYPE_ASSERT, "(nextState)", (const char *)&queryFormat, "nextState") )
        __debugbreak();
      outIsExecutionAttacker[0] = 0;
      if ( cent == (centity_t *)-400i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 595, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
        __debugbreak();
      v15 = (unsigned __int16)cent->nextState.eType;
      v16 = 0;
      v17 = 0;
      outIsUsingExecutionProp = 0;
      outIsExecutionVictim = 0;
      if ( (unsigned __int16)v15 <= 0x11u )
      {
        v18 = 131111;
        if ( _bittest(&v18, v15) )
        {
          BG_GetExecutionFlags(cent->nextState.lerp.u.player.playerFlags, &outIsUsingExecutionProp, &outIsExecutionVictim, outIsExecutionAttacker);
          v16 = outIsUsingExecutionProp;
          v17 = outIsExecutionVictim;
        }
      }
      if ( (((unsigned __int16)cent->prevState.u.player.playerFlags >> 5) & 3) != 1 && (((unsigned __int16)cent->prevState.u.player.playerFlags >> 5) & 3) != 2 && (((unsigned __int16)cent->prevState.u.player.playerFlags >> 5) & 3) != 3 && (v16 || v17) )
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
  DObjPartBits *p_preCacheAnimBones; 
  entityType_s *p_eType; 
  __int64 v21; 
  CgEntitySystem *v22; 
  __int64 v23; 
  __int64 v24; 
  bool enabled; 
  unsigned int pos; 
  int clientNum; 
  CgEventSystemMP *v28; 
  CgGlobalsMP *LocalClientGlobals; 
  CgPlayerEventInventory inventory; 
  __int128 v32; 

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
    LODWORD(v24) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.h", 235, ASSERT_TYPE_ASSERT, "(ms_allocatedType == SubSystem::EVENT_SYSTEM_TYPE)", "%s\n\tTrying to access the event system for localClientNum %d but the event system type does not match-> System Type:%d  Allocated Type:%d\n", "ms_allocatedType == SubSystem::EVENT_SYSTEM_TYPE", v24, 2, (unsigned __int8)CgEventSystem::ms_allocatedType) )
      __debugbreak();
  }
  if ( (unsigned int)v3 >= CgEventSystem::ms_allocatedCount )
  {
    LODWORD(v24) = CgEventSystem::ms_allocatedCount;
    LODWORD(v23) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.h", 236, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v23, v24) )
      __debugbreak();
  }
  v7 = v3;
  if ( !CgEventSystem::ms_eventSystemArray[v3] )
  {
    LODWORD(v24) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.h", 237, ASSERT_TYPE_ASSERT, "(ms_eventSystemArray[localClientNum])", "%s\n\tTrying to access unallocated event system for localClientNum %d\n", "ms_eventSystemArray[localClientNum]", v24) )
      __debugbreak();
  }
  v8 = (CgEventSystemMP *)CgEventSystem::ms_eventSystemArray[v7];
  v28 = v8;
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
    v32 = _XMM6;
    pos = 0;
    __asm { vpxor   xmm6, xmm6, xmm6 }
    do
    {
      if ( v10 >= 0xF8u )
      {
        LODWORD(v24) = 248;
        LODWORD(v23) = v11;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 1291, ASSERT_TYPE_ASSERT, "(unsigned)( sortedCharacterIndex ) < (unsigned)( ( sizeof( *array_counter( cgameGlob->m_playerOrderDistanceSortedIndex ) ) + 0 ) )", "sortedCharacterIndex doesn't index cgameGlob->m_playerOrderDistanceSortedIndex\n\t%i not in [0, %i)", v23, v24) )
          __debugbreak();
      }
      v13 = v5->m_playerOrderDistanceSortedIndex[v10];
      if ( v13 >= 0xF8u )
      {
        LODWORD(v24) = 248;
        LODWORD(v23) = v13;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 1294, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( ( sizeof( *array_counter( cgameGlob->m_playerUpdateAnimInfo ) ) + 0 ) )", "clientNum doesn't index cgameGlob->m_playerUpdateAnimInfo\n\t%i not in [0, %i)", v23, v24) )
          __debugbreak();
      }
      v14 = v13;
      v15 = &v5->m_playerUpdateAnimInfo[v13];
      if ( !(_BYTE)CgEntitySystem::ms_allocatedType )
      {
        LODWORD(v24) = v3;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 288, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the entity system for localClientNum %d but the entity system type is not known\n", "ms_allocatedType != GameModeType::NONE", v24) )
          __debugbreak();
      }
      if ( (unsigned int)v3 >= CgEntitySystem::ms_allocatedCount )
      {
        LODWORD(v24) = CgEntitySystem::ms_allocatedCount;
        LODWORD(v23) = v3;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 289, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v23, v24) )
          __debugbreak();
      }
      if ( !CgEntitySystem::ms_entitySystemArray[v7] )
      {
        LODWORD(v24) = v3;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 290, ASSERT_TYPE_ASSERT, "(ms_entitySystemArray[localClientNum])", "%s\n\tTrying to access unallocated entity system for localClientNum %d\n", "ms_entitySystemArray[localClientNum]", v24) )
          __debugbreak();
      }
      v16 = CgEntitySystem::ms_entitySystemArray[v7];
      if ( (unsigned int)v14 >= 0x800 )
      {
        LODWORD(v24) = 2048;
        LODWORD(v23) = v14;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", v23, v24) )
          __debugbreak();
      }
      v17 = &v16->m_entities[v14];
      if ( (CgEntitySystem *)((char *)v16 + 760 * v14) == (CgEntitySystem *)-16i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 1298, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
        __debugbreak();
      if ( (v16->m_entities[v14].flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 1299, ASSERT_TYPE_ASSERT, "(CENextValid( cent ))", (const char *)&queryFormat, "CENextValid( cent )") )
        __debugbreak();
      v18 = 0;
      p_preCacheAnimBones = &v15->preCacheAnimBones;
      do
      {
        *(_OWORD *)p_preCacheAnimBones->array = _XMM6;
        p_preCacheAnimBones = (DObjPartBits *)((char *)p_preCacheAnimBones + 16);
        ++v18;
      }
      while ( v18 < 2 );
      v9 = 0;
      v15->preCacheTagFlags = 0;
      if ( enabled && (_DWORD)v14 != clientNum )
      {
        if ( g_processEvents )
          CgEventSystemMP::InventoryNonLocalPlayerEntityEvents(v28, v17, v15, v10, &inventory);
        if ( !GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&v17->nextState.lerp.eFlags, ACTIVE, 0x11u) && (v17->flags & 0x14) != 0 && CG_EventLod_ShouldPerformEvent((const LocalClientNum_t)v3, CG_EVENT_LOD_TYPE_PLAYER_MUZZLE_FLASH_VFX, &v15->eventLodData) )
          bitarray_base<bitarray<224>>::setBit((bitarray_base<bitarray<224> > *)&inventory.inventoryEmpty[28 * (((v17->flags & 0x40) == 0) | 2i64) - 168], pos);
      }
      v5 = LocalClientGlobals;
      v7 = v3;
      v11 = ++v10;
      pos = v10;
    }
    while ( v10 < LocalClientGlobals->m_playerOrderDistanceSortedCount );
    v8 = v28;
    v4 = nextSnap;
  }
  if ( enabled )
  {
    if ( g_processEvents && v4->numEntities > 0 )
    {
      p_eType = &v4->entities[0].eType;
      do
      {
        v21 = *((__int16 *)p_eType - 4);
        if ( *p_eType >= ET_EVENTS )
        {
          if ( !(_BYTE)CgEntitySystem::ms_allocatedType )
          {
            LODWORD(v24) = v3;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 288, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the entity system for localClientNum %d but the entity system type is not known\n", "ms_allocatedType != GameModeType::NONE", v24) )
              __debugbreak();
          }
          if ( (unsigned int)v3 >= CgEntitySystem::ms_allocatedCount )
          {
            LODWORD(v24) = CgEntitySystem::ms_allocatedCount;
            LODWORD(v23) = v3;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 289, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v23, v24) )
              __debugbreak();
          }
          if ( !CgEntitySystem::ms_entitySystemArray[v7] )
          {
            LODWORD(v24) = v3;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 290, ASSERT_TYPE_ASSERT, "(ms_entitySystemArray[localClientNum])", "%s\n\tTrying to access unallocated entity system for localClientNum %d\n", "ms_entitySystemArray[localClientNum]", v24) )
              __debugbreak();
          }
          v22 = CgEntitySystem::ms_entitySystemArray[v7];
          if ( (unsigned int)v21 >= 0x800 )
          {
            LODWORD(v24) = 2048;
            LODWORD(v23) = v21;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", v23, v24) )
              __debugbreak();
          }
          CgEventSystemMP::InventoryStandaloneEvent(v8, &v22->m_entities[v21], &inventory);
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
char CG_WeaponVisibility_CalcTrace_Held(const centity_t *const cent, const characterInfo_t *const ci, const DObj *const obj, const WeaponDef *const weapDef, vec3_t *inOutStart, vec3_t *outEnd)
{
  XModel *worldModel; 
  int VisibilityBoneIndex; 
  unsigned __int8 v12; 
  bool v13; 
  float v14; 
  float v15; 
  float v16; 
  float v17; 
  __int64 iVisibilityAxis; 
  DObjAnimMat *baseMat; 
  float v21; 
  float v22; 
  float v23; 
  float v25; 
  float v26; 
  float v27; 
  float v28; 
  float *v29; 
  float v30; 
  float v31; 
  float v32; 
  float v33; 
  float v34; 
  bool *outUseWeaponTag; 
  bool *outUseWeaponTaga; 
  __int64 v38; 
  __int64 v39; 
  bool v40; 
  vec3_t outOrigin; 
  Bounds bounds; 
  tmat33_t<vec3_t> outTagMat; 

  if ( !weapDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 4233, ASSERT_TYPE_ASSERT, "(weapDef)", (const char *)&queryFormat, "weapDef") )
    __debugbreak();
  worldModel = weapDef->worldModel;
  v40 = 0;
  VisibilityBoneIndex = CG_Weapons_GetVisibilityBoneIndex(obj, ci, &ci->dobjHeldWeapon, 0, WEAPON_HAND_DEFAULT, &v40);
  v12 = truncate_cast<unsigned char,int>(VisibilityBoneIndex);
  if ( v12 != 0xFE && CG_DObjGetWorldBoneMatrix(&cent->pose, obj, v12, &outTagMat, &outOrigin) )
  {
    v13 = !v40;
    v14 = weapDef->fVisibilityUpOffset + inOutStart->v[2];
    v15 = outOrigin.v[2];
    inOutStart->v[2] = v14;
    v16 = v15 + weapDef->fVisibilityUpOffset;
    outOrigin.v[2] = v16;
    if ( !v13 )
    {
      v17 = outOrigin.v[1];
      _XMM6 = LODWORD(outOrigin.v[0]);
      if ( (float)((float)((float)((float)(outOrigin.v[1] - inOutStart->v[1]) * (float)(outOrigin.v[1] - inOutStart->v[1])) + (float)((float)(outOrigin.v[0] - inOutStart->v[0]) * (float)(outOrigin.v[0] - inOutStart->v[0]))) + (float)((float)(v16 - v14) * (float)(v16 - v14))) >= 1.0e-12 )
      {
        v22 = scale_1;
        v23 = outOrigin.v[2];
        __asm { vunpcklps xmm0, xmm6, xmm7 }
        *(double *)outEnd->v = *(double *)&_XMM0;
        outEnd->v[2] = v23;
        v25 = inOutStart->v[1] - v17;
        inOutStart->v[0] = (float)((float)(inOutStart->v[0] - *(float *)&_XMM6) * v22) + *(float *)&_XMM6;
        *(float *)&_XMM0 = v25 * v22;
        v26 = inOutStart->v[2];
        inOutStart->v[1] = *(float *)&_XMM0 + v17;
        inOutStart->v[2] = (float)((float)(v26 - v16) * v22) + v16;
        return 1;
      }
      v40 = 0;
    }
    if ( !worldModel && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xmodel_utils.h", 158, ASSERT_TYPE_ASSERT, "(model)", (const char *)&queryFormat, "model") )
      __debugbreak();
    iVisibilityAxis = weapDef->iVisibilityAxis;
    baseMat = worldModel->baseMat;
    if ( (unsigned int)iVisibilityAxis >= 3 )
    {
      LODWORD(outUseWeaponTag) = iVisibilityAxis;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 326, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( m ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( m )\n\t%i not in [0, %i)", outUseWeaponTag, 3) )
        __debugbreak();
    }
    XModelGetBounds(worldModel, &bounds);
    if ( worldModel->numsurfs )
    {
      if ( (unsigned int)iVisibilityAxis >= 3 )
      {
        LODWORD(v38) = 3;
        LODWORD(outUseWeaponTag) = iVisibilityAxis;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", outUseWeaponTag, v38) )
          __debugbreak();
      }
      v21 = bounds.halfSize.v[iVisibilityAxis] * 2.0;
    }
    else
    {
      v21 = 0.0;
    }
    v27 = v21 - 3.0;
    if ( (unsigned int)iVisibilityAxis >= 3 )
    {
      LODWORD(v38) = 3;
      LODWORD(outUseWeaponTag) = iVisibilityAxis;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", outUseWeaponTag, v38) )
        __debugbreak();
      LODWORD(v39) = 3;
      LODWORD(outUseWeaponTaga) = iVisibilityAxis;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 48, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", outUseWeaponTaga, v39) )
        __debugbreak();
    }
    v28 = bounds.midPoint.v[iVisibilityAxis] - bounds.halfSize.v[iVisibilityAxis];
    v29 = (float *)vec3_t::operator[](&baseMat->trans, iVisibilityAxis);
    v30 = outTagMat.m[iVisibilityAxis].v[1];
    v31 = outTagMat.m[iVisibilityAxis].v[2];
    v32 = v28 - *v29;
    v33 = outTagMat.m[iVisibilityAxis].v[0];
    v34 = (float)(v33 * v32) + outOrigin.v[0];
    inOutStart->v[1] = (float)(v30 * v32) + outOrigin.v[1];
    inOutStart->v[2] = (float)(v31 * v32) + outOrigin.v[2];
    inOutStart->v[0] = v34;
    outEnd->v[0] = (float)(v33 * v27) + v34;
    outEnd->v[1] = (float)(v30 * v27) + inOutStart->v[1];
    outEnd->v[2] = (float)(v31 * v27) + inOutStart->v[2];
    return 1;
  }
  return 0;
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
  const dvar_t *v10; 
  const dvar_t *v11; 
  const vec4_t *v12; 

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
    CG_DebugSphere(spineOrigin, radius_4, &colorBlue, 0, v9->current.integer);
    v10 = DVARINT_cg_weaponVisInterval;
    if ( !DVARINT_cg_weaponVisInterval && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_weaponVisInterval") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v10);
    CG_DebugSphere(weaponTipOrigin, radius_4, &colorBlue, 0, v10->current.integer);
    v11 = DVARINT_cg_weaponVisInterval;
    if ( !DVARINT_cg_weaponVisInterval && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_weaponVisInterval") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v11);
    v12 = &colorGreen;
    if ( v8 )
      v12 = &colorRed;
    CG_DebugLine(spineOrigin, weaponTipOrigin, v12, 0, v11->current.integer);
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
  float v5; 
  float v6; 
  float v7; 
  float v8; 
  float v9; 
  float v10; 
  float v11; 
  bool v12; 
  const dvar_t *v13; 
  const dvar_t *v14; 
  const dvar_t *v15; 
  const vec4_t *v16; 
  vec3_t end; 
  int v19[3]; 
  __int64 v20; 

  v20 = -2i64;
  end = *eyeOrigin;
  v5 = spineOrigin->v[0];
  *(float *)v19 = spineOrigin->v[0] - end.v[0];
  v6 = spineOrigin->v[1];
  v7 = v6 - end.v[1];
  *(float *)&v19[1] = v6 - end.v[1];
  v8 = spineOrigin->v[2];
  v9 = v8 - end.v[2];
  *(float *)&v19[2] = v8 - end.v[2];
  v10 = (float)((float)(v7 * v7) + (float)(*(float *)v19 * *(float *)v19)) + (float)(v9 * v9);
  if ( v10 > 65536.0 )
  {
    v11 = 1.0 / fsqrt(v10);
    end.v[0] = v5 - (float)((float)(v11 * *(float *)v19) * 256.0);
    end.v[1] = v6 - (float)((float)(v11 * v7) * 256.0);
    end.v[2] = v8 - (float)((float)(v11 * v9) * 256.0);
  }
  v12 = CG_WeaponVisibility_Trace_Internal(localClientNum, spineOrigin, &end, cent->nextState.number);
  v13 = DVARBOOL_cg_drawWVisDebug;
  if ( !DVARBOOL_cg_drawWVisDebug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawWVisDebug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v13);
  if ( v13->current.enabled )
  {
    v14 = DVARINT_cg_weaponVisInterval;
    if ( !DVARINT_cg_weaponVisInterval && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_weaponVisInterval") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v14);
    CG_DebugSphere(spineOrigin, radius_5, &colorBlue, 0, v14->current.integer);
    v15 = DVARINT_cg_weaponVisInterval;
    if ( !DVARINT_cg_weaponVisInterval && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_weaponVisInterval") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v15);
    v16 = &colorGreen;
    if ( v12 )
      v16 = &colorRed;
    CG_DebugLine(spineOrigin, &end, v16, 0, v15->current.integer);
  }
  memset(v19, 0, sizeof(v19));
  memset(&end, 0, sizeof(end));
  return v12;
}

/*
==============
CG_WeaponVisibility_Trace_Internal
==============
*/
_BOOL8 CG_WeaponVisibility_Trace_Internal(LocalClientNum_t localClientNum, const vec3_t *start, const vec3_t *end, const int ignoreEnt)
{
  __int32 v7; 
  bool v8; 
  hkMemoryAllocator *v9; 
  hkMemoryAllocator *v10; 
  Physics_RaycastExtendedData extendedData; 
  HavokPhysics_IgnoreBodies ignoreBodies; 
  __int64 v14; 
  PhysicsQuery_RaycastHit hit; 

  v14 = -2i64;
  v7 = 3 * localClientNum + 2;
  HavokPhysics_IgnoreBodies::HavokPhysics_IgnoreBodies(&ignoreBodies, 1, 0);
  HavokPhysics_IgnoreBodies::Reset(&ignoreBodies);
  PhysicsQuery_AddEntityChainToIgnoreList(ignoreEnt, &ignoreBodies, 1, 1, 0, 1, 1);
  extendedData.characterProxyType = PHYSICS_CHARACTERPROXY_TYPE_COLLISION;
  extendedData.collisionBuffer = 0.0;
  extendedData.phaseSelection = All;
  extendedData.insideHitType = Physics_RaycastInsideHitType_InsideHits;
  *(_WORD *)&extendedData.collectInsideHits = 256;
  extendedData.contents = 36865;
  extendedData.ignoreBodies = &ignoreBodies;
  PhysicsQuery_ImmediateRaycastClosest((Physics_WorldId)v7, start, end, &extendedData, &hit);
  v8 = hit.isValid && hit.fraction < 1.0 && hit.fraction > 0.001 && (hit.contents & 0x501) != 0;
  v9 = hkMemHeapAllocator();
  ignoreBodies.m_ignoreBodies.m_size = 0;
  if ( ignoreBodies.m_ignoreBodies.m_capacityAndFlags >= 0 )
    hkMemoryAllocator::bufFree2(v9, ignoreBodies.m_ignoreBodies.m_data, 4, ignoreBodies.m_ignoreBodies.m_capacityAndFlags & 0x3FFFFFFF);
  ignoreBodies.m_ignoreBodies.m_data = NULL;
  ignoreBodies.m_ignoreBodies.m_capacityAndFlags = 0x80000000;
  v10 = hkMemHeapAllocator();
  ignoreBodies.m_ignoreEntities.m_size = 0;
  if ( ignoreBodies.m_ignoreEntities.m_capacityAndFlags >= 0 )
    hkMemoryAllocator::bufFree2(v10, ignoreBodies.m_ignoreEntities.m_data, 8, ignoreBodies.m_ignoreEntities.m_capacityAndFlags & 0x3FFFFFFF);
  return v8;
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
  characterInfo_t *CharacterInfo; 
  const dvar_t *v8; 
  bool HasCandidateWeapon_Held; 
  bool HasCandidateWeapon_Stowed; 
  bool v11; 
  const DObj *ClientDObj; 
  CgGlobalsMP *v13; 
  char v14; 
  const WeaponDef *v15; 
  bool v16; 
  unsigned int v17; 
  unsigned int v18; 
  vec3_t *v19; 
  bool *p_lengthTrace; 
  __int64 v21; 
  bool v22; 
  signed int v23; 
  bool v24; 
  vec3_t *outEnd; 
  __int64 v26; 
  unsigned __int8 inOutIndex; 
  char v28; 
  vec3_t inOutStart; 
  vec3_t weaponTipOrigin; 
  int modelIndex; 
  vec3_t v32; 
  vec3_t outOrigin; 
  vec3_t outOrg; 
  characterInfo_t *v35; 
  __int64 v36; 
  tmat43_t<vec3_t> dst; 
  tmat33_t<vec3_t> src; 
  tmat33_t<vec3_t> outTagMat; 
  vec3_t ptr[6]; 

  v36 = -2i64;
  if ( (unsigned int)localClientNum >= LODWORD(cl_maxLocalClients) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 4448, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( (cl_maxLocalClients) )", "localClientNum doesn't index MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, cl_maxLocalClients) )
    __debugbreak();
  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 4449, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  LocalClientStatics = CgStatic::GetLocalClientStatics(localClientNum);
  clientNum = cent->nextState.clientNum;
  LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)LocalClientStatics->m_localClientNum);
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static_inline.h", 25, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  CharacterInfo = CG_GetCharacterInfo(LocalClientGlobals, clientNum);
  v35 = CharacterInfo;
  if ( !CharacterInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 4454, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
    __debugbreak();
  v8 = DVARBOOL_killswitch_weapon_visibility_client_hint_enabled;
  if ( !DVARBOOL_killswitch_weapon_visibility_client_hint_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "killswitch_weapon_visibility_client_hint_enabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v8);
  if ( (!v8->current.enabled || CharacterInfo->isNearEnvironmentCollision) && CharacterInfo->mountAnimation.fraction <= 0.0 && ((HasCandidateWeapon_Held = CG_WeaponVisibility_PlayerHasCandidateWeapon_Held(localClientNum, cent), HasCandidateWeapon_Stowed = CG_WeaponVisibility_PlayerHasCandidateWeapon_Stowed(localClientNum, cent, CharacterInfo), v11 = HasCandidateWeapon_Stowed, HasCandidateWeapon_Held) || HasCandidateWeapon_Stowed) )
  {
    ClientDObj = Com_GetClientDObj(cent->nextState.number, localClientNum);
    v13 = CgGlobalsMP::GetLocalClientGlobals(localClientNum);
    RefdefView_GetOrg(&v13->refdef.view, &outOrg);
    if ( ClientDObj && (inOutIndex = -2, DObjGetBoneIndexInternal_76(ClientDObj, scr_const.j_spine4, &inOutIndex, &modelIndex)) && inOutIndex != 0xFF && CG_DObjGetWorldBoneMatrix(&cent->pose, ClientDObj, inOutIndex, &outTagMat, &outOrigin) )
    {
      if ( v11 )
      {
        inOutIndex = -2;
        if ( !DObjGetBoneIndexInternal_76(ClientDObj, scr_const.tag_shield_back, &inOutIndex, &modelIndex) || inOutIndex == 0xFF || !CG_DObjGetWorldBoneMatrix(&cent->pose, ClientDObj, inOutIndex, &src, &v32) )
          v11 = 0;
      }
      inOutIndex = 0;
      v14 = 0;
      if ( HasCandidateWeapon_Held )
      {
        v15 = BG_WeaponDef(&CharacterInfo->dobjHeldWeapon, 0);
        inOutStart = outOrigin;
        if ( CG_WeaponVisibility_CalcTrace_Held(cent, CharacterInfo, ClientDObj, v15, &inOutStart, &weaponTipOrigin) )
        {
          if ( !CG_WeaponVisibility_Trace_HitAlongLength(localClientNum, cent, &inOutStart, &weaponTipOrigin) || (v16 = CG_WeaponVisibility_Trace_HitToEye(localClientNum, cent, &inOutStart, &outOrg), inOutIndex = 1, !v16) )
            inOutIndex = 0;
        }
        memset(&weaponTipOrigin, 0, sizeof(weaponTipOrigin));
        memset(&inOutStart, 0, sizeof(inOutStart));
      }
      if ( v11 )
      {
        MatrixCopy33(&src, (tmat33_t<vec3_t> *)&dst);
        dst.m[3] = v32;
        v17 = 0;
        `eh vector constructor iterator'(ptr, 0xCui64, 6ui64, (void (__fastcall *)(void *))SecureVec3::SecureVec3, (void (__fastcall *)(void *))SecureVec3::~SecureVec3);
        v28 = 0;
        v18 = 0;
        v19 = ptr;
        p_lengthTrace = &startEndOffsets[0].lengthTrace;
        do
        {
          v21 = (int)v18;
          MatrixTransformVector43(&startEndOffsets[v21].start, &dst, &weaponTipOrigin);
          if ( v17 >= 6 )
          {
            LODWORD(v26) = 6;
            LODWORD(outEnd) = v17;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 4545, ASSERT_TYPE_ASSERT, "(unsigned)( losCount ) < (unsigned)( ( sizeof( *array_counter( losOrigin ) ) + 0 ) )", "losCount doesn't index ARRAY_COUNT( losOrigin )\n\t%i not in [0, %i)", outEnd, v26) )
              __debugbreak();
          }
          *v19 = weaponTipOrigin;
          ++v17;
          ++v19;
          if ( *p_lengthTrace )
          {
            MatrixTransformVector43(&startEndOffsets[v21].end, &dst, &inOutStart);
            v22 = CG_WeaponVisibility_Trace_HitAlongLength(localClientNum, cent, &weaponTipOrigin, &inOutStart);
            v28 |= v22;
            if ( !v22 )
            {
              if ( v17 >= 6 )
              {
                LODWORD(v26) = 6;
                LODWORD(outEnd) = v17;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_players_mp.cpp", 4561, ASSERT_TYPE_ASSERT, "(unsigned)( losCount ) < (unsigned)( ( sizeof( *array_counter( losOrigin ) ) + 0 ) )", "losCount doesn't index ARRAY_COUNT( losOrigin )\n\t%i not in [0, %i)", outEnd, v26) )
                  __debugbreak();
              }
              *v19 = inOutStart;
              ++v17;
              ++v19;
            }
            memset(&inOutStart, 0, sizeof(inOutStart));
          }
          memset(&weaponTipOrigin, 0, sizeof(weaponTipOrigin));
          ++v18;
          p_lengthTrace += 28;
        }
        while ( v18 < 3 );
        v23 = 0;
        v14 = 0;
        if ( v28 )
        {
          v14 = 1;
          do
          {
            if ( v23 >= (int)v17 )
              break;
            v24 = CG_WeaponVisibility_Trace_HitToEye(localClientNum, cent, &ptr[v23++], &outOrg);
            v14 &= v24;
          }
          while ( v14 );
        }
        memset(&dst, 0, sizeof(dst));
        `eh vector destructor iterator'(ptr, 0xCui64, 6ui64, (void (__fastcall *)(void *))SecureVec3::~SecureVec3);
        CharacterInfo = v35;
      }
      CG_WeaponVisibility_SetOccluded(CharacterInfo, inOutIndex, v14);
      memset(&v32, 0, sizeof(v32));
    }
    else
    {
      CG_WeaponVisibility_SetOccluded(CharacterInfo, 0, 0);
    }
    memset(&outOrigin, 0, sizeof(outOrigin));
    memset(&outOrg, 0, sizeof(outOrg));
  }
  else
  {
    CG_WeaponVisibility_SetOccluded(CharacterInfo, 0, 0);
  }
}


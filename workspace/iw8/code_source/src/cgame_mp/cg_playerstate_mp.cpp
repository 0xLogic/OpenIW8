/*
==============
CG_PlayerStateMP_TransitionPlayerState
==============
*/

void __fastcall CG_PlayerStateMP_TransitionPlayerState(LocalClientNum_t localClientNum, const playerState_s *ps, const transPlayerState_t *ops)
{
  ?CG_PlayerStateMP_TransitionPlayerState@@YAXW4LocalClientNum_t@@PEBUplayerState_s@@PEBUtransPlayerState_t@@@Z(localClientNum, ps, ops);
}

/*
==============
CG_PlayerStateMP_ResetSpectatorViewAngles
==============
*/

void __fastcall CG_PlayerStateMP_ResetSpectatorViewAngles(LocalClientNum_t localClientNum)
{
  ?CG_PlayerStateMP_ResetSpectatorViewAngles@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_PlayerStateMP_Respawn
==============
*/

void __fastcall CG_PlayerStateMP_Respawn(LocalClientNum_t localClientNum, int spectate, int resetStance)
{
  ?CG_PlayerStateMP_Respawn@@YAXW4LocalClientNum_t@@HH@Z(localClientNum, spectate, resetStance);
}

/*
==============
CG_PlayerStateMP_Respawn_Internal
==============
*/

void __fastcall CG_PlayerStateMP_Respawn_Internal(const LocalClientNum_t localClientNum, int spectate, int resetStance)
{
  ?CG_PlayerStateMP_Respawn_Internal@@YAXW4LocalClientNum_t@@HH@Z(localClientNum, spectate, resetStance);
}

/*
==============
CG_PlayerStateMP_PainVisionDisable
==============
*/
void CG_PlayerStateMP_PainVisionDisable(cg_t *cgameGlob)
{
  if ( !cgameGlob )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_playerstate_mp.cpp", 112, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_playerstate_mp.cpp", 84, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
      __debugbreak();
  }
  if ( cgameGlob->painVisionSoundActive && (unsigned __int8)Com_GameMode_GetActiveGameMode() != LONG )
  {
    cgameGlob->painVisionSoundActive = 0;
    CG_ClearAudioOverride(LOCAL_CLIENT_0, CTAUD_OVERRIDE_PAINVISION, 2.0);
  }
  cgameGlob->cvsData.archived.painVisionActive = 0;
  cgameGlob->cvsData.archived.painVisionLerp = 0.0;
  CG_VisionSetSetBlendOff(&cgameGlob->cvsData, VISIONSET_BLENDTYPE_GAME);
}

/*
==============
CG_PlayerStateMP_PainVisionUpdate
==============
*/
void CG_PlayerStateMP_PainVisionUpdate(LocalClientNum_t localClientNum, const playerState_s *ps, const transPlayerState_t *ops)
{
  __int64 v5; 
  cg_t *v6; 
  float v7; 
  double v8; 
  float v9; 
  bool v10; 
  float v11; 
  float painVisionLerp; 
  bool v13; 
  const dvar_t *v14; 
  double Float_Internal_DebugName; 
  const dvar_t *v16; 
  __int64 v17; 
  __int64 v18; 

  v5 = localClientNum;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_playerstate_mp.cpp", 131, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !ops && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_playerstate_mp.cpp", 132, ASSERT_TYPE_ASSERT, "(ops)", (const char *)&queryFormat, "ops") )
    __debugbreak();
  if ( (unsigned int)v5 >= cg_t::ms_allocatedCount )
  {
    LODWORD(v17) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1166, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( cg_t::ms_allocatedCount )", "localClientNum doesn't index cg_t::ms_allocatedCount\n\t%i not in [0, %i)", v17, cg_t::ms_allocatedCount) )
      __debugbreak();
  }
  if ( !cg_t::ms_cgArray[v5] )
  {
    LODWORD(v18) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1167, ASSERT_TYPE_ASSERT, "(cg_t::ms_cgArray[localClientNum])", "%s\n\tTrying to access unallocated client globals for localClientNum %d\n", "cg_t::ms_cgArray[localClientNum]", v18) )
      __debugbreak();
  }
  if ( cg_t::ms_allocatedType == GLOB_TYPE_UNKNOWN )
  {
    LODWORD(v18) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1168, ASSERT_TYPE_ASSERT, "(cg_t::ms_allocatedType != CgGlobalsType::GLOB_TYPE_UNKNOWN)", "%s\n\tTrying to access client globals for localClientNum %d but the client global type is not known\n", "cg_t::ms_allocatedType != CgGlobalsType::GLOB_TYPE_UNKNOWN", v18) )
      __debugbreak();
  }
  v6 = cg_t::ms_cgArray[v5];
  v7 = (float)v6->frametime * 0.001;
  v8 = CG_PlayerState_CalcPlayerHealth((LocalClientNum_t)v5, ps);
  v9 = *(float *)&v8;
  v10 = *(float *)&v8 == 0.0 || ps->pm_type == 5 || GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagStrict(&ps->otherFlags, (POtherFlagsMP)33) && v6->renderingThirdPerson || GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&ps->otherFlags, ACTIVE, 1u) || (ps->linkFlags.m_flags[0] & 4) != 0 || ps->vehicleState.entity != 2047 || !GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&ps->otherFlags, ACTIVE, 0x19u);
  if ( CG_View_IsKillCamEntityView((const LocalClientNum_t)v5) || v10 )
  {
    CG_PlayerStateMP_PainVisionDisable(v6);
    return;
  }
  if ( !v6->cvsData.archived.painVisionActive )
  {
    v16 = DVARFLT_painVisionTriggerHealth;
    if ( !DVARFLT_painVisionTriggerHealth && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "painVisionTriggerHealth") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v16);
    if ( *(float *)&v8 > v16->current.value )
      goto LABEL_30;
LABEL_42:
    if ( !v6->painVisionSoundActive )
    {
      v6->painVisionSoundActive = 1;
      if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() != LONG )
        CG_SetAudioOverride(LOCAL_CLIENT_0, "painvision", CTAUD_OVERRIDE_PAINVISION, 1.0, 7);
    }
    v6->cvsData.archived.painVisionActive = 1;
    goto LABEL_31;
  }
  if ( *(float *)&v8 != 1.0 )
    goto LABEL_42;
LABEL_30:
  CG_PlayerStateMP_PainVisionDisable(v6);
LABEL_31:
  if ( v6->cvsData.archived.painVisionActive )
  {
    v11 = 1.0 - (float)((float)((float)(*(float *)&v8 * *(float *)&v8) * *(float *)&v8) * *(float *)&v8);
    painVisionLerp = v6->cvsData.archived.painVisionLerp;
    v13 = painVisionLerp < v11;
    if ( painVisionLerp > v11 )
    {
      v14 = DCONST_DVARMPFLT_painVisionLerpOutRate;
      if ( !DCONST_DVARMPFLT_painVisionLerpOutRate && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "painVisionLerpOutRate") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v14);
      if ( v14->current.value == 0.0 )
      {
        v6->cvsData.archived.painVisionLerp = v11;
        painVisionLerp = 1.0 - (float)((float)((float)(*(float *)&v8 * *(float *)&v8) * *(float *)&v8) * *(float *)&v8);
      }
      else
      {
        Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(DCONST_DVARMPFLT_painVisionLerpOutRate, "painVisionLerpOutRate");
        painVisionLerp = v6->cvsData.archived.painVisionLerp - (float)(*(float *)&Float_Internal_DebugName * v7);
        v6->cvsData.archived.painVisionLerp = painVisionLerp;
      }
      v13 = painVisionLerp < v11;
    }
    if ( v13 )
    {
      v6->cvsData.archived.painVisionLerp = v11;
      painVisionLerp = 1.0 - (float)((float)((float)(v9 * v9) * v9) * v9);
    }
    if ( painVisionLerp <= 0.0 )
    {
      CG_PlayerStateMP_PainVisionDisable(v6);
      painVisionLerp = v6->cvsData.archived.painVisionLerp;
    }
    CG_VisionSetSetBlendPush(&v6->cvsData, VISIONSET_BLENDTYPE_GAME, painVisionLerp);
  }
}

/*
==============
CG_PlayerStateMP_ResetSpectatorViewAngles
==============
*/
void CG_PlayerStateMP_ResetSpectatorViewAngles(LocalClientNum_t localClientNum)
{
  ClActiveClient *Client; 

  Client = ClActiveClient::GetClient(localClientNum);
  if ( !Client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_active_client.h", 225, ASSERT_TYPE_ASSERT, "(activeClient)", (const char *)&queryFormat, "activeClient") )
    __debugbreak();
  Client->clviewangles_aab += Client->clviewangles_set_aab;
  LODWORD(Client->clViewangles.clViewangles.v[0]) = (((_DWORD)Client + 428) ^ Client->clviewangles_aab) * ((((_DWORD)Client + 428) ^ Client->clviewangles_aab) + 2);
  LODWORD(Client->clViewangles.clViewangles.v[1]) = (((_DWORD)Client + 432) ^ Client->clviewangles_aab) * ((((_DWORD)Client + 432) ^ Client->clviewangles_aab) + 2);
  LODWORD(Client->clViewangles.clViewangles.v[2]) = (((_DWORD)Client + 436) ^ Client->clviewangles_aab) * ((((_DWORD)Client + 436) ^ Client->clviewangles_aab) + 2);
}

/*
==============
CG_PlayerStateMP_Respawn
==============
*/

void __fastcall CG_PlayerStateMP_Respawn(LocalClientNum_t localClientNum, int spectate, int resetStance)
{
  CG_PlayerStateMP_Respawn_Internal(localClientNum, spectate, resetStance);
}

/*
==============
CG_PlayerStateMP_Respawn_Internal
==============
*/
void CG_PlayerStateMP_Respawn_Internal(const LocalClientNum_t localClientNum, int spectate, int resetStance)
{
  __int64 v4; 
  CgGlobalsMP *LocalClientGlobals; 
  CgWeaponMap *v6; 
  const playerState_s *v7; 
  playerState_s *p_predictedPlayerState; 
  const ClActiveClient *Client; 
  int CmdNumber; 
  const ClActiveClient *v11; 
  __int64 v12; 
  usercmd_s *v13; 
  usercmd_s *p_cmd; 
  __int64 v15; 
  CgWeaponSystem *WeaponSystem; 
  const Weapon *Weapon; 
  const Weapon *OffHandWeaponForPlayer; 
  int EquippedWeaponIndex; 
  __int64 v20; 
  int v21; 
  const SuitDef *SuitDef; 
  StanceState v23; 
  __int64 v24; 
  const Weapon *v25; 
  ClActiveClient *v26; 
  int v27; 
  MovementAnimState *animMoveState; 
  const dvar_t *v29; 
  char *fmt; 
  __int64 v31; 
  __int64 v33; 
  const playerState_s *v34; 
  __int64 v35; 
  usercmd_s cmd; 

  v35 = -2i64;
  v4 = localClientNum;
  LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals(localClientNum);
  if ( !CgWeaponMap::ms_instance[v4] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
    __debugbreak();
  v6 = CgWeaponMap::ms_instance[v4];
  if ( !LocalClientGlobals->nextSnap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_playerstate_mp.cpp", 240, ASSERT_TYPE_ASSERT, "(cgameGlob->nextSnap)", (const char *)&queryFormat, "cgameGlob->nextSnap") )
    __debugbreak();
  if ( spectate )
    CG_PredictMP_SavePlayerState((LocalClientNum_t)v4);
  else
    CG_PredictMP_ClearSavedPlayerState((LocalClientNum_t)v4);
  v7 = LocalClientGlobals->nextSnap->GetPlayerState(LocalClientGlobals->nextSnap, (unsigned int)v4);
  v34 = v7;
  if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_playerstate_mp.cpp", 260, ASSERT_TYPE_ASSERT, "(nextPs)", (const char *)&queryFormat, "nextPs") )
    __debugbreak();
  p_predictedPlayerState = &LocalClientGlobals->predictedPlayerState;
  memcpy_0(&LocalClientGlobals->predictedPlayerState, v7, sizeof(LocalClientGlobals->predictedPlayerState));
  Client = ClActiveClient::GetClient((const LocalClientNum_t)v4);
  CmdNumber = ClActiveClient_GetCmdNumber(Client);
  v11 = ClActiveClient::GetClient((const LocalClientNum_t)v4);
  v12 = (unsigned int)ClActiveClient_GetCmdNumber(v11);
  v33 = v12;
  if ( CmdNumber > (int)v12 )
  {
    LODWORD(fmt) = v12;
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143CEE128, 754i64, (unsigned int)CmdNumber, fmt);
  }
  if ( CmdNumber <= (int)v12 - 128 || CmdNumber <= 0 )
  {
    memset(&v33, 0, 4ui64);
  }
  else
  {
    v13 = &v11->cmds[CmdNumber & 0x7F];
    memset(&v33, 0, 4ui64);
    if ( !v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_active_client.h", 385, ASSERT_TYPE_ASSERT, "(requestedCmd)", (const char *)&queryFormat, "requestedCmd") )
      __debugbreak();
    p_cmd = &cmd;
    v15 = 2i64;
    do
    {
      *(_OWORD *)&p_cmd->buttons = *(_OWORD *)&v13->buttons;
      *(_OWORD *)&p_cmd->commandTime = *(_OWORD *)&v13->commandTime;
      *(_OWORD *)(&p_cmd->angles.xy + 1) = *(_OWORD *)(&v13->angles.xy + 1);
      *(_OWORD *)&p_cmd->weapon.weaponOthers = *(_OWORD *)&v13->weapon.weaponOthers;
      *(_OWORD *)&p_cmd->weapon.attachmentVariationIndices[1] = *(_OWORD *)&v13->weapon.attachmentVariationIndices[1];
      *(_OWORD *)&p_cmd->weapon.attachmentVariationIndices[17] = *(_OWORD *)&v13->weapon.attachmentVariationIndices[17];
      *(_OWORD *)&p_cmd->offHand.weaponIdx = *(_OWORD *)&v13->offHand.weaponIdx;
      p_cmd = (usercmd_s *)((char *)p_cmd + 128);
      *(_OWORD *)&p_cmd[-1].sightedClientsMask.data[4] = *(_OWORD *)&v13->offHand.weaponAttachments[2];
      v13 = (usercmd_s *)((char *)v13 + 128);
      --v15;
    }
    while ( v15 );
    p_cmd->buttons = v13->buttons;
    BG_UpdateViewAngles_ClampDefault(&LocalClientGlobals->predictedPlayerState, &cmd);
  }
  LocalClientGlobals->groundEntityTime = LocalClientGlobals->time - 1000;
  LocalClientGlobals->playerWeaponInfo.weapon = NULL_WEAPON;
  LocalClientGlobals->prevViewmodelWeapon = NULL_WEAPON;
  WeaponSystem = CgWeaponSystem::GetWeaponSystem((const LocalClientNum_t)v4);
  if ( !WeaponSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_playerstate_mp.cpp", 275, ASSERT_TYPE_ASSERT, "(weaponSystem)", (const char *)&queryFormat, "weaponSystem") )
    __debugbreak();
  CgWeaponSystem::ChargeWeaponOnRespawn(WeaponSystem, &LocalClientGlobals->predictedPlayerState);
  if ( spectate )
  {
    LocalClientGlobals->weaponSelect = NULL_WEAPON;
    LocalClientGlobals->weaponSelectInAlt = 0;
    LocalClientGlobals->equipSelectInAlt = 0;
  }
  else
  {
    if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 936, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
      __debugbreak();
    if ( LocalClientGlobals == (CgGlobalsMP *)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 937, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    Weapon = BgWeaponMap::GetWeapon(v6, LocalClientGlobals->predictedPlayerState.weapCommon.weaponSpawnHandle);
    OffHandWeaponForPlayer = BG_GetOffHandWeaponForPlayer(v6, &LocalClientGlobals->predictedPlayerState);
    if ( !Weapon->weaponIdx )
    {
      if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 885, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
        __debugbreak();
      if ( LocalClientGlobals == (CgGlobalsMP *)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 886, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
        __debugbreak();
      Weapon = BgWeaponMap::GetWeapon(v6, LocalClientGlobals->predictedPlayerState.weapCommon.weaponHandle);
    }
    if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 1089, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
      __debugbreak();
    if ( LocalClientGlobals == (CgGlobalsMP *)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 1090, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    v21 = 0;
    if ( Weapon->weaponIdx )
    {
      EquippedWeaponIndex = BG_GetEquippedWeaponIndex(v6, &LocalClientGlobals->predictedPlayerState, Weapon);
      if ( EquippedWeaponIndex >= 0 )
      {
        v20 = EquippedWeaponIndex;
        if ( (playerState_s *)((char *)p_predictedPlayerState + 4 * v20) != (playerState_s *)-1540i64 && p_predictedPlayerState->weapEquippedData[v20].inAltMode )
          v21 = 1;
      }
    }
    if ( CG_SelectWeapon((LocalClientNum_t)v4, Weapon, v21) )
    {
      CL_SetUserCmdWeapons((LocalClientNum_t)v4, Weapon, OffHandWeaponForPlayer, v21);
    }
    else
    {
      LocalClientGlobals->weaponSelect = NULL_WEAPON;
      LocalClientGlobals->weaponSelectInAlt = 0;
      LocalClientGlobals->equipSelectInAlt = 0;
    }
    SuitDef = BG_GetSuitDef(LocalClientGlobals->predictedPlayerState.suitIndex);
    LocalClientGlobals->predictedPlayerState.viewHeightTarget = SuitDef->viewheight_stand;
    LocalClientGlobals->predictedPlayerState.viewHeightCurrent = (float)SuitDef->viewheight_stand;
  }
  LocalClientGlobals->weaponSelectTime = LocalClientGlobals->time;
  LocalClientGlobals->equippedOffHand = *BG_GetOffHandWeaponForPlayer(v6, &LocalClientGlobals->predictedPlayerState);
  LocalClientGlobals->crosshairClientNum = -1;
  secure_uint32_3_t::secureInt32_3_Reset(&LocalClientGlobals->rawKickAngles);
  secure_uint32_3_t::secureInt32_3_Reset(&LocalClientGlobals->kickAngles);
  secure_uint32_3_t::secureInt32_3_Reset(&LocalClientGlobals->kickAVel);
  LocalClientGlobals->kickNeedsToCrossCenter = 0;
  *(_QWORD *)&LocalClientGlobals->v_dmg_roll = 0i64;
  LocalClientGlobals->playerEntity.bPositionToADS = 0;
  LocalClientGlobals->damageTime = 0;
  LocalClientGlobals->v_dmg_pitch = 0.0;
  BG_ClearViewState(&LocalClientGlobals->predictedViewState);
  memset_0(LocalClientGlobals->viewDamage, 0, sizeof(LocalClientGlobals->viewDamage));
  *(_QWORD *)LocalClientGlobals->predictedError.v = 0i64;
  LocalClientGlobals->predictedError.v[2] = 0.0;
  LocalClientGlobals->lastViewFov = 0.0;
  v23 = CL_STANCE_STAND;
  v24 = (__int64)v34;
  if ( !resetStance )
  {
    if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&v34->pm_flags, ACTIVE, 0) )
    {
      v23 = CL_STANCE_PRONE;
    }
    else if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal((GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64> *)(v24 + 20), ACTIVE, 1u) )
    {
      v23 = CL_STANCE_CROUCH;
    }
  }
  CL_SetStance((LocalClientNum_t)v4, v23, 0);
  CL_SetADS((LocalClientNum_t)v4, 0);
  v25 = BG_GetOffHandWeaponForPlayer(v6, &LocalClientGlobals->predictedPlayerState);
  CG_SetEquippedOffHand((LocalClientNum_t)v4, v25);
  LocalClientGlobals->diveView.roll = 0.0;
  FX_ClearViewmodelMarks((LocalClientNum_t)v4);
  CG_ClearCameraShakes((LocalClientNum_t)v4);
  LocalClientGlobals->vehicleInitView = 1;
  if ( (unsigned int)v4 >= LODWORD(cl_maxLocalClients) )
  {
    LODWORD(v31) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_active_client_mp.h", 166, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( (cl_maxLocalClients) )", "localClientNum doesn't index MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v31, cl_maxLocalClients) )
      __debugbreak();
  }
  if ( !BG_GameInterface_GameModeIsMP((GameModeType)(unsigned __int8)ClActiveClient::ms_activeClientType) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_active_client_mp.h", 167, ASSERT_TYPE_ASSERT, "(BG_GameInterface_GameModeIsMP( ms_activeClientType ))", (const char *)&queryFormat, "BG_GameInterface_GameModeIsMP( ms_activeClientType )") )
    __debugbreak();
  if ( !ClActiveClient::ms_activeClients[v4] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_active_client_mp.h", 168, ASSERT_TYPE_ASSERT, "(ms_activeClients[localClientNum])", (const char *)&queryFormat, "ms_activeClients[localClientNum]") )
    __debugbreak();
  v26 = ClActiveClient::ms_activeClients[v4];
  if ( LOBYTE(v26[3].cmds[94].buttons) == 1 )
    LODWORD(v26->clViewangles.clViewangles.v[2]) = *(_DWORD *)&v26[1].cgameUserCmdWeapon.attachmentVariationIndices[25] ^ _xmm ^ ((((_DWORD)v26 + 436) ^ v26->clviewangles_aab) * ((((_DWORD)v26 + 436) ^ v26->clviewangles_aab) + 2));
  LocalClientGlobals->playerVehicleEntity = 2047;
  CG_Vehicle_ClearAudioSettings((const LocalClientNum_t)v4);
  CG_Vehicle_ClearVisionSettings((const LocalClientNum_t)v4);
  CG_ClearAudioOverride((LocalClientNum_t)v4, CTAUD_OVERRIDE_CINEMA, 0.0);
  CG_Weapons_HoldBreathInit(LocalClientGlobals);
  CG_Draw_BloodOverlayReset(LocalClientGlobals);
  CG_PlayerStateMP_PainVisionDisable(LocalClientGlobals);
  CG_HudLighting_Assign(&LocalClientGlobals->hudLightingState);
  if ( !LocalClientGlobals->predictedPlayerState.deltaTime )
    CG_StopCinematicCameras((LocalClientNum_t)v4);
  *(__m256i *)&LocalClientGlobals->playerEvents.eventSequence = *(__m256i *)&LocalClientGlobals->predictedPlayerState.pe.eventSequence;
  *(double *)&LocalClientGlobals->playerEvents.events[3].eventParm = *(double *)&LocalClientGlobals->predictedPlayerState.pe.events[3].eventParm;
  CG_Gesture_ClearClientInfo((LocalClientNum_t)v4);
  LocalClientGlobals->extraButtons = 0i64;
  LocalClientGlobals->m_fixedDeathCameraClientForced = 0;
  LocalClientGlobals->m_deathCameraFailsafeLock = 0;
  *(_QWORD *)LocalClientGlobals->m_deathCameraFailsafePosition.v = 0i64;
  LocalClientGlobals->m_deathCameraFailsafePosition.v[2] = 0.0;
  LocalClientGlobals->m_deathCameraPrevDistance = 0.0;
  LocalClientGlobals->activeExecution = 255;
  LocalClientGlobals->activeExecutionAttacker = 2047;
  memset_0(LocalClientGlobals->weaponHeat, 0, sizeof(LocalClientGlobals->weaponHeat));
  CG_LaserResetAll((LocalClientNum_t)v4);
  CG_Main_InitDofPhysical((LocalClientNum_t)v4);
  *(_QWORD *)&LocalClientGlobals->stairsAnimBlend = 0i64;
  LocalClientGlobals->weaponAdditiveWalkPrevYaw = *(float *)(v24 + 476);
  Shake::Reset(&LocalClientGlobals->viewShake);
  AngularSmoothing::Reset(&LocalClientGlobals->viewSmoothing);
  LocalClientGlobals->deferredRumbleCount = 0;
  LocalClientGlobals->deferredRumbleStopCount = 0;
  *(_QWORD *)&LocalClientGlobals->corpseHitEventTime = 0i64;
  v27 = 0;
  animMoveState = LocalClientGlobals->animMoveState;
  do
    MovementAnimState::Reset(animMoveState++, (const LocalClientNum_t)v4, (const PlayerHandIndex)v27++);
  while ( v27 < 2 );
  LocalClientGlobals->weaponInspectDofActive = 0;
  LocalClientGlobals->weaponInspectDofDist = 16.0;
  *(_QWORD *)&LocalClientGlobals->footstepWeight = 0i64;
  CG_Camera_Reset((LocalClientNum_t)v4);
  XCamData::Clear(&LocalClientGlobals->xCam);
  CG_Globals_ResetPlayerWeaponInfo((const LocalClientNum_t)v4);
  CG_CorpseFade_Init((const LocalClientNum_t)v4);
  *(double *)LocalClientGlobals->oldOrigin.v = *(double *)LocalClientGlobals->predictedPlayerState.origin.v;
  LocalClientGlobals->oldOrigin.v[2] = LocalClientGlobals->predictedPlayerState.origin.v[2];
  *(_QWORD *)LocalClientGlobals->originMoverLocal.v = 0i64;
  LocalClientGlobals->originMoverLocal.v[2] = 0.0;
  MatrixIdentity43(&LocalClientGlobals->moverTransform);
  MatrixIdentity43(&LocalClientGlobals->oldMoverTransform);
  LocalClientGlobals->oldMoverId = 2047;
  CG_FootstepTracker_Init((LocalClientNum_t)v4);
  v29 = DCONST_DVARBOOL_cg_resetDoorStateWhenRespawnPlayer;
  if ( !DCONST_DVARBOOL_cg_resetDoorStateWhenRespawnPlayer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_resetDoorStateWhenRespawnPlayer") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v29);
  if ( v29->current.enabled )
    CG_Door_ResetDoorStates((const LocalClientNum_t)v4);
}

/*
==============
CG_PlayerStateMP_TransitionPlayerState
==============
*/
void CG_PlayerStateMP_TransitionPlayerState(LocalClientNum_t localClientNum, const playerState_s *ps, const transPlayerState_t *ops)
{
  __int128 v3; 
  __int128 v4; 
  __int64 v7; 
  const dvar_t *v8; 
  ShakeImpulseSourceType v9; 
  CgPredictedEntitySystem *System; 
  CgGlobalsMP *LocalClientGlobals; 
  CgGlobalsMP *v12; 
  centity_t *m_brCircleEnt; 
  bool v14; 
  void (__fastcall *FunctionPointer_origin)(const vec4_t *, vec3_t *); 
  __int128 v20; 
  float v29; 
  float v30; 
  ClientVisionSetData *v31; 
  ClientVisionSetData *p_cvsData; 
  const dvar_t *v33; 
  CgWeaponSystem *WeaponSystem; 
  __int64 v35; 
  __int64 v36; 
  unsigned int v37; 
  unsigned int v38; 
  unsigned int v39; 
  __int128 v40; 
  __int128 v41; 

  v7 = localClientNum;
  Sys_ProfBeginNamedEvent(0xFFD8BFD8, "CG_PlayerStateMP_TransitionPlayerState");
  if ( ps->damageEvent != ops->damageEvent )
  {
    CG_PlayerState_DamageFeedback((LocalClientNum_t)v7, ps->damageYaw, ps->damagePitch, ps->damageCount, ps->damageType);
    if ( ps->damageModFlags != 0x80000 )
    {
      v8 = DCONST_DVARBOOL_handheldCameraImpulseDamageEnabled;
      if ( !DCONST_DVARBOOL_handheldCameraImpulseDamageEnabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "handheldCameraImpulseDamageEnabled") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v8);
      if ( v8->current.enabled )
      {
        LOBYTE(v9) = 2;
        CG_Shake_Impulse((const LocalClientNum_t)v7, v9, 1.0);
      }
    }
  }
  CgSimBulletFirePellet_EnableWorkers(1);
  System = CgPredictedEntitySystem::GetSystem((const LocalClientNum_t)v7);
  if ( !System && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_playerstate_mp.cpp", 626, ASSERT_TYPE_ASSERT, "(predictedEntitySystem)", (const char *)&queryFormat, "predictedEntitySystem") )
    __debugbreak();
  BgPredictedEntitySystem::ResetPredictionKeys(System);
  if ( !(_BYTE)CgEventSystem::ms_allocatedType )
  {
    LODWORD(v36) = v7;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.h", 224, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the event system for localClientNum %d but the event system type is not known\n", "ms_allocatedType != GameModeType::NONE", v36) )
      __debugbreak();
  }
  if ( (unsigned int)v7 >= CgEventSystem::ms_allocatedCount )
  {
    LODWORD(v36) = CgEventSystem::ms_allocatedCount;
    LODWORD(v35) = v7;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.h", 225, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v35, v36) )
      __debugbreak();
  }
  if ( !CgEventSystem::ms_eventSystemArray[v7] )
  {
    LODWORD(v36) = v7;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.h", 226, ASSERT_TYPE_ASSERT, "(ms_eventSystemArray[localClientNum])", "%s\n\tTrying to access unallocated event system for localClientNum %d\n", "ms_eventSystemArray[localClientNum]", v36) )
      __debugbreak();
  }
  CgEventSystem::CheckPlayerEvents(CgEventSystem::ms_eventSystemArray[v7], ps, ops);
  CG_Execution_ProcessFireWeapon((LocalClientNum_t)v7);
  CgSimBulletFirePellet_EnableWorkers(0);
  CG_PlayerStateMP_PainVisionUpdate((LocalClientNum_t)v7, ps, ops);
  LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals((const LocalClientNum_t)v7);
  v12 = LocalClientGlobals;
  m_brCircleEnt = LocalClientGlobals->m_brCircleEnt;
  if ( !m_brCircleEnt || (m_brCircleEnt->flags & 1) == 0 )
  {
    p_cvsData = &LocalClientGlobals->cvsData;
    goto LABEL_32;
  }
  v14 = m_brCircleEnt->pose.origin.Get_origin == NULL;
  v41 = v3;
  v40 = v4;
  if ( v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 380, ASSERT_TYPE_ASSERT, "(pose->origin.Get_origin)", (const char *)&queryFormat, "pose->origin.Get_origin") )
    __debugbreak();
  FunctionPointer_origin = ObfuscateGetFunctionPointer_origin(m_brCircleEnt->pose.origin.Get_origin, &m_brCircleEnt->pose);
  FunctionPointer_origin(&m_brCircleEnt->pose.origin.origin.origin, (vec3_t *)&v37);
  if ( m_brCircleEnt->pose.isPosePrecise )
  {
    _XMM0 = v37;
    _XMM1 = v38;
    __asm { vcvtdq2pd xmm0, xmm0 }
    *((_QWORD *)&v20 + 1) = *((_QWORD *)&_XMM0 + 1);
    *(double *)&v20 = *(double *)&_XMM0 * 0.000244140625;
    _XMM0 = v20;
    __asm
    {
      vcvtdq2pd xmm1, xmm1
      vcvtsd2ss xmm3, xmm0, xmm0
    }
    *((_QWORD *)&v20 + 1) = *((_QWORD *)&_XMM1 + 1);
    *(double *)&v20 = *(double *)&_XMM1 * 0.000244140625;
    _XMM0 = v20;
    _XMM1 = v39;
    __asm
    {
      vcvtsd2ss xmm4, xmm0, xmm0
      vcvtdq2pd xmm1, xmm1
    }
    *((_QWORD *)&v20 + 1) = *((_QWORD *)&_XMM1 + 1);
    *(double *)&v20 = *(double *)&_XMM1 * 0.000244140625;
    _XMM0 = v20;
    __asm { vcvtsd2ss xmm2, xmm0, xmm0 }
    v39 = _XMM2;
    v37 = _XMM3;
    v38 = _XMM4;
  }
  else
  {
    LODWORD(_XMM4) = v38;
    LODWORD(_XMM3) = v37;
  }
  v29 = *(float *)&_XMM3 - ps->origin.v[0];
  v30 = *(float *)&_XMM4 - ps->origin.v[1];
  CG_VisionSetRegisterLeafByFile(&v12->cvsData, VISIONSET_LEAFTYPE_CLIENT_CODE, off_147FAB350);
  v31 = &v12->cvsData;
  if ( fsqrt((float)(v29 * v29) + (float)(v30 * v30)) < v12->m_brCircleRadius )
  {
    CG_VisionSetSetBlendPush(v31, VISIONSET_BLENDTYPE_CLIENT_CODE, 0.0);
    p_cvsData = &v12->cvsData;
LABEL_32:
    CG_VisionSetSetBlendOff(p_cvsData, VISIONSET_BLENDTYPE_CLIENT_CODE);
    goto LABEL_33;
  }
  CG_VisionSetSetBlendPush(v31, VISIONSET_BLENDTYPE_CLIENT_CODE, 1.0);
LABEL_33:
  CgPredictedEntitySystem::Update(System);
  v33 = DCONST_DVARBOOL_cg_debugBulletsHitLoc;
  if ( !DCONST_DVARBOOL_cg_debugBulletsHitLoc && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_debugBulletsHitLoc") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v33);
  if ( v33->current.enabled )
  {
    WeaponSystem = CgWeaponSystem::GetWeaponSystem((const LocalClientNum_t)v7);
    CgWeaponSystem::DebugDrawBulletHitLocation(WeaponSystem);
  }
  Sys_ProfEndNamedEvent();
}


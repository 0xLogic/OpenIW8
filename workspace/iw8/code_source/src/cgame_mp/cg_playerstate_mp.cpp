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
    __asm { vmovss  xmm2, cs:__real@40000000; fadeTime }
    cgameGlob->painVisionSoundActive = 0;
    CG_ClearAudioOverride(LOCAL_CLIENT_0, CTAUD_OVERRIDE_PAINVISION, *(float *)&_XMM2);
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
  __int64 v11; 
  bool v18; 
  char v20; 
  bool v21; 
  __int64 v37; 
  __int64 v38; 
  char v41; 
  void *retaddr; 

  _R11 = &retaddr;
  __asm
  {
    vmovaps [rsp+88h+var_18], xmm6
    vmovaps xmmword ptr [r11-38h], xmm8
    vmovaps xmmword ptr [r11-48h], xmm9
  }
  v11 = localClientNum;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_playerstate_mp.cpp", 131, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !ops && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_playerstate_mp.cpp", 132, ASSERT_TYPE_ASSERT, "(ops)", (const char *)&queryFormat, "ops") )
    __debugbreak();
  if ( (unsigned int)v11 >= cg_t::ms_allocatedCount )
  {
    LODWORD(v37) = v11;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1166, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( cg_t::ms_allocatedCount )", "localClientNum doesn't index cg_t::ms_allocatedCount\n\t%i not in [0, %i)", v37, cg_t::ms_allocatedCount) )
      __debugbreak();
  }
  if ( !cg_t::ms_cgArray[v11] )
  {
    LODWORD(v38) = v11;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1167, ASSERT_TYPE_ASSERT, "(cg_t::ms_cgArray[localClientNum])", "%s\n\tTrying to access unallocated client globals for localClientNum %d\n", "cg_t::ms_cgArray[localClientNum]", v38) )
      __debugbreak();
  }
  if ( cg_t::ms_allocatedType == GLOB_TYPE_UNKNOWN )
  {
    LODWORD(v38) = v11;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1168, ASSERT_TYPE_ASSERT, "(cg_t::ms_allocatedType != CgGlobalsType::GLOB_TYPE_UNKNOWN)", "%s\n\tTrying to access client globals for localClientNum %d but the client global type is not known\n", "cg_t::ms_allocatedType != CgGlobalsType::GLOB_TYPE_UNKNOWN", v38) )
      __debugbreak();
  }
  _RBX = cg_t::ms_cgArray[v11];
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, dword ptr [rbx+65E4h]
    vmulss  xmm9, xmm0, cs:__real@3a83126f
  }
  *(double *)&_XMM0 = CG_PlayerState_CalcPlayerHealth((LocalClientNum_t)v11, ps);
  __asm
  {
    vxorps  xmm8, xmm8, xmm8
    vucomiss xmm0, xmm8
    vmovaps xmm6, xmm0
  }
  v18 = v21 || ps->pm_type == 5 || GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagStrict(&ps->otherFlags, (POtherFlagsMP)33) && _RBX->renderingThirdPerson || GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&ps->otherFlags, ACTIVE, 1u) || (ps->linkFlags.m_flags[0] & 4) != 0 || ps->vehicleState.entity != 2047 || !GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&ps->otherFlags, ACTIVE, 0x19u);
  if ( CG_View_IsKillCamEntityView((const LocalClientNum_t)v11) || v18 )
  {
    CG_PlayerStateMP_PainVisionDisable(_RBX);
    goto LABEL_54;
  }
  __asm
  {
    vmovaps [rsp+88h+var_28], xmm7
    vmovss  xmm7, cs:__real@3f800000
  }
  if ( !_RBX->cvsData.archived.painVisionActive )
  {
    _RDI = DVARFLT_painVisionTriggerHealth;
    if ( !DVARFLT_painVisionTriggerHealth && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "painVisionTriggerHealth") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RDI);
    __asm { vcomiss xmm6, dword ptr [rdi+28h] }
    if ( !(v20 | v21) )
      goto LABEL_30;
LABEL_42:
    if ( !_RBX->painVisionSoundActive )
    {
      _RBX->painVisionSoundActive = 1;
      if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() != LONG )
      {
        __asm { vmovaps xmm3, xmm7; fadeTime }
        CG_SetAudioOverride(LOCAL_CLIENT_0, "painvision", CTAUD_OVERRIDE_PAINVISION, *(float *)&_XMM3, 7);
      }
    }
    _RBX->cvsData.archived.painVisionActive = 1;
    goto LABEL_31;
  }
  __asm { vucomiss xmm6, xmm7 }
  if ( _RBX->cvsData.archived.painVisionActive )
    goto LABEL_42;
LABEL_30:
  CG_PlayerStateMP_PainVisionDisable(_RBX);
LABEL_31:
  v20 = 0;
  v21 = !_RBX->cvsData.archived.painVisionActive;
  if ( _RBX->cvsData.archived.painVisionActive )
  {
    __asm
    {
      vmulss  xmm0, xmm6, xmm6
      vmulss  xmm1, xmm0, xmm6
      vmulss  xmm2, xmm1, xmm6
      vsubss  xmm6, xmm7, xmm2
      vmovss  xmm2, dword ptr [rbx+58D24h]
      vcomiss xmm2, xmm6
    }
    if ( _RBX->cvsData.archived.painVisionActive )
    {
      _RDI = DCONST_DVARMPFLT_painVisionLerpOutRate;
      if ( !DCONST_DVARMPFLT_painVisionLerpOutRate && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "painVisionLerpOutRate") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_RDI);
      __asm { vucomiss xmm8, dword ptr [rdi+28h] }
      if ( v21 )
      {
        __asm
        {
          vmovss  dword ptr [rbx+58D24h], xmm6
          vmovaps xmm2, xmm6
        }
      }
      else
      {
        *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARMPFLT_painVisionLerpOutRate, "painVisionLerpOutRate");
        __asm
        {
          vmovss  xmm1, dword ptr [rbx+58D24h]
          vmulss  xmm2, xmm0, xmm9
          vsubss  xmm2, xmm1, xmm2
          vmovss  dword ptr [rbx+58D24h], xmm2
        }
      }
      __asm { vcomiss xmm2, xmm6 }
    }
    if ( v20 )
    {
      __asm
      {
        vmovss  dword ptr [rbx+58D24h], xmm6
        vmovaps xmm2, xmm6
      }
    }
    __asm { vcomiss xmm2, xmm8 }
    if ( v20 | v21 )
    {
      CG_PlayerStateMP_PainVisionDisable(_RBX);
      __asm { vmovss  xmm2, dword ptr [rbx+58D24h]; lerp }
    }
    CG_VisionSetSetBlendPush(&_RBX->cvsData, VISIONSET_BLENDTYPE_GAME, *(const float *)&_XMM2);
  }
  __asm { vmovaps xmm7, [rsp+88h+var_28] }
LABEL_54:
  __asm { vmovaps xmm6, [rsp+88h+var_18] }
  _R11 = &v41;
  __asm
  {
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
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
  int v4; 
  int v5; 
  int v6; 

  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vmovss  [rsp+58h+var_28], xmm0
    vmovss  [rsp+58h+var_24], xmm0
    vmovss  [rsp+58h+var_20], xmm0
  }
  Client = ClActiveClient::GetClient(localClientNum);
  if ( !Client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_active_client.h", 225, ASSERT_TYPE_ASSERT, "(activeClient)", (const char *)&queryFormat, "activeClient") )
    __debugbreak();
  Client->clviewangles_aab += Client->clviewangles_set_aab;
  LODWORD(Client->clViewangles.clViewangles.v[0]) = v4 ^ ((((_DWORD)Client + 428) ^ Client->clviewangles_aab) * ((((_DWORD)Client + 428) ^ Client->clviewangles_aab) + 2));
  LODWORD(Client->clViewangles.clViewangles.v[1]) = v5 ^ ((((_DWORD)Client + 432) ^ Client->clviewangles_aab) * ((((_DWORD)Client + 432) ^ Client->clviewangles_aab) + 2));
  LODWORD(Client->clViewangles.clViewangles.v[2]) = v6 ^ ((((_DWORD)Client + 436) ^ Client->clviewangles_aab) * ((((_DWORD)Client + 436) ^ Client->clviewangles_aab) + 2));
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
  __int64 v5; 
  CgWeaponMap *v7; 
  const playerState_s *v8; 
  playerState_s *p_predictedPlayerState; 
  const ClActiveClient *Client; 
  int CmdNumber; 
  const ClActiveClient *v12; 
  __int64 v13; 
  __int64 v16; 
  CgWeaponSystem *WeaponSystem; 
  const Weapon *Weapon; 
  const Weapon *OffHandWeaponForPlayer; 
  int EquippedWeaponIndex; 
  __int64 v38; 
  int v39; 
  StanceState v48; 
  __int64 v49; 
  const Weapon *v50; 
  int v57; 
  MovementAnimState *animMoveState; 
  const dvar_t *v60; 
  char *fmt; 
  __int64 v62; 
  int v64; 
  __int64 v65; 
  const playerState_s *v66; 
  __int64 v67; 
  usercmd_s cmd; 

  v67 = -2i64;
  v5 = localClientNum;
  _RBX = CgGlobalsMP::GetLocalClientGlobals(localClientNum);
  if ( !CgWeaponMap::ms_instance[v5] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
    __debugbreak();
  v7 = CgWeaponMap::ms_instance[v5];
  if ( !_RBX->nextSnap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_playerstate_mp.cpp", 240, ASSERT_TYPE_ASSERT, "(cgameGlob->nextSnap)", (const char *)&queryFormat, "cgameGlob->nextSnap") )
    __debugbreak();
  if ( spectate )
    CG_PredictMP_SavePlayerState((LocalClientNum_t)v5);
  else
    CG_PredictMP_ClearSavedPlayerState((LocalClientNum_t)v5);
  v8 = _RBX->nextSnap->GetPlayerState(_RBX->nextSnap, (unsigned int)v5);
  v66 = v8;
  if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_playerstate_mp.cpp", 260, ASSERT_TYPE_ASSERT, "(nextPs)", (const char *)&queryFormat, "nextPs") )
    __debugbreak();
  p_predictedPlayerState = &_RBX->predictedPlayerState;
  memcpy_0(&_RBX->predictedPlayerState, v8, sizeof(_RBX->predictedPlayerState));
  Client = ClActiveClient::GetClient((const LocalClientNum_t)v5);
  CmdNumber = ClActiveClient_GetCmdNumber(Client);
  v12 = ClActiveClient::GetClient((const LocalClientNum_t)v5);
  v13 = (unsigned int)ClActiveClient_GetCmdNumber(v12);
  v65 = v13;
  if ( CmdNumber > (int)v13 )
  {
    LODWORD(fmt) = v13;
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143CEE128, 754i64, (unsigned int)CmdNumber, fmt);
  }
  if ( CmdNumber <= (int)v13 - 128 || CmdNumber <= 0 )
  {
    memset(&v65, 0, 4ui64);
  }
  else
  {
    _R14 = &v12->cmds[CmdNumber & 0x7F];
    memset(&v65, 0, 4ui64);
    if ( !_R14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_active_client.h", 385, ASSERT_TYPE_ASSERT, "(requestedCmd)", (const char *)&queryFormat, "requestedCmd") )
      __debugbreak();
    _RCX = &cmd;
    v16 = 2i64;
    do
    {
      __asm
      {
        vmovups xmm0, xmmword ptr [r14]
        vmovups xmmword ptr [rcx], xmm0
        vmovups xmm1, xmmword ptr [r14+10h]
        vmovups xmmword ptr [rcx+10h], xmm1
        vmovups xmm0, xmmword ptr [r14+20h]
        vmovups xmmword ptr [rcx+20h], xmm0
        vmovups xmm1, xmmword ptr [r14+30h]
        vmovups xmmword ptr [rcx+30h], xmm1
        vmovups xmm0, xmmword ptr [r14+40h]
        vmovups xmmword ptr [rcx+40h], xmm0
        vmovups xmm1, xmmword ptr [r14+50h]
        vmovups xmmword ptr [rcx+50h], xmm1
        vmovups xmm0, xmmword ptr [r14+60h]
        vmovups xmmword ptr [rcx+60h], xmm0
      }
      _RCX = (usercmd_s *)((char *)_RCX + 128);
      __asm
      {
        vmovups xmm1, xmmword ptr [r14+70h]
        vmovups xmmword ptr [rcx-10h], xmm1
      }
      _R14 = (usercmd_s *)((char *)_R14 + 128);
      --v16;
    }
    while ( v16 );
    _RCX->buttons = _R14->buttons;
    BG_UpdateViewAngles_ClampDefault(&_RBX->predictedPlayerState, &cmd);
  }
  _RBX->groundEntityTime = _RBX->time - 1000;
  __asm
  {
    vmovups ymm0, ymmword ptr cs:?NULL_WEAPON@@3UWeapon@@B.weaponIdx; Weapon const NULL_WEAPON
    vmovups ymmword ptr [rbx+182B0h], ymm0
    vmovups xmm1, xmmword ptr cs:?NULL_WEAPON@@3UWeapon@@B.attachmentVariationIndices+5; Weapon const NULL_WEAPON
    vmovups xmmword ptr [rbx+182D0h], xmm1
    vmovsd  xmm0, qword ptr cs:?NULL_WEAPON@@3UWeapon@@B.attachmentVariationIndices+15h; Weapon const NULL_WEAPON
    vmovsd  qword ptr [rbx+182E0h], xmm0
  }
  *(_DWORD *)&_RBX->playerWeaponInfo.weapon.weaponCamo = *(_DWORD *)&NULL_WEAPON.weaponCamo;
  __asm
  {
    vmovups ymm0, ymmword ptr cs:?NULL_WEAPON@@3UWeapon@@B.weaponIdx; Weapon const NULL_WEAPON
    vmovups ymmword ptr [rbx+181DAh], ymm0
    vmovups xmm1, xmmword ptr cs:?NULL_WEAPON@@3UWeapon@@B.attachmentVariationIndices+5; Weapon const NULL_WEAPON
    vmovups xmmword ptr [rbx+181FAh], xmm1
    vmovsd  xmm0, qword ptr cs:?NULL_WEAPON@@3UWeapon@@B.attachmentVariationIndices+15h; Weapon const NULL_WEAPON
    vmovsd  qword ptr [rbx+1820Ah], xmm0
  }
  *(_DWORD *)&_RBX->prevViewmodelWeapon.weaponCamo = *(_DWORD *)&NULL_WEAPON.weaponCamo;
  WeaponSystem = CgWeaponSystem::GetWeaponSystem((const LocalClientNum_t)v5);
  if ( !WeaponSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_playerstate_mp.cpp", 275, ASSERT_TYPE_ASSERT, "(weaponSystem)", (const char *)&queryFormat, "weaponSystem") )
    __debugbreak();
  CgWeaponSystem::ChargeWeaponOnRespawn(WeaponSystem, &_RBX->predictedPlayerState);
  if ( spectate )
  {
    __asm
    {
      vmovups ymm0, ymmword ptr cs:?NULL_WEAPON@@3UWeapon@@B.weaponIdx; Weapon const NULL_WEAPON
      vmovups ymmword ptr [rbx+18114h], ymm0
      vmovups xmm1, xmmword ptr cs:?NULL_WEAPON@@3UWeapon@@B.attachmentVariationIndices+5; Weapon const NULL_WEAPON
      vmovups xmmword ptr [rbx+18134h], xmm1
      vmovsd  xmm0, qword ptr cs:?NULL_WEAPON@@3UWeapon@@B.attachmentVariationIndices+15h; Weapon const NULL_WEAPON
      vmovsd  qword ptr [rbx+18144h], xmm0
    }
    *(_DWORD *)&_RBX->weaponSelect.weaponCamo = *(_DWORD *)&NULL_WEAPON.weaponCamo;
    _RBX->weaponSelectInAlt = 0;
    _RBX->equipSelectInAlt = 0;
  }
  else
  {
    if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 936, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
      __debugbreak();
    if ( _RBX == (CgGlobalsMP *)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 937, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    Weapon = BgWeaponMap::GetWeapon(v7, _RBX->predictedPlayerState.weapCommon.weaponSpawnHandle);
    OffHandWeaponForPlayer = BG_GetOffHandWeaponForPlayer(v7, &_RBX->predictedPlayerState);
    if ( !Weapon->weaponIdx )
    {
      if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 885, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
        __debugbreak();
      if ( _RBX == (CgGlobalsMP *)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 886, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
        __debugbreak();
      Weapon = BgWeaponMap::GetWeapon(v7, _RBX->predictedPlayerState.weapCommon.weaponHandle);
    }
    if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 1089, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
      __debugbreak();
    if ( _RBX == (CgGlobalsMP *)-8i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 1090, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    v39 = 0;
    if ( Weapon->weaponIdx )
    {
      EquippedWeaponIndex = BG_GetEquippedWeaponIndex(v7, &_RBX->predictedPlayerState, Weapon);
      if ( EquippedWeaponIndex >= 0 )
      {
        v38 = EquippedWeaponIndex;
        if ( (playerState_s *)((char *)p_predictedPlayerState + 4 * v38) != (playerState_s *)-1540i64 && p_predictedPlayerState->weapEquippedData[v38].inAltMode )
          v39 = 1;
      }
    }
    if ( CG_SelectWeapon((LocalClientNum_t)v5, Weapon, v39) )
    {
      CL_SetUserCmdWeapons((LocalClientNum_t)v5, Weapon, OffHandWeaponForPlayer, v39);
    }
    else
    {
      __asm
      {
        vmovups ymm0, ymmword ptr cs:?NULL_WEAPON@@3UWeapon@@B.weaponIdx; Weapon const NULL_WEAPON
        vmovups ymmword ptr [rbx+18114h], ymm0
        vmovups xmm1, xmmword ptr cs:?NULL_WEAPON@@3UWeapon@@B.attachmentVariationIndices+5; Weapon const NULL_WEAPON
        vmovups xmmword ptr [rbx+18134h], xmm1
        vmovsd  xmm0, qword ptr cs:?NULL_WEAPON@@3UWeapon@@B.attachmentVariationIndices+15h; Weapon const NULL_WEAPON
        vmovsd  qword ptr [rbx+18144h], xmm0
      }
      *(_DWORD *)&_RBX->weaponSelect.weaponCamo = *(_DWORD *)&NULL_WEAPON.weaponCamo;
      _RBX->weaponSelectInAlt = 0;
      _RBX->equipSelectInAlt = 0;
    }
    _RBX->predictedPlayerState.viewHeightTarget = BG_GetSuitDef(_RBX->predictedPlayerState.suitIndex)->viewheight_stand;
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, dword ptr [rax+200h]
      vmovss  dword ptr [rbx+1F0h], xmm0
    }
  }
  _RBX->weaponSelectTime = _RBX->time;
  _RAX = BG_GetOffHandWeaponForPlayer(v7, &_RBX->predictedPlayerState);
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovups ymmword ptr [rbx+499C8h], ymm0
    vmovups xmm1, xmmword ptr [rax+20h]
    vmovups xmmword ptr [rbx+499E8h], xmm1
    vmovsd  xmm0, qword ptr [rax+30h]
    vmovsd  qword ptr [rbx+499F8h], xmm0
  }
  *(_DWORD *)&_RBX->equippedOffHand.weaponCamo = *(_DWORD *)&_RAX->weaponCamo;
  _RBX->crosshairClientNum = -1;
  secure_uint32_3_t::secureInt32_3_Reset(&_RBX->rawKickAngles);
  secure_uint32_3_t::secureInt32_3_Reset(&_RBX->kickAngles);
  secure_uint32_3_t::secureInt32_3_Reset(&_RBX->kickAVel);
  _RBX->kickNeedsToCrossCenter = 0;
  *(_QWORD *)&_RBX->v_dmg_roll = 0i64;
  _RBX->playerEntity.bPositionToADS = 0;
  _RBX->damageTime = 0;
  _RBX->v_dmg_pitch = 0.0;
  BG_ClearViewState(&_RBX->predictedViewState);
  memset_0(_RBX->viewDamage, 0, sizeof(_RBX->viewDamage));
  *(_QWORD *)_RBX->predictedError.v = 0i64;
  _RBX->predictedError.v[2] = 0.0;
  _RBX->lastViewFov = 0.0;
  v48 = CL_STANCE_STAND;
  v49 = (__int64)v66;
  if ( !resetStance )
  {
    if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&v66->pm_flags, ACTIVE, 0) )
    {
      v48 = CL_STANCE_PRONE;
    }
    else if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal((GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64> *)(v49 + 20), ACTIVE, 1u) )
    {
      v48 = CL_STANCE_CROUCH;
    }
  }
  CL_SetStance((LocalClientNum_t)v5, v48, 0);
  CL_SetADS((LocalClientNum_t)v5, 0);
  v50 = BG_GetOffHandWeaponForPlayer(v7, &_RBX->predictedPlayerState);
  CG_SetEquippedOffHand((LocalClientNum_t)v5, v50);
  _RBX->diveView.roll = 0.0;
  FX_ClearViewmodelMarks((LocalClientNum_t)v5);
  CG_ClearCameraShakes((LocalClientNum_t)v5);
  _RBX->vehicleInitView = 1;
  if ( (unsigned int)v5 >= LODWORD(cl_maxLocalClients) )
  {
    LODWORD(v62) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_active_client_mp.h", 166, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( (cl_maxLocalClients) )", "localClientNum doesn't index MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v62, cl_maxLocalClients) )
      __debugbreak();
  }
  if ( !BG_GameInterface_GameModeIsMP((GameModeType)(unsigned __int8)ClActiveClient::ms_activeClientType) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_active_client_mp.h", 167, ASSERT_TYPE_ASSERT, "(BG_GameInterface_GameModeIsMP( ms_activeClientType ))", (const char *)&queryFormat, "BG_GameInterface_GameModeIsMP( ms_activeClientType )") )
    __debugbreak();
  if ( !ClActiveClient::ms_activeClients[v5] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_active_client_mp.h", 168, ASSERT_TYPE_ASSERT, "(ms_activeClients[localClientNum])", (const char *)&queryFormat, "ms_activeClients[localClientNum]") )
    __debugbreak();
  _RAX = ClActiveClient::ms_activeClients[v5];
  if ( LOBYTE(_RAX[3].cmds[94].buttons) == 1 )
  {
    __asm
    {
      vmovss  xmm0, dword ptr [rax+87E4h]
      vxorps  xmm1, xmm0, cs:__xmm@80000000800000008000000080000000
      vmovss  [rsp+1A8h+var_168], xmm1
    }
    LODWORD(_RAX->clViewangles.clViewangles.v[2]) = v64 ^ ((((_DWORD)_RAX + 436) ^ _RAX->clviewangles_aab) * ((((_DWORD)_RAX + 436) ^ _RAX->clviewangles_aab) + 2));
  }
  _RBX->playerVehicleEntity = 2047;
  CG_Vehicle_ClearAudioSettings((const LocalClientNum_t)v5);
  CG_Vehicle_ClearVisionSettings((const LocalClientNum_t)v5);
  __asm { vxorps  xmm2, xmm2, xmm2; fadeTime }
  CG_ClearAudioOverride((LocalClientNum_t)v5, CTAUD_OVERRIDE_CINEMA, *(float *)&_XMM2);
  CG_Weapons_HoldBreathInit(_RBX);
  CG_Draw_BloodOverlayReset(_RBX);
  CG_PlayerStateMP_PainVisionDisable(_RBX);
  CG_HudLighting_Assign(&_RBX->hudLightingState);
  if ( !_RBX->predictedPlayerState.deltaTime )
    CG_StopCinematicCameras((LocalClientNum_t)v5);
  __asm
  {
    vmovups ymm0, ymmword ptr [rbx+184h]
    vmovups ymmword ptr [rbx+5971Ch], ymm0
    vmovsd  xmm1, qword ptr [rbx+1A4h]
    vmovsd  qword ptr [rbx+5973Ch], xmm1
  }
  CG_Gesture_ClearClientInfo((LocalClientNum_t)v5);
  _RBX->extraButtons = 0i64;
  _RBX->m_fixedDeathCameraClientForced = 0;
  _RBX->m_deathCameraFailsafeLock = 0;
  *(_QWORD *)_RBX->m_deathCameraFailsafePosition.v = 0i64;
  _RBX->m_deathCameraFailsafePosition.v[2] = 0.0;
  _RBX->m_deathCameraPrevDistance = 0.0;
  _RBX->activeExecution = 255;
  _RBX->activeExecutionAttacker = 2047;
  memset_0(_RBX->weaponHeat, 0, sizeof(_RBX->weaponHeat));
  CG_LaserResetAll((LocalClientNum_t)v5);
  CG_Main_InitDofPhysical((LocalClientNum_t)v5);
  *(_QWORD *)&_RBX->stairsAnimBlend = 0i64;
  _RBX->weaponAdditiveWalkPrevYaw = *(float *)(v49 + 476);
  Shake::Reset(&_RBX->viewShake);
  AngularSmoothing::Reset(&_RBX->viewSmoothing);
  _RBX->deferredRumbleCount = 0;
  _RBX->deferredRumbleStopCount = 0;
  *(_QWORD *)&_RBX->corpseHitEventTime = 0i64;
  v57 = 0;
  animMoveState = _RBX->animMoveState;
  do
    MovementAnimState::Reset(animMoveState++, (const LocalClientNum_t)v5, (const PlayerHandIndex)v57++);
  while ( v57 < 2 );
  _RBX->weaponInspectDofActive = 0;
  _RBX->weaponInspectDofDist = 16.0;
  *(_QWORD *)&_RBX->footstepWeight = 0i64;
  CG_Camera_Reset((LocalClientNum_t)v5);
  XCamData::Clear(&_RBX->xCam);
  CG_Globals_ResetPlayerWeaponInfo((const LocalClientNum_t)v5);
  CG_CorpseFade_Init((const LocalClientNum_t)v5);
  __asm
  {
    vmovsd  xmm0, qword ptr [rbx+38h]
    vmovsd  qword ptr [rbx+596A8h], xmm0
  }
  _RBX->oldOrigin.v[2] = _RBX->predictedPlayerState.origin.v[2];
  *(_QWORD *)_RBX->originMoverLocal.v = 0i64;
  _RBX->originMoverLocal.v[2] = 0.0;
  MatrixIdentity43(&_RBX->moverTransform);
  MatrixIdentity43(&_RBX->oldMoverTransform);
  _RBX->oldMoverId = 2047;
  CG_FootstepTracker_Init((LocalClientNum_t)v5);
  v60 = DCONST_DVARBOOL_cg_resetDoorStateWhenRespawnPlayer;
  if ( !DCONST_DVARBOOL_cg_resetDoorStateWhenRespawnPlayer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_resetDoorStateWhenRespawnPlayer") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v60);
  if ( v60->current.enabled )
    CG_Door_ResetDoorStates((const LocalClientNum_t)v5);
}

/*
==============
CG_PlayerStateMP_TransitionPlayerState
==============
*/
void CG_PlayerStateMP_TransitionPlayerState(LocalClientNum_t localClientNum, const playerState_s *ps, const transPlayerState_t *ops)
{
  __int64 v8; 
  const dvar_t *v9; 
  ShakeImpulseSourceType v10; 
  CgPredictedEntitySystem *System; 
  CgGlobalsMP *LocalClientGlobals; 
  centity_t *m_brCircleEnt; 
  bool v15; 
  void (__fastcall *FunctionPointer_origin)(const vec4_t *, vec3_t *); 
  ClientVisionSetData *v33; 
  char v38; 
  ClientVisionSetData *p_cvsData; 
  const dvar_t *v42; 
  CgWeaponSystem *WeaponSystem; 
  __int64 v44; 
  __int64 v45; 
  int v46; 

  v8 = localClientNum;
  Sys_ProfBeginNamedEvent(0xFFD8BFD8, "CG_PlayerStateMP_TransitionPlayerState");
  if ( ps->damageEvent != ops->damageEvent )
  {
    CG_PlayerState_DamageFeedback((LocalClientNum_t)v8, ps->damageYaw, ps->damagePitch, ps->damageCount, ps->damageType);
    if ( ps->damageModFlags != 0x80000 )
    {
      v9 = DCONST_DVARBOOL_handheldCameraImpulseDamageEnabled;
      if ( !DCONST_DVARBOOL_handheldCameraImpulseDamageEnabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "handheldCameraImpulseDamageEnabled") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v9);
      if ( v9->current.enabled )
      {
        __asm { vmovss  xmm2, cs:__real@3f800000; scale }
        LOBYTE(v10) = 2;
        CG_Shake_Impulse((const LocalClientNum_t)v8, v10, *(float *)&_XMM2);
      }
    }
  }
  CgSimBulletFirePellet_EnableWorkers(1);
  System = CgPredictedEntitySystem::GetSystem((const LocalClientNum_t)v8);
  if ( !System && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_playerstate_mp.cpp", 626, ASSERT_TYPE_ASSERT, "(predictedEntitySystem)", (const char *)&queryFormat, "predictedEntitySystem") )
    __debugbreak();
  BgPredictedEntitySystem::ResetPredictionKeys(System);
  if ( !(_BYTE)CgEventSystem::ms_allocatedType )
  {
    LODWORD(v45) = v8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.h", 224, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the event system for localClientNum %d but the event system type is not known\n", "ms_allocatedType != GameModeType::NONE", v45) )
      __debugbreak();
  }
  if ( (unsigned int)v8 >= CgEventSystem::ms_allocatedCount )
  {
    LODWORD(v45) = CgEventSystem::ms_allocatedCount;
    LODWORD(v44) = v8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.h", 225, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v44, v45) )
      __debugbreak();
  }
  if ( !CgEventSystem::ms_eventSystemArray[v8] )
  {
    LODWORD(v45) = v8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.h", 226, ASSERT_TYPE_ASSERT, "(ms_eventSystemArray[localClientNum])", "%s\n\tTrying to access unallocated event system for localClientNum %d\n", "ms_eventSystemArray[localClientNum]", v45) )
      __debugbreak();
  }
  CgEventSystem::CheckPlayerEvents(CgEventSystem::ms_eventSystemArray[v8], ps, ops);
  CG_Execution_ProcessFireWeapon((LocalClientNum_t)v8);
  CgSimBulletFirePellet_EnableWorkers(0);
  CG_PlayerStateMP_PainVisionUpdate((LocalClientNum_t)v8, ps, ops);
  LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals((const LocalClientNum_t)v8);
  _RBP = LocalClientGlobals;
  m_brCircleEnt = LocalClientGlobals->m_brCircleEnt;
  if ( !m_brCircleEnt || (m_brCircleEnt->flags & 1) == 0 )
  {
    p_cvsData = &LocalClientGlobals->cvsData;
    goto LABEL_32;
  }
  v15 = m_brCircleEnt->pose.origin.Get_origin == NULL;
  __asm
  {
    vmovaps [rsp+0B8h+var_48], xmm6
    vmovaps [rsp+0B8h+var_58], xmm7
  }
  if ( v15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_pose.h", 380, ASSERT_TYPE_ASSERT, "(pose->origin.Get_origin)", (const char *)&queryFormat, "pose->origin.Get_origin") )
    __debugbreak();
  FunctionPointer_origin = ObfuscateGetFunctionPointer_origin(m_brCircleEnt->pose.origin.Get_origin, &m_brCircleEnt->pose);
  FunctionPointer_origin(&m_brCircleEnt->pose.origin.origin.origin, (vec3_t *)&v46);
  if ( m_brCircleEnt->pose.isPosePrecise )
  {
    __asm
    {
      vmovsd  xmm2, cs:__real@3f30000000000000
      vmovd   xmm0, [rsp+0B8h+var_78]
      vmovd   xmm1, [rsp+0B8h+var_74]
      vcvtdq2pd xmm0, xmm0
      vmulsd  xmm0, xmm0, xmm2
      vcvtdq2pd xmm1, xmm1
      vcvtsd2ss xmm3, xmm0, xmm0
      vmulsd  xmm0, xmm1, xmm2
      vmovd   xmm1, [rsp+0B8h+var_70]
      vcvtsd2ss xmm4, xmm0, xmm0
      vcvtdq2pd xmm1, xmm1
      vmulsd  xmm0, xmm1, xmm2
      vcvtsd2ss xmm2, xmm0, xmm0
      vmovss  [rsp+0B8h+var_70], xmm2
      vmovss  [rsp+0B8h+var_78], xmm3
      vmovss  [rsp+0B8h+var_74], xmm4
    }
  }
  else
  {
    __asm
    {
      vmovss  xmm4, [rsp+0B8h+var_74]
      vmovss  xmm3, [rsp+0B8h+var_78]
    }
  }
  __asm
  {
    vsubss  xmm6, xmm3, dword ptr [rsi+30h]
    vsubss  xmm7, xmm4, dword ptr [rsi+34h]
  }
  CG_VisionSetRegisterLeafByFile(&_RBP->cvsData, VISIONSET_LEAFTYPE_CLIENT_CODE, off_147FAB350);
  __asm
  {
    vmulss  xmm1, xmm6, xmm6
    vmovaps xmm6, [rsp+0B8h+var_48]
  }
  v33 = &_RBP->cvsData;
  __asm
  {
    vmulss  xmm0, xmm7, xmm7
    vmovaps xmm7, [rsp+0B8h+var_58]
    vaddss  xmm1, xmm1, xmm0
    vsqrtss xmm3, xmm1, xmm1
    vcomiss xmm3, dword ptr [rbp+0CA368h]
  }
  if ( v38 )
  {
    __asm { vxorps  xmm2, xmm2, xmm2; lerp }
    CG_VisionSetSetBlendPush(v33, VISIONSET_BLENDTYPE_CLIENT_CODE, *(const float *)&_XMM2);
    p_cvsData = &_RBP->cvsData;
LABEL_32:
    CG_VisionSetSetBlendOff(p_cvsData, VISIONSET_BLENDTYPE_CLIENT_CODE);
    goto LABEL_33;
  }
  __asm { vmovss  xmm2, cs:__real@3f800000; lerp }
  CG_VisionSetSetBlendPush(v33, VISIONSET_BLENDTYPE_CLIENT_CODE, *(const float *)&_XMM2);
LABEL_33:
  CgPredictedEntitySystem::Update(System);
  v42 = DCONST_DVARBOOL_cg_debugBulletsHitLoc;
  if ( !DCONST_DVARBOOL_cg_debugBulletsHitLoc && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_debugBulletsHitLoc") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v42);
  if ( v42->current.enabled )
  {
    WeaponSystem = CgWeaponSystem::GetWeaponSystem((const LocalClientNum_t)v8);
    CgWeaponSystem::DebugDrawBulletHitLocation(WeaponSystem);
  }
  Sys_ProfEndNamedEvent();
}


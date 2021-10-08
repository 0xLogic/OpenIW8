/*
==============
CG_SnapshotMP_ClearSnapshots
==============
*/

void __fastcall CG_SnapshotMP_ClearSnapshots(const LocalClientNum_t localClientNum)
{
  ?CG_SnapshotMP_ClearSnapshots@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_SnapshotMP_ShutdownEntity
==============
*/

void __fastcall CG_SnapshotMP_ShutdownEntity(LocalClientNum_t localClientNum, centity_t *cent)
{
  ?CG_SnapshotMP_ShutdownEntity@@YAXW4LocalClientNum_t@@PEAUcentity_t@@@Z(localClientNum, cent);
}

/*
==============
CG_SnapshotMP_ResetEntity
==============
*/

void __fastcall CG_SnapshotMP_ResetEntity(LocalClientNum_t localClientNum, centity_t *cent, int newEntity)
{
  ?CG_SnapshotMP_ResetEntity@@YAXW4LocalClientNum_t@@PEAUcentity_t@@H@Z(localClientNum, cent, newEntity);
}

/*
==============
CG_SnapshotMP_GetNextSnap
==============
*/

const CgSnapshotMP *__fastcall CG_SnapshotMP_GetNextSnap(const LocalClientNum_t localClientNum)
{
  return ?CG_SnapshotMP_GetNextSnap@@YAPEBUCgSnapshotMP@@W4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CgSnapshotMP::CgSnapshotMP
==============
*/

void __fastcall CgSnapshotMP::CgSnapshotMP(CgSnapshotMP *this)
{
  ??0CgSnapshotMP@@QEAA@XZ(this);
}

/*
==============
CG_SnapshotMP_AllocateSnapshots
==============
*/

void __fastcall CG_SnapshotMP_AllocateSnapshots(HunkUser *hunkUser, const int maxLocalClients)
{
  ?CG_SnapshotMP_AllocateSnapshots@@YAXPEAUHunkUser@@H@Z(hunkUser, maxLocalClients);
}

/*
==============
CgSnapshotMP::GetPlayerState
==============
*/

const playerState_s *__fastcall CgSnapshotMP::GetPlayerState(CgSnapshotMP *this, const LocalClientNum_t localClientNum)
{
  return ?GetPlayerState@CgSnapshotMP@@UEBAPEBUplayerState_s@@W4LocalClientNum_t@@@Z(this, localClientNum);
}

/*
==============
CG_SnapshotMP_RootMotionToCharacterInfo<clientState_t>
==============
*/

void __fastcall CG_SnapshotMP_RootMotionToCharacterInfo<clientState_t>(const int gameTime, const clientState_t *characterState, characterInfo_t *ci)
{
  ??$CG_SnapshotMP_RootMotionToCharacterInfo@UclientState_t@@@@YAXHPEBUclientState_t@@PEAUcharacterInfo_t@@@Z(gameTime, characterState, ci);
}

/*
==============
CG_SnapshotMP_ProcessSnapshots
==============
*/

void __fastcall CG_SnapshotMP_ProcessSnapshots(const LocalClientNum_t localClientNum)
{
  ?CG_SnapshotMP_ProcessSnapshots@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_SnapshotMP_HasSnapshot
==============
*/

int __fastcall CG_SnapshotMP_HasSnapshot(LocalClientNum_t localClientNum)
{
  return ?CG_SnapshotMP_HasSnapshot@@YAHW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_SnapshotMP_RootMotionToCharacterInfo<agentState_s>
==============
*/

void __fastcall CG_SnapshotMP_RootMotionToCharacterInfo<agentState_s>(const int gameTime, const agentState_s *characterState, characterInfo_t *ci)
{
  ??$CG_SnapshotMP_RootMotionToCharacterInfo@UagentState_s@@@@YAXHPEBUagentState_s@@PEAUcharacterInfo_t@@@Z(gameTime, characterState, ci);
}

/*
==============
CG_SnapshotMP_GetPrevSnap
==============
*/

const CgSnapshotMP *__fastcall CG_SnapshotMP_GetPrevSnap(const LocalClientNum_t localClientNum)
{
  return ?CG_SnapshotMP_GetPrevSnap@@YAPEBUCgSnapshotMP@@W4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CgSnapshotMP::GetServerPing
==============
*/

int __fastcall CgSnapshotMP::GetServerPing(CgSnapshotMP *this)
{
  return ?GetServerPing@CgSnapshotMP@@UEBAHXZ(this);
}

/*
==============
CG_SnapshotMP_FreeSnapshots
==============
*/

void CG_SnapshotMP_FreeSnapshots(void)
{
  ?CG_SnapshotMP_FreeSnapshots@@YAXXZ();
}

/*
==============
CG_SnapshotMP_MapRestart
==============
*/

void __fastcall CG_SnapshotMP_MapRestart(const LocalClientNum_t localClientNum)
{
  ?CG_SnapshotMP_MapRestart@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_SnapshotMP_RootMotionToCharacterInfo<agentState_s>
==============
*/
void CG_SnapshotMP_RootMotionToCharacterInfo<agentState_s>(const int gameTime, const agentState_s *characterState, characterInfo_t *ci)
{
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 2689, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION )") )
    __debugbreak();
  if ( !characterState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 2690, ASSERT_TYPE_ASSERT, "(characterState)", (const char *)&queryFormat, "characterState") )
    __debugbreak();
  if ( !ci && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 2691, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
    __debugbreak();
  Mantle_UnpackAnimData(&characterState->compressedAnimData, &ci->animData);
}

/*
==============
CG_SnapshotMP_RootMotionToCharacterInfo<clientState_t>
==============
*/
void CG_SnapshotMP_RootMotionToCharacterInfo<clientState_t>(const int gameTime, const clientState_t *characterState, characterInfo_t *ci)
{
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 2689, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION )") )
    __debugbreak();
  if ( !characterState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 2690, ASSERT_TYPE_ASSERT, "(characterState)", (const char *)&queryFormat, "characterState") )
    __debugbreak();
  if ( !ci && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 2691, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
    __debugbreak();
  Mantle_UnpackAnimData(&characterState->compressedAnimData, &ci->animData);
}

/*
==============
CgSnapshotMP::CgSnapshotMP
==============
*/
void CgSnapshotMP::CgSnapshotMP(CgSnapshotMP *this)
{
  this->__vftable = (CgSnapshotMP_vtbl *)&CgSnapshotMP::`vftable';
  this->ps.meleeReaction.m_packed = 0;
}

/*
==============
CG_SnapshotMP_AgentStateToCharacterInfo
==============
*/
void CG_SnapshotMP_AgentStateToCharacterInfo(const LocalClientNum_t localClientNum, const int entityNum, const agentState_s *characterState, const entityState_t *es, characterInfo_t *characterInfo, const int checkCustomization)
{
  __int64 v7; 
  team_t team; 
  int dualWielding; 
  CgWeaponSystem *WeaponSystem; 
  int v14; 
  int v15; 
  CgWeaponMap *v16; 
  int modelindex; 
  int v26; 
  int v27; 
  int v28; 
  int v29; 
  int v30; 
  int v31; 
  int v32; 
  int v33; 
  int v34; 
  int v35; 
  int v36; 
  int v37; 
  int v38; 
  int v39; 
  int v40; 
  int v41; 
  int v42; 
  int v43; 
  int enableVehicleOccupancyAnimations; 
  unsigned int AnimsetIndexBySuit; 
  XAnimOwner v46; 
  unsigned int carryObjectIndex; 
  animScriptParachuteState_t skydiveAnimState; 
  bool v49; 
  animScriptVehicleSeat_t seat; 

  _RSI = characterInfo;
  v7 = localClientNum;
  if ( !characterInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 2560, ASSERT_TYPE_ASSERT, "(characterInfo)", (const char *)&queryFormat, "characterInfo") )
    __debugbreak();
  if ( !characterState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 2561, ASSERT_TYPE_ASSERT, "(characterState)", (const char *)&queryFormat, "characterState") )
    __debugbreak();
  if ( !characterInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 2340, ASSERT_TYPE_ASSERT, "(characterInfo)", (const char *)&queryFormat, "characterInfo") )
    __debugbreak();
  if ( !characterState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 2341, ASSERT_TYPE_ASSERT, "(characterState)", (const char *)&queryFormat, "characterState") )
    __debugbreak();
  if ( characterInfo->infoValid )
    team = characterInfo->team;
  else
    team = characterState->team;
  characterInfo->oldteam = team;
  characterInfo->team = characterState->team;
  characterInfo->infoValid = 1;
  characterInfo->nextValid = 1;
  characterInfo->meleeChargeEnt = characterState->meleeChargeEnt;
  characterInfo->meleeAnimDataPacked = characterState->meleeAnimDataPacked;
  characterInfo->perks = characterState->perks;
  dualWielding = characterState->dualWielding;
  if ( characterInfo->dualWielding != dualWielding )
  {
    characterInfo->dualWielding = dualWielding;
    characterInfo->dobjDirty = 1;
  }
  characterInfo->isOnStairs = characterState->isOnStairs;
  WeaponSystem = CgWeaponSystem::GetWeaponSystem((const LocalClientNum_t)v7);
  if ( !WeaponSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 2566, ASSERT_TYPE_ASSERT, "(weaponSystem)", (const char *)&queryFormat, "weaponSystem") )
    __debugbreak();
  CgWeaponSystem::ChargedWeaponUpdateChargeStateFromSnapshot(WeaponSystem, entityNum, &characterState->chargedWeaponInfo);
  v14 = 0;
  characterInfo->suitIndex = characterState->suitIndex;
  if ( es )
    v15 = *(_DWORD *)&es->clientLinkInfo & 0x7FF;
  else
    v15 = 0;
  characterInfo->linkedEntNum = v15;
  if ( !CgWeaponMap::ms_instance[v7] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
    __debugbreak();
  v16 = CgWeaponMap::ms_instance[v7];
  _RAX = BgWeaponMap::GetWeapon(v16, characterState->serverDobjHeldWeapon);
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovups ymmword ptr [rsi+760h], ymm0
    vmovups xmm1, xmmword ptr [rax+20h]
    vmovups xmmword ptr [rsi+780h], xmm1
    vmovsd  xmm0, qword ptr [rax+30h]
    vmovsd  qword ptr [rsi+790h], xmm0
  }
  *(_DWORD *)&characterInfo->serverDobjHeldWeapon.weaponCamo = *(_DWORD *)&_RAX->weaponCamo;
  _RAX = BgWeaponMap::GetWeapon(v16, characterState->serverDobjTurretWeapon);
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovups ymmword ptr [rsi+79Ch], ymm0
    vmovups xmm1, xmmword ptr [rax+20h]
    vmovups xmmword ptr [rsi+7BCh], xmm1
    vmovsd  xmm0, qword ptr [rax+30h]
    vmovsd  qword ptr [rsi+7CCh], xmm0
  }
  *(_DWORD *)&characterInfo->serverDobjTurretWeapon.weaponCamo = *(_DWORD *)&_RAX->weaponCamo;
  characterInfo->isFemale = 0;
  modelindex = characterState->modelindex;
  if ( characterInfo->modelIndex != modelindex )
  {
    characterInfo->modelIndex = modelindex;
    characterInfo->modelIndexChanged = 1;
  }
  v26 = characterState->attachModelIndex[0];
  if ( characterInfo->attachModelIndex[0] != v26 )
  {
    characterInfo->attachModelIndex[0] = v26;
    characterInfo->attachModelIndexChanged[0] = 1;
  }
  v27 = characterState->attachTagIndex[0];
  if ( characterInfo->attachTagIndex[0] != v27 )
  {
    characterInfo->attachTagIndex[0] = v27;
    characterInfo->attachTagIndexChanged[0] = 1;
  }
  v28 = characterState->attachModelIndex[1];
  if ( characterInfo->attachModelIndex[1] != v28 )
  {
    characterInfo->attachModelIndex[1] = v28;
    characterInfo->attachModelIndexChanged[1] = 1;
  }
  v29 = characterState->attachTagIndex[1];
  if ( characterInfo->attachTagIndex[1] != v29 )
  {
    characterInfo->attachTagIndex[1] = v29;
    characterInfo->attachTagIndexChanged[1] = 1;
  }
  v30 = characterState->attachModelIndex[2];
  if ( characterInfo->attachModelIndex[2] != v30 )
  {
    characterInfo->attachModelIndex[2] = v30;
    characterInfo->attachModelIndexChanged[2] = 1;
  }
  v31 = characterState->attachTagIndex[2];
  if ( characterInfo->attachTagIndex[2] != v31 )
  {
    characterInfo->attachTagIndex[2] = v31;
    characterInfo->attachTagIndexChanged[2] = 1;
  }
  v32 = characterState->attachModelIndex[3];
  if ( characterInfo->attachModelIndex[3] != v32 )
  {
    characterInfo->attachModelIndex[3] = v32;
    characterInfo->attachModelIndexChanged[3] = 1;
  }
  v33 = characterState->attachTagIndex[3];
  if ( characterInfo->attachTagIndex[3] != v33 )
  {
    characterInfo->attachTagIndex[3] = v33;
    characterInfo->attachTagIndexChanged[3] = 1;
  }
  v34 = characterState->attachModelIndex[4];
  if ( characterInfo->attachModelIndex[4] != v34 )
  {
    characterInfo->attachModelIndex[4] = v34;
    characterInfo->attachModelIndexChanged[4] = 1;
  }
  v35 = characterState->attachTagIndex[4];
  if ( characterInfo->attachTagIndex[4] != v35 )
  {
    characterInfo->attachTagIndex[4] = v35;
    characterInfo->attachTagIndexChanged[4] = 1;
  }
  v36 = characterState->attachModelIndex[5];
  if ( characterInfo->attachModelIndex[5] != v36 )
  {
    characterInfo->attachModelIndex[5] = v36;
    characterInfo->attachModelIndexChanged[5] = 1;
  }
  v37 = characterState->attachTagIndex[5];
  if ( characterInfo->attachTagIndex[5] != v37 )
  {
    characterInfo->attachTagIndex[5] = v37;
    characterInfo->attachTagIndexChanged[5] = 1;
  }
  v38 = characterState->attachModelIndex[6];
  if ( characterInfo->attachModelIndex[6] != v38 )
  {
    characterInfo->attachModelIndex[6] = v38;
    characterInfo->attachModelIndexChanged[6] = 1;
  }
  v39 = characterState->attachTagIndex[6];
  if ( characterInfo->attachTagIndex[6] != v39 )
  {
    characterInfo->attachTagIndex[6] = v39;
    characterInfo->attachTagIndexChanged[6] = 1;
  }
  v40 = characterState->attachModelIndex[7];
  if ( characterInfo->attachModelIndex[7] != v40 )
  {
    characterInfo->attachModelIndex[7] = v40;
    characterInfo->attachModelIndexChanged[7] = 1;
  }
  v41 = characterState->attachTagIndex[7];
  if ( characterInfo->attachTagIndex[7] != v41 )
  {
    characterInfo->attachTagIndex[7] = v41;
    characterInfo->attachTagIndexChanged[7] = 1;
  }
  v42 = characterState->attachModelIndex[8];
  if ( characterInfo->attachModelIndex[8] != v42 )
  {
    characterInfo->attachModelIndex[8] = v42;
    characterInfo->attachModelIndexChanged[8] = 1;
  }
  v43 = characterState->attachTagIndex[8];
  if ( characterInfo->attachTagIndex[8] != v43 )
  {
    characterInfo->attachTagIndex[8] = v43;
    characterInfo->attachTagIndexChanged[8] = 1;
  }
  characterInfo->attachModelIsOnBack = 0;
  characterInfo->offhandShieldDeployed = characterState->offhandShieldDeployed;
  characterInfo->isUsingWeaponAltMode = characterState->isUsingWeaponAltMode;
  characterInfo->hybridScopeState = characterState->hybridScopeState;
  characterInfo->usingNVG = characterState->usingNVG;
  characterInfo->isOnWall = characterState->isOnWall;
  characterInfo->isScriptedSceneAnim = characterState->isScriptedSceneAnim;
  characterInfo->mantleSpeedAnimCond = characterState->mantleSpeedAnimCond;
  enableVehicleOccupancyAnimations = characterInfo->enableVehicleOccupancyAnimations;
  LOBYTE(v14) = characterState->enableVehicleOccupancyAnimations;
  characterInfo->enableVehicleOccupancyAnimations = v14;
  if ( enableVehicleOccupancyAnimations != v14 )
    characterInfo->dobjDirty = 1;
  characterInfo->animLinkedToType = characterState->animLinkedToType;
  characterInfo->doNotSimulateTracers = characterState->doNotSimulateTracers;
  characterInfo->isWeaponSmoking[0] = characterState->isWeaponSmoking[0];
  characterInfo->isWeaponSmoking[1] = characterState->isWeaponSmoking[1];
  if ( PlayerASM_IsEnabled() )
  {
    AnimsetIndexBySuit = BG_PlayerASM_GetAnimsetIndexBySuit(characterInfo->suitIndex);
    LOBYTE(v46) = 1;
    BG_PlayersASM_ResetSmallAnimTree(AnimsetIndexBySuit, v46, characterInfo);
  }
  characterInfo->clothType = characterState->clothType;
  characterInfo->canEmitFootsteps = characterState->canEmitFootsteps;
  characterInfo->footstepActionType = characterState->footstepActionType;
  characterInfo->footstepMoveType = characterState->footstepMoveType;
  characterInfo->playerASM_scripted_anim_start_time = characterState->playerASM_scripted_anim_start_time;
  characterInfo->execution = characterState->execution;
  characterInfo->executionStance = characterState->executionStance;
  characterInfo->executionStartTime = characterState->executionStartTime;
  carryObjectIndex = characterState->carryObjectIndex;
  if ( characterInfo->carryObjectIndex != carryObjectIndex )
  {
    characterInfo->dobjDirty = 1;
    carryObjectIndex = characterState->carryObjectIndex;
  }
  skydiveAnimState = characterInfo->skydiveAnimState;
  characterInfo->carryObjectIndex = carryObjectIndex;
  characterInfo->carryObjectFlags = characterState->carryObjectFlags;
  v49 = BG_SkydiveAnimStateNeedParachuteModel((const animScriptParachuteState_t)characterState->skydiveAnimState);
  if ( BG_SkydiveAnimStateNeedParachuteModel(skydiveAnimState) != v49 )
    characterInfo->dobjDirty = 1;
  characterInfo->skydiveAnimState = characterState->skydiveAnimState;
  seat = characterInfo->vehicleAnimation.seat;
  if ( characterState->vehicleAnimStateSeat != seat )
  {
    characterInfo->dobjDirty = 1;
    characterInfo->vehicleAnimation.prevSeat = seat;
    characterInfo->vehicleAnimation.seat = characterState->vehicleAnimStateSeat;
  }
  characterInfo->isNearEnvironmentCollision = 0;
  CG_GameInterface_SnapshotMP_AgentStateToCharacterInfo((const LocalClientNum_t)v7, entityNum, characterState, characterInfo, checkCustomization);
}

/*
==============
CG_SnapshotMP_AllocateSnapshots
==============
*/
void CG_SnapshotMP_AllocateSnapshots(HunkUser *hunkUser, const int maxLocalClients)
{
  __int64 v2; 
  __int64 v4; 
  CgSnapshotMP **v5; 
  CgSnapshotMP *v6; 
  CgSnapshotMP *v7; 

  v2 = (unsigned int)maxLocalClients;
  if ( (unsigned int)maxLocalClients > 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 4499, ASSERT_TYPE_ASSERT, "( 0 ) <= ( maxLocalClients ) && ( maxLocalClients ) <= ( 2 )", "maxLocalClients not in [0, STATIC_MAX_LOCAL_CLIENTS]\n\t%i not in [%i, %i]", maxLocalClients, 0i64, 2) )
    __debugbreak();
  if ( (int)v2 > 0 )
  {
    v4 = v2;
    v5 = s_activeSnapshots;
    do
    {
      if ( *v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 4503, ASSERT_TYPE_ASSERT, "(s_activeSnapshots[localClientIndex] == 0)", (const char *)&queryFormat, "s_activeSnapshots[localClientIndex] == NULL") )
        __debugbreak();
      v6 = (CgSnapshotMP *)Mem_HunkUser_AllocInternal(hunkUser, 0x1750B0ui64, 0x80ui64, "CG_SnapshotMP_AllocateSnapshots");
      *v5 = v6;
      v7 = v6;
      memset_0(&v6->snapFlags, 0, 0x1170ui64);
      memset_0(&v7->ps.equippedExecution, 0, 0xB96DCui64);
      memset_0(&v7[1].snapFlags, 0, 0xBA850ui64);
      ++v5;
      v7->__vftable = (CgSnapshotMP_vtbl *)&CgSnapshotMP::`vftable';
      v7->ps.meleeReaction.m_packed = 0;
      v7[1].__vftable = (CgSnapshotMP_vtbl *)&CgSnapshotMP::`vftable';
      v7[1].ps.meleeReaction.m_packed = 0;
      --v4;
    }
    while ( v4 );
  }
  s_allocatedClientCount_0 = v2;
  CG_Snapshot_SetSnapshotType(SNAP_TYPE_MP);
}

/*
==============
CG_SnapshotMP_AnyCustomizationModelChanged
==============
*/
char CG_SnapshotMP_AnyCustomizationModelChanged(const clientState_t *const prevClientState, const clientState_t *const nextClientState)
{
  const ClConfigStrings *ClConfigStrings; 
  __int64 modelindex; 
  __int64 v6; 
  int *attachModelIndex; 
  unsigned int v9; 
  unsigned int v10; 
  signed __int64 v11; 
  int v12; 
  ClientCustomizationInfo *i; 
  __int64 v14; 
  __int64 v15; 
  char *fmt; 

  if ( !prevClientState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 2280, ASSERT_TYPE_ASSERT, "(prevClientState)", (const char *)&queryFormat, "prevClientState") )
    __debugbreak();
  if ( !nextClientState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 2281, ASSERT_TYPE_ASSERT, "(nextClientState)", (const char *)&queryFormat, "nextClientState") )
    __debugbreak();
  ClConfigStrings = ClConfigStrings::GetClConfigStrings();
  if ( !ClConfigStrings && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 2287, ASSERT_TYPE_ASSERT, "(cs)", (const char *)&queryFormat, "cs") )
    __debugbreak();
  modelindex = (unsigned int)prevClientState->modelindex;
  v6 = (unsigned int)nextClientState->modelindex;
  if ( (_DWORD)modelindex == (_DWORD)v6 )
  {
    attachModelIndex = nextClientState->attachModelIndex;
    v9 = 0;
    v10 = 0;
    v11 = (char *)prevClientState - (char *)nextClientState;
    do
    {
      v12 = *(int *)((char *)attachModelIndex + v11);
      if ( v12 != *attachModelIndex && (CG_SnapshotMP_ModelIndexIsCustomizationHead(ClConfigStrings, v12) || CG_SnapshotMP_ModelIndexIsCustomizationHead(ClConfigStrings, *attachModelIndex)) )
      {
        v15 = 4i64 * v10 + 44;
        LODWORD(fmt) = *(int *)((char *)&nextClientState->clientIndex + v15);
        Com_Printf(14, "CL_StreamSync: Customization Head attach model %d changed (%d->%d)\n", v10, *(unsigned int *)((char *)&prevClientState->clientIndex + v15), fmt);
        return 1;
      }
      ++v10;
      ++attachModelIndex;
    }
    while ( v10 < 9 );
    for ( i = &nextClientState->customization; ; i = (ClientCustomizationInfo *)((char *)i + 4) )
    {
      v14 = *(unsigned int *)((char *)i->modelIndex + v11);
      if ( (_DWORD)v14 != i->modelIndex[0] )
        break;
      if ( ++v9 >= 3 )
        return 0;
    }
    LODWORD(fmt) = i->modelIndex[0];
    Com_Printf(14, "CL_StreamSync: Customization %d changed (%d->%d)\n", v9, v14, fmt);
    return 1;
  }
  else
  {
    Com_Printf(14, "CL_StreamSync: Model changed (%d->%d)\n", modelindex, v6);
    return 1;
  }
}

/*
==============
CG_SnapshotMP_ClearSnapshots
==============
*/
void CG_SnapshotMP_ClearSnapshots(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  __int64 v2; 
  __int64 v3; 
  int v4; 
  __int64 v5; 
  CgSnapshotMP *v6; 
  __int64 v8; 
  int v9; 

  v1 = localClientNum;
  if ( localClientNum >= (unsigned int)s_allocatedClientCount_0 )
  {
    v9 = s_allocatedClientCount_0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 4479, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( s_allocatedClientCount )", "localClientNum doesn't index s_allocatedClientCount\n\t%i not in [0, %i)", localClientNum, v9) )
      __debugbreak();
  }
  if ( CG_Snapshot_GetSnapshotType() != SNAP_TYPE_MP )
  {
    LODWORD(v8) = CG_Snapshot_GetSnapshotType();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 4480, ASSERT_TYPE_ASSERT, "(CG_Snapshot_GetSnapshotType() == CgSnapshotType::SNAP_TYPE_MP)", "%s\n\tCG_SnapshotMP_FreeSnapshots: Trying to free multiplayer snapshots but the snapshot system has not allocated multiplayer snaps. Allocated type is:%d\n", "CG_Snapshot_GetSnapshotType() == CgSnapshotType::SNAP_TYPE_MP", v8) )
      __debugbreak();
  }
  v2 = v1;
  v3 = 1i64;
  v4 = 1;
  v5 = 1i64;
  do
  {
    ((void (__fastcall *)(CgSnapshotMP *, _QWORD))s_activeSnapshots[v2][v3].~snapshot_t)(&s_activeSnapshots[v2][v5], 0i64);
    --v4;
    --v5;
    --v3;
  }
  while ( v4 >= 0 );
  v6 = s_activeSnapshots[v2];
  memset_0(&v6->snapFlags, 0, 0x1170ui64);
  memset_0(&v6->ps.equippedExecution, 0, 0xB96DCui64);
  memset_0(&v6[1].snapFlags, 0, 0xBA850ui64);
  v6->__vftable = (CgSnapshotMP_vtbl *)&CgSnapshotMP::`vftable';
  v6->ps.meleeReaction.m_packed = 0;
  v6[1].__vftable = (CgSnapshotMP_vtbl *)&CgSnapshotMP::`vftable';
  v6[1].ps.meleeReaction.m_packed = 0;
}

/*
==============
CG_SnapshotMP_ClientStateToCharacterInfo
==============
*/
void CG_SnapshotMP_ClientStateToCharacterInfo(const LocalClientNum_t localClientNum, const int entityNum, const clientInfo_t *clientInfo, const clientState_t *prevCharacterState, const clientState_t *characterState, const entityState_t *es, characterInfo_t *characterInfo, const int checkCustomization)
{
  unsigned __int64 v9; 
  __int64 v10; 
  CgGlobalsMP *LocalClientGlobals; 
  CgWeaponSystem *WeaponSystem; 
  team_t team; 
  int dualWielding; 
  const SuitDef *SuitDef; 
  int v17; 
  __int16 linkEnt; 
  int v19; 
  CgWeaponMap *v20; 
  int modelindex; 
  int v30; 
  int v31; 
  int v32; 
  int v33; 
  int v34; 
  int v35; 
  int v36; 
  int v37; 
  int v38; 
  int v39; 
  int v40; 
  int v41; 
  int v42; 
  int v43; 
  int v44; 
  int v45; 
  int v46; 
  int v47; 
  int suitIndex; 
  const SuitDef *v49; 
  const ScriptableDef *scriptableDef; 
  const dvar_t *v51; 
  const ScriptableDef *v52; 
  const dvar_t *v53; 
  const dvar_t *v54; 
  int enableVehicleOccupancyAnimations; 
  unsigned int AnimsetIndexBySuit; 
  XAnimOwner v58; 
  unsigned int carryObjectIndex; 
  animScriptParachuteState_t skydiveAnimState; 
  bool v61; 
  animScriptVehicleSeat_t seat; 
  int v64; 
  __int64 v68; 
  __int64 v69; 

  _RSI = characterInfo;
  v9 = (unsigned int)entityNum;
  v10 = localClientNum;
  if ( !characterInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 2366, ASSERT_TYPE_ASSERT, "(characterInfo)", (const char *)&queryFormat, "characterInfo") )
    __debugbreak();
  _RBP = characterState;
  if ( !characterState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 2367, ASSERT_TYPE_ASSERT, "(characterState)", (const char *)&queryFormat, "characterState") )
    __debugbreak();
  LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals((const LocalClientNum_t)v10);
  WeaponSystem = CgWeaponSystem::GetWeaponSystem((const LocalClientNum_t)v10);
  if ( !characterInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 2340, ASSERT_TYPE_ASSERT, "(characterInfo)", (const char *)&queryFormat, "characterInfo") )
    __debugbreak();
  if ( !characterState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 2341, ASSERT_TYPE_ASSERT, "(characterState)", (const char *)&queryFormat, "characterState") )
    __debugbreak();
  if ( characterInfo->infoValid )
    team = characterInfo->team;
  else
    team = characterState->team;
  characterInfo->oldteam = team;
  characterInfo->team = characterState->team;
  characterInfo->infoValid = 1;
  characterInfo->nextValid = 1;
  characterInfo->meleeChargeEnt = characterState->meleeChargeEnt;
  characterInfo->meleeAnimDataPacked = characterState->meleeAnimDataPacked;
  characterInfo->perks = characterState->perks;
  dualWielding = characterState->dualWielding;
  if ( characterInfo->dualWielding != dualWielding )
  {
    characterInfo->dualWielding = dualWielding;
    characterInfo->dobjDirty = 1;
  }
  characterInfo->isOnStairs = characterState->isOnStairs;
  CgWeaponSystem::ChargedWeaponUpdateChargeStateFromSnapshot(WeaponSystem, v9, &characterState->chargedWeaponInfo);
  SuitDef = BG_GetSuitDef(characterInfo->suitIndex);
  if ( !SuitDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 2381, ASSERT_TYPE_ASSERT, "(oldSuit)", (const char *)&queryFormat, "oldSuit") )
    __debugbreak();
  if ( LocalClientGlobals->predictedPlayerState.clientNum == (_DWORD)v9 )
  {
    characterInfo->suitIndex = LocalClientGlobals->predictedPlayerState.suitIndex;
    v17 = 0;
    linkEnt = LocalClientGlobals->predictedPlayerState.linkEnt;
    if ( linkEnt == 2047 )
      v19 = 0;
    else
      v19 = linkEnt + 1;
    characterInfo->linkedEntNum = v19;
    characterInfo->velocity = LocalClientGlobals->predictedPlayerState.velocity;
  }
  else
  {
    characterInfo->suitIndex = characterState->suitIndex;
    v17 = 0;
    if ( es )
    {
      characterInfo->linkedEntNum = *(_DWORD *)&es->clientLinkInfo & 0x7FF;
      *(_QWORD *)characterInfo->velocity.v = 0i64;
      characterInfo->velocity.v[2] = 0.0;
    }
    else
    {
      characterInfo->linkedEntNum = 0;
    }
  }
  if ( !CgWeaponMap::ms_instance[v10] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
    __debugbreak();
  v20 = CgWeaponMap::ms_instance[v10];
  _RAX = BgWeaponMap::GetWeapon(v20, characterState->serverDobjHeldWeapon);
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovups ymmword ptr [rsi+760h], ymm0
    vmovups xmm1, xmmword ptr [rax+20h]
    vmovups xmmword ptr [rsi+780h], xmm1
    vmovsd  xmm0, qword ptr [rax+30h]
    vmovsd  qword ptr [rsi+790h], xmm0
  }
  *(_DWORD *)&characterInfo->serverDobjHeldWeapon.weaponCamo = *(_DWORD *)&_RAX->weaponCamo;
  _RAX = BgWeaponMap::GetWeapon(v20, characterState->serverDobjTurretWeapon);
  __asm
  {
    vmovups ymm0, ymmword ptr [rax]
    vmovups ymmword ptr [rsi+79Ch], ymm0
    vmovups xmm1, xmmword ptr [rax+20h]
    vmovups xmmword ptr [rsi+7BCh], xmm1
    vmovsd  xmm0, qword ptr [rax+30h]
    vmovsd  qword ptr [rsi+7CCh], xmm0
  }
  *(_DWORD *)&characterInfo->serverDobjTurretWeapon.weaponCamo = *(_DWORD *)&_RAX->weaponCamo;
  modelindex = characterState->modelindex;
  if ( characterInfo->modelIndex != modelindex )
  {
    characterInfo->modelIndex = modelindex;
    characterInfo->modelIndexChanged = 1;
  }
  v30 = characterState->attachModelIndex[0];
  if ( characterInfo->attachModelIndex[0] != v30 )
  {
    characterInfo->attachModelIndex[0] = v30;
    characterInfo->attachModelIndexChanged[0] = 1;
  }
  v31 = characterState->attachTagIndex[0];
  if ( characterInfo->attachTagIndex[0] != v31 )
  {
    characterInfo->attachTagIndex[0] = v31;
    characterInfo->attachTagIndexChanged[0] = 1;
  }
  v32 = characterState->attachModelIndex[1];
  if ( characterInfo->attachModelIndex[1] != v32 )
  {
    characterInfo->attachModelIndex[1] = v32;
    characterInfo->attachModelIndexChanged[1] = 1;
  }
  v33 = characterState->attachTagIndex[1];
  if ( characterInfo->attachTagIndex[1] != v33 )
  {
    characterInfo->attachTagIndex[1] = v33;
    characterInfo->attachTagIndexChanged[1] = 1;
  }
  v34 = characterState->attachModelIndex[2];
  if ( characterInfo->attachModelIndex[2] != v34 )
  {
    characterInfo->attachModelIndex[2] = v34;
    characterInfo->attachModelIndexChanged[2] = 1;
  }
  v35 = characterState->attachTagIndex[2];
  if ( characterInfo->attachTagIndex[2] != v35 )
  {
    characterInfo->attachTagIndex[2] = v35;
    characterInfo->attachTagIndexChanged[2] = 1;
  }
  v36 = characterState->attachModelIndex[3];
  if ( characterInfo->attachModelIndex[3] != v36 )
  {
    characterInfo->attachModelIndex[3] = v36;
    characterInfo->attachModelIndexChanged[3] = 1;
  }
  v37 = characterState->attachTagIndex[3];
  if ( characterInfo->attachTagIndex[3] != v37 )
  {
    characterInfo->attachTagIndex[3] = v37;
    characterInfo->attachTagIndexChanged[3] = 1;
  }
  v38 = characterState->attachModelIndex[4];
  if ( characterInfo->attachModelIndex[4] != v38 )
  {
    characterInfo->attachModelIndex[4] = v38;
    characterInfo->attachModelIndexChanged[4] = 1;
  }
  v39 = characterState->attachTagIndex[4];
  if ( characterInfo->attachTagIndex[4] != v39 )
  {
    characterInfo->attachTagIndex[4] = v39;
    characterInfo->attachTagIndexChanged[4] = 1;
  }
  v40 = characterState->attachModelIndex[5];
  if ( characterInfo->attachModelIndex[5] != v40 )
  {
    characterInfo->attachModelIndex[5] = v40;
    characterInfo->attachModelIndexChanged[5] = 1;
  }
  v41 = characterState->attachTagIndex[5];
  if ( characterInfo->attachTagIndex[5] != v41 )
  {
    characterInfo->attachTagIndex[5] = v41;
    characterInfo->attachTagIndexChanged[5] = 1;
  }
  v42 = characterState->attachModelIndex[6];
  if ( characterInfo->attachModelIndex[6] != v42 )
  {
    characterInfo->attachModelIndex[6] = v42;
    characterInfo->attachModelIndexChanged[6] = 1;
  }
  v43 = characterState->attachTagIndex[6];
  if ( characterInfo->attachTagIndex[6] != v43 )
  {
    characterInfo->attachTagIndex[6] = v43;
    characterInfo->attachTagIndexChanged[6] = 1;
  }
  v44 = characterState->attachModelIndex[7];
  if ( characterInfo->attachModelIndex[7] != v44 )
  {
    characterInfo->attachModelIndex[7] = v44;
    characterInfo->attachModelIndexChanged[7] = 1;
  }
  v45 = characterState->attachTagIndex[7];
  if ( characterInfo->attachTagIndex[7] != v45 )
  {
    characterInfo->attachTagIndex[7] = v45;
    characterInfo->attachTagIndexChanged[7] = 1;
  }
  v46 = characterState->attachModelIndex[8];
  if ( characterInfo->attachModelIndex[8] != v46 )
  {
    characterInfo->attachModelIndex[8] = v46;
    characterInfo->attachModelIndexChanged[8] = 1;
  }
  v47 = characterState->attachTagIndex[8];
  if ( characterInfo->attachTagIndex[8] != v47 )
  {
    characterInfo->attachTagIndex[8] = v47;
    characterInfo->attachTagIndexChanged[8] = 1;
  }
  suitIndex = characterInfo->suitIndex;
  characterInfo->attachModelIsOnBack = characterState->attachModelIsOnBack;
  v49 = BG_GetSuitDef(suitIndex);
  if ( !SuitDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 2434, ASSERT_TYPE_ASSERT, "(oldSuit)", (const char *)&queryFormat, "oldSuit") )
    __debugbreak();
  scriptableDef = v49->scriptableDef;
  if ( scriptableDef != SuitDef->scriptableDef )
    goto LABEL_112;
  if ( (unsigned int)v10 >= 2 )
  {
    LODWORD(v68) = v10;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_link.h", 28, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( g_scriptableClEntityLinkBound ) ) + 0 ) )", "localClientNum doesn't index g_scriptableClEntityLinkBound\n\t%i not in [0, %i)", v68, 2) )
      __debugbreak();
  }
  if ( (unsigned int)v9 >= 0x800 )
  {
    LODWORD(v69) = 2048;
    LODWORD(v68) = v9;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v68, v69) )
      __debugbreak();
  }
  scriptableDef = v49->scriptableDef;
  if ( (scriptableDef != NULL) != (((0x80000000 >> (v9 & 0x1F)) & g_scriptableClEntityLinkBound[v10].array[v9 >> 5]) != 0) )
  {
LABEL_112:
    if ( ScriptableCl_UpdateReservedScriptableEntityBinding((const LocalClientNum_t)v10, v9, scriptableDef) == Started )
      Com_Printf(14, "CG_SnapshotMP_ClientStateToCharacterInfo: Failed to bind scriptable '%s' to entity %i. Playerstate could be out of sync with the world, will try again.\n", v49->scriptableDef->name, (unsigned int)v9);
  }
  v51 = DCONST_DVARBOOL_scriptable_debug_determinism;
  if ( !DCONST_DVARBOOL_scriptable_debug_determinism && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "scriptable_debug_determinism") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v51);
  if ( v51->current.enabled )
  {
    v52 = v49->scriptableDef;
    if ( v52 )
      ScriptableCl_CheckBoundToReservedDef((const LocalClientNum_t)v10, v9, v52);
  }
  v53 = DVARBOOL_cg_prematch_playerVisbilityRequiresCharacterModels;
  if ( !DVARBOOL_cg_prematch_playerVisbilityRequiresCharacterModels && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_prematch_playerVisbilityRequiresCharacterModels") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v53);
  if ( v53->current.enabled && CG_MainMP_IsPrematchCountdown((const LocalClientNum_t)v10) )
    goto LABEL_98;
  v54 = DCONST_DVARBOOL_cg_customizationMP_devNoLatch;
  if ( !DCONST_DVARBOOL_cg_customizationMP_devNoLatch && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_customizationMP_devNoLatch") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v54);
  if ( v54->current.enabled )
LABEL_98:
    CG_CustomizationMP_ResetCustomizationLatchForClient((const LocalClientNum_t)v10, v9);
  characterInfo->offhandShieldDeployed = characterState->offhandShieldDeployed;
  characterInfo->isUsingWeaponAltMode = characterState->isUsingWeaponAltMode;
  characterInfo->hybridScopeState = characterState->hybridScopeState;
  characterInfo->usingNVG = characterState->usingNVG;
  characterInfo->isOnWall = characterState->isOnWall;
  characterInfo->isScriptedSceneAnim = characterState->isScriptedSceneAnim;
  characterInfo->mantleSpeedAnimCond = characterState->mantleSpeedAnimCond;
  enableVehicleOccupancyAnimations = characterInfo->enableVehicleOccupancyAnimations;
  LOBYTE(v17) = characterState->enableVehicleOccupancyAnimations;
  characterInfo->enableVehicleOccupancyAnimations = v17;
  if ( enableVehicleOccupancyAnimations != v17 )
    characterInfo->dobjDirty = 1;
  characterInfo->animLinkedToType = characterState->animLinkedToType;
  characterInfo->doNotSimulateTracers = characterState->doNotSimulateTracers;
  __asm
  {
    vmovups ymm0, ymmword ptr [rbp+0FCh]
    vmovups ymmword ptr [rsi+974h], ymm0
  }
  characterInfo->mount.pivotHeight = characterState->mount.pivotHeight;
  characterInfo->prevHeightOffset = characterInfo->nextHeightOffset;
  characterInfo->nextHeightOffset = characterState->heightOffset;
  characterInfo->isWeaponSmoking[0] = characterState->isWeaponSmoking[0];
  characterInfo->isWeaponSmoking[1] = characterState->isWeaponSmoking[1];
  if ( PlayerASM_IsEnabled() )
  {
    AnimsetIndexBySuit = BG_PlayerASM_GetAnimsetIndexBySuit(characterInfo->suitIndex);
    LOBYTE(v58) = 1;
    BG_PlayersASM_ResetAnimTree(AnimsetIndexBySuit, CG_MainMP_AllocXAnimClient, v58, characterInfo);
  }
  characterInfo->clothType = characterState->clothType;
  characterInfo->canEmitFootsteps = characterState->canEmitFootsteps;
  characterInfo->footstepActionType = characterState->footstepActionType;
  characterInfo->footstepMoveType = characterState->footstepMoveType;
  characterInfo->playerASM_scripted_anim_start_time = characterState->playerASM_scripted_anim_start_time;
  characterInfo->execution = characterState->execution;
  characterInfo->executionStance = characterState->executionStance;
  characterInfo->executionStartTime = characterState->executionStartTime;
  characterInfo->movingPlatform = characterState->movingPlatform;
  carryObjectIndex = characterState->carryObjectIndex;
  if ( characterInfo->carryObjectIndex != carryObjectIndex )
  {
    characterInfo->dobjDirty = 1;
    carryObjectIndex = characterState->carryObjectIndex;
  }
  skydiveAnimState = characterInfo->skydiveAnimState;
  characterInfo->carryObjectIndex = carryObjectIndex;
  characterInfo->carryObjectFlags = characterState->carryObjectFlags;
  v61 = BG_SkydiveAnimStateNeedParachuteModel((const animScriptParachuteState_t)characterState->skydiveAnimState);
  if ( BG_SkydiveAnimStateNeedParachuteModel(skydiveAnimState) != v61 )
    characterInfo->dobjDirty = 1;
  characterInfo->skydiveAnimState = characterState->skydiveAnimState;
  seat = characterInfo->vehicleAnimation.seat;
  if ( characterState->vehicleAnimStateSeat != seat )
  {
    characterInfo->dobjDirty = 1;
    characterInfo->vehicleAnimation.prevSeat = seat;
    characterInfo->vehicleAnimation.seat = characterState->vehicleAnimStateSeat;
  }
  __asm { vmovsd  xmm0, qword ptr [rsi+934h] }
  v64 = *(_DWORD *)&characterInfo->nextDoorState[0].owner;
  __asm { vmovsd  qword ptr [rsi+91Ch], xmm0 }
  *(_DWORD *)&characterInfo->prevDoorState[0].owner = v64;
  __asm
  {
    vmovsd  xmm0, qword ptr [rbp+134h]
    vmovsd  qword ptr [rsi+934h], xmm0
  }
  *(_DWORD *)&characterInfo->nextDoorState[0].owner = *(_DWORD *)&characterState->doorState[0].owner;
  __asm
  {
    vmovsd  xmm0, qword ptr [rsi+940h]
    vmovsd  qword ptr [rsi+928h], xmm0
  }
  *(_DWORD *)&characterInfo->prevDoorState[1].owner = *(_DWORD *)&characterInfo->nextDoorState[1].owner;
  __asm
  {
    vmovsd  xmm0, qword ptr [rbp+140h]
    vmovsd  qword ptr [rsi+940h], xmm0
  }
  *(_DWORD *)&characterInfo->nextDoorState[1].owner = *(_DWORD *)&characterState->doorState[1].owner;
  characterInfo->lastStandReviving = characterState->lastStandReviving;
  characterInfo->lastStandSelfReviving = characterState->lastStandSelfReviving;
  characterInfo->isNearEnvironmentCollision = characterState->isNearEnvironmentCollision;
  CG_GameInterface_SnapshotMP_ClientStateToCharacterInfo((const LocalClientNum_t)v10, v9, clientInfo, characterState, characterInfo, checkCustomization);
}

/*
==============
CG_SnapshotMP_EntityNeedsLODChange
==============
*/
char CG_SnapshotMP_EntityNeedsLODChange(const LocalClientNum_t localClientNum, const bool inPrevSnap, const bool isKillcamTransition, const centity_t *const cent)
{
  bool IsEntityHighLoD; 

  IsEntityHighLoD = CG_IsEntityHighLoD(localClientNum, cent->nextState.number);
  if ( CG_WasEntityHighLoD(localClientNum, cent->nextState.number) )
  {
    if ( !IsEntityHighLoD )
      return -1;
  }
  else if ( IsEntityHighLoD )
  {
    return 1;
  }
  return 0;
}

/*
==============
CG_SnapshotMP_EntityNeedsReset
==============
*/
__int64 CG_SnapshotMP_EntityNeedsReset(const LocalClientNum_t localClientNum, const int inPreviousSnap, const centity_t *cent, int *outIsNewEntity)
{
  entityType_s eType; 
  CgStatic *LocalClientStatics; 
  __int64 number; 
  cg_t *LocalClientGlobals; 
  const characterInfo_t *CharacterInfo; 
  int usingAnimState; 
  cgs_t *LocalClientStaticGlobals; 
  int AgentCorpseEntityIndexOffset; 
  __int64 v16; 
  unsigned int animData; 
  int v18; 
  bool v19; 
  __int64 v21; 
  __int64 v22; 

  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 3006, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( !outIsNewEntity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 3007, ASSERT_TYPE_ASSERT, "(outIsNewEntity)", (const char *)&queryFormat, "outIsNewEntity") )
    __debugbreak();
  *outIsNewEntity = 1;
  if ( !inPreviousSnap || cent->pose.eType != cent->nextState.eType || BG_IsVehicleEntity(&cent->nextState) && cent->prevState.u.anonymous.data[0] != cent->nextState.lerp.u.anonymous.data[0] )
    return 1i64;
  eType = cent->nextState.eType;
  if ( eType == ET_AGENT )
  {
    LocalClientStatics = CgStatic::GetLocalClientStatics(localClientNum);
    number = cent->nextState.number;
    LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)LocalClientStatics->m_localClientNum);
    if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static_inline.h", 33, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
      __debugbreak();
    if ( LocalClientGlobals->IsMP(LocalClientGlobals) )
    {
      if ( (unsigned int)number >= LocalClientGlobals[1].predictedPlayerState.rxvOmnvars[64].timeModified )
      {
        LODWORD(v21) = number;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_globals_mp_inline.h", 19, ASSERT_TYPE_ASSERT, "(unsigned)( characterIndex ) < (unsigned)( static_cast<int>( m_characterInfoCount ) )", "characterIndex doesn't index static_cast<int>( m_characterInfoCount )\n\t%i not in [0, %i)", v21, LocalClientGlobals[1].predictedPlayerState.rxvOmnvars[64].timeModified) )
          __debugbreak();
      }
      CharacterInfo = (const characterInfo_t *)(*(_QWORD *)&LocalClientGlobals[1].predictedPlayerState.rxvOmnvars[62] + 14792 * number);
    }
    else
    {
      CharacterInfo = CgGlobalsSP::GetCharacterInfo((CgGlobalsSP *)LocalClientGlobals, number);
    }
    if ( !CharacterInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 3036, ASSERT_TYPE_ASSERT, "(characterInfo)", (const char *)&queryFormat, "characterInfo") )
      __debugbreak();
    usingAnimState = CharacterInfo->usingAnimState;
    if ( (*(_BYTE *)&cent->nextState.animInfo.selectAnim & 1) != 0 )
    {
      if ( !usingAnimState )
        return 1i64;
    }
    else if ( usingAnimState || PlayerASM_IsEnabled() && CharacterInfo->playerASMAnim.animSet != BG_PlayerASM_GetAnimset(&cent->nextState) )
    {
      return 1i64;
    }
  }
  if ( cent->nextState.eType == ET_AGENT_CORPSE )
  {
    LocalClientStaticGlobals = CG_GetLocalClientStaticGlobals(localClientNum);
    AgentCorpseEntityIndexOffset = ComCharacterLimits::GetAgentCorpseEntityIndexOffset();
    if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 137, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
      __debugbreak();
    if ( cent->nextState.number - AgentCorpseEntityIndexOffset >= ComCharacterLimits::ms_gameData.m_agentCorpseCount )
    {
      if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 137, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
        __debugbreak();
      LODWORD(v22) = ComCharacterLimits::ms_gameData.m_agentCorpseCount;
      LODWORD(v21) = cent->nextState.number - AgentCorpseEntityIndexOffset;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 3072, ASSERT_TYPE_ASSERT, "(unsigned)( cent->nextState.number - agentCorpseEntityOffset ) < (unsigned)( ComCharacterLimits::GetAgentCorpseMaxCount() )", "cent->nextState.number - agentCorpseEntityOffset doesn't index ComCharacterLimits::GetAgentCorpseMaxCount()\n\t%i not in [0, %i)", v21, v22) )
        __debugbreak();
    }
    if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 137, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
      __debugbreak();
    if ( (unsigned __int64)(int)ComCharacterLimits::ms_gameData.m_agentCorpseCount > 8 )
    {
      if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 137, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
        __debugbreak();
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 3073, ASSERT_TYPE_ASSERT, "( ComCharacterLimits::GetAgentCorpseMaxCount() ) <= ( ( sizeof( *array_counter( cgs->agentCorpseInfo ) ) + 0 ) )", "%s <= %s\n\t%i, %i", "ComCharacterLimits::GetAgentCorpseMaxCount()", "ARRAY_COUNT( cgs->agentCorpseInfo )", ComCharacterLimits::ms_gameData.m_agentCorpseCount, 8) )
        __debugbreak();
    }
    v16 = cent->nextState.number - AgentCorpseEntityIndexOffset;
    animData = cent->nextState.animInfo.animData;
    v18 = LocalClientStaticGlobals->agentCorpseInfo[v16].ci.usingAnimState;
    if ( (animData & 1) != 0 )
    {
      if ( !v18 || LocalClientStaticGlobals->agentCorpseInfo[v16].ci.characterAnim.animClass != ((animData >> 18) & 0x3F) )
        return 1i64;
    }
    else if ( v18 || PlayerASM_IsEnabled() && LocalClientStaticGlobals->agentCorpseInfo[v16].ci.playerASMAnim.animSet != BG_PlayerASM_GetAnimset(&cent->nextState) )
    {
      return 1i64;
    }
  }
  v19 = GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&cent->nextState.lerp.eFlags, ACTIVE, 2u);
  if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&cent->prevState.eFlags, ACTIVE, 2u) != v19 || (cent->nextState.eType == ET_PLAYER || eType == ET_AGENT) && CG_SnapshotMP_EntityNeedsReset_Execution(localClientNum, cent) )
  {
    *outIsNewEntity = 0;
  }
  else if ( cent->nextState.eType != ET_CLIENT_CHARACTER || cent->prevState.u.anonymous.data[0] == cent->nextState.lerp.u.anonymous.data[0] )
  {
    return 0i64;
  }
  return 1i64;
}

/*
==============
CG_SnapshotMP_EntityNeedsReset_Execution
==============
*/
__int64 CG_SnapshotMP_EntityNeedsReset_Execution(const LocalClientNum_t localClientNum, const centity_t *cent)
{
  entityState_t *p_nextState; 
  LerpEntityState *p_prevState; 
  unsigned int eType; 
  bool v7; 
  bool v8; 
  int v9; 
  cg_t *LocalClientGlobals; 
  int number; 
  __int64 outIsUsingExecutionProp; 
  bool outIsExecutionAttacker; 
  bool outIsExecutionVictim; 

  if ( !Com_GameMode_SupportsFeature(WEAPON_LADDER_CLIMB|0x80) )
    return 0i64;
  if ( (cent->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 2983, ASSERT_TYPE_ASSERT, "(CENextValid( cent ))", (const char *)&queryFormat, "CENextValid( cent )") )
    __debugbreak();
  p_nextState = &cent->nextState;
  if ( cent == (const centity_t *)-400i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 1969, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  if ( ((cent->nextState.eType - 1) & 0xFFEF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 2984, ASSERT_TYPE_ASSERT, "(BG_IsPlayerOrAgentEntity( &cent->nextState ))", (const char *)&queryFormat, "BG_IsPlayerOrAgentEntity( &cent->nextState )") )
    __debugbreak();
  p_prevState = &cent->prevState;
  if ( !p_prevState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 667, ASSERT_TYPE_ASSERT, "(prevLerpState)", (const char *)&queryFormat, "prevLerpState") )
    __debugbreak();
  if ( !p_nextState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 668, ASSERT_TYPE_ASSERT, "(nextState)", (const char *)&queryFormat, "nextState") )
    __debugbreak();
  LOBYTE(outIsUsingExecutionProp) = 0;
  if ( !p_nextState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 595, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es", outIsUsingExecutionProp) )
    __debugbreak();
  eType = (unsigned __int16)p_nextState->eType;
  v7 = 0;
  v8 = 0;
  outIsExecutionAttacker = 0;
  outIsExecutionVictim = 0;
  if ( (unsigned __int16)eType <= 0x11u )
  {
    v9 = 131111;
    if ( _bittest(&v9, eType) )
    {
      BG_GetExecutionFlags(p_nextState->lerp.u.player.playerFlags, &outIsExecutionAttacker, &outIsExecutionVictim, (bool *)&outIsUsingExecutionProp);
      v7 = outIsExecutionAttacker;
      v8 = outIsExecutionVictim;
    }
  }
  if ( (((unsigned __int16)p_prevState->u.player.playerFlags >> 5) & 3) != 1 && (((unsigned __int16)p_prevState->u.player.playerFlags >> 5) & 3) != 2 && (((unsigned __int16)p_prevState->u.player.playerFlags >> 5) & 3) != 3 && (v7 || v8) && ((LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum), number = p_nextState->number, LocalClientGlobals->clientNum == number) || LocalClientGlobals->predictedPlayerState.activeExecutionPartnerEntNum == (_WORD)number) )
    return 1i64;
  else
    return 0i64;
}

/*
==============
CG_SnapshotMP_FixupCorpseTrajectory
==============
*/
void CG_SnapshotMP_FixupCorpseTrajectory(const LocalClientNum_t localClientNum, const CgSnapshotMP *const prevSnap, centity_t *corpseCent)
{
  __int64 clientNum; 
  __int64 numEntities; 
  __int64 v12; 
  int number; 
  unsigned int v22; 
  unsigned int v23; 
  unsigned int v24; 
  unsigned int *v26; 
  unsigned int v27; 
  unsigned int v28; 
  unsigned int v29; 

  _RSI = corpseCent;
  if ( (corpseCent->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 696, ASSERT_TYPE_ASSERT, "(CENextValid( corpseCent ))", (const char *)&queryFormat, "CENextValid( corpseCent )") )
    __debugbreak();
  if ( _RSI == (centity_t *)-400i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 1990, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  if ( ((_RSI->nextState.eType - 2) & 0xFFEF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 697, ASSERT_TYPE_ASSERT, "(BG_IsPlayerOrAgentCorpseEntity( &corpseCent->nextState ))", (const char *)&queryFormat, "BG_IsPlayerOrAgentCorpseEntity( &corpseCent->nextState )") )
    __debugbreak();
  clientNum = (unsigned int)_RSI->nextState.clientNum;
  if ( (_DWORD)clientNum == prevSnap->ps.clientNum )
  {
    _RAX = CG_GetEntity(localClientNum, clientNum);
    __asm
    {
      vmovups ymm0, ymmword ptr [rax+124h]
      vmovups ymmword ptr [rsi+124h], ymm0
    }
    _RSI->prevState.pos.trDelta.v[2] = _RAX->prevState.pos.trDelta.v[2];
    __asm
    {
      vmovups ymm0, ymmword ptr [rax+148h]
      vmovups ymmword ptr [rsi+148h], ymm0
    }
    _RSI->prevState.apos.trDelta.v[2] = _RAX->prevState.apos.trDelta.v[2];
  }
  else
  {
    numEntities = prevSnap->numEntities;
    if ( numEntities <= 0 )
    {
LABEL_17:
      Com_PrintError(14, "FixupCorpseTrajectory: Failed to find corpse %i owner entity %i in previous snapshot for smooth interpolation\n", (unsigned int)_RSI->nextState.number, clientNum);
    }
    else
    {
      v12 = 0i64;
      _RDI = prevSnap->entities;
      while ( 1 )
      {
        number = _RDI->number;
        if ( (_DWORD)clientNum == number )
          break;
        if ( (int)clientNum >= number )
        {
          ++v12;
          ++_RDI;
          if ( v12 < numEntities )
            continue;
        }
        goto LABEL_17;
      }
      if ( (_RSI->nextState.eType != ET_PLAYER_CORPSE || (LOBYTE(_RSI->nextState.lerp.u.vehicle.bodyPitch) & 1) == 0) && !BGMovingPlatforms::IsEntityOnMovingPlatform(_RDI) )
      {
        __asm
        {
          vmovups ymm0, ymmword ptr [rdi+10h]
          vmovups ymmword ptr [rsi+124h], ymm0
        }
        _RBX = &_RSI->prevState.apos;
        _RSI->prevState.pos.trDelta.v[2] = _RDI->lerp.pos.trDelta.v[2];
        __asm
        {
          vmovups ymm0, ymmword ptr [rdi+34h]
          vmovups ymmword ptr [rbx], ymm0
        }
        _RSI->prevState.apos.trDelta.v[2] = _RDI->lerp.apos.trDelta.v[2];
        if ( BG_IsCharacterEntity(_RDI) )
        {
          if ( _RSI == (centity_t *)-328i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared_inline.h", 107, ASSERT_TYPE_ASSERT, "(traj)", (const char *)&queryFormat, "traj") )
            __debugbreak();
          if ( _RBX->trType == TR_LINEAR_STOP_SECURE )
          {
            v26 = &v27;
            v29 = LODWORD(_RSI->prevState.apos.trBase.v[1]) ^ s_trbase_aab_Z ^ LODWORD(_RSI->prevState.apos.trBase.v[2]);
            v28 = LODWORD(_RSI->prevState.apos.trBase.v[0]) ^ LODWORD(_RSI->prevState.apos.trBase.v[1]) ^ s_trbase_aab_Y;
            v27 = LODWORD(_RSI->prevState.apos.trBase.v[0]) ^ ~s_trbase_aab_X;
            __asm { vmovss  xmm0, [rbp+var_20] }
            memset(&v26, 0, sizeof(v26));
            __asm { vmovss  dword ptr [rbp+var_28], xmm0 }
            if ( ((unsigned int)v26 & 0x7F800000) == 2139095040 )
              goto LABEL_47;
            __asm
            {
              vmovss  xmm0, [rbp+var_1C]
              vmovss  dword ptr [rbp+var_28], xmm0
            }
            if ( ((unsigned int)v26 & 0x7F800000) == 2139095040 )
              goto LABEL_47;
            __asm
            {
              vmovss  xmm0, [rbp+var_18]
              vmovss  dword ptr [rbp+var_28], xmm0
            }
            if ( ((unsigned int)v26 & 0x7F800000) == 2139095040 )
            {
LABEL_47:
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared_inline.h", 74, ASSERT_TYPE_SANITY, "( !IS_NAN( ( to )[0] ) && !IS_NAN( ( to )[1] ) && !IS_NAN( ( to )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( to )[0] ) && !IS_NAN( ( to )[1] ) && !IS_NAN( ( to )[2] )") )
                __debugbreak();
            }
          }
          else
          {
            __asm
            {
              vmovss  xmm0, dword ptr [rbx+10h]
              vmovss  [rbp+var_1C], xmm0
            }
          }
          __asm
          {
            vxorps  xmm0, xmm0, xmm0
            vxorps  xmm1, xmm1, xmm1
            vmovss  [rbp+var_20], xmm0
            vmovss  [rbp+var_18], xmm1
          }
          if ( _RSI == (centity_t *)-328i64 )
          {
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared_inline.h", 82, ASSERT_TYPE_ASSERT, "(traj)", (const char *)&queryFormat, "traj") )
              __debugbreak();
            __asm
            {
              vmovss  xmm0, [rbp+var_20]
              vmovss  xmm1, [rbp+var_18]
            }
          }
          if ( _RBX->trType == TR_LINEAR_STOP_SECURE )
          {
            __asm { vmovss  dword ptr [rbp+var_28], xmm0 }
            if ( ((unsigned int)v26 & 0x7F800000) == 2139095040 )
              goto LABEL_48;
            __asm
            {
              vmovss  xmm0, [rbp+var_1C]
              vmovss  dword ptr [rbp+var_28], xmm0
            }
            if ( ((unsigned int)v26 & 0x7F800000) == 2139095040 )
              goto LABEL_48;
            __asm { vmovss  dword ptr [rbp+var_28], xmm1 }
            if ( ((unsigned int)v26 & 0x7F800000) == 2139095040 )
            {
LABEL_48:
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared_inline.h", 24, ASSERT_TYPE_SANITY, "( !IS_NAN( ( from )[0] ) && !IS_NAN( ( from )[1] ) && !IS_NAN( ( from )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( from )[0] ) && !IS_NAN( ( from )[1] ) && !IS_NAN( ( from )[2] )") )
                __debugbreak();
            }
            v22 = v27 ^ ~s_trbase_aab_X;
            v23 = s_trbase_aab_Y ^ v22 ^ v28;
            v24 = s_trbase_aab_Z ^ v23 ^ v29;
            LODWORD(_RSI->prevState.apos.trBase.v[0]) = v22;
            LODWORD(_RSI->prevState.apos.trBase.v[2]) = v24;
            LODWORD(_RSI->prevState.apos.trBase.v[1]) = v23;
            _RSI->prevState.apos.trDelta.v[0] = 0.0;
            memset(&v26, 0, sizeof(v26));
            _RSI->prevState.apos.trDelta.v[2] = 0.0;
          }
          else
          {
            __asm
            {
              vmovss  dword ptr [rbx+0Ch], xmm0
              vmovss  xmm0, [rbp+var_1C]
              vmovss  dword ptr [rbx+10h], xmm0
              vmovss  dword ptr [rbx+14h], xmm1
            }
            _RSI->prevState.apos.trDelta.v[0] = 0.0;
            _RSI->prevState.apos.trDelta.v[2] = 0.0;
          }
        }
      }
    }
  }
}

/*
==============
CG_SnapshotMP_FreeAgent
==============
*/
void CG_SnapshotMP_FreeAgent(LocalClientNum_t localClientNum, const unsigned int entIndex, characterInfo_t *ci)
{
  XAnimTree *pXAnimTree; 

  if ( !ci && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 2081, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
    __debugbreak();
  pXAnimTree = ci->pXAnimTree;
  memset_0(ci, 0, sizeof(characterInfo_t));
  if ( pXAnimTree )
    Com_XAnimFreeSmallTree(pXAnimTree);
  CG_AnimTreeMP_SafeDObjFree(localClientNum, entIndex);
}

/*
==============
CG_SnapshotMP_FreeClient
==============
*/
void CG_SnapshotMP_FreeClient(LocalClientNum_t localClientNum, const unsigned int entIndex, characterInfo_t *ci)
{
  XAnimTree *pXAnimTree; 

  if ( !ci && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 2062, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
    __debugbreak();
  pXAnimTree = ci->pXAnimTree;
  memset_0(ci, 0, sizeof(characterInfo_t));
  if ( pXAnimTree )
  {
    ci->pXAnimTree = pXAnimTree;
    XAnimClearTreeNoObj(pXAnimTree);
  }
  CG_AnimTreeMP_SafeDObjFree(localClientNum, entIndex);
}

/*
==============
CG_SnapshotMP_FreeSnapshots
==============
*/
void CG_SnapshotMP_FreeSnapshots(void)
{
  int v0; 
  void **v1; 
  __int64 v2; 
  int v3; 
  __int64 v4; 
  __int64 v5; 

  if ( CG_Snapshot_GetSnapshotType() == SNAP_TYPE_SP && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 4523, ASSERT_TYPE_ASSERT, "(CG_Snapshot_GetSnapshotType() != CgSnapshotType::SNAP_TYPE_SP)", "%s\n\tCG_SnapshotMP_FreeSnapshots: Trying to free multiplayer snapshots but single-player snapshots are allocated\n", "CG_Snapshot_GetSnapshotType() != CgSnapshotType::SNAP_TYPE_SP") )
    __debugbreak();
  if ( CG_Snapshot_GetSnapshotType() == SNAP_TYPE_MP )
  {
    if ( s_allocatedClientCount_0 <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 4527, ASSERT_TYPE_ASSERT, "(s_allocatedClientCount > 0)", "%s\n\tCG_SnapshotMP_FreeSnapshots: Trying to free multiplayer snapshots but no client snapshots have been allocated\n", "s_allocatedClientCount > 0") )
      __debugbreak();
    v0 = 0;
    if ( s_allocatedClientCount_0 > 0 )
    {
      v1 = (void **)s_activeSnapshots;
      do
      {
        if ( !*v1 )
        {
          LODWORD(v5) = v0;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 4531, ASSERT_TYPE_ASSERT, "(s_activeSnapshots[localClientIndex])", "%s\n\tCG_SnapshotMP_FreeSnapshots: Trying to free multiplayer snapshots but the client's snapshots have not been allocated: Local client is:%d\n", "s_activeSnapshots[localClientIndex]", v5) )
            __debugbreak();
        }
        v2 = 763992i64;
        v3 = 1;
        v4 = 763992i64;
        do
        {
          (**(void (__fastcall ***)(char *, _QWORD))((char *)*v1 + v2))((char *)*v1 + v4, 0i64);
          --v3;
          v4 -= 763992i64;
          v2 -= 763992i64;
        }
        while ( v3 >= 0 );
        DebugWipe(*v1, 0x1750B0ui64);
        *v1 = NULL;
        ++v0;
        ++v1;
      }
      while ( v0 < s_allocatedClientCount_0 );
    }
    s_allocatedClientCount_0 = 0;
    CG_Snapshot_SetSnapshotType(SNAP_TYPE_UNKNOWN);
  }
}

/*
==============
CG_SnapshotMP_GetNextSnap
==============
*/
const snapshot_t *CG_SnapshotMP_GetNextSnap(const LocalClientNum_t localClientNum)
{
  CgSnapshotType SnapshotType; 

  if ( CG_Snapshot_GetSnapshotType() != SNAP_TYPE_MP )
  {
    SnapshotType = CG_Snapshot_GetSnapshotType();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 187, ASSERT_TYPE_ASSERT, "(CG_Snapshot_GetSnapshotType() == CgSnapshotType::SNAP_TYPE_MP)", "%s\n\tCG_SnapshotMP_GetNextSnap: Trying to retrieve a multiplayer snapshot but multiplayer snapshots have not been allocated: CgSnapshotType:%d\n", "CG_Snapshot_GetSnapshotType() == CgSnapshotType::SNAP_TYPE_MP", SnapshotType) )
      __debugbreak();
  }
  return CG_GetLocalClientGlobals(localClientNum)->nextSnap;
}

/*
==============
CG_SnapshotMP_GetNextSnap_Internal
==============
*/
const snapshot_t *CG_SnapshotMP_GetNextSnap_Internal(const LocalClientNum_t localClientNum)
{
  CgSnapshotType SnapshotType; 

  if ( CG_Snapshot_GetSnapshotType() != SNAP_TYPE_MP )
  {
    SnapshotType = CG_Snapshot_GetSnapshotType();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 162, ASSERT_TYPE_ASSERT, "(CG_Snapshot_GetSnapshotType() == CgSnapshotType::SNAP_TYPE_MP)", "%s\n\tCG_SnapshotMP_GetNextSnap_Internal: Trying to retrieve a multiplayer snapshot but multiplayer snapshots have not been allocated: CgSnapshotType:%d\n", "CG_Snapshot_GetSnapshotType() == CgSnapshotType::SNAP_TYPE_MP", SnapshotType) )
      __debugbreak();
  }
  return CG_GetLocalClientGlobals(localClientNum)->nextSnap;
}

/*
==============
CG_SnapshotMP_GetPrevSnap
==============
*/
const snapshot_t *CG_SnapshotMP_GetPrevSnap(const LocalClientNum_t localClientNum)
{
  CgSnapshotType SnapshotType; 

  if ( CG_Snapshot_GetSnapshotType() != SNAP_TYPE_MP )
  {
    SnapshotType = CG_Snapshot_GetSnapshotType();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 199, ASSERT_TYPE_ASSERT, "(CG_Snapshot_GetSnapshotType() == CgSnapshotType::SNAP_TYPE_MP)", "%s\n\tCG_SnapshotMP_GetPrevSnap: Trying to retrieve a multiplayer snapshot but multiplayer snapshots have not been allocated: CgSnapshotType:%d\n", "CG_Snapshot_GetSnapshotType() == CgSnapshotType::SNAP_TYPE_MP", SnapshotType) )
      __debugbreak();
  }
  return CG_GetLocalClientGlobals(localClientNum)->snap;
}

/*
==============
CG_SnapshotMP_GetPrevSnap_Internal
==============
*/
const snapshot_t *CG_SnapshotMP_GetPrevSnap_Internal(const LocalClientNum_t localClientNum)
{
  CgSnapshotType SnapshotType; 

  if ( CG_Snapshot_GetSnapshotType() != SNAP_TYPE_MP )
  {
    SnapshotType = CG_Snapshot_GetSnapshotType();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 175, ASSERT_TYPE_ASSERT, "(CG_Snapshot_GetSnapshotType() == CgSnapshotType::SNAP_TYPE_MP)", "%s\n\tCG_SnapshotMP_GetPrevSnap_Internal: Trying to retrieve a multiplayer snapshot but multiplayer snapshots have not been allocated: CgSnapshotType:%d\n", "CG_Snapshot_GetSnapshotType() == CgSnapshotType::SNAP_TYPE_MP", SnapshotType) )
      __debugbreak();
  }
  return CG_GetLocalClientGlobals(localClientNum)->snap;
}

/*
==============
CG_SnapshotMP_HandleUnlinkedCorpseEntity
==============
*/
void CG_SnapshotMP_HandleUnlinkedCorpseEntity(const LocalClientNum_t localClientNum, const centity_t *const cent)
{
  Com_PrintWarning(29, "CG_SnapshotMP_ResetEntity_Internal -- Could not find a reserved scriptable for corpse entity %i! Clearing the DObj.\n", (unsigned int)cent->nextState.number);
  CG_AnimTreeMP_SafeDObjFree(localClientNum, cent->nextState.number);
}

/*
==============
CG_SnapshotMP_HasSnapshot
==============
*/
_BOOL8 CG_SnapshotMP_HasSnapshot(LocalClientNum_t localClientNum)
{
  return CG_GetLocalClientGlobals(localClientNum)->nextSnap != NULL;
}

/*
==============
CG_SnapshotMP_KillEffectsOnCharacters
==============
*/
void CG_SnapshotMP_KillEffectsOnCharacters(LocalClientNum_t localClientNum)
{
  __int64 v1; 
  const snapshot_t *NextSnap_Internal; 
  __int64 v3; 
  int v4; 
  unsigned int v5; 
  int *p_serverTime; 
  __int64 v7; 
  CgEntitySystem *EntitySystem; 
  __int16 v9; 
  __int64 v10; 
  __int16 *v11; 
  int v12; 
  unsigned int v13; 
  __int64 v14; 
  __int64 v15; 
  ParticleManager *v16; 

  v1 = localClientNum;
  NextSnap_Internal = CG_SnapshotMP_GetNextSnap_Internal(localClientNum);
  if ( (unsigned int)v1 >= 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.h", 866, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v1, 2) )
    __debugbreak();
  v3 = v1;
  v16 = &g_particleManager[v1];
  if ( !v16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 1501, ASSERT_TYPE_ASSERT, "(particleManager)", (const char *)&queryFormat, "particleManager") )
    __debugbreak();
  v4 = 0;
  v5 = 2048;
  if ( NextSnap_Internal[1].snapFlags > 0 )
  {
    p_serverTime = &NextSnap_Internal[1340].serverTime;
    do
    {
      if ( !p_serverTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 1507, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
        __debugbreak();
      v7 = *(__int16 *)p_serverTime;
      if ( (int)v7 >= 0 )
      {
        if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
          __debugbreak();
        if ( (int)v7 < (int)ComCharacterLimits::ms_gameData.m_characterCount )
        {
          EntitySystem = CgEntitySystem::GetEntitySystem((const LocalClientNum_t)v1);
          if ( (unsigned int)v7 >= 0x800 )
          {
            LODWORD(v15) = 2048;
            LODWORD(v14) = v7;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", v14, v15) )
              __debugbreak();
          }
          v9 = *((_WORD *)p_serverTime + 4);
          if ( ((v9 - 1) & 0xFFED) == 0 && v9 != 3 && (CgEntitySystem *)((char *)EntitySystem + 760 * v7) != (CgEntitySystem *)-16i64 && (EntitySystem->m_entities[v7].flags & 1) != 0 && Com_GetClientDObj(v7, (LocalClientNum_t)v1) )
            ParticleManager::KillAllSystemsOnDObj(v16, v7);
        }
      }
      ++v4;
      p_serverTime += 62;
    }
    while ( v4 < NextSnap_Internal[1].snapFlags );
    v3 = v1;
  }
  v10 = 2i64;
  v11 = &clientObjMap[2533 * v3 + 2048];
  v12 = 2533 * v1;
  do
  {
    if ( v5 > 0x9E4 )
    {
      LODWORD(v15) = v5;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 55, ASSERT_TYPE_ASSERT, "( ( handle >= 0 && handle < ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) ) )", "%s\n\t( handle ) = %i", "( handle >= 0 && handle < ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) )", v15) )
        __debugbreak();
    }
    if ( (unsigned int)v1 >= 2 )
    {
      LODWORD(v15) = 2;
      LODWORD(v14) = v1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 58, ASSERT_TYPE_ASSERT, "(unsigned)( localClientIndex ) < (unsigned)( (2) )", "localClientIndex doesn't index MAX_DOBJ_CLIENTS\n\t%i not in [0, %i)", v14, v15) )
        __debugbreak();
    }
    if ( v5 + v12 >= 0x13CA )
    {
      LODWORD(v15) = v5 + v12;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 62, ASSERT_TYPE_ASSERT, "( ( (unsigned)handle < ( sizeof( *array_counter( clientObjMap ) ) + 0 ) ) )", "%s\n\t( handle ) = %i", "( (unsigned)handle < ( sizeof( *array_counter( clientObjMap ) ) + 0 ) )", v15) )
        __debugbreak();
    }
    v13 = *v11;
    if ( *v11 )
    {
      if ( v13 >= (unsigned int)s_objCount )
      {
        LODWORD(v15) = *v11;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 64, ASSERT_TYPE_ASSERT, "( ( !objIndex || ( (unsigned)objIndex < s_objCount ) ) )", "%s\n\t( objIndex ) = %i", "( !objIndex || ( (unsigned)objIndex < s_objCount ) )", v15) )
          __debugbreak();
      }
      if ( s_objBuf[v13] )
        ParticleManager::KillAllSystemsOnDObj(v16, v5);
    }
    ++v5;
    ++v11;
    --v10;
  }
  while ( v10 );
}

/*
==============
CG_SnapshotMP_MapRestart
==============
*/
void CG_SnapshotMP_MapRestart(const LocalClientNum_t localClientNum)
{
  unsigned int v2; 
  int v3; 
  CgStatic *i; 
  cg_t *LocalClientGlobals; 
  characterInfo_t *CharacterInfo; 
  unsigned int v7; 
  cg_t *v8; 
  characterInfo_t *v9; 
  __int64 v10; 
  __int64 v11; 

  v2 = 0;
  v3 = 0;
  for ( i = CgStatic::GetLocalClientStatics(localClientNum); v3 < cls.maxClients; ++v3 )
  {
    LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)i->m_localClientNum);
    if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static_inline.h", 25, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
      __debugbreak();
    if ( LocalClientGlobals->IsMP(LocalClientGlobals) )
    {
      if ( v3 >= LocalClientGlobals[1].predictedPlayerState.rxvOmnvars[64].timeModified )
      {
        LODWORD(v11) = LocalClientGlobals[1].predictedPlayerState.rxvOmnvars[64].timeModified;
        LODWORD(v10) = v3;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_globals_mp_inline.h", 12, ASSERT_TYPE_ASSERT, "(unsigned)( characterIndex ) < (unsigned)( static_cast<int>( m_characterInfoCount ) )", "characterIndex doesn't index static_cast<int>( m_characterInfoCount )\n\t%i not in [0, %i)", v10, v11) )
          __debugbreak();
      }
      CharacterInfo = (characterInfo_t *)(*(_QWORD *)&LocalClientGlobals[1].predictedPlayerState.rxvOmnvars[62] + 14792i64 * v3);
    }
    else
    {
      CharacterInfo = CgGlobalsSP::GetCharacterInfo((CgGlobalsSP *)LocalClientGlobals, v3);
    }
    CG_SnapshotMP_FreeClient(localClientNum, v3, CharacterInfo);
  }
  if ( cls.maxAgents > 0 )
  {
    do
    {
      if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 116, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
        __debugbreak();
      if ( v2 >= ComCharacterLimits::ms_gameData.m_agentCount )
      {
        if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 116, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
          __debugbreak();
        LODWORD(v11) = ComCharacterLimits::ms_gameData.m_agentCount;
        LODWORD(v10) = v2;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 186, ASSERT_TYPE_ASSERT, "(unsigned)( agentIndex ) < (unsigned)( ComCharacterLimits::GetAgentMaxCount() )", "agentIndex doesn't index ComCharacterLimits::GetAgentMaxCount()\n\t%i not in [0, %i)", v10, v11) )
          __debugbreak();
      }
      if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 168, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
        __debugbreak();
      v7 = v2 + ComCharacterLimits::ms_gameData.m_clientCount;
      v8 = CG_GetLocalClientGlobals((const LocalClientNum_t)i->m_localClientNum);
      if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static_inline.h", 25, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
        __debugbreak();
      if ( v8->IsMP(v8) )
      {
        if ( v7 >= v8[1].predictedPlayerState.rxvOmnvars[64].timeModified )
        {
          LODWORD(v11) = v8[1].predictedPlayerState.rxvOmnvars[64].timeModified;
          LODWORD(v10) = v7;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_globals_mp_inline.h", 12, ASSERT_TYPE_ASSERT, "(unsigned)( characterIndex ) < (unsigned)( static_cast<int>( m_characterInfoCount ) )", "characterIndex doesn't index static_cast<int>( m_characterInfoCount )\n\t%i not in [0, %i)", v10, v11) )
            __debugbreak();
        }
        v9 = (characterInfo_t *)(*(_QWORD *)&v8[1].predictedPlayerState.rxvOmnvars[62] + 14792i64 * (int)v7);
      }
      else
      {
        v9 = CgGlobalsSP::GetCharacterInfo((CgGlobalsSP *)v8, v7);
      }
      CG_SnapshotMP_FreeAgent(localClientNum, v7, v9);
      ++v2;
    }
    while ( (int)v2 < cls.maxAgents );
  }
}

/*
==============
CG_SnapshotMP_ModelIndexIsCustomizationHead
==============
*/
_BOOL8 CG_SnapshotMP_ModelIndexIsCustomizationHead(const ClConfigStrings *const cs, const int modelIndex)
{
  const char *v4; 

  if ( !cs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 2261, ASSERT_TYPE_ASSERT, "(cs)", (const char *)&queryFormat, "cs") )
    __debugbreak();
  if ( modelIndex < 0 )
    return 0i64;
  v4 = cs->GetModelString(cs, (unsigned int)modelIndex);
  if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 2266, ASSERT_TYPE_ASSERT, "(modelName)", (const char *)&queryFormat, "modelName") )
    __debugbreak();
  return BG_Customization_IsCustomizationModel(CUSTOMIZATION_TYPE_HEAD, v4) != 0;
}

/*
==============
CG_SnapshotMP_NotifyOmnvarChanged
==============
*/
void CG_SnapshotMP_NotifyOmnvarChanged(int controllerIndex, bool hasNewOmnvarBlob, const OmnvarDef *const omnvarDef, const OmnvarData *const previous, const OmnvarData *const current)
{
  bool IsDefault; 
  bool v10; 

  if ( !omnvarDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 2726, ASSERT_TYPE_ASSERT, "(omnvarDef)", (const char *)&queryFormat, "omnvarDef") )
    __debugbreak();
  if ( !current && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 2727, ASSERT_TYPE_ASSERT, "(current)", (const char *)&queryFormat, "current") )
    __debugbreak();
  if ( (omnvarDef->flags & 1) != 0 && (omnvarDef->userType != OMNVAR_USER_TYPE_NOTIFY || !hasNewOmnvarBlob && current->current.integer) )
  {
    if ( !previous )
    {
      IsDefault = CG_Omnvar_IsDefault(omnvarDef, current);
LABEL_13:
      v10 = !IsDefault;
      goto LABEL_14;
    }
    if ( hasNewOmnvarBlob )
    {
      IsDefault = CG_Omnvar_AreValuesEqual(omnvarDef, previous, current);
      goto LABEL_13;
    }
    v10 = current->timeModified != previous->timeModified;
    if ( current->timeModified )
    {
LABEL_14:
      if ( !v10 )
        return;
      goto LABEL_15;
    }
    if ( previous->timeModified && !CG_Omnvar_AreValuesEqual(omnvarDef, previous, current) )
LABEL_15:
      LUI_NotifyOmnvarChanged(controllerIndex, omnvarDef, current, LUI_luaVM);
  }
}

/*
==============
CG_SnapshotMP_PrintOmnvarChanged
==============
*/
void CG_SnapshotMP_PrintOmnvarChanged(int controllerIndex, const OmnvarDef *const omnvarDef, const OmnvarData *const previous, const OmnvarData *const current)
{
  const char *TypeString; 
  char v8[128]; 
  char valueBuf[128]; 

  if ( !omnvarDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 2704, ASSERT_TYPE_ASSERT, "(omnvarDef)", (const char *)&queryFormat, "omnvarDef") )
    __debugbreak();
  if ( !current && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 2705, ASSERT_TYPE_ASSERT, "(current)", (const char *)&queryFormat, "current") )
    __debugbreak();
  if ( !previous || !CG_Omnvar_AreValuesEqual(omnvarDef, previous, current) )
  {
    TypeString = BG_Omnvar_GetTypeString(omnvarDef);
    BG_Omnvar_GetValueString(omnvarDef, previous, valueBuf, 0x80u);
    BG_Omnvar_GetValueString(omnvarDef, current, v8, 0x80u);
    Com_Printf(6, "Omnvar changed: %s (%s) '%s' to '%s'.\n", omnvarDef->name, TypeString, valueBuf, v8);
  }
}

/*
==============
CG_SnapshotMP_ProcessSnapshots
==============
*/
void CG_SnapshotMP_ProcessSnapshots(const LocalClientNum_t localClientNum)
{
  CgGlobalsMP *LocalClientGlobals; 
  CgStatic *LocalClientStatics; 
  __int64 v4; 
  int v5; 
  CgSnapshotMP *NextSnapshot; 
  CgSnapshotMP *v7; 
  const snapshot_t *snap; 
  CgSnapshotMP *v9; 
  const snapshot_t *nextSnap; 
  cgs_t *LocalClientStaticGlobals; 
  cgs_t *v12; 
  const CgSnapshotMP *NextSnap_Internal; 
  const snapshot_t *PrevSnap_Internal; 
  int serverTime; 
  const snapshot_t *v16; 
  int snapshotNumber; 

  Sys_ProfBeginNamedEvent(0xFFFFFFFF, "process snapshots");
  Profile_Begin(2);
  g_processEvents = 0;
  LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals(localClientNum);
  LocalClientStatics = CgStatic::GetLocalClientStatics(localClientNum);
  v4 = (__int64)LocalClientStatics->GetAnimStatics(LocalClientStatics);
  if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 4287, ASSERT_TYPE_ASSERT, "(bgameAnim)", (const char *)&queryFormat, "bgameAnim") )
    __debugbreak();
  CL_CGameMP_GetCurrentSnapshotNumber(localClientNum, &snapshotNumber, &LocalClientGlobals->latestSnapshotTime);
  v5 = snapshotNumber;
  if ( snapshotNumber != LocalClientGlobals->latestSnapshotNum )
  {
    if ( snapshotNumber < LocalClientGlobals->latestSnapshotNum )
    {
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_14430E3A0, 717i64);
      v5 = snapshotNumber;
    }
    LocalClientGlobals->latestSnapshotNum = v5;
  }
  while ( !LocalClientGlobals->snap )
  {
    NextSnapshot = CG_SnapshotMP_ReadNextSnapshot(localClientNum);
    v7 = NextSnapshot;
    if ( !NextSnapshot )
      goto LABEL_44;
    if ( (NextSnapshot->snapFlags & 2) == 0 )
    {
      CG_SnapshotMP_SetInitialSnapshot(localClientNum, NextSnapshot);
      CG_SnapshotMP_SetNextSnap(localClientNum, v7);
      CG_SnapshotMP_TransitionSnapshot(localClientNum);
      AimAssist_Setup(localClientNum, &LocalClientGlobals->predictedPlayerState, 16);
    }
  }
  CG_Entity_SetFrameInterpolation(localClientNum);
  while ( 1 )
  {
    snap = LocalClientGlobals->snap;
    if ( LocalClientGlobals->nextSnap != snap && LocalClientGlobals->cubemapShot == CUBEMAPSHOT_NONE )
      goto LABEL_25;
    v9 = CG_SnapshotMP_ReadNextSnapshot(localClientNum);
    if ( !v9 )
      break;
    if ( !LocalClientGlobals->nextSnap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 4393, ASSERT_TYPE_ASSERT, "(cgameGlob->nextSnap)", (const char *)&queryFormat, "cgameGlob->nextSnap") )
      __debugbreak();
    nextSnap = LocalClientGlobals->nextSnap;
    if ( ((LOBYTE(v9->snapFlags) ^ LOBYTE(nextSnap->snapFlags)) & 4) != 0 )
    {
      CG_SnapshotMP_SetInitialSnapshot(localClientNum, v9);
      CG_SnapshotMP_SetNextSnap(localClientNum, v9);
      CG_SnapshotMP_TransitionSnapshot(localClientNum);
    }
    else
    {
      if ( v9->serverTime - nextSnap->serverTime < 0 )
        Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_14430E410, 718i64);
      CG_SnapshotMP_SetNextSnap(localClientNum, v9);
      LocalClientStaticGlobals = CG_GetLocalClientStaticGlobals(localClientNum);
      CL_CGameMP_ExtrapolateSnap(localClientNum, LocalClientStaticGlobals->processedSnapshotNum, LocalClientGlobals->time);
      g_processEvents = 1;
      snap = LocalClientGlobals->snap;
LABEL_25:
      if ( LocalClientGlobals->time - snap->serverTime >= -1000 && LocalClientGlobals->time - LocalClientGlobals->nextSnap->serverTime < 0 )
      {
        CL_CGameMP_EndExtrapolate(localClientNum);
        goto LABEL_30;
      }
      CG_SnapshotMP_TransitionSnapshot(localClientNum);
    }
  }
  v12 = CG_GetLocalClientStaticGlobals(localClientNum);
  CL_CGameMP_BeginExtrapolate(localClientNum, v12->processedSnapshotNum);
LABEL_30:
  if ( CG_PredictMP_ItemListLocalClientNum() != localClientNum )
  {
    NextSnap_Internal = (const CgSnapshotMP *)CG_SnapshotMP_GetNextSnap_Internal(localClientNum);
    CG_PredictMP_BuildItemList(localClientNum, NextSnap_Internal);
  }
  if ( !LocalClientGlobals->snap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 4442, ASSERT_TYPE_ASSERT, "(cgameGlob->snap)", (const char *)&queryFormat, "cgameGlob->snap") )
    __debugbreak();
  if ( LocalClientGlobals->time - LocalClientGlobals->snap->serverTime < 0 )
  {
    PrevSnap_Internal = CG_SnapshotMP_GetPrevSnap_Internal(localClientNum);
    serverTime = PrevSnap_Internal->serverTime;
    LocalClientGlobals->time = serverTime;
    LocalClientGlobals->oldTime = serverTime;
    *(_DWORD *)(v4 + 19528) = serverTime;
    *(_DWORD *)(v4 + 19532) = PrevSnap_Internal[758].snapFlags;
  }
  if ( !LocalClientGlobals->nextSnap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 4456, ASSERT_TYPE_ASSERT, "(cgameGlob->nextSnap)", (const char *)&queryFormat, "cgameGlob->nextSnap") )
    __debugbreak();
  v16 = LocalClientGlobals->nextSnap;
  if ( v16 != LocalClientGlobals->snap && v16->serverTime - LocalClientGlobals->time <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 4460, ASSERT_TYPE_ASSERT, "(cgameGlob->nextSnap == cgameGlob->snap || cgameGlob->nextSnap->serverTime - cgameGlob->time > 0)", (const char *)&queryFormat, "cgameGlob->nextSnap == cgameGlob->snap || cgameGlob->nextSnap->serverTime - cgameGlob->time > 0") )
    __debugbreak();
LABEL_44:
  Profile_EndInternal(NULL);
  Sys_ProfEndNamedEvent();
}

/*
==============
CG_SnapshotMP_ReadNextSnapshot
==============
*/
CgSnapshotMP *CG_SnapshotMP_ReadNextSnapshot(LocalClientNum_t localClientNum)
{
  CgSnapshotMP **v2; 
  CgSnapshotMP *v3; 
  cg_t *LocalClientGlobals; 
  cgs_t *LocalClientStaticGlobals; 
  int processedSnapshotNum; 
  int latestSnapshotNum; 
  __int64 v8; 
  CgSnapshotMP *v9; 
  int v10; 
  int v12; 
  CgSnapshotType SnapshotType; 

  v2 = &s_activeSnapshots[localClientNum];
  if ( !*v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 4196, ASSERT_TYPE_ASSERT, "(s_activeSnapshots[localClientNum])", "%s\n\tCG_ReadNextSnapshot: Trying to read a multiplayer snapshot but no snapshots have been allocated.\n", "s_activeSnapshots[localClientNum]") )
    __debugbreak();
  if ( CG_Snapshot_GetSnapshotType() != SNAP_TYPE_MP )
  {
    SnapshotType = CG_Snapshot_GetSnapshotType();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 4197, ASSERT_TYPE_ASSERT, "(CG_Snapshot_GetSnapshotType() == CgSnapshotType::SNAP_TYPE_MP)", "%s\n\tCG_ReadNextSnapshot: Trying to read a multiplayer snapshot but multiplayer snapshots are not allocated. CgSnapshotType:%d\n", "CG_Snapshot_GetSnapshotType() == CgSnapshotType::SNAP_TYPE_MP", SnapshotType) )
      __debugbreak();
  }
  v3 = *v2;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  LocalClientStaticGlobals = CG_GetLocalClientStaticGlobals(localClientNum);
  processedSnapshotNum = LocalClientStaticGlobals->processedSnapshotNum;
  latestSnapshotNum = LocalClientGlobals->latestSnapshotNum;
  if ( latestSnapshotNum > processedSnapshotNum + 1000 )
  {
    Com_PrintWarning(14, "WARNING: CG_ReadNextSnapshot: way out of range, %i > %i\n", (unsigned int)latestSnapshotNum, (unsigned int)processedSnapshotNum);
    processedSnapshotNum = LocalClientStaticGlobals->processedSnapshotNum;
    latestSnapshotNum = LocalClientGlobals->latestSnapshotNum;
  }
  if ( processedSnapshotNum >= latestSnapshotNum )
    return 0i64;
  while ( 1 )
  {
    v8 = 0i64;
    if ( LocalClientGlobals->snap == v3 )
      v8 = 1i64;
    v9 = &v3[v8];
    v10 = processedSnapshotNum + 1;
    LocalClientStaticGlobals->processedSnapshotNum = v10;
    if ( CL_CGameMP_GetSnapshot(localClientNum, v10, v9) )
      break;
    CG_DrawNetMP_AddLagometerSnapshotInfo(NULL);
    processedSnapshotNum = LocalClientStaticGlobals->processedSnapshotNum;
    if ( processedSnapshotNum >= LocalClientGlobals->latestSnapshotNum )
      return 0i64;
  }
  CG_DrawNetMP_AddLagometerSnapshotInfo(v9);
  if ( !Com_IsAnyLocalServerRunning() )
  {
    v12 = v9->GetServerPing(v9);
    NetStats_LogStat(NETSTATS_LATENCY, v12);
    NetStats_LogStat(NETSTATS_SNAPS, 1);
  }
  return v9;
}

/*
==============
CG_SnapshotMP_ReleaseEntityRagdolls
==============
*/
void CG_SnapshotMP_ReleaseEntityRagdolls(centity_t *cent, LocalClientNum_t localClientNum)
{
  int ragdollHandle; 
  int killcamRagdollHandle; 
  DObj *ClientDObj; 

  CG_Pose_ClearRagdollFlags(&cent->pose);
  ragdollHandle = cent->pose.ragdollHandle;
  if ( ragdollHandle )
  {
    Ragdoll_Release(ragdollHandle);
    killcamRagdollHandle = cent->pose.killcamRagdollHandle;
    cent->pose.ragdollHandle = 0;
  }
  else
  {
    killcamRagdollHandle = cent->pose.killcamRagdollHandle;
    if ( !killcamRagdollHandle )
      return;
  }
  if ( killcamRagdollHandle )
  {
    Ragdoll_Release(killcamRagdollHandle);
    cent->pose.killcamRagdollHandle = 0;
  }
  ClientDObj = Com_GetClientDObj(cent->nextState.number, localClientNum);
  if ( ClientDObj )
    Ragdoll_SetAnimationParameters(ClientDObj, 0, 0);
}

/*
==============
CG_SnapshotMP_ResetAgentCorpse
==============
*/
void CG_SnapshotMP_ResetAgentCorpse(const LocalClientNum_t localClientNum, const characterInfo_t *srcCharacter, const centity_t *corpseEntity, const entityState_t *corpseEntityState, CGCorpseInfoMP *corpseInfo)
{
  int executionStartTime; 
  unsigned int ModelIndex; 
  const char *v19; 
  char *model; 
  int v21; 
  int v22; 
  bool *attachTagIndexChanged; 
  char *v24; 
  __int64 v25; 
  _DWORD *attachModelIndex; 
  AgentAttachModelData *attachModels; 
  unsigned int AttachModel; 
  const char *v29; 
  char *v30; 
  int v31; 
  int v32; 
  __int64 (__fastcall *v33)(CGCorpseInfoMP *, _QWORD); 
  unsigned int AttachTag; 
  const char *v35; 
  unsigned int number; 
  unsigned int v37; 
  unsigned int v38; 
  XAnim_s *Anims; 
  __int64 v40; 
  __int64 v41; 
  CGCorpseInfoMP *corpseInfoa; 

  _R14 = srcCharacter;
  if ( !corpseEntity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 577, ASSERT_TYPE_ASSERT, "(corpseEntity)", (const char *)&queryFormat, "corpseEntity") )
    __debugbreak();
  if ( !corpseEntityState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 578, ASSERT_TYPE_ASSERT, "(corpseEntityState)", (const char *)&queryFormat, "corpseEntityState") )
    __debugbreak();
  _RDI = corpseInfo;
  if ( !corpseInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 579, ASSERT_TYPE_ASSERT, "(corpseInfo)", (const char *)&queryFormat, "corpseInfo") )
    __debugbreak();
  corpseInfo->ci.infoValid = 1;
  corpseInfo->ci.nextValid = 1;
  corpseInfo->ci.leftStickInputInterpolated = 0i64;
  corpseInfo->ci.rightStickInputInterpolated = 0i64;
  *(_QWORD *)&corpseInfo->ci.skydivePitchInterpolated = 0i64;
  if ( _R14 && _R14->infoValid )
  {
    corpseInfo->ci.deltaLerpMoveDir = _R14->deltaLerpMoveDir;
    corpseInfo->ci.lerpMoveDir = _R14->lerpMoveDir;
    if ( PlayerASM_IsEnabled() )
    {
      __asm { vmovss  xmm0, dword ptr [r14+0A10h]; velocityAngle }
      BG_PlayerASM_UpdateAngles(*(const float *)&_XMM0, &corpseInfo->ci);
    }
    __asm
    {
      vmovups ymm0, ymmword ptr [r14+800h]
      vmovups ymmword ptr [rdi+818h], ymm0
      vmovups ymm1, ymmword ptr [r14+820h]
      vmovups ymmword ptr [rdi+838h], ymm1
      vmovups xmm0, xmmword ptr [r14+840h]
      vmovups xmmword ptr [rdi+858h], xmm0
      vmovsd  xmm1, qword ptr [r14+850h]
      vmovsd  qword ptr [rdi+868h], xmm1
      vmovups ymm0, ymmword ptr [r14+858h]
      vmovups ymmword ptr [rdi+870h], ymm0
      vmovups ymm1, ymmword ptr [r14+878h]
      vmovups ymmword ptr [rdi+890h], ymm1
      vmovups xmm0, xmmword ptr [r14+898h]
      vmovups xmmword ptr [rdi+8B0h], xmm0
      vmovsd  xmm1, qword ptr [r14+8A8h]
      vmovsd  qword ptr [rdi+8C0h], xmm1
    }
    corpseInfo->ci.execution = _R14->execution;
    corpseInfo->ci.executionStance = _R14->executionStance;
    executionStartTime = _R14->executionStartTime;
  }
  else
  {
    *(_QWORD *)&corpseInfo->ci.lerpMoveDir = 0i64;
    memset_0(&corpseInfo->ci.playerASMLocomotion, 0, sizeof(corpseInfo->ci.playerASMLocomotion));
    memset_0(&corpseInfo->ci.legs, 0, sizeof(corpseInfo->ci.legs));
    memset_0(&corpseInfo->ci.torso, 0, sizeof(corpseInfo->ci.torso));
    executionStartTime = 0;
    *(_QWORD *)&corpseInfo->ci.execution = 0i64;
  }
  corpseInfo->ci.executionStartTime = executionStartTime;
  corpseInfo->ci.suitIndex = corpseEntityState->un.vehicleXModel;
  corpseInfo->ci.isFemale = 0;
  corpseInfoa = (CGCorpseInfoMP *)ClConfigStrings::GetClConfigStrings();
  _RDI->ci.modelIndexChanged = 0;
  ModelIndex = LerpEntityStateAgentCorpse::GetModelIndex((LerpEntityStateAgentCorpse *)&corpseEntityState->lerp.u);
  _RDI->ci.modelIndex = ModelIndex;
  v19 = (const char *)(*(__int64 (__fastcall **)(CGCorpseInfoMP *, _QWORD))(*(_QWORD *)corpseInfoa->customization.modelIndex + 16i64))(corpseInfoa, ModelIndex);
  model = _RDI->ci.model;
  do
  {
    v21 = (unsigned __int8)model[v19 - _RDI->ci.model];
    v22 = (unsigned __int8)*model - v21;
    if ( v22 )
      break;
    ++model;
  }
  while ( v21 );
  if ( v22 )
  {
    Core_strcpy(_RDI->ci.model, 0x40ui64, v19);
    _RDI->ci.dobjDirty = 1;
  }
  attachTagIndexChanged = _RDI->ci.attachTagIndexChanged;
  v24 = _RDI->ci.attachTagNames[0];
  v25 = 8i64;
  attachModelIndex = _RDI->ci.attachModelIndex;
  attachModels = corpseEntityState->lerp.u.agentCorpse.attachModels;
  do
  {
    *(attachTagIndexChanged - 9) = 0;
    AttachModel = AgentAttachModelData::GetAttachModel(attachModels);
    *attachModelIndex = AttachModel;
    v29 = (const char *)(*(__int64 (__fastcall **)(CGCorpseInfoMP *, _QWORD))(*(_QWORD *)corpseInfoa->customization.modelIndex + 16i64))(corpseInfoa, AttachModel);
    v30 = v24 - 576;
    do
    {
      v31 = (unsigned __int8)v30[v29 - (v24 - 576)];
      v32 = (unsigned __int8)*v30 - v31;
      if ( v32 )
        break;
      ++v30;
    }
    while ( v31 );
    if ( v32 )
    {
      Core_strcpy(v24 - 576, 0x40ui64, v29);
      _RDI->ci.dobjDirty = 1;
    }
    *attachTagIndexChanged = 0;
    v33 = *(__int64 (__fastcall **)(CGCorpseInfoMP *, _QWORD))(*(_QWORD *)corpseInfoa->customization.modelIndex + 24i64);
    AttachTag = AgentAttachModelData::GetAttachTag(attachModels);
    v35 = (const char *)v33(corpseInfoa, AttachTag);
    if ( strcmp(v24, v35) )
    {
      Core_strcpy(v24, 0x40ui64, v35);
      _RDI->ci.dobjDirty = 1;
    }
    ++attachModels;
    v24 += 64;
    ++attachModelIndex;
    ++attachTagIndexChanged;
    --v25;
  }
  while ( v25 );
  CG_SnapshotMP_ResetCharacterAnimation(localClientNum, corpseEntity, corpseEntityState, &_RDI->ci);
  if ( !_RDI->ci.pXAnimTree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 661, ASSERT_TYPE_ASSERT, "(corpseCharacterInfo->pXAnimTree)", (const char *)&queryFormat, "corpseCharacterInfo->pXAnimTree") )
    __debugbreak();
  number = corpseEntityState->number;
  if ( number > 0x9E4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 55, ASSERT_TYPE_ASSERT, "( ( handle >= 0 && handle < ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) ) )", "%s\n\t( handle ) = %i", "( handle >= 0 && handle < ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) )", corpseEntityState->number) )
    __debugbreak();
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    LODWORD(v41) = 2;
    LODWORD(v40) = localClientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 58, ASSERT_TYPE_ASSERT, "(unsigned)( localClientIndex ) < (unsigned)( (2) )", "localClientIndex doesn't index MAX_DOBJ_CLIENTS\n\t%i not in [0, %i)", v40, v41) )
      __debugbreak();
  }
  v37 = 2533 * localClientNum + number;
  if ( v37 >= 0x13CA )
  {
    LODWORD(v41) = v37;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 62, ASSERT_TYPE_ASSERT, "( ( (unsigned)handle < ( sizeof( *array_counter( clientObjMap ) ) + 0 ) ) )", "%s\n\t( handle ) = %i", "( (unsigned)handle < ( sizeof( *array_counter( clientObjMap ) ) + 0 ) )", v41) )
      __debugbreak();
  }
  v38 = clientObjMap[v37];
  if ( !v38 )
    goto LABEL_62;
  if ( v38 >= (unsigned int)s_objCount )
  {
    LODWORD(v41) = v38;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 64, ASSERT_TYPE_ASSERT, "( ( !objIndex || ( (unsigned)objIndex < s_objCount ) ) )", "%s\n\t( objIndex ) = %i", "( !objIndex || ( (unsigned)objIndex < s_objCount ) )", v41) )
      __debugbreak();
  }
  if ( !s_objBuf[v38] )
  {
LABEL_62:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 662, ASSERT_TYPE_ASSERT, "(Com_GetClientDObj( corpseEntityState->number, localClientNum ) != 0)", (const char *)&queryFormat, "Com_GetClientDObj( corpseEntityState->number, localClientNum ) != NULL") )
      __debugbreak();
  }
  if ( !srcCharacter )
    goto LABEL_63;
  if ( !srcCharacter->pXAnimTree )
    goto LABEL_63;
  Anims = XAnimGetAnims(_RDI->ci.pXAnimTree);
  if ( XAnimGetAnims(srcCharacter->pXAnimTree) != Anims )
    goto LABEL_63;
  if ( GameModeFlagValues::ms_mpValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 190, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a MP-only context", "IsFlagActive( index )") )
    __debugbreak();
  if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&corpseEntityState->lerp.eFlags, ACTIVE, 0x1Bu) )
  {
    XAnimCloneAnimTree(srcCharacter->pXAnimTree, _RDI->ci.pXAnimTree);
    FX_Dismemberment_Transfer(localClientNum, srcCharacter->entityNum, corpseEntityState->number);
    CG_PlayerCorpseMP_TransferEntityDynamicBonesToCorpse(localClientNum, srcCharacter->entityNum, _RDI);
    if ( _RDI->ci.usingAnimState )
      BG_AnimationState_Update(corpseEntityState, &_RDI->ci, 3);
  }
  else
  {
LABEL_63:
    if ( _RDI->ci.usingAnimState )
      BG_AnimationState_Reset(corpseEntityState, &_RDI->ci);
  }
}

/*
==============
CG_SnapshotMP_ResetCharacterAnimation
==============
*/
void CG_SnapshotMP_ResetCharacterAnimation(const LocalClientNum_t localClientNum, const centity_t *cent, const entityState_t *es, characterInfo_t *ci)
{
  const ScriptableDef *ScriptableDef; 
  CgStatic *LocalClientStatics; 
  XAnim_s *Anims; 
  __int64 v10; 
  scr_string_t AnimsetName; 
  unsigned __int16 AnimIndex; 
  unsigned int size; 
  scr_string_t v14; 
  XAnimOwner v15; 
  DObj *ClientDObj; 
  XAnimTree *v17; 
  XAnimTree *pXAnimTree; 
  entityType_s eType; 
  CgWeaponMap *Instance; 
  const DObj *v21; 
  __int64 attachIgnoreCollision; 
  __int64 v23; 

  if ( !es && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 438, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  if ( !ci && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 439, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
    __debugbreak();
  if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
    __debugbreak();
  if ( es->clientNum >= ComCharacterLimits::ms_gameData.m_characterCount )
  {
    if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
      __debugbreak();
    LODWORD(attachIgnoreCollision) = es->clientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 440, ASSERT_TYPE_ASSERT, "(unsigned)( es->clientNum ) < (unsigned)( ComCharacterLimits::GetCharacterMaxCount() )", "es->clientNum doesn't index ComCharacterLimits::GetCharacterMaxCount()\n\t%i not in [0, %i)", attachIgnoreCollision, ComCharacterLimits::ms_gameData.m_characterCount) )
      __debugbreak();
  }
  if ( (unsigned __int16)(es->eType - 17) > 1u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 441, ASSERT_TYPE_ASSERT, "(es->eType == ET_AGENT || es->eType == ET_AGENT_CORPSE)", (const char *)&queryFormat, "es->eType == ET_AGENT || es->eType == ET_AGENT_CORPSE") )
    __debugbreak();
  if ( CG_PlayersMP_IsWeaponVisibilityTestActive(localClientNum) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 442, ASSERT_TYPE_ASSERT, "(!CG_PlayersMP_IsWeaponVisibilityTestActive( localClientNum ))", (const char *)&queryFormat, "!CG_PlayersMP_IsWeaponVisibilityTestActive( localClientNum )") )
    __debugbreak();
  ScriptableDef = NULL;
  LocalClientStatics = CgStatic::GetLocalClientStatics(localClientNum);
  if ( (*(_BYTE *)&es->animInfo.selectAnim & 1) != 0 )
  {
    Anims = BG_AnimationState_GetAnims(es);
    AnimsetName = BG_AnimationState_GetAnimsetName(es);
    AnimIndex = BG_AnimationState_GetAnimIndex(AnimsetName, es);
    size = Anims->size;
    if ( AnimIndex >= Anims->size )
    {
      v14 = BG_AnimationState_GetAnimsetName(es);
      LODWORD(v23) = size;
      LODWORD(attachIgnoreCollision) = BG_AnimationState_GetAnimIndex(v14, es);
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 486, ASSERT_TYPE_ASSERT, "(unsigned)( BG_AnimationState_GetAnimIndex( BG_AnimationState_GetAnimsetName( es ), es ) ) < (unsigned)( anims->size )", "BG_AnimationState_GetAnimIndex( BG_AnimationState_GetAnimsetName( es ), es ) doesn't index anims->size\n\t%i not in [0, %i)", attachIgnoreCollision, v23) )
        __debugbreak();
    }
    ci->characterAnim.animClass = (es->animInfo.animData >> 18) & 0x3F;
    ci->characterAnim.animState = (es->animInfo.animData >> 1) & 0x3FF;
    ci->characterAnim.animEntry = (es->animInfo.animData >> 11) & 0x7F;
    ci->playerAnim.torsoAnim = es->animInfo.animTime;
    if ( !ci->usingAnimState )
    {
      ci->usingAnimState = 1;
      goto LABEL_44;
    }
  }
  else
  {
    CG_Players_CopyAnimStateFromEntity(ci, es);
    if ( PlayerASM_IsEnabled() )
    {
      BG_PlayerASM_VerifyAnim(ci->playerASMAnim.animSet, ci->playerAnim.legsAnim);
      BG_PlayerASM_VerifyAnim(ci->playerASMAnim.animSet, ci->playerAnim.torsoAnim);
      Anims = BG_PlayerASM_GetAnims(ci->playerASMAnim.animSet);
    }
    else
    {
      v10 = (__int64)LocalClientStatics->GetAnimStatics(LocalClientStatics);
      if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 465, ASSERT_TYPE_ASSERT, "(bgameAnim)", (const char *)&queryFormat, "bgameAnim") )
        __debugbreak();
      Anims = *(XAnim_s **)(v10 + 17712);
      if ( ci->playerASMAnim.animSet >= 4 )
      {
        LODWORD(v23) = 4;
        LODWORD(attachIgnoreCollision) = ci->playerAnim.suitAnimIndex;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 469, ASSERT_TYPE_ASSERT, "(unsigned)( ci->playerAnim.suitAnimIndex ) < (unsigned)( NUM_ANIM_SUIT_STATE )", "ci->playerAnim.suitAnimIndex doesn't index NUM_ANIM_SUIT_STATE\n\t%i not in [0, %i)", attachIgnoreCollision, v23) )
          __debugbreak();
      }
      if ( (ci->playerAnim.legsAnim & 0xFFFFEFFF) >= Anims->size )
      {
        LODWORD(v23) = Anims->size;
        LODWORD(attachIgnoreCollision) = ci->playerAnim.legsAnim & 0xFFFFEFFF;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 470, ASSERT_TYPE_ASSERT, "(unsigned)( (ci->playerAnim.legsAnim & ~(1<<(13-1))) ) < (unsigned)( anims->size )", "(ci->playerAnim.legsAnim & ~ANIM_TOGGLEBIT) doesn't index anims->size\n\t%i not in [0, %i)", attachIgnoreCollision, v23) )
          __debugbreak();
      }
      if ( (ci->playerAnim.torsoAnim & 0xFFFFEFFF) >= Anims->size )
      {
        LODWORD(v23) = Anims->size;
        LODWORD(attachIgnoreCollision) = ci->playerAnim.torsoAnim & 0xFFFFEFFF;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 471, ASSERT_TYPE_ASSERT, "(unsigned)( (ci->playerAnim.torsoAnim & ~(1<<(13-1))) ) < (unsigned)( anims->size )", "(ci->playerAnim.torsoAnim & ~ANIM_TOGGLEBIT) doesn't index anims->size\n\t%i not in [0, %i)", attachIgnoreCollision, v23) )
          __debugbreak();
      }
    }
    if ( ci->usingAnimState )
    {
      ci->usingAnimState = 0;
LABEL_44:
      ci->animTreeDirty = 1;
    }
  }
  memset_0(&ci->control, 0, sizeof(ci->control));
  ClientDObj = Com_GetClientDObj(es->number, localClientNum);
  if ( !ClientDObj || ci->dobjDirty || (v17 = ci->pXAnimTree) == NULL || XAnimGetAnims(v17) != Anims )
  {
    pXAnimTree = ci->pXAnimTree;
    if ( pXAnimTree )
    {
      if ( ClientDObj )
      {
        CG_AnimTreeMP_SafeDObjFree(localClientNum, es->number);
        pXAnimTree = ci->pXAnimTree;
        ClientDObj = NULL;
      }
      Com_XAnimFreeSmallTree(pXAnimTree);
    }
    LOBYTE(v15) = 1;
    ci->pXAnimTree = Com_XAnimCreateSmallTree(Anims, v15);
    ci->dobjDirty = 1;
    if ( ci->usingAnimState )
      ci->characterAnim.animAimRoot = 0;
    eType = es->eType;
    Instance = CgWeaponMap::GetInstance(localClientNum);
    if ( eType == ET_AGENT )
      BG_AnimationMP_UpdatePlayerDObj(localClientNum, ClientDObj, Instance, es, ci, 0);
    else
      BG_AnimationMP_UpdateAgentCorpseDObj(localClientNum, ClientDObj, Instance, es, ci);
  }
  if ( (*(_BYTE *)&es->animInfo.selectAnim & 1) != 0 )
  {
    v21 = Com_GetClientDObj(es->number, localClientNum);
    if ( v21 )
      ScriptableDef = ScriptableBg_GetScriptableDef(es->eType, v21);
    if ( ScriptableCl_UpdateReservedScriptableEntityBinding(localClientNum, es->number, ScriptableDef) == Started )
    {
      ScriptableCl_PrintReservedEntityScriptables(localClientNum);
      Com_PrintError(14, "CG_SnapshotMP_ResetCharacterAnimation: Failed to set agent scriptable '%s' for entity %i. We might be out of sync with the server.\n", ScriptableDef->name, (unsigned int)es->number);
    }
  }
}

/*
==============
CG_SnapshotMP_ResetEntity
==============
*/
void CG_SnapshotMP_ResetEntity(LocalClientNum_t localClientNum, centity_t *cent, int newEntity)
{
  CG_SnapshotMP_ResetEntity_Internal(localClientNum, cent, newEntity, 0);
}

/*
==============
CG_SnapshotMP_ResetEntity_Internal
==============
*/
void CG_SnapshotMP_ResetEntity_Internal(LocalClientNum_t localClientNum, centity_t *cent, int newEntity, int killcamEndingTransition)
{
  __int64 v7; 
  const __int16 *p_number; 
  __int64 number; 
  CgEntitySystem *EntitySystem; 
  unsigned __int8 flag; 
  CGCorpseInfoMP *v12; 
  CGCorpseInfoMP *CorpseInfoForClientEntityNum; 
  unsigned __int8 prevEType; 
  int i; 
  const dvar_t *v20; 
  int v21; 
  unsigned __int8 v22; 
  CgGlobalsMP *LocalClientGlobals; 
  __int16 eType_low; 
  $8E443F52CA944F49562A945B438F302F *v25; 
  const dvar_t *v26; 
  bool ReservedIndexForEntity; 
  characterInfo_t *v28; 
  double v34; 
  int clientNum; 
  DObj *ClientDObj; 
  DObj *v39; 
  cgs_t *LocalClientStaticGlobals; 
  unsigned int v41; 
  CGCorpseInfoMP *v42; 
  __int64 v43; 
  characterInfo_t *CharacterInfo; 
  const clientInfo_t *v45; 
  XAnimOwner v46; 
  int *p_entityNum; 
  int entityNum; 
  XAnimOwner v49; 
  __int16 v50; 
  int v51; 
  const CgSnapshotMP *PrevSnap_Internal; 
  cgs_t *v53; 
  unsigned int v54; 
  characterInfo_t *v55; 
  const characterInfo_t *v56; 
  const CgSnapshotMP *v57; 
  CgWeaponMap *v58; 
  DObj *DObj_General; 
  int v60; 
  __int16 scriptMoverType; 
  bool v62; 
  __int64 v65; 
  unsigned int v67; 
  unsigned int v68; 
  unsigned int v69; 
  unsigned int *v72; 
  unsigned int v73; 
  unsigned int v74; 
  unsigned int v75; 
  __int64 v80; 
  __int64 v81; 
  __int64 v82; 
  __int64 v83; 
  XAnimTree *inOutAnimTree; 
  vec3_t outOrigin; 
  unsigned int outInstanceIndex; 
  __int64 v89; 
  CgTrajectory v90; 
  vec4_t quat; 
  int v92; 
  int v93; 
  int v94; 

  v89 = -2i64;
  __asm { vmovaps [rsp+120h+var_50], xmm6 }
  _RBX = cent;
  v7 = localClientNum;
  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 818, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  p_number = &_RBX->nextState.number;
  number = _RBX->nextState.number;
  EntitySystem = CgEntitySystem::GetEntitySystem((const LocalClientNum_t)v7);
  if ( (unsigned int)number >= 0x800 )
  {
    LODWORD(v80) = number;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", v80, 2048) )
      __debugbreak();
  }
  if ( _RBX != &EntitySystem->m_entities[number] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 819, ASSERT_TYPE_ASSERT, "(cent == CG_GetEntity( localClientNum, cent->nextState.number ))", (const char *)&queryFormat, "cent == CG_GetEntity( localClientNum, cent->nextState.number )") )
    __debugbreak();
  *(_QWORD *)_RBX->lightingOrigin.v = 0i64;
  _RBX->lightingOrigin.v[2] = 0.0;
  flag = 0;
  v12 = NULL;
  if ( _RBX->nextState.eType == ET_PLAYER_CORPSE )
  {
    CorpseInfoForClientEntityNum = CG_PlayerCorpseMP_GetCorpseInfoForClientEntityNum((LocalClientNum_t)v7, *p_number);
    v12 = CorpseInfoForClientEntityNum;
    if ( CorpseInfoForClientEntityNum )
      flag = CorpseInfoForClientEntityNum->flag;
    else
      flag = 0;
  }
  CG_SnapshotMP_ShutdownEntity((LocalClientNum_t)v7, _RBX);
  if ( flag )
  {
    if ( !v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 837, ASSERT_TYPE_ASSERT, "(corpseInfo)", (const char *)&queryFormat, "corpseInfo") )
      __debugbreak();
    v12->flag = flag;
  }
  CG_Snapshot_ResetEntityCommon((LocalClientNum_t)v7, _RBX);
  AimAssist_ClearEntityReference((LocalClientNum_t)v7, *p_number);
  prevEType = _RBX->prevEType;
  __asm
  {
    vmovups ymm0, ymmword ptr [rbx+19Ch]
    vmovups ymmword ptr [rbx+120h], ymm0
    vmovups ymm1, ymmword ptr [rbx+1BCh]
    vmovups ymmword ptr [rbx+140h], ymm1
    vmovups ymm0, ymmword ptr [rbx+1DCh]
    vmovups ymmword ptr [rbx+160h], ymm0
    vmovups xmm1, xmmword ptr [rbx+1FCh]
    vmovups xmmword ptr [rbx+180h], xmm1
  }
  _RBX->prevEType = truncate_cast<unsigned char,enum entityType_s>(_RBX->nextState.eType);
  _RBX->prevOtherEntityNum = _RBX->nextState.otherEntityNum;
  _RBX->prevPhysicsChildBodyIdx = _RBX->nextState.un.vehicleXModel;
  _RBX->prevLinkParent = *(_DWORD *)&_RBX->nextState.clientLinkInfo & 0x7FF;
  for ( i = 0; i < 2; ++i )
    Tracer_SetDrawCounter((const LocalClientNum_t)v7, *p_number, (const PlayerHandIndex)i, 0);
  v20 = DVARINT_cg_weaponVisInterval;
  if ( !DVARINT_cg_weaponVisInterval && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_weaponVisInterval") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v20);
  v21 = *p_number % v20->current.integer;
  v22 = v21;
  if ( (v21 < 0 || (unsigned int)v21 > 0xFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned char __cdecl truncate_cast_impl<unsigned char,int>(int)", "unsigned", (unsigned __int8)v21, "signed", v21) )
    __debugbreak();
  _RBX->weaponVisTestCounter = v22;
  _RBX->flags &= 0xFFF0017D;
  _RBX->pose.cullIn = 0;
  _RBX->typeData.flightDurationMs = 0;
  *(_QWORD *)&_RBX->prevUseCount = 0i64;
  _RBX->nextUseCount = 0;
  LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals((const LocalClientNum_t)v7);
  *(_QWORD *)quat.v = CgStatic::GetLocalClientStatics((const LocalClientNum_t)v7);
  if ( !Com_GameMode_SupportsFeature(WEAPON_DROPPING_ALT) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 875, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::ANIMATED_TRAJECTORIES ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::ANIMATED_TRAJECTORIES )") )
    __debugbreak();
  CgTrajectory::CgTrajectory(&v90, (const LocalClientNum_t)v7, _RBX, &_RBX->nextState.lerp);
  BgTrajectory::SetFlags(&v90, 1);
  BgTrajectory::SetFlags(&v90, 2);
  CG_GetPoseOrigin(&_RBX->pose, &outOrigin);
  BgTrajectory::EvaluateTrajectories(&v90, LocalClientGlobals->time, &outOrigin, &_RBX->pose.angles);
  CG_SetPoseOrigin(&_RBX->pose, &outOrigin);
  eType_low = LOBYTE(_RBX->nextState.eType);
  _RBX->pose.eType = eType_low;
  if ( eType_low != _RBX->nextState.eType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 245, ASSERT_TYPE_ASSERT, "(cent->pose.eType == cent->nextState.eType)", (const char *)&queryFormat, "cent->pose.eType == cent->nextState.eType") )
    __debugbreak();
  switch ( _RBX->nextState.eType )
  {
    case ET_PLAYER:
    case ET_AGENT:
      _RBX->pose.player.control = NULL;
      *((_QWORD *)&_RBX->pose.moverFx + 1) = 0i64;
      break;
    case ET_SCRIPTMOVER:
      _RBX->pose.scriptMover.doVehicleControllers = 0;
      if ( _RBX->nextState.un.scriptMoverType == 9 )
        goto LABEL_41;
      break;
    case ET_FX:
    case ET_LOOP_FX:
LABEL_41:
      _RBX->pose.player.control = NULL;
      break;
    case ET_TURRET:
      CG_Turret_Reset(_RBX);
      break;
    case ET_HELICOPTER:
    case ET_VEHICLE:
      v25 = &_RBX->pose.160;
      if ( prevEType != 6 || !v25->scriptMover.doVehicleControllers )
        memset_0(v25, 0, sizeof($8E443F52CA944F49562A945B438F302F));
      break;
    default:
      break;
  }
  v26 = DVARBOOL_cg_entityResetPhysicsFixEnabled;
  if ( !DVARBOOL_cg_entityResetPhysicsFixEnabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_entityResetPhysicsFixEnabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v26);
  if ( v26->current.enabled )
  {
    if ( *p_number >= 0x800u )
    {
      LODWORD(v81) = 2048;
      LODWORD(v80) = *p_number;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 890, ASSERT_TYPE_ASSERT, "(unsigned)( cent->nextState.number ) < (unsigned)( ( sizeof( *array_counter( cgameGlob->pEntityLastXModel ) ) + 0 ) )", "cent->nextState.number doesn't index cgameGlob->pEntityLastXModel\n\t%i not in [0, %i)", v80, v81) )
        __debugbreak();
    }
    LocalClientGlobals->pEntityLastXModel[*p_number] = NULL;
  }
  else
  {
    if ( CG_PhysicsObject_GetInstance((Physics_WorldId)(3 * v7 + 2), *p_number, (LocalClientNum_t)v7) == -1 && CG_Entity_ShouldCreatePhysicsOnInit((LocalClientNum_t)v7, *p_number) )
      CG_Entity_CreatePhysics((LocalClientNum_t)v7, *p_number, 1);
    if ( !CG_Entity_HasCloth((const LocalClientNum_t)v7, *p_number) && CG_Entity_ShouldCreateClothOnInit((const LocalClientNum_t)v7, *p_number) )
      CG_Entity_CreateCloth((const LocalClientNum_t)v7, *p_number);
  }
  ReservedIndexForEntity = ScriptableCl_GetReservedIndexForEntity((const LocalClientNum_t)v7, *p_number, &outInstanceIndex);
  if ( ReservedIndexForEntity )
    CG_EntityMP_GetDObj_General((const LocalClientNum_t)v7, _RBX, NULL);
  switch ( _RBX->nextState.eType )
  {
    case ET_FIRST:
    case ET_INFO_VOLUME_GRAPPLE:
      goto $LN88_6;
    case ET_PLAYER:
      goto $LN27_88;
    case ET_PLAYER_CORPSE:
      if ( !ReservedIndexForEntity )
        CG_SnapshotMP_HandleUnlinkedCorpseEntity((const LocalClientNum_t)v7, _RBX);
      LocalClientStaticGlobals = CG_GetLocalClientStaticGlobals((const LocalClientNum_t)v7);
      v41 = *p_number - ComCharacterLimits::GetClientCorpseEntityIndexOffset();
      if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 130, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
        __debugbreak();
      if ( v41 >= ComCharacterLimits::ms_gameData.m_clientCorpseCount )
      {
        if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 130, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
          __debugbreak();
        LODWORD(v81) = ComCharacterLimits::ms_gameData.m_clientCorpseCount;
        LODWORD(v80) = v41;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 1050, ASSERT_TYPE_ASSERT, "(unsigned)( corpseIndex ) < (unsigned)( ComCharacterLimits::GetClientCorpseMaxCount() )", "corpseIndex doesn't index ComCharacterLimits::GetClientCorpseMaxCount()\n\t%i not in [0, %i)", v80, v81) )
          __debugbreak();
      }
      if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 130, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
        __debugbreak();
      if ( (unsigned __int64)(int)ComCharacterLimits::ms_gameData.m_clientCorpseCount > 8 )
      {
        if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 130, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
          __debugbreak();
        LODWORD(v83) = 8;
        LODWORD(v82) = ComCharacterLimits::ms_gameData.m_clientCorpseCount;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 1051, ASSERT_TYPE_ASSERT, "( ComCharacterLimits::GetClientCorpseMaxCount() ) <= ( ( sizeof( *array_counter( cgs->corpseinfo ) ) + 0 ) )", "%s <= %s\n\t%i, %i", "ComCharacterLimits::GetClientCorpseMaxCount()", "ARRAY_COUNT( cgs->corpseinfo )", v82, v83) )
          __debugbreak();
      }
      v42 = &LocalClientStaticGlobals->corpseinfo[v41];
      CG_SnapshotMP_ReleaseEntityRagdolls(_RBX, (LocalClientNum_t)v7);
      if ( (v42->flag & 2) == 0 )
        goto LABEL_135;
      inOutAnimTree = v42->ci.pXAnimTree;
      v43 = *(_QWORD *)quat.v;
      CharacterInfo = CgStatic::GetCharacterInfo(*(CgStatic **)quat.v, _RBX->nextState.clientNum);
      if ( !CharacterInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 1064, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
        __debugbreak();
      v45 = (const clientInfo_t *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v43 + 216i64))(v43, (unsigned int)_RBX->nextState.clientNum);
      if ( !v45 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 1067, ASSERT_TYPE_ASSERT, "( ( clientInfo != nullptr ) )", "( clientInfo ) = %p", NULL) )
        __debugbreak();
      if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagStrict(&_RBX->nextState.lerp.eFlags, (EntityStateFlagsMP)27) )
      {
        CG_PlayerCorpseMP_CopyCorpseInfo(v42, CharacterInfo, &v45->customization);
        CG_PlayersMP_UpdatePlayerModels((const LocalClientNum_t)v7, v45, &v42->ci);
        BG_AnimationMP_FilterCorpseAttachmentModels((char (*)[9][64])v42->ci.attachModelNames, (char (*)[9][64])v42->ci.attachTagNames);
        if ( PlayerASM_IsEnabled() )
        {
          LOBYTE(v46) = 1;
          BG_PlayersASM_ResetCorpseAnimTree(CG_MainMP_AllocXAnimClient, v46, CharacterInfo, &inOutAnimTree);
        }
        v42->ci.pXAnimTree = inOutAnimTree;
        XAnimCloneAnimTree(CharacterInfo->pXAnimTree, inOutAnimTree);
        FX_Dismemberment_Transfer((LocalClientNum_t)v7, v42->ci.entityNum, *p_number);
        CG_PlayerCorpseMP_TransferEntityDynamicBonesToCorpse((LocalClientNum_t)v7, _RBX->nextState.clientNum, v42);
      }
      else
      {
        p_entityNum = &v42->ci.entityNum;
        if ( !v42->ci.model[0] || (entityNum = *p_entityNum, *p_entityNum != CharacterInfo->entityNum) )
        {
          CG_PlayerCorpseMP_CopyCorpseInfo(v42, CharacterInfo, &v45->customization);
          CG_PlayersMP_UpdatePlayerModels((const LocalClientNum_t)v7, v45, &v42->ci);
          BG_AnimationMP_FilterCorpseAttachmentModels((char (*)[9][64])v42->ci.attachModelNames, (char (*)[9][64])v42->ci.attachTagNames);
          if ( PlayerASM_IsEnabled() )
          {
            LOBYTE(v49) = 1;
            BG_PlayersASM_ResetCorpseAnimTree(CG_MainMP_AllocXAnimClient, v49, CharacterInfo, &inOutAnimTree);
          }
          v42->ci.pXAnimTree = inOutAnimTree;
LABEL_135:
          entityNum = v42->ci.entityNum;
        }
        FX_Dismemberment_Transfer((LocalClientNum_t)v7, entityNum, *p_number);
      }
      v42->ci.suitIndex = _RBX->nextState.un.vehicleXModel;
      v50 = *p_number;
      if ( (v42->flag & 2) != 0 )
        CG_PlayerCorpseMP_TryUpdateLinkedPlayerCorpseScriptableBinding((const LocalClientNum_t)v7, v42, v50);
      else
        CG_PlayerCorpseMP_ClearDetachedPlayerCorpseScriptableBinding((const LocalClientNum_t)v7, v42, v50);
      v51 = newEntity;
      if ( newEntity )
      {
        PrevSnap_Internal = (const CgSnapshotMP *)CG_SnapshotMP_GetPrevSnap_Internal((const LocalClientNum_t)v7);
        CG_SnapshotMP_FixupCorpseTrajectory((const LocalClientNum_t)v7, PrevSnap_Internal, _RBX);
      }
      if ( CG_SnapshotMP_EntityNeedsLODChange((const LocalClientNum_t)v7, newEntity == 0, killcamEndingTransition != 0, _RBX) != 1 )
        goto LABEL_144;
      _RBX->previousEventSequence.combined = _RBX->nextState.eventSequence.combined;
      goto LABEL_146;
    case ET_MISSILE:
      _RBX->typeData.flightDurationMs = 0;
$LN88_6:
      if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagStrict(&_RBX->nextState.lerp.eFlags, LEGACY_LADDER_CENTERLINE|LEGACY_MANTLE|0x10) && LocalClientGlobals->time - _RBX->nextState.lerp.u.anonymous.data[0] > 200 || CG_SnapshotMP_EntityNeedsLODChange((const LocalClientNum_t)v7, newEntity == 0, killcamEndingTransition != 0, _RBX) == 1 )
        goto LABEL_224;
      if ( newEntity )
        _RBX->previousEventSequence.combined = 0;
      break;
    case ET_SCRIPTMOVER:
      if ( !killcamEndingTransition )
      {
        v60 = _RBX->nextState.lerp.u.anonymous.data[0];
        if ( v60 != 2047 )
          CG_SnapshotMP_TransferDObjMarksToScriptMover((LocalClientNum_t)v7, v60, *p_number);
      }
      scriptMoverType = _RBX->nextState.un.scriptMoverType;
      if ( scriptMoverType == 1 )
      {
        if ( Physics_AreClientWorldsCreated() && !CG_PhysicsCharacterProxy_IsRegistered((LocalClientNum_t)v7, _RBX) )
        {
          AnglesToQuat(&_RBX->pose.angles, &quat);
          CG_GetPoseOrigin(&_RBX->pose, &outOrigin);
          CG_PhysicsCharacterProxy_AddCharacter((LocalClientNum_t)v7, _RBX, &outOrigin, &quat);
        }
      }
      else if ( scriptMoverType == 9 )
      {
        if ( _RBX->pose.coverWall.coverGrid[1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 1258, ASSERT_TYPE_ASSERT, "(!cent->pose.moverFx.particleSystem)", (const char *)&queryFormat, "!cent->pose.moverFx.particleSystem") )
          __debugbreak();
        if ( LocalClientGlobals->m_brCircleEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 1259, ASSERT_TYPE_ASSERT, "(cgameGlob->m_brCircleEnt == 0)", (const char *)&queryFormat, "cgameGlob->m_brCircleEnt == NULL") )
          __debugbreak();
        LocalClientGlobals->m_brCircleEnt = _RBX;
      }
      if ( ScriptableCl_IsScriptableMoverEntityState(&_RBX->nextState) )
        ScriptableCl_AssociateScriptMoverInstance((const LocalClientNum_t)v7, _RBX);
      goto $LN170_1;
    case ET_FX:
    case ET_LOOP_FX:
      if ( _RBX->pose.coverWall.coverGrid[1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 1237, ASSERT_TYPE_ASSERT, "(!cent->pose.fx.particleSystem)", (const char *)&queryFormat, "!cent->pose.fx.particleSystem") )
        __debugbreak();
      break;
    case ET_TURRET:
      _RBX->previousEventSequence.combined = _RBX->nextState.eventSequence.combined;
      if ( !CgWeaponMap::ms_instance[v7] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
        __debugbreak();
      v58 = CgWeaponMap::ms_instance[v7];
      if ( !v58 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 438, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
        __debugbreak();
      if ( _RBX == (centity_t *)-400i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 439, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
        __debugbreak();
      if ( !BgWeaponMap::GetWeapon(v58, _RBX->nextState.weaponHandle)->weaponIdx && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 1206, ASSERT_TYPE_ASSERT, "(BG_GetWeaponForEntity( CgWeaponMap::GetInstance( localClientNum ), &cent->nextState ).weaponIdx)", (const char *)&queryFormat, "BG_GetWeaponForEntity( CgWeaponMap::GetInstance( localClientNum ), &cent->nextState ).weaponIdx") )
        __debugbreak();
      DObj_General = CG_EntityMP_GetDObj_General((const LocalClientNum_t)v7, _RBX, NULL);
      if ( DObj_General )
        CG_EntityMP_TurretPreControllers((LocalClientNum_t)v7, DObj_General, _RBX, 1);
      break;
    case ET_HELICOPTER:
    case ET_VEHICLE:
      CG_Vehicle_ResetEntity((LocalClientNum_t)v7, _RBX, 0);
      if ( CG_SnapshotMP_EntityNeedsLODChange((const LocalClientNum_t)v7, newEntity == 0, killcamEndingTransition != 0, _RBX) == 1 )
        goto LABEL_224;
      if ( newEntity )
        _RBX->previousEventSequence.combined = 0;
      break;
    case ET_PLANE:
$LN170_1:
      v62 = ScriptableCl_IsScriptableEntity((const LocalClientNum_t)v7, _RBX) != 0;
      _RBX->previousEventSequence.combined = _RBX->nextState.eventSequence.combined;
      if ( !GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&_RBX->nextState.lerp.eFlags, ACTIVE, 1u) || v62 )
        break;
      CG_Entity_UpdateBModelWorldBounds((LocalClientNum_t)v7, _RBX, 1);
      goto LABEL_240;
    case ET_VEHICLE_CORPSE:
      CG_Vehicle_ClearBoneControllers((LocalClientNum_t)v7, _RBX);
      break;
    case ET_AGENT:
      v28 = CgStatic::GetCharacterInfo(*(CgStatic **)quat.v, _RBX->nextState.clientNum);
      if ( !v28 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 946, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
        __debugbreak();
      CG_PlayersMP_UpdateAgentModels((const LocalClientNum_t)v7, v28);
      CG_SnapshotMP_ResetCharacterAnimation((const LocalClientNum_t)v7, _RBX, &_RBX->nextState, v28);
$LN27_88:
      if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
        __debugbreak();
      if ( _RBX->nextState.clientNum >= ComCharacterLimits::ms_gameData.m_characterCount )
      {
        if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
          __debugbreak();
        LODWORD(v81) = ComCharacterLimits::ms_gameData.m_characterCount;
        LODWORD(v80) = _RBX->nextState.clientNum;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 954, ASSERT_TYPE_ASSERT, "(unsigned)( cent->nextState.clientNum ) < (unsigned)( ComCharacterLimits::GetCharacterMaxCount() )", "cent->nextState.clientNum doesn't index ComCharacterLimits::GetCharacterMaxCount()\n\t%i not in [0, %i)", v80, v81) )
          __debugbreak();
      }
      if ( _RBX->nextState.clientNum != *p_number )
      {
        LODWORD(v83) = *p_number;
        LODWORD(v82) = _RBX->nextState.clientNum;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 955, ASSERT_TYPE_ASSERT, "( cent->nextState.clientNum ) == ( cent->nextState.number )", "%s == %s\n\t%i, %i", "cent->nextState.clientNum", "cent->nextState.number", v82, v83) )
          __debugbreak();
      }
      _RBX->pose.coverWall.coverGrid[2] = -16843010;
      _RBX->previousEventSequence.combined = _RBX->nextState.eventSequence.combined;
      _RDI = CgStatic::GetCharacterInfo(*(CgStatic **)quat.v, _RBX->nextState.clientNum);
      if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 963, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
        __debugbreak();
      _RDI->weaponOccludedAdjustFrac = 0.0;
      _RDI->executionPropHidePending = 0;
      _RDI->deltaLerpMoveDir = 0.0;
      *(double *)&_XMM0 = BG_MovementDirToDegrees(_RBX->nextState.lerp.u.player.movementDir);
      __asm { vmovss  dword ptr [rdi+8BCh], xmm0 }
      BG_SlopeWorldmodel_Unpack(&_RBX->nextState.lerp.u.player.slopePacked, &_RDI->groundNormalInterpolated);
      _RDI->leftStickInputInterpolated = BG_PackedPolarCoordsToCartesian(_RBX->nextState.lerp.u.player.leftStickPolarPacked);
      _RDI->rightStickInputInterpolated = BG_PackedPolarCoordsToCartesian(_RBX->nextState.lerp.u.player.rightStickPolarPacked);
      __asm
      {
        vmovss  xmm6, cs:__real@3f800000
        vmovaps xmm1, xmm6; maxAbsValueSize
      }
      *(double *)&_XMM0 = MSG_UnpackSignedFloat(_RBX->nextState.lerp.u.player.extraAnimData.anonymous.data[0], *(float *)&_XMM1, 0x10u);
      __asm
      {
        vmovss  dword ptr [rdi+904h], xmm0
        vmovaps xmm1, xmm6; maxAbsValueSize
      }
      *(double *)&_XMM0 = MSG_UnpackSignedFloat(_RBX->nextState.lerp.u.player.extraAnimData.anonymous.data[1], *(float *)&_XMM1, 0x10u);
      __asm
      {
        vmovss  dword ptr [rdi+908h], xmm0
        vmovaps xmm1, xmm6; maxAbsValueSize
      }
      *(double *)&_XMM0 = MSG_UnpackSignedFloat(_RBX->nextState.lerp.u.player.extraAnimData.anonymous.data[2], *(float *)&_XMM1, 0x10u);
      __asm { vmovss  dword ptr [rdi+90Ch], xmm0 }
      BG_AnimationMP_ResetCharacterInfoHeightOffset(_RDI);
      CGMovingPlatforms::ResetClientLocalOffset(_RDI);
      if ( PlayerASM_IsEnabled() )
      {
        v34 = BG_MovementDirToDegrees(_RBX->nextState.lerp.u.player.velocityDir);
        BG_PlayerASM_UpdateAngles(*(const float *)&v34, _RDI);
      }
      *(_QWORD *)&_RDI->mount.startTime = 0i64;
      _RDI->playerAngles.v[0] = _RBX->pose.angles.v[0];
      __asm
      {
        vmovss  xmm0, dword ptr [rbx+4Ch]
        vmovss  dword ptr [rdi+9C4h], xmm0
        vmovss  xmm1, dword ptr [rbx+50h]
        vmovss  dword ptr [rdi+9C8h], xmm1
      }
      _RBX->pose.angles.v[0] = 0.0;
      _RBX->pose.angles.v[2] = 0.0;
      CG_PlayersMP_ResetCharacterEntity((LocalClientNum_t)v7, LocalClientGlobals, _RBX, newEntity);
      if ( newEntity )
      {
        clientNum = _RBX->nextState.clientNum;
        if ( clientNum < cls.maxClients && (LocalClientGlobals->inKillCam || !LocalClientGlobals->predictedPlayerState.deltaTime || LocalClientGlobals->predictedPlayerState.clientNum != clientNum || LocalClientGlobals->predictedPlayerState.clientNum == CG_GetLocalClientGlobals((const LocalClientNum_t)v7)->clientNum) )
          CG_CustomizationMP_ResetCustomizationLatchForClient((const LocalClientNum_t)v7, _RBX->nextState.clientNum);
      }
      if ( Physics_AreClientWorldsCreated() && !CG_PhysicsCharacterProxy_IsRegistered((LocalClientNum_t)v7, _RBX) )
      {
        AnglesToQuat(&_RBX->pose.angles, &quat);
        CG_GetPoseOrigin(&_RBX->pose, &outOrigin);
        CG_PhysicsCharacterProxy_AddCharacter((LocalClientNum_t)v7, _RBX, &outOrigin, &quat);
      }
      ClientDObj = Com_GetClientDObj(*p_number, (LocalClientNum_t)v7);
      v39 = ClientDObj;
      if ( ClientDObj )
      {
        CG_PlayersMP_PreControllers((LocalClientNum_t)v7, ClientDObj, _RBX);
        XAnimBonePhysicsSetSettlingEnabled(v39, 0);
      }
      _RDI->dobjForceCheckWeaponModelLoaded = 1;
      break;
    case ET_AGENT_CORPSE:
      if ( !ReservedIndexForEntity )
        CG_SnapshotMP_HandleUnlinkedCorpseEntity((const LocalClientNum_t)v7, _RBX);
      v53 = CG_GetLocalClientStaticGlobals((const LocalClientNum_t)v7);
      v54 = *p_number - ComCharacterLimits::GetAgentCorpseEntityIndexOffset();
      if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 137, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
        __debugbreak();
      if ( v54 >= ComCharacterLimits::ms_gameData.m_agentCorpseCount )
      {
        if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 137, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
          __debugbreak();
        LODWORD(v81) = ComCharacterLimits::ms_gameData.m_agentCorpseCount;
        LODWORD(v80) = v54;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 1162, ASSERT_TYPE_ASSERT, "(unsigned)( corpseIndex ) < (unsigned)( ComCharacterLimits::GetAgentCorpseMaxCount() )", "corpseIndex doesn't index ComCharacterLimits::GetAgentCorpseMaxCount()\n\t%i not in [0, %i)", v80, v81) )
          __debugbreak();
      }
      if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 137, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
        __debugbreak();
      if ( (unsigned __int64)(int)ComCharacterLimits::ms_gameData.m_agentCorpseCount > 8 )
      {
        if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 137, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
          __debugbreak();
        LODWORD(v83) = 8;
        LODWORD(v82) = ComCharacterLimits::ms_gameData.m_agentCorpseCount;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 1163, ASSERT_TYPE_ASSERT, "( ComCharacterLimits::GetAgentCorpseMaxCount() ) <= ( ( sizeof( *array_counter( cgs->agentCorpseInfo ) ) + 0 ) )", "%s <= %s\n\t%i, %i", "ComCharacterLimits::GetAgentCorpseMaxCount()", "ARRAY_COUNT( cgs->agentCorpseInfo )", v82, v83) )
          __debugbreak();
      }
      v42 = &v53->agentCorpseInfo[v54];
      v42->flag = 3;
      CG_SnapshotMP_ReleaseEntityRagdolls(_RBX, (LocalClientNum_t)v7);
      if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagStrict(&_RBX->nextState.lerp.eFlags, (EntityStateFlagsMP)27) )
      {
        v55 = CgStatic::GetCharacterInfo(*(CgStatic **)quat.v, _RBX->nextState.clientNum);
        if ( !v55 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 1175, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
          __debugbreak();
        v56 = v55;
      }
      else
      {
        v56 = NULL;
      }
      CG_SnapshotMP_ResetAgentCorpse((const LocalClientNum_t)v7, v56, _RBX, &_RBX->nextState, v42);
      v51 = newEntity;
      if ( newEntity )
      {
        v57 = (const CgSnapshotMP *)CG_SnapshotMP_GetPrevSnap_Internal((const LocalClientNum_t)v7);
        CG_SnapshotMP_FixupCorpseTrajectory((const LocalClientNum_t)v7, v57, _RBX);
      }
      if ( CG_SnapshotMP_EntityNeedsLODChange((const LocalClientNum_t)v7, newEntity == 0, killcamEndingTransition != 0, _RBX) == 1 )
      {
        _RBX->previousEventSequence.combined = _RBX->nextState.eventSequence.combined;
      }
      else
      {
LABEL_144:
        if ( v51 )
          _RBX->previousEventSequence.combined = 0;
      }
LABEL_146:
      _RBX->typeData.flightDurationMs = 2047;
      v42->ci.dobjDirty = 1;
      break;
    case ET_PHYSICS_CHILD:
      CG_PhysicsObject_ResetPhysicsChild((LocalClientNum_t)v7, _RBX);
      break;
    case ET_BEAM:
      CG_BeamEntity_Reset((const LocalClientNum_t)v7, _RBX);
      break;
    case ET_CLIENT_CHARACTER:
      CG_ClientCharacter_ResetEntity((const LocalClientNum_t)v7, _RBX);
      break;
    case ET_RAGDOLL_CONSTRAINT:
      CG_RagdollConstraintEntity_Reset((const LocalClientNum_t)v7, _RBX);
      break;
    case ET_PHYSICS_VOLUME:
      CG_PhysicsVolume_Reset((LocalClientNum_t)v7, _RBX);
      break;
    case ET_COVERWALL:
      CG_CoverWall_ResetEntity((const LocalClientNum_t)v7, _RBX);
      break;
    default:
LABEL_224:
      _RBX->previousEventSequence.combined = _RBX->nextState.eventSequence.combined;
      break;
  }
  R_MDAO_ResetEntityOcclusionState(&_RBX->pose);
  R_EntityMoved((LocalClientNum_t)v7, *p_number);
  __asm
  {
    vmovss  xmm0, cs:__real@48000000
    vmovss  [rbp+57h+var_68], xmm0
    vmovss  [rbp+57h+var_64], xmm0
    vmovss  [rbp+57h+var_60], xmm0
  }
  _R15 = CgEntitySystem::GetEntitySystem((const LocalClientNum_t)v7);
  v65 = *p_number;
  if ( (unsigned int)v65 >= 0x800 )
  {
    LODWORD(v81) = 2048;
    LODWORD(v80) = *p_number;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 461, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", v80, v81) )
      __debugbreak();
  }
  if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 109, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
    __debugbreak();
  __asm { vmovss  xmm0, [rbp+57h+var_68] }
  if ( (int)v65 > (int)ComCharacterLimits::ms_gameData.m_clientCount )
  {
    _RCX = 3 * v65 + 389124;
    __asm
    {
      vmovss  dword ptr [r15+rcx*4], xmm0
      vmovss  xmm1, [rbp+57h+var_64]
      vmovss  dword ptr [r15+rcx*4+4], xmm1
      vmovss  xmm0, [rbp+57h+var_60]
      vmovss  dword ptr [r15+rcx*4+8], xmm0
    }
  }
  else
  {
    v67 = s_entity_aab_Z;
    v68 = s_entity_aab_Y;
    v69 = s_entity_aab_X;
    __asm { vmovss  dword ptr [rbp+57h+quat], xmm0 }
    if ( (LODWORD(quat.v[0]) & 0x7F800000) == 2139095040 )
      goto LABEL_243;
    __asm
    {
      vmovss  xmm0, [rbp+57h+var_64]
      vmovss  dword ptr [rbp+57h+quat], xmm0
    }
    if ( (LODWORD(quat.v[0]) & 0x7F800000) == 2139095040 )
      goto LABEL_243;
    __asm
    {
      vmovss  xmm0, [rbp+57h+var_60]
      vmovss  dword ptr [rbp+57h+quat], xmm0
    }
    if ( (LODWORD(quat.v[0]) & 0x7F800000) == 2139095040 )
    {
LABEL_243:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 398, ASSERT_TYPE_SANITY, "( !IS_NAN( ( from )[0] ) && !IS_NAN( ( from )[1] ) && !IS_NAN( ( from )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( from )[0] ) && !IS_NAN( ( from )[1] ) && !IS_NAN( ( from )[2] )") )
        __debugbreak();
    }
    v72 = (unsigned int *)&_R15->m_entityOrigin[v65];
    v73 = (unsigned int)v72 ^ v92 ^ ~v69;
    v74 = (unsigned int)v72 ^ v93 ^ v68 ^ v73;
    v75 = (unsigned int)v72 ^ v94 ^ v67 ^ v74;
    *v72 = v73;
    v72[1] = v74;
    v72[2] = v75;
    memset(&quat, 0, 8ui64);
  }
  CG_GameInterface_SnapshotMP_ResetEntity((LocalClientNum_t)v7, _RBX, newEntity, killcamEndingTransition);
LABEL_240:
  memset(&outOrigin, 0, sizeof(outOrigin));
  __asm { vmovaps xmm6, [rsp+120h+var_50] }
}

/*
==============
CG_SnapshotMP_SetInitialSnapshot
==============
*/
void CG_SnapshotMP_SetInitialSnapshot(LocalClientNum_t localClientNum, CgSnapshotMP *snap)
{
  __int64 v2; 
  CgWeaponMap *v4; 
  const CgSnapshotMP *NextSnap_Internal; 
  int serverTime; 
  CgStatic *LocalClientStatics; 
  BgAnimStatic *v8; 
  int v13; 
  __int64 v14; 
  CgEntitySystem *EntitySystem; 
  __int64 v17; 
  __int64 v18; 
  __int64 v19; 
  CgGlobalsMP *LocalClientGlobals; 
  vec3_t origin; 
  tmat33_t<vec3_t> axis; 

  v2 = localClientNum;
  _R15 = snap;
  R_InitSceneData(localClientNum);
  LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals((const LocalClientNum_t)v2);
  if ( !CgWeaponMap::ms_instance[v2] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
    __debugbreak();
  v4 = CgWeaponMap::ms_instance[v2];
  NextSnap_Internal = (const CgSnapshotMP *)CG_SnapshotMP_GetNextSnap_Internal((const LocalClientNum_t)v2);
  CG_SnapshotMP_UpdateOmnvars((LocalClientNum_t)v2, NextSnap_Internal, _R15);
  CG_SnapshotMP_SetNextSnap((LocalClientNum_t)v2, NULL);
  if ( LocalClientGlobals->nextSnap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 1375, ASSERT_TYPE_ASSERT, "(!cgameGlob->nextSnap)", (const char *)&queryFormat, "!cgameGlob->nextSnap") )
    __debugbreak();
  LocalClientGlobals->snap = _R15;
  LocalClientGlobals->nextSnap = _R15;
  serverTime = _R15->serverTime;
  LocalClientGlobals->time = serverTime;
  LocalClientGlobals->oldTime = serverTime;
  LocalClientGlobals->frametime = 0;
  LocalClientStatics = CgStatic::GetLocalClientStatics((const LocalClientNum_t)v2);
  v8 = LocalClientStatics->GetAnimStatics(LocalClientStatics);
  if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 1386, ASSERT_TYPE_ASSERT, "(bgameAnim)", (const char *)&queryFormat, "bgameAnim") )
    __debugbreak();
  v8->time = LocalClientGlobals->time;
  v8->deltaTime = _R15->ps.deltaTime;
  v8->frametime = LocalClientGlobals->frametime;
  if ( !BgWeaponMap::IsEmpty(v4) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 1393, ASSERT_TYPE_ASSERT, "(weaponMap->IsEmpty())", "%s\n\tThe weapon map was not properly initialized and is not empty", "weaponMap->IsEmpty()") )
    __debugbreak();
  CgWeaponMap::SetWeaponEntryRange(v4, _R15->weapons, _R15->numWeapons);
  ScriptableCl_SetLootWeaponMapIndicies((const LocalClientNum_t)v2);
  __asm
  {
    vmovss  xmm0, dword ptr [r15+58h]
    vmovss  xmm1, dword ptr [r15+5Ch]
    vmovss  dword ptr [rsp+0C8h+origin], xmm0
    vmovss  xmm0, dword ptr [r15+210h]
    vaddss  xmm2, xmm0, dword ptr [r15+60h]
    vmovss  dword ptr [rsp+0C8h+origin+8], xmm2
    vmovss  dword ptr [rsp+0C8h+origin+4], xmm1
  }
  AnglesToAxis(&_R15->ps.viewangles, &axis);
  SND_SetListener((LocalClientNum_t)v2, _R15->ps.clientNum, &origin, &axis, &_R15->ps.velocity);
  v13 = 0;
  v14 = 0i64;
  do
  {
    EntitySystem = CgEntitySystem::GetEntitySystem((const LocalClientNum_t)v2);
    if ( (unsigned int)v13 >= 0x800 )
    {
      LODWORD(v19) = 2048;
      LODWORD(v18) = v13;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", v18, v19) )
        __debugbreak();
    }
    if ( (EntitySystem->m_entities[v14].flags & 1) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 1412, ASSERT_TYPE_ASSERT, "(!CENextValid( CG_GetEntity( localClientNum, i ) ))", (const char *)&queryFormat, "!CENextValid( CG_GetEntity( localClientNum, i ) )") )
      __debugbreak();
    ++v13;
    ++v14;
  }
  while ( v13 < 2048 );
  __asm { vmovss  xmm0, cs:__real@3f800000; volume }
  SND_FadeAllSounds(*(float *)&_XMM0, 0);
  if ( (unsigned int)v2 >= 2 )
  {
    LODWORD(v19) = 2;
    LODWORD(v18) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\client_mp.h", 254, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v18, v19) )
      __debugbreak();
  }
  v17 = v2;
  if ( clientUIActives[v2].migrationState )
  {
    memcpy_0(&LocalClientGlobals->predictedPlayerState, &_R15->ps, sizeof(LocalClientGlobals->predictedPlayerState));
    LocalClientGlobals->predictedPlayerState.commandTimeInterpolated = LocalClientGlobals->predictedPlayerState.commandTime;
    LocalClientGlobals->predictedPlayerState.serverTimeInterpolated = LocalClientGlobals->predictedPlayerState.serverTime;
    LocalClientGlobals->predictedPlayerState.inputTimeInterpolated = LocalClientGlobals->predictedPlayerState.inputTime;
  }
  else
  {
    CG_PlayerStateMP_Respawn((LocalClientNum_t)v2, 0, 1);
  }
  if ( (unsigned int)v2 >= 2 )
  {
    LODWORD(v19) = 2;
    LODWORD(v18) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\client_mp.h", 265, ASSERT_TYPE_ASSERT, "(unsigned)( client ) < (unsigned)( 2 )", "client doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v18, v19) )
      __debugbreak();
  }
  CL_UpdateMigrationProfile(clientUIActives[v17].migrationState, CMSTATE_INACTIVE);
  clientUIActives[v17].migrationState = CMSTATE_INACTIVE;
  CG_CustomizationMP_ResetAllCustomizationLatch((const LocalClientNum_t)v2);
  CG_AnimTreeMP_ClearScriptModelAnims((LocalClientNum_t)v2);
  CG_ViewMP_Init((const LocalClientNum_t)v2);
  LocalClientGlobals->nextSnap = NULL;
}

/*
==============
CG_SnapshotMP_SetNextSnap
==============
*/
void CG_SnapshotMP_SetNextSnap(LocalClientNum_t localClientNum, CgSnapshotMP *snap)
{
  __int64 v10; 
  CgWeaponMap *v12; 
  const dvar_t *v13; 
  const snapshot_t *v14; 
  const snapshot_t *v15; 
  bool v16; 
  CgSnapshotMP *v17; 
  const snapshot_t *NextSnap_Internal; 
  int v19; 
  __int16 *p_serverTime; 
  __int16 v21; 
  unsigned int v22; 
  __int64 v23; 
  CgEntitySystem *EntitySystem; 
  __int64 v25; 
  centity_t *Entity; 
  CgSnapshotType SnapshotType; 
  const snapshot_t *v28; 
  int v29; 
  int *v30; 
  __int64 v31; 
  CgEntitySystem *v32; 
  __int64 v33; 
  centity_t *v34; 
  const CgSnapshotMP *v35; 
  CgSnapshotMP *v36; 
  int commandTime; 
  cgs_t *LocalClientStaticGlobals; 
  bool v46; 
  playerState_s *v47; 
  bool v48; 
  int v49; 
  CgMLGCameraManager *CameraManager; 
  bool v51; 
  __int64 clientNum; 
  BgAnimStatic *v55; 
  bool v56; 
  bool v57; 
  bool v58; 
  playerState_s *v59; 
  characterInfo_t *CharacterInfo; 
  GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32> *v61; 
  __int64 v62; 
  int v63; 
  unsigned int v64; 
  __int64 v65; 
  int v66; 
  bool v67; 
  centity_t *v68; 
  CgPredictedEntitySystem *System; 
  __int64 v70; 
  unsigned int v71; 
  int v72; 
  __int16 *p_number; 
  centity_t *v74; 
  CgHandler *Handler; 
  __int64 v76; 
  int pm_type; 
  int v78; 
  int v79; 
  int v80; 
  bool v81; 
  bool v82; 
  int v83; 
  int v84; 
  int v85; 
  __int64 v86; 
  bool v87; 
  int v88; 
  GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64> *v89; 
  __int64 v90; 
  __int64 v91; 
  CgEntitySystem *v92; 
  unsigned int v110; 
  __int64 v111; 
  int v112; 
  int v113; 
  int v114; 
  CgVehicleSystem *v115; 
  CgWeaponMap *Instance; 
  CgHandler *v117; 
  char v118; 
  bool v121; 
  const dvar_t *v122; 
  __int64 entCount; 
  int v124; 
  CgSnapshotMP *v125; 
  entityState_t *entities; 
  unsigned int number; 
  __int64 v128; 
  CgEntitySystem *v129; 
  __int64 v130; 
  __int64 v131; 
  __int16 v132; 
  int v133; 
  clientState_t *clients; 
  __int64 clientIndex; 
  CgEntitySystem *v136; 
  CgSnapshotMP *v137; 
  int v138; 
  CgStatic *v139; 
  __int64 v140; 
  cg_t *LocalClientGlobals; 
  characterInfo_t *v142; 
  unsigned int v143; 
  unsigned int v144; 
  unsigned int v145; 
  cg_t *v146; 
  characterInfo_t *v147; 
  unsigned int v148; 
  unsigned int v149; 
  characterInfo_t *v150; 
  CgMLGSpectator *MLGSpectator; 
  BGVehicles *vehicleSystem; 
  __int64 v160; 
  __int64 v161; 
  __int64 v162; 
  __int64 v163; 
  __int64 v164; 
  __int64 v165; 
  bool createdNew_optionalOut; 
  unsigned int mapRestart; 
  int v168; 
  CgGlobalsMP *v169; 
  GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64> *p_otherFlags; 
  BgWeaponMap *p_ps; 
  CgSnapshotMP *v172; 
  CgSnapshotMP *v173; 
  CgSnapshotMP *nextSnap; 
  CgStatic *LocalClientStatics; 
  CgPredictedEntitySystem *v176; 
  __int64 v177; 
  __int64 v178; 
  int v179[64]; 
  entityState_t *nextSnapCorpseEnts[9]; 
  char v181; 
  void *retaddr; 

  _RAX = &retaddr;
  v178 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm8
    vmovaps xmmword ptr [rax-78h], xmm9
    vmovaps xmmword ptr [rax-88h], xmm10
    vmovaps xmmword ptr [rax-98h], xmm11
  }
  _R15 = snap;
  v173 = snap;
  v10 = localClientNum;
  Sys_ProfBeginNamedEvent(0xFF4169E1, "SetNextSnap");
  SND_AddPhysicsQueryBlock();
  memset_0(v179, 0, sizeof(v179));
  _RSI = CgGlobalsMP::GetLocalClientGlobals((const LocalClientNum_t)v10);
  v169 = _RSI;
  LocalClientStatics = CgStatic::GetLocalClientStatics((const LocalClientNum_t)v10);
  if ( !CgWeaponMap::ms_instance[v10] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
    __debugbreak();
  v12 = CgWeaponMap::ms_instance[v10];
  p_ps = v12;
  v13 = DVARBOOL_cg_entityWorkers;
  if ( !DVARBOOL_cg_entityWorkers && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_entityWorkers") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v13);
  if ( v13->current.enabled )
    Sys_WaitWorkerCmdsOnlyOfType(WRKCMD_ENTITY_BUCKET);
  mapRestart = _RSI->mapRestart;
  v14 = _RSI->nextSnap;
  if ( v14 )
  {
    v15 = _RSI->snap;
    if ( v15 == v14 )
      goto LABEL_16;
    v16 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 3550, ASSERT_TYPE_ASSERT, "( cgameGlob->snap ) == ( cgameGlob->nextSnap )", "%s == %s\n\t%p, %p", "cgameGlob->snap", "cgameGlob->nextSnap", v15, _RSI->nextSnap);
  }
  else
  {
    v17 = (CgSnapshotMP *)_RSI->snap;
    if ( v17 == _R15 )
      goto LABEL_16;
    v16 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 3555, ASSERT_TYPE_ASSERT, "( cgameGlob->snap ) == ( snap )", "%s == %s\n\t%p, %p", "cgameGlob->snap", "snap", v17, _R15);
  }
  if ( v16 )
    __debugbreak();
LABEL_16:
  NextSnap_Internal = CG_SnapshotMP_GetNextSnap_Internal((const LocalClientNum_t)v10);
  if ( NextSnap_Internal )
  {
    Sys_ProfBeginNamedEvent(0xFFE9967A, "SetNextSnap-PrevEnts");
    v19 = 0;
    if ( NextSnap_Internal[1].snapFlags > 0 )
    {
      p_serverTime = (__int16 *)&NextSnap_Internal[1340].serverTime;
      do
      {
        v21 = *p_serverTime;
        v22 = *p_serverTime;
        v23 = *p_serverTime;
        v179[v23 >> 5] |= 0x80000000 >> (*p_serverTime & 0x1F);
        if ( p_serverTime[4] != 2 || CG_PlayerCorpseMP_GetCorpseInfoForServerEntityNum((LocalClientNum_t)v10, v21) )
        {
          EntitySystem = CgEntitySystem::GetEntitySystem((const LocalClientNum_t)v10);
          if ( v22 >= 0x800 )
          {
            LODWORD(v160) = 2048;
            LODWORD(vehicleSystem) = v22;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", vehicleSystem, v160) )
              __debugbreak();
          }
          if ( (EntitySystem->m_entities[v23].flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 3578, ASSERT_TYPE_ASSERT, "(CENextValid( cent ))", (const char *)&queryFormat, "CENextValid( cent )") )
            __debugbreak();
          EntitySystem->m_entities[v23].flags &= ~1u;
        }
        ++v19;
        p_serverTime += 124;
      }
      while ( v19 < NextSnap_Internal[1].snapFlags );
      _R15 = v173;
      _RSI = v169;
    }
    v25 = SHIDWORD(NextSnap_Internal[31].__vftable);
    Entity = CG_GetEntity((const LocalClientNum_t)v10, HIDWORD(NextSnap_Internal[31].__vftable));
    if ( (Entity->flags & 1) != 0 )
    {
      Entity->flags &= ~1u;
      v179[v25 >> 5] |= 0x80000000 >> (v25 & 0x1F);
    }
    Sys_ProfEndNamedEvent();
    v12 = (CgWeaponMap *)p_ps;
  }
  _RSI->nextSnap = _R15;
  SnapshotType = CG_Snapshot_GetSnapshotType();
  if ( !_R15 )
  {
    if ( SnapshotType != SNAP_TYPE_MP )
    {
      LODWORD(v160) = CG_Snapshot_GetSnapshotType();
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 175, ASSERT_TYPE_ASSERT, "(CG_Snapshot_GetSnapshotType() == CgSnapshotType::SNAP_TYPE_MP)", "%s\n\tCG_SnapshotMP_GetPrevSnap_Internal: Trying to retrieve a multiplayer snapshot but multiplayer snapshots have not been allocated: CgSnapshotType:%d\n", "CG_Snapshot_GetSnapshotType() == CgSnapshotType::SNAP_TYPE_MP", v160) )
        __debugbreak();
    }
    v28 = CG_GetLocalClientGlobals((const LocalClientNum_t)v10)->snap;
    if ( v28 )
    {
      v29 = 0;
      if ( v28[1].snapFlags > 0 )
      {
        v30 = &v28[1340].serverTime;
        do
        {
          if ( *((_WORD *)v30 + 4) != 2 )
          {
            v31 = *(__int16 *)v30;
            v32 = CgEntitySystem::GetEntitySystem((const LocalClientNum_t)v10);
            if ( (unsigned int)v31 >= 0x800 )
            {
              LODWORD(v160) = 2048;
              LODWORD(vehicleSystem) = v31;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", vehicleSystem, v160) )
                __debugbreak();
            }
            CG_SnapshotMP_ShutdownEntity((LocalClientNum_t)v10, &v32->m_entities[v31]);
          }
          ++v29;
          v30 += 62;
        }
        while ( v29 < v28[1].snapFlags );
      }
      v33 = SHIDWORD(v28[31].__vftable);
      v34 = CG_GetEntity((const LocalClientNum_t)v10, HIDWORD(v28[31].__vftable));
      if ( ((0x80000000 >> (v33 & 0x1F)) & v179[v33 >> 5]) != 0 )
        CG_SnapshotMP_ShutdownEntity((LocalClientNum_t)v10, v34);
      v169->snap = NULL;
      CG_PredictMP_ClearCharacterInfo((LocalClientNum_t)v10, HIDWORD(v28[31].__vftable));
    }
    CG_PlayerCorpseMP_ClearAllPlayerCorpses((LocalClientNum_t)v10);
    CG_PredictMP_ClearItemList();
    BgWeaponMap::ClearEntries(p_ps);
    SND_ReleasePhysicsQueryBlock();
    goto LABEL_381;
  }
  if ( SnapshotType != SNAP_TYPE_MP )
  {
    LODWORD(v160) = CG_Snapshot_GetSnapshotType();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 175, ASSERT_TYPE_ASSERT, "(CG_Snapshot_GetSnapshotType() == CgSnapshotType::SNAP_TYPE_MP)", "%s\n\tCG_SnapshotMP_GetPrevSnap_Internal: Trying to retrieve a multiplayer snapshot but multiplayer snapshots have not been allocated: CgSnapshotType:%d\n", "CG_Snapshot_GetSnapshotType() == CgSnapshotType::SNAP_TYPE_MP", v160) )
      __debugbreak();
  }
  v35 = (const CgSnapshotMP *)CG_GetLocalClientGlobals((const LocalClientNum_t)v10)->snap;
  v172 = (CgSnapshotMP *)v35;
  if ( CG_Snapshot_GetSnapshotType() != SNAP_TYPE_MP )
  {
    LODWORD(v160) = CG_Snapshot_GetSnapshotType();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 162, ASSERT_TYPE_ASSERT, "(CG_Snapshot_GetSnapshotType() == CgSnapshotType::SNAP_TYPE_MP)", "%s\n\tCG_SnapshotMP_GetNextSnap_Internal: Trying to retrieve a multiplayer snapshot but multiplayer snapshots have not been allocated: CgSnapshotType:%d\n", "CG_Snapshot_GetSnapshotType() == CgSnapshotType::SNAP_TYPE_MP", v160) )
      __debugbreak();
  }
  v36 = (CgSnapshotMP *)CG_GetLocalClientGlobals((const LocalClientNum_t)v10)->nextSnap;
  nextSnap = v36;
  if ( !v35 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 3639, ASSERT_TYPE_ASSERT, "(prevSnap)", (const char *)&queryFormat, "prevSnap") )
    __debugbreak();
  if ( !v36 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 3640, ASSERT_TYPE_ASSERT, "(nextSnap)", (const char *)&queryFormat, "nextSnap") )
    __debugbreak();
  _RSI->m_usingLowLodClientEntityEvents = (v36->snapFlags & 0x800) != 0;
  CL_Main_InvalidateSkeletonCache();
  Sys_ProfBeginNamedEvent(0xFFBA55D3, "SetNextSnap-WeaponMap");
  BgWeaponMap::ClearEntries(v12);
  CgWeaponMap::SetWeaponEntryRange(v12, _R15->weapons, _R15->numWeapons);
  Sys_ProfEndNamedEvent();
  ScriptableCl_SetLootWeaponMapIndicies((const LocalClientNum_t)v10);
  CL_Input_UpdateCursorHintBinding((LocalClientNum_t)v10, v36->ps.cursorHint, v36->ps.cursorHintBinding);
  Sys_ProfBeginNamedEvent(0xFFF5DEB3, "SetNextSnap-PlayerState");
  p_ps = (BgWeaponMap *)&_R15->ps;
  if ( _R15 == (CgSnapshotMP *)-40i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2425, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&_R15->ps.otherFlags, ACTIVE, 0x20u) )
  {
    __asm
    {
      vmovss  xmm6, dword ptr [rsi+38h]
      vmovss  xmm7, dword ptr [rsi+3Ch]
      vmovss  xmm8, dword ptr [rsi+40h]
      vmovss  xmm9, dword ptr [rsi+1E0h]
      vmovss  xmm10, dword ptr [rsi+1E4h]
      vmovss  xmm11, dword ptr [rsi+1E8h]
    }
  }
  else
  {
    __asm
    {
      vmovss  xmm8, dword ptr [rsp+2B8h+var_240]
      vmovss  xmm7, dword ptr [rsp+2B8h+var_240]
      vmovss  xmm11, dword ptr [rsp+2B8h+var_240]
      vmovss  xmm10, dword ptr [rsp+2B8h+var_240]
      vmovss  xmm9, dword ptr [rsp+2B8h+var_240]
      vmovss  xmm6, dword ptr [rsp+2B8h+var_240]
    }
  }
  if ( PlayerASM_IsEnabled() )
  {
    commandTime = _RSI->predictedPlayerState.commandTime;
    if ( _R15->ps.commandTime < commandTime )
    {
      __asm
      {
        vmovups xmm0, xmmword ptr [rsi+0F0h]
        vmovups xmmword ptr [rsi+65A8h], xmm0
      }
      _RSI->playerASMLastAnimState.slot[1].packedAnim = _RSI->predictedPlayerState.animState.slot[1].packedAnim;
      _RSI->playerASMLastCommandTime = commandTime;
    }
  }
  memcpy_0(&_RSI->predictedPlayerState, &_R15->ps, sizeof(_RSI->predictedPlayerState));
  _RSI->predictedPlayerState.commandTimeInterpolated = _RSI->predictedPlayerState.commandTime;
  _RSI->predictedPlayerState.serverTimeInterpolated = _RSI->predictedPlayerState.serverTime;
  _RSI->predictedPlayerState.inputTimeInterpolated = _RSI->predictedPlayerState.inputTime;
  if ( _R15 == (CgSnapshotMP *)-40i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2425, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&_R15->ps.otherFlags, ACTIVE, 0x20u) )
  {
    __asm
    {
      vmovss  dword ptr [rsi+38h], xmm6
      vmovss  dword ptr [rsi+3Ch], xmm7
      vmovss  dword ptr [rsi+40h], xmm8
      vmovss  dword ptr [rsi+1E0h], xmm9
      vmovss  dword ptr [rsi+1E4h], xmm10
      vmovss  dword ptr [rsi+1E8h], xmm11
    }
  }
  Sys_ProfEndNamedEvent();
  CG_Entity_SetFrameInterpolation((LocalClientNum_t)v10);
  Sys_ProfBeginNamedEvent(0xFF9ACD32, "SetNextSnap-ServerCmd");
  LocalClientStaticGlobals = CG_GetLocalClientStaticGlobals((const LocalClientNum_t)v10);
  CG_ServerCmdMP_ExecuteNewServerCommands((LocalClientNum_t)v10, LocalClientStaticGlobals->serverCommandSequence, _R15->serverCommandSequence);
  LocalClientStaticGlobals->serverCommandSequence = _R15->serverCommandSequence;
  Sys_ProfEndNamedEvent();
  ScriptableCl_ApplyChanges((const LocalClientNum_t)v10, nextSnap->scriptableChangeStartSequence, nextSnap->scriptableChangeEndSequence);
  ScriptableCl_ValidateChecksum((const LocalClientNum_t)v10, nextSnap->scriptableChangeEndSequence, nextSnap->scriptablePartsChecksum, nextSnap->scriptableInstanceChecksum, "CG_SnapshotMP_SetNextSnap");
  CL_StreamSync_ApplyServerLoadRequest((const LocalClientNum_t)v10, &nextSnap->streamSync);
  CG_SnapshotMP_UpdateClients((const LocalClientNum_t)v10, v35, _R15);
  CG_SnapshotMP_UpdateAgents((const LocalClientNum_t)v10, _R15);
  Sys_ProfBeginNamedEvent(0xFFCD5C5C, "SetNextSnap-Scores");
  CG_ServerCmdMP_UpdateScores(_RSI, _R15);
  Sys_ProfEndNamedEvent();
  CG_SnapshotMP_UpdateOmnvars((LocalClientNum_t)v10, v35, nextSnap);
  v46 = ScriptableCl_ObjectiveChanged((const LocalClientNum_t)v10);
  v47 = &v35->ps;
  v48 = CG_CalloutMarkerPing_CheckChanged((LocalClientNum_t)v10, &v35->ps, &nextSnap->ps);
  v49 = memcmp_0(v35->ps.objectives, nextSnap->ps.objectives, 0x1580ui64);
  if ( _RSI->mapRestart || v49 || v46 || v48 )
  {
    Sys_ProfBeginNamedEvent(0xFFE0FFFF, "SetNextSnap-Objectives");
    if ( LUI_BeginEvent((LocalClientNum_t)v10, "objectives_update", LUI_luaVM) )
      LUI_EndEvent(LUI_luaVM);
    Sys_ProfEndNamedEvent();
  }
  ScriptableCl_ObjectiveChangedClear((const LocalClientNum_t)v10);
  if ( _RSI->mapRestart || v48 )
  {
    Sys_ProfBeginNamedEvent(0xFFEE82EE, "SetNextSnap-CalloutMarkerPings");
    if ( LUI_BeginEvent((LocalClientNum_t)v10, "callout_marker_pings_update", LUI_luaVM) )
      LUI_EndEvent(LUI_luaVM);
    ScriptableCl_MarkLootPingStatusDirty((const LocalClientNum_t)v10);
    Sys_ProfEndNamedEvent();
  }
  if ( _RSI->m_isMLGSpectator )
  {
    if ( nextSnap == (CgSnapshotMP *)-11544i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 2947, ASSERT_TYPE_ASSERT, "(snaphot->ps.targetMarkerGroups)", (const char *)&queryFormat, "snaphot->ps.targetMarkerGroups") )
      __debugbreak();
    CameraManager = CgMLGSpectator::GetCameraManager(_RSI->m_mlgSpectatorPtr);
    if ( CgMLGCameraManager::GetMLGCameraType(CameraManager, (const LocalClientNum_t)v10) )
      memset_0(nextSnap->ps.targetMarkerGroups, 0, sizeof(nextSnap->ps.targetMarkerGroups));
  }
  v51 = memcmp_0(v35->ps.targetMarkerGroups, nextSnap->ps.targetMarkerGroups, 0xB0ui64) != 0;
  if ( _RSI->mapRestart || v51 )
  {
    Sys_ProfBeginNamedEvent(0xFFEEE8AA, "SetNextSnap-Markers");
    if ( LUI_BeginEvent((LocalClientNum_t)v10, "target_markers_update", LUI_luaVM) )
      LUI_EndEvent(LUI_luaVM);
    Sys_ProfEndNamedEvent();
  }
  CG_SnapshotMP_UpdateMLGSpectatorClientInfo(_RSI, (LocalClientNum_t)v10, _R15);
  __asm
  {
    vmovups ymm0, ymmword ptr [r15+0BA6A4h]
    vmovups ymmword ptr [rsi+0B53C4h], ymm0
    vmovups xmm1, xmmword ptr [r15+0BA6C4h]
    vmovups xmmword ptr [rsi+0B53E4h], xmm1
  }
  CG_FrontEndScene_SetScriptedCameraState(&_R15->scriptedCameraState);
  clientNum = _R15->ps.clientNum;
  _RSI->playerTeleported = 0;
  _RSI->playerScriptTeleported = 0;
  v55 = LocalClientStatics->GetAnimStatics(LocalClientStatics);
  if ( !v55 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 3797, ASSERT_TYPE_ASSERT, "(bgameAnim)", (const char *)&queryFormat, "bgameAnim") )
    __debugbreak();
  v55->latestSnapshotTime = _R15->serverTime;
  v55->deltaTime = _R15->ps.deltaTime;
  if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
    __debugbreak();
  if ( _R15->ps.clientNum >= ComCharacterLimits::ms_gameData.m_characterCount )
  {
    if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
      __debugbreak();
    LODWORD(v160) = ComCharacterLimits::ms_gameData.m_characterCount;
    LODWORD(vehicleSystem) = _R15->ps.clientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 3802, ASSERT_TYPE_ASSERT, "(unsigned)( snap->ps.clientNum ) < (unsigned)( ComCharacterLimits::GetCharacterMaxCount() )", "snap->ps.clientNum doesn't index ComCharacterLimits::GetCharacterMaxCount()\n\t%i not in [0, %i)", vehicleSystem, v160) )
      __debugbreak();
  }
  p_otherFlags = &_R15->ps.otherFlags;
  if ( GameModeFlagValues::ms_mpValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 190, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a MP-only context", "IsFlagActive( index )") )
    __debugbreak();
  v56 = GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&_R15->ps.otherFlags, ACTIVE, 0x22u);
  if ( GameModeFlagValues::ms_mpValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 190, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a MP-only context", "IsFlagActive( index )") )
    __debugbreak();
  v57 = GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&_R15->ps.otherFlags, ACTIVE, 0x21u);
  v58 = cls.maxClients <= _R15->ps.clientNum;
  createdNew_optionalOut = v58;
  v59 = &_R15->ps;
  if ( _R15 == (CgSnapshotMP *)-40i64 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2289, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2275, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    v59 = NULL;
  }
  if ( GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&v59->otherFlags, GameModeFlagValues::ms_mpValue, 0x21u) || _R15->ps.pm_type == 5 )
  {
    CharacterInfo = CgStatic::GetCharacterInfo(LocalClientStatics, _R15->ps.clientNum);
    if ( CharacterInfo )
      CharacterInfo->speed = _R15->ps.moveSpeedForAnimBlend;
  }
  if ( v58 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 3817, ASSERT_TYPE_ASSERT, "(isAgent ? BG_IsAgentControlledByPlayer( &snap->ps ) : true)", (const char *)&queryFormat, "isAgent ? BG_IsAgentControlledByPlayer( &snap->ps ) : true") )
    __debugbreak();
  if ( v56 || v58 || v57 )
  {
    Sys_ProfBeginNamedEvent(0xFFFF69B4, "SetNextSnap-Player");
    v74 = CG_GetEntity((const LocalClientNum_t)v10, clientNum);
    CG_PredictMP_InitPredictedPlayerEntity(v74, clientNum);
    Handler = CgHandler::getHandler((LocalClientNum_t)v10);
    BG_PlayerStateToEntityState(v12, &_R15->ps, &v74->nextState, 0, Handler);
    v74->flags |= 1u;
    if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&v74->nextState.lerp.eFlags, ACTIVE, 0x11u) )
    {
      v76 = (__int64)v169;
      v169->weaponSelectInAlt = 0;
      *(_BYTE *)(v76 + 98777) = 0;
    }
    pm_type = _R15->ps.pm_type;
    if ( pm_type >= 7 && v172->ps.pm_type < 7 )
    {
      CG_CustomizationMP_ResetCustomizationLatchForClient((const LocalClientNum_t)v10, _R15->ps.clientNum);
      pm_type = _R15->ps.pm_type;
    }
    if ( pm_type < 6 && v172->ps.pm_type == 6 )
      CG_CustomizationMP_ResetCustomizationLatchForClient((const LocalClientNum_t)v10, _R15->ps.clientNum);
    v78 = _R15->ps.stats[3];
    v79 = v172->ps.stats[3];
    v80 = v172->ps.clientNum;
    if ( GameModeFlagValues::ms_mpValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 190, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a MP-only context", "IsFlagActive( index )") )
      __debugbreak();
    v81 = GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&v172->ps.otherFlags, ACTIVE, 0x22u);
    if ( GameModeFlagValues::ms_mpValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 190, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a MP-only context", "IsFlagActive( index )") )
      __debugbreak();
    v82 = GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(p_otherFlags, ACTIVE, 0x22u) != v81;
    v83 = v172->ps.clientNum;
    v84 = v173->ps.clientNum;
    v85 = mapRestart;
    if ( !mapRestart && v78 == v79 && (_DWORD)clientNum == v80 && !v82 && v83 == v84 )
    {
      v86 = (__int64)v169;
      if ( ((0x80000000 >> (clientNum & 0x1F)) & v179[clientNum >> 5]) != 0 && !v169->playerTeleported && v74->pose.eType == v74->nextState.eType )
      {
        v87 = GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&v74->nextState.lerp.eFlags, ACTIVE, 2u);
        if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&v74->prevState.eFlags, ACTIVE, 2u) == v87 )
        {
          _R15 = v173;
          if ( !createdNew_optionalOut && v173->ps.viewmodelIndex != v172->ps.viewmodelIndex )
            CG_CustomizationMP_ResetViewhandsCustomizationLatchForClient((const LocalClientNum_t)v10, v173->ps.clientNum);
        }
        else
        {
          v169->playerScriptTeleported = 1;
          memcpy_0(&v172->ps, p_ps, sizeof(v172->ps));
          CG_SnapshotMP_ResetEntity_Internal((LocalClientNum_t)v10, v74, 0, 0);
          *(_QWORD *)(v86 + 21440) = 0i64;
          *(_DWORD *)(v86 + 21448) = 0;
          _R15 = v173;
        }
      }
      else
      {
        memcpy_0(&v172->ps, p_ps, sizeof(v172->ps));
        CG_SnapshotMP_ResetEntity_Internal((LocalClientNum_t)v10, v74, 1, 0);
        *(_QWORD *)v169->predictedError.v = 0i64;
        *(_DWORD *)(v86 + 21448) = 0;
        _R15 = v173;
      }
    }
    else
    {
      v169->playerTeleported = 1;
      v88 = v85 || v78 != v79 || (_DWORD)clientNum != v80 || v82 || v83 != v84;
      if ( GameModeFlagValues::ms_mpValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 190, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a MP-only context", "IsFlagActive( index )") )
        __debugbreak();
      v89 = p_otherFlags;
      GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(p_otherFlags, ACTIVE, 0x22u);
      if ( GameModeFlagValues::ms_mpValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 190, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a MP-only context", "IsFlagActive( index )") )
        __debugbreak();
      GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(p_otherFlags, ACTIVE, 0x34u);
      v90 = (__int64)v172;
      v179[(__int64)v172->ps.clientNum >> 5] &= ~(0x80000000 >> (v172->ps.clientNum & 0x1F));
      FX_Dismemberment_Clear((LocalClientNum_t)v10, clientNum);
      R_UnlinkEntity(v10, clientNum);
      FX_MarkEntDetachAll((LocalClientNum_t)v10, clientNum);
      CG_SnapshotMP_ShutdownEntity((LocalClientNum_t)v10, v74);
      memcpy_0((void *)(v90 + 40), p_ps, 0x53A4ui64);
      CG_SnapshotMP_ResetEntity_Internal((LocalClientNum_t)v10, v74, 1, 0);
      if ( mapRestart || !GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagStrict(v89, (POtherFlagsMP)33) )
      {
        CG_PlayerStateMP_Respawn((LocalClientNum_t)v10, 0, v88);
        _R15 = v173;
      }
      else
      {
        CG_PlayerStateMP_Respawn((LocalClientNum_t)v10, 1, v88);
        _R15 = v173;
      }
    }
    goto LABEL_140;
  }
  if ( _R15->ps.pm_type == 5 )
  {
    Sys_ProfBeginNamedEvent(0xFFFF69B4, "SetNextSnap-Spectator");
    v61 = (GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32> *)v172;
    v62 = (__int64)v169;
    if ( v172->ps.pm_type != 5 )
      v169->playerTeleported = 1;
    v63 = v61[125].m_flags[0];
    v64 = 0x80000000 >> (v63 & 0x1F);
    v65 = (__int64)v63 >> 5;
    v66 = v64 & v179[v65];
    v179[v65] &= ~v64;
    v67 = GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(v61 + 104, ACTIVE, 2u);
    if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&_R15->ps.eFlags, ACTIVE, 2u) != v67 )
    {
      *(_BYTE *)(v62 + 741793) = 1;
      memcpy_0(v47, &_R15->ps, sizeof(playerState_s));
      *(_QWORD *)(v62 + 21440) = 0i64;
      *(_DWORD *)(v62 + 21448) = 0;
    }
    if ( v66 )
    {
      v68 = CG_GetEntity((const LocalClientNum_t)v10, v63);
      CG_SnapshotMP_ShutdownEntity((LocalClientNum_t)v10, v68);
    }
LABEL_140:
    Sys_ProfEndNamedEvent();
    goto LABEL_141;
  }
  if ( mapRestart || _R15->ps.stats[3] != v172->ps.stats[3] || (_DWORD)clientNum != v172->ps.clientNum )
  {
    Sys_ProfBeginNamedEvent(0xFFFF69B4, "SetNextSnap-Spawn");
    memcpy_0(v47, &_R15->ps, sizeof(playerState_s));
    CG_CustomizationMP_ResetCustomizationLatchForClient((const LocalClientNum_t)v10, _R15->ps.clientNum);
    CG_PlayerStateMP_Respawn((LocalClientNum_t)v10, mapRestart == 0, 1);
    Sys_ProfEndNamedEvent();
  }
LABEL_141:
  System = CgPredictedEntitySystem::GetSystem((const LocalClientNum_t)v10);
  v176 = System;
  if ( !System && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 3939, ASSERT_TYPE_ASSERT, "(predictedEntitySystem)", (const char *)&queryFormat, "predictedEntitySystem") )
    __debugbreak();
  CgPredictedEntitySystem::PostSnapshotInit(System);
  v70 = (__int64)v169;
  v169->scriptedAnimDebug.entCount = 0;
  Sys_ProfBeginNamedEvent(0xFFFF8C00, "SetNextSnap-ValidEnts");
  v71 = 0;
  mapRestart = 0;
  v72 = 0;
  v168 = 0;
  if ( _R15->numEntities > 0 )
  {
    p_number = &_R15->entities[0].number;
    p_ps = (BgWeaponMap *)_R15->entities;
    while ( p_number[4] == 2 )
    {
      if ( v71 >= 8 )
      {
        LODWORD(v160) = 8;
        LODWORD(vehicleSystem) = v71;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 3955, ASSERT_TYPE_ASSERT, "(unsigned)( nextSnapCorpseEntsCount ) < (unsigned)( 8 )", "nextSnapCorpseEntsCount doesn't index MAX_CLIENT_CORPSES_MP\n\t%i not in [0, %i)", vehicleSystem, v160) )
          __debugbreak();
        v72 = v168;
      }
      nextSnapCorpseEnts[v71++] = (entityState_t *)p_ps;
      mapRestart = v71;
LABEL_244:
      v168 = ++v72;
      p_number = (__int16 *)&p_ps[15].m_entries;
      p_ps = (BgWeaponMap *)((char *)p_ps + 248);
      if ( v72 >= _R15->numEntities )
        goto LABEL_245;
    }
    v91 = *p_number;
    v92 = CgEntitySystem::GetEntitySystem((const LocalClientNum_t)v10);
    if ( (unsigned int)v91 >= 0x800 )
    {
      LODWORD(v160) = 2048;
      LODWORD(vehicleSystem) = v91;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", vehicleSystem, v160) )
        __debugbreak();
    }
    _R14 = (__int64)&v92->m_entities[v91];
    _RDX = p_ps;
    __asm
    {
      vmovups xmm0, xmmword ptr [rdx]
      vmovups xmmword ptr [r14+190h], xmm0
      vmovups xmm1, xmmword ptr [rdx+10h]
      vmovups xmmword ptr [r14+1A0h], xmm1
      vmovups xmm0, xmmword ptr [rdx+20h]
      vmovups xmmword ptr [r14+1B0h], xmm0
      vmovups xmm1, xmmword ptr [rdx+30h]
      vmovups xmmword ptr [r14+1C0h], xmm1
      vmovups xmm0, xmmword ptr [rdx+40h]
      vmovups xmmword ptr [r14+1D0h], xmm0
      vmovups xmm1, xmmword ptr [rdx+50h]
      vmovups xmmword ptr [r14+1E0h], xmm1
      vmovups xmm0, xmmword ptr [rdx+60h]
      vmovups xmmword ptr [r14+1F0h], xmm0
      vmovups xmm1, xmmword ptr [rdx+70h]
      vmovups xmmword ptr [r14+200h], xmm1
      vmovups xmm0, xmmword ptr [rdx+80h]
      vmovups xmmword ptr [r14+210h], xmm0
      vmovups xmm1, xmmword ptr [rdx+90h]
      vmovups xmmword ptr [r14+220h], xmm1
      vmovups xmm0, xmmword ptr [rdx+0A0h]
      vmovups xmmword ptr [r14+230h], xmm0
      vmovups xmm1, xmmword ptr [rdx+0B0h]
      vmovups xmmword ptr [r14+240h], xmm1
      vmovups xmm0, xmmword ptr [rdx+0C0h]
      vmovups xmmword ptr [r14+250h], xmm0
      vmovups xmm1, xmmword ptr [rdx+0D0h]
      vmovups xmmword ptr [r14+260h], xmm1
      vmovups xmm0, xmmword ptr [rdx+0E0h]
      vmovups xmmword ptr [r14+270h], xmm0
    }
    *(_QWORD *)(_R14 + 640) = _RDX[15].__vftable;
    if ( (v92->m_entities[v91].flags & 1) != 0 )
    {
      LODWORD(v165) = _R15->ps.pm_flags.m_flags[1];
      LODWORD(v164) = _R15->ps.pm_flags.m_flags[0];
      LODWORD(v163) = _R15->ps.clientNum;
      LODWORD(v162) = _R15->numEntities;
      LODWORD(v161) = v168;
      LODWORD(v160) = v91;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 3963, ASSERT_TYPE_ASSERT, "(!CENextValid( cent ))", "%s\n\tentnum %d num %d numEntities %d clientNum %d flags 0x%x 0x%x", "!CENextValid( cent )", v160, v161, v162, v163, v164, v165) )
        __debugbreak();
    }
    v92->m_entities[v91].flags |= 1u;
    LODWORD(p_otherFlags) = 0;
    v110 = 0x80000000 >> (v91 & 0x1F);
    v111 = v91 >> 5;
    v177 = v91 >> 5;
    v112 = v179[v91 >> 5] & v110;
    if ( (unsigned int)CG_SnapshotMP_EntityNeedsReset((const LocalClientNum_t)v10, v112 != 0, (const centity_t *)_R14, (int *)&p_otherFlags) )
    {
      CG_SnapshotMP_ResetEntity_Internal((LocalClientNum_t)v10, (centity_t *)_R14, (int)p_otherFlags, 0);
      goto LABEL_234;
    }
    if ( GameModeFlagValues::ms_mpValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 190, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a MP-only context", "IsFlagActive( index )") )
      __debugbreak();
    if ( !GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&_R15->ps.otherFlags, ACTIVE, 0x21u) )
    {
      v113 = _R15->ps.vehicleState.entity;
      if ( v113 != 2047 && *(__int16 *)(_R14 + 400) == (unsigned __int16)v113 )
      {
        if ( !CgVehicleSystem::PhysicsIsClientForcingServerAuth((LocalClientNum_t)v10, (const centity_t *)_R14) )
        {
          v114 = !CgVehicleSystem::PhysicsIsValidVehicle((LocalClientNum_t)v10, (const centity_t *)_R14);
          v115 = CgVehicleSystem::GetVehicleSystem((const LocalClientNum_t)v10);
          Instance = CgWeaponMap::GetInstance((const LocalClientNum_t)v10);
          v117 = CgHandler::getHandler((LocalClientNum_t)v10);
          BG_PlayerStateToVehicleState(&_R15->ps, (entityState_t *)(_R14 + 400), v114, v117, Instance, v115);
          v111 = v177;
        }
        goto LABEL_234;
      }
    }
    v118 = CG_SnapshotMP_EntityNeedsLODChange((const LocalClientNum_t)v10, v112 != 0, 0, (const centity_t *const)_R14);
    if ( v118 == 1 )
    {
      *(_WORD *)(_R14 + 672) = *(_WORD *)(_R14 + 552);
      if ( *(_WORD *)(_R14 + 408) == 4 )
      {
        __asm
        {
          vmovups ymm0, ymmword ptr [r14+1A0h]
          vmovups ymmword ptr [r14+124h], ymm0
        }
        *(_DWORD *)(_R14 + 324) = *(_DWORD *)(_R14 + 448);
        __asm
        {
          vmovups ymm0, ymmword ptr [r14+1C4h]
          vmovups ymmword ptr [r14+148h], ymm0
        }
        *(_DWORD *)(_R14 + 360) = *(_DWORD *)(_R14 + 484);
      }
    }
    else if ( !v118 )
    {
LABEL_234:
      v179[v111] &= ~v110;
      CgPredictedEntitySystem::EvalSnapshotEnt(v176, (centity_t *)_R14);
      CG_Train_EvalSnapshotEnt((const LocalClientNum_t)v10, (const centity_t *)_R14, _R15->serverTime);
      v122 = DVARBOOL_cg_dumpScriptedAnims;
      if ( !DVARBOOL_cg_dumpScriptedAnims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_dumpScriptedAnims") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v122);
      v70 = (__int64)v169;
      if ( v122->current.enabled && (entCount = v169->scriptedAnimDebug.entCount, (int)entCount < 10) )
      {
        v71 = mapRestart;
        if ( *(_WORD *)(_R14 + 408) == 6 && (*(_DWORD *)(_R14 + 496) & 0x40) != 0 )
        {
          v169->scriptedAnimDebug.entityNums[entCount] = *(__int16 *)(_R14 + 400);
          ++*(_DWORD *)(v70 + 491512);
        }
      }
      else
      {
        v71 = mapRestart;
      }
      v72 = v168;
      goto LABEL_244;
    }
    if ( BG_IsVehicleEntity((const entityState_t *)(_R14 + 400)) )
    {
      v121 = GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal((GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32> *)(_R14 + 412), ACTIVE, 1u);
      if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal((GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32> *)(_R14 + 288), ACTIVE, 1u) != v121 )
      {
        CG_EntityMP_GetDObj_General((const LocalClientNum_t)v10, (const centity_t *)_R14, &createdNew_optionalOut);
        if ( !createdNew_optionalOut )
        {
          CG_Entity_DestroyPhysics((const LocalClientNum_t)v10, *(__int16 *)(_R14 + 400));
          if ( CG_PhysicsObject_GetInstance((Physics_WorldId)(3 * v10 + 2), *(__int16 *)(_R14 + 400), (LocalClientNum_t)v10) != -1 )
          {
            LODWORD(v162) = -1;
            LODWORD(v161) = CG_PhysicsObject_GetInstance((Physics_WorldId)(3 * v10 + 2), *(__int16 *)(_R14 + 400), (LocalClientNum_t)v10);
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 3475, ASSERT_TYPE_ASSERT, "( CG_PhysicsObject_GetInstance( Physics_GetClientPredictiveWorldId( localClientNum ), cent->nextState.number, localClientNum ) ) == ( 0xFFFFFFFF )", "%s == %s\n\t%i, %i", "CG_PhysicsObject_GetInstance( Physics_GetClientPredictiveWorldId( localClientNum ), cent->nextState.number, localClientNum )", "PHYSICSINSTANCEID_INVALID", v161, v162) )
              __debugbreak();
          }
          if ( CG_Entity_ShouldCreatePhysicsOnInit((LocalClientNum_t)v10, *(__int16 *)(_R14 + 400)) )
            CG_Entity_CreatePhysics((LocalClientNum_t)v10, *(__int16 *)(_R14 + 400), 1);
        }
        if ( ((*(_WORD *)(_R14 + 408) - 12) & 0xFFFD) != 0 )
        {
          LODWORD(vehicleSystem) = *(__int16 *)(_R14 + 408);
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 3490, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unhandled entity type in CG_SnapshotMP_ResetEntityPhysics %i", vehicleSystem) )
            __debugbreak();
        }
        else
        {
          CG_Vehicle_ResetEntityPhysics((LocalClientNum_t)v10, (centity_t *)_R14);
        }
      }
    }
    goto LABEL_234;
  }
LABEL_245:
  Sys_ProfEndNamedEvent();
  Sys_ProfBeginNamedEvent(0xFF556B2F, "SetNextSnap-PlayerCorpses");
  CG_PlayerCorpseMP_SetNextSnap((const LocalClientNum_t)v10, 0, (const entityState_t *const *)nextSnapCorpseEnts, v71);
  Sys_ProfEndNamedEvent();
  Sys_ProfBeginNamedEvent(0xFF8B4513, "SetNextSnap-RemoveEnts");
  v124 = 0;
  v125 = v172;
  if ( v172->numEntities > 0 )
  {
    entities = v172->entities;
    do
    {
      if ( entities->eType != ET_PLAYER_CORPSE )
      {
        number = entities->number;
        v128 = entities->number;
        if ( ((0x80000000 >> (entities->number & 0x1F)) & v179[v128 >> 5]) != 0 )
        {
          v129 = CgEntitySystem::GetEntitySystem((const LocalClientNum_t)v10);
          if ( number >= 0x800 )
          {
            LODWORD(v160) = 2048;
            LODWORD(vehicleSystem) = number;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", vehicleSystem, v160) )
              __debugbreak();
          }
          v130 = (__int64)&v129->m_entities[v128];
          if ( (*(_BYTE *)(v130 + 648) & 1) != 0 )
          {
            v131 = v130 + 400;
            if ( !v131 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 1921, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
              __debugbreak();
            v132 = *(_WORD *)(v131 + 8);
            if ( (((v132 - 1) & 0xFFED) != 0 || v132 == 3) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 4057, ASSERT_TYPE_ASSERT, "(BG_IsCharacterEntity( &cent->nextState ))", (const char *)&queryFormat, "BG_IsCharacterEntity( &cent->nextState )") )
              __debugbreak();
          }
          else
          {
            FX_Dismemberment_Clear((LocalClientNum_t)v10, number);
            R_UnlinkEntityFromCells(v10, number);
            R_EntityMoved((LocalClientNum_t)v10, number);
            FX_MarkEntDetachAll((LocalClientNum_t)v10, number);
            CG_SnapshotMP_ShutdownEntity((LocalClientNum_t)v10, (centity_t *)v130);
          }
        }
      }
      ++v124;
      ++entities;
    }
    while ( v124 < v125->numEntities );
    _R15 = v173;
    v70 = (__int64)v169;
  }
  Sys_ProfEndNamedEvent();
  Sys_ProfBeginNamedEvent(0xFFBDB76B, "SetNextSnap-Clients");
  v133 = 0;
  if ( _R15->numClients > 0 )
  {
    clients = _R15->clients;
    do
    {
      clientIndex = clients->clientIndex;
      v136 = CgEntitySystem::GetEntitySystem((const LocalClientNum_t)v10);
      if ( (unsigned int)clientIndex >= 0x800 )
      {
        LODWORD(v160) = 2048;
        LODWORD(vehicleSystem) = clientIndex;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", vehicleSystem, v160) )
          __debugbreak();
      }
      CGMovingPlatforms::CacheClientLocalOffset((LocalClientNum_t)v10, &v136->m_entities[clientIndex], &_R15->clients[v133++]);
      ++clients;
    }
    while ( v133 < _R15->numClients );
    v125 = v172;
  }
  Sys_ProfEndNamedEvent();
  Sys_ProfBeginNamedEvent(0xFF8B0000, "SetNextSnap-Items");
  v137 = nextSnap;
  CG_PredictMP_BuildItemList((LocalClientNum_t)v10, nextSnap);
  Sys_ProfEndNamedEvent();
  Sys_ProfBeginNamedEvent(0xFFFF7F50, "SetNextSnap-Glass");
  CG_Glass_ApplyChanges((LocalClientNum_t)v10);
  Sys_ProfEndNamedEvent();
  CG_SnapshotMP_TransitionKillcam((LocalClientNum_t)v10);
  SND_ReleasePhysicsQueryBlock();
  CG_PlayersMP_UpdatePerSnapshotCullingPriorities((const LocalClientNum_t)v10, v137);
  CG_VehicleMP_UpdateCullingPriorities((const LocalClientNum_t)v10, v137);
  if ( (_BYTE)CgEntitySystem::ms_allocatedType != HALF_HALF )
  {
    LODWORD(v162) = (unsigned __int8)CgEntitySystem::ms_allocatedType;
    LODWORD(v161) = 2;
    LODWORD(v160) = v10;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 299, ASSERT_TYPE_ASSERT, "(ms_allocatedType == SubSystem::ENTITY_SYSTEM_TYPE)", "%s\n\tTrying to access the entity system for localClientNum %d but the entity system type does not match-> System Type:%d  Allocated Type:%d\n", "ms_allocatedType == SubSystem::ENTITY_SYSTEM_TYPE", v160, v161, v162) )
      __debugbreak();
  }
  if ( (unsigned int)v10 >= CgEntitySystem::ms_allocatedCount )
  {
    LODWORD(v160) = CgEntitySystem::ms_allocatedCount;
    LODWORD(vehicleSystem) = v10;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 300, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", vehicleSystem, v160) )
      __debugbreak();
  }
  if ( !CgEntitySystem::ms_entitySystemArray[v10] )
  {
    LODWORD(v160) = v10;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 301, ASSERT_TYPE_ASSERT, "(ms_entitySystemArray[localClientNum])", "%s\n\tTrying to access unallocated entity system for localClientNum %d\n", "ms_entitySystemArray[localClientNum]", v160) )
      __debugbreak();
  }
  CgEntitySystem::BuildEntityWorkers(CgEntitySystem::ms_entitySystemArray[v10], v137->serverTime);
  CG_Train_SnapshotFinishSetNextSnap((const LocalClientNum_t)v10, _R15->serverTime);
  if ( *(_BYTE *)(v70 + 807613) )
    CG_TransitionCinematicCamera((LocalClientNum_t)v10);
  Sys_ProfBeginNamedEvent(0xFFD2B48C, "SetNextSnap-LUI");
  LUIBinding::SnapshotUpdate((LocalClientNum_t)v10);
  Sys_ProfEndNamedEvent();
  if ( (v125->ps.pm_type == 5) == (v137->ps.pm_type == 5) && v125->ps.clientNum == v137->ps.clientNum && v125->ps.stats[3] == v137->ps.stats[3] )
    CG_Blur_Transition((LocalClientNum_t)v10);
  else
    CG_Blur_SnapToTargetValue((LocalClientNum_t)v10);
  if ( (*(_BYTE *)(*(_QWORD *)(v70 + 26064) + 8i64) & 8) != 0 && (*(_BYTE *)(*(_QWORD *)(v70 + 26072) + 8i64) & 8) == 0 )
    CG_MainMP_RewindKillcamEffects((LocalClientNum_t)v10, 1);
  *(_DWORD *)(v70 + 512764) = 0;
  v138 = 0;
  v139 = LocalClientStatics;
  if ( cls.maxClients > 0 )
  {
    v140 = 0i64;
    do
    {
      LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)v139->m_localClientNum);
      if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static_inline.h", 25, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
        __debugbreak();
      if ( LocalClientGlobals->IsMP(LocalClientGlobals) )
      {
        if ( v138 >= LocalClientGlobals[1].predictedPlayerState.rxvOmnvars[64].timeModified )
        {
          LODWORD(v160) = LocalClientGlobals[1].predictedPlayerState.rxvOmnvars[64].timeModified;
          LODWORD(vehicleSystem) = v138;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_globals_mp_inline.h", 12, ASSERT_TYPE_ASSERT, "(unsigned)( characterIndex ) < (unsigned)( static_cast<int>( m_characterInfoCount ) )", "characterIndex doesn't index static_cast<int>( m_characterInfoCount )\n\t%i not in [0, %i)", vehicleSystem, v160) )
            __debugbreak();
        }
        v142 = (characterInfo_t *)(*(_QWORD *)&LocalClientGlobals[1].predictedPlayerState.rxvOmnvars[62] + 14792i64 * v138);
      }
      else
      {
        v142 = CgGlobalsSP::GetCharacterInfo((CgGlobalsSP *)LocalClientGlobals, v138);
      }
      if ( !v142 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 4143, ASSERT_TYPE_ASSERT, "(characterInfo)", (const char *)&queryFormat, "characterInfo") )
        __debugbreak();
      if ( !v142->infoValid )
      {
        if ( (unsigned int)v138 > 0x9E4 )
        {
          LODWORD(v160) = v138;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 55, ASSERT_TYPE_ASSERT, "( ( handle >= 0 && handle < ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) ) )", "%s\n\t( handle ) = %i", "( handle >= 0 && handle < ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) )", v160) )
            __debugbreak();
        }
        if ( (unsigned int)v10 >= 2 )
        {
          LODWORD(v160) = 2;
          LODWORD(vehicleSystem) = v10;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 58, ASSERT_TYPE_ASSERT, "(unsigned)( localClientIndex ) < (unsigned)( (2) )", "localClientIndex doesn't index MAX_DOBJ_CLIENTS\n\t%i not in [0, %i)", vehicleSystem, v160) )
            __debugbreak();
        }
        if ( (unsigned int)(v138 + 2533 * v10) >= 0x13CA )
        {
          LODWORD(v160) = v138 + 2533 * v10;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 62, ASSERT_TYPE_ASSERT, "( ( (unsigned)handle < ( sizeof( *array_counter( clientObjMap ) ) + 0 ) ) )", "%s\n\t( handle ) = %i", "( (unsigned)handle < ( sizeof( *array_counter( clientObjMap ) ) + 0 ) )", v160) )
            __debugbreak();
        }
        v143 = clientObjMap[2533 * v10 + v140];
        if ( clientObjMap[2533 * v10 + v140] )
        {
          if ( v143 >= (unsigned int)s_objCount )
          {
            LODWORD(v160) = clientObjMap[2533 * v10 + v140];
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 64, ASSERT_TYPE_ASSERT, "( ( !objIndex || ( (unsigned)objIndex < s_objCount ) ) )", "%s\n\t( objIndex ) = %i", "( !objIndex || ( (unsigned)objIndex < s_objCount ) )", v160) )
              __debugbreak();
          }
          if ( s_objBuf[v143] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 4147, ASSERT_TYPE_ASSERT, "(!Com_GetClientDObj( i, localClientNum ))", (const char *)&queryFormat, "!Com_GetClientDObj( i, localClientNum )") )
            __debugbreak();
        }
      }
      ++v138;
      ++v140;
    }
    while ( v138 < cls.maxClients );
    v70 = (__int64)v169;
    v137 = nextSnap;
  }
  if ( cls.maxAgents > 0 )
  {
    v144 = 0;
    do
    {
      if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 116, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
        __debugbreak();
      if ( v144 >= ComCharacterLimits::ms_gameData.m_agentCount )
      {
        if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 116, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
          __debugbreak();
        LODWORD(v160) = ComCharacterLimits::ms_gameData.m_agentCount;
        LODWORD(vehicleSystem) = v144;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 186, ASSERT_TYPE_ASSERT, "(unsigned)( agentIndex ) < (unsigned)( ComCharacterLimits::GetAgentMaxCount() )", "agentIndex doesn't index ComCharacterLimits::GetAgentMaxCount()\n\t%i not in [0, %i)", vehicleSystem, v160) )
          __debugbreak();
      }
      if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 168, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
        __debugbreak();
      v145 = v144 + ComCharacterLimits::ms_gameData.m_clientCount;
      v146 = CG_GetLocalClientGlobals((const LocalClientNum_t)v139->m_localClientNum);
      if ( !v146 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static_inline.h", 25, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
        __debugbreak();
      if ( v146->IsMP(v146) )
      {
        if ( v145 >= v146[1].predictedPlayerState.rxvOmnvars[64].timeModified )
        {
          LODWORD(v160) = v146[1].predictedPlayerState.rxvOmnvars[64].timeModified;
          LODWORD(vehicleSystem) = v145;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_globals_mp_inline.h", 12, ASSERT_TYPE_ASSERT, "(unsigned)( characterIndex ) < (unsigned)( static_cast<int>( m_characterInfoCount ) )", "characterIndex doesn't index static_cast<int>( m_characterInfoCount )\n\t%i not in [0, %i)", vehicleSystem, v160) )
            __debugbreak();
        }
        v147 = (characterInfo_t *)(*(_QWORD *)&v146[1].predictedPlayerState.rxvOmnvars[62] + 14792i64 * (int)v145);
      }
      else
      {
        v147 = CgGlobalsSP::GetCharacterInfo((CgGlobalsSP *)v146, v145);
      }
      if ( !v147 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 4154, ASSERT_TYPE_ASSERT, "(characterInfo)", (const char *)&queryFormat, "characterInfo") )
        __debugbreak();
      if ( !v147->infoValid )
      {
        if ( v145 > 0x9E4 )
        {
          LODWORD(v160) = v145;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 55, ASSERT_TYPE_ASSERT, "( ( handle >= 0 && handle < ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) ) )", "%s\n\t( handle ) = %i", "( handle >= 0 && handle < ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) )", v160) )
            __debugbreak();
        }
        if ( (unsigned int)v10 >= 2 )
        {
          LODWORD(v160) = 2;
          LODWORD(vehicleSystem) = v10;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 58, ASSERT_TYPE_ASSERT, "(unsigned)( localClientIndex ) < (unsigned)( (2) )", "localClientIndex doesn't index MAX_DOBJ_CLIENTS\n\t%i not in [0, %i)", vehicleSystem, v160) )
            __debugbreak();
        }
        v148 = v145 + 2533 * v10;
        if ( v148 >= 0x13CA )
        {
          LODWORD(v160) = v145 + 2533 * v10;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 62, ASSERT_TYPE_ASSERT, "( ( (unsigned)handle < ( sizeof( *array_counter( clientObjMap ) ) + 0 ) ) )", "%s\n\t( handle ) = %i", "( (unsigned)handle < ( sizeof( *array_counter( clientObjMap ) ) + 0 ) )", v160) )
            __debugbreak();
        }
        v149 = clientObjMap[v148];
        if ( v149 )
        {
          if ( v149 >= (unsigned int)s_objCount )
          {
            LODWORD(v160) = v149;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 64, ASSERT_TYPE_ASSERT, "( ( !objIndex || ( (unsigned)objIndex < s_objCount ) ) )", "%s\n\t( objIndex ) = %i", "( !objIndex || ( (unsigned)objIndex < s_objCount ) )", v160) )
              __debugbreak();
          }
          if ( s_objBuf[v149] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 4158, ASSERT_TYPE_ASSERT, "(!Com_GetClientDObj( entityIndex, localClientNum ))", (const char *)&queryFormat, "!Com_GetClientDObj( entityIndex, localClientNum )") )
            __debugbreak();
        }
      }
      ++v144;
    }
    while ( (int)v144 < cls.maxAgents );
    v70 = (__int64)v169;
    v137 = nextSnap;
  }
  if ( !*(_DWORD *)(v70 + 741592) )
  {
    if ( GameModeFlagValues::ms_mpValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 190, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a MP-only context", "IsFlagActive( index )") )
      __debugbreak();
    if ( GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&v137->ps.otherFlags, ACTIVE, 0x22u) )
      goto LABEL_376;
    if ( GameModeFlagValues::ms_mpValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 190, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a MP-only context", "IsFlagActive( index )") )
      __debugbreak();
    if ( GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&v137->ps.otherFlags, ACTIVE, 0x21u) )
    {
LABEL_376:
      v150 = CgStatic::GetCharacterInfo(v139, v137->ps.clientNum);
      if ( !v150 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 4166, ASSERT_TYPE_ASSERT, "(playerCI)", (const char *)&queryFormat, "playerCI") )
        __debugbreak();
      MLGSpectator = CgMLGSpectator::GetMLGSpectator((const LocalClientNum_t)v10);
      CgMLGSpectator::SetTeam(MLGSpectator, (const team_t)v150->team);
    }
  }
  ScriptableCl_ProcessErrors();
LABEL_381:
  Sys_ProfEndNamedEvent();
  _R11 = &v181;
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
CG_SnapshotMP_ShutdownEntity
==============
*/
void CG_SnapshotMP_ShutdownEntity(LocalClientNum_t localClientNum, centity_t *cent)
{
  __int64 number; 
  CgEntitySystem *EntitySystem; 
  CgGlobalsMP *LocalClientGlobals; 
  CgPredictedEntitySystem *System; 
  unsigned __int8 eType; 
  unsigned int torsoPitchPacked; 
  ParticleSystemHandle particleSystem; 
  trajectory_t_secure *p_pos; 
  unsigned __int8 v12; 
  CgVehicleSystem *VehicleSystem; 
  __int64 v14; 
  __int64 v15; 

  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 288, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  number = cent->nextState.number;
  EntitySystem = CgEntitySystem::GetEntitySystem(localClientNum);
  if ( (unsigned int)number >= 0x800 )
  {
    LODWORD(v14) = number;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", v14, 2048) )
      __debugbreak();
  }
  if ( cent != &EntitySystem->m_entities[number] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 289, ASSERT_TYPE_ASSERT, "(cent == CG_GetEntity( localClientNum, cent->nextState.number ))", (const char *)&queryFormat, "cent == CG_GetEntity( localClientNum, cent->nextState.number )") )
    __debugbreak();
  LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals(localClientNum);
  System = CgPredictedEntitySystem::GetSystem(localClientNum);
  if ( !System && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 298, ASSERT_TYPE_ASSERT, "(predictedEntitySystem)", (const char *)&queryFormat, "predictedEntitySystem") )
    __debugbreak();
  CgPredictedEntitySystem::DisassociateFromPredictedEntity(System, cent);
  CG_Snapshot_ShutdownEntityCommon(localClientNum, cent);
  eType = cent->pose.eType;
  if ( cent->pose.eType == 2 )
  {
    CG_PlayerCorpseMP_ShutdownEntity(localClientNum, cent);
    goto LABEL_28;
  }
  if ( eType == 6 )
  {
    CG_AnimTreeMP_FreeScriptModelAnim(localClientNum, cent->nextState.number);
    if ( cent->nextState.un.scriptMoverType != 9 )
      goto LABEL_28;
    LocalClientGlobals->m_brCircleEnt = NULL;
LABEL_25:
    particleSystem = cent->pose.fx.particleSystem;
    if ( particleSystem )
    {
      CG_DoneWithEffect(localClientNum, particleSystem);
      cent->pose.coverWall.coverGrid[1] = 0;
    }
    goto LABEL_28;
  }
  if ( eType != 7 )
  {
    if ( (unsigned __int8)(eType - 8) > 1u )
      goto LABEL_28;
    goto LABEL_25;
  }
  if ( (unsigned int)(cent->prevState.u.anonymous.data[0] - 1) <= 1 )
  {
    torsoPitchPacked = cent->prevState.u.player.torsoPitchPacked;
    if ( torsoPitchPacked >= 0x4000 )
    {
      LODWORD(v15) = 0x4000;
      LODWORD(v14) = cent->prevState.u.player.torsoPitchPacked;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 332, ASSERT_TYPE_ASSERT, "(unsigned)( triggerIndex ) < (unsigned)( (16*1024) )", "triggerIndex doesn't index MAX_CLIENT_TRIGGERS\n\t%i not in [0, %i)", v14, v15) )
        __debugbreak();
    }
    CG_ResetAudioTrigger(torsoPitchPacked);
  }
LABEL_28:
  CG_LocalEntity_FreeOwnerEntity(localClientNum, cent->nextState.number);
  p_pos = &cent->prevState.pos;
  if ( CG_Pose_IsRagdoll(&cent->pose) )
    goto LABEL_33;
  if ( cent == (centity_t *)-292i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared.h", 2263, ASSERT_TYPE_ASSERT, "(trajectory)", (const char *)&queryFormat, "trajectory") )
    __debugbreak();
  if ( (unsigned int)(p_pos->trType - 23) <= 5 )
  {
LABEL_33:
    CG_SnapshotMP_ReleaseEntityRagdolls(cent, localClientNum);
    p_pos->trType = TR_STATIONARY;
    cent->prevState.apos.trType = TR_STATIONARY;
  }
  CG_SndKillAutoSimEnt(cent, 1);
  CG_Entity_DestroyPhysics(localClientNum, cent->nextState.number);
  CG_Entity_DestroyCloth(localClientNum, cent->nextState.number);
  if ( ScriptableCl_IsReservedScriptableEntity(localClientNum, cent->nextState.number) )
    ScriptableCl_UnbindEntityReservedDef(localClientNum, cent->nextState.number);
  if ( p_pos->trType == TR_PHYSICS_CLIENT_AUTH )
  {
    p_pos->trType = TR_STATIONARY;
    cent->prevState.apos.trType = TR_STATIONARY;
  }
  v12 = cent->pose.eType;
  if ( ((cent->pose.eType - 12) & 0xFD) != 0 )
  {
    if ( v12 == 24 )
    {
      CG_ClientCharacter_ShutdownEntity(localClientNum, cent);
    }
    else if ( v12 == 27 )
    {
      CG_CoverWall_ShutdownEntity(localClientNum, cent);
    }
  }
  else
  {
    VehicleSystem = CgVehicleSystem::GetVehicleSystem(localClientNum);
    CgVehicleSystem::DeleteVehicle(VehicleSystem, cent->nextState.number);
  }
  CG_TrackerPerk_OnEntityShutdown(localClientNum, cent);
  cent->pose.eType = 0;
  *(_QWORD *)&cent->clientSoundState.playedBeamFireSound = 0i64;
  cent->clientSoundState.stopFireSoundAlias.name = NULL;
}

/*
==============
CG_SnapshotMP_TransferDObjMarksToScriptMover
==============
*/
void CG_SnapshotMP_TransferDObjMarksToScriptMover(LocalClientNum_t localClientNum, int entnumFrom, int entnumTo)
{
  DObj *ClientDObj; 
  centity_t *Entity; 
  const XModel *XModelFromIndex; 

  ClientDObj = Com_GetClientDObj(entnumFrom, localClientNum);
  if ( ClientDObj )
  {
    Entity = CG_GetEntity(localClientNum, entnumTo);
    if ( Entity->nextState.eType != ET_SCRIPTMOVER && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 411, ASSERT_TYPE_ASSERT, "(centTo->nextState.eType == ET_SCRIPTMOVER)", (const char *)&queryFormat, "centTo->nextState.eType == ET_SCRIPTMOVER") )
      __debugbreak();
    if ( Entity->nextState.un.scriptMoverType == 3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 412, ASSERT_TYPE_ASSERT, "(centTo->nextState.un.scriptMoverType != ScriptMoverType_ReflectionProbe)", "%s\n\tScriptable reflection probes are not supported", "centTo->nextState.un.scriptMoverType != ScriptMoverType_ReflectionProbe") )
      __debugbreak();
    if ( Entity->nextState.un.scriptMoverType == 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 413, ASSERT_TYPE_ASSERT, "(centTo->nextState.un.scriptMoverType != ScriptMoverType_ServerArms)", "%s\n\tScriptable server arms are not supported", "centTo->nextState.un.scriptMoverType != ScriptMoverType_ServerArms") )
      __debugbreak();
    if ( Entity->nextState.un.scriptMoverType == 5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 414, ASSERT_TYPE_ASSERT, "(centTo->nextState.un.scriptMoverType != ScriptMoverType_ClientWeapon)", "%s\n\tScriptable client weapons are not supported", "centTo->nextState.un.scriptMoverType != ScriptMoverType_ClientWeapon") )
      __debugbreak();
    if ( Entity->nextState.un.scriptMoverType == 6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 415, ASSERT_TYPE_ASSERT, "(centTo->nextState.un.scriptMoverType != ScriptMoverType_ServerWeapon)", "%s\n\tScriptable server weapons are not supported", "centTo->nextState.un.scriptMoverType != ScriptMoverType_ServerWeapon") )
      __debugbreak();
    if ( Entity->nextState.un.scriptMoverType == 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 416, ASSERT_TYPE_ASSERT, "(centTo->nextState.un.scriptMoverType != ScriptMoverType_Avatar)", "%s\n\tScript avatars are not supported", "centTo->nextState.un.scriptMoverType != ScriptMoverType_Avatar") )
      __debugbreak();
    if ( Entity->nextState.un.scriptMoverType == 9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 417, ASSERT_TYPE_ASSERT, "(centTo->nextState.un.scriptMoverType != ScriptMoverType_BrCircle)", "%s\n\tBR Circles are not supported", "centTo->nextState.un.scriptMoverType != ScriptMoverType_BrCircle") )
      __debugbreak();
    if ( Entity->nextState.un.scriptMoverType == 10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 418, ASSERT_TYPE_ASSERT, "(centTo->nextState.un.scriptMoverType != ScriptMoverType_MapCircle)", "%s\n\tMap Circles are not supported", "centTo->nextState.un.scriptMoverType != ScriptMoverType_MapCircle") )
      __debugbreak();
    if ( Entity->nextState.staticState.player.stowedWeaponHandle.m_mapEntryId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 419, ASSERT_TYPE_ASSERT, "(centTo->nextState.staticState.mover.u.scriptableIndex == 0)", "%s\n\tScriptable movers are not supported", "centTo->nextState.staticState.mover.u.scriptableIndex == 0") )
      __debugbreak();
    XModelFromIndex = CG_EntityMP_GetXModelFromIndex(localClientNum, Entity->nextState.lerp.u.primaryLight.packedColorB_Fov);
    if ( XModelFromIndex )
      FX_TransferDObjMarksFromEntToEnt(localClientNum, entnumFrom, ClientDObj, entnumTo, XModelFromIndex);
    else
      Com_PrintWarning(14, "CG_TransferDObjMarksToScriptMover(): couldn't transfer from ent #%i to script_mover ent #%i.  The script mover has null xmodel.\n", (unsigned int)entnumFrom, (unsigned int)entnumTo);
  }
  else
  {
    Com_PrintWarning(14, "CG_TransferDObjMarksToScriptMover(): couldn't transfer from ent #%i.  No dobj was available.\n", (unsigned int)entnumFrom);
  }
}

/*
==============
CG_SnapshotMP_TransitionKillcam
==============
*/

void __fastcall CG_SnapshotMP_TransitionKillcam(LocalClientNum_t localClientNum, double _XMM1_8, double _XMM2_8)
{
  __int64 v5; 
  __int64 v7; 
  int inKillCam; 
  const snapshot_t *nextSnap; 
  cg_t *v10; 
  __int64 v11; 
  FxCombinedDef v15; 
  int v16; 
  CgStatic *LocalClientStatics; 
  __int64 v18; 
  unsigned int v19; 
  __int64 v20; 
  cgs_t *LocalClientStaticGlobals; 
  signed int v23; 
  __int64 v24; 
  __int16 *v25; 
  __int64 v26; 
  CgEntitySystem *EntitySystem; 
  __int64 v28; 
  __int16 v29; 
  unsigned int v30; 
  __int64 v31; 
  XAnimTree *pXAnimTree; 
  scr_string_t AnimsetNameByIndex; 
  unsigned int v34; 
  unsigned int v35; 
  XAnim_s *anims; 
  const scrContext_t *v37; 
  XAnim_s *v38; 
  int XAnimIndex; 
  unsigned int m_characterCount; 
  int *p_animationNumber; 
  unsigned int i; 
  CgEntitySystem *v43; 
  centity_t *v44; 
  XAnimTree *v45; 
  unsigned int v46; 
  const XAnim_s *v47; 
  const XAnim_s *v48; 
  int v50; 
  int v51; 
  centity_t *Entity; 
  centity_t *v53; 
  CgVehicleSystem *VehicleSystem; 
  const VehicleClient *Client; 
  const VehicleDef *ClientDef; 
  bool inAltWeaponMode; 
  CgWeaponMap *Instance; 
  const Weapon *WeaponForEntity; 
  __int64 v60; 
  WeaponDef *v61; 
  guidedMissileType_t guidedMissileType; 
  weapType_t WeaponType; 
  int v64; 
  WeapStickinessType v65; 
  centity_t *LinkToParent; 
  entityState_t *p_nextState; 
  unsigned int eType; 
  int v69; 
  bool v70; 
  int eventParm; 
  int v76; 
  const snapshot_t *v77; 
  const dvar_t *v78; 
  const char *v79; 
  float fmt; 
  float fmta; 
  XAnimSubTreeID *pOutAnimSubtreeID; 
  XAnimCurveID *pOutAnimCurveID; 
  int *pOutAnimtreeIndex; 
  __int64 v85; 
  char v86; 
  unsigned int outOffsetBack; 
  const snapshot_t *NextSnap_Internal; 
  BgAnimStatic *bgameAnim; 
  XAnimSubTreeID v90[2]; 
  unsigned int pOutAnimIndex; 
  unsigned int index; 
  CgGlobalsMP *LocalClientGlobals; 
  unsigned int pOutGraftNode; 
  FXRegisteredDef registeredDef; 
  Weapon r_weapon; 

  v5 = localClientNum;
  v86 = 0;
  LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals(localClientNum);
  _RDI = (__int64)LocalClientGlobals;
  NextSnap_Internal = CG_SnapshotMP_GetNextSnap_Internal((const LocalClientNum_t)v5);
  v7 = (__int64)NextSnap_Internal;
  if ( !NextSnap_Internal && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 1568, ASSERT_TYPE_ASSERT, "(nextSnap)", (const char *)&queryFormat, "nextSnap") )
    __debugbreak();
  inKillCam = LocalClientGlobals->inKillCam;
  if ( inKillCam )
    goto LABEL_101;
  if ( LocalClientGlobals->predictedPlayerState.deltaTime )
  {
    Com_Printf(14, "CG_TransitionKillcam: Going IN TO killcam with deltaTime %d at time %d.\n", (unsigned int)LocalClientGlobals->predictedPlayerState.deltaTime, (unsigned int)LocalClientGlobals->nextSnap->serverTime);
    CG_SnapshotMP_TransitionKillcam_Entities((LocalClientNum_t)v5);
    CG_SoundEntity_StopAllSounds((LocalClientNum_t)v5);
    ScriptableCl_ClearAnimTimes((const LocalClientNum_t)v5);
    nextSnap = LocalClientGlobals->nextSnap;
    LocalClientGlobals->inKillCam = 1;
    v86 = 1;
    *(_DWORD *)(_RDI + 741600) = nextSnap->serverTime;
    *(_DWORD *)(_RDI + 741756) = 0;
    *(_DWORD *)(_RDI + 363816) = *(_DWORD *)(_RDI + 12104);
    CG_VisionSetSetBlendOff((ClientVisionSetData *)(_RDI + 304604), VISIONSET_BLENDTYPE_NVG_FADE);
    CG_VisionSetSetBlendOff((ClientVisionSetData *)(_RDI + 304604), VISIONSET_BLENDTYPE_NVG_BLIND);
    CG_VisionSetSetBlendOff((ClientVisionSetData *)(_RDI + 304604), VISIONSET_BLENDTYPE_NVG_BLIND_WEIGHTED);
    CG_VisionSetSetBlendOff((ClientVisionSetData *)(_RDI + 304604), VISIONSET_BLENDTYPE_WEAPON_ADS);
    *(_BYTE *)(_RDI + 741608) = 0;
    *(_QWORD *)(_RDI + 741616) = 2047i64;
    *(_DWORD *)(_RDI + 741760) = 0;
    *(_DWORD *)(_RDI + 741596) = 0;
    *(_DWORD *)(_RDI + 741696) = 0;
    *(_QWORD *)(_RDI + 741672) = 0i64;
    *(_DWORD *)(_RDI + 741680) = 0;
    *(_QWORD *)(_RDI + 741624) = 2047i64;
    *(_QWORD *)(_RDI + 741632) = 0i64;
    *(_QWORD *)(_RDI + 741640) = 0i64;
    *(_QWORD *)(_RDI + 741648) = 0i64;
    *(_QWORD *)(_RDI + 741656) = 0i64;
    CG_SetEquippedOffHand((LocalClientNum_t)v5, &NULL_WEAPON);
    CG_MainMP_RewindKillcamEffects((LocalClientNum_t)v5, -*(_DWORD *)(_RDI + 12104));
    CG_Gesture_TransitionKillcamGestures((LocalClientNum_t)v5, (const playerState_s *const)(_RDI + 8));
    CG_AnimTreeMP_ClearScriptModelAnims((LocalClientNum_t)v5);
    v10 = CG_GetLocalClientGlobals((const LocalClientNum_t)v5);
    v11 = 5i64;
    _RBX = v10->killcamFXWeapons;
    do
    {
      __asm
      {
        vmovups ymm2, ymmword ptr [rbx]
        vmovups xmm0, xmmword ptr [rbx+20h]
        vmovsd  xmm1, qword ptr [rbx+30h]
        vmovd   eax, xmm2
      }
      *(_DWORD *)&r_weapon.weaponCamo = *(_DWORD *)&_RBX->weaponCamo;
      __asm
      {
        vmovups ymmword ptr [rsp+118h+r_weapon.weaponIdx], ymm2
        vmovups xmmword ptr [rsp+118h+r_weapon.attachmentVariationIndices+5], xmm0
        vmovsd  qword ptr [rsp+118h+r_weapon.attachmentVariationIndices+15h], xmm1
      }
      if ( (_WORD)_EAX )
      {
        if ( BG_ValidateWeaponNumber(&r_weapon) )
        {
          v15.particleSystemDef = BG_ProjExplosionEffect(&r_weapon, 0).particleSystemDef;
          if ( v15.particleSystemDef )
          {
            v16 = v10->time - v10->predictedPlayerState.deltaTime;
            registeredDef.m_particleSystemDef = v15.particleSystemDef;
            FX_KillEffectDefNewerThan((LocalClientNum_t)v5, &registeredDef, v16);
          }
        }
      }
      ++_RBX;
      --v11;
    }
    while ( v11 );
    FX_ClearViewmodelMarks((LocalClientNum_t)v5);
    CG_Camera_KillCam_Transition_In((LocalClientNum_t)v5);
    CG_Door_TransitionKillcam((const LocalClientNum_t)v5);
    inKillCam = *(_DWORD *)(_RDI + 741592);
  }
  if ( inKillCam )
  {
LABEL_101:
    if ( !*(_DWORD *)(_RDI + 12104) )
    {
      __asm { vmovaps [rsp+118h+var_38], xmm6 }
      LocalClientStatics = CgStatic::GetLocalClientStatics((const LocalClientNum_t)v5);
      bgameAnim = (BgAnimStatic *)LocalClientStatics->GetAnimStatics(LocalClientStatics);
      if ( !bgameAnim && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 1652, ASSERT_TYPE_ASSERT, "(bgameAnim)", (const char *)&queryFormat, "bgameAnim") )
        __debugbreak();
      *(_DWORD *)(_RDI + 363816) = *(_DWORD *)(_RDI + 12104);
      v18 = *(_QWORD *)(_RDI + 26072);
      v19 = *(_DWORD *)(v18 + 12) - *(_DWORD *)(_RDI + 741600);
      Com_Printf(14, "CG_TransitionKillcam: Going OUT OF killcam with at time %d. Lasted %d seconds.\n", *(unsigned int *)(v18 + 12), v19);
      CG_SnapshotMP_TransitionKillcam_Entities((LocalClientNum_t)v5);
      CG_SoundEntity_StopAllSounds((LocalClientNum_t)v5);
      CG_SnapshotMP_KillEffectsOnCharacters((LocalClientNum_t)v5);
      CG_Camera_KillCam_Transition_Out((LocalClientNum_t)v5);
      v20 = *(_QWORD *)(_RDI + 26072);
      *(_DWORD *)(_RDI + 741592) = 0;
      *(_DWORD *)(_RDI + 741600) = 0;
      *(_DWORD *)(_RDI + 741604) = *(_DWORD *)(v20 + 12);
      CG_StopCinematicCameras((LocalClientNum_t)v5);
      LocalClientStaticGlobals = CG_GetLocalClientStaticGlobals((const LocalClientNum_t)v5);
      CG_MainMP_RewindKillcamEffects((LocalClientNum_t)v5, v19);
      CG_AnimTreeMP_ClearScriptModelAnims((LocalClientNum_t)v5);
      __asm { vmovss  xmm6, cs:__real@3f800000 }
      v23 = 0;
      outOffsetBack = 0;
      if ( *(int *)(v7 + 24) > 0 )
      {
        v24 = (__int64)NextSnap_Internal;
        v25 = (__int16 *)(v7 + 21452);
        while ( v25[4] == 2 )
        {
LABEL_63:
          ++v23;
          v25 += 124;
          outOffsetBack = v23;
          if ( v23 >= *(_DWORD *)(v24 + 24) )
            goto LABEL_64;
        }
        v26 = *v25;
        EntitySystem = CgEntitySystem::GetEntitySystem((const LocalClientNum_t)v5);
        if ( (unsigned int)v26 >= 0x800 )
        {
          LODWORD(pOutAnimCurveID) = 2048;
          LODWORD(pOutAnimSubtreeID) = v26;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", pOutAnimSubtreeID, pOutAnimCurveID) )
            __debugbreak();
        }
        v28 = (__int64)&EntitySystem->m_entities[v26];
        v29 = *(_WORD *)(v28 + 408);
        if ( v29 == 6 && *(_DWORD *)(v28 + 416) == 11 && *(_DWORD *)(v28 + 292) == 11 || (CG_SnapshotMP_ResetEntity_Internal((LocalClientNum_t)v5, (centity_t *)v28, v29 != 18, 1), v29 != 18) )
        {
LABEL_62:
          v24 = (__int64)NextSnap_Internal;
          goto LABEL_63;
        }
        if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 160, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
          __debugbreak();
        v30 = *(__int16 *)(v28 + 400) - ComCharacterLimits::ms_gameData.m_clientCorpseCount - ComCharacterLimits::ms_gameData.m_characterCount;
        if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 137, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
          __debugbreak();
        if ( v30 >= ComCharacterLimits::ms_gameData.m_agentCorpseCount )
        {
          if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 137, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
            __debugbreak();
          LODWORD(pOutAnimCurveID) = ComCharacterLimits::ms_gameData.m_agentCorpseCount;
          LODWORD(pOutAnimSubtreeID) = v30;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 1714, ASSERT_TYPE_ASSERT, "(unsigned)( corpseIndex ) < (unsigned)( ComCharacterLimits::GetAgentCorpseMaxCount() )", "corpseIndex doesn't index ComCharacterLimits::GetAgentCorpseMaxCount()\n\t%i not in [0, %i)", pOutAnimSubtreeID, pOutAnimCurveID) )
            __debugbreak();
        }
        if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 137, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
          __debugbreak();
        if ( (unsigned __int64)(int)ComCharacterLimits::ms_gameData.m_agentCorpseCount > 8 )
        {
          if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 137, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
            __debugbreak();
          LODWORD(v85) = 8;
          LODWORD(pOutAnimtreeIndex) = ComCharacterLimits::ms_gameData.m_agentCorpseCount;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 1715, ASSERT_TYPE_ASSERT, "( ComCharacterLimits::GetAgentCorpseMaxCount() ) <= ( ( sizeof( *array_counter( cgs->agentCorpseInfo ) ) + 0 ) )", "%s <= %s\n\t%i, %i", "ComCharacterLimits::GetAgentCorpseMaxCount()", "ARRAY_COUNT( cgs->agentCorpseInfo )", pOutAnimtreeIndex, v85) )
            __debugbreak();
        }
        v31 = (int)v30;
        pXAnimTree = LocalClientStaticGlobals->agentCorpseInfo[v31].ci.pXAnimTree;
        if ( LocalClientStaticGlobals->agentCorpseInfo[v31].ci.usingAnimState )
        {
          AnimsetNameByIndex = BG_AnimationState_GetAnimsetNameByIndex(LocalClientStaticGlobals->agentCorpseInfo[v31].ci.characterAnim.animClass);
          BG_Animset_GetAnimIndexFromStateIndexAndEntry(AnimsetNameByIndex, LocalClientStaticGlobals->agentCorpseInfo[v31].ci.characterAnim.animState, LocalClientStaticGlobals->agentCorpseInfo[v31].ci.characterAnim.animEntry, &pOutAnimIndex, &pOutGraftNode, v90, NULL, (int *)&index, 0);
          v34 = index;
          v35 = pOutAnimIndex;
          if ( (index & 0x80000000) != 0 )
          {
            v23 = outOffsetBack;
            anims = bgameAnim->animClassTrees[LocalClientStaticGlobals->agentCorpseInfo[v31].ci.characterAnim.animClass].anims;
LABEL_58:
            if ( v35 && !XAnimIsLooped(anims, v35) && !XAnimGetNumChildren(anims, v35) )
            {
              __asm { vmovss  dword ptr [rsp+118h+fmt], xmm6 }
              XAnimSetTime(pXAnimTree, 0, XANIM_SUBTREE_DEFAULT, v35, fmt);
            }
            goto LABEL_62;
          }
          v37 = ScriptContext_GetFromAnimUser(0);
          v38 = Scr_GetAnims(v37, v34);
          v23 = outOffsetBack;
        }
        else
        {
          if ( PlayerASM_IsEnabled() )
            XAnimIndex = BG_PlayerASM_GetXAnimIndex(LocalClientStaticGlobals->agentCorpseInfo[v31].ci.legs.animsetIndex, LocalClientStaticGlobals->agentCorpseInfo[v31].ci.legs.animationNumber);
          else
            XAnimIndex = BG_AnimationMP_GetXAnimIndex(bgameAnim, (const SuitAnimType)LocalClientStaticGlobals->agentCorpseInfo[v31].ci.legs.suitAnimIndex, LocalClientStaticGlobals->agentCorpseInfo[v31].ci.legs.animationNumber & 0xFFFFEFFF);
          v35 = XAnimIndex;
          v38 = XAnimGetAnims(pXAnimTree);
        }
        anims = v38;
        goto LABEL_58;
      }
LABEL_64:
      if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 130, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
        __debugbreak();
      if ( (unsigned __int64)(int)ComCharacterLimits::ms_gameData.m_clientCorpseCount > 8 )
      {
        if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 130, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
          __debugbreak();
        LODWORD(v85) = 8;
        LODWORD(pOutAnimtreeIndex) = ComCharacterLimits::ms_gameData.m_clientCorpseCount;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 1754, ASSERT_TYPE_ASSERT, "( ComCharacterLimits::GetClientCorpseMaxCount() ) <= ( ( sizeof( *array_counter( cgs->corpseinfo ) ) + 0 ) )", "%s <= %s\n\t%i, %i", "ComCharacterLimits::GetClientCorpseMaxCount()", "ARRAY_COUNT( cgs->corpseinfo )", pOutAnimtreeIndex, v85) )
          __debugbreak();
      }
      if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 152, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
        __debugbreak();
      m_characterCount = ComCharacterLimits::ms_gameData.m_characterCount;
      p_animationNumber = &LocalClientStaticGlobals->corpseinfo[0].ci.legs.animationNumber;
      for ( i = ComCharacterLimits::ms_gameData.m_characterCount; ; ++i )
      {
        if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 130, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
          __debugbreak();
        if ( (int)(i - m_characterCount) >= (int)ComCharacterLimits::ms_gameData.m_clientCorpseCount )
          break;
        if ( (p_animationNumber[3181] & 1) != 0 )
        {
          v43 = CgEntitySystem::GetEntitySystem((const LocalClientNum_t)v5);
          if ( i >= 0x800 )
          {
            LODWORD(pOutAnimCurveID) = 2048;
            LODWORD(pOutAnimSubtreeID) = i;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", pOutAnimSubtreeID, pOutAnimCurveID) )
              __debugbreak();
          }
          v44 = &v43->m_entities[i];
          if ( !v44 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 1764, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
            __debugbreak();
          if ( CG_Pose_IsKillcamRagdoll(&v44->pose) )
            CG_SnapshotMP_ResetEntity_Internal((LocalClientNum_t)v5, v44, 0, 1);
          if ( BG_IsRagdollTrajectory(&v44->nextState.lerp.pos) )
            CG_Pose_StopAnimatedRagdoll(&v44->pose);
          v45 = *(XAnimTree **)(p_animationNumber - 7);
          if ( PlayerASM_IsEnabled() )
          {
            v46 = BG_PlayerASM_GetXAnimIndex(p_animationNumber[4], *p_animationNumber);
            v47 = BG_PlayerASM_GetAnims(p_animationNumber[4]);
          }
          else
          {
            v46 = BG_AnimationMP_GetXAnimIndex(bgameAnim, (const SuitAnimType)*(p_animationNumber - 1), *p_animationNumber & 0xFFFFEFFF);
            v47 = XAnimGetAnims(v45);
          }
          v48 = v47;
          if ( v46 && !XAnimIsLooped(v47, v46) && !XAnimGetNumChildren(v48, v46) )
          {
            __asm { vmovss  dword ptr [rsp+118h+fmt], xmm6 }
            XAnimSetTime(v45, 0, XANIM_SUBTREE_DEFAULT, v46, fmta);
          }
        }
        p_animationNumber += 6726;
      }
      FX_ClearViewmodelMarks((LocalClientNum_t)v5);
      _RDI = (__int64)LocalClientGlobals;
      v7 = (__int64)NextSnap_Internal;
      __asm { vmovaps xmm6, [rsp+118h+var_38] }
      inKillCam = LocalClientGlobals->inKillCam;
    }
    if ( inKillCam )
    {
      *(_DWORD *)(_RDI + 741752) = *(char *)(v7 + 12148);
      v50 = *(__int16 *)(v7 + 12140);
      v51 = *(_DWORD *)(_RDI + 741596);
      *(_DWORD *)(_RDI + 741624) = 2047;
      if ( v50 == 2047 )
      {
        *(_DWORD *)(_RDI + 741596) = 0;
        *(_DWORD *)(_RDI + 741616) = 2047;
        goto $LN76_11;
      }
      if ( v50 != *(_DWORD *)(_RDI + 741616) )
      {
        Entity = CG_GetEntity((const LocalClientNum_t)v5, v50);
        v53 = Entity;
        if ( (Entity->flags & 1) != 0 )
        {
          *(_DWORD *)(_RDI + 741624) = v50;
          *(_DWORD *)(_RDI + 741616) = 2047;
          switch ( Entity->pose.eType )
          {
            case 4u:
              inAltWeaponMode = Entity->nextState.inAltWeaponMode;
              Instance = CgWeaponMap::GetInstance((const LocalClientNum_t)v5);
              WeaponForEntity = BG_GetWeaponForEntity(Instance, &v53->nextState);
              LODWORD(v60) = WeaponForEntity->weaponIdx;
              if ( (unsigned int)v60 > bg_lastParsedWeaponIndex )
              {
                LODWORD(pOutAnimCurveID) = bg_lastParsedWeaponIndex;
                LODWORD(pOutAnimSubtreeID) = WeaponForEntity->weaponIdx;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1203, ASSERT_TYPE_ASSERT, "( weaponIdx ) <= ( bg_lastParsedWeaponIndex )", "weaponIdx not in [0, bg_lastParsedWeaponIndex]\n\t%u not in [0, %u]", pOutAnimSubtreeID, pOutAnimCurveID) )
                  __debugbreak();
              }
              v60 = (unsigned __int16)v60;
              if ( !bg_weaponDefs[(unsigned __int16)v60] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1204, ASSERT_TYPE_ASSERT, "(bg_weaponDefs[weaponIdx])", (const char *)&queryFormat, "bg_weaponDefs[weaponIdx]") )
                __debugbreak();
              v61 = bg_weaponDefs[v60];
              if ( !v61 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 1871, ASSERT_TYPE_ASSERT, "(weapDef)", (const char *)&queryFormat, "weapDef") )
                __debugbreak();
              guidedMissileType = v61->guidedMissileType;
              if ( guidedMissileType != MISSILE_GUIDANCE_JAVELIN || v53->nextState.lerp.u.anonymous.data[3] )
              {
                if ( guidedMissileType == MISSILE_GUIDANCE_HELLFIRE )
                {
                  *(_DWORD *)(_RDI + 741596) = 9;
                }
                else if ( BG_GetWeaponClass(WeaponForEntity, inAltWeaponMode) == WEAPCLASS_ROCKETLAUNCHER )
                {
                  *(_DWORD *)(_RDI + 741596) = 6;
                }
                else
                {
                  WeaponType = BG_GetWeaponType(WeaponForEntity, inAltWeaponMode);
                  v64 = 3;
                  if ( WeaponType == WEAPTYPE_PROJECTILE )
                    v64 = 5;
                  *(_DWORD *)(_RDI + 741596) = v64;
                }
              }
              else
              {
                *(_DWORD *)(_RDI + 741596) = 8;
              }
              *(_DWORD *)(_RDI + 741664) = 0;
              if ( v53->nextState.groundEntityNum != 2047 )
              {
                v65 = BG_WeaponStickinessType(WeaponForEntity, inAltWeaponMode);
                *(_DWORD *)(_RDI + 741664) = 1;
                if ( ((v65 - 1) & 0xFFFFFFFA) != 0 || v65 == WEAPSTICKINESS_GROUND_ORIENT )
                {
                  if ( (unsigned int)(v65 - 3) <= 2 )
                    *(_DWORD *)(_RDI + 741664) = 2;
                }
                else
                {
                  *(_DWORD *)(_RDI + 741664) = 3;
                }
              }
              LinkToParent = CG_Entity_GetLinkToParent((LocalClientNum_t)v5, v53);
              if ( v61->stickToPlayers && LinkToParent )
              {
                p_nextState = &LinkToParent->nextState;
                if ( BG_IsCharacterEntity(&LinkToParent->nextState) )
                  goto LABEL_142;
                if ( !p_nextState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 1983, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
                  __debugbreak();
                eType = (unsigned __int16)p_nextState->eType;
                if ( (unsigned __int16)eType <= 0x15u )
                {
                  v69 = 2359300;
                  if ( _bittest(&v69, eType) )
                  {
LABEL_142:
                    v70 = *(_BYTE *)(_RDI + 741608) == 0;
                    v50 = 2047;
                    *(_DWORD *)(_RDI + 741664) = 4;
                    if ( v70 )
                    {
                      if ( *(_DWORD *)(_RDI + 741624) == 2047 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 1918, ASSERT_TYPE_ASSERT, "(cgameGlob->killCamLastEntityNum != ENTITYNUM_NONE)", (const char *)&queryFormat, "cgameGlob->killCamLastEntityNum != ENTITYNUM_NONE") )
                        __debugbreak();
                    }
                    else
                    {
                      *(_DWORD *)(_RDI + 741616) = 2047;
                      *(_DWORD *)(_RDI + 741624) = 2047;
                    }
                  }
                }
              }
              if ( BG_IsThrowingAxe(WeaponForEntity) && v53->nextState.lerp.u.anonymous.data[2] + Dvar_GetInt_Internal_DebugName(DVARINT_cg_throwingAxeKillCamEntIgnoreTime, "cg_throwingAxeKillCamEntIgnoreTime") > *(_DWORD *)(_RDI + 26092) )
              {
                v50 = 2047;
                *(_DWORD *)(_RDI + 741596) = 0;
                *(_DWORD *)(_RDI + 741624) = 2047;
              }
              if ( *((char *)&v53->nextState.lerp.u.ragdollConstraint + 16) < 0 )
              {
                *(_DWORD *)(_RDI + 741616) = v50;
                *(_DWORD *)(_RDI + 741664) = 5;
                goto LABEL_163;
              }
              break;
            case 0xBu:
              if ( Entity->nextState.staticState.player.stowedWeaponHandle.m_mapEntryId == 2047 )
              {
                *(_DWORD *)(_RDI + 741596) = 7;
              }
              else
              {
                *(_DWORD *)(_RDI + 741624) = 2047;
                v50 = 2047;
                *(_DWORD *)(_RDI + 741596) = 0;
              }
              break;
            case 0xCu:
              VehicleSystem = CgVehicleSystem::GetVehicleSystem((const LocalClientNum_t)v5);
              Client = CgVehicleSystem::GetClient(VehicleSystem, v53);
              ClientDef = CgVehicleSystem::GetClientDef(Client);
              *(_DWORD *)(_RDI + 741596) = 1;
              *(vec3_t *)(_RDI + 741684) = ClientDef->killcamOffset;
              break;
            case 0xEu:
              *(_DWORD *)(_RDI + 741596) = 10;
              break;
            case 0x16u:
            case 0x17u:
            case 0x19u:
            case 0x1Au:
            case 0x1Bu:
              break;
            default:
              if ( Entity->pose.eType != 6 )
                goto LABEL_160;
              eventParm = Entity->nextState.eventParm;
              *(_DWORD *)(_RDI + 741596) = eventParm;
              if ( eventParm == 4 )
              {
                BG_ScriptMoverKillcam_UnpackOffset(v53->nextState.eventParm2, (unsigned int *)&bgameAnim, &outOffsetBack);
                *(_DWORD *)(_RDI + 741740) = 0;
                __asm
                {
                  vxorps  xmm0, xmm0, xmm0
                  vcvtsi2ss xmm0, xmm0, rax
                  vxorps  xmm1, xmm1, xmm1
                  vcvtsi2ss xmm1, xmm1, rax
                  vmovss  dword ptr [rdi+0B5170h], xmm0
                  vmovss  dword ptr [rdi+0B5174h], xmm1
                }
              }
              else if ( eventParm > 9 || !eventParm )
              {
LABEL_160:
                *(_DWORD *)(_RDI + 741596) = 2;
              }
              break;
          }
$LN76_11:
          v77 = NextSnap_Internal;
          if ( v86 || v50 == *(_DWORD *)(_RDI + 741612) || v50 != SLOWORD(NextSnap_Internal[758].serverTime) )
            goto LABEL_175;
          if ( *(_DWORD *)(_RDI + 741596) == 7 )
          {
            v78 = DVARINT_cg_killCamTurretLerpTime;
            if ( !DVARINT_cg_killCamTurretLerpTime )
            {
              v79 = "cg_killCamTurretLerpTime";
LABEL_172:
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", v79) )
                __debugbreak();
            }
          }
          else
          {
            v78 = DVARINT_cg_killCamDefaultLerpTime;
            if ( !DVARINT_cg_killCamDefaultLerpTime )
            {
              v79 = "cg_killCamDefaultLerpTime";
              goto LABEL_172;
            }
          }
          Dvar_CheckFrontendServerThread(v78);
          *(_DWORD *)(_RDI + 741760) = *(_DWORD *)(_RDI + 26092) + v78->current.integer;
LABEL_175:
          if ( !v51 && *(_DWORD *)(_RDI + 741596) )
          {
            if ( (unsigned int)v5 >= 2 )
            {
              LODWORD(pOutAnimCurveID) = 2;
              LODWORD(pOutAnimSubtreeID) = v5;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.h", 866, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", pOutAnimSubtreeID, pOutAnimCurveID) )
                __debugbreak();
            }
            if ( !&g_particleManager[v5] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 2050, ASSERT_TYPE_ASSERT, "(particleManager)", (const char *)&queryFormat, "particleManager") )
              __debugbreak();
            ParticleManager::OnKillcamEntityTransition(&g_particleManager[v5], (LocalClientNum_t)v5);
          }
          *(_DWORD *)(_RDI + 741612) = v50;
          *(_DWORD *)(_RDI + 741668) = SHIWORD(v77[758].serverTime);
          return;
        }
        v76 = *(_DWORD *)(_RDI + 741612);
        if ( v76 == v50 )
          *(_DWORD *)(_RDI + 741616) = v76;
      }
LABEL_163:
      v50 = 2047;
      goto $LN76_11;
    }
  }
}

/*
==============
CG_SnapshotMP_TransitionKillcam_Entities
==============
*/
void CG_SnapshotMP_TransitionKillcam_Entities(LocalClientNum_t localClientNum)
{
  const snapshot_t *NextSnap_Internal; 
  int v3; 
  const snapshot_t *v4; 
  int *p_serverTime; 

  NextSnap_Internal = CG_SnapshotMP_GetNextSnap_Internal(localClientNum);
  v3 = 0;
  v4 = NextSnap_Internal;
  if ( NextSnap_Internal[1].snapFlags > 0 )
  {
    p_serverTime = &NextSnap_Internal[1340].serverTime;
    do
    {
      if ( *((_WORD *)p_serverTime + 4) == 11 )
        CG_Turret_StopSounds(localClientNum, *(__int16 *)p_serverTime);
      ++v3;
      p_serverTime += 62;
    }
    while ( v3 < v4[1].snapFlags );
  }
}

/*
==============
CG_SnapshotMP_TransitionSnapshot
==============
*/
void CG_SnapshotMP_TransitionSnapshot(LocalClientNum_t localClientNum)
{
  __int64 v1; 
  CgStatic *v2; 
  const snapshot_t *v3; 
  int v4; 
  int v5; 
  const unsigned int *p_serverTime; 
  __int64 v7; 
  cg_t *v8; 
  characterInfo_t *CharacterInfo; 
  int v10; 
  __int64 v11; 
  cg_t *v12; 
  characterInfo_t *v13; 
  unsigned int v14; 
  int v15; 
  int *v16; 
  __int64 v17; 
  cg_t *v18; 
  characterInfo_t *v19; 
  int v20; 
  XAnimTree *pXAnimTree; 
  unsigned int v22; 
  unsigned int v23; 
  cg_t *v24; 
  characterInfo_t *v25; 
  unsigned int v26; 
  unsigned int v27; 
  CgGlobalsMP *v28; 
  entityType_s eType; 
  int *v35; 
  __int64 v36; 
  CgEntitySystem *EntitySystem; 
  int v41; 
  unsigned int v42; 
  __int16 v43; 
  int v44; 
  char v47; 
  __int64 v48; 
  __int64 v49; 
  const snapshot_t *NextSnap_Internal; 
  CgStatic *LocalClientStatics; 
  CgGlobalsMP *LocalClientGlobals; 
  const snapshot_t *PrevSnap_Internal; 

  v1 = localClientNum;
  LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals(localClientNum);
  LocalClientStatics = CgStatic::GetLocalClientStatics((const LocalClientNum_t)v1);
  v2 = LocalClientStatics;
  PrevSnap_Internal = CG_SnapshotMP_GetPrevSnap_Internal((const LocalClientNum_t)v1);
  v3 = PrevSnap_Internal;
  NextSnap_Internal = CG_SnapshotMP_GetNextSnap_Internal((const LocalClientNum_t)v1);
  if ( !PrevSnap_Internal && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 2139, ASSERT_TYPE_ASSERT, "(prevSnap)", (const char *)&queryFormat, "prevSnap") )
    __debugbreak();
  if ( !NextSnap_Internal && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 2140, ASSERT_TYPE_ASSERT, "(nextSnap)", (const char *)&queryFormat, "nextSnap") )
    __debugbreak();
  v4 = 0;
  v5 = 0;
  if ( PrevSnap_Internal[1].serverTime > 0 )
  {
    p_serverTime = (const unsigned int *)&PrevSnap_Internal[33084].serverTime;
    do
    {
      v7 = *(int *)p_serverTime;
      v8 = CG_GetLocalClientGlobals((const LocalClientNum_t)v2->m_localClientNum);
      if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static_inline.h", 25, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
        __debugbreak();
      if ( v8->IsMP(v8) )
      {
        if ( (unsigned int)v7 >= v8[1].predictedPlayerState.rxvOmnvars[64].timeModified )
        {
          LODWORD(v49) = v8[1].predictedPlayerState.rxvOmnvars[64].timeModified;
          LODWORD(v48) = v7;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_globals_mp_inline.h", 12, ASSERT_TYPE_ASSERT, "(unsigned)( characterIndex ) < (unsigned)( static_cast<int>( m_characterInfoCount ) )", "characterIndex doesn't index static_cast<int>( m_characterInfoCount )\n\t%i not in [0, %i)", v48, v49) )
            __debugbreak();
        }
        CharacterInfo = (characterInfo_t *)(*(_QWORD *)&v8[1].predictedPlayerState.rxvOmnvars[62] + 14792 * v7);
      }
      else
      {
        CharacterInfo = CgGlobalsSP::GetCharacterInfo((CgGlobalsSP *)v8, v7);
      }
      if ( !CharacterInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 2147, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
        __debugbreak();
      if ( CharacterInfo->nextValid )
        CharacterInfo->nextValid = 0;
      else
        CG_SnapshotMP_FreeClient((LocalClientNum_t)v1, *p_serverTime, CharacterInfo);
      v2 = LocalClientStatics;
      ++v5;
      p_serverTime += 102;
    }
    while ( v5 < PrevSnap_Internal[1].serverTime );
  }
  v10 = 0;
  if ( cls.maxClients > 0 )
  {
    v11 = 0i64;
    do
    {
      v12 = CG_GetLocalClientGlobals((const LocalClientNum_t)v2->m_localClientNum);
      if ( !v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static_inline.h", 25, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
        __debugbreak();
      if ( v12->IsMP(v12) )
      {
        if ( v10 >= v12[1].predictedPlayerState.rxvOmnvars[64].timeModified )
        {
          LODWORD(v49) = v12[1].predictedPlayerState.rxvOmnvars[64].timeModified;
          LODWORD(v48) = v10;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_globals_mp_inline.h", 12, ASSERT_TYPE_ASSERT, "(unsigned)( characterIndex ) < (unsigned)( static_cast<int>( m_characterInfoCount ) )", "characterIndex doesn't index static_cast<int>( m_characterInfoCount )\n\t%i not in [0, %i)", v48, v49) )
            __debugbreak();
        }
        v13 = (characterInfo_t *)(*(_QWORD *)&v12[1].predictedPlayerState.rxvOmnvars[62] + 14792i64 * v10);
      }
      else
      {
        v13 = CgGlobalsSP::GetCharacterInfo((CgGlobalsSP *)v12, v10);
      }
      if ( !v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 2162, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
        __debugbreak();
      if ( !v13->infoValid )
      {
        if ( (unsigned int)v10 > 0x9E4 )
        {
          LODWORD(v49) = v10;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 55, ASSERT_TYPE_ASSERT, "( ( handle >= 0 && handle < ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) ) )", "%s\n\t( handle ) = %i", "( handle >= 0 && handle < ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) )", v49) )
            __debugbreak();
        }
        if ( (unsigned int)v1 >= 2 )
        {
          LODWORD(v49) = 2;
          LODWORD(v48) = v1;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 58, ASSERT_TYPE_ASSERT, "(unsigned)( localClientIndex ) < (unsigned)( (2) )", "localClientIndex doesn't index MAX_DOBJ_CLIENTS\n\t%i not in [0, %i)", v48, v49) )
            __debugbreak();
        }
        if ( (unsigned int)(v10 + 2533 * v1) >= 0x13CA )
        {
          LODWORD(v49) = v10 + 2533 * v1;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 62, ASSERT_TYPE_ASSERT, "( ( (unsigned)handle < ( sizeof( *array_counter( clientObjMap ) ) + 0 ) ) )", "%s\n\t( handle ) = %i", "( (unsigned)handle < ( sizeof( *array_counter( clientObjMap ) ) + 0 ) )", v49) )
            __debugbreak();
        }
        v14 = clientObjMap[2533 * v1 + v11];
        if ( clientObjMap[2533 * v1 + v11] )
        {
          if ( v14 >= (unsigned int)s_objCount )
          {
            LODWORD(v49) = clientObjMap[2533 * v1 + v11];
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 64, ASSERT_TYPE_ASSERT, "( ( !objIndex || ( (unsigned)objIndex < s_objCount ) ) )", "%s\n\t( objIndex ) = %i", "( !objIndex || ( (unsigned)objIndex < s_objCount ) )", v49) )
              __debugbreak();
          }
          if ( s_objBuf[v14] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 2166, ASSERT_TYPE_ASSERT, "(!Com_GetClientDObj( i, localClientNum ))", (const char *)&queryFormat, "!Com_GetClientDObj( i, localClientNum )") )
            __debugbreak();
        }
      }
      v2 = LocalClientStatics;
      ++v10;
      ++v11;
    }
    while ( v10 < cls.maxClients );
    v3 = PrevSnap_Internal;
    v4 = 0;
  }
  v15 = 0;
  if ( SLODWORD(v3[2].__vftable) > 0 )
  {
    v16 = &v3[38184].serverTime;
    do
    {
      v17 = *(__int16 *)v16;
      v18 = CG_GetLocalClientGlobals((const LocalClientNum_t)LocalClientStatics->m_localClientNum);
      if ( !v18 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static_inline.h", 25, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
        __debugbreak();
      if ( v18->IsMP(v18) )
      {
        if ( (unsigned int)v17 >= v18[1].predictedPlayerState.rxvOmnvars[64].timeModified )
        {
          LODWORD(v49) = v18[1].predictedPlayerState.rxvOmnvars[64].timeModified;
          LODWORD(v48) = v17;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_globals_mp_inline.h", 12, ASSERT_TYPE_ASSERT, "(unsigned)( characterIndex ) < (unsigned)( static_cast<int>( m_characterInfoCount ) )", "characterIndex doesn't index static_cast<int>( m_characterInfoCount )\n\t%i not in [0, %i)", v48, v49) )
            __debugbreak();
        }
        v19 = (characterInfo_t *)(*(_QWORD *)&v18[1].predictedPlayerState.rxvOmnvars[62] + 14792 * v17);
      }
      else
      {
        v19 = CgGlobalsSP::GetCharacterInfo((CgGlobalsSP *)v18, v17);
      }
      if ( !v19 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 2175, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
        __debugbreak();
      if ( v19->nextValid )
      {
        v19->nextValid = 0;
      }
      else
      {
        v20 = *(__int16 *)v16;
        pXAnimTree = v19->pXAnimTree;
        memset_0(v19, 0, sizeof(characterInfo_t));
        if ( v19->infoValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 2086, ASSERT_TYPE_ASSERT, "(!ci->infoValid)", (const char *)&queryFormat, "!ci->infoValid") )
          __debugbreak();
        if ( pXAnimTree )
          Com_XAnimFreeSmallTree(pXAnimTree);
        CG_AnimTreeMP_SafeDObjFree((LocalClientNum_t)v1, v20);
      }
      ++v15;
      v16 += 63;
    }
    while ( v15 < SLODWORD(v3[2].__vftable) );
  }
  v22 = 0;
  if ( cls.maxAgents > 0 )
  {
    do
    {
      if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 116, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
        __debugbreak();
      if ( v22 >= ComCharacterLimits::ms_gameData.m_agentCount )
      {
        if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 116, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
          __debugbreak();
        LODWORD(v49) = ComCharacterLimits::ms_gameData.m_agentCount;
        LODWORD(v48) = v22;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 186, ASSERT_TYPE_ASSERT, "(unsigned)( agentIndex ) < (unsigned)( ComCharacterLimits::GetAgentMaxCount() )", "agentIndex doesn't index ComCharacterLimits::GetAgentMaxCount()\n\t%i not in [0, %i)", v48, v49) )
          __debugbreak();
      }
      if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 168, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
        __debugbreak();
      v23 = v22 + ComCharacterLimits::ms_gameData.m_clientCount;
      v24 = CG_GetLocalClientGlobals((const LocalClientNum_t)LocalClientStatics->m_localClientNum);
      if ( !v24 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static_inline.h", 25, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
        __debugbreak();
      if ( v24->IsMP(v24) )
      {
        if ( v23 >= v24[1].predictedPlayerState.rxvOmnvars[64].timeModified )
        {
          LODWORD(v49) = v24[1].predictedPlayerState.rxvOmnvars[64].timeModified;
          LODWORD(v48) = v23;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_globals_mp_inline.h", 12, ASSERT_TYPE_ASSERT, "(unsigned)( characterIndex ) < (unsigned)( static_cast<int>( m_characterInfoCount ) )", "characterIndex doesn't index static_cast<int>( m_characterInfoCount )\n\t%i not in [0, %i)", v48, v49) )
            __debugbreak();
        }
        v25 = (characterInfo_t *)(*(_QWORD *)&v24[1].predictedPlayerState.rxvOmnvars[62] + 14792i64 * (int)v23);
      }
      else
      {
        v25 = CgGlobalsSP::GetCharacterInfo((CgGlobalsSP *)v24, v23);
      }
      if ( !v25 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 2192, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
        __debugbreak();
      if ( !v25->infoValid )
      {
        if ( v23 > 0x9E4 )
        {
          LODWORD(v49) = v23;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 55, ASSERT_TYPE_ASSERT, "( ( handle >= 0 && handle < ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) ) )", "%s\n\t( handle ) = %i", "( handle >= 0 && handle < ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) )", v49) )
            __debugbreak();
        }
        if ( (unsigned int)v1 >= 2 )
        {
          LODWORD(v49) = 2;
          LODWORD(v48) = v1;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 58, ASSERT_TYPE_ASSERT, "(unsigned)( localClientIndex ) < (unsigned)( (2) )", "localClientIndex doesn't index MAX_DOBJ_CLIENTS\n\t%i not in [0, %i)", v48, v49) )
            __debugbreak();
        }
        v26 = v23 + 2533 * v1;
        if ( v26 >= 0x13CA )
        {
          LODWORD(v49) = v23 + 2533 * v1;
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
          if ( s_objBuf[v27] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 2196, ASSERT_TYPE_ASSERT, "(!Com_GetClientDObj( entityIndex, localClientNum ))", (const char *)&queryFormat, "!Com_GetClientDObj( entityIndex, localClientNum )") )
            __debugbreak();
        }
      }
      ++v22;
    }
    while ( (int)v22 < cls.maxAgents );
    v4 = 0;
  }
  v28 = LocalClientGlobals;
  LocalClientGlobals->snap = LocalClientGlobals->nextSnap;
  if ( GameModeFlagValues::ms_mpValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 190, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a MP-only context", "IsFlagActive( index )") )
    __debugbreak();
  if ( GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal((GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64> *)((char *)&NextSnap_Internal[4].__vftable + 4), ACTIVE, 0x22u) )
    goto LABEL_133;
  if ( GameModeFlagValues::ms_mpValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 190, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a MP-only context", "IsFlagActive( index )") )
    __debugbreak();
  if ( GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal((GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64> *)((char *)&NextSnap_Internal[4].__vftable + 4), ACTIVE, 0x21u) )
  {
LABEL_133:
    _RBX = CG_GetEntity((const LocalClientNum_t)v1, HIDWORD(NextSnap_Internal[31].__vftable));
    __asm
    {
      vmovups ymm0, ymmword ptr [rax+19Ch]
      vmovups ymm1, ymmword ptr [rax+1BCh]
    }
    eType = _RBX->nextState.eType;
    __asm
    {
      vmovups ymmword ptr [rax+120h], ymm0
      vmovups ymm0, ymmword ptr [rax+1DCh]
      vmovups ymmword ptr [rax+140h], ymm1
      vmovups xmm1, xmmword ptr [rax+1FCh]
      vmovups ymmword ptr [rax+160h], ymm0
      vmovups xmmword ptr [rax+180h], xmm1
    }
    _RBX->prevEType = truncate_cast<unsigned char,enum entityType_s>(eType);
    _RBX->prevOtherEntityNum = _RBX->nextState.otherEntityNum;
    _RBX->prevPhysicsChildBodyIdx = _RBX->nextState.un.vehicleXModel;
    _RBX->prevLinkParent = *(_DWORD *)&_RBX->nextState.clientLinkInfo & 0x7FF;
    _RBX->prevClientNum = _RBX->nextState.clientNum;
    _RBX->pose.eType = _RBX->nextState.eType;
  }
  if ( NextSnap_Internal[1].snapFlags > 0 )
  {
    v35 = &NextSnap_Internal[1340].serverTime;
    do
    {
      v36 = *(__int16 *)v35;
      EntitySystem = CgEntitySystem::GetEntitySystem((const LocalClientNum_t)v1);
      if ( (unsigned int)v36 >= 0x800 )
      {
        LODWORD(v49) = 2048;
        LODWORD(v48) = v36;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", v48, v49) )
          __debugbreak();
      }
      _RBX = (__int64)&EntitySystem->m_entities[v36];
      __asm
      {
        vmovups ymm0, ymmword ptr [rbx+19Ch]
        vmovups ymm1, ymmword ptr [rbx+1BCh]
      }
      v41 = *(_DWORD *)(_RBX + 612);
      v42 = *(_DWORD *)(_RBX + 648) & 0xFFFEFFFF;
      v43 = *(_WORD *)(_RBX + 408);
      v44 = *(_DWORD *)(_RBX + 648) | 0x10000;
      __asm
      {
        vmovups ymmword ptr [rbx+120h], ymm0
        vmovups ymm0, ymmword ptr [rbx+1DCh]
        vmovups ymmword ptr [rbx+140h], ymm1
        vmovups xmm1, xmmword ptr [rbx+1FCh]
        vmovups ymmword ptr [rbx+160h], ymm0
      }
      if ( (v41 & 0x7FF) == 0 )
        v44 = v42;
      *(_DWORD *)(_RBX + 648) = v44;
      __asm { vmovups xmmword ptr [rbx+180h], xmm1 }
      if ( v43 < 0 || (unsigned __int16)v43 > 0xFFu )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned char __cdecl truncate_cast_impl<unsigned char,enum entityType_s>(enum entityType_s)", "unsigned", (unsigned __int8)v43, "signed", v43) )
          __debugbreak();
        v41 = *(_DWORD *)(_RBX + 612);
        v47 = *(_BYTE *)(_RBX + 408);
      }
      else
      {
        v47 = v43;
      }
      *(_DWORD *)(_RBX + 660) = *(__int16 *)(_RBX + 402);
      ++v4;
      v35 += 62;
      *(_DWORD *)(_RBX + 664) = *(_DWORD *)(_RBX + 600);
      *(_DWORD *)(_RBX + 716) = *(_DWORD *)(_RBX + 544);
      *(_BYTE *)(_RBX + 654) = v43;
      *(_DWORD *)(_RBX + 668) = v41 & 0x7FF;
      *(_BYTE *)_RBX = v47;
    }
    while ( v4 < NextSnap_Internal[1].snapFlags );
    v28 = LocalClientGlobals;
  }
  SND_AddPhysicsQueryBlock();
  Profile_Begin(672);
  Profile_Begin(673);
  CG_PhysicsCharacterProxy_MatchSnapshot((LocalClientNum_t)v1, v28->snap->serverTime);
  Profile_EndInternal(NULL);
  Profile_Begin(674);
  CG_PhysicsObject_MatchSnapshot((LocalClientNum_t)v1);
  Profile_EndInternal(NULL);
  Profile_EndInternal(NULL);
  SND_ReleasePhysicsQueryBlock();
}

/*
==============
CG_SnapshotMP_UpdateAgents
==============
*/
void CG_SnapshotMP_UpdateAgents(const LocalClientNum_t localClientNum, const CgSnapshotMP *nextSnap)
{
  CgStatic *LocalClientStatics; 
  int v5; 
  agentState_s *agents; 
  __int64 entityNum; 
  cg_t *LocalClientGlobals; 
  characterInfo_t *CharacterInfo; 
  __int16 v10; 
  __int64 v11; 
  __int64 numEntities; 
  entityState_t *entities; 
  int v14; 
  unsigned int v15; 
  unsigned int v16; 
  DObj *v17; 
  int v18; 
  unsigned int v19; 
  _DWORD *v20; 
  __int64 checkCustomization; 
  __int64 v22; 
  __int64 v23; 
  __int64 v24; 
  _DWORD v25[50]; 

  Sys_ProfBeginNamedEvent(0xFF9400D3, "SetNextSnap-UpdateAgents");
  memset_0(v25, 0, 0xC0ui64);
  CgGlobalsMP::GetLocalClientGlobals(localClientNum);
  LocalClientStatics = CgStatic::GetLocalClientStatics(localClientNum);
  v5 = 0;
  if ( nextSnap->numAgents > 0 )
  {
    agents = nextSnap->agents;
    do
    {
      entityNum = agents->entityNum;
      LocalClientGlobals = CG_GetLocalClientGlobals((const LocalClientNum_t)LocalClientStatics->m_localClientNum);
      if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static_inline.h", 25, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
        __debugbreak();
      if ( LocalClientGlobals->IsMP(LocalClientGlobals) )
      {
        if ( (unsigned int)entityNum >= LocalClientGlobals[1].predictedPlayerState.rxvOmnvars[64].timeModified )
        {
          LODWORD(v22) = LocalClientGlobals[1].predictedPlayerState.rxvOmnvars[64].timeModified;
          LODWORD(checkCustomization) = entityNum;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_globals_mp_inline.h", 12, ASSERT_TYPE_ASSERT, "(unsigned)( characterIndex ) < (unsigned)( static_cast<int>( m_characterInfoCount ) )", "characterIndex doesn't index static_cast<int>( m_characterInfoCount )\n\t%i not in [0, %i)", checkCustomization, v22) )
            __debugbreak();
        }
        CharacterInfo = (characterInfo_t *)(*(_QWORD *)&LocalClientGlobals[1].predictedPlayerState.rxvOmnvars[62] + 14792 * entityNum);
      }
      else
      {
        CharacterInfo = CgGlobalsSP::GetCharacterInfo((CgGlobalsSP *)LocalClientGlobals, entityNum);
      }
      v10 = agents->entityNum;
      v11 = 0i64;
      numEntities = nextSnap->numEntities;
      if ( numEntities <= 0 )
      {
LABEL_17:
        entities = NULL;
      }
      else
      {
        entities = nextSnap->entities;
        while ( entities->number != v10 )
        {
          if ( entities->number <= v10 )
          {
            ++v11;
            ++entities;
            if ( v11 < numEntities )
              continue;
          }
          goto LABEL_17;
        }
      }
      v14 = v10;
      if ( (unsigned int)v10 > 0x9E4 )
      {
        LODWORD(v22) = v10;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 55, ASSERT_TYPE_ASSERT, "( ( handle >= 0 && handle < ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) ) )", "%s\n\t( handle ) = %i", "( handle >= 0 && handle < ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) )", v22) )
          __debugbreak();
      }
      if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
      {
        LODWORD(v22) = 2;
        LODWORD(checkCustomization) = localClientNum;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 58, ASSERT_TYPE_ASSERT, "(unsigned)( localClientIndex ) < (unsigned)( (2) )", "localClientIndex doesn't index MAX_DOBJ_CLIENTS\n\t%i not in [0, %i)", checkCustomization, v22) )
          __debugbreak();
      }
      v15 = 2533 * localClientNum + v14;
      if ( v15 >= 0x13CA )
      {
        LODWORD(v22) = v15;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 62, ASSERT_TYPE_ASSERT, "( ( (unsigned)handle < ( sizeof( *array_counter( clientObjMap ) ) + 0 ) ) )", "%s\n\t( handle ) = %i", "( (unsigned)handle < ( sizeof( *array_counter( clientObjMap ) ) + 0 ) )", v22) )
          __debugbreak();
      }
      v16 = clientObjMap[v15];
      if ( v16 )
      {
        if ( v16 >= (unsigned int)s_objCount )
        {
          LODWORD(v22) = v16;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 64, ASSERT_TYPE_ASSERT, "( ( !objIndex || ( (unsigned)objIndex < s_objCount ) ) )", "%s\n\t( objIndex ) = %i", "( !objIndex || ( (unsigned)objIndex < s_objCount ) )", v22) )
            __debugbreak();
        }
        v17 = (DObj *)s_objBuf[v16];
      }
      else
      {
        v17 = NULL;
      }
      if ( CharacterInfo->usingAnimState && v17 )
        CG_AIAnim_UpdateParametersFromFields(localClientNum, v17, agents, entities);
      CharacterInfo->entityNum = agents->entityNum;
      if ( entities )
        CharacterInfo->speed = entities->lerp.u.player.moveSpeedForAnimBlend;
      else
        CharacterInfo->speed = 0;
      v18 = agents->entityNum;
      if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 168, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
        __debugbreak();
      if ( v18 < (int)ComCharacterLimits::ms_gameData.m_clientCount )
      {
        if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 168, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
          __debugbreak();
        LODWORD(v24) = ComCharacterLimits::ms_gameData.m_clientCount;
        LODWORD(v23) = v18;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 175, ASSERT_TYPE_ASSERT, "( entityIndex ) >= ( ComCharacterLimits::GetAgentEntityIndexOffset() )", "%s >= %s\n\t%i, %i", "entityIndex", "ComCharacterLimits::GetAgentEntityIndexOffset()", v23, v24) )
          __debugbreak();
      }
      if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 168, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
        __debugbreak();
      v19 = v18 - ComCharacterLimits::ms_gameData.m_clientCount;
      if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 116, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
        __debugbreak();
      if ( v19 >= ComCharacterLimits::ms_gameData.m_agentCount )
      {
        if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 116, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
          __debugbreak();
        LODWORD(v22) = ComCharacterLimits::ms_gameData.m_agentCount;
        LODWORD(checkCustomization) = v19;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 178, ASSERT_TYPE_ASSERT, "(unsigned)( agentIndex ) < (unsigned)( ComCharacterLimits::GetAgentMaxCount() )", "agentIndex doesn't index ComCharacterLimits::GetAgentMaxCount()\n\t%i not in [0, %i)", checkCustomization, v22) )
          __debugbreak();
      }
      v20 = &v25[v19];
      if ( *v20 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 3375, ASSERT_TYPE_ASSERT, "(!agentIndex[agentNum])", (const char *)&queryFormat, "!agentIndex[agentNum]") )
        __debugbreak();
      *v20 = 1;
      CG_SnapshotMP_AgentStateToCharacterInfo(localClientNum, agents->entityNum, agents, entities, CharacterInfo, 0);
      if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 2689, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION )") )
        __debugbreak();
      Mantle_UnpackAnimData(&agents->compressedAnimData, &CharacterInfo->animData);
      Tracer_SetDrawCounter(localClientNum, agents->entityNum, agents->weaponShotCount);
      ++v5;
      ++agents;
    }
    while ( v5 < nextSnap->numAgents );
  }
  Sys_ProfEndNamedEvent();
}

/*
==============
CG_SnapshotMP_UpdateClients
==============
*/
void CG_SnapshotMP_UpdateClients(const LocalClientNum_t localClientNum, const CgSnapshotMP *prevSnap, const CgSnapshotMP *nextSnap)
{
  CgGlobalsMP *LocalClientGlobals; 
  CgStatic *LocalClientStatics; 
  __int64 v7; 
  const char *v8; 
  const char *v9; 
  __int64 clientIndex; 
  __int64 v12; 
  int rank; 
  int prestige; 
  const dvar_t *v18; 
  int integer; 
  const dvar_t *v20; 
  int v21; 
  const dvar_t *v22; 
  int v23; 
  __int64 v24; 
  char *name; 
  char v26; 
  char v27; 
  __int64 v29; 
  char *v30; 
  char v31; 
  char v32; 
  unsigned int v34; 
  int v35; 
  __int64 v36; 
  __int64 numClients; 
  clientState_t *clients; 
  const clientState_t *v39; 
  __int64 v40; 
  cg_t *v41; 
  characterInfo_t *v42; 
  int v43; 
  __int64 v44; 
  __int64 numEntities; 
  entityState_t *entities; 
  char *fmt; 
  entityState_t *v48; 
  characterInfo_t *characterInfo; 
  __int64 checkCustomization; 
  int v51; 
  __int64 v52; 
  CgStatic *v53; 
  CgGlobalsMP *v55; 
  int v56[200]; 
  char dest[72]; 

  if ( !nextSnap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 3204, ASSERT_TYPE_ASSERT, "(nextSnap)", (const char *)&queryFormat, "nextSnap") )
    __debugbreak();
  memset_0(v56, 0, sizeof(v56));
  Sys_ProfBeginNamedEvent(0xFFFFA500, "SetNextSnap-UpdateClients");
  LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals(localClientNum);
  v55 = LocalClientGlobals;
  LocalClientStatics = CgStatic::GetLocalClientStatics(localClientNum);
  v53 = LocalClientStatics;
  v51 = 0;
  if ( nextSnap->numClients > 0 )
  {
    v7 = 0i64;
    v52 = 0i64;
    v8 = "clientState->clientIndex doesn't index cls.maxClients\n\t%i not in [0, %i)";
    v9 = "!clientIndexProcessed[clientState->clientIndex]";
    while ( 1 )
    {
      _R14 = &nextSnap->clients[v7];
      if ( _R14->clientIndex >= (unsigned int)cls.maxClients )
      {
        LODWORD(characterInfo) = cls.maxClients;
        LODWORD(v48) = _R14->clientIndex;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 3219, ASSERT_TYPE_ASSERT, "(unsigned)( clientState->clientIndex ) < (unsigned)( cls.maxClients )", "clientState->clientIndex doesn't index cls.maxClients\n\t%i not in [0, %i)", v48, characterInfo) )
          __debugbreak();
        v9 = "!clientIndexProcessed[clientState->clientIndex]";
      }
      if ( v56[_R14->clientIndex] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 3222, ASSERT_TYPE_ASSERT, "(!clientIndexProcessed[clientState->clientIndex])", (const char *)&queryFormat, "!clientIndexProcessed[clientState->clientIndex]") )
        __debugbreak();
      clientIndex = _R14->clientIndex;
      v56[clientIndex] = 1;
      v12 = ((__int64 (__fastcall *)(CgStatic *, __int64, const char *, const char *))LocalClientStatics->GetClientInfo)(LocalClientStatics, clientIndex, v9, v8);
      _R15 = v12;
      *(_DWORD *)v12 = _R14->clientIndex;
      *(_DWORD *)(v12 + 140) = _R14->healthRatio;
      *(_BYTE *)(v12 + 188) = _R14->isBot;
      *(_BYTE *)(v12 + 152) = _R14->bountyCount;
      *(_DWORD *)(v12 + 156) = _R14->perkIconName;
      *(_DWORD *)(v12 + 160) = _R14->squadIndex;
      if ( !*(_QWORD *)(v12 + 192) || !*(_QWORD *)(v12 + 200) )
        break;
      rank = _R14->rank;
      if ( *(_DWORD *)(v12 + 104) != rank || *(_DWORD *)(v12 + 108) != _R14->prestige )
        goto LABEL_19;
LABEL_20:
      Core_strcpy((char *)(_R15 + 124), 9ui64, _R14->clanAbbrev);
      *(_BYTE *)(_R15 + 133) = _R14->clanTagType;
      *(_DWORD *)(_R15 + 120) = _R14->game_extrainfo;
      __asm
      {
        vmovups xmm0, xmmword ptr [r14+0E4h]
        vmovups xmmword ptr [r15+0A4h], xmm0
        vmovsd  xmm1, qword ptr [r14+0F4h]
        vmovsd  qword ptr [r15+0B4h], xmm1
      }
      if ( LocalClientGlobals->predictedPlayerState.clientNum == _R14->clientIndex )
      {
        v18 = DCONST_DVARINT_cg_forceCustomizationHead;
        if ( !DCONST_DVARINT_cg_forceCustomizationHead && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_forceCustomizationHead") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v18);
        integer = v18->current.integer;
        v20 = DCONST_DVARINT_cg_forceCustomizationBody;
        if ( !DCONST_DVARINT_cg_forceCustomizationBody && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_forceCustomizationBody") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v20);
        v21 = v20->current.integer;
        v22 = DCONST_DVARINT_cg_forceCustomizationViewhands;
        if ( !DCONST_DVARINT_cg_forceCustomizationViewhands && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_forceCustomizationViewhands") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v22);
        v23 = v22->current.integer;
        if ( integer >= 0 )
          *(_DWORD *)(_R15 + 164) = integer;
        if ( v21 >= 0 )
          *(_DWORD *)(_R15 + 168) = v21;
        if ( v23 >= 0 )
          *(_DWORD *)(_R15 + 172) = v23;
      }
      *(_BYTE *)(_R15 + 144) = _R14->isMLGSpectator;
      *(_BYTE *)(_R15 + 145) = _R14->isMLGFollower;
      *(_DWORD *)(_R15 + 148) = _R14->indexMLGFollower;
      v24 = 0x7FFFFFFFi64;
      name = _R14->name;
      if ( _R15 == -4 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
        __debugbreak();
      if ( _R14 == (clientState_t *)-120i64 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 182, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
        __debugbreak();
      do
      {
        v26 = name[_R15 + 4 - (_QWORD)_R14->name];
        v27 = *name++;
        if ( !v24-- )
          break;
        if ( v26 != v27 )
        {
          Core_strcpy((char *)(_R15 + 4), 0x24ui64, _R14->name);
          break;
        }
      }
      while ( v26 );
      LODWORD(fmt) = _R14->nameSuffix;
      Com_sprintf(dest, 0x40ui64, "%s#%i", _R14->name, fmt);
      v29 = 0x7FFFFFFFi64;
      v30 = dest;
      if ( _R15 == -40 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
        __debugbreak();
      do
      {
        v31 = v30[_R15 + 40 - (_QWORD)dest];
        v32 = *v30++;
        if ( !v29-- )
          break;
        if ( v31 != v32 )
        {
          Core_strcpy_truncate((char *)(_R15 + 40), 0x40ui64, dest);
          break;
        }
      }
      while ( v31 );
      v34 = _R14->clientIndex;
      if ( !prevSnap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 3185, ASSERT_TYPE_ASSERT, "(prevSnap)", (const char *)&queryFormat, "prevSnap") )
        __debugbreak();
      if ( v34 > 0xC8 )
      {
        LODWORD(checkCustomization) = 200;
        LODWORD(v48) = v34;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 3186, ASSERT_TYPE_ASSERT, "( 0 ) <= ( nextClientIndex ) && ( nextClientIndex ) <= ( 200 )", "nextClientIndex not in [0, MAX_CLIENTS_MP]\n\t%i not in [%i, %i]", v48, 0i64, checkCustomization) )
          __debugbreak();
      }
      v35 = 0;
      v36 = 0i64;
      numClients = prevSnap->numClients;
      if ( numClients <= 0 )
      {
LABEL_65:
        v39 = NULL;
      }
      else
      {
        clients = prevSnap->clients;
        while ( clients->clientIndex != v34 )
        {
          ++v35;
          ++v36;
          ++clients;
          if ( v36 >= numClients )
            goto LABEL_65;
        }
        v39 = &prevSnap->clients[v35];
      }
      if ( CG_CustomizationMP_HasAnyLatchedCustomization(localClientNum, _R14->clientIndex) && v39 && CG_SnapshotMP_AnyCustomizationModelChanged(v39, _R14) )
        CG_CustomizationMP_ResetCustomizationLatchForClient(localClientNum, _R14->clientIndex);
      v40 = _R14->clientIndex;
      v41 = CG_GetLocalClientGlobals((const LocalClientNum_t)v53->m_localClientNum);
      if ( !v41 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static_inline.h", 25, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
        __debugbreak();
      if ( v41->IsMP(v41) )
      {
        if ( (unsigned int)v40 >= v41[1].predictedPlayerState.rxvOmnvars[64].timeModified )
        {
          LODWORD(characterInfo) = v41[1].predictedPlayerState.rxvOmnvars[64].timeModified;
          LODWORD(v48) = v40;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_globals_mp_inline.h", 12, ASSERT_TYPE_ASSERT, "(unsigned)( characterIndex ) < (unsigned)( static_cast<int>( m_characterInfoCount ) )", "characterIndex doesn't index static_cast<int>( m_characterInfoCount )\n\t%i not in [0, %i)", v48, characterInfo) )
            __debugbreak();
        }
        v42 = (characterInfo_t *)(*(_QWORD *)&v41[1].predictedPlayerState.rxvOmnvars[62] + 14792 * v40);
      }
      else
      {
        v42 = CgGlobalsSP::GetCharacterInfo((CgGlobalsSP *)v41, v40);
      }
      v42->entityNum = _R14->clientIndex;
      v43 = _R14->clientIndex;
      if ( (unsigned int)(_R14->clientIndex + 0x8000) > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "short __cdecl truncate_cast_impl<short,int>(int)", "signed", (__int16)v43, "signed", _R14->clientIndex) )
        __debugbreak();
      v44 = 0i64;
      numEntities = nextSnap->numEntities;
      if ( numEntities <= 0 )
      {
LABEL_88:
        entities = NULL;
        if ( nextSnap->ps.clientNum != _R14->clientIndex )
          v42->speed = 0;
      }
      else
      {
        entities = nextSnap->entities;
        while ( entities->number != (_WORD)v43 )
        {
          if ( entities->number <= (__int16)v43 )
          {
            ++v44;
            ++entities;
            if ( v44 < numEntities )
              continue;
          }
          goto LABEL_88;
        }
        v42->speed = entities->lerp.u.player.moveSpeedForAnimBlend;
      }
      CG_SnapshotMP_ClientStateToCharacterInfo(localClientNum, _R14->clientIndex, (const clientInfo_t *)_R15, v39, _R14, entities, v42, 1);
      if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 2689, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION )") )
        __debugbreak();
      Mantle_UnpackAnimData(&_R14->compressedAnimData, &v42->animData);
      Tracer_SetDrawCounter(localClientNum, _R14->clientIndex, _R14->weaponShotCount);
      ++v51;
      v7 = ++v52;
      LocalClientStatics = v53;
      LocalClientGlobals = v55;
      v9 = "!clientIndexProcessed[clientState->clientIndex]";
      v8 = "clientState->clientIndex doesn't index cls.maxClients\n\t%i not in [0, %i)";
      if ( v51 >= nextSnap->numClients )
        goto LABEL_94;
    }
    LOWORD(rank) = _R14->rank;
LABEL_19:
    *(_DWORD *)(v12 + 104) = (__int16)rank;
    prestige = _R14->prestige;
    *(_DWORD *)(_R15 + 108) = prestige;
    *(_QWORD *)(_R15 + 112) = 0i64;
    *(_QWORD *)(_R15 + 200) = Com_GetRankDataMP(prestige + (__int16)rank, RANKTABLE_DISPLAYLEVEL);
    *(_QWORD *)(_R15 + 192) = Com_GetRankIcon(*(_DWORD *)(_R15 + 104), *(_DWORD *)(_R15 + 108));
    goto LABEL_20;
  }
LABEL_94:
  Sys_ProfEndNamedEvent();
}

/*
==============
CG_SnapshotMP_UpdateMLGSpectatorClientInfo
==============
*/
void CG_SnapshotMP_UpdateMLGSpectatorClientInfo(CgGlobalsMP *cgameGlob, LocalClientNum_t localClientNum, const CgSnapshotMP *snap)
{
  CgMLGSpectator *m_mlgSpectatorPtr; 
  int v7; 
  clientState_t *clients; 
  __int64 clientIndex; 
  unsigned __int8 m_isMLGSpectator; 
  unsigned __int8 isMLGSpectator; 
  __int64 v12; 
  __int64 v13; 
  __int64 v14; 
  int PlayerStateClientNum; 

  if ( !cgameGlob && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 2903, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  if ( !snap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 2904, ASSERT_TYPE_ASSERT, "(snap)", (const char *)&queryFormat, "snap") )
    __debugbreak();
  Sys_ProfBeginNamedEvent(0xFFBA55D3, "SetNextSnap-MLG");
  m_mlgSpectatorPtr = cgameGlob->m_mlgSpectatorPtr;
  PlayerStateClientNum = Game_GetPlayerStateClientNum(localClientNum);
  v7 = 0;
  if ( snap->numClients > 0 )
  {
    clients = snap->clients;
    do
    {
      clientIndex = clients->clientIndex;
      if ( (unsigned int)clientIndex >= cls.maxClients )
      {
        LODWORD(v13) = cls.maxClients;
        LODWORD(v12) = clients->clientIndex;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 2918, ASSERT_TYPE_ASSERT, "(unsigned)( clientIdx ) < (unsigned)( cls.maxClients )", "clientIdx doesn't index cls.maxClients\n\t%i not in [0, %i)", v12, v13) )
          __debugbreak();
      }
      if ( (_DWORD)clientIndex == cgameGlob->clientNum )
      {
        m_isMLGSpectator = cgameGlob->m_isMLGSpectator;
        isMLGSpectator = clients->isMLGSpectator;
        if ( m_isMLGSpectator != isMLGSpectator )
        {
          LODWORD(v14) = isMLGSpectator;
          LODWORD(v13) = m_isMLGSpectator;
          LODWORD(v12) = cgameGlob->clientNum;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 2923, ASSERT_TYPE_ASSERT, "( cgameGlob->m_isMLGSpectator == cs.isMLGSpectator )", "We should be set as an MLG spectator in the client state and the cg_t. Clientnum %d, %d != %d", v12, v13, v14) )
            __debugbreak();
        }
      }
      if ( CgMLGSpectator::IsClientLoadoutDirty(m_mlgSpectatorPtr, clientIndex) == 1 && PlayerStateClientNum == (_DWORD)clientIndex )
        LUI_NotifyMLGSpectatorLoadoutChanged(localClientNum, LUI_luaVM);
      CgMLGSpectator::SetMLGSpectatorClientInfo(m_mlgSpectatorPtr, clientIndex, &snap->mlgSpectatorClientInfo[clientIndex]);
      CgMLGSpectator::SetClientLoadoutDirty(m_mlgSpectatorPtr, clientIndex, 0);
      ++v7;
      ++clients;
    }
    while ( v7 < snap->numClients );
  }
  Sys_ProfEndNamedEvent();
}

/*
==============
CG_SnapshotMP_UpdateOmnvars
==============
*/
void CG_SnapshotMP_UpdateOmnvars(LocalClientNum_t localClientNum, const CgSnapshotMP *snap, const CgSnapshotMP *nextSnap)
{
  const CgSnapshotMP *v3; 
  LocalClientNum_t v5; 
  unsigned int v6; 
  unsigned int v7; 
  int ControllerFromClient; 
  unsigned int v9; 
  unsigned int v10; 
  const OmnvarData *rxvOmnvars; 
  char *v12; 
  const OmnvarDef *Def; 
  const OmnvarData *v14; 
  const OmnvarData *omnvars; 
  const OmnvarDef *v16; 
  OmnvarData *Data; 
  __int64 v18; 
  __int64 v19; 
  unsigned int v20; 
  bool v22; 
  unsigned int v24; 

  v3 = nextSnap;
  v5 = localClientNum;
  if ( !nextSnap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 2824, ASSERT_TYPE_ASSERT, "(nextSnap)", (const char *)&queryFormat, "nextSnap") )
    __debugbreak();
  Sys_ProfBeginNamedEvent(0xFF00FA9A, "SetNextSnap-UpdateOmnvars");
  v6 = BG_Omnvar_PerSnapCount();
  v24 = v6;
  v7 = BG_Omnvar_PerPlayerstateCount();
  v20 = v7;
  ControllerFromClient = CL_Mgr_GetControllerFromClient(v5);
  if ( snap && snap->ps.clientNum == v3->ps.clientNum && snap->ps.stats[3] == v3->ps.stats[3] && snap->ps.deltaTime == v3->ps.deltaTime )
  {
    v22 = 0;
  }
  else
  {
    LUI_NotifyPlayerstateClientChanged(v5, LUI_luaVM);
    v22 = 1;
  }
  v9 = 0;
  v10 = 0;
  if ( v7 )
  {
    rxvOmnvars = v3->ps.rxvOmnvars;
    v12 = (char *)((char *)snap - (char *)v3);
    do
    {
      Def = BG_Omnvar_GetDef(v10 + v24);
      if ( v10 >= 0x50 )
      {
        LODWORD(v19) = 80;
        LODWORD(v18) = v10;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 2845, ASSERT_TYPE_ASSERT, "(unsigned)( omnvarIdx ) < (unsigned)( ( sizeof( *array_counter( nextSnap->ps.rxvOmnvars ) ) + 0 ) )", "omnvarIdx doesn't index nextSnap->ps.rxvOmnvars\n\t%i not in [0, %i)", v18, v19) )
          __debugbreak();
      }
      v14 = (const OmnvarData *)&v12[(_QWORD)rxvOmnvars];
      if ( !snap )
        v14 = NULL;
      CG_SnapshotMP_PrintOmnvarChanged(ControllerFromClient, Def, v14, rxvOmnvars);
      if ( (Def->flags & 8) == 0 )
        CG_SnapshotMP_NotifyOmnvarChanged(ControllerFromClient, v22, Def, v14, rxvOmnvars);
      ++v10;
      ++rxvOmnvars;
      v12 = (char *)((char *)snap - (char *)v3);
    }
    while ( v10 < v20 );
    v3 = nextSnap;
    v6 = v24;
    v5 = localClientNum;
  }
  if ( v6 )
  {
    omnvars = v3->omnvars;
    do
    {
      v16 = BG_Omnvar_GetDef(v9);
      if ( v9 >= 0x1F4 )
      {
        LODWORD(v19) = 500;
        LODWORD(v18) = v9;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 2870, ASSERT_TYPE_ASSERT, "(unsigned)( omnvarIdx ) < (unsigned)( ( sizeof( *array_counter( nextSnap->omnvars ) ) + 0 ) )", "omnvarIdx doesn't index ARRAY_COUNT( nextSnap->omnvars )\n\t%i not in [0, %i)", v18, v19) )
          __debugbreak();
      }
      Data = CG_Omnvar_GetData(v5, v9);
      CG_SnapshotMP_PrintOmnvarChanged(ControllerFromClient, v16, Data, omnvars);
      if ( (v16->flags & 8) == 0 )
      {
        CG_SnapshotMP_NotifyOmnvarChanged(ControllerFromClient, v22, v16, Data, omnvars);
        *Data = *omnvars;
      }
      ++v9;
      ++omnvars;
      v5 = localClientNum;
    }
    while ( v9 < v6 );
  }
  CG_Omnvar_UpdatePmoveValues(localClientNum);
  Sys_ProfEndNamedEvent();
}

/*
==============
CgSnapshotMP::GetPlayerState
==============
*/
playerState_s *CgSnapshotMP::GetPlayerState(CgSnapshotMP *this, const LocalClientNum_t localClientNum)
{
  return &this->ps;
}

/*
==============
CgSnapshotMP::GetServerPing
==============
*/
__int64 CgSnapshotMP::GetServerPing(CgSnapshotMP *this)
{
  return (unsigned int)this->ping;
}


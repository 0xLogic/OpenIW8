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
  __int64 v6; 
  team_t team; 
  int dualWielding; 
  CgWeaponSystem *WeaponSystem; 
  int v13; 
  int v14; 
  CgWeaponMap *v15; 
  int modelindex; 
  int v17; 
  int v18; 
  int v19; 
  int v20; 
  int v21; 
  int v22; 
  int v23; 
  int v24; 
  int v25; 
  int v26; 
  int v27; 
  int v28; 
  int v29; 
  int v30; 
  int v31; 
  int v32; 
  int v33; 
  int v34; 
  int enableVehicleOccupancyAnimations; 
  unsigned int AnimsetIndexBySuit; 
  XAnimOwner v37; 
  unsigned int carryObjectIndex; 
  animScriptParachuteState_t skydiveAnimState; 
  bool v40; 
  animScriptVehicleSeat_t seat; 

  v6 = localClientNum;
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
  WeaponSystem = CgWeaponSystem::GetWeaponSystem((const LocalClientNum_t)v6);
  if ( !WeaponSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 2566, ASSERT_TYPE_ASSERT, "(weaponSystem)", (const char *)&queryFormat, "weaponSystem") )
    __debugbreak();
  CgWeaponSystem::ChargedWeaponUpdateChargeStateFromSnapshot(WeaponSystem, entityNum, &characterState->chargedWeaponInfo);
  v13 = 0;
  characterInfo->suitIndex = characterState->suitIndex;
  if ( es )
    v14 = *(_DWORD *)&es->clientLinkInfo & 0x7FF;
  else
    v14 = 0;
  characterInfo->linkedEntNum = v14;
  if ( !CgWeaponMap::ms_instance[v6] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
    __debugbreak();
  v15 = CgWeaponMap::ms_instance[v6];
  characterInfo->serverDobjHeldWeapon = *BgWeaponMap::GetWeapon(v15, characterState->serverDobjHeldWeapon);
  characterInfo->serverDobjTurretWeapon = *BgWeaponMap::GetWeapon(v15, characterState->serverDobjTurretWeapon);
  characterInfo->isFemale = 0;
  modelindex = characterState->modelindex;
  if ( characterInfo->modelIndex != modelindex )
  {
    characterInfo->modelIndex = modelindex;
    characterInfo->modelIndexChanged = 1;
  }
  v17 = characterState->attachModelIndex[0];
  if ( characterInfo->attachModelIndex[0] != v17 )
  {
    characterInfo->attachModelIndex[0] = v17;
    characterInfo->attachModelIndexChanged[0] = 1;
  }
  v18 = characterState->attachTagIndex[0];
  if ( characterInfo->attachTagIndex[0] != v18 )
  {
    characterInfo->attachTagIndex[0] = v18;
    characterInfo->attachTagIndexChanged[0] = 1;
  }
  v19 = characterState->attachModelIndex[1];
  if ( characterInfo->attachModelIndex[1] != v19 )
  {
    characterInfo->attachModelIndex[1] = v19;
    characterInfo->attachModelIndexChanged[1] = 1;
  }
  v20 = characterState->attachTagIndex[1];
  if ( characterInfo->attachTagIndex[1] != v20 )
  {
    characterInfo->attachTagIndex[1] = v20;
    characterInfo->attachTagIndexChanged[1] = 1;
  }
  v21 = characterState->attachModelIndex[2];
  if ( characterInfo->attachModelIndex[2] != v21 )
  {
    characterInfo->attachModelIndex[2] = v21;
    characterInfo->attachModelIndexChanged[2] = 1;
  }
  v22 = characterState->attachTagIndex[2];
  if ( characterInfo->attachTagIndex[2] != v22 )
  {
    characterInfo->attachTagIndex[2] = v22;
    characterInfo->attachTagIndexChanged[2] = 1;
  }
  v23 = characterState->attachModelIndex[3];
  if ( characterInfo->attachModelIndex[3] != v23 )
  {
    characterInfo->attachModelIndex[3] = v23;
    characterInfo->attachModelIndexChanged[3] = 1;
  }
  v24 = characterState->attachTagIndex[3];
  if ( characterInfo->attachTagIndex[3] != v24 )
  {
    characterInfo->attachTagIndex[3] = v24;
    characterInfo->attachTagIndexChanged[3] = 1;
  }
  v25 = characterState->attachModelIndex[4];
  if ( characterInfo->attachModelIndex[4] != v25 )
  {
    characterInfo->attachModelIndex[4] = v25;
    characterInfo->attachModelIndexChanged[4] = 1;
  }
  v26 = characterState->attachTagIndex[4];
  if ( characterInfo->attachTagIndex[4] != v26 )
  {
    characterInfo->attachTagIndex[4] = v26;
    characterInfo->attachTagIndexChanged[4] = 1;
  }
  v27 = characterState->attachModelIndex[5];
  if ( characterInfo->attachModelIndex[5] != v27 )
  {
    characterInfo->attachModelIndex[5] = v27;
    characterInfo->attachModelIndexChanged[5] = 1;
  }
  v28 = characterState->attachTagIndex[5];
  if ( characterInfo->attachTagIndex[5] != v28 )
  {
    characterInfo->attachTagIndex[5] = v28;
    characterInfo->attachTagIndexChanged[5] = 1;
  }
  v29 = characterState->attachModelIndex[6];
  if ( characterInfo->attachModelIndex[6] != v29 )
  {
    characterInfo->attachModelIndex[6] = v29;
    characterInfo->attachModelIndexChanged[6] = 1;
  }
  v30 = characterState->attachTagIndex[6];
  if ( characterInfo->attachTagIndex[6] != v30 )
  {
    characterInfo->attachTagIndex[6] = v30;
    characterInfo->attachTagIndexChanged[6] = 1;
  }
  v31 = characterState->attachModelIndex[7];
  if ( characterInfo->attachModelIndex[7] != v31 )
  {
    characterInfo->attachModelIndex[7] = v31;
    characterInfo->attachModelIndexChanged[7] = 1;
  }
  v32 = characterState->attachTagIndex[7];
  if ( characterInfo->attachTagIndex[7] != v32 )
  {
    characterInfo->attachTagIndex[7] = v32;
    characterInfo->attachTagIndexChanged[7] = 1;
  }
  v33 = characterState->attachModelIndex[8];
  if ( characterInfo->attachModelIndex[8] != v33 )
  {
    characterInfo->attachModelIndex[8] = v33;
    characterInfo->attachModelIndexChanged[8] = 1;
  }
  v34 = characterState->attachTagIndex[8];
  if ( characterInfo->attachTagIndex[8] != v34 )
  {
    characterInfo->attachTagIndex[8] = v34;
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
  LOBYTE(v13) = characterState->enableVehicleOccupancyAnimations;
  characterInfo->enableVehicleOccupancyAnimations = v13;
  if ( enableVehicleOccupancyAnimations != v13 )
    characterInfo->dobjDirty = 1;
  characterInfo->animLinkedToType = characterState->animLinkedToType;
  characterInfo->doNotSimulateTracers = characterState->doNotSimulateTracers;
  characterInfo->isWeaponSmoking[0] = characterState->isWeaponSmoking[0];
  characterInfo->isWeaponSmoking[1] = characterState->isWeaponSmoking[1];
  if ( PlayerASM_IsEnabled() )
  {
    AnimsetIndexBySuit = BG_PlayerASM_GetAnimsetIndexBySuit(characterInfo->suitIndex);
    LOBYTE(v37) = 1;
    BG_PlayersASM_ResetSmallAnimTree(AnimsetIndexBySuit, v37, characterInfo);
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
  v40 = BG_SkydiveAnimStateNeedParachuteModel((const animScriptParachuteState_t)characterState->skydiveAnimState);
  if ( BG_SkydiveAnimStateNeedParachuteModel(skydiveAnimState) != v40 )
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
  CG_GameInterface_SnapshotMP_AgentStateToCharacterInfo((const LocalClientNum_t)v6, entityNum, characterState, characterInfo, checkCustomization);
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
  unsigned __int64 v8; 
  __int64 v9; 
  CgGlobalsMP *LocalClientGlobals; 
  CgWeaponSystem *WeaponSystem; 
  team_t team; 
  int dualWielding; 
  const SuitDef *SuitDef; 
  int v15; 
  __int16 linkEnt; 
  int v17; 
  CgWeaponMap *v18; 
  int modelindex; 
  int v20; 
  int v21; 
  int v22; 
  int v23; 
  int v24; 
  int v25; 
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
  int suitIndex; 
  const SuitDef *v39; 
  const ScriptableDef *scriptableDef; 
  const dvar_t *v41; 
  const ScriptableDef *v42; 
  const dvar_t *v43; 
  const dvar_t *v44; 
  int enableVehicleOccupancyAnimations; 
  unsigned int AnimsetIndexBySuit; 
  XAnimOwner v47; 
  unsigned int carryObjectIndex; 
  animScriptParachuteState_t skydiveAnimState; 
  bool v50; 
  animScriptVehicleSeat_t seat; 
  int v52; 
  __int64 v53; 
  __int64 v54; 

  v8 = (unsigned int)entityNum;
  v9 = localClientNum;
  if ( !characterInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 2366, ASSERT_TYPE_ASSERT, "(characterInfo)", (const char *)&queryFormat, "characterInfo") )
    __debugbreak();
  if ( !characterState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 2367, ASSERT_TYPE_ASSERT, "(characterState)", (const char *)&queryFormat, "characterState") )
    __debugbreak();
  LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals((const LocalClientNum_t)v9);
  WeaponSystem = CgWeaponSystem::GetWeaponSystem((const LocalClientNum_t)v9);
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
  CgWeaponSystem::ChargedWeaponUpdateChargeStateFromSnapshot(WeaponSystem, v8, &characterState->chargedWeaponInfo);
  SuitDef = BG_GetSuitDef(characterInfo->suitIndex);
  if ( !SuitDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 2381, ASSERT_TYPE_ASSERT, "(oldSuit)", (const char *)&queryFormat, "oldSuit") )
    __debugbreak();
  if ( LocalClientGlobals->predictedPlayerState.clientNum == (_DWORD)v8 )
  {
    characterInfo->suitIndex = LocalClientGlobals->predictedPlayerState.suitIndex;
    v15 = 0;
    linkEnt = LocalClientGlobals->predictedPlayerState.linkEnt;
    if ( linkEnt == 2047 )
      v17 = 0;
    else
      v17 = linkEnt + 1;
    characterInfo->linkedEntNum = v17;
    characterInfo->velocity = LocalClientGlobals->predictedPlayerState.velocity;
  }
  else
  {
    characterInfo->suitIndex = characterState->suitIndex;
    v15 = 0;
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
  if ( !CgWeaponMap::ms_instance[v9] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
    __debugbreak();
  v18 = CgWeaponMap::ms_instance[v9];
  characterInfo->serverDobjHeldWeapon = *BgWeaponMap::GetWeapon(v18, characterState->serverDobjHeldWeapon);
  characterInfo->serverDobjTurretWeapon = *BgWeaponMap::GetWeapon(v18, characterState->serverDobjTurretWeapon);
  modelindex = characterState->modelindex;
  if ( characterInfo->modelIndex != modelindex )
  {
    characterInfo->modelIndex = modelindex;
    characterInfo->modelIndexChanged = 1;
  }
  v20 = characterState->attachModelIndex[0];
  if ( characterInfo->attachModelIndex[0] != v20 )
  {
    characterInfo->attachModelIndex[0] = v20;
    characterInfo->attachModelIndexChanged[0] = 1;
  }
  v21 = characterState->attachTagIndex[0];
  if ( characterInfo->attachTagIndex[0] != v21 )
  {
    characterInfo->attachTagIndex[0] = v21;
    characterInfo->attachTagIndexChanged[0] = 1;
  }
  v22 = characterState->attachModelIndex[1];
  if ( characterInfo->attachModelIndex[1] != v22 )
  {
    characterInfo->attachModelIndex[1] = v22;
    characterInfo->attachModelIndexChanged[1] = 1;
  }
  v23 = characterState->attachTagIndex[1];
  if ( characterInfo->attachTagIndex[1] != v23 )
  {
    characterInfo->attachTagIndex[1] = v23;
    characterInfo->attachTagIndexChanged[1] = 1;
  }
  v24 = characterState->attachModelIndex[2];
  if ( characterInfo->attachModelIndex[2] != v24 )
  {
    characterInfo->attachModelIndex[2] = v24;
    characterInfo->attachModelIndexChanged[2] = 1;
  }
  v25 = characterState->attachTagIndex[2];
  if ( characterInfo->attachTagIndex[2] != v25 )
  {
    characterInfo->attachTagIndex[2] = v25;
    characterInfo->attachTagIndexChanged[2] = 1;
  }
  v26 = characterState->attachModelIndex[3];
  if ( characterInfo->attachModelIndex[3] != v26 )
  {
    characterInfo->attachModelIndex[3] = v26;
    characterInfo->attachModelIndexChanged[3] = 1;
  }
  v27 = characterState->attachTagIndex[3];
  if ( characterInfo->attachTagIndex[3] != v27 )
  {
    characterInfo->attachTagIndex[3] = v27;
    characterInfo->attachTagIndexChanged[3] = 1;
  }
  v28 = characterState->attachModelIndex[4];
  if ( characterInfo->attachModelIndex[4] != v28 )
  {
    characterInfo->attachModelIndex[4] = v28;
    characterInfo->attachModelIndexChanged[4] = 1;
  }
  v29 = characterState->attachTagIndex[4];
  if ( characterInfo->attachTagIndex[4] != v29 )
  {
    characterInfo->attachTagIndex[4] = v29;
    characterInfo->attachTagIndexChanged[4] = 1;
  }
  v30 = characterState->attachModelIndex[5];
  if ( characterInfo->attachModelIndex[5] != v30 )
  {
    characterInfo->attachModelIndex[5] = v30;
    characterInfo->attachModelIndexChanged[5] = 1;
  }
  v31 = characterState->attachTagIndex[5];
  if ( characterInfo->attachTagIndex[5] != v31 )
  {
    characterInfo->attachTagIndex[5] = v31;
    characterInfo->attachTagIndexChanged[5] = 1;
  }
  v32 = characterState->attachModelIndex[6];
  if ( characterInfo->attachModelIndex[6] != v32 )
  {
    characterInfo->attachModelIndex[6] = v32;
    characterInfo->attachModelIndexChanged[6] = 1;
  }
  v33 = characterState->attachTagIndex[6];
  if ( characterInfo->attachTagIndex[6] != v33 )
  {
    characterInfo->attachTagIndex[6] = v33;
    characterInfo->attachTagIndexChanged[6] = 1;
  }
  v34 = characterState->attachModelIndex[7];
  if ( characterInfo->attachModelIndex[7] != v34 )
  {
    characterInfo->attachModelIndex[7] = v34;
    characterInfo->attachModelIndexChanged[7] = 1;
  }
  v35 = characterState->attachTagIndex[7];
  if ( characterInfo->attachTagIndex[7] != v35 )
  {
    characterInfo->attachTagIndex[7] = v35;
    characterInfo->attachTagIndexChanged[7] = 1;
  }
  v36 = characterState->attachModelIndex[8];
  if ( characterInfo->attachModelIndex[8] != v36 )
  {
    characterInfo->attachModelIndex[8] = v36;
    characterInfo->attachModelIndexChanged[8] = 1;
  }
  v37 = characterState->attachTagIndex[8];
  if ( characterInfo->attachTagIndex[8] != v37 )
  {
    characterInfo->attachTagIndex[8] = v37;
    characterInfo->attachTagIndexChanged[8] = 1;
  }
  suitIndex = characterInfo->suitIndex;
  characterInfo->attachModelIsOnBack = characterState->attachModelIsOnBack;
  v39 = BG_GetSuitDef(suitIndex);
  if ( !SuitDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 2434, ASSERT_TYPE_ASSERT, "(oldSuit)", (const char *)&queryFormat, "oldSuit") )
    __debugbreak();
  scriptableDef = v39->scriptableDef;
  if ( scriptableDef != SuitDef->scriptableDef )
    goto LABEL_112;
  if ( (unsigned int)v9 >= 2 )
  {
    LODWORD(v53) = v9;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_client_link.h", 28, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ( sizeof( *array_counter( g_scriptableClEntityLinkBound ) ) + 0 ) )", "localClientNum doesn't index g_scriptableClEntityLinkBound\n\t%i not in [0, %i)", v53, 2) )
      __debugbreak();
  }
  if ( (unsigned int)v8 >= 0x800 )
  {
    LODWORD(v54) = 2048;
    LODWORD(v53) = v8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v53, v54) )
      __debugbreak();
  }
  scriptableDef = v39->scriptableDef;
  if ( (scriptableDef != NULL) != (((0x80000000 >> (v8 & 0x1F)) & g_scriptableClEntityLinkBound[v9].array[v8 >> 5]) != 0) )
  {
LABEL_112:
    if ( ScriptableCl_UpdateReservedScriptableEntityBinding((const LocalClientNum_t)v9, v8, scriptableDef) == Started )
      Com_Printf(14, "CG_SnapshotMP_ClientStateToCharacterInfo: Failed to bind scriptable '%s' to entity %i. Playerstate could be out of sync with the world, will try again.\n", v39->scriptableDef->name, (unsigned int)v8);
  }
  v41 = DCONST_DVARBOOL_scriptable_debug_determinism;
  if ( !DCONST_DVARBOOL_scriptable_debug_determinism && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "scriptable_debug_determinism") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v41);
  if ( v41->current.enabled )
  {
    v42 = v39->scriptableDef;
    if ( v42 )
      ScriptableCl_CheckBoundToReservedDef((const LocalClientNum_t)v9, v8, v42);
  }
  v43 = DVARBOOL_cg_prematch_playerVisbilityRequiresCharacterModels;
  if ( !DVARBOOL_cg_prematch_playerVisbilityRequiresCharacterModels && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_prematch_playerVisbilityRequiresCharacterModels") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v43);
  if ( v43->current.enabled && CG_MainMP_IsPrematchCountdown((const LocalClientNum_t)v9) )
    goto LABEL_98;
  v44 = DCONST_DVARBOOL_cg_customizationMP_devNoLatch;
  if ( !DCONST_DVARBOOL_cg_customizationMP_devNoLatch && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_customizationMP_devNoLatch") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v44);
  if ( v44->current.enabled )
LABEL_98:
    CG_CustomizationMP_ResetCustomizationLatchForClient((const LocalClientNum_t)v9, v8);
  characterInfo->offhandShieldDeployed = characterState->offhandShieldDeployed;
  characterInfo->isUsingWeaponAltMode = characterState->isUsingWeaponAltMode;
  characterInfo->hybridScopeState = characterState->hybridScopeState;
  characterInfo->usingNVG = characterState->usingNVG;
  characterInfo->isOnWall = characterState->isOnWall;
  characterInfo->isScriptedSceneAnim = characterState->isScriptedSceneAnim;
  characterInfo->mantleSpeedAnimCond = characterState->mantleSpeedAnimCond;
  enableVehicleOccupancyAnimations = characterInfo->enableVehicleOccupancyAnimations;
  LOBYTE(v15) = characterState->enableVehicleOccupancyAnimations;
  characterInfo->enableVehicleOccupancyAnimations = v15;
  if ( enableVehicleOccupancyAnimations != v15 )
    characterInfo->dobjDirty = 1;
  characterInfo->animLinkedToType = characterState->animLinkedToType;
  characterInfo->doNotSimulateTracers = characterState->doNotSimulateTracers;
  characterInfo->mount = characterState->mount;
  characterInfo->prevHeightOffset = characterInfo->nextHeightOffset;
  characterInfo->nextHeightOffset = characterState->heightOffset;
  characterInfo->isWeaponSmoking[0] = characterState->isWeaponSmoking[0];
  characterInfo->isWeaponSmoking[1] = characterState->isWeaponSmoking[1];
  if ( PlayerASM_IsEnabled() )
  {
    AnimsetIndexBySuit = BG_PlayerASM_GetAnimsetIndexBySuit(characterInfo->suitIndex);
    LOBYTE(v47) = 1;
    BG_PlayersASM_ResetAnimTree(AnimsetIndexBySuit, CG_MainMP_AllocXAnimClient, v47, characterInfo);
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
  v50 = BG_SkydiveAnimStateNeedParachuteModel((const animScriptParachuteState_t)characterState->skydiveAnimState);
  if ( BG_SkydiveAnimStateNeedParachuteModel(skydiveAnimState) != v50 )
    characterInfo->dobjDirty = 1;
  characterInfo->skydiveAnimState = characterState->skydiveAnimState;
  seat = characterInfo->vehicleAnimation.seat;
  if ( characterState->vehicleAnimStateSeat != seat )
  {
    characterInfo->dobjDirty = 1;
    characterInfo->vehicleAnimation.prevSeat = seat;
    characterInfo->vehicleAnimation.seat = characterState->vehicleAnimStateSeat;
  }
  v52 = *(_DWORD *)&characterInfo->nextDoorState[0].owner;
  *(double *)&characterInfo->prevDoorState[0].index = *(double *)&characterInfo->nextDoorState[0].index;
  *(_DWORD *)&characterInfo->prevDoorState[0].owner = v52;
  *(double *)&characterInfo->nextDoorState[0].index = *(double *)&characterState->doorState[0].index;
  *(_DWORD *)&characterInfo->nextDoorState[0].owner = *(_DWORD *)&characterState->doorState[0].owner;
  characterInfo->prevDoorState[1] = characterInfo->nextDoorState[1];
  characterInfo->nextDoorState[1] = characterState->doorState[1];
  characterInfo->lastStandReviving = characterState->lastStandReviving;
  characterInfo->lastStandSelfReviving = characterState->lastStandSelfReviving;
  characterInfo->isNearEnvironmentCollision = characterState->isNearEnvironmentCollision;
  CG_GameInterface_SnapshotMP_ClientStateToCharacterInfo((const LocalClientNum_t)v9, v8, clientInfo, characterState, characterInfo, checkCustomization);
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
  centity_t *Entity; 
  __int64 numEntities; 
  __int64 v9; 
  entityState_t *entities; 
  int number; 
  trajectory_t *p_apos; 
  float v13; 
  float v14; 
  unsigned int v15; 
  unsigned int v16; 
  unsigned int v17; 
  float *v18; 
  float v19; 
  float v20; 
  float v21; 

  if ( (corpseCent->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 696, ASSERT_TYPE_ASSERT, "(CENextValid( corpseCent ))", (const char *)&queryFormat, "CENextValid( corpseCent )") )
    __debugbreak();
  if ( corpseCent == (centity_t *)-400i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 1990, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
    __debugbreak();
  if ( ((corpseCent->nextState.eType - 2) & 0xFFEF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 697, ASSERT_TYPE_ASSERT, "(BG_IsPlayerOrAgentCorpseEntity( &corpseCent->nextState ))", (const char *)&queryFormat, "BG_IsPlayerOrAgentCorpseEntity( &corpseCent->nextState )") )
    __debugbreak();
  clientNum = (unsigned int)corpseCent->nextState.clientNum;
  if ( (_DWORD)clientNum == prevSnap->ps.clientNum )
  {
    Entity = CG_GetEntity(localClientNum, clientNum);
    corpseCent->prevState.pos = Entity->prevState.pos;
    corpseCent->prevState.apos = Entity->prevState.apos;
  }
  else
  {
    numEntities = prevSnap->numEntities;
    if ( numEntities <= 0 )
    {
LABEL_17:
      Com_PrintError(14, "FixupCorpseTrajectory: Failed to find corpse %i owner entity %i in previous snapshot for smooth interpolation\n", (unsigned int)corpseCent->nextState.number, clientNum);
    }
    else
    {
      v9 = 0i64;
      entities = prevSnap->entities;
      while ( 1 )
      {
        number = entities->number;
        if ( (_DWORD)clientNum == number )
          break;
        if ( (int)clientNum >= number )
        {
          ++v9;
          ++entities;
          if ( v9 < numEntities )
            continue;
        }
        goto LABEL_17;
      }
      if ( (corpseCent->nextState.eType != ET_PLAYER_CORPSE || (LOBYTE(corpseCent->nextState.lerp.u.vehicle.bodyPitch) & 1) == 0) && !BGMovingPlatforms::IsEntityOnMovingPlatform(entities) )
      {
        *(__m256i *)&corpseCent->prevState.pos.trType = *(__m256i *)&entities->lerp.pos.trType;
        p_apos = &corpseCent->prevState.apos;
        corpseCent->prevState.pos.trDelta.v[2] = entities->lerp.pos.trDelta.v[2];
        *(__m256i *)&corpseCent->prevState.apos.trType = *(__m256i *)&entities->lerp.apos.trType;
        corpseCent->prevState.apos.trDelta.v[2] = entities->lerp.apos.trDelta.v[2];
        if ( BG_IsCharacterEntity(entities) )
        {
          if ( corpseCent == (centity_t *)-328i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared_inline.h", 107, ASSERT_TYPE_ASSERT, "(traj)", (const char *)&queryFormat, "traj") )
            __debugbreak();
          if ( p_apos->trType == TR_LINEAR_STOP_SECURE )
          {
            v18 = &v19;
            LODWORD(v21) = LODWORD(corpseCent->prevState.apos.trBase.v[1]) ^ s_trbase_aab_Z ^ LODWORD(corpseCent->prevState.apos.trBase.v[2]);
            LODWORD(v20) = LODWORD(corpseCent->prevState.apos.trBase.v[0]) ^ LODWORD(corpseCent->prevState.apos.trBase.v[1]) ^ s_trbase_aab_Y;
            LODWORD(v19) = LODWORD(corpseCent->prevState.apos.trBase.v[0]) ^ ~s_trbase_aab_X;
            memset(&v18, 0, sizeof(v18));
            *(float *)&v18 = v19;
            if ( (LODWORD(v19) & 0x7F800000) == 2139095040 || (*(float *)&v18 = v20, (LODWORD(v20) & 0x7F800000) == 2139095040) || (*(float *)&v18 = v21, (LODWORD(v21) & 0x7F800000) == 2139095040) )
            {
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared_inline.h", 74, ASSERT_TYPE_SANITY, "( !IS_NAN( ( to )[0] ) && !IS_NAN( ( to )[1] ) && !IS_NAN( ( to )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( to )[0] ) && !IS_NAN( ( to )[1] ) && !IS_NAN( ( to )[2] )", v18) )
                __debugbreak();
            }
          }
          else
          {
            v20 = corpseCent->prevState.apos.trBase.v[1];
          }
          v13 = 0.0;
          v14 = 0.0;
          v19 = 0.0;
          v21 = 0.0;
          if ( corpseCent == (centity_t *)-328i64 )
          {
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared_inline.h", 82, ASSERT_TYPE_ASSERT, "(traj)", (const char *)&queryFormat, "traj") )
              __debugbreak();
            v13 = v19;
            v14 = v21;
          }
          if ( p_apos->trType == TR_LINEAR_STOP_SECURE )
          {
            *(float *)&v18 = v13;
            if ( (LODWORD(v13) & 0x7F800000) == 2139095040 || (*(float *)&v18 = v20, (LODWORD(v20) & 0x7F800000) == 2139095040) || (*(float *)&v18 = v14, (LODWORD(v14) & 0x7F800000) == 2139095040) )
            {
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\q_shared_inline.h", 24, ASSERT_TYPE_SANITY, "( !IS_NAN( ( from )[0] ) && !IS_NAN( ( from )[1] ) && !IS_NAN( ( from )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( from )[0] ) && !IS_NAN( ( from )[1] ) && !IS_NAN( ( from )[2] )", v18) )
                __debugbreak();
            }
            v15 = LODWORD(v19) ^ ~s_trbase_aab_X;
            v16 = s_trbase_aab_Y ^ v15 ^ LODWORD(v20);
            v17 = s_trbase_aab_Z ^ v16 ^ LODWORD(v21);
            LODWORD(corpseCent->prevState.apos.trBase.v[0]) = v15;
            LODWORD(corpseCent->prevState.apos.trBase.v[2]) = v17;
            LODWORD(corpseCent->prevState.apos.trBase.v[1]) = v16;
            corpseCent->prevState.apos.trDelta.v[0] = 0.0;
            memset(&v18, 0, sizeof(v18));
            corpseCent->prevState.apos.trDelta.v[2] = 0.0;
          }
          else
          {
            corpseCent->prevState.apos.trBase.v[0] = v13;
            corpseCent->prevState.apos.trBase.v[1] = v20;
            corpseCent->prevState.apos.trBase.v[2] = v14;
            corpseCent->prevState.apos.trDelta.v[0] = 0.0;
            corpseCent->prevState.apos.trDelta.v[2] = 0.0;
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
  const char *v10; 
  char *model; 
  int v12; 
  int v13; 
  bool *attachTagIndexChanged; 
  char *v15; 
  __int64 v16; 
  int *attachModelIndex; 
  AgentAttachModelData *attachModels; 
  unsigned int AttachModel; 
  const char *v20; 
  char *v21; 
  int v22; 
  int v23; 
  __int64 (__fastcall *v24)(CGCorpseInfoMP *, _QWORD); 
  unsigned int AttachTag; 
  const char *v26; 
  unsigned int number; 
  unsigned int v28; 
  unsigned int v29; 
  XAnim_s *Anims; 
  __int64 v31; 
  __int64 v32; 
  CGCorpseInfoMP *corpseInfoa; 

  if ( !corpseEntity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 577, ASSERT_TYPE_ASSERT, "(corpseEntity)", (const char *)&queryFormat, "corpseEntity") )
    __debugbreak();
  if ( !corpseEntityState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 578, ASSERT_TYPE_ASSERT, "(corpseEntityState)", (const char *)&queryFormat, "corpseEntityState") )
    __debugbreak();
  if ( !corpseInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 579, ASSERT_TYPE_ASSERT, "(corpseInfo)", (const char *)&queryFormat, "corpseInfo") )
    __debugbreak();
  corpseInfo->ci.infoValid = 1;
  corpseInfo->ci.nextValid = 1;
  corpseInfo->ci.leftStickInputInterpolated = 0i64;
  corpseInfo->ci.rightStickInputInterpolated = 0i64;
  *(_QWORD *)&corpseInfo->ci.skydivePitchInterpolated = 0i64;
  if ( srcCharacter && srcCharacter->infoValid )
  {
    corpseInfo->ci.deltaLerpMoveDir = srcCharacter->deltaLerpMoveDir;
    corpseInfo->ci.lerpMoveDir = srcCharacter->lerpMoveDir;
    if ( PlayerASM_IsEnabled() )
      BG_PlayerASM_UpdateAngles(srcCharacter->playerASMLocomotion.lerpVelocityDir, &corpseInfo->ci);
    corpseInfo->ci.legs = srcCharacter->legs;
    corpseInfo->ci.torso = srcCharacter->torso;
    corpseInfo->ci.execution = srcCharacter->execution;
    corpseInfo->ci.executionStance = srcCharacter->executionStance;
    executionStartTime = srcCharacter->executionStartTime;
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
  corpseInfo->ci.modelIndexChanged = 0;
  ModelIndex = LerpEntityStateAgentCorpse::GetModelIndex((LerpEntityStateAgentCorpse *)&corpseEntityState->lerp.u);
  corpseInfo->ci.modelIndex = ModelIndex;
  v10 = (const char *)(*(__int64 (__fastcall **)(CGCorpseInfoMP *, _QWORD))(*(_QWORD *)corpseInfoa->customization.modelIndex + 16i64))(corpseInfoa, ModelIndex);
  model = corpseInfo->ci.model;
  do
  {
    v12 = (unsigned __int8)model[v10 - corpseInfo->ci.model];
    v13 = (unsigned __int8)*model - v12;
    if ( v13 )
      break;
    ++model;
  }
  while ( v12 );
  if ( v13 )
  {
    Core_strcpy(corpseInfo->ci.model, 0x40ui64, v10);
    corpseInfo->ci.dobjDirty = 1;
  }
  attachTagIndexChanged = corpseInfo->ci.attachTagIndexChanged;
  v15 = corpseInfo->ci.attachTagNames[0];
  v16 = 8i64;
  attachModelIndex = corpseInfo->ci.attachModelIndex;
  attachModels = corpseEntityState->lerp.u.agentCorpse.attachModels;
  do
  {
    *(attachTagIndexChanged - 9) = 0;
    AttachModel = AgentAttachModelData::GetAttachModel(attachModels);
    *attachModelIndex = AttachModel;
    v20 = (const char *)(*(__int64 (__fastcall **)(CGCorpseInfoMP *, _QWORD))(*(_QWORD *)corpseInfoa->customization.modelIndex + 16i64))(corpseInfoa, AttachModel);
    v21 = v15 - 576;
    do
    {
      v22 = (unsigned __int8)v21[v20 - (v15 - 576)];
      v23 = (unsigned __int8)*v21 - v22;
      if ( v23 )
        break;
      ++v21;
    }
    while ( v22 );
    if ( v23 )
    {
      Core_strcpy(v15 - 576, 0x40ui64, v20);
      corpseInfo->ci.dobjDirty = 1;
    }
    *attachTagIndexChanged = 0;
    v24 = *(__int64 (__fastcall **)(CGCorpseInfoMP *, _QWORD))(*(_QWORD *)corpseInfoa->customization.modelIndex + 24i64);
    AttachTag = AgentAttachModelData::GetAttachTag(attachModels);
    v26 = (const char *)v24(corpseInfoa, AttachTag);
    if ( strcmp(v15, v26) )
    {
      Core_strcpy(v15, 0x40ui64, v26);
      corpseInfo->ci.dobjDirty = 1;
    }
    ++attachModels;
    v15 += 64;
    ++attachModelIndex;
    ++attachTagIndexChanged;
    --v16;
  }
  while ( v16 );
  CG_SnapshotMP_ResetCharacterAnimation(localClientNum, corpseEntity, corpseEntityState, &corpseInfo->ci);
  if ( !corpseInfo->ci.pXAnimTree && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 661, ASSERT_TYPE_ASSERT, "(corpseCharacterInfo->pXAnimTree)", (const char *)&queryFormat, "corpseCharacterInfo->pXAnimTree") )
    __debugbreak();
  number = corpseEntityState->number;
  if ( number > 0x9E4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 55, ASSERT_TYPE_ASSERT, "( ( handle >= 0 && handle < ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) ) )", "%s\n\t( handle ) = %i", "( handle >= 0 && handle < ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) )", corpseEntityState->number) )
    __debugbreak();
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    LODWORD(v32) = 2;
    LODWORD(v31) = localClientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 58, ASSERT_TYPE_ASSERT, "(unsigned)( localClientIndex ) < (unsigned)( (2) )", "localClientIndex doesn't index MAX_DOBJ_CLIENTS\n\t%i not in [0, %i)", v31, v32) )
      __debugbreak();
  }
  v28 = 2533 * localClientNum + number;
  if ( v28 >= 0x13CA )
  {
    LODWORD(v32) = v28;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 62, ASSERT_TYPE_ASSERT, "( ( (unsigned)handle < ( sizeof( *array_counter( clientObjMap ) ) + 0 ) ) )", "%s\n\t( handle ) = %i", "( (unsigned)handle < ( sizeof( *array_counter( clientObjMap ) ) + 0 ) )", v32) )
      __debugbreak();
  }
  v29 = clientObjMap[v28];
  if ( !v29 )
    goto LABEL_62;
  if ( v29 >= (unsigned int)s_objCount )
  {
    LODWORD(v32) = v29;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 64, ASSERT_TYPE_ASSERT, "( ( !objIndex || ( (unsigned)objIndex < s_objCount ) ) )", "%s\n\t( objIndex ) = %i", "( !objIndex || ( (unsigned)objIndex < s_objCount ) )", v32) )
      __debugbreak();
  }
  if ( !s_objBuf[v29] )
  {
LABEL_62:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 662, ASSERT_TYPE_ASSERT, "(Com_GetClientDObj( corpseEntityState->number, localClientNum ) != 0)", (const char *)&queryFormat, "Com_GetClientDObj( corpseEntityState->number, localClientNum ) != NULL") )
      __debugbreak();
  }
  if ( !srcCharacter )
    goto LABEL_63;
  if ( !srcCharacter->pXAnimTree )
    goto LABEL_63;
  Anims = XAnimGetAnims(corpseInfo->ci.pXAnimTree);
  if ( XAnimGetAnims(srcCharacter->pXAnimTree) != Anims )
    goto LABEL_63;
  if ( GameModeFlagValues::ms_mpValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 190, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a MP-only context", "IsFlagActive( index )") )
    __debugbreak();
  if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&corpseEntityState->lerp.eFlags, ACTIVE, 0x1Bu) )
  {
    XAnimCloneAnimTree(srcCharacter->pXAnimTree, corpseInfo->ci.pXAnimTree);
    FX_Dismemberment_Transfer(localClientNum, srcCharacter->entityNum, corpseEntityState->number);
    CG_PlayerCorpseMP_TransferEntityDynamicBonesToCorpse(localClientNum, srcCharacter->entityNum, corpseInfo);
    if ( corpseInfo->ci.usingAnimState )
      BG_AnimationState_Update(corpseEntityState, &corpseInfo->ci, 3);
  }
  else
  {
LABEL_63:
    if ( corpseInfo->ci.usingAnimState )
      BG_AnimationState_Reset(corpseEntityState, &corpseInfo->ci);
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
  __int64 v5; 
  entityState_t *p_nextState; 
  __int64 number; 
  CgEntitySystem *EntitySystem; 
  unsigned __int8 flag; 
  CGCorpseInfoMP *v10; 
  CGCorpseInfoMP *CorpseInfoForClientEntityNum; 
  unsigned __int8 prevEType; 
  int i; 
  const dvar_t *v14; 
  int v15; 
  unsigned __int8 v16; 
  CgGlobalsMP *LocalClientGlobals; 
  __int16 eType_low; 
  $8E443F52CA944F49562A945B438F302F *v19; 
  const dvar_t *v20; 
  bool ReservedIndexForEntity; 
  characterInfo_t *v22; 
  characterInfo_t *v23; 
  double v24; 
  double v25; 
  double v26; 
  double v27; 
  double v28; 
  int clientNum; 
  DObj *ClientDObj; 
  DObj *v31; 
  cgs_t *LocalClientStaticGlobals; 
  unsigned int v33; 
  CGCorpseInfoMP *v34; 
  __int64 v35; 
  characterInfo_t *CharacterInfo; 
  const clientInfo_t *v37; 
  XAnimOwner v38; 
  int *p_entityNum; 
  int entityNum; 
  XAnimOwner v41; 
  __int16 v42; 
  int v43; 
  const CgSnapshotMP *PrevSnap_Internal; 
  cgs_t *v45; 
  unsigned int v46; 
  characterInfo_t *v47; 
  const characterInfo_t *v48; 
  const CgSnapshotMP *v49; 
  CgWeaponMap *v50; 
  DObj *DObj_General; 
  int v52; 
  __int16 scriptMoverType; 
  bool v54; 
  CgEntitySystem *v55; 
  __int64 v56; 
  unsigned int v57; 
  unsigned int v58; 
  unsigned int v59; 
  unsigned int *v60; 
  unsigned int v61; 
  unsigned int v62; 
  unsigned int v63; 
  __int64 v64; 
  __int64 v65; 
  __int64 v66; 
  __int64 v67; 
  __int64 v68; 
  XAnimTree *inOutAnimTree; 
  vec3_t outOrigin; 
  unsigned int outInstanceIndex; 
  __int64 v74; 
  CgTrajectory v75; 
  vec4_t quat; 
  float v77; 
  float v78; 
  float v79; 

  v74 = -2i64;
  v5 = localClientNum;
  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 818, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  p_nextState = &cent->nextState;
  number = cent->nextState.number;
  EntitySystem = CgEntitySystem::GetEntitySystem((const LocalClientNum_t)v5);
  if ( (unsigned int)number >= 0x800 )
  {
    LODWORD(v65) = number;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", v65, 2048) )
      __debugbreak();
  }
  if ( cent != &EntitySystem->m_entities[number] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 819, ASSERT_TYPE_ASSERT, "(cent == CG_GetEntity( localClientNum, cent->nextState.number ))", (const char *)&queryFormat, "cent == CG_GetEntity( localClientNum, cent->nextState.number )") )
    __debugbreak();
  *(_QWORD *)cent->lightingOrigin.v = 0i64;
  cent->lightingOrigin.v[2] = 0.0;
  flag = 0;
  v10 = NULL;
  if ( cent->nextState.eType == ET_PLAYER_CORPSE )
  {
    CorpseInfoForClientEntityNum = CG_PlayerCorpseMP_GetCorpseInfoForClientEntityNum((LocalClientNum_t)v5, p_nextState->number);
    v10 = CorpseInfoForClientEntityNum;
    if ( CorpseInfoForClientEntityNum )
      flag = CorpseInfoForClientEntityNum->flag;
    else
      flag = 0;
  }
  CG_SnapshotMP_ShutdownEntity((LocalClientNum_t)v5, cent);
  if ( flag )
  {
    if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 837, ASSERT_TYPE_ASSERT, "(corpseInfo)", (const char *)&queryFormat, "corpseInfo") )
      __debugbreak();
    v10->flag = flag;
  }
  CG_Snapshot_ResetEntityCommon((LocalClientNum_t)v5, cent);
  AimAssist_ClearEntityReference((LocalClientNum_t)v5, p_nextState->number);
  prevEType = cent->prevEType;
  *(__m256i *)cent->prevState.eFlags.m_flags = *(__m256i *)cent->nextState.lerp.eFlags.m_flags;
  *(__m256i *)&cent->prevState.pos.trDelta.y = *(__m256i *)&cent->nextState.lerp.pos.trDelta.y;
  *(__m256i *)cent->prevState.apos.trDelta.v = *(__m256i *)cent->nextState.lerp.apos.trDelta.v;
  *(LerpEntityStateInfoVolumeGrapple *)((char *)&cent->prevState.u.infoVolumeGrapple + 20) = *(LerpEntityStateInfoVolumeGrapple *)((char *)&cent->nextState.lerp.u.infoVolumeGrapple + 20);
  cent->prevEType = truncate_cast<unsigned char,enum entityType_s>(cent->nextState.eType);
  cent->prevOtherEntityNum = cent->nextState.otherEntityNum;
  cent->prevPhysicsChildBodyIdx = cent->nextState.un.vehicleXModel;
  cent->prevLinkParent = *(_DWORD *)&cent->nextState.clientLinkInfo & 0x7FF;
  for ( i = 0; i < 2; ++i )
    Tracer_SetDrawCounter((const LocalClientNum_t)v5, p_nextState->number, (const PlayerHandIndex)i, 0);
  v14 = DVARINT_cg_weaponVisInterval;
  if ( !DVARINT_cg_weaponVisInterval && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_weaponVisInterval") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v14);
  v15 = p_nextState->number % v14->current.integer;
  v16 = v15;
  if ( (v15 < 0 || (unsigned int)v15 > 0xFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned char __cdecl truncate_cast_impl<unsigned char,int>(int)", "unsigned", (unsigned __int8)v15, "signed", v15) )
    __debugbreak();
  cent->weaponVisTestCounter = v16;
  cent->flags &= 0xFFF0017D;
  cent->pose.cullIn = 0;
  cent->typeData.flightDurationMs = 0;
  *(_QWORD *)&cent->prevUseCount = 0i64;
  cent->nextUseCount = 0;
  LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals((const LocalClientNum_t)v5);
  *(_QWORD *)quat.v = CgStatic::GetLocalClientStatics((const LocalClientNum_t)v5);
  if ( !Com_GameMode_SupportsFeature(WEAPON_DROPPING_ALT) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 875, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::ANIMATED_TRAJECTORIES ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::ANIMATED_TRAJECTORIES )") )
    __debugbreak();
  CgTrajectory::CgTrajectory(&v75, (const LocalClientNum_t)v5, cent, &cent->nextState.lerp);
  BgTrajectory::SetFlags(&v75, 1);
  BgTrajectory::SetFlags(&v75, 2);
  CG_GetPoseOrigin(&cent->pose, &outOrigin);
  BgTrajectory::EvaluateTrajectories(&v75, LocalClientGlobals->time, &outOrigin, &cent->pose.angles);
  CG_SetPoseOrigin(&cent->pose, &outOrigin);
  eType_low = LOBYTE(cent->nextState.eType);
  cent->pose.eType = eType_low;
  if ( eType_low != cent->nextState.eType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 245, ASSERT_TYPE_ASSERT, "(cent->pose.eType == cent->nextState.eType)", (const char *)&queryFormat, "cent->pose.eType == cent->nextState.eType") )
    __debugbreak();
  switch ( cent->nextState.eType )
  {
    case ET_PLAYER:
    case ET_AGENT:
      cent->pose.player.control = NULL;
      *((_QWORD *)&cent->pose.moverFx + 1) = 0i64;
      break;
    case ET_SCRIPTMOVER:
      cent->pose.scriptMover.doVehicleControllers = 0;
      if ( cent->nextState.un.scriptMoverType == 9 )
        goto LABEL_41;
      break;
    case ET_FX:
    case ET_LOOP_FX:
LABEL_41:
      cent->pose.player.control = NULL;
      break;
    case ET_TURRET:
      CG_Turret_Reset(cent);
      break;
    case ET_HELICOPTER:
    case ET_VEHICLE:
      v19 = &cent->pose.160;
      if ( prevEType != 6 || !v19->scriptMover.doVehicleControllers )
        memset_0(v19, 0, sizeof($8E443F52CA944F49562A945B438F302F));
      break;
    default:
      break;
  }
  v20 = DVARBOOL_cg_entityResetPhysicsFixEnabled;
  if ( !DVARBOOL_cg_entityResetPhysicsFixEnabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_entityResetPhysicsFixEnabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v20);
  if ( v20->current.enabled )
  {
    if ( p_nextState->number >= 0x800u )
    {
      LODWORD(v66) = 2048;
      LODWORD(v65) = p_nextState->number;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 890, ASSERT_TYPE_ASSERT, "(unsigned)( cent->nextState.number ) < (unsigned)( ( sizeof( *array_counter( cgameGlob->pEntityLastXModel ) ) + 0 ) )", "cent->nextState.number doesn't index cgameGlob->pEntityLastXModel\n\t%i not in [0, %i)", v65, v66) )
        __debugbreak();
    }
    LocalClientGlobals->pEntityLastXModel[p_nextState->number] = NULL;
  }
  else
  {
    if ( CG_PhysicsObject_GetInstance((Physics_WorldId)(3 * v5 + 2), p_nextState->number, (LocalClientNum_t)v5) == -1 && CG_Entity_ShouldCreatePhysicsOnInit((LocalClientNum_t)v5, p_nextState->number) )
      CG_Entity_CreatePhysics((LocalClientNum_t)v5, p_nextState->number, 1);
    if ( !CG_Entity_HasCloth((const LocalClientNum_t)v5, p_nextState->number) && CG_Entity_ShouldCreateClothOnInit((const LocalClientNum_t)v5, p_nextState->number) )
      CG_Entity_CreateCloth((const LocalClientNum_t)v5, p_nextState->number);
  }
  ReservedIndexForEntity = ScriptableCl_GetReservedIndexForEntity((const LocalClientNum_t)v5, p_nextState->number, &outInstanceIndex);
  if ( ReservedIndexForEntity )
    CG_EntityMP_GetDObj_General((const LocalClientNum_t)v5, cent, NULL);
  switch ( cent->nextState.eType )
  {
    case ET_FIRST:
    case ET_INFO_VOLUME_GRAPPLE:
      goto $LN88_6;
    case ET_PLAYER:
      goto $LN27_88;
    case ET_PLAYER_CORPSE:
      if ( !ReservedIndexForEntity )
        CG_SnapshotMP_HandleUnlinkedCorpseEntity((const LocalClientNum_t)v5, cent);
      LocalClientStaticGlobals = CG_GetLocalClientStaticGlobals((const LocalClientNum_t)v5);
      v33 = p_nextState->number - ComCharacterLimits::GetClientCorpseEntityIndexOffset();
      if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 130, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
        __debugbreak();
      if ( v33 >= ComCharacterLimits::ms_gameData.m_clientCorpseCount )
      {
        if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 130, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
          __debugbreak();
        LODWORD(v66) = ComCharacterLimits::ms_gameData.m_clientCorpseCount;
        LODWORD(v65) = v33;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 1050, ASSERT_TYPE_ASSERT, "(unsigned)( corpseIndex ) < (unsigned)( ComCharacterLimits::GetClientCorpseMaxCount() )", "corpseIndex doesn't index ComCharacterLimits::GetClientCorpseMaxCount()\n\t%i not in [0, %i)", v65, v66) )
          __debugbreak();
      }
      if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 130, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
        __debugbreak();
      if ( (unsigned __int64)(int)ComCharacterLimits::ms_gameData.m_clientCorpseCount > 8 )
      {
        if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 130, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
          __debugbreak();
        LODWORD(v68) = 8;
        LODWORD(v67) = ComCharacterLimits::ms_gameData.m_clientCorpseCount;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 1051, ASSERT_TYPE_ASSERT, "( ComCharacterLimits::GetClientCorpseMaxCount() ) <= ( ( sizeof( *array_counter( cgs->corpseinfo ) ) + 0 ) )", "%s <= %s\n\t%i, %i", "ComCharacterLimits::GetClientCorpseMaxCount()", "ARRAY_COUNT( cgs->corpseinfo )", v67, v68) )
          __debugbreak();
      }
      v34 = &LocalClientStaticGlobals->corpseinfo[v33];
      CG_SnapshotMP_ReleaseEntityRagdolls(cent, (LocalClientNum_t)v5);
      if ( (v34->flag & 2) == 0 )
        goto LABEL_135;
      inOutAnimTree = v34->ci.pXAnimTree;
      v35 = *(_QWORD *)quat.v;
      CharacterInfo = CgStatic::GetCharacterInfo(*(CgStatic **)quat.v, cent->nextState.clientNum);
      if ( !CharacterInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 1064, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
        __debugbreak();
      v37 = (const clientInfo_t *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v35 + 216i64))(v35, (unsigned int)cent->nextState.clientNum);
      if ( !v37 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 1067, ASSERT_TYPE_ASSERT, "( ( clientInfo != nullptr ) )", "( clientInfo ) = %p", NULL) )
        __debugbreak();
      if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagStrict(&cent->nextState.lerp.eFlags, (EntityStateFlagsMP)27) )
      {
        CG_PlayerCorpseMP_CopyCorpseInfo(v34, CharacterInfo, &v37->customization);
        CG_PlayersMP_UpdatePlayerModels((const LocalClientNum_t)v5, v37, &v34->ci);
        BG_AnimationMP_FilterCorpseAttachmentModels((char (*)[9][64])v34->ci.attachModelNames, (char (*)[9][64])v34->ci.attachTagNames);
        if ( PlayerASM_IsEnabled() )
        {
          LOBYTE(v38) = 1;
          BG_PlayersASM_ResetCorpseAnimTree(CG_MainMP_AllocXAnimClient, v38, CharacterInfo, &inOutAnimTree);
        }
        v34->ci.pXAnimTree = inOutAnimTree;
        XAnimCloneAnimTree(CharacterInfo->pXAnimTree, inOutAnimTree);
        FX_Dismemberment_Transfer((LocalClientNum_t)v5, v34->ci.entityNum, p_nextState->number);
        CG_PlayerCorpseMP_TransferEntityDynamicBonesToCorpse((LocalClientNum_t)v5, cent->nextState.clientNum, v34);
      }
      else
      {
        p_entityNum = &v34->ci.entityNum;
        if ( !v34->ci.model[0] || (entityNum = *p_entityNum, *p_entityNum != CharacterInfo->entityNum) )
        {
          CG_PlayerCorpseMP_CopyCorpseInfo(v34, CharacterInfo, &v37->customization);
          CG_PlayersMP_UpdatePlayerModels((const LocalClientNum_t)v5, v37, &v34->ci);
          BG_AnimationMP_FilterCorpseAttachmentModels((char (*)[9][64])v34->ci.attachModelNames, (char (*)[9][64])v34->ci.attachTagNames);
          if ( PlayerASM_IsEnabled() )
          {
            LOBYTE(v41) = 1;
            BG_PlayersASM_ResetCorpseAnimTree(CG_MainMP_AllocXAnimClient, v41, CharacterInfo, &inOutAnimTree);
          }
          v34->ci.pXAnimTree = inOutAnimTree;
LABEL_135:
          entityNum = v34->ci.entityNum;
        }
        FX_Dismemberment_Transfer((LocalClientNum_t)v5, entityNum, p_nextState->number);
      }
      v34->ci.suitIndex = cent->nextState.un.vehicleXModel;
      v42 = p_nextState->number;
      if ( (v34->flag & 2) != 0 )
        CG_PlayerCorpseMP_TryUpdateLinkedPlayerCorpseScriptableBinding((const LocalClientNum_t)v5, v34, v42);
      else
        CG_PlayerCorpseMP_ClearDetachedPlayerCorpseScriptableBinding((const LocalClientNum_t)v5, v34, v42);
      v43 = newEntity;
      if ( newEntity )
      {
        PrevSnap_Internal = (const CgSnapshotMP *)CG_SnapshotMP_GetPrevSnap_Internal((const LocalClientNum_t)v5);
        CG_SnapshotMP_FixupCorpseTrajectory((const LocalClientNum_t)v5, PrevSnap_Internal, cent);
      }
      if ( CG_SnapshotMP_EntityNeedsLODChange((const LocalClientNum_t)v5, newEntity == 0, killcamEndingTransition != 0, cent) != 1 )
        goto LABEL_144;
      cent->previousEventSequence.combined = cent->nextState.eventSequence.combined;
      goto LABEL_146;
    case ET_MISSILE:
      cent->typeData.flightDurationMs = 0;
$LN88_6:
      if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagStrict(&cent->nextState.lerp.eFlags, LEGACY_LADDER_CENTERLINE|LEGACY_MANTLE|0x10) && LocalClientGlobals->time - cent->nextState.lerp.u.anonymous.data[0] > 200 || CG_SnapshotMP_EntityNeedsLODChange((const LocalClientNum_t)v5, newEntity == 0, killcamEndingTransition != 0, cent) == 1 )
        goto LABEL_224;
      if ( newEntity )
        cent->previousEventSequence.combined = 0;
      break;
    case ET_SCRIPTMOVER:
      if ( !killcamEndingTransition )
      {
        v52 = cent->nextState.lerp.u.anonymous.data[0];
        if ( v52 != 2047 )
          CG_SnapshotMP_TransferDObjMarksToScriptMover((LocalClientNum_t)v5, v52, p_nextState->number);
      }
      scriptMoverType = cent->nextState.un.scriptMoverType;
      if ( scriptMoverType == 1 )
      {
        if ( Physics_AreClientWorldsCreated() && !CG_PhysicsCharacterProxy_IsRegistered((LocalClientNum_t)v5, cent) )
        {
          AnglesToQuat(&cent->pose.angles, &quat);
          CG_GetPoseOrigin(&cent->pose, &outOrigin);
          CG_PhysicsCharacterProxy_AddCharacter((LocalClientNum_t)v5, cent, &outOrigin, &quat);
        }
      }
      else if ( scriptMoverType == 9 )
      {
        if ( cent->pose.coverWall.coverGrid[1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 1258, ASSERT_TYPE_ASSERT, "(!cent->pose.moverFx.particleSystem)", (const char *)&queryFormat, "!cent->pose.moverFx.particleSystem") )
          __debugbreak();
        if ( LocalClientGlobals->m_brCircleEnt && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 1259, ASSERT_TYPE_ASSERT, "(cgameGlob->m_brCircleEnt == 0)", (const char *)&queryFormat, "cgameGlob->m_brCircleEnt == NULL") )
          __debugbreak();
        LocalClientGlobals->m_brCircleEnt = cent;
      }
      if ( ScriptableCl_IsScriptableMoverEntityState(&cent->nextState) )
        ScriptableCl_AssociateScriptMoverInstance((const LocalClientNum_t)v5, cent);
      goto $LN170_1;
    case ET_FX:
    case ET_LOOP_FX:
      if ( cent->pose.coverWall.coverGrid[1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 1237, ASSERT_TYPE_ASSERT, "(!cent->pose.fx.particleSystem)", (const char *)&queryFormat, "!cent->pose.fx.particleSystem") )
        __debugbreak();
      break;
    case ET_TURRET:
      cent->previousEventSequence.combined = cent->nextState.eventSequence.combined;
      if ( !CgWeaponMap::ms_instance[v5] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
        __debugbreak();
      v50 = CgWeaponMap::ms_instance[v5];
      if ( !v50 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 438, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
        __debugbreak();
      if ( cent == (centity_t *)-400i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 439, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
        __debugbreak();
      if ( !BgWeaponMap::GetWeapon(v50, cent->nextState.weaponHandle)->weaponIdx && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 1206, ASSERT_TYPE_ASSERT, "(BG_GetWeaponForEntity( CgWeaponMap::GetInstance( localClientNum ), &cent->nextState ).weaponIdx)", (const char *)&queryFormat, "BG_GetWeaponForEntity( CgWeaponMap::GetInstance( localClientNum ), &cent->nextState ).weaponIdx") )
        __debugbreak();
      DObj_General = CG_EntityMP_GetDObj_General((const LocalClientNum_t)v5, cent, NULL);
      if ( DObj_General )
        CG_EntityMP_TurretPreControllers((LocalClientNum_t)v5, DObj_General, cent, 1);
      break;
    case ET_HELICOPTER:
    case ET_VEHICLE:
      CG_Vehicle_ResetEntity((LocalClientNum_t)v5, cent, 0);
      if ( CG_SnapshotMP_EntityNeedsLODChange((const LocalClientNum_t)v5, newEntity == 0, killcamEndingTransition != 0, cent) == 1 )
        goto LABEL_224;
      if ( newEntity )
        cent->previousEventSequence.combined = 0;
      break;
    case ET_PLANE:
$LN170_1:
      v54 = ScriptableCl_IsScriptableEntity((const LocalClientNum_t)v5, cent) != 0;
      cent->previousEventSequence.combined = cent->nextState.eventSequence.combined;
      if ( !GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&cent->nextState.lerp.eFlags, ACTIVE, 1u) || v54 )
        break;
      CG_Entity_UpdateBModelWorldBounds((LocalClientNum_t)v5, cent, 1);
      goto LABEL_240;
    case ET_VEHICLE_CORPSE:
      CG_Vehicle_ClearBoneControllers((LocalClientNum_t)v5, cent);
      break;
    case ET_AGENT:
      v22 = CgStatic::GetCharacterInfo(*(CgStatic **)quat.v, cent->nextState.clientNum);
      if ( !v22 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 946, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
        __debugbreak();
      CG_PlayersMP_UpdateAgentModels((const LocalClientNum_t)v5, v22);
      CG_SnapshotMP_ResetCharacterAnimation((const LocalClientNum_t)v5, cent, &cent->nextState, v22);
$LN27_88:
      if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
        __debugbreak();
      if ( cent->nextState.clientNum >= ComCharacterLimits::ms_gameData.m_characterCount )
      {
        if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
          __debugbreak();
        LODWORD(v66) = ComCharacterLimits::ms_gameData.m_characterCount;
        LODWORD(v65) = cent->nextState.clientNum;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 954, ASSERT_TYPE_ASSERT, "(unsigned)( cent->nextState.clientNum ) < (unsigned)( ComCharacterLimits::GetCharacterMaxCount() )", "cent->nextState.clientNum doesn't index ComCharacterLimits::GetCharacterMaxCount()\n\t%i not in [0, %i)", v65, v66) )
          __debugbreak();
      }
      if ( cent->nextState.clientNum != p_nextState->number )
      {
        LODWORD(v68) = p_nextState->number;
        LODWORD(v67) = cent->nextState.clientNum;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 955, ASSERT_TYPE_ASSERT, "( cent->nextState.clientNum ) == ( cent->nextState.number )", "%s == %s\n\t%i, %i", "cent->nextState.clientNum", "cent->nextState.number", v67, v68) )
          __debugbreak();
      }
      cent->pose.coverWall.coverGrid[2] = -16843010;
      cent->previousEventSequence.combined = cent->nextState.eventSequence.combined;
      v23 = CgStatic::GetCharacterInfo(*(CgStatic **)quat.v, cent->nextState.clientNum);
      if ( !v23 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 963, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
        __debugbreak();
      v23->weaponOccludedAdjustFrac = 0.0;
      v23->executionPropHidePending = 0;
      v23->deltaLerpMoveDir = 0.0;
      v24 = BG_MovementDirToDegrees(cent->nextState.lerp.u.player.movementDir);
      v23->lerpMoveDir = *(float *)&v24;
      BG_SlopeWorldmodel_Unpack(&cent->nextState.lerp.u.player.slopePacked, &v23->groundNormalInterpolated);
      v23->leftStickInputInterpolated = BG_PackedPolarCoordsToCartesian(cent->nextState.lerp.u.player.leftStickPolarPacked);
      v23->rightStickInputInterpolated = BG_PackedPolarCoordsToCartesian(cent->nextState.lerp.u.player.rightStickPolarPacked);
      v25 = MSG_UnpackSignedFloat(cent->nextState.lerp.u.player.extraAnimData.anonymous.data[0], 1.0, 0x10u);
      v23->skydivePitchInterpolated = *(float *)&v25;
      v26 = MSG_UnpackSignedFloat(cent->nextState.lerp.u.player.extraAnimData.anonymous.data[1], 1.0, 0x10u);
      v23->skydiveRollInterpolated = *(float *)&v26;
      v27 = MSG_UnpackSignedFloat(cent->nextState.lerp.u.player.extraAnimData.anonymous.data[2], 1.0, 0x10u);
      v23->skydiveThrottleInterpolated = *(float *)&v27;
      BG_AnimationMP_ResetCharacterInfoHeightOffset(v23);
      CGMovingPlatforms::ResetClientLocalOffset(v23);
      if ( PlayerASM_IsEnabled() )
      {
        v28 = BG_MovementDirToDegrees(cent->nextState.lerp.u.player.velocityDir);
        BG_PlayerASM_UpdateAngles(*(const float *)&v28, v23);
      }
      *(_QWORD *)&v23->mount.startTime = 0i64;
      v23->playerAngles.v[0] = cent->pose.angles.v[0];
      v23->playerAngles.v[1] = cent->pose.angles.v[1];
      v23->playerAngles.v[2] = cent->pose.angles.v[2];
      cent->pose.angles.v[0] = 0.0;
      cent->pose.angles.v[2] = 0.0;
      CG_PlayersMP_ResetCharacterEntity((LocalClientNum_t)v5, LocalClientGlobals, cent, newEntity);
      if ( newEntity )
      {
        clientNum = cent->nextState.clientNum;
        if ( clientNum < cls.maxClients && (LocalClientGlobals->inKillCam || !LocalClientGlobals->predictedPlayerState.deltaTime || LocalClientGlobals->predictedPlayerState.clientNum != clientNum || LocalClientGlobals->predictedPlayerState.clientNum == CG_GetLocalClientGlobals((const LocalClientNum_t)v5)->clientNum) )
          CG_CustomizationMP_ResetCustomizationLatchForClient((const LocalClientNum_t)v5, cent->nextState.clientNum);
      }
      if ( Physics_AreClientWorldsCreated() && !CG_PhysicsCharacterProxy_IsRegistered((LocalClientNum_t)v5, cent) )
      {
        AnglesToQuat(&cent->pose.angles, &quat);
        CG_GetPoseOrigin(&cent->pose, &outOrigin);
        CG_PhysicsCharacterProxy_AddCharacter((LocalClientNum_t)v5, cent, &outOrigin, &quat);
      }
      ClientDObj = Com_GetClientDObj(p_nextState->number, (LocalClientNum_t)v5);
      v31 = ClientDObj;
      if ( ClientDObj )
      {
        CG_PlayersMP_PreControllers((LocalClientNum_t)v5, ClientDObj, cent);
        XAnimBonePhysicsSetSettlingEnabled(v31, 0);
      }
      v23->dobjForceCheckWeaponModelLoaded = 1;
      break;
    case ET_AGENT_CORPSE:
      if ( !ReservedIndexForEntity )
        CG_SnapshotMP_HandleUnlinkedCorpseEntity((const LocalClientNum_t)v5, cent);
      v45 = CG_GetLocalClientStaticGlobals((const LocalClientNum_t)v5);
      v46 = p_nextState->number - ComCharacterLimits::GetAgentCorpseEntityIndexOffset();
      if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 137, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
        __debugbreak();
      if ( v46 >= ComCharacterLimits::ms_gameData.m_agentCorpseCount )
      {
        if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 137, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
          __debugbreak();
        LODWORD(v66) = ComCharacterLimits::ms_gameData.m_agentCorpseCount;
        LODWORD(v65) = v46;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 1162, ASSERT_TYPE_ASSERT, "(unsigned)( corpseIndex ) < (unsigned)( ComCharacterLimits::GetAgentCorpseMaxCount() )", "corpseIndex doesn't index ComCharacterLimits::GetAgentCorpseMaxCount()\n\t%i not in [0, %i)", v65, v66) )
          __debugbreak();
      }
      if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 137, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
        __debugbreak();
      if ( (unsigned __int64)(int)ComCharacterLimits::ms_gameData.m_agentCorpseCount > 8 )
      {
        if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 137, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
          __debugbreak();
        LODWORD(v68) = 8;
        LODWORD(v67) = ComCharacterLimits::ms_gameData.m_agentCorpseCount;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 1163, ASSERT_TYPE_ASSERT, "( ComCharacterLimits::GetAgentCorpseMaxCount() ) <= ( ( sizeof( *array_counter( cgs->agentCorpseInfo ) ) + 0 ) )", "%s <= %s\n\t%i, %i", "ComCharacterLimits::GetAgentCorpseMaxCount()", "ARRAY_COUNT( cgs->agentCorpseInfo )", v67, v68) )
          __debugbreak();
      }
      v34 = &v45->agentCorpseInfo[v46];
      v34->flag = 3;
      CG_SnapshotMP_ReleaseEntityRagdolls(cent, (LocalClientNum_t)v5);
      if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagStrict(&cent->nextState.lerp.eFlags, (EntityStateFlagsMP)27) )
      {
        v47 = CgStatic::GetCharacterInfo(*(CgStatic **)quat.v, cent->nextState.clientNum);
        if ( !v47 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 1175, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
          __debugbreak();
        v48 = v47;
      }
      else
      {
        v48 = NULL;
      }
      CG_SnapshotMP_ResetAgentCorpse((const LocalClientNum_t)v5, v48, cent, &cent->nextState, v34);
      v43 = newEntity;
      if ( newEntity )
      {
        v49 = (const CgSnapshotMP *)CG_SnapshotMP_GetPrevSnap_Internal((const LocalClientNum_t)v5);
        CG_SnapshotMP_FixupCorpseTrajectory((const LocalClientNum_t)v5, v49, cent);
      }
      if ( CG_SnapshotMP_EntityNeedsLODChange((const LocalClientNum_t)v5, newEntity == 0, killcamEndingTransition != 0, cent) == 1 )
      {
        cent->previousEventSequence.combined = cent->nextState.eventSequence.combined;
      }
      else
      {
LABEL_144:
        if ( v43 )
          cent->previousEventSequence.combined = 0;
      }
LABEL_146:
      cent->typeData.flightDurationMs = 2047;
      v34->ci.dobjDirty = 1;
      break;
    case ET_PHYSICS_CHILD:
      CG_PhysicsObject_ResetPhysicsChild((LocalClientNum_t)v5, cent);
      break;
    case ET_BEAM:
      CG_BeamEntity_Reset((const LocalClientNum_t)v5, cent);
      break;
    case ET_CLIENT_CHARACTER:
      CG_ClientCharacter_ResetEntity((const LocalClientNum_t)v5, cent);
      break;
    case ET_RAGDOLL_CONSTRAINT:
      CG_RagdollConstraintEntity_Reset((const LocalClientNum_t)v5, cent);
      break;
    case ET_PHYSICS_VOLUME:
      CG_PhysicsVolume_Reset((LocalClientNum_t)v5, cent);
      break;
    case ET_COVERWALL:
      CG_CoverWall_ResetEntity((const LocalClientNum_t)v5, cent);
      break;
    default:
LABEL_224:
      cent->previousEventSequence.combined = cent->nextState.eventSequence.combined;
      break;
  }
  R_MDAO_ResetEntityOcclusionState(&cent->pose);
  R_EntityMoved((LocalClientNum_t)v5, p_nextState->number);
  v77 = FLOAT_131072_0;
  v78 = FLOAT_131072_0;
  v79 = FLOAT_131072_0;
  v55 = CgEntitySystem::GetEntitySystem((const LocalClientNum_t)v5);
  v56 = p_nextState->number;
  if ( (unsigned int)v56 >= 0x800 )
  {
    LODWORD(v66) = 2048;
    LODWORD(v65) = p_nextState->number;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 461, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", v65, v66) )
      __debugbreak();
  }
  if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 109, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
    __debugbreak();
  if ( (int)v56 > (int)ComCharacterLimits::ms_gameData.m_clientCount )
  {
    v64 = 3 * v56 + 389124;
    *((float *)&v55->__vftable + v64) = v77;
    *((float *)&v55->__vftable + v64 + 1) = v78;
    *((float *)&v55->m_localClientNum + v64) = v79;
  }
  else
  {
    v57 = s_entity_aab_Z;
    v58 = s_entity_aab_Y;
    v59 = s_entity_aab_X;
    quat.v[0] = v77;
    if ( (LODWORD(v77) & 0x7F800000) == 2139095040 || (quat.v[0] = v78, (LODWORD(v78) & 0x7F800000) == 2139095040) || (quat.v[0] = v79, (LODWORD(v79) & 0x7F800000) == 2139095040) )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 398, ASSERT_TYPE_SANITY, "( !IS_NAN( ( from )[0] ) && !IS_NAN( ( from )[1] ) && !IS_NAN( ( from )[2] ) )", (const char *)&queryFormat, "!IS_NAN( ( from )[0] ) && !IS_NAN( ( from )[1] ) && !IS_NAN( ( from )[2] )") )
        __debugbreak();
    }
    v60 = (unsigned int *)&v55->m_entityOrigin[v56];
    v61 = (unsigned int)v60 ^ LODWORD(v77) ^ ~v59;
    v62 = (unsigned int)v60 ^ LODWORD(v78) ^ v58 ^ v61;
    v63 = (unsigned int)v60 ^ LODWORD(v79) ^ v57 ^ v62;
    *v60 = v61;
    v60[1] = v62;
    v60[2] = v63;
    memset(&quat, 0, 8ui64);
  }
  CG_GameInterface_SnapshotMP_ResetEntity((LocalClientNum_t)v5, cent, newEntity, killcamEndingTransition);
LABEL_240:
  memset(&outOrigin, 0, sizeof(outOrigin));
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
  float v9; 
  int v10; 
  __int64 v11; 
  CgEntitySystem *EntitySystem; 
  __int64 v13; 
  __int64 v14; 
  __int64 v15; 
  CgGlobalsMP *LocalClientGlobals; 
  vec3_t origin; 
  tmat33_t<vec3_t> axis; 

  v2 = localClientNum;
  R_InitSceneData(localClientNum);
  LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals((const LocalClientNum_t)v2);
  if ( !CgWeaponMap::ms_instance[v2] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
    __debugbreak();
  v4 = CgWeaponMap::ms_instance[v2];
  NextSnap_Internal = (const CgSnapshotMP *)CG_SnapshotMP_GetNextSnap_Internal((const LocalClientNum_t)v2);
  CG_SnapshotMP_UpdateOmnvars((LocalClientNum_t)v2, NextSnap_Internal, snap);
  CG_SnapshotMP_SetNextSnap((LocalClientNum_t)v2, NULL);
  if ( LocalClientGlobals->nextSnap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 1375, ASSERT_TYPE_ASSERT, "(!cgameGlob->nextSnap)", (const char *)&queryFormat, "!cgameGlob->nextSnap") )
    __debugbreak();
  LocalClientGlobals->snap = snap;
  LocalClientGlobals->nextSnap = snap;
  serverTime = snap->serverTime;
  LocalClientGlobals->time = serverTime;
  LocalClientGlobals->oldTime = serverTime;
  LocalClientGlobals->frametime = 0;
  LocalClientStatics = CgStatic::GetLocalClientStatics((const LocalClientNum_t)v2);
  v8 = LocalClientStatics->GetAnimStatics(LocalClientStatics);
  if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 1386, ASSERT_TYPE_ASSERT, "(bgameAnim)", (const char *)&queryFormat, "bgameAnim") )
    __debugbreak();
  v8->time = LocalClientGlobals->time;
  v8->deltaTime = snap->ps.deltaTime;
  v8->frametime = LocalClientGlobals->frametime;
  if ( !BgWeaponMap::IsEmpty(v4) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 1393, ASSERT_TYPE_ASSERT, "(weaponMap->IsEmpty())", "%s\n\tThe weapon map was not properly initialized and is not empty", "weaponMap->IsEmpty()") )
    __debugbreak();
  CgWeaponMap::SetWeaponEntryRange(v4, snap->weapons, snap->numWeapons);
  ScriptableCl_SetLootWeaponMapIndicies((const LocalClientNum_t)v2);
  v9 = snap->ps.origin.v[1];
  origin.v[0] = snap->ps.origin.v[0];
  origin.v[2] = snap->ps.viewHeightCurrent + snap->ps.origin.v[2];
  origin.v[1] = v9;
  AnglesToAxis(&snap->ps.viewangles, &axis);
  SND_SetListener((LocalClientNum_t)v2, snap->ps.clientNum, &origin, &axis, &snap->ps.velocity);
  v10 = 0;
  v11 = 0i64;
  do
  {
    EntitySystem = CgEntitySystem::GetEntitySystem((const LocalClientNum_t)v2);
    if ( (unsigned int)v10 >= 0x800 )
    {
      LODWORD(v15) = 2048;
      LODWORD(v14) = v10;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", v14, v15) )
        __debugbreak();
    }
    if ( (EntitySystem->m_entities[v11].flags & 1) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 1412, ASSERT_TYPE_ASSERT, "(!CENextValid( CG_GetEntity( localClientNum, i ) ))", (const char *)&queryFormat, "!CENextValid( CG_GetEntity( localClientNum, i ) )") )
      __debugbreak();
    ++v10;
    ++v11;
  }
  while ( v10 < 2048 );
  SND_FadeAllSounds(1.0, 0);
  if ( (unsigned int)v2 >= 2 )
  {
    LODWORD(v15) = 2;
    LODWORD(v14) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\client_mp.h", 254, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v14, v15) )
      __debugbreak();
  }
  v13 = v2;
  if ( clientUIActives[v2].migrationState )
  {
    memcpy_0(&LocalClientGlobals->predictedPlayerState, &snap->ps, sizeof(LocalClientGlobals->predictedPlayerState));
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
    LODWORD(v15) = 2;
    LODWORD(v14) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\client_mp.h", 265, ASSERT_TYPE_ASSERT, "(unsigned)( client ) < (unsigned)( 2 )", "client doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v14, v15) )
      __debugbreak();
  }
  CL_UpdateMigrationProfile(clientUIActives[v13].migrationState, CMSTATE_INACTIVE);
  clientUIActives[v13].migrationState = CMSTATE_INACTIVE;
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
  CgSnapshotMP *v2; 
  __int64 v3; 
  CgGlobalsMP *LocalClientGlobals; 
  CgWeaponMap *v5; 
  const dvar_t *v6; 
  const snapshot_t *v7; 
  const snapshot_t *v8; 
  bool v9; 
  CgSnapshotMP *v10; 
  const snapshot_t *NextSnap_Internal; 
  int v12; 
  __int16 *p_serverTime; 
  __int16 v14; 
  unsigned int v15; 
  __int64 v16; 
  CgEntitySystem *EntitySystem; 
  __int64 v18; 
  centity_t *Entity; 
  CgSnapshotType SnapshotType; 
  const snapshot_t *v21; 
  int v22; 
  int *v23; 
  __int64 v24; 
  CgEntitySystem *v25; 
  __int64 v26; 
  centity_t *v27; 
  const CgSnapshotMP *v28; 
  CgSnapshotMP *v29; 
  float v30; 
  float v31; 
  float v32; 
  float v33; 
  float v34; 
  float v35; 
  int commandTime; 
  cgs_t *LocalClientStaticGlobals; 
  bool v38; 
  playerState_s *v39; 
  bool v40; 
  int v41; 
  CgMLGCameraManager *CameraManager; 
  bool v43; 
  __int64 clientNum; 
  BgAnimStatic *v45; 
  bool v46; 
  bool v47; 
  bool v48; 
  playerState_s *v49; 
  characterInfo_t *CharacterInfo; 
  GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32> *v51; 
  __int64 v52; 
  int v53; 
  unsigned int v54; 
  __int64 v55; 
  int v56; 
  bool v57; 
  centity_t *v58; 
  CgPredictedEntitySystem *System; 
  __int64 v60; 
  unsigned int v61; 
  int v62; 
  __int16 *p_number; 
  centity_t *v64; 
  CgHandler *Handler; 
  __int64 v66; 
  int pm_type; 
  int v68; 
  int v69; 
  int v70; 
  bool v71; 
  bool v72; 
  int v73; 
  int v74; 
  int v75; 
  __int64 v76; 
  bool v77; 
  int v78; 
  GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64> *v79; 
  __int64 v80; 
  __int64 v81; 
  CgEntitySystem *v82; 
  __int64 v83; 
  BgWeaponMap *v84; 
  unsigned int v85; 
  __int64 v86; 
  int v87; 
  int v88; 
  int v89; 
  CgVehicleSystem *v90; 
  CgWeaponMap *Instance; 
  CgHandler *v92; 
  char v93; 
  bool v94; 
  const dvar_t *v95; 
  __int64 entCount; 
  int v97; 
  CgSnapshotMP *v98; 
  entityState_t *entities; 
  unsigned int number; 
  __int64 v101; 
  CgEntitySystem *v102; 
  __int64 v103; 
  __int64 v104; 
  __int16 v105; 
  int v106; 
  clientState_t *clients; 
  __int64 clientIndex; 
  CgEntitySystem *v109; 
  CgSnapshotMP *v110; 
  int v111; 
  CgStatic *v112; 
  __int64 v113; 
  cg_t *v114; 
  characterInfo_t *v115; 
  unsigned int v116; 
  unsigned int v117; 
  unsigned int v118; 
  cg_t *v119; 
  characterInfo_t *v120; 
  unsigned int v121; 
  unsigned int v122; 
  characterInfo_t *v123; 
  CgMLGSpectator *MLGSpectator; 
  BGVehicles *vehicleSystem; 
  __int64 v126; 
  __int64 v127; 
  __int64 v128; 
  __int64 v129; 
  __int64 v130; 
  __int64 v131; 
  bool createdNew_optionalOut; 
  unsigned int mapRestart; 
  int v134; 
  CgGlobalsMP *v135; 
  GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64> *p_otherFlags; 
  BgWeaponMap *p_ps; 
  CgSnapshotMP *v138; 
  CgSnapshotMP *v139; 
  CgSnapshotMP *nextSnap; 
  CgStatic *LocalClientStatics; 
  CgPredictedEntitySystem *v142; 
  __int64 v143; 
  __int64 v144; 
  int v145[64]; 
  entityState_t *nextSnapCorpseEnts[9]; 

  v144 = -2i64;
  v2 = snap;
  v139 = snap;
  v3 = localClientNum;
  Sys_ProfBeginNamedEvent(0xFF4169E1, "SetNextSnap");
  SND_AddPhysicsQueryBlock();
  memset_0(v145, 0, sizeof(v145));
  LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals((const LocalClientNum_t)v3);
  v135 = LocalClientGlobals;
  LocalClientStatics = CgStatic::GetLocalClientStatics((const LocalClientNum_t)v3);
  if ( !CgWeaponMap::ms_instance[v3] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
    __debugbreak();
  v5 = CgWeaponMap::ms_instance[v3];
  p_ps = v5;
  v6 = DVARBOOL_cg_entityWorkers;
  if ( !DVARBOOL_cg_entityWorkers && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_entityWorkers") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  if ( v6->current.enabled )
    Sys_WaitWorkerCmdsOnlyOfType(WRKCMD_ENTITY_BUCKET);
  mapRestart = LocalClientGlobals->mapRestart;
  v7 = LocalClientGlobals->nextSnap;
  if ( v7 )
  {
    v8 = LocalClientGlobals->snap;
    if ( v8 == v7 )
      goto LABEL_16;
    v9 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 3550, ASSERT_TYPE_ASSERT, "( cgameGlob->snap ) == ( cgameGlob->nextSnap )", "%s == %s\n\t%p, %p", "cgameGlob->snap", "cgameGlob->nextSnap", v8, LocalClientGlobals->nextSnap);
  }
  else
  {
    v10 = (CgSnapshotMP *)LocalClientGlobals->snap;
    if ( v10 == v2 )
      goto LABEL_16;
    v9 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 3555, ASSERT_TYPE_ASSERT, "( cgameGlob->snap ) == ( snap )", "%s == %s\n\t%p, %p", "cgameGlob->snap", "snap", v10, v2);
  }
  if ( v9 )
    __debugbreak();
LABEL_16:
  NextSnap_Internal = CG_SnapshotMP_GetNextSnap_Internal((const LocalClientNum_t)v3);
  if ( NextSnap_Internal )
  {
    Sys_ProfBeginNamedEvent(0xFFE9967A, "SetNextSnap-PrevEnts");
    v12 = 0;
    if ( NextSnap_Internal[1].snapFlags > 0 )
    {
      p_serverTime = (__int16 *)&NextSnap_Internal[1340].serverTime;
      do
      {
        v14 = *p_serverTime;
        v15 = *p_serverTime;
        v16 = *p_serverTime;
        v145[v16 >> 5] |= 0x80000000 >> (*p_serverTime & 0x1F);
        if ( p_serverTime[4] != 2 || CG_PlayerCorpseMP_GetCorpseInfoForServerEntityNum((LocalClientNum_t)v3, v14) )
        {
          EntitySystem = CgEntitySystem::GetEntitySystem((const LocalClientNum_t)v3);
          if ( v15 >= 0x800 )
          {
            LODWORD(v126) = 2048;
            LODWORD(vehicleSystem) = v15;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", vehicleSystem, v126) )
              __debugbreak();
          }
          if ( (EntitySystem->m_entities[v16].flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 3578, ASSERT_TYPE_ASSERT, "(CENextValid( cent ))", (const char *)&queryFormat, "CENextValid( cent )") )
            __debugbreak();
          EntitySystem->m_entities[v16].flags &= ~1u;
        }
        ++v12;
        p_serverTime += 124;
      }
      while ( v12 < NextSnap_Internal[1].snapFlags );
      v2 = v139;
      LocalClientGlobals = v135;
    }
    v18 = SHIDWORD(NextSnap_Internal[31].__vftable);
    Entity = CG_GetEntity((const LocalClientNum_t)v3, HIDWORD(NextSnap_Internal[31].__vftable));
    if ( (Entity->flags & 1) != 0 )
    {
      Entity->flags &= ~1u;
      v145[v18 >> 5] |= 0x80000000 >> (v18 & 0x1F);
    }
    Sys_ProfEndNamedEvent();
    v5 = (CgWeaponMap *)p_ps;
  }
  LocalClientGlobals->nextSnap = v2;
  SnapshotType = CG_Snapshot_GetSnapshotType();
  if ( !v2 )
  {
    if ( SnapshotType != SNAP_TYPE_MP )
    {
      LODWORD(v126) = CG_Snapshot_GetSnapshotType();
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 175, ASSERT_TYPE_ASSERT, "(CG_Snapshot_GetSnapshotType() == CgSnapshotType::SNAP_TYPE_MP)", "%s\n\tCG_SnapshotMP_GetPrevSnap_Internal: Trying to retrieve a multiplayer snapshot but multiplayer snapshots have not been allocated: CgSnapshotType:%d\n", "CG_Snapshot_GetSnapshotType() == CgSnapshotType::SNAP_TYPE_MP", v126) )
        __debugbreak();
    }
    v21 = CG_GetLocalClientGlobals((const LocalClientNum_t)v3)->snap;
    if ( v21 )
    {
      v22 = 0;
      if ( v21[1].snapFlags > 0 )
      {
        v23 = &v21[1340].serverTime;
        do
        {
          if ( *((_WORD *)v23 + 4) != 2 )
          {
            v24 = *(__int16 *)v23;
            v25 = CgEntitySystem::GetEntitySystem((const LocalClientNum_t)v3);
            if ( (unsigned int)v24 >= 0x800 )
            {
              LODWORD(v126) = 2048;
              LODWORD(vehicleSystem) = v24;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", vehicleSystem, v126) )
                __debugbreak();
            }
            CG_SnapshotMP_ShutdownEntity((LocalClientNum_t)v3, &v25->m_entities[v24]);
          }
          ++v22;
          v23 += 62;
        }
        while ( v22 < v21[1].snapFlags );
      }
      v26 = SHIDWORD(v21[31].__vftable);
      v27 = CG_GetEntity((const LocalClientNum_t)v3, HIDWORD(v21[31].__vftable));
      if ( ((0x80000000 >> (v26 & 0x1F)) & v145[v26 >> 5]) != 0 )
        CG_SnapshotMP_ShutdownEntity((LocalClientNum_t)v3, v27);
      v135->snap = NULL;
      CG_PredictMP_ClearCharacterInfo((LocalClientNum_t)v3, HIDWORD(v21[31].__vftable));
    }
    CG_PlayerCorpseMP_ClearAllPlayerCorpses((LocalClientNum_t)v3);
    CG_PredictMP_ClearItemList();
    BgWeaponMap::ClearEntries(p_ps);
    SND_ReleasePhysicsQueryBlock();
    goto LABEL_381;
  }
  if ( SnapshotType != SNAP_TYPE_MP )
  {
    LODWORD(v126) = CG_Snapshot_GetSnapshotType();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 175, ASSERT_TYPE_ASSERT, "(CG_Snapshot_GetSnapshotType() == CgSnapshotType::SNAP_TYPE_MP)", "%s\n\tCG_SnapshotMP_GetPrevSnap_Internal: Trying to retrieve a multiplayer snapshot but multiplayer snapshots have not been allocated: CgSnapshotType:%d\n", "CG_Snapshot_GetSnapshotType() == CgSnapshotType::SNAP_TYPE_MP", v126) )
      __debugbreak();
  }
  v28 = (const CgSnapshotMP *)CG_GetLocalClientGlobals((const LocalClientNum_t)v3)->snap;
  v138 = (CgSnapshotMP *)v28;
  if ( CG_Snapshot_GetSnapshotType() != SNAP_TYPE_MP )
  {
    LODWORD(v126) = CG_Snapshot_GetSnapshotType();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 162, ASSERT_TYPE_ASSERT, "(CG_Snapshot_GetSnapshotType() == CgSnapshotType::SNAP_TYPE_MP)", "%s\n\tCG_SnapshotMP_GetNextSnap_Internal: Trying to retrieve a multiplayer snapshot but multiplayer snapshots have not been allocated: CgSnapshotType:%d\n", "CG_Snapshot_GetSnapshotType() == CgSnapshotType::SNAP_TYPE_MP", v126) )
      __debugbreak();
  }
  v29 = (CgSnapshotMP *)CG_GetLocalClientGlobals((const LocalClientNum_t)v3)->nextSnap;
  nextSnap = v29;
  if ( !v28 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 3639, ASSERT_TYPE_ASSERT, "(prevSnap)", (const char *)&queryFormat, "prevSnap") )
    __debugbreak();
  if ( !v29 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 3640, ASSERT_TYPE_ASSERT, "(nextSnap)", (const char *)&queryFormat, "nextSnap") )
    __debugbreak();
  LocalClientGlobals->m_usingLowLodClientEntityEvents = (v29->snapFlags & 0x800) != 0;
  CL_Main_InvalidateSkeletonCache();
  Sys_ProfBeginNamedEvent(0xFFBA55D3, "SetNextSnap-WeaponMap");
  BgWeaponMap::ClearEntries(v5);
  CgWeaponMap::SetWeaponEntryRange(v5, v2->weapons, v2->numWeapons);
  Sys_ProfEndNamedEvent();
  ScriptableCl_SetLootWeaponMapIndicies((const LocalClientNum_t)v3);
  CL_Input_UpdateCursorHintBinding((LocalClientNum_t)v3, v29->ps.cursorHint, v29->ps.cursorHintBinding);
  Sys_ProfBeginNamedEvent(0xFFF5DEB3, "SetNextSnap-PlayerState");
  p_ps = (BgWeaponMap *)&v2->ps;
  if ( v2 == (CgSnapshotMP *)-40i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2425, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&v2->ps.otherFlags, ACTIVE, 0x20u) )
  {
    v30 = LocalClientGlobals->predictedPlayerState.origin.v[0];
    v31 = LocalClientGlobals->predictedPlayerState.origin.v[1];
    v32 = LocalClientGlobals->predictedPlayerState.origin.v[2];
    v33 = LocalClientGlobals->predictedPlayerState.viewangles.v[0];
    v34 = LocalClientGlobals->predictedPlayerState.viewangles.v[1];
    v35 = LocalClientGlobals->predictedPlayerState.viewangles.v[2];
  }
  else
  {
    v32 = *(float *)&p_otherFlags;
    v31 = *(float *)&p_otherFlags;
    v35 = *(float *)&p_otherFlags;
    v34 = *(float *)&p_otherFlags;
    v33 = *(float *)&p_otherFlags;
    v30 = *(float *)&p_otherFlags;
  }
  if ( PlayerASM_IsEnabled() )
  {
    commandTime = LocalClientGlobals->predictedPlayerState.commandTime;
    if ( v2->ps.commandTime < commandTime )
    {
      *(_OWORD *)&LocalClientGlobals->playerASMLastAnimState.animSet = *(_OWORD *)&LocalClientGlobals->predictedPlayerState.animState.animSet;
      LocalClientGlobals->playerASMLastAnimState.slot[1].packedAnim = LocalClientGlobals->predictedPlayerState.animState.slot[1].packedAnim;
      LocalClientGlobals->playerASMLastCommandTime = commandTime;
    }
  }
  memcpy_0(&LocalClientGlobals->predictedPlayerState, &v2->ps, sizeof(LocalClientGlobals->predictedPlayerState));
  LocalClientGlobals->predictedPlayerState.commandTimeInterpolated = LocalClientGlobals->predictedPlayerState.commandTime;
  LocalClientGlobals->predictedPlayerState.serverTimeInterpolated = LocalClientGlobals->predictedPlayerState.serverTime;
  LocalClientGlobals->predictedPlayerState.inputTimeInterpolated = LocalClientGlobals->predictedPlayerState.inputTime;
  if ( v2 == (CgSnapshotMP *)-40i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2425, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&v2->ps.otherFlags, ACTIVE, 0x20u) )
  {
    LocalClientGlobals->predictedPlayerState.origin.v[0] = v30;
    LocalClientGlobals->predictedPlayerState.origin.v[1] = v31;
    LocalClientGlobals->predictedPlayerState.origin.v[2] = v32;
    LocalClientGlobals->predictedPlayerState.viewangles.v[0] = v33;
    LocalClientGlobals->predictedPlayerState.viewangles.v[1] = v34;
    LocalClientGlobals->predictedPlayerState.viewangles.v[2] = v35;
  }
  Sys_ProfEndNamedEvent();
  CG_Entity_SetFrameInterpolation((LocalClientNum_t)v3);
  Sys_ProfBeginNamedEvent(0xFF9ACD32, "SetNextSnap-ServerCmd");
  LocalClientStaticGlobals = CG_GetLocalClientStaticGlobals((const LocalClientNum_t)v3);
  CG_ServerCmdMP_ExecuteNewServerCommands((LocalClientNum_t)v3, LocalClientStaticGlobals->serverCommandSequence, v2->serverCommandSequence);
  LocalClientStaticGlobals->serverCommandSequence = v2->serverCommandSequence;
  Sys_ProfEndNamedEvent();
  ScriptableCl_ApplyChanges((const LocalClientNum_t)v3, nextSnap->scriptableChangeStartSequence, nextSnap->scriptableChangeEndSequence);
  ScriptableCl_ValidateChecksum((const LocalClientNum_t)v3, nextSnap->scriptableChangeEndSequence, nextSnap->scriptablePartsChecksum, nextSnap->scriptableInstanceChecksum, "CG_SnapshotMP_SetNextSnap");
  CL_StreamSync_ApplyServerLoadRequest((const LocalClientNum_t)v3, &nextSnap->streamSync);
  CG_SnapshotMP_UpdateClients((const LocalClientNum_t)v3, v28, v2);
  CG_SnapshotMP_UpdateAgents((const LocalClientNum_t)v3, v2);
  Sys_ProfBeginNamedEvent(0xFFCD5C5C, "SetNextSnap-Scores");
  CG_ServerCmdMP_UpdateScores(LocalClientGlobals, v2);
  Sys_ProfEndNamedEvent();
  CG_SnapshotMP_UpdateOmnvars((LocalClientNum_t)v3, v28, nextSnap);
  v38 = ScriptableCl_ObjectiveChanged((const LocalClientNum_t)v3);
  v39 = &v28->ps;
  v40 = CG_CalloutMarkerPing_CheckChanged((LocalClientNum_t)v3, &v28->ps, &nextSnap->ps);
  v41 = memcmp_0(v28->ps.objectives, nextSnap->ps.objectives, 0x1580ui64);
  if ( LocalClientGlobals->mapRestart || v41 || v38 || v40 )
  {
    Sys_ProfBeginNamedEvent(0xFFE0FFFF, "SetNextSnap-Objectives");
    if ( LUI_BeginEvent((LocalClientNum_t)v3, "objectives_update", LUI_luaVM) )
      LUI_EndEvent(LUI_luaVM);
    Sys_ProfEndNamedEvent();
  }
  ScriptableCl_ObjectiveChangedClear((const LocalClientNum_t)v3);
  if ( LocalClientGlobals->mapRestart || v40 )
  {
    Sys_ProfBeginNamedEvent(0xFFEE82EE, "SetNextSnap-CalloutMarkerPings");
    if ( LUI_BeginEvent((LocalClientNum_t)v3, "callout_marker_pings_update", LUI_luaVM) )
      LUI_EndEvent(LUI_luaVM);
    ScriptableCl_MarkLootPingStatusDirty((const LocalClientNum_t)v3);
    Sys_ProfEndNamedEvent();
  }
  if ( LocalClientGlobals->m_isMLGSpectator )
  {
    if ( nextSnap == (CgSnapshotMP *)-11544i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 2947, ASSERT_TYPE_ASSERT, "(snaphot->ps.targetMarkerGroups)", (const char *)&queryFormat, "snaphot->ps.targetMarkerGroups") )
      __debugbreak();
    CameraManager = CgMLGSpectator::GetCameraManager(LocalClientGlobals->m_mlgSpectatorPtr);
    if ( CgMLGCameraManager::GetMLGCameraType(CameraManager, (const LocalClientNum_t)v3) )
      memset_0(nextSnap->ps.targetMarkerGroups, 0, sizeof(nextSnap->ps.targetMarkerGroups));
  }
  v43 = memcmp_0(v28->ps.targetMarkerGroups, nextSnap->ps.targetMarkerGroups, 0xB0ui64) != 0;
  if ( LocalClientGlobals->mapRestart || v43 )
  {
    Sys_ProfBeginNamedEvent(0xFFEEE8AA, "SetNextSnap-Markers");
    if ( LUI_BeginEvent((LocalClientNum_t)v3, "target_markers_update", LUI_luaVM) )
      LUI_EndEvent(LUI_luaVM);
    Sys_ProfEndNamedEvent();
  }
  CG_SnapshotMP_UpdateMLGSpectatorClientInfo(LocalClientGlobals, (LocalClientNum_t)v3, v2);
  *(__m256i *)LocalClientGlobals->umbraGateStates.array = *(__m256i *)v2->umbraGateStates.array;
  *(_OWORD *)&LocalClientGlobals->umbraGateStates.array[8] = *(_OWORD *)&v2->umbraGateStates.array[8];
  CG_FrontEndScene_SetScriptedCameraState(&v2->scriptedCameraState);
  clientNum = v2->ps.clientNum;
  LocalClientGlobals->playerTeleported = 0;
  LocalClientGlobals->playerScriptTeleported = 0;
  v45 = LocalClientStatics->GetAnimStatics(LocalClientStatics);
  if ( !v45 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 3797, ASSERT_TYPE_ASSERT, "(bgameAnim)", (const char *)&queryFormat, "bgameAnim") )
    __debugbreak();
  v45->latestSnapshotTime = v2->serverTime;
  v45->deltaTime = v2->ps.deltaTime;
  if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
    __debugbreak();
  if ( v2->ps.clientNum >= ComCharacterLimits::ms_gameData.m_characterCount )
  {
    if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
      __debugbreak();
    LODWORD(v126) = ComCharacterLimits::ms_gameData.m_characterCount;
    LODWORD(vehicleSystem) = v2->ps.clientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 3802, ASSERT_TYPE_ASSERT, "(unsigned)( snap->ps.clientNum ) < (unsigned)( ComCharacterLimits::GetCharacterMaxCount() )", "snap->ps.clientNum doesn't index ComCharacterLimits::GetCharacterMaxCount()\n\t%i not in [0, %i)", vehicleSystem, v126) )
      __debugbreak();
  }
  p_otherFlags = &v2->ps.otherFlags;
  if ( GameModeFlagValues::ms_mpValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 190, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a MP-only context", "IsFlagActive( index )") )
    __debugbreak();
  v46 = GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&v2->ps.otherFlags, ACTIVE, 0x22u);
  if ( GameModeFlagValues::ms_mpValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 190, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a MP-only context", "IsFlagActive( index )") )
    __debugbreak();
  v47 = GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&v2->ps.otherFlags, ACTIVE, 0x21u);
  v48 = cls.maxClients <= v2->ps.clientNum;
  createdNew_optionalOut = v48;
  v49 = &v2->ps;
  if ( v2 == (CgSnapshotMP *)-40i64 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2289, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2275, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    v49 = NULL;
  }
  if ( GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&v49->otherFlags, GameModeFlagValues::ms_mpValue, 0x21u) || v2->ps.pm_type == 5 )
  {
    CharacterInfo = CgStatic::GetCharacterInfo(LocalClientStatics, v2->ps.clientNum);
    if ( CharacterInfo )
      CharacterInfo->speed = v2->ps.moveSpeedForAnimBlend;
  }
  if ( v48 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 3817, ASSERT_TYPE_ASSERT, "(isAgent ? BG_IsAgentControlledByPlayer( &snap->ps ) : true)", (const char *)&queryFormat, "isAgent ? BG_IsAgentControlledByPlayer( &snap->ps ) : true") )
    __debugbreak();
  if ( v46 || v48 || v47 )
  {
    Sys_ProfBeginNamedEvent(0xFFFF69B4, "SetNextSnap-Player");
    v64 = CG_GetEntity((const LocalClientNum_t)v3, clientNum);
    CG_PredictMP_InitPredictedPlayerEntity(v64, clientNum);
    Handler = CgHandler::getHandler((LocalClientNum_t)v3);
    BG_PlayerStateToEntityState(v5, &v2->ps, &v64->nextState, 0, Handler);
    v64->flags |= 1u;
    if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&v64->nextState.lerp.eFlags, ACTIVE, 0x11u) )
    {
      v66 = (__int64)v135;
      v135->weaponSelectInAlt = 0;
      *(_BYTE *)(v66 + 98777) = 0;
    }
    pm_type = v2->ps.pm_type;
    if ( pm_type >= 7 && v138->ps.pm_type < 7 )
    {
      CG_CustomizationMP_ResetCustomizationLatchForClient((const LocalClientNum_t)v3, v2->ps.clientNum);
      pm_type = v2->ps.pm_type;
    }
    if ( pm_type < 6 && v138->ps.pm_type == 6 )
      CG_CustomizationMP_ResetCustomizationLatchForClient((const LocalClientNum_t)v3, v2->ps.clientNum);
    v68 = v2->ps.stats[3];
    v69 = v138->ps.stats[3];
    v70 = v138->ps.clientNum;
    if ( GameModeFlagValues::ms_mpValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 190, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a MP-only context", "IsFlagActive( index )") )
      __debugbreak();
    v71 = GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&v138->ps.otherFlags, ACTIVE, 0x22u);
    if ( GameModeFlagValues::ms_mpValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 190, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a MP-only context", "IsFlagActive( index )") )
      __debugbreak();
    v72 = GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(p_otherFlags, ACTIVE, 0x22u) != v71;
    v73 = v138->ps.clientNum;
    v74 = v139->ps.clientNum;
    v75 = mapRestart;
    if ( !mapRestart && v68 == v69 && (_DWORD)clientNum == v70 && !v72 && v73 == v74 )
    {
      v76 = (__int64)v135;
      if ( ((0x80000000 >> (clientNum & 0x1F)) & v145[clientNum >> 5]) != 0 && !v135->playerTeleported && v64->pose.eType == v64->nextState.eType )
      {
        v77 = GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&v64->nextState.lerp.eFlags, ACTIVE, 2u);
        if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&v64->prevState.eFlags, ACTIVE, 2u) == v77 )
        {
          v2 = v139;
          if ( !createdNew_optionalOut && v139->ps.viewmodelIndex != v138->ps.viewmodelIndex )
            CG_CustomizationMP_ResetViewhandsCustomizationLatchForClient((const LocalClientNum_t)v3, v139->ps.clientNum);
        }
        else
        {
          v135->playerScriptTeleported = 1;
          memcpy_0(&v138->ps, p_ps, sizeof(v138->ps));
          CG_SnapshotMP_ResetEntity_Internal((LocalClientNum_t)v3, v64, 0, 0);
          *(_QWORD *)(v76 + 21440) = 0i64;
          *(_DWORD *)(v76 + 21448) = 0;
          v2 = v139;
        }
      }
      else
      {
        memcpy_0(&v138->ps, p_ps, sizeof(v138->ps));
        CG_SnapshotMP_ResetEntity_Internal((LocalClientNum_t)v3, v64, 1, 0);
        *(_QWORD *)v135->predictedError.v = 0i64;
        *(_DWORD *)(v76 + 21448) = 0;
        v2 = v139;
      }
    }
    else
    {
      v135->playerTeleported = 1;
      v78 = v75 || v68 != v69 || (_DWORD)clientNum != v70 || v72 || v73 != v74;
      if ( GameModeFlagValues::ms_mpValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 190, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a MP-only context", "IsFlagActive( index )") )
        __debugbreak();
      v79 = p_otherFlags;
      GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(p_otherFlags, ACTIVE, 0x22u);
      if ( GameModeFlagValues::ms_mpValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 190, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a MP-only context", "IsFlagActive( index )") )
        __debugbreak();
      GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(p_otherFlags, ACTIVE, 0x34u);
      v80 = (__int64)v138;
      v145[(__int64)v138->ps.clientNum >> 5] &= ~(0x80000000 >> (v138->ps.clientNum & 0x1F));
      FX_Dismemberment_Clear((LocalClientNum_t)v3, clientNum);
      R_UnlinkEntity(v3, clientNum);
      FX_MarkEntDetachAll((LocalClientNum_t)v3, clientNum);
      CG_SnapshotMP_ShutdownEntity((LocalClientNum_t)v3, v64);
      memcpy_0((void *)(v80 + 40), p_ps, 0x53A4ui64);
      CG_SnapshotMP_ResetEntity_Internal((LocalClientNum_t)v3, v64, 1, 0);
      if ( mapRestart || !GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagStrict(v79, (POtherFlagsMP)33) )
      {
        CG_PlayerStateMP_Respawn((LocalClientNum_t)v3, 0, v78);
        v2 = v139;
      }
      else
      {
        CG_PlayerStateMP_Respawn((LocalClientNum_t)v3, 1, v78);
        v2 = v139;
      }
    }
    goto LABEL_140;
  }
  if ( v2->ps.pm_type == 5 )
  {
    Sys_ProfBeginNamedEvent(0xFFFF69B4, "SetNextSnap-Spectator");
    v51 = (GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32> *)v138;
    v52 = (__int64)v135;
    if ( v138->ps.pm_type != 5 )
      v135->playerTeleported = 1;
    v53 = v51[125].m_flags[0];
    v54 = 0x80000000 >> (v53 & 0x1F);
    v55 = (__int64)v53 >> 5;
    v56 = v54 & v145[v55];
    v145[v55] &= ~v54;
    v57 = GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(v51 + 104, ACTIVE, 2u);
    if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&v2->ps.eFlags, ACTIVE, 2u) != v57 )
    {
      *(_BYTE *)(v52 + 741793) = 1;
      memcpy_0(v39, &v2->ps, sizeof(playerState_s));
      *(_QWORD *)(v52 + 21440) = 0i64;
      *(_DWORD *)(v52 + 21448) = 0;
    }
    if ( v56 )
    {
      v58 = CG_GetEntity((const LocalClientNum_t)v3, v53);
      CG_SnapshotMP_ShutdownEntity((LocalClientNum_t)v3, v58);
    }
LABEL_140:
    Sys_ProfEndNamedEvent();
    goto LABEL_141;
  }
  if ( mapRestart || v2->ps.stats[3] != v138->ps.stats[3] || (_DWORD)clientNum != v138->ps.clientNum )
  {
    Sys_ProfBeginNamedEvent(0xFFFF69B4, "SetNextSnap-Spawn");
    memcpy_0(v39, &v2->ps, sizeof(playerState_s));
    CG_CustomizationMP_ResetCustomizationLatchForClient((const LocalClientNum_t)v3, v2->ps.clientNum);
    CG_PlayerStateMP_Respawn((LocalClientNum_t)v3, mapRestart == 0, 1);
    Sys_ProfEndNamedEvent();
  }
LABEL_141:
  System = CgPredictedEntitySystem::GetSystem((const LocalClientNum_t)v3);
  v142 = System;
  if ( !System && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 3939, ASSERT_TYPE_ASSERT, "(predictedEntitySystem)", (const char *)&queryFormat, "predictedEntitySystem") )
    __debugbreak();
  CgPredictedEntitySystem::PostSnapshotInit(System);
  v60 = (__int64)v135;
  v135->scriptedAnimDebug.entCount = 0;
  Sys_ProfBeginNamedEvent(0xFFFF8C00, "SetNextSnap-ValidEnts");
  v61 = 0;
  mapRestart = 0;
  v62 = 0;
  v134 = 0;
  if ( v2->numEntities > 0 )
  {
    p_number = &v2->entities[0].number;
    p_ps = (BgWeaponMap *)v2->entities;
    while ( p_number[4] == 2 )
    {
      if ( v61 >= 8 )
      {
        LODWORD(v126) = 8;
        LODWORD(vehicleSystem) = v61;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 3955, ASSERT_TYPE_ASSERT, "(unsigned)( nextSnapCorpseEntsCount ) < (unsigned)( 8 )", "nextSnapCorpseEntsCount doesn't index MAX_CLIENT_CORPSES_MP\n\t%i not in [0, %i)", vehicleSystem, v126) )
          __debugbreak();
        v62 = v134;
      }
      nextSnapCorpseEnts[v61++] = (entityState_t *)p_ps;
      mapRestart = v61;
LABEL_244:
      v134 = ++v62;
      p_number = (__int16 *)&p_ps[15].m_entries;
      p_ps = (BgWeaponMap *)((char *)p_ps + 248);
      if ( v62 >= v2->numEntities )
        goto LABEL_245;
    }
    v81 = *p_number;
    v82 = CgEntitySystem::GetEntitySystem((const LocalClientNum_t)v3);
    if ( (unsigned int)v81 >= 0x800 )
    {
      LODWORD(v126) = 2048;
      LODWORD(vehicleSystem) = v81;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", vehicleSystem, v126) )
        __debugbreak();
    }
    v83 = (__int64)&v82->m_entities[v81];
    v84 = p_ps;
    *(BgWeaponMap *)(v83 + 400) = *p_ps;
    *(BgWeaponMap *)(v83 + 416) = v84[1];
    *(BgWeaponMap *)(v83 + 432) = v84[2];
    *(BgWeaponMap *)(v83 + 448) = v84[3];
    *(BgWeaponMap *)(v83 + 464) = v84[4];
    *(BgWeaponMap *)(v83 + 480) = v84[5];
    *(BgWeaponMap *)(v83 + 496) = v84[6];
    *(BgWeaponMap *)(v83 + 512) = v84[7];
    *(BgWeaponMap *)(v83 + 528) = v84[8];
    *(BgWeaponMap *)(v83 + 544) = v84[9];
    *(BgWeaponMap *)(v83 + 560) = v84[10];
    *(BgWeaponMap *)(v83 + 576) = v84[11];
    *(BgWeaponMap *)(v83 + 592) = v84[12];
    *(BgWeaponMap *)(v83 + 608) = v84[13];
    *(BgWeaponMap *)(v83 + 624) = v84[14];
    *(_QWORD *)(v83 + 640) = v84[15].__vftable;
    if ( (v82->m_entities[v81].flags & 1) != 0 )
    {
      LODWORD(v131) = v2->ps.pm_flags.m_flags[1];
      LODWORD(v130) = v2->ps.pm_flags.m_flags[0];
      LODWORD(v129) = v2->ps.clientNum;
      LODWORD(v128) = v2->numEntities;
      LODWORD(v127) = v134;
      LODWORD(v126) = v81;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 3963, ASSERT_TYPE_ASSERT, "(!CENextValid( cent ))", "%s\n\tentnum %d num %d numEntities %d clientNum %d flags 0x%x 0x%x", "!CENextValid( cent )", v126, v127, v128, v129, v130, v131) )
        __debugbreak();
    }
    v82->m_entities[v81].flags |= 1u;
    LODWORD(p_otherFlags) = 0;
    v85 = 0x80000000 >> (v81 & 0x1F);
    v86 = v81 >> 5;
    v143 = v81 >> 5;
    v87 = v145[v81 >> 5] & v85;
    if ( (unsigned int)CG_SnapshotMP_EntityNeedsReset((const LocalClientNum_t)v3, v87 != 0, (const centity_t *)v83, (int *)&p_otherFlags) )
    {
      CG_SnapshotMP_ResetEntity_Internal((LocalClientNum_t)v3, (centity_t *)v83, (int)p_otherFlags, 0);
      goto LABEL_234;
    }
    if ( GameModeFlagValues::ms_mpValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 190, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a MP-only context", "IsFlagActive( index )") )
      __debugbreak();
    if ( !GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&v2->ps.otherFlags, ACTIVE, 0x21u) )
    {
      v88 = v2->ps.vehicleState.entity;
      if ( v88 != 2047 && *(__int16 *)(v83 + 400) == (unsigned __int16)v88 )
      {
        if ( !CgVehicleSystem::PhysicsIsClientForcingServerAuth((LocalClientNum_t)v3, (const centity_t *)v83) )
        {
          v89 = !CgVehicleSystem::PhysicsIsValidVehicle((LocalClientNum_t)v3, (const centity_t *)v83);
          v90 = CgVehicleSystem::GetVehicleSystem((const LocalClientNum_t)v3);
          Instance = CgWeaponMap::GetInstance((const LocalClientNum_t)v3);
          v92 = CgHandler::getHandler((LocalClientNum_t)v3);
          BG_PlayerStateToVehicleState(&v2->ps, (entityState_t *)(v83 + 400), v89, v92, Instance, v90);
          v86 = v143;
        }
        goto LABEL_234;
      }
    }
    v93 = CG_SnapshotMP_EntityNeedsLODChange((const LocalClientNum_t)v3, v87 != 0, 0, (const centity_t *const)v83);
    if ( v93 == 1 )
    {
      *(_WORD *)(v83 + 672) = *(_WORD *)(v83 + 552);
      if ( *(_WORD *)(v83 + 408) == 4 )
      {
        *(__m256i *)(v83 + 292) = *(__m256i *)(v83 + 416);
        *(_DWORD *)(v83 + 324) = *(_DWORD *)(v83 + 448);
        *(__m256i *)(v83 + 328) = *(__m256i *)(v83 + 452);
        *(_DWORD *)(v83 + 360) = *(_DWORD *)(v83 + 484);
      }
    }
    else if ( !v93 )
    {
LABEL_234:
      v145[v86] &= ~v85;
      CgPredictedEntitySystem::EvalSnapshotEnt(v142, (centity_t *)v83);
      CG_Train_EvalSnapshotEnt((const LocalClientNum_t)v3, (const centity_t *)v83, v2->serverTime);
      v95 = DVARBOOL_cg_dumpScriptedAnims;
      if ( !DVARBOOL_cg_dumpScriptedAnims && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_dumpScriptedAnims") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v95);
      v60 = (__int64)v135;
      if ( v95->current.enabled && (entCount = v135->scriptedAnimDebug.entCount, (int)entCount < 10) )
      {
        v61 = mapRestart;
        if ( *(_WORD *)(v83 + 408) == 6 && (*(_DWORD *)(v83 + 496) & 0x40) != 0 )
        {
          v135->scriptedAnimDebug.entityNums[entCount] = *(__int16 *)(v83 + 400);
          ++*(_DWORD *)(v60 + 491512);
        }
      }
      else
      {
        v61 = mapRestart;
      }
      v62 = v134;
      goto LABEL_244;
    }
    if ( BG_IsVehicleEntity((const entityState_t *)(v83 + 400)) )
    {
      v94 = GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal((GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32> *)(v83 + 412), ACTIVE, 1u);
      if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal((GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32> *)(v83 + 288), ACTIVE, 1u) != v94 )
      {
        CG_EntityMP_GetDObj_General((const LocalClientNum_t)v3, (const centity_t *)v83, &createdNew_optionalOut);
        if ( !createdNew_optionalOut )
        {
          CG_Entity_DestroyPhysics((const LocalClientNum_t)v3, *(__int16 *)(v83 + 400));
          if ( CG_PhysicsObject_GetInstance((Physics_WorldId)(3 * v3 + 2), *(__int16 *)(v83 + 400), (LocalClientNum_t)v3) != -1 )
          {
            LODWORD(v128) = -1;
            LODWORD(v127) = CG_PhysicsObject_GetInstance((Physics_WorldId)(3 * v3 + 2), *(__int16 *)(v83 + 400), (LocalClientNum_t)v3);
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 3475, ASSERT_TYPE_ASSERT, "( CG_PhysicsObject_GetInstance( Physics_GetClientPredictiveWorldId( localClientNum ), cent->nextState.number, localClientNum ) ) == ( 0xFFFFFFFF )", "%s == %s\n\t%i, %i", "CG_PhysicsObject_GetInstance( Physics_GetClientPredictiveWorldId( localClientNum ), cent->nextState.number, localClientNum )", "PHYSICSINSTANCEID_INVALID", v127, v128) )
              __debugbreak();
          }
          if ( CG_Entity_ShouldCreatePhysicsOnInit((LocalClientNum_t)v3, *(__int16 *)(v83 + 400)) )
            CG_Entity_CreatePhysics((LocalClientNum_t)v3, *(__int16 *)(v83 + 400), 1);
        }
        if ( ((*(_WORD *)(v83 + 408) - 12) & 0xFFFD) != 0 )
        {
          LODWORD(vehicleSystem) = *(__int16 *)(v83 + 408);
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 3490, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unhandled entity type in CG_SnapshotMP_ResetEntityPhysics %i", vehicleSystem) )
            __debugbreak();
        }
        else
        {
          CG_Vehicle_ResetEntityPhysics((LocalClientNum_t)v3, (centity_t *)v83);
        }
      }
    }
    goto LABEL_234;
  }
LABEL_245:
  Sys_ProfEndNamedEvent();
  Sys_ProfBeginNamedEvent(0xFF556B2F, "SetNextSnap-PlayerCorpses");
  CG_PlayerCorpseMP_SetNextSnap((const LocalClientNum_t)v3, 0, (const entityState_t *const *)nextSnapCorpseEnts, v61);
  Sys_ProfEndNamedEvent();
  Sys_ProfBeginNamedEvent(0xFF8B4513, "SetNextSnap-RemoveEnts");
  v97 = 0;
  v98 = v138;
  if ( v138->numEntities > 0 )
  {
    entities = v138->entities;
    do
    {
      if ( entities->eType != ET_PLAYER_CORPSE )
      {
        number = entities->number;
        v101 = entities->number;
        if ( ((0x80000000 >> (entities->number & 0x1F)) & v145[v101 >> 5]) != 0 )
        {
          v102 = CgEntitySystem::GetEntitySystem((const LocalClientNum_t)v3);
          if ( number >= 0x800 )
          {
            LODWORD(v126) = 2048;
            LODWORD(vehicleSystem) = number;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", vehicleSystem, v126) )
              __debugbreak();
          }
          v103 = (__int64)&v102->m_entities[v101];
          if ( (*(_BYTE *)(v103 + 648) & 1) != 0 )
          {
            v104 = v103 + 400;
            if ( !v104 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 1921, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
              __debugbreak();
            v105 = *(_WORD *)(v104 + 8);
            if ( (((v105 - 1) & 0xFFED) != 0 || v105 == 3) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 4057, ASSERT_TYPE_ASSERT, "(BG_IsCharacterEntity( &cent->nextState ))", (const char *)&queryFormat, "BG_IsCharacterEntity( &cent->nextState )") )
              __debugbreak();
          }
          else
          {
            FX_Dismemberment_Clear((LocalClientNum_t)v3, number);
            R_UnlinkEntityFromCells(v3, number);
            R_EntityMoved((LocalClientNum_t)v3, number);
            FX_MarkEntDetachAll((LocalClientNum_t)v3, number);
            CG_SnapshotMP_ShutdownEntity((LocalClientNum_t)v3, (centity_t *)v103);
          }
        }
      }
      ++v97;
      ++entities;
    }
    while ( v97 < v98->numEntities );
    v2 = v139;
    v60 = (__int64)v135;
  }
  Sys_ProfEndNamedEvent();
  Sys_ProfBeginNamedEvent(0xFFBDB76B, "SetNextSnap-Clients");
  v106 = 0;
  if ( v2->numClients > 0 )
  {
    clients = v2->clients;
    do
    {
      clientIndex = clients->clientIndex;
      v109 = CgEntitySystem::GetEntitySystem((const LocalClientNum_t)v3);
      if ( (unsigned int)clientIndex >= 0x800 )
      {
        LODWORD(v126) = 2048;
        LODWORD(vehicleSystem) = clientIndex;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", vehicleSystem, v126) )
          __debugbreak();
      }
      CGMovingPlatforms::CacheClientLocalOffset((LocalClientNum_t)v3, &v109->m_entities[clientIndex], &v2->clients[v106++]);
      ++clients;
    }
    while ( v106 < v2->numClients );
    v98 = v138;
  }
  Sys_ProfEndNamedEvent();
  Sys_ProfBeginNamedEvent(0xFF8B0000, "SetNextSnap-Items");
  v110 = nextSnap;
  CG_PredictMP_BuildItemList((LocalClientNum_t)v3, nextSnap);
  Sys_ProfEndNamedEvent();
  Sys_ProfBeginNamedEvent(0xFFFF7F50, "SetNextSnap-Glass");
  CG_Glass_ApplyChanges((LocalClientNum_t)v3);
  Sys_ProfEndNamedEvent();
  CG_SnapshotMP_TransitionKillcam((LocalClientNum_t)v3);
  SND_ReleasePhysicsQueryBlock();
  CG_PlayersMP_UpdatePerSnapshotCullingPriorities((const LocalClientNum_t)v3, v110);
  CG_VehicleMP_UpdateCullingPriorities((const LocalClientNum_t)v3, v110);
  if ( (_BYTE)CgEntitySystem::ms_allocatedType != HALF_HALF )
  {
    LODWORD(v128) = (unsigned __int8)CgEntitySystem::ms_allocatedType;
    LODWORD(v127) = 2;
    LODWORD(v126) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 299, ASSERT_TYPE_ASSERT, "(ms_allocatedType == SubSystem::ENTITY_SYSTEM_TYPE)", "%s\n\tTrying to access the entity system for localClientNum %d but the entity system type does not match-> System Type:%d  Allocated Type:%d\n", "ms_allocatedType == SubSystem::ENTITY_SYSTEM_TYPE", v126, v127, v128) )
      __debugbreak();
  }
  if ( (unsigned int)v3 >= CgEntitySystem::ms_allocatedCount )
  {
    LODWORD(v126) = CgEntitySystem::ms_allocatedCount;
    LODWORD(vehicleSystem) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 300, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", vehicleSystem, v126) )
      __debugbreak();
  }
  if ( !CgEntitySystem::ms_entitySystemArray[v3] )
  {
    LODWORD(v126) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 301, ASSERT_TYPE_ASSERT, "(ms_entitySystemArray[localClientNum])", "%s\n\tTrying to access unallocated entity system for localClientNum %d\n", "ms_entitySystemArray[localClientNum]", v126) )
      __debugbreak();
  }
  CgEntitySystem::BuildEntityWorkers(CgEntitySystem::ms_entitySystemArray[v3], v110->serverTime);
  CG_Train_SnapshotFinishSetNextSnap((const LocalClientNum_t)v3, v2->serverTime);
  if ( *(_BYTE *)(v60 + 807613) )
    CG_TransitionCinematicCamera((LocalClientNum_t)v3);
  Sys_ProfBeginNamedEvent(0xFFD2B48C, "SetNextSnap-LUI");
  LUIBinding::SnapshotUpdate((LocalClientNum_t)v3);
  Sys_ProfEndNamedEvent();
  if ( (v98->ps.pm_type == 5) == (v110->ps.pm_type == 5) && v98->ps.clientNum == v110->ps.clientNum && v98->ps.stats[3] == v110->ps.stats[3] )
    CG_Blur_Transition((LocalClientNum_t)v3);
  else
    CG_Blur_SnapToTargetValue((LocalClientNum_t)v3);
  if ( (*(_BYTE *)(*(_QWORD *)(v60 + 26064) + 8i64) & 8) != 0 && (*(_BYTE *)(*(_QWORD *)(v60 + 26072) + 8i64) & 8) == 0 )
    CG_MainMP_RewindKillcamEffects((LocalClientNum_t)v3, 1);
  *(_DWORD *)(v60 + 512764) = 0;
  v111 = 0;
  v112 = LocalClientStatics;
  if ( cls.maxClients > 0 )
  {
    v113 = 0i64;
    do
    {
      v114 = CG_GetLocalClientGlobals((const LocalClientNum_t)v112->m_localClientNum);
      if ( !v114 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static_inline.h", 25, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
        __debugbreak();
      if ( v114->IsMP(v114) )
      {
        if ( v111 >= v114[1].predictedPlayerState.rxvOmnvars[64].timeModified )
        {
          LODWORD(v126) = v114[1].predictedPlayerState.rxvOmnvars[64].timeModified;
          LODWORD(vehicleSystem) = v111;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_globals_mp_inline.h", 12, ASSERT_TYPE_ASSERT, "(unsigned)( characterIndex ) < (unsigned)( static_cast<int>( m_characterInfoCount ) )", "characterIndex doesn't index static_cast<int>( m_characterInfoCount )\n\t%i not in [0, %i)", vehicleSystem, v126) )
            __debugbreak();
        }
        v115 = (characterInfo_t *)(*(_QWORD *)&v114[1].predictedPlayerState.rxvOmnvars[62] + 14792i64 * v111);
      }
      else
      {
        v115 = CgGlobalsSP::GetCharacterInfo((CgGlobalsSP *)v114, v111);
      }
      if ( !v115 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 4143, ASSERT_TYPE_ASSERT, "(characterInfo)", (const char *)&queryFormat, "characterInfo") )
        __debugbreak();
      if ( !v115->infoValid )
      {
        if ( (unsigned int)v111 > 0x9E4 )
        {
          LODWORD(v126) = v111;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 55, ASSERT_TYPE_ASSERT, "( ( handle >= 0 && handle < ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) ) )", "%s\n\t( handle ) = %i", "( handle >= 0 && handle < ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) )", v126) )
            __debugbreak();
        }
        if ( (unsigned int)v3 >= 2 )
        {
          LODWORD(v126) = 2;
          LODWORD(vehicleSystem) = v3;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 58, ASSERT_TYPE_ASSERT, "(unsigned)( localClientIndex ) < (unsigned)( (2) )", "localClientIndex doesn't index MAX_DOBJ_CLIENTS\n\t%i not in [0, %i)", vehicleSystem, v126) )
            __debugbreak();
        }
        if ( (unsigned int)(v111 + 2533 * v3) >= 0x13CA )
        {
          LODWORD(v126) = v111 + 2533 * v3;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 62, ASSERT_TYPE_ASSERT, "( ( (unsigned)handle < ( sizeof( *array_counter( clientObjMap ) ) + 0 ) ) )", "%s\n\t( handle ) = %i", "( (unsigned)handle < ( sizeof( *array_counter( clientObjMap ) ) + 0 ) )", v126) )
            __debugbreak();
        }
        v116 = clientObjMap[2533 * v3 + v113];
        if ( clientObjMap[2533 * v3 + v113] )
        {
          if ( v116 >= (unsigned int)s_objCount )
          {
            LODWORD(v126) = clientObjMap[2533 * v3 + v113];
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 64, ASSERT_TYPE_ASSERT, "( ( !objIndex || ( (unsigned)objIndex < s_objCount ) ) )", "%s\n\t( objIndex ) = %i", "( !objIndex || ( (unsigned)objIndex < s_objCount ) )", v126) )
              __debugbreak();
          }
          if ( s_objBuf[v116] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 4147, ASSERT_TYPE_ASSERT, "(!Com_GetClientDObj( i, localClientNum ))", (const char *)&queryFormat, "!Com_GetClientDObj( i, localClientNum )") )
            __debugbreak();
        }
      }
      ++v111;
      ++v113;
    }
    while ( v111 < cls.maxClients );
    v60 = (__int64)v135;
    v110 = nextSnap;
  }
  if ( cls.maxAgents > 0 )
  {
    v117 = 0;
    do
    {
      if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 116, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
        __debugbreak();
      if ( v117 >= ComCharacterLimits::ms_gameData.m_agentCount )
      {
        if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 116, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
          __debugbreak();
        LODWORD(v126) = ComCharacterLimits::ms_gameData.m_agentCount;
        LODWORD(vehicleSystem) = v117;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 186, ASSERT_TYPE_ASSERT, "(unsigned)( agentIndex ) < (unsigned)( ComCharacterLimits::GetAgentMaxCount() )", "agentIndex doesn't index ComCharacterLimits::GetAgentMaxCount()\n\t%i not in [0, %i)", vehicleSystem, v126) )
          __debugbreak();
      }
      if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 168, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
        __debugbreak();
      v118 = v117 + ComCharacterLimits::ms_gameData.m_clientCount;
      v119 = CG_GetLocalClientGlobals((const LocalClientNum_t)v112->m_localClientNum);
      if ( !v119 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static_inline.h", 25, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
        __debugbreak();
      if ( v119->IsMP(v119) )
      {
        if ( v118 >= v119[1].predictedPlayerState.rxvOmnvars[64].timeModified )
        {
          LODWORD(v126) = v119[1].predictedPlayerState.rxvOmnvars[64].timeModified;
          LODWORD(vehicleSystem) = v118;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_globals_mp_inline.h", 12, ASSERT_TYPE_ASSERT, "(unsigned)( characterIndex ) < (unsigned)( static_cast<int>( m_characterInfoCount ) )", "characterIndex doesn't index static_cast<int>( m_characterInfoCount )\n\t%i not in [0, %i)", vehicleSystem, v126) )
            __debugbreak();
        }
        v120 = (characterInfo_t *)(*(_QWORD *)&v119[1].predictedPlayerState.rxvOmnvars[62] + 14792i64 * (int)v118);
      }
      else
      {
        v120 = CgGlobalsSP::GetCharacterInfo((CgGlobalsSP *)v119, v118);
      }
      if ( !v120 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 4154, ASSERT_TYPE_ASSERT, "(characterInfo)", (const char *)&queryFormat, "characterInfo") )
        __debugbreak();
      if ( !v120->infoValid )
      {
        if ( v118 > 0x9E4 )
        {
          LODWORD(v126) = v118;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 55, ASSERT_TYPE_ASSERT, "( ( handle >= 0 && handle < ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) ) )", "%s\n\t( handle ) = %i", "( handle >= 0 && handle < ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) )", v126) )
            __debugbreak();
        }
        if ( (unsigned int)v3 >= 2 )
        {
          LODWORD(v126) = 2;
          LODWORD(vehicleSystem) = v3;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 58, ASSERT_TYPE_ASSERT, "(unsigned)( localClientIndex ) < (unsigned)( (2) )", "localClientIndex doesn't index MAX_DOBJ_CLIENTS\n\t%i not in [0, %i)", vehicleSystem, v126) )
            __debugbreak();
        }
        v121 = v118 + 2533 * v3;
        if ( v121 >= 0x13CA )
        {
          LODWORD(v126) = v118 + 2533 * v3;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 62, ASSERT_TYPE_ASSERT, "( ( (unsigned)handle < ( sizeof( *array_counter( clientObjMap ) ) + 0 ) ) )", "%s\n\t( handle ) = %i", "( (unsigned)handle < ( sizeof( *array_counter( clientObjMap ) ) + 0 ) )", v126) )
            __debugbreak();
        }
        v122 = clientObjMap[v121];
        if ( v122 )
        {
          if ( v122 >= (unsigned int)s_objCount )
          {
            LODWORD(v126) = v122;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 64, ASSERT_TYPE_ASSERT, "( ( !objIndex || ( (unsigned)objIndex < s_objCount ) ) )", "%s\n\t( objIndex ) = %i", "( !objIndex || ( (unsigned)objIndex < s_objCount ) )", v126) )
              __debugbreak();
          }
          if ( s_objBuf[v122] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 4158, ASSERT_TYPE_ASSERT, "(!Com_GetClientDObj( entityIndex, localClientNum ))", (const char *)&queryFormat, "!Com_GetClientDObj( entityIndex, localClientNum )") )
            __debugbreak();
        }
      }
      ++v117;
    }
    while ( (int)v117 < cls.maxAgents );
    v60 = (__int64)v135;
    v110 = nextSnap;
  }
  if ( !*(_DWORD *)(v60 + 741592) )
  {
    if ( GameModeFlagValues::ms_mpValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 190, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a MP-only context", "IsFlagActive( index )") )
      __debugbreak();
    if ( GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&v110->ps.otherFlags, ACTIVE, 0x22u) )
      goto LABEL_376;
    if ( GameModeFlagValues::ms_mpValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 190, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a MP-only context", "IsFlagActive( index )") )
      __debugbreak();
    if ( GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&v110->ps.otherFlags, ACTIVE, 0x21u) )
    {
LABEL_376:
      v123 = CgStatic::GetCharacterInfo(v112, v110->ps.clientNum);
      if ( !v123 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 4166, ASSERT_TYPE_ASSERT, "(playerCI)", (const char *)&queryFormat, "playerCI") )
        __debugbreak();
      MLGSpectator = CgMLGSpectator::GetMLGSpectator((const LocalClientNum_t)v3);
      CgMLGSpectator::SetTeam(MLGSpectator, (const team_t)v123->team);
    }
  }
  ScriptableCl_ProcessErrors();
LABEL_381:
  Sys_ProfEndNamedEvent();
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

void __fastcall CG_SnapshotMP_TransitionKillcam(LocalClientNum_t localClientNum, __int64 a2, double a3)
{
  __int128 v3; 
  __int64 v4; 
  __int64 v5; 
  __int64 v6; 
  int inKillCam; 
  const snapshot_t *nextSnap; 
  cg_t *v9; 
  __int64 v10; 
  Weapon *killcamFXWeapons; 
  __m256i v12; 
  __int128 v13; 
  double v14; 
  FxCombinedDef v15; 
  int v16; 
  CgStatic *LocalClientStatics; 
  __int64 v18; 
  unsigned int v19; 
  __int64 v20; 
  cgs_t *LocalClientStaticGlobals; 
  signed int v22; 
  __int64 v23; 
  __int16 *v24; 
  __int64 v25; 
  CgEntitySystem *EntitySystem; 
  __int64 v27; 
  __int16 v28; 
  unsigned int v29; 
  __int64 v30; 
  XAnimTree *pXAnimTree; 
  scr_string_t AnimsetNameByIndex; 
  unsigned int v33; 
  unsigned int v34; 
  XAnim_s *anims; 
  const scrContext_t *v36; 
  XAnim_s *v37; 
  int XAnimIndex; 
  unsigned int m_characterCount; 
  int *p_animationNumber; 
  unsigned int i; 
  CgEntitySystem *v42; 
  centity_t *v43; 
  XAnimTree *v44; 
  unsigned int v45; 
  const XAnim_s *v46; 
  const XAnim_s *v47; 
  int v48; 
  int v49; 
  centity_t *Entity; 
  centity_t *v51; 
  CgVehicleSystem *VehicleSystem; 
  const VehicleClient *Client; 
  const VehicleDef *ClientDef; 
  bool inAltWeaponMode; 
  CgWeaponMap *Instance; 
  const Weapon *WeaponForEntity; 
  __int64 v58; 
  WeaponDef *v59; 
  guidedMissileType_t guidedMissileType; 
  weapType_t WeaponType; 
  int v62; 
  WeapStickinessType v63; 
  centity_t *LinkToParent; 
  entityState_t *p_nextState; 
  unsigned int eType; 
  int v67; 
  bool v68; 
  int eventParm; 
  __int64 v70; 
  float v71; 
  float v72; 
  int v73; 
  const snapshot_t *v74; 
  const dvar_t *v75; 
  const char *v76; 
  XAnimSubTreeID *pOutAnimSubtreeID; 
  XAnimCurveID *pOutAnimCurveID; 
  int *pOutAnimtreeIndex; 
  __int64 v80; 
  char v81; 
  unsigned int outOffsetBack; 
  const snapshot_t *NextSnap_Internal; 
  BgAnimStatic *bgameAnim; 
  XAnimSubTreeID v85[2]; 
  unsigned int pOutAnimIndex; 
  unsigned int index; 
  CgGlobalsMP *LocalClientGlobals; 
  unsigned int pOutGraftNode; 
  FXRegisteredDef registeredDef; 
  Weapon r_weapon; 
  __int128 v92; 

  v4 = localClientNum;
  v81 = 0;
  LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals(localClientNum);
  v5 = (__int64)LocalClientGlobals;
  NextSnap_Internal = CG_SnapshotMP_GetNextSnap_Internal((const LocalClientNum_t)v4);
  v6 = (__int64)NextSnap_Internal;
  if ( !NextSnap_Internal && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 1568, ASSERT_TYPE_ASSERT, "(nextSnap)", (const char *)&queryFormat, "nextSnap") )
    __debugbreak();
  inKillCam = LocalClientGlobals->inKillCam;
  if ( inKillCam )
    goto LABEL_101;
  if ( LocalClientGlobals->predictedPlayerState.deltaTime )
  {
    Com_Printf(14, "CG_TransitionKillcam: Going IN TO killcam with deltaTime %d at time %d.\n", (unsigned int)LocalClientGlobals->predictedPlayerState.deltaTime, (unsigned int)LocalClientGlobals->nextSnap->serverTime);
    CG_SnapshotMP_TransitionKillcam_Entities((LocalClientNum_t)v4);
    CG_SoundEntity_StopAllSounds((LocalClientNum_t)v4);
    ScriptableCl_ClearAnimTimes((const LocalClientNum_t)v4);
    nextSnap = LocalClientGlobals->nextSnap;
    LocalClientGlobals->inKillCam = 1;
    v81 = 1;
    *(_DWORD *)(v5 + 741600) = nextSnap->serverTime;
    *(_DWORD *)(v5 + 741756) = 0;
    *(_DWORD *)(v5 + 363816) = *(_DWORD *)(v5 + 12104);
    CG_VisionSetSetBlendOff((ClientVisionSetData *)(v5 + 304604), VISIONSET_BLENDTYPE_NVG_FADE);
    CG_VisionSetSetBlendOff((ClientVisionSetData *)(v5 + 304604), VISIONSET_BLENDTYPE_NVG_BLIND);
    CG_VisionSetSetBlendOff((ClientVisionSetData *)(v5 + 304604), VISIONSET_BLENDTYPE_NVG_BLIND_WEIGHTED);
    CG_VisionSetSetBlendOff((ClientVisionSetData *)(v5 + 304604), VISIONSET_BLENDTYPE_WEAPON_ADS);
    *(_BYTE *)(v5 + 741608) = 0;
    *(_QWORD *)(v5 + 741616) = 2047i64;
    *(_DWORD *)(v5 + 741760) = 0;
    *(_DWORD *)(v5 + 741596) = 0;
    *(_DWORD *)(v5 + 741696) = 0;
    *(_QWORD *)(v5 + 741672) = 0i64;
    *(_DWORD *)(v5 + 741680) = 0;
    *(_QWORD *)(v5 + 741624) = 2047i64;
    *(_QWORD *)(v5 + 741632) = 0i64;
    *(_QWORD *)(v5 + 741640) = 0i64;
    *(_QWORD *)(v5 + 741648) = 0i64;
    *(_QWORD *)(v5 + 741656) = 0i64;
    CG_SetEquippedOffHand((LocalClientNum_t)v4, &NULL_WEAPON);
    CG_MainMP_RewindKillcamEffects((LocalClientNum_t)v4, -*(_DWORD *)(v5 + 12104));
    CG_Gesture_TransitionKillcamGestures((LocalClientNum_t)v4, (const playerState_s *const)(v5 + 8));
    CG_AnimTreeMP_ClearScriptModelAnims((LocalClientNum_t)v4);
    v9 = CG_GetLocalClientGlobals((const LocalClientNum_t)v4);
    v10 = 5i64;
    killcamFXWeapons = v9->killcamFXWeapons;
    do
    {
      v12 = *(__m256i *)&killcamFXWeapons->weaponIdx;
      v13 = *(_OWORD *)&killcamFXWeapons->attachmentVariationIndices[5];
      v14 = *(double *)&killcamFXWeapons->attachmentVariationIndices[21];
      *(_DWORD *)&r_weapon.weaponCamo = *(_DWORD *)&killcamFXWeapons->weaponCamo;
      *(__m256i *)&r_weapon.weaponIdx = v12;
      *(_OWORD *)&r_weapon.attachmentVariationIndices[5] = v13;
      *(double *)&r_weapon.attachmentVariationIndices[21] = v14;
      if ( LOWORD(a3) )
      {
        if ( BG_ValidateWeaponNumber(&r_weapon) )
        {
          v15.particleSystemDef = BG_ProjExplosionEffect(&r_weapon, 0).particleSystemDef;
          if ( v15.particleSystemDef )
          {
            v16 = v9->time - v9->predictedPlayerState.deltaTime;
            registeredDef.m_particleSystemDef = v15.particleSystemDef;
            FX_KillEffectDefNewerThan((LocalClientNum_t)v4, &registeredDef, v16);
          }
        }
      }
      ++killcamFXWeapons;
      --v10;
    }
    while ( v10 );
    FX_ClearViewmodelMarks((LocalClientNum_t)v4);
    CG_Camera_KillCam_Transition_In((LocalClientNum_t)v4);
    CG_Door_TransitionKillcam((const LocalClientNum_t)v4);
    inKillCam = *(_DWORD *)(v5 + 741592);
  }
  if ( inKillCam )
  {
LABEL_101:
    if ( !*(_DWORD *)(v5 + 12104) )
    {
      v92 = v3;
      LocalClientStatics = CgStatic::GetLocalClientStatics((const LocalClientNum_t)v4);
      bgameAnim = (BgAnimStatic *)LocalClientStatics->GetAnimStatics(LocalClientStatics);
      if ( !bgameAnim && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 1652, ASSERT_TYPE_ASSERT, "(bgameAnim)", (const char *)&queryFormat, "bgameAnim") )
        __debugbreak();
      *(_DWORD *)(v5 + 363816) = *(_DWORD *)(v5 + 12104);
      v18 = *(_QWORD *)(v5 + 26072);
      v19 = *(_DWORD *)(v18 + 12) - *(_DWORD *)(v5 + 741600);
      Com_Printf(14, "CG_TransitionKillcam: Going OUT OF killcam with at time %d. Lasted %d seconds.\n", *(unsigned int *)(v18 + 12), v19);
      CG_SnapshotMP_TransitionKillcam_Entities((LocalClientNum_t)v4);
      CG_SoundEntity_StopAllSounds((LocalClientNum_t)v4);
      CG_SnapshotMP_KillEffectsOnCharacters((LocalClientNum_t)v4);
      CG_Camera_KillCam_Transition_Out((LocalClientNum_t)v4);
      v20 = *(_QWORD *)(v5 + 26072);
      *(_DWORD *)(v5 + 741592) = 0;
      *(_DWORD *)(v5 + 741600) = 0;
      *(_DWORD *)(v5 + 741604) = *(_DWORD *)(v20 + 12);
      CG_StopCinematicCameras((LocalClientNum_t)v4);
      LocalClientStaticGlobals = CG_GetLocalClientStaticGlobals((const LocalClientNum_t)v4);
      CG_MainMP_RewindKillcamEffects((LocalClientNum_t)v4, v19);
      CG_AnimTreeMP_ClearScriptModelAnims((LocalClientNum_t)v4);
      v22 = 0;
      outOffsetBack = 0;
      if ( *(int *)(v6 + 24) > 0 )
      {
        v23 = (__int64)NextSnap_Internal;
        v24 = (__int16 *)(v6 + 21452);
        while ( v24[4] == 2 )
        {
LABEL_63:
          ++v22;
          v24 += 124;
          outOffsetBack = v22;
          if ( v22 >= *(_DWORD *)(v23 + 24) )
            goto LABEL_64;
        }
        v25 = *v24;
        EntitySystem = CgEntitySystem::GetEntitySystem((const LocalClientNum_t)v4);
        if ( (unsigned int)v25 >= 0x800 )
        {
          LODWORD(pOutAnimCurveID) = 2048;
          LODWORD(pOutAnimSubtreeID) = v25;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", pOutAnimSubtreeID, pOutAnimCurveID) )
            __debugbreak();
        }
        v27 = (__int64)&EntitySystem->m_entities[v25];
        v28 = *(_WORD *)(v27 + 408);
        if ( v28 == 6 && *(_DWORD *)(v27 + 416) == 11 && *(_DWORD *)(v27 + 292) == 11 || (CG_SnapshotMP_ResetEntity_Internal((LocalClientNum_t)v4, (centity_t *)v27, v28 != 18, 1), v28 != 18) )
        {
LABEL_62:
          v23 = (__int64)NextSnap_Internal;
          goto LABEL_63;
        }
        if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 160, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
          __debugbreak();
        v29 = *(__int16 *)(v27 + 400) - ComCharacterLimits::ms_gameData.m_clientCorpseCount - ComCharacterLimits::ms_gameData.m_characterCount;
        if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 137, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
          __debugbreak();
        if ( v29 >= ComCharacterLimits::ms_gameData.m_agentCorpseCount )
        {
          if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 137, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
            __debugbreak();
          LODWORD(pOutAnimCurveID) = ComCharacterLimits::ms_gameData.m_agentCorpseCount;
          LODWORD(pOutAnimSubtreeID) = v29;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 1714, ASSERT_TYPE_ASSERT, "(unsigned)( corpseIndex ) < (unsigned)( ComCharacterLimits::GetAgentCorpseMaxCount() )", "corpseIndex doesn't index ComCharacterLimits::GetAgentCorpseMaxCount()\n\t%i not in [0, %i)", pOutAnimSubtreeID, pOutAnimCurveID) )
            __debugbreak();
        }
        if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 137, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
          __debugbreak();
        if ( (unsigned __int64)(int)ComCharacterLimits::ms_gameData.m_agentCorpseCount > 8 )
        {
          if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 137, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
            __debugbreak();
          LODWORD(v80) = 8;
          LODWORD(pOutAnimtreeIndex) = ComCharacterLimits::ms_gameData.m_agentCorpseCount;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 1715, ASSERT_TYPE_ASSERT, "( ComCharacterLimits::GetAgentCorpseMaxCount() ) <= ( ( sizeof( *array_counter( cgs->agentCorpseInfo ) ) + 0 ) )", "%s <= %s\n\t%i, %i", "ComCharacterLimits::GetAgentCorpseMaxCount()", "ARRAY_COUNT( cgs->agentCorpseInfo )", pOutAnimtreeIndex, v80) )
            __debugbreak();
        }
        v30 = (int)v29;
        pXAnimTree = LocalClientStaticGlobals->agentCorpseInfo[v30].ci.pXAnimTree;
        if ( LocalClientStaticGlobals->agentCorpseInfo[v30].ci.usingAnimState )
        {
          AnimsetNameByIndex = BG_AnimationState_GetAnimsetNameByIndex(LocalClientStaticGlobals->agentCorpseInfo[v30].ci.characterAnim.animClass);
          BG_Animset_GetAnimIndexFromStateIndexAndEntry(AnimsetNameByIndex, LocalClientStaticGlobals->agentCorpseInfo[v30].ci.characterAnim.animState, LocalClientStaticGlobals->agentCorpseInfo[v30].ci.characterAnim.animEntry, &pOutAnimIndex, &pOutGraftNode, v85, NULL, (int *)&index, 0);
          v33 = index;
          v34 = pOutAnimIndex;
          if ( (index & 0x80000000) != 0 )
          {
            v22 = outOffsetBack;
            anims = bgameAnim->animClassTrees[LocalClientStaticGlobals->agentCorpseInfo[v30].ci.characterAnim.animClass].anims;
LABEL_58:
            if ( v34 && !XAnimIsLooped(anims, v34) && !XAnimGetNumChildren(anims, v34) )
              XAnimSetTime(pXAnimTree, 0, XANIM_SUBTREE_DEFAULT, v34, 1.0);
            goto LABEL_62;
          }
          v36 = ScriptContext_GetFromAnimUser(0);
          v37 = Scr_GetAnims(v36, v33);
          v22 = outOffsetBack;
        }
        else
        {
          if ( PlayerASM_IsEnabled() )
            XAnimIndex = BG_PlayerASM_GetXAnimIndex(LocalClientStaticGlobals->agentCorpseInfo[v30].ci.legs.animsetIndex, LocalClientStaticGlobals->agentCorpseInfo[v30].ci.legs.animationNumber);
          else
            XAnimIndex = BG_AnimationMP_GetXAnimIndex(bgameAnim, (const SuitAnimType)LocalClientStaticGlobals->agentCorpseInfo[v30].ci.legs.suitAnimIndex, LocalClientStaticGlobals->agentCorpseInfo[v30].ci.legs.animationNumber & 0xFFFFEFFF);
          v34 = XAnimIndex;
          v37 = XAnimGetAnims(pXAnimTree);
        }
        anims = v37;
        goto LABEL_58;
      }
LABEL_64:
      if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 130, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
        __debugbreak();
      if ( (unsigned __int64)(int)ComCharacterLimits::ms_gameData.m_clientCorpseCount > 8 )
      {
        if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 130, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
          __debugbreak();
        LODWORD(v80) = 8;
        LODWORD(pOutAnimtreeIndex) = ComCharacterLimits::ms_gameData.m_clientCorpseCount;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 1754, ASSERT_TYPE_ASSERT, "( ComCharacterLimits::GetClientCorpseMaxCount() ) <= ( ( sizeof( *array_counter( cgs->corpseinfo ) ) + 0 ) )", "%s <= %s\n\t%i, %i", "ComCharacterLimits::GetClientCorpseMaxCount()", "ARRAY_COUNT( cgs->corpseinfo )", pOutAnimtreeIndex, v80) )
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
          v42 = CgEntitySystem::GetEntitySystem((const LocalClientNum_t)v4);
          if ( i >= 0x800 )
          {
            LODWORD(pOutAnimCurveID) = 2048;
            LODWORD(pOutAnimSubtreeID) = i;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", pOutAnimSubtreeID, pOutAnimCurveID) )
              __debugbreak();
          }
          v43 = &v42->m_entities[i];
          if ( !v43 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 1764, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
            __debugbreak();
          if ( CG_Pose_IsKillcamRagdoll(&v43->pose) )
            CG_SnapshotMP_ResetEntity_Internal((LocalClientNum_t)v4, v43, 0, 1);
          if ( BG_IsRagdollTrajectory(&v43->nextState.lerp.pos) )
            CG_Pose_StopAnimatedRagdoll(&v43->pose);
          v44 = *(XAnimTree **)(p_animationNumber - 7);
          if ( PlayerASM_IsEnabled() )
          {
            v45 = BG_PlayerASM_GetXAnimIndex(p_animationNumber[4], *p_animationNumber);
            v46 = BG_PlayerASM_GetAnims(p_animationNumber[4]);
          }
          else
          {
            v45 = BG_AnimationMP_GetXAnimIndex(bgameAnim, (const SuitAnimType)*(p_animationNumber - 1), *p_animationNumber & 0xFFFFEFFF);
            v46 = XAnimGetAnims(v44);
          }
          v47 = v46;
          if ( v45 && !XAnimIsLooped(v46, v45) && !XAnimGetNumChildren(v47, v45) )
            XAnimSetTime(v44, 0, XANIM_SUBTREE_DEFAULT, v45, 1.0);
        }
        p_animationNumber += 6726;
      }
      FX_ClearViewmodelMarks((LocalClientNum_t)v4);
      v5 = (__int64)LocalClientGlobals;
      v6 = (__int64)NextSnap_Internal;
      inKillCam = LocalClientGlobals->inKillCam;
    }
    if ( inKillCam )
    {
      *(_DWORD *)(v5 + 741752) = *(char *)(v6 + 12148);
      v48 = *(__int16 *)(v6 + 12140);
      v49 = *(_DWORD *)(v5 + 741596);
      *(_DWORD *)(v5 + 741624) = 2047;
      if ( v48 == 2047 )
      {
        *(_DWORD *)(v5 + 741596) = 0;
        *(_DWORD *)(v5 + 741616) = 2047;
        goto $LN76_11;
      }
      if ( v48 != *(_DWORD *)(v5 + 741616) )
      {
        Entity = CG_GetEntity((const LocalClientNum_t)v4, v48);
        v51 = Entity;
        if ( (Entity->flags & 1) != 0 )
        {
          *(_DWORD *)(v5 + 741624) = v48;
          *(_DWORD *)(v5 + 741616) = 2047;
          switch ( Entity->pose.eType )
          {
            case 4u:
              inAltWeaponMode = Entity->nextState.inAltWeaponMode;
              Instance = CgWeaponMap::GetInstance((const LocalClientNum_t)v4);
              WeaponForEntity = BG_GetWeaponForEntity(Instance, &v51->nextState);
              LODWORD(v58) = WeaponForEntity->weaponIdx;
              if ( (unsigned int)v58 > bg_lastParsedWeaponIndex )
              {
                LODWORD(pOutAnimCurveID) = bg_lastParsedWeaponIndex;
                LODWORD(pOutAnimSubtreeID) = WeaponForEntity->weaponIdx;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1203, ASSERT_TYPE_ASSERT, "( weaponIdx ) <= ( bg_lastParsedWeaponIndex )", "weaponIdx not in [0, bg_lastParsedWeaponIndex]\n\t%u not in [0, %u]", pOutAnimSubtreeID, pOutAnimCurveID) )
                  __debugbreak();
              }
              v58 = (unsigned __int16)v58;
              if ( !bg_weaponDefs[(unsigned __int16)v58] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1204, ASSERT_TYPE_ASSERT, "(bg_weaponDefs[weaponIdx])", (const char *)&queryFormat, "bg_weaponDefs[weaponIdx]") )
                __debugbreak();
              v59 = bg_weaponDefs[v58];
              if ( !v59 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 1871, ASSERT_TYPE_ASSERT, "(weapDef)", (const char *)&queryFormat, "weapDef") )
                __debugbreak();
              guidedMissileType = v59->guidedMissileType;
              if ( guidedMissileType != MISSILE_GUIDANCE_JAVELIN || v51->nextState.lerp.u.anonymous.data[3] )
              {
                if ( guidedMissileType == MISSILE_GUIDANCE_HELLFIRE )
                {
                  *(_DWORD *)(v5 + 741596) = 9;
                }
                else if ( BG_GetWeaponClass(WeaponForEntity, inAltWeaponMode) == WEAPCLASS_ROCKETLAUNCHER )
                {
                  *(_DWORD *)(v5 + 741596) = 6;
                }
                else
                {
                  WeaponType = BG_GetWeaponType(WeaponForEntity, inAltWeaponMode);
                  v62 = 3;
                  if ( WeaponType == WEAPTYPE_PROJECTILE )
                    v62 = 5;
                  *(_DWORD *)(v5 + 741596) = v62;
                }
              }
              else
              {
                *(_DWORD *)(v5 + 741596) = 8;
              }
              *(_DWORD *)(v5 + 741664) = 0;
              if ( v51->nextState.groundEntityNum != 2047 )
              {
                v63 = BG_WeaponStickinessType(WeaponForEntity, inAltWeaponMode);
                *(_DWORD *)(v5 + 741664) = 1;
                if ( ((v63 - 1) & 0xFFFFFFFA) != 0 || v63 == WEAPSTICKINESS_GROUND_ORIENT )
                {
                  if ( (unsigned int)(v63 - 3) <= 2 )
                    *(_DWORD *)(v5 + 741664) = 2;
                }
                else
                {
                  *(_DWORD *)(v5 + 741664) = 3;
                }
              }
              LinkToParent = CG_Entity_GetLinkToParent((LocalClientNum_t)v4, v51);
              if ( v59->stickToPlayers && LinkToParent )
              {
                p_nextState = &LinkToParent->nextState;
                if ( BG_IsCharacterEntity(&LinkToParent->nextState) )
                  goto LABEL_142;
                if ( !p_nextState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 1983, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
                  __debugbreak();
                eType = (unsigned __int16)p_nextState->eType;
                if ( (unsigned __int16)eType <= 0x15u )
                {
                  v67 = 2359300;
                  if ( _bittest(&v67, eType) )
                  {
LABEL_142:
                    v68 = *(_BYTE *)(v5 + 741608) == 0;
                    v48 = 2047;
                    *(_DWORD *)(v5 + 741664) = 4;
                    if ( v68 )
                    {
                      if ( *(_DWORD *)(v5 + 741624) == 2047 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 1918, ASSERT_TYPE_ASSERT, "(cgameGlob->killCamLastEntityNum != ENTITYNUM_NONE)", (const char *)&queryFormat, "cgameGlob->killCamLastEntityNum != ENTITYNUM_NONE") )
                        __debugbreak();
                    }
                    else
                    {
                      *(_DWORD *)(v5 + 741616) = 2047;
                      *(_DWORD *)(v5 + 741624) = 2047;
                    }
                  }
                }
              }
              if ( BG_IsThrowingAxe(WeaponForEntity) && v51->nextState.lerp.u.anonymous.data[2] + Dvar_GetInt_Internal_DebugName(DVARINT_cg_throwingAxeKillCamEntIgnoreTime, "cg_throwingAxeKillCamEntIgnoreTime") > *(_DWORD *)(v5 + 26092) )
              {
                v48 = 2047;
                *(_DWORD *)(v5 + 741596) = 0;
                *(_DWORD *)(v5 + 741624) = 2047;
              }
              if ( *((char *)&v51->nextState.lerp.u.ragdollConstraint + 16) < 0 )
              {
                *(_DWORD *)(v5 + 741616) = v48;
                *(_DWORD *)(v5 + 741664) = 5;
                goto LABEL_163;
              }
              break;
            case 0xBu:
              if ( Entity->nextState.staticState.player.stowedWeaponHandle.m_mapEntryId == 2047 )
              {
                *(_DWORD *)(v5 + 741596) = 7;
              }
              else
              {
                *(_DWORD *)(v5 + 741624) = 2047;
                v48 = 2047;
                *(_DWORD *)(v5 + 741596) = 0;
              }
              break;
            case 0xCu:
              VehicleSystem = CgVehicleSystem::GetVehicleSystem((const LocalClientNum_t)v4);
              Client = CgVehicleSystem::GetClient(VehicleSystem, v51);
              ClientDef = CgVehicleSystem::GetClientDef(Client);
              *(_DWORD *)(v5 + 741596) = 1;
              *(vec3_t *)(v5 + 741684) = ClientDef->killcamOffset;
              break;
            case 0xEu:
              *(_DWORD *)(v5 + 741596) = 10;
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
              *(_DWORD *)(v5 + 741596) = eventParm;
              if ( eventParm == 4 )
              {
                BG_ScriptMoverKillcam_UnpackOffset(v51->nextState.eventParm2, (unsigned int *)&bgameAnim, &outOffsetBack);
                v70 = outOffsetBack;
                *(_DWORD *)(v5 + 741740) = 0;
                v71 = (float)v70;
                v72 = (float)(unsigned int)bgameAnim;
                *(float *)(v5 + 741744) = v71;
                *(float *)(v5 + 741748) = v72;
              }
              else if ( eventParm > 9 || !eventParm )
              {
LABEL_160:
                *(_DWORD *)(v5 + 741596) = 2;
              }
              break;
          }
$LN76_11:
          v74 = NextSnap_Internal;
          if ( v81 || v48 == *(_DWORD *)(v5 + 741612) || v48 != SLOWORD(NextSnap_Internal[758].serverTime) )
            goto LABEL_175;
          if ( *(_DWORD *)(v5 + 741596) == 7 )
          {
            v75 = DVARINT_cg_killCamTurretLerpTime;
            if ( !DVARINT_cg_killCamTurretLerpTime )
            {
              v76 = "cg_killCamTurretLerpTime";
LABEL_172:
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", v76) )
                __debugbreak();
            }
          }
          else
          {
            v75 = DVARINT_cg_killCamDefaultLerpTime;
            if ( !DVARINT_cg_killCamDefaultLerpTime )
            {
              v76 = "cg_killCamDefaultLerpTime";
              goto LABEL_172;
            }
          }
          Dvar_CheckFrontendServerThread(v75);
          *(_DWORD *)(v5 + 741760) = *(_DWORD *)(v5 + 26092) + v75->current.integer;
LABEL_175:
          if ( !v49 && *(_DWORD *)(v5 + 741596) )
          {
            if ( (unsigned int)v4 >= 2 )
            {
              LODWORD(pOutAnimCurveID) = 2;
              LODWORD(pOutAnimSubtreeID) = v4;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\vfx\\particles\\particlemanager.h", 866, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", pOutAnimSubtreeID, pOutAnimCurveID) )
                __debugbreak();
            }
            if ( !&g_particleManager[v4] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 2050, ASSERT_TYPE_ASSERT, "(particleManager)", (const char *)&queryFormat, "particleManager") )
              __debugbreak();
            ParticleManager::OnKillcamEntityTransition(&g_particleManager[v4], (LocalClientNum_t)v4);
          }
          *(_DWORD *)(v5 + 741612) = v48;
          *(_DWORD *)(v5 + 741668) = SHIWORD(v74[758].serverTime);
          return;
        }
        v73 = *(_DWORD *)(v5 + 741612);
        if ( v73 == v48 )
          *(_DWORD *)(v5 + 741616) = v73;
      }
LABEL_163:
      v48 = 2047;
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
  centity_t *Entity; 
  __m256i v30; 
  entityType_s eType; 
  __m256i v32; 
  LerpEntityStateInfoVolumeGrapple v33; 
  int *v34; 
  __int64 v35; 
  CgEntitySystem *EntitySystem; 
  __int64 v37; 
  __m256i v38; 
  int v39; 
  unsigned int v40; 
  __int16 v41; 
  int v42; 
  __m256i v43; 
  __int128 v44; 
  char v45; 
  __int64 v46; 
  __int64 v47; 
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
          LODWORD(v47) = v8[1].predictedPlayerState.rxvOmnvars[64].timeModified;
          LODWORD(v46) = v7;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_globals_mp_inline.h", 12, ASSERT_TYPE_ASSERT, "(unsigned)( characterIndex ) < (unsigned)( static_cast<int>( m_characterInfoCount ) )", "characterIndex doesn't index static_cast<int>( m_characterInfoCount )\n\t%i not in [0, %i)", v46, v47) )
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
          LODWORD(v47) = v12[1].predictedPlayerState.rxvOmnvars[64].timeModified;
          LODWORD(v46) = v10;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_globals_mp_inline.h", 12, ASSERT_TYPE_ASSERT, "(unsigned)( characterIndex ) < (unsigned)( static_cast<int>( m_characterInfoCount ) )", "characterIndex doesn't index static_cast<int>( m_characterInfoCount )\n\t%i not in [0, %i)", v46, v47) )
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
          LODWORD(v47) = v10;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 55, ASSERT_TYPE_ASSERT, "( ( handle >= 0 && handle < ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) ) )", "%s\n\t( handle ) = %i", "( handle >= 0 && handle < ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) )", v47) )
            __debugbreak();
        }
        if ( (unsigned int)v1 >= 2 )
        {
          LODWORD(v47) = 2;
          LODWORD(v46) = v1;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 58, ASSERT_TYPE_ASSERT, "(unsigned)( localClientIndex ) < (unsigned)( (2) )", "localClientIndex doesn't index MAX_DOBJ_CLIENTS\n\t%i not in [0, %i)", v46, v47) )
            __debugbreak();
        }
        if ( (unsigned int)(v10 + 2533 * v1) >= 0x13CA )
        {
          LODWORD(v47) = v10 + 2533 * v1;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 62, ASSERT_TYPE_ASSERT, "( ( (unsigned)handle < ( sizeof( *array_counter( clientObjMap ) ) + 0 ) ) )", "%s\n\t( handle ) = %i", "( (unsigned)handle < ( sizeof( *array_counter( clientObjMap ) ) + 0 ) )", v47) )
            __debugbreak();
        }
        v14 = clientObjMap[2533 * v1 + v11];
        if ( clientObjMap[2533 * v1 + v11] )
        {
          if ( v14 >= (unsigned int)s_objCount )
          {
            LODWORD(v47) = clientObjMap[2533 * v1 + v11];
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 64, ASSERT_TYPE_ASSERT, "( ( !objIndex || ( (unsigned)objIndex < s_objCount ) ) )", "%s\n\t( objIndex ) = %i", "( !objIndex || ( (unsigned)objIndex < s_objCount ) )", v47) )
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
          LODWORD(v47) = v18[1].predictedPlayerState.rxvOmnvars[64].timeModified;
          LODWORD(v46) = v17;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_globals_mp_inline.h", 12, ASSERT_TYPE_ASSERT, "(unsigned)( characterIndex ) < (unsigned)( static_cast<int>( m_characterInfoCount ) )", "characterIndex doesn't index static_cast<int>( m_characterInfoCount )\n\t%i not in [0, %i)", v46, v47) )
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
        LODWORD(v47) = ComCharacterLimits::ms_gameData.m_agentCount;
        LODWORD(v46) = v22;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 186, ASSERT_TYPE_ASSERT, "(unsigned)( agentIndex ) < (unsigned)( ComCharacterLimits::GetAgentMaxCount() )", "agentIndex doesn't index ComCharacterLimits::GetAgentMaxCount()\n\t%i not in [0, %i)", v46, v47) )
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
          LODWORD(v47) = v24[1].predictedPlayerState.rxvOmnvars[64].timeModified;
          LODWORD(v46) = v23;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_globals_mp_inline.h", 12, ASSERT_TYPE_ASSERT, "(unsigned)( characterIndex ) < (unsigned)( static_cast<int>( m_characterInfoCount ) )", "characterIndex doesn't index static_cast<int>( m_characterInfoCount )\n\t%i not in [0, %i)", v46, v47) )
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
          LODWORD(v47) = v23;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 55, ASSERT_TYPE_ASSERT, "( ( handle >= 0 && handle < ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) ) )", "%s\n\t( handle ) = %i", "( handle >= 0 && handle < ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) )", v47) )
            __debugbreak();
        }
        if ( (unsigned int)v1 >= 2 )
        {
          LODWORD(v47) = 2;
          LODWORD(v46) = v1;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 58, ASSERT_TYPE_ASSERT, "(unsigned)( localClientIndex ) < (unsigned)( (2) )", "localClientIndex doesn't index MAX_DOBJ_CLIENTS\n\t%i not in [0, %i)", v46, v47) )
            __debugbreak();
        }
        v26 = v23 + 2533 * v1;
        if ( v26 >= 0x13CA )
        {
          LODWORD(v47) = v23 + 2533 * v1;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 62, ASSERT_TYPE_ASSERT, "( ( (unsigned)handle < ( sizeof( *array_counter( clientObjMap ) ) + 0 ) ) )", "%s\n\t( handle ) = %i", "( (unsigned)handle < ( sizeof( *array_counter( clientObjMap ) ) + 0 ) )", v47) )
            __debugbreak();
        }
        v27 = clientObjMap[v26];
        if ( v27 )
        {
          if ( v27 >= (unsigned int)s_objCount )
          {
            LODWORD(v47) = v27;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 64, ASSERT_TYPE_ASSERT, "( ( !objIndex || ( (unsigned)objIndex < s_objCount ) ) )", "%s\n\t( objIndex ) = %i", "( !objIndex || ( (unsigned)objIndex < s_objCount ) )", v47) )
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
    Entity = CG_GetEntity((const LocalClientNum_t)v1, HIDWORD(NextSnap_Internal[31].__vftable));
    v30 = *(__m256i *)&Entity->nextState.lerp.pos.trDelta.y;
    eType = Entity->nextState.eType;
    *(__m256i *)Entity->prevState.eFlags.m_flags = *(__m256i *)Entity->nextState.lerp.eFlags.m_flags;
    v32 = *(__m256i *)Entity->nextState.lerp.apos.trDelta.v;
    *(__m256i *)&Entity->prevState.pos.trDelta.y = v30;
    v33 = *(LerpEntityStateInfoVolumeGrapple *)((char *)&Entity->nextState.lerp.u.infoVolumeGrapple + 20);
    *(__m256i *)Entity->prevState.apos.trDelta.v = v32;
    *(LerpEntityStateInfoVolumeGrapple *)((char *)&Entity->prevState.u.infoVolumeGrapple + 20) = v33;
    Entity->prevEType = truncate_cast<unsigned char,enum entityType_s>(eType);
    Entity->prevOtherEntityNum = Entity->nextState.otherEntityNum;
    Entity->prevPhysicsChildBodyIdx = Entity->nextState.un.vehicleXModel;
    Entity->prevLinkParent = *(_DWORD *)&Entity->nextState.clientLinkInfo & 0x7FF;
    Entity->prevClientNum = Entity->nextState.clientNum;
    Entity->pose.eType = Entity->nextState.eType;
  }
  if ( NextSnap_Internal[1].snapFlags > 0 )
  {
    v34 = &NextSnap_Internal[1340].serverTime;
    do
    {
      v35 = *(__int16 *)v34;
      EntitySystem = CgEntitySystem::GetEntitySystem((const LocalClientNum_t)v1);
      if ( (unsigned int)v35 >= 0x800 )
      {
        LODWORD(v47) = 2048;
        LODWORD(v46) = v35;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", v46, v47) )
          __debugbreak();
      }
      v37 = (__int64)&EntitySystem->m_entities[v35];
      v38 = *(__m256i *)(v37 + 444);
      v39 = *(_DWORD *)(v37 + 612);
      v40 = *(_DWORD *)(v37 + 648) & 0xFFFEFFFF;
      v41 = *(_WORD *)(v37 + 408);
      v42 = *(_DWORD *)(v37 + 648) | 0x10000;
      *(__m256i *)(v37 + 288) = *(__m256i *)(v37 + 412);
      v43 = *(__m256i *)(v37 + 476);
      *(__m256i *)(v37 + 320) = v38;
      v44 = *(_OWORD *)(v37 + 508);
      *(__m256i *)(v37 + 352) = v43;
      if ( (v39 & 0x7FF) == 0 )
        v42 = v40;
      *(_DWORD *)(v37 + 648) = v42;
      *(_OWORD *)(v37 + 384) = v44;
      if ( v41 < 0 || (unsigned __int16)v41 > 0xFFu )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned char __cdecl truncate_cast_impl<unsigned char,enum entityType_s>(enum entityType_s)", "unsigned", (unsigned __int8)v41, "signed", v41) )
          __debugbreak();
        v39 = *(_DWORD *)(v37 + 612);
        v45 = *(_BYTE *)(v37 + 408);
      }
      else
      {
        v45 = v41;
      }
      *(_DWORD *)(v37 + 660) = *(__int16 *)(v37 + 402);
      ++v4;
      v34 += 62;
      *(_DWORD *)(v37 + 664) = *(_DWORD *)(v37 + 600);
      *(_DWORD *)(v37 + 716) = *(_DWORD *)(v37 + 544);
      *(_BYTE *)(v37 + 654) = v41;
      *(_DWORD *)(v37 + 668) = v39 & 0x7FF;
      *(_BYTE *)v37 = v45;
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
  clientState_t *v10; 
  __int64 clientIndex; 
  __int64 v12; 
  __int64 v13; 
  int rank; 
  int prestige; 
  const dvar_t *v16; 
  int integer; 
  const dvar_t *v18; 
  int v19; 
  const dvar_t *v20; 
  int v21; 
  __int64 v22; 
  char *name; 
  char v24; 
  char v25; 
  __int64 v27; 
  char *v28; 
  char v29; 
  char v30; 
  unsigned int v32; 
  int v33; 
  __int64 v34; 
  __int64 numClients; 
  clientState_t *clients; 
  const clientState_t *v37; 
  __int64 v38; 
  cg_t *v39; 
  characterInfo_t *v40; 
  int v41; 
  __int64 v42; 
  __int64 numEntities; 
  entityState_t *entities; 
  char *fmt; 
  entityState_t *v46; 
  characterInfo_t *characterInfo; 
  __int64 checkCustomization; 
  int v49; 
  __int64 v50; 
  CgStatic *v51; 
  CgGlobalsMP *v53; 
  int v54[200]; 
  char dest[72]; 

  if ( !nextSnap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 3204, ASSERT_TYPE_ASSERT, "(nextSnap)", (const char *)&queryFormat, "nextSnap") )
    __debugbreak();
  memset_0(v54, 0, sizeof(v54));
  Sys_ProfBeginNamedEvent(0xFFFFA500, "SetNextSnap-UpdateClients");
  LocalClientGlobals = CgGlobalsMP::GetLocalClientGlobals(localClientNum);
  v53 = LocalClientGlobals;
  LocalClientStatics = CgStatic::GetLocalClientStatics(localClientNum);
  v51 = LocalClientStatics;
  v49 = 0;
  if ( nextSnap->numClients > 0 )
  {
    v7 = 0i64;
    v50 = 0i64;
    v8 = "clientState->clientIndex doesn't index cls.maxClients\n\t%i not in [0, %i)";
    v9 = "!clientIndexProcessed[clientState->clientIndex]";
    while ( 1 )
    {
      v10 = &nextSnap->clients[v7];
      if ( v10->clientIndex >= (unsigned int)cls.maxClients )
      {
        LODWORD(characterInfo) = cls.maxClients;
        LODWORD(v46) = v10->clientIndex;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 3219, ASSERT_TYPE_ASSERT, "(unsigned)( clientState->clientIndex ) < (unsigned)( cls.maxClients )", "clientState->clientIndex doesn't index cls.maxClients\n\t%i not in [0, %i)", v46, characterInfo) )
          __debugbreak();
        v9 = "!clientIndexProcessed[clientState->clientIndex]";
      }
      if ( v54[v10->clientIndex] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 3222, ASSERT_TYPE_ASSERT, "(!clientIndexProcessed[clientState->clientIndex])", (const char *)&queryFormat, "!clientIndexProcessed[clientState->clientIndex]") )
        __debugbreak();
      clientIndex = v10->clientIndex;
      v54[clientIndex] = 1;
      v12 = ((__int64 (__fastcall *)(CgStatic *, __int64, const char *, const char *))LocalClientStatics->GetClientInfo)(LocalClientStatics, clientIndex, v9, v8);
      v13 = v12;
      *(_DWORD *)v12 = v10->clientIndex;
      *(_DWORD *)(v12 + 140) = v10->healthRatio;
      *(_BYTE *)(v12 + 188) = v10->isBot;
      *(_BYTE *)(v12 + 152) = v10->bountyCount;
      *(_DWORD *)(v12 + 156) = v10->perkIconName;
      *(_DWORD *)(v12 + 160) = v10->squadIndex;
      if ( !*(_QWORD *)(v12 + 192) || !*(_QWORD *)(v12 + 200) )
        break;
      rank = v10->rank;
      if ( *(_DWORD *)(v12 + 104) != rank || *(_DWORD *)(v12 + 108) != v10->prestige )
        goto LABEL_19;
LABEL_20:
      Core_strcpy((char *)(v13 + 124), 9ui64, v10->clanAbbrev);
      *(_BYTE *)(v13 + 133) = v10->clanTagType;
      *(_DWORD *)(v13 + 120) = v10->game_extrainfo;
      *(_OWORD *)(v13 + 164) = *(_OWORD *)v10->customization.modelIndex;
      *(double *)(v13 + 180) = *(double *)&v10->customization.modelIndexMLG[1];
      if ( LocalClientGlobals->predictedPlayerState.clientNum == v10->clientIndex )
      {
        v16 = DCONST_DVARINT_cg_forceCustomizationHead;
        if ( !DCONST_DVARINT_cg_forceCustomizationHead && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_forceCustomizationHead") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v16);
        integer = v16->current.integer;
        v18 = DCONST_DVARINT_cg_forceCustomizationBody;
        if ( !DCONST_DVARINT_cg_forceCustomizationBody && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_forceCustomizationBody") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v18);
        v19 = v18->current.integer;
        v20 = DCONST_DVARINT_cg_forceCustomizationViewhands;
        if ( !DCONST_DVARINT_cg_forceCustomizationViewhands && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_forceCustomizationViewhands") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v20);
        v21 = v20->current.integer;
        if ( integer >= 0 )
          *(_DWORD *)(v13 + 164) = integer;
        if ( v19 >= 0 )
          *(_DWORD *)(v13 + 168) = v19;
        if ( v21 >= 0 )
          *(_DWORD *)(v13 + 172) = v21;
      }
      *(_BYTE *)(v13 + 144) = v10->isMLGSpectator;
      *(_BYTE *)(v13 + 145) = v10->isMLGFollower;
      *(_DWORD *)(v13 + 148) = v10->indexMLGFollower;
      v22 = 0x7FFFFFFFi64;
      name = v10->name;
      if ( v13 == -4 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
        __debugbreak();
      if ( v10 == (clientState_t *)-120i64 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 182, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
        __debugbreak();
      do
      {
        v24 = name[v13 + 4 - (_QWORD)v10->name];
        v25 = *name++;
        if ( !v22-- )
          break;
        if ( v24 != v25 )
        {
          Core_strcpy((char *)(v13 + 4), 0x24ui64, v10->name);
          break;
        }
      }
      while ( v24 );
      LODWORD(fmt) = v10->nameSuffix;
      Com_sprintf(dest, 0x40ui64, "%s#%i", v10->name, fmt);
      v27 = 0x7FFFFFFFi64;
      v28 = dest;
      if ( v13 == -40 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
        __debugbreak();
      do
      {
        v29 = v28[v13 + 40 - (_QWORD)dest];
        v30 = *v28++;
        if ( !v27-- )
          break;
        if ( v29 != v30 )
        {
          Core_strcpy_truncate((char *)(v13 + 40), 0x40ui64, dest);
          break;
        }
      }
      while ( v29 );
      v32 = v10->clientIndex;
      if ( !prevSnap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 3185, ASSERT_TYPE_ASSERT, "(prevSnap)", (const char *)&queryFormat, "prevSnap") )
        __debugbreak();
      if ( v32 > 0xC8 )
      {
        LODWORD(checkCustomization) = 200;
        LODWORD(v46) = v32;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 3186, ASSERT_TYPE_ASSERT, "( 0 ) <= ( nextClientIndex ) && ( nextClientIndex ) <= ( 200 )", "nextClientIndex not in [0, MAX_CLIENTS_MP]\n\t%i not in [%i, %i]", v46, 0i64, checkCustomization) )
          __debugbreak();
      }
      v33 = 0;
      v34 = 0i64;
      numClients = prevSnap->numClients;
      if ( numClients <= 0 )
      {
LABEL_65:
        v37 = NULL;
      }
      else
      {
        clients = prevSnap->clients;
        while ( clients->clientIndex != v32 )
        {
          ++v33;
          ++v34;
          ++clients;
          if ( v34 >= numClients )
            goto LABEL_65;
        }
        v37 = &prevSnap->clients[v33];
      }
      if ( CG_CustomizationMP_HasAnyLatchedCustomization(localClientNum, v10->clientIndex) && v37 && CG_SnapshotMP_AnyCustomizationModelChanged(v37, v10) )
        CG_CustomizationMP_ResetCustomizationLatchForClient(localClientNum, v10->clientIndex);
      v38 = v10->clientIndex;
      v39 = CG_GetLocalClientGlobals((const LocalClientNum_t)v51->m_localClientNum);
      if ( !v39 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_static_inline.h", 25, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
        __debugbreak();
      if ( v39->IsMP(v39) )
      {
        if ( (unsigned int)v38 >= v39[1].predictedPlayerState.rxvOmnvars[64].timeModified )
        {
          LODWORD(characterInfo) = v39[1].predictedPlayerState.rxvOmnvars[64].timeModified;
          LODWORD(v46) = v38;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_globals_mp_inline.h", 12, ASSERT_TYPE_ASSERT, "(unsigned)( characterIndex ) < (unsigned)( static_cast<int>( m_characterInfoCount ) )", "characterIndex doesn't index static_cast<int>( m_characterInfoCount )\n\t%i not in [0, %i)", v46, characterInfo) )
            __debugbreak();
        }
        v40 = (characterInfo_t *)(*(_QWORD *)&v39[1].predictedPlayerState.rxvOmnvars[62] + 14792 * v38);
      }
      else
      {
        v40 = CgGlobalsSP::GetCharacterInfo((CgGlobalsSP *)v39, v38);
      }
      v40->entityNum = v10->clientIndex;
      v41 = v10->clientIndex;
      if ( (unsigned int)(v10->clientIndex + 0x8000) > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "short __cdecl truncate_cast_impl<short,int>(int)", "signed", (__int16)v41, "signed", v10->clientIndex) )
        __debugbreak();
      v42 = 0i64;
      numEntities = nextSnap->numEntities;
      if ( numEntities <= 0 )
      {
LABEL_88:
        entities = NULL;
        if ( nextSnap->ps.clientNum != v10->clientIndex )
          v40->speed = 0;
      }
      else
      {
        entities = nextSnap->entities;
        while ( entities->number != (_WORD)v41 )
        {
          if ( entities->number <= (__int16)v41 )
          {
            ++v42;
            ++entities;
            if ( v42 < numEntities )
              continue;
          }
          goto LABEL_88;
        }
        v40->speed = entities->lerp.u.player.moveSpeedForAnimBlend;
      }
      CG_SnapshotMP_ClientStateToCharacterInfo(localClientNum, v10->clientIndex, (const clientInfo_t *)v13, v37, v10, entities, v40, 1);
      if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_mp\\cg_snapshot_mp.cpp", 2689, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ANIMATION )") )
        __debugbreak();
      Mantle_UnpackAnimData(&v10->compressedAnimData, &v40->animData);
      Tracer_SetDrawCounter(localClientNum, v10->clientIndex, v10->weaponShotCount);
      ++v49;
      v7 = ++v50;
      LocalClientStatics = v51;
      LocalClientGlobals = v53;
      v9 = "!clientIndexProcessed[clientState->clientIndex]";
      v8 = "clientState->clientIndex doesn't index cls.maxClients\n\t%i not in [0, %i)";
      if ( v49 >= nextSnap->numClients )
        goto LABEL_94;
    }
    LOWORD(rank) = v10->rank;
LABEL_19:
    *(_DWORD *)(v12 + 104) = (__int16)rank;
    prestige = v10->prestige;
    *(_DWORD *)(v13 + 108) = prestige;
    *(_QWORD *)(v13 + 112) = 0i64;
    *(_QWORD *)(v13 + 200) = Com_GetRankDataMP(prestige + (__int16)rank, RANKTABLE_DISPLAYLEVEL);
    *(_QWORD *)(v13 + 192) = Com_GetRankIcon(*(_DWORD *)(v13 + 104), *(_DWORD *)(v13 + 108));
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


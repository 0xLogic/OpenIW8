/*
==============
LUI_DataBinding_Player_SnapshotUpdate
==============
*/

void __fastcall LUI_DataBinding_Player_SnapshotUpdate(LocalClientNum_t localClientNum)
{
  ?LUI_DataBinding_Player_SnapshotUpdate@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
LUI_DataBinding_Player_FrameUpdate
==============
*/

void __fastcall LUI_DataBinding_Player_FrameUpdate(LocalClientNum_t localClientNum)
{
  ?LUI_DataBinding_Player_FrameUpdate@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
LUI_DataBinding_Player_FrameUpdate
==============
*/
void LUI_DataBinding_Player_FrameUpdate(LocalClientNum_t localClientNum)
{
  Sys_ProfBeginNamedEvent(0xFF808080, "LUI_DataBinding_Player_FrameUpdate");
  LUIBinding::PushFloat(&s_LUI_DataBinding_LookPitchAngle, localClientNum);
  LUIBinding::PushString(&s_LUI_DataBinding_Stance, localClientNum);
  LUIBinding::PushBool(&s_LUI_DataBinding_IsCrawling, localClientNum);
  LUIBinding::PushBool(&s_LUI_DataBinding_IsSprinting, localClientNum);
  LUIBinding::PushBool(&s_LUI_DataBinding_IsJogging, localClientNum);
  LUIBinding::PushBool(&s_LUI_DataBinding_IsWeaponInspecting, localClientNum);
  LUIBinding::PushString(&s_LUI_DataBinding_MountHintType, localClientNum);
  LUIBinding::PushBool(&s_LUI_DataBinding_EquipDeployLocationValid, localClientNum);
  LUIBinding::PushBool(&s_LUI_DataBinding_IsInActionCam, localClientNum);
  LUIBinding::PushBool(&s_LUI_DataBinding_ExecutionHintEnabled, localClientNum);
  LUIBinding::PushInt(&s_LUI_DataBinding_ExecutionHoldTime, localClientNum);
  LUIBinding::PushBool(&s_LUI_DataBinding_IsOnLadder, localClientNum);
  Sys_ProfEndNamedEvent();
}

/*
==============
LUI_DataBinding_Player_SnapshotUpdate
==============
*/
void LUI_DataBinding_Player_SnapshotUpdate(LocalClientNum_t localClientNum)
{
  LUIBinding::PushInt(&s_LUI_DataBinding_Health, localClientNum);
  LUIBinding::PushInt(&s_LUI_DataBinding_MaxHealth, localClientNum);
  LUIBinding::PushBool(&s_LUI_DataBinding_AffectedByEMP, localClientNum);
  LUIBinding::PushBool(&s_LUI_DataBinding_AffectedByUAVJam, localClientNum);
  LUIBinding::PushBool(&s_LUI_DataBinding_AffectedByRSD, localClientNum);
  LUIBinding::PushBool(&s_LUI_DataBinding_AffectedByFlashbang, localClientNum);
  LUIBinding::PushBool(&s_LUI_DataBinding_HasPerkMarskman, localClientNum);
  LUIBinding::PushBool(&s_LUI_DataBinding_HasKeyboardInputDevice, localClientNum);
  LUIBinding::PushInt(&s_LUI_DataBinding_AccessoryIndex, localClientNum);
  LUIBinding::PushInt(&s_LUI_DataBinding_FootstepCount, localClientNum);
  LUIBinding::PushBool(&s_LUI_DataBinding_GpadEnabled, localClientNum);
  LUIBinding::PushInt(&s_LUI_DataBinding_UseReloadProfile, localClientNum);
  LUIBinding::PushBool(&s_LUI_DataBinding_HoldKBMEnabled, localClientNum);
  LUIBinding::PushBool(&s_LUI_DataBinding_LocationHasCollision, localClientNum);
  if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_STILL_LAND|WEAPON_FIRING|0x80) )
  {
    LUIBinding::PushInt(&s_LUI_DataBinding_SpawnCount, localClientNum);
    LUIBinding::PushBool(&s_LUI_DataBinding_IsInKillCam, localClientNum);
    LUIBinding::PushBool(&s_LUI_DataBinding_IsKillCamEntityActive, localClientNum);
    LUIBinding::PushString(&s_LUI_DataBinding_Name, localClientNum);
    LUIBinding::PushInt(&s_LUI_DataBinding_ClientNum, localClientNum);
    LUIBinding::PushInt(&s_LUI_DataBinding_PlayerStateClientNum, localClientNum);
    LUIBinding::PushBool(&s_LUI_DataBinding_IsInExecution, localClientNum);
  }
}

/*
==============
s_LUI_DataBinding_Get_AccessoryIndex
==============
*/
__int64 s_LUI_DataBinding_Get_AccessoryIndex(LocalClientNum_t localClientNum)
{
  return CG_GetLocalClientGlobals(localClientNum)->predictedPlayerState.accessoryIndex;
}

/*
==============
s_LUI_DataBinding_Get_AffectedByEMP
==============
*/
bool s_LUI_DataBinding_Get_AffectedByEMP(LocalClientNum_t localClientNum)
{
  cg_t *LocalClientGlobals; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  return BG_IsEMPJammed(&LocalClientGlobals->predictedPlayerState) == 1;
}

/*
==============
s_LUI_DataBinding_Get_AffectedByFlashbang
==============
*/
bool s_LUI_DataBinding_Get_AffectedByFlashbang(LocalClientNum_t localClientNum)
{
  return CG_GetFlashbangedRemainingTime(localClientNum) > 0;
}

/*
==============
s_LUI_DataBinding_Get_AffectedByRSD
==============
*/
_BOOL8 s_LUI_DataBinding_Get_AffectedByRSD(LocalClientNum_t localClientNum)
{
  return CG_GetLocalClientGlobals(localClientNum)->rsdJamming;
}

/*
==============
s_LUI_DataBinding_Get_AffectedByUAVJam
==============
*/
bool s_LUI_DataBinding_Get_AffectedByUAVJam(LocalClientNum_t localClientNum)
{
  cg_t *LocalClientGlobals; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  return BG_IsUAVJammed(&LocalClientGlobals->predictedPlayerState);
}

/*
==============
s_LUI_DataBinding_Get_ClientNum
==============
*/
__int64 s_LUI_DataBinding_Get_ClientNum(LocalClientNum_t localClientNum)
{
  return (unsigned int)CG_GetLocalClientGlobals(localClientNum)->clientNum;
}

/*
==============
s_LUI_DataBinding_Get_EquipDeployLocationValid
==============
*/
bool s_LUI_DataBinding_Get_EquipDeployLocationValid(LocalClientNum_t localClientNum)
{
  return CG_GetLocalClientGlobals(localClientNum)->equipDeployState.state == HALF_HALF;
}

/*
==============
s_LUI_DataBinding_Get_ExecutionHintEnabled
==============
*/
_BOOL8 s_LUI_DataBinding_Get_ExecutionHintEnabled(LocalClientNum_t localClientNum)
{
  return CG_GetLocalClientGlobals(localClientNum)->predictedPlayerState.activeExecutionHint;
}

/*
==============
s_LUI_DataBinding_Get_ExecutionHoldTime
==============
*/
__int64 s_LUI_DataBinding_Get_ExecutionHoldTime(LocalClientNum_t localClientNum)
{
  return (unsigned int)CG_GetLocalClientGlobals(localClientNum)->predictedPlayerState.holdExecutionTime;
}

/*
==============
s_LUI_DataBinding_Get_FootstepCount
==============
*/
__int64 s_LUI_DataBinding_Get_FootstepCount(LocalClientNum_t localClientNum)
{
  return CG_GetLocalClientGlobals(localClientNum)->predictedPlayerState.footstepCount;
}

/*
==============
s_LUI_DataBinding_Get_GpadEnabled
==============
*/
bool s_LUI_DataBinding_Get_GpadEnabled(LocalClientNum_t localClientNum)
{
  int ControllerFromClient; 

  ControllerFromClient = CL_Mgr_GetControllerFromClient(localClientNum);
  return GamerProfile_GetGamepadEnabled(ControllerFromClient);
}

/*
==============
s_LUI_DataBinding_Get_HasKeyboardInputDevice
==============
*/
bool s_LUI_DataBinding_Get_HasKeyboardInputDevice(LocalClientNum_t localClientNum)
{
  int ControllerFromClient; 

  ControllerFromClient = CL_Mgr_GetControllerFromClient(localClientNum);
  return IN_IsKeyboardConnected(ControllerFromClient);
}

/*
==============
s_LUI_DataBinding_Get_HasPerkMarskman
==============
*/
bool s_LUI_DataBinding_Get_HasPerkMarskman(LocalClientNum_t localClientNum)
{
  cg_t *LocalClientGlobals; 
  int PerkNetworkPriorityIndex; 
  unsigned __int64 v3; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  PerkNetworkPriorityIndex = BG_GetPerkNetworkPriorityIndex(0x3Eu);
  v3 = (unsigned int)PerkNetworkPriorityIndex;
  if ( PerkNetworkPriorityIndex < 0 )
    return 0;
  if ( (unsigned int)PerkNetworkPriorityIndex >= 0x40 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", PerkNetworkPriorityIndex, 64) )
    __debugbreak();
  return ((0x80000000 >> (v3 & 0x1F)) & LocalClientGlobals->predictedPlayerState.perks.array[v3 >> 5]) != 0;
}

/*
==============
s_LUI_DataBinding_Get_Health
==============
*/
__int64 s_LUI_DataBinding_Get_Health(LocalClientNum_t localClientNum)
{
  return (unsigned int)CG_GetLocalClientGlobals(localClientNum)->predictedPlayerState.stats[0];
}

/*
==============
s_LUI_DataBinding_Get_HoldKBMEnabled
==============
*/
bool s_LUI_DataBinding_Get_HoldKBMEnabled(LocalClientNum_t localClientNum)
{
  int ControllerFromClient; 

  ControllerFromClient = CL_Mgr_GetControllerFromClient(localClientNum);
  return !GamerProfile_GetGamepadEnabled(ControllerFromClient) && GamerProfile_GetUseHoldKBMProfile(ControllerFromClient);
}

/*
==============
s_LUI_DataBinding_Get_IsCrawling
==============
*/
bool s_LUI_DataBinding_Get_IsCrawling(LocalClientNum_t localClientNum)
{
  cg_t *LocalClientGlobals; 
  CgHandler *Handler; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  Handler = CgHandler::getHandler(localClientNum);
  return BG_ShouldPlayAdditiveCrawlAnim(&LocalClientGlobals->predictedPlayerState, WEAPON_HAND_DEFAULT, Handler);
}

/*
==============
s_LUI_DataBinding_Get_IsInActionCam
==============
*/

bool __fastcall s_LUI_DataBinding_Get_IsInActionCam(LocalClientNum_t localClientNum)
{
  return CG_Utils_IsActionCamActive(localClientNum);
}

/*
==============
s_LUI_DataBinding_Get_IsInExecution
==============
*/
bool s_LUI_DataBinding_Get_IsInExecution(LocalClientNum_t localClientNum)
{
  return CG_GetLocalClientGlobals(localClientNum)->predictedPlayerState.activeExecution != 255;
}

/*
==============
s_LUI_DataBinding_Get_IsInKillCam
==============
*/
bool s_LUI_DataBinding_Get_IsInKillCam(LocalClientNum_t localClientNum)
{
  return CG_GetLocalClientGlobals(localClientNum)->inKillCam == 1;
}

/*
==============
s_LUI_DataBinding_Get_IsJogging
==============
*/

bool __fastcall s_LUI_DataBinding_Get_IsJogging(LocalClientNum_t localClientNum)
{
  return CG_IsJogging(localClientNum);
}

/*
==============
s_LUI_DataBinding_Get_IsKillCamEntityActive
==============
*/

bool __fastcall s_LUI_DataBinding_Get_IsKillCamEntityActive(LocalClientNum_t localClientNum)
{
  return CG_View_IsKillCamEntityView(localClientNum);
}

/*
==============
s_LUI_DataBinding_Get_IsOnLadder
==============
*/
bool s_LUI_DataBinding_Get_IsOnLadder(LocalClientNum_t localClientNum)
{
  cg_t *LocalClientGlobals; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  return GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&LocalClientGlobals->predictedPlayerState.pm_flags, ACTIVE, 6u);
}

/*
==============
s_LUI_DataBinding_Get_IsSprinting
==============
*/
bool s_LUI_DataBinding_Get_IsSprinting(LocalClientNum_t localClientNum)
{
  cg_t *LocalClientGlobals; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  return PM_IsSprinting(&LocalClientGlobals->predictedPlayerState);
}

/*
==============
s_LUI_DataBinding_Get_IsWeaponInspecting
==============
*/

bool __fastcall s_LUI_DataBinding_Get_IsWeaponInspecting(LocalClientNum_t localClientNum)
{
  return CG_WeaponInspect_IsUIHidden(localClientNum);
}

/*
==============
s_LUI_DataBinding_Get_LocationHasCollision
==============
*/
bool s_LUI_DataBinding_Get_LocationHasCollision(LocalClientNum_t localClientNum)
{
  const vec2_t *LocalClientGlobals; 
  __int16 gridIdx; 

  LocalClientGlobals = (const vec2_t *)CG_GetLocalClientGlobals(localClientNum);
  return WorldCollision_IsCollisionReadyAt((const Physics_WorldId)(3 * localClientNum + 2), LocalClientGlobals + 7, &gridIdx);
}

/*
==============
s_LUI_DataBinding_Get_LookPitchAngle
==============
*/
float s_LUI_DataBinding_Get_LookPitchAngle(LocalClientNum_t localClientNum)
{
  float v1; 

  v1 = CG_GetLocalClientGlobals(localClientNum)->refdefViewAngles.v[0] * 0.0027777778;
  _XMM0 = 0i64;
  __asm { vroundss xmm4, xmm0, xmm2, 1 }
  return (float)(v1 - *(float *)&_XMM4) * -360.0;
}

/*
==============
s_LUI_DataBinding_Get_MaxHealth
==============
*/
__int64 s_LUI_DataBinding_Get_MaxHealth(LocalClientNum_t localClientNum)
{
  return (unsigned int)CG_GetLocalClientGlobals(localClientNum)->predictedPlayerState.stats[2];
}

/*
==============
s_LUI_DataBinding_Get_MountHintType
==============
*/
char s_LUI_DataBinding_Get_MountHintType(LocalClientNum_t localClientNum, unsigned __int64 outStringSize, char *outString)
{
  __int64 type; 
  int v7; 
  int v8; 

  type = CG_GetLocalClientGlobals(localClientNum)->mountHint.type;
  if ( (unsigned int)type >= 4 )
  {
    v8 = 4;
    v7 = type;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui\\lui_databinding_player.cpp", 245, ASSERT_TYPE_ASSERT, "(unsigned)( type ) < (unsigned)( ( sizeof( *array_counter( mountTypeNames ) ) + 0 ) )", "type doesn't index ARRAY_COUNT( mountTypeNames )\n\t%i not in [0, %i)", v7, v8) )
      __debugbreak();
  }
  Core_strcpy(outString, outStringSize, mountTypeNames[type]);
  return 1;
}

/*
==============
s_LUI_DataBinding_Get_PlayerStateClientNum
==============
*/

int __fastcall s_LUI_DataBinding_Get_PlayerStateClientNum(LocalClientNum_t localClientNum)
{
  return Game_GetPlayerStateClientNum(localClientNum);
}

/*
==============
s_LUI_DataBinding_Get_SpawnCount
==============
*/
__int64 s_LUI_DataBinding_Get_SpawnCount(LocalClientNum_t localClientNum)
{
  return (unsigned int)CG_GetLocalClientGlobals(localClientNum)->predictedPlayerState.stats[3];
}

/*
==============
s_LUI_DataBinding_Get_Stance
==============
*/
char s_LUI_DataBinding_Get_Stance(LocalClientNum_t localClientNum, unsigned __int64 outStringSize, char *outString)
{
  cg_t *LocalClientGlobals; 
  EffectiveStance EffectiveStance; 
  __int32 v7; 
  __int32 v8; 
  const char *v9; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  EffectiveStance = PM_GetEffectiveStance(&LocalClientGlobals->predictedPlayerState);
  if ( EffectiveStance == PM_EFF_STANCE_DEFAULT )
  {
    v9 = "stand";
    goto LABEL_8;
  }
  v7 = EffectiveStance - 1;
  if ( !v7 )
    goto LABEL_5;
  v8 = v7 - 1;
  if ( !v8 )
  {
    v9 = "crouch";
    goto LABEL_8;
  }
  if ( v8 == 1 )
  {
LABEL_5:
    v9 = "prone";
LABEL_8:
    Core_strcpy(outString, outStringSize, v9);
  }
  return 1;
}

/*
==============
s_LUI_DataBinding_Get_UseReloadProfile
==============
*/
__int64 s_LUI_DataBinding_Get_UseReloadProfile(LocalClientNum_t localClientNum)
{
  int ControllerFromClient; 

  ControllerFromClient = CL_Mgr_GetControllerFromClient(localClientNum);
  return GamerProfile_GetGamepadUseReloadProfile(ControllerFromClient);
}


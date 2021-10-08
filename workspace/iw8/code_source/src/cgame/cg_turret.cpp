/*
==============
CG_Turret_UpdateCamera
==============
*/

bool __fastcall CG_Turret_UpdateCamera(LocalClientNum_t localClientNum, vec3_t *inOutViewAngles)
{
  return ?CG_Turret_UpdateCamera@@YA_NW4LocalClientNum_t@@AEATvec3_t@@@Z(localClientNum, inOutViewAngles);
}

/*
==============
CG_AddTurretFire
==============
*/

void CG_AddTurretFire(void)
{
  ?CG_AddTurretFire@@YAXXZ();
}

/*
==============
CG_Turret_GetTurretEnt
==============
*/

const centity_t *__fastcall CG_Turret_GetTurretEnt(const LocalClientNum_t localClientNum)
{
  return ?CG_Turret_GetTurretEnt@@YAPEBUcentity_t@@W4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_GetTurretEntity
==============
*/

centity_t *__fastcall CG_GetTurretEntity(const LocalClientNum_t localClientNum)
{
  return ?CG_GetTurretEntity@@YAPEAUcentity_t@@W4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_OnEndTurretFire
==============
*/

void __fastcall CG_OnEndTurretFire(const LocalClientNum_t localClientNum)
{
  ?CG_OnEndTurretFire@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_ClearTurretFire
==============
*/

void CG_ClearTurretFire(void)
{
  ?CG_ClearTurretFire@@YAXXZ();
}

/*
==============
CG_ProcessTurretFire
==============
*/

void __fastcall CG_ProcessTurretFire(const LocalClientNum_t localClientNum)
{
  ?CG_ProcessTurretFire@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_Turret_Update
==============
*/

void __fastcall CG_Turret_Update(const LocalClientNum_t localClientNum)
{
  ?CG_Turret_Update@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_AddTurretFire
==============
*/
void CG_AddTurretFire(void)
{
  ++s_processDelayedEntTurretFire;
}

/*
==============
CG_ClearTurretFire
==============
*/
void CG_ClearTurretFire(void)
{
  s_processDelayedEntTurretFire = 0;
}

/*
==============
CG_GetTurretEntity
==============
*/
centity_t *CG_GetTurretEntity(const LocalClientNum_t localClientNum)
{
  cg_t *LocalClientGlobals; 
  __int16 viewlocked_entNum; 
  int entity; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  viewlocked_entNum = LocalClientGlobals->predictedPlayerState.viewlocked_entNum;
  if ( viewlocked_entNum != 2047 )
  {
    entity = viewlocked_entNum;
    return CG_GetEntity(localClientNum, entity);
  }
  entity = LocalClientGlobals->predictedPlayerState.vehicleState.entity;
  if ( entity != 2047 )
    return CG_GetEntity(localClientNum, entity);
  return 0i64;
}

/*
==============
CG_OnEndTurretFire
==============
*/
void CG_OnEndTurretFire(const LocalClientNum_t localClientNum)
{
  ;
}

/*
==============
CG_ProcessTurretFire
==============
*/
void CG_ProcessTurretFire(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  cg_t *LocalClientGlobals; 
  __int16 viewlocked_entNum; 
  int entity; 
  centity_t *v5; 
  centity_t *v6; 
  int v7; 
  CgEventSystem *v8; 
  __int64 v9; 
  __int64 v10; 

  v1 = localClientNum;
  if ( s_processDelayedEntTurretFire > 0 )
  {
    LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
    viewlocked_entNum = LocalClientGlobals->predictedPlayerState.viewlocked_entNum;
    if ( viewlocked_entNum == 2047 )
    {
      entity = LocalClientGlobals->predictedPlayerState.vehicleState.entity;
      if ( entity == 2047 )
        return;
    }
    else
    {
      entity = viewlocked_entNum;
    }
    v5 = CG_GetEntity((const LocalClientNum_t)v1, entity);
    v6 = v5;
    if ( v5 && (v5->flags & 1) != 0 )
    {
      v7 = 0;
      CG_GetLocalClientGlobals((const LocalClientNum_t)v1)->turretTimeSinceFire = 0.0;
      if ( !(_BYTE)CgEventSystem::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.h", 224, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the event system for localClientNum %d but the event system type is not known\n", "ms_allocatedType != GameModeType::NONE", v1) )
        __debugbreak();
      if ( (unsigned int)v1 >= CgEventSystem::ms_allocatedCount )
      {
        LODWORD(v10) = CgEventSystem::ms_allocatedCount;
        LODWORD(v9) = v1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.h", 225, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v9, v10) )
          __debugbreak();
      }
      if ( !CgEventSystem::ms_eventSystemArray[v1] )
      {
        LODWORD(v10) = v1;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_event.h", 226, ASSERT_TYPE_ASSERT, "(ms_eventSystemArray[localClientNum])", "%s\n\tTrying to access unallocated event system for localClientNum %d\n", "ms_eventSystemArray[localClientNum]", v10) )
          __debugbreak();
      }
      v8 = CgEventSystem::ms_eventSystemArray[v1];
      if ( s_processDelayedEntTurretFire > 0 )
      {
        do
        {
          ((void (__fastcall *)(CgEventSystem *, centity_t *, __int64))v8->HandleTurretFire)(v8, v6, 87i64);
          ++v7;
        }
        while ( v7 < s_processDelayedEntTurretFire );
      }
    }
  }
}

/*
==============
CG_Turret_CameraReset
==============
*/
void CG_Turret_CameraReset(LocalClientNum_t localClientNum, cg_t *cgameGlob)
{
  *(_QWORD *)&cgameGlob->turretCameraBlendVelocity = 0i64;
  cgameGlob->turretCameraLocked = 0;
  if ( cgameGlob->turretControlled )
  {
    CL_Input_ClearKeys(localClientNum);
    cgameGlob->turretControlled = 0;
  }
  else
  {
    cgameGlob->turretControlled = 0;
  }
}

/*
==============
CG_Turret_GetTurretEnt
==============
*/
centity_t *CG_Turret_GetTurretEnt(const LocalClientNum_t localClientNum)
{
  cg_t *LocalClientGlobals; 
  playerState_s *p_predictedPlayerState; 
  __int16 viewlocked_entNum; 
  centity_t *result; 

  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_turret.cpp", 130, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  p_predictedPlayerState = &LocalClientGlobals->predictedPlayerState;
  if ( LocalClientGlobals == (cg_t *)-8i64 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_turret.cpp", 133, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2152, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
  }
  if ( p_predictedPlayerState == (playerState_s *)-376i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2042, ASSERT_TYPE_ASSERT, "(esFlags)", (const char *)&queryFormat, "esFlags") )
    __debugbreak();
  if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&p_predictedPlayerState->eFlags, ACTIVE, 5u) || GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&p_predictedPlayerState->eFlags, ACTIVE, 6u) )
    goto LABEL_18;
  if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&p_predictedPlayerState->eFlags, ACTIVE, 7u) )
  {
    if ( !Com_GameMode_SupportsFeature(WEAPON_DROPPING_LADDER_CLIMB) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2052, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::TURRET_REMOTE_CONTROL ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::TURRET_REMOTE_CONTROL )") )
      __debugbreak();
LABEL_18:
    viewlocked_entNum = p_predictedPlayerState->viewlocked_entNum;
    goto LABEL_19;
  }
  if ( !p_predictedPlayerState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2393, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&p_predictedPlayerState->otherFlags, ACTIVE, 0x18u) )
    return 0i64;
  if ( !Com_GameMode_SupportsFeature(WEAPON_DROPPING_LADDER_CLIMB) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2396, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::TURRET_REMOTE_CONTROL ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::TURRET_REMOTE_CONTROL )") )
    __debugbreak();
  viewlocked_entNum = p_predictedPlayerState->remoteTurretEnt;
LABEL_19:
  if ( viewlocked_entNum == 2047 )
    return 0i64;
  result = CG_GetEntity(localClientNum, viewlocked_entNum);
  if ( (result->flags & 1) == 0 )
    return 0i64;
  return result;
}

/*
==============
CG_Turret_Update
==============
*/

void __fastcall CG_Turret_Update(const LocalClientNum_t localClientNum, __int64 a2, __int64 a3, double _XMM3_8)
{
  const centity_t *TurretEnt; 
  CgWeaponMap *Instance; 
  const Weapon *WeaponForEntity; 
  cg_t *LocalClientGlobals; 
  bool IsRemoteTurretActive; 
  bool v17; 
  bool v18; 
  __int16 remoteControlEnt; 
  const centity_t *Entity; 
  bool IsVehicleEntity; 
  CgVehicleSystem *VehicleSystem; 
  __int64 v23; 

  __asm { vmovaps [rsp+68h+var_18], xmm6 }
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_turret.cpp", 164, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  TurretEnt = CG_Turret_GetTurretEnt(localClientNum);
  if ( TurretEnt )
  {
    Instance = CgWeaponMap::GetInstance(localClientNum);
    if ( !Instance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_turret.cpp", 175, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
      __debugbreak();
    WeaponForEntity = BG_GetWeaponForEntity(Instance, &TurretEnt->nextState);
    if ( WeaponForEntity->weaponIdx )
    {
      __asm { vmovaps [rsp+68h+var_28], xmm7 }
      _RDI = BG_WeaponDef(WeaponForEntity, 0);
      if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_turret.cpp", 186, ASSERT_TYPE_ASSERT, "(turretWeaponDef)", (const char *)&queryFormat, "turretWeaponDef") )
        __debugbreak();
      __asm
      {
        vxorps  xmm6, xmm6, xmm6
        vxorps  xmm7, xmm7, xmm7
      }
      LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
      IsRemoteTurretActive = BG_IsRemoteTurretActive(&LocalClientGlobals->predictedPlayerState);
      v17 = 0;
      v18 = !IsRemoteTurretActive;
      if ( IsRemoteTurretActive )
      {
        remoteControlEnt = LocalClientGlobals->predictedPlayerState.remoteControlEnt;
        v17 = (unsigned __int16)remoteControlEnt < 0x7FFu;
        v18 = remoteControlEnt == 2047;
        if ( remoteControlEnt != 2047 )
        {
          Entity = CG_GetEntity(localClientNum, remoteControlEnt);
          IsVehicleEntity = CG_Vehicle_IsVehicleEntity(Entity);
          v17 = 0;
          v18 = !IsVehicleEntity;
          if ( IsVehicleEntity )
          {
            VehicleSystem = CgVehicleSystem::GetVehicleSystem(localClientNum);
            if ( !VehicleSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_turret.cpp", 198, ASSERT_TYPE_ASSERT, "(vehicleSystem)", (const char *)&queryFormat, "vehicleSystem") )
              __debugbreak();
            v23 = (__int64)VehicleSystem->GetVehicleDef(VehicleSystem, &Entity->nextState);
            if ( !v23 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_turret.cpp", 200, ASSERT_TYPE_ASSERT, "(vehDef)", (const char *)&queryFormat, "vehDef") )
              __debugbreak();
            v17 = 0;
            v18 = *(_DWORD *)(v23 + 248) == 0;
            if ( *(_DWORD *)(v23 + 248) )
            {
              v17 = *(_BYTE *)(v23 + 256) == 0;
              v18 = *(_BYTE *)(v23 + 256) == 1;
              if ( *(_BYTE *)(v23 + 256) == 1 )
              {
                *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_wheelsonForceTurretYawSpeed, "bg_wheelsonForceTurretYawSpeed");
                __asm { vmovaps xmm7, xmm0 }
              }
            }
          }
        }
      }
      __asm
      {
        vmovss  xmm1, dword ptr [rdi+1E0h]
        vcomiss xmm1, xmm6
      }
      if ( !v17 && !v18 )
        goto LABEL_30;
      __asm { vcomiss xmm7, xmm6 }
      if ( !v17 && !v18 )
        goto LABEL_30;
      __asm { vcomiss xmm6, dword ptr [rdi+1DCh] }
      if ( !v17 )
      {
        __asm { vxorps  xmm3, xmm3, xmm3 }
      }
      else
      {
LABEL_30:
        __asm
        {
          vmovss  xmm6, dword ptr [rdi+1DCh]
          vmaxss  xmm3, xmm1, xmm7; maxYawSpeed
        }
      }
      __asm { vmovaps xmm7, [rsp+68h+var_28] }
    }
    else
    {
      __asm
      {
        vxorps  xmm6, xmm6, xmm6
        vxorps  xmm3, xmm3, xmm3
      }
    }
  }
  else
  {
    __asm
    {
      vxorps  xmm6, xmm6, xmm6
      vxorps  xmm3, xmm3, xmm3
    }
  }
  __asm
  {
    vmovaps xmm2, xmm6; maxPitchSpeed
    vmovaps xmm6, [rsp+68h+var_18]
  }
  CL_CapTurnRate(localClientNum, TURNRATECAPTYPE_TURRET, *(float *)&_XMM2, *(float *)&_XMM3);
}

/*
==============
CG_Turret_UpdateCamera
==============
*/
bool CG_Turret_UpdateCamera(LocalClientNum_t localClientNum, vec3_t *inOutViewAngles)
{
  bool result; 
  const centity_t *TurretEnt; 
  const ClActiveClient *Client; 
  int CmdNumber; 
  const ClActiveClient *v12; 
  int v13; 
  int v14; 
  __int64 v17; 
  const entityState_t *p_nextState; 
  CgWeaponMap *Instance; 
  const Weapon *WeaponForEntity; 
  const WeaponDef *v26; 
  centity_t *LinkToParent; 
  CgAntiLag *v28; 
  int serverTime; 
  bool v34; 
  bool v35; 
  CgVehicleSystem *VehicleSystem; 
  CgWeaponMap *v38; 
  const Weapon *v39; 
  char v44; 
  char *fmt; 
  int v66; 
  __int64 v67; 
  usercmd_s *v68; 
  char v69[272]; 
  vec3_t angles; 
  BgAntiLagEntityInfo angilagInfo; 
  char v72; 
  void *retaddr; 

  _RAX = &retaddr;
  v67 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
  }
  _R12 = inOutViewAngles;
  _RBX = CG_GetLocalClientGlobals(localClientNum);
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_turret.cpp", 298, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  if ( CgAntiLag::IsDisabledForMigration(localClientNum) || (TurretEnt = CG_Turret_GetTurretEnt(localClientNum)) == NULL )
  {
    *(_QWORD *)&_RBX->turretCameraBlendVelocity = 0i64;
    _RBX->turretCameraLocked = 0;
    if ( _RBX->turretControlled )
      CL_Input_ClearKeys(localClientNum);
    _RBX->turretControlled = 0;
    _RBX->turretTimeSinceFire = -1.0;
    result = 0;
  }
  else
  {
    Client = ClActiveClient::GetClient(localClientNum);
    CmdNumber = ClActiveClient_GetCmdNumber(Client);
    v12 = ClActiveClient::GetClient(localClientNum);
    v13 = ClActiveClient_GetCmdNumber(v12);
    v14 = v13;
    v66 = v13;
    if ( CmdNumber > v13 )
    {
      LODWORD(fmt) = v13;
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143CEE128, 754i64, (unsigned int)CmdNumber, fmt);
    }
    if ( CmdNumber > v14 - 128 && CmdNumber > 0 )
    {
      _RSI = &v12->cmds[CmdNumber & 0x7F];
      v68 = _RSI;
      memset(&v66, 0, sizeof(v66));
      if ( !_RSI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_active_client.h", 385, ASSERT_TYPE_ASSERT, "(requestedCmd)", (const char *)&queryFormat, "requestedCmd") )
        __debugbreak();
      _RCX = v69;
      v17 = 2i64;
      do
      {
        __asm
        {
          vmovups ymm0, ymmword ptr [rsi]
          vmovups ymmword ptr [rcx], ymm0
          vmovups ymm0, ymmword ptr [rsi+20h]
          vmovups ymmword ptr [rcx+20h], ymm0
          vmovups ymm0, ymmword ptr [rsi+40h]
          vmovups ymmword ptr [rcx+40h], ymm0
          vmovups xmm0, xmmword ptr [rsi+60h]
          vmovups xmmword ptr [rcx+60h], xmm0
        }
        _RCX += 128;
        __asm
        {
          vmovups xmm1, xmmword ptr [rsi+70h]
          vmovups xmmword ptr [rcx-10h], xmm1
        }
        _RSI = (usercmd_s *)((char *)_RSI + 128);
        --v17;
      }
      while ( v17 );
      *(_QWORD *)_RCX = _RSI->buttons;
      p_nextState = &TurretEnt->nextState;
      Instance = CgWeaponMap::GetInstance(localClientNum);
      WeaponForEntity = BG_GetWeaponForEntity(Instance, &TurretEnt->nextState);
      v26 = BG_WeaponDef(WeaponForEntity, 0);
      if ( !v26 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_turret.cpp", 329, ASSERT_TYPE_ASSERT, "(turretWeaponDef)", (const char *)&queryFormat, "turretWeaponDef") )
        __debugbreak();
      if ( v26->alignBarrelWithTurretBody )
      {
        LinkToParent = CG_Entity_GetLinkToParent(localClientNum, TurretEnt);
        if ( LinkToParent )
          TurretEnt = LinkToParent;
        v28 = CgAntiLag::GetInstance(localClientNum);
        serverTime = _RBX->predictedPlayerState.serverTime;
        angilagInfo.boneInfo.boneList.m_usedSize = 0;
        angilagInfo.boneInfo.boneList.m_maxSize = 0;
        BgAntiLag::GetEntityInfoAtTime(v28, _RBX->predictedPlayerState.clientNum, TurretEnt->nextState.number, 8u, serverTime, &angilagInfo);
        __asm
        {
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm0, xmm0, dword ptr [rbx+65E4h]
          vmulss  xmm6, xmm0, cs:__real@3a83126f
          vmovaps xmm2, xmm6; deltaTime
        }
        CG_Turret_ViewBounce(localClientNum, &_RBX->predictedPlayerState, *(const float *)&_XMM2, &angilagInfo, TurretEnt);
        v34 = v69[157] || _RBX->turretCameraLocked;
        _RBX->turretCameraLocked = v34;
        v35 = !_RBX->turretControlled;
        if ( !_RBX->turretControlled )
          CL_Input_ClearKeys(localClientNum);
        _RBX->turretControlled = 1;
        __asm
        {
          vxorps  xmm7, xmm7, xmm7
          vucomiss xmm6, xmm7
        }
        if ( !v35 )
        {
          if ( TurretEnt == (const centity_t *)-400i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 1914, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
            __debugbreak();
          if ( ((TurretEnt->nextState.eType - 12) & 0xFFFD) != 0 || !BG_IsRemoteTurretActive(&_RBX->predictedPlayerState) || _RBX->predictedPlayerState.remoteControlEnt == 2047 )
            goto LABEL_45;
          VehicleSystem = CgVehicleSystem::GetVehicleSystem(localClientNum);
          if ( !VehicleSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_turret.cpp", 383, ASSERT_TYPE_ASSERT, "(vehicleSystem)", (const char *)&queryFormat, "vehicleSystem") )
            __debugbreak();
          v38 = CgWeaponMap::GetInstance(localClientNum);
          v39 = BG_GetWeaponForEntity(v38, p_nextState);
          if ( !VehicleSystem->AimTurret(VehicleSystem, v39, p_nextState->number) )
          {
LABEL_45:
            _R12->v[0] = _RBX->predictedPlayerState.viewangles.v[0];
            _R12->v[1] = _RBX->predictedPlayerState.viewangles.v[1];
            _R12->v[2] = _RBX->predictedPlayerState.viewangles.v[2];
            if ( _RBX->turretCameraLocked )
            {
              __asm { vaddss  xmm0, xmm6, dword ptr [rbx+180A0h] }
            }
            else
            {
              __asm
              {
                vmulss  xmm2, xmm6, cs:?TURRET_CAMERA_LOCK_BLEND_OUT_SPEED_SCALE@@3MA; float TURRET_CAMERA_LOCK_BLEND_OUT_SPEED_SCALE
                vmovss  xmm1, dword ptr [rbx+180A0h]
                vsubss  xmm0, xmm1, xmm2; val
              }
            }
            __asm
            {
              vmovss  dword ptr [rbx+180A0h], xmm0
              vmovss  xmm2, cs:?TURRET_CAMERA_LOCK_BLEND_TIME@@3MA; max
              vxorps  xmm1, xmm1, xmm1; min
            }
            *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
            __asm
            {
              vmovss  dword ptr [rbx+180A0h], xmm0
              vcomiss xmm0, cs:__real@3a83126f
            }
            if ( !(v44 | v35) )
            {
              __asm
              {
                vdivss  xmm0, xmm0, cs:?TURRET_CAMERA_LOCK_BLEND_TIME@@3MA; val
                vmovss  xmm2, cs:__real@3f800000; max
                vxorps  xmm1, xmm1, xmm1; min
              }
              I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
              __asm
              {
                vmulss  xmm2, xmm6, dword ptr [rsp+268h+angilagInfo.angVelocity+4]
                vmulss  xmm6, xmm2, cs:__real@3b360b61
                vaddss  xmm3, xmm6, cs:__real@3f000000
                vxorps  xmm2, xmm2, xmm2
                vroundss xmm5, xmm2, xmm3, 1
                vsubss  xmm1, xmm6, xmm5
                vmulss  xmm2, xmm1, cs:__real@43b40000
                vmulss  xmm0, xmm2, xmm0
                vaddss  xmm3, xmm0, dword ptr [r12+4]
                vmovss  dword ptr [r12+4], xmm3
                vmovss  xmm0, dword ptr [r12]
                vsubss  xmm1, xmm0, dword ptr [rbx+0BCh]
                vmovss  dword ptr [rsp+268h+angles], xmm1
                vsubss  xmm2, xmm3, dword ptr [rbx+0C0h]
                vmovss  dword ptr [rsp+268h+angles+4], xmm2
                vmovss  xmm0, dword ptr [r12+8]
                vsubss  xmm1, xmm0, dword ptr [rbx+0C4h]
                vmovss  dword ptr [rsp+268h+angles+8], xmm1
              }
              CL_SetViewAngles(localClientNum, &angles);
            }
          }
        }
      }
      else
      {
        CG_Turret_CameraReset(localClientNum, _RBX);
      }
    }
    else
    {
      memset(&v66, 0, sizeof(v66));
      *(_QWORD *)&_RBX->turretCameraBlendVelocity = 0i64;
      _RBX->turretCameraLocked = 0;
      if ( _RBX->turretControlled )
        CL_Input_ClearKeys(localClientNum);
      _RBX->turretControlled = 0;
      _RBX->turretTimeSinceFire = -1.0;
    }
    result = 1;
  }
  _R11 = &v72;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
  }
  return result;
}

/*
==============
CG_Turret_ViewBounce
==============
*/

void __fastcall CG_Turret_ViewBounce(LocalClientNum_t localClientNum, playerState_s *ps, double deltaTime, const BgAntiLagEntityInfo *angilagInfo, const centity_t *referenceEnt)
{
  cg_t *LocalClientGlobals; 
  CgVehicleSystem *VehicleSystem; 
  __int64 v25; 
  LocalClientNum_t v72; 
  vec3_t angles; 
  vec3_t v84; 
  vec3_t v85; 
  tmat33_t<vec3_t> axis; 
  tmat33_t<vec3_t> out; 
  tmat33_t<vec3_t> in1; 
  tmat33_t<vec3_t> in2; 
  tmat33_t<vec3_t> v90; 
  tmat33_t<vec3_t> v91; 
  char v92; 
  void *retaddr; 

  _RAX = &retaddr;
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
  _RSI = referenceEnt;
  __asm { vmovaps xmm7, xmm2 }
  _R15 = ps;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_turret.cpp", 236, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  _RBX = DCONST_DVARFLT_remote_turret_yaw_addition;
  if ( !DCONST_DVARFLT_remote_turret_yaw_addition && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "remote_turret_yaw_addition") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vmovss  xmm12, dword ptr [rbx+28h] }
  _RBX = DCONST_DVARFLT_remote_turret_pitch_addition;
  if ( !DCONST_DVARFLT_remote_turret_pitch_addition && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "remote_turret_pitch_addition") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm
  {
    vmovss  xmm10, dword ptr [rbx+28h]
    vxorps  xmm11, xmm11, xmm11
  }
  if ( referenceEnt->nextState.eType == ET_VEHICLE )
  {
    VehicleSystem = CgVehicleSystem::GetVehicleSystem(localClientNum);
    if ( !VehicleSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_turret.cpp", 245, ASSERT_TYPE_ASSERT, "(vehicleSystem)", (const char *)&queryFormat, "vehicleSystem") )
      __debugbreak();
    v25 = (__int64)VehicleSystem->GetVehicleDef(VehicleSystem, &referenceEnt->nextState);
    if ( !v25 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_turret.cpp", 247, ASSERT_TYPE_ASSERT, "(vehDef)", (const char *)&queryFormat, "vehDef") )
      __debugbreak();
    if ( *(_BYTE *)(v25 + 8) == 9 && *(_DWORD *)(v25 + 248) && *(_BYTE *)(v25 + 256) == 1 )
    {
      *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_wheelsonTurretPitchAddition, "bg_wheelsonTurretPitchAddition");
      __asm { vmovaps xmm10, xmm0 }
      *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_wheelsonTurretYawAddition, "bg_wheelsonTurretYawAddition");
      __asm { vmovaps xmm12, xmm0 }
      *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_wheelsonTurretRollAddition, "bg_wheelsonTurretRollAddition");
      __asm { vmovaps xmm11, xmm0 }
    }
  }
  __asm
  {
    vmulss  xmm1, xmm7, dword ptr [r12+80h]
    vmovss  xmm3, cs:__real@3b360b61
    vmulss  xmm2, xmm7, dword ptr [r12+88h]
    vmovss  xmm4, cs:__real@3f000000
    vmovss  xmm5, cs:__real@43b40000
    vmulss  xmm6, xmm1, xmm3
    vmulss  xmm1, xmm7, dword ptr [r12+84h]
    vmulss  xmm8, xmm1, xmm3
    vmulss  xmm3, xmm2, xmm3
    vxorps  xmm0, xmm0, xmm0
    vaddss  xmm1, xmm3, xmm4
    vmovss  xmm1, xmm0, xmm1
    vxorps  xmm9, xmm9, xmm9
    vroundss xmm2, xmm9, xmm1, 1
    vsubss  xmm0, xmm3, xmm2
    vmulss  xmm7, xmm0, xmm5
    vxorps  xmm0, xmm0, xmm0
    vaddss  xmm1, xmm6, xmm4
    vmovss  xmm1, xmm0, xmm1
    vroundss xmm2, xmm9, xmm1, 1
    vsubss  xmm0, xmm6, xmm2
    vmovss  xmm2, dword ptr [rsi+48h]
    vmulss  xmm1, xmm0, xmm5
    vmulss  xmm3, xmm1, xmm10
    vsubss  xmm0, xmm2, xmm3
    vxorps  xmm1, xmm1, xmm1
    vmovss  dword ptr [rsp+210h+angles], xmm0
    vaddss  xmm4, xmm8, xmm4
    vmovss  xmm0, xmm1, xmm4
    vroundss xmm2, xmm9, xmm0, 1
    vsubss  xmm1, xmm8, xmm2
    vmovss  xmm2, dword ptr [rsi+4Ch]
    vmulss  xmm0, xmm1, xmm5
    vmulss  xmm3, xmm0, xmm12
    vmovss  xmm0, dword ptr [rsi+50h]
    vsubss  xmm1, xmm2, xmm3
    vmulss  xmm4, xmm11, xmm7
    vmovss  dword ptr [rsp+210h+angles+4], xmm1
    vsubss  xmm1, xmm0, xmm4
    vmovss  dword ptr [rsp+210h+angles+8], xmm1
  }
  AnglesToAxis(&angles, &axis);
  MatrixTranspose(&axis, &out);
  AnglesToAxis(&_R15->viewangles, &in1);
  MatrixMultiply(&in1, &out, &v90);
  AnglesToAxis(&referenceEnt->pose.angles, &in2);
  MatrixMultiply(&v90, &in2, &v91);
  AxisToAngles(&v91, &v85);
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+210h+var_1B0]
    vmovss  xmm1, dword ptr [rsp+210h+var_1B0+4]
    vmovss  dword ptr [r15+1D8h], xmm0
    vmovss  xmm0, dword ptr [rsp+210h+angles+8]
    vmovss  dword ptr [r15+1DCh], xmm1
    vmovss  dword ptr [r15+1E0h], xmm0
    vmovss  xmm0, dword ptr [r15+1D8h]
    vsubss  xmm1, xmm0, dword ptr [r15+0B4h]
    vmovss  xmm2, dword ptr [r15+1DCh]
    vsubss  xmm0, xmm2, dword ptr [r15+0B8h]
  }
  v72 = LocalClientGlobals->localClientNum;
  __asm
  {
    vmovss  dword ptr [rsp+210h+var_1C0], xmm1
    vmovss  xmm1, dword ptr [r15+1E0h]
    vsubss  xmm2, xmm1, dword ptr [r15+0BCh]
    vmovss  dword ptr [rsp+210h+var_1C0+8], xmm2
    vmovss  dword ptr [rsp+210h+var_1C0+4], xmm0
  }
  CL_SetViewAngles(v72, &v84);
  _R11 = &v92;
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


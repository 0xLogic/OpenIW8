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
void CG_Turret_Update(const LocalClientNum_t localClientNum)
{
  const centity_t *TurretEnt; 
  float viewPitchMaxSpeed; 
  CgWeaponMap *Instance; 
  const Weapon *WeaponForEntity; 
  const WeaponDef *v7; 
  float v8; 
  cg_t *LocalClientGlobals; 
  __int16 remoteControlEnt; 
  const centity_t *Entity; 
  CgVehicleSystem *VehicleSystem; 
  __int64 v13; 
  double Float_Internal_DebugName; 

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
      v7 = BG_WeaponDef(WeaponForEntity, 0);
      if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_turret.cpp", 186, ASSERT_TYPE_ASSERT, "(turretWeaponDef)", (const char *)&queryFormat, "turretWeaponDef") )
        __debugbreak();
      viewPitchMaxSpeed = 0.0;
      v8 = 0.0;
      LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
      if ( BG_IsRemoteTurretActive(&LocalClientGlobals->predictedPlayerState) )
      {
        remoteControlEnt = LocalClientGlobals->predictedPlayerState.remoteControlEnt;
        if ( remoteControlEnt != 2047 )
        {
          Entity = CG_GetEntity(localClientNum, remoteControlEnt);
          if ( CG_Vehicle_IsVehicleEntity(Entity) )
          {
            VehicleSystem = CgVehicleSystem::GetVehicleSystem(localClientNum);
            if ( !VehicleSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_turret.cpp", 198, ASSERT_TYPE_ASSERT, "(vehicleSystem)", (const char *)&queryFormat, "vehicleSystem") )
              __debugbreak();
            v13 = (__int64)VehicleSystem->GetVehicleDef(VehicleSystem, &Entity->nextState);
            if ( !v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_turret.cpp", 200, ASSERT_TYPE_ASSERT, "(vehDef)", (const char *)&queryFormat, "vehDef") )
              __debugbreak();
            if ( *(_DWORD *)(v13 + 248) && *(_BYTE *)(v13 + 256) == 1 )
            {
              Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_wheelsonForceTurretYawSpeed, "bg_wheelsonForceTurretYawSpeed");
              v8 = *(float *)&Float_Internal_DebugName;
            }
          }
        }
      }
      _XMM1 = LODWORD(v7->viewYawMaxSpeed);
      if ( *(float *)&_XMM1 > 0.0 || v8 > 0.0 || v7->viewPitchMaxSpeed > 0.0 )
      {
        viewPitchMaxSpeed = v7->viewPitchMaxSpeed;
        __asm { vmaxss  xmm3, xmm1, xmm7; maxYawSpeed }
      }
      else
      {
        LODWORD(_XMM3) = 0;
      }
    }
    else
    {
      viewPitchMaxSpeed = 0.0;
      LODWORD(_XMM3) = 0;
    }
  }
  else
  {
    viewPitchMaxSpeed = 0.0;
    LODWORD(_XMM3) = 0;
  }
  CL_CapTurnRate(localClientNum, TURNRATECAPTYPE_TURRET, viewPitchMaxSpeed, *(float *)&_XMM3);
}

/*
==============
CG_Turret_UpdateCamera
==============
*/
char CG_Turret_UpdateCamera(LocalClientNum_t localClientNum, vec3_t *inOutViewAngles)
{
  cg_t *LocalClientGlobals; 
  const centity_t *TurretEnt; 
  const ClActiveClient *Client; 
  int CmdNumber; 
  const ClActiveClient *v9; 
  int v10; 
  int v11; 
  __int64 v12; 
  char *v13; 
  __int64 v14; 
  const entityState_t *p_nextState; 
  CgWeaponMap *Instance; 
  const Weapon *WeaponForEntity; 
  const WeaponDef *v18; 
  centity_t *LinkToParent; 
  CgAntiLag *v20; 
  int serverTime; 
  float v22; 
  bool v23; 
  CgVehicleSystem *VehicleSystem; 
  CgWeaponMap *v25; 
  const Weapon *v26; 
  float v27; 
  double v28; 
  double v29; 
  float v32; 
  char *fmt; 
  int v34; 
  __int64 v35; 
  __int64 v36; 
  char v37[272]; 
  vec3_t angles; 
  BgAntiLagEntityInfo angilagInfo; 

  v35 = -2i64;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_turret.cpp", 298, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  if ( CgAntiLag::IsDisabledForMigration(localClientNum) || (TurretEnt = CG_Turret_GetTurretEnt(localClientNum)) == NULL )
  {
    *(_QWORD *)&LocalClientGlobals->turretCameraBlendVelocity = 0i64;
    LocalClientGlobals->turretCameraLocked = 0;
    if ( LocalClientGlobals->turretControlled )
      CL_Input_ClearKeys(localClientNum);
    LocalClientGlobals->turretControlled = 0;
    LocalClientGlobals->turretTimeSinceFire = -1.0;
    return 0;
  }
  else
  {
    Client = ClActiveClient::GetClient(localClientNum);
    CmdNumber = ClActiveClient_GetCmdNumber(Client);
    v9 = ClActiveClient::GetClient(localClientNum);
    v10 = ClActiveClient_GetCmdNumber(v9);
    v11 = v10;
    v34 = v10;
    if ( CmdNumber > v10 )
    {
      LODWORD(fmt) = v10;
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143CEE128, 754i64, (unsigned int)CmdNumber, fmt);
    }
    if ( CmdNumber > v11 - 128 && CmdNumber > 0 )
    {
      v12 = (__int64)&v9->cmds[CmdNumber & 0x7F];
      v36 = v12;
      memset(&v34, 0, sizeof(v34));
      if ( !v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_active_client.h", 385, ASSERT_TYPE_ASSERT, "(requestedCmd)", (const char *)&queryFormat, "requestedCmd") )
        __debugbreak();
      v13 = v37;
      v14 = 2i64;
      do
      {
        *(__m256i *)v13 = *(__m256i *)v12;
        *((__m256i *)v13 + 1) = *(__m256i *)(v12 + 32);
        *((__m256i *)v13 + 2) = *(__m256i *)(v12 + 64);
        *((_OWORD *)v13 + 6) = *(_OWORD *)(v12 + 96);
        v13 += 128;
        *((_OWORD *)v13 - 1) = *(_OWORD *)(v12 + 112);
        v12 += 128i64;
        --v14;
      }
      while ( v14 );
      *(_QWORD *)v13 = *(_QWORD *)v12;
      p_nextState = &TurretEnt->nextState;
      Instance = CgWeaponMap::GetInstance(localClientNum);
      WeaponForEntity = BG_GetWeaponForEntity(Instance, &TurretEnt->nextState);
      v18 = BG_WeaponDef(WeaponForEntity, 0);
      if ( !v18 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_turret.cpp", 329, ASSERT_TYPE_ASSERT, "(turretWeaponDef)", (const char *)&queryFormat, "turretWeaponDef") )
        __debugbreak();
      if ( v18->alignBarrelWithTurretBody )
      {
        LinkToParent = CG_Entity_GetLinkToParent(localClientNum, TurretEnt);
        if ( LinkToParent )
          TurretEnt = LinkToParent;
        v20 = CgAntiLag::GetInstance(localClientNum);
        serverTime = LocalClientGlobals->predictedPlayerState.serverTime;
        angilagInfo.boneInfo.boneList.m_usedSize = 0;
        angilagInfo.boneInfo.boneList.m_maxSize = 0;
        BgAntiLag::GetEntityInfoAtTime(v20, LocalClientGlobals->predictedPlayerState.clientNum, TurretEnt->nextState.number, 8u, serverTime, &angilagInfo);
        v22 = (float)LocalClientGlobals->frametime * 0.001;
        CG_Turret_ViewBounce(localClientNum, &LocalClientGlobals->predictedPlayerState, v22, &angilagInfo, TurretEnt);
        v23 = v37[157] || LocalClientGlobals->turretCameraLocked;
        LocalClientGlobals->turretCameraLocked = v23;
        if ( !LocalClientGlobals->turretControlled )
          CL_Input_ClearKeys(localClientNum);
        LocalClientGlobals->turretControlled = 1;
        if ( v22 != 0.0 )
        {
          if ( TurretEnt == (const centity_t *)-400i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 1914, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
            __debugbreak();
          if ( ((TurretEnt->nextState.eType - 12) & 0xFFFD) != 0 || !BG_IsRemoteTurretActive(&LocalClientGlobals->predictedPlayerState) || LocalClientGlobals->predictedPlayerState.remoteControlEnt == 2047 )
            goto LABEL_45;
          VehicleSystem = CgVehicleSystem::GetVehicleSystem(localClientNum);
          if ( !VehicleSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_turret.cpp", 383, ASSERT_TYPE_ASSERT, "(vehicleSystem)", (const char *)&queryFormat, "vehicleSystem") )
            __debugbreak();
          v25 = CgWeaponMap::GetInstance(localClientNum);
          v26 = BG_GetWeaponForEntity(v25, p_nextState);
          if ( !VehicleSystem->AimTurret(VehicleSystem, v26, p_nextState->number) )
          {
LABEL_45:
            inOutViewAngles->v[0] = LocalClientGlobals->predictedPlayerState.viewangles.v[0];
            inOutViewAngles->v[1] = LocalClientGlobals->predictedPlayerState.viewangles.v[1];
            inOutViewAngles->v[2] = LocalClientGlobals->predictedPlayerState.viewangles.v[2];
            if ( LocalClientGlobals->turretCameraLocked )
              v27 = v22 + LocalClientGlobals->turretCameraLockedTime;
            else
              v27 = LocalClientGlobals->turretCameraLockedTime - (float)(v22 * TURRET_CAMERA_LOCK_BLEND_OUT_SPEED_SCALE);
            LocalClientGlobals->turretCameraLockedTime = v27;
            v28 = I_fclamp(v27, 0.0, TURRET_CAMERA_LOCK_BLEND_TIME);
            LocalClientGlobals->turretCameraLockedTime = *(float *)&v28;
            if ( *(float *)&v28 > 0.001 )
            {
              v29 = I_fclamp(*(float *)&v28 / TURRET_CAMERA_LOCK_BLEND_TIME, 0.0, 1.0);
              _XMM2 = 0i64;
              __asm { vroundss xmm5, xmm2, xmm3, 1 }
              v32 = (float)((float)((float)((float)((float)(v22 * angilagInfo.angVelocity.v[1]) * 0.0027777778) - *(float *)&_XMM5) * 360.0) * *(float *)&v29) + inOutViewAngles->v[1];
              inOutViewAngles->v[1] = v32;
              angles.v[0] = inOutViewAngles->v[0] - LocalClientGlobals->predictedPlayerState.delta_angles.v[0];
              angles.v[1] = v32 - LocalClientGlobals->predictedPlayerState.delta_angles.v[1];
              angles.v[2] = inOutViewAngles->v[2] - LocalClientGlobals->predictedPlayerState.delta_angles.v[2];
              CL_SetViewAngles(localClientNum, &angles);
            }
          }
        }
      }
      else
      {
        CG_Turret_CameraReset(localClientNum, LocalClientGlobals);
      }
    }
    else
    {
      memset(&v34, 0, sizeof(v34));
      *(_QWORD *)&LocalClientGlobals->turretCameraBlendVelocity = 0i64;
      LocalClientGlobals->turretCameraLocked = 0;
      if ( LocalClientGlobals->turretControlled )
        CL_Input_ClearKeys(localClientNum);
      LocalClientGlobals->turretControlled = 0;
      LocalClientGlobals->turretTimeSinceFire = -1.0;
    }
    return 1;
  }
}

/*
==============
CG_Turret_ViewBounce
==============
*/
void CG_Turret_ViewBounce(LocalClientNum_t localClientNum, playerState_s *ps, const float deltaTime, const BgAntiLagEntityInfo *angilagInfo, const centity_t *referenceEnt)
{
  cg_t *LocalClientGlobals; 
  const dvar_t *v9; 
  float value; 
  const dvar_t *v11; 
  float v12; 
  float v13; 
  CgVehicleSystem *VehicleSystem; 
  __int64 v15; 
  double Float_Internal_DebugName; 
  double v17; 
  double v18; 
  float v19; 
  float v20; 
  float v21; 
  float v24; 
  float v27; 
  float v28; 
  float v29; 
  float v30; 
  LocalClientNum_t v31; 
  vec3_t angles; 
  vec3_t v33; 
  vec3_t v34; 
  tmat33_t<vec3_t> axis; 
  tmat33_t<vec3_t> out; 
  tmat33_t<vec3_t> in1; 
  tmat33_t<vec3_t> in2; 
  tmat33_t<vec3_t> v39; 
  tmat33_t<vec3_t> v40; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( !LocalClientGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_turret.cpp", 236, ASSERT_TYPE_ASSERT, "(cgameGlob)", (const char *)&queryFormat, "cgameGlob") )
    __debugbreak();
  v9 = DCONST_DVARFLT_remote_turret_yaw_addition;
  if ( !DCONST_DVARFLT_remote_turret_yaw_addition && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "remote_turret_yaw_addition") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v9);
  value = v9->current.value;
  v11 = DCONST_DVARFLT_remote_turret_pitch_addition;
  if ( !DCONST_DVARFLT_remote_turret_pitch_addition && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "remote_turret_pitch_addition") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v11);
  v12 = v11->current.value;
  v13 = 0.0;
  if ( referenceEnt->nextState.eType == ET_VEHICLE )
  {
    VehicleSystem = CgVehicleSystem::GetVehicleSystem(localClientNum);
    if ( !VehicleSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_turret.cpp", 245, ASSERT_TYPE_ASSERT, "(vehicleSystem)", (const char *)&queryFormat, "vehicleSystem") )
      __debugbreak();
    v15 = (__int64)VehicleSystem->GetVehicleDef(VehicleSystem, &referenceEnt->nextState);
    if ( !v15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_turret.cpp", 247, ASSERT_TYPE_ASSERT, "(vehDef)", (const char *)&queryFormat, "vehDef") )
      __debugbreak();
    if ( *(_BYTE *)(v15 + 8) == 9 && *(_DWORD *)(v15 + 248) && *(_BYTE *)(v15 + 256) == 1 )
    {
      Float_Internal_DebugName = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_wheelsonTurretPitchAddition, "bg_wheelsonTurretPitchAddition");
      v12 = *(float *)&Float_Internal_DebugName;
      v17 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_wheelsonTurretYawAddition, "bg_wheelsonTurretYawAddition");
      value = *(float *)&v17;
      v18 = Dvar_GetFloat_Internal_DebugName(DCONST_DVARFLT_bg_wheelsonTurretRollAddition, "bg_wheelsonTurretRollAddition");
      v13 = *(float *)&v18;
    }
  }
  v19 = deltaTime * angilagInfo->angVelocity.v[0];
  v20 = (float)(deltaTime * angilagInfo->angVelocity.v[1]) * 0.0027777778;
  v21 = (float)(deltaTime * angilagInfo->angVelocity.v[2]) * 0.0027777778;
  _XMM9 = 0i64;
  __asm { vroundss xmm2, xmm9, xmm1, 1 }
  v24 = (float)(v21 - *(float *)&_XMM2) * 360.0;
  __asm { vroundss xmm2, xmm9, xmm1, 1 }
  angles.v[0] = referenceEnt->pose.angles.v[0] - (float)((float)((float)((float)(v19 * 0.0027777778) - *(float *)&_XMM2) * 360.0) * v12);
  __asm { vroundss xmm2, xmm9, xmm0, 1 }
  v27 = referenceEnt->pose.angles.v[2];
  angles.v[1] = referenceEnt->pose.angles.v[1] - (float)((float)((float)(v20 - *(float *)&_XMM2) * 360.0) * value);
  angles.v[2] = v27 - (float)(v13 * v24);
  AnglesToAxis(&angles, &axis);
  MatrixTranspose(&axis, &out);
  AnglesToAxis(&ps->viewangles, &in1);
  MatrixMultiply(&in1, &out, &v39);
  AnglesToAxis(&referenceEnt->pose.angles, &in2);
  MatrixMultiply(&v39, &in2, &v40);
  AxisToAngles(&v40, &v34);
  v28 = v34.v[1];
  ps->viewangles.v[0] = v34.v[0];
  v29 = angles.v[2];
  ps->viewangles.v[1] = v28;
  ps->viewangles.v[2] = v29;
  v30 = ps->viewangles.v[1] - ps->delta_angles.v[1];
  v31 = LocalClientGlobals->localClientNum;
  v33.v[0] = ps->viewangles.v[0] - ps->delta_angles.v[0];
  v33.v[2] = ps->viewangles.v[2] - ps->delta_angles.v[2];
  v33.v[1] = v30;
  CL_SetViewAngles(v31, &v33);
}


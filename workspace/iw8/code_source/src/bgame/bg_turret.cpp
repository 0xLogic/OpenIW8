/*
==============
BG_Turret_ClearPlayerstateOwnedTurret
==============
*/

void __fastcall BG_Turret_ClearPlayerstateOwnedTurret(playerState_s *ps)
{
  ?BG_Turret_ClearPlayerstateOwnedTurret@@YAXPEAUplayerState_s@@@Z(ps);
}

/*
==============
BG_Turret_IsUsingNonRemoteTurret
==============
*/

bool __fastcall BG_Turret_IsUsingNonRemoteTurret(const playerState_s *ps)
{
  return ?BG_Turret_IsUsingNonRemoteTurret@@YA_NPEBUplayerState_s@@@Z(ps);
}

/*
==============
PM_TurretMove
==============
*/

void __fastcall PM_TurretMove(pmove_t *pm, pml_t *pml)
{
  ?PM_TurretMove@@YAXPEAVpmove_t@@PEAUpml_t@@@Z(pm, pml);
}

/*
==============
BG_Turret_HasPmoveMovement
==============
*/

bool __fastcall BG_Turret_HasPmoveMovement(const BgWeaponMap *weaponMap, const playerState_s *ps)
{
  return ?BG_Turret_HasPmoveMovement@@YA_NPEBVBgWeaponMap@@PEBUplayerState_s@@@Z(weaponMap, ps);
}

/*
==============
PM_Turret_ApplyVelocity
==============
*/

void __fastcall PM_Turret_ApplyVelocity(pmove_t *pm, pml_t *pml, vec3_t *inOutAppliedInstantaneousVelocity)
{
  ?PM_Turret_ApplyVelocity@@YAXPEAVpmove_t@@PEAUpml_t@@AEATvec3_t@@@Z(pm, pml, inOutAppliedInstantaneousVelocity);
}

/*
==============
BG_Turret_HasPmoveMovement
==============
*/

bool __fastcall BG_Turret_HasPmoveMovement(const WeaponDef *weapDef)
{
  return ?BG_Turret_HasPmoveMovement@@YA_NPEBUWeaponDef@@@Z(weapDef);
}

/*
==============
PM_Turret_UpdateFire
==============
*/

void __fastcall PM_Turret_UpdateFire(pmove_t *pm, pml_t *pml, bool isUsingTurretViewarms)
{
  ?PM_Turret_UpdateFire@@YAXPEAVpmove_t@@PEAUpml_t@@_N@Z(pm, pml, isUsingTurretViewarms);
}

/*
==============
BG_Turret_UpdateAnimParams
==============
*/

void __fastcall BG_Turret_UpdateAnimParams(characterInfo_t *ci, const vec3_t *playerOrigin, const vec3_t *playerAngles, const vec3_t *turretOrigin, const vec3_t *turretAngles)
{
  ?BG_Turret_UpdateAnimParams@@YAXPEAUcharacterInfo_t@@AEBTvec3_t@@111@Z(ci, playerOrigin, playerAngles, turretOrigin, turretAngles);
}

/*
==============
BG_Turret_GetTurretEntityState
==============
*/

const entityState_t *__fastcall BG_Turret_GetTurretEntityState(pmove_t *pm, bool *isUsingRemoteTurret)
{
  return ?BG_Turret_GetTurretEntityState@@YAPEBUentityState_t@@PEAVpmove_t@@PEA_N@Z(pm, isUsingRemoteTurret);
}

/*
==============
BG_Turret_IsUsingNonRemoteTurretAndUnlinked
==============
*/

bool __fastcall BG_Turret_IsUsingNonRemoteTurretAndUnlinked(const playerState_s *ps)
{
  return ?BG_Turret_IsUsingNonRemoteTurretAndUnlinked@@YA_NPEBUplayerState_s@@@Z(ps);
}

/*
==============
BG_Turret_ClearPlayerstateOwnedTurret
==============
*/
void BG_Turret_ClearPlayerstateOwnedTurret(playerState_s *ps)
{
  if ( !ps )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_turret.cpp", 378, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2159, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
  }
  if ( ps == (playerState_s *)-376i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2062, ASSERT_TYPE_ASSERT, "(esFlags)", (const char *)&queryFormat, "esFlags") )
    __debugbreak();
  GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::ClearFlagInternal(&ps->eFlags, ACTIVE, 5u);
  GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::ClearFlagInternal(&ps->eFlags, ACTIVE, 6u);
  GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::ClearFlagInternal(&ps->eFlags, ACTIVE, 7u);
  ps->viewlocked_entNum = 2047;
  ps->viewlocked = PLAYERVIEWLOCK_NONE;
}

/*
==============
BG_Turret_GetTurretEntityState
==============
*/
const entityState_t *BG_Turret_GetTurretEntityState(pmove_t *pm, bool *isUsingRemoteTurret)
{
  playerState_s *ps; 
  bool v5; 
  bool v6; 
  int viewlocked_entNum; 
  BgHandler *m_bgHandler; 
  centity_t *Entity; 
  const entityState_t *p_nextState; 
  entityType_s eType; 
  bool v12; 
  entityType_s v13; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_turret.cpp", 151, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_turret.cpp", 151, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v5 = BG_IsTurretActive(ps) && ps->viewlocked_entNum != 2047;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2393, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&ps->otherFlags, ACTIVE, 0x18u) )
    goto LABEL_20;
  if ( !Com_GameMode_SupportsFeature(WEAPON_DROPPING_LADDER_CLIMB) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2396, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::TURRET_REMOTE_CONTROL ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::TURRET_REMOTE_CONTROL )") )
    __debugbreak();
  if ( ps->remoteTurretEnt == 2047 )
LABEL_20:
    v6 = 0;
  else
    v6 = 1;
  *isUsingRemoteTurret = v6;
  if ( v5 )
  {
    viewlocked_entNum = ps->viewlocked_entNum;
    m_bgHandler = (BgHandler *)pm->m_bgHandler;
    if ( m_bgHandler->IsClient(m_bgHandler) )
    {
      Entity = CG_GetEntity((const LocalClientNum_t)LODWORD(m_bgHandler[1].__vftable), viewlocked_entNum);
      if ( Entity )
        p_nextState = &Entity->nextState;
      else
        p_nextState = NULL;
    }
    else
    {
      p_nextState = GHandler::GetEntityState((GHandler *)m_bgHandler, viewlocked_entNum);
    }
    eType = p_nextState->eType;
    if ( eType != ET_TURRET )
    {
      v12 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_turret.cpp", 160, ASSERT_TYPE_ASSERT, "(turretEntState->eType == ET_TURRET)", "%s\n\tPM_UpdateTurretFire: unexpected turret entity type %i", "turretEntState->eType == ET_TURRET", eType);
      goto LABEL_33;
    }
  }
  else
  {
    if ( !v6 )
      return 0i64;
    p_nextState = BG_GetEntityState(pm->m_bgHandler, ps->remoteTurretEnt);
    v13 = p_nextState->eType;
    if ( ((v13 - 11) & 0xFFFC) != 0 || v13 == ET_PLANE )
    {
      v12 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_turret.cpp", 165, ASSERT_TYPE_ASSERT, "(turretEntState->eType == ET_TURRET || BG_IsVehicleEntity( turretEntState ))", "%s\n\tPM_UpdateTurretFire: unexpected remote turret entity type %i", "turretEntState->eType == ET_TURRET || BG_IsVehicleEntity( turretEntState )", v13);
LABEL_33:
      if ( v12 )
        __debugbreak();
    }
  }
  if ( p_nextState->eType == ET_TURRET )
    return p_nextState;
  return 0i64;
}

/*
==============
BG_Turret_HasPmoveMovement
==============
*/
bool BG_Turret_HasPmoveMovement(const WeaponDef *weapDef)
{
  if ( !weapDef && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_turret.cpp", 29, ASSERT_TYPE_ASSERT, "(weapDef)", (const char *)&queryFormat, "weapDef") )
    __debugbreak();
  return weapDef->weapClass == WEAPCLASS_TURRET && (unsigned int)(weapDef->turret3pAnimType - 1) > 1;
}

/*
==============
BG_Turret_HasPmoveMovement
==============
*/
bool BG_Turret_HasPmoveMovement(const BgWeaponMap *weaponMap, const playerState_s *ps)
{
  const Weapon *ViewmodelWeapon; 
  GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64> *p_weapFlags; 
  unsigned int weaponIdx; 
  bool v7; 
  WeaponDef **v8; 
  WeaponDef *v9; 
  __int64 v11; 

  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_turret.cpp", 44, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_turret.cpp", 45, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_CUT_CHUTE_LOW|WEAPON_LADDER_AIM|0x80) )
    return 0;
  ViewmodelWeapon = BG_GetViewmodelWeapon(weaponMap, ps);
  if ( ps )
  {
    p_weapFlags = &ps->weapCommon.weapFlags;
    if ( GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(&ps->weapCommon.weapFlags, ACTIVE, 0x22u) )
      goto LABEL_15;
  }
  else
  {
    p_weapFlags = (GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64> *)1832;
  }
  if ( ps && !GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(p_weapFlags, ACTIVE, 0x11u) )
    GameModeFlagContainer<enum PWeaponFlagsCommon,enum PWeaponFlagsSP,enum PWeaponFlagsMP,64>::TestFlagInternal(p_weapFlags, ACTIVE, 0x1Bu);
LABEL_15:
  weaponIdx = ViewmodelWeapon->weaponIdx;
  if ( weaponIdx > bg_lastParsedWeaponIndex )
  {
    LODWORD(v11) = ViewmodelWeapon->weaponIdx;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1203, ASSERT_TYPE_ASSERT, "( weaponIdx ) <= ( bg_lastParsedWeaponIndex )", "weaponIdx not in [0, bg_lastParsedWeaponIndex]\n\t%u not in [0, %u]", v11, bg_lastParsedWeaponIndex) )
      __debugbreak();
  }
  v7 = bg_weaponDefs[(unsigned __int16)weaponIdx] == NULL;
  v8 = &bg_weaponDefs[(unsigned __int16)weaponIdx];
  if ( v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons_util.h", 1204, ASSERT_TYPE_ASSERT, "(bg_weaponDefs[weaponIdx])", (const char *)&queryFormat, "bg_weaponDefs[weaponIdx]") )
    __debugbreak();
  v9 = *v8;
  if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_turret.cpp", 29, ASSERT_TYPE_ASSERT, "(weapDef)", (const char *)&queryFormat, "weapDef") )
    __debugbreak();
  if ( v9->weapClass != WEAPCLASS_TURRET )
    return 0;
  return (unsigned int)(v9->turret3pAnimType - 1) > 1;
}

/*
==============
BG_Turret_IsUsingNonRemoteTurret
==============
*/
char BG_Turret_IsUsingNonRemoteTurret(const playerState_s *ps)
{
  GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32> *p_eFlags; 

  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_turret.cpp", 388, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !BG_IsTurretActive(ps) )
    return 0;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2166, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  p_eFlags = &ps->eFlags;
  if ( !p_eFlags && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2072, ASSERT_TYPE_ASSERT, "(esFlags)", (const char *)&queryFormat, "esFlags") )
    __debugbreak();
  if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(p_eFlags, ACTIVE, 7u) )
  {
    if ( !Com_GameMode_SupportsFeature(WEAPON_DROPPING_LADDER_CLIMB) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2076, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::TURRET_REMOTE_CONTROL ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::TURRET_REMOTE_CONTROL )") )
      __debugbreak();
    return 0;
  }
  return 1;
}

/*
==============
BG_Turret_IsUsingNonRemoteTurretAndUnlinked
==============
*/
bool BG_Turret_IsUsingNonRemoteTurretAndUnlinked(const playerState_s *ps)
{
  int pm_type; 

  if ( !ps )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_turret.cpp", 396, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_turret.cpp", 388, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
  }
  if ( !BG_IsTurretActive(ps) )
    return 0;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2166, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( ps == (const playerState_s *)-376i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2072, ASSERT_TYPE_ASSERT, "(esFlags)", (const char *)&queryFormat, "esFlags") )
    __debugbreak();
  if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&ps->eFlags, ACTIVE, 7u) )
  {
    if ( !Com_GameMode_SupportsFeature(WEAPON_DROPPING_LADDER_CLIMB) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2076, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::TURRET_REMOTE_CONTROL ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::TURRET_REMOTE_CONTROL )") )
      __debugbreak();
    return 0;
  }
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2671, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  pm_type = ps->pm_type;
  return pm_type != 1 && pm_type != 8;
}

/*
==============
BG_Turret_UpdateAnimParams
==============
*/
void BG_Turret_UpdateAnimParams(characterInfo_t *ci, const vec3_t *playerOrigin, const vec3_t *playerAngles, const vec3_t *turretOrigin, const vec3_t *turretAngles)
{
  vec3_t v3; 

  _RSI = playerOrigin;
  _RBX = ci;
  if ( !ci && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_turret.cpp", 61, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
    __debugbreak();
  AnglesSubtract(playerAngles, turretAngles, &v3);
  __asm
  {
    vmovss  xmm0, dword ptr [rsp+68h+v3]
    vmulss  xmm5, xmm0, cs:__real@3b360b61
    vaddss  xmm2, xmm5, cs:__real@3f000000
    vxorps  xmm0, xmm0, xmm0
    vroundss xmm4, xmm0, xmm2, 1
    vsubss  xmm1, xmm5, xmm4
    vmulss  xmm0, xmm1, cs:__real@43b40000
    vmovss  dword ptr [rbx+8C8h], xmm0
    vmovss  xmm0, dword ptr [rsp+68h+v3+4]; angle
  }
  *(double *)&_XMM0 = AngleNormalize360(*(const float *)&_XMM0);
  __asm
  {
    vmovss  dword ptr [rbx+8CCh], xmm0
    vmovss  xmm1, dword ptr [rsi+8]
    vsubss  xmm2, xmm1, dword ptr [rdi+8]
    vmovss  dword ptr [rbx+8D0h], xmm2
  }
}

/*
==============
PM_TurretMove
==============
*/
void PM_TurretMove(pmove_t *pm, pml_t *pml)
{
  const entityState_t *TurretEntityState; 
  BgAntiLag *antiLag; 
  int number; 
  int clientNum; 
  int serverTime; 
  char v49; 
  char v50; 
  bool v52; 
  bool v53; 
  char yawmove; 
  int contentMask; 
  playerState_s *ps; 
  bool isUsingRemoteTurret; 
  vec3_t forward; 
  vec3_t outOrigin; 
  float v1[4]; 
  vec3_t end; 
  vec3_t start; 
  BgAntiLagEntityInfo outInfo; 
  trace_t outResults; 

  _RBX = pml;
  if ( !pml && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_turret.cpp", 259, ASSERT_TYPE_ASSERT, "(pml)", (const char *)&queryFormat, "pml") )
    __debugbreak();
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_turret.cpp", 261, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  _RDI = pm->ps;
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_turret.cpp", 261, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  isUsingRemoteTurret = 0;
  TurretEntityState = BG_Turret_GetTurretEntityState(pm, &isUsingRemoteTurret);
  if ( TurretEntityState )
  {
    __asm
    {
      vmovaps [rsp+260h+var_40], xmm6
      vmovaps [rsp+260h+var_60], xmm8
      vmovaps [rsp+260h+var_B0], xmm13
    }
    AngleVectors(&_RDI->viewangles, &forward, NULL, NULL);
    __asm
    {
      vmovss  xmm3, dword ptr [rsp+260h+forward]
      vmovss  xmm4, dword ptr [rsp+260h+forward+4]
      vmovss  xmm8, cs:__real@3f800000
      vmovss  xmm13, cs:__real@80000000
      vmulss  xmm1, xmm3, xmm3
      vmulss  xmm0, xmm4, xmm4
      vaddss  xmm1, xmm1, xmm0
      vsqrtss xmm2, xmm1, xmm1
      vcmpless xmm0, xmm2, xmm13
      vblendvps xmm0, xmm2, xmm8, xmm0
      vmovss  xmm2, cs:__real@3a83126f; epsilon
      vxorps  xmm6, xmm6, xmm6
      vdivss  xmm1, xmm8, xmm0
      vmulss  xmm0, xmm3, xmm1
      vmulss  xmm1, xmm4, xmm1
      vmovss  dword ptr [rsp+260h+forward+4], xmm1
      vmovss  dword ptr [rsp+260h+forward+8], xmm6
      vmovss  dword ptr [rsp+260h+forward], xmm0
      vmovss  [rsp+260h+v1], xmm6
      vmovss  [rsp+260h+var_1E4], xmm6
      vmovss  [rbp+160h+var_1E0], xmm6
    }
    if ( !VecNCompareCustomEpsilon(forward.v, v1, *(float *)&_XMM2, 3) )
    {
      antiLag = (BgAntiLag *)pm->antiLag;
      _ER15 = 0;
      __asm
      {
        vmovaps [rsp+260h+var_50], xmm7
        vmovaps [rsp+260h+var_70], xmm9
      }
      outInfo.boneInfo.boneList.m_usedSize = 0;
      outInfo.boneInfo.boneList.m_maxSize = 0;
      number = TurretEntityState->number;
      clientNum = _RDI->clientNum;
      serverTime = pm->cmd.serverTime;
      __asm
      {
        vmovaps [rsp+260h+var_80], xmm10
        vmovaps [rsp+260h+var_90], xmm11
        vmovaps [rsp+260h+var_A0], xmm12
      }
      BgAntiLag::GetEntityInfoAtTime(antiLag, clientNum, number, 1u, serverTime, &outInfo);
      BgAntiLagEntity_GetOrigin(&outInfo, &outOrigin);
      __asm { vmovss  xmm1, cs:__real@43480000; maxAbsValueSize }
      _RBX->applyTurretVelocity = 1;
      *(double *)&_XMM0 = MSG_UnpackUnsignedFloat(_RDI->turretOffset, *(float *)&_XMM1, 6u);
      __asm
      {
        vmovss  xmm9, dword ptr cs:__xmm@80000000800000008000000080000000
        vxorps  xmm3, xmm0, xmm9
        vmulss  xmm1, xmm3, dword ptr [rsp+260h+forward]
        vaddss  xmm2, xmm1, dword ptr [rsp+260h+outOrigin]
        vmulss  xmm1, xmm3, dword ptr [rsp+260h+forward+4]
        vmovss  dword ptr [rbx+210h], xmm2
        vaddss  xmm2, xmm1, dword ptr [rsp+260h+outOrigin+4]
        vmulss  xmm1, xmm3, dword ptr [rsp+260h+forward+8]
        vmovss  dword ptr [rbx+214h], xmm2
        vaddss  xmm2, xmm1, dword ptr [rsp+260h+outOrigin+8]
        vmovss  dword ptr [rbx+218h], xmm2
      }
      _RBX->turretTargetOrigin.v[2] = _RDI->origin.v[2];
      __asm
      {
        vmovss  xmm10, dword ptr [rdi+30h]
        vmovss  xmm11, dword ptr [rdi+34h]
        vmovss  xmm12, dword ptr [rdi+38h]
      }
      PM_UpdatePlayerCollision(pm, _RBX, 1, 1, 0, 1);
      _R14 = DCONST_DVARVEC2_turretMaxHeighOffset;
      __asm
      {
        vmovss  xmm0, dword ptr [rdi+38h]
        vsubss  xmm7, xmm0, dword ptr [rsp+260h+outOrigin+8]
      }
      if ( !DCONST_DVARVEC2_turretMaxHeighOffset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 727, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "turretMaxHeighOffset") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(_R14);
      __asm
      {
        vcomiss xmm7, xmm6
        vmovss  xmm0, dword ptr [r14+2Ch]
      }
      if ( v49 )
        __asm { vcomiss xmm0, xmm7 }
      else
        __asm { vcomiss xmm7, dword ptr [r14+28h] }
      v52 = !(v49 | v50);
      v53 = !pm->cmd.pitchmove && !pm->cmd.yawmove;
      if ( _RBX->hadSlideContact )
      {
        yawmove = pm->cmd.yawmove;
        if ( yawmove )
        {
          __asm
          {
            vmovss  xmm0, cs:?TURRET_MIN_WALL_NORMAL@@3MA; float TURRET_MIN_WALL_NORMAL
            vcomiss xmm0, dword ptr [rbx+240h]
            vmovss  xmm4, dword ptr [rbx+0Ch]
            vmovss  xmm3, dword ptr [rbx+10h]
            vmovss  xmm5, dword ptr [rbx+14h]
            vxorps  xmm2, xmm3, xmm9
          }
          _EAX = yawmove;
          __asm
          {
            vmovd   xmm0, eax
            vmovd   xmm1, r15d
            vpcmpgtd xmm1, xmm0, xmm1
            vblendvps xmm1, xmm2, xmm3, xmm1
            vmulss  xmm3, xmm1, dword ptr [rbx+23Ch]
            vxorps  xmm2, xmm4, xmm9
          }
          _EAX = yawmove;
          __asm
          {
            vmovd   xmm0, eax
            vmovd   xmm1, r15d
            vpcmpgtd xmm1, xmm0, xmm1
            vblendvps xmm1, xmm2, xmm4, xmm1
            vmulss  xmm0, xmm1, dword ptr [rbx+238h]
            vaddss  xmm4, xmm3, xmm0
            vxorps  xmm2, xmm5, xmm9
          }
          _EAX = yawmove;
          __asm
          {
            vmovd   xmm0, eax
            vmovd   xmm1, r15d
            vpcmpgtd xmm1, xmm0, xmm1
            vblendvps xmm1, xmm2, xmm5, xmm1
            vmulss  xmm0, xmm1, dword ptr [rbx+240h]
            vaddss  xmm2, xmm4, xmm0
            vcomiss xmm2, xmm6
          }
        }
      }
      __asm { vmovss  xmm1, dword ptr [rdi+30h] }
      contentMask = pm->tracemask;
      ps = pm->ps;
      __asm
      {
        vmovss  dword ptr [rbp+160h+start], xmm1
        vmovss  xmm0, dword ptr [rdi+34h]
        vmovss  dword ptr [rbp+160h+start+4], xmm0
        vmovss  xmm2, dword ptr [rdi+38h]
        vmovss  dword ptr [rbp+160h+end], xmm1
        vsubss  xmm1, xmm2, cs:?TURRET_GROUND_TRACE_HEIGHT@@3MA; float TURRET_GROUND_TRACE_HEIGHT
        vmovss  dword ptr [rbp+160h+end+4], xmm0
        vaddss  xmm0, xmm2, cs:?TURRET_GROUND_TRACE_HEIGHT_UP_OFFSET@@3MA; float TURRET_GROUND_TRACE_HEIGHT_UP_OFFSET
        vmovss  dword ptr [rbp+160h+start+8], xmm0
        vmovss  dword ptr [rbp+160h+end+8], xmm1
      }
      BgTrace::LegacyPlayerTrace(pm->m_trace, pm, &outResults, &start, &end, &bounds_origin, ps->clientNum, contentMask, 1);
      __asm
      {
        vmovss  xmm0, [rbp+160h+outResults.fraction]
        vucomiss xmm0, xmm8
      }
      if ( v50 )
        LOBYTE(_ER15) = 1;
      if ( v52 || (_BYTE)_ER15 )
      {
        if ( !v53 )
          PM_AddEvent(pm, EV_TURRET_BLOCKED_HINT);
        __asm
        {
          vmovss  xmm3, dword ptr [rbx+22Ch]
          vmovss  xmm0, dword ptr [rbx+230h]
          vmovss  xmm1, dword ptr [rbx+234h]
          vsubss  xmm2, xmm3, xmm10
          vsubss  xmm4, xmm0, xmm11
          vsubss  xmm5, xmm1, xmm12
        }
        if ( !(_BYTE)_ER15 )
        {
          __asm
          {
            vmovss  dword ptr [rdi+30h], xmm10
            vmovss  dword ptr [rdi+34h], xmm11
            vmovss  dword ptr [rdi+38h], xmm12
          }
        }
      }
      if ( pm->cmd.yawmove )
      {
        __asm
        {
          vmovss  xmm0, dword ptr [rsp+260h+outOrigin]
          vsubss  xmm4, xmm0, dword ptr [rdi+30h]
          vmovss  xmm0, dword ptr [rsp+260h+outOrigin+4]
          vmovss  dword ptr [rsp+260h+forward], xmm4
          vsubss  xmm3, xmm0, dword ptr [rdi+34h]
          vmulss  xmm0, xmm3, xmm3
          vmulss  xmm1, xmm4, xmm4
          vaddss  xmm1, xmm1, xmm0
          vsqrtss xmm2, xmm1, xmm1
          vcmpless xmm0, xmm2, xmm13
          vblendvps xmm0, xmm2, xmm8, xmm0
          vdivss  xmm1, xmm8, xmm0
          vmulss  xmm0, xmm1, xmm4
          vmovss  dword ptr [rsp+260h+forward+8], xmm6
          vmovss  dword ptr [rsp+260h+forward], xmm0
          vmulss  xmm1, xmm1, xmm3
          vmovss  dword ptr [rsp+260h+forward+4], xmm1
          vmovss  xmm11, dword ptr [rdi+1D8h]
          vmovss  xmm12, dword ptr [rdi+1E0h]
        }
        *(double *)&_XMM0 = vectoyaw((const vec2_t *)&forward);
        __asm
        {
          vmovss  xmm1, dword ptr [rdi+1D8h]
          vsubss  xmm2, xmm1, dword ptr [rdi+0B4h]
          vmovss  xmm1, dword ptr [rdi+1DCh]
          vmovss  xmm3, dword ptr [rdi+1E0h]
          vmovss  xmm4, cs:__real@3b360b61
          vmovss  xmm6, cs:__real@3f000000
          vmulss  xmm5, xmm2, xmm4
          vsubss  xmm2, xmm1, dword ptr [rdi+0B8h]
          vsubss  xmm1, xmm3, dword ptr [rdi+0BCh]
          vmulss  xmm8, xmm1, xmm4
          vmulss  xmm7, xmm2, xmm4
          vmovss  xmm4, cs:__real@43b40000
          vmovaps xmm10, xmm0
          vaddss  xmm1, xmm5, xmm6
          vxorps  xmm9, xmm9, xmm9
          vroundss xmm2, xmm9, xmm1, 1
          vsubss  xmm0, xmm5, xmm2
          vmulss  xmm0, xmm0, xmm4
          vsubss  xmm1, xmm11, xmm0
          vmovss  dword ptr [rdi+0B4h], xmm1
          vaddss  xmm2, xmm7, xmm6
          vroundss xmm3, xmm9, xmm2, 1
          vsubss  xmm0, xmm7, xmm3
          vmulss  xmm1, xmm0, xmm4
          vsubss  xmm2, xmm10, xmm1
          vmovss  dword ptr [rdi+0B8h], xmm2
          vaddss  xmm3, xmm8, xmm6
          vroundss xmm2, xmm9, xmm3, 1
          vsubss  xmm0, xmm8, xmm2
          vmulss  xmm1, xmm0, xmm4
          vsubss  xmm2, xmm12, xmm1
          vmovss  dword ptr [rdi+0BCh], xmm2
          vmovss  dword ptr [rdi+1D8h], xmm11
          vmovss  dword ptr [rdi+1DCh], xmm10
          vmovss  dword ptr [rdi+1E0h], xmm12
        }
        Vec3AngleNormalize180(&_RDI->viewangles);
      }
      __asm
      {
        vmovaps xmm12, [rsp+260h+var_A0]
        vmovaps xmm11, [rsp+260h+var_90]
        vmovaps xmm10, [rsp+260h+var_80]
        vmovaps xmm9, [rsp+260h+var_70]
        vmovaps xmm7, [rsp+260h+var_50]
      }
      _RBX->applyTurretVelocity = 0;
      _RBX->hadSlideContact = 0;
    }
    __asm
    {
      vmovaps xmm8, [rsp+260h+var_60]
      vmovaps xmm6, [rsp+260h+var_40]
      vmovaps xmm13, [rsp+260h+var_B0]
    }
  }
}

/*
==============
PM_Turret_ApplyVelocity
==============
*/
void PM_Turret_ApplyVelocity(pmove_t *pm, pml_t *pml, vec3_t *inOutAppliedInstantaneousVelocity)
{
  _RSI = inOutAppliedInstantaneousVelocity;
  _RBX = pml;
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_turret.cpp", 76, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_turret.cpp", 77, ASSERT_TYPE_ASSERT, "(pml)", (const char *)&queryFormat, "pml") )
    __debugbreak();
  __asm
  {
    vmovss  xmm1, dword ptr [rbx+24h]
    vcomiss xmm1, cs:__real@3a83126f
  }
  if ( _RBX->applyTurretVelocity )
  {
    _RAX = pm->ps;
    __asm
    {
      vmovss  xmm4, dword ptr [rbx+214h]
      vmovss  xmm0, cs:__real@3f800000
      vdivss  xmm5, xmm0, xmm1
      vmovss  xmm1, dword ptr [rbx+210h]
      vsubss  xmm0, xmm1, dword ptr [rax+30h]
      vmovss  xmm3, dword ptr [rax+34h]
      vmovaps [rsp+78h+var_28], xmm6
      vmovss  xmm6, dword ptr [rax+38h]
      vmulss  xmm2, xmm0, xmm5
      vmovaps [rsp+78h+var_38], xmm7
      vaddss  xmm7, xmm2, dword ptr [rsi]
      vmovaps [rsp+78h+var_48], xmm8
      vmovss  xmm8, dword ptr [rbx+218h]
      vmovss  dword ptr [rsi], xmm7
      vsubss  xmm0, xmm4, xmm3
      vmulss  xmm1, xmm0, xmm5
      vaddss  xmm2, xmm1, dword ptr [rsi+4]
      vmovss  dword ptr [rsi+4], xmm2
      vsubss  xmm0, xmm8, xmm6
      vmovaps xmm8, [rsp+78h+var_48]
      vmovaps xmm6, [rsp+78h+var_28]
      vmulss  xmm1, xmm0, xmm5
      vaddss  xmm2, xmm1, dword ptr [rsi+8]
      vmovss  dword ptr [rsi+8], xmm2
      vaddss  xmm0, xmm7, dword ptr [rax+3Ch]
      vmovaps xmm7, [rsp+78h+var_38]
      vmovss  dword ptr [rax+3Ch], xmm0
      vmovss  xmm1, dword ptr [rax+40h]
      vaddss  xmm2, xmm1, dword ptr [rsi+4]
      vmovss  dword ptr [rax+40h], xmm2
      vmovss  xmm0, dword ptr [rax+44h]
      vaddss  xmm1, xmm0, dword ptr [rsi+8]
      vmovss  dword ptr [rax+44h], xmm1
    }
  }
}

/*
==============
PM_Turret_UpdateFire
==============
*/
void PM_Turret_UpdateFire(pmove_t *pm, pml_t *pml, bool isUsingTurretViewarms)
{
  playerState_s *ps; 
  const entityState_t *TurretEntityState; 
  BgWeaponMap *weaponMap; 
  Weapon *Weapon; 
  bool inAltWeaponMode; 
  const Weapon *v10; 
  int v11; 
  bool v12; 
  int v13; 
  bool v14; 
  int v15; 
  char v16; 
  char v17; 
  int serverTime; 
  playerState_s *v19; 
  unsigned __int64 weaponState; 
  __int64 v21; 
  bool outWasPressed; 
  bool v23; 
  int fireTime; 
  int fireDelay; 
  int v26; 
  Weapon *r_weapon; 
  bool outIsPressed; 
  bool v29; 
  int isUsingRemoteTurret; 

  v29 = isUsingTurretViewarms;
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_turret.cpp", 189, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_turret.cpp", 189, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  LOBYTE(isUsingRemoteTurret) = 0;
  TurretEntityState = BG_Turret_GetTurretEntityState(pm, (bool *)&isUsingRemoteTurret);
  if ( !TurretEntityState )
    return;
  weaponMap = pm->weaponMap;
  if ( !weaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapons.h", 438, ASSERT_TYPE_ASSERT, "(weaponMap)", (const char *)&queryFormat, "weaponMap") )
    __debugbreak();
  Weapon = (Weapon *)BgWeaponMap::GetWeapon(weaponMap, TurretEntityState->weaponHandle);
  inAltWeaponMode = TurretEntityState->inAltWeaponMode;
  v10 = Weapon;
  r_weapon = Weapon;
  PM_Weapon_GetFireButtonPressedState(pm, Weapon, WEAPON_HAND_DEFAULT, &outWasPressed, &outIsPressed);
  v11 = 0;
  BG_GetFireTime(pm->weaponMap, ps, v10, inAltWeaponMode, 0, 0, &fireTime, &fireDelay);
  v12 = GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&ps->otherFlags, ACTIVE, 0x17u);
  v13 = ps->turretLastFireTime + fireTime;
  v23 = v12;
  v14 = GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x10u);
  v15 = TurretEntityState->lerp.u.anonymous.data[5];
  if ( (v15 & 2) != 0 || v14 )
    goto LABEL_17;
  if ( (v15 & 0x40) != 0 )
  {
    if ( !Com_GameMode_SupportsFeature(WEAPON_DROPPING_LADDER_CLIMB) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2122, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::TURRET_REMOTE_CONTROL ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::TURRET_REMOTE_CONTROL )") )
      __debugbreak();
LABEL_17:
    v16 = 0;
    goto LABEL_18;
  }
  v16 = 0;
  if ( BG_GetWeaponFireType(r_weapon, 0) != WEAPON_FIRETYPE_SINGLESHOT || !outWasPressed )
  {
    if ( !outIsPressed )
    {
LABEL_26:
      v17 = 0;
      goto LABEL_27;
    }
    serverTime = pm->cmd.serverTime;
    if ( v13 <= serverTime )
    {
      BG_AddPredictableEventToPlayerstate(EV_SV_FIRE_TURRET, TurretEntityState->number, serverTime, pm->weaponMap, ps);
      GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::SetFlagInternal(&ps->otherFlags, ACTIVE, 0x17u);
      v16 = 1;
      ps->turretLastFireTime = pm->cmd.serverTime;
    }
  }
LABEL_18:
  if ( !outIsPressed || pm->cmd.serverTime >= fireTime + ps->turretLastFireTime )
    goto LABEL_26;
  v17 = 1;
LABEL_27:
  if ( v23 && !v17 )
  {
    BG_AddPredictableEventToPlayerstate(EV_SV_FIRE_TURRET_END, TurretEntityState->number, pm->cmd.serverTime, pm->weaponMap, ps);
    GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::ClearFlagInternal(&ps->otherFlags, ACTIVE, 0x17u);
  }
  if ( v29 )
  {
    if ( (_BYTE)isUsingRemoteTurret && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_turret.cpp", 251, ASSERT_TYPE_ASSERT, "(!isUsingRemoteTurret)", (const char *)&queryFormat, "!isUsingRemoteTurret") )
      __debugbreak();
    if ( !pml && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_turret.cpp", 107, ASSERT_TYPE_ASSERT, "(pml)", (const char *)&queryFormat, "pml") )
      __debugbreak();
    v19 = pm->ps;
    if ( !v19 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_turret.cpp", 109, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    BG_GetFireTime(pm->weaponMap, v19, r_weapon, 0, 0, 0, &isUsingRemoteTurret, &v26);
    weaponState = v19->weapState[0].weaponState;
    if ( v19->weapState[0].weaponTime - pml->msec > 0 )
      v11 = v19->weapState[0].weaponTime - pml->msec;
    v19->weapState[0].weaponTime = v11;
    if ( (unsigned int)(weaponState - 1) <= 4 )
    {
      if ( v11 > 0 )
        return;
      goto LABEL_50;
    }
    if ( v16 )
    {
      v19->weapState[0].weaponState = 16;
      v19->weapState[0].weaponTime = isUsingRemoteTurret;
      PM_StartWeaponAnim(v19, WEAP_ATTACK, WEAPON_HAND_DEFAULT);
      return;
    }
    if ( pm->cmd.serverTime >= isUsingRemoteTurret + v19->turretLastFireTime )
    {
      if ( (unsigned int)weaponState > 0x3B || (v21 = 0xC01000000000001i64, !_bittest64(&v21, weaponState)) )
LABEL_50:
        PM_Weapon_Idle(pm, WEAPON_HAND_DEFAULT);
    }
  }
}


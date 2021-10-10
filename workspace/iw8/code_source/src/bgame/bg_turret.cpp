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

  if ( !ci && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_turret.cpp", 61, ASSERT_TYPE_ASSERT, "(ci)", (const char *)&queryFormat, "ci") )
    __debugbreak();
  AnglesSubtract(playerAngles, turretAngles, &v3);
  _XMM0 = 0i64;
  __asm { vroundss xmm4, xmm0, xmm2, 1 }
  ci->turretPlayerAngles.v[0] = (float)((float)(v3.v[0] * 0.0027777778) - *(float *)&_XMM4) * 360.0;
  *(double *)&_XMM0 = AngleNormalize360(v3.v[1]);
  ci->turretPlayerAngles.v[1] = *(float *)&_XMM0;
  ci->turretPlayerHeight = playerOrigin->v[2] - turretOrigin->v[2];
}

/*
==============
PM_TurretMove
==============
*/
void PM_TurretMove(pmove_t *pm, pml_t *pml)
{
  playerState_s *ps; 
  const entityState_t *TurretEntityState; 
  __int128 v6; 
  BgAntiLag *antiLag; 
  char v11; 
  double v12; 
  float v13; 
  float v14; 
  float v15; 
  float v16; 
  float v17; 
  const dvar_t *v18; 
  float v19; 
  float v20; 
  bool v21; 
  bool v22; 
  bool v23; 
  bool v24; 
  char v25; 
  char yawmove; 
  float v31; 
  float v35; 
  int contentMask; 
  playerState_s *v40; 
  float v41; 
  float v42; 
  __int128 v43; 
  float v44; 
  float v48; 
  float v49; 
  float v50; 
  bool isUsingRemoteTurret; 
  vec3_t forward; 
  vec3_t outOrigin; 
  float v1[4]; 
  vec3_t end; 
  vec3_t start; 
  BgAntiLagEntityInfo outInfo; 
  trace_t outResults; 

  if ( !pml && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_turret.cpp", 259, ASSERT_TYPE_ASSERT, "(pml)", (const char *)&queryFormat, "pml") )
    __debugbreak();
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_turret.cpp", 261, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_turret.cpp", 261, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  isUsingRemoteTurret = 0;
  TurretEntityState = BG_Turret_GetTurretEntityState(pm, &isUsingRemoteTurret);
  if ( TurretEntityState )
  {
    AngleVectors(&ps->viewangles, &forward, NULL, NULL);
    v6 = LODWORD(forward.v[0]);
    *(float *)&v6 = fsqrt((float)(*(float *)&v6 * *(float *)&v6) + (float)(forward.v[1] * forward.v[1]));
    _XMM2 = v6;
    __asm
    {
      vcmpless xmm0, xmm2, xmm13
      vblendvps xmm0, xmm2, xmm8, xmm0
    }
    forward.v[1] = forward.v[1] * (float)(1.0 / *(float *)&_XMM0);
    forward.v[2] = 0.0;
    forward.v[0] = forward.v[0] * (float)(1.0 / *(float *)&_XMM0);
    v1[0] = 0.0;
    v1[1] = 0.0;
    v1[2] = 0.0;
    if ( !VecNCompareCustomEpsilon(forward.v, v1, 0.001, 3) )
    {
      antiLag = (BgAntiLag *)pm->antiLag;
      v11 = 0;
      outInfo.boneInfo.boneList.m_usedSize = 0;
      outInfo.boneInfo.boneList.m_maxSize = 0;
      BgAntiLag::GetEntityInfoAtTime(antiLag, ps->clientNum, TurretEntityState->number, 1u, pm->cmd.serverTime, &outInfo);
      BgAntiLagEntity_GetOrigin(&outInfo, &outOrigin);
      pml->applyTurretVelocity = 1;
      v12 = MSG_UnpackUnsignedFloat(ps->turretOffset, 200.0, 6u);
      v13 = COERCE_FLOAT(LODWORD(v12) ^ _xmm) * forward.v[1];
      pml->turretTargetOrigin.v[0] = (float)(COERCE_FLOAT(LODWORD(v12) ^ _xmm) * forward.v[0]) + outOrigin.v[0];
      v14 = COERCE_FLOAT(LODWORD(v12) ^ _xmm) * forward.v[2];
      pml->turretTargetOrigin.v[1] = v13 + outOrigin.v[1];
      pml->turretTargetOrigin.v[2] = v14 + outOrigin.v[2];
      pml->turretTargetOrigin.v[2] = ps->origin.v[2];
      v15 = ps->origin.v[0];
      v16 = ps->origin.v[1];
      v17 = ps->origin.v[2];
      PM_UpdatePlayerCollision(pm, pml, 1, 1, 0, 1);
      v18 = DCONST_DVARVEC2_turretMaxHeighOffset;
      v19 = ps->origin.v[2] - outOrigin.v[2];
      if ( !DCONST_DVARVEC2_turretMaxHeighOffset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 727, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "turretMaxHeighOffset") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v18);
      v20 = v18->current.vector.v[1];
      if ( v19 < 0.0 )
      {
        v21 = v20 < v19;
        v22 = v20 == v19;
      }
      else
      {
        v21 = v19 < v18->current.value;
        v22 = v19 == v18->current.value;
      }
      v23 = !v21 && !v22;
      v24 = !pm->cmd.pitchmove && !pm->cmd.yawmove;
      v25 = 0;
      if ( pml->hadSlideContact )
      {
        yawmove = pm->cmd.yawmove;
        if ( yawmove )
        {
          if ( TURRET_MIN_WALL_NORMAL <= pml->slideFirstContactNormal.v[2] )
            goto LABEL_27;
          _XMM2 = LODWORD(pml->right.v[1]) ^ (unsigned __int128)(unsigned int)_xmm;
          _XMM0 = (unsigned int)yawmove;
          __asm
          {
            vpcmpgtd xmm1, xmm0, xmm1
            vblendvps xmm1, xmm2, xmm3, xmm1
          }
          v31 = *(float *)&_XMM1 * pml->slideFirstContactNormal.v[1];
          _XMM2 = LODWORD(pml->right.v[0]) ^ (unsigned __int128)(unsigned int)_xmm;
          __asm
          {
            vpcmpgtd xmm1, xmm0, xmm1
            vblendvps xmm1, xmm2, xmm4, xmm1
          }
          v35 = v31 + (float)(*(float *)&_XMM1 * pml->slideFirstContactNormal.v[0]);
          _XMM2 = LODWORD(pml->right.v[2]) ^ (unsigned __int128)(unsigned int)_xmm;
          __asm
          {
            vpcmpgtd xmm1, xmm0, xmm1
            vblendvps xmm1, xmm2, xmm5, xmm1
          }
          if ( (float)(v35 + (float)(*(float *)&_XMM1 * pml->slideFirstContactNormal.v[2])) >= 0.0 )
LABEL_27:
            v25 = 0;
          else
            v25 = 1;
        }
      }
      contentMask = pm->tracemask;
      v40 = pm->ps;
      *(_QWORD *)start.v = *(_QWORD *)ps->origin.v;
      v41 = ps->origin.v[2];
      end.v[0] = start.v[0];
      end.v[1] = start.v[1];
      start.v[2] = v41 + TURRET_GROUND_TRACE_HEIGHT_UP_OFFSET;
      end.v[2] = v41 - TURRET_GROUND_TRACE_HEIGHT;
      BgTrace::LegacyPlayerTrace(pm->m_trace, pm, &outResults, &start, &end, &bounds_origin, v40->clientNum, contentMask, 1);
      if ( outResults.fraction == 1.0 )
        v11 = 1;
      if ( v25 || v23 || v11 )
      {
        if ( !v24 )
          PM_AddEvent(pm, EV_TURRET_BLOCKED_HINT);
        v42 = pml->slideFirstContactPos.v[0];
        if ( v25 && (float)((float)((float)((float)(v42 - v15) * (float)(v42 - v15)) + (float)((float)(pml->slideFirstContactPos.v[1] - v16) * (float)(pml->slideFirstContactPos.v[1] - v16))) + (float)((float)(pml->slideFirstContactPos.v[2] - v17) * (float)(pml->slideFirstContactPos.v[2] - v17))) > TURRET_MIN_DIST_FOR_PREVIOUS_POSITION_SQ )
        {
          ps->origin.v[0] = v42;
          ps->origin.v[1] = pml->slideFirstContactPos.v[1];
          ps->origin.v[2] = pml->slideFirstContactPos.v[2];
        }
        else if ( !v11 )
        {
          ps->origin.v[0] = v15;
          ps->origin.v[1] = v16;
          ps->origin.v[2] = v17;
        }
      }
      if ( pm->cmd.yawmove )
      {
        v43 = LODWORD(outOrigin.v[0]);
        forward.v[0] = outOrigin.v[0] - ps->origin.v[0];
        v44 = outOrigin.v[1] - ps->origin.v[1];
        *(float *)&v43 = fsqrt((float)(forward.v[0] * forward.v[0]) + (float)(v44 * v44));
        _XMM2 = v43;
        __asm
        {
          vcmpless xmm0, xmm2, xmm13
          vblendvps xmm0, xmm2, xmm8, xmm0
        }
        forward.v[2] = 0.0;
        forward.v[0] = (float)(1.0 / *(float *)&_XMM0) * forward.v[0];
        forward.v[1] = (float)(1.0 / *(float *)&_XMM0) * v44;
        v48 = ps->viewangles.v[0];
        v49 = ps->viewangles.v[2];
        *(double *)&_XMM0 = vectoyaw((const vec2_t *)&forward);
        v50 = (float)(ps->viewangles.v[2] - ps->delta_angles.v[2]) * 0.0027777778;
        *(float *)&v43 = (float)(ps->viewangles.v[1] - ps->delta_angles.v[1]) * 0.0027777778;
        _XMM9 = 0i64;
        __asm { vroundss xmm2, xmm9, xmm1, 1 }
        ps->delta_angles.v[0] = v48 - (float)((float)((float)((float)(ps->viewangles.v[0] - ps->delta_angles.v[0]) * 0.0027777778) - *(float *)&_XMM2) * 360.0);
        __asm { vroundss xmm3, xmm9, xmm2, 1 }
        ps->delta_angles.v[1] = *(float *)&_XMM0 - (float)((float)(*(float *)&v43 - *(float *)&_XMM3) * 360.0);
        __asm { vroundss xmm2, xmm9, xmm3, 1 }
        ps->delta_angles.v[2] = v49 - (float)((float)(v50 - *(float *)&_XMM2) * 360.0);
        ps->viewangles.v[0] = v48;
        ps->viewangles.v[1] = *(float *)&_XMM0;
        ps->viewangles.v[2] = v49;
        Vec3AngleNormalize180(&ps->viewangles);
      }
      pml->applyTurretVelocity = 0;
      pml->hadSlideContact = 0;
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
  float frametime; 
  playerState_s *ps; 
  float v8; 
  float v9; 
  float v10; 
  float v11; 
  float v12; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_turret.cpp", 76, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  if ( !pml && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_turret.cpp", 77, ASSERT_TYPE_ASSERT, "(pml)", (const char *)&queryFormat, "pml") )
    __debugbreak();
  frametime = pml->frametime;
  if ( frametime >= 0.001 && pml->applyTurretVelocity )
  {
    ps = pm->ps;
    v8 = pml->turretTargetOrigin.v[1];
    v9 = ps->origin.v[1];
    v10 = ps->origin.v[2];
    v11 = (float)((float)(pml->turretTargetOrigin.v[0] - ps->origin.v[0]) * (float)(1.0 / frametime)) + inOutAppliedInstantaneousVelocity->v[0];
    v12 = pml->turretTargetOrigin.v[2];
    inOutAppliedInstantaneousVelocity->v[0] = v11;
    inOutAppliedInstantaneousVelocity->v[1] = (float)((float)(v8 - v9) * (float)(1.0 / frametime)) + inOutAppliedInstantaneousVelocity->v[1];
    inOutAppliedInstantaneousVelocity->v[2] = (float)((float)(v12 - v10) * (float)(1.0 / frametime)) + inOutAppliedInstantaneousVelocity->v[2];
    ps->velocity.v[0] = v11 + ps->velocity.v[0];
    ps->velocity.v[1] = ps->velocity.v[1] + inOutAppliedInstantaneousVelocity->v[1];
    ps->velocity.v[2] = ps->velocity.v[2] + inOutAppliedInstantaneousVelocity->v[2];
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


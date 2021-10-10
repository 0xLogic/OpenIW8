/*
==============
Leap_LeapUpdate
==============
*/

void __fastcall Leap_LeapUpdate(pmove_t *pm, pml_t *pml)
{
  ?Leap_LeapUpdate@@YAXPEAVpmove_t@@PEAUpml_t@@@Z(pm, pml);
}

/*
==============
Leap_IsSprintLeap
==============
*/

bool __fastcall Leap_IsSprintLeap(const pmove_t *pm)
{
  return ?Leap_IsSprintLeap@@YA_NPEBVpmove_t@@@Z(pm);
}

/*
==============
Leap_LeapingOverLowerTerrain
==============
*/

bool __fastcall Leap_LeapingOverLowerTerrain(const pmove_t *pm, Physics_WorldId worldId, const vec3_t *playerForward)
{
  return ?Leap_LeapingOverLowerTerrain@@YA_NPEBVpmove_t@@W4Physics_WorldId@@AEBTvec3_t@@@Z(pm, worldId, playerForward);
}

/*
==============
Leap_CheckEnoughDistToLeap
==============
*/

bool __fastcall Leap_CheckEnoughDistToLeap(pmove_t *pm, pml_t *pml)
{
  return ?Leap_CheckEnoughDistToLeap@@YA_NPEAVpmove_t@@PEAUpml_t@@@Z(pm, pml);
}

/*
==============
Leap_End
==============
*/

void __fastcall Leap_End(const pmove_t *pm)
{
  ?Leap_End@@YAXPEBVpmove_t@@@Z(pm);
}

/*
==============
Leap_SetSettingsMode
==============
*/

void __fastcall Leap_SetSettingsMode(playerState_s *ps, int mode)
{
  ?Leap_SetSettingsMode@@YAXPEAUplayerState_s@@H@Z(ps, mode);
}

/*
==============
Leap_ShouldSprintLeap
==============
*/

bool __fastcall Leap_ShouldSprintLeap(const pmove_t *pm)
{
  return ?Leap_ShouldSprintLeap@@YA_NPEBVpmove_t@@@Z(pm);
}

/*
==============
Leap_CheckEnoughDistToLeap
==============
*/
bool Leap_CheckEnoughDistToLeap(pmove_t *pm, pml_t *pml)
{
  const dvar_t *v2; 
  float value; 
  playerState_s *ps; 
  float v7; 
  float v8; 
  __int128 v9; 
  BgTrace *m_trace; 
  __int128 v11; 
  float v15; 
  float v16; 
  int passEntityNum; 
  const Bounds *bounds; 
  vec3_t start; 
  vec3_t end; 
  trace_t results; 

  v2 = DCONST_DVARFLT_sprintleap_check_dist;
  if ( !DCONST_DVARFLT_sprintleap_check_dist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sprintleap_check_dist") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  value = v2->current.value;
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_leap.cpp", 123, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_leap.cpp", 125, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v7 = pml->forward.v[1];
  v8 = pml->forward.v[2];
  v9 = LODWORD(pml->forward.v[0]);
  m_trace = pm->m_trace;
  v11 = v9;
  *(float *)&v11 = fsqrt((float)((float)(*(float *)&v9 * *(float *)&v9) + (float)(v7 * v7)) + (float)(v8 * v8));
  _XMM3 = v11;
  __asm
  {
    vcmpless xmm0, xmm3, cs:__real@80000000
    vblendvps xmm0, xmm3, xmm7, xmm0
  }
  v15 = *(float *)&v9 * (float)(1.0 / *(float *)&_XMM0);
  start.v[0] = v15 + ps->origin.v[0];
  *(float *)&_XMM3 = v7 * (float)(1.0 / *(float *)&_XMM0);
  v16 = v8 * (float)(1.0 / *(float *)&_XMM0);
  start.v[1] = *(float *)&_XMM3 + ps->origin.v[1];
  start.v[2] = v16 + ps->origin.v[2];
  end.v[0] = (float)(v15 * value) + ps->origin.v[0];
  end.v[1] = (float)(*(float *)&_XMM3 * value) + ps->origin.v[1];
  *(float *)&_XMM3 = ps->origin.v[2];
  start.v[2] = start.v[2] + 2.0;
  end.v[2] = (float)((float)(v16 * value) + *(float *)&_XMM3) + 2.0;
  passEntityNum = ps->clientNum;
  bounds = BG_Suit_GetBounds(ps->suitIndex, PM_EFF_STANCE_DEFAULT);
  BgTrace::LegacyTrace(m_trace, pm, &results, &start, &end, bounds, passEntityNum, 33619985);
  return results.fraction == 1.0;
}

/*
==============
Leap_End
==============
*/
void Leap_End(const pmove_t *pm)
{
  playerState_s *ps; 
  BgWeaponMap *weaponMap; 
  int serverTime; 
  unsigned int v4; 

  ps = pm->ps;
  ps->pm_flags.m_flags[0] &= ~0x80000000;
  if ( (unsigned int)(ps->leapState.state - 2) <= 1 )
  {
    weaponMap = pm->weaponMap;
    serverTime = pm->cmd.serverTime;
    v4 = PM_GroundSurfaceType(pm);
    BG_AddPredictableEventToPlayerstate(EV_LEAP_LAND, v4, serverTime, weaponMap, ps);
  }
}

/*
==============
Leap_IsSprintLeap
==============
*/
bool Leap_IsSprintLeap(const pmove_t *pm)
{
  playerState_s *ps; 
  const dvar_t *v3; 
  unsigned __int64 buttons; 
  int weaponState; 
  const Weapon *CurrentWeaponForPlayer; 
  bool result; 

  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_leap.cpp", 65, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v3 = DCONST_DVARBOOL_sprintLeap_enabled;
  if ( !DCONST_DVARBOOL_sprintLeap_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sprintLeap_enabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  result = 0;
  if ( v3->current.enabled && GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x1Fu) && ps->leapState.state != 3 && !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&pm->ps->pm_flags, ACTIVE, 9u) && !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&pm->ps->pm_flags, ACTIVE, 0x15u) && !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&pm->ps->pm_flags, ACTIVE, 0x1Eu) )
  {
    buttons = pm->cmd.buttons;
    if ( (buttons & 0x10) == 0 && (buttons & 4) == 0 && (buttons & 1) == 0 && (buttons & 0x20) == 0 && (buttons & 0x1000) == 0 && (buttons & 0x2000) == 0 )
    {
      weaponState = pm->ps->weapState[0].weaponState;
      if ( weaponState == 25 || weaponState <= 21 || weaponState >= 33 )
      {
        CurrentWeaponForPlayer = BG_GetCurrentWeaponForPlayer(pm->weaponMap, ps);
        if ( !BG_IsRiotShield(CurrentWeaponForPlayer, 0) )
          return 1;
      }
    }
  }
  return result;
}

/*
==============
Leap_LeapUpdate
==============
*/
void Leap_LeapUpdate(pmove_t *pm, pml_t *pml)
{
  playerState_s *ps; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_leap.cpp", 205, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_leap.cpp", 207, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x1Fu) )
    ps->leapState.state = 0;
}

/*
==============
Leap_LeapingOverLowerTerrain
==============
*/
char Leap_LeapingOverLowerTerrain(const pmove_t *pm, Physics_WorldId worldId, const vec3_t *playerForward)
{
  const dvar_t *v3; 
  float value; 
  const dvar_t *v8; 
  float v9; 
  const dvar_t *v10; 
  playerState_s *ps; 
  float v12; 
  float v13; 
  __int128 v14; 
  float v15; 
  __int128 v16; 
  float v19; 
  float v21; 
  float v22; 
  float v23; 
  __int128 v24; 
  float v25; 
  float v26; 
  float v27; 
  float v28; 
  BgTrace *m_trace; 
  int passEntityNum; 
  const Bounds *bounds; 
  __int128 v32; 
  vec3_t start; 
  vec3_t end; 
  trace_t results; 

  v3 = DCONST_DVARFLT_sprintLeap_traceForwardIncrament;
  if ( !DCONST_DVARFLT_sprintLeap_traceForwardIncrament && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sprintLeap_traceForwardIncrament") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  value = v3->current.value;
  v8 = DCONST_DVARFLT_sprintLeap_traceForwardMax;
  if ( !DCONST_DVARFLT_sprintLeap_traceForwardMax && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sprintLeap_traceForwardMax") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v8);
  v9 = v8->current.value;
  v10 = DCONST_DVARFLT_sprintLeap_groundTraceDist;
  if ( !DCONST_DVARFLT_sprintLeap_groundTraceDist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sprintLeap_groundTraceDist") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v10);
  ps = pm->ps;
  v12 = v10->current.value;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_leap.cpp", 164, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v13 = playerForward->v[1];
  v14 = LODWORD(playerForward->v[0]);
  v15 = playerForward->v[2];
  v16 = v14;
  *(float *)&v16 = fsqrt((float)((float)(*(float *)&v14 * *(float *)&v14) + (float)(v13 * v13)) + (float)(v15 * v15));
  _XMM3 = v16;
  __asm { vcmpless xmm0, xmm3, cs:__real@80000000 }
  v19 = ps->origin.v[0];
  __asm { vblendvps xmm0, xmm3, xmm14, xmm0 }
  start.v[0] = v19;
  v21 = ps->origin.v[1];
  v22 = v13 * (float)(1.0 / *(float *)&_XMM0);
  v23 = *(float *)&v14 * (float)(1.0 / *(float *)&_XMM0);
  v24 = 0i64;
  start.v[1] = v21;
  v25 = ps->origin.v[2] + 1.0;
  if ( v9 <= 0.0 )
    return 0;
  v26 = v23 * value;
  v27 = v22 * value;
  v28 = (float)(v15 * (float)(1.0 / *(float *)&_XMM0)) * value;
  while ( 1 )
  {
    m_trace = pm->m_trace;
    start.v[0] = v19 + v26;
    start.v[1] = v21 + v27;
    end.v[0] = v19 + v26;
    end.v[1] = v21 + v27;
    start.v[2] = (float)(v28 + v25) + 2.0;
    end.v[2] = (float)(v28 + v25) - v12;
    passEntityNum = ps->clientNum;
    bounds = BG_Suit_GetBounds(ps->suitIndex, PM_EFF_STANCE_DEFAULT);
    BgTrace::LegacyTraceHandler(m_trace, worldId, &results, &start, &end, bounds, passEntityNum, 33619985, ps);
    if ( results.fraction == 1.0 )
      break;
    v32 = v24;
    *(float *)&v32 = *(float *)&v24 + value;
    v24 = v32;
    if ( *(float *)&v32 >= v9 )
      return 0;
    v25 = start.v[2];
    v21 = start.v[1];
    v19 = start.v[0];
  }
  return 1;
}

/*
==============
Leap_SetSettingsMode
==============
*/
void Leap_SetSettingsMode(playerState_s *ps, int mode)
{
  if ( mode >= 15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_leap.cpp", 28, ASSERT_TYPE_ASSERT, "(mode < ((1 << 4) - 1))", (const char *)&queryFormat, "mode < ((1 << LEAP_MODE_BITS) - 1)") )
    __debugbreak();
}

/*
==============
Leap_ShouldSprintLeap
==============
*/
bool Leap_ShouldSprintLeap(const pmove_t *pm)
{
  playerState_s *ps; 
  const dvar_t *v3; 

  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_leap.cpp", 35, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  v3 = DCONST_DVARBOOL_sprintLeap_enabled;
  if ( !DCONST_DVARBOOL_sprintLeap_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sprintLeap_enabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  return v3->current.enabled && (GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x14u) || PM_HasIntentToRestoreSprint(pm)) && !GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x1Fu);
}


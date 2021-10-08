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
  BgTrace *m_trace; 
  int passEntityNum; 
  const Bounds *bounds; 
  char v43; 
  bool result; 
  vec3_t start; 
  vec3_t end; 
  trace_t results; 
  char v52; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
    vmovaps xmmword ptr [rax-38h], xmm8
  }
  _RBX = DCONST_DVARFLT_sprintleap_check_dist;
  _RDI = pml;
  if ( !DCONST_DVARFLT_sprintleap_check_dist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sprintleap_check_dist") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vmovss  xmm8, dword ptr [rbx+28h] }
  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_leap.cpp", 123, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  _RBP = pm->ps;
  if ( !_RBP && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_leap.cpp", 125, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  __asm
  {
    vmovss  xmm6, dword ptr [rdi+4]
    vmovss  xmm5, dword ptr [rdi+8]
    vmovss  xmm4, dword ptr [rdi]
    vmovss  xmm7, cs:__real@3f800000
  }
  m_trace = pm->m_trace;
  __asm
  {
    vmulss  xmm0, xmm6, xmm6
    vmulss  xmm1, xmm4, xmm4
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm5, xmm5
    vaddss  xmm2, xmm2, xmm1
    vsqrtss xmm3, xmm2, xmm2
    vcmpless xmm0, xmm3, cs:__real@80000000
    vblendvps xmm0, xmm3, xmm7, xmm0
    vdivss  xmm1, xmm7, xmm0
    vmulss  xmm2, xmm4, xmm1
    vaddss  xmm0, xmm2, dword ptr [rbp+30h]
    vmovss  dword ptr [rsp+108h+start], xmm0
    vmulss  xmm3, xmm6, xmm1
    vmulss  xmm6, xmm5, xmm1
    vaddss  xmm1, xmm3, dword ptr [rbp+34h]
    vmovss  dword ptr [rsp+108h+start+4], xmm1
    vaddss  xmm5, xmm6, dword ptr [rbp+38h]
    vmovss  dword ptr [rsp+108h+start+8], xmm5
    vmulss  xmm0, xmm2, xmm8
    vaddss  xmm1, xmm0, dword ptr [rbp+30h]
    vmovss  dword ptr [rsp+108h+end], xmm1
    vmulss  xmm2, xmm3, xmm8
    vaddss  xmm0, xmm2, dword ptr [rbp+34h]
    vmovss  dword ptr [rsp+108h+end+4], xmm0
    vmovss  xmm3, dword ptr [rbp+38h]
    vaddss  xmm0, xmm5, cs:__real@40000000
    vmovss  dword ptr [rsp+108h+start+8], xmm0
    vmulss  xmm1, xmm6, xmm8
    vaddss  xmm2, xmm1, xmm3
    vaddss  xmm0, xmm2, cs:__real@40000000
    vmovss  dword ptr [rsp+108h+end+8], xmm0
  }
  passEntityNum = _RBP->clientNum;
  bounds = BG_Suit_GetBounds(_RBP->suitIndex, PM_EFF_STANCE_DEFAULT);
  BgTrace::LegacyTrace(m_trace, pm, &results, &start, &end, bounds, passEntityNum, 33619985);
  __asm
  {
    vmovss  xmm0, [rsp+108h+results.fraction]
    vucomiss xmm0, xmm7
  }
  if ( v43 )
    result = 1;
  else
    result = 0;
  _R11 = &v52;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
  }
  return result;
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
bool Leap_LeapingOverLowerTerrain(const pmove_t *pm, Physics_WorldId worldId, const vec3_t *playerForward)
{
  playerState_s *ps; 
  bool v23; 
  bool v24; 
  BgTrace *m_trace; 
  int passEntityNum; 
  const Bounds *bounds; 
  char v58; 
  bool result; 
  vec3_t start; 
  vec3_t end; 
  trace_t results; 
  char v77; 
  void *retaddr; 

  _R11 = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [r11-38h], xmm6
    vmovaps xmmword ptr [r11-48h], xmm7
    vmovaps xmmword ptr [r11-58h], xmm8
    vmovaps xmmword ptr [r11-68h], xmm9
    vmovaps xmmword ptr [r11-78h], xmm10
    vmovaps xmmword ptr [r11-88h], xmm11
    vmovaps xmmword ptr [r11-0B8h], xmm14
  }
  _RBX = DCONST_DVARFLT_sprintLeap_traceForwardIncrament;
  _RDI = playerForward;
  if ( !DCONST_DVARFLT_sprintLeap_traceForwardIncrament && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sprintLeap_traceForwardIncrament") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vmovss  xmm7, dword ptr [rbx+28h] }
  _RBX = DCONST_DVARFLT_sprintLeap_traceForwardMax;
  if ( !DCONST_DVARFLT_sprintLeap_traceForwardMax && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sprintLeap_traceForwardMax") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vmovss  xmm8, dword ptr [rbx+28h] }
  _RBX = DCONST_DVARFLT_sprintLeap_groundTraceDist;
  if ( !DCONST_DVARFLT_sprintLeap_groundTraceDist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sprintLeap_groundTraceDist") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  ps = pm->ps;
  __asm { vmovss  xmm9, dword ptr [rbx+28h] }
  v23 = ps == NULL;
  if ( !ps )
  {
    v24 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_leap.cpp", 164, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps");
    v23 = !v24;
    if ( v24 )
      __debugbreak();
  }
  __asm
  {
    vmovss  xmm6, dword ptr [rdi+4]
    vmovss  xmm4, dword ptr [rdi]
    vmovss  xmm14, cs:__real@3f800000
    vmovss  xmm5, dword ptr [rdi+8]
    vmulss  xmm0, xmm6, xmm6
    vmulss  xmm1, xmm4, xmm4
    vaddss  xmm2, xmm1, xmm0
    vmulss  xmm1, xmm5, xmm5
    vaddss  xmm2, xmm2, xmm1
    vsqrtss xmm3, xmm2, xmm2
    vcmpless xmm0, xmm3, cs:__real@80000000
    vmovss  xmm2, dword ptr [rsi+30h]
    vblendvps xmm0, xmm3, xmm14, xmm0
    vdivss  xmm1, xmm14, xmm0
    vmovss  dword ptr [rsp+198h+start], xmm2
    vmovss  xmm3, dword ptr [rsi+34h]
    vmulss  xmm11, xmm6, xmm1
    vmulss  xmm10, xmm4, xmm1
    vxorps  xmm6, xmm6, xmm6
    vcomiss xmm8, xmm6
    vmovss  dword ptr [rsp+198h+start+4], xmm3
    vmovss  xmm0, dword ptr [rsi+38h]
    vmovaps [rsp+198h+var_98], xmm12
    vmovaps [rsp+198h+var_A8], xmm13
    vmulss  xmm1, xmm5, xmm1
    vaddss  xmm4, xmm0, xmm14
  }
  if ( v23 )
  {
LABEL_19:
    result = 0;
  }
  else
  {
    __asm
    {
      vmovss  xmm13, cs:__real@40000000
      vmulss  xmm10, xmm10, xmm7
      vmulss  xmm11, xmm11, xmm7
      vmulss  xmm12, xmm1, xmm7
    }
    while ( 1 )
    {
      m_trace = pm->m_trace;
      __asm
      {
        vaddss  xmm1, xmm2, xmm10
        vaddss  xmm0, xmm3, xmm11
        vmovss  dword ptr [rsp+198h+start], xmm1
        vmovss  dword ptr [rsp+198h+start+4], xmm0
        vmovss  dword ptr [rsp+198h+end], xmm1
        vmovss  dword ptr [rsp+198h+end+4], xmm0
        vaddss  xmm2, xmm12, xmm4
        vaddss  xmm0, xmm2, xmm13
        vmovss  dword ptr [rsp+198h+start+8], xmm0
        vsubss  xmm1, xmm2, xmm9
        vmovss  dword ptr [rsp+198h+end+8], xmm1
      }
      passEntityNum = ps->clientNum;
      bounds = BG_Suit_GetBounds(ps->suitIndex, PM_EFF_STANCE_DEFAULT);
      BgTrace::LegacyTraceHandler(m_trace, worldId, &results, &start, &end, bounds, passEntityNum, 33619985, ps);
      __asm
      {
        vmovss  xmm0, [rsp+198h+results.fraction]
        vucomiss xmm0, xmm14
      }
      if ( v23 )
        break;
      __asm
      {
        vaddss  xmm6, xmm6, xmm7
        vcomiss xmm6, xmm8
      }
      if ( !v58 )
        goto LABEL_19;
      __asm
      {
        vmovss  xmm4, dword ptr [rsp+198h+start+8]
        vmovss  xmm3, dword ptr [rsp+198h+start+4]
        vmovss  xmm2, dword ptr [rsp+198h+start]
      }
    }
    result = 1;
  }
  __asm
  {
    vmovaps xmm13, [rsp+198h+var_A8]
    vmovaps xmm12, [rsp+198h+var_98]
  }
  _R11 = &v77;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
    vmovaps xmm14, xmmword ptr [r11-90h]
  }
  return result;
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


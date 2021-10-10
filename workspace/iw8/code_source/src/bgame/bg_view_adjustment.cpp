/*
==============
PM_AllowCameraInputForAxis
==============
*/

bool __fastcall PM_AllowCameraInputForAxis(playerState_s *ps, int axis, float delta)
{
  return ?PM_AllowCameraInputForAxis@@YA_NPEAUplayerState_s@@HM@Z(ps, axis, delta);
}

/*
==============
PM_StartViewAngleTransition
==============
*/

void __fastcall PM_StartViewAngleTransition(pmove_t *pm, int duration, EViewAngleEaseMode easeInMode, EViewAngleEaseMode eastOutMode, const vec2_t *goalAngles, int flags)
{
  ?PM_StartViewAngleTransition@@YAXPEAVpmove_t@@HW4EViewAngleEaseMode@@1AEBTvec2_t@@H@Z(pm, duration, easeInMode, eastOutMode, goalAngles, flags);
}

/*
==============
PM_UpdateViewAnglesOverride
==============
*/

void __fastcall PM_UpdateViewAnglesOverride(pmove_t *pm, usercmd_s *cmd)
{
  ?PM_UpdateViewAnglesOverride@@YAXPEAVpmove_t@@PEAUusercmd_s@@@Z(pm, cmd);
}

/*
==============
PM_EndViewAngleTransition
==============
*/

void __fastcall PM_EndViewAngleTransition(playerState_s *ps)
{
  ?PM_EndViewAngleTransition@@YAXPEAUplayerState_s@@@Z(ps);
}

/*
==============
PM_GetViewAngleTransitionDuration
==============
*/

int __fastcall PM_GetViewAngleTransitionDuration(const playerViewAngleState_s *p_viewAngleState)
{
  return ?PM_GetViewAngleTransitionDuration@@YAHPEBUplayerViewAngleState_s@@@Z(p_viewAngleState);
}

/*
==============
GetViewAngleForTime
==============
*/
float GetViewAngleForTime(playerViewAngleState_s *p_viewAngleState, int time, int axis)
{
  __int64 v3; 
  float v6; 
  double v7; 
  EViewAngleEaseMode easeMode; 
  float v9; 
  float v10; 
  __int32 v11; 
  __int32 v12; 
  __int32 v13; 
  float *v14; 
  float v15; 
  float v17; 
  float v18; 
  float v19; 
  float v20; 
  float v21; 
  float v22; 
  float v23; 
  float v24; 
  float v25; 
  __int64 v26; 
  __int64 v27; 
  int v28; 

  v3 = axis;
  if ( (unsigned int)axis > 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_view_adjustment.cpp", 119, ASSERT_TYPE_ASSERT, "(( axis == PITCH ) || ( axis == YAW ))", (const char *)&queryFormat, "( axis == PITCH ) || ( axis == YAW )") )
    __debugbreak();
  if ( (unsigned int)v3 >= 2 )
  {
    v28 = 2;
    LODWORD(v26) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 21, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v26, v28) )
      __debugbreak();
  }
  v6 = p_viewAngleState->goalAngles.v[v3];
  if ( (unsigned int)v3 >= 2 )
  {
    LODWORD(v27) = 2;
    LODWORD(v26) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 21, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v26, v27) )
      __debugbreak();
  }
  v7 = AngleDelta(p_viewAngleState->startAngles.v[v3], v6);
  easeMode = p_viewAngleState->easeMode;
  LODWORD(v9) = LODWORD(v7) ^ _xmm;
  v10 = (float)time;
  if ( easeMode == VAEM_LINEAR )
  {
LABEL_24:
    v25 = (float)(v10 * v9) / (float)PM_GetViewAngleTransitionDuration(p_viewAngleState);
    return v25 + *vec2_t::operator[](&p_viewAngleState->startAngles, v3);
  }
  v11 = easeMode - 1;
  if ( v11 )
  {
    v12 = v11 - 1;
    if ( v12 )
    {
      v13 = v12 - 1;
      if ( !v13 )
      {
        v17 = v10 / (float)PM_GetViewAngleTransitionDuration(p_viewAngleState);
        return (float)((float)(v17 * v9) * v17) + *vec2_t::operator[](&p_viewAngleState->startAngles, v3);
      }
      if ( v13 == 1 )
      {
        v14 = vec2_t::operator[](&p_viewAngleState->startAngles, v3);
        v15 = (float)(v10 * 3.1415927) / (float)PM_GetViewAngleTransitionDuration(p_viewAngleState);
        return *v14 - (float)((float)((float)(cosf_0(v15) - 1.0) * v9) * 0.5);
      }
      goto LABEL_24;
    }
    v18 = v9 * 0.5;
    v19 = v10 / (float)(PM_GetViewAngleTransitionDuration(p_viewAngleState) / 2);
    v20 = *vec2_t::operator[](&p_viewAngleState->startAngles, v3);
    if ( v19 >= 1.0 )
      return v20 - (float)((float)((float)((float)((float)(v19 + -1.0) - 2.0) * (float)(v19 + -1.0)) - 1.0) * v18);
    else
      return (float)((float)(v18 * v19) * v19) + v20;
  }
  else
  {
    v21 = v9 * 0.5;
    v22 = (float)time / (float)(PM_GetViewAngleTransitionDuration(p_viewAngleState) / 2);
    v23 = *vec2_t::operator[](&p_viewAngleState->startAngles, v3);
    if ( v22 >= 1.0 )
      v24 = (float)((float)((float)((float)(v22 + -2.0) * (float)(v22 + -2.0)) * (float)(v22 + -2.0)) + 2.0) * v21;
    else
      v24 = (float)((float)(v21 * v22) * v22) * v22;
    return v24 + v23;
  }
}

/*
==============
GetViewAngleFromCurrentAngle
==============
*/
float GetViewAngleFromCurrentAngle(playerViewAngleState_s *p_viewAngleState, float currentAngle, int time, int axis)
{
  __int64 v5; 
  double v8; 
  float v9; 
  EViewAngleEaseMode easeMode; 
  float v11; 
  int ViewAngleTransitionDuration; 
  __int32 v13; 
  __int32 v14; 
  __int32 v15; 
  float v17; 
  float v18; 
  float v19; 
  float v20; 
  float v21; 
  float v22; 
  __int64 v23; 

  v5 = axis;
  if ( (unsigned int)axis > 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_view_adjustment.cpp", 61, ASSERT_TYPE_ASSERT, "(( axis == PITCH ) || ( axis == YAW ))", (const char *)&queryFormat, "( axis == PITCH ) || ( axis == YAW )") )
    __debugbreak();
  if ( (unsigned int)v5 >= 2 )
  {
    LODWORD(v23) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vec_types.h", 21, ASSERT_TYPE_SANITY, "(unsigned)( idx ) < (unsigned)( ( sizeof( *array_counter( v ) ) + 0 ) )", "idx doesn't index ARRAY_COUNT( v )\n\t%i not in [0, %i)", v23, 2) )
      __debugbreak();
  }
  v8 = AngleDelta(currentAngle, p_viewAngleState->goalAngles.v[v5]);
  LODWORD(v9) = LODWORD(v8) ^ _xmm;
  easeMode = p_viewAngleState->easeMode;
  v11 = (float)time;
  ViewAngleTransitionDuration = PM_GetViewAngleTransitionDuration(p_viewAngleState);
  if ( easeMode == VAEM_LINEAR )
    goto LABEL_21;
  v13 = easeMode - 1;
  if ( v13 )
  {
    v14 = v13 - 1;
    if ( !v14 )
    {
      v17 = v9 * 0.5;
      v18 = v11 / (float)(ViewAngleTransitionDuration / 2);
      if ( v18 >= 1.0 )
        return currentAngle - (float)((float)((float)((float)((float)(v18 + -1.0) - 2.0) * (float)(v18 + -1.0)) - 1.0) * v17);
      v19 = (float)(v17 * v18) * v18;
      return v19 + currentAngle;
    }
    v15 = v14 - 1;
    if ( !v15 )
      return (float)((float)((float)(v11 / (float)ViewAngleTransitionDuration) * v9) * (float)(v11 / (float)ViewAngleTransitionDuration)) + *vec2_t::operator[](&p_viewAngleState->startAngles, v5);
    if ( v15 == 1 )
      return currentAngle - (float)((float)((float)(cosf_0((float)(v11 * 3.1415927) / (float)ViewAngleTransitionDuration) - 1.0) * v9) * 0.5);
LABEL_21:
    v19 = (float)(v11 * v9) / (float)ViewAngleTransitionDuration;
    return v19 + currentAngle;
  }
  v20 = v9 * 0.5;
  v21 = v11 / (float)(ViewAngleTransitionDuration / 2);
  if ( v21 >= 1.0 )
    v22 = (float)((float)((float)((float)(v21 + -2.0) * (float)(v21 + -2.0)) * (float)(v21 + -2.0)) + 2.0) * v20;
  else
    v22 = (float)((float)(v20 * v21) * v21) * v21;
  return v22 + currentAngle;
}

/*
==============
PM_AllowCameraInputForAxis
==============
*/
char PM_AllowCameraInputForAxis(playerState_s *ps, int axis, float delta)
{
  unsigned int flags; 
  double v6; 
  float v7; 
  float v8; 

  if ( (unsigned int)axis > 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_view_adjustment.cpp", 305, ASSERT_TYPE_ASSERT, "(( axis == PITCH ) || ( axis == YAW ))", (const char *)&queryFormat, "( axis == PITCH ) || ( axis == YAW )") )
    __debugbreak();
  if ( !BG_SkydiveAllowCameraInputForAxis(ps, axis, delta) )
    return 0;
  if ( !GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&ps->otherFlags, ACTIVE, 0x10u) )
    return 1;
  flags = ps->viewAngleState.flags;
  if ( (flags & 4) != 0 )
    return 1;
  if ( (flags & 8) != 0 )
  {
    LODWORD(v6) = 0;
    if ( axis )
    {
      if ( axis != 1 || (flags & 2) == 0 )
        return (float)(*(float *)&v6 * delta) >= 0.0;
      v7 = ps->viewAngleState.startAngles.v[1];
      v8 = ps->viewAngleState.goalAngles.v[1];
    }
    else
    {
      if ( (flags & 1) == 0 )
        return (float)(*(float *)&v6 * delta) >= 0.0;
      v7 = ps->viewAngleState.startAngles.v[0];
      v8 = ps->viewAngleState.goalAngles.v[0];
    }
    v6 = AngleDelta(v8, v7);
    return (float)(*(float *)&v6 * delta) >= 0.0;
  }
  if ( !axis )
    return (flags & 1) == 0;
  if ( axis == 1 )
  {
    flags >>= 1;
    return (flags & 1) == 0;
  }
  return 1;
}

/*
==============
PM_CalcViewAnglesOverride
==============
*/
void PM_CalcViewAnglesOverride(playerState_s *ps, usercmd_s *cmd, playerViewAngleState_s *viewAngleState, int time)
{
  int flags; 
  float ViewAngleForTime; 
  double v9; 
  float v14; 
  double v15; 

  flags = viewAngleState->flags;
  if ( (viewAngleState->flags & 1) != 0 )
  {
    ViewAngleForTime = GetViewAngleForTime(viewAngleState, time, 0);
    v9 = AngleDelta(ViewAngleForTime, ps->viewangles.v[0]);
    _XMM6 = 0i64;
    __asm
    {
      vroundss xmm2, xmm6, xmm1, 1
      vroundss xmm3, xmm6, xmm2, 1
    }
    ps->delta_angles.v[0] = (float)((float)(_mm_cvtepi32_ps((__m128i)(unsigned __int16)(int)*(float *)&_XMM2).m128_f32[0] * 0.000015258789) - *(float *)&_XMM3) * 360.0;
    __asm { vroundss xmm3, xmm6, xmm0, 1 }
    ps->viewangles.v[0] = (float)((float)((float)(*(float *)&v9 + ps->viewangles.v[0]) * 0.0027777778) - *(float *)&_XMM3) * 360.0;
    flags = viewAngleState->flags;
  }
  if ( (flags & 2) != 0 )
  {
    v14 = GetViewAngleForTime(viewAngleState, time, 1);
    v15 = AngleDelta(v14, ps->viewangles.v[1]);
    _XMM6 = 0i64;
    __asm
    {
      vroundss xmm2, xmm6, xmm1, 1
      vroundss xmm3, xmm6, xmm2, 1
    }
    ps->delta_angles.v[1] = (float)((float)(_mm_cvtepi32_ps((__m128i)(unsigned __int16)(int)*(float *)&_XMM2).m128_f32[0] * 0.000015258789) - *(float *)&_XMM3) * 360.0;
    __asm { vroundss xmm2, xmm6, xmm1, 1 }
    ps->viewangles.v[1] = (float)((float)((float)(*(float *)&v15 + ps->viewangles.v[1]) * 0.0027777778) - *(float *)&_XMM2) * 360.0;
  }
}

/*
==============
PM_CalcViewAnglesOverrideActive
==============
*/
void PM_CalcViewAnglesOverrideActive(playerState_s *ps, usercmd_s *cmd, playerViewAngleState_s *viewAngleState, int time)
{
  int flags; 
  float ViewAngleFromCurrentAngle; 
  double v9; 
  float v14; 
  double v15; 

  flags = viewAngleState->flags;
  if ( (viewAngleState->flags & 1) != 0 )
  {
    ViewAngleFromCurrentAngle = GetViewAngleFromCurrentAngle(viewAngleState, ps->viewangles.v[0], time, 0);
    v9 = AngleDelta(ViewAngleFromCurrentAngle, ps->viewangles.v[0]);
    _XMM6 = 0i64;
    __asm
    {
      vroundss xmm2, xmm6, xmm1, 1
      vroundss xmm3, xmm6, xmm2, 1
    }
    ps->delta_angles.v[0] = (float)((float)(_mm_cvtepi32_ps((__m128i)(unsigned __int16)(int)*(float *)&_XMM2).m128_f32[0] * 0.000015258789) - *(float *)&_XMM3) * 360.0;
    __asm { vroundss xmm3, xmm6, xmm0, 1 }
    ps->viewangles.v[0] = (float)((float)((float)(*(float *)&v9 + ps->viewangles.v[0]) * 0.0027777778) - *(float *)&_XMM3) * 360.0;
    flags = viewAngleState->flags;
  }
  if ( (flags & 2) != 0 )
  {
    v14 = GetViewAngleFromCurrentAngle(viewAngleState, ps->viewangles.v[1], time, 1);
    v15 = AngleDelta(v14, ps->viewangles.v[1]);
    _XMM6 = 0i64;
    __asm
    {
      vroundss xmm2, xmm6, xmm1, 1
      vroundss xmm3, xmm6, xmm2, 1
    }
    ps->delta_angles.v[1] = (float)((float)(_mm_cvtepi32_ps((__m128i)(unsigned __int16)(int)*(float *)&_XMM2).m128_f32[0] * 0.000015258789) - *(float *)&_XMM3) * 360.0;
    __asm { vroundss xmm2, xmm6, xmm1, 1 }
    ps->viewangles.v[1] = (float)((float)((float)(*(float *)&v15 + ps->viewangles.v[1]) * 0.0027777778) - *(float *)&_XMM2) * 360.0;
  }
}

/*
==============
PM_EndViewAngleTransition
==============
*/
void PM_EndViewAngleTransition(playerState_s *ps)
{
  GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::ClearFlagInternal(&ps->otherFlags, ACTIVE, 0x10u);
}

/*
==============
PM_GetViewAngleTransitionDuration
==============
*/
__int64 PM_GetViewAngleTransitionDuration(const playerViewAngleState_s *p_viewAngleState)
{
  if ( !p_viewAngleState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_view_adjustment.cpp", 54, ASSERT_TYPE_ASSERT, "(p_viewAngleState)", (const char *)&queryFormat, "p_viewAngleState") )
    __debugbreak();
  return (unsigned int)(p_viewAngleState->endTimeMs - p_viewAngleState->startTimeMs);
}

/*
==============
PM_StartViewAngleTransition
==============
*/
void PM_StartViewAngleTransition(pmove_t *pm, int duration, EViewAngleEaseMode easeInMode, EViewAngleEaseMode eastOutMode, const vec2_t *goalAngles, int flags)
{
  playerState_s *ps; 
  int v10; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_view_adjustment.cpp", 17, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_view_adjustment.cpp", 17, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( duration > 0 )
  {
    GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::SetFlagInternal(&ps->otherFlags, ACTIVE, 0x10u);
    ps->viewAngleState.time = pm->cmd.serverTime;
    ps->viewAngleState.startTimeMs = pm->cmd.serverTime;
    v10 = duration + pm->cmd.serverTime;
    ps->viewAngleState.easeMode = easeInMode;
    ps->viewAngleState.endTimeMs = v10;
    ps->viewAngleState.flags = flags;
    if ( (flags & 1) != 0 )
    {
      ps->viewAngleState.startAngles.v[0] = ps->viewangles.v[0];
      _XMM0 = 0i64;
      __asm { vroundss xmm1, xmm0, xmm3, 1 }
      ps->viewAngleState.goalAngles.v[0] = (float)(unsigned __int16)(int)*(float *)&_XMM1 * 0.0054931641;
    }
    if ( (flags & 2) != 0 )
    {
      ps->viewAngleState.startAngles.v[1] = ps->viewangles.v[1];
      _XMM0 = 0i64;
      __asm { vroundss xmm1, xmm0, xmm3, 1 }
      ps->viewAngleState.goalAngles.v[1] = (float)(unsigned __int16)(int)*(float *)&_XMM1 * 0.0054931641;
    }
  }
  else if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_view_adjustment.cpp", 19, ASSERT_TYPE_ASSERT, "(duration > 0)", (const char *)&queryFormat, "duration > 0") )
  {
    __debugbreak();
  }
}

/*
==============
PM_UpdateViewAnglesOverride
==============
*/
void PM_UpdateViewAnglesOverride(pmove_t *pm, usercmd_s *cmd)
{
  playerState_s *ps; 
  const dvar_t *v5; 
  const dvar_t *v6; 
  char v7; 
  __int16 groundRefEnt; 
  int flags; 
  int v10; 
  int ViewAngleTransitionDuration; 
  bool v12; 
  double v13; 
  float v14; 
  double v15; 
  double v16; 
  float v17; 
  double v18; 

  if ( !pm && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_view_adjustment.cpp", 263, ASSERT_TYPE_ASSERT, "(pm)", (const char *)&queryFormat, "pm") )
    __debugbreak();
  ps = pm->ps;
  if ( !ps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_view_adjustment.cpp", 263, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( (ps->viewAngleState.flags & 3) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_view_adjustment.cpp", 266, ASSERT_TYPE_ASSERT, "(viewAngleState->flags & ( (1<<0)|(1<<1) ))", (const char *)&queryFormat, "viewAngleState->flags & ( VAF_PITCH|VAF_YAW )") )
    __debugbreak();
  v5 = DCONST_DVARINT_ViewAngleOverride_cameraInputThreshold;
  if ( !DCONST_DVARINT_ViewAngleOverride_cameraInputThreshold && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ViewAngleOverride_cameraInputThreshold") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v5);
  if ( abs8(cmd->yawmove) > v5->current.integer )
    goto LABEL_19;
  v6 = DCONST_DVARINT_ViewAngleOverride_cameraInputThreshold;
  if ( !DCONST_DVARINT_ViewAngleOverride_cameraInputThreshold && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ViewAngleOverride_cameraInputThreshold") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  if ( abs8(cmd->pitchmove) > v6->current.integer )
LABEL_19:
    v7 = 1;
  else
    v7 = 0;
  if ( !ps )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2605, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2571, ASSERT_TYPE_ASSERT, "(ps)", (const char *)&queryFormat, "ps") )
      __debugbreak();
  }
  if ( GameModeFlagContainer<enum PMoveFlagsCommon,enum PMoveFlagsSP,enum PMoveFlagsMP,64>::TestFlagInternal(&ps->pm_flags, ACTIVE, 0x2Au) )
  {
    groundRefEnt = ps->groundRefEnt;
    if ( groundRefEnt == 2047 || !groundRefEnt )
    {
      if ( !Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_PARACHUTE_IDLE|WEAPON_FIRING) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 2575, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ZEROG ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::PLAYER_ZEROG )") )
        __debugbreak();
      if ( !BG_IsPlayerZeroGWalking(ps) )
        goto LABEL_51;
    }
  }
  flags = ps->viewAngleState.flags;
  if ( (flags & 4) != 0 )
  {
    if ( v7 )
      goto LABEL_51;
  }
  v10 = cmd->serverTime - ps->viewAngleState.startTimeMs;
  if ( v10 > ps->viewAngleState.endTimeMs - ps->viewAngleState.startTimeMs )
  {
    ViewAngleTransitionDuration = PM_GetViewAngleTransitionDuration(&ps->viewAngleState);
    flags = ps->viewAngleState.flags;
    v10 = ViewAngleTransitionDuration;
  }
  if ( (flags & 8) == 0 )
  {
    PM_CalcViewAnglesOverride(ps, cmd, &ps->viewAngleState, v10);
LABEL_50:
    if ( v10 != PM_GetViewAngleTransitionDuration(&ps->viewAngleState) )
      return;
    goto LABEL_51;
  }
  v12 = 0;
  if ( (flags & 2) != 0 )
  {
    v13 = AngleDelta(ps->viewAngleState.goalAngles.v[1], ps->viewAngleState.startAngles.v[1]);
    v14 = *(float *)&v13;
    v15 = AngleDelta(ps->viewAngleState.goalAngles.v[1], ps->viewangles.v[1]);
    if ( v14 <= 0.0 )
    {
      v12 = *(float *)&v15 > 0.0;
    }
    else if ( *(float *)&v15 < 0.0 )
    {
      v12 = 1;
    }
  }
  if ( (ps->viewAngleState.flags & 1) != 0 )
  {
    v16 = AngleDelta(ps->viewAngleState.goalAngles.v[0], ps->viewAngleState.startAngles.v[0]);
    v17 = *(float *)&v16;
    v18 = AngleDelta(ps->viewAngleState.goalAngles.v[0], ps->viewangles.v[0]);
    if ( v17 <= 0.0 )
    {
      if ( *(float *)&v18 > 0.0 )
        goto LABEL_51;
    }
    else if ( *(float *)&v18 < 0.0 )
    {
      goto LABEL_51;
    }
  }
  if ( !v12 )
  {
    PM_CalcViewAnglesOverrideActive(ps, cmd, &ps->viewAngleState, v10);
    goto LABEL_50;
  }
LABEL_51:
  GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::ClearFlagInternal(&ps->otherFlags, ACTIVE, 0x10u);
}


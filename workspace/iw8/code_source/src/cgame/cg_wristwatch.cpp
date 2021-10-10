/*
==============
CG_WristWatch_CalcXAnimParameters
==============
*/

void __fastcall CG_WristWatch_CalcXAnimParameters(DObj *obj, const LocalClientNum_t localClientNum, const playerState_s *ps, unsigned __int16 hourParamIndex, unsigned __int16 minParamIndex, unsigned __int16 secParamIndex, unsigned __int16 oscFracParamIndex)
{
  ?CG_WristWatch_CalcXAnimParameters@@YAXPEAUDObj@@W4LocalClientNum_t@@PEBUplayerState_s@@GGGG@Z(obj, localClientNum, ps, hourParamIndex, minParamIndex, secParamIndex, oscFracParamIndex);
}

/*
==============
CG_WristWatch_CalcXAnimParameters
==============
*/
void CG_WristWatch_CalcXAnimParameters(DObj *obj, const LocalClientNum_t localClientNum, const playerState_s *ps, unsigned __int16 hourParamIndex, unsigned __int16 minParamIndex, unsigned __int16 secParamIndex, unsigned __int16 oscFracParamIndex)
{
  __int64 v9; 
  cg_t *v11; 
  ClStatic *CLStatic; 
  int v13; 
  int v14; 
  int v15; 
  int v16; 
  int tm_hour; 
  float v18; 
  float tm_min; 
  double v21; 
  __int64 v23; 
  float hourAngle; 
  float minuteAngle; 
  __int64 v26; 

  v26 = -2i64;
  v9 = localClientNum;
  if ( !CL_Pause_IsGamePaused() )
  {
    Sys_ProfBeginNamedEvent(0xFF000000, "CG_WristWatch_CalcXAnimParameters");
    if ( (unsigned int)v9 >= cg_t::ms_allocatedCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1166, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( cg_t::ms_allocatedCount )", "localClientNum doesn't index cg_t::ms_allocatedCount\n\t%i not in [0, %i)", v9, cg_t::ms_allocatedCount) )
      __debugbreak();
    if ( !cg_t::ms_cgArray[v9] )
    {
      LODWORD(v23) = v9;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1167, ASSERT_TYPE_ASSERT, "(cg_t::ms_cgArray[localClientNum])", "%s\n\tTrying to access unallocated client globals for localClientNum %d\n", "cg_t::ms_cgArray[localClientNum]", v23) )
        __debugbreak();
    }
    if ( cg_t::ms_allocatedType == GLOB_TYPE_UNKNOWN )
    {
      LODWORD(v23) = v9;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1168, ASSERT_TYPE_ASSERT, "(cg_t::ms_allocatedType != CgGlobalsType::GLOB_TYPE_UNKNOWN)", "%s\n\tTrying to access client globals for localClientNum %d but the client global type is not known\n", "cg_t::ms_allocatedType != CgGlobalsType::GLOB_TYPE_UNKNOWN", v23) )
        __debugbreak();
    }
    v11 = cg_t::ms_cgArray[v9];
    CLStatic = CL_Main_GetCLStatic();
    v13 = Sys_Milliseconds();
    if ( !v11->watchState.m_initialized || CLStatic->m_realTime.tm_sec != v11->watchState.m_prevSeconds )
      v11->watchState.m_syncMilliseconds = v13;
    v11->watchState.m_prevSeconds = CLStatic->m_realTime.tm_sec;
    v11->watchState.m_initialized = 1;
    if ( obj )
    {
      v14 = v13 - v11->watchState.m_syncMilliseconds;
      v15 = 999;
      if ( v14 < 999 )
        v15 = v14;
      v16 = v15 + 1000 * CLStatic->m_realTime.tm_sec;
      tm_hour = CLStatic->m_realTime.tm_hour;
      v18 = (float)(v16 / 250);
      tm_min = (float)CLStatic->m_realTime.tm_min;
      minuteAngle = (float)(tm_min * -6.0000005) - (float)(v18 * 0.025000002);
      hourAngle = (float)((float)(tm_hour % 12) * -30.0) - (float)((float)(v18 * 0.0020833337) + (float)(tm_min * 0.50000006));
      CG_Wristwatch_ApplyScriptAngleOverrides(ps, &hourAngle, &minuteAngle);
      Sys_ProfBeginNamedEvent(0xFF0000FF, "XAnimSetFloatGameParameterByIndex");
      XAnimSetFloatGameParameterByIndex(obj, hourParamIndex, hourAngle);
      XAnimSetFloatGameParameterByIndex(obj, minParamIndex, minuteAngle);
      XAnimSetFloatGameParameterByIndex(obj, secParamIndex, v18 * -1.5000001);
      _XMM2 = LODWORD(FLOAT_1_0);
      v21 = I_fclamp((float)(v16 % 500) * 0.0020000001, 0.0, 1.0);
      if ( *(float *)&v21 < 0.0 || *(float *)&v21 > 1.0 )
      {
        __asm { vxorpd  xmm2, xmm2, xmm2 }
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_wristwatch.cpp", 157, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( oscillationFraction ) && ( oscillationFraction ) <= ( 1.0f )", "oscillationFraction not in [0.0f, 1.0f]\n\t%g not in [%g, %g]", *(float *)&v21, *(double *)&_XMM2, DOUBLE_1_0) )
          __debugbreak();
      }
      XAnimSetFloatGameParameterByIndex(obj, oscFracParamIndex, *(float *)&v21);
      Sys_ProfEndNamedEvent();
    }
    Sys_ProfEndNamedEvent();
  }
}

/*
==============
CG_Wristwatch_ApplyScriptAngleOverrides
==============
*/
void CG_Wristwatch_ApplyScriptAngleOverrides(const playerState_s *ps, float *hourAngle, float *minuteAngle)
{
  const dvar_t *v6; 
  int watchTimeChangedTime; 
  int integer; 
  int v9; 
  const dvar_t *v10; 
  float v11; 
  float v12; 
  float v13; 
  const dvar_t *v14; 
  float v15; 
  float v16; 
  float v17; 
  float v18; 
  float v19; 
  double v20; 
  double v21; 
  int v22; 
  int v23[3]; 
  bool outUseTransition; 
  bool v25; 

  if ( ps )
  {
    BG_GetScriptWristwatchTime(ps, &v25, v23, &v22, &outUseTransition);
    v6 = DCONST_DVARINT_cg_wristwatch_script_transition_time_ms;
    if ( !DCONST_DVARINT_cg_wristwatch_script_transition_time_ms && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_wristwatch_script_transition_time_ms") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v6);
    watchTimeChangedTime = ps->watchTimeChangedTime;
    integer = v6->current.integer;
    v9 = 0x7FFFFFFF;
    if ( watchTimeChangedTime )
      v9 = ps->serverTime - watchTimeChangedTime;
    if ( v25 || outUseTransition && v9 < integer )
    {
      v10 = DCONST_DVARINT_cg_wristwatch_script_transition_additional_rot_hour;
      v11 = (float)v22 * -6.0000005;
      v12 = (float)((float)v22 * -0.50000006) - (float)((float)(v23[0] % 12) * 30.0);
      if ( !DCONST_DVARINT_cg_wristwatch_script_transition_additional_rot_hour && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_wristwatch_script_transition_additional_rot_hour") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v10);
      v13 = (float)v10->current.integer;
      v14 = DCONST_DVARINT_cg_wristwatch_script_transition_additional_rot_min;
      v15 = v12 + (float)(v13 * 360.0);
      if ( !DCONST_DVARINT_cg_wristwatch_script_transition_additional_rot_min && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_wristwatch_script_transition_additional_rot_min") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v14);
      v16 = (float)((float)v14->current.integer * 360.0) + v11;
      if ( integer <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_wristwatch.cpp", 84, ASSERT_TYPE_ASSERT, "( 0 ) < ( transitionDurationMs )", "%s < %s\n\t%i, %i", "0", "transitionDurationMs", 0i64, integer) )
        __debugbreak();
      if ( outUseTransition )
        LODWORD(v17) = COERCE_UNSIGNED_INT64(I_fclamp((float)v9 / (float)integer, 0.0, 1.0));
      else
        v17 = FLOAT_1_0;
      if ( !v25 )
        v17 = 1.0 - v17;
      v18 = (float)((float)((float)((float)(v17 * 6.0) - 15.0) * v17) + 10.0) * (float)((float)(v17 * v17) * v17);
      v19 = (float)(v16 - *minuteAngle) * v18;
      *hourAngle = (float)((float)(v15 - *hourAngle) * v18) + *hourAngle;
      *minuteAngle = v19 + *minuteAngle;
      v20 = AngleNormalize360(*hourAngle);
      *hourAngle = *(float *)&v20;
      v21 = AngleNormalize360(*minuteAngle);
      *minuteAngle = *(float *)&v21;
    }
  }
}


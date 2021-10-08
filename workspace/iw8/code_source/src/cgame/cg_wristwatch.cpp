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
  __int64 v12; 
  cg_t *v14; 
  ClStatic *CLStatic; 
  int v16; 
  char v40; 
  char v41; 
  int v50; 
  double v51; 
  __int64 v52; 
  int v53; 
  double v54; 
  double v55; 
  float hourAngle; 
  float minuteAngle; 
  __int64 v58; 
  void *retaddr; 

  _RAX = &retaddr;
  v58 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm6
    vmovaps xmmword ptr [rax-38h], xmm7
  }
  v12 = localClientNum;
  if ( !CL_Pause_IsGamePaused() )
  {
    Sys_ProfBeginNamedEvent(0xFF000000, "CG_WristWatch_CalcXAnimParameters");
    if ( (unsigned int)v12 >= cg_t::ms_allocatedCount )
    {
      v53 = cg_t::ms_allocatedCount;
      v50 = v12;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1166, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( cg_t::ms_allocatedCount )", "localClientNum doesn't index cg_t::ms_allocatedCount\n\t%i not in [0, %i)", v50, v53) )
        __debugbreak();
    }
    if ( !cg_t::ms_cgArray[v12] )
    {
      LODWORD(v52) = v12;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1167, ASSERT_TYPE_ASSERT, "(cg_t::ms_cgArray[localClientNum])", "%s\n\tTrying to access unallocated client globals for localClientNum %d\n", "cg_t::ms_cgArray[localClientNum]", v52) )
        __debugbreak();
    }
    if ( cg_t::ms_allocatedType == GLOB_TYPE_UNKNOWN )
    {
      LODWORD(v52) = v12;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_globals.h", 1168, ASSERT_TYPE_ASSERT, "(cg_t::ms_allocatedType != CgGlobalsType::GLOB_TYPE_UNKNOWN)", "%s\n\tTrying to access client globals for localClientNum %d but the client global type is not known\n", "cg_t::ms_allocatedType != CgGlobalsType::GLOB_TYPE_UNKNOWN", v52) )
        __debugbreak();
    }
    v14 = cg_t::ms_cgArray[v12];
    CLStatic = CL_Main_GetCLStatic();
    v16 = Sys_Milliseconds();
    if ( !v14->watchState.m_initialized || CLStatic->m_realTime.tm_sec != v14->watchState.m_prevSeconds )
      v14->watchState.m_syncMilliseconds = v16;
    v14->watchState.m_prevSeconds = CLStatic->m_realTime.tm_sec;
    v14->watchState.m_initialized = 1;
    if ( obj )
    {
      __asm
      {
        vxorps  xmm6, xmm6, xmm6
        vcvtsi2ss xmm6, xmm6, edx
        vxorps  xmm4, xmm4, xmm4
        vcvtsi2ss xmm4, xmm4, dword ptr [rdi+7D8h]
        vmulss  xmm1, xmm4, cs:__real@c0c00001
        vmulss  xmm0, xmm6, cs:__real@3cccccce
        vsubss  xmm1, xmm1, xmm0
        vmovss  [rsp+98h+minuteAngle], xmm1
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, ecx
        vmulss  xmm3, xmm0, cs:__real@c1f00000
        vmulss  xmm2, xmm6, cs:__real@3b08888a
        vmulss  xmm1, xmm4, cs:__real@3f000001
        vaddss  xmm0, xmm2, xmm1
        vsubss  xmm2, xmm3, xmm0
        vmovss  [rsp+98h+hourAngle], xmm2
      }
      CG_Wristwatch_ApplyScriptAngleOverrides(ps, &hourAngle, &minuteAngle);
      Sys_ProfBeginNamedEvent(0xFF0000FF, "XAnimSetFloatGameParameterByIndex");
      __asm { vmovss  xmm2, [rsp+98h+hourAngle]; value }
      XAnimSetFloatGameParameterByIndex(obj, hourParamIndex, *(float *)&_XMM2);
      __asm { vmovss  xmm2, [rsp+98h+minuteAngle]; value }
      XAnimSetFloatGameParameterByIndex(obj, minParamIndex, *(float *)&_XMM2);
      __asm { vmulss  xmm2, xmm6, cs:__real@bfc00001; value }
      XAnimSetFloatGameParameterByIndex(obj, secParamIndex, *(float *)&_XMM2);
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, ebx
        vmulss  xmm0, xmm0, cs:__real@3b03126f; val
        vmovss  xmm2, cs:__real@3f800000; max
        vxorps  xmm6, xmm6, xmm6
        vxorps  xmm1, xmm1, xmm1; min
      }
      *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      __asm
      {
        vmovaps xmm7, xmm0
        vcomiss xmm0, xmm6
      }
      if ( v40 )
        goto LABEL_17;
      __asm { vcomiss xmm0, cs:__real@3f800000 }
      if ( !(v40 | v41) )
      {
LABEL_17:
        __asm
        {
          vcvtss2sd xmm3, xmm7, xmm7
          vmovsd  xmm1, cs:__real@3ff0000000000000
          vmovsd  [rsp+98h+var_60], xmm1
          vxorpd  xmm2, xmm2, xmm2
          vmovsd  [rsp+98h+var_68], xmm2
          vmovsd  [rsp+98h+var_70], xmm3
        }
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_wristwatch.cpp", 157, ASSERT_TYPE_ASSERT, "( 0.0f ) <= ( oscillationFraction ) && ( oscillationFraction ) <= ( 1.0f )", "oscillationFraction not in [0.0f, 1.0f]\n\t%g not in [%g, %g]", v51, v54, v55) )
          __debugbreak();
      }
      __asm { vmovaps xmm2, xmm7; value }
      XAnimSetFloatGameParameterByIndex(obj, oscFracParamIndex, *(float *)&_XMM2);
      Sys_ProfEndNamedEvent();
    }
    Sys_ProfEndNamedEvent();
  }
  __asm
  {
    vmovaps xmm6, [rsp+98h+var_28]
    vmovaps xmm7, [rsp+98h+var_38]
  }
}

/*
==============
CG_Wristwatch_ApplyScriptAngleOverrides
==============
*/
void CG_Wristwatch_ApplyScriptAngleOverrides(const playerState_s *ps, float *hourAngle, float *minuteAngle)
{
  const dvar_t *v10; 
  int watchTimeChangedTime; 
  int integer; 
  int v13; 
  const dvar_t *v14; 
  const dvar_t *v26; 
  int v60; 
  int v61[3]; 
  bool outUseTransition; 
  bool v66; 

  if ( ps )
  {
    _RBP = minuteAngle;
    _R14 = hourAngle;
    BG_GetScriptWristwatchTime(ps, &v66, v61, &v60, &outUseTransition);
    v10 = DCONST_DVARINT_cg_wristwatch_script_transition_time_ms;
    if ( !DCONST_DVARINT_cg_wristwatch_script_transition_time_ms && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_wristwatch_script_transition_time_ms") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v10);
    watchTimeChangedTime = ps->watchTimeChangedTime;
    integer = v10->current.integer;
    v13 = 0x7FFFFFFF;
    if ( watchTimeChangedTime )
      v13 = ps->serverTime - watchTimeChangedTime;
    if ( v66 || outUseTransition && v13 < integer )
    {
      v14 = DCONST_DVARINT_cg_wristwatch_script_transition_additional_rot_hour;
      __asm
      {
        vmovaps [rsp+0B8h+var_38], xmm6
        vmovaps [rsp+0B8h+var_48], xmm7
        vmovaps [rsp+0B8h+var_58], xmm8
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, [rsp+0B8h+var_68]
        vmulss  xmm2, xmm0, cs:__real@bf000001
        vmulss  xmm7, xmm0, cs:__real@c0c00001
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, ecx
        vmulss  xmm1, xmm0, cs:__real@41f00000
        vsubss  xmm8, xmm2, xmm1
      }
      if ( !DCONST_DVARINT_cg_wristwatch_script_transition_additional_rot_hour && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_wristwatch_script_transition_additional_rot_hour") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v14);
      __asm
      {
        vmovss  xmm6, cs:__real@43b40000
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, dword ptr [rbx+28h]
      }
      v26 = DCONST_DVARINT_cg_wristwatch_script_transition_additional_rot_min;
      __asm
      {
        vmulss  xmm0, xmm0, xmm6
        vaddss  xmm8, xmm8, xmm0
      }
      if ( !DCONST_DVARINT_cg_wristwatch_script_transition_additional_rot_min && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_wristwatch_script_transition_additional_rot_min") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v26);
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, dword ptr [rbx+28h]
        vmulss  xmm1, xmm0, xmm6
        vaddss  xmm7, xmm1, xmm7
      }
      if ( integer <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_wristwatch.cpp", 84, ASSERT_TYPE_ASSERT, "( 0 ) < ( transitionDurationMs )", "%s < %s\n\t%i, %i", "0", "transitionDurationMs", 0i64, integer) )
        __debugbreak();
      __asm { vmovss  xmm6, cs:__real@3f800000 }
      if ( outUseTransition )
      {
        __asm
        {
          vxorps  xmm1, xmm1, xmm1
          vxorps  xmm0, xmm0, xmm0
          vcvtsi2ss xmm1, xmm1, edi
          vcvtsi2ss xmm0, xmm0, esi
          vdivss  xmm0, xmm1, xmm0; val
          vxorps  xmm1, xmm1, xmm1; min
          vmovaps xmm2, xmm6; max
        }
        *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
        __asm { vmovaps xmm4, xmm0 }
      }
      else
      {
        __asm { vmovaps xmm4, xmm6 }
      }
      if ( !v66 )
        __asm { vsubss  xmm4, xmm6, xmm4 }
      __asm
      {
        vmulss  xmm0, xmm4, cs:__real@40c00000
        vsubss  xmm1, xmm0, cs:__real@41700000
        vmulss  xmm2, xmm1, xmm4
        vaddss  xmm3, xmm2, cs:__real@41200000
        vsubss  xmm2, xmm7, dword ptr [rbp+0]
        vmulss  xmm0, xmm4, xmm4
        vmulss  xmm1, xmm0, xmm4
        vsubss  xmm0, xmm8, dword ptr [r14]
        vmulss  xmm4, xmm3, xmm1
        vmulss  xmm1, xmm0, xmm4
        vmulss  xmm5, xmm2, xmm4
        vaddss  xmm2, xmm1, dword ptr [r14]
        vmovss  dword ptr [r14], xmm2
        vaddss  xmm0, xmm5, dword ptr [rbp+0]
        vmovss  dword ptr [rbp+0], xmm0
        vmovss  xmm0, dword ptr [r14]; angle
      }
      *(double *)&_XMM0 = AngleNormalize360(*(const float *)&_XMM0);
      __asm
      {
        vmovss  dword ptr [r14], xmm0
        vmovss  xmm0, dword ptr [rbp+0]; angle
      }
      *(double *)&_XMM0 = AngleNormalize360(*(const float *)&_XMM0);
      __asm
      {
        vmovaps xmm8, [rsp+0B8h+var_58]
        vmovaps xmm7, [rsp+0B8h+var_48]
        vmovaps xmm6, [rsp+0B8h+var_38]
        vmovss  dword ptr [rbp+0], xmm0
      }
    }
  }
}


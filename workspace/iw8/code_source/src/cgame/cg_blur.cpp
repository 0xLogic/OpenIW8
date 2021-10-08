/*
==============
CG_ClearBlur
==============
*/

void __fastcall CG_ClearBlur(LocalClientNum_t localClientNum)
{
  ?CG_ClearBlur@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_Blur_Transition
==============
*/

void __fastcall CG_Blur_Transition(LocalClientNum_t localClientNum)
{
  ?CG_Blur_Transition@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_Blur_LoadMigrationPers
==============
*/

void __fastcall CG_Blur_LoadMigrationPers(LocalClientNum_t localClientNum, const ScreenBlur *inBlur)
{
  ?CG_Blur_LoadMigrationPers@@YAXW4LocalClientNum_t@@PEBUScreenBlur@@@Z(localClientNum, inBlur);
}

/*
==============
CG_Blur_SaveMigrationPers
==============
*/

void __fastcall CG_Blur_SaveMigrationPers(LocalClientNum_t localClientNum, ScreenBlur *outBlur)
{
  ?CG_Blur_SaveMigrationPers@@YAXW4LocalClientNum_t@@PEAUScreenBlur@@@Z(localClientNum, outBlur);
}

/*
==============
CG_GetBlurRadius
==============
*/

double __fastcall CG_GetBlurRadius(LocalClientNum_t localClientNum)
{
  double result; 

  *(float *)&result = ?CG_GetBlurRadius@@YAMW4LocalClientNum_t@@@Z(localClientNum);
  return result;
}

/*
==============
CG_Blur
==============
*/

void __fastcall CG_Blur(LocalClientNum_t localClientNum, int duration, float endBlur, BlurTime timeType, BlurPriority priority)
{
  ?CG_Blur@@YAXW4LocalClientNum_t@@HMW4BlurTime@@W4BlurPriority@@@Z(localClientNum, duration, endBlur, timeType, priority);
}

/*
==============
CG_ScreenBlur
==============
*/

void __fastcall CG_ScreenBlur(LocalClientNum_t localClientNum)
{
  ?CG_ScreenBlur@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_Blur_SnapToTargetValue
==============
*/

void __fastcall CG_Blur_SnapToTargetValue(LocalClientNum_t localClientNum)
{
  ?CG_Blur_SnapToTargetValue@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CG_Blur
==============
*/

void __fastcall CG_Blur(LocalClientNum_t localClientNum, int duration, double endBlur, BlurTime timeType, BlurPriority priority)
{
  __int64 v7; 
  int time; 
  float blurRadius; 

  v7 = localClientNum;
  __asm
  {
    vmovaps [rsp+58h+var_18], xmm6
    vmovaps [rsp+58h+var_28], xmm7
    vmovaps xmm7, xmm2
  }
  _RDI = CG_GetLocalClientGlobals(localClientNum);
  if ( duration < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_blur.cpp", 25, ASSERT_TYPE_ASSERT, "(duration >= 0)", (const char *)&queryFormat, "duration >= 0") )
    __debugbreak();
  __asm
  {
    vxorps  xmm6, xmm6, xmm6
    vcomiss xmm7, xmm6
    vmovss  xmm0, dword ptr [rdi+69D0h]
    vcomiss xmm0, xmm6
  }
  _RBX = &s_screenBlur[v7];
  if ( priority >= _RBX->priority )
  {
    if ( timeType == BLUR_TIME_ABSOLUTE )
      time = Sys_Milliseconds();
    else
      time = _RDI->time;
    _RBX->timeStart = time;
    _RBX->timeEnd = duration + time;
    blurRadius = _RDI->refdef.blurRadius;
    __asm { vmovss  dword ptr [rbx+14h], xmm7 }
    _RBX->start = blurRadius;
    _RBX->time = timeType;
    _RBX->priority = priority;
  }
  __asm
  {
    vmovaps xmm6, [rsp+58h+var_18]
    vmovaps xmm7, [rsp+58h+var_28]
  }
}

/*
==============
CG_Blur_LoadMigrationPers
==============
*/
void CG_Blur_LoadMigrationPers(LocalClientNum_t localClientNum, const ScreenBlur *inBlur)
{
  __int64 v2; 

  v2 = localClientNum;
  _RBX = inBlur;
  if ( !inBlur && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_blur.cpp", 175, ASSERT_TYPE_ASSERT, "(inBlur)", (const char *)&queryFormat, "inBlur") )
    __debugbreak();
  __asm { vmovups xmm0, xmmword ptr [rbx] }
  _RCX = v2;
  _RDX = s_screenBlur;
  __asm
  {
    vmovups xmmword ptr [rcx+rdx], xmm0
    vmovsd  xmm1, qword ptr [rbx+10h]
    vmovsd  qword ptr [rcx+rdx+10h], xmm1
  }
  s_screenBlur[_RCX].radius = _RBX->radius;
}

/*
==============
CG_Blur_SaveMigrationPers
==============
*/
void CG_Blur_SaveMigrationPers(LocalClientNum_t localClientNum, ScreenBlur *outBlur)
{
  __int64 v2; 

  v2 = localClientNum;
  _RBX = outBlur;
  if ( !outBlur && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_blur.cpp", 168, ASSERT_TYPE_ASSERT, "(outBlur)", (const char *)&queryFormat, "outBlur") )
    __debugbreak();
  _RCX = 28 * v2;
  _RAX = s_screenBlur;
  __asm
  {
    vmovups xmm0, xmmword ptr [rcx+rax]
    vmovups xmmword ptr [rbx], xmm0
    vmovsd  xmm1, qword ptr [rcx+rax+10h]
    vmovsd  qword ptr [rbx+10h], xmm1
  }
  _RBX->radius = s_screenBlur[v2].radius;
}

/*
==============
CG_Blur_SnapToTargetValue
==============
*/

void __fastcall CG_Blur_SnapToTargetValue(LocalClientNum_t localClientNum, __int64 a2, double _XMM2_8)
{
  cg_t *LocalClientGlobals; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( LocalClientGlobals->inKillCam )
  {
    if ( !CG_IsCinematicCameraActive(localClientNum) && !CG_View_IsKillCamEntityView(localClientNum) )
      goto LABEL_4;
LABEL_7:
    __asm { vxorps  xmm2, xmm2, xmm2 }
    goto LABEL_5;
  }
  if ( LocalClientGlobals->predictedPlayerState.pm_type == 5 )
    goto LABEL_7;
LABEL_4:
  _RAX = CG_GetLocalClientGlobals(localClientNum);
  __asm { vmovss  xmm2, dword ptr [rax+35Ch]; endBlur }
LABEL_5:
  CG_Blur(localClientNum, 0, *(float *)&_XMM2, BLUR_TIME_RELATIVE, BLUR_PRIORITY_SCRIPT);
}

/*
==============
CG_Blur_Transition
==============
*/

void __fastcall CG_Blur_Transition(LocalClientNum_t localClientNum, __int64 a2, double _XMM2_8)
{
  __int64 v3; 
  cg_t *LocalClientGlobals; 
  cg_t *v5; 
  char v7; 
  int v11; 
  int v12; 

  v3 = localClientNum;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( !LocalClientGlobals->inKillCam )
  {
    if ( LocalClientGlobals->predictedPlayerState.pm_type != 5 )
      goto LABEL_4;
LABEL_10:
    __asm { vxorps  xmm2, xmm2, xmm2; endBlur }
    CG_Blur((LocalClientNum_t)v3, 0, *(float *)&_XMM2, BLUR_TIME_RELATIVE, BLUR_PRIORITY_SCRIPT);
    return;
  }
  if ( CG_IsCinematicCameraActive((LocalClientNum_t)v3) || CG_View_IsKillCamEntityView((const LocalClientNum_t)v3) )
    goto LABEL_10;
LABEL_4:
  v5 = CG_GetLocalClientGlobals((const LocalClientNum_t)v3);
  _RAX = CG_GetLocalClientGlobals((const LocalClientNum_t)v3);
  _RDX = 28 * v3;
  __asm { vmovss  xmm2, dword ptr [rax+35Ch]; endBlur }
  _RCX = &s_screenBlur[0].end;
  __asm { vucomiss xmm2, dword ptr [rdx+rcx] }
  if ( !v7 )
  {
    v11 = 0;
    v12 = _RAX->predictedPlayerState.blurEndTime - v5->time;
    if ( v12 > 0 )
      v11 = v12;
    CG_Blur((LocalClientNum_t)v3, v11, *(float *)&_XMM2, BLUR_TIME_RELATIVE, BLUR_PRIORITY_SCRIPT);
  }
}

/*
==============
CG_ClearBlur
==============
*/
void CG_ClearBlur(LocalClientNum_t localClientNum)
{
  ScreenBlur *v1; 

  v1 = &s_screenBlur[localClientNum];
  *(_QWORD *)&v1->timeStart = 0i64;
  *(_QWORD *)&v1->start = 0i64;
  v1->radius = 0.0;
  v1->priority = BLUR_PRIORITY_NONE;
}

/*
==============
CG_GetBlurRadius
==============
*/
float CG_GetBlurRadius(LocalClientNum_t localClientNum)
{
  __int64 v2; 

  v2 = localClientNum;
  if ( CG_View_IsKillCamEntityView(localClientNum) )
  {
    __asm { vxorps  xmm0, xmm0, xmm0 }
  }
  else
  {
    _RCX = 28 * v2;
    _RAX = &s_screenBlur[0].radius;
    __asm { vmovss  xmm0, dword ptr [rcx+rax] }
  }
  return *(float *)&_XMM0;
}

/*
==============
CG_ScreenBlur
==============
*/

void __fastcall CG_ScreenBlur(LocalClientNum_t localClientNum, double _XMM1_8)
{
  int time; 
  int timeStart; 
  int timeEnd; 
  bool v20; 
  bool v21; 
  double v32; 
  double v33; 

  _RBX = localClientNum;
  time = CG_GetLocalClientGlobals(localClientNum)->time;
  _RSI = s_screenBlur;
  if ( s_screenBlur[_RBX].time == BLUR_TIME_ABSOLUTE )
    time = Sys_Milliseconds();
  timeStart = s_screenBlur[_RBX].timeStart;
  if ( timeStart )
  {
    __asm { vmovaps [rsp+58h+var_18], xmm6 }
    if ( timeStart > time && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_blur.cpp", 87, ASSERT_TYPE_ASSERT, "(scrBlur->timeStart <= time)", (const char *)&queryFormat, "scrBlur->timeStart <= time") )
      __debugbreak();
    if ( s_screenBlur[_RBX].timeStart > s_screenBlur[_RBX].timeEnd && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_blur.cpp", 88, ASSERT_TYPE_ASSERT, "(scrBlur->timeStart <= scrBlur->timeEnd)", (const char *)&queryFormat, "scrBlur->timeStart <= scrBlur->timeEnd") )
      __debugbreak();
    timeEnd = s_screenBlur[_RBX].timeEnd;
    if ( time >= timeEnd )
    {
      __asm
      {
        vmovss  xmm6, dword ptr [rbx+rsi+14h]
        vmovss  xmm2, dword ptr [rbx+rsi+10h]
      }
      v21 = 1;
      *(_QWORD *)&s_screenBlur[_RBX].timeStart = 0i64;
      s_screenBlur[_RBX].priority = BLUR_PRIORITY_NONE;
      __asm { vmovaps xmm3, xmm6 }
    }
    else
    {
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vmovaps [rsp+58h+var_28], xmm7
        vcvtsi2ss xmm0, xmm0, eax
        vxorps  xmm7, xmm7, xmm7
        vcomiss xmm0, xmm7
      }
      if ( (unsigned int)timeEnd <= s_screenBlur[_RBX].timeStart && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_blur.cpp", 92, ASSERT_TYPE_ASSERT, "(scrBlur->timeEnd - scrBlur->timeStart > 0.0f)", (const char *)&queryFormat, "scrBlur->timeEnd - scrBlur->timeStart > 0.0f") )
        __debugbreak();
      __asm
      {
        vxorps  xmm1, xmm1, xmm1
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, eax
        vcvtsi2ss xmm1, xmm1, edi
        vdivss  xmm6, xmm1, xmm0
        vcomiss xmm6, xmm7
        vmovaps xmm7, [rsp+58h+var_28]
      }
      if ( s_screenBlur[_RBX].timeEnd >= (unsigned int)s_screenBlur[_RBX].timeStart )
        __asm { vcomiss xmm6, cs:__real@3f800000 }
      __asm
      {
        vcvtss2sd xmm0, xmm6, xmm6
        vmovsd  [rsp+58h+var_30], xmm0
      }
      v20 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_blur.cpp", 94, ASSERT_TYPE_ASSERT, "( ( t >= 0 && t < 1 ) )", "( t ) = %g", v32);
      v21 = !v20;
      if ( v20 )
        __debugbreak();
      __asm
      {
        vmovss  xmm2, dword ptr [rbx+rsi+10h]
        vmovss  xmm3, dword ptr [rbx+rsi+14h]
        vsubss  xmm0, xmm3, xmm2
        vmulss  xmm1, xmm0, xmm6
        vaddss  xmm6, xmm1, xmm2
      }
    }
    __asm
    {
      vminss  xmm0, xmm2, xmm3
      vcomiss xmm6, xmm0
      vmaxss  xmm0, xmm2, xmm3
      vcomiss xmm6, xmm0
    }
    if ( !v21 )
    {
      __asm
      {
        vcvtss2sd xmm0, xmm6, xmm6
        vmovsd  [rsp+58h+var_30], xmm0
      }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_blur.cpp", 106, ASSERT_TYPE_ASSERT, "( ( blur >= I_fmin( scrBlur->start, scrBlur->end ) && blur <= I_fmax( scrBlur->start, scrBlur->end ) ) )", "( blur ) = %g", v33) )
        __debugbreak();
    }
    __asm
    {
      vmovss  dword ptr [rbx+rsi+18h], xmm6
      vmovaps xmm6, [rsp+58h+var_18]
    }
  }
}


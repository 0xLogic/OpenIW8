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
void CG_Blur(LocalClientNum_t localClientNum, int duration, float endBlur, BlurTime timeType, BlurPriority priority)
{
  __int64 v5; 
  cg_t *LocalClientGlobals; 
  float blurRadius; 
  ScreenBlur *v10; 
  int time; 
  float v12; 

  v5 = localClientNum;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( duration < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_blur.cpp", 25, ASSERT_TYPE_ASSERT, "(duration >= 0)", (const char *)&queryFormat, "duration >= 0") )
    __debugbreak();
  if ( endBlur < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_blur.cpp", 26, ASSERT_TYPE_ASSERT, "( ( endBlur >= 0 ) )", "( endBlur ) = %g", endBlur) )
    __debugbreak();
  blurRadius = LocalClientGlobals->refdef.blurRadius;
  if ( blurRadius < 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_blur.cpp", 27, ASSERT_TYPE_ASSERT, "( ( cgameGlob->refdef.blurRadius >= 0 ) )", "( cgameGlob->refdef.blurRadius ) = %g", blurRadius) )
    __debugbreak();
  v10 = &s_screenBlur[v5];
  if ( priority >= v10->priority )
  {
    if ( timeType == BLUR_TIME_ABSOLUTE )
      time = Sys_Milliseconds();
    else
      time = LocalClientGlobals->time;
    v10->timeStart = time;
    v10->timeEnd = duration + time;
    v12 = LocalClientGlobals->refdef.blurRadius;
    v10->end = endBlur;
    v10->start = v12;
    v10->time = timeType;
    v10->priority = priority;
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
  __int64 v4; 

  v2 = localClientNum;
  if ( !inBlur && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_blur.cpp", 175, ASSERT_TYPE_ASSERT, "(inBlur)", (const char *)&queryFormat, "inBlur") )
    __debugbreak();
  v4 = v2;
  *(_OWORD *)&s_screenBlur[v4].priority = *(_OWORD *)&inBlur->priority;
  *(double *)&s_screenBlur[v4].start = *(double *)&inBlur->start;
  s_screenBlur[v4].radius = inBlur->radius;
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
  if ( !outBlur && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_blur.cpp", 168, ASSERT_TYPE_ASSERT, "(outBlur)", (const char *)&queryFormat, "outBlur") )
    __debugbreak();
  *(_OWORD *)&outBlur->priority = *(_OWORD *)&s_screenBlur[v2].priority;
  *(double *)&outBlur->start = *(double *)&s_screenBlur[v2].start;
  outBlur->radius = s_screenBlur[v2].radius;
}

/*
==============
CG_Blur_SnapToTargetValue
==============
*/
void CG_Blur_SnapToTargetValue(LocalClientNum_t localClientNum)
{
  cg_t *LocalClientGlobals; 
  float blurTarget; 

  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( LocalClientGlobals->inKillCam )
  {
    if ( !CG_IsCinematicCameraActive(localClientNum) && !CG_View_IsKillCamEntityView(localClientNum) )
      goto LABEL_4;
LABEL_7:
    blurTarget = 0.0;
    goto LABEL_5;
  }
  if ( LocalClientGlobals->predictedPlayerState.pm_type == 5 )
    goto LABEL_7;
LABEL_4:
  blurTarget = CG_GetLocalClientGlobals(localClientNum)->predictedPlayerState.blurTarget;
LABEL_5:
  CG_Blur(localClientNum, 0, blurTarget, BLUR_TIME_RELATIVE, BLUR_PRIORITY_SCRIPT);
}

/*
==============
CG_Blur_Transition
==============
*/
void CG_Blur_Transition(LocalClientNum_t localClientNum)
{
  __int64 v1; 
  cg_t *LocalClientGlobals; 
  cg_t *v3; 
  cg_t *v4; 
  float blurTarget; 
  int v6; 
  int v7; 

  v1 = localClientNum;
  LocalClientGlobals = CG_GetLocalClientGlobals(localClientNum);
  if ( !LocalClientGlobals->inKillCam )
  {
    if ( LocalClientGlobals->predictedPlayerState.pm_type != 5 )
      goto LABEL_4;
LABEL_10:
    CG_Blur((LocalClientNum_t)v1, 0, 0.0, BLUR_TIME_RELATIVE, BLUR_PRIORITY_SCRIPT);
    return;
  }
  if ( CG_IsCinematicCameraActive((LocalClientNum_t)v1) || CG_View_IsKillCamEntityView((const LocalClientNum_t)v1) )
    goto LABEL_10;
LABEL_4:
  v3 = CG_GetLocalClientGlobals((const LocalClientNum_t)v1);
  v4 = CG_GetLocalClientGlobals((const LocalClientNum_t)v1);
  blurTarget = v4->predictedPlayerState.blurTarget;
  if ( blurTarget != s_screenBlur[v1].end )
  {
    v6 = 0;
    v7 = v4->predictedPlayerState.blurEndTime - v3->time;
    if ( v7 > 0 )
      v6 = v7;
    CG_Blur((LocalClientNum_t)v1, v6, blurTarget, BLUR_TIME_RELATIVE, BLUR_PRIORITY_SCRIPT);
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
  __int64 v1; 

  v1 = localClientNum;
  if ( CG_View_IsKillCamEntityView(localClientNum) )
    return 0.0;
  else
    return s_screenBlur[v1].radius;
}

/*
==============
CG_ScreenBlur
==============
*/
void CG_ScreenBlur(LocalClientNum_t localClientNum)
{
  __int64 v1; 
  int time; 
  int timeStart; 
  int timeEnd; 
  float v5; 
  float end; 

  v1 = localClientNum;
  time = CG_GetLocalClientGlobals(localClientNum)->time;
  if ( s_screenBlur[v1].time == BLUR_TIME_ABSOLUTE )
    time = Sys_Milliseconds();
  timeStart = s_screenBlur[v1].timeStart;
  if ( timeStart )
  {
    if ( timeStart > time && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_blur.cpp", 87, ASSERT_TYPE_ASSERT, "(scrBlur->timeStart <= time)", (const char *)&queryFormat, "scrBlur->timeStart <= time") )
      __debugbreak();
    if ( s_screenBlur[v1].timeStart > s_screenBlur[v1].timeEnd && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_blur.cpp", 88, ASSERT_TYPE_ASSERT, "(scrBlur->timeStart <= scrBlur->timeEnd)", (const char *)&queryFormat, "scrBlur->timeStart <= scrBlur->timeEnd") )
      __debugbreak();
    timeEnd = s_screenBlur[v1].timeEnd;
    if ( time >= timeEnd )
    {
      end = s_screenBlur[v1].end;
      _XMM2 = LODWORD(s_screenBlur[v1].start);
      *(_QWORD *)&s_screenBlur[v1].timeStart = 0i64;
      s_screenBlur[v1].priority = BLUR_PRIORITY_NONE;
    }
    else
    {
      if ( (float)(timeEnd - s_screenBlur[v1].timeStart) <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_blur.cpp", 92, ASSERT_TYPE_ASSERT, "(scrBlur->timeEnd - scrBlur->timeStart > 0.0f)", (const char *)&queryFormat, "scrBlur->timeEnd - scrBlur->timeStart > 0.0f") )
        __debugbreak();
      v5 = (float)(time - s_screenBlur[v1].timeStart) / (float)(s_screenBlur[v1].timeEnd - s_screenBlur[v1].timeStart);
      if ( (v5 < 0.0 || v5 >= 1.0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_blur.cpp", 94, ASSERT_TYPE_ASSERT, "( ( t >= 0 && t < 1 ) )", "( t ) = %g", v5) )
        __debugbreak();
      _XMM2 = LODWORD(s_screenBlur[v1].start);
      end = (float)((float)(s_screenBlur[v1].end - *(float *)&_XMM2) * v5) + *(float *)&_XMM2;
    }
    __asm { vminss  xmm0, xmm2, xmm3 }
    if ( end < *(float *)&_XMM0 )
      goto LABEL_27;
    __asm { vmaxss  xmm0, xmm2, xmm3 }
    if ( end > *(float *)&_XMM0 )
    {
LABEL_27:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_blur.cpp", 106, ASSERT_TYPE_ASSERT, "( ( blur >= I_fmin( scrBlur->start, scrBlur->end ) && blur <= I_fmax( scrBlur->start, scrBlur->end ) ) )", "( blur ) = %g", end) )
        __debugbreak();
    }
    s_screenBlur[v1].radius = end;
  }
}


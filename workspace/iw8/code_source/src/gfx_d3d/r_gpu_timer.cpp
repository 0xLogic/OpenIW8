/*
==============
R_GPU_GetMainTotals
==============
*/

void __fastcall R_GPU_GetMainTotals(float *pOutSunShadow, float *pOutSpotShadow, float *pOutDepthHack, float *pOutOpaque, float *pOutTrans, float *pOutEmiss, float *pOutLighting, float *pOutVolumetrics, float *pOutDxr, float *pOutPostFx, float *pOutAntiAliasing, float *pOutUI, float *pOutCompute)
{
  ?R_GPU_GetMainTotals@@YAXPEAM000000000000@Z(pOutSunShadow, pOutSpotShadow, pOutDepthHack, pOutOpaque, pOutTrans, pOutEmiss, pOutLighting, pOutVolumetrics, pOutDxr, pOutPostFx, pOutAntiAliasing, pOutUI, pOutCompute);
}

/*
==============
RB_GPU_DrawTimers
==============
*/

void __fastcall RB_GPU_DrawTimers(GfxCmdBufContext *gfxContext)
{
  ?RB_GPU_DrawTimers@@YAXUGfxCmdBufContext@@@Z(gfxContext);
}

/*
==============
R_GPU_InitTimers
==============
*/

void R_GPU_InitTimers(void)
{
  ?R_GPU_InitTimers@@YAXXZ();
}

/*
==============
R_GPU_BeginTimer
==============
*/

void __fastcall R_GPU_BeginTimer(GPUTimerId timerId)
{
  ?R_GPU_BeginTimer@@YAXW4GPUTimerId@@@Z(timerId);
}

/*
==============
R_GPU_EndTimer
==============
*/

void R_GPU_EndTimer(void)
{
  ?R_GPU_EndTimer@@YAXXZ();
}

/*
==============
R_GPU_SetupGpuTimerPage
==============
*/

void R_GPU_SetupGpuTimerPage(void)
{
  ?R_GPU_SetupGpuTimerPage@@YAXXZ();
}

/*
==============
R_GPU_BeginFrame
==============
*/

void __fastcall R_GPU_BeginFrame(int frameCount, bool splitscreen)
{
  ?R_GPU_BeginFrame@@YAXH_N@Z(frameCount, splitscreen);
}

/*
==============
R_GPU_RecordLatencyEvent
==============
*/

void __fastcall R_GPU_RecordLatencyEvent(LatencyEventID eventID, unsigned int frame)
{
  ?R_GPU_RecordLatencyEvent@@YAXW4LatencyEventID@@I@Z(eventID, frame);
}

/*
==============
R_GPU_GetFullFrameTimeMicroseconds
==============
*/

unsigned __int64 __fastcall R_GPU_GetFullFrameTimeMicroseconds()
{
  return ?R_GPU_GetFullFrameTimeMicroseconds@@YA_KXZ();
}

/*
==============
R_GPU_SetMainPageDisplayType
==============
*/

void R_GPU_SetMainPageDisplayType(void)
{
  ?R_GPU_SetMainPageDisplayType@@YAXXZ();
}

/*
==============
R_GPU_TimerGetColor
==============
*/

const GfxColor *__fastcall R_GPU_TimerGetColor(GPUTimerId timerId)
{
  return ?R_GPU_TimerGetColor@@YAPEBTGfxColor@@W4GPUTimerId@@@Z(timerId);
}

/*
==============
R_GPU_EndFrameCallback
==============
*/

void __fastcall R_GPU_EndFrameCallback(unsigned __int64 callbackGpuTime, bool isProfileEnabled)
{
  ?R_GPU_EndFrameCallback@@YAX_K_N@Z(callbackGpuTime, isProfileEnabled);
}

/*
==============
R_GPU_GetMicroseconds
==============
*/

unsigned __int64 __fastcall R_GPU_GetMicroseconds()
{
  return ?R_GPU_GetMicroseconds@@YA_KXZ();
}

/*
==============
R_GPU_LogTimers
==============
*/

void R_GPU_LogTimers(void)
{
  ?R_GPU_LogTimers@@YAXXZ();
}

/*
==============
R_GPU_SetDrawTopOffset
==============
*/

void __fastcall R_GPU_SetDrawTopOffset(float x, float y)
{
  ?R_GPU_SetDrawTopOffset@@YAXMM@Z(x, y);
}

/*
==============
MoveToTargetPos
==============
*/

void MoveToTargetPos(void)
{
  ?MoveToTargetPos@@YAXXZ();
}

/*
==============
RB_GPU_AddDynamicResolution
==============
*/

void __fastcall RB_GPU_AddDynamicResolution(unsigned int dynamicWidthIndex, int delta, float previousFrameDuration)
{
  ?RB_GPU_AddDynamicResolution@@YAXIHM@Z(dynamicWidthIndex, delta, previousFrameDuration);
}

/*
==============
R_GPU_AddHistogramSwap
==============
*/

void __fastcall R_GPU_AddHistogramSwap(unsigned __int64 swapTimeUs)
{
  ?R_GPU_AddHistogramSwap@@YAX_K@Z(swapTimeUs);
}

/*
==============
R_GPU_TimerSetGameModeBudget
==============
*/

void __fastcall R_GPU_TimerSetGameModeBudget(bool isSpMode)
{
  ?R_GPU_TimerSetGameModeBudget@@YAX_N@Z(isSpMode);
}

/*
==============
R_GPU_RecordLatencyStatistics
==============
*/

void __fastcall R_GPU_RecordLatencyStatistics(unsigned int frameCount, const _DXGIX_FRAME_STATISTICS *statistics)
{
  ?R_GPU_RecordLatencyStatistics@@YAXIPEBU_DXGIX_FRAME_STATISTICS@@@Z(frameCount, statistics);
}

/*
==============
GetGPUTimerLevel
==============
*/

GPUTimerLevel __fastcall GetGPUTimerLevel(GPUTimerId id)
{
  return ?GetGPUTimerLevel@@YA?AW4GPUTimerLevel@@W4GPUTimerId@@@Z(id);
}

/*
==============
RB_GPU_UpdateFullFrameTime
==============
*/

void RB_GPU_UpdateFullFrameTime(void)
{
  ?RB_GPU_UpdateFullFrameTime@@YAXXZ();
}

/*
==============
R_GPU_BeginRunDrawListTimer
==============
*/

void __fastcall R_GPU_BeginRunDrawListTimer(const GfxDrawListType drawListType)
{
  ?R_GPU_BeginRunDrawListTimer@@YAXW4GfxDrawListType@@@Z(drawListType);
}

/*
==============
R_GPU_IsProfileEnabled
==============
*/

bool __fastcall R_GPU_IsProfileEnabled()
{
  return ?R_GPU_IsProfileEnabled@@YA_NXZ();
}

/*
==============
R_GPU_BeginRunDrawListTimerOffset
==============
*/

void __fastcall R_GPU_BeginRunDrawListTimerOffset(const GfxDrawListType drawListType, unsigned int offset)
{
  ?R_GPU_BeginRunDrawListTimerOffset@@YAXW4GfxDrawListType@@I@Z(drawListType, offset);
}

/*
==============
R_GPU_EndFrame
==============
*/

void R_GPU_EndFrame(void)
{
  ?R_GPU_EndFrame@@YAXXZ();
}

/*
==============
R_GPU_WriteTimerCounters
==============
*/

void R_GPU_WriteTimerCounters(void)
{
  ?R_GPU_WriteTimerCounters@@YAXXZ();
}

/*
==============
R_GPU_TimerGetName
==============
*/

const char *__fastcall R_GPU_TimerGetName(GPUTimerId timerId)
{
  return ?R_GPU_TimerGetName@@YAPEBDW4GPUTimerId@@@Z(timerId);
}

/*
==============
R_GPU_ShutdownTimers
==============
*/

void R_GPU_ShutdownTimers(void)
{
  ?R_GPU_ShutdownTimers@@YAXXZ();
}

/*
==============
R_GPU_SetAllTimerPageDisplayType
==============
*/

void R_GPU_SetAllTimerPageDisplayType(void)
{
  ?R_GPU_SetAllTimerPageDisplayType@@YAXXZ();
}

/*
==============
GetGPUTimerLevel
==============
*/
__int64 GetGPUTimerLevel(GPUTimerId id)
{
  return (unsigned int)g_gpuTimerLevels[id];
}

/*
==============
MoveToTargetPos
==============
*/
void MoveToTargetPos(void)
{
  float v0; 
  __int128 v1; 
  float v5; 
  float v6; 

  v1 = LODWORD(s_drawTopOffsetTarget.v[1]);
  v0 = s_drawTopOffsetTarget.v[1] - s_drawTopOffset.v[1];
  *(float *)&v1 = fsqrt((float)(v0 * v0) + (float)((float)(s_drawTopOffsetTarget.v[0] - s_drawTopOffset.v[0]) * (float)(s_drawTopOffsetTarget.v[0] - s_drawTopOffset.v[0])));
  _XMM3 = v1;
  __asm
  {
    vcmpless xmm0, xmm3, cs:__real@80000000
    vblendvps xmm0, xmm3, xmm1, xmm0
  }
  v5 = 1.0 / *(float *)&_XMM0;
  v6 = (float)(s_drawTopOffsetTarget.v[0] - s_drawTopOffset.v[0]) * (float)(1.0 / *(float *)&_XMM0);
  if ( *(float *)&v1 <= 177.0 )
  {
    s_drawTopOffset = s_drawTopOffsetTarget;
  }
  else
  {
    s_drawTopOffset.v[1] = s_drawTopOffset.v[1] + (float)((float)(v0 * v5) * 125.0);
    s_drawTopOffset.v[0] = s_drawTopOffset.v[0] + (float)(v6 * 125.0);
  }
}

/*
==============
RB_GPU_AddDynamicResolution
==============
*/
void RB_GPU_AddDynamicResolution(unsigned int dynamicWidthIndex, int delta, float previousFrameDuration)
{
  char v3; 
  __int64 v4; 
  __int64 swapIndex; 
  int v7; 

  v3 = delta;
  v4 = dynamicWidthIndex;
  if ( dynamicWidthIndex >= 0x10 )
  {
    v7 = 16;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_gpu_timer.cpp", 1074, ASSERT_TYPE_ASSERT, "(unsigned)( dynamicWidthIndex ) < (unsigned)( 16 )", "dynamicWidthIndex doesn't index R_DYNAMIC_SCENE_RESOLUTION_COUNT\n\t%i not in [0, %i)", dynamicWidthIndex, v7) )
      __debugbreak();
  }
  swapIndex = s_frameHistogram.swapIndex;
  ++*(_QWORD *)s_gpuDynamicResolutionHistogram.horror[2 * v4 - 32].array;
  s_gpuDynamicResolutionHistogram.current = v4;
  s_frameHistogram.dynamicWidth[swapIndex] = v4;
  s_frameHistogram.delta[s_frameHistogram.swapIndex] = v3;
  s_frameHistogram.previousFrameDuration[s_frameHistogram.swapIndex] = previousFrameDuration;
}

/*
==============
RB_GPU_DrawFrameHistogram
==============
*/
void RB_GPU_DrawFrameHistogram(GfxCmdBufContext *context)
{
  __int128 leftEdgeX_low; 
  __int128 topEdgeY_low; 
  float tickWidth; 
  float tickHeight; 
  float v5; 
  float v6; 
  unsigned __int64 *swapTime; 
  char *delta; 
  unsigned int v10; 
  float *previousFrameDuration; 
  __int64 v12; 
  unsigned __int64 v13; 
  signed __int64 v14; 
  __int128 v15; 
  __int128 v16; 
  __int128 v17; 
  __int128 v18; 
  float tickMaxUs; 
  float v20; 
  __int128 v22; 
  unsigned int packed; 
  float v25; 
  int v26; 
  float v27; 
  int v28; 
  float v29; 
  int v30; 
  float v31; 
  int v32; 
  float v33; 
  float v34; 
  float v35; 
  const dvar_t *v36; 
  float value; 
  float v38; 
  float v39; 
  const dvar_t *v40; 
  float v41; 
  GfxCmdBufContext v42; 
  float v43; 
  float v44; 
  float v45; 
  __int128 v46; 
  __int128 v47; 
  GfxCmdBufContext v48; 

  leftEdgeX_low = LODWORD(s_gpuFrameHistogramStyle.leftEdgeX);
  topEdgeY_low = LODWORD(s_gpuFrameHistogramStyle.topEdgeY);
  tickWidth = s_gpuFrameHistogramStyle.tickWidth;
  tickHeight = s_gpuFrameHistogramStyle.tickHeight;
  v5 = FLOAT_1_8446744e19;
  v6 = FLOAT_0_5;
  swapTime = s_frameHistogram.swapTime;
  delta = s_frameHistogram.delta;
  v10 = 1;
  previousFrameDuration = s_frameHistogram.previousFrameDuration;
  v12 = 180i64;
  do
  {
    v13 = *(_QWORD *)&s_frameHistogram.dynamicWidth[8 * ((v10 + 178) % 0xB4) - 1440];
    v14 = 0i64;
    if ( *swapTime > v13 )
      v14 = 16667 * ((*swapTime - v13 + 8334) / 0x411B);
    v16 = 0i64;
    *(float *)&v16 = (float)v14;
    v15 = v16;
    if ( v14 < 0 )
    {
      *(float *)&v16 = *(float *)&v16 + v5;
      v15 = v16;
    }
    v18 = v15;
    *(float *)&v18 = *(float *)&v15 * tickHeight;
    v17 = v18;
    tickMaxUs = (float)(__int64)s_gpuFrameHistogramStyle.tickMaxUs;
    if ( (s_gpuFrameHistogramStyle.tickMaxUs & 0x8000000000000000ui64) != 0i64 )
    {
      v20 = (float)(__int64)s_gpuFrameHistogramStyle.tickMaxUs;
      tickMaxUs = v20 + v5;
    }
    v22 = v17;
    *(float *)&v22 = *(float *)&v17 / tickMaxUs;
    _XMM0 = v22;
    __asm { vminss  xmm2, xmm0, xmm11 }
    if ( v14 <= s_gpuFrameHistogramStyle.tickMaxUs )
    {
      packed = s_gpuFrameHistogramStyle.swapColor.packed;
      if ( v14 > s_gpuFrameHistogramStyle.tickBudgetUs )
        packed = s_gpuFrameHistogramStyle.overBudgetColor.packed;
    }
    else
    {
      packed = s_gpuFrameHistogramStyle.overMaxColor.packed;
    }
    v25 = tickHeight + *(float *)&topEdgeY_low;
    v48 = *context;
    RB_DrawStretchPic(&v48, rgp.whiteMaterial, *(float *)&leftEdgeX_low, (float)(tickHeight + *(float *)&topEdgeY_low) - *(float *)&_XMM2, tickWidth, *(float *)&_XMM2, 0.0, 0.0, 1.0, 1.0, packed, GFX_PRIM_STATS_DEBUG);
    if ( *delta <= 0 )
    {
      if ( *delta < 0 )
      {
        v30 = 0;
        v31 = tickWidth * v6;
        v32 = 0;
        do
        {
          v48 = *context;
          RB_DrawTriangle2D(&v48, v31 + *(float *)&leftEdgeX_low, (float)((float)((float)v32 + *(float *)&topEdgeY_low) + tickHeight) + 2.0, tickWidth + *(float *)&leftEdgeX_low, (float)((float)((float)((float)v32 + *(float *)&topEdgeY_low) + tickHeight) + 2.0) + v31, *(float *)&leftEdgeX_low, (float)((float)((float)((float)v32 + *(float *)&topEdgeY_low) + tickHeight) + 2.0) + v31, s_gpuFrameHistogramStyle.endFrameColor.packed);
          --v30;
          v32 += 3;
        }
        while ( v30 > *delta );
        v5 = FLOAT_1_8446744e19;
        if ( !*(delta - 180) )
        {
          v48 = *context;
          v29 = (float)(tickHeight + *(float *)&topEdgeY_low) + 1.0;
          goto LABEL_22;
        }
      }
    }
    else
    {
      v26 = 0;
      v27 = tickWidth * v6;
      v28 = 0;
      do
      {
        v48 = *context;
        RB_DrawTriangle2D(&v48, *(float *)&leftEdgeX_low, (float)((float)((float)v28 + *(float *)&topEdgeY_low) + tickHeight) + 1.0, tickWidth + *(float *)&leftEdgeX_low, (float)((float)((float)v28 + *(float *)&topEdgeY_low) + tickHeight) + 1.0, v27 + *(float *)&leftEdgeX_low, (float)((float)((float)((float)v28 + *(float *)&topEdgeY_low) + tickHeight) + 1.0) + v27, s_gpuFrameHistogramStyle.endFrameColor.packed);
        ++v26;
        v28 += 3;
      }
      while ( v26 < *delta );
      if ( *(delta - 180) == 15 )
      {
        v48 = *context;
        v29 = (float)((float)((float)((float)(3 * v26 - 3) + *(float *)&topEdgeY_low) + tickHeight) + 1.0) + v27;
LABEL_22:
        RB_DrawRect2D(&v48, *(float *)&leftEdgeX_low, v29, tickWidth - 1.0, 1.0, s_gpuFrameHistogramStyle.endFrameColor);
      }
    }
    v33 = (float)(tickHeight * *previousFrameDuration) * 1000.0;
    v48 = *context;
    v34 = (float)(__int64)s_gpuFrameHistogramStyle.tickMaxUs;
    if ( (s_gpuFrameHistogramStyle.tickMaxUs & 0x8000000000000000ui64) != 0i64 )
    {
      v35 = (float)(__int64)s_gpuFrameHistogramStyle.tickMaxUs;
      v34 = v35 + v5;
    }
    RB_DrawStretchPic(&v48, rgp.whiteMaterial, *(float *)&leftEdgeX_low + 2.0, v25 - (float)(v33 / v34), 2.0, 1.0, 0.0, 0.0, 1.0, 1.0, s_gpuFrameHistogramStyle.durationColor.packed, GFX_PRIM_STATS_DEBUG);
    v36 = DVARFLT_r_sceneResDynamicTarget;
    if ( !DVARFLT_r_sceneResDynamicTarget && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_sceneResDynamicTarget") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v36);
    value = v36->current.value;
    v48 = *context;
    v38 = (float)(__int64)s_gpuFrameHistogramStyle.tickMaxUs;
    if ( (s_gpuFrameHistogramStyle.tickMaxUs & 0x8000000000000000ui64) != 0i64 )
    {
      v39 = (float)(__int64)s_gpuFrameHistogramStyle.tickMaxUs;
      v38 = v39 + v5;
    }
    RB_DrawStretchPic(&v48, rgp.whiteMaterial, *(float *)&leftEdgeX_low, v25 - (float)((float)((float)(value * tickHeight) * 1000.0) / v38), 2.0, 1.0, 0.0, 0.0, 1.0, 1.0, s_gpuFrameHistogramStyle.overBudgetColor.packed, GFX_PRIM_STATS_DEBUG);
    v40 = DCONST_DVARVEC4_r_sceneResDynamicThreshold;
    if ( !DCONST_DVARVEC4_r_sceneResDynamicThreshold && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 741, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_sceneResDynamicThreshold") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v40);
    v41 = v40->current.vector.v[1];
    LODWORD(v48.source) = v40->current.integer;
    *(float *)&v48.state = v40->current.vector.v[2];
    v42 = *context;
    *((float *)&v48.source + 1) = v41;
    v43 = v40->current.vector.v[3];
    v48 = v42;
    v44 = (float)(__int64)s_gpuFrameHistogramStyle.tickMaxUs;
    if ( (s_gpuFrameHistogramStyle.tickMaxUs & 0x8000000000000000ui64) != 0i64 )
    {
      v45 = (float)(__int64)s_gpuFrameHistogramStyle.tickMaxUs;
      v44 = v45 + v5;
    }
    RB_DrawStretchPic(&v48, rgp.whiteMaterial, *(float *)&leftEdgeX_low, v25 - (float)((float)((float)((float)(v43 * value) * tickHeight) * 1000.0) / v44), 2.0, 1.0, 0.0, 0.0, 1.0, 1.0, s_gpuFrameHistogramStyle.endFrameColor.packed, GFX_PRIM_STATS_DEBUG);
    if ( v10 % s_gpuFrameHistogramStyle.swapColumns )
    {
      v47 = leftEdgeX_low;
      *(float *)&v47 = *(float *)&leftEdgeX_low + (float)(s_gpuFrameHistogramStyle.padWidth + s_gpuFrameHistogramStyle.tickWidth);
      leftEdgeX_low = v47;
    }
    else
    {
      leftEdgeX_low = LODWORD(s_gpuFrameHistogramStyle.leftEdgeX);
      v46 = topEdgeY_low;
      *(float *)&v46 = *(float *)&topEdgeY_low + (float)(s_gpuFrameHistogramStyle.rowPadHeight + s_gpuFrameHistogramStyle.tickHeight);
      topEdgeY_low = v46;
    }
    v6 = FLOAT_0_5;
    ++v10;
    ++swapTime;
    ++delta;
    ++previousFrameDuration;
    --v12;
  }
  while ( v12 );
  v48 = *context;
  RB_EndSurfaceIfNeeded(&v48);
}

/*
==============
RB_GPU_DrawLatencyHistogram
==============
*/
void RB_GPU_DrawLatencyHistogram(GfxCmdBufContext *context)
{
  int v1; 
  __int128 width_low; 
  float rightTime; 
  __int128 v5; 
  __int128 v6; 
  volatile unsigned int latencyIndex; 
  unsigned int v8; 
  double v9; 
  float v10; 
  __int128 v11; 
  __int128 v12; 
  __int64 v13; 
  __int128 v14; 
  __int128 v16; 
  float v17; 
  __int64 v18; 
  __int128 v21; 
  __int128 v23; 
  Material *whiteMaterial; 
  __int128 v28; 
  __int128 v34; 
  __int128 v35; 
  __int128 v36; 
  __int128 v37; 
  float v38; 
  const char *v39; 
  float v40; 
  GfxCmdBufContext v41; 
  __int128 v42; 
  GfxCmdBufContext v43; 
  int v44; 
  const char **v45; 
  __int64 v46; 
  GfxColor *v47; 
  GfxColor v48; 
  const char *v49; 
  float v50; 
  GfxColor textColor; 
  GfxFont *eventFont; 
  float v53; 
  const char *v54; 
  GfxColor v55; 
  GfxFont *v56; 
  float v57; 
  const char *v58; 
  GfxColor v59; 
  GfxFont *v60; 
  float v61; 
  const char *v62; 
  const wchar_t **v63; 
  __int128 v66; 
  __int128 v68; 
  unsigned int packed; 
  float v71; 
  float v72; 
  _QWORD v73[3]; 
  GfxCmdBufContext v74; 
  GfxCmdBufContext v75; 
  GfxCmdBufContext v76; 
  GfxCmdBufContext v77; 
  GfxCmdBufContext v78; 
  GfxCmdBufContext v79; 
  GfxCmdBufContext v80; 
  GfxCmdBufContext v81; 
  GfxCmdBufContext v82; 
  GfxPointVertex v83; 
  __int64 v84; 
  __int64 v85; 
  __int128 v86; 
  int v87; 
  int v88; 
  int v89[5]; 
  float v90; 
  int v91[5]; 
  float v92; 

  v1 = 0;
  if ( s_gpuLatencyHistogram.drawEnabled )
  {
    if ( !s_gpuLatencyHistogram.calcEnabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_gpu_timer.cpp", 1219, ASSERT_TYPE_ASSERT, "(s_gpuLatencyHistogram.calcEnabled)", (const char *)&queryFormat, "s_gpuLatencyHistogram.calcEnabled") )
      __debugbreak();
    width_low = LODWORD(s_gpuLatencyHistogram.width);
    rightTime = s_gpuLatencyHistogram.rightTime;
    v5 = 0i64;
    *(float *)&v5 = (float)vidConfig.displayWidth;
    *(float *)&v5 = (float)(*(float *)&v5 - s_gpuLatencyHistogram.width) - s_gpuLatencyHistogram.rightPad;
    v6 = v5;
    *(float *)&v5 = (float)vidConfig.displayHeight;
    v71 = s_gpuLatencyHistogram.rightTime;
    *((float *)v73 + 1) = (float)(*(float *)&v5 - (float)((float)(s_gpuLatencyHistogram.eventFontHeight * 4.0) + 200.0)) - s_gpuLatencyHistogram.bottomPad;
    *(GfxCmdBufContext *)&v73[1] = *context;
    RB_DrawStretchPic((GfxCmdBufContext *)&v73[1], rgp.whiteMaterial, *(float *)&v6, *((float *)v73 + 1), s_gpuLatencyHistogram.width, (float)(s_gpuLatencyHistogram.eventFontHeight * 4.0) + 200.0, 0.0, 0.0, 1.0, 1.0, s_gpuLatencyHistogram.backColor.packed, GFX_PRIM_STATS_DEBUG);
    latencyIndex = s_gpuLatencyHistogram.latencyIndex;
    v8 = 0;
    v87 = _xmm;
    v88 = _xmm;
    v86 = _xmm;
    v9 = 1.0 / rightTime;
    v10 = *((float *)v73 + 1) + 199.0;
    *(float *)v91 = 0.0;
    *(float *)v89 = 0.0;
    *(float *)&v91[1] = 0.0;
    *(float *)&v89[1] = 0.0;
    *(float *)&v91[2] = 0.0;
    *(float *)&v89[2] = 0.0;
    *(float *)&v91[3] = 0.0;
    *(float *)&v89[3] = 0.0;
    *(float *)&v91[4] = 0.0;
    *(float *)&v89[4] = 0.0;
    v92 = 0.0;
    v90 = 0.0;
    v12 = v6;
    *(float *)&v12 = *(float *)&v6 + *(float *)&width_low;
    v11 = v12;
    do
    {
      v13 = 0i64;
      v14 = v11;
      v16 = 0i64;
      *(float *)&v16 = (float)v8;
      _XMM0 = v16;
      v17 = v10 - *(float *)&v16;
      v18 = 6 * ((v8 + latencyIndex) % 0xC8) + 5;
      do
      {
        __asm
        {
          vxorpd  xmm0, xmm0, xmm0
          vcvtsi2sd xmm0, xmm0, rcx
        }
        if ( (s_gpuLatencyHistogram.latency[v18] & 0x8000000000000000ui64) != 0i64 )
        {
          *((_QWORD *)&v21 + 1) = *((_QWORD *)&_XMM0 + 1);
          *(double *)&v21 = *(double *)&_XMM0 + 1.844674407370955e19;
          _XMM0 = v21;
        }
        *((_QWORD *)&v23 + 1) = *((_QWORD *)&_XMM0 + 1);
        *(double *)&v23 = *(double *)&_XMM0 * msecPerRawTimerTick;
        _XMM4 = v23;
        whiteMaterial = rgp.whiteMaterial;
        packed = s_latencyEventColors[v13 + 5].packed;
        __asm
        {
          vcvtsd2ss xmm1, xmm4, xmm4
          vminss  xmm0, xmm1, [rbp+rbx+140h+var_FC]
          vmaxss  xmm1, xmm1, [rbp+rbx+140h+var_CC]
        }
        v89[v13 - 1] = _XMM0;
        *(float *)((char *)&v92 + v13 * 4) = *(float *)&_XMM1;
        *((_QWORD *)&v23 + 1) = *((_QWORD *)&width_low + 1);
        *(double *)&v23 = *(float *)&width_low;
        v28 = v23;
        *((_QWORD *)&v23 + 1) = *((_QWORD *)&_XMM4 + 1);
        *(double *)&v23 = *(double *)&_XMM4 * 0.005;
        _XMM0 = v23;
        __asm { vcvtsd2ss xmm1, xmm0, xmm0 }
        *(float *)&v91[v13 - 1] = *(float *)&_XMM1 + *(float *)&v91[v13 - 1];
        *((_QWORD *)&v23 + 1) = *((_QWORD *)&v28 + 1);
        *(double *)&v23 = *(double *)&v28 - *(double *)&v28 * *(double *)&_XMM4 * v9;
        _XMM2 = v23;
        __asm
        {
          vcvtsd2ss xmm3, xmm2, xmm2
          vmaxss  xmm0, xmm3, xmm7
        }
        v35 = _XMM0;
        *(float *)&v35 = *(float *)&_XMM0 + *(float *)&v6;
        v34 = v35;
        v36 = v14;
        *(float *)&v36 = *(float *)&v14 - *(float *)&v34;
        _XMM0 = v36;
        v74 = *context;
        RB_DrawStretchPic(&v74, whiteMaterial, *(float *)&v34, v17, *(float *)&v14 - *(float *)&v34, 1.0, 0.0, 0.0, 1.0, 1.0, packed, GFX_PRIM_STATS_DEBUG);
        v18 = (unsigned int)(v18 - 1);
        --v13;
        v14 = v34;
      }
      while ( v13 >= -5 );
      v10 = *((float *)v73 + 1) + 199.0;
      ++v8;
    }
    while ( v8 < 0xC8 );
    v72 = *((float *)v73 + 1) + 200.0;
    *(_QWORD *)&v83.xyz.z = 0x3CFFFFFF00000000i64;
    v85 = 0x3CFFFFFF00000000i64;
    *(_QWORD *)v83.xyz.v = 0i64;
    v84 = 0i64;
    v37 = 0i64;
    v38 = *(float *)&v6 + *(float *)&width_low;
    if ( v71 >= 0.0 )
    {
      do
      {
        if ( *(float *)&v37 == 0.0 )
          v39 = "vblank";
        else
          v39 = j_va("%dms", (unsigned int)(int)*(float *)&v37);
        v40 = (float)(*(float *)&v37 * *(float *)&width_low) * (float)(1.0 / v71);
        v75 = *context;
        RB_DrawText(&v75, v39, s_gpuLatencyHistogram.tickFont, v38 - v40, *((float *)v73 + 1), s_gpuLatencyHistogram.textColor);
        v41 = *context;
        v83.xyz.v[0] = v38 - v40;
        v83.xyz.v[1] = *((float *)v73 + 1);
        v83.xyz.v[2] = 0.0;
        *(float *)&v84 = v38 - v40;
        *((float *)&v84 + 1) = *((float *)v73 + 1) + 200.0;
        *(float *)&v85 = 0.0;
        v76 = v41;
        RB_DrawLines2D(&v76, 1, 1, &v83);
        v42 = v37;
        *(float *)&v42 = *(float *)&v37 + s_gpuLatencyHistogram.tickTime;
        v37 = v42;
      }
      while ( *(float *)&v42 <= v71 );
    }
    v43 = *context;
    v83.xyz.v[0] = *(float *)&v6;
    v83.xyz.v[1] = *((float *)v73 + 1) + 200.0;
    v83.xyz.v[2] = 0.0;
    *(float *)&v84 = *(float *)&v6 + *(float *)&width_low;
    *((float *)&v84 + 1) = *((float *)v73 + 1) + 200.0;
    *(float *)&v85 = 0.0;
    v77 = v43;
    RB_DrawLines2D(&v77, 1, 1, &v83);
    v44 = 0;
    v45 = s_latencyEventNames;
    v46 = 0i64;
    v47 = s_latencyEventColors;
    do
    {
      v48 = *v47;
      v49 = *v45;
      v78 = *context;
      v50 = (float)((float)((float)v44 * *(float *)&width_low) * 0.16666667) + *(float *)&v6;
      RB_DrawText(&v78, v49, s_gpuLatencyHistogram.eventFont, v50, v72 + s_gpuLatencyHistogram.eventFontHeight, v48);
      textColor = s_gpuLatencyHistogram.textColor;
      eventFont = s_gpuLatencyHistogram.eventFont;
      v53 = (float)(2.0 * s_gpuLatencyHistogram.eventFontHeight) + v72;
      v54 = j_va("%.2fms", *(float *)((char *)&v86 + v46 * 4));
      v79 = *context;
      RB_DrawText(&v79, v54, eventFont, v50, v53, textColor);
      v55 = s_gpuLatencyHistogram.textColor;
      v56 = s_gpuLatencyHistogram.eventFont;
      v57 = (float)(3.0 * s_gpuLatencyHistogram.eventFontHeight) + v72;
      v58 = j_va("%.2fms", v89[v46]);
      v80 = *context;
      RB_DrawText(&v80, v58, v56, v50, v57, v55);
      v59 = s_gpuLatencyHistogram.textColor;
      v60 = s_gpuLatencyHistogram.eventFont;
      v61 = (float)(4.0 * s_gpuLatencyHistogram.eventFontHeight) + v72;
      v62 = j_va("%.2fms", v91[v46]);
      v81 = *context;
      RB_DrawText(&v81, v62, v60, (float)((float)((float)v44++ * *(float *)&width_low) * 0.16666667) + *(float *)&v6, v61, v59);
      ++v47;
      ++v45;
      ++v46;
    }
    while ( v44 < 6 );
    v82 = *context;
    RB_EndSurfaceIfNeeded(&v82);
    v1 = 0;
  }
  if ( s_gpuLatencyHistogram.calcEnabled )
  {
    v63 = s_latencyEventNamesW;
    do
    {
      _XMM0 = 0i64;
      __asm { vcvtsi2sd xmm0, xmm0, rax }
      if ( (s_gpuLatencyHistogram.latency[v1 + 6 * s_gpuLatencyHistogram.latencyIndex] & 0x8000000000000000ui64) != 0i64 )
      {
        *((_QWORD *)&v66 + 1) = *((_QWORD *)&_XMM0 + 1);
        *(double *)&v66 = *(double *)&_XMM0 + 1.844674407370955e19;
        _XMM0 = v66;
      }
      *((_QWORD *)&v68 + 1) = *((_QWORD *)&_XMM0 + 1);
      *(double *)&v68 = *(double *)&_XMM0 * msecPerRawTimerTick;
      _XMM0 = v68;
      __asm { vcvtsd2ss xmm1, xmm0, xmm0 }
      PIXReportCounter_0(*v63);
      ++v1;
      ++v63;
    }
    while ( (__int64)v63 < (__int64)&RDBG_WELCOME_RAW_1462 );
  }
}

/*
==============
RB_GPU_DrawTimerTrees
==============
*/
void RB_GPU_DrawTimerTrees(GfxCmdBufContext *gfxContext)
{
  __int128 v1; 
  __int128 v2; 
  TimerTree *DrawTree; 
  TimerTree *v5; 
  __int128 v6; 
  float v10; 
  float v11; 
  float displayWidth; 
  float v13; 
  float displayHeight; 
  GfxCmdBufContext v15; 
  GpuTimerView::DisplayType m_dispType; 
  int v17; 
  GfxCmdBufContext v18; 
  __int64 m_historyIdx; 
  unsigned int v20; 
  __int64 v21; 
  unsigned int v22; 
  __int64 v23; 
  unsigned int v24; 
  __int64 v25; 
  unsigned int v26; 
  __int64 v27; 
  unsigned int v28; 
  __int64 v29; 
  unsigned int v30; 
  __int64 v31; 
  unsigned int v32; 
  __int64 v33; 
  unsigned int v34; 
  __int64 v35; 
  unsigned int v36; 
  __int64 v37; 
  unsigned int v38; 
  __int64 v39; 
  unsigned int v40; 
  __int64 v41; 
  unsigned int v42; 
  __int64 v43; 
  GfxCmdBufContext v44; 
  GfxCmdBufContext v45; 
  GfxCmdBufContext v46; 
  GfxCmdBufContext v47; 
  GfxCmdBufContext v48; 
  GfxCmdBufContext v49; 
  GfxCmdBufContext v50; 
  GfxCmdBufContext v51; 
  vec2_t v52; 
  vec2_t v53; 
  __int128 v54; 
  __int128 v55; 

  DrawTree = GPUTimerTree::GetDrawTree();
  v5 = DrawTree;
  if ( s_treeDisplayMode && DrawTree )
  {
    TimerTree::Lock(DrawTree);
    TimerTree::CalcTimerTree(v5);
    s_totalFrameTime = TimerTree::GetTotalTimeForTimerId(v5, GPU_TIMER_FRAME);
    s_totalTime = s_totalFrameTime - TimerTree::GetRootNode(v5)->m_exclusiveTimeUs;
    if ( s_treeDisplayMode != GPU_TIMERTREE_DISPLAY_MODE_HIDDEN )
    {
      v55 = v1;
      v54 = v2;
      v6 = LODWORD(s_drawTopOffsetTarget.v[1]);
      *(float *)&v6 = fsqrt((float)((float)(s_drawTopOffsetTarget.v[1] - s_drawTopOffset.v[1]) * (float)(s_drawTopOffsetTarget.v[1] - s_drawTopOffset.v[1])) + (float)((float)(s_drawTopOffsetTarget.v[0] - s_drawTopOffset.v[0]) * (float)(s_drawTopOffsetTarget.v[0] - s_drawTopOffset.v[0])));
      _XMM3 = v6;
      __asm
      {
        vcmpless xmm0, xmm3, cs:__real@80000000
        vblendvps xmm0, xmm3, xmm1, xmm0
      }
      if ( *(float *)&v6 <= 177.0 )
      {
        s_drawTopOffset = s_drawTopOffsetTarget;
        v11 = s_drawTopOffsetTarget.v[1];
        v10 = s_drawTopOffsetTarget.v[0];
      }
      else
      {
        v10 = s_drawTopOffset.v[0] + (float)((float)((float)(s_drawTopOffsetTarget.v[0] - s_drawTopOffset.v[0]) * (float)(1.0 / *(float *)&_XMM0)) * 125.0);
        v11 = s_drawTopOffset.v[1] + (float)((float)((float)(s_drawTopOffsetTarget.v[1] - s_drawTopOffset.v[1]) * (float)(1.0 / *(float *)&_XMM0)) * 125.0);
        s_drawTopOffset.v[0] = v10;
        s_drawTopOffset.v[1] = v11;
      }
      displayWidth = (float)vidConfig.displayWidth;
      v13 = displayWidth * 0.5;
      displayHeight = (float)vidConfig.displayHeight;
      v53.v[0] = v13;
      v53.v[1] = displayHeight * 0.89999998;
      v52.v[0] = v10 + 50.0;
      v52.v[1] = v11 + 30.0;
      switch ( s_treeDisplayMode )
      {
        case GPU_TIMERTREE_DISPLAY_MODE_FRAMEBUDGET:
          R_GPU_SetMainPageDisplayType();
          v44 = *gfxContext;
          GpuTimerPage::Draw(&s_MainTimerPage, &v44, v5, &v52, &v53, s_showAvgTimeOnly);
          break;
        case GPU_TIMERTREE_DISPLAY_MODE_FRAMEBUDGET_EXPAND:
          R_GPU_SetMainPageDisplayType();
          v45 = *gfxContext;
          GpuTimerPage::Draw(&s_MainTimerPage, &v45, v5, &v52, &v53, s_showAvgTimeOnly);
          break;
        case GPU_TIMERTREE_DISPLAY_MODE_ALL:
          R_GPU_SetAllTimerPageDisplayType();
          v48 = *gfxContext;
          GpuTimerPage::Draw(&s_AllTimerPage, &v48, v5, &v52, &v53, s_showAvgTimeOnly);
          break;
        case GPU_TIMERTREE_DISPLAY_MODE_ALL_ACTIVE:
          R_GPU_SetAllTimerPageDisplayType();
          v46 = *gfxContext;
          GpuTimerPage::Draw(&s_AllTimerPage, &v46, v5, &v52, &v53, s_showAvgTimeOnly);
          break;
        case GPU_TIMERTREE_DISPLAY_MODE_ALL_ACTIVE_IN_PLACE:
          R_GPU_SetAllTimerPageDisplayType();
          v47 = *gfxContext;
          GpuTimerPage::Draw(&s_AllTimerPage, &v47, v5, &v52, &v53, s_showAvgTimeOnly);
          break;
        case GPU_TIMERTREE_DISPLAY_MODE_ALL_IN_PLACE:
          R_GPU_SetAllTimerPageDisplayType();
          v49 = *gfxContext;
          GpuTimerPage::Draw(&s_AllTimerPage, &v49, v5, &v52, &v53, s_showAvgTimeOnly);
          break;
        case GPU_TIMERTREE_DISPLAY_MODE_ALL_ACTIVE_COM_ONLY:
          v15 = *gfxContext;
          m_dispType = s_TimerFrameView.m_dispType;
          s_TimerFrameView.m_dispType = PRINT;
          v50 = v15;
          GpuTimerView::Draw(&s_TimerFrameView, &v50, v5, 0, 0, 1, &v52, v13, NULL);
          v17 = 5;
          s_treeDisplayMode = GPU_TIMERTREE_DISPLAY_MODE_ALL_ACTIVE;
          goto LABEL_16;
        case GPU_TIMERTREE_DISPLAY_MODE_ALL_COM_ONLY:
          v18 = *gfxContext;
          m_dispType = s_TimerFrameView.m_dispType;
          s_TimerFrameView.m_dispType = PRINT;
          v51 = v18;
          GpuTimerView::Draw(&s_TimerFrameView, &v51, v5, 0, 1, 1, &v52, v13, NULL);
          v17 = 4;
          s_treeDisplayMode = GPU_TIMERTREE_DISPLAY_MODE_ALL;
LABEL_16:
          s_TimerFrameView.m_dispType = m_dispType;
          Dvar_SetInt_Internal(r_gpuTimers, v17);
          break;
        default:
          break;
      }
    }
    if ( s_treeDisplayMode == GPU_TIMERTREE_DISPLAY_MODE_HIDDEN || (unsigned int)(s_treeDisplayMode - 2) > 1 )
    {
      GpuTimerView::CalcOnly(&s_OpaqueView, v5);
      GpuTimerView::CalcOnly(&s_SunShadowView, v5);
      GpuTimerView::CalcOnly(&s_SpotShadowView, v5);
      GpuTimerView::CalcOnly(&s_PostFxView, v5);
      GpuTimerView::CalcOnly(&s_EmissView, v5);
      GpuTimerView::CalcOnly(&s_DepthHackView, v5);
      GpuTimerView::CalcOnly(&s_TransView, v5);
      GpuTimerView::CalcOnly(&s_LightingView, v5);
      GpuTimerView::CalcOnly(&s_VolumetricsView, v5);
      GpuTimerView::CalcOnly(&s_Dxr, v5);
      GpuTimerView::CalcOnly(&s_AntiAliasView, v5);
      GpuTimerView::CalcOnly(&s_UIView, v5);
      GpuTimerView::CalcOnly(&s_ComputeView, v5);
    }
    m_historyIdx = s_SunShadowView.m_historyIdx;
    if ( s_SunShadowView.m_historyIdx >= 0x40ui64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 87, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
      __debugbreak();
    v20 = s_SunShadowView.m_ViewTotalUs.m_data[m_historyIdx];
    v21 = s_SpotShadowView.m_historyIdx;
    bbperf_sunshadow_total = v20;
    if ( s_SpotShadowView.m_historyIdx >= 0x40ui64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 87, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
      __debugbreak();
    v22 = s_SpotShadowView.m_ViewTotalUs.m_data[v21];
    v23 = s_DepthHackView.m_historyIdx;
    bbperf_spotshadow_total = v22;
    if ( s_DepthHackView.m_historyIdx >= 0x40ui64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 87, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
      __debugbreak();
    v24 = s_DepthHackView.m_ViewTotalUs.m_data[v23];
    v25 = s_OpaqueView.m_historyIdx;
    bbperf_depthhack_total = v24;
    if ( s_OpaqueView.m_historyIdx >= 0x40ui64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 87, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
      __debugbreak();
    v26 = s_OpaqueView.m_ViewTotalUs.m_data[v25];
    v27 = s_TransView.m_historyIdx;
    bbperf_opaque_total = v26;
    if ( s_TransView.m_historyIdx >= 0x40ui64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 87, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
      __debugbreak();
    v28 = s_TransView.m_ViewTotalUs.m_data[v27];
    v29 = s_EmissView.m_historyIdx;
    bbperf_trans_total = v28;
    if ( s_EmissView.m_historyIdx >= 0x40ui64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 87, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
      __debugbreak();
    v30 = s_EmissView.m_ViewTotalUs.m_data[v29];
    v31 = s_LightingView.m_historyIdx;
    bbperf_emissive_total = v30;
    if ( s_LightingView.m_historyIdx >= 0x40ui64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 87, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
      __debugbreak();
    v32 = s_LightingView.m_ViewTotalUs.m_data[v31];
    v33 = s_VolumetricsView.m_historyIdx;
    bbperf_lighting_total = v32;
    if ( s_VolumetricsView.m_historyIdx >= 0x40ui64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 87, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
      __debugbreak();
    v34 = s_VolumetricsView.m_ViewTotalUs.m_data[v33];
    v35 = s_Dxr.m_historyIdx;
    bbperf_volumetrics_total = v34;
    if ( s_Dxr.m_historyIdx >= 0x40ui64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 87, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
      __debugbreak();
    v36 = s_Dxr.m_ViewTotalUs.m_data[v35];
    v37 = s_PostFxView.m_historyIdx;
    bbperf_dxr_total = v36;
    if ( s_PostFxView.m_historyIdx >= 0x40ui64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 87, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
      __debugbreak();
    v38 = s_PostFxView.m_ViewTotalUs.m_data[v37];
    v39 = s_AntiAliasView.m_historyIdx;
    bbperf_postfx_total = v38;
    if ( s_AntiAliasView.m_historyIdx >= 0x40ui64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 87, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
      __debugbreak();
    v40 = s_AntiAliasView.m_ViewTotalUs.m_data[v39];
    v41 = s_UIView.m_historyIdx;
    bbperf_antialias_total = v40;
    if ( s_UIView.m_historyIdx >= 0x40ui64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 87, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
      __debugbreak();
    v42 = s_UIView.m_ViewTotalUs.m_data[v41];
    v43 = s_ComputeView.m_historyIdx;
    bbperf_ui_total = v42;
    if ( s_ComputeView.m_historyIdx >= 0x40ui64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 87, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
      __debugbreak();
    bbperf_compute_total = s_ComputeView.m_ViewTotalUs.m_data[v43];
    TimerTree::Unlock(v5);
  }
}

/*
==============
RB_GPU_DrawTimers
==============
*/

void __fastcall RB_GPU_DrawTimers(GfxCmdBufContext *gfxContext, double _XMM1_8, double _XMM2_8)
{
  const dvar_t *v4; 
  unsigned __int64 *counts; 
  unsigned __int64 *v6; 
  __int64 v7; 
  float cellWidth; 
  float topEdgeY; 
  float cellHeight; 
  float v13; 
  __int128 v17; 
  __int128 rightEdgeX_low; 
  float v19; 
  float v20; 
  GfxColor *horror; 
  __int64 v22; 
  __int64 v23; 
  __int128 v24; 
  __int128 v25; 
  __int128 v26; 
  __int128 v29; 
  GfxCmdBufContext v30; 

  if ( s_treeDisplayMode )
  {
    GPUTimerTree::BeginTimer(GPU_TIMER_OVERHEAD, DRAWLIST_BACKEND_COUNT, r_glob.backEndFrameCount);
    R_ProfBeginNamedEvent(gfxContext->state, "GpuTimer Overhead");
    v30 = *gfxContext;
    RB_GPU_DrawTimerTrees(&v30);
    R_ProfEndNamedEvent(gfxContext->state);
    if ( s_treeDisplayMode )
      GPUTimerTree::EndTimer(r_glob.backEndFrameCount);
  }
  v4 = r_gpuFrameHistogram;
  if ( r_gpuFrameHistogram->current.enabled )
  {
    v30 = *gfxContext;
    RB_GPU_DrawFrameHistogram(&v30);
    v4 = r_gpuFrameHistogram;
  }
  if ( v4->current.enabled )
  {
    counts = s_gpuDynamicResolutionHistogram.counts;
    v6 = s_gpuDynamicResolutionHistogram.counts;
    v7 = 4i64;
    cellWidth = s_gpuDynamicResolutionHistogram.cellWidth;
    topEdgeY = s_gpuDynamicResolutionHistogram.topEdgeY;
    cellHeight = s_gpuDynamicResolutionHistogram.cellHeight;
    __asm
    {
      vpxor   xmm1, xmm1, xmm1
      vpxor   xmm2, xmm2, xmm2
    }
    do
    {
      __asm
      {
        vpaddq  xmm1, xmm1, xmmword ptr [rax]
        vpaddq  xmm2, xmm2, xmmword ptr [rax+10h]
      }
      v6 += 4;
      --v7;
    }
    while ( v7 );
    v13 = s_gpuDynamicResolutionHistogram.cellWidth + s_gpuDynamicResolutionHistogram.gutterWidth;
    __asm
    {
      vpaddq  xmm1, xmm2, xmm1
      vpsrldq xmm0, xmm1, 8
      vpaddq  xmm1, xmm1, xmm0
    }
    v30 = *gfxContext;
    *(float *)&_XMM0 = (float)s_gpuDynamicResolutionHistogram.current;
    rightEdgeX_low = LODWORD(s_gpuDynamicResolutionHistogram.rightEdgeX);
    *(float *)&rightEdgeX_low = s_gpuDynamicResolutionHistogram.rightEdgeX - (float)(s_gpuDynamicResolutionHistogram.cellWidth + s_gpuDynamicResolutionHistogram.gutterWidth);
    v17 = rightEdgeX_low;
    RB_DrawStretchPic(&v30, rgp.whiteMaterial, *(float *)&rightEdgeX_low - (float)(*(float *)&_XMM0 * (float)(s_gpuDynamicResolutionHistogram.cellWidth + s_gpuDynamicResolutionHistogram.gutterWidth)), s_gpuDynamicResolutionHistogram.topEdgeY - 6.0, s_gpuDynamicResolutionHistogram.cellWidth, 4.0, 0.0, 0.0, 1.0, 1.0, s_gpuDynamicResolutionHistogram.currentHorror.packed, GFX_PRIM_STATS_DEBUG);
    v19 = (float)(__int64)_XMM1;
    if ( (__int64)_XMM1 < 0 )
    {
      v20 = (float)(__int64)_XMM1;
      v19 = v20 + 1.8446744e19;
    }
    horror = s_gpuDynamicResolutionHistogram.horror;
    v22 = 16i64;
    do
    {
      v23 = *counts;
      v30 = *gfxContext;
      v25 = 0i64;
      *(float *)&v25 = (float)v23;
      v24 = v25;
      if ( v23 < 0 )
      {
        *(float *)&v25 = *(float *)&v25 + 1.8446744e19;
        v24 = v25;
      }
      v26 = v24;
      *(float *)&v26 = (float)(*(float *)&v24 * (float)(1.0 / v19)) * cellHeight;
      _XMM1 = v26;
      __asm { vmaxss  xmm2, xmm1, xmm6 }
      RB_DrawStretchPic(&v30, rgp.whiteMaterial, *(float *)&v17, topEdgeY, cellWidth, *(float *)&_XMM2, 0.0, 0.0, 1.0, 1.0, horror->packed, GFX_PRIM_STATS_DEBUG);
      ++horror;
      ++counts;
      v29 = v17;
      *(float *)&v29 = *(float *)&v17 - v13;
      v17 = v29;
      --v22;
    }
    while ( v22 );
    v30 = *gfxContext;
    RB_EndSurfaceIfNeeded(&v30);
  }
  else
  {
    memset_0(s_gpuDynamicResolutionHistogram.counts, 0, sizeof(s_gpuDynamicResolutionHistogram.counts));
    s_gpuDynamicResolutionHistogram.current = 0;
  }
  v30 = *gfxContext;
  RB_GPU_DrawLatencyHistogram(&v30);
}

/*
==============
RB_GPU_UpdateFullFrameTime
==============
*/
void RB_GPU_UpdateFullFrameTime(void)
{
  GPUTimeStampNode *FrameTimer; 
  GPUTimeStampNode *v1; 
  char v2; 
  int v3; 
  __int64 v4; 
  volatile unsigned __int64 *v5; 
  volatile unsigned __int64 *i; 
  volatile unsigned __int64 v7; 

  if ( s_treeDisplayMode == GPU_TIMERTREE_DISPLAY_MODE_DISABLED )
  {
    FrameTimer = GPUFrameTimer::GetFrameTimer();
    v1 = FrameTimer;
    if ( FrameTimer )
    {
      v2 = 0;
      v3 = 100000;
      v4 = 2 * FrameTimer->m_pQuery->m_queryIndex;
      v5 = &g_dx.gpuTimerLables[v4];
      for ( i = &g_dx.gpuTimerLables[(unsigned int)(v4 + 1)]; *v5 > *i; v2 = 1 )
      {
        if ( --v3 <= 0 )
          break;
        Sleep(0);
      }
      v1->m_beginTimeUs = *v5 / 0x64;
      v7 = *i;
      v1->m_calcErr = v2;
      v7 /= 0x64ui64;
      v1->m_endTimeUs = v7;
      s_totalFrameTime = v7 - LODWORD(v1->m_beginTimeUs);
    }
  }
}

/*
==============
R_GPU_AddHistogramSwap
==============
*/
void R_GPU_AddHistogramSwap(unsigned __int64 swapTimeUs)
{
  *(_QWORD *)&s_frameHistogram.dynamicWidth[8 * s_frameHistogram.swapIndex - 1440] = swapTimeUs;
  s_frameHistogram.swapIndex = (s_frameHistogram.swapIndex + 1) % 0xB4;
}

/*
==============
R_GPU_BeginFrame
==============
*/
void R_GPU_BeginFrame(int frameCount, bool splitscreen)
{
  int integer; 

  integer = r_gpuTimers->current.integer;
  s_treeDisplayMode = integer;
  if ( splitscreen )
  {
    s_treeDisplayMode = GPU_TIMERTREE_DISPLAY_MODE_DISABLED;
LABEL_3:
    GPUFrameTimer::BeginFrame(0);
    return;
  }
  if ( !integer )
    goto LABEL_3;
  s_timerTreeDisplayDepth = r_gpuTimersTimerTreeDisplayDepth->current.integer;
  s_showAvgTimeOnly = r_gpuTimersShowAvgOnly->current.enabled;
  GPUTimerTree::BeginFrame(frameCount, 0);
}

/*
==============
R_GPU_BeginRunDrawListTimer
==============
*/
void R_GPU_BeginRunDrawListTimer(const GfxDrawListType drawListType)
{
  GPUTimerId TimerIdForDrawListType; 

  if ( s_treeDisplayMode )
  {
    TimerIdForDrawListType = R_GPU_GetTimerIdForDrawListType(drawListType);
    GPUTimerTree::BeginTimer(TimerIdForDrawListType, drawListType, r_glob.backEndFrameCount);
  }
}

/*
==============
R_GPU_BeginRunDrawListTimerOffset
==============
*/
void R_GPU_BeginRunDrawListTimerOffset(const GfxDrawListType drawListType, unsigned int offset)
{
  GPUTimerId TimerIdForDrawListType; 

  if ( s_treeDisplayMode )
  {
    TimerIdForDrawListType = R_GPU_GetTimerIdForDrawListType(drawListType);
    GPUTimerTree::BeginTimer((const GPUTimerId)(offset + TimerIdForDrawListType), drawListType, r_glob.backEndFrameCount);
  }
}

/*
==============
R_GPU_BeginTimer
==============
*/
void R_GPU_BeginTimer(GPUTimerId timerId)
{
  if ( s_treeDisplayMode )
    GPUTimerTree::BeginTimer(timerId, DRAWLIST_BACKEND_COUNT, r_glob.backEndFrameCount);
}

/*
==============
R_GPU_EndFrame
==============
*/
void R_GPU_EndFrame(void)
{
  bool v0; 

  v0 = s_treeDisplayMode != GPU_TIMERTREE_DISPLAY_MODE_DISABLED;
  if ( s_treeDisplayMode )
    GPUTimerTree::EndFrame();
  else
    GPUFrameTimer::EndFrame();
  if ( v0 )
  {
    GPUFrameTimer::ClearReadTimer();
    GPUTimerTree::EndFrameCallback(0i64);
  }
  else
  {
    GPUTimerTree::ClearReadTree();
    GPUFrameTimer::EndFrameCallback();
  }
}

/*
==============
R_GPU_EndFrameCallback
==============
*/
void R_GPU_EndFrameCallback(unsigned __int64 callbackGpuTime, bool isProfileEnabled)
{
  if ( isProfileEnabled )
  {
    GPUFrameTimer::ClearReadTimer();
    GPUTimerTree::EndFrameCallback(callbackGpuTime);
  }
  else
  {
    GPUTimerTree::ClearReadTree();
    GPUFrameTimer::EndFrameCallback();
  }
}

/*
==============
R_GPU_EndTimer
==============
*/
void R_GPU_EndTimer(void)
{
  if ( s_treeDisplayMode )
    GPUTimerTree::EndTimer(r_glob.backEndFrameCount);
}

/*
==============
R_GPU_GetFullFrameTimeMicroseconds
==============
*/
unsigned __int64 R_GPU_GetFullFrameTimeMicroseconds()
{
  return s_totalFrameTime;
}

/*
==============
R_GPU_GetMainTotals
==============
*/
void R_GPU_GetMainTotals(float *pOutSunShadow, float *pOutSpotShadow, float *pOutDepthHack, float *pOutOpaque, float *pOutTrans, float *pOutEmiss, float *pOutLighting, float *pOutVolumetrics, float *pOutDxr, float *pOutPostFx, float *pOutAntiAliasing, float *pOutUI, float *pOutCompute)
{
  float v13; 
  __int64 v14; 
  float v15; 
  __int64 v16; 
  float v17; 
  __int64 v18; 
  float v19; 
  __int64 v20; 
  float v21; 
  float v22; 
  float v23; 
  float v24; 
  float v25; 
  float v26; 
  float v27; 
  float v28; 
  float v29; 

  v13 = (float)(unsigned int)bbperf_sunshadow_total;
  v14 = (unsigned int)bbperf_spotshadow_total;
  *pOutSunShadow = v13 * 0.001;
  v15 = (float)v14;
  v16 = (unsigned int)bbperf_depthhack_total;
  *pOutSpotShadow = v15 * 0.001;
  v17 = (float)v16;
  v18 = (unsigned int)bbperf_opaque_total;
  *pOutDepthHack = v17 * 0.001;
  v19 = (float)v18;
  v20 = (unsigned int)bbperf_trans_total;
  *pOutOpaque = v19 * 0.001;
  v21 = (float)v20;
  *pOutTrans = v21 * 0.001;
  v22 = (float)(unsigned int)bbperf_emissive_total;
  *pOutEmiss = v22 * 0.001;
  v23 = (float)(unsigned int)bbperf_lighting_total;
  *pOutLighting = v23 * 0.001;
  v24 = (float)(unsigned int)bbperf_volumetrics_total;
  *pOutVolumetrics = v24 * 0.001;
  v25 = (float)(unsigned int)bbperf_dxr_total;
  *pOutDxr = v25 * 0.001;
  v26 = (float)(unsigned int)bbperf_postfx_total;
  *pOutPostFx = v26 * 0.001;
  v27 = (float)(unsigned int)bbperf_antialias_total;
  *pOutAntiAliasing = v27 * 0.001;
  v28 = (float)(unsigned int)bbperf_ui_total;
  *pOutUI = v28 * 0.001;
  v29 = (float)(unsigned int)bbperf_compute_total;
  *pOutCompute = v29 * 0.001;
}

/*
==============
R_GPU_GetMicroseconds
==============
*/
unsigned __int64 R_GPU_GetMicroseconds()
{
  if ( s_treeDisplayMode )
    return s_totalTime;
  else
    return 0i64;
}

/*
==============
R_GPU_GetTimerIdForDrawListType
==============
*/
__int64 R_GPU_GetTimerIdForDrawListType(const GfxDrawListType drawListType)
{
  __int64 v1; 
  __int64 v3; 
  int v4; 

  v1 = drawListType;
  if ( s_GPUDrawListTypeToTimerIdMap[v1].drawListType != (_DWORD)v1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_gpu_timer.cpp", 2075, ASSERT_TYPE_ASSERT, "(s_GPUDrawListTypeToTimerIdMap[drawListType].drawListType == drawListType)", (const char *)&queryFormat, "s_GPUDrawListTypeToTimerIdMap[drawListType].drawListType == drawListType") )
    __debugbreak();
  if ( (unsigned int)v1 >= 0x59 )
  {
    v4 = 89;
    LODWORD(v3) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_gpu_timer.cpp", 2076, ASSERT_TYPE_ASSERT, "(unsigned)( drawListType ) < (unsigned)( ( sizeof( *array_counter( s_GPUDrawListTypeToTimerIdMap ) ) + 0 ) )", "drawListType doesn't index ARRAY_COUNT( s_GPUDrawListTypeToTimerIdMap )\n\t%i not in [0, %i)", v3, v4) )
      __debugbreak();
  }
  return (unsigned int)s_GPUDrawListTypeToTimerIdMap[v1].timeId;
}

/*
==============
R_GPU_InitTimers
==============
*/
void R_GPU_InitTimers(void)
{
  unsigned int v0; 
  const char **p_name; 
  const char *v2; 
  unsigned __int64 v3; 
  GfxFont *v4; 
  float displayWidth; 
  float v6; 
  float displayHeight; 
  float v8; 
  float v9; 
  int v10; 
  float v11; 
  float v12; 
  __int64 v13; 
  __int64 v14; 

  if ( !s_timersInited )
  {
    v0 = 0;
    p_name = &s_timerBarInfo[0].name;
    do
    {
      if ( *((_DWORD *)p_name - 2) != v0 )
      {
        LODWORD(v14) = v0;
        LODWORD(v13) = *((_DWORD *)p_name - 2);
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_gpu_timer.cpp", 2535, ASSERT_TYPE_ASSERT, "(s_timerBarInfo[i].id == static_cast<GPUTimerId>(i))", "%s\n\tTimerbarInfo Id (%d) doesn't match enum value (%d)\n", "s_timerBarInfo[i].id == static_cast<GPUTimerId>(i)", v13, v14) )
          __debugbreak();
      }
      v2 = *p_name;
      v3 = -1i64;
      do
        ++v3;
      while ( v2[v3] );
      if ( v3 >= 0x18 )
        Com_PrintWarning(8, "Warning: GPU Timers - timer description '%s' exceeds suggested %d character limit, will likely overlap time column.\n", v2, 24i64);
      ++v0;
      p_name += 2;
    }
    while ( v0 < 0x81 );
    GPUTimerTree::Init();
    GPUTimerTree::RegisterSystemOverheadTimerId(GPU_TIMER_WAIT_FLIP);
    GPUTimerTree::RegisterSystemOverheadTimerId(GPU_TIMER_OVERHEAD);
    v4 = R_RegisterFont("fonts/fira_mono_regular.ttf", 18);
    GpuTimerView::InitViews(v4);
    GpuTimerPage::InitPages();
    R_GPU_SetupGpuTimerPage();
    displayWidth = (float)vidConfig.displayWidth;
    s_gpuFrameHistogramStyle.leftEdgeX = displayWidth - (float)(displayWidth * 0.21799999);
    v6 = displayWidth * 0.0041660001;
    displayHeight = (float)vidConfig.displayHeight;
    s_gpuFrameHistogramStyle.tickWidth = v6;
    s_gpuFrameHistogramStyle.topEdgeY = displayHeight * 0.222;
    s_gpuFrameHistogramStyle.overMaxColor.packed = 1428165298;
    s_gpuFrameHistogramStyle.overBudgetColor.packed = 1427765503;
    s_gpuFrameHistogramStyle.padWidth = FLOAT_2_0;
    s_gpuFrameHistogramStyle.tickHeight = displayHeight * 0.074000001;
    s_gpuFrameHistogramStyle.rowPadHeight = FLOAT_4_0;
    s_gpuFrameHistogramStyle.swapColor.packed = 1426063360;
    s_gpuFrameHistogramStyle.endFrameColor.packed = 1442840575;
    s_gpuFrameHistogramStyle.durationColor.packed = 1442810506;
    s_gpuFrameHistogramStyle.swapColumns = 30;
    s_gpuFrameHistogramStyle.tickBudgetUs = 18000i64;
    s_gpuFrameHistogramStyle.tickMaxUs = 50000i64;
    r_gpuFrameHistogram = Dvar_RegisterBool("SLLPMLT", 0, 0, "Enables a visual histogram of time between page flips.");
    v8 = (float)vidConfig.displayWidth;
    s_gpuDynamicResolutionHistogram.rightEdgeX = v8 - (float)(v8 * 0.060600001);
    v9 = (float)vidConfig.displayHeight;
    s_gpuDynamicResolutionHistogram.topEdgeY = v9 * 0.77700001;
    s_gpuDynamicResolutionHistogram.cellHeight = v9 * 0.059250001;
    s_gpuDynamicResolutionHistogram.cellWidth = v8 * 0.0083299996;
    s_gpuLatencyHistogram.width = v8 * 0.20833001;
    s_gpuDynamicResolutionHistogram.gutterWidth = FLOAT_4_0;
    s_gpuDynamicResolutionHistogram.horror[15].packed = -8388353;
    s_gpuDynamicResolutionHistogram.horror[14].packed = -8384528;
    s_gpuDynamicResolutionHistogram.horror[13].packed = -8380703;
    s_gpuDynamicResolutionHistogram.horror[12].packed = -8376878;
    s_gpuDynamicResolutionHistogram.horror[11].packed = -8373053;
    s_gpuDynamicResolutionHistogram.horror[10].packed = -8369228;
    s_gpuDynamicResolutionHistogram.horror[9].packed = -8365403;
    s_gpuDynamicResolutionHistogram.horror[8].packed = -8361578;
    s_gpuDynamicResolutionHistogram.horror[7].packed = -8357753;
    s_gpuDynamicResolutionHistogram.horror[6].packed = -8353928;
    s_gpuDynamicResolutionHistogram.horror[5].packed = -8350103;
    s_gpuDynamicResolutionHistogram.horror[4].packed = -8346278;
    s_gpuDynamicResolutionHistogram.horror[3].packed = -8342453;
    s_gpuDynamicResolutionHistogram.horror[2].packed = -8338628;
    s_gpuDynamicResolutionHistogram.horror[1].packed = -8334803;
    s_gpuDynamicResolutionHistogram.horror[0].packed = -8330978;
    s_gpuDynamicResolutionHistogram.currentHorror.packed = -16719105;
    s_gpuLatencyHistogram.tickTime = FLOAT_5_0;
    s_gpuLatencyHistogram.rightTime = FLOAT_60_0;
    s_gpuLatencyHistogram.eventFont = R_RegisterFont("fonts/fira_mono_regular.ttf", 12);
    s_gpuLatencyHistogram.tickFont = R_RegisterFont("fonts/fira_mono_regular.ttf", 10);
    v10 = R_TextHeight(s_gpuLatencyHistogram.eventFont);
    v11 = (float)vidConfig.displayWidth;
    s_gpuLatencyHistogram.eventFontHeight = (float)v10;
    v12 = (float)vidConfig.displayHeight;
    s_gpuLatencyHistogram.rightPad = v11 * 0.03125;
    s_gpuLatencyHistogram.bottomPad = v12 * 0.40000001;
    s_gpuLatencyHistogram.backColor.packed = 1426063360;
    s_gpuLatencyHistogram.textColor.packed = -1;
    Dvar_BeginPermanentRegistration();
    r_gpuTimersTimerTreeDisplayDepth = Dvar_RegisterInt("OMKTTPNLNM", 0, 0, 8, 0, "Depth of child expansion for gpu timer views");
    r_gpuTimersShowAvgOnly = Dvar_RegisterBool("NQSTSRNN", 0, 0, "Show only average times in GPU Timers");
    r_gpuFrameHistogram = Dvar_RegisterBool("SLLPMLT", 0, 0, "Enables a visual histogram of time between page flips.");
    r_gpuLatencyHistogram = Dvar_RegisterBool("LRLQKMQNKQ", 0, 0, "Enables a histogram of in-engine input latency.");
    r_gpuLatencyProfToolGraphs = Dvar_RegisterBool("LSTNOSMSSM", 0, 0, "Enables graphs of in-engine input latency, output to attached instances of PIX & Razor Live.");
    r_gpuTimers = Dvar_RegisterEnum("LQSQNMSSLS", s_displayTreeModeNames, 0, 0, "GPU Timer displays");
    Dvar_EndPermanentRegistration();
    GPUFrameTimer::Init();
    s_timersInited = 1;
  }
}

/*
==============
R_GPU_IsProfileEnabled
==============
*/
bool R_GPU_IsProfileEnabled()
{
  return s_treeDisplayMode != GPU_TIMERTREE_DISPLAY_MODE_DISABLED;
}

/*
==============
R_GPU_LogTimers
==============
*/
void R_GPU_LogTimers(void)
{
  TimerTree *DrawTree; 
  bool *p_m_showInActive; 
  unsigned __int64 v2; 

  if ( s_treeDisplayMode )
  {
    DrawTree = GPUTimerTree::GetDrawTree();
    if ( DrawTree )
    {
      if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_gpu_timer.cpp", 2091, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
        __debugbreak();
      TimerTree::Lock(DrawTree);
      TimerTree::CalcTimerTree(DrawTree);
      p_m_showInActive = &s_MainPageConfig.m_data[1].m_showInActive;
      v2 = 1i64;
      do
      {
        if ( v2 >= 0xF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 87, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
          __debugbreak();
        *((_DWORD *)p_m_showInActive - 2) = 0;
        if ( v2 >= 0xF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 87, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
          __debugbreak();
        *p_m_showInActive = 1;
        if ( v2 >= 0xF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 87, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
          __debugbreak();
        *((_DWORD *)p_m_showInActive - 1) = 0;
        if ( v2 >= 0xF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 87, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
          __debugbreak();
        p_m_showInActive[1] = 1;
        ++v2;
        p_m_showInActive += 24;
      }
      while ( (__int64)p_m_showInActive < (__int64)&s_AllPageConfig.m_data[0].m_displayType );
      GpuTimerPage::OutputToText(&s_MainTimerPage, DrawTree, 1);
      if ( (((_BYTE)DrawTree - 60) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 93, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &DrawTree->m_locked) )
        __debugbreak();
      _InterlockedExchange(&DrawTree->m_locked, 0);
    }
  }
}

/*
==============
R_GPU_RecordLatencyEvent
==============
*/
void R_GPU_RecordLatencyEvent(LatencyEventID eventID, unsigned int frame)
{
  bool v2; 
  unsigned int *v3; 
  unsigned int v4; 
  __int64 v5; 
  unsigned __int64 v6; 

  if ( eventID == LATENCY_EVENT_BEGIN_FRAME )
  {
    s_gpuLatencyHistogram.drawEnabled = r_gpuLatencyHistogram->current.enabled;
    v2 = r_gpuLatencyProfToolGraphs->current.enabled || s_gpuLatencyHistogram.drawEnabled;
    s_gpuLatencyHistogram.calcEnabled = v2;
  }
  if ( s_gpuLatencyHistogram.calcEnabled )
  {
    v3 = &s_gpuLatencyHistogram.eventIndex[eventID];
    v4 = *v3;
    v5 = *v3 + 4 * eventID;
    v6 = __rdtsc();
    s_gpuLatencyHistogram.eventTime[v5] = ((unsigned __int64)HIDWORD(v6) << 32) | (unsigned int)v6;
    s_gpuLatencyHistogram.eventFrame[v5] = frame;
    *v3 = ((_BYTE)v4 + 1) & 3;
  }
}

/*
==============
R_GPU_RecordLatencyStatistics
==============
*/
void R_GPU_RecordLatencyStatistics(unsigned int frameCount, const _DXGIX_FRAME_STATISTICS *statistics)
{
  unsigned int v3; 
  unsigned int v4; 
  unsigned __int64 *p_VSyncCount; 
  __int64 v6; 
  char v7; 
  __int64 v8; 
  __int64 v9; 
  int v10; 
  char v11; 
  __int64 v12; 
  unsigned int latencyIndex; 
  unsigned __int64 nextVsyncCount; 
  __int64 v15; 
  __int64 v16; 
  int v17; 
  unsigned __int64 v18; 
  __int128 v20; 
  unsigned int v22; 
  unsigned __int64 CPUTimeVSync; 
  int v24; 
  unsigned int i; 
  unsigned __int64 v26; 

  if ( s_gpuLatencyHistogram.calcEnabled )
  {
    v3 = backEnd.frameCount;
    v4 = 0;
    if ( !frameCount )
      goto LABEL_8;
    p_VSyncCount = &statistics->VSyncCount;
    while ( !*p_VSyncCount )
    {
      --v3;
      ++v4;
      p_VSyncCount += 15;
      if ( v4 >= frameCount )
        goto LABEL_8;
    }
    if ( v4 >= frameCount )
    {
LABEL_8:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_gpu_timer.cpp", 1404, ASSERT_TYPE_ASSERT, "(statisticFrame < frameCount)", (const char *)&queryFormat, "statisticFrame < frameCount") )
        __debugbreak();
    }
    v6 = v4;
    if ( !s_gpuLatencyHistogram.nextVsyncCount )
      s_gpuLatencyHistogram.nextVsyncCount = statistics[v4].VSyncCount;
    v7 = s_gpuLatencyHistogram.eventIndex[4];
    v8 = v4;
    v9 = s_gpuLatencyHistogram.eventIndex[4] + 16;
    s_gpuLatencyHistogram.eventTime[v9] = statistics[v6].CPUTimePresentCalled;
    s_gpuLatencyHistogram.eventFrame[v9] = v3;
    v10 = (v7 + 1) & 3;
    v11 = s_gpuLatencyHistogram.eventIndex[5];
    s_gpuLatencyHistogram.eventIndex[4] = v10;
    v12 = s_gpuLatencyHistogram.eventIndex[5] + 20;
    s_gpuLatencyHistogram.eventTime[v12] = statistics[v6].CPUTimeFrameComplete;
    s_gpuLatencyHistogram.eventFrame[v12] = v3;
    latencyIndex = s_gpuLatencyHistogram.latencyIndex;
    s_gpuLatencyHistogram.eventIndex[5] = (v11 + 1) & 3;
    nextVsyncCount = s_gpuLatencyHistogram.nextVsyncCount;
    if ( s_gpuLatencyHistogram.nextVsyncCount < statistics[v6].VSyncCount )
    {
      do
      {
        v15 = 6i64;
        v16 = 6 * latencyIndex;
        v17 = 4 * ((latencyIndex + 199) % 0xC8) - v16;
        do
        {
          v18 = 0i64;
          *((_QWORD *)&v20 + 1) = 0i64;
          *(double *)&v20 = 16.66666666666667 / msecPerRawTimerTick;
          _XMM0 = v20;
          if ( 16.66666666666667 / msecPerRawTimerTick >= 9.223372036854776e18 )
          {
            *(double *)&v20 = *(double *)&v20 - 9.223372036854776e18;
            _XMM0 = v20;
            if ( *(double *)&v20 < 9.223372036854776e18 )
              v18 = 0x8000000000000000ui64;
          }
          __asm { vcvttsd2si rax, xmm0 }
          s_gpuLatencyHistogram.latency[v16] = v18 + _RAX + s_gpuLatencyHistogram.latency[(unsigned int)(v17 + v16)];
          v16 = (unsigned int)(v16 + 1);
          --v15;
        }
        while ( v15 );
        latencyIndex = (latencyIndex + 1) % 0xC8;
        nextVsyncCount = s_gpuLatencyHistogram.nextVsyncCount + 1;
        s_gpuLatencyHistogram.nextVsyncCount = nextVsyncCount;
      }
      while ( nextVsyncCount < statistics[v8].VSyncCount );
    }
    v22 = 0;
    s_gpuLatencyHistogram.nextVsyncCount = nextVsyncCount + 1;
    CPUTimeVSync = statistics[v8].CPUTimeVSync;
    v24 = 6 * latencyIndex;
    do
    {
      for ( i = 0; i < 4; ++i )
      {
        if ( s_gpuLatencyHistogram.eventFrame[4 * v22 + i] == v3 )
          break;
      }
      if ( i == 4 || (v26 = s_gpuLatencyHistogram.eventTime[4 * v22 + i], CPUTimeVSync < v26) )
        s_gpuLatencyHistogram.latency[v24 + v22] = 0i64;
      else
        s_gpuLatencyHistogram.latency[v24 + v22] = CPUTimeVSync - v26;
      ++v22;
    }
    while ( v22 < 6 );
    s_gpuLatencyHistogram.latencyIndex = (latencyIndex + 1) % 0xC8;
  }
}

/*
==============
R_GPU_SetAllTimerPageDisplayType
==============
*/
void R_GPU_SetAllTimerPageDisplayType(void)
{
  s_AllPageConfig.m_data[1].m_childDepth = s_timerTreeDisplayDepth;
  s_AllPageConfig.m_data[2].m_childDepth = s_timerTreeDisplayDepth;
  switch ( s_treeDisplayMode )
  {
    case GPU_TIMERTREE_DISPLAY_MODE_ALL:
      *(_WORD *)&s_AllPageConfig.m_data[1].m_showInActive = 257;
      *(_WORD *)&s_AllPageConfig.m_data[2].m_showInActive = 257;
      goto LABEL_9;
    case GPU_TIMERTREE_DISPLAY_MODE_ALL_ACTIVE:
      *(_WORD *)&s_AllPageConfig.m_data[1].m_showInActive = 256;
      *(_WORD *)&s_AllPageConfig.m_data[2].m_showInActive = 256;
LABEL_9:
      s_AllPageConfig.m_data[2].m_displayType = JUSTIFIED;
      s_AllPageConfig.m_data[1].m_displayType = JUSTIFIED;
      goto LABEL_10;
    case GPU_TIMERTREE_DISPLAY_MODE_ALL_ACTIVE_IN_PLACE:
      s_AllPageConfig.m_data[1].m_displayType = IN_PLACE;
      s_AllPageConfig.m_data[1].m_column = COLUMN_NONE;
      *(_WORD *)&s_AllPageConfig.m_data[1].m_showInActive = 0;
      s_AllPageConfig.m_data[2].m_column = COLUMN_NONE;
      *(_WORD *)&s_AllPageConfig.m_data[2].m_showInActive = 0;
      s_AllPageConfig.m_data[2].m_displayType = IN_PLACE;
      return;
  }
  if ( s_treeDisplayMode != GPU_TIMERTREE_DISPLAY_MODE_ALL_IN_PLACE )
    return;
  s_AllPageConfig.m_data[1].m_displayType = IN_PLACE;
  *(_WORD *)&s_AllPageConfig.m_data[1].m_showInActive = 1;
  s_AllPageConfig.m_data[2].m_displayType = IN_PLACE;
  *(_WORD *)&s_AllPageConfig.m_data[2].m_showInActive = 1;
LABEL_10:
  s_AllPageConfig.m_data[1].m_column = COLUMN_1;
  s_AllPageConfig.m_data[2].m_column = COLUMN_2;
}

/*
==============
R_GPU_SetDrawTopOffset
==============
*/
void R_GPU_SetDrawTopOffset(float x, float y)
{
  s_drawTopOffsetTarget.v[0] = x;
  s_drawTopOffsetTarget.v[1] = y;
}

/*
==============
R_GPU_SetMainPageDisplayType
==============
*/
void R_GPU_SetMainPageDisplayType(void)
{
  PageViewConfig::eCOLUMN v0; 
  unsigned __int64 v1; 
  int v2; 
  bool *p_m_showInActive; 
  int v4; 

  v0 = COLUMN_NONE;
  v1 = 1i64;
  if ( s_treeDisplayMode == GPU_TIMERTREE_DISPLAY_MODE_FRAMEBUDGET_EXPAND )
  {
    v2 = 0;
    s_MainPageConfig.m_data[1].m_column = COLUMN_1;
    v0 = COLUMN_2;
    s_MainPageConfig.m_data[2].m_column = COLUMN_1;
    s_MainPageConfig.m_data[3].m_column = COLUMN_1;
    s_MainPageConfig.m_data[4].m_column = COLUMN_1;
    s_MainPageConfig.m_data[5].m_column = COLUMN_1;
    s_MainPageConfig.m_data[6].m_column = COLUMN_1;
  }
  else
  {
    v2 = 2;
    s_MainPageConfig.m_data[1].m_column = COLUMN_NONE;
    s_MainPageConfig.m_data[2].m_column = COLUMN_NONE;
    s_MainPageConfig.m_data[3].m_column = COLUMN_NONE;
    s_MainPageConfig.m_data[4].m_column = COLUMN_NONE;
    s_MainPageConfig.m_data[5].m_column = COLUMN_NONE;
    s_MainPageConfig.m_data[6].m_column = COLUMN_NONE;
  }
  s_MainPageConfig.m_data[13].m_column = v0;
  p_m_showInActive = &s_MainPageConfig.m_data[1].m_showInActive;
  s_MainPageConfig.m_data[12].m_column = v0;
  s_MainPageConfig.m_data[11].m_column = v0;
  s_MainPageConfig.m_data[10].m_column = v0;
  s_MainPageConfig.m_data[9].m_column = v0;
  s_MainPageConfig.m_data[8].m_column = v0;
  s_MainPageConfig.m_data[7].m_column = v0;
  s_MainPageConfig.m_data[14].m_column = v0;
  do
  {
    if ( v1 >= 0xF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 87, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
      __debugbreak();
    *((_DWORD *)p_m_showInActive - 2) = v2;
    if ( v1 >= 0xF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 87, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
      __debugbreak();
    v4 = s_timerTreeDisplayDepth;
    *p_m_showInActive = 1;
    if ( v1 >= 0xF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 87, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
      __debugbreak();
    *((_DWORD *)p_m_showInActive - 1) = v4;
    if ( v1 >= 0xF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 87, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
      __debugbreak();
    p_m_showInActive[1] = 1;
    ++v1;
    p_m_showInActive += 24;
  }
  while ( (__int64)p_m_showInActive < (__int64)&s_AllPageConfig.m_data[0].m_displayType );
  s_MainPageConfig.m_data[2].m_showInActive = 0;
}

/*
==============
R_GPU_SetupGpuTimerPage
==============
*/
void R_GPU_SetupGpuTimerPage(void)
{
  int v0; 
  PageViewConfig *v1; 
  unsigned __int64 v2; 
  GpuTimerView *m_pView; 
  unsigned int v4; 
  char v5; 
  PageViewConfig *v6; 
  unsigned __int64 v7; 
  __int64 i; 
  GpuTimerView *v9; 
  GPUTimerId v10; 
  GPUTimerId v11; 
  const char **p_name; 
  GPUTimerId v13[2]; 
  GPUTimerId v14[2]; 
  GPUTimerId v15[4]; 
  GPUTimerId v16[4]; 
  GPUTimerId pId[6]; 
  GPUTimerId v18[8]; 
  GPUTimerId v19[8]; 
  GPUTimerId v20[8]; 
  GPUTimerId v21[10]; 
  GPUTimerId v22[24]; 
  GPUTimerId v23[24]; 
  GPUTimerId v24[28]; 

  pId[0] = GPU_TIMER_SUN_SHADOW_0_CACHED;
  pId[1] = GPU_TIMER_SUN_SHADOW_1_CACHED;
  pId[2] = GPU_TIMER_SUN_SHADOW_FIRST;
  pId[3] = GPU_TIMER_SUN_SHADOW_1;
  pId[4] = GPU_TIMER_SUN_SHADOW_2;
  pId[5] = GPU_TIMER_SUN_TRANS_SHADOW;
  GpuTimerView::Init(&s_SunShadowView, "Sun Shadows", 6, pId);
  v24[0] = GPU_TIMER_SPOT_SHADOW_0_STATIC;
  v24[1] = GPU_TIMER_SPOT_SHADOW_1_STATIC;
  v24[2] = GPU_TIMER_SPOT_SHADOW_2_STATIC;
  v24[3] = GPU_TIMER_SPOT_SHADOW_3_STATIC;
  v24[4] = GPU_TIMER_SPOT_SHADOW_4_STATIC;
  v24[5] = GPU_TIMER_SPOT_SHADOW_5_STATIC;
  v24[6] = GPU_TIMER_SPOT_SHADOW_6_STATIC;
  v24[7] = GPU_TIMER_SPOT_SHADOW_7_STATIC;
  v24[8] = GPU_TIMER_SPOT_SHADOW_0_DYNAMIC;
  v24[9] = GPU_TIMER_SPOT_SHADOW_1_DYNAMIC;
  v24[10] = GPU_TIMER_SPOT_SHADOW_2_DYNAMIC;
  v24[11] = GPU_TIMER_SPOT_SHADOW_3_DYNAMIC;
  v24[12] = GPU_TIMER_SPOT_SHADOW_4_DYNAMIC;
  v24[13] = GPU_TIMER_SPOT_SHADOW_5_DYNAMIC;
  v24[14] = GPU_TIMER_SPOT_SHADOW_6_DYNAMIC;
  v24[15] = GPU_TIMER_SPOT_SHADOW_7_DYNAMIC;
  v24[16] = GPU_TIMER_SPOT_SHADOW_DRAW;
  v24[17] = GPU_TIMER_SPOT_SHADOW_DRAW_STATIC;
  v24[18] = GPU_TIMER_SPOT_SHADOW_DRAW_DYNAMIC;
  v24[19] = GPU_TIMER_SPOT_SHADOW_HTILE_COPY;
  v24[20] = GPU_TIMER_SPOT_SHADOW_HTILE_MASK_CLEAR;
  v24[21] = GPU_TIMER_SPOT_SHADOW_HTILE_MASK;
  v24[22] = GPU_TIMER_SPOT_SHADOW_HTILE_MASK_INDIRECT;
  v24[23] = GPU_TIMER_SPOT_SHADOW_DOWNSAMPLE;
  v24[24] = GPU_TIMER_SPOT_SHADOW_BLUR;
  GpuTimerView::Init(&s_SpotShadowView, "Spot Shadows", 25, v24);
  v13[0] = GPU_TIMER_DEPTH_HACK_PREPASS;
  v13[1] = GPU_TIMER_DEPTH_HACK;
  GpuTimerView::Init(&s_DepthHackView, "DepthHack|Viewmodel", 2, v13);
  v23[0] = GPU_TIMER_PRE_OPAQUE_PREPASS;
  v23[1] = GPU_TIMER_PRE_OPAQUE;
  v23[2] = GPU_TIMER_EID_ONLY_PREPASS;
  v23[3] = GPU_TIMER_EID_ONLY;
  v23[4] = GPU_TIMER_OPAQUE_PREPASS;
  v23[5] = GPU_TIMER_OPAQUE;
  v23[6] = GPU_TIMER_RESOLVE_FLOAT_Z_MULTI;
  v23[7] = GPU_TIMER_FRUSTUM_LIGHTS_TILE;
  v23[8] = GPU_TIMER_FRUSTUM_GRID;
  v23[9] = GPU_TIMER_DECAL_VOLUMES_ATLAS_UPDATE;
  v23[10] = GPU_TIMER_DECAL_PREPASS;
  v23[11] = GPU_TIMER_DECAL;
  v23[12] = GPU_TIMER_SSS_FILTER;
  v23[13] = GPU_TIMER_SSAO;
  v23[14] = GPU_TIMER_SSR;
  v23[15] = GPU_TIMER_MDAO_BOUNDING_BOXES;
  v23[16] = GPU_TIMER_MDAO_OCCLUDERS;
  v23[17] = GPU_TIMER_MDAO_OCCLUSION;
  v23[18] = GPU_TIMER_MDAO_VOLUMES;
  v23[19] = GPU_TIMER_FOG_SPLINE_BLEND;
  v23[20] = GPU_TIMER_MAYHEM_SELFVIS;
  v23[21] = GPU_TIMER_VRSMASK_GENERATOR;
  v23[22] = GPU_TIMER_SUN_VISMASK;
  v23[23] = GPU_TIMER_REFLECTION_PROBE_RELIGHTING;
  GpuTimerView::Init(&s_OpaqueView, "Opaque", 24, v23);
  v16[0] = GPU_TIMER_TRANS_PREPASS;
  v16[1] = GPU_TIMER_TRANS;
  v16[2] = GPU_TIMER_RESOLVE_DISTORTION_0;
  v16[3] = GPU_TIMER_FRUSTUM_LIGHTS_CLUSTER;
  GpuTimerView::Init(&s_TransView, "Trans", 4, v16);
  v20[0] = GPU_TIMER_EFFECT_LIGHTING;
  v20[1] = GPU_TIMER_EMISSIVE_COPY;
  v20[2] = GPU_TIMER_EMISSIVE;
  v20[3] = GPU_TIMER_RESOLVE_DISTORTION_1;
  v20[4] = GPU_TIMER_SUN_QUERY;
  v20[5] = GPU_TIMER_OCCLUSION_QUERIES;
  v20[6] = GPU_TIMER_FLARES;
  v20[7] = GPU_TIMER_SUN_POST;
  GpuTimerView::Init(&s_EmissView, "Emissive", 8, v20);
  v10 = GPU_TIMER_SAMPLE_LIGHT_GRID;
  GpuTimerView::Init(&s_LightingView, "Lighting", 1, &v10);
  v18[0] = GPU_TIMER_VOLUMETRICS_TOTAL;
  v18[1] = GPU_TIMER_VOLUMETRIC_DENSITY;
  v18[2] = GPU_TIMER_VOLUMETRIC_AMBIENT;
  v18[3] = GPU_TIMER_VOLUMETRIC_MAX_FLOATZ;
  v18[4] = GPU_TIMER_VOLUMETRIC_LIGHTING;
  v18[5] = GPU_TIMER_VOLUMETRIC_ACCUMULATE;
  v18[6] = GPU_TIMER_VOLUME_LIGHT_SCATTER;
  GpuTimerView::Init(&s_VolumetricsView, "Volumetrics", 7, v18);
  v21[0] = GPU_TIMER_DXR_ADD;
  v21[1] = GPU_TIMER_DXR_BLAS;
  v21[2] = GPU_TIMER_DXR_TLAS;
  v21[3] = GPU_TIMER_DXR_SPOTSHADOW_INDICES;
  v21[4] = GPU_TIMER_DXR_SPOTSHADOW_SUM;
  v21[5] = GPU_TIMER_DXR_SPOTSHADOW_VISIBILITY;
  v21[6] = GPU_TIMER_DXR_SPOTSHADOW_TEMPORAL;
  v21[7] = GPU_TIMER_DXR_SPOTSHADOW_SPATIAL;
  GpuTimerView::Init(&s_Dxr, "DXR", 8, v21);
  v22[0] = GPU_TIMER_POST_FX;
  v22[1] = GPU_TIMER_RESOLVE_FLOAT_Z;
  v22[2] = GPU_TIMER_VELOCITY_STATIC;
  v22[3] = GPU_TIMER_GLARE_GENERATE;
  v22[4] = GPU_TIMER_DEPTH_SCAN;
  v22[5] = GPU_TIMER_DOF_TILE;
  v22[6] = GPU_TIMER_DOF_FILTER;
  v22[7] = GPU_TIMER_DRONE_CAMERA;
  v22[8] = GPU_TIMER_MBLUR_FILTER;
  v22[9] = GPU_TIMER_MBLUR_TILE;
  v22[10] = GPU_TIMER_RADIAL_BLUR;
  v22[11] = GPU_TIMER_GLARE_APPLY;
  v22[12] = GPU_TIMER_UNIVERSAL_CLUT_GENERATE;
  v22[13] = GPU_TIMER_UI_CLUT_GENERATE;
  v22[14] = GPU_TIMER_HDR_SCOPES;
  v22[15] = GPU_TIMER_DOWNSAMPLE;
  v22[16] = GPU_TIMER_VEIL;
  v22[17] = GPU_TIMER_TONEMAP;
  v22[18] = GPU_TIMER_MERGED_POSTFX;
  v22[19] = GPU_TIMER_NIGHTVISION;
  v22[20] = GPU_TIMER_HUD_OUTLINE;
  v22[21] = GPU_TIMER_DISPLAY_COMPOSITE;
  v22[22] = GPU_TIMER_BLUR;
  GpuTimerView::Init(&s_PostFxView, "Post Fx", 23, v22);
  v14[0] = GPU_TIMER_POST_AA;
  v14[1] = GPU_TIMER_TRANS_MASK;
  GpuTimerView::Init(&s_AntiAliasView, "Anti-Alias", 2, v14);
  v11 = GPU_TIMER_2D;
  GpuTimerView::Init(&s_UIView, "UI", 1, &v11);
  v15[0] = GPU_TIMER_2D_BACKEND;
  v15[1] = GPU_TIMER_WAIT_FLIP;
  v15[2] = GPU_TIMER_OVERHEAD;
  GpuTimerView::Init(&s_SystemOverheadView, "System Overhead", 3, v15);
  v19[0] = GPU_TIMER_COMPUTE_CMDS;
  v19[1] = GPU_TIMER_WAIT_COMPUTE;
  v19[2] = GPU_TIMER_GP_TRIANGLE_PASS;
  v19[3] = GPU_TIMER_UVB_COPY_VERT_PAGES;
  v19[4] = GPU_TIMER_UOB_COPY_VERT_PAGES;
  v19[5] = GPU_TIMER_UIB_COPY_INDEX_PAGES;
  v19[6] = GPU_TIMER_GENERATE_CLUTTER;
  GpuTimerView::Init(&s_ComputeView, "Compute", 7, v19);
  GpuTimerView::Init(&s_TimerFrameView, "Frame", 128, &s_timerBarInfo[1], 1);
  GpuTimerView::SetBudgets(&s_SunShadowView, 0x190u);
  GpuTimerView::SetBudgets(&s_SpotShadowView, 0x1F4u);
  GpuTimerView::SetBudgets(&s_DepthHackView, 0x3E8u);
  GpuTimerView::SetBudgets(&s_OpaqueView, 0x157Cu);
  GpuTimerView::SetBudgets(&s_TransView, 0x3E8u);
  GpuTimerView::SetBudgets(&s_EmissView, 0x6D6u);
  GpuTimerView::SetBudgets(&s_LightingView, 0x2EEu);
  GpuTimerView::SetBudgets(&s_VolumetricsView, 0x4E2u);
  GpuTimerView::SetBudgets(&s_Dxr, 0x7D0u);
  GpuTimerView::SetBudgets(&s_PostFxView, 0x7D0u);
  GpuTimerView::SetBudgets(&s_AntiAliasView, 0x258u);
  GpuTimerView::SetBudgets(&s_UIView, 0x1F4u);
  GpuTimerView::SetBudgets(&s_TimerFrameView, 0x36B0u);
  *(_QWORD *)&s_MainPageConfig.m_data[0].m_displayType = 2i64;
  s_MainPageConfig.m_data[0].m_column = COLUMN_NONE;
  s_MainPageConfig.m_data[0].m_pView = &s_TimerFrameView;
  s_MainPageConfig.m_data[14].m_column = COLUMN_NONE;
  s_MainPageConfig.m_data[1].m_pView = &s_SunShadowView;
  *(_WORD *)&s_MainPageConfig.m_data[0].m_showInActive = 256;
  s_MainPageConfig.m_data[2].m_pView = &s_SpotShadowView;
  *(_QWORD *)&s_MainPageConfig.m_data[1].m_displayType = 2i64;
  s_MainPageConfig.m_data[3].m_pView = &s_DepthHackView;
  s_MainPageConfig.m_data[4].m_pView = &s_OpaqueView;
  s_MainPageConfig.m_data[5].m_pView = &s_TransView;
  s_MainPageConfig.m_data[6].m_pView = &s_EmissView;
  s_MainPageConfig.m_data[7].m_pView = &s_LightingView;
  *(_WORD *)&s_MainPageConfig.m_data[1].m_showInActive = 257;
  s_MainPageConfig.m_data[1].m_column = COLUMN_1;
  *(_QWORD *)&s_MainPageConfig.m_data[2].m_displayType = 2i64;
  *(_WORD *)&s_MainPageConfig.m_data[2].m_showInActive = 257;
  s_MainPageConfig.m_data[2].m_column = COLUMN_1;
  *(_QWORD *)&s_MainPageConfig.m_data[3].m_displayType = 2i64;
  *(_WORD *)&s_MainPageConfig.m_data[3].m_showInActive = 257;
  s_MainPageConfig.m_data[3].m_column = COLUMN_1;
  *(_QWORD *)&s_MainPageConfig.m_data[4].m_displayType = 2i64;
  *(_WORD *)&s_MainPageConfig.m_data[4].m_showInActive = 257;
  s_MainPageConfig.m_data[4].m_column = COLUMN_1;
  *(_QWORD *)&s_MainPageConfig.m_data[5].m_displayType = 2i64;
  *(_WORD *)&s_MainPageConfig.m_data[5].m_showInActive = 257;
  s_MainPageConfig.m_data[5].m_column = COLUMN_1;
  *(_QWORD *)&s_MainPageConfig.m_data[6].m_displayType = 2i64;
  *(_WORD *)&s_MainPageConfig.m_data[6].m_showInActive = 257;
  s_MainPageConfig.m_data[6].m_column = COLUMN_1;
  *(_QWORD *)&s_MainPageConfig.m_data[7].m_displayType = 2i64;
  *(_WORD *)&s_MainPageConfig.m_data[7].m_showInActive = 257;
  s_MainPageConfig.m_data[7].m_column = COLUMN_2;
  s_MainPageConfig.m_data[8].m_pView = &s_VolumetricsView;
  *(_QWORD *)&s_MainPageConfig.m_data[8].m_displayType = 2i64;
  *(_WORD *)&s_MainPageConfig.m_data[8].m_showInActive = 257;
  s_MainPageConfig.m_data[8].m_column = COLUMN_2;
  s_MainPageConfig.m_data[9].m_pView = &s_Dxr;
  *(_QWORD *)&s_MainPageConfig.m_data[9].m_displayType = 2i64;
  *(_WORD *)&s_MainPageConfig.m_data[9].m_showInActive = 257;
  s_MainPageConfig.m_data[9].m_column = COLUMN_2;
  s_MainPageConfig.m_data[10].m_pView = &s_PostFxView;
  *(_QWORD *)&s_MainPageConfig.m_data[10].m_displayType = 2i64;
  *(_WORD *)&s_MainPageConfig.m_data[10].m_showInActive = 257;
  s_MainPageConfig.m_data[10].m_column = COLUMN_2;
  s_MainPageConfig.m_data[11].m_pView = &s_AntiAliasView;
  *(_QWORD *)&s_MainPageConfig.m_data[11].m_displayType = 2i64;
  *(_WORD *)&s_MainPageConfig.m_data[11].m_showInActive = 257;
  s_MainPageConfig.m_data[11].m_column = COLUMN_2;
  s_MainPageConfig.m_data[12].m_pView = &s_UIView;
  *(_QWORD *)&s_MainPageConfig.m_data[12].m_displayType = 2i64;
  *(_WORD *)&s_MainPageConfig.m_data[12].m_showInActive = 257;
  s_MainPageConfig.m_data[12].m_column = COLUMN_2;
  s_MainPageConfig.m_data[13].m_pView = &s_ComputeView;
  *(_QWORD *)&s_MainPageConfig.m_data[13].m_displayType = 2i64;
  *(_WORD *)&s_MainPageConfig.m_data[13].m_showInActive = 257;
  s_MainPageConfig.m_data[13].m_column = COLUMN_2;
  s_MainPageConfig.m_data[14].m_pView = &s_SystemOverheadView;
  *(_QWORD *)&s_MainPageConfig.m_data[14].m_displayType = 2i64;
  *(_WORD *)&s_MainPageConfig.m_data[14].m_showInActive = 257;
  GpuTimerPage::Init(&s_MainTimerPage, s_MainPageConfig.m_data, 15);
  v0 = 0;
  v1 = &s_MainPageConfig.m_data[1];
  v2 = 1i64;
  do
  {
    if ( v2 >= 0xF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 87, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
      __debugbreak();
    m_pView = v1->m_pView;
    ++v2;
    ++v1;
    v0 += m_pView->m_numId;
  }
  while ( (__int64)v1 < (__int64)&s_totalFrameTime );
  if ( v0 != 129 )
  {
    v4 = 1;
    p_name = &s_timerBarInfo[1].name;
    do
    {
      v5 = 0;
      v6 = &s_MainPageConfig.m_data[1];
      v7 = 24i64;
      do
      {
        for ( i = 0i64; ; i = (unsigned int)(i + 1) )
        {
          if ( v7 >= 0x168 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 87, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
            __debugbreak();
          if ( (unsigned int)i >= v6->m_pView->m_numId )
            break;
          if ( v7 >= 0x168 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 87, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
            __debugbreak();
          v9 = v6->m_pView;
          if ( (unsigned int)i >= v6->m_pView->m_timerId.m_data.m_size )
          {
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\array.h", 169, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
              __debugbreak();
            if ( (unsigned int)i >= v9->m_timerId.m_data.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\buffer_memory_block.h", 121, ASSERT_TYPE_ASSERT, "( index < m_size )", (const char *)&queryFormat, "index < m_size") )
              __debugbreak();
          }
          if ( v9->m_timerId.m_data.m_buffer[i] == v4 )
          {
            v5 = 1;
            break;
          }
        }
        v7 += 24i64;
        ++v6;
      }
      while ( (__int64)v6 < (__int64)&s_totalFrameTime );
      if ( !v5 )
        Com_Printf(0, "Warning: GpuTimerId %s (%d) is not part of any budget.\n", *p_name, v4);
      p_name += 2;
      ++v4;
    }
    while ( v4 < 0x81 );
  }
  GpuTimerView::Init(&s_AllTimerViewHalfA, "All Timers", 64, &s_timerBarInfo[1], 0);
  GpuTimerView::Init(&s_AllTimerViewHalfB, "All Timers", 64, &s_timerBarInfo[65], 0);
  *(_QWORD *)&s_AllPageConfig.m_data[0].m_displayType = 2i64;
  s_AllPageConfig.m_data[0].m_pView = &s_TimerFrameView;
  *(_WORD *)&s_AllPageConfig.m_data[0].m_showInActive = 256;
  s_AllPageConfig.m_data[0].m_column = COLUMN_NONE;
  s_AllPageConfig.m_data[1].m_pView = &s_AllTimerViewHalfA;
  *(_QWORD *)&s_AllPageConfig.m_data[1].m_displayType = 0i64;
  *(_WORD *)&s_AllPageConfig.m_data[1].m_showInActive = 256;
  s_AllPageConfig.m_data[1].m_column = COLUMN_1;
  s_AllPageConfig.m_data[2].m_pView = &s_AllTimerViewHalfB;
  *(_QWORD *)&s_AllPageConfig.m_data[2].m_displayType = 0i64;
  *(_WORD *)&s_AllPageConfig.m_data[2].m_showInActive = 256;
  s_AllPageConfig.m_data[2].m_column = COLUMN_2;
  GpuTimerPage::Init(&s_AllTimerPage, s_AllPageConfig.m_data, 3);
}

/*
==============
R_GPU_ShutdownTimers
==============
*/
void R_GPU_ShutdownTimers(void)
{
  GpuTimerPage::ShutdownPages();
  GpuTimerView::ShutdownViews();
  GPUTimerTree::Shutdown();
  GPUFrameTimer::Shutdown();
  s_timersInited = 0;
}

/*
==============
R_GPU_TimerGetColor
==============
*/
GfxColor *R_GPU_TimerGetColor(GPUTimerId timerId)
{
  __int64 v1; 
  int v4; 

  v1 = (unsigned int)timerId;
  if ( (unsigned int)timerId > GPU_TIMER_COUNT )
  {
    v4 = 129;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_gpu_timer.cpp", 296, ASSERT_TYPE_ASSERT, "( 0 ) <= ( timerId ) && ( timerId ) <= ( GPU_TIMER_COUNT )", "timerId not in [0, GPU_TIMER_COUNT]\n\t%i not in [%i, %i]", timerId, 0i64, v4) )
      __debugbreak();
  }
  return &s_timerBarInfo[v1].color;
}

/*
==============
R_GPU_TimerGetName
==============
*/
const char *R_GPU_TimerGetName(GPUTimerId timerId)
{
  __int64 v1; 
  int v4; 

  v1 = (unsigned int)timerId;
  if ( (unsigned int)timerId > GPU_TIMER_COUNT )
  {
    v4 = 129;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_gpu_timer.cpp", 289, ASSERT_TYPE_ASSERT, "( 0 ) <= ( timerId ) && ( timerId ) <= ( GPU_TIMER_COUNT )", "timerId not in [0, GPU_TIMER_COUNT]\n\t%i not in [%i, %i]", timerId, 0i64, v4) )
      __debugbreak();
  }
  return s_timerBarInfo[v1].name;
}

/*
==============
R_GPU_TimerSetGameModeBudget
==============
*/
void R_GPU_TimerSetGameModeBudget(bool isSpMode)
{
  unsigned int v2; 
  unsigned int v3; 
  unsigned int v4; 
  unsigned int v5; 
  unsigned int v6; 
  unsigned int v7; 

  GpuTimerView::SetBudgets(&s_SunShadowView, 0x190u);
  GpuTimerView::SetBudgets(&s_SpotShadowView, 0x1F4u);
  v2 = 1000;
  GpuTimerView::SetBudgets(&s_DepthHackView, 0x3E8u);
  v3 = 5500;
  if ( !isSpMode )
    v3 = 5250;
  GpuTimerView::SetBudgets(&s_OpaqueView, v3);
  if ( !isSpMode )
    v2 = 750;
  GpuTimerView::SetBudgets(&s_TransView, v2);
  v4 = 1750;
  if ( !isSpMode )
    v4 = 1600;
  GpuTimerView::SetBudgets(&s_EmissView, v4);
  GpuTimerView::SetBudgets(&s_LightingView, 0x2EEu);
  v5 = 1250;
  if ( !isSpMode )
    v5 = 900;
  GpuTimerView::SetBudgets(&s_VolumetricsView, v5);
  v6 = 2000;
  GpuTimerView::SetBudgets(&s_Dxr, 0x7D0u);
  if ( !isSpMode )
    v6 = 1800;
  GpuTimerView::SetBudgets(&s_PostFxView, v6);
  GpuTimerView::SetBudgets(&s_AntiAliasView, 0x258u);
  GpuTimerView::SetBudgets(&s_UIView, 0x1F4u);
  v7 = 14000;
  if ( !isSpMode )
    v7 = 13333;
  GpuTimerView::SetBudgets(&s_TimerFrameView, v7);
}

/*
==============
R_GPU_WriteTimerCounters
==============
*/
void R_GPU_WriteTimerCounters(void)
{
  ;
}


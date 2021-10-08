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
void MoveToTargetPos()
{
  __asm
  {
    vmovss  xmm0, dword ptr cs:s_drawTopOffsetTarget
    vmovss  xmm1, dword ptr cs:s_drawTopOffsetTarget+4
    vmovaps [rsp+28h+var_18], xmm6
    vmovss  xmm6, dword ptr cs:s_drawTopOffset
    vsubss  xmm5, xmm0, xmm6
    vmulss  xmm0, xmm5, xmm5
    vmovaps [rsp+28h+var_28], xmm7
    vmovss  xmm7, dword ptr cs:s_drawTopOffset+4
    vsubss  xmm4, xmm1, xmm7
    vmulss  xmm2, xmm4, xmm4
    vaddss  xmm1, xmm2, xmm0
    vsqrtss xmm3, xmm1, xmm1
    vcomiss xmm3, cs:__real@43310000
    vcmpless xmm0, xmm3, cs:__real@80000000
    vmovss  xmm1, cs:__real@3f800000
    vblendvps xmm0, xmm3, xmm1, xmm0
    vdivss  xmm1, xmm1, xmm0
    vmulss  xmm0, xmm5, xmm1
    vmulss  xmm5, xmm4, xmm1
    vmulss  xmm0, xmm0, cs:__real@42fa0000
    vmulss  xmm2, xmm5, cs:__real@42fa0000
    vaddss  xmm1, xmm6, xmm0
    vaddss  xmm0, xmm7, xmm2
    vmovss  dword ptr cs:s_drawTopOffset+4, xmm0
    vmovss  dword ptr cs:s_drawTopOffset, xmm1
    vmovaps xmm6, [rsp+28h+var_18]
    vmovaps xmm7, [rsp+28h+var_28]
  }
}

/*
==============
RB_GPU_AddDynamicResolution
==============
*/

void __fastcall RB_GPU_AddDynamicResolution(unsigned int dynamicWidthIndex, int delta, double previousFrameDuration)
{
  char v4; 
  __int64 v5; 
  __int64 swapIndex; 
  int v12; 

  __asm { vmovaps [rsp+58h+var_18], xmm6 }
  v4 = delta;
  v5 = dynamicWidthIndex;
  __asm { vmovaps xmm6, xmm2 }
  if ( dynamicWidthIndex >= 0x10 )
  {
    v12 = 16;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_gpu_timer.cpp", 1074, ASSERT_TYPE_ASSERT, "(unsigned)( dynamicWidthIndex ) < (unsigned)( 16 )", "dynamicWidthIndex doesn't index R_DYNAMIC_SCENE_RESOLUTION_COUNT\n\t%i not in [0, %i)", dynamicWidthIndex, v12) )
      __debugbreak();
  }
  swapIndex = s_frameHistogram.swapIndex;
  _RCX = 0x140000000ui64;
  ++*(_QWORD *)s_gpuDynamicResolutionHistogram.horror[2 * v5 - 32].array;
  s_gpuDynamicResolutionHistogram.current = v5;
  s_frameHistogram.dynamicWidth[swapIndex] = v5;
  s_frameHistogram.delta[s_frameHistogram.swapIndex] = v4;
  _RAX = s_frameHistogram.swapIndex;
  __asm
  {
    vmovss  rva s_frameHistogram.previousFrameDuration[rcx+rax*4], xmm6
    vmovaps xmm6, [rsp+58h+var_18]
  }
}

/*
==============
RB_GPU_DrawFrameHistogram
==============
*/
void RB_GPU_DrawFrameHistogram(GfxCmdBufContext *context)
{
  unsigned __int64 *swapTime; 
  char *delta; 
  unsigned int v23; 
  float *previousFrameDuration; 
  __int64 v25; 
  unsigned __int64 v27; 
  unsigned __int64 v28; 
  unsigned int packed; 
  int v42; 
  int v45; 
  int v63; 
  int v65; 
  float fmt; 
  float fmta; 
  float fmtb; 
  float fmtc; 
  float fmtd; 
  float fmte; 
  float fmtf; 
  float v138; 
  float v139; 
  float v140; 
  float v141; 
  float v142; 
  float v143; 
  float v144; 
  float v145; 
  float v146; 
  float v147; 
  float v148; 
  float v149; 
  float v150; 
  float v151; 
  float v152; 
  float v153; 
  float v154; 
  float v155; 
  float v156; 
  float v157; 
  float v158; 
  float v159; 
  float v160; 
  float v161; 
  GfxCmdBufContext v162; 
  char v163; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm6
    vmovaps xmmword ptr [rax-48h], xmm7
    vmovaps xmmword ptr [rax-58h], xmm8
    vmovaps xmmword ptr [rax-68h], xmm9
    vmovaps xmmword ptr [rax-78h], xmm10
    vmovaps xmmword ptr [rax-88h], xmm11
    vmovaps xmmword ptr [rax-98h], xmm12
    vmovaps xmmword ptr [rax-0A8h], xmm13
    vmovaps xmmword ptr [rax-0B8h], xmm14
    vmovaps xmmword ptr [rax-0C8h], xmm15
    vmovss  xmm6, cs:?s_gpuFrameHistogramStyle@@3UGPUFrameHistogramStyle@@A.leftEdgeX; GPUFrameHistogramStyle s_gpuFrameHistogramStyle
    vmovss  xmm12, cs:?s_gpuFrameHistogramStyle@@3UGPUFrameHistogramStyle@@A.topEdgeY; GPUFrameHistogramStyle s_gpuFrameHistogramStyle
    vmovss  xmm14, cs:?s_gpuFrameHistogramStyle@@3UGPUFrameHistogramStyle@@A.tickWidth; GPUFrameHistogramStyle s_gpuFrameHistogramStyle
    vmovss  xmm11, cs:?s_gpuFrameHistogramStyle@@3UGPUFrameHistogramStyle@@A.tickHeight; GPUFrameHistogramStyle s_gpuFrameHistogramStyle
    vmovss  xmm15, cs:__real@5f800000
    vmovss  xmm10, cs:__real@3f800000
    vmovss  xmm7, cs:__real@3f000000
  }
  _RBP = context;
  swapTime = s_frameHistogram.swapTime;
  delta = s_frameHistogram.delta;
  v23 = 1;
  previousFrameDuration = s_frameHistogram.previousFrameDuration;
  v25 = 180i64;
  __asm { vxorps  xmm9, xmm9, xmm9 }
  do
  {
    v27 = *(_QWORD *)&s_frameHistogram.dynamicWidth[8 * ((v23 + 178) % 0xB4) - 1440];
    v28 = 0i64;
    if ( *swapTime > v27 )
      v28 = 16667 * ((*swapTime - v27 + 8334) / 0x411B);
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, rcx
    }
    if ( (v28 & 0x8000000000000000ui64) != 0i64 )
      __asm { vaddss  xmm0, xmm0, xmm15 }
    __asm
    {
      vmulss  xmm1, xmm0, xmm11
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, rax
    }
    if ( (s_gpuFrameHistogramStyle.tickMaxUs & 0x8000000000000000ui64) != 0i64 )
      __asm { vaddss  xmm0, xmm0, xmm15 }
    __asm
    {
      vdivss  xmm0, xmm1, xmm0
      vminss  xmm2, xmm0, xmm11
    }
    if ( v28 <= s_gpuFrameHistogramStyle.tickMaxUs )
    {
      packed = s_gpuFrameHistogramStyle.swapColor.packed;
      if ( v28 > s_gpuFrameHistogramStyle.tickBudgetUs )
        packed = s_gpuFrameHistogramStyle.overBudgetColor.packed;
    }
    else
    {
      packed = s_gpuFrameHistogramStyle.overMaxColor.packed;
    }
    __asm
    {
      vmovups xmm0, xmmword ptr [rbp+0]
      vmovss  [rsp+148h+var_100], xmm10
      vmovss  [rsp+148h+var_108], xmm10
      vmovss  [rsp+148h+var_110], xmm9
      vmovss  dword ptr [rsp+148h+var_118], xmm9
      vmovss  dword ptr [rsp+148h+var_120], xmm2
      vaddss  xmm13, xmm11, xmm12
      vsubss  xmm3, xmm13, xmm2
      vmovaps xmm2, xmm6
      vmovss  dword ptr [rsp+148h+fmt], xmm14
      vmovups [rsp+148h+var_E8], xmm0
    }
    RB_DrawStretchPic(&v162, rgp.whiteMaterial, *(float *)&_XMM2, *(float *)&_XMM3, fmt, v138, v144, v150, v154, v158, packed, GFX_PRIM_STATS_DEBUG);
    if ( *delta > 0 )
    {
      v42 = 0;
      __asm
      {
        vmulss  xmm7, xmm14, xmm7
        vaddss  xmm8, xmm7, xmm6
      }
      v45 = 0;
      __asm { vaddss  xmm9, xmm14, xmm6 }
      do
      {
        __asm
        {
          vmovups xmm0, xmmword ptr [rbp+0]
          vxorps  xmm1, xmm1, xmm1
          vcvtsi2ss xmm1, xmm1, edi
          vaddss  xmm2, xmm1, xmm12
          vmovups [rsp+148h+var_E8], xmm0
          vaddss  xmm0, xmm2, xmm11
          vaddss  xmm2, xmm0, xmm10
          vaddss  xmm1, xmm2, xmm7
          vmovss  dword ptr [rsp+148h+var_118], xmm1
          vmovss  dword ptr [rsp+148h+var_120], xmm8
          vmovaps xmm1, xmm6
          vmovaps xmm3, xmm9
          vmovss  dword ptr [rsp+148h+fmt], xmm2
        }
        RB_DrawTriangle2D(&v162, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmta, v139, v145, s_gpuFrameHistogramStyle.endFrameColor.packed);
        ++v42;
        v45 += 3;
      }
      while ( v42 < *delta );
      if ( *(delta - 180) != 15 )
        goto LABEL_23;
      __asm
      {
        vmovups xmm0, xmmword ptr [rbp+0]
        vmovups [rsp+148h+var_E8], xmm0
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, eax
        vaddss  xmm1, xmm0, xmm12
        vaddss  xmm2, xmm1, xmm11
        vaddss  xmm4, xmm2, xmm10
        vaddss  xmm2, xmm4, xmm7
      }
      goto LABEL_22;
    }
    if ( *delta >= 0 )
      goto LABEL_24;
    __asm { vmovss  xmm15, cs:__real@40000000 }
    v63 = 0;
    __asm
    {
      vmulss  xmm7, xmm14, xmm7
      vaddss  xmm9, xmm7, xmm6
    }
    v65 = 0;
    __asm { vaddss  xmm8, xmm14, xmm6 }
    do
    {
      __asm
      {
        vmovups xmm0, xmmword ptr [rbp+0]
        vxorps  xmm1, xmm1, xmm1
        vcvtsi2ss xmm1, xmm1, edi
        vaddss  xmm2, xmm1, xmm12
        vmovups [rsp+148h+var_E8], xmm0
        vaddss  xmm0, xmm2, xmm11
        vaddss  xmm2, xmm0, xmm15
        vaddss  xmm1, xmm2, xmm7
        vmovss  dword ptr [rsp+148h+var_118], xmm1
        vmovss  dword ptr [rsp+148h+var_120], xmm6
        vmovss  dword ptr [rsp+148h+fmt], xmm1
        vmovaps xmm1, xmm9
        vmovaps xmm3, xmm8
      }
      RB_DrawTriangle2D(&v162, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtb, v140, v146, s_gpuFrameHistogramStyle.endFrameColor.packed);
      --v63;
      v65 += 3;
    }
    while ( v63 > *delta );
    __asm { vmovss  xmm15, cs:__real@5f800000 }
    if ( !*(delta - 180) )
    {
      __asm
      {
        vmovups xmm0, xmmword ptr [rbp+0]
        vmovups [rsp+148h+var_E8], xmm0
        vaddss  xmm2, xmm13, xmm10
      }
LABEL_22:
      __asm
      {
        vsubss  xmm3, xmm14, xmm10
        vmovaps xmm1, xmm6
        vmovss  dword ptr [rsp+148h+fmt], xmm10
      }
      RB_DrawRect2D(&v162, *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, fmtc, s_gpuFrameHistogramStyle.endFrameColor);
    }
LABEL_23:
    __asm { vxorps  xmm9, xmm9, xmm9 }
LABEL_24:
    __asm
    {
      vmovups xmm0, xmmword ptr [rbp+0]
      vmulss  xmm1, xmm11, dword ptr [r15]
      vmulss  xmm2, xmm1, cs:__real@447a0000
      vmovups [rsp+148h+var_E8], xmm0
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, rax
    }
    if ( (s_gpuFrameHistogramStyle.tickMaxUs & 0x8000000000000000ui64) != 0i64 )
      __asm { vaddss  xmm0, xmm0, xmm15 }
    __asm
    {
      vmovss  xmm8, cs:__real@40000000
      vmovss  [rsp+148h+var_100], xmm10
      vmovss  [rsp+148h+var_108], xmm10
      vmovss  [rsp+148h+var_110], xmm9
      vdivss  xmm0, xmm2, xmm0
      vmovss  dword ptr [rsp+148h+var_118], xmm9
      vmovss  dword ptr [rsp+148h+var_120], xmm10
      vsubss  xmm3, xmm13, xmm0
      vaddss  xmm2, xmm6, xmm8
      vmovss  dword ptr [rsp+148h+fmt], xmm8
    }
    RB_DrawStretchPic(&v162, rgp.whiteMaterial, *(float *)&_XMM2, *(float *)&_XMM3, fmtd, v141, v147, v151, v155, v159, s_gpuFrameHistogramStyle.durationColor.packed, GFX_PRIM_STATS_DEBUG);
    _RBX = DVARFLT_r_sceneResDynamicTarget;
    if ( !DVARFLT_r_sceneResDynamicTarget && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_sceneResDynamicTarget") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm
    {
      vmovups xmm0, xmmword ptr [rbp+0]
      vmovss  xmm7, dword ptr [rbx+28h]
      vmovups [rsp+148h+var_E8], xmm0
      vxorps  xmm0, xmm0, xmm0
      vmulss  xmm1, xmm7, xmm11
      vmulss  xmm2, xmm1, cs:__real@447a0000
      vcvtsi2ss xmm0, xmm0, rax
    }
    if ( (s_gpuFrameHistogramStyle.tickMaxUs & 0x8000000000000000ui64) != 0i64 )
      __asm { vaddss  xmm0, xmm0, xmm15 }
    __asm
    {
      vmovss  [rsp+148h+var_100], xmm10
      vmovss  [rsp+148h+var_108], xmm10
      vmovss  [rsp+148h+var_110], xmm9
      vdivss  xmm0, xmm2, xmm0
      vmovss  dword ptr [rsp+148h+var_118], xmm9
      vmovss  dword ptr [rsp+148h+var_120], xmm10
      vsubss  xmm3, xmm13, xmm0
      vmovaps xmm2, xmm6
      vmovss  dword ptr [rsp+148h+fmt], xmm8
    }
    RB_DrawStretchPic(&v162, rgp.whiteMaterial, *(float *)&_XMM2, *(float *)&_XMM3, fmte, v142, v148, v152, v156, v160, s_gpuFrameHistogramStyle.overBudgetColor.packed, GFX_PRIM_STATS_DEBUG);
    _RBX = DCONST_DVARVEC4_r_sceneResDynamicThreshold;
    if ( !DCONST_DVARVEC4_r_sceneResDynamicThreshold && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 741, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_sceneResDynamicThreshold") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(_RBX);
    __asm
    {
      vmovss  xmm0, dword ptr [rbx+28h]
      vmovss  xmm1, dword ptr [rbx+2Ch]
      vmovss  dword ptr [rsp+148h+var_E8], xmm0
      vmovss  xmm0, dword ptr [rbx+30h]
      vmovss  dword ptr [rsp+148h+var_E8+8], xmm0
      vmovups xmm0, xmmword ptr [rbp+0]
      vmovss  dword ptr [rsp+148h+var_E8+4], xmm1
      vmovss  xmm1, dword ptr [rbx+34h]
      vmovss  dword ptr [rsp+148h+var_E8+0Ch], xmm1
      vmovups [rsp+148h+var_E8], xmm0
      vmulss  xmm1, xmm1, xmm7
      vxorps  xmm0, xmm0, xmm0
      vmulss  xmm2, xmm1, xmm11
      vmulss  xmm3, xmm2, cs:__real@447a0000
      vcvtsi2ss xmm0, xmm0, rax
    }
    if ( (s_gpuFrameHistogramStyle.tickMaxUs & 0x8000000000000000ui64) != 0i64 )
      __asm { vaddss  xmm0, xmm0, xmm15 }
    __asm
    {
      vmovss  [rsp+148h+var_100], xmm10
      vmovss  [rsp+148h+var_108], xmm10
      vmovss  [rsp+148h+var_110], xmm9
      vdivss  xmm0, xmm3, xmm0
      vmovss  dword ptr [rsp+148h+var_118], xmm9
      vmovss  dword ptr [rsp+148h+var_120], xmm10
      vsubss  xmm3, xmm13, xmm0
      vmovaps xmm2, xmm6
      vmovss  dword ptr [rsp+148h+fmt], xmm8
    }
    RB_DrawStretchPic(&v162, rgp.whiteMaterial, *(float *)&_XMM2, *(float *)&_XMM3, fmtf, v143, v149, v153, v157, v161, s_gpuFrameHistogramStyle.endFrameColor.packed, GFX_PRIM_STATS_DEBUG);
    if ( v23 % s_gpuFrameHistogramStyle.swapColumns )
    {
      __asm
      {
        vmovss  xmm0, cs:?s_gpuFrameHistogramStyle@@3UGPUFrameHistogramStyle@@A.padWidth; GPUFrameHistogramStyle s_gpuFrameHistogramStyle
        vaddss  xmm1, xmm0, cs:?s_gpuFrameHistogramStyle@@3UGPUFrameHistogramStyle@@A.tickWidth; GPUFrameHistogramStyle s_gpuFrameHistogramStyle
        vaddss  xmm6, xmm6, xmm1
      }
    }
    else
    {
      __asm
      {
        vmovss  xmm0, cs:?s_gpuFrameHistogramStyle@@3UGPUFrameHistogramStyle@@A.rowPadHeight; GPUFrameHistogramStyle s_gpuFrameHistogramStyle
        vaddss  xmm1, xmm0, cs:?s_gpuFrameHistogramStyle@@3UGPUFrameHistogramStyle@@A.tickHeight; GPUFrameHistogramStyle s_gpuFrameHistogramStyle
        vmovss  xmm6, cs:?s_gpuFrameHistogramStyle@@3UGPUFrameHistogramStyle@@A.leftEdgeX; GPUFrameHistogramStyle s_gpuFrameHistogramStyle
        vaddss  xmm12, xmm12, xmm1
      }
    }
    __asm { vmovss  xmm7, cs:__real@3f000000 }
    ++v23;
    ++swapTime;
    ++delta;
    ++previousFrameDuration;
    --v25;
  }
  while ( v25 );
  __asm
  {
    vmovups xmm0, xmmword ptr [rbp+0]
    vmovups [rsp+148h+var_E8], xmm0
  }
  RB_EndSurfaceIfNeeded(&v162);
  _R11 = &v163;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
    vmovaps xmm9, xmmword ptr [r11-40h]
    vmovaps xmm10, xmmword ptr [r11-50h]
    vmovaps xmm11, xmmword ptr [r11-60h]
    vmovaps xmm12, xmmword ptr [r11-70h]
    vmovaps xmm13, xmmword ptr [r11-80h]
    vmovaps xmm14, xmmword ptr [r11-90h]
    vmovaps xmm15, xmmword ptr [r11-0A0h]
  }
}

/*
==============
RB_GPU_DrawLatencyHistogram
==============
*/
void RB_GPU_DrawLatencyHistogram(GfxCmdBufContext *context)
{
  int v14; 
  volatile bool calcEnabled; 
  volatile unsigned int latencyIndex; 
  unsigned int v38; 
  __int64 v49; 
  Material *whiteMaterial; 
  char v74; 
  const char *v78; 
  char v85; 
  int v91; 
  const char **v92; 
  GfxColor *v94; 
  GfxColor v96; 
  const char *v97; 
  GfxColor textColor; 
  GfxFont *eventFont; 
  const char *v112; 
  GfxColor v116; 
  GfxFont *v117; 
  const char *v122; 
  GfxColor v126; 
  GfxFont *v127; 
  const char *v131; 
  const wchar_t **v143; 
  float fmt; 
  float fmta; 
  float fmtb; 
  float fmtc; 
  float fmtd; 
  float fmte; 
  float fmtf; 
  float v155; 
  float v156; 
  float v157; 
  float v158; 
  float v159; 
  float v160; 
  float v161; 
  float v162; 
  float v163; 
  float v164; 
  unsigned int packed; 
  _QWORD v168[3]; 
  GfxCmdBufContext v169; 
  GfxCmdBufContext v170; 
  GfxCmdBufContext v171; 
  GfxCmdBufContext v172; 
  GfxCmdBufContext v173; 
  GfxCmdBufContext v174; 
  GfxCmdBufContext v175; 
  GfxCmdBufContext v176; 
  GfxCmdBufContext v177; 
  GfxPointVertex v178; 
  __int64 v179; 
  __int64 v180; 
  void *retaddr; 

  _R11 = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [r11-68h], xmm9
    vmovsd  xmm9, cs:__real@43f0000000000000
  }
  v14 = 0;
  _R15 = context;
  if ( s_gpuLatencyHistogram.drawEnabled )
  {
    calcEnabled = s_gpuLatencyHistogram.calcEnabled;
    __asm
    {
      vmovaps xmmword ptr [r11-38h], xmm6
      vmovaps xmmword ptr [r11-48h], xmm7
      vmovaps xmmword ptr [r11-58h], xmm8
      vmovaps xmmword ptr [r11-78h], xmm10
      vmovaps xmmword ptr [r11-88h], xmm11
      vmovaps xmmword ptr [r11-98h], xmm12
      vmovaps xmmword ptr [r11-0A8h], xmm13
      vmovaps xmmword ptr [r11-0B8h], xmm14
      vmovaps xmmword ptr [r11-0C8h], xmm15
    }
    if ( !calcEnabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_gpu_timer.cpp", 1219, ASSERT_TYPE_ASSERT, "(s_gpuLatencyHistogram.calcEnabled)", (const char *)&queryFormat, "s_gpuLatencyHistogram.calcEnabled") )
      __debugbreak();
    __asm
    {
      vmovss  xmm11, cs:s_gpuLatencyHistogram.width
      vmovss  xmm10, cs:__real@3f800000
      vmovss  xmm8, cs:s_gpuLatencyHistogram.rightTime
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, rax
      vsubss  xmm1, xmm0, xmm11
      vsubss  xmm12, xmm1, cs:s_gpuLatencyHistogram.rightPad
      vmovss  xmm0, cs:s_gpuLatencyHistogram.eventFontHeight
      vmulss  xmm1, xmm0, cs:__real@40800000
      vaddss  xmm2, xmm1, cs:__real@43480000
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, rax
      vmovss  [rsp+240h+var_1F8], xmm10
      vmovss  [rsp+240h+var_200], xmm10
      vsubss  xmm1, xmm0, xmm2
      vsubss  xmm15, xmm1, cs:s_gpuLatencyHistogram.bottomPad
      vmovups xmm0, xmmword ptr [r15]
      vxorps  xmm7, xmm7, xmm7
      vmovss  [rsp+240h+var_208], xmm7
      vmovss  [rsp+240h+var_210], xmm7
      vmovss  [rsp+240h+var_218], xmm2
      vmovaps xmm2, xmm12
      vmovaps xmm3, xmm15
      vmovss  [rsp+240h+var_1E0], xmm8
      vmovss  dword ptr [rsp+240h+var_1D8+4], xmm15
      vmovss  dword ptr [rsp+240h+fmt], xmm11
      vmovups xmmword ptr [rsp+240h+var_1D8+8], xmm0
    }
    RB_DrawStretchPic((GfxCmdBufContext *)&v168[1], rgp.whiteMaterial, *(float *)&_XMM2, *(float *)&_XMM3, fmt, v155, v157, v159, v161, v163, s_gpuLatencyHistogram.backColor.packed, GFX_PRIM_STATS_DEBUG);
    __asm
    {
      vmovaps xmm0, cs:__xmm@7f7fffff7f7fffff7f7fffff7f7fffff
      vaddss  xmm2, xmm15, cs:__real@43480000
    }
    latencyIndex = s_gpuLatencyHistogram.latencyIndex;
    v38 = 0;
    __asm
    {
      vmovsd  xmm14, cs:__real@3f747ae147ae147b
      vcvtss2sd xmm1, xmm8, xmm8
      vmovss  [rbp+140h+var_100], xmm0
      vmovss  [rbp+140h+var_FC], xmm0
      vmovups [rbp+140h+var_110], xmm0
      vmovsd  xmm0, cs:__real@3ff0000000000000
      vdivsd  xmm13, xmm0, xmm1
      vaddss  xmm1, xmm15, cs:__real@43470000
      vmovss  dword ptr [rsp+240h+var_1D8], xmm1
      vmovss  [rbp+140h+var_E0], xmm7
      vmovss  [rbp+140h+var_F8], xmm7
      vmovss  [rbp+140h+var_DC], xmm7
      vmovss  [rbp+140h+var_F4], xmm7
      vmovss  [rbp+140h+var_D8], xmm7
      vmovss  [rbp+140h+var_F0], xmm7
      vmovss  [rbp+140h+var_D4], xmm7
      vmovss  [rbp+140h+var_EC], xmm7
      vmovss  [rbp+140h+var_D0], xmm7
      vmovss  [rbp+140h+var_E8], xmm7
      vmovss  [rbp+140h+var_CC], xmm7
      vmovss  [rbp+140h+var_E4], xmm7
      vmovss  [rsp+240h+var_1DC], xmm2
      vaddss  xmm15, xmm12, xmm11
    }
    do
    {
      __asm { vxorps  xmm0, xmm0, xmm0 }
      _RBX = 0i64;
      __asm
      {
        vmovaps xmm5, xmm15
        vcvtsi2ss xmm0, xmm0, rax
        vsubss  xmm8, xmm1, xmm0
      }
      v49 = 6 * ((v38 + latencyIndex) % 0xC8) + 5;
      do
      {
        __asm
        {
          vxorpd  xmm0, xmm0, xmm0
          vcvtsi2sd xmm0, xmm0, rcx
        }
        if ( (s_gpuLatencyHistogram.latency[v49] & 0x8000000000000000ui64) != 0i64 )
          __asm { vaddsd  xmm0, xmm0, xmm9 }
        __asm { vmulsd  xmm4, xmm0, cs:?msecPerRawTimerTick@@3NA; double msecPerRawTimerTick }
        whiteMaterial = rgp.whiteMaterial;
        packed = s_latencyEventColors[_RBX + 5].packed;
        __asm
        {
          vmovss  [rsp+240h+var_1F8], xmm10
          vcvtsd2ss xmm1, xmm4, xmm4
          vminss  xmm0, xmm1, [rbp+rbx+140h+var_FC]
          vmaxss  xmm1, xmm1, [rbp+rbx+140h+var_CC]
          vmovss  [rbp+rbx+140h+var_FC], xmm0
          vmovss  [rbp+rbx+140h+var_CC], xmm1
          vcvtss2sd xmm3, xmm11, xmm11
          vmovss  [rsp+240h+var_200], xmm10
          vmulsd  xmm0, xmm4, xmm14
          vcvtsd2ss xmm1, xmm0, xmm0
          vaddss  xmm2, xmm1, [rbp+rbx+140h+var_E4]
          vmulsd  xmm0, xmm3, xmm4
          vmulsd  xmm1, xmm0, xmm13
          vmovss  [rbp+rbx+140h+var_E4], xmm2
          vsubsd  xmm2, xmm3, xmm1
          vmovups xmm1, xmmword ptr [r15]
          vcvtsd2ss xmm3, xmm2, xmm2
          vmaxss  xmm0, xmm3, xmm7
          vaddss  xmm6, xmm0, xmm12
          vmovss  [rsp+240h+var_208], xmm7
          vsubss  xmm0, xmm5, xmm6
          vmovss  [rsp+240h+var_210], xmm7
          vmovss  [rsp+240h+var_218], xmm10
          vmovaps xmm3, xmm8
          vmovaps xmm2, xmm6
          vmovss  dword ptr [rsp+240h+fmt], xmm0
          vmovups [rbp+140h+var_1C0], xmm1
        }
        RB_DrawStretchPic(&v169, whiteMaterial, *(float *)&_XMM2, *(float *)&_XMM3, fmta, v156, v158, v160, v162, v164, packed, GFX_PRIM_STATS_DEBUG);
        v49 = (unsigned int)(v49 - 1);
        --_RBX;
        __asm { vmovaps xmm5, xmm6 }
      }
      while ( _RBX >= -5 );
      __asm { vmovss  xmm1, dword ptr [rsp+240h+var_1D8] }
      ++v38;
    }
    while ( v38 < 0xC8 );
    __asm
    {
      vmovss  xmm0, [rsp+240h+var_1E0]
      vmovss  xmm15, dword ptr [rsp+240h+var_1D8+4]
      vmovss  xmm14, [rsp+240h+var_1DC]
    }
    v74 = 1;
    __asm { vcomiss xmm0, xmm7 }
    *(_QWORD *)&v178.xyz.z = 0x3CFFFFFF00000000i64;
    v180 = 0x3CFFFFFF00000000i64;
    *(_QWORD *)v178.xyz.v = 0i64;
    v179 = 0i64;
    __asm
    {
      vmovaps xmm8, xmm7
      vaddss  xmm13, xmm12, xmm11
      vdivss  xmm10, xmm10, xmm0
    }
    do
    {
      __asm { vucomiss xmm8, xmm7 }
      if ( v74 )
      {
        v78 = "vblank";
      }
      else
      {
        __asm { vcvttss2si edx, xmm8 }
        v78 = j_va("%dms", _RDX);
      }
      __asm
      {
        vmovups xmm0, xmmword ptr [r15]
        vmulss  xmm1, xmm8, xmm11
        vmulss  xmm2, xmm1, xmm10
        vsubss  xmm6, xmm13, xmm2
        vmovaps xmm3, xmm6
        vmovss  dword ptr [rsp+240h+fmt], xmm15
        vmovups [rbp+140h+var_1B0], xmm0
      }
      RB_DrawText(&v170, v78, s_gpuLatencyHistogram.tickFont, *(float *)&_XMM3, fmtb, s_gpuLatencyHistogram.textColor);
      __asm
      {
        vmovups xmm0, xmmword ptr [r15]
        vmovss  dword ptr [rbp+140h+var_130], xmm6
        vmovss  dword ptr [rbp+140h+var_130+4], xmm15
        vmovss  dword ptr [rbp+140h+var_128], xmm7
        vmovss  dword ptr [rbp+140h+var_120], xmm6
        vmovss  dword ptr [rbp+140h+var_120+4], xmm14
        vmovss  dword ptr [rbp+140h+var_118], xmm7
        vmovups [rbp+140h+var_1A0], xmm0
      }
      RB_DrawLines2D(&v171, 1, 1, &v178);
      __asm
      {
        vaddss  xmm8, xmm8, cs:s_gpuLatencyHistogram.tickTime
        vcomiss xmm8, [rsp+240h+var_1E0]
      }
    }
    while ( v85 | v74 );
    __asm
    {
      vmovups xmm0, xmmword ptr [r15]
      vmovss  dword ptr [rbp+140h+var_130], xmm12
      vmovss  dword ptr [rbp+140h+var_130+4], xmm14
      vmovss  dword ptr [rbp+140h+var_128], xmm7
      vmovss  dword ptr [rbp+140h+var_120], xmm13
      vmovss  dword ptr [rbp+140h+var_120+4], xmm14
      vmovss  dword ptr [rbp+140h+var_118], xmm7
      vmovups [rbp+140h+var_190], xmm0
    }
    RB_DrawLines2D(&v172, 1, 1, &v178);
    __asm
    {
      vmovss  xmm8, cs:__real@3e2aaaab
      vmovss  xmm10, cs:__real@40000000
      vmovss  xmm13, cs:__real@40400000
      vmovss  xmm15, cs:__real@40800000
    }
    v91 = 0;
    v92 = s_latencyEventNames;
    _R14 = 0i64;
    v94 = s_latencyEventColors;
    do
    {
      __asm { vmovups xmm0, xmmword ptr [r15] }
      v96 = *v94;
      v97 = *v92;
      __asm
      {
        vxorps  xmm1, xmm1, xmm1
        vcvtsi2ss xmm1, xmm1, r12d
        vmulss  xmm2, xmm1, xmm11
        vaddss  xmm1, xmm14, cs:s_gpuLatencyHistogram.eventFontHeight
        vmovups [rbp+140h+var_180], xmm0
        vmulss  xmm0, xmm2, xmm8
        vaddss  xmm7, xmm0, xmm12
        vmovaps xmm3, xmm7
        vmovss  dword ptr [rsp+240h+fmt], xmm1
      }
      RB_DrawText(&v173, v97, s_gpuLatencyHistogram.eventFont, *(float *)&_XMM3, fmtc, v96);
      __asm { vmulss  xmm1, xmm10, cs:s_gpuLatencyHistogram.eventFontHeight }
      textColor = s_gpuLatencyHistogram.textColor;
      eventFont = s_gpuLatencyHistogram.eventFont;
      __asm
      {
        vaddss  xmm6, xmm1, xmm14
        vmovss  xmm1, dword ptr [rbp+r14+140h+var_110]
        vcvtss2sd xmm1, xmm1, xmm1
        vmovq   rdx, xmm1
      }
      v112 = j_va("%.2fms", _RDX);
      __asm
      {
        vmovups xmm0, xmmword ptr [r15]
        vmovaps xmm3, xmm7
        vmovups [rbp+140h+var_170], xmm0
        vmovss  dword ptr [rsp+240h+fmt], xmm6
      }
      RB_DrawText(&v174, v112, eventFont, *(float *)&_XMM3, fmtd, textColor);
      __asm { vmulss  xmm1, xmm13, cs:s_gpuLatencyHistogram.eventFontHeight }
      v116 = s_gpuLatencyHistogram.textColor;
      v117 = s_gpuLatencyHistogram.eventFont;
      __asm
      {
        vaddss  xmm6, xmm1, xmm14
        vmovss  xmm1, [rbp+r14+140h+var_F8]
        vcvtss2sd xmm1, xmm1, xmm1
        vmovq   rdx, xmm1
      }
      v122 = j_va("%.2fms", _RDX);
      __asm
      {
        vmovups xmm0, xmmword ptr [r15]
        vmovaps xmm3, xmm7
        vmovups [rbp+140h+var_160], xmm0
        vmovss  dword ptr [rsp+240h+fmt], xmm6
      }
      RB_DrawText(&v175, v122, v117, *(float *)&_XMM3, fmte, v116);
      __asm { vmulss  xmm1, xmm15, cs:s_gpuLatencyHistogram.eventFontHeight }
      v126 = s_gpuLatencyHistogram.textColor;
      v127 = s_gpuLatencyHistogram.eventFont;
      __asm
      {
        vaddss  xmm6, xmm1, xmm14
        vmovss  xmm1, [rbp+r14+140h+var_E0]
        vcvtss2sd xmm1, xmm1, xmm1
        vmovq   rdx, xmm1
      }
      v131 = j_va("%.2fms", _RDX);
      __asm
      {
        vmovups xmm0, xmmword ptr [r15]
        vmovaps xmm3, xmm7
        vmovups [rbp+140h+var_150], xmm0
        vmovss  dword ptr [rsp+240h+fmt], xmm6
      }
      RB_DrawText(&v176, v131, v127, *(float *)&_XMM3, fmtf, v126);
      ++v91;
      ++v94;
      ++v92;
      _R14 += 4i64;
    }
    while ( v91 < 6 );
    __asm
    {
      vmovups xmm0, xmmword ptr [r15]
      vmovups [rbp+140h+var_140], xmm0
    }
    RB_EndSurfaceIfNeeded(&v177);
    __asm
    {
      vmovaps xmm15, [rsp+240h+var_C8+8]
      vmovaps xmm14, [rsp+240h+var_B8+8]
    }
    v14 = 0;
    __asm
    {
      vmovaps xmm13, [rsp+240h+var_A8+8]
      vmovaps xmm12, [rsp+240h+var_98+8]
      vmovaps xmm11, [rsp+240h+var_88+8]
      vmovaps xmm10, [rsp+240h+var_78+8]
      vmovaps xmm8, [rsp+240h+var_58+8]
      vmovaps xmm7, [rsp+240h+var_48+8]
      vmovaps xmm6, xmmword ptr [rsp+240h+var_38+8]
    }
  }
  if ( s_gpuLatencyHistogram.calcEnabled )
  {
    v143 = s_latencyEventNamesW;
    do
    {
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2sd xmm0, xmm0, rax
      }
      if ( (s_gpuLatencyHistogram.latency[v14 + 6 * s_gpuLatencyHistogram.latencyIndex] & 0x8000000000000000ui64) != 0i64 )
        __asm { vaddsd  xmm0, xmm0, xmm9 }
      __asm
      {
        vmulsd  xmm0, xmm0, cs:?msecPerRawTimerTick@@3NA; double msecPerRawTimerTick
        vcvtsd2ss xmm1, xmm0, xmm0
      }
      *(double *)&_XMM0 = PIXReportCounter_0(*v143);
      ++v14;
      ++v143;
    }
    while ( (__int64)v143 < (__int64)&RDBG_WELCOME_RAW_1462 );
  }
  __asm { vmovaps xmm9, [rsp+240h+var_68+8] }
}

/*
==============
RB_GPU_DrawTimerTrees
==============
*/
void RB_GPU_DrawTimerTrees(GfxCmdBufContext *gfxContext)
{
  TimerTree *DrawTree; 
  TimerTree *v5; 
  GpuTimerView::DisplayType m_dispType; 
  int v43; 
  __int64 m_historyIdx; 
  unsigned int v46; 
  __int64 v47; 
  unsigned int v48; 
  __int64 v49; 
  unsigned int v50; 
  __int64 v51; 
  unsigned int v52; 
  __int64 v53; 
  unsigned int v54; 
  __int64 v55; 
  unsigned int v56; 
  __int64 v57; 
  unsigned int v58; 
  __int64 v59; 
  unsigned int v60; 
  __int64 v61; 
  unsigned int v62; 
  __int64 v63; 
  unsigned int v64; 
  __int64 v65; 
  unsigned int v66; 
  __int64 v67; 
  unsigned int v68; 
  __int64 v69; 
  float v70; 
  float v71; 
  GfxCmdBufContext v72; 
  GfxCmdBufContext v73; 
  GfxCmdBufContext v74; 
  GfxCmdBufContext v75; 
  GfxCmdBufContext v76; 
  GfxCmdBufContext v77; 
  GfxCmdBufContext v78; 
  GfxCmdBufContext v79; 
  vec2_t v80; 
  vec2_t v81; 

  _RSI = gfxContext;
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
      __asm
      {
        vmovss  xmm0, dword ptr cs:s_drawTopOffsetTarget
        vmovss  xmm1, dword ptr cs:s_drawTopOffsetTarget+4
        vmovaps [rsp+130h+var_30], xmm6
        vmovss  xmm6, dword ptr cs:s_drawTopOffset
        vsubss  xmm5, xmm0, xmm6
        vmulss  xmm0, xmm5, xmm5
        vmovaps [rsp+130h+var_40], xmm7
        vmovss  xmm7, dword ptr cs:s_drawTopOffset+4
        vsubss  xmm4, xmm1, xmm7
        vmulss  xmm2, xmm4, xmm4
        vaddss  xmm1, xmm2, xmm0
        vsqrtss xmm3, xmm1, xmm1
        vcomiss xmm3, cs:__real@43310000
        vmovss  xmm1, cs:__real@3f800000
        vcmpless xmm0, xmm3, cs:__real@80000000
        vblendvps xmm0, xmm3, xmm1, xmm0
        vdivss  xmm1, xmm1, xmm0
        vmulss  xmm2, xmm5, xmm1
        vmulss  xmm5, xmm4, xmm1
      }
      if ( (unsigned int)s_treeDisplayMode <= GPU_TIMERTREE_DISPLAY_MODE_HIDDEN )
      {
        s_drawTopOffset = s_drawTopOffsetTarget;
        __asm
        {
          vmovss  xmm3, dword ptr cs:s_drawTopOffset+4
          vmovss  xmm2, dword ptr cs:s_drawTopOffset
        }
      }
      else
      {
        __asm
        {
          vmulss  xmm0, xmm2, cs:__real@42fa0000
          vmulss  xmm1, xmm5, cs:__real@42fa0000
          vaddss  xmm2, xmm6, xmm0
          vaddss  xmm3, xmm7, xmm1
          vmovss  dword ptr cs:s_drawTopOffset, xmm2
          vmovss  dword ptr cs:s_drawTopOffset+4, xmm3
        }
      }
      __asm
      {
        vaddss  xmm2, xmm2, cs:__real@42480000
        vmovaps xmm7, [rsp+130h+var_40]
        vmovaps xmm6, [rsp+130h+var_30]
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, rax
        vmulss  xmm4, xmm0, cs:__real@3f000000
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, rax
        vmulss  xmm1, xmm0, cs:__real@3f666666
        vaddss  xmm0, xmm3, cs:__real@41f00000
        vmovss  [rbp+30h+var_58], xmm4
        vmovss  [rbp+30h+var_54], xmm1
        vmovss  [rbp+30h+var_60], xmm2
        vmovss  [rbp+30h+var_5C], xmm0
      }
      switch ( s_treeDisplayMode )
      {
        case GPU_TIMERTREE_DISPLAY_MODE_FRAMEBUDGET:
          R_GPU_SetMainPageDisplayType();
          __asm
          {
            vmovups xmm0, xmmword ptr [rsi]
            vmovups [rsp+130h+var_E0], xmm0
          }
          GpuTimerPage::Draw(&s_MainTimerPage, &v72, v5, &v80, &v81, s_showAvgTimeOnly);
          break;
        case GPU_TIMERTREE_DISPLAY_MODE_FRAMEBUDGET_EXPAND:
          R_GPU_SetMainPageDisplayType();
          __asm
          {
            vmovups xmm0, xmmword ptr [rsi]
            vmovups [rsp+130h+var_D0], xmm0
          }
          GpuTimerPage::Draw(&s_MainTimerPage, &v73, v5, &v80, &v81, s_showAvgTimeOnly);
          break;
        case GPU_TIMERTREE_DISPLAY_MODE_ALL:
          R_GPU_SetAllTimerPageDisplayType();
          __asm
          {
            vmovups xmm0, xmmword ptr [rsi]
            vmovups [rbp+30h+var_A0], xmm0
          }
          GpuTimerPage::Draw(&s_AllTimerPage, &v76, v5, &v80, &v81, s_showAvgTimeOnly);
          break;
        case GPU_TIMERTREE_DISPLAY_MODE_ALL_ACTIVE:
          R_GPU_SetAllTimerPageDisplayType();
          __asm
          {
            vmovups xmm0, xmmword ptr [rsi]
            vmovups [rsp+130h+var_C0], xmm0
          }
          GpuTimerPage::Draw(&s_AllTimerPage, &v74, v5, &v80, &v81, s_showAvgTimeOnly);
          break;
        case GPU_TIMERTREE_DISPLAY_MODE_ALL_ACTIVE_IN_PLACE:
          R_GPU_SetAllTimerPageDisplayType();
          __asm
          {
            vmovups xmm0, xmmword ptr [rsi]
            vmovups [rbp+30h+var_B0], xmm0
          }
          GpuTimerPage::Draw(&s_AllTimerPage, &v75, v5, &v80, &v81, s_showAvgTimeOnly);
          break;
        case GPU_TIMERTREE_DISPLAY_MODE_ALL_IN_PLACE:
          R_GPU_SetAllTimerPageDisplayType();
          __asm
          {
            vmovups xmm0, xmmword ptr [rsi]
            vmovups [rbp+30h+var_90], xmm0
          }
          GpuTimerPage::Draw(&s_AllTimerPage, &v77, v5, &v80, &v81, s_showAvgTimeOnly);
          break;
        case GPU_TIMERTREE_DISPLAY_MODE_ALL_ACTIVE_COM_ONLY:
          __asm { vmovups xmm0, xmmword ptr [rsi]; jumptable 00000001422BE0E3 case 8 }
          m_dispType = s_TimerFrameView.m_dispType;
          __asm { vmovss  [rsp+130h+var_F8], xmm4 }
          s_TimerFrameView.m_dispType = PRINT;
          __asm { vmovups [rbp+30h+var_80], xmm0 }
          GpuTimerView::Draw(&s_TimerFrameView, &v78, v5, 0, 0, 1, &v80, v70, NULL);
          v43 = 5;
          s_treeDisplayMode = GPU_TIMERTREE_DISPLAY_MODE_ALL_ACTIVE;
          goto LABEL_16;
        case GPU_TIMERTREE_DISPLAY_MODE_ALL_COM_ONLY:
          __asm { vmovups xmm0, xmmword ptr [rsi]; jumptable 00000001422BE0E3 case 9 }
          m_dispType = s_TimerFrameView.m_dispType;
          __asm { vmovss  [rsp+130h+var_F8], xmm4 }
          s_TimerFrameView.m_dispType = PRINT;
          __asm { vmovups [rbp+30h+var_70], xmm0 }
          GpuTimerView::Draw(&s_TimerFrameView, &v79, v5, 0, 1, 1, &v80, v71, NULL);
          v43 = 4;
          s_treeDisplayMode = GPU_TIMERTREE_DISPLAY_MODE_ALL;
LABEL_16:
          s_TimerFrameView.m_dispType = m_dispType;
          Dvar_SetInt_Internal(r_gpuTimers, v43);
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
    v46 = s_SunShadowView.m_ViewTotalUs.m_data[m_historyIdx];
    v47 = s_SpotShadowView.m_historyIdx;
    bbperf_sunshadow_total = v46;
    if ( s_SpotShadowView.m_historyIdx >= 0x40ui64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 87, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
      __debugbreak();
    v48 = s_SpotShadowView.m_ViewTotalUs.m_data[v47];
    v49 = s_DepthHackView.m_historyIdx;
    bbperf_spotshadow_total = v48;
    if ( s_DepthHackView.m_historyIdx >= 0x40ui64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 87, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
      __debugbreak();
    v50 = s_DepthHackView.m_ViewTotalUs.m_data[v49];
    v51 = s_OpaqueView.m_historyIdx;
    bbperf_depthhack_total = v50;
    if ( s_OpaqueView.m_historyIdx >= 0x40ui64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 87, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
      __debugbreak();
    v52 = s_OpaqueView.m_ViewTotalUs.m_data[v51];
    v53 = s_TransView.m_historyIdx;
    bbperf_opaque_total = v52;
    if ( s_TransView.m_historyIdx >= 0x40ui64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 87, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
      __debugbreak();
    v54 = s_TransView.m_ViewTotalUs.m_data[v53];
    v55 = s_EmissView.m_historyIdx;
    bbperf_trans_total = v54;
    if ( s_EmissView.m_historyIdx >= 0x40ui64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 87, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
      __debugbreak();
    v56 = s_EmissView.m_ViewTotalUs.m_data[v55];
    v57 = s_LightingView.m_historyIdx;
    bbperf_emissive_total = v56;
    if ( s_LightingView.m_historyIdx >= 0x40ui64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 87, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
      __debugbreak();
    v58 = s_LightingView.m_ViewTotalUs.m_data[v57];
    v59 = s_VolumetricsView.m_historyIdx;
    bbperf_lighting_total = v58;
    if ( s_VolumetricsView.m_historyIdx >= 0x40ui64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 87, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
      __debugbreak();
    v60 = s_VolumetricsView.m_ViewTotalUs.m_data[v59];
    v61 = s_Dxr.m_historyIdx;
    bbperf_volumetrics_total = v60;
    if ( s_Dxr.m_historyIdx >= 0x40ui64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 87, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
      __debugbreak();
    v62 = s_Dxr.m_ViewTotalUs.m_data[v61];
    v63 = s_PostFxView.m_historyIdx;
    bbperf_dxr_total = v62;
    if ( s_PostFxView.m_historyIdx >= 0x40ui64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 87, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
      __debugbreak();
    v64 = s_PostFxView.m_ViewTotalUs.m_data[v63];
    v65 = s_AntiAliasView.m_historyIdx;
    bbperf_postfx_total = v64;
    if ( s_AntiAliasView.m_historyIdx >= 0x40ui64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 87, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
      __debugbreak();
    v66 = s_AntiAliasView.m_ViewTotalUs.m_data[v65];
    v67 = s_UIView.m_historyIdx;
    bbperf_antialias_total = v66;
    if ( s_UIView.m_historyIdx >= 0x40ui64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 87, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
      __debugbreak();
    v68 = s_UIView.m_ViewTotalUs.m_data[v67];
    v69 = s_ComputeView.m_historyIdx;
    bbperf_ui_total = v68;
    if ( s_ComputeView.m_historyIdx >= 0x40ui64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 87, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
      __debugbreak();
    bbperf_compute_total = s_ComputeView.m_ViewTotalUs.m_data[v69];
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
  const dvar_t *v14; 
  unsigned __int64 *counts; 
  unsigned __int64 *v17; 
  __int64 v18; 
  GfxColor *horror; 
  __int64 v46; 
  __int64 v47; 
  float v66; 
  float v67; 
  float v68; 
  float v69; 
  float v70; 
  float v71; 
  float v72; 
  float v73; 
  float v74; 
  float v75; 
  float v76; 
  float v77; 
  GfxCmdBufContext v78; 

  _RSI = gfxContext;
  if ( s_treeDisplayMode )
  {
    GPUTimerTree::BeginTimer(GPU_TIMER_OVERHEAD, DRAWLIST_BACKEND_COUNT, r_glob.backEndFrameCount);
    R_ProfBeginNamedEvent(_RSI->state, "GpuTimer Overhead");
    __asm
    {
      vmovups xmm0, xmmword ptr [rsi]
      vmovups [rsp+108h+var_A8], xmm0
    }
    RB_GPU_DrawTimerTrees(&v78);
    R_ProfEndNamedEvent(_RSI->state);
    if ( s_treeDisplayMode )
      GPUTimerTree::EndTimer(r_glob.backEndFrameCount);
  }
  v14 = r_gpuFrameHistogram;
  if ( r_gpuFrameHistogram->current.enabled )
  {
    __asm
    {
      vmovups xmm0, xmmword ptr [rsi]
      vmovups [rsp+108h+var_A8], xmm0
    }
    RB_GPU_DrawFrameHistogram(&v78);
    v14 = r_gpuFrameHistogram;
  }
  if ( v14->current.enabled )
  {
    counts = s_gpuDynamicResolutionHistogram.counts;
    __asm { vmovaps [rsp+108h+var_18], xmm6 }
    v17 = s_gpuDynamicResolutionHistogram.counts;
    __asm { vmovaps [rsp+108h+var_28], xmm7 }
    v18 = 4i64;
    __asm
    {
      vmovaps [rsp+108h+var_38], xmm8
      vmovaps [rsp+108h+var_48], xmm9
      vmovaps [rsp+108h+var_58], xmm10
      vmovaps [rsp+108h+var_68], xmm11
      vmovss  xmm11, cs:s_gpuDynamicResolutionHistogram.cellWidth
      vmovaps [rsp+108h+var_78], xmm12
      vmovss  xmm12, cs:s_gpuDynamicResolutionHistogram.topEdgeY
      vmovaps [rsp+108h+var_88], xmm13
      vmovss  xmm13, cs:s_gpuDynamicResolutionHistogram.cellHeight
      vmovaps [rsp+108h+var_98], xmm14
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
      v17 += 4;
      --v18;
    }
    while ( v18 );
    __asm
    {
      vaddss  xmm14, xmm11, cs:s_gpuDynamicResolutionHistogram.gutterWidth
      vmovss  xmm6, cs:__real@3f800000
      vsubss  xmm3, xmm12, cs:__real@40c00000
      vpaddq  xmm1, xmm2, xmm1
      vpsrldq xmm0, xmm1, 8
      vpaddq  xmm1, xmm1, xmm0
      vmovups xmm0, xmmword ptr [rsi]
      vmovups [rsp+108h+var_A8], xmm0
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, rax
      vmovss  [rsp+108h+var_C0], xmm6
      vmovss  [rsp+108h+var_C8], xmm6
      vmovq   rbx, xmm1
      vmovss  xmm1, cs:s_gpuDynamicResolutionHistogram.rightEdgeX
      vsubss  xmm7, xmm1, xmm14
      vmulss  xmm1, xmm0, xmm14
      vmovss  xmm0, cs:__real@40800000
      vxorps  xmm8, xmm8, xmm8
      vmovss  [rsp+108h+var_D0], xmm8
      vmovss  [rsp+108h+var_D8], xmm8
      vmovss  [rsp+108h+var_E0], xmm0
      vsubss  xmm2, xmm7, xmm1
      vmovss  [rsp+108h+var_E8], xmm11
    }
    RB_DrawStretchPic(&v78, rgp.whiteMaterial, *(float *)&_XMM2, *(float *)&_XMM3, v66, v68, v70, v72, v74, v76, s_gpuDynamicResolutionHistogram.currentHorror.packed, GFX_PRIM_STATS_DEBUG);
    __asm
    {
      vmovss  xmm9, cs:__real@5f800000
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, rbx
    }
    if ( _RBX < 0 )
      __asm { vaddss  xmm0, xmm0, xmm9 }
    __asm { vdivss  xmm10, xmm6, xmm0 }
    horror = s_gpuDynamicResolutionHistogram.horror;
    v46 = 16i64;
    do
    {
      v47 = *counts;
      __asm
      {
        vmovups xmm0, xmmword ptr [rsi]
        vxorps  xmm1, xmm1, xmm1
        vmovups [rsp+108h+var_A8], xmm0
        vcvtsi2ss xmm1, xmm1, rax
      }
      if ( v47 < 0 )
        __asm { vaddss  xmm1, xmm1, xmm9 }
      __asm
      {
        vmovss  [rsp+108h+var_C0], xmm6
        vmovss  [rsp+108h+var_C8], xmm6
        vmovss  [rsp+108h+var_D0], xmm8
        vmulss  xmm0, xmm1, xmm10
        vmulss  xmm1, xmm0, xmm13
        vmaxss  xmm2, xmm1, xmm6
        vmovss  [rsp+108h+var_D8], xmm8
        vmovss  [rsp+108h+var_E0], xmm2
        vmovaps xmm2, xmm7
        vmovaps xmm3, xmm12
        vmovss  [rsp+108h+var_E8], xmm11
      }
      RB_DrawStretchPic(&v78, rgp.whiteMaterial, *(float *)&_XMM2, *(float *)&_XMM3, v67, v69, v71, v73, v75, v77, horror->packed, GFX_PRIM_STATS_DEBUG);
      ++horror;
      ++counts;
      __asm { vsubss  xmm7, xmm7, xmm14 }
      --v46;
    }
    while ( v46 );
    __asm
    {
      vmovups xmm0, xmmword ptr [rsi]
      vmovups [rsp+108h+var_A8], xmm0
    }
    RB_EndSurfaceIfNeeded(&v78);
    __asm
    {
      vmovaps xmm14, [rsp+108h+var_98]
      vmovaps xmm13, [rsp+108h+var_88]
      vmovaps xmm12, [rsp+108h+var_78]
      vmovaps xmm11, [rsp+108h+var_68]
      vmovaps xmm10, [rsp+108h+var_58]
      vmovaps xmm9, [rsp+108h+var_48]
      vmovaps xmm8, [rsp+108h+var_38]
      vmovaps xmm7, [rsp+108h+var_28]
      vmovaps xmm6, [rsp+108h+var_18]
    }
  }
  else
  {
    memset_0(s_gpuDynamicResolutionHistogram.counts, 0, sizeof(s_gpuDynamicResolutionHistogram.counts));
    s_gpuDynamicResolutionHistogram.current = 0;
  }
  __asm
  {
    vmovups xmm0, xmmword ptr [rsi]
    vmovups [rsp+108h+var_A8], xmm0
  }
  RB_GPU_DrawLatencyHistogram(&v78);
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
  __asm
  {
    vmovss  xmm2, cs:__real@3a83126f
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rax
    vmulss  xmm0, xmm0, xmm2
    vmovss  dword ptr [rcx], xmm0
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, rax
    vmulss  xmm0, xmm1, xmm2
    vmovss  dword ptr [rdx], xmm0
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, rax
    vmulss  xmm0, xmm1, xmm2
    vmovss  dword ptr [r8], xmm0
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, rax
    vmulss  xmm0, xmm1, xmm2
    vmovss  dword ptr [r9], xmm0
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, rax
  }
  _RAX = pOutTrans;
  __asm
  {
    vmulss  xmm0, xmm1, xmm2
    vmovss  dword ptr [rax], xmm0
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rax
  }
  _RAX = pOutEmiss;
  __asm
  {
    vmulss  xmm1, xmm0, xmm2
    vxorps  xmm0, xmm0, xmm0
    vmovss  dword ptr [rax], xmm1
    vcvtsi2ss xmm0, xmm0, rax
  }
  _RAX = pOutLighting;
  __asm
  {
    vmulss  xmm1, xmm0, xmm2
    vxorps  xmm0, xmm0, xmm0
    vmovss  dword ptr [rax], xmm1
    vcvtsi2ss xmm0, xmm0, rax
  }
  _RAX = pOutVolumetrics;
  __asm
  {
    vmulss  xmm1, xmm0, xmm2
    vxorps  xmm0, xmm0, xmm0
    vmovss  dword ptr [rax], xmm1
    vcvtsi2ss xmm0, xmm0, rax
  }
  _RAX = pOutDxr;
  __asm
  {
    vmulss  xmm1, xmm0, xmm2
    vxorps  xmm0, xmm0, xmm0
    vmovss  dword ptr [rax], xmm1
    vcvtsi2ss xmm0, xmm0, rax
  }
  _RAX = pOutPostFx;
  __asm
  {
    vmulss  xmm1, xmm0, xmm2
    vxorps  xmm0, xmm0, xmm0
    vmovss  dword ptr [rax], xmm1
    vcvtsi2ss xmm0, xmm0, rax
  }
  _RAX = pOutAntiAliasing;
  __asm
  {
    vmulss  xmm1, xmm0, xmm2
    vxorps  xmm0, xmm0, xmm0
    vmovss  dword ptr [rax], xmm1
    vcvtsi2ss xmm0, xmm0, rax
  }
  _RAX = pOutUI;
  __asm
  {
    vmulss  xmm1, xmm0, xmm2
    vxorps  xmm0, xmm0, xmm0
    vmovss  dword ptr [rax], xmm1
    vcvtsi2ss xmm0, xmm0, rax
  }
  _RAX = pOutCompute;
  __asm
  {
    vmulss  xmm1, xmm0, xmm2
    vmovss  dword ptr [rax], xmm1
  }
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

void __fastcall R_GPU_InitTimers(__int64 a1, __int64 a2, double _XMM2_8, double _XMM3_8)
{
  unsigned int v5; 
  const char **p_name; 
  const char *v7; 
  unsigned __int64 v8; 
  GfxFont *v9; 
  __int64 v42; 
  __int64 v43; 

  if ( !s_timersInited )
  {
    v5 = 0;
    p_name = &s_timerBarInfo[0].name;
    __asm { vmovaps [rsp+58h+var_18], xmm6 }
    do
    {
      if ( *((_DWORD *)p_name - 2) != v5 )
      {
        LODWORD(v43) = v5;
        LODWORD(v42) = *((_DWORD *)p_name - 2);
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_gpu_timer.cpp", 2535, ASSERT_TYPE_ASSERT, "(s_timerBarInfo[i].id == static_cast<GPUTimerId>(i))", "%s\n\tTimerbarInfo Id (%d) doesn't match enum value (%d)\n", "s_timerBarInfo[i].id == static_cast<GPUTimerId>(i)", v42, v43) )
          __debugbreak();
      }
      v7 = *p_name;
      v8 = -1i64;
      do
        ++v8;
      while ( v7[v8] );
      if ( v8 >= 0x18 )
        Com_PrintWarning(8, "Warning: GPU Timers - timer description '%s' exceeds suggested %d character limit, will likely overlap time column.\n", v7, 24i64);
      ++v5;
      p_name += 2;
    }
    while ( v5 < 0x81 );
    GPUTimerTree::Init();
    GPUTimerTree::RegisterSystemOverheadTimerId(GPU_TIMER_WAIT_FLIP);
    GPUTimerTree::RegisterSystemOverheadTimerId(GPU_TIMER_OVERHEAD);
    v9 = R_RegisterFont("fonts/fira_mono_regular.ttf", 18);
    GpuTimerView::InitViews(v9);
    GpuTimerPage::InitPages();
    R_GPU_SetupGpuTimerPage();
    __asm
    {
      vmovss  xmm6, cs:__real@40800000
      vxorps  xmm3, xmm3, xmm3
      vcvtsi2ss xmm3, xmm3, rax
      vmulss  xmm0, xmm3, cs:__real@3e5f3b64
      vsubss  xmm1, xmm3, xmm0
      vmovss  cs:?s_gpuFrameHistogramStyle@@3UGPUFrameHistogramStyle@@A.leftEdgeX, xmm1; GPUFrameHistogramStyle s_gpuFrameHistogramStyle
      vmulss  xmm1, xmm3, cs:__real@3b8882f1
      vxorps  xmm2, xmm2, xmm2
      vcvtsi2ss xmm2, xmm2, rax
      vmulss  xmm0, xmm2, cs:__real@3e6353f8
      vmovss  cs:?s_gpuFrameHistogramStyle@@3UGPUFrameHistogramStyle@@A.tickWidth, xmm1; GPUFrameHistogramStyle s_gpuFrameHistogramStyle
      vmovss  xmm1, cs:__real@40000000
      vmovss  cs:?s_gpuFrameHistogramStyle@@3UGPUFrameHistogramStyle@@A.topEdgeY, xmm0; GPUFrameHistogramStyle s_gpuFrameHistogramStyle
      vmulss  xmm0, xmm2, cs:__real@3d978d50
    }
    s_gpuFrameHistogramStyle.overMaxColor.packed = 1428165298;
    s_gpuFrameHistogramStyle.overBudgetColor.packed = 1427765503;
    __asm
    {
      vmovss  cs:?s_gpuFrameHistogramStyle@@3UGPUFrameHistogramStyle@@A.padWidth, xmm1; GPUFrameHistogramStyle s_gpuFrameHistogramStyle
      vmovss  cs:?s_gpuFrameHistogramStyle@@3UGPUFrameHistogramStyle@@A.tickHeight, xmm0; GPUFrameHistogramStyle s_gpuFrameHistogramStyle
      vmovss  cs:?s_gpuFrameHistogramStyle@@3UGPUFrameHistogramStyle@@A.rowPadHeight, xmm6; GPUFrameHistogramStyle s_gpuFrameHistogramStyle
    }
    s_gpuFrameHistogramStyle.swapColor.packed = 1426063360;
    s_gpuFrameHistogramStyle.endFrameColor.packed = 1442840575;
    s_gpuFrameHistogramStyle.durationColor.packed = 1442810506;
    s_gpuFrameHistogramStyle.swapColumns = 30;
    s_gpuFrameHistogramStyle.tickBudgetUs = 18000i64;
    s_gpuFrameHistogramStyle.tickMaxUs = 50000i64;
    r_gpuFrameHistogram = Dvar_RegisterBool("SLLPMLT", 0, 0, "Enables a visual histogram of time between page flips.");
    __asm
    {
      vxorps  xmm3, xmm3, xmm3
      vcvtsi2ss xmm3, xmm3, rax
      vmulss  xmm0, xmm3, cs:__real@3d7837b5
      vsubss  xmm1, xmm3, xmm0
      vmovss  cs:s_gpuDynamicResolutionHistogram.rightEdgeX, xmm1
      vmulss  xmm1, xmm3, cs:__real@3c087a8d
      vxorps  xmm2, xmm2, xmm2
      vcvtsi2ss xmm2, xmm2, rax
      vmulss  xmm0, xmm2, cs:__real@3f46e979
      vmovss  cs:s_gpuDynamicResolutionHistogram.topEdgeY, xmm0
      vmulss  xmm0, xmm2, cs:__real@3d72b021
      vmovss  cs:s_gpuDynamicResolutionHistogram.cellHeight, xmm0
      vmulss  xmm0, xmm3, cs:__real@3e555476
      vmovss  cs:s_gpuDynamicResolutionHistogram.cellWidth, xmm1
      vmovss  xmm1, cs:__real@42700000
      vmovss  cs:s_gpuLatencyHistogram.width, xmm0
      vmovss  cs:s_gpuDynamicResolutionHistogram.gutterWidth, xmm6
    }
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
    __asm
    {
      vmovss  xmm0, cs:__real@40a00000
      vmovss  cs:s_gpuLatencyHistogram.tickTime, xmm0
      vmovss  cs:s_gpuLatencyHistogram.rightTime, xmm1
    }
    s_gpuLatencyHistogram.eventFont = R_RegisterFont("fonts/fira_mono_regular.ttf", 12);
    s_gpuLatencyHistogram.tickFont = R_RegisterFont("fonts/fira_mono_regular.ttf", 10);
    R_TextHeight(s_gpuLatencyHistogram.eventFont);
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
      vxorps  xmm1, xmm1, xmm1
      vcvtsi2ss xmm1, xmm1, rax
      vmovss  cs:s_gpuLatencyHistogram.eventFontHeight, xmm0
      vmulss  xmm0, xmm1, cs:__real@3d000000
      vxorps  xmm1, xmm1, xmm1
      vcvtsi2ss xmm1, xmm1, rax
      vmovss  cs:s_gpuLatencyHistogram.rightPad, xmm0
      vmulss  xmm0, xmm1, cs:__real@3ecccccd
      vmovss  cs:s_gpuLatencyHistogram.bottomPad, xmm0
    }
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
    __asm { vmovaps xmm6, [rsp+58h+var_18] }
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
  __int64 v17; 
  __int64 v18; 
  int v19; 
  unsigned int v23; 
  unsigned __int64 CPUTimeVSync; 
  int v25; 
  unsigned int i; 
  unsigned __int64 v27; 

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
      __asm
      {
        vmovsd  xmm2, cs:__real@4030aaaaaaaaaaab
        vmovsd  xmm1, cs:__real@43e0000000000000
      }
      do
      {
        v17 = 6i64;
        v18 = 6 * latencyIndex;
        v19 = 4 * ((latencyIndex + 199) % 0xC8) - v18;
        do
        {
          __asm
          {
            vdivsd  xmm0, xmm2, cs:?msecPerRawTimerTick@@3NA; double msecPerRawTimerTick
            vcomisd xmm0, xmm1
            vsubsd  xmm0, xmm0, xmm1
            vcomisd xmm0, xmm1
            vcvttsd2si rax, xmm0
          }
          s_gpuLatencyHistogram.latency[v18] = _RAX + s_gpuLatencyHistogram.latency[(unsigned int)(v19 + v18)];
          v18 = (unsigned int)(v18 + 1);
          --v17;
        }
        while ( v17 );
        latencyIndex = (latencyIndex + 1) % 0xC8;
        nextVsyncCount = s_gpuLatencyHistogram.nextVsyncCount + 1;
        s_gpuLatencyHistogram.nextVsyncCount = nextVsyncCount;
      }
      while ( nextVsyncCount < statistics[v8].VSyncCount );
    }
    v23 = 0;
    s_gpuLatencyHistogram.nextVsyncCount = nextVsyncCount + 1;
    CPUTimeVSync = statistics[v8].CPUTimeVSync;
    v25 = 6 * latencyIndex;
    do
    {
      for ( i = 0; i < 4; ++i )
      {
        if ( s_gpuLatencyHistogram.eventFrame[4 * v23 + i] == v3 )
          break;
      }
      if ( i == 4 || (v27 = s_gpuLatencyHistogram.eventTime[4 * v23 + i], CPUTimeVSync < v27) )
        s_gpuLatencyHistogram.latency[v25 + v23] = 0i64;
      else
        s_gpuLatencyHistogram.latency[v25 + v23] = CPUTimeVSync - v27;
      ++v23;
    }
    while ( v23 < 6 );
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

void __fastcall R_GPU_SetDrawTopOffset(double x, double y)
{
  __asm
  {
    vmovss  dword ptr cs:s_drawTopOffsetTarget, xmm0
    vmovss  dword ptr cs:s_drawTopOffsetTarget+4, xmm1
  }
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


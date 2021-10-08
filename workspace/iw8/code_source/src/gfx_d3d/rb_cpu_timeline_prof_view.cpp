/*
==============
CPUTimlineProfilerView::ProcessGPUTimerFrame
==============
*/

void __fastcall CPUTimlineProfilerView::ProcessGPUTimerFrame(CPUTimlineProfilerView *this, unsigned __int64 frameStartTimeGpuUs, unsigned __int64 frameEndTimeGpuUs, unsigned __int64 frameSyncMarkerGpuUs, unsigned __int64 frameSyncMarkerCpuRaw, CPUTimelineProfGPURange *timers, unsigned int *timerRangesStart, unsigned int *timerRangesEnd)
{
  ?ProcessGPUTimerFrame@CPUTimlineProfilerView@@QEAAX_K000PEAUCPUTimelineProfGPURange@@PEAI2@Z(this, frameStartTimeGpuUs, frameEndTimeGpuUs, frameSyncMarkerGpuUs, frameSyncMarkerCpuRaw, timers, timerRangesStart, timerRangesEnd);
}

/*
==============
R_IsCPUTimelineProfilerViewEnabled
==============
*/

bool __fastcall R_IsCPUTimelineProfilerViewEnabled()
{
  return ?R_IsCPUTimelineProfilerViewEnabled@@YA_NXZ();
}

/*
==============
CPUTimelineProfilerView_Shutdown
==============
*/

void CPUTimelineProfilerView_Shutdown(void)
{
  ?CPUTimelineProfilerView_Shutdown@@YAXXZ();
}

/*
==============
CPUTimlineProfilerView::Toggle
==============
*/

void __fastcall CPUTimlineProfilerView::Toggle(CPUTimlineProfilerView *this)
{
  ?Toggle@CPUTimlineProfilerView@@QEAAXXZ(this);
}

/*
==============
CPUTimelineProfilerView_InitMem
==============
*/

void CPUTimelineProfilerView_InitMem(void)
{
  ?CPUTimelineProfilerView_InitMem@@YAXXZ();
}

/*
==============
CPUTimlineProfilerView::Update
==============
*/

unsigned __int64 __fastcall CPUTimlineProfilerView::Update(CPUTimlineProfilerView *this, int numFramesToConsume)
{
  return ?Update@CPUTimlineProfilerView@@AEAA_KH@Z(this, numFramesToConsume);
}

/*
==============
CPUTimlineProfilerView::Unpause
==============
*/

void __fastcall CPUTimlineProfilerView::Unpause(CPUTimlineProfilerView *this)
{
  ?Unpause@CPUTimlineProfilerView@@QEAAXXZ(this);
}

/*
==============
CPUTimlineProfilerView::SetBreakpointThreshold
==============
*/

void __fastcall CPUTimlineProfilerView::SetBreakpointThreshold(CPUTimlineProfilerView *this, float threshold)
{
  ?SetBreakpointThreshold@CPUTimlineProfilerView@@QEAAXM@Z(this, threshold);
}

/*
==============
CPUTimlineProfilerView::CPUTimlineProfilerView
==============
*/

void __fastcall CPUTimlineProfilerView::CPUTimlineProfilerView(CPUTimlineProfilerView *this)
{
  ??0CPUTimlineProfilerView@@QEAA@XZ(this);
}

/*
==============
CPUTimlineProfilerView::DrawGpuTimerInfo
==============
*/

void __fastcall CPUTimlineProfilerView::DrawGpuTimerInfo(CPUTimlineProfilerView *this, GfxCmdBufContext *gfxContext, const CPUTimlineProfilerView::TimelineDisplayParams *timelineParams, int timelineXPos, int timelineYPos, int timelineWidth, int timelineHeight, int timelineHeaderWidth, int mouseX, int mouseY, int selectedGpuFrame, int selectedGpuTimer)
{
  ?DrawGpuTimerInfo@CPUTimlineProfilerView@@AEAAXUGfxCmdBufContext@@AEBUTimelineDisplayParams@1@HHHHHHHHH@Z(this, gfxContext, timelineParams, timelineXPos, timelineYPos, timelineWidth, timelineHeight, timelineHeaderWidth, mouseX, mouseY, selectedGpuFrame, selectedGpuTimer);
}

/*
==============
CPUTimlineProfilerView::UpdateAndDraw
==============
*/

void __fastcall CPUTimlineProfilerView::UpdateAndDraw(CPUTimlineProfilerView *this, GfxCmdBufContext *gfxContext)
{
  ?UpdateAndDraw@CPUTimlineProfilerView@@QEAAXUGfxCmdBufContext@@@Z(this, gfxContext);
}

/*
==============
CPUTimlineProfilerView::InitMem
==============
*/

void __fastcall CPUTimlineProfilerView::InitMem(CPUTimlineProfilerView *this)
{
  ?InitMem@CPUTimlineProfilerView@@QEAAXXZ(this);
}

/*
==============
CPUTimlineProfilerView::FlushProfilerBars
==============
*/

void __fastcall CPUTimlineProfilerView::FlushProfilerBars(CPUTimlineProfilerView *this, GfxCmdBufContext *gfxContext, unsigned int firstBar, unsigned int lastBar)
{
  ?FlushProfilerBars@CPUTimlineProfilerView@@AEAAXUGfxCmdBufContext@@II@Z(this, gfxContext, firstBar, lastBar);
}

/*
==============
RB_DrawCPUTimelineProfile
==============
*/

void __fastcall RB_DrawCPUTimelineProfile(GfxCmdBufContext *gfxContext)
{
  ?RB_DrawCPUTimelineProfile@@YAXUGfxCmdBufContext@@@Z(gfxContext);
}

/*
==============
CPUTimelineProfilerView_InitDevGui
==============
*/

void CPUTimelineProfilerView_InitDevGui(void)
{
  ?CPUTimelineProfilerView_InitDevGui@@YAXXZ();
}

/*
==============
CPUTimlineProfilerView::Shutdown
==============
*/

void __fastcall CPUTimlineProfilerView::Shutdown(CPUTimlineProfilerView *this)
{
  ?Shutdown@CPUTimlineProfilerView@@QEAAXXZ(this);
}

/*
==============
CPUTimlineProfilerView::Pause
==============
*/

void __fastcall CPUTimlineProfilerView::Pause(CPUTimlineProfilerView *this)
{
  ?Pause@CPUTimlineProfilerView@@QEAAXXZ(this);
}

/*
==============
CPUTimlineProfilerView::ComputeSucknessScore
==============
*/

double __fastcall CPUTimlineProfilerView::ComputeSucknessScore(const CPUTimelineProfiler::SampleCPUStats *stats, CPUTimelineProfiler::CPUStatsSet statsSet)
{
  double result; 

  *(float *)&result = ?ComputeSucknessScore@CPUTimlineProfilerView@@CAMAEBUSampleCPUStats@CPUTimelineProfiler@@W4CPUStatsSet@3@@Z(stats, statsSet);
  return result;
}

/*
==============
CPUTimlineProfilerView::ProfileToColor
==============
*/

GfxColor __fastcall CPUTimlineProfilerView::ProfileToColor(unsigned int a)
{
  return ?ProfileToColor@CPUTimlineProfilerView@@CA?ATGfxColor@@I@Z(a);
}

/*
==============
CPUTimlineProfilerView::ComputeSucknessScore
==============
*/

double __fastcall CPUTimlineProfilerView::ComputeSucknessScore(unsigned __int64 cacheAccesses, unsigned __int64 l2CacheMisses, unsigned __int64 instructionsRetired)
{
  double result; 

  *(float *)&result = ?ComputeSucknessScore@CPUTimlineProfilerView@@CAM_K00@Z(cacheAccesses, l2CacheMisses, instructionsRetired);
  return result;
}

/*
==============
CPUTimlineProfilerView::GetCPUStatsModePrefix
==============
*/

const char *__fastcall CPUTimlineProfilerView::GetCPUStatsModePrefix(CPUTimelineProfiler::CPUStatsSet statsSet)
{
  return ?GetCPUStatsModePrefix@CPUTimlineProfilerView@@CAPEBDW4CPUStatsSet@CPUTimelineProfiler@@@Z(statsSet);
}

/*
==============
CPUTimlineProfilerView::DrawTimeScale
==============
*/

void __fastcall CPUTimlineProfilerView::DrawTimeScale(CPUTimlineProfilerView *this, GfxCmdBufContext *gfxContext, const CPUTimlineProfilerView::TimelineDisplayParams *timelineParams, int xPos, int yPos, int width, int height, int headerWidth)
{
  ?DrawTimeScale@CPUTimlineProfilerView@@AEAAXUGfxCmdBufContext@@AEBUTimelineDisplayParams@1@HHHHH@Z(this, gfxContext, timelineParams, xPos, yPos, width, height, headerWidth);
}

/*
==============
CPUTimlineProfilerView::DrawSampleInfo
==============
*/

void __fastcall CPUTimlineProfilerView::DrawSampleInfo(CPUTimlineProfilerView *this, GfxCmdBufContext *gfxContext, const CPUTimlineProfilerView::TimelineDisplayParams *timelineParams, int timelineXPos, int timelineYPos, int timelineWidth, int timelineHeight, int timelineHeaderWidth, int mouseX, int mouseY, int selectedSample)
{
  ?DrawSampleInfo@CPUTimlineProfilerView@@AEAAXUGfxCmdBufContext@@AEBUTimelineDisplayParams@1@HHHHHHHH@Z(this, gfxContext, timelineParams, timelineXPos, timelineYPos, timelineWidth, timelineHeight, timelineHeaderWidth, mouseX, mouseY, selectedSample);
}

/*
==============
CPUTimlineProfilerView::DrawMouseCursor
==============
*/

void __fastcall CPUTimlineProfilerView::DrawMouseCursor(CPUTimlineProfilerView *this, GfxCmdBufContext *gfxContext, int mouseX, int mouseY)
{
  ?DrawMouseCursor@CPUTimlineProfilerView@@AEAAXUGfxCmdBufContext@@HH@Z(this, gfxContext, mouseX, mouseY);
}

/*
==============
CPUTimlineProfilerView::DrawEventInfo
==============
*/

void __fastcall CPUTimlineProfilerView::DrawEventInfo(CPUTimlineProfilerView *this, GfxCmdBufContext *gfxContext, const CPUTimlineProfilerView::TimelineDisplayParams *timelineParams, int timelineXPos, int timelineYPos, int timelineWidth, int timelineHeight, int timelineHeaderWidth, int mouseX, int mouseY, int selectedEvent)
{
  ?DrawEventInfo@CPUTimlineProfilerView@@AEAAXUGfxCmdBufContext@@AEBUTimelineDisplayParams@1@HHHHHHHH@Z(this, gfxContext, timelineParams, timelineXPos, timelineYPos, timelineWidth, timelineHeight, timelineHeaderWidth, mouseX, mouseY, selectedEvent);
}

/*
==============
CPUTimlineProfilerView::Init
==============
*/

void __fastcall CPUTimlineProfilerView::Init(CPUTimlineProfilerView *this)
{
  ?Init@CPUTimlineProfilerView@@QEAAXXZ(this);
}

/*
==============
CPUTimlineProfilerView::DrawEventTimeline
==============
*/

int __fastcall CPUTimlineProfilerView::DrawEventTimeline(CPUTimlineProfilerView *this, GfxCmdBufContext *gfxContext, const CPUTimlineProfilerView::TimelineDisplayParams *timelineParams, int xPos, int yPos, int width, int headerWidth, int mouseX, int mouseY, int *selectedEvent)
{
  return ?DrawEventTimeline@CPUTimlineProfilerView@@AEAAHUGfxCmdBufContext@@AEBUTimelineDisplayParams@1@HHHHHHAEAH@Z(this, gfxContext, timelineParams, xPos, yPos, width, headerWidth, mouseX, mouseY, selectedEvent);
}

/*
==============
CPUTimelineProfilerView_InitDvars
==============
*/

void CPUTimelineProfilerView_InitDvars(void)
{
  ?CPUTimelineProfilerView_InitDvars@@YAXXZ();
}

/*
==============
CPUTimelineProfilerView_Init
==============
*/

void CPUTimelineProfilerView_Init(void)
{
  ?CPUTimelineProfilerView_Init@@YAXXZ();
}

/*
==============
CPUTimlineProfilerView::CopySamplesToDisplay
==============
*/

void __fastcall CPUTimlineProfilerView::CopySamplesToDisplay(CPUTimlineProfilerView *this, unsigned __int64 rangeStart, unsigned __int64 rangeEnd)
{
  ?CopySamplesToDisplay@CPUTimlineProfilerView@@AEAAX_K0@Z(this, rangeStart, rangeEnd);
}

/*
==============
CPUTimlineProfilerView::DrawBackground
==============
*/

void __fastcall CPUTimlineProfilerView::DrawBackground(CPUTimlineProfilerView *this, GfxCmdBufContext *gfxContext, int xPos, int yPos, int width, int height)
{
  ?DrawBackground@CPUTimlineProfilerView@@AEAAXUGfxCmdBufContext@@HHHH@Z(this, gfxContext, xPos, yPos, width, height);
}

/*
==============
CPUTimlineProfilerView::InitDvars
==============
*/

void __fastcall CPUTimlineProfilerView::InitDvars(CPUTimlineProfilerView *this)
{
  ?InitDvars@CPUTimlineProfilerView@@QEAAXXZ(this);
}

/*
==============
CPUTimlineProfilerView::GPUTimeToCPUTime
==============
*/

unsigned __int64 __fastcall CPUTimlineProfilerView::GPUTimeToCPUTime(CPUTimlineProfilerView *this, const CPUTimlineProfilerView::GPUFrame *gpuFrame, unsigned __int64 gpuTimeUs)
{
  return ?GPUTimeToCPUTime@CPUTimlineProfilerView@@AEBA_KAEBUGPUFrame@1@_K@Z(this, gpuFrame, gpuTimeUs);
}

/*
==============
CPUTimlineProfilerView::GetColorForSucknessScore
==============
*/

GfxColor __fastcall CPUTimlineProfilerView::GetColorForSucknessScore(float score)
{
  return ?GetColorForSucknessScore@CPUTimlineProfilerView@@CA?ATGfxColor@@M@Z(score);
}

/*
==============
CPUTimlineProfilerView::UpdateCPUStatsSet
==============
*/

void __fastcall CPUTimlineProfilerView::UpdateCPUStatsSet(CPUTimlineProfilerView *this)
{
  ?UpdateCPUStatsSet@CPUTimlineProfilerView@@AEAAXXZ(this);
}

/*
==============
CPUTimlineProfilerView::UpdateMouse
==============
*/

void __fastcall CPUTimlineProfilerView::UpdateMouse(CPUTimlineProfilerView *this)
{
  ?UpdateMouse@CPUTimlineProfilerView@@AEAAXXZ(this);
}

/*
==============
CPUTimlineProfilerView::UpdateRectsBuffer
==============
*/

void __fastcall CPUTimlineProfilerView::UpdateRectsBuffer(CPUTimlineProfilerView *this)
{
  ?UpdateRectsBuffer@CPUTimlineProfilerView@@AEAAXXZ(this);
}

/*
==============
CPUTimlineProfilerView::InitFont
==============
*/

void __fastcall CPUTimlineProfilerView::InitFont(CPUTimlineProfilerView *this)
{
  ?InitFont@CPUTimlineProfilerView@@AEAAXXZ(this);
}

/*
==============
CPUTimlineProfilerView::DrawThreadTimeline
==============
*/

int __fastcall CPUTimlineProfilerView::DrawThreadTimeline(CPUTimlineProfilerView *this, GfxCmdBufContext *gfxContext, const CPUTimlineProfilerView::TimelineDisplayParams *timelineParams, int threadToDraw, int xPos, int yPos, int width, int headerWidth, int mouseX, int mouseY, int *selectedSample)
{
  return ?DrawThreadTimeline@CPUTimlineProfilerView@@AEAAHUGfxCmdBufContext@@AEBUTimelineDisplayParams@1@HHHHHHHAEAH@Z(this, gfxContext, timelineParams, threadToDraw, xPos, yPos, width, headerWidth, mouseX, mouseY, selectedSample);
}

/*
==============
CPUTimlineProfilerView::Draw
==============
*/

void __fastcall CPUTimlineProfilerView::Draw(CPUTimlineProfilerView *this, GfxCmdBufContext *gfxContext, unsigned __int64 displayRangeStart, float rangeMs)
{
  ?Draw@CPUTimlineProfilerView@@AEAAXUGfxCmdBufContext@@_KM@Z(this, gfxContext, displayRangeStart, rangeMs);
}

/*
==============
CPUTimlineProfilerView::InitRenderRecources
==============
*/

void __fastcall CPUTimlineProfilerView::InitRenderRecources(CPUTimlineProfilerView *this)
{
  ?InitRenderRecources@CPUTimlineProfilerView@@AEAAXXZ(this);
}

/*
==============
RB_ProcessGPUTimerFrame
==============
*/

void __fastcall RB_ProcessGPUTimerFrame(unsigned __int64 frameStartTimeGpuUs, unsigned __int64 frameEndTimeGpuUs, unsigned __int64 frameSyncMarkerGpuUs, unsigned __int64 frameSyncMarkerCpuRaw, CPUTimelineProfGPURange *timers, unsigned int *timerRangesStart, unsigned int *timerRangesEnd)
{
  ?RB_ProcessGPUTimerFrame@@YAX_K000PEAUCPUTimelineProfGPURange@@PEAI2@Z(frameStartTimeGpuUs, frameEndTimeGpuUs, frameSyncMarkerGpuUs, frameSyncMarkerCpuRaw, timers, timerRangesStart, timerRangesEnd);
}

/*
==============
CPUTimlineProfilerView::DrawThreadTimelineName
==============
*/

int __fastcall CPUTimlineProfilerView::DrawThreadTimelineName(CPUTimlineProfilerView *this, GfxCmdBufContext *gfxContext, const CPUTimlineProfilerView::TimelineDisplayParams *timelineParams, int threadToDraw, int xPos, int yPos, int headerWidth)
{
  return ?DrawThreadTimelineName@CPUTimlineProfilerView@@AEAAHUGfxCmdBufContext@@AEBUTimelineDisplayParams@1@HHHH@Z(this, gfxContext, timelineParams, threadToDraw, xPos, yPos, headerWidth);
}

/*
==============
CPUTimlineProfilerView::CPUTimlineProfilerView
==============
*/
void CPUTimlineProfilerView::CPUTimlineProfilerView(CPUTimlineProfilerView *this)
{
  this->m_xPos = 20;
  this->m_font = NULL;
  *(_WORD *)&this->m_paused = 0;
  this->m_enabled = 0;
  this->m_breakpointHit = 0;
  this->m_numDisplayedSamples = 0;
  this->m_firstThreadToDisplay = 0;
  this->m_pausedTime = 0i64;
  *(_QWORD *)&this->m_rectsToDrawWritePtr = 0i64;
  *(_QWORD *)&this->m_rectsToDrawFramesReadPtr = 0i64;
  this->m_cpuStatsSet = CPU_STATS_DISABLED;
  this->m_yPos = 130;
  this->m_barsAreaWidth = 1460;
  this->m_headerWidth = 100;
  *(_QWORD *)&this->m_breakpointThreshold = 1099222221i64;
  this->m_numThreadsToDisplay = 7;
  this->m_numLevelsToDisplay = 5;
  *(_QWORD *)&this->m_displayRange = 1101004800i64;
  this->m_prevDisplayRangeStart = -1i64;
}

/*
==============
CPUTimelineProfilerView_Init
==============
*/
void CPUTimelineProfilerView_Init(void)
{
  g_cpuTimelineProfilerView.m_textColor.packed = -1;
  *(_QWORD *)g_cpuTimelineProfilerView.m_threadAllocatorOverflow = 0i64;
  *(_QWORD *)&g_cpuTimelineProfilerView.m_threadAllocatorOverflow[8] = 0i64;
  *(_QWORD *)&g_cpuTimelineProfilerView.m_threadAllocatorOverflow[16] = 0i64;
  *(_DWORD *)&g_cpuTimelineProfilerView.m_threadAllocatorOverflow[24] = 0;
  g_cpuTimelineProfilerView.m_gpuFrameWritePtr = 0;
  g_cpuTimelineProfilerView.m_errorTextColor.packed = -16645377;
}

/*
==============
CPUTimelineProfilerView_InitDevGui
==============
*/
void CPUTimelineProfilerView_InitDevGui(void)
{
  int v0; 
  __int64 i; 
  __int64 v2; 
  unsigned __int8 v3; 

  if ( g_cpuProfiler.m_enabled )
  {
    Sys_EnterCriticalSection(CRITSECT_CBUF);
    v0 = truncate_cast<int,unsigned __int64>(0x1Eui64) + 1;
    if ( s_cmd_superUser_textArray[0].cmdsize + v0 <= s_cmd_superUser_textArray[0].maxsize )
    {
      for ( i = s_cmd_superUser_textArray[0].cmdsize - 1; i >= 0; s_cmd_superUser_textArray[0].data[v2] = v3 )
      {
        v2 = v0 + i;
        v3 = s_cmd_superUser_textArray[0].data[i--];
      }
      memcpy_0(s_cmd_superUser_textArray[0].data, "exec devgui_cpu_timeline_prof\n", v0 - 1);
      s_cmd_superUser_textArray[0].data[v0 - 1] = 10;
      s_cmd_superUser_textArray[0].cmdsize += v0;
      Sys_LeaveCriticalSection(CRITSECT_CBUF);
    }
    else
    {
      Com_PrintError(1, "Cbuf_InsertText overflowed\n");
      Sys_LeaveCriticalSection(CRITSECT_CBUF);
    }
  }
}

/*
==============
CPUTimelineProfilerView_InitDvars
==============
*/
void CPUTimelineProfilerView_InitDvars(void)
{
  cpuTimelineProfiler_Enabled = Dvar_RegisterEnum("LKQSLQTPPT", CPUTimlineProfilerView::CPU_TIMELINE_PROFILER_MODE_NAMES, 0, 4u, "Enable cpu timeline profiler");
  __asm
  {
    vmovss  xmm3, cs:__real@447a0000; max
    vmovss  xmm2, cs:__real@3f800000; min
    vmovss  xmm1, cs:__real@42053333; value
  }
  cpuTimelineProfiler_BreakpointEnabled = Dvar_RegisterEnum("NSRTTKORQO", CPUTimlineProfilerView::CPU_TIMELINE_PROFILER_BREAKPOINT_MODE_NAMES, 0, 4u, "Enable cpu timeline profiler breakpoint");
  cpuTimelineProfiler_BreakpointThreshold = Dvar_RegisterFloat("PNTNTTORS", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "Cpu timeline profiler breakpoint threshold");
  cpuTimelineProfiler_ProbeFilter = Dvar_RegisterEnum("LTNSNRNMK", prof_enumNames, 0, 4u, "TERST");
}

/*
==============
CPUTimelineProfilerView_InitMem
==============
*/
void CPUTimelineProfilerView_InitMem(void)
{
  unsigned __int8 *v0; 
  unsigned __int8 *v1; 
  _QWORD *v3; 
  _QWORD *v4; 
  _DWORD *v6; 
  GfxBufferCreationContext v7; 

  if ( g_cpuProfiler.m_enabled )
  {
    v0 = (unsigned __int8 *)PMem_Alloc(0x753000ui64, 0x10000ui64, MEM_POOL_MAIN, PMEM_STACK_GAME, "Cpu profiler samples");
    CPUTimelineProfiler::Samples::Init(&g_cpuTimelineProfilerView.m_displayedSamples, v0, 80000);
    v1 = (unsigned __int8 *)PMem_Alloc(0x2580ui64, 0x10000ui64, MEM_POOL_MAIN, PMEM_STACK_GAME, "Cpu profiler events");
    CPUTimelineProfiler::Events::Init(&g_cpuTimelineProfilerView.m_displayedEvents, v1, 200);
    if ( g_cpuProfiler.m_enabled )
      R_CreateGfxWrappedBuffer(&g_cpuTimelineProfilerView.m_rectsToDrawBuffer, GfxWrappedBuffer_Structured, 16, 0x3A980u, GFX_DATA_FORMAT_R32_UINT, 4u, D3D12_RESOURCE_STATE_GENERIC_READ, NULL, NULL, "profiler bars");
  }
  v7.objectName = "bar vb";
  v7.zoneName = "cpu timeline profiler";
  __asm
  {
    vmovups xmm0, xmmword ptr [rsp+68h+var_18.zoneName]
    vmovdqa xmmword ptr [rsp+68h+var_18.zoneName], xmm0
  }
  v3 = R_AllocStaticVertexBuffer(&g_cpuTimelineProfilerView.m_singleBarVerts, 64, &v7);
  v7.zoneName = "cpu timeline profiler";
  v4 = v3;
  v7.objectName = "bar ib";
  __asm
  {
    vmovups xmm0, xmmword ptr [rsp+68h+var_18.zoneName]
    vmovdqa xmmword ptr [rsp+68h+var_18.zoneName], xmm0
  }
  v6 = R_AllocStaticIndexBuffer(&g_cpuTimelineProfilerView.m_singleBarIndices, 12, &v7);
  *v4 = 0i64;
  v4[1] = 0i64;
  v4[2] = 1065353216i64;
  v4[3] = 0i64;
  *((_DWORD *)v4 + 8) = 0;
  *((_DWORD *)v4 + 11) = 0;
  *((_DWORD *)v4 + 15) = 0;
  *(_QWORD *)((char *)v4 + 36) = 1065353216i64;
  *((_DWORD *)v4 + 12) = 1065353216;
  *(_QWORD *)((char *)v4 + 52) = 1065353216i64;
  *v6 = 0x20000;
  v6[1] = 65537;
  v6[2] = 196610;
}

/*
==============
CPUTimelineProfilerView_Shutdown
==============
*/
void CPUTimelineProfilerView_Shutdown(void)
{
  ;
}

/*
==============
CPUTimlineProfilerView::ComputeSucknessScore
==============
*/
float CPUTimlineProfilerView::ComputeSucknessScore(const CPUTimelineProfiler::SampleCPUStats *stats, CPUTimelineProfiler::CPUStatsSet statsSet)
{
  unsigned __int64 instructionsRetired[3]; 
  unsigned __int64 l2CacheMisses; 
  unsigned __int64 cacheAccesses; 

  CPUTimelineProfiler::GetStatsFromCounter(stats, statsSet, &cacheAccesses, &l2CacheMisses, instructionsRetired);
  __asm
  {
    vmovss  xmm2, cs:__real@5f800000
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, rax
  }
  if ( (l2CacheMisses & 0x8000000000000000ui64) != 0i64 )
    __asm { vaddss  xmm1, xmm1, xmm2 }
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rax
  }
  if ( (cacheAccesses & 0x8000000000000000ui64) != 0i64 )
    __asm { vaddss  xmm0, xmm0, xmm2 }
  __asm
  {
    vdivss  xmm0, xmm1, xmm0
    vmulss  xmm0, xmm0, cs:__real@42c80000
  }
  return *(float *)&_XMM0;
}

/*
==============
CPUTimlineProfilerView::ComputeSucknessScore
==============
*/
float CPUTimlineProfilerView::ComputeSucknessScore(unsigned __int64 cacheAccesses, unsigned __int64 l2CacheMisses, unsigned __int64 instructionsRetired)
{
  __asm
  {
    vmovss  xmm2, cs:__real@5f800000
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2ss xmm1, xmm1, rdx
  }
  if ( (l2CacheMisses & 0x8000000000000000ui64) != 0i64 )
    __asm { vaddss  xmm1, xmm1, xmm2 }
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rcx
  }
  if ( (cacheAccesses & 0x8000000000000000ui64) != 0i64 )
    __asm { vaddss  xmm0, xmm0, xmm2 }
  __asm
  {
    vdivss  xmm0, xmm1, xmm0
    vmulss  xmm0, xmm0, cs:__real@42c80000
  }
  return *(float *)&_XMM0;
}

/*
==============
CPUTimlineProfilerView::CopySamplesToDisplay
==============
*/
void CPUTimlineProfilerView::CopySamplesToDisplay(CPUTimlineProfilerView *this, unsigned __int64 rangeStart, unsigned __int64 rangeEnd)
{
  Sys_ProfBeginNamedEvent(0xFFFF1493, "profiler copy samples");
  this->m_numDisplayedSamples = CPUTimelineProfiler::GetSamplesForTimeRange(&g_cpuProfiler, rangeStart, rangeEnd, &this->m_displayedSamples, 80000, this->m_threadAllocatorOverflow);
  this->m_numDisplayedEvents = CPUTimelineProfiler::GetEventsForTimeRange(&g_cpuProfiler, rangeStart, rangeEnd, &this->m_displayedEvents, 200, NULL);
  Sys_ProfEndNamedEvent();
}

/*
==============
CPUTimlineProfilerView::Draw
==============
*/
void CPUTimlineProfilerView::Draw(CPUTimlineProfilerView *this, GfxCmdBufContext *gfxContext, unsigned __int64 displayRangeStart, float rangeMs)
{
  int v22; 
  int v24; 
  int v25; 
  bool v35; 
  char v36; 
  char v38; 
  int m_xPos; 
  int v51; 
  int v52; 
  GfxColor m_textColor; 
  GfxFont *m_font; 
  const char *ThreadProfilerName; 
  GfxFont *v64; 
  bool v70; 
  int v71; 
  int v72; 
  int v74; 
  int v76; 
  int v78; 
  int v79; 
  int v81; 
  float v84; 
  int m_yPos; 
  float v86; 
  float v87; 
  int v88; 
  int v89; 
  int v90; 
  float v91; 
  GfxColor m_errorTextColor; 
  float v93; 
  int v94; 
  float v95; 
  int m_headerWidth; 
  int v97; 
  int v98; 
  int v99; 
  float v100; 
  float v101; 
  unsigned int v102; 
  int v103; 
  int v104; 
  int y; 
  int x; 
  GfxCmdBufContext v107; 
  int v108; 
  int v109; 
  int v110; 
  CPUTimlineProfilerView::TimelineDisplayParams v111; 

  _R12 = gfxContext;
  _R15 = this;
  if ( !this->m_font )
    this->m_font = R_RegisterFont("fonts/fira_mono_regular.ttf", 18);
  __asm
  {
    vmovups xmm0, xmmword ptr [r12]
    vmovups [rbp+57h+var_A0], xmm0
  }
  RB_EndSurfaceIfNeeded(&v107);
  __asm
  {
    vmovsd  xmm0, cs:__real@3ff0000000000000
    vdivsd  xmm2, xmm0, cs:?msecPerRawTimerTick@@3NA; double msecPerRawTimerTick
    vmovss  xmm1, dword ptr [r15+0A0h]
    vcvtss2sd xmm1, xmm1, xmm1
    vmulsd  xmm3, xmm1, xmm2
    vmovss  xmm1, dword ptr [r15+0A4h]
    vcvtsd2ss xmm0, xmm3, xmm3
    vcvtss2sd xmm1, xmm1, xmm1
    vmulsd  xmm2, xmm1, xmm2
    vcvttsd2si rdx, xmm2
    vmovss  [rbp+57h+var_68], xmm0
    vmovsd  xmm0, cs:__real@43e0000000000000
  }
  v111.m_displayRangeStartUnshifted = displayRangeStart;
  __asm { vcomisd xmm3, xmm0 }
  v111.m_displayShiftTicks = _RDX;
  v111.m_displayRangeStart = _RDX + displayRangeStart;
  __asm
  {
    vsubsd  xmm3, xmm3, xmm0
    vcomisd xmm3, xmm0
  }
  v22 = _R15->m_headerWidth + _R15->m_barsAreaWidth;
  __asm { vcvttsd2si rax, xmm3 }
  v109 = v22;
  v111.m_displayRangeEnd = displayRangeStart + _RDX + _RAX;
  v24 = 0;
  LODWORD(_RAX) = _R15->m_numLevelsToDisplay + 3;
  x = 0;
  LODWORD(_RAX) = _R15->m_numThreadsToDisplay * _RAX;
  y = 0;
  v25 = 2 * (5 * _RAX + 20);
  v110 = v25;
  DevMouse::GetMousePos(&g_devMouse, &x, &y);
  __asm
  {
    vmovss  xmm1, cs:__real@3f000000
    vmovups xmm0, xmmword ptr [r12]
    vxorps  xmm3, xmm3, xmm3
    vroundss xmm2, xmm3, xmm1, 1
    vmovss  xmm1, cs:__real@433fc000
    vcvttss2si ecx, xmm2
    vroundss xmm2, xmm3, xmm1, 1
  }
  if ( _ECX > 255 )
    _ECX = 255;
  v35 = _ECX < 0;
  v36 = _ECX;
  __asm { vcvttss2si ecx, xmm2 }
  if ( v35 )
    v36 = 0;
  LOBYTE(v102) = v36;
  if ( _ECX > 255 )
    _ECX = 255;
  BYTE1(v102) = v36;
  BYTE2(v102) = v36;
  v38 = _ECX;
  if ( _ECX < 0 )
    v38 = 0;
  __asm { vxorps  xmm1, xmm1, xmm1 }
  HIBYTE(v102) = v38;
  __asm
  {
    vmovups [rbp+57h+var_A0], xmm0
    vmovss  xmm0, cs:__real@3f800000
    vmovss  dword ptr [rsp+110h+var_C8], xmm0
    vmovss  [rsp+110h+var_D0], xmm0
    vmovss  [rsp+110h+var_D8], xmm1
    vmovss  [rsp+110h+var_E0], xmm1
    vxorps  xmm4, xmm4, xmm4
    vxorps  xmm5, xmm5, xmm5
    vcvtsi2ss xmm4, xmm4, edi
    vxorps  xmm3, xmm3, xmm3
    vcvtsi2ss xmm3, xmm3, dword ptr [r15+14h]
    vxorps  xmm2, xmm2, xmm2
    vcvtsi2ss xmm2, xmm2, dword ptr [r15+10h]
    vcvtsi2ss xmm5, xmm5, esi
    vmovss  [rsp+110h+var_E8], xmm4
    vmovss  [rsp+110h+var_F0], xmm5
  }
  RB_DrawStretchPic(&v107, rgp.whiteMaterial, *(float *)&_XMM2, *(float *)&_XMM3, v84, v91, v93, v95, v100, v101, v102, GFX_PRIM_STATS_DEBUG);
  __asm { vmovups xmm0, xmmword ptr [r12] }
  m_xPos = _R15->m_xPos;
  m_headerWidth = _R15->m_headerWidth;
  m_yPos = _R15->m_yPos;
  __asm { vmovups [rbp+57h+var_A0], xmm0 }
  CPUTimlineProfilerView::DrawTimeScale(_R15, &v107, &v111, m_xPos, m_yPos, v22, v25, m_headerWidth);
  Sys_ProfBeginNamedEvent(0xFFB22222, "draw profiler bars");
  v51 = 0;
  v103 = _R15->m_yPos;
  if ( _R15->m_numThreadsToDisplay > 0 )
  {
    __asm
    {
      vmovaps [rsp+110h+var_40], xmm6
      vmovaps [rsp+110h+var_50], xmm7
    }
    do
    {
      v52 = v51 + _R15->m_firstThreadToDisplay;
      m_textColor = _R15->m_textColor;
      m_font = _R15->m_font;
      v108 = _R15->m_headerWidth;
      v104 = 2 * (5 * _R15->m_numLevelsToDisplay + 15);
      ThreadProfilerName = GetThreadProfilerName(v52);
      __asm
      {
        vmovups xmm0, xmmword ptr [r12]
        vmovups [rbp+57h+var_A0], xmm0
        vxorps  xmm1, xmm1, xmm1
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, [rbp+57h+var_B0]
        vcvtsi2ss xmm1, xmm1, eax
        vaddss  xmm6, xmm1, xmm0
        vxorps  xmm7, xmm7, xmm7
        vcvtsi2ss xmm7, xmm7, esi
        vmovaps xmm3, xmm7
        vmovss  [rsp+110h+var_F0], xmm6
      }
      RB_DrawText(&v107, ThreadProfilerName, m_font, *(float *)&_XMM3, v86, m_textColor);
      if ( _R15->m_threadAllocatorOverflow[v52] )
      {
        __asm { vmovups xmm0, xmmword ptr [r12] }
        v64 = _R15->m_font;
        __asm
        {
          vxorps  xmm1, xmm1, xmm1
          vcvtsi2ss xmm1, xmm1, eax
        }
        m_errorTextColor = _R15->m_errorTextColor;
        __asm
        {
          vaddss  xmm3, xmm1, xmm7
          vmovss  [rsp+110h+var_F0], xmm6
          vmovups [rbp+57h+var_A0], xmm0
        }
        RB_DrawText(&v107, "Thread sample allocator ran out of space - make sure you're popping samples properly and/or bump the limit in cpu_timeline_prof.cpp", v64, *(float *)&_XMM3, v87, m_errorTextColor);
      }
      ++v51;
      v103 += v104;
    }
    while ( v51 < _R15->m_numThreadsToDisplay );
    v22 = v109;
    v24 = 0;
    __asm
    {
      vmovaps xmm7, [rsp+110h+var_50]
      vmovaps xmm6, [rsp+110h+var_40]
    }
  }
  __asm
  {
    vmovups xmm0, xmmword ptr [r12]
    vmovups [rbp+57h+var_A0], xmm0
  }
  RB_EndTessSurfaceInternal(&v107, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_cpu_timeline_prof_view.cpp(1345)");
  v70 = _R15->m_numThreadsToDisplay <= 0;
  v71 = -1;
  v72 = _R15->m_yPos;
  v104 = -1;
  if ( !v70 )
  {
    do
    {
      __asm { vmovups xmm0, xmmword ptr [r12] }
      v74 = v24 + _R15->m_firstThreadToDisplay;
      v97 = _R15->m_headerWidth;
      v88 = _R15->m_xPos;
      __asm { vmovups [rbp+57h+var_A0], xmm0 }
      v72 += CPUTimlineProfilerView::DrawThreadTimeline(_R15, &v107, &v111, v74, v88, v72, v22, v97, x, y, &v104);
      ++v24;
    }
    while ( v24 < _R15->m_numThreadsToDisplay );
    v71 = v104;
  }
  __asm { vmovups xmm0, xmmword ptr [r12] }
  v76 = _R15->m_xPos;
  v94 = _R15->m_headerWidth;
  v104 = -1;
  __asm { vmovups [rbp+57h+var_A0], xmm0 }
  CPUTimlineProfilerView::DrawEventTimeline(_R15, &v107, &v111, v76, v72, v22, v94, x, y, &v104);
  __asm { vmovups xmm0, xmmword ptr [r12] }
  v78 = v110;
  v79 = _R15->m_xPos;
  v98 = _R15->m_headerWidth;
  v89 = _R15->m_yPos;
  __asm { vmovups [rbp+57h+var_A0], xmm0 }
  CPUTimlineProfilerView::DrawSampleInfo(_R15, &v107, &v111, v79, v89, v22, v110, v98, x, y, v71);
  __asm { vmovups xmm0, xmmword ptr [r12] }
  v81 = _R15->m_xPos;
  v99 = _R15->m_headerWidth;
  v90 = _R15->m_yPos;
  __asm { vmovups [rbp+57h+var_A0], xmm0 }
  CPUTimlineProfilerView::DrawEventInfo(_R15, &v107, &v111, v81, v90, v22, v78, v99, x, y, v104);
  __asm
  {
    vmovups xmm0, xmmword ptr [r12]
    vmovups [rbp+57h+var_A0], xmm0
  }
  CPUTimlineProfilerView::DrawMouseCursor(_R15, &v107, x, y);
  Sys_ProfEndNamedEvent();
  __asm
  {
    vmovups xmm0, xmmword ptr [r12]
    vmovups [rbp+57h+var_A0], xmm0
  }
  RB_EndSurfaceIfNeeded(&v107);
}

/*
==============
CPUTimlineProfilerView::DrawBackground
==============
*/
void CPUTimlineProfilerView::DrawBackground(CPUTimlineProfilerView *this, GfxCmdBufContext *gfxContext, int xPos, int yPos)
{
  bool v14; 
  char v15; 
  char v17; 
  float v28; 
  float v29; 
  float v30; 
  float v31; 
  float v32; 
  float v33; 
  unsigned int v34; 
  GfxCmdBufContext v35; 

  __asm
  {
    vmovups xmm0, xmmword ptr [rdx]
    vmovss  xmm1, cs:__real@3f000000
    vxorps  xmm3, xmm3, xmm3
    vroundss xmm2, xmm3, xmm1, 1
    vmovss  xmm1, cs:__real@433fc000
    vcvttss2si ecx, xmm2
    vroundss xmm2, xmm3, xmm1, 1
  }
  if ( _ECX > 255 )
    _ECX = 255;
  v14 = _ECX < 0;
  v15 = _ECX;
  __asm { vcvttss2si ecx, xmm2 }
  if ( v14 )
    v15 = 0;
  LOBYTE(v34) = v15;
  if ( _ECX > 255 )
    _ECX = 255;
  BYTE1(v34) = v15;
  BYTE2(v34) = v15;
  v17 = _ECX;
  if ( _ECX < 0 )
    v17 = 0;
  __asm { vxorps  xmm1, xmm1, xmm1 }
  HIBYTE(v34) = v17;
  __asm
  {
    vmovups xmmword ptr [rsp+88h+var_18.source], xmm0
    vmovss  xmm0, cs:__real@3f800000
    vmovss  [rsp+88h+var_40], xmm0
    vmovss  [rsp+88h+var_48], xmm0
    vmovss  [rsp+88h+var_50], xmm1
    vmovss  [rsp+88h+var_58], xmm1
    vxorps  xmm4, xmm4, xmm4
    vcvtsi2ss xmm4, xmm4, [rsp+88h+arg_28]
    vxorps  xmm5, xmm5, xmm5
    vcvtsi2ss xmm5, xmm5, [rsp+88h+arg_20]
    vxorps  xmm3, xmm3, xmm3
    vxorps  xmm2, xmm2, xmm2
    vmovss  [rsp+88h+var_60], xmm4
    vcvtsi2ss xmm3, xmm3, r9d
    vcvtsi2ss xmm2, xmm2, r8d
    vmovss  [rsp+88h+var_68], xmm5
  }
  RB_DrawStretchPic(&v35, rgp.whiteMaterial, *(float *)&_XMM2, *(float *)&_XMM3, v28, v29, v30, v31, v32, v33, v34, GFX_PRIM_STATS_DEBUG);
}

/*
==============
CPUTimlineProfilerView::DrawEventInfo
==============
*/
void CPUTimlineProfilerView::DrawEventInfo(CPUTimlineProfilerView *this, GfxCmdBufContext *gfxContext, const CPUTimlineProfilerView::TimelineDisplayParams *timelineParams, int timelineXPos, int timelineYPos, int timelineWidth, int timelineHeight, int timelineHeaderWidth, int mouseX, int mouseY, int selectedEvent)
{
  CPUTimelineProfiler::EventBase *m_base; 
  unsigned __int64 m_displayRangeStartUnshifted; 
  unsigned __int64 m_time; 
  __int64 v26; 
  GfxFont *m_font; 
  GfxColor m_textColor; 
  GfxFont *v87; 
  const char *ThreadProfilerName; 
  GfxFont *v94; 
  float v104; 
  float v105; 
  float v106; 
  float v107; 
  float v108; 
  float v109; 
  float v110; 
  float v111; 
  float v112; 
  float v113; 
  float v114; 
  float v115; 
  float v116; 
  float v117; 
  float v118; 
  float v119; 
  float v120; 
  float v121; 
  float v122; 
  float v123; 
  float v124; 
  unsigned int m_color; 
  unsigned int packed; 
  GfxCmdBufContext v127; 
  char dest[128]; 
  void *retaddr; 

  _R11 = &retaddr;
  _R15 = gfxContext;
  if ( selectedEvent != -1 && this->m_paused )
  {
    m_base = this->m_displayedEvents.m_base;
    m_displayRangeStartUnshifted = timelineParams->m_displayRangeStartUnshifted;
    __asm { vmovaps xmmword ptr [r11-58h], xmm6 }
    m_time = m_base[selectedEvent].m_time;
    __asm
    {
      vmovaps xmmword ptr [r11-68h], xmm7
      vmovaps xmmword ptr [r11-78h], xmm8
    }
    v26 = m_time - m_displayRangeStartUnshifted;
    __asm
    {
      vmovaps xmmword ptr [r11-88h], xmm9
      vmovaps xmmword ptr [r11-98h], xmm10
      vxorps  xmm0, xmm0, xmm0
    }
    if ( m_time <= m_displayRangeStartUnshifted )
      v26 = m_displayRangeStartUnshifted - m_time;
    __asm { vcvtsi2sd xmm0, xmm0, rcx }
    if ( v26 < 0 )
      __asm { vaddsd  xmm0, xmm0, cs:__real@43f0000000000000 }
    __asm
    {
      vmulsd  xmm10, xmm0, cs:?msecPerRawTimerTick@@3NA; double msecPerRawTimerTick
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, r10d
      vxorps  xmm2, xmm2, xmm2
      vcvtsi2ss xmm2, xmm2, edx
      vxorps  xmm5, xmm5, xmm5
      vcvtsi2ss xmm5, xmm5, r12d
      vaddss  xmm1, xmm0, xmm5; min
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
      vdivss  xmm3, xmm0, dword ptr [r8+18h]
      vmulss  xmm3, xmm3, xmm2
      vxorps  xmm4, xmm4, xmm4
      vcvtsi2ss xmm4, xmm4, r9d
      vaddss  xmm0, xmm3, xmm1; val
      vaddss  xmm2, xmm4, xmm5; max
    }
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    __asm
    {
      vmovss  xmm8, cs:__real@3f800000
      vmovups xmm1, xmmword ptr [r15]
    }
    m_color = this->m_displayedEvents.m_base[selectedEvent].m_color;
    __asm
    {
      vmovss  [rsp+198h+var_150], xmm8
      vmovss  [rsp+198h+var_158], xmm8
      vxorps  xmm2, xmm2, xmm2
      vcvtsi2ss xmm2, xmm2, [rsp+198h+arg_30]
      vxorps  xmm6, xmm6, xmm6
      vmovss  [rsp+198h+var_160], xmm6
      vmovss  [rsp+198h+var_168], xmm6
      vmovss  [rsp+198h+var_170], xmm2
      vxorps  xmm3, xmm3, xmm3
      vcvtsi2ss xmm3, xmm3, [rsp+198h+arg_20]
      vmovaps xmm2, xmm0
      vmovss  [rsp+198h+var_178], xmm8
      vmovups [rsp+198h+var_138], xmm1
    }
    RB_DrawStretchPic(&v127, rgp.whiteMaterial, *(float *)&_XMM2, *(float *)&_XMM3, v104, v110, v113, v116, v119, v122, m_color, GFX_PRIM_STATS_DEBUG);
    __asm
    {
      vmovups xmm0, xmmword ptr [r15]
      vmovss  xmm1, cs:__real@43960000
    }
    packed = this->m_textColor.packed;
    __asm
    {
      vmovss  [rsp+198h+var_150], xmm8
      vmovss  [rsp+198h+var_158], xmm8
      vmovss  [rsp+198h+var_160], xmm6
      vmovups [rsp+198h+var_138], xmm0
      vmovss  xmm0, cs:__real@42820000
      vmovss  [rsp+198h+var_168], xmm6
      vmovss  [rsp+198h+var_170], xmm0
      vxorps  xmm9, xmm9, xmm9
      vcvtsi2ss xmm9, xmm9, [rsp+198h+arg_48]
      vxorps  xmm7, xmm7, xmm7
      vcvtsi2ss xmm7, xmm7, ecx
      vmovaps xmm2, xmm7
      vmovaps xmm3, xmm9
      vmovss  [rsp+198h+var_178], xmm1
    }
    RB_DrawStretchPic(&v127, rgp.whiteMaterial, *(float *)&_XMM2, *(float *)&_XMM3, v105, v111, v114, v117, v120, v123, packed, GFX_PRIM_STATS_DEBUG);
    __asm
    {
      vmovups xmm0, xmmword ptr [r15]
      vmovss  [rsp+198h+var_150], xmm8
      vmovss  [rsp+198h+var_158], xmm8
      vmovss  [rsp+198h+var_160], xmm6
      vmovups [rsp+198h+var_138], xmm0
      vmovss  xmm0, cs:__real@427c0000
      vmovss  [rsp+198h+var_168], xmm6
      vmovss  [rsp+198h+var_170], xmm0
      vaddss  xmm3, xmm9, xmm8
      vaddss  xmm2, xmm7, xmm8
      vmovss  xmm1, cs:__real@43950000
      vmovss  [rsp+198h+var_178], xmm1
    }
    RB_DrawStretchPic(&v127, rgp.whiteMaterial, *(float *)&_XMM2, *(float *)&_XMM3, v106, v112, v115, v118, v121, v124, 0xC8000000, GFX_PRIM_STATS_DEBUG);
    Com_sprintf(dest, 0x80ui64, "Event: %s", this->m_displayedEvents.m_name[selectedEvent]);
    __asm { vmovups xmm0, xmmword ptr [r15] }
    m_font = this->m_font;
    m_textColor = this->m_textColor;
    __asm
    {
      vaddss  xmm6, xmm9, cs:__real@40a00000
      vaddss  xmm7, xmm7, cs:__real@40a00000
      vmovups [rsp+198h+var_138], xmm0
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, dword ptr [r8+8]
      vaddss  xmm2, xmm0, xmm6
      vmovaps xmm3, xmm7
      vmovss  [rsp+198h+var_178], xmm2
    }
    RB_DrawText(&v127, dest, m_font, *(float *)&_XMM3, v107, m_textColor);
    __asm { vxorpd  xmm2, xmm10, cs:__xmm@80000000000000008000000000000000 }
    _RDI = m_displayRangeStartUnshifted ^ 0x8000000000000000ui64;
    __asm { vmovq   xmm1, rdi }
    _RBX = m_time ^ 0x8000000000000000ui64;
    __asm
    {
      vmovq   xmm0, rbx
      vpcmpgtq xmm1, xmm0, xmm1
      vblendvpd xmm1, xmm2, xmm10, xmm1
      vcvtsd2ss xmm0, xmm1, xmm1
      vcvtss2sd xmm3, xmm0, xmm0
      vmovq   r9, xmm3
    }
    Com_sprintf(dest, 0x80ui64, "Time: %.4f ms", *(double *)&_XMM3);
    __asm { vmovups xmm0, xmmword ptr [r15] }
    v87 = this->m_font;
    __asm
    {
      vmovups [rsp+198h+var_138], xmm0
      vxorps  xmm0, xmm0, xmm0
      vmovaps xmm3, xmm7
      vcvtsi2ss xmm0, xmm0, eax
      vaddss  xmm1, xmm0, xmm6
      vmovss  [rsp+198h+var_178], xmm1
    }
    RB_DrawText(&v127, dest, v87, *(float *)&_XMM3, v108, this->m_textColor);
    ThreadProfilerName = GetThreadProfilerName(this->m_displayedEvents.m_base[selectedEvent].m_thread);
    Com_sprintf(dest, 0x80ui64, "Thread: %s", ThreadProfilerName);
    __asm { vmovups xmm0, xmmword ptr [r15] }
    v94 = this->m_font;
    __asm
    {
      vmovups [rsp+198h+var_138], xmm0
      vxorps  xmm0, xmm0, xmm0
      vmovaps xmm3, xmm7
      vcvtsi2ss xmm0, xmm0, ecx
      vaddss  xmm1, xmm0, xmm6
      vmovss  [rsp+198h+var_178], xmm1
    }
    RB_DrawText(&v127, dest, v94, *(float *)&_XMM3, v109, this->m_textColor);
    __asm
    {
      vmovaps xmm10, [rsp+198h+var_98]
      vmovaps xmm9, [rsp+198h+var_88]
      vmovaps xmm8, [rsp+198h+var_78]
      vmovaps xmm7, [rsp+198h+var_68]
      vmovaps xmm6, [rsp+198h+var_58]
    }
  }
}

/*
==============
CPUTimlineProfilerView::DrawEventTimeline
==============
*/
__int64 CPUTimlineProfilerView::DrawEventTimeline(CPUTimlineProfilerView *this, GfxCmdBufContext *gfxContext, const CPUTimlineProfilerView::TimelineDisplayParams *timelineParams, int xPos, int yPos, int width, int headerWidth, int mouseX, int mouseY, int *selectedEvent)
{
  int v17; 
  int v26; 
  __int64 v30; 
  unsigned __int64 m_time; 
  unsigned __int64 m_displayRangeStart; 
  bool v36; 
  int v53; 
  int v64; 
  __int64 result; 
  float fmt; 
  float fmta; 
  double v74; 
  float v75; 
  double v76; 
  float v77; 
  float v78; 
  float v79; 
  float v80; 
  unsigned int m_color; 
  GfxCmdBufContext v82; 
  GfxCmdBufContext *v89; 

  v89 = gfxContext;
  __asm { vmovups xmm0, xmmword ptr [rdx] }
  v17 = yPos;
  __asm
  {
    vmovups [rsp+0F8h+var_98], xmm0
    vxorps  xmm0, xmm0, xmm0
    vmovaps [rsp+0F8h+var_48], xmm7
    vcvtsi2ss xmm0, xmm0, esi
    vaddss  xmm1, xmm0, cs:__real@41a00000
    vxorps  xmm7, xmm7, xmm7
    vcvtsi2ss xmm7, xmm7, r9d
    vmovaps xmm3, xmm7
    vmovss  dword ptr [rsp+0F8h+fmt], xmm1
  }
  RB_DrawText(&v82, "events", this->m_font, *(float *)&_XMM3, fmt, (const GfxColor)-1);
  v26 = 0;
  _EDX = width;
  _ER8 = headerWidth;
  _ER13 = width - headerWidth;
  *selectedEvent = -1;
  if ( this->m_numDisplayedEvents > 0 )
  {
    v30 = 0i64;
    __asm
    {
      vmovaps [rsp+0F8h+var_58], xmm8
      vmovss  xmm8, cs:__real@40a00000
      vmovaps [rsp+0F8h+var_78], xmm10
      vmovss  xmm10, cs:__real@3f800000
      vmovaps [rsp+0F8h+var_88], xmm11
      vmovaps [rsp+0F8h+var_38], xmm6
      vmovaps [rsp+0F8h+var_68], xmm9
      vxorps  xmm11, xmm11, xmm11
    }
    do
    {
      m_time = this->m_displayedEvents.m_base[v30].m_time;
      if ( m_time <= timelineParams->m_displayRangeEnd )
      {
        m_displayRangeStart = timelineParams->m_displayRangeStart;
        if ( m_time >= timelineParams->m_displayRangeStart )
        {
          v36 = (unsigned int)m_time <= (unsigned int)m_displayRangeStart;
          _ECX = m_time - m_displayRangeStart;
          __asm
          {
            vmovd   xmm0, ecx
            vcvtdq2ps xmm0, xmm0
            vdivss  xmm2, xmm0, dword ptr [r15+18h]
            vmovd   xmm1, r13d
            vcvtdq2ps xmm1, xmm1
            vmulss  xmm3, xmm2, xmm1
            vmovd   xmm1, edx
            vmovd   xmm0, r8d
            vcvtdq2ps xmm1, xmm1
            vcvtdq2ps xmm0, xmm0
            vaddss  xmm6, xmm1, xmm7
            vcomiss xmm7, xmm6
            vaddss  xmm2, xmm0, xmm7
            vaddss  xmm9, xmm3, xmm2
          }
          if ( !v36 )
          {
            __asm
            {
              vcvtss2sd xmm0, xmm6, xmm6
              vmovsd  [rsp+0F8h+var_C8], xmm0
              vcvtss2sd xmm1, xmm7, xmm7
              vmovsd  [rsp+0F8h+var_D0], xmm1
            }
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 713, ASSERT_TYPE_SANITY, "( min ) <= ( max )", "min <= max\n\t%g, %g", v74, v76) )
              __debugbreak();
          }
          _RAX = v89;
          v53 = v17 + 10;
          __asm
          {
            vmaxss  xmm0, xmm7, xmm9
            vminss  xmm6, xmm0, xmm6
            vmovups xmm0, xmmword ptr [rax]
            vxorps  xmm3, xmm3, xmm3
            vcvtsi2ss xmm3, xmm3, esi
            vmovaps xmm2, xmm6
          }
          m_color = this->m_displayedEvents.m_base[v30].m_color;
          __asm
          {
            vmovss  [rsp+0F8h+var_B0], xmm10
            vmovss  [rsp+0F8h+var_B8], xmm10
            vmovss  [rsp+0F8h+var_C0], xmm11
            vmovss  dword ptr [rsp+0F8h+var_C8], xmm11
            vmovss  dword ptr [rsp+0F8h+var_D0], xmm8
            vmovss  dword ptr [rsp+0F8h+fmt], xmm8
            vmovups [rsp+0F8h+var_98], xmm0
          }
          RB_DrawTiltedRect(&v82, rgp.whiteMaterial, *(float *)&_XMM2, *(float *)&_XMM3, fmta, v75, v77, v78, v79, v80, m_color, GFX_PRIM_STATS_DEBUG);
          if ( *selectedEvent != -1 )
            goto LABEL_13;
          __asm
          {
            vxorps  xmm1, xmm1, xmm1
            vcvtsi2ss xmm1, xmm1, [rsp+0F8h+arg_38]
            vsubss  xmm0, xmm6, xmm8
            vcomiss xmm1, xmm0
          }
          if ( *selectedEvent != -1 )
            goto LABEL_13;
          __asm
          {
            vaddss  xmm0, xmm6, xmm8
            vcomiss xmm1, xmm0
          }
          if ( mouseY >= v53 - 5 )
          {
            _EDX = width;
            v64 = v53 + 5;
            _ER8 = headerWidth;
            v17 = yPos;
            if ( mouseY <= v64 )
              *selectedEvent = v26;
          }
          else
          {
LABEL_13:
            v17 = yPos;
            _ER8 = headerWidth;
            _EDX = width;
          }
        }
      }
      ++v26;
      ++v30;
    }
    while ( v26 < this->m_numDisplayedEvents );
    __asm
    {
      vmovaps xmm11, [rsp+0F8h+var_88]
      vmovaps xmm10, [rsp+0F8h+var_78]
      vmovaps xmm9, [rsp+0F8h+var_68]
      vmovaps xmm8, [rsp+0F8h+var_58]
      vmovaps xmm6, [rsp+0F8h+var_38]
    }
  }
  result = 40i64;
  __asm { vmovaps xmm7, [rsp+0F8h+var_48] }
  return result;
}

/*
==============
CPUTimlineProfilerView::DrawGpuTimerInfo
==============
*/
void CPUTimlineProfilerView::DrawGpuTimerInfo(CPUTimlineProfilerView *this, GfxCmdBufContext *gfxContext, const CPUTimlineProfilerView::TimelineDisplayParams *timelineParams, int timelineXPos, int timelineYPos, int timelineWidth, int timelineHeight, int timelineHeaderWidth, int mouseX, int mouseY, int selectedGpuFrame, int selectedGpuTimer)
{
  const CPUTimlineProfilerView::GPUFrame *v24; 
  unsigned __int64 v25; 
  unsigned __int64 v26; 
  unsigned __int64 m_displayRangeStartUnshifted; 
  __int64 v29; 
  unsigned __int64 v30; 
  const char *Name; 
  GfxFont *m_font; 
  GfxColor m_textColor; 
  GfxFont *v109; 
  char *v116; 
  char v117; 
  char v118; 
  GfxFont *v120; 
  float v133; 
  float v134; 
  float v135; 
  float v136; 
  float v137; 
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
  unsigned int v154; 
  GfxCmdBufContext v155; 
  unsigned int packed; 
  int v157; 
  char dest[128]; 
  char v159[128]; 
  void *retaddr; 

  _R11 = &retaddr;
  v157 = timelineXPos;
  v155.source = (GfxCmdBufSourceState *)gfxContext;
  if ( selectedGpuFrame != -1 && selectedGpuTimer != -1 && this->m_paused )
  {
    __asm
    {
      vmovaps xmmword ptr [r11-58h], xmm6
      vmovaps xmmword ptr [r11-68h], xmm7
      vmovaps xmmword ptr [r11-78h], xmm8
      vmovaps xmmword ptr [r11-88h], xmm9
      vmovaps xmmword ptr [r11-98h], xmm10
      vmovaps xmmword ptr [r11-0A8h], xmm11
      vmovaps xmmword ptr [r11-0B8h], xmm12
      vmovaps xmmword ptr [r11-0C8h], xmm13
    }
    v24 = &this->m_gpuFrames[selectedGpuFrame % 4];
    v25 = CPUTimlineProfilerView::GPUTimeToCPUTime(this, v24, v24->m_profileSamples[selectedGpuTimer].m_startUs);
    v26 = CPUTimlineProfilerView::GPUTimeToCPUTime(this, v24, v24->m_profileSamples[selectedGpuTimer].m_endUs);
    m_displayRangeStartUnshifted = timelineParams->m_displayRangeStartUnshifted;
    __asm { vmovsd  xmm4, cs:__real@43f0000000000000 }
    v29 = m_displayRangeStartUnshifted - v25;
    v30 = v26;
    __asm { vxorps  xmm0, xmm0, xmm0 }
    if ( v25 > m_displayRangeStartUnshifted )
      v29 = v25 - m_displayRangeStartUnshifted;
    __asm { vcvtsi2sd xmm0, xmm0, rdx }
    if ( v29 < 0 )
      __asm { vaddsd  xmm0, xmm0, xmm4 }
    __asm
    {
      vmovsd  xmm5, cs:?msecPerRawTimerTick@@3NA; double msecPerRawTimerTick
      vmulsd  xmm3, xmm0, xmm5
      vxorpd  xmm2, xmm3, cs:__xmm@80000000000000008000000000000000
    }
    _R8 = m_displayRangeStartUnshifted ^ 0x8000000000000000ui64;
    _RAX = v25 ^ 0x8000000000000000ui64;
    __asm
    {
      vmovq   xmm1, r8
      vmovq   xmm0, rax
      vpcmpgtq xmm1, xmm0, xmm1
      vblendvpd xmm1, xmm2, xmm3, xmm1
      vcvtsd2ss xmm13, xmm1, xmm1
    }
    if ( v30 )
    {
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2sd xmm0, xmm0, rax
      }
      if ( (__int64)(v30 - v25) < 0 )
        __asm { vaddsd  xmm0, xmm0, xmm4 }
      __asm
      {
        vmulsd  xmm0, xmm0, xmm5
        vcvtsd2ss xmm12, xmm0, xmm0
      }
    }
    else
    {
      __asm { vmovss  xmm12, cs:__real@bf800000 }
    }
    __asm
    {
      vmovss  xmm11, cs:__real@3f800000
      vdivss  xmm9, xmm11, dword ptr [r12+18h]
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, [rbp+150h+arg_38]
      vxorps  xmm2, xmm2, xmm2
      vcvtsi2ss xmm2, xmm2, [rsp+250h+anonymous_1]
      vaddss  xmm8, xmm0, xmm2
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, edi
      vxorps  xmm1, xmm1, xmm1
      vcvtsi2ss xmm1, xmm1, [rbp+150h+arg_28]
      vmulss  xmm3, xmm0, xmm9
      vaddss  xmm6, xmm1, xmm2
    }
    packed = R_GPU_TimerGetColor(v24->m_profileSamples[selectedGpuTimer].m_timer)->packed;
    __asm
    {
      vxorps  xmm7, xmm7, xmm7
      vcvtsi2ss xmm7, xmm7, eax
      vmulss  xmm4, xmm3, xmm7
      vaddss  xmm0, xmm4, xmm8; val
      vmovaps xmm2, xmm6; max
      vmovaps xmm1, xmm8; min
    }
    HIBYTE(packed) = 30;
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    __asm
    {
      vxorps  xmm3, xmm3, xmm3
      vmovaps xmm10, xmm0
      vcvtsi2ss xmm3, xmm3, r15d
      vmulss  xmm4, xmm3, xmm9
      vmulss  xmm5, xmm4, xmm7
      vaddss  xmm0, xmm5, xmm8; val
      vmovaps xmm2, xmm6; max
      vmovaps xmm1, xmm8; min
    }
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    _RBX = v155.source;
    __asm
    {
      vmovups xmm1, xmmword ptr [rbx]
      vsubss  xmm2, xmm0, xmm10
      vmovss  [rsp+250h+var_208], xmm11
      vmovss  [rsp+250h+var_210], xmm11
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, [rbp+150h+arg_30]
      vxorps  xmm8, xmm8, xmm8
      vmovss  [rsp+250h+var_218], xmm8
      vmovss  [rsp+250h+var_220], xmm8
      vmovss  [rsp+250h+var_228], xmm0
      vxorps  xmm3, xmm3, xmm3
      vcvtsi2ss xmm3, xmm3, [rbp+150h+arg_20]
      vmovss  [rsp+250h+var_230], xmm2
      vmovaps xmm2, xmm10
      vmovups [rsp+250h+var_1F8+8], xmm1
    }
    RB_DrawStretchPic(&v155, rgp.whiteMaterial, *(float *)&_XMM2, *(float *)&_XMM3, v133, v139, v142, v145, v148, v151, packed, GFX_PRIM_STATS_DEBUG);
    __asm
    {
      vmovups xmm0, xmmword ptr [rbx]
      vxorps  xmm7, xmm7, xmm7
      vcvtsi2ss xmm7, xmm7, [rbp+150h+arg_48]
    }
    v154 = this->m_textColor.packed;
    __asm
    {
      vmovss  [rsp+250h+var_208], xmm11
      vmovss  [rsp+250h+var_210], xmm11
      vxorps  xmm6, xmm6, xmm6
      vmovss  [rsp+250h+var_218], xmm8
      vcvtsi2ss xmm6, xmm6, ecx
      vmovss  [rsp+250h+var_220], xmm8
      vmovups [rsp+250h+var_1F8+8], xmm0
      vmovss  xmm0, cs:__real@42820000
      vmovss  xmm1, cs:__real@43960000
      vmovss  [rsp+250h+var_228], xmm0
      vmovaps xmm3, xmm7
      vmovaps xmm2, xmm6
      vmovss  [rsp+250h+var_230], xmm1
    }
    RB_DrawStretchPic(&v155, rgp.whiteMaterial, *(float *)&_XMM2, *(float *)&_XMM3, v134, v140, v143, v146, v149, v152, v154, GFX_PRIM_STATS_DEBUG);
    __asm
    {
      vmovups xmm0, xmmword ptr [rbx]
      vmovss  xmm1, cs:__real@43950000
      vmovss  [rsp+250h+var_208], xmm11
      vmovss  [rsp+250h+var_210], xmm11
      vmovss  [rsp+250h+var_218], xmm8
      vmovups [rsp+250h+var_1F8+8], xmm0
      vmovss  xmm0, cs:__real@427c0000
      vmovss  [rsp+250h+var_220], xmm8
      vmovss  [rsp+250h+var_228], xmm0
      vaddss  xmm3, xmm7, xmm11
      vaddss  xmm2, xmm6, xmm11
      vmovss  [rsp+250h+var_230], xmm1
    }
    RB_DrawStretchPic(&v155, rgp.whiteMaterial, *(float *)&_XMM2, *(float *)&_XMM3, v135, v141, v144, v147, v150, v153, 0xC8000000, GFX_PRIM_STATS_DEBUG);
    Name = R_GPU_TimerGetName(v24->m_profileSamples[selectedGpuTimer].m_timer);
    Com_sprintf(dest, 0x80ui64, "GPU Timer: %s", Name);
    __asm { vmovups xmm0, xmmword ptr [rbx] }
    m_font = this->m_font;
    m_textColor = this->m_textColor;
    __asm
    {
      vaddss  xmm7, xmm7, cs:__real@40a00000
      vaddss  xmm6, xmm6, cs:__real@40a00000
      vmovups [rsp+250h+var_1F8+8], xmm0
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, dword ptr [r8+8]
      vaddss  xmm2, xmm0, xmm7
      vmovaps xmm3, xmm6
      vmovss  [rsp+250h+var_230], xmm2
    }
    RB_DrawText(&v155, dest, m_font, *(float *)&_XMM3, v136, m_textColor);
    __asm
    {
      vcvtss2sd xmm3, xmm13, xmm13
      vmovq   r9, xmm3
    }
    Com_sprintf(dest, 0x80ui64, "Start: %.4f ms", *(double *)&_XMM3);
    __asm { vmovups xmm0, xmmword ptr [rbx] }
    v109 = this->m_font;
    __asm
    {
      vmovups [rsp+250h+var_1F8+8], xmm0
      vxorps  xmm0, xmm0, xmm0
      vmovaps xmm3, xmm6
      vcvtsi2ss xmm0, xmm0, eax
      vaddss  xmm1, xmm0, xmm7
      vmovss  [rsp+250h+var_230], xmm1
    }
    RB_DrawText(&v155, dest, v109, *(float *)&_XMM3, v137, this->m_textColor);
    __asm
    {
      vcvtss2sd xmm3, xmm12, xmm12
      vmovq   r9, xmm3
    }
    Com_sprintf(v159, 0x80ui64, "%.4f", *(double *)&_XMM3);
    __asm { vcomiss xmm12, xmm8 }
    v116 = v159;
    if ( v117 | v118 )
      v116 = "?";
    Com_sprintf(dest, 0x80ui64, "Duration: %s ms", v116);
    __asm { vmovups xmm0, xmmword ptr [rbx] }
    v120 = this->m_font;
    __asm
    {
      vmovups [rsp+250h+var_1F8+8], xmm0
      vxorps  xmm0, xmm0, xmm0
      vmovaps xmm3, xmm6
      vcvtsi2ss xmm0, xmm0, ecx
      vaddss  xmm1, xmm0, xmm7
      vmovss  [rsp+250h+var_230], xmm1
    }
    RB_DrawText(&v155, dest, v120, *(float *)&_XMM3, v138, this->m_textColor);
    __asm
    {
      vmovaps xmm13, [rsp+250h+var_C8+8]
      vmovaps xmm12, [rsp+250h+var_B8+8]
      vmovaps xmm11, [rsp+250h+var_A8+8]
      vmovaps xmm10, [rsp+250h+var_98+8]
      vmovaps xmm9, [rsp+250h+var_88+8]
      vmovaps xmm8, [rsp+250h+var_78+8]
      vmovaps xmm7, [rsp+250h+var_68+8]
      vmovaps xmm6, xmmword ptr [rsp+250h+var_58+8]
    }
  }
}

/*
==============
CPUTimlineProfilerView::DrawMouseCursor
==============
*/
void CPUTimlineProfilerView::DrawMouseCursor(CPUTimlineProfilerView *this, GfxCmdBufContext *gfxContext, int mouseX, int mouseY)
{
  Material *whiteMaterial; 
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
  float v78; 
  float v79; 
  float v80; 
  float v81; 
  float v82; 
  float v83; 
  float v84; 
  float v85; 
  float v86; 
  float v87; 
  float v88; 
  float v89; 
  float v90; 
  float v91; 
  float v92; 
  float v93; 
  float v94; 
  float v95; 
  float v96; 
  float v97; 
  float v98; 
  float v99; 
  float v100; 
  float v101; 
  float v102; 
  float v103; 
  float v104; 
  float v105; 
  float v106; 
  float v107; 
  float v108; 
  float v109; 
  float v110; 
  float v111; 
  float v112; 
  float v113; 
  float v114; 
  GfxCmdBufContext v115; 
  char v117; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovups xmm0, xmmword ptr [rdx]
    vmovaps xmmword ptr [rax-18h], xmm6
    vmovaps xmmword ptr [rax-28h], xmm7
  }
  _RBX = gfxContext;
  whiteMaterial = rgp.whiteMaterial;
  __asm
  {
    vmovaps xmmword ptr [rax-38h], xmm8
    vmovss  xmm8, cs:__real@40a00000
    vmovaps xmmword ptr [rax-48h], xmm9
    vmovss  xmm9, cs:__real@41880000
    vmovaps xmmword ptr [rax-58h], xmm10
    vmovss  xmm10, cs:__real@40000000
    vmovaps xmmword ptr [rax-68h], xmm11
    vmovaps xmmword ptr [rax-78h], xmm12
    vmovaps xmmword ptr [rax-88h], xmm13
    vmovaps xmmword ptr [rax-98h], xmm14
    vmovss  xmm14, cs:__real@3f800000
    vmovss  [rsp+118h+var_D0], xmm14
    vmovss  [rsp+118h+var_D8], xmm14
    vmovaps [rsp+118h+var_A8], xmm15
    vxorps  xmm13, xmm13, xmm13
    vmovss  [rsp+118h+var_E0], xmm13
    vmovss  [rsp+118h+var_E8], xmm13
    vxorps  xmm15, xmm15, xmm15
    vcvtsi2ss xmm15, xmm15, r8d
    vxorps  xmm12, xmm12, xmm12
    vcvtsi2ss xmm12, xmm12, r9d
    vsubss  xmm3, xmm12, cs:__real@41900000
    vsubss  xmm11, xmm15, xmm10
    vmovaps xmm2, xmm11
    vmovss  [rsp+118h+var_F0], xmm9
    vmovss  [rsp+118h+var_F8], xmm8
    vmovups [rsp+118h+var_B8], xmm0
  }
  RB_DrawStretchPic(&v115, whiteMaterial, *(float *)&_XMM2, *(float *)&_XMM3, v67, v75, v83, v91, v99, v107, 0xFF000000, GFX_PRIM_STATS_DEBUG);
  __asm
  {
    vmovups xmm0, xmmword ptr [rbx]
    vmovss  [rsp+118h+var_D0], xmm14
    vmovss  [rsp+118h+var_D8], xmm14
    vmovss  [rsp+118h+var_E0], xmm13
    vmovss  [rsp+118h+var_E8], xmm13
    vmovss  [rsp+118h+var_F0], xmm9
    vaddss  xmm3, xmm12, xmm10
    vmovaps xmm2, xmm11
    vmovss  [rsp+118h+var_F8], xmm8
    vmovups [rsp+118h+var_B8], xmm0
  }
  RB_DrawStretchPic(&v115, rgp.whiteMaterial, *(float *)&_XMM2, *(float *)&_XMM3, v68, v76, v84, v92, v100, v108, 0xFF000000, GFX_PRIM_STATS_DEBUG);
  __asm
  {
    vmovups xmm0, xmmword ptr [rbx]
    vsubss  xmm2, xmm15, cs:__real@41900000
    vmovss  [rsp+118h+var_D0], xmm14
    vmovss  [rsp+118h+var_D8], xmm14
    vmovss  [rsp+118h+var_E0], xmm13
    vmovss  [rsp+118h+var_E8], xmm13
    vsubss  xmm7, xmm12, xmm10
    vmovss  [rsp+118h+var_F0], xmm8
    vmovaps xmm3, xmm7
    vmovss  [rsp+118h+var_F8], xmm9
    vmovups [rsp+118h+var_B8], xmm0
  }
  RB_DrawStretchPic(&v115, rgp.whiteMaterial, *(float *)&_XMM2, *(float *)&_XMM3, v69, v77, v85, v93, v101, v109, 0xFF000000, GFX_PRIM_STATS_DEBUG);
  __asm
  {
    vmovups xmm0, xmmword ptr [rbx]
    vmovss  [rsp+118h+var_D0], xmm14
    vmovss  [rsp+118h+var_D8], xmm14
    vmovss  [rsp+118h+var_E0], xmm13
    vmovss  [rsp+118h+var_E8], xmm13
    vmovss  [rsp+118h+var_F0], xmm8
    vmovss  [rsp+118h+var_F8], xmm9
    vmovups [rsp+118h+var_B8], xmm0
    vaddss  xmm2, xmm15, xmm10
    vmovaps xmm3, xmm7
  }
  RB_DrawStretchPic(&v115, rgp.whiteMaterial, *(float *)&_XMM2, *(float *)&_XMM3, v70, v78, v86, v94, v102, v110, 0xFF000000, GFX_PRIM_STATS_DEBUG);
  __asm
  {
    vmovss  xmm8, cs:__real@41700000
    vmovups xmm0, xmmword ptr [rbx]
    vmovss  [rsp+118h+var_D0], xmm14
    vmovss  [rsp+118h+var_D8], xmm14
    vmovss  [rsp+118h+var_E0], xmm13
    vsubss  xmm3, xmm7, xmm8
    vmovss  xmm7, cs:__real@40400000
    vmovss  [rsp+118h+var_E8], xmm13
    vsubss  xmm6, xmm15, xmm14
    vmovss  [rsp+118h+var_F0], xmm8
    vmovaps xmm2, xmm6
    vmovss  [rsp+118h+var_F8], xmm7
    vmovups [rsp+118h+var_B8], xmm0
  }
  RB_DrawStretchPic(&v115, rgp.whiteMaterial, *(float *)&_XMM2, *(float *)&_XMM3, v71, v79, v87, v95, v103, v111, 0xFFFFFFFF, GFX_PRIM_STATS_DEBUG);
  __asm
  {
    vmovups xmm0, xmmword ptr [rbx]
    vmovss  [rsp+118h+var_D0], xmm14
    vmovss  [rsp+118h+var_D8], xmm14
    vmovss  [rsp+118h+var_E0], xmm13
    vmovss  [rsp+118h+var_E8], xmm13
    vmovss  [rsp+118h+var_F0], xmm8
    vaddss  xmm3, xmm12, xmm7
    vmovaps xmm2, xmm6
    vmovss  [rsp+118h+var_F8], xmm7
    vmovups [rsp+118h+var_B8], xmm0
  }
  RB_DrawStretchPic(&v115, rgp.whiteMaterial, *(float *)&_XMM2, *(float *)&_XMM3, v72, v80, v88, v96, v104, v112, 0xFFFFFFFF, GFX_PRIM_STATS_DEBUG);
  __asm
  {
    vmovups xmm0, xmmword ptr [rbx]
    vmovss  [rsp+118h+var_D0], xmm14
    vmovss  [rsp+118h+var_D8], xmm14
    vmovss  [rsp+118h+var_E0], xmm13
    vmovss  [rsp+118h+var_E8], xmm13
    vsubss  xmm6, xmm12, xmm14
    vmovss  [rsp+118h+var_F0], xmm7
    vsubss  xmm2, xmm11, xmm8
    vmovaps xmm3, xmm6
    vmovss  [rsp+118h+var_F8], xmm8
    vmovups [rsp+118h+var_B8], xmm0
  }
  RB_DrawStretchPic(&v115, rgp.whiteMaterial, *(float *)&_XMM2, *(float *)&_XMM3, v73, v81, v89, v97, v105, v113, 0xFFFFFFFF, GFX_PRIM_STATS_DEBUG);
  __asm
  {
    vmovups xmm0, xmmword ptr [rbx]
    vmovss  [rsp+118h+var_D0], xmm14
    vmovss  [rsp+118h+var_D8], xmm14
    vmovss  [rsp+118h+var_E0], xmm13
    vmovss  [rsp+118h+var_E8], xmm13
    vmovss  [rsp+118h+var_F0], xmm7
    vaddss  xmm2, xmm15, xmm7
    vmovaps xmm3, xmm6
    vmovss  [rsp+118h+var_F8], xmm8
    vmovups [rsp+118h+var_B8], xmm0
  }
  RB_DrawStretchPic(&v115, rgp.whiteMaterial, *(float *)&_XMM2, *(float *)&_XMM3, v74, v82, v90, v98, v106, v114, 0xFFFFFFFF, GFX_PRIM_STATS_DEBUG);
  __asm { vmovaps xmm15, [rsp+118h+var_A8] }
  _R11 = &v117;
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
  }
}

/*
==============
CPUTimlineProfilerView::DrawSampleInfo
==============
*/
void CPUTimlineProfilerView::DrawSampleInfo(CPUTimlineProfilerView *this, GfxCmdBufContext *gfxContext, const CPUTimlineProfilerView::TimelineDisplayParams *timelineParams, int timelineXPos, int timelineYPos, int timelineWidth, int timelineHeight, int timelineHeaderWidth, int mouseX, int mouseY, int selectedSample)
{
  CPUTimelineProfiler::SampleBase *m_base; 
  unsigned __int64 m_displayRangeStartUnshifted; 
  __int64 v25; 
  unsigned __int64 m_start; 
  __int64 v28; 
  unsigned __int64 m_end; 
  unsigned int v49; 
  unsigned int m_color; 
  int v57; 
  __int16 m_profile; 
  const char *v105; 
  GfxFont *m_font; 
  GfxColor m_textColor; 
  GfxFont *v118; 
  char *v125; 
  char v126; 
  char v127; 
  GfxFont *v129; 
  CPUTimelineProfiler::CPUStatsSet m_cpuStatsSet; 
  CPUTimelineProfiler::CPUStatsSet v139; 
  const char *v140; 
  const char *v141; 
  GfxFont *v143; 
  CPUTimelineProfiler::CPUStatsSet v148; 
  GfxFont *v150; 
  GfxFont *v156; 
  GfxFont *v172; 
  float instructionsRetiredb; 
  float instructionsRetiredc; 
  float instructionsRetiredd; 
  float instructionsRetirede; 
  float instructionsRetiredf; 
  float instructionsRetiredg; 
  unsigned __int64 *instructionsRetired; 
  float instructionsRetiredh; 
  unsigned __int64 *instructionsRetireda; 
  float instructionsRetiredi; 
  float instructionsRetiredj; 
  float instructionsRetiredk; 
  float v191; 
  float v192; 
  float v193; 
  float v194; 
  float v195; 
  float v196; 
  float v197; 
  float v198; 
  float v199; 
  float v200; 
  float v201; 
  float v202; 
  float v203; 
  float v204; 
  float v205; 
  unsigned int packed; 
  unsigned __int64 l2CacheMisses; 
  unsigned __int64 v208[2]; 
  GfxCmdBufContext v209; 
  unsigned __int64 cacheAccesses; 
  char dest[128]; 
  char v212[128]; 

  _R15 = gfxContext;
  _RSI = this;
  if ( selectedSample != -1 && this->m_paused )
  {
    m_base = this->m_displayedSamples.m_base;
    m_displayRangeStartUnshifted = timelineParams->m_displayRangeStartUnshifted;
    __asm
    {
      vmovsd  xmm4, cs:__real@43f0000000000000
      vmovaps [rsp+270h+var_50], xmm6
      vmovaps [rsp+270h+var_60], xmm7
      vmovaps [rsp+270h+var_70], xmm8
      vmovaps [rsp+270h+var_80], xmm9
    }
    v25 = selectedSample;
    __asm
    {
      vmovaps [rsp+270h+var_90], xmm10
      vmovaps [rsp+270h+var_A0], xmm11
      vxorps  xmm0, xmm0, xmm0
    }
    m_start = m_base[v25].m_start;
    __asm
    {
      vmovaps [rsp+270h+var_B0], xmm12
      vmovaps [rsp+270h+var_C0], xmm13
    }
    v28 = m_start - m_displayRangeStartUnshifted;
    if ( m_start <= m_displayRangeStartUnshifted )
      v28 = m_displayRangeStartUnshifted - m_start;
    __asm { vcvtsi2sd xmm0, xmm0, rcx }
    if ( v28 < 0 )
      __asm { vaddsd  xmm0, xmm0, xmm4 }
    __asm { vmovsd  xmm5, cs:?msecPerRawTimerTick@@3NA; double msecPerRawTimerTick }
    m_end = m_base[v25].m_end;
    __asm
    {
      vmulsd  xmm3, xmm0, xmm5
      vxorpd  xmm2, xmm3, cs:__xmm@80000000000000008000000000000000
    }
    _RDX = m_displayRangeStartUnshifted ^ 0x8000000000000000ui64;
    _RAX = m_start ^ 0x8000000000000000ui64;
    __asm
    {
      vmovq   xmm1, rdx
      vmovq   xmm0, rax
      vpcmpgtq xmm1, xmm0, xmm1
      vblendvpd xmm1, xmm2, xmm3, xmm1
      vcvtsd2ss xmm13, xmm1, xmm1
    }
    if ( m_end )
    {
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2sd xmm0, xmm0, rax
      }
      if ( (__int64)(m_end - m_start) < 0 )
        __asm { vaddsd  xmm0, xmm0, xmm4 }
      __asm
      {
        vmulsd  xmm0, xmm0, xmm5
        vcvtsd2ss xmm12, xmm0, xmm0
      }
    }
    else
    {
      __asm { vmovss  xmm12, cs:__real@bf800000 }
    }
    __asm
    {
      vmovss  xmm11, cs:__real@3f800000
      vdivss  xmm9, xmm11, dword ptr [r10+18h]
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, [rbp+170h+arg_38]
      vxorps  xmm2, xmm2, xmm2
    }
    v49 = 668265261 * ((9 * (m_base[v25].m_profile ^ ((m_base[v25].m_profile ^ 0x3D0000u) >> 16))) ^ ((9 * (m_base[v25].m_profile ^ ((m_base[v25].m_profile ^ 0x3D0000u) >> 16))) >> 4));
    __asm
    {
      vcvtsi2ss xmm2, xmm2, r13d
      vaddss  xmm8, xmm0, xmm2
      vxorps  xmm0, xmm0, xmm0
      vxorps  xmm1, xmm1, xmm1
      vcvtsi2ss xmm1, xmm1, [rbp+170h+arg_28]
    }
    LODWORD(l2CacheMisses) = v49 ^ (v49 >> 15);
    m_color = m_base[v25].m_color;
    __asm { vaddss  xmm6, xmm1, xmm2 }
    BYTE3(l2CacheMisses) = -1;
    v57 = l2CacheMisses;
    if ( m_color )
      v57 = m_color;
    LODWORD(l2CacheMisses) = v57;
    __asm
    {
      vcvtsi2ss xmm0, xmm0, r8d
      vmulss  xmm3, xmm0, xmm9
      vxorps  xmm7, xmm7, xmm7
      vcvtsi2ss xmm7, xmm7, eax
      vmulss  xmm4, xmm3, xmm7
      vaddss  xmm0, xmm4, xmm8; val
      vmovaps xmm2, xmm6; max
      vmovaps xmm1, xmm8; min
    }
    BYTE3(l2CacheMisses) = 40;
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    __asm
    {
      vxorps  xmm3, xmm3, xmm3
      vcvtsi2ss xmm3, xmm3, r12d
      vmulss  xmm4, xmm3, xmm9
      vmulss  xmm5, xmm4, xmm7
      vmovaps xmm10, xmm0
      vaddss  xmm0, xmm5, xmm8; val
      vmovaps xmm2, xmm6; max
      vmovaps xmm1, xmm8; min
    }
    *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
    __asm
    {
      vmovups xmm1, xmmword ptr [r15]
      vmovss  [rsp+270h+var_228], xmm11
      vsubss  xmm2, xmm0, xmm10
      vmovss  [rsp+270h+var_230], xmm11
      vxorps  xmm8, xmm8, xmm8
      vmovss  [rsp+270h+var_238], xmm8
      vmovss  [rsp+270h+var_240], xmm8
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, [rbp+170h+arg_30]
      vmovss  [rsp+270h+var_248], xmm0
      vxorps  xmm3, xmm3, xmm3
      vcvtsi2ss xmm3, xmm3, [rbp+170h+arg_20]
      vmovss  dword ptr [rsp+270h+instructionsRetired], xmm2
      vmovaps xmm2, xmm10
      vmovups xmmword ptr [rsp+270h+var_200], xmm1
    }
    RB_DrawStretchPic((GfxCmdBufContext *)v208, rgp.whiteMaterial, *(float *)&_XMM2, *(float *)&_XMM3, instructionsRetiredb, v191, v194, v197, v200, v203, l2CacheMisses, GFX_PRIM_STATS_DEBUG);
    __asm
    {
      vmovd   xmm0, dword ptr [rsi+104h]
      vmovss  xmm2, cs:__real@42820000
    }
    _EAX = 0;
    __asm { vmovd   xmm1, eax }
    packed = _RSI->m_textColor.packed;
    __asm
    {
      vpcmpeqd xmm3, xmm0, xmm1
      vmovups xmm0, xmmword ptr [r15]
      vmovss  xmm1, cs:__real@43070000
      vmovss  [rsp+270h+var_228], xmm11
      vblendvps xmm6, xmm1, xmm2, xmm3
      vmovss  [rsp+270h+var_230], xmm11
      vmovss  [rsp+270h+var_238], xmm8
      vmovups xmmword ptr [rsp+270h+var_200], xmm0
      vmovss  xmm0, cs:__real@43960000
      vmovss  [rsp+270h+var_240], xmm8
      vxorps  xmm7, xmm7, xmm7
      vcvtsi2ss xmm7, xmm7, [rbp+170h+arg_48]
      vxorps  xmm9, xmm9, xmm9
      vcvtsi2ss xmm9, xmm9, edi
      vmovss  [rsp+270h+var_248], xmm6
      vmovaps xmm3, xmm7
      vmovaps xmm2, xmm9
      vmovss  dword ptr [rsp+270h+instructionsRetired], xmm0
      vmovss  dword ptr [rsp+270h+l2CacheMisses], xmm6
    }
    RB_DrawStretchPic((GfxCmdBufContext *)v208, rgp.whiteMaterial, *(float *)&_XMM2, *(float *)&_XMM3, instructionsRetiredc, v192, v195, v198, v201, v204, packed, GFX_PRIM_STATS_DEBUG);
    __asm
    {
      vmovups xmm0, xmmword ptr [r15]
      vsubss  xmm1, xmm6, cs:__real@40000000
      vmovss  [rsp+270h+var_228], xmm11
      vmovss  [rsp+270h+var_230], xmm11
      vmovss  [rsp+270h+var_238], xmm8
      vmovups xmmword ptr [rsp+270h+var_200], xmm0
      vmovss  xmm0, cs:__real@43950000
      vmovss  [rsp+270h+var_240], xmm8
      vmovss  [rsp+270h+var_248], xmm1
      vaddss  xmm3, xmm7, xmm11
      vaddss  xmm2, xmm9, xmm11
      vmovss  dword ptr [rsp+270h+instructionsRetired], xmm0
    }
    RB_DrawStretchPic((GfxCmdBufContext *)v208, rgp.whiteMaterial, *(float *)&_XMM2, *(float *)&_XMM3, instructionsRetiredd, v193, v196, v199, v202, v205, 0xC8000000, GFX_PRIM_STATS_DEBUG);
    __asm
    {
      vmovaps xmm11, [rsp+270h+var_A0]
      vmovaps xmm10, [rsp+270h+var_90]
    }
    m_profile = _RSI->m_displayedSamples.m_base[v25].m_profile;
    if ( m_profile < 0 )
    {
      v105 = "<unknown>";
      if ( _RSI->m_displayedSamples.m_name[v25][0] )
        v105 = _RSI->m_displayedSamples.m_name[v25];
    }
    else
    {
      v105 = prof_enumNames[m_profile];
    }
    Com_sprintf(dest, 0x80ui64, "Sample: %s", v105);
    __asm { vmovups xmm0, xmmword ptr [r15] }
    m_font = _RSI->m_font;
    __asm { vaddss  xmm6, xmm7, cs:__real@40a00000 }
    m_textColor = _RSI->m_textColor;
    __asm
    {
      vaddss  xmm7, xmm9, cs:__real@40a00000
      vmovups xmmword ptr [rsp+270h+var_200], xmm0
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, dword ptr [r8+8]
      vaddss  xmm2, xmm0, xmm6
      vmovaps xmm3, xmm7
      vmovss  dword ptr [rsp+270h+instructionsRetired], xmm2
    }
    RB_DrawText((GfxCmdBufContext *)v208, dest, m_font, *(float *)&_XMM3, instructionsRetirede, m_textColor);
    __asm
    {
      vcvtss2sd xmm3, xmm13, xmm13
      vmovq   r9, xmm3
    }
    Com_sprintf(dest, 0x80ui64, "Start: %.4f ms", *(double *)&_XMM3);
    __asm { vmovups xmm0, xmmword ptr [r15] }
    v118 = _RSI->m_font;
    __asm
    {
      vmovups xmmword ptr [rsp+270h+var_200], xmm0
      vxorps  xmm0, xmm0, xmm0
      vmovaps xmm3, xmm7
      vcvtsi2ss xmm0, xmm0, eax
      vaddss  xmm1, xmm0, xmm6
      vmovss  dword ptr [rsp+270h+instructionsRetired], xmm1
    }
    RB_DrawText((GfxCmdBufContext *)v208, dest, v118, *(float *)&_XMM3, instructionsRetiredf, _RSI->m_textColor);
    __asm
    {
      vcvtss2sd xmm3, xmm12, xmm12
      vmovq   r9, xmm3
    }
    Com_sprintf(v212, 0x80ui64, "%.4f", *(double *)&_XMM3);
    __asm { vcomiss xmm12, xmm8 }
    v125 = v212;
    if ( v126 | v127 )
      v125 = "?";
    Com_sprintf(dest, 0x80ui64, "Duration: %s ms", v125);
    __asm { vmovups xmm0, xmmword ptr [r15] }
    v129 = _RSI->m_font;
    __asm
    {
      vmovups xmmword ptr [rsp+270h+var_200], xmm0
      vxorps  xmm0, xmm0, xmm0
      vmovaps xmm3, xmm7
      vcvtsi2ss xmm0, xmm0, ecx
      vaddss  xmm1, xmm0, xmm6
      vmovss  dword ptr [rsp+270h+instructionsRetired], xmm1
    }
    RB_DrawText((GfxCmdBufContext *)v208, dest, v129, *(float *)&_XMM3, instructionsRetiredg, _RSI->m_textColor);
    m_cpuStatsSet = _RSI->m_cpuStatsSet;
    __asm
    {
      vmovaps xmm13, [rsp+270h+var_C0]
      vmovaps xmm12, [rsp+270h+var_B0]
      vmovaps xmm9, [rsp+270h+var_80]
      vmovaps xmm8, [rsp+270h+var_70]
    }
    if ( m_cpuStatsSet )
    {
      CPUTimelineProfiler::GetStatsFromCounter(&_RSI->m_displayedSamples.m_cpuStats[v25], m_cpuStatsSet, &cacheAccesses, &l2CacheMisses, v208);
      v139 = _RSI->m_cpuStatsSet;
      v140 = "D";
      if ( v139 == CPU_STATS_DCACHE )
      {
        v141 = "D";
      }
      else
      {
        v141 = "I";
        if ( v139 != CPU_STATS_ICACHE )
          v141 = (char *)&queryFormat.fmt + 3;
      }
      LODWORD(instructionsRetired) = cacheAccesses;
      Com_sprintf(dest, 0x80ui64, "%s$ Accesses: %d", v141, instructionsRetired);
      __asm { vmovups xmm0, xmmword ptr [r15] }
      v143 = _RSI->m_font;
      __asm
      {
        vmovups [rbp+170h+var_1F0], xmm0
        vxorps  xmm0, xmm0, xmm0
        vmovaps xmm3, xmm7
        vcvtsi2ss xmm0, xmm0, eax
        vaddss  xmm1, xmm0, xmm6
        vmovss  dword ptr [rsp+270h+instructionsRetired], xmm1
      }
      RB_DrawText(&v209, dest, v143, *(float *)&_XMM3, instructionsRetiredh, _RSI->m_textColor);
      v148 = _RSI->m_cpuStatsSet;
      if ( v148 != CPU_STATS_DCACHE )
      {
        v140 = "I";
        if ( v148 != CPU_STATS_ICACHE )
          v140 = (char *)&queryFormat.fmt + 3;
      }
      LODWORD(instructionsRetireda) = l2CacheMisses;
      Com_sprintf(dest, 0x80ui64, "%s$ L2 misses: %d", v140, instructionsRetireda);
      __asm { vmovups xmm0, xmmword ptr [r15] }
      v150 = _RSI->m_font;
      __asm
      {
        vmovups [rbp+170h+var_1F0], xmm0
        vxorps  xmm0, xmm0, xmm0
        vmovaps xmm3, xmm7
        vcvtsi2ss xmm0, xmm0, ecx
        vaddss  xmm1, xmm0, xmm6
        vmovss  dword ptr [rsp+270h+instructionsRetired], xmm1
      }
      RB_DrawText(&v209, dest, v150, *(float *)&_XMM3, instructionsRetiredi, _RSI->m_textColor);
      Com_sprintf(dest, 0x80ui64, "Inst retired: %d", LODWORD(v208[0]));
      __asm { vmovups xmm0, xmmword ptr [r15] }
      v156 = _RSI->m_font;
      __asm
      {
        vmovups [rbp+170h+var_1F0], xmm0
        vxorps  xmm0, xmm0, xmm0
        vmovaps xmm3, xmm7
        vcvtsi2ss xmm0, xmm0, ecx
        vaddss  xmm1, xmm0, xmm6
        vmovss  dword ptr [rsp+270h+instructionsRetired], xmm1
      }
      RB_DrawText(&v209, dest, v156, *(float *)&_XMM3, instructionsRetiredj, _RSI->m_textColor);
      __asm
      {
        vmovss  xmm2, cs:__real@5f800000
        vxorps  xmm1, xmm1, xmm1
        vcvtsi2ss xmm1, xmm1, rax
      }
      if ( (l2CacheMisses & 0x8000000000000000ui64) != 0i64 )
        __asm { vaddss  xmm1, xmm1, xmm2 }
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, rax
      }
      if ( (cacheAccesses & 0x8000000000000000ui64) != 0i64 )
        __asm { vaddss  xmm0, xmm0, xmm2 }
      __asm
      {
        vdivss  xmm0, xmm1, xmm0
        vmulss  xmm1, xmm0, cs:__real@42c80000
        vcvtss2sd xmm3, xmm1, xmm1
        vmovq   r9, xmm3
      }
      Com_sprintf(dest, 0x80ui64, "Cache suckness factor: %.1f", *(double *)&_XMM3);
      __asm { vmovups xmm0, xmmword ptr [r15] }
      v172 = _RSI->m_font;
      __asm
      {
        vmovups [rbp+170h+var_1F0], xmm0
        vxorps  xmm0, xmm0, xmm0
        vmovaps xmm3, xmm7
        vcvtsi2ss xmm0, xmm0, eax
        vaddss  xmm1, xmm0, xmm6
        vmovss  dword ptr [rsp+270h+instructionsRetired], xmm1
      }
      RB_DrawText(&v209, dest, v172, *(float *)&_XMM3, instructionsRetiredk, _RSI->m_textColor);
    }
    __asm
    {
      vmovaps xmm6, [rsp+270h+var_50]
      vmovaps xmm7, [rsp+270h+var_60]
    }
  }
}

/*
==============
CPUTimlineProfilerView::DrawThreadTimeline
==============
*/
__int64 CPUTimlineProfilerView::DrawThreadTimeline(CPUTimlineProfilerView *this, GfxCmdBufContext *gfxContext, const CPUTimlineProfilerView::TimelineDisplayParams *timelineParams, int threadToDraw, int xPos, int yPos, int width, int headerWidth, int mouseX, int mouseY, int *selectedSample)
{
  const CPUTimlineProfilerView::TimelineDisplayParams *v22; 
  int m_numDisplayedSamples; 
  int v25; 
  int v26; 
  int v27; 
  unsigned int v28; 
  int v29; 
  int v30; 
  unsigned int m_rectsToDrawWritePtr; 
  unsigned int v32; 
  unsigned __int64 v39; 
  __int64 v40; 
  CPUTimelineProfiler::SampleBase *m_base; 
  int m_level; 
  unsigned __int64 m_start; 
  unsigned __int64 m_displayRangeStart; 
  unsigned __int64 m_end; 
  char v76; 
  bool v77; 
  int v78; 
  CPUTimelineProfiler::SampleBase *v80; 
  unsigned int v81; 
  unsigned int m_color; 
  CPUTimelineProfiler::CPUStatsSet m_cpuStatsSet; 
  unsigned int v84; 
  const unsigned __int8 *v92; 
  __int64 v97; 
  int m_probeFilter; 
  char v132; 
  unsigned int v146; 
  unsigned int v147; 
  unsigned int v148; 
  unsigned int v149; 
  CPUTimlineProfilerView *v150; 
  unsigned int v153; 
  unsigned int v154; 
  unsigned int v155; 
  unsigned int v156; 
  unsigned __int64 l2CacheMisses; 
  signed __int64 instructionsRetired; 
  GfxCmdBufContext instructionsRetired_8; 
  unsigned int v169; 

  _R12 = gfxContext;
  v22 = timelineParams;
  Sys_ProfBeginNamedEvent(0xFFC0C0C0, "draw thread");
  m_numDisplayedSamples = this->m_numDisplayedSamples;
  v25 = 0;
  v26 = 0;
  v27 = m_numDisplayedSamples;
  v28 = 2 * (5 * this->m_numLevelsToDisplay + 15);
  v156 = v28;
  if ( m_numDisplayedSamples > 0 )
  {
    do
    {
      v29 = v27 / 2 + v26;
      if ( this->m_displayedSamples.m_base[v29].m_thread >= threadToDraw )
      {
        v27 /= 2;
      }
      else
      {
        v26 = v29 + 1;
        v27 += -1 - v27 / 2;
      }
    }
    while ( v27 > 0 );
    do
    {
      v30 = m_numDisplayedSamples / 2 + v25;
      if ( this->m_displayedSamples.m_base[v30].m_thread > threadToDraw )
      {
        m_numDisplayedSamples /= 2;
      }
      else
      {
        v25 = v30 + 1;
        m_numDisplayedSamples += -1 - m_numDisplayedSamples / 2;
      }
    }
    while ( m_numDisplayedSamples > 0 );
  }
  m_rectsToDrawWritePtr = this->m_rectsToDrawWritePtr;
  v32 = m_rectsToDrawWritePtr;
  _ER9 = width;
  _ER11 = headerWidth;
  _EDX = width - headerWidth;
  v155 = m_rectsToDrawWritePtr;
  if ( v26 < (__int64)v25 )
  {
    __asm
    {
      vmovaps [rsp+120h+var_98+8], xmm11
      vmovss  xmm11, cs:__real@5f800000
      vmovaps [rsp+120h+var_A8+8], xmm12
      vmovss  xmm12, cs:__real@3f800000
      vmovaps [rsp+120h+var_B8+8], xmm13
      vmovaps [rsp+120h+var_C8+8], xmm14
      vmovss  xmm14, cs:__real@42c80000
      vmovaps [rsp+120h+var_48+8], xmm6
      vmovaps [rsp+120h+var_58+8], xmm7
      vmovaps [rsp+120h+var_68+8], xmm8
    }
    v39 = v26;
    __asm { vmovaps [rsp+120h+var_78+8], xmm9 }
    v40 = v25 - (__int64)v26;
    __asm
    {
      vmovaps [rsp+120h+var_88+8], xmm10
      vxorps  xmm13, xmm13, xmm13
    }
    do
    {
      m_base = this->m_displayedSamples.m_base;
      m_level = m_base[v39].m_level;
      if ( m_level < this->m_numLevelsToDisplay )
      {
        m_start = m_base[v39].m_start;
        if ( m_start <= v22->m_displayRangeEnd )
        {
          m_displayRangeStart = v22->m_displayRangeStart;
          m_end = m_base[v39].m_end;
          if ( m_end < m_displayRangeStart )
          {
            v22 = timelineParams;
          }
          else
          {
            __asm { vmovd   xmm2, [rbp+27h+arg_20] }
            _ECX = m_start - m_displayRangeStart;
            __asm
            {
              vcvtdq2ps xmm2, xmm2
              vmovd   xmm0, r11d
              vcvtdq2ps xmm0, xmm0
              vdivss  xmm7, xmm12, dword ptr [rax+18h]
              vaddss  xmm9, xmm0, xmm2
              vmovd   xmm0, ecx
              vcvtdq2ps xmm0, xmm0
              vmulss  xmm3, xmm0, xmm7
              vmovd   xmm8, edx
              vmovd   xmm1, r9d
              vcvtdq2ps xmm1, xmm1
              vaddss  xmm6, xmm1, xmm2
              vcvtdq2ps xmm8, xmm8
              vmulss  xmm4, xmm3, xmm8
              vaddss  xmm0, xmm4, xmm9; val
              vmovaps xmm2, xmm6; max
              vmovaps xmm1, xmm9; min
            }
            *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
            __asm { vmovaps xmm10, xmm0 }
            _ER15 = m_end - m_displayRangeStart;
            __asm
            {
              vmovd   xmm3, r15d
              vcvtdq2ps xmm3, xmm3
              vmulss  xmm4, xmm3, xmm7
              vmulss  xmm5, xmm4, xmm8
              vaddss  xmm0, xmm5, xmm9; val
              vmovaps xmm2, xmm6; max
              vmovaps xmm1, xmm9; min
            }
            *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
            __asm
            {
              vsubss  xmm6, xmm0, xmm10
              vcomiss xmm6, xmm13
            }
            if ( v76 | v77 )
            {
              v22 = timelineParams;
              _ER9 = width;
              _ER11 = headerWidth;
            }
            else
            {
              v78 = yPos + 10 * m_level;
              if ( *selectedSample == -1 )
              {
                __asm
                {
                  vxorps  xmm1, xmm1, xmm1
                  vcvtsi2ss xmm1, xmm1, [rbp+27h+arg_40]
                  vcomiss xmm1, xmm10
                }
                if ( *selectedSample == -1 )
                {
                  __asm { vcomiss xmm1, xmm0 }
                  if ( mouseY >= v78 && mouseY <= v78 + 10 )
                    *selectedSample = v26;
                }
              }
              v80 = this->m_displayedSamples.m_base;
              v81 = (668265261 * ((9 * (v80[v39].m_profile ^ ((v80[v39].m_profile ^ 0x3D0000u) >> 16))) ^ ((9 * (v80[v39].m_profile ^ ((v80[v39].m_profile ^ 0x3D0000u) >> 16))) >> 4))) ^ ((668265261 * ((9 * (v80[v39].m_profile ^ ((v80[v39].m_profile ^ 0x3D0000u) >> 16))) ^ ((9 * (v80[v39].m_profile ^ ((v80[v39].m_profile ^ 0x3D0000u) >> 16))) >> 4))) >> 15);
              m_color = v80[v39].m_color;
              m_cpuStatsSet = this->m_cpuStatsSet;
              v153 = v81;
              HIBYTE(v153) = -1;
              v84 = v153;
              if ( m_color )
                v84 = m_color;
              v154 = v84;
              if ( m_cpuStatsSet )
              {
                CPUTimelineProfiler::GetStatsFromCounter(&this->m_displayedSamples.m_cpuStats[v26], m_cpuStatsSet, (unsigned __int64 *)&instructionsRetired, &l2CacheMisses, (unsigned __int64 *)&instructionsRetired_8);
                __asm
                {
                  vxorps  xmm1, xmm1, xmm1
                  vcvtsi2ss xmm1, xmm1, rax
                }
                if ( (l2CacheMisses & 0x8000000000000000ui64) != 0i64 )
                  __asm { vaddss  xmm1, xmm1, xmm11 }
                __asm
                {
                  vxorps  xmm0, xmm0, xmm0
                  vcvtsi2ss xmm0, xmm0, rax
                }
                if ( instructionsRetired < 0 )
                  __asm { vaddss  xmm0, xmm0, xmm11 }
                __asm { vdivss  xmm0, xmm1, xmm0 }
                LOBYTE(_ER9) = 76;
                v92 = &kColors[1][1];
                LOBYTE(_ER10) = -1;
                _RDX = &kThresholds[1];
                LOBYTE(_ER11) = 76;
                HIBYTE(v169) = -1;
                __asm { vmulss  xmm5, xmm0, xmm14 }
                v97 = 3i64;
                do
                {
                  _EAX = *(v92 - 1);
                  v92 += 3;
                  __asm
                  {
                    vmovss  xmm0, dword ptr [rdx]
                    vsubss  xmm1, xmm0, dword ptr [rdx-4]
                    vsubss  xmm2, xmm5, dword ptr [rdx-4]
                  }
                  ++_RDX;
                  __asm
                  {
                    vdivss  xmm2, xmm2, xmm1
                    vmaxss  xmm0, xmm2, xmm13
                    vminss  xmm3, xmm0, xmm12
                    vmovd   xmm0, eax
                  }
                  _EAX = (unsigned __int8)_ER9;
                  __asm
                  {
                    vcvtdq2ps xmm0, xmm0
                    vmulss  xmm2, xmm0, xmm3
                    vmovd   xmm1, eax
                  }
                  _EAX = *(v92 - 3);
                  __asm
                  {
                    vcvtdq2ps xmm1, xmm1
                    vsubss  xmm4, xmm12, xmm3
                    vmulss  xmm0, xmm1, xmm4
                    vaddss  xmm2, xmm2, xmm0
                    vcvttss2si r9d, xmm2
                  }
                  LOBYTE(v169) = _ER9;
                  __asm { vmovd   xmm0, eax }
                  _EAX = (unsigned __int8)_ER10;
                  __asm
                  {
                    vcvtdq2ps xmm0, xmm0
                    vmulss  xmm2, xmm0, xmm3
                    vmovd   xmm1, eax
                  }
                  _EAX = *(v92 - 2);
                  __asm
                  {
                    vcvtdq2ps xmm1, xmm1
                    vmulss  xmm0, xmm1, xmm4
                    vaddss  xmm2, xmm2, xmm0
                    vcvttss2si r10d, xmm2
                  }
                  BYTE1(v169) = _ER10;
                  __asm { vmovd   xmm0, eax }
                  _EAX = (unsigned __int8)_ER11;
                  __asm
                  {
                    vcvtdq2ps xmm0, xmm0
                    vmulss  xmm2, xmm0, xmm3
                    vmovd   xmm1, eax
                    vcvtdq2ps xmm1, xmm1
                    vmulss  xmm0, xmm1, xmm4
                    vaddss  xmm2, xmm2, xmm0
                    vcvttss2si r11d, xmm2
                  }
                  BYTE2(v169) = _ER11;
                  --v97;
                }
                while ( v97 );
                v84 = v169;
                v154 = v169;
              }
              m_probeFilter = this->m_probeFilter;
              if ( m_probeFilter )
              {
                v132 = HIBYTE(v154);
                if ( m_probeFilter != this->m_displayedSamples.m_base[v39].m_profile )
                  v132 = 20;
                HIBYTE(v154) = v132;
                v84 = v154;
              }
              v22 = timelineParams;
              _ER9 = width;
              _ER11 = headerWidth;
              if ( this->m_rectsToDrawWritePtr - this->m_rectsToDrawReadPtr < 0x3A980 )
              {
                __asm
                {
                  vxorps  xmm0, xmm0, xmm0
                  vcvtsi2ss xmm0, xmm0, r14d
                }
                _RAX = (char *)this->m_rectsToDrawBuffer.data + 16 * (this->m_rectsToDrawWritePtr % 0x3A980);
                __asm
                {
                  vmovss  dword ptr [rax], xmm10
                  vmovss  dword ptr [rax+4], xmm0
                  vmovss  dword ptr [rax+8], xmm6
                }
                *((_DWORD *)_RAX + 3) = v84;
                ++this->m_rectsToDrawWritePtr;
              }
            }
            _EDX = width - headerWidth;
          }
        }
      }
      ++v26;
      ++v39;
      --v40;
    }
    while ( v40 );
    v32 = this->m_rectsToDrawWritePtr;
    m_rectsToDrawWritePtr = v155;
    v28 = v156;
    _R12 = gfxContext;
    __asm
    {
      vmovaps xmm14, [rsp+120h+var_C8+8]
      vmovaps xmm13, [rsp+120h+var_B8+8]
      vmovaps xmm12, [rsp+120h+var_A8+8]
      vmovaps xmm11, [rsp+120h+var_98+8]
      vmovaps xmm10, [rsp+120h+var_88+8]
      vmovaps xmm9, [rsp+120h+var_78+8]
      vmovaps xmm8, [rsp+120h+var_68+8]
      vmovaps xmm7, [rsp+120h+var_58+8]
      vmovaps xmm6, [rsp+120h+var_48+8]
    }
  }
  __asm { vmovups xmm0, xmmword ptr [r12] }
  v146 = v32 / 0x3A980;
  v147 = m_rectsToDrawWritePtr / 0x3A980;
  __asm { vmovups xmmword ptr [rsp+120h+instructionsRetired+8], xmm0 }
  v148 = v32 % 0x3A980;
  v149 = m_rectsToDrawWritePtr % 0x3A980;
  v77 = v147 == v146;
  v150 = this;
  if ( !v77 )
  {
    CPUTimlineProfilerView::FlushProfilerBars(this, &instructionsRetired_8, v149, 0x3A980u);
    __asm
    {
      vmovups xmm0, xmmword ptr [r12]
      vmovups xmmword ptr [rsp+120h+instructionsRetired+8], xmm0
    }
    v149 = 0;
    v150 = this;
  }
  CPUTimlineProfilerView::FlushProfilerBars(v150, &instructionsRetired_8, v149, v148);
  Sys_ProfEndNamedEvent();
  return v28;
}

/*
==============
CPUTimlineProfilerView::DrawThreadTimelineName
==============
*/
__int64 CPUTimlineProfilerView::DrawThreadTimelineName(CPUTimlineProfilerView *this, GfxCmdBufContext *gfxContext, const CPUTimlineProfilerView::TimelineDisplayParams *timelineParams, int threadToDraw)
{
  GfxColor m_textColor; 
  GfxFont *m_font; 
  __int64 v11; 
  int v12; 
  unsigned int v13; 
  const char *ThreadProfilerName; 
  GfxFont *v25; 
  __int64 result; 
  float v32; 
  float v33; 
  GfxCmdBufContext v34; 

  m_textColor = this->m_textColor;
  _R15 = gfxContext;
  m_font = this->m_font;
  v11 = threadToDraw;
  v12 = 5 * this->m_numLevelsToDisplay + 15;
  __asm
  {
    vmovaps [rsp+78h+var_28], xmm6
    vmovaps [rsp+78h+var_38], xmm7
  }
  v13 = 2 * v12;
  ThreadProfilerName = GetThreadProfilerName(threadToDraw);
  __asm
  {
    vmovups xmm0, xmmword ptr [r15]
    vmovups [rsp+78h+var_48], xmm0
    vxorps  xmm1, xmm1, xmm1
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, [rsp+78h+arg_28]
    vcvtsi2ss xmm1, xmm1, eax
    vaddss  xmm6, xmm1, xmm0
    vxorps  xmm7, xmm7, xmm7
    vcvtsi2ss xmm7, xmm7, [rsp+78h+arg_20]
    vmovaps xmm3, xmm7
    vmovss  [rsp+78h+var_58], xmm6
  }
  RB_DrawText(&v34, ThreadProfilerName, m_font, *(float *)&_XMM3, v32, m_textColor);
  if ( this->m_threadAllocatorOverflow[v11] )
  {
    __asm { vmovups xmm0, xmmword ptr [r15] }
    v25 = this->m_font;
    __asm
    {
      vmovups [rsp+78h+var_48], xmm0
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, ecx
      vaddss  xmm3, xmm0, xmm7
      vmovss  [rsp+78h+var_58], xmm6
    }
    RB_DrawText(&v34, "Thread sample allocator ran out of space - make sure you're popping samples properly and/or bump the limit in cpu_timeline_prof.cpp", v25, *(float *)&_XMM3, v33, this->m_errorTextColor);
  }
  __asm { vmovaps xmm6, [rsp+78h+var_28] }
  result = v13;
  __asm { vmovaps xmm7, [rsp+78h+var_38] }
  return result;
}

/*
==============
CPUTimlineProfilerView::DrawTimeScale
==============
*/
void CPUTimlineProfilerView::DrawTimeScale(CPUTimlineProfilerView *this, GfxCmdBufContext *gfxContext, const CPUTimlineProfilerView::TimelineDisplayParams *timelineParams, int xPos, int yPos, int width, int height, int headerWidth)
{
  bool v31; 
  char v32; 
  char v36; 
  unsigned __int64 v38; 
  __int64 v49; 
  __int64 v59; 
  __int64 v61; 
  unsigned __int64 m_displayRangeStartUnshifted; 
  unsigned __int64 v63; 
  __int64 v64; 
  GfxFont *m_font; 
  __int64 v110; 
  __int64 v112; 
  unsigned __int64 v113; 
  GfxFont *v131; 
  __int64 v133; 
  __int64 v135; 
  unsigned __int64 v136; 
  GfxFont *v154; 
  float v164; 
  float v165; 
  float v166; 
  float v167; 
  float v168; 
  float v169; 
  float v170; 
  GfxColor m_textColor; 
  float v172; 
  GfxColor v173; 
  float v174; 
  GfxColor v175; 
  float v176; 
  float v177; 
  float v178; 
  float v179; 
  float v180; 
  float v181; 
  float v182; 
  float v183; 
  float v184; 
  float v185; 
  float v186; 
  float v187; 
  unsigned int v188; 
  GfxCmdBufContext v190; 
  char dest[128]; 
  char v202; 

  __asm
  {
    vmovaps [rsp+1F8h+var_88], xmm9
    vmovaps [rsp+1F8h+var_98], xmm10
    vmovaps [rsp+1F8h+var_B8], xmm12
    vmovaps [rsp+1F8h+var_C8], xmm13
    vmovss  xmm1, cs:__real@437f8000
    vmovss  xmm13, cs:__real@40a00000
  }
  _R15 = this;
  __asm
  {
    vxorps  xmm3, xmm3, xmm3
    vroundss xmm2, xmm3, xmm1, 1
    vmovss  xmm1, cs:__real@43000000
    vcvttss2si ecx, xmm2
    vroundss xmm2, xmm3, xmm1, 1
    vmovss  xmm3, cs:__real@41700000
    vmovss  xmm1, cs:__real@38d1b717
    vmovaps [rsp+1F8h+var_A8], xmm11
  }
  _R12 = gfxContext;
  if ( _ECX > 255 )
    _ECX = 255;
  v31 = _ECX < 0;
  v32 = _ECX;
  __asm
  {
    vcvttss2si ecx, xmm2
    vmovss  xmm2, dword ptr [r15+0A0h]
    vmulss  xmm0, xmm2, cs:__real@461c4000
  }
  if ( v31 )
    v32 = 0;
  LOBYTE(v188) = v32;
  if ( _ECX > 255 )
    _ECX = 255;
  BYTE1(v188) = v32;
  BYTE2(v188) = v32;
  v36 = _ECX;
  if ( _ECX < 0 )
    v36 = 0;
  __asm { vcomiss xmm0, xmm3 }
  HIBYTE(v188) = v36;
  if ( _ECX )
  {
    while ( 1 )
    {
      __asm
      {
        vmulss  xmm1, xmm1, xmm13
        vdivss  xmm0, xmm2, xmm1
        vcomiss xmm0, xmm3
      }
    }
  }
  v38 = 0i64;
  __asm
  {
    vmovsd  xmm5, cs:?msecPerRawTimerTick@@3NA; double msecPerRawTimerTick
    vmovsd  xmm11, cs:__real@43e0000000000000
    vcvtss2sd xmm0, xmm1, xmm1
    vdivsd  xmm3, xmm0, xmm5
    vcomisd xmm3, xmm11
  }
  if ( width >= (unsigned int)headerWidth )
  {
    __asm
    {
      vsubsd  xmm3, xmm3, xmm11
      vcomisd xmm3, xmm11
    }
    if ( width < (unsigned int)headerWidth )
      v38 = 0x8000000000000000ui64;
  }
  __asm
  {
    vmovss  xmm4, dword ptr [r15+0A4h]
    vmovss  xmm10, cs:__real@3f800000
    vaddss  xmm0, xmm4, xmm2
    vcvttsd2si r13, xmm3
    vdivss  xmm3, xmm10, xmm1
    vmulss  xmm1, xmm0, xmm3
  }
  v49 = v38 + _R13;
  __asm
  {
    vmovaps [rsp+1F8h+var_58], xmm6
    vxorps  xmm2, xmm2, xmm2
    vroundss xmm2, xmm2, xmm1, 2
    vxorps  xmm1, xmm1, xmm1
    vmulss  xmm0, xmm3, xmm4
    vroundss xmm1, xmm1, xmm0, 1
    vcvttss2si ecx, xmm1
    vcvttss2si eax, xmm2
    vmovaps [rsp+1F8h+var_68], xmm7
    vmovaps [rsp+1F8h+var_78], xmm8
    vxorps  xmm12, xmm12, xmm12
  }
  if ( _ECX <= _EAX )
  {
    __asm
    {
      vmovaps [rsp+1F8h+var_D8], xmm14
      vmovsd  xmm14, cs:__real@43f0000000000000
    }
    v59 = v49 * _ECX;
    __asm
    {
      vmovaps [rsp+1F8h+var_E8], xmm15
      vmovsd  xmm15, qword ptr cs:__xmm@80000000000000008000000000000000
    }
    v61 = (unsigned int)(_EAX - _ECX + 1);
    do
    {
      m_displayRangeStartUnshifted = timelineParams->m_displayRangeStartUnshifted;
      v63 = m_displayRangeStartUnshifted + v59;
      if ( m_displayRangeStartUnshifted + v59 <= timelineParams->m_displayRangeEnd && v63 >= timelineParams->m_displayRangeStart )
      {
        v64 = v59;
        __asm { vxorps  xmm0, xmm0, xmm0 }
        if ( v63 <= m_displayRangeStartUnshifted )
          v64 = -v59;
        __asm { vcvtsi2sd xmm0, xmm0, rcx }
        if ( v64 < 0 )
          __asm { vaddsd  xmm0, xmm0, xmm14 }
        __asm
        {
          vmulsd  xmm8, xmm0, xmm5
          vxorps  xmm0, xmm0, xmm0
          vmovss  [rsp+1F8h+var_1B0], xmm10
          vcvtsi2ss xmm0, xmm0, eax
          vdivss  xmm2, xmm0, dword ptr [rdi+18h]
        }
        _RAX = gfxContext;
        __asm
        {
          vmovss  [rsp+1F8h+var_1B8], xmm10
          vxorps  xmm1, xmm1, xmm1
          vxorps  xmm0, xmm0, xmm0
          vxorps  xmm3, xmm3, xmm3
          vcvtsi2ss xmm3, xmm3, [rsp+1F8h+var_194]
          vcvtsi2ss xmm1, xmm1, r8d
          vmulss  xmm4, xmm2, xmm1
          vcvtsi2ss xmm0, xmm0, r9d
          vaddss  xmm1, xmm3, xmm0
          vmovups xmm0, xmmword ptr [rax]
          vmovss  [rsp+1F8h+var_1C0], xmm12
          vaddss  xmm9, xmm4, xmm1
          vmovss  [rsp+1F8h+var_1C8], xmm12
          vxorps  xmm7, xmm7, xmm7
          vcvtsi2ss xmm7, xmm7, r10d
          vxorps  xmm6, xmm6, xmm6
          vcvtsi2ss xmm6, xmm6, r11d
          vmovaps xmm2, xmm9
          vmovss  [rsp+1F8h+var_1D0], xmm7
          vmovaps xmm3, xmm6
          vmovss  [rsp+1F8h+var_1D8], xmm10
          vmovups [rsp+1F8h+var_188], xmm0
        }
        RB_DrawStretchPic(&v190, rgp.whiteMaterial, *(float *)&_XMM2, *(float *)&_XMM3, v164, v170, v176, v179, v182, v185, v188, GFX_PRIM_STATS_DEBUG);
        _R14 = m_displayRangeStartUnshifted ^ 0x8000000000000000ui64;
        __asm { vmovq   xmm1, r14 }
        _RSI = v63 ^ 0x8000000000000000ui64;
        __asm
        {
          vmovq   xmm0, rsi
          vpcmpgtq xmm1, xmm0, xmm1
          vxorpd  xmm2, xmm8, xmm15
          vblendvpd xmm1, xmm2, xmm8, xmm1
          vcvtsd2ss xmm0, xmm1, xmm1
          vcvtss2sd xmm3, xmm0, xmm0
          vmovq   r9, xmm3
        }
        Com_sprintf(dest, 0x80ui64, "%.4f ms", *(double *)&_XMM3);
        _RAX = gfxContext;
        m_font = _R15->m_font;
        __asm
        {
          vaddss  xmm1, xmm6, xmm7
          vmovaps xmm3, xmm9
          vmovups xmm0, xmmword ptr [rax]
        }
        m_textColor = _R15->m_textColor;
        __asm
        {
          vmovss  [rsp+1F8h+var_1D8], xmm1
          vmovups [rsp+1F8h+var_188], xmm0
        }
        RB_DrawText(&v190, dest, m_font, *(float *)&_XMM3, v165, m_textColor);
        __asm { vmovsd  xmm5, cs:?msecPerRawTimerTick@@3NA; double msecPerRawTimerTick }
      }
      v59 += v49;
      --v61;
    }
    while ( v61 );
    _R12 = gfxContext;
    __asm
    {
      vmovaps xmm15, [rsp+1F8h+var_E8]
      vmovaps xmm14, [rsp+1F8h+var_D8]
    }
  }
  __asm
  {
    vmovsd  xmm0, cs:__real@3ff0000000000000
    vdivsd  xmm2, xmm0, xmm5
    vmulsd  xmm1, xmm2, cs:__real@4030aaace0000000
    vcomisd xmm1, xmm11
    vsubsd  xmm1, xmm1, xmm11
    vcomisd xmm1, xmm11
    vmulsd  xmm0, xmm2, cs:__real@4040aaa9a0000000
    vcvttsd2si rbp, xmm1
    vcomisd xmm0, xmm11
    vsubsd  xmm0, xmm0, xmm11
    vcomisd xmm0, xmm11
    vmovss  xmm9, cs:__real@41a00000
    vmovaps xmm11, [rsp+1F8h+var_A8]
  }
  v110 = 12i64;
  __asm { vcvttsd2si r14, xmm0 }
  v112 = -6 * _RBP;
  do
  {
    v113 = v112 + timelineParams->m_displayRangeStartUnshifted;
    if ( v112 && v113 <= timelineParams->m_displayRangeEnd && v113 >= timelineParams->m_displayRangeStart )
    {
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, ecx
        vdivss  xmm2, xmm0, dword ptr [rdi+18h]
        vmovss  [rsp+1F8h+var_1B0], xmm10
        vmovss  [rsp+1F8h+var_1B8], xmm10
        vxorps  xmm1, xmm1, xmm1
        vxorps  xmm0, xmm0, xmm0
        vxorps  xmm3, xmm3, xmm3
        vcvtsi2ss xmm1, xmm1, r8d
        vmulss  xmm4, xmm2, xmm1
        vcvtsi2ss xmm0, xmm0, r9d
        vcvtsi2ss xmm3, xmm3, r14d
        vaddss  xmm1, xmm3, xmm0
        vmovups xmm0, xmmword ptr [r12]
        vmovss  [rsp+1F8h+var_1C0], xmm12
        vaddss  xmm8, xmm4, xmm1
        vmovss  [rsp+1F8h+var_1C8], xmm12
        vxorps  xmm7, xmm7, xmm7
        vcvtsi2ss xmm7, xmm7, r10d
        vxorps  xmm6, xmm6, xmm6
        vcvtsi2ss xmm6, xmm6, r11d
        vmovaps xmm2, xmm8
        vmovss  [rsp+1F8h+var_1D0], xmm7
        vmovaps xmm3, xmm6
        vmovss  [rsp+1F8h+var_1D8], xmm10
        vmovups [rsp+1F8h+var_188], xmm0
      }
      RB_DrawStretchPic(&v190, rgp.whiteMaterial, *(float *)&_XMM2, *(float *)&_XMM3, v166, v172, v177, v180, v183, v186, 0xFFFF0000, GFX_PRIM_STATS_DEBUG);
      __asm { vmovups xmm0, xmmword ptr [r12] }
      v131 = _R15->m_font;
      __asm
      {
        vaddss  xmm1, xmm6, xmm7
        vaddss  xmm2, xmm1, xmm9
      }
      v173 = _R15->m_textColor;
      __asm
      {
        vaddss  xmm3, xmm8, xmm13
        vmovss  [rsp+1F8h+var_1D8], xmm2
        vmovups [rsp+1F8h+var_188], xmm0
      }
      RB_DrawText(&v190, "60Hz", v131, *(float *)&_XMM3, v167, v173);
    }
    v112 += _RBP;
    --v110;
  }
  while ( v110 );
  v133 = 6i64;
  __asm { vmovss  xmm9, cs:__real@42000000 }
  v135 = -3 * _R14;
  do
  {
    v136 = v135 + timelineParams->m_displayRangeStartUnshifted;
    if ( v135 && v136 <= timelineParams->m_displayRangeEnd && v136 >= timelineParams->m_displayRangeStart )
    {
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, ecx
        vdivss  xmm2, xmm0, dword ptr [rdi+18h]
        vmovss  [rsp+1F8h+var_1B0], xmm10
        vmovss  [rsp+1F8h+var_1B8], xmm10
        vxorps  xmm1, xmm1, xmm1
        vxorps  xmm0, xmm0, xmm0
        vxorps  xmm3, xmm3, xmm3
        vcvtsi2ss xmm3, xmm3, [rsp+1F8h+var_194]
        vcvtsi2ss xmm1, xmm1, ebp
        vmulss  xmm4, xmm2, xmm1
        vcvtsi2ss xmm0, xmm0, r13d
        vaddss  xmm1, xmm3, xmm0
        vmovups xmm0, xmmword ptr [r12]
        vmovss  [rsp+1F8h+var_1C0], xmm12
        vaddss  xmm8, xmm4, xmm1
        vmovss  [rsp+1F8h+var_1C8], xmm12
        vxorps  xmm7, xmm7, xmm7
        vcvtsi2ss xmm7, xmm7, [rsp+1F8h+arg_30]
        vxorps  xmm6, xmm6, xmm6
        vcvtsi2ss xmm6, xmm6, [rsp+1F8h+arg_20]
        vmovaps xmm2, xmm8
        vmovss  [rsp+1F8h+var_1D0], xmm7
        vmovaps xmm3, xmm6
        vmovss  [rsp+1F8h+var_1D8], xmm10
        vmovups [rsp+1F8h+var_188], xmm0
      }
      RB_DrawStretchPic(&v190, rgp.whiteMaterial, *(float *)&_XMM2, *(float *)&_XMM3, v168, v174, v178, v181, v184, v187, 0xFF00FF00, GFX_PRIM_STATS_DEBUG);
      __asm { vmovups xmm0, xmmword ptr [r12] }
      v154 = _R15->m_font;
      __asm
      {
        vaddss  xmm1, xmm6, xmm7
        vaddss  xmm2, xmm1, xmm9
      }
      v175 = _R15->m_textColor;
      __asm
      {
        vaddss  xmm3, xmm8, xmm13
        vmovss  [rsp+1F8h+var_1D8], xmm2
        vmovups [rsp+1F8h+var_188], xmm0
      }
      RB_DrawText(&v190, "30Hz", v154, *(float *)&_XMM3, v169, v175);
    }
    v135 += _R14;
    --v133;
  }
  while ( v133 );
  __asm
  {
    vmovaps xmm8, [rsp+1F8h+var_78]
    vmovaps xmm7, [rsp+1F8h+var_68]
    vmovaps xmm6, [rsp+1F8h+var_58]
  }
  _R11 = &v202;
  __asm
  {
    vmovaps xmm9, xmmword ptr [r11-48h]
    vmovaps xmm10, xmmword ptr [r11-58h]
    vmovaps xmm12, xmmword ptr [r11-78h]
    vmovaps xmm13, xmmword ptr [r11-88h]
  }
}

/*
==============
CPUTimlineProfilerView::FlushProfilerBars
==============
*/
void CPUTimlineProfilerView::FlushProfilerBars(CPUTimlineProfilerView *this, GfxCmdBufContext *gfxContext, unsigned int firstBar, unsigned int lastBar)
{
  GfxCmdBufInput *p_input; 
  GfxCmdBufState *state; 
  ID3D12Resource *m_singleBarVerts; 
  GfxCmdBufState *v31; 
  __int64 viewStatsTarget; 
  unsigned int endSwapFrame; 
  GfxCmdBufContext v34; 
  GfxDrawPrimArgs args; 

  _RBX = gfxContext->source;
  __asm
  {
    vmovaps [rsp+0E8h+var_58], xmm6
    vmovaps [rsp+0E8h+var_68], xmm7
  }
  _RSI = gfxContext;
  __asm
  {
    vxorps  xmm6, xmm6, xmm6
    vcvtsi2ss xmm6, xmm6, rax
    vxorps  xmm7, xmm7, xmm7
    vcvtsi2ss xmm7, xmm7, rax
  }
  R_Set2D(_RBX);
  __asm
  {
    vmovss  xmm1, cs:__real@3f800000
    vmovss  dword ptr [rbx+750h], xmm6
    vmovss  dword ptr [rbx+754h], xmm7
    vdivss  xmm0, xmm1, xmm6
    vmovaps xmm6, [rsp+0E8h+var_58]
    vmovss  dword ptr [rbx+758h], xmm0
    vdivss  xmm1, xmm1, xmm7
    vmovaps xmm7, [rsp+0E8h+var_68]
    vmovss  dword ptr [rbx+75Ch], xmm1
  }
  ++_RBX->constVersions[5];
  *(_QWORD *)&_RBX->input.consts[150].xyz.z = 0i64;
  __asm
  {
    vxorps  xmm1, xmm1, xmm1
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm1, xmm1, r14
    vmovss  dword ptr [rbx+1064h], xmm1
    vcvtsi2ss xmm0, xmm0, r12
    vmovss  dword ptr [rbx+1060h], xmm0
  }
  ++_RBX->constVersions[150];
  p_input = &_RBX->input;
  if ( !p_input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1494, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  p_input->codeBuffers[45] = &this->m_rectsToDrawBuffer;
  state = _RSI->state;
  if ( R_BeginMaterial(state, rgp.cpuTimelineProfilerBarMaterial, TECHNIQUE_EMISSIVE) )
  {
    __asm
    {
      vmovups xmm0, xmmword ptr [rsi]
      vmovups [rsp+0E8h+var_98], xmm0
    }
    if ( R_SetupPass(&v34) )
    {
      __asm
      {
        vmovups xmm0, xmmword ptr [rsi]
        vmovups [rsp+0E8h+var_98], xmm0
      }
      R_SetupPassStableArgsInternal(&v34, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_cpu_timeline_prof_view.cpp(942)");
      __asm
      {
        vmovups xmm0, xmmword ptr [rsi]
        vmovups [rsp+0E8h+var_98], xmm0
      }
      R_SetupPassPerObjectArgsInternal(&v34, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_cpu_timeline_prof_view.cpp(943)");
      __asm
      {
        vmovups xmm0, xmmword ptr [rsi]
        vmovups [rsp+0E8h+var_98], xmm0
      }
      R_SetupPassPerPrimArgsInternal(&v34, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_cpu_timeline_prof_view.cpp(944)");
      R_SetIndicesWithType(state, this->m_singleBarIndices, DXGI_FORMAT_R16_UINT);
      m_singleBarVerts = this->m_singleBarVerts;
      v31 = state;
      if ( !state && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1810, ASSERT_TYPE_ASSERT, "(state)", (const char *)&queryFormat, "state") )
        __debugbreak();
      if ( state->streams[0].buffer != m_singleBarVerts || state->streams[0].offset || state->streams[0].stride != 16 )
      {
        state->streams[0].buffer = m_singleBarVerts;
        state->streams[0].offset = 0;
        state->streams[0].stride = 16;
        ++state->streamVersions[0];
      }
      R_FlushStreamSources(state, 4u);
      viewStatsTarget = _RSI->source->viewStatsTarget;
      endSwapFrame = _RSI->source->input.data->endSwapFrame;
      args.vertexCount = 4;
      *(_QWORD *)&args.primCount = 2i64;
      args.vertIndexBase = 0;
      args.trackFrameIndex = endSwapFrame;
      if ( ((int)viewStatsTarget < -128 || (int)viewStatsTarget > 127) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "char __cdecl truncate_cast_impl<char,enum GfxViewStatsTarget>(enum GfxViewStatsTarget)", "signed", (char)viewStatsTarget, "signed", viewStatsTarget) )
      {
        __debugbreak();
        v31 = _RSI->state;
      }
      args.viewStatsTarget = viewStatsTarget;
      *(_WORD *)&args.primStatsTarget = 8;
      R_DrawInstancedIndexedPrimitive(v31, &args, lastBar - firstBar);
    }
  }
}

/*
==============
CPUTimlineProfilerView::GPUTimeToCPUTime
==============
*/
unsigned __int64 CPUTimlineProfilerView::GPUTimeToCPUTime(CPUTimlineProfilerView *this, const CPUTimlineProfilerView::GPUFrame *gpuFrame, unsigned __int64 gpuTimeUs)
{
  unsigned __int64 result; 

  __asm
  {
    vmovsd  xmm3, cs:__real@43f0000000000000
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2sd xmm0, xmm0, rax
    vxorps  xmm1, xmm1, xmm1
    vcvtsi2sd xmm1, xmm1, r8
    vxorps  xmm2, xmm2, xmm2
    vdivsd  xmm4, xmm1, xmm0
    vcvtsi2sd xmm2, xmm2, rax
  }
  if ( (gpuFrame->m_gpuFrameStartCpuRaw & 0x8000000000000000ui64) != 0i64 )
    __asm { vaddsd  xmm2, xmm2, xmm3 }
  __asm
  {
    vmovsd  xmm0, cs:__real@3ff0000000000000
    vsubsd  xmm1, xmm0, xmm4
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2sd xmm0, xmm0, rax
    vmulsd  xmm5, xmm2, xmm1
  }
  if ( (gpuFrame->m_gpuFrameEndCpuRaw & 0x8000000000000000ui64) != 0i64 )
    __asm { vaddsd  xmm0, xmm0, xmm3 }
  __asm
  {
    vmovsd  xmm2, cs:__real@43e0000000000000
    vmulsd  xmm0, xmm0, xmm4
    vaddsd  xmm1, xmm5, xmm0
    vcomisd xmm1, xmm2
    vsubsd  xmm1, xmm1, xmm2
    vcomisd xmm1, xmm2
    vcvttsd2si rax, xmm1
  }
  return result;
}

/*
==============
CPUTimlineProfilerView::GetCPUStatsModePrefix
==============
*/
const char *CPUTimlineProfilerView::GetCPUStatsModePrefix(CPUTimelineProfiler::CPUStatsSet statsSet)
{
  const char *result; 

  if ( statsSet == CPU_STATS_DCACHE )
    return "D";
  result = "I";
  if ( statsSet != CPU_STATS_ICACHE )
    return (char *)&queryFormat.fmt + 3;
  return result;
}

/*
==============
CPUTimlineProfilerView::GetColorForSucknessScore
==============
*/

__int64 __fastcall CPUTimlineProfilerView::GetColorForSucknessScore(double score)
{
  const unsigned __int8 *v4; 
  __int64 v11; 
  __int64 result; 
  unsigned int v51; 

  __asm
  {
    vmovss  xmm5, cs:__real@3f800000
    vmovaps [rsp+28h+var_18], xmm6
  }
  v4 = &kColors[1][1];
  LOBYTE(_ER9) = 76;
  __asm { vmovaps [rsp+28h+var_28], xmm7 }
  LOBYTE(_ER10) = -1;
  _RDX = &kThresholds[1];
  LOBYTE(_ER11) = 76;
  HIBYTE(v51) = -1;
  __asm
  {
    vxorps  xmm7, xmm7, xmm7
    vmovaps xmm6, xmm0
  }
  v11 = 3i64;
  do
  {
    _EAX = *(v4 - 1);
    v4 += 3;
    __asm
    {
      vmovss  xmm0, dword ptr [rdx]
      vsubss  xmm1, xmm0, dword ptr [rdx-4]
      vsubss  xmm2, xmm6, dword ptr [rdx-4]
    }
    ++_RDX;
    __asm
    {
      vdivss  xmm2, xmm2, xmm1
      vmaxss  xmm0, xmm2, xmm7
      vminss  xmm3, xmm0, xmm5
      vmovd   xmm0, eax
    }
    _EAX = (unsigned __int8)_ER9;
    __asm
    {
      vcvtdq2ps xmm0, xmm0
      vmulss  xmm2, xmm0, xmm3
      vmovd   xmm1, eax
    }
    _EAX = (unsigned __int8)_ER10;
    __asm
    {
      vcvtdq2ps xmm1, xmm1
      vsubss  xmm4, xmm5, xmm3
      vmulss  xmm0, xmm1, xmm4
      vaddss  xmm2, xmm2, xmm0
      vcvttss2si r9d, xmm2
    }
    LOBYTE(v51) = _ER9;
    __asm { vmovd   xmm0, eax }
    _EAX = *(v4 - 3);
    __asm
    {
      vcvtdq2ps xmm0, xmm0
      vmulss  xmm2, xmm0, xmm4
      vmovd   xmm1, eax
    }
    _EAX = *(v4 - 2);
    __asm
    {
      vcvtdq2ps xmm1, xmm1
      vmulss  xmm0, xmm1, xmm3
      vaddss  xmm2, xmm2, xmm0
      vcvttss2si r10d, xmm2
    }
    BYTE1(v51) = _ER10;
    __asm { vmovd   xmm0, eax }
    _EAX = (unsigned __int8)_ER11;
    __asm
    {
      vcvtdq2ps xmm0, xmm0
      vmulss  xmm2, xmm0, xmm3
      vmovd   xmm1, eax
      vcvtdq2ps xmm1, xmm1
      vmulss  xmm0, xmm1, xmm4
      vaddss  xmm2, xmm2, xmm0
      vcvttss2si r11d, xmm2
    }
    BYTE2(v51) = _ER11;
    --v11;
  }
  while ( v11 );
  result = v51;
  __asm
  {
    vmovaps xmm6, [rsp+28h+var_18]
    vmovaps xmm7, [rsp+28h+var_28]
  }
  return result;
}

/*
==============
CPUTimlineProfilerView::Init
==============
*/
void CPUTimlineProfilerView::Init(CPUTimlineProfilerView *this)
{
  *(_QWORD *)this->m_threadAllocatorOverflow = 0i64;
  *(_QWORD *)&this->m_threadAllocatorOverflow[8] = 0i64;
  *(_QWORD *)&this->m_threadAllocatorOverflow[16] = 0i64;
  *(_DWORD *)&this->m_threadAllocatorOverflow[24] = 0;
  this->m_textColor.packed = -1;
  this->m_errorTextColor.packed = -16645377;
  this->m_gpuFrameWritePtr = 0;
}

/*
==============
CPUTimlineProfilerView::InitDvars
==============
*/
void CPUTimlineProfilerView::InitDvars(CPUTimlineProfilerView *this)
{
  cpuTimelineProfiler_Enabled = Dvar_RegisterEnum("LKQSLQTPPT", CPUTimlineProfilerView::CPU_TIMELINE_PROFILER_MODE_NAMES, 0, 4u, "Enable cpu timeline profiler");
  __asm
  {
    vmovss  xmm3, cs:__real@447a0000; max
    vmovss  xmm2, cs:__real@3f800000; min
    vmovss  xmm1, cs:__real@42053333; value
  }
  cpuTimelineProfiler_BreakpointEnabled = Dvar_RegisterEnum("NSRTTKORQO", CPUTimlineProfilerView::CPU_TIMELINE_PROFILER_BREAKPOINT_MODE_NAMES, 0, 4u, "Enable cpu timeline profiler breakpoint");
  cpuTimelineProfiler_BreakpointThreshold = Dvar_RegisterFloat("PNTNTTORS", *(float *)&_XMM1, *(float *)&_XMM2, *(float *)&_XMM3, 4u, "Cpu timeline profiler breakpoint threshold");
  cpuTimelineProfiler_ProbeFilter = Dvar_RegisterEnum("LTNSNRNMK", prof_enumNames, 0, 4u, "TERST");
}

/*
==============
CPUTimlineProfilerView::InitFont
==============
*/
void CPUTimlineProfilerView::InitFont(CPUTimlineProfilerView *this)
{
  this->m_font = R_RegisterFont("fonts/fira_mono_regular.ttf", 18);
}

/*
==============
CPUTimlineProfilerView::InitMem
==============
*/
void CPUTimlineProfilerView::InitMem(CPUTimlineProfilerView *this)
{
  unsigned __int8 *v2; 
  unsigned __int8 *v3; 
  _QWORD *v5; 
  _QWORD *v6; 
  _DWORD *v8; 
  GfxBufferCreationContext v9; 

  if ( g_cpuProfiler.m_enabled )
  {
    v2 = (unsigned __int8 *)PMem_Alloc(0x753000ui64, 0x10000ui64, MEM_POOL_MAIN, PMEM_STACK_GAME, "Cpu profiler samples");
    CPUTimelineProfiler::Samples::Init(&this->m_displayedSamples, v2, 80000);
    v3 = (unsigned __int8 *)PMem_Alloc(0x2580ui64, 0x10000ui64, MEM_POOL_MAIN, PMEM_STACK_GAME, "Cpu profiler events");
    CPUTimelineProfiler::Events::Init(&this->m_displayedEvents, v3, 200);
    if ( g_cpuProfiler.m_enabled )
      R_CreateGfxWrappedBuffer(&this->m_rectsToDrawBuffer, GfxWrappedBuffer_Structured, 16, 0x3A980u, GFX_DATA_FORMAT_R32_UINT, 4u, D3D12_RESOURCE_STATE_GENERIC_READ, NULL, NULL, "profiler bars");
  }
  v9.objectName = "bar vb";
  v9.zoneName = "cpu timeline profiler";
  __asm
  {
    vmovups xmm0, xmmword ptr [rsp+68h+var_18.zoneName]
    vmovdqa xmmword ptr [rsp+68h+var_18.zoneName], xmm0
  }
  v5 = R_AllocStaticVertexBuffer(&this->m_singleBarVerts, 64, &v9);
  v9.zoneName = "cpu timeline profiler";
  v6 = v5;
  v9.objectName = "bar ib";
  __asm
  {
    vmovups xmm0, xmmword ptr [rsp+68h+var_18.zoneName]
    vmovdqa xmmword ptr [rsp+68h+var_18.zoneName], xmm0
  }
  v8 = R_AllocStaticIndexBuffer(&this->m_singleBarIndices, 12, &v9);
  *v6 = 0i64;
  v6[1] = 0i64;
  v6[2] = 1065353216i64;
  v6[3] = 0i64;
  *((_DWORD *)v6 + 8) = 0;
  *((_DWORD *)v6 + 11) = 0;
  *((_DWORD *)v6 + 15) = 0;
  *(_QWORD *)((char *)v6 + 36) = 1065353216i64;
  *((_DWORD *)v6 + 12) = 1065353216;
  *(_QWORD *)((char *)v6 + 52) = 1065353216i64;
  *v8 = 0x20000;
  v8[1] = 65537;
  v8[2] = 196610;
}

/*
==============
CPUTimlineProfilerView::InitRenderRecources
==============
*/
void CPUTimlineProfilerView::InitRenderRecources(CPUTimlineProfilerView *this)
{
  _QWORD *v3; 
  _QWORD *v4; 
  _DWORD *v6; 
  GfxBufferCreationContext v7; 

  if ( g_cpuProfiler.m_enabled )
    R_CreateGfxWrappedBuffer(&this->m_rectsToDrawBuffer, GfxWrappedBuffer_Structured, 16, 0x3A980u, GFX_DATA_FORMAT_R32_UINT, 4u, D3D12_RESOURCE_STATE_GENERIC_READ, NULL, NULL, "profiler bars");
  v7.objectName = "bar vb";
  v7.zoneName = "cpu timeline profiler";
  __asm
  {
    vmovups xmm0, xmmword ptr [rsp+68h+var_18.zoneName]
    vmovdqa xmmword ptr [rsp+68h+var_18.zoneName], xmm0
  }
  v3 = R_AllocStaticVertexBuffer(&this->m_singleBarVerts, 64, &v7);
  v7.zoneName = "cpu timeline profiler";
  v4 = v3;
  v7.objectName = "bar ib";
  __asm
  {
    vmovups xmm0, xmmword ptr [rsp+68h+var_18.zoneName]
    vmovdqa xmmword ptr [rsp+68h+var_18.zoneName], xmm0
  }
  v6 = R_AllocStaticIndexBuffer(&this->m_singleBarIndices, 12, &v7);
  *v4 = 0i64;
  v4[1] = 0i64;
  v4[2] = 1065353216i64;
  v4[3] = 0i64;
  *((_DWORD *)v4 + 8) = 0;
  *((_DWORD *)v4 + 11) = 0;
  *((_DWORD *)v4 + 15) = 0;
  *(_QWORD *)((char *)v4 + 36) = 1065353216i64;
  *((_DWORD *)v4 + 12) = 1065353216;
  *(_QWORD *)((char *)v4 + 52) = 1065353216i64;
  *v6 = 0x20000;
  v6[1] = 65537;
  v6[2] = 196610;
}

/*
==============
CPUTimlineProfilerView::Pause
==============
*/
void CPUTimlineProfilerView::Pause(CPUTimlineProfilerView *this)
{
  this->m_pauseRequested = 1;
}

/*
==============
CPUTimlineProfilerView::ProcessGPUTimerFrame
==============
*/
void CPUTimlineProfilerView::ProcessGPUTimerFrame(CPUTimlineProfilerView *this, unsigned __int64 frameStartTimeGpuUs, unsigned __int64 frameEndTimeGpuUs, unsigned __int64 frameSyncMarkerGpuUs, unsigned __int64 frameSyncMarkerCpuRaw, CPUTimelineProfGPURange *timers, unsigned int *timerRangesStart, unsigned int *timerRangesEnd)
{
  CPUTimlineProfilerView::GPUFrame *v15; 
  unsigned __int64 v16; 
  unsigned int i; 
  int m_numProfileSamples; 
  signed int j; 
  __int64 v31; 

  if ( !this->m_paused )
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2sd xmm0, xmm0, rax
    }
    if ( (frameSyncMarkerCpuRaw & 0x8000000000000000ui64) != 0i64 )
      __asm { vaddsd  xmm0, xmm0, cs:__real@43f0000000000000 }
    __asm
    {
      vmulsd  xmm4, xmm0, cs:?usecPerRawTimerTick@@3NA; double usecPerRawTimerTick
      vmovsd  xmm2, cs:__real@43e0000000000000
      vxorps  xmm0, xmm0, xmm0
    }
    v15 = &this->m_gpuFrames[this->m_gpuFrameWritePtr % 4];
    v16 = 0i64;
    v15->m_gpuFrameStartGpuUs = frameStartTimeGpuUs;
    __asm
    {
      vcvtsi2sd xmm0, xmm0, rdx
      vaddsd  xmm1, xmm0, xmm4
    }
    v15->m_gpuFrameEndGpuUs = frameEndTimeGpuUs;
    __asm
    {
      vdivsd  xmm3, xmm1, cs:?usecPerRawTimerTick@@3NA; double usecPerRawTimerTick
      vcomisd xmm3, xmm2
    }
    if ( frameStartTimeGpuUs >= frameSyncMarkerGpuUs )
    {
      __asm
      {
        vsubsd  xmm3, xmm3, xmm2
        vcomisd xmm3, xmm2
      }
      if ( frameStartTimeGpuUs < frameSyncMarkerGpuUs )
        v16 = 0x8000000000000000ui64;
    }
    __asm
    {
      vcvttsd2si rax, xmm3
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2sd xmm0, xmm0, r8
      vaddsd  xmm1, xmm0, xmm4
    }
    v15->m_gpuFrameStartCpuRaw = v16 + _RAX;
    __asm
    {
      vdivsd  xmm3, xmm1, cs:?usecPerRawTimerTick@@3NA; double usecPerRawTimerTick
      vcomisd xmm3, xmm2
      vsubsd  xmm3, xmm3, xmm2
      vcomisd xmm3, xmm2
      vcvttsd2si rax, xmm3
    }
    v15->m_numProfileSamples = 0;
    v15->m_gpuFrameEndCpuRaw = _RAX;
    for ( i = 0; i < 0x81; ++i )
    {
      m_numProfileSamples = v15->m_numProfileSamples;
      if ( m_numProfileSamples >= 2064 )
        break;
      for ( j = 0; j < (signed int)timers->rangeCount; ++j )
      {
        v31 = m_numProfileSamples;
        v15->m_profileSamples[v31].m_timer = i;
        v15->m_profileSamples[v31].m_startUs = timerRangesStart[j + timers->firstRange];
        v15->m_profileSamples[v31].m_endUs = timerRangesEnd[j + timers->firstRange];
        m_numProfileSamples = v15->m_numProfileSamples + 1;
        v15->m_numProfileSamples = m_numProfileSamples;
        if ( m_numProfileSamples >= 2064 )
          break;
      }
      ++timers;
    }
    ++this->m_gpuFrameWritePtr;
  }
}

/*
==============
CPUTimlineProfilerView::ProfileToColor
==============
*/
__int64 CPUTimlineProfilerView::ProfileToColor(unsigned int a)
{
  unsigned int v2; 

  v2 = (668265261 * ((9 * (a ^ ((a ^ 0x3D0000) >> 16))) ^ ((9 * (a ^ ((a ^ 0x3D0000) >> 16))) >> 4))) ^ ((668265261 * ((9 * (a ^ ((a ^ 0x3D0000) >> 16))) ^ ((9 * (a ^ ((a ^ 0x3D0000) >> 16))) >> 4))) >> 15);
  HIBYTE(v2) = -1;
  return v2;
}

/*
==============
RB_DrawCPUTimelineProfile
==============
*/
void RB_DrawCPUTimelineProfile(GfxCmdBufContext *gfxContext)
{
  GfxCmdBufContext v3; 

  _RBX = gfxContext;
  Sys_ProfBeginNamedEvent(0xFFC0C0C0, "draw profiler");
  __asm
  {
    vmovups xmm0, xmmword ptr [rbx]
    vmovups xmmword ptr [rsp+38h+var_18.source], xmm0
  }
  CPUTimlineProfilerView::UpdateAndDraw(&g_cpuTimelineProfilerView, &v3);
  Sys_ProfEndNamedEvent();
}

/*
==============
RB_ProcessGPUTimerFrame
==============
*/
void RB_ProcessGPUTimerFrame(unsigned __int64 frameStartTimeGpuUs, unsigned __int64 frameEndTimeGpuUs, unsigned __int64 frameSyncMarkerGpuUs, unsigned __int64 frameSyncMarkerCpuRaw)
{
  ;
}

/*
==============
R_IsCPUTimelineProfilerViewEnabled
==============
*/
_BOOL8 R_IsCPUTimelineProfilerViewEnabled()
{
  return g_cpuTimelineProfilerView.m_enabled;
}

/*
==============
CPUTimlineProfilerView::SetBreakpointThreshold
==============
*/

void __fastcall CPUTimlineProfilerView::SetBreakpointThreshold(CPUTimlineProfilerView *this, double threshold)
{
  __asm { vmovss  dword ptr [rcx+24h], xmm1 }
}

/*
==============
CPUTimlineProfilerView::Shutdown
==============
*/
void CPUTimlineProfilerView::Shutdown(CPUTimlineProfilerView *this)
{
  ;
}

/*
==============
CPUTimlineProfilerView::Toggle
==============
*/
void CPUTimlineProfilerView::Toggle(CPUTimlineProfilerView *this)
{
  this->m_enabled = !this->m_enabled;
}

/*
==============
CPUTimlineProfilerView::Unpause
==============
*/
void CPUTimlineProfilerView::Unpause(CPUTimlineProfilerView *this)
{
  this->m_paused = 0;
  this->m_prevDisplayRangeStart = 0xFFFFFFFFi64;
  this->m_breakpointHit = 0;
}

/*
==============
CPUTimlineProfilerView::Update
==============
*/
unsigned __int64 CPUTimlineProfilerView::Update(CPUTimlineProfilerView *this, int numFramesToConsume)
{
  unsigned __int64 m_pausedTime; 
  int v6; 
  int v7; 
  int m_xPos; 
  int v33; 
  int v34; 
  bool *p_breakpointTriggered; 
  __int64 v36; 
  CPUTimlineProfilerView::BreakpointMode m_breakpointMode; 
  int v38; 
  char *v42; 
  __int64 v43; 
  unsigned __int64 v44; 
  __int64 v48; 
  unsigned __int64 v49; 
  unsigned __int64 v50; 
  int x; 
  int y[3]; 
  unsigned __int64 frameStart[32]; 
  bool breakpointTriggered; 
  char v56; 

  _RBP = this;
  Sys_ProfBeginNamedEvent(0xFFF5F5DC, "profiler update");
  m_pausedTime = 0i64;
  v6 = 1;
  v7 = 2;
  if ( DevMouse::WasButtonReleased(&g_devMouse, MOUSEBUTTON_MIDDLE) )
  {
    if ( _RBP->m_paused )
    {
      _RBP->m_paused = 0;
      _RBP->m_breakpointHit = 0;
    }
    else
    {
      _RBP->m_pauseRequested = 1;
    }
  }
  else if ( DevMouse::WasButtonReleased(&g_devMouse, MOUSEBUTTON_RIGHT) )
  {
    *(_QWORD *)&_RBP->m_displayRange = 1101004800i64;
  }
  else if ( DevMouse::IsButtonDown(&g_devMouse, MOUSEBUTTON_LEFT) )
  {
    DevMouse::GetMousePosDeltaX(&g_devMouse);
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
      vmulss  xmm1, xmm0, dword ptr [rbp+0A0h]
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, dword ptr [rbp+18h]
      vdivss  xmm2, xmm1, xmm0
      vmovss  xmm1, dword ptr [rbp+0A4h]
      vsubss  xmm2, xmm1, xmm2
      vmovss  dword ptr [rbp+0A4h], xmm2
    }
  }
  if ( DevMouse::GetWheelDelta(&g_devMouse) )
  {
    x = 0;
    y[0] = 0;
    DevMouse::GetMousePos(&g_devMouse, &x, y);
    m_xPos = _RBP->m_xPos;
    if ( x >= m_xPos && x <= m_xPos + _RBP->m_barsAreaWidth + _RBP->m_headerWidth )
    {
      __asm
      {
        vmovd   xmm0, ebx
        vcvtdq2ps xmm0, xmm0
        vmulss  xmm1, xmm0, cs:__real@3d4ccccd
        vaddss  xmm2, xmm1, cs:__real@3f800000
        vmulss  xmm0, xmm2, dword ptr [rbp+0A0h]; val
        vmovss  xmm2, cs:__real@42700000; max
        vmovss  xmm1, cs:__real@3b449ba6; min
      }
      *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      __asm { vmovss  xmm1, dword ptr [rbp+0A0h] }
      _EAX = x - _RBP->m_xPos;
      __asm
      {
        vsubss  xmm2, xmm1, xmm0
        vmovd   xmm3, eax
        vcvtdq2ps xmm3, xmm3
        vmulss  xmm4, xmm3, xmm2
        vmovd   xmm3, dword ptr [rbp+18h]
        vcvtdq2ps xmm3, xmm3
        vdivss  xmm1, xmm4, xmm3
        vaddss  xmm2, xmm1, dword ptr [rbp+0A4h]
        vmovss  dword ptr [rbp+0A4h], xmm2
        vmovss  dword ptr [rbp+0A0h], xmm0
      }
    }
  }
  if ( _RBP->m_paused )
  {
    m_pausedTime = _RBP->m_pausedTime;
    goto LABEL_39;
  }
  if ( numFramesToConsume <= 0 )
  {
    m_pausedTime = _RBP->m_prevDisplayRangeStart;
    goto LABEL_39;
  }
  v33 = numFramesToConsume + 2;
  if ( v33 > 16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_cpu_timeline_prof_view.cpp", 601, ASSERT_TYPE_ASSERT, "(numFramesToProcess <= MAX_PROCESSED_FRAMES)", (const char *)&queryFormat, "numFramesToProcess <= MAX_PROCESSED_FRAMES") )
    __debugbreak();
  v34 = 0;
  if ( v33 > 0 )
  {
    p_breakpointTriggered = &breakpointTriggered;
    v36 = 0i64;
    do
    {
      CPUTimelineProfiler::GetBufferedFrameRange(&g_cpuProfiler, v34++, &frameStart[v36], &frameStart[v36 + 16], p_breakpointTriggered);
      ++v36;
      ++p_breakpointTriggered;
    }
    while ( v34 < v33 );
  }
  m_breakpointMode = _RBP->m_breakpointMode;
  v38 = v33 - 3;
  if ( m_breakpointMode )
  {
    if ( _RBP->m_breakpointHit || v33 <= 2 )
      goto LABEL_39;
    __asm
    {
      vmovss  xmm3, dword ptr [rbp+24h]
      vmovsd  xmm4, cs:?msecPerRawTimerTick@@3NA; double msecPerRawTimerTick
      vmovsd  xmm2, cs:__real@43f0000000000000
    }
    v42 = &v56;
    v43 = 0i64;
    while ( 1 )
    {
      v44 = frameStart[v43 + 17];
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2sd xmm0, xmm0, rax
      }
      if ( (__int64)(v44 - frameStart[v43 + 1]) < 0 )
        __asm { vaddsd  xmm0, xmm0, xmm2 }
      __asm
      {
        vmulsd  xmm0, xmm0, xmm4
        vcvtsd2ss xmm1, xmm0, xmm0
        vcomiss xmm1, xmm3
      }
      if ( v44 >= frameStart[v43 + 1] && m_breakpointMode == BREAKPOINT_MODE_TIME_THRESHOLD )
        break;
      if ( *v42 && m_breakpointMode == BREAKPOINT_MODE_CODE_TRIGGERED )
        break;
      ++v6;
      ++v7;
      ++v43;
      ++v42;
      if ( v7 >= v33 )
        goto LABEL_39;
    }
    v38 = v6 - 1;
    _RBP->m_pauseRequested = 1;
    _RBP->m_breakpointMode = BREAKPOINT_MODE_DISABLED;
    _RBP->m_breakpointHit = 1;
  }
  v48 = v38;
  v49 = frameStart[v38 + 18];
  v50 = frameStart[v38];
  Sys_ProfBeginNamedEvent(0xFFFF1493, "profiler copy samples");
  _RBP->m_numDisplayedSamples = CPUTimelineProfiler::GetSamplesForTimeRange(&g_cpuProfiler, v50, v49, &_RBP->m_displayedSamples, 80000, _RBP->m_threadAllocatorOverflow);
  _RBP->m_numDisplayedEvents = CPUTimelineProfiler::GetEventsForTimeRange(&g_cpuProfiler, v50, v49, &_RBP->m_displayedEvents, 200, NULL);
  Sys_ProfEndNamedEvent();
  m_pausedTime = frameStart[v48 + 1];
  if ( _RBP->m_pauseRequested )
  {
    *(_WORD *)&_RBP->m_paused = 1;
    _RBP->m_pausedTime = m_pausedTime;
  }
  _RBP->m_prevDisplayRangeStart = m_pausedTime;
LABEL_39:
  Sys_ProfEndNamedEvent();
  return m_pausedTime;
}

/*
==============
CPUTimlineProfilerView::UpdateAndDraw
==============
*/
void CPUTimlineProfilerView::UpdateAndDraw(CPUTimlineProfilerView *this, GfxCmdBufContext *gfxContext)
{
  const dvar_t *v2; 
  int integer; 
  int v6; 
  CPUTimelineProfiler::CPUStatsSet v7; 
  int v8; 
  unsigned __int64 v9; 
  unsigned int m_rectsToDrawFramesWritePtr; 
  unsigned int m_rectsToDrawFramesReadPtr; 
  GfxCmdBufContext v14; 

  v2 = cpuTimelineProfiler_Enabled;
  _RSI = gfxContext;
  _RBX = this;
  if ( cpuTimelineProfiler_Enabled && cpuTimelineProfiler_BreakpointEnabled && cpuTimelineProfiler_ProbeFilter && cpuTimelineProfiler_BreakpointThreshold )
  {
    this->m_enabled = cpuTimelineProfiler_Enabled->current.integer != 0;
    integer = cpuTimelineProfiler_BreakpointEnabled->current.integer;
    this->m_breakpointMode = integer;
    LODWORD(this->m_breakpointThreshold) = cpuTimelineProfiler_BreakpointThreshold->current.integer;
    this->m_probeFilter = cpuTimelineProfiler_ProbeFilter->current.integer;
    if ( integer && !this->m_breakpointHit )
      this->m_paused = 0;
    v2 = cpuTimelineProfiler_Enabled;
  }
  if ( !this->m_paused )
  {
    v6 = v2->current.integer;
    if ( v6 == 2 )
    {
      v7 = CPU_STATS_DCACHE;
    }
    else
    {
      v7 = CPU_STATS_DISABLED;
      if ( v6 == 3 )
        v7 = CPU_STATS_ICACHE;
    }
    if ( v7 != _RBX->m_cpuStatsSet )
    {
      CPUTimelineProfiler::DisableCPUStatsCounters(&g_cpuProfiler);
      CPUTimelineProfiler::EnableCPUStatsCounters(&g_cpuProfiler, v7);
      _RBX->m_cpuStatsSet = v7;
    }
  }
  v8 = CPUTimelineProfiler::GetNumBufferedFrames(&g_cpuProfiler) - 2;
  if ( _RBX->m_enabled )
  {
    if ( g_cpuProfiler.m_enabled )
    {
      v9 = CPUTimlineProfilerView::Update(_RBX, v8);
      if ( (_RBX->m_breakpointMode == BREAKPOINT_MODE_DISABLED || _RBX->m_breakpointHit) && v9 != -1i64 )
      {
        __asm
        {
          vmovups xmm0, xmmword ptr [rsi]
          vmovss  xmm3, dword ptr [rbx+0A0h]
          vmovups xmmword ptr [rsp+38h+var_18.source], xmm0
        }
        CPUTimlineProfilerView::Draw(_RBX, &v14, v9, *(float *)&_XMM3);
      }
    }
    else
    {
      Com_PrintWarning(12, "CPU Profiler disabled.  Please give at least 256MB of Additional Title Memory Mode to allow support.\n");
    }
  }
  for ( ; v8 > 0; --v8 )
    CPUTimelineProfiler::ConsumeFrame(&g_cpuProfiler);
  m_rectsToDrawFramesWritePtr = _RBX->m_rectsToDrawFramesWritePtr;
  m_rectsToDrawFramesReadPtr = _RBX->m_rectsToDrawFramesReadPtr;
  if ( m_rectsToDrawFramesWritePtr - m_rectsToDrawFramesReadPtr >= 3 )
  {
    _RBX->m_rectsToDrawReadPtr = _RBX->m_rectsToDrawFrames[m_rectsToDrawFramesReadPtr % 3];
    _RBX->m_rectsToDrawFramesReadPtr = m_rectsToDrawFramesReadPtr + 1;
  }
  _RBX->m_rectsToDrawFrames[m_rectsToDrawFramesWritePtr % 3] = _RBX->m_rectsToDrawWritePtr;
  ++_RBX->m_rectsToDrawFramesWritePtr;
}

/*
==============
CPUTimlineProfilerView::UpdateCPUStatsSet
==============
*/
void CPUTimlineProfilerView::UpdateCPUStatsSet(CPUTimlineProfilerView *this)
{
  int integer; 
  CPUTimelineProfiler::CPUStatsSet v3; 

  if ( !this->m_paused )
  {
    integer = cpuTimelineProfiler_Enabled->current.integer;
    if ( integer == 2 )
    {
      v3 = CPU_STATS_DCACHE;
    }
    else
    {
      v3 = CPU_STATS_DISABLED;
      if ( integer == 3 )
        v3 = CPU_STATS_ICACHE;
    }
    if ( v3 != this->m_cpuStatsSet )
    {
      CPUTimelineProfiler::DisableCPUStatsCounters(&g_cpuProfiler);
      CPUTimelineProfiler::EnableCPUStatsCounters(&g_cpuProfiler, v3);
      this->m_cpuStatsSet = v3;
    }
  }
}

/*
==============
CPUTimlineProfilerView::UpdateMouse
==============
*/
void CPUTimlineProfilerView::UpdateMouse(CPUTimlineProfilerView *this)
{
  int m_xPos; 
  int x; 
  int y; 

  _RBX = this;
  if ( DevMouse::WasButtonReleased(&g_devMouse, MOUSEBUTTON_MIDDLE) )
  {
    if ( _RBX->m_paused )
    {
      _RBX->m_paused = 0;
      _RBX->m_breakpointHit = 0;
    }
    else
    {
      _RBX->m_pauseRequested = 1;
    }
  }
  else if ( DevMouse::WasButtonReleased(&g_devMouse, MOUSEBUTTON_RIGHT) )
  {
    *(_QWORD *)&_RBX->m_displayRange = 1101004800i64;
  }
  else if ( DevMouse::IsButtonDown(&g_devMouse, MOUSEBUTTON_LEFT) )
  {
    DevMouse::GetMousePosDeltaX(&g_devMouse);
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
      vmulss  xmm1, xmm0, dword ptr [rbx+0A0h]
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, dword ptr [rbx+18h]
      vdivss  xmm2, xmm1, xmm0
      vmovss  xmm1, dword ptr [rbx+0A4h]
      vsubss  xmm2, xmm1, xmm2
      vmovss  dword ptr [rbx+0A4h], xmm2
    }
  }
  if ( DevMouse::GetWheelDelta(&g_devMouse) )
  {
    x = 0;
    y = 0;
    DevMouse::GetMousePos(&g_devMouse, &x, &y);
    m_xPos = _RBX->m_xPos;
    if ( x >= m_xPos && x <= m_xPos + _RBX->m_barsAreaWidth + _RBX->m_headerWidth )
    {
      __asm
      {
        vmovd   xmm0, edi
        vcvtdq2ps xmm0, xmm0
        vmulss  xmm1, xmm0, cs:__real@3d4ccccd
        vaddss  xmm2, xmm1, cs:__real@3f800000
        vmulss  xmm0, xmm2, dword ptr [rbx+0A0h]; val
        vmovss  xmm2, cs:__real@42700000; max
        vmovss  xmm1, cs:__real@3b449ba6; min
      }
      *(double *)&_XMM0 = I_fclamp(*(float *)&_XMM0, *(float *)&_XMM1, *(float *)&_XMM2);
      __asm { vmovss  xmm1, dword ptr [rbx+0A0h] }
      _EAX = x - _RBX->m_xPos;
      __asm
      {
        vsubss  xmm2, xmm1, xmm0
        vmovd   xmm3, eax
        vcvtdq2ps xmm3, xmm3
        vmulss  xmm4, xmm3, xmm2
        vmovd   xmm3, dword ptr [rbx+18h]
        vcvtdq2ps xmm3, xmm3
        vdivss  xmm1, xmm4, xmm3
        vaddss  xmm2, xmm1, dword ptr [rbx+0A4h]
        vmovss  dword ptr [rbx+0A4h], xmm2
        vmovss  dword ptr [rbx+0A0h], xmm0
      }
    }
  }
}

/*
==============
CPUTimlineProfilerView::UpdateRectsBuffer
==============
*/
void CPUTimlineProfilerView::UpdateRectsBuffer(CPUTimlineProfilerView *this)
{
  unsigned int m_rectsToDrawFramesWritePtr; 
  unsigned int m_rectsToDrawFramesReadPtr; 

  m_rectsToDrawFramesWritePtr = this->m_rectsToDrawFramesWritePtr;
  m_rectsToDrawFramesReadPtr = this->m_rectsToDrawFramesReadPtr;
  if ( m_rectsToDrawFramesWritePtr - m_rectsToDrawFramesReadPtr >= 3 )
  {
    this->m_rectsToDrawReadPtr = this->m_rectsToDrawFrames[m_rectsToDrawFramesReadPtr % 3];
    this->m_rectsToDrawFramesReadPtr = m_rectsToDrawFramesReadPtr + 1;
  }
  this->m_rectsToDrawFrames[m_rectsToDrawFramesWritePtr % 3] = this->m_rectsToDrawWritePtr;
  ++this->m_rectsToDrawFramesWritePtr;
}


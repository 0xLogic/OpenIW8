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
  cpuTimelineProfiler_BreakpointEnabled = Dvar_RegisterEnum("NSRTTKORQO", CPUTimlineProfilerView::CPU_TIMELINE_PROFILER_BREAKPOINT_MODE_NAMES, 0, 4u, "Enable cpu timeline profiler breakpoint");
  cpuTimelineProfiler_BreakpointThreshold = Dvar_RegisterFloat("PNTNTTORS", 33.299999, 1.0, 1000.0, 4u, "Cpu timeline profiler breakpoint threshold");
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
  _QWORD *v2; 
  _QWORD *v3; 
  _DWORD *v4; 
  GfxBufferCreationContext v5; 

  if ( g_cpuProfiler.m_enabled )
  {
    v0 = (unsigned __int8 *)PMem_Alloc(0x753000ui64, 0x10000ui64, MEM_POOL_MAIN, PMEM_STACK_GAME, "Cpu profiler samples");
    CPUTimelineProfiler::Samples::Init(&g_cpuTimelineProfilerView.m_displayedSamples, v0, 80000);
    v1 = (unsigned __int8 *)PMem_Alloc(0x2580ui64, 0x10000ui64, MEM_POOL_MAIN, PMEM_STACK_GAME, "Cpu profiler events");
    CPUTimelineProfiler::Events::Init(&g_cpuTimelineProfilerView.m_displayedEvents, v1, 200);
    if ( g_cpuProfiler.m_enabled )
      R_CreateGfxWrappedBuffer(&g_cpuTimelineProfilerView.m_rectsToDrawBuffer, GfxWrappedBuffer_Structured, 16, 0x3A980u, GFX_DATA_FORMAT_R32_UINT, 4u, D3D12_RESOURCE_STATE_GENERIC_READ, NULL, NULL, "profiler bars");
  }
  v5.objectName = "bar vb";
  v5.zoneName = "cpu timeline profiler";
  v2 = R_AllocStaticVertexBuffer(&g_cpuTimelineProfilerView.m_singleBarVerts, 64, &v5);
  v5.zoneName = "cpu timeline profiler";
  v3 = v2;
  v5.objectName = "bar ib";
  v4 = R_AllocStaticIndexBuffer(&g_cpuTimelineProfilerView.m_singleBarIndices, 12, &v5);
  *v3 = 0i64;
  v3[1] = 0i64;
  v3[2] = 1065353216i64;
  v3[3] = 0i64;
  *((_DWORD *)v3 + 8) = 0;
  *((_DWORD *)v3 + 11) = 0;
  *((_DWORD *)v3 + 15) = 0;
  *(_QWORD *)((char *)v3 + 36) = 1065353216i64;
  *((_DWORD *)v3 + 12) = 1065353216;
  *(_QWORD *)((char *)v3 + 52) = 1065353216i64;
  *v4 = 0x20000;
  v4[1] = 65537;
  v4[2] = 196610;
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
  float v2; 
  float v3; 
  float v4; 
  float v5; 
  unsigned __int64 instructionsRetired[3]; 
  unsigned __int64 l2CacheMisses; 
  unsigned __int64 cacheAccesses; 

  CPUTimelineProfiler::GetStatsFromCounter(stats, statsSet, &cacheAccesses, &l2CacheMisses, instructionsRetired);
  v2 = (float)(__int64)l2CacheMisses;
  if ( (l2CacheMisses & 0x8000000000000000ui64) != 0i64 )
  {
    v3 = (float)(__int64)l2CacheMisses;
    v2 = v3 + 1.8446744e19;
  }
  v4 = (float)(__int64)cacheAccesses;
  if ( (cacheAccesses & 0x8000000000000000ui64) != 0i64 )
  {
    v5 = (float)(__int64)cacheAccesses;
    v4 = v5 + 1.8446744e19;
  }
  return (float)(v2 / v4) * 100.0;
}

/*
==============
CPUTimlineProfilerView::ComputeSucknessScore
==============
*/
float CPUTimlineProfilerView::ComputeSucknessScore(unsigned __int64 cacheAccesses, unsigned __int64 l2CacheMisses, unsigned __int64 instructionsRetired)
{
  float v3; 
  float v4; 
  float v5; 
  float v6; 

  v3 = (float)(__int64)l2CacheMisses;
  if ( (l2CacheMisses & 0x8000000000000000ui64) != 0i64 )
  {
    v4 = (float)(__int64)l2CacheMisses;
    v3 = v4 + 1.8446744e19;
  }
  v5 = (float)(__int64)cacheAccesses;
  if ( (cacheAccesses & 0x8000000000000000ui64) != 0i64 )
  {
    v6 = (float)(__int64)cacheAccesses;
    v5 = v6 + 1.8446744e19;
  }
  return (float)(v3 / v5) * 100.0;
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
  unsigned __int64 v11; 
  __int128 v12; 
  int v13; 
  int v15; 
  int v16; 
  int v19; 
  bool v21; 
  char v22; 
  int v23; 
  char v24; 
  int m_xPos; 
  int v26; 
  int v27; 
  int v28; 
  GfxColor m_textColor; 
  GfxFont *m_font; 
  const char *ThreadProfilerName; 
  float v32; 
  GfxFont *v33; 
  bool v34; 
  int v35; 
  int v36; 
  int v37; 
  GfxCmdBufContext v38; 
  int v39; 
  int v40; 
  int v41; 
  int v42; 
  int m_yPos; 
  int v44; 
  int v45; 
  int v46; 
  GfxColor m_errorTextColor; 
  int v48; 
  int m_headerWidth; 
  int v50; 
  int v51; 
  int v52; 
  unsigned int v53; 
  int v54; 
  int v55; 
  int y; 
  int x; 
  GfxCmdBufContext v58; 
  int v59; 
  int v60; 
  int v61; 
  CPUTimlineProfilerView::TimelineDisplayParams v62; 

  if ( !this->m_font )
    this->m_font = R_RegisterFont("fonts/fira_mono_regular.ttf", 18);
  v58 = *gfxContext;
  RB_EndSurfaceIfNeeded(&v58);
  _XMM3 = COERCE_UNSIGNED_INT64(this->m_displayRange * (1.0 / msecPerRawTimerTick));
  __asm { vcvtsd2ss xmm0, xmm3, xmm3 }
  _XMM2 = COERCE_UNSIGNED_INT64(this->m_displayShift * (1.0 / msecPerRawTimerTick));
  __asm { vcvttsd2si rdx, xmm2 }
  v62.m_displayRangeTicks = *(float *)&_XMM0;
  v11 = 0i64;
  v62.m_displayRangeStartUnshifted = displayRangeStart;
  v62.m_displayShiftTicks = _RDX;
  v62.m_displayRangeStart = _RDX + displayRangeStart;
  if ( *(double *)&_XMM3 >= 9.223372036854776e18 )
  {
    *((_QWORD *)&v12 + 1) = *((_QWORD *)&_XMM3 + 1);
    *(double *)&v12 = *(double *)&_XMM3 - 9.223372036854776e18;
    _XMM3 = v12;
    if ( *(double *)&v12 < 9.223372036854776e18 )
      v11 = 0x8000000000000000ui64;
  }
  v13 = this->m_headerWidth + this->m_barsAreaWidth;
  __asm { vcvttsd2si rax, xmm3 }
  v60 = v13;
  v62.m_displayRangeEnd = displayRangeStart + _RDX + v11 + _RAX;
  v15 = 0;
  LODWORD(_RAX) = this->m_numLevelsToDisplay + 3;
  x = 0;
  LODWORD(_RAX) = this->m_numThreadsToDisplay * _RAX;
  y = 0;
  v16 = 2 * (5 * _RAX + 20);
  v61 = v16;
  DevMouse::GetMousePos(&g_devMouse, &x, &y);
  _XMM3 = 0i64;
  __asm { vroundss xmm2, xmm3, xmm1, 1 }
  v19 = (int)*(float *)&_XMM2;
  __asm { vroundss xmm2, xmm3, xmm1, 1 }
  if ( v19 > 255 )
    v19 = 255;
  v21 = v19 < 0;
  v22 = v19;
  v23 = (int)*(float *)&_XMM2;
  if ( v21 )
    v22 = 0;
  LOBYTE(v53) = v22;
  if ( v23 > 255 )
    v23 = 255;
  BYTE1(v53) = v22;
  BYTE2(v53) = v22;
  v24 = v23;
  if ( v23 < 0 )
    v24 = 0;
  HIBYTE(v53) = v24;
  v58 = *gfxContext;
  RB_DrawStretchPic(&v58, rgp.whiteMaterial, (float)this->m_xPos, (float)this->m_yPos, (float)v13, (float)v16, 0.0, 0.0, 1.0, 1.0, v53, GFX_PRIM_STATS_DEBUG);
  m_xPos = this->m_xPos;
  m_headerWidth = this->m_headerWidth;
  m_yPos = this->m_yPos;
  v58 = *gfxContext;
  CPUTimlineProfilerView::DrawTimeScale(this, &v58, &v62, m_xPos, m_yPos, v13, v16, m_headerWidth);
  Sys_ProfBeginNamedEvent(0xFFB22222, "draw profiler bars");
  v26 = 0;
  v54 = this->m_yPos;
  if ( this->m_numThreadsToDisplay > 0 )
  {
    do
    {
      v27 = this->m_xPos;
      v28 = v26 + this->m_firstThreadToDisplay;
      m_textColor = this->m_textColor;
      m_font = this->m_font;
      v59 = this->m_headerWidth;
      v55 = 2 * (5 * this->m_numLevelsToDisplay + 15);
      ThreadProfilerName = GetThreadProfilerName(v28);
      v58 = *gfxContext;
      v32 = (float)(v55 / 2) + (float)v54;
      RB_DrawText(&v58, ThreadProfilerName, m_font, (float)v27, v32, m_textColor);
      if ( this->m_threadAllocatorOverflow[v28] )
      {
        v33 = this->m_font;
        m_errorTextColor = this->m_errorTextColor;
        v58 = *gfxContext;
        RB_DrawText(&v58, "Thread sample allocator ran out of space - make sure you're popping samples properly and/or bump the limit in cpu_timeline_prof.cpp", v33, (float)(2 * v59) + (float)v27, v32, m_errorTextColor);
      }
      ++v26;
      v54 += v55;
    }
    while ( v26 < this->m_numThreadsToDisplay );
    v13 = v60;
    v15 = 0;
  }
  v58 = *gfxContext;
  RB_EndTessSurfaceInternal(&v58, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_cpu_timeline_prof_view.cpp(1345)");
  v34 = this->m_numThreadsToDisplay <= 0;
  v35 = -1;
  v36 = this->m_yPos;
  v55 = -1;
  if ( !v34 )
  {
    do
    {
      v37 = v15 + this->m_firstThreadToDisplay;
      v50 = this->m_headerWidth;
      v44 = this->m_xPos;
      v58 = *gfxContext;
      v36 += CPUTimlineProfilerView::DrawThreadTimeline(this, &v58, &v62, v37, v44, v36, v13, v50, x, y, &v55);
      ++v15;
    }
    while ( v15 < this->m_numThreadsToDisplay );
    v35 = v55;
  }
  v38 = *gfxContext;
  v39 = this->m_xPos;
  v48 = this->m_headerWidth;
  v55 = -1;
  v58 = v38;
  CPUTimlineProfilerView::DrawEventTimeline(this, &v58, &v62, v39, v36, v13, v48, x, y, &v55);
  v40 = v61;
  v41 = this->m_xPos;
  v51 = this->m_headerWidth;
  v45 = this->m_yPos;
  v58 = *gfxContext;
  CPUTimlineProfilerView::DrawSampleInfo(this, &v58, &v62, v41, v45, v13, v61, v51, x, y, v35);
  v42 = this->m_xPos;
  v52 = this->m_headerWidth;
  v46 = this->m_yPos;
  v58 = *gfxContext;
  CPUTimlineProfilerView::DrawEventInfo(this, &v58, &v62, v42, v46, v13, v40, v52, x, y, v55);
  v58 = *gfxContext;
  CPUTimlineProfilerView::DrawMouseCursor(this, &v58, x, y);
  Sys_ProfEndNamedEvent();
  v58 = *gfxContext;
  RB_EndSurfaceIfNeeded(&v58);
}

/*
==============
CPUTimlineProfilerView::DrawBackground
==============
*/
void CPUTimlineProfilerView::DrawBackground(CPUTimlineProfilerView *this, GfxCmdBufContext *gfxContext, int xPos, int yPos, int width, int height)
{
  int v8; 
  bool v10; 
  char v11; 
  int v12; 
  char v13; 
  unsigned int v14; 
  GfxCmdBufContext v15; 

  _XMM3 = 0i64;
  __asm { vroundss xmm2, xmm3, xmm1, 1 }
  v8 = (int)*(float *)&_XMM2;
  __asm { vroundss xmm2, xmm3, xmm1, 1 }
  if ( v8 > 255 )
    v8 = 255;
  v10 = v8 < 0;
  v11 = v8;
  v12 = (int)*(float *)&_XMM2;
  if ( v10 )
    v11 = 0;
  LOBYTE(v14) = v11;
  if ( v12 > 255 )
    v12 = 255;
  BYTE1(v14) = v11;
  BYTE2(v14) = v11;
  v13 = v12;
  if ( v12 < 0 )
    v13 = 0;
  HIBYTE(v14) = v13;
  v15 = *gfxContext;
  RB_DrawStretchPic(&v15, rgp.whiteMaterial, (float)xPos, (float)yPos, (float)width, (float)height, 0.0, 0.0, 1.0, 1.0, v14, GFX_PRIM_STATS_DEBUG);
}

/*
==============
CPUTimlineProfilerView::DrawEventInfo
==============
*/
void CPUTimlineProfilerView::DrawEventInfo(CPUTimlineProfilerView *this, GfxCmdBufContext *gfxContext, const CPUTimlineProfilerView::TimelineDisplayParams *timelineParams, int timelineXPos, int timelineYPos, int timelineWidth, int timelineHeight, int timelineHeaderWidth, int mouseX, int mouseY, int selectedEvent)
{
  unsigned __int64 m_displayRangeStartUnshifted; 
  unsigned __int64 m_time; 
  __int64 v16; 
  __int128 v19; 
  __int128 v21; 
  double v22; 
  int v23; 
  float v24; 
  GfxFont *m_font; 
  GfxColor m_textColor; 
  float v27; 
  float v28; 
  GfxFont *v34; 
  const char *ThreadProfilerName; 
  GfxFont *v36; 
  unsigned int m_color; 
  unsigned int packed; 
  GfxCmdBufContext v39; 
  char dest[128]; 

  if ( selectedEvent != -1 && this->m_paused )
  {
    m_displayRangeStartUnshifted = timelineParams->m_displayRangeStartUnshifted;
    m_time = this->m_displayedEvents.m_base[selectedEvent].m_time;
    v16 = m_time - m_displayRangeStartUnshifted;
    _XMM0 = 0i64;
    if ( m_time <= m_displayRangeStartUnshifted )
      v16 = m_displayRangeStartUnshifted - m_time;
    __asm { vcvtsi2sd xmm0, xmm0, rcx }
    if ( v16 < 0 )
    {
      *((_QWORD *)&v19 + 1) = *((_QWORD *)&_XMM0 + 1);
      *(double *)&v19 = *(double *)&_XMM0 + 1.844674407370955e19;
      _XMM0 = v19;
    }
    *((_QWORD *)&v21 + 1) = *((_QWORD *)&_XMM0 + 1);
    *(double *)&v21 = *(double *)&_XMM0 * msecPerRawTimerTick;
    _XMM10 = v21;
    v22 = I_fclamp((float)((float)((float)((int)m_time - LODWORD(timelineParams->m_displayRangeStart)) / timelineParams->m_displayRangeTicks) * (float)(timelineWidth - timelineHeaderWidth)) + (float)((float)timelineHeaderWidth + (float)timelineXPos), (float)timelineHeaderWidth + (float)timelineXPos, (float)timelineWidth + (float)timelineXPos);
    m_color = this->m_displayedEvents.m_base[selectedEvent].m_color;
    v39 = *gfxContext;
    RB_DrawStretchPic(&v39, rgp.whiteMaterial, *(float *)&v22, (float)timelineYPos, 1.0, (float)timelineHeight, 0.0, 0.0, 1.0, 1.0, m_color, GFX_PRIM_STATS_DEBUG);
    v23 = 20;
    packed = this->m_textColor.packed;
    if ( mouseX - 320 >= timelineXPos )
      v23 = -320;
    v39 = *gfxContext;
    v24 = (float)(mouseX + v23);
    RB_DrawStretchPic(&v39, rgp.whiteMaterial, v24, (float)mouseY, 300.0, 65.0, 0.0, 0.0, 1.0, 1.0, packed, GFX_PRIM_STATS_DEBUG);
    v39 = *gfxContext;
    RB_DrawStretchPic(&v39, rgp.whiteMaterial, v24 + 1.0, (float)mouseY + 1.0, 298.0, 63.0, 0.0, 0.0, 1.0, 1.0, 0xC8000000, GFX_PRIM_STATS_DEBUG);
    Com_sprintf(dest, 0x80ui64, "Event: %s", this->m_displayedEvents.m_name[selectedEvent]);
    m_font = this->m_font;
    m_textColor = this->m_textColor;
    v27 = (float)mouseY + 5.0;
    v28 = v24 + 5.0;
    v39 = *gfxContext;
    RB_DrawText(&v39, dest, m_font, v28, (float)m_font->pixelHeight + v27, m_textColor);
    __asm { vxorpd  xmm2, xmm10, cs:__xmm@80000000000000008000000000000000 }
    _XMM0 = m_time ^ 0x8000000000000000ui64;
    __asm
    {
      vpcmpgtq xmm1, xmm0, xmm1
      vblendvpd xmm1, xmm2, xmm10, xmm1
      vcvtsd2ss xmm0, xmm1, xmm1
    }
    Com_sprintf(dest, 0x80ui64, "Time: %.4f ms", *(float *)&_XMM0);
    v34 = this->m_font;
    v39 = *gfxContext;
    RB_DrawText(&v39, dest, v34, v28, (float)(2 * v34->pixelHeight) + v27, this->m_textColor);
    ThreadProfilerName = GetThreadProfilerName(this->m_displayedEvents.m_base[selectedEvent].m_thread);
    Com_sprintf(dest, 0x80ui64, "Thread: %s", ThreadProfilerName);
    v36 = this->m_font;
    v39 = *gfxContext;
    RB_DrawText(&v39, dest, v36, v28, (float)(3 * v36->pixelHeight) + v27, this->m_textColor);
  }
}

/*
==============
CPUTimlineProfilerView::DrawEventTimeline
==============
*/
__int64 CPUTimlineProfilerView::DrawEventTimeline(CPUTimlineProfilerView *this, GfxCmdBufContext *gfxContext, const CPUTimlineProfilerView::TimelineDisplayParams *timelineParams, int xPos, int yPos, int width, int headerWidth, int mouseX, int mouseY, int *selectedEvent)
{
  int v10; 
  __int128 v14; 
  int v15; 
  unsigned int v16; 
  unsigned int v17; 
  __int64 v18; 
  unsigned __int64 m_time; 
  float v20; 
  int v21; 
  int v24; 
  unsigned int m_color; 
  GfxCmdBufContext v27; 

  v10 = yPos;
  v27 = *gfxContext;
  v14 = 0i64;
  *(float *)&v14 = (float)xPos;
  _XMM7 = v14;
  RB_DrawText(&v27, "events", this->m_font, *(float *)&v14, (float)yPos + 20.0, (const GfxColor)-1);
  v15 = 0;
  v16 = width;
  v17 = headerWidth;
  *selectedEvent = -1;
  if ( this->m_numDisplayedEvents > 0 )
  {
    v18 = 0i64;
    do
    {
      m_time = this->m_displayedEvents.m_base[v18].m_time;
      if ( m_time <= timelineParams->m_displayRangeEnd && m_time >= timelineParams->m_displayRangeStart )
      {
        _mm_cvtepi32_ps((__m128i)((unsigned int)m_time - (unsigned int)timelineParams->m_displayRangeStart));
        _mm_cvtepi32_ps((__m128i)(unsigned int)(width - headerWidth));
        v20 = _mm_cvtepi32_ps((__m128i)v16).m128_f32[0];
        _mm_cvtepi32_ps((__m128i)v17);
        if ( *(float *)&v14 > (float)(v20 + *(float *)&v14) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_vector.h", 713, ASSERT_TYPE_SANITY, "( min ) <= ( max )", "min <= max\n\t%g, %g", *(float *)&v14, (float)(v20 + *(float *)&v14)) )
          __debugbreak();
        v21 = v10 + 10;
        __asm
        {
          vmaxss  xmm0, xmm7, xmm9
          vminss  xmm6, xmm0, xmm6
        }
        m_color = this->m_displayedEvents.m_base[v18].m_color;
        v27 = *gfxContext;
        RB_DrawTiltedRect(&v27, rgp.whiteMaterial, *(float *)&_XMM6, (float)v21, 5.0, 5.0, 0.0, 0.0, 1.0, 1.0, m_color, GFX_PRIM_STATS_DEBUG);
        if ( *selectedEvent == -1 && (float)mouseX >= (float)(*(float *)&_XMM6 - 5.0) && (float)mouseX <= (float)(*(float *)&_XMM6 + 5.0) && mouseY >= v21 - 5 )
        {
          v16 = width;
          v24 = v21 + 5;
          v17 = headerWidth;
          v10 = yPos;
          if ( mouseY <= v24 )
            *selectedEvent = v15;
        }
        else
        {
          v10 = yPos;
          v17 = headerWidth;
          v16 = width;
        }
      }
      ++v15;
      ++v18;
    }
    while ( v15 < this->m_numDisplayedEvents );
  }
  return 40i64;
}

/*
==============
CPUTimlineProfilerView::DrawGpuTimerInfo
==============
*/
void CPUTimlineProfilerView::DrawGpuTimerInfo(CPUTimlineProfilerView *this, GfxCmdBufContext *gfxContext, const CPUTimlineProfilerView::TimelineDisplayParams *timelineParams, int timelineXPos, int timelineYPos, int timelineWidth, int timelineHeight, int timelineHeaderWidth, int mouseX, int mouseY, int selectedGpuFrame, int selectedGpuTimer)
{
  const CPUTimlineProfilerView::GPUFrame *v14; 
  unsigned __int64 v15; 
  unsigned __int64 v16; 
  unsigned __int64 m_displayRangeStartUnshifted; 
  __int64 v18; 
  int v19; 
  __int128 v22; 
  __int128 v24; 
  __int128 v32; 
  __int128 v34; 
  const GfxColor *Color; 
  int m_displayRangeStart; 
  float v38; 
  float v39; 
  float v40; 
  float v41; 
  float v42; 
  double v43; 
  GfxCmdBufSourceState *v44; 
  int v45; 
  float v46; 
  float v47; 
  const char *Name; 
  GfxFont *m_font; 
  GfxColor m_textColor; 
  float v51; 
  GfxFont *v52; 
  char *v53; 
  GfxFont *v54; 
  unsigned int v55; 
  vec4_t v56; 
  unsigned int packed; 
  int v58; 
  char dest[128]; 
  char v60[128]; 

  v58 = timelineXPos;
  *(_QWORD *)v56.v = gfxContext;
  if ( selectedGpuFrame != -1 && selectedGpuTimer != -1 && this->m_paused )
  {
    v14 = &this->m_gpuFrames[selectedGpuFrame % 4];
    v15 = CPUTimlineProfilerView::GPUTimeToCPUTime(this, v14, v14->m_profileSamples[selectedGpuTimer].m_startUs);
    v16 = CPUTimlineProfilerView::GPUTimeToCPUTime(this, v14, v14->m_profileSamples[selectedGpuTimer].m_endUs);
    m_displayRangeStartUnshifted = timelineParams->m_displayRangeStartUnshifted;
    v18 = m_displayRangeStartUnshifted - v15;
    v19 = v16;
    _XMM0 = 0i64;
    if ( v15 > m_displayRangeStartUnshifted )
      v18 = v15 - m_displayRangeStartUnshifted;
    __asm { vcvtsi2sd xmm0, xmm0, rdx }
    if ( v18 < 0 )
    {
      *((_QWORD *)&v22 + 1) = *((_QWORD *)&_XMM0 + 1);
      *(double *)&v22 = *(double *)&_XMM0 + 1.844674407370955e19;
      _XMM0 = v22;
    }
    *((_QWORD *)&v24 + 1) = *((_QWORD *)&_XMM0 + 1);
    *(double *)&v24 = *(double *)&_XMM0 * msecPerRawTimerTick;
    _XMM3 = v24;
    __asm { vxorpd  xmm2, xmm3, cs:__xmm@80000000000000008000000000000000 }
    _XMM0 = v15 ^ 0x8000000000000000ui64;
    __asm
    {
      vpcmpgtq xmm1, xmm0, xmm1
      vblendvpd xmm1, xmm2, xmm3, xmm1
      vcvtsd2ss xmm13, xmm1, xmm1
    }
    if ( v16 )
    {
      _XMM0 = 0i64;
      __asm { vcvtsi2sd xmm0, xmm0, rax }
      if ( (__int64)(v16 - v15) < 0 )
      {
        *((_QWORD *)&v32 + 1) = *((_QWORD *)&_XMM0 + 1);
        *(double *)&v32 = *(double *)&_XMM0 + 1.844674407370955e19;
        _XMM0 = v32;
      }
      *((_QWORD *)&v34 + 1) = *((_QWORD *)&_XMM0 + 1);
      *(double *)&v34 = *(double *)&_XMM0 * msecPerRawTimerTick;
      _XMM0 = v34;
      __asm { vcvtsd2ss xmm12, xmm0, xmm0 }
    }
    else
    {
      *(float *)&_XMM12 = FLOAT_N1_0;
    }
    Color = R_GPU_TimerGetColor(v14->m_profileSamples[selectedGpuTimer].m_timer);
    m_displayRangeStart = timelineParams->m_displayRangeStart;
    v38 = 1.0 / timelineParams->m_displayRangeTicks;
    v39 = (float)timelineHeaderWidth + (float)v58;
    v40 = (float)((int)v15 - LODWORD(timelineParams->m_displayRangeStart)) * v38;
    v41 = (float)timelineWidth + (float)v58;
    packed = Color->packed;
    v42 = (float)(timelineWidth - timelineHeaderWidth);
    HIBYTE(packed) = 30;
    I_fclamp((float)(v40 * v42) + v39, v39, v41);
    v43 = I_fclamp((float)((float)((float)(v19 - m_displayRangeStart) * v38) * v42) + v39, v39, v41);
    v44 = *(GfxCmdBufSourceState **)v56.v;
    v56 = **(vec4_t **)v56.v;
    RB_DrawStretchPic((GfxCmdBufContext *)&v56, rgp.whiteMaterial, (float)(v40 * v42) + v39, (float)timelineYPos, *(float *)&v43 - (float)((float)(v40 * v42) + v39), (float)timelineHeight, 0.0, 0.0, 1.0, 1.0, packed, GFX_PRIM_STATS_DEBUG);
    v45 = 20;
    v46 = (float)mouseY;
    v55 = this->m_textColor.packed;
    if ( mouseX - 320 >= v58 )
      v45 = -320;
    v47 = (float)(mouseX + v45);
    v56 = v44->matrices.matrix[0].m.m[0];
    RB_DrawStretchPic((GfxCmdBufContext *)&v56, rgp.whiteMaterial, v47, v46, 300.0, 65.0, 0.0, 0.0, 1.0, 1.0, v55, GFX_PRIM_STATS_DEBUG);
    v56 = v44->matrices.matrix[0].m.m[0];
    RB_DrawStretchPic((GfxCmdBufContext *)&v56, rgp.whiteMaterial, v47 + 1.0, v46 + 1.0, 298.0, 63.0, 0.0, 0.0, 1.0, 1.0, 0xC8000000, GFX_PRIM_STATS_DEBUG);
    Name = R_GPU_TimerGetName(v14->m_profileSamples[selectedGpuTimer].m_timer);
    Com_sprintf(dest, 0x80ui64, "GPU Timer: %s", Name);
    m_font = this->m_font;
    m_textColor = this->m_textColor;
    v51 = v47 + 5.0;
    v56 = v44->matrices.matrix[0].m.m[0];
    RB_DrawText((GfxCmdBufContext *)&v56, dest, m_font, v51, (float)m_font->pixelHeight + (float)(v46 + 5.0), m_textColor);
    Com_sprintf(dest, 0x80ui64, "Start: %.4f ms", *(float *)&_XMM13);
    v52 = this->m_font;
    v56 = v44->matrices.matrix[0].m.m[0];
    RB_DrawText((GfxCmdBufContext *)&v56, dest, v52, v51, (float)(2 * v52->pixelHeight) + (float)(v46 + 5.0), this->m_textColor);
    Com_sprintf(v60, 0x80ui64, "%.4f", *(float *)&_XMM12);
    v53 = v60;
    if ( *(float *)&_XMM12 <= 0.0 )
      v53 = "?";
    Com_sprintf(dest, 0x80ui64, "Duration: %s ms", v53);
    v54 = this->m_font;
    v56 = v44->matrices.matrix[0].m.m[0];
    RB_DrawText((GfxCmdBufContext *)&v56, dest, v54, v51, (float)(3 * v54->pixelHeight) + (float)(v46 + 5.0), this->m_textColor);
  }
}

/*
==============
CPUTimlineProfilerView::DrawMouseCursor
==============
*/
void CPUTimlineProfilerView::DrawMouseCursor(CPUTimlineProfilerView *this, GfxCmdBufContext *gfxContext, int mouseX, int mouseY)
{
  float v5; 
  float v6; 
  GfxCmdBufContext v7; 

  v5 = (float)mouseX;
  v6 = (float)mouseY;
  v7 = *gfxContext;
  RB_DrawStretchPic(&v7, rgp.whiteMaterial, (float)mouseX - 2.0, (float)mouseY - 18.0, 5.0, 17.0, 0.0, 0.0, 1.0, 1.0, 0xFF000000, GFX_PRIM_STATS_DEBUG);
  v7 = *gfxContext;
  RB_DrawStretchPic(&v7, rgp.whiteMaterial, v5 - 2.0, v6 + 2.0, 5.0, 17.0, 0.0, 0.0, 1.0, 1.0, 0xFF000000, GFX_PRIM_STATS_DEBUG);
  v7 = *gfxContext;
  RB_DrawStretchPic(&v7, rgp.whiteMaterial, v5 - 18.0, v6 - 2.0, 17.0, 5.0, 0.0, 0.0, 1.0, 1.0, 0xFF000000, GFX_PRIM_STATS_DEBUG);
  v7 = *gfxContext;
  RB_DrawStretchPic(&v7, rgp.whiteMaterial, v5 + 2.0, v6 - 2.0, 17.0, 5.0, 0.0, 0.0, 1.0, 1.0, 0xFF000000, GFX_PRIM_STATS_DEBUG);
  v7 = *gfxContext;
  RB_DrawStretchPic(&v7, rgp.whiteMaterial, v5 - 1.0, (float)(v6 - 2.0) - 15.0, 3.0, 15.0, 0.0, 0.0, 1.0, 1.0, 0xFFFFFFFF, GFX_PRIM_STATS_DEBUG);
  v7 = *gfxContext;
  RB_DrawStretchPic(&v7, rgp.whiteMaterial, v5 - 1.0, v6 + 3.0, 3.0, 15.0, 0.0, 0.0, 1.0, 1.0, 0xFFFFFFFF, GFX_PRIM_STATS_DEBUG);
  v7 = *gfxContext;
  RB_DrawStretchPic(&v7, rgp.whiteMaterial, (float)(v5 - 2.0) - 15.0, v6 - 1.0, 15.0, 3.0, 0.0, 0.0, 1.0, 1.0, 0xFFFFFFFF, GFX_PRIM_STATS_DEBUG);
  v7 = *gfxContext;
  RB_DrawStretchPic(&v7, rgp.whiteMaterial, v5 + 3.0, v6 - 1.0, 15.0, 3.0, 0.0, 0.0, 1.0, 1.0, 0xFFFFFFFF, GFX_PRIM_STATS_DEBUG);
}

/*
==============
CPUTimlineProfilerView::DrawSampleInfo
==============
*/
void CPUTimlineProfilerView::DrawSampleInfo(CPUTimlineProfilerView *this, GfxCmdBufContext *gfxContext, const CPUTimlineProfilerView::TimelineDisplayParams *timelineParams, int timelineXPos, int timelineYPos, int timelineWidth, int timelineHeight, int timelineHeaderWidth, int mouseX, int mouseY, int selectedSample)
{
  __int128 v11; 
  __int128 v12; 
  __int128 v13; 
  __int128 v14; 
  __int128 v15; 
  __int128 v16; 
  CPUTimelineProfiler::SampleBase *m_base; 
  unsigned __int64 m_displayRangeStartUnshifted; 
  unsigned __int64 v23; 
  unsigned __int64 m_start; 
  __int64 v26; 
  __int128 v28; 
  unsigned __int64 m_end; 
  __int128 v31; 
  __int128 v39; 
  __int128 v41; 
  int m_displayRangeStart; 
  float v44; 
  int v45; 
  int v46; 
  unsigned int v47; 
  float v48; 
  unsigned int m_color; 
  int v50; 
  float v51; 
  double v52; 
  float v53; 
  double v54; 
  float v59; 
  float v60; 
  __int16 m_profile; 
  const char *v62; 
  GfxFont *m_font; 
  float v64; 
  GfxColor m_textColor; 
  float v66; 
  float v67; 
  GfxFont *v68; 
  char *v69; 
  GfxFont *v70; 
  CPUTimelineProfiler::CPUStatsSet m_cpuStatsSet; 
  CPUTimelineProfiler::CPUStatsSet v72; 
  const char *v73; 
  const char *v74; 
  GfxFont *v75; 
  CPUTimelineProfiler::CPUStatsSet v76; 
  GfxFont *v77; 
  GfxFont *v78; 
  float v79; 
  float v80; 
  float v81; 
  float v82; 
  GfxFont *v83; 
  unsigned __int64 *instructionsRetired; 
  unsigned __int64 *instructionsRetireda; 
  unsigned int packed; 
  unsigned __int64 l2CacheMisses; 
  unsigned __int64 v88[2]; 
  GfxCmdBufContext v89; 
  unsigned __int64 cacheAccesses; 
  char dest[128]; 
  char v92[128]; 
  __int128 v93; 
  __int128 v94; 
  __int128 v95; 
  __int128 v96; 
  __int128 v97; 
  __int128 v98; 

  if ( selectedSample != -1 && this->m_paused )
  {
    m_base = this->m_displayedSamples.m_base;
    m_displayRangeStartUnshifted = timelineParams->m_displayRangeStartUnshifted;
    v98 = v11;
    v97 = v12;
    v23 = selectedSample;
    v96 = v13;
    v95 = v14;
    _XMM0 = 0i64;
    m_start = m_base[v23].m_start;
    v94 = v15;
    v93 = v16;
    v26 = m_start - m_displayRangeStartUnshifted;
    if ( m_start <= m_displayRangeStartUnshifted )
      v26 = m_displayRangeStartUnshifted - m_start;
    __asm { vcvtsi2sd xmm0, xmm0, rcx }
    if ( v26 < 0 )
    {
      *((_QWORD *)&v28 + 1) = *((_QWORD *)&_XMM0 + 1);
      *(double *)&v28 = *(double *)&_XMM0 + 1.844674407370955e19;
      _XMM0 = v28;
    }
    m_end = m_base[v23].m_end;
    *((_QWORD *)&v31 + 1) = *((_QWORD *)&_XMM0 + 1);
    *(double *)&v31 = *(double *)&_XMM0 * msecPerRawTimerTick;
    _XMM3 = v31;
    __asm { vxorpd  xmm2, xmm3, cs:__xmm@80000000000000008000000000000000 }
    _XMM0 = m_start ^ 0x8000000000000000ui64;
    __asm
    {
      vpcmpgtq xmm1, xmm0, xmm1
      vblendvpd xmm1, xmm2, xmm3, xmm1
      vcvtsd2ss xmm13, xmm1, xmm1
    }
    if ( m_end )
    {
      _XMM0 = 0i64;
      __asm { vcvtsi2sd xmm0, xmm0, rax }
      if ( (__int64)(m_end - m_start) < 0 )
      {
        *((_QWORD *)&v39 + 1) = *((_QWORD *)&_XMM0 + 1);
        *(double *)&v39 = *(double *)&_XMM0 + 1.844674407370955e19;
        _XMM0 = v39;
      }
      *((_QWORD *)&v41 + 1) = *((_QWORD *)&_XMM0 + 1);
      *(double *)&v41 = *(double *)&_XMM0 * msecPerRawTimerTick;
      _XMM0 = v41;
      __asm { vcvtsd2ss xmm12, xmm0, xmm0 }
    }
    else
    {
      *(float *)&_XMM12 = FLOAT_N1_0;
    }
    m_displayRangeStart = timelineParams->m_displayRangeStart;
    v44 = 1.0 / timelineParams->m_displayRangeTicks;
    v45 = 20;
    if ( mouseX - 320 >= timelineXPos )
      v45 = -320;
    v46 = mouseX + v45;
    v47 = 668265261 * ((9 * (m_base[v23].m_profile ^ ((m_base[v23].m_profile ^ 0x3D0000u) >> 16))) ^ ((9 * (m_base[v23].m_profile ^ ((m_base[v23].m_profile ^ 0x3D0000u) >> 16))) >> 4));
    v48 = (float)timelineHeaderWidth + (float)timelineXPos;
    LODWORD(l2CacheMisses) = v47 ^ (v47 >> 15);
    m_color = m_base[v23].m_color;
    BYTE3(l2CacheMisses) = -1;
    v50 = l2CacheMisses;
    if ( m_color )
      v50 = m_color;
    LODWORD(l2CacheMisses) = v50;
    v51 = (float)(timelineWidth - timelineHeaderWidth);
    BYTE3(l2CacheMisses) = 40;
    v52 = I_fclamp((float)((float)((float)((int)m_start - m_displayRangeStart) * v44) * v51) + v48, v48, (float)timelineWidth + (float)timelineXPos);
    v53 = *(float *)&v52;
    v54 = I_fclamp((float)((float)((float)((int)m_end - m_displayRangeStart) * v44) * v51) + v48, v48, (float)timelineWidth + (float)timelineXPos);
    *(GfxCmdBufContext *)v88 = *gfxContext;
    RB_DrawStretchPic((GfxCmdBufContext *)v88, rgp.whiteMaterial, v53, (float)timelineYPos, *(float *)&v54 - v53, (float)timelineHeight, 0.0, 0.0, 1.0, 1.0, l2CacheMisses, GFX_PRIM_STATS_DEBUG);
    _XMM0 = (unsigned int)this->m_cpuStatsSet;
    packed = this->m_textColor.packed;
    __asm { vpcmpeqd xmm3, xmm0, xmm1 }
    _XMM1 = LODWORD(FLOAT_135_0);
    __asm { vblendvps xmm6, xmm1, xmm2, xmm3 }
    *(GfxCmdBufContext *)v88 = *gfxContext;
    v60 = (float)v46;
    v59 = v60;
    *(float *)&l2CacheMisses = *(float *)&_XMM6;
    RB_DrawStretchPic((GfxCmdBufContext *)v88, rgp.whiteMaterial, v60, (float)mouseY, 300.0, *(float *)&_XMM6, 0.0, 0.0, 1.0, 1.0, packed, GFX_PRIM_STATS_DEBUG);
    *(GfxCmdBufContext *)v88 = *gfxContext;
    RB_DrawStretchPic((GfxCmdBufContext *)v88, rgp.whiteMaterial, v60 + 1.0, (float)mouseY + 1.0, 298.0, *(float *)&_XMM6 - 2.0, 0.0, 0.0, 1.0, 1.0, 0xC8000000, GFX_PRIM_STATS_DEBUG);
    m_profile = this->m_displayedSamples.m_base[v23].m_profile;
    if ( m_profile < 0 )
    {
      v62 = "<unknown>";
      if ( this->m_displayedSamples.m_name[v23][0] )
        v62 = this->m_displayedSamples.m_name[v23];
    }
    else
    {
      v62 = prof_enumNames[m_profile];
    }
    Com_sprintf(dest, 0x80ui64, "Sample: %s", v62);
    m_font = this->m_font;
    v64 = (float)mouseY + 5.0;
    m_textColor = this->m_textColor;
    v67 = v60 + 5.0;
    v66 = v67;
    *(GfxCmdBufContext *)v88 = *gfxContext;
    RB_DrawText((GfxCmdBufContext *)v88, dest, m_font, v59 + 5.0, (float)m_font->pixelHeight + v64, m_textColor);
    Com_sprintf(dest, 0x80ui64, "Start: %.4f ms", *(float *)&_XMM13);
    v68 = this->m_font;
    *(GfxCmdBufContext *)v88 = *gfxContext;
    RB_DrawText((GfxCmdBufContext *)v88, dest, v68, v59 + 5.0, (float)(2 * v68->pixelHeight) + v64, this->m_textColor);
    Com_sprintf(v92, 0x80ui64, "%.4f", *(float *)&_XMM12);
    v69 = v92;
    if ( *(float *)&_XMM12 <= 0.0 )
      v69 = "?";
    Com_sprintf(dest, 0x80ui64, "Duration: %s ms", v69);
    v70 = this->m_font;
    *(GfxCmdBufContext *)v88 = *gfxContext;
    RB_DrawText((GfxCmdBufContext *)v88, dest, v70, v67, (float)(3 * v70->pixelHeight) + v64, this->m_textColor);
    m_cpuStatsSet = this->m_cpuStatsSet;
    if ( m_cpuStatsSet )
    {
      CPUTimelineProfiler::GetStatsFromCounter(&this->m_displayedSamples.m_cpuStats[v23], m_cpuStatsSet, &cacheAccesses, &l2CacheMisses, v88);
      v72 = this->m_cpuStatsSet;
      v73 = "D";
      if ( v72 == CPU_STATS_DCACHE )
      {
        v74 = "D";
      }
      else
      {
        v74 = "I";
        if ( v72 != CPU_STATS_ICACHE )
          v74 = (char *)&queryFormat.fmt + 3;
      }
      LODWORD(instructionsRetired) = cacheAccesses;
      Com_sprintf(dest, 0x80ui64, "%s$ Accesses: %d", v74, instructionsRetired);
      v75 = this->m_font;
      v89 = *gfxContext;
      RB_DrawText(&v89, dest, v75, v67, (float)(4 * v75->pixelHeight) + v64, this->m_textColor);
      v76 = this->m_cpuStatsSet;
      if ( v76 != CPU_STATS_DCACHE )
      {
        v73 = "I";
        if ( v76 != CPU_STATS_ICACHE )
          v73 = (char *)&queryFormat.fmt + 3;
      }
      LODWORD(instructionsRetireda) = l2CacheMisses;
      Com_sprintf(dest, 0x80ui64, "%s$ L2 misses: %d", v73, instructionsRetireda);
      v77 = this->m_font;
      v89 = *gfxContext;
      RB_DrawText(&v89, dest, v77, v67, (float)(5 * v77->pixelHeight) + v64, this->m_textColor);
      Com_sprintf(dest, 0x80ui64, "Inst retired: %d", LODWORD(v88[0]));
      v78 = this->m_font;
      v89 = *gfxContext;
      RB_DrawText(&v89, dest, v78, v67, (float)(6 * v78->pixelHeight) + v64, this->m_textColor);
      v79 = (float)(__int64)l2CacheMisses;
      if ( (l2CacheMisses & 0x8000000000000000ui64) != 0i64 )
      {
        v80 = (float)(__int64)l2CacheMisses;
        v79 = v80 + 1.8446744e19;
      }
      v81 = (float)(__int64)cacheAccesses;
      if ( (cacheAccesses & 0x8000000000000000ui64) != 0i64 )
      {
        v82 = (float)(__int64)cacheAccesses;
        v81 = v82 + 1.8446744e19;
      }
      Com_sprintf(dest, 0x80ui64, "Cache suckness factor: %.1f", (float)((float)(v79 / v81) * 100.0));
      v83 = this->m_font;
      v89 = *gfxContext;
      RB_DrawText(&v89, dest, v83, v66, (float)(7 * v83->pixelHeight) + v64, this->m_textColor);
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
  GfxCmdBufContext *v11; 
  const CPUTimlineProfilerView::TimelineDisplayParams *v13; 
  int m_numDisplayedSamples; 
  int v16; 
  int v17; 
  int v18; 
  unsigned int v19; 
  int v20; 
  int v21; 
  unsigned int m_rectsToDrawWritePtr; 
  unsigned int v23; 
  unsigned int v24; 
  unsigned int v25; 
  unsigned int v26; 
  unsigned __int64 v27; 
  __int64 v28; 
  CPUTimelineProfiler::SampleBase *m_base; 
  int m_level; 
  unsigned __int64 m_start; 
  unsigned __int64 m_displayRangeStart; 
  unsigned __int64 m_end; 
  float v34; 
  float v35; 
  float v36; 
  float v37; 
  float v38; 
  double v39; 
  float v40; 
  double v41; 
  float v42; 
  int v43; 
  float v44; 
  CPUTimelineProfiler::SampleBase *v45; 
  unsigned int v46; 
  unsigned int m_color; 
  CPUTimelineProfiler::CPUStatsSet m_cpuStatsSet; 
  unsigned int v49; 
  __int128 v50; 
  __int128 v51; 
  float v52; 
  float v53; 
  __int128 v54; 
  int v55; 
  const unsigned __int8 *v56; 
  int v57; 
  float *v58; 
  int v59; 
  __int128 v60; 
  __int64 v61; 
  unsigned int v62; 
  float v63; 
  __int128 v64; 
  int m_probeFilter; 
  char v69; 
  float *v70; 
  unsigned int v71; 
  unsigned int v72; 
  unsigned int v73; 
  unsigned int v74; 
  bool v75; 
  CPUTimlineProfilerView *v76; 
  unsigned int v78; 
  unsigned int v79; 
  unsigned int v80; 
  unsigned int v81; 
  unsigned __int64 l2CacheMisses; 
  signed __int64 instructionsRetired; 
  GfxCmdBufContext instructionsRetired_8; 
  unsigned int v85; 

  v11 = gfxContext;
  v13 = timelineParams;
  Sys_ProfBeginNamedEvent(0xFFC0C0C0, "draw thread");
  m_numDisplayedSamples = this->m_numDisplayedSamples;
  v16 = 0;
  v17 = 0;
  v18 = m_numDisplayedSamples;
  v19 = 2 * (5 * this->m_numLevelsToDisplay + 15);
  v81 = v19;
  if ( m_numDisplayedSamples > 0 )
  {
    do
    {
      v20 = v18 / 2 + v17;
      if ( this->m_displayedSamples.m_base[v20].m_thread >= threadToDraw )
      {
        v18 /= 2;
      }
      else
      {
        v17 = v20 + 1;
        v18 += -1 - v18 / 2;
      }
    }
    while ( v18 > 0 );
    do
    {
      v21 = m_numDisplayedSamples / 2 + v16;
      if ( this->m_displayedSamples.m_base[v21].m_thread > threadToDraw )
      {
        m_numDisplayedSamples /= 2;
      }
      else
      {
        v16 = v21 + 1;
        m_numDisplayedSamples += -1 - m_numDisplayedSamples / 2;
      }
    }
    while ( m_numDisplayedSamples > 0 );
  }
  m_rectsToDrawWritePtr = this->m_rectsToDrawWritePtr;
  v23 = m_rectsToDrawWritePtr;
  v24 = width;
  v25 = headerWidth;
  v26 = width - headerWidth;
  v80 = m_rectsToDrawWritePtr;
  if ( v17 < (__int64)v16 )
  {
    v27 = v17;
    v28 = v16 - (__int64)v17;
    do
    {
      m_base = this->m_displayedSamples.m_base;
      m_level = m_base[v27].m_level;
      if ( m_level < this->m_numLevelsToDisplay )
      {
        m_start = m_base[v27].m_start;
        if ( m_start <= v13->m_displayRangeEnd )
        {
          m_displayRangeStart = v13->m_displayRangeStart;
          m_end = m_base[v27].m_end;
          if ( m_end < m_displayRangeStart )
          {
            v13 = timelineParams;
          }
          else
          {
            v34 = _mm_cvtepi32_ps((__m128i)(unsigned int)xPos).m128_f32[0];
            v35 = 1.0 / timelineParams->m_displayRangeTicks;
            v36 = _mm_cvtepi32_ps((__m128i)v25).m128_f32[0] + v34;
            v37 = _mm_cvtepi32_ps((__m128i)v24).m128_f32[0] + v34;
            v38 = _mm_cvtepi32_ps((__m128i)v26).m128_f32[0];
            v39 = I_fclamp((float)((float)(_mm_cvtepi32_ps((__m128i)(unsigned int)(m_start - m_displayRangeStart)).m128_f32[0] * v35) * v38) + v36, v36, v37);
            v40 = *(float *)&v39;
            v41 = I_fclamp((float)((float)(_mm_cvtepi32_ps((__m128i)(unsigned int)(m_end - m_displayRangeStart)).m128_f32[0] * v35) * v38) + v36, v36, v37);
            v42 = *(float *)&v41 - v40;
            if ( (float)(*(float *)&v41 - v40) <= 0.0 )
            {
              v13 = timelineParams;
              v24 = width;
              v25 = headerWidth;
            }
            else
            {
              v43 = yPos + 10 * m_level;
              if ( *selectedSample == -1 )
              {
                v44 = (float)mouseX;
                if ( v44 >= v40 && v44 <= *(float *)&v41 && mouseY >= v43 && mouseY <= v43 + 10 )
                  *selectedSample = v17;
              }
              v45 = this->m_displayedSamples.m_base;
              v46 = (668265261 * ((9 * (v45[v27].m_profile ^ ((v45[v27].m_profile ^ 0x3D0000u) >> 16))) ^ ((9 * (v45[v27].m_profile ^ ((v45[v27].m_profile ^ 0x3D0000u) >> 16))) >> 4))) ^ ((668265261 * ((9 * (v45[v27].m_profile ^ ((v45[v27].m_profile ^ 0x3D0000u) >> 16))) ^ ((9 * (v45[v27].m_profile ^ ((v45[v27].m_profile ^ 0x3D0000u) >> 16))) >> 4))) >> 15);
              m_color = v45[v27].m_color;
              m_cpuStatsSet = this->m_cpuStatsSet;
              v78 = v46;
              HIBYTE(v78) = -1;
              v49 = v78;
              if ( m_color )
                v49 = m_color;
              v79 = v49;
              if ( m_cpuStatsSet )
              {
                CPUTimelineProfiler::GetStatsFromCounter(&this->m_displayedSamples.m_cpuStats[v17], m_cpuStatsSet, (unsigned __int64 *)&instructionsRetired, &l2CacheMisses, (unsigned __int64 *)&instructionsRetired_8);
                v51 = 0i64;
                *(float *)&v51 = (float)(__int64)l2CacheMisses;
                v50 = v51;
                if ( (l2CacheMisses & 0x8000000000000000ui64) != 0i64 )
                {
                  *(float *)&v51 = *(float *)&v51 + 1.8446744e19;
                  v50 = v51;
                }
                v52 = (float)instructionsRetired;
                if ( instructionsRetired < 0 )
                {
                  v53 = (float)instructionsRetired;
                  v52 = v53 + 1.8446744e19;
                }
                v54 = v50;
                LOBYTE(v55) = 76;
                v56 = &kColors[1][1];
                LOBYTE(v57) = -1;
                v58 = (float *)&kThresholds[1];
                LOBYTE(v59) = 76;
                HIBYTE(v85) = -1;
                *(float *)&v54 = (float)(*(float *)&v50 / v52) * 100.0;
                v60 = v54;
                v61 = 3i64;
                do
                {
                  v62 = *(v56 - 1);
                  v56 += 3;
                  v63 = *v58 - *(v58 - 1);
                  v64 = v60;
                  *(float *)&v64 = *(float *)&v60 - *(v58++ - 1);
                  *(float *)&v64 = *(float *)&v64 / v63;
                  _XMM2 = v64;
                  __asm
                  {
                    vmaxss  xmm0, xmm2, xmm13
                    vminss  xmm3, xmm0, xmm12
                  }
                  v55 = (int)(float)((float)(_mm_cvtepi32_ps((__m128i)v62).m128_f32[0] * *(float *)&_XMM3) + (float)(_mm_cvtepi32_ps((__m128i)(unsigned __int8)v55).m128_f32[0] * (float)(1.0 - *(float *)&_XMM3)));
                  LOBYTE(v85) = v55;
                  v57 = (int)(float)((float)(_mm_cvtepi32_ps((__m128i)*(v56 - 3)).m128_f32[0] * *(float *)&_XMM3) + (float)(_mm_cvtepi32_ps((__m128i)(unsigned __int8)v57).m128_f32[0] * (float)(1.0 - *(float *)&_XMM3)));
                  BYTE1(v85) = v57;
                  v59 = (int)(float)((float)(_mm_cvtepi32_ps((__m128i)*(v56 - 2)).m128_f32[0] * *(float *)&_XMM3) + (float)(_mm_cvtepi32_ps((__m128i)(unsigned __int8)v59).m128_f32[0] * (float)(1.0 - *(float *)&_XMM3)));
                  BYTE2(v85) = v59;
                  --v61;
                }
                while ( v61 );
                v49 = v85;
                v79 = v85;
              }
              m_probeFilter = this->m_probeFilter;
              if ( m_probeFilter )
              {
                v69 = HIBYTE(v79);
                if ( m_probeFilter != this->m_displayedSamples.m_base[v27].m_profile )
                  v69 = 20;
                HIBYTE(v79) = v69;
                v49 = v79;
              }
              v13 = timelineParams;
              v24 = width;
              v25 = headerWidth;
              if ( this->m_rectsToDrawWritePtr - this->m_rectsToDrawReadPtr < 0x3A980 )
              {
                v70 = (float *)((char *)this->m_rectsToDrawBuffer.data + 16 * (this->m_rectsToDrawWritePtr % 0x3A980));
                *v70 = v40;
                v70[1] = (float)v43;
                v70[2] = v42;
                *((_DWORD *)v70 + 3) = v49;
                ++this->m_rectsToDrawWritePtr;
              }
            }
            v26 = width - headerWidth;
          }
        }
      }
      ++v17;
      ++v27;
      --v28;
    }
    while ( v28 );
    v23 = this->m_rectsToDrawWritePtr;
    m_rectsToDrawWritePtr = v80;
    v19 = v81;
    v11 = gfxContext;
  }
  v71 = v23 / 0x3A980;
  v72 = m_rectsToDrawWritePtr / 0x3A980;
  instructionsRetired_8 = *v11;
  v73 = v23 % 0x3A980;
  v74 = m_rectsToDrawWritePtr % 0x3A980;
  v75 = v72 == v71;
  v76 = this;
  if ( !v75 )
  {
    CPUTimlineProfilerView::FlushProfilerBars(this, &instructionsRetired_8, v74, 0x3A980u);
    instructionsRetired_8 = *v11;
    v74 = 0;
    v76 = this;
  }
  CPUTimlineProfilerView::FlushProfilerBars(v76, &instructionsRetired_8, v74, v73);
  Sys_ProfEndNamedEvent();
  return v19;
}

/*
==============
CPUTimlineProfilerView::DrawThreadTimelineName
==============
*/
__int64 CPUTimlineProfilerView::DrawThreadTimelineName(CPUTimlineProfilerView *this, GfxCmdBufContext *gfxContext, const CPUTimlineProfilerView::TimelineDisplayParams *timelineParams, int threadToDraw, int xPos, int yPos, int headerWidth)
{
  GfxColor m_textColor; 
  GfxFont *m_font; 
  __int64 v11; 
  int v12; 
  const char *ThreadProfilerName; 
  float v14; 
  GfxFont *v15; 
  GfxCmdBufContext v17; 

  m_textColor = this->m_textColor;
  m_font = this->m_font;
  v11 = threadToDraw;
  v12 = 2 * (5 * this->m_numLevelsToDisplay + 15);
  ThreadProfilerName = GetThreadProfilerName(threadToDraw);
  v17 = *gfxContext;
  v14 = (float)(v12 / 2) + (float)yPos;
  RB_DrawText(&v17, ThreadProfilerName, m_font, (float)xPos, v14, m_textColor);
  if ( this->m_threadAllocatorOverflow[v11] )
  {
    v15 = this->m_font;
    v17 = *gfxContext;
    RB_DrawText(&v17, "Thread sample allocator ran out of space - make sure you're popping samples properly and/or bump the limit in cpu_timeline_prof.cpp", v15, (float)(2 * headerWidth) + (float)xPos, v14, this->m_errorTextColor);
  }
  return (unsigned int)v12;
}

/*
==============
CPUTimlineProfilerView::DrawTimeScale
==============
*/
void CPUTimlineProfilerView::DrawTimeScale(CPUTimlineProfilerView *this, GfxCmdBufContext *gfxContext, const CPUTimlineProfilerView::TimelineDisplayParams *timelineParams, int xPos, int yPos, int width, int height, int headerWidth)
{
  int v11; 
  __int128 v13; 
  GfxCmdBufContext *v15; 
  bool v16; 
  char v17; 
  int v18; 
  float m_displayRange; 
  char v20; 
  __int128 v21; 
  unsigned __int64 v22; 
  double v23; 
  int v24; 
  int v25; 
  __int128 v27; 
  int v28; 
  int v29; 
  __int64 v31; 
  int v36; 
  __int64 v37; 
  __int64 v38; 
  unsigned __int64 m_displayRangeStartUnshifted; 
  unsigned __int64 v40; 
  __int64 v41; 
  __int128 v44; 
  __int128 v46; 
  float v47; 
  float v48; 
  float v49; 
  GfxFont *m_font; 
  double v56; 
  unsigned __int64 v58; 
  __int128 v59; 
  __int128 v61; 
  __int64 v63; 
  unsigned __int64 v64; 
  __int64 v65; 
  __int64 v67; 
  unsigned __int64 v68; 
  float v69; 
  float v70; 
  float v71; 
  GfxFont *v72; 
  __int64 v73; 
  __int64 v74; 
  unsigned __int64 v75; 
  float v76; 
  GfxFont *v77; 
  GfxColor m_textColor; 
  GfxColor v79; 
  GfxColor v80; 
  unsigned int v81; 
  __int64 v84; 
  GfxCmdBufContext v85; 
  char dest[128]; 
  int v87; 

  _XMM3 = 0i64;
  __asm { vroundss xmm2, xmm3, xmm1, 1 }
  v11 = (int)*(float *)&_XMM2;
  __asm { vroundss xmm2, xmm3, xmm1, 1 }
  v13 = LODWORD(FLOAT_0_000099999997);
  v15 = gfxContext;
  if ( v11 > 255 )
    v11 = 255;
  v16 = v11 < 0;
  v17 = v11;
  v18 = (int)*(float *)&_XMM2;
  m_displayRange = this->m_displayRange;
  if ( v16 )
    v17 = 0;
  LOBYTE(v81) = v17;
  if ( v18 > 255 )
    v18 = 255;
  BYTE1(v81) = v17;
  BYTE2(v81) = v17;
  v20 = v18;
  if ( v18 < 0 )
    v20 = 0;
  HIBYTE(v81) = v20;
  if ( (float)(m_displayRange * 10000.0) > 15.0 )
  {
    do
    {
      v21 = v13;
      *(float *)&v21 = *(float *)&v13 * 5.0;
      v13 = v21;
    }
    while ( (float)(m_displayRange / *(float *)&v21) > 15.0 );
  }
  v22 = 0i64;
  v23 = msecPerRawTimerTick;
  v24 = headerWidth;
  v25 = width - headerWidth;
  *((_QWORD *)&v27 + 1) = *((_QWORD *)&v13 + 1);
  *(double *)&v27 = *(float *)&v13 / msecPerRawTimerTick;
  _XMM3 = v27;
  v87 = width - headerWidth;
  if ( *(double *)&v27 >= 9.223372036854776e18 )
  {
    *(double *)&v27 = *(double *)&v27 - 9.223372036854776e18;
    _XMM3 = v27;
    if ( *(double *)&v27 < 9.223372036854776e18 )
      v22 = 0x8000000000000000ui64;
  }
  v28 = height;
  v29 = yPos;
  __asm { vcvttsd2si r13, xmm3 }
  v31 = v22 + _R13;
  _XMM2 = 0i64;
  __asm { vroundss xmm2, xmm2, xmm1, 2 }
  _XMM1 = 0i64;
  __asm { vroundss xmm1, xmm1, xmm0, 1 }
  v36 = (int)*(float *)&_XMM1;
  if ( (int)*(float *)&_XMM1 <= (int)*(float *)&_XMM2 )
  {
    v37 = v31 * v36;
    v38 = (unsigned int)((int)*(float *)&_XMM2 - v36 + 1);
    do
    {
      m_displayRangeStartUnshifted = timelineParams->m_displayRangeStartUnshifted;
      v40 = m_displayRangeStartUnshifted + v37;
      if ( m_displayRangeStartUnshifted + v37 <= timelineParams->m_displayRangeEnd && v40 >= timelineParams->m_displayRangeStart )
      {
        v41 = v37;
        _XMM0 = 0i64;
        if ( v40 <= m_displayRangeStartUnshifted )
          v41 = -v37;
        __asm { vcvtsi2sd xmm0, xmm0, rcx }
        if ( v41 < 0 )
        {
          *((_QWORD *)&v44 + 1) = *((_QWORD *)&_XMM0 + 1);
          *(double *)&v44 = *(double *)&_XMM0 + 1.844674407370955e19;
          _XMM0 = v44;
        }
        *((_QWORD *)&v46 + 1) = *((_QWORD *)&_XMM0 + 1);
        *(double *)&v46 = *(double *)&_XMM0 * v23;
        _XMM8 = v46;
        v47 = (float)((float)((float)(int)(v40 - timelineParams->m_displayRangeStart) / timelineParams->m_displayRangeTicks) * (float)v25) + (float)((float)xPos + (float)v24);
        v48 = (float)v28;
        v49 = (float)v29;
        v85 = *gfxContext;
        RB_DrawStretchPic(&v85, rgp.whiteMaterial, v47, (float)v29, 1.0, (float)v28, 0.0, 0.0, 1.0, 1.0, v81, GFX_PRIM_STATS_DEBUG);
        _XMM0 = v40 ^ 0x8000000000000000ui64;
        __asm
        {
          vpcmpgtq xmm1, xmm0, xmm1
          vxorpd  xmm2, xmm8, xmm15
          vblendvpd xmm1, xmm2, xmm8, xmm1
          vcvtsd2ss xmm0, xmm1, xmm1
        }
        Com_sprintf(dest, 0x80ui64, "%.4f ms", *(float *)&_XMM0);
        m_font = this->m_font;
        m_textColor = this->m_textColor;
        v85 = *gfxContext;
        RB_DrawText(&v85, dest, m_font, v47, v49 + v48, m_textColor);
        v23 = msecPerRawTimerTick;
        v25 = v87;
        v24 = headerWidth;
        v28 = height;
        v29 = yPos;
      }
      v37 += v31;
      --v38;
    }
    while ( v38 );
    v15 = gfxContext;
  }
  v56 = 1.0 / v23;
  _XMM1 = COERCE_UNSIGNED_INT64(1.0 / v23 * 16.66670036315918);
  v58 = 0i64;
  if ( 1.0 / v23 * 16.66670036315918 >= 9.223372036854776e18 )
  {
    *((_QWORD *)&v59 + 1) = 0i64;
    *(double *)&v59 = *(double *)&_XMM1 - 9.223372036854776e18;
    _XMM1 = v59;
    if ( *(double *)&v59 < 9.223372036854776e18 )
      v58 = 0x8000000000000000ui64;
  }
  *((_QWORD *)&v61 + 1) = 0i64;
  *(double *)&v61 = v56 * 33.33330154418945;
  _XMM0 = v61;
  __asm { vcvttsd2si rbp, xmm1 }
  v63 = v58 + _RBP;
  v64 = 0i64;
  if ( v56 * 33.33330154418945 >= 9.223372036854776e18 )
  {
    *(double *)&v61 = *(double *)&v61 - 9.223372036854776e18;
    _XMM0 = v61;
    if ( *(double *)&v61 < 9.223372036854776e18 )
      v64 = 0x8000000000000000ui64;
  }
  v65 = 12i64;
  __asm { vcvttsd2si r14, xmm0 }
  v84 = v64 + _R14;
  v67 = -6 * v63;
  do
  {
    v68 = v67 + timelineParams->m_displayRangeStartUnshifted;
    if ( v67 && v68 <= timelineParams->m_displayRangeEnd && v68 >= timelineParams->m_displayRangeStart )
    {
      v69 = (float)((float)((float)(int)(v68 - timelineParams->m_displayRangeStart) / timelineParams->m_displayRangeTicks) * (float)v25) + (float)((float)xPos + (float)v24);
      v70 = (float)v28;
      v71 = (float)v29;
      v85 = *v15;
      RB_DrawStretchPic(&v85, rgp.whiteMaterial, v69, (float)v29, 1.0, (float)v28, 0.0, 0.0, 1.0, 1.0, 0xFFFF0000, GFX_PRIM_STATS_DEBUG);
      v72 = this->m_font;
      v79 = this->m_textColor;
      v85 = *v15;
      RB_DrawText(&v85, "60Hz", v72, v69 + 5.0, (float)(v71 + v70) + 20.0, v79);
    }
    v25 = v87;
    v67 += v63;
    v24 = headerWidth;
    v28 = height;
    v29 = yPos;
    --v65;
  }
  while ( v65 );
  v73 = 6i64;
  v74 = -3 * v84;
  do
  {
    v75 = v74 + timelineParams->m_displayRangeStartUnshifted;
    if ( v74 && v75 <= timelineParams->m_displayRangeEnd && v75 >= timelineParams->m_displayRangeStart )
    {
      v76 = (float)((float)((float)(int)(v75 - timelineParams->m_displayRangeStart) / timelineParams->m_displayRangeTicks) * (float)v87) + (float)((float)xPos + (float)headerWidth);
      v85 = *v15;
      RB_DrawStretchPic(&v85, rgp.whiteMaterial, v76, (float)yPos, 1.0, (float)height, 0.0, 0.0, 1.0, 1.0, 0xFF00FF00, GFX_PRIM_STATS_DEBUG);
      v77 = this->m_font;
      v80 = this->m_textColor;
      v85 = *v15;
      RB_DrawText(&v85, "30Hz", v77, v76 + 5.0, (float)((float)yPos + (float)height) + 32.0, v80);
    }
    v74 += v84;
    --v73;
  }
  while ( v73 );
}

/*
==============
CPUTimlineProfilerView::FlushProfilerBars
==============
*/
void CPUTimlineProfilerView::FlushProfilerBars(CPUTimlineProfilerView *this, GfxCmdBufContext *gfxContext, unsigned int firstBar, unsigned int lastBar)
{
  __int128 v4; 
  __int128 v5; 
  GfxCmdBufSourceState *source; 
  float renderTargetWidth; 
  float renderTargetHeight; 
  __int64 v11; 
  __int64 v12; 
  float v13; 
  float v14; 
  GfxCmdBufInput *p_input; 
  GfxCmdBufState *state; 
  ID3D12Resource *m_singleBarVerts; 
  GfxCmdBufState *v18; 
  __int64 viewStatsTarget; 
  int endSwapFrame; 
  GfxCmdBufContext v21; 
  GfxDrawPrimArgs args; 
  __int128 v23; 
  __int128 v24; 

  source = gfxContext->source;
  v24 = v4;
  v23 = v5;
  renderTargetWidth = (float)source->renderTargetWidth;
  renderTargetHeight = (float)source->renderTargetHeight;
  v11 = lastBar;
  v12 = firstBar;
  R_Set2D(source);
  source->input.consts[5].v[0] = renderTargetWidth;
  source->input.consts[5].v[1] = renderTargetHeight;
  source->input.consts[5].v[2] = 1.0 / renderTargetWidth;
  source->input.consts[5].v[3] = 1.0 / renderTargetHeight;
  ++source->constVersions[5];
  *(_QWORD *)&source->input.consts[150].xyz.z = 0i64;
  v13 = (float)v11;
  source->input.consts[150].v[1] = v13;
  v14 = (float)v12;
  source->input.consts[150].v[0] = v14;
  ++source->constVersions[150];
  p_input = &source->input;
  if ( !p_input && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_state.h", 1494, ASSERT_TYPE_ASSERT, "(input)", (const char *)&queryFormat, "input") )
    __debugbreak();
  p_input->codeBuffers[45] = &this->m_rectsToDrawBuffer;
  state = gfxContext->state;
  if ( R_BeginMaterial(state, rgp.cpuTimelineProfilerBarMaterial, TECHNIQUE_EMISSIVE) )
  {
    v21 = *gfxContext;
    if ( R_SetupPass(&v21) )
    {
      v21 = *gfxContext;
      R_SetupPassStableArgsInternal(&v21, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_cpu_timeline_prof_view.cpp(942)");
      v21 = *gfxContext;
      R_SetupPassPerObjectArgsInternal(&v21, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_cpu_timeline_prof_view.cpp(943)");
      v21 = *gfxContext;
      R_SetupPassPerPrimArgsInternal(&v21, "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_cpu_timeline_prof_view.cpp(944)");
      R_SetIndicesWithType(state, this->m_singleBarIndices, DXGI_FORMAT_R16_UINT);
      m_singleBarVerts = this->m_singleBarVerts;
      v18 = state;
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
      viewStatsTarget = gfxContext->source->viewStatsTarget;
      endSwapFrame = gfxContext->source->input.data->endSwapFrame;
      args.vertexCount = 4;
      *(_QWORD *)&args.primCount = 2i64;
      args.vertIndexBase = 0;
      args.trackFrameIndex = endSwapFrame;
      if ( ((int)viewStatsTarget < -128 || (int)viewStatsTarget > 127) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "char __cdecl truncate_cast_impl<char,enum GfxViewStatsTarget>(enum GfxViewStatsTarget)", "signed", (char)viewStatsTarget, "signed", viewStatsTarget) )
      {
        __debugbreak();
        v18 = gfxContext->state;
      }
      args.viewStatsTarget = viewStatsTarget;
      *(_WORD *)&args.primStatsTarget = 8;
      R_DrawInstancedIndexedPrimitive(v18, &args, v11 - v12);
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
  double v8; 
  __int128 v10; 
  __int128 v13; 
  unsigned __int64 v15; 

  _XMM0 = 0i64;
  __asm { vcvtsi2sd xmm0, xmm0, rax }
  _XMM1 = 0i64;
  __asm { vcvtsi2sd xmm1, xmm1, r8 }
  _XMM2 = 0i64;
  v8 = *(double *)&_XMM1 / *(double *)&_XMM0;
  __asm { vcvtsi2sd xmm2, xmm2, rax }
  if ( (gpuFrame->m_gpuFrameStartCpuRaw & 0x8000000000000000ui64) != 0i64 )
  {
    *((_QWORD *)&v10 + 1) = *((_QWORD *)&_XMM2 + 1);
    *(double *)&v10 = *(double *)&_XMM2 + 1.844674407370955e19;
    _XMM2 = v10;
  }
  _XMM0 = 0i64;
  __asm { vcvtsi2sd xmm0, xmm0, rax }
  *((_QWORD *)&v13 + 1) = *((_QWORD *)&_XMM2 + 1);
  if ( (gpuFrame->m_gpuFrameEndCpuRaw & 0x8000000000000000ui64) != 0i64 )
    *(double *)&_XMM0 = *(double *)&_XMM0 + 1.844674407370955e19;
  *(double *)&v13 = *(double *)&_XMM2 * (1.0 - v8) + *(double *)&_XMM0 * v8;
  _XMM1 = v13;
  v15 = 0i64;
  if ( *(double *)&v13 >= 9.223372036854776e18 )
  {
    *(double *)&v13 = *(double *)&v13 - 9.223372036854776e18;
    _XMM1 = v13;
    if ( *(double *)&v13 < 9.223372036854776e18 )
      v15 = 0x8000000000000000ui64;
  }
  __asm { vcvttsd2si rax, xmm1 }
  return v15 + _RAX;
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
  const unsigned __int8 *v1; 
  int v2; 
  int v3; 
  float *v4; 
  int v5; 
  __int128 v6; 
  __int64 v7; 
  unsigned int v8; 
  float v9; 
  __int128 v10; 
  unsigned int v15; 

  v1 = &kColors[1][1];
  LOBYTE(v2) = 76;
  LOBYTE(v3) = -1;
  v4 = (float *)&kThresholds[1];
  LOBYTE(v5) = 76;
  HIBYTE(v15) = -1;
  v6 = *(_OWORD *)&score;
  v7 = 3i64;
  do
  {
    v8 = *(v1 - 1);
    v1 += 3;
    v9 = *v4 - *(v4 - 1);
    v10 = v6;
    *(float *)&v10 = *(float *)&v6 - *(v4++ - 1);
    *(float *)&v10 = *(float *)&v10 / v9;
    _XMM2 = v10;
    __asm
    {
      vmaxss  xmm0, xmm2, xmm7
      vminss  xmm3, xmm0, xmm5
    }
    v2 = (int)(float)((float)(_mm_cvtepi32_ps((__m128i)v8).m128_f32[0] * *(float *)&_XMM3) + (float)(_mm_cvtepi32_ps((__m128i)(unsigned __int8)v2).m128_f32[0] * (float)(1.0 - *(float *)&_XMM3)));
    LOBYTE(v15) = v2;
    v3 = (int)(float)((float)(_mm_cvtepi32_ps((__m128i)(unsigned __int8)v3).m128_f32[0] * (float)(1.0 - *(float *)&_XMM3)) + (float)(_mm_cvtepi32_ps((__m128i)*(v1 - 3)).m128_f32[0] * *(float *)&_XMM3));
    BYTE1(v15) = v3;
    v5 = (int)(float)((float)(_mm_cvtepi32_ps((__m128i)*(v1 - 2)).m128_f32[0] * *(float *)&_XMM3) + (float)(_mm_cvtepi32_ps((__m128i)(unsigned __int8)v5).m128_f32[0] * (float)(1.0 - *(float *)&_XMM3)));
    BYTE2(v15) = v5;
    --v7;
  }
  while ( v7 );
  return v15;
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
  cpuTimelineProfiler_BreakpointEnabled = Dvar_RegisterEnum("NSRTTKORQO", CPUTimlineProfilerView::CPU_TIMELINE_PROFILER_BREAKPOINT_MODE_NAMES, 0, 4u, "Enable cpu timeline profiler breakpoint");
  cpuTimelineProfiler_BreakpointThreshold = Dvar_RegisterFloat("PNTNTTORS", 33.299999, 1.0, 1000.0, 4u, "Cpu timeline profiler breakpoint threshold");
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
  _QWORD *v4; 
  _QWORD *v5; 
  _DWORD *v6; 
  GfxBufferCreationContext v7; 

  if ( g_cpuProfiler.m_enabled )
  {
    v2 = (unsigned __int8 *)PMem_Alloc(0x753000ui64, 0x10000ui64, MEM_POOL_MAIN, PMEM_STACK_GAME, "Cpu profiler samples");
    CPUTimelineProfiler::Samples::Init(&this->m_displayedSamples, v2, 80000);
    v3 = (unsigned __int8 *)PMem_Alloc(0x2580ui64, 0x10000ui64, MEM_POOL_MAIN, PMEM_STACK_GAME, "Cpu profiler events");
    CPUTimelineProfiler::Events::Init(&this->m_displayedEvents, v3, 200);
    if ( g_cpuProfiler.m_enabled )
      R_CreateGfxWrappedBuffer(&this->m_rectsToDrawBuffer, GfxWrappedBuffer_Structured, 16, 0x3A980u, GFX_DATA_FORMAT_R32_UINT, 4u, D3D12_RESOURCE_STATE_GENERIC_READ, NULL, NULL, "profiler bars");
  }
  v7.objectName = "bar vb";
  v7.zoneName = "cpu timeline profiler";
  v4 = R_AllocStaticVertexBuffer(&this->m_singleBarVerts, 64, &v7);
  v7.zoneName = "cpu timeline profiler";
  v5 = v4;
  v7.objectName = "bar ib";
  v6 = R_AllocStaticIndexBuffer(&this->m_singleBarIndices, 12, &v7);
  *v5 = 0i64;
  v5[1] = 0i64;
  v5[2] = 1065353216i64;
  v5[3] = 0i64;
  *((_DWORD *)v5 + 8) = 0;
  *((_DWORD *)v5 + 11) = 0;
  *((_DWORD *)v5 + 15) = 0;
  *(_QWORD *)((char *)v5 + 36) = 1065353216i64;
  *((_DWORD *)v5 + 12) = 1065353216;
  *(_QWORD *)((char *)v5 + 52) = 1065353216i64;
  *v6 = 0x20000;
  v6[1] = 65537;
  v6[2] = 196610;
}

/*
==============
CPUTimlineProfilerView::InitRenderRecources
==============
*/
void CPUTimlineProfilerView::InitRenderRecources(CPUTimlineProfilerView *this)
{
  _QWORD *v2; 
  _QWORD *v3; 
  _DWORD *v4; 
  GfxBufferCreationContext v5; 

  if ( g_cpuProfiler.m_enabled )
    R_CreateGfxWrappedBuffer(&this->m_rectsToDrawBuffer, GfxWrappedBuffer_Structured, 16, 0x3A980u, GFX_DATA_FORMAT_R32_UINT, 4u, D3D12_RESOURCE_STATE_GENERIC_READ, NULL, NULL, "profiler bars");
  v5.objectName = "bar vb";
  v5.zoneName = "cpu timeline profiler";
  v2 = R_AllocStaticVertexBuffer(&this->m_singleBarVerts, 64, &v5);
  v5.zoneName = "cpu timeline profiler";
  v3 = v2;
  v5.objectName = "bar ib";
  v4 = R_AllocStaticIndexBuffer(&this->m_singleBarIndices, 12, &v5);
  *v3 = 0i64;
  v3[1] = 0i64;
  v3[2] = 1065353216i64;
  v3[3] = 0i64;
  *((_DWORD *)v3 + 8) = 0;
  *((_DWORD *)v3 + 11) = 0;
  *((_DWORD *)v3 + 15) = 0;
  *(_QWORD *)((char *)v3 + 36) = 1065353216i64;
  *((_DWORD *)v3 + 12) = 1065353216;
  *(_QWORD *)((char *)v3 + 52) = 1065353216i64;
  *v4 = 0x20000;
  v4[1] = 65537;
  v4[2] = 196610;
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
  double v11; 
  CPUTimlineProfilerView::GPUFrame *v13; 
  unsigned __int64 v14; 
  __int128 v17; 
  unsigned __int64 v19; 
  unsigned __int64 v20; 
  __int128 v24; 
  unsigned int i; 
  int m_numProfileSamples; 
  signed int j; 
  __int64 v30; 

  if ( !this->m_paused )
  {
    _XMM0 = 0i64;
    __asm { vcvtsi2sd xmm0, xmm0, rax }
    if ( (frameSyncMarkerCpuRaw & 0x8000000000000000ui64) != 0i64 )
      *(double *)&_XMM0 = *(double *)&_XMM0 + 1.844674407370955e19;
    v11 = *(double *)&_XMM0 * usecPerRawTimerTick;
    _XMM0 = 0i64;
    v13 = &this->m_gpuFrames[this->m_gpuFrameWritePtr % 4];
    v14 = 0i64;
    v13->m_gpuFrameStartGpuUs = frameStartTimeGpuUs;
    __asm { vcvtsi2sd xmm0, xmm0, rdx }
    *((_QWORD *)&v17 + 1) = *((_QWORD *)&_XMM0 + 1);
    v13->m_gpuFrameEndGpuUs = frameEndTimeGpuUs;
    *(double *)&v17 = (*(double *)&_XMM0 + v11) / usecPerRawTimerTick;
    _XMM3 = v17;
    if ( *(double *)&v17 >= 9.223372036854776e18 )
    {
      *(double *)&v17 = *(double *)&v17 - 9.223372036854776e18;
      _XMM3 = v17;
      if ( *(double *)&v17 < 9.223372036854776e18 )
        v14 = 0x8000000000000000ui64;
    }
    __asm { vcvttsd2si rax, xmm3 }
    v19 = v14 + _RAX;
    v20 = 0i64;
    _XMM0 = 0i64;
    __asm { vcvtsi2sd xmm0, xmm0, r8 }
    *((_QWORD *)&v24 + 1) = *((_QWORD *)&_XMM0 + 1);
    v13->m_gpuFrameStartCpuRaw = v19;
    *(double *)&v24 = (*(double *)&_XMM0 + v11) / usecPerRawTimerTick;
    _XMM3 = v24;
    if ( *(double *)&v24 >= 9.223372036854776e18 )
    {
      *(double *)&v24 = *(double *)&v24 - 9.223372036854776e18;
      _XMM3 = v24;
      if ( *(double *)&v24 < 9.223372036854776e18 )
        v20 = 0x8000000000000000ui64;
    }
    __asm { vcvttsd2si rax, xmm3 }
    v13->m_numProfileSamples = 0;
    v13->m_gpuFrameEndCpuRaw = v20 + _RAX;
    for ( i = 0; i < 0x81; ++i )
    {
      m_numProfileSamples = v13->m_numProfileSamples;
      if ( m_numProfileSamples >= 2064 )
        break;
      for ( j = 0; j < (signed int)timers->rangeCount; ++j )
      {
        v30 = m_numProfileSamples;
        v13->m_profileSamples[v30].m_timer = i;
        v13->m_profileSamples[v30].m_startUs = timerRangesStart[j + timers->firstRange];
        v13->m_profileSamples[v30].m_endUs = timerRangesEnd[j + timers->firstRange];
        m_numProfileSamples = v13->m_numProfileSamples + 1;
        v13->m_numProfileSamples = m_numProfileSamples;
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
  GfxCmdBufContext v2; 

  Sys_ProfBeginNamedEvent(0xFFC0C0C0, "draw profiler");
  v2 = *gfxContext;
  CPUTimlineProfilerView::UpdateAndDraw(&g_cpuTimelineProfilerView, &v2);
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
void CPUTimlineProfilerView::SetBreakpointThreshold(CPUTimlineProfilerView *this, float threshold)
{
  this->m_breakpointThreshold = threshold;
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
  int v5; 
  int v6; 
  unsigned int WheelDelta; 
  int m_xPos; 
  double v9; 
  int v10; 
  int v11; 
  bool *p_breakpointTriggered; 
  __int64 v13; 
  CPUTimlineProfilerView::BreakpointMode m_breakpointMode; 
  int v15; 
  char *v16; 
  __int64 v17; 
  __int128 v20; 
  __int128 v22; 
  __int64 v24; 
  unsigned __int64 v25; 
  unsigned __int64 v26; 
  int x; 
  int y[3]; 
  unsigned __int64 frameStart[32]; 
  bool breakpointTriggered; 
  char v32; 

  Sys_ProfBeginNamedEvent(0xFFF5F5DC, "profiler update");
  m_pausedTime = 0i64;
  v5 = 1;
  v6 = 2;
  if ( DevMouse::WasButtonReleased(&g_devMouse, MOUSEBUTTON_MIDDLE) )
  {
    if ( this->m_paused )
    {
      this->m_paused = 0;
      this->m_breakpointHit = 0;
    }
    else
    {
      this->m_pauseRequested = 1;
    }
  }
  else if ( DevMouse::WasButtonReleased(&g_devMouse, MOUSEBUTTON_RIGHT) )
  {
    *(_QWORD *)&this->m_displayRange = 1101004800i64;
  }
  else if ( DevMouse::IsButtonDown(&g_devMouse, MOUSEBUTTON_LEFT) )
  {
    this->m_displayShift = this->m_displayShift - (float)((float)((float)DevMouse::GetMousePosDeltaX(&g_devMouse) * this->m_displayRange) / (float)this->m_barsAreaWidth);
  }
  WheelDelta = DevMouse::GetWheelDelta(&g_devMouse);
  if ( WheelDelta )
  {
    x = 0;
    y[0] = 0;
    DevMouse::GetMousePos(&g_devMouse, &x, y);
    m_xPos = this->m_xPos;
    if ( x >= m_xPos && x <= m_xPos + this->m_barsAreaWidth + this->m_headerWidth )
    {
      v9 = I_fclamp((float)((float)(_mm_cvtepi32_ps((__m128i)WheelDelta).m128_f32[0] * 0.050000001) + 1.0) * this->m_displayRange, 0.003, 60.0);
      this->m_displayShift = (float)((float)(_mm_cvtepi32_ps((__m128i)(unsigned int)(x - this->m_xPos)).m128_f32[0] * (float)(this->m_displayRange - *(float *)&v9)) / _mm_cvtepi32_ps((__m128i)(unsigned int)this->m_barsAreaWidth).m128_f32[0]) + this->m_displayShift;
      this->m_displayRange = *(float *)&v9;
    }
  }
  if ( this->m_paused )
  {
    m_pausedTime = this->m_pausedTime;
    goto LABEL_39;
  }
  if ( numFramesToConsume <= 0 )
  {
    m_pausedTime = this->m_prevDisplayRangeStart;
    goto LABEL_39;
  }
  v10 = numFramesToConsume + 2;
  if ( v10 > 16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\rb_cpu_timeline_prof_view.cpp", 601, ASSERT_TYPE_ASSERT, "(numFramesToProcess <= MAX_PROCESSED_FRAMES)", (const char *)&queryFormat, "numFramesToProcess <= MAX_PROCESSED_FRAMES") )
    __debugbreak();
  v11 = 0;
  if ( v10 > 0 )
  {
    p_breakpointTriggered = &breakpointTriggered;
    v13 = 0i64;
    do
    {
      CPUTimelineProfiler::GetBufferedFrameRange(&g_cpuProfiler, v11++, &frameStart[v13], &frameStart[v13 + 16], p_breakpointTriggered);
      ++v13;
      ++p_breakpointTriggered;
    }
    while ( v11 < v10 );
  }
  m_breakpointMode = this->m_breakpointMode;
  v15 = v10 - 3;
  if ( m_breakpointMode )
  {
    if ( this->m_breakpointHit || v10 <= 2 )
      goto LABEL_39;
    v16 = &v32;
    v17 = 0i64;
    while ( 1 )
    {
      _XMM0 = 0i64;
      __asm { vcvtsi2sd xmm0, xmm0, rax }
      if ( (__int64)(frameStart[v17 + 17] - frameStart[v17 + 1]) < 0 )
      {
        *((_QWORD *)&v20 + 1) = *((_QWORD *)&_XMM0 + 1);
        *(double *)&v20 = *(double *)&_XMM0 + 1.844674407370955e19;
        _XMM0 = v20;
      }
      *((_QWORD *)&v22 + 1) = *((_QWORD *)&_XMM0 + 1);
      *(double *)&v22 = *(double *)&_XMM0 * msecPerRawTimerTick;
      _XMM0 = v22;
      __asm { vcvtsd2ss xmm1, xmm0, xmm0 }
      if ( *(float *)&_XMM1 >= this->m_breakpointThreshold && m_breakpointMode == BREAKPOINT_MODE_TIME_THRESHOLD )
        break;
      if ( *v16 && m_breakpointMode == BREAKPOINT_MODE_CODE_TRIGGERED )
        break;
      ++v5;
      ++v6;
      ++v17;
      ++v16;
      if ( v6 >= v10 )
        goto LABEL_39;
    }
    v15 = v5 - 1;
    this->m_pauseRequested = 1;
    this->m_breakpointMode = BREAKPOINT_MODE_DISABLED;
    this->m_breakpointHit = 1;
  }
  v24 = v15;
  v25 = frameStart[v15 + 18];
  v26 = frameStart[v15];
  Sys_ProfBeginNamedEvent(0xFFFF1493, "profiler copy samples");
  this->m_numDisplayedSamples = CPUTimelineProfiler::GetSamplesForTimeRange(&g_cpuProfiler, v26, v25, &this->m_displayedSamples, 80000, this->m_threadAllocatorOverflow);
  this->m_numDisplayedEvents = CPUTimelineProfiler::GetEventsForTimeRange(&g_cpuProfiler, v26, v25, &this->m_displayedEvents, 200, NULL);
  Sys_ProfEndNamedEvent();
  m_pausedTime = frameStart[v24 + 1];
  if ( this->m_pauseRequested )
  {
    *(_WORD *)&this->m_paused = 1;
    this->m_pausedTime = m_pausedTime;
  }
  this->m_prevDisplayRangeStart = m_pausedTime;
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
  float m_displayRange; 
  unsigned int m_rectsToDrawFramesWritePtr; 
  unsigned int m_rectsToDrawFramesReadPtr; 
  GfxCmdBufContext v13; 

  v2 = cpuTimelineProfiler_Enabled;
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
    if ( v7 != this->m_cpuStatsSet )
    {
      CPUTimelineProfiler::DisableCPUStatsCounters(&g_cpuProfiler);
      CPUTimelineProfiler::EnableCPUStatsCounters(&g_cpuProfiler, v7);
      this->m_cpuStatsSet = v7;
    }
  }
  v8 = CPUTimelineProfiler::GetNumBufferedFrames(&g_cpuProfiler) - 2;
  if ( this->m_enabled )
  {
    if ( g_cpuProfiler.m_enabled )
    {
      v9 = CPUTimlineProfilerView::Update(this, v8);
      if ( (this->m_breakpointMode == BREAKPOINT_MODE_DISABLED || this->m_breakpointHit) && v9 != -1i64 )
      {
        m_displayRange = this->m_displayRange;
        v13 = *gfxContext;
        CPUTimlineProfilerView::Draw(this, &v13, v9, m_displayRange);
      }
    }
    else
    {
      Com_PrintWarning(12, "CPU Profiler disabled.  Please give at least 256MB of Additional Title Memory Mode to allow support.\n");
    }
  }
  for ( ; v8 > 0; --v8 )
    CPUTimelineProfiler::ConsumeFrame(&g_cpuProfiler);
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
  unsigned int WheelDelta; 
  int m_xPos; 
  double v4; 
  int x; 
  int y; 

  if ( DevMouse::WasButtonReleased(&g_devMouse, MOUSEBUTTON_MIDDLE) )
  {
    if ( this->m_paused )
    {
      this->m_paused = 0;
      this->m_breakpointHit = 0;
    }
    else
    {
      this->m_pauseRequested = 1;
    }
  }
  else if ( DevMouse::WasButtonReleased(&g_devMouse, MOUSEBUTTON_RIGHT) )
  {
    *(_QWORD *)&this->m_displayRange = 1101004800i64;
  }
  else if ( DevMouse::IsButtonDown(&g_devMouse, MOUSEBUTTON_LEFT) )
  {
    this->m_displayShift = this->m_displayShift - (float)((float)((float)DevMouse::GetMousePosDeltaX(&g_devMouse) * this->m_displayRange) / (float)this->m_barsAreaWidth);
  }
  WheelDelta = DevMouse::GetWheelDelta(&g_devMouse);
  if ( WheelDelta )
  {
    x = 0;
    y = 0;
    DevMouse::GetMousePos(&g_devMouse, &x, &y);
    m_xPos = this->m_xPos;
    if ( x >= m_xPos && x <= m_xPos + this->m_barsAreaWidth + this->m_headerWidth )
    {
      v4 = I_fclamp((float)((float)(_mm_cvtepi32_ps((__m128i)WheelDelta).m128_f32[0] * 0.050000001) + 1.0) * this->m_displayRange, 0.003, 60.0);
      this->m_displayShift = (float)((float)(_mm_cvtepi32_ps((__m128i)(unsigned int)(x - this->m_xPos)).m128_f32[0] * (float)(this->m_displayRange - *(float *)&v4)) / _mm_cvtepi32_ps((__m128i)(unsigned int)this->m_barsAreaWidth).m128_f32[0]) + this->m_displayShift;
      this->m_displayRange = *(float *)&v4;
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


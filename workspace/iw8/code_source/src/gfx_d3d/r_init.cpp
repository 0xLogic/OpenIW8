/*
==============
R_SupportsWindowedVSyncDisable
==============
*/

bool __fastcall R_SupportsWindowedVSyncDisable()
{
  return ?R_SupportsWindowedVSyncDisable@@YA_NXZ();
}

/*
==============
R_SyncGpu
==============
*/

void R_SyncGpu(void)
{
  ?R_SyncGpu@@YAXXZ();
}

/*
==============
R_InitTessellationState
==============
*/

void R_InitTessellationState(void)
{
  ?R_InitTessellationState@@YAXXZ();
}

/*
==============
R_DeviceExists
==============
*/

bool __fastcall R_DeviceExists()
{
  return ?R_DeviceExists@@YA_NXZ();
}

/*
==============
R_GetCurrentStatTracker
==============
*/

trStatistics_t *__fastcall R_GetCurrentStatTracker()
{
  return ?R_GetCurrentStatTracker@@YAPEAUtrStatistics_t@@XZ();
}

/*
==============
R_TrackStatisticsStop
==============
*/

void R_TrackStatisticsStop(void)
{
  ?R_TrackStatisticsStop@@YAXXZ();
}

/*
==============
R_SyncGPURecordWakeBackend
==============
*/

void R_SyncGPURecordWakeBackend(void)
{
  ?R_SyncGPURecordWakeBackend@@YAXXZ();
}

/*
==============
R_IsGPUHung
==============
*/

bool __fastcall R_IsGPUHung()
{
  return ?R_IsGPUHung@@YA_NXZ();
}

/*
==============
R_SetD3DSwapChainDesc
==============
*/

void __fastcall R_SetD3DSwapChainDesc(DXGI_SWAP_CHAIN_DESC1 *swapChainDesc, const GfxWindowParms *wndParams)
{
  ?R_SetD3DSwapChainDesc@@YAXPEAUDXGI_SWAP_CHAIN_DESC1@@PEBUGfxWindowParms@@@Z(swapChainDesc, wndParams);
}

/*
==============
R_AllocateMinimalResources
==============
*/

void R_AllocateMinimalResources(void)
{
  ?R_AllocateMinimalResources@@YAXXZ();
}

/*
==============
R_FatalInitError
==============
*/

void __fastcall R_FatalInitError(const char *msg)
{
  ?R_FatalInitError@@YAXPEBD@Z(msg);
}

/*
==============
R_SyncGPURecordFrameStatistics
==============
*/

void __fastcall R_SyncGPURecordFrameStatistics(unsigned int currFrame, unsigned int frameCount, const _DXGIX_FRAME_STATISTICS *statistics)
{
  ?R_SyncGPURecordFrameStatistics@@YAXIIPEBU_DXGIX_FRAME_STATISTICS@@@Z(currFrame, frameCount, statistics);
}

/*
==============
R_GetSurfPosStats
==============
*/

void __fastcall R_GetSurfPosStats(unsigned int *stats)
{
  ?R_GetSurfPosStats@@YAXPEAI@Z(stats);
}

/*
==============
R_ResetGPUHangDetection
==============
*/

void __fastcall R_ResetGPUHangDetection(unsigned int enterTime)
{
  ?R_ResetGPUHangDetection@@YAXI@Z(enterTime);
}

/*
==============
R_IsHiDef
==============
*/

int __fastcall R_IsHiDef()
{
  return ?R_IsHiDef@@YAHXZ();
}

/*
==============
R_EndRegistration
==============
*/

void R_EndRegistration(void)
{
  ?R_EndRegistration@@YAXXZ();
}

/*
==============
R_ShutdownStreams
==============
*/

void R_ShutdownStreams(void)
{
  ?R_ShutdownStreams@@YAXXZ();
}

/*
==============
R_LogGpuPipelineStats
==============
*/

void R_LogGpuPipelineStats(void)
{
  ?R_LogGpuPipelineStats@@YAXXZ();
}

/*
==============
R_Shutdown
==============
*/

void __fastcall R_Shutdown(int destroyWindow, int isRestart)
{
  ?R_Shutdown@@YAXHH@Z(destroyWindow, isRestart);
}

/*
==============
R_UpdateTeamColors
==============
*/

void __fastcall R_UpdateTeamColors(const vec4_t *colorMyTeam, const vec4_t *colorEnemyTeam, const vec4_t *colorMyParty)
{
  ?R_UpdateTeamColors@@YAXAEBTvec4_t@@00@Z(colorMyTeam, colorEnemyTeam, colorMyParty);
}

/*
==============
R_IsAnalysisToolPresent
==============
*/

bool __fastcall R_IsAnalysisToolPresent()
{
  return ?R_IsAnalysisToolPresent@@YA_NXZ();
}

/*
==============
R_FatalResourceError
==============
*/

void __fastcall R_FatalResourceError(HRESULT hr)
{
  ?R_FatalResourceError@@YAXJ@Z(hr);
}

/*
==============
R_TrackStatistics
==============
*/

void R_TrackStatistics(void)
{
  ?R_TrackStatistics@@YAXXZ();
}

/*
==============
R_InitDevice
==============
*/

void R_InitDevice(void)
{
  ?R_InitDevice@@YAXXZ();
}

/*
==============
R_XB3_GpuHangBeginCallback
==============
*/

unsigned int __fastcall R_XB3_GpuHangBeginCallback(unsigned __int64 flags)
{
  return ?R_XB3_GpuHangBeginCallback@@YAI_K@Z(flags);
}

/*
==============
R_NotifyZoneUnload
==============
*/

void __fastcall R_NotifyZoneUnload(XZoneHandleUnique zone)
{
  ?R_NotifyZoneUnload@@YAXUXZoneHandleUnique@@@Z(zone);
}

/*
==============
R_XB3_GpuHangPrintCallback
==============
*/

void __fastcall R_XB3_GpuHangPrintCallback(const char *strLine)
{
  ?R_XB3_GpuHangPrintCallback@@YAXPEBD@Z(strLine);
}

/*
==============
R_SyncGPURecordBeginBackend
==============
*/

void __fastcall R_SyncGPURecordBeginBackend(unsigned int frame)
{
  ?R_SyncGPURecordBeginBackend@@YAXI@Z(frame);
}

/*
==============
R_CheckForGPUHang
==============
*/

void __fastcall R_CheckForGPUHang(bool fromWorker)
{
  ?R_CheckForGPUHang@@YAX_N@Z(fromWorker);
}

/*
==============
R_BeginRegistration
==============
*/

void __fastcall R_BeginRegistration(vidConfig_t *vidConfigOut)
{
  ?R_BeginRegistration@@YAXPEAUvidConfig_t@@@Z(vidConfigOut);
}

/*
==============
R_InitResolutionDependentGfxSystems
==============
*/

void __fastcall R_InitResolutionDependentGfxSystems(bool reconfigure)
{
  ?R_InitResolutionDependentGfxSystems@@YAX_N@Z(reconfigure);
}

/*
==============
R_SupportsFullscreenExclusiveMode
==============
*/

bool __fastcall R_SupportsFullscreenExclusiveMode()
{
  return ?R_SupportsFullscreenExclusiveMode@@YA_NXZ();
}

/*
==============
R_ErrorDescription
==============
*/

const char *__fastcall R_ErrorDescription(HRESULT hr)
{
  return ?R_ErrorDescription@@YAPEBDJ@Z(hr);
}

/*
==============
R_SwapCallback
==============
*/

void R_SwapCallback(void)
{
  ?R_SwapCallback@@YAXXZ();
}

/*
==============
R_InitOnce
==============
*/

void R_InitOnce(void)
{
  ?R_InitOnce@@YAXXZ();
}

/*
==============
R_XB3_GpuHangDumpCallback
==============
*/

void __fastcall R_XB3_GpuHangDumpCallback(const wchar_t *strFileName)
{
  ?R_XB3_GpuHangDumpCallback@@YAXPEB_W@Z(strFileName);
}

/*
==============
R_FlushSwap
==============
*/

void R_FlushSwap(void)
{
  ?R_FlushSwap@@YAXXZ();
}

/*
==============
R_ComErrorCleanup
==============
*/

void __fastcall R_ComErrorCleanup(int force)
{
  ?R_ComErrorCleanup@@YAXH@Z(force);
}

/*
==============
R_SetGPUFrameWait
==============
*/

void __fastcall R_SetGPUFrameWait(int gpuFrameWait)
{
  ?R_SetGPUFrameWait@@YAXH@Z(gpuFrameWait);
}

/*
==============
R_RegisterRenderFrame
==============
*/

void R_RegisterRenderFrame(void)
{
  ?R_RegisterRenderFrame@@YAXXZ();
}

/*
==============
R_IsIncompatibleOverlayPresent
==============
*/

bool __fastcall R_IsIncompatibleOverlayPresent()
{
  return ?R_IsIncompatibleOverlayPresent@@YA_NXZ();
}

/*
==============
R_ConfigureRenderer
==============
*/

void __fastcall R_ConfigureRenderer(const GfxConfiguration *config)
{
  ?R_ConfigureRenderer@@YAXPEBUGfxConfiguration@@@Z(config);
}

/*
==============
R_GetAspectRatio
==============
*/

double __fastcall R_GetAspectRatio(GfxAspectRatio aspectRatio)
{
  double result; 

  *(float *)&result = ?R_GetAspectRatio@@YAMW4GfxAspectRatio@@@Z(aspectRatio);
  return result;
}

/*
==============
R_QueueFlipCallback
==============
*/

void __fastcall R_QueueFlipCallback(unsigned int frame)
{
  ?R_QueueFlipCallback@@YAXI@Z(frame);
}

/*
==============
R_AllocateMinimalResources
==============
*/
void R_AllocateMinimalResources(void)
{
  g_allocateMinimalResources = 1;
}

/*
==============
R_BeginRegistration
==============
*/
void R_BeginRegistration(vidConfig_t *vidConfigOut)
{
  R_SyncRenderThread();
  if ( !vidConfigOut && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_init.cpp", 8076, ASSERT_TYPE_ASSERT, "(vidConfigOut)", (const char *)&queryFormat, "vidConfigOut") )
    __debugbreak();
  Com_Printf(8, "----- R_Init -----\n");
  if ( !r_glob.mainThreadHasOwnership && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_init.cpp", 7878, ASSERT_TYPE_ASSERT, "(r_glob.mainThreadHasOwnership)", (const char *)&queryFormat, "r_glob.mainThreadHasOwnership") )
    __debugbreak();
  Swap_Init();
  R_RegisterDvars();
  R_RegisterCmds();
  R_RegisterTestmonkeyCmds();
  memset_0(&rg, 0, sizeof(rg));
  memset_0(&rgp, 0, sizeof(rgp));
  RB_InitBackendGlobalStructs();
  g_drawConsts.identityPlacement = (GfxScaledPlacement)_ymm;
  MatrixIdentity44(&rg.identityViewParms.viewMatrix.m);
  MatrixIdentity44(&rg.identityViewParms.projectionMatrix.m);
  MatrixIdentity44(&rg.identityViewParms.viewProjectionMatrix.m);
  MatrixIdentity44(&rg.identityViewParms.inverseViewProjectionMatrix.m);
  R_WarnInit();
  R_InitFrontEndDvars();
  R_InitGraphicsApi(vidConfigOut);
  RB_RegisterBackendAssets();
  g_gpuFrameWait = 1;
  CPUTimelineProfilerView_Init();
  if ( !g_dx.d3d12device && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_init.cpp", 8081, ASSERT_TYPE_ASSERT, "(g_dx.d3d12device)", (const char *)&queryFormat, "g_dx.d3d12device") )
    __debugbreak();
  r_glob.startedRenderThread = 1;
  R_ReleaseThreadOwnership();
}

/*
==============
R_CheckForGPUHang
==============
*/
void R_CheckForGPUHang(bool fromWorker)
{
  int v1; 
  int v2; 

  v1 = 0;
  if ( Sys_ProfIsCapturing() || R_ProfIsCapturing() )
  {
    s_gpuSyncStartMs = Sys_Milliseconds();
    v1 = 1;
  }
  v2 = Sys_Milliseconds();
  if ( !v1 && v2 - s_gpuSyncStartMs > s_gpuSyncTimeout )
  {
    if ( r_deviceDebug->current.enabled || !IsDebuggerPresent() || R_TG_GpuStatus_Testing() )
    {
      if ( s_gpuHung )
        return;
      s_gpuHung = 1;
      if ( MemCard_LargeFileBuffer_GetCommitSize() && !G_SaveMemory_CheckSaveComplete() )
      {
        do
          Sys_Sleep(1);
        while ( !G_SaveMemory_CheckSaveComplete() );
      }
      ((void (__fastcall *)(ID3D12Device *, __int64))g_dx.d3d12device->m_pFunction[17].QueryInterface)(g_dx.d3d12device, 1i64);
    }
    else
    {
      Com_Printf(8, "Warning: Potential GPU timeout event skipped due to an attached Debugger.  Run without the debugger attached to, or set 'r_deviceDebug' to '1', if the game is hung and you want to generate a GPU dump here.\n");
      R_BackendGpuStatus_Dump();
      R_TG_GpuStatus_Dump();
    }
    s_gpuSyncTimeout *= 2;
  }
}

/*
==============
R_ComErrorCleanup
==============
*/
void R_ComErrorCleanup(int force)
{
  __int64 v2; 
  __int64 v3; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_init.cpp", 9825, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  CG_HudLighting_ComErrorCleanup();
  if ( force || frontEndDataOut && frontEndDataOut->abortReady )
  {
    R_AbortRenderCommands();
    R_SyncRenderThread();
    if ( g_dx.d3d12device )
    {
      R_LockGfxImmediateContext();
      if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_init.cpp", 9846, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
        __debugbreak();
      R_AcquireGpuFenceLock();
      R_FinishGpuFence();
      R_InsertGpuFence();
      R_FinishGpuFence();
      R_ReleaseGpuFenceLock();
      Sys_Sleep(50);
      if ( (int)g_frontEndSwapFrame < g_gpuSwapFrame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_init.cpp", 3506, ASSERT_TYPE_ASSERT, "( g_frontEndSwapFrame ) >= ( g_gpuSwapFrame )", "%s >= %s\n\t%u, %u", "g_frontEndSwapFrame", "g_gpuSwapFrame", g_frontEndSwapFrame, g_gpuSwapFrame) )
        __debugbreak();
      if ( (int)g_frontEndSwapFrame < g_gpuSwapFrame )
        Sys_Error((const ObfuscateErrorText)&stru_1444042A0, g_frontEndSwapFrame, (unsigned int)g_gpuSwapFrame);
      g_gpuSwapFrame = g_frontEndSwapFrame;
      if ( (int)g_frontEndSwapFrame < g_backEndSwapFrame )
      {
        LODWORD(v3) = g_backEndSwapFrame;
        LODWORD(v2) = g_frontEndSwapFrame;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_init.cpp", 3515, ASSERT_TYPE_ASSERT, "( g_frontEndSwapFrame ) >= ( g_backEndSwapFrame )", "%s >= %s\n\t%u, %u", "g_frontEndSwapFrame", "g_backEndSwapFrame", v2, v3) )
          __debugbreak();
      }
      if ( (int)g_frontEndSwapFrame < g_backEndSwapFrame )
        Sys_Error((const ObfuscateErrorText)&stru_144404338, g_frontEndSwapFrame, (unsigned int)g_backEndSwapFrame);
      g_backEndSwapFrame = g_frontEndSwapFrame;
      R_UnlockGfxImmediateContext();
    }
  }
}

/*
==============
R_ConfigureRenderer
==============
*/
void R_ConfigureRenderer(const GfxConfiguration *config)
{
  __int64 v2; 
  __int64 v3; 
  __int64 v4; 

  if ( !config && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_init.cpp", 1447, ASSERT_TYPE_ASSERT, "(config)", (const char *)&queryFormat, "config") )
    __debugbreak();
  if ( config->maxClientViews - 1 > 1 )
  {
    LODWORD(v2) = config->maxClientViews;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_init.cpp", 1448, ASSERT_TYPE_ASSERT, "( 1 ) <= ( config->maxClientViews ) && ( config->maxClientViews ) <= ( 2 )", "config->maxClientViews not in [1, GFX_MAX_CLIENT_VIEWS]\n\t%i not in [%i, %i]", v2, 1, 2) )
      __debugbreak();
  }
  if ( config->critSectCount != 116 )
  {
    LODWORD(v4) = 116;
    LODWORD(v3) = config->critSectCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_init.cpp", 1450, ASSERT_TYPE_ASSERT, "(config->critSectCount == CRITSECT_COUNT)", "%s\n\t%d != %d", "config->critSectCount == CRITSECT_COUNT", v3, v4) )
      __debugbreak();
  }
  gfxCfg = *config;
  gfxCfg.inited = 1;
  R_RegisterDvars();
  R_InitRenderCommands();
}

/*
==============
R_CreateDevice
==============
*/
char R_CreateDevice(const GfxWindowParms *wndParms)
{
  unsigned int queueIndex; 
  unsigned int v3; 
  int DebugInterface_0; 
  const char *v5; 
  int v6; 
  HRESULT Device_0; 
  const char *v8; 
  HRESULT v9; 
  const char *v10; 
  HRESULT v11; 
  const char *v12; 
  HRESULT v13; 
  const char *v14; 
  __int64 v15; 
  D3DCommandQueueHandle *computeCommandQueue; 
  D3DCommandAllocHandle (*commandAllocHandle)[128]; 
  D3DCommandListHandle (*commandListHandle)[4]; 
  int ContextToken; 
  int ProxyImpl; 
  HRESULT (__fastcall *QueryInterface)(IUnknown *, const _GUID *, void **); 
  IUnknown *ptr; 
  __int64 *object; 
  __int64 v24; 
  __int64 v25; 
  IUnknown_vtbl *v26; 
  HRESULT v27; 
  const char *v28; 
  int v29; 
  int v30; 
  HRESULT (__fastcall *v31)(IUnknown *, const _GUID *, void **); 
  IUnknown *v32; 
  __int64 *v33; 
  __int64 v34; 
  __int64 v35; 
  IUnknown_vtbl *v36; 
  HRESULT v37; 
  const char *v38; 
  int v39; 
  int v40; 
  HRESULT (__fastcall *v41)(IUnknown *, const _GUID *, void **); 
  IUnknown *v42; 
  __int64 *v43; 
  __int64 v44; 
  __int64 v45; 
  IUnknown_vtbl *v46; 
  HRESULT v47; 
  const char *v48; 
  ID3D12GraphicsCommandList **computeCommandList; 
  D3DCommandListHandle **p_cmdListRing; 
  int v51; 
  _QWORD *v52; 
  int v53; 
  int v54; 
  const char *v55; 
  char *fmt; 
  __int64 pipeIndex; 
  __int64 v59; 
  struct IUnknown v60; 
  __int64 *v61; 
  ULONG_PTR pToken; 
  void *ppvDebug; 
  int v64; 
  __int64 v65[2]; 
  int v66[4]; 
  __int64 v67; 
  __int64 v68; 
  __int64 v69; 
  DXGI_SWAP_CHAIN_DESC1 v70; 
  DXGI_SWAP_CHAIN_DESC1 swapChainDesc; 

  v65[1] = -2i64;
  if ( !wndParms && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_init.cpp", 4523, ASSERT_TYPE_ASSERT, "(wndParms)", (const char *)&queryFormat, "wndParms") )
    __debugbreak();
  if ( g_dx.d3d12device && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_init.cpp", 4524, ASSERT_TYPE_ASSERT, "(g_dx.d3d12device == nullptr)", (const char *)&queryFormat, "g_dx.d3d12device == nullptr") )
    __debugbreak();
  queueIndex = 0;
  ppvDebug = NULL;
  g_dx.gpuMode = Sys_GetXB3ConsoleType();
  if ( g_dx.gpuMode == XB3_CONSOLE_UNKNOWN && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_init.cpp", 4528, ASSERT_TYPE_ASSERT, "(g_dx.gpuMode != XB3_CONSOLE_UNKNOWN)", (const char *)&queryFormat, "g_dx.gpuMode != XB3_CONSOLE_UNKNOWN") )
    __debugbreak();
  v3 = r_deviceDebug->current.enabled | (r_deviceProfile->current.enabled ? 0x100000 : 0);
  v64 = v3;
  if ( v3 == 1048577 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_init.cpp", 4539, ASSERT_TYPE_ASSERT, "( ( flags & ( D3D12XBOX_PROCESS_DEBUG_FLAG_DEBUG | D3D12XBOX_PROCESS_DEBUG_FLAG_INSTRUMENTED ) ) != ( ( D3D12XBOX_PROCESS_DEBUG_FLAG_DEBUG | D3D12XBOX_PROCESS_DEBUG_FLAG_INSTRUMENTED ) ) )", "Debug and Profile D3D12.X devices are mutually exclusive") )
    __debugbreak();
  DebugInterface_0 = D3D12GetDebugInterface_0(&GUID_344488b7_6846_474b_b989_f027448245e0, &ppvDebug);
  if ( DebugInterface_0 < 0 )
  {
    v5 = R_ErrorDescription(DebugInterface_0);
    Sys_Error((const ObfuscateErrorText)&stru_144404850, 4541i64, v5);
  }
  (**(void (__fastcall ***)(void *, _QWORD))ppvDebug)(ppvDebug, v3);
  R_ProfEnable(v3 != 0);
  v6 = 0;
  if ( v3 )
    v6 = v3 != 0 ? 0x1D6 : 0;
  if ( v6 )
    Mem_Paged_ReleasePhysicalPages((unsigned int)((v6 << 20) + 0xFFFF) >> 16);
  v66[3] = 0;
  v66[0] = 65546;
  v66[1] = v3;
  v66[2] = -1;
  v67 = 0i64;
  v68 = 0i64;
  v69 = 1i64;
  Device_0 = D3D12XboxCreateDevice_0(0i64, v66, &GUID_189819f1_1db6_4b57_be54_1821339b85f7, &g_dx.d3d12device);
  if ( Device_0 < 0 )
  {
    v8 = R_ErrorDescription(Device_0);
    Sys_Error((const ObfuscateErrorText)&stru_144404910, 4580i64, v8);
  }
  ((void (__fastcall *)(ID3D12Device *, bool))g_dx.d3d12device->m_pFunction[17].AddRef)(g_dx.d3d12device, r_deviceDebugBreaks->current.integer == 0);
  g_dx.d3d12device->m_pFunction[23].QueryInterface(g_dx.d3d12device, (const _GUID *)3663860334i64, (void **)11);
  g_dx.d3d12device->m_pFunction[23].QueryInterface(g_dx.d3d12device, (const _GUID *)2463029130i64, (void **)11);
  g_dx.d3d12device->m_pFunction[23].QueryInterface(g_dx.d3d12device, (const _GUID *)661467750, (void **)11);
  g_dx.d3d12device->m_pFunction[23].QueryInterface(g_dx.d3d12device, (const _GUID *)746877818, (void **)11);
  g_dx.d3d12device->m_pFunction[23].QueryInterface(g_dx.d3d12device, (const _GUID *)3074945895i64, (void **)11);
  g_dx.d3d12device->m_pFunction[23].QueryInterface(g_dx.d3d12device, (const _GUID *)1082034397, (void **)11);
  g_dx.d3d12device->m_pFunction[23].QueryInterface(g_dx.d3d12device, (const _GUID *)853243507, (void **)11);
  g_dx.d3d12device->m_pFunction[23].QueryInterface(g_dx.d3d12device, (const _GUID *)2005892390, (void **)11);
  g_dx.d3d12device->m_pFunction[23].QueryInterface(g_dx.d3d12device, (const _GUID *)3304988632i64, (void **)11);
  g_dx.d3d12device->m_pFunction[23].QueryInterface(g_dx.d3d12device, (const _GUID *)3575474465i64, (void **)11);
  g_dx.d3d12device->m_pFunction[23].QueryInterface(g_dx.d3d12device, (const _GUID *)1116445227, (void **)11);
  g_dx.d3d12device->m_pFunction[23].QueryInterface(g_dx.d3d12device, (const _GUID *)3610964312i64, (void **)11);
  g_dx.d3d12device->m_pFunction[23].QueryInterface(g_dx.d3d12device, (const _GUID *)2272570867i64, (void **)11);
  ((void (__fastcall *)(ID3D12Device *, unsigned int (__fastcall *)(unsigned __int64), void (__fastcall *)(const char *), void (__fastcall *)(const wchar_t *)))g_dx.d3d12device->m_pFunction[16].Release)(g_dx.d3d12device, R_XB3_GpuHangBeginCallback, R_XB3_GpuHangPrintCallback, R_XB3_GpuHangDumpCallback);
  v9 = g_dx.d3d12device->m_pFunction->QueryInterface(g_dx.d3d12device, &GUID_77db970f_6276_48ba_ba28_070143b4392c, (void **)v65);
  if ( v9 < 0 )
  {
    v10 = R_ErrorDescription(v9);
    Sys_Error((const ObfuscateErrorText)&stru_144404A00, 4626i64, v10);
  }
  v11 = (*(__int64 (__fastcall **)(__int64, IDXGIAdapter **))(*(_QWORD *)v65[0] + 56i64))(v65[0], &g_dx.dxgiAdapter);
  if ( v11 < 0 )
  {
    v12 = R_ErrorDescription(v11);
    Sys_Error((const ObfuscateErrorText)&stru_144404AD0, 4627i64, v12);
  }
  v13 = g_dx.dxgiAdapter->m_pFunction[2].QueryInterface(g_dx.dxgiAdapter, &GUID_50c83a1c_e072_4c48_87b0_3630fa36a6d0, (void **)&g_dx.dxgiFactory);
  if ( v13 < 0 )
  {
    v14 = R_ErrorDescription(v13);
    Sys_Error((const ObfuscateErrorText)&stru_144404B60, 4628i64, v14);
  }
  g_dx.nullConstantBufferData = (unsigned int *)PMem_Alloc(0x10ui64, 0x10ui64, MEM_POOL_GPU_PRIVATE, PMEM_STACK_GAME, "nullConstantBufferData");
  g_dx.gpuTimerLables = (volatile unsigned __int64 *)PMem_Alloc(0x8000ui64, 8ui64, MEM_POOL_GPU_PRIVATE, PMEM_STACK_GAME, "g_dx.gpuTimerLables");
  R_InitCommandQueue(D3D12_COMMAND_LIST_TYPE_DIRECT, 0x48u, 0x48u, "immediate", &g_dx.immediateCommandQueue, g_dx.immediateCommandAllocs, g_dx.immediateCommandLists, 0, 0);
  v15 = 2i64;
  R_InitCommandQueue(D3D12XBOX_COMMAND_LIST_TYPE_DMA, 0x40u, 0x40u, "LZ copy dma", &g_dx.copyCommandQueue, g_dx.copyCommandAllocs, g_dx.copyCommandLists, 2u, 0);
  R_InitCommandQueue(D3D12XBOX_COMMAND_LIST_TYPE_DMA, 4u, 4u, "defrag copy dma", &g_dx.defragDMACommandQueue, g_dx.defragDMACommandAllocs, g_dx.defragDMACommandLists, 1u, 0);
  computeCommandQueue = g_dx.computeCommandQueue;
  commandAllocHandle = g_dx.computeCommandAllocs;
  commandListHandle = g_dx.computeCommandLists;
  do
    R_InitCommandQueue(D3D12_COMMAND_LIST_TYPE_COMPUTE, 0x80u, 4u, "async compute", computeCommandQueue++, (D3DCommandAllocHandle *)commandAllocHandle++, (D3DCommandListHandle *)commandListHandle++, 0, queueIndex++);
  while ( queueIndex < 2 );
  R_SetD3DSwapChainDesc(&swapChainDesc, wndParms);
  if ( R_IsDisplayHDRCapable() )
  {
    XB3XMemAlloc_SetD3DSwapChainHooks(1);
    R_SetD3DSwapChainDesc(&v70, wndParms);
    v70.Flags = v70.Flags & 0xFF5FFFFF | 0x800000;
    if ( wndParms->coreWindow._agileState == Japan || !wndParms->coreWindow._object )
      goto LABEL_51;
    ContextToken = CoGetContextToken(&pToken);
    if ( ContextToken < 0 )
      __abi_WinRTraiseException(ContextToken);
    if ( pToken == wndParms->coreWindow._contextToken )
    {
LABEL_51:
      object = (__int64 *)wndParms->coreWindow._object;
      if ( object )
        (*(void (__fastcall **)(Windows::UI::Core::CoreWindow *))(*object + 8))(wndParms->coreWindow._object);
    }
    else
    {
      v60.__vftable = NULL;
      ProxyImpl = Platform::Details::GetProxyImpl((Platform::Details *)wndParms->coreWindow._object, (struct IUnknown *)&_uuidof__AVCoreWindow_Core_UI_Windows__, (const struct _GUID *)wndParms->coreWindow._contextCallback.ptr_, &v60, (struct IUnknown **)fmt);
      if ( ProxyImpl < 0 )
        __abi_WinRTraiseException(ProxyImpl);
      if ( wndParms->coreWindow._agileState == SaudiArabia )
      {
        v59 = 0i64;
        QueryInterface = v60.QueryInterface;
        v61 = &v59;
        if ( !(*(unsigned int (__fastcall **)(IUnknown_vtbl *, GUID *, __int64 *))QueryInterface)(v60.__vftable, &GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90, &v59) )
        {
          wndParms->coreWindow._agileState = Japan;
          wndParms->coreWindow._contextToken = 0i64;
          ptr = wndParms->coreWindow._contextCallback.ptr_;
          if ( ptr )
          {
            wndParms->coreWindow._contextCallback.ptr_ = NULL;
            ptr->Release(ptr);
          }
          object = (__int64 *)wndParms->coreWindow._object;
          if ( object )
            (*(void (__fastcall **)(Windows::UI::Core::CoreWindow *))(*object + 8))(wndParms->coreWindow._object);
          v24 = v59;
          if ( v59 )
          {
            v59 = 0i64;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16i64))(v24);
          }
          if ( v60.__vftable )
            (*((void (__fastcall **)(IUnknown_vtbl *))v60.QueryInterface + 2))(v60.__vftable);
          goto LABEL_53;
        }
        wndParms->coreWindow._agileState = Worldwide;
        v25 = v59;
        if ( v59 )
        {
          v59 = 0i64;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16i64))(v25);
        }
      }
      v26 = v60.__vftable;
      object = (__int64 *)v60.__vftable;
      if ( v60.__vftable )
      {
        (*((void (__fastcall **)(IUnknown_vtbl *))v60.QueryInterface + 1))(v60.__vftable);
        v26 = v60.__vftable;
      }
      if ( v26 )
        (*((void (__fastcall **)(IUnknown_vtbl *))v26->QueryInterface + 2))(v26);
    }
LABEL_53:
    v61 = object;
    v27 = ((__int64 (__fastcall *)(IDXGIFactory2 *, ID3D12Device *, __int64 *, DXGI_SWAP_CHAIN_DESC1 *))g_dx.dxgiFactory->m_pFunction[5].AddRef)(g_dx.dxgiFactory, g_dx.d3d12device, object, &v70);
    if ( object )
      (*(void (__fastcall **)(__int64 *))(*object + 16))(object);
    if ( v27 < 0 )
    {
      v28 = R_ErrorDescription(v27);
      Sys_Error((const ObfuscateErrorText)&stru_144404C70, 4652i64, v28);
    }
    if ( wndParms->coreWindow._agileState == Japan || !wndParms->coreWindow._object )
      goto LABEL_78;
    v29 = CoGetContextToken(&pToken);
    if ( v29 < 0 )
      __abi_WinRTraiseException(v29);
    if ( pToken == wndParms->coreWindow._contextToken )
    {
LABEL_78:
      v33 = (__int64 *)wndParms->coreWindow._object;
      if ( v33 )
        (*(void (__fastcall **)(__int64 *))(*v33 + 8))(v33);
      goto LABEL_80;
    }
    v60.__vftable = NULL;
    v30 = Platform::Details::GetProxyImpl((Platform::Details *)wndParms->coreWindow._object, (struct IUnknown *)&_uuidof__AVCoreWindow_Core_UI_Windows__, (const struct _GUID *)wndParms->coreWindow._contextCallback.ptr_, &v60, NULL);
    if ( v30 < 0 )
      __abi_WinRTraiseException(v30);
    if ( wndParms->coreWindow._agileState == SaudiArabia )
    {
      v59 = 0i64;
      v31 = v60.QueryInterface;
      v61 = &v59;
      if ( !(*(unsigned int (__fastcall **)(IUnknown_vtbl *, GUID *, __int64 *))v31)(v60.__vftable, &GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90, &v59) )
      {
        wndParms->coreWindow._agileState = Japan;
        wndParms->coreWindow._contextToken = 0i64;
        v32 = wndParms->coreWindow._contextCallback.ptr_;
        if ( v32 )
        {
          wndParms->coreWindow._contextCallback.ptr_ = NULL;
          v32->Release(v32);
        }
        v33 = (__int64 *)wndParms->coreWindow._object;
        if ( v33 )
          (*(void (__fastcall **)(__int64 *))(*v33 + 8))(v33);
        v34 = v59;
        if ( v59 )
        {
          v59 = 0i64;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 16i64))(v34);
        }
        if ( v60.__vftable )
          (*((void (__fastcall **)(IUnknown_vtbl *))v60.QueryInterface + 2))(v60.__vftable);
LABEL_80:
        v61 = v33;
        v37 = ((__int64 (__fastcall *)(IDXGIFactory2 *, ID3D12Device *, __int64 *, DXGI_SWAP_CHAIN_DESC1 *, _QWORD, IDXGISwapChain1 **))g_dx.dxgiFactory->m_pFunction[5].AddRef)(g_dx.dxgiFactory, g_dx.d3d12device, v33, &swapChainDesc, 0i64, &g_dx.gameDvrSdrSwapChain);
        if ( v33 )
          (*(void (__fastcall **)(__int64 *))(*v33 + 16))(v33);
        if ( v37 < 0 )
        {
          v38 = R_ErrorDescription(v37);
          Sys_Error((const ObfuscateErrorText)&stru_144404DA0, 4653i64, v38);
        }
        goto LABEL_112;
      }
      wndParms->coreWindow._agileState = Worldwide;
      v35 = v59;
      if ( v59 )
      {
        v59 = 0i64;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 16i64))(v35);
      }
    }
    v36 = v60.__vftable;
    v33 = (__int64 *)v60.__vftable;
    if ( v60.__vftable )
    {
      (*((void (__fastcall **)(IUnknown_vtbl *))v60.QueryInterface + 1))(v60.__vftable);
      v36 = v60.__vftable;
    }
    if ( v36 )
      (*((void (__fastcall **)(IUnknown_vtbl *))v36->QueryInterface + 2))(v36);
    goto LABEL_80;
  }
  XB3XMemAlloc_SetD3DSwapChainHooks(0);
  if ( wndParms->coreWindow._agileState == Japan || !wndParms->coreWindow._object )
    goto LABEL_105;
  v39 = CoGetContextToken(&pToken);
  if ( v39 < 0 )
    __abi_WinRTraiseException(v39);
  if ( pToken == wndParms->coreWindow._contextToken )
  {
LABEL_105:
    v43 = (__int64 *)wndParms->coreWindow._object;
    if ( v43 )
      (*(void (__fastcall **)(__int64 *))(*v43 + 8))(v43);
    goto LABEL_107;
  }
  v60.__vftable = NULL;
  v40 = Platform::Details::GetProxyImpl((Platform::Details *)wndParms->coreWindow._object, (struct IUnknown *)&_uuidof__AVCoreWindow_Core_UI_Windows__, (const struct _GUID *)wndParms->coreWindow._contextCallback.ptr_, &v60, (struct IUnknown **)fmt);
  if ( v40 < 0 )
    __abi_WinRTraiseException(v40);
  if ( wndParms->coreWindow._agileState != SaudiArabia )
    goto LABEL_101;
  v59 = 0i64;
  v41 = v60.QueryInterface;
  v61 = &v59;
  if ( (*(unsigned int (__fastcall **)(IUnknown_vtbl *, GUID *, __int64 *))v41)(v60.__vftable, &GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90, &v59) )
  {
    wndParms->coreWindow._agileState = Worldwide;
    v45 = v59;
    if ( v59 )
    {
      v59 = 0i64;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v45 + 16i64))(v45);
    }
LABEL_101:
    v46 = v60.__vftable;
    v43 = (__int64 *)v60.__vftable;
    if ( v60.__vftable )
    {
      (*((void (__fastcall **)(IUnknown_vtbl *))v60.QueryInterface + 1))(v60.__vftable);
      v46 = v60.__vftable;
    }
    if ( v46 )
      (*((void (__fastcall **)(IUnknown_vtbl *))v46->QueryInterface + 2))(v46);
    goto LABEL_107;
  }
  wndParms->coreWindow._agileState = Japan;
  wndParms->coreWindow._contextToken = 0i64;
  v42 = wndParms->coreWindow._contextCallback.ptr_;
  if ( v42 )
  {
    wndParms->coreWindow._contextCallback.ptr_ = NULL;
    v42->Release(v42);
  }
  v43 = (__int64 *)wndParms->coreWindow._object;
  if ( v43 )
    (*(void (__fastcall **)(__int64 *))(*v43 + 8))(v43);
  v44 = v59;
  if ( v59 )
  {
    v59 = 0i64;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v44 + 16i64))(v44);
  }
  if ( v60.__vftable )
    (*((void (__fastcall **)(IUnknown_vtbl *))v60.QueryInterface + 2))(v60.__vftable);
LABEL_107:
  v61 = v43;
  v47 = ((__int64 (__fastcall *)(IDXGIFactory2 *, ID3D12Device *, __int64 *, DXGI_SWAP_CHAIN_DESC1 *, _QWORD, IDXGISwapChain1 **))g_dx.dxgiFactory->m_pFunction[5].AddRef)(g_dx.dxgiFactory, g_dx.d3d12device, v43, &swapChainDesc, 0i64, &g_dx.displaySwapChain);
  if ( v43 )
    (*(void (__fastcall **)(__int64 *))(*v43 + 16))(v43);
  if ( v47 < 0 )
  {
    v48 = R_ErrorDescription(v47);
    Sys_Error((const ObfuscateErrorText)&stru_144404ED0, 4659i64, v48);
  }
  g_dx.gameDvrSdrSwapChain = NULL;
LABEL_112:
  XB3XMemAlloc_ValidateD3DSwapChain();
  XB3XMemAlloc_SetDefaultHooks();
  R_InitRootSignatures(g_dx.d3d12device);
  R_InitGlobalDescriptorPools(g_dx.d3d12device);
  R_InitCommandSignatures(g_dx.d3d12device);
  if ( g_dx.immediateCommandQueue.currAllocIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_init.cpp", 4208, ASSERT_TYPE_ASSERT, "(g_dx.immediateCommandQueue.currAllocIndex == 0)", (const char *)&queryFormat, "g_dx.immediateCommandQueue.currAllocIndex == 0") )
    __debugbreak();
  g_dx.immediateContext = (GfxDevice *)g_dx.immediateCommandQueue.cmdListRing->cmdList;
  R_InitDescriptorState(&g_dx.immediateDescState);
  computeCommandList = g_dx.computeCommandList;
  p_cmdListRing = &g_dx.computeCommandQueue[0].cmdListRing;
  do
  {
    if ( *((_DWORD *)p_cmdListRing - 1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_init.cpp", 4240, ASSERT_TYPE_ASSERT, "(g_dx.computeCommandQueue[computeQueueIdx].currAllocIndex == 0)", (const char *)&queryFormat, "g_dx.computeCommandQueue[computeQueueIdx].currAllocIndex == 0") )
      __debugbreak();
    *computeCommandList = (ID3D12GraphicsCommandList *)(*p_cmdListRing)->cmdList;
    p_cmdListRing += 9;
    ++computeCommandList;
    --v15;
  }
  while ( v15 );
  v51 = v64;
  if ( g_dx.copyCommandQueue.currAllocIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_init.cpp", 4250, ASSERT_TYPE_ASSERT, "(g_dx.copyCommandQueue.currAllocIndex == 0)", (const char *)&queryFormat, "g_dx.copyCommandQueue.currAllocIndex == 0") )
    __debugbreak();
  g_dx.copyCommandList = (ID3D12XboxDmaCommandList *)g_dx.copyCommandQueue.cmdListRing->cmdList;
  if ( g_dx.defragDMACommandQueue.currAllocIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_init.cpp", 4229, ASSERT_TYPE_ASSERT, "(g_dx.defragDMACommandQueue.currAllocIndex == 0)", (const char *)&queryFormat, "g_dx.defragDMACommandQueue.currAllocIndex == 0") )
    __debugbreak();
  g_dx.defragDMACommandList = (ID3D12XboxDmaCommandList *)g_dx.defragDMACommandQueue.cmdListRing->cmdList;
  PIXSetDebugFenceName(&g_dx.flushGpuFence, "Flush GPU Fence");
  ((void (__fastcall *)(ID3D12Device *, D3D12XBOX_GPU_HARDWARE_CONFIGURATION *))g_dx.d3d12device->m_pFunction[22].Release)(g_dx.d3d12device, &g_dx.gpuConfig);
  v52 = ppvDebug;
  if ( ppvDebug )
  {
    ppvDebug = NULL;
    v53 = (*(__int64 (__fastcall **)(_QWORD *))(v52[1] + 16i64))(v52 + 1);
    if ( !g_dx.analysisToolPresent && !g_dx.incompatibleOverlayPresent )
    {
      if ( v53 )
      {
        LODWORD(pipeIndex) = 4697;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_types_d3d.h", 1569, ASSERT_TYPE_ASSERT, "(!useCount)", "%s\n\t%s (%i) %s->Release() failed: %i leak(s)!", "!useCount", "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_init.cpp", pipeIndex, "spDebug", v53) )
          __debugbreak();
      }
    }
  }
  v70.Width = 131090;
  v54 = D3D11CreateDevice_0(NULL, D3D_DRIVER_TYPE_HARDWARE, NULL, v51 & 0x100000 | (2 * (v51 & 1 | 0x8000)), NULL, 0, 0x20012u, &g_dx.d3d11LimitedDevice, NULL, NULL);
  if ( v54 < 0 )
  {
    v55 = R_ErrorDescription(v54);
    Sys_Error((const ObfuscateErrorText)&stru_144405030, 4713i64, v55);
  }
  ((void (__fastcall *)(ID3D11Device *, ID3D11DeviceContext **))g_dx.d3d11LimitedDevice->m_pFunction[13].Release)(g_dx.d3d11LimitedDevice, &g_dx.d3d11LimitedDeviceContext);
  if ( !g_dx.d3d11LimitedDeviceContext && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_init.cpp", 4715, ASSERT_TYPE_ASSERT, "(g_dx.d3d11LimitedDeviceContext != nullptr)", (const char *)&queryFormat, "g_dx.d3d11LimitedDeviceContext != nullptr") )
    __debugbreak();
  r_glob.mainThreadHasOwnership = 1;
  return 1;
}

/*
==============
R_CreateGameWindow
==============
*/
char R_CreateGameWindow(GfxWindowParms *wndParms, vidConfig_t *vidConfigOut)
{
  const RawFile *rawfile; 
  unsigned __int64 FFValidationHash; 
  int RawFileLen; 
  char *v7; 
  GfxCmdBufContext v9; 
  GfxCmdBufContext result; 

  if ( !vidConfigOut && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_init.cpp", 7083, ASSERT_TYPE_ASSERT, "(vidConfigOut)", (const char *)&queryFormat, "vidConfigOut") )
    __debugbreak();
  R_SetWndParms(wndParms);
  R_StoreWindowSettings(wndParms);
  *vidConfigOut = vidConfig;
  if ( R_IsLockedGfxImmediateContext() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_immediate_context_lock.h", 23, ASSERT_TYPE_ASSERT, "(!R_IsLockedGfxImmediateContext())", (const char *)&queryFormat, "!R_IsLockedGfxImmediateContext()") )
    __debugbreak();
  R_HW_InitCallbacks();
  R_StoreWindowSettings(wndParms);
  v9 = *RB_GetBackendCmdBufContext(&result);
  RB_InitSceneViewport(&v9);
  RB_InitCodeConstants();
  Com_Printf(8, "Setting initial state...\n");
  RB_SetInitialState();
  R_InitScene();
  R_RegisterCodeImages();
  RB_InitImages();
  Material_Init();
  FontIcons_Init();
  R_InitLightDefs();
  R_InitDebug();
  RB_ProfileInit();
  R_GPU_InitTimers();
  R_Cinematic_Init();
  Sys_ResumeWorkerThreads();
  rawfile = DB_FindXAssetHeader(ASSET_TYPE_RAWFILE, "material_ff_validation.bin", 0).rawfile;
  if ( rawfile )
  {
    FFValidationHash = Material_GenerateFFValidationHash();
    RawFileLen = DB_GetRawFileLen(rawfile);
    v7 = (char *)Mem_Virtual_Alloc((RawFileLen + 0xFFFF) & 0xFFFFFFFFFFFF0000ui64, "StructLayout", TRACK_MISC);
    if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_init.cpp", 6054, ASSERT_TYPE_ASSERT, "(allocBuf)", (const char *)&queryFormat, "allocBuf") )
      __debugbreak();
    DB_GetRawBuffer(rawfile, v7, RawFileLen);
    if ( FFValidationHash != *(_QWORD *)v7 )
      Com_Error_impl(ERR_FATAL, (const ObfuscateErrorText)&stru_1444051E0, 967i64);
    Mem_Virtual_Free(v7);
    return 1;
  }
  else
  {
    Com_Error_impl(ERR_FATAL, (const ObfuscateErrorText)&stru_1444052C0, 968i64);
    return 1;
  }
}

/*
==============
R_DeviceExists
==============
*/
bool R_DeviceExists()
{
  return g_dx.d3d12device != NULL;
}

/*
==============
R_EndRegistration
==============
*/
void R_EndRegistration(void)
{
  Material_FinishLoading();
  RB_ResetStatTracking();
}

/*
==============
R_ErrorDescription
==============
*/
const char *R_ErrorDescription(HRESULT hr)
{
  int v3; 

  if ( hr > -2005139454 )
  {
    switch ( hr )
    {
      case -2005139453:
        return "D3D11_ERROR_TOO_MANY_UNIQUE_VIEW_OBJECTS:  There are too many unique instances of a particular type of view object.";
      case -2005139452:
        return "D3D11_ERROR_DEFERRED_CONTEXT_MAP_WITHOUT_INITIAL_DISCARD:  The first call to ID3D11DeviceContext::Map after either ID3D11Device::CreateDeferredContext or ID3D11DeviceContext::FinishCommandList per Resource was not D3D11_MAP_WRITE_DISCARD.";
      case 0:
        return "S_OK";
      case 1:
        return "S_FALSE";
    }
  }
  else
  {
    switch ( hr )
    {
      case -2005139454:
        return "D3D11_ERROR_FILE_NOT_FOUND:  The file was not found.";
      case -2147467259:
        return "E_FAIL";
      case -2147024882:
        return "E_OUTOFMEMORY:  Direct3D could not allocate sufficient memory to complete the call.";
      case -2147024809:
        return "E_INVALIDARG:  An invalid parameter was passed to the function.";
      case -2005204991:
        return "DXGI_DDI_ERR_WASSTILLDRAWING:  The previous blit operation that is transferring information to or from this surface is incomplete.";
      case -2005139455:
        return "D3D11_ERROR_TOO_MANY_UNIQUE_STATE_OBJECTS:  There are too many unique instances of a particular type of state object.";
    }
  }
  buffer_0[0] = 0;
  v3 = Com_sprintf_truncate(buffer_0, 0x480ui64, "%x ", (unsigned int)hr);
  if ( v3 >= 0 && 1151 - v3 > 0 )
    R_GetDeviceRemovedErrorString(&buffer_0[v3], 1151 - v3, hr);
  return buffer_0;
}

/*
==============
R_FatalInitError
==============
*/
void R_FatalInitError(const char *msg)
{
  Com_Printf(8, "********** DirectX returned an unrecoverable error code during initialization  **********\n");
  Com_Printf(8, "********** Initialization also happens while playing if DirectX loses a device **********\n");
  Com_Printf(8, "********** Consult the readme for how to continue from this problem            **********\n");
  Com_Printf(8, "\n%s\n", msg);
  Com_Error_impl(ERR_FATAL, (const ObfuscateErrorText)&stru_144403958, 962i64);
}

/*
==============
R_FatalResourceError
==============
*/
void R_FatalResourceError(HRESULT hr)
{
  const char *v2; 

  Com_Printf(8, "********** DirectX failed a call to access a resource **********\n");
  v2 = R_ErrorDescription(hr);
  Com_Printf(8, "********** Error information:  %s\n", v2);
  Com_Printf(8, "********** Visit http:
  Com_Error_impl(ERR_FATAL, (const ObfuscateErrorText)&stru_144403958, 963i64);
}

/*
==============
R_FinishFrontendDelay
==============
*/
bool R_FinishFrontendDelay(void *userData)
{
  return __rdtsc() >= *(_QWORD *)userData;
}

/*
==============
R_FinishGpuCatchup
==============
*/
bool R_FinishGpuCatchup(bool fromWorker)
{
  int v1; 
  int v2; 

  v1 = 0;
  if ( Sys_ProfIsCapturing() || R_ProfIsCapturing() )
  {
    s_gpuSyncStartMs = Sys_Milliseconds();
    v1 = 1;
  }
  v2 = Sys_Milliseconds();
  if ( !v1 && v2 - s_gpuSyncStartMs > s_gpuSyncTimeout )
  {
    if ( !r_deviceDebug->current.enabled && IsDebuggerPresent() && !R_TG_GpuStatus_Testing() )
    {
      Com_Printf(8, "Warning: Potential GPU timeout event skipped due to an attached Debugger.  Run without the debugger attached to, or set 'r_deviceDebug' to '1', if the game is hung and you want to generate a GPU dump here.\n");
      R_BackendGpuStatus_Dump();
      R_TG_GpuStatus_Dump();
LABEL_15:
      s_gpuSyncTimeout *= 2;
      return Sys_IsRendererReady2(NULL) && (int)(g_frontEndSwapFrame - g_gpuSwapFrame) <= 1;
    }
    if ( !s_gpuHung )
    {
      s_gpuHung = 1;
      if ( MemCard_LargeFileBuffer_GetCommitSize() && !G_SaveMemory_CheckSaveComplete() )
      {
        do
          Sys_Sleep(1);
        while ( !G_SaveMemory_CheckSaveComplete() );
      }
      ((void (__fastcall *)(ID3D12Device *, __int64))g_dx.d3d12device->m_pFunction[17].QueryInterface)(g_dx.d3d12device, 1i64);
      goto LABEL_15;
    }
  }
  return Sys_IsRendererReady2(NULL) && (int)(g_frontEndSwapFrame - g_gpuSwapFrame) <= 1;
}

/*
==============
R_FinishGpuCatchupWorker
==============
*/
bool R_FinishGpuCatchupWorker(void *__formal)
{
  return R_FinishGpuCatchup(1);
}

/*
==============
R_FlushSwap
==============
*/
void R_FlushSwap(void)
{
  __int64 v0; 
  unsigned int v1; 
  __int64 v2; 
  volatile int v3; 

  R_AcquireGpuFenceLock();
  R_FinishGpuFence();
  R_InsertGpuFence();
  R_FinishGpuFence();
  R_ReleaseGpuFenceLock();
  Sys_Sleep(50);
  if ( (int)g_frontEndSwapFrame < g_gpuSwapFrame )
  {
    v3 = g_gpuSwapFrame;
    v1 = g_frontEndSwapFrame;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_init.cpp", 3506, ASSERT_TYPE_ASSERT, "( g_frontEndSwapFrame ) >= ( g_gpuSwapFrame )", "%s >= %s\n\t%u, %u", "g_frontEndSwapFrame", "g_gpuSwapFrame", v1, v3) )
      __debugbreak();
  }
  if ( (int)g_frontEndSwapFrame < g_gpuSwapFrame )
    Sys_Error((const ObfuscateErrorText)&stru_1444042A0, g_frontEndSwapFrame, (unsigned int)g_gpuSwapFrame);
  g_gpuSwapFrame = g_frontEndSwapFrame;
  if ( (int)g_frontEndSwapFrame < g_backEndSwapFrame )
  {
    LODWORD(v2) = g_backEndSwapFrame;
    LODWORD(v0) = g_frontEndSwapFrame;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_init.cpp", 3515, ASSERT_TYPE_ASSERT, "( g_frontEndSwapFrame ) >= ( g_backEndSwapFrame )", "%s >= %s\n\t%u, %u", "g_frontEndSwapFrame", "g_backEndSwapFrame", v0, v2) )
      __debugbreak();
  }
  if ( (int)g_frontEndSwapFrame < g_backEndSwapFrame )
    Sys_Error((const ObfuscateErrorText)&stru_144404338, g_frontEndSwapFrame, (unsigned int)g_backEndSwapFrame);
  g_backEndSwapFrame = g_frontEndSwapFrame;
}

/*
==============
R_GetAspectRatio
==============
*/
float R_GetAspectRatio(GfxAspectRatio aspectRatio)
{
  __int64 v1; 

  v1 = aspectRatio;
  if ( (aspectRatio == GFX_ASPECT_RATIO_AUTO || aspectRatio >= GFX_ASPECT_RATIO_COUNT) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_init.cpp", 560, ASSERT_TYPE_ASSERT, "(aspectRatio != GFX_ASPECT_RATIO_AUTO && aspectRatio < GFX_ASPECT_RATIO_COUNT)", (const char *)&queryFormat, "aspectRatio != GFX_ASPECT_RATIO_AUTO && aspectRatio < GFX_ASPECT_RATIO_COUNT") )
    __debugbreak();
  return s_aspectRatioFractionList[v1].ratio;
}

/*
==============
R_GetCurrentStatTracker
==============
*/
trStatistics_t *R_GetCurrentStatTracker()
{
  return rg.stats;
}

/*
==============
R_GetSurfPosStats
==============
*/

void __fastcall R_GetSurfPosStats(unsigned int *stats, double _XMM1_8, double _XMM2_8)
{
  int *v5; 

  __asm
  {
    vpxor   xmm1, xmm1, xmm1
    vpxor   xmm2, xmm2, xmm2
  }
  v5 = &rg.surfPosHistory[4];
  do
  {
    __asm
    {
      vpaddd  xmm1, xmm1, xmmword ptr [rax-10h]
      vpaddd  xmm2, xmm2, xmmword ptr [rax]
    }
    v5 += 8;
  }
  while ( (__int64)v5 < (__int64)&rg.identityViewParms.viewMatrix.m.row0.xyz.y );
  __asm
  {
    vpaddd  xmm1, xmm2, xmm1
    vpsrldq xmm0, xmm1, 8
    vpaddd  xmm2, xmm1, xmm0
    vpsrldq xmm0, xmm2, 4
    vpaddd  xmm0, xmm2, xmm0
  }
  *stats = (int)_XMM0 / 64;
}

/*
==============
R_InitDevice
==============
*/
void R_InitDevice(void)
{
  R_SetWndParms(&g_wndParms);
  R_StoreWindowSettings(&g_wndParms);
  R_CreateDevice(&g_wndParms);
  R_InitDeviceInternal();
  ShowLoadScreen(1);
}

/*
==============
R_InitDeviceInternal
==============
*/
char R_InitDeviceInternal()
{
  __int64 v0; 
  GfxWrappedBuffer *globalShadowStructuredBuffer; 
  GfxDescriptorTable (*globalPersistentTextureTables)[2]; 
  __int64 v3; 
  __int64 v4; 
  const dvar_t *v5; 
  bool enabled; 
  const dvar_t *v7; 
  int integer; 
  const dvar_t *v9; 
  int v10; 
  const dvar_t *v11; 
  int used; 
  __int64 flags; 

  R_InitColorimetry();
  R_InitConstantBufferInfo_Ring(&g_dx.constantBufferInfo, s_primaryConstantBufferSizes);
  R_InitDescriptorHeapInfo_Ring(&g_dx.backendDescHeapInfo, D3D12_DESCRIPTOR_HEAP_TYPE_CBV_SRV_UAV, g_primaryDescriptorHeapSize, g_primaryDescriptorHeapDangerZone, g_primaryDescriptorHeapName);
  R_Texture_Init();
  R_RenderTargets_Init();
  R_BackendGpuStatus_Init();
  R_InitTonemap();
  R_InitVolumetric(0);
  R_InitDecalVolumes(0);
  R_InitFrustumLights();
  R_InitMDAO();
  R_SMAAComputeInitialize();
  R_VRS_Initialize();
  R_WhiteBalance_Init();
  R_ReflectionProbe_InitResolutionDependent();
  R_BuildSubDomainRangeConstantBuffers();
  R_InitSubdivConstantBuffers();
  R_InitBspTessFactorsConstantBuffers();
  R_InitSkinningConstantBuffers();
  R_InitMayhemChannelsConstantBuffers();
  R_InitBspDrawConstBuffers();
  R_Sunshadow_InitConstBuffers();
  R_HudOutline_InitConstBuffers();
  R_InitDummyBuffer();
  v0 = 2i64;
  globalShadowStructuredBuffer = deviceGlobals.globalShadowStructuredBuffer;
  do
  {
    R_CreateGfxWrappedBuffer(globalShadowStructuredBuffer - 2, GfxWrappedBuffer_Structured, 96, 0x1984u, GFX_DATA_FORMAT_R32_UINT, 0xAu, D3D12_RESOURCE_STATE_GENERIC_READ, NULL, NULL, "globalLightConstantBuffer");
    R_CreateGfxWrappedBuffer(globalShadowStructuredBuffer, GfxWrappedBuffer_Structured, 96, 0x40u, GFX_DATA_FORMAT_R32_UINT, 0xAu, D3D12_RESOURCE_STATE_GENERIC_READ, NULL, NULL, "globalShadowConstantBuffer");
    R_CreateGfxWrappedBuffer(globalShadowStructuredBuffer + 2, GfxWrappedBuffer_Const, 3584, 1u, GFX_DATA_FORMAT_R32_UINT, 0xAu, D3D12_RESOURCE_STATE_GENERIC_READ, NULL, NULL, "globalSceneConstantBuffer");
    ++globalShadowStructuredBuffer;
    --v0;
  }
  while ( v0 );
  globalPersistentTextureTables = deviceGlobals.globalPersistentTextureTables;
  v3 = 2i64;
  do
  {
    v4 = 2i64;
    do
    {
      R_CreateGfxDescriptorTable(&(*globalPersistentTextureTables)[-4], GfxDescriptorTableType_Buffers, 0x2Du, "globalDefaultBufferTable");
      R_CreateGfxDescriptorTable((GfxDescriptorTable *)globalPersistentTextureTables, GfxDescriptorTableType_Textures, 0x2Bu, "globalDefaultTextureTable");
      globalPersistentTextureTables = (GfxDescriptorTable (*)[2])((char *)globalPersistentTextureTables + 48);
      --v4;
    }
    while ( v4 );
    --v3;
  }
  while ( v3 );
  R_VOL_Init();
  R_InitEntityDataBuffer();
  R_Resolve_CreateResources();
  RB_InitOcclusionQueries();
  v5 = DCONST_DVARBOOL_r_patchCountAllowed;
  if ( !DCONST_DVARBOOL_r_patchCountAllowed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_patchCountAllowed") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v5);
  enabled = v5->current.enabled;
  v7 = DCONST_DVARINT_r_subdivPatchCount;
  rg.patchCountAllowed = enabled;
  if ( !DCONST_DVARINT_r_subdivPatchCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_subdivPatchCount") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v7);
  integer = v7->current.integer;
  v9 = DCONST_DVARINT_r_displacementPatchCount;
  rg.subdivPatchCount = integer;
  if ( !DCONST_DVARINT_r_displacementPatchCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_displacementPatchCount") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v9);
  v10 = v9->current.integer;
  v11 = DCONST_DVARINT_r_defaultPatchCount;
  rg.displacementPatchCount = v10;
  if ( !DCONST_DVARINT_r_defaultPatchCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_defaultPatchCount") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v11);
  rg.defaultPatchCount = v11->current.integer;
  FontCache_Init();
  if ( !g_allocateMinimalResources )
    R_InitRenderBuffers();
  Com_Printf(8, "Initializing dynamic buffers...\n");
  R_CreateDynamicBuffers();
  R_UGB_InitOrReset(1);
  R_InitImages();
  R_Umbra_Init();
  R_RuntimeCompression_Init();
  R_ReflectionProbe_GlobalInit();
  R_ReflectionProbeFiltering_Startup();
  R_ReflectionProbeRelighting_Startup();
  R_ReflectionProbeCompression_Startup();
  R_CG_Wind_InitGridBuffers();
  R_InitReactiveMotion();
  R_InitSHLighting();
  R_MayhemSelfVis_Init();
  R_Umbra_GetUmbraOcclusionSceneImage();
  R_InitSSAO();
  R_InitSSR();
  R_SSS_Init();
  R_InitLensDistortProfiles();
  R_Perceptual_Init();
  R_UiClut_Initialize();
  R_UniversalClut_Initialize();
  R_FogSpline_CreateResources();
  R_HDRToSDR_CreateResources();
  R_HDRScopes_CreateResources();
  R_InitTransShadowBuffers();
  RB_BackendDataCopier::Init(&rbBackendDataCopier);
  R_InitLightmapAtlas();
  R_InitLightGridVolumesAtlas();
  PhysPerfRaycast_GetImage();
  R_InitEffectLighting();
  R_InitLightSensor();
  R_InitEyeSensor();
  g_dx.flushGpuFenceIssued = 0;
  g_dx.flushGpuFenceCount = 0;
  if ( !g_allocateMinimalResources )
  {
    RB_AllocOcclusionQueries();
    RB_AllocSunSpriteQueries();
    used = g_dx.occlusionQueryHeap.used;
    if ( g_dx.occlusionQueryHeap.used >= g_dx.occlusionQueryHeap.numQueries )
    {
      LODWORD(flags) = g_dx.occlusionQueryHeap.used;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_device_d3d12.h", 180, ASSERT_TYPE_ASSERT, "( ( handle->used < handle->numQueries ) )", "( handle->used ) = %u", flags) )
        __debugbreak();
      used = g_dx.occlusionQueryHeap.used;
    }
    gfxAssets.pixelCountQuery = used;
    g_dx.occlusionQueryHeap.used = used + 1;
  }
  RB_AllocFrameDurationQueries();
  R_HDRSpotMeter_Initialize();
  R_ST_Init();
  return 1;
}

/*
==============
R_InitDummyBuffer
==============
*/
void R_InitDummyBuffer()
{
  int ElementSizeForDataFormat; 
  int v1; 
  char data[64]; 

  memset(data, 0, sizeof(data));
  R_CreateGfxWrappedBuffer(&gfxBuf.dummyBuffer, GfxWrappedBuffer_Raw, 4, 1u, GFX_DATA_FORMAT_R32_UINT, 8u, D3D12_RESOURCE_STATE_GENERIC_READ, NULL, NULL, "dummyBuffer");
  R_CreateGfxWrappedBuffer(&gfxBuf.dummyRWBuffer, GfxWrappedBuffer_Raw, 4, 1u, GFX_DATA_FORMAT_R32_UINT, 9u, D3D12_RESOURCE_STATE_UNORDERED_ACCESS, NULL, NULL, "dummyRWBuffer");
  ElementSizeForDataFormat = Buffers_GetElementSizeForDataFormat(GFX_DATA_FORMAT_R32_UINT);
  R_CreateGfxWrappedBuffer(&gfxBuf.dummyDataBufferR32UINT, GfxWrappedBuffer_Data, ElementSizeForDataFormat, 1u, GFX_DATA_FORMAT_R32_UINT, 8u, D3D12_RESOURCE_STATE_GENERIC_READ, NULL, NULL, "dummyDataBufferR32UINT");
  v1 = Buffers_GetElementSizeForDataFormat(GFX_DATA_FORMAT_R32G32_UINT);
  R_CreateGfxWrappedBuffer(&gfxBuf.dummyDataBufferR32G32UINT, GfxWrappedBuffer_Data, v1, 1u, GFX_DATA_FORMAT_R32G32_UINT, 8u, D3D12_RESOURCE_STATE_GENERIC_READ, NULL, NULL, "dummyDataBufferR32G32UINT");
  R_CreateGfxWrappedBuffer(&gfxBuf.dummyStructuredBuffer8, GfxWrappedBuffer_Structured, 8, 1u, GFX_DATA_FORMAT_R32_UINT, 8u, D3D12_RESOURCE_STATE_GENERIC_READ, NULL, NULL, "dummyStructuredBuffer8");
  R_CreateGfxWrappedBuffer(&gfxBuf.dummyStructuredBuffer32, GfxWrappedBuffer_Structured, 32, 1u, GFX_DATA_FORMAT_R32_UINT, 8u, D3D12_RESOURCE_STATE_GENERIC_READ, NULL, NULL, "dummyStructuredBuffer32");
  R_CreateGfxWrappedBuffer(&gfxBuf.dummyStructuredBuffer64, GfxWrappedBuffer_Structured, 64, 1u, GFX_DATA_FORMAT_R32_UINT, 8u, D3D12_RESOURCE_STATE_GENERIC_READ, NULL, NULL, "dummyStructuredBuffer64");
  R_CreateGfxWrappedBuffer(&gfxBuf.dummyIndirectBuffer, GfxWrappedBuffer_Raw, 20, 1u, GFX_DATA_FORMAT_R32_UINT, 0x208u, D3D12_RESOURCE_STATE_GENERIC_READ, NULL, NULL, "dummyIndirectBuffer");
  R_LockGfxImmediateContext();
  R_UpdateGfxWrappedBuffer(&gfxBuf.dummyBuffer, data, 4u);
  R_UpdateGfxWrappedBuffer(&gfxBuf.dummyRWBuffer, data, 4u);
  R_UpdateGfxWrappedBuffer(&gfxBuf.dummyDataBufferR32UINT, data, 4u);
  R_UpdateGfxWrappedBuffer(&gfxBuf.dummyDataBufferR32G32UINT, data, 8u);
  R_UpdateGfxWrappedBuffer(&gfxBuf.dummyStructuredBuffer8, data, 8u);
  R_UpdateGfxWrappedBuffer(&gfxBuf.dummyStructuredBuffer32, data, 0x20u);
  R_UpdateGfxWrappedBuffer(&gfxBuf.dummyStructuredBuffer64, data, 0x40u);
  R_UpdateGfxWrappedBuffer(&gfxBuf.dummyIndirectBuffer, data, 0x14u);
  R_UnlockGfxImmediateContext();
}

/*
==============
R_InitGraphicsApi
==============
*/
void R_InitGraphicsApi(vidConfig_t *vidConfigOut)
{
  bool v4; 
  Windows::UI::Core::CoreWindow *v6; 
  IUnknown *ptr; 
  Platform::Agile<Windows::UI::Core::CoreWindow,1> v8; 
  GfxWindowParms wndParms; 

  wndParms.coreWindow._object = NULL;
  __asm { vpxor   xmm0, xmm0, xmm0 }
  *(_OWORD *)&wndParms.coreWindow._contextCallback.ptr_ = _XMM0;
  wndParms.coreWindow._agileState = SaudiArabia;
  v4 = !s_windowExists;
  s_windowExists = 1;
  if ( v4 )
  {
    do
    {
      wndParms.displayMode = g_wndParms.displayMode;
      __asm { vpxor   xmm0, xmm0, xmm0 }
      *(_OWORD *)&v8._object = _XMM0;
      v8._contextToken = 0i64;
      v8._agileState = SaudiArabia;
      v6 = Platform::Agile<Windows::UI::Core::CoreWindow,1>::Get(&g_wndParms.coreWindow);
      Platform::Agile<Windows::UI::Core::CoreWindow,1>::SetObject(&v8, v6);
      if ( v6 )
        v6->__abi_Release(v6);
      Platform::Agile<Windows::UI::Core::CoreWindow,1>::Swap(&v8, &wndParms.coreWindow);
      Platform::Agile<Windows::UI::Core::CoreWindow,1>::Release(&v8);
      ptr = v8._contextCallback.ptr_;
      if ( v8._contextCallback.ptr_ )
      {
        v8._contextCallback.ptr_ = NULL;
        ptr->Release(ptr);
      }
      if ( v8._object )
        v8._object->__abi_Release(v8._object);
      wndParms.isWideScreen = g_wndParms.isWideScreen;
      _XMM0 = LODWORD(g_wndParms.hz);
      wndParms.hz = g_wndParms.hz;
      wndParms.sceneWidth = g_wndParms.sceneWidth;
      wndParms.sceneHeight = g_wndParms.sceneHeight;
      wndParms.displayWidth = g_wndParms.displayWidth;
      wndParms.displayHeight = g_wndParms.displayHeight;
    }
    while ( !R_CreateGameWindow(&wndParms, vidConfigOut) );
  }
  else
  {
    R_RegisterCodeImages();
    RB_InitImages();
    Material_Init();
    FontIcons_Init();
    R_InitLightDefs();
    R_InitDebug();
    RB_ProfileInit();
    R_GPU_InitTimers();
  }
  Platform::Agile<Windows::UI::Core::CoreWindow,1>::Release(&wndParms.coreWindow);
  if ( wndParms.coreWindow._contextCallback.ptr_ )
    wndParms.coreWindow._contextCallback.ptr_->Release(wndParms.coreWindow._contextCallback.ptr_);
  if ( wndParms.coreWindow._object )
    wndParms.coreWindow._object->__abi_Release(wndParms.coreWindow._object);
}

/*
==============
R_InitOnce
==============
*/
void R_InitOnce(void)
{
  if ( r_glob.isRenderingRemoteUpdate && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_init.cpp", 7848, ASSERT_TYPE_ASSERT, "(!r_glob.isRenderingRemoteUpdate)", (const char *)&queryFormat, "!r_glob.isRenderingRemoteUpdate") )
    __debugbreak();
  if ( r_glob.startedRenderThread && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_init.cpp", 7859, ASSERT_TYPE_ASSERT, "(!r_glob.startedRenderThread)", (const char *)&queryFormat, "!r_glob.startedRenderThread") )
    __debugbreak();
  if ( !Sys_SpawnRenderThread((void (__fastcall *)(unsigned int))RB_RenderThread) )
    Com_Error_impl(ERR_FATAL, (const ObfuscateErrorText)&stru_144405430, 599i64);
}

/*
==============
R_InitResolutionDependentGfxSystems
==============
*/
void R_InitResolutionDependentGfxSystems(bool reconfigure)
{
  if ( !reconfigure )
    R_InitTonemap();
  R_InitVolumetric(reconfigure);
  R_InitDecalVolumes(reconfigure);
  R_InitFrustumLights();
  R_InitMDAO();
  R_SMAAComputeInitialize();
  R_VRS_Initialize();
  R_WhiteBalance_Init();
  R_ReflectionProbe_InitResolutionDependent();
}

/*
==============
R_InitTessellationState
==============
*/
void R_InitTessellationState(void)
{
  const dvar_t *v0; 
  bool enabled; 
  const dvar_t *v2; 
  int integer; 
  const dvar_t *v4; 
  int v5; 
  const dvar_t *v6; 

  v0 = DCONST_DVARBOOL_r_patchCountAllowed;
  if ( !DCONST_DVARBOOL_r_patchCountAllowed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_patchCountAllowed") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v0);
  enabled = v0->current.enabled;
  v2 = DCONST_DVARINT_r_subdivPatchCount;
  rg.patchCountAllowed = enabled;
  if ( !DCONST_DVARINT_r_subdivPatchCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_subdivPatchCount") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  integer = v2->current.integer;
  v4 = DCONST_DVARINT_r_displacementPatchCount;
  rg.subdivPatchCount = integer;
  if ( !DCONST_DVARINT_r_displacementPatchCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_displacementPatchCount") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  v5 = v4->current.integer;
  v6 = DCONST_DVARINT_r_defaultPatchCount;
  rg.displacementPatchCount = v5;
  if ( !DCONST_DVARINT_r_defaultPatchCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "r_defaultPatchCount") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  rg.defaultPatchCount = v6->current.integer;
}

/*
==============
R_IsAnalysisToolPresent
==============
*/
_BOOL8 R_IsAnalysisToolPresent()
{
  return g_dx.analysisToolPresent;
}

/*
==============
R_IsGPUHung
==============
*/
_BOOL8 R_IsGPUHung()
{
  return s_gpuHung;
}

/*
==============
R_IsHiDef
==============
*/
__int64 R_IsHiDef()
{
  return 1i64;
}

/*
==============
R_IsIncompatibleOverlayPresent
==============
*/
_BOOL8 R_IsIncompatibleOverlayPresent()
{
  return g_dx.incompatibleOverlayPresent;
}

/*
==============
R_LogGpuPipelineStats
==============
*/
void R_LogGpuPipelineStats()
{
  trStatistics_t *stats; 
  const char **v2; 
  unsigned int v3; 
  int *numPostOcclusionGPClusters; 
  const char *v25; 
  const char **v52; 
  __int64 v53; 
  int *ugbPhysPageInUseCount; 
  char dest[256]; 

  memset_0(dest, 0, sizeof(dest));
  stats = rg.stats;
  v2 = g_gpPassNames;
  v3 = 0;
  numPostOcclusionGPClusters = rg.stats->numPostOcclusionGPClusters;
  do
  {
    if ( v3 )
    {
      if ( stats )
      {
        _XMM6 = 0i64;
        __asm { vcvtsi2sd xmm6, xmm6, dword ptr [rbx-30h] }
      }
      else
      {
        __asm { vxorpd  xmm6, xmm6, xmm6 }
      }
      Com_sprintf(dest, 0x100ui64, "Counters.GPU.%s.%s", *v2, " GP Tris");
      Com_CSVWriteMetric(dest, *(long double *)&_XMM6);
      if ( stats )
      {
        _XMM6 = 0i64;
        __asm { vcvtsi2sd xmm6, xmm6, dword ptr [rbx-28h] }
      }
      else
      {
        __asm { vxorpd  xmm6, xmm6, xmm6 }
      }
      Com_sprintf(dest, 0x100ui64, "Counters.GPU.%s.%s", *v2, " GP Clusters");
      Com_CSVWriteMetric(dest, *(long double *)&_XMM6);
      if ( stats )
      {
        _XMM6 = 0i64;
        __asm { vcvtsi2sd xmm6, xmm6, dword ptr [rbx-20h] }
      }
      else
      {
        __asm { vxorpd  xmm6, xmm6, xmm6 }
      }
      Com_sprintf(dest, 0x100ui64, "Counters.GPU.%s.%s", *v2, " GP Batch Max Indices");
      Com_CSVWriteMetric(dest, *(long double *)&_XMM6);
      if ( stats )
      {
        _XMM6 = 0i64;
        __asm { vcvtsi2sd xmm6, xmm6, dword ptr [rbx-18h] }
      }
      else
      {
        __asm { vxorpd  xmm6, xmm6, xmm6 }
      }
      Com_sprintf(dest, 0x100ui64, "Counters.GPU.%s.%s", *v2, " GP Batch Indices Watermark");
      Com_CSVWriteMetric(dest, *(long double *)&_XMM6);
      if ( stats )
      {
        _XMM6 = 0i64;
        __asm { vcvtsi2sd xmm6, xmm6, dword ptr [rbx-10h] }
      }
      else
      {
        __asm { vxorpd  xmm6, xmm6, xmm6 }
      }
      v25 = " GP Batches Drawn";
    }
    else
    {
      if ( stats )
      {
        _XMM6 = 0i64;
        __asm { vcvtsi2sd xmm6, xmm6, dword ptr [rbx-30h] }
      }
      else
      {
        __asm { vxorpd  xmm6, xmm6, xmm6 }
      }
      Com_sprintf(dest, 0x100ui64, "Counters.GPU.%s.%s", *v2, " GP Tris (Prepass)");
      Com_CSVWriteMetric(dest, *(long double *)&_XMM6);
      if ( stats )
      {
        _XMM6 = 0i64;
        __asm { vcvtsi2sd xmm6, xmm6, dword ptr [rbx-28h] }
      }
      else
      {
        __asm { vxorpd  xmm6, xmm6, xmm6 }
      }
      Com_sprintf(dest, 0x100ui64, "Counters.GPU.%s.%s", *v2, " GP Wrkgrps (Prepass)");
      Com_CSVWriteMetric(dest, *(long double *)&_XMM6);
      if ( stats )
      {
        _XMM6 = 0i64;
        __asm { vcvtsi2sd xmm6, xmm6, dword ptr [rbx-20h] }
      }
      else
      {
        __asm { vxorpd  xmm6, xmm6, xmm6 }
      }
      Com_sprintf(dest, 0x100ui64, "Counters.GPU.%s.%s", *v2, " GP Batch Max Indices (Prepass)");
      Com_CSVWriteMetric(dest, *(long double *)&_XMM6);
      if ( stats )
      {
        _XMM6 = 0i64;
        __asm { vcvtsi2sd xmm6, xmm6, dword ptr [rbx-18h] }
      }
      else
      {
        __asm { vxorpd  xmm6, xmm6, xmm6 }
      }
      Com_sprintf(dest, 0x100ui64, "Counters.GPU.%s.%s", *v2, " GP Batch Indices Watermark (Prepass)");
      Com_CSVWriteMetric(dest, *(long double *)&_XMM6);
      if ( stats )
      {
        _XMM6 = 0i64;
        __asm { vcvtsi2sd xmm6, xmm6, dword ptr [rbx-10h] }
      }
      else
      {
        __asm { vxorpd  xmm6, xmm6, xmm6 }
      }
      Com_sprintf(dest, 0x100ui64, "Counters.GPU.%s.%s", *v2, " GP Batches Drawn (Prepass)");
      Com_CSVWriteMetric(dest, *(long double *)&_XMM6);
      if ( stats )
      {
        _XMM6 = 0i64;
        __asm { vcvtsi2sd xmm6, xmm6, dword ptr [rbx-8] }
      }
      else
      {
        __asm { vxorpd  xmm6, xmm6, xmm6 }
      }
      Com_sprintf(dest, 0x100ui64, "Counters.GPU.%s.%s", *v2, " GP Tris (Lit Pass)");
      Com_CSVWriteMetric(dest, *(long double *)&_XMM6);
      if ( stats )
      {
        _XMM6 = 0i64;
        __asm { vcvtsi2sd xmm6, xmm6, dword ptr [rbx] }
      }
      else
      {
        __asm { vxorpd  xmm6, xmm6, xmm6 }
      }
      Com_sprintf(dest, 0x100ui64, "Counters.GPU.%s.%s", *v2, " GP Clusters (Lit Pass)");
      Com_CSVWriteMetric(dest, *(long double *)&_XMM6);
      if ( stats )
      {
        _XMM6 = 0i64;
        __asm { vcvtsi2sd xmm6, xmm6, dword ptr [rbx+8] }
      }
      else
      {
        __asm { vxorpd  xmm6, xmm6, xmm6 }
      }
      Com_sprintf(dest, 0x100ui64, "Counters.GPU.%s.%s", *v2, " GP Batch Max Indices Count (Lit Pass)");
      Com_CSVWriteMetric(dest, *(long double *)&_XMM6);
      if ( stats )
      {
        _XMM6 = 0i64;
        __asm { vcvtsi2sd xmm6, xmm6, dword ptr [rbx+10h] }
      }
      else
      {
        __asm { vxorpd  xmm6, xmm6, xmm6 }
      }
      Com_sprintf(dest, 0x100ui64, "Counters.GPU.%s.%s", *v2, " GP Batch Indices Watermark (Lit Pass)");
      Com_CSVWriteMetric(dest, *(long double *)&_XMM6);
      if ( stats )
      {
        _XMM6 = 0i64;
        __asm { vcvtsi2sd xmm6, xmm6, dword ptr [rbx+18h] }
      }
      else
      {
        __asm { vxorpd  xmm6, xmm6, xmm6 }
      }
      v25 = " GP Batches Drawn (Lit Pass)";
    }
    Com_sprintf(dest, 0x100ui64, "Counters.GPU.%s.%s", *v2, v25);
    Com_CSVWriteMetric(dest, *(long double *)&_XMM6);
    if ( stats )
    {
      _XMM6 = 0i64;
      __asm { vcvtsi2sd xmm6, xmm6, dword ptr [rbx+20h] }
    }
    else
    {
      __asm { vxorpd  xmm6, xmm6, xmm6 }
    }
    Com_sprintf(dest, 0x100ui64, "Counters.GPU.%s.%s", *v2, " GP SubMeshes");
    Com_CSVWriteMetric(dest, *(long double *)&_XMM6);
    if ( stats )
    {
      _XMM6 = 0i64;
      __asm { vcvtsi2sd xmm6, xmm6, dword ptr [rbx+28h] }
    }
    else
    {
      __asm { vxorpd  xmm6, xmm6, xmm6 }
    }
    Com_sprintf(dest, 0x100ui64, "Counters.GPU.%s.%s", *v2, " GP Batches");
    Com_CSVWriteMetric(dest, *(long double *)&_XMM6);
    if ( stats )
    {
      _XMM6 = 0i64;
      __asm { vcvtsi2sd xmm6, xmm6, dword ptr [rbx+30h] }
    }
    else
    {
      __asm { vxorpd  xmm6, xmm6, xmm6 }
    }
    Com_sprintf(dest, 0x100ui64, "Counters.GPU.%s.%s", *v2, " GP Static Surfs");
    Com_CSVWriteMetric(dest, *(long double *)&_XMM6);
    if ( stats )
    {
      _XMM6 = 0i64;
      __asm { vcvtsi2sd xmm6, xmm6, dword ptr [rbx+38h] }
    }
    else
    {
      __asm { vxorpd  xmm6, xmm6, xmm6 }
    }
    Com_sprintf(dest, 0x100ui64, "Counters.GPU.%s.%s", *v2, " GP Rigid Surfs");
    Com_CSVWriteMetric(dest, *(long double *)&_XMM6);
    if ( stats )
    {
      _XMM6 = 0i64;
      __asm { vcvtsi2sd xmm6, xmm6, dword ptr [rbx+40h] }
    }
    else
    {
      __asm { vxorpd  xmm6, xmm6, xmm6 }
    }
    Com_sprintf(dest, 0x100ui64, "Counters.GPU.%s.%s", *v2, " GP Skinned Surfs");
    Com_CSVWriteMetric(dest, *(long double *)&_XMM6);
    if ( stats )
    {
      _XMM6 = 0i64;
      __asm { vcvtsi2sd xmm6, xmm6, dword ptr [rbx+48h] }
    }
    else
    {
      __asm { vxorpd  xmm6, xmm6, xmm6 }
    }
    Com_sprintf(dest, 0x100ui64, "Counters.GPU.%s.%s", *v2, " GP Surfs Total");
    Com_CSVWriteMetric(dest, *(long double *)&_XMM6);
    ++v3;
    ++numPostOcclusionGPClusters;
    ++v2;
  }
  while ( v3 < 2 );
  if ( stats )
  {
    _XMM6 = 0i64;
    __asm { vcvtsi2sd xmm6, xmm6, dword ptr [rsi+0AD4h] }
  }
  else
  {
    __asm { vxorpd  xmm6, xmm6, xmm6 }
  }
  Com_sprintf(dest, 0x100ui64, "Counters.GPU.%s", " UGB Resident XSurfs");
  Com_CSVWriteMetric(dest, *(long double *)&_XMM6);
  if ( stats )
  {
    _XMM6 = 0i64;
    __asm { vcvtsi2sd xmm6, xmm6, dword ptr [rsi+0AD8h] }
  }
  else
  {
    __asm { vxorpd  xmm6, xmm6, xmm6 }
  }
  Com_sprintf(dest, 0x100ui64, "Counters.GPU.%s", " UGB Delta XSurfs");
  Com_CSVWriteMetric(dest, *(long double *)&_XMM6);
  if ( stats )
  {
    _XMM6 = 0i64;
    __asm { vcvtsi2sd xmm6, xmm6, dword ptr [rsi+0ADCh] }
  }
  else
  {
    __asm { vxorpd  xmm6, xmm6, xmm6 }
  }
  Com_sprintf(dest, 0x100ui64, "Counters.GPU.%s", " UGB XSurfs");
  Com_CSVWriteMetric(dest, *(long double *)&_XMM6);
  v52 = g_unifiedBufferNames;
  v53 = 3i64;
  ugbPhysPageInUseCount = stats->ugbPhysPageInUseCount;
  do
  {
    __asm { vxorpd  xmm6, xmm6, xmm6 }
    if ( stats )
      __asm { vcvtsi2sd xmm6, xmm6, dword ptr [rbx+0Ch] }
    Com_sprintf(dest, 0x100ui64, "Counters.GPU.%s.%s", *v52, " Virt Pages In Use");
    Com_CSVWriteMetric(dest, *(long double *)&_XMM6);
    if ( stats )
    {
      _XMM6 = 0i64;
      __asm { vcvtsi2sd xmm6, xmm6, dword ptr [rbx] }
    }
    else
    {
      __asm { vxorpd  xmm6, xmm6, xmm6 }
    }
    Com_sprintf(dest, 0x100ui64, "Counters.GPU.%s.%s", *v52, " Phys Pages In Use");
    Com_CSVWriteMetric(dest, *(long double *)&_XMM6);
    if ( stats )
    {
      _XMM6 = 0i64;
      __asm { vcvtsi2sd xmm6, xmm6, eax }
    }
    else
    {
      __asm { vxorpd  xmm6, xmm6, xmm6 }
    }
    Com_sprintf(dest, 0x100ui64, "Counters.GPU.%s.%s", *v52, " Phys Buffer Memory");
    Com_CSVWriteMetric(dest, *(long double *)&_XMM6);
    if ( stats )
    {
      _XMM6 = 0i64;
      __asm { vcvtsi2sd xmm6, xmm6, dword ptr [rbx-18h] }
    }
    else
    {
      __asm { vxorpd  xmm6, xmm6, xmm6 }
    }
    Com_sprintf(dest, 0x100ui64, "Counters.GPU.%s.%s", *v52, " Allocated Virt Pages");
    Com_CSVWriteMetric(dest, *(long double *)&_XMM6);
    if ( stats )
    {
      _XMM6 = 0i64;
      __asm { vcvtsi2sd xmm6, xmm6, dword ptr [rbx-0Ch] }
    }
    else
    {
      __asm { vxorpd  xmm6, xmm6, xmm6 }
    }
    Com_sprintf(dest, 0x100ui64, "Counters.GPU.%s.%s", *v52, " Virt Pages Paged In");
    Com_CSVWriteMetric(dest, *(long double *)&_XMM6);
    if ( stats )
    {
      _XMM6 = 0i64;
      __asm { vcvtsi2sd xmm6, xmm6, dword ptr [rbx+24h] }
    }
    else
    {
      __asm { vxorpd  xmm6, xmm6, xmm6 }
    }
    Com_sprintf(dest, 0x100ui64, "Counters.GPU.%s.%s", *v52, " Phys Page Watermark");
    Com_CSVWriteMetric(dest, *(long double *)&_XMM6);
    if ( stats )
    {
      _XMM6 = 0i64;
      __asm { vcvtsi2sd xmm6, xmm6, eax }
    }
    else
    {
      __asm { vxorpd  xmm6, xmm6, xmm6 }
    }
    Com_sprintf(dest, 0x100ui64, "Counters.GPU.%s.%s", *v52, " Phys Mem Watermark");
    Com_CSVWriteMetric(dest, *(long double *)&_XMM6);
    ++ugbPhysPageInUseCount;
    ++v52;
    --v53;
  }
  while ( v53 );
}

/*
==============
R_NotifyZoneUnload
==============
*/
void R_NotifyZoneUnload(XZoneHandleUnique zone)
{
  XZoneHandleUnique transientZone; 

  transientZone = zone;
  R_RemoveZoneLightmapsFromAtlas(zone);
  R_RemoveZoneLightGridVolumesFromAtlas(transientZone);
  R_CompressedSunShadow_StreamOut(&transientZone);
}

/*
==============
R_QueueFlipCallback
==============
*/
void R_QueueFlipCallback(unsigned int frame)
{
  R_GPU_RecordLatencyEvent(LATENCY_EVENT_GPU_QUEUE_FLIP, frame);
}

/*
==============
R_RegisterRenderFrame
==============
*/
void R_RegisterRenderFrame(void)
{
  unsigned __int64 v0; 
  unsigned __int64 v1; 
  __int64 v2; 
  unsigned int v3; 
  __int64 v4; 
  volatile int v5; 

  if ( (int)g_frontEndSwapFrame < g_gpuSwapFrame )
  {
    v5 = g_gpuSwapFrame;
    v3 = g_frontEndSwapFrame;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_init.cpp", 9615, ASSERT_TYPE_ASSERT, "( g_frontEndSwapFrame ) >= ( g_gpuSwapFrame )", "%s >= %s\n\t%u, %u", "g_frontEndSwapFrame", "g_gpuSwapFrame", v3, v5) )
      __debugbreak();
  }
  if ( (int)g_frontEndSwapFrame > g_gpuSwapFrame + 2 )
  {
    LODWORD(v4) = g_gpuSwapFrame + 2;
    LODWORD(v2) = g_frontEndSwapFrame;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_init.cpp", 9616, ASSERT_TYPE_ASSERT, "( g_frontEndSwapFrame ) <= ( g_gpuSwapFrame + 2 )", "%s <= %s\n\t%u, %u", "g_frontEndSwapFrame", "g_gpuSwapFrame + 2", v2, v4) )
      __debugbreak();
  }
  if ( (int)g_frontEndSwapFrame < g_backEndSwapFrame )
  {
    LODWORD(v4) = g_backEndSwapFrame;
    LODWORD(v2) = g_frontEndSwapFrame;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_init.cpp", 9618, ASSERT_TYPE_ASSERT, "( g_frontEndSwapFrame ) >= ( g_backEndSwapFrame )", "%s >= %s\n\t%u, %u", "g_frontEndSwapFrame", "g_backEndSwapFrame", v2, v4) )
      __debugbreak();
  }
  if ( (int)g_frontEndSwapFrame > g_backEndSwapFrame + 1 )
  {
    LODWORD(v4) = g_backEndSwapFrame + 1;
    LODWORD(v2) = g_frontEndSwapFrame;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_init.cpp", 9619, ASSERT_TYPE_ASSERT, "( g_frontEndSwapFrame ) <= ( g_backEndSwapFrame + 1 )", "%s <= %s\n\t%u, %u", "g_frontEndSwapFrame", "g_backEndSwapFrame + 1", v2, v4) )
      __debugbreak();
  }
  if ( (int)g_frontEndSwapFrame < g_backEndSwapFrame )
    Sys_Error((const ObfuscateErrorText)&stru_1444059C0, g_frontEndSwapFrame, (unsigned int)g_backEndSwapFrame);
  if ( (int)g_frontEndSwapFrame > g_backEndSwapFrame + 1 )
    Sys_Error((const ObfuscateErrorText)&stru_144405A08, g_frontEndSwapFrame, (unsigned int)(g_backEndSwapFrame + 1));
  if ( (int)g_frontEndSwapFrame < g_gpuSwapFrame )
    Sys_Error((const ObfuscateErrorText)&stru_144405890, g_frontEndSwapFrame, (unsigned int)g_gpuSwapFrame);
  if ( (int)g_frontEndSwapFrame > g_gpuSwapFrame + 2 )
    Sys_Error((const ObfuscateErrorText)&stru_1444058D8, g_frontEndSwapFrame, (unsigned int)(g_gpuSwapFrame + 2));
  v0 = Sys_Microseconds();
  Profile2_UpdateEntry(38);
  if ( ((unsigned __int8)&dword_14FDE8068 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &dword_14FDE8068) )
    __debugbreak();
  _InterlockedIncrement(&dword_14FDE8068);
  Sys_ProfBeginNamedEvent(0xFF404040, "wait gpu catchup");
  Sys_ProcessWorkerCmdsWithTimeout(R_FinishGpuCatchupWorker, NULL);
  Sys_ProfEndNamedEvent();
  Profile2_UpdateEntry(38);
  if ( ((unsigned __int64)&dword_14FDE8068 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &dword_14FDE8068) )
    __debugbreak();
  _InterlockedDecrement(&dword_14FDE8068);
  if ( (int)g_frontEndSwapFrame < g_backEndSwapFrame )
  {
    LODWORD(v4) = g_backEndSwapFrame;
    LODWORD(v2) = g_frontEndSwapFrame;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_init.cpp", 9655, ASSERT_TYPE_ASSERT, "( g_frontEndSwapFrame ) >= ( g_backEndSwapFrame )", "%s >= %s\n\t%u, %u", "g_frontEndSwapFrame", "g_backEndSwapFrame", v2, v4) )
      __debugbreak();
  }
  if ( (int)g_frontEndSwapFrame > g_backEndSwapFrame + 1 )
  {
    LODWORD(v4) = g_backEndSwapFrame + 1;
    LODWORD(v2) = g_frontEndSwapFrame;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_init.cpp", 9656, ASSERT_TYPE_ASSERT, "( g_frontEndSwapFrame ) <= ( g_backEndSwapFrame + 1 )", "%s <= %s\n\t%u, %u", "g_frontEndSwapFrame", "g_backEndSwapFrame + 1", v2, v4) )
      __debugbreak();
  }
  if ( (int)g_frontEndSwapFrame < g_backEndSwapFrame )
    Sys_Error((const ObfuscateErrorText)&stru_1444059C0, g_frontEndSwapFrame, (unsigned int)g_backEndSwapFrame);
  if ( (int)g_frontEndSwapFrame > g_backEndSwapFrame + 1 )
    Sys_Error((const ObfuscateErrorText)&stru_144405A08, g_frontEndSwapFrame, (unsigned int)(g_backEndSwapFrame + 1));
  if ( ((unsigned __int8)&g_frontEndSwapFrame & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &g_frontEndSwapFrame) )
    __debugbreak();
  _InterlockedIncrement((volatile signed __int32 *)&g_frontEndSwapFrame);
  if ( Sys_IsMainThread() )
  {
    v1 = Sys_Microseconds();
    CG_Draw_AddFrontendSyncFrameTimeUSec(v1 - v0);
  }
  if ( frontEndDataOut )
    frontEndDataOut->endSwapFrame = g_frontEndSwapFrame;
  RB_Stats_Clear(g_frontEndSwapFrame);
}

/*
==============
R_ResetGPUHangDetection
==============
*/
void R_ResetGPUHangDetection(unsigned int enterTime)
{
  s_gpuSyncStartMs = enterTime;
  s_gpuHung = 0;
}

/*
==============
R_SetD3DSwapChainDesc
==============
*/
void R_SetD3DSwapChainDesc(DXGI_SWAP_CHAIN_DESC1 *swapChainDesc, const GfxWindowParms *wndParams)
{
  GfxPixelFormat v4; 

  if ( !swapChainDesc && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_init.cpp", 3095, ASSERT_TYPE_ASSERT, "(swapChainDesc)", (const char *)&queryFormat, "swapChainDesc") )
    __debugbreak();
  if ( !wndParams && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_init.cpp", 3096, ASSERT_TYPE_ASSERT, "(wndParams)", (const char *)&queryFormat, "wndParams") )
    __debugbreak();
  *(_QWORD *)&swapChainDesc->Width = 0i64;
  *(_QWORD *)&swapChainDesc->Format = 0i64;
  swapChainDesc->SampleDesc = 0i64;
  *(_QWORD *)&swapChainDesc->BufferUsage = 0i64;
  *(_QWORD *)&swapChainDesc->Scaling = 0i64;
  *(_QWORD *)&swapChainDesc->AlphaMode = 0i64;
  swapChainDesc->Width = wndParams->displayWidth;
  swapChainDesc->Height = wndParams->displayHeight;
  v4 = g_R_RT_renderTargetFmts[1];
  if ( g_R_RT_renderTargetFmts[1] != GFX_PF_R10G10B10A2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_init.cpp", 3113, ASSERT_TYPE_ASSERT, "(format == GFX_PF_R10G10B10A2)", (const char *)&queryFormat, "format == GFX_PF_R10G10B10A2") )
    __debugbreak();
  swapChainDesc->Format = R_D3D_GetDXGIFormatForPixelFormat(v4);
  swapChainDesc->Stereo = 0;
  swapChainDesc->Flags = 0;
  swapChainDesc->SampleDesc = (DXGI_SAMPLE_DESC)1i64;
  swapChainDesc->BufferUsage = 1072;
  *(_QWORD *)&swapChainDesc->BufferCount = 2i64;
  *(_QWORD *)&swapChainDesc->SwapEffect = 3i64;
  if ( R_GetDisplayColorimetry() == GFX_COLORIMETRY_BT709_BT709 )
    swapChainDesc->Flags |= 0x200000u;
}

/*
==============
R_SetGPUFrameWait
==============
*/
void R_SetGPUFrameWait(int gpuFrameWait)
{
  int v3; 

  if ( (unsigned int)gpuFrameWait > 2 )
  {
    v3 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_init.cpp", 9054, ASSERT_TYPE_ASSERT, "( 0 ) <= ( gpuFrameWait ) && ( gpuFrameWait ) <= ( 2 )", "gpuFrameWait not in [0, 2]\n\t%i not in [%i, %i]", gpuFrameWait, 0i64, v3) )
      __debugbreak();
  }
  g_gpuFrameWait = gpuFrameWait;
}

/*
==============
R_SetWndParms
==============
*/
void R_SetWndParms(GfxWindowParms *wndParms)
{
  int ActivationFactoryByPCWSTR; 
  int v4; 
  Windows::UI::Core::CoreWindow *v5; 
  Windows::UI::Core::CoreWindow *v6; 
  Windows::UI::Core::CoreWindow *v8; 
  int ContextToken; 
  struct IUnknown *v10; 
  IUnknown *ptr; 
  IUnknown *v12; 
  XB3ConsoleType XB3ConsoleType; 
  int integer; 
  int v15; 
  int v16; 
  RenderMemMode DefaultRenderMemMode; 
  double SceneLODScale; 
  float v19; 
  const dvar_t *v20; 
  double v21; 
  Platform::Guid pGuid; 
  Platform::Agile<Windows::UI::Core::CoreWindow,1> v23; 
  Windows::UI::Core::CoreWindow *object; 
  void *ppActivationFactory; 
  ULONG_PTR pToken; 

  pGuid.__vftable = (Platform::Object_vtbl *)0x41B13C2A4D239005i64;
  *(_DWORD *)&pGuid.__d = 1800610448;
  *(_DWORD *)&pGuid.__h = -1315713095;
  ppActivationFactory = NULL;
  ActivationFactoryByPCWSTR = __winRT::__getActivationFactoryByPCWSTR(L"Windows.UI.Core.CoreWindow", &pGuid, &ppActivationFactory);
  if ( ActivationFactoryByPCWSTR < 0 )
    __abi_WinRTraiseException(ActivationFactoryByPCWSTR);
  object = NULL;
  v4 = (*(__int64 (__fastcall **)(void *, Windows::UI::Core::CoreWindow **))(*(_QWORD *)ppActivationFactory + 48i64))(ppActivationFactory, &object);
  if ( v4 < 0 )
    __abi_WinRTraiseException(v4);
  v5 = object;
  v6 = object;
  if ( object )
  {
    object->__abi_AddRef(object);
    v5 = object;
  }
  if ( v5 )
    v5->__abi_Release(v5);
  pToken = 0i64;
  if ( ppActivationFactory )
    (*(void (__fastcall **)(void *))(*(_QWORD *)ppActivationFactory + 16i64))(ppActivationFactory);
  __asm { vpxor   xmm0, xmm0, xmm0 }
  *(_OWORD *)&v23._object = _XMM0;
  v23._contextToken = 0i64;
  v23._agileState = SaudiArabia;
  Platform::Agile<Windows::UI::Core::CoreWindow,1>::SetObject(&v23, v6);
  Platform::Agile<Windows::UI::Core::CoreWindow,1>::Swap(&v23, &wndParms->coreWindow);
  v8 = v23._object;
  if ( v23._object )
  {
    v23._object = NULL;
    ContextToken = CoGetContextToken(&pToken);
    if ( ContextToken < 0 )
      __abi_WinRTraiseException(ContextToken);
    if ( v23._contextToken && v23._contextCallback.ptr_ && v23._contextToken != pToken )
      Platform::Details::ReleaseInContextImpl((Platform::Details *)v8, v23._contextCallback.ptr_, v10);
    else
      v8->__abi_Release(v8);
    ptr = v23._contextCallback.ptr_;
    if ( v23._contextCallback.ptr_ )
    {
      v23._contextCallback.ptr_ = NULL;
      ptr->Release(ptr);
    }
    v23._contextToken = 0i64;
    v23._agileState = SaudiArabia;
    v8 = v23._object;
  }
  v12 = v23._contextCallback.ptr_;
  if ( v23._contextCallback.ptr_ )
  {
    v23._contextCallback.ptr_ = NULL;
    v12->Release(v12);
    v8 = v23._object;
  }
  if ( v8 )
    v8->__abi_Release(v8);
  if ( v6 )
    v6->__abi_Release(v6);
  wndParms->isWideScreen = 1;
  wndParms->hz = 60.0;
  XB3ConsoleType = Sys_GetXB3ConsoleType();
  integer = r_mode->current.integer;
  if ( integer )
  {
    v15 = integer - 1;
    if ( v15 )
    {
      v16 = v15 - 1;
      if ( v16 )
      {
        if ( v16 == 1 )
        {
          if ( XB3ConsoleType == XB3_CONSOLE_SCORPIO )
          {
            wndParms->sceneWidth = 2712;
            wndParms->sceneHeight = 1528;
            wndParms->displayWidth = 3840;
            wndParms->displayHeight = 2160;
            goto LABEL_38;
          }
        }
        else if ( XB3ConsoleType == XB3_CONSOLE_SCORPIO )
        {
          wndParms->sceneWidth = 3840;
          wndParms->sceneHeight = 2160;
          wndParms->displayWidth = 3840;
          wndParms->displayHeight = 2160;
          goto LABEL_38;
        }
      }
      else if ( XB3ConsoleType == XB3_CONSOLE_SCORPIO )
      {
        wndParms->sceneWidth = 1920;
        wndParms->sceneHeight = 1080;
        wndParms->displayWidth = 3840;
        wndParms->displayHeight = 2160;
        goto LABEL_38;
      }
    }
    wndParms->sceneWidth = 1920;
    wndParms->sceneHeight = 1080;
  }
  else
  {
    wndParms->sceneWidth = 1600;
    wndParms->sceneHeight = 896;
  }
  wndParms->displayHeight = 1080;
  wndParms->displayWidth = 1920;
LABEL_38:
  DefaultRenderMemMode = R_GetDefaultRenderMemMode();
  SceneLODScale = R_GetSceneLODScale(DefaultRenderMemMode);
  v19 = *(float *)&SceneLODScale;
  v20 = r_lodScale;
  if ( !r_lodScale )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_init.cpp", 6959, ASSERT_TYPE_ASSERT, "(r_lodScale)", (const char *)&queryFormat, "r_lodScale", -2i64) )
      __debugbreak();
    v20 = r_lodScale;
  }
  v21 = I_fclamp(*(float *)&SceneLODScale, v20->domain.value.min, v20->domain.value.max);
  Dvar_SetFloat_Internal(r_lodScale, *(float *)&v21);
  if ( v19 < 0.99900001 )
    Dvar_SetInt_Internal(r_SkinnedCacheSize, 737280);
}

/*
==============
R_Shutdown
==============
*/
void R_Shutdown(int destroyWindow, int isRestart)
{
  GfxCmdBufContext result; 

  R_SyncRenderThread();
  R_ShutdownSMAATemporal();
  R_ShutdownVelocity();
  R_RT_DestroyAndClearGlobal(R_RENDERTARGET_SAVED_SCREEN_0);
  R_RT_DestroyAndClearGlobal(R_RENDERTARGET_SAVED_SCREEN_1);
  R_RT_DestroyAndClearGlobal(R_RENDERTARGET_RESOLVED_SCENE_0);
  R_RT_DestroyAndClearGlobal(R_RENDERTARGET_RESOLVED_SCENE_1);
  if ( !r_glob.mainThreadHasOwnership && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_init.cpp", 7984, ASSERT_TYPE_ASSERT, "(r_glob.mainThreadHasOwnership)", (const char *)&queryFormat, "r_glob.mainThreadHasOwnership") )
    __debugbreak();
  if ( g_dx.d3d12device )
  {
    _XMM0 = (__int128)*RB_GetBackendCmdBufContext(&result);
    __asm { vpextrq rbx, xmm0, 1 }
    if ( _RBX->device )
    {
      R_LockGfxImmediateContext();
      R_ClearAllVertexBuffers(_RBX);
      R_UnlockGfxImmediateContext();
    }
  }
  R_ShutdownDebug();
  R_ShutdownLightDefs();
  R_ShutdownWorld(isRestart, 1);
  CPUTimelineProfilerView_Shutdown();
  if ( destroyWindow )
  {
    DB_BackendCallbacks_CancelAllAndFlush();
    R_ShutdownRenderCommands();
  }
  R_UnregisterTestmonkeyCmds();
  R_UnregisterCmds();
  FreeLoadScreen();
}

/*
==============
R_ShutdownStreams
==============
*/
void R_ShutdownStreams(void)
{
  GfxCmdBufContext result; 

  if ( g_dx.d3d12device )
  {
    _XMM0 = (__int128)*RB_GetBackendCmdBufContext(&result);
    __asm { vpextrq rbx, xmm0, 1 }
    if ( _RBX->device )
    {
      R_LockGfxImmediateContext();
      R_ClearAllVertexBuffers(_RBX);
      R_UnlockGfxImmediateContext();
    }
  }
}

/*
==============
R_StoreWindowSettings
==============
*/
void R_StoreWindowSettings(const GfxWindowParms *wndParms)
{
  __int64 sceneHeight; 
  float v7; 
  float sceneWidth; 
  float displayHeight; 
  float displayWidth; 

  sceneHeight = (unsigned int)wndParms->sceneHeight;
  vidConfig.sceneWidth = wndParms->sceneWidth;
  vidConfig.sceneHeight = sceneHeight;
  vidConfig.displayWidth = wndParms->displayWidth;
  vidConfig.displayHeight = wndParms->displayHeight;
  _XMM0 = wndParms->isWideScreen;
  __asm { vpcmpeqd xmm2, xmm0, xmm1 }
  _XMM0 = LODWORD(FLOAT_1_7777778);
  __asm { vblendvps xmm1, xmm0, xmm6, xmm2 }
  vidConfig.windowAspectRatio = *(float *)&_XMM1;
  *(float *)&_XMM2 = (float)vidConfig.sceneWidth;
  *(float *)&_XMM0 = (float)sceneHeight;
  vidConfig.sceneAspectRatio = *(float *)&_XMM2 / *(float *)&_XMM0;
  vidConfig.displayAspectRatio = (float)wndParms->displayWidth / (float)wndParms->displayHeight;
  if ( !com_wideScreen && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_init.cpp", 1417, ASSERT_TYPE_ASSERT, "(com_wideScreen)", (const char *)&queryFormat, "com_wideScreen") )
    __debugbreak();
  Dvar_SetBool_Internal(com_wideScreen, vidConfig.windowAspectRatio != 1.3333334);
  vidConfig.displayFrequency = wndParms->hz;
  v7 = (float)vidConfig.sceneHeight;
  sceneWidth = (float)vidConfig.sceneWidth;
  displayHeight = (float)vidConfig.displayHeight;
  vidConfig.aspectRatioScenePixel = (float)(v7 * vidConfig.windowAspectRatio) / sceneWidth;
  displayWidth = (float)vidConfig.displayWidth;
  vidConfig.aspectRatioDisplayPixel = (float)(displayHeight * vidConfig.windowAspectRatio) / displayWidth;
}

/*
==============
R_SupportsFullscreenExclusiveMode
==============
*/
char R_SupportsFullscreenExclusiveMode()
{
  return 1;
}

/*
==============
R_SupportsWindowedVSyncDisable
==============
*/
bool R_SupportsWindowedVSyncDisable()
{
  return 0;
}

/*
==============
R_SwapCallback
==============
*/
void R_SwapCallback(void)
{
  unsigned __int64 v0; 
  int CurrentThreadContext; 
  __int64 v2; 
  unsigned int m_readPtr; 
  CPUTimelineProfiler::Events *p_m_events; 
  signed int v5; 
  char (*m_name)[32]; 
  const char *v7; 
  __int64 v8; 
  __int64 v9; 
  char *v10; 
  char *v11; 
  char v12; 
  __int64 v13; 
  signed __int32 v14[8]; 
  __int64 v15; 

  v0 = Sys_Microseconds();
  if ( ((unsigned __int8)&g_gpuSwapFrame & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", (const void *)&g_gpuSwapFrame) )
    __debugbreak();
  _InterlockedIncrement(&g_gpuSwapFrame);
  if ( !SetEvent(g_dx.flipHandledEvent) )
  {
    LODWORD(v15) = GetLastError();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_init.cpp", 3344, ASSERT_TYPE_ASSERT, "(result != 0)", "%s\n\t0x%x", "result != 0", v15) )
      __debugbreak();
  }
  if ( Sys_HasValidCurrentThreadContext() )
    CurrentThreadContext = Sys_GetCurrentThreadContext();
  else
    CurrentThreadContext = 28;
  if ( g_cpuProfiler.m_enabled && CurrentThreadContext < 28 )
  {
    v2 = CurrentThreadContext;
    m_readPtr = g_cpuProfiler.m_threadData[v2].m_eventAllocator.m_readPtr;
    p_m_events = &g_cpuProfiler.m_threadData[v2].m_events;
    _InterlockedOr(v14, 0);
    if ( g_cpuProfiler.m_threadData[v2].m_eventAllocator.m_writePtr - m_readPtr >= g_cpuProfiler.m_threadData[v2].m_eventAllocator.m_size - 1 )
    {
      g_cpuProfiler.m_threadData[v2].m_eventAllocator.m_oom = 1;
      R_GPU_AddHistogramSwap(v0);
      return;
    }
    v5 = g_cpuProfiler.m_threadData[v2].m_eventAllocator.m_writePtr++ & g_cpuProfiler.m_threadData[v2].m_eventAllocator.m_mask;
    if ( v5 != -1 )
    {
      m_name = g_cpuProfiler.m_threadData[v2].m_events.m_name;
      v7 = "Swap";
      v8 = v5;
      v9 = v5;
      m_name[v9][0] = 0;
      v10 = p_m_events->m_name[v9];
      v11 = v10 + 31;
      do
      {
        if ( v10 >= v11 )
          break;
        v12 = *v7++;
        *v10++ = v12;
      }
      while ( *v7 );
      *v10 = 0;
      v13 = v8;
      p_m_events->m_name[v9][31] = 0;
      p_m_events->m_base[v13].m_color = -29696;
      p_m_events->m_base[v13].m_thread = CurrentThreadContext;
      p_m_events->m_base[v13].m_time = __rdtsc();
    }
  }
  R_GPU_AddHistogramSwap(v0);
}

/*
==============
R_SyncGPURecordBeginBackend
==============
*/
void R_SyncGPURecordBeginBackend(unsigned int frame)
{
  __int64 v1; 
  volatile unsigned int *frontendFrame; 

  v1 = 0i64;
  frontendFrame = s_syncGpu.frontendFrame;
  do
  {
    if ( *frontendFrame == frame )
      break;
    v1 = (unsigned int)(v1 + 1);
    ++frontendFrame;
  }
  while ( (unsigned int)v1 < 4 );
  if ( (_DWORD)v1 != 4 )
    s_syncGpu.beginBackendTime[v1] = __rdtsc();
}

/*
==============
R_SyncGPURecordFrameStatistics
==============
*/
void R_SyncGPURecordFrameStatistics(unsigned int currFrame, unsigned int frameCount, const _DXGIX_FRAME_STATISTICS *statistics)
{
  unsigned int v3; 
  unsigned __int64 *p_VSyncCount; 
  bool v7; 
  __int64 v8; 
  unsigned __int64 v10; 
  __int128 v11; 

  v3 = 0;
  if ( !frameCount )
    goto LABEL_7;
  p_VSyncCount = &statistics->VSyncCount;
  while ( !*p_VSyncCount )
  {
    --currFrame;
    ++v3;
    p_VSyncCount += 15;
    if ( v3 >= frameCount )
      goto LABEL_7;
  }
  if ( v3 >= frameCount )
  {
LABEL_7:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_init.cpp", 9325, ASSERT_TYPE_ASSERT, "(statisticFrame < frameCount)", (const char *)&queryFormat, "statisticFrame < frameCount") )
      __debugbreak();
  }
  v7 = 0;
  v8 = v3;
  if ( s_syncGpu.prevVsyncCount )
    v7 = statistics[v8].VSyncCount > s_syncGpu.prevVsyncCount + 1;
  s_syncGpu.prevVsyncCount = statistics[v8].VSyncCount;
  if ( !v7 )
  {
    _XMM1 = COERCE_UNSIGNED_INT64(r_longFrameSlop->current.value / msecPerRawTimerTick);
    v10 = 0i64;
    if ( r_longFrameSlop->current.value / msecPerRawTimerTick >= 9.223372036854776e18 )
    {
      *((_QWORD *)&v11 + 1) = 0i64;
      *(double *)&v11 = *(double *)&_XMM1 - 9.223372036854776e18;
      _XMM1 = v11;
      if ( *(double *)&v11 < 9.223372036854776e18 )
        v10 = 0x8000000000000000ui64;
    }
    __asm { vcvttsd2si rdx, xmm1 }
    if ( statistics[v8].CPUTimeFlip - statistics[v8].CPUTimeFrameComplete < v10 + _RDX )
      v7 = 1;
  }
  Sys_EnterCriticalSection(CRITSECT_RECORD_SYNC_GPU);
  s_syncGpu.queueFlipTime = statistics[v8].CPUTimeFrameComplete;
  s_syncGpu.flipTime = statistics[v8].CPUTimeFlip;
  s_syncGpu.queueFlipFrame = currFrame;
  s_syncGpu.flipFrame = currFrame;
  if ( v7 )
    s_syncGpu.longFrame = currFrame;
  Sys_LeaveCriticalSection(CRITSECT_RECORD_SYNC_GPU);
}

/*
==============
R_SyncGPURecordWakeBackend
==============
*/
void R_SyncGPURecordWakeBackend(void)
{
  char frontendIndex; 

  frontendIndex = s_syncGpu.frontendIndex;
  s_syncGpu.wakeBackendTime[s_syncGpu.frontendIndex] = __rdtsc();
  s_syncGpu.frontendIndex = (frontendIndex + 1) & 3;
}

/*
==============
R_SyncGpu
==============
*/
void R_SyncGpu(void)
{
  unsigned __int64 v0; 
  unsigned __int64 v1; 
  __int128 v5; 
  unsigned __int64 v6; 
  unsigned __int64 v8; 
  unsigned int queueFlipFrame; 
  volatile unsigned __int64 queueFlipTime; 
  volatile unsigned int flipFrame; 
  volatile unsigned __int64 flipTime; 
  volatile unsigned int longFrame; 
  unsigned int v14; 
  volatile unsigned int *frontendFrame; 
  unsigned __int64 v16; 
  __int64 v17; 
  unsigned __int64 v18; 
  unsigned __int64 v19; 
  unsigned __int64 v20; 
  double v21; 
  __int128 v25; 
  unsigned __int64 v26; 
  __int128 v31; 
  unsigned __int64 v32; 
  unsigned __int64 v34; 
  double v35; 
  unsigned __int64 v37; 
  __int128 v38; 
  __int64 v40; 
  unsigned __int64 v42; 
  __int128 v43; 
  unsigned __int64 v45; 
  unsigned __int64 v46; 
  unsigned __int64 v47; 
  unsigned __int64 v48; 
  const char *v51; 
  __int64 frontendIndex; 
  unsigned __int64 v53; 
  __int64 v54; 
  __int64 v55; 
  unsigned __int64 timeoutUserData; 

  if ( (!Sys_IsMainThread() || R_IsInRemoteScreenUpdate()) && (!Sys_IsRenderThread() || !R_IsInRemoteScreenUpdate()) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_init.cpp", 9482, ASSERT_TYPE_ASSERT, "(( Sys_IsMainThread() && !R_IsInRemoteScreenUpdate() ) || ( Sys_IsRenderThread() && R_IsInRemoteScreenUpdate() ))", (const char *)&queryFormat, "( Sys_IsMainThread() && !R_IsInRemoteScreenUpdate() ) || ( Sys_IsRenderThread() && R_IsInRemoteScreenUpdate() )") )
    __debugbreak();
  if ( (int)g_frontEndSwapFrame < g_gpuSwapFrame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_init.cpp", 9487, ASSERT_TYPE_ASSERT, "( g_frontEndSwapFrame ) >= ( g_gpuSwapFrame )", "%s >= %s\n\t%u, %u", "g_frontEndSwapFrame", "g_gpuSwapFrame", g_frontEndSwapFrame, g_gpuSwapFrame) )
    __debugbreak();
  if ( (int)g_frontEndSwapFrame > g_gpuSwapFrame + 2 )
  {
    LODWORD(v55) = g_gpuSwapFrame + 2;
    LODWORD(v54) = g_frontEndSwapFrame;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_init.cpp", 9488, ASSERT_TYPE_ASSERT, "( g_frontEndSwapFrame ) <= ( g_gpuSwapFrame + 2 )", "%s <= %s\n\t%u, %u", "g_frontEndSwapFrame", "g_gpuSwapFrame + 2", v54, v55) )
      __debugbreak();
  }
  if ( (int)g_frontEndSwapFrame < g_gpuSwapFrame )
    Sys_Error((const ObfuscateErrorText)&stru_144405890, g_frontEndSwapFrame, (unsigned int)g_gpuSwapFrame);
  if ( (int)g_frontEndSwapFrame > g_gpuSwapFrame + 2 )
    Sys_Error((const ObfuscateErrorText)&stru_1444058D8, g_frontEndSwapFrame, (unsigned int)(g_gpuSwapFrame + 2));
  Sys_ProfBeginNamedEvent(0xFF808080, "R_SyncGpu");
  Profile2_UpdateEntry(37);
  if ( ((unsigned __int8)&dword_14FDE8064 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &dword_14FDE8064) )
    __debugbreak();
  _InterlockedIncrement(&dword_14FDE8064);
  Profile_BeginCSV(9);
  v0 = __rdtsc();
  v1 = Sys_Microseconds();
  s_gpuSyncStartMs = Sys_Milliseconds();
  s_gpuHung = 0;
  if ( scene.updateSound && !R_FinishGpuCatchup(0) )
  {
    scene.updateSound = 0;
    if ( SND_ExistsPendingRestore() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_init.cpp", 9518, ASSERT_TYPE_ASSERT, "(!SND_ExistsPendingRestore())", (const char *)&queryFormat, "!SND_ExistsPendingRestore()") )
      __debugbreak();
    CL_Main_UpdateSound(0);
  }
  Profile2_UpdateEntry(38);
  if ( ((unsigned __int8)&dword_14FDE8068 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &dword_14FDE8068) )
    __debugbreak();
  _InterlockedIncrement(&dword_14FDE8068);
  Profile_Begin(125);
  Sys_ProfBeginNamedEvent(0xFF404040, "wait gpu catchup");
  Sys_ProcessWorkerCmdsWithTimeout(R_FinishGpuCatchupWorker, NULL);
  Sys_ProfEndNamedEvent();
  Profile_EndInternal(NULL);
  Profile2_UpdateEntry(38);
  if ( ((unsigned __int64)&dword_14FDE8068 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &dword_14FDE8068) )
    __debugbreak();
  _InterlockedDecrement(&dword_14FDE8068);
  _XMM0 = 0i64;
  __asm { vcvtsi2sd xmm0, xmm0, cs:?g_maxFpsWaitTime@@3HA; int g_maxFpsWaitTime }
  *((_QWORD *)&v5 + 1) = *((_QWORD *)&_XMM0 + 1);
  *(double *)&v5 = *(double *)&_XMM0 / msecPerRawTimerTick;
  _XMM1 = v5;
  v6 = 0i64;
  if ( *(double *)&_XMM0 / msecPerRawTimerTick >= 9.223372036854776e18 )
  {
    *(double *)&v5 = *(double *)&v5 - 9.223372036854776e18;
    _XMM1 = v5;
    if ( *(double *)&v5 < 9.223372036854776e18 )
      v6 = 0x8000000000000000ui64;
  }
  __asm { vcvttsd2si rbx, xmm1 }
  v8 = v0 + v6 + _RBX;
  if ( !r_delayForSlop->current.enabled )
    goto LABEL_67;
  if ( !r_vsync->current.enabled )
    goto LABEL_67;
  Sys_EnterCriticalSection(CRITSECT_RECORD_SYNC_GPU);
  queueFlipFrame = s_syncGpu.queueFlipFrame;
  queueFlipTime = s_syncGpu.queueFlipTime;
  flipFrame = s_syncGpu.flipFrame;
  flipTime = s_syncGpu.flipTime;
  longFrame = s_syncGpu.longFrame;
  Sys_LeaveCriticalSection(CRITSECT_RECORD_SYNC_GPU);
  if ( !queueFlipFrame || !flipFrame || rg.frontEndFrameCount <= queueFlipFrame || rg.frontEndFrameCount < longFrame + r_longFrameBackoff->current.integer )
    goto LABEL_67;
  v14 = 0;
  frontendFrame = s_syncGpu.frontendFrame;
  do
  {
    if ( *frontendFrame == queueFlipFrame )
      break;
    ++v14;
    ++frontendFrame;
  }
  while ( v14 < 4 );
  if ( v14 == 4 )
    goto LABEL_67;
  v16 = 0i64;
  v17 = v14;
  v18 = s_syncGpu.wakeBackendTime[v14];
  if ( s_syncGpu.beginBackendTime[v17] > v18 && v18 > s_syncGpu.endDelayTime[v17] )
    v16 = s_syncGpu.beginBackendTime[v17] - s_syncGpu.wakeBackendTime[v17];
  v19 = s_syncGpu.endDelayTime[v17];
  if ( queueFlipTime < v19 + v16 )
    goto LABEL_67;
  v20 = queueFlipTime - v19 - v16;
  v21 = 1000000.0 / vidConfig.displayFrequency;
  _XMM0 = 0i64;
  __asm { vcvtsi2sd xmm0, xmm0, rcx }
  *((_QWORD *)&v25 + 1) = *((_QWORD *)&_XMM0 + 1);
  *(double *)&v25 = *(double *)&_XMM0 * v21 * (1.0 / usecPerRawTimerTick);
  _XMM2 = v25;
  v26 = 0i64;
  if ( *(double *)&v25 >= 9.223372036854776e18 )
  {
    *(double *)&v25 = *(double *)&v25 - 9.223372036854776e18;
    _XMM2 = v25;
    if ( *(double *)&v25 < 9.223372036854776e18 )
      v26 = 0x8000000000000000ui64;
  }
  __asm { vcvttsd2si rax, xmm2 }
  if ( v20 > v26 + _RAX )
    goto LABEL_67;
  _XMM0 = 0i64;
  __asm { vcvtsi2sd xmm0, xmm0, rax }
  *((_QWORD *)&v31 + 1) = *((_QWORD *)&_XMM0 + 1);
  *(double *)&v31 = *(double *)&_XMM0 * v21 * (1.0 / usecPerRawTimerTick);
  _XMM2 = v31;
  v32 = 0i64;
  if ( *(double *)&v31 >= 9.223372036854776e18 )
  {
    *(double *)&v31 = *(double *)&v31 - 9.223372036854776e18;
    _XMM2 = v31;
    if ( *(double *)&v31 < 9.223372036854776e18 )
      v32 = 0x8000000000000000ui64;
  }
  __asm { vcvttsd2si rdx, xmm2 }
  v34 = flipTime + v32 + _RDX;
  v35 = 1.0 / msecPerRawTimerTick;
  _XMM1 = COERCE_UNSIGNED_INT64(r_slopTarget->current.value * (1.0 / msecPerRawTimerTick));
  v37 = 0i64;
  if ( r_slopTarget->current.value * (1.0 / msecPerRawTimerTick) >= 9.223372036854776e18 )
  {
    *((_QWORD *)&v38 + 1) = 0i64;
    *(double *)&v38 = *(double *)&_XMM1 - 9.223372036854776e18;
    _XMM1 = v38;
    if ( *(double *)&v38 < 9.223372036854776e18 )
      v37 = 0x8000000000000000ui64;
  }
  __asm { vcvttsd2si r9, xmm1 }
  v40 = v37 + _R9;
  if ( v34 >= v40 + v20 )
  {
    _XMM1 = COERCE_UNSIGNED_INT64(r_slopDelayReduction->current.value * v35);
    v42 = 0i64;
    if ( r_slopDelayReduction->current.value * v35 >= 9.223372036854776e18 )
    {
      *((_QWORD *)&v43 + 1) = 0i64;
      *(double *)&v43 = *(double *)&_XMM1 - 9.223372036854776e18;
      _XMM1 = v43;
      if ( *(double *)&v43 < 9.223372036854776e18 )
        v42 = 0x8000000000000000ui64;
    }
    __asm { vcvttsd2si rcx, xmm1 }
    v45 = v42 + _RCX;
    v46 = v34 - v40 - v20;
    v47 = v46 - v45;
    if ( v46 < v45 )
      v47 = 0i64;
  }
  else
  {
LABEL_67:
    v47 = 0i64;
  }
  if ( v47 > v8 )
    v8 = v47;
  timeoutUserData = v8;
  g_maxFpsWaitTime = 0;
  if ( scene.updateSound && __rdtsc() < v8 )
  {
    scene.updateSound = 0;
    if ( SND_ExistsPendingRestore() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_init.cpp", 9562, ASSERT_TYPE_ASSERT, "(!SND_ExistsPendingRestore())", (const char *)&queryFormat, "!SND_ExistsPendingRestore()") )
      __debugbreak();
    CL_Main_UpdateSound(0);
    v8 = timeoutUserData;
  }
  v48 = __rdtsc();
  if ( v8 > v48 )
  {
    Profile_Begin(139);
    Profile2_UpdateEntry(39);
    if ( ((unsigned __int8)dword_14FDE806C & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", dword_14FDE806C) )
      __debugbreak();
    _InterlockedIncrement(dword_14FDE806C);
    _XMM0 = 0i64;
    __asm { vcvtsi2sd xmm0, xmm0, rax }
    if ( (__int64)(timeoutUserData - v48) < 0 )
      *(double *)&_XMM0 = *(double *)&_XMM0 + 1.844674407370955e19;
    v51 = j_va("wait frontend delay: %.3f ms", *(double *)&_XMM0 * msecPerRawTimerTick);
    Sys_ProfBeginNamedEvent(0xFF404040, v51);
    Sys_ProcessWorkerCmdsWithTimeout(R_FinishFrontendDelay, &timeoutUserData);
    Sys_ProfEndNamedEvent();
    Profile2_UpdateEntry(39);
    if ( ((unsigned __int64)dword_14FDE806C & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", dword_14FDE806C) )
      __debugbreak();
    _InterlockedDecrement(dword_14FDE806C);
    Profile_EndInternal(NULL);
  }
  frontendIndex = s_syncGpu.frontendIndex;
  s_syncGpu.endDelayTime[s_syncGpu.frontendIndex] = __rdtsc();
  s_syncGpu.frontendFrame[frontendIndex] = rg.frontEndFrameCount;
  Profile_EndCSV(9);
  Profile2_UpdateEntry(37);
  if ( ((unsigned __int64)&dword_14FDE8064 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &dword_14FDE8064) )
    __debugbreak();
  _InterlockedDecrement(&dword_14FDE8064);
  if ( Sys_IsMainThread() )
  {
    v53 = Sys_Microseconds();
    CG_Draw_AddFrontendSyncFrameTimeUSec(v53 - v1);
  }
  Sys_ProfEndNamedEvent();
}

/*
==============
R_TrackStatistics
==============
*/
void R_TrackStatistics(void)
{
  if ( !rg.stats )
  {
    s_stats_0.skinnedCachePeak = 0;
    rg.stats = &s_stats_0;
  }
}

/*
==============
R_TrackStatisticsStop
==============
*/
void R_TrackStatisticsStop(void)
{
  rg.stats = NULL;
}

/*
==============
R_UpdateTeamColors
==============
*/
void R_UpdateTeamColors(const vec4_t *colorMyTeam, const vec4_t *colorEnemyTeam, const vec4_t *colorMyParty)
{
  Byte4PackRgba(colorMyTeam, rg.colorMyTeam.array);
  Byte4PackRgba(colorEnemyTeam, rg.colorEnemyTeam.array);
  Byte4PackRgba(colorMyParty, rg.colorMyParty.array);
}

/*
==============
R_XB3_GpuHangBeginCallback
==============
*/
__int64 R_XB3_GpuHangBeginCallback(unsigned __int64 flags)
{
  if ( (flags & 1) != 0 )
    Com_Printf(8, "*********GPU FENCE DEADLOCK************\n");
  return 1i64;
}

/*
==============
R_XB3_GpuHangDumpCallback
==============
*/
void R_XB3_GpuHangDumpCallback(const wchar_t *strFileName)
{
  R_BackendGpuStatus_Dump();
  R_TG_GpuStatus_Dump();
  if ( IsDebuggerConnected() || com_unattendedMode && com_unattendedMode->current.enabled )
  {
    __debugbreak();
  }
  else
  {
    WerRegisterFile_0(strFileName, WerRegFileTypeOther, 0);
    RaiseException(0xC0000005, 0, 0, NULL);
  }
}

/*
==============
R_XB3_GpuHangPrintCallback
==============
*/
void R_XB3_GpuHangPrintCallback(const char *strLine)
{
  Com_Printf(8, "%s\n", strLine);
}


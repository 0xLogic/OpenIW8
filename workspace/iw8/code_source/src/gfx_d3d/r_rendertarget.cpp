/*
==============
R_RenderTargets_Init
==============
*/

void R_RenderTargets_Init(void)
{
  ?R_RenderTargets_Init@@YAXXZ();
}

/*
==============
R_RenderTargets_Shutdown
==============
*/

void R_RenderTargets_Shutdown(void)
{
  ?R_RenderTargets_Shutdown@@YAXXZ();
}

/*
==============
R_RenderTargets_Init
==============
*/
void R_RenderTargets_Init(void)
{
  R_RT_Globals_DisplayConfig displayConfig; 

  Com_Printf(8, "Initializing render targets...\n");
  R_RT_Manager_Startup();
  displayConfig.m_displayWidth = vidConfig.displayWidth;
  displayConfig.m_displayHeight = vidConfig.displayHeight;
  displayConfig.m_sceneWidth = vidConfig.sceneWidth;
  displayConfig.m_sceneHeight = vidConfig.sceneHeight;
  displayConfig.m_displaySwapChain = g_dx.displaySwapChain;
  displayConfig.m_gameDvrSdrSwapChain = g_dx.gameDvrSdrSwapChain;
  R_RT_Globals_CreateDisplay(&displayConfig);
  if ( !g_allocateMinimalResources )
    R_Screenshot_CreateDeferredQueue();
  R_TG_Init();
}

/*
==============
R_RenderTargets_Shutdown
==============
*/
void R_RenderTargets_Shutdown(void)
{
  R_RTT_DeleteAllSlots(LOCAL_CLIENT_0);
  RB_RTT_DeleteSlots(LOCAL_CLIENT_0, NULL);
  R_RTT_DeleteAllSlots(LOCAL_CLIENT_1);
  RB_RTT_DeleteSlots(LOCAL_CLIENT_1, NULL);
  R_TG_Shutdown();
  if ( !g_allocateMinimalResources )
  {
    RB_Draw3DScene_FreeRts();
    R_Screenshot_DestroyDeferredQueue();
  }
  R_RT_DestroyAndClearGlobal(R_RENDERTARGET_DISPLAY_BUFFER);
  R_RT_DestroyAndClearGlobal(R_RENDERTARGET_DISPLAY_BUFFER_PREV);
  R_RT_DestroyAndClearGlobal(R_RENDERTARGET_GAMEDVR_SDR_BUFFER);
  R_RT_DestroyAndClearGlobal(R_RENDERTARGET_GAMEDVR_SDR_BUFFER_PREV);
  memset_0(g_R_RT_globals, 0, sizeof(g_R_RT_globals));
  R_RT_Manager_Shutdown();
}


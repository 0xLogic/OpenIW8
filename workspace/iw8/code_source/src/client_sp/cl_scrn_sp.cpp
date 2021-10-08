/*
==============
CL_IsCGameRendering
==============
*/

int __fastcall CL_IsCGameRendering()
{
  return ?CL_IsCGameRendering@@YAHXZ();
}

/*
==============
CL_ScreenSP_DrawGameScene
==============
*/

bool __fastcall CL_ScreenSP_DrawGameScene(Scr_UpdateFrame_State updateState, bool *outFrameToggled)
{
  return ?CL_ScreenSP_DrawGameScene@@YA_NW4Scr_UpdateFrame_State@@PEA_N@Z(updateState, outFrameToggled);
}

/*
==============
CL_ScreenSP_GetDemoType
==============
*/

DemoType __fastcall CL_ScreenSP_GetDemoType()
{
  return ?CL_ScreenSP_GetDemoType@@YA?AW4DemoType@@XZ();
}

/*
==============
CL_ScreenSP_DrawOverlay
==============
*/

void __fastcall CL_ScreenSP_DrawOverlay(LocalClientNum_t localClientNum)
{
  ?CL_ScreenSP_DrawOverlay@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CL_ScreenSP_DrawUI
==============
*/

void __fastcall CL_ScreenSP_DrawUI(bool runLUI)
{
  ?CL_ScreenSP_DrawUI@@YAX_N@Z(runLUI);
}

/*
==============
CL_IsCGameRendering
==============
*/
_BOOL8 CL_IsCGameRendering()
{
  LocalClientNum_t OnlyLocalClientNum; 

  if ( !cls.uiStarted )
    return 0i64;
  OnlyLocalClientNum = CL_GetOnlyLocalClientNum();
  return CL_IsLocalClientConnectionActiveForAnyServer(OnlyLocalClientNum);
}

/*
==============
CL_ScreenSP_CGameRendering
==============
*/
void CL_ScreenSP_CGameRendering(LocalClientNum_t localClientNum, Scr_UpdateFrame_State updateState, unsigned int drawType)
{
  __int64 v3; 
  LocalClientNum_t OnlyLocalClientNum; 
  int v8; 

  v3 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v8 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 174, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, v8) )
      __debugbreak();
  }
  if ( clientUIActives[v3].connectionState != CA_ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_scrn_sp.cpp", 61, ASSERT_TYPE_ASSERT, "(CL_IsLocalClientConnectionActiveForAnyServer( localClientNum ))", (const char *)&queryFormat, "CL_IsLocalClientConnectionActiveForAnyServer( localClientNum )") )
    __debugbreak();
  Profile2_UpdateEntry(29);
  if ( ((unsigned __int8)&dword_14FDE8044 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &dword_14FDE8044) )
    __debugbreak();
  _InterlockedIncrement(&dword_14FDE8044);
  OnlyLocalClientNum = CL_GetOnlyLocalClientNum();
  CG_ViewSP_DrawActiveFrame((const LocalClientNum_t)v3, v3 == OnlyLocalClientNum, updateState, CUBEMAPSHOT_NONE, 0, drawType);
  R_AddCmdEndOfList();
  Profile2_UpdateEntry(29);
  if ( ((unsigned __int64)&dword_14FDE8044 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &dword_14FDE8044) )
    __debugbreak();
  _InterlockedDecrement(&dword_14FDE8044);
}

/*
==============
CL_ScreenSP_DrawGameScene
==============
*/
_BOOL8 CL_ScreenSP_DrawGameScene(Scr_UpdateFrame_State updateState, bool *outFrameToggled)
{
  LocalClientNum_t OnlyLocalClientNum; 
  int animFrametime; 
  int v6; 
  bool IsDemoPlayingForClient; 
  bool IsActive; 
  bool v9; 
  _BOOL8 result; 

  OnlyLocalClientNum = CL_GetOnlyLocalClientNum();
  if ( !outFrameToggled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_scrn_sp.cpp", 275, ASSERT_TYPE_ASSERT, "(outFrameToggled)", (const char *)&queryFormat, "outFrameToggled") )
    __debugbreak();
  R_SetupGlobalRenderingFeatures(1, 0);
  Physics_WaitForAllCommandsToFinish();
  if ( !CL_IsLocalClientConnectionActiveForAnyServer(OnlyLocalClientNum) || R_IsSortPending() )
  {
    v9 = 0;
  }
  else
  {
    CL_MainSP_UpdateTransitionSettleBeforeClientFrame(OnlyLocalClientNum);
    animFrametime = cls.animFrametime;
    v6 = com_time;
    IsDemoPlayingForClient = SV_IsDemoPlayingForClient();
    CG_ViewSP_BeginFrame(OnlyLocalClientNum, IsDemoPlayingForClient ? HALF_HALF : NONE, updateState, v6, animFrametime);
    CG_UpdateSSR(OnlyLocalClientNum);
    IsActive = CG_PIP_IsActive(OnlyLocalClientNum);
    LOBYTE(animFrametime) = CG_PIP_IsRenderToTexture(OnlyLocalClientNum);
    CG_BlurScene_EnableCheck(OnlyLocalClientNum);
    if ( (_BYTE)animFrametime && IsActive && !r_disablePIP->current.enabled )
    {
      CL_ScreenSP_CGameRendering(OnlyLocalClientNum, updateState, 1u);
      R_IssueRenderCommandsEnd();
      CG_PIP_DrawActiveFrame(OnlyLocalClientNum, updateState, 2u);
      CL_MainSP_UpdateTransitionSettleAfterClientFrame(OnlyLocalClientNum);
      v9 = 1;
    }
    else
    {
      CL_ScreenSP_CGameRendering(OnlyLocalClientNum, updateState, 3u);
      CL_MainSP_UpdateTransitionSettleAfterClientFrame(OnlyLocalClientNum);
      v9 = 1;
    }
  }
  CL_MainSP_TransientAutoPauseGame();
  result = v9;
  *outFrameToggled = v9;
  return result;
}

/*
==============
CL_ScreenSP_DrawOverlay
==============
*/
void CL_ScreenSP_DrawOverlay(LocalClientNum_t localClientNum)
{
  const dvar_t *v2; 
  bool IsLocalClientConnectionActiveForAnyServer; 

  CL_SetFullScreenViewport();
  R_AddCmdProjectionSet2D();
  v2 = DVARBOOL_cg_drawDevOverlays;
  if ( !DVARBOOL_cg_drawDevOverlays && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawDevOverlays") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  if ( v2->current.enabled )
  {
    IsLocalClientConnectionActiveForAnyServer = CL_IsLocalClientConnectionActiveForAnyServer(localClientNum);
    Profile_Begin(479);
    if ( IsLocalClientConnectionActiveForAnyServer )
      CG_DrawDebugSP_DrawFullScreenDebugOverlays(localClientNum);
    else
      CG_DrawDebugSP_DrawFrontendOverlays(localClientNum);
    Profile_EndInternal(NULL);
    R_FontCache_DebugDisplay();
    R_DrawRadiantLiveConnectionStatus();
    Con_DrawConsole(localClientNum);
    GamerProfile_DebugDrawFullscreenInfo();
    DevGui_Draw(localClientNum);
  }
  if ( CL_IsLocalClientConnectionActiveForAnyServer(localClientNum) )
    CG_DrawWaterMark(localClientNum);
}

/*
==============
CL_ScreenSP_DrawUI
==============
*/
void CL_ScreenSP_DrawUI(bool runLUI)
{
  LocalClientNum_t OnlyLocalClientNum; 
  connstate_t LocalClientAnyConnectionState; 

  OnlyLocalClientNum = CL_GetOnlyLocalClientNum();
  if ( DB_IsDoingSPHotLoad() )
  {
    R_AddCmdClearScreen(15, 0);
LABEL_3:
    UI_DrawConnectScreen();
    return;
  }
  LocalClientAnyConnectionState = CL_GetLocalClientAnyConnectionState(OnlyLocalClientNum);
  if ( LocalClientAnyConnectionState == CA_MAP_RESTART )
  {
    R_AddCmdClearScreen(15, 0);
    return;
  }
  UI_UpdateTime(OnlyLocalClientNum, cls.realtime);
  if ( LocalClientAnyConnectionState == CA_DISCONNECTED )
  {
    R_AddCmdClearScreen(15, 0);
LABEL_23:
    if ( runLUI )
      LUI_CoD_RunNoClientFrame(OnlyLocalClientNum);
    return;
  }
  if ( LocalClientAnyConnectionState != CA_LOADING )
  {
    if ( LocalClientAnyConnectionState == CA_ACTIVE )
    {
      if ( Sys_IsRenderThread() )
      {
        if ( R_IsInRemoteScreenUpdate() )
        {
          R_AddCmdClearScreen(15, 0);
          if ( !cls.startedMainThreadRenderLoop )
          {
            if ( cls.displayScreenShotLoadingScreen )
              UI_DrawScreenShotLoadingScreen();
            else
              UI_DrawConnectScreen();
          }
        }
      }
    }
    else
    {
      Com_Error_impl(ERR_FATAL, (const ObfuscateErrorText)&stru_14423CE00, 597i64);
    }
    goto LABEL_23;
  }
  R_AddCmdClearScreen(15, 0);
  if ( !runLUI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_sp\\cl_scrn_sp.cpp", 238, ASSERT_TYPE_ASSERT, "(runLUI)", (const char *)&queryFormat, "runLUI") )
    __debugbreak();
  LUI_CoD_RunNoClientFrame(OnlyLocalClientNum);
  if ( !cls.displayScreenShotLoadingScreen )
    goto LABEL_3;
  UI_DrawScreenShotLoadingScreen();
}

/*
==============
CL_ScreenSP_GetDemoType
==============
*/
__int64 CL_ScreenSP_GetDemoType()
{
  return SV_IsDemoPlayingForClient() ? 2 : 0;
}


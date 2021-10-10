/*
==============
CL_ScreenMP_DrawOverlay
==============
*/

void __fastcall CL_ScreenMP_DrawOverlay(LocalClientNum_t localClientNum)
{
  ?CL_ScreenMP_DrawOverlay@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CL_ScreenMP_GetDemoType
==============
*/

DemoType __fastcall CL_ScreenMP_GetDemoType(const LocalClientNum_t localClientNum)
{
  return ?CL_ScreenMP_GetDemoType@@YA?AW4DemoType@@W4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CL_ScreenMP_DrawGameScene
==============
*/

bool __fastcall CL_ScreenMP_DrawGameScene(bool *outFrameToggled)
{
  return ?CL_ScreenMP_DrawGameScene@@YA_NPEA_N@Z(outFrameToggled);
}

/*
==============
CL_ScreenMP_DrawUI
==============
*/

void __fastcall CL_ScreenMP_DrawUI(const LocalClientNum_t localClientNum, bool runLUI)
{
  ?CL_ScreenMP_DrawUI@@YAXW4LocalClientNum_t@@_N@Z(localClientNum, runLUI);
}

/*
==============
CL_ScreenMP_DrawGameScene
==============
*/
char CL_ScreenMP_DrawGameScene(bool *outFrameToggled)
{
  char v2; 
  unsigned int v3; 
  int v4; 
  unsigned int v5; 
  int v6; 
  int v7; 
  bool *isActive; 
  _BYTE *frontEndSceneState; 
  int v10; 
  LocalClientNum_t v11; 
  clientMigState_t *p_migrationState; 
  clientMigState_t *v13; 
  float v14; 
  LocalClientNum_t v15; 
  bool v16; 
  bool v17; 
  ClActiveClientMP *ClientMP; 
  bool IsPlayingServer; 
  char v21; 
  __int64 renderScreen; 
  __int64 drawType; 
  __int64 v24; 
  __int64 v25; 
  char v27; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_scrn_mp.cpp", 379, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( !outFrameToggled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_scrn_mp.cpp", 380, ASSERT_TYPE_ASSERT, "(outFrameToggled)", (const char *)&queryFormat, "outFrameToggled") )
    __debugbreak();
  v2 = 0;
  v27 = 0;
  v3 = 3;
  CgSoundSystemMP::ClearSoundPlaybackTracking();
  v4 = 0;
  *outFrameToggled = 0;
  v5 = 0;
  v6 = 0;
  v7 = 0;
  if ( SLODWORD(cl_maxLocalClients) <= 0 )
  {
LABEL_51:
    R_SetupGlobalRenderingFeatures(v6, v4 > 0);
    v11 = LOCAL_CLIENT_0;
    p_migrationState = &clientUIActives[0].migrationState;
    if ( SLODWORD(cl_maxLocalClients) > 0 )
    {
      v13 = &clientUIActives[0].migrationState;
      do
      {
        if ( CL_IsLocalClientConnectionActiveForAnyServer(v11) )
        {
          if ( (unsigned int)v11 >= LOCAL_CLIENT_COUNT )
          {
            LODWORD(drawType) = 2;
            LODWORD(renderScreen) = v11;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\client_mp.h", 254, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", renderScreen, drawType) )
              __debugbreak();
          }
          if ( *v13 != CMSTATE_LIMBO )
          {
            CG_PlayerState_RestorePredictedPlayerState(v11);
            CG_PredictMP_SavePlayerState(v11);
          }
        }
        ++v11;
        v13 += 110;
      }
      while ( v11 < SLODWORD(cl_maxLocalClients) );
      v2 = 0;
    }
    Physics_WaitForAllCommandsToFinish();
    v14 = cl_maxLocalClients;
    v15 = LOCAL_CLIENT_0;
    if ( SLODWORD(cl_maxLocalClients) <= 0 )
      return v2;
    v16 = LODWORD(cl_maxLocalClients) != 0;
    while ( 1 )
    {
      if ( !v16 )
      {
        *(float *)&drawType = v14;
        LODWORD(renderScreen) = v15;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_static.h", 352, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( (cl_maxLocalClients) )", "localClientNum doesn't index MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", renderScreen, drawType) )
          __debugbreak();
        v14 = cl_maxLocalClients;
      }
      if ( v14 == 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_static.h", 336, ASSERT_TYPE_ASSERT, "(cl_maxLocalClients)", "%s\n\tMust be called after client allocation", "cl_maxLocalClients") )
        __debugbreak();
      if ( cls.m_localClientsActive.activeCount <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_static.h", 353, ASSERT_TYPE_ASSERT, "(GetGameLocalClientActiveCount() > 0)", "%s\n\tClient active data has not been setup", "GetGameLocalClientActiveCount() > 0") )
        __debugbreak();
      if ( cls.m_localClientsActive.firstActiveIndex == LOCAL_CLIENT_INVALID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_static.h", 354, ASSERT_TYPE_ASSERT, "(m_localClientsActive.firstActiveIndex != LOCAL_CLIENT_INVALID)", "%s\n\tClient active data has not been setup", "m_localClientsActive.firstActiveIndex != LOCAL_CLIENT_INVALID") )
        __debugbreak();
      v17 = v15 == cls.m_localClientsActive.firstActiveIndex;
      if ( ++v7 == v6 )
      {
        if ( v3 != 3 )
          v3 = 2;
      }
      else
      {
        v3 = v7 == 1;
      }
      CG_UpdateSSR(v15);
      CG_BlurScene_EnableCheck(v15);
      if ( !CL_IsLocalClientConnectionActiveForAnyServer(v15) )
        goto LABEL_93;
      if ( (unsigned int)v15 >= LOCAL_CLIENT_COUNT )
      {
        LODWORD(drawType) = 2;
        LODWORD(renderScreen) = v15;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\client_mp.h", 254, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", renderScreen, drawType) )
          __debugbreak();
      }
      if ( *p_migrationState == CMSTATE_LIMBO )
        goto LABEL_93;
      ClientMP = ClActiveClientMP::GetClientMP(v15);
      IsPlayingServer = CL_Demo_IsPlayingServer(v15);
      if ( !CG_ViewMP_DrawActiveFrame(v15, ClientMP->serverTime, IsPlayingServer ? HALF_HALF : NONE, CUBEMAPSHOT_NONE, 0, 1, v3) )
        break;
      UI_UpdateTime(v15, cls.realtime);
      R_AddCmdEndOfList();
      v2 = 1;
      if ( v17 )
      {
        v21 = 1;
        v27 = 1;
        goto LABEL_95;
      }
LABEL_94:
      v21 = v27;
LABEL_95:
      if ( v7 != v6 )
        R_IssueRenderCommandsEnd();
      ++v15;
      p_migrationState += 110;
      *outFrameToggled = 1;
      v14 = cl_maxLocalClients;
      v16 = (unsigned int)v15 < LODWORD(cl_maxLocalClients);
      if ( v15 >= SLODWORD(cl_maxLocalClients) )
      {
        if ( v2 && !v21 && !SND_ExistsPendingRestore() )
          CL_Main_UpdateSound(0);
        return v2;
      }
    }
    if ( CL_IsLocalClientConnectionActiveForAnyServer(v15) )
      CL_InputMP_CreateNewCommands_0(v15);
    CL_InputMP_SavePredictedData(v15);
    if ( CL_InputMP_ReadyToSendPacket(v15) && (!Com_GameMode_SupportsFeature(WEAPON_SCOPE_TOGGLE_ON|WEAPON_FIRING|0x80) || !Com_MP_GetIsLocalServerPaused()) )
      CL_InputMP_WritePacket(v15);
LABEL_93:
    R_ResetGlobalViews();
    R_ToggleSmpFrame(v15);
    R_IssueRenderCommandsBegin(v3);
    goto LABEL_94;
  }
  isActive = cls.m_localClientsActive.isActive;
  frontEndSceneState = clientUIActives[0].frontEndSceneState;
  while ( 1 )
  {
    if ( v5 >= 2 )
    {
      LODWORD(drawType) = 2;
      LODWORD(renderScreen) = v5;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_static.h", 343, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", renderScreen, drawType) )
        __debugbreak();
    }
    if ( !LODWORD(cl_maxLocalClients) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_static.h", 336, ASSERT_TYPE_ASSERT, "(cl_maxLocalClients)", "%s\n\tMust be called after client allocation", "cl_maxLocalClients") )
      __debugbreak();
    if ( cls.m_localClientsActive.activeCount <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_static.h", 344, ASSERT_TYPE_ASSERT, "(GetGameLocalClientActiveCount() > 0)", "%s\n\tClient active data has not been setup", "GetGameLocalClientActiveCount() > 0") )
      __debugbreak();
    if ( !*isActive && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_scrn_mp.cpp", 396, ASSERT_TYPE_ASSERT, "(cls.IsGameLocalClientActive( localClientNum ))", (const char *)&queryFormat, "cls.IsGameLocalClientActive( localClientNum )") )
      __debugbreak();
    if ( v5 >= 2 )
    {
      LODWORD(drawType) = 2;
      LODWORD(renderScreen) = v5;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 174, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", renderScreen, drawType) )
        __debugbreak();
    }
    if ( *((_DWORD *)frontEndSceneState - 7) != 9 || R_IsSortPending() )
      return 0;
    ++v6;
    if ( v5 >= 2 )
    {
      LODWORD(drawType) = 2;
      LODWORD(renderScreen) = v5;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 165, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", renderScreen, drawType) )
        __debugbreak();
    }
    v10 = v4 + 1;
    if ( !*frontEndSceneState )
      v10 = v4;
    v4 = v10;
    ++v5;
    ++isActive;
    frontEndSceneState += 440;
    if ( (int)v5 >= SLODWORD(cl_maxLocalClients) )
    {
      if ( v6 )
      {
        if ( !LODWORD(cl_maxLocalClients) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_static.h", 336, ASSERT_TYPE_ASSERT, "(cl_maxLocalClients)", "%s\n\tMust be called after client allocation", "cl_maxLocalClients") )
          __debugbreak();
        if ( v6 != cls.m_localClientsActive.activeCount )
        {
          if ( !LODWORD(cl_maxLocalClients) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_static.h", 336, ASSERT_TYPE_ASSERT, "(cl_maxLocalClients)", "%s\n\tMust be called after client allocation", "cl_maxLocalClients") )
            __debugbreak();
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_scrn_mp.cpp", 420, ASSERT_TYPE_ASSERT, "( connectionActiveCount ) == ( cls.GetGameLocalClientActiveCount() )", "%s == %s\n\t%i, %i", "connectionActiveCount", "cls.GetGameLocalClientActiveCount()", v6, cls.m_localClientsActive.activeCount) )
            __debugbreak();
        }
      }
      if ( v4 )
      {
        if ( v4 != 1 )
        {
          LODWORD(renderScreen) = v4;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_scrn_mp.cpp", 425, ASSERT_TYPE_ASSERT, "( ( frontendActiveCount == 1 ) )", "( frontendActiveCount ) = %i", renderScreen) )
            __debugbreak();
        }
        if ( v4 != v6 )
        {
          LODWORD(v25) = v6;
          LODWORD(v24) = v4;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_scrn_mp.cpp", 426, ASSERT_TYPE_ASSERT, "( frontendActiveCount ) == ( connectionActiveCount )", "%s == %s\n\t%i, %i", "frontendActiveCount", "connectionActiveCount", v24, v25) )
            __debugbreak();
        }
      }
      if ( v6 > 1 )
        R_SetInvViewScale(2.0);
      goto LABEL_51;
    }
  }
}

/*
==============
CL_ScreenMP_DrawOverlay
==============
*/
void CL_ScreenMP_DrawOverlay(LocalClientNum_t localClientNum)
{
  const dvar_t *v2; 

  if ( cls.rendererStarted )
  {
    CL_SetFullScreenViewport();
    R_AddCmdProjectionSet2D();
    v2 = DVARBOOL_cg_drawDevOverlays;
    if ( !DVARBOOL_cg_drawDevOverlays && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cg_drawDevOverlays") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v2);
    if ( v2->current.enabled )
    {
      if ( CL_IsLocalClientConnectionActiveForGameServer(localClientNum) )
      {
        Profile_Begin(479);
        CG_DrawDebugMP_DrawFullScreenDebugOverlays(localClientNum);
        Profile_EndInternal(NULL);
      }
      else
      {
        CG_DrawDebugMP_DrawFrontendOverlays(localClientNum);
      }
      CL_TransientsWorldMP_DrawOverlay(localClientNum);
      CL_TransientsCollisionMP_Debug_Draw(localClientNum);
      GamerProfile_DebugDrawFullscreenInfo();
      PeerMesh_Draw(localClientNum);
      R_FontCache_DebugDisplay();
      R_DrawRadiantLiveConnectionStatus();
      Con_DrawConsole(localClientNum);
      DevGui_Draw(localClientNum);
    }
    CG_DrawWaterMark(localClientNum);
  }
}

/*
==============
CL_ScreenMP_DrawUI
==============
*/
void CL_ScreenMP_DrawUI(const LocalClientNum_t localClientNum, bool runLUI)
{
  int LocalClientAnyConnectionState; 
  const char *v5; 
  int v6; 
  const char *v7; 

  UI_UpdateTime(localClientNum, cls.realtime);
  if ( Com_GameStart_IsActive() )
  {
    if ( !runLUI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_scrn_mp.cpp", 268, ASSERT_TYPE_ASSERT, "(runLUI)", (const char *)&queryFormat, "runLUI") )
      __debugbreak();
    R_AddCmdClearScreen(15, 0);
    LUI_CoD_RunNoClientFrame(localClientNum);
    UI_DrawTempConnectScreen(localClientNum);
    goto LABEL_28;
  }
  LocalClientAnyConnectionState = CL_GetLocalClientAnyConnectionState(localClientNum);
  if ( !LocalClientAnyConnectionState )
  {
    R_AddCmdClearScreen(15, 0);
    if ( Sys_IsMainThread() )
    {
      if ( CL_AllLocalClientsDisconnected() )
        goto LABEL_26;
      v5 = "CL_AllLocalClientsDisconnected()";
      v6 = 299;
      v7 = "(CL_AllLocalClientsDisconnected())";
    }
    else
    {
      if ( !CL_AnyLocalClientChallenging() )
        goto LABEL_26;
      v5 = "!CL_AnyLocalClientChallenging()";
      v6 = 296;
      v7 = "(!CL_AnyLocalClientChallenging())";
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_scrn_mp.cpp", v6, ASSERT_TYPE_ASSERT, v7, (const char *)&queryFormat, v5) )
      __debugbreak();
    goto LABEL_26;
  }
  if ( LocalClientAnyConnectionState <= 0 )
    goto LABEL_18;
  if ( LocalClientAnyConnectionState <= 8 )
  {
    R_AddCmdClearScreen(15, 0);
    if ( !runLUI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_scrn_mp.cpp", 312, ASSERT_TYPE_ASSERT, "(runLUI)", (const char *)&queryFormat, "runLUI") )
      __debugbreak();
    if ( !(unsigned __int8)CL_GetLocalClientFrontEntState(localClientNum) )
    {
      LUI_CoD_RunNoClientFrame(localClientNum);
      UI_DrawTempConnectScreen(localClientNum);
      goto LABEL_28;
    }
    goto LABEL_26;
  }
  if ( LocalClientAnyConnectionState == 9 )
  {
    if ( Sys_IsRenderThread() && R_IsInRemoteScreenUpdate() )
      R_AddCmdClearScreen(15, 0);
  }
  else
  {
LABEL_18:
    Com_Error_impl(ERR_FATAL, (const ObfuscateErrorText)&stru_1442221B8, 895i64, (unsigned int)LocalClientAnyConnectionState);
  }
LABEL_26:
  if ( runLUI )
    LUI_CoD_RunNoClientFrame(localClientNum);
LABEL_28:
  if ( CL_IsLocalClientConnectionActiveForGameServer(localClientNum) )
  {
    if ( net_showprofile->current.integer > 0 )
      Net_DisplayProfile(localClientNum);
    SV_BotDrawDebugClientScreen(localClientNum);
  }
}

/*
==============
CL_ScreenMP_GetDemoType
==============
*/
__int64 CL_ScreenMP_GetDemoType(const LocalClientNum_t localClientNum)
{
  return CL_Demo_IsPlayingServer(localClientNum) ? 2 : 0;
}


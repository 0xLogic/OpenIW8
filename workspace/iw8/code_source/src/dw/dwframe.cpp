/*
==============
DW_ResetLogon
==============
*/

void __fastcall DW_ResetLogon(const int controllerIndex)
{
  ?DW_ResetLogon@@YAXH@Z(controllerIndex);
}

/*
==============
DW_Frame
==============
*/

void __fastcall DW_Frame(const int controllerIndex)
{
  ?DW_Frame@@YAXH@Z(controllerIndex);
}

/*
==============
DW_EnableLogon
==============
*/

void __fastcall DW_EnableLogon(const int controllerIndex)
{
  ?DW_EnableLogon@@YAXH@Z(controllerIndex);
}

/*
==============
DW_OnlineTransition
==============
*/

void __fastcall DW_OnlineTransition(const int controllerIndex)
{
  ?DW_OnlineTransition@@YAXH@Z(controllerIndex);
}

/*
==============
DW_DisableLogon
==============
*/

void __fastcall DW_DisableLogon(const int controllerIndex)
{
  ?DW_DisableLogon@@YAXH@Z(controllerIndex);
}

/*
==============
DW_GetLogonStartTime
==============
*/

int __fastcall DW_GetLogonStartTime()
{
  return ?DW_GetLogonStartTime@@YAHXZ();
}

/*
==============
DW_Init
==============
*/

void DW_Init(void)
{
  ?DW_Init@@YAXXZ();
}

/*
==============
DW_DisableLogon
==============
*/
void DW_DisableLogon(const int controllerIndex)
{
  s_disableLogonRetry = 1;
}

/*
==============
DW_EnableLogon
==============
*/
void DW_EnableLogon(const int controllerIndex)
{
  s_disableLogonRetry = 0;
  dwResetLogonAttempts(controllerIndex);
  s_logonStartTime = Sys_Milliseconds();
}

/*
==============
DW_FenceDependenciesUpdated
==============
*/
void DW_FenceDependenciesUpdated(const int controllerIndex, const bool value)
{
  if ( value )
  {
    s_disableLogonRetry = 0;
    dwResetLogonAttempts(controllerIndex);
    s_logonStartTime = Sys_Milliseconds();
  }
}

/*
==============
DW_Frame
==============
*/
void DW_Frame(const int controllerIndex)
{
  __int64 v1; 
  int v2; 
  __int64 v3; 
  int v4; 
  DWOnlineStatus LogOnStatus; 
  DWServicesAccess *Instance; 
  DWServicesAccess *v7; 
  DWLobbyService *DWLobbyService; 
  int integer; 
  const dvar_t *v10; 
  Online_PatchStreamer *v11; 
  DWOnlineStatus v12; 
  __int32 v13; 
  DWServicesAccess *v14; 
  DWLobbyService *v15; 
  int v16; 

  v1 = controllerIndex;
  if ( !Live_IsOfflineTool() && !Com_FastFile_IsAltLaunchMode() )
  {
    v2 = Sys_Milliseconds();
    v3 = 8i64 * tls_index;
    if ( dword_1500D8C58 > *(_DWORD *)(*(_QWORD *)((char *)NtCurrentTeb()->Reserved1[11] + v3) + 1772i64) )
    {
      j__Init_thread_header(&dword_1500D8C58);
      if ( dword_1500D8C58 == -1 )
      {
        s_msSinceLastCall = v2;
        j__Init_thread_footer(&dword_1500D8C58);
      }
    }
    v4 = 16;
    if ( v2 - s_msSinceLastCall < 16 )
      v4 = v2 - s_msSinceLastCall;
    s_msSinceLastCall = v4;
    if ( dword_1500D8C60 > *(_DWORD *)(*(_QWORD *)((char *)NtCurrentTeb()->Reserved1[11] + v3) + 1772i64) )
    {
      j__Init_thread_header(&dword_1500D8C60);
      if ( dword_1500D8C60 == -1 )
      {
        s_timeSinceLastFrame = v2;
        j__Init_thread_footer(&dword_1500D8C60);
      }
    }
    if ( v2 - s_timeSinceLastFrame > 300 )
    {
      Com_MapLoadErrors_PushIgnore();
      Com_PrintError(131097, "[DW] %s starved %ims\n", "DW_Frame", (unsigned int)(v2 - s_timeSinceLastFrame));
      Com_MapLoadErrors_PopIgnore();
    }
    s_timeSinceLastFrame = v2;
    LogOnStatus = dwGetLogOnStatus(v1);
    dwLogonHSM_xb3::LogonHSMUpdate(&g_dwLogonHSMs[v1], s_msSinceLastCall);
    Instance = DWServicesAccess::GetInstance();
    DWServicesAccess::pump(Instance, v1);
    if ( LogOnStatus )
    {
      if ( LogOnStatus == DW_LIVE_CONNECTED )
      {
        v7 = DWServicesAccess::GetInstance();
        DWLobbyService = DWServicesAccess::GetDWLobbyService(v7, v1);
        DWLobbyService->pump(DWLobbyService);
        Live_HistoryPump(v1);
      }
    }
    else if ( !dw_test_disconnect || (integer = dw_test_disconnect->current.integer, integer != 3) && integer != (_DWORD)v1 + 1 )
    {
      if ( !s_disableLogonRetry )
      {
        v10 = DVARBOOL_online_auth_skip_auth;
        if ( !DVARBOOL_online_auth_skip_auth && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "online_auth_skip_auth") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v10);
        if ( v10->current.enabled )
        {
          dwResetLogonAttempts(v1);
          s_logonStartTime = Sys_Milliseconds();
        }
        else
        {
          v11 = Online_PatchStreamer::GetInstance();
          Online_PatchStreamer::OnDWLogonStart(v11, v1);
          dwLogOnStart(v1);
        }
      }
    }
    v12 = dwGetLogOnStatus(v1);
    if ( v12 != LogOnStatus )
    {
      if ( v12 )
      {
        if ( v12 == DW_LIVE_CONNECTED )
        {
          OnlineMgr::OnSignedIn(&g_onlineMgr, v1, SignedInToDemonWare);
          Live_UserSignedIntoDemonware(v1);
          if ( dw_test_retry_disconnect )
          {
            if ( dw_test_retry_disconnect->current.enabled )
            {
              v14 = DWServicesAccess::GetInstance();
              v15 = DWServicesAccess::GetDWLobbyService(v14, v1);
              DWLobbyService::disconnect(v15);
              dwLobbyServiceCleanup(v1);
            }
          }
        }
      }
      else
      {
        v13 = LogOnStatus - 1;
        if ( v13 )
        {
          if ( v13 == 1 )
            Com_Printf(25, "[DW][%d]-%s Lost connection to lobby server. (dwGetLogOnStatus returned DW_LIVE_DISCONNECTED previous status was DW_LIVE_CONNECTED.\n", (unsigned int)v1, "DW_Frame");
        }
        else
        {
          Com_PrintWarning(25, "[DW][%d]-%s Failed to log on.\n", (unsigned int)v1, "DW_Frame");
        }
      }
    }
    v16 = Sys_Milliseconds();
    if ( dw_memory_display_time )
    {
      if ( v16 - s_lastMemPrint >= 1000 * dw_memory_display_time->current.integer )
      {
        s_lastMemPrint = v16;
        DW_PrintOneLineMemStats();
      }
    }
  }
}

/*
==============
DW_GetLogonStartTime
==============
*/
__int64 DW_GetLogonStartTime()
{
  return (unsigned int)s_logonStartTime;
}

/*
==============
DW_Init
==============
*/
void DW_Init(void)
{
  FenceManager_RegisterForFenceDependenciesUpdatesForAllControllers(FENCE_DEMONWARE, (void (__fastcall *)(int, bool))DW_FenceDependenciesUpdated);
}

/*
==============
DW_OnlineTransition
==============
*/
void DW_OnlineTransition(const int controllerIndex)
{
  if ( dwGetLogOnStatus(controllerIndex) != DW_LIVE_CONNECTED )
  {
    s_disableLogonRetry = 0;
    dwResetLogonAttempts(controllerIndex);
    s_logonStartTime = Sys_Milliseconds();
    FenceManager_Frame();
  }
}

/*
==============
DW_ResetLogon
==============
*/
void DW_ResetLogon(const int controllerIndex)
{
  dwResetLogonAttempts(controllerIndex);
  s_logonStartTime = Sys_Milliseconds();
}


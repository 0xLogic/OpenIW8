/*
==============
CL_Mgr_ResetClientsBackToSingleClient
==============
*/

void __fastcall CL_Mgr_ResetClientsBackToSingleClient(int localControllerIndex)
{
  ?CL_Mgr_ResetClientsBackToSingleClient@@YAXH@Z(localControllerIndex);
}

/*
==============
CL_Mgr_GetClientFromController
==============
*/

LocalClientNum_t __fastcall CL_Mgr_GetClientFromController(const int controllerIndex)
{
  return ?CL_Mgr_GetClientFromController@@YA?AW4LocalClientNum_t@@H@Z(controllerIndex);
}

/*
==============
CL_Mgr_InitialiseClients
==============
*/

void CL_Mgr_InitialiseClients(void)
{
  ?CL_Mgr_InitialiseClients@@YAXXZ();
}

/*
==============
CL_Mgr_GetControllerFromClient
==============
*/

int __fastcall CL_Mgr_GetControllerFromClient(LocalClientNum_t clientNum)
{
  return ?CL_Mgr_GetControllerFromClient@@YAHW4LocalClientNum_t@@@Z(clientNum);
}

/*
==============
CL_Mgr_CanSignInMorePlayers
==============
*/

bool __fastcall CL_Mgr_CanSignInMorePlayers()
{
  return ?CL_Mgr_CanSignInMorePlayers@@YA_NXZ();
}

/*
==============
CL_Mgr_DeActivateClient
==============
*/

void __fastcall CL_Mgr_DeActivateClient(LocalClientNum_t clientNum, int controllerIndex)
{
  ?CL_Mgr_DeActivateClient@@YAXW4LocalClientNum_t@@H@Z(clientNum, controllerIndex);
}

/*
==============
CL_Mgr_ActivateClient
==============
*/

void __fastcall CL_Mgr_ActivateClient(LocalClientNum_t clientNum, int controllerIndex)
{
  ?CL_Mgr_ActivateClient@@YAXW4LocalClientNum_t@@H@Z(clientNum, controllerIndex);
}

/*
==============
CL_Mgr_IsClientActive
==============
*/

bool __fastcall CL_Mgr_IsClientActive(LocalClientNum_t clientNum)
{
  return ?CL_Mgr_IsClientActive@@YA_NW4LocalClientNum_t@@@Z(clientNum);
}

/*
==============
CL_Mgr_IsControllerMappedToClient
==============
*/

bool __fastcall CL_Mgr_IsControllerMappedToClient(const int controllerIndex, LocalClientNum_t *outLocalClientNum)
{
  return ?CL_Mgr_IsControllerMappedToClient@@YA_NHPEAW4LocalClientNum_t@@@Z(controllerIndex, outLocalClientNum);
}

/*
==============
CL_Mgr_InitialiseDevClients
==============
*/

void __fastcall CL_Mgr_InitialiseDevClients(GameModeType gameMode)
{
  ?CL_Mgr_InitialiseDevClients@@YAXW4GameModeType@@@Z(gameMode);
}

/*
==============
CL_Mgr_HandleSignIn
==============
*/

bool __fastcall CL_Mgr_HandleSignIn(const int controllerIndex, bool joining)
{
  return ?CL_Mgr_HandleSignIn@@YA_NH_N@Z(controllerIndex, joining);
}

/*
==============
CL_Mgr_GetNumActiveSplitscreenControllers
==============
*/

int __fastcall CL_Mgr_GetNumActiveSplitscreenControllers()
{
  return ?CL_Mgr_GetNumActiveSplitscreenControllers@@YAHXZ();
}

/*
==============
CL_Mgr_Validate
==============
*/

void CL_Mgr_Validate(void)
{
  ?CL_Mgr_Validate@@YAXXZ();
}

/*
==============
CL_Mgr_GetMode
==============
*/

CLIENT_MANAGER_MODE __fastcall CL_Mgr_GetMode()
{
  return ?CL_Mgr_GetMode@@YA?AW4CLIENT_MANAGER_MODE@@XZ();
}

/*
==============
CL_Mgr_IsControllerActive
==============
*/

bool __fastcall CL_Mgr_IsControllerActive(const int controllerIndex)
{
  return ?CL_Mgr_IsControllerActive@@YA_NH@Z(controllerIndex);
}

/*
==============
CL_Mgr_ActivateAdditionalClient
==============
*/

void __fastcall CL_Mgr_ActivateAdditionalClient(LocalClientNum_t clientNum, const int controllerIndex)
{
  ?CL_Mgr_ActivateAdditionalClient@@YAXW4LocalClientNum_t@@H@Z(clientNum, controllerIndex);
}

/*
==============
CL_Mgr_GetNthController_Safe
==============
*/

int __fastcall CL_Mgr_GetNthController_Safe(CLIENT_MANAGER_CONTROLLER controller)
{
  return ?CL_Mgr_GetNthController_Safe@@YAHW4CLIENT_MANAGER_CONTROLLER@@@Z(controller);
}

/*
==============
CL_Mgr_ActivateAdditionalClient
==============
*/
void CL_Mgr_ActivateAdditionalClient(LocalClientNum_t clientNum, const int controllerIndex)
{
  __int64 v2; 
  bool IsGamepadEnabled; 

  v2 = controllerIndex;
  s_clientMgrMode = CLIENT_MANAGER_MODE_MULTIPLE_CLIENTS;
  GamerProfile_UpdateProfilePlayTimes();
  CL_SetLocalClientActive(clientNum, 1);
  CL_Keys_ClearStates(clientNum);
  IN_GamepadsReset(v2);
  s_clientControllerMap[v2] = clientNum;
  OnlineMgr::OnClientActivated(&g_onlineMgr, v2, clientNum);
  SD_OutputInitPadPort(v2);
  IsGamepadEnabled = CL_Input_IsGamepadEnabled(clientNum);
  CL_Input_SetGamepadEnabled(v2, IsGamepadEnabled);
  CL_Keys_LoadBindings(clientNum, v2);
  GamerProfile_ExecControllerBindings(v2);
}

/*
==============
CL_Mgr_ActivateClient
==============
*/
void CL_Mgr_ActivateClient(LocalClientNum_t clientNum, int controllerIndex)
{
  __int64 v2; 
  const dvar_t *v4; 

  v2 = controllerIndex;
  if ( !Com_GeneratingConstBaselines() )
  {
    GamerProfile_UpdateProfilePlayTimes();
    CL_SetLocalClientActive(clientNum, 1);
    CL_Keys_ClearStates(clientNum);
    CL_Mgr_DeActivateClient(LOCAL_CLIENT_1, v2);
    if ( s_clientMgrMode != CLIENT_MANAGER_MODE_ONE_CLIENT )
    {
      s_clientControllerMap[v2] = clientNum;
      s_clientMgrMode = CLIENT_MANAGER_MODE_ONE_CLIENT;
      OnlineMgr::OnClientActivated(&g_onlineMgr, v2, clientNum);
      SD_OutputInitPadPort(v2);
      GamerProfile_UpdateSystemVarsFromProfile(v2);
      v4 = DCONST_DVARBOOL_cl_useKeyBindingsFile;
      if ( !DCONST_DVARBOOL_cl_useKeyBindingsFile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_useKeyBindingsFile") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v4);
      if ( v4->current.enabled )
        CL_Keys_LoadBindings(clientNum, v2);
      GamerProfile_ExecControllerBindings(v2);
    }
  }
}

/*
==============
CL_Mgr_CanSignInMorePlayers
==============
*/
bool CL_Mgr_CanSignInMorePlayers()
{
  bool v0; 
  BOOL v1; 
  bool v2; 
  int v3; 
  bool v4; 
  int v5; 
  bool v6; 
  int v7; 
  bool v8; 
  int v9; 
  bool v10; 
  int v11; 
  bool v12; 
  int v13; 
  bool v14; 
  int v15; 

  if ( s_clientMgrMode )
    v0 = s_clientControllerMap[0] != LOCAL_CLIENT_INVALID;
  else
    v0 = 0;
  v1 = v0;
  if ( s_clientMgrMode )
    v2 = dword_148CB9184 != -1;
  else
    v2 = 0;
  v3 = v1 + 1;
  if ( !v2 )
    v3 = v1;
  if ( s_clientMgrMode )
    v4 = dword_148CB9188 != -1;
  else
    v4 = 0;
  v5 = v3 + 1;
  if ( !v4 )
    v5 = v3;
  if ( s_clientMgrMode )
    v6 = dword_148CB918C != -1;
  else
    v6 = 0;
  v7 = v5 + 1;
  if ( !v6 )
    v7 = v5;
  if ( s_clientMgrMode )
    v8 = dword_148CB9190 != -1;
  else
    v8 = 0;
  v9 = v7 + 1;
  if ( !v8 )
    v9 = v7;
  if ( s_clientMgrMode )
    v10 = dword_148CB9194 != -1;
  else
    v10 = 0;
  v11 = v9 + 1;
  if ( !v10 )
    v11 = v9;
  if ( s_clientMgrMode )
    v12 = dword_148CB9198 != -1;
  else
    v12 = 0;
  v13 = v11 + 1;
  if ( !v12 )
    v13 = v11;
  if ( s_clientMgrMode )
    v14 = dword_148CB919C != -1;
  else
    v14 = 0;
  v15 = v13 + 1;
  if ( !v14 )
    v15 = v13;
  return v15 < 2 && Party_IsRunning(&g_partyData) && Party_AreWeHost(&g_partyData) && Party_CanSignInLocalPlayers(&g_partyData);
}

/*
==============
CL_Mgr_DeActivateClient
==============
*/
void CL_Mgr_DeActivateClient(LocalClientNum_t clientNum, int controllerIndex)
{
  LocalClientNum_t *v4; 
  LocalClientNum_t *v5; 
  int ControllerFromClient; 
  int i; 
  CLIENT_MANAGER_MODE v8; 

  CL_Keys_ClearStates(clientNum);
  v4 = s_clientControllerMap;
  v5 = s_clientControllerMap;
  while ( *v5 != clientNum )
  {
    if ( (__int64)++v5 >= (__int64)&s_clientMgrMode )
      goto LABEL_6;
  }
  ControllerFromClient = CL_Mgr_GetControllerFromClient(clientNum);
  IN_GamepadsReset(ControllerFromClient);
LABEL_6:
  CL_SetLocalClientActive(clientNum, 0);
  for ( i = 0; i < 8; ++i )
  {
    if ( *v4 == clientNum )
    {
      OnlineMgr::OnClientDeactivated(&g_onlineMgr, i, clientNum);
      Live_NotPlaying(i);
      Live_PresenceFrame(i);
      SD_OutputClosePadPort(i);
      Live_OnlineServicesFence_ResetState(controllerIndex);
      Live_SyncOnlineDataFence_ResetStateForAllGameModes(controllerIndex);
      *v4 = LOCAL_CLIENT_INVALID;
    }
    ++v4;
  }
  v8 = s_clientMgrMode;
  if ( clientNum == LOCAL_CLIENT_0 )
    v8 = CLIENT_MANAGER_MODE_NO_CLIENTS;
  s_clientMgrMode = v8;
}

/*
==============
CL_Mgr_GetClientFromController
==============
*/
__int64 CL_Mgr_GetClientFromController(const int controllerIndex)
{
  __int64 result; 

  if ( s_clientMgrMode == CLIENT_MANAGER_MODE_NO_CLIENTS )
    return 0i64;
  if ( (unsigned int)controllerIndex > 7 )
    return 0i64;
  result = (unsigned int)s_clientControllerMap[controllerIndex];
  if ( (_DWORD)result == -1 )
    return 0i64;
  return result;
}

/*
==============
CL_Mgr_GetControllerFromClient
==============
*/
__int64 CL_Mgr_GetControllerFromClient(LocalClientNum_t clientNum)
{
  unsigned int v3; 
  LocalClientNum_t *v4; 

  if ( s_clientMgrMode == CLIENT_MANAGER_MODE_NO_CLIENTS )
    return 0i64;
  v3 = 0;
  v4 = s_clientControllerMap;
  do
  {
    if ( *v4 == clientNum )
      return v3;
    ++v3;
    ++v4;
  }
  while ( (__int64)v4 < (__int64)&s_clientMgrMode );
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_manager.cpp", 51, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Trying to get a controller from a client that doesn't have one.") )
    __debugbreak();
  return 0xFFFFFFFFi64;
}

/*
==============
CL_Mgr_GetMode
==============
*/
__int64 CL_Mgr_GetMode()
{
  return (unsigned int)s_clientMgrMode;
}

/*
==============
CL_Mgr_GetNthController_Safe
==============
*/
__int64 CL_Mgr_GetNthController_Safe(CLIENT_MANAGER_CONTROLLER controller)
{
  int v1; 
  unsigned int v3; 

  v1 = 0;
  v3 = 0;
  while ( !GPad_IsActive(v3) )
  {
LABEL_5:
    if ( (int)++v3 >= 8 )
      return 0i64;
  }
  if ( controller != v1 )
  {
    ++v1;
    goto LABEL_5;
  }
  return v3;
}

/*
==============
CL_Mgr_GetNumActiveSplitscreenControllers
==============
*/
__int64 CL_Mgr_GetNumActiveSplitscreenControllers()
{
  bool v0; 
  BOOL v1; 
  bool v2; 
  int v3; 
  bool v4; 
  int v5; 
  bool v6; 
  int v7; 
  bool v8; 
  unsigned int v9; 
  bool v10; 
  unsigned int v11; 
  bool v12; 
  unsigned int v13; 
  __int64 result; 

  if ( s_clientMgrMode )
    v0 = s_clientControllerMap[0] != LOCAL_CLIENT_INVALID;
  else
    v0 = 0;
  v1 = v0;
  if ( s_clientMgrMode )
    v2 = dword_148CB9184 != -1;
  else
    v2 = 0;
  v3 = v1 + 1;
  if ( !v2 )
    v3 = v1;
  if ( s_clientMgrMode )
    v4 = dword_148CB9188 != -1;
  else
    v4 = 0;
  v5 = v3 + 1;
  if ( !v4 )
    v5 = v3;
  if ( s_clientMgrMode )
    v6 = dword_148CB918C != -1;
  else
    v6 = 0;
  v7 = v5 + 1;
  if ( !v6 )
    v7 = v5;
  if ( s_clientMgrMode )
    v8 = dword_148CB9190 != -1;
  else
    v8 = 0;
  v9 = v7 + 1;
  if ( !v8 )
    v9 = v7;
  if ( s_clientMgrMode )
    v10 = dword_148CB9194 != -1;
  else
    v10 = 0;
  v11 = v9 + 1;
  if ( !v10 )
    v11 = v9;
  if ( s_clientMgrMode )
    v12 = dword_148CB9198 != -1;
  else
    v12 = 0;
  v13 = v11 + 1;
  if ( !v12 )
    v13 = v11;
  if ( s_clientMgrMode == CLIENT_MANAGER_MODE_NO_CLIENTS )
    return v13;
  result = v13 + 1;
  if ( dword_148CB919C == -1 )
    return v13;
  return result;
}

/*
==============
CL_Mgr_HandleSignIn
==============
*/
bool CL_Mgr_HandleSignIn(const int controllerIndex, bool joining)
{
  __int64 v2; 
  bool v4; 
  netsrc_t LocalNetIDFromControllerIndex; 
  const XUID *Xuid; 
  int MemberByXUID; 
  const dvar_t *v8; 
  XUID result; 

  v2 = controllerIndex;
  if ( joining )
  {
    if ( !CL_Mgr_CanSignInMorePlayers() )
      return 0;
  }
  else if ( !Party_IsRunning(&g_partyData) || !Party_AreWeHost(&g_partyData) || !LUI_IsTopSignInMenu() || !LUI_CanSignoutSplitscreenPlayer() )
  {
    return 0;
  }
  if ( g_partyData.splitscreenData.mainClient.localControllerIndex == (_DWORD)v2 )
    return 0;
  LocalNetIDFromControllerIndex = NET_GetLocalNetIDFromControllerIndex(v2);
  NET_FlushLoopback(LocalNetIDFromControllerIndex);
  if ( !joining )
  {
    if ( s_clientMgrMode == CLIENT_MANAGER_MODE_NO_CLIENTS || (unsigned int)v2 > 7 || s_clientControllerMap[v2] == LOCAL_CLIENT_INVALID )
      return 0;
    if ( g_partyData.splitscreenData.mainClient.localControllerIndex == (_DWORD)v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_manager.cpp", 176, ASSERT_TYPE_ASSERT, "(party->splitscreenData.mainClient.localControllerIndex != controllerIndex)", (const char *)&queryFormat, "party->splitscreenData.mainClient.localControllerIndex != controllerIndex") )
      __debugbreak();
    Xuid = Live_GetXuid(&result, v2);
    MemberByXUID = Party_FindMemberByXUID(&g_partyData, (const XUID)Xuid->m_id);
    if ( MemberByXUID == -1 )
    {
      Com_Printf(14, "Trying to remove local player from the party when they weren't present.");
      return 0;
    }
    PartyHost_RemovePlayer(&g_partyData, MemberByXUID, 0, (const char *)&queryFormat.fmt + 3);
    Party_ClearOtherSplitscreenClient(&g_partyData.splitscreenData);
    CL_Mgr_DeActivateClient(LOCAL_CLIENT_1, v2);
    Dvar_SetBool_Internal(DVARBOOL_splitscreen, 0);
    return 1;
  }
  if ( s_clientMgrMode && (unsigned int)v2 <= 7 && s_clientControllerMap[v2] != LOCAL_CLIENT_INVALID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_manager.cpp", 196, ASSERT_TYPE_ASSERT, "(!CL_Mgr_IsControllerMappedToClient( controllerIndex, 0 ))", (const char *)&queryFormat, "!CL_Mgr_IsControllerMappedToClient( controllerIndex, NULL )") )
    __debugbreak();
  if ( CL_GetLocalClientActiveCount() >= 2 )
    return 1;
  v8 = DVARBOOL_onlinegame;
  if ( !DVARBOOL_onlinegame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "onlinegame") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v8);
  if ( !v8->current.enabled && !Live_IsInSystemlinkLobby() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_manager.cpp", 203, ASSERT_TYPE_ASSERT, "(Dvar_GetBool_Internal_DebugName( DVARBOOL_onlinegame, \"onlinegame\" ) || Live_IsInSystemlinkLobby())", (const char *)&queryFormat, "Dvar_GetBool( onlinegame ) || Live_IsInSystemlinkLobby()") )
    __debugbreak();
  Dvar_SetBool_Internal(DVARBOOL_splitscreen, 1);
  CL_Mgr_ActivateAdditionalClient(LOCAL_CLIENT_1, v2);
  v4 = 1;
  g_partyData.splitscreenData.waitingForStats = 1;
  return v4;
}

/*
==============
CL_Mgr_InitialiseClients
==============
*/
void CL_Mgr_InitialiseClients(void)
{
  int v0; 
  LocalClientNum_t *v1; 
  int v2; 
  LocalClientNum_t *v3; 
  int v4; 
  LocalClientNum_t *v5; 

  v0 = 1;
  v1 = s_clientControllerMap;
  v2 = 0;
  do
  {
    v3 = s_clientControllerMap;
    while ( *v3 != v0 )
    {
      if ( (__int64)++v3 >= (__int64)&s_clientMgrMode )
        goto LABEL_14;
    }
    v4 = 0;
    if ( s_clientMgrMode )
    {
      v5 = s_clientControllerMap;
      while ( *v5 != v0 )
      {
        ++v4;
        if ( (__int64)++v5 >= (__int64)&s_clientMgrMode )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_manager.cpp", 51, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Trying to get a controller from a client that doesn't have one.") )
            __debugbreak();
          v4 = -1;
          break;
        }
      }
    }
    CL_Mgr_DeActivateClient((LocalClientNum_t)v0, v4);
LABEL_14:
    --v0;
  }
  while ( v0 >= 0 );
  s_clientMgrMode = CLIENT_MANAGER_MODE_NO_CLIENTS;
  do
  {
    *v1 = LOCAL_CLIENT_INVALID;
    SD_OutputClosePadPort(v2++);
    ++v1;
  }
  while ( v2 < 8 );
}

/*
==============
CL_Mgr_InitialiseDevClients
==============
*/
void CL_Mgr_InitialiseDevClients(GameModeType gameMode)
{
  int NthController_Safe; 
  int v2; 
  const dvar_t *v3; 
  int v4; 

  if ( (_BYTE)gameMode )
  {
    if ( (_BYTE)gameMode == HALF )
    {
      NthController_Safe = CL_Mgr_GetNthController_Safe(CLIENT_MANAGER_CONTROLLER_FIRST_ACTIVE);
      CL_Mgr_ActivateClient(LOCAL_CLIENT_0, NthController_Safe);
    }
    else if ( BG_GameInterface_GameModeIsOnline(gameMode) )
    {
      v2 = CL_Mgr_GetNthController_Safe(CLIENT_MANAGER_CONTROLLER_FIRST_ACTIVE);
      CL_Mgr_ActivateClient(LOCAL_CLIENT_0, v2);
      v3 = DVARBOOL_splitscreen;
      if ( !DVARBOOL_splitscreen && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "splitscreen") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v3);
      if ( v3->current.enabled )
      {
        v4 = CL_Mgr_GetNthController_Safe(CLIENT_MANAGER_CONTROLLER_SECOND_ACTIVE);
        CL_Mgr_ActivateAdditionalClient(LOCAL_CLIENT_1, v4);
      }
    }
  }
  else if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_manager.cpp", 429, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Trying to initialise devmap clients and no gamemode is set.") )
  {
    __debugbreak();
  }
}

/*
==============
CL_Mgr_IsClientActive
==============
*/
char CL_Mgr_IsClientActive(LocalClientNum_t clientNum)
{
  LocalClientNum_t *v1; 

  v1 = s_clientControllerMap;
  while ( *v1 != clientNum )
  {
    if ( (__int64)++v1 >= (__int64)&s_clientMgrMode )
      return 0;
  }
  return 1;
}

/*
==============
CL_Mgr_IsControllerActive
==============
*/
bool CL_Mgr_IsControllerActive(const int controllerIndex)
{
  return controllerIndex != -1 && (s_clientMgrMode == CLIENT_MANAGER_MODE_NO_CLIENTS || s_clientControllerMap[controllerIndex] != LOCAL_CLIENT_INVALID);
}

/*
==============
CL_Mgr_IsControllerMappedToClient
==============
*/
bool CL_Mgr_IsControllerMappedToClient(const int controllerIndex, LocalClientNum_t *outLocalClientNum)
{
  LocalClientNum_t v2; 

  if ( s_clientMgrMode == CLIENT_MANAGER_MODE_NO_CLIENTS || (unsigned int)controllerIndex > 7 )
    return 0;
  v2 = s_clientControllerMap[controllerIndex];
  if ( outLocalClientNum )
    *outLocalClientNum = v2;
  return v2 != LOCAL_CLIENT_INVALID;
}

/*
==============
CL_Mgr_ResetClientsBackToSingleClient
==============
*/
void CL_Mgr_ResetClientsBackToSingleClient(int localControllerIndex)
{
  LocalClientNum_t *v1; 
  int v2; 
  LocalClientNum_t v4; 
  int i; 
  const dvar_t *v6; 
  char dest[16]; 

  v1 = s_clientControllerMap;
  v2 = 0;
  if ( s_clientMgrMode == CLIENT_MANAGER_MODE_NO_CLIENTS || (unsigned int)localControllerIndex > 7 || (v4 = s_clientControllerMap[localControllerIndex], v4 == LOCAL_CLIENT_INVALID) )
  {
    for ( i = 0; i < 2; ++i )
      CL_SetLocalClientActive((LocalClientNum_t)i, 0);
    v6 = DVARBOOL_onlinegame;
    if ( !DVARBOOL_onlinegame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "onlinegame") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v6);
    if ( !v6->current.enabled )
      Live_SetMainMenuPresence(localControllerIndex);
  }
  else
  {
    if ( LUI_CoD_LUIRootDLogEnabled() )
    {
      Com_sprintf(dest, 0x10ui64, "ResetToSingle %d", (unsigned int)v4);
      LUI_CoD_SetLastDeactivateClientsReason(dest);
    }
    CL_Mgr_DeActivateClient(v4, localControllerIndex);
  }
  if ( CL_GetLocalClientActiveCount() == 1 )
  {
    if ( s_clientMgrMode )
    {
      while ( *v1 )
      {
        ++v2;
        if ( (__int64)++v1 >= (__int64)&s_clientMgrMode )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_manager.cpp", 51, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Trying to get a controller from a client that doesn't have one.") )
            __debugbreak();
          v2 = -1;
          break;
        }
      }
    }
    CL_Mgr_ActivateClient(LOCAL_CLIENT_0, v2);
    Dvar_SetBool_Internal(DVARBOOL_splitscreen, 0);
  }
}

/*
==============
CL_Mgr_Validate
==============
*/
void CL_Mgr_Validate(void)
{
  CLIENT_MANAGER_MODE v0; 
  int *v1; 
  int v2; 
  int v3; 
  unsigned __int64 v4; 
  unsigned int v5; 
  int v6; 
  int v7; 
  int v8; 
  int v9; 

  v0 = s_clientMgrMode;
  v1 = &dword_148CB9188;
  v2 = 0;
  v3 = 0;
  v4 = 0i64;
  v5 = 2;
  do
  {
    if ( s_clientMgrMode == CLIENT_MANAGER_MODE_NO_CLIENTS || v4 > 7 || (v6 = *(v1 - 2), v6 == -1) || !v6 || v6 == 1 )
      ++v2;
    else
      ++v3;
    if ( s_clientMgrMode == CLIENT_MANAGER_MODE_NO_CLIENTS || v5 - 1 > 7 || (v7 = *(v1 - 1), v7 == -1) || !v7 || v7 == 1 )
      ++v2;
    else
      ++v3;
    if ( s_clientMgrMode == CLIENT_MANAGER_MODE_NO_CLIENTS || v5 > 7 || (v8 = *v1, *v1 == -1) || !v8 || v8 == 1 )
      ++v2;
    else
      ++v3;
    if ( s_clientMgrMode == CLIENT_MANAGER_MODE_NO_CLIENTS || v5 + 1 > 7 || (v9 = v1[1], v9 == -1) || !v9 || v9 == 1 )
      ++v2;
    else
      ++v3;
    v5 += 4;
    v4 += 4i64;
    v1 += 4;
  }
  while ( (__int64)v1 < (__int64)&unk_148CB91A8 );
  if ( s_clientMgrMode == CLIENT_MANAGER_MODE_NO_CLIENTS )
  {
    if ( v3 == 8 )
      return;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_manager.cpp", 255, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "No controllers mapped to clients.") )
      __debugbreak();
    v0 = s_clientMgrMode;
  }
  if ( v0 == CLIENT_MANAGER_MODE_ONE_CLIENT )
  {
    if ( v2 == 1 )
      return;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_manager.cpp", 258, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Too many local client 0s attached to controllers.") )
      __debugbreak();
    v0 = s_clientMgrMode;
  }
  if ( v0 == CLIENT_MANAGER_MODE_MULTIPLE_CLIENTS && v2 != 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_manager.cpp", 261, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Too many local client 1s attached to controllers.") )
    __debugbreak();
}


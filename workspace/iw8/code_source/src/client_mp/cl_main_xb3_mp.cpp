/*
==============
Live_CheckPlayerIsSignedIn
==============
*/

void __fastcall Live_CheckPlayerIsSignedIn(LocalClientNum_t localClientNum)
{
  ?Live_CheckPlayerIsSignedIn@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CL_XB3MP_UnregisterCommands
==============
*/

void CL_XB3MP_UnregisterCommands(void)
{
  ?CL_XB3MP_UnregisterCommands@@YAXXZ();
}

/*
==============
CL_XB3MP_RegisterCommands
==============
*/

void CL_XB3MP_RegisterCommands(void)
{
  ?CL_XB3MP_RegisterCommands@@YAXXZ();
}

/*
==============
CL_Live_ShowMarketplace
==============
*/
void CL_Live_ShowMarketplace()
{
  int v0; 

  v0 = Cmd_LocalControllerIndex();
  Live_ShowMarketplaceUI(v0, 0);
}

/*
==============
CL_Live_GetPermissions
==============
*/
void CL_Live_GetPermissions()
{
  int i; 

  for ( i = 0; i < 2; ++i )
  {
    if ( CL_IsLocalClientActive((LocalClientNum_t)i) )
      Live_GetPermissions(i);
  }
}

/*
==============
CL_Hitch
==============
*/
void CL_Hitch()
{
  Sys_Sleep(400);
}

/*
==============
CL_ChooseNextPlaylist
==============
*/
void CL_ChooseNextPlaylist()
{
  int v0; 

  v0 = Cmd_LocalControllerIndex();
  Party_ChooseNextPlaylist(v0);
}

/*
==============
CL_XB3MP_RegisterCommands
==============
*/
void CL_XB3MP_RegisterCommands(void)
{
  Cmd_AddClientCommandList(S_CL_MAIN_XB3MP_CMD, 4u);
}

/*
==============
CL_XB3MP_UnregisterCommands
==============
*/
void CL_XB3MP_UnregisterCommands(void)
{
  Cmd_RemoveClientCommandList(S_CL_MAIN_XB3MP_CMD, 4u);
}

/*
==============
Live_CheckPlayerIsSignedIn
==============
*/
void Live_CheckPlayerIsSignedIn(LocalClientNum_t localClientNum)
{
  int ControllerFromClient; 

  ControllerFromClient = CL_Mgr_GetControllerFromClient(localClientNum);
  if ( CL_GetLocalClientSignInState(ControllerFromClient) <= 0 )
  {
    OnlineErrorManager::SetLastRecordedErrorCode(&g_onlineMgr.m_errorManager, (Online_Error_CAT_PLATFORM_t)32, NULL);
    Live_ThrowError(ERR_DROP, "XBOXLIVE/MUSTLOGIN");
  }
}


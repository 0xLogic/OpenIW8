/*
==============
CL_GetFirstActiveLocalClient
==============
*/

LocalClientNum_t __fastcall CL_GetFirstActiveLocalClient()
{
  return ?CL_GetFirstActiveLocalClient@@YA?AW4LocalClientNum_t@@XZ();
}

/*
==============
CL_IsLocalClientActive
==============
*/

bool __fastcall CL_IsLocalClientActive(LocalClientNum_t localClientNum)
{
  return ?CL_IsLocalClientActive@@YA_NW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CL_GetUsernameForLocalClient
==============
*/

const char *__fastcall CL_GetUsernameForLocalClient(int controllerIndex)
{
  return ?CL_GetUsernameForLocalClient@@YAPEBDH@Z(controllerIndex);
}

/*
==============
CL_AnyLocalClientStateActive
==============
*/

bool __fastcall CL_AnyLocalClientStateActive()
{
  return ?CL_AnyLocalClientStateActive@@YA_NXZ();
}

/*
==============
CL_AllLocalClientsInactive
==============
*/

bool __fastcall CL_AllLocalClientsInactive()
{
  return ?CL_AllLocalClientsInactive@@YA_NXZ();
}

/*
==============
CL_AllLocalClientsDisconnected
==============
*/

bool __fastcall CL_AllLocalClientsDisconnected()
{
  return ?CL_AllLocalClientsDisconnected@@YA_NXZ();
}

/*
==============
CL_AnyLocalClientChallenging
==============
*/

bool __fastcall CL_AnyLocalClientChallenging()
{
  return ?CL_AnyLocalClientChallenging@@YA_NXZ();
}

/*
==============
CL_IsRenderingSplitScreen
==============
*/

bool __fastcall CL_IsRenderingSplitScreen()
{
  return ?CL_IsRenderingSplitScreen@@YA_NXZ();
}

/*
==============
CL_SupportsMultipleLocalClients
==============
*/

bool __fastcall CL_SupportsMultipleLocalClients()
{
  return ?CL_SupportsMultipleLocalClients@@YA_NXZ();
}

/*
==============
CL_SetLocalClientActive
==============
*/

void __fastcall CL_SetLocalClientActive(LocalClientNum_t localClientNum, bool active)
{
  ?CL_SetLocalClientActive@@YAXW4LocalClientNum_t@@_N@Z(localClientNum, active);
}

/*
==============
CL_GetLocalClientActiveCount
==============
*/

int __fastcall CL_GetLocalClientActiveCount()
{
  return ?CL_GetLocalClientActiveCount@@YAHXZ();
}

/*
==============
CL_AllLocalClientsDisconnected
==============
*/
char CL_AllLocalClientsDisconnected()
{
  unsigned int v0; 
  connstate_t *i; 
  __int64 v3; 
  __int64 v4; 

  if ( !Sys_IsMainThread() && !Sys_IsRenderThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.cpp", 120, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread() || Sys_IsRenderThread())", (const char *)&queryFormat, "Sys_IsMainThread() || Sys_IsRenderThread()") )
    __debugbreak();
  if ( !Sys_IsMainThread() )
    return 1;
  v0 = 0;
  for ( i = &clientUIActives[0].connectionState; ; i += 110 )
  {
    if ( *((_BYTE *)i - 8) )
    {
      if ( v0 >= 2 )
      {
        LODWORD(v4) = 2;
        LODWORD(v3) = v0;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 174, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v3, v4) )
          __debugbreak();
      }
      if ( *i )
        break;
    }
    if ( (int)++v0 >= 2 )
      return 1;
  }
  return 0;
}

/*
==============
CL_AllLocalClientsInactive
==============
*/
char CL_AllLocalClientsInactive()
{
  unsigned int v0; 
  clientUIActive_t *i; 
  __int64 v3; 

  v0 = 0;
  for ( i = clientUIActives; ; ++i )
  {
    if ( v0 > 1 )
    {
      LODWORD(v3) = v0;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.cpp", 51, ASSERT_TYPE_ASSERT, "( ( localClientNum >= 0 && localClientNum < 2 ) )", "( localClientNum ) = %i", v3) )
        __debugbreak();
    }
    if ( !ClGameModeApplication::HasActiveApplicationGameMode() || !Com_GameMode_SupportsFeature(WEAPON_LEAP_LOOP) || !v0 )
      break;
    if ( i->active )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.cpp", 52, ASSERT_TYPE_ASSERT, "(CL_SupportsMultipleLocalClients() || (localClientNum == LOCAL_CLIENT_0) || !clientUIActives[localClientNum].active)", (const char *)&queryFormat, "CL_SupportsMultipleLocalClients() || (localClientNum == LOCAL_CLIENT_0) || !clientUIActives[localClientNum].active") )
        __debugbreak();
      break;
    }
LABEL_12:
    if ( (int)++v0 >= 2 )
      return 1;
  }
  if ( !i->active )
    goto LABEL_12;
  return 0;
}

/*
==============
CL_AnyLocalClientChallenging
==============
*/
char CL_AnyLocalClientChallenging()
{
  LocalClientNum_t v0; 
  connstate_t *i; 
  __int64 v3; 
  __int64 v4; 

  v0 = LOCAL_CLIENT_0;
  for ( i = &clientUIActives[0].connectionState; ; i += 110 )
  {
    if ( CL_IsLocalClientActive(v0) )
    {
      if ( (unsigned int)v0 >= LOCAL_CLIENT_COUNT )
      {
        LODWORD(v4) = 2;
        LODWORD(v3) = v0;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 174, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v3, v4) )
          __debugbreak();
      }
      if ( *i == CA_CHALLENGING )
        break;
    }
    if ( ++v0 >= LOCAL_CLIENT_COUNT )
      return 0;
  }
  return 1;
}

/*
==============
CL_AnyLocalClientStateActive
==============
*/
char CL_AnyLocalClientStateActive()
{
  int v0; 
  connstate_t *p_connectionState; 
  bool v2; 
  __int64 v4; 
  __int64 v5; 

  v0 = 0;
  p_connectionState = &clientUIActives[0].connectionState;
  v2 = 1;
  while ( 1 )
  {
    if ( !v2 )
    {
      LODWORD(v5) = 2;
      LODWORD(v4) = v0;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 174, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v4, v5) )
        __debugbreak();
    }
    if ( *p_connectionState == CA_ACTIVE )
      break;
    ++v0;
    p_connectionState += 110;
    v2 = (unsigned int)v0 < 2;
    if ( v0 >= 2 )
      return 0;
  }
  return 1;
}

/*
==============
CL_GetFirstActiveLocalClient
==============
*/
__int64 CL_GetFirstActiveLocalClient()
{
  LocalClientNum_t v0; 

  v0 = LOCAL_CLIENT_0;
  while ( !CL_IsLocalClientActive(v0) )
  {
    if ( ++v0 >= LOCAL_CLIENT_COUNT )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.cpp", 76, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "CL_GetFirstActiveLocalClient: No active clients.") )
        __debugbreak();
      return 0xFFFFFFFFi64;
    }
  }
  if ( ClGameModeApplication::HasActiveApplicationGameMode() && Com_GameMode_SupportsFeature(WEAPON_LEAP_LOOP) && v0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.cpp", 71, ASSERT_TYPE_ASSERT, "(CL_SupportsMultipleLocalClients() || (localClientNum == LOCAL_CLIENT_0))", (const char *)&queryFormat, "CL_SupportsMultipleLocalClients() || (localClientNum == LOCAL_CLIENT_0)") )
    __debugbreak();
  return (unsigned int)v0;
}

/*
==============
CL_GetLocalClientActiveCount
==============
*/
__int64 CL_GetLocalClientActiveCount()
{
  unsigned int active; 

  active = clientUIActives[0].active + 1;
  if ( !clientUIActives[1].active )
    active = clientUIActives[0].active;
  if ( active > 1 && ClGameModeApplication::HasActiveApplicationGameMode() && Com_GameMode_SupportsFeature(WEAPON_LEAP_LOOP) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.cpp", 38, ASSERT_TYPE_ASSERT, "(count <= 1 || CL_SupportsMultipleLocalClients())", (const char *)&queryFormat, "count <= 1 || CL_SupportsMultipleLocalClients()") )
    __debugbreak();
  return active;
}

/*
==============
CL_GetUsernameForLocalClient
==============
*/
const char *CL_GetUsernameForLocalClient(int controllerIndex)
{
  const char *v3; 

  if ( CL_GetLocalClientSignInState(controllerIndex) > 0 )
    return Live_GetLocalClientName(controllerIndex);
  v3 = j_va("XBOXLIVE/PLAYER%i", (unsigned int)controllerIndex);
  return UI_SafeTranslateString(v3);
}

/*
==============
CL_IsLocalClientActive
==============
*/
_BOOL8 CL_IsLocalClientActive(LocalClientNum_t localClientNum)
{
  __int64 v1; 

  v1 = localClientNum;
  if ( (unsigned int)localClientNum > LOCAL_CLIENT_1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.cpp", 51, ASSERT_TYPE_ASSERT, "( ( localClientNum >= 0 && localClientNum < 2 ) )", "( localClientNum ) = %i", localClientNum) )
    __debugbreak();
  if ( ClGameModeApplication::HasActiveApplicationGameMode() && Com_GameMode_SupportsFeature(WEAPON_LEAP_LOOP) && (_DWORD)v1 && clientUIActives[v1].active && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.cpp", 52, ASSERT_TYPE_ASSERT, "(CL_SupportsMultipleLocalClients() || (localClientNum == LOCAL_CLIENT_0) || !clientUIActives[localClientNum].active)", (const char *)&queryFormat, "CL_SupportsMultipleLocalClients() || (localClientNum == LOCAL_CLIENT_0) || !clientUIActives[localClientNum].active") )
    __debugbreak();
  return clientUIActives[v1].active;
}

/*
==============
CL_IsRenderingSplitScreen
==============
*/
char CL_IsRenderingSplitScreen()
{
  int v0; 
  unsigned int active; 
  connstate_t *p_connectionState; 
  bool v3; 
  __int64 v5; 
  __int64 v6; 

  if ( Com_FrontEnd_IsInFrontEnd() )
    return 0;
  v0 = 0;
  active = clientUIActives[0].active + 1;
  if ( !clientUIActives[1].active )
    active = clientUIActives[0].active;
  if ( active <= 1 )
    return 0;
  if ( ClGameModeApplication::HasActiveApplicationGameMode() && Com_GameMode_SupportsFeature(WEAPON_LEAP_LOOP) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.cpp", 38, ASSERT_TYPE_ASSERT, "(count <= 1 || CL_SupportsMultipleLocalClients())", (const char *)&queryFormat, "count <= 1 || CL_SupportsMultipleLocalClients()") )
    __debugbreak();
  p_connectionState = &clientUIActives[0].connectionState;
  v3 = 1;
  while ( 1 )
  {
    if ( !v3 )
    {
      LODWORD(v6) = 2;
      LODWORD(v5) = v0;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 174, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v5, v6) )
        __debugbreak();
    }
    if ( *p_connectionState == CA_ACTIVE )
      break;
    ++v0;
    p_connectionState += 110;
    v3 = (unsigned int)v0 < 2;
    if ( v0 >= 2 )
      return 0;
  }
  return 1;
}

/*
==============
CL_SetLocalClientActive
==============
*/
void CL_SetLocalClientActive(LocalClientNum_t localClientNum, bool active)
{
  __int64 v2; 
  __int64 v4; 
  const char *v5; 
  __int64 v6; 
  __int64 v7; 
  __int64 v8; 
  __int64 v9; 

  v2 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.cpp", 159, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  if ( ClGameModeApplication::HasActiveApplicationGameMode() && Com_GameMode_SupportsFeature(WEAPON_LEAP_LOOP) && (_DWORD)v2 && active && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.cpp", 160, ASSERT_TYPE_ASSERT, "(CL_SupportsMultipleLocalClients() || (localClientNum == LOCAL_CLIENT_0) || !active)", (const char *)&queryFormat, "CL_SupportsMultipleLocalClients() || (localClientNum == LOCAL_CLIENT_0) || !active") )
    __debugbreak();
  v4 = v2;
  if ( clientUIActives[v2].active != active )
  {
    if ( !active )
    {
      if ( (unsigned int)v2 >= 2 )
      {
        LODWORD(v8) = 2;
        LODWORD(v6) = v2;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 182, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v6, v8) )
          __debugbreak();
        LODWORD(v9) = 2;
        LODWORD(v7) = v2;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 165, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v7, v9) )
          __debugbreak();
      }
      if ( !clientUIActives[v4].frontEndSceneState[0] && CL_GetLocalClientAnyConnectionState((const LocalClientNum_t)v2) )
        CL_Main_Disconnect((LocalClientNum_t)v2);
    }
    v5 = "False";
    if ( active )
      v5 = "True";
    Com_Printf(14, "Setting Client %d to %s\n", (unsigned int)v2, v5);
    clientUIActives[v4].active = active;
    if ( !active )
      UI_SetShowControllerRemovedPopup((LocalClientNum_t)v2, 0);
  }
}

/*
==============
CL_SupportsMultipleLocalClients
==============
*/
bool CL_SupportsMultipleLocalClients()
{
  return !ClGameModeApplication::HasActiveApplicationGameMode() || !Com_GameMode_SupportsFeature(WEAPON_LEAP_LOOP);
}


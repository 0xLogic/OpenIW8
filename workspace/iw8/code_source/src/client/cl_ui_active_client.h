/*
==============
CL_GetLocalClientAnyConnectionState
==============
*/

connstate_t __fastcall CL_GetLocalClientAnyConnectionState(const LocalClientNum_t localClientNum)
{
  return ?CL_GetLocalClientAnyConnectionState@@YA?AW4connstate_t@@W4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CL_IsGameClientActive
==============
*/

bool __fastcall CL_IsGameClientActive(const LocalClientNum_t localClientNum)
{
  return ?CL_IsGameClientActive@@YA_NW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CL_IsLocalClientConnectionActiveForAnyServer
==============
*/

bool __fastcall CL_IsLocalClientConnectionActiveForAnyServer(const LocalClientNum_t localClientNum)
{
  return ?CL_IsLocalClientConnectionActiveForAnyServer@@YA_NW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CL_IsLocalClientDisconnectedFromGameServer
==============
*/

bool __fastcall CL_IsLocalClientDisconnectedFromGameServer(const LocalClientNum_t localClientNum)
{
  return ?CL_IsLocalClientDisconnectedFromGameServer@@YA_NW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CL_GetLocalClientGameConnectionState
==============
*/

connstate_t __fastcall CL_GetLocalClientGameConnectionState(const LocalClientNum_t localClientNum)
{
  return ?CL_GetLocalClientGameConnectionState@@YA?AW4connstate_t@@W4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CL_SetLocalClientConnectionState
==============
*/

void __fastcall CL_SetLocalClientConnectionState(const LocalClientNum_t localClientNum, connstate_t state)
{
  ?CL_SetLocalClientConnectionState@@YAXW4LocalClientNum_t@@W4connstate_t@@@Z(localClientNum, state);
}

/*
==============
CL_IsLocalClientConnectedToGameServer
==============
*/

bool __fastcall CL_IsLocalClientConnectedToGameServer(const LocalClientNum_t localClientNum)
{
  return ?CL_IsLocalClientConnectedToGameServer@@YA_NW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CL_IsLocalClientConnectionActiveForGameServer
==============
*/

bool __fastcall CL_IsLocalClientConnectionActiveForGameServer(const LocalClientNum_t localClientNum)
{
  return ?CL_IsLocalClientConnectionActiveForGameServer@@YA_NW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CL_IsLocalClientConnectedToAnyServer
==============
*/

bool __fastcall CL_IsLocalClientConnectedToAnyServer(const LocalClientNum_t localClientNum)
{
  return ?CL_IsLocalClientConnectedToAnyServer@@YA_NW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CL_GetLocalClientFrontEntState
==============
*/

ClFrontEndSceneState __fastcall CL_GetLocalClientFrontEntState(const LocalClientNum_t localClientNum)
{
  return ?CL_GetLocalClientFrontEntState@@YA?AW4ClFrontEndSceneState@@W4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CL_IsLocalClientDisconnectedFromAnyServer
==============
*/

bool __fastcall CL_IsLocalClientDisconnectedFromAnyServer(const LocalClientNum_t localClientNum)
{
  return ?CL_IsLocalClientDisconnectedFromAnyServer@@YA_NW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CL_GetLocalClientUIGlobals
==============
*/

clientUIActive_t *__fastcall CL_GetLocalClientUIGlobals(const LocalClientNum_t localClientNum)
{
  return ?CL_GetLocalClientUIGlobals@@YAPEAUclientUIActive_t@@W4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CL_GetLocalClientUIGlobals
==============
*/
clientUIActive_t *CL_GetLocalClientUIGlobals(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  int v4; 

  v1 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v4 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 158, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, v4) )
      __debugbreak();
  }
  return &clientUIActives[v1];
}

/*
==============
CL_IsLocalClientConnectedToGameServer
==============
*/
bool CL_IsLocalClientConnectedToGameServer(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  connstate_t connectionState; 
  __int64 v4; 
  __int64 v6; 
  __int64 v7; 
  int v8; 
  __int64 v9; 

  v1 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v8 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 182, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, v8) )
      __debugbreak();
    LODWORD(v9) = 2;
    LODWORD(v6) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 165, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v6, v9) )
      __debugbreak();
  }
  if ( clientUIActives[v1].frontEndSceneState[0] )
  {
    connectionState = CA_DISCONNECTED;
  }
  else
  {
    if ( (unsigned int)v1 >= 2 )
    {
      LODWORD(v7) = 2;
      LODWORD(v4) = v1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 174, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v4, v7) )
        __debugbreak();
    }
    connectionState = clientUIActives[v1].connectionState;
  }
  return connectionState >= CA_CONNECTED;
}

/*
==============
CL_IsLocalClientConnectionActiveForGameServer
==============
*/
bool CL_IsLocalClientConnectionActiveForGameServer(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  connstate_t connectionState; 
  __int64 v4; 
  __int64 v6; 
  __int64 v7; 
  int v8; 
  __int64 v9; 

  v1 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v8 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 182, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, v8) )
      __debugbreak();
    LODWORD(v9) = 2;
    LODWORD(v6) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 165, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v6, v9) )
      __debugbreak();
  }
  if ( clientUIActives[v1].frontEndSceneState[0] )
  {
    connectionState = CA_DISCONNECTED;
  }
  else
  {
    if ( (unsigned int)v1 >= 2 )
    {
      LODWORD(v7) = 2;
      LODWORD(v4) = v1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 174, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v4, v7) )
        __debugbreak();
    }
    connectionState = clientUIActives[v1].connectionState;
  }
  return connectionState == CA_ACTIVE;
}

/*
==============
CL_GetLocalClientGameConnectionState
==============
*/
__int64 CL_GetLocalClientGameConnectionState(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  __int64 v3; 
  __int64 v5; 
  __int64 v6; 
  int v7; 
  __int64 v8; 

  v1 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v7 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 182, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, v7) )
      __debugbreak();
    LODWORD(v8) = 2;
    LODWORD(v5) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 165, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v5, v8) )
      __debugbreak();
  }
  if ( clientUIActives[v1].frontEndSceneState[0] )
    return 0i64;
  if ( (unsigned int)v1 >= 2 )
  {
    LODWORD(v6) = 2;
    LODWORD(v3) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 174, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v3, v6) )
      __debugbreak();
  }
  return (unsigned int)clientUIActives[v1].connectionState;
}

/*
==============
CL_IsLocalClientConnectedToAnyServer
==============
*/
bool CL_IsLocalClientConnectedToAnyServer(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  int v4; 

  v1 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v4 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 174, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, v4) )
      __debugbreak();
  }
  return clientUIActives[v1].connectionState >= CA_CONNECTED;
}

/*
==============
CL_GetLocalClientAnyConnectionState
==============
*/
__int64 CL_GetLocalClientAnyConnectionState(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  int v4; 

  v1 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v4 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 174, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, v4) )
      __debugbreak();
  }
  return (unsigned int)clientUIActives[v1].connectionState;
}

/*
==============
CL_GetLocalClientFrontEntState
==============
*/
__int64 CL_GetLocalClientFrontEntState(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  int v4; 

  v1 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v4 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 165, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, v4) )
      __debugbreak();
  }
  return (unsigned __int8)clientUIActives[v1].frontEndSceneState[0];
}

/*
==============
CL_IsGameClientActive
==============
*/
bool CL_IsGameClientActive(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  int v4; 

  v1 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v4 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 158, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, v4) )
      __debugbreak();
  }
  return !clientUIActives[v1].frontEndSceneState[0] && clientUIActives[v1].cgameInitialized;
}

/*
==============
CL_IsLocalClientConnectionActiveForAnyServer
==============
*/
bool CL_IsLocalClientConnectionActiveForAnyServer(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  int v4; 

  v1 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v4 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 174, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, v4) )
      __debugbreak();
  }
  return clientUIActives[v1].connectionState == CA_ACTIVE;
}

/*
==============
CL_IsLocalClientDisconnectedFromAnyServer
==============
*/
bool CL_IsLocalClientDisconnectedFromAnyServer(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  int v4; 

  v1 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v4 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 174, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, v4) )
      __debugbreak();
  }
  return clientUIActives[v1].connectionState == CA_DISCONNECTED;
}

/*
==============
CL_SetLocalClientConnectionState
==============
*/
void CL_SetLocalClientConnectionState(const LocalClientNum_t localClientNum, connstate_t state)
{
  __int64 v2; 
  connstate_t *p_connectionState; 

  v2 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 195, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, 2) )
    __debugbreak();
  p_connectionState = &clientUIActives[v2].connectionState;
  Com_Printf(14, "CL_SetLocalConnectionState %i -> %i.\n", *(unsigned int *)p_connectionState, (unsigned int)state);
  *p_connectionState = state;
  if ( state == CA_DISCONNECTED )
    Online_Telemetry_ResetInputSession((const LocalClientNum_t)v2);
}

/*
==============
CL_IsLocalClientDisconnectedFromGameServer
==============
*/
bool CL_IsLocalClientDisconnectedFromGameServer(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  connstate_t connectionState; 
  __int64 v4; 
  __int64 v6; 
  __int64 v7; 
  int v8; 
  __int64 v9; 

  v1 = localClientNum;
  if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
  {
    v8 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 182, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", localClientNum, v8) )
      __debugbreak();
    LODWORD(v9) = 2;
    LODWORD(v6) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 165, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v6, v9) )
      __debugbreak();
  }
  if ( clientUIActives[v1].frontEndSceneState[0] )
  {
    connectionState = CA_DISCONNECTED;
  }
  else
  {
    if ( (unsigned int)v1 >= 2 )
    {
      LODWORD(v7) = 2;
      LODWORD(v4) = v1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 174, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v4, v7) )
        __debugbreak();
    }
    connectionState = clientUIActives[v1].connectionState;
  }
  return connectionState == CA_DISCONNECTED;
}


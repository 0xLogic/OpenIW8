/*
==============
CL_Demo_IsIdle
==============
*/

bool __fastcall CL_Demo_IsIdle(LocalClientNum_t localClientNum)
{
  return ?CL_Demo_IsIdle@@YA_NW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CL_Demo_IsPlaying
==============
*/

bool __fastcall CL_Demo_IsPlaying(LocalClientNum_t localClientNum)
{
  return ?CL_Demo_IsPlaying@@YA_NW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CL_Demo_SetDemoState
==============
*/

void __fastcall CL_Demo_SetDemoState(LocalClientNum_t localClientNum, ClientDemoState state)
{
  ?CL_Demo_SetDemoState@@YAXW4LocalClientNum_t@@W4ClientDemoState@@@Z(localClientNum, state);
}

/*
==============
CL_Demo_IsPlayingAny
==============
*/

bool __fastcall CL_Demo_IsPlayingAny(LocalClientNum_t localClientNum)
{
  return ?CL_Demo_IsPlayingAny@@YA_NW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CL_Demo_IsPlayingServer
==============
*/

bool __fastcall CL_Demo_IsPlayingServer(LocalClientNum_t localClientNum)
{
  return ?CL_Demo_IsPlayingServer@@YA_NW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CL_Demo_GetDemoState
==============
*/
__int64 CL_Demo_GetDemoState(LocalClientNum_t localClientNum)
{
  __int64 v1; 
  __int64 v3; 
  int v4; 
  __int64 v5; 
  int v6; 

  v1 = localClientNum;
  if ( !CL_IsLocalClientActive(localClientNum) )
    return 0i64;
  if ( (unsigned int)v1 >= 2 )
  {
    v6 = 2;
    v4 = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_ui_active_client.h", 174, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v4, v6) )
      __debugbreak();
  }
  if ( clientUIActives[v1].connectionState == CA_DISCONNECTED )
    return 0i64;
  if ( (unsigned int)v1 >= 2 )
  {
    LODWORD(v5) = 2;
    LODWORD(v3) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_connection.h", 106, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v3, v5) )
      __debugbreak();
  }
  if ( !ClConnection::ms_connections[v1] )
  {
    if ( (_BYTE)ClConnection::ms_activeConnectionType )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_connection.h", 107, ASSERT_TYPE_ASSERT, "(ms_connections[localClientNum] || ms_activeConnectionType == GameModeType::NONE)", (const char *)&queryFormat, "ms_connections[localClientNum] || ms_activeConnectionType == GameModeType::NONE") )
        __debugbreak();
    }
    if ( !ClConnection::ms_connections[v1] )
      return 0i64;
  }
  if ( Com_GameMode_SupportsFeature(WEAPON_PRE_FIRING) )
    return (unsigned int)ClConnectionMP::GetClientConnectionData((const LocalClientNum_t)v1)->demoCommon.state;
  else
    return 0i64;
}

/*
==============
CL_Demo_IsIdle
==============
*/
bool CL_Demo_IsIdle(LocalClientNum_t localClientNum)
{
  return (unsigned int)CL_Demo_GetDemoState(localClientNum) == 0;
}

/*
==============
CL_Demo_IsPlaying
==============
*/
bool CL_Demo_IsPlaying(LocalClientNum_t localClientNum)
{
  return 0;
}

/*
==============
CL_Demo_IsPlayingAny
==============
*/
bool CL_Demo_IsPlayingAny(LocalClientNum_t localClientNum)
{
  return (unsigned int)CL_Demo_GetDemoState(localClientNum) == 1;
}

/*
==============
CL_Demo_IsPlayingServer
==============
*/
bool CL_Demo_IsPlayingServer(LocalClientNum_t localClientNum)
{
  return (unsigned int)CL_Demo_GetDemoState(localClientNum) == 1;
}

/*
==============
CL_Demo_SetDemoState
==============
*/
void CL_Demo_SetDemoState(LocalClientNum_t localClientNum, ClientDemoState state)
{
  if ( !Com_GameMode_SupportsFeature(WEAPON_PRE_FIRING) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_demo\\cl_demo_common.cpp", 11, ASSERT_TYPE_ASSERT, "(Com_GameMode_SupportsFeature( Com_GameMode_Feature::CLIENT_DEMO_PLAYBACK_SUPPORT ))", (const char *)&queryFormat, "Com_GameMode_SupportsFeature( Com_GameMode_Feature::CLIENT_DEMO_PLAYBACK_SUPPORT )") )
    __debugbreak();
  ClConnectionMP::GetClientConnectionData(localClientNum)->demoCommon.state = state;
}


/*
==============
dwLobbyPump
==============
*/

void __fastcall dwLobbyPump(const int controllerIndex)
{
  ?dwLobbyPump@@YAXH@Z(controllerIndex);
}

/*
==============
dwResetLogonAttempts
==============
*/

void __fastcall dwResetLogonAttempts(const int controllerIndex)
{
  ?dwResetLogonAttempts@@YAXH@Z(controllerIndex);
}

/*
==============
dwGetNumLogonAttempts
==============
*/

int __fastcall dwGetNumLogonAttempts(const int controllerIndex)
{
  return ?dwGetNumLogonAttempts@@YAHH@Z(controllerIndex);
}

/*
==============
dwGetNumLogonAttempts
==============
*/
__int64 dwGetNumLogonAttempts(const int controllerIndex)
{
  __int64 v1; 
  int v4; 

  v1 = controllerIndex;
  if ( (unsigned int)controllerIndex >= 8 )
  {
    v4 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwutils-console.cpp", 42, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex, v4) )
      __debugbreak();
  }
  return (unsigned int)g_dwLogonHSMs[v1].m_numLogOnAttempts;
}

/*
==============
dwLobbyPump
==============
*/
void dwLobbyPump(const int controllerIndex)
{
  __int64 v1; 
  int v3; 

  v1 = controllerIndex;
  if ( (unsigned int)controllerIndex >= 8 )
  {
    v3 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwutils-console.cpp", 50, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex, v3) )
      __debugbreak();
  }
  dwLogonHSM_xb3::CheckForDemonwareDisconnect(&g_dwLogonHSMs[v1]);
}

/*
==============
dwResetLogonAttempts
==============
*/
void dwResetLogonAttempts(const int controllerIndex)
{
  __int64 v1; 
  dwLogonHSM_xb3 *v2; 
  int v4; 

  v1 = controllerIndex;
  if ( (unsigned int)controllerIndex >= 8 )
  {
    v4 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwutils-console.cpp", 32, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex, v4) )
      __debugbreak();
  }
  v2 = &g_dwLogonHSMs[v1];
  dwLogonHSM_xb3::ClearConnectInterval(v2);
  dwLogonHSM_xb3::ClearLogonAttemptCount(v2);
  g_disableLSGReconnect = 0;
}


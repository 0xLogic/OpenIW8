/*
==============
Com_DevhostPoll
==============
*/

bool __fastcall Com_DevhostPoll()
{
  return ?Com_DevhostPoll@@YA_NXZ();
}

/*
==============
Com_DevhostError
==============
*/

void __fastcall Com_DevhostError(const char *__formal)
{
  ?Com_DevhostError@@YAXPEBD@Z(__formal);
}

/*
==============
Com_DevhostError
==============
*/
void Com_DevhostError(const char *__formal)
{
  ((void (__fastcall *)(const char *))g_devhost.m_harness->EnterCriticalSection)(__formal);
  g_devhost.m_state = COM_DEVHOST_STATE_CLOSING;
  g_devhost.m_harness->LeaveCriticalSection();
}

/*
==============
Com_DevhostPoll
==============
*/
bool Com_DevhostPoll()
{
  int v0; 
  const char *v1; 
  const char *v2; 
  const char *v3; 
  ComDevhostState m_state; 
  __int64 v5; 
  bool v6; 
  bool v7; 
  ComDevhostHarness *m_harness; 
  unsigned __int16 m_port; 
  bool (__fastcall *SocketBind)(unsigned __int64, unsigned __int16); 
  char msg[4]; 
  unsigned __int8 hdr[12]; 

  g_devhost.m_harness->EnterCriticalSection();
  v0 = 0;
  v1 = "g_devhost.m_state == COM_DEVHOST_STATE_ACTIVE";
  v2 = "g_devhost.m_state == COM_DEVHOST_STATE_LISTEN";
  v3 = "g_devhost.m_listenSocket != COM_INVALID_DHSOCKET";
  do
  {
    m_state = g_devhost.m_state;
    switch ( g_devhost.m_state )
    {
      case COM_DEVHOST_STATE_IDLE:
        v7 = ((unsigned __int8 (__fastcall *)(unsigned __int64 *, bool (__fastcall *)(unsigned __int64 *), const char *, const char *))g_devhost.m_harness->SocketSocketTcp)(&g_devhost.m_listenSocket, g_devhost.m_harness->SocketSocketTcp, "g_devhost.m_state == COM_DEVHOST_STATE_LISTEN", "g_devhost.m_listenSocket != COM_INVALID_DHSOCKET") == 0;
        m_harness = g_devhost.m_harness;
        if ( !v7 )
        {
          m_port = g_devhost.m_port;
          SocketBind = g_devhost.m_harness->SocketBind;
          if ( (g_devhost.m_port < 0 || g_devhost.m_port > 0xFFFFu) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,int>(int)", "unsigned", LOWORD(g_devhost.m_port), "signed", g_devhost.m_port) )
            __debugbreak();
          v7 = !SocketBind(g_devhost.m_listenSocket, m_port);
          m_harness = g_devhost.m_harness;
          if ( !v7 )
          {
            if ( g_devhost.m_harness->SocketListen(g_devhost.m_listenSocket) )
            {
              g_devhost.m_state = COM_DEVHOST_STATE_LISTEN;
              goto LABEL_38;
            }
LABEL_35:
            m_harness = g_devhost.m_harness;
          }
        }
        m_harness->EnterCriticalSection();
        g_devhost.m_state = COM_DEVHOST_STATE_CLOSING;
        g_devhost.m_harness->LeaveCriticalSection();
LABEL_38:
        v1 = "g_devhost.m_state == COM_DEVHOST_STATE_ACTIVE";
        v2 = "g_devhost.m_state == COM_DEVHOST_STATE_LISTEN";
        v3 = "g_devhost.m_listenSocket != COM_INVALID_DHSOCKET";
        goto LABEL_39;
      case COM_DEVHOST_STATE_LISTEN:
        if ( g_devhost.m_listenSocket == -1i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\devhost\\com_devhost.cpp", 81, ASSERT_TYPE_SANITY, "( g_devhost.m_listenSocket != (COM_DHSOCKET(~0)) )", (const char *)&queryFormat, "g_devhost.m_listenSocket != COM_INVALID_DHSOCKET") )
          __debugbreak();
        if ( ((unsigned __int8 (__fastcall *)(unsigned __int64, bool (__fastcall *)(unsigned __int64), const char *, const char *))g_devhost.m_harness->SocketSelect)(g_devhost.m_listenSocket, g_devhost.m_harness->SocketSelect, v2, v3) )
        {
          g_devhost.m_harness->SocketAccept(g_devhost.m_listenSocket, &g_devhost.m_clientSocket);
          if ( !g_devhost.m_harness->SocketNoDelay(g_devhost.m_clientSocket) )
          {
            g_devhost.m_harness->EnterCriticalSection();
            g_devhost.m_state = COM_DEVHOST_STATE_CLOSING;
            g_devhost.m_harness->LeaveCriticalSection();
          }
          g_devhost.m_state = COM_DEVHOST_STATE_ACTIVE;
          g_devhost.m_subscriptions = 1;
          for ( msg[0] = 0; msg[0] < g_devhost.m_channelNum; ++msg[0] )
            Com_DevhostSendMessage(0, 1u, 1u, msg);
          g_devhost.m_debugHeaderCount = 0;
        }
        goto LABEL_38;
      case COM_DEVHOST_STATE_ACTIVE:
        Com_DevHost_Buffer_Flush();
        do
        {
          if ( g_devhost.m_state != COM_DEVHOST_STATE_ACTIVE || !g_devhost.m_harness->SocketPoll(g_devhost.m_clientSocket) )
            break;
          if ( g_devhost.m_harness->SocketRecv(g_devhost.m_clientSocket, hdr, 7u) != 7 )
            goto LABEL_35;
          v6 = Com_DevHost_Receive_Msg(hdr);
          g_devhost.m_anyDataReceived = 1;
        }
        while ( v6 );
        goto LABEL_38;
    }
    v5 = (unsigned int)(g_devhost.m_state - 3);
    if ( g_devhost.m_state == COM_DEVHOST_STATE_CLOSING )
    {
      if ( g_devhost.m_clientSocket )
      {
        ((void (__fastcall *)(unsigned __int64, const char *, const char *, const char *))g_devhost.m_harness->SocketClose)(g_devhost.m_clientSocket, "g_devhost.m_state == COM_DEVHOST_STATE_ACTIVE", "g_devhost.m_state == COM_DEVHOST_STATE_LISTEN", "g_devhost.m_listenSocket != COM_INVALID_DHSOCKET");
        g_devhost.m_clientSocket = -1i64;
      }
      if ( g_devhost.m_listenSocket )
      {
        ((void (__fastcall *)(unsigned __int64, const char *, const char *, const char *))g_devhost.m_harness->SocketClose)(g_devhost.m_listenSocket, v1, v2, v3);
        g_devhost.m_listenSocket = -1i64;
      }
      v5 = g_devhost.m_shutdownInitiated ? 4 : 0;
      g_devhost.m_state = g_devhost.m_shutdownInitiated ? COM_DEVHOST_STATE_DEAD : COM_DEVHOST_STATE_IDLE;
      goto LABEL_38;
    }
    if ( g_devhost.m_state != COM_DEVHOST_STATE_DEAD )
      break;
LABEL_39:
    if ( m_state == g_devhost.m_state )
      break;
    ++v0;
  }
  while ( v0 < 10 );
  ((void (__fastcall *)(__int64, const char *, const char *, const char *))g_devhost.m_harness->LeaveCriticalSection)(v5, "g_devhost.m_state == COM_DEVHOST_STATE_ACTIVE", "g_devhost.m_state == COM_DEVHOST_STATE_LISTEN", "g_devhost.m_listenSocket != COM_INVALID_DHSOCKET");
  return g_devhost.m_state != COM_DEVHOST_STATE_DEAD;
}


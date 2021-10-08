/*
==============
Com_SocketPoll
==============
*/

bool __fastcall Com_SocketPoll(unsigned __int64 s)
{
  return ?Com_SocketPoll@@YA_N_K@Z(s);
}

/*
==============
Com_SocketAccept
==============
*/

void __fastcall Com_SocketAccept(unsigned __int64 l, unsigned __int64 *c)
{
  ?Com_SocketAccept@@YAX_KPEA_K@Z(l, c);
}

/*
==============
Com_SocketSocketTcp
==============
*/

bool __fastcall Com_SocketSocketTcp(unsigned __int64 *s)
{
  return ?Com_SocketSocketTcp@@YA_NPEA_K@Z(s);
}

/*
==============
Com_SocketSelect
==============
*/

bool __fastcall Com_SocketSelect(unsigned __int64 s)
{
  return ?Com_SocketSelect@@YA_N_K@Z(s);
}

/*
==============
Com_SocketSend
==============
*/

int __fastcall Com_SocketSend(unsigned __int64 s, const void *data, unsigned int size)
{
  return ?Com_SocketSend@@YAH_KPEBXI@Z(s, data, size);
}

/*
==============
Com_SocketBind
==============
*/

bool __fastcall Com_SocketBind(unsigned __int64 s, unsigned __int16 port)
{
  return ?Com_SocketBind@@YA_N_KG@Z(s, port);
}

/*
==============
Com_SocketNoDelay
==============
*/

bool __fastcall Com_SocketNoDelay(unsigned __int64 s)
{
  return ?Com_SocketNoDelay@@YA_N_K@Z(s);
}

/*
==============
Com_SocketClose
==============
*/

int __stdcall Com_SocketClose(SOCKET s)
{
  return ?Com_SocketClose@@YAX_K@Z(s);
}

/*
==============
Com_SocketRecv
==============
*/

int __fastcall Com_SocketRecv(unsigned __int64 s, void *output, unsigned int size)
{
  return ?Com_SocketRecv@@YAH_KPEAXI@Z(s, output, size);
}

/*
==============
Com_SocketListen
==============
*/

bool __fastcall Com_SocketListen(unsigned __int64 s)
{
  return ?Com_SocketListen@@YA_N_K@Z(s);
}

/*
==============
Com_SocketAccept
==============
*/
void Com_SocketAccept(unsigned __int64 l, unsigned __int64 *c)
{
  *c = accept(l, NULL, NULL);
}

/*
==============
Com_SocketBind
==============
*/
bool Com_SocketBind(unsigned __int64 s, unsigned __int16 port)
{
  struct sockaddr name; 

  *(_QWORD *)&name.sa_data[6] = 0i64;
  *(_DWORD *)&name.sa_data[2] = htonl(0);
  name.sa_family = 2;
  *(_WORD *)name.sa_data = htons(port);
  return bind(s, &name, 16) >= 0;
}

/*
==============
Com_SocketClose
==============
*/

int __stdcall Com_SocketClose(SOCKET s)
{
  return closesocket(s);
}

/*
==============
Com_SocketListen
==============
*/
bool Com_SocketListen(unsigned __int64 s)
{
  return listen(s, 1) >= 0;
}

/*
==============
Com_SocketNoDelay
==============
*/
bool Com_SocketNoDelay(unsigned __int64 s)
{
  int optval; 

  optval = 1;
  return setsockopt(s, 6, 1, (const char *)&optval, 4) >= 0;
}

/*
==============
Com_SocketPoll
==============
*/
bool Com_SocketPoll(unsigned __int64 s)
{
  struct timeval timeout; 
  fd_set readfds; 

  readfds.fd_array[0] = s;
  timeout = 0i64;
  readfds.fd_count = 1;
  return select(0, &readfds, NULL, NULL, &timeout) == 1;
}

/*
==============
Com_SocketRecv
==============
*/
int Com_SocketRecv(unsigned __int64 s, void *output, unsigned int size)
{
  return recv(s, (char *)output, size, 0);
}

/*
==============
Com_SocketSelect
==============
*/
bool Com_SocketSelect(unsigned __int64 s)
{
  struct timeval timeout; 
  fd_set readfds; 

  readfds.fd_array[0] = s;
  timeout = 0i64;
  readfds.fd_count = 1;
  if ( select(s + 1, &readfds, NULL, NULL, &timeout) >= 0 )
    return _WSAFDIsSet_0(s, &readfds) != 0;
  Com_PrintError(1, "Com_SocketSelect select failed\n");
  return 0;
}

/*
==============
Com_SocketSend
==============
*/
int Com_SocketSend(unsigned __int64 s, const void *data, unsigned int size)
{
  return send(s, (const char *)data, size, 0);
}

/*
==============
Com_SocketSocketTcp
==============
*/
bool Com_SocketSocketTcp(unsigned __int64 *s)
{
  unsigned __int64 v2; 

  v2 = socket(2, 1, 6);
  *s = v2;
  return v2 != -1i64;
}


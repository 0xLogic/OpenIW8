/*
==============
NET_InitPlatform
==============
*/

void NET_InitPlatform(void)
{
  ?NET_InitPlatform@@YAXXZ();
}

/*
==============
NET_RegisterDvarsPlatform
==============
*/

void NET_RegisterDvarsPlatform(void)
{
  ?NET_RegisterDvarsPlatform@@YAXXZ();
}

/*
==============
NET_TCPIPSend
==============
*/

int __fastcall NET_TCPIPSend(unsigned __int64 socket, const char *buf, int remaining, bool *wouldBlock)
{
  return ?NET_TCPIPSend@@YAH_KPEBDHPEA_N@Z(socket, buf, remaining, wouldBlock);
}

/*
==============
NET_TCPIPAccept
==============
*/

unsigned __int64 __fastcall NET_TCPIPAccept(unsigned __int64 socket, bool *wouldBlock)
{
  return ?NET_TCPIPAccept@@YA_K_KPEA_N@Z(socket, wouldBlock);
}

/*
==============
Sys_GetLocalIP
==============
*/

const unsigned int *__fastcall Sys_GetLocalIP(int ipNumber)
{
  return ?Sys_GetLocalIP@@YAAEBIH@Z(ipNumber);
}

/*
==============
NET_IPSocket
==============
*/

unsigned __int64 __fastcall NET_IPSocket(const char *net_interface, int srcPort)
{
  return ?NET_IPSocket@@YA_KPEBDH@Z(net_interface, srcPort);
}

/*
==============
NET_GetLocalAddress
==============
*/

void NET_GetLocalAddress(void)
{
  ?NET_GetLocalAddress@@YAXXZ();
}

/*
==============
NET_LoadDeviceAssociationTemplate
==============
*/

bool __fastcall NET_LoadDeviceAssociationTemplate(Platform::String *name)
{
  return ?NET_LoadDeviceAssociationTemplate@@YA_NPE$AAVString@Platform@@@Z(name);
}

/*
==============
NET_TCPIPClose
==============
*/

int __stdcall NET_TCPIPClose(SOCKET s)
{
  return ?NET_TCPIPClose@@YAX_K@Z(s);
}

/*
==============
Sys_GetNumLocalIP
==============
*/

int __fastcall Sys_GetNumLocalIP()
{
  return ?Sys_GetNumLocalIP@@YAHXZ();
}

/*
==============
NET_Sleep
==============
*/

void __fastcall NET_Sleep(int msec)
{
  ?NET_Sleep@@YAXH@Z(msec);
}

/*
==============
NET_TCPIPSocket
==============
*/

unsigned __int64 __fastcall NET_TCPIPSocket(const char *net_interface, int dstPort, int type)
{
  return ?NET_TCPIPSocket@@YA_KPEBDHH@Z(net_interface, dstPort, type);
}

/*
==============
Sys_CloseSocket
==============
*/

int __stdcall Sys_CloseSocket(SOCKET s)
{
  return ?Sys_CloseSocket@@YAX_K@Z(s);
}

/*
==============
NET_TCPIPRecvfrom
==============
*/

int __fastcall NET_TCPIPRecvfrom(unsigned __int64 socket, char *buf, int remaining, bool *wouldBlock)
{
  return ?NET_TCPIPRecvfrom@@YAH_KPEADHPEA_N@Z(socket, buf, remaining, wouldBlock);
}

/*
==============
Sys_RecvFrom
==============
*/

int __fastcall Sys_RecvFrom(const unsigned __int64 socket, netadr_t *net_from, msg_t *net_message)
{
  return ?Sys_RecvFrom@@YAH_KPEAUnetadr_t@@PEAUmsg_t@@@Z(socket, net_from, net_message);
}

/*
==============
NET_TCPIPListen
==============
*/

bool __fastcall NET_TCPIPListen(unsigned __int64 socket)
{
  return ?NET_TCPIPListen@@YA_N_K@Z(socket);
}

/*
==============
Sys_ShowIP
==============
*/

void Sys_ShowIP(void)
{
  ?Sys_ShowIP@@YAXXZ();
}

/*
==============
Sys_SendTo
==============
*/

int __fastcall Sys_SendTo(const unsigned __int64 socket, const void *data, const int length, const netadr_t *to)
{
  return ?Sys_SendTo@@YAH_KPEBXHUnetadr_t@@@Z(socket, data, length, to);
}

/*
==============
NET_GetLocalAddress
==============
*/
void NET_GetLocalAddress(void)
{
  addrinfo *ai_next; 
  int v1; 
  unsigned int *v2; 
  addrinfo *results; 
  char name[256]; 

  if ( gethostname(name, 256) == -1 )
  {
    WSAGetLastError();
  }
  else if ( Sys_ResolveHostname(name, &results) )
  {
    Com_Printf(25, "Local hostname: %s\n", name);
    ai_next = results;
    v1 = 0;
    for ( numIP = 0; ai_next; results = ai_next )
    {
      if ( v1 >= 16 )
        break;
      Com_Printf(25, "Alias: %s\n", ai_next->ai_canonname);
      v2 = (unsigned int *)localIP[numIP];
      *v2 = *(_DWORD *)&results->ai_addr->sa_data[2];
      NET_InAddrPrint(v2);
      v1 = ++numIP;
      ai_next = results->ai_next;
    }
  }
  else
  {
    Com_PrintError(25, "Failed to resolve local hostname '%s': \n", name);
  }
}

/*
==============
NET_IPSocket
==============
*/
SOCKET NET_IPSocket(const char *net_interface, int srcPort)
{
  SOCKET v4; 
  SOCKET v5; 
  char *v6; 
  char *v8; 
  char *v9; 
  const char *v10; 
  u_long argp; 
  char optval[4]; 
  sockaddr sadr; 

  argp = 1;
  *(_DWORD *)optval = 1;
  if ( net_interface )
    Com_Printf(25, "Opening IP socket: %s:%i\n", net_interface, (unsigned int)srcPort);
  else
    Com_Printf(25, "Opening IP socket: localhost:%i\n", (unsigned int)srcPort);
  v4 = socket(2, 2, 17);
  v5 = v4;
  if ( v4 == -1i64 )
  {
    if ( WSAGetLastError() != 10047 )
    {
      v6 = NET_ErrorString();
      Com_PrintWarning(25, "WARNING: UDP_OpenSocket: socket: %s\n", v6);
    }
    return -1i64;
  }
  if ( ioctlsocket(v4, -2147195266, &argp) == -1 )
  {
    v8 = NET_ErrorString();
    Com_PrintWarning(25, "WARNING: UDP_OpenSocket: ioctl FIONBIO: %s\n", v8);
    return -1i64;
  }
  if ( setsockopt(v5, 0xFFFF, 32, optval, 4) == -1 )
  {
    v9 = NET_ErrorString();
    Com_PrintWarning(25, "WARNING: UDP_OpenSocket: setsockopt SO_BROADCAST: %s\n", v9);
    return -1i64;
  }
  if ( net_interface && *net_interface && I_stricmp(net_interface, "localhost") )
    Sys_StringToSockaddr(net_interface, &sadr);
  else
    *(_DWORD *)&sadr.sa_data[2] = 0;
  if ( srcPort == -1 )
    *(_WORD *)sadr.sa_data = 0;
  else
    *(_WORD *)sadr.sa_data = htons(srcPort);
  sadr.sa_family = 2;
  if ( bind(v5, &sadr, 16) != -1 )
    return v5;
  v10 = NET_ErrorString();
  Com_PrintWarning(25, "WARNING: UDP_OpenSocket: bind: %s\n", v10);
  closesocket(v5);
  return -1i64;
}

/*
==============
NET_InitPlatform
==============
*/
void NET_InitPlatform(void)
{
  unsigned int v0; 
  int v1; 
  int v2; 
  HSTRING_HEADER hstringHeader; 
  HSTRING string; 

  v0 = WSAStartup(0x202u, &winsockdata_0);
  if ( v0 )
  {
    Com_PrintWarning(25, "WARNING: Winsock initialization failed, returned %d\n", v0);
  }
  else
  {
    Com_Printf(25, "Winsock Initialized\n");
    v1 = WindowsCreateStringReference_0(L"PeerTraffic", 0xBu, &hstringHeader, &string);
    if ( v1 < 0 )
      __abi_WinRTraiseException(v1);
    if ( NET_LoadDeviceAssociationTemplate((Platform::String *)string) )
    {
      v2 = WindowsCreateStringReference_0(L"LocalTraffic", 0xCu, &hstringHeader, &string);
      if ( v2 < 0 )
        __abi_WinRTraiseException(v2);
      NET_LoadDeviceAssociationTemplate((Platform::String *)string);
    }
  }
}

/*
==============
NET_LoadDeviceAssociationTemplate
==============
*/
char NET_LoadDeviceAssociationTemplate(Platform::String *name)
{
  int ActivationFactoryByPCWSTR; 
  int v3; 
  __int64 v4; 
  __int64 v5; 
  Platform::Guid v7; 
  __int64 v8; 
  void *v9; 
  __int64 v10; 

  v7.__vftable = (Platform::Object_vtbl *)0x47E1697A46745A18i64;
  *(_QWORD *)&v7.__d = 0x8CDD0FDE71CC62BBui64;
  v9 = NULL;
  ActivationFactoryByPCWSTR = __winRT::__getActivationFactoryByPCWSTR(L"Windows.Xbox.Networking.SecureDeviceAssociationTemplate", &v7, &v9);
  if ( ActivationFactoryByPCWSTR < 0 )
    __abi_WinRTraiseException(ActivationFactoryByPCWSTR);
  v8 = 0i64;
  v3 = (*(__int64 (__fastcall **)(void *, Platform::String *, __int64 *))(*(_QWORD *)v9 + 48i64))(v9, name, &v8);
  if ( v3 < 0 )
    __abi_WinRTraiseException(v3);
  v4 = v8;
  v5 = v8;
  if ( v8 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8i64))(v8);
    v4 = v8;
  }
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16i64))(v4);
  v10 = 0i64;
  if ( v9 )
    (*(void (__fastcall **)(void *))(*(_QWORD *)v9 + 16i64))(v9);
  v10 = 0i64;
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16i64))(v5);
  return 1;
}

/*
==============
NET_RegisterDvarsPlatform
==============
*/
void NET_RegisterDvarsPlatform(void)
{
  ;
}

/*
==============
NET_Sleep
==============
*/

void __fastcall NET_Sleep(int msec)
{
  Sys_Sleep(msec);
}

/*
==============
NET_TCPIPAccept
==============
*/
SOCKET NET_TCPIPAccept(unsigned __int64 socket, bool *wouldBlock)
{
  SOCKET v3; 
  SOCKET result; 

  v3 = accept(socket, NULL, NULL);
  if ( v3 == -1i64 && WSAGetLastError() == 10035 )
  {
    *wouldBlock = 1;
    return -1i64;
  }
  else
  {
    result = v3;
    *wouldBlock = 0;
  }
  return result;
}

/*
==============
NET_TCPIPClose
==============
*/

int __stdcall NET_TCPIPClose(SOCKET s)
{
  return closesocket(s);
}

/*
==============
NET_TCPIPListen
==============
*/
bool NET_TCPIPListen(unsigned __int64 socket)
{
  return listen(socket, 0x7FFFFFFF) != -1;
}

/*
==============
NET_TCPIPRecvfrom
==============
*/
__int64 NET_TCPIPRecvfrom(unsigned __int64 socket, char *buf, int remaining, bool *wouldBlock)
{
  unsigned int v5; 
  __int64 result; 

  v5 = recvfrom(socket, buf, remaining, 0, NULL, NULL);
  if ( v5 == -1 && WSAGetLastError() == 10035 )
  {
    *wouldBlock = 1;
    return 0xFFFFFFFFi64;
  }
  else
  {
    result = v5;
    *wouldBlock = 0;
  }
  return result;
}

/*
==============
NET_TCPIPSend
==============
*/
__int64 NET_TCPIPSend(unsigned __int64 socket, const char *buf, int remaining, bool *wouldBlock)
{
  unsigned int v5; 
  __int64 result; 

  v5 = send(socket, buf, remaining, 0);
  if ( v5 == -1 && WSAGetLastError() == 10035 )
  {
    *wouldBlock = 1;
    return 0xFFFFFFFFi64;
  }
  else
  {
    result = v5;
    *wouldBlock = 0;
  }
  return result;
}

/*
==============
NET_TCPIPSocket
==============
*/
SOCKET NET_TCPIPSocket(const char *net_interface, __int64 dstPort, int type)
{
  unsigned int v4; 
  const char *v6; 
  Platform::String *v7; 
  HSTRING v8; 
  bool DeviceAssociationTemplate; 
  SOCKET v11; 
  SOCKET v12; 
  const char *v13; 
  const char *v14; 
  char *v15; 
  int v16; 
  const char *v17; 
  char *v18; 
  LPWSTR lpWideCharStr; 
  struct timeval timeout; 
  u_long argp; 
  __int64 v22; 
  sockaddr sadr; 
  fd_set writefds; 
  fd_set readfds; 
  wchar_t WideCharStr[128]; 

  v22 = -2i64;
  v4 = dstPort;
  argp = 1;
  v6 = j_va("ScriptDebuggerTraffic%i", dstPort);
  MultiByteToWideChar(0xFDE9u, 0, v6, -1, WideCharStr, 128);
  Platform::String::String(NULL, WideCharStr);
  v8 = (HSTRING)v7;
  timeout = (struct timeval)v7;
  DeviceAssociationTemplate = NET_LoadDeviceAssociationTemplate(v7);
  WindowsDeleteString_0(v8);
  if ( !DeviceAssociationTemplate )
  {
    if ( net_interface )
    {
      LODWORD(lpWideCharStr) = v4;
      Com_Printf(25, "WARNING: Failed to load SDA (%s) for IP socket: %s:%i\n", v6, net_interface, lpWideCharStr);
      return 0i64;
    }
    Com_Printf(25, "WARNING Failed to load SDA (%s) for IP socket: localhost:%i\n", v6, v4);
    return 0i64;
  }
  if ( net_interface )
    Com_Printf(25, "Opening IP socket: %s:%i\n", net_interface, v4);
  else
    Com_Printf(25, "Opening IP socket: localhost:%i\n", v4);
  v11 = socket(2, 1, 6);
  v12 = v11;
  if ( v11 != -1i64 )
  {
    if ( ioctlsocket(v11, -2147195266, &argp) == -1 )
    {
      v14 = NET_ErrorString();
      Com_PrintWarning(25, "WARNING: NET_TCPIPSocket: ioctl FIONBIO: %s\n", v14);
      return 0i64;
    }
    if ( net_interface && *net_interface && I_stricmp(net_interface, "localhost") )
      Sys_StringToSockaddr(net_interface, &sadr);
    else
      *(_DWORD *)&sadr.sa_data[2] = 0;
    if ( v4 == -1 )
      *(_WORD *)sadr.sa_data = 0;
    else
      *(_WORD *)sadr.sa_data = htons(v4);
    sadr.sa_family = 2;
    if ( type )
    {
      if ( type == 1 && connect(v12, &sadr, 16) == -1 )
      {
        if ( WSAGetLastError() != 10035 )
        {
          v15 = NET_ErrorString();
          Com_PrintWarning(25, "WARNING: NET_TCPIPSocket: connect: %s\n", v15);
LABEL_34:
          closesocket(v12);
          return 0i64;
        }
        readfds.fd_count = 1;
        readfds.fd_array[0] = v12;
        writefds.fd_count = 1;
        writefds.fd_array[0] = v12;
        timeout = (struct timeval)5i64;
        v16 = select(0, &readfds, &writefds, NULL, &timeout);
        if ( !v16 )
        {
          Com_Printf(25, "NET_Select: NET_Select: timeout\n");
LABEL_31:
          Com_PrintWarning(25, "WARNING: NET_TCPIPSocket: connect failed\n");
          closesocket(v12);
          return 0i64;
        }
        if ( v16 == -1 )
        {
          v17 = NET_ErrorString();
          Com_PrintWarning(25, "WARNING: NET_Select: connect: %s\n", v17);
          goto LABEL_31;
        }
      }
    }
    else if ( bind(v12, &sadr, 16) == -1 )
    {
      v18 = NET_ErrorString();
      Com_PrintWarning(25, "WARNING: NET_TCPIPSocket: bind: %s\n", v18);
      goto LABEL_34;
    }
    return v12;
  }
  if ( WSAGetLastError() == 10047 )
    return 0i64;
  v13 = NET_ErrorString();
  Com_PrintWarning(25, "WARNING: NET_TCPIPSocket: socket: %s\n", v13);
  return 0i64;
}

/*
==============
Sys_CloseSocket
==============
*/

int __stdcall Sys_CloseSocket(SOCKET s)
{
  return closesocket(s);
}

/*
==============
Sys_GetLocalIP
==============
*/
unsigned __int8 *Sys_GetLocalIP(int ipNumber)
{
  __int64 v1; 
  int v4; 

  v1 = ipNumber;
  if ( (unsigned int)ipNumber >= 0x10 )
  {
    v4 = 16;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_net.cpp", 88, ASSERT_TYPE_ASSERT, "(unsigned)( ipNumber ) < (unsigned)( 16 )", "ipNumber doesn't index MAX_IPS\n\t%i not in [0, %i)", ipNumber, v4) )
      __debugbreak();
  }
  return localIP[v1];
}

/*
==============
Sys_GetNumLocalIP
==============
*/
__int64 Sys_GetNumLocalIP()
{
  return (unsigned int)numIP;
}

/*
==============
Sys_RecvFrom
==============
*/
int Sys_RecvFrom(const unsigned __int64 socket, netadr_t *net_from, msg_t *net_message)
{
  int maxsize; 
  unsigned __int8 *data; 
  int result; 
  int v9; 
  int fromlen; 
  struct sockaddr from; 

  if ( !socket && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_net.cpp", 64, ASSERT_TYPE_ASSERT, "(socket)", (const char *)&queryFormat, "socket") )
    __debugbreak();
  if ( !net_from && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_net.cpp", 65, ASSERT_TYPE_ASSERT, "(net_from)", (const char *)&queryFormat, "net_from") )
    __debugbreak();
  if ( !net_message && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_net.cpp", 66, ASSERT_TYPE_ASSERT, "(net_message)", (const char *)&queryFormat, "net_message") )
    __debugbreak();
  maxsize = net_message->maxsize;
  data = net_message->data;
  fromlen = 16;
  result = recvfrom(socket, (char *)data, maxsize, 0, &from, &fromlen);
  v9 = result;
  if ( result != -1 )
  {
    SockadrToNetadr(&from, net_from);
    return v9;
  }
  return result;
}

/*
==============
Sys_SendTo
==============
*/
int Sys_SendTo(const unsigned __int64 socket, const void *data, const int length, const netadr_t *to)
{
  netadr_t a; 
  sockaddr s; 

  __asm { vmovups xmm0, xmmword ptr [r9] }
  a.addrHandleIndex = to->addrHandleIndex;
  __asm { vmovups xmmword ptr [rsp+78h+a.type], xmm0 }
  NetadrToSockadr(&a, &s);
  return sendto(socket, (const char *)data, length, 0, &s, 16);
}

/*
==============
Sys_ShowIP
==============
*/
void Sys_ShowIP(void)
{
  int i; 

  for ( i = 0; i < numIP; ++i )
    NET_InAddrPrint((const unsigned int *)localIP[i]);
}


/*
==============
DLog_GetDebugSocket
==============
*/

unsigned __int64 __fastcall DLog_GetDebugSocket()
{
  return ?DLog_GetDebugSocket@@YA_KXZ();
}

/*
==============
DLog_IsConnected
==============
*/

bool __fastcall DLog_IsConnected(unsigned __int64 s)
{
  return ?DLog_IsConnected@@YA_N_K@Z(s);
}

/*
==============
DLog_SocketFrame
==============
*/

void DLog_SocketFrame(void)
{
  ?DLog_SocketFrame@@YAXXZ();
}

/*
==============
DLog_GetDebugSocket
==============
*/
SOCKET DLog_GetDebugSocket()
{
  return s_dlogDebugSocket;
}

/*
==============
DLog_IsConnected
==============
*/
bool DLog_IsConnected(unsigned __int64 s)
{
  int v1; 
  bool result; 
  char buf; 

  result = 0;
  if ( s )
  {
    v1 = recv(s, &buf, 1, 2);
    if ( v1 )
    {
      if ( v1 >= 0 || WSAGetLastError() == 10035 )
        return 1;
    }
  }
  return result;
}

/*
==============
DLog_SocketFrame
==============
*/
void DLog_SocketFrame(void)
{
  int v0; 
  HSTRING v1; 
  int ActivationFactoryByPCWSTR; 
  int v3; 
  __int64 v4; 
  __int64 v5; 
  int v6; 
  SOCKET v7; 
  SOCKET v8; 
  int v9; 
  SOCKET v10; 
  int v11; 
  SOCKET v12; 
  const DLogSchema *Schema; 
  int v14; 
  SOCKET v15; 
  char buf[8]; 
  void *ppActivationFactory; 
  __int64 v18; 
  HSTRING v19[3]; 
  HSTRING_HEADER v20; 
  Platform::Guid pGuid; 
  u_long argp[2]; 

  v19[1] = (HSTRING)-2i64;
  if ( !s_secureDeviceAssociationInitialized )
  {
    v0 = WindowsCreateStringReference_0(L"DLogTraffic", 0xBu, &v20, v19);
    if ( v0 < 0 )
      __abi_WinRTraiseException(v0);
    v1 = v19[0];
    pGuid.__vftable = (Platform::Object_vtbl *)0x47E1697A46745A18i64;
    *(_DWORD *)&pGuid.__d = 1909220027;
    *(_DWORD *)&pGuid.__h = -1931669538;
    ppActivationFactory = NULL;
    ActivationFactoryByPCWSTR = __winRT::__getActivationFactoryByPCWSTR(L"Windows.Xbox.Networking.SecureDeviceAssociationTemplate", &pGuid, &ppActivationFactory);
    if ( ActivationFactoryByPCWSTR < 0 )
      __abi_WinRTraiseException(ActivationFactoryByPCWSTR);
    *(_QWORD *)argp = 0i64;
    v3 = (*(__int64 (__fastcall **)(void *, HSTRING, u_long *))(*(_QWORD *)ppActivationFactory + 48i64))(ppActivationFactory, v1, argp);
    if ( v3 < 0 )
      __abi_WinRTraiseException(v3);
    v4 = *(_QWORD *)argp;
    v5 = *(_QWORD *)argp;
    if ( *(_QWORD *)argp )
    {
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)argp + 8i64))(*(_QWORD *)argp);
      v4 = *(_QWORD *)argp;
    }
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16i64))(v4);
    v18 = 0i64;
    if ( ppActivationFactory )
      (*(void (__fastcall **)(void *))(*(_QWORD *)ppActivationFactory + 16i64))(ppActivationFactory);
    v18 = 0i64;
    if ( v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16i64))(v5);
    s_secureDeviceAssociationInitialized = 1;
  }
  if ( s_dlogDebugSocket )
  {
    v6 = recv(s_dlogDebugSocket, buf, 1, 2);
    if ( !v6 || v6 < 0 && WSAGetLastError() != 10035 )
    {
      closesocket(s_dlogDebugSocket);
      s_dlogDebugSocket = 0i64;
      DLog_PrintInfo("Debug Socket Disconnected!\n");
    }
  }
  v7 = s_dlogDebugListenSocket;
  if ( s_dlogDebugListenSocket )
    goto LABEL_29;
  v8 = socket(2, (int)s_dlogDebugListenSocket + 1, 0);
  if ( v8 == -1i64 )
  {
LABEL_26:
    s_dlogDebugListenSocket = 0i64;
    return;
  }
  LOWORD(pGuid.__vftable) = 2;
  HIDWORD(pGuid.__vftable) = 0;
  WORD1(pGuid.__vftable) = htons(0x9859u);
  v9 = bind(v8, (const struct sockaddr *)&pGuid, 16);
  v10 = v8;
  if ( v9 < 0 || (LODWORD(ppActivationFactory) = 1, v11 = ioctlsocket(v8, -2147195266, (u_long *)&ppActivationFactory), v10 = v8, v11 < 0) )
  {
LABEL_25:
    closesocket(v10);
    goto LABEL_26;
  }
  if ( listen(v8, 1) < 0 )
  {
    v10 = v8;
    goto LABEL_25;
  }
  s_dlogDebugListenSocket = v8;
  if ( v8 )
  {
    DLog_PrintInfo("Debug Socket Listening :%d\n", 39001i64);
    v7 = s_dlogDebugListenSocket;
    if ( s_dlogDebugListenSocket )
    {
LABEL_29:
      if ( !s_dlogDebugSocket )
      {
        LODWORD(ppActivationFactory) = 16;
        v12 = accept(v7, (struct sockaddr *)&pGuid, (int *)&ppActivationFactory);
        if ( v12 == -1i64 )
          v12 = 0i64;
        argp[0] = 1;
        if ( ioctlsocket(v12, -2147195266, argp) < 0 )
        {
          closesocket(v12);
          v12 = 0i64;
        }
        s_dlogDebugSocket = v12;
        if ( v12 )
        {
          DLog_PrintInfo("Debug Socket Connected\n");
          *(_QWORD *)argp = 0i64;
          Schema = DLog_GetSchema();
          if ( Schema )
            DLog_strcpy((char *)argp, 8ui64, Schema->project);
          v14 = send(s_dlogDebugSocket, (const char *)argp, 8, 0);
          v15 = s_dlogDebugSocket;
          if ( v14 <= 0 )
            v15 = 0i64;
          s_dlogDebugSocket = v15;
        }
      }
    }
  }
}


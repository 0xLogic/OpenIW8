/*
==============
SvClient::GetClientMemorySizeCommon<SvClientMP>
==============
*/

unsigned int __fastcall SvClient::GetClientMemorySizeCommon<SvClientMP>(unsigned int clientCount)
{
  return ??$GetClientMemorySizeCommon@VSvClientMP@@@SvClient@@KAII@Z(clientCount);
}

/*
==============
SvClient::GetCommonClient
==============
*/

SvClient *__fastcall SvClient::GetCommonClient(unsigned int clientNum)
{
  return ?GetCommonClient@SvClient@@SAPEAV1@I@Z(clientNum);
}

/*
==============
SvClient::~SvClient
==============
*/

void __fastcall SvClient::~SvClient(SvClient *this)
{
  ??1SvClient@@UEAA@XZ(this);
}

/*
==============
SvClient::GetClientMemorySizeCommon<SvClientSP>
==============
*/

unsigned int __fastcall SvClient::GetClientMemorySizeCommon<SvClientSP>(unsigned int clientCount)
{
  return ??$GetClientMemorySizeCommon@VSvClientSP@@@SvClient@@KAII@Z(clientCount);
}

/*
==============
SvClient::ClearClientMemoryCommon<SvClientSP>
==============
*/

void __fastcall SvClient::ClearClientMemoryCommon<SvClientSP>(SvClientSP *client)
{
  ??$ClearClientMemoryCommon@VSvClientSP@@@SvClient@@KAXPEAVSvClientSP@@@Z(client);
}

/*
==============
SV_Game_SendServerCommand
==============
*/

void __fastcall SV_Game_SendServerCommand(const int clientNum, svscmd_type type, const char *text)
{
  ?SV_Game_SendServerCommand@@YAXHW4svscmd_type@@PEBD@Z(clientNum, type, text);
}

/*
==============
SvClient::FreeClientsMemoryCommon<SvClientSP>
==============
*/

__int64 SvClient::FreeClientsMemoryCommon<SvClientSP>()
{
  return ??$FreeClientsMemoryCommon@VSvClientSP@@@SvClient@@KAXXZ();
}

/*
==============
SvClient::AllocateClientsMemoryCommon<SvClientMP>
==============
*/

void __fastcall SvClient::AllocateClientsMemoryCommon<SvClientMP>(unsigned int clientCount, HunkUser *hunkUser)
{
  ??$AllocateClientsMemoryCommon@VSvClientMP@@@SvClient@@KAXIPEAUHunkUser@@@Z(clientCount, hunkUser);
}

/*
==============
SvClient::AllocateClientsMemoryCommon<SvClientSP>
==============
*/

void __fastcall SvClient::AllocateClientsMemoryCommon<SvClientSP>(unsigned int clientCount, HunkUser *hunkUser)
{
  ??$AllocateClientsMemoryCommon@VSvClientSP@@@SvClient@@KAXIPEAUHunkUser@@@Z(clientCount, hunkUser);
}

/*
==============
SvClient::FreeClientsMemoryCommon<SvClientMP>
==============
*/

__int64 SvClient::FreeClientsMemoryCommon<SvClientMP>()
{
  return ??$FreeClientsMemoryCommon@VSvClientMP@@@SvClient@@KAXXZ();
}

/*
==============
SvClient::ClearClientMemoryCommon<SvClientMP>
==============
*/

void __fastcall SvClient::ClearClientMemoryCommon<SvClientMP>(SvClientMP *client)
{
  ??$ClearClientMemoryCommon@VSvClientMP@@@SvClient@@KAXPEAVSvClientMP@@@Z(client);
}

/*
==============
SvClient::GetCommonClient
==============
*/
SvClient *SvClient::GetCommonClient(unsigned int clientNum)
{
  __int64 v1; 
  __int64 v3; 
  unsigned int v4; 

  v1 = clientNum;
  if ( !(_BYTE)SvClient::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_client.h", 99, ASSERT_TYPE_ASSERT, "( ms_allocatedType != GameModeType::NONE )", (const char *)&queryFormat, "ms_allocatedType != GameModeType::NONE") )
    __debugbreak();
  if ( (unsigned int)v1 >= SvClient::ms_clientCount )
  {
    v4 = SvClient::ms_clientCount;
    LODWORD(v3) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_client.h", 100, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( ms_clientCount )", "clientNum doesn't index ms_clientCount\n\t%i not in [0, %i)", v3, v4) )
      __debugbreak();
  }
  return SvClient::ms_clients[v1];
}

/*
==============
SV_Game_SendServerCommand
==============
*/
void SV_Game_SendServerCommand(const int clientNum, svscmd_type type, const char *text)
{
  SvClient *CommonClient; 

  if ( clientNum == -1 )
  {
    SV_Game_BroadcastServerCommand(type, text);
  }
  else
  {
    CommonClient = SvClient::GetCommonClient(clientNum);
    CommonClient->SendServerCommand(CommonClient, type, text);
  }
}

/*
==============
SvClient::ClearClientMemoryCommon<SvClientMP>
==============
*/
void SvClient::ClearClientMemoryCommon<SvClientMP>(SvClientMP *client)
{
  if ( !client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_client.h", 205, ASSERT_TYPE_ASSERT, "( client )", (const char *)&queryFormat, "client") )
    __debugbreak();
  ((void (__fastcall *)(SvClientMP *, _QWORD))client->~SvClient)(client, 0i64);
  memset_0(client, 0, sizeof(SvClientMP));
  SvClientMP::SvClientMP(client);
}

/*
==============
SvClient::~SvClient
==============
*/
void SvClient::~SvClient(SvClient *this)
{
  this->__vftable = (SvClient_vtbl *)&SvClient::`vftable';
}

/*
==============
SvClient::AllocateClientsMemoryCommon<SvClientMP>
==============
*/
void SvClient::AllocateClientsMemoryCommon<SvClientMP>(unsigned int clientCount, HunkUser *hunkUser)
{
  __int64 v3; 
  SvClientMP *v4; 
  SvClient **v5; 
  __int64 v6; 
  SvClient *v7; 

  v3 = clientCount;
  if ( (_BYTE)SvClient::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_client.h", 147, ASSERT_TYPE_ASSERT, "( ms_allocatedType == GameModeType::NONE )", (const char *)&queryFormat, "ms_allocatedType == GameModeType::NONE") )
    __debugbreak();
  if ( SvClient::ms_clientCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_client.h", 148, ASSERT_TYPE_ASSERT, "( ms_clientCount == 0 )", (const char *)&queryFormat, "ms_clientCount == 0") )
    __debugbreak();
  v4 = (SvClientMP *)Mem_HunkUser_AllocInternal(hunkUser, (unsigned int)(379488 * v3), 0x80ui64, "SvClient::AllocateClientsMemoryCommon");
  if ( (_DWORD)v3 )
  {
    v5 = SvClient::ms_clients;
    v6 = v3;
    do
    {
      if ( *v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_client.h", 159, ASSERT_TYPE_ASSERT, "( !ms_clients[clientIndex] )", (const char *)&queryFormat, "!ms_clients[clientIndex]") )
        __debugbreak();
      SvClientMP::SvClientMP(v4);
      *v5 = v7;
      ++v4;
      ++v5;
      --v6;
    }
    while ( v6 );
  }
  LOBYTE(SvClient::ms_allocatedType) = 2;
  SvClient::ms_clientCount = v3;
}

/*
==============
SvClient::FreeClientsMemoryCommon<SvClientMP>
==============
*/
void SvClient::FreeClientsMemoryCommon<SvClientMP>()
{
  char v0; 
  SvClient **v1; 
  signed int v2; 
  void **v3; 
  __int64 v4; 

  v0 = SvClient::ms_allocatedType;
  v1 = SvClient::ms_clients;
  if ( !(_BYTE)SvClient::ms_allocatedType )
    goto LABEL_6;
  if ( (_BYTE)SvClient::ms_allocatedType != HALF_HALF )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_client.h", 171, ASSERT_TYPE_ASSERT, "( ms_allocatedType == GameModeType::NONE || ms_allocatedType == SubClientType::ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == GameModeType::NONE || ms_allocatedType == SubClientType::ALLOCATION_TYPE") )
      __debugbreak();
    v0 = SvClient::ms_allocatedType;
LABEL_6:
    if ( v0 != 2 )
      goto LABEL_13;
  }
  if ( !SvClient::ms_clientCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_client.h", 175, ASSERT_TYPE_ASSERT, "(ms_clientCount > 0)", "%s\n\tFreeClientsMemoryCommon: Trying to free clients but no client has been allocated\n", "ms_clientCount > 0") )
    __debugbreak();
  v2 = SvClient::ms_clientCount - 1;
  if ( (int)(SvClient::ms_clientCount - 1) >= 0 )
  {
    v3 = (void **)&SvClient::ms_clients[v2];
    do
    {
      (**(void (__fastcall ***)(void *, _QWORD))*v3)(*v3, 0i64);
      DebugWipe(*v3, 0x5CA60ui64);
      --v2;
      *v3-- = NULL;
    }
    while ( v2 >= 0 );
  }
LABEL_13:
  SvClient::ms_clientCount = 0;
  LOBYTE(SvClient::ms_allocatedType) = 0;
  v4 = 200i64;
  do
  {
    if ( *v1 )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_client.h", 196, ASSERT_TYPE_ASSERT, "( !ms_clients[clientIndex] )", (const char *)&queryFormat, "!ms_clients[clientIndex]") )
        __debugbreak();
    }
    ++v1;
    --v4;
  }
  while ( v4 );
}

/*
==============
SvClient::GetClientMemorySizeCommon<SvClientMP>
==============
*/
__int64 SvClient::GetClientMemorySizeCommon<SvClientMP>(unsigned int clientCount)
{
  return 379488 * clientCount;
}

/*
==============
SvClient::ClearClientMemoryCommon<SvClientSP>
==============
*/
void SvClient::ClearClientMemoryCommon<SvClientSP>(SvClientSP *client)
{
  if ( !client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_client.h", 205, ASSERT_TYPE_ASSERT, "( client )", (const char *)&queryFormat, "client") )
    __debugbreak();
  ((void (__fastcall *)(SvClientSP *, _QWORD))client->~SvClient)(client, 0i64);
  memset_0(&client->state + 1, 0, 0xDB27ui64);
  client->state = CS_FREE;
  client->__vftable = (SvClientSP_vtbl *)&SvClientSP::`vftable';
}

/*
==============
SvClient::AllocateClientsMemoryCommon<SvClientSP>
==============
*/
void SvClient::AllocateClientsMemoryCommon<SvClientSP>(unsigned int clientCount, HunkUser *hunkUser)
{
  __int64 v3; 
  SvClient *v4; 
  __int64 v5; 
  SvClient **v6; 

  v3 = clientCount;
  if ( (_BYTE)SvClient::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_client.h", 147, ASSERT_TYPE_ASSERT, "( ms_allocatedType == GameModeType::NONE )", (const char *)&queryFormat, "ms_allocatedType == GameModeType::NONE") )
    __debugbreak();
  if ( SvClient::ms_clientCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_client.h", 148, ASSERT_TYPE_ASSERT, "( ms_clientCount == 0 )", (const char *)&queryFormat, "ms_clientCount == 0") )
    __debugbreak();
  v4 = (SvClient *)Mem_HunkUser_AllocInternal(hunkUser, (unsigned int)(56112 * v3), 0x80ui64, "SvClient::AllocateClientsMemoryCommon");
  if ( (_DWORD)v3 )
  {
    v5 = v3;
    v6 = SvClient::ms_clients;
    do
    {
      if ( *v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_client.h", 159, ASSERT_TYPE_ASSERT, "( !ms_clients[clientIndex] )", (const char *)&queryFormat, "!ms_clients[clientIndex]") )
        __debugbreak();
      v4->state = CS_FREE;
      v4->__vftable = (SvClient_vtbl *)&SvClientSP::`vftable';
      *v6 = v4;
      v4 = (SvClient *)((char *)v4 + 56112);
      ++v6;
      --v5;
    }
    while ( v5 );
  }
  LOBYTE(SvClient::ms_allocatedType) = 1;
  SvClient::ms_clientCount = v3;
}

/*
==============
SvClient::FreeClientsMemoryCommon<SvClientSP>
==============
*/
void SvClient::FreeClientsMemoryCommon<SvClientSP>()
{
  char v0; 
  SvClient **v1; 
  signed int v2; 
  void **v3; 
  __int64 v4; 

  v0 = SvClient::ms_allocatedType;
  v1 = SvClient::ms_clients;
  if ( !(_BYTE)SvClient::ms_allocatedType )
    goto LABEL_6;
  if ( (_BYTE)SvClient::ms_allocatedType != HALF )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_client.h", 171, ASSERT_TYPE_ASSERT, "( ms_allocatedType == GameModeType::NONE || ms_allocatedType == SubClientType::ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == GameModeType::NONE || ms_allocatedType == SubClientType::ALLOCATION_TYPE") )
      __debugbreak();
    v0 = SvClient::ms_allocatedType;
LABEL_6:
    if ( v0 != 1 )
      goto LABEL_13;
  }
  if ( !SvClient::ms_clientCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_client.h", 175, ASSERT_TYPE_ASSERT, "(ms_clientCount > 0)", "%s\n\tFreeClientsMemoryCommon: Trying to free clients but no client has been allocated\n", "ms_clientCount > 0") )
    __debugbreak();
  v2 = SvClient::ms_clientCount - 1;
  if ( (int)(SvClient::ms_clientCount - 1) >= 0 )
  {
    v3 = (void **)&SvClient::ms_clients[v2];
    do
    {
      (**(void (__fastcall ***)(void *, _QWORD))*v3)(*v3, 0i64);
      DebugWipe(*v3, 0xDB30ui64);
      --v2;
      *v3-- = NULL;
    }
    while ( v2 >= 0 );
  }
LABEL_13:
  SvClient::ms_clientCount = 0;
  LOBYTE(SvClient::ms_allocatedType) = 0;
  v4 = 200i64;
  do
  {
    if ( *v1 )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_client.h", 196, ASSERT_TYPE_ASSERT, "( !ms_clients[clientIndex] )", (const char *)&queryFormat, "!ms_clients[clientIndex]") )
        __debugbreak();
    }
    ++v1;
    --v4;
  }
  while ( v4 );
}

/*
==============
SvClient::GetClientMemorySizeCommon<SvClientSP>
==============
*/
__int64 SvClient::GetClientMemorySizeCommon<SvClientSP>(unsigned int clientCount)
{
  return 56112 * clientCount;
}


/*
==============
CL_PlayerInfosMP_AllocatePlayerInfos
==============
*/

void __fastcall CL_PlayerInfosMP_AllocatePlayerInfos(HunkUser *hunkUser, const int maxClients)
{
  ?CL_PlayerInfosMP_AllocatePlayerInfos@@YAXPEAUHunkUser@@H@Z(hunkUser, maxClients);
}

/*
==============
CL_PlayerInfosMP_FreePlayerInfoMemory
==============
*/

void CL_PlayerInfosMP_FreePlayerInfoMemory(void)
{
  ?CL_PlayerInfosMP_FreePlayerInfoMemory@@YAXXZ();
}

/*
==============
CL_PlayerInfosMP_GetPlayerInfo
==============
*/

BG_SynchronizedPlayerInfo *__fastcall CL_PlayerInfosMP_GetPlayerInfo(const int clientNum)
{
  return ?CL_PlayerInfosMP_GetPlayerInfo@@YAPEAUBG_SynchronizedPlayerInfo@@H@Z(clientNum);
}

/*
==============
CL_PlayerInfosMP_ResetPlayerInfo
==============
*/

void __fastcall CL_PlayerInfosMP_ResetPlayerInfo(const int clientNum)
{
  ?CL_PlayerInfosMP_ResetPlayerInfo@@YAXH@Z(clientNum);
}

/*
==============
CL_PlayerInfosMP_SetPlayerInfo
==============
*/

void __fastcall CL_PlayerInfosMP_SetPlayerInfo(const int clientNum, const BG_SynchronizedPlayerInfo *incomingPlayerInfo)
{
  ?CL_PlayerInfosMP_SetPlayerInfo@@YAXHAEBUBG_SynchronizedPlayerInfo@@@Z(clientNum, incomingPlayerInfo);
}

/*
==============
CL_PlayerInfosMP_AllocatePlayerInfos
==============
*/
void CL_PlayerInfosMP_AllocatePlayerInfos(HunkUser *hunkUser, const int maxClients)
{
  __int64 v2; 
  bool v4; 
  BG_SynchronizedPlayerInfo **v5; 
  BG_SynchronizedPlayerInfo *v6; 

  v2 = (unsigned int)maxClients;
  if ( maxClients < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_playerinfos_mp.cpp", 20, ASSERT_TYPE_ASSERT, "(0 <= maxClients)", (const char *)&queryFormat, "0 <= maxClients") )
    __debugbreak();
  v4 = (unsigned int)v2 <= 0xC8;
  if ( (int)v2 > 200 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_playerinfos_mp.cpp", 21, ASSERT_TYPE_ASSERT, "(maxClients <= 200)", (const char *)&queryFormat, "maxClients <= MAX_CLIENTS_MP") )
      __debugbreak();
    v4 = (unsigned int)v2 <= 0xC8;
  }
  if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_playerinfos_mp.cpp", 22, ASSERT_TYPE_ASSERT, "(maxClients <= ( sizeof( *array_counter( s_playerInfos ) ) + 0 ))", (const char *)&queryFormat, "maxClients <= ARRAY_COUNT( s_playerInfos )") )
    __debugbreak();
  if ( (int)v2 > 0 )
  {
    v5 = s_playerInfos;
    do
    {
      v6 = (BG_SynchronizedPlayerInfo *)Mem_HunkUser_AllocInternal(hunkUser, 0x80ui64, 8ui64, "CL_PlayerInfosMP_AllocatePlayerInfos");
      *v5 = v6;
      if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_playerinfos_mp.cpp", 43, ASSERT_TYPE_ASSERT, "(s_playerInfos[clientNum] != nullptr)", (const char *)&queryFormat, "s_playerInfos[clientNum] != nullptr") )
        __debugbreak();
      BG_SynchronizedPlayerInfo_Reset(*v5++);
      --v2;
    }
    while ( v2 );
  }
}

/*
==============
CL_PlayerInfosMP_FreePlayerInfoMemory
==============
*/
void CL_PlayerInfosMP_FreePlayerInfoMemory(void)
{
  BG_SynchronizedPlayerInfo **v0; 
  __int64 v1; 

  v0 = s_playerInfos;
  v1 = 25i64;
  do
  {
    *v0 = NULL;
    v0[1] = NULL;
    v0[2] = NULL;
    v0 += 8;
    *(v0 - 5) = NULL;
    *(v0 - 4) = NULL;
    *(v0 - 3) = NULL;
    *(v0 - 2) = NULL;
    *(v0 - 1) = NULL;
    --v1;
  }
  while ( v1 );
}

/*
==============
CL_PlayerInfosMP_GetPlayerInfo
==============
*/
BG_SynchronizedPlayerInfo *CL_PlayerInfosMP_GetPlayerInfo(const int clientNum)
{
  __int64 v1; 
  bool v2; 
  BG_SynchronizedPlayerInfo **v3; 
  int maxClients; 

  v1 = clientNum;
  if ( (unsigned int)clientNum >= cls.maxClients )
  {
    maxClients = cls.maxClients;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_playerinfos_mp.cpp", 62, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( cls.maxClients )", "clientNum doesn't index cls.maxClients\n\t%i not in [0, %i)", clientNum, maxClients) )
      __debugbreak();
  }
  v2 = s_playerInfos[v1] == NULL;
  v3 = &s_playerInfos[v1];
  if ( v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_playerinfos_mp.cpp", 63, ASSERT_TYPE_ASSERT, "(s_playerInfos[clientNum] != nullptr)", (const char *)&queryFormat, "s_playerInfos[clientNum] != nullptr") )
    __debugbreak();
  return *v3;
}

/*
==============
CL_PlayerInfosMP_ResetPlayerInfo
==============
*/
void CL_PlayerInfosMP_ResetPlayerInfo(const int clientNum)
{
  BG_SynchronizedPlayerInfo **v1; 

  v1 = &s_playerInfos[clientNum];
  if ( !*v1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_playerinfos_mp.cpp", 43, ASSERT_TYPE_ASSERT, "(s_playerInfos[clientNum] != nullptr)", (const char *)&queryFormat, "s_playerInfos[clientNum] != nullptr") )
    __debugbreak();
  BG_SynchronizedPlayerInfo_Reset(*v1);
}

/*
==============
CL_PlayerInfosMP_SetPlayerInfo
==============
*/
void CL_PlayerInfosMP_SetPlayerInfo(const int clientNum, const BG_SynchronizedPlayerInfo *incomingPlayerInfo)
{
  __int64 v3; 
  XNADDR **v4; 
  XNADDR *v5; 

  v3 = clientNum;
  if ( (unsigned int)clientNum >= cls.maxClients && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_playerinfos_mp.cpp", 50, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( cls.maxClients )", "clientNum doesn't index cls.maxClients\n\t%i not in [0, %i)", clientNum, cls.maxClients) )
    __debugbreak();
  v4 = (XNADDR **)&s_playerInfos[v3];
  if ( !*v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_playerinfos_mp.cpp", 51, ASSERT_TYPE_ASSERT, "(s_playerInfos[clientNum] != nullptr)", (const char *)&queryFormat, "s_playerInfos[clientNum] != nullptr") )
    __debugbreak();
  Com_Printf(14, "%s - Setting player info for client %d\n", "CL_PlayerInfosMP_SetPlayerInfo", (unsigned int)v3);
  BG_SynchronizedPlayerInfo_Print(14, incomingPlayerInfo);
  v5 = *v4;
  XNADDR::operator=(*v4, &incomingPlayerInfo->xnaddr);
  *(bdSecurityID *)v5[1].addrBuff = incomingPlayerInfo->partyId;
  XUID::operator=((XUID *)&v5[1].addrBuff[12], &incomingPlayerInfo->xuid);
  *(_QWORD *)&v5[1].addrBuff[20] = incomingPlayerInfo->platformId;
  *(_DWORD *)&v5[1].addrBuff[28] = incomingPlayerInfo->natType;
  *(_DWORD *)&v5[1].addrBuff[32] = incomingPlayerInfo->localNetId;
  v5[1].addrBuff[36] = incomingPlayerInfo->clientPlatform[0];
  v5[1].addrBuff[37] = incomingPlayerInfo->isGuestAccount;
  v5[1].addrBuff[38] = incomingPlayerInfo->isHeadless;
  v5[1].addrBuff[39] = incomingPlayerInfo->shouldPauseGame;
  v5[1].addrBuff[40] = incomingPlayerInfo->pauseStatusChanged;
}


/*
==============
OnlineDevMap::Starting
==============
*/

void __fastcall OnlineDevMap::Starting(OnlineDevMap *this)
{
  ?Starting@OnlineDevMap@@AEAAXXZ(this);
}

/*
==============
OnlineDevMap::StartGame
==============
*/

void __fastcall OnlineDevMap::StartGame(OnlineDevMap *this)
{
  ?StartGame@OnlineDevMap@@AEAAXXZ(this);
}

/*
==============
OnlineDevMap::InGame
==============
*/

void __fastcall OnlineDevMap::InGame(OnlineDevMap *this)
{
  ?InGame@OnlineDevMap@@AEAAXXZ(this);
}

/*
==============
OnlineDevMap::WaitingForDemonware
==============
*/

void __fastcall OnlineDevMap::WaitingForDemonware(OnlineDevMap *this)
{
  ?WaitingForDemonware@OnlineDevMap@@AEAAXXZ(this);
}

/*
==============
OnlineDevMap::WaitingForMatchmaking
==============
*/

void __fastcall OnlineDevMap::WaitingForMatchmaking(OnlineDevMap *this)
{
  ?WaitingForMatchmaking@OnlineDevMap@@AEAAXXZ(this);
}

/*
==============
OnlineAutoTest::MatchmakingSucceeded
==============
*/

void OnlineAutoTest::MatchmakingSucceeded(void)
{
  ?MatchmakingSucceeded@OnlineAutoTest@@SAXXZ();
}

/*
==============
OnlineDevMap::StartMatchmaking
==============
*/

void __fastcall OnlineDevMap::StartMatchmaking(OnlineDevMap *this, const int controllerIndex)
{
  ?StartMatchmaking@OnlineDevMap@@AEAAXH@Z(this, controllerIndex);
}

/*
==============
OnlineAutoTest::ServerAcquiredSucceeded
==============
*/

void OnlineAutoTest::ServerAcquiredSucceeded(void)
{
  ?ServerAcquiredSucceeded@OnlineAutoTest@@SAXXZ();
}

/*
==============
OnlineDevMap::Pump
==============
*/

void __fastcall OnlineDevMap::Pump(OnlineDevMap *this)
{
  ?Pump@OnlineDevMap@@QEAAXXZ(this);
}

/*
==============
OnlineAutoTest::InGameSucceeded
==============
*/

void OnlineAutoTest::InGameSucceeded(void)
{
  ?InGameSucceeded@OnlineAutoTest@@SAXXZ();
}

/*
==============
OnlineDevMap::Init
==============
*/

bool __fastcall OnlineDevMap::Init(OnlineDevMap *this, const char *map, const unsigned int character_class)
{
  return ?Init@OnlineDevMap@@QEAA_NPEBDI@Z(this, map, character_class);
}

/*
==============
OnlineAutoTest::OnlineSucceeded
==============
*/

void OnlineAutoTest::OnlineSucceeded(void)
{
  ?OnlineSucceeded@OnlineAutoTest@@SAXXZ();
}

/*
==============
OnlineDevMap::InGame
==============
*/
void OnlineDevMap::InGame(OnlineDevMap *this)
{
  ;
}

/*
==============
OnlineAutoTest::InGameSucceeded
==============
*/
void OnlineAutoTest::InGameSucceeded(void)
{
  const PartyData *PartyData; 
  int IsServerDedicated; 
  const char *v2; 
  const dvar_t *v3; 

  if ( OnlineDevMap::ms_instance.m_state <= Idle )
  {
    if ( !Com_FrontEnd_IsInFrontEnd() )
    {
      v3 = DVARBOOL_ATClient_Enabled;
      if ( !DVARBOOL_ATClient_Enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ATClient_Enabled") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v3);
      if ( v3->current.enabled )
        Compass_Print("Ready for Compass\n");
    }
  }
  else
  {
    OnlineDevMap::ms_instance.m_state = 5;
    PartyData = Lobby_GetPartyData();
    IsServerDedicated = Party_IsServerDedicated(PartyData);
    v2 = "OnlineAutoTest:: Map load success. Server is dedicated.\n";
    if ( !IsServerDedicated )
      v2 = "OnlineAutoTest:: Map load success. Server is listen.\n";
    Sys_Print(v2);
    Compass_Print("Ready for Compass\n");
  }
}

/*
==============
OnlineDevMap::Init
==============
*/
char OnlineDevMap::Init(OnlineDevMap *this, const char *map, const unsigned int character_class)
{
  __int64 v3; 
  unsigned __int64 v5; 
  size_t v8; 

  v3 = -1i64;
  v5 = -1i64;
  do
    ++v5;
  while ( map[v5] );
  v8 = 63i64;
  if ( v5 < 0x3F )
    v8 = v5;
  memcpy_0(this->m_mapName, map, v8);
  while ( map[++v3] != 0 )
    ;
  this->m_mapName[v3] = 0;
  this->m_state = ReadyToFlush;
  this->m_characterClass = character_class;
  Dvar_SetInt_Internal(DVARINT_playlist, 0);
  return 1;
}

/*
==============
OnlineAutoTest::MatchmakingSucceeded
==============
*/
void OnlineAutoTest::MatchmakingSucceeded(void)
{
  Sys_Print("OnlineAutoTest::MatchmakingSucceeded");
}

/*
==============
OnlineAutoTest::OnlineSucceeded
==============
*/
void OnlineAutoTest::OnlineSucceeded(void)
{
  Sys_Print("OnlineAutoTest::OnlineSucceeded - online sync complete");
}

/*
==============
OnlineDevMap::Pump
==============
*/
void OnlineDevMap::Pump(OnlineDevMap *this)
{
  __int64 v2; 
  __int64 v3; 
  int v4; 
  LocalClientNum_t i; 
  int j; 
  bool v7; 
  bool HaveStats; 
  bool IsUserSignedInToLive; 
  bool IsSignedIn; 
  bool IsUserSignedInToDemonware; 
  DWServicesAccess *Instance; 
  const PartyData *PartyData; 
  const dvar_t *v14; 
  char *m_mapName; 
  __int64 v16; 
  __int64 integer64; 
  char *v18; 
  __int64 v19; 
  char v20; 
  __int64 v21; 
  char v22; 

  switch ( this->m_state )
  {
    case 1:
      v2 = 8i64 * tls_index;
      v3 = *(_QWORD *)((char *)NtCurrentTeb()->Reserved1[11] + v2);
      v4 = *(_DWORD *)(v3 + 1052);
      *(_DWORD *)(v3 + 1052) = -4609;
      Dvar_SetBool_Internal(DVARBOOL_onlinegame, 1);
      *(_DWORD *)(*(_QWORD *)((char *)NtCurrentTeb()->Reserved1[11] + v2) + 1052i64) = v4;
      for ( i = LOCAL_CLIENT_0; i < SLODWORD(cl_maxLocalClients); ++i )
      {
        if ( CL_IsLocalClientActive(i) )
          LiveStorage_EndGame(i);
      }
      this->m_state = Flushing;
      break;
    case 2:
      if ( NET_IsStarted() )
      {
        for ( j = 0; j < 8; ++j )
        {
          v7 = Live_SyncOnlineDataFrame(j) != 0;
          HaveStats = LiveStorage_DoWeHaveStats(j);
          IsUserSignedInToLive = Live_IsUserSignedInToLive(j);
          IsSignedIn = Live_IsSignedIn(j);
          IsUserSignedInToDemonware = Live_IsUserSignedInToDemonware(j);
          Instance = DWServicesAccess::GetInstance();
          if ( DWServicesAccess::isReady(Instance, j) && IsUserSignedInToLive && IsSignedIn && IsUserSignedInToDemonware && !v7 && HaveStats )
            OnlineDevMap::StartMatchmaking(this, j);
        }
      }
      break;
    case 3:
      PartyData = Lobby_GetPartyData();
      if ( Party_IsServerDedicated(PartyData) )
      {
        Sys_Print("OnlineAutoTest::Dedicated Server Acquired.\n");
        this->m_state = 4;
      }
      break;
    case 4:
      Dvar_SetString_Internal(DVARSTR_ui_mapname, this->m_mapName);
      Dvar_SetBool_Internal(DVARBOOL_party_startHosting, 1);
      this->m_state = 6;
      if ( CL_IsLocalClientActive(LOCAL_CLIENT_1) )
        CL_SetLocalClientActive(LOCAL_CLIENT_1, 0);
      break;
    case 6:
      v14 = DVARSTR_ui_mapname;
      if ( !DVARSTR_ui_mapname && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 748, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "ui_mapname") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v14);
      m_mapName = this->m_mapName;
      v16 = 0x7FFFFFFFi64;
      integer64 = v14->current.integer64;
      v18 = m_mapName;
      if ( !integer64 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
        __debugbreak();
      if ( !m_mapName && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 182, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
        __debugbreak();
      v19 = integer64 - (_QWORD)m_mapName;
      while ( 1 )
      {
        v20 = v18[v19];
        v21 = v16;
        v22 = *v18++;
        --v16;
        if ( !v21 )
          break;
        if ( v20 != v22 )
        {
          Dvar_SetString_Internal(DVARSTR_ui_mapname, m_mapName);
          return;
        }
        if ( !v20 )
          return;
      }
      break;
    default:
      return;
  }
}

/*
==============
OnlineAutoTest::ServerAcquiredSucceeded
==============
*/
void OnlineAutoTest::ServerAcquiredSucceeded(void)
{
  Sys_Print("OnlineAutoTest::Dedicated Server Acquired.\n");
}

/*
==============
OnlineDevMap::StartGame
==============
*/
void OnlineDevMap::StartGame(OnlineDevMap *this)
{
  Dvar_SetString_Internal(DVARSTR_ui_mapname, this->m_mapName);
  Dvar_SetBool_Internal(DVARBOOL_party_startHosting, 1);
  this->m_state = 6;
  if ( CL_IsLocalClientActive(LOCAL_CLIENT_1) )
    CL_SetLocalClientActive(LOCAL_CLIENT_1, 0);
}

/*
==============
OnlineDevMap::StartMatchmaking
==============
*/
void OnlineDevMap::StartMatchmaking(OnlineDevMap *this, const int controllerIndex)
{
  LocalClientNum_t ClientFromController; 

  if ( matchmakingStartState )
  {
    if ( matchmakingStartState == eStepTwo )
    {
      matchmakingStartState = eStepThree;
      NET_SetNatType(1);
    }
    else if ( matchmakingStartState == eStepThree )
    {
      this->m_state = Flushing|ReadyToFlush;
      matchmakingStartState = eStepOne;
    }
  }
  else
  {
    matchmakingStartState = eStepTwo;
    Dvar_SetBool_Internal(DVARBOOL_onlinegame, 1);
    Dvar_SetInt_Internal(DVARINT_ui_maxclients, 200);
    Dvar_SetInt_Internal(DVARINT_playlist, 0);
    NET_SetNatType(1);
    ClientFromController = CL_Mgr_GetClientFromController(controllerIndex);
    CL_SetLocalClientActive(ClientFromController, 1);
    Cbuf_ExecuteBufferInternal(ClientFromController, controllerIndex, "xstartprivateparty", 0, 0);
    Dvar_SetInt_Internal(DVARINT_playlist, 0);
    Cbuf_ExecuteBufferInternal(ClientFromController, controllerIndex, "xstartlobby", 0, 0);
  }
}

/*
==============
OnlineDevMap::Starting
==============
*/
void OnlineDevMap::Starting(OnlineDevMap *this)
{
  const dvar_t *v2; 
  __int64 v3; 
  __int64 v4; 
  int v5; 
  LocalClientNum_t i; 

  v2 = DVARBOOL_onlinegame;
  v3 = 8i64 * tls_index;
  v4 = *(_QWORD *)((char *)NtCurrentTeb()->Reserved1[11] + v3);
  v5 = *(_DWORD *)(v4 + 1052);
  *(_DWORD *)(v4 + 1052) = -4609;
  Dvar_SetBool_Internal(v2, 1);
  *(_DWORD *)(*(_QWORD *)((char *)NtCurrentTeb()->Reserved1[11] + v3) + 1052i64) = v5;
  for ( i = LOCAL_CLIENT_0; i < SLODWORD(cl_maxLocalClients); ++i )
  {
    if ( CL_IsLocalClientActive(i) )
      LiveStorage_EndGame(i);
  }
  this->m_state = Flushing;
}

/*
==============
OnlineDevMap::WaitingForDemonware
==============
*/
void OnlineDevMap::WaitingForDemonware(OnlineDevMap *this)
{
  int i; 
  bool v3; 
  bool HaveStats; 
  bool IsUserSignedInToLive; 
  bool IsSignedIn; 
  bool IsUserSignedInToDemonware; 
  DWServicesAccess *Instance; 

  if ( NET_IsStarted() )
  {
    for ( i = 0; i < 8; ++i )
    {
      v3 = Live_SyncOnlineDataFrame(i) != 0;
      HaveStats = LiveStorage_DoWeHaveStats(i);
      IsUserSignedInToLive = Live_IsUserSignedInToLive(i);
      IsSignedIn = Live_IsSignedIn(i);
      IsUserSignedInToDemonware = Live_IsUserSignedInToDemonware(i);
      Instance = DWServicesAccess::GetInstance();
      if ( DWServicesAccess::isReady(Instance, i) && IsUserSignedInToLive && IsSignedIn && IsUserSignedInToDemonware && !v3 && HaveStats )
        OnlineDevMap::StartMatchmaking(this, i);
    }
  }
}

/*
==============
OnlineDevMap::WaitingForMatchmaking
==============
*/
void OnlineDevMap::WaitingForMatchmaking(OnlineDevMap *this)
{
  const PartyData *PartyData; 

  PartyData = Lobby_GetPartyData();
  if ( Party_IsServerDedicated(PartyData) )
  {
    Sys_Print("OnlineAutoTest::Dedicated Server Acquired.\n");
    this->m_state = 4;
  }
}


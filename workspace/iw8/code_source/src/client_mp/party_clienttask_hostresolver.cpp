/*
==============
PartyClientTaskHostResolver::RefreshHostListFromParty
==============
*/

void __fastcall PartyClientTaskHostResolver::RefreshHostListFromParty(PartyClientTaskHostResolver *this, PartyData *party)
{
  ?RefreshHostListFromParty@PartyClientTaskHostResolver@@QEAAXPEAUPartyData@@@Z(this, party);
}

/*
==============
PartyClientTaskHostResolver::Next
==============
*/

XUID *__fastcall PartyClientTaskHostResolver::Next(PartyClientTaskHostResolver *this, XUID *result, PartyData *party)
{
  return ?Next@PartyClientTaskHostResolver@@QEAA?AUXUID@@PEAUPartyData@@@Z(this, result, party);
}

/*
==============
PartyClientTaskHostResolver::Reset
==============
*/

void __fastcall PartyClientTaskHostResolver::Reset(PartyClientTaskHostResolver *this)
{
  ?Reset@PartyClientTaskHostResolver@@QEAAXXZ(this);
}

/*
==============
PartyClientTaskHostResolver::GetHost
==============
*/

XUID *__fastcall PartyClientTaskHostResolver::GetHost(PartyClientTaskHostResolver *this, XUID *result)
{
  return ?GetHost@PartyClientTaskHostResolver@@QEBA?AUXUID@@XZ(this, result);
}

/*
==============
PartyClientTaskHostResolver::Init
==============
*/

void __fastcall PartyClientTaskHostResolver::Init(PartyClientTaskHostResolver *this, const ClientPlatform platform)
{
  ?Init@PartyClientTaskHostResolver@@QEAAXW4ClientPlatform@@@Z(this, platform);
}

/*
==============
PartyClientTaskHostResolver::PartyClientTaskHostResolver
==============
*/

void __fastcall PartyClientTaskHostResolver::PartyClientTaskHostResolver(PartyClientTaskHostResolver *this)
{
  ??0PartyClientTaskHostResolver@@QEAA@XZ(this);
}

/*
==============
PartyClientTaskHostResolver::HostAssigned
==============
*/

bool __fastcall PartyClientTaskHostResolver::HostAssigned(PartyClientTaskHostResolver *this)
{
  return ?HostAssigned@PartyClientTaskHostResolver@@QEBA_NXZ(this);
}

/*
==============
PartyClientTaskHostResolver::Start
==============
*/

bool __fastcall PartyClientTaskHostResolver::Start(PartyClientTaskHostResolver *this, PartyData *party)
{
  return ?Start@PartyClientTaskHostResolver@@QEAA_NPEAUPartyData@@@Z(this, party);
}

/*
==============
PartyClientTaskHostResolver::PartyClientTaskHostResolver
==============
*/
void PartyClientTaskHostResolver::PartyClientTaskHostResolver(PartyClientTaskHostResolver *this)
{
  this->m_hostIndex = -1;
  this->m_hostCount = 0;
  memset_0(this->m_hostMembers, 0, sizeof(this->m_hostMembers));
}

/*
==============
PartyClientTaskHostResolver::GetHost
==============
*/
XUID *PartyClientTaskHostResolver::GetHost(PartyClientTaskHostResolver *this, XUID *result)
{
  unsigned int m_hostIndex; 
  unsigned int m_hostCount; 
  unsigned int v7; 
  unsigned int v8; 

  m_hostIndex = this->m_hostIndex;
  m_hostCount = this->m_hostCount;
  if ( m_hostIndex >= m_hostCount )
  {
    v8 = m_hostCount;
    v7 = m_hostIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\party_clienttask_hostresolver.cpp", 113, ASSERT_TYPE_ASSERT, "(unsigned)( m_hostIndex ) < (unsigned)( m_hostCount )", "m_hostIndex doesn't index m_hostCount\n\t%i not in [0, %i)", v7, v8) )
      __debugbreak();
  }
  result->m_id = (unsigned __int64)this->m_hostMembers[this->m_hostIndex]->playerUID;
  return result;
}

/*
==============
PartyClientTaskHostResolver::HostAssigned
==============
*/
bool PartyClientTaskHostResolver::HostAssigned(PartyClientTaskHostResolver *this)
{
  return this->m_hostCount > 0 && this->m_hostIndex != -1;
}

/*
==============
PartyClientTaskHostResolver::Init
==============
*/
void PartyClientTaskHostResolver::Init(PartyClientTaskHostResolver *this, const ClientPlatform platform)
{
  this->m_platform[0] = platform;
}

/*
==============
PartyClientTaskHostResolver::Next
==============
*/
XUID *PartyClientTaskHostResolver::Next(PartyClientTaskHostResolver *this, XUID *result, PartyData *party)
{
  int v6; 
  int m_hostCount; 
  int v8; 
  int v9; 
  int v10; 
  PartyMember *v11; 
  __int64 v12; 
  const dvar_t *v13; 
  unsigned int flags; 
  unsigned __int64 UniversalId; 
  unsigned __int64 m_lobbyId; 
  unsigned __int8 partyId; 
  unsigned __int8 v18; 
  unsigned __int64 v19; 
  XUID *HostXuid; 
  unsigned __int64 v21; 
  bool v22; 
  XUID resulta; 
  DLogContext context; 
  char buffer[4096]; 

  XUID::NullXUID(result);
  v6 = Sys_Milliseconds();
  m_hostCount = this->m_hostCount;
  v8 = 0;
  v9 = v6;
  if ( m_hostCount > 0 )
  {
    while ( 1 )
    {
      v10 = (this->m_hostIndex + 1) % m_hostCount;
      this->m_hostIndex = v10;
      v11 = this->m_hostMembers[v10];
      if ( Party_IsMemberPresent(v11) )
      {
        v12 = (char)this->m_platform[0];
        if ( !v11->hostingAttempted[v12] )
          break;
        v13 = DVARINT_party_client_hostresolver_retry_period;
        if ( !DVARINT_party_client_hostresolver_retry_period && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "party_client_hostresolver_retry_period") )
          __debugbreak();
        if ( g_checkServerThread && Sys_IsAnyServerThreadWork() )
        {
          flags = v13->flags;
          if ( (flags & 0x81488) != 0 && (flags & 0x40000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 612, ASSERT_TYPE_ASSERT, "(!g_checkServerThread || !Sys_IsAnyServerThreadWork() || !( dvar->flags & (((1 << 10) | (1 << 3) | (1 << 7) | ( 1 << 19 )) | (1 << 12)) ) || ( dvar->flags & ( 1 << 18 ) ))", "%s\n\tAccessing dvar '%s' from server context when we were not expected to, this can cause performance issues all the way to complete deadlocks.", "!g_checkServerThread || !Sys_IsAnyServerThreadWork() || !( dvar->flags & SV_DVAR_LOAD_MODIFIED_MASK ) || ( dvar->flags & DVAR_DCONST )", v13->name) )
            __debugbreak();
        }
        v12 = (char)this->m_platform[0];
        if ( v9 - v11->hostingAttemptTime[v12] >= v13->current.integer )
          break;
      }
      m_hostCount = this->m_hostCount;
      if ( ++v8 >= m_hostCount )
        goto LABEL_17;
    }
    v11->hostingAttempted[(char)v12] = 1;
    v11->hostingAttemptTime[(char)this->m_platform[0]] = v9;
    XUID::operator=(result, &v11->playerUID);
  }
LABEL_17:
  if ( XUID::IsNull(result) )
  {
    this->m_hostIndex = -1;
  }
  else
  {
    Party_SetPlatformSessionHostXUID(party, (XUID)result->m_id, (ClientPlatform)(unsigned __int8)this->m_platform[0]);
    UniversalId = XUID::GetUniversalId(result);
    m_lobbyId = party->m_lobbyId;
    partyId = party->partyId;
    v18 = this->m_platform[0];
    v19 = UniversalId;
    HostXuid = Party_GetHostXuid(&resulta, party);
    v21 = XUID::GetUniversalId(HostXuid);
    if ( DLog_IsActive() && DLog_CreateContext(&context, v21, buffer, 4096) && DLog_IsActive() )
    {
      v22 = DLog_BeginEvent(&context, "dlog_event_clienttask_host_resolved");
      context.autoEndEvent = 1;
      if ( v22 && DLog_UInt8(&context, "platform", v18) && DLog_UInt8(&context, "party_type", partyId) && DLog_UInt64(&context, "lobby_id", m_lobbyId) && DLog_UInt64(&context, "client_xuid", v19) )
        DLog_RecordContext(&context);
    }
  }
  return result;
}

/*
==============
PartyClientTaskHostResolver::RefreshHostListFromParty
==============
*/
void PartyClientTaskHostResolver::RefreshHostListFromParty(PartyClientTaskHostResolver *this, PartyData *party)
{
  unsigned int v2; 
  ClientPlatform v5; 
  __int64 v6; 
  __int64 v7; 

  v2 = 0;
  this->m_hostCount = 0;
  do
  {
    if ( Party_IsMemberPresent(&party->partyMembers[v2]) )
    {
      v5 = (unsigned __int8)this->m_platform[0];
      if ( !(_BYTE)v5 || Party_IsMemberOnPlatform(&party->partyMembers[v2], v5) )
      {
        if ( this->m_hostCount >= 0xC8u )
        {
          LODWORD(v7) = 200;
          LODWORD(v6) = this->m_hostCount;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\party_clienttask_hostresolver.cpp", 131, ASSERT_TYPE_ASSERT, "(unsigned)( m_hostCount ) < (unsigned)( ( sizeof( *array_counter( m_hostMembers ) ) + 0 ) )", "m_hostCount doesn't index ARRAY_COUNT( m_hostMembers )\n\t%i not in [0, %i)", v6, v7) )
            __debugbreak();
        }
        this->m_hostMembers[this->m_hostCount++] = &party->partyMembers[v2];
      }
    }
    ++v2;
  }
  while ( v2 < 0xC8 );
}

/*
==============
PartyClientTaskHostResolver::Reset
==============
*/
void PartyClientTaskHostResolver::Reset(PartyClientTaskHostResolver *this)
{
  this->m_hostIndex = -1;
  this->m_hostCount = 0;
}

/*
==============
PartyClientTaskHostResolver::Start
==============
*/
bool PartyClientTaskHostResolver::Start(PartyClientTaskHostResolver *this, PartyData *party)
{
  unsigned int v4; 
  const XUID *PrivateMatchHost; 
  int MemberByXUID; 
  ClientPlatform v7; 
  __int64 v9; 
  __int64 v10; 
  XUID result; 

  this->m_hostIndex = -1;
  v4 = 0;
  this->m_hostCount = 0;
  if ( OnlineMatchmakerOmniscient::IsPrivateMatch(&OnlineMatchmakerOmniscient::ms_instance) )
  {
    PrivateMatchHost = OnlineMatchmakerOmniscient::GetPrivateMatchHost(&OnlineMatchmakerOmniscient::ms_instance, &result);
    MemberByXUID = Party_FindMemberByXUID(party, (const XUID)PrivateMatchHost->m_id);
    if ( MemberByXUID != -1 )
      this->m_hostMembers[this->m_hostCount++] = &party->partyMembers[MemberByXUID];
  }
  else
  {
    this->m_hostCount = 0;
    do
    {
      if ( Party_IsMemberPresent(&party->partyMembers[v4]) )
      {
        v7 = (unsigned __int8)this->m_platform[0];
        if ( !(_BYTE)v7 || Party_IsMemberOnPlatform(&party->partyMembers[v4], v7) )
        {
          if ( this->m_hostCount >= 0xC8u )
          {
            LODWORD(v10) = 200;
            LODWORD(v9) = this->m_hostCount;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\party_clienttask_hostresolver.cpp", 131, ASSERT_TYPE_ASSERT, "(unsigned)( m_hostCount ) < (unsigned)( ( sizeof( *array_counter( m_hostMembers ) ) + 0 ) )", "m_hostCount doesn't index ARRAY_COUNT( m_hostMembers )\n\t%i not in [0, %i)", v9, v10) )
              __debugbreak();
          }
          this->m_hostMembers[this->m_hostCount++] = &party->partyMembers[v4];
        }
      }
      ++v4;
    }
    while ( v4 < 0xC8 );
  }
  PartyClientTaskHostResolver::Next(this, &result, party);
  return this->m_hostCount > 0 && this->m_hostIndex != -1;
}


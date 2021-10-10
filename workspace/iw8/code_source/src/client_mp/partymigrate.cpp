/*
==============
PartyMigrate_AbortMakeHost
==============
*/

void __fastcall PartyMigrate_AbortMakeHost(PartyData *party)
{
  ?PartyMigrate_AbortMakeHost@@YAXPEAUPartyData@@@Z(party);
}

/*
==============
PartyMigrate_GetArbitratorClientNum
==============
*/

int __fastcall PartyMigrate_GetArbitratorClientNum(PartyData *party, int cacheResult)
{
  return ?PartyMigrate_GetArbitratorClientNum@@YAHPEAUPartyData@@H@Z(party, cacheResult);
}

/*
==============
PartyMigrate_ResetTweakDvars
==============
*/

void PartyMigrate_ResetTweakDvars(void)
{
  ?PartyMigrate_ResetTweakDvars@@YAXXZ();
}

/*
==============
PartyMigrate_HandlePacket
==============
*/

int __fastcall PartyMigrate_HandlePacket(PartyData *party, const char *c, const PartyActiveClient *destClient, netadr_t *from, msg_t *msg)
{
  return ?PartyMigrate_HandlePacket@@YAHPEAUPartyData@@PEBDPEBUPartyActiveClient@@Unetadr_t@@PEAUmsg_t@@@Z(party, c, destClient, from, msg);
}

/*
==============
PartyMigrate_GetClientConnectivity
==============
*/

unsigned int __fastcall PartyMigrate_GetClientConnectivity(const PartyData *party, int ourClientNum)
{
  return ?PartyMigrate_GetClientConnectivity@@YAIPEBUPartyData@@H@Z(party, ourClientNum);
}

/*
==============
PartyMigrate_StartMigrationFromMessage
==============
*/

void __fastcall PartyMigrate_StartMigrationFromMessage(PartyData *party, const PartyActiveClient *mainActiveClient, const int newHost, const int migrateFlags, const int isInGameMigration)
{
  ?PartyMigrate_StartMigrationFromMessage@@YAXPEAUPartyData@@PEBUPartyActiveClient@@HHH@Z(party, mainActiveClient, newHost, migrateFlags, isInGameMigration);
}

/*
==============
PartyMigrate_GetRAMPingBonus
==============
*/

int __fastcall PartyMigrate_GetRAMPingBonus(const SessionData *session, const int physMemory)
{
  return ?PartyMigrate_GetRAMPingBonus@@YAHPEBUSessionData@@H@Z(session, physMemory);
}

/*
==============
PartyMigrate_GetBandwidthPingBonus
==============
*/

int __fastcall PartyMigrate_GetBandwidthPingBonus(const int playerCount, const int uploadBandwidth)
{
  return ?PartyMigrate_GetBandwidthPingBonus@@YAHHH@Z(playerCount, uploadBandwidth);
}

/*
==============
PartyMigrate_HostMigrationEnabled
==============
*/

int __fastcall PartyMigrate_HostMigrationEnabled(const PartyData *party)
{
  return ?PartyMigrate_HostMigrationEnabled@@YAHPEBUPartyData@@@Z(party);
}

/*
==============
PartyMigrate_StopMigration
==============
*/

void __fastcall PartyMigrate_StopMigration(PartyData *party)
{
  ?PartyMigrate_StopMigration@@YAXPEAUPartyData@@@Z(party);
}

/*
==============
PartyMigrate_AskArbitratorToChangeHost
==============
*/

void __fastcall PartyMigrate_AskArbitratorToChangeHost(PartyData *party, const int newHostClientNum, const XUID newHostXuid)
{
  ?PartyMigrate_AskArbitratorToChangeHost@@YAXPEAUPartyData@@HUXUID@@@Z(party, newHostClientNum, newHostXuid);
}

/*
==============
PartyMigrate_SetMigrationCause
==============
*/

void __fastcall PartyMigrate_SetMigrationCause(MigrationCause cause)
{
  ?PartyMigrate_SetMigrationCause@@YAXW4MigrationCause@@@Z(cause);
}

/*
==============
PartyMigrate_MigrateActive
==============
*/

int __fastcall PartyMigrate_MigrateActive(const PartyData *party)
{
  return ?PartyMigrate_MigrateActive@@YAHPEBUPartyData@@@Z(party);
}

/*
==============
PartyMigrate_PrintCantHost
==============
*/

void __fastcall PartyMigrate_PrintCantHost(const PartyData *party, int localControllerIndex, bool requireTalkToAllClients)
{
  ?PartyMigrate_PrintCantHost@@YAXPEBUPartyData@@H_N@Z(party, localControllerIndex, requireTalkToAllClients);
}

/*
==============
PartyMigrate_StartTimeout
==============
*/

void __fastcall PartyMigrate_StartTimeout(PartyData *party)
{
  ?PartyMigrate_StartTimeout@@YAXPEAUPartyData@@@Z(party);
}

/*
==============
PartyMigrate_ShowMigratingStatus
==============
*/

int __fastcall PartyMigrate_ShowMigratingStatus(const PartyData *party)
{
  return ?PartyMigrate_ShowMigratingStatus@@YAHPEBUPartyData@@@Z(party);
}

/*
==============
PartyMigrate_ClearExpectedNewHost
==============
*/

void __fastcall PartyMigrate_ClearExpectedNewHost(PartyData *party)
{
  ?PartyMigrate_ClearExpectedNewHost@@YAXPEAUPartyData@@@Z(party);
}

/*
==============
PartyMigrate_StartNegotiation
==============
*/

void __fastcall PartyMigrate_StartNegotiation(PartyData *party, const PartyActiveClient *mainActiveClient)
{
  ?PartyMigrate_StartNegotiation@@YAXPEAUPartyData@@PEBUPartyActiveClient@@@Z(party, mainActiveClient);
}

/*
==============
PartyMigrate_ClearMemberData
==============
*/

void __fastcall PartyMigrate_ClearMemberData(PartyData *party, int clientNum)
{
  ?PartyMigrate_ClearMemberData@@YAXPEAUPartyData@@H@Z(party, clientNum);
}

/*
==============
PartyMigrate_ShowMakeHostStatus
==============
*/

int __fastcall PartyMigrate_ShowMakeHostStatus(const PartyData *party)
{
  return ?PartyMigrate_ShowMakeHostStatus@@YAHPEBUPartyData@@@Z(party);
}

/*
==============
PartyMigrate_RequestFindBestHost
==============
*/

void __fastcall PartyMigrate_RequestFindBestHost(PartyData *party, const int controllerIndex)
{
  ?PartyMigrate_RequestFindBestHost@@YAXPEAUPartyData@@H@Z(party, controllerIndex);
}

/*
==============
PartyMigrate_CanWeHostLobby
==============
*/

bool __fastcall PartyMigrate_CanWeHostLobby(const PartyData *party, int localControllerIndex, bool requireTalkToAllClients)
{
  return ?PartyMigrate_CanWeHostLobby@@YA_NPEBUPartyData@@H_N@Z(party, localControllerIndex, requireTalkToAllClients);
}

/*
==============
PartyMigrate_Frame
==============
*/

void __fastcall PartyMigrate_Frame(PartyData *party, const PartyActiveClient *mainActiveClient, const int msec)
{
  ?PartyMigrate_Frame@@YAXPEAUPartyData@@PEBUPartyActiveClient@@H@Z(party, mainActiveClient, msec);
}

/*
==============
PartyMigrate_SwapHostAndClient
==============
*/

void __fastcall PartyMigrate_SwapHostAndClient(PartyData *party, unsigned int newHostNum)
{
  ?PartyMigrate_SwapHostAndClient@@YAXPEAUPartyData@@I@Z(party, newHostNum);
}

/*
==============
PartyMigrate_HandleMigrationFailure
==============
*/

void __fastcall PartyMigrate_HandleMigrationFailure(PartyData *party, const int controllerIndex)
{
  ?PartyMigrate_HandleMigrationFailure@@YAXPEAUPartyData@@H@Z(party, controllerIndex);
}

/*
==============
PartyMigrate_UpdateMakeHost
==============
*/

void __fastcall PartyMigrate_UpdateMakeHost(PartyData *party)
{
  ?PartyMigrate_UpdateMakeHost@@YAXPEAUPartyData@@@Z(party);
}

/*
==============
PartyMigrate_SetMigrationID
==============
*/

void __fastcall PartyMigrate_SetMigrationID(unsigned __int64 migrationID)
{
  ?PartyMigrate_SetMigrationID@@YAX_K@Z(migrationID);
}

/*
==============
PartyMigrate_Init
==============
*/

void PartyMigrate_Init(void)
{
  ?PartyMigrate_Init@@YAXXZ();
}

/*
==============
PartyMigrate_HandleNomineeMsg
==============
*/
void PartyMigrate_HandleNomineeMsg(PartyData *party, const PartyActiveClient *mainActiveClient, netadr_t *from, msg_t *msg)
{
  __int128 v8; 
  __int64 Bits; 
  unsigned int v10; 
  __int64 v11; 
  __int64 v12; 
  int v13; 
  const char *v14; 
  int v15; 
  const char *v16; 
  unsigned __int64 m_id; 
  __int64 MemberByXUID_AllowNotPresent; 
  const char *v19; 
  const char *MemberName; 
  __int64 v21; 
  __int64 v22; 
  __int64 v23; 
  __int64 v24; 
  __int64 v25; 
  const char *v26; 
  const char *v27; 
  NomineeInfo v28; 
  __int64 v29; 
  int v30; 
  const char *v31; 
  int addrHandleIndex; 
  const char *v33; 
  char *fmt; 
  char *fmta; 
  __int64 v36; 
  XUID player; 
  netadr_t v38; 
  NomineeInfo buffer; 
  char dest[512]; 

  XUID::XUID(&player);
  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 1800, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( !party->inParty )
  {
    Com_PrintError(25, "[%s] Received party nominee msg for a party type that we're not in\n", party->partyName);
    return;
  }
  if ( !PartyMigrate_HostMigrationEnabled(party) )
  {
    Com_Printf(25, "[%s] Received party nominee msg but host migration is not enabled.\n", party->partyName);
    return;
  }
  v8 = *(_OWORD *)&from->type;
  v38.addrHandleIndex = from->addrHandleIndex;
  *(_OWORD *)&v38.type = v8;
  if ( Party_FindFirstMemberAtAddr(party, &v38) < 0 )
  {
    Com_Printf(25, "[%s] Received party nominee msg but we don't know who it's from.\n", party->partyName);
    return;
  }
  if ( party->partyMembersBits <= 0 )
  {
    LODWORD(v36) = party->partyMembersBits;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 1819, ASSERT_TYPE_ASSERT, "( ( party->partyMembersBits > 0 ) )", "( party->partyMembersBits ) = %i", v36) )
      __debugbreak();
  }
  Bits = MSG_ReadBits(msg, 2u);
  v10 = truncate_cast<int,__int64>(Bits);
  v11 = MSG_ReadBits(msg, party->partyMembersBits);
  v12 = truncate_cast<int,__int64>(v11);
  XUID::Deserialize(&player, msg);
  MSG_ReadData(msg, 32, &buffer, 32);
  if ( msg->overflowed || msg->readcount != msg->cursize + msg->splitSize )
  {
    addrHandleIndex = from->addrHandleIndex;
    *(_OWORD *)&v38.type = *(_OWORD *)&from->type;
    v38.addrHandleIndex = addrHandleIndex;
    v33 = NET_AdrToString(&v38);
    Com_PrintError(25, "[%s] Received party nominee msg with invalid payload from %s\n", party->partyName, v33);
  }
  else if ( (unsigned int)v12 > 0xC7 )
  {
    v30 = from->addrHandleIndex;
    *(_OWORD *)&v38.type = *(_OWORD *)&from->type;
    v38.addrHandleIndex = v30;
    v31 = NET_AdrToString(&v38);
    Com_Printf(25, "[%s] Received party nominee msg from invalid clientNum %i. (%s)\n", party->partyName, (unsigned int)v12, v31);
  }
  else
  {
    if ( !PartyMigrate_IsStatusValidForMigration(party, v12) )
    {
      v13 = from->addrHandleIndex;
      *(_OWORD *)&v38.type = *(_OWORD *)&from->type;
      v38.addrHandleIndex = v13;
      v14 = NET_AdrToString(&v38);
      LODWORD(fmt) = v12;
      Com_Printf(25, "[%s] Received party nominee msg from clientNum %i but client %i is not in a valid state for migration (%s)\n", party->partyName, (unsigned int)v12, fmt, v14);
      return;
    }
    if ( Party_MemberHasLoopbackAddr(party, v12) )
    {
      v15 = from->addrHandleIndex;
      *(_OWORD *)&v38.type = *(_OWORD *)&from->type;
      v38.addrHandleIndex = v15;
      v16 = NET_AdrToString(&v38);
      Com_PrintWarning(25, "[%s] We got a nominee msg from clientNum %i, which is a local client. Ignoring. (%s)\n", party->partyName, (unsigned int)v12, v16);
      return;
    }
    if ( v10 != party->migrateData.indexBits )
    {
      LODWORD(v36) = party->migrateData.indexBits;
      LODWORD(fmt) = v12;
      Com_Printf(25, "[%s] Received stale nominee msg (index %i) from client %i - current indexBits are %i\n", party->partyName, v10, fmt, v36);
      return;
    }
    if ( !PartyMigrate_MigrateActive(party) )
    {
      if ( !Party_IsRunning(party) && !Party_IsInGameLobbyMigrationAllowed(party) )
      {
        Com_Printf(25, "[%s] Received stray nominee for game lobby while it is inactive.\n", party->partyName);
        return;
      }
      LODWORD(fmt) = party->migrateData.indexBits;
      Com_Printf(25, "[%s] We're not currently migrating but we got a migration message from client %i with index %i, which is the valid next index\n", party->partyName, (unsigned int)v12, fmt);
      PartyMigrate_StartTimeout(party);
      PartyMigrate_StartNegotiation(party, mainActiveClient);
      PartyMigrate_CheckNegotiationDisconnect(party, mainActiveClient);
    }
    if ( party->migrateData.weAreArbitrating )
    {
      if ( (unsigned int)v12 >= 0xC8 )
      {
        LODWORD(v36) = v12;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 1877, ASSERT_TYPE_ASSERT, "(unsigned)( fromWhom ) < (unsigned)( 200 )", "fromWhom doesn't index MAX_PARTY_MEMBERS\n\t%i not in [0, %i)", v36, 200) )
          __debugbreak();
      }
      m_id = player.m_id;
      party->partyMembers[v12].migrateHeardFrom = 1;
      MemberByXUID_AllowNotPresent = Party_FindMemberByXUID_AllowNotPresent(party, (const XUID)m_id);
      if ( XUID::IsValid(&player) && (int)MemberByXUID_AllowNotPresent < 0 )
      {
        v19 = XUID::ToDevString(&player);
        MemberName = Party_GetMemberName(party, v12);
        Com_PrintError(25, "[%s] Client %i (%s) wants the host to be client with XUID %s, but we can't find that XUID in the party!\n", party->partyName, (unsigned int)v12, MemberName, v19);
      }
      if ( (_DWORD)MemberByXUID_AllowNotPresent == -1 || (_DWORD)MemberByXUID_AllowNotPresent == (_DWORD)v12 )
      {
        if ( (unsigned int)(MemberByXUID_AllowNotPresent + 1) > 0xC8 )
        {
          Com_Printf(25, "[%s] Received party nominee msg for invalid clientNum %i!\n", party->partyName, (unsigned int)MemberByXUID_AllowNotPresent);
        }
        else
        {
          if ( (int)MemberByXUID_AllowNotPresent < 0 )
          {
            Com_Printf(25, "[%s] Client %i doesn't have a nominee\n", party->partyName, (unsigned int)v12);
          }
          else
          {
            LODWORD(fmt) = buffer.connectivity;
            Com_sprintf_truncate<512>((char (*)[512])dest, "(Upload %i, NAT %i, connectivity %x", (unsigned int)buffer.upload, (unsigned int)buffer.NAT, fmt);
            v21 = -1i64;
            v22 = -1i64;
            do
              ++v22;
            while ( dest[v22] );
            Com_sprintf_truncate(&dest[v22], 512 - v22, ", CPU %g", (float)((float)buffer.cpuSpeed * 0.001));
            v23 = -1i64;
            do
              ++v23;
            while ( dest[v23] );
            Com_sprintf_truncate(&dest[v23], 512 - v23, ", RAM %i", (unsigned int)buffer.physMemory);
            v24 = -1i64;
            do
              ++v24;
            while ( dest[v24] );
            Com_sprintf_truncate(&dest[v24], 512 - v24, ", avgPing %i", (unsigned int)buffer.avgPing);
            v25 = -1i64;
            do
              ++v25;
            while ( dest[v25] );
            Com_sprintf_truncate(&dest[v25], 512 - v25, ", hostScore %0.2f", buffer.hostScore);
            do
              ++v21;
            while ( dest[v21] );
            Com_sprintf_truncate(&dest[v21], 512 - v21, ")");
            v26 = XUID::ToDevString(&player);
            v27 = Party_GetMemberName(party, MemberByXUID_AllowNotPresent);
            LODWORD(fmta) = MemberByXUID_AllowNotPresent;
            Com_Printf(25, "[%s] Client %i wants the host to be client %i (%s - xuid %s) %s\n", party->partyName, (unsigned int)v12, fmta, v27, v26, dest);
          }
          if ( (int)MemberByXUID_AllowNotPresent >= 0 )
          {
            if ( (_DWORD)MemberByXUID_AllowNotPresent != (_DWORD)v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 1912, ASSERT_TYPE_ASSERT, "(theirNominee == fromWhom)", (const char *)&queryFormat, "theirNominee == fromWhom") )
              __debugbreak();
            if ( !PartyMigrate_IsStatusValidForMigration(party, MemberByXUID_AllowNotPresent) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 1913, ASSERT_TYPE_ASSERT, "(PartyMigrate_IsStatusValidForMigration( party, theirNominee ))", (const char *)&queryFormat, "PartyMigrate_IsStatusValidForMigration( party, theirNominee )") )
              __debugbreak();
            v28 = buffer;
            v29 = MemberByXUID_AllowNotPresent;
            party->partyMembers[v29].migrateNominated = 1;
            party->partyMembers[v29].migrateNomineeInfo = v28;
          }
        }
      }
      else
      {
        LODWORD(fmt) = MemberByXUID_AllowNotPresent;
        Com_PrintWarning(25, "[%s] Received nomination from client %i for client %i - XUID/client mismatch - clients can only nominate themselves\n", party->partyName, (unsigned int)v12, fmt);
      }
    }
    else
    {
      Com_Printf(25, "[%s] Received nominee msg from clientNum %i, but we are not arbitrating.\n", party->partyName, (unsigned int)v12);
    }
  }
}

/*
==============
PartyMigrate_HandleMakeHostMsg
==============
*/
void PartyMigrate_HandleMakeHostMsg(PartyData *party, const PartyActiveClient *mainActiveClient, netadr_t *from, msg_t *msg)
{
  __int128 v8; 
  int v9; 
  const char *v10; 
  int ArbitratorClientNum; 
  __int64 Bits; 
  unsigned int v13; 
  __int64 v14; 
  unsigned int v15; 
  int indexBits; 
  int addrHandleIndex; 
  const char *v18; 
  const char *v19; 
  int HasHostAddress; 
  const char *partyName; 
  int v22; 
  const char *v23; 
  const dvar_t *v24; 
  const char *v25; 
  char *fmt; 
  __int64 v27; 
  XUID player; 
  netadr_t v29; 

  XUID::XUID(&player);
  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 1990, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( party->inParty )
  {
    if ( Party_IsPrivateParty(party) || Party_IsPrivateDSMatch(party) )
    {
      if ( Party_IsRunning(party) )
      {
        if ( Party_IsHostDedicated(party) || (v8 = *(_OWORD *)&from->type, v29.addrHandleIndex = from->addrHandleIndex, *(_OWORD *)&v29.type = v8, Party_FindFirstMemberAtAddr(party, &v29) >= 0) )
        {
          if ( party->areWeHost )
          {
            Com_PrintError(25, "[%s] Received invalid makeHost msg as a host\n", party->partyName);
          }
          else if ( Party_PacketIsFromHost(party, (const LocalClientNum_t)mainActiveClient->localClientNum, from) )
          {
            if ( PartyMigrate_HostMigrationEnabled(party) )
            {
              if ( PartyMigrate_MigrateActive(party) )
              {
                Com_Printf(25, "[%s] Received invalid makeHost msg - we're already migrating.\n", party->partyName);
              }
              else
              {
                ArbitratorClientNum = PartyMigrate_GetArbitratorClientNum(party, 0);
                if ( Party_MemberHasLoopbackAddr(party, ArbitratorClientNum) )
                {
                  if ( party->partyMembersBits <= 0 )
                  {
                    LODWORD(v27) = party->partyMembersBits;
                    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 2040, ASSERT_TYPE_ASSERT, "( ( party->partyMembersBits > 0 ) )", "( party->partyMembersBits ) = %i", v27) )
                      __debugbreak();
                  }
                  Bits = MSG_ReadBits(msg, 2u);
                  v13 = truncate_cast<int,__int64>(Bits);
                  v14 = MSG_ReadBits(msg, party->partyMembersBits);
                  v15 = truncate_cast<int,__int64>(v14);
                  XUID::Deserialize(&player, msg);
                  indexBits = party->migrateData.indexBits;
                  if ( v13 == indexBits )
                  {
                    if ( v15 > 0xC7 || XUID::IsNull(&player) )
                    {
                      v25 = XUID::ToDevString(&player);
                      Com_Printf(25, "[%s] Received invalid makeHost msg - new host num %i and xuid %s invalid.\n", party->partyName, v15, v25);
                    }
                    else if ( Party_FindMemberByXUID(party, player) == v15 )
                    {
                      if ( PartyMigrate_IsStatusValidForMigration(party, v15) )
                      {
                        HasHostAddress = Party_MemberHasHostAddress(party, v15);
                        partyName = party->partyName;
                        if ( HasHostAddress )
                        {
                          Com_Printf(25, "[%s] Received invalid makeHost msg - new host num %i is the host machine.\n", partyName, v15);
                        }
                        else
                        {
                          LODWORD(fmt) = v15;
                          Com_Printf(25, "[%s] Host told us to make someone else the host. Index bits are %i. New host is client %i.\n", partyName, v13, fmt);
                          v22 = PartyMigrate_SetupMigration(party, mainActiveClient);
                          v23 = party->partyName;
                          if ( v22 )
                          {
                            Com_Printf(25, "[%s] Setting migrateToRequestedHost to %i.\n", v23, v15);
                            if ( !party->migrateData.weAreArbitrating && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 2084, ASSERT_TYPE_ASSERT, "(party->migrateData.weAreArbitrating)", (const char *)&queryFormat, "party->migrateData.weAreArbitrating") )
                              __debugbreak();
                            if ( party->migrateData.migrateToRequestedHost != -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 2085, ASSERT_TYPE_ASSERT, "(party->migrateData.migrateToRequestedHost == -1)", (const char *)&queryFormat, "party->migrateData.migrateToRequestedHost == -1") )
                              __debugbreak();
                            party->migrateData.migrateToRequestedHost = v15;
                            party->migrateData.bestHost.lastSentTo = -1;
                            if ( Party_IsPrivateDSMatch(party) )
                            {
                              party->migrateData.startTime = Sys_Milliseconds();
                              v24 = DVARINT_partymigrate_makePrivateDSHostTimeout;
                              if ( !DVARINT_partymigrate_makePrivateDSHostTimeout && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "partymigrate_makePrivateDSHostTimeout") )
                                __debugbreak();
                              Dvar_CheckFrontendServerThread(v24);
                              party->migrateData.timeoutDuration = v24->current.integer;
                              party->migrateData.partyTime = party->migrateData.startTime;
                              PartyMigrate_AskForPredeterminedHostNominee(party, v15, mainActiveClient);
                            }
                            else
                            {
                              PartyMigrate_StartMakeHostTimeout(party);
                              PartyMigrate_AskForPredeterminedHostNominee(party, v15, mainActiveClient);
                            }
                          }
                          else
                          {
                            Com_PrintError(25, "[%s] Could not setup migration for makeHost as planned\n", v23);
                          }
                        }
                      }
                      else
                      {
                        Com_Printf(25, "[%s] Received invalid makeHost msg - new host num %i not valid for migration.\n", party->partyName, v15);
                      }
                    }
                    else
                    {
                      v19 = XUID::ToDevString(&player);
                      Com_Printf(25, "[%s] Received invalid makeHost msg - new host num %i and xuid %s don't match our party information.\n", party->partyName, v15, v19);
                    }
                  }
                  else
                  {
                    addrHandleIndex = from->addrHandleIndex;
                    *(_OWORD *)&v29.type = *(_OWORD *)&from->type;
                    v29.addrHandleIndex = addrHandleIndex;
                    v18 = NET_AdrToString(&v29);
                    LODWORD(v27) = indexBits;
                    Com_Printf(25, "[%s] Received invalid makeHost msg (index %i) from host at %s - current indexBits are %i\n", party->partyName, v13, v18, v27);
                  }
                }
                else
                {
                  Com_Printf(25, "[%s] Received invalid makeHost msg - we are not the arbitrator.\n", party->partyName);
                }
              }
            }
            else
            {
              Com_Printf(25, "[%s] Received invalid makeHost msg - host migration is not enabled.\n", party->partyName);
            }
          }
          else
          {
            Com_PrintWarning(25, "[%s] Received invalid makeHost msg from someone other than the host\n", party->partyName);
          }
        }
        else
        {
          v9 = from->addrHandleIndex;
          *(_OWORD *)&v29.type = *(_OWORD *)&from->type;
          v29.addrHandleIndex = v9;
          v10 = NET_AdrToString(&v29);
          Com_Printf(25, "[%s] Received invalid makeHost msg from unknown client (%s).\n", party->partyName, v10);
        }
      }
      else
      {
        Com_PrintError(25, "[%s] Received invalid makeHost msg - can only be done while the party is running\n", party->partyName);
      }
    }
    else
    {
      Com_PrintError(25, "[%s] Received invalid makeHost msg - can only be done on the private party or a private DS game\n", party->partyName);
    }
  }
  else
  {
    Com_PrintError(25, "[%s] Received invalid makeHost msg for a party we aren't in\n", party->partyName);
  }
}

/*
==============
PartyMigrate_HandleMakeHostTestMsg
==============
*/
void PartyMigrate_HandleMakeHostTestMsg(PartyData *party, const PartyActiveClient *mainActiveClient, netadr_t *from, msg_t *msg)
{
  int addrHandleIndex; 
  __int128 v9; 
  int ArbitratorClientNum; 
  __int64 Bits; 
  unsigned int v12; 
  __int64 v13; 
  unsigned int v14; 
  __int64 v15; 
  unsigned int v16; 
  int indexBits; 
  int v18; 
  const char *v19; 
  const char *v20; 
  int OurClientNum; 
  const char *partyName; 
  char *fmt; 
  __int64 v24; 
  netadr_t v25; 
  XUID player; 

  XUID::XUID(&player);
  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 2115, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  addrHandleIndex = from->addrHandleIndex;
  *(_OWORD *)&v25.type = *(_OWORD *)&from->type;
  v25.addrHandleIndex = addrHandleIndex;
  if ( NET_IsLocalAddress(&v25) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 2116, ASSERT_TYPE_ASSERT, "(!NET_IsLocalAddress( from ))", "%s\n\tWe sent a hostTest message to ourself", "!NET_IsLocalAddress( from )") )
    __debugbreak();
  if ( party->inParty )
  {
    if ( party->areWeHost )
    {
      Com_PrintError(25, "[%s] Received invalid hostTest msg - we are the host, it shouldn't try to migrate to us\n", party->partyName);
    }
    else if ( Party_IsPrivateParty(party) )
    {
      if ( Party_IsRunning(party) )
      {
        v9 = *(_OWORD *)&from->type;
        v25.addrHandleIndex = from->addrHandleIndex;
        *(_OWORD *)&v25.type = v9;
        if ( Party_FindFirstMemberAtAddr(party, &v25) >= 0 )
        {
          if ( PartyMigrate_HostMigrationEnabled(party) )
          {
            if ( PartyMigrate_MigrateActive(party) )
            {
              Com_Printf(25, "[%s] Received invalid hostTest msg - we're already migrating.\n", party->partyName);
            }
            else
            {
              ArbitratorClientNum = PartyMigrate_GetArbitratorClientNum(party, 0);
              if ( Party_MemberHasLoopbackAddr(party, ArbitratorClientNum) )
              {
                Com_Printf(25, "[%s] Received invalid hostTest msg - we are the arbitrator.\n", party->partyName);
              }
              else
              {
                if ( party->partyMembersBits <= 0 )
                {
                  LODWORD(v24) = party->partyMembersBits;
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 2167, ASSERT_TYPE_ASSERT, "( ( party->partyMembersBits > 0 ) )", "( party->partyMembersBits ) = %i", v24) )
                    __debugbreak();
                }
                Bits = MSG_ReadBits(msg, 2u);
                v12 = truncate_cast<int,__int64>(Bits);
                v13 = MSG_ReadBits(msg, party->partyMembersBits);
                v14 = truncate_cast<int,__int64>(v13);
                v15 = MSG_ReadBits(msg, party->partyMembersBits);
                v16 = truncate_cast<int,__int64>(v15);
                XUID::Deserialize(&player, msg);
                indexBits = party->migrateData.indexBits;
                if ( v12 == indexBits )
                {
                  if ( v14 > 0xC7 )
                  {
                    Com_Printf(25, "[%s] Received invalid hostTest msg  with invalid newHostNum %i\n", party->partyName, v14);
                  }
                  else if ( v16 == ArbitratorClientNum )
                  {
                    if ( Party_FindMemberByXUID(party, player) == v16 )
                    {
                      OurClientNum = Live_GetOurClientNum(mainActiveClient->localControllerIndex, party);
                      partyName = party->partyName;
                      if ( v14 == OurClientNum )
                      {
                        LODWORD(fmt) = v16;
                        Com_Printf(25, "[%s] We got a hostTest message from the arbitrator, sending our nominee info. Indexbits %i, from %i\n", partyName, v12, fmt);
                        PartyMigrate_StartMakeHostTimeout(party);
                        if ( PartyMigrate_SetupMigration(party, mainActiveClient) )
                        {
                          if ( party->migrateData.weAreArbitrating && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 2215, ASSERT_TYPE_ASSERT, "(!party->migrateData.weAreArbitrating)", (const char *)&queryFormat, "!party->migrateData.weAreArbitrating") )
                            __debugbreak();
                          if ( party->migrateData.migrateToRequestedHost != -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 2216, ASSERT_TYPE_ASSERT, "(party->migrateData.migrateToRequestedHost == -1)", (const char *)&queryFormat, "party->migrateData.migrateToRequestedHost == -1") )
                            __debugbreak();
                          party->migrateData.migrateToRequestedHost = v14;
                          PartyMigrate_SelectOurNominee(party, mainActiveClient);
                          PartyMigrate_StopMigration(party);
                        }
                        else
                        {
                          Com_PrintError(25, "[%s] Could not setup migration for makeHost as planned\n", party->partyName);
                        }
                      }
                      else
                      {
                        LODWORD(fmt) = OurClientNum;
                        Com_Printf(25, "[%s] Received invalid hostTest msg - requester host num %i is not our client num (%i).\n", partyName, v14, fmt);
                      }
                    }
                    else
                    {
                      v20 = XUID::ToDevString(&player);
                      Com_Printf(25, "[%s] Received invalid hostTest msg - requester client num %i and xuid %s don't match our party information.\n", party->partyName, v16, v20);
                    }
                  }
                  else
                  {
                    LODWORD(fmt) = ArbitratorClientNum;
                    Com_Printf(25, "[%s] Received invalid hostTest msg - not from the arbitrator (%i vs %i).\n", party->partyName, v16, fmt);
                  }
                }
                else
                {
                  v18 = from->addrHandleIndex;
                  *(_OWORD *)&v25.type = *(_OWORD *)&from->type;
                  v25.addrHandleIndex = v18;
                  v19 = NET_AdrToString(&v25);
                  LODWORD(v24) = indexBits;
                  Com_Printf(25, "[%s] Received invalid hostTest msg (index %i) from host at %s - current indexBits are %i\n", party->partyName, v12, v19, v24);
                }
              }
            }
          }
          else
          {
            Com_Printf(25, "[%s] Received invalid hostTest msg - host migration is not enabled.\n", party->partyName);
          }
        }
        else
        {
          Com_Printf(25, "[%s] Received invalid hostTest msg from unknown client.\n", party->partyName);
        }
      }
      else
      {
        Com_PrintError(25, "[%s] Received invalid hostTest msg - can only be done while the party is running\n", party->partyName);
      }
    }
    else
    {
      Com_PrintError(25, "[%s] Received invalid hostTest msg - can only be done on the private party\n", party->partyName);
    }
  }
  else
  {
    Com_PrintError(25, "[%s] Received invalid hostTest msg for a party we aren't in\n", party->partyName);
  }
}

/*
==============
PartyMigrate_HandleMakeHostErrorMsg
==============
*/
void PartyMigrate_HandleMakeHostErrorMsg(PartyData *party, const PartyActiveClient *mainActiveClient, netadr_t *from, msg_t *msg)
{
  __int128 v8; 
  int OurClientNum; 
  int ArbitratorClientNum; 
  __int64 Bits; 
  unsigned int v12; 
  __int64 v13; 
  unsigned int v14; 
  int indexBits; 
  int addrHandleIndex; 
  const char *v17; 
  const char *v18; 
  char *fmt; 
  __int64 v20; 
  netadr_t v21[2]; 
  XUID player; 

  XUID::XUID(&player);
  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 2235, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( party->inParty )
  {
    if ( party->areWeHost )
    {
      if ( Party_IsPrivateParty(party) )
      {
        if ( Party_IsRunning(party) )
        {
          v8 = *(_OWORD *)&from->type;
          v21[0].addrHandleIndex = from->addrHandleIndex;
          *(_OWORD *)&v21[0].type = v8;
          if ( Party_FindFirstMemberAtAddr(party, v21) >= 0 )
          {
            if ( PartyMigrate_HostMigrationEnabled(party) )
            {
              if ( PartyMigrate_MigrateActive(party) )
              {
                Com_Printf(25, "[%s] Received invalid makeHostError msg - we're already migrating.\n", party->partyName);
              }
              else if ( party->migrateData.migrateToRequestedHost >= 0 )
              {
                OurClientNum = Live_GetOurClientNum(mainActiveClient->localControllerIndex, party);
                if ( OurClientNum >= 0 )
                {
                  ArbitratorClientNum = PartyMigrate_GetArbitratorClientNum(party, 0);
                  if ( ArbitratorClientNum == OurClientNum )
                  {
                    Com_Printf(25, "[%s] Received invalid makeHostError msg - we are the arbitrator.\n", party->partyName);
                  }
                  else
                  {
                    if ( party->partyMembersBits <= 0 )
                    {
                      LODWORD(v20) = party->partyMembersBits;
                      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 2292, ASSERT_TYPE_ASSERT, "( ( party->partyMembersBits > 0 ) )", "( party->partyMembersBits ) = %i", v20) )
                        __debugbreak();
                    }
                    Bits = MSG_ReadBits(msg, 2u);
                    v12 = truncate_cast<int,__int64>(Bits);
                    v13 = MSG_ReadBits(msg, party->partyMembersBits);
                    v14 = truncate_cast<int,__int64>(v13);
                    XUID::Deserialize(&player, msg);
                    indexBits = party->migrateData.indexBits;
                    if ( v12 == indexBits )
                    {
                      if ( v14 == ArbitratorClientNum )
                      {
                        if ( Party_FindMemberByXUID(party, player) == v14 )
                        {
                          LODWORD(fmt) = v14;
                          Com_Printf(25, "[%s] We got a makeHostError message from the arbitrator, displaying error message. Indexbits %i, from %i\n", party->partyName, v12, fmt);
                          Dvar_SetStringByName("OLQPNSLPRP", "@MPUI/MAKEHOSTFAILED");
                          LUI_OpenMenu(LOCAL_CLIENT_0, "makehostfailed", 1, 0, 0);
                          PartyMigrate_StopMigration(party);
                        }
                        else
                        {
                          v18 = XUID::ToDevString(&player);
                          Com_Printf(25, "[%s] Received invalid makeHostError msg - requester client num %i and xuid %s don't match our party information.\n", party->partyName, v14, v18);
                        }
                      }
                      else
                      {
                        LODWORD(fmt) = ArbitratorClientNum;
                        Com_Printf(25, "[%s] Received invalid makeHostError msg - not from the arbitrator (%i vs %i).\n", party->partyName, v14, fmt);
                      }
                    }
                    else
                    {
                      addrHandleIndex = from->addrHandleIndex;
                      *(_OWORD *)&v21[0].type = *(_OWORD *)&from->type;
                      v21[0].addrHandleIndex = addrHandleIndex;
                      v17 = NET_AdrToString(v21);
                      LODWORD(v20) = indexBits;
                      Com_Printf(25, "[%s] Received invalid makeHostError msg (index %i) from host at %s - current indexBits are %i\n", party->partyName, v12, v17, v20);
                    }
                  }
                }
                else
                {
                  Com_PrintError(25, "[%s] Received invalid makeHostError msg but we don't know our client num.\n", party->partyName);
                }
              }
              else
              {
                Com_Printf(25, "[%s] Received invalid makeHostError msg - migrateToRequestedHost is not set.\n", party->partyName);
              }
            }
            else
            {
              Com_Printf(25, "[%s] Received invalid makeHostError msg - host migration is not enabled.\n", party->partyName);
            }
          }
          else
          {
            Com_Printf(25, "[%s] Received invalid makeHostError msg from unknown client.\n", party->partyName);
          }
        }
        else
        {
          Com_PrintError(25, "[%s] Received invalid makeHostError msg - can only be done while the party is running\n", party->partyName);
        }
      }
      else
      {
        Com_PrintError(25, "[%s] Received invalid makeHostError msg - can only be done on the private party\n", party->partyName);
      }
    }
    else
    {
      Com_PrintError(25, "[%s] Received invalid makeHostError msg - we are not the host\n", party->partyName);
    }
  }
  else
  {
    Com_PrintError(25, "[%s] Received invalid makeHostError msg for a party we aren't in\n", party->partyName);
  }
}

/*
==============
PartyMigrate_HandleFindBestCommand
==============
*/
void PartyMigrate_HandleFindBestCommand(PartyData *party, const PartyActiveClient *mainActiveClient, netadr_t *from, msg_t *msg)
{
  int addrHandleIndex; 
  int v9; 
  int indexBits; 
  unsigned int v11; 
  __int128 v12; 
  const char *v13; 
  int Bit; 
  __int64 v15; 
  netadr_t v16[2]; 

  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 2428, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  addrHandleIndex = from->addrHandleIndex;
  *(_OWORD *)&v16[0].type = *(_OWORD *)&from->type;
  v16[0].addrHandleIndex = addrHandleIndex;
  if ( NET_IsLocalAddress(v16) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 2429, ASSERT_TYPE_ASSERT, "(!NET_IsLocalAddress( from ))", "%s\n\tSent a findBest message to ourself", "!NET_IsLocalAddress( from )") )
    __debugbreak();
  if ( party->areWeHost )
  {
    Com_PrintError(25, "[%s] Received a findBest message as a host\n", party->partyName);
  }
  else if ( party->inParty && NetConnection::operator==(&party->currentHost.connections[mainActiveClient->localClientNum], from) )
  {
    if ( PartyMigrate_HostMigrationEnabled(party) )
    {
      if ( PartyMigrate_MigrateActive(party) )
      {
        Com_Printf(25, "[%s] Host told us to find the best host but we're already migrating.\n", party->partyName);
      }
      else
      {
        v9 = Cmd_ArgInt(1);
        indexBits = party->migrateData.indexBits;
        v11 = v9;
        if ( v9 == indexBits )
        {
          Bit = MSG_ReadBit(msg);
          s_shouldLogHostSelection = Bit != 0;
          if ( Bit )
          {
            s_hostSelectionLoggingData.migrationID = MSG_ReadInt64(msg);
            s_hostSelectionLoggingData.cause = 0;
          }
          Com_Printf(25, "[%s] Host told us to find the best host. Index bits are %i\n", party->partyName, v11);
          PartyMigrate_StartTimeout(party);
          PartyMigrate_StartNegotiation(party, mainActiveClient);
          PartyMigrate_CheckNegotiationDisconnect(party, mainActiveClient);
        }
        else
        {
          v12 = *(_OWORD *)&from->type;
          v16[0].addrHandleIndex = from->addrHandleIndex;
          *(_OWORD *)&v16[0].type = v12;
          v13 = NET_AdrToString(v16);
          LODWORD(v15) = indexBits;
          Com_Printf(25, "[%s] Received stale findBest msg (index %i) from host at %s - current indexBits are %i\n", party->partyName, v11, v13, v15);
        }
      }
    }
    else
    {
      Com_Printf(25, "[%s] Host told us to find the best host but host migration is not enabled.\n", party->partyName);
    }
  }
  else
  {
    Com_PrintWarning(25, "[%s] Received a findBest message from someone other than the host\n", party->partyName);
  }
}

/*
==============
PartyMigrate_HandleToMsg
==============
*/
void PartyMigrate_HandleToMsg(PartyData *party, const PartyActiveClient *mainActiveClient, netadr_t *from, msg_t *msg)
{
  __int64 Bits; 
  unsigned int v9; 
  __int64 v10; 
  int v11; 
  int partyMembersBits; 
  __int64 v13; 
  __int64 v14; 
  __int64 v15; 
  int v16; 
  __int128 v17; 
  int v18; 
  const char *v19; 
  int v20; 
  const char *v21; 
  int v22; 
  const char *v23; 
  unsigned int ArbitratorClientNum; 
  __int128 v25; 
  const char *v26; 
  const char *v27; 
  const char *v28; 
  const char *MemberName; 
  __int128 v30; 
  const char *partyName; 
  const char *v32; 
  clientMigState_t LocalClientMigrationState; 
  const XUID *Xuid; 
  int addrHandleIndex; 
  const char *v36; 
  char *fmt; 
  __int64 v38; 
  netadr_t v39; 
  MigrateToRequest memberIndex; 
  XUID result; 

  XUID::XUID(&memberIndex.newHostXuid);
  XUID::XUID(&memberIndex.senderXUID);
  if ( !party->inParty )
  {
    Com_Printf(25, "[%s] Got migrateto request for a party type that we're not in (%s)\n", party->partyName, party->partyName);
    return;
  }
  if ( party->partyMembersBits <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 2552, ASSERT_TYPE_ASSERT, "( ( party->partyMembersBits > 0 ) )", "( party->partyMembersBits ) = %i", party->partyMembersBits) )
    __debugbreak();
  Bits = MSG_ReadBits(msg, 2u);
  v9 = truncate_cast<int,__int64>(Bits);
  v10 = MSG_ReadBits(msg, party->partyMembersBits);
  v11 = truncate_cast<int,__int64>(v10);
  partyMembersBits = party->partyMembersBits;
  memberIndex.sender = v11;
  v13 = MSG_ReadBits(msg, partyMembersBits);
  memberIndex.newHost = truncate_cast<int,__int64>(v13);
  v14 = MSG_ReadBits(msg, 2u);
  memberIndex.migrateFlags = truncate_cast<int,__int64>(v14);
  v15 = MSG_ReadBits(msg, 1u);
  v16 = 0;
  memberIndex.isInGameMigration = truncate_cast<int,__int64>(v15) == 1;
  XUID::Deserialize(&memberIndex.newHostXuid, msg);
  if ( msg->overflowed || msg->readcount != msg->cursize + msg->splitSize )
  {
    addrHandleIndex = from->addrHandleIndex;
    *(_OWORD *)&v39.type = *(_OWORD *)&from->type;
    v39.addrHandleIndex = addrHandleIndex;
    v36 = NET_AdrToString(&v39);
    Com_PrintError(25, "[%s] Got migrateto msg with invalid payload from %s\n", party->partyName, v36);
    return;
  }
  v17 = *(_OWORD *)&from->type;
  v39.addrHandleIndex = from->addrHandleIndex;
  *(_OWORD *)&v39.type = v17;
  if ( Party_FindFirstMemberAtAddr(party, &v39) < 0 )
  {
    v18 = from->addrHandleIndex;
    *(_OWORD *)&v39.type = *(_OWORD *)&from->type;
    v39.addrHandleIndex = v18;
    v19 = NET_AdrToString(&v39);
    Com_Printf(25, "[%s] Got migrateto msg but we don't know who it's from. They claim to be client %i from %s\n", party->partyName, (unsigned int)memberIndex.sender, v19);
    return;
  }
  if ( memberIndex.sender < 0 )
  {
    v20 = from->addrHandleIndex;
    *(_OWORD *)&v39.type = *(_OWORD *)&from->type;
    v39.addrHandleIndex = v20;
    v21 = NET_AdrToString(&v39);
    Com_PrintError(25, "[%s] Got stray migrateto msg with invalid sender client num from %s.\n", party->partyName, v21);
    return;
  }
  if ( memberIndex.isInGameMigration )
  {
    if ( Party_AreWeServer(party) )
    {
      if ( (memberIndex.migrateFlags & 1) != 0 )
      {
        Com_PrintError(25, "[%s] Received an ingame migrateTo message as a server and we're supposed to leave, or we're the new server.\n", party->partyName);
        return;
      }
    }
    else if ( !Party_PacketIsFromHost(party, (const LocalClientNum_t)mainActiveClient->localClientNum, from) )
    {
      v22 = from->addrHandleIndex;
      *(_OWORD *)&v39.type = *(_OWORD *)&from->type;
      v39.addrHandleIndex = v22;
      v23 = NET_AdrToString(&v39);
      Com_PrintWarning(25, "[%s] Received an ingame migrateto msg from someone other than the server (%s)\n", party->partyName, v23);
      return;
    }
  }
  else
  {
    ArbitratorClientNum = PartyMigrate_GetArbitratorClientNum(party, 0);
    if ( ArbitratorClientNum != memberIndex.sender )
    {
      v25 = *(_OWORD *)&from->type;
      v39.addrHandleIndex = from->addrHandleIndex;
      *(_OWORD *)&v39.type = v25;
      v26 = NET_AdrToString(&v39);
      LODWORD(v38) = memberIndex.sender;
      LODWORD(fmt) = party->migrateData.arbitratorClientNum;
      Com_PrintWarning(25, "[%s] Received a lobby migrateto msg from someone other than the arbitrator (arb %i (cached %i) != sender %i) from %s\n", party->partyName, ArbitratorClientNum, fmt, v38, v26);
      return;
    }
  }
  if ( v9 != party->migrateData.indexBits )
  {
    LODWORD(fmt) = party->migrateData.indexBits;
    Com_PrintWarning(25, "[%s] Got migrateto for old migrate index %i - current is %i\n", party->partyName, v9, fmt);
    return;
  }
  if ( memberIndex.newHost > 0xC7u )
  {
    Com_PrintError(25, "[%s] Got migrateto for invalid clientNum %i\n", party->partyName, (unsigned int)memberIndex.newHost);
    return;
  }
  if ( !Party_IsMemberIndexDataAvailable(party, memberIndex.newHost) )
  {
    Com_PrintError(25, "[%s] Got migrateto for invalid clientNum %i - there isn't an active player with that clientNum\n", party->partyName, (unsigned int)memberIndex.newHost);
    return;
  }
  if ( XUID::operator!=(&party->partyMembers[memberIndex.newHost].playerUID, &memberIndex.newHostXuid) )
  {
    v27 = XUID::ToDevString(&party->partyMembers[memberIndex.newHost].playerUID);
    v28 = XUID::ToDevString(&memberIndex.newHostXuid);
    LODWORD(v38) = memberIndex.newHost;
    Com_PrintError(25, "[%s] Got migrateto for clientNum %i, XUID %s - but clientNum %i has XUID %s\n", party->partyName, (unsigned int)memberIndex.newHost, v28, v38, v27);
    return;
  }
  MemberName = Party_GetMemberName(party, memberIndex.newHost);
  v30 = *(_OWORD *)&from->type;
  partyName = party->partyName;
  v39.addrHandleIndex = from->addrHandleIndex;
  *(_OWORD *)&v39.type = v30;
  v32 = NET_AdrToString(&v39);
  LODWORD(v38) = memberIndex.newHost;
  Com_Printf(25, "[%s] PartyMigrate - Host/arbitrator (%s) told us to migrate party %s to client %i %s\n", party->partyName, v32, partyName, v38, MemberName);
  if ( memberIndex.isInGameMigration )
  {
    if ( !Party_IsGameLobby(party) )
    {
      Com_PrintError(25, "[%s] Got migrateto request for an in-game migration that was not the game lobby\n", party->partyName);
      return;
    }
    if ( Party_IsRunning(party) )
    {
      if ( Party_IsServerRunning(party) )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 2649, ASSERT_TYPE_ASSERT, "(!Party_IsServerRunning( party ))", "%s\n\tLobby is running at the same time as the server", "!Party_IsServerRunning( party )") )
          __debugbreak();
      }
      Com_PrintError(25, "[%s] Got migrateto request for an in-game migration but the lobby is running\n", party->partyName);
      return;
    }
  }
  else if ( !Lobby_IsInRunningLobby() && !Party_IsInGameLobbyMigrationAllowed(party) )
  {
    Com_PrintError(25, "[%s] Got migrateto request for an out-of-game migration that was not for a private party, and we are not in a running lobby.\n", party->partyName);
    return;
  }
  if ( memberIndex.isInGameMigration )
  {
    if ( CL_GetLocalClientMigrationState((const LocalClientNum_t)mainActiveClient->localClientNum) != CMSTATE_OLDHOSTLEAVING )
    {
      LocalClientMigrationState = CL_GetLocalClientMigrationState((const LocalClientNum_t)mainActiveClient->localClientNum);
      Com_Printf(25, "[%s] Received migrateto message.  Wrong migration state %i.\n", party->partyName, (unsigned int)LocalClientMigrationState);
      return;
    }
    do
    {
      if ( CL_IsLocalClientActive((LocalClientNum_t)v16) )
      {
        Migration_SendMigrateToAck((const LocalClientNum_t)v16);
        CL_SetVerboseMigrationState((const LocalClientNum_t)v16, MVSTATE_MIGRATING, memberIndex.newHost, 0);
      }
      ++v16;
    }
    while ( v16 < 2 );
  }
  Xuid = Party_GetXuid(&result, party, memberIndex.sender);
  XUID::operator=(&memberIndex.senderXUID, Xuid);
  PartyMigrate_ExecMigrateToRequest(party, mainActiveClient, &memberIndex);
}

/*
==============
PartyMigrate_HandleNoMigrateMsg
==============
*/
void PartyMigrate_HandleNoMigrateMsg(PartyData *party, const PartyActiveClient *mainActiveClient, netadr_t *from, msg_t *msg)
{
  unsigned int v6; 
  int fmt; 

  v6 = Cmd_ArgInt(1);
  if ( Party_InParty(party) )
  {
    if ( PartyMigrate_MigrateActive(party) )
    {
      if ( v6 == party->migrateData.indexBits )
      {
        if ( PartyMigrate_IsGameServerHostMigration(party) )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 2818, ASSERT_TYPE_ASSERT, "(!PartyMigrate_IsGameServerHostMigration( party ))", (const char *)&queryFormat, "!PartyMigrate_IsGameServerHostMigration( party )") )
            __debugbreak();
        }
        Com_Printf(25, "[%s] Got nomigrate message. Canceling migration.\n", party->partyName);
        PartyMigrate_CancelMigration(party, mainActiveClient);
      }
      else
      {
        fmt = party->migrateData.indexBits;
        Com_PrintError(25, "[%s] Got nomigrate for old migrate index %i - current is %i\n", party->partyName, v6, fmt);
      }
    }
    else
    {
      Com_DPrintf(25, "[%s] Got stray nomigrate msg, not currently migrating.\n", party->partyName);
    }
  }
  else
  {
    Com_PrintError(25, "[%s] Got stray nomigrate msg\n", party->partyName);
  }
}

/*
==============
PartyMigrate_HandleSessionInfoMsg
==============
*/
void PartyMigrate_HandleSessionInfoMsg(PartyData *party, const PartyActiveClient *mainActiveClient, netadr_t *from, msg_t *msg)
{
  int addrHandleIndex; 
  int partyMembersBits; 
  __int64 Bits; 
  int Byte; 
  __int64 v12; 
  int v13; 
  int v14; 
  __int64 v15; 
  __int64 v16; 
  MigrationHostInfo newHostInfo; 

  XUID::XUID(&newHostInfo.xuid);
  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 2829, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( party->inParty )
  {
    if ( party->partyMembersBits <= 0 )
    {
      LODWORD(v16) = party->partyMembersBits;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 2837, ASSERT_TYPE_ASSERT, "( ( party->partyMembersBits > 0 ) )", "( party->partyMembersBits ) = %i", v16) )
        __debugbreak();
    }
    addrHandleIndex = from->addrHandleIndex;
    partyMembersBits = party->partyMembersBits;
    *(_OWORD *)&newHostInfo.netAddr.type = *(_OWORD *)&from->type;
    newHostInfo.netAddr.addrHandleIndex = addrHandleIndex;
    Bits = MSG_ReadBits(msg, partyMembersBits);
    newHostInfo.clientNum = truncate_cast<int,__int64>(Bits);
    MSG_ReadData(msg, 8, &newHostInfo.xuid, 8);
    Byte = MSG_ReadByte(msg);
    newHostInfo.inGameMigration = Byte == 1;
    if ( Byte == 1 )
    {
      newHostInfo.migrationBits = 0;
      newHostInfo.claimedArbitratorNum = -1;
    }
    else
    {
      v12 = MSG_ReadBits(msg, 2u);
      v13 = truncate_cast<int,__int64>(v12);
      v14 = party->partyMembersBits;
      newHostInfo.migrationBits = v13;
      v15 = MSG_ReadBits(msg, v14);
      newHostInfo.claimedArbitratorNum = truncate_cast<int,__int64>(v15);
    }
    if ( msg->overflowed )
      Com_Printf(25, "[%s] PartyMigrate - Ignoring badly formatted sessInfo message\n", party->partyName);
    else
      PartyMigrate_MigrateToNewSession(party, mainActiveClient, &newHostInfo, 0);
  }
  else
  {
    Com_Printf(25, "[%s] PartyMigrate - Received session info but we don't have a party to migrate.\n", party->partyName);
  }
}

/*
==============
PartyMigrate_HandlePingMsg
==============
*/
void PartyMigrate_HandlePingMsg(PartyData *party, const PartyActiveClient *mainActiveClient, netadr_t *from, msg_t *msg)
{
  int addrHandleIndex; 
  unsigned int v8; 
  netsrc_t LocalNetIDFromLocalClientNum; 
  const dvar_t *v10; 
  netsrc_t v11; 
  int v12; 
  const char *v13; 
  const char *v14; 
  int v15; 
  char *fmt; 
  netadr_t v17; 

  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 1103, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  addrHandleIndex = from->addrHandleIndex;
  *(_OWORD *)&v17.type = *(_OWORD *)&from->type;
  v17.addrHandleIndex = addrHandleIndex;
  if ( NET_IsLocalAddress(&v17) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 1106, ASSERT_TYPE_ASSERT, "(!NET_IsLocalAddress( from ))", (const char *)&queryFormat, "!NET_IsLocalAddress( from )") )
    __debugbreak();
  if ( PartyMigrate_HostMigrationEnabled(party) )
  {
    if ( PartyMigrate_IsPingTestActive(party) )
    {
      v8 = Cmd_ArgInt(1);
      LocalNetIDFromLocalClientNum = NET_GetLocalNetIDFromLocalClientNum((const LocalClientNum_t)mainActiveClient->localClientNum);
      v10 = DVARBOOL_partymigrate_pingtest_debug;
      v11 = LocalNetIDFromLocalClientNum;
      if ( !DVARBOOL_partymigrate_pingtest_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "partymigrate_pingtest_debug") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v10);
      if ( v10->current.enabled )
      {
        v12 = from->addrHandleIndex;
        *(_OWORD *)&v17.type = *(_OWORD *)&from->type;
        v17.addrHandleIndex = v12;
        v13 = NET_AdrToString(&v17);
        LODWORD(fmt) = v8;
        Com_Printf(25, "[%s] PartyMigrate - HandlePingMsg - From %s, time %i.\n", party->partyName, v13, fmt);
      }
      v14 = j_va("%impck %i", (unsigned int)party->partyId, v8);
      v15 = NET_OutOfBandPrint(v11, from, v14);
      if ( v15 < 0 )
        Com_Printf(25, "[%s] Got %d while trying respond to ping msg.\n", party->partyName, (unsigned int)v15);
    }
    else
    {
      Com_Printf(25, "[%s] Received stray party ping msg (ping test is not enabled).\n", party->partyName);
    }
  }
  else
  {
    Com_Printf(25, "[%s] Received stray party ping msg (host migration is not enabled).\n", party->partyName);
  }
}

/*
==============
PartyMigrate_HandlePingAckMsg
==============
*/
void PartyMigrate_HandlePingAckMsg(PartyData *party, const PartyActiveClient *mainActiveClient, netadr_t *from, msg_t *msg)
{
  int addrHandleIndex; 
  __int128 v7; 
  unsigned int FirstMemberAtAddr; 
  unsigned int v9; 
  int v10; 
  int v11; 
  const char *MemberName; 
  unsigned int SplitscreenClientNumAtSameAddress; 
  const char *v14; 
  __int64 v15; 
  __int64 v16; 
  __int64 v17; 
  netadr_t v18; 

  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 1171, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  addrHandleIndex = from->addrHandleIndex;
  *(_OWORD *)&v18.type = *(_OWORD *)&from->type;
  v18.addrHandleIndex = addrHandleIndex;
  if ( NET_IsLocalAddress(&v18) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 1174, ASSERT_TYPE_ASSERT, "(!NET_IsLocalAddress( from ))", (const char *)&queryFormat, "!NET_IsLocalAddress( from )") )
    __debugbreak();
  if ( PartyMigrate_HostMigrationEnabled(party) )
  {
    if ( PartyMigrate_MigrateActive(party) )
    {
      if ( PartyMigrate_IsPingTestActive(party) )
      {
        v7 = *(_OWORD *)&from->type;
        v18.addrHandleIndex = from->addrHandleIndex;
        *(_OWORD *)&v18.type = v7;
        FirstMemberAtAddr = Party_FindFirstMemberAtAddr(party, &v18);
        v9 = FirstMemberAtAddr;
        if ( FirstMemberAtAddr > 0xC7 )
        {
          Com_Printf(25, "[%s] Received party ping ack msg from unknown clientnum %i.\n", party->partyName, FirstMemberAtAddr);
        }
        else
        {
          v10 = Cmd_ArgInt(1);
          v11 = Sys_Milliseconds() - v10;
          if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_partymigrate_pingtest_debug, "partymigrate_pingtest_debug") )
          {
            MemberName = Party_GetMemberName(party, v9);
            LODWORD(v15) = v10;
            Com_Printf(25, "[%s] PartyMigrate - HandlePingAckMsg - Got ping from member %i (%s), sendtime %i, ping %i.\n", party->partyName, v9, MemberName, v15, v11);
          }
          if ( v11 < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 1211, ASSERT_TYPE_ASSERT, "( ping ) >= ( 0 )", "%s >= %s\n\t%i, %i", "ping", "0", v11, 0i64) )
            __debugbreak();
          if ( v11 > 60000 )
          {
            LODWORD(v17) = 60000;
            LODWORD(v16) = v11;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 1212, ASSERT_TYPE_ASSERT, "( ping ) <= ( 60*1000 )", "%s <= %s\n\t%i, %i", "ping", "60*1000", v16, v17) )
              __debugbreak();
          }
          if ( v11 >= 0 )
          {
            PartyMigrate_UpdatePingForMember(party, v9, v11);
            SplitscreenClientNumAtSameAddress = Party_GetSplitscreenClientNumAtSameAddress(party, v9);
            if ( SplitscreenClientNumAtSameAddress != -1 )
            {
              if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_partymigrate_pingtest_debug, "partymigrate_pingtest_debug") )
              {
                v14 = Party_GetMemberName(party, SplitscreenClientNumAtSameAddress);
                Com_Printf(25, "[%s] PartyMigrate - HandlePingAckMsg - Other member at address, setting for for client %i (%s).\n", party->partyName, SplitscreenClientNumAtSameAddress, v14);
              }
              PartyMigrate_UpdatePingForMember(party, SplitscreenClientNumAtSameAddress, v11);
            }
          }
        }
      }
      else
      {
        Com_Printf(25, "[%s] Received stray party ping ack msg (ping test is not enabled).\n", party->partyName);
      }
    }
    else
    {
      Com_Printf(25, "[%s] Received stray party ping ack msg (host migration is not active).\n", party->partyName);
    }
  }
  else
  {
    Com_Printf(25, "[%s] Received stray party ping ack msg (host migration is not enabled).\n", party->partyName);
  }
}

/*
==============
PartyMigrate_AbortMakeHost
==============
*/
void PartyMigrate_AbortMakeHost(PartyData *party)
{
  if ( party->migrateData.migrateToRequestedHost >= 0 )
  {
    party->migrateData.migrateActive = 0;
    PartyMigrate_ClearInternalData(party);
  }
}

/*
==============
PartyMigrate_AnnounceOurNominee
==============
*/
void PartyMigrate_AnnounceOurNominee(PartyData *party, const PartyActiveClient *mainActiveClient, const int mainClientNum)
{
  __int64 v3; 
  unsigned int ArbitratorClientNum; 
  unsigned int v7; 
  bool HasLoopbackAddr; 
  const char *v9; 
  int OurClientNum; 
  __int64 nominee; 
  __int64 v12; 
  int v13; 
  int v14; 
  __int64 v15; 
  __int64 v16; 
  __int64 v17; 
  __int64 v18; 
  PartyActiveClient outPartyActiveClient; 

  v3 = mainClientNum;
  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 507, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( !mainActiveClient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 508, ASSERT_TYPE_ASSERT, "(mainActiveClient)", (const char *)&queryFormat, "mainActiveClient") )
    __debugbreak();
  if ( !party->migrateData.decidedOurNominee && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 509, ASSERT_TYPE_ASSERT, "(party->migrateData.decidedOurNominee)", (const char *)&queryFormat, "party->migrateData.decidedOurNominee") )
    __debugbreak();
  if ( !PartyMigrate_MigrateActive(party) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 510, ASSERT_TYPE_ASSERT, "(PartyMigrate_MigrateActive( party ))", (const char *)&queryFormat, "PartyMigrate_MigrateActive( party )") )
    __debugbreak();
  if ( PartyMigrate_IsGameServerHostMigration(party) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 511, ASSERT_TYPE_ASSERT, "(!PartyMigrate_IsGameServerHostMigration( party ))", (const char *)&queryFormat, "!PartyMigrate_IsGameServerHostMigration( party )") )
    __debugbreak();
  ArbitratorClientNum = PartyMigrate_GetArbitratorClientNum(party, 1);
  v7 = ArbitratorClientNum;
  if ( ArbitratorClientNum >= 0xC8 )
  {
    LODWORD(v15) = ArbitratorClientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 514, ASSERT_TYPE_ASSERT, "(unsigned)( arbitratorClientNum ) < (unsigned)( 200 )", "arbitratorClientNum doesn't index MAX_PARTY_MEMBERS\n\t%i not in [0, %i)", v15, 200) )
      __debugbreak();
  }
  if ( Party_IsMemberRegistered(party, v7) )
  {
    if ( (_DWORD)v3 == v7 || (HasLoopbackAddr = Party_MemberHasLoopbackAddr(party, v7)) )
      HasLoopbackAddr = 1;
    party->migrateData.weAreArbitrating = HasLoopbackAddr;
    if ( HasLoopbackAddr )
      v9 = j_va("We '%s' are", party->partyMembers[(int)v3].info.gamertag);
    else
      v9 = j_va("Client '%s' is", party->partyMembers[v7].info.gamertag);
    Com_Printf(25, "[%s] %s arbitrating\n", party->partyName, v9);
    if ( party->migrateData.weAreArbitrating )
    {
      if ( (unsigned int)v3 >= 0xC8 )
      {
        LODWORD(v16) = 200;
        LODWORD(v15) = v3;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 532, ASSERT_TYPE_ASSERT, "(unsigned)( mainClientNum ) < (unsigned)( 200 )", "mainClientNum doesn't index MAX_PARTY_MEMBERS\n\t%i not in [0, %i)", v15, v16) )
          __debugbreak();
      }
      party->partyMembers[v3].migrateHeardFrom = 1;
      if ( Party_GetSecondaryActiveClient(party, &outPartyActiveClient) )
      {
        OurClientNum = Live_GetOurClientNum(outPartyActiveClient.localControllerIndex, party);
        if ( OurClientNum < 0 )
          Com_PrintError(25, "[%s] PartyMigrate - AnnounceOurNominee - Second client with controller %i is not in the session!\n", party->partyName, (unsigned int)outPartyActiveClient.localControllerIndex);
        else
          party->partyMembers[OurClientNum].migrateHeardFrom = 1;
      }
      nominee = party->migrateData.bestHost.nominee;
      if ( (int)nominee >= 0 )
      {
        if ( (_DWORD)nominee != (_DWORD)v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 549, ASSERT_TYPE_ASSERT, "(ourNominee == mainClientNum)", (const char *)&queryFormat, "ourNominee == mainClientNum") )
          __debugbreak();
        v12 = nominee;
        party->partyMembers[v12].migrateNominated = 1;
        party->partyMembers[v12].migrateNomineeInfo = party->migrateData.bestHost.info;
      }
    }
    else
    {
      if ( v7 == (_DWORD)v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 556, ASSERT_TYPE_ASSERT, "( arbitratorClientNum ) != ( mainClientNum )", "%s != %s\n\t%i, %i", "arbitratorClientNum", "mainClientNum", v7, v3) )
        __debugbreak();
      PartyMigrate_SendOurNominee(party, mainActiveClient, v3, v7);
      if ( Party_GetSecondaryActiveClient(party, &outPartyActiveClient) )
      {
        v13 = Live_GetOurClientNum(outPartyActiveClient.localControllerIndex, party);
        v14 = v13;
        if ( v13 < 0 )
        {
          Com_PrintError(25, "[%s] PartyMigrate - AnnounceOurNominee - Second client with controller %i is not in the session!\n", party->partyName, (unsigned int)outPartyActiveClient.localControllerIndex);
        }
        else
        {
          if ( v7 == v13 )
          {
            LODWORD(v18) = v13;
            LODWORD(v17) = v7;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 566, ASSERT_TYPE_ASSERT, "( arbitratorClientNum ) != ( secondaryClientNum )", "%s != %s\n\t%i, %i", "arbitratorClientNum", "secondaryClientNum", v17, v18) )
              __debugbreak();
          }
          PartyMigrate_SendOurNominee(party, &outPartyActiveClient, v14, v7);
        }
      }
    }
  }
  else
  {
    if ( (_DWORD)v3 == v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 519, ASSERT_TYPE_ASSERT, "( mainClientNum ) != ( arbitratorClientNum )", "%s != %s\n\t%i, %i", "mainClientNum", "arbitratorClientNum", v3, v7) )
      __debugbreak();
    Com_PrintError(25, "[%s] PartyMigrate - AnnounceOurNominee - Arbitrator client %i is not registered to the session. Cannot announce nominee. The migration will time out...\n", party->partyName, v7);
    party->migrateData.weAreArbitrating = 0;
  }
}

/*
==============
PartyMigrate_AskArbitratorToChangeHost
==============
*/
void PartyMigrate_AskArbitratorToChangeHost(PartyData *party, const int newHostClientNum, const XUID newHostXuid)
{
  __int64 v3; 
  __int64 migrateToRequestedHost; 
  unsigned int ArbitratorClientNum; 
  NetConnection *MemberConnection; 
  const char *String; 
  const char *MemberName; 
  XUID *Xuid; 
  const char *v11; 
  const char *v12; 
  __int64 v13; 
  XUID result; 
  msg_t buf; 
  unsigned __int8 data[64]; 
  XUID player; 

  player.m_id = newHostXuid.m_id;
  v3 = newHostClientNum;
  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 2363, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( !party->inParty && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 2364, ASSERT_TYPE_ASSERT, "(party->inParty)", (const char *)&queryFormat, "party->inParty") )
    __debugbreak();
  if ( !Party_AreWeHost(party) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 2365, ASSERT_TYPE_ASSERT, "(Party_AreWeHost( party ))", (const char *)&queryFormat, "Party_AreWeHost( party )") )
    __debugbreak();
  if ( PartyMigrate_MigrateActive(party) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 2366, ASSERT_TYPE_ASSERT, "(!PartyMigrate_MigrateActive( party ))", (const char *)&queryFormat, "!PartyMigrate_MigrateActive( party )") )
    __debugbreak();
  if ( (unsigned int)v3 >= 0xC8 )
  {
    LODWORD(v13) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 2367, ASSERT_TYPE_ASSERT, "(unsigned)( newHostClientNum ) < (unsigned)( 200 )", "newHostClientNum doesn't index MAX_PARTY_MEMBERS\n\t%i not in [0, %i)", v13, 200) )
      __debugbreak();
  }
  if ( !XUID::IsValid(&player) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 2368, ASSERT_TYPE_ASSERT, "(newHostXuid.IsValid())", (const char *)&queryFormat, "newHostXuid.IsValid()") )
    __debugbreak();
  if ( party->partyMembersBits <= 0 )
  {
    LODWORD(v13) = party->partyMembersBits;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 2369, ASSERT_TYPE_ASSERT, "( ( party->partyMembersBits > 0 ) )", "( party->partyMembersBits ) = %i", v13) )
      __debugbreak();
  }
  migrateToRequestedHost = (unsigned int)party->migrateData.migrateToRequestedHost;
  if ( (int)migrateToRequestedHost < 0 )
  {
    ArbitratorClientNum = PartyMigrate_GetArbitratorClientNum(party, 1);
    if ( !Party_IsMemberRegistered(party, ArbitratorClientNum) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 2384, ASSERT_TYPE_ASSERT, "(Party_IsMemberRegistered( party, arbitratorNum ))", "%s\n\tStatus is valid for migration, but not registered", "Party_IsMemberRegistered( party, arbitratorNum )") )
      __debugbreak();
    MemberConnection = (NetConnection *)Party_GetMemberConnection(party, ArbitratorClientNum);
    if ( NetConnection::IsLocal(MemberConnection) )
    {
      Com_Printf(14, "[%s] PartyMigrate - AskArbitratorToChangeHost - Arbitrator at index %i is a local client, won't be able to proceed.\n", party->partyName, ArbitratorClientNum);
      Dvar_SetStringByName("OLQPNSLPRP", "@MPUI/MAKEHOSTFAILED");
      LUI_OpenMenu(LOCAL_CLIENT_0, "makehostfailed", 1, 0, 0);
    }
    else
    {
      String = NetConnection::GetString(MemberConnection);
      MemberName = Party_GetMemberName(party, ArbitratorClientNum);
      Xuid = Party_GetXuid(&result, party, ArbitratorClientNum);
      v11 = XUID::ToDevString(Xuid);
      Com_Printf(14, "[%s] PartyMigrate - AskArbitratorToChangeHost - Asking arbitrator client %i (%s, %s) at %s to change the host\n", party->partyName, ArbitratorClientNum, v11, MemberName, String);
      MSG_Init(&buf, data, 64);
      v12 = j_va("%imakehost", (unsigned int)party->partyId);
      MSG_WriteString(&buf, v12);
      MSG_WriteBits(&buf, party->migrateData.indexBits, 2u);
      MSG_WriteBits(&buf, v3, party->partyMembersBits);
      XUID::Serialize(&player, &buf);
      if ( buf.overflowed )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 2404, ASSERT_TYPE_ASSERT, "(!MSG_IsOverflowed( &msg ))", (const char *)&queryFormat, "!MSG_IsOverflowed( &msg )") )
          __debugbreak();
      }
      NetConnection::SendReliable(MemberConnection, &buf);
      PartyMigrate_StartMakeHostTimeout(party);
      party->migrateData.migrateToRequestedHost = Party_FindMemberByXUID(party, player);
    }
  }
  else
  {
    Com_PrintWarning(14, "[%s] PartyMigrate - AskArbitratorToChangeHost - Can't ask to change host, we are already trying to change to %i\n", party->partyName, migrateToRequestedHost);
  }
}

/*
==============
PartyMigrate_AskForPredeterminedHostNominee
==============
*/
void PartyMigrate_AskForPredeterminedHostNominee(PartyData *party, const int hostMemberIndex, const PartyActiveClient *mainActiveClient)
{
  __int64 v4; 
  __int64 OurClientNum; 
  const XUID *Xuid; 
  bool IsPrivateDSMatch; 
  bool v9; 
  int v10; 
  const dvar_t *v11; 
  const char *v12; 
  __int64 voiceData; 
  XUID v14; 
  msg_t buf; 
  XUID result; 
  unsigned __int8 data[64]; 

  v4 = hostMemberIndex;
  XUID::XUID(&v14);
  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 1930, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( !mainActiveClient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 1931, ASSERT_TYPE_ASSERT, "(mainActiveClient)", (const char *)&queryFormat, "mainActiveClient") )
    __debugbreak();
  if ( !party->inParty && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 1932, ASSERT_TYPE_ASSERT, "(party->inParty)", (const char *)&queryFormat, "party->inParty") )
    __debugbreak();
  if ( !PartyMigrate_MigrateActive(party) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 1933, ASSERT_TYPE_ASSERT, "(PartyMigrate_MigrateActive( party ))", (const char *)&queryFormat, "PartyMigrate_MigrateActive( party )") )
    __debugbreak();
  if ( (unsigned int)v4 >= 0xC8 )
  {
    LODWORD(voiceData) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 1934, ASSERT_TYPE_ASSERT, "(unsigned)( hostMemberIndex ) < (unsigned)( 200 )", "hostMemberIndex doesn't index MAX_PARTY_MEMBERS\n\t%i not in [0, %i)", voiceData, 200) )
      __debugbreak();
  }
  if ( Party_MemberHasHostAddress(party, v4) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 1935, ASSERT_TYPE_ASSERT, "(!Party_MemberHasHostAddress( party, hostMemberIndex ))", (const char *)&queryFormat, "!Party_MemberHasHostAddress( party, hostMemberIndex )") )
    __debugbreak();
  if ( party->partyMembersBits <= 0 )
  {
    LODWORD(voiceData) = party->partyMembersBits;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 1936, ASSERT_TYPE_ASSERT, "( ( party->partyMembersBits > 0 ) )", "( party->partyMembersBits ) = %i", voiceData) )
      __debugbreak();
  }
  OurClientNum = Live_GetOurClientNum(mainActiveClient->localControllerIndex, party);
  Xuid = Live_GetXuid(&result, mainActiveClient->localControllerIndex);
  XUID::operator=(&v14, Xuid);
  IsPrivateDSMatch = Party_IsPrivateDSMatch(party);
  v9 = IsPrivateDSMatch;
  if ( (_DWORD)OurClientNum != (_DWORD)v4 || IsPrivateDSMatch )
  {
    if ( !Party_IsMemberLocalPlayer(party, v4) || v9 )
    {
      v10 = Sys_Milliseconds();
      if ( party->migrateData.bestHost.lastSentTo <= 0 )
        goto LABEL_35;
      v11 = DVARINT_partymigrate_broadcast_interval;
      if ( !DVARINT_partymigrate_broadcast_interval && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "partymigrate_broadcast_interval") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v11);
      if ( v10 - party->migrateData.bestHost.lastSentTo >= v11->current.integer )
      {
LABEL_35:
        party->migrateData.bestHost.lastSentTo = v10;
        MSG_Init(&buf, data, 64);
        v12 = j_va("%imakehosttest", (unsigned int)party->partyId);
        MSG_WriteString(&buf, v12);
        MSG_WriteBits(&buf, party->migrateData.indexBits, 2u);
        MSG_WriteBits(&buf, v4, party->partyMembersBits);
        MSG_WriteBits(&buf, OurClientNum, party->partyMembersBits);
        XUID::Serialize(&v14, &buf);
        if ( buf.overflowed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 1971, ASSERT_TYPE_ASSERT, "(!MSG_IsOverflowed( &msg ))", (const char *)&queryFormat, "!MSG_IsOverflowed( &msg )") )
          __debugbreak();
        PeerMesh_Send(party, (const LocalClientNum_t)mainActiveClient->localClientNum, v4, buf.data, buf.cursize, 0, 1);
        PeerMesh_Send(party, (const LocalClientNum_t)mainActiveClient->localClientNum, v4, buf.data, buf.cursize, 0, 1);
      }
    }
    else
    {
      Com_PrintError(25, "[%s] PartyMigrate - AskForPredeterminedHostNominee - Could not migrate, requested host is another local splitscreen client\n", party->partyName);
      PartyMigrate_SendMakeHostError(party, mainActiveClient, v4);
      PartyMigrate_StopMigration(party);
    }
  }
  else
  {
    PartyMigrate_SelectOurNominee(party, mainActiveClient);
    if ( party->migrateData.decidedOurNominee == v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 1945, ASSERT_TYPE_ASSERT, "(party->migrateData.decidedOurNominee)", (const char *)&queryFormat, "party->migrateData.decidedOurNominee") )
      __debugbreak();
  }
}

/*
==============
PartyMigrate_BroadcastNewSessionInfo
==============
*/
void PartyMigrate_BroadcastNewSessionInfo(PartyData *party, const PartyActiveClient *mainActiveClient, const int ourClientNum, const int migrationBits, const int arbitratorNum, const int oldHost)
{
  __int64 v7; 
  __int64 v8; 
  const XUID *Xuid; 
  const char *v11; 
  bool v12; 
  const char *v13; 
  XUID *p_playerUID; 
  int i; 
  NetConnection *MemberConnection; 
  const char *String; 
  char *fmt; 
  __int64 v19; 
  __int64 v20; 
  XUID v21; 
  XUID result; 
  msg_t buf; 
  unsigned __int8 data[512]; 

  v7 = migrationBits;
  v8 = ourClientNum;
  XUID::XUID(&v21);
  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 3188, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( !mainActiveClient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 3189, ASSERT_TYPE_ASSERT, "(mainActiveClient)", (const char *)&queryFormat, "mainActiveClient") )
    __debugbreak();
  if ( !party->session && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 3190, ASSERT_TYPE_ASSERT, "(party->session)", (const char *)&queryFormat, "party->session") )
    __debugbreak();
  if ( (unsigned int)v8 >= 0xC8 )
  {
    LODWORD(v19) = v8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 3191, ASSERT_TYPE_ASSERT, "(unsigned)( ourClientNum ) < (unsigned)( 200 )", "ourClientNum doesn't index MAX_PARTY_MEMBERS\n\t%i not in [0, %i)", v19, 200) )
      __debugbreak();
  }
  Xuid = Live_GetXuid(&result, mainActiveClient->localControllerIndex);
  XUID::operator=(&v21, Xuid);
  v11 = XUID::ToDevString(&v21);
  LODWORD(fmt) = mainActiveClient->localControllerIndex;
  Com_Printf(25, "[%s] PartyMigrate - BroadcastNewSessionInfo (We are client %i, controller %i, xuid %s)\n", party->partyName, (unsigned int)v8, fmt, v11);
  MSG_Init(&buf, data, 512);
  v12 = party->areWeHost == 0;
  result.m_id = v21.m_id;
  if ( v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 3158, ASSERT_TYPE_ASSERT, "(party->areWeHost)", (const char *)&queryFormat, "party->areWeHost") )
    __debugbreak();
  if ( party->partyMembersBits <= 0 )
  {
    LODWORD(v20) = party->partyMembersBits;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 3159, ASSERT_TYPE_ASSERT, "( ( party->partyMembersBits > 0 ) )", "( party->partyMembersBits ) = %i", v20) )
      __debugbreak();
  }
  v13 = j_va("%isessinfo", (unsigned int)party->partyId);
  MSG_WriteString(&buf, v13);
  MSG_WriteBits(&buf, v8, party->partyMembersBits);
  XUID::Serialize(&result, &buf);
  if ( PartyMigrate_IsGameServerHostMigration(party) )
  {
    MSG_WriteByte(&buf, 1i64);
  }
  else
  {
    MSG_WriteByte(&buf, 0i64);
    MSG_WriteBits(&buf, v7, 2u);
    MSG_WriteBits(&buf, arbitratorNum, party->partyMembersBits);
  }
  if ( buf.overflowed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 3177, ASSERT_TYPE_ASSERT, "(!MSG_IsOverflowed( msg ))", (const char *)&queryFormat, "!MSG_IsOverflowed( msg )") )
    __debugbreak();
  p_playerUID = &party->partyMembers[0].playerUID;
  for ( i = 0; i < 200; ++i )
  {
    if ( Party_IsMemberIndexDataAvailable(party, i) && Party_IsMemberRegistered(party, i) && !Live_XUIDIsLocalPlayer((const XUID)p_playerUID->m_id) && (oldHost == -1 || !Party_CompareMemberAddrs(party, oldHost, i) || (g_migrateFlags & 1) == 0) )
    {
      MemberConnection = (NetConnection *)Party_GetMemberConnection(party, i);
      NetConnection::SendReliable(MemberConnection, &buf);
      String = NetConnection::GetString(MemberConnection);
      Com_Printf(25, "Sending new sessioninfo to member %i (%s)\n", (unsigned int)i, String);
    }
    p_playerUID += 63;
  }
  RMsg_SendMessages();
}

/*
==============
PartyMigrate_CanWeConnectToAllClients
==============
*/
_BOOL8 PartyMigrate_CanWeConnectToAllClients(const PartyData *party, int localControllerIndex)
{
  int OurClientNum; 

  OurClientNum = Live_GetOurClientNum(localControllerIndex, party);
  return OurClientNum >= 0 && PartyMigrate_GetClientConnectivity(party, OurClientNum) == -1;
}

/*
==============
PartyMigrate_CanWeHostLobby
==============
*/
bool PartyMigrate_CanWeHostLobby(const PartyData *party, int localControllerIndex, bool requireTalkToAllClients)
{
  int NumGameSlots; 
  int OurClientNum; 
  bool result; 
  PartyActiveClient outPartyActiveClient; 

  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 764, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( !Party_IsGameLobby(party) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 765, ASSERT_TYPE_ASSERT, "(Party_IsGameLobby( party ))", (const char *)&queryFormat, "Party_IsGameLobby( party )") )
    __debugbreak();
  NumGameSlots = Party_GetNumGameSlots(party);
  result = 0;
  if ( !Party_GetSecondaryActiveClient(party, &outPartyActiveClient) || outPartyActiveClient.localControllerIndex != localControllerIndex )
  {
    if ( NumGameSlots )
    {
      if ( Online_CanHostServer(NumGameSlots) )
      {
        OurClientNum = Live_GetOurClientNum(localControllerIndex, party);
        if ( OurClientNum >= 0 && party->partyMembers[OurClientNum].status && (!requireTalkToAllClients || PartyMigrate_CanWeConnectToAllClients(party, localControllerIndex)) )
          return 1;
      }
    }
  }
  return result;
}

/*
==============
PartyMigrate_CancelMigration
==============
*/
void PartyMigrate_CancelMigration(PartyData *party, const PartyActiveClient *mainActiveClient)
{
  int v4; 

  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 2778, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( PartyMigrate_IsGameServerHostMigration(party) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 2780, ASSERT_TYPE_ASSERT, "(!PartyMigrate_IsGameServerHostMigration( party ))", (const char *)&queryFormat, "!PartyMigrate_IsGameServerHostMigration( party )") )
    __debugbreak();
  if ( !PartyMigrate_MigrateActive(party) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 2781, ASSERT_TYPE_ASSERT, "(PartyMigrate_MigrateActive( party ))", (const char *)&queryFormat, "PartyMigrate_MigrateActive( party )") )
    __debugbreak();
  party->migrateData.migrateActive = 0;
  PartyMigrate_ClearInternalData(party);
  v4 = Party_HostNum(party);
  if ( !Party_IsMemberRegistered(party, v4) || !Party_IsMemberPresent(party, v4) && (!Party_IsPrivateParty(party) || !Party_IsMemberIndexCommitted(party, v4)) )
  {
    Com_Printf(25, "[%s] PartyMigrate - CancelMigrate - Migration failed, and host is gone, handling the error.\n", party->partyName);
    PartyMigrate_HandleMigrationFailure(party, mainActiveClient->localControllerIndex);
  }
}

/*
==============
PartyMigrate_CheckBeforeContinuingToHost
==============
*/
void PartyMigrate_CheckBeforeContinuingToHost(PartyData *party, const PartyActiveClient *mainActiveClient)
{
  int ShouldWeHostPrivateParty; 
  int NumGameSlots; 
  const char *partyName; 
  __int64 v7; 

  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 3128, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( !mainActiveClient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 3129, ASSERT_TYPE_ASSERT, "(mainActiveClient)", (const char *)&queryFormat, "mainActiveClient") )
    __debugbreak();
  if ( party->areWeHost )
  {
    if ( Party_IsPrivateParty(party) )
    {
      ShouldWeHostPrivateParty = PartyMigrate_ShouldWeHostPrivateParty(party, mainActiveClient, 0);
    }
    else
    {
      NumGameSlots = Party_GetNumGameSlots(party);
      ShouldWeHostPrivateParty = Party_CanHostServer(party, NumGameSlots);
    }
    partyName = party->partyName;
    if ( ShouldWeHostPrivateParty )
    {
      Com_Printf(25, "[%s] We can continue to host. migration index bits going from %i", partyName, (unsigned int)party->migrateData.indexBits);
      v7 = (party->migrateData.indexBits + 1) & 0x80000003;
      if ( party->migrateData.indexBits + 1 < 0 )
        v7 = ((unsigned __int8)(((LOBYTE(party->migrateData.indexBits) + 1) & 3) - 1) | 0xFFFFFFFC) + 1;
      party->migrateData.indexBits = v7;
      Com_Printf(25, " to %i\n", v7);
      Com_Printf(15, "[%s] Gamestate changing due to us deciding to keep hosting\n", party->partyName);
      PartyHost_GamestateChanged(party);
    }
    else
    {
      Com_Printf(25, "[%s] CheckBeforeContinuingToHost failed, could not migrate hosts. Stopping related party.\n", partyName);
      PartyMigrate_HandleMigrationFailure(party, mainActiveClient->localControllerIndex);
    }
  }
}

/*
==============
PartyMigrate_CheckNegotiationDisconnect
==============
*/
void PartyMigrate_CheckNegotiationDisconnect(PartyData *party, const PartyActiveClient *mainActiveClient)
{
  bool IsGameLobby; 
  const char *v5; 
  PartyDisconnectReason fmt; 

  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 1278, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( !mainActiveClient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 1279, ASSERT_TYPE_ASSERT, "(mainActiveClient)", (const char *)&queryFormat, "mainActiveClient") )
    __debugbreak();
  if ( !PartyMigrate_MigrateActive(party) && Party_InParty(party) && !Party_AreWeHost(party) )
  {
    Com_PrintError(25, "[%s] Since we can't migrate, we'll disconnect from running party\n", party->partyName);
    if ( PartyMigrate_IsGameServerHostMigration(party) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 1297, ASSERT_TYPE_ASSERT, "(!PartyMigrate_IsGameServerHostMigration( party ))", (const char *)&queryFormat, "!PartyMigrate_IsGameServerHostMigration( party )") )
      __debugbreak();
    IsGameLobby = Party_IsGameLobby(party);
    LOBYTE(fmt) = 40;
    v5 = "@XBOXLIVE/PARTYENDED";
    if ( IsGameLobby )
      v5 = "@XBOXLIVE/LOBBYENDED";
    PartyClient_DisconnectFromHost(party, mainActiveClient, v5, 1, fmt);
  }
}

/*
==============
PartyMigrate_ClearExpectedNewHost
==============
*/
void PartyMigrate_ClearExpectedNewHost(PartyData *party)
{
  party->migrateData.expectedNewHost = -1;
}

/*
==============
PartyMigrate_ClearInternalData
==============
*/
void PartyMigrate_ClearInternalData(PartyData *party)
{
  const dvar_t *v1; 
  bool *p_migrateNominated; 
  __int64 v4; 

  v1 = DVARBOOL_party_debug;
  if ( !DVARBOOL_party_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "party_debug") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  if ( v1->current.enabled )
    Com_Printf(25, "[%s] Clearing migration data\n", party->partyName);
  p_migrateNominated = &party->partyMembers[0].migrateNominated;
  v4 = 200i64;
  do
  {
    *(_WORD *)p_migrateNominated = 0;
    *(_DWORD *)(p_migrateNominated - 51) = 0;
    *(_DWORD *)(p_migrateNominated - 59) = 0;
    *(_DWORD *)(p_migrateNominated - 55) = -1;
    p_migrateNominated += 504;
    --v4;
  }
  while ( v4 );
  *(_WORD *)&party->migrateData.weAreArbitrating = 0;
  party->migrateData.arbitratorClientNum = -1;
  *(_QWORD *)&party->migrateData.bestHost.lastHeardFrom = -1i64;
  *(_QWORD *)&party->migrateData.migrateToRequestedHost = -1i64;
  party->migrateData.lastBroadcastTime = 0;
  *(_QWORD *)&party->migrateData.bestHost.info.upload = 0i64;
  *(_QWORD *)&party->migrateData.bestHost.info.connectivity = 0i64;
  *(_QWORD *)&party->migrateData.bestHost.info.physMemory = 0i64;
  *(_QWORD *)&party->migrateData.bestHost.info.hostScore = 0i64;
  party->migrateData.bestHost.info.NAT = 3;
  party->migrateData.cachedNewHostInfo = 0;
  *(_QWORD *)&party->migrateData.newHostInfo.clientNum = 0i64;
  party->migrateData.newHostInfo.xuid.m_id = 0i64;
  *(_QWORD *)&party->migrateData.newHostInfo.netAddr.type = 0i64;
  *(_QWORD *)&party->migrateData.newHostInfo.netAddr.port = 0i64;
  *(_QWORD *)&party->migrateData.newHostInfo.netAddr.addrHandleIndex = 0i64;
  *(_QWORD *)&party->migrateData.newHostInfo.claimedArbitratorNum = 0i64;
  party->migrateData.expectedNewHost = -1;
}

/*
==============
PartyMigrate_ClearMemberData
==============
*/
void PartyMigrate_ClearMemberData(PartyData *party, int clientNum)
{
  __int64 v2; 
  __int64 v4; 
  int v6; 

  v2 = clientNum;
  if ( (unsigned int)clientNum >= 0xC8 )
  {
    v6 = 200;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 882, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( 200 )", "clientNum doesn't index MAX_PARTY_MEMBERS\n\t%i not in [0, %i)", clientNum, v6) )
      __debugbreak();
  }
  if ( !party->migrateData.weAreArbitrating && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 883, ASSERT_TYPE_ASSERT, "(party->migrateData.weAreArbitrating)", (const char *)&queryFormat, "party->migrateData.weAreArbitrating") )
    __debugbreak();
  party->migrateData.bestHost.nominee = -1;
  party->migrateData.bestHost.lastSentTo = 0;
  v4 = v2;
  *(_WORD *)&party->partyMembers[v4].migrateNominated = 0;
  party->partyMembers[v4].migratePingCount = 0;
  party->partyMembers[v4].migratePingTime = 0;
  party->partyMembers[v4].migratePing = -1;
}

/*
==============
PartyMigrate_ComputeMyHostScore
==============
*/

float __fastcall PartyMigrate_ComputeMyHostScore(PartyData *party, const PartyActiveClient *mainActiveClient, const int ourClientNum, double _XMM3_8)
{
  int AveragePing; 
  const dvar_t *v8; 
  int v9; 
  float value; 
  const dvar_t *v11; 
  float v12; 
  float v13; 
  const dvar_t *v14; 
  int NecessaryBandwidth; 
  float v16; 
  unsigned int v17; 
  const dvar_t *v18; 
  float v19; 
  float v20; 
  const dvar_t *v21; 
  float v22; 
  float v23; 
  const dvar_t *v24; 
  float v25; 
  float v26; 
  double OverallQuitRate; 
  const dvar_t *v29; 
  float v30; 
  float v31; 
  const dvar_t *v32; 
  float v33; 
  float v34; 
  float v35; 
  bool IsFullyInstalled; 
  const dvar_t *v37; 
  const char *v38; 
  const char *v39; 
  bool v40; 
  const dvar_t *v41; 
  int areWeHost; 
  const dvar_t *v43; 
  const char *v44; 
  double v45; 
  int LocalNatType; 
  unsigned int ClientConnectivity; 
  unsigned __int64 *macAddress; 
  unsigned int country; 
  int v51; 
  int v52; 
  int physMemory; 
  BOOL onWifi; 
  BOOL isCurrentHost; 
  int natType; 
  int connectivity; 
  BOOL v58; 
  unsigned __int8 consoleExternalIP[4]; 
  unsigned int countryCode; 
  unsigned __int8 consoleInternalIP[8]; 
  unsigned __int64 v62; 
  unsigned __int64 machineIDLow; 
  unsigned __int64 machineIDHigh; 
  char dest[1024]; 

  AveragePing = PartyMigrate_GetAveragePing(party);
  v8 = DVARFLT_pt_migrationPingBad;
  v9 = AveragePing;
  if ( !DVARFLT_pt_migrationPingBad && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "pt_migrationPingBad") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v8);
  value = v8->current.value;
  v11 = DVARFLT_pt_migrationPingWeight;
  if ( !DVARFLT_pt_migrationPingWeight && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "pt_migrationPingWeight") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v11);
  v12 = v11->current.value;
  v13 = PartyMigrate_NormalizeHostScore((float)v9, value, 0.0) * v12;
  Com_Printf(25, "[%s] average ping: %d, host score = %0.3f\n", party->partyName, (unsigned int)v9, v13);
  v14 = DVARINT_party_maxplayers;
  if ( !DVARINT_party_maxplayers && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "party_maxplayers") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v14);
  NecessaryBandwidth = Live_GetNecessaryBandwidth(v14->current.integer);
  v16 = (float)NecessaryBandwidth;
  v17 = NecessaryBandwidth;
  Live_ComputeMinUploadBandwidthProbability(v16);
  v18 = DVARFLT_pt_migrationUploadBad;
  v19 = v16;
  if ( !DVARFLT_pt_migrationUploadBad && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "pt_migrationUploadBad") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v18);
  v20 = v18->current.value;
  v21 = DVARFLT_pt_migrationUploadWeight;
  if ( !DVARFLT_pt_migrationUploadWeight && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "pt_migrationUploadWeight") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v21);
  v22 = v21->current.value;
  v23 = PartyMigrate_NormalizeHostScore(v16, v20, 1.0) * v22;
  Com_Printf(25, "[%s] bandwidth up required: %d, probability: %0.3f, host score = %0.3f\n", party->partyName, v17, v16, (float)(v13 + v23));
  v24 = DVARFLT_pt_migrationCPUWeight;
  if ( !DVARFLT_pt_migrationCPUWeight && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "pt_migrationCPUWeight") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v24);
  v25 = v24->current.value;
  v26 = (float)(v13 + v23) + (float)(PartyMigrate_NormalizeHostScore(0.0, 0.0, 100.0) * v25);
  __asm { vxorpd  xmm3, xmm3, xmm3 }
  Com_Printf(25, "[%s] CPU speed: %0.2f, host score = %0.3f\n", party->partyName, *(double *)&_XMM3, v26);
  Com_Printf(25, "[%s] PhysMemory: %i, host score = %0.3f\n", party->partyName, 0i64, v26);
  OverallQuitRate = Live_GetOverallQuitRate(mainActiveClient->localControllerIndex);
  v29 = DVARFLT_pt_migrationQuitsBad;
  v30 = *(float *)&OverallQuitRate;
  if ( !DVARFLT_pt_migrationQuitsBad && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "pt_migrationQuitsBad") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v29);
  v31 = v29->current.value;
  v32 = DVARFLT_pt_migrationQuitsWeight;
  if ( !DVARFLT_pt_migrationQuitsWeight && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "pt_migrationQuitsWeight") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v32);
  v33 = v32->current.value;
  v35 = v26 + (float)(PartyMigrate_NormalizeHostScore(*(float *)&OverallQuitRate, v31, 0.0) * v33);
  v34 = v35;
  Com_Printf(25, "[%s] quit rate: %0.3f, host score = %0.3f\n", party->partyName, v30, v35);
  IsFullyInstalled = SI_IsFullyInstalled();
  if ( IsFullyInstalled )
  {
    v37 = DVARFLT_pt_migrationNotInstalledWeight;
    if ( !DVARFLT_pt_migrationNotInstalledWeight && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "pt_migrationNotInstalledWeight") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v37);
    v34 = v35 + v37->current.value;
  }
  v38 = "false";
  v39 = "false";
  if ( IsFullyInstalled )
    v39 = "true";
  Com_Printf(25, "[%s] fully installed: %s, host score = %0.3f\n", party->partyName, v39, v34);
  v40 = Live_IsOnWifi();
  if ( v40 )
  {
    v41 = DVARFLT_pt_migrationWifiPenalty;
    if ( !DVARFLT_pt_migrationWifiPenalty && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "pt_migrationWifiPenalty") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v41);
    v34 = v34 * v41->current.value;
  }
  if ( v40 )
    v38 = "true";
  Com_Printf(25, "[%s] wifi: %s, host score = %0.3f\n", party->partyName, v38, v34);
  areWeHost = party->areWeHost;
  if ( areWeHost )
  {
    v43 = DVARFLT_pt_migrationThreshold;
    if ( !DVARFLT_pt_migrationThreshold && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "pt_migrationThreshold") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v43);
    v34 = v34 + v43->current.value;
  }
  v44 = "no";
  v45 = v34;
  if ( areWeHost )
    v44 = "yes";
  Com_Printf(25, "[%s] currently the host? %s, host score = %0.3f\n", party->partyName, v44, v45);
  if ( s_shouldLogHostSelection )
  {
    Live_GetConsoleDetails(1, consoleInternalIP, consoleExternalIP, &machineIDHigh, &machineIDLow, &v62);
    LiveRegionInfo_GetCountryCode(&countryCode);
    *(_QWORD *)&s_hostSelectionLoggingData.version = 5i64;
    s_hostSelectionLoggingData.migrationID = 0i64;
    s_hostSelectionLoggingData.party_session = 0i64;
    *(_QWORD *)&s_hostSelectionLoggingData.averagePing = 0i64;
    *(_QWORD *)&s_hostSelectionLoggingData.quitRate = 0i64;
    *(_QWORD *)&s_hostSelectionLoggingData.physMemory = 0i64;
    s_hostSelectionLoggingData.country = countryCode;
    *(_QWORD *)s_hostSelectionLoggingData.externalIP = consoleExternalIP[0];
    s_hostSelectionLoggingData.externalIP[1] = consoleExternalIP[1];
    s_hostSelectionLoggingData.externalIP[2] = consoleExternalIP[2];
    s_hostSelectionLoggingData.externalIP[3] = consoleExternalIP[3];
    s_hostSelectionLoggingData.party_session = (unsigned __int64)*XSESSION_INFO::GetSecurityId(&party->session->dyn.sessionInfo);
    s_hostSelectionLoggingData.uploadReliability = v19;
    s_hostSelectionLoggingData.quitRate = v30;
    s_hostSelectionLoggingData.cpuSpeed = 0.0;
    s_hostSelectionLoggingData.averagePing = v9;
    s_hostSelectionLoggingData.physMemory = 0;
    s_hostSelectionLoggingData.onWifi = v40;
    s_hostSelectionLoggingData.isCurrentHost = areWeHost != 0;
    LocalNatType = Live_GetLocalNatType();
    s_hostSelectionLoggingData.natType = truncate_cast<unsigned char,int>(LocalNatType);
    ClientConnectivity = PartyMigrate_GetClientConnectivity(party, ourClientNum);
    s_hostSelectionLoggingData.connectivity = truncate_cast<unsigned char,int>(__popcnt(ClientConnectivity));
    s_hostSelectionLoggingData.isFullyInstalled = IsFullyInstalled;
    v58 = IsFullyInstalled;
    connectivity = s_hostSelectionLoggingData.connectivity;
    natType = s_hostSelectionLoggingData.natType;
    isCurrentHost = s_hostSelectionLoggingData.isCurrentHost;
    onWifi = s_hostSelectionLoggingData.onWifi;
    physMemory = s_hostSelectionLoggingData.physMemory;
    v52 = s_hostSelectionLoggingData.averagePing;
    v51 = s_hostSelectionLoggingData.externalIP[0] | ((s_hostSelectionLoggingData.externalIP[1] | (*(unsigned __int16 *)&s_hostSelectionLoggingData.externalIP[2] << 8)) << 8);
    country = s_hostSelectionLoggingData.country;
    LODWORD(macAddress) = s_hostSelectionLoggingData.cause;
    Com_sprintf(dest, 0x400ui64, "version %d, party_session %zu, cause %d, migration_id %zu, country %d, external_ip %u, average_ping %d, upload_reliability %0.3f, quit_rate %0.3f, cpu_speed %0.2f, phys_mem %d, on_wifi %u, is_host %u, nat_type %u, connectivity %u, fully_installed %u", s_hostSelectionLoggingData.version, s_hostSelectionLoggingData.party_session, macAddress, s_hostSelectionLoggingData.migrationID, country, v51, v52, s_hostSelectionLoggingData.uploadReliability, s_hostSelectionLoggingData.quitRate, s_hostSelectionLoggingData.cpuSpeed, physMemory, onWifi, isCurrentHost, natType, connectivity, v58);
    dwRecordStringEventFF(dest, DW_EVENT_HOST_NOMINATION);
  }
  Com_Printf(25, "[%s] My host score is: %0.3f\n", party->partyName, v45);
  return v34;
}

/*
==============
PartyMigrate_DebugEnd
==============
*/
void PartyMigrate_DebugEnd(PartyData *party)
{
  if ( !party->migrateData.migrateActive )
  {
    Party_DumpInfo(party, "PartyMigrate_DebugEnd");
    Com_Printf(25, "[%s] --- Migration took %ums ---\n", party->partyName, (unsigned int)(party->migrateData.partyTime - party->migrateData.startTime));
  }
}

/*
==============
PartyMigrate_DetermineBestHost
==============
*/
void PartyMigrate_DetermineBestHost(PartyData *party, const PartyActiveClient *mainActiveClient)
{
  int expectedNewHost; 
  const PartyData *PartyData; 
  int v6; 
  const dvar_t *v7; 
  int v8; 
  int integer; 
  bool *p_migrateHeardFrom; 
  int v11; 
  int v12; 
  const dvar_t *v13; 
  int v14; 
  const dvar_t *v15; 
  char *fmt; 
  int outHostIndex[12]; 
  bool acceptableNomineeList[208]; 

  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 4080, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( !mainActiveClient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 4081, ASSERT_TYPE_ASSERT, "(mainActiveClient)", (const char *)&queryFormat, "mainActiveClient") )
    __debugbreak();
  if ( !party->migrateData.weAreArbitrating && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 4082, ASSERT_TYPE_ASSERT, "(party->migrateData.weAreArbitrating)", (const char *)&queryFormat, "party->migrateData.weAreArbitrating") )
    __debugbreak();
  if ( !PartyMigrate_MigrateActive(party) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 4083, ASSERT_TYPE_ASSERT, "(PartyMigrate_MigrateActive( party ))", (const char *)&queryFormat, "PartyMigrate_MigrateActive( party )") )
    __debugbreak();
  if ( PartyMigrate_IsGameServerHostMigration(party) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 4084, ASSERT_TYPE_ASSERT, "(!PartyMigrate_IsGameServerHostMigration( party ))", (const char *)&queryFormat, "!PartyMigrate_IsGameServerHostMigration( party )") )
    __debugbreak();
  if ( Party_IsServerDedicated(party) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 4085, ASSERT_TYPE_ASSERT, "(!Party_IsServerDedicated( party ))", (const char *)&queryFormat, "!Party_IsServerDedicated( party )") )
    __debugbreak();
  expectedNewHost = party->migrateData.expectedNewHost;
  if ( expectedNewHost >= 0 && Party_IsMemberRegistered(party, expectedNewHost) && (Party_IsMemberPresent(party, expectedNewHost) || Party_IsPrivateParty(party) && Party_IsMemberIndexCommitted(party, expectedNewHost)) )
  {
    PartyMigrate_NewHostDecided(party, mainActiveClient, party->migrateData.expectedNewHost);
    return;
  }
  if ( Party_IsRunning(party) || !Party_IsPrivateParty(party) && Party_IsInGameLobbyMigrationAllowed(party) )
    goto LABEL_42;
  if ( !party->inParty && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 3589, ASSERT_TYPE_ASSERT, "(party->inParty)", (const char *)&queryFormat, "party->inParty") )
    __debugbreak();
  if ( Party_IsRunning(party) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 3590, ASSERT_TYPE_ASSERT, "(!Party_IsRunning( party ))", (const char *)&queryFormat, "!Party_IsRunning( party )") )
    __debugbreak();
  if ( !Party_IsPrivateParty(party) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 3591, ASSERT_TYPE_ASSERT, "(Party_IsPrivateParty( party ))", "%s\n\tInactive lobby is migrating, this should not happen", "Party_IsPrivateParty( party )") )
    __debugbreak();
  if ( Lobby_IsInRunningLobby() )
  {
    PartyData = Lobby_GetPartyData();
    if ( PartyMigrate_MigrateActive(PartyData) )
    {
      PartyMigrate_StartTimeout(party);
      return;
    }
  }
  if ( !PartyMigrate_UseLobbyHostForInactiveParty(party, outHostIndex) )
  {
LABEL_42:
    v6 = Sys_Milliseconds();
    v7 = DVARINT_partymigrate_selectiontime;
    v8 = v6;
    if ( !DVARINT_partymigrate_selectiontime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "partymigrate_selectiontime") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v7);
    integer = v7->current.integer;
    p_migrateHeardFrom = &party->partyMembers[0].migrateHeardFrom;
    v11 = v8 - party->migrateData.startTime;
    v12 = 0;
    while ( !Party_IsMemberRegistered(party, v12) || !Party_IsMemberPresent(party, v12) && (!Party_IsPrivateParty(party) || !Party_IsMemberIndexCommitted(party, v12)) || *p_migrateHeardFrom || v11 >= integer )
    {
      ++v12;
      p_migrateHeardFrom += 504;
      if ( v12 >= 200 )
      {
        outHostIndex[0] = 0;
        memset_0(acceptableNomineeList, 0, 0xC8ui64);
        PartyMigrate_DetermineBestHost_BuildInitialList(party, outHostIndex, acceptableNomineeList, 0xC8ui64);
        v13 = DVARBOOL_pt_useMigrationWeights;
        if ( !DVARBOOL_pt_useMigrationWeights && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "pt_useMigrationWeights") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v13);
        if ( !v13->current.enabled )
          PartyMigrate_DetermineBestHost_FilterByPing(party, acceptableNomineeList);
        v14 = PartyMigrate_DetermineBestHost_PickBestHost(party, acceptableNomineeList);
        PartyMigrate_DetermineBestHost_LogResults(party, mainActiveClient, v14);
        PartyMigrate_NewHostDecided(party, mainActiveClient, v14);
        return;
      }
    }
    v15 = DVARINT_partymigrate_selectiontime;
    if ( !DVARINT_partymigrate_selectiontime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "partymigrate_selectiontime") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v15);
    LODWORD(fmt) = v12;
    Com_Printf(0, "[%s] ---> %ums selection time left for %u\n", party->partyName, (unsigned int)(party->migrateData.startTime + v15->current.integer - v8), fmt);
  }
  else
  {
    PartyMigrate_NewHostDecided(party, mainActiveClient, outHostIndex[0]);
  }
}

/*
==============
PartyMigrate_DetermineBestHost_BuildInitialList
==============
*/
void PartyMigrate_DetermineBestHost_BuildInitialList(const PartyData *party, int *validMemberCount, bool *acceptableNomineeList, unsigned __int64 nomineeListSize)
{
  bool *v4; 
  int NumGameSlots; 
  unsigned int v8; 
  bool *v9; 
  int *p_NAT; 
  unsigned int v11; 
  int v12; 
  __m256i *v13; 
  int v14; 
  const dvar_t *v15; 
  signed int v16; 
  signed int v17; 
  int v18; 
  bool v19; 
  __int64 v20; 
  __int64 v21; 
  __m256i v22; 
  int NecessaryBandwidth; 

  v4 = acceptableNomineeList;
  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 3714, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( !validMemberCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 3715, ASSERT_TYPE_ASSERT, "(validMemberCount)", (const char *)&queryFormat, "validMemberCount") )
    __debugbreak();
  if ( *validMemberCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 3716, ASSERT_TYPE_ASSERT, "(!(*validMemberCount))", (const char *)&queryFormat, "!(*validMemberCount)") )
    __debugbreak();
  if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 3717, ASSERT_TYPE_ASSERT, "(acceptableNomineeList)", (const char *)&queryFormat, "acceptableNomineeList") )
    __debugbreak();
  NumGameSlots = Party_GetNumGameSlots(party);
  v8 = 0;
  NecessaryBandwidth = Live_GetNecessaryBandwidth(NumGameSlots);
  v9 = v4;
  p_NAT = &party->partyMembers[0].migrateNomineeInfo.NAT;
  v11 = -1;
  do
  {
    if ( !Party_IsMemberRegistered(party, v8) || !Party_IsMemberPresent(party, v8) && (!Party_IsPrivateParty(party) || !Party_IsMemberIndexCommitted(party, v8)) )
    {
      if ( !*v9 )
        goto LABEL_66;
      v12 = 3728;
      goto LABEL_63;
    }
    ++*validMemberCount;
    if ( *((_BYTE *)p_NAT + 307) )
    {
      if ( Party_IsMemberHeadless(party, v8) )
      {
        if ( !*v9 )
          goto LABEL_66;
        v12 = 3743;
        goto LABEL_63;
      }
      v13 = (__m256i *)(p_NAT - 1);
      if ( p_NAT == (int *)4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 3662, ASSERT_TYPE_ASSERT, "(theirNomineeInfo)", (const char *)&queryFormat, "theirNomineeInfo") )
        __debugbreak();
      if ( v11 == -1 )
      {
        v14 = 1;
        goto LABEL_52;
      }
      if ( *((_BYTE *)p_NAT + 24) )
      {
        v14 = 1;
        goto LABEL_52;
      }
      if ( v22.m256i_i8[28] )
      {
        v14 = 0;
        goto LABEL_52;
      }
      v15 = DVARBOOL_pt_useMigrationWeights;
      if ( !DVARBOOL_pt_useMigrationWeights && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "pt_useMigrationWeights") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v15);
      if ( !v15->current.enabled )
      {
        if ( v22.m256i_i32[1] < *p_NAT )
        {
          v14 = 0;
LABEL_51:
          v4 = acceptableNomineeList;
LABEL_52:
          v18 = v14 - 1;
          if ( v18 )
          {
            if ( v18 != 1 )
            {
              if ( *v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 3763, ASSERT_TYPE_ASSERT, "(!acceptableNomineeList[memberIndex])", (const char *)&queryFormat, "!acceptableNomineeList[memberIndex]") )
                __debugbreak();
              goto LABEL_59;
            }
          }
          else
          {
            v11 = v8;
            v22 = *v13;
            memset_0(v4, 0, nomineeListSize);
          }
          *v9 = 1;
LABEL_59:
          if ( v11 < 0xC8 )
            goto LABEL_66;
          LODWORD(v21) = 200;
          LODWORD(v20) = v11;
          v19 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 3767, ASSERT_TYPE_ASSERT, "(unsigned)( bestHostIndex ) < (unsigned)( 200 )", "bestHostIndex doesn't index MAX_PARTY_MEMBERS\n\t%i not in [0, %i)", v20, v21);
          goto LABEL_64;
        }
        if ( v22.m256i_i32[1] > *p_NAT )
        {
          v14 = 1;
          goto LABEL_51;
        }
      }
      v16 = __popcnt(v22.m256i_u32[2]);
      v17 = __popcnt(p_NAT[1]);
      if ( v16 <= v17 )
      {
        if ( v16 >= v17 )
        {
          if ( v22.m256i_i32[0] < NecessaryBandwidth || v13->m256i_i32[0] >= NecessaryBandwidth )
          {
            if ( v22.m256i_i32[0] >= NecessaryBandwidth || (v14 = 1, v13->m256i_i32[0] < NecessaryBandwidth) )
              v14 = 2;
          }
          else
          {
            v14 = 0;
          }
        }
        else
        {
          v14 = 1;
        }
      }
      else
      {
        v14 = 0;
      }
      goto LABEL_51;
    }
    if ( !*v9 )
      goto LABEL_66;
    v12 = 3737;
LABEL_63:
    v19 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", v12, ASSERT_TYPE_ASSERT, "(!acceptableNomineeList[memberIndex])", (const char *)&queryFormat, "!acceptableNomineeList[memberIndex]");
LABEL_64:
    if ( v19 )
      __debugbreak();
LABEL_66:
    ++v8;
    p_NAT += 126;
    ++v9;
  }
  while ( v8 < 0xC8 );
}

/*
==============
PartyMigrate_DetermineBestHost_FilterByPing
==============
*/
void PartyMigrate_DetermineBestHost_FilterByPing(const PartyData *party, bool *acceptableNomineeList)
{
  __int128 v2; 
  __int128 v3; 
  __int128 v4; 
  __int64 v7; 
  char *v8; 
  int v9; 
  __int64 v10; 
  int *p_cpuSpeed; 
  bool *v12; 
  unsigned int v13; 
  const dvar_t *v14; 
  int v15; 
  int NecessaryBandwidth; 
  int v17; 
  float v18; 
  const dvar_t *v19; 
  float v20; 
  const dvar_t *v21; 
  int integer; 
  int v23; 
  int NumGameSlots; 
  double NecessaryCPUSpeed; 
  float v26; 
  const dvar_t *v27; 
  float v28; 
  const dvar_t *v29; 
  int v30; 
  int v31; 
  bool *v32; 
  const dvar_t *v33; 
  int v34; 
  char *v35; 
  __int64 v36; 
  char *fmt; 
  int v38; 
  __int64 v39; 
  char v41[800]; 
  __int128 v42; 
  __int128 v43; 
  __int128 v44; 

  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 3779, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( !acceptableNomineeList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 3780, ASSERT_TYPE_ASSERT, "(acceptableNomineeList)", (const char *)&queryFormat, "acceptableNomineeList") )
    __debugbreak();
  if ( PartyMigrate_IsPingTestActive(party) )
  {
    v8 = v41;
    v9 = 999;
    v10 = 200i64;
    v43 = v3;
    p_cpuSpeed = &party->partyMembers[0].migrateNomineeInfo.cpuSpeed;
    v42 = v4;
    v12 = acceptableNomineeList;
    v44 = v2;
    v13 = 0;
    v38 = 999;
    v39 = 200i64;
    do
    {
      if ( *v12 )
      {
        v14 = DVARINT_party_maxplayers;
        v15 = *(p_cpuSpeed - 3);
        *(_DWORD *)v8 = p_cpuSpeed[2];
        if ( !v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "party_maxplayers") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v14);
        NecessaryBandwidth = Live_GetNecessaryBandwidth(v14->current.integer);
        if ( NecessaryBandwidth <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 1744, ASSERT_TYPE_ASSERT, "(necessaryBandwidth > 0)", (const char *)&queryFormat, "necessaryBandwidth > 0") )
          __debugbreak();
        v17 = v15 - NecessaryBandwidth;
        v18 = (float)NecessaryBandwidth;
        v19 = DVARFLT_pt_migrationBandwidthBonusThreshold;
        v20 = (float)v17 / v18;
        if ( !DVARFLT_pt_migrationBandwidthBonusThreshold && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "pt_migrationBandwidthBonusThreshold") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v19);
        if ( v20 <= v19->current.value )
        {
          integer = 0;
        }
        else
        {
          v21 = DVARINT_pt_migrationBandwidthBonusPing;
          if ( !DVARINT_pt_migrationBandwidthBonusPing && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "pt_migrationBandwidthBonusPing") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(v21);
          integer = v21->current.integer;
        }
        *(_DWORD *)v8 -= integer;
        v23 = *p_cpuSpeed;
        NumGameSlots = Party_GetNumGameSlots(party);
        NecessaryCPUSpeed = Live_GetNecessaryCPUSpeed(NumGameSlots);
        if ( *(float *)&NecessaryCPUSpeed <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 1764, ASSERT_TYPE_ASSERT, "(necessaryCPU > 0.0f)", (const char *)&queryFormat, "necessaryCPU > 0.0f") )
          __debugbreak();
        v26 = (float)v23;
        v27 = DVARFLT_partymigrate_cpuBonusThreshold;
        v28 = (float)((float)(v26 * 0.001) - *(float *)&NecessaryCPUSpeed) / *(float *)&NecessaryCPUSpeed;
        if ( !DVARFLT_partymigrate_cpuBonusThreshold && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "partymigrate_cpuBonusThreshold") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v27);
        if ( v28 <= v27->current.value )
        {
          v30 = 0;
        }
        else
        {
          v29 = DVARINT_partymigrate_cpuBonusPing;
          if ( !DVARINT_partymigrate_cpuBonusPing && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "partymigrate_cpuBonusPing") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(v29);
          v30 = v29->current.integer;
        }
        v31 = *(_DWORD *)v8 - v30;
        if ( *((_BYTE *)p_cpuSpeed + 16) )
          v31 = 1;
        *(_DWORD *)v8 = v31;
        if ( v38 < v31 )
          v31 = v38;
        v9 = v31;
        v38 = v31;
        v10 = v39;
      }
      ++v12;
      p_cpuSpeed += 126;
      v8 += 4;
      v39 = --v10;
    }
    while ( v10 );
    v32 = acceptableNomineeList;
    if ( v9 < 999 )
    {
      v33 = DVARINT_partymigrate_pingtest_filterThreshold;
      if ( !DVARINT_partymigrate_pingtest_filterThreshold && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "partymigrate_pingtest_filterThreshold") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v33);
      v34 = v33->current.integer + v9;
      v35 = v41;
      do
      {
        if ( *v32 )
        {
          v36 = *(unsigned int *)v35;
          if ( (int)v36 > v34 )
          {
            LODWORD(fmt) = v34;
            Com_Printf(25, "PartyMigrate - DetermineBestHost - Member %i does not pass ping test ( %i > %i )\n", v13, v36, fmt);
            *v32 = 0;
          }
        }
        ++v13;
        v35 += 4;
        ++v32;
      }
      while ( v13 < 0xC8 );
    }
    else
    {
      Com_PrintWarning(25, "PartyMigrate - DetermineBestHost - No members have a valid ping value, aborting ping filter.\n", v7, "party_maxplayers");
    }
  }
}

/*
==============
PartyMigrate_DetermineBestHost_LogResults
==============
*/
void PartyMigrate_DetermineBestHost_LogResults(const PartyData *party, const PartyActiveClient *mainActiveClient, const int newHost)
{
  const dvar_t *v6; 
  bool IsGameLobby; 
  const dvar_t *v8; 
  bool v9; 
  unsigned int v10; 
  const char *CountryCodeString; 
  int v12; 
  int *p_avgPing; 
  unsigned int v14; 
  char *v15; 
  const char *v16; 
  int v17; 
  char v18; 
  char *fmt; 
  char *fmta; 
  __int64 v21; 
  __int64 v22; 
  double v23; 
  char dest[768]; 

  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 4003, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( !mainActiveClient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 4004, ASSERT_TYPE_ASSERT, "(mainActiveClient)", (const char *)&queryFormat, "mainActiveClient") )
    __debugbreak();
  v6 = DVARINT_partymigrate_logResults;
  if ( !DVARINT_partymigrate_logResults && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "partymigrate_logResults") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  if ( v6->current.integer <= 0 )
    return;
  IsGameLobby = Party_IsGameLobby(party);
  v8 = DVARINT_partymigrate_logResults;
  if ( IsGameLobby )
  {
    if ( !DVARINT_partymigrate_logResults && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "partymigrate_logResults") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v8);
    v9 = v8->current.integer == 2;
  }
  else
  {
    if ( !DVARINT_partymigrate_logResults && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "partymigrate_logResults") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v8);
    v9 = v8->current.integer == 1;
  }
  if ( v9 )
    return;
  v10 = 0;
  CountryCodeString = LiveRegionInfo_GetCountryCodeString();
  LODWORD(fmt) = newHost;
  v12 = Com_sprintf(dest, 0x300ui64, "besthost%i:%i(c%s)", (unsigned int)party->partyId, fmt, CountryCodeString);
  p_avgPing = &party->partyMembers[0].migrateNomineeInfo.avgPing;
  v14 = 0;
  while ( !Party_IsMemberRegistered(party, v14) || !Party_IsMemberPresent(party, v14) && (!Party_IsPrivateParty(party) || !Party_IsMemberIndexCommitted(party, v14)) || !*((_BYTE *)p_avgPing + 291) )
  {
LABEL_39:
    ++v14;
    p_avgPing += 126;
    if ( v14 >= 0xC8 )
      goto LABEL_42;
  }
  v15 = &dest[v12];
  if ( 768 - v12 > 10 )
  {
    if ( *v15 )
    {
      LODWORD(v23) = *v15;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 4046, ASSERT_TYPE_ASSERT, "( writeBuffer[0] ) == ( '\\0' )", "%s == %s\n\t%i, %i", "writeBuffer[0]", "'\\0'", v23, 0i64) )
        __debugbreak();
    }
    if ( DVARBOOL_pt_useMigrationWeights )
    {
      v23 = (float)(*((float *)p_avgPing + 1) * 10.0);
      LODWORD(v22) = *(p_avgPing - 3);
      v16 = "(i%u,p%i,u%i,c%x,h%f)";
    }
    else
    {
      v16 = "(i%u,p%i,u%i,c%x,n%i)";
      LODWORD(v23) = *(p_avgPing - 4);
      LODWORD(v22) = *(p_avgPing - 3);
    }
    LODWORD(v21) = *(p_avgPing - 5) / 1024;
    LODWORD(fmta) = *p_avgPing;
    v17 = Com_sprintf_truncate(&dest[v12], 768 - v12, v16, v14, fmta, v21, v22, v23);
    if ( v17 > 0 )
    {
      v12 += v17;
      v18 = dest[v12];
      if ( v18 )
      {
        LODWORD(v23) = v18;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 4062, ASSERT_TYPE_ASSERT, "( bestHostResultString[writeIndex] ) == ( '\\0' )", "%s == %s\n\t%i, %i", "bestHostResultString[writeIndex]", "'\\0'", v23, 0i64) )
          __debugbreak();
      }
      ++v10;
      goto LABEL_39;
    }
  }
  Com_PrintWarning(14, "[%s] PartyMigrate - DetermineBestHost - LogResults - Not enough space in buffer to log all members. Stopped at %i\n", party->partyName, v14);
LABEL_42:
  Com_Printf(14, "[%s] PartyMigrate - DetermineBestHost - Results (%i): %s\n", party->partyName, v10, dest);
}

/*
==============
PartyMigrate_DetermineBestHost_PickBestHost
==============
*/
__int64 PartyMigrate_DetermineBestHost_PickBestHost(const PartyData *party, bool *acceptableNomineeList)
{
  unsigned int v4; 
  NomineeInfo *p_migrateNomineeInfo; 
  unsigned int v6; 
  const dvar_t *v7; 
  NomineeFilterResult v8; 
  int v9; 
  const dvar_t *v10; 
  bool v11; 
  __int64 v13; 
  __int64 v14; 
  NomineeInfo ourNomineeInfo; 

  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 3924, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( !acceptableNomineeList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 3925, ASSERT_TYPE_ASSERT, "(acceptableNomineeList)", (const char *)&queryFormat, "acceptableNomineeList") )
    __debugbreak();
  v4 = 0;
  p_migrateNomineeInfo = &party->partyMembers[0].migrateNomineeInfo;
  v6 = -1;
  while ( !*acceptableNomineeList )
  {
LABEL_41:
    ++v4;
    ++acceptableNomineeList;
    p_migrateNomineeInfo = (NomineeInfo *)((char *)p_migrateNomineeInfo + 504);
    if ( v4 >= 0xC8 )
      return v6;
  }
  v7 = DVARBOOL_pt_useMigrationWeights;
  if ( !DVARBOOL_pt_useMigrationWeights && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "pt_useMigrationWeights") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v7);
  if ( v7->current.enabled )
  {
    v8 = PartyMigrate_DetermineBestHost_PickBestHostByWeight_Filter(party, v6, &ourNomineeInfo, v4, p_migrateNomineeInfo);
    goto LABEL_38;
  }
  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 3836, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( v6 == v4 )
  {
    LODWORD(v14) = v4;
    LODWORD(v13) = v6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 3837, ASSERT_TYPE_ASSERT, "( ourNomineeIndex ) != ( theirNomineeIndex )", "%s != %s\n\t%i, %i", "ourNomineeIndex", "theirNomineeIndex", v13, v14) )
      __debugbreak();
  }
  if ( v6 == -1 )
  {
    v8 = NFR_BETTER;
    goto LABEL_38;
  }
  if ( p_migrateNomineeInfo->forceHostSet )
  {
    v8 = NFR_BETTER;
    goto LABEL_38;
  }
  if ( ourNomineeInfo.forceHostSet )
  {
    v8 = NFR_WORSE;
    goto LABEL_38;
  }
  v9 = ourNomineeInfo.upload - p_migrateNomineeInfo->upload;
  v10 = DVARINT_partymigrate_uploadtest_minThreshold;
  if ( !DVARINT_partymigrate_uploadtest_minThreshold && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "partymigrate_uploadtest_minThreshold") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v10);
  if ( v9 > v10->current.integer )
  {
    v8 = NFR_WORSE;
    goto LABEL_38;
  }
  if ( v9 < -Dvar_GetInt_Internal_DebugName(DVARINT_partymigrate_uploadtest_minThreshold, "partymigrate_uploadtest_minThreshold") )
  {
    v8 = NFR_BETTER;
    goto LABEL_38;
  }
  if ( !Dvar_GetBool_Internal_DebugName(DVARBOOL_partymigrate_preferSameHost, "partymigrate_preferSameHost") )
    goto LABEL_37;
  if ( Party_IsHost(party, v6) )
  {
    v8 = NFR_WORSE;
    goto LABEL_38;
  }
  v11 = !Party_IsHost(party, v4);
  v8 = NFR_BETTER;
  if ( v11 )
LABEL_37:
    v8 = NFR_EQUAL;
LABEL_38:
  if ( !p_migrateNomineeInfo->forceHostSet )
  {
    if ( v8 == NFR_BETTER )
    {
      ourNomineeInfo = *p_migrateNomineeInfo;
      v6 = v4;
    }
    goto LABEL_41;
  }
  return v4;
}

/*
==============
PartyMigrate_DetermineBestHost_PickBestHostByWeight_Filter
==============
*/
__int64 PartyMigrate_DetermineBestHost_PickBestHostByWeight_Filter(const PartyData *party, const int ourNomineeIndex, const NomineeInfo *ourNomineeInfo, const int theirNomineeIndex, const NomineeInfo *theirNomineeInfo)
{
  const dvar_t *v9; 
  char MemberPlatform; 
  char v11; 
  float hostScore; 
  __int64 v14; 
  __int64 v15; 

  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 3876, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( ourNomineeIndex == theirNomineeIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 3877, ASSERT_TYPE_ASSERT, "( ourNomineeIndex ) != ( theirNomineeIndex )", "%s != %s\n\t%i, %i", "ourNomineeIndex", "theirNomineeIndex", ourNomineeIndex, theirNomineeIndex) )
    __debugbreak();
  if ( (unsigned int)theirNomineeIndex >= 0xC8 )
  {
    LODWORD(v15) = 200;
    LODWORD(v14) = theirNomineeIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 3878, ASSERT_TYPE_ASSERT, "(unsigned)( theirNomineeIndex ) < (unsigned)( 200 )", "theirNomineeIndex doesn't index MAX_PARTY_MEMBERS\n\t%i not in [0, %i)", v14, v15) )
      __debugbreak();
  }
  if ( ourNomineeIndex == -1 || theirNomineeInfo->forceHostSet )
    return 1i64;
  if ( ourNomineeInfo->forceHostSet )
    return 0i64;
  v9 = DVARBOOL_partymigrate_preferConsoleOverPC;
  if ( !DVARBOOL_partymigrate_preferConsoleOverPC && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "partymigrate_preferConsoleOverPC") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v9);
  if ( v9->current.enabled )
  {
    MemberPlatform = Party_GetMemberPlatform(party, ourNomineeIndex);
    v11 = Party_GetMemberPlatform(party, theirNomineeIndex);
    if ( MemberPlatform == 2 )
    {
      if ( v11 != 2 )
        return 1i64;
    }
    else if ( v11 == 2 )
    {
      return 0i64;
    }
  }
  hostScore = ourNomineeInfo->hostScore;
  if ( hostScore <= theirNomineeInfo->hostScore )
  {
    if ( hostScore < theirNomineeInfo->hostScore )
      return 1i64;
    if ( !Dvar_GetBool_Internal_DebugName(DVARBOOL_partymigrate_preferSameHost, "partymigrate_preferSameHost") )
      return 2i64;
    if ( !Party_IsHost(party, ourNomineeIndex) )
    {
      if ( Party_IsHost(party, theirNomineeIndex) )
        return 1i64;
      return 2i64;
    }
  }
  return 0i64;
}

/*
==============
PartyMigrate_ExecMigrateToRequest
==============
*/
void PartyMigrate_ExecMigrateToRequest(PartyData *party, const PartyActiveClient *mainActiveClient, MigrateToRequest *req)
{
  int isInGameMigration; 
  unsigned int newHost; 
  const char *v8; 
  const char *v9; 
  __int128 v10; 
  __int64 v11; 
  XUID xuid; 
  MigrationHostInfo newHostInfo; 

  XUID::XUID(&newHostInfo.xuid);
  isInGameMigration = req->isInGameMigration;
  newHost = req->newHost;
  xuid.m_id = req->newHostXuid.m_id;
  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 2482, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( newHost >= 0xC8 )
  {
    LODWORD(v11) = newHost;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 2483, ASSERT_TYPE_ASSERT, "(unsigned)( newHostNum ) < (unsigned)( 200 )", "newHostNum doesn't index MAX_PARTY_MEMBERS\n\t%i not in [0, %i)", v11, 200) )
      __debugbreak();
  }
  if ( !party->migrateData.cachedNewHostInfo )
    goto LABEL_10;
  if ( party->migrateData.newHostInfo.inGameMigration != isInGameMigration )
  {
    Com_Printf(25, "[%s] PartyMigrate - HasValidNewHostInfo - We have cached the new host info, but inGameMigration does not match. %i vs %i.\n", party->partyName);
LABEL_10:
    newHostInfo.clientNum = -1;
    goto LABEL_11;
  }
  if ( party->migrateData.newHostInfo.clientNum != newHost )
  {
    Com_Printf(25, "[%s] PartyMigrate - HasValidNewHostInfo - We have cached the new host info, but the host num does not match. %i vs %i.\n", party->partyName);
    goto LABEL_10;
  }
  if ( XUID::operator!=(&party->migrateData.newHostInfo.xuid, &xuid) )
  {
    v8 = XUID::ToDevString(&xuid);
    v9 = XUID::ToDevString(&party->migrateData.newHostInfo.xuid);
    Com_Printf(25, "[%s] PartyMigrate - HasValidNewHostInfo - We have cached the new host info, but the xuid does not match. %s vs %s.\n", party->partyName, v9, v8);
    goto LABEL_10;
  }
  if ( party->migrateData.newHostInfo.clientNum == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 2506, ASSERT_TYPE_ASSERT, "( party->migrateData.newHostInfo.clientNum ) != ( -1 )", "%s != %s\n\t%i, %i", "party->migrateData.newHostInfo.clientNum", "CLIENTNUM_NONE", -1, -1) )
    __debugbreak();
  Com_Printf(25, "[%s] PartyMigrate - HasValidNewHostInfo - We have cached the new host info, standing by for full migration.\n", party->partyName);
  newHostInfo.clientNum = party->migrateData.newHostInfo.clientNum;
  XUID::operator=(&newHostInfo.xuid, &party->migrateData.newHostInfo.xuid);
  v10 = *(_OWORD *)&party->migrateData.newHostInfo.netAddr.type;
  newHostInfo.netAddr.addrHandleIndex = party->migrateData.newHostInfo.netAddr.addrHandleIndex;
  newHostInfo.inGameMigration = party->migrateData.newHostInfo.inGameMigration;
  newHostInfo.claimedArbitratorNum = party->migrateData.newHostInfo.claimedArbitratorNum;
  newHostInfo.migrationBits = party->migrateData.newHostInfo.migrationBits;
  *(_OWORD *)&newHostInfo.netAddr.type = v10;
  if ( newHostInfo.clientNum == -1 )
  {
    LODWORD(v11) = -1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 2522, ASSERT_TYPE_ASSERT, "( ( newHostInfo.clientNum != -1 ) )", "( newHostInfo.clientNum ) = %i", v11) )
      __debugbreak();
  }
LABEL_11:
  Com_Printf(25, "[%s] PartyMigrate - Processing newHost type %i\n", party->partyName, (unsigned int)req->isInGameMigration);
  PartyMigrate_StartMigrationFromMessage(party, mainActiveClient, req->newHost, req->migrateFlags, req->isInGameMigration);
  if ( newHostInfo.clientNum != -1 )
  {
    Com_Printf(25, "[%s] PartyMigrate - Processing newHost session from cached info.\n", party->partyName);
    if ( party->migrateData.cachedNewHostInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 2535, ASSERT_TYPE_ASSERT, "(!party->migrateData.cachedNewHostInfo)", "%s\n\tNew host info data should be cleared out when calling PartyMigrate_StartMigrationFromMessage", "!party->migrateData.cachedNewHostInfo") )
      __debugbreak();
    PartyMigrate_MigrateToNewSession(party, mainActiveClient, &newHostInfo, 1);
  }
}

/*
==============
PartyMigrate_Frame
==============
*/
void PartyMigrate_Frame(PartyData *party, const PartyActiveClient *mainActiveClient, const int msec)
{
  int partyTime; 
  int v7; 
  unsigned int v8; 
  int migrateToRequestedHost; 

  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 4238, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( !mainActiveClient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 4239, ASSERT_TYPE_ASSERT, "(mainActiveClient)", (const char *)&queryFormat, "mainActiveClient") )
    __debugbreak();
  if ( !PartyMigrate_MigrateActive(party) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 4240, ASSERT_TYPE_ASSERT, "(PartyMigrate_MigrateActive( party ))", (const char *)&queryFormat, "PartyMigrate_MigrateActive( party )") )
    __debugbreak();
  if ( PartyMigrate_IsGameServerHostMigration(party) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 4241, ASSERT_TYPE_ASSERT, "(!PartyMigrate_IsGameServerHostMigration( party ))", (const char *)&queryFormat, "!PartyMigrate_IsGameServerHostMigration( party )") )
    __debugbreak();
  if ( !Lobby_IsInLobby() && !g_partyData.inParty && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 4242, ASSERT_TYPE_ASSERT, "(Lobby_IsInLobby() || g_partyData.inParty)", (const char *)&queryFormat, "Lobby_IsInLobby() || g_partyData.inParty") )
    __debugbreak();
  if ( PartyAtomic_IsJoiningActive(&g_partyJoinInfo) && g_partyJoinInfo.partyType == party->partyId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 4243, ASSERT_TYPE_ASSERT, "(!(PartyAtomic_IsJoiningActive( &g_partyJoinInfo ) && (g_partyJoinInfo.partyType == party->partyId)))", "%s\n\tJoining another party/lobby while in the middle of a migration", "!(PartyAtomic_IsJoiningActive( &g_partyJoinInfo ) && (g_partyJoinInfo.partyType == party->partyId))") )
    __debugbreak();
  if ( party->migrateData.startTime > party->migrateData.partyTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 4245, ASSERT_TYPE_ASSERT, "( party->migrateData.startTime ) <= ( party->migrateData.partyTime )", "%s <= %s\n\t%i, %i", "party->migrateData.startTime", "party->migrateData.partyTime", party->migrateData.startTime, party->migrateData.partyTime) )
    __debugbreak();
  party->migrateData.partyTime += msec;
  partyTime = party->migrateData.partyTime;
  if ( !party->migrateData.decidedOurNominee )
  {
    PartyMigrate_SelectOurNominee(party, mainActiveClient);
    partyTime = party->migrateData.partyTime;
  }
  if ( partyTime - party->migrateData.startTime <= party->migrateData.timeoutDuration )
  {
    if ( party->migrateData.weAreArbitrating )
    {
      if ( (Party_IsPrivateParty(party) || Party_IsPrivateDSMatch(party)) && (migrateToRequestedHost = party->migrateData.migrateToRequestedHost, migrateToRequestedHost >= 0) )
        PartyMigrate_SelectPredeterminedHost(party, migrateToRequestedHost, mainActiveClient);
      else
        PartyMigrate_DetermineBestHost(party, mainActiveClient);
    }
  }
  else
  {
    Com_Printf(25, "[%s] PartyMigrate - Frame - Migration timed out.\n", party->partyName);
    if ( Party_IsPrivateParty(party) )
    {
      v7 = party->migrateData.migrateToRequestedHost;
      if ( v7 >= 0 && party->migrateData.expectedNewHost < 0 )
        PartyMigrate_SendMakeHostError(party, mainActiveClient, v7);
    }
    party->migrateData.migrateActive = 0;
    PartyMigrate_ClearInternalData(party);
    if ( !Party_IsHostDedicated(party) )
    {
      v8 = Party_HostNum(party);
      if ( !PartyMigrate_IsStatusValidForMigration(party, v8) )
      {
        Com_Printf(25, "[%s] PartyMigrate - Frame - Migration timed out, and host is gone, handling the error.\n", party->partyName);
        PartyMigrate_HandleMigrationFailure(party, mainActiveClient->localControllerIndex);
      }
    }
  }
}

/*
==============
PartyMigrate_GetArbitratorClientNum
==============
*/
__int64 PartyMigrate_GetArbitratorClientNum(PartyData *party, int cacheResult)
{
  int arbitratorClientNum; 
  int v6; 
  unsigned int v7; 
  int v8; 
  int v9; 
  int v10; 
  int v11; 

  arbitratorClientNum = party->migrateData.arbitratorClientNum;
  if ( arbitratorClientNum < 0 )
  {
    v6 = 0;
    v7 = 0;
    v8 = -1;
    while ( !Party_IsPrivateDSMatchHost(party, v7) )
    {
      if ( Party_IsMemberRegistered(party, v7) && (Party_IsMemberPresent(party, v7) || Party_IsPrivateParty(party) && Party_IsMemberIndexCommitted(party, v7)) )
      {
        if ( !Party_IsMemberRegistered(party, v7) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 235, ASSERT_TYPE_ASSERT, "(Party_IsMemberRegistered( party, memberIndex ))", (const char *)&queryFormat, "Party_IsMemberRegistered( party, memberIndex )") )
          __debugbreak();
        if ( Party_MemberHasHostAddress(party, v7) )
          v9 = 1;
        else
          v9 = 3 - (Party_MemberIsInHostPrivateParty(party, v7) != 0);
        if ( v8 < 0 || v9 > v6 )
        {
          v8 = v7;
          v6 = v9;
        }
      }
      if ( (int)++v7 >= 200 )
        goto LABEL_24;
    }
    v8 = v7;
LABEL_24:
    if ( v8 < 0 )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 254, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Tried to find the arbitrator, but no one is in the party. We should at least be in it") )
        __debugbreak();
      v8 = 0;
    }
    if ( cacheResult )
      party->migrateData.arbitratorClientNum = v8;
    if ( !Party_IsMemberRegistered(party, v8) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 261, ASSERT_TYPE_ASSERT, "(Party_IsMemberRegistered( party, bestMemberIndex ))", (const char *)&queryFormat, "Party_IsMemberRegistered( party, bestMemberIndex )") )
      __debugbreak();
    return (unsigned int)v8;
  }
  else
  {
    if ( (unsigned int)arbitratorClientNum >= 0xC8 )
    {
      v11 = 200;
      v10 = party->migrateData.arbitratorClientNum;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 212, ASSERT_TYPE_ASSERT, "(unsigned)( party->migrateData.arbitratorClientNum ) < (unsigned)( 200 )", "party->migrateData.arbitratorClientNum doesn't index MAX_PARTY_MEMBERS\n\t%i not in [0, %i)", v10, v11) )
        __debugbreak();
    }
    return (unsigned int)party->migrateData.arbitratorClientNum;
  }
}

/*
==============
PartyMigrate_GetAveragePing
==============
*/
int PartyMigrate_GetAveragePing(PartyData *party)
{
  int result; 
  int *p_migratePing; 
  int v4; 
  int v5; 
  int i; 
  __int64 v7; 

  result = PartyMigrate_IsPingTestActive(party);
  if ( result )
  {
    p_migratePing = &party->partyMembers[0].migratePing;
    v4 = 0;
    v5 = 0;
    for ( i = 0; i < 200; ++i )
    {
      if ( Party_IsMemberRegistered(party, i) && (Party_IsMemberPresent(party, i) || Party_IsPrivateParty(party) && Party_IsMemberIndexCommitted(party, i)) && !Party_MemberHasLoopbackAddr(party, i) )
      {
        if ( *p_migratePing < 0 )
        {
          LODWORD(v7) = *p_migratePing;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 1259, ASSERT_TYPE_ASSERT, "( member->migratePing ) >= ( 0 )", "%s >= %s\n\t%i, %i", "member->migratePing", "0", v7, 0i64) )
            __debugbreak();
        }
        if ( p_migratePing[1] <= 0 )
        {
          LODWORD(v7) = p_migratePing[1];
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 1260, ASSERT_TYPE_ASSERT, "( member->migratePingCount ) > ( 0 )", "%s > %s\n\t%i, %i", "member->migratePingCount", "0", v7, 0i64) )
            __debugbreak();
        }
        v4 += *p_migratePing / p_migratePing[1];
        ++v5;
      }
      p_migratePing += 126;
    }
    if ( v5 <= 0 )
      return 999;
    else
      return v4 / v5;
  }
  return result;
}

/*
==============
PartyMigrate_GetBandwidthPingBonus
==============
*/
__int64 PartyMigrate_GetBandwidthPingBonus(const int playerCount, const int uploadBandwidth)
{
  int NecessaryBandwidth; 
  int v4; 
  float v5; 
  const dvar_t *v6; 
  const dvar_t *v7; 

  NecessaryBandwidth = Live_GetNecessaryBandwidth(playerCount);
  if ( NecessaryBandwidth <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 1744, ASSERT_TYPE_ASSERT, "(necessaryBandwidth > 0)", (const char *)&queryFormat, "necessaryBandwidth > 0") )
    __debugbreak();
  v4 = uploadBandwidth - NecessaryBandwidth;
  v5 = (float)NecessaryBandwidth;
  v6 = DVARFLT_pt_migrationBandwidthBonusThreshold;
  if ( !DVARFLT_pt_migrationBandwidthBonusThreshold && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "pt_migrationBandwidthBonusThreshold") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  if ( (float)((float)v4 / v5) <= v6->current.value )
    return 0i64;
  v7 = DVARINT_pt_migrationBandwidthBonusPing;
  if ( !DVARINT_pt_migrationBandwidthBonusPing && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "pt_migrationBandwidthBonusPing") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v7);
  return v7->current.unsignedInt;
}

/*
==============
PartyMigrate_GetClientConnectivity
==============
*/
__int64 PartyMigrate_GetClientConnectivity(const PartyData *party, int ourClientNum)
{
  int v4; 
  unsigned int v5; 
  int v6; 
  int v7; 
  const dvar_t *v8; 
  const char *MemberName; 
  const dvar_t *v11; 
  const char *v12; 
  __int64 v13; 

  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 626, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( (unsigned int)ourClientNum >= 0xC8 )
  {
    LODWORD(v13) = ourClientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 627, ASSERT_TYPE_ASSERT, "(unsigned)( ourClientNum ) < (unsigned)( 200 )", "ourClientNum doesn't index MAX_PARTY_MEMBERS\n\t%i not in [0, %i)", v13, 200) )
      __debugbreak();
  }
  v4 = 0;
  v5 = -1;
  v6 = 1;
  do
  {
    if ( v4 != ourClientNum && Party_IsMemberRegistered(party, v4) && (Party_IsMemberPresent(party, v4) || Party_IsPrivateParty(party) && Party_IsMemberIndexCommitted(party, v4)) )
    {
      if ( !Party_IsMemberRegistered(party, v4) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 639, ASSERT_TYPE_ASSERT, "(Party_IsMemberRegistered( party, memberIndex ))", (const char *)&queryFormat, "Party_IsMemberRegistered( party, memberIndex )") )
        __debugbreak();
      if ( !PeerMesh_CanClientConnect(party, v4) )
      {
        if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 602, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
          __debugbreak();
        if ( !Party_IsMemberRegistered(party, v4) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 604, ASSERT_TYPE_ASSERT, "(Party_IsMemberRegistered( party, destClientNum ))", (const char *)&queryFormat, "Party_IsMemberRegistered( party, destClientNum )") )
          __debugbreak();
        v7 = 0;
        while ( v7 == ourClientNum || v7 == v4 || !PeerMesh_CanClientsConnect(party, v7, v4) )
        {
          if ( ++v7 >= 32 )
          {
            v8 = DVARBOOL_party_debug;
            if ( !DVARBOOL_party_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "party_debug") )
              __debugbreak();
            Dvar_CheckFrontendServerThread(v8);
            if ( v8->current.enabled )
            {
              MemberName = Party_GetMemberName(party, v4);
              Com_Printf(25, "[%s] We can't connect with clientNum %i (%s), but nobody else can either.  Hopefully it works out\n", party->partyName, (unsigned int)v4, MemberName);
            }
            goto LABEL_33;
          }
        }
        v11 = DVARBOOL_party_debug;
        v5 &= ~v6;
        if ( !DVARBOOL_party_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "party_debug") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v11);
        if ( v11->current.enabled )
        {
          v12 = Party_GetMemberName(party, v4);
          Com_Printf(25, "[%s] We can't connect with clientNum %i (%s) and others can, so we wouldn't be a good host\n", party->partyName, (unsigned int)v4, v12);
        }
      }
    }
LABEL_33:
    ++v4;
    v6 = __ROL4__(v6, 1);
  }
  while ( v4 < 200 );
  return v5;
}

/*
==============
PartyMigrate_GetPings
==============
*/
char PartyMigrate_GetPings(PartyData *party, const PartyActiveClient *mainActiveClient, const int ourClientNum)
{
  int v3; 
  const PartyActiveClient *v4; 
  int v6; 
  const dvar_t *v7; 
  unsigned int v8; 
  int *p_migratePingCount; 
  bool v10; 
  int v11; 
  const dvar_t *v12; 
  const char *MemberName; 
  char v15; 
  const dvar_t *v16; 
  int SplitscreenClientNumAtSameAddress; 
  __int64 v18; 
  NetConnection *MemberConnection; 
  netsrc_t LocalNetIDFromLocalClientNum; 
  const char *String; 
  const char *v22; 
  int v23; 
  const char *v24; 
  char *fmt; 
  __int64 v26; 
  __int64 v27; 
  __int64 v28; 

  v3 = ourClientNum;
  v4 = mainActiveClient;
  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 1008, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( !PartyMigrate_MigrateActive(party) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 1009, ASSERT_TYPE_ASSERT, "(PartyMigrate_MigrateActive( party ))", (const char *)&queryFormat, "PartyMigrate_MigrateActive( party )") )
    __debugbreak();
  if ( PartyMigrate_IsGameServerHostMigration(party) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 1010, ASSERT_TYPE_ASSERT, "(!PartyMigrate_IsGameServerHostMigration( party ))", (const char *)&queryFormat, "!PartyMigrate_IsGameServerHostMigration( party )") )
    __debugbreak();
  if ( !PartyMigrate_IsPingTestActive(party) )
    return 1;
  v6 = Sys_Milliseconds();
  v7 = DVARINT_partymigrate_pingtest_timeout;
  v8 = v6;
  if ( !DVARINT_partymigrate_pingtest_timeout && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "partymigrate_pingtest_timeout") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v7);
  p_migratePingCount = &party->partyMembers[0].migratePingCount;
  v10 = (int)(v8 - party->migrateData.startTime) < v7->current.integer;
  v11 = 0;
  if ( !v10 )
  {
    do
    {
      if ( Party_IsMemberRegistered(party, v11) && (Party_IsMemberPresent(party, v11) || Party_IsPrivateParty(party) && Party_IsMemberIndexCommitted(party, v11)) && *(p_migratePingCount - 1) < 0 )
      {
        if ( *p_migratePingCount )
        {
          LODWORD(v28) = *p_migratePingCount;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 1027, ASSERT_TYPE_ASSERT, "( member->migratePingCount ) == ( 0 )", "%s == %s\n\t%i, %i", "member->migratePingCount", "0", v28, 0i64) )
            __debugbreak();
        }
        v12 = DVARINT_partymigrate_pingtest_timeout;
        if ( !DVARINT_partymigrate_pingtest_timeout && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "partymigrate_pingtest_timeout") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v12);
        *(p_migratePingCount - 1) = v12->current.integer;
        *p_migratePingCount = 1;
        MemberName = Party_GetMemberName(party, v11);
        Com_Printf(25, "[%s] Gave up on getting a ping from %i (%s).\n", party->partyName, (unsigned int)v11, MemberName);
      }
      ++v11;
      p_migratePingCount += 126;
    }
    while ( v11 < 200 );
    return 1;
  }
  v15 = 1;
  do
  {
    if ( Party_IsMemberRegistered(party, v11) && (Party_IsMemberPresent(party, v11) || Party_IsPrivateParty(party) && Party_IsMemberIndexCommitted(party, v11)) )
    {
      if ( v11 == v3 )
      {
        *(p_migratePingCount - 1) = 0;
        *p_migratePingCount = 1;
      }
      else if ( Party_MemberHasLoopbackAddr(party, v11) )
      {
        *(p_migratePingCount - 1) = 0;
        *p_migratePingCount = 1;
      }
      else
      {
        v16 = DVARINT_partymigrate_pingtest_retry;
        v15 = 0;
        if ( !DVARINT_partymigrate_pingtest_retry && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "partymigrate_pingtest_retry") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v16);
        if ( (signed int)(v8 - *(p_migratePingCount - 2)) >= v16->current.integer )
        {
          *(p_migratePingCount - 2) = v8;
          SplitscreenClientNumAtSameAddress = Party_GetSplitscreenClientNumAtSameAddress(party, v11);
          v18 = SplitscreenClientNumAtSameAddress;
          if ( SplitscreenClientNumAtSameAddress != -1 )
          {
            if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_partymigrate_pingtest_debug, "partymigrate_pingtest_debug") )
              Com_Printf(25, "[%s] PartyMigrate - GetPings - Other member at address, skipping client %i.\n", party->partyName, (unsigned int)v18);
            if ( (unsigned int)v18 >= 0xC8 )
            {
              LODWORD(v27) = 200;
              LODWORD(v26) = v18;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 1077, ASSERT_TYPE_ASSERT, "(unsigned)( otherClientNumAtAddres ) < (unsigned)( 200 )", "otherClientNumAtAddres doesn't index MAX_PARTY_MEMBERS\n\t%i not in [0, %i)", v26, v27) )
                __debugbreak();
            }
            party->partyMembers[v18].migratePingTime = v8;
          }
          MemberConnection = (NetConnection *)Party_GetMemberConnection(party, v11);
          LocalNetIDFromLocalClientNum = NET_GetLocalNetIDFromLocalClientNum((const LocalClientNum_t)v4->localClientNum);
          if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_partymigrate_pingtest_debug, "partymigrate_pingtest_debug") )
          {
            String = NetConnection::GetString(MemberConnection);
            LODWORD(v26) = v8;
            Com_Printf(25, "[%s] PartyMigrate - GetPings - Sending ping to member %i at %s, time %i.\n", party->partyName, (unsigned int)v11, String, v26);
          }
          v22 = j_va("%impng %i", (unsigned int)party->partyId, v8);
          v23 = NetConnection::SendP2P(MemberConnection, LocalNetIDFromLocalClientNum, v22);
          if ( v23 < 0 )
          {
            v24 = Party_GetMemberName(party, v11);
            LODWORD(fmt) = v11;
            Com_Printf(25, "[%s] Got %d while trying to talk to party client %i (%s).\n", party->partyName, (unsigned int)v23, fmt, v24);
          }
          v4 = mainActiveClient;
        }
        v3 = ourClientNum;
      }
    }
    ++v11;
    p_migratePingCount += 126;
  }
  while ( v11 < 200 );
  return v15;
}

/*
==============
PartyMigrate_GetRAMPingBonus
==============
*/
__int64 PartyMigrate_GetRAMPingBonus(const SessionData *session, const int physMemory)
{
  return 0i64;
}

/*
==============
PartyMigrate_HandleMigrationFailure
==============
*/
void PartyMigrate_HandleMigrationFailure(PartyData *party, const int controllerIndex)
{
  const dvar_t *v4; 
  const dvar_t *v5; 
  LocalClientNum_t ClientFromController; 
  bool IsGameLobby; 
  bool IsLocalClientActive; 
  char *fmt; 
  __int64 v10; 
  PartyActiveClient localClientNum; 

  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 2698, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  localClientNum = Party_GetMainActiveClient(party, controllerIndex);
  if ( Party_IsRunning(party) )
  {
    if ( !Com_FrontEnd_IsInFrontEnd() && !Com_GameStart_IsRestarting() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 2704, ASSERT_TYPE_ASSERT, "(Com_FrontEnd_IsInFrontEnd() || Com_GameStart_IsRestarting())", "%s\n\tDoing this while in-game is not likely to work as expected", "Com_FrontEnd_IsInFrontEnd() || Com_GameStart_IsRestarting()") )
      __debugbreak();
    if ( party->areWeHost )
    {
      Live_ThrowError(ERR_DROP, "@LUA_MENU_MP/NOGOODHOST");
      v4 = DVARBOOL_onlinegame;
      if ( !DVARBOOL_onlinegame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "onlinegame") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v4);
      if ( v4->current.enabled && !g_partyData.inParty )
      {
        if ( Lobby_IsInLobby() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 2714, ASSERT_TYPE_ASSERT, "(!Lobby_IsInLobby())", "%s\n\tWe're going to kill the lobby if we call xstartprivateparty and it's running", "!Lobby_IsInLobby()") )
          __debugbreak();
        if ( localClientNum.localClientNum )
        {
          LODWORD(v10) = localClientNum.localClientNum;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 2715, ASSERT_TYPE_ASSERT, "( ( mainActiveClient.localClientNum == LOCAL_CLIENT_0 ) )", "( mainActiveClient.localClientNum ) = %i", v10) )
            __debugbreak();
        }
        Com_Printf(25, "[%s] PartyMigrate - HandleMigrationFailure - xstartprivateparty\n", party->partyName);
        Cbuf_ExecuteBufferInternal((const LocalClientNum_t)localClientNum.localClientNum, localClientNum.localControllerIndex, "xstartprivateparty", 0, 0);
      }
    }
    else
    {
      LOBYTE(fmt) = 29;
      PartyClient_DisconnectFromHost(party, &localClientNum, "@LUA_MENU_MP/NOGOODHOST", 1, (const PartyDisconnectReason)fmt);
      if ( Party_IsPrivateParty(party) && Com_FrontEnd_IsInFrontEnd() )
      {
        Com_Printf(25, "[%s] PartyMigrate - HandleMigrationFailure - Opening youarehost menu while party is running.\n", party->partyName);
        LUI_OpenMenu(LOCAL_CLIENT_0, "youarehost", 1, 0, 0);
      }
    }
    v5 = DVARBOOL_onlinegame;
    if ( !DVARBOOL_onlinegame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "onlinegame") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v5);
    if ( v5->current.enabled && !g_partyData.inParty && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 2734, ASSERT_TYPE_ASSERT, "(!Dvar_GetBool_Internal_DebugName( DVARBOOL_onlinegame, \"onlinegame\" ) || g_partyData.inParty)", "%s\n\tAfter a migration failure, got left in a bad party state", "!Dvar_GetBool( onlinegame ) || g_partyData.inParty") )
      __debugbreak();
  }
  else
  {
    ClientFromController = CL_Mgr_GetClientFromController(controllerIndex);
    IsGameLobby = Party_IsGameLobby(party);
    IsLocalClientActive = CL_IsLocalClientActive(ClientFromController);
    if ( IsGameLobby )
    {
      if ( !IsLocalClientActive )
      {
        LODWORD(fmt) = controllerIndex;
        Com_PrintError(25, "[%s] Party - HandleMigrationFailure - Local client %i linked to controller %i is not active, shutting down party.\n", party->partyName, (unsigned int)ClientFromController, fmt);
        OnlineErrorManager::SetLastRecordedErrorCode(&g_onlineMgr.m_errorManager, (Online_Error_CAT_PARTY_t)16, NULL);
        Live_ThrowError(ERR_DISCONNECT, "@MP_ENDED_GAME_MIGRATION_FAILED");
      }
      if ( !Com_FrontEnd_IsInFrontEnd() )
      {
        Com_PrintError(25, "[%s] Party - HandleMigrationFailure - Since we're in-game, kicking back to the main menu\n", party->partyName);
        OnlineErrorManager::SetLastRecordedErrorCode(&g_onlineMgr.m_errorManager, (Online_Error_CAT_PARTY_t)32, NULL);
        Live_ThrowError(ERR_DISCONNECT, "@MP_ENDED_GAME_MIGRATION_FAILED");
      }
    }
    else if ( IsLocalClientActive && Com_FrontEnd_IsInFrontEnd() )
    {
      Com_Printf(25, "[%s] PartyMigrate - HandleMigrationFailure - Opening youarehost menu while party is not running.\n", party->partyName);
      LUI_OpenMenu(LOCAL_CLIENT_0, "youarehost", 1, 0, 0);
    }
    Party_StopParty(party);
  }
}

/*
==============
PartyMigrate_HandlePacket
==============
*/
__int64 PartyMigrate_HandlePacket(PartyData *party, const char *c, const PartyActiveClient *destClient, netadr_t *from, msg_t *msg)
{
  const char *string; 
  int v6; 
  __int64 v10; 
  const char *v11; 
  __int64 v12; 
  signed __int64 v13; 
  int v14; 
  __int64 v15; 
  int v16; 
  int v17; 
  int v18; 
  PartyActiveClient MainActiveClient; 
  const dvar_t *v20; 
  __int128 v21; 
  PartyActiveClient v23; 
  __int128 v24; 
  int addrHandleIndex; 

  string = messageHandlers_1[0].string;
  v6 = 0;
  if ( *messageHandlers_1[0].string )
  {
    v10 = 0i64;
    v11 = c + 1;
    while ( 2 )
    {
      v12 = 0x7FFFFFFFi64;
      if ( !v11 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
        __debugbreak();
      if ( !string && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 213, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
        __debugbreak();
      v13 = v11 - string;
      while ( 1 )
      {
        v14 = (unsigned __int8)string[v13];
        v15 = v12;
        v16 = *(unsigned __int8 *)string++;
        --v12;
        if ( !v15 )
        {
LABEL_18:
          MainActiveClient = Party_GetMainActiveClient(party, destClient->localControllerIndex);
          v20 = DVARBOOL_party_debug;
          v23 = MainActiveClient;
          if ( !DVARBOOL_party_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "party_debug") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(v20);
          if ( v20->current.enabled )
            Com_Printf(25, "oob: %s\n", c);
          if ( !messageHandlers_1[v6].func && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 3085, ASSERT_TYPE_ASSERT, "(messageHandlers[handler].func)", (const char *)&queryFormat, "messageHandlers[handler].func") )
            __debugbreak();
          v21 = *(_OWORD *)&from->type;
          addrHandleIndex = from->addrHandleIndex;
          v24 = v21;
          ((void (__fastcall *)(PartyData *, PartyActiveClient *, __int128 *, msg_t *))messageHandlers_1[v6].func)(party, &v23, &v24, msg);
          return 1i64;
        }
        if ( v14 != v16 )
        {
          v17 = v14 + 32;
          if ( (unsigned int)(v14 - 65) > 0x19 )
            v17 = v14;
          v14 = v17;
          v18 = v16 + 32;
          if ( (unsigned int)(v16 - 65) > 0x19 )
            v18 = v16;
          if ( v14 != v18 )
            break;
        }
        if ( !v14 )
          goto LABEL_18;
      }
      ++v10;
      ++v6;
      string = messageHandlers_1[v10].string;
      if ( *string )
        continue;
      break;
    }
  }
  return 0i64;
}

/*
==============
PartyMigrate_HostMigrationEnabled
==============
*/
_BOOL8 PartyMigrate_HostMigrationEnabled(const PartyData *party)
{
  const dvar_t *v1; 
  __int64 v3; 
  unsigned __int8 *i; 

  v1 = DVARBOOL_party_hostmigration;
  if ( !DVARBOOL_party_hostmigration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "party_hostmigration") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  if ( v1->current.enabled )
  {
    v3 = 0i64;
    for ( i = &party->partyMembers[0].status; *i != 6; i += 504 )
    {
      if ( ++v3 >= 200 )
        return (!Party_IsHostDedicated(party) || Party_IsPrivateDSMatch(party)) && !Live_IsInSystemlinkLobby() && PeerMesh_IsEnabled(party);
    }
  }
  return 0i64;
}

/*
==============
PartyMigrate_Init
==============
*/
void PartyMigrate_Init(void)
{
  g_partyData.migrateData.expectedNewHost = -1;
  Lobby_GetPartyData()->migrateData.expectedNewHost = -1;
}

/*
==============
PartyMigrate_IsGameServerHostMigration
==============
*/
__int64 PartyMigrate_IsGameServerHostMigration(PartyData *party)
{
  if ( PartyMigrate_MigrateActive(party) )
  {
    if ( Party_IsServerRunning(party) && !Party_IsInGameLobbyMigrationAllowed(party) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 494, ASSERT_TYPE_ASSERT, "(!Party_IsServerRunning( party ) || Party_IsInGameLobbyMigrationAllowed( party ))", (const char *)&queryFormat, "!Party_IsServerRunning( party ) || Party_IsInGameLobbyMigrationAllowed( party )") )
      __debugbreak();
    return 0i64;
  }
  else
  {
    if ( !Party_IsGameLobby(party) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 490, ASSERT_TYPE_ASSERT, "(Party_IsGameLobby( party ))", "%s\n\tServer host migrations should only happen on the game session", "Party_IsGameLobby( party )") )
      __debugbreak();
    return 1i64;
  }
}

/*
==============
PartyMigrate_IsPingTestActive
==============
*/
_BOOL8 PartyMigrate_IsPingTestActive(const PartyData *party)
{
  const dvar_t *v2; 

  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 989, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( Party_IsPrivateParty(party) )
    return 0i64;
  v2 = DVARBOOL_partymigrate_pingtest_active;
  if ( !DVARBOOL_partymigrate_pingtest_active && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "partymigrate_pingtest_active") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  return v2->current.enabled;
}

/*
==============
PartyMigrate_IsStatusValidForMigration
==============
*/
_BOOL8 PartyMigrate_IsStatusValidForMigration(const PartyData *party, const unsigned int memberIndex)
{
  return Party_IsMemberRegistered(party, memberIndex) && (Party_IsMemberPresent(party, memberIndex) || Party_IsPrivateParty(party) && Party_IsMemberIndexCommitted(party, memberIndex));
}

/*
==============
PartyMigrate_Map
==============
*/
void PartyMigrate_Map(LocalClientNum_t localClientNum)
{
  bool hardcoreMode; 
  int maxClients; 
  int maxAgents; 
  int m_serverFrameDuration; 
  PartyHostData *HostData; 
  bool v6; 
  const dvar_t *v7; 
  __int64 mapIsPreloaded; 
  __int64 migrate; 

  if ( cls.m_activeGameMapName[0] )
    goto LABEL_9;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_static.h", 295, ASSERT_TYPE_ASSERT, "(m_activeGameMapName[0])", "%s\n\tRequested mapname before it was set", "m_activeGameMapName[0]") )
    __debugbreak();
  if ( cls.m_activeGameMapName[0] )
  {
LABEL_9:
    if ( cls.m_activeGameTypeName[0] )
      goto LABEL_32;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_static.h", 309, ASSERT_TYPE_ASSERT, "(m_activeGameTypeName[0])", "%s\n\tRequested gametype before it was set", "m_activeGameTypeName[0]") )
      __debugbreak();
    if ( cls.m_activeGameTypeName[0] )
    {
LABEL_32:
      if ( !LODWORD(cl_maxLocalClients) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_static.h", 329, ASSERT_TYPE_ASSERT, "(cl_maxLocalClients)", "%s\n\tMust be called after client allocation", "cl_maxLocalClients") )
        __debugbreak();
      hardcoreMode = cls.m_activeGameHardcoreSetting;
      maxClients = cls.maxClients;
      maxAgents = cls.maxAgents;
      if ( !cls.m_serverFrameDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_static.h", 316, ASSERT_TYPE_ASSERT, "(m_serverFrameDuration)", "%s\n\tMust be called after client has received game state", "m_serverFrameDuration") )
        __debugbreak();
      m_serverFrameDuration = cls.m_serverFrameDuration;
      if ( !LODWORD(cl_maxLocalClients) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_static.h", 381, ASSERT_TYPE_ASSERT, "(cl_maxLocalClients)", "%s\n\tMust be called after client allocation", "cl_maxLocalClients") )
        __debugbreak();
      SV_CmdsMP_StartMapForParty(cls.m_activeGameMapName, cls.m_activeGameTypeName, maxClients, maxAgents, m_serverFrameDuration, cls.m_weaponMapMaxRuntimeEntries, hardcoreMode, 1, 1);
      HostData = Lobby_GetHostData();
      if ( HostData->preloadingMapStage != PRELOAD_MAP_STARTED )
      {
        LODWORD(migrate) = 2;
        LODWORD(mapIsPreloaded) = HostData->preloadingMapStage;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 3247, ASSERT_TYPE_ASSERT, "( hostData->preloadingMapStage ) == ( PRELOAD_MAP_STARTED )", "%s == %s\n\t%i, %i", "hostData->preloadingMapStage", "PRELOAD_MAP_STARTED", mapIsPreloaded, migrate) )
          __debugbreak();
      }
      v6 = (g_migrateFlags & 1) == 0;
      HostData->preloadingMapStage = PRELOAD_MAP_IDLE;
      if ( !v6 )
      {
        SV_CmdsMP_KickClientNum(g_oldHost, "EXE/PLAYERKICKED", 0);
        v7 = DVARBOOL_partytweak_kickoldhostsplitscreenclient;
        if ( !DVARBOOL_partytweak_kickoldhostsplitscreenclient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "partytweak_kickoldhostsplitscreenclient") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v7);
        if ( v7->current.enabled && g_oldHostSplitscreenClient != -1 )
          SV_CmdsMP_KickClientNum(g_oldHostSplitscreenClient, "EXE/PLAYERKICKED", 0);
      }
    }
    else
    {
      Com_PrintError(14, "PartyMigrate_Map: Missing gametype\n");
    }
  }
  else
  {
    Com_PrintError(14, "PartyMigrate_Map: Missing mapname\n");
  }
}

/*
==============
PartyMigrate_MigrateActive
==============
*/
_BOOL8 PartyMigrate_MigrateActive(const PartyData *party)
{
  const dvar_t *v2; 
  __int64 v3; 
  unsigned __int8 *p_status; 

  if ( !party->migrateData.migrateActive )
    return party->migrateData.migrateActive;
  v2 = DVARBOOL_party_hostmigration;
  if ( !DVARBOOL_party_hostmigration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "party_hostmigration") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  if ( v2->current.enabled )
  {
    v3 = 0i64;
    p_status = &party->partyMembers[0].status;
    while ( *p_status != 6 )
    {
      ++v3;
      p_status += 504;
      if ( v3 >= 200 )
      {
        if ( (!Party_IsHostDedicated(party) || Party_IsPrivateDSMatch(party)) && !Live_IsInSystemlinkLobby() && PeerMesh_IsEnabled(party) )
          return party->migrateData.migrateActive;
        break;
      }
    }
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 698, ASSERT_TYPE_ASSERT, "(!party->migrateData.migrateActive || PartyMigrate_HostMigrationEnabled( party ))", "%s\n\tMigration is active but not enabled", "!party->migrateData.migrateActive || PartyMigrate_HostMigrationEnabled( party )") )
    __debugbreak();
  return party->migrateData.migrateActive;
}

/*
==============
PartyMigrate_MigrateLocalClients
==============
*/
void PartyMigrate_MigrateLocalClients(PartyData *party)
{
  int i; 

  for ( i = 0; i < 2; ++i )
  {
    if ( CL_IsLocalClientActive((LocalClientNum_t)i) )
    {
      if ( !Session_IsValid(party->session) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 2888, ASSERT_TYPE_ASSERT, "(Session_IsValid( party->session ))", (const char *)&queryFormat, "Session_IsValid( party->session )") )
        __debugbreak();
      CL_Migrate((LocalClientNum_t)i, &party->session->dyn.sessionInfo);
    }
  }
}

/*
==============
PartyMigrate_MigrateToNewSession
==============
*/
void PartyMigrate_MigrateToNewSession(PartyData *party, const PartyActiveClient *mainActiveClient, const MigrationHostInfo *newHostInfo, const int isUsingHostInfoCache)
{
  const char *v8; 
  __int128 v9; 
  int clientNum; 
  const char *v11; 
  int MemberByXUID_AllowNotPresent; 
  const char *v13; 
  bool IsHost; 
  int v15; 
  const char *MemberName; 
  clientMigState_t LocalClientMigrationState; 
  clientMigState_t v18; 
  int expectedNewHost; 
  int v20; 
  const char *v21; 
  __int64 migrationBits; 
  int ArbitratorClientNum; 
  __int64 claimedArbitratorNum; 
  int v25; 
  __int64 v26; 
  const char *v27; 
  int v28; 
  const char *v29; 
  char *fmt; 
  char *fmta; 
  __int64 v32; 
  __int64 v33; 
  __int64 v34; 
  netadr_t v35; 

  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 2897, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( !mainActiveClient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 2898, ASSERT_TYPE_ASSERT, "(mainActiveClient)", (const char *)&queryFormat, "mainActiveClient") )
    __debugbreak();
  if ( !newHostInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 2899, ASSERT_TYPE_ASSERT, "(newHostInfo)", (const char *)&queryFormat, "newHostInfo") )
    __debugbreak();
  v8 = XUID::ToDevString(&newHostInfo->xuid);
  v9 = *(_OWORD *)&newHostInfo->netAddr.type;
  clientNum = newHostInfo->clientNum;
  v35.addrHandleIndex = newHostInfo->netAddr.addrHandleIndex;
  *(_OWORD *)&v35.type = v9;
  v11 = NET_AdrToString(&v35);
  LODWORD(fmt) = clientNum;
  Com_Printf(25, "[%s] PartyMigrate - MigrateToNewSession - Received sessinfo message from %s. (%i / %s)\n", party->partyName, v11, fmt, v8);
  if ( !Session_IsValid(party->session) )
  {
    Com_Printf(25, "[%s] PartyMigrate - MigrateToNewSession - Received session info but we don't have a session to migrate.\n", party->partyName);
    return;
  }
  MemberByXUID_AllowNotPresent = Party_FindMemberByXUID_AllowNotPresent(party, newHostInfo->xuid);
  if ( newHostInfo->clientNum != MemberByXUID_AllowNotPresent )
  {
    v13 = XUID::ToDevString(&newHostInfo->xuid);
    LODWORD(v32) = MemberByXUID_AllowNotPresent;
    Com_Printf(25, "[%s] Ignoring new session info because newHost %i (xuid %s) does not match the found host index %i\n", party->partyName, (unsigned int)newHostInfo->clientNum, v13, v32);
    return;
  }
  if ( newHostInfo->clientNum >= 0xC8u )
  {
    LODWORD(v32) = newHostInfo->clientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 2916, ASSERT_TYPE_ASSERT, "(unsigned)( newHostInfo->clientNum ) < (unsigned)( 200 )", "newHostInfo->clientNum doesn't index MAX_PARTY_MEMBERS\n\t%i not in [0, %i)", v32, 200) )
      __debugbreak();
  }
  IsHost = Party_IsHost(party, newHostInfo->clientNum);
  v15 = newHostInfo->clientNum;
  if ( IsHost )
  {
    MemberName = Party_GetMemberName(party, v15);
    Com_Printf(25, "[%s] Ignoring new session info because newHost is %i (%s), which is already the host (probably duplicate)\n", party->partyName, (unsigned int)newHostInfo->clientNum, MemberName);
    return;
  }
  if ( Party_IsMemberLocalPlayer(party, v15) )
  {
    Com_Printf(25, "[%s] PartyMigrate - Ignoring new session info because the new host number is a local player (%i)\n", party->partyName, (unsigned int)newHostInfo->clientNum);
    return;
  }
  if ( newHostInfo->inGameMigration )
  {
    if ( !(unsigned int)PartyMigrate_IsGameServerHostMigration(party) )
    {
      Com_Printf(25, "[%s] PartyMigrate - Ignoring new game session info because we are currently processing an out-of-game migration.\n", party->partyName);
      return;
    }
    LocalClientMigrationState = CL_GetLocalClientMigrationState((const LocalClientNum_t)mainActiveClient->localClientNum);
    v18 = LocalClientMigrationState;
    if ( LocalClientMigrationState != CMSTATE_LIMBO )
    {
      if ( LocalClientMigrationState == CMSTATE_OLDHOSTLEAVING && !party->migrateData.cachedNewHostInfo && !isUsingHostInfoCache )
      {
        if ( party->migrateData.expectedNewHost != -1 )
        {
          LODWORD(v32) = party->migrateData.expectedNewHost;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 2943, ASSERT_TYPE_ASSERT, "( ( party->migrateData.expectedNewHost == -1 ) )", "( party->migrateData.expectedNewHost ) = %i", v32) )
            __debugbreak();
        }
        Com_Printf(25, "[%s] Received session info while in the wrong state. Storing new host info for future use.\n", party->partyName);
        party->migrateData.cachedNewHostInfo = 1;
        MigrationHostInfo::operator=(&party->migrateData.newHostInfo, newHostInfo);
      }
      LODWORD(v32) = isUsingHostInfoCache;
      LODWORD(fmta) = mainActiveClient->localClientNum;
      Com_Printf(25, "[%s] Received stray session info. Wrong migration state %i for client %i. isUsingHostInfoCache = %i.\n", party->partyName, (unsigned int)v18, fmta, v32);
      return;
    }
    if ( CL_MigrationBackout() )
    {
      Com_Printf(25, "[%s] PartyMigrate - MigrateToNewSession - Ignoring new game session info because we were asked to backout.\n", party->partyName);
      return;
    }
    if ( party->migrateData.expectedNewHost >= 0xC8u )
    {
      LODWORD(v33) = 200;
      LODWORD(v32) = party->migrateData.expectedNewHost;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 2960, ASSERT_TYPE_ASSERT, "(unsigned)( party->migrateData.expectedNewHost ) < (unsigned)( 200 )", "party->migrateData.expectedNewHost doesn't index MAX_PARTY_MEMBERS\n\t%i not in [0, %i)", v32, v33) )
        __debugbreak();
    }
    expectedNewHost = party->migrateData.expectedNewHost;
    v20 = newHostInfo->clientNum;
    if ( expectedNewHost != newHostInfo->clientNum )
    {
      v21 = XUID::ToDevString(&newHostInfo->xuid);
      LODWORD(v32) = expectedNewHost;
      Com_Printf(25, "[%s] PartyMigrate - MigrateToNewSession - Ignoring new game session info because newHost %i (xuid %s) does not match expected new host %i\n", party->partyName, (unsigned int)newHostInfo->clientNum, v21, v32);
      return;
    }
    goto LABEL_59;
  }
  if ( !PartyMigrate_MigrateActive(party) )
  {
    if ( !Party_IsRunning(party) && !Party_IsInGameLobbyMigrationAllowed(party) )
    {
      Com_Printf(25, "[%s] PartyMigrate - Ignoring new party/lobby session info because a party migration is not active and the game is running.\n", party->partyName);
      return;
    }
    migrationBits = (unsigned int)newHostInfo->migrationBits;
    if ( (_DWORD)migrationBits != party->migrateData.indexBits )
    {
      LODWORD(fmta) = party->migrateData.indexBits;
      Com_Printf(25, "[%s] PartyMigrate - Ignoring new party/lobby session info because a party migration is not active and the index bits don't match (theirs %i vs ours %i)\n", party->partyName, migrationBits, fmta);
      return;
    }
    ArbitratorClientNum = PartyMigrate_GetArbitratorClientNum(party, 0);
    claimedArbitratorNum = (unsigned int)newHostInfo->claimedArbitratorNum;
    if ( ArbitratorClientNum != (_DWORD)claimedArbitratorNum )
    {
      LODWORD(fmta) = ArbitratorClientNum;
      Com_Printf(25, "[%s] PartyMigrate - Ignoring new party/lobby session info because a party migration is not active and their arbitrator does not match ours (theirs %i vs ours %i).\n", party->partyName, claimedArbitratorNum, fmta);
      return;
    }
    if ( party->migrateData.expectedNewHost >= 0 )
    {
      LODWORD(v32) = party->migrateData.expectedNewHost;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 2991, ASSERT_TYPE_ASSERT, "( ( party->migrateData.expectedNewHost < 0 ) )", "( party->migrateData.expectedNewHost ) = %i", v32) )
        __debugbreak();
    }
    Com_Printf(25, "[%s] PartyMigrate - Received sessInfo message while the migration is inactive, will start a new migration (we may have missed the migrateTo message).\n", party->partyName);
    PartyMigrate_StartMigrationFromMessage(party, mainActiveClient, newHostInfo->clientNum, 0, 0);
    if ( party->migrateData.expectedNewHost != newHostInfo->clientNum && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 2995, ASSERT_TYPE_ASSERT, "( party->migrateData.expectedNewHost ) == ( newHostInfo->clientNum )", "%s == %s\n\t%i, %i", "party->migrateData.expectedNewHost", "newHostInfo->clientNum", party->migrateData.expectedNewHost, newHostInfo->clientNum) )
      __debugbreak();
  }
  if ( (unsigned int)PartyMigrate_IsGameServerHostMigration(party) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 2998, ASSERT_TYPE_ASSERT, "(!PartyMigrate_IsGameServerHostMigration( party ))", (const char *)&queryFormat, "!PartyMigrate_IsGameServerHostMigration( party )") )
    __debugbreak();
  v25 = party->migrateData.expectedNewHost;
  if ( v25 < 0 )
  {
    Com_Printf(25, "[%s] Received session info but the expected new host has not been set; it is probably the arbitrator and we didn't get the HostTo message yet. Proceeding anyway.\n", party->partyName);
    v20 = newHostInfo->clientNum;
    goto LABEL_59;
  }
  v20 = newHostInfo->clientNum;
  if ( v25 == newHostInfo->clientNum )
  {
LABEL_59:
    PartyClient_CommitPartyHostMigration(party, v20);
    if ( PartyMigrate_MigrateActive(party) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 3014, ASSERT_TYPE_ASSERT, "(!PartyMigrate_MigrateActive( party ))", "%s\n\tPartyClient_CommitPartyHostMigration should have cleared the migration data", "!PartyMigrate_MigrateActive( party )") )
      __debugbreak();
    if ( party->migrateData.cachedNewHostInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 3015, ASSERT_TYPE_ASSERT, "(!party->migrateData.cachedNewHostInfo)", "%s\n\tPartyClient_CommitPartyHostMigration should have cleared the migration data", "!party->migrateData.cachedNewHostInfo") )
      __debugbreak();
    if ( (Party_GetGameFlags(party) & 1) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 3016, ASSERT_TYPE_ASSERT, "(!( Party_GetGameFlags( party ) & 0x00000001 ))", "%s\n\tWe should have cleared this beforehand", "!( Party_GetGameFlags( party ) & XSESSION_CREATE_HOST )") )
      __debugbreak();
    Com_Printf(25, "[%s] Migration index bits going from %i", party->partyName, (unsigned int)party->migrateData.indexBits);
    v26 = (party->migrateData.indexBits + 1) & 0x80000003;
    if ( party->migrateData.indexBits + 1 < 0 )
      v26 = ((unsigned __int8)(((LOBYTE(party->migrateData.indexBits) + 1) & 3) - 1) | 0xFFFFFFFC) + 1;
    party->migrateData.indexBits = v26;
    Com_Printf(25, " to %i\n", v26);
    if ( newHostInfo->inGameMigration )
    {
      v27 = Party_GetMemberName(party, newHostInfo->clientNum);
      Dvar_SetString_Internal(DVARSTR_party_hostname, v27);
      PartyMigrate_MigrateLocalClients(party);
      party->migrateData.expectedNewHost = -1;
    }
    else
    {
      if ( Party_IsGameLobby(party) )
        Party_RandomizeParty(party);
      PartyMigrate_StopMigration(party);
    }
    if ( !Party_IsHost(party, newHostInfo->clientNum) )
    {
      LODWORD(v34) = Party_HostNum(party);
      LODWORD(v33) = newHostInfo->clientNum;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 3039, ASSERT_TYPE_SANITY, "(Party_IsHost( party, newHostInfo->clientNum ))", "%s\n\t\"Migration did not work properly, the new host num is not the known host (%i vs %i)\"", "Party_IsHost( party, newHostInfo->clientNum )", v33, v34) )
        __debugbreak();
    }
    PartyMigrate_DebugEnd(party);
    return;
  }
  if ( (unsigned int)v25 >= 0xC8 )
  {
    LODWORD(v33) = 200;
    LODWORD(v32) = party->migrateData.expectedNewHost;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 3006, ASSERT_TYPE_ASSERT, "(unsigned)( party->migrateData.expectedNewHost ) < (unsigned)( 200 )", "party->migrateData.expectedNewHost doesn't index MAX_PARTY_MEMBERS\n\t%i not in [0, %i)", v32, v33) )
      __debugbreak();
  }
  v28 = party->migrateData.expectedNewHost;
  v29 = XUID::ToDevString(&newHostInfo->xuid);
  LODWORD(v32) = v28;
  Com_Printf(25, "[%s] Ignoring new party/lobby session info because newHost %i (xuid %s) does not match expected new host %i\n", party->partyName, (unsigned int)newHostInfo->clientNum, v29, v32);
}

/*
==============
PartyMigrate_NewHostDecided
==============
*/
void PartyMigrate_NewHostDecided(PartyData *party, const PartyActiveClient *mainActiveClient, const int newHost)
{
  __int64 v3; 
  int expectedNewHost; 
  const char *v7; 
  int v8; 
  unsigned __int8 *p_status; 
  XUID *p_playerUID; 
  __int64 v11; 
  __int64 v12; 
  __int64 v13; 
  __int64 v14; 
  __int64 v15; 
  const char *v16; 
  const char *MemberName; 
  char *fmt; 
  msg_t buf; 
  char dest[512]; 
  unsigned __int8 data[256]; 

  v3 = newHost;
  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 4173, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( !mainActiveClient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 4174, ASSERT_TYPE_ASSERT, "(mainActiveClient)", (const char *)&queryFormat, "mainActiveClient") )
    __debugbreak();
  if ( !party->migrateData.weAreArbitrating && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 4175, ASSERT_TYPE_ASSERT, "(party->migrateData.weAreArbitrating)", (const char *)&queryFormat, "party->migrateData.weAreArbitrating") )
    __debugbreak();
  if ( (unsigned int)PartyMigrate_IsGameServerHostMigration(party) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 4176, ASSERT_TYPE_ASSERT, "(!PartyMigrate_IsGameServerHostMigration( party ))", (const char *)&queryFormat, "!PartyMigrate_IsGameServerHostMigration( party )") )
    __debugbreak();
  if ( !PartyMigrate_MigrateActive(party) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 4177, ASSERT_TYPE_ASSERT, "(PartyMigrate_MigrateActive( party ))", (const char *)&queryFormat, "PartyMigrate_MigrateActive( party )") )
    __debugbreak();
  expectedNewHost = party->migrateData.expectedNewHost;
  if ( expectedNewHost >= 0 && expectedNewHost != (_DWORD)v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 4178, ASSERT_TYPE_ASSERT, "((party->migrateData.expectedNewHost < 0) || (party->migrateData.expectedNewHost == newHost))", "%s\n\tChanged our mind about the host! This will confuse clients. %i => %i", "(party->migrateData.expectedNewHost < 0) || (party->migrateData.expectedNewHost == newHost)", party->migrateData.expectedNewHost, v3) )
    __debugbreak();
  if ( (int)v3 >= 0 )
  {
    if ( (!Party_IsMemberRegistered(party, v3) || !Party_IsMemberPresent(party, v3) && (!Party_IsPrivateParty(party) || !Party_IsMemberIndexCommitted(party, v3))) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 4189, ASSERT_TYPE_ASSERT, "(PartyMigrate_IsStatusValidForMigration( party, newHost ))", (const char *)&queryFormat, "PartyMigrate_IsStatusValidForMigration( party, newHost )") )
      __debugbreak();
    LODWORD(fmt) = party->migrateData.bestHost.info.connectivity;
    Com_sprintf_truncate<512>((char (*)[512])dest, "(Upload %i, NAT %i, connectivity %x", (unsigned int)party->migrateData.bestHost.info.upload, (unsigned int)party->migrateData.bestHost.info.NAT, fmt);
    v11 = -1i64;
    v12 = -1i64;
    do
      ++v12;
    while ( dest[v12] );
    Com_sprintf_truncate(&dest[v12], 512 - v12, ", CPU %g", (float)((float)party->migrateData.bestHost.info.cpuSpeed * 0.001));
    v13 = -1i64;
    do
      ++v13;
    while ( dest[v13] );
    Com_sprintf_truncate(&dest[v13], 512 - v13, ", RAM %i", (unsigned int)party->migrateData.bestHost.info.physMemory);
    v14 = -1i64;
    do
      ++v14;
    while ( dest[v14] );
    Com_sprintf_truncate(&dest[v14], 512 - v14, ", avgPing %i", (unsigned int)party->migrateData.bestHost.info.avgPing);
    v15 = -1i64;
    do
      ++v15;
    while ( dest[v15] );
    Com_sprintf_truncate(&dest[v15], 512 - v15, ", hostScore %0.2f", party->migrateData.bestHost.info.hostScore);
    do
      ++v11;
    while ( dest[v11] );
    Com_sprintf_truncate(&dest[v11], 512 - v11, ")");
    v16 = XUID::ToDevString(&party->partyMembers[v3].playerUID);
    MemberName = Party_GetMemberName(party, v3);
    Com_Printf(25, "[%s] Client %i (%s - %s) should be host %s\n", party->partyName, (unsigned int)v3, MemberName, v16, dest);
    PartyMigrate_TellNewHost(party, mainActiveClient, v3);
    PartyMigrate_To(party, mainActiveClient, v3, 0);
  }
  else
  {
    Com_Printf(25, "[%s] Client %i should be host (disbanding)\n", party->partyName, (unsigned int)v3);
    if ( !mainActiveClient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 456, ASSERT_TYPE_ASSERT, "(partyActiveclient)", (const char *)&queryFormat, "partyActiveclient") )
      __debugbreak();
    if ( !party->migrateData.weAreArbitrating && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 457, ASSERT_TYPE_ASSERT, "(party->migrateData.weAreArbitrating)", (const char *)&queryFormat, "party->migrateData.weAreArbitrating") )
      __debugbreak();
    MSG_Init(&buf, data, 256);
    v7 = j_va("%inomigrate %i", (unsigned int)party->partyId, (unsigned int)party->migrateData.indexBits);
    MSG_WriteString(&buf, v7);
    Com_Printf(25, "[%s] Telling everyone there will be no migration. :(\n", party->partyName);
    v8 = 0;
    p_status = &party->partyMembers[0].status;
    p_playerUID = &party->partyMembers[0].playerUID;
    do
    {
      if ( *p_status != 6 && Party_IsMemberIndexDataAvailable(party, v8) && v8 != party->migrateData.arbitratorClientNum && !Live_XUIDIsLocalPlayer((const XUID)p_playerUID->m_id) )
        PeerMesh_Send(party, (const LocalClientNum_t)mainActiveClient->localClientNum, v8, buf.data, buf.cursize, 0, 1);
      ++v8;
      p_playerUID += 63;
      p_status += 504;
    }
    while ( v8 < 200 );
    PartyMigrate_CancelMigration(party, mainActiveClient);
  }
}

/*
==============
PartyMigrate_NormalizeHostScore
==============
*/
float PartyMigrate_NormalizeHostScore(float input, float badValue, float goodValue)
{
  if ( goodValue == badValue && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 1435, ASSERT_TYPE_ASSERT, "(goodValue != badValue)", (const char *)&queryFormat, "goodValue != badValue") )
    __debugbreak();
  if ( (float)((float)(input - badValue) / (float)(goodValue - badValue)) >= 1.001 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 1437, ASSERT_TYPE_SANITY, "( result < 1.0f + 0.001f )", (const char *)&queryFormat, "result < 1.0f + EQUAL_EPSILON") )
    __debugbreak();
  return (float)(input - badValue) / (float)(goodValue - badValue);
}

/*
==============
PartyMigrate_PrintCantHost
==============
*/
void PartyMigrate_PrintCantHost(const PartyData *party, int localControllerIndex, bool requireTalkToAllClients)
{
  int NumGameSlots; 
  int v7; 
  unsigned int LocalNatType; 
  int NecessaryBandwidth; 
  unsigned int UploadSpeed; 
  int OurClientNum; 
  int v12; 
  int v13; 
  unsigned int ClientConnectivity; 
  PartyActiveClient outPartyActiveClient; 

  if ( Party_GetSecondaryActiveClient(party, &outPartyActiveClient) && outPartyActiveClient.localControllerIndex == localControllerIndex )
  {
    Com_Printf(25, "[%s] party->splitscreenData.active && localControllerIndex (%i) != party->splitscreenData.mainClient.localControllerIndex (%i)\n", party->partyName, (unsigned int)localControllerIndex, party->splitscreenData.mainClient.localControllerIndex);
  }
  else
  {
    NumGameSlots = Party_GetNumGameSlots(party);
    v7 = NumGameSlots;
    if ( NumGameSlots )
    {
      if ( Party_CanHostServer(party, NumGameSlots) )
      {
        OurClientNum = Live_GetOurClientNum(localControllerIndex, party);
        if ( OurClientNum >= 0 && party->partyMembers[OurClientNum].status )
        {
          if ( LiveAntiCheat_FeatureIsBanned(13) )
          {
            Com_PrintError(25, "[%s] We have been banned from hosting, so we are not nominating ourselves.\n", party->partyName);
          }
          else
          {
            if ( !requireTalkToAllClients && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 868, ASSERT_TYPE_ASSERT, "(requireTalkToAllClients)", (const char *)&queryFormat, "requireTalkToAllClients") )
              __debugbreak();
            v12 = Live_GetOurClientNum(localControllerIndex, party);
            if ( v12 >= 0 && PartyMigrate_GetClientConnectivity(party, v12) == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 869, ASSERT_TYPE_ASSERT, "(!PartyMigrate_CanWeConnectToAllClients( party, localControllerIndex ))", (const char *)&queryFormat, "!PartyMigrate_CanWeConnectToAllClients( party, localControllerIndex )") )
              __debugbreak();
            v13 = Live_GetOurClientNum(localControllerIndex, party);
            if ( v13 < 0 )
            {
              Com_Printf(25, "[%s] We can't talk to all the clients, so we're not going to host. Our client num is invalid\n", party->partyName);
            }
            else
            {
              ClientConnectivity = PartyMigrate_GetClientConnectivity(party, v13);
              Com_Printf(25, "[%s] We can't talk to all the clients, so we're not going to host. Client connectivity is %x\n", party->partyName, ClientConnectivity);
            }
          }
        }
        else
        {
          Com_Printf(25, "[%s] We don't have party data, so we're not going to host\n", party->partyName);
        }
      }
      else if ( Online_CanHostLobby() )
      {
        LocalNatType = Live_GetLocalNatType();
        Com_Printf(25, "[%s] We aren't allowed to host due to our network setup (NAT type=%d), so we're not going to host\n", party->partyName, LocalNatType);
      }
      else
      {
        NecessaryBandwidth = Live_GetNecessaryBandwidth(v7);
        UploadSpeed = Online_GetUploadSpeed();
        Com_Printf(25, "[%s] We don't have enough bandwidth (%i) to host a %i player game (requires %i), so we're not going to host\n", party->partyName, UploadSpeed, v7, NecessaryBandwidth);
      }
    }
    else
    {
      Com_Printf(25, "[%s] numSlots == 0, so we're not going to host\n", party->partyName);
    }
  }
}

/*
==============
PartyMigrate_RequestFindBestHost
==============
*/
void PartyMigrate_RequestFindBestHost(PartyData *party, const int controllerIndex)
{
  __int128 v2; 
  const char *v4; 
  const char *v5; 
  const dvar_t *v6; 
  float value; 
  double v8; 
  int ControllerFromClient; 
  char *v10; 
  __int64 v11; 
  int v12; 
  int v13; 
  char v14; 
  XUID *p_playerUID; 
  int i; 
  NetConnection *MemberConnection; 
  const char *partyName; 
  int originalControllerNum[2]; 
  msg_t buf; 
  char nameBufferIn[256]; 
  unsigned __int8 data[256]; 
  __int128 v23; 

  originalControllerNum[0] = controllerIndex;
  v4 = "party";
  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 4293, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( !party->areWeHost && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 4294, ASSERT_TYPE_ASSERT, "(party->areWeHost)", (const char *)&queryFormat, "party->areWeHost") )
    __debugbreak();
  if ( PartyMigrate_HostMigrationEnabled(party) )
  {
    v23 = v2;
    MSG_Init(&buf, data, 256);
    v5 = j_va("%ifindbest %i", (unsigned int)party->partyId, (unsigned int)party->migrateData.indexBits);
    MSG_WriteString(&buf, v5);
    v6 = DVARFLT_pt_logHostSelectionChance;
    if ( !DVARFLT_pt_logHostSelectionChance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "pt_logHostSelectionChance") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v6);
    value = v6->current.value;
    v8 = I_flrand(0.0, 1.0);
    if ( *(float *)&v8 >= value )
    {
      s_shouldLogHostSelection = 0;
      MSG_WriteBit0(&buf);
    }
    else
    {
      s_shouldLogHostSelection = 1;
      MSG_WriteBit1(&buf);
      s_hostSelectionLoggingData.cause = 0;
      ControllerFromClient = CL_Mgr_GetControllerFromClient(LOCAL_CLIENT_0);
      Live_GetOnlineUserName(ControllerFromClient, nameBufferIn, 256);
      v10 = nameBufferIn;
      v11 = 0xCBF29CE484222325ui64;
      while ( 1 )
      {
        v12 = *v10;
        v13 = v12 + 32;
        if ( (unsigned __int8)(*v10 - 65) > 0x19u )
          v13 = *v10;
        v11 = 0x100000001B3i64 * (v13 ^ (unsigned __int64)v11);
        if ( !(_BYTE)v12 )
          break;
        ++v10;
      }
      s_hostSelectionLoggingData.migrationID = v11 ^ _time64(NULL);
      MSG_WriteInt64(&buf, s_hostSelectionLoggingData.migrationID);
    }
    v14 = 0;
    p_playerUID = &party->partyMembers[0].playerUID;
    for ( i = 0; i < 200; ++i )
    {
      if ( Party_IsMemberIndexDataAvailable(party, i) && !Live_XUIDIsLocalPlayer((const XUID)p_playerUID->m_id) && Party_IsMemberRegistered(party, i) )
      {
        if ( Party_MemberHasLoopbackAddr(party, i) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 4333, ASSERT_TYPE_ASSERT, "(!Party_MemberHasLoopbackAddr( party, memberIndex ))", (const char *)&queryFormat, "!Party_MemberHasLoopbackAddr( party, memberIndex )") )
          __debugbreak();
        if ( Party_IsHost(party, i) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 4334, ASSERT_TYPE_ASSERT, "(!Party_IsHost( party, memberIndex ))", (const char *)&queryFormat, "!Party_IsHost( party, memberIndex )") )
          __debugbreak();
        MemberConnection = (NetConnection *)Party_GetMemberConnection(party, i);
        NetConnection::SendReliable(MemberConnection, &buf);
        v14 = 1;
      }
      p_playerUID += 63;
    }
    if ( v14 )
    {
      *(PartyActiveClient *)originalControllerNum = Party_GetMainActiveClient(party, originalControllerNum[0]);
      if ( Party_IsGameLobby(party) )
        v4 = "lobby";
      Com_Printf(25, "[%s] We are the %s host and we're asking everyone to find the best host\n", party->partyName, v4);
      PartyMigrate_StartTimeout(party);
      if ( PartyMigrate_SetupMigration(party, (const PartyActiveClient *)originalControllerNum) )
      {
        if ( !PartyMigrate_MigrateActive(party) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 1359, ASSERT_TYPE_ASSERT, "(PartyMigrate_MigrateActive( party ))", (const char *)&queryFormat, "PartyMigrate_MigrateActive( party )") )
          __debugbreak();
        PartyMigrate_SelectOurNominee(party, (const PartyActiveClient *)originalControllerNum);
      }
      PartyMigrate_CheckNegotiationDisconnect(party, (const PartyActiveClient *)originalControllerNum);
    }
    else
    {
      partyName = party->partyName;
      if ( Party_IsGameLobby(party) )
        v4 = "lobby";
      Com_PrintWarning(25, "[%s] We are the %s host and we cannot migrate party %s because all clients appear to be local!\n", party->partyName, v4, partyName);
    }
  }
}

/*
==============
PartyMigrate_ResetTweakDvars
==============
*/
void PartyMigrate_ResetTweakDvars(void)
{
  const dvar_t *v0; 
  const dvar_t *v1; 
  const dvar_t *v2; 
  const dvar_t *v3; 
  const dvar_t *v4; 
  const dvar_t *v5; 
  const dvar_t *v6; 
  const dvar_t *v7; 
  const dvar_t *v8; 
  const dvar_t *v9; 
  const dvar_t *v10; 
  const dvar_t *v11; 
  const dvar_t *v12; 
  const dvar_t *v13; 

  v0 = DVARBOOL_partymigrate_pingtest_active;
  if ( !DVARBOOL_partymigrate_pingtest_active && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar_api.h", 759, ASSERT_TYPE_ASSERT, "( dvar )", "Dvar accessed after deregistration") )
    __debugbreak();
  Dvar_Reset(v0, DVAR_SOURCE_INTERNAL);
  v1 = DVARINT_partymigrate_pingtest_retry;
  if ( !DVARINT_partymigrate_pingtest_retry && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar_api.h", 759, ASSERT_TYPE_ASSERT, "( dvar )", "Dvar accessed after deregistration") )
    __debugbreak();
  Dvar_Reset(v1, DVAR_SOURCE_INTERNAL);
  v2 = DVARINT_partymigrate_pingtest_timeout;
  if ( !DVARINT_partymigrate_pingtest_timeout && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar_api.h", 759, ASSERT_TYPE_ASSERT, "( dvar )", "Dvar accessed after deregistration") )
    __debugbreak();
  Dvar_Reset(v2, DVAR_SOURCE_INTERNAL);
  v3 = DVARINT_partymigrate_pingtest_filterThreshold;
  if ( !DVARINT_partymigrate_pingtest_filterThreshold && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar_api.h", 759, ASSERT_TYPE_ASSERT, "( dvar )", "Dvar accessed after deregistration") )
    __debugbreak();
  Dvar_Reset(v3, DVAR_SOURCE_INTERNAL);
  v4 = DVARFLT_partymigrate_cpuBonusThreshold;
  if ( !DVARFLT_partymigrate_cpuBonusThreshold && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar_api.h", 759, ASSERT_TYPE_ASSERT, "( dvar )", "Dvar accessed after deregistration") )
    __debugbreak();
  Dvar_Reset(v4, DVAR_SOURCE_INTERNAL);
  v5 = DVARINT_partymigrate_cpuBonusPing;
  if ( !DVARINT_partymigrate_cpuBonusPing && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar_api.h", 759, ASSERT_TYPE_ASSERT, "( dvar )", "Dvar accessed after deregistration") )
    __debugbreak();
  Dvar_Reset(v5, DVAR_SOURCE_INTERNAL);
  v6 = DVARINT_partymigrate_selectiontime;
  if ( !DVARINT_partymigrate_selectiontime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar_api.h", 759, ASSERT_TYPE_ASSERT, "( dvar )", "Dvar accessed after deregistration") )
    __debugbreak();
  Dvar_Reset(v6, DVAR_SOURCE_INTERNAL);
  v7 = DVARINT_partymigrate_broadcast_interval;
  if ( !DVARINT_partymigrate_broadcast_interval && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar_api.h", 759, ASSERT_TYPE_ASSERT, "( dvar )", "Dvar accessed after deregistration") )
    __debugbreak();
  Dvar_Reset(v7, DVAR_SOURCE_INTERNAL);
  v8 = DVARINT_partymigrate_timeout;
  if ( !DVARINT_partymigrate_timeout && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar_api.h", 759, ASSERT_TYPE_ASSERT, "( dvar )", "Dvar accessed after deregistration") )
    __debugbreak();
  Dvar_Reset(v8, DVAR_SOURCE_INTERNAL);
  v9 = DVARINT_partymigrate_timeoutmax;
  if ( !DVARINT_partymigrate_timeoutmax && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar_api.h", 759, ASSERT_TYPE_ASSERT, "( dvar )", "Dvar accessed after deregistration") )
    __debugbreak();
  Dvar_Reset(v9, DVAR_SOURCE_INTERNAL);
  v10 = DVARINT_partymigrate_makeHostTimeout;
  if ( !DVARINT_partymigrate_makeHostTimeout && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar_api.h", 759, ASSERT_TYPE_ASSERT, "( dvar )", "Dvar accessed after deregistration") )
    __debugbreak();
  Dvar_Reset(v10, DVAR_SOURCE_INTERNAL);
  v11 = DVARINT_partymigrate_logResults;
  if ( !DVARINT_partymigrate_logResults && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar_api.h", 759, ASSERT_TYPE_ASSERT, "( dvar )", "Dvar accessed after deregistration") )
    __debugbreak();
  Dvar_Reset(v11, DVAR_SOURCE_INTERNAL);
  v12 = DVARINT_partymigrate_uploadtest_minThreshold;
  if ( !DVARINT_partymigrate_uploadtest_minThreshold && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar_api.h", 759, ASSERT_TYPE_ASSERT, "( dvar )", "Dvar accessed after deregistration") )
    __debugbreak();
  Dvar_Reset(v12, DVAR_SOURCE_INTERNAL);
  v13 = DVARBOOL_partymigrate_preferSameHost;
  if ( !DVARBOOL_partymigrate_preferSameHost && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar_api.h", 759, ASSERT_TYPE_ASSERT, "( dvar )", "Dvar accessed after deregistration") )
    __debugbreak();
  Dvar_Reset(v13, DVAR_SOURCE_INTERNAL);
}

/*
==============
PartyMigrate_RestartServer
==============
*/
void PartyMigrate_RestartServer(PartyData *party, const PartyActiveClient *mainActiveClient, const int oldHost, const int migrateFlags, const int ourClientNum, const int migrationBits, const int arbitratorNum)
{
  const dvar_t *v11; 
  int i; 
  unsigned int v13; 
  char *fmt; 
  __int64 oldHosta; 
  __int64 v16; 

  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 3265, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( !mainActiveClient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 3266, ASSERT_TYPE_ASSERT, "(mainActiveClient)", (const char *)&queryFormat, "mainActiveClient") )
    __debugbreak();
  if ( !party->areWeHost && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 3267, ASSERT_TYPE_ASSERT, "(party->areWeHost)", (const char *)&queryFormat, "party->areWeHost") )
    __debugbreak();
  if ( !Party_IsGameLobby(party) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 3268, ASSERT_TYPE_ASSERT, "(Party_IsGameLobby( party ))", (const char *)&queryFormat, "Party_IsGameLobby( party )") )
    __debugbreak();
  if ( PartyMigrate_MigrateActive(party) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 3269, ASSERT_TYPE_ASSERT, "(!PartyMigrate_MigrateActive( party ))", "%s\n\tLobby migration in progress while the game is running", "!PartyMigrate_MigrateActive( party )") )
    __debugbreak();
  if ( !(unsigned int)PartyMigrate_IsGameServerHostMigration(party) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 3270, ASSERT_TYPE_ASSERT, "(PartyMigrate_IsGameServerHostMigration( party ))", (const char *)&queryFormat, "PartyMigrate_IsGameServerHostMigration( party )") )
    __debugbreak();
  party->lobbyFlags &= 0xFFFFFFBB;
  party->lobbyFlags |= 0x20u;
  g_migrateFlags = migrateFlags;
  v11 = DVARBOOL_partytweak_kickoldhostsplitscreenclient;
  g_oldHost = oldHost;
  g_oldHostSplitscreenClient = -1;
  if ( !DVARBOOL_partytweak_kickoldhostsplitscreenclient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "partytweak_kickoldhostsplitscreenclient") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v11);
  if ( v11->current.enabled && Party_IsMemberRegistered(party, oldHost) )
  {
    for ( i = 0; i < 200; ++i )
    {
      if ( oldHost != i && Party_IsMemberRegistered(party, i) && Party_CompareMemberAddrs(party, oldHost, i) )
      {
        if ( g_oldHostSplitscreenClient != -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 3294, ASSERT_TYPE_ASSERT, "(g_oldHostSplitscreenClient == -1)", "%s\n\tThere are more than 2 clients at this address.\n", "g_oldHostSplitscreenClient == CLIENTNUM_NONE") )
          __debugbreak();
        LODWORD(fmt) = i;
        Com_Printf(25, "[%s] PartyMigrate_RestartServer - Old host has a splitscreen client, make sure we kick them too. Old host clientNum: %i, Splitscreen clientNum: %i\n", party->partyName, (unsigned int)oldHost, fmt);
        g_oldHostSplitscreenClient = i;
      }
    }
  }
  Sys_EnterCriticalSection(CRITSECT_CBUF);
  v13 = cmd_funcCount[0];
  if ( cmd_funcCount[0] < 0x20 )
    goto LABEL_37;
  LODWORD(v16) = 32;
  LODWORD(oldHosta) = cmd_funcCount[0];
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\cmd.h", 380, ASSERT_TYPE_ASSERT, "(unsigned)( cmd_funcCount[localClientNum] ) < (unsigned)( ( sizeof( *array_counter( cmd_funcArray[localClientNum] ) ) + 0 ) )", "cmd_funcCount[localClientNum] doesn't index ARRAY_COUNT( cmd_funcArray[localClientNum] )\n\t%i not in [0, %i)", oldHosta, v16) )
    __debugbreak();
  v13 = cmd_funcCount[0];
  if ( cmd_funcCount[0] < 0x20 )
  {
LABEL_37:
    cmd_funcCount[0] = v13 + 1;
    cmd_funcArray[0][v13] = PartyMigrate_Map;
  }
  Sys_LeaveCriticalSection(CRITSECT_CBUF);
  party->specificData.hostData.preloadingMapStage = PRELOAD_MAP_STARTED;
  PartyMigrate_BroadcastNewSessionInfo(party, mainActiveClient, ourClientNum, migrationBits, arbitratorNum, oldHost);
  PartyMigrate_MigrateLocalClients(party);
}

/*
==============
PartyMigrate_SelectOurNominee
==============
*/
void PartyMigrate_SelectOurNominee(PartyData *party, const PartyActiveClient *mainActiveClient, __int64 a3, double a4)
{
  int OurClientNum; 
  int ShouldWeHostPrivateParty; 
  int localControllerIndex; 
  int NumGameSlots; 
  int v10; 
  int UploadSpeed; 
  int AveragePing; 
  const dvar_t *v13; 
  bool enabled; 
  int v15; 
  NomineeInfo info; 
  PartyActiveClient outPartyActiveClient; 

  memset(&info, 0, sizeof(info));
  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 1651, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( !PartyMigrate_MigrateActive(party) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 1652, ASSERT_TYPE_ASSERT, "(PartyMigrate_MigrateActive( party ))", (const char *)&queryFormat, "PartyMigrate_MigrateActive( party )") )
    __debugbreak();
  if ( (unsigned int)PartyMigrate_IsGameServerHostMigration(party) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 1653, ASSERT_TYPE_ASSERT, "(!PartyMigrate_IsGameServerHostMigration( party ))", (const char *)&queryFormat, "!PartyMigrate_IsGameServerHostMigration( party )") )
    __debugbreak();
  OurClientNum = Live_GetOurClientNum(mainActiveClient->localControllerIndex, party);
  if ( OurClientNum >= 0 )
  {
    if ( Party_IsPrivateParty(party) )
    {
      ShouldWeHostPrivateParty = PartyMigrate_ShouldWeHostPrivateParty(party, mainActiveClient, party->migrateData.migrateToRequestedHost >= 0);
    }
    else
    {
      localControllerIndex = mainActiveClient->localControllerIndex;
      if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 764, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
        __debugbreak();
      if ( !Party_IsGameLobby(party) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 765, ASSERT_TYPE_ASSERT, "(Party_IsGameLobby( party ))", (const char *)&queryFormat, "Party_IsGameLobby( party )") )
        __debugbreak();
      NumGameSlots = Party_GetNumGameSlots(party);
      ShouldWeHostPrivateParty = 0;
      if ( !Party_GetSecondaryActiveClient(party, &outPartyActiveClient) || outPartyActiveClient.localControllerIndex != localControllerIndex )
      {
        if ( NumGameSlots )
        {
          if ( Online_CanHostServer(NumGameSlots) )
          {
            v10 = Live_GetOurClientNum(localControllerIndex, party);
            if ( v10 >= 0 )
            {
              if ( party->partyMembers[v10].status )
                ShouldWeHostPrivateParty = 1;
            }
          }
        }
      }
      if ( LiveAntiCheat_FeatureIsBanned(13) )
        goto LABEL_36;
    }
    if ( ShouldWeHostPrivateParty )
    {
      if ( !PartyMigrate_GetPings(party, mainActiveClient, OurClientNum) )
        return;
      info.hostScore = PartyMigrate_ComputeMyHostScore(party, mainActiveClient, OurClientNum, a4);
      UploadSpeed = Online_GetUploadSpeed();
      if ( UploadSpeed > 2000000 )
        UploadSpeed = 2000000;
      info.upload = UploadSpeed;
      info.NAT = Live_GetLocalNatType();
      info.connectivity = PartyMigrate_GetClientConnectivity(party, OurClientNum);
      AveragePing = PartyMigrate_GetAveragePing(party);
      v13 = DVARBOOL_party_forceMeAsHost;
      info.avgPing = AveragePing;
      if ( !DVARBOOL_party_forceMeAsHost && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "party_forceMeAsHost") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v13);
      enabled = v13->current.enabled;
      v15 = OurClientNum;
      info.forceHostSet = enabled;
      goto LABEL_39;
    }
LABEL_36:
    info.NAT = 3;
    if ( Party_IsGameLobby(party) )
      PartyMigrate_PrintCantHost(party, mainActiveClient->localControllerIndex, 0);
    v15 = -1;
LABEL_39:
    Com_Printf(25, "Due to a call to PartyMigrate_SelectOurNominee(), ");
    PartyMigrate_SetOurNominee(party, OurClientNum, v15, &info);
    if ( !party->migrateData.decidedOurNominee && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 1733, ASSERT_TYPE_ASSERT, "(party->migrateData.decidedOurNominee)", (const char *)&queryFormat, "party->migrateData.decidedOurNominee") )
      __debugbreak();
    PartyMigrate_AnnounceOurNominee(party, mainActiveClient, OurClientNum);
  }
}

/*
==============
PartyMigrate_SelectPredeterminedHost
==============
*/
void PartyMigrate_SelectPredeterminedHost(PartyData *party, const int hostMemberIndex, const PartyActiveClient *mainActiveClient)
{
  __int64 v3; 
  const char *partyName; 

  v3 = hostMemberIndex;
  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 3548, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( !mainActiveClient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 3549, ASSERT_TYPE_ASSERT, "(mainActiveClient)", (const char *)&queryFormat, "mainActiveClient") )
    __debugbreak();
  if ( !party->migrateData.migrateActive && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 3550, ASSERT_TYPE_ASSERT, "(party->migrateData.migrateActive)", (const char *)&queryFormat, "party->migrateData.migrateActive") )
    __debugbreak();
  if ( !party->migrateData.weAreArbitrating && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 3551, ASSERT_TYPE_ASSERT, "(party->migrateData.weAreArbitrating)", (const char *)&queryFormat, "party->migrateData.weAreArbitrating") )
    __debugbreak();
  if ( !Party_IsPrivateParty(party) && !Party_IsPrivateDSMatch(party) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 3552, ASSERT_TYPE_ASSERT, "(Party_IsPrivateParty( party ) || Party_IsPrivateDSMatch( party ))", (const char *)&queryFormat, "Party_IsPrivateParty( party ) || Party_IsPrivateDSMatch( party )") )
    __debugbreak();
  if ( (int)v3 < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 3553, ASSERT_TYPE_ASSERT, "(hostMemberIndex >= 0)", (const char *)&queryFormat, "hostMemberIndex >= 0") )
    __debugbreak();
  if ( party->partyMembers[v3].migrateHeardFrom )
  {
    partyName = party->partyName;
    if ( party->partyMembers[v3].migrateNominated )
    {
      Com_Printf(25, "[%s] PartyMigrate - SelectPredeterminedHost - Requested host said he can host, moving to the new host.\n", partyName);
      PartyMigrate_NewHostDecided(party, mainActiveClient, v3);
    }
    else
    {
      Com_PrintError(25, "[%s] PartyMigrate - SelectPredeterminedHost - Could not migrate, requested host said he can't be the host\n", partyName);
      PartyMigrate_SendMakeHostError(party, mainActiveClient, v3);
      PartyMigrate_StopMigration(party);
    }
  }
  else
  {
    PartyMigrate_AskForPredeterminedHostNominee(party, v3, mainActiveClient);
  }
}

/*
==============
PartyMigrate_SendMakeHostError
==============
*/
void PartyMigrate_SendMakeHostError(PartyData *party, const PartyActiveClient *mainActiveClient, const int hostMemberIndex)
{
  int OurClientNum; 
  __int64 v7; 
  const XUID *Xuid; 
  const char *v9; 
  __int64 v10; 
  __int64 v11; 
  XUID v12; 
  XUID result; 
  msg_t buf; 
  unsigned __int8 data[64]; 

  XUID::XUID(&v12);
  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 3522, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( !mainActiveClient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 3523, ASSERT_TYPE_ASSERT, "(mainActiveClient)", (const char *)&queryFormat, "mainActiveClient") )
    __debugbreak();
  if ( !party->inParty && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 3524, ASSERT_TYPE_ASSERT, "(party->inParty)", (const char *)&queryFormat, "party->inParty") )
    __debugbreak();
  if ( !PartyMigrate_MigrateActive(party) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 3525, ASSERT_TYPE_ASSERT, "(PartyMigrate_MigrateActive( party ))", (const char *)&queryFormat, "PartyMigrate_MigrateActive( party )") )
    __debugbreak();
  if ( (unsigned int)hostMemberIndex >= 0xC8 )
  {
    LODWORD(v10) = hostMemberIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 3526, ASSERT_TYPE_ASSERT, "(unsigned)( hostMemberIndex ) < (unsigned)( 200 )", "hostMemberIndex doesn't index MAX_PARTY_MEMBERS\n\t%i not in [0, %i)", v10, 200) )
      __debugbreak();
  }
  if ( party->partyMembersBits <= 0 )
  {
    LODWORD(v10) = party->partyMembersBits;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 3527, ASSERT_TYPE_ASSERT, "( ( party->partyMembersBits > 0 ) )", "( party->partyMembersBits ) = %i", v10) )
      __debugbreak();
  }
  Com_PrintError(25, "PartyMigrate - SendMakeHostError - Could not migrate to the player the host requested, letting him know.\n");
  OurClientNum = Live_GetOurClientNum(mainActiveClient->localControllerIndex, party);
  v7 = OurClientNum;
  if ( (unsigned int)OurClientNum >= 0xC8 )
  {
    LODWORD(v11) = 200;
    LODWORD(v10) = OurClientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 3532, ASSERT_TYPE_ASSERT, "(unsigned)( ourClientNum ) < (unsigned)( 200 )", "ourClientNum doesn't index MAX_PARTY_MEMBERS\n\t%i not in [0, %i)", v10, v11) )
      __debugbreak();
  }
  Xuid = Live_GetXuid(&result, mainActiveClient->localControllerIndex);
  XUID::operator=(&v12, Xuid);
  MSG_Init(&buf, data, 64);
  v9 = j_va("%imakehosterror", (unsigned int)party->partyId);
  MSG_WriteString(&buf, v9);
  MSG_WriteBits(&buf, party->migrateData.indexBits, 2u);
  MSG_WriteBits(&buf, v7, party->partyMembersBits);
  XUID::Serialize(&v12, &buf);
  if ( buf.overflowed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 3540, ASSERT_TYPE_ASSERT, "(!MSG_IsOverflowed( &msg ))", (const char *)&queryFormat, "!MSG_IsOverflowed( &msg )") )
    __debugbreak();
  NetConnection::SendReliable(&party->currentHost.connections[mainActiveClient->localClientNum], &buf);
}

/*
==============
PartyMigrate_SendNomineeMsg
==============
*/
void PartyMigrate_SendNomineeMsg(PartyData *party, const PartyActiveClient *mainActiveClient, int ourClientNum, int destinationClientNum, XUID xuid, NomineeInfo *info)
{
  NomineeInfo *v6; 
  __int64 v8; 
  const char *v11; 
  __int64 voiceData; 
  msg_t buf; 
  unsigned __int8 data[256]; 

  v6 = info;
  v8 = ourClientNum;
  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 340, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( !mainActiveClient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 341, ASSERT_TYPE_ASSERT, "(mainActiveClient)", (const char *)&queryFormat, "mainActiveClient") )
    __debugbreak();
  if ( !PartyMigrate_MigrateActive(party) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 342, ASSERT_TYPE_ASSERT, "(PartyMigrate_MigrateActive( party ))", (const char *)&queryFormat, "PartyMigrate_MigrateActive( party )") )
    __debugbreak();
  if ( party->migrateData.weAreArbitrating && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 343, ASSERT_TYPE_ASSERT, "(!party->migrateData.weAreArbitrating)", (const char *)&queryFormat, "!party->migrateData.weAreArbitrating") )
    __debugbreak();
  if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 344, ASSERT_TYPE_ASSERT, "(info)", (const char *)&queryFormat, "info") )
    __debugbreak();
  if ( party->partyMembersBits <= 0 )
  {
    LODWORD(voiceData) = party->partyMembersBits;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 345, ASSERT_TYPE_ASSERT, "( ( party->partyMembersBits > 0 ) )", "( party->partyMembersBits ) = %i", voiceData) )
      __debugbreak();
  }
  MSG_Init(&buf, data, 256);
  v11 = j_va("%inominee", (unsigned int)party->partyId);
  MSG_WriteString(&buf, v11);
  MSG_WriteBits(&buf, party->migrateData.indexBits, 2u);
  MSG_WriteBits(&buf, v8, party->partyMembersBits);
  XUID::Serialize(&xuid, &buf);
  MSG_WriteData(&buf, v6, 32);
  if ( buf.overflowed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 355, ASSERT_TYPE_ASSERT, "(!MSG_IsOverflowed( &msg ))", (const char *)&queryFormat, "!MSG_IsOverflowed( &msg )") )
    __debugbreak();
  PeerMesh_Send(party, (const LocalClientNum_t)mainActiveClient->localClientNum, destinationClientNum, buf.data, buf.cursize, 0, 1);
}

/*
==============
PartyMigrate_SendOurNominee
==============
*/
void PartyMigrate_SendOurNominee(PartyData *party, const PartyActiveClient *mainActiveClient, const int ourClientNum, const int destinationClientNum)
{
  __int64 nominee; 
  __int64 v9; 
  XUID *p_playerUID; 
  __int64 v11; 
  __int64 v12; 
  __int64 v13; 
  __int64 v14; 
  __int64 v15; 
  char *fmta; 
  char *fmt; 
  NomineeInfo *info; 
  NomineeInfo *infoa; 
  __int64 v20; 
  __int64 v21; 
  XUID xuid; 
  XUID result; 
  char dest[512]; 

  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 371, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( !mainActiveClient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 372, ASSERT_TYPE_ASSERT, "(mainActiveClient)", (const char *)&queryFormat, "mainActiveClient") )
    __debugbreak();
  if ( party->migrateData.weAreArbitrating && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 373, ASSERT_TYPE_ASSERT, "(!party->migrateData.weAreArbitrating)", (const char *)&queryFormat, "!party->migrateData.weAreArbitrating") )
    __debugbreak();
  if ( (unsigned int)destinationClientNum > 0xC7 )
  {
    LODWORD(info) = destinationClientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 374, ASSERT_TYPE_ASSERT, "( ( destinationClientNum >= 0 && destinationClientNum < 200 ) )", "( destinationClientNum ) = %i", info) )
      __debugbreak();
  }
  nominee = party->migrateData.bestHost.nominee;
  party->migrateData.bestHost.lastSentTo = Sys_Milliseconds();
  if ( ourClientNum == destinationClientNum && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 385, ASSERT_TYPE_ASSERT, "( ourClientNum ) != ( destinationClientNum )", "%s != %s\n\t%i, %i", "ourClientNum", "destinationClientNum", ourClientNum, destinationClientNum) )
    __debugbreak();
  XUID::XUID(&xuid);
  v9 = party->migrateData.bestHost.nominee;
  if ( (int)v9 < 0 )
  {
    p_playerUID = XUID::NullXUID(&result);
  }
  else
  {
    if ( (unsigned int)v9 >= 0xC8 )
    {
      LODWORD(v20) = 200;
      LODWORD(info) = party->migrateData.bestHost.nominee;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 322, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( 200 )", "clientNum doesn't index MAX_PARTY_MEMBERS\n\t%i not in [0, %i)", info, v20) )
        __debugbreak();
    }
    if ( !Party_IsMemberIndexDataAvailable(party, v9) )
    {
      LODWORD(v21) = party->partyMembers[v9].status;
      LODWORD(v20) = v9;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 323, ASSERT_TYPE_ASSERT, "(Party_IsMemberIndexDataAvailable( party, clientNum ))", "%s\n\tclientNum is %i, their status is %i\n", "Party_IsMemberIndexDataAvailable( party, clientNum )", v20, v21) )
        __debugbreak();
    }
    p_playerUID = &party->partyMembers[v9].playerUID;
  }
  XUID::operator=(&xuid, p_playerUID);
  PartyMigrate_SendNomineeMsg(party, mainActiveClient, ourClientNum, destinationClientNum, xuid, &party->migrateData.bestHost.info);
  LODWORD(fmta) = party->migrateData.bestHost.info.connectivity;
  Com_sprintf_truncate<512>((char (*)[512])dest, "(Upload %i, NAT %i, connectivity %x", (unsigned int)party->migrateData.bestHost.info.upload, (unsigned int)party->migrateData.bestHost.info.NAT, fmta);
  v11 = -1i64;
  v12 = -1i64;
  do
    ++v12;
  while ( dest[v12] );
  Com_sprintf_truncate(&dest[v12], 512 - v12, ", CPU %g", (float)((float)party->migrateData.bestHost.info.cpuSpeed * 0.001));
  v13 = -1i64;
  do
    ++v13;
  while ( dest[v13] );
  Com_sprintf_truncate(&dest[v13], 512 - v13, ", RAM %i", (unsigned int)party->migrateData.bestHost.info.physMemory);
  v14 = -1i64;
  do
    ++v14;
  while ( dest[v14] );
  Com_sprintf_truncate(&dest[v14], 512 - v14, ", avgPing %i", (unsigned int)party->migrateData.bestHost.info.avgPing);
  v15 = -1i64;
  do
    ++v15;
  while ( dest[v15] );
  Com_sprintf_truncate(&dest[v15], 512 - v15, ", hostScore %0.2f", party->migrateData.bestHost.info.hostScore);
  do
    ++v11;
  while ( dest[v11] );
  Com_sprintf_truncate(&dest[v11], 512 - v11, ")");
  LODWORD(infoa) = nominee;
  LODWORD(fmt) = destinationClientNum;
  Com_Printf(25, "[%s] PartyMigrate - SendOurNominee - (%i) Telling client %i that our current nominee is client %i (%s), %s\n", party->partyName, (unsigned int)ourClientNum, fmt, infoa, party->partyMembers[nominee].info.gamertag, dest);
}

/*
==============
PartyMigrate_SetMigrationCause
==============
*/
void PartyMigrate_SetMigrationCause(MigrationCause cause)
{
  s_hostSelectionLoggingData.cause = cause;
}

/*
==============
PartyMigrate_SetMigrationID
==============
*/
void PartyMigrate_SetMigrationID(unsigned __int64 migrationID)
{
  s_hostSelectionLoggingData.migrationID = migrationID;
}

/*
==============
PartyMigrate_SetOurNominee
==============
*/
void PartyMigrate_SetOurNominee(PartyData *party, int ourClientNum, int nominee, NomineeInfo *info)
{
  __int64 v7; 
  __int64 v8; 
  __int64 v9; 
  __int64 v10; 
  __int64 v11; 
  char *fmt; 
  int v14; 
  char dest[512]; 

  if ( (unsigned int)ourClientNum >= 0xC8 )
  {
    v14 = 200;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 581, ASSERT_TYPE_ASSERT, "(unsigned)( ourClientNum ) < (unsigned)( 200 )", "ourClientNum doesn't index MAX_PARTY_MEMBERS\n\t%i not in [0, %i)", ourClientNum, v14) )
      __debugbreak();
  }
  LODWORD(fmt) = info->connectivity;
  Com_sprintf_truncate<512>((char (*)[512])dest, "(Upload %i, NAT %i, connectivity %x", (unsigned int)info->upload, (unsigned int)info->NAT, fmt);
  v7 = -1i64;
  v8 = -1i64;
  do
    ++v8;
  while ( dest[v8] );
  Com_sprintf_truncate(&dest[v8], 512 - v8, ", CPU %g", (float)((float)info->cpuSpeed * 0.001));
  v9 = -1i64;
  do
    ++v9;
  while ( dest[v9] );
  Com_sprintf_truncate(&dest[v9], 512 - v9, ", RAM %i", (unsigned int)info->physMemory);
  v10 = -1i64;
  do
    ++v10;
  while ( dest[v10] );
  Com_sprintf_truncate(&dest[v10], 512 - v10, ", avgPing %i", (unsigned int)info->avgPing);
  v11 = -1i64;
  do
    ++v11;
  while ( dest[v11] );
  Com_sprintf_truncate(&dest[v11], 512 - v11, ", hostScore %0.2f", info->hostScore);
  do
    ++v7;
  while ( dest[v7] );
  Com_sprintf_truncate(&dest[v7], 512 - v7, ")");
  Com_Printf(25, "[%s] Changing our current nominee for to client %i %s\n", party->partyName, (unsigned int)nominee, dest);
  party->migrateData.decidedOurNominee = 1;
  party->migrateData.bestHost.nominee = nominee;
  party->migrateData.bestHost.info = *info;
  party->migrateData.bestHost.lastHeardFrom = Sys_Milliseconds();
  party->migrateData.bestHost.lastSentTo = Sys_Milliseconds();
}

/*
==============
PartyMigrate_SetupMigration
==============
*/
__int64 PartyMigrate_SetupMigration(PartyData *party, const PartyActiveClient *mainActiveClient)
{
  PartyDisconnectReason v4; 
  int OurClientNum; 
  unsigned int ArbitratorClientNum; 
  unsigned int v8; 
  const char *MemberName; 
  XUID *Xuid; 
  const char *v11; 
  __int64 v12; 
  __int64 v13; 
  XUID result; 

  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 1309, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( !mainActiveClient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 1310, ASSERT_TYPE_ASSERT, "(mainActiveClient)", (const char *)&queryFormat, "mainActiveClient") )
    __debugbreak();
  if ( !PartyMigrate_HostMigrationEnabled(party) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 1311, ASSERT_TYPE_ASSERT, "(PartyMigrate_HostMigrationEnabled( party ))", (const char *)&queryFormat, "PartyMigrate_HostMigrationEnabled( party )") )
    __debugbreak();
  Com_Printf(25, "[%s] %s\n", party->partyName, "PartyMigrate_SetupMigration");
  LOBYTE(v4) = 28;
  PartyAtomic_AbortJoinAttemptForParty(&g_partyJoinInfo, party, v4, NULL);
  party->migrateData.migrateActive = 0;
  PartyMigrate_ClearInternalData(party);
  if ( party->migrateData.migrateActive && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 1318, ASSERT_TYPE_ASSERT, "(!party->migrateData.migrateActive)", (const char *)&queryFormat, "!party->migrateData.migrateActive") )
    __debugbreak();
  OurClientNum = Live_GetOurClientNum(mainActiveClient->localControllerIndex, party);
  if ( OurClientNum < 0 )
  {
    Com_PrintError(25, "[%s] PartyMigrate - SetupMigration - We don't know our client num, won't be able to migrate, aborting.\n", party->partyName);
    return 0i64;
  }
  if ( Party_IsGameLobby(party) )
  {
    if ( !Party_IsRunning(party) && !Party_IsInGameLobbyMigrationAllowed(party) )
    {
      Com_Printf(25, "[%s] PartyMigrate - SetupMigration - Lobby migration is not supported when the lobby is not active.\n", party->partyName);
      return 0i64;
    }
    if ( !Com_FrontEnd_IsInFrontEnd() && !Com_GameStart_IsRestarting() && !Party_IsInGameLobbyMigrationAllowed(party) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 1335, ASSERT_TYPE_ASSERT, "(Com_FrontEnd_IsInFrontEnd() || Com_GameStart_IsRestarting() || Party_IsInGameLobbyMigrationAllowed( party ))", "%s\n\tLobby is running while we are not in the menus!", "Com_FrontEnd_IsInFrontEnd() || Com_GameStart_IsRestarting() || Party_IsInGameLobbyMigrationAllowed( party )") )
      __debugbreak();
  }
  party->migrateData.migrateActive = 1;
  if ( (unsigned int)PartyMigrate_IsGameServerHostMigration(party) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 1339, ASSERT_TYPE_ASSERT, "(!PartyMigrate_IsGameServerHostMigration( party ))", (const char *)&queryFormat, "!PartyMigrate_IsGameServerHostMigration( party )") )
    __debugbreak();
  ArbitratorClientNum = PartyMigrate_GetArbitratorClientNum(party, 1);
  v8 = ArbitratorClientNum;
  if ( ArbitratorClientNum >= 0xC8 )
  {
    LODWORD(v12) = ArbitratorClientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 1342, ASSERT_TYPE_ASSERT, "(unsigned)( arbitratorClientNum ) < (unsigned)( 200 )", "arbitratorClientNum doesn't index MAX_PARTY_MEMBERS\n\t%i not in [0, %i)", v12, 200) )
      __debugbreak();
  }
  party->migrateData.weAreArbitrating = Party_MemberHasLoopbackAddr(party, v8);
  MemberName = Party_GetMemberName(party, v8);
  Xuid = Party_GetXuid(&result, party, v8);
  v11 = XUID::ToDevString(Xuid);
  LODWORD(v13) = OurClientNum;
  Com_Printf(25, "[%s] PartyMigrate - SetupMigration - The arbitrator is client %i (%s, %s). We are client %i\n", party->partyName, v8, v11, MemberName, v13);
  return 1i64;
}

/*
==============
PartyMigrate_ShouldWeHostPrivateParty
==============
*/
__int64 PartyMigrate_ShouldWeHostPrivateParty(PartyData *party, const PartyActiveClient *mainActiveClient, int requireConnectivity)
{
  int v6; 
  int OurClientNum; 
  PartyActiveClient outPartyActiveClient; 

  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 707, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( !Party_IsPrivateParty(party) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 708, ASSERT_TYPE_ASSERT, "(Party_IsPrivateParty( party ))", (const char *)&queryFormat, "Party_IsPrivateParty( party )") )
    __debugbreak();
  if ( !mainActiveClient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 709, ASSERT_TYPE_ASSERT, "(mainActiveClient)", (const char *)&queryFormat, "mainActiveClient") )
    __debugbreak();
  if ( Party_GetSecondaryActiveClient(party, &outPartyActiveClient) && outPartyActiveClient.localControllerIndex == mainActiveClient->localControllerIndex )
  {
    Com_Printf(14, "[%s] PartyMigrate - ShouldWeHostPrivateParty Failed - Secondary client cannot be host.\n", party->partyName);
  }
  else if ( Party_GetNumGameSlots(party) > 0 )
  {
    if ( !requireConnectivity || (v6 = Live_GetOurClientNum(mainActiveClient->localControllerIndex, party), v6 >= 0) && PartyMigrate_GetClientConnectivity(party, v6) == -1 )
    {
      OurClientNum = Live_GetOurClientNum(mainActiveClient->localControllerIndex, party);
      if ( OurClientNum >= 0 && party->partyMembers[OurClientNum].status )
        return 1i64;
      Com_Printf(14, "[%s] PartyMigrate - ShouldWeHostPrivateParty Failed - We do not have all party data.\n", party->partyName);
    }
    else
    {
      Com_Printf(14, "[%s] PartyMigrate - ShouldWeHostPrivateParty Failed - RequireConnectivity and we can't talk to all clients.\n", party->partyName);
    }
  }
  else
  {
    Com_Printf(14, "[%s] PartyMigrate - ShouldWeHostPrivateParty Failed - We don't know about the number of slots.\n", party->partyName);
  }
  return 0i64;
}

/*
==============
PartyMigrate_ShowMakeHostStatus
==============
*/
_BOOL8 PartyMigrate_ShowMakeHostStatus(const PartyData *party)
{
  return Party_IsPrivateParty(party) && !PartyMigrate_MigrateActive(party) && party->migrateData.migrateToRequestedHost >= 0;
}

/*
==============
PartyMigrate_ShowMigratingStatus
==============
*/
_BOOL8 PartyMigrate_ShowMigratingStatus(const PartyData *party)
{
  return PartyMigrate_MigrateActive(party) && Sys_Milliseconds() - party->migrateData.startTime <= 1000 && (!Party_IsPrivateParty(party) || party->migrateData.migrateToRequestedHost < 0 || party->migrateData.expectedNewHost >= 0);
}

/*
==============
PartyMigrate_StartMakeHostTimeout
==============
*/
void PartyMigrate_StartMakeHostTimeout(PartyData *party)
{
  const dvar_t *v2; 

  party->migrateData.startTime = Sys_Milliseconds();
  v2 = DVARINT_partymigrate_makeHostTimeout;
  if ( !DVARINT_partymigrate_makeHostTimeout && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "partymigrate_makeHostTimeout") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  party->migrateData.timeoutDuration = v2->current.integer;
  party->migrateData.partyTime = party->migrateData.startTime;
}

/*
==============
PartyMigrate_StartMigrationFromMessage
==============
*/
void PartyMigrate_StartMigrationFromMessage(PartyData *party, const PartyActiveClient *mainActiveClient, const int newHost, const int migrateFlags, const int isInGameMigration)
{
  int IsGameServerHostMigration; 

  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 3486, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( !mainActiveClient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 3487, ASSERT_TYPE_ASSERT, "(mainActiveClient)", (const char *)&queryFormat, "mainActiveClient") )
    __debugbreak();
  PartyMigrate_ClearInternalData(party);
  PartyMigrate_StartTimeout(party);
  if ( !isInGameMigration )
    party->migrateData.migrateActive = 1;
  if ( isInGameMigration != (unsigned int)PartyMigrate_IsGameServerHostMigration(party) )
  {
    IsGameServerHostMigration = PartyMigrate_IsGameServerHostMigration(party);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 3498, ASSERT_TYPE_ASSERT, "( isInGameMigration ) == ( PartyMigrate_IsGameServerHostMigration( party ) )", "%s == %s\n\t%i, %i", "isInGameMigration", "PartyMigrate_IsGameServerHostMigration( party )", isInGameMigration, IsGameServerHostMigration) )
      __debugbreak();
  }
  party->currentHost.lastPacketTime = Sys_Milliseconds();
  PartyMigrate_To(party, mainActiveClient, newHost, migrateFlags);
}

/*
==============
PartyMigrate_StartNegotiation
==============
*/
void PartyMigrate_StartNegotiation(PartyData *party, const PartyActiveClient *mainActiveClient, __int64 a3, double a4)
{
  __int64 v6; 

  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 1353, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( !mainActiveClient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 1354, ASSERT_TYPE_ASSERT, "(mainActiveClient)", (const char *)&queryFormat, "mainActiveClient") )
    __debugbreak();
  if ( (unsigned int)PartyMigrate_SetupMigration(party, mainActiveClient) )
  {
    if ( !PartyMigrate_MigrateActive(party) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 1359, ASSERT_TYPE_ASSERT, "(PartyMigrate_MigrateActive( party ))", (const char *)&queryFormat, "PartyMigrate_MigrateActive( party )") )
      __debugbreak();
    PartyMigrate_SelectOurNominee(party, mainActiveClient, v6, a4);
  }
}

/*
==============
PartyMigrate_StartTimeout
==============
*/
void PartyMigrate_StartTimeout(PartyData *party)
{
  const dvar_t *v2; 

  party->migrateData.startTime = Sys_Milliseconds();
  v2 = DVARINT_partymigrate_timeout;
  if ( !DVARINT_partymigrate_timeout && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "partymigrate_timeout") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  party->migrateData.timeoutDuration = v2->current.integer;
  party->migrateData.partyTime = party->migrateData.startTime;
}

/*
==============
PartyMigrate_StopMigration
==============
*/
void PartyMigrate_StopMigration(PartyData *party)
{
  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 976, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  party->migrateData.migrateActive = 0;
  PartyMigrate_ClearInternalData(party);
}

/*
==============
PartyMigrate_SwapHostAndClient
==============
*/
void PartyMigrate_SwapHostAndClient(PartyData *party, unsigned int newHostNum)
{
  int v4; 
  const char *v5; 
  const char *v6; 
  const char *v7; 
  const char *MemberStatus; 
  const char *MemberName; 

  if ( Party_IsHost(party, newHostNum) && Party_IsMemberRegistered(party, newHostNum) && (Party_IsMemberPresent(party, newHostNum) || Party_IsPrivateParty(party) && Party_IsMemberIndexCommitted(party, newHostNum)) )
  {
    Com_Printf(25, "[%s] Not swaping host and client, host is still valid!\n", party->partyName);
  }
  else
  {
    if ( Party_IsPrivateDSMatch(party) )
    {
      MemberStatus = Party_GetMemberStatus(party, newHostNum);
      MemberName = Party_GetMemberName(party, newHostNum);
      Com_Printf(25, "[%s] Swapping party %s DS with %s (new host). Status %s\n", party->partyName, party->partyName, MemberName, MemberStatus);
    }
    else
    {
      v4 = Party_HostNum(party);
      v5 = Party_GetMemberStatus(party, newHostNum);
      v6 = Party_GetMemberName(party, newHostNum);
      v7 = Party_GetMemberName(party, v4);
      Com_Printf(25, "[%s] Swapping party %s clients %s (old host) and %s (new host). Status %s\n", party->partyName, party->partyName, v7, v6, v5);
    }
    if ( (!Party_IsMemberRegistered(party, newHostNum) || !Party_IsMemberPresent(party, newHostNum) && (!Party_IsPrivateParty(party) || !Party_IsMemberIndexCommitted(party, newHostNum))) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 3115, ASSERT_TYPE_ASSERT, "(PartyMigrate_IsStatusValidForMigration( party, newHostNum ))", (const char *)&queryFormat, "PartyMigrate_IsStatusValidForMigration( party, newHostNum )") )
      __debugbreak();
    party->currentHost.hostNum = newHostNum;
    PeerMesh_HostMigrated(party, newHostNum);
  }
}

/*
==============
PartyMigrate_TellNewHost
==============
*/
void PartyMigrate_TellNewHost(PartyData *party, const PartyActiveClient *mainActiveClient, int newHostClientNum)
{
  __int64 v3; 
  const dvar_t *v6; 
  int integer; 
  XUID *Xuid; 
  const char *v9; 
  const char *MemberName; 
  const char *v11; 
  unsigned __int8 *p_status; 
  int v13; 
  XUID *p_playerUID; 
  __int64 voiceData; 
  __int64 canRelay; 
  msg_t buf; 
  XUID result; 
  unsigned __int8 data[256]; 

  v3 = newHostClientNum;
  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 400, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( !mainActiveClient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 401, ASSERT_TYPE_ASSERT, "(mainActiveClient)", (const char *)&queryFormat, "mainActiveClient") )
    __debugbreak();
  if ( !PartyMigrate_MigrateActive(party) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 402, ASSERT_TYPE_ASSERT, "(PartyMigrate_MigrateActive( party ))", (const char *)&queryFormat, "PartyMigrate_MigrateActive( party )") )
    __debugbreak();
  if ( !party->migrateData.weAreArbitrating && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 403, ASSERT_TYPE_ASSERT, "(party->migrateData.weAreArbitrating)", (const char *)&queryFormat, "party->migrateData.weAreArbitrating") )
    __debugbreak();
  if ( party->migrateData.arbitratorClientNum >= 0xC8u )
  {
    LODWORD(voiceData) = party->migrateData.arbitratorClientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 404, ASSERT_TYPE_ASSERT, "(unsigned)( party->migrateData.arbitratorClientNum ) < (unsigned)( 200 )", "party->migrateData.arbitratorClientNum doesn't index MAX_PARTY_MEMBERS\n\t%i not in [0, %i)", voiceData, 200) )
      __debugbreak();
  }
  if ( (unsigned int)v3 >= 0xC8 )
  {
    LODWORD(canRelay) = 200;
    LODWORD(voiceData) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 405, ASSERT_TYPE_ASSERT, "(unsigned)( newHostClientNum ) < (unsigned)( 200 )", "newHostClientNum doesn't index MAX_PARTY_MEMBERS\n\t%i not in [0, %i)", voiceData, canRelay) )
      __debugbreak();
  }
  if ( party->partyMembersBits <= 0 )
  {
    LODWORD(voiceData) = party->partyMembersBits;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 406, ASSERT_TYPE_ASSERT, "( ( party->partyMembersBits > 0 ) )", "( party->partyMembersBits ) = %i", voiceData) )
      __debugbreak();
  }
  v6 = DVARINT_partymigrate_broadcast_interval;
  if ( !DVARINT_partymigrate_broadcast_interval && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "partymigrate_broadcast_interval") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  integer = v6->current.integer;
  if ( Sys_Milliseconds() - party->migrateData.lastBroadcastTime >= integer )
  {
    Xuid = Party_GetXuid(&result, party, v3);
    v9 = XUID::ToDevString(Xuid);
    MemberName = Party_GetMemberName(party, v3);
    Com_Printf(25, "[%s] PartyMigrate - TellNewHost - Telling everyone about the new host %i %s %s!\n", party->partyName, (unsigned int)v3, MemberName, v9);
    MSG_Init(&buf, data, 256);
    v11 = j_va("%imigrateto", (unsigned int)party->partyId);
    MSG_WriteString(&buf, v11);
    MSG_WriteBits(&buf, party->migrateData.indexBits, 2u);
    MSG_WriteBits(&buf, party->migrateData.arbitratorClientNum, party->partyMembersBits);
    MSG_WriteBits(&buf, v3, party->partyMembersBits);
    MSG_WriteBits(&buf, 0i64, 2u);
    MSG_WriteBits(&buf, 0i64, 1u);
    XUID::Serialize(&party->partyMembers[v3].playerUID, &buf);
    if ( buf.overflowed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 422, ASSERT_TYPE_ASSERT, "(!MSG_IsOverflowed( &msg ))", (const char *)&queryFormat, "!MSG_IsOverflowed( &msg )") )
      __debugbreak();
    party->migrateData.lastBroadcastTime = Sys_Milliseconds();
    p_status = &party->partyMembers[0].status;
    v13 = 0;
    p_playerUID = &party->partyMembers[0].playerUID;
    do
    {
      if ( *p_status != 6 && Party_IsMemberIndexDataAvailable(party, v13) && v13 != party->migrateData.arbitratorClientNum && !Live_XUIDIsLocalPlayer((const XUID)p_playerUID->m_id) )
        PeerMesh_Send(party, (const LocalClientNum_t)mainActiveClient->localClientNum, v13, buf.data, buf.cursize, 0, 1);
      ++v13;
      p_playerUID += 63;
      p_status += 504;
    }
    while ( v13 < 200 );
  }
}

/*
==============
PartyMigrate_To
==============
*/
void PartyMigrate_To(PartyData *party, const PartyActiveClient *mainActiveClient, const int newHost, const int migrateFlags)
{
  bool HasLoopbackAddr; 
  int v8; 
  unsigned int *v9; 
  signed int v10; 
  XUID *p_playerUID; 
  int *p_lastPartyStateAck; 
  int i; 
  char *fmt; 
  int ourClientNum; 
  int arbitratorNum; 
  int migrationBits; 

  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 3318, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( !mainActiveClient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 3319, ASSERT_TYPE_ASSERT, "(mainActiveClient)", (const char *)&queryFormat, "mainActiveClient") )
    __debugbreak();
  ourClientNum = Live_GetOurClientNum(mainActiveClient->localControllerIndex, party);
  if ( ourClientNum < 0 )
  {
    Com_PrintError(25, "[%s] PartyMigrate - To - We don't know what our ClientNum is for controller %i.\n", party->partyName, (unsigned int)mainActiveClient->localControllerIndex);
    return;
  }
  if ( !Party_IsMemberRegistered(party, newHost) )
  {
    Com_PrintError(25, "[%s] PartyMigrate - To - Newhost (%i) is not session-registered.\n", party->partyName, (unsigned int)newHost);
    return;
  }
  if ( Party_IsHost(party, newHost) )
  {
    if ( party->areWeHost )
    {
      party->migrateData.migrateActive = 0;
      PartyMigrate_CheckBeforeContinuingToHost(party, mainActiveClient);
    }
    else
    {
      if ( newHost != party->migrateData.expectedNewHost )
      {
        LODWORD(fmt) = party->migrateData.expectedNewHost;
        Com_Printf(25, "[%s] PartyMigrate - To - Setting expectedNewHost to %i, old (%i)\n", party->partyName, (unsigned int)newHost, fmt);
      }
      party->migrateData.expectedNewHost = newHost;
      PartyMigrate_CheckBeforeContinuingToHost(party, mainActiveClient);
    }
    goto LABEL_67;
  }
  HasLoopbackAddr = Party_MemberHasLoopbackAddr(party, newHost);
  if ( newHost != ourClientNum )
  {
    if ( HasLoopbackAddr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 3439, ASSERT_TYPE_ASSERT, "(!Party_MemberHasLoopbackAddr( party, newHost ))", "%s\n\tThe host is local but we're migrating as a client", "!Party_MemberHasLoopbackAddr( party, newHost )") )
      __debugbreak();
    if ( newHost != party->migrateData.expectedNewHost )
      Com_Printf(25, "[%s] PartyMigrate - To - Setting expectedNewHost to %i\n", party->partyName, (unsigned int)newHost);
    party->migrateData.expectedNewHost = newHost;
    if ( !Party_IsRunning(party) )
    {
      if ( (unsigned int)PartyMigrate_IsGameServerHostMigration(party) )
      {
        for ( i = 0; i < 2; ++i )
        {
          if ( CL_IsLocalClientActive((LocalClientNum_t)i) )
            CL_MigrationHostChosen((const LocalClientNum_t)i);
        }
      }
      else if ( !Party_IsInGameLobbyMigrationAllowed(party) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 3460, ASSERT_TYPE_ASSERT, "(Party_IsInGameLobbyMigrationAllowed( party ))", (const char *)&queryFormat, "Party_IsInGameLobbyMigrationAllowed( party )") )
      {
        __debugbreak();
      }
    }
    goto LABEL_67;
  }
  if ( !HasLoopbackAddr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 3357, ASSERT_TYPE_ASSERT, "(Party_MemberHasLoopbackAddr( party, newHost ))", (const char *)&queryFormat, "Party_MemberHasLoopbackAddr( party, newHost )") )
    __debugbreak();
  migrationBits = party->migrateData.indexBits;
  arbitratorNum = PartyMigrate_GetArbitratorClientNum(party, 0);
  if ( Party_IsPrivateDSMatch(party) )
    v8 = -1;
  else
    v8 = Party_HostNum(party);
  PartyMigrate_CheckBeforeContinuingToHost(party, mainActiveClient);
  if ( Party_IsHost(party, ourClientNum) && Party_AreWeServer(party) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 3373, ASSERT_TYPE_ASSERT, "(!Party_IsHost( party, ourClientNum ) || !Party_AreWeServer( party ))", (const char *)&queryFormat, "!Party_IsHost( party, ourClientNum ) || !Party_AreWeServer( party )") )
    __debugbreak();
  PartyMigrate_SwapHostAndClient(party, newHost);
  if ( !PartyClient_BecomePartyHost(party, mainActiveClient, newHost) )
  {
    PartyMigrate_HandleMigrationFailure(party, mainActiveClient->localControllerIndex);
    return;
  }
  v9 = &party->partyMembers[0].ackedMembers.array[2];
  v10 = 0;
  p_playerUID = &party->partyMembers[0].playerUID;
  p_lastPartyStateAck = &party->partyMembers[0].lastPartyStateAck;
  do
  {
    if ( !PartyMigrate_IsStatusValidForMigration(party, v10) || !Live_XUIDIsLocalPlayer((const XUID)p_playerUID->m_id) )
    {
      *((_QWORD *)v9 - 1) = 0i64;
      *(_QWORD *)v9 = 0i64;
      *((_QWORD *)v9 + 1) = 0i64;
      *((_QWORD *)v9 + 2) = 0i64;
      *((_QWORD *)v9 + 3) = 0i64;
      *((_QWORD *)v9 + 4) = 0i64;
      *((_QWORD *)v9 + 5) = 0i64;
      *((_QWORD *)v9 + 6) = 0i64;
      *((_QWORD *)v9 + 7) = 0i64;
      *((_QWORD *)v9 + 8) = 0i64;
      *((_QWORD *)v9 + 9) = 0i64;
      *((_QWORD *)v9 + 10) = 0i64;
      *p_lastPartyStateAck = 0;
    }
    ++v10;
    p_playerUID += 63;
    v9 += 126;
    p_lastPartyStateAck += 126;
  }
  while ( v10 < 200 );
  PartyMigrate_ClearInternalData(party);
  if ( party->areWeHost )
  {
    if ( (unsigned int)PartyMigrate_IsGameServerHostMigration(party) )
    {
      if ( Party_IsRunning(party) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 3403, ASSERT_TYPE_ASSERT, "(!Party_IsRunning( party ))", (const char *)&queryFormat, "!Party_IsRunning( party )") )
        __debugbreak();
      if ( v8 == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 3404, ASSERT_TYPE_ASSERT, "(oldHost != -1)", (const char *)&queryFormat, "oldHost != INVALID_CLIENTNUM") )
        __debugbreak();
      if ( v8 == ourClientNum && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 3405, ASSERT_TYPE_ASSERT, "(oldHost != ourClientNum)", (const char *)&queryFormat, "oldHost != ourClientNum") )
        __debugbreak();
      PartyMigrate_RestartServer(party, mainActiveClient, v8, migrateFlags, ourClientNum, migrationBits, arbitratorNum);
      party->migrateData.migrateActive = 0;
      goto LABEL_67;
    }
    PartyMigrate_BroadcastNewSessionInfo(party, mainActiveClient, ourClientNum, migrationBits, arbitratorNum, v8);
    if ( !Party_IsPrivateDSMatch(party) )
    {
      OnlineMatchmakerOmniscient::Shutdown(&OnlineMatchmakerOmniscient::ms_instance);
      Party_ClearPrivateMatchId(party);
      party->migrateData.migrateActive = 0;
      goto LABEL_67;
    }
    if ( Party_IsGameLobby(party) )
      OnlineMatchmakerOmniscient::CreateLobbySuccess(&OnlineMatchmakerOmniscient::ms_instance, party->m_lobbyId);
  }
  party->migrateData.migrateActive = 0;
LABEL_67:
  if ( !party->migrateData.migrateActive )
  {
    Party_DumpInfo(party, "PartyMigrate_DebugEnd");
    Com_Printf(25, "[%s] --- Migration took %ums ---\n", party->partyName, (unsigned int)(party->migrateData.partyTime - party->migrateData.startTime));
  }
}

/*
==============
PartyMigrate_UpdateMakeHost
==============
*/
void PartyMigrate_UpdateMakeHost(PartyData *party)
{
  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 2329, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( !party->inParty && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 2330, ASSERT_TYPE_ASSERT, "(party->inParty)", (const char *)&queryFormat, "party->inParty") )
    __debugbreak();
  if ( !Party_IsPrivateParty(party) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 2331, ASSERT_TYPE_ASSERT, "(Party_IsPrivateParty( party ))", (const char *)&queryFormat, "Party_IsPrivateParty( party )") )
    __debugbreak();
  if ( !PartyMigrate_MigrateActive(party) && party->migrateData.migrateToRequestedHost >= 0 && Sys_Milliseconds() - party->migrateData.startTime >= party->migrateData.timeoutDuration + 1000 )
  {
    Com_Printf(25, "[%s] Timed out executing the makeHost request, didn't hear back from arbitrator\n", party->partyName);
    Dvar_SetStringByName("OLQPNSLPRP", "@MPUI/MAKEHOSTTIMEOUT");
    LUI_OpenMenu(LOCAL_CLIENT_0, "makehostfailed", 1, 0, 0);
    PartyMigrate_StopMigration(party);
  }
}

/*
==============
PartyMigrate_UpdatePingForMember
==============
*/
void PartyMigrate_UpdatePingForMember(PartyData *party, const unsigned int memberIndex, const int ping)
{
  __int64 v3; 
  char *v6; 
  int v7; 
  const dvar_t *v8; 
  const dvar_t *v9; 
  char *fmt; 
  __int64 v11; 

  v3 = memberIndex;
  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 1139, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( (unsigned int)v3 >= 0xC8 )
  {
    LODWORD(v11) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 1140, ASSERT_TYPE_ASSERT, "(unsigned)( memberIndex ) < (unsigned)( 200 )", "memberIndex doesn't index MAX_PARTY_MEMBERS\n\t%i not in [0, %i)", v11, 200) )
      __debugbreak();
  }
  v6 = (char *)party + 504 * v3;
  v7 = *((_DWORD *)v6 + 659);
  if ( *((int *)v6 + 658) >= 0 )
  {
    if ( v7 <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 1155, ASSERT_TYPE_ASSERT, "( party->partyMembers[memberIndex].migratePingCount ) > ( 0 )", "%s > %s\n\t%i, %i", "party->partyMembers[memberIndex].migratePingCount", "0", *((_DWORD *)v6 + 659), 0i64) )
      __debugbreak();
    *((_DWORD *)v6 + 658) += ping;
    ++*((_DWORD *)v6 + 659);
    v9 = DVARBOOL_partymigrate_pingtest_debug;
    if ( !DVARBOOL_partymigrate_pingtest_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "partymigrate_pingtest_debug") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v9);
    if ( v9->current.enabled )
    {
      LODWORD(fmt) = *((_DWORD *)v6 + 659);
      Com_Printf(25, "[%s] PartyMigrate - HandlePingAckMsg - Other ping, sum = %i, count = %i.\n", party->partyName, *((unsigned int *)v6 + 658), fmt);
    }
  }
  else
  {
    if ( v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 1144, ASSERT_TYPE_ASSERT, "( party->partyMembers[memberIndex].migratePingCount ) == ( 0 )", "%s == %s\n\t%i, %i", "party->partyMembers[memberIndex].migratePingCount", "0", *((_DWORD *)v6 + 659), 0i64) )
      __debugbreak();
    *((_DWORD *)v6 + 658) = ping;
    *((_DWORD *)v6 + 659) = 1;
    v8 = DVARBOOL_partymigrate_pingtest_debug;
    if ( !DVARBOOL_partymigrate_pingtest_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "partymigrate_pingtest_debug") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v8);
    if ( v8->current.enabled )
      Com_Printf(25, "[%s] PartyMigrate - HandlePingAckMsg - First ping = %i.\n", party->partyName, *((unsigned int *)v6 + 658));
  }
}

/*
==============
PartyMigrate_UseLobbyHostForInactiveParty
==============
*/
__int64 PartyMigrate_UseLobbyHostForInactiveParty(PartyData *party, int *outHostIndex)
{
  const PartyData *PartyData; 
  const PartyData *v5; 
  const XUID *HostXuid; 
  int MemberByXUID_AllowNotPresent; 
  XUID *v8; 
  __int64 v9; 
  XUID player; 
  XUID result; 

  XUID::XUID(&player);
  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 3610, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( !party->inParty && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 3611, ASSERT_TYPE_ASSERT, "(party->inParty)", (const char *)&queryFormat, "party->inParty") )
    __debugbreak();
  if ( Party_IsRunning(party) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 3612, ASSERT_TYPE_ASSERT, "(!Party_IsRunning( party ))", (const char *)&queryFormat, "!Party_IsRunning( party )") )
    __debugbreak();
  if ( !Party_IsPrivateParty(party) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 3613, ASSERT_TYPE_ASSERT, "(Party_IsPrivateParty( party ))", "%s\n\tInactive lobby is migrating, this should not happen", "Party_IsPrivateParty( party )") )
    __debugbreak();
  if ( !outHostIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partymigrate.cpp", 3614, ASSERT_TYPE_ASSERT, "(outHostIndex)", (const char *)&queryFormat, "outHostIndex") )
    __debugbreak();
  if ( Lobby_IsInRunningLobby() && (PartyData = Lobby_GetPartyData(), Party_IsHostDataAvailable(PartyData)) && (v5 = Lobby_GetPartyData(), HostXuid = Party_GetHostXuid(&result, v5), XUID::operator=(&player, HostXuid), MemberByXUID_AllowNotPresent = Party_FindMemberByXUID_AllowNotPresent(party, player), MemberByXUID_AllowNotPresent >= 0) && (v8 = Party_GetHostXuid(&result, party), !XUID::operator==(v8, &player)) )
  {
    Com_Printf(25, "We're migrating an inactive private party, and the lobby host is in our private party. We'll use him as our private party host\n");
    v9 = 1i64;
    *outHostIndex = MemberByXUID_AllowNotPresent;
  }
  else
  {
    v9 = 0i64;
    *outHostIndex = -1;
  }
  return v9;
}


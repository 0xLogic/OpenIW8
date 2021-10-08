/*
==============
PartyClient_RegisterPlayer
==============
*/

void __fastcall PartyClient_RegisterPlayer(PartyData *party, const int localControllerIndex, const int clientNum, const XNADDR *xnaddr, const netsrc_t netId)
{
  ?PartyClient_RegisterPlayer@@YAXPEAUPartyData@@HHAEBUXNADDR@@W4netsrc_t@@@Z(party, localControllerIndex, clientNum, xnaddr, netId);
}

/*
==============
PartyClient_LostConnectionToHost
==============
*/

void __fastcall PartyClient_LostConnectionToHost(PartyData *party, const PartyActiveClient *mainActiveClient, PartyDisconnectReason reason, const char *message)
{
  ?PartyClient_LostConnectionToHost@@YAXPEAUPartyData@@PEBUPartyActiveClient@@W4PartyDisconnectReason@@PEBD@Z(party, mainActiveClient, reason, message);
}

/*
==============
PartyClient_SendClientTaskResponse
==============
*/

void __fastcall PartyClient_SendClientTaskResponse(const PartyData *party, const PartyClientTaskData *clientTaskData)
{
  ?PartyClient_SendClientTaskResponse@@YAXPEBUPartyData@@AEBUPartyClientTaskData@@@Z(party, clientTaskData);
}

/*
==============
PartyClient_SendDisconnectMessage
==============
*/

void __fastcall PartyClient_SendDisconnectMessage(PartyType partyId, NetConnection *connection, const PartyDisconnectReason disconnectReason, const PartyJoinResponse joinResponse)
{
  ?PartyClient_SendDisconnectMessage@@YAXW4PartyType@@PEAVNetConnection@@W4PartyDisconnectReason@@W4PartyJoinResponse@@@Z(partyId, connection, disconnectReason, joinResponse);
}

/*
==============
PartyClient_DemoteRemotePartyMembers
==============
*/

void __fastcall PartyClient_DemoteRemotePartyMembers(PartyData *party)
{
  ?PartyClient_DemoteRemotePartyMembers@@YAXPEAUPartyData@@@Z(party);
}

/*
==============
PartyClient_IsStreamingPreloadComplete
==============
*/

bool __fastcall PartyClient_IsStreamingPreloadComplete(const PartyData *party)
{
  return ?PartyClient_IsStreamingPreloadComplete@@YA_NPEBUPartyData@@@Z(party);
}

/*
==============
PartyClient_IsHostAway
==============
*/

bool __fastcall PartyClient_IsHostAway(const PartyData *party)
{
  return ?PartyClient_IsHostAway@@YA_NPEBUPartyData@@@Z(party);
}

/*
==============
PartyClient_DevMigrationFailure
==============
*/

void __fastcall PartyClient_DevMigrationFailure(PartyData *party, const int localControllerIndex)
{
  ?PartyClient_DevMigrationFailure@@YAXPEAUPartyData@@H@Z(party, localControllerIndex);
}

/*
==============
PartyClient_DevDisconnect
==============
*/

void __fastcall PartyClient_DevDisconnect(PartyData *party, const int localControllerIndex)
{
  ?PartyClient_DevDisconnect@@YAXPEAUPartyData@@H@Z(party, localControllerIndex);
}

/*
==============
PartyClient_HaveAllPacketsForPartyState
==============
*/

int __fastcall PartyClient_HaveAllPacketsForPartyState(PartyStateData *partyState)
{
  return ?PartyClient_HaveAllPacketsForPartyState@@YAHPEAUPartyStateData@@@Z(partyState);
}

/*
==============
PartyClient_HandlePacket
==============
*/

int __fastcall PartyClient_HandlePacket(PartyData *party, const char *c, const PartyActiveClient *destClient, netadr_t *from, msg_t *msg)
{
  return ?PartyClient_HandlePacket@@YAHPEAUPartyData@@PEBDPEBUPartyActiveClient@@Unetadr_t@@PEAUmsg_t@@@Z(party, c, destClient, from, msg);
}

/*
==============
PartyClient_DisconnectFromHostNoUIScreenChange
==============
*/

void __fastcall PartyClient_DisconnectFromHostNoUIScreenChange(PartyData *party, const PartyActiveClient *mainActiveClient, const char *reason, int sendDisconnectMessage, const PartyDisconnectReason disconnectReason)
{
  ?PartyClient_DisconnectFromHostNoUIScreenChange@@YAXPEAUPartyData@@PEBUPartyActiveClient@@PEBDHW4PartyDisconnectReason@@@Z(party, mainActiveClient, reason, sendDisconnectMessage, disconnectReason);
}

/*
==============
PartyClient_TryShowTryShowToastForPartyHostChangingCrossplaySetting_Frame
==============
*/

void __fastcall PartyClient_TryShowTryShowToastForPartyHostChangingCrossplaySetting_Frame(const PartyData *party)
{
  ?PartyClient_TryShowTryShowToastForPartyHostChangingCrossplaySetting_Frame@@YAXPEBUPartyData@@@Z(party);
}

/*
==============
PartyClient_SendHeartbeatAck
==============
*/

int __fastcall PartyClient_SendHeartbeatAck(PartyData *party, const PartyActiveClient *activeClient)
{
  return ?PartyClient_SendHeartbeatAck@@YAHPEAUPartyData@@PEBUPartyActiveClient@@@Z(party, activeClient);
}

/*
==============
PartyClient_TryShowToastForPartyHostChangingCrossplaySetting
==============
*/

void __fastcall PartyClient_TryShowToastForPartyHostChangingCrossplaySetting(const PartyData *party)
{
  ?PartyClient_TryShowToastForPartyHostChangingCrossplaySetting@@YAXPEBUPartyData@@@Z(party);
}

/*
==============
PartyClient_IsHostTimingOut
==============
*/

bool __fastcall PartyClient_IsHostTimingOut(PartyData *party)
{
  return ?PartyClient_IsHostTimingOut@@YA_NPEAUPartyData@@@Z(party);
}

/*
==============
PartyClient_CommitPartyHostMigration
==============
*/

void __fastcall PartyClient_CommitPartyHostMigration(PartyData *party, int newHost)
{
  ?PartyClient_CommitPartyHostMigration@@YAXPEAUPartyData@@H@Z(party, newHost);
}

/*
==============
PartyClient_BecomePartyHost
==============
*/

int __fastcall PartyClient_BecomePartyHost(PartyData *party, const PartyActiveClient *mainActiveClient, const int newHost)
{
  return ?PartyClient_BecomePartyHost@@YAHPEAUPartyData@@PEBUPartyActiveClient@@H@Z(party, mainActiveClient, newHost);
}

/*
==============
PartyClient_DevEndParty
==============
*/

void __fastcall PartyClient_DevEndParty(PartyData *party, const int localControllerIndex)
{
  ?PartyClient_DevEndParty@@YAXPEAUPartyData@@H@Z(party, localControllerIndex);
}

/*
==============
PartyClient_Frame
==============
*/

void __fastcall PartyClient_Frame(PartyData *party, const PartyActiveClient *mainActiveClient)
{
  ?PartyClient_Frame@@YAXPEAUPartyData@@PEBUPartyActiveClient@@@Z(party, mainActiveClient);
}

/*
==============
PartyClient_DisconnectFromHost
==============
*/

void __fastcall PartyClient_DisconnectFromHost(PartyData *party, const PartyActiveClient *mainActiveClient, const char *reason, int sendDisconnectMessage, const PartyDisconnectReason disconnectReason)
{
  ?PartyClient_DisconnectFromHost@@YAXPEAUPartyData@@PEBUPartyActiveClient@@PEBDHW4PartyDisconnectReason@@@Z(party, mainActiveClient, reason, sendDisconnectMessage, disconnectReason);
}

/*
==============
PartyAtomicClient_CommitNewPartyState
==============
*/

void __fastcall PartyAtomicClient_CommitNewPartyState(PartyData *party, const PartyActiveClient *mainActiveClient)
{
  ?PartyAtomicClient_CommitNewPartyState@@YAXPEAUPartyData@@PEBUPartyActiveClient@@@Z(party, mainActiveClient);
}

/*
==============
PartyClient_DevTimeoutFromHost
==============
*/

void __fastcall PartyClient_DevTimeoutFromHost(PartyData *party, const int localControllerIndex)
{
  ?PartyClient_DevTimeoutFromHost@@YAXPEAUPartyData@@H@Z(party, localControllerIndex);
}

/*
==============
PartyClient_ResetMatchmakingTokenForParty
==============
*/

void __fastcall PartyClient_ResetMatchmakingTokenForParty(const LocalClientNum_t localClientNum, PartyData *party)
{
  ?PartyClient_ResetMatchmakingTokenForParty@@YAXW4LocalClientNum_t@@PEAUPartyData@@@Z(localClientNum, party);
}

/*
==============
PartyClient_RemovePartyMember
==============
*/

void __fastcall PartyClient_RemovePartyMember(PartyData *party, int slot)
{
  ?PartyClient_RemovePartyMember@@YAXPEAUPartyData@@H@Z(party, slot);
}

/*
==============
PartyClient_HandleHeartbeat
==============
*/
void PartyClient_HandleHeartbeat(PartyData *party, const PartyActiveClient *destClient, netadr_t *from, msg_t *msg)
{
  int v8; 
  const char *v9; 
  int v11; 
  const char *v12; 
  int addrHandleIndex; 
  const char *v15; 
  int v17; 
  const char *v18; 
  int v20; 
  const char *v21; 
  const char *HostStatus; 
  unsigned int v23; 
  int v25; 
  const char *v26; 
  PartyDisconnectReason disconnectReason; 
  netadr_t v28; 
  PartyActiveClient mainActiveClient; 

  _RDI = from;
  if ( party->inParty )
  {
    if ( Party_IsRunning(party) )
    {
      if ( party->areWeHost )
      {
        __asm { vmovups xmm0, xmmword ptr [rdi] }
        addrHandleIndex = _RDI->addrHandleIndex;
        __asm { vmovups [rsp+88h+var_48], xmm0 }
        v28.addrHandleIndex = addrHandleIndex;
        v15 = NET_AdrToString(&v28);
        Com_Printf(25, "[%s] Received stray Heartbeat message from %s - we are the host\n", party->partyName, v15);
      }
      else if ( party->inParty && NetConnection::operator==(&party->currentHost.connections[destClient->localClientNum], _RDI) )
      {
        if ( Party_IsHostDataAvailable(party) )
        {
          if ( PartyClient_SendHeartbeatAck(party, destClient) )
          {
            PartyClient_MarkPacketReceived(party, &party->currentHost);
            if ( !Party_IsHostPresent(party) )
            {
              if ( !Party_IsHostAway(party) && !Party_IsHostCommitted(party) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 2160, ASSERT_TYPE_ASSERT, "(Party_IsHostAway( party ) || Party_IsHostCommitted( party ))", (const char *)&queryFormat, "Party_IsHostAway( party ) || Party_IsHostCommitted( party )") )
                __debugbreak();
              HostStatus = Party_GetHostStatus(party);
              Com_Printf(25, "[%s] PartyClient - Heartbeat - Host is now PRESENT from %s\n", party->partyName, HostStatus);
              v23 = Party_HostNum(party);
              PartyClient_ChangeMemberStatus(party, v23, 5u);
            }
            if ( !Party_IsRunning(party) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 2167, ASSERT_TYPE_ASSERT, "(Party_IsRunning( party ))", (const char *)&queryFormat, "Party_IsRunning( party )") )
              __debugbreak();
            if ( Party_IsHostAway(party) )
            {
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 2168, ASSERT_TYPE_ASSERT, "(!Party_IsHostAway( party ))", (const char *)&queryFormat, "!Party_IsHostAway( party )") )
                __debugbreak();
            }
          }
          else
          {
            __asm { vmovups xmm0, xmmword ptr [rdi] }
            v20 = _RDI->addrHandleIndex;
            __asm { vmovups [rsp+88h+var_48], xmm0 }
            v28.addrHandleIndex = v20;
            v21 = NET_AdrToString(&v28);
            Com_PrintWarning(25, "[%s] Received Heartbeat message from %s, but we could not reply back.\n", party->partyName, v21);
            mainActiveClient = Party_GetMainActiveClient(party, destClient->localControllerIndex);
            OnlineErrorManager::SetLastRecordedErrorCode(&g_onlineMgr.m_errorManager, (Online_Error_CAT_PARTY_t)0x20000, NULL);
            LOBYTE(disconnectReason) = 7;
            PartyClient_DisconnectFromHostInternal(party, &mainActiveClient, "@EXE/TRANSMITERROR", 0, 1, disconnectReason, JOINRESPONSE_NONE);
          }
        }
        else
        {
          __asm { vmovups xmm0, xmmword ptr [rdi] }
          v17 = _RDI->addrHandleIndex;
          __asm { vmovups [rsp+88h+var_48], xmm0 }
          v28.addrHandleIndex = v17;
          v18 = NET_AdrToString(&v28);
          Com_PrintWarning(25, "[%s] Received stray Heartbeat message from %s- from the host but we already removed him\n", party->partyName, v18);
        }
      }
      else
      {
        __asm { vmovups xmm0, xmmword ptr [rdi] }
        v25 = _RDI->addrHandleIndex;
        __asm { vmovups [rsp+88h+var_48], xmm0 }
        v28.addrHandleIndex = v25;
        v26 = NET_AdrToString(&v28);
        Com_Printf(25, "[%s] Received stray Heartbeat message from %s - not from the host\n", party->partyName, v26);
      }
    }
    else
    {
      __asm { vmovups xmm0, xmmword ptr [rdi] }
      v11 = _RDI->addrHandleIndex;
      __asm { vmovups [rsp+88h+var_48], xmm0 }
      v28.addrHandleIndex = v11;
      v12 = NET_AdrToString(&v28);
      Com_Printf(25, "[%s] Received stray Heartbeat message from %s - party is not running\n", party->partyName, v12);
    }
  }
  else
  {
    __asm { vmovups xmm0, xmmword ptr [r8] }
    v8 = from->addrHandleIndex;
    __asm { vmovups [rsp+88h+var_48], xmm0 }
    v28.addrHandleIndex = v8;
    v9 = NET_AdrToString(&v28);
    Com_Printf(25, "[%s] Received stray Heartbeat message from %s - not in party\n", party->partyName, v9);
  }
}

/*
==============
PartyAtomicClient_HandleHostPresence
==============
*/
void PartyAtomicClient_HandleHostPresence(PartyData *party, const PartyActiveClient *destClient, netadr_t *from, msg_t *msg)
{
  const char *v9; 
  const char *v11; 
  const char *v13; 
  const char *v15; 
  const char *v17; 
  int Byte; 
  __int64 Bits; 
  int v20; 
  bool v21; 
  const char *v23; 
  int v24; 
  unsigned int v25; 
  const char *v27; 
  int hostPresenceIndex; 
  const char *v30; 
  unsigned int v31; 
  char *fmt; 
  __int64 v33; 
  bool v34; 
  netadr_t v35; 
  XSECURITY_INFO *p_m_security; 
  PartyActiveClient mainActiveClient; 
  __int64 v38; 
  XSESSION_INFO newSessionInfo; 

  v38 = -2i64;
  _RSI = from;
  p_m_security = &newSessionInfo.m_security;
  bdSecurityID::bdSecurityID(&newSessionInfo.m_security.m_id);
  bdSecurityKey::bdSecurityKey(&newSessionInfo.m_security.m_key);
  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 2279, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( Party_IsPrivateParty(party) )
  {
    if ( party->inParty )
    {
      if ( party->areWeHost )
      {
        __asm
        {
          vmovups xmm0, xmmword ptr [rsi]
          vmovups [rsp+150h+var_100], xmm0
        }
        v35.addrHandleIndex = _RSI->addrHandleIndex;
        v13 = NET_AdrToString(&v35);
        Com_PrintWarning(25, "[%s] PartyClient - HandleHostPresence - Received stray 'pa_presence' message from (%s), we are the host\n", party->partyName, v13);
      }
      else if ( NetConnection::operator==(&party->currentHost.connections[destClient->localClientNum], _RSI) )
      {
        if ( Party_IsHostDedicated(party) )
        {
          __asm
          {
            vmovups xmm0, xmmword ptr [rsi]
            vmovups [rsp+150h+var_100], xmm0
          }
          v35.addrHandleIndex = _RSI->addrHandleIndex;
          v17 = NET_AdrToString(&v35);
          Com_PrintWarning(25, "[%s] PartyClient - HandleHostPresence - Received stray 'pa_presence' message from (%s), host is dedicated.\n", party->partyName, v17);
        }
        else if ( Party_IsHostDataAvailable(party) )
        {
          Byte = MSG_ReadByte(msg);
          LODWORD(p_m_security) = MSG_ReadByte(msg);
          Bits = MSG_ReadBits(msg, 8u);
          v20 = truncate_cast<int,__int64>(Bits);
          v34 = MSG_ReadBit(msg) != 0;
          if ( Byte )
          {
            v21 = 1;
          }
          else
          {
            XSESSION_INFO::Deserialize(&newSessionInfo, msg);
            v21 = MSG_ReadBit(msg) != 0;
          }
          if ( msg->overflowed )
          {
            __asm
            {
              vmovups xmm0, xmmword ptr [rsi]
              vmovups [rsp+150h+var_100], xmm0
            }
            v35.addrHandleIndex = _RSI->addrHandleIndex;
            v23 = NET_AdrToString(&v35);
            Com_PrintWarning(25, "PartyClient - HandleHostPresence - Received stray 'pa_presence' message from (%s), invalid packet.\n", v23);
          }
          else
          {
            if ( !g_partyData.inParty && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 2254, ASSERT_TYPE_ASSERT, "(g_partyData.inParty)", (const char *)&queryFormat, "g_partyData.inParty") )
              __debugbreak();
            if ( g_partyData.areWeHost && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 2255, ASSERT_TYPE_ASSERT, "(!g_partyData.areWeHost)", (const char *)&queryFormat, "!g_partyData.areWeHost") )
              __debugbreak();
            if ( v20 > g_partyData.hostPresenceIndex || v20 != g_partyData.hostPresenceIndex && (g_partyData.hostPresenceIndex <= 170 || v20 >= 85 ? (v24 = 0) : (v24 = 1), v24) )
            {
              if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_party_debugClientIgnoreHostPresence, "party_debugClientIgnoreHostPresence") )
              {
                Com_PrintWarning(25, "PartyClient - HandleHostPresence - Would have followed host, but party_debugClientIgnoreHostPresence is set.\n");
              }
              else
              {
                hostPresenceIndex = party->hostPresenceIndex;
                __asm
                {
                  vmovups xmm0, xmmword ptr [rsi]
                  vmovups [rsp+150h+var_100], xmm0
                }
                v35.addrHandleIndex = _RSI->addrHandleIndex;
                v30 = NET_AdrToString(&v35);
                LODWORD(v33) = hostPresenceIndex;
                LODWORD(fmt) = Byte;
                Com_Printf(25, "[%s] PartyClient - HandleHostPresence - Processing 'pa_presence' message from (%s), with type %i. Indices are %i > %i\n", party->partyName, v30, fmt, v33, v20);
                PartyClient_MarkPacketReceived(party, &party->currentHost);
                party->hostPresenceIndex = v20;
                if ( Party_IsHostAway(party) )
                {
                  Com_Printf(25, "[%s] PartyClient - HandleHostPresence - Host is no longer away, since we got a presence message.\n", party->partyName);
                  v31 = Party_HostNum(party);
                  PartyClient_ChangeMemberStatus(party, v31, 4u);
                }
                if ( !Party_IsHostPresent(party) && !Party_IsHostCommitted(party) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 2365, ASSERT_TYPE_ASSERT, "(Party_IsHostPresent( party ) || Party_IsHostCommitted( party ))", (const char *)&queryFormat, "Party_IsHostPresent( party ) || Party_IsHostCommitted( party )") )
                  __debugbreak();
                mainActiveClient = Party_GetMainActiveClient(party, destClient->localControllerIndex);
                if ( Byte )
                {
                  Party_Backout(&mainActiveClient);
                }
                else
                {
                  g_partyJoinInfo.partyCodPlayMode[0] = (_BYTE)p_m_security;
                  g_partyJoinInfo.shouldGoToMPBlade = v34;
                  PartyClient_JoinPartyHostLobby(&mainActiveClient, &newSessionInfo, v21);
                  PartyClient_MarkAwayPartyMembersPresent(party);
                }
              }
            }
            else
            {
              v25 = party->hostPresenceIndex;
              __asm
              {
                vmovups xmm0, xmmword ptr [rsi]
                vmovups [rsp+150h+var_100], xmm0
              }
              v35.addrHandleIndex = _RSI->addrHandleIndex;
              v27 = NET_AdrToString(&v35);
              LODWORD(fmt) = v20;
              Com_PrintWarning(25, "PartyClient - HandleHostPresence - Received duplicate/old 'pa_presence' message from (%s), current index is %i, received %i.\n", v27, v25, fmt);
            }
          }
        }
        else
        {
          Com_PrintWarning(25, "[%s] PartyClient - HandleHostPresence - Received stray 'pa_presence' message from the host but we already removed him from our party\n", party->partyName);
        }
      }
      else
      {
        __asm
        {
          vmovups xmm0, xmmword ptr [rsi]
          vmovups [rsp+150h+var_100], xmm0
        }
        v35.addrHandleIndex = _RSI->addrHandleIndex;
        v15 = NET_AdrToString(&v35);
        Com_PrintWarning(25, "[%s] PartyClient - HandleHostPresence - Received stray 'pa_presence' message from (%s), not the host.\n", party->partyName, v15);
      }
    }
    else
    {
      __asm
      {
        vmovups xmm0, xmmword ptr [rsi]
        vmovups [rsp+150h+var_100], xmm0
      }
      v35.addrHandleIndex = _RSI->addrHandleIndex;
      v11 = NET_AdrToString(&v35);
      Com_PrintWarning(25, "[%s] PartyClient - HandleHostPresence - Received stray 'pa_presence' message from (%s), not in party.\n", party->partyName, v11);
    }
  }
  else
  {
    __asm
    {
      vmovups xmm0, xmmword ptr [rsi]
      vmovups [rsp+150h+var_100], xmm0
    }
    v35.addrHandleIndex = _RSI->addrHandleIndex;
    v9 = NET_AdrToString(&v35);
    Com_PrintWarning(25, "[%s] PartyClient - HandleHostPresence - Received stray 'pa_presence' message from (%s), not targeted at a private party.\n", party->partyName, v9);
  }
  bdSecurityKey::~bdSecurityKey(&newSessionInfo.m_security.m_key);
  bdSecurityID::~bdSecurityID(&newSessionInfo.m_security.m_id);
}

/*
==============
PartyAtomicClient_HandleHostAccept
==============
*/
void PartyAtomicClient_HandleHostAccept(PartyData *party, const PartyActiveClient *destClient, netadr_t *from, msg_t *msg)
{
  int addrHandleIndex; 
  netadr_t v6; 

  __asm { vmovups xmm0, xmmword ptr [r8] }
  addrHandleIndex = from->addrHandleIndex;
  __asm { vmovups [rsp+48h+var_28], xmm0 }
  v6.addrHandleIndex = addrHandleIndex;
  PartyAtomicClient_HandleHostAccept_Internal(party, destClient, &v6, msg);
}

/*
==============
PartyAtomicClient_HandleHostJoined
==============
*/
void PartyAtomicClient_HandleHostJoined(PartyData *party, const PartyActiveClient *destClient, netadr_t *from, msg_t *msg)
{
  char Byte; 
  bool v9; 
  bool v10; 
  PartyJoinState JoinState; 
  const char *v13; 
  int addrHandleIndex; 
  const char *v16; 
  int v18; 
  const char *v19; 
  __int64 localClientNum; 
  int v22; 
  bool v23; 
  const char *v24; 
  const char *v25; 
  const char *v26; 
  const dvar_t *v27; 
  char *fmt; 
  __int64 v29; 
  int v30; 
  netadr_t v31; 
  XUID result; 

  _RDI = from;
  Byte = MSG_ReadByte(msg);
  v9 = MSG_ReadBit(msg) != 0;
  v10 = MSG_ReadBit(msg) != 0;
  if ( PartyAtomic_GetJoinState(&g_partyJoinInfo) == PARTYJOIN_JOIN || PartyAtomic_GetJoinState(&g_partyJoinInfo) == PARTYJOIN_JOINING )
  {
    if ( PartyAtomic_HasErrorOccured(&g_partyJoinInfo) )
    {
      __asm { vmovups xmm0, xmmword ptr [rdi] }
      addrHandleIndex = _RDI->addrHandleIndex;
      __asm { vmovups [rsp+0B8h+var_78], xmm0 }
      v31.addrHandleIndex = addrHandleIndex;
      v16 = NET_AdrToString(&v31);
      Com_PrintWarning(25, "HandleHostJoined - Received joined message from (%s), but we already decided to fail through some other message!\n", v16);
    }
    else
    {
      if ( CL_AllLocalClientsInactive() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 2532, ASSERT_TYPE_ASSERT, "(!CL_AllLocalClientsInactive())", "%s\n\tPARTYJOIN_JOINING while we're not in the menus", "!CL_AllLocalClientsInactive()") )
        __debugbreak();
      if ( PartyAtomic_PacketIsFromPotentialHost(&g_partyJoinInfo, (const LocalClientNum_t)destClient->localClientNum, (const PartyType)party->partyId, _RDI) )
      {
        if ( g_partyJoinInfo.joinType == PJT_NONE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 2539, ASSERT_TYPE_ASSERT, "(partyJoinInfo->joinType != PJT_NONE)", (const char *)&queryFormat, "partyJoinInfo->joinType != PJT_NONE") )
          __debugbreak();
        if ( destClient->localClientNum >= (unsigned int)LOCAL_CLIENT_COUNT )
        {
          v30 = 2;
          LODWORD(v29) = destClient->localClientNum;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 2540, ASSERT_TYPE_ASSERT, "(unsigned)( destClient->localClientNum ) < (unsigned)( 2 )", "destClient->localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v29, v30) )
            __debugbreak();
        }
        localClientNum = destClient->localClientNum;
        __asm { vmovups xmm0, xmmword ptr [rdi] }
        v22 = _RDI->addrHandleIndex;
        __asm { vmovups [rsp+0B8h+var_78], xmm0 }
        v23 = g_partyJoinInfo.joinAccepted[localClientNum] == 0;
        v31.addrHandleIndex = v22;
        if ( v23 )
        {
          v25 = NET_AdrToString(&v31);
          LODWORD(fmt) = localClientNum;
          Com_Printf(25, "[%s] HandleHostJoined - Received joined message from the host (%s), setting joinAccepted for client %i.\n", party->partyName, v25, fmt);
          v26 = "a lobby";
          g_partyJoinInfo.joinAccepted[destClient->localClientNum] = 1;
          g_partyJoinInfo.partyCodPlayMode[0] = Byte;
          if ( v10 )
            v26 = "a game in progress";
          g_partyJoinInfo.shouldGoToMPBlade = v9;
          g_partyJoinInfo.joiningAGameInProgress = v10;
          Com_Printf(25, "[%s] HandleHostJoined - joining %s\n", party->partyName, v26);
          XUID::FromMsg(&result, msg);
        }
        else
        {
          v24 = NET_AdrToString(&v31);
          LODWORD(fmt) = localClientNum;
          Com_Printf(25, "[%s] HandleHostJoined - Received duplicate join message from host (%s) for client %i\n", party->partyName, v24, fmt);
        }
        v27 = DVARINT_online_party_host_crossplay_change_toast_display_mode;
        if ( !DVARINT_online_party_host_crossplay_change_toast_display_mode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "online_party_host_crossplay_change_toast_display_mode") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v27);
        if ( v27->current.integer && Dvar_GetBool_Internal_DebugName(DVARBOOL_onlinegame, "onlinegame") && Party_IsPrivateParty(party) )
        {
          s_lastTimeAtWhichHostChangedCrossplaySettings = Sys_Milliseconds();
          s_shouldTryShowToastForPartyHostChangingCrossplaySetting = 1;
          s_haveShownToastAtleastOnceAfterJoin = 0;
        }
      }
      else
      {
        __asm { vmovups xmm0, xmmword ptr [rdi] }
        v18 = _RDI->addrHandleIndex;
        __asm { vmovups [rsp+0B8h+var_78], xmm0 }
        v31.addrHandleIndex = v18;
        v19 = NET_AdrToString(&v31);
        Com_PrintWarning(25, "HandleHostJoined - Received joined message from (%s), someone other than the potential host.\n", v19);
      }
    }
  }
  else
  {
    JoinState = PartyAtomic_GetJoinState(&g_partyJoinInfo);
    __asm { vmovups xmm0, xmmword ptr [rdi] }
    v31.addrHandleIndex = _RDI->addrHandleIndex;
    __asm { vmovups [rsp+0B8h+var_78], xmm0 }
    v13 = NET_AdrToString(&v31);
    Com_PrintWarning(25, "HandleHostJoined - Received joined message from (%s), not in the PARTYJOIN_JOINING state (%i).\n", v13, (unsigned int)JoinState);
  }
}

/*
==============
PartyClient_HandleJoinPrivatePartyRequest
==============
*/
void PartyClient_HandleJoinPrivatePartyRequest(PartyData *party, const PartyActiveClient *destClient, netadr_t *from, msg_t *msg)
{
  const char *String; 
  int MainActiveController; 
  const PartySplitscreenData *splitscreenData; 
  const dvar_t *v9; 
  PartyJoinChallenge buffer[2]; 
  XSESSION_INFO session; 

  if ( party->partyId != PRIVATE_PARTY_ID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 2593, ASSERT_TYPE_ASSERT, "(party->partyId == PRIVATE_PARTY_ID)", (const char *)&queryFormat, "party->partyId == PRIVATE_PARTY_ID") )
    __debugbreak();
  bdSecurityID::bdSecurityID(&session.m_security.m_id);
  bdSecurityKey::bdSecurityKey(&session.m_security.m_key);
  XSESSION_INFO::Deserialize(&session, msg);
  MSG_ReadData(msg, 6, buffer, 6);
  String = XSESSION_INFO::GetString(&session);
  Com_Printf(25, "[%s] %s for session %s with challenge %s\n", party->partyName, "PartyClient_HandleJoinPrivatePartyRequest", String, buffer[0].str);
  if ( PartyAtomic_IsJoiningActiveForSpecificSession(&g_partyJoinInfo, &session) )
  {
    Com_PrintWarning(25, "[%s] %s - Not joining host's lobby, already joining\n", party->partyName, "PartyClient_HandleJoinPrivatePartyRequest");
  }
  else if ( XSESSION_INFO::operator==(&session, &party->session->dyn.sessionInfo) )
  {
    Com_PrintWarning(25, "[%s] %s - Not joining host's lobby, already in that lobby\n", party->partyName, "PartyClient_HandleJoinPrivatePartyRequest");
  }
  else
  {
    g_partyJoinInfo.challenge = buffer[0];
    MainActiveController = Party_GetMainActiveController(party);
    splitscreenData = Party_GetSplitscreenData(party);
    if ( !PartyAtomic_SetupPotentialHostForJoining(MainActiveController, &session, PRIVATE_PARTY_ID, 1, &g_partyJoinInfo, splitscreenData) )
    {
      Com_PrintError(25, "PartyClient - JoinPartyHostLobby - Could not join our host's lobby\n");
      Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143DD5890);
    }
    v9 = DVARINT_pt_connectAttempts;
    if ( !DVARINT_pt_connectAttempts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "pt_connectAttempts") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v9);
    PartyAtomic_StartJoin(&g_partyJoinInfo, &g_partyData, PJT_HOSTREQUEST_PRIVATE_PARTY, PARTYJOIN_COMMIT, v9->current.integer);
  }
  bdSecurityKey::~bdSecurityKey(&session.m_security.m_key);
  bdSecurityID::~bdSecurityID(&session.m_security.m_id);
}

/*
==============
PartyAtomicClient_HandleJoinLobbyRequest
==============
*/
void PartyAtomicClient_HandleJoinLobbyRequest(PartyData *party, const PartyActiveClient *destClient, netadr_t *from, msg_t *msg)
{
  const char *v9; 
  const char *v11; 
  const char *v13; 
  bool v14; 
  unsigned __int64 Int64; 
  const char *v17; 
  const char *v19; 
  PartyDisconnectReason v20; 
  const char *v22; 
  const PartySplitscreenData *splitscreenData; 
  int v24; 
  int Int_Internal_DebugName; 
  PartyDisconnectReason v26; 
  unsigned int v27; 
  netadr_t v28; 
  int controllerIndex[2]; 
  __int64 v30; 
  PartyJoinChallenge buffer[2]; 
  XSESSION_INFO session; 

  v30 = -2i64;
  _RBX = from;
  *(_QWORD *)controllerIndex = &session.m_security;
  bdSecurityID::bdSecurityID(&session.m_security.m_id);
  bdSecurityKey::bdSecurityKey(&session.m_security.m_key);
  if ( party->inParty )
  {
    if ( party->areWeHost )
    {
      __asm
      {
        vmovups xmm0, xmmword ptr [rbx]
        vmovups [rsp+120h+var_F0], xmm0
      }
      v28.addrHandleIndex = _RBX->addrHandleIndex;
      v11 = NET_AdrToString(&v28);
      Com_PrintWarning(25, "PartyAtomicJoin - Received 'pa_joinlobbyrequest' from %s but we're the party host\n", v11);
    }
    else if ( NetConnection::operator==(&party->currentHost.connections[destClient->localClientNum], _RBX) )
    {
      MSG_ReadData(msg, 6, buffer, 6);
      XSESSION_INFO::Deserialize(&session, msg);
      v14 = MSG_ReadBit(msg) != 0;
      Int64 = MSG_ReadInt64(msg);
      if ( msg->overflowed )
      {
        __asm
        {
          vmovups xmm0, xmmword ptr [rbx]
          vmovups [rsp+120h+var_F0], xmm0
        }
        v28.addrHandleIndex = _RBX->addrHandleIndex;
        v17 = NET_AdrToString(&v28);
        Com_PrintWarning(25, "PartyAtomicJoin - Received 'pa_joinlobbyrequest' with invalid data from %s\n", v17);
      }
      else
      {
        PartyClient_MarkPacketReceived(party, &party->currentHost);
        if ( PartyAtomic_IsJoiningActiveForSpecificSession(&g_partyJoinInfo, &session) )
        {
          __asm
          {
            vmovups xmm0, xmmword ptr [rbx]
            vmovups [rsp+120h+var_F0], xmm0
          }
          v28.addrHandleIndex = _RBX->addrHandleIndex;
          v19 = NET_AdrToString(&v28);
          Com_PrintWarning(25, "PartyAtomicJoin - Received 'pa_joinlobbyrequest' from %s but we're already joining that other lobby.\n", v19);
        }
        else if ( XSESSION_INFO::operator==(&session, &party->session->dyn.sessionInfo) )
        {
          Com_PrintWarning(25, "PartyAtomicJoin - Received 'pa_joinlobbyrequest' to join another lobby host, but they're telling us to join the lobby we're already in!\n");
        }
        else if ( party->inParty && PartyMigrate_MigrateActive(party) && !Party_IsHostPresent(party) )
        {
          Com_PrintWarning(25, "PartyAtomicJoin - Received 'pa_joinlobbyrequest' but ignoring because we have already removed the host and started a migration.\n");
        }
        else
        {
          LOBYTE(v20) = 10;
          PartyAtomic_AbortJoinAttempt(&g_partyJoinInfo, v20);
          __asm
          {
            vmovups xmm0, xmmword ptr [rbx]
            vmovups [rsp+120h+var_F0], xmm0
          }
          v28.addrHandleIndex = _RBX->addrHandleIndex;
          v22 = NET_AdrToString(&v28);
          Com_Printf(25, "[%s] PartyAtomicJoin - Received 'pa_joinlobbyrequest' from host at %s - We need to join a new game lobby with challenge '%s'.\n", party->partyName, v22, buffer[0].str);
          *(PartyActiveClient *)controllerIndex = Party_GetMainActiveClient(party, destClient->localControllerIndex);
          splitscreenData = Party_GetSplitscreenData(party);
          v24 = PartyAtomic_SetupPotentialHostForJoining(controllerIndex[1], &session, GAME_LOBBY_ID, v14, &g_partyJoinInfo, splitscreenData);
          Int_Internal_DebugName = Dvar_GetInt_Internal_DebugName(DVARINT_pt_searchConnectAttempts, "pt_searchConnectAttempts");
          PartyAtomic_StartJoin(&g_partyJoinInfo, party, PJT_HOSTREQUEST, PARTYJOIN_JOIN, Int_Internal_DebugName);
          g_partyJoinInfo.lobbyId = Int64;
          g_partyJoinInfo.challenge = buffer[0];
          if ( v24 )
          {
            v27 = Sys_Milliseconds();
            Com_Printf(14, "PartyAtomicJoin - pa_joinlobbyrequest: Trying to join new lobby host at %i.\n", v27);
            if ( party->inParty )
              PartyMigrate_StopMigration(party);
          }
          else
          {
            Com_PrintWarning(25, "PartyAtomicJoin - pa_joinlobbyrequest: Could not join potential host\n");
            OnlineErrorManager::SetLastRecordedErrorCode(&g_onlineMgr.m_errorManager, (Online_Error_CAT_PARTY_JOIN_t)0x2000000, NULL);
            LOBYTE(v26) = 42;
            PartyAtomic_JoinAttemptFailed(&g_partyJoinInfo, "EXE/HOSTUNREACH", v26);
          }
        }
      }
    }
    else
    {
      __asm
      {
        vmovups xmm0, xmmword ptr [rbx]
        vmovups [rsp+120h+var_F0], xmm0
      }
      v28.addrHandleIndex = _RBX->addrHandleIndex;
      v13 = NET_AdrToString(&v28);
      Com_PrintWarning(25, "PartyAtomicJoin - Received 'pa_joinlobbyrequest' from someone other than our current party host (%s).\n", v13);
    }
  }
  else
  {
    __asm
    {
      vmovups xmm0, xmmword ptr [rbx]
      vmovups [rsp+120h+var_F0], xmm0
    }
    v28.addrHandleIndex = _RBX->addrHandleIndex;
    v9 = NET_AdrToString(&v28);
    Com_PrintWarning(25, "PartyAtomicJoin - Received 'pa_joinlobbyrequest' from %s but we're not in a party\n", v9);
  }
  bdSecurityKey::~bdSecurityKey(&session.m_security.m_key);
  bdSecurityID::~bdSecurityID(&session.m_security.m_id);
}

/*
==============
PartyAtomicClient_HandleActionResponse
==============
*/
void PartyAtomicClient_HandleActionResponse(PartyData *party, const PartyActiveClient *destClient, netadr_t *from, msg_t *msg)
{
  __int64 Byte; 
  unsigned int Long; 
  PartyJoinResponse v8; 
  PartyDisconnectReason v9; 
  char *fmt; 
  __int64 v11; 

  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 2733, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( party->areWeHost )
  {
    Com_PrintWarning(25, "[%s] PartyAtomicJoin - Received 'pa_actionresponse' but we're the party host\n", party->partyName);
  }
  else if ( PartyAtomic_IsJoiningOnHostequest(&g_partyJoinInfo) )
  {
    if ( PartyAtomic_ReadAndVerifyJoinIdentifier(msg, &g_partyJoinInfo) )
    {
      Byte = MSG_ReadByte(msg);
      Long = MSG_ReadLong(msg);
      v8 = Long;
      if ( msg->overflowed )
      {
        Com_PrintWarning(25, "[%s] PartyAtomicJoin - Received bad 'pa_actionresponse' message - invalid packet\n", party->partyName);
      }
      else if ( (unsigned int)Byte <= 1 )
      {
        if ( Long - 1 > 0x4D )
        {
          Com_PrintWarning(25, "[%s] PartyAtomicJoin - Received 'pa_actionresponse' with invalid response %i\n", party->partyName, Long);
        }
        else
        {
          LODWORD(fmt) = Byte;
          Com_Printf(25, "[%s] PartyAtomicJoin - Received 'pa_actionresponse' '%i for action %i.\n", party->partyName, Long, fmt);
          if ( v8 == JOINRESPONSE_ERROR_CANCELED )
          {
            Com_Printf(25, "[%s] PartyAtomicJoin - JOINRESPONSE_ERROR_CANCELED - Aborting join attempt\n", party->partyName);
            LOBYTE(v9) = 14;
            g_partyJoinInfo.errorResponse = JOINRESPONSE_ERROR_CANCELED;
            PartyAtomic_AbortJoinAttempt(&g_partyJoinInfo, v9);
          }
          else
          {
            if ( (unsigned int)Byte >= 2 )
            {
              LODWORD(v11) = Byte;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 2783, ASSERT_TYPE_ASSERT, "(unsigned)( joinAction ) < (unsigned)( PARTYACTION_COUNT )", "joinAction doesn't index PARTYACTION_COUNT\n\t%i not in [0, %i)", v11, 2) )
                __debugbreak();
            }
            g_partyJoinInfo.hostResponse[Byte] = v8;
          }
        }
      }
      else
      {
        Com_PrintWarning(25, "[%s] PartyAtomicJoin - Received 'pa_actionresponse' with invalid action %i\n", party->partyName, (unsigned int)Byte);
      }
    }
    else
    {
      Com_PrintWarning(25, "[%s] PartyAtomicJoin - Received 'pa_actionresponse' but validation failed.\n", party->partyName);
    }
  }
  else
  {
    Com_PrintWarning(25, "[%s] PartyAtomicJoin - Received 'pa_actionresponse' but we aren't joining anything.\n", party->partyName);
  }
}

/*
==============
PartyClient_HandleClientTask
==============
*/
void PartyClient_HandleClientTask(PartyData *party, const PartyActiveClient *destClient, netadr_t *from, msg_t *msg)
{
  unsigned int Byte; 
  unsigned int v8; 
  unsigned __int8 PrivacySetting; 
  const char *MapName; 
  int Long; 
  PartyClientTaskData clientTaskData; 
  msg_t buf; 
  __int64 v15; 
  Mem_LargeLocal buffer; 

  v15 = -2i64;
  _RBX = party;
  if ( party->inParty )
  {
    if ( Party_AreWeHost(party) )
    {
      Com_PrintWarning(25, "Received client task message - but we are the host\n");
    }
    else
    {
      Byte = MSG_ReadByte(msg);
      if ( Byte > 6 )
      {
        Com_PrintWarning(25, "Received invalid client task message - invalid task id %i\n", Byte);
      }
      else
      {
        clientTaskData.result = PARTY_CLIENT_TASK_RESULT_NOT_SUPPORTED;
        v8 = 0;
        clientTaskData.payload = NULL;
        clientTaskData.payloadSize = 0;
        clientTaskData.party = _RBX;
        clientTaskData.localClientNum = destClient->localClientNum;
        clientTaskData.taskId = Byte;
        switch ( Byte )
        {
          case 1u:
            if ( PlatformSessionsHSMEnabled() && !_RBX->createSessionForPartyRequestData.m_pending )
            {
              _RBX->createSessionForPartyRequestData.m_pending = 1;
              __asm
              {
                vmovups ymm0, ymmword ptr [rbp+57h+clientTaskData.party]
                vmovups ymmword ptr [rbx+59F88h], ymm0
              }
              _RBX->createSessionForPartyRequestData.m_completeCallback = (void (__fastcall *)(PlatformSessionType, _GUID, bool, unsigned int))PartyClient_RespondToCreateSessionRequest;
            }
            break;
          case 3u:
            Long = MSG_ReadLong(msg);
            if ( Long <= 0 )
            {
              Com_PrintError(25, "Recieved update session client task with no payload, nothing to do.");
              clientTaskData.result = PARTY_CLIENT_TASK_RESULT_FAILED;
              PartyClient_SendClientTaskResponse(_RBX, &clientTaskData);
            }
            else
            {
              MSG_ReadData(msg, Long, &buffer, 32);
              MSG_InitReadOnly(&buf, (unsigned __int8 *)&buffer, 32);
              MSG_BeginReading(&buf);
              if ( !MSG_ReadByte(&buf) )
              {
                LOBYTE(v8) = MSG_ReadBit(&buf) != 0;
                Com_Printf(25, "[%s] Privacy client task recieved with value %u\n", _RBX->partyName, v8);
                clientTaskData.result = PARTY_CLIENT_TASK_RESULT_OK;
                clientTaskData.payload = &_RBX->ps4SessionId;
                clientTaskData.payloadSize = 48;
                PartyClient_SendClientTaskResponse(_RBX, &clientTaskData);
              }
            }
            break;
          case 4u:
            PartyClient_RespondToMatchRulesRequest(_RBX, &clientTaskData);
            break;
          case 5u:
            PartyClient_RestoreCachedGameSettingsForDedi(_RBX);
            Mem_LargeLocal::Mem_LargeLocal(&buffer, 0x9AAui64, "min_msg_buf msgBuf");
            MSG_Init(&buf, (unsigned __int8 *)buffer.m_ptr, 2474);
            MapName = Party_GetMapName();
            MSG_WriteString(&buf, MapName);
            clientTaskData.result = PARTY_CLIENT_TASK_RESULT_OK;
            clientTaskData.payload = buf.data;
            clientTaskData.payloadSize = buf.cursize;
            PartyClient_SendClientTaskResponse(_RBX, &clientTaskData);
            Mem_LargeLocal::~Mem_LargeLocal(&buffer);
            break;
          case 6u:
            Mem_LargeLocal::Mem_LargeLocal(&buffer, 0x9AAui64, "min_msg_buf msgBuf");
            MSG_Init(&buf, (unsigned __int8 *)buffer.m_ptr, 2474);
            PrivacySetting = Party_GetPrivacySetting(&g_partyData);
            MSG_WriteByte(&buf, PrivacySetting);
            clientTaskData.result = PARTY_CLIENT_TASK_RESULT_OK;
            clientTaskData.payload = buf.data;
            clientTaskData.payloadSize = buf.cursize;
            PartyClient_SendClientTaskResponse(_RBX, &clientTaskData);
            Mem_LargeLocal::~Mem_LargeLocal(&buffer);
            break;
          default:
            Com_PrintWarning(25, "Unhandled DS task received with taskId(%u).\n", Byte);
            PartyClient_SendClientTaskResponse(_RBX, &clientTaskData);
            break;
        }
      }
    }
  }
  else
  {
    Com_PrintWarning(25, "Received stray client task message - not in game lobby\n", from);
  }
}

/*
==============
PartyClient_CreateTeamChat
==============
*/
void PartyClient_CreateTeamChat(PartyData *party, const PartyActiveClient *destClient, netadr_t *from, msg_t *msg)
{
  int v8; 
  const char *v9; 
  int addrHandleIndex; 
  const char *v12; 
  int v14; 
  const char *v15; 
  int v17; 
  const char *v18; 
  int Byte; 
  netadr_t v20[2]; 

  _RDI = from;
  if ( party->inParty )
  {
    if ( party->areWeHost )
    {
      __asm { vmovups xmm0, xmmword ptr [r8] }
      addrHandleIndex = from->addrHandleIndex;
      __asm { vmovups [rsp+58h+var_38], xmm0 }
      v20[0].addrHandleIndex = addrHandleIndex;
      v12 = NET_AdrToString(v20);
      Com_Printf(25, "[%s] Received stray create team chat message - we're the host (%s)\n", party->partyName, v12);
    }
    else if ( NetConnection::operator==(&party->currentHost.connections[destClient->localClientNum], from) )
    {
      if ( Party_IsHostDataAvailable(party) )
      {
        Byte = MSG_ReadByte(msg);
        PartyChat_CreateTeamChat(party, Byte);
      }
      else
      {
        __asm { vmovups xmm0, xmmword ptr [rdi] }
        v17 = _RDI->addrHandleIndex;
        __asm { vmovups [rsp+58h+var_38], xmm0 }
        v20[0].addrHandleIndex = v17;
        v18 = NET_AdrToString(v20);
        Com_Printf(25, "[%s] Received stray create team chat message - from the host but we've removed him already (%s)\n", party->partyName, v18);
      }
    }
    else
    {
      __asm { vmovups xmm0, xmmword ptr [rdi] }
      v14 = _RDI->addrHandleIndex;
      __asm { vmovups [rsp+58h+var_38], xmm0 }
      v20[0].addrHandleIndex = v14;
      v15 = NET_AdrToString(v20);
      Com_Printf(25, "[%s] Received stray create team chat message - not from host (%s)\n", party->partyName, v15);
    }
  }
  else
  {
    __asm { vmovups xmm0, xmmword ptr [r8] }
    v8 = from->addrHandleIndex;
    __asm { vmovups [rsp+58h+var_38], xmm0 }
    v20[0].addrHandleIndex = v8;
    v9 = NET_AdrToString(v20);
    Com_Printf(25, "[%s] Received stray create team chat message - not in party (%s)\n", party->partyName, v9);
  }
}

/*
==============
PartyClient_HandlePartyChatData
==============
*/
void PartyClient_HandlePartyChatData(PartyData *party, const PartyActiveClient *destClient, netadr_t *from, msg_t *msg)
{
  int addrHandleIndex; 
  netadr_t v6; 

  __asm { vmovups xmm0, xmmword ptr [r8] }
  addrHandleIndex = from->addrHandleIndex;
  __asm { vmovups [rsp+48h+var_28], xmm0 }
  v6.addrHandleIndex = addrHandleIndex;
  PartyChat_HandlePartyChatData(party, destClient, &v6, msg);
}

/*
==============
PartyClient_HandleRequestMMInfo
==============
*/
void PartyClient_HandleRequestMMInfo(PartyData *party, const PartyActiveClient *destClient, netadr_t *from, msg_t *msg)
{
  int v6; 
  const char *v7; 
  int addrHandleIndex; 
  const char *v10; 
  int v11; 
  bool *m_matchmakingTokenSent; 
  __int64 v13; 
  __int64 v14; 
  netadr_t v15; 

  if ( party->inParty )
  {
    if ( party->areWeHost )
    {
      __asm { vmovups xmm0, xmmword ptr [r8] }
      addrHandleIndex = from->addrHandleIndex;
      __asm { vmovups [rsp+78h+var_38], xmm0 }
      v15.addrHandleIndex = addrHandleIndex;
      v10 = NET_AdrToString(&v15);
      Com_PrintWarning(25, "[%s] %s - Received stray 'preqmminfo' message from (%s), we are the host\n", party->partyName, "PartyClient_HandleRequestMMInfo", v10);
    }
    else
    {
      v11 = 0;
      m_matchmakingTokenSent = party->specificData.clientData.m_matchmakingTokenSent;
      do
      {
        if ( !party->inParty && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 2078, ASSERT_TYPE_ASSERT, "(party->inParty)", (const char *)&queryFormat, "party->inParty") )
          __debugbreak();
        if ( party->areWeHost && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 2079, ASSERT_TYPE_ASSERT, "(!party->areWeHost)", (const char *)&queryFormat, "!party->areWeHost") )
          __debugbreak();
        if ( (unsigned int)v11 >= 2 )
        {
          LODWORD(v14) = 2;
          LODWORD(v13) = v11;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 2080, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( sizeof( party->specificData.clientData.m_matchmakingTokenSent ) )", "localClientNum doesn't index sizeof( party->specificData.clientData.m_matchmakingTokenSent )\n\t%i not in [0, %i)", v13, v14) )
            __debugbreak();
        }
        *m_matchmakingTokenSent = 0;
        ++v11;
        ++m_matchmakingTokenSent;
      }
      while ( v11 < 2 );
    }
  }
  else
  {
    __asm { vmovups xmm0, xmmword ptr [r8] }
    v6 = from->addrHandleIndex;
    __asm { vmovups [rsp+78h+var_38], xmm0 }
    v15.addrHandleIndex = v6;
    v7 = NET_AdrToString(&v15);
    Com_PrintWarning(25, "[%s] %s - Received stray 'preqmminfo' message from (%s), not in party.\n", party->partyName, "PartyClient_HandleRequestMMInfo", v7);
  }
}

/*
==============
PartyClient_HandleUpdateXnaddr
==============
*/
void PartyClient_HandleUpdateXnaddr(PartyData *party, const PartyActiveClient *destClient, netadr_t *from, msg_t *msg)
{
  int addrHandleIndex; 
  const char *v10; 
  const char *v11; 
  const char *v13; 
  NetConnection *HostConnection; 
  const char *String; 
  const char *v17; 
  const char *v18; 
  bool IsRelay; 
  const char *v20; 
  const char *v21; 
  const char *v23; 
  XNADDR *Address; 
  const char *v25; 
  netadr_t v26; 
  msg_t buf; 
  XNADDR buffer; 
  unsigned __int8 data[2480]; 

  __asm { vmovups xmm0, xmmword ptr [r8] }
  addrHandleIndex = from->addrHandleIndex;
  _RDI = from;
  if ( party->inParty )
  {
    if ( party->areWeHost )
    {
      v26.addrHandleIndex = from->addrHandleIndex;
      __asm { vmovups [rsp+0AE0h+var_AB0], xmm0 }
      v11 = NET_AdrToString(&v26);
      Com_PrintWarning(25, "[%s] PartyClient - UpdateXnaddr - Received stray 'pa_updatexnaddr' message from (%s), we are the host\n", party->partyName, v11);
    }
    else
    {
      XNADDR::Clear(&buffer);
      MSG_ReadData(msg, 84, &buffer, 84);
      if ( XNADDR::IsNull(&buffer) )
      {
        __asm { vmovups xmm0, xmmword ptr [rdi] }
        v26.addrHandleIndex = addrHandleIndex;
        __asm { vmovups [rsp+0AE0h+var_AB0], xmm0 }
        v13 = NET_AdrToString(&v26);
        Com_PrintWarning(25, "[%s] PartyClient - UpdateXnaddr - Received invalid 'pa_updatexnaddr' message from (%s), xnaddr was null\n", party->partyName, v13);
      }
      else
      {
        HostConnection = Party_GetHostConnection(party, destClient->localClientNum);
        if ( NetConnection::CompareAddr(HostConnection, &buffer) )
        {
          String = XNADDR::GetString(&buffer);
          __asm { vmovups xmm0, xmmword ptr [rdi] }
          v26.addrHandleIndex = addrHandleIndex;
          __asm { vmovups [rsp+0AE0h+var_AB0], xmm0 }
          v17 = String;
          v18 = NET_AdrToString(&v26);
          Com_PrintWarning(25, "[%s] PartyClient - UpdateXnaddr - Received 'pa_updatexnaddr' message from (%s) but updated xnaddr already matches current one (%s)\n", party->partyName, v18, v17);
        }
        else
        {
          IsRelay = NetConnection::IsRelay(HostConnection);
          v20 = XNADDR::GetString(&buffer);
          v21 = v20;
          if ( IsRelay )
          {
            Com_Printf(25, "[%s] Updating host xnaddr to:\n%s\n", party->partyName, v20);
            Address = XSESSION_INFO::GetAddress(&party->session->dyn.sessionInfo);
            XNADDR::operator=(Address, &buffer);
            NetConnection::Migrate(HostConnection, &buffer);
            MSG_Init(&buf, data, 2474);
            v25 = j_va("%ipa_updatexnaddrack", (unsigned int)party->partyId);
            MSG_WriteString(&buf, v25);
            NetConnection::SendReliable(HostConnection, &buf, 2u);
          }
          else
          {
            __asm { vmovups xmm0, xmmword ptr [rdi] }
            v26.addrHandleIndex = addrHandleIndex;
            __asm { vmovups [rsp+0AE0h+var_AB0], xmm0 }
            v23 = NET_AdrToString(&v26);
            Com_PrintWarning(25, "[%s] PartyClient - UpdateXnaddr - Received 'pa_updatexnaddr' message from (%s) but we're not connected over relay (%s)\n", party->partyName, v23, v21);
          }
        }
      }
    }
  }
  else
  {
    v26.addrHandleIndex = from->addrHandleIndex;
    __asm { vmovups [rsp+0AE0h+var_AB0], xmm0 }
    v10 = NET_AdrToString(&v26);
    Com_PrintWarning(25, "[%s] PartyClient - UpdateXnaddr - Received stray 'pa_updatexnaddr' message from (%s), not in party.\n", party->partyName, v10);
  }
}

/*
==============
PartyClient_HandleEndParty
==============
*/
void PartyClient_HandleEndParty(PartyData *party, const PartyActiveClient *destClient, netadr_t *from, msg_t *msg)
{
  int v9; 
  const char *v10; 
  int addrHandleIndex; 
  const char *v13; 
  int v15; 
  const char *v16; 
  int v18; 
  const char *v19; 
  __int64 Bits; 
  int v22; 
  const char *v23; 
  netadr_t v24; 
  PartyActiveClient mainActiveClient; 
  char string[64]; 

  _RDI = from;
  if ( party->inParty )
  {
    if ( party->areWeHost )
    {
      __asm { vmovups xmm0, xmmword ptr [r8] }
      addrHandleIndex = from->addrHandleIndex;
      __asm { vmovups [rsp+0F8h+var_A8], xmm0 }
      v24.addrHandleIndex = addrHandleIndex;
      v13 = NET_AdrToString(&v24);
      Com_Printf(25, "[%s] Received stray endParty message - we're the host (%s)\n", party->partyName, v13);
    }
    else if ( NetConnection::operator==(&party->currentHost.connections[destClient->localClientNum], from) )
    {
      if ( Party_IsHostDataAvailable(party) )
      {
        Bits = MSG_ReadBits(msg, 2u);
        if ( (unsigned __int64)(Bits + 0x80000000i64) > 0xFFFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "enum PartyEndType __cdecl truncate_cast_impl<enum PartyEndType,__int64>(__int64)", "signed", (int)Bits, "signed", Bits) )
          __debugbreak();
        MSG_ReadString(msg, string, 0x40u);
        __asm { vmovups xmm0, xmmword ptr [rdi] }
        v22 = _RDI->addrHandleIndex;
        __asm { vmovups [rsp+0F8h+var_A8], xmm0 }
        v24.addrHandleIndex = v22;
        v23 = NET_AdrToString(&v24);
        Com_Printf(25, "[%s] Received endparty message from host with endType %i (%s): %s\n", party->partyName, (unsigned int)Bits, v23, string);
        mainActiveClient = Party_GetMainActiveClient(party, destClient->localControllerIndex);
        PartyClient_EndParty_Internal(party, &mainActiveClient, (PartyEndType)Bits);
      }
      else
      {
        __asm { vmovups xmm0, xmmword ptr [rdi] }
        v18 = _RDI->addrHandleIndex;
        __asm { vmovups [rsp+0F8h+var_A8], xmm0 }
        v24.addrHandleIndex = v18;
        v19 = NET_AdrToString(&v24);
        Com_Printf(25, "[%s] Received stray endParty message - from the host but we've removed him already (%s)\n", party->partyName, v19);
      }
    }
    else
    {
      __asm { vmovups xmm0, xmmword ptr [rdi] }
      v15 = _RDI->addrHandleIndex;
      __asm { vmovups [rsp+0F8h+var_A8], xmm0 }
      v24.addrHandleIndex = v15;
      v16 = NET_AdrToString(&v24);
      Com_Printf(25, "[%s] Received stray endParty message - not from host (%s)\n", party->partyName, v16);
    }
  }
  else
  {
    __asm { vmovups xmm0, xmmword ptr [r8] }
    v9 = from->addrHandleIndex;
    __asm { vmovups [rsp+0F8h+var_A8], xmm0 }
    v24.addrHandleIndex = v9;
    v10 = NET_AdrToString(&v24);
    Com_Printf(25, "[%s] Received stray endParty message - not in party (%s)\n", party->partyName, v10);
  }
}

/*
==============
PartyClient_HandleKickedFromParty
==============
*/
void PartyClient_HandleKickedFromParty(PartyData *party, const PartyActiveClient *destClient, netadr_t *from, msg_t *msg)
{
  unsigned __int8 Byte; 
  unsigned __int8 v9; 
  const char *v10; 
  const char *v11; 
  OnlineChatManager *Instance; 
  char *fmt; 
  PartyDisconnectReason disconnectReason; 
  PartyActiveClient mainActiveClient; 

  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 3413, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( party->inParty && !party->areWeHost && NetConnection::operator==(&party->currentHost.connections[destClient->localClientNum], from) )
  {
    Byte = MSG_ReadByte(msg);
    LODWORD(fmt) = Byte;
    v9 = Byte;
    Com_Printf(25, "[%s] Got '%s' message from host with reason %i.\n", party->partyName, "kickedFromParty", fmt);
    PartyAtomic_AbortJoinAttemptForParty(&g_partyJoinInfo, party, (const PartyDisconnectReason)v9, NULL);
    if ( Party_IsGameLobby(party) )
      Party_StopParty(&g_partyData);
    v10 = "@PLATFORM/KICKEDFROMPARTY";
    if ( v9 == 48 )
      v10 = "@ONLINE/MM_INVALID_PLAYER_INFO";
    LOBYTE(disconnectReason) = v9;
    mainActiveClient = Party_GetMainActiveClient(party, destClient->localControllerIndex);
    PartyClient_DisconnectFromHostInternal(party, &mainActiveClient, v10, 1, 1, disconnectReason, JOINRESPONSE_NONE);
    if ( v9 == 48 )
      Party_HandleMatchmakingInvalidPlayerInfo(party, destClient->localControllerIndex);
    v11 = SEH_LocalizeTextMessage("LUA_MENU/TEXTCHAT_KICKED_FROM_PARTY", "ui string", LOCMSG_NOERR);
    if ( v11 )
    {
      Instance = OnlineChatManager::GetInstance();
      OnlineChatManager::SendSystemEvent(Instance, destClient->localControllerIndex, v11);
    }
    Com_SetErrorMessage(v10);
  }
  else
  {
    Com_Printf(25, "[%s] Received stray '%s' message.\n", party->partyName, "kickedFromParty");
  }
}

/*
==============
PartyClient_HandlePartyStateMsg
==============
*/
void PartyClient_HandlePartyStateMsg(PartyData *party, const PartyActiveClient *destClient, netadr_t *from, msg_t *msg)
{
  PartyActiveClient v8; 
  PartyType partyId; 
  LocalClientNum_t localClientNum; 
  int addrHandleIndex; 
  int v14; 
  const char *v15; 
  int v17; 
  const char *v18; 
  int v20; 
  const char *v21; 
  int v23; 
  const char *v24; 
  const char *HostStatus; 
  unsigned int v26; 
  netadr_t v27; 
  PartyActiveClient mainActiveClient; 

  _RBX = from;
  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 3868, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  v8 = Party_GetMainActiveClient(party, destClient->localControllerIndex);
  partyId = party->partyId;
  localClientNum = destClient->localClientNum;
  mainActiveClient = v8;
  if ( PartyAtomic_PacketIsFromJoiningHost(&g_partyJoinInfo, localClientNum, partyId, _RBX) )
  {
    __asm { vmovups xmm0, xmmword ptr [rbx] }
    addrHandleIndex = _RBX->addrHandleIndex;
    __asm { vmovups [rsp+98h+var_68], xmm0 }
    v27.addrHandleIndex = addrHandleIndex;
    PartyAtomicClient_HandlePartyStateMsg_FromAcceptedHost(party, mainActiveClient.localControllerIndex, &v27, msg, &g_partyJoinInfo, destClient);
  }
  else if ( party->inParty )
  {
    if ( party->areWeHost )
    {
      __asm { vmovups xmm0, xmmword ptr [rbx] }
      v17 = _RBX->addrHandleIndex;
      __asm { vmovups [rsp+98h+var_68], xmm0 }
      v27.addrHandleIndex = v17;
      v18 = NET_AdrToString(&v27);
      Com_Printf(25, "[%s] Received stray partystate message from %s - we are the\n", party->partyName, v18);
    }
    else if ( NetConnection::operator==(&party->currentHost.connections[destClient->localClientNum], _RBX) )
    {
      if ( Party_IsRunning(party) )
      {
        if ( Party_IsHostDataAvailable(party) )
        {
          PartyClient_MarkPacketReceived(party, &party->currentHost);
          if ( PartyAtomic_IsJoiningActive(&g_partyJoinInfo) )
          {
            Com_Printf(25, "[%s] PartyClient - HandlePartyStateMsg - We got a partystate from the host while we were trying to join another party, so we'll ignore this packet\n", party->partyName);
          }
          else
          {
            if ( !Party_IsHostPresent(party) )
            {
              if ( !Party_IsHostAway(party) && !Party_IsHostCommitted(party) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 3919, ASSERT_TYPE_ASSERT, "(Party_IsHostAway( party ) || Party_IsHostCommitted( party ))", (const char *)&queryFormat, "Party_IsHostAway( party ) || Party_IsHostCommitted( party )") )
                __debugbreak();
              HostStatus = Party_GetHostStatus(party);
              Com_Printf(25, "[%s] PartyClient - HandlePartyStateMsg - Host is now PRESENT from %s\n", party->partyName, HostStatus);
              v26 = Party_HostNum(party);
              PartyClient_ChangeMemberStatus(party, v26, 5u);
            }
            Com_Printf(25, "[%s] PartyClient - HandlePartyStateMsg - Received party state bits from current host.\n", party->partyName);
            PartyClient_PreParsePartyState(&party->partyStateData, msg);
            if ( PartyClient_HaveAllPacketsForPartyState(&party->partyStateData) )
              PartyClient_ParsePartyStateMsg(party, &mainActiveClient);
          }
        }
        else
        {
          Com_Printf(25, "[%s] PartyClient - HandlePartyStateMsg - Received stray state message - from the host but we already removed him\n", party->partyName);
        }
      }
      else
      {
        __asm { vmovups xmm0, xmmword ptr [rbx] }
        v23 = _RBX->addrHandleIndex;
        __asm { vmovups [rsp+98h+var_68], xmm0 }
        v27.addrHandleIndex = v23;
        v24 = NET_AdrToString(&v27);
        Com_Printf(25, "[%s] PartyClient - HandlePartyStateMsg - Ignoring party state message from '%s' while the party is not running\n", party->partyName, v24);
      }
    }
    else
    {
      __asm { vmovups xmm0, xmmword ptr [rbx] }
      v20 = _RBX->addrHandleIndex;
      __asm { vmovups [rsp+98h+var_68], xmm0 }
      v27.addrHandleIndex = v20;
      v21 = NET_AdrToString(&v27);
      Com_Printf(25, "[%s] Received stray partystate message from %s - not from the host\n", party->partyName, v21);
    }
  }
  else
  {
    __asm { vmovups xmm0, xmmword ptr [rbx] }
    v14 = _RBX->addrHandleIndex;
    __asm { vmovups [rsp+98h+var_68], xmm0 }
    v27.addrHandleIndex = v14;
    v15 = NET_AdrToString(&v27);
    Com_Printf(25, "[%s] Received stray partystate message from %s - not in that party\n", party->partyName, v15);
  }
}

/*
==============
PartyClient_HandleNotPresentMsg
==============
*/
void PartyClient_HandleNotPresentMsg(PartyData *party, const PartyActiveClient *destClient, netadr_t *from, msg_t *msg)
{
  int addrHandleIndex; 
  const char *v9; 
  unsigned int v10; 
  const char *v11; 
  PartyDisconnectReason disconnectReason; 
  PartyActiveClient mainActiveClient; 
  msg_t buf; 
  netadr_t data; 

  _RBX = from;
  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 3957, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( party->inParty )
  {
    if ( party->areWeHost )
    {
      Com_Printf(25, "[%s] Ignoring stray notPresent message (we're the host)\n", party->partyName);
    }
    else if ( Party_IsPrivateParty(party) )
    {
      if ( party->inParty && NetConnection::operator==(&party->currentHost.connections[destClient->localClientNum], _RBX) )
      {
        if ( Party_IsHostDedicated(party) )
        {
          Com_Printf(25, "[%s] Ignoring stray notPresent message (from dedicated host)\n", party->partyName);
        }
        else if ( Party_IsHostDataAvailable(party) )
        {
          __asm { vmovups xmm0, xmmword ptr [rbx] }
          addrHandleIndex = _RBX->addrHandleIndex;
          __asm { vmovups xmmword ptr [rsp+0C8h+data], xmm0 }
          data.addrHandleIndex = addrHandleIndex;
          v9 = NET_AdrToString(&data);
          Com_Printf(25, "[%s] PartyClient - Received 'notPresent' message from the host at %s\n", party->partyName, v9);
          v10 = Party_HostNum(party);
          PartyClient_MarkPacketReceived(party, &party->currentHost);
          PartyClient_ChangeMemberStatus(party, v10, 4u);
          if ( !Party_IsPrivateParty(party) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 3938, ASSERT_TYPE_ASSERT, "(Party_IsPrivateParty( party ))", (const char *)&queryFormat, "Party_IsPrivateParty( party )") )
            __debugbreak();
          Com_Printf(25, "[%s] PartyClient - SendHostBackoutMessage - Asking the party host to get back to the party screen, we got left behind\n", party->partyName);
          MSG_Init(&buf, (unsigned __int8 *)&data, 32);
          v11 = j_va("%ipa_clientpres", (unsigned int)party->partyId);
          MSG_WriteString(&buf, v11);
          party->currentHost.lastPacketSentTime = Sys_Milliseconds();
          if ( !PartyClient_SendMessageToHost(party, &buf, destClient) )
          {
            mainActiveClient = Party_GetMainActiveClient(party, destClient->localControllerIndex);
            OnlineErrorManager::SetLastRecordedErrorCode(&g_onlineMgr.m_errorManager, (Online_Error_CAT_PARTY_t)0x400000, NULL);
            LOBYTE(disconnectReason) = 37;
            PartyClient_DisconnectFromHostInternal(party, &mainActiveClient, "@EXE/TRANSMITERROR", 0, 1, disconnectReason, JOINRESPONSE_NONE);
          }
        }
        else
        {
          Com_PrintWarning(25, "[%s] Received stray notPresent message - from the host but we already removed him\n", party->partyName);
        }
      }
      else
      {
        Com_Printf(25, "[%s] Ignoring stray notPresent message (not from the host)\n", party->partyName);
      }
    }
    else
    {
      Com_Printf(25, "[%s] Ignoring stray notPresent message (not for a private party)\n", party->partyName);
    }
  }
  else
  {
    Com_Printf(25, "[%s] Ignoring stray notPresent message (not in a party)\n", party->partyName);
  }
}

/*
==============
PartyClient_HandleGoMsg
==============
*/
void PartyClient_HandleGoMsg(PartyData *party, const PartyActiveClient *destClient, netadr_t *from, msg_t *msg)
{
  int v7; 
  int v8; 
  int v9; 
  const char *v10; 
  const char *v11; 
  unsigned __int64 v12; 
  int v13; 
  PartyActiveClient MainActiveClient; 
  LocalClientNum_t localClientNum; 
  bool IsValid; 
  const char *partyName; 
  int v18; 
  int Int_Internal_DebugName; 
  const char *StringSafe; 
  const char *v21; 
  const char *v22; 
  OnlineChallengesManager *Instance; 
  int localControllerIndex[2]; 
  unsigned __int64 matchId; 

  if ( Party_IsGameLobby(party) || Live_IsInSystemlinkLobby() )
  {
    if ( party->inParty )
    {
      if ( Party_IsRunning(party) )
      {
        if ( party->areWeHost )
        {
          Com_DPrintf(25, "[%s] Ignoring stray go message; we are the host\n", party->partyName);
        }
        else if ( PartyMigrate_MigrateActive(party) )
        {
          Com_DPrintf(25, "[%s] Ignoring go message: migration is active\n", party->partyName);
        }
        else
        {
          v7 = Cmd_ArgInt(1);
          v8 = Cmd_ArgInt(2);
          v9 = Cmd_ArgInt(3);
          v10 = Cmd_Argv(4);
          v11 = Cmd_Argv(5);
          v12 = Cmd_ArgUInt64(6);
          v13 = destClient->localControllerIndex;
          matchId = v12;
          MainActiveClient = Party_GetMainActiveClient(party, v13);
          localClientNum = destClient->localClientNum;
          *(PartyActiveClient *)localControllerIndex = MainActiveClient;
          if ( Party_PacketIsFromHost(party, localClientNum, from) )
          {
            IsValid = Session_IsValid(party->session);
            partyName = party->partyName;
            if ( IsValid )
            {
              Com_DPrintf(25, "[%s] PartyClient - HandleGoMsg\n", partyName);
              PartyClient_MarkPacketReceived(party, &party->currentHost);
              if ( !party->specificData.clientData.m_receivedGoMessage )
              {
                Dvar_SetBool_Internal(DVARBOOL_xblive_privatematch, v9 > 0);
                if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_systemlink, "systemlink") && !Live_IsInSystemlinkLobby() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 4082, ASSERT_TYPE_ASSERT, "(!Dvar_GetBool_Internal_DebugName( DVARBOOL_systemlink, \"systemlink\" ) || Live_IsInSystemlinkLobby())", (const char *)&queryFormat, "!Dvar_GetBool( systemlink ) || Live_IsInSystemlinkLobby()", *(_QWORD *)localControllerIndex, matchId) )
                  __debugbreak();
                Party_ResetTweakDvars();
                if ( !Party_IsPrivateOrSystemlinkGame(party) )
                {
                  v18 = localControllerIndex[1];
                  Live_SetPlaylistNum(localControllerIndex[1], v7);
                  GamerProfile_SetPlaylistNum(localControllerIndex[1], v7);
                  if ( Party_GetSecondaryActiveClient(party, (PartyActiveClient *)localControllerIndex) )
                    GamerProfile_SetPlaylistNum(localControllerIndex[1], v7);
                  Int_Internal_DebugName = Dvar_GetInt_Internal_DebugName(DVARINT_playlist, "playlist");
                  if ( Playlist_CountEntries(Int_Internal_DebugName) <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 4099, ASSERT_TYPE_ASSERT, "(Playlist_CountEntries( Dvar_GetInt_Internal_DebugName( DVARINT_playlist, \"playlist\" ) ) > 0)", (const char *)&queryFormat, "Playlist_CountEntries( Dvar_GetInt( playlist ) ) > 0") )
                    __debugbreak();
                  Playlist_RunRules(v18, v8);
                  StringSafe = Dvar_GetStringSafe(g_mapVoteInfo[0].uiMapnameDVar);
                  Party_SetEntryADisplayMapName(StringSafe);
                  v21 = Dvar_GetStringSafe(g_mapVoteInfo[1].uiMapnameDVar);
                  Party_SetEntryBDisplayMapName(v21);
                  v22 = Dvar_GetStringSafe(g_mapVoteInfo[2].uiMapnameDVar);
                  Party_SetEntryCDisplayMapName(v22);
                }
                Dvar_SetString_Internal(DVARSTR_ui_mapname, v10);
                Dvar_SetString_Internal(DVARSTR_ui_gametype, v11);
                Com_Printf(25, "[%s] PartyClient - HandleGoMsg - Since the host asked us to start, we'll assume away members are present\n", party->partyName);
                PartyClient_MarkAwayPartyMembersPresent(party);
                OnlineMatchId::SetMatchId(matchId);
                OnlineMatchmakerOmniscient::ClientStartGame(&OnlineMatchmakerOmniscient::ms_instance);
                party->specificData.clientData.m_receivedGoMessage = 1;
                Live_MultiplayerRoundStartNotify();
                Instance = OnlineChallengesManager::GetInstance();
                OnlineChallengesManager::StartMatch(Instance);
                if ( Party_IsGameLobby(party) && party->inParty && Live_IsInGameBattlesGame() )
                  GameBattles_NotifyMatchStarted(destClient->localControllerIndex);
              }
            }
            else
            {
              Com_Printf(14, "[%s] PartyClient_HandleGoMsg: Don't know address of currentHost\n", partyName);
            }
          }
          else
          {
            Com_PrintError(25, "[%s] Unhandled go message!\n", party->partyName);
          }
        }
      }
      else
      {
        Com_DPrintf(25, "[%s] Ignoring stray go message; party is not running\n", party->partyName);
      }
    }
    else
    {
      Com_DPrintf(25, "[%s] Ignoring stray go message; not in party\n", party->partyName);
    }
  }
  else
  {
    Com_DPrintf(25, "[%s] Ignoring stray go message; not a game lobby or LAN Lobby game\n", party->partyName);
  }
}

/*
==============
PartyClient_HandleClearGoMsg
==============
*/
void PartyClient_HandleClearGoMsg(PartyData *party, const PartyActiveClient *destClient, netadr_t *from, msg_t *msg)
{
  int addrHandleIndex; 
  const char *v9; 
  netadr_t v10; 

  _RSI = from;
  if ( Party_IsGameLobby(party) )
  {
    if ( !party->inParty )
    {
LABEL_11:
      Com_Printf(25, "[%s] Received stray cleargo message - not in a running party\n", party->partyName);
      return;
    }
    if ( Live_IsInGameBattlesGame() )
      GameBattles_NotifyMatchEnded(destClient->localControllerIndex);
  }
  if ( !party->inParty || !Party_IsRunning(party) )
    goto LABEL_11;
  if ( party->inParty && NetConnection::operator==(&party->currentHost.connections[destClient->localClientNum], _RSI) )
  {
    Com_Printf(25, "[%s] Handling cleargo message\n", party->partyName);
    PartyClient_MarkPacketReceived(party, &party->currentHost);
    party->joiningAGameInProgress = 0;
    PartyClient_ClearPartyGo(party);
  }
  else
  {
    __asm { vmovups xmm0, xmmword ptr [rsi] }
    addrHandleIndex = _RSI->addrHandleIndex;
    __asm { vmovups [rsp+58h+var_38], xmm0 }
    v10.addrHandleIndex = addrHandleIndex;
    v9 = NET_AdrToString(&v10);
    Com_PrintError(25, "[%s] Received cleargo message from unexpected source %s\n", party->partyName, v9);
  }
}

/*
==============
PartyClient_HandleInactiveKeepalive
==============
*/
void PartyClient_HandleInactiveKeepalive(PartyData *party, const PartyActiveClient *destClient, netadr_t *from, msg_t *msg)
{
  ;
}

/*
==============
PartyAtomicClient_CommitNewPartyState
==============
*/
void PartyAtomicClient_CommitNewPartyState(PartyData *party, const PartyActiveClient *mainActiveClient)
{
  int OurClientNum; 
  int ConnectivityBitsForParty; 
  int v6; 
  PartyType partyId; 
  const char *LocalClientName; 
  unsigned __int64 m_id; 
  const unsigned __int64 *SecurityId; 
  XUID result; 

  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 3792, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( !mainActiveClient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 3793, ASSERT_TYPE_ASSERT, "(mainActiveClient)", (const char *)&queryFormat, "mainActiveClient") )
    __debugbreak();
  Com_Printf(25, "[%s] PartyAtomic: Committing party state to new/accepted host.\n", party->partyName);
  if ( PartyAtomic_IsJoiningActive(&g_partyJoinInfo) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 3797, ASSERT_TYPE_ASSERT, "(!PartyAtomic_IsJoiningActive( &g_partyJoinInfo ))", (const char *)&queryFormat, "!PartyAtomic_IsJoiningActive( &g_partyJoinInfo )") )
    __debugbreak();
  Party_ClearMembers(party);
  PartyClient_ResetPartyState(party);
  if ( Party_IsGameLobby(party) )
    BG_GameStateInfo_ClearActiveState();
  PartyClient_ParsePartyStateMsg(party, mainActiveClient);
  OurClientNum = Live_GetOurClientNum(mainActiveClient->localControllerIndex, party);
  if ( OurClientNum != -1 )
  {
    ConnectivityBitsForParty = PeerMesh_GetConnectivityBitsForParty(party, OurClientNum);
    PeerMesh_InitLocalConnectivity(party, ConnectivityBitsForParty);
  }
  v6 = Sys_Milliseconds();
  partyId = party->partyId;
  party->lastMemberInfoTime = v6;
  LocalClientName = Live_GetLocalClientName(mainActiveClient->localControllerIndex);
  m_id = Live_GetXuid(&result, mainActiveClient->localControllerIndex)->m_id;
  SecurityId = (const unsigned __int64 *)XSESSION_INFO::GetSecurityId(&party->session->dyn.sessionInfo);
  PartyProfile_Init(*SecurityId, (const XUID)m_id, LocalClientName, partyId, &party->profileState);
  party->createSessionForPartyRequestData.m_taskData.party = NULL;
  *(_QWORD *)&party->createSessionForPartyRequestData.m_taskData.localClientNum = 0i64;
  party->createSessionForPartyRequestData.m_taskData.payload = NULL;
  *(_QWORD *)&party->createSessionForPartyRequestData.m_taskData.payloadSize = 0i64;
}

/*
==============
PartyAtomicClient_HandleHostAccept_Internal
==============
*/
void PartyAtomicClient_HandleHostAccept_Internal(PartyData *party, const PartyActiveClient *destClient, netadr_t *from, msg_t *msg)
{
  PartyJoinState JoinState; 
  const char *v10; 
  const char *v12; 
  const char *v14; 
  const char *v16; 
  netadr_t v17; 
  PartyJoinChallenge buffer; 
  netadr_t froma; 

  froma.addrHandleIndex = from->addrHandleIndex;
  __asm
  {
    vmovups xmm0, xmmword ptr [r8]
    vmovups xmmword ptr [rbp+from.type], xmm0
  }
  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 2401, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( PartyAtomic_GetJoinState(&g_partyJoinInfo) == PARTYJOIN_REQUEST || PartyAtomic_GetJoinState(&g_partyJoinInfo) == PARTYJOIN_REQUESTED )
  {
    if ( PartyAtomic_HasErrorOccured(&g_partyJoinInfo) )
    {
      __asm
      {
        vmovups xmm0, xmmword ptr [rbp+from.type]
        vmovups [rbp+var_50], xmm0
      }
      v17.addrHandleIndex = froma.addrHandleIndex;
      v12 = NET_AdrToString(&v17);
      Com_PrintWarning(25, "HandleHostJoined - Received accept message from (%s), but we already decided to fail through some other message!\n", v12);
    }
    else
    {
      if ( CL_AllLocalClientsInactive() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 2417, ASSERT_TYPE_ASSERT, "(!CL_AllLocalClientsInactive())", "%s\n\tPARTYJOIN_REQUESTED while we're not in the menus", "!CL_AllLocalClientsInactive()") )
        __debugbreak();
      if ( PartyAtomic_PacketIsFromPotentialHost(&g_partyJoinInfo, (const LocalClientNum_t)destClient->localClientNum, (const PartyType)party->partyId, &froma) )
      {
        if ( !NetConnection::CompareAddr(&g_partyJoinInfo.connections[destClient->localClientNum], &froma) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 2426, ASSERT_TYPE_ASSERT, "(partyJoinInfo->connections[destClient->localClientNum].CompareAddr( from ))", (const char *)&queryFormat, "partyJoinInfo->connections[destClient->localClientNum].CompareAddr( from )") )
          __debugbreak();
        MSG_ReadData(msg, 6, &buffer, 6);
        __asm
        {
          vmovups xmm0, xmmword ptr [rbp+from.type]
          vmovups [rbp+var_50], xmm0
        }
        v17.addrHandleIndex = froma.addrHandleIndex;
        v16 = NET_AdrToString(&v17);
        Com_Printf(25, "[%s] HandleHostAccept - Accept message from (%s), with challenge %s.\n", party->partyName, v16, buffer.str);
        if ( g_partyJoinInfo.joinType == PJT_NONE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 2454, ASSERT_TYPE_ASSERT, "(partyJoinInfo->joinType != PJT_NONE)", (const char *)&queryFormat, "partyJoinInfo->joinType != PJT_NONE") )
          __debugbreak();
        g_partyJoinInfo.challenge = buffer;
        PartyAtomic_SetJoinState(&g_partyJoinInfo, PARTYJOIN_JOIN, 0);
        g_partyJoinInfo.partyType = party->partyId;
      }
      else
      {
        __asm
        {
          vmovups xmm0, xmmword ptr [rbp+from.type]
          vmovups [rbp+var_50], xmm0
        }
        v17.addrHandleIndex = froma.addrHandleIndex;
        v14 = NET_AdrToString(&v17);
        Com_PrintWarning(25, "HandleHostAccept - Received accept message from (%s), someone other than the potential host.\n", v14);
      }
    }
  }
  else
  {
    JoinState = PartyAtomic_GetJoinState(&g_partyJoinInfo);
    __asm { vmovups xmm0, xmmword ptr [rbp+from.type] }
    v17.addrHandleIndex = froma.addrHandleIndex;
    __asm { vmovups [rbp+var_50], xmm0 }
    v10 = NET_AdrToString(&v17);
    Com_PrintWarning(25, "HandleHostAccept - Received stray accept message from (%s), not in the PARTYJOIN_REQUESTED state (%i)\n", v10, (unsigned int)JoinState);
  }
}

/*
==============
PartyAtomicClient_HandlePartyStateMsg_FromAcceptedHost
==============
*/
void PartyAtomicClient_HandlePartyStateMsg_FromAcceptedHost(PartyData *party, const unsigned int localControllerIndex, netadr_t *from, msg_t *msg, PartyJoinInfo *partyJoinInfo, const PartyActiveClient *destClient)
{
  PartyType partyType; 
  int HaveAllPacketsForPartyState; 
  const char *v11; 
  int addrHandleIndex; 
  __int64 localClientNum; 
  const char *v15; 
  const char *v16; 
  __int64 v17; 
  netadr_t v18[2]; 

  _RSI = from;
  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 3831, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( !msg && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 3832, ASSERT_TYPE_ASSERT, "(msg)", (const char *)&queryFormat, "msg") )
    __debugbreak();
  if ( !partyJoinInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 3833, ASSERT_TYPE_ASSERT, "(partyJoinInfo)", (const char *)&queryFormat, "partyJoinInfo") )
    __debugbreak();
  partyType = partyJoinInfo->partyType;
  if ( partyType != ANY_PARTY_ID && partyType != party->partyId )
  {
    LODWORD(v17) = partyJoinInfo->partyType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 3838, ASSERT_TYPE_ASSERT, "( ( (partyJoinInfo->partyType == ANY_PARTY_ID) || (partyJoinInfo->partyType == party->partyId) ) )", "( partyJoinInfo->partyType ) = %i", v17) )
      __debugbreak();
  }
  Com_Printf(25, "PartyAtomic: Received party state bits from commited host.\n");
  if ( PartyAtomic_GetJoinState(partyJoinInfo) != PARTYJOIN_COMMIT && PartyAtomic_GetJoinState(partyJoinInfo) != PARTYJOIN_COMMITTING )
  {
    LODWORD(v17) = PartyAtomic_GetJoinState(partyJoinInfo);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 3841, ASSERT_TYPE_ASSERT, "( ( PartyAtomic_GetJoinState( partyJoinInfo ) == PARTYJOIN_COMMIT || PartyAtomic_GetJoinState( partyJoinInfo ) == PARTYJOIN_COMMITTING ) )", "( PartyAtomic_GetJoinState( partyJoinInfo ) ) = %i", v17) )
      __debugbreak();
  }
  PartyClient_PreParsePartyState(&partyJoinInfo->partyStateData, msg);
  HaveAllPacketsForPartyState = PartyClient_HaveAllPacketsForPartyState(&partyJoinInfo->partyStateData);
  v11 = "PartyAtomic: Got all party state packets from new/accepted host.\n";
  if ( !HaveAllPacketsForPartyState )
    v11 = "PartyAtomic: Waiting for all packets to be received from new/accepted host.\n";
  Com_Printf(25, v11);
  __asm { vmovups xmm0, xmmword ptr [rsi] }
  addrHandleIndex = _RSI->addrHandleIndex;
  __asm { vmovups [rsp+58h+var_28], xmm0 }
  localClientNum = destClient->localClientNum;
  v18[0].addrHandleIndex = addrHandleIndex;
  if ( partyJoinInfo->committingAccepted[localClientNum] )
  {
    v15 = NET_AdrToString(v18);
    Com_Printf(25, "HandleHostJoined - Received duplicate committing message from host (%s) for client %i\n", v15, (unsigned int)localClientNum);
  }
  else
  {
    v16 = NET_AdrToString(v18);
    Com_Printf(25, "HandleHostJoined - Received committing message from the host (%s), setting committingAccepted for client %i.\n", v16, (unsigned int)localClientNum);
    partyJoinInfo->committingAccepted[destClient->localClientNum] = 1;
  }
}

/*
==============
PartyClient_AccumulateMessageParts
==============
*/
void PartyClient_AccumulateMessageParts(PartyData *party, unsigned __int8 *buffer, msg_t *msg)
{
  int v6; 
  int *p_readcount; 
  __int64 v8; 
  __int64 v9; 

  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 3663, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( !buffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 3664, ASSERT_TYPE_ASSERT, "(buffer)", (const char *)&queryFormat, "buffer") )
    __debugbreak();
  if ( !msg && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 3665, ASSERT_TYPE_ASSERT, "(msg)", (const char *)&queryFormat, "msg") )
    __debugbreak();
  MSG_Init(msg, buffer, 148440);
  v6 = 0;
  if ( party->partyStateData.packetCount > 0 )
  {
    p_readcount = &party->partyStateData.partMsgs[0].readcount;
    do
    {
      if ( *(p_readcount - 2) <= *p_readcount )
      {
        LODWORD(v9) = *p_readcount;
        LODWORD(v8) = *(p_readcount - 2);
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 3673, ASSERT_TYPE_ASSERT, "( msgPart->cursize ) > ( msgPart->readcount )", "%s > %s\n\t%i, %i", "msgPart->cursize", "msgPart->readcount", v8, v9) )
          __debugbreak();
      }
      if ( *p_readcount != 22 )
      {
        LODWORD(v9) = 22;
        LODWORD(v8) = *p_readcount;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 3674, ASSERT_TYPE_ASSERT, "( msgPart->readcount ) == ( ( ( 18 ) + 4 ) )", "%s == %s\n\t%i, %i", "msgPart->readcount", "PARTYSTATE_OOB_READ_HEADER_SIZE", v8, v9) )
          __debugbreak();
      }
      MSG_WriteData(msg, (const void *)(*(_QWORD *)(p_readcount - 7) + *p_readcount), *(p_readcount - 2) - *p_readcount);
      if ( msg->overflowed )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 3680, ASSERT_TYPE_ASSERT, "(!msg->overflowed)", (const char *)&queryFormat, "!msg->overflowed") )
          __debugbreak();
      }
      ++v6;
      p_readcount += 14;
    }
    while ( v6 < party->partyStateData.packetCount );
  }
}

/*
==============
PartyClient_BecomePartyHost
==============
*/
__int64 PartyClient_BecomePartyHost(PartyData *party, const PartyActiveClient *mainActiveClient, const int newHost)
{
  __int64 v3; 
  unsigned int NumGameSlots; 
  char *gamertag; 
  unsigned int i; 
  const char *v9; 
  const char *v10; 
  int v11; 
  const dvar_t *v12; 
  unsigned int v13; 
  int gameStartTime; 
  int interEndTime; 
  int v16; 
  __int64 v17; 
  signed int v18; 
  unsigned __int16 *p_score; 
  unsigned int *v20; 
  PartyActiveClient *v21; 
  int PlaylistEntry; 
  unsigned int lobbyFlags; 
  const dvar_t *v24; 
  int v25; 
  int v26; 
  const dvar_t *v27; 
  const dvar_t *v28; 
  XNADDR *Address; 
  SessionData *session; 
  int ClientConnectivity; 
  const dvar_t *v32; 
  PartyType partyId; 
  const dvar_t *v34; 
  __int64 v36; 
  __int64 v37; 
  NetConnection *p_connection; 
  XUID playerXuid; 
  PartyActiveClient *mainActiveClienta; 
  int voteEndTime; 
  XUID result; 

  mainActiveClienta = (PartyActiveClient *)mainActiveClient;
  v3 = newHost;
  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 4439, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( !party->inParty && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 4440, ASSERT_TYPE_ASSERT, "(party->inParty)", (const char *)&queryFormat, "party->inParty") )
    __debugbreak();
  if ( party->areWeHost && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 4441, ASSERT_TYPE_ASSERT, "(!party->areWeHost)", (const char *)&queryFormat, "!party->areWeHost") )
    __debugbreak();
  if ( !mainActiveClient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 4442, ASSERT_TYPE_ASSERT, "(mainActiveClient)", (const char *)&queryFormat, "mainActiveClient") )
    __debugbreak();
  if ( !Party_IsControllerMainActiveClient(party, mainActiveClient->localControllerIndex) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 4443, ASSERT_TYPE_ASSERT, "(Party_IsControllerMainActiveClient( party, mainActiveClient->localControllerIndex ))", (const char *)&queryFormat, "Party_IsControllerMainActiveClient( party, mainActiveClient->localControllerIndex )") )
    __debugbreak();
  NumGameSlots = Party_GetNumGameSlots(party);
  Com_Printf(25, "[%s] Becoming host. %i slots\n", party->partyName, NumGameSlots);
  p_connection = &party->partyMembers[v3].connection;
  Party_MigrateHostConnections(party, p_connection);
  Party_MigrateClientConnections(party, NS_MAXCLIENTS);
  gamertag = party->partyMembers[0].info.gamertag;
  for ( i = 0; (int)i < 200; ++i )
  {
    if ( Party_IsMemberIndexDataAvailable(party, i) )
    {
      Party_GetXuid(&result, party, i);
      if ( !Party_IsActiveLocalPlayer(party, result) )
      {
        playerXuid.m_id = result.m_id;
        if ( i >= 0xC8 )
        {
          LODWORD(v37) = 200;
          LODWORD(v36) = i;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 4400, ASSERT_TYPE_ASSERT, "(unsigned)( memberIndex ) < (unsigned)( 200 )", "memberIndex doesn't index MAX_PARTY_MEMBERS\n\t%i not in [0, %i)", v36, v37) )
            __debugbreak();
        }
        if ( Party_IsActiveLocalPlayer(party, playerXuid) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 4401, ASSERT_TYPE_ASSERT, "(!Party_IsActiveLocalPlayer( party, playerXuid ))", (const char *)&queryFormat, "!Party_IsActiveLocalPlayer( party, playerXuid )") )
          __debugbreak();
        if ( Live_XUIDIsLocalPlayer(playerXuid) )
        {
          v9 = XUID::ToDevString(&playerXuid);
          Com_Printf(25, "[%s] Kicking party member %d (%s) because he was believed to be our local player, but he is not an active local client.\n", party->partyName, i, v9);
        }
        else if ( Party_IsMemberRegistered(party, i) && Party_MemberHasLoopbackAddr(party, i) )
        {
          v10 = XUID::ToDevString(&playerXuid);
          Com_Printf(25, "[%s] Kicking party member %d (%s) because he was registered with a local address, but he is not an active local client.\n", party->partyName, i, v10);
        }
        else
        {
          if ( Live_IsInSystemlinkLobby() || *gamertag )
            goto LABEL_36;
          Com_DPrintf(25, "[%s] Kicking party member %d because we are becoming host and don't know their gamertag yet\n", party->partyName, i);
        }
        if ( Party_IsGameLobby(party) )
          Party_LostPrivatePartyPlayer(mainActiveClient->localControllerIndex, result, 0, 1);
        PartyClient_RemovePartyMember(party, i);
      }
    }
LABEL_36:
    gamertag += 504;
  }
  v11 = 0;
  if ( Party_IsGameLobby(party) )
  {
    v12 = DVARBOOL_xblive_privatematch;
    if ( !DVARBOOL_xblive_privatematch && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xblive_privatematch") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v12);
    if ( !v12->current.enabled )
      Playlist_MigrateHost(party->lastEntries, 8);
  }
  v13 = party->lobbyFlags & 0x64;
  gameStartTime = party->gameStartTime;
  interEndTime = party->interEndTime;
  voteEndTime = party->voting.voteEndTime;
  PartyClient_ClearPartyGo(party);
  PartyHost_SetupParty(party, mainActiveClient->localControllerIndex);
  PartyHost_ResetClientTimeouts(party);
  if ( !party->areWeHost && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 4488, ASSERT_TYPE_ASSERT, "(party->areWeHost)", (const char *)&queryFormat, "party->areWeHost") )
    __debugbreak();
  v16 = Sys_Milliseconds();
  if ( v16 < 1 )
    v16 = 1;
  party->specificData.hostData.partyStateChangeTime = v16;
  party->specificData.hostData.partyStateLastSendTime = v16 - 1;
  party->specificData.hostData.partyCreationDoneTime = Sys_Milliseconds();
  RotatingClientNums::Reset(&party->specificData.hostData.m_partyStateClientNums);
  Com_Printf(25, "[%s] migration index bits going from %i", party->partyName, (unsigned int)party->migrateData.indexBits);
  v17 = (party->migrateData.indexBits + 1) & 0x80000003;
  if ( party->migrateData.indexBits + 1 < 0 )
    v17 = ((unsigned __int8)(((LOBYTE(party->migrateData.indexBits) + 1) & 3) - 1) | 0xFFFFFFFC) + 1;
  party->migrateData.indexBits = v17;
  Com_Printf(25, " to %i\n", v17);
  v18 = 0;
  p_score = &party->partyMembers[0].score;
  v20 = &party->partyMembers[0].ackedMembers.array[2];
  do
  {
    if ( Party_IsMemberIndexDataAvailable(party, v18) )
    {
      *((_DWORD *)p_score - 31) = 0;
      *((_QWORD *)v20 - 1) = 0i64;
      *(_QWORD *)v20 = 0i64;
      *((_QWORD *)v20 + 1) = 0i64;
      *((_QWORD *)v20 + 2) = 0i64;
      *((_QWORD *)v20 + 3) = 0i64;
      *((_QWORD *)v20 + 4) = 0i64;
      *((_QWORD *)v20 + 5) = 0i64;
      *((_QWORD *)v20 + 6) = 0i64;
      *((_QWORD *)v20 + 7) = 0i64;
      *((_QWORD *)v20 + 8) = 0i64;
      *((_QWORD *)v20 + 9) = 0i64;
      *((_QWORD *)v20 + 10) = 0i64;
      *p_score = 0;
    }
    ++v18;
    v20 += 126;
    p_score += 252;
  }
  while ( v18 < 200 );
  v21 = mainActiveClienta;
  PartyHost_ResetState(party, mainActiveClienta, 1);
  if ( Party_IsGameLobby(party) || Live_IsInSystemlinkLobby() )
  {
    Party_ResetTweakDvars();
    if ( Party_IsPrivateOrSystemlinkGame(party) )
    {
      if ( Party_PrivateDedicatedServerAllowed(party) )
      {
        v24 = DVARBOOL_xblive_privatematch;
        if ( !DVARBOOL_xblive_privatematch && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xblive_privatematch") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v24);
        if ( v24->current.enabled && Party_IsServerDedicated(party) )
          PartyHost_MatchRulesStateChanged(party);
      }
    }
    else
    {
      PlaylistEntry = Party_GetPlaylistEntry(party);
      Playlist_RunRules(v21->localControllerIndex, PlaylistEntry);
      OnlineMatchmakerOmniscient::PostMigrationBecomeHost(&OnlineMatchmakerOmniscient::ms_instance);
    }
    lobbyFlags = party->lobbyFlags;
    if ( v13 == 64 )
    {
      party->gameStartTime = 0;
      party->lobbyFlags = lobbyFlags & 0xFFFFFF9B | 0x40;
      v25 = Sys_Milliseconds();
      v26 = v25;
      if ( v25 <= gameStartTime || v25 <= interEndTime )
      {
        party->voting.voteEndTime = voteEndTime;
        party->interEndTime = interEndTime;
      }
      else
      {
        v27 = DVARINT_party_minLobbyTime;
        if ( !DVARINT_party_minLobbyTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "party_minLobbyTime") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v27);
        party->interEndTime = v26 + 1000 * v27->current.integer;
        v28 = DVARINT_party_minVoteTime;
        if ( !DVARINT_party_minVoteTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "party_minVoteTime") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v28);
        party->voting.voteEndTime = v26 + 1000 * v28->current.integer;
      }
    }
    else
    {
      party->lobbyFlags = lobbyFlags & 0xFFFFFF9B | 4;
      if ( v13 != 4 )
        gameStartTime = 0;
      party->gameStartTime = gameStartTime;
    }
  }
  Address = XSESSION_INFO::GetAddress(&party->session->dyn.sessionInfo);
  NetConnection::GetXnaddr(p_connection, Address);
  session = party->session;
  party->gameFlags |= 1u;
  if ( !Session_IsValid(session) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 4567, ASSERT_TYPE_ASSERT, "(Session_IsValid( party->session ))", (const char *)&queryFormat, "Session_IsValid( party->session )") )
    __debugbreak();
  if ( Live_IsInSystemlinkLobby() )
    Dvar_SetBool_Internal(DVARBOOL_systemlink_host, 1);
  if ( Party_IsPrivateParty(party) && Com_FrontEnd_IsInFrontEnd() )
  {
    Com_Printf(25, "[%s] PartyMigrate - BecomePartyHost - Opening youarehost menu.\n", party->partyName);
    LUI_OpenMenu(LOCAL_CLIENT_0, "youarehost", 1, 0, 0);
  }
  party->gameFlags |= 0x1000u;
  do
  {
    if ( Party_IsMemberRegistered(party, v11) )
    {
      ClientConnectivity = PeerMesh_GetClientConnectivity(party, v11);
      if ( PeerMesh_InitClientConnectivity(party, v11, ClientConnectivity) )
        PartyHost_MemberInfoChanged(party, v11, 1);
    }
    ++v11;
  }
  while ( v11 < 200 );
  PeerMesh_InitLocalConnectivity(party, 0);
  PartyHost_GamestateChanged(party);
  party->specificData.hostData.partyMigrationStateChangeTime = party->specificData.hostData.partyStateChangeTime;
  v32 = DVARBOOL_onlinegame;
  if ( !DVARBOOL_onlinegame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "onlinegame") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v32);
  if ( !v32->current.enabled )
    goto LABEL_103;
  partyId = party->partyId;
  if ( partyId == PRIVATE_PARTY_ID )
    goto LABEL_102;
  if ( partyId )
    goto LABEL_103;
  v34 = DVARBOOL_xblive_privatematch;
  if ( !DVARBOOL_xblive_privatematch && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xblive_privatematch") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v34);
  if ( v34->current.enabled )
LABEL_102:
    PartyHost_CopyPartyPrivacyFromPlayerDataToParty(party);
  else
LABEL_103:
    Party_SetPrivacySetting(party, PUBLIC);
  PartyHost_CopyCrossplaySettingsToParty(party);
  return 1i64;
}

/*
==============
PartyClient_ChangeMemberStatus
==============
*/
void PartyClient_ChangeMemberStatus(PartyData *party, const unsigned int clientNum, unsigned __int8 newStatus)
{
  __int64 v3; 
  unsigned __int8 *p_status; 
  const char *v7; 
  signed int MemberByXUID_AllowNotPresent; 
  __int64 v9; 
  __int64 v10; 
  const char *v11; 
  __int64 v12; 
  XUID result; 

  v3 = clientNum;
  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 755, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( (unsigned int)v3 >= 0xC8 )
  {
    LODWORD(v12) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 756, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( 200 )", "clientNum doesn't index MAX_PARTY_MEMBERS\n\t%i not in [0, %i)", v12, 200) )
      __debugbreak();
  }
  if ( (unsigned __int8)(newStatus - 4) > 1u )
  {
    LODWORD(v12) = newStatus;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 757, ASSERT_TYPE_ASSERT, "( ( (newStatus == PARTYSTATUS_PRESENT) || (newStatus == PARTYSTATUS_COMMITTED) ) )", "( newStatus ) = %i", v12) )
      __debugbreak();
  }
  if ( !Party_IsMemberIndexDataAvailable(party, v3) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 758, ASSERT_TYPE_ASSERT, "(Party_IsMemberIndexDataAvailable( party, clientNum ))", "%s\n\tShould not be setting member status directly when the member is not fully joined", "Party_IsMemberIndexDataAvailable( party, clientNum )") )
    __debugbreak();
  Party_GetXuid(&result, party, v3);
  p_status = &party->partyMembers[v3].status;
  if ( newStatus != *p_status )
  {
    v7 = XUID::ToDevString(&result);
    LODWORD(v12) = newStatus;
    Com_Printf(25, "[%s] PartyClient - MarkMemberStatus - Setting party member %i (%s) to status %i.\n", party->partyName, (unsigned int)v3, v7, v12);
  }
  *p_status = newStatus;
  if ( !Party_IsPrivateParty(party) && g_partyData.inParty )
  {
    if ( Live_XUIDIsLocalPlayer(result) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 772, ASSERT_TYPE_ASSERT, "(!Live_XUIDIsLocalPlayer( memberXuid ))", (const char *)&queryFormat, "!Live_XUIDIsLocalPlayer( memberXuid )") )
      __debugbreak();
    MemberByXUID_AllowNotPresent = Party_FindMemberByXUID_AllowNotPresent(&g_partyData, result);
    v9 = MemberByXUID_AllowNotPresent;
    if ( MemberByXUID_AllowNotPresent >= 0 )
    {
      if ( !Party_IsMemberIndexDataAvailable(&g_partyData, MemberByXUID_AllowNotPresent) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 777, ASSERT_TYPE_ASSERT, "(Party_IsMemberIndexDataAvailable( &g_partyData, memberPartyIndex ))", "%s\n\tShould not be setting member status directly when the member is not fully joined", "Party_IsMemberIndexDataAvailable( &g_partyData, memberPartyIndex )") )
        __debugbreak();
      v10 = v9;
      if ( !XUID::operator==(&g_partyData.partyMembers[v9].playerUID, &result) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 778, ASSERT_TYPE_ASSERT, "(g_partyData.partyMembers[memberPartyIndex].playerUID == memberXuid)", (const char *)&queryFormat, "g_partyData.partyMembers[memberPartyIndex].playerUID == memberXuid") )
        __debugbreak();
      if ( newStatus != g_partyData.partyMembers[v10].status )
      {
        v11 = XUID::ToDevString(&result);
        LODWORD(v12) = newStatus;
        Com_Printf(25, "[%s] PartClient - MarkMemberStatus - Also setting private party member %i (%s) to status %i.\n", party->partyName, (unsigned int)v9, v11, v12);
      }
      g_partyData.partyMembers[v10].status = newStatus;
    }
  }
}

/*
==============
PartyClient_CheckPreloadComplete
==============
*/
bool PartyClient_CheckPreloadComplete(PartyData *party, const char *mapname, const bool latchStreamingPreload)
{
  bool result; 

  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 4251, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  result = Com_FastFile_IsLevelPreloadComplete(mapname);
  if ( result )
  {
    if ( latchStreamingPreload )
    {
      if ( party->specificData.clientData.m_preloadStreamingChecked )
      {
        return 1;
      }
      else
      {
        result = PartyClient_IsStreamingPreloadComplete(party);
        party->specificData.clientData.m_preloadStreamingChecked = 1;
      }
    }
    else
    {
      return PartyClient_IsStreamingPreloadComplete(party);
    }
  }
  return result;
}

/*
==============
PartyClient_ClearPartyGo
==============
*/
void PartyClient_ClearPartyGo(PartyData *party)
{
  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 818, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( party->areWeHost && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 819, ASSERT_TYPE_ASSERT, "(!party->areWeHost)", (const char *)&queryFormat, "!party->areWeHost") )
    __debugbreak();
  LOWORD(party->specificData.hostData.partyStateChangeTime) = 0;
}

/*
==============
PartyClient_CommitPartyHostMigration
==============
*/
void PartyClient_CommitPartyHostMigration(PartyData *party, int newHost)
{
  int areWeHost; 
  int hostNum; 
  __int64 v5; 
  const char *MemberName; 
  XNADDR *Address; 
  int ConnectivityBitsForRemoteClients; 
  int GameFlags; 
  const char *HostName; 
  int ControllerFromClient; 
  const char *v12; 
  OnlineChatManager *Instance; 
  XUID *Xuid; 
  unsigned __int64 v15; 
  const char *v16; 
  OnlineChatManager *v17; 
  const char *v18; 
  int v19; 
  int v20; 
  int v21; 
  int v22; 
  XUID result; 

  areWeHost = party->areWeHost;
  hostNum = party->currentHost.hostNum;
  v5 = newHost;
  MemberName = Party_GetMemberName(party, newHost);
  v20 = areWeHost;
  v19 = hostNum;
  Com_Printf(25, "[%s] Migrating the party over so clientNum %i (%s) is the new host instead of client %i. AreWeHost is %i\n", party->partyName, (unsigned int)v5, MemberName, v19, v20);
  Party_MigrateHostConnections(party, &party->partyMembers[v5].connection);
  Party_MigrateClientConnections(party, NS_CLIENT1);
  Address = XSESSION_INFO::GetAddress(&party->session->dyn.sessionInfo);
  NetConnection::GetXnaddr(&party->partyMembers[v5].connection, Address);
  PartyMigrate_SwapHostAndClient(party, v5);
  if ( areWeHost )
  {
    if ( !party->areWeHost && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 4629, ASSERT_TYPE_ASSERT, "(party->areWeHost)", "%s\n\t[%s] Should not have changed state yet", "party->areWeHost", party->partyName) )
      __debugbreak();
    if ( (_DWORD)v5 != Party_HostNum(party) )
    {
      v22 = Party_HostNum(party);
      v21 = v5;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 4388, ASSERT_TYPE_ASSERT, "( newHost ) == ( static_cast<uint>(Party_HostNum( party )) )", "%s == %s\n\t%i, %i", "newHost", "static_cast<uint>(Party_HostNum( party ))", v21, v22) )
        __debugbreak();
    }
    ConnectivityBitsForRemoteClients = PeerMesh_GetConnectivityBitsForRemoteClients(party);
    PeerMesh_InitLocalConnectivity(party, ConnectivityBitsForRemoteClients);
    if ( Party_IsGameLobby(party) )
      OnlineMatchmakerOmniscient::PostMigrationNoLongerHost(&OnlineMatchmakerOmniscient::ms_instance);
  }
  PartyClient_ResetPartyState(party);
  PartyClient_MarkPacketReceived(party, &party->currentHost);
  GameFlags = Party_GetGameFlags(party);
  Party_SetGameFlags(party, GameFlags & 0xFFFFFFFE);
  HostName = Party_GetHostName(party);
  Dvar_SetString_Internal(DVARSTR_party_hostname, HostName);
  ControllerFromClient = CL_Mgr_GetControllerFromClient(LOCAL_CLIENT_0);
  if ( areWeHost )
  {
    v12 = SEH_LocalizeTextMessage("LUA_MENU/TEXTCHAT_NOW_LEADER", "ui string", LOCMSG_NOERR);
    if ( v12 )
    {
      Instance = OnlineChatManager::GetInstance();
      OnlineChatManager::SendSystemEvent(Instance, ControllerFromClient, v12);
    }
  }
  else
  {
    Xuid = Party_GetXuid(&result, party, v5);
    v15 = XUID::ToUint64(Xuid);
    v16 = SEH_LocalizeTextMessage("LUA_MENU/TEXTCHAT_NEW_LEADER", "ui string", LOCMSG_NOERR);
    if ( v16 )
    {
      v17 = OnlineChatManager::GetInstance();
      v18 = Party_GetMemberName(party, v5);
      OnlineChatManager::SendPlayerEvent(v17, ControllerFromClient, v16, v15, v18);
    }
  }
  PartyMigrate_StopMigration(party);
}

/*
==============
PartyClient_DemoteRemotePartyMembers
==============
*/
void PartyClient_DemoteRemotePartyMembers(PartyData *party)
{
  unsigned int v2; 
  unsigned __int8 *p_status; 

  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 792, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( !party->inParty && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 793, ASSERT_TYPE_ASSERT, "(party->inParty)", (const char *)&queryFormat, "party->inParty") )
    __debugbreak();
  if ( !Party_IsPrivateParty(party) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 794, ASSERT_TYPE_ASSERT, "(Party_IsPrivateParty( party ))", (const char *)&queryFormat, "Party_IsPrivateParty( party )") )
    __debugbreak();
  Com_Printf(25, "[%s] PartyClient - DemoteRemotePartyMembers\n", party->partyName);
  v2 = 0;
  p_status = &party->partyMembers[0].status;
  do
  {
    if ( Party_IsMemberPresent(party, v2) && *p_status != 6 && !Party_MemberHasLoopbackAddr(party, v2) )
      PartyClient_ChangeMemberStatus(party, v2, 4u);
    ++v2;
    p_status += 504;
  }
  while ( v2 < 0xC8 );
}

/*
==============
PartyClient_DevDisconnect
==============
*/
void PartyClient_DevDisconnect(PartyData *party, const int localControllerIndex)
{
  int v4; 
  PartyDisconnectReason disconnectReason; 
  PartyActiveClient mainActiveClient; 

  v4 = Cmd_ArgInt(1);
  LOBYTE(disconnectReason) = 36;
  mainActiveClient = Party_GetMainActiveClient(party, localControllerIndex);
  PartyClient_DisconnectFromHostInternal(party, &mainActiveClient, "@XBOXLIVE/LOBBYENDED", v4, 1, disconnectReason, JOINRESPONSE_NONE);
}

/*
==============
PartyClient_DevEndParty
==============
*/
void PartyClient_DevEndParty(PartyData *party, const int localControllerIndex)
{
  bool IsGameLobby; 
  const char *v5; 
  PartyDisconnectReason v6; 
  PartyActiveClient mainActiveClient; 

  Com_Printf(25, "[%s] Dev end party command\n", party->partyName);
  mainActiveClient = Party_GetMainActiveClient(party, localControllerIndex);
  if ( !Party_IsGameLobby(party) || !PartyClient_UpdatePrivatePartyOnLobbyEnding(party, &mainActiveClient, PARTY_END_STOPPED) )
  {
    IsGameLobby = Party_IsGameLobby(party);
    v5 = "@XBOXLIVE/PARTYENDED";
    LOBYTE(v6) = 5;
    if ( IsGameLobby )
      v5 = "@XBOXLIVE/LOBBYENDED";
    PartyClient_HandleHostLost(party, &mainActiveClient, v6, v5);
  }
}

/*
==============
PartyClient_DevMigrationFailure
==============
*/

void __fastcall PartyClient_DevMigrationFailure(PartyData *party, const int localControllerIndex)
{
  PartyMigrate_HandleMigrationFailure(party, localControllerIndex);
}

/*
==============
PartyClient_DevTimeoutFromHost
==============
*/
void PartyClient_DevTimeoutFromHost(PartyData *party, const int localControllerIndex)
{
  PartyDisconnectReason v3; 
  PartyActiveClient mainActiveClient; 

  mainActiveClient = Party_GetMainActiveClient(party, localControllerIndex);
  LOBYTE(v3) = 36;
  PartyClient_LostConnectionToHost(party, &mainActiveClient, v3, NULL);
}

/*
==============
PartyClient_DisconnectFromHost
==============
*/
void PartyClient_DisconnectFromHost(PartyData *party, const PartyActiveClient *mainActiveClient, const char *reason, int sendDisconnectMessage, const PartyDisconnectReason disconnectReason)
{
  PartyDisconnectReason v5; 

  LOBYTE(v5) = disconnectReason;
  PartyClient_DisconnectFromHostInternal(party, mainActiveClient, reason, sendDisconnectMessage, 1, v5, JOINRESPONSE_NONE);
}

/*
==============
PartyClient_DisconnectFromHostInternal
==============
*/
void PartyClient_DisconnectFromHostInternal(PartyData *party, const PartyActiveClient *mainActiveClient, const char *reason, int sendDisconnectMessage, int moveUIToPartyScreen, const PartyDisconnectReason disconnectReason, const PartyJoinResponse joinResponse)
{
  char ActiveGameMode; 
  PartyUIRoot v12; 
  bool Bool_Internal_DebugName; 
  PartyUIRoot v14; 
  bool v15; 
  PartyDisconnectReason fmt; 

  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 457, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( !party->inParty && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 458, ASSERT_TYPE_ASSERT, "(party->inParty)", (const char *)&queryFormat, "party->inParty") )
    __debugbreak();
  if ( party->areWeHost && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 459, ASSERT_TYPE_ASSERT, "(!party->areWeHost)", (const char *)&queryFormat, "!party->areWeHost") )
    __debugbreak();
  if ( !mainActiveClient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 460, ASSERT_TYPE_ASSERT, "(mainActiveClient)", (const char *)&queryFormat, "mainActiveClient") )
    __debugbreak();
  if ( !Party_IsControllerMainActiveClient(party, mainActiveClient->localControllerIndex) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 461, ASSERT_TYPE_ASSERT, "(Party_IsControllerMainActiveClient( party, mainActiveClient->localControllerIndex ))", (const char *)&queryFormat, "Party_IsControllerMainActiveClient( party, mainActiveClient->localControllerIndex )") )
    __debugbreak();
  LOBYTE(fmt) = disconnectReason;
  PartyClient_DisconnectFromHost_NoUI(party, mainActiveClient, reason, sendDisconnectMessage, fmt, joinResponse);
  if ( Com_FrontEnd_IsInFrontEnd() )
  {
    if ( CL_AllLocalClientsInactive() )
    {
      Com_Printf(14, "[%s] PartyClient - DisconnectFromHost - Since we're leaving game, and we're not fully in the front end. Reason: %s\n", party->partyName, reason);
    }
    else if ( !Party_IsPrivateParty(party) || Party_IsRunning(party) )
    {
      if ( Party_IsGameLobby(party) && Live_IsInGameBattlesGame() )
      {
        Com_Printf(14, "[%s] PartyClient - DisconnectFromHost - Since we're in a GameBattles lobby, we avoid moving to other party screens. Reason: %s\n", party->partyName, reason);
      }
      else
      {
        if ( moveUIToPartyScreen )
        {
          if ( Live_IsInSystemlinkLobby() )
          {
            LUI_CoD_CloseAll(LOCAL_CLIENT_0);
            ActiveGameMode = Com_GameMode_GetActiveGameMode();
            v12 = 8;
            if ( ActiveGameMode == 3 )
              v12 = 28;
            PartyUI_OpenMenu(LOCAL_CLIENT_0, v12, 0);
          }
          else
          {
            Bool_Internal_DebugName = Dvar_GetBool_Internal_DebugName(DVARBOOL_xblive_privatematch, "xblive_privatematch");
            Dvar_SetBool_Internal(DVARBOOL_xblive_privatematch, 0);
            LUI_CoD_CloseAll(LOCAL_CLIENT_0);
            if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() )
            {
              if ( (unsigned __int8)Com_GameMode_GetActiveGameMode() == LONG )
              {
                v14 = 25;
              }
              else if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_ui_is_magma_gamemode, "ui_is_magma_gamemode") )
              {
                v14 = AERIAL|FREE|0x10;
              }
              else if ( Bool_Internal_DebugName )
              {
                v14 = 5;
              }
              else
              {
                v15 = OnlineTournament_IsInTournament();
                v14 = 5;
                if ( v15 )
                  v14 = 16;
              }
            }
            else
            {
              v14 = AERIAL;
            }
            PartyUI_OpenMenu(LOCAL_CLIENT_0, v14, 0);
            Dvar_SetBool_Internal(DVARBOOL_xblive_privatematch, Bool_Internal_DebugName);
          }
        }
        LUI_CloseMenu(LOCAL_CLIENT_0, "leavelobbyblockedplayerwarning", 1);
        if ( g_partyData.party_systemActive && (Party_IsGameLobby(party) || Live_IsInSystemlinkLobby()) || GameBattles_IsGameBattleActive() )
        {
          if ( reason )
          {
            if ( *reason )
              Com_SetErrorMessage(reason);
          }
          Dvar_SetBool_Internal(DVARBOOL_xblive_privatematch, 0);
        }
      }
    }
    else
    {
      Com_Printf(14, "[%s] PartyClient - DisconnectFromHost - Since the inactive private party got disconnected, we won't re-create or mess with the UI just yet. Reason: %s\n", party->partyName, reason);
    }
  }
  else
  {
    Com_Printf(14, "[%s] PartyClient - DisconnectFromHost - Since we're in-game, we won't re-create or awaken parties yet. Reason: %s\n", party->partyName, reason);
  }
}

/*
==============
PartyClient_DisconnectFromHostNoUIScreenChange
==============
*/
void PartyClient_DisconnectFromHostNoUIScreenChange(PartyData *party, const PartyActiveClient *mainActiveClient, const char *reason, int sendDisconnectMessage, const PartyDisconnectReason disconnectReason)
{
  PartyDisconnectReason v5; 

  LOBYTE(v5) = disconnectReason;
  PartyClient_DisconnectFromHostInternal(party, mainActiveClient, reason, sendDisconnectMessage, 0, v5, JOINRESPONSE_NONE);
}

/*
==============
PartyClient_DisconnectFromHost_NoUI
==============
*/
void PartyClient_DisconnectFromHost_NoUI(PartyData *party, const PartyActiveClient *mainActiveClient, const char *message, int sendDisconnectMessage, const PartyDisconnectReason reason, const PartyJoinResponse joinResponse)
{
  NetConnection *HostConnection; 
  int v11; 
  const char *String; 
  unsigned __int8 v13; 
  PartyJoinResponse v14; 
  __int64 v15; 
  PartyActiveClient outPartyActiveClient; 

  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 387, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( !mainActiveClient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 388, ASSERT_TYPE_ASSERT, "(mainActiveClient)", (const char *)&queryFormat, "mainActiveClient") )
    __debugbreak();
  HostConnection = Party_GetHostConnection(party, mainActiveClient->localClientNum);
  v11 = Sys_Milliseconds();
  String = NetConnection::GetString(HostConnection);
  v13 = reason;
  v14 = joinResponse;
  LODWORD(v15) = v11;
  Com_Printf(25, "[%s] PartyClient - DisconnectFromHost_NoUI - Disconnecting from %s (%s) at time %i with disconnect reason %i and joinResponse %i\n", party->partyName, String, message, v15, (unsigned __int8)reason, joinResponse);
  Party_DlogDisconnect(party, (const LocalClientNum_t)mainActiveClient->localClientNum, message, (const PartyDisconnectReason)v13, v14);
  PartyAtomic_AbortJoinAttemptForParty(&g_partyJoinInfo, party, (const PartyDisconnectReason)v13, message);
  if ( sendDisconnectMessage )
  {
    PartyClient_SendDisconnectMessage(party->partyId, HostConnection, (const PartyDisconnectReason)v13, v14);
    if ( Party_GetSecondaryActiveClient(party, &outPartyActiveClient) )
      PartyClient_SendDisconnectMessage(party->partyId, &party->currentHost.connections[outPartyActiveClient.localClientNum], (const PartyDisconnectReason)v13, v14);
  }
  if ( !OnlineTournament_IsInTournament() && Party_IsGameLobby(party) )
    OnlineMatchmakerOmniscient::Shutdown(&OnlineMatchmakerOmniscient::ms_instance);
  PartyMigrate_StopMigration(party);
  if ( Session_IsValid(party->session) )
    Session_DeleteSession(party->session);
  Party_ClearMembers(party);
  if ( party->areWeHost && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 438, ASSERT_TYPE_ASSERT, "(!party->areWeHost)", (const char *)&queryFormat, "!party->areWeHost") )
    __debugbreak();
  party->inParty = 0;
  party->lobbyFlags = 0;
  party->backingOut = 0;
  party->m_lobbyId = 0i64;
  PartyProfile_Reset(&party->profileState);
}

/*
==============
PartyClient_DoneParsingPartyState
==============
*/
void PartyClient_DoneParsingPartyState(PartyData *party, const PartyActiveClient *mainActiveClient, const bitarray<256> *ackedMembers)
{
  int v6; 
  const char *HostName; 
  int *p_subpartyIndex; 
  __int64 v9; 
  unsigned int subpartyCount; 
  __int64 v11; 
  char *v12; 
  __int64 v13; 
  __int64 v14; 
  PartyActiveClient outPartyActiveClient; 

  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 1954, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( !party->inParty && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 1955, ASSERT_TYPE_ASSERT, "(party->inParty)", (const char *)&queryFormat, "party->inParty") )
    __debugbreak();
  if ( party->areWeHost && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 1956, ASSERT_TYPE_ASSERT, "(!party->areWeHost)", (const char *)&queryFormat, "!party->areWeHost") )
    __debugbreak();
  v6 = 0;
  party->lastPartyStateTime = party->partyStateData.unfinishedPartServerTimes[0];
  *(_QWORD *)party->partyStateData.unfinishedPartServerTimes = 0i64;
  *(_QWORD *)&party->partyStateData.unfinishedPartServerTimes[2] = 0i64;
  *(_QWORD *)&party->partyStateData.unfinishedPartServerTimes[4] = 0i64;
  *(_QWORD *)&party->partyStateData.unfinishedPartServerTimes[6] = 0i64;
  *(_QWORD *)&party->partyStateData.unfinishedPartServerTimes[8] = 0i64;
  *(_QWORD *)&party->partyStateData.unfinishedPartServerTimes[10] = 0i64;
  *(_QWORD *)&party->partyStateData.unfinishedPartServerTimes[12] = 0i64;
  *(_QWORD *)&party->partyStateData.unfinishedPartServerTimes[14] = 0i64;
  *(_QWORD *)&party->partyStateData.unfinishedPartServerTimes[16] = 0i64;
  *(_QWORD *)&party->partyStateData.unfinishedPartServerTimes[18] = 0i64;
  *(_QWORD *)&party->partyStateData.unfinishedPartServerTimes[20] = 0i64;
  *(_QWORD *)&party->partyStateData.unfinishedPartServerTimes[22] = 0i64;
  *(_QWORD *)&party->partyStateData.unfinishedPartServerTimes[24] = 0i64;
  *(_QWORD *)&party->partyStateData.unfinishedPartServerTimes[26] = 0i64;
  *(_QWORD *)&party->partyStateData.unfinishedPartServerTimes[28] = 0i64;
  party->partyStateData.unfinishedPartServerTimes[30] = 0;
  HostName = Party_GetHostName(party);
  Dvar_SetString_Internal(DVARSTR_party_hostname, HostName);
  Party_SetUIPlayerCount(party);
  PartyClient_SendPartyStateAck(party, mainActiveClient, ackedMembers);
  if ( Party_GetSecondaryActiveClient(party, &outPartyActiveClient) )
    PartyClient_SendPartyStateAck(party, &outPartyActiveClient, ackedMembers);
  party->subpartyCount = 0;
  memset_0(party->subparties, 0, sizeof(party->subparties));
  p_subpartyIndex = &party->partyMembers[0].subpartyIndex;
  do
  {
    if ( Party_IsMemberPresent(party, v6) )
    {
      if ( (unsigned int)*p_subpartyIndex >= 0xC8 )
      {
        LODWORD(v14) = 200;
        LODWORD(v13) = *p_subpartyIndex;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 1985, ASSERT_TYPE_ASSERT, "(unsigned)( party->partyMembers[ memberIdx ].subpartyIndex ) < (unsigned)( 200 )", "party->partyMembers[ memberIdx ].subpartyIndex doesn't index MAX_PARTY_MEMBERS\n\t%i not in [0, %i)", v13, v14) )
          __debugbreak();
      }
      v9 = *p_subpartyIndex;
      subpartyCount = v9 + 1;
      if ( (signed int)party->subpartyCount > (int)v9 + 1 )
        subpartyCount = party->subpartyCount;
      party->subpartyCount = subpartyCount;
      v11 = 254 * v9;
      v12 = (char *)party + 1016 * v9;
      party->subparties[0].members[(int)(*((_DWORD *)v12 + 27994))++ + v11] = v6;
      *((_DWORD *)v12 + 27996) = p_subpartyIndex[1];
    }
    ++v6;
    p_subpartyIndex += 126;
  }
  while ( v6 < 200 );
  if ( party->subpartyCount > 0xC8 )
  {
    LODWORD(v13) = party->subpartyCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 1991, ASSERT_TYPE_SANITY, "( ( party->subpartyCount <= 200 ) )", "( party->subpartyCount ) = %i", v13) )
      __debugbreak();
  }
}

/*
==============
PartyClient_EndParty_Internal
==============
*/
void PartyClient_EndParty_Internal(PartyData *party, const PartyActiveClient *mainActiveClient, PartyEndType endType)
{
  PartyDisconnectReason v6; 
  const char *v7; 
  const dvar_t *v8; 
  __int64 disconnectReason; 

  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 3289, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( !mainActiveClient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 3290, ASSERT_TYPE_ASSERT, "(mainActiveClient)", (const char *)&queryFormat, "mainActiveClient") )
    __debugbreak();
  if ( !Party_IsGameLobby(party) || !PartyClient_UpdatePrivatePartyOnLobbyEnding(party, mainActiveClient, endType) )
  {
    v7 = "@XBOXLIVE/PARTYENDED";
    if ( Party_IsGameLobby(party) )
      v7 = "@XBOXLIVE/LOBBYENDED";
    switch ( endType )
    {
      case PARTY_END_STOPPED:
        goto LABEL_24;
      case PARTY_END_REMOVED:
        LOBYTE(disconnectReason) = 4;
        PartyClient_DisconnectFromHostInternal(party, mainActiveClient, v7, 0, 1, (const PartyDisconnectReason)disconnectReason, JOINRESPONSE_NONE);
        return;
      case PARTY_END_BACKOUT:
LABEL_24:
        if ( endType )
          LOBYTE(v6) = 6;
        else
          LOBYTE(v6) = 5;
        PartyClient_HandleHostLost(party, mainActiveClient, v6, v7);
        break;
      case PARTY_END_ROLLOVER:
        LOBYTE(disconnectReason) = 43;
        PartyClient_DisconnectFromHostInternal(party, mainActiveClient, v7, 0, 0, (const PartyDisconnectReason)disconnectReason, JOINRESPONSE_NONE);
        v8 = DVARBOOL_online_tournament_ignore_rollover;
        if ( !DVARBOOL_online_tournament_ignore_rollover && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "online_tournament_ignore_rollover") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v8);
        if ( !v8->current.enabled || !OnlineTournament_IsInTournament() )
          Cbuf_ExecuteBufferInternal((const LocalClientNum_t)mainActiveClient->localClientNum, mainActiveClient->localControllerIndex, "xstartlobby", 0, 0);
        break;
      default:
        LODWORD(disconnectReason) = endType;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 3328, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "unexpected end type %d", disconnectReason) )
          __debugbreak();
        break;
    }
  }
}

/*
==============
PartyClient_Frame
==============
*/
void PartyClient_Frame(PartyData *party, const PartyActiveClient *mainActiveClient)
{
  int v4; 
  int v5; 
  PartyDisconnectReason disconnectReason; 
  PartyActiveClient outPartyActiveClient; 

  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 5285, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( !party->inParty && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 5286, ASSERT_TYPE_ASSERT, "(party->inParty)", (const char *)&queryFormat, "party->inParty") )
    __debugbreak();
  if ( party->areWeHost && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 5287, ASSERT_TYPE_ASSERT, "(!party->areWeHost)", (const char *)&queryFormat, "!party->areWeHost") )
    __debugbreak();
  v4 = Sys_Milliseconds();
  if ( !PartyClient_ProcessGoRequest(party, mainActiveClient, v4) )
  {
    if ( !party->inParty && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 5201, ASSERT_TYPE_ASSERT, "(party->inParty)", (const char *)&queryFormat, "party->inParty") )
      __debugbreak();
    if ( party->areWeHost && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 5202, ASSERT_TYPE_ASSERT, "(!party->areWeHost)", (const char *)&queryFormat, "!party->areWeHost") )
      __debugbreak();
    if ( v4 - party->lastMemberInfoTime < 400 )
      goto LABEL_27;
    v5 = PartyClient_SendOurMemberInfo(party, mainActiveClient);
    if ( !v5 )
      goto LABEL_22;
    if ( Party_GetSecondaryActiveClient(party, &outPartyActiveClient) )
      v5 = PartyClient_SendOurMemberInfo(party, &outPartyActiveClient);
    if ( v5 )
    {
LABEL_27:
      if ( PartyClient_UpdateMatchmakingInfo(party, mainActiveClient, v4) )
      {
        PartyClient_UpdateTeamsVisible(party, mainActiveClient, v4);
        PartyClient_TimeOutHost(party, mainActiveClient, v4);
      }
    }
    else
    {
LABEL_22:
      OnlineErrorManager::SetLastRecordedErrorCode(&g_onlineMgr.m_errorManager, (Online_Error_CAT_PARTY_t)0x1000000, NULL);
      LOBYTE(disconnectReason) = 38;
      PartyClient_DisconnectFromHostInternal(party, mainActiveClient, "@EXE/TRANSMITERROR", 0, 1, disconnectReason, JOINRESPONSE_NONE);
    }
  }
}

/*
==============
PartyClient_GetAvailablePartyMemberList
==============
*/
__int64 PartyClient_GetAvailablePartyMemberList(const PartyData *party, XUID *playerList, unsigned int playerListSize)
{
  int v6; 
  unsigned int v7; 
  unsigned int v8; 
  const XUID *Xuid; 
  XUID result; 

  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 3547, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( !playerList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 3548, ASSERT_TYPE_ASSERT, "(playerList)", (const char *)&queryFormat, "playerList") )
    __debugbreak();
  if ( !playerListSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 3549, ASSERT_TYPE_ASSERT, "(playerListSize > 0)", (const char *)&queryFormat, "playerListSize > 0") )
    __debugbreak();
  v6 = 0;
  v7 = 0;
  v8 = 0;
  if ( playerListSize )
  {
    do
    {
      if ( Party_IsMemberIndexDataAvailable(party, v8) )
      {
        Xuid = Party_GetXuid(&result, party, v8);
        XUID::operator=(&playerList[v7], Xuid);
        if ( !XUID::IsValid(&playerList[v7]) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 3561, ASSERT_TYPE_SANITY, "( playerList[memberCount].IsValid() )", (const char *)&queryFormat, "playerList[memberCount].IsValid()") )
          __debugbreak();
        if ( Live_XUIDIsLocalPlayer(playerList[v7]) )
          v6 = 1;
        ++v7;
      }
      ++v8;
    }
    while ( v8 < playerListSize );
    if ( !v6 && v7 )
      Com_PrintWarning(25, "PartyClient - GetAvailablePartyMemerList - No local players in our own member list! %i members.\n", v7);
    if ( v7 > playerListSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 3577, ASSERT_TYPE_ASSERT, "( memberCount ) <= ( playerListSize )", "%s <= %s\n\t%i, %i", "memberCount", "playerListSize", v7, playerListSize) )
      __debugbreak();
  }
  return v7;
}

/*
==============
PartyClient_HandleHostLost
==============
*/
void PartyClient_HandleHostLost(PartyData *party, const PartyActiveClient *mainActiveClient, const PartyDisconnectReason reason, const char *message)
{
  unsigned __int8 v5; 
  bool v8; 
  const dvar_t *v9; 
  const char *v10; 
  bdSecurityID *SecurityId; 
  unsigned __int64 v12; 
  unsigned int v13; 
  unsigned int v14; 
  bool IsGameLobby; 
  PartyDisconnectReason disconnectReason; 

  v5 = reason;
  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 605, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( !party->inParty && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 606, ASSERT_TYPE_ASSERT, "(party->inParty)", (const char *)&queryFormat, "party->inParty") )
    __debugbreak();
  if ( party->areWeHost && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 607, ASSERT_TYPE_ASSERT, "(!party->areWeHost)", (const char *)&queryFormat, "!party->areWeHost") )
    __debugbreak();
  if ( !mainActiveClient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 608, ASSERT_TYPE_ASSERT, "(mainActiveClient)", (const char *)&queryFormat, "mainActiveClient") )
    __debugbreak();
  if ( !Party_IsPrivateParty(party) && Com_IsGameLocalServerRunningOrLoading() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 609, ASSERT_TYPE_ASSERT, "(Party_IsPrivateParty( party ) || !Com_IsGameLocalServerRunningOrLoading())", (const char *)&queryFormat, "Party_IsPrivateParty( party ) || !Com_IsGameLocalServerRunningOrLoading()") )
    __debugbreak();
  PartyAtomic_AbortJoinAttemptForParty(&g_partyJoinInfo, party, (const PartyDisconnectReason)v5, message);
  v8 = !Party_IsRunning(party) && Party_PrivateDedicatedServerAllowed(party) && Party_IsServerDedicated(party);
  if ( Party_IsGameLobby(party) && Live_IsInGameBattlesGame() )
  {
    Cbuf_ExecuteBufferInternal((const LocalClientNum_t)mainActiveClient->localClientNum, mainActiveClient->localControllerIndex, "xstopparty", 0, 0);
    return;
  }
  if ( Party_IsGameLobby(party) )
  {
    v9 = DVARBOOL_xblive_privatematch;
    if ( !DVARBOOL_xblive_privatematch && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "xblive_privatematch") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v9);
    if ( v9->current.enabled && !v8 )
    {
      v10 = "@XBOXLIVE/LOBBYENDED";
LABEL_47:
      LOBYTE(disconnectReason) = v5;
      PartyClient_DisconnectFromHostInternal(party, mainActiveClient, v10, 0, 1, disconnectReason, JOINRESPONSE_NONE);
      return;
    }
  }
  if ( Live_GetOurClientNum(mainActiveClient->localControllerIndex, party) < 0 )
  {
    Com_PrintError(25, "[%s] Party - HandleHostLost - We don't know our own clientNum so we can't migrate hosts\n", party->partyName);
    Party_StopParty(party);
    return;
  }
  if ( party->migrateData.migrateActive )
  {
    if ( !Party_IsHostRegistered(party) )
    {
      if ( Sys_Milliseconds() - party->migrateData.startTime <= 4000 )
        return;
      goto LABEL_45;
    }
    Com_Printf(25, "[%s] Party - HandleHostLost - Apparently the host actually left and as usual we're the last to find out\n", party->partyName);
    if ( !Party_IsHostDedicated(party) )
    {
      v14 = Party_HostNum(party);
      PartyClient_RemoveAllPartyMembersAtSlotAddress(party, v14);
    }
  }
  else
  {
    Com_Printf(25, "[%s] Party - HandleHostLost - The host has timed out and we're not currently migrating\n", party->partyName);
    if ( PartyMigrate_HostMigrationEnabled(party) )
    {
      SecurityId = XSESSION_INFO::GetSecurityId(&party->session->dyn.sessionInfo);
      v12 = (unsigned __int64)*SecurityId;
      Com_Printf(25, "[%s] setting lost host migration id to %zu\n", party->partyName, *SecurityId);
      PartyMigrate_SetMigrationCause(MIGRATION_CAUSE_HOST_LOST);
      PartyMigrate_SetMigrationID(v12);
      if ( !Party_IsHostDedicated(party) )
      {
        v13 = Party_HostNum(party);
        PartyClient_RemoveAllPartyMembersAtSlotAddress(party, v13);
      }
      PartyMigrate_StartTimeout(party);
      PartyMigrate_StartNegotiation(party, mainActiveClient);
      party->currentHost.lastPacketTime = Sys_Milliseconds();
    }
    if ( !PartyMigrate_MigrateActive(party) )
    {
LABEL_45:
      IsGameLobby = Party_IsGameLobby(party);
      v10 = "@XBOXLIVE/PARTYENDED";
      if ( IsGameLobby )
        v10 = "@XBOXLIVE/LOBBYENDED";
      goto LABEL_47;
    }
  }
}

/*
==============
PartyClient_HandlePacket
==============
*/
__int64 PartyClient_HandlePacket(PartyData *party, const char *c, const PartyActiveClient *destClient, netadr_t *from, msg_t *msg)
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
  __int64 v19; 
  int v20; 
  const dvar_t *v21; 
  __int128 v25; 
  int addrHandleIndex; 
  PartyProfile_Event outEventInfo; 

  string = messageHandlers_4[0].string;
  v6 = 0;
  _R15 = from;
  if ( *messageHandlers_4[0].string )
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
          v19 = v6;
          PartyProfile_StartEvent((const PartyProfile_EventType)messageHandlers_4[v19].profileEventType, &outEventInfo);
          PartyProfile_AddBandwidthData(msg->cursize, &outEventInfo);
          v20 = Sys_Milliseconds();
          PartyProfile_RecordIncomingEvent(&outEventInfo, v20, &party->profileState);
          v21 = DVARBOOL_party_debug;
          if ( !DVARBOOL_party_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "party_debug") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(v21);
          if ( v21->current.enabled )
            Com_Printf(25, "oob: %s\n", c);
          if ( !messageHandlers_4[v19].func && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 4741, ASSERT_TYPE_ASSERT, "(messageHandlers[handler].func)", (const char *)&queryFormat, "messageHandlers[handler].func") )
            __debugbreak();
          __asm { vmovups xmm0, xmmword ptr [r15] }
          addrHandleIndex = _R15->addrHandleIndex;
          __asm { vmovups [rsp+0D8h+var_88], xmm0 }
          ((void (__fastcall *)(PartyData *, const PartyActiveClient *, __int128 *, msg_t *))messageHandlers_4[v19].func)(party, destClient, &v25, msg);
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
      string = messageHandlers_4[v10].string;
      if ( *string )
        continue;
      break;
    }
  }
  return 0i64;
}

/*
==============
PartyClient_HaveAllPacketsForPartyState
==============
*/
__int64 PartyClient_HaveAllPacketsForPartyState(PartyStateData *partyState)
{
  __int64 packetCount; 
  int *v3; 
  __int64 v4; 
  __int64 v6; 

  if ( !partyState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 3522, ASSERT_TYPE_ASSERT, "(partyState)", (const char *)&queryFormat, "partyState") )
    __debugbreak();
  if ( partyState->packetCount )
  {
    if ( partyState->packetCount > 0x1Fu )
    {
      LODWORD(v6) = partyState->packetCount;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 3527, ASSERT_TYPE_ASSERT, "( 0 ) <= ( partyState->packetCount ) && ( partyState->packetCount ) <= ( ( 31 ) )", "partyState->packetCount not in [0, MAX_PARTYSTATE_PACKETS]\n\t%i not in [%i, %i]", v6, 0i64, 31) )
        __debugbreak();
    }
    packetCount = partyState->packetCount;
    if ( (int)packetCount <= 1 )
      return 1i64;
    v3 = &partyState->unfinishedPartServerTimes[1];
    v4 = 1i64;
    while ( *v3 == partyState->unfinishedPartServerTimes[0] )
    {
      ++v4;
      ++v3;
      if ( v4 >= packetCount )
        return 1i64;
    }
  }
  return 0i64;
}

/*
==============
PartyClient_IsHostAway
==============
*/
bool PartyClient_IsHostAway(const PartyData *party)
{
  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 4764, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  return Party_IsHostPresent(party) == 0;
}

/*
==============
PartyClient_IsHostTimingOut
==============
*/
bool PartyClient_IsHostTimingOut(PartyData *party)
{
  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 4755, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  return Sys_Milliseconds() - party->currentHost.lastPacketTime > 1000;
}

/*
==============
PartyClient_IsStreamingPreloadComplete
==============
*/
char PartyClient_IsStreamingPreloadComplete(const PartyData *party)
{
  unsigned int v2; 
  XUID *i; 
  XUID v4; 
  int bodyModelIndex; 
  int headModelIndex; 
  bool selectedOperatorIndex; 
  CustomizationModels customizationEast; 
  CustomizationModels customizationWest; 
  ClientCustomizationInfo outCustomizationInfo; 
  ClStreamingRequest outRequest; 

  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 4196, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( party->areWeHost && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 4197, ASSERT_TYPE_ASSERT, "(!party->areWeHost)", (const char *)&queryFormat, "!party->areWeHost") )
    __debugbreak();
  if ( !Com_GameMode_SupportsFeature(WEAPON_DROPPING_LADDER_SLIDE) )
    return 1;
  v2 = 0;
  for ( i = &party->partyMembers[0].playerUID; ; i += 63 )
  {
    if ( Party_IsMemberIndexDataAvailable(party, v2) )
    {
      v4.m_id = i->m_id;
      *(_QWORD *)&customizationWest.headModelIndex = 0i64;
      customizationWest.executionId = 0;
      *(_QWORD *)&customizationEast.headModelIndex = 0i64;
      customizationEast.executionId = 0;
      PlayercardCache_GetMPActiveCustomizationData(v4, (const char *)&i[-46].m_id + 4, &selectedOperatorIndex, &customizationWest, &customizationEast);
      if ( LODWORD(i[-2].m_id) == 1 )
      {
        bodyModelIndex = customizationEast.bodyModelIndex;
        headModelIndex = customizationEast.headModelIndex;
      }
      else
      {
        bodyModelIndex = customizationWest.bodyModelIndex;
        headModelIndex = customizationWest.headModelIndex;
      }
      BG_Customization_BuildClientCustomization(&outCustomizationInfo, headModelIndex, 0, bodyModelIndex, (const PartyMember *const)&i[-52]);
      CL_Streaming_GetCustomizationRequest(CUSTOMIZATION_TYPE_BODY, outCustomizationInfo.modelIndex[1], ASSET_STREAMING_ZERO_PRIORITY, &outRequest);
      if ( !CL_Streaming_IsWorldRequestLoaded(&outRequest, STREAM_SYNC_WORLD_TYPE_BODY) )
        break;
      DebugWipe(&outRequest, 0x3Cui64);
      CL_Streaming_GetCustomizationRequest(CUSTOMIZATION_TYPE_HEAD, outCustomizationInfo.modelIndex[0], ASSET_STREAMING_ZERO_PRIORITY, &outRequest);
      if ( !CL_Streaming_IsWorldRequestLoaded(&outRequest, STREAM_SYNC_WORLD_TYPE_HEAD) )
        break;
    }
    if ( ++v2 >= 0xC8 )
      return 1;
  }
  return 0;
}

/*
==============
PartyClient_JoinPartyHostLobby
==============
*/
void PartyClient_JoinPartyHostLobby(const PartyActiveClient *mainActiveClient, const XSESSION_INFO *newSessionInfo, const bool isPrivateMatch)
{
  PartyData *v6; 
  PartyDisconnectReason v7; 
  PartyData *PartyData; 
  const PartySplitscreenData *SplitscreenData; 
  const dvar_t *v10; 
  PartyDisconnectReason fmt; 

  if ( !newSessionInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 2196, ASSERT_TYPE_ASSERT, "(newSessionInfo)", (const char *)&queryFormat, "newSessionInfo") )
    __debugbreak();
  if ( !mainActiveClient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 2197, ASSERT_TYPE_ASSERT, "(mainActiveClient)", (const char *)&queryFormat, "mainActiveClient") )
    __debugbreak();
  if ( !g_partyData.inParty && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 2198, ASSERT_TYPE_ASSERT, "(g_partyData.inParty)", (const char *)&queryFormat, "g_partyData.inParty") )
    __debugbreak();
  if ( g_partyData.areWeHost && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 2199, ASSERT_TYPE_ASSERT, "(!g_partyData.areWeHost)", (const char *)&queryFormat, "!g_partyData.areWeHost") )
    __debugbreak();
  if ( g_partyData.backingOut && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 2200, ASSERT_TYPE_ASSERT, "(!g_partyData.backingOut)", "%s\n\thostBackout was not cleaned up properly in between requests", "!g_partyData.backingOut") )
    __debugbreak();
  if ( PartyAtomic_IsJoiningActiveForSpecificSession(&g_partyJoinInfo, newSessionInfo) )
  {
    Com_PrintWarning(25, "PartyClient - JoinPartyHostLobby - Not joining host's lobby, already joining\n");
  }
  else if ( Lobby_IsInLobby() && (v6 = Lobby_GetPartyData(), XSESSION_INFO::operator==((XSESSION_INFO *)newSessionInfo, &v6->session->dyn.sessionInfo)) )
  {
    Com_PrintWarning(25, "PartyClient - JoinPartyHostLobby - Not joining host's lobby, already in that lobby\n");
  }
  else if ( XSESSION_INFO::operator==((XSESSION_INFO *)newSessionInfo, &g_partyData.session->dyn.sessionInfo) )
  {
    Com_PrintWarning(25, "PartyClient - JoinPartyHostLobby - Not joining host's lobby, he sent us our party address.\n");
  }
  else
  {
    PartyMigrate_StopMigration(&g_partyData);
    LOBYTE(v7) = 9;
    PartyAtomic_AbortJoinAttempt(&g_partyJoinInfo, v7);
    if ( Com_FrontEnd_IsInFrontEnd() || Com_GameStart_IsRestarting() )
    {
      if ( Lobby_IsInLobby() && !Lobby_GetPartyData()->areWeHost )
      {
        PartyData = Lobby_GetPartyData();
        LOBYTE(fmt) = 9;
        PartyClient_DisconnectFromHost_NoUI(PartyData, mainActiveClient, "hostPresence", 1, fmt, JOINRESPONSE_NONE);
      }
      SplitscreenData = Party_GetSplitscreenData(&g_partyData);
      if ( !PartyAtomic_SetupPotentialHostForJoining(mainActiveClient->localControllerIndex, newSessionInfo, GAME_LOBBY_ID, isPrivateMatch, &g_partyJoinInfo, SplitscreenData) )
      {
        Com_PrintError(25, "PartyClient - JoinPartyHostLobby - Could not join our host's lobby\n");
        Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143DD5890);
      }
      v10 = DVARINT_pt_connectAttempts;
      if ( !DVARINT_pt_connectAttempts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "pt_connectAttempts") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v10);
      PartyAtomic_StartJoin(&g_partyJoinInfo, &g_partyData, PJT_HOSTPRESENCE, PARTYJOIN_COMMIT, v10->current.integer);
    }
    else
    {
      Com_PrintWarning(25, "PartyClient - JoinPartyHostLobby - Received host's presence while in-game. We can't join from there, so we'll back out.\n");
      Party_Backout(mainActiveClient);
    }
  }
}

/*
==============
PartyClient_LostConnectionToHost
==============
*/
void PartyClient_LostConnectionToHost(PartyData *party, const PartyActiveClient *mainActiveClient, PartyDisconnectReason reason, const char *message)
{
  unsigned __int8 v5; 
  XUID outHostXuid; 

  v5 = reason;
  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 685, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( !party->inParty && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 686, ASSERT_TYPE_ASSERT, "(party->inParty)", (const char *)&queryFormat, "party->inParty") )
    __debugbreak();
  if ( party->areWeHost && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 687, ASSERT_TYPE_ASSERT, "(!party->areWeHost)", (const char *)&queryFormat, "!party->areWeHost") )
    __debugbreak();
  if ( !mainActiveClient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 688, ASSERT_TYPE_ASSERT, "(mainActiveClient)", (const char *)&queryFormat, "mainActiveClient") )
    __debugbreak();
  if ( NetConnection::IsLocal(&party->currentHost.connections[mainActiveClient->localClientNum]) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 689, ASSERT_TYPE_ASSERT, "(!party->currentHost.connections[mainActiveClient->localClientNum].IsLocal())", (const char *)&queryFormat, "!party->currentHost.connections[mainActiveClient->localClientNum].IsLocal()") )
    __debugbreak();
  NetConnection::DropReliable(&party->currentHost.connections[mainActiveClient->localClientNum]);
  if ( Party_IsGameLobby(party) )
  {
    XUID::XUID(&outHostXuid);
    if ( g_partyData.inParty )
    {
      if ( Lobby_GetHostXuid(&outHostXuid) && Party_IsPlayerInPrivateParty(outHostXuid) && !g_partyData.backingOut )
      {
        if ( !g_partyData.inParty && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 696, ASSERT_TYPE_ASSERT, "(g_partyData.inParty)", (const char *)&queryFormat, "g_partyData.inParty") )
          __debugbreak();
        PartyClient_RemoveLobbyHostFromPrivateParty(mainActiveClient);
      }
    }
  }
  PartyClient_HandleHostLost(party, mainActiveClient, (const PartyDisconnectReason)v5, message);
}

/*
==============
PartyClient_MarkAwayPartyMembersPresent
==============
*/
void PartyClient_MarkAwayPartyMembersPresent(PartyData *party)
{
  unsigned __int8 *p_status; 
  unsigned int i; 
  const char *v4; 
  const char *v5; 
  signed int MemberByXUID_AllowNotPresent; 
  __int64 v7; 
  __int64 v8; 
  const char *v9; 
  char *fmt; 
  __int64 v11; 
  XUID result; 

  p_status = &party->partyMembers[0].status;
  for ( i = 0; i < 0xC8; ++i )
  {
    if ( *p_status != 6 && (Party_IsMemberIndexAway(party, i) || Party_IsMemberIndexCommitted(party, i)) )
    {
      v4 = XUID::ToDevString(&party->partyMembers[i].playerUID);
      LODWORD(fmt) = i;
      Com_Printf(25, "[%s] PartyClient - MarkAwayPartyMembersPresent - Assuming away member %s (%i) is present\n", party->partyName, v4, fmt);
      if ( !Party_IsMemberIndexDataAvailable(party, i) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 758, ASSERT_TYPE_ASSERT, "(Party_IsMemberIndexDataAvailable( party, clientNum ))", "%s\n\tShould not be setting member status directly when the member is not fully joined", "Party_IsMemberIndexDataAvailable( party, clientNum )") )
        __debugbreak();
      Party_GetXuid(&result, party, i);
      if ( *p_status != 5 )
      {
        v5 = XUID::ToDevString(&result);
        LODWORD(v11) = 5;
        Com_Printf(25, "[%s] PartyClient - MarkMemberStatus - Setting party member %i (%s) to status %i.\n", party->partyName, i, v5, v11);
      }
      *p_status = 5;
      if ( !Party_IsPrivateParty(party) && g_partyData.inParty )
      {
        if ( Live_XUIDIsLocalPlayer(result) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 772, ASSERT_TYPE_ASSERT, "(!Live_XUIDIsLocalPlayer( memberXuid ))", (const char *)&queryFormat, "!Live_XUIDIsLocalPlayer( memberXuid )") )
          __debugbreak();
        MemberByXUID_AllowNotPresent = Party_FindMemberByXUID_AllowNotPresent(&g_partyData, result);
        v7 = MemberByXUID_AllowNotPresent;
        if ( MemberByXUID_AllowNotPresent >= 0 )
        {
          if ( !Party_IsMemberIndexDataAvailable(&g_partyData, MemberByXUID_AllowNotPresent) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 777, ASSERT_TYPE_ASSERT, "(Party_IsMemberIndexDataAvailable( &g_partyData, memberPartyIndex ))", "%s\n\tShould not be setting member status directly when the member is not fully joined", "Party_IsMemberIndexDataAvailable( &g_partyData, memberPartyIndex )") )
            __debugbreak();
          v8 = v7;
          if ( !XUID::operator==(&g_partyData.partyMembers[v7].playerUID, &result) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 778, ASSERT_TYPE_ASSERT, "(g_partyData.partyMembers[memberPartyIndex].playerUID == memberXuid)", (const char *)&queryFormat, "g_partyData.partyMembers[memberPartyIndex].playerUID == memberXuid") )
            __debugbreak();
          if ( g_partyData.partyMembers[v8].status != 5 )
          {
            v9 = XUID::ToDevString(&result);
            LODWORD(v11) = 5;
            Com_Printf(25, "[%s] PartClient - MarkMemberStatus - Also setting private party member %i (%s) to status %i.\n", party->partyName, (unsigned int)v7, v9, v11);
          }
          g_partyData.partyMembers[v8].status = 5;
        }
      }
    }
    p_status += 504;
  }
}

/*
==============
PartyClient_MarkPacketReceived
==============
*/
void PartyClient_MarkPacketReceived(PartyData *party, PartyHostDetails *partyHost)
{
  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 2066, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( !party->session && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 2067, ASSERT_TYPE_ASSERT, "(party->session)", (const char *)&queryFormat, "party->session") )
    __debugbreak();
  if ( !partyHost && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 2068, ASSERT_TYPE_ASSERT, "(partyHost)", (const char *)&queryFormat, "partyHost") )
    __debugbreak();
  partyHost->lastPacketTime = Sys_Milliseconds();
  party->hostTimeouts = 0;
}

/*
==============
PartyClient_ParseMatchRulesFromPacket
==============
*/
void PartyClient_ParseMatchRulesFromPacket(PartyData *party, const PartyActiveClient *mainActiveClient, int partNum, msg_t *msg, PartyStateReadRecord *record)
{
  PartyStateReadRecord *v5; 
  bool v9; 
  bool v10; 
  bool v11; 
  GameStateInfo *v12; 
  const char *GameTypeFromIndex; 
  int matchRulesPacketsParsed; 
  int totalMatchRulesPackets; 
  const DDLDef *v16; 
  unsigned int v17; 
  MatchRules *matchRules; 
  __int64 i; 
  __int64 v20; 
  __int64 fromSnapChecksum; 
  __int64 checksum; 
  const DDLDef *Asset; 
  int fromSnapTime; 
  __int64 v25; 
  const char *GameType; 
  const char *v27; 
  signed __int64 v28; 
  char v29; 
  __int64 v30; 
  char v31; 
  bool CodcasterEnabled; 
  bool CWLEnabled; 
  unsigned __int16 outLength[20]; 

  v5 = record;
  v9 = record->inPrivateMatch && Party_IsGameLobby(party);
  v10 = v5->isSystemLinkMatch && !Party_IsGameLobby(party);
  v11 = v9 || v10;
  if ( v5->usingRecipe && v5->toSnapTime != g_matchRulesSnapshot.curSnapTime && v11 )
  {
    v12 = GameStateInfo_Get();
    if ( !partNum )
    {
      GameTypeFromIndex = BG_MatchRulesData_GetGameTypeFromIndex(v5->gametypeIndex);
      Com_Printf(25, "[%s] [PartyClient_ParseMatchRulesFromPacket] Parsing from snap time %d\n", party->partyName, (unsigned int)v5->fromSnapTime);
      if ( v5->fromSnapTime )
      {
        Asset = Com_DDL_LoadAsset("ddl/mp/recipes.ddl");
        fromSnapTime = v5->fromSnapTime;
        if ( fromSnapTime == g_matchRulesSnapshot.oldSnapTime )
        {
          memcpy_0(v12->matchRules, g_matchRulesSnapshot.data, Asset->byteSize);
          g_matchRulesSnapshot.curSnapTime = -1;
        }
        else
        {
          if ( fromSnapTime != g_matchRulesSnapshot.curSnapTime )
          {
            Com_PrintWarning(25, "[PartyClient_ParseMatchRulesFromPacket] Got delta from unknown time\n");
            return;
          }
          memcpy_0(g_matchRulesSnapshot.data, v12->matchRules, Asset->byteSize);
          g_matchRulesSnapshot.oldSnapTime = v5->fromSnapTime;
          g_matchRulesSnapshot.curSnapTime = -1;
        }
      }
      else if ( !BG_MatchRules_LoadDefaultFromFF(v12->matchRules, GameTypeFromIndex) )
      {
        Com_PrintWarning(25, "[PartyClient_ParseMatchRulesFromPacket] Couldn't load defaults ff for matchrules %s\n", GameTypeFromIndex);
      }
    }
    matchRulesPacketsParsed = v5->matchRulesPacketsParsed;
    totalMatchRulesPackets = v5->totalMatchRulesPackets;
    if ( matchRulesPacketsParsed >= totalMatchRulesPackets || msg->readcount == msg->cursize + msg->splitSize )
    {
LABEL_26:
      if ( partNum + 1 >= party->partyStateData.packetCount && matchRulesPacketsParsed != totalMatchRulesPackets && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 1885, ASSERT_TYPE_ASSERT, "(partNum + 1 < party->partyStateData.packetCount || record->matchRulesPacketsParsed == record->totalMatchRulesPackets)", (const char *)&queryFormat, "partNum + 1 < party->partyStateData.packetCount || record->matchRulesPacketsParsed == record->totalMatchRulesPackets") )
        __debugbreak();
      if ( v5->matchRulesPacketsParsed == v5->totalMatchRulesPackets )
      {
        v16 = Com_DDL_LoadAsset("ddl/mp/recipes.ddl");
        v17 = -1;
        matchRules = v12->matchRules;
        for ( i = v16->byteSize; i; --i )
        {
          v20 = matchRules->data[0];
          matchRules = (MatchRules *)((char *)matchRules + 1);
          v17 = (v17 >> 8) ^ g_crc32Table[v20 ^ (unsigned __int8)v17];
        }
        v12->matchRules->checksum = ~v17;
        fromSnapChecksum = v5->fromSnapChecksum;
        checksum = v12->matchRules->checksum;
        if ( (_DWORD)checksum == (_DWORD)fromSnapChecksum )
        {
          v25 = 0x7FFFFFFFi64;
          g_matchRulesSnapshot.curSnapTime = v5->toSnapTime;
          GameType = BG_MatchRulesData_GetGameType(v12->matchRules);
          v27 = BG_MatchRulesData_GetGameTypeFromIndex(v5->gametypeIndex);
          if ( !v27 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
            __debugbreak();
          if ( !GameType && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 182, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
            __debugbreak();
          v28 = v27 - GameType;
          do
          {
            v29 = GameType[v28];
            v30 = v25;
            v31 = *GameType++;
            --v25;
            if ( !v30 )
              break;
            if ( v29 != v31 )
            {
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 1899, ASSERT_TYPE_ASSERT, "(I_strcmp( BG_MatchRulesData_GetGameTypeFromIndex( record->gametypeIndex ), BG_MatchRulesData_GetGameType( gInfo->matchRules ) ) == 0)", (const char *)&queryFormat, "I_strcmp( BG_MatchRulesData_GetGameTypeFromIndex( record->gametypeIndex ), BG_MatchRulesData_GetGameType( gInfo->matchRules ) ) == 0") )
                __debugbreak();
              break;
            }
          }
          while ( v29 );
          CodcasterEnabled = BG_MatchRulesData_GetCodcasterEnabled(v12->matchRules);
          Party_SetCodcastingEnabled(party, CodcasterEnabled);
          CWLEnabled = BG_MatchRulesData_GetCWLEnabled(v12->matchRules);
          Party_SetUsesMLGRules(party, CWLEnabled);
        }
        else
        {
          Com_PrintError(25, "[PartyClient_ParseMatchRulesFromPacket] Match rules does not match checksum after applying received delta. %d != %d\n", checksum, fromSnapChecksum);
          Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_14422F310, 324i64);
        }
      }
    }
    else
    {
      while ( MatchRules_DeserializeDeltaHeader(msg, (unsigned __int16 *)&record, outLength) )
      {
        if ( outLength[0] + (unsigned int)(unsigned __int16)record >= 0x1000 )
        {
          Com_PrintError(25, "Malformed network packet, tried to write beyond length of match rules\n", (unsigned __int16)record);
          if ( !CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 1876, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Malformed network packet, tried to write beyond length of match rules\n") )
            return;
          goto LABEL_41;
        }
        MSG_ReadData(msg, outLength[0], &v12->matchRules->data[(unsigned __int16)record], 4097 - (unsigned __int16)record);
        if ( msg->readcount == msg->cursize + msg->splitSize )
        {
          totalMatchRulesPackets = v5->totalMatchRulesPackets;
          matchRulesPacketsParsed = v5->matchRulesPacketsParsed + 1;
          v5->matchRulesPacketsParsed = matchRulesPacketsParsed;
          goto LABEL_26;
        }
      }
      Com_PrintError(25, "Malformed network packet, tried to write beyond length of match rules\n");
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 1865, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Malformed network packet, tried to write beyond length of match rules\n") )
LABEL_41:
        __debugbreak();
    }
  }
}

/*
==============
PartyClient_ParseMemberListFromPacket
==============
*/
__int64 PartyClient_ParseMemberListFromPacket(PartyData *party, const PartyActiveClient *mainActiveClient, int partNum, msg_t *msg, PartyStateReadRecord *record)
{
  msg_t *v5; 
  PartyData *v6; 
  PartyStateReadRecord *v7; 
  int UsedBitCount; 
  __int64 membersParsed; 
  unsigned int v10; 
  unsigned __int64 v11; 
  unsigned int v12; 
  int v13; 
  int Byte; 
  int v15; 
  int v16; 
  unsigned __int8 *p_status; 
  PartyMember *v18; 
  PartyStateReadRecord *v19; 
  int v20; 
  int v21; 
  int v22; 
  int v23; 
  int v24; 
  XUID *p_xuid; 
  __int64 Bits; 
  __int64 v27; 
  unsigned __int8 v28; 
  int v29; 
  bool v30; 
  const char *v31; 
  const char *v32; 
  __int64 v33; 
  __int64 v34; 
  __int64 v35; 
  unsigned int v36; 
  netsrc_t v37; 
  Online_BlockList *Instance; 
  const PartyActiveClient *v39; 
  LocalClientNum_t ClientFromController; 
  Online_BlockList *v41; 
  int PortForLocalXUID; 
  int StartingControllerIndex; 
  PartyData *v44; 
  const char *v45; 
  const char *v46; 
  unsigned __int64 v47; 
  __int64 v48; 
  unsigned __int64 v49; 
  ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned __int64,int> > *v50; 
  ntl::internal::pool_allocator_freelist<24> *p_m_freelist; 
  PartyData *v54; 
  LocalClientNum_t v55; 
  NetConnection *HostConnection; 
  NetConnection::Type ConnectionType; 
  __int64 v58; 
  SessionData *session; 
  netsrc_t LocalNetIDFromControllerIndex; 
  Online_InvitationManager *v61; 
  int v62; 
  int v63; 
  unsigned __int8 *v64; 
  __int64 *v65; 
  const int *v66; 
  char *fmt; 
  char *fmta; 
  __int64 type; 
  __int64 isJoinerNewToTheParty; 
  __int64 v72; 
  int Long; 
  __int64 v74; 
  XUID blockedPlayer; 
  int outMemberIndex; 
  msg_t *v77; 
  PartyData *partya; 
  XUID player; 
  int v80; 
  const PartyActiveClient *v81; 
  __int64 v82; 
  PartyStateReadRecord *v83; 
  XUID xuid; 
  __int128 v85; 
  __int64 v86; 
  XUID result; 
  bdSecurityID outKid; 
  bdSecurityID v89; 
  bdSecurityID privatePartyId; 
  XNADDR buffer; 
  XNADDR addr; 
  int v93[32]; 
  __int64 v94[4]; 

  v86 = -2i64;
  v5 = msg;
  v77 = msg;
  v81 = mainActiveClient;
  v6 = party;
  partya = party;
  v7 = record;
  v83 = record;
  XUID::XUID(&blockedPlayer);
  XUID::XUID(&player);
  bdSecurityID::bdSecurityID(&privatePartyId);
  memset(v94, 0, sizeof(v94));
  memset_0(v93, 0, sizeof(v93));
  if ( !record && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 1472, ASSERT_TYPE_ASSERT, "(record)", (const char *)&queryFormat, "record") )
    __debugbreak();
  if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 1473, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( v6->partyMembersBits <= 0 )
  {
    LODWORD(type) = v6->partyMembersBits;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 1474, ASSERT_TYPE_ASSERT, "( ( party->partyMembersBits > 0 ) )", "( party->partyMembersBits ) = %i", type) )
      __debugbreak();
  }
  LODWORD(fmt) = record->membersParsed;
  Com_Printf(25, "[%s] Parsing member list from party state packet. Expecting %i members, %i parsed so far.\n", v6->partyName, (unsigned int)record->totalMembers, fmt);
  if ( MSG_ReadLong(v5) != 102 )
  {
    Long = MSG_ReadLong(v5);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 1478, ASSERT_TYPE_ASSERT, "( MSG_ReadLong( msg ) ) == ( 102 )", "%s == %s\n\t%i, %i", "MSG_ReadLong( msg )", "102", Long, 102) )
      __debugbreak();
  }
  UsedBitCount = MSG_GetUsedBitCount(v5);
  if ( MSG_ReadLong(v5) != UsedBitCount )
  {
    LODWORD(v74) = UsedBitCount;
    LODWORD(v72) = MSG_ReadLong(v5);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 1479, ASSERT_TYPE_ASSERT, "( MSG_ReadLong( msg ) ) == ( bits )", "%s == %s\n\t%i, %i", "MSG_ReadLong( msg )", "bits", v72, v74) )
      __debugbreak();
  }
  membersParsed = (unsigned int)record->membersParsed;
  v10 = 1;
  if ( (_DWORD)membersParsed != record->totalMembers )
  {
    LODWORD(v11) = record->lastMemberIndex;
    v12 = 0;
    if ( (int)membersParsed < record->totalMembers )
    {
      while ( 1 )
      {
        if ( v5->readcount == v5->cursize + v5->splitSize )
        {
LABEL_207:
          v12 = 0;
          v10 = 1;
          break;
        }
        v13 = v11;
        Byte = MSG_ReadByte(v5);
        v11 = (unsigned int)Byte;
        if ( Byte >= 200 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 1492, ASSERT_TYPE_ASSERT, "(memberIndex < 200)", (const char *)&queryFormat, "memberIndex < MAX_PARTY_MEMBERS") )
          __debugbreak();
        if ( MSG_ReadLong(v5) != (_DWORD)v11 )
        {
          LODWORD(v74) = v11;
          LODWORD(v72) = MSG_ReadLong(v5);
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 1494, ASSERT_TYPE_ASSERT, "( MSG_ReadLong( msg ) ) == ( memberIndex )", "%s == %s\n\t%i, %i", "MSG_ReadLong( msg )", "memberIndex", v72, v74) )
            __debugbreak();
        }
        v15 = MSG_GetUsedBitCount(v5);
        if ( MSG_ReadLong(v5) != v15 )
        {
          LODWORD(v74) = v15;
          LODWORD(v72) = MSG_ReadLong(v5);
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 1495, ASSERT_TYPE_ASSERT, "( MSG_ReadLong( msg ) ) == ( bits )", "%s == %s\n\t%i, %i", "MSG_ReadLong( msg )", "bits", v72, v74) )
            __debugbreak();
        }
        if ( (int)v11 <= v13 )
        {
          LODWORD(fmta) = v13;
          Com_PrintError(25, "[%s] Invalid memberIndex %i in ParsePartyState - index is <= last parsed index %d\n", v6->partyName, (unsigned int)v11, fmta);
          membersParsed = (unsigned int)v7->membersParsed;
          goto LABEL_207;
        }
        v16 = v13 + 1;
        if ( v16 < (int)v11 )
        {
          p_status = &v6->partyMembers[v16].status;
          do
          {
            if ( v16 >= 200 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 1508, ASSERT_TYPE_ASSERT, "(lastMemberIndex < 200)", (const char *)&queryFormat, "lastMemberIndex < MAX_PARTY_MEMBERS") )
              __debugbreak();
            if ( (int)v11 <= v16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 1509, ASSERT_TYPE_ASSERT, "(memberIndex > lastMemberIndex)", (const char *)&queryFormat, "memberIndex > lastMemberIndex") )
              __debugbreak();
            if ( *p_status )
            {
              Com_Printf(25, "[%s] Removing player at index '%i' because he is not in the last member list.\n", v6->partyName, (unsigned int)v16);
              PartyClient_RemovePartyMember(v6, v16);
            }
            ++v16;
            p_status += 504;
          }
          while ( v16 < (int)v11 );
          v5 = v77;
        }
        v82 = (__int64)v6 + 504 * (int)v11;
        v18 = (PartyMember *)(v82 + 2192);
        if ( (unsigned int)v11 >= 0x100 )
        {
          LODWORD(v74) = 256;
          LODWORD(v72) = v11;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v72, v74) )
            __debugbreak();
        }
        v19 = v83;
        v83->membersParsedMask.array[v11 >> 5] |= 0x80000000 >> (v11 & 0x1F);
        ++v19->membersParsed;
        if ( MSG_ReadBit(v5) )
        {
          v21 = MSG_GetUsedBitCount(v5);
          if ( MSG_ReadLong(v5) != v21 )
          {
            LODWORD(v74) = v21;
            LODWORD(v72) = MSG_ReadLong(v5);
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 1540, ASSERT_TYPE_ASSERT, "( MSG_ReadLong( msg ) ) == ( bits )", "%s == %s\n\t%i, %i", "MSG_ReadLong( msg )", "bits", v72, v74) )
              __debugbreak();
          }
          if ( MSG_ReadBit(v5) )
          {
            if ( (int)v11 >= 32 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 1545, ASSERT_TYPE_ASSERT, "(memberIndex < 32)", (const char *)&queryFormat, "memberIndex < MAX_CLIENTS_PEERMESH") )
              __debugbreak();
            v22 = MSG_ReadLong(v5);
            if ( (int)v11 < 32 )
            {
              v93[(int)v11] = v22;
              *((_BYTE *)v94 + (int)v11) = 1;
            }
          }
          v23 = MSG_GetUsedBitCount(v5);
          if ( MSG_ReadLong(v5) != v23 )
          {
            LODWORD(v74) = v23;
            LODWORD(v72) = MSG_ReadLong(v5);
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 1555, ASSERT_TYPE_ASSERT, "( MSG_ReadLong( msg ) ) == ( bits )", "%s == %s\n\t%i, %i", "MSG_ReadLong( msg )", "bits", v72, v74) )
              __debugbreak();
          }
          if ( MSG_ReadBit(v5) )
          {
            v24 = MSG_GetUsedBitCount(v5);
            if ( MSG_ReadLong(v5) != v24 )
            {
              LODWORD(v74) = v24;
              LODWORD(v72) = MSG_ReadLong(v5);
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 1560, ASSERT_TYPE_ASSERT, "( MSG_ReadLong( msg ) ) == ( bits )", "%s == %s\n\t%i, %i", "MSG_ReadLong( msg )", "bits", v72, v74) )
                __debugbreak();
            }
            if ( Party_IsMemberDataAvailable(v18) )
            {
              xuid.m_id = v18->playerUID.m_id;
              p_xuid = &xuid;
            }
            else
            {
              p_xuid = XUID::NullXUID(&result);
            }
            XUID::operator=(&player, p_xuid);
            privatePartyId = v18->info.privatePartyId;
            Bits = MSG_ReadBits(v5, 2u);
            if ( (unsigned __int64)(Bits + 0x80000000i64) > 0xFFFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "int __cdecl truncate_cast_impl<int,__int64>(__int64)", "signed", (int)Bits, "signed", Bits) )
              __debugbreak();
            v27 = MSG_ReadBits(v5, 3u);
            v28 = v27;
            if ( (v27 < 0 || (unsigned __int64)v27 > 0xFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned char __cdecl truncate_cast_impl<unsigned char,__int64>(__int64)", "unsigned", (unsigned __int8)v27, "signed", v27) )
              __debugbreak();
            v18->isGuestAccount = MSG_ReadBit(v5) != 0;
            XUID::Deserialize(&blockedPlayer, v5);
            v29 = v6->lobbyFlags >> 10;
            LOBYTE(v29) = (v6->lobbyFlags & 0x400) != 0;
            v80 = v29;
            v30 = XUID::operator!=(&blockedPlayer, &player) && XUID::IsValid(&player);
            if ( (_BYTE)v29 )
            {
              if ( !v30 || Party_FindMemberByXUID_Internal(v6, player, &outMemberIndex) )
                goto LABEL_94;
            }
            else if ( !v30 )
            {
LABEL_94:
              if ( MSG_ReadBit(v5) )
              {
                MSG_ReadData(v5, 84, &buffer, 84);
              }
              else
              {
                if ( PeerMesh_IsEnabled(v6) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 1589, ASSERT_TYPE_ASSERT, "(!PeerMesh_IsEnabled( party ))", "%s\n\tMismatch in peer mesh between client and host", "!PeerMesh_IsEnabled( party )") )
                  __debugbreak();
                XNADDR::Clear(&buffer);
              }
              if ( Live_XUIDIsLocalPlayer(blockedPlayer) )
              {
                NET_GetLocalXnaddr(&addr);
                XNADDR::operator=(&buffer, &addr);
              }
              v33 = MSG_ReadBits(v5, v6->partyMembersBits);
              if ( (unsigned __int64)(v33 + 0x80000000i64) > 0xFFFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "int __cdecl truncate_cast_impl<int,__int64>(__int64)", "signed", (int)v33, "signed", v33) )
                __debugbreak();
              v18->subpartyIndex = v33;
              v34 = MSG_ReadBits(v5, 8u);
              if ( (unsigned __int64)(v34 + 0x80000000i64) > 0xFFFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "int __cdecl truncate_cast_impl<int,__int64>(__int64)", "signed", (int)v34, "signed", v34) )
                __debugbreak();
              v18->team = v34;
              v35 = MSG_ReadBits(v5, 6u);
              if ( (unsigned __int64)(v35 + 0x80000000i64) > 0xFFFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "int __cdecl truncate_cast_impl<int,__int64>(__int64)", "signed", (int)v35, "signed", v35) )
                __debugbreak();
              v18->squad = v35 - 1;
              MSG_ReadData(v5, 2, &v18->score, 2);
              v18->deaths = MSG_ReadByte(v5);
              v18->joinType = MSG_ReadByte(v5);
              v36 = MSG_ReadByte(v5);
              v37 = v36;
              if ( v28 != 6 && v36 >= 2 )
              {
                LODWORD(isJoinerNewToTheParty) = 2;
                LODWORD(type) = v36;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 1616, ASSERT_TYPE_ASSERT, "(unsigned)( remoteLocalNetID ) < (unsigned)( NS_MAXCLIENTS )", "remoteLocalNetID doesn't index NS_MAXCLIENTS\n\t%i not in [0, %i)", type, isJoinerNewToTheParty) )
                  __debugbreak();
              }
              memset_0(v18, 0, 0xB8ui64);
              Party_ReadMemberInfo(v5, &v18->info, blockedPlayer);
              if ( v5->overflowed )
              {
                Com_Printf(25, "[%s] Invalid packet while reading member %i info of party state.\n", partya->partyName, (unsigned int)v11);
                v10 = 0;
                goto LABEL_219;
              }
              if ( !LUI_IsMenuOpenAndVisible(LOCAL_CLIENT_0, "leavelobbyblockedplayerwarning") )
              {
                Instance = Online_BlockList::GetInstance();
                v39 = v81;
                if ( Online_BlockList::IsBlocked(Instance, v81->localControllerIndex, blockedPlayer) )
                {
                  ClientFromController = CL_Mgr_GetClientFromController(v39->localControllerIndex);
                  LUI_OpenMenu(ClientFromController, "leavelobbyblockedplayerwarning", 1, 0, 1);
                  v41 = Online_BlockList::GetInstance();
                  Online_BlockList::NotifyBlockedPlayer(v41, v39->localControllerIndex, blockedPlayer);
                }
              }
              if ( !XUID::IsValid(&blockedPlayer) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 1649, ASSERT_TYPE_ASSERT, "(xuid.IsValid())", (const char *)&queryFormat, "xuid.IsValid()") )
                __debugbreak();
              XUID::operator=(&v18->playerUID, &blockedPlayer);
              if ( (unsigned int)(Bits - 1) > 2 )
              {
                LODWORD(type) = Bits;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 1653, ASSERT_TYPE_ASSERT, "( ( natType > 0 && natType <= XONLINE_NAT_STRICT ) )", "( natType ) = %i", type) )
                  __debugbreak();
              }
              v18->natType = Bits;
              v18->status = v28;
              PortForLocalXUID = Live_GetPortForLocalXUID(blockedPlayer);
              StartingControllerIndex = PortForLocalXUID;
              v44 = partya;
              if ( PortForLocalXUID >= 0 )
              {
                if ( Party_IsControllerAnActiveClient(partya, PortForLocalXUID) )
                {
                  if ( v28 != 5 )
                  {
                    Com_Printf(25, "[%s] Host thinks one of our local clients is not fully present, which is normal since we won't be until after we ack this player state. We will override this as we know we're here. This is bad if it happens a lot\n", v44->partyName);
                    v18->status = 5;
                  }
                  bdSecurityID::bdSecurityID(&outKid);
                  Party_GetOurPrivatePartyId(&outKid);
                  if ( bdSecurityID::operator!=(&outKid, &v18->info.privatePartyId) )
                  {
                    v45 = XUID::ToDevString(&blockedPlayer);
                    LODWORD(fmta) = StartingControllerIndex;
                    Com_Printf(25, "[%s] Host has out of date information about our private party Id. He may not be up to date with our migration. This is normal if the party host just dropped. XUID %s. Controller %i.\n", v44->partyName, v45, fmta);
                  }
                  if ( v18->info.serverOverwroteInfo )
                  {
                    Party_SetLocalMLGFollowerIndex(v44, StartingControllerIndex, v18->info.mlgFollowerIndex);
                    Party_SetLocalMLGFollower(v44, StartingControllerIndex, v18->info.mlgFollower);
                    Party_SetDesiredTeamSelection(v44, StartingControllerIndex, v18->team);
                  }
                  bdSecurityID::~bdSecurityID(&outKid);
                }
                else
                {
                  v46 = XUID::ToDevString(&blockedPlayer);
                  LODWORD(fmta) = StartingControllerIndex;
                  Com_Printf(25, "[%s] Received a local player XUID (%s) but its controller (%i) is not active.\n", v44->partyName, v46, fmta);
                }
              }
              if ( XUID::operator==(&player, &blockedPlayer) )
              {
                v6 = partya;
                if ( !Party_FindMemberByXUID_Internal(partya, blockedPlayer, &outMemberIndex) || outMemberIndex != (_DWORD)v11 )
                {
                  LODWORD(v72) = v11;
                  LODWORD(isJoinerNewToTheParty) = outMemberIndex;
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 1695, ASSERT_TYPE_ASSERT, "(Party_FindMemberByXUID_Internal( party, xuid, &foundMember ) && (foundMember == memberIndex))", "%s\n\t%d != %d", "Party_FindMemberByXUID_Internal( party, xuid, &foundMember ) && (foundMember == memberIndex)", isJoinerNewToTheParty, v72) )
                    __debugbreak();
                }
                if ( privatePartyId != *(_QWORD *)&v18->info.privatePartyId )
                {
                  bdSecurityID::bdSecurityID(&v89);
                  Party_GetOurPrivatePartyId(&v89);
                  if ( Live_XUIDIsLocalPlayer(blockedPlayer) && !bdSecurityID::operator==(&v89, &v18->info.privatePartyId) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 1704, ASSERT_TYPE_ASSERT, "(!Live_XUIDIsLocalPlayer( xuid ) || privatePartyId == partyMember->info.privatePartyId)", "%s\n\tHost has the wrong information about our private party Id", "!Live_XUIDIsLocalPlayer( xuid ) || privatePartyId == partyMember->info.privatePartyId") )
                    __debugbreak();
                  Party_CheckUpdatedPartyMemberPartyId(v6, v81->localControllerIndex, v11);
                  bdSecurityID::~bdSecurityID(&v89);
                }
              }
              else
              {
                if ( !(_BYTE)v80 && Party_FindMemberByXUID_Internal(v44, blockedPlayer, &outMemberIndex) )
                {
                  LODWORD(isJoinerNewToTheParty) = outMemberIndex;
                  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 1713, ASSERT_TYPE_ASSERT, "(!Party_FindMemberByXUID_Internal( party, xuid, &foundMember ))", "%s\n\tTrying to add member %d but member is already in the party", "!Party_FindMemberByXUID_Internal( party, xuid, &foundMember )", isJoinerNewToTheParty) )
                    __debugbreak();
                }
                v47 = XUID::ToUint64(&blockedPlayer);
                v48 = (((unsigned int)v47 ^ HIDWORD(v47)) * (unsigned __int128)0x50F22E111C4C56DFui64) >> 64;
                v49 = ((unsigned int)v47 ^ HIDWORD(v47)) - 389 * ((v48 + (((unsigned __int64)((unsigned int)v47 ^ HIDWORD(v47)) - v48) >> 1)) >> 8);
                if ( v49 >= 0x185 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 87, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
                  __debugbreak();
                v50 = &partya->memberMap.m_buckets.m_data[v49];
                _RBX = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)v50->m_listHead.m_sentinel.mp_next;
                if ( (ntl::intrusive_slist<ntl::internal::hash_table_node<unsigned __int64,int> > *)v50->m_listHead.m_sentinel.mp_next == v50 )
                {
LABEL_160:
                  *(_QWORD *)&v85 = v47;
                  DWORD2(v85) = 0;
                  if ( _RBX == (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)v50 )
                  {
LABEL_166:
                    p_m_freelist = &partya->memberMap.m_freelist;
                    if ( !partya->memberMap.m_freelist.m_head.mp_next )
                    {
                      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
                        __debugbreak();
                      if ( !p_m_freelist->m_head.mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
                        __debugbreak();
                    }
                    if ( (ntl::internal::pool_allocator_freelist<24> *)p_m_freelist->m_head.mp_next == p_m_freelist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 298, ASSERT_TYPE_ASSERT, "( !empty() )", "Pool out of elements to allocate (Elem size=%zu, Num elems=%zu)", 0x18ui64, 0xCAui64) )
                      __debugbreak();
                    _RBX = p_m_freelist->m_head.mp_next;
                    p_m_freelist->m_head.mp_next = p_m_freelist->m_head.mp_next->mp_next;
                    _RBX->mp_next = NULL;
                    __asm
                    {
                      vmovups xmm0, [rbp+180h+var_1E0]
                      vmovups xmmword ptr [rbx+8], xmm0
                    }
                    _RBX->mp_next = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)v50->m_listHead.m_sentinel.mp_next;
                    v50->m_listHead.m_sentinel.mp_next = (ntl::internal::slist_node_base *)_RBX;
                  }
                  else
                  {
                    while ( 1 )
                    {
                      if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\slist\\intrusive_slist.h", 78, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
                        __debugbreak();
                      if ( _RBX[1].mp_next == (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)v47 )
                        break;
                      _RBX = _RBX->mp_next;
                      if ( _RBX == (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)v50 )
                        goto LABEL_166;
                    }
                    _RBX = NULL;
                  }
                  ++partya->memberMap.m_currentNumItems;
                  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\hash_table\\hash_table.h", 331, ASSERT_TYPE_ASSERT, "( p_node )", (const char *)&queryFormat, "p_node") )
                    __debugbreak();
                }
                else
                {
                  while ( 1 )
                  {
                    if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\slist\\intrusive_slist.h", 78, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
                      __debugbreak();
                    if ( _RBX[1].mp_next == (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)v47 )
                      break;
                    _RBX = _RBX->mp_next;
                    if ( _RBX == (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)v50 )
                    {
                      _RBX = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)v50->m_listHead.m_sentinel.mp_next;
                      goto LABEL_160;
                    }
                  }
                }
                LODWORD(_RBX[2].mp_next) = v11;
                v54 = partya;
                Party_CheckUpdatedPartyMemberPartyId(partya, v81->localControllerIndex, v11);
                if ( v28 == 6 )
                {
                  v6 = v54;
                }
                else
                {
                  if ( StartingControllerIndex < 0 )
                    StartingControllerIndex = Party_GetStartingControllerIndex(v54);
                  v55 = CL_Mgr_GetClientFromController(StartingControllerIndex);
                  HostConnection = Party_GetHostConnection(v54, v55);
                  if ( NetConnection::CompareAddr(HostConnection, &buffer) || Party_IsMemberLocalPlayer(v54, v11) || PeerMesh_IsEnabled(v54) )
                  {
                    ConnectionType = Party_GetConnectionType(v54);
                    v58 = v82;
                    if ( XNADDR::IsNull(&buffer) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 222, ASSERT_TYPE_ASSERT, "(!xnaddr.IsNull())", "%s\n\tNull xnaddr - most likely peer mesh mismatch", "!xnaddr.IsNull()") )
                      __debugbreak();
                    NetConnection::Close((NetConnection *)(v58 + 2432), NET_CLOSE_SOFT);
                    session = v54->session;
                    LocalNetIDFromControllerIndex = NET_GetLocalNetIDFromControllerIndex(StartingControllerIndex);
                    NetConnection::Open((NetConnection *)(v58 + 2432), LocalNetIDFromControllerIndex, &session->dyn.sessionInfo, &buffer, v37, ConnectionType);
                  }
                  else
                  {
                    v58 = v82;
                  }
                  v6 = partya;
                  Party_RegisterPlayer(partya, StartingControllerIndex, v11, &buffer);
                  if ( !(_BYTE)v80 || !Party_FindMemberByXUID_Internal(v6, blockedPlayer, &outMemberIndex) )
                  {
                    Party_PlayPlayerJoinSound(v6, LOCAL_CLIENT_0);
                    if ( Party_IsPrivateParty(v6) && !Party_IsMemberHost(v6, v11) && !Party_IsMemberLocalPlayer(v6, v11) && !InviteJoinHSM::IsHSMHandlingInvitation(&g_invitationHSM) )
                    {
                      v61 = Online_InvitationManager::GetInstance();
                      Online_InvitationManager::OnReceiveIncomingPartyMember(v61, StartingControllerIndex, *(const XUID *)(v58 + 2608), (const char *)(v58 + 2244), v6->partyId, 0, 1);
                    }
                  }
                }
              }
              v5 = v77;
              goto LABEL_203;
            }
            v31 = XUID::ToDevString(&player);
            v32 = XUID::ToDevString(&blockedPlayer);
            Com_DPrintf(25, "Removing player at index '%i' because the new XUID '%s' doesn't match the old value '%s'.\n", (unsigned int)v11, v32, v31);
            if ( (int)v11 >= 200 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 1579, ASSERT_TYPE_ASSERT, "(memberIndex < 200)", (const char *)&queryFormat, "memberIndex < MAX_PARTY_MEMBERS") )
              __debugbreak();
            PartyClient_RemovePartyMember(v6, v11);
            goto LABEL_94;
          }
          v62 = MSG_GetUsedBitCount(v5);
          if ( MSG_ReadLong(v5) != v62 )
          {
            LODWORD(v74) = v62;
            LODWORD(v72) = MSG_ReadLong(v5);
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 1763, ASSERT_TYPE_ASSERT, "( MSG_ReadLong( msg ) ) == ( bits )", "%s == %s\n\t%i, %i", "MSG_ReadLong( msg )", "bits", v72, v74) )
              __debugbreak();
          }
        }
        else
        {
          if ( !Party_IsMemberAway(v18) && (!Party_FindMemberByXUID_Internal(v6, v18->playerUID, &outMemberIndex) || outMemberIndex != (_DWORD)v11) )
          {
            LODWORD(v72) = v11;
            LODWORD(isJoinerNewToTheParty) = outMemberIndex;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 1529, ASSERT_TYPE_ASSERT, "(memberIsAway || (Party_FindMemberByXUID_Internal( party, partyMember->playerUID, &foundMember ) && (foundMember == memberIndex)))", "%s\n\t%d != %d", "memberIsAway || (Party_FindMemberByXUID_Internal( party, partyMember->playerUID, &foundMember ) && (foundMember == memberIndex))", isJoinerNewToTheParty, v72) )
              __debugbreak();
          }
          v20 = MSG_GetUsedBitCount(v5);
          if ( MSG_ReadLong(v5) != v20 )
          {
            LODWORD(v74) = v20;
            LODWORD(v72) = MSG_ReadLong(v5);
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 1532, ASSERT_TYPE_ASSERT, "( MSG_ReadLong( msg ) ) == ( bits )", "%s == %s\n\t%i, %i", "MSG_ReadLong( msg )", "bits", v72, v74) )
              __debugbreak();
          }
          if ( !Party_IsMemberDataAvailable(v18) )
          {
            Com_Printf(25, "[%s] Host told us that client %i did not change, but we don't know about him!\n", v6->partyName, (unsigned int)v11);
            v10 = 0;
            goto LABEL_219;
          }
        }
LABEL_203:
        v7 = v83;
        membersParsed = (unsigned int)v83->membersParsed;
        if ( (int)membersParsed >= v83->totalMembers )
          goto LABEL_207;
      }
    }
    Com_Printf(25, "[%s] PartyClient_ParseMemberListFromPacket - total parsed %d\n", v6->partyName, membersParsed);
    v7->lastMemberIndex = v11;
    if ( v7->membersParsed >= v7->totalMembers )
    {
      v63 = v11 + 1;
      if ( v63 < 200 )
      {
        v64 = &v6->partyMembers[v63].status;
        do
        {
          if ( *v64 )
          {
            Com_DPrintf(25, "Removing player at index '%i' because he is not on the list. The last member index received is %i.\n", (unsigned int)v63, (unsigned int)v7->lastMemberIndex);
            PartyClient_RemovePartyMember(v6, v63);
          }
          ++v63;
          v64 += 504;
        }
        while ( v63 < 200 );
      }
      v65 = v94;
      v66 = v93;
      do
      {
        if ( *(_BYTE *)v65 )
          PeerMesh_SetClientConnectivity(v6, v12, *v66);
        ++v12;
        v65 = (__int64 *)((char *)v65 + 1);
        ++v66;
      }
      while ( v12 < 0x20 );
      v10 = 1;
      PlayercardCache_MarkPartyDirty(v81->localControllerIndex, 1);
    }
  }
LABEL_219:
  bdSecurityID::~bdSecurityID(&privatePartyId);
  return v10;
}

/*
==============
PartyClient_ParsePartyStateHeaderData
==============
*/
char PartyClient_ParsePartyStateHeaderData(PartyData *party, const PartyActiveClient *mainActiveClient, msg_t *msg, PartyStateReadRecord *record)
{
  int v4; 
  const dvar_t *v9; 
  bool v10; 
  int UsedBitCount; 
  int Bit; 
  int v13; 
  int v14; 
  int v15; 
  int v16; 
  int v17; 
  const XUID *Xuid; 
  int v19; 
  int v20; 
  GameStateInfo *v21; 
  bool v22; 
  bool v23; 
  BOOL v24; 
  int Byte; 
  int v26; 
  int v27; 
  int v28; 
  int v29; 
  int v30; 
  int v31; 
  int v32; 
  int v33; 
  int v34; 
  int v35; 
  int v36; 
  int v37; 
  int v38; 
  int v39; 
  int v40; 
  int v41; 
  int v42; 
  int v43; 
  unsigned int lobbyFlags; 
  unsigned int v45; 
  const dvar_t *v46; 
  int m_id; 
  int v48; 
  int v49; 
  int v50; 
  int v51; 
  int v52; 
  int v53; 
  int Short; 
  __int64 hostNum; 
  int v56; 
  __int64 Bits; 
  int v58; 
  int v59; 
  __int64 indexBits; 
  __int64 v61; 
  int v62; 
  int v63; 
  int v64; 
  int v65; 
  Online_Error_CAT_PARTY_t v66; 
  unsigned int Int_Internal_DebugName; 
  int i; 
  int v69; 
  int PlaylistEntry; 
  int v71; 
  PartyUIRoot v72; 
  const dvar_t *v73; 
  int v74; 
  unsigned int v76; 
  Online_ErrorReporting *InstancePtr; 
  unsigned int v79; 
  unsigned int VersionNumber; 
  const char *v81; 
  const char *v82; 
  const char *v83; 
  int v84; 
  int v85; 
  int v86; 
  int v87; 
  int v88; 
  int v89; 
  int v90; 
  int v91; 
  PartyPrivacySetting v92; 
  bool v93; 
  int v94; 
  ClientPlatform v95; 
  int v96; 
  ClientPlatform v97; 
  char *fmt; 
  __int64 v99; 
  __int64 v100; 
  __int64 v101; 
  int Long; 
  __int64 v103; 
  char v104; 
  int v105; 
  int value; 
  XUID result; 
  unsigned __int64 high_filters; 
  unsigned __int64 filters; 
  PartyActiveClient outPartyActiveClient; 
  unsigned __int64 high_filter_out; 
  unsigned __int64 filter_out; 
  _GUID v113; 
  __int128 v114; 
  char buffer[48]; 
  char string[1024]; 

  v4 = 0;
  value = -1;
  filters = 0i64;
  high_filters = 0i64;
  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 906, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( !mainActiveClient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 907, ASSERT_TYPE_ASSERT, "(mainActiveClient)", (const char *)&queryFormat, "mainActiveClient") )
    __debugbreak();
  if ( !Party_IsControllerMainActiveClient(party, mainActiveClient->localControllerIndex) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 908, ASSERT_TYPE_ASSERT, "(Party_IsControllerMainActiveClient( party, mainActiveClient->localControllerIndex ))", (const char *)&queryFormat, "Party_IsControllerMainActiveClient( party, mainActiveClient->localControllerIndex )") )
    __debugbreak();
  if ( msg->overflowed )
  {
    OnlineErrorManager::SetLastRecordedErrorCode(&g_onlineMgr.m_errorManager, (Online_Error_CAT_PARTY_t)2048, NULL);
    v9 = DVARBOOL_online_should_com_error_on_party_state_parsing_failures;
    if ( !DVARBOOL_online_should_com_error_on_party_state_parsing_failures && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "online_should_com_error_on_party_state_parsing_failures") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v9);
    v10 = !v9->current.enabled;
    goto LABEL_138;
  }
  if ( MSG_ReadLong(msg) != 101 )
  {
    Long = MSG_ReadLong(msg);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 924, ASSERT_TYPE_ASSERT, "( MSG_ReadLong( msg ) ) == ( 101 )", "%s == %s\n\t%i, %i", "MSG_ReadLong( msg )", "101", Long, 101) )
      __debugbreak();
  }
  UsedBitCount = MSG_GetUsedBitCount(msg);
  if ( MSG_ReadLong(msg) != UsedBitCount )
  {
    LODWORD(v103) = UsedBitCount;
    LODWORD(v101) = MSG_ReadLong(msg);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 925, ASSERT_TYPE_ASSERT, "( MSG_ReadLong( msg ) ) == ( bits )", "%s == %s\n\t%i, %i", "MSG_ReadLong( msg )", "bits", v101, v103) )
      __debugbreak();
  }
  record->totalMembers = MSG_ReadByte(msg);
  record->totalMatchRulesPackets = MSG_ReadByte(msg);
  Bit = MSG_ReadBit(msg);
  record->inPrivateMatch = Bit != 0;
  Dvar_SetBool_Internal(DVARBOOL_xblive_privatematch, Bit != 0);
  v13 = MSG_ReadBit(msg);
  Dvar_SetBool_Internal(DVARBOOL_xblive_privatematch_solo, v13 != 0);
  record->isSystemLinkMatch = MSG_ReadBit(msg) != 0;
  v14 = MSG_ReadBit(msg);
  OnlineTournament_SetPartyHostIsInTournament(v14 != 0);
  v15 = MSG_ReadBit(msg);
  OnlineTournament_SetPartyHostIsQueuedForTournament(v15 != 0);
  if ( v15 )
  {
    v16 = MSG_ReadLong(msg);
    OnlineTournament_SetMyTournamentTime(v16);
  }
  party->chosenToShowSurvey = MSG_ReadBit(msg) != 0;
  if ( MSG_ReadBit(msg) )
  {
    v17 = MSG_ReadLong(msg);
    if ( v17 != GameBattles_GetCurrentMatchId() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 965, ASSERT_TYPE_ASSERT, "(gamebattleMatchId == GameBattles_GetCurrentMatchId())", (const char *)&queryFormat, "gamebattleMatchId == GameBattles_GetCurrentMatchId()") )
      __debugbreak();
    party->gamebattleMatchId = v17;
    GameBattles_SetCurrentMatchId(v17);
    if ( GameBattles_IsGameBattleActive() )
    {
      Xuid = Live_GetXuid(&result, mainActiveClient->localControllerIndex);
      if ( GameBattles_IsPlayerWhitelisted(Xuid) )
        GameBattles_GetCurrentMatchSchedule(mainActiveClient->localControllerIndex);
    }
    v19 = MSG_ReadLong(msg);
    GameBattles_SetCompletedGameFlags(mainActiveClient->localControllerIndex, v19);
    v20 = MSG_ReadLong(msg);
    GameBattles_SetWonByHomeGameFlags(mainActiveClient->localControllerIndex, v20);
  }
  else
  {
    party->gamebattleMatchId = 0;
    GameBattles_SetCurrentMatchId(0);
  }
  if ( MSG_ReadBit(msg) )
    PrivateMatchId::DeserializeFromMsg(&party->privateMatchId, msg);
  v21 = GameStateInfo_Get();
  v22 = Party_IsGameLobby(party) && record->inPrivateMatch;
  v23 = !Party_IsGameLobby(party) && record->isSystemLinkMatch;
  if ( v22 || v23 )
  {
    v104 = 1;
    v21->usingRecipe = MSG_ReadBit(msg) != 0;
    v24 = MSG_ReadBit(msg) != 0;
  }
  else
  {
    v104 = 0;
    v24 = 0;
    v21->usingRecipe = 0;
  }
  v21->usingIntermission = v24;
  record->usingRecipe = v21->usingRecipe;
  Byte = MSG_ReadByte(msg);
  v21->usingBotsConnectType = truncate_cast<unsigned char,int>(Byte);
  v26 = MSG_ReadByte(msg);
  v21->usingBotsDifficulty[0] = truncate_cast<unsigned char,int>(v26);
  v27 = MSG_ReadByte(msg);
  v21->usingBotsDifficulty[1] = truncate_cast<unsigned char,int>(v27);
  v28 = MSG_ReadByte(msg);
  v21->usingBotsTeamLimit[0] = truncate_cast<unsigned char,int>(v28);
  v29 = MSG_ReadByte(msg);
  v21->usingBotsTeamLimit[1] = truncate_cast<unsigned char,int>(v29);
  v30 = MSG_ReadByte(msg);
  v21->agentMaxCount = truncate_cast<unsigned char,int>(v30);
  v31 = MSG_ReadByte(msg);
  Dvar_SetInt_Internal(DVARINT_com_maxStreamedBodiesMp, v31);
  v32 = MSG_ReadByte(msg);
  Dvar_SetInt_Internal(DVARINT_com_maxStreamedHeadsMp, v32);
  v33 = MSG_ReadByte(msg);
  Dvar_SetInt_Internal(DVARINT_com_maxStreamedViewArmsMp, v33);
  v34 = MSG_ReadByte(msg);
  Dvar_SetInt_Internal(DVARINT_com_maxStreamedWeaponsMp, v34);
  v35 = MSG_ReadByte(msg);
  Dvar_SetInt_Internal(DVARINT_com_maxStreamedViewWeaponsMp, v35);
  v36 = MSG_ReadByte(msg);
  Dvar_SetInt_Internal(DVARINT_com_maxStreamedClientModelsMp, v36);
  v37 = MSG_ReadByte(msg);
  Dvar_SetInt_Internal(DVARINT_com_maxStreamedBodiesCp, v37);
  v38 = MSG_ReadByte(msg);
  Dvar_SetInt_Internal(DVARINT_com_maxStreamedHeadsCp, v38);
  v39 = MSG_ReadByte(msg);
  Dvar_SetInt_Internal(DVARINT_com_maxStreamedViewArmsCp, v39);
  v40 = MSG_ReadByte(msg);
  Dvar_SetInt_Internal(DVARINT_com_maxStreamedWeaponsCp, v40);
  v41 = MSG_ReadByte(msg);
  Dvar_SetInt_Internal(DVARINT_com_maxStreamedViewWeaponsCp, v41);
  v42 = MSG_ReadByte(msg);
  Dvar_SetInt_Internal(DVARINT_com_maxStreamedClientModelsCp, v42);
  v43 = MSG_ReadLong(msg);
  if ( (v43 & 1) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 1035, ASSERT_TYPE_ASSERT, "(!( sessionFlags & 0x00000001 ))", (const char *)&queryFormat, "!( sessionFlags & XSESSION_CREATE_HOST )") )
    __debugbreak();
  if ( (v43 & 0x10) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 1037, ASSERT_TYPE_ASSERT, "(!(sessionFlags & 0x00000010))", (const char *)&queryFormat, "!(sessionFlags & XSESSION_CREATE_USES_ARBITRATION)") )
    __debugbreak();
  if ( (v43 & 8) != 0 && !Party_IsGameLobby(party) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 1040, ASSERT_TYPE_ASSERT, "(!(sessionFlags & 0x00000008) || Party_IsGameLobby( party ))", (const char *)&queryFormat, "!(sessionFlags & XSESSION_CREATE_USES_MATCHMAKING) || Party_IsGameLobby( party )") )
    __debugbreak();
  lobbyFlags = party->lobbyFlags;
  v45 = MSG_ReadLong(msg);
  if ( msg->overflowed )
  {
    OnlineErrorManager::SetLastRecordedErrorCode(&g_onlineMgr.m_errorManager, (Online_Error_CAT_PARTY_t)4096, NULL);
    v46 = DVARBOOL_online_should_com_error_on_party_state_parsing_failures;
    if ( !DVARBOOL_online_should_com_error_on_party_state_parsing_failures && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "online_should_com_error_on_party_state_parsing_failures") )
      __debugbreak();
LABEL_60:
    Dvar_CheckFrontendServerThread(v46);
    v10 = !v46->current.enabled;
LABEL_138:
    if ( !v10 )
      Live_ThrowError(ERR_DROP, "PartyStateParseError -> Please generate a dump and attach to JIRA - IWH-115809");
    return 0;
  }
  party->lobbyFlags = v45;
  if ( Party_IsGameLobby(party) && (lobbyFlags & 2) != 0 && (party->lobbyFlags & 2) == 0 )
    Party_RandomizeParty(party);
  LODWORD(result.m_id) = Sys_Milliseconds();
  m_id = result.m_id;
  v48 = MSG_ReadLong(msg);
  if ( v48 )
    v49 = m_id + v48;
  else
    v49 = 0;
  party->gameStartTime = v49;
  v50 = MSG_ReadLong(msg);
  if ( v50 )
    v51 = m_id + v50;
  else
    v51 = 0;
  party->interEndTime = v51;
  v52 = MSG_ReadByte(msg);
  v105 = v52;
  v53 = v52;
  if ( v52 > 200 )
  {
    LODWORD(v100) = v52;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 1078, ASSERT_TYPE_ASSERT, "(numSlots <= 200)", "%s\n\tslots = %i", "numSlots <= MAX_PARTY_MEMBERS", v100) )
      __debugbreak();
  }
  Short = MSG_ReadShort(msg);
  hostNum = (unsigned int)party->currentHost.hostNum;
  v56 = Short;
  if ( Short != (_DWORD)hostNum )
  {
    LODWORD(fmt) = Short;
    Com_Printf(14, "[%s] Changing currentHost.hostNum from %i to %i\n", party->partyName, hostNum, fmt);
    party->currentHost.hostNum = v56;
  }
  Bits = MSG_ReadBits(msg, 2u);
  v58 = truncate_cast<int,__int64>(Bits);
  v59 = v58;
  if ( party->migrateData.migrateActive && party->migrateData.indexBits != v58 )
    PartyMigrate_StopMigration(party);
  indexBits = (unsigned int)party->migrateData.indexBits;
  if ( (_DWORD)indexBits != v59 )
    Com_Printf(25, "[%s] Setting migration indexBits to %i\n", party->partyName, indexBits);
  party->migrateData.indexBits = v59;
  if ( Party_IsPrivateParty(party) )
  {
    v61 = MSG_ReadBits(msg, 8u);
    party->hostPresenceIndex = truncate_cast<int,__int64>(v61);
  }
  else
  {
    MSG_ReadData(msg, 32, &party->backedOutMemberBits, 32);
  }
  party->voting.votePassed = MSG_ReadBit(msg) != 0;
  v62 = MSG_ReadLong(msg);
  if ( v62 )
    v63 = LODWORD(result.m_id) + v62;
  else
    v63 = 0;
  party->voting.voteEndTime = v63;
  MSG_ReadData(msg, 8, &party->lobbySteamID, 8);
  if ( msg->overflowed )
  {
    OnlineErrorManager::SetLastRecordedErrorCode(&g_onlineMgr.m_errorManager, (Online_Error_CAT_PARTY_t)0x2000, NULL);
    v46 = DVARBOOL_online_should_com_error_on_party_state_parsing_failures;
    if ( !DVARBOOL_online_should_com_error_on_party_state_parsing_failures && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "online_should_com_error_on_party_state_parsing_failures") )
      __debugbreak();
    goto LABEL_60;
  }
  if ( Party_IsGameLobby(party) || record->isSystemLinkMatch )
  {
    Party_ResetTweakDvars();
    if ( record->inPrivateMatch || record->isSystemLinkMatch )
    {
      v82 = MSG_ReadString(msg, string, 0x400u);
      Dvar_SetString_Internal(DVARSTR_ui_mapname, v82);
      v83 = MSG_ReadString(msg, string, 0x400u);
      Dvar_SetString_Internal(DVARSTR_ui_gametype, v83);
      v84 = MSG_ReadBit(msg);
      Dvar_SetBool_Internal(DVARBOOL_ui_hardcore, v84 != 0);
      v85 = MSG_ReadBit(msg);
      Dvar_SetBool_Internal(DVARBOOL_ui_tactical, v85 != 0);
      v86 = MSG_ReadBit(msg);
      Party_SetCodcastingEnabled(party, v86 != 0);
      v87 = MSG_ReadBit(msg);
      Party_SetTeamAssignmentEnabled(party, v87 != 0);
      Dvar_SetBool_Internal(DVARBOOL_lobby_team_select, v87 != 0);
      v88 = MSG_ReadByte(msg);
      Party_SetDraftLoadoutTimer(party, v88);
      v89 = MSG_ReadByte(msg);
      Party_SetDraftWeaponTimer(party, v89);
      v90 = MSG_ReadByte(msg);
      Party_SetDraftRigTimer(party, v90);
      if ( MSG_ReadBit(msg) )
      {
        v91 = MSG_ReadByte(msg);
        Party_SetAliensDifficulty(party, v91);
      }
      else
      {
        Party_SetAliensDifficulty(party, 0);
      }
      BG_GameStateInfo_DisableGameLaunchWithBots();
    }
    else
    {
      Party_SetCodcastingEnabled(party, 0);
      Party_SetAliensDifficulty(party, 0);
      Party_SetTeamAssignmentEnabled(party, 0);
      Party_SetDraftLoadoutTimer(party, 75);
      Party_SetDraftWeaponTimer(party, 30);
      Party_SetDraftRigTimer(party, 30);
      if ( party->currentEntry >= 8u )
      {
        LODWORD(v100) = 8;
        LODWORD(v99) = party->currentEntry;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 1223, ASSERT_TYPE_ASSERT, "(unsigned)( party->currentEntry ) < (unsigned)( 8 )", "party->currentEntry doesn't index NUM_LAST_ENTRIES\n\t%i not in [0, %i)", v99, v100) )
          __debugbreak();
      }
      v64 = MSG_ReadByte(msg);
      v65 = MSG_ReadBit(msg);
      if ( v65 )
      {
        value = MSG_ReadByte(msg);
        filters = MSG_ReadInt64(msg);
        high_filters = MSG_ReadInt64(msg);
      }
      if ( msg->overflowed )
      {
        v66 = 0x4000;
LABEL_137:
        OnlineErrorManager::SetLastRecordedErrorCode(&g_onlineMgr.m_errorManager, v66, NULL);
        v10 = !Dvar_GetBool_Internal_DebugName(DVARBOOL_online_should_com_error_on_party_state_parsing_failures, "online_should_com_error_on_party_state_parsing_failures");
        goto LABEL_138;
      }
      Live_SetPlaylistNum(mainActiveClient->localControllerIndex, v64);
      if ( v65 )
      {
        Int_Internal_DebugName = Dvar_GetInt_Internal_DebugName(DVARINT_playlistCategory, "playlistCategory");
        Playlist_GetFiltersForCategory(mainActiveClient->localClientNum, Int_Internal_DebugName, &filter_out, &high_filter_out);
        Dvar_SetInt_Internal(DVARINT_playlistCategory, value);
        Playlist_SetFiltersForCategory((const LocalClientNum_t)mainActiveClient->localClientNum, value, filters, high_filters);
      }
      GamerProfile_SetPlaylistNum(mainActiveClient->localControllerIndex, v64);
      if ( Party_GetSecondaryActiveClient(party, &outPartyActiveClient) )
        GamerProfile_SetPlaylistNum(outPartyActiveClient.localControllerIndex, v64);
      for ( i = 0; i < 8; ++i )
      {
        v69 = (party->currentEntry + i + 1) % 8;
        party->lastEntries[v69] = MSG_ReadByte(msg);
      }
      party->alternateMap = MSG_ReadByte(msg);
      party->randomMap = MSG_ReadByte(msg);
      if ( msg->overflowed )
      {
        v66 = 0x8000;
        goto LABEL_137;
      }
      PlaylistEntry = Party_GetPlaylistEntry(party);
      if ( PlaylistEntry < 0 || (v71 = Dvar_GetInt_Internal_DebugName(DVARINT_playlist, "playlist"), PlaylistEntry >= Playlist_CountEntries(v71)) )
      {
        InstancePtr = Online_ErrorReporting::GetInstancePtr();
        v79 = Dvar_GetInt_Internal_DebugName(DVARINT_playlist, "playlist");
        VersionNumber = Playlist_GetVersionNumber();
        v81 = j_va("version:%d list:%d entry:%d", VersionNumber, v79, (unsigned int)PlaylistEntry);
        Online_ErrorReporting::ReportError(InstancePtr, (Online_Error_CAT_PARTY_t)1024, v81);
        return 0;
      }
      if ( Playlist_CanRunRules() )
        Playlist_RunRules(mainActiveClient->localControllerIndex, PlaylistEntry);
      else
        party->shouldRunPlaylistRules = 1;
      Party_SetupVoteEntries(party->lastEntries[party->currentEntry], party->alternateMap, party->randomMap);
      party->axisWins = MSG_ReadByte(msg);
      party->alliesWins = MSG_ReadByte(msg);
      if ( MSG_ReadBit(msg) )
      {
        BG_GameStateInfo_EnableGameLaunchWithBots();
      }
      else if ( BG_GameStateInfo_BotsCountTowardsGameLaunch() )
      {
        BG_GameStateInfo_DisableGameLaunchWithBots();
      }
      v53 = v105;
    }
  }
  LOBYTE(v4) = MSG_ReadBit(msg) != 0;
  Party_SetUsesMLGRules(party, v4);
  if ( v104 && record->usingRecipe )
  {
    record->fromSnapTime = MSG_ReadLong(msg);
    record->toSnapTime = MSG_ReadLong(msg);
    record->fromSnapChecksum = MSG_ReadLong(msg);
    record->gametypeIndex = MSG_ReadShort(msg);
  }
  v72 = (unsigned __int8)MSG_ReadByte(msg);
  Party_SetUIRoot(party, v72);
  v73 = DVARBOOL_always_set_private_party_ui_root;
  if ( !DVARBOOL_always_set_private_party_ui_root && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "always_set_private_party_ui_root") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v73);
  if ( v73->current.enabled )
    Party_SetUIRoot(&g_partyData, v72);
  v74 = MSG_ReadLong(msg);
  Party_SetMapPackFlags(party, v74);
  MSG_ReadData(msg, 48, buffer, 48);
  XUID::Deserialize(&party->ps4PlatformHostXUID, msg);
  MSG_ReadData(msg, 16, &v114, 16);
  XUID::Deserialize(&party->xb3PlatformHostXUID, msg);
  __asm
  {
    vmovups xmm0, [rsp+538h+var_498]
    vmovdqa [rsp+538h+var_4A8], xmm0
  }
  Party_SetXb3SessionId(party, &v113);
  if ( Party_IsPrivateParty(party) )
    Party_ReadPrivatePartyChatData(party, msg);
  v76 = v43 & 0xFFFFCFFF;
  Party_SetGameFlags(party, v76);
  if ( Party_GetGameFlags(party) != v76 )
  {
    LODWORD(v103) = v76;
    LODWORD(v101) = Party_GetGameFlags(party);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 1386, ASSERT_TYPE_ASSERT, "( Party_GetGameFlags( party ) ) == ( sessionFlags )", "%s == %s\n\t%i, %i", "Party_GetGameFlags( party )", "sessionFlags", v101, v103) )
      __debugbreak();
  }
  if ( !Session_IsValid(party->session) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 1388, ASSERT_TYPE_ASSERT, "(Session_IsValid( party->session ))", (const char *)&queryFormat, "Session_IsValid( party->session )") )
    __debugbreak();
  if ( msg->overflowed )
  {
    v66 = 0x10000;
    goto LABEL_137;
  }
  Party_SetNumGameSlots(party, v53);
  Dvar_SetInt_Internal(DVARINT_party_maxplayers, v53);
  Dvar_SetInt_Internal(DVARINT_ui_maxclients, v53);
  v92 = (unsigned int)MSG_ReadBits(msg, 2u);
  Party_SetPrivacySetting(party, v92);
  party->iscrossplayParty = MSG_ReadBit(msg) != 0;
  v93 = MSG_ReadBit(msg) != 0;
  if ( Dvar_GetInt_Internal_DebugName(DVARINT_online_party_host_crossplay_change_toast_display_mode, "online_party_host_crossplay_change_toast_display_mode") && Dvar_GetBool_Internal_DebugName(DVARBOOL_onlinegame, "onlinegame") && s_haveShownToastAtleastOnceAfterJoin && Party_IsPrivateParty(party) && Party_GetCrossplayEnabled(party) != v93 )
  {
    if ( s_crossplaySettingOfLastWarningToastShown == v93 )
    {
      s_shouldTryShowToastForPartyHostChangingCrossplaySetting = 0;
    }
    else
    {
      s_lastTimeAtWhichHostChangedCrossplaySettings = Sys_Milliseconds();
      s_shouldTryShowToastForPartyHostChangingCrossplaySetting = 1;
    }
  }
  Party_SetCrossplayEnabled(party, v93);
  v94 = MSG_ReadBit(msg);
  LOBYTE(v95) = 4;
  Party_SetPlatformSessionHandledByHost(party, v95, v94 != 0);
  v96 = MSG_ReadBit(msg);
  LOBYTE(v97) = 3;
  Party_SetPlatformSessionHandledByHost(party, v97, v96 != 0);
  party->inviteJoinsDisabledForNoJIP = MSG_ReadBit(msg) != 0;
  party->restrictsF2PUsers = MSG_ReadBit(msg) != 0;
  return 1;
}

/*
==============
PartyClient_ParsePartyStateMsg
==============
*/
void PartyClient_ParsePartyStateMsg(PartyData *party, const PartyActiveClient *mainActiveClient)
{
  XUID *p_playerList; 
  __int64 v5; 
  unsigned __int8 *m_ptr; 
  unsigned int AvailablePartyMemberList; 
  unsigned int v8; 
  bitarray<256> *p_backedOutMemberBits; 
  signed int MemberByXUID_AllowNotPresent; 
  __int64 disconnectReason; 
  XUID result; 
  msg_t buf; 
  __int64 v14; 
  Mem_LargeLocal v15; 
  Mem_LargeLocal v16; 
  msg_t msg; 
  PartyStateReadRecord record; 
  XUID playerList; 

  v14 = -2i64;
  p_playerList = &playerList;
  v5 = 200i64;
  do
  {
    XUID::XUID(p_playerList++);
    --v5;
  }
  while ( v5 );
  Mem_LargeLocal::Mem_LargeLocal(&v16, 0x243D8ui64, "msg_buf_t partyMsgBuf");
  m_ptr = (unsigned __int8 *)v16.m_ptr;
  Mem_LargeLocal::Mem_LargeLocal(&v15, 0x243D8ui64, "msg_buf_t decompressedPartyMsgBuf");
  MSG_Init(&buf, (unsigned __int8 *)v15.m_ptr, 148440);
  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 3701, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( !party->inParty && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 3702, ASSERT_TYPE_ASSERT, "(party->inParty)", (const char *)&queryFormat, "party->inParty") )
    __debugbreak();
  if ( party->areWeHost && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 3703, ASSERT_TYPE_ASSERT, "(!party->areWeHost)", (const char *)&queryFormat, "!party->areWeHost") )
    __debugbreak();
  if ( !mainActiveClient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 3704, ASSERT_TYPE_ASSERT, "(mainActiveClient)", (const char *)&queryFormat, "mainActiveClient") )
    __debugbreak();
  if ( !PartyClient_HaveAllPacketsForPartyState(&party->partyStateData) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 3705, ASSERT_TYPE_ASSERT, "(PartyClient_HaveAllPacketsForPartyState( &party->partyStateData ))", (const char *)&queryFormat, "PartyClient_HaveAllPacketsForPartyState( &party->partyStateData )") )
    __debugbreak();
  if ( PartyAtomic_IsJoiningActiveForSpecificParty(&g_partyJoinInfo, party) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 3706, ASSERT_TYPE_ASSERT, "(!PartyAtomic_IsJoiningActiveForSpecificParty( &g_partyJoinInfo, party ))", "%s\n\tWe're joining a party and yet our ac", "!PartyAtomic_IsJoiningActiveForSpecificParty( &g_partyJoinInfo, party )") )
    __debugbreak();
  record.lastMemberIndex = -1;
  memset(&record.membersParsed, 0, 44);
  AvailablePartyMemberList = PartyClient_GetAvailablePartyMemberList(party, &playerList, 0xC8u);
  if ( (unsigned int)(party->partyStateData.packetCount - 1) > 0x1E )
  {
    LODWORD(disconnectReason) = party->partyStateData.packetCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 3718, ASSERT_TYPE_ASSERT, "( 1 ) <= ( party->partyStateData.packetCount ) && ( party->partyStateData.packetCount ) <= ( ( 31 ) )", "party->partyStateData.packetCount not in [1, MAX_PARTYSTATE_PACKETS]\n\t%i not in [%i, %i]", disconnectReason, 1, 31) )
      __debugbreak();
  }
  PartyClient_AccumulateMessageParts(party, m_ptr, &msg);
  if ( msg.overflowed )
  {
    Com_PrintError(25, "PartyClient - ParsePartyStateMsg - Message overflow: message size %d bytes, max size %d bytes\n", (unsigned int)msg.cursize, (unsigned int)msg.maxsize);
    OnlineErrorManager::SetLastRecordedErrorCode(&g_onlineMgr.m_errorManager, (Online_Error_CAT_PARTY_t)512, NULL);
    LOBYTE(disconnectReason) = 15;
    PartyClient_DisconnectFromHostInternal(party, mainActiveClient, "@EXE/TRANSMITERROR", 1, 1, (const PartyDisconnectReason)disconnectReason, JOINRESPONSE_NONE);
  }
  else
  {
    MSG_BeginReading(&msg);
    if ( Party_DecompressMessage(party, &msg, &buf) )
    {
      MSG_BeginReading(&buf);
      if ( PartyClient_ParsePartyStateHeaderData(party, mainActiveClient, &buf, &record) )
      {
        if ( Party_IsPrivateParty(party) || !g_partyData.inParty || g_partyData.areWeHost )
          goto LABEL_39;
        if ( g_partyData.backingOut && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 3592, ASSERT_TYPE_ASSERT, "(!g_partyData.backingOut)", (const char *)&queryFormat, "!g_partyData.backingOut") )
          __debugbreak();
        v8 = 0;
        p_backedOutMemberBits = &party->backedOutMemberBits;
        while ( !p_backedOutMemberBits->array[0] )
        {
          ++v8;
          p_backedOutMemberBits = (bitarray<256> *)((char *)p_backedOutMemberBits + 4);
          if ( v8 >= 8 )
            goto LABEL_39;
        }
        if ( Party_IsHostDataAvailable(&g_partyData) && (Party_GetHostXuid(&result, &g_partyData), MemberByXUID_AllowNotPresent = Party_FindMemberByXUID_AllowNotPresent(party, result), MemberByXUID_AllowNotPresent >= 0) && bitarray_base<bitarray<256>>::testBit(&party->backedOutMemberBits, MemberByXUID_AllowNotPresent) )
        {
          Com_Printf(25, "PartyClient - VerifyPartyMemberList - We received notice from the lobby host that our party host backed out, we should back out too\n");
          Party_Backout(mainActiveClient);
        }
        else
        {
LABEL_39:
          if ( (unsigned int)PartyClient_ParseMemberListFromPacket(party, mainActiveClient, 0, &buf, &record) )
          {
            BG_GameStateInfo_ReadBotData(&buf);
            PartyClient_ParseMatchRulesFromPacket(party, mainActiveClient, 0, &buf, &record);
            PartyClient_VerifyPartyMemberList(party, mainActiveClient, &playerList, AvailablePartyMemberList);
            PartyClient_DoneParsingPartyState(party, mainActiveClient, &record.membersParsedMask);
            if ( !Party_IsHostPresent(party) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 3785, ASSERT_TYPE_ASSERT, "(Party_IsHostPresent( party ))", "%s\n\tAfter parsing the party state, the host was not present", "Party_IsHostPresent( party )") )
              __debugbreak();
          }
          else
          {
            Com_PrintError(25, "PartyClient - ParsePartyStateMsg - Error parsing single buffer party state packet, disconnecting from host\n");
            OnlineErrorManager::SetLastRecordedErrorCode(&g_onlineMgr.m_errorManager, (Online_Error_CAT_PARTY_t)0x100000, NULL);
            LOBYTE(disconnectReason) = 18;
            PartyClient_DisconnectFromHostInternal(party, mainActiveClient, "@EXE/TRANSMITERROR", 1, 1, (const PartyDisconnectReason)disconnectReason, JOINRESPONSE_NONE);
          }
        }
      }
      else
      {
        Com_PrintError(25, "PartyClient - ParsePartyStateMsg - Error parsing party state header, disconnecting from host\n");
        LOBYTE(disconnectReason) = 17;
        PartyClient_DisconnectFromHostInternal(party, mainActiveClient, "@EXE/TRANSMITERROR", 1, 1, (const PartyDisconnectReason)disconnectReason, JOINRESPONSE_NONE);
      }
    }
    else
    {
      Com_PrintError(25, "PartyClient - ParsePartyStateMsg - Error decompressing party message, disconnecting from host: overflow %d, cursize %d\n", (unsigned int)buf.overflowed, (unsigned int)buf.cursize);
      OnlineErrorManager::SetLastRecordedErrorCode(&g_onlineMgr.m_errorManager, (Online_Error_CAT_PARTY_t)0x40000, NULL);
      LOBYTE(disconnectReason) = 16;
      PartyClient_DisconnectFromHostInternal(party, mainActiveClient, "@EXE/TRANSMITERROR", 1, 1, (const PartyDisconnectReason)disconnectReason, JOINRESPONSE_NONE);
    }
  }
  Mem_LargeLocal::~Mem_LargeLocal(&v15);
  Mem_LargeLocal::~Mem_LargeLocal(&v16);
}

/*
==============
PartyClient_PreParsePartyState
==============
*/
void PartyClient_PreParsePartyState(PartyStateData *partyStateData, msg_t *msg)
{
  int Long; 
  __int64 Bits; 
  __int64 v6; 
  __int64 v7; 
  int v8; 
  int v9; 
  int cursize; 
  unsigned __int8 *data; 
  unsigned __int8 *v12; 
  __int64 v17; 
  __int64 v18; 

  _RSI = msg;
  _R14 = partyStateData;
  if ( !partyStateData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 2001, ASSERT_TYPE_ASSERT, "(partyStateData)", (const char *)&queryFormat, "partyStateData") )
    __debugbreak();
  Long = MSG_ReadLong(_RSI);
  Bits = MSG_ReadBits(_RSI, 5u);
  v6 = truncate_cast<int,__int64>(Bits);
  v7 = MSG_ReadBits(_RSI, 5u);
  v8 = truncate_cast<int,__int64>(v7);
  v9 = v8;
  if ( v8 > 31 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 2008, ASSERT_TYPE_ASSERT, "(totalPackets <= ( 31 ))", "%s\n\tPartyState packet part %i says that there are %i packets for this partyState, but that's impossible!", "totalPackets <= MAX_PARTYSTATE_PACKETS", v6, v8) )
    __debugbreak();
  if ( (unsigned int)v6 > 0x1E )
  {
    LODWORD(v17) = v6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 2009, ASSERT_TYPE_ASSERT, "(partNum >= 0 && partNum < ( 31 ))", "%s\n\tinvalid partystate portion - claims to be part %i", "partNum >= 0 && partNum < MAX_PARTYSTATE_PACKETS", v17) )
      __debugbreak();
  }
  if ( _RSI->cursize >= 1252 )
  {
    LODWORD(v18) = v6;
    LODWORD(v17) = _RSI->cursize;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 2010, ASSERT_TYPE_ASSERT, "(msg->cursize < static_cast<int>( sizeof( partyStateData->partMsgBufs[partNum] ) ))", "%s\n\tReceived a %i byte partyState part %i message", "msg->cursize < static_cast<int>( sizeof( partyStateData->partMsgBufs[partNum] ) )", v17, v18) )
      __debugbreak();
  }
  if ( _RSI->readcount != 22 )
  {
    LODWORD(v18) = _RSI->readcount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 2011, ASSERT_TYPE_ASSERT, "( msg->readcount ) == ( ( ( 18 ) + 4 ) )", "%s == %s\n\t%i, %i", "msg->readcount", "PARTYSTATE_OOB_READ_HEADER_SIZE", v18, 22) )
      __debugbreak();
  }
  _R14->unfinishedPartServerTimes[v6] = Long;
  _R14->packetCount = v9;
  cursize = _RSI->cursize;
  data = _RSI->data;
  _RSI->bit = 8 * _RSI->readcount;
  if ( cursize > 1252 )
    cursize = 1252;
  v12 = _R14->partMsgBufs[v6];
  memcpy_0(v12, data, cursize);
  __asm { vmovups ymm0, ymmword ptr [rsi] }
  _RAX = v6;
  __asm
  {
    vmovups ymmword ptr [rax+r14+80h], ymm0
    vmovups xmm1, xmmword ptr [rsi+20h]
    vmovups xmmword ptr [rax+r14+0A0h], xmm1
    vmovsd  xmm0, qword ptr [rsi+30h]
    vmovsd  qword ptr [rax+r14+0B0h], xmm0
  }
  _R14->partMsgs[_RAX].data = v12;
  _R14->partMsgs[_RAX].maxsize = 1252;
}

/*
==============
PartyClient_ProcessGoRequest
==============
*/
char PartyClient_ProcessGoRequest(PartyData *party, const PartyActiveClient *mainActiveClient, const int now)
{
  const char *v6; 
  const char *MapName; 
  const char *Gametype; 
  lua_State *v10; 
  LocalClientNum_t ClientFromController; 
  int v12; 
  char *fmt; 
  int LocalClientActiveCount; 

  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 4283, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( !party->inParty && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 4284, ASSERT_TYPE_ASSERT, "(party->inParty)", (const char *)&queryFormat, "party->inParty") )
    __debugbreak();
  if ( party->areWeHost && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 4285, ASSERT_TYPE_ASSERT, "(!party->areWeHost)", (const char *)&queryFormat, "!party->areWeHost") )
    __debugbreak();
  if ( party->specificData.clientData.m_receivedGoMessage )
  {
    if ( !Session_IsValid(party->session) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 4300, ASSERT_TYPE_ASSERT, "(Session_IsValid( party->session ))", "%s\n\tWe don't know the host's address. Should be validated before accepting the go message", "Session_IsValid( party->session )") )
      __debugbreak();
    if ( !XSESSION_INFO::IsValidSessionId(&party->session->dyn.sessionInfo) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 4301, ASSERT_TYPE_ASSERT, "(party->session->dyn.sessionInfo.IsValidSessionId())", (const char *)&queryFormat, "party->session->dyn.sessionInfo.IsValidSessionId()") )
      __debugbreak();
    MapName = Party_GetMapName();
    Gametype = Party_GetGametype();
    if ( PartyClient_CheckPreloadComplete(party, MapName, 1) )
    {
      if ( party->specificData.hostData.matchRulesChangeTime <= now )
      {
        PartyClient_ClearPartyGo(party);
        Party_ClearGameLobbyId(party);
        v10 = LUI_luaVM;
        ClientFromController = CL_Mgr_GetClientFromController(mainActiveClient->localControllerIndex);
        if ( LUI_BeginEvent(ClientFromController, "lui_game_start_notify", v10) )
        {
          LUI_SetTableBool("immediate", 1, LUI_luaVM);
          LUI_EndEvent(LUI_luaVM);
        }
        Online_Telemetry_SendStartMatchEvent(mainActiveClient->localControllerIndex);
        if ( party->splitscreenData.otherClientActive )
          Online_Telemetry_SendStartMatchEvent(party->splitscreenData.otherClient.localControllerIndex);
        Com_FrontEndScene_OnMatchStartRequest();
        if ( CL_AllLocalClientsInactive() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 4344, ASSERT_TYPE_ASSERT, "(!CL_AllLocalClientsInactive())", (const char *)&queryFormat, "!CL_AllLocalClientsInactive()") )
          __debugbreak();
        CL_MainMP_ConnectAndPreloadMap(mainActiveClient->localClientNum, &party->session->dyn.sessionInfo, MapName, Gametype);
        v12 = (party->splitscreenData.otherClientActive != 0) + 1;
        if ( CL_GetLocalClientActiveCount() != v12 )
        {
          LocalClientActiveCount = CL_GetLocalClientActiveCount();
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 4355, ASSERT_TYPE_ASSERT, "( CL_GetLocalClientActiveCount() ) == ( expectedPlayerCount )", "%s == %s\n\t%i, %i", "CL_GetLocalClientActiveCount()", "expectedPlayerCount", LocalClientActiveCount, v12) )
            __debugbreak();
        }
        Party_SleepForMatch(party);
        return 1;
      }
      else
      {
        if ( nextPrintTime_6 < Sys_Milliseconds() )
        {
          LODWORD(fmt) = now;
          Com_Printf(25, "[%s] waiting to get to preload start time (%i) as it's later than now (%i) before connecting to host\n", party->partyName, (unsigned int)party->specificData.hostData.matchRulesChangeTime, fmt);
          nextPrintTime_6 = Sys_Milliseconds() + 1000;
        }
        party->currentHost.lastPacketTime = Sys_Milliseconds();
        return 0;
      }
    }
    else
    {
      if ( nextPrintTime_5 < Sys_Milliseconds() )
      {
        Com_Printf(25, "[%s] waiting for preload to complete before connecting to host\n", party->partyName);
        nextPrintTime_5 = Sys_Milliseconds() + 1000;
      }
      PartyClient_UpdateGameStartTimeOverride(party, now);
      party->currentHost.lastPacketTime = Sys_Milliseconds();
      return 0;
    }
  }
  else
  {
    if ( party->gameStartTime )
    {
      v6 = Party_GetMapName();
      if ( !Com_FastFile_IsLevelPreloadComplete(v6) || !PartyClient_IsStreamingPreloadComplete(party) )
        PartyClient_UpdateGameStartTimeOverride(party, now);
    }
    return 0;
  }
}

/*
==============
PartyClient_RegisterPlayer
==============
*/
void PartyClient_RegisterPlayer(PartyData *party, const int localControllerIndex, const int clientNum, const XNADDR *xnaddr, const netsrc_t netId)
{
  __int64 v6; 
  LocalClientNum_t ClientFromController; 
  NetConnection *HostConnection; 
  NetConnection::Type type; 
  SessionData *session; 
  netsrc_t LocalNetIDFromControllerIndex; 

  v6 = clientNum;
  ClientFromController = CL_Mgr_GetClientFromController(localControllerIndex);
  HostConnection = Party_GetHostConnection(party, ClientFromController);
  if ( NetConnection::CompareAddr(HostConnection, xnaddr) || Party_IsMemberLocalPlayer(party, v6) || PeerMesh_IsEnabled(party) )
  {
    type = Party_GetConnectionType(party);
    if ( XNADDR::IsNull((XNADDR *)xnaddr) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 222, ASSERT_TYPE_ASSERT, "(!xnaddr.IsNull())", "%s\n\tNull xnaddr - most likely peer mesh mismatch", "!xnaddr.IsNull()") )
      __debugbreak();
    NetConnection::Close(&party->partyMembers[v6].connection, NET_CLOSE_SOFT);
    session = party->session;
    LocalNetIDFromControllerIndex = NET_GetLocalNetIDFromControllerIndex(localControllerIndex);
    NetConnection::Open(&party->partyMembers[v6].connection, LocalNetIDFromControllerIndex, &session->dyn.sessionInfo, xnaddr, netId, type);
  }
  Party_RegisterPlayer(party, localControllerIndex, v6, xnaddr);
}

/*
==============
PartyClient_RemoveAllPartyMembersAtSlotAddress
==============
*/
void PartyClient_RemoveAllPartyMembersAtSlotAddress(PartyData *party, unsigned int slot)
{
  __int64 v2; 
  unsigned int i; 
  const char *v5; 
  char *v6; 
  int IsMemberDataAvailable; 
  int v8; 
  const char *v9; 
  const char *v10; 
  const char *MemberName; 
  const char *v12; 
  int ControllerFromClient; 
  Online_InvitationManager *Instance; 
  char *fmt; 
  __int64 v16; 
  __int64 v17; 

  v2 = (int)slot;
  if ( slot >= 0xC8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 318, ASSERT_TYPE_ASSERT, "(unsigned)( slot ) < (unsigned)( 200 )", "slot doesn't index MAX_PARTY_MEMBERS\n\t%i not in [0, %i)", slot, 200) )
    __debugbreak();
  if ( !Party_IsMemberRegistered(party, v2) )
  {
    PartyClient_RemovePartyMember(party, v2);
    return;
  }
  for ( i = 0; i < 0xC8; ++i )
  {
    if ( i != (_DWORD)v2 && Party_IsMemberRegistered(party, i) && Party_CompareMemberAddrs(party, v2, i) )
      PartyClient_RemovePartyMember(party, i);
  }
  v5 = "party";
  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 235, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( !party->inParty && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 236, ASSERT_TYPE_ASSERT, "(party->inParty)", (const char *)&queryFormat, "party->inParty") )
    __debugbreak();
  if ( party->areWeHost && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 237, ASSERT_TYPE_ASSERT, "(!party->areWeHost)", (const char *)&queryFormat, "!party->areWeHost") )
    __debugbreak();
  if ( (unsigned int)v2 > 0xC7 )
  {
    LODWORD(v16) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 239, ASSERT_TYPE_ASSERT, "( ( slot >= 0 && slot < 200 ) )", "( slot ) = %i", v16) )
      __debugbreak();
  }
  v6 = (char *)party + 504 * v2;
  if ( v6[2602] )
  {
    IsMemberDataAvailable = Party_IsMemberDataAvailable((const PartyMember *)(v6 + 2192));
    v8 = (unsigned __int8)v6[2602];
    if ( IsMemberDataAvailable )
    {
      v9 = XUID::ToDevString((XUID *)v6 + 326);
      LODWORD(v17) = v8;
      Com_Printf(25, "[%s] Removing member at index %i (%s, %s) with status %i.\n", party->partyName, (unsigned int)v2, v9, v6 + 2244, v17);
    }
    else
    {
      LODWORD(fmt) = (unsigned __int8)v6[2602];
      Com_Printf(25, "[%s] Removing member at index %i with status %i.\n", party->partyName, (unsigned int)v2, fmt);
    }
  }
  if ( Party_IsHost(party, v2) )
  {
    party->backingOut = 0;
    if ( v6[2602] )
    {
      v10 = "party";
      if ( Party_IsGameLobby(party) )
        v10 = "lobby";
      MemberName = Party_GetMemberName(party, v2);
      Com_PrintWarning(25, "[%s] Removing %s, the host of our %s!\n", party->partyName, MemberName, v10);
    }
  }
  if ( Party_IsMemberPresent(party, v2) )
  {
    if ( Party_IsGameLobby(party) )
      v5 = "lobby";
    v12 = Party_GetMemberName(party, v2);
    Com_Printf(25, "[%s] Removing '%s' from %s because they appear to have dropped out\n", party->partyName, v12, v5);
    if ( party->migrateData.migrateActive && party->migrateData.weAreArbitrating && party->migrateData.bestHost.nominee == (_DWORD)v2 )
      PartyMigrate_ClearMemberData(party, v2);
    if ( Party_InParty(party) )
    {
      Party_PlayPlayerLeaveSound(party, LOCAL_CLIENT_0);
      if ( Party_IsGameLobby(party) )
      {
        if ( Party_FindMemberByXUID(&g_partyData, *(const XUID *)(v6 + 2608)) >= 0 )
          goto LABEL_45;
      }
      else if ( Party_IsPrivateParty(party) )
      {
LABEL_45:
        ControllerFromClient = CL_Mgr_GetControllerFromClient(LOCAL_CLIENT_0);
        Instance = Online_InvitationManager::GetInstance();
        Online_InvitationManager::OnReceiveMemberLeftParty(Instance, ControllerFromClient, *(const XUID *)(v6 + 2608), v6 + 2244, party->partyId);
      }
    }
  }
  Party_ClearMember(party, v2, NET_CLOSE_SOFT);
}

/*
==============
PartyClient_RemoveHostPrivatePartyMembers
==============
*/
void PartyClient_RemoveHostPrivatePartyMembers(PartyData *party, const PartyActiveClient *mainActiveClient)
{
  unsigned int v4; 
  unsigned int i; 

  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 3196, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( !party->inParty && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 3197, ASSERT_TYPE_ASSERT, "(party->inParty)", (const char *)&queryFormat, "party->inParty") )
    __debugbreak();
  if ( party->areWeHost && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 3198, ASSERT_TYPE_ASSERT, "(!party->areWeHost)", (const char *)&queryFormat, "!party->areWeHost") )
    __debugbreak();
  if ( !mainActiveClient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 3199, ASSERT_TYPE_ASSERT, "(mainActiveClient)", (const char *)&queryFormat, "mainActiveClient") )
    __debugbreak();
  if ( !Party_IsGameLobby(party) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 3200, ASSERT_TYPE_ASSERT, "(Party_IsGameLobby( party ))", "%s\n\tWould not make sense to remove party members in a party", "Party_IsGameLobby( party )") )
    __debugbreak();
  if ( Com_FrontEnd_IsInFrontEnd() )
  {
    if ( !Party_IsHostDataAvailable(party) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 3209, ASSERT_TYPE_ASSERT, "(Party_IsHostDataAvailable( party ))", (const char *)&queryFormat, "Party_IsHostDataAvailable( party )") )
      __debugbreak();
    v4 = 0;
    for ( i = 0; i < 0xC8; ++i )
    {
      if ( Party_IsMemberIndexDataAvailable(party, i) && !Party_MemberHasHostAddress(party, i) && Party_MemberIsInHostPrivateParty(party, i) )
        PartyClient_RemovePartyMember(party, i);
    }
    if ( !Party_IsHostDataAvailable(party) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 3224, ASSERT_TYPE_ASSERT, "(Party_IsHostDataAvailable( party ))", (const char *)&queryFormat, "Party_IsHostDataAvailable( party )") )
      __debugbreak();
    do
    {
      if ( Party_IsMemberIndexDataAvailable(party, v4) && Party_MemberHasHostAddress(party, v4) )
        PartyClient_RemovePartyMember(party, v4);
      ++v4;
    }
    while ( v4 < 0xC8 );
    if ( Party_IsHostDataAvailable(party) )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 3235, ASSERT_TYPE_ASSERT, "(!Party_IsHostDataAvailable( party ))", "%s\n\tShould have removed the host", "!Party_IsHostDataAvailable( party )") )
        __debugbreak();
    }
  }
  else
  {
    Com_Printf(25, "PartyClient - RemoveHostPartyMembers - Aborting since we're in-game\n");
  }
}

/*
==============
PartyClient_RemoveLobbyHostFromPrivateParty
==============
*/
void PartyClient_RemoveLobbyHostFromPrivateParty(const PartyActiveClient *mainActiveClient)
{
  XUID outHostXuid; 

  XUID::XUID(&outHostXuid);
  if ( !mainActiveClient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 594, ASSERT_TYPE_ASSERT, "(mainActiveClient)", (const char *)&queryFormat, "mainActiveClient") )
    __debugbreak();
  if ( !g_partyData.inParty && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 595, ASSERT_TYPE_ASSERT, "(g_partyData.inParty)", (const char *)&queryFormat, "g_partyData.inParty") )
    __debugbreak();
  if ( g_partyData.backingOut && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 596, ASSERT_TYPE_ASSERT, "(!g_partyData.backingOut)", (const char *)&queryFormat, "!g_partyData.backingOut") )
    __debugbreak();
  if ( Lobby_GetHostXuid(&outHostXuid) )
    Party_LostPrivatePartyPlayer(mainActiveClient->localControllerIndex, outHostXuid, 0, 1);
}

/*
==============
PartyClient_RemovePartyMember
==============
*/
void PartyClient_RemovePartyMember(PartyData *party, int slot)
{
  __int64 v2; 
  const char *v4; 
  char *v5; 
  int IsMemberDataAvailable; 
  int v7; 
  const char *v8; 
  const char *v9; 
  const char *MemberName; 
  const char *v11; 
  int ControllerFromClient; 
  Online_InvitationManager *Instance; 
  char *fmt; 
  __int64 v15; 

  v2 = slot;
  v4 = "party";
  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 235, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( !party->inParty && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 236, ASSERT_TYPE_ASSERT, "(party->inParty)", (const char *)&queryFormat, "party->inParty") )
    __debugbreak();
  if ( party->areWeHost && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 237, ASSERT_TYPE_ASSERT, "(!party->areWeHost)", (const char *)&queryFormat, "!party->areWeHost") )
    __debugbreak();
  if ( (unsigned int)v2 > 0xC7 )
  {
    LODWORD(v15) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 239, ASSERT_TYPE_ASSERT, "( ( slot >= 0 && slot < 200 ) )", "( slot ) = %i", v15) )
      __debugbreak();
  }
  v5 = (char *)party + 504 * v2;
  if ( v5[2602] )
  {
    IsMemberDataAvailable = Party_IsMemberDataAvailable((const PartyMember *)(v5 + 2192));
    v7 = (unsigned __int8)v5[2602];
    if ( IsMemberDataAvailable )
    {
      v8 = XUID::ToDevString((XUID *)v5 + 326);
      Com_Printf(25, "[%s] Removing member at index %i (%s, %s) with status %i.\n", party->partyName, (unsigned int)v2, v8, v5 + 2244, v7);
    }
    else
    {
      LODWORD(fmt) = (unsigned __int8)v5[2602];
      Com_Printf(25, "[%s] Removing member at index %i with status %i.\n", party->partyName, (unsigned int)v2, fmt);
    }
  }
  if ( Party_IsHost(party, v2) )
  {
    party->backingOut = 0;
    if ( v5[2602] )
    {
      v9 = "party";
      if ( Party_IsGameLobby(party) )
        v9 = "lobby";
      MemberName = Party_GetMemberName(party, v2);
      Com_PrintWarning(25, "[%s] Removing %s, the host of our %s!\n", party->partyName, MemberName, v9);
    }
  }
  if ( Party_IsMemberPresent(party, v2) )
  {
    if ( Party_IsGameLobby(party) )
      v4 = "lobby";
    v11 = Party_GetMemberName(party, v2);
    Com_Printf(25, "[%s] Removing '%s' from %s because they appear to have dropped out\n", party->partyName, v11, v4);
    if ( party->migrateData.migrateActive && party->migrateData.weAreArbitrating && party->migrateData.bestHost.nominee == (_DWORD)v2 )
      PartyMigrate_ClearMemberData(party, v2);
    if ( Party_InParty(party) )
    {
      Party_PlayPlayerLeaveSound(party, LOCAL_CLIENT_0);
      if ( Party_IsGameLobby(party) )
      {
        if ( Party_FindMemberByXUID(&g_partyData, *(const XUID *)(v5 + 2608)) >= 0 )
          goto LABEL_34;
      }
      else if ( Party_IsPrivateParty(party) )
      {
LABEL_34:
        ControllerFromClient = CL_Mgr_GetControllerFromClient(LOCAL_CLIENT_0);
        Instance = Online_InvitationManager::GetInstance();
        Online_InvitationManager::OnReceiveMemberLeftParty(Instance, ControllerFromClient, *(const XUID *)(v5 + 2608), v5 + 2244, party->partyId);
      }
    }
  }
  Party_ClearMember(party, v2, NET_CLOSE_SOFT);
}

/*
==============
PartyClient_ResetMatchmakingTokenForParty
==============
*/
void PartyClient_ResetMatchmakingTokenForParty(const LocalClientNum_t localClientNum, PartyData *party)
{
  __int64 v2; 
  __int64 v4; 

  v2 = localClientNum;
  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 2077, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( !party->inParty && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 2078, ASSERT_TYPE_ASSERT, "(party->inParty)", (const char *)&queryFormat, "party->inParty") )
    __debugbreak();
  if ( party->areWeHost && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 2079, ASSERT_TYPE_ASSERT, "(!party->areWeHost)", (const char *)&queryFormat, "!party->areWeHost") )
    __debugbreak();
  if ( (unsigned int)v2 >= 2 )
  {
    LODWORD(v4) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 2080, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( sizeof( party->specificData.clientData.m_matchmakingTokenSent ) )", "localClientNum doesn't index sizeof( party->specificData.clientData.m_matchmakingTokenSent )\n\t%i not in [0, %i)", v4, 2) )
      __debugbreak();
  }
  party->specificData.clientData.m_matchmakingTokenSent[v2] = 0;
}

/*
==============
PartyClient_ResetPartyState
==============
*/
void PartyClient_ResetPartyState(PartyData *party)
{
  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 2040, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  party->inParty = 1;
  party->areWeHost = 0;
  *(_QWORD *)&party->hostTimeouts = 0i64;
  *(_QWORD *)&party->hostPresenceIndex = 0i64;
  *(_QWORD *)&party->backedOutMemberBits.array[1] = 0i64;
  *(_QWORD *)&party->backedOutMemberBits.array[3] = 0i64;
  *(_QWORD *)&party->backedOutMemberBits.array[5] = 0i64;
  party->backedOutMemberBits.array[7] = 0;
  party->stopAfterRound = 0;
  party->backingOut = 0;
  g_matchRulesSnapshot.curSnapTime = 0;
  g_matchRulesSnapshot.oldSnapTime = 0;
  *(_QWORD *)&party->specificData.hostData.partyStateChangeTime = 0i64;
  *(_QWORD *)party->specificData.clientData.m_matchmakingTokenSent = 0i64;
  *((_QWORD *)&party->specificData.clientData + 2) = 0i64;
  *((_QWORD *)&party->specificData.clientData + 3) = 0i64;
  *((_QWORD *)&party->specificData.clientData + 4) = 0i64;
  *(_QWORD *)&party->createSessionForPartyRequestData.m_pending = 0i64;
  party->createSessionForPartyRequestData.m_taskData.party = NULL;
  *(_QWORD *)&party->createSessionForPartyRequestData.m_taskData.localClientNum = 0i64;
  party->createSessionForPartyRequestData.m_taskData.payload = NULL;
  *(_QWORD *)&party->createSessionForPartyRequestData.m_taskData.payloadSize = 0i64;
  party->createSessionForPartyRequestData.m_completeCallback = NULL;
  Party_SetCrossplayEnabled(party, 0);
}

/*
==============
PartyClient_RespondToCreateSessionRequest
==============
*/
void PartyClient_RespondToCreateSessionRequest(PlatformSessionType sessionType, _GUID *sessionId, bool isSuccess, unsigned int partyVersionNumber)
{
  PartyData *PartyData; 
  __int64 v8; 
  char result; 

  PartyData = NULL;
  if ( sessionType == GAME_LOBBY_SESSION )
  {
    PartyData = Lobby_GetPartyData();
    if ( PartyData )
      goto LABEL_10;
  }
  else
  {
    if ( sessionType == PRIVATE_PARTY_SESSION )
    {
      PartyData = &g_partyData;
      goto LABEL_10;
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 2915, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unhandled platformsessions type") )
      __debugbreak();
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 2918, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
LABEL_10:
  PartyData->createSessionForPartyRequestData.m_pending = 0;
  if ( Party_InParty(PartyData) )
  {
    if ( PartyData->createSessionForPartyRequestData.m_taskData.party )
    {
      v8 = PartyData->partyVersionNumber;
      if ( (_DWORD)v8 == partyVersionNumber )
      {
        PartyData->createSessionForPartyRequestData.m_taskData.result = PARTY_CLIENT_TASK_RESULT_OK;
        result = PartyData->createSessionForPartyRequestData.m_taskData.result;
        if ( !isSuccess )
          result = 2;
        PartyData->createSessionForPartyRequestData.m_taskData.payload = sessionId;
        PartyData->createSessionForPartyRequestData.m_taskData.result = result;
        PartyData->createSessionForPartyRequestData.m_taskData.payloadSize = 16;
        PartyClient_SendClientTaskResponse(PartyData, &PartyData->createSessionForPartyRequestData.m_taskData);
      }
      else
      {
        Com_Printf(25, "PartyClient_RespondToCreateSessionRequest returning because the party version ( %d ) does not match the version of the party that the session was created for ( %d ) \n", v8, partyVersionNumber);
      }
    }
    else
    {
      Com_Printf(25, "PartyClient_RespondToCreateSessionRequest returning because the party pointer in the task is null\n");
    }
  }
  else
  {
    Com_Printf(25, "PartyClient_RespondToCreateSessionRequest returning because we are not in a party\n");
  }
}

/*
==============
PartyClient_RespondToMatchRulesRequest
==============
*/
void PartyClient_RespondToMatchRulesRequest(PartyData *party, PartyClientTaskData *clientTaskData)
{
  PartyData *v3; 
  unsigned int partitionCount; 
  int v5; 
  int v6; 
  const char *v7; 
  int ControllerFromClient; 
  unsigned __int64 UserId; 
  unsigned __int64 CurrentMatchmakingId; 
  XUID *HostXuid; 
  unsigned __int64 UniversalId; 
  unsigned __int64 m_lobbyId; 
  unsigned __int8 partyId; 
  unsigned __int8 ClientPlatform; 
  bool v16; 
  char taskId; 
  unsigned __int8 v18; 
  int v19; 
  int v20; 
  msg_t sb; 
  __int64 v23; 
  XUID result; 
  Mem_LargeLocal v25; 
  Mem_LargeLocal v26; 
  msg_t buf; 
  DLogContext context; 
  char buffer[4096]; 

  v23 = -2i64;
  v3 = party;
  PartyClient_RestoreCachedGameSettingsForDedi(party);
  partitionCount = PartyHost_GetMatchRulesSnapshotDeltaFromDefault()->partitionCount;
  v5 = 1;
  if ( partitionCount > 1 )
    v5 = partitionCount;
  v20 = v5;
  v6 = 0;
  v19 = 0;
  do
  {
    Mem_LargeLocal::Mem_LargeLocal(&v26, 0x243D8ui64, "msg_buf_t msgBuf");
    MSG_Init(&buf, (unsigned __int8 *)v26.m_ptr, 148440);
    BG_CreateGameStateInfoMessage(&buf, v6);
    if ( buf.overflowed )
    {
      clientTaskData->result = PARTY_CLIENT_TASK_RESULT_FAILED;
      Com_PrintError(25, "Match Rules Request response overflowed.\n");
    }
    else
    {
      clientTaskData->result = PARTY_CLIENT_TASK_RESULT_OK;
      clientTaskData->payload = buf.data;
      clientTaskData->payloadSize = buf.cursize;
    }
    if ( Party_AreWeHost(v3) )
    {
      Com_Printf(25, "Ignoring client task response because we are the current host and can't reliably msg ourselves.  A migration probably took place.\n");
    }
    else
    {
      Mem_LargeLocal::Mem_LargeLocal(&v25, 0x243D8ui64, "msg_buf_t msgBuf");
      MSG_Init(&sb, (unsigned __int8 *)v25.m_ptr, 148440);
      v7 = j_va("%ipa_clienttaskresponse", (unsigned int)v3->partyId);
      MSG_WriteString(&sb, v7);
      MSG_WriteBits(&sb, clientTaskData->taskId, 3u);
      MSG_WriteBits(&sb, clientTaskData->result, 2u);
      if ( clientTaskData->result == PARTY_CLIENT_TASK_RESULT_OK )
      {
        MSG_WriteBits(&sb, clientTaskData->payloadSize, 0xBu);
        MSG_WriteData(&sb, clientTaskData->payload, clientTaskData->payloadSize);
      }
      if ( sb.overflowed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 2812, ASSERT_TYPE_ASSERT, "(!MSG_IsOverflowed( &msg ))", (const char *)&queryFormat, "!MSG_IsOverflowed( &msg )") )
        __debugbreak();
      NetConnection::SendReliable(&clientTaskData->party->currentHost.connections[clientTaskData->localClientNum], &sb);
      ControllerFromClient = CL_Mgr_GetControllerFromClient(clientTaskData->localClientNum);
      UserId = DLog_GetUserId(ControllerFromClient);
      if ( Party_IsMatchmakingLobby(v3) )
        CurrentMatchmakingId = OnlineMatchmakerOmniscient::GetCurrentMatchmakingId(&OnlineMatchmakerOmniscient::ms_instance);
      else
        CurrentMatchmakingId = 0i64;
      v18 = clientTaskData->result;
      taskId = clientTaskData->taskId;
      HostXuid = Party_GetHostXuid(&result, v3);
      UniversalId = XUID::GetUniversalId(HostXuid);
      m_lobbyId = v3->m_lobbyId;
      partyId = v3->partyId;
      ClientPlatform = GetClientPlatform();
      if ( DLog_IsActive() && DLog_CreateContext(&context, UserId, buffer, 4096) )
      {
        if ( DLog_IsActive() )
        {
          v16 = DLog_BeginEvent(&context, "dlog_event_clienttask_client_response");
          context.autoEndEvent = 1;
          if ( v16 && DLog_UInt8(&context, "platform", ClientPlatform) && DLog_UInt8(&context, "party_type", partyId) && DLog_UInt64(&context, "lobby_id", m_lobbyId) && DLog_UInt64(&context, "mm_id", CurrentMatchmakingId) && DLog_UInt64(&context, "host_xuid", UniversalId) && DLog_Int8(&context, "task_type", taskId) && DLog_UInt8(&context, "result", v18) )
            DLog_RecordContext(&context);
        }
        else
        {
          context.error = DLOG_ERROR_NOT_ACTIVE;
        }
      }
      Mem_LargeLocal::~Mem_LargeLocal(&v25);
      v6 = v19;
      v3 = party;
    }
    Mem_LargeLocal::~Mem_LargeLocal(&v26);
    v19 = ++v6;
  }
  while ( v6 < v20 );
}

/*
==============
PartyClient_SendClientTaskResponse
==============
*/
void PartyClient_SendClientTaskResponse(const PartyData *party, const PartyClientTaskData *clientTaskData)
{
  const char *v4; 
  int ControllerFromClient; 
  unsigned __int64 UserId; 
  unsigned __int64 CurrentMatchmakingId; 
  unsigned __int8 v8; 
  char taskId; 
  XUID *HostXuid; 
  unsigned __int64 m_lobbyId; 
  unsigned __int8 partyId; 
  unsigned __int8 ClientPlatform; 
  bool v14; 
  unsigned __int64 value; 
  msg_t buf; 
  __int64 v17; 
  XUID result; 
  Mem_LargeLocal v19; 
  DLogContext context; 
  char buffer[4096]; 

  v17 = -2i64;
  if ( Party_AreWeHost(party) )
  {
    Com_Printf(25, "Ignoring client task response because we are the current host and can't reliably msg ourselves.  A migration probably took place.\n");
  }
  else
  {
    Mem_LargeLocal::Mem_LargeLocal(&v19, 0x243D8ui64, "msg_buf_t msgBuf");
    MSG_Init(&buf, (unsigned __int8 *)v19.m_ptr, 148440);
    v4 = j_va("%ipa_clienttaskresponse", (unsigned int)party->partyId);
    MSG_WriteString(&buf, v4);
    MSG_WriteBits(&buf, clientTaskData->taskId, 3u);
    MSG_WriteBits(&buf, clientTaskData->result, 2u);
    if ( clientTaskData->result == PARTY_CLIENT_TASK_RESULT_OK )
    {
      MSG_WriteBits(&buf, clientTaskData->payloadSize, 0xBu);
      MSG_WriteData(&buf, clientTaskData->payload, clientTaskData->payloadSize);
    }
    if ( buf.overflowed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 2812, ASSERT_TYPE_ASSERT, "(!MSG_IsOverflowed( &msg ))", (const char *)&queryFormat, "!MSG_IsOverflowed( &msg )") )
      __debugbreak();
    NetConnection::SendReliable(&clientTaskData->party->currentHost.connections[clientTaskData->localClientNum], &buf);
    ControllerFromClient = CL_Mgr_GetControllerFromClient(clientTaskData->localClientNum);
    UserId = DLog_GetUserId(ControllerFromClient);
    if ( Party_IsMatchmakingLobby(party) )
      CurrentMatchmakingId = OnlineMatchmakerOmniscient::GetCurrentMatchmakingId(&OnlineMatchmakerOmniscient::ms_instance);
    else
      CurrentMatchmakingId = 0i64;
    v8 = clientTaskData->result;
    taskId = clientTaskData->taskId;
    HostXuid = Party_GetHostXuid(&result, party);
    value = XUID::GetUniversalId(HostXuid);
    m_lobbyId = party->m_lobbyId;
    partyId = party->partyId;
    ClientPlatform = GetClientPlatform();
    if ( DLog_IsActive() && DLog_CreateContext(&context, UserId, buffer, 4096) && DLog_IsActive() )
    {
      v14 = DLog_BeginEvent(&context, "dlog_event_clienttask_client_response");
      context.autoEndEvent = 1;
      if ( v14 && DLog_UInt8(&context, "platform", ClientPlatform) && DLog_UInt8(&context, "party_type", partyId) && DLog_UInt64(&context, "lobby_id", m_lobbyId) && DLog_UInt64(&context, "mm_id", CurrentMatchmakingId) && DLog_UInt64(&context, "host_xuid", value) && DLog_Int8(&context, "task_type", taskId) && DLog_UInt8(&context, "result", v8) )
        DLog_RecordContext(&context);
    }
    Mem_LargeLocal::~Mem_LargeLocal(&v19);
  }
}

/*
==============
PartyClient_SendDisconnectMessage
==============
*/
void PartyClient_SendDisconnectMessage(PartyType partyId, NetConnection *connection, const PartyDisconnectReason disconnectReason, const PartyJoinResponse joinResponse)
{
  unsigned __int8 v4; 
  unsigned __int8 v5; 
  unsigned __int8 *m_ptr; 
  LocalClientNum_t LocalClient; 
  int ControllerFromClient; 
  const char *v11; 
  const bdSecurityID *SecurityId; 
  XUID result; 
  __int64 v14; 
  Mem_LargeLocal data; 
  msg_t buf; 

  v14 = -2i64;
  v4 = joinResponse;
  v5 = disconnectReason;
  Mem_LargeLocal::Mem_LargeLocal(&data, 0x9AAui64, "min_msg_buf partyMsgBuf");
  m_ptr = (unsigned __int8 *)data.m_ptr;
  if ( !NetConnection::IsOpened(connection) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 359, ASSERT_TYPE_ASSERT, "(connection->IsOpened())", (const char *)&queryFormat, "connection->IsOpened()") )
    __debugbreak();
  if ( NetConnection::IsLoopback(connection) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 360, ASSERT_TYPE_ASSERT, "(!connection->IsLoopback())", (const char *)&queryFormat, "!connection->IsLoopback()") )
    __debugbreak();
  LocalClient = NetConnection::GetLocalClient(connection);
  ControllerFromClient = CL_Mgr_GetControllerFromClient(LocalClient);
  if ( Live_IsSignedIn(ControllerFromClient) && (Live_IsUserSignedInToLive(ControllerFromClient) || Live_IsInSystemlinkLobby()) )
  {
    Live_GetXuid(&result, ControllerFromClient);
    MSG_Init(&buf, m_ptr, 2474);
    v11 = j_va("%ipa_dis", (unsigned int)partyId);
    MSG_WriteString(&buf, v11);
    XUID::Serialize(&result, &buf);
    SecurityId = NetConnection::GetSecurityId(connection);
    MSG_WriteData(&buf, SecurityId, 8);
    MSG_WriteByte(&buf, v5);
    MSG_WriteByte(&buf, v4);
    NetConnection::SendReliable(connection, &buf, 6u);
  }
  Mem_LargeLocal::~Mem_LargeLocal(&data);
}

/*
==============
PartyClient_SendHeartbeatAck
==============
*/
int PartyClient_SendHeartbeatAck(PartyData *party, const PartyActiveClient *activeClient)
{
  const char *v4; 
  int v5; 
  msg_t buf; 
  PartyProfile_Event outEventInfo; 
  unsigned __int8 data[32]; 

  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 2092, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( !party->inParty && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 2093, ASSERT_TYPE_ASSERT, "(party->inParty)", (const char *)&queryFormat, "party->inParty") )
    __debugbreak();
  if ( party->areWeHost && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 2094, ASSERT_TYPE_ASSERT, "(!party->areWeHost)", (const char *)&queryFormat, "!party->areWeHost") )
    __debugbreak();
  MSG_Init(&buf, data, 32);
  v4 = j_va("%ipha", (unsigned int)party->partyId);
  MSG_WriteString(&buf, v4);
  MSG_WriteLong(&buf, party->lastPartyStateTime);
  if ( buf.overflowed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 2102, ASSERT_TYPE_ASSERT, "(!MSG_IsOverflowed( &msg ))", (const char *)&queryFormat, "!MSG_IsOverflowed( &msg )") )
    __debugbreak();
  party->currentHost.lastPacketSentTime = Sys_Milliseconds();
  PartyProfile_StartEvent(HEARTBEAT_ACK, &outEventInfo);
  PartyProfile_AddBandwidthData(buf.cursize, &outEventInfo);
  v5 = Sys_Milliseconds();
  PartyProfile_RecordOutgoingEvent(&outEventInfo, v5, &party->profileState);
  return PartyClient_SendMessageToHost(party, &buf, activeClient);
}

/*
==============
PartyClient_SendMatchmakingInfo
==============
*/
__int64 PartyClient_SendMatchmakingInfo(PartyData *party, const PartyActiveClient *activeClient, PartyMatchmakingInfo *matchmakingInfo)
{
  unsigned __int8 *m_ptr; 
  const char *v7; 
  int v8; 
  NetConnection *HostConnection; 
  unsigned int v10; 
  XUID result; 
  __int64 v13; 
  Mem_LargeLocal v14; 
  msg_t buf; 
  PartyProfile_Event outEventInfo; 

  v13 = -2i64;
  Mem_LargeLocal::Mem_LargeLocal(&v14, 0x243D8ui64, "msg_buf_t partyMsgBuf");
  m_ptr = (unsigned __int8 *)v14.m_ptr;
  if ( !matchmakingInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 4986, ASSERT_TYPE_ASSERT, "(matchmakingInfo)", (const char *)&queryFormat, "matchmakingInfo") )
    __debugbreak();
  if ( !activeClient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 4987, ASSERT_TYPE_ASSERT, "(activeClient)", (const char *)&queryFormat, "activeClient") )
    __debugbreak();
  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 4988, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( party->areWeHost && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 4989, ASSERT_TYPE_ASSERT, "(!party->areWeHost)", (const char *)&queryFormat, "!party->areWeHost") )
    __debugbreak();
  if ( !matchmakingInfo->matchmakingToken && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 4991, ASSERT_TYPE_ASSERT, "(matchmakingInfo->matchmakingToken != 0)", (const char *)&queryFormat, "matchmakingInfo->matchmakingToken != 0") )
    __debugbreak();
  MSG_Init(&buf, m_ptr, 148440);
  v7 = j_va("%ipmminfo", (unsigned int)party->partyId);
  MSG_WriteString(&buf, v7);
  Live_GetXuid(&result, activeClient->localControllerIndex);
  XUID::Serialize(&result, &buf);
  PartyMatchmakingInfo::Serialize(matchmakingInfo, &buf);
  party->currentHost.lastPacketSentTime = Sys_Milliseconds();
  party->lastMemberInfoTime = Sys_Milliseconds();
  PartyProfile_StartEvent(MATCHMAKINGINFO, &outEventInfo);
  PartyProfile_AddBandwidthData(buf.cursize, &outEventInfo);
  v8 = Sys_Milliseconds();
  PartyProfile_RecordOutgoingEvent(&outEventInfo, v8, &party->profileState);
  party->specificData.clientData.m_matchmakingTokenSent[activeClient->localClientNum] = 1;
  HostConnection = Party_GetHostConnection(party, activeClient->localClientNum);
  if ( !NetConnection::IsConnected(HostConnection) )
    Com_Printf(25, "[%s] PartyClient - SendMessageToHost - Attempting to send message to host when not connected\n", party->partyName);
  if ( NetConnection::SendReliable(HostConnection, &buf) )
  {
    v10 = 1;
  }
  else
  {
    Com_Printf(25, "[%s] %s - Got WSAEHOSTUNREACH while trying to talk to party host '%s'.\n", party->partyName, "PartyClient_SendRMessageToHost", (const char *)buf.data);
    v10 = 0;
  }
  Mem_LargeLocal::~Mem_LargeLocal(&v14);
  return v10;
}

/*
==============
PartyClient_SendMessageToHost
==============
*/
_BOOL8 PartyClient_SendMessageToHost(PartyData *party, msg_t *msg, const PartyActiveClient *activeClient)
{
  NetConnection *HostConnection; 
  int v7; 
  int v8; 

  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 706, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( !activeClient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 707, ASSERT_TYPE_ASSERT, "(activeClient)", (const char *)&queryFormat, "activeClient") )
    __debugbreak();
  if ( !msg && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 708, ASSERT_TYPE_ASSERT, "(msg)", (const char *)&queryFormat, "msg") )
    __debugbreak();
  HostConnection = Party_GetHostConnection(party, activeClient->localClientNum);
  if ( !NetConnection::IsConnected(HostConnection) )
    Com_Printf(25, "[%s] PartyClient - SendMessageToHost - Attempting to send message to host when not connected\n", party->partyName);
  v7 = NetConnection::SendUnreliable(HostConnection, msg->data, msg->cursize);
  v8 = v7;
  if ( v7 >= 0 )
    return 1i64;
  Com_Printf(25, "[%s] PartyClient - SendMessageToHost - Got %d while trying to talk to party host '%s'.\n", party->partyName, (unsigned int)v7, (const char *)msg->data);
  return v8 == -2;
}

/*
==============
PartyClient_SendOurMemberInfo
==============
*/
_BOOL8 PartyClient_SendOurMemberInfo(PartyData *party, const PartyActiveClient *activeClient)
{
  unsigned __int8 *m_ptr; 
  unsigned __int8 *v5; 
  BOOL v6; 
  const char *v7; 
  int MemberByXUID_AllowNotPresent; 
  XUID *v9; 
  int v10; 
  XUID result; 
  XUID player; 
  msg_t buf; 
  __int64 v15; 
  XUID v16; 
  Mem_LargeLocal v17; 
  Mem_LargeLocal v18; 
  msg_t msg; 
  PartyProfile_Event outEventInfo; 
  ClientAuthoritativeMemberInfo v21; 
  ClientAuthoritativeMemberInfo Buf2; 

  v15 = -2i64;
  bdSecurityID::bdSecurityID(&Buf2.privatePartyId);
  bdSecurityID::bdSecurityID(&v21.privatePartyId);
  Mem_LargeLocal::Mem_LargeLocal(&v18, 0x243D8ui64, "msg_buf_t partyMsgBuf2");
  m_ptr = (unsigned __int8 *)v18.m_ptr;
  Mem_LargeLocal::Mem_LargeLocal(&v17, 0x243D8ui64, "msg_buf_t partyMsgBuf");
  v5 = (unsigned __int8 *)v17.m_ptr;
  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 4915, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( party->areWeHost && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 4916, ASSERT_TYPE_ASSERT, "(!party->areWeHost)", (const char *)&queryFormat, "!party->areWeHost") )
    __debugbreak();
  if ( Party_IsHostPresent(party) )
  {
    MSG_Init(&buf, v5, 148440);
    v7 = j_va("%iclientInfo", (unsigned int)party->partyId);
    MSG_WriteString(&buf, v7);
    Live_GetXuid(&result, activeClient->localControllerIndex);
    XUID::Serialize(&result, &buf);
    MSG_WriteLong(&buf, party->lastPartyStateTime);
    memset_0(&Buf2, 0, sizeof(Buf2));
    Party_FillInOurMemberInfo(party, activeClient->localControllerIndex, &Buf2);
    if ( Com_IsGameLocalServerRunningOrLoading() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 4935, ASSERT_TYPE_ASSERT, "(!Com_IsGameLocalServerRunningOrLoading())", (const char *)&queryFormat, "!Com_IsGameLocalServerRunningOrLoading()") )
      __debugbreak();
    Live_GetXuid(&player, activeClient->localControllerIndex);
    MemberByXUID_AllowNotPresent = Party_FindMemberByXUID_AllowNotPresent(party, player);
    if ( MemberByXUID_AllowNotPresent >= 0 && !memcmp_0(&party->partyMembers[MemberByXUID_AllowNotPresent], &Buf2, 0xB8ui64) )
    {
      MSG_WriteBit0(&buf);
    }
    else
    {
      MSG_WriteBit1(&buf);
      memset_0(&v21, 0, sizeof(v21));
      Party_FillInOurMemberInfo(party, activeClient->localControllerIndex, &v21);
      if ( memcmp_0(&Buf2, &v21, 0xB8ui64) )
      {
        Party_DebugDumpMemberInfo(&Buf2, "Original");
        Party_DebugDumpMemberInfo(&v21, "Write out");
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 4898, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, (const char *)&queryFormat, "Unexpected modification to member info") )
          __debugbreak();
      }
      MSG_Init(&msg, m_ptr, 148440);
      Party_WriteMemberInfo(party, &msg, &v21);
      memset_0(&v21, 0, sizeof(v21));
      MSG_BeginReading(&msg);
      v9 = XUID::NullXUID(&v16);
      Party_ReadMemberInfo(&msg, &v21, (XUID)v9->m_id);
      v21.headsetPresent = Buf2.headsetPresent;
      if ( memcmp_0(&Buf2, &v21, 0xB8ui64) )
      {
        Party_DebugDumpMemberInfo(&Buf2, "Original");
        Party_DebugDumpMemberInfo(&v21, "Read out");
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 4898, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, (const char *)&queryFormat, "Missing a field in Party_WriteMemberInfo() or Party_ReadMemberInfo()") )
          __debugbreak();
      }
      Party_WriteMemberInfo(party, &buf, &Buf2);
    }
    party->currentHost.lastPacketSentTime = Sys_Milliseconds();
    party->lastMemberInfoTime = Sys_Milliseconds();
    PartyProfile_StartEvent(CLIENTINFO, &outEventInfo);
    PartyProfile_AddBandwidthData(buf.cursize, &outEventInfo);
    v10 = Sys_Milliseconds();
    PartyProfile_RecordOutgoingEvent(&outEventInfo, v10, &party->profileState);
    v6 = PartyClient_SendMessageToHost(party, &buf, activeClient);
  }
  else
  {
    v6 = 1;
  }
  Mem_LargeLocal::~Mem_LargeLocal(&v17);
  Mem_LargeLocal::~Mem_LargeLocal(&v18);
  bdSecurityID::~bdSecurityID(&v21.privatePartyId);
  bdSecurityID::~bdSecurityID(&Buf2.privatePartyId);
  return v6;
}

/*
==============
PartyClient_SendPartyStateAck
==============
*/
void PartyClient_SendPartyStateAck(PartyData *party, const PartyActiveClient *activeClient, const bitarray<256> *ackedMembers)
{
  const char *v6; 
  int v7; 
  msg_t buf; 
  PartyProfile_Event outEventInfo; 
  unsigned __int8 data[2480]; 

  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 1915, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( !party->inParty && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 1916, ASSERT_TYPE_ASSERT, "(party->inParty)", (const char *)&queryFormat, "party->inParty") )
    __debugbreak();
  if ( party->areWeHost && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 1917, ASSERT_TYPE_ASSERT, "(!party->areWeHost)", (const char *)&queryFormat, "!party->areWeHost") )
    __debugbreak();
  MSG_Init(&buf, data, 2474);
  v6 = j_va("%ipsack", (unsigned int)party->partyId);
  MSG_WriteString(&buf, v6);
  MSG_WriteLong(&buf, party->lastPartyStateTime);
  MSG_WriteData(&buf, ackedMembers, 32);
  if ( buf.overflowed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 1924, ASSERT_TYPE_ASSERT, "(!MSG_IsOverflowed( &msg ))", (const char *)&queryFormat, "!MSG_IsOverflowed( &msg )") )
    __debugbreak();
  PartyProfile_StartEvent(STATE_UPDATE_ACK, &outEventInfo);
  PartyProfile_AddBandwidthData(buf.cursize, &outEventInfo);
  v7 = Sys_Milliseconds();
  PartyProfile_RecordOutgoingEvent(&outEventInfo, v7, &party->profileState);
  NetConnection::SendReliable(&party->currentHost.connections[activeClient->localClientNum], &buf);
  party->backingOut = 0;
  RMsg_SendMessages();
}

/*
==============
PartyClient_ShouldSendMatchmakingInfo
==============
*/
_BOOL8 PartyClient_ShouldSendMatchmakingInfo(const PartyData *party, const PartyActiveClient *activeClient)
{
  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 4764, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  return Party_IsHostPresent(party) && !party->specificData.clientData.m_matchmakingTokenSent[activeClient->localClientNum];
}

/*
==============
PartyClient_ShouldShowTeams
==============
*/
__int64 PartyClient_ShouldShowTeams(const PartyData *party, const PartyActiveClient *mainActiveClient, int timeToStart)
{
  const dvar_t *v7; 
  const char *v8; 
  int OurClientNum; 
  __int64 v10; 
  __int64 v11; 
  __int64 v12; 

  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 5092, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( !mainActiveClient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 5093, ASSERT_TYPE_ASSERT, "(mainActiveClient)", (const char *)&queryFormat, "mainActiveClient") )
    __debugbreak();
  if ( (party->lobbyFlags & 0x64) != 32 )
    return 0i64;
  if ( BG_Bots_IsBotMatchMakingAllowedForPlaylist() && BG_GameStateInfo_BotsCountTowardsGameLaunch() )
  {
    if ( !BG_GameStateInfo_IsBotMatchMakingDataInitialized() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 5101, ASSERT_TYPE_ASSERT, "(BG_GameStateInfo_IsBotMatchMakingDataInitialized())", (const char *)&queryFormat, "BG_GameStateInfo_IsBotMatchMakingDataInitialized()") )
    {
      __debugbreak();
      return 1i64;
    }
    return 1i64;
  }
  if ( Party_IsPrivateOrSystemlinkGame(party) )
  {
    v7 = DVARINT_pt_privateGameStartTimerLength;
    if ( DVARINT_pt_privateGameStartTimerLength )
      goto LABEL_20;
    v8 = "pt_privateGameStartTimerLength";
  }
  else
  {
    v7 = DVARINT_pt_gameStartTimerLength;
    if ( DVARINT_pt_gameStartTimerLength )
      goto LABEL_20;
    v8 = "pt_gameStartTimerLength";
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", v8) )
    __debugbreak();
LABEL_20:
  Dvar_CheckFrontendServerThread(v7);
  if ( timeToStart <= 1000 * v7->current.integer )
  {
    OurClientNum = Live_GetOurClientNum(mainActiveClient->localControllerIndex, party);
    v10 = OurClientNum;
    if ( OurClientNum >= 0 )
    {
      if ( (unsigned int)OurClientNum >= 0xC8 )
      {
        LODWORD(v12) = 200;
        LODWORD(v11) = OurClientNum;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 5119, ASSERT_TYPE_ASSERT, "(unsigned)( ourClientNum ) < (unsigned)( 200 )", "ourClientNum doesn't index MAX_PARTY_MEMBERS\n\t%i not in [0, %i)", v11, v12) )
          __debugbreak();
      }
      if ( (unsigned int)(party->partyMembers[v10].team - 1) <= 1 )
        return 1i64;
    }
  }
  return 0i64;
}

/*
==============
PartyClient_TimeOutHost
==============
*/
__int64 PartyClient_TimeOutHost(PartyData *party, const PartyActiveClient *mainActiveClient, const int now)
{
  const char *v3; 
  int lastPacketTime; 
  int v8; 
  int v10; 
  PartyDisconnectReason v11; 
  const dvar_t *v12; 
  int v13; 
  __int64 disconnectReason; 
  PartyDisconnectReason disconnectReasona; 
  __int64 joinResponse; 

  v3 = "party";
  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 5030, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  lastPacketTime = party->currentHost.lastPacketTime;
  v8 = Sys_Milliseconds();
  if ( lastPacketTime < 7000 )
  {
    party->currentHost.lastPacketTime = v8;
    return 0i64;
  }
  if ( v8 - party->currentHost.lastPacketTime <= 1000 )
    return 0i64;
  v10 = PartyMigrate_MigrateActive(party);
  if ( !Party_IsHostDataAvailable(party) && !v10 )
  {
    Com_Printf(25, "[%s] %s - Host has been removed, and we're not migrating. Disconnecting.\n", party->partyName, "PartyClient_TimeOutHost");
    LOBYTE(v11) = 8;
    goto LABEL_18;
  }
  v12 = DVARINT_pt_memberTimeout;
  if ( !DVARINT_pt_memberTimeout && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "pt_memberTimeout") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v12);
  v13 = party->currentHost.lastPacketTime;
  if ( now - v13 > v12->current.integer )
  {
    if ( ++party->hostTimeouts <= 3 )
      return 1i64;
    LODWORD(joinResponse) = now;
    LODWORD(disconnectReason) = v13;
    if ( Party_IsGameLobby(party) )
      v3 = "lobby";
    Com_Printf(25, "[%s] %s - Host has timed out. Disconnecting from %s host. last packet %i, now %i \n", party->partyName, "PartyClient_TimeOutHost", v3, disconnectReason, joinResponse);
    LOBYTE(v11) = 46;
LABEL_18:
    PartyClient_LostConnectionToHost(party, mainActiveClient, v11, NULL);
    return 1i64;
  }
  if ( PartyMigrate_MigrateActive(party) || now - party->currentHost.lastPacketSentTime <= 500 )
    return 0i64;
  LODWORD(disconnectReason) = now - party->currentHost.lastPacketTime;
  if ( Party_IsGameLobby(party) )
    v3 = "lobby";
  Com_Printf(25, "[%s] %s - %s host is almost timed out, haven't heard from him in %i ms. Sending heartbeat...\n", party->partyName, "PartyClient_TimeOutHost", v3, disconnectReason);
  if ( PartyClient_SendHeartbeatAck(party, mainActiveClient) )
    return 0i64;
  OnlineErrorManager::SetLastRecordedErrorCode(&g_onlineMgr.m_errorManager, (Online_Error_CAT_PARTY_t)0x800000, NULL);
  LOBYTE(disconnectReasona) = 7;
  PartyClient_DisconnectFromHostInternal(party, mainActiveClient, "@EXE/TRANSMITERROR", 0, 1, disconnectReasona, JOINRESPONSE_NONE);
  return 1i64;
}

/*
==============
PartyClient_TryShowToastForPartyHostChangingCrossplaySetting
==============
*/
void PartyClient_TryShowToastForPartyHostChangingCrossplaySetting(const PartyData *party)
{
  const dvar_t *v1; 
  int integer; 
  char v4; 
  bool CrossplayEnabled; 
  PartyType partyId; 
  bool v7; 
  int ControllerFromClient; 

  v1 = DVARINT_online_party_host_crossplay_change_toast_display_mode;
  if ( !DVARINT_online_party_host_crossplay_change_toast_display_mode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "online_party_host_crossplay_change_toast_display_mode") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v1);
  integer = v1->current.integer;
  v4 = party->partyMembers[Party_HostNum(party)].info.platform[0];
  if ( Party_GetCrossplayEnabled(party) )
  {
    if ( (integer & 1) == 0 || (integer & 4) != 0 && Live_DoAllActiveControllersHaveCrossplayPermissions() || (integer & 0x10) != 0 && (unsigned __int8)GetClientPlatform() != v4 )
      return;
LABEL_16:
    CrossplayEnabled = Party_GetCrossplayEnabled(party);
    partyId = party->partyId;
    v7 = CrossplayEnabled;
    ControllerFromClient = CL_Mgr_GetControllerFromClient(LOCAL_CLIENT_0);
    LUI_CoD_CrossplaySettingsChanged(ControllerFromClient, partyId, v7);
    return;
  }
  if ( (integer & 2) != 0 && ((integer & 8) == 0 || Live_DoAllActiveControllersHaveCrossplayPermissions()) && ((integer & 0x20) == 0 || (unsigned __int8)GetClientPlatform() != v4) )
    goto LABEL_16;
}

/*
==============
PartyClient_TryShowTryShowToastForPartyHostChangingCrossplaySetting_Frame
==============
*/
void PartyClient_TryShowTryShowToastForPartyHostChangingCrossplaySetting_Frame(const PartyData *party)
{
  const dvar_t *v2; 
  int integer; 
  const dvar_t *v4; 
  int v5; 
  char v6; 
  bool CrossplayEnabled; 
  PartyType partyId; 
  bool v9; 
  int ControllerFromClient; 

  if ( s_shouldTryShowToastForPartyHostChangingCrossplaySetting )
  {
    v2 = DVARINT_online_party_host_crossplay_change_toast_wait_time_ms;
    if ( !DVARINT_online_party_host_crossplay_change_toast_wait_time_ms && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "online_party_host_crossplay_change_toast_wait_time_ms") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v2);
    integer = v2->current.integer;
    if ( Sys_Milliseconds() - s_lastTimeAtWhichHostChangedCrossplaySettings > integer )
    {
      if ( !party->inParty || Party_AreWeHost(party) )
        goto LABEL_25;
      v4 = DVARINT_online_party_host_crossplay_change_toast_display_mode;
      if ( !DVARINT_online_party_host_crossplay_change_toast_display_mode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "online_party_host_crossplay_change_toast_display_mode") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v4);
      v5 = v4->current.integer;
      v6 = party->partyMembers[Party_HostNum(party)].info.platform[0];
      if ( Party_GetCrossplayEnabled(party) )
      {
        if ( (v5 & 1) == 0 || (v5 & 4) != 0 && Live_DoAllActiveControllersHaveCrossplayPermissions() || (v5 & 0x10) != 0 && (unsigned __int8)GetClientPlatform() != v6 )
          goto LABEL_24;
      }
      else if ( (v5 & 2) == 0 || (v5 & 8) != 0 && !Live_DoAllActiveControllersHaveCrossplayPermissions() || (v5 & 0x20) != 0 && (unsigned __int8)GetClientPlatform() == v6 )
      {
        goto LABEL_24;
      }
      CrossplayEnabled = Party_GetCrossplayEnabled(party);
      partyId = party->partyId;
      v9 = CrossplayEnabled;
      ControllerFromClient = CL_Mgr_GetControllerFromClient(LOCAL_CLIENT_0);
      LUI_CoD_CrossplaySettingsChanged(ControllerFromClient, partyId, v9);
LABEL_24:
      s_crossplaySettingOfLastWarningToastShown = Party_GetCrossplayEnabled(party);
LABEL_25:
      s_shouldTryShowToastForPartyHostChangingCrossplaySetting = 0;
      s_haveShownToastAtleastOnceAfterJoin = 1;
    }
  }
}

/*
==============
PartyClient_UpdateGameStartTimeOverride
==============
*/
void PartyClient_UpdateGameStartTimeOverride(PartyData *party, const int now)
{
  const dvar_t *v4; 
  const char *v5; 

  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 4175, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( !party->inParty && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 4176, ASSERT_TYPE_ASSERT, "(party->inParty)", (const char *)&queryFormat, "party->inParty") )
    __debugbreak();
  if ( party->areWeHost && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 4177, ASSERT_TYPE_ASSERT, "(!party->areWeHost)", (const char *)&queryFormat, "!party->areWeHost") )
    __debugbreak();
  if ( Party_IsPrivateOrSystemlinkGame(party) )
  {
    v4 = DVARINT_pt_privateGameStartTimerLength;
    if ( DVARINT_pt_privateGameStartTimerLength )
      goto LABEL_17;
    v5 = "pt_privateGameStartTimerLength";
  }
  else
  {
    v4 = DVARINT_pt_gameStartTimerLength;
    if ( DVARINT_pt_gameStartTimerLength )
      goto LABEL_17;
    v5 = "pt_gameStartTimerLength";
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", v5) )
    __debugbreak();
LABEL_17:
  Dvar_CheckFrontendServerThread(v4);
  party->specificData.hostData.matchRulesChangeTime = now + 1000 * v4->current.integer;
}

/*
==============
PartyClient_UpdateMatchmakingInfo
==============
*/
__int64 PartyClient_UpdateMatchmakingInfo(PartyData *party, const PartyActiveClient *mainActiveClient, const int now)
{
  unsigned int v5; 
  const XUID *Xuid; 
  const XUID *v7; 
  PartyDisconnectReason disconnectReason; 
  PartyActiveClient outPartyActiveClient; 
  XUID result; 
  PartyMatchmakingInfo outMatchmakingInfo; 

  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 5229, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( !party->inParty && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 5230, ASSERT_TYPE_ASSERT, "(party->inParty)", (const char *)&queryFormat, "party->inParty") )
    __debugbreak();
  if ( party->areWeHost && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 5231, ASSERT_TYPE_ASSERT, "(!party->areWeHost)", (const char *)&queryFormat, "!party->areWeHost") )
    __debugbreak();
  v5 = 1;
  if ( PartyClient_ShouldSendMatchmakingInfo(party, mainActiveClient) )
  {
    Xuid = Live_GetXuid(&result, mainActiveClient->localControllerIndex);
    if ( Party_FillMatchmakingInfo(party, mainActiveClient, (const XUID)Xuid->m_id, &outMatchmakingInfo) )
    {
      v5 = PartyClient_SendMatchmakingInfo(party, mainActiveClient, &outMatchmakingInfo);
      if ( !v5 )
        goto LABEL_19;
    }
  }
  if ( Party_GetSecondaryActiveClient(party, &outPartyActiveClient) )
  {
    if ( Party_IsHostPresent(party) )
    {
      if ( !party->specificData.clientData.m_matchmakingTokenSent[outPartyActiveClient.localClientNum] )
      {
        v7 = Live_GetXuid(&result, outPartyActiveClient.localControllerIndex);
        if ( Party_FillMatchmakingInfo(party, &outPartyActiveClient, (const XUID)v7->m_id, &outMatchmakingInfo) )
          v5 = PartyClient_SendMatchmakingInfo(party, &outPartyActiveClient, &outMatchmakingInfo);
      }
    }
  }
  if ( !v5 )
  {
LABEL_19:
    OnlineErrorManager::SetLastRecordedErrorCode(&g_onlineMgr.m_errorManager, (Online_Error_CAT_PARTY_t)0x2000000, NULL);
    LOBYTE(disconnectReason) = 39;
    PartyClient_DisconnectFromHostInternal(party, mainActiveClient, "@EXE/TRANSMITERROR", 0, 1, disconnectReason, JOINRESPONSE_NONE);
  }
  return v5;
}

/*
==============
PartyClient_UpdatePrivatePartyOnLobbyEnding
==============
*/
__int64 PartyClient_UpdatePrivatePartyOnLobbyEnding(PartyData *party, const PartyActiveClient *mainActiveClient, PartyEndType endType)
{
  int IsPlayerInPrivateParty; 
  __int64 v8; 
  XUID outHostXuid; 

  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 3241, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( !mainActiveClient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 3242, ASSERT_TYPE_ASSERT, "(mainActiveClient)", (const char *)&queryFormat, "mainActiveClient") )
    __debugbreak();
  if ( !Party_IsGameLobby(party) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 3243, ASSERT_TYPE_ASSERT, "(Party_IsGameLobby( party ))", (const char *)&queryFormat, "Party_IsGameLobby( party )") )
    __debugbreak();
  XUID::XUID(&outHostXuid);
  if ( g_partyData.inParty )
  {
    if ( Lobby_GetHostXuid(&outHostXuid) )
      IsPlayerInPrivateParty = Party_IsPlayerInPrivateParty(outHostXuid);
    else
      IsPlayerInPrivateParty = 0;
  }
  else
  {
    IsPlayerInPrivateParty = 0;
  }
  switch ( endType )
  {
    case PARTY_END_STOPPED:
      goto LABEL_29;
    case PARTY_END_REMOVED:
      if ( IsPlayerInPrivateParty )
      {
        if ( !Party_IsRunning(&g_partyData) && !g_partyData.backingOut )
        {
          Com_Printf(25, "Since the private party is not running and the host who is a party member removed us from the lobby, we'll stop the private party also\n");
          Party_StopParty(&g_partyData);
        }
        goto LABEL_29;
      }
      break;
    case PARTY_END_BACKOUT:
      if ( IsPlayerInPrivateParty )
      {
        Com_Printf(25, "Since the host that closed the lobby is also the party host, we'll attempt backing out.\n");
        if ( Party_Backout(mainActiveClient) )
          return 1i64;
        goto LABEL_29;
      }
      Com_Printf(25, "Since the lobby host sent us a backout-type end party message, we will remove his private party from the member list\n");
      PartyClient_RemoveHostPrivatePartyMembers(party, mainActiveClient);
      break;
    default:
      if ( endType != PARTY_END_ROLLOVER )
      {
        LODWORD(v8) = endType;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 3275, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unhandled endType %d", v8) )
          __debugbreak();
      }
LABEL_29:
      if ( IsPlayerInPrivateParty && g_partyData.inParty && !g_partyData.backingOut )
        PartyClient_RemoveLobbyHostFromPrivateParty(mainActiveClient);
      return 0i64;
  }
  return 0i64;
}

/*
==============
PartyClient_UpdateTeamsVisible
==============
*/
void PartyClient_UpdateTeamsVisible(PartyData *party, const PartyActiveClient *mainActiveClient, const int now)
{
  const char *MapName; 
  int GameStartTime; 
  int v8; 
  const dvar_t *v9; 
  int integer; 
  int ShouldShowTeams; 
  LocalClientNum_t localClientNum; 
  int v13; 
  const dvar_t *v14; 
  int v15; 
  const dvar_t *v16; 
  const PartyData *PartyData; 

  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 5137, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( !party->inParty && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 5138, ASSERT_TYPE_ASSERT, "(party->inParty)", (const char *)&queryFormat, "party->inParty") )
    __debugbreak();
  if ( party->areWeHost && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 5139, ASSERT_TYPE_ASSERT, "(!party->areWeHost)", (const char *)&queryFormat, "!party->areWeHost") )
    __debugbreak();
  MapName = Party_GetMapName();
  if ( Com_FastFile_IsLevelPreloadComplete(MapName) )
  {
    GameStartTime = Party_GetGameStartTime(party);
    v8 = GameStartTime - now;
  }
  else
  {
    GameStartTime = 0;
    v8 = 0;
  }
  if ( (Party_IsGameLobby(party) || Live_IsInSystemlinkLobby()) && GameStartTime && (party->lobbyFlags & 1) == 0 )
  {
    v9 = DVARINT_party_timer;
    if ( !DVARINT_party_timer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "party_timer") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v9);
    integer = v9->current.integer;
    ShouldShowTeams = PartyClient_ShouldShowTeams(party, mainActiveClient, v8);
    localClientNum = mainActiveClient->localClientNum;
    if ( ShouldShowTeams )
      Party_ShowTeams(localClientNum);
    else
      Party_HideTeams(localClientNum);
    v13 = (unsigned __int64)(274877907i64 * v8) >> 32;
    v14 = DVARINT_party_timer;
    v15 = ((unsigned int)v13 >> 31) + (v13 >> 6);
    if ( !DVARINT_party_timer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "party_timer") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v14);
    if ( v15 < 0 )
      v15 = 0;
    if ( v15 != v14->current.integer )
      Dvar_SetInt_Internal(DVARINT_party_timer, v15);
    v16 = DVARINT_party_timer;
    if ( !DVARINT_party_timer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "party_timer") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v16);
    if ( integer > v16->current.integer && (!Party_UsingReadyUpFeature() || Party_GetPartyReadyUpStatus()) )
      Party_PlayCountdownSound(integer);
  }
  else if ( Party_IsGameLobby(party) || Live_IsInSystemlinkLobby() || (PartyData = Lobby_GetPartyData(), !Party_IsRunning(PartyData)) )
  {
    Party_HideTeams((const LocalClientNum_t)mainActiveClient->localClientNum);
  }
}

/*
==============
PartyClient_VerifyPartyMemberList
==============
*/
void PartyClient_VerifyPartyMemberList(const PartyData *party, const PartyActiveClient *mainActiveClient, XUID *playerList, unsigned int playerCount)
{
  unsigned int v8; 
  const char *v9; 
  __int64 v10; 
  __int64 v11; 

  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 3621, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( !party->inParty && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 3622, ASSERT_TYPE_ASSERT, "(party->inParty)", (const char *)&queryFormat, "party->inParty") )
    __debugbreak();
  if ( party->areWeHost && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 3623, ASSERT_TYPE_ASSERT, "(!party->areWeHost)", (const char *)&queryFormat, "!party->areWeHost") )
    __debugbreak();
  if ( !playerList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 3624, ASSERT_TYPE_ASSERT, "(playerList)", (const char *)&queryFormat, "playerList") )
    __debugbreak();
  if ( !mainActiveClient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 3625, ASSERT_TYPE_ASSERT, "(mainActiveClient)", (const char *)&queryFormat, "mainActiveClient") )
    __debugbreak();
  if ( playerCount && !Party_IsPrivateParty(party) && g_partyData.inParty )
  {
    if ( !Party_IsGameLobby(party) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 3630, ASSERT_TYPE_ASSERT, "(Party_IsGameLobby( party ))", (const char *)&queryFormat, "Party_IsGameLobby( party )") )
      __debugbreak();
    if ( Party_IsRunning(&g_partyData) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 3631, ASSERT_TYPE_ASSERT, "(!Party_IsRunning( &g_partyData ))", "%s\n\tShouldn't be deriving party member status while the party is active", "!Party_IsRunning( &g_partyData )") )
      __debugbreak();
    if ( !g_partyData.areWeHost && g_partyData.backingOut && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 3632, ASSERT_TYPE_ASSERT, "(g_partyData.areWeHost || !g_partyData.backingOut)", (const char *)&queryFormat, "g_partyData.areWeHost || !g_partyData.backingOut") )
      __debugbreak();
    v8 = 0;
    do
    {
      if ( v8 >= 0xC8 )
      {
        LODWORD(v11) = 200;
        LODWORD(v10) = v8;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 3636, ASSERT_TYPE_ASSERT, "(unsigned)( xuidIndex ) < (unsigned)( 200 )", "xuidIndex doesn't index MAX_PARTY_MEMBERS\n\t%i not in [0, %i)", v10, v11) )
          __debugbreak();
      }
      if ( !XUID::IsValid(playerList) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 3637, ASSERT_TYPE_ASSERT, "(playerList[xuidIndex].IsValid())", (const char *)&queryFormat, "playerList[xuidIndex].IsValid()") )
        __debugbreak();
      if ( Party_FindMemberByXUID_AllowNotPresent(party, (const XUID)playerList->m_id) < 0 )
      {
        if ( Live_XUIDIsLocalPlayer((const XUID)playerList->m_id) )
        {
          Com_PrintError(25, "PartyClient - VerifyPartyMemberList - A local client is not in the host's member list! Not going to kick from the party...\n");
        }
        else
        {
          v9 = XUID::ToDevString(playerList);
          Com_Printf(25, "PartyClient - VerifyPartyMemberList - Also removing player %s from private party because they are not in the member list\n", v9);
          Party_LostPrivatePartyPlayer(mainActiveClient->localControllerIndex, (XUID)playerList->m_id, 0, 1);
        }
      }
      ++v8;
      ++playerList;
    }
    while ( v8 < playerCount );
  }
}

/*
==============
Party_DebugDumpMemberInfo
==============
*/
void Party_DebugDumpMemberInfo(const ClientAuthoritativeMemberInfo *memberInfoIn, const char *titleIn)
{
  unsigned int v4; 
  __int64 i; 
  char v6; 
  const char *v7; 
  __int64 j; 
  char v9; 
  const char *v10; 
  __int64 k; 
  __int64 m; 
  const char *v13; 
  const char *v14; 
  char dest[8]; 
  char str[24]; 
  char v17[512]; 

  if ( !memberInfoIn && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 4815, ASSERT_TYPE_ASSERT, "(memberInfoIn)", (const char *)&queryFormat, "memberInfoIn") )
    __debugbreak();
  if ( !titleIn && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\partyclient.cpp", 4816, ASSERT_TYPE_ASSERT, "(titleIn)", (const char *)&queryFormat, "titleIn") )
    __debugbreak();
  Com_Printf(0, "======================\n");
  Com_Printf(0, "%s\n", titleIn);
  XNKIDToString(&memberInfoIn->privatePartyId, str, 21);
  Com_Printf(0, "    privatePartyId = \"%s\"\n", str);
  Com_Printf(0, "    desiredTeam = \"%d\"\n", (unsigned int)memberInfoIn->clientDesiredTeamSelection);
  Com_Printf(0, "    playerCardUpdate = %d\n", memberInfoIn->playerCardUpdate);
  Com_Printf(0, "    availableMapPackFlags = %d ($%x)\n", (unsigned int)memberInfoIn->availableMapPackFlags, (unsigned int)memberInfoIn->availableMapPackFlags);
  Com_Printf(0, "    gameBattlesCommitReady = %d ($%x)\n", memberInfoIn->gameBattlesCommitReady, memberInfoIn->gameBattlesCommitReady);
  Com_Printf(0, "    zombie_consumable0 = %u ($%x)\n", memberInfoIn->zombie_consumable0, memberInfoIn->zombie_consumable0);
  Com_Printf(0, "    zombie_consumable1 = %u ($%x)\n", memberInfoIn->zombie_consumable1, memberInfoIn->zombie_consumable1);
  Com_Printf(0, "    zombie_consumable2 = %u ($%x)\n", memberInfoIn->zombie_consumable2, memberInfoIn->zombie_consumable2);
  Com_Printf(0, "    zombie_consumable3 = %u ($%x)\n", memberInfoIn->zombie_consumable3, memberInfoIn->zombie_consumable3);
  Com_Printf(0, "    zombie_consumable4 = %u ($%x)\n", memberInfoIn->zombie_consumable4, memberInfoIn->zombie_consumable4);
  Com_Printf(0, "    alien_readyUpFlag = %u ($%x)\n", memberInfoIn->alien_readyUpFlag, memberInfoIn->alien_readyUpFlag);
  Com_Printf(0, "    cpFieldUpgradeRowNum = %u ($%x)\n", memberInfoIn->cpFieldUpgradeRowNum, memberInfoIn->cpFieldUpgradeRowNum);
  Com_Printf(0, "    alienRevives = %u ($%x)\n", memberInfoIn->alienRevives, memberInfoIn->alienRevives);
  Com_Printf(0, "    alienEscapes = %u ($%x)\n", memberInfoIn->alienEscapes, memberInfoIn->alienEscapes);
  Com_Printf(0, "    alienNerfEscapes = %u ($%x)\n", memberInfoIn->alienNerfEscapes, memberInfoIn->alienNerfEscapes);
  Com_Printf(0, "    aliensKilled = %u ($%x)\n", memberInfoIn->aliensKilled, memberInfoIn->aliensKilled);
  v17[0] = 0;
  v4 = 0;
  if ( memberInfoIn != (const ClientAuthoritativeMemberInfo *)-52i64 )
  {
    for ( i = 0i64; i < 36; ++i )
    {
      v6 = memberInfoIn->gamertag[i];
      if ( v6 )
      {
        v7 = "%c";
        if ( (unsigned __int8)(v6 - 32) > 0x5Eu )
          v7 = "%2.2x";
        Com_sprintf(dest, 4ui64, v7, (unsigned int)v6);
      }
      else
      {
        Com_sprintf(dest, 4ui64, "0");
      }
      I_strcat(v17, 0x200ui64, dest);
      if ( i < 35 )
        I_strcat(v17, 0x200ui64, " ");
    }
  }
  Com_Printf(0, "    gamertag = \"%s\" [%s]\n", memberInfoIn->gamertag, v17);
  v17[0] = 0;
  if ( memberInfoIn != (const ClientAuthoritativeMemberInfo *)-92i64 )
  {
    for ( j = 0i64; j < 6; ++j )
    {
      v9 = memberInfoIn->clanAbbrev[j];
      if ( v9 )
      {
        v10 = "%c";
        if ( (unsigned __int8)(v9 - 32) > 0x5Eu )
          v10 = "%2.2x";
        Com_sprintf(dest, 4ui64, v10, (unsigned int)v9);
      }
      else
      {
        Com_sprintf(dest, 4ui64, "0");
      }
      I_strcat(v17, 0x200ui64, dest);
      if ( j < 5 )
        I_strcat(v17, 0x200ui64, " ");
    }
  }
  Com_Printf(0, "    clanAbbrev = \"%s\" [%s]\n", memberInfoIn->clanAbbrev, v17);
  Com_Printf(0, "    clanTagType = %d ($%x)\n", memberInfoIn->clanTagType, memberInfoIn->clanTagType);
  Com_Printf(0, "    headsetPresent = %d ($%x)\n", memberInfoIn->headsetPresent, memberInfoIn->headsetPresent);
  Com_Printf(0, "    usingGamepad = %d ($%x)\n", memberInfoIn->usingGamepad, memberInfoIn->usingGamepad);
  Com_Printf(0, "    vote = %d ($%x)\n", (unsigned int)memberInfoIn->vote, (unsigned int)memberInfoIn->vote);
  Com_Printf(0, "    bestWeaponIndex = %d ($%x)\n", (unsigned int)memberInfoIn->bestWeaponIndex, (unsigned int)memberInfoIn->bestWeaponIndex);
  Com_Printf(0, "    wins = %d ($%x)\n", (unsigned int)memberInfoIn->wins, (unsigned int)memberInfoIn->wins);
  Com_Printf(0, "    kdRatio = %d ($%x)\n", (unsigned int)memberInfoIn->kdRatio, (unsigned int)memberInfoIn->kdRatio);
  Com_Printf(0, "    currentWinStreak = %d ($%x)\n", (unsigned int)memberInfoIn->currentWinStreak, (unsigned int)memberInfoIn->currentWinStreak);
  Com_Printf(0, "    gamesPlayed = %d ($%x)\n", (unsigned int)memberInfoIn->gamesPlayed, (unsigned int)memberInfoIn->gamesPlayed);
  Com_Printf(0, "    winLossRatio = %d ($%x)\n", (unsigned int)memberInfoIn->winLossRatio, (unsigned int)memberInfoIn->winLossRatio);
  Com_Printf(0, "    timePlayedTotal = %d ($%x)\n", (unsigned int)memberInfoIn->timePlayedTotal, (unsigned int)memberInfoIn->timePlayedTotal);
  v17[0] = 0;
  if ( memberInfoIn != (const ClientAuthoritativeMemberInfo *)-168i64 )
  {
    for ( k = 0i64; k < 5; ++k )
    {
      Com_sprintf(dest, 4ui64, "%2.2x", (unsigned int)(char)memberInfoIn->killsHistory[k]);
      I_strcat(v17, 0x200ui64, dest);
      if ( k < 4 )
        I_strcat(v17, 0x200ui64, " ");
    }
  }
  Com_Printf(0, "    killsHistory (0x) = %s\n", v17);
  v17[0] = 0;
  if ( memberInfoIn != (const ClientAuthoritativeMemberInfo *)-173i64 )
  {
    for ( m = 0i64; m < 5; ++m )
    {
      Com_sprintf(dest, 4ui64, "%2.2x", (unsigned int)(char)memberInfoIn->deathsHistory[m]);
      I_strcat(v17, 0x200ui64, dest);
      if ( m < 4 )
        I_strcat(v17, 0x200ui64, " ");
    }
  }
  Com_Printf(0, "    deathsHistory (0x) = %s\n", v17);
  Com_Printf(0, "    trueSkill = %d ($%x)\n", (unsigned int)memberInfoIn->trueSkill, (unsigned int)memberInfoIn->trueSkill);
  Com_Printf(0, "    mlgSpectator = %d\n", memberInfoIn->mlgSpectator != 0);
  Com_Printf(0, "    mlgFollower = %d\n", memberInfoIn->mlgFollower != 0);
  Com_Printf(0, "    mlgFollowerIndex = %d\n", (unsigned int)memberInfoIn->mlgFollowerIndex);
  LOBYTE(v4) = memberInfoIn->isHeadless;
  Com_Printf(0, "    isHeadless = %d\n", v4);
  Com_Printf(0, "    platform = %d\n", (unsigned int)(char)memberInfoIn->platform[0]);
  Com_Printf(0, "    platformId = %lu\n", memberInfoIn->platformId);
  v13 = "false";
  v14 = "false";
  if ( memberInfoIn->isPaidUser )
    v14 = "true";
  Com_Printf(0, "    isPaidUser = %s\n", v14);
  if ( memberInfoIn->hasOnlineSubscription )
    v13 = "true";
  Com_Printf(0, "    hasOnlineSubscription = %s\n", v13);
  Com_Printf(0, "======================\n");
}


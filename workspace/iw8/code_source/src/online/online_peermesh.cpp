/*
==============
PeerMesh_GetLocalConnectivity
==============
*/

int __fastcall PeerMesh_GetLocalConnectivity(const PartyData *party)
{
  return ?PeerMesh_GetLocalConnectivity@@YAHPEBUPartyData@@@Z(party);
}

/*
==============
PeerMesh_CanClientConnect
==============
*/

bool __fastcall PeerMesh_CanClientConnect(const PartyData *party, const int clientNum)
{
  return ?PeerMesh_CanClientConnect@@YA_NPEBUPartyData@@H@Z(party, clientNum);
}

/*
==============
PeerMesh_GetConnectivityBitsForHost
==============
*/

int __fastcall PeerMesh_GetConnectivityBitsForHost(const PartyData *party)
{
  return ?PeerMesh_GetConnectivityBitsForHost@@YAHPEBUPartyData@@@Z(party);
}

/*
==============
PeerMesh_IsHostConnectivitySet
==============
*/

bool __fastcall PeerMesh_IsHostConnectivitySet(const PartyData *party, const int connectivityBits)
{
  return ?PeerMesh_IsHostConnectivitySet@@YA_NPEBUPartyData@@H@Z(party, connectivityBits);
}

/*
==============
PeerMesh_IsEnabled
==============
*/

bool __fastcall PeerMesh_IsEnabled(const PartyData *party)
{
  return ?PeerMesh_IsEnabled@@YA_NPEBUPartyData@@@Z(party);
}

/*
==============
PeerMesh_GetClientConnectivity
==============
*/

int __fastcall PeerMesh_GetClientConnectivity(const PartyData *party, const int clientNum)
{
  return ?PeerMesh_GetClientConnectivity@@YAHPEBUPartyData@@H@Z(party, clientNum);
}

/*
==============
PeerMesh_GetConnectivityBitsForClient
==============
*/

int __fastcall PeerMesh_GetConnectivityBitsForClient(const PartyData *party, const int clientNum)
{
  return ?PeerMesh_GetConnectivityBitsForClient@@YAHPEBUPartyData@@H@Z(party, clientNum);
}

/*
==============
PeerMesh_Frame
==============
*/

void __fastcall PeerMesh_Frame(PartyData *party, const LocalClientNum_t localClientNum)
{
  ?PeerMesh_Frame@@YAXPEAUPartyData@@W4LocalClientNum_t@@@Z(party, localClientNum);
}

/*
==============
PeerMesh_HostMigrated
==============
*/

void __fastcall PeerMesh_HostMigrated(PartyData *party, const int newHost)
{
  ?PeerMesh_HostMigrated@@YAXPEAUPartyData@@H@Z(party, newHost);
}

/*
==============
PeerMesh_InitClientConnectivity
==============
*/

bool __fastcall PeerMesh_InitClientConnectivity(PartyData *party, const int clientNum, const int initConnectivity)
{
  return ?PeerMesh_InitClientConnectivity@@YA_NPEAUPartyData@@HH@Z(party, clientNum, initConnectivity);
}

/*
==============
PeerMesh_Draw
==============
*/

void __fastcall PeerMesh_Draw(const LocalClientNum_t localClientNum)
{
  ?PeerMesh_Draw@@YAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
PeerMesh_InitLocalConnectivity
==============
*/

void __fastcall PeerMesh_InitLocalConnectivity(PartyData *party, const int initConnectivity)
{
  ?PeerMesh_InitLocalConnectivity@@YAXPEAUPartyData@@H@Z(party, initConnectivity);
}

/*
==============
PeerMesh_SetClientConnectivity
==============
*/

bool __fastcall PeerMesh_SetClientConnectivity(PartyData *party, const int clientNum, const int connectivityBits)
{
  return ?PeerMesh_SetClientConnectivity@@YA_NPEAUPartyData@@HH@Z(party, clientNum, connectivityBits);
}

/*
==============
PeerMesh_GetConnectivityBitsForLocalClients
==============
*/

int __fastcall PeerMesh_GetConnectivityBitsForLocalClients(const PartyData *party)
{
  return ?PeerMesh_GetConnectivityBitsForLocalClients@@YAHPEBUPartyData@@@Z(party);
}

/*
==============
PeerMesh_RemoveClientConnectivity
==============
*/

bool __fastcall PeerMesh_RemoveClientConnectivity(PartyData *party, const int clientNum, const int removeConnectivityBits)
{
  return ?PeerMesh_RemoveClientConnectivity@@YA_NPEAUPartyData@@HH@Z(party, clientNum, removeConnectivityBits);
}

/*
==============
PeerMesh_Send
==============
*/

bool __fastcall PeerMesh_Send(PartyData *party, const LocalClientNum_t localClientNum, const int clientNum, const unsigned __int8 *data, const int len, const bool voiceData, const bool canRelay)
{
  return ?PeerMesh_Send@@YA_NPEAUPartyData@@W4LocalClientNum_t@@HPEBEH_N3@Z(party, localClientNum, clientNum, data, len, voiceData, canRelay);
}

/*
==============
PeerMesh_ClientConnected
==============
*/

void __fastcall PeerMesh_ClientConnected(PartyData *party, const int clientNum)
{
  ?PeerMesh_ClientConnected@@YAXPEAUPartyData@@H@Z(party, clientNum);
}

/*
==============
PeerMesh_GetConnectivityBitsForParty
==============
*/

int __fastcall PeerMesh_GetConnectivityBitsForParty(PartyData *party, const int lobbyMemberIndex)
{
  return ?PeerMesh_GetConnectivityBitsForParty@@YAHPEAUPartyData@@H@Z(party, lobbyMemberIndex);
}

/*
==============
PeerMesh_BuildRouteList
==============
*/

void __fastcall PeerMesh_BuildRouteList(const PartyData *party, LocalClientNum_t localClientNum, int ourClientNum, int *routeList, unsigned int routeListSize)
{
  ?PeerMesh_BuildRouteList@@YAXPEBUPartyData@@W4LocalClientNum_t@@HPEAHI@Z(party, localClientNum, ourClientNum, routeList, routeListSize);
}

/*
==============
PeerMesh_CanClientsConnect
==============
*/

bool __fastcall PeerMesh_CanClientsConnect(const PartyData *party, const int client1Num, const int client2Num)
{
  return ?PeerMesh_CanClientsConnect@@YA_NPEBUPartyData@@HH@Z(party, client1Num, client2Num);
}

/*
==============
PeerMesh_SyncLocalConnectivity
==============
*/

bool __fastcall PeerMesh_SyncLocalConnectivity(PartyData *party, const LocalClientNum_t localClientNum)
{
  return ?PeerMesh_SyncLocalConnectivity@@YA_NPEAUPartyData@@W4LocalClientNum_t@@@Z(party, localClientNum);
}

/*
==============
PeerMesh_AddClientConnectivity
==============
*/

bool __fastcall PeerMesh_AddClientConnectivity(PartyData *party, const int clientNum, const int addConnectivityBits)
{
  return ?PeerMesh_AddClientConnectivity@@YA_NPEAUPartyData@@HH@Z(party, clientNum, addConnectivityBits);
}

/*
==============
PeerMesh_GetConnectivityBitsForRemoteClients
==============
*/

int __fastcall PeerMesh_GetConnectivityBitsForRemoteClients(const PartyData *party)
{
  return ?PeerMesh_GetConnectivityBitsForRemoteClients@@YAHPEBUPartyData@@@Z(party);
}

/*
==============
PeerMesh_Receive
==============
*/

bool __fastcall PeerMesh_Receive(PartyData *party, const LocalClientNum_t localClientNum, const char *cmd, msg_t *msg, const netadr_t *from)
{
  return ?PeerMesh_Receive@@YA_NPEAUPartyData@@W4LocalClientNum_t@@PEBDPEAUmsg_t@@PEBUnetadr_t@@@Z(party, localClientNum, cmd, msg, from);
}

/*
==============
PeerMesh_ClientDisconnected
==============
*/

void __fastcall PeerMesh_ClientDisconnected(PartyData *party, const int remoteClient)
{
  ?PeerMesh_ClientDisconnected@@YAXPEAUPartyData@@H@Z(party, remoteClient);
}

/*
==============
PeerMesh_AddClientConnectivity
==============
*/
bool PeerMesh_AddClientConnectivity(PartyData *party, const int clientNum, const int addConnectivityBits)
{
  __int64 v4; 

  v4 = clientNum;
  if ( !Party_AreWeHost(party) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_peermesh.cpp", 549, ASSERT_TYPE_ASSERT, "(Party_AreWeHost( party ))", (const char *)&queryFormat, "Party_AreWeHost( party )") )
    __debugbreak();
  if ( !Party_IsMemberIndexDataAvailable(party, v4) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_peermesh.cpp", 550, ASSERT_TYPE_ASSERT, "(Party_IsMemberIndexDataAvailable( party, clientNum ))", (const char *)&queryFormat, "Party_IsMemberIndexDataAvailable( party, clientNum )") )
    __debugbreak();
  return Party_GetNumGameSlots(party) <= 24 && (!Party_IsHostDedicated(party) || Party_IsPrivateDSMatch(party)) && PeerMesh_SetClientConnectivity(party, v4, addConnectivityBits | party->partyMembers[v4].connectivityBits);
}

/*
==============
PeerMesh_BuildRouteList
==============
*/
void PeerMesh_BuildRouteList(const PartyData *party, LocalClientNum_t localClientNum, int ourClientNum, int *routeList, unsigned int routeListSize)
{
  int *v6; 
  LocalClientNum_t m_id; 
  unsigned int v8; 
  int v9; 
  int v10; 
  __int64 v11; 
  __int64 v12; 
  signed int v13; 
  __int64 i; 
  int v15; 
  __int64 j; 
  const dvar_t *v17; 
  XUID *Xuid; 
  const char *v19; 
  int v20; 
  __int64 v21; 
  int *v22; 
  __int64 v23; 
  int v24; 
  unsigned int *v25; 
  __int64 v26; 
  int RoutesToClient; 
  __int64 v28; 
  const dvar_t *v29; 
  XUID *v30; 
  const char *v31; 
  XUID *v32; 
  const char *v33; 
  int v34; 
  int *v35; 
  int v36; 
  int v37; 
  int v38; 
  int v39; 
  bool IsHost; 
  unsigned int v41; 
  int v42; 
  signed __int64 v43; 
  signed __int64 v44; 
  int *v45; 
  char *v46; 
  signed __int64 v47; 
  __int64 v48; 
  int v49; 
  PartyData *v50; 
  int v51; 
  __int64 v52; 
  const dvar_t *v53; 
  unsigned int v54; 
  int v55; 
  signed __int64 v56; 
  int *v57; 
  char *v58; 
  signed __int64 v59; 
  unsigned int v60; 
  PartyData *v61; 
  int RoutesToClients; 
  __int64 v63; 
  int *v64; 
  const dvar_t *v65; 
  int v66; 
  int v67; 
  int *v68; 
  int *v69; 
  unsigned int v70; 
  PartyData *v71; 
  int *v72; 
  unsigned int *v73; 
  signed __int64 v74; 
  unsigned int v75; 
  signed int v76; 
  const dvar_t *v77; 
  __int64 v78; 
  int v79; 
  int *v80; 
  int v81; 
  __int64 v82; 
  __int64 v83; 
  unsigned int v84; 
  XUID v86; 
  int *routeLista; 
  PartyData *partya; 
  XUID result; 
  char v90[4]; 
  unsigned int memberIndex2[64]; 

  partya = (PartyData *)party;
  routeLista = routeList;
  v6 = routeList;
  m_id = localClientNum;
  LODWORD(v86.m_id) = localClientNum;
  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_peermesh.cpp", 223, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_peermesh.cpp", 224, ASSERT_TYPE_ASSERT, "(routeList)", (const char *)&queryFormat, "routeList") )
    __debugbreak();
  if ( routeListSize < 0x20 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_peermesh.cpp", 225, ASSERT_TYPE_ASSERT, "( routeListSize ) >= ( 32 )", "%s >= %s\n\t%i, %i", "routeListSize", "MAX_CLIENTS_PEERMESH", routeListSize, 32) )
    __debugbreak();
  v8 = 0;
  v9 = 0;
  v10 = 0;
  v84 = 0;
  v11 = 0i64;
  v12 = 0i64;
  do
  {
    if ( CL_CGameMP_ShouldSendPeerVoiceData(party, m_id, v10) )
    {
      if ( !Party_IsMemberRegistered(party, v10) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_peermesh.cpp", 238, ASSERT_TYPE_ASSERT, "(Party_IsMemberRegistered( party, listener ))", (const char *)&queryFormat, "Party_IsMemberRegistered( party, listener )") )
        __debugbreak();
      v13 = 0;
      for ( i = 0i64; i < v12; ++i )
      {
        if ( Party_CompareMemberAddrs(party, v10, memberIndex2[i]) )
          break;
        ++v13;
      }
      if ( v13 < (int)v84 )
        goto LABEL_34;
      v15 = 0;
      for ( j = 0i64; j < v11; ++j )
      {
        if ( Party_CompareMemberAddrs(party, v10, memberIndex2[j + 32]) )
          break;
        ++v15;
      }
      if ( v15 < v9 )
      {
LABEL_34:
        v8 = v84;
      }
      else
      {
        v17 = DVARBOOL_voice_debug;
        if ( !DVARBOOL_voice_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "voice_debug") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v17);
        if ( v17->current.enabled )
        {
          Xuid = Party_GetXuid(&result, party, v10);
          v19 = XUID::ToDevString(Xuid);
          Com_Printf(25, "Client %i (XUID %s) can hear us\n", (unsigned int)v10, v19);
        }
        v8 = v84;
        if ( PeerMesh_CanClientConnect(party, v10) )
        {
          if ( v84 >= 0x20 )
          {
            LODWORD(v83) = 32;
            LODWORD(v82) = v84;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_peermesh.cpp", 263, ASSERT_TYPE_ASSERT, "(unsigned)( totalPackets ) < (unsigned)( ( sizeof( *array_counter( destinationClientList ) ) + 0 ) )", "totalPackets doesn't index ARRAY_COUNT( destinationClientList )\n\t%i not in [0, %i)", v82, v83) )
              __debugbreak();
          }
          v8 = v84 + 1;
          v20 = *v6 | (1 << v10);
          memberIndex2[v12] = v10;
          *v6 = v20;
          ++v12;
          ++v84;
        }
        else
        {
          ++v9;
          memberIndex2[v11++ + 32] = v10;
        }
      }
      m_id = v86.m_id;
    }
    ++v10;
    ++v6;
  }
  while ( v10 < 32 );
  v21 = v9;
  if ( v9 <= 0 )
  {
    v36 = v84;
  }
  else
  {
    v22 = routeLista;
    v23 = 0i64;
    v24 = ourClientNum;
    v25 = &memberIndex2[v8];
    do
    {
      v26 = (int)memberIndex2[v23 + 32];
      RoutesToClient = PeerMesh_FindRoutesToClient(party, v24, v22, memberIndex2[v23 + 32]);
      v28 = RoutesToClient;
      if ( RoutesToClient >= 0 && Party_IsMemberRegistered(party, RoutesToClient) )
      {
        if ( (unsigned int)v28 >= 0x20 )
        {
          LODWORD(v83) = 32;
          LODWORD(v82) = v28;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_peermesh.cpp", 288, ASSERT_TYPE_ASSERT, "(unsigned)( clientWhoCanRelay ) < (unsigned)( 32 )", "clientWhoCanRelay doesn't index MAX_CLIENTS_PEERMESH\n\t%i not in [0, %i)", v82, v83) )
            __debugbreak();
        }
        if ( (_DWORD)v28 == v24 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_peermesh.cpp", 289, ASSERT_TYPE_ASSERT, "(clientWhoCanRelay != ourClientNum)", (const char *)&queryFormat, "clientWhoCanRelay != ourClientNum") )
          __debugbreak();
        v29 = DVARBOOL_voice_debug;
        if ( !DVARBOOL_voice_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "voice_debug") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v29);
        if ( v29->current.enabled )
        {
          v30 = Party_GetXuid(&result, party, v28);
          v31 = XUID::ToDevString(v30);
          v32 = Party_GetXuid(&v86, party, v26);
          v33 = XUID::ToDevString(v32);
          LODWORD(v82) = v28;
          Com_Printf(25, "Can't send packets to XUID %s (client %i) directly, we can ask %s (client %i) to send it for us\n", v33, (unsigned int)v26, v31, v82);
        }
        v34 = v22[v28];
        v35 = &v22[v28];
        if ( v34 )
        {
          v36 = v84;
          v37 = v34 | (1 << v26);
          v24 = ourClientNum;
        }
        else
        {
          v24 = ourClientNum;
          *v25++ = v28;
          v36 = v84 + 1;
          v37 = 1 << v26;
          ++v84;
        }
        *v35 = v37;
      }
      else
      {
        Com_Printf(25, "We have no route to client %i.  We'll try to blindly fire off the packet\n", (unsigned int)v26);
        v38 = v22[v26] | (1 << v26);
        v36 = v84 + 1;
        *v25 = v26;
        v22[v26] = v38;
        ++v25;
        ++v84;
      }
      ++v23;
    }
    while ( v23 < v21 );
  }
  v39 = ourClientNum;
  IsHost = Party_IsHost(party, ourClientNum);
  v41 = 8;
  if ( IsHost )
    v41 = 2;
  if ( v36 > (int)v41 )
  {
    v42 = 0;
    v43 = v41;
    v44 = v36;
    v86.m_id = v41;
    if ( v36 > 0 )
    {
      v45 = routeLista;
      v46 = &v90[4 * v36];
      v47 = 0i64;
      while ( 1 )
      {
        if ( v44 <= v43 || v42 >= 32 )
          goto LABEL_91;
        v48 = (int)memberIndex2[v47];
        ++v42;
        if ( !(_DWORD)v48 || ((v45[v48] - 1) & v45[v48]) != 0 )
          goto LABEL_89;
        v49 = v39;
        v50 = partya;
        v51 = PeerMesh_FindRoutesToClient(partya, v49, v45, v48);
        v52 = v51;
        if ( v51 < 0 )
          break;
        if ( (unsigned int)v51 >= 0x20 )
        {
          LODWORD(v83) = 32;
          LODWORD(v82) = v51;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_peermesh.cpp", 322, ASSERT_TYPE_ASSERT, "(unsigned)( clientWhoCanRelay ) < (unsigned)( 32 )", "clientWhoCanRelay doesn't index MAX_CLIENTS_PEERMESH\n\t%i not in [0, %i)", v82, v83) )
            __debugbreak();
        }
        if ( !Party_IsMemberRegistered(v50, v52) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_peermesh.cpp", 323, ASSERT_TYPE_ASSERT, "(Party_IsMemberRegistered( party, clientWhoCanRelay ))", (const char *)&queryFormat, "Party_IsMemberRegistered( party, clientWhoCanRelay )") )
          __debugbreak();
        if ( (_DWORD)v52 == ourClientNum || (_DWORD)v52 == (_DWORD)v48 )
          goto LABEL_88;
        if ( !v45[v52] )
        {
          v45 = routeLista;
          goto LABEL_88;
        }
        v53 = DVARBOOL_voice_debug;
        if ( !DVARBOOL_voice_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "voice_debug") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v53);
        if ( v53->current.enabled )
          Com_Printf(25, "Asking client %i to relay it to %i\n", (unsigned int)v52, (unsigned int)v48);
        --v44;
        v45[v52] |= 1 << v48;
        v45 = routeLista;
        v36 = --v84;
        routeLista[(int)v48] = 0;
        v54 = *(_DWORD *)v46;
        v46 -= 4;
        memberIndex2[v47] = v54;
LABEL_90:
        v43 = v86.m_id;
        if ( v47 >= v44 )
          goto LABEL_91;
        v39 = ourClientNum;
      }
      Com_Printf(25, "We have no way of talking to clientNum %i\n", (unsigned int)v48);
LABEL_88:
      v36 = v84;
LABEL_89:
      ++v47;
      goto LABEL_90;
    }
LABEL_91:
    v55 = 0;
    v56 = v36;
    if ( v36 > 0 )
    {
      v57 = routeLista;
      v58 = &v90[4 * v36];
      v59 = 0i64;
      do
      {
        if ( v56 <= v43 || v55 >= 32 )
          break;
        ++v55;
        v60 = v57[memberIndex2[v59]];
        if ( (int)__popcnt(v60) < 3 )
        {
          v61 = partya;
          RoutesToClients = PeerMesh_FindRoutesToClients(partya, ourClientNum, v57, v60);
          v63 = RoutesToClients;
          if ( (unsigned int)RoutesToClients >= 0x20 )
          {
            LODWORD(v83) = 32;
            LODWORD(v82) = RoutesToClients;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_peermesh.cpp", 354, ASSERT_TYPE_ASSERT, "(unsigned)( clientWhoCanRelay ) < (unsigned)( 32 )", "clientWhoCanRelay doesn't index MAX_CLIENTS_PEERMESH\n\t%i not in [0, %i)", v82, v83) )
              __debugbreak();
          }
          if ( !Party_IsMemberRegistered(v61, v63) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_peermesh.cpp", 355, ASSERT_TYPE_ASSERT, "(Party_IsMemberRegistered( party, clientWhoCanRelay ))", (const char *)&queryFormat, "Party_IsMemberRegistered( party, clientWhoCanRelay )") )
            __debugbreak();
          if ( (_DWORD)v63 != ourClientNum )
          {
            v64 = &v57[v63];
            if ( *v64 )
            {
              v65 = DVARBOOL_voice_debug;
              if ( !DVARBOOL_voice_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "voice_debug") )
                __debugbreak();
              Dvar_CheckFrontendServerThread(v65);
              if ( v65->current.enabled )
              {
                Com_Printf(25, "Asking client %i to relay a voice packet to ", (unsigned int)v63);
                v66 = 0;
                v67 = 1;
                v68 = &v57[memberIndex2[v59]];
                do
                {
                  if ( (v67 & *v68) != 0 )
                    Com_Printf(25, "client %i, ", (unsigned int)v66);
                  ++v66;
                  v67 = __ROL4__(v67, 1);
                }
                while ( v66 < 32 );
                Com_Printf(25, "\n");
                v57 = routeLista;
              }
              --v56;
              v69 = &v57[memberIndex2[v59]];
              v36 = v84 - 1;
              *v64 |= *v69;
              v70 = *(_DWORD *)v58;
              v58 -= 4;
              memberIndex2[v59] = v70;
              *v69 = 0;
              --v84;
              goto LABEL_116;
            }
          }
          v36 = v84;
        }
        ++v59;
LABEL_116:
        v43 = v86.m_id;
      }
      while ( v59 < v56 );
    }
    v71 = partya;
    if ( !Party_IsHost(partya, ourClientNum) && v36 > v43 )
    {
      v72 = routeLista;
      v73 = (unsigned int *)&v90[4 * v36];
      v74 = v36 - v43;
      v75 = v36 - 1;
      do
      {
        if ( v75 >= 0x20 )
        {
          LODWORD(v83) = 32;
          LODWORD(v82) = v75;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_peermesh.cpp", 388, ASSERT_TYPE_ASSERT, "(unsigned)( totalPackets - 1 ) < (unsigned)( 32 )", "totalPackets - 1 doesn't index MAX_CLIENTS_PEERMESH\n\t%i not in [0, %i)", v82, v83) )
            __debugbreak();
        }
        v76 = *v73;
        if ( *v73 >= 0x20 )
        {
          LODWORD(v83) = 32;
          LODWORD(v82) = *v73;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_peermesh.cpp", 389, ASSERT_TYPE_ASSERT, "(unsigned)( destinationClientList[totalPackets - 1] ) < (unsigned)( 32 )", "destinationClientList[totalPackets - 1] doesn't index MAX_CLIENTS_PEERMESH\n\t%i not in [0, %i)", v82, v83) )
            __debugbreak();
        }
        v77 = DVARBOOL_voice_debug;
        if ( !DVARBOOL_voice_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "voice_debug") )
        {
          __debugbreak();
          v76 = *v73;
        }
        Dvar_CheckFrontendServerThread(v77);
        if ( v77->current.enabled )
        {
          v76 = *v73;
          Com_Printf(25, "We are sending too many packets to too many people (%i peers currently), so asking the server to send the packet to client %i\n", v75 + 1, *v73);
        }
        if ( ((1 << Party_HostNum(v71)) & v72[v76]) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_peermesh.cpp", 393, ASSERT_TYPE_ASSERT, "(( routeList[destinationClientList[totalPackets - 1]] & ( 1 << Party_HostNum( party ) ) ) == 0)", (const char *)&queryFormat, "( routeList[destinationClientList[totalPackets - 1]] & ( 1 << Party_HostNum( party ) ) ) == 0") )
        {
          __debugbreak();
          v76 = *v73;
        }
        v78 = v76;
        v79 = v72[v76];
        v80 = &v72[v78];
        v81 = Party_HostNum(v71);
        --v75;
        --v73;
        v72[v81] |= v79;
        *v80 = 0;
        --v74;
      }
      while ( v74 );
    }
  }
}

/*
==============
PeerMesh_CanClient1ConnectToClient2
==============
*/
unsigned __int8 PeerMesh_CanClient1ConnectToClient2(const PartyData *party, const int client1Num, const int client2Num)
{
  int ClientConnectivity; 

  if ( Party_IsHost(party, client1Num) || Party_IsHost(party, client2Num) )
    return 1;
  if ( !Party_IsMemberRegistered(party, client2Num) || client1Num >= 32 )
    return 0;
  ClientConnectivity = PeerMesh_GetClientConnectivity(party, client2Num);
  return _bittest(&ClientConnectivity, client1Num);
}

/*
==============
PeerMesh_CanClientConnect
==============
*/
unsigned __int8 PeerMesh_CanClientConnect(const PartyData *party, const int clientNum)
{
  int LocalConnectivity; 
  int v7; 

  if ( (unsigned int)clientNum >= 0xC8 )
  {
    v7 = 200;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_peermesh.cpp", 731, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( 200 )", "clientNum doesn't index MAX_PARTY_MEMBERS\n\t%i not in [0, %i)", clientNum, v7) )
      __debugbreak();
  }
  if ( Party_GetNumGameSlots(party) <= 24 && (!Party_IsHostDedicated(party) || Party_IsPrivateDSMatch(party)) )
  {
    if ( Party_AreWeHost(party) || Party_IsHost(party, clientNum) )
      return 1;
    if ( clientNum < 32 )
    {
      LocalConnectivity = PeerMesh_GetLocalConnectivity(party);
      return _bittest(&LocalConnectivity, clientNum);
    }
  }
  return 0;
}

/*
==============
PeerMesh_CanClientConnectToClients
==============
*/
char PeerMesh_CanClientConnectToClients(const PartyData *party, const int sender, const int otherClients)
{
  unsigned int v6; 
  int ClientConnectivity; 

  if ( sender < 32 )
  {
    v6 = 0;
    while ( 1 )
    {
      if ( _bittest(&otherClients, v6) )
      {
        if ( !Party_IsMemberRegistered(party, v6) )
          break;
        ClientConnectivity = PeerMesh_GetClientConnectivity(party, v6);
        if ( !_bittest(&ClientConnectivity, sender) )
          break;
      }
      if ( (int)++v6 >= 32 )
        return 1;
    }
  }
  return 0;
}

/*
==============
PeerMesh_CanClientsConnect
==============
*/
bool PeerMesh_CanClientsConnect(const PartyData *party, const int client1Num, const int client2Num)
{
  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_peermesh.cpp", 754, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( client1Num == client2Num && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_peermesh.cpp", 755, ASSERT_TYPE_ASSERT, "( client1Num ) != ( client2Num )", "%s != %s\n\t%i, %i", "client1Num", "client2Num", client1Num, client2Num) )
    __debugbreak();
  return PeerMesh_CanClient1ConnectToClient2(party, client1Num, client2Num) && PeerMesh_CanClient1ConnectToClient2(party, client2Num, client1Num);
}

/*
==============
PeerMesh_ClientConnected
==============
*/
void PeerMesh_ClientConnected(PartyData *party, const int clientNum)
{
  int ConnectivityBitsForClient; 
  int i; 
  int v6; 
  int LocalConnectivity; 

  if ( Party_GetNumGameSlots(party) <= 24 && (!Party_IsHostDedicated(party) || Party_IsPrivateDSMatch(party)) && !Party_AreWeHost(party) )
  {
    ConnectivityBitsForClient = 0;
    for ( i = 0; i < 2; ++i )
      PeerMesh_SetConnectivityTestTime(party, clientNum, (const LocalClientNum_t)i, 0);
    if ( Party_IsMemberHost(party, clientNum) )
    {
      if ( Party_GetNumGameSlots(party) <= 24 && (!Party_IsHostDedicated(party) || Party_IsPrivateDSMatch(party)) && !Party_IsPrivateDSMatch(party) )
      {
        v6 = Party_HostNum(party);
        ConnectivityBitsForClient = PeerMesh_GetConnectivityBitsForClient(party, v6);
      }
      LocalConnectivity = PeerMesh_GetLocalConnectivity(party);
      PeerMesh_SetLocalConnectivity(party, ConnectivityBitsForClient | LocalConnectivity);
    }
  }
}

/*
==============
PeerMesh_ClientDisconnected
==============
*/
void PeerMesh_ClientDisconnected(PartyData *party, const int remoteClient)
{
  int LocalConnectivity; 
  int v6; 

  if ( (unsigned int)remoteClient >= 0xC8 )
  {
    v6 = 200;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_peermesh.cpp", 871, ASSERT_TYPE_ASSERT, "(unsigned)( remoteClient ) < (unsigned)( 200 )", "remoteClient doesn't index MAX_PARTY_MEMBERS\n\t%i not in [0, %i)", remoteClient, v6) )
      __debugbreak();
  }
  if ( Party_GetNumGameSlots(party) <= 24 && (!Party_IsHostDedicated(party) || Party_IsPrivateDSMatch(party)) && !Party_AreWeHost(party) && !Party_IsMemberHost(party, remoteClient) && remoteClient < 32 )
  {
    LocalConnectivity = PeerMesh_GetLocalConnectivity(party);
    PeerMesh_SetLocalConnectivity(party, LocalConnectivity & ~(1 << remoteClient));
  }
}

/*
==============
PeerMesh_Draw
==============
*/
void PeerMesh_Draw(const LocalClientNum_t localClientNum)
{
  const dvar_t *v5; 
  int v6; 
  __int64 v7; 
  const PartyData *CurrentParty; 
  int ControllerFromClient; 
  const dvar_t *v10; 
  bool v11; 
  const ScreenPlacement *v12; 
  int OurClientNum; 
  int v15; 
  int i; 
  float fmt; 
  float fmta; 
  float y; 
  float ya; 
  float v28; 
  float v29; 
  float v30; 
  float v31; 

  v5 = DVARBOOL_estrangedClientList;
  v6 = 0;
  v7 = localClientNum;
  if ( !DVARBOOL_estrangedClientList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "estrangedClientList") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v5);
  if ( v5->current.enabled )
  {
    CurrentParty = Live_GetCurrentParty();
    if ( Party_GetNumGameSlots(CurrentParty) <= 24 && (!Party_IsHostDedicated(CurrentParty) || Party_IsPrivateDSMatch(CurrentParty)) )
    {
      ControllerFromClient = CL_Mgr_GetControllerFromClient((LocalClientNum_t)v7);
      if ( Live_IsSignedIn(ControllerFromClient) )
      {
        v10 = DVARBOOL_onlinegame;
        if ( !DVARBOOL_onlinegame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "onlinegame") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v10);
        if ( v10->current.enabled || CL_GetLocalClientGameConnectionState((const LocalClientNum_t)v7) == CA_ACTIVE && Dvar_GetBool_Internal_DebugName(DVARBOOL_systemlink, "systemlink") )
        {
          __asm
          {
            vmovaps [rsp+0B8h+var_48], xmm7
            vmovaps [rsp+0B8h+var_58], xmm8
          }
          if ( activeScreenPlacementMode )
          {
            if ( activeScreenPlacementMode == SCRMODE_DISPLAY )
            {
              v12 = &scrPlaceViewDisplay[v7];
LABEL_22:
              OurClientNum = Live_GetOurClientNum(ControllerFromClient, CurrentParty);
              _RBX = DVARVEC2_estrangedClientPos;
              v15 = OurClientNum;
              if ( !DVARVEC2_estrangedClientPos && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 727, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "estrangedClientPos") )
                __debugbreak();
              __asm { vmovaps [rsp+0B8h+var_38], xmm6 }
              Dvar_CheckFrontendServerThread(_RBX);
              __asm
              {
                vmovss  xmm7, dword ptr [rbx+28h]
                vmovss  xmm8, dword ptr [rbx+2Ch]
              }
              if ( v15 >= 0 )
              {
                for ( i = 0; i < 32; ++i )
                {
                  if ( Party_IsMemberRegistered(CurrentParty, i) && v15 != i && !PeerMesh_CanClientConnect(CurrentParty, i) )
                  {
                    if ( !v6 )
                    {
                      *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_estrangedClientSize, "estrangedClientSize");
                      __asm { vmovaps xmm6, xmm0 }
                      *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_estrangedClientSize, "estrangedClientSize");
                      __asm
                      {
                        vmovss  [rsp+0B8h+var_70], xmm6
                        vmovss  [rsp+0B8h+var_78], xmm0
                        vmovss  [rsp+0B8h+y], xmm8
                        vmovss  dword ptr [rsp+0B8h+fmt], xmm7
                      }
                      CL_DrawText(v12, "Can't get packets to:", 0x7FFFFFFF, cls.smallDevFont, fmta, ya, 1, 1, v29, v31, &colorRedFaded, 0);
                    }
                    PeerMesh_DrawEstrangedClient(v12, (LocalClientNum_t)v7, i, v6++);
                  }
                }
              }
              else if ( g_partyData.inParty || Lobby_IsInLobby() )
              {
                *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_estrangedClientSize, "estrangedClientSize");
                __asm { vmovaps xmm6, xmm0 }
                *(double *)&_XMM0 = Dvar_GetFloat_Internal_DebugName(DVARFLT_estrangedClientSize, "estrangedClientSize");
                __asm
                {
                  vmovss  [rsp+0B8h+var_70], xmm6
                  vmovss  [rsp+0B8h+var_78], xmm0
                  vmovss  [rsp+0B8h+y], xmm8
                  vmovss  dword ptr [rsp+0B8h+fmt], xmm7
                }
                CL_DrawText(v12, "We don't know our client num", 0x7FFFFFFF, cls.smallDevFont, fmt, y, 1, 1, v28, v30, &colorRedFaded, 0);
              }
              __asm
              {
                vmovaps xmm6, [rsp+0B8h+var_38]
                vmovaps xmm7, [rsp+0B8h+var_48]
                vmovaps xmm8, [rsp+0B8h+var_58]
              }
              return;
            }
            if ( activeScreenPlacementMode == SCRMODE_INVALID )
              v11 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.h", 127, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "ScrPlace_GetActivePlacement() called when outside of a valid render loop.");
            else
              v11 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\screen_placement.h", 130, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unsupported activeScreenPlacementMode");
            if ( v11 )
              __debugbreak();
          }
          v12 = &scrPlaceFull;
          goto LABEL_22;
        }
      }
    }
  }
}

/*
==============
PeerMesh_DrawEstrangedClient
==============
*/
void PeerMesh_DrawEstrangedClient(const ScreenPlacement *scrPlace, LocalClientNum_t localClientNum, int estrangedClientNum, int drawPos)
{
  const dvar_t *v19; 
  float fmt; 
  float y; 
  float v30; 
  float v31; 
  char buf[64]; 
  char v33; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-48h], xmm6
    vmovaps xmmword ptr [rax-58h], xmm7
    vmovaps xmmword ptr [rax-68h], xmm8
    vmovaps xmmword ptr [rax-78h], xmm9
  }
  if ( !CL_GetClientName(localClientNum, estrangedClientNum, buf, 0x40ui64) )
    Com_sprintf(buf, 0x40ui64, "client %i", (unsigned int)estrangedClientNum);
  _RBX = DVARVEC2_estrangedClientPos;
  if ( !DVARVEC2_estrangedClientPos && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 727, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "estrangedClientPos") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm
  {
    vmovss  xmm8, dword ptr [rbx+28h]
    vmovss  xmm9, dword ptr [rbx+2Ch]
  }
  _RBX = DVARFLT_estrangedClientSize;
  if ( !DVARFLT_estrangedClientSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "estrangedClientSize") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vmovss  xmm7, dword ptr [rbx+28h] }
  _RBX = DVARFLT_estrangedClientSize;
  if ( !DVARFLT_estrangedClientSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "estrangedClientSize") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(_RBX);
  __asm { vmovss  xmm6, dword ptr [rbx+28h] }
  v19 = DVARINT_estrangedClientHeight;
  if ( !DVARINT_estrangedClientHeight && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "estrangedClientHeight") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v19);
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, eax
    vmovss  [rsp+128h+var_E0], xmm7
    vmovss  [rsp+128h+var_E8], xmm6
    vaddss  xmm1, xmm0, xmm9
    vmovss  [rsp+128h+y], xmm1
    vmovss  dword ptr [rsp+128h+fmt], xmm8
  }
  CL_DrawText(scrPlace, buf, 0x7FFFFFFF, cls.smallDevFont, fmt, y, 1, 1, v30, v31, &colorRedFaded, 0);
  _R11 = &v33;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-18h]
    vmovaps xmm7, xmmword ptr [r11-28h]
    vmovaps xmm8, xmmword ptr [r11-38h]
    vmovaps xmm9, xmmword ptr [r11-48h]
  }
}

/*
==============
PeerMesh_FindRoutesToClient
==============
*/
__int64 PeerMesh_FindRoutesToClient(const PartyData *party, int ourClientNum, int *routeList, const int clientNum)
{
  __int64 v4; 
  int v8; 
  unsigned int v9; 
  int ClientConnectivity; 
  int v11; 
  int v12; 
  int v13; 
  int ConnectivityBitsForClient; 
  int v15; 
  int v16; 
  unsigned int v17; 
  int memberIndex; 

  v4 = clientNum;
  if ( !Party_IsMemberRegistered(party, clientNum) )
    return 0xFFFFFFFFi64;
  v8 = routeList[v4];
  if ( _bittest(&v8, ourClientNum) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_peermesh.cpp", 1409, ASSERT_TYPE_ASSERT, "(( routeList[clientNum] & (1 << ourClientNum) ) == 0)", (const char *)&queryFormat, "( routeList[clientNum] & (1 << ourClientNum) ) == 0") )
    __debugbreak();
  if ( Party_IsHostDedicated(party) )
    v9 = -2;
  else
    v9 = Party_HostNum(party);
  memberIndex = v9;
  ClientConnectivity = PeerMesh_GetClientConnectivity(party, ourClientNum);
  v11 = 0;
  v12 = PeerMesh_GetClientConnectivity(party, v4);
  if ( (v9 & 0x80000000) != 0 || !Party_IsHostRegistered(party) || (Party_GetNumGameSlots(party) > 24 || Party_IsHostDedicated(party) && !Party_IsPrivateDSMatch(party) || Party_IsPrivateDSMatch(party) ? (ConnectivityBitsForClient = 0) : (v13 = Party_HostNum(party), ConnectivityBitsForClient = PeerMesh_GetConnectivityBitsForClient(party, v13)), (ClientConnectivity & v12) != ConnectivityBitsForClient) )
  {
    v15 = ourClientNum + 1;
    v16 = 0;
    while ( 1 )
    {
      v9 = (v16 + v15) % 32;
      if ( !Party_IsHost(party, v9) && Party_IsMemberRegistered(party, v9) && !Party_MemberHasLoopbackAddr(party, v9) && v9 != (_DWORD)v4 )
      {
        v17 = routeList[v9];
        if ( v17 )
        {
          if ( (int)__popcnt(v17) < 3 && _bittest(&v12, v9) )
            break;
        }
      }
      if ( ++v16 >= 32 )
      {
        while ( 1 )
        {
          v9 = (v11 + v15) % 32;
          if ( !Party_IsHost(party, v9) && Party_IsMemberRegistered(party, v9) && !Party_MemberHasLoopbackAddr(party, v9) && v9 != (_DWORD)v4 && !routeList[v9] && Party_IsMemberRegistered(party, v9) && _bittest(&v12, v9) )
            break;
          if ( ++v11 >= 32 )
          {
            v9 = memberIndex;
            if ( memberIndex >= 0 && Party_IsMemberRegistered(party, memberIndex) )
              return v9;
            return 0xFFFFFFFFi64;
          }
        }
        return v9;
      }
    }
  }
  return v9;
}

/*
==============
PeerMesh_FindRoutesToClients
==============
*/
int PeerMesh_FindRoutesToClients(const PartyData *party, int ourClientNum, int *routeList, const int clientBits)
{
  int v5; 
  int i; 
  int v9; 
  int j; 
  int v11; 
  unsigned int v12; 
  int ClientConnectivity; 

  v5 = ourClientNum + 1;
  for ( i = 0; i < 32; ++i )
  {
    v9 = (i + v5) % 32;
    if ( !Party_IsHost(party, v9) && Party_IsMemberRegistered(party, v9) && !Party_MemberHasLoopbackAddr(party, v9) && (((clientBits - 1) & clientBits) != 0 || clientBits != 1 << v9) && routeList[v9] && PeerMesh_CanClientConnectToClients(party, v9, clientBits) )
      return (i + v5) % 32;
  }
  for ( j = 0; j < 32; ++j )
  {
    v11 = (j + v5) % 32;
    if ( !Party_IsHost(party, v11) && Party_IsMemberRegistered(party, v11) && !Party_MemberHasLoopbackAddr(party, v11) && (((clientBits - 1) & clientBits) != 0 || clientBits != 1 << v11) && !routeList[v11] && v11 < 32 )
    {
      v12 = 0;
      while ( 1 )
      {
        if ( _bittest(&clientBits, v12) )
        {
          if ( !Party_IsMemberRegistered(party, v12) )
            break;
          ClientConnectivity = PeerMesh_GetClientConnectivity(party, v12);
          if ( !_bittest(&ClientConnectivity, v11) )
            break;
        }
        if ( (int)++v12 >= 32 )
          return (j + v5) % 32;
      }
    }
  }
  return Party_HostNum(party);
}

/*
==============
PeerMesh_Frame
==============
*/
void PeerMesh_Frame(PartyData *party, const LocalClientNum_t localClientNum)
{
  __int64 v2; 
  int v4; 
  int ControllerFromClient; 
  int OurClientNum; 
  unsigned int ClientConnectivity; 
  unsigned int LocalConnectivity; 
  unsigned int v9; 
  const char *v10; 

  v2 = localClientNum;
  if ( CL_Mgr_IsClientActive(localClientNum) && party->inParty && Party_GetNumGameSlots(party) <= 24 && (!Party_IsHostDedicated(party) || Party_IsPrivateDSMatch(party)) && !Party_AreWeHost(party) )
  {
    if ( !party->inParty && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_peermesh.cpp", 1483, ASSERT_TYPE_ASSERT, "(party->inParty)", (const char *)&queryFormat, "party->inParty") )
      __debugbreak();
    if ( Party_IsRunning(party) )
    {
      if ( !PartyMigrate_MigrateActive(party) )
      {
        v4 = Sys_Milliseconds();
        if ( v4 - party->connectivityUpdateTime >= 400 )
        {
          party->connectivityUpdateTime = v4;
          if ( Party_GetNumGameSlots(party) > 24 || Party_IsHostDedicated(party) && !Party_IsPrivateDSMatch(party) )
            return;
          if ( Party_IsHostDedicated(party) )
          {
            if ( !Party_IsPrivateDSMatch(party) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_peermesh.cpp", 437, ASSERT_TYPE_ASSERT, "(Party_IsPrivateDSMatch( party ))", (const char *)&queryFormat, "Party_IsPrivateDSMatch( party )") )
              __debugbreak();
            return;
          }
          ControllerFromClient = CL_Mgr_GetControllerFromClient((LocalClientNum_t)v2);
          OurClientNum = Live_GetOurClientNum(ControllerFromClient, party);
          ClientConnectivity = PeerMesh_GetClientConnectivity(party, OurClientNum);
          LocalConnectivity = PeerMesh_GetLocalConnectivity(party);
          v9 = LocalConnectivity;
          if ( LocalConnectivity != ClientConnectivity )
          {
            Com_Printf(25, "Syncing connectivity with server: local=0x%x, server=0x%x\n", LocalConnectivity, ClientConnectivity);
            v10 = j_va("%iihear %i", (unsigned int)party->partyId, v9);
            if ( NetConnection::SendUnreliable(&party->currentHost.connections[v2], v10) <= 0 )
              return;
          }
        }
      }
    }
    PeerMesh_TestConnectivity(party, (const LocalClientNum_t)v2);
  }
}

/*
==============
PeerMesh_GetClientConnectivity
==============
*/
__int64 PeerMesh_GetClientConnectivity(const PartyData *party, const int clientNum)
{
  __int64 v2; 

  v2 = clientNum;
  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_peermesh.cpp", 497, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( !Party_IsMemberIndexDataAvailable(party, v2) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_peermesh.cpp", 498, ASSERT_TYPE_ASSERT, "(Party_IsMemberIndexDataAvailable( party, clientNum ))", (const char *)&queryFormat, "Party_IsMemberIndexDataAvailable( party, clientNum )") )
    __debugbreak();
  if ( (Party_GetNumGameSlots(party) > 24 || Party_IsHostDedicated(party) && !Party_IsPrivateDSMatch(party)) && party->partyMembers[v2].connectivityBits && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_peermesh.cpp", 499, ASSERT_TYPE_ASSERT, "(PeerMesh_IsEnabled( party ) || party->partyMembers[clientNum].connectivityBits == 0)", (const char *)&queryFormat, "PeerMesh_IsEnabled( party ) || party->partyMembers[clientNum].connectivityBits == 0") )
    __debugbreak();
  return (unsigned int)party->partyMembers[v2].connectivityBits;
}

/*
==============
PeerMesh_GetConnectivityBitsForClient
==============
*/
__int64 PeerMesh_GetConnectivityBitsForClient(const PartyData *party, const int clientNum)
{
  int v4; 
  unsigned int v5; 
  int i; 
  __int64 v8; 

  v4 = 1 << clientNum;
  v5 = 1 << clientNum;
  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_peermesh.cpp", 593, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( (unsigned int)clientNum >= 0x20 )
  {
    LODWORD(v8) = clientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_peermesh.cpp", 594, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( 32 )", "clientNum doesn't index MAX_CLIENTS_PEERMESH\n\t%i not in [0, %i)", v8, 32) )
      __debugbreak();
  }
  if ( Party_IsMemberRegistered(party, clientNum) )
  {
    for ( i = 0; i < 32; ++i )
    {
      if ( Party_IsMemberRegistered(party, i) && Party_CompareMemberAddrs(party, clientNum, i) )
        v5 |= 1 << i;
    }
  }
  if ( (v4 & v5) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_peermesh.cpp", 610, ASSERT_TYPE_ASSERT, "(connectivityBits & ( 1 << clientNum ))", (const char *)&queryFormat, "connectivityBits & ( 1 << clientNum )") )
    __debugbreak();
  return v5;
}

/*
==============
PeerMesh_GetConnectivityBitsForHost
==============
*/
int PeerMesh_GetConnectivityBitsForHost(const PartyData *party)
{
  int v2; 

  if ( Party_GetNumGameSlots(party) > 24 || Party_IsHostDedicated(party) && !Party_IsPrivateDSMatch(party) || Party_IsPrivateDSMatch(party) )
    return 0;
  v2 = Party_HostNum(party);
  return PeerMesh_GetConnectivityBitsForClient(party, v2);
}

/*
==============
PeerMesh_GetConnectivityBitsForLocalClients
==============
*/
__int64 PeerMesh_GetConnectivityBitsForLocalClients(const PartyData *party)
{
  unsigned int v1; 
  unsigned __int8 *p_status; 
  int i; 

  v1 = 0;
  p_status = &party->partyMembers[0].status;
  for ( i = 0; i < 32; ++i )
  {
    if ( Party_IsMemberPresent(party, i) && *p_status != 6 && Party_MemberHasLoopbackAddr(party, i) )
      v1 |= 1 << i;
    p_status += 504;
  }
  if ( !v1 )
    Com_PrintError(25, "[%s] No local clients found for connectivity!\n", party->partyName);
  return v1;
}

/*
==============
PeerMesh_GetConnectivityBitsForParty
==============
*/
__int64 PeerMesh_GetConnectivityBitsForParty(PartyData *party, const int lobbyMemberIndex)
{
  int MemberByXUID; 
  unsigned int v5; 
  int ClientConnectivity; 
  int v7; 
  int v8; 
  int MemberByXUID_AllowNotPresent; 
  __int64 v11; 
  XUID result; 
  XUID player; 

  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_peermesh.cpp", 677, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( (unsigned int)lobbyMemberIndex >= 0xC8 )
  {
    LODWORD(v11) = lobbyMemberIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_peermesh.cpp", 678, ASSERT_TYPE_ASSERT, "(unsigned)( lobbyMemberIndex ) < (unsigned)( 200 )", "lobbyMemberIndex doesn't index MAX_PARTY_MEMBERS\n\t%i not in [0, %i)", v11, 200) )
      __debugbreak();
  }
  if ( !Party_IsMemberIndexDataAvailable(party, lobbyMemberIndex) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_peermesh.cpp", 679, ASSERT_TYPE_ASSERT, "(Party_IsMemberIndexDataAvailable( party, lobbyMemberIndex ))", (const char *)&queryFormat, "Party_IsMemberIndexDataAvailable( party, lobbyMemberIndex )") )
    __debugbreak();
  if ( Party_GetNumGameSlots(party) > 24 || Party_IsHostDedicated(party) && !Party_IsPrivateDSMatch(party) )
    return 0i64;
  if ( !Party_IsGameLobby(party) )
    return 0i64;
  if ( !g_partyData.inParty )
    return 0i64;
  Party_GetXuid(&result, party, lobbyMemberIndex);
  MemberByXUID = Party_FindMemberByXUID(&g_partyData, result);
  if ( MemberByXUID < 0 )
    return 0i64;
  v5 = 0;
  ClientConnectivity = PeerMesh_GetClientConnectivity(&g_partyData, MemberByXUID);
  v7 = 0;
  v8 = 1;
  do
  {
    if ( (v8 & ClientConnectivity) != 0 && Party_IsMemberRegistered(&g_partyData, v7) )
    {
      Party_GetXuid(&player, &g_partyData, v7);
      MemberByXUID_AllowNotPresent = Party_FindMemberByXUID_AllowNotPresent(party, player);
      if ( MemberByXUID_AllowNotPresent >= 0 )
        v5 |= 1 << MemberByXUID_AllowNotPresent;
    }
    ++v7;
    v8 = __ROL4__(v8, 1);
  }
  while ( v7 < 32 );
  return v5;
}

/*
==============
PeerMesh_GetConnectivityBitsForRemoteClients
==============
*/
__int64 PeerMesh_GetConnectivityBitsForRemoteClients(const PartyData *party)
{
  unsigned int v1; 
  int i; 

  v1 = 0;
  for ( i = 0; i < 32; ++i )
  {
    if ( Party_IsMemberPresent(party, i) && !Party_MemberHasLoopbackAddr(party, i) )
      v1 |= 1 << i;
  }
  return v1;
}

/*
==============
PeerMesh_GetConnectivityTestTime
==============
*/
__int64 PeerMesh_GetConnectivityTestTime(const PartyData *party, const int clientNum, const LocalClientNum_t localClientNum)
{
  __int64 v3; 
  __int64 v5; 

  v3 = localClientNum;
  v5 = clientNum;
  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_peermesh.cpp", 576, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( !Party_IsMemberIndexDataAvailable(party, v5) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_peermesh.cpp", 577, ASSERT_TYPE_ASSERT, "(Party_IsMemberIndexDataAvailable( party, clientNum ))", (const char *)&queryFormat, "Party_IsMemberIndexDataAvailable( party, clientNum )") )
    __debugbreak();
  return (unsigned int)party->partyMembers[v5].nextConnectivityTestTime[v3];
}

/*
==============
PeerMesh_GetLocalClientSock
==============
*/
__int64 PeerMesh_GetLocalClientSock(const LocalClientNum_t localClientNum, const connstate_t minConnState)
{
  ClConnectionDataMP *ClientConnectionData; 
  LocalClientNum_t v5; 
  int v6; 
  netsrc_t sock; 
  LocalClientNum_t v8; 

  if ( CL_GetLocalClientGameConnectionState(localClientNum) < minConnState )
  {
    if ( (unsigned int)localClientNum >= LOCAL_CLIENT_COUNT )
    {
      v6 = 2;
      v5 = localClientNum;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_peermesh.cpp", 917, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( NS_MAXCLIENTS )", "localClientNum doesn't index NS_MAXCLIENTS\n\t%i not in [0, %i)", v5, v6) )
        __debugbreak();
    }
    return (unsigned int)localClientNum;
  }
  else
  {
    ClientConnectionData = ClConnectionMP::GetClientConnectionData(localClientNum);
    if ( ClientConnectionData->netchan.sock != localClientNum )
    {
      v8 = localClientNum;
      sock = ClientConnectionData->netchan.sock;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_peermesh.cpp", 913, ASSERT_TYPE_ASSERT, "( static_cast<int>(clcData->netchan.sock) ) == ( static_cast<int>(localClientNum) )", "%s == %s\n\t%i, %i", "static_cast<int>(clcData->netchan.sock)", "static_cast<int>(localClientNum)", sock, v8) )
        __debugbreak();
    }
    return (unsigned int)ClientConnectionData->netchan.sock;
  }
}

/*
==============
PeerMesh_GetLocalConnectivity
==============
*/
__int64 PeerMesh_GetLocalConnectivity(const PartyData *party)
{
  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_peermesh.cpp", 464, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( (Party_GetNumGameSlots(party) > 24 || Party_IsHostDedicated(party) && !Party_IsPrivateDSMatch(party)) && party->connectivityBits && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_peermesh.cpp", 465, ASSERT_TYPE_ASSERT, "(PeerMesh_IsEnabled( party ) || party->connectivityBits == 0)", (const char *)&queryFormat, "PeerMesh_IsEnabled( party ) || party->connectivityBits == 0") )
    __debugbreak();
  return (unsigned int)party->connectivityBits;
}

/*
==============
PeerMesh_HandleConnectionTestPacket
==============
*/
void PeerMesh_HandleConnectionTestPacket(PartyData *party, LocalClientNum_t localClientNum, msg_t *msg, const netadr_t *from)
{
  unsigned int Byte; 
  const char *v9; 
  bdSecurityID *SecurityId; 
  XUID *Xuid; 
  const char *v12; 
  const char *v13; 
  const char *v15; 
  const char *MemberName; 
  int LocalConnectivity; 
  unsigned int v18; 
  XUID result; 
  netadr_t v20; 
  __int64 v21; 
  XUID v22; 
  bdSecurityID buffer; 

  v21 = -2i64;
  _RBP = from;
  bdSecurityID::bdSecurityID(&buffer);
  MSG_ReadData(msg, 8, &buffer, 8);
  Byte = MSG_ReadByte(msg);
  XUID::FromMsg(&result, msg);
  if ( msg->overflowed )
  {
    __asm
    {
      vmovups xmm0, xmmword ptr [rbp+0]
      vmovups [rsp+98h+var_58], xmm0
    }
    v20.addrHandleIndex = _RBP->addrHandleIndex;
    v9 = NET_AdrToString(&v20);
    Com_Printf(25, "Invalid voice test packet - overflowed (%s)\n", v9);
  }
  else if ( Party_GetNumGameSlots(party) > 24 || Party_IsHostDedicated(party) && !Party_IsPrivateDSMatch(party) )
  {
    Com_Printf(25, "Invalid voice test packet - Peermesh is disabled.\n");
  }
  else if ( Byte > 0x1F )
  {
    Com_Printf(25, "Invalid voice test packet - talker index was %i\n", Byte);
  }
  else
  {
    SecurityId = XSESSION_INFO::GetSecurityId(&party->session->dyn.sessionInfo);
    if ( bdSecurityID::operator!=(SecurityId, &buffer) )
    {
      Com_Printf(25, "Got a voice connectivity test packet for an unknown session ID from client %i\n", Byte);
    }
    else if ( Party_IsMemberRegistered(party, Byte) )
    {
      if ( Party_MemberHasLoopbackAddr(party, Byte) )
      {
        Com_PrintWarning(25, "Got a voice connectivity test packet from a local client %i, ignoring.\n", Byte);
      }
      else
      {
        Xuid = Party_GetXuid(&v22, party, Byte);
        if ( XUID::operator!=(Xuid, &result) )
        {
          v12 = XUID::ToDevString(&result);
          Com_Printf(25, "Invalid voice test packet, XUID %s didn't match our clientNum %i's XUID\n", v12, Byte);
        }
        else if ( Party_AreWeHost(party) )
        {
          Com_Printf(25, "Invalid voice test packet, we're the host.\n");
        }
        else if ( Party_IsHost(party, Byte) )
        {
          v13 = XUID::ToDevString(&result);
          Com_Printf(25, "Invalid voice test packet, from the host (%s, %i)\n", v13, Byte);
        }
        else
        {
          __asm
          {
            vmovups xmm0, xmmword ptr [rbp+0]
            vmovups [rsp+98h+var_58], xmm0
          }
          v20.addrHandleIndex = _RBP->addrHandleIndex;
          v15 = NET_AdrToString(&v20);
          MemberName = Party_GetMemberName(party, Byte);
          v18 = Byte;
          Com_Printf(25, "[%s] We can hear '%s' (%i) at addr %s\n", party->partyName, MemberName, v18, v15);
          LocalConnectivity = PeerMesh_GetLocalConnectivity(party);
          PeerMesh_SetLocalConnectivity(party, LocalConnectivity | (1 << Byte));
        }
      }
    }
    else
    {
      Com_Printf(25, "Got a voice connectivity test packet from unregistered client %i\n", Byte);
    }
  }
  bdSecurityID::~bdSecurityID(&buffer);
}

/*
==============
PeerMesh_HostMigrated
==============
*/
void PeerMesh_HostMigrated(PartyData *party, const int newHost)
{
  int LocalConnectivity; 
  int ConnectivityBitsForClient; 

  if ( (Party_GetNumGameSlots(party) > 24 || Party_IsHostDedicated(party) && !Party_IsPrivateDSMatch(party)) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_peermesh.cpp", 896, ASSERT_TYPE_ASSERT, "(PeerMesh_IsEnabled( party ))", (const char *)&queryFormat, "PeerMesh_IsEnabled( party )") )
    __debugbreak();
  LocalConnectivity = PeerMesh_GetLocalConnectivity(party);
  ConnectivityBitsForClient = PeerMesh_GetConnectivityBitsForClient(party, newHost);
  PeerMesh_SetLocalConnectivity(party, LocalConnectivity | ConnectivityBitsForClient);
}

/*
==============
PeerMesh_InitClientConnectivity
==============
*/
bool PeerMesh_InitClientConnectivity(PartyData *party, const int clientNum, const int initConnectivity)
{
  int v6; 
  int ConnectivityBitsForParty; 
  int v8; 
  int ConnectivityBitsForClient; 

  if ( !Party_AreWeHost(party) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_peermesh.cpp", 527, ASSERT_TYPE_ASSERT, "(Party_AreWeHost( party ))", (const char *)&queryFormat, "Party_AreWeHost( party )") )
    __debugbreak();
  if ( Party_IsMemberHost(party, clientNum) )
  {
    v6 = -1;
  }
  else
  {
    ConnectivityBitsForParty = PeerMesh_GetConnectivityBitsForParty(party, clientNum);
    if ( Party_GetNumGameSlots(party) > 24 || Party_IsHostDedicated(party) && !Party_IsPrivateDSMatch(party) || Party_IsPrivateDSMatch(party) )
    {
      ConnectivityBitsForClient = 0;
    }
    else
    {
      v8 = Party_HostNum(party);
      ConnectivityBitsForClient = PeerMesh_GetConnectivityBitsForClient(party, v8);
    }
    v6 = initConnectivity | ConnectivityBitsForParty | ConnectivityBitsForClient | PeerMesh_GetConnectivityBitsForClient(party, clientNum);
  }
  return PeerMesh_SetClientConnectivity(party, clientNum, v6);
}

/*
==============
PeerMesh_InitLocalConnectivity
==============
*/
void PeerMesh_InitLocalConnectivity(PartyData *party, const int initConnectivity)
{
  int v4; 
  int v5; 
  unsigned __int8 *p_status; 
  int v7; 
  int ConnectivityBitsForHost; 

  if ( Party_GetNumGameSlots(party) <= 24 && (!Party_IsHostDedicated(party) || Party_IsPrivateDSMatch(party)) )
  {
    if ( Party_AreWeHost(party) )
    {
      v4 = -1;
    }
    else
    {
      v5 = 0;
      p_status = &party->partyMembers[0].status;
      v7 = 0;
      ConnectivityBitsForHost = PeerMesh_GetConnectivityBitsForHost(party);
      do
      {
        if ( Party_IsMemberPresent(party, v7) && *p_status != 6 && Party_MemberHasLoopbackAddr(party, v7) )
          v5 |= 1 << v7;
        ++v7;
        p_status += 504;
      }
      while ( v7 < 32 );
      if ( !v5 )
        Com_PrintError(25, "[%s] No local clients found for connectivity!\n", party->partyName);
      v4 = v5 | ConnectivityBitsForHost;
    }
    PeerMesh_SetLocalConnectivity(party, initConnectivity | v4);
  }
}

/*
==============
PeerMesh_IsConnectionEstablished
==============
*/
bool PeerMesh_IsConnectionEstablished(const PartyData *party, const int clientNum)
{
  bool result; 
  NetConnection *MemberConnection; 

  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_peermesh.cpp", 924, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  result = Party_IsMemberRegistered(party, clientNum);
  if ( result )
  {
    MemberConnection = (NetConnection *)Party_GetMemberConnection(party, clientNum);
    return NetConnection::IsConnected(MemberConnection);
  }
  return result;
}

/*
==============
PeerMesh_IsEnabled
==============
*/
bool PeerMesh_IsEnabled(const PartyData *party)
{
  return Party_GetNumGameSlots(party) <= 24 && (!Party_IsHostDedicated(party) || Party_IsPrivateDSMatch(party));
}

/*
==============
PeerMesh_IsHostConnectivitySet
==============
*/
bool PeerMesh_IsHostConnectivitySet(const PartyData *party, const int connectivityBits)
{
  int v4; 
  int ConnectivityBitsForClient; 

  if ( Party_GetNumGameSlots(party) > 24 || Party_IsHostDedicated(party) && !Party_IsPrivateDSMatch(party) || Party_IsPrivateDSMatch(party) )
  {
    ConnectivityBitsForClient = 0;
  }
  else
  {
    v4 = Party_HostNum(party);
    ConnectivityBitsForClient = PeerMesh_GetConnectivityBitsForClient(party, v4);
  }
  return (connectivityBits & ConnectivityBitsForClient) == ConnectivityBitsForClient;
}

/*
==============
PeerMesh_Receive
==============
*/
char PeerMesh_Receive(PartyData *party, const LocalClientNum_t localClientNum, const char *cmd, msg_t *msg, const netadr_t *from)
{
  __int64 v9; 
  const char *v10; 
  char v11; 
  char v12; 
  int v14; 
  void *m_ptr; 
  bool voiceData; 
  unsigned int v18; 
  int v19; 
  Mem_LargeLocal v20; 

  if ( !I_stricmp(cmd, "vt") )
  {
    PeerMesh_HandleConnectionTestPacket(party, localClientNum, msg, from);
    return 1;
  }
  v9 = 0x7FFFFFFFi64;
  v10 = "voicefail";
  if ( !cmd && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
    __debugbreak();
  while ( 1 )
  {
    v11 = v10[cmd - "voicefail"];
    v12 = *v10++;
    if ( !v9-- )
    {
LABEL_9:
      v14 = Cmd_ArgInt(1);
      PeerMesh_ClientDisconnected(party, v14);
      return 1;
    }
    if ( v11 != v12 )
      break;
    if ( !v11 )
      goto LABEL_9;
  }
  if ( !I_stricmp(cmd, "relay") )
  {
    Mem_LargeLocal::Mem_LargeLocal(&v20, 0x243D8ui64, "msg_buf_t dataBuf");
    m_ptr = v20.m_ptr;
    voiceData = Cmd_ArgInt(1) > 0;
    v18 = Cmd_ArgInt(2);
    if ( Party_GetNumGameSlots(party) > 24 || Party_IsHostDedicated(party) && !Party_IsPrivateDSMatch(party) )
    {
      Com_Printf(25, "We were asked to relay a packet to but peer mesh is disabled (%i).\n", v18);
    }
    else if ( Party_IsMemberRegistered(party, v18) )
    {
      if ( Party_MemberHasLoopbackAddr(party, v18) )
      {
        Com_PrintWarning(14, "We were asked to relay a packet to a local client (%i)\n", v18);
      }
      else
      {
        v19 = msg->cursize - msg->readcount;
        MSG_ReadData(msg, v19, m_ptr, 148440);
        PeerMesh_Send(party, localClientNum, v18, (const unsigned __int8 *)m_ptr, v19, voiceData, 0);
      }
    }
    else
    {
      Com_PrintWarning(14, "We were asked to relay a packet to an unregistered client (%i)\n", v18);
    }
    Mem_LargeLocal::~Mem_LargeLocal(&v20);
    return 1;
  }
  return 0;
}

/*
==============
PeerMesh_RemoveClientConnectivity
==============
*/
bool PeerMesh_RemoveClientConnectivity(PartyData *party, const int clientNum, const int removeConnectivityBits)
{
  __int64 v4; 

  v4 = clientNum;
  if ( !Party_AreWeHost(party) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_peermesh.cpp", 562, ASSERT_TYPE_ASSERT, "(Party_AreWeHost( party ))", (const char *)&queryFormat, "Party_AreWeHost( party )") )
    __debugbreak();
  if ( Party_GetNumGameSlots(party) > 24 || Party_IsHostDedicated(party) && !Party_IsPrivateDSMatch(party) )
    return 0;
  if ( !Party_IsMemberIndexDataAvailable(party, v4) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_peermesh.cpp", 567, ASSERT_TYPE_ASSERT, "(Party_IsMemberIndexDataAvailable( party, clientNum ))", (const char *)&queryFormat, "Party_IsMemberIndexDataAvailable( party, clientNum )") )
    __debugbreak();
  return PeerMesh_SetClientConnectivity(party, v4, ~removeConnectivityBits & party->partyMembers[v4].connectivityBits);
}

/*
==============
PeerMesh_Send
==============
*/
bool PeerMesh_Send(PartyData *party, const LocalClientNum_t localClientNum, const int clientNum, const unsigned __int8 *data, const int len, const bool voiceData, const bool canRelay)
{
  const unsigned __int8 *v7; 
  unsigned int ControllerFromClient; 
  int OurClientNum; 
  int v14; 
  int v15; 
  int v16; 
  int i; 
  unsigned int v18; 
  unsigned int v19; 
  const char *v20; 
  const dvar_t *v21; 
  netsrc_t LocalClientSock; 
  netsrc_t v23; 
  int v25; 
  int v26; 
  int v27; 
  msg_t sb; 
  msg_t buf; 
  unsigned __int8 dataa[2480]; 
  unsigned __int8 v32[2480]; 

  v7 = data;
  if ( (unsigned int)clientNum >= 0xC8 )
  {
    v25 = 200;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_peermesh.cpp", 118, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( 200 )", "clientNum doesn't index MAX_PARTY_MEMBERS\n\t%i not in [0, %i)", clientNum, v25) )
      __debugbreak();
  }
  if ( (Party_GetNumGameSlots(party) > 24 || Party_IsHostDedicated(party) && !Party_IsPrivateDSMatch(party)) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_peermesh.cpp", 129, ASSERT_TYPE_ASSERT, "(PeerMesh_IsEnabled( party ))", (const char *)&queryFormat, "PeerMesh_IsEnabled( party )") )
    __debugbreak();
  if ( !Party_IsMemberRegistered(party, clientNum) )
  {
    Com_PrintWarning(25, "PeerMesh_Send - Trying to send a packet to an unregistered user (%i)\n", (unsigned int)clientNum);
    return 0;
  }
  if ( Party_MemberHasLoopbackAddr(party, clientNum) )
  {
    Com_PrintError(25, "PeerMesh_Send - Trying to send a packet to a local client (%i)\n", (unsigned int)clientNum);
    return 0;
  }
  ControllerFromClient = CL_Mgr_GetControllerFromClient(localClientNum);
  if ( !Live_IsSignedIn(ControllerFromClient) )
  {
    Com_PrintWarning(25, "PeerMesh_Send - Trying to send a packet from a non-signed-in controller (%i).\n", ControllerFromClient);
    return 0;
  }
  OurClientNum = Live_GetOurClientNum(ControllerFromClient, party);
  v14 = OurClientNum;
  if ( OurClientNum == clientNum )
  {
    v27 = clientNum;
    v26 = OurClientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_peermesh.cpp", 151, ASSERT_TYPE_ASSERT, "( ourClientNum ) != ( clientNum )", "%s != %s\n\t%i, %i", "ourClientNum", "clientNum", v26, v27) )
      __debugbreak();
  }
  MSG_Init(&buf, dataa, 2474);
  v15 = len;
  MSG_WriteData(&buf, v7, len);
  if ( canRelay )
  {
    if ( !PeerMesh_CanClientConnect(party, clientNum) || !PeerMesh_IsConnectionEstablished(party, clientNum) )
    {
      v16 = 0;
      for ( i = 0; i < 31; ++i )
      {
        v18 = (i + v14 + 1) % 32;
        if ( v18 == v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_peermesh.cpp", 1309, ASSERT_TYPE_ASSERT, "(routeClientNum != ourClientNum)", (const char *)&queryFormat, "routeClientNum != ourClientNum") )
          __debugbreak();
        if ( v18 != clientNum && Party_IsMemberRegistered(party, v18) && !Party_MemberHasLoopbackAddr(party, v18) && PeerMesh_CanClientConnect(party, v18) && PeerMesh_CanClient1ConnectToClient2(party, v18, clientNum) && PeerMesh_IsConnectionEstablished(party, v18) )
        {
          if ( !Party_IsHost(party, v18) )
            goto LABEL_36;
          v16 = 1;
        }
      }
      if ( v16 )
      {
        v19 = Party_HostNum(party);
        Com_PrintWarning(25, "We have no client route to get a packet from us to client %i.  We'll fire the packet through the host (%i)\n", (unsigned int)clientNum, v19);
        v18 = Party_HostNum(party);
LABEL_36:
        v15 = len;
        v7 = data;
        goto LABEL_39;
      }
      Com_PrintWarning(25, "We have no client route to get a packet from us to client %i, not even the host. We'll fire the packet blindly and hope it makes it\n", (unsigned int)clientNum);
      v15 = len;
      v7 = data;
    }
    v18 = v14;
LABEL_39:
    if ( clientNum == v18 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_peermesh.cpp", 159, ASSERT_TYPE_ASSERT, "(clientNum != clientWhoCanRelay)", "%s\n\tTried to relay a packet through the user it's meant for", "clientNum != clientWhoCanRelay") )
      __debugbreak();
    if ( v14 != v18 )
    {
      if ( !Party_IsMemberRegistered(party, v18) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_peermesh.cpp", 163, ASSERT_TYPE_ASSERT, "(Party_IsMemberRegistered( party, clientWhoCanRelay ))", (const char *)&queryFormat, "Party_IsMemberRegistered( party, clientWhoCanRelay )") )
        __debugbreak();
      if ( Party_MemberHasLoopbackAddr(party, v18) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_peermesh.cpp", 164, ASSERT_TYPE_ASSERT, "(!Party_MemberHasLoopbackAddr( party, clientWhoCanRelay ))", (const char *)&queryFormat, "!Party_MemberHasLoopbackAddr( party, clientWhoCanRelay )") )
        __debugbreak();
      Com_Printf(25, "Sending a relayed packet to client %i through relay client %i\n", (unsigned int)clientNum, v18);
      MSG_Init(&sb, v32, 2474);
      v20 = j_va("relay %i %i", voiceData, (unsigned int)clientNum);
      MSG_WriteString(&sb, v20);
      MSG_WriteData(&sb, v7, v15);
      v21 = DVARBOOL_cl_showSend;
      if ( !DVARBOOL_cl_showSend && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "cl_showSend") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v21);
      if ( v21->current.enabled )
        Com_Printf(25, "oob: %i\n", (unsigned int)sb.cursize);
      LocalClientSock = (unsigned int)PeerMesh_GetLocalClientSock(localClientNum, CA_PRIMED);
      return PeerMesh_SendPacket(party, localClientNum, LocalClientSock, v18, &sb, voiceData);
    }
    Com_Printf(25, "Sending an OOB packet directly to client %i\n", (unsigned int)clientNum);
  }
  if ( Dvar_GetBool_Internal_DebugName(DVARBOOL_cl_showSend, "cl_showSend") )
    Com_Printf(25, "oob: %i\n", (unsigned int)buf.cursize);
  v23 = (unsigned int)PeerMesh_GetLocalClientSock(localClientNum, CA_PRIMED);
  return PeerMesh_SendPacket(party, localClientNum, v23, clientNum, &buf, voiceData);
}

/*
==============
PeerMesh_SendOOB
==============
*/
bool PeerMesh_SendOOB(PartyData *party, const LocalClientNum_t localClientNum, const netsrc_t sock, const int clientNum, msg_t *msg, const bool voiceData)
{
  __int64 v6; 
  __int64 v10; 
  const dvar_t *v11; 
  const char *v12; 
  int integer; 
  const NetConnection *MemberConnection; 
  const dvar_t *v16; 
  NetConnection *v17; 
  const char *String; 
  int v19; 
  __int64 v20; 
  __int64 v22; 
  int v23; 

  v6 = localClientNum;
  if ( (unsigned int)clientNum >= 0xC8 )
  {
    v23 = 200;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_peermesh.cpp", 1141, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( 200 )", "clientNum doesn't index MAX_PARTY_MEMBERS\n\t%i not in [0, %i)", clientNum, v23) )
      __debugbreak();
  }
  if ( (unsigned int)v6 >= 2 )
  {
    LODWORD(v22) = 2;
    LODWORD(v20) = v6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client_mp\\cl_voice_mp.h", 83, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( 2 )", "localClientNum doesn't index STATIC_MAX_LOCAL_CLIENTS\n\t%i not in [0, %i)", v20, v22) )
      __debugbreak();
  }
  v10 = v6;
  if ( Com_IsGameLocalServerRunningOrLoading() )
  {
    v11 = DVARINT_voice_maxVoicePacketsPerSecForServer;
    if ( DVARINT_voice_maxVoicePacketsPerSecForServer )
      goto LABEL_14;
    v12 = "voice_maxVoicePacketsPerSecForServer";
  }
  else
  {
    v11 = DVARINT_voice_maxVoicePacketsPerSec;
    if ( DVARINT_voice_maxVoicePacketsPerSec )
      goto LABEL_14;
    v12 = "voice_maxVoicePacketsPerSec";
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", v12) )
    __debugbreak();
LABEL_14:
  Dvar_CheckFrontendServerThread(v11);
  integer = v11->current.integer;
  if ( Sys_Milliseconds() - cl_voiceCommunication[v10].packetsPerSecStart > 1000 )
  {
    cl_voiceCommunication[v10].packetsPerSec = 0;
    cl_voiceCommunication[v10].packetsPerSecStart = Sys_Milliseconds();
  }
  if ( ++cl_voiceCommunication[v10].packetsPerSec > integer && voiceData )
  {
    Com_PrintWarning(25, "Dropping voice packet to client %i because we're trying to send too many this frame\n", (unsigned int)clientNum);
    return 1;
  }
  else if ( Party_IsMemberRegistered(party, clientNum) )
  {
    MemberConnection = Party_GetMemberConnection(party, clientNum);
    v16 = DVARBOOL_voice_debug;
    v17 = (NetConnection *)MemberConnection;
    if ( !DVARBOOL_voice_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "voice_debug") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v16);
    if ( v16->current.enabled )
    {
      String = NetConnection::GetString(v17);
      Com_Printf(25, "Sending voice packet to %s (client %i)\n", String, (unsigned int)clientNum);
    }
    v19 = NetConnection::SendP2P(v17, sock, msg->data, msg->cursize, voiceData);
    if ( v19 < 0 )
      PeerMesh_ClientDisconnected(party, clientNum);
    return v19 > 0;
  }
  else
  {
    Com_Printf(25, "Tried to send a packet to unregistered client %i\n", (unsigned int)clientNum);
    return 0;
  }
}

/*
==============
PeerMesh_SendPacket
==============
*/
char PeerMesh_SendPacket(PartyData *party, const LocalClientNum_t localClientNum, const netsrc_t sock, const int clientNum, msg_t *msg, const bool voiceData)
{
  __int64 v7; 
  __int64 v8; 
  const char *v9; 
  ClConnectionDataMP *ClientConnectionData; 
  msg_t buf; 
  unsigned __int8 data[2480]; 

  v7 = clientNum;
  v8 = localClientNum;
  if ( PeerMesh_SendOOB(party, localClientNum, sock, clientNum, msg, voiceData) )
    return 1;
  if ( !Party_IsHost(party, v7) )
  {
    if ( !party->inParty && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_peermesh.cpp", 1115, ASSERT_TYPE_ASSERT, "(party->inParty)", (const char *)&queryFormat, "party->inParty") )
      __debugbreak();
    if ( NetConnection::IsConnected(&party->currentHost.connections[v8]) )
    {
      v9 = j_va("%icanthear %i", (unsigned int)party->partyId, (unsigned int)v7);
      NetConnection::SendUnreliable(&party->currentHost.connections[v8], v9);
    }
    if ( CL_GetLocalClientGameConnectionState((const LocalClientNum_t)v8) >= CA_CONNECTED )
    {
      ClientConnectionData = ClConnectionMP::GetClientConnectionData((const LocalClientNum_t)v8);
      MSG_Init(&buf, data, 2474);
      MSG_WriteString(&buf, "icanthear");
      MSG_WriteByte(&buf, v7);
      NetConnection::SendUnreliable(&ClientConnectionData->serverConnection, buf.data, buf.cursize);
    }
  }
  return 0;
}

/*
==============
PeerMesh_SetClientConnectivity
==============
*/
char PeerMesh_SetClientConnectivity(PartyData *party, const int clientNum, const int connectivityBits)
{
  __int64 v3; 
  int *p_connectivityBits; 
  int v7; 
  int ConnectivityBitsForClient; 
  char *fmt; 
  __int64 v11; 

  v3 = clientNum;
  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_peermesh.cpp", 507, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( !Party_IsMemberIndexDataAvailable(party, v3) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_peermesh.cpp", 508, ASSERT_TYPE_ASSERT, "(Party_IsMemberIndexDataAvailable( party, clientNum ))", (const char *)&queryFormat, "Party_IsMemberIndexDataAvailable( party, clientNum )") )
    __debugbreak();
  if ( Party_GetNumGameSlots(party) > 24 || Party_IsHostDedicated(party) && !Party_IsPrivateDSMatch(party) )
    return 0;
  p_connectivityBits = &party->partyMembers[v3].connectivityBits;
  if ( *p_connectivityBits == connectivityBits )
    return 0;
  LODWORD(v11) = connectivityBits;
  LODWORD(fmt) = *p_connectivityBits;
  Com_Printf(25, "[%s] Client %i connectivity changed: 0x%x => 0x%x\n", party->partyName, (unsigned int)v3, fmt, v11);
  if ( Party_GetNumGameSlots(party) > 24 || Party_IsHostDedicated(party) && !Party_IsPrivateDSMatch(party) || Party_IsPrivateDSMatch(party) )
  {
    ConnectivityBitsForClient = 0;
  }
  else
  {
    v7 = Party_HostNum(party);
    ConnectivityBitsForClient = PeerMesh_GetConnectivityBitsForClient(party, v7);
  }
  if ( (connectivityBits & ConnectivityBitsForClient) != ConnectivityBitsForClient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_peermesh.cpp", 518, ASSERT_TYPE_ASSERT, "(PeerMesh_IsHostConnectivitySet( party, connectivityBits ))", "%s\n\tEveryone should be able to talk to the host", "PeerMesh_IsHostConnectivitySet( party, connectivityBits )") )
    __debugbreak();
  *p_connectivityBits = connectivityBits;
  return 1;
}

/*
==============
PeerMesh_SetConnectivityTestTime
==============
*/
__int64 PeerMesh_SetConnectivityTestTime(PartyData *party, const int clientNum, const LocalClientNum_t localClientNum, const int nextTime)
{
  __int64 v4; 
  __int64 v6; 
  __int64 result; 

  v4 = localClientNum;
  v6 = clientNum;
  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_peermesh.cpp", 584, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  result = (unsigned int)nextTime;
  party->partyMembers[v6].nextConnectivityTestTime[v4] = nextTime;
  return result;
}

/*
==============
PeerMesh_SetLocalConnectivity
==============
*/
char PeerMesh_SetLocalConnectivity(PartyData *party, const int connectivityBits)
{
  char *fmt; 

  if ( !party && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_peermesh.cpp", 473, ASSERT_TYPE_ASSERT, "(party)", (const char *)&queryFormat, "party") )
    __debugbreak();
  if ( Party_GetNumGameSlots(party) > 24 || Party_IsHostDedicated(party) && !Party_IsPrivateDSMatch(party) || PeerMesh_GetLocalConnectivity(party) == connectivityBits )
    return 0;
  LODWORD(fmt) = connectivityBits;
  Com_Printf(25, "[%s] Local connectivity changed: 0x%x => 0x%x\n", party->partyName, (unsigned int)party->connectivityBits, fmt);
  if ( connectivityBits && Party_IsHostRegistered(party) && !PeerMesh_IsHostConnectivitySet(party, connectivityBits) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_peermesh.cpp", 486, ASSERT_TYPE_ASSERT, "(PeerMesh_IsHostConnectivitySet( party, connectivityBits ))", "%s\n\tShould be able to receive from the host", "PeerMesh_IsHostConnectivitySet( party, connectivityBits )") )
    __debugbreak();
  party->connectivityBits = connectivityBits;
  return 1;
}

/*
==============
PeerMesh_SyncLocalConnectivity
==============
*/
bool PeerMesh_SyncLocalConnectivity(PartyData *party, const LocalClientNum_t localClientNum)
{
  __int64 v2; 
  int ControllerFromClient; 
  int OurClientNum; 
  unsigned int ClientConnectivity; 
  unsigned int LocalConnectivity; 
  unsigned int v9; 
  const char *v10; 

  v2 = localClientNum;
  if ( Party_GetNumGameSlots(party) > 24 || Party_IsHostDedicated(party) && !Party_IsPrivateDSMatch(party) )
    return 0;
  if ( Party_IsHostDedicated(party) )
  {
    if ( !Party_IsPrivateDSMatch(party) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_peermesh.cpp", 437, ASSERT_TYPE_ASSERT, "(Party_IsPrivateDSMatch( party ))", (const char *)&queryFormat, "Party_IsPrivateDSMatch( party )") )
      __debugbreak();
    return 0;
  }
  ControllerFromClient = CL_Mgr_GetControllerFromClient((LocalClientNum_t)v2);
  OurClientNum = Live_GetOurClientNum(ControllerFromClient, party);
  ClientConnectivity = PeerMesh_GetClientConnectivity(party, OurClientNum);
  LocalConnectivity = PeerMesh_GetLocalConnectivity(party);
  v9 = LocalConnectivity;
  if ( LocalConnectivity == ClientConnectivity )
    return 1;
  Com_Printf(25, "Syncing connectivity with server: local=0x%x, server=0x%x\n", LocalConnectivity, ClientConnectivity);
  v10 = j_va("%iihear %i", (unsigned int)party->partyId, v9);
  return NetConnection::SendUnreliable(&party->currentHost.connections[v2], v10) > 0;
}

/*
==============
PeerMesh_TestConnectivity
==============
*/
void PeerMesh_TestConnectivity(PartyData *party, const LocalClientNum_t localClientNum)
{
  const dvar_t *v4; 
  int ControllerFromClient; 
  int OurClientNum; 
  __int64 v7; 
  const dvar_t *v8; 
  int v9; 
  int v10; 
  int v11; 
  int v12; 
  NetConnection *MemberConnection; 
  const char *String; 
  const bdSecurityID *SecurityId; 
  int v16; 
  XUID *Xuid; 
  netsrc_t LocalClientSock; 
  int v19; 
  int ConnectivityTestTime; 
  int v21; 
  __int64 v22; 
  XUID result; 
  msg_t buf; 
  bdSecurityID v25; 
  unsigned __int8 data[2480]; 

  if ( Session_IsValid(party->session) )
  {
    if ( Party_IsHostRegistered(party) )
    {
      ControllerFromClient = CL_Mgr_GetControllerFromClient(localClientNum);
      OurClientNum = Live_GetOurClientNum(ControllerFromClient, party);
      v7 = OurClientNum;
      if ( OurClientNum >= 0 )
      {
        if ( !Party_IsMemberRegistered(party, OurClientNum) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_peermesh.cpp", 1008, ASSERT_TYPE_ASSERT, "(Party_IsMemberRegistered( party, ourClientNum ))", (const char *)&queryFormat, "Party_IsMemberRegistered( party, ourClientNum )") )
          __debugbreak();
        if ( Party_IsHost(party, v7) )
        {
          LODWORD(v22) = v7;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\online\\online_peermesh.cpp", 1009, ASSERT_TYPE_ASSERT, "( ( !Party_IsHost( party, ourClientNum ) ) )", "( ourClientNum ) = %i", v22) )
            __debugbreak();
        }
        v9 = Sys_Milliseconds();
        v10 = 0;
        v11 = 1;
        v12 = __ROL4__(1, v7);
        do
        {
          if ( v10 != (_DWORD)v7 && Party_IsMemberRegistered(party, v10) && (int)PeerMesh_GetConnectivityTestTime(party, v10, localClientNum) <= v9 && !Party_MemberHasLoopbackAddr(party, v10) )
          {
            if ( Party_IsMemberHost(party, v10) )
            {
              if ( (PeerMesh_GetClientConnectivity(party, v10) & v12) == 0 )
                Com_PrintWarning(25, "SendVoiceTestPackets - The host doesn't think he can receive packets from us (%i <- %i)!\n", (unsigned int)v10, (unsigned int)v7);
              if ( (PeerMesh_GetClientConnectivity(party, v7) & v11) == 0 )
                Com_PrintWarning(25, "SendVoiceTestPackets - We don't think we can receive packets from the host (%i <- %i)!\n", (unsigned int)v10, (unsigned int)v7);
            }
            else if ( PeerMesh_IsConnectionEstablished(party, v10) && (!Lobby_GetPartyData()->migrateData.migrateActive || !Lobby_IsInLobby()) && (!g_partyData.migrateData.migrateActive || !g_partyData.inParty) )
            {
              MemberConnection = (NetConnection *)Party_GetMemberConnection(party, v10);
              MSG_Init(&buf, data, 2474);
              String = NetConnection::GetString(MemberConnection);
              Com_Printf(25, "Sending voice connectivity test packet to %s\n", String);
              MSG_WriteString(&buf, "vt");
              SecurityId = XSESSION_INFO::GetSecurityId(&party->session->dyn.sessionInfo);
              bdSecurityID::bdSecurityID(&v25, SecurityId);
              MSG_WriteData(&buf, &v25, 8);
              MSG_WriteByte(&buf, v7);
              v16 = CL_Mgr_GetControllerFromClient(localClientNum);
              Xuid = Live_GetXuid(&result, v16);
              XUID::Serialize(Xuid, &buf);
              LocalClientSock = (unsigned int)PeerMesh_GetLocalClientSock(localClientNum, CA_CONNECTED);
              NetConnection::SendP2P(MemberConnection, LocalClientSock, buf.data, buf.cursize);
              v19 = Sys_Milliseconds();
              ConnectivityTestTime = PeerMesh_GetConnectivityTestTime(party, v10, localClientNum);
              v21 = 10000;
              if ( !ConnectivityTestTime )
                v21 = 600;
              PeerMesh_SetConnectivityTestTime(party, v10, localClientNum, v19 + v21);
              bdSecurityID::~bdSecurityID(&v25);
            }
          }
          ++v10;
          v11 = __ROL4__(v11, 1);
        }
        while ( v10 < 32 );
      }
      else
      {
        v8 = DVARBOOL_voice_debug;
        if ( !DVARBOOL_voice_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "voice_debug") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v8);
        if ( v8->current.enabled )
          Com_Printf(25, "Deferring sending connectivity tests until we know our own client number\n");
      }
    }
    else
    {
      v4 = DVARBOOL_voice_debug;
      if ( !DVARBOOL_voice_debug && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "voice_debug") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v4);
      if ( v4->current.enabled )
        Com_Printf(25, "Deferring sending connectivity tests until the host is registered. Can happen during host migrations\n");
    }
  }
}


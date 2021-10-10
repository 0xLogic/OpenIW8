/*
==============
SV_BuildServerSnapshot_SaveSnapshotForTime
==============
*/

void __fastcall SV_BuildServerSnapshot_SaveSnapshotForTime(const int currentTime, const SvSnapshotIdentifier *buildInfo)
{
  ?SV_BuildServerSnapshot_SaveSnapshotForTime@@YAXHPEBUSvSnapshotIdentifier@@@Z(currentTime, buildInfo);
}

/*
==============
SV_SnapshotMP_CreateBaselineIfNeeded
==============
*/

void SV_SnapshotMP_CreateBaselineIfNeeded(void)
{
  ?SV_SnapshotMP_CreateBaselineIfNeeded@@YAXXZ();
}

/*
==============
SV_BuildClientSnapshot_IsInvalidFrame
==============
*/

int __fastcall SV_BuildClientSnapshot_IsInvalidFrame(const serverSnapshot_t *serverFrame)
{
  return ?SV_BuildClientSnapshot_IsInvalidFrame@@YAHPEBUserverSnapshot_t@@@Z(serverFrame);
}

/*
==============
SV_SnapshotMP_ResetBaseline
==============
*/

void SV_SnapshotMP_ResetBaseline(void)
{
  ?SV_SnapshotMP_ResetBaseline@@YAXXZ();
}

/*
==============
SV_BuildClientSnapshot_PopulateFinalSnapshot
==============
*/

void __fastcall SV_BuildClientSnapshot_PopulateFinalSnapshot(SvClientMP *const client, const int currentTime)
{
  ?SV_BuildClientSnapshot_PopulateFinalSnapshot@@YAXQEAVSvClientMP@@H@Z(client, currentTime);
}

/*
==============
SV_BuildClientSnapshot_InitClientSnapshotForClient
==============
*/

void __fastcall SV_BuildClientSnapshot_InitClientSnapshotForClient(SvClientMP *const client, const int currentTime, const SvSnapshotIdentifier *snapInfo)
{
  ?SV_BuildClientSnapshot_InitClientSnapshotForClient@@YAXQEAVSvClientMP@@HPEBUSvSnapshotIdentifier@@@Z(client, currentTime, snapInfo);
}

/*
==============
SV_BuildServerSnapshot_SaveSnapshotForArchivedTime
==============
*/

bool __fastcall SV_BuildServerSnapshot_SaveSnapshotForArchivedTime(const int currentTime, const SvSnapshotIdentifier *buildInfo)
{
  return ?SV_BuildServerSnapshot_SaveSnapshotForArchivedTime@@YA_NHPEBUSvSnapshotIdentifier@@@Z(currentTime, buildInfo);
}

/*
==============
SV_BuildClientSnapshot_PrintIsInvalidFrame
==============
*/

void __fastcall SV_BuildClientSnapshot_PrintIsInvalidFrame(const serverSnapshot_t *serverFrame, const unsigned int serverTime)
{
  ?SV_BuildClientSnapshot_PrintIsInvalidFrame@@YAXPEBUserverSnapshot_t@@I@Z(serverFrame, serverTime);
}

/*
==============
SV_BuildClientSnapshot_PopulateClientSnapWithServerSnap
==============
*/

void __fastcall SV_BuildClientSnapshot_PopulateClientSnapWithServerSnap(const int clientIndex, const serverSnapshot_t *const serverSnap, const SvSnapshotIdentifier *const snapInfo, clientSnapshot_t *const outNextSnap)
{
  ?SV_BuildClientSnapshot_PopulateClientSnapWithServerSnap@@YAXHQEBUserverSnapshot_t@@QEBUSvSnapshotIdentifier@@QEAUclientSnapshot_t@@@Z(clientIndex, serverSnap, snapInfo, outNextSnap);
}

/*
==============
SV_BuildClientSnapshot_AssignBaselineIndices
==============
*/
void SV_BuildClientSnapshot_AssignBaselineIndices(clientSnapshot_t *const nextSnap)
{
  __int64 v2; 

  if ( !nextSnap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_build_mp.cpp", 1266, ASSERT_TYPE_ASSERT, "( nextSnap )", (const char *)&queryFormat, "nextSnap") )
    __debugbreak();
  if ( !g_svSnapshotData.baselineCreated && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_build_mp.cpp", 1267, ASSERT_TYPE_ASSERT, "( g_svSnapshotData.baselineCreated )", (const char *)&queryFormat, "g_svSnapshotData.baselineCreated") )
    __debugbreak();
  if ( g_svSnapshotData.nextNoDeltaEntity != g_svSnapshotData.nextNoDeltaEntityClientMask )
  {
    LODWORD(v2) = g_svSnapshotData.nextNoDeltaEntity;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_build_mp.cpp", 1268, ASSERT_TYPE_ASSERT, "( g_svSnapshotData.nextNoDeltaEntity ) == ( g_svSnapshotData.nextNoDeltaEntityClientMask )", "g_svSnapshotData.nextNoDeltaEntity == g_svSnapshotData.nextNoDeltaEntityClientMask\n\t%i, %i", v2, g_svSnapshotData.nextNoDeltaEntityClientMask) )
      __debugbreak();
  }
  nextSnap->baselineSnap = 1;
  SV_SnapshotMP_AssignBaselineIndices(&nextSnap->serverEntries);
}

/*
==============
SV_BuildClientSnapshot_HandleKillcam
==============
*/
void SV_BuildClientSnapshot_HandleKillcam(SvClientMP *client)
{
  const dvar_t *v2; 
  int deltaMessage; 
  char v4; 
  gentity_s *gentity; 
  int i; 
  int v7; 
  int *v8; 
  int outgoingSequence; 
  int v10; 
  int PacketBackupCount; 
  int killcamOverrideSequenceNumber; 
  gentity_s *v13; 
  __int64 v14; 

  v2 = DVARBOOL_sv_killcam_exit_delta_from_last_game_snap;
  if ( !DVARBOOL_sv_killcam_exit_delta_from_last_game_snap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sv_killcam_exit_delta_from_last_game_snap") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  if ( v2->current.enabled )
  {
    deltaMessage = -1;
    v4 = 0;
    if ( client->deltaMessage >= 0 && client->isInKillcam )
    {
      gentity = client->gentity;
      if ( gentity )
      {
        if ( !gentity->client->sess.isInKillcam )
        {
          for ( i = 0; i < SV_SnapshotMP_GetPacketBackupCount(); ++i )
          {
            v7 = client->messageAcknowledge - i;
            if ( v7 < 0 )
              break;
            v8 = (int *)((char *)client + 72 * (v7 & 0x3F));
            if ( !*((_BYTE *)v8 + 372566) && !*((_BYTE *)v8 + 372568) )
            {
              if ( v8[93144] <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_build_mp.cpp", 1187, ASSERT_TYPE_ASSERT, "( frameInfo->sentTime > 0 )", (const char *)&queryFormat, "frameInfo->sentTime > 0") )
                __debugbreak();
              if ( v8[93152] <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_build_mp.cpp", 1188, ASSERT_TYPE_ASSERT, "( frameInfo->ackedTime > 0 )", (const char *)&queryFormat, "frameInfo->ackedTime > 0") )
                __debugbreak();
              deltaMessage = client->deltaMessage;
              v4 = 1;
              outgoingSequence = client->netchan.outgoingSequence;
              client->killcamOverrideDeltaMessage = 1;
              client->killcamOverrideSequenceNumber = v7;
              client->deltaMessage = v7;
              client->killcamSequenceResume = outgoingSequence;
              break;
            }
          }
        }
      }
    }
    if ( client->killcamOverrideDeltaMessage )
    {
      v10 = client->deltaMessage;
      if ( v10 < 0 || v10 >= client->killcamSequenceResume || (PacketBackupCount = SV_SnapshotMP_GetPacketBackupCount(), killcamOverrideSequenceNumber = client->killcamOverrideSequenceNumber, client->netchan.outgoingSequence - killcamOverrideSequenceNumber >= PacketBackupCount - 1) )
      {
        client->killcamOverrideDeltaMessage = 0;
        if ( v4 )
        {
          if ( deltaMessage < 0 )
          {
            LODWORD(v14) = deltaMessage;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_build_mp.cpp", 1236, ASSERT_TYPE_ASSERT, "( ( originalDeltaMessage >= 0 ) )", "%s\n\t( originalDeltaMessage ) = %i", "( originalDeltaMessage >= 0 )", v14) )
              __debugbreak();
          }
          client->deltaMessage = deltaMessage;
        }
      }
      else
      {
        client->deltaMessage = killcamOverrideSequenceNumber;
      }
    }
  }
  v13 = client->gentity;
  if ( v13 )
    client->isInKillcam = v13->client->sess.isInKillcam != 0;
}

/*
==============
SV_BuildClientSnapshot_InitClientSnapshotForClient
==============
*/
void SV_BuildClientSnapshot_InitClientSnapshotForClient(SvClientMP *const client, const int currentTime, const SvSnapshotIdentifier *snapInfo)
{
  SvClientMP *v5; 
  __int64 MpClientIndex; 
  clientSnapshot_t *SnapshotForSequence; 
  int *teamPlacements; 
  int v9; 
  signed int v10; 
  signed int v11; 
  __int64 v12; 
  unsigned __int16 *p_adrenaline; 
  gclient_s *clients; 
  unsigned int v15; 
  unsigned int v16; 
  __int64 v17; 
  __int64 v18; 
  bool v19; 
  MLGSpectatorClientInfo *v20; 
  MLGSpectatorClientInfo *p_mlgSpectatorClientInfo; 
  SvDemo *v22; 
  __int64 v23; 
  __int64 v24; 

  v5 = client;
  if ( !client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_build_mp.cpp", 1300, ASSERT_TYPE_ASSERT, "( client )", (const char *)&queryFormat, "client") )
    __debugbreak();
  if ( currentTime < snapInfo->serverTime )
  {
    LODWORD(v23) = currentTime;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_build_mp.cpp", 1302, ASSERT_TYPE_ASSERT, "( currentTime ) >= ( snapInfo->serverTime )", "currentTime >= snapInfo->serverTime\n\t%i, %i", v23, snapInfo->serverTime) )
      __debugbreak();
  }
  MpClientIndex = (int)SV_Client_GetMpClientIndex(v5);
  SV_BuildClientSnapshot_HandleKillcam(v5);
  SnapshotForSequence = SvClientMP::AllocateSnapshotForSequence(v5, v5->netchan.outgoingSequence, (const SvSnapshotStorageType)snapInfo->storageType);
  SnapshotForSequence->serverTime = currentTime;
  SnapshotForSequence->timeDelta = currentTime - snapInfo->serverTime;
  SnapshotForSequence->cmdTargetError = v5->cmdTargetError;
  SV_BuildClientSnapshot_PopulatePlayerstateCopy(SnapshotForSequence, MpClientIndex, v5);
  SnapshotForSequence->scores.teamScores[0] = level.teamScores[1];
  SnapshotForSequence->scores.teamScores[1] = level.teamScores[2];
  teamPlacements = level.teamPlacements;
  do
  {
    *(int *)((char *)teamPlacements + (char *)SnapshotForSequence - (char *)level.teamPlacements + 21420) = *teamPlacements;
    ++teamPlacements;
  }
  while ( (__int64)teamPlacements < (__int64)&level.pingUpdateTime );
  v9 = SvClient::ms_clientCount;
  if ( (unsigned __int64)(int)SvClient::ms_clientCount > 0xC8 )
  {
    LODWORD(v24) = 200;
    LODWORD(v23) = SvClient::ms_clientCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_build_mp.cpp", 993, ASSERT_TYPE_ASSERT, "( SvClient::GetClientCount() ) <= ( ( sizeof( *array_counter( frame->scores.clientScores ) ) + 0 ) )", "SvClient::GetClientCount() <= ARRAY_COUNT( frame->scores.clientScores )\n\t%i, %i", v23, v24) )
      __debugbreak();
    v9 = SvClient::ms_clientCount;
  }
  v10 = 0;
  v11 = 0;
  if ( v9 > 0 )
  {
    v12 = 0i64;
    p_adrenaline = &SnapshotForSequence->scores.clientScores[0].adrenaline;
    do
    {
      clients = level.clients;
      *(_OWORD *)(p_adrenaline - 11) = *(_OWORD *)&level.clients[v12].sess.scores.ping;
      *(double *)(p_adrenaline - 3) = *(double *)&clients[v12].sess.scores.extrascore2;
      p_adrenaline[1] = clients[v12].sess.scores.deathTimerLength;
      if ( !level.clients[MpClientIndex].sess.cs.isMLGSpectator )
        *(_DWORD *)p_adrenaline = 0;
      ++v11;
      ++v12;
      p_adrenaline += 13;
    }
    while ( v11 < (int)SvClient::ms_clientCount );
  }
  SV_BuildClientSnapshot_PopulateOmnvars(SnapshotForSequence, MpClientIndex);
  SV_StreamSync_PopulateClientSnapshot(MpClientIndex, &SnapshotForSequence->streamSync);
  if ( level.clients[MpClientIndex].sess.cs.isMLGSpectator )
  {
    v15 = SvClient::ms_clientCount;
    if ( ((unsigned __int8)&g_svSnapshotData.nextSnapshotMLGSpectatorInfo & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 79, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &g_svSnapshotData.nextSnapshotMLGSpectatorInfo) )
      __debugbreak();
    SnapshotForSequence->mlgSpectatorInfoIndex = _InterlockedExchangeAdd(&g_svSnapshotData.nextSnapshotMLGSpectatorInfo, v15);
    v16 = SvClient::ms_clientCount;
    if ( (int)SvClient::ms_clientCount > 0 )
    {
      v17 = 0i64;
      do
      {
        v18 = (v10 + SnapshotForSequence->mlgSpectatorInfoIndex) % g_svSnapshotData.numSnapshotMLGSpectatorInfo;
        v19 = &g_svSnapshotData.mlgSpectatorClientInfo[v18] == NULL;
        v20 = &g_svSnapshotData.mlgSpectatorClientInfo[v18];
        p_mlgSpectatorClientInfo = &level.clients[v17].mlgSpectatorClientInfo;
        if ( v19 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_build_mp.cpp", 1082, ASSERT_TYPE_ASSERT, "( mlgSpectatorClientInfo )", (const char *)&queryFormat, "mlgSpectatorClientInfo") )
          __debugbreak();
        *(_OWORD *)&v20->mlgMessageSent = *(_OWORD *)&p_mlgSpectatorClientInfo->mlgMessageSent;
        *(_OWORD *)&v20->killstreakIndexes[1] = *(_OWORD *)&p_mlgSpectatorClientInfo->killstreakIndexes[1];
        *(_OWORD *)&v20->killstreakAvailability[1] = *(_OWORD *)&p_mlgSpectatorClientInfo->killstreakAvailability[1];
        *(_OWORD *)&v20->inClipAmmo[1] = *(_OWORD *)&p_mlgSpectatorClientInfo->inClipAmmo[1];
        *(_OWORD *)&v20->powerSecondaryAmmo = *(_OWORD *)&p_mlgSpectatorClientInfo->powerSecondaryAmmo;
        *(_OWORD *)&v20->nextKillstreakCost = *(_OWORD *)&p_mlgSpectatorClientInfo->nextKillstreakCost;
        *(_OWORD *)&v20->isGametypeVIP = *(_OWORD *)&p_mlgSpectatorClientInfo->isGametypeVIP;
        *(_OWORD *)&v20->isSpecialist = *(_OWORD *)&p_mlgSpectatorClientInfo->isSpecialist;
        *(_OWORD *)v20->loadoutIndicies = *(_OWORD *)p_mlgSpectatorClientInfo->loadoutIndicies;
        *(_OWORD *)&v20->loadoutIndicies[4] = *(_OWORD *)&p_mlgSpectatorClientInfo->loadoutIndicies[4];
        *(_OWORD *)&v20->loadoutIndicies[8] = *(_OWORD *)&p_mlgSpectatorClientInfo->loadoutIndicies[8];
        *(_OWORD *)v20->extraPower = *(_OWORD *)p_mlgSpectatorClientInfo->extraPower;
        *(_OWORD *)&v20->locationSelectorCursor.y = *(_OWORD *)&p_mlgSpectatorClientInfo->locationSelectorCursor.y;
        ++v10;
        *(_QWORD *)&v20->clientFoV = *(_QWORD *)&p_mlgSpectatorClientInfo->clientFoV;
        ++v17;
        v16 = SvClient::ms_clientCount;
      }
      while ( v10 < (int)SvClient::ms_clientCount );
      v5 = client;
    }
    SnapshotForSequence->mlgSpectatorInfoCount = v16;
  }
  else
  {
    SnapshotForSequence->mlgSpectatorInfoIndex = g_svSnapshotData.nextSnapshotMLGSpectatorInfo;
    SnapshotForSequence->mlgSpectatorInfoCount = 0;
  }
  if ( v5->demorecording && !v5->demoBaselineSent )
  {
    if ( !BG_GameInterface_GameModeIsMP((GameModeType)(unsigned __int8)SvDemo::ms_allocatedType) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_demo_mp.h", 173, ASSERT_TYPE_ASSERT, "( BG_GameInterface_GameModeIsMP( ms_allocatedType ) )", (const char *)&queryFormat, "BG_GameInterface_GameModeIsMP( ms_allocatedType )") )
      __debugbreak();
    v22 = SvDemo::ms_gServerDemoSystem;
    memcpy_0(&SvDemo::ms_gServerDemoSystem[906179], SnapshotForSequence, 0x6C78ui64);
    SV_BuildClientSnapshot_AssignBaselineIndices((clientSnapshot_t *const)&v22[906179]);
    v19 = BYTE4(v22[909647].__vftable) == 0;
    LODWORD(v22[909650].__vftable) = MpClientIndex;
    if ( v19 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_build_mp.cpp", 1290, ASSERT_TYPE_ASSERT, "( svDemoMp->m_baselineFrame.baselineSnap )", (const char *)&queryFormat, "svDemoMp->m_baselineFrame.baselineSnap") )
      __debugbreak();
    if ( LOBYTE(v22[909618].__vftable) )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_build_mp.cpp", 1291, ASSERT_TYPE_ASSERT, "( svDemoMp->m_baselineFrame.serverEntries.GetStorageType() == SvSnapshotStorageType::FULL )", (const char *)&queryFormat, "svDemoMp->m_baselineFrame.serverEntries.GetStorageType() == SvSnapshotStorageType::FULL") )
        __debugbreak();
    }
  }
}

/*
==============
SV_BuildClientSnapshot_IsInvalidFrame
==============
*/
_BOOL8 SV_BuildClientSnapshot_IsInvalidFrame(const serverSnapshot_t *serverFrame)
{
  return !serverFrame || !SvSnapshotEntries::HasValidEntries(&serverFrame->entries, 0);
}

/*
==============
SV_BuildClientSnapshot_PopulateClientSnapWithServerSnap
==============
*/
void SV_BuildClientSnapshot_PopulateClientSnapWithServerSnap(const int clientIndex, const serverSnapshot_t *const serverSnap, const SvSnapshotIdentifier *const snapInfo, clientSnapshot_t *const outNextSnap)
{
  __int64 v4; 
  BuildClientMessageRequest *v8; 
  __int64 v9; 

  v4 = clientIndex;
  if ( !serverSnap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_build_mp.cpp", 1346, ASSERT_TYPE_ASSERT, "( serverSnap )", (const char *)&queryFormat, "serverSnap") )
    __debugbreak();
  if ( !outNextSnap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_build_mp.cpp", 1347, ASSERT_TYPE_ASSERT, "( outNextSnap )", (const char *)&queryFormat, "outNextSnap") )
    __debugbreak();
  if ( (!serverSnap || !SvSnapshotEntries::HasValidEntries(&serverSnap->entries, 0)) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_build_mp.cpp", 1348, ASSERT_TYPE_ASSERT, "( !SV_BuildClientSnapshot_IsInvalidFrame( serverSnap ) )", (const char *)&queryFormat, "!SV_BuildClientSnapshot_IsInvalidFrame( serverSnap )") )
    __debugbreak();
  v8 = &g_svSnapshotData.clientMsgRequest[v4];
  if ( (_DWORD)v4 != v8->clientIndex )
  {
    LODWORD(v9) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_build_mp.cpp", 1351, ASSERT_TYPE_ASSERT, "( clientIndex ) == ( static_cast<int>(buildRequest->clientIndex) )", "clientIndex == static_cast<int>(buildRequest->clientIndex)\n\t%i, %i", v9, v8->clientIndex) )
      __debugbreak();
  }
  outNextSnap->serverEntries.m_storageType = serverSnap->entries.m_storageType;
  *(__m256i *)outNextSnap->serverEntries.m_first = *(__m256i *)serverSnap->entries.m_first;
  *(__m256i *)&outNextSnap->serverEntries.m_first[4] = *(__m256i *)&serverSnap->entries.m_first[4];
  *(_OWORD *)&outNextSnap->serverEntries.m_first[8] = *(_OWORD *)&serverSnap->entries.m_first[8];
  *(__m256i *)outNextSnap->serverEntries.m_count = *(__m256i *)serverSnap->entries.m_count;
  *(double *)&outNextSnap->serverEntries.m_count[8] = *(double *)&serverSnap->entries.m_count[8];
  if ( v8->hasAckedBaselineData )
  {
    outNextSnap->baselineSnap = 0;
    if ( serverSnap->entries.m_first[0] == -10000000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_build_mp.cpp", 1361, ASSERT_TYPE_ASSERT, "( serverSnap->entries.GetFirst( SvSnapshotBufferType::ENTITIES ) != NODELTA_ENTINDEX_OFFSET )", (const char *)&queryFormat, "serverSnap->entries.GetFirst( SvSnapshotBufferType::ENTITIES ) != NODELTA_ENTINDEX_OFFSET") )
      __debugbreak();
    if ( serverSnap->entries.m_first[8] == 0x7FFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_build_mp.cpp", 1362, ASSERT_TYPE_ASSERT, "( serverSnap->entries.GetFirst( SvSnapshotBufferType::WEAPONS ) != 0x7FFFFFFF )", (const char *)&queryFormat, "serverSnap->entries.GetFirst( SvSnapshotBufferType::WEAPONS ) != WEAPON_SNAPSHOT_NODELTA") )
      __debugbreak();
    if ( serverSnap->entries.m_first[6] == 0x7FFFFFFFFFFFFFFFi64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_build_mp.cpp", 1363, ASSERT_TYPE_ASSERT, "( serverSnap->entries.GetFirst( SvSnapshotBufferType::SCRIPTABLE_INSTANCES ) != SCRIPTABLE_SNAPSHOT_NODELTA_INDEX )", (const char *)&queryFormat, "serverSnap->entries.GetFirst( SvSnapshotBufferType::SCRIPTABLE_INSTANCES ) != SCRIPTABLE_SNAPSHOT_NODELTA_INDEX") )
      __debugbreak();
    if ( serverSnap->entries.m_first[7] == 0x7FFFFFFFFFFFFFFFi64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_build_mp.cpp", 1364, ASSERT_TYPE_ASSERT, "( serverSnap->entries.GetFirst( SvSnapshotBufferType::SCRIPTABLE_PARTS ) != SCRIPTABLE_SNAPSHOT_NODELTA_INDEX )", (const char *)&queryFormat, "serverSnap->entries.GetFirst( SvSnapshotBufferType::SCRIPTABLE_PARTS ) != SCRIPTABLE_SNAPSHOT_NODELTA_INDEX") )
      __debugbreak();
    if ( serverSnap->entries.m_first[9] == 0x7FFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_build_mp.cpp", 1367, ASSERT_TYPE_ASSERT, "( serverSnap->entries.GetFirst( SvSnapshotBufferType::UMBRA_GATES ) != 0x7FFFFFFF )", (const char *)&queryFormat, "serverSnap->entries.GetFirst( SvSnapshotBufferType::UMBRA_GATES ) != UMBRA_GATES_NODELTA_INDEX") )
      __debugbreak();
  }
  else
  {
    if ( snapInfo->storageType )
    {
      LODWORD(v9) = (unsigned __int8)snapInfo->storageType;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_build_mp.cpp", 1372, ASSERT_TYPE_ASSERT, "( snapInfo->storageType ) == ( SvSnapshotStorageType::FULL )", "snapInfo->storageType == SvSnapshotStorageType::FULL\n\t%i, %i", v9, 0i64) )
        __debugbreak();
    }
    SV_BuildClientSnapshot_AssignBaselineIndices(outNextSnap);
  }
}

/*
==============
SV_BuildClientSnapshot_PopulateFinalSnapshot
==============
*/
void SV_BuildClientSnapshot_PopulateFinalSnapshot(SvClientMP *const client, const int currentTime)
{
  unsigned int MpClientIndex; 
  clientSnapshot_t *SnapshotForSequence; 
  clientSnapshot_t *v6; 

  if ( !client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_build_mp.cpp", 1383, ASSERT_TYPE_ASSERT, "( client )", (const char *)&queryFormat, "client") )
    __debugbreak();
  MpClientIndex = SV_Client_GetMpClientIndex(client);
  SV_SnapWorkersMP_UpdateBaselineAcknowledge(client, currentTime, currentTime);
  SV_SnapWorkersMP_UpdateScriptableAcknowledge(client, MpClientIndex);
  SnapshotForSequence = SvClientMP::AllocateSnapshotForSequence(client, client->netchan.outgoingSequence, FULL);
  v6 = SnapshotForSequence;
  SnapshotForSequence->serverTime = currentTime;
  SnapshotForSequence->timeDelta = 0;
  if ( client->hasAckedBaselineData )
    SnapshotForSequence->baselineSnap = 0;
  else
    SV_BuildClientSnapshot_AssignBaselineIndices(SnapshotForSequence);
  SV_BuildClientSnapshot_PopulatePlayerstateCopy(v6, MpClientIndex, client);
}

/*
==============
SV_BuildClientSnapshot_PopulateOmnvars
==============
*/
void SV_BuildClientSnapshot_PopulateOmnvars(clientSnapshot_t *frame, const int clientNum)
{
  __int64 v2; 
  __int64 v4; 
  __int64 v5; 
  __int64 v6; 
  OmnvarData *omnvars; 
  int omnvarsIdx; 
  unsigned int v9; 
  int v10; 
  __int64 v11; 
  OmnvarData *v12; 
  OmnvarData *v13; 
  OmnvarData *v14; 
  OmnvarData *v15; 
  __int64 v16; 
  OmnvarData *v17; 
  __int64 v18; 
  __int64 v19; 
  unsigned int v20; 

  v2 = clientNum;
  if ( !frame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_build_mp.cpp", 1014, ASSERT_TYPE_ASSERT, "( frame )", (const char *)&queryFormat, "frame") )
    __debugbreak();
  v4 = BG_Omnvar_PerGameCount();
  v5 = BG_Omnvar_PerClientCount();
  v6 = BG_Omnvar_PerClientSpectateCount();
  if ( (int)v5 + (int)v4 > BG_Omnvar_PerSnapCount() )
  {
    v20 = BG_Omnvar_PerSnapCount();
    LODWORD(v18) = v5 + v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_build_mp.cpp", 1019, ASSERT_TYPE_ASSERT, "( gamescopeCount + clientscopeCount ) <= ( BG_Omnvar_PerSnapCount() )", "gamescopeCount + clientscopeCount <= BG_Omnvar_PerSnapCount()\n\t%i, %i", v18, v20) )
      __debugbreak();
  }
  if ( (unsigned int)v2 >= 0xC8 )
  {
    LODWORD(v19) = 200;
    LODWORD(v18) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_build_mp.cpp", 1021, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( ( sizeof( *array_counter( g_svSnapshotData.nextOmnvarsIdx ) ) + 0 ) )", "clientNum doesn't index ARRAY_COUNT( g_svSnapshotData.nextOmnvarsIdx )\n\t%i not in [0, %i)", v18, v19) )
      __debugbreak();
  }
  frame->omnvarsIdx = g_svSnapshotData.nextOmnvarsIdx[v2]++;
  omnvars = g_svSnapshotData.omnvars;
  omnvarsIdx = frame->omnvarsIdx;
  v9 = BG_Omnvar_PerSnapCount();
  v10 = omnvarsIdx;
  v11 = v4;
  v12 = &omnvars[(int)(v9 * (v2 * g_svSnapshotData.omnvarsPerClientCount + v10 % g_svSnapshotData.omnvarsPerClientCount))];
  memcpy_0(v12, level.gameOmnvars, 8 * v4);
  if ( (unsigned int)v2 >= level.maxclients )
  {
    LODWORD(v19) = level.maxclients;
    LODWORD(v18) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_build_mp.cpp", 1030, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( level.maxclients )", "clientNum doesn't index level.maxclients\n\t%i not in [0, %i)", v18, v19) )
      __debugbreak();
  }
  v13 = level.clients[v2].sess.omnvars;
  if ( !v13 )
  {
    BG_Omnvar_LoadClientscopeDefaults(&v12[v11]);
    return;
  }
  if ( !(_DWORD)v6 || !GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagInternal(&frame->ps.otherFlags, GameModeFlagValues::ms_mpValue, 0x21u) )
  {
    v15 = &v12[v11];
LABEL_23:
    v16 = v5;
    v17 = v13;
    goto LABEL_24;
  }
  if ( frame->ps.clientNum >= (unsigned int)level.maxclients )
  {
    LODWORD(v19) = level.maxclients;
    LODWORD(v18) = frame->ps.clientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_build_mp.cpp", 1043, ASSERT_TYPE_ASSERT, "(unsigned)( frame->ps.clientNum ) < (unsigned)( level.maxclients )", "frame->ps.clientNum doesn't index level.maxclients\n\t%i not in [0, %i)", v18, v19) )
      __debugbreak();
  }
  v14 = level.clients[frame->ps.clientNum].sess.omnvars;
  v15 = &v12[v11];
  if ( !v14 )
    goto LABEL_23;
  memcpy_0(v15, v14, 8 * v6);
  v16 = (unsigned int)(v5 - v6);
  v17 = &v13[v6];
  v15 = &v12[(unsigned int)(v6 + v4)];
LABEL_24:
  memcpy_0(v15, v17, 8 * v16);
}

/*
==============
SV_BuildClientSnapshot_PopulatePlayerstateCopy
==============
*/
void SV_BuildClientSnapshot_PopulatePlayerstateCopy(clientSnapshot_t *frame, int clientNum, SvClientMP *client)
{
  playerState_s *EffectivePlayerstateForClientNum; 
  GWeaponMap *Instance; 
  clientSnapshot_t *v8; 

  if ( !frame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_build_mp.cpp", 1095, ASSERT_TYPE_ASSERT, "( frame )", (const char *)&queryFormat, "frame") )
    __debugbreak();
  if ( !client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_build_mp.cpp", 1096, ASSERT_TYPE_ASSERT, "( client )", (const char *)&queryFormat, "client") )
    __debugbreak();
  EffectivePlayerstateForClientNum = SV_GameMP_GetEffectivePlayerstateForClientNum(clientNum);
  Instance = GWeaponMap::GetInstance();
  GSnapshotWeaponMap::CopyFromMap(&frame->weaponMap, Instance);
  if ( !client->gentity || SvClient::GetCommonClient(clientNum)->state == CS_ZOMBIE )
  {
    v8 = frame;
    goto LABEL_13;
  }
  v8 = frame;
  if ( SvStaticGlobals::ms_svStaticGlobals.state != SS_GAME )
  {
LABEL_13:
    memset_0(v8, 0, 0x53A4ui64);
    goto LABEL_14;
  }
  memcpy_0(frame, EffectivePlayerstateForClientNum, 0x53A4ui64);
  if ( !GameModeFlagContainer<enum POtherFlagsCommon,enum POtherFlagsSP,enum POtherFlagsMP,64>::TestFlagStrict(&frame->ps.otherFlags, (POtherFlagsMP)33) )
  {
    SvClientMP::GetPredictedOrigin(client, frame->ps.commandTime, &frame->predictedResult);
    return;
  }
LABEL_14:
  *(_QWORD *)&frame->predictedResult.commandTime = 0i64;
  *(_QWORD *)frame->predictedResult.origin.v = 0i64;
  *(_QWORD *)&frame->predictedResult.origin.z = 0i64;
  *(_QWORD *)&frame->predictedResult.vehicleOrigin.y = 0i64;
  *(_QWORD *)frame->predictedResult.extrapData.offset.v = 0i64;
  *(_QWORD *)&frame->predictedResult.extrapData.offset.z = 0i64;
  *(_QWORD *)&frame->predictedResult.extrapData.inputTime = 0i64;
  frame->predictedResult.extrapData.packedBobCycle[1] = 0;
}

/*
==============
SV_BuildClientSnapshot_PrintIsInvalidFrame
==============
*/
void SV_BuildClientSnapshot_PrintIsInvalidFrame(const serverSnapshot_t *serverFrame, const unsigned int serverTime)
{
  if ( !serverFrame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_build_mp.cpp", 970, ASSERT_TYPE_ASSERT, "( serverFrame != nullptr )", (const char *)&queryFormat, "serverFrame != nullptr") )
    __debugbreak();
  if ( !SvSnapshotEntries::HasValidEntries(&serverFrame->entries, 1) )
    Com_Printf(15, "[Snapshot] SV_BuildClientSnapshot: Invalid frame for server time %d..\n", serverTime);
}

/*
==============
SV_BuildServerSnapshot_AddEntitiesClientsCanSee
==============
*/
void SV_BuildServerSnapshot_AddEntitiesClientsCanSee(SvSnapshotFrameBuffers *snapBuffer, serverSnapshot_t *serverFrame)
{
  serverSnapshot_t *v2; 
  signed int v4; 
  int v5; 
  SvGameGlobals *SvGameGlobalsCommon; 
  int v7; 
  int v8; 
  gentity_s *v12; 
  __int64 v13; 
  __int64 v14; 
  int snapFullEntityCount; 
  serverSnapshot_t *v16; 
  int lastNoDeltaEntNum; 

  v16 = serverFrame;
  v2 = serverFrame;
  if ( !snapBuffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_build_mp.cpp", 164, ASSERT_TYPE_ASSERT, "( snapBuffer )", (const char *)&queryFormat, "snapBuffer") )
    __debugbreak();
  if ( !v2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_build_mp.cpp", 165, ASSERT_TYPE_ASSERT, "( serverFrame )", (const char *)&queryFormat, "serverFrame") )
    __debugbreak();
  if ( !SV_Loaded() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_build_mp.cpp", 166, ASSERT_TYPE_ASSERT, "( SV_Loaded() )", (const char *)&queryFormat, "SV_Loaded()") )
    __debugbreak();
  v4 = 0;
  lastNoDeltaEntNum = 0;
  v5 = 0;
  snapFullEntityCount = 0;
  if ( (_BYTE)SvGameGlobals::ms_allocatedType != HALF_HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_game_globals_mp.h", 146, ASSERT_TYPE_ASSERT, "(ms_allocatedType == ALLOCATION_TYPE)", "%s\n\tTrying to access server globals, but the server isn't running or its game mode is wrong (ms_allocatedType=%d)", "ms_allocatedType == ALLOCATION_TYPE", (unsigned __int8)SvGameGlobals::ms_allocatedType) )
    __debugbreak();
  SvGameGlobalsCommon = SvGameGlobals::GetSvGameGlobalsCommon();
  v7 = 0;
  if ( SvGameGlobalsCommon->num_entities > 0 )
  {
    while ( 1 )
    {
      v8 = v7 + 1;
      _RBX = 1456i64 * (v7 + 1);
      _RAX = SvGameGlobals::GetSvGameGlobalsCommon()->gentities;
      __asm { prefetcht0 byte ptr [rbx+rax] }
      _RCX = SvGameGlobals::GetSvGameGlobalsCommon()->gentities;
      __asm { prefetcht0 byte ptr [rcx+rbx+80h] }
      v12 = &SvGameGlobals::GetSvGameGlobalsCommon()->gentities[v7];
      if ( SV_SnapshotMP_CanClientsSeeEntity(v12) )
      {
        if ( !g_svSnapshotData.maxSnapshotEntities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_build_mp.cpp", 182, ASSERT_TYPE_ASSERT, "( g_svSnapshotData.maxSnapshotEntities )", (const char *)&queryFormat, "g_svSnapshotData.maxSnapshotEntities") )
          __debugbreak();
        if ( SV_SnapshotMP_CheckMaxServerEntitiesReached(v4, g_svSnapshotData.maxSnapshotEntities) )
        {
LABEL_21:
          v5 = snapFullEntityCount;
          v2 = v16;
          break;
        }
        SV_BuildServerSnapshot_AddEntityToSnapshot(snapBuffer, &lastNoDeltaEntNum, &snapFullEntityCount, &v12->s, &v12->clientMask);
        ++v4;
      }
      ++v7;
      if ( v8 >= SvGameGlobalsCommon->num_entities )
        goto LABEL_21;
    }
  }
  if ( v5 > v4 )
  {
    LODWORD(v14) = v4;
    LODWORD(v13) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_build_mp.cpp", 194, ASSERT_TYPE_ASSERT, "( snapEntityStatesCount ) <= ( snapEntityCount )", "snapEntityStatesCount <= snapEntityCount\n\t%i, %i", v13, v14) )
      __debugbreak();
  }
  v2->entries.m_count[0] = v4;
  v2->entries.m_count[1] = v5;
  v2->entries.m_count[2] = v5;
  SV_UpdateEntityCountLogging(v4);
  g_svSnapshotData.activeSnapEntities = v4;
  g_svSnapshotData.activeSnapFullEntities = v5;
}

/*
==============
SV_BuildServerSnapshot_AddEntityToSnapshot
==============
*/
void SV_BuildServerSnapshot_AddEntityToSnapshot(SvSnapshotFrameBuffers *snapBuffer, int *lastNoDeltaEntNum, int *snapFullEntityCount, const entityState_t *ent, const void *clientMask)
{
  int nextNoDeltaEntity; 
  bool v10; 
  __int64 v11; 
  entityState_t *v12; 
  unsigned __int8 *BufferEntryAtIndex; 
  unsigned __int8 *v14; 
  unsigned int v15; 
  __int16 number; 
  unsigned __int8 *v17; 
  unsigned __int8 *v18; 
  unsigned __int8 *v19; 
  unsigned __int8 *v20; 
  __int64 v21; 
  __int64 v22; 
  unsigned int Size; 

  if ( !ent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_build_mp.cpp", 127, ASSERT_TYPE_ASSERT, "( ent )", (const char *)&queryFormat, "ent") )
    __debugbreak();
  if ( !clientMask && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_build_mp.cpp", 128, ASSERT_TYPE_ASSERT, "( clientMask )", (const char *)&queryFormat, "clientMask") )
    __debugbreak();
  if ( !lastNoDeltaEntNum && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_build_mp.cpp", 129, ASSERT_TYPE_ASSERT, "( lastNoDeltaEntNum )", (const char *)&queryFormat, "lastNoDeltaEntNum") )
    __debugbreak();
  if ( !snapFullEntityCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_build_mp.cpp", 130, ASSERT_TYPE_ASSERT, "( snapFullEntityCount )", (const char *)&queryFormat, "snapFullEntityCount") )
    __debugbreak();
  Size = g_svSnapshotData.clientMaskSize;
  if ( !lastNoDeltaEntNum && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_build_mp.cpp", 81, ASSERT_TYPE_ASSERT, "( lastNoDeltaEntNum )", (const char *)&queryFormat, "lastNoDeltaEntNum") )
    __debugbreak();
  nextNoDeltaEntity = g_svSnapshotData.nextNoDeltaEntity;
  v10 = 0;
  if ( g_svSnapshotData.nextNoDeltaEntity != g_svSnapshotData.nextNoDeltaEntityClientMask )
  {
    LODWORD(v21) = g_svSnapshotData.nextNoDeltaEntity;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_build_mp.cpp", 86, ASSERT_TYPE_ASSERT, "( g_svSnapshotData.nextNoDeltaEntity ) == ( g_svSnapshotData.nextNoDeltaEntityClientMask )", "g_svSnapshotData.nextNoDeltaEntity == g_svSnapshotData.nextNoDeltaEntityClientMask\n\t%i, %i", v21, g_svSnapshotData.nextNoDeltaEntityClientMask) )
      __debugbreak();
    nextNoDeltaEntity = g_svSnapshotData.nextNoDeltaEntity;
  }
  v11 = *lastNoDeltaEntNum;
  if ( (int)v11 < nextNoDeltaEntity )
  {
    v12 = &g_svSnapshotData.noDeltaEntities[v11];
    while ( v12->number != ent->number )
    {
      LODWORD(v11) = v11 + 1;
      ++v12;
      if ( (int)v11 >= nextNoDeltaEntity )
        goto LABEL_28;
    }
    if ( !memcmp_0(&g_svSnapshotData.noDeltaEntities[(int)v11], ent, 0xF8ui64) )
      v10 = memcmp_0((char *)g_svSnapshotData.noDeltaEntityClientMaskData + (unsigned int)v11 * Size, clientMask, Size) == 0;
    *lastNoDeltaEntNum = v11;
  }
LABEL_28:
  BufferEntryAtIndex = SvSnapshotFrameBuffers::GetBufferEntryAtIndex(snapBuffer, MOVEMENT, snapBuffer->m_nextBufferIndex[0]);
  ++snapBuffer->m_nextBufferIndex[0];
  v14 = BufferEntryAtIndex;
  if ( snapBuffer->m_nextBufferIndex[0] >= 0x7FFFFFFFFFFFFFFEi64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp_types.h", 302, ASSERT_TYPE_ASSERT, "(m_nextBufferIndex[typeIndex] < MAX_SV_SNAPSHOT_ENTRY_INDEX)", "%s\n\tThis should never hit, map should always be restarted first in SV_MainMP_Frame", "m_nextBufferIndex[typeIndex] < MAX_SV_SNAPSHOT_ENTRY_INDEX") )
    __debugbreak();
  if ( v10 )
  {
    v15 = g_svSnapshotData.nextNoDeltaEntity;
    if ( g_svSnapshotData.nextNoDeltaEntity != g_svSnapshotData.nextNoDeltaEntityClientMask )
    {
      LODWORD(v22) = g_svSnapshotData.nextNoDeltaEntityClientMask;
      LODWORD(v21) = g_svSnapshotData.nextNoDeltaEntity;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_build_mp.cpp", 138, ASSERT_TYPE_ASSERT, "( g_svSnapshotData.nextNoDeltaEntity ) == ( g_svSnapshotData.nextNoDeltaEntityClientMask )", "g_svSnapshotData.nextNoDeltaEntity == g_svSnapshotData.nextNoDeltaEntityClientMask\n\t%i, %i", v21, v22) )
        __debugbreak();
      v15 = g_svSnapshotData.nextNoDeltaEntity;
    }
    if ( *lastNoDeltaEntNum >= v15 )
    {
      LODWORD(v22) = v15;
      LODWORD(v21) = *lastNoDeltaEntNum;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_build_mp.cpp", 139, ASSERT_TYPE_ASSERT, "(unsigned)( *lastNoDeltaEntNum ) < (unsigned)( g_svSnapshotData.nextNoDeltaEntity )", "*lastNoDeltaEntNum doesn't index g_svSnapshotData.nextNoDeltaEntity\n\t%i not in [0, %i)", v21, v22) )
        __debugbreak();
    }
    number = g_svSnapshotData.noDeltaEntities[*lastNoDeltaEntNum].number;
    if ( number != ent->number )
    {
      LODWORD(v22) = ent->number;
      LODWORD(v21) = number;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_build_mp.cpp", 140, ASSERT_TYPE_ASSERT, "( g_svSnapshotData.noDeltaEntities[*lastNoDeltaEntNum].number ) == ( ent->number )", "g_svSnapshotData.noDeltaEntities[*lastNoDeltaEntNum].number == ent->number\n\t%i, %i", v21, v22) )
        __debugbreak();
    }
    *(_WORD *)v14 = truncate_cast<unsigned short,int>(*lastNoDeltaEntNum + 2048);
  }
  else
  {
    if ( *snapFullEntityCount >= 2048 )
    {
      LODWORD(v22) = 2048;
      LODWORD(v21) = *snapFullEntityCount;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_build_mp.cpp", 145, ASSERT_TYPE_ASSERT, "( *snapFullEntityCount ) < ( (( 2048 )) )", "*snapFullEntityCount < SNAPSHOT_ENTITY_UNCHANGED_OFFSET\n\t%i, %i", v21, v22) )
        __debugbreak();
    }
    *(_WORD *)v14 = truncate_cast<unsigned short,int>(*snapFullEntityCount);
    ++*snapFullEntityCount;
    v17 = SvSnapshotFrameBuffers::GetBufferEntryAtIndex(snapBuffer, DODGE, snapBuffer->m_nextBufferIndex[1]);
    ++snapBuffer->m_nextBufferIndex[1];
    v18 = v17;
    if ( snapBuffer->m_nextBufferIndex[1] >= 0x7FFFFFFFFFFFFFFEi64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp_types.h", 302, ASSERT_TYPE_ASSERT, "(m_nextBufferIndex[typeIndex] < MAX_SV_SNAPSHOT_ENTRY_INDEX)", "%s\n\tThis should never hit, map should always be restarted first in SV_MainMP_Frame", "m_nextBufferIndex[typeIndex] < MAX_SV_SNAPSHOT_ENTRY_INDEX") )
      __debugbreak();
    *(_OWORD *)v18 = *(_OWORD *)&ent->number;
    *((_OWORD *)v18 + 1) = *(_OWORD *)&ent->lerp.pos.trType;
    *((_OWORD *)v18 + 2) = *(_OWORD *)&ent->lerp.pos.trBase.y;
    *((_OWORD *)v18 + 3) = *(_OWORD *)&ent->lerp.pos.trDelta.z;
    *((_OWORD *)v18 + 4) = *(_OWORD *)ent->lerp.apos.trBase.v;
    *((_OWORD *)v18 + 5) = *(_OWORD *)&ent->lerp.apos.trDelta.y;
    *((_OWORD *)v18 + 6) = *(_OWORD *)&ent->lerp.u.vehicle.bodyPitch;
    *((_OWORD *)v18 + 7) = *(LerpEntityStateInfoVolumeGrapple *)((char *)&ent->lerp.u.infoVolumeGrapple + 24);
    *((_OWORD *)v18 + 8) = *(_OWORD *)&ent->staticState.turret.carrierEntNum;
    *((_OWORD *)v18 + 9) = *(_OWORD *)&ent->clientNum;
    *((_OWORD *)v18 + 10) = *(_OWORD *)&ent->events[0].eventType;
    *((_OWORD *)v18 + 11) = *(_OWORD *)&ent->events[2].eventType;
    *((_OWORD *)v18 + 12) = *(_OWORD *)&ent->index.brushModel;
    *((_OWORD *)v18 + 13) = *(_OWORD *)&ent->animInfo.selectAnim;
    *((_OWORD *)v18 + 14) = *(_OWORD *)&ent->partBits.array[2];
    *((_QWORD *)v18 + 30) = *(_QWORD *)&ent->partBits.array[6];
    v19 = SvSnapshotFrameBuffers::GetBufferEntryAtIndex(snapBuffer, COUNT, snapBuffer->m_nextBufferIndex[2]);
    ++snapBuffer->m_nextBufferIndex[2];
    v20 = v19;
    if ( snapBuffer->m_nextBufferIndex[2] >= 0x7FFFFFFFFFFFFFFEi64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp_types.h", 302, ASSERT_TYPE_ASSERT, "(m_nextBufferIndex[typeIndex] < MAX_SV_SNAPSHOT_ENTRY_INDEX)", "%s\n\tThis should never hit, map should always be restarted first in SV_MainMP_Frame", "m_nextBufferIndex[typeIndex] < MAX_SV_SNAPSHOT_ENTRY_INDEX") )
      __debugbreak();
    memcpy_0(v20, clientMask, g_svSnapshotData.clientMaskSize);
  }
}

/*
==============
SV_BuildServerSnapshot_SaveSnapshotForArchivedTime
==============
*/
__int64 SV_BuildServerSnapshot_SaveSnapshotForArchivedTime(const int currentTime, const SvSnapshotIdentifier *buildInfo)
{
  bool archiveUsePOTG; 
  unsigned int v5; 
  char *Value; 
  unsigned int *v7; 
  unsigned int v8; 
  _QWORD *v9; 
  char *v10; 
  int *v11; 
  unsigned __int64 v12; 
  ThreadContext CurrentThreadContext; 
  const char *v14; 
  int v15; 
  unsigned __int8 v16; 
  unsigned int serverTime; 
  unsigned int v18; 
  serverSnapshot_t *v19; 
  SvSnapshotFrameBuffers *StorageBuffer; 
  int v21; 
  SvSnapshotBufferType i; 
  __int64 BufferNextIndex; 
  int v24; 
  cachedSnapshotWorldState_t *v25; 
  cachedClientState_t *v26; 
  unsigned __int8 *BufferEntryAtIndex; 
  unsigned __int8 *v28; 
  __int64 v29; 
  int v30; 
  cachedAgent_s *v31; 
  unsigned __int8 *v32; 
  unsigned int v33; 
  int v34; 
  cachedEntityLoD_t *v35; 
  unsigned __int8 *v36; 
  unsigned __int8 *v37; 
  __int64 v38; 
  unsigned int scriptableInstCount; 
  size_t scriptablePartCount; 
  ScriptableReplicatedInstance *v41; 
  ScriptablePartData *v42; 
  unsigned __int8 *NextBufferEntryArray; 
  unsigned __int8 *v44; 
  bitarray<384> *v45; 
  cachedSnapshotWeaponMap_t *v46; 
  WeaponMapEntry *v47; 
  unsigned __int8 *v48; 
  char *fmt; 
  __int64 firstEntClientMaskIndex; 
  __int64 firstEntClientMaskIndexa; 
  __int64 v53; 
  __int64 v54; 
  int pArchiveTime; 
  cachedSnapshotWorldState_t *outCachedWorldState; 
  int v57; 
  serverSnapshot_t *v58; 
  cachedSnapshotWeaponMap_t *outCachedWeaponMap[2]; 
  int v60[250]; 

  outCachedWeaponMap[1] = (cachedSnapshotWeaponMap_t *)-2i64;
  if ( !buildInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_build_mp.cpp", 814, ASSERT_TYPE_ASSERT, "( buildInfo )", (const char *)&queryFormat, "buildInfo") )
    __debugbreak();
  archiveUsePOTG = buildInfo->archiveUsePOTG;
  if ( SvStaticGlobals::ms_svStaticGlobals.state != SS_GAME && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_build_mp.cpp", 824, ASSERT_TYPE_ASSERT, "( svs->state == SvState::SS_GAME )", (const char *)&queryFormat, "svs->state == SvState::SS_GAME") )
    __debugbreak();
  v5 = currentTime - buildInfo->serverTime;
  Value = (char *)Sys_GetValue(0);
  v7 = (unsigned int *)(Value + 14696);
  if ( (unsigned int)(*((_DWORD *)Value + 3674) + 1) >= 3 )
  {
    LODWORD(firstEntClientMaskIndex) = *((_DWORD *)Value + 3674) + 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 95, ASSERT_TYPE_ASSERT, "(unsigned)( p->write.nesting + 1 ) < (unsigned)( ( sizeof( *array_counter( p->write.start ) ) + 0 ) )", "p->write.nesting + 1 doesn't index ARRAY_COUNT( p->write.start )\n\t%i not in [0, %i)", firstEntClientMaskIndex, 3) )
      __debugbreak();
  }
  v8 = *v7 + 1;
  *v7 = v8;
  if ( v8 >= 3 )
  {
    LODWORD(v53) = 3;
    LODWORD(firstEntClientMaskIndex) = v8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 97, ASSERT_TYPE_ASSERT, "(unsigned)( p->write.nesting ) < (unsigned)( ( sizeof( *array_counter( p->write.start ) ) + 0 ) )", "p->write.nesting doesn't index ARRAY_COUNT( p->write.start )\n\t%i not in [0, %i)", firstEntClientMaskIndex, v53) )
      __debugbreak();
  }
  v9 = Value + 2088;
  v10 = Value + 40;
  if ( *v9 < (unsigned __int64)v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 99, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack >= prof_stack->prof_pStack )", (const char *)&queryFormat, "prof_stack->prof_ppStack >= prof_stack->prof_pStack") )
    __debugbreak();
  *v9 += 8i64;
  if ( *v9 >= (unsigned __int64)v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 101, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack < prof_stack->prof_pStack + 256 )", (const char *)&queryFormat, "prof_stack->prof_ppStack < prof_stack->prof_pStack + PROF_STACK_SIZE") )
    __debugbreak();
  *(_QWORD *)*v9 = v7;
  if ( *v9 <= (unsigned __int64)v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 103, ASSERT_TYPE_ASSERT, "( prof_stack->prof_ppStack > prof_stack->prof_pStack )", (const char *)&queryFormat, "prof_stack->prof_ppStack > prof_stack->prof_pStack") )
    __debugbreak();
  v11 = (int *)&v7[*v7 + 2];
  v12 = __rdtsc();
  *v11 = v12;
  if ( Sys_HasValidCurrentThreadContext() )
    CurrentThreadContext = Sys_GetCurrentThreadContext();
  else
    CurrentThreadContext = THREAD_CONTEXT_COUNT;
  CPUTimelineProfiler::BeginSample(&g_cpuProfiler, CurrentThreadContext, 315, NULL, 0);
  v14 = j_va("SV_SaveSnapshotForArchivedTime(%d)", v5);
  Sys_ProfBeginNamedEvent(0xFFFF0000, v14);
  pArchiveTime = v5;
  if ( !SV_SnapshotMP_GetCachedSnapshotWorldState(archiveUsePOTG, &pArchiveTime, &outCachedWorldState) )
  {
    Com_PrintWarning(16, "Failed to get cached world state snapshot for time %i, we asked for offset %i\n", (unsigned int)(currentTime - buildInfo->serverTime));
LABEL_31:
    v16 = 0;
    goto LABEL_123;
  }
  v57 = pArchiveTime;
  if ( !SV_SnapshotMP_GetCachedSnapshotWeaponMap(archiveUsePOTG, &v57, outCachedWeaponMap) )
  {
    Com_PrintWarning(16, "Failed to get cached weapon map for time %i, we asked for offset %i\n", (unsigned int)(currentTime - buildInfo->serverTime));
    goto LABEL_31;
  }
  v15 = pArchiveTime;
  if ( v57 != pArchiveTime )
  {
    Com_PrintWarning(16, "Failed to find weapon map for world state at time %i, we asked for offset %i\n", (unsigned int)(currentTime - buildInfo->serverTime));
    goto LABEL_31;
  }
  if ( outCachedWorldState->archivedFrame != outCachedWeaponMap[0]->archivedFrame )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_build_mp.cpp", 852, ASSERT_TYPE_ASSERT, "( cachedWorldStateFrame->archivedFrame ) == ( cachedWeaponMapFrame->archivedFrame )", "%s == %s\n\t%i, %i", "cachedWorldStateFrame->archivedFrame", "cachedWeaponMapFrame->archivedFrame", outCachedWorldState->archivedFrame, outCachedWeaponMap[0]->archivedFrame) )
      __debugbreak();
    v15 = pArchiveTime;
  }
  serverTime = buildInfo->serverTime;
  v18 = currentTime - serverTime;
  if ( v15 != v18 )
  {
    LODWORD(fmt) = v15;
    Com_PrintWarning(16, "Failed to get cached snapshot for time %i, we asked for offset %i and got time %i instead\n", v18, serverTime, fmt);
    serverTime = buildInfo->serverTime;
  }
  g_svSnapshotData.serverSnapshotTimes[g_svSnapshotData.nextServerSnapshotIndex] = serverTime;
  v19 = &g_svSnapshotData.snapshots[(__int64)g_svSnapshotData.nextServerSnapshotIndex];
  v58 = v19;
  memset_0(v19, 0, sizeof(serverSnapshot_t));
  g_svSnapshotData.nextServerSnapshotIndex = (LOBYTE(g_svSnapshotData.nextServerSnapshotIndex) + 1) & 0x3F;
  if ( !v19 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_build_mp.cpp", 860, ASSERT_TYPE_ASSERT, "( serverFrame != nullptr )", (const char *)&queryFormat, "serverFrame != nullptr") )
    __debugbreak();
  v19->entries.m_storageType = buildInfo->storageType;
  StorageBuffer = SvSnapshotEntries::GetStorageBuffer(&v19->entries);
  v21 = 0;
  for ( i = MOVEMENT; (unsigned int)i < 0xA; ++i )
  {
    BufferNextIndex = SvSnapshotFrameBuffers::GetBufferNextIndex(StorageBuffer, i);
    SvSnapshotEntries::SetFirst(&v19->entries, i, BufferNextIndex);
    SvSnapshotEntries::SetCount(&v19->entries, i, 0);
  }
  SV_SnapshotBuildMP_AddCachedEntities(StorageBuffer, v19, outCachedWorldState->num_entities, outCachedWorldState->first_entity, outCachedWorldState->num_entityClientMask, outCachedWorldState->first_entityClientMask);
  memset_0(v60, 0, 0x3E0ui64);
  v24 = 0;
  v25 = outCachedWorldState;
  if ( outCachedWorldState->num_clientStates > 0 )
  {
    do
    {
      v26 = &g_svSnapshotData.cachedSnapshotClientStates[(__int64)((v24 + v25->first_clientState) % g_svSnapshotData.numCachedSnapshotClientStates)];
      BufferEntryAtIndex = SvSnapshotFrameBuffers::GetBufferEntryAtIndex(StorageBuffer, (const SvSnapshotBufferType)4, StorageBuffer->m_nextBufferIndex[4]);
      if ( ++StorageBuffer->m_nextBufferIndex[4] >= 0x7FFFFFFFFFFFFFFEi64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp_types.h", 302, ASSERT_TYPE_ASSERT, "(m_nextBufferIndex[typeIndex] < MAX_SV_SNAPSHOT_ENTRY_INDEX)", "%s\n\tThis should never hit, map should always be restarted first in SV_MainMP_Frame", "m_nextBufferIndex[typeIndex] < MAX_SV_SNAPSHOT_ENTRY_INDEX") )
        __debugbreak();
      v28 = BufferEntryAtIndex;
      v29 = 3i64;
      do
      {
        *(_OWORD *)v28 = *(_OWORD *)&v26->cs.clientIndex;
        *((_OWORD *)v28 + 1) = *(_OWORD *)&v26->cs.doNotSimulateTracers;
        *((_OWORD *)v28 + 2) = *(_OWORD *)v26->cs.isWeaponSmoking;
        *((_OWORD *)v28 + 3) = *(_OWORD *)&v26->cs.attachModelIndex[1];
        *((_OWORD *)v28 + 4) = *(_OWORD *)&v26->cs.attachModelIndex[5];
        *((_OWORD *)v28 + 5) = *(_OWORD *)v26->cs.attachTagIndex;
        *((_OWORD *)v28 + 6) = *(_OWORD *)&v26->cs.attachTagIndex[4];
        v28 += 128;
        *((_OWORD *)v28 - 1) = *(_OWORD *)&v26->cs.attachTagIndex[8];
        v26 = (cachedClientState_t *)((char *)v26 + 128);
        --v29;
      }
      while ( v29 );
      *(_OWORD *)v28 = *(_OWORD *)&v26->cs.clientIndex;
      *((_QWORD *)v28 + 2) = *(_QWORD *)&v26->cs.doNotSimulateTracers;
      if ( *(_DWORD *)BufferEntryAtIndex >= 0xF8u )
      {
        LODWORD(v53) = 248;
        LODWORD(firstEntClientMaskIndexa) = *(_DWORD *)BufferEntryAtIndex;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_build_mp.cpp", 889, ASSERT_TYPE_ASSERT, "(unsigned)( clientState->clientIndex ) < (unsigned)( ( sizeof( *array_counter( characterIndex ) ) + 0 ) )", "clientState->clientIndex doesn't index ARRAY_COUNT( characterIndex )\n\t%i not in [0, %i)", firstEntClientMaskIndexa, v53) )
          __debugbreak();
      }
      if ( v60[*(int *)BufferEntryAtIndex] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_build_mp.cpp", 890, ASSERT_TYPE_ASSERT, "( !characterIndex[clientState->clientIndex] )", (const char *)&queryFormat, "!characterIndex[clientState->clientIndex]") )
        __debugbreak();
      v60[*(int *)BufferEntryAtIndex] = 1;
      ++v24;
      v25 = outCachedWorldState;
    }
    while ( v24 < outCachedWorldState->num_clientStates );
    v19 = v58;
  }
  v19->entries.m_count[4] = v25->num_clientStates;
  v30 = 0;
  if ( v25->num_agents > 0 )
  {
    do
    {
      v31 = &g_svSnapshotData.cachedSnapshotAgents[(__int64)((v30 + v25->first_agent) % g_svSnapshotData.numCachedSnapshotAgents)];
      v32 = SvSnapshotFrameBuffers::GetBufferEntryAtIndex(StorageBuffer, (const SvSnapshotBufferType)5, StorageBuffer->m_nextBufferIndex[5]);
      if ( ++StorageBuffer->m_nextBufferIndex[5] >= 0x7FFFFFFFFFFFFFFEi64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp_types.h", 302, ASSERT_TYPE_ASSERT, "(m_nextBufferIndex[typeIndex] < MAX_SV_SNAPSHOT_ENTRY_INDEX)", "%s\n\tThis should never hit, map should always be restarted first in SV_MainMP_Frame", "m_nextBufferIndex[typeIndex] < MAX_SV_SNAPSHOT_ENTRY_INDEX") )
        __debugbreak();
      *(_OWORD *)v32 = *(_OWORD *)&v31->agentState.entityNum;
      *((_OWORD *)v32 + 1) = *(_OWORD *)&v31->agentState.dualWielding;
      *((_OWORD *)v32 + 2) = *(_OWORD *)v31->agentState.isWeaponSmoking;
      *((_OWORD *)v32 + 3) = *(_OWORD *)v31->agentState.attachModelIndex;
      *((_OWORD *)v32 + 4) = *(_OWORD *)&v31->agentState.attachModelIndex[4];
      *((_OWORD *)v32 + 5) = *(_OWORD *)&v31->agentState.attachModelIndex[8];
      *((_OWORD *)v32 + 6) = *(_OWORD *)&v31->agentState.attachTagIndex[3];
      *((_OWORD *)v32 + 7) = *(_OWORD *)&v31->agentState.attachTagIndex[7];
      *((_OWORD *)v32 + 8) = *(_OWORD *)&v31->agentState.compressedAnimData.flags;
      *((_OWORD *)v32 + 9) = *(_OWORD *)&v31->agentState.compressedAnimData.endScriptAnimTableIndex;
      *((_OWORD *)v32 + 10) = *(_OWORD *)&v31->agentState.gunAdditiveIndex;
      *((_OWORD *)v32 + 11) = *(_OWORD *)&v31->agentState.civilianFocus;
      *((_OWORD *)v32 + 12) = *(_OWORD *)&v31->agentState.footstepActionType;
      *((_OWORD *)v32 + 13) = *(_OWORD *)&v31->agentState.playerASM_scripted_anim_start_time;
      *((_OWORD *)v32 + 14) = *(_OWORD *)&v31->agentState.vehicleAnimStateSeat;
      *((_QWORD *)v32 + 30) = *(_QWORD *)&v31->agentState.serverDobjHeldWeapon.m_mapEntryId;
      *((_DWORD *)v32 + 62) = *(_DWORD *)&v31->agentState.serverDobjHideWeapon;
      if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 168, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
        __debugbreak();
      if ( (int)ComCharacterLimits::ms_gameData.m_clientCount > *(__int16 *)v32 )
        goto LABEL_126;
      if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
        __debugbreak();
      if ( *(__int16 *)v32 > (signed int)(ComCharacterLimits::ms_gameData.m_characterCount - 1) )
      {
LABEL_126:
        if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
          __debugbreak();
        v33 = ComCharacterLimits::ms_gameData.m_characterCount - 1;
        if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 168, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
          __debugbreak();
        LODWORD(v54) = v33;
        LODWORD(v53) = ComCharacterLimits::ms_gameData.m_clientCount;
        LODWORD(firstEntClientMaskIndexa) = *(__int16 *)v32;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_build_mp.cpp", 904, ASSERT_TYPE_ASSERT, "( ComCharacterLimits::GetAgentEntityIndexOffset() ) <= ( agentState->entityNum ) && ( agentState->entityNum ) <= ( ComCharacterLimits::GetCharacterMaxCount() - 1 )", "agentState->entityNum not in [ComCharacterLimits::GetAgentEntityIndexOffset(), ComCharacterLimits::GetCharacterMaxCount() - 1]\n\t%i not in [%i, %i]", firstEntClientMaskIndexa, v53, v54) )
          __debugbreak();
      }
      if ( v60[*(__int16 *)v32] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_build_mp.cpp", 905, ASSERT_TYPE_ASSERT, "( !characterIndex[agentState->entityNum] )", (const char *)&queryFormat, "!characterIndex[agentState->entityNum]") )
        __debugbreak();
      v60[*(__int16 *)v32] = 1;
      ++v30;
      v25 = outCachedWorldState;
    }
    while ( v30 < outCachedWorldState->num_agents );
    v19 = v58;
  }
  v19->entries.m_count[5] = v25->num_agents;
  if ( g_svSnapshotData.useNetfieldLoD )
  {
    if ( !StorageBuffer->m_bufferData[3] )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_build_mp.cpp", 913, ASSERT_TYPE_ASSERT, "( snapBuffer->GetBuferData( SvSnapshotBufferType::ENTITY_LODS ) != nullptr )", (const char *)&queryFormat, "snapBuffer->GetBuferData( SvSnapshotBufferType::ENTITY_LODS ) != nullptr") )
        __debugbreak();
      v25 = outCachedWorldState;
    }
    if ( !g_svSnapshotData.cachedSnapshotEntityLoD )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_build_mp.cpp", 914, ASSERT_TYPE_ASSERT, "( g_svSnapshotData.cachedSnapshotEntityLoD != nullptr )", (const char *)&queryFormat, "g_svSnapshotData.cachedSnapshotEntityLoD != nullptr") )
        __debugbreak();
      v25 = outCachedWorldState;
    }
    v34 = 0;
    if ( v25->num_entityLoD > 0 )
    {
      do
      {
        v35 = &g_svSnapshotData.cachedSnapshotEntityLoD[(v34 + v25->first_entityLoD) % g_svSnapshotData.numCachedSnapshotEntityLoD];
        v36 = SvSnapshotFrameBuffers::GetBufferEntryAtIndex(StorageBuffer, COUNT|DODGE, StorageBuffer->m_nextBufferIndex[3]);
        if ( ++StorageBuffer->m_nextBufferIndex[3] >= 0x7FFFFFFFFFFFFFFEi64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp_types.h", 302, ASSERT_TYPE_ASSERT, "(m_nextBufferIndex[typeIndex] < MAX_SV_SNAPSHOT_ENTRY_INDEX)", "%s\n\tThis should never hit, map should always be restarted first in SV_MainMP_Frame", "m_nextBufferIndex[typeIndex] < MAX_SV_SNAPSHOT_ENTRY_INDEX") )
          __debugbreak();
        v37 = v36;
        v38 = 2i64;
        do
        {
          *(_OWORD *)v37 = *(_OWORD *)&v35->lodInfo.clientIndex;
          *((_OWORD *)v37 + 1) = *(_OWORD *)&v35->lodInfo.clientEntityLoD.array[3];
          *((_OWORD *)v37 + 2) = *(_OWORD *)&v35->lodInfo.clientEntityLoD.array[7];
          *((_OWORD *)v37 + 3) = *(_OWORD *)&v35->lodInfo.clientEntityLoD.array[11];
          *((_OWORD *)v37 + 4) = *(_OWORD *)&v35->lodInfo.clientEntityLoD.array[15];
          *((_OWORD *)v37 + 5) = *(_OWORD *)&v35->lodInfo.clientEntityLoD.array[19];
          *((_OWORD *)v37 + 6) = *(_OWORD *)&v35->lodInfo.clientEntityLoD.array[23];
          v37 += 128;
          *((_OWORD *)v37 - 1) = *(_OWORD *)&v35->lodInfo.clientEntityLoD.array[27];
          v35 = (cachedEntityLoD_t *)((char *)v35 + 128);
          --v38;
        }
        while ( v38 );
        *(_DWORD *)v37 = v35->lodInfo.clientIndex;
        if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 109, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
          __debugbreak();
        if ( *(_DWORD *)v36 >= ComCharacterLimits::ms_gameData.m_clientCount )
        {
          if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 109, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
            __debugbreak();
          LODWORD(v53) = ComCharacterLimits::ms_gameData.m_clientCount;
          LODWORD(firstEntClientMaskIndexa) = *(_DWORD *)v36;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_build_mp.cpp", 922, ASSERT_TYPE_ASSERT, "(unsigned)( lodInfo->clientIndex ) < (unsigned)( ComCharacterLimits::GetClientMaxCount() )", "lodInfo->clientIndex doesn't index ComCharacterLimits::GetClientMaxCount()\n\t%i not in [0, %i)", firstEntClientMaskIndexa, v53) )
            __debugbreak();
        }
        ++v34;
        v25 = outCachedWorldState;
      }
      while ( v34 < outCachedWorldState->num_entityLoD );
      v19 = v58;
    }
    v19->entries.m_count[3] = v25->num_entityLoD;
  }
  scriptableInstCount = v25->scriptableInstCount;
  scriptablePartCount = v25->scriptablePartCount;
  v41 = &g_svSnapshotData.scriptableSnapshots.cachedInstances[(unsigned int)(v25->scriptableInstFirstIndex % g_svSnapshotData.scriptableSnapshots.cachedInstCount)];
  v42 = &g_svSnapshotData.scriptableSnapshots.cachedParts[(unsigned int)(v25->scriptablePartFirstIndex % g_svSnapshotData.scriptableSnapshots.cachedPartCount)];
  if ( scriptableInstCount )
  {
    v19->entries.m_first[6] = SvSnapshotFrameBuffers::EnsureContiguousArray(StorageBuffer, (const SvSnapshotBufferType)6, scriptableInstCount);
    NextBufferEntryArray = SvSnapshotFrameBuffers::AllocateNextBufferEntryArray(StorageBuffer, (const SvSnapshotBufferType)6, scriptableInstCount);
    memcpy_0(NextBufferEntryArray, v41, 32i64 * scriptableInstCount);
  }
  if ( (_DWORD)scriptablePartCount )
  {
    v19->entries.m_first[7] = SvSnapshotFrameBuffers::EnsureContiguousArray(StorageBuffer, COUNT|DODGE|0x4, scriptablePartCount);
    v44 = SvSnapshotFrameBuffers::AllocateNextBufferEntryArray(StorageBuffer, COUNT|DODGE|0x4, scriptablePartCount);
    memcpy_0(v44, v42, scriptablePartCount);
  }
  v19->entries.m_count[6] = scriptableInstCount;
  v19->entries.m_count[7] = scriptablePartCount;
  v45 = (bitarray<384> *)SvSnapshotFrameBuffers::GetBufferEntryAtIndex(StorageBuffer, (const SvSnapshotBufferType)9, StorageBuffer->m_nextBufferIndex[9]);
  if ( ++StorageBuffer->m_nextBufferIndex[9] >= 0x7FFFFFFFFFFFFFFEi64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp_types.h", 302, ASSERT_TYPE_ASSERT, "(m_nextBufferIndex[typeIndex] < MAX_SV_SNAPSHOT_ENTRY_INDEX)", "%s\n\tThis should never hit, map should always be restarted first in SV_MainMP_Frame", "m_nextBufferIndex[typeIndex] < MAX_SV_SNAPSHOT_ENTRY_INDEX") )
    __debugbreak();
  *v45 = g_svSnapshotData.cachedSnapshotUmbraGateStates[outCachedWorldState->umbraGateStatesIndex % g_svSnapshotData.numCachedSnapshotUmbraGateStates];
  v19->entries.m_count[9] = 1;
  v46 = outCachedWeaponMap[0];
  if ( outCachedWeaponMap[0]->num_weapons > 0 )
  {
    do
    {
      v47 = &g_svSnapshotData.cachedSnapshotWeapons[(v21 + v46->first_weapon) % g_svSnapshotData.numCachedSnapshotWeapons];
      v48 = SvSnapshotFrameBuffers::GetBufferEntryAtIndex(StorageBuffer, (const SvSnapshotBufferType)8, StorageBuffer->m_nextBufferIndex[8]);
      if ( ++StorageBuffer->m_nextBufferIndex[8] >= 0x7FFFFFFFFFFFFFFEi64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp_types.h", 302, ASSERT_TYPE_ASSERT, "(m_nextBufferIndex[typeIndex] < MAX_SV_SNAPSHOT_ENTRY_INDEX)", "%s\n\tThis should never hit, map should always be restarted first in SV_MainMP_Frame", "m_nextBufferIndex[typeIndex] < MAX_SV_SNAPSHOT_ENTRY_INDEX") )
        __debugbreak();
      *(__m256i *)v48 = *(__m256i *)&v47->index;
      *((_OWORD *)v48 + 2) = *(_OWORD *)&v47->weapon.attachmentVariationIndices[3];
      *((double *)v48 + 6) = *(double *)&v47->weapon.attachmentVariationIndices[19];
      *((_DWORD *)v48 + 14) = *(_DWORD *)&v47->weapon.attachmentVariationIndices[27];
      *((_WORD *)v48 + 30) = *(_WORD *)&v47->weapon.scopeVariation;
      ++v21;
      v46 = outCachedWeaponMap[0];
    }
    while ( v21 < outCachedWeaponMap[0]->num_weapons );
    v19 = v58;
  }
  v19->entries.m_count[8] = v46->num_weapons;
  v16 = 1;
LABEL_123:
  Sys_ProfEndNamedEvent();
  Profile_EndInternal(NULL);
  return v16;
}

/*
==============
SV_BuildServerSnapshot_SaveSnapshotForTime
==============
*/
void SV_BuildServerSnapshot_SaveSnapshotForTime(const int currentTime, const SvSnapshotIdentifier *buildInfo)
{
  const dvar_t *v4; 
  unsigned int v5; 
  const dvar_t *v6; 
  serverSnapshot_t *v7; 
  unsigned int v8; 
  signed int v9; 
  SvSnapshotFrameBuffers *StorageBuffer; 
  __int64 v11; 
  signed int v12; 
  unsigned int v13; 
  unsigned __int8 *BufferEntryAtIndex; 
  unsigned __int8 *v15; 
  clientState_t *ClientState; 
  unsigned __int8 *v17; 
  __int64 v18; 
  __int128 v19; 
  unsigned int v20; 
  SvPersistentGlobalsMP *PersistentGlobalsMP; 
  int v22; 
  unsigned __int8 *v23; 
  agentState_s *v24; 
  int entityNum; 
  unsigned int v26; 
  bool v27; 
  int *v28; 
  unsigned int v29; 
  signed int v30; 
  unsigned __int8 *v31; 
  unsigned __int8 *v32; 
  GWeaponMap *Instance; 
  int v34; 
  unsigned __int16 i; 
  unsigned __int8 *v36; 
  WeaponMapEntry *v37; 
  unsigned int ReplicatedInstanceLimit; 
  const ScriptableReplicatedInstance *ReplicatedInstances; 
  unsigned __int8 *NextBufferEntryArray; 
  unsigned int TotalReplicatedPartsLimit; 
  const ScriptablePartWorldState *PartWorldState; 
  ScriptablePartData *v43; 
  const ScriptableReplicatedLimits *ReplicatedLimits; 
  unsigned __int8 *v45; 
  unsigned __int8 *v46; 
  __int64 v47; 
  __int64 v48; 
  __int64 v49; 
  __int64 v50; 
  WeaponMapEntry outWeaponMapEntry; 
  int v52[48]; 
  int v53[200]; 

  memset_0(v53, 0, sizeof(v53));
  memset_0(v52, 0, sizeof(v52));
  Sys_ProfBeginNamedEvent(0xFF0000FF, "SV_BuildServerSnapshot_SaveSnapshotForTime");
  if ( !buildInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_build_mp.cpp", 582, ASSERT_TYPE_ASSERT, "( buildInfo )", (const char *)&queryFormat, "buildInfo") )
    __debugbreak();
  if ( currentTime != buildInfo->serverTime )
  {
    LODWORD(v47) = currentTime;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_build_mp.cpp", 583, ASSERT_TYPE_ASSERT, "( currentTime ) == ( buildInfo->serverTime )", "currentTime == buildInfo->serverTime\n\t%i, %i", v47, buildInfo->serverTime) )
      __debugbreak();
  }
  if ( !SvPersistentGlobalsMP::GetPersistentGlobalsMP()->frontEndState[0] && Lobby_IsInRunningLobby() )
  {
    v4 = DVARINT_party_maxplayers;
    if ( !DVARINT_party_maxplayers && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "party_maxplayers") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v4);
    v5 = SvClient::ms_clientCount;
    if ( v4->current.integer != SvClient::ms_clientCount )
    {
      v6 = DVARINT_party_maxplayers;
      if ( !DVARINT_party_maxplayers && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "party_maxplayers") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v6);
      LODWORD(v48) = v6->current.integer;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_build_mp.cpp", 586, ASSERT_TYPE_ASSERT, "(SvPersistentGlobalsMP::IsFrontEndServer() || !Lobby_IsInRunningLobby() || Dvar_GetInt_Internal_DebugName( DVARINT_party_maxplayers, \"party_maxplayers\" ) == SvClient::GetClientCount())", "%s\n\tDvar_GetInt( party_maxplayers ) != SvClient::GetClientCount(), %i != %i", "SvPersistentGlobalsMP::IsFrontEndServer() || !Lobby_IsInRunningLobby() || Dvar_GetInt( party_maxplayers ) == SvClient::GetClientCount()", v48, v5) )
        __debugbreak();
    }
  }
  g_svSnapshotData.serverSnapshotTimes[g_svSnapshotData.nextServerSnapshotIndex] = buildInfo->serverTime;
  v7 = &g_svSnapshotData.snapshots[(__int64)g_svSnapshotData.nextServerSnapshotIndex];
  memset_0(v7, 0, sizeof(serverSnapshot_t));
  g_svSnapshotData.nextServerSnapshotIndex = (LOBYTE(g_svSnapshotData.nextServerSnapshotIndex) + 1) & 0x3F;
  if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_build_mp.cpp", 590, ASSERT_TYPE_ASSERT, "( serverFrame != nullptr )", (const char *)&queryFormat, "serverFrame != nullptr") )
    __debugbreak();
  v7->entries.m_storageType = buildInfo->storageType;
  v8 = 0;
  v9 = 0;
  StorageBuffer = SvSnapshotEntries::GetStorageBuffer(&v7->entries);
  do
  {
    v11 = v9;
    v7->entries.m_first[v9] = StorageBuffer->m_nextBufferIndex[v9];
    ++v9;
    v7->entries.m_count[v11] = 0;
  }
  while ( (unsigned int)v9 < 0xA );
  SV_BuildServerSnapshot_AddEntitiesClientsCanSee(StorageBuffer, v7);
  v12 = 0;
  v13 = 0;
  if ( (int)SvClient::ms_clientCount > 0 )
  {
    do
    {
      if ( SvClient::GetCommonClient(v12)->state >= CS_CONNECTED )
      {
        BufferEntryAtIndex = SvSnapshotFrameBuffers::GetBufferEntryAtIndex(StorageBuffer, (const SvSnapshotBufferType)4, StorageBuffer->m_nextBufferIndex[4]);
        ++StorageBuffer->m_nextBufferIndex[4];
        v15 = BufferEntryAtIndex;
        if ( StorageBuffer->m_nextBufferIndex[4] >= 0x7FFFFFFFFFFFFFFEi64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp_types.h", 302, ASSERT_TYPE_ASSERT, "(m_nextBufferIndex[typeIndex] < MAX_SV_SNAPSHOT_ENTRY_INDEX)", "%s\n\tThis should never hit, map should always be restarted first in SV_MainMP_Frame", "m_nextBufferIndex[typeIndex] < MAX_SV_SNAPSHOT_ENTRY_INDEX") )
          __debugbreak();
        ClientState = G_MainMP_GetClientState(v12);
        v17 = v15;
        v18 = 3i64;
        do
        {
          v17 += 128;
          v19 = *(_OWORD *)&ClientState->clientIndex;
          ClientState = (clientState_t *)((char *)ClientState + 128);
          *((_OWORD *)v17 - 8) = v19;
          *((_OWORD *)v17 - 7) = *(_OWORD *)&ClientState[-1].perkIconName;
          *((_OWORD *)v17 - 6) = *(_OWORD *)&ClientState[-1].doorState[0].angle;
          *((_OWORD *)v17 - 5) = *(_OWORD *)&ClientState[-1].doorState[1].owner;
          *((_OWORD *)v17 - 4) = *(_OWORD *)&ClientState[-1].footstepActionType;
          *((_OWORD *)v17 - 3) = *(_OWORD *)&ClientState[-1].playerASM_scripted_anim_start_time;
          *((_OWORD *)v17 - 2) = *(_OWORD *)&ClientState[-1].vehicleAnimStateSeat;
          *((_OWORD *)v17 - 1) = *(_OWORD *)&ClientState[-1].movingPlatform;
          --v18;
        }
        while ( v18 );
        *(_OWORD *)v17 = *(_OWORD *)&ClientState->clientIndex;
        *((_QWORD *)v17 + 2) = *(_QWORD *)&ClientState->doNotSimulateTracers;
        if ( *(_DWORD *)v15 != v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_build_mp.cpp", 615, ASSERT_TYPE_ASSERT, "( clientState->clientIndex == i )", (const char *)&queryFormat, "clientState->clientIndex == i") )
          __debugbreak();
        ++v13;
        if ( v53[*(int *)v15] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_build_mp.cpp", 620, ASSERT_TYPE_ASSERT, "( !clientIndex[clientState->clientIndex] )", (const char *)&queryFormat, "!clientIndex[clientState->clientIndex]") )
          __debugbreak();
        v53[*(int *)v15] = 1;
      }
      ++v12;
    }
    while ( v12 < (int)SvClient::ms_clientCount );
    v8 = 0;
  }
  v7->entries.m_count[4] = v13;
  v20 = 0;
  PersistentGlobalsMP = SvPersistentGlobalsMP::GetPersistentGlobalsMP();
  v22 = 0;
  if ( PersistentGlobalsMP->agentCount > 0 )
  {
    do
    {
      if ( PersistentGlobalsMP->agents[v22].entityNum != 2047 )
      {
        v23 = SvSnapshotFrameBuffers::GetBufferEntryAtIndex(StorageBuffer, (const SvSnapshotBufferType)5, StorageBuffer->m_nextBufferIndex[5]);
        ++StorageBuffer->m_nextBufferIndex[5];
        v24 = (agentState_s *)v23;
        if ( StorageBuffer->m_nextBufferIndex[5] >= 0x7FFFFFFFFFFFFFFEi64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp_types.h", 302, ASSERT_TYPE_ASSERT, "(m_nextBufferIndex[typeIndex] < MAX_SV_SNAPSHOT_ENTRY_INDEX)", "%s\n\tThis should never hit, map should always be restarted first in SV_MainMP_Frame", "m_nextBufferIndex[typeIndex] < MAX_SV_SNAPSHOT_ENTRY_INDEX") )
          __debugbreak();
        *v24 = *G_MainMP_GetAgentState(v22);
        if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 116, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
          __debugbreak();
        if ( v22 >= ComCharacterLimits::ms_gameData.m_agentCount )
        {
          if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 116, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
            __debugbreak();
          LODWORD(v48) = ComCharacterLimits::ms_gameData.m_agentCount;
          LODWORD(v47) = v22;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 186, ASSERT_TYPE_ASSERT, "(unsigned)( agentIndex ) < (unsigned)( ComCharacterLimits::GetAgentMaxCount() )", "agentIndex doesn't index ComCharacterLimits::GetAgentMaxCount()\n\t%i not in [0, %i)", v47, v48) )
            __debugbreak();
        }
        if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 168, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
          __debugbreak();
        if ( v24->entityNum != v22 + ComCharacterLimits::ms_gameData.m_clientCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_build_mp.cpp", 635, ASSERT_TYPE_ASSERT, "( agentState->entityNum == ComCharacterLimits::GetEntityIndexFromAgentIndex( i ) )", (const char *)&queryFormat, "agentState->entityNum == ComCharacterLimits::GetEntityIndexFromAgentIndex( i )") )
          __debugbreak();
        entityNum = v24->entityNum;
        ++v20;
        if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 168, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
          __debugbreak();
        if ( entityNum < (int)ComCharacterLimits::ms_gameData.m_clientCount )
        {
          if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 168, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
            __debugbreak();
          LODWORD(v50) = ComCharacterLimits::ms_gameData.m_clientCount;
          LODWORD(v49) = entityNum;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 175, ASSERT_TYPE_ASSERT, "( entityIndex ) >= ( ComCharacterLimits::GetAgentEntityIndexOffset() )", "%s >= %s\n\t%i, %i", "entityIndex", "ComCharacterLimits::GetAgentEntityIndexOffset()", v49, v50) )
            __debugbreak();
        }
        if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 168, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
          __debugbreak();
        v26 = entityNum - ComCharacterLimits::ms_gameData.m_clientCount;
        if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 116, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
          __debugbreak();
        if ( v26 >= ComCharacterLimits::ms_gameData.m_agentCount )
        {
          if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 116, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
            __debugbreak();
          LODWORD(v48) = ComCharacterLimits::ms_gameData.m_agentCount;
          LODWORD(v47) = v26;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 178, ASSERT_TYPE_ASSERT, "(unsigned)( agentIndex ) < (unsigned)( ComCharacterLimits::GetAgentMaxCount() )", "agentIndex doesn't index ComCharacterLimits::GetAgentMaxCount()\n\t%i not in [0, %i)", v47, v48) )
            __debugbreak();
        }
        v27 = v52[v26] == 0;
        v28 = &v52[v26];
        if ( !v27 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_build_mp.cpp", 641, ASSERT_TYPE_ASSERT, "( !agentIndex[thisAgentIndex] )", (const char *)&queryFormat, "!agentIndex[thisAgentIndex]") )
          __debugbreak();
        *v28 = 1;
      }
      ++v22;
    }
    while ( v22 < PersistentGlobalsMP->agentCount );
    v8 = 0;
  }
  v7->entries.m_count[5] = v20;
  if ( g_svSnapshotData.useNetfieldLoD )
  {
    if ( !StorageBuffer->m_bufferData[3] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_build_mp.cpp", 649, ASSERT_TYPE_ASSERT, "( snapBuffer->GetBuferData( SvSnapshotBufferType::ENTITY_LODS ) != nullptr )", (const char *)&queryFormat, "snapBuffer->GetBuferData( SvSnapshotBufferType::ENTITY_LODS ) != nullptr") )
      __debugbreak();
    v29 = 0;
    v30 = 0;
    if ( (int)SvClient::ms_clientCount > 0 )
    {
      do
      {
        if ( SvClient::GetCommonClient(v30)->state >= CS_CONNECTED )
        {
          v31 = SvSnapshotFrameBuffers::GetBufferEntryAtIndex(StorageBuffer, COUNT|DODGE, StorageBuffer->m_nextBufferIndex[3]);
          ++StorageBuffer->m_nextBufferIndex[3];
          v32 = v31;
          if ( StorageBuffer->m_nextBufferIndex[3] >= 0x7FFFFFFFFFFFFFFEi64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp_types.h", 302, ASSERT_TYPE_ASSERT, "(m_nextBufferIndex[typeIndex] < MAX_SV_SNAPSHOT_ENTRY_INDEX)", "%s\n\tThis should never hit, map should always be restarted first in SV_MainMP_Frame", "m_nextBufferIndex[typeIndex] < MAX_SV_SNAPSHOT_ENTRY_INDEX") )
            __debugbreak();
          *(_DWORD *)v32 = v30;
          *(EntityLoDs *)(v32 + 4) = *G_ActiveMP_GetEntityLoD(v30);
          SV_EntitiesLoD_Validate(v30, (const EntityLoDs *const)(v32 + 4));
          ++v29;
        }
        ++v30;
      }
      while ( v30 < (int)SvClient::ms_clientCount );
      v8 = 0;
    }
    v7->entries.m_count[3] = v29;
  }
  Instance = GWeaponMap::GetInstance();
  if ( !BgWeaponMap::ms_runtimeSizeInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_map.h", 228, ASSERT_TYPE_ASSERT, "(ms_runtimeSizeInitialized)", (const char *)&queryFormat, "ms_runtimeSizeInitialized") )
    __debugbreak();
  v34 = BgWeaponMap::ms_runtimeSize - 1;
  for ( i = 1; i < v34; ++i )
  {
    if ( GWeaponMap::TryGetWeaponEntry(Instance, i, &outWeaponMapEntry) )
    {
      v36 = SvSnapshotFrameBuffers::GetBufferEntryAtIndex(StorageBuffer, (const SvSnapshotBufferType)8, StorageBuffer->m_nextBufferIndex[8]);
      ++StorageBuffer->m_nextBufferIndex[8];
      v37 = (WeaponMapEntry *)v36;
      if ( StorageBuffer->m_nextBufferIndex[8] >= 0x7FFFFFFFFFFFFFFEi64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp_types.h", 302, ASSERT_TYPE_ASSERT, "(m_nextBufferIndex[typeIndex] < MAX_SV_SNAPSHOT_ENTRY_INDEX)", "%s\n\tThis should never hit, map should always be restarted first in SV_MainMP_Frame", "m_nextBufferIndex[typeIndex] < MAX_SV_SNAPSHOT_ENTRY_INDEX") )
        __debugbreak();
      *v37 = outWeaponMapEntry;
      ++v8;
    }
  }
  v7->entries.m_count[8] = v8;
  Sys_ProfBeginNamedEvent(0xFF0000FF, "SV_BuildServerSnapshot_AddScriptables");
  ReplicatedInstanceLimit = ScriptableSv_GetReplicatedInstanceLimit();
  if ( ReplicatedInstanceLimit )
  {
    ReplicatedInstances = ScriptableSv_GetReplicatedInstances();
    v7->entries.m_first[6] = SvSnapshotFrameBuffers::EnsureContiguousArray(StorageBuffer, (const SvSnapshotBufferType)6, ReplicatedInstanceLimit);
    NextBufferEntryArray = SvSnapshotFrameBuffers::AllocateNextBufferEntryArray(StorageBuffer, (const SvSnapshotBufferType)6, ReplicatedInstanceLimit);
    memcpy_0(NextBufferEntryArray, ReplicatedInstances, 32i64 * ReplicatedInstanceLimit);
  }
  TotalReplicatedPartsLimit = ScriptableSv_GetTotalReplicatedPartsLimit();
  if ( TotalReplicatedPartsLimit )
  {
    PartWorldState = ScriptableSv_GetPartWorldState();
    v7->entries.m_first[7] = SvSnapshotFrameBuffers::EnsureContiguousArray(StorageBuffer, COUNT|DODGE|0x4, TotalReplicatedPartsLimit);
    v43 = (ScriptablePartData *)SvSnapshotFrameBuffers::AllocateNextBufferEntryArray(StorageBuffer, COUNT|DODGE|0x4, TotalReplicatedPartsLimit);
    ReplicatedLimits = ScriptableSv_GetReplicatedLimits();
    ScriptableCommon_CopyScriptableParts(PartWorldState, v43, ReplicatedLimits);
  }
  v7->entries.m_count[6] = ReplicatedInstanceLimit;
  v7->entries.m_count[7] = TotalReplicatedPartsLimit;
  Sys_ProfEndNamedEvent();
  v45 = SvSnapshotFrameBuffers::GetBufferEntryAtIndex(StorageBuffer, (const SvSnapshotBufferType)9, StorageBuffer->m_nextBufferIndex[9]);
  ++StorageBuffer->m_nextBufferIndex[9];
  v46 = v45;
  if ( StorageBuffer->m_nextBufferIndex[9] >= 0x7FFFFFFFFFFFFFFEi64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp_types.h", 302, ASSERT_TYPE_ASSERT, "(m_nextBufferIndex[typeIndex] < MAX_SV_SNAPSHOT_ENTRY_INDEX)", "%s\n\tThis should never hit, map should always be restarted first in SV_MainMP_Frame", "m_nextBufferIndex[typeIndex] < MAX_SV_SNAPSHOT_ENTRY_INDEX") )
    __debugbreak();
  *(__m256i *)v46 = *(__m256i *)level.umbraGateStates.array;
  *((_OWORD *)v46 + 2) = *(_OWORD *)&level.umbraGateStates.array[8];
  v7->entries.m_count[9] = 1;
  Sys_ProfEndNamedEvent();
}

/*
==============
SV_LogConstBaselineEfficiency
==============
*/
void SV_LogConstBaselineEfficiency(unsigned int entityCount)
{
  signed __int64 v1; 
  void *v2; 
  unsigned int EntityArrayCountUsed; 
  int v5; 
  int v6; 
  int v7; 
  unsigned int v8; 
  unsigned int v9; 
  int v10; 
  int v11; 
  __int64 v12; 
  __int64 v13; 
  entityState_t *v14; 
  const entityState_t *Entity; 
  const entityState_t *v16; 
  int v17; 
  int v18; 
  int v19; 
  signed __int64 v20; 
  int v21; 
  float v22; 
  float v23; 
  float v24; 
  unsigned int v25; 
  SvPersistentGlobalsMP *PersistentGlobalsMP; 
  const char *MapName; 
  const char *GameType; 
  unsigned int v29; 
  BOOL BaselineValidState; 
  const char *v31; 
  const char *v32; 
  const char *HostName; 
  bool v34; 
  const char *v35; 
  const char *v36; 
  const char *v37; 
  int ControllerFromClient; 
  unsigned __int64 UserId; 
  bool v40; 
  bool v41; 
  __int64 v42; 
  __int64 v43; 
  __int64 v44; 
  int value; 
  unsigned int valuea; 
  int v47; 
  DLogContext context; 
  char buffer[4096]; 

  v2 = alloca(v1);
  EntityArrayCountUsed = NetConstBaselines_GetEntityArrayCountUsed();
  v5 = 248 * g_svSnapshotData.nextNoDeltaEntity;
  v6 = 0;
  value = EntityArrayCountUsed;
  v7 = 0;
  v8 = EntityArrayCountUsed;
  v9 = EntityArrayCountUsed;
  v10 = 0;
  v11 = 0;
  if ( !EntityArrayCountUsed )
    v7 = 248 * g_svSnapshotData.nextNoDeltaEntity;
  v47 = 248 * g_svSnapshotData.nextNoDeltaEntity;
  if ( EntityArrayCountUsed > entityCount )
    v8 = entityCount;
  if ( v8 )
  {
    v12 = 0i64;
    v13 = v8;
    do
    {
      v14 = &g_svSnapshotData.noDeltaEntities[v12];
      Entity = NetConstBaselines_GetEntity(g_svSnapshotData.noDeltaEntities[v12].number);
      v16 = Entity;
      if ( Entity )
      {
        if ( !memcmp_0(v14, Entity, 0xF8ui64) )
        {
          ++v10;
        }
        else
        {
          v17 = 0;
          v18 = -1;
          v19 = 0;
          v20 = (char *)v16 - (char *)v14;
          do
          {
            if ( LOBYTE(v14->number) != *((_BYTE *)&v14->number + v20) )
            {
              ++v17;
              v21 = v19;
              if ( v18 != -1 )
                v21 = v18;
              v18 = v21;
            }
            ++v19;
            v14 = (entityState_t *)((char *)v14 + 1);
          }
          while ( v19 < 248 );
          v7 += v17;
        }
      }
      else
      {
        ++v11;
      }
      ++v12;
      --v13;
    }
    while ( v13 );
    v9 = value;
    v5 = v47;
  }
  v22 = 0.0;
  if ( v5 )
    v23 = (float)((float)(v5 - v7) * 100.0) / (float)v5;
  else
    v23 = 0.0;
  if ( v9 )
  {
    v24 = (float)v9;
    v22 = (float)((float)v10 * 100.0) / v24;
  }
  v25 = NetConstBaselines_GetEntityArrayCountUsed();
  PersistentGlobalsMP = SvPersistentGlobalsMP::GetPersistentGlobalsMP();
  Com_Printf(16, "[Snapshot] SV_LogConstBaselineEfficiency: SvPersistentGlobalsMP::GetTime() %d : %d of %d (%.2f%%) file based entities were matched, %d missed in the local baseline (total: %d bytes of %d different (%.2f%%) )\n", (unsigned int)PersistentGlobalsMP->time, (unsigned int)v10, v25, v22, v11, v7, v5, (float)(100.0 - v23));
  if ( !SV_NetConstBaselines_GetBaselineValidState() )
  {
    MapName = SV_Game_GetMapName();
    GameType = SV_GameMP_GetGameType();
    Com_PrintWarning(16, "\n\n!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n Const baseline failed validation check for gametype %s on map %s!\n!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n\n", GameType, MapName);
  }
  v29 = NetConstBaselines_GetEntityArrayCountUsed();
  BaselineValidState = SV_NetConstBaselines_GetBaselineValidState();
  v31 = SV_Game_GetMapName();
  v32 = SV_GameMP_GetGameType();
  HostName = SV_GameMP_GetHostName();
  LOBYTE(v6) = v9 == 0;
  LODWORD(v44) = v7;
  LODWORD(v43) = v29;
  LODWORD(v42) = BaselineValidState;
  Com_Printf(16, "[Snapshot] posting to blackbox table \"network_health_monitor\" - version %d, platform %s, hostname %s, gametype %s, mapname %s, baselinePassedValidityCheck %d, entitiesInBaseline %d, baselineBytesDifferentTotal %d, baselineBytesTotal %d, baselinePercentageCorrect %0.2f, baselineFileMissing %d\n", 5i64, "xb3", HostName, v32, v31, v42, v43, v44, v47, v23, v6);
  valuea = NetConstBaselines_GetEntityArrayCountUsed();
  v34 = SV_NetConstBaselines_GetBaselineValidState();
  v35 = SV_Game_GetMapName();
  v36 = SV_GameMP_GetGameType();
  v37 = SV_GameMP_GetHostName();
  ControllerFromClient = CL_Mgr_GetControllerFromClient(LOCAL_CLIENT_0);
  UserId = DLog_GetUserId(ControllerFromClient);
  if ( DLog_IsActive() && DLog_CreateContext(&context, UserId, buffer, 4096) && DLog_IsActive() )
  {
    v40 = DLog_BeginEvent(&context, "network_health_monitor");
    context.autoEndEvent = 1;
    if ( v40 && DLog_Int32(&context, "version", 5) && DLog_String(&context, "platform", "xb3", 0) && DLog_String(&context, "hostname", v37, 0) && DLog_String(&context, "gametype", v36, 0) && DLog_String(&context, "mapname", v35, 0) && DLog_Bool(&context, "baselinePassedValidityCheck", v34) && DLog_Int32(&context, "entitiesInBaseline", valuea) && DLog_Int32(&context, "baselineBytesDifferentTotal", v7) && DLog_Int32(&context, "baselineBytesTotal", v47) && DLog_Float32(&context, "baselinePercentageCorrect", v23) && DLog_Bool(&context, "baselineFileMissing", v9 == 0) )
      DLog_RecordContext(&context);
  }
  v41 = SV_NetConstBaselines_GetBaselineValidState();
  SV_BandwidthProfile_RecordEvent(-1, "constBaseline:valid %d,entitiesCorrect %f,bytesCorrect %f", v41, v22, v23);
}

/*
==============
SV_SnapshotBuildMP_AddCachedEntities
==============
*/
void SV_SnapshotBuildMP_AddCachedEntities(SvSnapshotFrameBuffers *snapBuffer, serverSnapshot_t *serverFrame, const int entCount, int firstEntityIndex, const int entClientMaskCount, int firstEntClientMaskIndex)
{
  serverSnapshot_t *v6; 
  SvSnapshotFrameBuffers *v7; 
  __int64 v9; 
  int v10; 
  int v11; 
  entityState_t *v12; 
  int v13; 
  __int64 v14; 
  __int64 v15; 
  __int64 v16; 
  int snapFullEntityCount[2]; 
  int lastNoDeltaEntNum[2]; 
  __int64 v19; 
  __int64 v20; 
  __int64 v21; 
  __int64 v22[2048]; 

  v6 = serverFrame;
  v7 = snapBuffer;
  v9 = (unsigned int)entCount;
  *(_QWORD *)lastNoDeltaEntNum = serverFrame;
  *(_QWORD *)snapFullEntityCount = snapBuffer;
  if ( !SV_Loaded() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_build_mp.cpp", 713, ASSERT_TYPE_ASSERT, "( SV_Loaded() )", (const char *)&queryFormat, "SV_Loaded()") )
    __debugbreak();
  if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_build_mp.cpp", 714, ASSERT_TYPE_ASSERT, "( snapBuffer )", (const char *)&queryFormat, "snapBuffer") )
    __debugbreak();
  if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_build_mp.cpp", 715, ASSERT_TYPE_ASSERT, "( serverFrame )", (const char *)&queryFormat, "serverFrame") )
    __debugbreak();
  memset_0(v22, 0, sizeof(v22));
  v10 = 0;
  v11 = 0;
  if ( (int)v9 > 0 )
  {
    do
    {
      v12 = &g_svSnapshotData.cachedSnapshotEntities[(firstEntityIndex + v11) % 10800];
      if ( v12->number >= 0x800u )
      {
        LODWORD(v16) = 2048;
        LODWORD(v15) = v12->number;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_build_mp.cpp", 725, ASSERT_TYPE_ASSERT, "(unsigned)( ent->number ) < (unsigned)( ( 2048 ) )", "ent->number doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v15, v16) )
          __debugbreak();
      }
      if ( v22[v12->number] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_build_mp.cpp", 727, ASSERT_TYPE_ASSERT, "(!entityIndexMap[ent->number])", "%s\n\tDuplicate entity index", "!entityIndexMap[ent->number]") )
        __debugbreak();
      ++v11;
      v22[v12->number] = (__int64)v12;
    }
    while ( v11 < (int)v9 );
    v6 = *(serverSnapshot_t **)lastNoDeltaEntNum;
    v10 = 0;
    v7 = *(SvSnapshotFrameBuffers **)snapFullEntityCount;
  }
  snapFullEntityCount[0] = 0;
  lastNoDeltaEntNum[0] = 0;
  v19 = 0i64;
  v20 = 0i64;
  v21 = 0i64;
  if ( g_svSnapshotData.clientMaskSize > 0x1C && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_build_mp.cpp", 736, ASSERT_TYPE_ASSERT, "( g_svSnapshotData.clientMaskSize ) <= ( entClientMaskBits.BYTE_COUNT )", "%s <= %s\n\t%i, %i", "g_svSnapshotData.clientMaskSize", "entClientMaskBits.BYTE_COUNT", g_svSnapshotData.clientMaskSize, 28) )
    __debugbreak();
  if ( firstEntityIndex != firstEntClientMaskIndex )
  {
    LODWORD(v16) = firstEntClientMaskIndex;
    LODWORD(v15) = firstEntityIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_build_mp.cpp", 739, ASSERT_TYPE_ASSERT, "( firstEntityIndex ) == ( firstEntClientMaskIndex )", "firstEntityIndex == firstEntClientMaskIndex\n\t%i, %i", v15, v16) )
      __debugbreak();
  }
  if ( (_DWORD)v9 != entClientMaskCount )
  {
    LODWORD(v16) = entClientMaskCount;
    LODWORD(v15) = v9;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_build_mp.cpp", 740, ASSERT_TYPE_ASSERT, "( entCount ) == ( entClientMaskCount )", "entCount == entClientMaskCount\n\t%i, %i", v15, v16) )
      __debugbreak();
  }
  if ( (int)v9 > 0 )
  {
    v13 = firstEntClientMaskIndex - firstEntityIndex;
    v14 = v9;
    do
    {
      SV_BuildServerSnapshot_AddEntityToSnapshot(v7, lastNoDeltaEntNum, snapFullEntityCount, &g_svSnapshotData.cachedSnapshotEntities[firstEntityIndex % 10800], (char *)g_svSnapshotData.cachedSnapshotEntityClientMask + g_svSnapshotData.clientMaskSize * ((v13 + firstEntityIndex) % 10800));
      ++firstEntityIndex;
      --v14;
    }
    while ( v14 );
    v10 = snapFullEntityCount[0];
  }
  if ( v10 > (int)v9 )
  {
    LODWORD(v16) = v9;
    LODWORD(v15) = v10;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_build_mp.cpp", 754, ASSERT_TYPE_ASSERT, "( snapEntityStatesCount ) <= ( entCount )", "snapEntityStatesCount <= entCount\n\t%i, %i", v15, v16) )
      __debugbreak();
  }
  v6->entries.m_count[0] = v9;
  v6->entries.m_count[1] = v10;
  v6->entries.m_count[2] = v10;
}

/*
==============
SV_SnapshotMP_ClearBaselineFlagForAllClients
==============
*/
void SV_SnapshotMP_ClearBaselineFlagForAllClients()
{
  signed int i; 
  SvClient *CommonClient; 

  for ( i = 0; i < (int)SvClient::ms_clientCount; CommonClient[602].lastUsercmd.inputTime = -1 )
  {
    if ( (_BYTE)SvClient::ms_allocatedType != HALF_HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.h", 957, ASSERT_TYPE_ASSERT, "( ms_allocatedType == ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == ALLOCATION_TYPE") )
      __debugbreak();
    CommonClient = SvClient::GetCommonClient(i++);
    LOBYTE(CommonClient[602].lastUsercmd.weapon.weaponIdx) = 0;
  }
}

/*
==============
SV_SnapshotMP_CreateBaselineIfNeeded
==============
*/
void SV_SnapshotMP_CreateBaselineIfNeeded(void)
{
  int nextNoDeltaEntity; 
  int nextNoDeltaEntityClientMask; 
  SvGameGlobals *SvGameGlobalsCommon; 
  signed int v4; 
  SvGameGlobals *v5; 
  signed int v6; 
  __int64 v7; 
  gentity_s *v11; 
  unsigned int v12; 
  ClientBits *p_clientMask; 
  __int64 v14; 
  __int64 v15; 
  entityState_t *v16; 
  char *v17; 
  SvPersistentGlobalsMP *PersistentGlobalsMP; 
  GWeaponMap *Instance; 
  bitarray<384> *noDeltaUmbraGateStates; 
  const dvar_t *v21; 
  const char *v22; 
  const char *v23; 
  bool BaselineDataFromFile; 
  const char *GameType; 
  const char *MapName; 
  __int64 v27; 
  __int64 v28; 
  int v29; 

  if ( !g_svSnapshotData.baselineCreated )
  {
    nextNoDeltaEntity = g_svSnapshotData.nextNoDeltaEntity;
    if ( g_svSnapshotData.nextNoDeltaEntity )
    {
      v29 = g_svSnapshotData.nextNoDeltaEntity;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_build_mp.cpp", 401, ASSERT_TYPE_ASSERT, "( ( !g_svSnapshotData.nextNoDeltaEntity ) )", "%s\n\t( g_svSnapshotData.nextNoDeltaEntity ) = %i", "( !g_svSnapshotData.nextNoDeltaEntity )", v29) )
        __debugbreak();
      nextNoDeltaEntity = g_svSnapshotData.nextNoDeltaEntity;
    }
    nextNoDeltaEntityClientMask = g_svSnapshotData.nextNoDeltaEntityClientMask;
    if ( g_svSnapshotData.nextNoDeltaEntityClientMask )
    {
      LODWORD(v28) = g_svSnapshotData.nextNoDeltaEntityClientMask;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_build_mp.cpp", 404, ASSERT_TYPE_ASSERT, "( ( !g_svSnapshotData.nextNoDeltaEntityClientMask ) )", "%s\n\t( g_svSnapshotData.nextNoDeltaEntityClientMask ) = %i", "( !g_svSnapshotData.nextNoDeltaEntityClientMask )", v28) )
        __debugbreak();
      nextNoDeltaEntityClientMask = g_svSnapshotData.nextNoDeltaEntityClientMask;
    }
    _RCX = &g_svSnapshotData.noDeltaEntities[nextNoDeltaEntity];
    __asm { prefetcht0 byte ptr [rcx] }
    if ( !SV_Loaded() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_build_mp.cpp", 409, ASSERT_TYPE_ASSERT, "( SV_Loaded() )", (const char *)&queryFormat, "SV_Loaded()") )
      __debugbreak();
    if ( (_BYTE)SvGameGlobals::ms_allocatedType != HALF_HALF )
    {
      LODWORD(v28) = (unsigned __int8)SvGameGlobals::ms_allocatedType;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_game_globals_mp.h", 146, ASSERT_TYPE_ASSERT, "(ms_allocatedType == ALLOCATION_TYPE)", "%s\n\tTrying to access server globals, but the server isn't running or its game mode is wrong (ms_allocatedType=%d)", "ms_allocatedType == ALLOCATION_TYPE", v28) )
        __debugbreak();
    }
    SvGameGlobalsCommon = SvGameGlobals::GetSvGameGlobalsCommon();
    v4 = SvClient::ms_clientCount;
    v5 = SvGameGlobalsCommon;
    if ( (signed int)SvClient::ms_clientCount < SvGameGlobalsCommon->num_entities )
    {
      v6 = SvClient::ms_clientCount + 1;
      v7 = (int)SvClient::ms_clientCount;
      while ( 2 )
      {
        _RBX = 1456i64 * v6;
        _RAX = SvGameGlobals::GetSvGameGlobalsCommon()->gentities;
        __asm { prefetcht0 byte ptr [rbx+rax] }
        _RCX = SvGameGlobals::GetSvGameGlobalsCommon()->gentities;
        __asm { prefetcht0 byte ptr [rcx+rbx+80h] }
        v11 = &SvGameGlobals::GetSvGameGlobalsCommon()->gentities[v7];
        v12 = 0;
        p_clientMask = &v11->clientMask;
        while ( !p_clientMask->array[0] )
        {
          ++v12;
          p_clientMask = (ClientBits *)((char *)p_clientMask + 4);
          if ( v12 >= 7 )
          {
            if ( SV_SnapshotMP_CanClientsSeeEntity(v11) )
            {
              if ( v11->s.number < (int)SvClient::ms_clientCount )
              {
                LODWORD(v28) = SvClient::ms_clientCount;
                LODWORD(v27) = v11->s.number;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_build_mp.cpp", 435, ASSERT_TYPE_ASSERT, "( ent->s.number ) >= ( SvClient::GetClientCount() )", "ent->s.number >= SvClient::GetClientCount()\n\t%i, %i", v27, v28) )
                  __debugbreak();
              }
              if ( !g_svSnapshotData.maxNoDeltaEntities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_build_mp.cpp", 437, ASSERT_TYPE_ASSERT, "( g_svSnapshotData.maxNoDeltaEntities )", (const char *)&queryFormat, "g_svSnapshotData.maxNoDeltaEntities") )
                __debugbreak();
              if ( nextNoDeltaEntity == g_svSnapshotData.maxNoDeltaEntities )
              {
                Com_PrintError(1, "Hit maxNoDeltaEntities[%d] in baseline snapshot - ignoring the rest.\n", g_svSnapshotData.maxNoDeltaEntities);
                PersistentGlobalsMP = SvPersistentGlobalsMP::GetPersistentGlobalsMP();
                SV_LogBandwidthEvent(EVENT_SNAPSHOT_TRUNCATED_NODELTA_ENTITY_MAX_REACHED, NULL, PersistentGlobalsMP->time);
                goto LABEL_33;
              }
              v14 = nextNoDeltaEntity++;
              v15 = nextNoDeltaEntityClientMask * g_svSnapshotData.clientMaskSize;
              ++nextNoDeltaEntityClientMask;
              v16 = &g_svSnapshotData.noDeltaEntities[v14];
              v17 = (char *)g_svSnapshotData.noDeltaEntityClientMaskData + v15;
              *(_OWORD *)&v16->number = *(_OWORD *)&v11->s.number;
              *(_OWORD *)&v16->lerp.pos.trType = *(_OWORD *)&v11->s.lerp.pos.trType;
              *(_OWORD *)&v16->lerp.pos.trBase.y = *(_OWORD *)&v11->s.lerp.pos.trBase.y;
              *(_OWORD *)&v16->lerp.pos.trDelta.z = *(_OWORD *)&v11->s.lerp.pos.trDelta.z;
              *(_OWORD *)v16->lerp.apos.trBase.v = *(_OWORD *)v11->s.lerp.apos.trBase.v;
              *(_OWORD *)&v16->lerp.apos.trDelta.y = *(_OWORD *)&v11->s.lerp.apos.trDelta.y;
              *(_OWORD *)&v16->lerp.u.vehicle.bodyPitch = *(_OWORD *)&v11->s.lerp.u.vehicle.bodyPitch;
              *(LerpEntityStateInfoVolumeGrapple *)((char *)&v16->lerp.u.infoVolumeGrapple + 24) = *(LerpEntityStateInfoVolumeGrapple *)((char *)&v11->s.lerp.u.infoVolumeGrapple + 24);
              *(_OWORD *)&v16->staticState.turret.carrierEntNum = *(_OWORD *)&v11->s.staticState.turret.carrierEntNum;
              *(_OWORD *)&v16->clientNum = *(_OWORD *)&v11->s.clientNum;
              *(_OWORD *)&v16->events[0].eventType = *(_OWORD *)&v11->s.events[0].eventType;
              *(_OWORD *)&v16->events[2].eventType = *(_OWORD *)&v11->s.events[2].eventType;
              *(_OWORD *)&v16->index.brushModel = *(_OWORD *)&v11->s.index.brushModel;
              *(_OWORD *)&v16->animInfo.selectAnim = *(_OWORD *)&v11->s.animInfo.selectAnim;
              *(_OWORD *)&v16->partBits.array[2] = *(_OWORD *)&v11->s.partBits.array[2];
              *(_QWORD *)&v16->partBits.array[6] = *(_QWORD *)&v11->s.partBits.array[6];
              memcpy_0(v17, &v11->clientMask, g_svSnapshotData.clientMaskSize);
            }
            break;
          }
        }
        ++v4;
        ++v6;
        ++v7;
        if ( v4 < v5->num_entities )
          continue;
        break;
      }
    }
LABEL_33:
    if ( nextNoDeltaEntity != nextNoDeltaEntityClientMask )
    {
      LODWORD(v28) = nextNoDeltaEntityClientMask;
      LODWORD(v27) = nextNoDeltaEntity;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_build_mp.cpp", 461, ASSERT_TYPE_ASSERT, "( nextNoDeltaEntity ) == ( nextNoDeltaEntityClientMask )", "nextNoDeltaEntity == nextNoDeltaEntityClientMask\n\t%i, %i", v27, v28) )
        __debugbreak();
    }
    g_svSnapshotData.nextNoDeltaEntityClientMask = nextNoDeltaEntityClientMask;
    g_svSnapshotData.nextNoDeltaEntity = nextNoDeltaEntity;
    if ( !g_svSnapshotData.noDeltaWeapons && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_build_mp.cpp", 466, ASSERT_TYPE_ASSERT, "( g_svSnapshotData.noDeltaWeapons )", (const char *)&queryFormat, "g_svSnapshotData.noDeltaWeapons") )
      __debugbreak();
    Instance = GWeaponMap::GetInstance();
    GSnapshotWeaponMap::CopyFromMap(g_svSnapshotData.noDeltaWeapons, Instance);
    if ( !g_svSnapshotData.noDeltaUmbraGateStates && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_build_mp.cpp", 471, ASSERT_TYPE_ASSERT, "( g_svSnapshotData.noDeltaUmbraGateStates )", (const char *)&queryFormat, "g_svSnapshotData.noDeltaUmbraGateStates") )
      __debugbreak();
    noDeltaUmbraGateStates = g_svSnapshotData.noDeltaUmbraGateStates;
    *(__m256i *)g_svSnapshotData.noDeltaUmbraGateStates = *(__m256i *)level.umbraGateStates.array;
    *(_OWORD *)&noDeltaUmbraGateStates->array[8] = *(_OWORD *)&level.umbraGateStates.array[8];
    if ( g_svSnapshotData.useConstBaseline )
    {
      if ( Com_GeneratingConstBaselines() )
      {
        GameType = SV_GameMP_GetGameType();
        MapName = SV_Game_GetMapName();
        NetConstBaselines_WriteBaselineDataToFile(nextNoDeltaEntity, g_svSnapshotData.noDeltaEntities, MapName, GameType);
        Com_Printf(16, "[Snapshot] SV_WriteConstBaselineFileIfNeeded copied [%d entities, %zu bytes per entity]\n", (unsigned int)nextNoDeltaEntity, 0xF8ui64);
        Sys_Exit(0);
      }
      v21 = DVARBOOL_sv_generateConstBaselines;
      if ( DVARBOOL_sv_generateConstBaselines && (Dvar_CheckFrontendServerThread(DVARBOOL_sv_generateConstBaselines), v21->current.enabled) )
      {
        Com_Printf(16, "[Snapshot] SV_ReadBaselineDataFromFile: will not read a baseline when it is asked to generated baselines. disable sv_generateConstBaselines to load or verify them.\n");
      }
      else
      {
        v22 = SV_GameMP_GetGameType();
        v23 = SV_Game_GetMapName();
        BaselineDataFromFile = NetConstBaselines_ReadBaselineDataFromFile(v23, v22);
        SV_NetConstBaselines_SetBaselineValidState(BaselineDataFromFile);
        SV_LogConstBaselineEfficiency(nextNoDeltaEntity);
      }
    }
    else
    {
      NetConstBaselines_ClearBaselineData();
      SV_NetConstBaselines_SetBaselineValidState(0);
    }
    g_svSnapshotData.constBaselineIsValid = SV_NetConstBaselines_GetBaselineValidState();
    SV_SnapshotMP_ClearBaselineFlagForAllClients();
    g_svSnapshotData.baselineCreated = 1;
  }
}

/*
==============
SV_SnapshotMP_ResetBaseline
==============
*/
void SV_SnapshotMP_ResetBaseline(void)
{
  g_svSnapshotData.nextNoDeltaEntity = 0;
  g_svSnapshotData.nextNoDeltaEntityClientMask = 0;
  SV_SnapshotMP_ClearBaselineFlagForAllClients();
  g_svSnapshotData.baselineCreated = 0;
  SV_SnapshotMP_ResetServerSnapshots();
}


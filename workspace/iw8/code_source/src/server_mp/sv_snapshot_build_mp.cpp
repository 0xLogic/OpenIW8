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
  unsigned int v17; 
  unsigned int v18; 
  __int64 v19; 
  __int64 v20; 
  bool v21; 
  SvDemo *v37; 
  __int64 v38; 
  __int64 v39; 

  v5 = client;
  if ( !client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_build_mp.cpp", 1300, ASSERT_TYPE_ASSERT, "( client )", (const char *)&queryFormat, "client") )
    __debugbreak();
  if ( currentTime < snapInfo->serverTime )
  {
    LODWORD(v38) = currentTime;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_build_mp.cpp", 1302, ASSERT_TYPE_ASSERT, "( currentTime ) >= ( snapInfo->serverTime )", "currentTime >= snapInfo->serverTime\n\t%i, %i", v38, snapInfo->serverTime) )
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
    LODWORD(v39) = 200;
    LODWORD(v38) = SvClient::ms_clientCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_build_mp.cpp", 993, ASSERT_TYPE_ASSERT, "( SvClient::GetClientCount() ) <= ( ( sizeof( *array_counter( frame->scores.clientScores ) ) + 0 ) )", "SvClient::GetClientCount() <= ARRAY_COUNT( frame->scores.clientScores )\n\t%i, %i", v38, v39) )
      __debugbreak();
    v9 = SvClient::ms_clientCount;
  }
  v10 = 0;
  v11 = 0;
  if ( v9 > 0 )
  {
    _R8 = 0i64;
    _RCX = &SnapshotForSequence->scores.clientScores[0].adrenaline;
    do
    {
      _RAX = level.clients;
      __asm
      {
        vmovups xmm0, xmmword ptr [r8+rax+57CCh]
        vmovups xmmword ptr [rcx-16h], xmm0
        vmovsd  xmm1, qword ptr [r8+rax+57DCh]
        vmovsd  qword ptr [rcx-6], xmm1
      }
      _RCX[1] = _RAX[_R8].sess.scores.deathTimerLength;
      if ( !level.clients[MpClientIndex].sess.cs.isMLGSpectator )
        *(_DWORD *)_RCX = 0;
      ++v11;
      ++_R8;
      _RCX += 13;
    }
    while ( v11 < (int)SvClient::ms_clientCount );
  }
  SV_BuildClientSnapshot_PopulateOmnvars(SnapshotForSequence, MpClientIndex);
  SV_StreamSync_PopulateClientSnapshot(MpClientIndex, &SnapshotForSequence->streamSync);
  if ( level.clients[MpClientIndex].sess.cs.isMLGSpectator )
  {
    v17 = SvClient::ms_clientCount;
    if ( ((unsigned __int8)&g_svSnapshotData.nextSnapshotMLGSpectatorInfo & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 79, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &g_svSnapshotData.nextSnapshotMLGSpectatorInfo) )
      __debugbreak();
    SnapshotForSequence->mlgSpectatorInfoIndex = _InterlockedExchangeAdd(&g_svSnapshotData.nextSnapshotMLGSpectatorInfo, v17);
    v18 = SvClient::ms_clientCount;
    if ( (int)SvClient::ms_clientCount > 0 )
    {
      v19 = 0i64;
      do
      {
        v20 = (v10 + SnapshotForSequence->mlgSpectatorInfoIndex) % g_svSnapshotData.numSnapshotMLGSpectatorInfo;
        v21 = &g_svSnapshotData.mlgSpectatorClientInfo[v20] == NULL;
        _RBX = &g_svSnapshotData.mlgSpectatorClientInfo[v20];
        _RSI = &level.clients[v19].mlgSpectatorClientInfo;
        if ( v21 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_build_mp.cpp", 1082, ASSERT_TYPE_ASSERT, "( mlgSpectatorClientInfo )", (const char *)&queryFormat, "mlgSpectatorClientInfo") )
          __debugbreak();
        __asm
        {
          vmovups xmm0, xmmword ptr [rsi]
          vmovups xmmword ptr [rbx], xmm0
          vmovups xmm1, xmmword ptr [rsi+10h]
          vmovups xmmword ptr [rbx+10h], xmm1
          vmovups xmm0, xmmword ptr [rsi+20h]
          vmovups xmmword ptr [rbx+20h], xmm0
          vmovups xmm1, xmmword ptr [rsi+30h]
          vmovups xmmword ptr [rbx+30h], xmm1
          vmovups xmm0, xmmword ptr [rsi+40h]
          vmovups xmmword ptr [rbx+40h], xmm0
          vmovups xmm1, xmmword ptr [rsi+50h]
          vmovups xmmword ptr [rbx+50h], xmm1
          vmovups xmm0, xmmword ptr [rsi+60h]
          vmovups xmmword ptr [rbx+60h], xmm0
          vmovups xmm1, xmmword ptr [rsi+70h]
          vmovups xmmword ptr [rbx+70h], xmm1
          vmovups xmm0, xmmword ptr [rsi+80h]
          vmovups xmmword ptr [rbx+80h], xmm0
          vmovups xmm1, xmmword ptr [rsi+90h]
          vmovups xmmword ptr [rbx+90h], xmm1
          vmovups xmm0, xmmword ptr [rsi+0A0h]
          vmovups xmmword ptr [rbx+0A0h], xmm0
          vmovups xmm1, xmmword ptr [rsi+0B0h]
          vmovups xmmword ptr [rbx+0B0h], xmm1
          vmovups xmm0, xmmword ptr [rsi+0C0h]
          vmovups xmmword ptr [rbx+0C0h], xmm0
        }
        ++v10;
        *(_QWORD *)&_RBX->clientFoV = *(_QWORD *)&_RSI->clientFoV;
        ++v19;
        v18 = SvClient::ms_clientCount;
      }
      while ( v10 < (int)SvClient::ms_clientCount );
      v5 = client;
    }
    SnapshotForSequence->mlgSpectatorInfoCount = v18;
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
    v37 = SvDemo::ms_gServerDemoSystem;
    memcpy_0(&SvDemo::ms_gServerDemoSystem[906179], SnapshotForSequence, 0x6C78ui64);
    SV_BuildClientSnapshot_AssignBaselineIndices((clientSnapshot_t *const)&v37[906179]);
    v21 = BYTE4(v37[909647].__vftable) == 0;
    LODWORD(v37[909650].__vftable) = MpClientIndex;
    if ( v21 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_build_mp.cpp", 1290, ASSERT_TYPE_ASSERT, "( svDemoMp->m_baselineFrame.baselineSnap )", (const char *)&queryFormat, "svDemoMp->m_baselineFrame.baselineSnap") )
      __debugbreak();
    if ( LOBYTE(v37[909618].__vftable) )
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
  __int64 v14; 

  v4 = clientIndex;
  _RDI = outNextSnap;
  _RBX = (serverSnapshot_t *)serverSnap;
  if ( !serverSnap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_build_mp.cpp", 1346, ASSERT_TYPE_ASSERT, "( serverSnap )", (const char *)&queryFormat, "serverSnap") )
    __debugbreak();
  if ( !_RDI && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_build_mp.cpp", 1347, ASSERT_TYPE_ASSERT, "( outNextSnap )", (const char *)&queryFormat, "outNextSnap") )
    __debugbreak();
  if ( (!_RBX || !SvSnapshotEntries::HasValidEntries(&_RBX->entries, 0)) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_build_mp.cpp", 1348, ASSERT_TYPE_ASSERT, "( !SV_BuildClientSnapshot_IsInvalidFrame( serverSnap ) )", (const char *)&queryFormat, "!SV_BuildClientSnapshot_IsInvalidFrame( serverSnap )") )
    __debugbreak();
  v8 = &g_svSnapshotData.clientMsgRequest[v4];
  if ( (_DWORD)v4 != v8->clientIndex )
  {
    LODWORD(v14) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_build_mp.cpp", 1351, ASSERT_TYPE_ASSERT, "( clientIndex ) == ( static_cast<int>(buildRequest->clientIndex) )", "clientIndex == static_cast<int>(buildRequest->clientIndex)\n\t%i, %i", v14, v8->clientIndex) )
      __debugbreak();
  }
  _RDI->serverEntries.m_storageType = _RBX->entries.m_storageType;
  __asm
  {
    vmovups ymm0, ymmword ptr [rbx+8]
    vmovups ymmword ptr [rdi+6B80h], ymm0
    vmovups ymm1, ymmword ptr [rbx+28h]
    vmovups ymmword ptr [rdi+6BA0h], ymm1
    vmovups xmm0, xmmword ptr [rbx+48h]
    vmovups xmmword ptr [rdi+6BC0h], xmm0
    vmovups ymm0, ymmword ptr [rbx+58h]
    vmovups ymmword ptr [rdi+6BD0h], ymm0
    vmovsd  xmm1, qword ptr [rbx+78h]
    vmovsd  qword ptr [rdi+6BF0h], xmm1
  }
  if ( v8->hasAckedBaselineData )
  {
    _RDI->baselineSnap = 0;
    if ( _RBX->entries.m_first[0] == -10000000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_build_mp.cpp", 1361, ASSERT_TYPE_ASSERT, "( serverSnap->entries.GetFirst( SvSnapshotBufferType::ENTITIES ) != NODELTA_ENTINDEX_OFFSET )", (const char *)&queryFormat, "serverSnap->entries.GetFirst( SvSnapshotBufferType::ENTITIES ) != NODELTA_ENTINDEX_OFFSET") )
      __debugbreak();
    if ( _RBX->entries.m_first[8] == 0x7FFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_build_mp.cpp", 1362, ASSERT_TYPE_ASSERT, "( serverSnap->entries.GetFirst( SvSnapshotBufferType::WEAPONS ) != 0x7FFFFFFF )", (const char *)&queryFormat, "serverSnap->entries.GetFirst( SvSnapshotBufferType::WEAPONS ) != WEAPON_SNAPSHOT_NODELTA") )
      __debugbreak();
    if ( _RBX->entries.m_first[6] == 0x7FFFFFFFFFFFFFFFi64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_build_mp.cpp", 1363, ASSERT_TYPE_ASSERT, "( serverSnap->entries.GetFirst( SvSnapshotBufferType::SCRIPTABLE_INSTANCES ) != SCRIPTABLE_SNAPSHOT_NODELTA_INDEX )", (const char *)&queryFormat, "serverSnap->entries.GetFirst( SvSnapshotBufferType::SCRIPTABLE_INSTANCES ) != SCRIPTABLE_SNAPSHOT_NODELTA_INDEX") )
      __debugbreak();
    if ( _RBX->entries.m_first[7] == 0x7FFFFFFFFFFFFFFFi64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_build_mp.cpp", 1364, ASSERT_TYPE_ASSERT, "( serverSnap->entries.GetFirst( SvSnapshotBufferType::SCRIPTABLE_PARTS ) != SCRIPTABLE_SNAPSHOT_NODELTA_INDEX )", (const char *)&queryFormat, "serverSnap->entries.GetFirst( SvSnapshotBufferType::SCRIPTABLE_PARTS ) != SCRIPTABLE_SNAPSHOT_NODELTA_INDEX") )
      __debugbreak();
    if ( _RBX->entries.m_first[9] == 0x7FFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_build_mp.cpp", 1367, ASSERT_TYPE_ASSERT, "( serverSnap->entries.GetFirst( SvSnapshotBufferType::UMBRA_GATES ) != 0x7FFFFFFF )", (const char *)&queryFormat, "serverSnap->entries.GetFirst( SvSnapshotBufferType::UMBRA_GATES ) != UMBRA_GATES_NODELTA_INDEX") )
      __debugbreak();
  }
  else
  {
    if ( snapInfo->storageType )
    {
      LODWORD(v14) = (unsigned __int8)snapInfo->storageType;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_build_mp.cpp", 1372, ASSERT_TYPE_ASSERT, "( snapInfo->storageType ) == ( SvSnapshotStorageType::FULL )", "snapInfo->storageType == SvSnapshotStorageType::FULL\n\t%i, %i", v14, 0i64) )
        __debugbreak();
    }
    SV_BuildClientSnapshot_AssignBaselineIndices(_RDI);
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
  unsigned __int8 *v34; 
  unsigned __int8 *v35; 
  __int64 v36; 
  __int64 v37; 
  unsigned int Size; 

  _R14 = ent;
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
    LODWORD(v36) = g_svSnapshotData.nextNoDeltaEntity;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_build_mp.cpp", 86, ASSERT_TYPE_ASSERT, "( g_svSnapshotData.nextNoDeltaEntity ) == ( g_svSnapshotData.nextNoDeltaEntityClientMask )", "g_svSnapshotData.nextNoDeltaEntity == g_svSnapshotData.nextNoDeltaEntityClientMask\n\t%i, %i", v36, g_svSnapshotData.nextNoDeltaEntityClientMask) )
      __debugbreak();
    nextNoDeltaEntity = g_svSnapshotData.nextNoDeltaEntity;
  }
  v11 = *lastNoDeltaEntNum;
  if ( (int)v11 < nextNoDeltaEntity )
  {
    v12 = &g_svSnapshotData.noDeltaEntities[v11];
    while ( v12->number != _R14->number )
    {
      LODWORD(v11) = v11 + 1;
      ++v12;
      if ( (int)v11 >= nextNoDeltaEntity )
        goto LABEL_28;
    }
    if ( !memcmp_0(&g_svSnapshotData.noDeltaEntities[(int)v11], _R14, 0xF8ui64) )
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
      LODWORD(v37) = g_svSnapshotData.nextNoDeltaEntityClientMask;
      LODWORD(v36) = g_svSnapshotData.nextNoDeltaEntity;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_build_mp.cpp", 138, ASSERT_TYPE_ASSERT, "( g_svSnapshotData.nextNoDeltaEntity ) == ( g_svSnapshotData.nextNoDeltaEntityClientMask )", "g_svSnapshotData.nextNoDeltaEntity == g_svSnapshotData.nextNoDeltaEntityClientMask\n\t%i, %i", v36, v37) )
        __debugbreak();
      v15 = g_svSnapshotData.nextNoDeltaEntity;
    }
    if ( *lastNoDeltaEntNum >= v15 )
    {
      LODWORD(v37) = v15;
      LODWORD(v36) = *lastNoDeltaEntNum;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_build_mp.cpp", 139, ASSERT_TYPE_ASSERT, "(unsigned)( *lastNoDeltaEntNum ) < (unsigned)( g_svSnapshotData.nextNoDeltaEntity )", "*lastNoDeltaEntNum doesn't index g_svSnapshotData.nextNoDeltaEntity\n\t%i not in [0, %i)", v36, v37) )
        __debugbreak();
    }
    number = g_svSnapshotData.noDeltaEntities[*lastNoDeltaEntNum].number;
    if ( number != _R14->number )
    {
      LODWORD(v37) = _R14->number;
      LODWORD(v36) = number;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_build_mp.cpp", 140, ASSERT_TYPE_ASSERT, "( g_svSnapshotData.noDeltaEntities[*lastNoDeltaEntNum].number ) == ( ent->number )", "g_svSnapshotData.noDeltaEntities[*lastNoDeltaEntNum].number == ent->number\n\t%i, %i", v36, v37) )
        __debugbreak();
    }
    *(_WORD *)v14 = truncate_cast<unsigned short,int>(*lastNoDeltaEntNum + 2048);
  }
  else
  {
    if ( *snapFullEntityCount >= 2048 )
    {
      LODWORD(v37) = 2048;
      LODWORD(v36) = *snapFullEntityCount;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_build_mp.cpp", 145, ASSERT_TYPE_ASSERT, "( *snapFullEntityCount ) < ( (( 2048 )) )", "*snapFullEntityCount < SNAPSHOT_ENTITY_UNCHANGED_OFFSET\n\t%i, %i", v36, v37) )
        __debugbreak();
    }
    *(_WORD *)v14 = truncate_cast<unsigned short,int>(*snapFullEntityCount);
    ++*snapFullEntityCount;
    v17 = SvSnapshotFrameBuffers::GetBufferEntryAtIndex(snapBuffer, DODGE, snapBuffer->m_nextBufferIndex[1]);
    ++snapBuffer->m_nextBufferIndex[1];
    _RBX = v17;
    if ( snapBuffer->m_nextBufferIndex[1] >= 0x7FFFFFFFFFFFFFFEi64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp_types.h", 302, ASSERT_TYPE_ASSERT, "(m_nextBufferIndex[typeIndex] < MAX_SV_SNAPSHOT_ENTRY_INDEX)", "%s\n\tThis should never hit, map should always be restarted first in SV_MainMP_Frame", "m_nextBufferIndex[typeIndex] < MAX_SV_SNAPSHOT_ENTRY_INDEX") )
      __debugbreak();
    __asm
    {
      vmovups xmm0, xmmword ptr [r14]
      vmovups xmmword ptr [rbx], xmm0
      vmovups xmm1, xmmword ptr [r14+10h]
      vmovups xmmword ptr [rbx+10h], xmm1
      vmovups xmm0, xmmword ptr [r14+20h]
      vmovups xmmword ptr [rbx+20h], xmm0
      vmovups xmm1, xmmword ptr [r14+30h]
      vmovups xmmword ptr [rbx+30h], xmm1
      vmovups xmm0, xmmword ptr [r14+40h]
      vmovups xmmword ptr [rbx+40h], xmm0
      vmovups xmm1, xmmword ptr [r14+50h]
      vmovups xmmword ptr [rbx+50h], xmm1
      vmovups xmm0, xmmword ptr [r14+60h]
      vmovups xmmword ptr [rbx+60h], xmm0
      vmovups xmm1, xmmword ptr [r14+70h]
      vmovups xmmword ptr [rbx+70h], xmm1
      vmovups xmm0, xmmword ptr [r14+80h]
      vmovups xmmword ptr [rbx+80h], xmm0
      vmovups xmm1, xmmword ptr [r14+90h]
      vmovups xmmword ptr [rbx+90h], xmm1
      vmovups xmm0, xmmword ptr [r14+0A0h]
      vmovups xmmword ptr [rbx+0A0h], xmm0
      vmovups xmm1, xmmword ptr [r14+0B0h]
      vmovups xmmword ptr [rbx+0B0h], xmm1
      vmovups xmm0, xmmword ptr [r14+0C0h]
      vmovups xmmword ptr [rbx+0C0h], xmm0
      vmovups xmm1, xmmword ptr [r14+0D0h]
      vmovups xmmword ptr [rbx+0D0h], xmm1
      vmovups xmm0, xmmword ptr [r14+0E0h]
      vmovups xmmword ptr [rbx+0E0h], xmm0
    }
    *((_QWORD *)_RBX + 30) = *(_QWORD *)&_R14->partBits.array[6];
    v34 = SvSnapshotFrameBuffers::GetBufferEntryAtIndex(snapBuffer, COUNT, snapBuffer->m_nextBufferIndex[2]);
    ++snapBuffer->m_nextBufferIndex[2];
    v35 = v34;
    if ( snapBuffer->m_nextBufferIndex[2] >= 0x7FFFFFFFFFFFFFFEi64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp_types.h", 302, ASSERT_TYPE_ASSERT, "(m_nextBufferIndex[typeIndex] < MAX_SV_SNAPSHOT_ENTRY_INDEX)", "%s\n\tThis should never hit, map should always be restarted first in SV_MainMP_Frame", "m_nextBufferIndex[typeIndex] < MAX_SV_SNAPSHOT_ENTRY_INDEX") )
      __debugbreak();
    memcpy_0(v35, clientMask, g_svSnapshotData.clientMaskSize);
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
  unsigned __int8 *BufferEntryAtIndex; 
  __int64 v29; 
  int v39; 
  unsigned int v57; 
  int v58; 
  unsigned __int8 *v60; 
  __int64 v62; 
  unsigned int scriptableInstCount; 
  size_t scriptablePartCount; 
  ScriptableReplicatedInstance *v73; 
  ScriptablePartData *v74; 
  unsigned __int8 *NextBufferEntryArray; 
  unsigned __int8 *v76; 
  cachedSnapshotWeaponMap_t *v82; 
  char *fmt; 
  __int64 firstEntClientMaskIndex; 
  __int64 firstEntClientMaskIndexa; 
  __int64 v92; 
  __int64 v93; 
  int pArchiveTime; 
  cachedSnapshotWorldState_t *outCachedWorldState; 
  int v96; 
  serverSnapshot_t *v97; 
  cachedSnapshotWeaponMap_t *outCachedWeaponMap[2]; 
  int v99[250]; 

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
    LODWORD(v92) = 3;
    LODWORD(firstEntClientMaskIndex) = v8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\profile.h", 97, ASSERT_TYPE_ASSERT, "(unsigned)( p->write.nesting ) < (unsigned)( ( sizeof( *array_counter( p->write.start ) ) + 0 ) )", "p->write.nesting doesn't index ARRAY_COUNT( p->write.start )\n\t%i not in [0, %i)", firstEntClientMaskIndex, v92) )
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
  v96 = pArchiveTime;
  if ( !SV_SnapshotMP_GetCachedSnapshotWeaponMap(archiveUsePOTG, &v96, outCachedWeaponMap) )
  {
    Com_PrintWarning(16, "Failed to get cached weapon map for time %i, we asked for offset %i\n", (unsigned int)(currentTime - buildInfo->serverTime));
    goto LABEL_31;
  }
  v15 = pArchiveTime;
  if ( v96 != pArchiveTime )
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
  v97 = v19;
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
  memset_0(v99, 0, 0x3E0ui64);
  v24 = 0;
  v25 = outCachedWorldState;
  if ( outCachedWorldState->num_clientStates > 0 )
  {
    do
    {
      _RBX = &g_svSnapshotData.cachedSnapshotClientStates[(__int64)((v24 + v25->first_clientState) % g_svSnapshotData.numCachedSnapshotClientStates)];
      BufferEntryAtIndex = SvSnapshotFrameBuffers::GetBufferEntryAtIndex(StorageBuffer, (const SvSnapshotBufferType)4, StorageBuffer->m_nextBufferIndex[4]);
      if ( ++StorageBuffer->m_nextBufferIndex[4] >= 0x7FFFFFFFFFFFFFFEi64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp_types.h", 302, ASSERT_TYPE_ASSERT, "(m_nextBufferIndex[typeIndex] < MAX_SV_SNAPSHOT_ENTRY_INDEX)", "%s\n\tThis should never hit, map should always be restarted first in SV_MainMP_Frame", "m_nextBufferIndex[typeIndex] < MAX_SV_SNAPSHOT_ENTRY_INDEX") )
        __debugbreak();
      _RCX = BufferEntryAtIndex;
      v29 = 3i64;
      do
      {
        __asm
        {
          vmovups xmm0, xmmword ptr [rbx]
          vmovups xmmword ptr [rcx], xmm0
          vmovups xmm1, xmmword ptr [rbx+10h]
          vmovups xmmword ptr [rcx+10h], xmm1
          vmovups xmm0, xmmword ptr [rbx+20h]
          vmovups xmmword ptr [rcx+20h], xmm0
          vmovups xmm1, xmmword ptr [rbx+30h]
          vmovups xmmword ptr [rcx+30h], xmm1
          vmovups xmm0, xmmword ptr [rbx+40h]
          vmovups xmmword ptr [rcx+40h], xmm0
          vmovups xmm1, xmmword ptr [rbx+50h]
          vmovups xmmword ptr [rcx+50h], xmm1
          vmovups xmm0, xmmword ptr [rbx+60h]
          vmovups xmmword ptr [rcx+60h], xmm0
        }
        _RCX += 128;
        __asm
        {
          vmovups xmm1, xmmword ptr [rbx+70h]
          vmovups xmmword ptr [rcx-10h], xmm1
        }
        _RBX = (cachedClientState_t *)((char *)_RBX + 128);
        --v29;
      }
      while ( v29 );
      __asm
      {
        vmovups xmm0, xmmword ptr [rbx]
        vmovups xmmword ptr [rcx], xmm0
      }
      *((_QWORD *)_RCX + 2) = *(_QWORD *)&_RBX->cs.doNotSimulateTracers;
      if ( *(_DWORD *)BufferEntryAtIndex >= 0xF8u )
      {
        LODWORD(v92) = 248;
        LODWORD(firstEntClientMaskIndexa) = *(_DWORD *)BufferEntryAtIndex;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_build_mp.cpp", 889, ASSERT_TYPE_ASSERT, "(unsigned)( clientState->clientIndex ) < (unsigned)( ( sizeof( *array_counter( characterIndex ) ) + 0 ) )", "clientState->clientIndex doesn't index ARRAY_COUNT( characterIndex )\n\t%i not in [0, %i)", firstEntClientMaskIndexa, v92) )
          __debugbreak();
      }
      if ( v99[*(int *)BufferEntryAtIndex] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_build_mp.cpp", 890, ASSERT_TYPE_ASSERT, "( !characterIndex[clientState->clientIndex] )", (const char *)&queryFormat, "!characterIndex[clientState->clientIndex]") )
        __debugbreak();
      v99[*(int *)BufferEntryAtIndex] = 1;
      ++v24;
      v25 = outCachedWorldState;
    }
    while ( v24 < outCachedWorldState->num_clientStates );
    v19 = v97;
  }
  v19->entries.m_count[4] = v25->num_clientStates;
  v39 = 0;
  if ( v25->num_agents > 0 )
  {
    do
    {
      _RBX = &g_svSnapshotData.cachedSnapshotAgents[(__int64)((v39 + v25->first_agent) % g_svSnapshotData.numCachedSnapshotAgents)];
      _RDI = SvSnapshotFrameBuffers::GetBufferEntryAtIndex(StorageBuffer, (const SvSnapshotBufferType)5, StorageBuffer->m_nextBufferIndex[5]);
      if ( ++StorageBuffer->m_nextBufferIndex[5] >= 0x7FFFFFFFFFFFFFFEi64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp_types.h", 302, ASSERT_TYPE_ASSERT, "(m_nextBufferIndex[typeIndex] < MAX_SV_SNAPSHOT_ENTRY_INDEX)", "%s\n\tThis should never hit, map should always be restarted first in SV_MainMP_Frame", "m_nextBufferIndex[typeIndex] < MAX_SV_SNAPSHOT_ENTRY_INDEX") )
        __debugbreak();
      __asm
      {
        vmovups xmm0, xmmword ptr [rbx]
        vmovups xmmword ptr [rdi], xmm0
        vmovups xmm1, xmmword ptr [rbx+10h]
        vmovups xmmword ptr [rdi+10h], xmm1
        vmovups xmm0, xmmword ptr [rbx+20h]
        vmovups xmmword ptr [rdi+20h], xmm0
        vmovups xmm1, xmmword ptr [rbx+30h]
        vmovups xmmword ptr [rdi+30h], xmm1
        vmovups xmm0, xmmword ptr [rbx+40h]
        vmovups xmmword ptr [rdi+40h], xmm0
        vmovups xmm1, xmmword ptr [rbx+50h]
        vmovups xmmword ptr [rdi+50h], xmm1
        vmovups xmm0, xmmword ptr [rbx+60h]
        vmovups xmmword ptr [rdi+60h], xmm0
        vmovups xmm1, xmmword ptr [rbx+70h]
        vmovups xmmword ptr [rdi+70h], xmm1
        vmovups xmm0, xmmword ptr [rbx+80h]
        vmovups xmmword ptr [rdi+80h], xmm0
        vmovups xmm1, xmmword ptr [rbx+90h]
        vmovups xmmword ptr [rdi+90h], xmm1
        vmovups xmm0, xmmword ptr [rbx+0A0h]
        vmovups xmmword ptr [rdi+0A0h], xmm0
        vmovups xmm1, xmmword ptr [rbx+0B0h]
        vmovups xmmword ptr [rdi+0B0h], xmm1
        vmovups xmm0, xmmword ptr [rbx+0C0h]
        vmovups xmmword ptr [rdi+0C0h], xmm0
        vmovups xmm1, xmmword ptr [rbx+0D0h]
        vmovups xmmword ptr [rdi+0D0h], xmm1
        vmovups xmm0, xmmword ptr [rbx+0E0h]
        vmovups xmmword ptr [rdi+0E0h], xmm0
      }
      *((_QWORD *)_RDI + 30) = *(_QWORD *)&_RBX->agentState.serverDobjHeldWeapon.m_mapEntryId;
      *((_DWORD *)_RDI + 62) = *(_DWORD *)&_RBX->agentState.serverDobjHideWeapon;
      if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 168, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
        __debugbreak();
      if ( (int)ComCharacterLimits::ms_gameData.m_clientCount > *(__int16 *)_RDI )
        goto LABEL_126;
      if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
        __debugbreak();
      if ( *(__int16 *)_RDI > (signed int)(ComCharacterLimits::ms_gameData.m_characterCount - 1) )
      {
LABEL_126:
        if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 123, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
          __debugbreak();
        v57 = ComCharacterLimits::ms_gameData.m_characterCount - 1;
        if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 168, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
          __debugbreak();
        LODWORD(v93) = v57;
        LODWORD(v92) = ComCharacterLimits::ms_gameData.m_clientCount;
        LODWORD(firstEntClientMaskIndexa) = *(__int16 *)_RDI;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_build_mp.cpp", 904, ASSERT_TYPE_ASSERT, "( ComCharacterLimits::GetAgentEntityIndexOffset() ) <= ( agentState->entityNum ) && ( agentState->entityNum ) <= ( ComCharacterLimits::GetCharacterMaxCount() - 1 )", "agentState->entityNum not in [ComCharacterLimits::GetAgentEntityIndexOffset(), ComCharacterLimits::GetCharacterMaxCount() - 1]\n\t%i not in [%i, %i]", firstEntClientMaskIndexa, v92, v93) )
          __debugbreak();
      }
      if ( v99[*(__int16 *)_RDI] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_build_mp.cpp", 905, ASSERT_TYPE_ASSERT, "( !characterIndex[agentState->entityNum] )", (const char *)&queryFormat, "!characterIndex[agentState->entityNum]") )
        __debugbreak();
      v99[*(__int16 *)_RDI] = 1;
      ++v39;
      v25 = outCachedWorldState;
    }
    while ( v39 < outCachedWorldState->num_agents );
    v19 = v97;
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
    v58 = 0;
    if ( v25->num_entityLoD > 0 )
    {
      do
      {
        _RBX = &g_svSnapshotData.cachedSnapshotEntityLoD[(v58 + v25->first_entityLoD) % g_svSnapshotData.numCachedSnapshotEntityLoD];
        v60 = SvSnapshotFrameBuffers::GetBufferEntryAtIndex(StorageBuffer, COUNT|DODGE, StorageBuffer->m_nextBufferIndex[3]);
        if ( ++StorageBuffer->m_nextBufferIndex[3] >= 0x7FFFFFFFFFFFFFFEi64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp_types.h", 302, ASSERT_TYPE_ASSERT, "(m_nextBufferIndex[typeIndex] < MAX_SV_SNAPSHOT_ENTRY_INDEX)", "%s\n\tThis should never hit, map should always be restarted first in SV_MainMP_Frame", "m_nextBufferIndex[typeIndex] < MAX_SV_SNAPSHOT_ENTRY_INDEX") )
          __debugbreak();
        _RCX = v60;
        v62 = 2i64;
        do
        {
          __asm
          {
            vmovups xmm0, xmmword ptr [rbx]
            vmovups xmmword ptr [rcx], xmm0
            vmovups xmm1, xmmword ptr [rbx+10h]
            vmovups xmmword ptr [rcx+10h], xmm1
            vmovups xmm0, xmmword ptr [rbx+20h]
            vmovups xmmword ptr [rcx+20h], xmm0
            vmovups xmm1, xmmword ptr [rbx+30h]
            vmovups xmmword ptr [rcx+30h], xmm1
            vmovups xmm0, xmmword ptr [rbx+40h]
            vmovups xmmword ptr [rcx+40h], xmm0
            vmovups xmm1, xmmword ptr [rbx+50h]
            vmovups xmmword ptr [rcx+50h], xmm1
            vmovups xmm0, xmmword ptr [rbx+60h]
            vmovups xmmword ptr [rcx+60h], xmm0
          }
          _RCX += 32;
          __asm
          {
            vmovups xmm1, xmmword ptr [rbx+70h]
            vmovups xmmword ptr [rcx-10h], xmm1
          }
          _RBX = (cachedEntityLoD_t *)((char *)_RBX + 128);
          --v62;
        }
        while ( v62 );
        *_RCX = _RBX->lodInfo.clientIndex;
        if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 109, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
          __debugbreak();
        if ( *(_DWORD *)v60 >= ComCharacterLimits::ms_gameData.m_clientCount )
        {
          if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 109, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
            __debugbreak();
          LODWORD(v92) = ComCharacterLimits::ms_gameData.m_clientCount;
          LODWORD(firstEntClientMaskIndexa) = *(_DWORD *)v60;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_build_mp.cpp", 922, ASSERT_TYPE_ASSERT, "(unsigned)( lodInfo->clientIndex ) < (unsigned)( ComCharacterLimits::GetClientMaxCount() )", "lodInfo->clientIndex doesn't index ComCharacterLimits::GetClientMaxCount()\n\t%i not in [0, %i)", firstEntClientMaskIndexa, v92) )
            __debugbreak();
        }
        ++v58;
        v25 = outCachedWorldState;
      }
      while ( v58 < outCachedWorldState->num_entityLoD );
      v19 = v97;
    }
    v19->entries.m_count[3] = v25->num_entityLoD;
  }
  scriptableInstCount = v25->scriptableInstCount;
  scriptablePartCount = v25->scriptablePartCount;
  v73 = &g_svSnapshotData.scriptableSnapshots.cachedInstances[(unsigned int)(v25->scriptableInstFirstIndex % g_svSnapshotData.scriptableSnapshots.cachedInstCount)];
  v74 = &g_svSnapshotData.scriptableSnapshots.cachedParts[(unsigned int)(v25->scriptablePartFirstIndex % g_svSnapshotData.scriptableSnapshots.cachedPartCount)];
  if ( scriptableInstCount )
  {
    v19->entries.m_first[6] = SvSnapshotFrameBuffers::EnsureContiguousArray(StorageBuffer, (const SvSnapshotBufferType)6, scriptableInstCount);
    NextBufferEntryArray = SvSnapshotFrameBuffers::AllocateNextBufferEntryArray(StorageBuffer, (const SvSnapshotBufferType)6, scriptableInstCount);
    memcpy_0(NextBufferEntryArray, v73, 32i64 * scriptableInstCount);
  }
  if ( (_DWORD)scriptablePartCount )
  {
    v19->entries.m_first[7] = SvSnapshotFrameBuffers::EnsureContiguousArray(StorageBuffer, COUNT|DODGE|0x4, scriptablePartCount);
    v76 = SvSnapshotFrameBuffers::AllocateNextBufferEntryArray(StorageBuffer, COUNT|DODGE|0x4, scriptablePartCount);
    memcpy_0(v76, v74, scriptablePartCount);
  }
  v19->entries.m_count[6] = scriptableInstCount;
  v19->entries.m_count[7] = scriptablePartCount;
  _RBX = SvSnapshotFrameBuffers::GetBufferEntryAtIndex(StorageBuffer, (const SvSnapshotBufferType)9, StorageBuffer->m_nextBufferIndex[9]);
  if ( ++StorageBuffer->m_nextBufferIndex[9] >= 0x7FFFFFFFFFFFFFFEi64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp_types.h", 302, ASSERT_TYPE_ASSERT, "(m_nextBufferIndex[typeIndex] < MAX_SV_SNAPSHOT_ENTRY_INDEX)", "%s\n\tThis should never hit, map should always be restarted first in SV_MainMP_Frame", "m_nextBufferIndex[typeIndex] < MAX_SV_SNAPSHOT_ENTRY_INDEX") )
    __debugbreak();
  _RCX = 6i64 * (outCachedWorldState->umbraGateStatesIndex % g_svSnapshotData.numCachedSnapshotUmbraGateStates);
  _RAX = g_svSnapshotData.cachedSnapshotUmbraGateStates;
  __asm
  {
    vmovups ymm0, ymmword ptr [rax+rcx*8]
    vmovups ymmword ptr [rbx], ymm0
    vmovups xmm1, xmmword ptr [rax+rcx*8+20h]
    vmovups xmmword ptr [rbx+20h], xmm1
  }
  v19->entries.m_count[9] = 1;
  v82 = outCachedWeaponMap[0];
  if ( outCachedWeaponMap[0]->num_weapons > 0 )
  {
    do
    {
      _RBX = &g_svSnapshotData.cachedSnapshotWeapons[(v21 + v82->first_weapon) % g_svSnapshotData.numCachedSnapshotWeapons];
      _RDI = SvSnapshotFrameBuffers::GetBufferEntryAtIndex(StorageBuffer, (const SvSnapshotBufferType)8, StorageBuffer->m_nextBufferIndex[8]);
      if ( ++StorageBuffer->m_nextBufferIndex[8] >= 0x7FFFFFFFFFFFFFFEi64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp_types.h", 302, ASSERT_TYPE_ASSERT, "(m_nextBufferIndex[typeIndex] < MAX_SV_SNAPSHOT_ENTRY_INDEX)", "%s\n\tThis should never hit, map should always be restarted first in SV_MainMP_Frame", "m_nextBufferIndex[typeIndex] < MAX_SV_SNAPSHOT_ENTRY_INDEX") )
        __debugbreak();
      __asm
      {
        vmovups ymm0, ymmword ptr [rbx]
        vmovups ymmword ptr [rdi], ymm0
        vmovups xmm1, xmmword ptr [rbx+20h]
        vmovups xmmword ptr [rdi+20h], xmm1
        vmovsd  xmm0, qword ptr [rbx+30h]
        vmovsd  qword ptr [rdi+30h], xmm0
      }
      *((_DWORD *)_RDI + 14) = *(_DWORD *)&_RBX->weapon.attachmentVariationIndices[27];
      *((_WORD *)_RDI + 30) = *(_WORD *)&_RBX->weapon.scopeVariation;
      ++v21;
      v82 = outCachedWeaponMap[0];
    }
    while ( v21 < outCachedWeaponMap[0]->num_weapons );
    v19 = v97;
  }
  v19->entries.m_count[8] = v82->num_weapons;
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
  __int64 v18; 
  unsigned int v28; 
  SvPersistentGlobalsMP *PersistentGlobalsMP; 
  int v30; 
  unsigned __int8 *v31; 
  int v49; 
  unsigned int v50; 
  bool v51; 
  int *v52; 
  unsigned int v53; 
  signed int v54; 
  unsigned __int8 *v55; 
  unsigned __int8 *v56; 
  GWeaponMap *Instance; 
  int v58; 
  unsigned __int16 i; 
  unsigned __int8 *v60; 
  unsigned int ReplicatedInstanceLimit; 
  const ScriptableReplicatedInstance *ReplicatedInstances; 
  unsigned __int8 *NextBufferEntryArray; 
  unsigned int TotalReplicatedPartsLimit; 
  const ScriptablePartWorldState *PartWorldState; 
  ScriptablePartData *v70; 
  const ScriptableReplicatedLimits *ReplicatedLimits; 
  unsigned __int8 *v72; 
  __int64 v76; 
  __int64 v77; 
  __int64 v78; 
  __int64 v79; 
  WeaponMapEntry outWeaponMapEntry; 
  int v81[48]; 
  int v82[200]; 

  memset_0(v82, 0, sizeof(v82));
  memset_0(v81, 0, sizeof(v81));
  Sys_ProfBeginNamedEvent(0xFF0000FF, "SV_BuildServerSnapshot_SaveSnapshotForTime");
  if ( !buildInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_build_mp.cpp", 582, ASSERT_TYPE_ASSERT, "( buildInfo )", (const char *)&queryFormat, "buildInfo") )
    __debugbreak();
  if ( currentTime != buildInfo->serverTime )
  {
    LODWORD(v76) = currentTime;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_build_mp.cpp", 583, ASSERT_TYPE_ASSERT, "( currentTime ) == ( buildInfo->serverTime )", "currentTime == buildInfo->serverTime\n\t%i, %i", v76, buildInfo->serverTime) )
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
      LODWORD(v77) = v6->current.integer;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_build_mp.cpp", 586, ASSERT_TYPE_ASSERT, "(SvPersistentGlobalsMP::IsFrontEndServer() || !Lobby_IsInRunningLobby() || Dvar_GetInt_Internal_DebugName( DVARINT_party_maxplayers, \"party_maxplayers\" ) == SvClient::GetClientCount())", "%s\n\tDvar_GetInt( party_maxplayers ) != SvClient::GetClientCount(), %i != %i", "SvPersistentGlobalsMP::IsFrontEndServer() || !Lobby_IsInRunningLobby() || Dvar_GetInt( party_maxplayers ) == SvClient::GetClientCount()", v77, v5) )
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
        _RAX = G_MainMP_GetClientState(v12);
        _RDX = v15;
        v18 = 3i64;
        do
        {
          _RDX += 128;
          __asm { vmovups xmm0, xmmword ptr [rax] }
          _RAX = (clientState_t *)((char *)_RAX + 128);
          __asm
          {
            vmovups xmmword ptr [rdx-80h], xmm0
            vmovups xmm1, xmmword ptr [rax-70h]
            vmovups xmmword ptr [rdx-70h], xmm1
            vmovups xmm0, xmmword ptr [rax-60h]
            vmovups xmmword ptr [rdx-60h], xmm0
            vmovups xmm1, xmmword ptr [rax-50h]
            vmovups xmmword ptr [rdx-50h], xmm1
            vmovups xmm0, xmmword ptr [rax-40h]
            vmovups xmmword ptr [rdx-40h], xmm0
            vmovups xmm1, xmmword ptr [rax-30h]
            vmovups xmmword ptr [rdx-30h], xmm1
            vmovups xmm0, xmmword ptr [rax-20h]
            vmovups xmmword ptr [rdx-20h], xmm0
            vmovups xmm1, xmmword ptr [rax-10h]
            vmovups xmmword ptr [rdx-10h], xmm1
          }
          --v18;
        }
        while ( v18 );
        __asm
        {
          vmovups xmm0, xmmword ptr [rax]
          vmovups xmmword ptr [rdx], xmm0
        }
        *((_QWORD *)_RDX + 2) = *(_QWORD *)&_RAX->doNotSimulateTracers;
        if ( *(_DWORD *)v15 != v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_build_mp.cpp", 615, ASSERT_TYPE_ASSERT, "( clientState->clientIndex == i )", (const char *)&queryFormat, "clientState->clientIndex == i") )
          __debugbreak();
        ++v13;
        if ( v82[*(int *)v15] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_build_mp.cpp", 620, ASSERT_TYPE_ASSERT, "( !clientIndex[clientState->clientIndex] )", (const char *)&queryFormat, "!clientIndex[clientState->clientIndex]") )
          __debugbreak();
        v82[*(int *)v15] = 1;
      }
      ++v12;
    }
    while ( v12 < (int)SvClient::ms_clientCount );
    v8 = 0;
  }
  v7->entries.m_count[4] = v13;
  v28 = 0;
  PersistentGlobalsMP = SvPersistentGlobalsMP::GetPersistentGlobalsMP();
  v30 = 0;
  if ( PersistentGlobalsMP->agentCount > 0 )
  {
    do
    {
      if ( PersistentGlobalsMP->agents[v30].entityNum != 2047 )
      {
        v31 = SvSnapshotFrameBuffers::GetBufferEntryAtIndex(StorageBuffer, (const SvSnapshotBufferType)5, StorageBuffer->m_nextBufferIndex[5]);
        ++StorageBuffer->m_nextBufferIndex[5];
        _RBX = v31;
        if ( StorageBuffer->m_nextBufferIndex[5] >= 0x7FFFFFFFFFFFFFFEi64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp_types.h", 302, ASSERT_TYPE_ASSERT, "(m_nextBufferIndex[typeIndex] < MAX_SV_SNAPSHOT_ENTRY_INDEX)", "%s\n\tThis should never hit, map should always be restarted first in SV_MainMP_Frame", "m_nextBufferIndex[typeIndex] < MAX_SV_SNAPSHOT_ENTRY_INDEX") )
          __debugbreak();
        _RAX = G_MainMP_GetAgentState(v30);
        __asm
        {
          vmovups xmm0, xmmword ptr [rax]
          vmovups xmmword ptr [rbx], xmm0
          vmovups xmm1, xmmword ptr [rax+10h]
          vmovups xmmword ptr [rbx+10h], xmm1
          vmovups xmm0, xmmword ptr [rax+20h]
          vmovups xmmword ptr [rbx+20h], xmm0
          vmovups xmm1, xmmword ptr [rax+30h]
          vmovups xmmword ptr [rbx+30h], xmm1
          vmovups xmm0, xmmword ptr [rax+40h]
          vmovups xmmword ptr [rbx+40h], xmm0
          vmovups xmm1, xmmword ptr [rax+50h]
          vmovups xmmword ptr [rbx+50h], xmm1
          vmovups xmm0, xmmword ptr [rax+60h]
          vmovups xmmword ptr [rbx+60h], xmm0
          vmovups xmm1, xmmword ptr [rax+70h]
          vmovups xmmword ptr [rbx+70h], xmm1
          vmovups xmm0, xmmword ptr [rax+80h]
          vmovups xmmword ptr [rbx+80h], xmm0
          vmovups xmm1, xmmword ptr [rax+90h]
          vmovups xmmword ptr [rbx+90h], xmm1
          vmovups xmm0, xmmword ptr [rax+0A0h]
          vmovups xmmword ptr [rbx+0A0h], xmm0
          vmovups xmm1, xmmword ptr [rax+0B0h]
          vmovups xmmword ptr [rbx+0B0h], xmm1
          vmovups xmm0, xmmword ptr [rax+0C0h]
          vmovups xmmword ptr [rbx+0C0h], xmm0
          vmovups xmm1, xmmword ptr [rax+0D0h]
          vmovups xmmword ptr [rbx+0D0h], xmm1
          vmovups xmm0, xmmword ptr [rax+0E0h]
          vmovups xmmword ptr [rbx+0E0h], xmm0
        }
        *((_QWORD *)_RBX + 30) = *(_QWORD *)&_RAX->serverDobjHeldWeapon.m_mapEntryId;
        *((_DWORD *)_RBX + 62) = *(_DWORD *)&_RAX->serverDobjHideWeapon;
        if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 116, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
          __debugbreak();
        if ( v30 >= ComCharacterLimits::ms_gameData.m_agentCount )
        {
          if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 116, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
            __debugbreak();
          LODWORD(v77) = ComCharacterLimits::ms_gameData.m_agentCount;
          LODWORD(v76) = v30;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 186, ASSERT_TYPE_ASSERT, "(unsigned)( agentIndex ) < (unsigned)( ComCharacterLimits::GetAgentMaxCount() )", "agentIndex doesn't index ComCharacterLimits::GetAgentMaxCount()\n\t%i not in [0, %i)", v76, v77) )
            __debugbreak();
        }
        if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 168, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
          __debugbreak();
        if ( *(__int16 *)_RBX != v30 + ComCharacterLimits::ms_gameData.m_clientCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_build_mp.cpp", 635, ASSERT_TYPE_ASSERT, "( agentState->entityNum == ComCharacterLimits::GetEntityIndexFromAgentIndex( i ) )", (const char *)&queryFormat, "agentState->entityNum == ComCharacterLimits::GetEntityIndexFromAgentIndex( i )") )
          __debugbreak();
        v49 = *(__int16 *)_RBX;
        ++v28;
        if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 168, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
          __debugbreak();
        if ( v49 < (int)ComCharacterLimits::ms_gameData.m_clientCount )
        {
          if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 168, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
            __debugbreak();
          LODWORD(v79) = ComCharacterLimits::ms_gameData.m_clientCount;
          LODWORD(v78) = v49;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 175, ASSERT_TYPE_ASSERT, "( entityIndex ) >= ( ComCharacterLimits::GetAgentEntityIndexOffset() )", "%s >= %s\n\t%i, %i", "entityIndex", "ComCharacterLimits::GetAgentEntityIndexOffset()", v78, v79) )
            __debugbreak();
        }
        if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 168, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
          __debugbreak();
        v50 = v49 - ComCharacterLimits::ms_gameData.m_clientCount;
        if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 116, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
          __debugbreak();
        if ( v50 >= ComCharacterLimits::ms_gameData.m_agentCount )
        {
          if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 116, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
            __debugbreak();
          LODWORD(v77) = ComCharacterLimits::ms_gameData.m_agentCount;
          LODWORD(v76) = v50;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 178, ASSERT_TYPE_ASSERT, "(unsigned)( agentIndex ) < (unsigned)( ComCharacterLimits::GetAgentMaxCount() )", "agentIndex doesn't index ComCharacterLimits::GetAgentMaxCount()\n\t%i not in [0, %i)", v76, v77) )
            __debugbreak();
        }
        v51 = v81[v50] == 0;
        v52 = &v81[v50];
        if ( !v51 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_build_mp.cpp", 641, ASSERT_TYPE_ASSERT, "( !agentIndex[thisAgentIndex] )", (const char *)&queryFormat, "!agentIndex[thisAgentIndex]") )
          __debugbreak();
        *v52 = 1;
      }
      ++v30;
    }
    while ( v30 < PersistentGlobalsMP->agentCount );
    v8 = 0;
  }
  v7->entries.m_count[5] = v28;
  if ( g_svSnapshotData.useNetfieldLoD )
  {
    if ( !StorageBuffer->m_bufferData[3] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_build_mp.cpp", 649, ASSERT_TYPE_ASSERT, "( snapBuffer->GetBuferData( SvSnapshotBufferType::ENTITY_LODS ) != nullptr )", (const char *)&queryFormat, "snapBuffer->GetBuferData( SvSnapshotBufferType::ENTITY_LODS ) != nullptr") )
      __debugbreak();
    v53 = 0;
    v54 = 0;
    if ( (int)SvClient::ms_clientCount > 0 )
    {
      do
      {
        if ( SvClient::GetCommonClient(v54)->state >= CS_CONNECTED )
        {
          v55 = SvSnapshotFrameBuffers::GetBufferEntryAtIndex(StorageBuffer, COUNT|DODGE, StorageBuffer->m_nextBufferIndex[3]);
          ++StorageBuffer->m_nextBufferIndex[3];
          v56 = v55;
          if ( StorageBuffer->m_nextBufferIndex[3] >= 0x7FFFFFFFFFFFFFFEi64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp_types.h", 302, ASSERT_TYPE_ASSERT, "(m_nextBufferIndex[typeIndex] < MAX_SV_SNAPSHOT_ENTRY_INDEX)", "%s\n\tThis should never hit, map should always be restarted first in SV_MainMP_Frame", "m_nextBufferIndex[typeIndex] < MAX_SV_SNAPSHOT_ENTRY_INDEX") )
            __debugbreak();
          *(_DWORD *)v56 = v54;
          *(EntityLoDs *)(v56 + 4) = *G_ActiveMP_GetEntityLoD(v54);
          SV_EntitiesLoD_Validate(v54, (const EntityLoDs *const)(v56 + 4));
          ++v53;
        }
        ++v54;
      }
      while ( v54 < (int)SvClient::ms_clientCount );
      v8 = 0;
    }
    v7->entries.m_count[3] = v53;
  }
  Instance = GWeaponMap::GetInstance();
  if ( !BgWeaponMap::ms_runtimeSizeInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_map.h", 228, ASSERT_TYPE_ASSERT, "(ms_runtimeSizeInitialized)", (const char *)&queryFormat, "ms_runtimeSizeInitialized") )
    __debugbreak();
  v58 = BgWeaponMap::ms_runtimeSize - 1;
  for ( i = 1; i < v58; ++i )
  {
    if ( GWeaponMap::TryGetWeaponEntry(Instance, i, &outWeaponMapEntry) )
    {
      v60 = SvSnapshotFrameBuffers::GetBufferEntryAtIndex(StorageBuffer, (const SvSnapshotBufferType)8, StorageBuffer->m_nextBufferIndex[8]);
      ++StorageBuffer->m_nextBufferIndex[8];
      _RBX = v60;
      if ( StorageBuffer->m_nextBufferIndex[8] >= 0x7FFFFFFFFFFFFFFEi64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp_types.h", 302, ASSERT_TYPE_ASSERT, "(m_nextBufferIndex[typeIndex] < MAX_SV_SNAPSHOT_ENTRY_INDEX)", "%s\n\tThis should never hit, map should always be restarted first in SV_MainMP_Frame", "m_nextBufferIndex[typeIndex] < MAX_SV_SNAPSHOT_ENTRY_INDEX") )
        __debugbreak();
      __asm
      {
        vmovups ymm0, ymmword ptr [rsp+4C8h+outWeaponMapEntry.index]
        vmovups ymmword ptr [rbx], ymm0
        vmovups xmm1, xmmword ptr [rsp+4C8h+outWeaponMapEntry.weapon.attachmentVariationIndices+3]
        vmovups xmmword ptr [rbx+20h], xmm1
        vmovsd  xmm0, qword ptr [rsp+4C8h+outWeaponMapEntry.weapon.attachmentVariationIndices+13h]
        vmovsd  qword ptr [rbx+30h], xmm0
      }
      ++v8;
      *((_DWORD *)_RBX + 14) = *(_DWORD *)&outWeaponMapEntry.weapon.attachmentVariationIndices[27];
      *((_WORD *)_RBX + 30) = *(_WORD *)&outWeaponMapEntry.weapon.scopeVariation;
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
    v70 = (ScriptablePartData *)SvSnapshotFrameBuffers::AllocateNextBufferEntryArray(StorageBuffer, COUNT|DODGE|0x4, TotalReplicatedPartsLimit);
    ReplicatedLimits = ScriptableSv_GetReplicatedLimits();
    ScriptableCommon_CopyScriptableParts(PartWorldState, v70, ReplicatedLimits);
  }
  v7->entries.m_count[6] = ReplicatedInstanceLimit;
  v7->entries.m_count[7] = TotalReplicatedPartsLimit;
  Sys_ProfEndNamedEvent();
  v72 = SvSnapshotFrameBuffers::GetBufferEntryAtIndex(StorageBuffer, (const SvSnapshotBufferType)9, StorageBuffer->m_nextBufferIndex[9]);
  ++StorageBuffer->m_nextBufferIndex[9];
  _RBX = v72;
  if ( StorageBuffer->m_nextBufferIndex[9] >= 0x7FFFFFFFFFFFFFFEi64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp_types.h", 302, ASSERT_TYPE_ASSERT, "(m_nextBufferIndex[typeIndex] < MAX_SV_SNAPSHOT_ENTRY_INDEX)", "%s\n\tThis should never hit, map should always be restarted first in SV_MainMP_Frame", "m_nextBufferIndex[typeIndex] < MAX_SV_SNAPSHOT_ENTRY_INDEX") )
    __debugbreak();
  __asm
  {
    vmovups ymm0, ymmword ptr cs:?level@@3Ulevel_locals_t@@A.umbraGateStates.array; level_locals_t level
    vmovups ymmword ptr [rbx], ymm0
    vmovups xmm1, xmmword ptr cs:?level@@3Ulevel_locals_t@@A.umbraGateStates.array+20h; level_locals_t level
    vmovups xmmword ptr [rbx+20h], xmm1
  }
  v7->entries.m_count[9] = 1;
  Sys_ProfEndNamedEvent();
}

/*
==============
SV_LogConstBaselineEfficiency
==============
*/

void __fastcall SV_LogConstBaselineEfficiency(unsigned int entityCount, double _XMM1_8)
{
  signed __int64 v2; 
  void *v7; 
  unsigned int EntityArrayCountUsed; 
  int v10; 
  int v11; 
  int v12; 
  unsigned int v13; 
  unsigned int v14; 
  unsigned int v15; 
  int v16; 
  __int64 v17; 
  __int64 v18; 
  entityState_t *v19; 
  const entityState_t *Entity; 
  const entityState_t *v21; 
  int v22; 
  int v23; 
  int v24; 
  signed __int64 v25; 
  int v26; 
  unsigned int v38; 
  SvPersistentGlobalsMP *PersistentGlobalsMP; 
  const char *MapName; 
  const char *GameType; 
  unsigned int v45; 
  BOOL BaselineValidState; 
  const char *v47; 
  const char *v48; 
  const char *HostName; 
  bool v51; 
  const char *v52; 
  const char *v53; 
  const char *v54; 
  int ControllerFromClient; 
  unsigned __int64 UserId; 
  bool v57; 
  bool v59; 
  __int64 v66; 
  double v67; 
  __int64 v68; 
  __int64 v69; 
  double v70; 
  __int64 v71; 
  double v72; 
  int value; 
  unsigned int valuea; 
  int v75; 
  DLogContext context; 
  char buffer[4096]; 
  char v81; 

  v7 = alloca(v2);
  __asm
  {
    vmovaps [rsp+1248h+var_38], xmm6
    vmovaps [rsp+1248h+var_48], xmm7
    vmovaps [rsp+1248h+var_58], xmm8
  }
  EntityArrayCountUsed = NetConstBaselines_GetEntityArrayCountUsed();
  v10 = 248 * g_svSnapshotData.nextNoDeltaEntity;
  v11 = 0;
  value = EntityArrayCountUsed;
  v12 = 0;
  v13 = EntityArrayCountUsed;
  v14 = EntityArrayCountUsed;
  v15 = 0;
  v16 = 0;
  if ( !EntityArrayCountUsed )
    v12 = 248 * g_svSnapshotData.nextNoDeltaEntity;
  v75 = 248 * g_svSnapshotData.nextNoDeltaEntity;
  if ( EntityArrayCountUsed > entityCount )
    v13 = entityCount;
  if ( v13 )
  {
    v17 = 0i64;
    v18 = v13;
    do
    {
      v19 = &g_svSnapshotData.noDeltaEntities[v17];
      Entity = NetConstBaselines_GetEntity(g_svSnapshotData.noDeltaEntities[v17].number);
      v21 = Entity;
      if ( Entity )
      {
        if ( !memcmp_0(v19, Entity, 0xF8ui64) )
        {
          ++v15;
        }
        else
        {
          v22 = 0;
          v23 = -1;
          v24 = 0;
          v25 = (char *)v21 - (char *)v19;
          do
          {
            if ( LOBYTE(v19->number) != *((_BYTE *)&v19->number + v25) )
            {
              ++v22;
              v26 = v24;
              if ( v23 != -1 )
                v26 = v23;
              v23 = v26;
            }
            ++v24;
            v19 = (entityState_t *)((char *)v19 + 1);
          }
          while ( v24 < 248 );
          v12 += v22;
        }
      }
      else
      {
        ++v16;
      }
      ++v17;
      --v18;
    }
    while ( v18 );
    v14 = value;
    v10 = v75;
  }
  __asm
  {
    vmovss  xmm7, cs:__real@42c80000
    vxorps  xmm6, xmm6, xmm6
  }
  if ( v10 )
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
      vxorps  xmm1, xmm1, xmm1
      vmulss  xmm2, xmm0, xmm7
      vcvtsi2ss xmm1, xmm1, edi
      vdivss  xmm8, xmm2, xmm1
    }
  }
  else
  {
    __asm { vxorps  xmm8, xmm8, xmm8 }
  }
  if ( v14 )
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, ebp
      vxorps  xmm1, xmm1, xmm1
      vmulss  xmm2, xmm0, xmm7
      vcvtsi2ss xmm1, xmm1, rax
      vdivss  xmm6, xmm2, xmm1
    }
  }
  v38 = NetConstBaselines_GetEntityArrayCountUsed();
  PersistentGlobalsMP = SvPersistentGlobalsMP::GetPersistentGlobalsMP();
  __asm
  {
    vsubss  xmm0, xmm7, xmm8
    vcvtss2sd xmm1, xmm0, xmm0
    vmovsd  [rsp+1248h+var_1200], xmm1
    vcvtss2sd xmm6, xmm6, xmm6
    vmovsd  [rsp+1248h+var_1220], xmm6
  }
  Com_Printf(16, "[Snapshot] SV_LogConstBaselineEfficiency: SvPersistentGlobalsMP::GetTime() %d : %d of %d (%.2f%%) file based entities were matched, %d missed in the local baseline (total: %d bytes of %d different (%.2f%%) )\n", (unsigned int)PersistentGlobalsMP->time, v15, v38, v67, v16, v12, v10, v70);
  if ( !SV_NetConstBaselines_GetBaselineValidState() )
  {
    MapName = SV_Game_GetMapName();
    GameType = SV_GameMP_GetGameType();
    Com_PrintWarning(16, "\n\n!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n Const baseline failed validation check for gametype %s on map %s!\n!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n\n", GameType, MapName);
  }
  v45 = NetConstBaselines_GetEntityArrayCountUsed();
  BaselineValidState = SV_NetConstBaselines_GetBaselineValidState();
  v47 = SV_Game_GetMapName();
  v48 = SV_GameMP_GetGameType();
  HostName = SV_GameMP_GetHostName();
  __asm { vcvtss2sd xmm7, xmm8, xmm8 }
  LOBYTE(v11) = v14 == 0;
  __asm { vmovsd  [rsp+1248h+var_11F0], xmm7 }
  LODWORD(v71) = v12;
  LODWORD(v69) = v45;
  LODWORD(v68) = BaselineValidState;
  Com_Printf(16, "[Snapshot] posting to blackbox table \"network_health_monitor\" - version %d, platform %s, hostname %s, gametype %s, mapname %s, baselinePassedValidityCheck %d, entitiesInBaseline %d, baselineBytesDifferentTotal %d, baselineBytesTotal %d, baselinePercentageCorrect %0.2f, baselineFileMissing %d\n", 5i64, "xb3", HostName, v48, v47, v68, v69, v71, v75, v72, v11);
  valuea = NetConstBaselines_GetEntityArrayCountUsed();
  v51 = SV_NetConstBaselines_GetBaselineValidState();
  v52 = SV_Game_GetMapName();
  v53 = SV_GameMP_GetGameType();
  v54 = SV_GameMP_GetHostName();
  ControllerFromClient = CL_Mgr_GetControllerFromClient(LOCAL_CLIENT_0);
  UserId = DLog_GetUserId(ControllerFromClient);
  if ( DLog_IsActive() && DLog_CreateContext(&context, UserId, buffer, 4096) && DLog_IsActive() )
  {
    v57 = DLog_BeginEvent(&context, "network_health_monitor");
    context.autoEndEvent = 1;
    if ( v57 && DLog_Int32(&context, "version", 5) && DLog_String(&context, "platform", "xb3", 0) && DLog_String(&context, "hostname", v54, 0) && DLog_String(&context, "gametype", v53, 0) && DLog_String(&context, "mapname", v52, 0) && DLog_Bool(&context, "baselinePassedValidityCheck", v51) && DLog_Int32(&context, "entitiesInBaseline", valuea) && DLog_Int32(&context, "baselineBytesDifferentTotal", v12) && DLog_Int32(&context, "baselineBytesTotal", v75) )
    {
      __asm { vmovaps xmm2, xmm8; value }
      if ( DLog_Float32(&context, "baselinePercentageCorrect", *(float *)&_XMM2) && DLog_Bool(&context, "baselineFileMissing", v14 == 0) )
        DLog_RecordContext(&context);
    }
  }
  v59 = SV_NetConstBaselines_GetBaselineValidState();
  __asm
  {
    vmovaps xmm3, xmm6
    vmovq   r9, xmm3
    vmovsd  [rsp+1248h+var_1228], xmm7
  }
  SV_BandwidthProfile_RecordEvent(-1, "constBaseline:valid %d,entitiesCorrect %f,bytesCorrect %f", v59, _R9, v66);
  _R11 = &v81;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
    vmovaps xmm8, xmmword ptr [r11-30h]
  }
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
  unsigned int v12; 
  ClientBits *p_clientMask; 
  __int64 v15; 
  __int64 v16; 
  char *v18; 
  SvPersistentGlobalsMP *PersistentGlobalsMP; 
  GWeaponMap *Instance; 
  const dvar_t *v38; 
  const char *v39; 
  const char *v40; 
  bool BaselineDataFromFile; 
  const char *GameType; 
  const char *MapName; 
  __int64 v44; 
  __int64 v45; 
  int v46; 

  if ( !g_svSnapshotData.baselineCreated )
  {
    nextNoDeltaEntity = g_svSnapshotData.nextNoDeltaEntity;
    if ( g_svSnapshotData.nextNoDeltaEntity )
    {
      v46 = g_svSnapshotData.nextNoDeltaEntity;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_build_mp.cpp", 401, ASSERT_TYPE_ASSERT, "( ( !g_svSnapshotData.nextNoDeltaEntity ) )", "%s\n\t( g_svSnapshotData.nextNoDeltaEntity ) = %i", "( !g_svSnapshotData.nextNoDeltaEntity )", v46) )
        __debugbreak();
      nextNoDeltaEntity = g_svSnapshotData.nextNoDeltaEntity;
    }
    nextNoDeltaEntityClientMask = g_svSnapshotData.nextNoDeltaEntityClientMask;
    if ( g_svSnapshotData.nextNoDeltaEntityClientMask )
    {
      LODWORD(v45) = g_svSnapshotData.nextNoDeltaEntityClientMask;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_build_mp.cpp", 404, ASSERT_TYPE_ASSERT, "( ( !g_svSnapshotData.nextNoDeltaEntityClientMask ) )", "%s\n\t( g_svSnapshotData.nextNoDeltaEntityClientMask ) = %i", "( !g_svSnapshotData.nextNoDeltaEntityClientMask )", v45) )
        __debugbreak();
      nextNoDeltaEntityClientMask = g_svSnapshotData.nextNoDeltaEntityClientMask;
    }
    _RCX = &g_svSnapshotData.noDeltaEntities[nextNoDeltaEntity];
    __asm { prefetcht0 byte ptr [rcx] }
    if ( !SV_Loaded() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_build_mp.cpp", 409, ASSERT_TYPE_ASSERT, "( SV_Loaded() )", (const char *)&queryFormat, "SV_Loaded()") )
      __debugbreak();
    if ( (_BYTE)SvGameGlobals::ms_allocatedType != HALF_HALF )
    {
      LODWORD(v45) = (unsigned __int8)SvGameGlobals::ms_allocatedType;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_game_globals_mp.h", 146, ASSERT_TYPE_ASSERT, "(ms_allocatedType == ALLOCATION_TYPE)", "%s\n\tTrying to access server globals, but the server isn't running or its game mode is wrong (ms_allocatedType=%d)", "ms_allocatedType == ALLOCATION_TYPE", v45) )
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
        _RBX = &SvGameGlobals::GetSvGameGlobalsCommon()->gentities[v7];
        v12 = 0;
        p_clientMask = &_RBX->clientMask;
        while ( !p_clientMask->array[0] )
        {
          ++v12;
          p_clientMask = (ClientBits *)((char *)p_clientMask + 4);
          if ( v12 >= 7 )
          {
            if ( SV_SnapshotMP_CanClientsSeeEntity(_RBX) )
            {
              if ( _RBX->s.number < (int)SvClient::ms_clientCount )
              {
                LODWORD(v45) = SvClient::ms_clientCount;
                LODWORD(v44) = _RBX->s.number;
                if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_build_mp.cpp", 435, ASSERT_TYPE_ASSERT, "( ent->s.number ) >= ( SvClient::GetClientCount() )", "ent->s.number >= SvClient::GetClientCount()\n\t%i, %i", v44, v45) )
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
              __asm { vmovups xmm0, xmmword ptr [rbx] }
              v15 = nextNoDeltaEntity++;
              v16 = nextNoDeltaEntityClientMask * g_svSnapshotData.clientMaskSize;
              ++nextNoDeltaEntityClientMask;
              _R8 = &g_svSnapshotData.noDeltaEntities[v15];
              v18 = (char *)g_svSnapshotData.noDeltaEntityClientMaskData + v16;
              __asm
              {
                vmovups xmmword ptr [r8], xmm0
                vmovups xmm1, xmmword ptr [rbx+10h]
                vmovups xmmword ptr [r8+10h], xmm1
                vmovups xmm0, xmmword ptr [rbx+20h]
                vmovups xmmword ptr [r8+20h], xmm0
                vmovups xmm1, xmmword ptr [rbx+30h]
                vmovups xmmword ptr [r8+30h], xmm1
                vmovups xmm0, xmmword ptr [rbx+40h]
                vmovups xmmword ptr [r8+40h], xmm0
                vmovups xmm1, xmmword ptr [rbx+50h]
                vmovups xmmword ptr [r8+50h], xmm1
                vmovups xmm0, xmmword ptr [rbx+60h]
                vmovups xmmword ptr [r8+60h], xmm0
                vmovups xmm1, xmmword ptr [rbx+70h]
                vmovups xmmword ptr [r8+70h], xmm1
                vmovups xmm0, xmmword ptr [rbx+80h]
                vmovups xmmword ptr [r8+80h], xmm0
                vmovups xmm1, xmmword ptr [rbx+90h]
                vmovups xmmword ptr [r8+90h], xmm1
                vmovups xmm0, xmmword ptr [rbx+0A0h]
                vmovups xmmword ptr [r8+0A0h], xmm0
                vmovups xmm1, xmmword ptr [rbx+0B0h]
                vmovups xmmword ptr [r8+0B0h], xmm1
                vmovups xmm0, xmmword ptr [rbx+0C0h]
                vmovups xmmword ptr [r8+0C0h], xmm0
                vmovups xmm1, xmmword ptr [rbx+0D0h]
                vmovups xmmword ptr [r8+0D0h], xmm1
                vmovups xmm0, xmmword ptr [rbx+0E0h]
                vmovups xmmword ptr [r8+0E0h], xmm0
              }
              *(_QWORD *)&_R8->partBits.array[6] = *(_QWORD *)&_RBX->s.partBits.array[6];
              memcpy_0(v18, &_RBX->clientMask, g_svSnapshotData.clientMaskSize);
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
      LODWORD(v45) = nextNoDeltaEntityClientMask;
      LODWORD(v44) = nextNoDeltaEntity;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_build_mp.cpp", 461, ASSERT_TYPE_ASSERT, "( nextNoDeltaEntity ) == ( nextNoDeltaEntityClientMask )", "nextNoDeltaEntity == nextNoDeltaEntityClientMask\n\t%i, %i", v44, v45) )
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
    _RAX = g_svSnapshotData.noDeltaUmbraGateStates;
    __asm
    {
      vmovups ymm0, ymmword ptr cs:?level@@3Ulevel_locals_t@@A.umbraGateStates.array; level_locals_t level
      vmovups ymmword ptr [rax], ymm0
      vmovups xmm1, xmmword ptr cs:?level@@3Ulevel_locals_t@@A.umbraGateStates.array+20h; level_locals_t level
      vmovups xmmword ptr [rax+20h], xmm1
    }
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
      v38 = DVARBOOL_sv_generateConstBaselines;
      if ( DVARBOOL_sv_generateConstBaselines && (Dvar_CheckFrontendServerThread(DVARBOOL_sv_generateConstBaselines), v38->current.enabled) )
      {
        Com_Printf(16, "[Snapshot] SV_ReadBaselineDataFromFile: will not read a baseline when it is asked to generated baselines. disable sv_generateConstBaselines to load or verify them.\n");
      }
      else
      {
        v39 = SV_GameMP_GetGameType();
        v40 = SV_Game_GetMapName();
        BaselineDataFromFile = NetConstBaselines_ReadBaselineDataFromFile(v40, v39);
        SV_NetConstBaselines_SetBaselineValidState(BaselineDataFromFile);
        SV_LogConstBaselineEfficiency(nextNoDeltaEntity, *(double *)&_XMM1);
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


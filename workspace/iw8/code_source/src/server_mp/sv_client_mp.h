/*
==============
SvClientMP::GetFrameInfoForSequence
==============
*/

SvClientFrameInfo *__fastcall SvClientMP::GetFrameInfoForSequence(SvClientMP *this, const int sequence)
{
  return ?GetFrameInfoForSequence@SvClientMP@@QEAAPEAUSvClientFrameInfo@@H@Z(this, sequence);
}

/*
==============
SvClientMP::GetSnapshotFullFrame
==============
*/

clientSnapshot_t *__fastcall SvClientMP::GetSnapshotFullFrame(SvClientMP *this, const unsigned int frameIndex)
{
  return ?GetSnapshotFullFrame@SvClientMP@@AEAAPEAUclientSnapshot_t@@I@Z(this, frameIndex);
}

/*
==============
SV_Client_GetMpClient
==============
*/

SvClientMP *__fastcall SV_Client_GetMpClient(const unsigned int clientIndex)
{
  return ?SV_Client_GetMpClient@@YAPEAVSvClientMP@@I@Z(clientIndex);
}

/*
==============
SV_Client_GetMpClientIndex
==============
*/

unsigned int __fastcall SV_Client_GetMpClientIndex(const SvClientMP *client)
{
  return ?SV_Client_GetMpClientIndex@@YAIPEBVSvClientMP@@@Z(client);
}

/*
==============
SvClientMP::ClearClientMemoryMP
==============
*/

void __fastcall SvClientMP::ClearClientMemoryMP(SvClientMP *client)
{
  ?ClearClientMemoryMP@SvClientMP@@SAXPEAV1@@Z(client);
}

/*
==============
SvClientMP::AllocateClientsMemoryMP
==============
*/

void __fastcall SvClientMP::AllocateClientsMemoryMP(const unsigned int clientCount, const unsigned int packetBackupCount, const unsigned int packetTransientStorageInterval, HunkUser *hunkUser)
{
  ?AllocateClientsMemoryMP@SvClientMP@@SAXIIIPEAUHunkUser@@@Z(clientCount, packetBackupCount, packetTransientStorageInterval, hunkUser);
}

/*
==============
SvClientMP::GetPlayerInfo
==============
*/

BG_SynchronizedPlayerInfo *__fastcall SvClientMP::GetPlayerInfo(unsigned int clientNum)
{
  return ?GetPlayerInfo@SvClientMP@@SAPEAUBG_SynchronizedPlayerInfo@@I@Z(clientNum);
}

/*
==============
SvClientMP::SvClientMP
==============
*/

void __fastcall SvClientMP::SvClientMP(SvClientMP *this)
{
  ??0SvClientMP@@QEAA@XZ(this);
}

/*
==============
SvClientMP::ClearClientSnapshot
==============
*/

void __fastcall SvClientMP::ClearClientSnapshot(clientSnapshot_t *snapshot)
{
  ?ClearClientSnapshot@SvClientMP@@SAXAEAUclientSnapshot_t@@@Z(snapshot);
}

/*
==============
SvClientMP::GetSnapshotEncodingOutput
==============
*/

clientSnapshotEncodingOutput_t *__fastcall SvClientMP::GetSnapshotEncodingOutput(SvClientMP *this, const unsigned int frameIndex)
{
  return ?GetSnapshotEncodingOutput@SvClientMP@@AEAAPEAUclientSnapshotEncodingOutput_t@@I@Z(this, frameIndex);
}

/*
==============
SvClientMP::GetMpClient
==============
*/

SvClientMP *__fastcall SvClientMP::GetMpClient(unsigned int clientNum)
{
  return ?GetMpClient@SvClientMP@@SAPEAV1@I@Z(clientNum);
}

/*
==============
SvClientMP::FreeClientsMemoryMP
==============
*/

void SvClientMP::FreeClientsMemoryMP(void)
{
  ?FreeClientsMemoryMP@SvClientMP@@SAXXZ();
}

/*
==============
SvClientMP::GetSnapshotFullFrameConst
==============
*/

const clientSnapshot_t *__fastcall SvClientMP::GetSnapshotFullFrameConst(SvClientMP *this, const unsigned int frameIndex)
{
  return ?GetSnapshotFullFrameConst@SvClientMP@@QEBAPEBUclientSnapshot_t@@I@Z(this, frameIndex);
}

/*
==============
SvClientMP::GetFrameInfoForSequenceConst
==============
*/

const SvClientFrameInfo *__fastcall SvClientMP::GetFrameInfoForSequenceConst(SvClientMP *this, const int sequence)
{
  return ?GetFrameInfoForSequenceConst@SvClientMP@@QEBAPEBUSvClientFrameInfo@@H@Z(this, sequence);
}

/*
==============
SV_Client_GetMpClient
==============
*/
SvClient *SV_Client_GetMpClient(const unsigned int clientIndex)
{
  if ( (_BYTE)SvClient::ms_allocatedType != HALF_HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.h", 957, ASSERT_TYPE_ASSERT, "( ms_allocatedType == ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == ALLOCATION_TYPE") )
    __debugbreak();
  return SvClient::GetCommonClient(clientIndex);
}

/*
==============
SvClientMP::SvClientMP
==============
*/
void SvClientMP::SvClientMP(SvClientMP *this)
{
  NetchanTelemetry::Stat *m_stats; 
  __int64 v3; 
  DLogTDigestCentroid *m_processedCentroids; 
  __int64 v5; 
  DLogTDigestCentroid *m_unprocessedCentroidBuffer; 
  __int64 v7; 

  this->state = CS_FREE;
  this->__vftable = (SvClientMP_vtbl *)&SvClientMP::`vftable';
  this->netBuf.reliableCommands.TYPE_NOT_SPECIFIED = -1;
  this->netBuf.reliableCommands.m_bufferNextIndex = 0;
  *(_QWORD *)&this->reliableSequence = 0i64;
  this->reliableSent = 0;
  this->reliableOverflowed = 0;
  *(_QWORD *)&this->commandSequence = 0i64;
  this->messageAcknowedlgeStreak = 0;
  *(_QWORD *)&this->beginCmdIndex = 0i64;
  memset_0(&this->lastRecvCommand, 0, sizeof(this->lastRecvCommand));
  NetConnection::NetConnection(&this->clientConnection);
  memset_0(&this->netchan.serverTelemetry, 0, 0x1308ui64);
  memset_0(&this->netchan, 0, 0xA28ui64);
  memset_0(&this->netchan.clientTelemetry, 0, sizeof(this->netchan.clientTelemetry));
  m_stats = this->netchan.clientTelemetry.m_stats;
  v3 = 11i64;
  do
  {
    NetchanTelemetry::Stat::Stat(m_stats++);
    --v3;
  }
  while ( v3 );
  this->netchan.clientTelemetry.m_lastPacketTx.m_ticks = 0i64;
  this->netchan.clientTelemetry.m_lastPacketTx.m_started = 0;
  this->netchan.clientTelemetry.m_lastPacketRx.m_ticks = 0i64;
  this->netchan.clientTelemetry.m_lastPacketRx.m_started = 0;
  this->netchan.clientTelemetry.m_lastMessageTx.m_ticks = 0i64;
  this->netchan.clientTelemetry.m_lastMessageTx.m_started = 0;
  this->netchan.clientTelemetry.m_lastMessageRx.m_ticks = 0i64;
  this->netchan.clientTelemetry.m_lastMessageRx.m_started = 0;
  *(_QWORD *)&this->lastPacketTime = 0i64;
  this->pingDigest.m_min = 1.797693134862316e308;
  this->pingDigest.m_max = 2.225073858507201e-308;
  this->pingDigest.m_serializedHeaderByteSize = 22;
  this->pingDigest.m_disableAutoMerge = 0;
  this->pingDigest.m_processedWeightTotal = 0.0;
  this->pingDigest.m_unprocessedWeightTotal = 0.0;
  *(_QWORD *)&this->pingDigest.m_unprocessedCentroidBufferIndex = 0i64;
  m_processedCentroids = this->pingDigest.m_processedCentroids;
  v5 = 100i64;
  do
  {
    DLogTDigestCentroid::DLogTDigestCentroid(m_processedCentroids++);
    --v5;
  }
  while ( v5 );
  m_unprocessedCentroidBuffer = this->pingDigest.m_unprocessedCentroidBuffer;
  v7 = 800i64;
  do
  {
    DLogTDigestCentroid::DLogTDigestCentroid(m_unprocessedCentroidBuffer++);
    --v7;
  }
  while ( v7 );
  DLogTDigest<20,8>::DLogTDigest<20,8>(&this->lostSnapshotsDigest);
  DLogTDigest<20,8>::DLogTDigest<20,8>(&this->packetBackupDigest);
  this->liveDropRequest = SV_LIVE_DROP_NONE;
  *(_QWORD *)&this->scriptId = 0i64;
  this->testClient = TC_NONE;
  this->totalBytesThisFrame = 0;
  DLogTDigest<32,8>::DLogTDigest<32,8>(&this->antiCheatData.pitchVelocityDigest);
  DLogTDigest<32,8>::DLogTDigest<32,8>(&this->antiCheatData.yawVelocityDigest);
  DLogTDigest<32,8>::DLogTDigest<32,8>(&this->antiCheatData.pitchAccelDigest);
  DLogTDigest<32,8>::DLogTDigest<32,8>(&this->antiCheatData.yawAccelDigest);
  this->m_fullSnapshotFrames = NULL;
  this->m_blindSnapshotFrame.ps.meleeReaction.m_packed = 0;
  GSnapshotWeaponMap::GSnapshotWeaponMap(&this->m_blindSnapshotFrame.weaponMap);
  this->m_frameIndexFullSequence = 0;
  this->m_fullSnapshotEncodingOutputs = NULL;
  this->m_cmdRecvBuffer = NULL;
  this->m_cmdRecvPredict = NULL;
  this->m_cmdRecvSequence = NULL;
}

/*
==============
SvClientMP::ClearClientMemoryMP
==============
*/
void SvClientMP::ClearClientMemoryMP(SvClientMP *client)
{
  NetBurst *burstState; 
  clientSnapshot_t *m_fullSnapshotFrames; 
  usercmd_s *m_cmdRecvBuffer; 
  CmdPredict *m_cmdRecvPredict; 
  clientSnapshotEncodingOutput_t *m_fullSnapshotEncodingOutputs; 
  const netadr_t *Netadr; 
  unsigned int i; 
  int *m_cmdRecvSequence; 
  CmdPredict *v16; 
  GSnapshotWeaponMap weaponMapCopy; 
  __int64 v18; 
  netadr_t result; 

  v18 = -2i64;
  _RBX = client;
  if ( !client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.h", 896, ASSERT_TYPE_ASSERT, "( client )", (const char *)&queryFormat, "client") )
    __debugbreak();
  if ( !_RBX->m_cmdRecvBuffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.h", 897, ASSERT_TYPE_ASSERT, "( client->m_cmdRecvBuffer )", (const char *)&queryFormat, "client->m_cmdRecvBuffer") )
    __debugbreak();
  if ( !_RBX->m_cmdRecvPredict && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.h", 898, ASSERT_TYPE_ASSERT, "( client->m_cmdRecvPredict )", (const char *)&queryFormat, "client->m_cmdRecvPredict") )
    __debugbreak();
  if ( !_RBX->m_cmdRecvSequence && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.h", 899, ASSERT_TYPE_ASSERT, "( client->m_cmdRecvSequence )", (const char *)&queryFormat, "client->m_cmdRecvSequence") )
    __debugbreak();
  if ( !_RBX->m_fullSnapshotFrames && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.h", 900, ASSERT_TYPE_ASSERT, "( client->m_fullSnapshotFrames )", (const char *)&queryFormat, "client->m_fullSnapshotFrames") )
    __debugbreak();
  if ( !SvClientMP::ms_fullSnapFrameCountPerClient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.h", 901, ASSERT_TYPE_ASSERT, "( ms_fullSnapFrameCountPerClient )", (const char *)&queryFormat, "ms_fullSnapFrameCountPerClient") )
    __debugbreak();
  if ( !SvClientMP::ms_cmdCountPerClient && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.h", 902, ASSERT_TYPE_ASSERT, "( ms_cmdCountPerClient )", (const char *)&queryFormat, "ms_cmdCountPerClient") )
    __debugbreak();
  if ( !_RBX->m_fullSnapshotEncodingOutputs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.h", 903, ASSERT_TYPE_ASSERT, "( client->m_fullSnapshotEncodingOutputs )", (const char *)&queryFormat, "client->m_fullSnapshotEncodingOutputs") )
    __debugbreak();
  burstState = _RBX->burstState;
  m_fullSnapshotFrames = _RBX->m_fullSnapshotFrames;
  GSnapshotWeaponMap::GSnapshotWeaponMap(&weaponMapCopy, &_RBX->m_blindSnapshotFrame.weaponMap);
  __asm
  {
    vmovups ymm0, ymmword ptr [rbx+5AEC8h]
    vmovups [rsp+108h+var_B0], ymm0
    vmovups ymm0, ymmword ptr [rbx+5AEE8h]
    vmovups [rsp+108h+var_90], ymm0
    vmovups ymm0, ymmword ptr [rbx+5AF08h]
    vmovups [rsp+108h+var_70], ymm0
  }
  m_cmdRecvBuffer = _RBX->m_cmdRecvBuffer;
  m_cmdRecvPredict = _RBX->m_cmdRecvPredict;
  v16 = m_cmdRecvPredict;
  m_cmdRecvSequence = _RBX->m_cmdRecvSequence;
  m_fullSnapshotEncodingOutputs = _RBX->m_fullSnapshotEncodingOutputs;
  if ( _RBX->scriptId )
    SvClientMP::FreeScriptId(_RBX);
  if ( NetConnection::IsOpened(&_RBX->clientConnection) )
  {
    Netadr = NetConnection::GetNetadr(&_RBX->clientConnection, &result);
    SvClientMP::RemoveClientAtAddress(Netadr);
  }
  NetConnection::Close(&_RBX->clientConnection, NET_CLOSE_SOFT);
  ((void (__fastcall *)(SvClientMP *, _QWORD))_RBX->~SvClient)(_RBX, 0i64);
  memset_0(_RBX, 0, sizeof(SvClientMP));
  SvClientMP::SvClientMP(_RBX);
  memset_0(m_cmdRecvBuffer, 0, 264i64 * SvClientMP::ms_cmdCountPerClient);
  memset_0(m_cmdRecvPredict, 0, 60i64 * SvClientMP::ms_cmdCountPerClient);
  memset_0(m_cmdRecvSequence, 0, 4i64 * SvClientMP::ms_cmdCountPerClient);
  for ( i = 0; i < SvClientMP::ms_fullSnapFrameCountPerClient; ++i )
  {
    SvClientMP::ClearClientSnapshot(&m_fullSnapshotFrames[i]);
    memset_0(&m_fullSnapshotEncodingOutputs[i], 0, sizeof(clientSnapshotEncodingOutput_t));
  }
  _RBX->m_fullSnapshotFrames = m_fullSnapshotFrames;
  GSnapshotWeaponMap::GSnapshotWeaponMap(&_RBX->m_blindSnapshotFrame.weaponMap, &weaponMapCopy);
  __asm
  {
    vmovups ymm0, [rsp+108h+var_B0]
    vmovups ymmword ptr [rbx+5AEC8h], ymm0
    vmovups ymm1, [rsp+108h+var_90]
    vmovups ymmword ptr [rbx+5AEE8h], ymm1
    vmovups ymm0, [rsp+108h+var_70]
    vmovups ymmword ptr [rbx+5AF08h], ymm0
  }
  SvClientMP::ClearClientSnapshot(&_RBX->m_blindSnapshotFrame);
  burstState->Reset(burstState);
  _RBX->burstState = burstState;
  _RBX->m_cmdRecvBuffer = m_cmdRecvBuffer;
  _RBX->m_cmdRecvPredict = v16;
  _RBX->m_cmdRecvSequence = m_cmdRecvSequence;
  _RBX->m_fullSnapshotEncodingOutputs = m_fullSnapshotEncodingOutputs;
  GSnapshotWeaponMap::~GSnapshotWeaponMap(&weaponMapCopy);
}

/*
==============
SvClientMP::ClearClientSnapshot
==============
*/
void SvClientMP::ClearClientSnapshot(clientSnapshot_t *snapshot)
{
  size_t v3; 
  void **p_items; 
  __int64 v11; 
  GSnapshotWeaponMap weaponMapCopy; 
  void *retaddr; 

  _R11 = &retaddr;
  _RDI = snapshot;
  v3 = 62i64 * SvClientMP::ms_streamSyncItemCount;
  __asm
  {
    vmovups ymm0, ymmword ptr [rcx+6BF8h]
    vmovups [rsp+0C8h+var_80], ymm0
    vmovups ymm0, ymmword ptr [rcx+6C18h]
    vmovups [rsp+0C8h+var_60], ymm0
    vmovups ymm0, ymmword ptr [rcx+6C38h]
    vmovups ymmword ptr [r11-40h], ymm0
  }
  GSnapshotWeaponMap::GSnapshotWeaponMap(&weaponMapCopy, &snapshot->weaponMap);
  memset_0(_RDI, 0, sizeof(clientSnapshot_t));
  GSnapshotWeaponMap::GSnapshotWeaponMap(&_RDI->weaponMap, &weaponMapCopy);
  if ( !_RDI->weaponMap.m_entries && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_map.h", 220, ASSERT_TYPE_ASSERT, "(m_entries != nullptr)", (const char *)&queryFormat, "m_entries != nullptr", -2i64) )
    __debugbreak();
  if ( !BgWeaponMap::ms_runtimeSizeInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_map.h", 228, ASSERT_TYPE_ASSERT, "(ms_runtimeSizeInitialized)", (const char *)&queryFormat, "ms_runtimeSizeInitialized") )
    __debugbreak();
  memset_0(_RDI->weaponMap.m_entries, 0, 62i64 * BgWeaponMap::ms_runtimeSize);
  __asm
  {
    vmovups ymm0, [rsp+0C8h+var_80]
    vmovups ymmword ptr [rdi+6BF8h], ymm0
    vmovups ymm1, [rsp+0C8h+var_60]
    vmovups ymmword ptr [rdi+6C18h], ymm1
    vmovups ymm0, [rsp+0C8h+var_40]
    vmovups ymmword ptr [rdi+6C38h], ymm0
  }
  p_items = (void **)&_RDI->streamSync.streamSyncLists[0].items;
  v11 = 6i64;
  do
  {
    if ( !*p_items && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.h", 886, ASSERT_TYPE_ASSERT, "( curList.items != nullptr )", (const char *)&queryFormat, "curList.items != nullptr") )
      __debugbreak();
    *((_DWORD *)p_items - 2) = 0;
    memset_0(*p_items, 0, v3);
    p_items += 2;
    --v11;
  }
  while ( v11 );
  GSnapshotWeaponMap::~GSnapshotWeaponMap(&weaponMapCopy);
}

/*
==============
SvClientMP::GetPlayerInfo
==============
*/
BG_SynchronizedPlayerInfo *SvClientMP::GetPlayerInfo(unsigned int clientNum)
{
  __int64 v1; 
  __int64 v3; 
  unsigned int v4; 

  v1 = clientNum;
  if ( (_BYTE)SvClient::ms_allocatedType != HALF_HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.h", 991, ASSERT_TYPE_ASSERT, "( ms_allocatedType == ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == ALLOCATION_TYPE") )
    __debugbreak();
  if ( !(_BYTE)SvClient::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.h", 992, ASSERT_TYPE_ASSERT, "( ms_allocatedType != GameModeType::NONE )", (const char *)&queryFormat, "ms_allocatedType != GameModeType::NONE") )
    __debugbreak();
  if ( (unsigned int)v1 >= SvClient::ms_clientCount )
  {
    v4 = SvClient::ms_clientCount;
    LODWORD(v3) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.h", 993, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( ms_clientCount )", "clientNum doesn't index ms_clientCount\n\t%i not in [0, %i)", v3, v4) )
      __debugbreak();
  }
  return SvClientMP::ms_playerInfos[v1];
}

/*
==============
SvClientMP::GetMpClient
==============
*/
SvClient *SvClientMP::GetMpClient(unsigned int clientNum)
{
  if ( (_BYTE)SvClient::ms_allocatedType != HALF_HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.h", 957, ASSERT_TYPE_ASSERT, "( ms_allocatedType == ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == ALLOCATION_TYPE") )
    __debugbreak();
  return SvClient::GetCommonClient(clientNum);
}

/*
==============
SV_Client_GetMpClientIndex
==============
*/
__int64 SV_Client_GetMpClientIndex(const SvClientMP *client)
{
  unsigned __int64 v2; 
  unsigned __int64 v3; 
  __int64 v5; 
  int v6; 

  if ( (_BYTE)SvClient::ms_allocatedType != HALF_HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.h", 957, ASSERT_TYPE_ASSERT, "( ms_allocatedType == ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == ALLOCATION_TYPE") )
    __debugbreak();
  v2 = (__int64)((unsigned __int128)(((char *)client - (char *)SvClient::GetCommonClient(0)) * (__int128)0x586B96EA21E43D39i64) >> 64) >> 17;
  v3 = (v2 >> 63) + v2;
  if ( (unsigned int)v3 >= 0xC8 )
  {
    v6 = 200;
    LODWORD(v5) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.h", 1072, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( 200 )", "index doesn't index MAX_CLIENTS_MP\n\t%i not in [0, %i)", v5, v6) )
      __debugbreak();
  }
  return (unsigned int)v3;
}

/*
==============
SvClientMP::GetFrameInfoForSequenceConst
==============
*/
SvClientFrameInfo *SvClientMP::GetFrameInfoForSequenceConst(SvClientMP *this, const int sequence)
{
  char v2; 

  v2 = sequence;
  if ( sequence < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.h", 1054, ASSERT_TYPE_ASSERT, "( sequence ) >= ( 0 )", "sequence >= 0\n\t%i, %i", sequence, 0i64) )
    __debugbreak();
  return &this->m_frameInfo[v2 & 0x3F];
}

/*
==============
SvClientMP::GetSnapshotEncodingOutput
==============
*/
clientSnapshotEncodingOutput_t *SvClientMP::GetSnapshotEncodingOutput(SvClientMP *this, const unsigned int frameIndex)
{
  __int64 v3; 
  unsigned int v6; 

  v3 = frameIndex;
  if ( frameIndex >= SvClientMP::ms_fullSnapFrameCountPerClient )
  {
    v6 = SvClientMP::ms_fullSnapFrameCountPerClient;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.h", 1020, ASSERT_TYPE_ASSERT, "(unsigned)( frameIndex ) < (unsigned)( ms_fullSnapFrameCountPerClient )", "frameIndex doesn't index ms_fullSnapFrameCountPerClient\n\t%i not in [0, %i)", frameIndex, v6) )
      __debugbreak();
  }
  return &this->m_fullSnapshotEncodingOutputs[v3];
}

/*
==============
SvClientMP::GetSnapshotFullFrame
==============
*/
clientSnapshot_t *SvClientMP::GetSnapshotFullFrame(SvClientMP *this, const unsigned int frameIndex)
{
  __int64 v3; 
  unsigned int v6; 

  v3 = frameIndex;
  if ( frameIndex >= SvClientMP::ms_fullSnapFrameCountPerClient )
  {
    v6 = SvClientMP::ms_fullSnapFrameCountPerClient;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.h", 1006, ASSERT_TYPE_ASSERT, "(unsigned)( frameIndex ) < (unsigned)( ms_fullSnapFrameCountPerClient )", "frameIndex doesn't index ms_fullSnapFrameCountPerClient\n\t%i not in [0, %i)", frameIndex, v6) )
      __debugbreak();
  }
  return &this->m_fullSnapshotFrames[v3];
}

/*
==============
SvClientMP::AllocateClientsMemoryMP
==============
*/
void SvClientMP::AllocateClientsMemoryMP(const unsigned int clientCount, const unsigned int packetBackupCount, const unsigned int packetTransientStorageInterval, HunkUser *hunkUser)
{
  __int64 v5; 
  unsigned int v7; 
  SvClientMP *v8; 
  SvClient **v9; 
  __int64 v10; 
  SvClient *v11; 
  const dvar_t *v12; 
  __int64 v13; 
  __int64 v14; 
  int integer; 
  __int64 v16; 
  __int64 v17; 
  BG_SynchronizedPlayerInfo **v18; 
  BG_SynchronizedPlayerInfo *v19; 
  int v20; 
  int v21; 
  int v22; 
  unsigned int v23; 
  __int64 v24; 
  unsigned __int64 v25; 
  unsigned __int64 v26; 
  __int64 v27; 
  __int64 v28; 
  SvClient *CommonClient; 
  __int64 v30; 
  unsigned int v31; 
  WeaponMapEntry *v32; 
  const dvar_t *v33; 
  int v34; 
  __int64 v35; 
  NetBurstFixedWindow *v36; 
  const dvar_t *v37; 
  unsigned int v38; 
  __int64 v39; 
  __int64 v40; 
  _QWORD *v41; 
  __int64 v42; 
  _QWORD *v43; 
  __int64 v44; 
  __int64 v45; 
  ntl::fixed_hash_map<unsigned __int64,unsigned int,200,269,ntl::hash<unsigned __int64>,ntl::equal_to<unsigned __int64> > *p_m_buckets; 
  ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *i; 
  ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *v48; 
  __int64 v49; 
  __int64 v50; 
  unsigned int v51; 
  int v52; 
  char *v53; 
  __int64 v54; 
  __int64 v55; 
  __int64 v56; 
  __int64 size; 
  SvGameModeApplication *ActiveServerApplication; 
  WeaponMapEntry *v59; 
  WeaponMapEntry *weaponMapEntries; 
  char *v61; 
  char *v62; 
  char *v63; 
  __int64 v64; 
  int v65; 
  unsigned int v68; 

  v5 = clientCount;
  v7 = packetBackupCount;
  ActiveServerApplication = SvGameModeApplication::GetActiveServerApplication();
  if ( (_BYTE)SvClient::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_client.h", 147, ASSERT_TYPE_ASSERT, "( ms_allocatedType == GameModeType::NONE )", (const char *)&queryFormat, "ms_allocatedType == GameModeType::NONE") )
    __debugbreak();
  if ( SvClient::ms_clientCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_client.h", 148, ASSERT_TYPE_ASSERT, "( ms_clientCount == 0 )", (const char *)&queryFormat, "ms_clientCount == 0") )
    __debugbreak();
  v8 = (SvClientMP *)Mem_HunkUser_AllocInternal(hunkUser, (unsigned int)(379488 * v5), 0x80ui64, "SvClient::AllocateClientsMemoryCommon");
  if ( (_DWORD)v5 )
  {
    v9 = SvClient::ms_clients;
    v10 = v5;
    do
    {
      if ( *v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_client.h", 159, ASSERT_TYPE_ASSERT, "( !ms_clients[clientIndex] )", (const char *)&queryFormat, "!ms_clients[clientIndex]") )
        __debugbreak();
      SvClientMP::SvClientMP(v8);
      *v9 = v11;
      ++v8;
      ++v9;
      --v10;
    }
    while ( v10 );
    v7 = packetBackupCount;
  }
  v12 = DVARINT_sv_cmdThrottleType;
  SvClient::ms_clientCount = v5;
  LOBYTE(SvClient::ms_allocatedType) = 2;
  v13 = v7 / (packetTransientStorageInterval + 1);
  v14 = v7 * (unsigned int)v5;
  v68 = v7 / (packetTransientStorageInterval + 1);
  if ( !DVARINT_sv_cmdThrottleType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sv_cmdThrottleType") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v12);
  integer = v12->current.integer;
  v16 = v5;
  if ( integer )
  {
    v17 = 1072i64;
    if ( integer != 2 )
      v17 = 80i64;
  }
  else
  {
    v17 = 40i64;
  }
  v53 = (char *)Mem_HunkUser_AllocInternal(hunkUser, v17 * v5, 0x80ui64, "SvClientMP::AllocateClientsMemoryMP");
  v61 = (char *)Mem_HunkUser_AllocInternal(hunkUser, 264i64 * (unsigned int)v14, 0x80ui64, "SvClientMP::AllocateClientsMemoryMP");
  v62 = (char *)Mem_HunkUser_AllocInternal(hunkUser, 60i64 * (unsigned int)v14, 0x80ui64, "SvClientMP::AllocateClientsMemoryMP");
  v63 = (char *)Mem_HunkUser_AllocInternal(hunkUser, 4 * v14, 0x80ui64, "SvClientMP::AllocateClientsMemoryMP");
  if ( (_DWORD)v5 )
  {
    v18 = SvClientMP::ms_playerInfos;
    do
    {
      v19 = (BG_SynchronizedPlayerInfo *)Mem_HunkUser_AllocInternal(hunkUser, 0x80ui64, 8ui64, "SvClientMP::AllocateClientsMemoryMP");
      *v18 = v19;
      BG_SynchronizedPlayerInfo_Reset(v19);
      ++v18;
      --v16;
    }
    while ( v16 );
  }
  v20 = 20;
  v21 = 8;
  if ( (unsigned int)v5 <= 0x14 )
    v20 = v5;
  v22 = 2 * v20;
  if ( 2 * v20 + 24 >= (unsigned int)(2 * v20 + 8) )
    v21 = 24;
  v23 = 0;
  v51 = 0;
  v24 = (unsigned int)(v22 + v21);
  v25 = 62 * v24;
  v65 = v22 + v21;
  if ( (_DWORD)v5 )
  {
    v26 = 27768 * v13;
    v27 = 0i64;
    v54 = 0i64;
    v28 = 0i64;
    v64 = 27768 * v13;
    v56 = 0i64;
    v55 = 0i64;
    size = 104 * v13;
    do
    {
      if ( (_BYTE)SvClient::ms_allocatedType != HALF_HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.h", 957, ASSERT_TYPE_ASSERT, "( ms_allocatedType == ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == ALLOCATION_TYPE") )
        __debugbreak();
      CommonClient = SvClient::GetCommonClient(v23);
      *(_QWORD *)CommonClient[1197].lastUsercmd.angles.v = Mem_HunkUser_AllocInternal(hunkUser, v26, 0x80ui64, "SvClientMP::AllocateClientsMemoryMP");
      *(_QWORD *)&CommonClient[1309].lastUsercmd.meleeChargeEnt = Mem_HunkUser_AllocInternal(hunkUser, size, 0x80ui64, "SvClientMP::AllocateClientsMemoryMP");
      if ( !BgWeaponMap::ms_runtimeSizeInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_map.h", 228, ASSERT_TYPE_ASSERT, "(ms_runtimeSizeInitialized)", (const char *)&queryFormat, "ms_runtimeSizeInitialized") )
        __debugbreak();
      v30 = BgWeaponMap::ms_runtimeSize;
      v52 = BgWeaponMap::ms_runtimeSize;
      v31 = v13 * BgWeaponMap::ms_runtimeSize;
      v59 = (WeaponMapEntry *)Mem_HunkUser_AllocInternal(hunkUser, 62i64 * v31, 8ui64, "SvClientMP::AllocateClientsMemoryMP");
      v32 = (WeaponMapEntry *)Mem_HunkUser_AllocInternal(hunkUser, 62 * v30, 8ui64, "SvClientMP::AllocateClientsMemoryMP");
      v33 = DVARINT_sv_cmdThrottleType;
      weaponMapEntries = v32;
      if ( !DVARINT_sv_cmdThrottleType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sv_cmdThrottleType") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v33);
      v34 = v33->current.integer;
      if ( v34 )
      {
        if ( v34 == 2 )
        {
          if ( !ActiveServerApplication->m_frameDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_gamemode_app.h", 162, ASSERT_TYPE_ASSERT, "(m_frameDuration > 0)", "%s\n\tFrame duration has not been initialized", "m_frameDuration > 0") )
            __debugbreak();
          NetBurstAutoCorrelate::NetBurstAutoCorrelate((NetBurstAutoCorrelate *)&v53[v28], ActiveServerApplication->m_frameDuration);
        }
        else
        {
          NetBurstDynamicWindow::NetBurstDynamicWindow((NetBurstDynamicWindow *)&v53[v54]);
        }
      }
      else
      {
        v36 = (NetBurstFixedWindow *)&v53[v27];
        v37 = DVARINT_sv_cmdThrottleWindow;
        if ( !DVARINT_sv_cmdThrottleWindow && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sv_cmdThrottleWindow") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v37);
        NetBurstFixedWindow::NetBurstFixedWindow(v36, v37->current.integer);
      }
      v38 = 0;
      *(_QWORD *)&CommonClient[602].lastUsercmd.offHand.weaponAttachments[10] = v35;
      if ( (_DWORD)v13 )
      {
        v39 = 0i64;
        do
        {
          v40 = *(_QWORD *)CommonClient[1197].lastUsercmd.angles.v;
          if ( v38 * v52 >= v31 )
          {
            LODWORD(v50) = v31;
            LODWORD(v49) = v38 * v52;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.h", 805, ASSERT_TYPE_ASSERT, "(unsigned)( weaponMapEntryIndex ) < (unsigned)( weaponMapEntryCount * fullSnapFrameCountPerClient )", "weaponMapEntryIndex doesn't index weaponMapEntryCount * fullSnapFrameCountPerClient\n\t%i not in [0, %i)", v49, v50) )
              __debugbreak();
          }
          GSnapshotWeaponMap::GSnapshotWeaponMap((GSnapshotWeaponMap *)(v40 + v39 + 27432), &v59[v38 * v52]);
          v41 = (_QWORD *)(v40 + v39 + 27648);
          v42 = 6i64;
          do
          {
            *v41 = Mem_HunkUser_AllocInternal(hunkUser, v25, 8ui64, "SvClientMP::AllocateClientsMemoryMP");
            v41 += 2;
            --v42;
          }
          while ( v42 );
          ++v38;
          v39 += 27768i64;
        }
        while ( v38 < v68 );
        LODWORD(v13) = v68;
      }
      GSnapshotWeaponMap::GSnapshotWeaponMap((GSnapshotWeaponMap *)&CommonClient[1292].lastUsercmd.offHand.stickerIndices[3], weaponMapEntries);
      v43 = &CommonClient[1293].lastUsercmd.angles.xy + 1;
      v44 = 6i64;
      do
      {
        *v43 = Mem_HunkUser_AllocInternal(hunkUser, v25, 8ui64, "SvClientMP::AllocateClientsMemoryMP");
        v43 += 2;
        --v44;
      }
      while ( v44 );
      v45 = packetBackupCount * v51;
      v28 = v55 + 1072;
      v54 += 80i64;
      v27 = v56 + 40;
      v26 = v64;
      v23 = ++v51;
      *(_QWORD *)&CommonClient[1317].lastUsercmd.offHand.weaponCamo = &v61[264 * v45];
      v55 += 1072i64;
      *(_QWORD *)&CommonClient[1317].lastUsercmd.meleeChargeEnt = &v62[60 * v45];
      v56 += 40i64;
      *(_QWORD *)CommonClient[1317].lastUsercmd.remoteControlMove = &v63[4 * v45];
    }
    while ( v51 < clientCount );
    v7 = packetBackupCount;
    LODWORD(v24) = v65;
  }
  SvClientMP::ms_fullSnapFrameCountPerClient = v13;
  p_m_buckets = (ntl::fixed_hash_map<unsigned __int64,unsigned int,200,269,ntl::hash<unsigned __int64>,ntl::equal_to<unsigned __int64> > *)&SvClientMP::ms_clientAddrMap.m_buckets;
  SvClientMP::ms_cmdCountPerClient = v7;
  SvClientMP::ms_streamSyncItemCount = v24;
  do
  {
    for ( i = *(ntl::internal::pool_allocator_pointer_freelist::free_item_pointer **)p_m_buckets->m_data.m_buffer; i != (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)p_m_buckets; SvClientMP::ms_clientAddrMap.m_freelist.m_head.mp_next = v48 )
    {
      if ( !i && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\slist\\intrusive_slist.h", 72, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
        __debugbreak();
      v48 = i;
      if ( !i && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\slist\\intrusive_slist.h", 93, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
        __debugbreak();
      i = i->mp_next;
      v48->mp_next = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)SvClientMP::ms_clientAddrMap.m_freelist.m_head;
    }
    *(_QWORD *)p_m_buckets->m_data.m_buffer = p_m_buckets;
    p_m_buckets = (ntl::fixed_hash_map<unsigned __int64,unsigned int,200,269,ntl::hash<unsigned __int64>,ntl::equal_to<unsigned __int64> > *)((char *)p_m_buckets + 8);
  }
  while ( p_m_buckets != (ntl::fixed_hash_map<unsigned __int64,unsigned int,200,269,ntl::hash<unsigned __int64>,ntl::equal_to<unsigned __int64> > *)&SvClientMP::ms_clientAddrMap.m_currentNumItems );
  SvClientMP::ms_clientAddrMap.m_currentNumItems = 0i64;
}

/*
==============
SvClientMP::FreeClientsMemoryMP
==============
*/
void SvClientMP::FreeClientsMemoryMP(void)
{
  signed int v0; 
  SvClient *CommonClient; 
  char v2; 
  SvClient **v3; 
  signed int v4; 
  void **v5; 
  __int64 v6; 
  BG_SynchronizedPlayerInfo **v7; 
  __int64 v8; 
  ntl::fixed_hash_map<unsigned __int64,unsigned int,200,269,ntl::hash<unsigned __int64>,ntl::equal_to<unsigned __int64> > *p_m_buckets; 
  ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *i; 
  ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *v11; 

  SvClientMP::ms_fullSnapFrameCountPerClient = 0;
  SvClientMP::ms_cmdCountPerClient = 0;
  v0 = SvClient::ms_clientCount - 1;
  for ( SvClientMP::ms_streamSyncItemCount = 0; v0 >= 0; *(_QWORD *)&CommonClient[602].lastUsercmd.offHand.weaponAttachments[10] = 0i64 )
  {
    if ( (_BYTE)SvClient::ms_allocatedType != HALF_HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.h", 957, ASSERT_TYPE_ASSERT, "( ms_allocatedType == ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == ALLOCATION_TYPE") )
      __debugbreak();
    CommonClient = SvClient::GetCommonClient(v0);
    if ( !*(_QWORD *)&CommonClient[602].lastUsercmd.offHand.weaponAttachments[10] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.h", 849, ASSERT_TYPE_ASSERT, "( cl->burstState )", (const char *)&queryFormat, "cl->burstState") )
      __debugbreak();
    (***(void (__fastcall ****)(_QWORD, _QWORD))&CommonClient[602].lastUsercmd.offHand.weaponAttachments[10])(*(_QWORD *)&CommonClient[602].lastUsercmd.offHand.weaponAttachments[10], 0i64);
    --v0;
  }
  v2 = SvClient::ms_allocatedType;
  v3 = SvClient::ms_clients;
  if ( !(_BYTE)SvClient::ms_allocatedType )
  {
LABEL_14:
    if ( v2 != 2 )
      goto LABEL_21;
    goto LABEL_15;
  }
  if ( (_BYTE)SvClient::ms_allocatedType != HALF_HALF )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_client.h", 171, ASSERT_TYPE_ASSERT, "( ms_allocatedType == GameModeType::NONE || ms_allocatedType == SubClientType::ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == GameModeType::NONE || ms_allocatedType == SubClientType::ALLOCATION_TYPE") )
      __debugbreak();
    v2 = SvClient::ms_allocatedType;
    goto LABEL_14;
  }
LABEL_15:
  if ( !SvClient::ms_clientCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_client.h", 175, ASSERT_TYPE_ASSERT, "(ms_clientCount > 0)", "%s\n\tFreeClientsMemoryCommon: Trying to free clients but no client has been allocated\n", "ms_clientCount > 0") )
    __debugbreak();
  v4 = SvClient::ms_clientCount - 1;
  if ( (int)(SvClient::ms_clientCount - 1) >= 0 )
  {
    v5 = (void **)&SvClient::ms_clients[v4];
    do
    {
      (**(void (__fastcall ***)(void *, _QWORD))*v5)(*v5, 0i64);
      DebugWipe(*v5, 0x5CA60ui64);
      --v4;
      *v5-- = NULL;
    }
    while ( v4 >= 0 );
  }
LABEL_21:
  SvClient::ms_clientCount = 0;
  LOBYTE(SvClient::ms_allocatedType) = 0;
  v6 = 200i64;
  do
  {
    if ( *v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_client.h", 196, ASSERT_TYPE_ASSERT, "( !ms_clients[clientIndex] )", (const char *)&queryFormat, "!ms_clients[clientIndex]") )
      __debugbreak();
    ++v3;
    --v6;
  }
  while ( v6 );
  v7 = SvClientMP::ms_playerInfos;
  v8 = 25i64;
  do
  {
    *v7 = NULL;
    v7[1] = NULL;
    v7[2] = NULL;
    v7 += 8;
    *(v7 - 5) = NULL;
    *(v7 - 4) = NULL;
    *(v7 - 3) = NULL;
    *(v7 - 2) = NULL;
    *(v7 - 1) = NULL;
    --v8;
  }
  while ( v8 );
  p_m_buckets = (ntl::fixed_hash_map<unsigned __int64,unsigned int,200,269,ntl::hash<unsigned __int64>,ntl::equal_to<unsigned __int64> > *)&SvClientMP::ms_clientAddrMap.m_buckets;
  do
  {
    for ( i = *(ntl::internal::pool_allocator_pointer_freelist::free_item_pointer **)p_m_buckets->m_data.m_buffer; i != (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)p_m_buckets; SvClientMP::ms_clientAddrMap.m_freelist.m_head.mp_next = v11 )
    {
      if ( !i && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\slist\\intrusive_slist.h", 72, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
        __debugbreak();
      v11 = i;
      if ( !i && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\slist\\intrusive_slist.h", 93, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
        __debugbreak();
      i = i->mp_next;
      v11->mp_next = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)SvClientMP::ms_clientAddrMap.m_freelist.m_head;
    }
    *(_QWORD *)p_m_buckets->m_data.m_buffer = p_m_buckets;
    p_m_buckets = (ntl::fixed_hash_map<unsigned __int64,unsigned int,200,269,ntl::hash<unsigned __int64>,ntl::equal_to<unsigned __int64> > *)((char *)p_m_buckets + 8);
  }
  while ( p_m_buckets != (ntl::fixed_hash_map<unsigned __int64,unsigned int,200,269,ntl::hash<unsigned __int64>,ntl::equal_to<unsigned __int64> > *)&SvClientMP::ms_clientAddrMap.m_currentNumItems );
  SvClientMP::ms_clientAddrMap.m_currentNumItems = 0i64;
}

/*
==============
SvClientMP::GetFrameInfoForSequence
==============
*/
SvClientFrameInfo *SvClientMP::GetFrameInfoForSequence(SvClientMP *this, const int sequence)
{
  char v2; 

  v2 = sequence;
  if ( sequence < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.h", 1046, ASSERT_TYPE_ASSERT, "( sequence ) >= ( 0 )", "sequence >= 0\n\t%i, %i", sequence, 0i64) )
    __debugbreak();
  return &this->m_frameInfo[v2 & 0x3F];
}

/*
==============
SvClientMP::GetSnapshotFullFrameConst
==============
*/
clientSnapshot_t *SvClientMP::GetSnapshotFullFrameConst(SvClientMP *this, const unsigned int frameIndex)
{
  __int64 v3; 
  unsigned int v6; 

  v3 = frameIndex;
  if ( frameIndex >= SvClientMP::ms_fullSnapFrameCountPerClient )
  {
    v6 = SvClientMP::ms_fullSnapFrameCountPerClient;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.h", 1013, ASSERT_TYPE_ASSERT, "(unsigned)( frameIndex ) < (unsigned)( ms_fullSnapFrameCountPerClient )", "frameIndex doesn't index ms_fullSnapFrameCountPerClient\n\t%i not in [0, %i)", frameIndex, v6) )
      __debugbreak();
  }
  return &this->m_fullSnapshotFrames[v3];
}


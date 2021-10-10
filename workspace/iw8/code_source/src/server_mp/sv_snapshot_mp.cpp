/*
==============
SV_SnapshotMP_SendClientMessages
==============
*/

void SV_SnapshotMP_SendClientMessages(void)
{
  ?SV_SnapshotMP_SendClientMessages@@YAXXZ();
}

/*
==============
SvSnapshotEntries::HasValidEntries
==============
*/

bool __fastcall SvSnapshotEntries::HasValidEntries(SvSnapshotEntries *this, bool debugPrint)
{
  return ?HasValidEntries@SvSnapshotEntries@@QEBA_N_N@Z(this, debugPrint);
}

/*
==============
SV_SnapshotMP_InitCounts
==============
*/

void __fastcall SV_SnapshotMP_InitCounts(unsigned int packetBackupCount, const unsigned int throttleBackupCount, unsigned int packetTransientStorageInterval, unsigned int clientCount, unsigned int agentCount, unsigned int scriptedCameraCount, const ScriptableInitLimits *scriptableInitLimits, int frameDurationMs, const SvSnapshotArchiveMode archiveMode, bool useConstBaseline, bool useMoreEntities, bool throttleNoBaseline, int snapshotDelayNoDelta)
{
  ?SV_SnapshotMP_InitCounts@@YAXIIIIIIAEBUScriptableInitLimits@@HW4SvSnapshotArchiveMode@@_N22H@Z(packetBackupCount, throttleBackupCount, packetTransientStorageInterval, clientCount, agentCount, scriptedCameraCount, scriptableInitLimits, frameDurationMs, archiveMode, useConstBaseline, useMoreEntities, throttleNoBaseline, snapshotDelayNoDelta);
}

/*
==============
SV_SnapshotMP_ArchiveSnapshotAddToArchive
==============
*/

bool __fastcall SV_SnapshotMP_ArchiveSnapshotAddToArchive(const unsigned __int8 *playerStateEncodeData, const int playerStateEncodeSize, const SVSnapshotArchiveEncodeData *weaponMapEncodeData, const SVSnapshotArchiveEncodeData *worldStateEncodeData)
{
  return ?SV_SnapshotMP_ArchiveSnapshotAddToArchive@@YA_NPEBEHPEBUSVSnapshotArchiveEncodeData@@1@Z(playerStateEncodeData, playerStateEncodeSize, weaponMapEncodeData, worldStateEncodeData);
}

/*
==============
SV_SnapshotMP_GetArchivedPlayerTransform
==============
*/

bool __fastcall SV_SnapshotMP_GetArchivedPlayerTransform(const int clientNum, const int archiveFrameNum, const serverArchive_t *const archive, vec3_t *outOrigin, vec3_t *outAngles)
{
  return ?SV_SnapshotMP_GetArchivedPlayerTransform@@YA_NHHQEBUserverArchive_t@@AEATvec3_t@@1@Z(clientNum, archiveFrameNum, archive, outOrigin, outAngles);
}

/*
==============
ServerEntityHeader::GetTotalBits
==============
*/

int __fastcall ServerEntityHeader::GetTotalBits(ServerEntityHeader *this)
{
  return ?GetTotalBits@ServerEntityHeader@@QEBAHXZ(this);
}

/*
==============
SV_SnapshotMP_InitClientSnapshotInfo
==============
*/

void __fastcall SV_SnapshotMP_InitClientSnapshotInfo(SvClientMP *client, ClientSnapshotInfo *outSnapInfo)
{
  ?SV_SnapshotMP_InitClientSnapshotInfo@@YAXPEAVSvClientMP@@PEAUClientSnapshotInfo@@@Z(client, outSnapInfo);
}

/*
==============
SV_SnapshotMP_UpdateFrameDuration
==============
*/

void __fastcall SV_SnapshotMP_UpdateFrameDuration(int frameDurationMs)
{
  ?SV_SnapshotMP_UpdateFrameDuration@@YAXH@Z(frameDurationMs);
}

/*
==============
SV_SnapshotMP_TransmissionError
==============
*/

void __fastcall SV_SnapshotMP_TransmissionError(SvClientMP *client, int sendError)
{
  ?SV_SnapshotMP_TransmissionError@@YAXPEAVSvClientMP@@H@Z(client, sendError);
}

/*
==============
SV_SnapshotMP_ShouldGenerateSnapshotForClient
==============
*/

bool __fastcall SV_SnapshotMP_ShouldGenerateSnapshotForClient(const SvClientMP *client)
{
  return ?SV_SnapshotMP_ShouldGenerateSnapshotForClient@@YA_NPEBVSvClientMP@@@Z(client);
}

/*
==============
SV_SnapshotMP_AssignBaselineIndices
==============
*/

void __fastcall SV_SnapshotMP_AssignBaselineIndices(SvSnapshotEntries *const entries)
{
  ?SV_SnapshotMP_AssignBaselineIndices@@YAXQEAVSvSnapshotEntries@@@Z(entries);
}

/*
==============
SvSnapshotEntries::GetStorageBuffer
==============
*/

SvSnapshotFrameBuffers *__fastcall SvSnapshotEntries::GetStorageBuffer(SvSnapshotEntries *this)
{
  return ?GetStorageBuffer@SvSnapshotEntries@@QEBAPEAVSvSnapshotFrameBuffers@@XZ(this);
}

/*
==============
SV_SnapshotMP_GetEntityClientsCanSeeCount
==============
*/

unsigned int __fastcall SV_SnapshotMP_GetEntityClientsCanSeeCount(unsigned int *outHighestClientVisibleCount)
{
  return ?SV_SnapshotMP_GetEntityClientsCanSeeCount@@YAIPEAI@Z(outHighestClientVisibleCount);
}

/*
==============
SV_SnapshotMP_BeginClientSnapshot
==============
*/

void __fastcall SV_SnapshotMP_BeginClientSnapshot(const ClientSnapshotInfo *clientSnapInfo, msg_t *msg, unsigned __int8 *snapshotMsgBuf)
{
  ?SV_SnapshotMP_BeginClientSnapshot@@YAXPEBUClientSnapshotInfo@@PEAUmsg_t@@QEAE@Z(clientSnapInfo, msg, snapshotMsgBuf);
}

/*
==============
SvSnapshotFrameBuffers::CheckOverflow
==============
*/

bool __fastcall SvSnapshotFrameBuffers::CheckOverflow(SvSnapshotFrameBuffers *this)
{
  return ?CheckOverflow@SvSnapshotFrameBuffers@@QEBA_NXZ(this);
}

/*
==============
SvSnapshotFrameBuffers::ClearBufferEntries
==============
*/

void __fastcall SvSnapshotFrameBuffers::ClearBufferEntries(SvSnapshotFrameBuffers *this)
{
  ?ClearBufferEntries@SvSnapshotFrameBuffers@@QEAAXXZ(this);
}

/*
==============
SV_SnapshotMP_ArchiveSavePOTG
==============
*/

bool __fastcall SV_SnapshotMP_ArchiveSavePOTG(int archiveTimeDelta)
{
  return ?SV_SnapshotMP_ArchiveSavePOTG@@YA_NH@Z(archiveTimeDelta);
}

/*
==============
SvSnapshotFrameBuffers::LoadState
==============
*/

void __fastcall SvSnapshotFrameBuffers::LoadState(SvSnapshotFrameBuffers *this, MemoryFile *memFile)
{
  ?LoadState@SvSnapshotFrameBuffers@@QEAAXPEAUMemoryFile@@@Z(this, memFile);
}

/*
==============
SV_SnapshotMP_EndClientSnapshot
==============
*/

void __fastcall SV_SnapshotMP_EndClientSnapshot(const ClientSnapshotInfo *clientSnapInfo, msg_t *msg, unsigned __int8 *snapshotMsgBuf)
{
  ?SV_SnapshotMP_EndClientSnapshot@@YAXPEBUClientSnapshotInfo@@PEAUmsg_t@@QEAE@Z(clientSnapInfo, msg, snapshotMsgBuf);
}

/*
==============
SV_SnapshotMP_ShouldWriteBlindDelta
==============
*/

bool __fastcall SV_SnapshotMP_ShouldWriteBlindDelta(const SvClientMP *client, const int serverTime, const int deltaMessage, const bool hasAckedBaseline, const SvSnapshotStorageType clientFrameStorageType, int *outDeltaFrame)
{
  return ?SV_SnapshotMP_ShouldWriteBlindDelta@@YA_NPEBVSvClientMP@@HH_NW4SvSnapshotStorageType@@PEAH@Z(client, serverTime, deltaMessage, hasAckedBaseline, clientFrameStorageType, outDeltaFrame);
}

/*
==============
SvSnapshotFrameBuffers::SetCapacity
==============
*/

void __fastcall SvSnapshotFrameBuffers::SetCapacity(SvSnapshotFrameBuffers *this, const SvSnapshotBufferType type, const unsigned int count)
{
  ?SetCapacity@SvSnapshotFrameBuffers@@QEAAXW4SvSnapshotBufferType@@I@Z(this, type, count);
}

/*
==============
SV_SnapshotMP_CheckMaxServerEntitiesReached
==============
*/

bool __fastcall SV_SnapshotMP_CheckMaxServerEntitiesReached(unsigned int inCurrentNumEntities, unsigned int inMaxEntities)
{
  return ?SV_SnapshotMP_CheckMaxServerEntitiesReached@@YA_NII@Z(inCurrentNumEntities, inMaxEntities);
}

/*
==============
SV_SnapshotMP_CheckOverflow
==============
*/

bool __fastcall SV_SnapshotMP_CheckOverflow()
{
  return ?SV_SnapshotMP_CheckOverflow@@YA_NXZ();
}

/*
==============
SV_SnapshotMP_RecordDemoMessage
==============
*/

void __fastcall SV_SnapshotMP_RecordDemoMessage(SvClientMP *client, const ClientSnapshotInfo *snapshotInfo, unsigned __int8 *snapshotMsgBuf)
{
  ?SV_SnapshotMP_RecordDemoMessage@@YAXPEAVSvClientMP@@PEBUClientSnapshotInfo@@QEAE@Z(client, snapshotInfo, snapshotMsgBuf);
}

/*
==============
SV_SnapshotMP_SendMessageToClient
==============
*/

int __fastcall SV_SnapshotMP_SendMessageToClient(SvClientMP *client, const int serverTime, const int packetTime, const bool isClientActive, const bool isClientThrottled, msg_t *msg)
{
  return ?SV_SnapshotMP_SendMessageToClient@@YAHPEAVSvClientMP@@HH_N1PEAUmsg_t@@@Z(client, serverTime, packetTime, isClientActive, isClientThrottled, msg);
}

/*
==============
SvSnapshotFrameBuffers::AllocateBuffers
==============
*/

void __fastcall SvSnapshotFrameBuffers::AllocateBuffers(SvSnapshotFrameBuffers *this, HunkUser *hunkUser, const unsigned __int64 alignment, const unsigned int *snapBufferTypeSizes, const unsigned int snapBufferTypeCount)
{
  ?AllocateBuffers@SvSnapshotFrameBuffers@@QEAAXPEAUHunkUser@@_KPEBII@Z(this, hunkUser, alignment, snapBufferTypeSizes, snapBufferTypeCount);
}

/*
==============
SV_WriteEndOfUmbraGateStateMarker
==============
*/

void __fastcall SV_WriteEndOfUmbraGateStateMarker(msg_t *msg)
{
  ?SV_WriteEndOfUmbraGateStateMarker@@YAXPEAUmsg_t@@@Z(msg);
}

/*
==============
ServerEntityHeader::Read
==============
*/

const ServerEntityHeader *__fastcall ServerEntityHeader::Read(msg_t *const msg)
{
  return ?Read@ServerEntityHeader@@SAPEBU1@QEAUmsg_t@@@Z(msg);
}

/*
==============
SV_SnapshotMP_ArchiveGetPOTGStartTime
==============
*/

int __fastcall SV_SnapshotMP_ArchiveGetPOTGStartTime()
{
  return ?SV_SnapshotMP_ArchiveGetPOTGStartTime@@YAHXZ();
}

/*
==============
SV_SnapshotMP_ResetServerSnapshots
==============
*/

void SV_SnapshotMP_ResetServerSnapshots(void)
{
  ?SV_SnapshotMP_ResetServerSnapshots@@YAXXZ();
}

/*
==============
SvSnapshotFrameBuffers::ShutdownBuffers
==============
*/

void __fastcall SvSnapshotFrameBuffers::ShutdownBuffers(SvSnapshotFrameBuffers *this)
{
  ?ShutdownBuffers@SvSnapshotFrameBuffers@@QEAAXXZ(this);
}

/*
==============
SvWriteSnapshotResult::InitFromClient
==============
*/

void __fastcall SvWriteSnapshotResult::InitFromClient(SvWriteSnapshotResult *this, const SvClientMP *client)
{
  ?InitFromClient@SvWriteSnapshotResult@@QEAAXPEBVSvClientMP@@@Z(this, client);
}

/*
==============
SV_LogBandwidthEvent
==============
*/

void __fastcall SV_LogBandwidthEvent(BandwidthMonitoringEventTypes AnEventType, SvClientMP *client, const int serverTime)
{
  ?SV_LogBandwidthEvent@@YAXW4BandwidthMonitoringEventTypes@@PEAVSvClientMP@@H@Z(AnEventType, client, serverTime);
}

/*
==============
SV_SnapshotMP_CleanupClient
==============
*/

void __fastcall SV_SnapshotMP_CleanupClient(int clientNum)
{
  ?SV_SnapshotMP_CleanupClient@@YAXH@Z(clientNum);
}

/*
==============
SV_SnapshotMP_GetNewEntityLoD
==============
*/

NetFieldLoD __fastcall SV_SnapshotMP_GetNewEntityLoD(const SnapshotInfo *const snapInfo, const int entityNum)
{
  return ?SV_SnapshotMP_GetNewEntityLoD@@YA?AW4NetFieldLoD@@QEBUSnapshotInfo@@H@Z(snapInfo, entityNum);
}

/*
==============
SV_SnapshotMP_FindClientDeltaSnapshot
==============
*/

const clientSnapshot_t *__fastcall SV_SnapshotMP_FindClientDeltaSnapshot(const int clientIndex, const int deltaMessage, const SvClientConnectionState connState, const bool hasAckedBaseline, const clientSnapshot_t *toFrame, BandwidthMonitoringEventTypes *outDeltaType)
{
  return ?SV_SnapshotMP_FindClientDeltaSnapshot@@YAPEBUclientSnapshot_t@@HHW4SvClientConnectionState@@_NPEBU1@PEAW4BandwidthMonitoringEventTypes@@@Z(clientIndex, deltaMessage, connState, hasAckedBaseline, toFrame, outDeltaType);
}

/*
==============
SV_SnapshotMP_CanClientsSeeEntity
==============
*/

bool __fastcall SV_SnapshotMP_CanClientsSeeEntity(const gentity_s *ent)
{
  return ?SV_SnapshotMP_CanClientsSeeEntity@@YA_NPEBUgentity_s@@@Z(ent);
}

/*
==============
SV_UpdateEntityCountLogging
==============
*/

void __fastcall SV_UpdateEntityCountLogging(unsigned int entityCount)
{
  ?SV_UpdateEntityCountLogging@@YAXI@Z(entityCount);
}

/*
==============
GetEntityLoD
==============
*/

NetFieldLoD __fastcall GetEntityLoD(const EntityLoDs *const entitiesLoD, const int entityNum)
{
  return ?GetEntityLoD@@YA?AW4NetFieldLoD@@QEBUEntityLoDs@@H@Z(entitiesLoD, entityNum);
}

/*
==============
SV_SnapshotMP_WriteServerMessage
==============
*/

bool __fastcall SV_SnapshotMP_WriteServerMessage(const SvSnapshotDelta *snapDelta, const SvSnapshotEntries *oldEntries, const SvSnapshotEntries *newEntries, const unsigned int bufferIndex, unsigned int *outMessageSize)
{
  return ?SV_SnapshotMP_WriteServerMessage@@YA_NAEBUSvSnapshotDelta@@AEBVSvSnapshotEntries@@1IAEAI@Z(snapDelta, oldEntries, newEntries, bufferIndex, outMessageSize);
}

/*
==============
SV_FinalizeNetworkHealthMonitoring
==============
*/

void SV_FinalizeNetworkHealthMonitoring(void)
{
  ?SV_FinalizeNetworkHealthMonitoring@@YAXXZ();
}

/*
==============
SV_SnapshotMP_InitRuntime
==============
*/

void SV_SnapshotMP_InitRuntime(void)
{
  ?SV_SnapshotMP_InitRuntime@@YAXXZ();
}

/*
==============
SV_SnapshotMP_GetArchiveBuffer
==============
*/

unsigned __int8 *__fastcall SV_SnapshotMP_GetArchiveBuffer(unsigned int *outSize)
{
  return ?SV_SnapshotMP_GetArchiveBuffer@@YAPEAEPEAI@Z(outSize);
}

/*
==============
SV_SnapshotMP_IsClientThrottled
==============
*/

bool __fastcall SV_SnapshotMP_IsClientThrottled(const SvClientMP *const client)
{
  return ?SV_SnapshotMP_IsClientThrottled@@YA_NQEBVSvClientMP@@@Z(client);
}

/*
==============
SV_SnapshotMP_GetRemoteClientSendDelay
==============
*/

int __fastcall SV_SnapshotMP_GetRemoteClientSendDelay()
{
  return ?SV_SnapshotMP_GetRemoteClientSendDelay@@YAHXZ();
}

/*
==============
SV_SnapshotMP_ShutdownMemory
==============
*/

void SV_SnapshotMP_ShutdownMemory(void)
{
  ?SV_SnapshotMP_ShutdownMemory@@YAXXZ();
}

/*
==============
SV_SnapshotMP_ArchiveGetPOTGDuration
==============
*/

int __fastcall SV_SnapshotMP_ArchiveGetPOTGDuration()
{
  return ?SV_SnapshotMP_ArchiveGetPOTGDuration@@YAHXZ();
}

/*
==============
SvSnapshotFrameBuffers::SaveState
==============
*/

void __fastcall SvSnapshotFrameBuffers::SaveState(SvSnapshotFrameBuffers *this, MemoryFile *memFile)
{
  ?SaveState@SvSnapshotFrameBuffers@@QEBAXPEAUMemoryFile@@@Z(this, memFile);
}

/*
==============
SV_SnapshotMP_CopyArchivedPlayerTransforms
==============
*/

void __fastcall SV_SnapshotMP_CopyArchivedPlayerTransforms(serverArchive_t *const dstArchive, const int dstFrameIndex, const serverArchive_t *const srcArchive, const int srcFrameIndex)
{
  ?SV_SnapshotMP_CopyArchivedPlayerTransforms@@YAXQEAUserverArchive_t@@HQEBU1@H@Z(dstArchive, dstFrameIndex, srcArchive, srcFrameIndex);
}

/*
==============
SV_SnapshotMP_GetOldEntityLoD
==============
*/

NetFieldLoD __fastcall SV_SnapshotMP_GetOldEntityLoD(const SnapshotInfo *const snapInfo, const int entityNum)
{
  return ?SV_SnapshotMP_GetOldEntityLoD@@YA?AW4NetFieldLoD@@QEBUSnapshotInfo@@H@Z(snapInfo, entityNum);
}

/*
==============
SvSnapshotFrameBuffers::GetBufferEntryAtIndex
==============
*/

unsigned __int8 *__fastcall SvSnapshotFrameBuffers::GetBufferEntryAtIndex(SvSnapshotFrameBuffers *this, const SvSnapshotBufferType type, const __int64 index)
{
  return ?GetBufferEntryAtIndex@SvSnapshotFrameBuffers@@QEBAPEAEW4SvSnapshotBufferType@@_J@Z(this, type, index);
}

/*
==============
SV_SnapshotMP_WriteSnapshotToClient
==============
*/

void __fastcall SV_SnapshotMP_WriteSnapshotToClient(ClientSnapshotInfo *clientSnapInfo, const bool writeFullSnap, msg_t *msg, SvWriteSnapshotResult *outResult)
{
  ?SV_SnapshotMP_WriteSnapshotToClient@@YAXPEAUClientSnapshotInfo@@_NPEAUmsg_t@@PEAUSvWriteSnapshotResult@@@Z(clientSnapInfo, writeFullSnap, msg, outResult);
}

/*
==============
SV_SnapshotMP_UpdateDeltaMessageSequence
==============
*/

int __fastcall SV_SnapshotMP_UpdateDeltaMessageSequence(const SvClientMP *client, const int originalDeltaSequence, const bool isBlindDelta, const bool printErrors)
{
  return ?SV_SnapshotMP_UpdateDeltaMessageSequence@@YAHPEBVSvClientMP@@H_N1@Z(client, originalDeltaSequence, isBlindDelta, printErrors);
}

/*
==============
SvWriteSnapshotResult::CopyToClient
==============
*/

void __fastcall SvWriteSnapshotResult::CopyToClient(SvWriteSnapshotResult *this, SvClientMP *client)
{
  ?CopyToClient@SvWriteSnapshotResult@@QEBAXPEAVSvClientMP@@@Z(this, client);
}

/*
==============
SV_SnapshotMP_SaveState
==============
*/

void __fastcall SV_SnapshotMP_SaveState(MemoryFile *memFile)
{
  ?SV_SnapshotMP_SaveState@@YAXPEAUMemoryFile@@@Z(memFile);
}

/*
==============
SV_ResetServerBlackboardMonitoringData
==============
*/

void SV_ResetServerBlackboardMonitoringData(void)
{
  ?SV_ResetServerBlackboardMonitoringData@@YAXXZ();
}

/*
==============
ServerEntityHeader::TrackNumFieldsSkipped
==============
*/

void __fastcall ServerEntityHeader::TrackNumFieldsSkipped(ServerEntityHeader *this, const int fieldsSkipped)
{
  ?TrackNumFieldsSkipped@ServerEntityHeader@@QEAAXH@Z(this, fieldsSkipped);
}

/*
==============
SV_SnapshotMP_ClearArchivedPlayerTransforms
==============
*/

void __fastcall SV_SnapshotMP_ClearArchivedPlayerTransforms(const int archiveFrameNum, serverArchive_t *const archive)
{
  ?SV_SnapshotMP_ClearArchivedPlayerTransforms@@YAXHQEAUserverArchive_t@@@Z(archiveFrameNum, archive);
}

/*
==============
SV_SnapshotMP_GetEntityCountLimits
==============
*/

void __fastcall SV_SnapshotMP_GetEntityCountLimits(unsigned int *outMaxSnapshotEntityCount, unsigned int *outMaxPerClientSnapshotEntityCount)
{
  ?SV_SnapshotMP_GetEntityCountLimits@@YAXPEAI0@Z(outMaxSnapshotEntityCount, outMaxPerClientSnapshotEntityCount);
}

/*
==============
SV_SnapshotMP_Shutdown
==============
*/

void SV_SnapshotMP_Shutdown(void)
{
  ?SV_SnapshotMP_Shutdown@@YAXXZ();
}

/*
==============
SV_SnapshotMP_GetMemorySize
==============
*/

unsigned int __fastcall SV_SnapshotMP_GetMemorySize(unsigned int packetBackupCount, unsigned int packetTransientStorageInterval, unsigned int clientCount, unsigned int agentCount, const ScriptableInitLimits *scriptableInitLimits, int frameDurationMs, const SvSnapshotArchiveMode archiveMode, bool useMoreEntities)
{
  return ?SV_SnapshotMP_GetMemorySize@@YAIIIIIAEBUScriptableInitLimits@@HW4SvSnapshotArchiveMode@@_N@Z(packetBackupCount, packetTransientStorageInterval, clientCount, agentCount, scriptableInitLimits, frameDurationMs, archiveMode, useMoreEntities);
}

/*
==============
SV_SnapshotMP_UpdateServerCommandsToClient
==============
*/

void __fastcall SV_SnapshotMP_UpdateServerCommandsToClient(const SvClientMP *client, msg_t *msg, const int reliableAcknowledge, const int reliableSequence)
{
  ?SV_SnapshotMP_UpdateServerCommandsToClient@@YAXPEBVSvClientMP@@PEAUmsg_t@@HH@Z(client, msg, reliableAcknowledge, reliableSequence);
}

/*
==============
SV_SnapshotMP_LoadState
==============
*/

void __fastcall SV_SnapshotMP_LoadState(MemoryFile *memFile)
{
  ?SV_SnapshotMP_LoadState@@YAXPEAUMemoryFile@@@Z(memFile);
}

/*
==============
SV_LogBandwidthEvent_GameClient
==============
*/

void __fastcall SV_LogBandwidthEvent_GameClient(BandwidthMonitoringEventTypes AnEventType, gclient_s *client)
{
  ?SV_LogBandwidthEvent_GameClient@@YAXW4BandwidthMonitoringEventTypes@@PEAUgclient_s@@@Z(AnEventType, client);
}

/*
==============
SV_SnapshotMP_GetNetchanTelemetry
==============
*/

NetchanTelemetry *__fastcall SV_SnapshotMP_GetNetchanTelemetry()
{
  return ?SV_SnapshotMP_GetNetchanTelemetry@@YAPEAVNetchanTelemetry@@XZ();
}

/*
==============
ServerEntityHeader::Write
==============
*/

ServerEntityHeader *__fastcall ServerEntityHeader::Write(msg_t *const msg)
{
  return ?Write@ServerEntityHeader@@SAPEAU1@QEAUmsg_t@@@Z(msg);
}

/*
==============
SV_SnapshotMP_SetArchivedPlayerTransform
==============
*/

bool __fastcall SV_SnapshotMP_SetArchivedPlayerTransform(const int clientNum, const int archiveFrameNum, serverArchive_t *const archive, const vec3_t *origin, const vec3_t *angles)
{
  return ?SV_SnapshotMP_SetArchivedPlayerTransform@@YA_NHHQEAUserverArchive_t@@AEBTvec3_t@@1@Z(clientNum, archiveFrameNum, archive, origin, angles);
}

/*
==============
SV_SnapshotMP_InitMemory
==============
*/

void __fastcall SV_SnapshotMP_InitMemory(HunkUser *hunkUser)
{
  ?SV_SnapshotMP_InitMemory@@YAXPEAUHunkUser@@@Z(hunkUser);
}

/*
==============
SvSnapshotFrameBuffers::AllocateBuffers
==============
*/
void SvSnapshotFrameBuffers::AllocateBuffers(SvSnapshotFrameBuffers *this, HunkUser *hunkUser, const unsigned __int64 alignment, const unsigned int *snapBufferTypeSizes, const unsigned int snapBufferTypeCount)
{
  SvSnapshotBufferType v9; 
  int *m_numBufferEntries; 
  unsigned int AllocationSize; 
  unsigned __int8 *v12; 
  __int64 v13; 

  if ( !snapBufferTypeSizes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 475, ASSERT_TYPE_ASSERT, "( snapBufferTypeSizes )", (const char *)&queryFormat, "snapBufferTypeSizes") )
    __debugbreak();
  if ( snapBufferTypeCount != 10 )
  {
    LODWORD(v13) = snapBufferTypeCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 476, ASSERT_TYPE_ASSERT, "( snapBufferTypeCount ) == ( ( sizeof( *array_counter( m_bufferData ) ) + 0 ) )", "snapBufferTypeCount == ARRAY_COUNT( m_bufferData )\n\t%i, %i", v13, 10) )
      __debugbreak();
  }
  v9 = MOVEMENT;
  m_numBufferEntries = this->m_numBufferEntries;
  do
  {
    if ( this->m_bufferData[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 482, ASSERT_TYPE_ASSERT, "( m_bufferData[typeIndex] == nullptr )", (const char *)&queryFormat, "m_bufferData[typeIndex] == nullptr") )
      __debugbreak();
    if ( *m_numBufferEntries <= 0 )
    {
      v12 = NULL;
    }
    else
    {
      AllocationSize = SV_SnapshotMP_GetAllocationSize(snapBufferTypeSizes, snapBufferTypeCount, v9, *m_numBufferEntries);
      v12 = (unsigned __int8 *)SV_SnapshotMP_HunkUser_Alloc(hunkUser, AllocationSize, alignment);
    }
    this->m_bufferData[0] = v12;
    ++v9;
    this = (SvSnapshotFrameBuffers *)((char *)this + 8);
    ++m_numBufferEntries;
  }
  while ( (unsigned int)v9 < 0xA );
}

/*
==============
SvSnapshotFrameBuffers::CheckOverflow
==============
*/
char SvSnapshotFrameBuffers::CheckOverflow(SvSnapshotFrameBuffers *this)
{
  __int64 v1; 
  __int64 *m_nextBufferIndex; 
  int *i; 

  v1 = 0i64;
  m_nextBufferIndex = this->m_nextBufferIndex;
  for ( i = this->m_numBufferEntries; *m_nextBufferIndex < 0x7FFFFFFFFFFFFFFEi64 - *i; ++i )
  {
    v1 = (unsigned int)(v1 + 1);
    ++m_nextBufferIndex;
    if ( (unsigned int)v1 >= 0xA )
      return 0;
  }
  Com_PrintError(15, "[Snapshot] SvSnapshotFrameBuffers::CheckOverflow: Type %d\n", v1);
  return 1;
}

/*
==============
SvSnapshotFrameBuffers::ClearBufferEntries
==============
*/
void SvSnapshotFrameBuffers::ClearBufferEntries(SvSnapshotFrameBuffers *this)
{
  memset_0(this->m_nextBufferIndex, 0, sizeof(this->m_nextBufferIndex));
}

/*
==============
SvWriteSnapshotResult::CopyToClient
==============
*/
void SvWriteSnapshotResult::CopyToClient(SvWriteSnapshotResult *this, SvClientMP *client)
{
  bool v4; 
  bool v5; 
  int outgoingSequence; 
  const SvClientFrameInfo *FrameInfoForSequenceConst; 

  if ( !client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 5018, ASSERT_TYPE_ASSERT, "( client )", (const char *)&queryFormat, "client") )
    __debugbreak();
  v4 = !client->buildMessageFailed;
  client->noDeltaSequence = this->noDeltaSequence;
  client->sendAsActive = this->sendAsActive;
  client->addEntitiesFailed = this->addEntitiesFailed;
  v5 = !v4 || this->buildMessageFailed;
  outgoingSequence = client->netchan.outgoingSequence;
  client->buildMessageFailed = v5;
  FrameInfoForSequenceConst = SvClientMP::GetFrameInfoForSequenceConst(client, outgoingSequence);
  if ( FrameInfoForSequenceConst->snapshotClientStorageType == FULL )
    SvClientMP::UpdateSnapshotEncodingOutput(client, FrameInfoForSequenceConst->snapshotIndex, &this->clientSnapEncodingOutput);
}

/*
==============
SvSnapshotFrameBuffers::GetBufferEntryAtIndex
==============
*/
unsigned __int8 *SvSnapshotFrameBuffers::GetBufferEntryAtIndex(SvSnapshotFrameBuffers *this, const SvSnapshotBufferType type, const __int64 index)
{
  __int64 v3; 
  __int64 v7; 
  __int64 v9; 
  __int64 v10; 
  int v11; 
  __int64 v12; 

  v3 = type;
  if ( (unsigned int)type >= 0xA )
  {
    v11 = 10;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 530, ASSERT_TYPE_ASSERT, "(unsigned)( typeIndex ) < (unsigned)( ( sizeof( *array_counter( g_svSnapshotData.snapBufferSizes ) ) + 0 ) )", "typeIndex doesn't index ARRAY_COUNT( g_svSnapshotData.snapBufferSizes )\n\t%i not in [0, %i)", type, v11) )
      __debugbreak();
    LODWORD(v12) = 10;
    LODWORD(v9) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 531, ASSERT_TYPE_ASSERT, "(unsigned)( typeIndex ) < (unsigned)( ( sizeof( *array_counter( m_bufferData ) ) + 0 ) )", "typeIndex doesn't index ARRAY_COUNT( m_bufferData )\n\t%i not in [0, %i)", v9, v12) )
      __debugbreak();
  }
  if ( !this->m_bufferData[v3] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 532, ASSERT_TYPE_ASSERT, "( m_bufferData[typeIndex] != nullptr )", (const char *)&queryFormat, "m_bufferData[typeIndex] != nullptr") )
    __debugbreak();
  if ( !this->m_numBufferEntries[v3] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 533, ASSERT_TYPE_ASSERT, "( m_numBufferEntries[typeIndex] != 0 )", (const char *)&queryFormat, "m_numBufferEntries[typeIndex] != 0") )
    __debugbreak();
  if ( (unsigned int)v3 >= 0xA )
  {
    LODWORD(v10) = 10;
    LODWORD(v7) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp_types.h", 265, ASSERT_TYPE_ASSERT, "(unsigned)( typeIndex ) < (unsigned)( SNAP_TYPE_COUNT )", "typeIndex doesn't index SNAP_TYPE_COUNT\n\t%i not in [0, %i)", v7, v10) )
      __debugbreak();
  }
  if ( index < this->m_nextBufferIndex[v3] - this->m_numBufferEntries[v3] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 534, ASSERT_TYPE_ASSERT, "( IsValidIndex( type, index ) )", (const char *)&queryFormat, "IsValidIndex( type, index )") )
    __debugbreak();
  if ( !g_svSnapshotData.snapBufferSizes[v3] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 535, ASSERT_TYPE_ASSERT, "( g_svSnapshotData.snapBufferSizes[typeIndex] > 0 )", (const char *)&queryFormat, "g_svSnapshotData.snapBufferSizes[typeIndex] > 0") )
    __debugbreak();
  return &this->m_bufferData[v3][(int)(g_svSnapshotData.snapBufferSizes[v3] * (index % this->m_numBufferEntries[v3]))];
}

/*
==============
GetEntityLoD
==============
*/
_BOOL8 GetEntityLoD(const EntityLoDs *const entitiesLoD, const int entityNum)
{
  unsigned __int64 v2; 
  __int64 v5; 

  v2 = (unsigned int)entityNum;
  if ( !entitiesLoD && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 6067, ASSERT_TYPE_ASSERT, "(entitiesLoD != nullptr)", (const char *)&queryFormat, "entitiesLoD != nullptr") )
    __debugbreak();
  if ( (unsigned int)v2 >= 0x800 )
  {
    LODWORD(v5) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v5, 2048) )
      __debugbreak();
  }
  return ((0x80000000 >> (v2 & 0x1F)) & entitiesLoD->array[v2 >> 5]) != 0;
}

/*
==============
SvSnapshotEntries::GetStorageBuffer
==============
*/
SvSnapshotFrameBuffers *SvSnapshotEntries::GetStorageBuffer(SvSnapshotEntries *this)
{
  int m_storageType; 

  m_storageType = (unsigned __int8)this->m_storageType;
  if ( m_storageType == 1 )
    return &g_svSnapshotData.transientBuffers;
  if ( (_BYTE)m_storageType )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 337, ASSERT_TYPE_ASSERT, "( m_storageType ) == ( SvSnapshotStorageType::FULL )", "m_storageType == SvSnapshotStorageType::FULL\n\t%i, %i", (unsigned __int8)this->m_storageType, 0i64) )
      __debugbreak();
  }
  return &g_svSnapshotData.fullBuffers;
}

/*
==============
ServerEntityHeader::GetTotalBits
==============
*/
__int64 ServerEntityHeader::GetTotalBits(ServerEntityHeader *this)
{
  return this->m_totalBits[1];
}

/*
==============
SvSnapshotEntries::HasValidEntries
==============
*/
char SvSnapshotEntries::HasValidEntries(SvSnapshotEntries *this, bool debugPrint)
{
  unsigned int *m_count; 
  __int64 *m_first; 
  SvSnapshotFrameBuffers *StorageBuffer; 
  __int64 v6; 
  int *v7; 
  char *fmt; 
  __int64 v10; 

  m_count = this->m_count;
  m_first = this->m_first;
  StorageBuffer = SvSnapshotEntries::GetStorageBuffer(this);
  v6 = 0i64;
  while ( !*m_count )
  {
LABEL_7:
    v6 = (unsigned int)(v6 + 1);
    ++m_count;
    ++m_first;
    if ( (unsigned int)v6 >= 0xA )
      return 1;
  }
  v7 = &StorageBuffer->m_numBufferEntries[(int)v6];
  if ( *m_first >= StorageBuffer->m_nextBufferIndex[(int)v6] - *v7 )
  {
    if ( *m_count + *m_first - 1 < StorageBuffer->m_nextBufferIndex[(int)v6] - *v7 )
    {
      LODWORD(v10) = *m_count;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 369, ASSERT_TYPE_ASSERT, "( ( frameBuffers->IsValidIndex( static_cast<SvSnapshotBufferType>( entryTypeIndex ), m_first[entryTypeIndex] + m_count[entryTypeIndex] - 1 ) ) )", "%s\n\t( m_count[entryTypeIndex] ) = %i", "( frameBuffers->IsValidIndex( static_cast<SvSnapshotBufferType>( entryTypeIndex ), m_first[entryTypeIndex] + m_count[entryTypeIndex] - 1 ) )", v10) )
        __debugbreak();
    }
    goto LABEL_7;
  }
  if ( debugPrint )
  {
    LODWORD(fmt) = (unsigned __int8)this->m_storageType;
    Com_Printf(15, "[Snapshot] SvSnapshotEntries::HasValidEntries: Wrapped type %i with index %zi (Storage %i).\n", (unsigned int)v6, this->m_first[v6], fmt);
  }
  return 0;
}

/*
==============
SvWriteSnapshotResult::InitFromClient
==============
*/
void SvWriteSnapshotResult::InitFromClient(SvWriteSnapshotResult *this, const SvClientMP *client)
{
  if ( !client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 5005, ASSERT_TYPE_ASSERT, "( client )", (const char *)&queryFormat, "client") )
    __debugbreak();
  this->noDeltaSequence = client->noDeltaSequence;
  this->sendAsActive = client->sendAsActive != 0;
  this->addEntitiesFailed = client->addEntitiesFailed;
  this->buildMessageFailed = client->buildMessageFailed;
  this->currentPacketBuiltEvent = 0;
  memset_0(&this->clientSnapEncodingOutput, 0, sizeof(this->clientSnapEncodingOutput));
}

/*
==============
SvSnapshotFrameBuffers::LoadState
==============
*/
void SvSnapshotFrameBuffers::LoadState(SvSnapshotFrameBuffers *this, MemoryFile *memFile)
{
  int *m_numBufferEntries; 
  __int64 *m_nextBufferIndex; 
  __int64 v5; 
  int v6; 
  __int64 p; 

  m_numBufferEntries = this->m_numBufferEntries;
  m_nextBufferIndex = this->m_nextBufferIndex;
  v5 = 10i64;
  do
  {
    MemFile_ReadData(memFile, 8ui64, &p);
    *m_nextBufferIndex = p;
    MemFile_ReadData(memFile, 4ui64, &v6);
    ++m_nextBufferIndex;
    *m_numBufferEntries++ = v6;
    --v5;
  }
  while ( v5 );
}

/*
==============
ServerEntityHeader::Read
==============
*/
const ServerEntityHeader *ServerEntityHeader::Read(msg_t *const msg)
{
  unsigned __int8 *v2; 
  int v3; 
  const ServerEntityHeader *result; 

  if ( !msg && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 6210, ASSERT_TYPE_ASSERT, "( msg != nullptr )", (const char *)&queryFormat, "msg != nullptr") )
    __debugbreak();
  if ( msg->splitData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 6212, ASSERT_TYPE_ASSERT, "( msg->splitData == nullptr )", (const char *)&queryFormat, "msg->splitData == nullptr") )
    __debugbreak();
  v2 = &msg->data[msg->readcount];
  v3 = msg->readcount + 80;
  msg->readcount = v3;
  msg->bit = 8 * v3;
  if ( v3 <= msg->cursize )
    return (const ServerEntityHeader *)v2;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 6224, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Could not read entity header from message -- overflow\n") )
    __debugbreak();
  msg->readcount = msg->cursize;
  result = NULL;
  msg->overflowed = 1;
  return result;
}

/*
==============
SV_CompressBuffer
==============
*/
_BOOL8 SV_CompressBuffer(bool trainHuffman, msg_t *msg, unsigned __int8 *to, const int toSize, int *outCompressedSize)
{
  unsigned __int8 *v8; 
  unsigned __int8 *data; 
  unsigned int v10; 
  const dvar_t *v11; 
  unsigned __int8 v12; 
  unsigned int v13; 
  unsigned int v14; 
  int v15; 
  int *v16; 
  bool v17; 
  int *outCurSize; 
  __int64 v20; 

  if ( !msg && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 5317, ASSERT_TYPE_ASSERT, "( msg )", (const char *)&queryFormat, "msg") )
    __debugbreak();
  if ( msg->cursize < 4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 5318, ASSERT_TYPE_ASSERT, "( msg->cursize >= 4 )", (const char *)&queryFormat, "msg->cursize >= SV_ENCODE_START") )
    __debugbreak();
  if ( !to && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 5319, ASSERT_TYPE_ASSERT, "( to )", (const char *)&queryFormat, "to") )
    __debugbreak();
  if ( toSize < msg->cursize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 5320, ASSERT_TYPE_ASSERT, "( toSize >= msg->cursize )", (const char *)&queryFormat, "toSize >= msg->cursize") )
    __debugbreak();
  v8 = to + 4;
  *(_DWORD *)to = *(_DWORD *)msg->data;
  data = msg->data;
  v10 = msg->cursize - 4;
  if ( (msg->compressionFlags & 0x80000000) != 0 )
    goto LABEL_19;
  v11 = DCONST_DVARINT_sv_zlib_threshold;
  if ( !DCONST_DVARINT_sv_zlib_threshold && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sv_zlib_threshold") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v11);
  if ( msg->cursize > v11->current.integer )
LABEL_19:
    v12 = 1;
  else
    v12 = 0;
  v13 = v12;
  v14 = (v12 + 1) << 30;
  *(_DWORD *)to |= v14;
  msg->compressionFlags = v14;
  if ( v12 )
  {
    v15 = j_LZ4_compress_fast((const char *)data + 4, (char *)to + 4, v10, toSize - 4, 1);
    v16 = outCompressedSize;
    v17 = v15 > 0;
    *outCompressedSize = v15;
  }
  else
  {
    v16 = outCompressedSize;
    v17 = MSG_WriteBitsCompress(trainHuffman, data + 4, v8, v10, toSize - 4, outCompressedSize);
  }
  if ( v17 )
  {
    *v16 += 4;
    if ( *v16 < 4 || *v16 > toSize )
    {
      LODWORD(v20) = 4;
      LODWORD(outCurSize) = *v16;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 5366, ASSERT_TYPE_ASSERT, "( 4 ) <= ( outCompressedSize ) && ( outCompressedSize ) <= ( toSize )", "outCompressedSize not in [SV_ENCODE_START, toSize]\n\t%i not in [%i, %i]", outCurSize, v20, toSize) )
        __debugbreak();
    }
  }
  else
  {
    Com_PrintWarning(25, "[Snapshot] Failed to compress %u bytes (useLz4 %d)\n", v10, v13);
  }
  return v17;
}

/*
==============
SV_EmitPacketMLGSpectatorInfo
==============
*/
void SV_EmitPacketMLGSpectatorInfo(SnapshotInfo *snapInfo, msg_t *msg, const clientSnapshot_t *oldframe, const clientSnapshot_t *frame)
{
  int mlgSpectatorInfoCount; 
  int i; 
  const MLGSpectatorClientInfo *v10; 
  __int64 v11; 
  __int64 v12; 
  __int64 v13; 

  if ( !frame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 3634, ASSERT_TYPE_ASSERT, "( frame )", (const char *)&queryFormat, "frame") )
    __debugbreak();
  if ( !g_svSnapshotData.mlgSpectatorClientInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 3635, ASSERT_TYPE_ASSERT, "( g_svSnapshotData.mlgSpectatorClientInfo )", (const char *)&queryFormat, "g_svSnapshotData.mlgSpectatorClientInfo") )
    __debugbreak();
  if ( oldframe && g_svSnapshotData.nextSnapshotMLGSpectatorInfo - oldframe->mlgSpectatorInfoIndex > g_svSnapshotData.numSnapshotMLGSpectatorInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 3639, ASSERT_TYPE_ASSERT, "(oldframe == 0 || g_svSnapshotData.nextSnapshotMLGSpectatorInfo - oldframe->mlgSpectatorInfoIndex <= g_svSnapshotData.numSnapshotMLGSpectatorInfo)", "%s\n\told mlg spectator frame has fallen out of the ringbuffer %d - %d <= %d", "oldframe == NULL || g_svSnapshotData.nextSnapshotMLGSpectatorInfo - oldframe->mlgSpectatorInfoIndex <= g_svSnapshotData.numSnapshotMLGSpectatorInfo", g_svSnapshotData.nextSnapshotMLGSpectatorInfo, oldframe->mlgSpectatorInfoIndex, g_svSnapshotData.numSnapshotMLGSpectatorInfo) )
    __debugbreak();
  if ( g_svSnapshotData.nextSnapshotMLGSpectatorInfo - frame->mlgSpectatorInfoIndex > g_svSnapshotData.numSnapshotMLGSpectatorInfo )
  {
    LODWORD(v13) = g_svSnapshotData.numSnapshotMLGSpectatorInfo;
    LODWORD(v12) = frame->mlgSpectatorInfoIndex;
    LODWORD(v11) = g_svSnapshotData.nextSnapshotMLGSpectatorInfo;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 3645, ASSERT_TYPE_ASSERT, "(g_svSnapshotData.nextSnapshotMLGSpectatorInfo - frame->mlgSpectatorInfoIndex <= g_svSnapshotData.numSnapshotMLGSpectatorInfo)", "%s\n\tnew mlg spectator frame has fallen out of the ringbuffer %d - %d <= %d", "g_svSnapshotData.nextSnapshotMLGSpectatorInfo - frame->mlgSpectatorInfoIndex <= g_svSnapshotData.numSnapshotMLGSpectatorInfo", v11, v12, v13) )
      __debugbreak();
  }
  mlgSpectatorInfoCount = frame->mlgSpectatorInfoCount;
  if ( (mlgSpectatorInfoCount <= -1 || mlgSpectatorInfoCount > (int)SvClient::ms_clientCount) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 3647, ASSERT_TYPE_ASSERT, "( frame->mlgSpectatorInfoCount > -1 && frame->mlgSpectatorInfoCount <= SvClient::GetClientCount() )", (const char *)&queryFormat, "frame->mlgSpectatorInfoCount > -1 && frame->mlgSpectatorInfoCount <= SvClient::GetClientCount()") )
    __debugbreak();
  if ( frame->mlgSpectatorInfoCount )
  {
    MSG_WriteBit1(msg);
    if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 85, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
      __debugbreak();
    if ( !ComCharacterLimits::ms_gameData.m_clientBits && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 86, ASSERT_TYPE_ASSERT, "(ms_gameData.m_clientBits > 0)", (const char *)&queryFormat, "ms_gameData.m_clientBits > 0") )
      __debugbreak();
    MSG_WriteBits(msg, frame->mlgSpectatorInfoCount, ComCharacterLimits::ms_gameData.m_clientBits + 1);
    for ( i = 0; i < frame->mlgSpectatorInfoCount; ++i )
    {
      if ( oldframe && oldframe->mlgSpectatorInfoCount )
        v10 = &g_svSnapshotData.mlgSpectatorClientInfo[(i + oldframe->mlgSpectatorInfoIndex) % g_svSnapshotData.numSnapshotMLGSpectatorInfo];
      else
        v10 = NULL;
      MSG_WriteDeltaMLGSpectatorInfo(snapInfo, msg, snapInfo->serverTime, v10, &g_svSnapshotData.mlgSpectatorClientInfo[(i + frame->mlgSpectatorInfoIndex) % g_svSnapshotData.numSnapshotMLGSpectatorInfo]);
    }
  }
  else
  {
    MSG_WriteBit0(msg);
  }
}

/*
==============
SV_EmitPacketUmbraGateStateData
==============
*/
void SV_EmitPacketUmbraGateStateData(SnapshotInfo *snapInfo, msg_t *msg, const unsigned int from_umbraGatesCount, const __int64 from_umbraGatesFirstIndex, const clientSnapshot_t *oldFrame, const clientSnapshot_t *frame)
{
  int UsedBitCount; 
  bool v11; 
  bitarray<384> *noDeltaUmbraGateStates; 
  SvSnapshotFrameBuffers *StorageBuffer; 
  __int64 v14; 
  bitarray<384> *BufferEntryAtIndex; 
  SvSnapshotFrameBuffers *v16; 
  int v17; 

  if ( !snapInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 3231, ASSERT_TYPE_ASSERT, "( snapInfo )", (const char *)&queryFormat, "snapInfo") )
    __debugbreak();
  if ( !frame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 3232, ASSERT_TYPE_ASSERT, "( frame )", (const char *)&queryFormat, "frame") )
    __debugbreak();
  UsedBitCount = MSG_GetUsedBitCount(msg);
  if ( !comWorld.isInUse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_bsp_api.h", 141, ASSERT_TYPE_ASSERT, "(Com_IsWorldLoaded())", (const char *)&queryFormat, "Com_IsWorldLoaded()") )
    __debugbreak();
  v11 = comWorld.numUmbraGates != 0;
  if ( from_umbraGatesCount )
  {
    if ( from_umbraGatesCount != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 3244, ASSERT_TYPE_ASSERT, "( from_umbraGatesCount == 1 )", (const char *)&queryFormat, "from_umbraGatesCount == 1") )
      __debugbreak();
    if ( from_umbraGatesFirstIndex == 0x7FFFFFFF )
    {
      noDeltaUmbraGateStates = g_svSnapshotData.noDeltaUmbraGateStates;
    }
    else
    {
      if ( !oldFrame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 3253, ASSERT_TYPE_ASSERT, "( oldFrame != nullptr )", (const char *)&queryFormat, "oldFrame != nullptr") )
        __debugbreak();
      StorageBuffer = SvSnapshotEntries::GetStorageBuffer(&oldFrame->serverEntries);
      if ( !StorageBuffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 3256, ASSERT_TYPE_ASSERT, "( oldFrameBuffers )", (const char *)&queryFormat, "oldFrameBuffers") )
        __debugbreak();
      noDeltaUmbraGateStates = (bitarray<384> *)SvSnapshotFrameBuffers::GetBufferEntryAtIndex(StorageBuffer, (const SvSnapshotBufferType)9, from_umbraGatesFirstIndex);
    }
  }
  else
  {
    noDeltaUmbraGateStates = NULL;
  }
  v14 = frame->serverEntries.m_first[9];
  if ( v14 == 0x7FFFFFFF )
  {
    BufferEntryAtIndex = g_svSnapshotData.noDeltaUmbraGateStates;
  }
  else
  {
    v16 = SvSnapshotEntries::GetStorageBuffer(&frame->serverEntries);
    if ( !v16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 3275, ASSERT_TYPE_ASSERT, "( frameBuffers )", (const char *)&queryFormat, "frameBuffers") )
      __debugbreak();
    BufferEntryAtIndex = (bitarray<384> *)SvSnapshotFrameBuffers::GetBufferEntryAtIndex(v16, (const SvSnapshotBufferType)9, v14);
  }
  MSG_WriteDeltaUmbraGateState(msg, noDeltaUmbraGateStates, BufferEntryAtIndex);
  v17 = MSG_GetUsedBitCount(msg);
  SV_BandwidthProfile_AddUmbraGatesdToSnapshot(snapInfo, v17 - UsedBitCount);
  if ( v11 )
    SV_TrackPacketData(snapInfo->clientNum, ANALYZE_SNAPSHOT_UMBRA_GATE_STATES, 0, 0, UsedBitCount, msg);
}

/*
==============
SV_EmitPacketWeapons
==============
*/
void SV_EmitPacketWeapons(SnapshotInfo *snapInfo, const SvClientMP *client, msg_t *msg, const GSnapshotWeaponMap *oldWeapons, const GSnapshotWeaponMap *newWeapons)
{
  SnapshotInfo *v5; 
  unsigned __int16 v9; 
  unsigned __int16 i; 
  unsigned __int16 v11; 
  const WeaponMapEntry *WeaponEntry; 
  unsigned __int16 v13; 
  const WeaponMapEntry *v14; 
  int bitsUsedPrev; 

  v5 = snapInfo;
  bitsUsedPrev = MSG_GetUsedBitCount(msg);
  if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 3097, ASSERT_TYPE_ASSERT, "( snapInfo )", (const char *)&queryFormat, "snapInfo") )
    __debugbreak();
  if ( !client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 3098, ASSERT_TYPE_ASSERT, "( client )", (const char *)&queryFormat, "client") )
    __debugbreak();
  if ( !msg && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 3099, ASSERT_TYPE_ASSERT, "( msg )", (const char *)&queryFormat, "msg") )
    __debugbreak();
  if ( !newWeapons && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 3100, ASSERT_TYPE_ASSERT, "( newWeapons )", (const char *)&queryFormat, "newWeapons") )
    __debugbreak();
  MSG_ClearLastReferencedEntity(msg);
  if ( !BgWeaponMap::ms_runtimeSizeInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_map.h", 228, ASSERT_TYPE_ASSERT, "(ms_runtimeSizeInitialized)", (const char *)&queryFormat, "ms_runtimeSizeInitialized") )
    __debugbreak();
  v9 = BgWeaponMap::ms_runtimeSize;
  for ( i = 1; i < v9; ++i )
  {
    if ( !oldWeapons )
      goto LABEL_29;
    if ( !oldWeapons->m_entries && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_map.h", 161, ASSERT_TYPE_ASSERT, "(m_entries != nullptr)", (const char *)&queryFormat, "m_entries != nullptr") )
      __debugbreak();
    v11 = truncate_cast<unsigned short,unsigned int>(i);
    if ( !BgWeaponMap::ms_runtimeSizeInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_map.h", 228, ASSERT_TYPE_ASSERT, "(ms_runtimeSizeInitialized)", (const char *)&queryFormat, "ms_runtimeSizeInitialized") )
      __debugbreak();
    if ( v11 >= BgWeaponMap::ms_runtimeSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_map.h", 165, ASSERT_TYPE_ASSERT, "(mapEntryIndex < BgWeaponMap::GetRuntimeSize())", "%s\n\tHandle supplied to BgWeaponMap::GetWeapon does not index the map.", "mapEntryIndex < BgWeaponMap::GetRuntimeSize()") )
      __debugbreak();
    if ( oldWeapons->m_entries[v11].index == v11 )
      WeaponEntry = BgWeaponMap::GetWeaponEntry(&oldWeapons->BgWeaponMap, i);
    else
LABEL_29:
      WeaponEntry = NULL;
    if ( !newWeapons->m_entries && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_map.h", 161, ASSERT_TYPE_ASSERT, "(m_entries != nullptr)", (const char *)&queryFormat, "m_entries != nullptr") )
      __debugbreak();
    v13 = truncate_cast<unsigned short,unsigned int>(i);
    if ( !BgWeaponMap::ms_runtimeSizeInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_map.h", 228, ASSERT_TYPE_ASSERT, "(ms_runtimeSizeInitialized)", (const char *)&queryFormat, "ms_runtimeSizeInitialized") )
      __debugbreak();
    if ( v13 >= BgWeaponMap::ms_runtimeSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_map.h", 165, ASSERT_TYPE_ASSERT, "(mapEntryIndex < BgWeaponMap::GetRuntimeSize())", "%s\n\tHandle supplied to BgWeaponMap::GetWeapon does not index the map.", "mapEntryIndex < BgWeaponMap::GetRuntimeSize()") )
      __debugbreak();
    if ( newWeapons->m_entries[v13].index == v13 )
      v14 = BgWeaponMap::GetWeaponEntry(&newWeapons->BgWeaponMap, i);
    else
      v14 = NULL;
    v5 = snapInfo;
    MSG_WriteDeltaWeaponMapEntry(snapInfo, msg, i, WeaponEntry, v14);
  }
  MSG_WriteWeaponMapEntry_Index(msg, v9);
  SV_TrackPacketData(v5->clientNum, ANALYZE_SNAPSHOT_WEAPON_MAP, 0, 0, bitsUsedPrev, msg);
}

/*
==============
SV_FinalizeNetworkHealthMonitoring
==============
*/
void SV_FinalizeNetworkHealthMonitoring(void)
{
  const dvar_t *v0; 
  unsigned int v1; 
  unsigned int v2; 
  unsigned int v3; 
  const char *MapName; 
  const char *GameType; 
  const char *HostName; 
  int ControllerFromClient; 
  unsigned __int64 UserId; 
  bool v9; 
  unsigned int value; 
  unsigned int v11; 
  unsigned int v12; 
  unsigned int v13; 
  unsigned int v14; 
  DLogContext context; 
  char buffer[4096]; 

  if ( !SvPersistentGlobalsMP::GetPersistentGlobalsMP()->frontEndState[0] )
  {
    v0 = DVARBOOL_sv_log_blackbox_snapshot_data;
    if ( !DVARBOOL_sv_log_blackbox_snapshot_data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sv_log_blackbox_snapshot_data") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v0);
    if ( v0->current.enabled )
    {
      v14 = s_entityCountLoggingArray[0];
      v13 = s_entityCountLoggingArray[1];
      v1 = qword_14E945718;
      v12 = qword_14E945708;
      v2 = HIDWORD(qword_14E945710);
      v11 = HIDWORD(qword_14E945708);
      v3 = *(&qword_14E945718 + 1);
      value = qword_14E945710;
      MapName = Party_GetMapName();
      GameType = SV_GameMP_GetGameType();
      HostName = SV_GameMP_GetHostName();
      ControllerFromClient = CL_Mgr_GetControllerFromClient(LOCAL_CLIENT_0);
      UserId = DLog_GetUserId(ControllerFromClient);
      if ( DLog_IsActive() && DLog_CreateContext(&context, UserId, buffer, 4096) && DLog_IsActive() )
      {
        v9 = DLog_BeginEvent(&context, "network_health_monitor");
        context.autoEndEvent = 1;
        if ( v9 && DLog_Int32(&context, "version", 5) && DLog_String(&context, "platform", "xb3", 0) && DLog_String(&context, "hostname", HostName, 0) && DLog_String(&context, "gametype", GameType, 0) && DLog_String(&context, "mapname", MapName, 0) && DLog_Null(&context, "baselinePassedValidityCheck") && DLog_Null(&context, "entitiesInBaseline") && DLog_Null(&context, "baselineBytesDifferentTotal") && DLog_Null(&context, "baselineBytesTotal") && DLog_Null(&context, "baselinePercentageCorrect") && DLog_Null(&context, "baselineFileMissing") && DLog_Null(&context, "deltaFromTwoBehind_count") && DLog_Null(&context, "deltaFromThreeBehind_count") && DLog_Null(&context, "deltaFromFourBehind_count") && DLog_Null(&context, "deltaFromFiveBehind_count") && DLog_Null(&context, "deltaFromSixBehind_count") && DLog_Null(&context, "deltaFromSevenBehind_count") && DLog_UInt32(&context, "ent_over_800", v3) && DLog_UInt32(&context, "ent_over_700", v1) && DLog_UInt32(&context, "ent_over_600", v2) && DLog_UInt32(&context, "ent_over_500", value) && DLog_UInt32(&context, "ent_over_400", v11) && DLog_UInt32(&context, "ent_over_300", v12) && DLog_UInt32(&context, "ent_over_200", v13) && DLog_UInt32(&context, "ent_under_200", v14) )
          DLog_RecordContext(&context);
      }
    }
  }
}

/*
==============
SV_LogBandwidthEvent
==============
*/
void SV_LogBandwidthEvent(BandwidthMonitoringEventTypes AnEventType, SvClientMP *client, const int serverTime)
{
  ;
}

/*
==============
SV_LogBandwidthEvent_GameClient
==============
*/
void SV_LogBandwidthEvent_GameClient(BandwidthMonitoringEventTypes AnEventType, gclient_s *client)
{
  ;
}

/*
==============
SV_ResetServerBlackboardMonitoringData
==============
*/
void SV_ResetServerBlackboardMonitoringData(void)
{
  *(_DWORD *)&g_serverEvents.baselineTruncated_MaxSnapshotLimitReachedCount = 0;
  g_serverEvents.scriptErrorOccurredOnHostCount = 0;
  *(_QWORD *)s_entityCountLoggingArray = 0i64;
  qword_14E945708 = 0i64;
  qword_14E945710 = 0i64;
  *(_QWORD *)&qword_14E945718 = 0i64;
}

/*
==============
SV_SnapshotMP_AddArchiveSnapshot_CopyBuffer
==============
*/
__int64 SV_SnapshotMP_AddArchiveSnapshot_CopyBuffer(const int archiveBufferOffset, const int archiveBufferPartialSize, const unsigned __int8 *msgData, const int msgDataSize)
{
  __int64 v6; 
  unsigned __int8 *v7; 
  unsigned int v10; 

  v6 = archiveBufferPartialSize;
  v7 = &g_svSnapshotData.archive.archivedSnapshotBuffer[archiveBufferOffset];
  if ( msgDataSize > archiveBufferPartialSize )
  {
    memcpy_0(v7, msgData, archiveBufferPartialSize);
    v10 = msgDataSize - v6;
    memcpy_0(g_svSnapshotData.archive.archivedSnapshotBuffer, &msgData[v6], (int)v10);
    return v10;
  }
  else
  {
    memcpy_0(v7, msgData, msgDataSize);
    return (unsigned int)(archiveBufferOffset + msgDataSize);
  }
}

/*
==============
SV_SnapshotMP_ArchiveAntilag
==============
*/
void SV_SnapshotMP_ArchiveAntilag(const bool *clientHasMessage)
{
  __int64 v2; 
  __int64 v3; 
  bool v4; 
  __int64 v5; 

  if ( !(_BYTE)GStatic::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_static.h", 103, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to set the active bgs to the server game static but the allocated type is not known.", "ms_allocatedType != GameModeType::NONE") )
    __debugbreak();
  if ( !*(_QWORD *)&GStatic::ms_gameStatics && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_static.h", 104, ASSERT_TYPE_ASSERT, "(ms_gameStatics != 0)", "%s\n\tTrying to set the active bgs to the server game static but the server game static has not been allocated", "ms_gameStatics != NULL") )
    __debugbreak();
  v2 = tls_index;
  v3 = *((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index);
  if ( *(_QWORD *)(v3 + 272) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_static.h", 105, ASSERT_TYPE_ASSERT, "( ( ms_activeBgs == 0 ) )", "%s\n\t( ms_activeBgs ) = %p", "( ms_activeBgs == 0 )", *(const void **)(v3 + 272)) )
    __debugbreak();
  v4 = BYTE1(GameScriptData::ms_allocatedType) == 2;
  *(_QWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + v2) + 272i64) = *(_QWORD *)&GStatic::ms_gameStatics;
  if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_mp\\g_antilag_mp.h", 110, ASSERT_TYPE_ASSERT, "( ms_allocatedType == ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == ALLOCATION_TYPE") )
    __debugbreak();
  if ( !GAntiLag::ms_gAntiLagData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_antilag.h", 209, ASSERT_TYPE_ASSERT, "( ms_gAntiLagData )", (const char *)&queryFormat, "ms_gAntiLagData") )
    __debugbreak();
  GAntiLagMP::ArchiveAntilagFrame((GAntiLagMP *)GAntiLag::ms_gAntiLagData, clientHasMessage);
  if ( !(_BYTE)GStatic::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_static.h", 113, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to clear the active bgs from the server game static but the allocated type is not known.", "ms_allocatedType != GameModeType::NONE") )
    __debugbreak();
  if ( !*(_QWORD *)&GStatic::ms_gameStatics && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_static.h", 114, ASSERT_TYPE_ASSERT, "(ms_gameStatics != 0)", "%s\n\tTrying to clear the active bgs from the server game static but the server game static has not been allocated", "ms_gameStatics != NULL") )
    __debugbreak();
  v5 = *((_QWORD *)NtCurrentTeb()->Reserved1[11] + v2);
  if ( *(_QWORD *)(v5 + 272) != *(_QWORD *)&GStatic::ms_gameStatics && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_static.h", 115, ASSERT_TYPE_ASSERT, "( ( ms_activeBgs == ms_gameStatics ) )", "%s\n\t( ms_activeBgs ) = %p", "( ms_activeBgs == ms_gameStatics )", *(const void **)(v5 + 272)) )
    __debugbreak();
  *(_QWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + v2) + 272i64) = 0i64;
}

/*
==============
SV_SnapshotMP_ArchiveGetPOTGDuration
==============
*/
__int64 SV_SnapshotMP_ArchiveGetPOTGDuration()
{
  return (unsigned int)(g_svSnapshotData.archivePOTG.nextArchivedSnapshotFrames * g_svSnapshotData.archivePOTG.archivedFrameDuration);
}

/*
==============
SV_SnapshotMP_ArchiveGetPOTGStartTime
==============
*/
__int64 SV_SnapshotMP_ArchiveGetPOTGStartTime()
{
  return (unsigned int)g_svSnapshotData.archivePOTGServerTimestamp;
}

/*
==============
SV_SnapshotMP_ArchiveSavePOTG
==============
*/
char SV_SnapshotMP_ArchiveSavePOTG(int archiveTimeDelta)
{
  int RequestedArchiveFrame; 
  char v2; 
  char v3; 
  char v4; 
  archivedSnapshot_t *v5; 
  int v6; 
  int v7; 
  int v8; 
  int v9; 
  __int64 v10; 
  __int64 v11; 
  archivedSnapshot_t *v12; 
  size_t size; 
  int archivedSnapshotBufferSize; 
  int start; 
  int v16; 
  __int64 v17; 
  __int64 v18; 
  int v19; 
  __int64 nextArchivedSnapshotBuffer; 
  unsigned __int8 *archivedSnapshotBuffer; 
  const dvar_t *v22; 
  int v23; 
  const dvar_t *v24; 
  char *fmt; 
  __int64 v27; 
  int pArchiveTimeDelta; 
  __int64 v29; 

  pArchiveTimeDelta = archiveTimeDelta;
  if ( !g_svSnapshotData.archivePOTG.archivedSnapshotFrames && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 7470, ASSERT_TYPE_ASSERT, "( g_svSnapshotData.archivePOTG.archivedSnapshotFrames )", (const char *)&queryFormat, "g_svSnapshotData.archivePOTG.archivedSnapshotFrames") )
    __debugbreak();
  if ( !g_svSnapshotData.archivePOTG.archivedSnapshotBuffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 7471, ASSERT_TYPE_ASSERT, "( g_svSnapshotData.archivePOTG.archivedSnapshotBuffer )", (const char *)&queryFormat, "g_svSnapshotData.archivePOTG.archivedSnapshotBuffer") )
    __debugbreak();
  if ( !g_svSnapshotData.archive.archivedFrameDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 7472, ASSERT_TYPE_ASSERT, "(g_svSnapshotData.archive.archivedFrameDuration)", "%s\n\tAccessing frame duration before it's been set", "g_svSnapshotData.archive.archivedFrameDuration") )
    __debugbreak();
  Profile_Begin(333);
  SV_SnapWorkersMP_WaitSnapshotArchiveAddWorkers();
  pArchiveTimeDelta -= pArchiveTimeDelta % g_svSnapshotData.archive.archivedFrameDuration;
  if ( pArchiveTimeDelta % g_svSnapshotData.archive.archivedFrameDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 7479, ASSERT_TYPE_ASSERT, "(archiveTimeDelta % g_svSnapshotData.archive.archivedFrameDuration == 0)", "%s\n\t%d %d", "archiveTimeDelta % g_svSnapshotData.archive.archivedFrameDuration == 0", pArchiveTimeDelta, g_svSnapshotData.archive.archivedFrameDuration) )
    __debugbreak();
  RequestedArchiveFrame = SV_SnapshotMP_GetRequestedArchiveFrame(&g_svSnapshotData.archive, &pArchiveTimeDelta);
  if ( RequestedArchiveFrame < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 7482, ASSERT_TYPE_ASSERT, "( frameIndexSrc >= 0 )", (const char *)&queryFormat, "frameIndexSrc >= 0") )
    __debugbreak();
  v2 = 0;
  v3 = 0;
  v4 = 0;
  v5 = &g_svSnapshotData.archive.archivedSnapshotFrames[RequestedArchiveFrame % g_svSnapshotData.archive.archivedFrameCount];
  while ( RequestedArchiveFrame > 0 )
  {
    if ( v2 || v3 || v4 )
      break;
    v5 = &g_svSnapshotData.archive.archivedSnapshotFrames[--RequestedArchiveFrame % g_svSnapshotData.archive.archivedFrameCount];
    if ( v5->isPlayerStateBaseFrame )
      v2 = 1;
    if ( v5->isWeaponMapBaseFrame )
      v3 = 1;
    if ( v5->isWorldStateBaseFrame )
      v4 = 1;
  }
  if ( !SV_SnapshotMP_FrameIsStillInArchivedSnapshotBuffer(&g_svSnapshotData.archive, v5->start) )
    goto LABEL_56;
  g_svSnapshotData.archivePOTG.archiveTimeFrameOffset = RequestedArchiveFrame;
  v6 = 0;
  g_svSnapshotData.archivePOTGServerTimestamp = 0;
  if ( RequestedArchiveFrame >= g_svSnapshotData.archive.nextArchivedSnapshotFrames )
    goto LABEL_56;
  do
  {
    if ( v6 >= g_svSnapshotData.archivePOTG.archivedFrameCount )
      break;
    g_svSnapshotData.archivePOTG.archivedSnapshotFrames[v6] = g_svSnapshotData.archive.archivedSnapshotFrames[RequestedArchiveFrame % g_svSnapshotData.archive.archivedFrameCount];
    memcpy_0(&g_svSnapshotData.archivePOTG.archivedSnapshotPlayerStates[v6 * g_svSnapshotData.archivePOTG.archivedPlayerStatesPerFrameCount], &g_svSnapshotData.archive.archivedSnapshotPlayerStates[g_svSnapshotData.archive.archivedPlayerStatesPerFrameCount * (RequestedArchiveFrame % g_svSnapshotData.archive.archivedFrameCount)], 4i64 * g_svSnapshotData.archivePOTG.archivedPlayerStatesPerFrameCount);
    SV_SnapshotMP_CopyArchivedPlayerTransforms(&g_svSnapshotData.archivePOTG, v6, &g_svSnapshotData.archive, RequestedArchiveFrame % g_svSnapshotData.archive.archivedFrameCount);
    ++RequestedArchiveFrame;
    ++v6;
  }
  while ( RequestedArchiveFrame < g_svSnapshotData.archive.nextArchivedSnapshotFrames );
  if ( v6 )
  {
    v7 = level.time - pArchiveTimeDelta;
    if ( level.time - pArchiveTimeDelta < 0 )
      v7 = 0;
    g_svSnapshotData.archivePOTG.nextArchivedSnapshotBuffer = 0;
    g_svSnapshotData.archivePOTGServerTimestamp = v7;
    v8 = 0;
    v9 = 0;
    v29 = v6;
    g_svSnapshotData.archivePOTG.nextArchivedSnapshotFrames = v6;
    if ( v6 > 0 )
    {
      v10 = 0i64;
      v11 = 0i64;
      while ( 1 )
      {
        v12 = &g_svSnapshotData.archivePOTG.archivedSnapshotFrames[v11];
        size = g_svSnapshotData.archivePOTG.archivedSnapshotFrames[v11].size;
        if ( (int)size + v8 >= g_svSnapshotData.archivePOTG.archivedSnapshotBufferSize )
          break;
        archivedSnapshotBufferSize = g_svSnapshotData.archive.archivedSnapshotBufferSize;
        start = v12->start;
        v16 = v12->start >> 31;
        v12->start = v8;
        v17 = __SPAIR64__(v16, start) % archivedSnapshotBufferSize;
        v18 = (int)v17;
        v19 = archivedSnapshotBufferSize - v17;
        if ( (int)size > v19 )
        {
          v22 = DVARINT_sv_printArchiveDetails;
          if ( !DVARINT_sv_printArchiveDetails && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sv_printArchiveDetails") )
            __debugbreak();
          Dvar_CheckFrontendServerThread(v22);
          if ( v22->current.integer )
            Com_Printf(15, "[Snapshot] SV_SnapshotMP_ArchiveSavePOTG: Copying at end of archive buffer: Frames Size %d, Size remaining:%d.\n", (unsigned int)v12->size, (unsigned int)v19);
          memcpy_0(&g_svSnapshotData.archivePOTG.archivedSnapshotBuffer[g_svSnapshotData.archivePOTG.nextArchivedSnapshotBuffer], &g_svSnapshotData.archive.archivedSnapshotBuffer[v18], v19);
          archivedSnapshotBuffer = g_svSnapshotData.archive.archivedSnapshotBuffer;
          nextArchivedSnapshotBuffer = v19 + (__int64)g_svSnapshotData.archivePOTG.nextArchivedSnapshotBuffer;
          size = v12->size - v19;
        }
        else
        {
          nextArchivedSnapshotBuffer = g_svSnapshotData.archivePOTG.nextArchivedSnapshotBuffer;
          archivedSnapshotBuffer = &g_svSnapshotData.archive.archivedSnapshotBuffer[v18];
        }
        memcpy_0(&g_svSnapshotData.archivePOTG.archivedSnapshotBuffer[nextArchivedSnapshotBuffer], archivedSnapshotBuffer, size);
        v8 = v12->size + g_svSnapshotData.archivePOTG.nextArchivedSnapshotBuffer;
        ++v9;
        g_svSnapshotData.archivePOTG.nextArchivedSnapshotBuffer = v8;
        ++v10;
        ++v11;
        if ( v10 >= v29 )
          goto LABEL_50;
      }
      v23 = v9 - 1;
      if ( v9 - 1 < 0 )
        v23 = 0;
      g_svSnapshotData.archivePOTG.nextArchivedSnapshotFrames = v23;
    }
LABEL_50:
    v24 = DVARINT_sv_printArchiveDetails;
    if ( !DVARINT_sv_printArchiveDetails && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sv_printArchiveDetails") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v24);
    if ( v24->current.integer )
    {
      LODWORD(v27) = g_svSnapshotData.archivePOTG.nextArchivedSnapshotFrames * g_svSnapshotData.archivePOTG.archivedFrameDuration;
      LODWORD(fmt) = g_svSnapshotData.archivePOTG.archiveTimeFrameOffset * g_svSnapshotData.archivePOTG.archivedFrameDuration;
      Com_Printf(15, "[Snapshot] SV_SnapshotMP_ArchiveSavePOTG: Frames:%d, Buffer Size:%d, StartTime:%d, Duration:%d \n", (unsigned int)g_svSnapshotData.archivePOTG.archivedFrameCount, (unsigned int)g_svSnapshotData.archivePOTG.nextArchivedSnapshotBuffer, fmt, v27);
    }
    Profile_EndInternal(NULL);
    return 1;
  }
  else
  {
LABEL_56:
    Profile_EndInternal(NULL);
    return 0;
  }
}

/*
==============
SV_SnapshotMP_ArchiveSnapshotAddToArchive
==============
*/
char SV_SnapshotMP_ArchiveSnapshotAddToArchive(const unsigned __int8 *playerStateEncodeData, const int playerStateEncodeSize, const SVSnapshotArchiveEncodeData *weaponMapEncodeData, const SVSnapshotArchiveEncodeData *worldStateEncodeData)
{
  int nextArchivedSnapshotFrames; 
  archivedSnapshot_t *v9; 
  int v10; 
  int v11; 
  int v12; 
  int v13; 
  int v14; 
  signed int v15; 
  int v16; 
  int v17; 
  int v18; 
  const dvar_t *v19; 
  SvClient *CommonClient; 
  __int64 v22; 
  unsigned int v23; 

  if ( !SV_SnapshotMP_ArchiveEnabled() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 7295, ASSERT_TYPE_ASSERT, "( SV_SnapshotMP_ArchiveEnabled() )", (const char *)&queryFormat, "SV_SnapshotMP_ArchiveEnabled()") )
    __debugbreak();
  if ( !playerStateEncodeData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 7296, ASSERT_TYPE_ASSERT, "( playerStateEncodeData != nullptr )", (const char *)&queryFormat, "playerStateEncodeData != nullptr") )
    __debugbreak();
  if ( !weaponMapEncodeData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 7297, ASSERT_TYPE_ASSERT, "( weaponMapEncodeData )", (const char *)&queryFormat, "weaponMapEncodeData") )
    __debugbreak();
  if ( !worldStateEncodeData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 7298, ASSERT_TYPE_ASSERT, "( worldStateEncodeData )", (const char *)&queryFormat, "worldStateEncodeData") )
    __debugbreak();
  if ( !weaponMapEncodeData->archiveMsg && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 7299, ASSERT_TYPE_ASSERT, "( weaponMapEncodeData->archiveMsg )", (const char *)&queryFormat, "weaponMapEncodeData->archiveMsg") )
    __debugbreak();
  if ( !worldStateEncodeData->archiveMsg && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 7300, ASSERT_TYPE_ASSERT, "( worldStateEncodeData->archiveMsg )", (const char *)&queryFormat, "worldStateEncodeData->archiveMsg") )
    __debugbreak();
  if ( !g_svSnapshotData.archive.archivedSnapshotFrames && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 7301, ASSERT_TYPE_ASSERT, "( g_svSnapshotData.archive.archivedSnapshotFrames )", (const char *)&queryFormat, "g_svSnapshotData.archive.archivedSnapshotFrames") )
    __debugbreak();
  if ( !g_svSnapshotData.archive.archivedSnapshotPlayerStates && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 7302, ASSERT_TYPE_ASSERT, "( g_svSnapshotData.archive.archivedSnapshotPlayerStates )", (const char *)&queryFormat, "g_svSnapshotData.archive.archivedSnapshotPlayerStates") )
    __debugbreak();
  if ( !g_svSnapshotData.archive.archivedSnapshotBuffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 7303, ASSERT_TYPE_ASSERT, "( g_svSnapshotData.archive.archivedSnapshotBuffer )", (const char *)&queryFormat, "g_svSnapshotData.archive.archivedSnapshotBuffer") )
    __debugbreak();
  if ( !g_svSnapshotData.archive.archivedSnapshotBufferSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 7304, ASSERT_TYPE_ASSERT, "( g_svSnapshotData.archive.archivedSnapshotBufferSize )", (const char *)&queryFormat, "g_svSnapshotData.archive.archivedSnapshotBufferSize") )
    __debugbreak();
  Profile_Begin(332);
  if ( weaponMapEncodeData->archiveMsg->overflowed || worldStateEncodeData->archiveMsg->overflowed )
  {
    Com_DPrintf(15, "[Snapshot] SV_AddArchiveSnapshot: ignoring snapshot because it overflowed.\n");
  }
  else
  {
    nextArchivedSnapshotFrames = g_svSnapshotData.archive.nextArchivedSnapshotFrames;
    v9 = &g_svSnapshotData.archive.archivedSnapshotFrames[g_svSnapshotData.archive.nextArchivedSnapshotFrames % (unsigned int)g_svSnapshotData.archive.archivedFrameCount];
    v23 = g_svSnapshotData.archive.nextArchivedSnapshotFrames % (unsigned int)g_svSnapshotData.archive.archivedFrameCount;
    v9->start = g_svSnapshotData.archive.nextArchivedSnapshotBuffer;
    v10 = worldStateEncodeData->archiveMsg->cursize + weaponMapEncodeData->archiveMsg->cursize;
    v9->playerStateSize = playerStateEncodeSize;
    v11 = playerStateEncodeSize + v10;
    v9->size = v11;
    v9->weaponMapStart = playerStateEncodeSize;
    v9->weaponMapSize = weaponMapEncodeData->archiveMsg->cursize;
    v9->worldStateStart = playerStateEncodeSize + weaponMapEncodeData->archiveMsg->cursize;
    v9->worldStateSize = worldStateEncodeData->archiveMsg->cursize;
    v9->isPlayerStateBaseFrame = g_svSnapshotData.archivePlayerStateCacheBuffer == CACHED_SNAP_PLAYERSTATE_NODELTA;
    v9->isWeaponMapBaseFrame = !*weaponMapEncodeData->isDeltaEncoded;
    v9->isWorldStateBaseFrame = !*worldStateEncodeData->isDeltaEncoded;
    v12 = g_svSnapshotData.archive.nextArchivedSnapshotBuffer % g_svSnapshotData.archive.archivedSnapshotBufferSize;
    v13 = g_svSnapshotData.archive.nextArchivedSnapshotBuffer % g_svSnapshotData.archive.archivedSnapshotBufferSize;
    g_svSnapshotData.archive.nextArchivedSnapshotBuffer = (v11 + g_svSnapshotData.archive.nextArchivedSnapshotBuffer) % g_svSnapshotData.archive.archivedSnapshotBufferWrapPoint;
    v14 = SV_SnapshotMP_AddArchiveSnapshot_CopyBuffer(v13, g_svSnapshotData.archive.archivedSnapshotBufferSize - v12, playerStateEncodeData, playerStateEncodeSize);
    v15 = 0;
    v16 = g_svSnapshotData.archive.archivedSnapshotBufferSize - v14;
    if ( g_svSnapshotData.archive.archivedSnapshotBufferSize - v14 < 0 )
    {
      LODWORD(v22) = g_svSnapshotData.archive.archivedSnapshotBufferSize - v14;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 7340, ASSERT_TYPE_ASSERT, "( archiveBufferPartialSizeRemaining ) >= ( 0 )", "archiveBufferPartialSizeRemaining >= 0\n\t%i, %i", v22, 0i64) )
        __debugbreak();
    }
    v17 = SV_SnapshotMP_AddArchiveSnapshot_CopyBuffer(v14, v16, weaponMapEncodeData->archiveMsg->data, weaponMapEncodeData->archiveMsg->cursize);
    v18 = g_svSnapshotData.archive.archivedSnapshotBufferSize - v17;
    if ( g_svSnapshotData.archive.archivedSnapshotBufferSize - v17 < 0 )
    {
      LODWORD(v22) = g_svSnapshotData.archive.archivedSnapshotBufferSize - v17;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 7345, ASSERT_TYPE_ASSERT, "( archiveBufferPartialSizeRemaining ) >= ( 0 )", "archiveBufferPartialSizeRemaining >= 0\n\t%i, %i", v22, 0i64) )
        __debugbreak();
    }
    SV_SnapshotMP_AddArchiveSnapshot_CopyBuffer(v17, v18, worldStateEncodeData->archiveMsg->data, worldStateEncodeData->archiveMsg->cursize);
    memcpy_0(&g_svSnapshotData.archive.archivedSnapshotPlayerStates[v23 * g_svSnapshotData.archive.archivedPlayerStatesPerFrameCount], g_svSnapshotData.archivePlayerStateOffsetData, 4i64 * g_svSnapshotData.archive.archivedPlayerStatesPerFrameCount);
    v19 = DVARINT_sv_printArchiveDetails;
    if ( !DVARINT_sv_printArchiveDetails && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sv_printArchiveDetails") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v19);
    if ( v19->current.integer )
      Com_Printf(15, "[Snapshot] Archived snapshot of size %d (%d%% of total buffer)\n", (unsigned int)v9->size, (unsigned int)(100 * v9->size / g_svSnapshotData.archive.archivedSnapshotBufferSize));
    if ( ++g_svSnapshotData.archive.nextArchivedSnapshotFrames >= 2147483646 )
    {
      Com_PrintError(25, "[Snapshot] g_svSnapshotData.nextArchivedSnapshotFrames wrapped\n");
      Profile_EndInternal(NULL);
      return 0;
    }
    SV_SnapshotMP_ClearArchivedPlayerTransforms(nextArchivedSnapshotFrames, &g_svSnapshotData.archive);
    if ( (int)SvClient::ms_clientCount > 0 )
    {
      do
      {
        if ( (_BYTE)SvClient::ms_allocatedType != HALF_HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.h", 957, ASSERT_TYPE_ASSERT, "( ms_allocatedType == ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == ALLOCATION_TYPE") )
          __debugbreak();
        CommonClient = SvClient::GetCommonClient(v15);
        if ( HIDWORD(CommonClient[1116].__vftable) )
          SV_SnapshotMP_SetArchivedPlayerTransform(v15, nextArchivedSnapshotFrames, &g_svSnapshotData.archive, (const vec3_t *)&CommonClient[1116].state, (const vec3_t *)((char *)&CommonClient[1116].lastUsercmd.buttons + 4));
        ++v15;
      }
      while ( v15 < (int)SvClient::ms_clientCount );
    }
  }
  Profile_EndInternal(NULL);
  return 1;
}

/*
==============
SV_SnapshotMP_AssignBaselineIndices
==============
*/
void SV_SnapshotMP_AssignBaselineIndices(SvSnapshotEntries *const entries)
{
  int nextNoDeltaEntity; 
  unsigned int v3; 
  unsigned int ReplicatedInstanceLimit; 
  unsigned int TotalReplicatedPartsLimit; 

  if ( !entries && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 5953, ASSERT_TYPE_ASSERT, "( entries != nullptr )", (const char *)&queryFormat, "entries != nullptr") )
    __debugbreak();
  entries->m_storageType = FULL;
  nextNoDeltaEntity = g_svSnapshotData.nextNoDeltaEntity;
  entries->m_first[0] = -10000000i64;
  entries->m_count[0] = nextNoDeltaEntity;
  entries->m_first[1] = 0i64;
  *(_QWORD *)&entries->m_count[1] = 0i64;
  entries->m_first[2] = 0i64;
  if ( !BgWeaponMap::ms_runtimeSizeInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_map.h", 228, ASSERT_TYPE_ASSERT, "(ms_runtimeSizeInitialized)", (const char *)&queryFormat, "ms_runtimeSizeInitialized") )
    __debugbreak();
  v3 = BgWeaponMap::ms_runtimeSize;
  entries->m_first[8] = 0x7FFFFFFFi64;
  entries->m_count[8] = v3;
  ReplicatedInstanceLimit = ScriptableSv_GetReplicatedInstanceLimit();
  entries->m_first[6] = 0x7FFFFFFFFFFFFFFFi64;
  entries->m_count[6] = ReplicatedInstanceLimit;
  TotalReplicatedPartsLimit = ScriptableSv_GetTotalReplicatedPartsLimit();
  entries->m_first[7] = 0x7FFFFFFFFFFFFFFFi64;
  entries->m_count[7] = TotalReplicatedPartsLimit;
  entries->m_first[9] = 0x7FFFFFFFi64;
  entries->m_count[9] = 1;
  entries->m_first[4] = 0i64;
  *(_QWORD *)&entries->m_count[4] = 0i64;
  entries->m_first[5] = 0i64;
  entries->m_first[3] = 0i64;
  entries->m_count[3] = 0;
}

/*
==============
SV_SnapshotMP_BalanceBandwidthLoad
==============
*/
char SV_SnapshotMP_BalanceBandwidthLoad()
{
  signed int v0; 
  int v1; 
  signed int i; 
  SvClient *CommonClient; 
  SvGameModeApplication *ActiveServerApplication; 
  int m_remoteClientSendDelay; 
  int v6; 
  SvClient *PersistentGlobalsMP; 
  int v8; 
  int v9; 
  int v10; 
  int serverTime; 
  int v12; 
  SvClient *v13; 
  signed int v14; 
  signed int j; 
  char *fmt; 

  v0 = SvClient::ms_clientCount;
  v1 = 0;
  for ( i = 0; i < v0; v1 += (signed int)CommonClient[1115].lastUsercmd.sightedClientsMask.data[2] > 0 )
  {
    if ( (_BYTE)SvClient::ms_allocatedType != HALF_HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.h", 957, ASSERT_TYPE_ASSERT, "( ms_allocatedType == ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == ALLOCATION_TYPE") )
      __debugbreak();
    CommonClient = SvClient::GetCommonClient(i++);
  }
  ActiveServerApplication = SvGameModeApplication::GetActiveServerApplication();
  if ( g_svSnapshotData.m_remoteClientSendDelay <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 1841, ASSERT_TYPE_ASSERT, "( g_svSnapshotData.m_remoteClientSendDelay > 0 )", (const char *)&queryFormat, "g_svSnapshotData.m_remoteClientSendDelay > 0") )
    __debugbreak();
  m_remoteClientSendDelay = g_svSnapshotData.m_remoteClientSendDelay;
  if ( !ActiveServerApplication->m_frameDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_gamemode_app.h", 162, ASSERT_TYPE_ASSERT, "(m_frameDuration > 0)", "%s\n\tFrame duration has not been initialized", "m_frameDuration > 0") )
    __debugbreak();
  v6 = m_remoteClientSendDelay / (signed int)ActiveServerApplication->m_frameDuration;
  LODWORD(PersistentGlobalsMP) = SV_CountClients();
  if ( v6 <= 1 )
  {
    v8 = 0x7FFFFFFF;
  }
  else
  {
    v8 = 1;
    LODWORD(PersistentGlobalsMP) = ((int)PersistentGlobalsMP + 1) / v6;
    if ( (int)PersistentGlobalsMP > 1 )
      v8 = (int)PersistentGlobalsMP;
  }
  if ( v1 > v8 )
  {
    v9 = SvClient::ms_clientCount;
    PersistentGlobalsMP = (SvClient *)SvPersistentGlobalsMP::GetPersistentGlobalsMP();
    v10 = 0;
    serverTime = PersistentGlobalsMP->lastUsercmd.serverTime;
    if ( v9 > 0 )
    {
      while ( 1 )
      {
        v12 = (v10 + g_svSnapshotData.nextClientRebalance) % v9;
        if ( (_BYTE)SvClient::ms_allocatedType != HALF_HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.h", 957, ASSERT_TYPE_ASSERT, "( ms_allocatedType == ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == ALLOCATION_TYPE") )
          __debugbreak();
        PersistentGlobalsMP = SvClient::GetCommonClient(v12);
        v13 = PersistentGlobalsMP;
        if ( PersistentGlobalsMP->state == CS_ACTIVE )
        {
          if ( PersistentGlobalsMP[1115].lastUsercmd.sightedClientsMask.data[2] )
          {
            LOBYTE(PersistentGlobalsMP) = NetConnection::IsRemote((NetConnection *)&PersistentGlobalsMP[642].lastUsercmd.sightedClientsMask.data[6]);
            if ( (_BYTE)PersistentGlobalsMP )
            {
              if ( (signed int)v13[782].lastUsercmd.sightedClientsMask.data[1] > serverTime )
                break;
            }
          }
        }
        if ( ++v10 >= v9 )
          goto LABEL_29;
      }
      LODWORD(fmt) = v8;
      Com_Printf(15, "Sending snapshot to '%s' earlier to balance bandwidth load (%d > %d)\n", &v13[4].lastUsercmd.selectedLoc[1], (unsigned int)v1, fmt);
      LOBYTE(PersistentGlobalsMP) = v12 + 1;
      v13[782].lastUsercmd.sightedClientsMask.data[1] = serverTime;
      g_svSnapshotData.nextClientRebalance = v12 + 1;
    }
  }
LABEL_29:
  v14 = SvClient::ms_clientCount;
  for ( j = 0; j < v14; PersistentGlobalsMP[1115].lastUsercmd.sightedClientsMask.data[2] = 0 )
  {
    if ( (_BYTE)SvClient::ms_allocatedType != HALF_HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.h", 957, ASSERT_TYPE_ASSERT, "( ms_allocatedType == ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == ALLOCATION_TYPE") )
      __debugbreak();
    PersistentGlobalsMP = SvClient::GetCommonClient(j++);
  }
  return (char)PersistentGlobalsMP;
}

/*
==============
SV_SnapshotMP_BeginClientSnapshot
==============
*/
void SV_SnapshotMP_BeginClientSnapshot(const ClientSnapshotInfo *clientSnapInfo, msg_t *msg, unsigned __int8 *snapshotMsgBuf)
{
  SvClientMP *client; 
  unsigned int MpClientIndex; 
  const dvar_t *v8; 
  unsigned int v9; 
  const dvar_t *v10; 
  bool v11; 
  bool v12; 
  int UsedBitCount; 
  char *fmt; 

  if ( !clientSnapInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 5766, ASSERT_TYPE_ASSERT, "( clientSnapInfo )", (const char *)&queryFormat, "clientSnapInfo") )
    __debugbreak();
  if ( !msg && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 5767, ASSERT_TYPE_ASSERT, "( msg )", (const char *)&queryFormat, "msg") )
    __debugbreak();
  client = clientSnapInfo->client;
  MpClientIndex = SV_Client_GetMpClientIndex(clientSnapInfo->client);
  client->tempPacketDebugging = 0;
  v8 = DVARBOOL_sv_debugPacketContentsForClientThisFrame;
  v9 = MpClientIndex;
  if ( !DVARBOOL_sv_debugPacketContentsForClientThisFrame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sv_debugPacketContentsForClientThisFrame") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v8);
  if ( v8->current.enabled )
  {
    client->tempPacketDebugging = 1;
    Dvar_SetBool_Internal(DVARBOOL_sv_debugPacketContentsForClientThisFrame, 0);
    Dvar_SetInt_Internal(DVARINT_sv_debugPacketContents, 2);
  }
  SV_ResetSnapshotContent(v9);
  LODWORD(fmt) = SvPersistentGlobalsMP::GetPersistentGlobalsMP()->time;
  SV_LogSnapshotContent(v9, "[Snapshot] Starting snapshot for %s (%d) at time %i\n", client->name, v9, fmt);
  MSG_Init(msg, snapshotMsgBuf, 148440);
  MSG_ClearLastReferencedEntity(msg);
  v10 = DVARBOOL_sv_sendSnapshotsToBots;
  if ( !DVARBOOL_sv_sendSnapshotsToBots && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sv_sendSnapshotsToBots") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v10);
  v11 = v10->current.enabled && NetConnection::IsLoopback(&client->clientConnection);
  v12 = NetConnection::IsRemote(&client->clientConnection) || v11;
  SV_PacketIsNetworkBound(v12);
  UsedBitCount = MSG_GetUsedBitCount(msg);
  if ( clientSnapInfo->isCompressedSnap && clientSnapInfo->isLargeSnap )
    msg->compressionFlags = 0x80000000;
  if ( (clientSnapInfo->commandAcknowledge & 0xC0000000) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 5815, ASSERT_TYPE_ASSERT, "( (clientSnapInfo->commandAcknowledge & 0xc0000000u) == 0 )", (const char *)&queryFormat, "(clientSnapInfo->commandAcknowledge & USE_COMPRESSION_MASK) == 0") )
    __debugbreak();
  MSG_WriteLong(msg, clientSnapInfo->commandAcknowledge);
  SV_TrackPacketData(v9, ANALYZE_SNAPSHOT_GENERIC_DATA, 0, 0, UsedBitCount, msg);
  if ( ((clientSnapInfo->connState - 1) & 0xFB) == 0 )
    SV_SnapshotMP_UpdateServerCommandsToClient(client, msg, clientSnapInfo->reliableAcknowledge, clientSnapInfo->reliableSequence);
}

/*
==============
SV_SnapshotMP_CalculateScriptableScratchSpace
==============
*/
__int64 SV_SnapshotMP_CalculateScriptableScratchSpace(const ScriptableInitLimits *scriptableInitLimits)
{
  unsigned __int64 replicatedPartLimit; 
  unsigned int v3; 

  replicatedPartLimit = 32i64 * scriptableInitLimits->replicatedInstanceLimit;
  if ( scriptableInitLimits->replicatedPartLimit > replicatedPartLimit )
    replicatedPartLimit = scriptableInitLimits->replicatedPartLimit;
  if ( truncate_cast<unsigned int,unsigned __int64>(replicatedPartLimit) > 0x7E000000 )
    return 0i64;
  v3 = truncate_cast<unsigned int,unsigned __int64>(replicatedPartLimit) / 0xFF;
  return truncate_cast<unsigned int,unsigned __int64>(replicatedPartLimit) + v3 + 16;
}

/*
==============
SV_SnapshotMP_CanClientsSeeEntity
==============
*/
char SV_SnapshotMP_CanClientsSeeEntity(const gentity_s *ent)
{
  int v1; 
  ClientBits *i; 

  if ( !ent->r.isLinked || (ent->r.svFlags & 1) != 0 )
    return 0;
  v1 = 0;
  for ( i = &ent->clientMask; i->array[0] == -1; i = (ClientBits *)((char *)i + 4) )
  {
    if ( (unsigned int)++v1 >= 7 )
      return 0;
  }
  return 1;
}

/*
==============
SV_SnapshotMP_CheckEntityInServerMessage
==============
*/
void SV_SnapshotMP_CheckEntityInServerMessage(const SnapshotInfo *const snapInfo, const ServerEntityHeader *const header, const entityState_t *const entity)
{
  int NewEntityLoD; 

  NewEntityLoD = SV_SnapshotMP_GetNewEntityLoD(snapInfo, entity->number);
  if ( NewEntityLoD == -1 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 6535, ASSERT_TYPE_ASSERT, "( entityLoD != NetFieldLoD_Invalid )", (const char *)&queryFormat, "entityLoD != NetFieldLoD_Invalid") )
      __debugbreak();
LABEL_9:
    if ( NewEntityLoD != 1 || (header->m_flags[0] & 2) != 0 )
    {
      if ( GameModeFlagValues::ms_mpValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 190, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a MP-only context", "IsFlagActive( index )") )
        __debugbreak();
      if ( !GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&entity->lerp.eFlags, ACTIVE, 0x1Eu) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 6540, ASSERT_TYPE_ASSERT, "( hasLowLoD || hasHighLoD || entity->lerp.eFlags.TestFlagStrict( EntityStateFlagsMP::NEVERCHANGES ) )", (const char *)&queryFormat, "hasLowLoD || hasHighLoD || entity->lerp.eFlags.TestFlagStrict( EntityStateFlagsMP::NEVERCHANGES )") )
        __debugbreak();
    }
    return;
  }
  if ( NewEntityLoD >= 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 6536, ASSERT_TYPE_ASSERT, "( entityLoD < NetFieldLoD_Count )", (const char *)&queryFormat, "entityLoD < NetFieldLoD_Count") )
    __debugbreak();
  if ( NewEntityLoD || (header->m_flags[0] & 1) != 0 )
    goto LABEL_9;
}

/*
==============
SV_SnapshotMP_CheckMaxServerEntitiesReached
==============
*/
_BOOL8 SV_SnapshotMP_CheckMaxServerEntitiesReached(unsigned int inCurrentNumEntities, unsigned int inMaxEntities)
{
  bool v2; 
  const dvar_t *v3; 

  v2 = inCurrentNumEntities >= inMaxEntities;
  if ( inCurrentNumEntities >= inMaxEntities )
  {
    Com_Printf(131087, "[Snapshot] Hit max entities (%d) in server snapshot\n", inMaxEntities);
    G_Debug_PrintEntityDebugInfoToConsole(0, -1);
    SvPersistentGlobalsMP::GetPersistentGlobalsMP();
    v3 = DCONST_DVARBOOL_sv_errorOnMaxSnapshotEntities;
    if ( !DCONST_DVARBOOL_sv_errorOnMaxSnapshotEntities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sv_errorOnMaxSnapshotEntities") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v3);
    if ( v3->current.enabled )
      SV_SnapWorkersMP_SetSnapshotBuildError(&byte_1440FB7D0);
  }
  return v2;
}

/*
==============
SV_SnapshotMP_CheckOverflow
==============
*/
char SV_SnapshotMP_CheckOverflow()
{
  __int64 v1; 
  __int64 *m_nextBufferIndex; 
  int *m_numBufferEntries; 

  if ( SvPersistentGlobalsMP::GetPersistentGlobalsMP()->time <= 1879048192 )
  {
    v1 = 0i64;
    m_nextBufferIndex = g_svSnapshotData.fullBuffers.m_nextBufferIndex;
    m_numBufferEntries = g_svSnapshotData.fullBuffers.m_numBufferEntries;
    do
    {
      if ( *m_nextBufferIndex >= 0x7FFFFFFFFFFFFFFEi64 - *m_numBufferEntries )
      {
        Com_PrintError(15, "[Snapshot] SvSnapshotFrameBuffers::CheckOverflow: Type %d\n", v1);
        SV_Snapshot_HandleOverflow("EXE/SERVERSHUTDOWNMISC", "Full Buffer Overflow");
        return 1;
      }
      v1 = (unsigned int)(v1 + 1);
      ++m_numBufferEntries;
      ++m_nextBufferIndex;
    }
    while ( (unsigned int)v1 < 0xA );
    if ( g_svSnapshotData.nextCachedSnapshotEntities < 2147472846 )
    {
      if ( g_svSnapshotData.nextCachedSnapshotClientStates < 2147483646 - g_svSnapshotData.numCachedSnapshotClientStates )
      {
        if ( g_svSnapshotData.numCachedSnapshotEntityLoD && g_svSnapshotData.nextCachedSnapshotEntityLoD >= 2147483646 - g_svSnapshotData.numCachedSnapshotEntityLoD )
        {
          SV_Snapshot_HandleOverflow("EXE/SERVERSHUTDOWNMISC", "nextCachedSnapshotEntityLoD");
          return 1;
        }
        else if ( g_svSnapshotData.archive.nextArchivedSnapshotFrames < 2147483646 - g_svSnapshotData.archive.archivedFrameCount )
        {
          if ( g_svSnapshotData.archivePOTG.nextArchivedSnapshotFrames < 2147483646 - g_svSnapshotData.archivePOTG.archivedFrameCount )
          {
            if ( g_svSnapshotData.nextCachedSnapshotWorldStateFrames < 2147483134 )
            {
              if ( g_svSnapshotData.nextCachedSnapshotWeaponMapFrames < 2147483134 )
              {
                if ( g_svSnapshotData.scriptableSnapshots.cachedInstNextIndex < 0x7FFFFFFFFFFFFFFEi64 - g_svSnapshotData.scriptableSnapshots.cachedInstCount )
                {
                  if ( g_svSnapshotData.scriptableSnapshots.cachedPartNextIndex < 0x7FFFFFFFFFFFFFFEi64 - g_svSnapshotData.scriptableSnapshots.cachedPartCount )
                  {
                    if ( g_svSnapshotData.nextCachedSnapshotWeapon < 2147483646 - g_svSnapshotData.numCachedSnapshotWeapons )
                    {
                      if ( g_svSnapshotData.nextCachedSnapshotUmbraGateStatesIndex < 2147483646 - g_svSnapshotData.numCachedSnapshotUmbraGateStates )
                      {
                        return 0;
                      }
                      else
                      {
                        SV_Snapshot_HandleOverflow("EXE/SERVERSHUTDOWNMISC", "nextCachedUmbraGateStates");
                        return 1;
                      }
                    }
                    else
                    {
                      SV_Snapshot_HandleOverflow("EXE/SERVERSHUTDOWNMISC", "nextCachedSnapshotWeapon");
                      return 1;
                    }
                  }
                  else
                  {
                    SV_Snapshot_HandleOverflow("EXE/SERVERSHUTDOWNMISC", "scriptableSnapshots.cachedPartNextIndex");
                    return 1;
                  }
                }
                else
                {
                  SV_Snapshot_HandleOverflow("EXE/SERVERSHUTDOWNMISC", "scriptableSnapshots.cachedInstNextIndex");
                  return 1;
                }
              }
              else
              {
                SV_Snapshot_HandleOverflow("EXE/SERVERSHUTDOWNMISC", "nextCachedSnapshotWeaponMapFrames");
                return 1;
              }
            }
            else
            {
              SV_Snapshot_HandleOverflow("EXE/SERVERSHUTDOWNMISC", "nextCachedSnapshotWorldStateFrames");
              return 1;
            }
          }
          else
          {
            SV_Snapshot_HandleOverflow("EXE/SERVERSHUTDOWNMISC", "archivePOTG.nextArchivedSnapshotFrames");
            return 1;
          }
        }
        else
        {
          SV_Snapshot_HandleOverflow("EXE/SERVERSHUTDOWNMISC", "archive.nextArchivedSnapshotFrames");
          return 1;
        }
      }
      else
      {
        SV_Snapshot_HandleOverflow("EXE/SERVERSHUTDOWNMISC", "nextCachedSnapshotClientStates");
        return 1;
      }
    }
    else
    {
      SV_Snapshot_HandleOverflow("EXE/SERVERSHUTDOWNMISC", "nextCachedSnapshotEntities");
      return 1;
    }
  }
  else
  {
    SV_Snapshot_HandleOverflow("EXE/SERVERSHUTDOWNTIMEWRAP", NULL);
    return 1;
  }
}

/*
==============
SV_SnapshotMP_CleanupClient
==============
*/
void SV_SnapshotMP_CleanupClient(int clientNum)
{
  __int64 v1; 
  __int64 v2; 
  __int64 v3; 
  __int64 v5; 
  unsigned int v6; 

  v1 = clientNum;
  if ( clientNum >= SvClient::ms_clientCount )
  {
    v6 = SvClient::ms_clientCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 2378, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( SvClient::GetClientCount() )", "clientNum doesn't index SvClient::GetClientCount()\n\t%i not in [0, %i)", clientNum, v6) )
      __debugbreak();
  }
  if ( g_svSnapshotData.noDeltaClientWeaponMaps )
  {
    if ( (unsigned int)v1 >= g_svSnapshotData.maxNoDeltaClientWeaponMaps )
    {
      LODWORD(v5) = g_svSnapshotData.maxNoDeltaClientWeaponMaps;
      LODWORD(v3) = v1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 2382, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( g_svSnapshotData.maxNoDeltaClientWeaponMaps )", "clientNum doesn't index g_svSnapshotData.maxNoDeltaClientWeaponMaps\n\t%i not in [0, %i)", v3, v5) )
        __debugbreak();
    }
    v2 = v1;
    BgWeaponMap::ClearEntries(&g_svSnapshotData.noDeltaClientWeaponMaps[v1]);
  }
  else
  {
    v2 = v1;
  }
  if ( g_svSnapshotData.noDeltaPlayerStates )
  {
    if ( (unsigned int)v1 >= g_svSnapshotData.maxNoDeltaPlayerStates )
    {
      LODWORD(v5) = g_svSnapshotData.maxNoDeltaPlayerStates;
      LODWORD(v3) = v1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 2389, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( g_svSnapshotData.maxNoDeltaPlayerStates )", "clientNum doesn't index g_svSnapshotData.maxNoDeltaPlayerStates\n\t%i not in [0, %i)", v3, v5) )
        __debugbreak();
    }
    memset_0(&g_svSnapshotData.noDeltaPlayerStates[v2], 0, sizeof(g_svSnapshotData.noDeltaPlayerStates[v2]));
  }
  g_svSnapshotData.hasNoDeltaPlayerData[v2] = 0;
}

/*
==============
SV_SnapshotMP_ClearArchivedPlayerTransforms
==============
*/
void SV_SnapshotMP_ClearArchivedPlayerTransforms(const int archiveFrameNum, serverArchive_t *const archive)
{
  __int64 v4; 
  __int64 v5; 
  __int64 v6; 
  __int64 v7; 
  __int64 v8; 

  if ( !archive && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 9245, ASSERT_TYPE_ASSERT, "( archive != nullptr )", (const char *)&queryFormat, "archive != nullptr") )
    __debugbreak();
  if ( archive->archivedTransformValidBuffer )
  {
    v4 = (unsigned int)(archiveFrameNum % g_svSnapshotData.archive.archivedFrameCount);
    if ( SV_SnapshotMP_FrameIsStillInArchivedSnapshotBuffer(&g_svSnapshotData.archive, g_svSnapshotData.archive.archivedSnapshotFrames[v4].start) )
    {
      v5 = (unsigned int)v4 * SvClient::ms_clientCount;
      if ( archive->archivedTransformOriginBuffer )
      {
        if ( (unsigned int)v5 >= archive->archivedTransformOriginSize / 0xC )
        {
          LODWORD(v7) = v4 * SvClient::ms_clientCount;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 9260, ASSERT_TYPE_ASSERT, "(unsigned)( transformOffset ) < (unsigned)( archive->archivedTransformOriginSize / sizeof( vec3_t ) )", "transformOffset doesn't index archive->archivedTransformOriginSize / sizeof( vec3_t )\n\t%i not in [0, %i)", v7, archive->archivedTransformOriginSize / 0xC) )
            __debugbreak();
        }
        if ( (unsigned int)v5 + SvClient::ms_clientCount > archive->archivedTransformOriginSize / 0xCui64 )
        {
          LODWORD(v8) = archive->archivedTransformOriginSize / 0xC;
          LODWORD(v7) = v5 + SvClient::ms_clientCount;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 9261, ASSERT_TYPE_ASSERT, "( transformOffset + SvClient::GetClientCount() ) <= ( archive->archivedTransformOriginSize / sizeof( vec3_t ) )", "transformOffset + SvClient::GetClientCount() not in [0, archive->archivedTransformOriginSize / sizeof( vec3_t )]\n\t%u not in [0, %u]", v7, v8) )
            __debugbreak();
        }
        DebugWipe(&archive->archivedTransformOriginBuffer[v5], 12i64 * (int)SvClient::ms_clientCount);
      }
      if ( archive->archivedTransformAnglesBuffer )
      {
        if ( (unsigned int)v5 >= archive->archivedTransformAnglesSize / 6 )
        {
          LODWORD(v8) = archive->archivedTransformAnglesSize / 6;
          LODWORD(v7) = v5;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 9269, ASSERT_TYPE_ASSERT, "(unsigned)( transformOffset ) < (unsigned)( archive->archivedTransformAnglesSize / sizeof( svec3_t ) )", "transformOffset doesn't index archive->archivedTransformAnglesSize / sizeof( svec3_t )\n\t%i not in [0, %i)", v7, v8) )
            __debugbreak();
        }
        if ( (unsigned int)v5 + SvClient::ms_clientCount > archive->archivedTransformAnglesSize / 6ui64 )
        {
          LODWORD(v8) = archive->archivedTransformAnglesSize / 6;
          LODWORD(v7) = v5 + SvClient::ms_clientCount;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 9270, ASSERT_TYPE_ASSERT, "( transformOffset + SvClient::GetClientCount() ) <= ( archive->archivedTransformAnglesSize / sizeof( svec3_t ) )", "transformOffset + SvClient::GetClientCount() not in [0, archive->archivedTransformAnglesSize / sizeof( svec3_t )]\n\t%u not in [0, %u]", v7, v8) )
            __debugbreak();
        }
        DebugWipe(&g_svSnapshotData.archive.archivedTransformAnglesBuffer[v5], 6i64 * (int)SvClient::ms_clientCount);
      }
      v6 = (unsigned int)(v4 * ((int)(SvClient::ms_clientCount + 31) / 32));
      if ( (unsigned int)v6 >= archive->archivedTransformValidSize >> 2 )
      {
        LODWORD(v8) = archive->archivedTransformValidSize >> 2;
        LODWORD(v7) = v4 * ((int)(SvClient::ms_clientCount + 31) / 32);
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 9278, ASSERT_TYPE_ASSERT, "(unsigned)( transformValidOffset ) < (unsigned)( archive->archivedTransformValidSize / sizeof( uint ) )", "transformValidOffset doesn't index archive->archivedTransformValidSize / sizeof( uint )\n\t%i not in [0, %i)", v7, v8) )
          __debugbreak();
      }
      if ( (unsigned int)(v6 + (int)(SvClient::ms_clientCount + 31) / 32) > archive->archivedTransformValidSize >> 2 )
      {
        LODWORD(v8) = archive->archivedTransformValidSize >> 2;
        LODWORD(v7) = v6 + (int)(SvClient::ms_clientCount + 31) / 32;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 9279, ASSERT_TYPE_ASSERT, "( transformValidOffset + ((SvClient::GetClientCount() + 31) / 32) ) <= ( archive->archivedTransformValidSize / sizeof( uint ) )", "transformValidOffset + ((SvClient::GetClientCount() + 31) / 32) not in [0, archive->archivedTransformValidSize / sizeof( uint )]\n\t%u not in [0, %u]", v7, v8) )
          __debugbreak();
      }
      memset_0(&archive->archivedTransformValidBuffer[v6], 0, 4i64 * ((int)(SvClient::ms_clientCount + 31) / 32));
    }
  }
}

/*
==============
SV_SnapshotMP_CopyArchivedPlayerTransforms
==============
*/
void SV_SnapshotMP_CopyArchivedPlayerTransforms(serverArchive_t *const dstArchive, const int dstFrameIndex, const serverArchive_t *const srcArchive, const int srcFrameIndex)
{
  __int64 v8; 
  __int64 v9; 
  int v10; 
  __int64 v11; 
  __int64 v12; 
  __int64 v13; 
  __int64 v14; 

  if ( !dstArchive && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 7408, ASSERT_TYPE_ASSERT, "( dstArchive != nullptr )", (const char *)&queryFormat, "dstArchive != nullptr") )
    __debugbreak();
  if ( !srcArchive && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 7409, ASSERT_TYPE_ASSERT, "( srcArchive != nullptr )", (const char *)&queryFormat, "srcArchive != nullptr") )
    __debugbreak();
  if ( (unsigned int)dstFrameIndex >= dstArchive->archivedFrameCount )
  {
    LODWORD(v13) = dstFrameIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 7410, ASSERT_TYPE_ASSERT, "(unsigned)( dstFrameIndex ) < (unsigned)( dstArchive->archivedFrameCount )", "dstFrameIndex doesn't index dstArchive->archivedFrameCount\n\t%i not in [0, %i)", v13, dstArchive->archivedFrameCount) )
      __debugbreak();
  }
  if ( (unsigned int)srcFrameIndex >= srcArchive->archivedFrameCount )
  {
    LODWORD(v14) = srcArchive->archivedFrameCount;
    LODWORD(v13) = srcFrameIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 7411, ASSERT_TYPE_ASSERT, "(unsigned)( srcFrameIndex ) < (unsigned)( srcArchive->archivedFrameCount )", "srcFrameIndex doesn't index srcArchive->archivedFrameCount\n\t%i not in [0, %i)", v13, v14) )
      __debugbreak();
  }
  if ( dstArchive->archivedTransformValidBuffer && srcArchive->archivedTransformValidBuffer )
  {
    v8 = dstFrameIndex * SvClient::ms_clientCount;
    v9 = srcFrameIndex * SvClient::ms_clientCount;
    if ( dstArchive->archivedTransformOriginBuffer && srcArchive->archivedTransformOriginBuffer )
    {
      if ( (unsigned int)v8 >= dstArchive->archivedTransformOriginSize / 0xC )
      {
        LODWORD(v14) = dstArchive->archivedTransformOriginSize / 0xC;
        LODWORD(v13) = dstFrameIndex * SvClient::ms_clientCount;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 7421, ASSERT_TYPE_ASSERT, "(unsigned)( dstTransformOffset ) < (unsigned)( dstArchive->archivedTransformOriginSize / sizeof( vec3_t ) )", "dstTransformOffset doesn't index dstArchive->archivedTransformOriginSize / sizeof( vec3_t )\n\t%i not in [0, %i)", v13, v14) )
          __debugbreak();
      }
      if ( (unsigned int)v9 >= srcArchive->archivedTransformOriginSize / 0xC )
      {
        LODWORD(v14) = srcArchive->archivedTransformOriginSize / 0xC;
        LODWORD(v13) = v9;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 7422, ASSERT_TYPE_ASSERT, "(unsigned)( srcTransformOffset ) < (unsigned)( srcArchive->archivedTransformOriginSize / sizeof( vec3_t ) )", "srcTransformOffset doesn't index srcArchive->archivedTransformOriginSize / sizeof( vec3_t )\n\t%i not in [0, %i)", v13, v14) )
          __debugbreak();
      }
      if ( (unsigned int)v8 + SvClient::ms_clientCount > dstArchive->archivedTransformOriginSize / 0xCui64 )
      {
        LODWORD(v14) = dstArchive->archivedTransformOriginSize / 0xC;
        LODWORD(v13) = v8 + SvClient::ms_clientCount;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 7423, ASSERT_TYPE_ASSERT, "( dstTransformOffset + SvClient::GetClientCount() ) <= ( dstArchive->archivedTransformOriginSize / sizeof( vec3_t ) )", "dstTransformOffset + SvClient::GetClientCount() not in [0, dstArchive->archivedTransformOriginSize / sizeof( vec3_t )]\n\t%u not in [0, %u]", v13, v14) )
          __debugbreak();
      }
      if ( (unsigned int)v9 + SvClient::ms_clientCount > srcArchive->archivedTransformOriginSize / 0xCui64 )
      {
        LODWORD(v14) = srcArchive->archivedTransformOriginSize / 0xC;
        LODWORD(v13) = v9 + SvClient::ms_clientCount;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 7424, ASSERT_TYPE_ASSERT, "( srcTransformOffset + SvClient::GetClientCount() ) <= ( srcArchive->archivedTransformOriginSize / sizeof( vec3_t ) )", "srcTransformOffset + SvClient::GetClientCount() not in [0, srcArchive->archivedTransformOriginSize / sizeof( vec3_t )]\n\t%u not in [0, %u]", v13, v14) )
          __debugbreak();
      }
      memcpy_0(&dstArchive->archivedTransformOriginBuffer[v8], &srcArchive->archivedTransformOriginBuffer[v9], 12i64 * (int)SvClient::ms_clientCount);
    }
    if ( dstArchive->archivedTransformAnglesBuffer && srcArchive->archivedTransformAnglesBuffer )
    {
      if ( (unsigned int)v8 >= dstArchive->archivedTransformAnglesSize / 6 )
      {
        LODWORD(v14) = dstArchive->archivedTransformAnglesSize / 6;
        LODWORD(v13) = v8;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 7433, ASSERT_TYPE_ASSERT, "(unsigned)( dstTransformOffset ) < (unsigned)( dstArchive->archivedTransformAnglesSize / sizeof( svec3_t ) )", "dstTransformOffset doesn't index dstArchive->archivedTransformAnglesSize / sizeof( svec3_t )\n\t%i not in [0, %i)", v13, v14) )
          __debugbreak();
      }
      if ( (unsigned int)v9 >= srcArchive->archivedTransformAnglesSize / 6 )
      {
        LODWORD(v14) = srcArchive->archivedTransformAnglesSize / 6;
        LODWORD(v13) = v9;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 7434, ASSERT_TYPE_ASSERT, "(unsigned)( srcTransformOffset ) < (unsigned)( srcArchive->archivedTransformAnglesSize / sizeof( svec3_t ) )", "srcTransformOffset doesn't index srcArchive->archivedTransformAnglesSize / sizeof( svec3_t )\n\t%i not in [0, %i)", v13, v14) )
          __debugbreak();
      }
      if ( (unsigned int)v8 + SvClient::ms_clientCount > dstArchive->archivedTransformAnglesSize / 6ui64 )
      {
        LODWORD(v14) = dstArchive->archivedTransformAnglesSize / 6;
        LODWORD(v13) = v8 + SvClient::ms_clientCount;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 7435, ASSERT_TYPE_ASSERT, "( dstTransformOffset + SvClient::GetClientCount() ) <= ( dstArchive->archivedTransformAnglesSize / sizeof( svec3_t ) )", "dstTransformOffset + SvClient::GetClientCount() not in [0, dstArchive->archivedTransformAnglesSize / sizeof( svec3_t )]\n\t%u not in [0, %u]", v13, v14) )
          __debugbreak();
      }
      if ( (unsigned int)v9 + SvClient::ms_clientCount > srcArchive->archivedTransformAnglesSize / 6ui64 )
      {
        LODWORD(v14) = srcArchive->archivedTransformAnglesSize / 6;
        LODWORD(v13) = v9 + SvClient::ms_clientCount;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 7436, ASSERT_TYPE_ASSERT, "( srcTransformOffset + SvClient::GetClientCount() ) <= ( srcArchive->archivedTransformAnglesSize / sizeof( svec3_t ) )", "srcTransformOffset + SvClient::GetClientCount() not in [0, srcArchive->archivedTransformAnglesSize / sizeof( svec3_t )]\n\t%u not in [0, %u]", v13, v14) )
          __debugbreak();
      }
      memcpy_0(&dstArchive->archivedTransformAnglesBuffer[v8], &srcArchive->archivedTransformAnglesBuffer[v9], 6i64 * (int)SvClient::ms_clientCount);
    }
    v10 = (int)(SvClient::ms_clientCount + 31) / 32;
    v11 = (unsigned int)(dstFrameIndex * v10);
    v12 = (unsigned int)(srcFrameIndex * v10);
    if ( (unsigned int)v11 >= dstArchive->archivedTransformValidSize >> 2 )
    {
      LODWORD(v14) = dstArchive->archivedTransformValidSize >> 2;
      LODWORD(v13) = v11;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 7445, ASSERT_TYPE_ASSERT, "(unsigned)( dstTransformValidOffset ) < (unsigned)( dstArchive->archivedTransformValidSize / sizeof( uint ) )", "dstTransformValidOffset doesn't index dstArchive->archivedTransformValidSize / sizeof( uint )\n\t%i not in [0, %i)", v13, v14) )
        __debugbreak();
    }
    if ( (unsigned int)v12 >= srcArchive->archivedTransformValidSize >> 2 )
    {
      LODWORD(v14) = srcArchive->archivedTransformValidSize >> 2;
      LODWORD(v13) = v12;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 7446, ASSERT_TYPE_ASSERT, "(unsigned)( srcTransformValidOffset ) < (unsigned)( srcArchive->archivedTransformValidSize / sizeof( uint ) )", "srcTransformValidOffset doesn't index srcArchive->archivedTransformValidSize / sizeof( uint )\n\t%i not in [0, %i)", v13, v14) )
        __debugbreak();
    }
    if ( (unsigned int)(v11 + (int)(SvClient::ms_clientCount + 31) / 32) > dstArchive->archivedTransformValidSize >> 2 )
    {
      LODWORD(v14) = dstArchive->archivedTransformValidSize >> 2;
      LODWORD(v13) = v11 + (int)(SvClient::ms_clientCount + 31) / 32;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 7447, ASSERT_TYPE_ASSERT, "( dstTransformValidOffset + ((SvClient::GetClientCount() + 31) / 32) ) <= ( dstArchive->archivedTransformValidSize / sizeof( uint ) )", "dstTransformValidOffset + ((SvClient::GetClientCount() + 31) / 32) not in [0, dstArchive->archivedTransformValidSize / sizeof( uint )]\n\t%u not in [0, %u]", v13, v14) )
        __debugbreak();
    }
    if ( (unsigned int)(v12 + (int)(SvClient::ms_clientCount + 31) / 32) > srcArchive->archivedTransformValidSize >> 2 )
    {
      LODWORD(v14) = srcArchive->archivedTransformValidSize >> 2;
      LODWORD(v13) = v12 + (int)(SvClient::ms_clientCount + 31) / 32;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 7448, ASSERT_TYPE_ASSERT, "( srcTransformValidOffset + ((SvClient::GetClientCount() + 31) / 32) ) <= ( srcArchive->archivedTransformValidSize / sizeof( uint ) )", "srcTransformValidOffset + ((SvClient::GetClientCount() + 31) / 32) not in [0, srcArchive->archivedTransformValidSize / sizeof( uint )]\n\t%u not in [0, %u]", v13, v14) )
        __debugbreak();
    }
    memcpy_0(&dstArchive->archivedTransformValidBuffer[v11], &srcArchive->archivedTransformValidBuffer[v12], 4i64 * ((int)(SvClient::ms_clientCount + 31) / 32));
  }
}

/*
==============
SV_SnapshotMP_CopyEntityFromServerMsgToClientMsg
==============
*/
void SV_SnapshotMP_CopyEntityFromServerMsgToClientMsg(SnapshotInfo *const snapInfo, msg_t *const serverMessage, msg_t *const clientMessage, const entityState_t *const oldEntity, const entityState_t *const newEntity, const ServerEntityHeader *const header)
{
  __int16 number; 
  int v11; 
  NetFieldLoD OldEntityLoD; 
  int NewEntityLoD; 
  __int64 v14; 
  const char *v15; 
  int v16; 
  const char *v17; 
  bool v18; 
  char v19; 
  char v20; 
  bool v21; 
  bool v22; 
  msg_t *v23; 
  signed int v24; 
  unsigned int v25; 
  const char *v26; 
  char *fmt; 
  __int64 v28; 
  __int16 newEntitya; 

  number = newEntity->number;
  newEntitya = newEntity->number;
  if ( !SV_SnapshotMP_IsServerMessageValidForEntity(snapInfo, oldEntity, newEntity) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 6326, ASSERT_TYPE_ASSERT, "( SV_SnapshotMP_IsServerMessageValidForEntity( snapInfo, oldEntity, newEntity ) )", (const char *)&queryFormat, "SV_SnapshotMP_IsServerMessageValidForEntity( snapInfo, oldEntity, newEntity )") )
    __debugbreak();
  v11 = number;
  OldEntityLoD = SV_SnapshotMP_GetOldEntityLoD(snapInfo, number);
  NewEntityLoD = SV_SnapshotMP_GetNewEntityLoD(snapInfo, v11);
  v14 = NewEntityLoD;
  if ( NewEntityLoD == -1 )
  {
    v15 = "newEntityLoD != NetFieldLoD_Invalid";
    v16 = 6330;
    v17 = "( newEntityLoD != NetFieldLoD_Invalid )";
  }
  else
  {
    if ( NewEntityLoD < 2 )
      goto LABEL_10;
    v15 = "newEntityLoD < NetFieldLoD_Count";
    v16 = 6331;
    v17 = "( newEntityLoD < NetFieldLoD_Count )";
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", v16, ASSERT_TYPE_ASSERT, v17, (const char *)&queryFormat, v15) )
    __debugbreak();
LABEL_10:
  v18 = (_DWORD)v14 != OldEntityLoD;
  if ( (_DWORD)v14 || (header->m_flags[0] & 1) != 0 )
  {
    v19 = 0;
    if ( (_DWORD)v14 != 1 || (header->m_flags[0] & 2) != 0 )
    {
      v20 = 0;
      if ( !v18 )
      {
LABEL_31:
        v23 = serverMessage;
        goto LABEL_32;
      }
    }
    else
    {
      v20 = 1;
    }
  }
  else
  {
    v19 = 1;
    v20 = 0;
  }
  if ( (header->m_flags[0] & 0x10) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 6339, ASSERT_TYPE_ASSERT, "( (header->m_flags & ServerEntityHeaderFlags::REMOVED) == ServerEntityHeaderFlags::NONE )", (const char *)&queryFormat, "(header->m_flags & ServerEntityHeaderFlags::REMOVED) == ServerEntityHeaderFlags::NONE") )
    __debugbreak();
  snapInfo->packetEntityType = MSG_GetPacketEntityTypeForEType((const entityType_s)newEntity->eType);
  MSG_WriteEntityIndex(snapInfo, clientMessage, v11, 11);
  MSG_WriteBit0(clientMessage);
  MSG_WriteEntityLoD(snapInfo, clientMessage, (const NetFieldLoD)v14);
  v21 = v19 && (header->m_flags[0] & 4) != 0;
  v22 = v20 && (header->m_flags[0] & 8) != 0;
  if ( !v21 && !v22 )
  {
    MSG_WriteNoDeltaBit(clientMessage);
    goto LABEL_31;
  }
  MSG_WriteDeltaBit(clientMessage);
  MSG_WriteBool(clientMessage, (header->m_flags[0] & 0x20) != 0);
  MSG_WriteLastChangedField(snapInfo, clientMessage, header->m_lastChangedField[v14], 68);
  v23 = serverMessage;
  MSG_CopyBits(clientMessage, serverMessage, header->m_totalBits[v14]);
  SV_BandwidthProfile_CopyServerMsgEntityToClientSnapshot(snapInfo, newEntitya, (const NetFieldLoD)v14);
LABEL_32:
  if ( !(_DWORD)v14 )
  {
    v24 = header->m_totalBits[1] - header->m_totalBits[0];
    if ( v24 < 0 )
    {
      v25 = header->m_flags[0];
      LODWORD(v28) = (v25 >> 3) & 1;
      LODWORD(fmt) = (v25 >> 2) & 1;
      v26 = j_va("{skipped: [%d|%d], removed: %d, isDelta[%d|%d], justUnlinked: %d, lastChangedField[%d|%d], totalBits[%d|%d]}", v25 & 1, (v25 >> 1) & 1, (v25 >> 4) & 1, fmt, v28, (v25 >> 5) & 1, header->m_lastChangedField[0], header->m_lastChangedField[1], header->m_totalBits[0], header->m_totalBits[1]);
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 6395, ASSERT_TYPE_ASSERT, "(numHighBitsRemaining >= 0)", "%s\n\t%s\n", "numHighBitsRemaining >= 0", v26) )
        __debugbreak();
    }
    if ( v24 > 0 )
      MSG_DiscardBits(v23, v24);
  }
  SV_AggregateServerEntitySkippedFields(header);
}

/*
==============
SV_SnapshotMP_CreateBaselinePlayerData
==============
*/
void SV_SnapshotMP_CreateBaselinePlayerData(const ClientSnapshotInfo *clientSnapInfo, const clientSnapshot_t *frame, const int clientNum)
{
  __int64 v3; 
  __int64 v6; 
  __int64 v7; 

  v3 = clientNum;
  if ( !frame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 3957, ASSERT_TYPE_ASSERT, "( frame )", (const char *)&queryFormat, "frame") )
    __debugbreak();
  if ( !frame->baselineSnap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 3958, ASSERT_TYPE_ASSERT, "( frame->baselineSnap )", (const char *)&queryFormat, "frame->baselineSnap") )
    __debugbreak();
  if ( clientSnapInfo->isDemoBaseline )
  {
    if ( g_svSnapshotData.hasNoDeltaPlayerData[v3] )
      return;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 3963, ASSERT_TYPE_ASSERT, "( g_svSnapshotData.hasNoDeltaPlayerData[clientNum] )", (const char *)&queryFormat, "g_svSnapshotData.hasNoDeltaPlayerData[clientNum]") )
      __debugbreak();
  }
  if ( !g_svSnapshotData.hasNoDeltaPlayerData[v3] )
  {
    if ( !g_svSnapshotData.noDeltaClientWeaponMaps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 3971, ASSERT_TYPE_ASSERT, "( g_svSnapshotData.noDeltaClientWeaponMaps )", (const char *)&queryFormat, "g_svSnapshotData.noDeltaClientWeaponMaps") )
      __debugbreak();
    if ( (unsigned int)v3 >= g_svSnapshotData.maxNoDeltaClientWeaponMaps )
    {
      LODWORD(v6) = v3;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 3972, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( g_svSnapshotData.maxNoDeltaClientWeaponMaps )", "clientNum doesn't index g_svSnapshotData.maxNoDeltaClientWeaponMaps\n\t%i not in [0, %i)", v6, g_svSnapshotData.maxNoDeltaClientWeaponMaps) )
        __debugbreak();
    }
    GSnapshotWeaponMap::CopyFromMap(&g_svSnapshotData.noDeltaClientWeaponMaps[v3], &frame->weaponMap);
    if ( !g_svSnapshotData.noDeltaPlayerStates && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 3976, ASSERT_TYPE_ASSERT, "( g_svSnapshotData.noDeltaPlayerStates )", (const char *)&queryFormat, "g_svSnapshotData.noDeltaPlayerStates") )
      __debugbreak();
    if ( (unsigned int)v3 >= g_svSnapshotData.maxNoDeltaPlayerStates )
    {
      LODWORD(v7) = g_svSnapshotData.maxNoDeltaPlayerStates;
      LODWORD(v6) = v3;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 3977, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( g_svSnapshotData.maxNoDeltaPlayerStates )", "clientNum doesn't index g_svSnapshotData.maxNoDeltaPlayerStates\n\t%i not in [0, %i)", v6, v7) )
        __debugbreak();
    }
    memcpy_0(&g_svSnapshotData.noDeltaPlayerStates[v3], frame, sizeof(g_svSnapshotData.noDeltaPlayerStates[v3]));
    g_svSnapshotData.hasNoDeltaPlayerData[v3] = 1;
  }
}

/*
==============
SV_SnapshotMP_EmitClientMessageDeltaEntity
==============
*/
char SV_SnapshotMP_EmitClientMessageDeltaEntity(const SvSnapshotDelta *snapDelta, SnapshotInfo *const snapInfo, msg_t *const clientMessage, msg_t *const serverMessage, const int oldViewClientNum, const int newViewClientNum, const unsigned int *oldClientMask, const unsigned int *newClientMask, const entityState_t *const oldEntity, const entityState_t *const newEntity)
{
  bool ShouldEntityGoToClient; 
  bool v16; 
  bool v17; 
  int number; 
  const ServerEntityHeader *v19; 
  int eType; 
  int v21; 
  PacketDataType v22; 
  int v24; 
  const ServerEntityHeader *v25; 
  ServerEntityHeader *header; 
  const msg_t *headera; 
  bool oldClientMaska; 
  int newClientMaska; 

  if ( !snapInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 6438, ASSERT_TYPE_ASSERT, "( snapInfo != nullptr )", (const char *)&queryFormat, "snapInfo != nullptr") )
    __debugbreak();
  if ( !clientMessage && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 6439, ASSERT_TYPE_ASSERT, "( clientMessage != nullptr )", (const char *)&queryFormat, "clientMessage != nullptr") )
    __debugbreak();
  if ( !oldClientMask && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 6440, ASSERT_TYPE_ASSERT, "( oldClientMask != nullptr )", (const char *)&queryFormat, "oldClientMask != nullptr") )
    __debugbreak();
  if ( !newClientMask && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 6441, ASSERT_TYPE_ASSERT, "( newClientMask != nullptr )", (const char *)&queryFormat, "newClientMask != nullptr") )
    __debugbreak();
  if ( !oldEntity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 6442, ASSERT_TYPE_ASSERT, "( oldEntity != nullptr )", (const char *)&queryFormat, "oldEntity != nullptr") )
    __debugbreak();
  if ( !newEntity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 6443, ASSERT_TYPE_ASSERT, "( newEntity != nullptr )", (const char *)&queryFormat, "newEntity != nullptr") )
    __debugbreak();
  newClientMaska = MSG_GetUsedBitCount(clientMessage);
  ShouldEntityGoToClient = SV_SnapshotMP_ShouldEntityGoToClient(oldEntity->number, oldClientMask, oldViewClientNum, oldViewClientNum);
  oldClientMaska = ShouldEntityGoToClient;
  v16 = SV_SnapshotMP_ShouldEntityGoToClient(newEntity->number, newClientMask, newViewClientNum, newViewClientNum);
  v17 = v16;
  if ( ShouldEntityGoToClient && v16 )
  {
    if ( serverMessage )
    {
      number = newEntity->number;
      if ( MSG_ReadEntityIndex(serverMessage, 11) != number )
      {
        LODWORD(header) = MSG_ReadEntityIndex(serverMessage, 11);
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 6459, ASSERT_TYPE_ASSERT, "( MSG_ReadEntityIndex( serverMessage, ( 11 ) ) ) == ( newEntity->number )", "MSG_ReadEntityIndex( serverMessage, GENTITYNUM_BITS ) == newEntity->number\n\t%i, %i", header, number) )
          __debugbreak();
      }
      v19 = ServerEntityHeader::Read(serverMessage);
      if ( !v19 )
        goto LABEL_30;
      if ( SV_SnapshotMP_IsServerMessageValidForEntity(snapInfo, oldEntity, newEntity) )
      {
        SV_SnapshotMP_CopyEntityFromServerMsgToClientMsg(snapInfo, serverMessage, clientMessage, oldEntity, newEntity, v19);
        goto LABEL_30;
      }
      MSG_DiscardBits(serverMessage, v19->m_totalBits[1]);
    }
    SV_SnapshotMP_EmitClientMessageDeltaEntity_Internal(snapDelta, snapInfo, clientMessage, oldEntity, newEntity);
LABEL_30:
    eType = newEntity->eType;
    v21 = newEntity->number;
    v22 = ANALYZE_SNAPSHOT_TEMPENTITY;
    headera = clientMessage;
    if ( eType < 29 )
      v22 = ANALYZE_SNAPSHOT_DELTAENTITY;
LABEL_32:
    SV_TrackPacketData(snapInfo->clientNum, v22, eType, v21, newClientMaska, headera);
    return 1;
  }
  if ( serverMessage )
  {
    v24 = newEntity->number;
    if ( MSG_ReadEntityIndex(serverMessage, 11) != v24 )
    {
      LODWORD(header) = MSG_ReadEntityIndex(serverMessage, 11);
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 6493, ASSERT_TYPE_ASSERT, "( MSG_ReadEntityIndex( serverMessage, ( 11 ) ) ) == ( newEntity->number )", "MSG_ReadEntityIndex( serverMessage, GENTITYNUM_BITS ) == newEntity->number\n\t%i, %i", header, v24) )
        __debugbreak();
    }
    v25 = ServerEntityHeader::Read(serverMessage);
    if ( v25 )
      MSG_DiscardBits(serverMessage, v25->m_totalBits[1]);
    ShouldEntityGoToClient = oldClientMaska;
  }
  if ( v17 )
  {
    SV_SnapshotMP_EmitClientMessageNewEntity_Internal(snapDelta, snapInfo, clientMessage, newEntity);
    eType = newEntity->eType;
    v21 = newEntity->number;
    v22 = ANALYZE_SNAPSHOT_TEMPENTITY;
    headera = clientMessage;
    if ( eType < 29 )
      v22 = ANALYZE_SNAPSHOT_NEWENTITY;
    goto LABEL_32;
  }
  if ( !ShouldEntityGoToClient || !SV_SnapshotMP_EmitClientMessageRemovedEntity_Internal(snapDelta, snapInfo, clientMessage, oldEntity) )
    return 0;
  SV_TrackPacketData(snapInfo->clientNum, (const PacketDataType)((newEntity->eType >= ET_EVENTS) + 2), newEntity->eType, newEntity->number, newClientMaska, clientMessage);
  return 1;
}

/*
==============
SV_SnapshotMP_EmitClientMessageDeltaEntity_Internal
==============
*/
void SV_SnapshotMP_EmitClientMessageDeltaEntity_Internal(const SvSnapshotDelta *snapDelta, SnapshotInfo *const snapInfo, msg_t *const clientMessage, const entityState_t *const oldEntity, const entityState_t *const newEntity)
{
  if ( !snapInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 6305, ASSERT_TYPE_ASSERT, "( snapInfo != nullptr )", (const char *)&queryFormat, "snapInfo != nullptr") )
    __debugbreak();
  if ( !oldEntity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 6306, ASSERT_TYPE_ASSERT, "( oldEntity != nullptr )", (const char *)&queryFormat, "oldEntity != nullptr") )
    __debugbreak();
  if ( !newEntity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 6307, ASSERT_TYPE_ASSERT, "( newEntity != nullptr )", (const char *)&queryFormat, "newEntity != nullptr") )
    __debugbreak();
  if ( GameModeFlagValues::ms_mpValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 190, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a MP-only context", "IsFlagActive( index )") )
    __debugbreak();
  snapInfo->entNeverChanges = GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&newEntity->lerp.eFlags, ACTIVE, 0x1Eu);
  MSG_WriteEntity(snapInfo, clientMessage, snapDelta->oldTimeDelta, snapDelta->newTimeDelta, snapDelta->newServerTime, oldEntity, newEntity, NULL, 0);
}

/*
==============
SV_SnapshotMP_EmitClientMessageEntities
==============
*/
__int64 SV_SnapshotMP_EmitClientMessageEntities(const SvSnapshotDelta *snapDelta, SnapshotInfo *const snapInfo, msg_t *const clientMessage, msg_t *const serverMessage, const clientSnapshot_t *const oldFrame, const clientSnapshot_t *const newFrame)
{
  msg_t *v7; 
  int v8; 
  __int16 v9; 
  unsigned int maxSnapshotEntitiesPerClient; 
  unsigned int v11; 
  int clientNum; 
  SvSnapshotEntries *p_serverEntries; 
  SvSnapshotType snapshotType; 
  unsigned int *v15; 
  unsigned int nextNoDeltaEntity; 
  unsigned int *v17; 
  __int64 v18; 
  unsigned int *v19; 
  __int64 v20; 
  unsigned int v21; 
  unsigned int v22; 
  entityState_t *v23; 
  int number; 
  entityState_t *newEntity; 
  __int16 v26; 
  __int64 v27; 
  int v28; 
  int *v29; 
  unsigned int v30; 
  msg_t *v31; 
  SnapshotInfo *v32; 
  SvSnapshotDelta *v33; 
  msg_t *v34; 
  SnapshotInfo *v35; 
  __int64 v36; 
  int v37; 
  int *v38; 
  unsigned int v39; 
  int v40; 
  msg_t *v41; 
  msg_t *v42; 
  SnapshotInfo *v43; 
  msg_t *v44; 
  SvSnapshotDelta *v45; 
  int v46; 
  const dvar_t *v47; 
  int fmt; 
  int fmta; 
  entityState_t **outEntityState; 
  entityState_t **outEntityStatea; 
  int outEntityStateb; 
  unsigned int *outEntityStatec; 
  unsigned int **outClientBits; 
  unsigned int **outClientBitsa; 
  unsigned int *outClientBitsb; 
  unsigned int **outClientBitsc; 
  unsigned int *newClientMask; 
  const unsigned int *newClientMaska; 
  entityState_t *oldEntity; 
  entityState_t *oldEntitya; 
  __int64 v63; 
  __int64 v64; 
  unsigned __int8 v65; 
  int v66; 
  unsigned int v67; 
  unsigned int v68; 
  unsigned int entCount; 
  unsigned int v70; 
  unsigned int *oldClientMask; 
  int oldViewClientNum; 
  int v73; 
  __int64 firstEntIndex; 
  __int64 v75; 
  SnapshotInfo *snapInfoa; 
  int v77; 
  int newViewClientNum; 
  __int64 firstEntFullStateIndex; 
  __int64 v80; 
  msg_t *serverMessagea; 
  SvSnapshotDelta *snapDeltaa; 
  msg_t *clientMessagea; 
  SvSnapshotFrameBuffers *frameBuffers; 
  unsigned int *v85; 
  entityState_t *v86; 
  SvSnapshotFrameBuffers *StorageBuffer; 
  entityState_t *v88; 
  int v89[64]; 

  v7 = clientMessage;
  serverMessagea = serverMessage;
  clientMessagea = clientMessage;
  snapInfoa = snapInfo;
  snapDeltaa = (SvSnapshotDelta *)snapDelta;
  if ( !snapInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 6688, ASSERT_TYPE_ASSERT, "( snapInfo != nullptr )", (const char *)&queryFormat, "snapInfo != nullptr") )
    __debugbreak();
  if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 6689, ASSERT_TYPE_ASSERT, "( clientMessage != nullptr )", (const char *)&queryFormat, "clientMessage != nullptr") )
    __debugbreak();
  if ( !newFrame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 6690, ASSERT_TYPE_ASSERT, "( newFrame != nullptr )", (const char *)&queryFormat, "newFrame != nullptr") )
    __debugbreak();
  LOWORD(v8) = -1;
  v65 = 1;
  v73 = -1;
  v9 = -1;
  memset_0(v89, 0, sizeof(v89));
  if ( serverMessage )
    MSG_ClearLastReferencedEntity(serverMessage);
  MSG_ClearLastReferencedEntity(v7);
  maxSnapshotEntitiesPerClient = g_svSnapshotData.maxSnapshotEntitiesPerClient;
  if ( newFrame->baselineSnap )
    maxSnapshotEntitiesPerClient = g_svSnapshotData.maxNoDeltaEntities;
  v11 = 0;
  v68 = maxSnapshotEntitiesPerClient;
  if ( !maxSnapshotEntitiesPerClient )
  {
    LODWORD(outEntityState) = 0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 6709, ASSERT_TYPE_ASSERT, "( maxEntitiesInClientSnapshot ) > ( 0 )", "maxEntitiesInClientSnapshot > 0\n\t%i, %i", outEntityState, 0i64) )
      __debugbreak();
  }
  clientNum = newFrame->ps.clientNum;
  newViewClientNum = clientNum;
  if ( oldFrame )
    clientNum = oldFrame->ps.clientNum;
  oldViewClientNum = clientNum;
  p_serverEntries = &oldFrame->serverEntries;
  if ( !oldFrame )
    p_serverEntries = NULL;
  if ( p_serverEntries )
    frameBuffers = SvSnapshotEntries::GetStorageBuffer(p_serverEntries);
  else
    frameBuffers = NULL;
  StorageBuffer = SvSnapshotEntries::GetStorageBuffer(&newFrame->serverEntries);
  snapshotType = snapDeltaa->snapshotType;
  if ( newFrame == (const clientSnapshot_t *const)-27512i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 5992, ASSERT_TYPE_ASSERT, "( newEntries != nullptr )", (const char *)&queryFormat, "newEntries != nullptr") )
    __debugbreak();
  switch ( snapshotType )
  {
    case HALF:
      if ( !p_serverEntries && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 6023, ASSERT_TYPE_ASSERT, "( oldEntries != nullptr )", (const char *)&queryFormat, "oldEntries != nullptr") )
        __debugbreak();
      if ( newFrame == (const clientSnapshot_t *const)-27512i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 6024, ASSERT_TYPE_ASSERT, "( newEntries != nullptr )", (const char *)&queryFormat, "newEntries != nullptr") )
        __debugbreak();
      v17 = (unsigned int *)p_serverEntries->m_first[1];
      nextNoDeltaEntity = p_serverEntries->m_count[0];
      v15 = (unsigned int *)newFrame->serverEntries.m_first[1];
      firstEntIndex = p_serverEntries->m_first[0];
      v75 = newFrame->serverEntries.m_first[0];
      entCount = newFrame->serverEntries.m_count[0];
      break;
    case HALF_HALF:
      if ( newFrame == (const clientSnapshot_t *const)-27512i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 6011, ASSERT_TYPE_ASSERT, "( newEntries != nullptr )", (const char *)&queryFormat, "newEntries != nullptr") )
        __debugbreak();
      v18 = newFrame->serverEntries.m_first[0];
      nextNoDeltaEntity = g_svSnapshotData.nextNoDeltaEntity;
      v17 = NULL;
      v15 = (unsigned int *)newFrame->serverEntries.m_first[1];
      firstEntIndex = -10000000i64;
      entCount = newFrame->serverEntries.m_count[0];
      firstEntFullStateIndex = 0i64;
      v75 = v18;
      goto LABEL_46;
    case LONG:
      v17 = NULL;
      entCount = g_svSnapshotData.nextNoDeltaEntity;
      nextNoDeltaEntity = 0;
      firstEntFullStateIndex = 0i64;
      v15 = NULL;
      firstEntIndex = 0i64;
      v70 = 0;
      v80 = 0i64;
      v75 = -10000000i64;
      goto LABEL_47;
    default:
      LODWORD(outEntityState) = snapshotType;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 6036, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Uknown server snapshot message type: %d", outEntityState) )
        __debugbreak();
      v15 = oldClientMask;
      nextNoDeltaEntity = v68;
      v17 = oldClientMask;
      entCount = v68;
      firstEntIndex = (__int64)oldClientMask;
      v75 = (__int64)oldClientMask;
      break;
  }
  firstEntFullStateIndex = (__int64)v17;
LABEL_46:
  v80 = (__int64)v15;
  v70 = nextNoDeltaEntity;
LABEL_47:
  if ( v15 != (unsigned int *)newFrame->serverEntries.m_first[2] )
  {
    LODWORD(outClientBits) = newFrame->serverEntries.m_first[2];
    LODWORD(outEntityState) = (_DWORD)v15;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 6722, ASSERT_TYPE_ASSERT, "( newEntFullStart ) == ( newFrameEntries->GetFirst( SvSnapshotBufferType::ENTITY_CLIENTMASK ) )", "newEntFullStart == newFrameEntries->GetFirst( SvSnapshotBufferType::ENTITY_CLIENTMASK )\n\t%i, %i", outEntityState, outClientBits) )
      __debugbreak();
  }
  if ( p_serverEntries )
    v19 = (unsigned int *)p_serverEntries->m_first[2];
  else
    v19 = NULL;
  if ( v17 != v19 )
  {
    if ( p_serverEntries )
      v20 = p_serverEntries->m_first[2];
    else
      LODWORD(v20) = 0;
    LODWORD(outClientBits) = v20;
    LODWORD(outEntityState) = (_DWORD)v17;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 6723, ASSERT_TYPE_ASSERT, "( oldEntFullStart ) == ( oldFrameEntries ? oldFrameEntries->GetFirst( SvSnapshotBufferType::ENTITY_CLIENTMASK ) : 0 )", "oldEntFullStart == oldFrameEntries ? oldFrameEntries->GetFirst( SvSnapshotBufferType::ENTITY_CLIENTMASK ) : 0\n\t%i, %i", outEntityState, outClientBits) )
      __debugbreak();
  }
  v21 = 0;
  v66 = 0;
  v22 = 0;
  v67 = 0;
  while ( v21 < entCount || v22 < nextNoDeltaEntity )
  {
    SV_SnapshotMP_GetNextEnt(frameBuffers, nextNoDeltaEntity, firstEntIndex, firstEntFullStateIndex, v22, (const entityState_t **)&v86, (const unsigned int **)&oldClientMask);
    v23 = v86;
    if ( v86 )
      number = (unsigned __int16)v86->number;
    else
      number = 0x7FFF;
    v77 = number;
    if ( v86 && v86->number <= (__int16)v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 6732, ASSERT_TYPE_ASSERT, "( (oldEnt == nullptr) || (oldEnt->number > lastOldEntNum) )", (const char *)&queryFormat, "(oldEnt == nullptr) || (oldEnt->number > lastOldEntNum)") )
      __debugbreak();
    SV_SnapshotMP_GetNextEnt(StorageBuffer, entCount, v75, v80, v21, (const entityState_t **)&v88, (const unsigned int **)&v85);
    newEntity = v88;
    if ( v88 )
      v26 = v88->number;
    else
      v26 = 0x7FFF;
    if ( v88 && v88->number <= v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 6736, ASSERT_TYPE_ASSERT, "( (newEnt == nullptr) || (newEnt->number > lastNewEntNum) )", (const char *)&queryFormat, "(newEnt == nullptr) || (newEnt->number > lastNewEntNum)") )
      __debugbreak();
    if ( v26 == (_WORD)number )
    {
      if ( (unsigned __int16)v26 >= 0x800u )
      {
        LODWORD(outClientBitsa) = 2048;
        LODWORD(outEntityStatea) = v26;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 6741, ASSERT_TYPE_ASSERT, "(unsigned)( newEntNum ) < (unsigned)( ( 2048 ) )", "newEntNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", outEntityStatea, outClientBitsa) )
          __debugbreak();
      }
      v27 = (__int64)v26 >> 5;
      v28 = v89[v27];
      v29 = &v89[v27];
      v30 = 0x80000000 >> (v26 & 0x1F);
      if ( (v28 & v30) != 0 )
      {
        LODWORD(v64) = v67;
        LODWORD(v63) = v66;
        LODWORD(oldEntity) = v26;
        LODWORD(newClientMask) = (__int16)number;
        LODWORD(outClientBitsa) = v26;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 6741, ASSERT_TYPE_ASSERT, "((entitiesValid[newEntNum >> 5] & BitShiftMasked( newEntNum )) == 0)", "%s\n\tnumber is %i, oldnum is %i, newnum is %i, to_first is %zi, from_first is %zi, newindex is %i, oldindex is %i", "(entitiesValid[newEntNum >> 5] & BitShiftMasked( newEntNum )) == 0", outClientBitsa, newClientMask, oldEntity, v75, firstEntIndex, v63, v64) )
          __debugbreak();
      }
      v31 = serverMessagea;
      v32 = snapInfoa;
      v33 = snapDeltaa;
      oldEntitya = v23;
      v7 = clientMessagea;
      newClientMaska = v85;
      v34 = clientMessagea;
      outClientBitsb = oldClientMask;
      outEntityStateb = newViewClientNum;
      fmt = oldViewClientNum;
      *v29 = v28 | v30;
      if ( SV_SnapshotMP_EmitClientMessageDeltaEntity(v33, v32, v34, v31, fmt, outEntityStateb, outClientBitsb, newClientMaska, oldEntitya, newEntity) )
        ++v11;
      v9 = v26;
      v35 = snapInfoa;
      v22 = v67 + 1;
      v21 = ++v66;
LABEL_99:
      v8 = (unsigned __int16)number;
      v67 = v22;
      v41 = serverMessagea;
      v73 = v8;
      goto LABEL_100;
    }
    if ( v26 >= (__int16)number )
    {
      v35 = snapInfoa;
      outClientBitsc = (unsigned int **)v23;
      v7 = clientMessagea;
      if ( SV_SnapshotMP_EmitClientMessageRemovedEntity(snapDeltaa, snapInfoa, clientMessagea, serverMessagea, oldViewClientNum, oldClientMask, (const entityState_t *const)outClientBitsc) )
        ++v11;
      ++v22;
      goto LABEL_99;
    }
    if ( (unsigned __int16)v26 >= 0x800u )
    {
      LODWORD(outClientBitsa) = 2048;
      LODWORD(outEntityStatea) = v26;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 6761, ASSERT_TYPE_ASSERT, "(unsigned)( newEntNum ) < (unsigned)( ( 2048 ) )", "newEntNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", outEntityStatea, outClientBitsa) )
        __debugbreak();
    }
    v36 = (__int64)v26 >> 5;
    v37 = v89[v36];
    v38 = &v89[v36];
    v39 = 0x80000000 >> (v26 & 0x1F);
    if ( (v37 & v39) != 0 )
    {
      LODWORD(v64) = v67;
      LODWORD(v63) = v66;
      LODWORD(oldEntity) = v26;
      LODWORD(newClientMask) = (__int16)v77;
      LODWORD(outClientBitsa) = v26;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 6761, ASSERT_TYPE_ASSERT, "((entitiesValid[newEntNum >> 5] & BitShiftMasked( newEntNum )) == 0)", "%s\n\tnumber is %i, oldnum is %i, newnum is %i, to_first is %zi, from_first is %zi, newindex is %i, oldindex is %i", "(entitiesValid[newEntNum >> 5] & BitShiftMasked( newEntNum )) == 0", outClientBitsa, newClientMask, oldEntity, v75, firstEntIndex, v63, v64) )
        __debugbreak();
    }
    v40 = v39 | v37;
    v41 = serverMessagea;
    v7 = clientMessagea;
    v42 = serverMessagea;
    v43 = snapInfoa;
    v44 = clientMessagea;
    v45 = snapDeltaa;
    outEntityStatec = v85;
    fmta = newViewClientNum;
    *v38 = v40;
    if ( SV_SnapshotMP_EmitClientMessageNewEntity(v45, v43, v44, v42, fmta, outEntityStatec, newEntity) )
      ++v11;
    v9 = v26;
    v22 = v67;
    v21 = v66 + 1;
    LOWORD(v8) = v73;
    v35 = snapInfoa;
    ++v66;
LABEL_100:
    if ( v11 >= v68 )
    {
      v46 = v35->clientNum;
      if ( Sys_Milliseconds() >= dword_14E959410 )
      {
        G_Debug_PrintEntityDebugInfoToConsole(0, v46);
        dword_14E959410 = Sys_Milliseconds() + 1000;
      }
      SV_SetEntityLimitReached(v46);
      Com_Printf(131087, "[Snapshot] Hit max entities (%d) in client snapshot. See log for details.\n", v68);
      v47 = DCONST_DVARBOOL_sv_sendOverMaxSnapshotEntities;
      if ( !DCONST_DVARBOOL_sv_sendOverMaxSnapshotEntities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sv_sendOverMaxSnapshotEntities") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v47);
      if ( !v47->current.enabled )
        goto LABEL_111;
    }
    if ( v41 && v41->overflowed || v7->overflowed )
    {
LABEL_111:
      v65 = 0;
      break;
    }
    nextNoDeltaEntity = v70;
  }
  MSG_WriteEntityIndex(snapInfoa, v7, 2047, 11);
  return v65;
}

/*
==============
SV_SnapshotMP_EmitClientMessageNewEntity
==============
*/
char SV_SnapshotMP_EmitClientMessageNewEntity(const SvSnapshotDelta *snapDelta, SnapshotInfo *const snapInfo, msg_t *const clientMessage, msg_t *const serverMessage, const int newViewClientNum, const unsigned int *newClientMask, const entityState_t *const newEntity)
{
  int UsedBitCount; 
  int number; 
  const ServerEntityHeader *v13; 
  const ServerEntityHeader *v14; 
  int eType; 
  PacketDataType v16; 
  int v18; 
  const ServerEntityHeader *v19; 
  const ServerEntityHeader *v20; 
  ServerEntityHeader *header; 

  if ( !snapInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 6558, ASSERT_TYPE_ASSERT, "( snapInfo != nullptr )", (const char *)&queryFormat, "snapInfo != nullptr") )
    __debugbreak();
  if ( !clientMessage && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 6559, ASSERT_TYPE_ASSERT, "( clientMessage != nullptr )", (const char *)&queryFormat, "clientMessage != nullptr") )
    __debugbreak();
  if ( !newClientMask && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 6560, ASSERT_TYPE_ASSERT, "( newClientMask != nullptr )", (const char *)&queryFormat, "newClientMask != nullptr") )
    __debugbreak();
  if ( !newEntity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 6561, ASSERT_TYPE_ASSERT, "( newEntity != nullptr )", (const char *)&queryFormat, "newEntity != nullptr") )
    __debugbreak();
  UsedBitCount = MSG_GetUsedBitCount(clientMessage);
  if ( SV_SnapshotMP_ShouldEntityGoToClient(newEntity->number, newClientMask, newViewClientNum, newViewClientNum) )
  {
    if ( serverMessage )
    {
      number = newEntity->number;
      if ( MSG_ReadEntityIndex(serverMessage, 11) != number )
      {
        LODWORD(header) = MSG_ReadEntityIndex(serverMessage, 11);
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 6576, ASSERT_TYPE_ASSERT, "( MSG_ReadEntityIndex( serverMessage, ( 11 ) ) ) == ( newEntity->number )", "MSG_ReadEntityIndex( serverMessage, GENTITYNUM_BITS ) == newEntity->number\n\t%i, %i", header, number) )
          __debugbreak();
      }
      v13 = ServerEntityHeader::Read(serverMessage);
      v14 = v13;
      if ( v13 )
      {
        SV_SnapshotMP_CheckEntityInServerMessage(snapInfo, v13, newEntity);
        SV_SnapshotMP_CopyEntityFromServerMsgToClientMsg(snapInfo, serverMessage, clientMessage, NULL, newEntity, v14);
      }
    }
    else
    {
      SV_SnapshotMP_EmitClientMessageNewEntity_Internal(snapDelta, snapInfo, clientMessage, newEntity);
    }
    eType = newEntity->eType;
    v16 = ANALYZE_SNAPSHOT_TEMPENTITY;
    if ( eType < 29 )
      v16 = ANALYZE_SNAPSHOT_NEWENTITY;
    SV_TrackPacketData(snapInfo->clientNum, v16, eType, newEntity->number, UsedBitCount, clientMessage);
    return 1;
  }
  else
  {
    if ( serverMessage )
    {
      v18 = newEntity->number;
      if ( MSG_ReadEntityIndex(serverMessage, 11) != v18 )
      {
        LODWORD(header) = MSG_ReadEntityIndex(serverMessage, 11);
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 6602, ASSERT_TYPE_ASSERT, "( MSG_ReadEntityIndex( serverMessage, ( 11 ) ) ) == ( newEntity->number )", "MSG_ReadEntityIndex( serverMessage, GENTITYNUM_BITS ) == newEntity->number\n\t%i, %i", header, v18) )
          __debugbreak();
      }
      v19 = ServerEntityHeader::Read(serverMessage);
      v20 = v19;
      if ( v19 )
      {
        SV_SnapshotMP_CheckEntityInServerMessage(snapInfo, v19, newEntity);
        MSG_DiscardBits(serverMessage, v20->m_totalBits[1]);
      }
    }
    return 0;
  }
}

/*
==============
SV_SnapshotMP_EmitClientMessageNewEntity_Internal
==============
*/
void SV_SnapshotMP_EmitClientMessageNewEntity_Internal(const SvSnapshotDelta *snapDelta, SnapshotInfo *const snapInfo, msg_t *const clientMessage, const entityState_t *const newEntity)
{
  unsigned int number; 
  entityState_t outBaseline; 

  if ( !snapInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 6264, ASSERT_TYPE_ASSERT, "( snapInfo != nullptr )", (const char *)&queryFormat, "snapInfo != nullptr") )
    __debugbreak();
  if ( !clientMessage && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 6265, ASSERT_TYPE_ASSERT, "( clientMessage != nullptr )", (const char *)&queryFormat, "clientMessage != nullptr") )
    __debugbreak();
  if ( !newEntity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 6266, ASSERT_TYPE_ASSERT, "( newEntity != nullptr )", (const char *)&queryFormat, "newEntity != nullptr") )
    __debugbreak();
  if ( GameModeFlagValues::ms_mpValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 190, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a MP-only context", "IsFlagActive( index )") )
    __debugbreak();
  snapInfo->entNeverChanges = GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&newEntity->lerp.eFlags, ACTIVE, 0x1Eu);
  snapInfo->fromBaseline = 1;
  SV_SnapshotMP_GetBaselineEntity(snapDelta, newEntity->number, &outBaseline);
  number = newEntity->number;
  if ( number >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 263, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", newEntity->number, 2048) )
    __debugbreak();
  snapInfo->oldEntitiesLoD.array[(unsigned __int64)number >> 5] |= 0x80000000 >> (number & 0x1F);
  MSG_WriteEntity(snapInfo, clientMessage, snapDelta->oldTimeDelta, snapDelta->newTimeDelta, snapDelta->newServerTime, &outBaseline, newEntity, NULL, 1);
  snapInfo->fromBaseline = 0;
}

/*
==============
SV_SnapshotMP_EmitClientMessageRemovedEntity
==============
*/
char SV_SnapshotMP_EmitClientMessageRemovedEntity(const SvSnapshotDelta *snapDelta, SnapshotInfo *const snapInfo, msg_t *const clientMessage, msg_t *const serverMessage, const int oldViewClientNum, const unsigned int *oldClientMask, const entityState_t *const oldEntity)
{
  int UsedBitCount; 
  bool ShouldEntityGoToClient; 
  int number; 
  msg_t *msg; 

  if ( !snapInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 6628, ASSERT_TYPE_ASSERT, "( snapInfo != nullptr )", (const char *)&queryFormat, "snapInfo != nullptr") )
    __debugbreak();
  if ( !clientMessage && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 6629, ASSERT_TYPE_ASSERT, "( clientMessage != nullptr )", (const char *)&queryFormat, "clientMessage != nullptr") )
    __debugbreak();
  if ( !oldClientMask && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 6630, ASSERT_TYPE_ASSERT, "( oldClientMask != nullptr )", (const char *)&queryFormat, "oldClientMask != nullptr") )
    __debugbreak();
  if ( !oldEntity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 6631, ASSERT_TYPE_ASSERT, "( oldEntity != nullptr )", (const char *)&queryFormat, "oldEntity != nullptr") )
    __debugbreak();
  UsedBitCount = MSG_GetUsedBitCount(clientMessage);
  ShouldEntityGoToClient = SV_SnapshotMP_ShouldEntityGoToClient(oldEntity->number, oldClientMask, oldViewClientNum, oldViewClientNum);
  if ( serverMessage )
  {
    number = oldEntity->number;
    if ( MSG_ReadEntityIndex(serverMessage, 11) != number )
    {
      LODWORD(msg) = MSG_ReadEntityIndex(serverMessage, 11);
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 6643, ASSERT_TYPE_ASSERT, "( MSG_ReadEntityIndex( serverMessage, ( 11 ) ) ) == ( oldEntity->number )", "MSG_ReadEntityIndex( serverMessage, GENTITYNUM_BITS ) == oldEntity->number\n\t%i, %i", msg, number) )
        __debugbreak();
    }
  }
  if ( !ShouldEntityGoToClient || !SV_SnapshotMP_EmitClientMessageRemovedEntity_Internal(snapDelta, snapInfo, clientMessage, oldEntity) )
    return 0;
  SV_TrackPacketData(snapInfo->clientNum, (const PacketDataType)((oldEntity->eType >= ET_EVENTS) + 2), oldEntity->eType, oldEntity->number, UsedBitCount, clientMessage);
  return 1;
}

/*
==============
SV_SnapshotMP_EmitClientMessageRemovedEntity_Internal
==============
*/
char SV_SnapshotMP_EmitClientMessageRemovedEntity_Internal(const SvSnapshotDelta *snapDelta, SnapshotInfo *const snapInfo, msg_t *const clientMessage, const entityState_t *const oldEntity)
{
  bool v8; 

  if ( !snapInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 6287, ASSERT_TYPE_ASSERT, "( snapInfo != nullptr )", (const char *)&queryFormat, "snapInfo != nullptr") )
    __debugbreak();
  if ( !oldEntity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 6288, ASSERT_TYPE_ASSERT, "( oldEntity != nullptr )", (const char *)&queryFormat, "oldEntity != nullptr") )
    __debugbreak();
  if ( GameModeFlagValues::ms_mpValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 190, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a MP-only context", "IsFlagActive( index )") )
    __debugbreak();
  v8 = GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&oldEntity->lerp.eFlags, ACTIVE, 0x1Eu);
  snapInfo->entNeverChanges = v8;
  if ( v8 )
    return 0;
  MSG_WriteEntity(snapInfo, clientMessage, snapDelta->oldTimeDelta, snapDelta->newTimeDelta, snapDelta->newServerTime, oldEntity, NULL, NULL, 1);
  return 1;
}

/*
==============
SV_SnapshotMP_EmitClientMessageScriptables
==============
*/
void SV_SnapshotMP_EmitClientMessageScriptables(const SvSnapshotDelta *snapDelta, const SnapshotInfo *snapInfo, msg_t *const msg, const clientSnapshot_t *oldFrame, const clientSnapshot_t *const newFrame)
{
  const clientSnapshot_t *v9; 
  const ScriptableReplicatedLimits *ReplicatedLimits; 
  unsigned int v11; 
  SvClientMP *client; 
  const clientSnapshot_t *oldChangeSeqIndex; 
  const SvClientFrameInfo *FrameInfoForSequenceConst; 
  SvSnapshotFrameBuffers *StorageBuffer; 
  const ScriptableReplicatedInstance *BufferEntryAtIndex; 
  const ScriptablePartData *v17; 
  ScriptablePartData *toParts; 
  __int64 toPartCount; 
  __int64 v20; 
  int bitsUsedPrev; 
  __int64 index; 

  if ( !snapInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 3171, ASSERT_TYPE_ASSERT, "( snapInfo != nullptr )", (const char *)&queryFormat, "snapInfo != nullptr") )
    __debugbreak();
  v9 = newFrame;
  if ( !newFrame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 3172, ASSERT_TYPE_ASSERT, "( newFrame != nullptr )", (const char *)&queryFormat, "newFrame != nullptr") )
    __debugbreak();
  bitsUsedPrev = MSG_GetUsedBitCount(msg);
  if ( snapDelta->snapshotType == LONG )
  {
    ScriptableMsg_WriteSnapshotNoData(snapInfo, msg);
  }
  else
  {
    ReplicatedLimits = ScriptableSv_GetReplicatedLimits();
    v11 = newFrame->serverEntries.m_count[7];
    index = newFrame->serverEntries.m_first[6];
    v20 = newFrame->serverEntries.m_first[7];
    LODWORD(newFrame) = newFrame->serverEntries.m_count[6];
    if ( (_DWORD)newFrame != ReplicatedLimits->instanceLimit )
    {
      LODWORD(toParts) = v9->serverEntries.m_count[6];
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 3196, ASSERT_TYPE_ASSERT, "( toScriptableInstCount ) == ( limits.instanceLimit )", "toScriptableInstCount == limits.instanceLimit\n\t%i, %i", toParts, ReplicatedLimits->instanceLimit) )
        __debugbreak();
    }
    if ( v11 != ReplicatedLimits->partTotalLimit )
    {
      LODWORD(toPartCount) = ReplicatedLimits->partTotalLimit;
      LODWORD(toParts) = v11;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 3197, ASSERT_TYPE_ASSERT, "( toScriptablePartCount ) == ( limits.partTotalLimit )", "toScriptablePartCount == limits.partTotalLimit\n\t%i, %i", toParts, toPartCount) )
        __debugbreak();
    }
    client = (SvClientMP *)snapInfo->client;
    if ( snapDelta->snapshotType == HALF )
    {
      if ( !oldFrame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 3153, ASSERT_TYPE_ASSERT, "( oldFrame != nullptr )", (const char *)&queryFormat, "oldFrame != nullptr") )
        __debugbreak();
      if ( !client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 3154, ASSERT_TYPE_ASSERT, "( client != nullptr )", (const char *)&queryFormat, "client != nullptr") )
        __debugbreak();
      FrameInfoForSequenceConst = SvClientMP::GetFrameInfoForSequenceConst(client, oldFrame->assignedSequence);
      if ( FrameInfoForSequenceConst->scriptableWriteIndex == -1i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 3157, ASSERT_TYPE_ASSERT, "( clientFrameInfo->scriptableWriteIndex ) != ( SCRIPTABLE_INVALID_CHANGE_INDEX )", "%s != %s\n\t%lli, %lli", "clientFrameInfo->scriptableWriteIndex", "SCRIPTABLE_INVALID_CHANGE_INDEX", -1i64, -1i64) )
        __debugbreak();
      oldChangeSeqIndex = (const clientSnapshot_t *)FrameInfoForSequenceConst->scriptableWriteIndex;
    }
    else if ( (unsigned int)(snapDelta->snapshotType - 2) > 1 )
    {
      LODWORD(toParts) = snapDelta->snapshotType;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 3163, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Uknown server snapshot message type: %d", toParts) )
        __debugbreak();
      oldChangeSeqIndex = newFrame;
    }
    else
    {
      oldChangeSeqIndex = NULL;
    }
    StorageBuffer = SvSnapshotEntries::GetStorageBuffer(&v9->serverEntries);
    if ( !StorageBuffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 3203, ASSERT_TYPE_ASSERT, "( frameBuffers )", (const char *)&queryFormat, "frameBuffers") )
      __debugbreak();
    BufferEntryAtIndex = (const ScriptableReplicatedInstance *)SvSnapshotFrameBuffers::GetBufferEntryAtIndex(StorageBuffer, (const SvSnapshotBufferType)6, index);
    v17 = (const ScriptablePartData *)SvSnapshotFrameBuffers::GetBufferEntryAtIndex(StorageBuffer, COUNT|DODGE|0x4, v20);
    ScriptableMsg_WriteSnapshot(snapInfo, msg, ReplicatedLimits, BufferEntryAtIndex, (const unsigned int)newFrame, v17, v11, (const unsigned __int64)oldChangeSeqIndex);
  }
  SV_TrackPacketData(snapInfo->clientNum, ANALYZE_SNAPSHOT_SCRIPTABLES, 0, 0, bitsUsedPrev, msg);
}

/*
==============
SV_SnapshotMP_EmitMessageAgents
==============
*/
bool SV_SnapshotMP_EmitMessageAgents(const SvSnapshotDelta *snapDelta, SnapshotInfo *const snapInfo, msg_t *const msg, const SvSnapshotEntries *const oldEntries, const SvSnapshotEntries *const newEntries)
{
  msg_t *v6; 
  SnapshotInfo *v7; 
  SvSnapshotFrameBuffers *v9; 
  __int64 v10; 
  unsigned int v11; 
  SvSnapshotFrameBuffers *v12; 
  int v13; 
  int v14; 
  __int64 v15; 
  __int64 v16; 
  SvSnapshotFrameBuffers *v17; 
  unsigned __int8 *BufferEntryAtIndex; 
  __int64 v19; 
  __int64 v20; 
  unsigned __int8 *v21; 
  __int64 v22; 
  __int64 v23; 
  __int64 v24; 
  int v25; 
  const agentState_s *v26; 
  int entityNum; 
  const agentState_s *v28; 
  int v29; 
  int UsedBitCount; 
  unsigned int v31; 
  int v32; 
  unsigned int v33; 
  int v34; 
  __int64 v35; 
  __int64 lastEntityRef; 
  bool v38; 
  int v39; 
  char *fmt; 
  __int64 writeIndex; 
  __int64 writeIndexa; 
  __int64 writeIndexb; 
  __int64 force; 
  __int64 v45; 
  unsigned int v46; 
  SvSnapshotFrameBuffers *v47; 
  __int64 index; 
  __int64 v49; 
  SvSnapshotFrameBuffers *StorageBuffer; 
  int bitsUsedPrev; 
  unsigned int newEntriesa; 

  v6 = msg;
  v7 = snapInfo;
  if ( !msg && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 2903, ASSERT_TYPE_ASSERT, "(msg)", (const char *)&queryFormat, "msg") )
    __debugbreak();
  bitsUsedPrev = MSG_GetUsedBitCount(v6);
  if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 2911, ASSERT_TYPE_ASSERT, "( snapInfo )", (const char *)&queryFormat, "snapInfo") )
    __debugbreak();
  if ( !newEntries && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 2912, ASSERT_TYPE_ASSERT, "( newEntries )", (const char *)&queryFormat, "newEntries") )
    __debugbreak();
  index = newEntries->m_first[5];
  newEntriesa = newEntries->m_count[5];
  StorageBuffer = SvSnapshotEntries::GetStorageBuffer((SvSnapshotEntries *)newEntries);
  v9 = StorageBuffer;
  if ( !StorageBuffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 2917, ASSERT_TYPE_ASSERT, "( newFrameBuffers )", (const char *)&queryFormat, "newFrameBuffers") )
    __debugbreak();
  if ( oldEntries )
    v10 = oldEntries->m_first[5];
  else
    v10 = 0i64;
  v49 = v10;
  if ( oldEntries )
    v11 = oldEntries->m_count[5];
  else
    v11 = 0;
  v46 = v11;
  if ( oldEntries )
    v12 = SvSnapshotEntries::GetStorageBuffer((SvSnapshotEntries *)oldEntries);
  else
    v12 = NULL;
  v47 = v12;
  v13 = -1;
  v14 = -1;
  if ( v11 )
  {
    v15 = v10;
    v16 = v11;
    v17 = v12;
    do
    {
      if ( !v17 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 2927, ASSERT_TYPE_ASSERT, "( oldFrameBuffers )", (const char *)&queryFormat, "oldFrameBuffers") )
        __debugbreak();
      BufferEntryAtIndex = SvSnapshotFrameBuffers::GetBufferEntryAtIndex(v17, (const SvSnapshotBufferType)5, v15);
      if ( *(__int16 *)BufferEntryAtIndex <= v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 2930, ASSERT_TYPE_ASSERT, "( newAgent->entityNum > oldAgentNum )", (const char *)&queryFormat, "newAgent->entityNum > oldAgentNum") )
        __debugbreak();
      v14 = *(__int16 *)BufferEntryAtIndex;
      ++v15;
      --v16;
    }
    while ( v16 );
    v6 = msg;
    v13 = -1;
    v9 = StorageBuffer;
    v7 = snapInfo;
  }
  if ( newEntriesa )
  {
    v19 = index;
    v20 = newEntriesa;
    do
    {
      v21 = SvSnapshotFrameBuffers::GetBufferEntryAtIndex(v9, (const SvSnapshotBufferType)5, v19);
      if ( *(__int16 *)v21 <= v13 )
      {
        LODWORD(v45) = *(__int16 *)v21;
        LODWORD(force) = v13;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 2937, ASSERT_TYPE_ASSERT, "(newAgent->entityNum > oldAgentNum)", "%s\n\toldAgentNum is %i, newAgent->entityNum is %i", "newAgent->entityNum > oldAgentNum", force, v45) )
          __debugbreak();
      }
      v13 = *(__int16 *)v21;
      ++v19;
      --v20;
    }
    while ( v20 );
    v7 = snapInfo;
  }
  MSG_ClearLastReferencedEntity(v6);
  v22 = newEntriesa;
  v23 = 0i64;
  v24 = 0i64;
LABEL_40:
  v25 = bitsUsedPrev;
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        if ( v23 < v22 )
        {
          v26 = (const agentState_s *)SvSnapshotFrameBuffers::GetBufferEntryAtIndex(StorageBuffer, (const SvSnapshotBufferType)5, v23 + index);
          entityNum = v26->entityNum;
        }
        else
        {
          if ( v24 >= v46 )
          {
            MSG_WriteBit0(v6);
            SV_TrackPacketData(v7->clientNum, ANALYZE_SNAPSHOT_GENERIC_DATA, 0, 0, v25, v6);
            return v6->overflowed == 0;
          }
          v26 = NULL;
          entityNum = 9999;
        }
        if ( v24 < v46 )
        {
          if ( !v47 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 2969, ASSERT_TYPE_ASSERT, "( oldFrameBuffers )", (const char *)&queryFormat, "oldFrameBuffers") )
            __debugbreak();
          v28 = (const agentState_s *)SvSnapshotFrameBuffers::GetBufferEntryAtIndex(v47, (const SvSnapshotBufferType)5, v24 + v49);
          v29 = v28->entityNum;
        }
        else
        {
          v28 = NULL;
          v29 = 9999;
        }
        if ( entityNum != v29 )
          break;
        UsedBitCount = MSG_GetUsedBitCount(v6);
        MSG_WriteDeltaAgent(v7, v6, v7->serverTime, v28, v26, 1, 0);
        if ( MSG_GetUsedBitCount(v6) < UsedBitCount )
        {
          LODWORD(force) = UsedBitCount;
          LODWORD(writeIndexa) = MSG_GetUsedBitCount(v6);
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 2983, ASSERT_TYPE_ASSERT, "( MSG_GetUsedBitCount( msg ) ) >= ( prevBitCount )", "MSG_GetUsedBitCount( msg ) >= prevBitCount\n\t%i, %i", writeIndexa, force) )
            __debugbreak();
        }
        v31 = MSG_GetUsedBitCount(v6) - UsedBitCount;
        if ( v31 > 0x7E0 )
        {
          LODWORD(force) = 2016;
          LODWORD(writeIndexa) = v31;
          v38 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 2990, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Encoded delta agent bitcount (%d) exceeds the expected maximum number of bits required (%d)", writeIndexa, force);
          goto LABEL_87;
        }
        if ( v6->overflowed )
          return 0;
        ++v24;
        bitsUsedPrev = SV_TrackPacketData(v7->clientNum, ANALYZE_SNAPSHOT_DELTAAGENT, 0, v26->entityNum, bitsUsedPrev, v6);
        v25 = bitsUsedPrev;
        ++v23;
        v22 = newEntriesa;
      }
      if ( entityNum >= v29 )
        break;
      v32 = MSG_GetUsedBitCount(v6);
      MSG_WriteDeltaAgent(v7, v6, v7->serverTime, NULL, v26, 1, 1);
      if ( MSG_GetUsedBitCount(v6) < v32 )
      {
        LODWORD(force) = v32;
        LODWORD(writeIndexb) = MSG_GetUsedBitCount(v6);
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 3013, ASSERT_TYPE_ASSERT, "( MSG_GetUsedBitCount( msg ) ) >= ( prevBitCount )", "MSG_GetUsedBitCount( msg ) >= prevBitCount\n\t%i, %i", writeIndexb, force) )
          __debugbreak();
      }
      v33 = MSG_GetUsedBitCount(v6) - v32;
      if ( v33 )
      {
        if ( v33 <= 0x7E0 )
          goto LABEL_66;
        v39 = 3021;
LABEL_86:
        LODWORD(force) = 2016;
        LODWORD(writeIndexb) = v33;
        v38 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", v39, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Encoded new agent bitcount (%d) exceeds the expected maximum number of bits required (%d)", writeIndexb, force);
LABEL_87:
        if ( v38 )
          __debugbreak();
        return 0;
      }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 3018, ASSERT_TYPE_ASSERT, "( (agentBitCount != 0) )", (const char *)&queryFormat, "(agentBitCount != 0)") )
        __debugbreak();
LABEL_66:
      if ( v6->overflowed )
        return 0;
      v25 = SV_TrackPacketData(v7->clientNum, ANALYZE_SNAPSHOT_NEWAGENT, 0, v26->entityNum, bitsUsedPrev, v6);
      bitsUsedPrev = v25;
      v22 = newEntriesa;
      ++v23;
    }
    v22 = newEntriesa;
    if ( entityNum <= v29 )
      goto LABEL_40;
    v34 = MSG_GetUsedBitCount(v6);
    if ( !v28 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 3040, ASSERT_TYPE_ASSERT, "( oldAgent )", (const char *)&queryFormat, "oldAgent") )
      __debugbreak();
    v35 = (unsigned int)v28->entityNum;
    lastEntityRef = (unsigned int)v6->lastEntityRef;
    if ( (int)v35 <= (int)lastEntityRef )
      break;
    MSG_WriteDeltaAgent(v7, v6, v7->serverTime, v28, NULL, 1, 1);
    if ( MSG_GetUsedBitCount(v6) < v34 )
    {
      LODWORD(force) = v34;
      LODWORD(writeIndexb) = MSG_GetUsedBitCount(v6);
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 3054, ASSERT_TYPE_ASSERT, "( MSG_GetUsedBitCount( msg ) ) >= ( prevBitCount )", "MSG_GetUsedBitCount( msg ) >= prevBitCount\n\t%i, %i", writeIndexb, force) )
        __debugbreak();
    }
    v33 = MSG_GetUsedBitCount(v6) - v34;
    if ( v33 )
    {
      if ( v33 > 0x7E0 )
      {
        v39 = 3062;
        goto LABEL_86;
      }
    }
    else if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 3059, ASSERT_TYPE_ASSERT, "( (agentBitCount != 0) )", (const char *)&queryFormat, "(agentBitCount != 0)") )
    {
      __debugbreak();
    }
    if ( v6->overflowed )
      return 0;
    v25 = SV_TrackPacketData(v7->clientNum, ANALYZE_SNAPSHOT_REMOVEDAGENT, 0, v28->entityNum, bitsUsedPrev, v6);
    bitsUsedPrev = v25;
    v22 = newEntriesa;
    ++v24;
  }
  LODWORD(v45) = newEntriesa;
  LODWORD(force) = v46;
  LODWORD(writeIndex) = v29;
  LODWORD(fmt) = entityNum;
  Com_PrintError(15, "[Snapshot] ** Agent index LE msg->lastEntityRef:\n**   lastEntityRef is %d  entityNum is %d\n**   newAgentNum %d  oldAgentNum %d  oldAgentCount %d  toEntries->count %d\n**   oldAgentStart %zi  toEntries->first %zi\n", lastEntityRef, v35, fmt, writeIndex, force, v45, v49, index);
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 3046, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "oldAgent->entityNum <= msg->lastEntityRef (please attach console log to bug)") )
    __debugbreak();
  MSG_WriteBit0(v6);
  return 0;
}

/*
==============
SV_SnapshotMP_EmitMessageClients
==============
*/
bool SV_SnapshotMP_EmitMessageClients(const SvSnapshotDelta *snapDelta, SnapshotInfo *const snapInfo, msg_t *const msg, const SvSnapshotEntries *const oldEntries, const SvSnapshotEntries *const newEntries)
{
  msg_t *v6; 
  __int64 v8; 
  unsigned int v9; 
  __int64 v10; 
  const clientState_t *v11; 
  SvSnapshotFrameBuffers *v12; 
  int v13; 
  int v14; 
  __int64 v15; 
  SvSnapshotFrameBuffers *v16; 
  unsigned __int8 *BufferEntryAtIndex; 
  __int64 v18; 
  __int64 v19; 
  unsigned __int8 *v20; 
  __int64 v21; 
  __int64 v22; 
  int v23; 
  __int64 v24; 
  SnapshotInfo *v25; 
  __int64 v26; 
  int clientIndex; 
  const clientState_t *v28; 
  int v29; 
  int UsedBitCount; 
  unsigned int v31; 
  int v32; 
  int v33; 
  unsigned int v34; 
  int v35; 
  int v36; 
  __int64 v37; 
  __int64 lastEntityRef; 
  bool v40; 
  int v41; 
  char *fmt; 
  __int64 writeIndex; 
  __int64 writeIndexa; 
  __int64 writeIndexb; 
  __int64 force; 
  __int64 v47; 
  unsigned int v48; 
  SvSnapshotFrameBuffers *v49; 
  __int64 v50; 
  __int64 v51; 
  SvSnapshotFrameBuffers *StorageBuffer; 
  int bitsUsedPrev; 
  int newEntriesa; 

  v6 = msg;
  bitsUsedPrev = MSG_GetUsedBitCount(msg);
  if ( !snapInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 2702, ASSERT_TYPE_ASSERT, "( snapInfo )", (const char *)&queryFormat, "snapInfo") )
    __debugbreak();
  if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 2703, ASSERT_TYPE_ASSERT, "( msg )", (const char *)&queryFormat, "msg") )
    __debugbreak();
  if ( !newEntries && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 2704, ASSERT_TYPE_ASSERT, "( newEntries )", (const char *)&queryFormat, "newEntries") )
    __debugbreak();
  v8 = newEntries->m_first[4];
  v9 = newEntries->m_count[4];
  v50 = v8;
  v48 = v9;
  StorageBuffer = SvSnapshotEntries::GetStorageBuffer((SvSnapshotEntries *)newEntries);
  if ( !StorageBuffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 2709, ASSERT_TYPE_ASSERT, "( newFrameBuffers )", (const char *)&queryFormat, "newFrameBuffers") )
    __debugbreak();
  if ( oldEntries )
    v10 = oldEntries->m_first[4];
  else
    v10 = 0i64;
  v51 = v10;
  if ( oldEntries )
    v11 = (const clientState_t *)oldEntries->m_count[4];
  else
    v11 = NULL;
  newEntriesa = (int)v11;
  if ( oldEntries )
    v12 = SvSnapshotEntries::GetStorageBuffer((SvSnapshotEntries *)oldEntries);
  else
    v12 = NULL;
  v49 = v12;
  v13 = -1;
  v14 = -1;
  if ( (_DWORD)v11 )
  {
    v15 = v10;
    v16 = v12;
    do
    {
      if ( !v16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 2719, ASSERT_TYPE_ASSERT, "( oldFrameBuffers )", (const char *)&queryFormat, "oldFrameBuffers") )
        __debugbreak();
      BufferEntryAtIndex = SvSnapshotFrameBuffers::GetBufferEntryAtIndex(v16, (const SvSnapshotBufferType)4, v15);
      if ( *(_DWORD *)BufferEntryAtIndex <= v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 2722, ASSERT_TYPE_ASSERT, "( newClient->clientIndex > oldClientNum )", (const char *)&queryFormat, "newClient->clientIndex > oldClientNum") )
        __debugbreak();
      v14 = *(_DWORD *)BufferEntryAtIndex;
      ++v15;
      v11 = (const clientState_t *)((char *)v11 - 1);
    }
    while ( v11 );
    v6 = msg;
    v13 = -1;
    LODWORD(v11) = newEntriesa;
  }
  if ( v9 )
  {
    v18 = v9;
    v19 = v8;
    do
    {
      v20 = SvSnapshotFrameBuffers::GetBufferEntryAtIndex(StorageBuffer, (const SvSnapshotBufferType)4, v19);
      if ( *(_DWORD *)v20 <= v13 )
      {
        LODWORD(v47) = *(_DWORD *)v20;
        LODWORD(force) = v13;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 2730, ASSERT_TYPE_ASSERT, "(newClient->clientIndex > oldClientNum)", "%s\n\toldClientNum is %d, newClient->clientIndex is %i", "newClient->clientIndex > oldClientNum", force, v47) )
          __debugbreak();
      }
      v13 = *(_DWORD *)v20;
      ++v19;
      --v18;
    }
    while ( v18 );
    v6 = msg;
    LODWORD(v11) = newEntriesa;
  }
  MSG_ClearLastReferencedEntity(v6);
  v21 = v9;
  v22 = 0i64;
  v23 = bitsUsedPrev;
  v24 = 0i64;
LABEL_40:
  v25 = snapInfo;
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v26 = (unsigned int)v11;
        if ( v22 < v21 )
        {
          v11 = (const clientState_t *)SvSnapshotFrameBuffers::GetBufferEntryAtIndex(StorageBuffer, (const SvSnapshotBufferType)4, v22 + v50);
          clientIndex = v11->clientIndex;
        }
        else
        {
          if ( v24 >= (unsigned int)v11 )
          {
            MSG_WriteBit0(v6);
            SV_TrackPacketData(v25->clientNum, ANALYZE_SNAPSHOT_GENERIC_DATA, 0, 0, v23, v6);
            return v6->overflowed == 0;
          }
          v11 = NULL;
          clientIndex = 9999;
        }
        if ( v24 < v26 )
        {
          if ( !v49 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 2762, ASSERT_TYPE_ASSERT, "( oldFrameBuffers )", (const char *)&queryFormat, "oldFrameBuffers") )
            __debugbreak();
          v28 = (const clientState_t *)SvSnapshotFrameBuffers::GetBufferEntryAtIndex(v49, (const SvSnapshotBufferType)4, v24 + v51);
          v29 = v28->clientIndex;
        }
        else
        {
          v28 = NULL;
          v29 = 9999;
        }
        if ( clientIndex != v29 )
          break;
        v25 = snapInfo;
        UsedBitCount = MSG_GetUsedBitCount(v6);
        MSG_WriteDeltaClient(snapInfo, v6, snapInfo->serverTime, v28, v11, 1, 0);
        if ( MSG_GetUsedBitCount(v6) < UsedBitCount )
        {
          LODWORD(force) = UsedBitCount;
          LODWORD(writeIndexa) = MSG_GetUsedBitCount(v6);
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 2776, ASSERT_TYPE_ASSERT, "( MSG_GetUsedBitCount( msg ) ) >= ( prevBitCount )", "MSG_GetUsedBitCount( msg ) >= prevBitCount\n\t%i, %i", writeIndexa, force) )
            __debugbreak();
        }
        v31 = MSG_GetUsedBitCount(v6) - UsedBitCount;
        if ( v31 > 0xCC0 )
        {
          LODWORD(force) = 3264;
          LODWORD(writeIndexa) = v31;
          v40 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 2783, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Encoded delta client bitcount (%d) exceeds the expected maximum number of bits required (%d)", writeIndexa, force);
          goto LABEL_87;
        }
        if ( v6->overflowed )
          return 0;
        v32 = SV_TrackPacketData(snapInfo->clientNum, ANALYZE_SNAPSHOT_DELTACLIENT, 0, v11->clientIndex, v23, v6);
        LODWORD(v11) = newEntriesa;
        ++v24;
        v23 = v32;
        bitsUsedPrev = v32;
        v21 = v48;
        ++v22;
      }
      if ( clientIndex >= v29 )
        break;
      v25 = snapInfo;
      v33 = MSG_GetUsedBitCount(v6);
      MSG_WriteDeltaClient(snapInfo, v6, snapInfo->serverTime, NULL, v11, 1, 1);
      if ( MSG_GetUsedBitCount(v6) < v33 )
      {
        LODWORD(force) = v33;
        LODWORD(writeIndexb) = MSG_GetUsedBitCount(v6);
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 2806, ASSERT_TYPE_ASSERT, "( MSG_GetUsedBitCount( msg ) ) >= ( prevBitCount )", "MSG_GetUsedBitCount( msg ) >= prevBitCount\n\t%i, %i", writeIndexb, force) )
          __debugbreak();
      }
      v34 = MSG_GetUsedBitCount(v6) - v33;
      if ( v34 )
      {
        if ( v34 <= 0xCC0 )
          goto LABEL_66;
        v41 = 2814;
LABEL_86:
        LODWORD(force) = 3264;
        LODWORD(writeIndexb) = v34;
        v40 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", v41, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Encoded new client bitcount (%d) exceeds the expected maximum number of bits required (%d)", writeIndexb, force);
LABEL_87:
        if ( v40 )
          __debugbreak();
        return 0;
      }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 2811, ASSERT_TYPE_ASSERT, "( (clientBitCount != 0) )", (const char *)&queryFormat, "(clientBitCount != 0)") )
        __debugbreak();
LABEL_66:
      if ( v6->overflowed )
        return 0;
      v35 = SV_TrackPacketData(snapInfo->clientNum, ANALYZE_SNAPSHOT_NEWCLIENT, 0, v11->clientIndex, v23, v6);
      LODWORD(v11) = newEntriesa;
      v23 = v35;
      bitsUsedPrev = v35;
      ++v22;
      v21 = v48;
    }
    v21 = v48;
    LODWORD(v11) = newEntriesa;
    if ( clientIndex <= v29 )
      goto LABEL_40;
    v36 = MSG_GetUsedBitCount(v6);
    if ( !v28 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 2833, ASSERT_TYPE_ASSERT, "( oldClient )", (const char *)&queryFormat, "oldClient") )
      __debugbreak();
    v37 = (unsigned int)v28->clientIndex;
    lastEntityRef = (unsigned int)v6->lastEntityRef;
    if ( (int)v37 <= (int)lastEntityRef )
      break;
    v25 = snapInfo;
    MSG_WriteDeltaClient(snapInfo, v6, snapInfo->serverTime, v28, NULL, 1, 1);
    if ( MSG_GetUsedBitCount(v6) < v36 )
    {
      LODWORD(force) = v36;
      LODWORD(writeIndexb) = MSG_GetUsedBitCount(v6);
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 2847, ASSERT_TYPE_ASSERT, "( MSG_GetUsedBitCount( msg ) ) >= ( prevBitCount )", "MSG_GetUsedBitCount( msg ) >= prevBitCount\n\t%i, %i", writeIndexb, force) )
        __debugbreak();
    }
    v34 = MSG_GetUsedBitCount(v6) - v36;
    if ( v34 )
    {
      if ( v34 > 0xCC0 )
      {
        v41 = 2855;
        goto LABEL_86;
      }
    }
    else if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 2852, ASSERT_TYPE_ASSERT, "( (clientBitCount != 0) )", (const char *)&queryFormat, "(clientBitCount != 0)") )
    {
      __debugbreak();
    }
    if ( v6->overflowed )
      return 0;
    LODWORD(v11) = newEntriesa;
    v23 = SV_TrackPacketData(snapInfo->clientNum, ANALYZE_SNAPSHOT_REMOVEDCLIENT, 0, v28->clientIndex, bitsUsedPrev, v6);
    bitsUsedPrev = v23;
    ++v24;
    v21 = v48;
  }
  LODWORD(v47) = v48;
  LODWORD(force) = newEntriesa;
  LODWORD(writeIndex) = v29;
  LODWORD(fmt) = clientIndex;
  Com_PrintError(15, "[Snapshot] ** Client index LE msg->lastEntityRef:\n**   lastEntityRef is %d  clientIndex is %d\n**   newClientNum %d  oldnum %d  oldClientCount %d  newClientCount %d\n**   oldClientStart %zi  newClientStart %zi\n", lastEntityRef, v37, fmt, writeIndex, force, v47, v51, v50);
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 2839, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "oldClient->clientIndex <= msg->lastEntityRef (please attach console log to bug)") )
    __debugbreak();
  MSG_WriteBit0(v6);
  return 0;
}

/*
==============
SV_SnapshotMP_EmitServerMessageDeltaEntity_Internal
==============
*/
bool SV_SnapshotMP_EmitServerMessageDeltaEntity_Internal(const SvSnapshotDelta *snapDelta, SnapshotInfo *const snapInfo, msg_t *const serverMessage, const entityState_t *const oldEntity, const entityState_t *const newEntity, const int force)
{
  bool archived; 
  __int64 cursize; 
  int v12; 
  ServerEntityHeader *outHeader; 
  int UsedBitCount; 
  int v15; 
  int v16; 
  int lastLowLoDBitWritten; 
  const char *v18; 
  entityState_t *from; 
  entityState_t *to; 

  if ( !snapInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 6898, ASSERT_TYPE_ASSERT, "( snapInfo != nullptr )", (const char *)&queryFormat, "snapInfo != nullptr") )
    __debugbreak();
  if ( !serverMessage && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 6899, ASSERT_TYPE_ASSERT, "( serverMessage != nullptr )", (const char *)&queryFormat, "serverMessage != nullptr") )
    __debugbreak();
  if ( !oldEntity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 6900, ASSERT_TYPE_ASSERT, "( oldEntity != nullptr )", (const char *)&queryFormat, "oldEntity != nullptr") )
    __debugbreak();
  if ( !newEntity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 6901, ASSERT_TYPE_ASSERT, "( newEntity != nullptr )", (const char *)&queryFormat, "newEntity != nullptr") )
    __debugbreak();
  archived = snapInfo->archived;
  snapInfo->archived = 1;
  MSG_WriteEntityIndex(snapInfo, serverMessage, newEntity->number, 11);
  snapInfo->archived = archived;
  if ( !serverMessage && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 6182, ASSERT_TYPE_ASSERT, "( msg != nullptr )", (const char *)&queryFormat, "msg != nullptr") )
    __debugbreak();
  MSG_WriteAlign(serverMessage);
  cursize = serverMessage->cursize;
  v12 = cursize + 80;
  outHeader = (ServerEntityHeader *)&serverMessage->data[cursize];
  serverMessage->cursize = v12;
  MSG_WriteAlign(serverMessage);
  if ( serverMessage->cursize <= serverMessage->maxsize )
  {
    *(_QWORD *)outHeader->m_flags = 0i64;
    if ( outHeader )
    {
      snapInfo->lastLowLoDBitWritten = 0;
      UsedBitCount = MSG_GetUsedBitCount(serverMessage);
      snapInfo->entNeverChanges = GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagStrict(&newEntity->lerp.eFlags, (EntityStateFlagsMP)30);
      MSG_WriteEntity(snapInfo, serverMessage, snapDelta->oldTimeDelta, snapDelta->newTimeDelta, snapDelta->newServerTime, oldEntity, newEntity, outHeader, force != 0);
      v15 = MSG_GetUsedBitCount(serverMessage);
      v16 = v15;
      if ( v15 < UsedBitCount )
      {
        LODWORD(to) = UsedBitCount;
        LODWORD(from) = v15;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 6925, ASSERT_TYPE_ASSERT, "( endBitCount ) >= ( prevBitCount )", "endBitCount >= prevBitCount\n\t%i, %i", from, to) )
          __debugbreak();
      }
      outHeader->m_totalBits[1] = truncate_cast<unsigned short,int>(v16 - UsedBitCount);
      lastLowLoDBitWritten = snapInfo->lastLowLoDBitWritten;
      if ( lastLowLoDBitWritten > 0 )
        outHeader->m_totalBits[0] = truncate_cast<unsigned short,int>(lastLowLoDBitWritten - UsedBitCount);
      if ( outHeader->m_totalBits[1] < outHeader->m_totalBits[0] )
      {
        v18 = SV_SnapshotMP_PrintServerEntityHeader(outHeader);
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 6934, ASSERT_TYPE_ASSERT, "(header->m_totalBits[NetFieldLoD_High] >= header->m_totalBits[NetFieldLoD_Low])", "%s\n\t%s\n", "header->m_totalBits[NetFieldLoD_High] >= header->m_totalBits[NetFieldLoD_Low]", v18) )
          __debugbreak();
      }
    }
  }
  else
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 6194, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Could not write entity header to message -- overflow\n") )
      __debugbreak();
    serverMessage->cursize = serverMessage->maxsize;
    serverMessage->overflowed = 1;
  }
  return serverMessage->overflowed == 0;
}

/*
==============
SV_SnapshotMP_EmitServerMessageEntities
==============
*/
bool SV_SnapshotMP_EmitServerMessageEntities(const SvSnapshotDelta *snapDelta, SnapshotInfo *const snapInfo, msg_t *const serverMessage, const SvSnapshotEntries *oldEntries, const SvSnapshotEntries *newEntries)
{
  msg_t *v6; 
  __int16 v8; 
  __int16 v9; 
  SvSnapshotFrameBuffers *StorageBuffer; 
  SvSnapshotType snapshotType; 
  const SvSnapshotDelta *v12; 
  unsigned int v13; 
  const SvSnapshotDelta *v14; 
  __int64 v15; 
  unsigned int v16; 
  unsigned int v17; 
  SnapshotInfo *v18; 
  entityState_t *v19; 
  __int16 number; 
  entityState_t *v21; 
  __int16 v22; 
  __int64 v23; 
  int v24; 
  int *v25; 
  unsigned int v26; 
  __int64 v27; 
  int v28; 
  int *v29; 
  unsigned int v30; 
  __int16 v31; 
  bool archived; 
  char *fmt; 
  char *fmta; 
  entityState_t **outEntityState; 
  entityState_t **outEntityStatea; 
  entityState_t **outEntityStateb; 
  entityState_t **outEntityStatec; 
  unsigned int **outClientBits; 
  unsigned int **outClientBitsa; 
  __int64 v42; 
  __int64 v43; 
  __int64 v44; 
  __int64 v45; 
  unsigned int v46; 
  unsigned int v47; 
  __int16 entCount; 
  unsigned int nextNoDeltaEntity; 
  unsigned int v50; 
  __int64 firstEntIndex; 
  __int64 v53; 
  const SvSnapshotDelta *v54; 
  __int64 v56; 
  SvSnapshotFrameBuffers *frameBuffers; 
  entityState_t *oldEntity; 
  SvSnapshotFrameBuffers *v60; 
  entityState_t *newEntity; 
  unsigned int *v62; 
  entityState_t outBaseline; 
  int v64[64]; 

  v6 = serverMessage;
  if ( !serverMessage && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 7005, ASSERT_TYPE_ASSERT, "( serverMessage != nullptr )", (const char *)&queryFormat, "serverMessage != nullptr") )
    __debugbreak();
  v8 = -1;
  entCount = -1;
  v9 = -1;
  memset_0(v64, 0, sizeof(v64));
  MSG_ClearLastReferencedEntity(v6);
  frameBuffers = SvSnapshotEntries::GetStorageBuffer((SvSnapshotEntries *)oldEntries);
  StorageBuffer = SvSnapshotEntries::GetStorageBuffer((SvSnapshotEntries *)newEntries);
  snapshotType = snapDelta->snapshotType;
  v60 = StorageBuffer;
  if ( !newEntries && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 5992, ASSERT_TYPE_ASSERT, "( newEntries != nullptr )", (const char *)&queryFormat, "newEntries != nullptr") )
    __debugbreak();
  if ( snapshotType == HALF )
  {
    if ( !oldEntries && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 6023, ASSERT_TYPE_ASSERT, "( oldEntries != nullptr )", (const char *)&queryFormat, "oldEntries != nullptr") )
      __debugbreak();
    if ( !newEntries && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 6024, ASSERT_TYPE_ASSERT, "( newEntries != nullptr )", (const char *)&queryFormat, "newEntries != nullptr") )
      __debugbreak();
    v14 = (const SvSnapshotDelta *)oldEntries->m_first[1];
    v13 = oldEntries->m_count[0];
    firstEntIndex = oldEntries->m_first[0];
    v53 = newEntries->m_first[0];
    nextNoDeltaEntity = newEntries->m_count[0];
  }
  else
  {
    if ( snapshotType != HALF_HALF )
    {
      if ( snapshotType == LONG )
      {
        v14 = NULL;
        v13 = 0;
        firstEntIndex = 0i64;
        v12 = NULL;
        v53 = -10000000i64;
        nextNoDeltaEntity = g_svSnapshotData.nextNoDeltaEntity;
      }
      else
      {
        LODWORD(outEntityState) = snapshotType;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 6036, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Uknown server snapshot message type: %d", outEntityState) )
          __debugbreak();
        v12 = snapDelta;
        v13 = -1;
        v14 = snapDelta;
        nextNoDeltaEntity = -1;
        firstEntIndex = (__int64)snapDelta;
        v53 = (__int64)snapDelta;
      }
      goto LABEL_26;
    }
    if ( !newEntries && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 6011, ASSERT_TYPE_ASSERT, "( newEntries != nullptr )", (const char *)&queryFormat, "newEntries != nullptr") )
      __debugbreak();
    v13 = g_svSnapshotData.nextNoDeltaEntity;
    v14 = NULL;
    v53 = newEntries->m_first[0];
    nextNoDeltaEntity = newEntries->m_count[0];
    firstEntIndex = -10000000i64;
  }
  v12 = (const SvSnapshotDelta *)newEntries->m_first[1];
LABEL_26:
  v15 = newEntries->m_first[2];
  v54 = v14;
  v47 = v13;
  v56 = (__int64)v12;
  if ( v12 != (const SvSnapshotDelta *)v15 )
  {
    LODWORD(outEntityState) = (_DWORD)v12;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 7019, ASSERT_TYPE_ASSERT, "( newEntFullStart ) == ( newEntries.GetFirst( SvSnapshotBufferType::ENTITY_CLIENTMASK ) )", "newEntFullStart == newEntries.GetFirst( SvSnapshotBufferType::ENTITY_CLIENTMASK )\n\t%i, %i", outEntityState, v15) )
      __debugbreak();
  }
  if ( v14 != (const SvSnapshotDelta *)oldEntries->m_first[2] )
  {
    LODWORD(outClientBits) = oldEntries->m_first[2];
    LODWORD(outEntityState) = (_DWORD)v14;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 7020, ASSERT_TYPE_ASSERT, "( oldEntFullStart ) == ( oldEntries.GetFirst( SvSnapshotBufferType::ENTITY_CLIENTMASK ) )", "oldEntFullStart == oldEntries.GetFirst( SvSnapshotBufferType::ENTITY_CLIENTMASK )\n\t%i, %i", outEntityState, outClientBits) )
      __debugbreak();
  }
  v16 = 0;
  v17 = 0;
LABEL_33:
  v50 = v17;
  while ( 2 )
  {
    v18 = snapInfo;
    v46 = v16;
    while ( 1 )
    {
      if ( v16 >= nextNoDeltaEntity && v17 >= v13 )
      {
        v18->entJustUnlinked = 0;
        return v6->overflowed == 0;
      }
      SV_SnapshotMP_GetNextEnt(frameBuffers, v13, firstEntIndex, (const __int64)v14, v17, (const entityState_t **)&oldEntity, (const unsigned int **)&v62);
      v19 = oldEntity;
      if ( oldEntity )
        number = oldEntity->number;
      else
        number = 0x7FFF;
      if ( oldEntity && oldEntity->number <= v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 7028, ASSERT_TYPE_ASSERT, "( (oldEnt == nullptr) || (oldEnt->number > lastOldEntNum) )", (const char *)&queryFormat, "(oldEnt == nullptr) || (oldEnt->number > lastOldEntNum)") )
        __debugbreak();
      SV_SnapshotMP_GetNextEnt(v60, nextNoDeltaEntity, v53, v56, v16, (const entityState_t **)&newEntity, (const unsigned int **)&v62);
      v21 = newEntity;
      if ( newEntity )
        v22 = newEntity->number;
      else
        v22 = 0x7FFF;
      if ( newEntity && newEntity->number <= v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 7032, ASSERT_TYPE_ASSERT, "( (newEnt == nullptr) || (newEnt->number > lastNewEntNum) )", (const char *)&queryFormat, "(newEnt == nullptr) || (newEnt->number > lastNewEntNum)") )
        __debugbreak();
      if ( v22 == number )
      {
        if ( (unsigned __int16)v22 >= 0x800u )
        {
          LODWORD(outClientBitsa) = 2048;
          LODWORD(outEntityStatea) = v22;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 7037, ASSERT_TYPE_ASSERT, "(unsigned)( newEntNum ) < (unsigned)( ( 2048 ) )", "newEntNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", outEntityStatea, outClientBitsa) )
            __debugbreak();
        }
        v23 = (__int64)v22 >> 5;
        v24 = v64[v23];
        v25 = &v64[v23];
        v26 = 0x80000000 >> (v22 & 0x1F);
        if ( (v24 & v26) != 0 )
        {
          LODWORD(v45) = v50;
          LODWORD(v44) = v46;
          LODWORD(v43) = v22;
          LODWORD(v42) = number;
          LODWORD(outClientBitsa) = v22;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 7037, ASSERT_TYPE_ASSERT, "((entitiesValid[newEntNum >> 5] & BitShiftMasked( newEntNum )) == 0)", "%s\n\tnumber is %i, oldnum is %i, newnum is %i, to_first is %zi, from_first is %zi, newindex is %i, oldindex is %i", "(entitiesValid[newEntNum >> 5] & BitShiftMasked( newEntNum )) == 0", outClientBitsa, v42, v43, v53, firstEntIndex, v44, v45) )
            __debugbreak();
        }
        fmt = (char *)v21;
        v6 = serverMessage;
        snapInfo->fromBaseline = 0;
        *v25 = v24 | v26;
        if ( SV_SnapshotMP_EmitServerMessageDeltaEntity_Internal(snapDelta, snapInfo, serverMessage, v19, (const entityState_t *const)fmt, 0) )
        {
          if ( serverMessage->lastEntityRef != v22 )
          {
            LODWORD(outClientBitsa) = v22;
            LODWORD(outEntityStateb) = serverMessage->lastEntityRef;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 7044, ASSERT_TYPE_ASSERT, "( serverMessage->lastEntityRef ) == ( newEntNum )", "serverMessage->lastEntityRef == newEntNum\n\t%i, %i", outEntityStateb, outClientBitsa) )
              __debugbreak();
          }
          v8 = number;
          v17 = v50 + 1;
          v13 = v47;
          v16 = v46 + 1;
          v14 = v54;
          v9 = v22;
          entCount = v8;
          goto LABEL_33;
        }
        return 0;
      }
      if ( v22 < number )
        break;
      v18 = snapInfo;
      if ( !snapInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 6970, ASSERT_TYPE_ASSERT, "( snapInfo != nullptr )", (const char *)&queryFormat, "snapInfo != nullptr") )
        __debugbreak();
      v6 = serverMessage;
      if ( !serverMessage && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 6971, ASSERT_TYPE_ASSERT, "( serverMessage != nullptr )", (const char *)&queryFormat, "serverMessage != nullptr") )
        __debugbreak();
      if ( !v19 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 6972, ASSERT_TYPE_ASSERT, "( oldEntity != nullptr )", (const char *)&queryFormat, "oldEntity != nullptr") )
        __debugbreak();
      archived = snapInfo->archived;
      snapInfo->archived = 1;
      MSG_WriteEntityIndex(snapInfo, serverMessage, v19->number, 11);
      snapInfo->archived = archived;
      if ( serverMessage->overflowed )
        return 0;
      if ( serverMessage->lastEntityRef != number )
      {
        LODWORD(outClientBitsa) = number;
        LODWORD(outEntityStatea) = serverMessage->lastEntityRef;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 7078, ASSERT_TYPE_ASSERT, "( serverMessage->lastEntityRef ) == ( oldEntNum )", "serverMessage->lastEntityRef == oldEntNum\n\t%i, %i", outEntityStatea, outClientBitsa) )
          __debugbreak();
      }
      v16 = v46;
      v8 = number;
      v13 = v47;
      ++v17;
      v14 = v54;
      v50 = v17;
      entCount = v8;
    }
    if ( (unsigned __int16)v22 >= 0x800u )
    {
      LODWORD(outClientBitsa) = 2048;
      LODWORD(outEntityStatea) = v22;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 7056, ASSERT_TYPE_ASSERT, "(unsigned)( newEntNum ) < (unsigned)( ( 2048 ) )", "newEntNum doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", outEntityStatea, outClientBitsa) )
        __debugbreak();
    }
    v27 = (__int64)v22 >> 5;
    v28 = v64[v27];
    v29 = &v64[v27];
    v30 = 0x80000000 >> (v22 & 0x1F);
    if ( (v28 & v30) != 0 )
    {
      LODWORD(v45) = v50;
      LODWORD(v44) = v46;
      LODWORD(v43) = v22;
      LODWORD(v42) = number;
      LODWORD(outClientBitsa) = v22;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 7056, ASSERT_TYPE_ASSERT, "((entitiesValid[newEntNum >> 5] & BitShiftMasked( newEntNum )) == 0)", "%s\n\tnumber is %i, oldnum is %i, newnum is %i, to_first is %zi, from_first is %zi, newindex is %i, oldindex is %i", "(entitiesValid[newEntNum >> 5] & BitShiftMasked( newEntNum )) == 0", outClientBitsa, v42, v43, v53, firstEntIndex, v44, v45) )
        __debugbreak();
    }
    v31 = v21->number;
    *v29 = v30 | v28;
    SV_SnapshotMP_GetBaselineEntity(snapDelta, v31, &outBaseline);
    fmta = (char *)v21;
    v6 = serverMessage;
    snapInfo->fromBaseline = 1;
    if ( SV_SnapshotMP_EmitServerMessageDeltaEntity_Internal(snapDelta, snapInfo, serverMessage, &outBaseline, (const entityState_t *const)fmta, 1) )
    {
      if ( serverMessage->lastEntityRef != v22 )
      {
        LODWORD(outClientBitsa) = v22;
        LODWORD(outEntityStatec) = serverMessage->lastEntityRef;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 7063, ASSERT_TYPE_ASSERT, "( serverMessage->lastEntityRef ) == ( newEntNum )", "serverMessage->lastEntityRef == newEntNum\n\t%i, %i", outEntityStatec, outClientBitsa) )
          __debugbreak();
      }
      v9 = v22;
      v8 = entCount;
      v16 = v46 + 1;
      v17 = v50;
      v13 = v47;
      v14 = v54;
      continue;
    }
    return 0;
  }
}

/*
==============
SV_SnapshotMP_EndClientSnapshot
==============
*/
void SV_SnapshotMP_EndClientSnapshot(const ClientSnapshotInfo *clientSnapInfo, msg_t *msg, unsigned __int8 *snapshotMsgBuf)
{
  unsigned __int8 *v3; 
  msg_t *v5; 
  SvClientMP *client; 
  int v7; 
  int UsedBitCount; 
  bool v9; 
  int v10; 
  int v11; 
  int reliableAcknowledge; 
  int reliableSequence; 
  int v14; 
  unsigned int v15; 
  unsigned int size; 
  bool Data; 
  __int64 v18; 
  int v19; 
  int v20; 
  int v21; 
  char *v22; 
  unsigned int v23; 
  __int64 v24; 
  const dvar_t *v25; 
  NetConnection *p_clientConnection; 
  bool v27; 
  int cursize; 
  char *fmt; 
  unsigned __int8 *outBuf; 
  unsigned int MpClientIndex; 
  char *command; 
  unsigned __int8 *v33; 
  int v34; 

  v33 = snapshotMsgBuf;
  command = (char *)msg;
  v3 = snapshotMsgBuf;
  v5 = msg;
  if ( !clientSnapInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 5847, ASSERT_TYPE_ASSERT, "( clientSnapInfo )", (const char *)&queryFormat, "clientSnapInfo") )
    __debugbreak();
  if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 5848, ASSERT_TYPE_ASSERT, "( msg )", (const char *)&queryFormat, "msg") )
    __debugbreak();
  client = clientSnapInfo->client;
  MpClientIndex = SV_Client_GetMpClientIndex(clientSnapInfo->client);
  v7 = MpClientIndex;
  UsedBitCount = MSG_GetUsedBitCount(v5);
  v9 = !client->sendMatchData;
  v10 = UsedBitCount;
  v34 = UsedBitCount;
  if ( !v9 )
  {
    SV_ClientMP_WriteClientMatchData(client, (const SvClientConnectionState)clientSnapInfo->connState, clientSnapInfo->serverTime, v5);
    SV_LogSnapshotContent(MpClientIndex, "%d bytes written (after SV_ClientMP_WriteClientMatchData)\n", (unsigned int)v5->cursize);
  }
  if ( client->sendCodcasterClientMatchData )
    SV_ClientMP_WriteCodcasterClientMatchData(client, (const SvClientConnectionState)clientSnapInfo->connState, clientSnapInfo->serverTime, v5);
  v11 = 1;
  MSG_WriteBits(v5, 1i64, 4u);
  if ( v5->overflowed )
  {
    Com_PrintWarning(15, "[Snapshot] WARNING: msg overflowed for %s, trying to recover\n", client->name);
    if ( ((SvClient::GetCommonClient(MpClientIndex)->state - 1) & 0xFB) == 0 )
    {
      reliableAcknowledge = clientSnapInfo->reliableAcknowledge;
      reliableSequence = clientSnapInfo->reliableSequence;
      v14 = reliableAcknowledge + 1;
      if ( reliableAcknowledge < reliableSequence )
      {
        v15 = SV_Client_GetMpClientIndex(client);
        Com_Printf(15, "[Snapshot] -- Unacknowledged Server Commands for client %i:%s --\n", v15, client->name);
        do
        {
          size = client->netBuf.reliableCommands.m_entries[v14 & 0x1FF].size;
          Data = CircularEntryBuffer<512,131072,int,0>::GetData(&client->netBuf.reliableCommands, v14 & 0x1FF, (const unsigned __int8 **)&outBuf);
          v18 = v14 & 0x1FF;
          if ( Data )
          {
            if ( *outBuf == 89 )
            {
              LODWORD(fmt) = (char)outBuf[4];
              Com_PrintError(1, "[Snapshot] cmd %5d: (%i) Binary '%c'\n", v18, size, fmt);
            }
            else
            {
              Com_PrintError(1, "[Snapshot] cmd %5d: (%i) '%s'\n", v18, size, (const char *)outBuf);
            }
          }
          else
          {
            Com_PrintError(1, "[Snapshot] cmd %5d: (%i) <overflowed>\n", v18, size);
          }
          ++v14;
        }
        while ( v14 <= reliableSequence );
        Com_Printf(15, "[Snapshot] ----------\n");
        v5 = (msg_t *)command;
        v11 = 1;
        v3 = v33;
      }
      if ( clientSnapInfo->isCompressedSnap )
        v5->compressionFlags = 0x80000000;
      MSG_Init(v5, v3, 148440);
      MSG_WriteLong(v5, clientSnapInfo->commandAcknowledge);
      v19 = clientSnapInfo->reliableSequence;
      v20 = clientSnapInfo->reliableAcknowledge + 1;
      v21 = SV_Client_GetMpClientIndex(client);
      if ( v20 <= v19 )
      {
        while ( 1 )
        {
          if ( CircularEntryBuffer<512,131072,int,0>::GetData(&client->netBuf.reliableCommands, v20 & 0x1FF, (const unsigned __int8 **)&command) )
          {
            v22 = command;
            if ( *command == 89 )
            {
              v23 = SV_SnapshptMP_GetBinaryCommandPayloadSize(command) + 2;
            }
            else
            {
              v24 = -1i64;
              do
                ++v24;
              while ( command[v24] );
              v23 = v24 + 1;
            }
            if ( (int)(v5->cursize + v23 + 5) >= 148440 )
            {
LABEL_38:
              v11 = 1;
              break;
            }
            SV_WriteServerCommandMessage(v5, v22, v20, v21);
          }
          else
          {
            if ( !client->reliableOverflowed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 5211, ASSERT_TYPE_ASSERT, "(client->reliableOverflowed)", "%s\n\tDid not properly detect overflow condition for client '%s'", "client->reliableOverflowed", client->name) )
              __debugbreak();
            command = "<overflowed>";
          }
          if ( ++v20 > v19 )
            goto LABEL_38;
        }
      }
      if ( v20 - 1 > client->reliableSent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 5221, ASSERT_TYPE_ASSERT, "( i <= client->reliableSent )", (const char *)&queryFormat, "i <= client->reliableSent") )
        __debugbreak();
      MSG_WriteBits(v5, 1i64, 4u);
      v7 = MpClientIndex;
      v10 = v34;
    }
  }
  SV_LogSnapshotContent(v7, "Snapshot finished for %s - was %i bytes\n", client->name, (unsigned int)v5->cursize);
  if ( client->tempPacketDebugging )
    Dvar_SetInt_Internal(DVARINT_sv_debugPacketContents, 0);
  v25 = DVARBOOL_sv_sendSnapshotsToBots;
  if ( !DVARBOOL_sv_sendSnapshotsToBots && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sv_sendSnapshotsToBots") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v25);
  p_clientConnection = &client->clientConnection;
  v27 = v25->current.enabled && NetConnection::IsLoopback(p_clientConnection);
  SV_TrackPacketData(v7, ANALYZE_SNAPSHOT_GENERIC_DATA, 0, 0, v10, v5);
  SV_AnalyzePacketData(v7, v5->cursize);
  SV_PacketIsNetworkBound(1);
  cursize = v5->cursize;
  if ( !NetConnection::IsRemote(p_clientConnection) && !v27 )
    v11 = 0;
  SV_TrackSnapshotSize(v11, cursize, v7);
}

/*
==============
SV_SnapshotMP_FindClientDeltaSnapshot
==============
*/
const clientSnapshot_t *SV_SnapshotMP_FindClientDeltaSnapshot(const int clientIndex, const int deltaMessage, const SvClientConnectionState connState, const bool hasAckedBaseline, const clientSnapshot_t *toFrame, BandwidthMonitoringEventTypes *outDeltaType)
{
  __int64 v6; 
  SvClientMP *MpClient; 
  int m_packetBackupCount; 
  SvClientMP *v12; 
  const SvClientFrameInfo *FrameInfoForSequenceConst; 
  SvSnapshotStorageType snapshotClientStorageType; 
  const clientSnapshot_t *SnapshotFullFrameConst; 
  BandwidthMonitoringEventTypes v17; 
  __int64 v18; 
  __int64 v19; 

  v6 = clientIndex;
  if ( !toFrame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 3795, ASSERT_TYPE_ASSERT, "( toFrame != nullptr )", (const char *)&queryFormat, "toFrame != nullptr") )
    __debugbreak();
  if ( !outDeltaType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 3796, ASSERT_TYPE_ASSERT, "( outDeltaType != nullptr )", (const char *)&queryFormat, "outDeltaType != nullptr") )
    __debugbreak();
  if ( toFrame->baselineSnap )
  {
    *outDeltaType = EVENT_BASELINE_SEND;
  }
  else if ( deltaMessage > 0 && connState == CS_ACTIVE )
  {
    MpClient = SvClientMP::GetMpClient(v6);
    m_packetBackupCount = g_svSnapshotData.m_packetBackupCount;
    v12 = MpClient;
    if ( g_svSnapshotData.m_packetBackupCount <= 0 )
    {
      LODWORD(v18) = g_svSnapshotData.m_packetBackupCount;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.h", 665, ASSERT_TYPE_ASSERT, "( g_svSnapshotData.m_packetBackupCount ) > ( 0 )", "g_svSnapshotData.m_packetBackupCount > 0\n\t%i, %i", v18, 0i64) )
        __debugbreak();
      m_packetBackupCount = g_svSnapshotData.m_packetBackupCount;
    }
    if ( v12->netchan.outgoingSequence - deltaMessage >= m_packetBackupCount - 1 )
    {
      if ( m_packetBackupCount <= 0 )
      {
        LODWORD(v18) = m_packetBackupCount;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.h", 665, ASSERT_TYPE_ASSERT, "( g_svSnapshotData.m_packetBackupCount ) > ( 0 )", "g_svSnapshotData.m_packetBackupCount > 0\n\t%i, %i", v18, 0i64) )
          __debugbreak();
        m_packetBackupCount = g_svSnapshotData.m_packetBackupCount;
      }
      LODWORD(v19) = m_packetBackupCount - 1;
      LODWORD(v18) = v12->netchan.outgoingSequence - deltaMessage;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 3822, ASSERT_TYPE_ASSERT, "( client->netchan.outgoingSequence - deltaMessage ) < ( SV_SnapshotMP_GetPacketBackupCount() - 1 )", "client->netchan.outgoingSequence - deltaMessage < SV_SnapshotMP_GetPacketBackupCount() - 1\n\t%i, %i", v18, v19) )
        __debugbreak();
    }
    FrameInfoForSequenceConst = SvClientMP::GetFrameInfoForSequenceConst(v12, deltaMessage);
    snapshotClientStorageType = FrameInfoForSequenceConst->snapshotClientStorageType;
    if ( snapshotClientStorageType )
    {
      LODWORD(v18) = (unsigned __int8)snapshotClientStorageType;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 3828, ASSERT_TYPE_ASSERT, "( clientFrameInfo->snapshotClientStorageType ) == ( SvSnapshotStorageType::FULL )", "clientFrameInfo->snapshotClientStorageType == SvSnapshotStorageType::FULL\n\t%i, %i", v18, 0i64) )
        __debugbreak();
    }
    if ( FrameInfoForSequenceConst->sentSequence != deltaMessage )
    {
      LODWORD(v19) = deltaMessage;
      LODWORD(v18) = FrameInfoForSequenceConst->sentSequence;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 3829, ASSERT_TYPE_ASSERT, "( clientFrameInfo->sentSequence ) == ( deltaMessage )", "clientFrameInfo->sentSequence == deltaMessage\n\t%i, %i", v18, v19) )
        __debugbreak();
    }
    SnapshotFullFrameConst = SvClientMP::GetSnapshotFullFrameConst(v12, FrameInfoForSequenceConst->snapshotIndex);
    if ( !SnapshotFullFrameConst && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 3832, ASSERT_TYPE_ASSERT, "( oldframe )", (const char *)&queryFormat, "oldframe") )
      __debugbreak();
    if ( SnapshotFullFrameConst->assignedSequence != deltaMessage )
    {
      LODWORD(v19) = deltaMessage;
      LODWORD(v18) = SnapshotFullFrameConst->assignedSequence;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 3833, ASSERT_TYPE_ASSERT, "( oldframe->assignedSequence ) == ( deltaMessage )", "oldframe->assignedSequence == deltaMessage\n\t%i, %i", v18, v19) )
        __debugbreak();
    }
    if ( SnapshotFullFrameConst->serverEntries.m_first[0] == -10000000 )
    {
      if ( !SnapshotFullFrameConst->baselineSnap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 3837, ASSERT_TYPE_ASSERT, "( oldframe->baselineSnap )", (const char *)&queryFormat, "oldframe->baselineSnap") )
        __debugbreak();
      *outDeltaType = EVENT_NODELTA_CLIENT_REQUEST;
    }
    else if ( SvSnapshotEntries::HasValidEntries(&SnapshotFullFrameConst->serverEntries, 1) )
    {
      if ( g_svSnapshotData.nextOmnvarsIdx[v6] - SnapshotFullFrameConst->omnvarsIdx <= g_svSnapshotData.omnvarsPerClientCount )
      {
        if ( g_svSnapshotData.nextSnapshotMLGSpectatorInfo - SnapshotFullFrameConst->mlgSpectatorInfoIndex <= g_svSnapshotData.numSnapshotMLGSpectatorInfo )
        {
          *outDeltaType = EVENT_NONE;
          return SnapshotFullFrameConst;
        }
        *outDeltaType = EVENT_NODELTA_MLG_FAIL;
      }
      else
      {
        *outDeltaType = EVENT_NODELTA_OMNVAR_CACHE_FAIL;
      }
    }
    else
    {
      *outDeltaType = EVENT_NODELTA_ENTITY_CACHE_FAIL;
    }
  }
  else
  {
    if ( hasAckedBaseline )
      v17 = (connState != CS_ACTIVE) + 8;
    else
      v17 = EVENT_NODELTA_CLIENT_REQUEST;
    *outDeltaType = v17;
  }
  return 0i64;
}

/*
==============
SV_SnapshotMP_FindValidDeltaFrame
==============
*/
const clientSnapshot_t *SV_SnapshotMP_FindValidDeltaFrame(const SvClientMP *client, const SvClientConnectionState connState, const bool hasAckedBaseline, const int deltaMessage, const clientSnapshot_t *frame, int *outLastFrame, int *outLastServerTime, SvWriteSnapshotResult *result)
{
  const clientSnapshot_t *v11; 
  int *v12; 
  unsigned int *v13; 
  SvWriteSnapshotResult *v14; 
  unsigned int MpClientIndex; 
  __int64 v16; 
  const clientSnapshot_t *ClientDeltaSnapshot; 
  const clientSnapshot_t *v18; 
  __int64 v19; 
  int v20; 
  char *fmt; 

  if ( !client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 3871, ASSERT_TYPE_ASSERT, "( client )", (const char *)&queryFormat, "client") )
    __debugbreak();
  v11 = frame;
  if ( !frame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 3872, ASSERT_TYPE_ASSERT, "( frame )", (const char *)&queryFormat, "frame") )
    __debugbreak();
  v12 = outLastFrame;
  if ( !outLastFrame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 3873, ASSERT_TYPE_ASSERT, "( outLastFrame )", (const char *)&queryFormat, "outLastFrame") )
    __debugbreak();
  v13 = (unsigned int *)outLastServerTime;
  if ( !outLastServerTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 3874, ASSERT_TYPE_ASSERT, "( outLastServerTime )", (const char *)&queryFormat, "outLastServerTime") )
    __debugbreak();
  v14 = result;
  if ( !result && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 3875, ASSERT_TYPE_ASSERT, "( result )", (const char *)&queryFormat, "result") )
    __debugbreak();
  MpClientIndex = SV_Client_GetMpClientIndex(client);
  v16 = MpClientIndex;
  ClientDeltaSnapshot = SV_SnapshotMP_FindClientDeltaSnapshot(MpClientIndex, deltaMessage, connState, hasAckedBaseline, v11, (BandwidthMonitoringEventTypes *)&frame);
  v18 = ClientDeltaSnapshot;
  if ( ClientDeltaSnapshot )
  {
    *v12 = client->netchan.outgoingSequence - deltaMessage;
    *v13 = ClientDeltaSnapshot->serverTime;
    v14->currentPacketBuiltEvent = (int)frame;
  }
  else
  {
    v19 = (unsigned int)frame;
    *v12 = 0;
    *v13 = 0;
    v14->currentPacketBuiltEvent = v19;
    SV_BandwidthProfile_RecordEvent(-1, "nodelta:client %d,event %d", (unsigned int)v16, v19);
  }
  switch ( v14->currentPacketBuiltEvent )
  {
    case 4:
      if ( !SV_ClientMP_IsTestClient(v16) )
        Com_Printf(15, "[Snapshot] %s: Sending baseline snapshot\n", client->name);
      break;
    case 0xA:
      if ( !SvPersistentGlobalsMP::GetPersistentGlobalsMP()->frontEndState[0] )
      {
        v20 = SV_Client_GetMpClientIndex(client);
        if ( !SV_ClientMP_IsTestClient(v20) && Dvar_GetBool_Internal_DebugName(DVARBOOL_sv_snapshotDebugVerbose, "sv_snapshotDebugVerbose") )
          Com_Printf(15, "[Snapshot] %s: Delta against baseline snapshot (by client request)\n", client->name);
      }
      break;
    case 0xB:
      if ( SV_SnapshotMP_PrintForcedNoDelta(client) )
      {
        LODWORD(fmt) = v11->serverTime;
        Com_PrintWarning(15, "[Snapshot] %s: Delta request from out of server entry. They wanted to delta off a packet sent from server time %d to server time %d.\n", client->name, *v13, fmt);
      }
      break;
    case 0xE:
      if ( SV_SnapshotMP_PrintForcedNoDelta(client) )
        Com_PrintWarning(15, "[Snapshot] %s: Delta request from out of date omnvars - old omnvar frame has fallen behind by more than %d frames\n", client->name, (unsigned int)(g_svSnapshotData.nextOmnvarsIdx[v16] - g_svSnapshotData.omnvarsPerClientCount));
      break;
    default:
      if ( v14->currentPacketBuiltEvent == 17 && SV_SnapshotMP_PrintForcedNoDelta(client) )
        Com_PrintWarning(15, "[Snapshot] %s: Delta request from out of date mlg data - old date mlg data frame has fallen behind by more than %d frames\n", client->name, (unsigned int)(g_svSnapshotData.nextSnapshotMLGSpectatorInfo - g_svSnapshotData.numSnapshotMLGSpectatorInfo));
      break;
  }
  return v18;
}

/*
==============
SV_SnapshotMP_GetAllocationSize
==============
*/
__int64 SV_SnapshotMP_GetAllocationSize(const unsigned int *snapBufferTypeSizes, const unsigned int snapBufferTypeCount, const SvSnapshotBufferType type, const unsigned int count)
{
  __int64 v4; 
  __int64 v9; 

  v4 = type;
  if ( !snapBufferTypeSizes && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 379, ASSERT_TYPE_ASSERT, "( snapBufferTypeSizes )", (const char *)&queryFormat, "snapBufferTypeSizes") )
    __debugbreak();
  if ( (unsigned int)v4 >= snapBufferTypeCount )
  {
    LODWORD(v9) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 383, ASSERT_TYPE_ASSERT, "(unsigned)( typeIndex ) < (unsigned)( snapBufferTypeCount )", "typeIndex doesn't index snapBufferTypeCount\n\t%i not in [0, %i)", v9, snapBufferTypeCount) )
      __debugbreak();
  }
  if ( !snapBufferTypeSizes[v4] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 385, ASSERT_TYPE_ASSERT, "( snapBufferTypeSizes[typeIndex] != 0 )", (const char *)&queryFormat, "snapBufferTypeSizes[typeIndex] != 0") )
    __debugbreak();
  return (count * snapBufferTypeSizes[v4] + 127) & 0xFFFFFF80;
}

/*
==============
SV_SnapshotMP_GetArchiveBuffer
==============
*/
unsigned __int8 *SV_SnapshotMP_GetArchiveBuffer(unsigned int *outSize)
{
  if ( outSize )
  {
    *outSize = g_svSnapshotData.archive.archivedSnapshotBufferSize;
    return g_svSnapshotData.archive.archivedSnapshotBuffer;
  }
  else
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 2162, ASSERT_TYPE_ASSERT, "( outSize )", (const char *)&queryFormat, "outSize") )
      __debugbreak();
    MEMORY[0] = g_svSnapshotData.archive.archivedSnapshotBufferSize;
    return g_svSnapshotData.archive.archivedSnapshotBuffer;
  }
}

/*
==============
SV_SnapshotMP_GetArchiveSizeForPlayers
==============
*/
__int64 SV_SnapshotMP_GetArchiveSizeForPlayers(const unsigned int clientCount, const int frameDuration)
{
  const dvar_t *v2; 
  int integer; 
  const dvar_t *v6; 
  const char *v7; 

  v2 = DVARINT_sv_killcam_length_max;
  if ( !DVARINT_sv_killcam_length_max && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sv_killcam_length_max") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  integer = v2->current.integer;
  if ( clientCount <= 0x14 )
  {
    v6 = DVARINT_sv_archive_frame_size_mp;
    if ( DVARINT_sv_archive_frame_size_mp )
      goto LABEL_11;
    v7 = "sv_archive_frame_size_mp";
  }
  else
  {
    v6 = DVARINT_sv_archive_frame_size_br;
    if ( DVARINT_sv_archive_frame_size_br )
      goto LABEL_11;
    v7 = "sv_archive_frame_size_br";
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", v7) )
    __debugbreak();
LABEL_11:
  Dvar_CheckFrontendServerThread(v6);
  return (unsigned int)(v6->current.integer * (1000 * integer / frameDuration));
}

/*
==============
SV_SnapshotMP_GetArchivedPlayerTransform
==============
*/
char SV_SnapshotMP_GetArchivedPlayerTransform(const int clientNum, const int archiveFrameNum, const serverArchive_t *const archive, vec3_t *outOrigin, vec3_t *outAngles)
{
  int v9; 
  __int64 v10; 
  __int64 v11; 
  vec3_t *archivedTransformOriginBuffer; 
  base_vec3_t<short> *archivedTransformAnglesBuffer; 
  float v14; 
  float v15; 
  __int64 v17; 
  __int64 v18; 

  if ( clientNum >= SvClient::ms_clientCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 9150, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( SvClient::GetClientCount() )", "clientNum doesn't index SvClient::GetClientCount()\n\t%i not in [0, %i)", clientNum, SvClient::ms_clientCount) )
    __debugbreak();
  if ( !archive && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 9151, ASSERT_TYPE_ASSERT, "( archive != nullptr )", (const char *)&queryFormat, "archive != nullptr") )
    __debugbreak();
  if ( !archive->archivedTransformValidBuffer )
    return 0;
  v9 = archiveFrameNum % g_svSnapshotData.archive.archivedFrameCount;
  if ( !SV_SnapshotMP_FrameIsStillInArchivedSnapshotBuffer(&g_svSnapshotData.archive, g_svSnapshotData.archive.archivedSnapshotFrames[archiveFrameNum % g_svSnapshotData.archive.archivedFrameCount].start) )
    return 0;
  v10 = (unsigned int)((clientNum >> 5) + v9 * ((int)(SvClient::ms_clientCount + 31) / 32));
  if ( (unsigned int)v10 >= archive->archivedTransformValidSize >> 2 )
  {
    LODWORD(v18) = archive->archivedTransformValidSize >> 2;
    LODWORD(v17) = (clientNum >> 5) + v9 * ((int)(SvClient::ms_clientCount + 31) / 32);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 9163, ASSERT_TYPE_ASSERT, "(unsigned)( transformValidIndex ) < (unsigned)( archive->archivedTransformValidSize / sizeof( uint ) )", "transformValidIndex doesn't index archive->archivedTransformValidSize / sizeof( uint )\n\t%i not in [0, %i)", v17, v18) )
      __debugbreak();
  }
  if ( ((0x80000000 >> (clientNum & 0x1F)) & archive->archivedTransformValidBuffer[v10]) == 0 )
    return 0;
  v11 = clientNum + v9 * SvClient::ms_clientCount;
  if ( archive->archivedTransformOriginBuffer )
  {
    if ( (unsigned int)v11 >= archive->archivedTransformOriginSize / 0xC )
    {
      LODWORD(v18) = archive->archivedTransformOriginSize / 0xC;
      LODWORD(v17) = clientNum + v9 * SvClient::ms_clientCount;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 9173, ASSERT_TYPE_ASSERT, "(unsigned)( transformIndex ) < (unsigned)( archive->archivedTransformOriginSize / sizeof( vec3_t ) )", "transformIndex doesn't index archive->archivedTransformOriginSize / sizeof( vec3_t )\n\t%i not in [0, %i)", v17, v18) )
        __debugbreak();
    }
    archivedTransformOriginBuffer = archive->archivedTransformOriginBuffer;
    outOrigin->v[0] = archivedTransformOriginBuffer[v11].v[0];
    outOrigin->v[1] = archivedTransformOriginBuffer[v11].v[1];
    outOrigin->v[2] = archivedTransformOriginBuffer[v11].v[2];
  }
  if ( archive->archivedTransformAnglesBuffer )
  {
    if ( (unsigned int)v11 >= archive->archivedTransformAnglesSize / 6 )
    {
      LODWORD(v18) = archive->archivedTransformAnglesSize / 6;
      LODWORD(v17) = v11;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 9181, ASSERT_TYPE_ASSERT, "(unsigned)( transformIndex ) < (unsigned)( archive->archivedTransformAnglesSize / sizeof( svec3_t ) )", "transformIndex doesn't index archive->archivedTransformAnglesSize / sizeof( svec3_t )\n\t%i not in [0, %i)", v17, v18) )
        __debugbreak();
    }
    archivedTransformAnglesBuffer = archive->archivedTransformAnglesBuffer;
    v14 = (float)archivedTransformAnglesBuffer[v11].v[2] * 0.0054931641;
    v15 = (float)archivedTransformAnglesBuffer[v11].v[1] * 0.0054931641;
    outAngles->v[0] = (float)archivedTransformAnglesBuffer[v11].v[0] * 0.0054931641;
    outAngles->v[1] = v15;
    outAngles->v[2] = v14;
  }
  return 1;
}

/*
==============
SV_SnapshotMP_GetBaselineEntity
==============
*/
void SV_SnapshotMP_GetBaselineEntity(const SvSnapshotDelta *snapDelta, const __int16 entityNumber, entityState_t *const outBaseline)
{
  const entityState_t *Entity; 
  __int64 v7; 
  __int64 v8; 

  if ( !outBaseline && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 6044, ASSERT_TYPE_ASSERT, "( outBaseline != nullptr )", (const char *)&queryFormat, "outBaseline != nullptr") )
    __debugbreak();
  if ( (unsigned __int16)entityNumber >= 0x800u )
  {
    LODWORD(v7) = entityNumber;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 6045, ASSERT_TYPE_ASSERT, "(unsigned)( entityNumber ) < (unsigned)( ( 2048 ) )", "entityNumber doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v7, 2048) )
      __debugbreak();
  }
  if ( snapDelta->snapshotType != LONG || !g_svSnapshotData.constBaselineIsValid )
    goto LABEL_16;
  if ( !SV_NetConstBaselines_GetBaselineValidState() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 2516, ASSERT_TYPE_ASSERT, "( SV_NetConstBaselines_GetBaselineValidState() )", (const char *)&queryFormat, "SV_NetConstBaselines_GetBaselineValidState()") )
    __debugbreak();
  Entity = NetConstBaselines_GetEntity(entityNumber);
  if ( Entity )
  {
    *(_OWORD *)&outBaseline->number = *(_OWORD *)&Entity->number;
    *(_OWORD *)&outBaseline->lerp.pos.trType = *(_OWORD *)&Entity->lerp.pos.trType;
    *(_OWORD *)&outBaseline->lerp.pos.trBase.y = *(_OWORD *)&Entity->lerp.pos.trBase.y;
    *(_OWORD *)&outBaseline->lerp.pos.trDelta.z = *(_OWORD *)&Entity->lerp.pos.trDelta.z;
    *(_OWORD *)outBaseline->lerp.apos.trBase.v = *(_OWORD *)Entity->lerp.apos.trBase.v;
    *(_OWORD *)&outBaseline->lerp.apos.trDelta.y = *(_OWORD *)&Entity->lerp.apos.trDelta.y;
    *(_OWORD *)&outBaseline->lerp.u.vehicle.bodyPitch = *(_OWORD *)&Entity->lerp.u.vehicle.bodyPitch;
    *(LerpEntityStateInfoVolumeGrapple *)((char *)&outBaseline->lerp.u.infoVolumeGrapple + 24) = *(LerpEntityStateInfoVolumeGrapple *)((char *)&Entity->lerp.u.infoVolumeGrapple + 24);
    *(_OWORD *)&outBaseline->staticState.turret.carrierEntNum = *(_OWORD *)&Entity->staticState.turret.carrierEntNum;
    *(_OWORD *)&outBaseline->clientNum = *(_OWORD *)&Entity->clientNum;
    *(_OWORD *)&outBaseline->events[0].eventType = *(_OWORD *)&Entity->events[0].eventType;
    *(_OWORD *)&outBaseline->events[2].eventType = *(_OWORD *)&Entity->events[2].eventType;
    *(_OWORD *)&outBaseline->index.brushModel = *(_OWORD *)&Entity->index.brushModel;
    *(_OWORD *)&outBaseline->animInfo.selectAnim = *(_OWORD *)&Entity->animInfo.selectAnim;
    *(_OWORD *)&outBaseline->partBits.array[2] = *(_OWORD *)&Entity->partBits.array[2];
    *(_QWORD *)&outBaseline->partBits.array[6] = *(_QWORD *)&Entity->partBits.array[6];
    if ( outBaseline->number != entityNumber )
    {
      LODWORD(v8) = outBaseline->number;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 6052, ASSERT_TYPE_ASSERT, "(outBaseline->number == entityNumber)", "%s\n\toutBaseline->number %d != entityNumber %d\n", "outBaseline->number == entityNumber", v8, entityNumber) )
        __debugbreak();
    }
  }
  else
  {
LABEL_16:
    memset_0(&outBaseline->otherEntityNum, 0, 0xF6ui64);
    outBaseline->number = entityNumber;
  }
}

/*
==============
SV_SnapshotMP_GetEntityAtIndex
==============
*/
void SV_SnapshotMP_GetEntityAtIndex(const SvSnapshotFrameBuffers *frameBuffers, const __int64 firstEntIndex, const __int64 firstEntFullStateIndex, const int curIndex, const entityState_t **outEntityState, const unsigned int **outClientBits)
{
  __int64 v6; 
  unsigned int clientMaskSize; 
  unsigned __int16 v11; 
  __int64 v12; 
  __int64 v13; 
  unsigned int v14; 
  __int64 v15; 
  __int64 v16; 

  v6 = curIndex;
  if ( !frameBuffers && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 2405, ASSERT_TYPE_ASSERT, "( frameBuffers )", (const char *)&queryFormat, "frameBuffers") )
    __debugbreak();
  if ( !outEntityState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 2406, ASSERT_TYPE_ASSERT, "( outEntityState )", (const char *)&queryFormat, "outEntityState") )
    __debugbreak();
  clientMaskSize = g_svSnapshotData.clientMaskSize;
  if ( 8 * g_svSnapshotData.clientMaskSize != ((SvClient::ms_clientCount + 31) & 0xFFFFFFE0) )
  {
    LODWORD(v15) = 8 * g_svSnapshotData.clientMaskSize;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 2409, ASSERT_TYPE_ASSERT, "( (clientMaskSize - (0)) * 8 ) == ( static_cast<uint>(AlignUp( SvClientMP::GetClientCount(), 32 )) )", "(clientMaskSize - SV_SNAPSHOT_BUFFER_CHECKSUM_SIZE) * 8 == static_cast<uint>(AlignUp( SvClientMP::GetClientCount(), 32 ))\n\t%i, %i", v15, (SvClient::ms_clientCount + 31) & 0xFFFFFFE0) )
      __debugbreak();
  }
  v11 = *(_WORD *)SvSnapshotFrameBuffers::GetBufferEntryAtIndex((SvSnapshotFrameBuffers *)frameBuffers, MOVEMENT, firstEntIndex + v6);
  if ( v11 >= 0x800u )
  {
    v13 = v11;
    v14 = v11 - 2048;
    if ( v14 >= g_svSnapshotData.nextNoDeltaEntity )
    {
      LODWORD(v16) = g_svSnapshotData.nextNoDeltaEntity;
      LODWORD(v15) = v11 - 2048;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 2429, ASSERT_TYPE_ASSERT, "(unsigned)( noDeltaEntityIndex ) < (unsigned)( g_svSnapshotData.nextNoDeltaEntity )", "noDeltaEntityIndex doesn't index g_svSnapshotData.nextNoDeltaEntity\n\t%i not in [0, %i)", v15, v16) )
        __debugbreak();
    }
    if ( v14 >= g_svSnapshotData.nextNoDeltaEntityClientMask )
    {
      LODWORD(v16) = g_svSnapshotData.nextNoDeltaEntityClientMask;
      LODWORD(v15) = v14;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 2430, ASSERT_TYPE_ASSERT, "(unsigned)( noDeltaEntityIndex ) < (unsigned)( g_svSnapshotData.nextNoDeltaEntityClientMask )", "noDeltaEntityIndex doesn't index g_svSnapshotData.nextNoDeltaEntityClientMask\n\t%i not in [0, %i)", v15, v16) )
        __debugbreak();
    }
    *outEntityState = &g_svSnapshotData.noDeltaEntities[v13 - 2048];
    *outClientBits = (const unsigned int *)((char *)g_svSnapshotData.noDeltaEntityClientMaskData + clientMaskSize * v14);
  }
  else
  {
    v12 = firstEntFullStateIndex + v11;
    *outEntityState = (const entityState_t *)SvSnapshotFrameBuffers::GetBufferEntryAtIndex((SvSnapshotFrameBuffers *)frameBuffers, DODGE, v12);
    *outClientBits = (const unsigned int *)SvSnapshotFrameBuffers::GetBufferEntryAtIndex((SvSnapshotFrameBuffers *)frameBuffers, COUNT, v12);
  }
}

/*
==============
SV_SnapshotMP_GetEntityClientsCanSeeCount
==============
*/
__int64 SV_SnapshotMP_GetEntityClientsCanSeeCount(unsigned int *outHighestClientVisibleCount)
{
  unsigned int *v1; 
  unsigned int v2; 
  unsigned int v3; 
  int v4; 
  unsigned int v5; 
  __int64 v6; 
  gentity_s *v7; 
  unsigned int v8; 
  ClientBits *p_clientMask; 
  unsigned int v10; 
  int *v11; 
  unsigned int v12; 
  unsigned int v13; 
  __int64 v15; 
  __int64 v16; 
  int v17; 
  unsigned int v18; 
  SvGameGlobals *SvGameGlobalsCommon; 
  int v21[200]; 

  v1 = outHighestClientVisibleCount;
  memset_0(v21, 0, sizeof(v21));
  if ( !Com_IsAnyLocalServerRunning() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 2558, ASSERT_TYPE_ASSERT, "( Com_IsAnyLocalServerRunning() )", (const char *)&queryFormat, "Com_IsAnyLocalServerRunning()") )
    __debugbreak();
  v2 = 0;
  v3 = 0;
  v18 = 0;
  if ( (_BYTE)SvGameGlobals::ms_allocatedType != HALF_HALF )
  {
    v17 = (unsigned __int8)SvGameGlobals::ms_allocatedType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_game_globals_mp.h", 146, ASSERT_TYPE_ASSERT, "(ms_allocatedType == ALLOCATION_TYPE)", "%s\n\tTrying to access server globals, but the server isn't running or its game mode is wrong (ms_allocatedType=%d)", "ms_allocatedType == ALLOCATION_TYPE", v17) )
      __debugbreak();
  }
  SvGameGlobalsCommon = SvGameGlobals::GetSvGameGlobalsCommon();
  v4 = 0;
  if ( SvGameGlobalsCommon->num_entities > 0 )
  {
    v5 = 0;
    v6 = 0i64;
    do
    {
      v7 = &SvGameGlobals::GetSvGameGlobalsCommon()->gentities[v6];
      if ( v7->r.isLinked && (v7->r.svFlags & 1) == 0 )
      {
        v8 = 0;
        p_clientMask = &v7->clientMask;
        while ( p_clientMask->array[0] == -1 )
        {
          ++v8;
          p_clientMask = (ClientBits *)((char *)p_clientMask + 4);
          if ( v8 >= 7 )
            goto LABEL_24;
        }
        ++v5;
        v10 = 0;
        v18 = v5;
        if ( (int)SvClient::ms_clientCount > 0 )
        {
          v11 = v21;
          do
          {
            if ( v10 >= 0xE0 )
            {
              LODWORD(v16) = 224;
              LODWORD(v15) = v10;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v15, v16) )
                __debugbreak();
            }
            if ( ((0x80000000 >> (v10 & 0x1F)) & v7->clientMask.array[(unsigned __int64)v10 >> 5]) == 0 && v7->s.number != v10 )
              ++*v11;
            ++v10;
            ++v11;
          }
          while ( (int)v10 < (int)SvClient::ms_clientCount );
        }
      }
LABEL_24:
      ++v4;
      ++v6;
    }
    while ( v4 < SvGameGlobalsCommon->num_entities );
    v1 = outHighestClientVisibleCount;
    v3 = v18;
  }
  *v1 = 0;
  v12 = SvClient::ms_clientCount;
  if ( SvClient::ms_clientCount )
  {
    do
    {
      v13 = v21[v2];
      if ( v13 > *v1 )
      {
        *v1 = v13;
        v12 = SvClient::ms_clientCount;
      }
      ++v2;
    }
    while ( v2 < v12 );
  }
  return v3;
}

/*
==============
SV_SnapshotMP_GetEntityCountLimits
==============
*/
void SV_SnapshotMP_GetEntityCountLimits(unsigned int *outMaxSnapshotEntityCount, unsigned int *outMaxPerClientSnapshotEntityCount)
{
  if ( !outMaxSnapshotEntityCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 2596, ASSERT_TYPE_ASSERT, "( outMaxSnapshotEntityCount )", (const char *)&queryFormat, "outMaxSnapshotEntityCount") )
    __debugbreak();
  if ( !outMaxPerClientSnapshotEntityCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 2597, ASSERT_TYPE_ASSERT, "( outMaxPerClientSnapshotEntityCount )", (const char *)&queryFormat, "outMaxPerClientSnapshotEntityCount") )
    __debugbreak();
  *outMaxSnapshotEntityCount = g_svSnapshotData.maxSnapshotEntities;
  *outMaxPerClientSnapshotEntityCount = g_svSnapshotData.maxSnapshotEntitiesPerClient;
}

/*
==============
SV_SnapshotMP_GetMemorySize
==============
*/
__int64 SV_SnapshotMP_GetMemorySize(unsigned int packetBackupCount, unsigned int packetTransientStorageInterval, unsigned int clientCount, unsigned int agentCount, const ScriptableInitLimits *scriptableInitLimits, int frameDurationMs, const SvSnapshotArchiveMode archiveMode, bool useMoreEntities)
{
  const ScriptableInitLimits *v9; 
  unsigned int v10; 
  unsigned int v12; 
  unsigned int v13; 
  unsigned int v14; 
  const dvar_t *v15; 
  int v16; 
  unsigned int v17; 
  unsigned int v18; 
  int ArchiveSizeForPlayers; 
  const dvar_t *v20; 
  unsigned int v21; 
  int v22; 
  const dvar_t *v23; 
  unsigned __int64 v24; 
  int v25; 
  const dvar_t *v26; 
  unsigned int v27; 
  const dvar_t *v28; 
  const dvar_t *v29; 
  const dvar_t *v30; 
  bool v31; 
  unsigned int v33; 
  unsigned int *v34; 
  signed int v35; 
  int v36; 
  int v37; 
  unsigned int v38; 
  unsigned int v39; 
  unsigned int v40; 
  unsigned int *v41; 
  int v42; 
  int v43; 
  unsigned __int64 replicatedPartLimit; 
  unsigned int v45; 
  unsigned int v46; 
  unsigned int v47; 
  unsigned int v48; 
  unsigned int v49; 
  unsigned int v50; 
  int v51; 
  unsigned int v52; 
  int v53; 
  ScriptableInitLimits *v55; 
  unsigned int v59; 
  unsigned int outEntryCount[2]; 
  __int64 v62; 
  __int64 v63; 
  __int64 v64; 
  __int64 v65; 
  __m256i v66; 
  __int64 v67; 

  v9 = scriptableInitLimits;
  v10 = agentCount;
  v12 = packetTransientStorageInterval;
  v13 = packetBackupCount;
  v14 = 0;
  if ( archiveMode == None )
  {
    v15 = DVARINT_sv_killcam_length_max;
    if ( !DVARINT_sv_killcam_length_max && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sv_killcam_length_max") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v15);
    v16 = 1000 * v15->current.integer / frameDurationMs;
    v17 = v16 * clientCount;
    v18 = 15000 / frameDurationMs * clientCount;
    ArchiveSizeForPlayers = SV_SnapshotMP_GetArchiveSizeForPlayers(clientCount, frameDurationMs);
    v20 = DVARBOOL_sv_archive_smooth_transform_origin;
    v21 = ((32 * v16 + 127) & 0xFFFFFF80) + ((32 * (15000 / frameDurationMs) + 127) & 0xFFFFFF80) + ((4 * v16 * clientCount + 127) & 0xFFFFFF80) + ((4 * v18 + 127) & 0xFFFFFF80) + ((ArchiveSizeForPlayers + 127) & 0xFFFFFF80);
    v22 = 0x400000;
    if ( clientCount <= 0x14 )
      v22 = 0x200000;
    v14 = v22 + v21;
    if ( !DVARBOOL_sv_archive_smooth_transform_origin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sv_archive_smooth_transform_origin") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v20);
    if ( v20->current.enabled )
      goto LABEL_15;
    v23 = DVARBOOL_sv_archive_smooth_transform_angles;
    if ( !DVARBOOL_sv_archive_smooth_transform_angles && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sv_archive_smooth_transform_angles") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v23);
    if ( v23->current.enabled )
    {
LABEL_15:
      v24 = (4 * (unsigned __int64)(clientCount + 31)) >> 5;
      v25 = v16 * v24;
      v26 = DVARBOOL_sv_archive_smooth_transform_origin;
      v27 = ((v25 + 127) & 0xFFFFFF80) + v14;
      if ( !DVARBOOL_sv_archive_smooth_transform_origin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sv_archive_smooth_transform_origin") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v26);
      if ( v26->current.enabled )
        v27 += (12 * v17 + 127) & 0xFFFFFF80;
      v28 = DVARBOOL_sv_archive_smooth_transform_angles;
      if ( !DVARBOOL_sv_archive_smooth_transform_angles && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sv_archive_smooth_transform_angles") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v28);
      if ( v28->current.enabled )
        v27 += (6 * v17 + 127) & 0xFFFFFF80;
      v14 = ((15000 / frameDurationMs * v24 + 127) & 0xFFFFFF80) + v27;
      v29 = DVARBOOL_sv_archive_smooth_transform_origin;
      if ( !DVARBOOL_sv_archive_smooth_transform_origin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sv_archive_smooth_transform_origin") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v29);
      if ( v29->current.enabled )
        v14 += (12 * v18 + 127) & 0xFFFFFF80;
      v30 = DVARBOOL_sv_archive_smooth_transform_angles;
      if ( !DVARBOOL_sv_archive_smooth_transform_angles && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sv_archive_smooth_transform_angles") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v30);
      v31 = !v30->current.enabled;
      v12 = packetTransientStorageInterval;
      v9 = scriptableInitLimits;
      v13 = packetBackupCount;
      if ( !v31 )
        v14 += (6 * v18 + 127) & 0xFFFFFF80;
    }
    else
    {
      v12 = packetTransientStorageInterval;
      v9 = scriptableInitLimits;
      v13 = packetBackupCount;
    }
    v10 = agentCount;
  }
  __asm { vpextrd rax, xmm1, 2 }
  v66 = *(__m256i *)SV_SNAP_BUFFER_TYPE_BASE_SIZES;
  v67 = *(__int64 *)&SV_SNAP_BUFFER_TYPE_BASE_SIZES[8];
  if ( (_DWORD)_RAX )
  {
    LODWORD(v55) = _RAX;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 666, ASSERT_TYPE_ASSERT, "( outBufferSizeArray[clientMaskIndex] ) == ( 0 )", "outBufferSizeArray[clientMaskIndex] == 0\n\t%i, %i", v55, 0i64) )
      __debugbreak();
  }
  v59 = ((clientCount + 31) >> 3) & 0x1FFFFFFC;
  v66.m256i_i32[2] = v59;
  SV_Snapshot_GetFullBufferCounts(outEntryCount, v13, v12, clientCount, v10, v9, useMoreEntities);
  v33 = 0;
  v34 = outEntryCount;
  v35 = 10;
  do
  {
    v36 = v66.m256i_i32[v33];
    if ( !v36 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 385, ASSERT_TYPE_ASSERT, "( snapBufferTypeSizes[typeIndex] != 0 )", (const char *)&queryFormat, "snapBufferTypeSizes[typeIndex] != 0") )
      __debugbreak();
    v37 = *v34 * v36;
    ++v33;
    ++v34;
    v14 += (v37 + 127) & 0xFFFFFF80;
  }
  while ( v33 < 0xA );
  v38 = 0;
  if ( packetTransientStorageInterval )
  {
    v39 = ((clientCount + 3) >> 2) + 1;
    outEntryCount[0] = (v39 * (useMoreEntities + 1)) << 10;
    outEntryCount[1] = outEntryCount[0];
    LODWORD(v62) = outEntryCount[0];
    LODWORD(v63) = clientCount * v39;
    HIDWORD(v63) = agentCount * v39;
    v40 = 0;
    if ( g_svSnapshotData.useNetfieldLoD )
      v40 = clientCount * (((clientCount + 3) >> 2) + 1);
    HIDWORD(v62) = v40;
    LODWORD(v64) = scriptableInitLimits->replicatedInstanceLimit * v39;
    HIDWORD(v64) = v39 * scriptableInitLimits->replicatedPartLimit;
    if ( !BgWeaponMap::ms_runtimeSizeInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_map.h", 228, ASSERT_TYPE_ASSERT, "(ms_runtimeSizeInitialized)", (const char *)&queryFormat, "ms_runtimeSizeInitialized") )
      __debugbreak();
    HIDWORD(v65) = ((clientCount + 3) >> 2) + 1;
    LODWORD(v65) = v39 * BgWeaponMap::ms_runtimeSize;
  }
  else
  {
    *(_QWORD *)outEntryCount = 0i64;
    v62 = 0i64;
    v63 = 0i64;
    v64 = 0i64;
    v65 = 0i64;
  }
  v41 = outEntryCount;
  do
  {
    v42 = v66.m256i_i32[v38];
    if ( !v42 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 385, ASSERT_TYPE_ASSERT, "( snapBufferTypeSizes[typeIndex] != 0 )", (const char *)&queryFormat, "snapBufferTypeSizes[typeIndex] != 0") )
      __debugbreak();
    v43 = *v41 * v42;
    ++v38;
    ++v41;
    v14 += (v43 + 127) & 0xFFFFFF80;
  }
  while ( v38 < 0xA );
  if ( (unsigned int)archiveMode <= 1 )
  {
    replicatedPartLimit = 32i64 * scriptableInitLimits->replicatedInstanceLimit;
    if ( scriptableInitLimits->replicatedPartLimit > replicatedPartLimit )
      replicatedPartLimit = scriptableInitLimits->replicatedPartLimit;
    if ( truncate_cast<unsigned int,unsigned __int64>(replicatedPartLimit) <= 0x7E000000 )
    {
      v46 = truncate_cast<unsigned int,unsigned __int64>(replicatedPartLimit) / 0xFF;
      v45 = truncate_cast<unsigned int,unsigned __int64>(replicatedPartLimit) + v46 + 143;
    }
    else
    {
      v45 = 127;
    }
    v14 += v45 & 0xFFFFFF80;
  }
  v47 = (clientCount + 3) >> 2;
  v49 = clientCount * (v47 + 1);
  if ( !BgWeaponMap::ms_runtimeSizeInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_map.h", 228, ASSERT_TYPE_ASSERT, "(ms_runtimeSizeInitialized)", (const char *)&queryFormat, "ms_runtimeSizeInitialized") )
    __debugbreak();
  v48 = v47 + 1;
  v50 = ((32 * scriptableInitLimits->replicatedInstanceLimit * v48 + 127) & 0xFFFFFF80) + ((62 * v48 * BgWeaponMap::ms_runtimeSize + 127) & 0xFFFFFF80) + v14 + ((agentCount * (v47 + 1) + 2 * (v49 + 168 * clientCount)) << 8) + ((10800 * v59 + 127) & 0xFFFFFF80) + ((4 * scriptableInitLimits->replicatedPartLimit * v48 + 127) & 0xFFFFFF80) + ((scriptableInitLimits->replicatedPartLimit * v48 + 127) & 0xFFFFFF80);
  if ( !BgWeaponMap::ms_runtimeSizeInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_map.h", 228, ASSERT_TYPE_ASSERT, "(ms_runtimeSizeInitialized)", (const char *)&queryFormat, "ms_runtimeSizeInitialized") )
    __debugbreak();
  v51 = BgWeaponMap::ms_runtimeSize;
  v52 = ((16 * clientCount + 127) & 0xFFFFFF80) + ((48 * v47 + 175) & 0xFFFFFF80) + ((62 * v51 + 127) & 0xFFFFFF80) + ((21412 * clientCount + 127) & 0xFFFFFF80) + ((62 * clientCount * v51 + 127) & 0xFFFFFF80) + ((216 * packetBackupCount * v49 + 127) & 0xFFFFFF80) + (((v59 + 248) * (useMoreEntities + 1)) << 10) + ((8 * packetBackupCount * clientCount * BG_Omnvar_PerSnapCount() + 127) & 0xFFFFFF80) + v50 + ((48 * clientCount + 127) & 0xFFFFFF80) + 2827136;
  if ( archiveMode == None )
    v52 += ((scriptableInitLimits->replicatedPartLimit + 65663) & 0xFFFFFF80) + ((4 * clientCount + 127) & 0xFFFFFF80) + 131840;
  v53 = 400 / frameDurationMs;
  if ( (int)clientCount < 10 )
    v35 = clientCount;
  if ( v35 < v53 )
    v53 = v35;
  return v52 + ((148440 * v53 + 127) & 0xFFFFFF80) + ((240 * clientCount + 127) & 0xFFFFFF80);
}

/*
==============
SV_SnapshotMP_GetNetchanTelemetry
==============
*/
NetchanTelemetry *SV_SnapshotMP_GetNetchanTelemetry()
{
  return 0i64;
}

/*
==============
SV_SnapshotMP_GetNewEntityLoD
==============
*/
NetFieldLoD SV_SnapshotMP_GetNewEntityLoD(const SnapshotInfo *const snapInfo, const int entityNum)
{
  if ( !snapInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 6082, ASSERT_TYPE_ASSERT, "(snapInfo != nullptr)", (const char *)&queryFormat, "snapInfo != nullptr") )
    __debugbreak();
  if ( snapInfo->sendNetfieldLoDBit )
    return GetEntityLoD(&snapInfo->newEntitiesLoD, entityNum);
  else
    return 1;
}

/*
==============
SV_SnapshotMP_GetNextEnt
==============
*/
void SV_SnapshotMP_GetNextEnt(const SvSnapshotFrameBuffers *frameBuffers, const unsigned int entCount, const __int64 firstEntIndex, const __int64 firstEntFullStateIndex, const unsigned int curIndex, const entityState_t **outEntityState, const unsigned int **outClientBits)
{
  unsigned int nextNoDeltaEntity; 
  unsigned int clientMaskSize; 
  unsigned int **v13; 
  __int64 v14; 

  if ( !outEntityState && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 2454, ASSERT_TYPE_ASSERT, "( outEntityState )", (const char *)&queryFormat, "outEntityState") )
    __debugbreak();
  if ( curIndex < entCount )
  {
    if ( firstEntIndex == -10000000 )
    {
      nextNoDeltaEntity = g_svSnapshotData.nextNoDeltaEntity;
      if ( g_svSnapshotData.nextNoDeltaEntity != g_svSnapshotData.nextNoDeltaEntityClientMask )
      {
        LODWORD(v13) = g_svSnapshotData.nextNoDeltaEntity;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 2463, ASSERT_TYPE_ASSERT, "( g_svSnapshotData.nextNoDeltaEntity ) == ( g_svSnapshotData.nextNoDeltaEntityClientMask )", "g_svSnapshotData.nextNoDeltaEntity == g_svSnapshotData.nextNoDeltaEntityClientMask\n\t%i, %i", v13, g_svSnapshotData.nextNoDeltaEntityClientMask) )
          __debugbreak();
        nextNoDeltaEntity = g_svSnapshotData.nextNoDeltaEntity;
      }
      if ( curIndex >= nextNoDeltaEntity )
      {
        LODWORD(v14) = nextNoDeltaEntity;
        LODWORD(v13) = curIndex;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 2464, ASSERT_TYPE_ASSERT, "(unsigned)( curIndex ) < (unsigned)( g_svSnapshotData.nextNoDeltaEntity )", "curIndex doesn't index g_svSnapshotData.nextNoDeltaEntity\n\t%i not in [0, %i)", v13, v14) )
          __debugbreak();
      }
      *outEntityState = &g_svSnapshotData.noDeltaEntities[curIndex];
      clientMaskSize = g_svSnapshotData.clientMaskSize;
      if ( 8 * g_svSnapshotData.clientMaskSize != ((SvClient::ms_clientCount + 31) & 0xFFFFFFE0) )
      {
        LODWORD(v14) = (SvClient::ms_clientCount + 31) & 0xFFFFFFE0;
        LODWORD(v13) = 8 * g_svSnapshotData.clientMaskSize;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 2469, ASSERT_TYPE_ASSERT, "( (clientMaskSize - (0)) * 8 ) == ( static_cast<uint>(AlignUp( SvClientMP::GetClientCount(), 32 )) )", "(clientMaskSize - SV_SNAPSHOT_BUFFER_CHECKSUM_SIZE) * 8 == static_cast<uint>(AlignUp( SvClientMP::GetClientCount(), 32 ))\n\t%i, %i", v13, v14) )
          __debugbreak();
      }
      *outClientBits = (const unsigned int *)((char *)g_svSnapshotData.noDeltaEntityClientMaskData + curIndex * clientMaskSize);
    }
    else
    {
      SV_SnapshotMP_GetEntityAtIndex(frameBuffers, firstEntIndex, firstEntFullStateIndex, curIndex, outEntityState, outClientBits);
    }
  }
  else
  {
    *outEntityState = NULL;
    *outClientBits = NULL;
  }
}

/*
==============
SV_SnapshotMP_GetOldEntityLoD
==============
*/
NetFieldLoD SV_SnapshotMP_GetOldEntityLoD(const SnapshotInfo *const snapInfo, const int entityNum)
{
  if ( !snapInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 6096, ASSERT_TYPE_ASSERT, "(snapInfo != nullptr)", (const char *)&queryFormat, "snapInfo != nullptr") )
    __debugbreak();
  if ( snapInfo->sendNetfieldLoDBit )
    return GetEntityLoD(&snapInfo->oldEntitiesLoD, entityNum);
  else
    return 1;
}

/*
==============
SV_SnapshotMP_GetRemoteClientSendDelay
==============
*/
__int64 SV_SnapshotMP_GetRemoteClientSendDelay()
{
  __int64 result; 

  result = (unsigned int)g_svSnapshotData.m_remoteClientSendDelay;
  if ( g_svSnapshotData.m_remoteClientSendDelay <= 0 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 1841, ASSERT_TYPE_ASSERT, "( g_svSnapshotData.m_remoteClientSendDelay > 0 )", (const char *)&queryFormat, "g_svSnapshotData.m_remoteClientSendDelay > 0") )
      __debugbreak();
    return (unsigned int)g_svSnapshotData.m_remoteClientSendDelay;
  }
  return result;
}

/*
==============
SV_SnapshotMP_GetSnapshotEntityLoD
==============
*/
const EntityLoDs *SV_SnapshotMP_GetSnapshotEntityLoD(const clientSnapshot_t *const frame)
{
  SvSnapshotFrameBuffers *StorageBuffer; 
  __int64 v3; 
  __int64 v4; 
  __int64 v5; 
  __int64 v6; 
  __int64 v7; 
  __int64 v8; 
  __int64 v9; 
  unsigned __int8 *BufferEntryAtIndex; 
  int v11; 
  __int64 v13; 
  __int64 v14; 
  __int64 v15; 

  if ( !frame )
    return 0i64;
  StorageBuffer = SvSnapshotEntries::GetStorageBuffer(&frame->serverEntries);
  if ( !StorageBuffer->m_bufferData[3] )
    return 0i64;
  v3 = frame->serverEntries.m_first[3];
  v4 = frame->serverEntries.m_count[3];
  v5 = v3;
  v6 = v4 + v3 - 1;
  v7 = v6;
  if ( v3 > v6 )
    return 0i64;
  while ( 1 )
  {
    v8 = v5;
    v9 = v5 + (v7 - v5) / 2;
    if ( v3 > v9 || v9 > v6 )
    {
      LODWORD(v15) = v3 + v4 - 1;
      LODWORD(v14) = v3;
      LODWORD(v13) = v5 + (v7 - v5) / 2;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 4295, ASSERT_TYPE_ASSERT, "( lodStart ) <= ( midEntryIndex ) && ( midEntryIndex ) <= ( lodStart + lodCount - 1 )", "midEntryIndex not in [lodStart, lodStart + lodCount - 1]\n\t%i not in [%i, %i]", v13, v14, v15) )
        __debugbreak();
    }
    BufferEntryAtIndex = SvSnapshotFrameBuffers::GetBufferEntryAtIndex(StorageBuffer, COUNT|DODGE, v9);
    v11 = *(_DWORD *)BufferEntryAtIndex;
    if ( *(_DWORD *)BufferEntryAtIndex == frame->ps.clientNum )
      break;
    v5 = v9 + 1;
    if ( v11 >= frame->ps.clientNum )
    {
      v7 = v9 - 1;
      if ( v11 >= frame->ps.clientNum )
        v5 = v8;
    }
    if ( v5 > v7 )
      return 0i64;
  }
  return (const EntityLoDs *)(BufferEntryAtIndex + 4);
}

/*
==============
SV_SnapshotMP_HunkUser_Alloc
==============
*/
void *SV_SnapshotMP_HunkUser_Alloc(HunkUser *user, const unsigned __int64 size, const unsigned __int64 alignment)
{
  void *v4; 
  __int64 v5; 
  unsigned int *v6; 
  unsigned int v7; 
  void *result; 
  __int64 v9; 

  v4 = Mem_HunkUser_AllocInternal(user, size, alignment, "SV_SnapshotMP_HunkUser_Alloc");
  if ( !user && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 402, ASSERT_TYPE_ASSERT, "( hunkUser )", (const char *)&queryFormat, "hunkUser") )
    __debugbreak();
  if ( s_svSnapshotDataCanaries.numCanaries >= 0x64 )
  {
    LODWORD(v9) = s_svSnapshotDataCanaries.numCanaries;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 403, ASSERT_TYPE_ASSERT, "( s_svSnapshotDataCanaries.numCanaries ) < ( 100 )", "s_svSnapshotDataCanaries.numCanaries < SV_MAX_DEBUG_CANARIES\n\t%i, %i", v9, 100) )
      __debugbreak();
  }
  s_svSnapshotDataCanaries.canaries[s_svSnapshotDataCanaries.numCanaries] = (unsigned int *)Mem_HunkUser_AllocInternal(user, 0x80ui64, 0x80ui64, "SV_SnapshotMP_AllocDebugCanary");
  v5 = 32i64;
  v6 = s_svSnapshotDataCanaries.canaries[s_svSnapshotDataCanaries.numCanaries];
  v7 = s_svSnapshotDataCanaries.numCanaries + 1;
  while ( v5 )
  {
    *v6++ = 1719328685;
    --v5;
  }
  result = v4;
  s_svSnapshotDataCanaries.numCanaries = v7;
  return result;
}

/*
==============
SV_SnapshotMP_InitClientSnapshotInfo
==============
*/
void SV_SnapshotMP_InitClientSnapshotInfo(SvClientMP *client, ClientSnapshotInfo *outSnapInfo)
{
  const dvar_t *v4; 
  bool v5; 
  bool v6; 
  bool cmdNoDelta; 

  if ( !client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 5737, ASSERT_TYPE_ASSERT, "( client )", (const char *)&queryFormat, "client") )
    __debugbreak();
  if ( !outSnapInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 5738, ASSERT_TYPE_ASSERT, "( outSnapInfo )", (const char *)&queryFormat, "outSnapInfo") )
    __debugbreak();
  memset_0(outSnapInfo, 0, sizeof(ClientSnapshotInfo));
  v4 = DVARINT_sv_useExtraCompress;
  if ( !DVARINT_sv_useExtraCompress && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sv_useExtraCompress") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  v5 = v4->current.integer != 0;
  v6 = !client->hasAckedBaselineData || client->largeCommandSequence - client->reliableAcknowledge > 0;
  outSnapInfo->client = client;
  outSnapInfo->connState = client->state;
  outSnapInfo->serverTime = SvPersistentGlobalsMP::GetPersistentGlobalsMP()->time;
  outSnapInfo->deltaMessage = client->deltaMessage;
  outSnapInfo->commandAcknowledge = client->commandSequence;
  outSnapInfo->reliableAcknowledge = client->reliableAcknowledge;
  outSnapInfo->reliableSequence = client->reliableSequence;
  outSnapInfo->hasAckedBaseline = client->hasAckedBaselineData;
  outSnapInfo->useFastAdjustTime = level.introCameraActive;
  cmdNoDelta = client->cmdNoDelta;
  outSnapInfo->isLargeSnap = v6;
  outSnapInfo->isCompressedSnap = v5;
  outSnapInfo->noDeltaCmd = cmdNoDelta;
  outSnapInfo->isDemoBaseline = 0;
}

/*
==============
SV_SnapshotMP_InitCounts
==============
*/
void SV_SnapshotMP_InitCounts(unsigned int packetBackupCount, const unsigned int throttleBackupCount, unsigned int packetTransientStorageInterval, unsigned int clientCount, unsigned int agentCount, unsigned int scriptedCameraCount, const ScriptableInitLimits *scriptableInitLimits, int frameDurationMs, const SvSnapshotArchiveMode archiveMode, bool useConstBaseline, bool useMoreEntities, bool throttleNoBaseline, int snapshotDelayNoDelta)
{
  unsigned int v15; 
  unsigned int v17; 
  const dvar_t *v18; 
  int integer; 
  const dvar_t *v20; 
  int v21; 
  const dvar_t *v22; 
  unsigned int v23; 
  int ArchiveSizeForPlayers; 
  const dvar_t *v25; 
  int v26; 
  int v27; 
  int v28; 
  const dvar_t *v29; 
  const dvar_t *v30; 
  const dvar_t *v31; 
  unsigned __int64 v32; 
  const dvar_t *v33; 
  const dvar_t *v34; 
  const dvar_t *v35; 
  bool v36; 
  unsigned int v37; 
  signed int v38; 
  unsigned int *v39; 
  int v40; 
  __int64 v41; 
  unsigned int v42; 
  unsigned int v43; 
  unsigned int v44; 
  unsigned int *v45; 
  int v46; 
  __int64 v47; 
  int v48; 
  unsigned int v50; 
  unsigned int v51; 
  int v52; 
  ScriptableInitLimits *v53; 
  __int64 v54; 
  __int64 v55; 
  unsigned int v59; 
  unsigned int outEntryCount[2]; 
  __int64 v61; 
  __int64 v62; 
  __int64 v63; 
  __int64 v64; 

  v15 = packetTransientStorageInterval;
  v17 = packetBackupCount;
  if ( packetBackupCount > 0x40 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 695, ASSERT_TYPE_ASSERT, "( ( packetBackupCount <= 64 ) )", "%s\n\t( packetBackupCount ) = %i", "( packetBackupCount <= 64 )", packetBackupCount) )
    __debugbreak();
  if ( clientCount > 0xC8 )
  {
    LODWORD(v54) = clientCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 696, ASSERT_TYPE_ASSERT, "( ( clientCount <= 200 ) )", "%s\n\t( clientCount ) = %i", "( clientCount <= 200 )", v54) )
      __debugbreak();
  }
  g_svSnapshotData.m_throttleBackupCount = throttleBackupCount;
  v18 = DVARINT_sv_snapshot_silence_threshold_send;
  g_svSnapshotData.throttleNoBaseline = throttleNoBaseline;
  g_svSnapshotData.snapshotDelayNoDelta = snapshotDelayNoDelta;
  g_svSnapshotData.clientCount = clientCount;
  g_svSnapshotData.m_packetBackupCount = v17;
  g_svSnapshotData.m_packetTransientStorageInterval = v15;
  if ( !DVARINT_sv_snapshot_silence_threshold_send && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sv_snapshot_silence_threshold_send") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v18);
  integer = v18->current.integer;
  v20 = DVARINT_sv_snapshot_silence_threshold_recv;
  g_svSnapshotData.clientSilenceThresholdSend = integer;
  if ( !DVARINT_sv_snapshot_silence_threshold_recv && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sv_snapshot_silence_threshold_recv") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v20);
  v21 = v20->current.integer;
  v22 = DVARINT_sv_forceNetfieldLoD;
  g_svSnapshotData.clientSilenceThresholdRecv = v21;
  if ( !DVARINT_sv_forceNetfieldLoD && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sv_forceNetfieldLoD") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v22);
  g_svSnapshotData.forceNetfieldLoD = v22->current.integer;
  g_svSnapshotData.maxNoDeltaClientWeaponMaps = clientCount;
  g_svSnapshotData.maxNoDeltaPlayerStates = clientCount;
  g_svSnapshotData.useNetfieldLoD = g_svSnapshotData.forceNetfieldLoD != 1;
  v23 = 768;
  v59 = (useMoreEntities + 1) << 10;
  g_svSnapshotData.maxSnapshotEntities = v59;
  if ( useMoreEntities )
    v23 = 2048;
  g_svSnapshotData.maxNoDeltaEntities = (useMoreEntities + 1) << 10;
  g_svSnapshotData.maxSnapshotEntitiesPerClient = v23;
  if ( archiveMode == None )
  {
    ArchiveSizeForPlayers = SV_SnapshotMP_GetArchiveSizeForPlayers(clientCount, frameDurationMs);
    v25 = DVARINT_sv_killcam_length_max;
    v26 = ArchiveSizeForPlayers;
    if ( !DVARINT_sv_killcam_length_max && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sv_killcam_length_max") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v25);
    v27 = v25->current.integer;
    v28 = 0x400000;
    v29 = DVARBOOL_sv_archive_smooth_transform_origin;
    g_svSnapshotData.archive.archivedFrameDuration = frameDurationMs;
    g_svSnapshotData.archive.archivedSnapshotBufferSize = v26;
    g_svSnapshotData.archivePOTG.archivedFrameDuration = frameDurationMs;
    g_svSnapshotData.archive.archivedPlayerStatesPerFrameCount = clientCount;
    g_svSnapshotData.archivePOTG.archivedPlayerStatesPerFrameCount = clientCount;
    g_svSnapshotData.archive.archivedFrameCount = 1000 * v27 / frameDurationMs;
    g_svSnapshotData.archive.archivedSnapshotBufferWrapPoint = 40 * v26;
    if ( clientCount <= 0x14 )
      v28 = 0x200000;
    g_svSnapshotData.archivePOTG.archivedSnapshotBufferSize = v28;
    g_svSnapshotData.archivePOTG.archivedFrameCount = 15000 / frameDurationMs;
    g_svSnapshotData.archivePOTG.archivedSnapshotBufferWrapPoint = 40 * v28;
    if ( !DVARBOOL_sv_archive_smooth_transform_origin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sv_archive_smooth_transform_origin") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v29);
    if ( v29->current.enabled )
      goto LABEL_32;
    v30 = DVARBOOL_sv_archive_smooth_transform_angles;
    if ( !DVARBOOL_sv_archive_smooth_transform_angles && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sv_archive_smooth_transform_angles") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v30);
    if ( v30->current.enabled )
    {
LABEL_32:
      v31 = DVARBOOL_sv_archive_smooth_transform_origin;
      v32 = (unsigned __int64)(4i64 * (int)(clientCount + 31)) >> 5;
      g_svSnapshotData.archive.archivedTransformValidSize = g_svSnapshotData.archive.archivedFrameCount * v32;
      if ( !DVARBOOL_sv_archive_smooth_transform_origin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sv_archive_smooth_transform_origin") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v31);
      if ( v31->current.enabled )
        g_svSnapshotData.archive.archivedTransformOriginSize = 12 * g_svSnapshotData.archive.archivedFrameCount * clientCount;
      else
        g_svSnapshotData.archive.archivedTransformOriginSize = 0;
      v33 = DVARBOOL_sv_archive_smooth_transform_angles;
      if ( !DVARBOOL_sv_archive_smooth_transform_angles && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sv_archive_smooth_transform_angles") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v33);
      if ( v33->current.enabled )
        g_svSnapshotData.archive.archivedTransformAnglesSize = 6 * g_svSnapshotData.archive.archivedFrameCount * clientCount;
      else
        g_svSnapshotData.archive.archivedTransformAnglesSize = 0;
      g_svSnapshotData.archivePOTG.archivedTransformValidSize = g_svSnapshotData.archivePOTG.archivedFrameCount * v32;
      v34 = DVARBOOL_sv_archive_smooth_transform_origin;
      if ( !DVARBOOL_sv_archive_smooth_transform_origin && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sv_archive_smooth_transform_origin") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v34);
      if ( v34->current.enabled )
        g_svSnapshotData.archivePOTG.archivedTransformOriginSize = 12 * g_svSnapshotData.archivePOTG.archivedFrameCount * clientCount;
      else
        g_svSnapshotData.archivePOTG.archivedTransformOriginSize = 0;
      v35 = DVARBOOL_sv_archive_smooth_transform_angles;
      if ( !DVARBOOL_sv_archive_smooth_transform_angles && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sv_archive_smooth_transform_angles") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v35);
      v36 = !v35->current.enabled;
      v15 = packetTransientStorageInterval;
      v17 = packetBackupCount;
      if ( v36 )
        g_svSnapshotData.archivePOTG.archivedTransformAnglesSize = 0;
      else
        g_svSnapshotData.archivePOTG.archivedTransformAnglesSize = 6 * g_svSnapshotData.archivePOTG.archivedFrameCount * clientCount;
    }
    else
    {
      v15 = packetTransientStorageInterval;
      v17 = packetBackupCount;
    }
    goto LABEL_59;
  }
  *(_QWORD *)&g_svSnapshotData.archive.archivedFrameDuration = 0i64;
  *(_QWORD *)&g_svSnapshotData.archive.archivedSnapshotBufferSize = 0i64;
  g_svSnapshotData.archive.archivedPlayerStatesPerFrameCount = 0;
  *(_QWORD *)&g_svSnapshotData.archivePOTG.archivedFrameDuration = 0i64;
  *(_QWORD *)&g_svSnapshotData.archivePOTG.archivedSnapshotBufferSize = 0i64;
  g_svSnapshotData.archivePOTG.archivedPlayerStatesPerFrameCount = 0;
  *(_QWORD *)&g_svSnapshotData.archive.archivedTransformValidSize = 0i64;
  g_svSnapshotData.archive.archivedTransformAnglesSize = 0;
  *(_QWORD *)&g_svSnapshotData.archivePOTG.archivedTransformValidSize = 0i64;
  g_svSnapshotData.archivePOTG.archivedTransformAnglesSize = 0;
  if ( archiveMode == 1 )
  {
LABEL_59:
    g_svSnapshotData.scriptableSnapshots.archiveScratchSize = SV_SnapshotMP_CalculateScriptableScratchSpace(scriptableInitLimits);
    goto LABEL_60;
  }
  g_svSnapshotData.scriptableSnapshots.archiveScratchSize = 0;
LABEL_60:
  SV_Snapshot_GetFullBufferCounts(outEntryCount, v17, v15, clientCount, agentCount, scriptableInitLimits, useMoreEntities);
  v37 = 0;
  v38 = 10;
  v39 = outEntryCount;
  do
  {
    v40 = *v39;
    v41 = (int)v37;
    if ( g_svSnapshotData.fullBuffers.m_bufferData[v37] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 468, ASSERT_TYPE_ASSERT, "( m_bufferData[typeIndex] == nullptr )", (const char *)&queryFormat, "m_bufferData[typeIndex] == nullptr") )
      __debugbreak();
    ++v37;
    g_svSnapshotData.fullBuffers.m_numBufferEntries[v41] = v40;
    ++v39;
  }
  while ( v37 < 0xA );
  if ( packetTransientStorageInterval )
  {
    v42 = ((clientCount + 3) >> 2) + 1;
    outEntryCount[0] = v42 * v59;
    outEntryCount[1] = v42 * v59;
    LODWORD(v61) = v42 * v59;
    LODWORD(v62) = v42 * clientCount;
    HIDWORD(v62) = agentCount * v42;
    v43 = 0;
    if ( g_svSnapshotData.useNetfieldLoD )
      v43 = v42 * clientCount;
    HIDWORD(v61) = v43;
    LODWORD(v63) = v42 * scriptableInitLimits->replicatedInstanceLimit;
    HIDWORD(v63) = v42 * scriptableInitLimits->replicatedPartLimit;
    if ( !BgWeaponMap::ms_runtimeSizeInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_map.h", 228, ASSERT_TYPE_ASSERT, "(ms_runtimeSizeInitialized)", (const char *)&queryFormat, "ms_runtimeSizeInitialized") )
      __debugbreak();
    HIDWORD(v64) = ((clientCount + 3) >> 2) + 1;
    LODWORD(v64) = v42 * BgWeaponMap::ms_runtimeSize;
  }
  else
  {
    *(_QWORD *)outEntryCount = 0i64;
    v61 = 0i64;
    v62 = 0i64;
    v63 = 0i64;
    v64 = 0i64;
  }
  v44 = 0;
  v45 = outEntryCount;
  do
  {
    v46 = *v45;
    v47 = (int)v44;
    if ( g_svSnapshotData.transientBuffers.m_bufferData[v44] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 468, ASSERT_TYPE_ASSERT, "( m_bufferData[typeIndex] == nullptr )", (const char *)&queryFormat, "m_bufferData[typeIndex] == nullptr") )
      __debugbreak();
    ++v44;
    g_svSnapshotData.transientBuffers.m_numBufferEntries[v47] = v46;
    ++v45;
  }
  while ( v44 < 0xA );
  v48 = 0;
  __asm { vpextrd rax, xmm1, 2 }
  *(__m256i *)g_svSnapshotData.snapBufferSizes = *(__m256i *)SV_SNAP_BUFFER_TYPE_BASE_SIZES;
  *(double *)&g_svSnapshotData.snapBufferSizes[8] = *(double *)&SV_SNAP_BUFFER_TYPE_BASE_SIZES[8];
  if ( (_DWORD)_RAX )
  {
    LODWORD(v53) = _RAX;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 666, ASSERT_TYPE_ASSERT, "( outBufferSizeArray[clientMaskIndex] ) == ( 0 )", "outBufferSizeArray[clientMaskIndex] == 0\n\t%i, %i", v53, 0i64) )
      __debugbreak();
  }
  g_svSnapshotData.numCachedSnapshotPlayerStatesRead = clientCount;
  v50 = ((clientCount + 3) >> 2) + 1;
  g_svSnapshotData.snapBufferSizes[2] = ((clientCount + 31) >> 3) & 0x1FFFFFFC;
  g_svSnapshotData.clientMaskSize = ((clientCount + 31) >> 3) & 0x1FFFFFFC;
  g_svSnapshotData.numCachedSnapshotPlayerStatesWrite = clientCount;
  g_svSnapshotData.numCachedSnapshotAgents = agentCount * v50;
  g_svSnapshotData.numCachedSnapshotClientStates = v50 * clientCount;
  if ( !BgWeaponMap::ms_runtimeSizeInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_map.h", 228, ASSERT_TYPE_ASSERT, "(ms_runtimeSizeInitialized)", (const char *)&queryFormat, "ms_runtimeSizeInitialized") )
    __debugbreak();
  if ( g_svSnapshotData.useNetfieldLoD )
    v48 = v50 * clientCount;
  g_svSnapshotData.numCachedSnapshotEntityLoD = v48;
  g_svSnapshotData.numCachedSnapshotWeapons = v50 * BgWeaponMap::ms_runtimeSize;
  g_svSnapshotData.scriptableSnapshots.cachedPartCount = v50 * scriptableInitLimits->replicatedPartLimit;
  v51 = v50 * scriptableInitLimits->replicatedInstanceLimit;
  g_svSnapshotData.numCachedSnapshotUmbraGateStates = ((clientCount + 3) >> 2) + 1;
  g_svSnapshotData.numClientMessages = clientCount;
  g_svSnapshotData.maxSnapBuildRequests = clientCount;
  g_svSnapshotData.scriptableSnapshots.cachedInstCount = v51;
  g_svSnapshotData.scriptedCameraCount = scriptedCameraCount;
  g_svSnapshotData.useConstBaseline = useConstBaseline;
  g_svSnapshotData.omnvarsPerClientCount = packetBackupCount;
  g_svSnapshotData.numSnapshotMLGSpectatorInfo = packetBackupCount * v50 * clientCount;
  if ( (int)clientCount > 200 )
  {
    LODWORD(v55) = 200;
    LODWORD(v53) = clientCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 889, ASSERT_TYPE_ASSERT, "( g_svSnapshotData.maxSnapBuildRequests ) <= ( 200 )", "g_svSnapshotData.maxSnapBuildRequests not in [0, MAX_SNAPSHOT_REQUESTS]\n\t%u not in [0, %u]", v53, v55) )
      __debugbreak();
  }
  if ( !frameDurationMs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 892, ASSERT_TYPE_ASSERT, "( frameDurationMs != 0 )", (const char *)&queryFormat, "frameDurationMs != 0") )
    __debugbreak();
  v52 = 400 / frameDurationMs;
  if ( (int)clientCount < 10 )
    v38 = clientCount;
  if ( v38 < v52 )
    v52 = v38;
  g_svSnapshotData.maxServerMessages = v52;
}

/*
==============
SV_SnapshotMP_InitMemory
==============
*/
void SV_SnapshotMP_InitMemory(HunkUser *hunkUser)
{
  int v2; 
  unsigned int v3; 
  unsigned int v4; 
  SvSnapshotBufferType v5; 
  SvSnapshotFrameBuffers *p_fullBuffers; 
  int *m_numBufferEntries; 
  unsigned int AllocationSize; 
  unsigned __int8 *v9; 
  SvSnapshotBufferType v10; 
  SvSnapshotFrameBuffers *p_transientBuffers; 
  int *v12; 
  unsigned int v13; 
  unsigned __int8 *v14; 
  cachedPlayerState_t **cachedSnapshotPlayerStatesWrite; 
  __int64 v16; 
  unsigned __int64 v17; 
  unsigned __int16 v18; 
  WeaponMapEntry *v19; 
  WeaponMapEntry *v20; 
  int maxNoDeltaClientWeaponMaps; 
  WeaponMapEntry *v22; 
  unsigned int v23; 
  unsigned int v24; 
  bool *v25; 
  unsigned int v26; 
  __int64 v27; 
  __int64 v28; 

  if ( !hunkUser && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 1168, ASSERT_TYPE_ASSERT, "( hunkUser )", (const char *)&queryFormat, "hunkUser") )
    __debugbreak();
  v2 = 0;
  s_svSnapshotDataCanaries.numCanaries = 0;
  if ( g_svSnapshotData.archive.archivedSnapshotBuffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 1189, ASSERT_TYPE_ASSERT, "(g_svSnapshotData.archive.archivedSnapshotBuffer == nullptr)", (const char *)&queryFormat, "g_svSnapshotData.archive.archivedSnapshotBuffer == nullptr") )
    __debugbreak();
  if ( g_svSnapshotData.archive.archivedSnapshotBufferSize > 0 )
    g_svSnapshotData.archive.archivedSnapshotBuffer = (unsigned __int8 *)SV_SnapshotMP_HunkUser_Alloc(hunkUser, g_svSnapshotData.archive.archivedSnapshotBufferSize, 0x80ui64);
  if ( g_svSnapshotData.archive.archivedSnapshotFrames && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 1205, ASSERT_TYPE_ASSERT, "(g_svSnapshotData.archive.archivedSnapshotFrames == nullptr)", (const char *)&queryFormat, "g_svSnapshotData.archive.archivedSnapshotFrames == nullptr") )
    __debugbreak();
  if ( g_svSnapshotData.archive.archivedFrameCount > 0 )
  {
    g_svSnapshotData.archive.archivedSnapshotFrames = (archivedSnapshot_t *)SV_SnapshotMP_HunkUser_Alloc(hunkUser, 32i64 * g_svSnapshotData.archive.archivedFrameCount, 0x80ui64);
    if ( !g_svSnapshotData.archive.archivedPlayerStatesPerFrameCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 1211, ASSERT_TYPE_ASSERT, "(g_svSnapshotData.archive.archivedPlayerStatesPerFrameCount > 0)", (const char *)&queryFormat, "g_svSnapshotData.archive.archivedPlayerStatesPerFrameCount > 0") )
      __debugbreak();
    v3 = 4 * g_svSnapshotData.archive.archivedFrameCount * g_svSnapshotData.archive.archivedPlayerStatesPerFrameCount;
    g_svSnapshotData.archive.archivedSnapshotPlayerStates = (int *)SV_SnapshotMP_HunkUser_Alloc(hunkUser, v3, 0x80ui64);
    DebugWipe(g_svSnapshotData.archive.archivedSnapshotPlayerStates, v3);
  }
  if ( g_svSnapshotData.archive.archivedPlayerStatesPerFrameCount )
  {
    if ( g_svSnapshotData.archivePlayerStateOffsetData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 1221, ASSERT_TYPE_ASSERT, "( g_svSnapshotData.archivePlayerStateOffsetData == nullptr )", (const char *)&queryFormat, "g_svSnapshotData.archivePlayerStateOffsetData == nullptr") )
      __debugbreak();
    g_svSnapshotData.archivePlayerStateOffsetData = (int *)SV_SnapshotMP_HunkUser_Alloc(hunkUser, 4 * g_svSnapshotData.archive.archivedPlayerStatesPerFrameCount, 0x80ui64);
  }
  if ( g_svSnapshotData.archivePOTG.archivedSnapshotBuffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 1228, ASSERT_TYPE_ASSERT, "(g_svSnapshotData.archivePOTG.archivedSnapshotBuffer == nullptr)", (const char *)&queryFormat, "g_svSnapshotData.archivePOTG.archivedSnapshotBuffer == nullptr") )
    __debugbreak();
  if ( g_svSnapshotData.archivePOTG.archivedSnapshotBufferSize > 0 )
    g_svSnapshotData.archivePOTG.archivedSnapshotBuffer = (unsigned __int8 *)SV_SnapshotMP_HunkUser_Alloc(hunkUser, g_svSnapshotData.archivePOTG.archivedSnapshotBufferSize, 0x80ui64);
  if ( g_svSnapshotData.archivePOTG.archivedSnapshotFrames && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 1234, ASSERT_TYPE_ASSERT, "(g_svSnapshotData.archivePOTG.archivedSnapshotFrames == nullptr)", (const char *)&queryFormat, "g_svSnapshotData.archivePOTG.archivedSnapshotFrames == nullptr") )
    __debugbreak();
  if ( g_svSnapshotData.archivePOTG.archivedFrameCount > 0 )
  {
    g_svSnapshotData.archivePOTG.archivedSnapshotFrames = (archivedSnapshot_t *)SV_SnapshotMP_HunkUser_Alloc(hunkUser, 32i64 * g_svSnapshotData.archivePOTG.archivedFrameCount, 0x80ui64);
    if ( !g_svSnapshotData.archivePOTG.archivedPlayerStatesPerFrameCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 1240, ASSERT_TYPE_ASSERT, "(g_svSnapshotData.archivePOTG.archivedPlayerStatesPerFrameCount > 0)", (const char *)&queryFormat, "g_svSnapshotData.archivePOTG.archivedPlayerStatesPerFrameCount > 0") )
      __debugbreak();
    v4 = 4 * g_svSnapshotData.archivePOTG.archivedFrameCount * g_svSnapshotData.archivePOTG.archivedPlayerStatesPerFrameCount;
    g_svSnapshotData.archivePOTG.archivedSnapshotPlayerStates = (int *)SV_SnapshotMP_HunkUser_Alloc(hunkUser, v4, 0x80ui64);
    DebugWipe(g_svSnapshotData.archivePOTG.archivedSnapshotPlayerStates, v4);
  }
  if ( g_svSnapshotData.archive.archivedTransformValidSize )
    g_svSnapshotData.archive.archivedTransformValidBuffer = (unsigned int *)SV_SnapshotMP_HunkUser_Alloc(hunkUser, g_svSnapshotData.archive.archivedTransformValidSize, 0x80ui64);
  if ( g_svSnapshotData.archive.archivedTransformOriginSize )
    g_svSnapshotData.archive.archivedTransformOriginBuffer = (vec3_t *)SV_SnapshotMP_HunkUser_Alloc(hunkUser, g_svSnapshotData.archive.archivedTransformOriginSize, 0x80ui64);
  if ( g_svSnapshotData.archive.archivedTransformAnglesSize )
    g_svSnapshotData.archive.archivedTransformAnglesBuffer = (base_vec3_t<short> *)SV_SnapshotMP_HunkUser_Alloc(hunkUser, g_svSnapshotData.archive.archivedTransformAnglesSize, 0x80ui64);
  if ( g_svSnapshotData.archivePOTG.archivedTransformValidSize )
    g_svSnapshotData.archivePOTG.archivedTransformValidBuffer = (unsigned int *)SV_SnapshotMP_HunkUser_Alloc(hunkUser, g_svSnapshotData.archivePOTG.archivedTransformValidSize, 0x80ui64);
  if ( g_svSnapshotData.archivePOTG.archivedTransformOriginSize )
    g_svSnapshotData.archivePOTG.archivedTransformOriginBuffer = (vec3_t *)SV_SnapshotMP_HunkUser_Alloc(hunkUser, g_svSnapshotData.archivePOTG.archivedTransformOriginSize, 0x80ui64);
  if ( g_svSnapshotData.archivePOTG.archivedTransformAnglesSize )
    g_svSnapshotData.archivePOTG.archivedTransformAnglesBuffer = (base_vec3_t<short> *)SV_SnapshotMP_HunkUser_Alloc(hunkUser, g_svSnapshotData.archivePOTG.archivedTransformAnglesSize, 0x80ui64);
  v5 = MOVEMENT;
  p_fullBuffers = &g_svSnapshotData.fullBuffers;
  m_numBufferEntries = g_svSnapshotData.fullBuffers.m_numBufferEntries;
  do
  {
    if ( p_fullBuffers->m_bufferData[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 482, ASSERT_TYPE_ASSERT, "( m_bufferData[typeIndex] == nullptr )", (const char *)&queryFormat, "m_bufferData[typeIndex] == nullptr") )
      __debugbreak();
    if ( *m_numBufferEntries <= 0 )
    {
      v9 = NULL;
    }
    else
    {
      AllocationSize = SV_SnapshotMP_GetAllocationSize(g_svSnapshotData.snapBufferSizes, 0xAu, v5, *m_numBufferEntries);
      v9 = (unsigned __int8 *)SV_SnapshotMP_HunkUser_Alloc(hunkUser, AllocationSize, 0x80ui64);
    }
    p_fullBuffers->m_bufferData[0] = v9;
    ++v5;
    p_fullBuffers = (SvSnapshotFrameBuffers *)((char *)p_fullBuffers + 8);
    ++m_numBufferEntries;
  }
  while ( (unsigned int)v5 < 0xA );
  v10 = MOVEMENT;
  p_transientBuffers = &g_svSnapshotData.transientBuffers;
  v12 = g_svSnapshotData.transientBuffers.m_numBufferEntries;
  do
  {
    if ( p_transientBuffers->m_bufferData[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 482, ASSERT_TYPE_ASSERT, "( m_bufferData[typeIndex] == nullptr )", (const char *)&queryFormat, "m_bufferData[typeIndex] == nullptr") )
      __debugbreak();
    if ( *v12 <= 0 )
    {
      v14 = NULL;
    }
    else
    {
      v13 = SV_SnapshotMP_GetAllocationSize(g_svSnapshotData.snapBufferSizes, 0xAu, v10, *v12);
      v14 = (unsigned __int8 *)SV_SnapshotMP_HunkUser_Alloc(hunkUser, v13, 0x80ui64);
    }
    p_transientBuffers->m_bufferData[0] = v14;
    ++v10;
    p_transientBuffers = (SvSnapshotFrameBuffers *)((char *)p_transientBuffers + 8);
    ++v12;
  }
  while ( (unsigned int)v10 < 0xA );
  if ( g_svSnapshotData.scriptableSnapshots.archiveScratchBuffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 1287, ASSERT_TYPE_ASSERT, "(g_svSnapshotData.scriptableSnapshots.archiveScratchBuffer == nullptr)", (const char *)&queryFormat, "g_svSnapshotData.scriptableSnapshots.archiveScratchBuffer == nullptr") )
    __debugbreak();
  if ( g_svSnapshotData.scriptableSnapshots.archiveScratchSize )
    g_svSnapshotData.scriptableSnapshots.archiveScratchBuffer = (char *)SV_SnapshotMP_HunkUser_Alloc(hunkUser, g_svSnapshotData.scriptableSnapshots.archiveScratchSize, 0x80ui64);
  g_svSnapshotData.scriptableSnapshots.archiveScratchOwnership = 0;
  if ( g_svSnapshotData.cachedSnapshotEntities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 1297, ASSERT_TYPE_ASSERT, "(!g_svSnapshotData.cachedSnapshotEntities)", (const char *)&queryFormat, "!g_svSnapshotData.cachedSnapshotEntities") )
    __debugbreak();
  g_svSnapshotData.cachedSnapshotEntities = (entityState_t *)SV_SnapshotMP_HunkUser_Alloc(hunkUser, 0x28DE80ui64, 0x80ui64);
  if ( g_svSnapshotData.cachedSnapshotEntityClientMask && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 1301, ASSERT_TYPE_ASSERT, "(!g_svSnapshotData.cachedSnapshotEntityClientMask)", (const char *)&queryFormat, "!g_svSnapshotData.cachedSnapshotEntityClientMask") )
    __debugbreak();
  g_svSnapshotData.cachedSnapshotEntityClientMask = SV_SnapshotMP_HunkUser_Alloc(hunkUser, 10800 * g_svSnapshotData.clientMaskSize, 0x80ui64);
  cachedSnapshotPlayerStatesWrite = g_svSnapshotData.cachedSnapshotPlayerStatesWrite;
  v16 = 2i64;
  do
  {
    if ( *(cachedSnapshotPlayerStatesWrite - 3) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 1307, ASSERT_TYPE_ASSERT, "(!g_svSnapshotData.cachedSnapshotPlayerStatesRead[cachedBufferIndex])", (const char *)&queryFormat, "!g_svSnapshotData.cachedSnapshotPlayerStatesRead[cachedBufferIndex]") )
      __debugbreak();
    *(cachedSnapshotPlayerStatesWrite - 3) = (cachedPlayerState_t *)SV_SnapshotMP_HunkUser_Alloc(hunkUser, (unsigned int)(21504 * g_svSnapshotData.numCachedSnapshotPlayerStatesRead), 0x80ui64);
    if ( *cachedSnapshotPlayerStatesWrite && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 1311, ASSERT_TYPE_ASSERT, "(!g_svSnapshotData.cachedSnapshotPlayerStatesWrite[cachedBufferIndex])", (const char *)&queryFormat, "!g_svSnapshotData.cachedSnapshotPlayerStatesWrite[cachedBufferIndex]") )
      __debugbreak();
    *cachedSnapshotPlayerStatesWrite++ = (cachedPlayerState_t *)SV_SnapshotMP_HunkUser_Alloc(hunkUser, (unsigned int)(21504 * g_svSnapshotData.numCachedSnapshotPlayerStatesWrite), 0x80ui64);
    --v16;
  }
  while ( v16 );
  if ( g_svSnapshotData.cachedSnapshotClientStates && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 1316, ASSERT_TYPE_ASSERT, "(!g_svSnapshotData.cachedSnapshotClientStates)", (const char *)&queryFormat, "!g_svSnapshotData.cachedSnapshotClientStates") )
    __debugbreak();
  g_svSnapshotData.cachedSnapshotClientStates = (cachedClientState_t *)SV_SnapshotMP_HunkUser_Alloc(hunkUser, (unsigned int)(g_svSnapshotData.numCachedSnapshotClientStates << 9), 0x80ui64);
  if ( g_svSnapshotData.cachedSnapshotAgents && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 1320, ASSERT_TYPE_ASSERT, "(!g_svSnapshotData.cachedSnapshotAgents)", (const char *)&queryFormat, "!g_svSnapshotData.cachedSnapshotAgents") )
    __debugbreak();
  g_svSnapshotData.cachedSnapshotAgents = (cachedAgent_s *)SV_SnapshotMP_HunkUser_Alloc(hunkUser, (unsigned int)(g_svSnapshotData.numCachedSnapshotAgents << 8), 0x80ui64);
  if ( g_svSnapshotData.cachedSnapshotEntityLoD && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 1324, ASSERT_TYPE_ASSERT, "(!g_svSnapshotData.cachedSnapshotEntityLoD)", (const char *)&queryFormat, "!g_svSnapshotData.cachedSnapshotEntityLoD") )
    __debugbreak();
  if ( 384 * g_svSnapshotData.numCachedSnapshotEntityLoD )
    g_svSnapshotData.cachedSnapshotEntityLoD = (cachedEntityLoD_t *)SV_SnapshotMP_HunkUser_Alloc(hunkUser, (unsigned int)(384 * g_svSnapshotData.numCachedSnapshotEntityLoD), 0x80ui64);
  else
    g_svSnapshotData.cachedSnapshotEntityLoD = NULL;
  if ( g_svSnapshotData.cachedSnapshotWeapons && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 1328, ASSERT_TYPE_ASSERT, "(!g_svSnapshotData.cachedSnapshotWeapons)", (const char *)&queryFormat, "!g_svSnapshotData.cachedSnapshotWeapons") )
    __debugbreak();
  g_svSnapshotData.cachedSnapshotWeapons = (WeaponMapEntry *)SV_SnapshotMP_HunkUser_Alloc(hunkUser, (unsigned int)(62 * g_svSnapshotData.numCachedSnapshotWeapons), 0x80ui64);
  if ( g_svSnapshotData.scriptableSnapshots.cachedInstances && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 1334, ASSERT_TYPE_ASSERT, "(!g_svSnapshotData.scriptableSnapshots.cachedInstances)", (const char *)&queryFormat, "!g_svSnapshotData.scriptableSnapshots.cachedInstances") )
    __debugbreak();
  g_svSnapshotData.scriptableSnapshots.cachedInstances = (ScriptableReplicatedInstance *)SV_SnapshotMP_HunkUser_Alloc(hunkUser, 32 * g_svSnapshotData.scriptableSnapshots.cachedInstCount, 0x80ui64);
  if ( g_svSnapshotData.scriptableSnapshots.cachedParts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 1338, ASSERT_TYPE_ASSERT, "(!g_svSnapshotData.scriptableSnapshots.cachedParts)", (const char *)&queryFormat, "!g_svSnapshotData.scriptableSnapshots.cachedParts") )
    __debugbreak();
  g_svSnapshotData.scriptableSnapshots.cachedParts = (ScriptablePartData *)SV_SnapshotMP_HunkUser_Alloc(hunkUser, g_svSnapshotData.scriptableSnapshots.cachedPartCount, 0x80ui64);
  if ( g_svSnapshotData.scriptableSnapshots.archivePartChangedBits.partBitsArray && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 1343, ASSERT_TYPE_ASSERT, "( g_svSnapshotData.scriptableSnapshots.archivePartChangedBits.partBitsArray == nullptr )", (const char *)&queryFormat, "g_svSnapshotData.scriptableSnapshots.archivePartChangedBits.partBitsArray == nullptr") )
    __debugbreak();
  v17 = 4 * ScriptableMsgWrite_GetChangeBitsArraySize();
  g_svSnapshotData.scriptableSnapshots.archivePartChangedBits.partBitsArray = (unsigned int *)SV_SnapshotMP_HunkUser_Alloc(hunkUser, v17, 0x80ui64);
  memset_0(g_svSnapshotData.scriptableSnapshots.archivePartChangedBits.partBitsArray, 0, (unsigned int)v17);
  if ( !BgWeaponMap::ms_runtimeSizeInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_map.h", 228, ASSERT_TYPE_ASSERT, "(ms_runtimeSizeInitialized)", (const char *)&queryFormat, "ms_runtimeSizeInitialized") )
    __debugbreak();
  v18 = BgWeaponMap::ms_runtimeSize;
  if ( g_svSnapshotData.noDeltaWeapons && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 1351, ASSERT_TYPE_ASSERT, "(!g_svSnapshotData.noDeltaWeapons)", (const char *)&queryFormat, "!g_svSnapshotData.noDeltaWeapons") )
    __debugbreak();
  g_svSnapshotData.noDeltaWeapons = (GSnapshotWeaponMap *)SV_SnapshotMP_HunkUser_Alloc(hunkUser, 0x10ui64, 0x80ui64);
  v19 = (WeaponMapEntry *)SV_SnapshotMP_HunkUser_Alloc(hunkUser, 62 * (unsigned int)v18, 0x80ui64);
  GSnapshotWeaponMap::GSnapshotWeaponMap(g_svSnapshotData.noDeltaWeapons, v19);
  if ( g_svSnapshotData.noDeltaClientWeaponMaps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 1360, ASSERT_TYPE_ASSERT, "(!g_svSnapshotData.noDeltaClientWeaponMaps)", (const char *)&queryFormat, "!g_svSnapshotData.noDeltaClientWeaponMaps") )
    __debugbreak();
  g_svSnapshotData.noDeltaClientWeaponMaps = (GSnapshotWeaponMap *)SV_SnapshotMP_HunkUser_Alloc(hunkUser, (unsigned int)(16 * g_svSnapshotData.maxNoDeltaClientWeaponMaps), 0x80ui64);
  v20 = (WeaponMapEntry *)SV_SnapshotMP_HunkUser_Alloc(hunkUser, 62 * g_svSnapshotData.maxNoDeltaClientWeaponMaps * (unsigned int)v18, 0x80ui64);
  maxNoDeltaClientWeaponMaps = g_svSnapshotData.maxNoDeltaClientWeaponMaps;
  v22 = v20;
  if ( g_svSnapshotData.maxNoDeltaClientWeaponMaps > 0 )
  {
    do
    {
      if ( v2 * (unsigned int)v18 >= maxNoDeltaClientWeaponMaps * (unsigned int)v18 )
      {
        LODWORD(v28) = maxNoDeltaClientWeaponMaps * v18;
        LODWORD(v27) = v2 * v18;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 1370, ASSERT_TYPE_ASSERT, "(unsigned)( weaponMapEntryIndex ) < (unsigned)( weaponMapEntryCount * g_svSnapshotData.maxNoDeltaClientWeaponMaps )", "weaponMapEntryIndex doesn't index weaponMapEntryCount * g_svSnapshotData.maxNoDeltaClientWeaponMaps\n\t%i not in [0, %i)", v27, v28) )
          __debugbreak();
      }
      GSnapshotWeaponMap::GSnapshotWeaponMap(&g_svSnapshotData.noDeltaClientWeaponMaps[v2], &v22[v2 * (unsigned int)v18]);
      maxNoDeltaClientWeaponMaps = g_svSnapshotData.maxNoDeltaClientWeaponMaps;
      ++v2;
    }
    while ( v2 < g_svSnapshotData.maxNoDeltaClientWeaponMaps );
  }
  if ( g_svSnapshotData.noDeltaEntities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 1375, ASSERT_TYPE_ASSERT, "(!g_svSnapshotData.noDeltaEntities)", (const char *)&queryFormat, "!g_svSnapshotData.noDeltaEntities") )
    __debugbreak();
  g_svSnapshotData.noDeltaEntities = (entityState_t *)SV_SnapshotMP_HunkUser_Alloc(hunkUser, 248 * g_svSnapshotData.maxNoDeltaEntities, 0x80ui64);
  if ( g_svSnapshotData.noDeltaEntityClientMaskData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 1379, ASSERT_TYPE_ASSERT, "(!g_svSnapshotData.noDeltaEntityClientMaskData)", (const char *)&queryFormat, "!g_svSnapshotData.noDeltaEntityClientMaskData") )
    __debugbreak();
  g_svSnapshotData.noDeltaEntityClientMaskData = SV_SnapshotMP_HunkUser_Alloc(hunkUser, g_svSnapshotData.clientMaskSize * g_svSnapshotData.maxNoDeltaEntities, 0x80ui64);
  if ( g_svSnapshotData.omnvars && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 1394, ASSERT_TYPE_ASSERT, "(!g_svSnapshotData.omnvars)", (const char *)&queryFormat, "!g_svSnapshotData.omnvars") )
    __debugbreak();
  v23 = BG_Omnvar_PerSnapCount();
  g_svSnapshotData.omnvars = (OmnvarData *)SV_SnapshotMP_HunkUser_Alloc(hunkUser, 8 * g_svSnapshotData.clientCount * g_svSnapshotData.omnvarsPerClientCount * v23, 0x80ui64);
  if ( g_svSnapshotData.mlgSpectatorClientInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 1399, ASSERT_TYPE_ASSERT, "(!g_svSnapshotData.mlgSpectatorClientInfo)", (const char *)&queryFormat, "!g_svSnapshotData.mlgSpectatorClientInfo") )
    __debugbreak();
  v24 = 216 * g_svSnapshotData.numSnapshotMLGSpectatorInfo;
  g_svSnapshotData.mlgSpectatorClientInfo = (MLGSpectatorClientInfo *)SV_SnapshotMP_HunkUser_Alloc(hunkUser, (unsigned int)(216 * g_svSnapshotData.numSnapshotMLGSpectatorInfo), 0x80ui64);
  memset_0(g_svSnapshotData.mlgSpectatorClientInfo, 0, v24);
  if ( g_svSnapshotData.noDeltaUmbraGateStates && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 1406, ASSERT_TYPE_ASSERT, "( g_svSnapshotData.noDeltaUmbraGateStates == nullptr )", (const char *)&queryFormat, "g_svSnapshotData.noDeltaUmbraGateStates == nullptr") )
    __debugbreak();
  g_svSnapshotData.noDeltaUmbraGateStates = (bitarray<384> *)SV_SnapshotMP_HunkUser_Alloc(hunkUser, 0x30ui64, 0x80ui64);
  if ( g_svSnapshotData.cachedSnapshotUmbraGateStates && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 1410, ASSERT_TYPE_ASSERT, "(!g_svSnapshotData.cachedSnapshotUmbraGateStates)", (const char *)&queryFormat, "!g_svSnapshotData.cachedSnapshotUmbraGateStates") )
    __debugbreak();
  g_svSnapshotData.cachedSnapshotUmbraGateStates = (bitarray<384> *)SV_SnapshotMP_HunkUser_Alloc(hunkUser, (unsigned int)(48 * g_svSnapshotData.numCachedSnapshotUmbraGateStates), 0x80ui64);
  if ( g_svSnapshotData.noDeltaPlayerStates && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 1416, ASSERT_TYPE_ASSERT, "(!g_svSnapshotData.noDeltaPlayerStates)", (const char *)&queryFormat, "!g_svSnapshotData.noDeltaPlayerStates") )
    __debugbreak();
  g_svSnapshotData.noDeltaPlayerStates = (playerState_s *)SV_SnapshotMP_HunkUser_Alloc(hunkUser, (unsigned int)(21412 * g_svSnapshotData.maxNoDeltaPlayerStates), 0x80ui64);
  if ( g_svSnapshotData.clientMsgRequest && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 1421, ASSERT_TYPE_ASSERT, "(!g_svSnapshotData.clientMsgRequest)", (const char *)&queryFormat, "!g_svSnapshotData.clientMsgRequest") )
    __debugbreak();
  g_svSnapshotData.clientMsgRequest = (BuildClientMessageRequest *)SV_SnapshotMP_HunkUser_Alloc(hunkUser, (unsigned int)(48 * g_svSnapshotData.numClientMessages), 0x80ui64);
  if ( g_svSnapshotData.archivePlayerStateMsgData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 1425, ASSERT_TYPE_ASSERT, "(!g_svSnapshotData.archivePlayerStateMsgData)", (const char *)&queryFormat, "!g_svSnapshotData.archivePlayerStateMsgData") )
    __debugbreak();
  if ( g_svSnapshotData.archive.archivedSnapshotBufferSize > 0 )
    g_svSnapshotData.archivePlayerStateMsgData = (unsigned __int8 *)SV_SnapshotMP_HunkUser_Alloc(hunkUser, 0x10000ui64, 0x80ui64);
  if ( g_svSnapshotData.weaponMapEncodeData.archiveMsg && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 1432, ASSERT_TYPE_ASSERT, "(!g_svSnapshotData.weaponMapEncodeData.archiveMsg)", (const char *)&queryFormat, "!g_svSnapshotData.weaponMapEncodeData.archiveMsg") )
    __debugbreak();
  if ( g_svSnapshotData.weaponMapEncodeData.archiveDataBuffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 1433, ASSERT_TYPE_ASSERT, "(!g_svSnapshotData.weaponMapEncodeData.archiveDataBuffer)", (const char *)&queryFormat, "!g_svSnapshotData.weaponMapEncodeData.archiveDataBuffer") )
    __debugbreak();
  if ( g_svSnapshotData.worldStateEncodeData.archiveMsg && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 1434, ASSERT_TYPE_ASSERT, "(!g_svSnapshotData.worldStateEncodeData.archiveMsg)", (const char *)&queryFormat, "!g_svSnapshotData.worldStateEncodeData.archiveMsg") )
    __debugbreak();
  if ( g_svSnapshotData.worldStateEncodeData.archiveDataBuffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 1435, ASSERT_TYPE_ASSERT, "(!g_svSnapshotData.worldStateEncodeData.archiveDataBuffer)", (const char *)&queryFormat, "!g_svSnapshotData.worldStateEncodeData.archiveDataBuffer") )
    __debugbreak();
  if ( g_svSnapshotData.weaponMapEncodeData.isDeltaEncoded && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 1436, ASSERT_TYPE_ASSERT, "(!g_svSnapshotData.weaponMapEncodeData.isDeltaEncoded)", (const char *)&queryFormat, "!g_svSnapshotData.weaponMapEncodeData.isDeltaEncoded") )
    __debugbreak();
  if ( g_svSnapshotData.worldStateEncodeData.isDeltaEncoded && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 1437, ASSERT_TYPE_ASSERT, "(!g_svSnapshotData.worldStateEncodeData.isDeltaEncoded)", (const char *)&queryFormat, "!g_svSnapshotData.worldStateEncodeData.isDeltaEncoded") )
    __debugbreak();
  if ( g_svSnapshotData.archive.archivedSnapshotBufferSize > 0 )
  {
    g_svSnapshotData.weaponMapEncodeData.archiveMsg = (msg_t *)SV_SnapshotMP_HunkUser_Alloc(hunkUser, 0x38ui64, 0x80ui64);
    g_svSnapshotData.weaponMapEncodeData.isDeltaEncoded = (bool *)SV_SnapshotMP_HunkUser_Alloc(hunkUser, 1ui64, 0x80ui64);
    g_svSnapshotData.weaponMapEncodeData.archiveDataBuffer = (unsigned __int8 *)SV_SnapshotMP_HunkUser_Alloc(hunkUser, 0x10000ui64, 0x80ui64);
    g_svSnapshotData.weaponMapEncodeData.archiveBufferSize = 0x10000;
    g_svSnapshotData.worldStateEncodeData.archiveMsg = (msg_t *)SV_SnapshotMP_HunkUser_Alloc(hunkUser, 0x38ui64, 0x80ui64);
    v25 = (bool *)SV_SnapshotMP_HunkUser_Alloc(hunkUser, 1ui64, 0x80ui64);
    v26 = g_svSnapshotData.scriptableSnapshots.archiveScratchSize + 0x10000;
    g_svSnapshotData.worldStateEncodeData.isDeltaEncoded = v25;
    g_svSnapshotData.worldStateEncodeData.archiveDataBuffer = (unsigned __int8 *)SV_SnapshotMP_HunkUser_Alloc(hunkUser, g_svSnapshotData.scriptableSnapshots.archiveScratchSize + 0x10000, 0x80ui64);
    g_svSnapshotData.worldStateEncodeData.archiveBufferSize = v26;
  }
  if ( g_svSnapshotData.snapBuildRequests && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 1462, ASSERT_TYPE_ASSERT, "(!g_svSnapshotData.snapBuildRequests)", (const char *)&queryFormat, "!g_svSnapshotData.snapBuildRequests") )
    __debugbreak();
  g_svSnapshotData.snapBuildRequests = (BuildServerSnapRequest *)SV_SnapshotMP_HunkUser_Alloc(hunkUser, (unsigned int)(240 * g_svSnapshotData.maxSnapBuildRequests), 0x80ui64);
  if ( g_svSnapshotData.serverMessages && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 1467, ASSERT_TYPE_ASSERT, "( g_svSnapshotData.serverMessages == nullptr )", (const char *)&queryFormat, "g_svSnapshotData.serverMessages == nullptr") )
    __debugbreak();
  g_svSnapshotData.serverMessages = (unsigned __int8 (*)[148440])SV_SnapshotMP_HunkUser_Alloc(hunkUser, (unsigned int)(148440 * g_svSnapshotData.maxServerMessages), 0x80ui64);
  memset_0(g_svSnapshotData.hasNoDeltaPlayerData, 0, sizeof(g_svSnapshotData.hasNoDeltaPlayerData));
  SV_SnapshotMP_ValidateDebugCanary();
}

/*
==============
SV_SnapshotMP_InitRuntime
==============
*/
void SV_SnapshotMP_InitRuntime(void)
{
  const dvar_t *v0; 
  const char *v1; 
  const dvar_t *v2; 
  const char *v3; 
  signed int i; 
  SvClientMP *CommonClient; 
  cachedPlayerState_t **cachedSnapshotPlayerStatesWrite; 
  __int64 v7; 
  __int64 v8; 
  int v9; 
  _DWORD *v10; 
  cachedPlayerState_t *v11; 
  int v12; 
  int *p_lastUsedTime; 
  SvGameModeApplication *ActiveServerApplication; 
  int m_frameDuration; 
  const dvar_t *v16; 
  const dvar_t *v17; 
  const dvar_t *v18; 
  const char *v19; 
  SvGameModeApplication *v20; 
  int NecessaryBandwidth; 
  int v22; 
  const dvar_t *v23; 
  int integer; 
  SvGameGlobals *SvGameGlobalsCommon; 
  __int64 v26; 

  SV_SnapshotMP_ResetBaseline();
  g_svSnapshotData.snapBuildError = NULL;
  memset_0(g_svSnapshotData.nextOmnvarsIdx, 0, sizeof(g_svSnapshotData.nextOmnvarsIdx));
  g_svSnapshotData.nextServerSnapshotIndex = 0;
  g_svSnapshotData.nextNoDeltaEntity = 0;
  g_svSnapshotData.nextNoDeltaEntityClientMask = 0;
  g_svSnapshotData.firstClientSendIndex = 0;
  if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 109, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
    __debugbreak();
  if ( (int)ComCharacterLimits::ms_gameData.m_clientCount > 20 )
  {
    v0 = DVARINT_sv_snapshot_size_estimate_br;
    if ( DVARINT_sv_snapshot_size_estimate_br )
      goto LABEL_11;
    v1 = "sv_snapshot_size_estimate_br";
  }
  else
  {
    v0 = DVARINT_sv_snapshot_size_estimate_mp;
    if ( DVARINT_sv_snapshot_size_estimate_mp )
      goto LABEL_11;
    v1 = "sv_snapshot_size_estimate_mp";
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", v1) )
    __debugbreak();
LABEL_11:
  Dvar_CheckFrontendServerThread(v0);
  g_svSnapshotData.deltaSizeEstimate = v0->current.integer;
  if ( !ComCharacterLimits::ms_isGameDataValid && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_character_limits.h", 109, ASSERT_TYPE_ASSERT, "(ms_isGameDataValid)", (const char *)&queryFormat, "ms_isGameDataValid") )
    __debugbreak();
  if ( (int)ComCharacterLimits::ms_gameData.m_clientCount > 20 )
  {
    v2 = DVARINT_sv_baseline_size_estimate_br;
    if ( DVARINT_sv_baseline_size_estimate_br )
      goto LABEL_21;
    v3 = "sv_baseline_size_estimate_br";
  }
  else
  {
    v2 = DVARINT_sv_baseline_size_estimate_mp;
    if ( DVARINT_sv_baseline_size_estimate_mp )
      goto LABEL_21;
    v3 = "sv_baseline_size_estimate_mp";
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", v3) )
    __debugbreak();
LABEL_21:
  Dvar_CheckFrontendServerThread(v2);
  g_svSnapshotData.baselineSizeEstimate = v2->current.integer;
  memset_0(g_svSnapshotData.fullBuffers.m_nextBufferIndex, 0, sizeof(g_svSnapshotData.fullBuffers.m_nextBufferIndex));
  memset_0(g_svSnapshotData.transientBuffers.m_nextBufferIndex, 0, sizeof(g_svSnapshotData.transientBuffers.m_nextBufferIndex));
  memset_0(g_svSnapshotData.serverSnapshotTimes, 0, sizeof(g_svSnapshotData.serverSnapshotTimes));
  DebugWipe(&g_svSnapshotData, 0x2000ui64);
  for ( i = 0; i < (int)SvClient::ms_clientCount; ++i )
  {
    if ( SvClient::GetCommonClient(i)->state )
    {
      if ( (_BYTE)SvClient::ms_allocatedType != HALF_HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.h", 957, ASSERT_TYPE_ASSERT, "( ms_allocatedType == ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == ALLOCATION_TYPE") )
        __debugbreak();
      CommonClient = (SvClientMP *)SvClient::GetCommonClient(i);
      SvClientMP::ResetSnapshotFrames(CommonClient);
      ScriptableMsgWrite_ResetClientBuffers(i, 0);
    }
  }
  *(_WORD *)&g_svSnapshotData.snapArchiveEncodeError = 0;
  cachedSnapshotPlayerStatesWrite = g_svSnapshotData.cachedSnapshotPlayerStatesWrite;
  g_svSnapshotData.nextCachedSnapshotEntities = 0;
  g_svSnapshotData.nextCachedSnapshotEntityClientMask = 0;
  g_svSnapshotData.nextCachedSnapshotClientStates = 0;
  v7 = 2i64;
  g_svSnapshotData.nextCachedSnapshotAgents = 0;
  g_svSnapshotData.nextCachedSnapshotWeapon = 0;
  g_svSnapshotData.nextCachedSnapshotWorldStateFrames = 0;
  g_svSnapshotData.nextCachedSnapshotWeaponMapFrames = 0;
  g_svSnapshotData.nextCachedSnapshotUmbraGateStatesIndex = 0;
  g_svSnapshotData.scriptableSnapshots.cachedInstNextIndex = 0i64;
  g_svSnapshotData.scriptableSnapshots.cachedPartNextIndex = 0i64;
  do
  {
    v8 = (__int64)*(cachedSnapshotPlayerStatesWrite - 3);
    if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 1592, ASSERT_TYPE_ASSERT, "( cachedReadPlayerStates != nullptr )", (const char *)&queryFormat, "cachedReadPlayerStates != nullptr") )
      __debugbreak();
    v9 = 0;
    if ( g_svSnapshotData.numCachedSnapshotPlayerStatesRead > 0 )
    {
      v10 = (_DWORD *)(v8 + 21448);
      do
      {
        *v10 = 0;
        v10 += 5376;
        ++v9;
      }
      while ( v9 < g_svSnapshotData.numCachedSnapshotPlayerStatesRead );
    }
    v11 = *cachedSnapshotPlayerStatesWrite;
    if ( !*cachedSnapshotPlayerStatesWrite && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 1599, ASSERT_TYPE_ASSERT, "( cachedWritePlayerStates != nullptr )", (const char *)&queryFormat, "cachedWritePlayerStates != nullptr") )
      __debugbreak();
    v12 = 0;
    if ( g_svSnapshotData.numCachedSnapshotPlayerStatesWrite > 0 )
    {
      p_lastUsedTime = &v11->lastUsedTime;
      do
      {
        *p_lastUsedTime = 0;
        p_lastUsedTime += 5376;
        ++v12;
      }
      while ( v12 < g_svSnapshotData.numCachedSnapshotPlayerStatesWrite );
    }
    ++cachedSnapshotPlayerStatesWrite;
    --v7;
  }
  while ( v7 );
  SV_SnapWorkersMP_InitSnapshotWorkers();
  g_svSnapshotData.nextSnapshotMLGSpectatorInfo = 0;
  ActiveServerApplication = SvGameModeApplication::GetActiveServerApplication();
  if ( !ActiveServerApplication->m_frameDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_gamemode_app.h", 162, ASSERT_TYPE_ASSERT, "(m_frameDuration > 0)", "%s\n\tFrame duration has not been initialized", "m_frameDuration > 0") )
    __debugbreak();
  m_frameDuration = ActiveServerApplication->m_frameDuration;
  if ( !SvPersistentGlobalsMP::GetPersistentGlobalsMP()->frontEndState[0] )
  {
    if ( m_frameDuration == 50 )
    {
      if ( Com_GameMode_SupportsFeature(WEAPON_SKYDIVE_OPEN_PARACHUTE|WEAPON_OFFHAND_END|0x80) )
      {
        v16 = DVARINT_sv_cp_remote_client_snapshot_msec_default;
        if ( !DVARINT_sv_cp_remote_client_snapshot_msec_default && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sv_cp_remote_client_snapshot_msec_default") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v16);
        m_frameDuration = v16->current.integer;
      }
      else
      {
        v17 = DVARBOOL_systemlink;
        if ( !DVARBOOL_systemlink && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "systemlink") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v17);
        if ( v17->current.enabled )
        {
          v18 = DVARINT_sv_mp_LAN_remote_client_snapshot_msec_default;
          v19 = "sv_mp_LAN_remote_client_snapshot_msec_default";
        }
        else
        {
          v18 = DVARINT_sv_mp_peer_remote_client_snapshot_msec_default;
          v19 = "sv_mp_peer_remote_client_snapshot_msec_default";
        }
        m_frameDuration = Dvar_GetInt_Internal_DebugName(v18, v19);
      }
    }
    else
    {
      Com_Printf(15, "[Snapshot] SV Send Rate overriden by framerate override. Using %i\n", (unsigned int)m_frameDuration);
    }
  }
  if ( m_frameDuration <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 1650, ASSERT_TYPE_ASSERT, "( remoteClientSendDelay > 0 )", (const char *)&queryFormat, "remoteClientSendDelay > 0") )
    __debugbreak();
  g_svSnapshotData.m_remoteClientSendDelay = m_frameDuration;
  g_svSnapshotData.m_localClientSnapshotDelay = m_frameDuration;
  v20 = SvGameModeApplication::GetActiveServerApplication();
  if ( !v20->m_frameDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_gamemode_app.h", 162, ASSERT_TYPE_ASSERT, "(m_frameDuration > 0)", "%s\n\tFrame duration has not been initialized", "m_frameDuration > 0") )
    __debugbreak();
  NecessaryBandwidth = 0x7FFFFFFF;
  v22 = 1000 / (signed int)v20->m_frameDuration;
  if ( !SvPersistentGlobalsMP::GetPersistentGlobalsMP()->frontEndState[0] && SV_Game_IsOnlineGame() )
    NecessaryBandwidth = Live_GetNecessaryBandwidth(SvClient::ms_clientCount);
  v23 = DCONST_DVARINT_sv_server_bandwidth_override;
  if ( !DCONST_DVARINT_sv_server_bandwidth_override && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sv_server_bandwidth_override") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v23);
  integer = v23->current.integer;
  if ( integer < 0 )
    integer = NecessaryBandwidth;
  Com_Printf(25, "[NET] Server bandwidth limit set to %.3fkbps\n", (float)((float)integer * 0.0009765625));
  if ( (_BYTE)SvGameGlobals::ms_allocatedType != HALF_HALF )
  {
    LODWORD(v26) = (unsigned __int8)SvGameGlobals::ms_allocatedType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_game_globals_mp.h", 146, ASSERT_TYPE_ASSERT, "(ms_allocatedType == ALLOCATION_TYPE)", "%s\n\tTrying to access server globals, but the server isn't running or its game mode is wrong (ms_allocatedType=%d)", "ms_allocatedType == ALLOCATION_TYPE", v26) )
      __debugbreak();
  }
  SvGameGlobalsCommon = SvGameGlobals::GetSvGameGlobalsCommon();
  SvBandwidthLimiter::Init((SvBandwidthLimiter *)&SvGameGlobalsCommon[1].emptyConfigString, integer / 8, v22);
  SV_SnapshotProfileMP_Init();
  NET_ResetTelemetry();
}

/*
==============
SV_SnapshotMP_IsClientThrottled
==============
*/
char SV_SnapshotMP_IsClientThrottled(const SvClientMP *const client)
{
  int deltaMessage; 
  char v2; 
  int v4; 
  int m_throttleBackupCount; 
  __int64 v7; 
  int v8; 
  __int64 v9; 

  deltaMessage = client->deltaMessage;
  v2 = 0;
  if ( deltaMessage >= 0 )
  {
    v4 = client->netchan.outgoingSequence - deltaMessage;
    m_throttleBackupCount = g_svSnapshotData.m_throttleBackupCount;
    if ( g_svSnapshotData.m_throttleBackupCount <= 0 )
    {
      v8 = g_svSnapshotData.m_throttleBackupCount;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.h", 672, ASSERT_TYPE_ASSERT, "( g_svSnapshotData.m_throttleBackupCount ) > ( 0 )", "g_svSnapshotData.m_throttleBackupCount > 0\n\t%i, %i", v8, 0i64) )
        __debugbreak();
      m_throttleBackupCount = g_svSnapshotData.m_throttleBackupCount;
    }
    if ( m_throttleBackupCount > g_svSnapshotData.m_packetBackupCount )
    {
      LODWORD(v9) = g_svSnapshotData.m_packetBackupCount;
      LODWORD(v7) = m_throttleBackupCount;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.h", 673, ASSERT_TYPE_ASSERT, "( g_svSnapshotData.m_throttleBackupCount ) <= ( g_svSnapshotData.m_packetBackupCount )", "g_svSnapshotData.m_throttleBackupCount <= g_svSnapshotData.m_packetBackupCount\n\t%i, %i", v7, v9) )
        __debugbreak();
      m_throttleBackupCount = g_svSnapshotData.m_throttleBackupCount;
    }
    if ( v4 > m_throttleBackupCount )
      return 1;
  }
  if ( !client->hasAckedBaselineData )
    return g_svSnapshotData.throttleNoBaseline;
  return v2;
}

/*
==============
SV_SnapshotMP_IsServerMessageValidForEntity
==============
*/
char SV_SnapshotMP_IsServerMessageValidForEntity(SnapshotInfo *const snapInfo, const entityState_t *const oldEntity, const entityState_t *const newEntity)
{
  NetFieldLoD OldEntityLoD; 
  NetFieldLoD NewEntityLoD; 
  NetFieldLoD v8; 
  __int64 v10; 
  __int64 v11; 

  if ( !snapInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 6139, ASSERT_TYPE_ASSERT, "(snapInfo != nullptr)", (const char *)&queryFormat, "snapInfo != nullptr") )
    __debugbreak();
  if ( !newEntity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 6140, ASSERT_TYPE_ASSERT, "(newEntity != nullptr)", (const char *)&queryFormat, "newEntity != nullptr") )
    __debugbreak();
  if ( !snapInfo->sendNetfieldLoDBit || !oldEntity )
    return 1;
  OldEntityLoD = SV_SnapshotMP_GetOldEntityLoD(snapInfo, newEntity->number);
  NewEntityLoD = SV_SnapshotMP_GetNewEntityLoD(snapInfo, newEntity->number);
  v8 = NewEntityLoD;
  if ( snapInfo->archived )
  {
    if ( NewEntityLoD == NetFieldLoD_High && OldEntityLoD == NetFieldLoD_High )
      return OldEntityLoD != NetFieldLoD_Low || v8 != NetFieldLoD_High;
    LODWORD(v10) = newEntity->number;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 6165, ASSERT_TYPE_ASSERT, "( !snapInfo->archived || ((newLoD == NetFieldLoD_High) && (oldLoD == NetFieldLoD_High)) )", "Num %d Type %d", v10, newEntity->eType) )
      __debugbreak();
  }
  if ( v8 != NetFieldLoD_High )
  {
    if ( GameModeFlagValues::ms_mpValue != ACTIVE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_gamemode_flags.h", 190, ASSERT_TYPE_ASSERT, "(IsFlagActive( index ))", "%s\n\tThis function must be used in a MP-only context", "IsFlagActive( index )") )
      __debugbreak();
    if ( GameModeFlagContainer<enum EntityStateFlagsCommon,enum EntityStateFlagsSP,enum EntityStateFlagsMP,32>::TestFlagInternal(&newEntity->lerp.eFlags, ACTIVE, 0x1Eu) )
    {
      LODWORD(v11) = newEntity->eType;
      LODWORD(v10) = newEntity->number;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 6168, ASSERT_TYPE_ASSERT, "( (newLoD == NetFieldLoD_High) || !newEntity->lerp.eFlags.TestFlagStrict( EntityStateFlagsMP::NEVERCHANGES ) )", "Num %d Type %d", v10, v11) )
        __debugbreak();
    }
  }
  return OldEntityLoD != NetFieldLoD_Low || v8 != NetFieldLoD_High;
}

/*
==============
SV_SnapshotMP_LoadState
==============
*/
void SV_SnapshotMP_LoadState(MemoryFile *memFile)
{
  int *m_numBufferEntries; 
  __int64 v3; 
  __int64 v4; 
  __int64 *m_nextBufferIndex; 
  int *v6; 
  __int64 *v7; 
  int i; 
  __int64 p; 
  __int64 v10; 

  if ( !memFile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 2177, ASSERT_TYPE_ASSERT, "( memFile )", (const char *)&queryFormat, "memFile") )
    __debugbreak();
  MemFile_ReadData(memFile, 0x28ui64, g_svSnapshotData.snapBufferSizes);
  MemFile_ReadData(memFile, 4ui64, &p);
  g_svSnapshotData.m_packetBackupCount = p;
  MemFile_ReadData(memFile, 4ui64, &p);
  g_svSnapshotData.m_throttleBackupCount = p;
  MemFile_ReadData(memFile, 1ui64, &p);
  g_svSnapshotData.throttleNoBaseline = p;
  MemFile_ReadData(memFile, 4ui64, &p);
  g_svSnapshotData.snapshotDelayNoDelta = p;
  MemFile_ReadData(memFile, 4ui64, &p);
  g_svSnapshotData.m_packetTransientStorageInterval = p;
  MemFile_ReadData(memFile, 4ui64, &p);
  g_svSnapshotData.m_localClientSnapshotDelay = p;
  MemFile_ReadData(memFile, 4ui64, &p);
  g_svSnapshotData.m_remoteClientSendDelay = p;
  MemFile_ReadData(memFile, 4ui64, &p);
  g_svSnapshotData.maxSnapshotEntities = p;
  MemFile_ReadData(memFile, 4ui64, &p);
  g_svSnapshotData.maxSnapshotEntitiesPerClient = p;
  MemFile_ReadData(memFile, 4ui64, &p);
  g_svSnapshotData.maxNoDeltaEntities = p;
  MemFile_ReadData(memFile, 4ui64, &p);
  g_svSnapshotData.clientMaskSize = p;
  MemFile_ReadData(memFile, 4ui64, &p);
  g_svSnapshotData.scriptableSnapshots.archiveScratchSize = p;
  MemFile_ReadData(memFile, 4ui64, &p);
  g_svSnapshotData.archive.nextArchivedSnapshotFrames = p;
  MemFile_ReadData(memFile, 4ui64, &p);
  g_svSnapshotData.archive.nextArchivedSnapshotBuffer = p;
  MemFile_ReadData(memFile, 4ui64, &p);
  g_svSnapshotData.archivePOTG.nextArchivedSnapshotFrames = p;
  MemFile_ReadData(memFile, 4ui64, &p);
  g_svSnapshotData.archivePOTG.nextArchivedSnapshotBuffer = p;
  MemFile_ReadData(memFile, 4ui64, &p);
  g_svSnapshotData.archive.archivedTransformValidSize = p;
  MemFile_ReadData(memFile, 4ui64, &p);
  g_svSnapshotData.archive.archivedTransformOriginSize = p;
  MemFile_ReadData(memFile, 4ui64, &p);
  g_svSnapshotData.archive.archivedTransformAnglesSize = p;
  MemFile_ReadData(memFile, 4ui64, &p);
  g_svSnapshotData.archivePOTG.archivedTransformValidSize = p;
  MemFile_ReadData(memFile, 4ui64, &p);
  g_svSnapshotData.archivePOTG.archivedTransformOriginSize = p;
  MemFile_ReadData(memFile, 4ui64, &p);
  g_svSnapshotData.archivePOTG.archivedTransformAnglesSize = p;
  MemFile_ReadData(memFile, 4ui64, &p);
  g_svSnapshotData.nextCachedSnapshotEntities = p;
  MemFile_ReadData(memFile, 4ui64, &p);
  g_svSnapshotData.numCachedSnapshotPlayerStatesRead = p;
  MemFile_ReadData(memFile, 4ui64, &p);
  g_svSnapshotData.numCachedSnapshotPlayerStatesWrite = p;
  MemFile_ReadData(memFile, 4ui64, &p);
  g_svSnapshotData.numCachedSnapshotClientStates = p;
  MemFile_ReadData(memFile, 4ui64, &p);
  g_svSnapshotData.nextCachedSnapshotClientStates = p;
  MemFile_ReadData(memFile, 4ui64, &p);
  g_svSnapshotData.numCachedSnapshotEntityLoD = p;
  MemFile_ReadData(memFile, 4ui64, &p);
  g_svSnapshotData.nextCachedSnapshotEntityLoD = p;
  MemFile_ReadData(memFile, 4ui64, &p);
  g_svSnapshotData.nextCachedSnapshotWorldStateFrames = p;
  MemFile_ReadData(memFile, 4ui64, &p);
  g_svSnapshotData.nextCachedSnapshotWeaponMapFrames = p;
  MemFile_ReadData(memFile, 4ui64, &p);
  g_svSnapshotData.numCachedSnapshotAgents = p;
  MemFile_ReadData(memFile, 4ui64, &p);
  g_svSnapshotData.nextCachedSnapshotAgents = p;
  MemFile_ReadData(memFile, 4ui64, &p);
  g_svSnapshotData.maxNoDeltaClientWeaponMaps = p;
  MemFile_ReadData(memFile, 4ui64, &p);
  g_svSnapshotData.numCachedSnapshotWeapons = p;
  MemFile_ReadData(memFile, 4ui64, &p);
  g_svSnapshotData.nextCachedSnapshotWeapon = p;
  MemFile_ReadData(memFile, 4ui64, &p);
  g_svSnapshotData.scriptableSnapshots.cachedInstCount = p;
  MemFile_ReadData(memFile, 8ui64, &p);
  g_svSnapshotData.scriptableSnapshots.cachedInstNextIndex = p;
  MemFile_ReadData(memFile, 4ui64, &p);
  g_svSnapshotData.scriptableSnapshots.cachedPartCount = p;
  MemFile_ReadData(memFile, 8ui64, &p);
  g_svSnapshotData.scriptableSnapshots.cachedPartNextIndex = p;
  MemFile_ReadData(memFile, 4ui64, &p);
  g_svSnapshotData.numCachedSnapshotUmbraGateStates = p;
  MemFile_ReadData(memFile, 4ui64, &p);
  g_svSnapshotData.nextCachedSnapshotUmbraGateStatesIndex = p;
  MemFile_ReadData(memFile, 4ui64, &p);
  g_svSnapshotData.maxNoDeltaPlayerStates = p;
  MemFile_ReadData(memFile, 4ui64, &p);
  g_svSnapshotData.scriptedCameraCount = p;
  MemFile_ReadData(memFile, 4ui64, &p);
  g_svSnapshotData.numClientMessages = p;
  MemFile_ReadData(memFile, 4ui64, &p);
  g_svSnapshotData.firstClientSendIndex = p;
  MemFile_ReadData(memFile, 4ui64, &p);
  m_numBufferEntries = g_svSnapshotData.fullBuffers.m_numBufferEntries;
  v3 = 10i64;
  g_svSnapshotData.nextClientRebalance = p;
  v4 = 10i64;
  m_nextBufferIndex = g_svSnapshotData.fullBuffers.m_nextBufferIndex;
  do
  {
    MemFile_ReadData(memFile, 8ui64, &v10);
    *m_nextBufferIndex = v10;
    MemFile_ReadData(memFile, 4ui64, &p);
    ++m_nextBufferIndex;
    *m_numBufferEntries++ = p;
    --v4;
  }
  while ( v4 );
  v6 = g_svSnapshotData.transientBuffers.m_numBufferEntries;
  v7 = g_svSnapshotData.transientBuffers.m_nextBufferIndex;
  do
  {
    MemFile_ReadData(memFile, 8ui64, &v10);
    *v7 = v10;
    MemFile_ReadData(memFile, 4ui64, &p);
    ++v7;
    *v6++ = p;
    --v3;
  }
  while ( v3 );
  if ( !g_svSnapshotData.noDeltaPlayerStates && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 2254, ASSERT_TYPE_ASSERT, "(g_svSnapshotData.noDeltaPlayerStates != nullptr)", (const char *)&queryFormat, "g_svSnapshotData.noDeltaPlayerStates != nullptr") )
    __debugbreak();
  MemFile_ReadData(memFile, 21412i64 * g_svSnapshotData.maxNoDeltaPlayerStates, g_svSnapshotData.noDeltaPlayerStates);
  if ( !g_svSnapshotData.noDeltaWeapons && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 2258, ASSERT_TYPE_ASSERT, "(g_svSnapshotData.noDeltaWeapons != nullptr)", (const char *)&queryFormat, "g_svSnapshotData.noDeltaWeapons != nullptr") )
    __debugbreak();
  GSnapshotWeaponMap::ReadWeaponMap(g_svSnapshotData.noDeltaWeapons, memFile);
  if ( !g_svSnapshotData.noDeltaClientWeaponMaps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 2261, ASSERT_TYPE_ASSERT, "(g_svSnapshotData.noDeltaClientWeaponMaps != nullptr)", (const char *)&queryFormat, "g_svSnapshotData.noDeltaClientWeaponMaps != nullptr") )
    __debugbreak();
  for ( i = 0; i < g_svSnapshotData.maxNoDeltaClientWeaponMaps; ++i )
    GSnapshotWeaponMap::ReadWeaponMap(&g_svSnapshotData.noDeltaClientWeaponMaps[i], memFile);
  MemFile_ReadData(memFile, 0xC8ui64, g_svSnapshotData.hasNoDeltaPlayerData);
  MemFile_ReadData(memFile, 4ui64, &p);
  g_svSnapshotData.maxSnapBuildRequests = p;
}

/*
==============
SV_SnapshotMP_PrintForcedNoDelta
==============
*/
bool SV_SnapshotMP_PrintForcedNoDelta(const SvClientMP *client)
{
  int MpClientIndex; 
  bool result; 

  result = !SvPersistentGlobalsMP::GetPersistentGlobalsMP()->frontEndState[0] && (MpClientIndex = SV_Client_GetMpClientIndex(client), !SV_ClientMP_IsTestClient(MpClientIndex)) && Dvar_GetBool_Internal_DebugName(DVARBOOL_sv_snapshotDebugVerbose, "sv_snapshotDebugVerbose");
  return result;
}

/*
==============
SV_SnapshotMP_PrintServerEntityHeader
==============
*/
char *SV_SnapshotMP_PrintServerEntityHeader(const ServerEntityHeader *const header)
{
  unsigned int v1; 

  if ( !header )
    return (char *)&queryFormat.fmt + 3;
  v1 = header->m_flags[0];
  return j_va("{skipped: [%d|%d], removed: %d, isDelta[%d|%d], justUnlinked: %d, lastChangedField[%d|%d], totalBits[%d|%d]}", v1 & 1, (v1 >> 1) & 1, (v1 >> 4) & 1, (v1 >> 2) & 1, (v1 >> 3) & 1, (v1 >> 5) & 1, header->m_lastChangedField[0], header->m_lastChangedField[1], header->m_totalBits[0], header->m_totalBits[1]);
}

/*
==============
SV_SnapshotMP_RateLimitClient
==============
*/
void SV_SnapshotMP_RateLimitClient(SvClientMP *client, const int messageSize, const int serverTime, const bool isClientActive, const bool isClientThrottled)
{
  unsigned int MpClientIndex; 
  char v10; 
  bool IsLoopback; 
  int RemoteClientSendDelay; 
  const dvar_t *v13; 
  unsigned int v14; 
  int snapshotBackoffDelay; 
  int v16; 
  __int64 v17; 
  int v18; 
  int v19; 
  const dvar_t *v20; 
  int v21; 
  int integer; 
  const dvar_t *v23; 
  int v24; 
  char *fmt; 
  __int64 v26; 
  __int64 v27; 

  MpClientIndex = SV_Client_GetMpClientIndex(client);
  v10 = SvPersistentGlobalsMP::GetPersistentGlobalsMP()->frontEndState[0];
  IsLoopback = NetConnection::IsLoopback(&client->clientConnection);
  if ( v10 )
  {
    if ( !IsLoopback && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 5611, ASSERT_TYPE_ASSERT, "( client->clientConnection.IsLoopback() )", (const char *)&queryFormat, "client->clientConnection.IsLoopback()") )
      __debugbreak();
    client->nextSnapshotTime = serverTime;
  }
  else if ( IsLoopback )
  {
    if ( g_svSnapshotData.m_localClientSnapshotDelay <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 1848, ASSERT_TYPE_ASSERT, "( g_svSnapshotData.m_localClientSnapshotDelay > 0 )", (const char *)&queryFormat, "g_svSnapshotData.m_localClientSnapshotDelay > 0") )
      __debugbreak();
    client->nextSnapshotTime = serverTime + g_svSnapshotData.m_localClientSnapshotDelay;
  }
  else
  {
    if ( isClientActive )
    {
      RemoteClientSendDelay = SV_SnapshotMP_GetRemoteClientSendDelay();
    }
    else
    {
      v13 = DVARINT_sv_snapshot_delay_connecting;
      if ( !DVARINT_sv_snapshot_delay_connecting && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sv_snapshot_delay_connecting") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v13);
      RemoteClientSendDelay = v13->current.integer;
    }
    v14 = client->netchan.outgoingSequence - client->deltaMessage;
    if ( isClientActive && isClientThrottled )
    {
      snapshotBackoffDelay = client->snapshotBackoffDelay;
      if ( !snapshotBackoffDelay )
      {
        LODWORD(v27) = (unsigned __int8)client->state;
        LODWORD(v26) = client->netchan.outgoingSequence - client->deltaMessage;
        LODWORD(fmt) = RemoteClientSendDelay;
        Com_Printf(131087, "[Snapshot] Client %s (%d) entered throttle: delay=%dms, backup=%d, state=%d\n", client->name, MpClientIndex, fmt, v26, v27);
        snapshotBackoffDelay = RemoteClientSendDelay;
      }
      v16 = snapshotBackoffDelay + serverTime;
      LODWORD(v26) = MpClientIndex;
      client->nextSnapshotTime = snapshotBackoffDelay + serverTime;
      v17 = (unsigned int)(2 * snapshotBackoffDelay);
      LODWORD(fmt) = v16;
      if ( (int)v17 > 5000 )
        v17 = 5000i64;
      client->snapshotBackoffDelay = v17;
      SV_BandwidthProfile_RecordEvent(-1, "expBackoff:snapshotBackoffDelay %d,numPacketsBehind %d,nextSnapshotTime %d,clientNum %d", v17, v14, fmt, v26);
    }
    else
    {
      v18 = 0;
      if ( client->snapshotBackoffDelay > 0 )
      {
        LODWORD(v27) = (unsigned __int8)client->state;
        LODWORD(v26) = client->netchan.outgoingSequence - client->deltaMessage;
        LODWORD(fmt) = client->snapshotBackoffDelay;
        Com_Printf(131087, "[Snapshot] Client %s (%d) exited throttle: delay=%dms, backup=%d, state=%d\n", client->name, MpClientIndex, fmt, v26, v27);
        SV_BandwidthProfile_RecordEvent(-1, "endSnapshotBackoff:snapshotBackoffDelay %d,clientNum %d", (unsigned int)client->snapshotBackoffDelay, MpClientIndex);
        client->snapshotBackoffDelay = 0;
      }
      if ( !SvPersistentGlobalsMP::GetPersistentGlobalsMP()->frontEndState[0] && SV_Game_IsOnlineGame() && client->rate )
      {
        v20 = DCONST_DVARINT_sv_max_client_bandwidth;
        v21 = 1252;
        if ( messageSize < 1252 )
          v21 = messageSize;
        if ( !DCONST_DVARINT_sv_max_client_bandwidth && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sv_max_client_bandwidth") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v20);
        integer = v20->current.integer;
        v23 = DVARBOOL_sv_debugRate;
        if ( client->rate < integer )
          integer = client->rate;
        v19 = 1000 * (v21 + 48) / integer;
        if ( !DVARBOOL_sv_debugRate && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sv_debugRate") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v23);
        if ( v23->current.enabled && client->testClient == TC_NONE )
        {
          LODWORD(v26) = client->rate;
          Com_Printf(15, "[Snapshot] It would take %ims to send %i bytes to client %s (rate %i)\n", (unsigned int)v19, (unsigned int)messageSize, client->name, v26);
        }
      }
      else
      {
        v19 = 0;
      }
      v24 = RemoteClientSendDelay;
      if ( v19 > RemoteClientSendDelay )
        v24 = v19;
      client->rateMsec = v24;
      LOBYTE(v18) = v24 > RemoteClientSendDelay;
      client->nextSnapshotTime = serverTime + v24;
      client->rateDelayed = v18;
    }
  }
}

/*
==============
SV_SnapshotMP_RecordDemoMessage
==============
*/
void SV_SnapshotMP_RecordDemoMessage(SvClientMP *client, const ClientSnapshotInfo *snapshotInfo, unsigned __int8 *snapshotMsgBuf)
{
  int deltaMessage; 
  __m256i v7; 
  bool demoBaselineSent; 
  char *v9; 
  unsigned __int8 *v10; 
  unsigned int v11; 
  __int64 v12; 
  unsigned int v13; 
  __int64 v14; 
  unsigned __int64 v15; 
  __int64 v16; 
  unsigned int v17; 
  unsigned int v18; 
  unsigned int v19; 
  unsigned int v20; 
  unsigned int v21; 
  int v22; 
  __int64 v23; 
  unsigned int v24; 
  unsigned int v25; 
  unsigned int v26; 
  unsigned int v27; 
  unsigned int v28; 
  int v29; 
  __int64 v30; 
  __int64 v31; 
  ClientSnapshotInfo clientSnapInfo; 
  msg_t msg; 
  SvWriteSnapshotResult outResult; 

  if ( !client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 8307, ASSERT_TYPE_ASSERT, "( client )", (const char *)&queryFormat, "client") )
    __debugbreak();
  if ( !snapshotInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 8308, ASSERT_TYPE_ASSERT, "( snapshotInfo )", (const char *)&queryFormat, "snapshotInfo") )
    __debugbreak();
  if ( !snapshotMsgBuf && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 8309, ASSERT_TYPE_ASSERT, "( snapshotMsgBuf )", (const char *)&queryFormat, "snapshotMsgBuf") )
    __debugbreak();
  if ( client->demorecording )
  {
    if ( !client->demoWriteMessage && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 8316, ASSERT_TYPE_ASSERT, "( client->demoWriteMessage )", (const char *)&queryFormat, "client->demoWriteMessage") )
      __debugbreak();
    if ( client->hasAckedBaselineData )
    {
      if ( (deltaMessage = snapshotInfo->deltaMessage, deltaMessage > 0) && deltaMessage - client->demoFirstMessage <= 0 || !client->demoBaselineSent )
      {
        v7 = *(__m256i *)snapshotInfo->predictedData.vehicleOrigin.v;
        demoBaselineSent = client->demoBaselineSent;
        v9 = (char *)&client->__vftable + 2;
        v10 = (unsigned __int8 *)&client->__vftable + 2;
        *(__m256i *)&clientSnapInfo.client = *(__m256i *)&snapshotInfo->client;
        *(__m256i *)clientSnapInfo.predictedData.extrapData.packedBobCycle = *(__m256i *)snapshotInfo->predictedData.extrapData.packedBobCycle;
        *(__m256i *)clientSnapInfo.predictedData.vehicleOrigin.v = v7;
        *(_OWORD *)&clientSnapInfo.isCompressedSnap = *(_OWORD *)&snapshotInfo->isCompressedSnap;
        v11 = -1;
        clientSnapInfo.hasAckedBaseline = demoBaselineSent;
        v12 = 63248i64;
        clientSnapInfo.deltaMessage = -1;
        clientSnapInfo.isDemoBaseline = !demoBaselineSent;
        clientSnapInfo.serverMessageIndex = -1;
        clientSnapInfo.serverMessageSize = 0;
        v13 = -1;
        v14 = 63248i64;
        do
        {
          v15 = *(v10 - 2);
          v16 = *v10;
          v10 += 6;
          v17 = (v13 >> 8) ^ g_crc32Table[(unsigned __int8)v13 ^ v15];
          v18 = g_crc32Table[(unsigned __int8)v17 ^ (unsigned __int64)*(v10 - 7)];
          v19 = (((v17 >> 8) ^ v18) >> 8) ^ g_crc32Table[v16 ^ (unsigned __int8)(BYTE1(v17) ^ v18)];
          v20 = (v19 >> 8) ^ g_crc32Table[(unsigned __int8)v19 ^ (unsigned __int64)*(v10 - 5)];
          v21 = (v20 >> 8) ^ g_crc32Table[(unsigned __int8)v20 ^ (unsigned __int64)*(v10 - 4)];
          v13 = (v21 >> 8) ^ g_crc32Table[(unsigned __int8)v21 ^ (unsigned __int64)*(v10 - 3)];
          --v14;
        }
        while ( v14 );
        v22 = ~v13;
        SV_SnapshotMP_BeginClientSnapshot(&clientSnapInfo, &msg, snapshotMsgBuf);
        SV_SnapshotMP_WriteSnapshotToClient(&clientSnapInfo, 1, &msg, &outResult);
        SV_SnapshotMP_EndClientSnapshot(&clientSnapInfo, &msg, snapshotMsgBuf);
        SV_SnapshotMP_WriteDemoCompressedMessage(client, &msg);
        do
        {
          v23 = (unsigned __int8)*(v9 - 2);
          v9 += 6;
          v24 = (v11 >> 8) ^ g_crc32Table[v23 ^ (unsigned __int8)v11];
          v25 = (v24 >> 8) ^ g_crc32Table[(unsigned __int8)*(v9 - 7) ^ (unsigned __int64)(unsigned __int8)v24];
          v26 = (v25 >> 8) ^ g_crc32Table[(unsigned __int8)*(v9 - 6) ^ (unsigned __int64)(unsigned __int8)v25];
          v27 = (v26 >> 8) ^ g_crc32Table[(unsigned __int8)*(v9 - 5) ^ (unsigned __int64)(unsigned __int8)v26];
          v28 = (v27 >> 8) ^ g_crc32Table[(unsigned __int8)*(v9 - 4) ^ (unsigned __int64)(unsigned __int8)v27];
          v11 = (v28 >> 8) ^ g_crc32Table[(unsigned __int8)*(v9 - 3) ^ (unsigned __int64)(unsigned __int8)v28];
          --v12;
        }
        while ( v12 );
        v29 = ~v11;
        if ( v22 != v29 )
        {
          LODWORD(v30) = v22;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 8363, ASSERT_TYPE_ASSERT, "( startChecksum ) == ( finalChecksum )", "startChecksum == finalChecksum\n\t%i, %i", v30, v29) )
            __debugbreak();
        }
        if ( clientSnapInfo.isDemoBaseline )
        {
          client->demoFirstMessage = client->netchan.outgoingSequence + 1;
          if ( !BG_GameInterface_GameModeIsMP((GameModeType)(unsigned __int8)SvDemo::ms_allocatedType) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_demo_mp.h", 173, ASSERT_TYPE_ASSERT, "( BG_GameInterface_GameModeIsMP( ms_allocatedType ) )", (const char *)&queryFormat, "BG_GameInterface_GameModeIsMP( ms_allocatedType )") )
            __debugbreak();
          if ( client->demoFirstMessage <= SLODWORD(SvDemo::ms_gServerDemoSystem[909646].__vftable) )
          {
            LODWORD(v31) = SvDemoMP::GetDemoMP()->m_baselineFrame.assignedSequence;
            LODWORD(v30) = client->demoFirstMessage;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 8369, ASSERT_TYPE_ASSERT, "( client->demoFirstMessage ) > ( SvDemoMP::GetDemoMP()->m_baselineFrame.assignedSequence )", "client->demoFirstMessage > SvDemoMP::GetDemoMP()->m_baselineFrame.assignedSequence\n\t%i, %i", v30, v31) )
              __debugbreak();
          }
        }
        client->demoBaselineSent = 1;
        client->demoWriteMessage = 0;
      }
    }
  }
}

/*
==============
SV_SnapshotMP_ResetServerSnapshots
==============
*/
void SV_SnapshotMP_ResetServerSnapshots(void)
{
  signed int i; 
  SvClientMP *CommonClient; 

  memset_0(g_svSnapshotData.fullBuffers.m_nextBufferIndex, 0, sizeof(g_svSnapshotData.fullBuffers.m_nextBufferIndex));
  memset_0(g_svSnapshotData.transientBuffers.m_nextBufferIndex, 0, sizeof(g_svSnapshotData.transientBuffers.m_nextBufferIndex));
  memset_0(g_svSnapshotData.serverSnapshotTimes, 0, sizeof(g_svSnapshotData.serverSnapshotTimes));
  DebugWipe(&g_svSnapshotData, 0x2000ui64);
  for ( i = 0; i < (int)SvClient::ms_clientCount; ++i )
  {
    if ( SvClient::GetCommonClient(i)->state )
    {
      if ( (_BYTE)SvClient::ms_allocatedType != HALF_HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.h", 957, ASSERT_TYPE_ASSERT, "( ms_allocatedType == ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == ALLOCATION_TYPE") )
        __debugbreak();
      CommonClient = (SvClientMP *)SvClient::GetCommonClient(i);
      SvClientMP::ResetSnapshotFrames(CommonClient);
      ScriptableMsgWrite_ResetClientBuffers(i, 0);
    }
  }
}

/*
==============
SV_SnapshotMP_ResolveWeaponMap
==============
*/
void SV_SnapshotMP_ResolveWeaponMap(clientSnapshot_t *frame)
{
  __int64 v2; 
  int v3; 
  SvSnapshotFrameBuffers *StorageBuffer; 
  GSnapshotWeaponMap v5; 
  __int64 v6; 

  v6 = -2i64;
  GSnapshotWeaponMap::GSnapshotWeaponMap((GSnapshotWeaponMap *)((unsigned __int64)&v5 & 0xFFFFFFFFFFFFFFC0ui64), (WeaponMapEntry *)(((unsigned __int64)&v5 & 0xFFFFFFFFFFFFFFC0ui64) + 64));
  if ( !frame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 4238, ASSERT_TYPE_ASSERT, "( frame )", (const char *)&queryFormat, "frame") )
    __debugbreak();
  GSnapshotWeaponMap::CopyFromMap((GSnapshotWeaponMap *)((unsigned __int64)&v5 & 0xFFFFFFFFFFFFFFC0ui64), &frame->weaponMap);
  v2 = frame->serverEntries.m_first[8];
  if ( v2 == 0x7FFFFFFF )
  {
    GSnapshotWeaponMap::CopyFromMap(&frame->weaponMap, g_svSnapshotData.noDeltaWeapons);
  }
  else
  {
    v3 = frame->serverEntries.m_count[8];
    StorageBuffer = SvSnapshotEntries::GetStorageBuffer(&frame->serverEntries);
    if ( !StorageBuffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 4257, ASSERT_TYPE_ASSERT, "( frameBuffers )", (const char *)&queryFormat, "frameBuffers") )
      __debugbreak();
    GSnapshotWeaponMap::CopyFromBuffer(&frame->weaponMap, (const WeaponMapEntry *)StorageBuffer->m_bufferData[8], StorageBuffer->m_numBufferEntries[8], v2, v3);
  }
  BG_CopyPlayerWeapons(&frame->weaponMap, &frame->ps, (const BgWeaponMap *)((unsigned __int64)&v5 & 0xFFFFFFFFFFFFFFC0ui64), &frame->ps);
  GSnapshotWeaponMap::~GSnapshotWeaponMap((GSnapshotWeaponMap *)((unsigned __int64)&v5 & 0xFFFFFFFFFFFFFFC0ui64));
}

/*
==============
SV_SnapshotMP_SaveState
==============
*/
void SV_SnapshotMP_SaveState(MemoryFile *memFile)
{
  int v2; 
  int v3; 
  int nextArchivedSnapshotBuffer; 
  int v5; 
  int v6; 
  int v7; 
  unsigned int archivedTransformValidSize; 
  int v9; 
  unsigned int archivedTransformOriginSize; 
  int v11; 
  unsigned int archivedTransformAnglesSize; 
  int v13; 
  unsigned int v14; 
  int v15; 
  unsigned int v16; 
  int v17; 
  unsigned int v18; 
  __int64 v19; 
  int *m_numBufferEntries; 
  __int64 v21; 
  __int64 *m_nextBufferIndex; 
  int *v23; 
  __int64 *v24; 
  __int64 p; 

  MemFile_WriteData(memFile, 0x28ui64, g_svSnapshotData.snapBufferSizes);
  LODWORD(p) = g_svSnapshotData.m_packetBackupCount;
  MemFile_WriteData(memFile, 4ui64, &p);
  LODWORD(p) = g_svSnapshotData.m_throttleBackupCount;
  MemFile_WriteData(memFile, 4ui64, &p);
  LOBYTE(p) = g_svSnapshotData.throttleNoBaseline;
  MemFile_WriteData(memFile, 1ui64, &p);
  LODWORD(p) = g_svSnapshotData.snapshotDelayNoDelta;
  MemFile_WriteData(memFile, 4ui64, &p);
  LODWORD(p) = g_svSnapshotData.m_packetTransientStorageInterval;
  MemFile_WriteData(memFile, 4ui64, &p);
  LODWORD(p) = g_svSnapshotData.m_localClientSnapshotDelay;
  MemFile_WriteData(memFile, 4ui64, &p);
  LODWORD(p) = g_svSnapshotData.m_remoteClientSendDelay;
  MemFile_WriteData(memFile, 4ui64, &p);
  LODWORD(p) = g_svSnapshotData.maxSnapshotEntities;
  MemFile_WriteData(memFile, 4ui64, &p);
  LODWORD(p) = g_svSnapshotData.maxSnapshotEntitiesPerClient;
  MemFile_WriteData(memFile, 4ui64, &p);
  LODWORD(p) = g_svSnapshotData.maxNoDeltaEntities;
  MemFile_WriteData(memFile, 4ui64, &p);
  LODWORD(p) = g_svSnapshotData.clientMaskSize;
  MemFile_WriteData(memFile, 4ui64, &p);
  LODWORD(p) = g_svSnapshotData.scriptableSnapshots.archiveScratchSize;
  MemFile_WriteData(memFile, 4ui64, &p);
  LODWORD(p) = g_svSnapshotData.archive.nextArchivedSnapshotFrames;
  MemFile_WriteData(memFile, 4ui64, &p);
  v2 = SV_SnapshotMP_ArchiveEnabled();
  v3 = 0;
  nextArchivedSnapshotBuffer = 0;
  if ( v2 )
    nextArchivedSnapshotBuffer = g_svSnapshotData.archive.nextArchivedSnapshotBuffer;
  LODWORD(p) = nextArchivedSnapshotBuffer;
  MemFile_WriteData(memFile, 4ui64, &p);
  LODWORD(p) = g_svSnapshotData.archivePOTG.nextArchivedSnapshotFrames;
  MemFile_WriteData(memFile, 4ui64, &p);
  v5 = SV_SnapshotMP_ArchiveEnabled();
  v6 = 0;
  if ( v5 )
    v6 = g_svSnapshotData.archivePOTG.nextArchivedSnapshotBuffer;
  LODWORD(p) = v6;
  MemFile_WriteData(memFile, 4ui64, &p);
  v7 = SV_SnapshotMP_ArchiveEnabled();
  archivedTransformValidSize = 0;
  if ( v7 )
    archivedTransformValidSize = g_svSnapshotData.archive.archivedTransformValidSize;
  LODWORD(p) = archivedTransformValidSize;
  MemFile_WriteData(memFile, 4ui64, &p);
  v9 = SV_SnapshotMP_ArchiveEnabled();
  archivedTransformOriginSize = 0;
  if ( v9 )
    archivedTransformOriginSize = g_svSnapshotData.archive.archivedTransformOriginSize;
  LODWORD(p) = archivedTransformOriginSize;
  MemFile_WriteData(memFile, 4ui64, &p);
  v11 = SV_SnapshotMP_ArchiveEnabled();
  archivedTransformAnglesSize = 0;
  if ( v11 )
    archivedTransformAnglesSize = g_svSnapshotData.archive.archivedTransformAnglesSize;
  LODWORD(p) = archivedTransformAnglesSize;
  MemFile_WriteData(memFile, 4ui64, &p);
  v13 = SV_SnapshotMP_ArchiveEnabled();
  v14 = 0;
  if ( v13 )
    v14 = g_svSnapshotData.archivePOTG.archivedTransformValidSize;
  LODWORD(p) = v14;
  MemFile_WriteData(memFile, 4ui64, &p);
  v15 = SV_SnapshotMP_ArchiveEnabled();
  v16 = 0;
  if ( v15 )
    v16 = g_svSnapshotData.archivePOTG.archivedTransformOriginSize;
  LODWORD(p) = v16;
  MemFile_WriteData(memFile, 4ui64, &p);
  v17 = SV_SnapshotMP_ArchiveEnabled();
  v18 = 0;
  if ( v17 )
    v18 = g_svSnapshotData.archivePOTG.archivedTransformAnglesSize;
  LODWORD(p) = v18;
  MemFile_WriteData(memFile, 4ui64, &p);
  LODWORD(p) = g_svSnapshotData.nextCachedSnapshotEntities;
  MemFile_WriteData(memFile, 4ui64, &p);
  LODWORD(p) = g_svSnapshotData.numCachedSnapshotPlayerStatesRead;
  MemFile_WriteData(memFile, 4ui64, &p);
  LODWORD(p) = g_svSnapshotData.numCachedSnapshotPlayerStatesWrite;
  MemFile_WriteData(memFile, 4ui64, &p);
  LODWORD(p) = g_svSnapshotData.numCachedSnapshotClientStates;
  MemFile_WriteData(memFile, 4ui64, &p);
  LODWORD(p) = g_svSnapshotData.nextCachedSnapshotClientStates;
  MemFile_WriteData(memFile, 4ui64, &p);
  LODWORD(p) = g_svSnapshotData.numCachedSnapshotEntityLoD;
  MemFile_WriteData(memFile, 4ui64, &p);
  LODWORD(p) = g_svSnapshotData.nextCachedSnapshotEntityLoD;
  MemFile_WriteData(memFile, 4ui64, &p);
  LODWORD(p) = g_svSnapshotData.nextCachedSnapshotWorldStateFrames;
  MemFile_WriteData(memFile, 4ui64, &p);
  LODWORD(p) = g_svSnapshotData.nextCachedSnapshotWeaponMapFrames;
  MemFile_WriteData(memFile, 4ui64, &p);
  LODWORD(p) = g_svSnapshotData.numCachedSnapshotAgents;
  MemFile_WriteData(memFile, 4ui64, &p);
  LODWORD(p) = g_svSnapshotData.nextCachedSnapshotAgents;
  MemFile_WriteData(memFile, 4ui64, &p);
  LODWORD(p) = g_svSnapshotData.maxNoDeltaClientWeaponMaps;
  MemFile_WriteData(memFile, 4ui64, &p);
  LODWORD(p) = g_svSnapshotData.numCachedSnapshotWeapons;
  MemFile_WriteData(memFile, 4ui64, &p);
  LODWORD(p) = g_svSnapshotData.nextCachedSnapshotWeapon;
  MemFile_WriteData(memFile, 4ui64, &p);
  LODWORD(p) = g_svSnapshotData.scriptableSnapshots.cachedInstCount;
  MemFile_WriteData(memFile, 4ui64, &p);
  p = g_svSnapshotData.scriptableSnapshots.cachedInstNextIndex;
  MemFile_WriteData(memFile, 8ui64, &p);
  LODWORD(p) = g_svSnapshotData.scriptableSnapshots.cachedPartCount;
  MemFile_WriteData(memFile, 4ui64, &p);
  p = g_svSnapshotData.scriptableSnapshots.cachedPartNextIndex;
  MemFile_WriteData(memFile, 8ui64, &p);
  LODWORD(p) = g_svSnapshotData.numCachedSnapshotUmbraGateStates;
  MemFile_WriteData(memFile, 4ui64, &p);
  LODWORD(p) = g_svSnapshotData.nextCachedSnapshotUmbraGateStatesIndex;
  MemFile_WriteData(memFile, 4ui64, &p);
  LODWORD(p) = g_svSnapshotData.maxNoDeltaPlayerStates;
  MemFile_WriteData(memFile, 4ui64, &p);
  LODWORD(p) = g_svSnapshotData.scriptedCameraCount;
  MemFile_WriteData(memFile, 4ui64, &p);
  LODWORD(p) = g_svSnapshotData.numClientMessages;
  MemFile_WriteData(memFile, 4ui64, &p);
  LODWORD(p) = g_svSnapshotData.firstClientSendIndex;
  MemFile_WriteData(memFile, 4ui64, &p);
  LODWORD(p) = g_svSnapshotData.nextClientRebalance;
  MemFile_WriteData(memFile, 4ui64, &p);
  v19 = 10i64;
  m_numBufferEntries = g_svSnapshotData.fullBuffers.m_numBufferEntries;
  v21 = 10i64;
  m_nextBufferIndex = g_svSnapshotData.fullBuffers.m_nextBufferIndex;
  do
  {
    p = *m_nextBufferIndex;
    MemFile_WriteData(memFile, 8ui64, &p);
    LODWORD(p) = *m_numBufferEntries;
    MemFile_WriteData(memFile, 4ui64, &p);
    ++m_nextBufferIndex;
    ++m_numBufferEntries;
    --v21;
  }
  while ( v21 );
  v23 = g_svSnapshotData.transientBuffers.m_numBufferEntries;
  v24 = g_svSnapshotData.transientBuffers.m_nextBufferIndex;
  do
  {
    p = *v24;
    MemFile_WriteData(memFile, 8ui64, &p);
    LODWORD(p) = *v23;
    MemFile_WriteData(memFile, 4ui64, &p);
    ++v24;
    ++v23;
    --v19;
  }
  while ( v19 );
  if ( !g_svSnapshotData.noDeltaPlayerStates && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 2351, ASSERT_TYPE_ASSERT, "(g_svSnapshotData.noDeltaPlayerStates != nullptr)", (const char *)&queryFormat, "g_svSnapshotData.noDeltaPlayerStates != nullptr") )
    __debugbreak();
  MemFile_WriteData(memFile, 21412i64 * g_svSnapshotData.maxNoDeltaPlayerStates, g_svSnapshotData.noDeltaPlayerStates);
  if ( !g_svSnapshotData.noDeltaWeapons && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 2355, ASSERT_TYPE_ASSERT, "(g_svSnapshotData.noDeltaWeapons != nullptr)", (const char *)&queryFormat, "g_svSnapshotData.noDeltaWeapons != nullptr") )
    __debugbreak();
  GSnapshotWeaponMap::SaveWeaponMap(g_svSnapshotData.noDeltaWeapons, memFile);
  if ( !g_svSnapshotData.noDeltaClientWeaponMaps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 2358, ASSERT_TYPE_ASSERT, "(g_svSnapshotData.noDeltaClientWeaponMaps != nullptr)", (const char *)&queryFormat, "g_svSnapshotData.noDeltaClientWeaponMaps != nullptr") )
    __debugbreak();
  if ( g_svSnapshotData.maxNoDeltaClientWeaponMaps > 0 )
  {
    do
      GSnapshotWeaponMap::SaveWeaponMap(&g_svSnapshotData.noDeltaClientWeaponMaps[v3++], memFile);
    while ( v3 < g_svSnapshotData.maxNoDeltaClientWeaponMaps );
  }
  MemFile_WriteData(memFile, 0xC8ui64, g_svSnapshotData.hasNoDeltaPlayerData);
  LODWORD(p) = g_svSnapshotData.maxSnapBuildRequests;
  MemFile_WriteData(memFile, 4ui64, &p);
}

/*
==============
SV_SnapshotMP_SendClientMessages
==============
*/
void SV_SnapshotMP_SendClientMessages(void)
{
  signed int i; 
  SvClient *CommonClient; 
  SvGameGlobals *SvGameGlobalsCommon; 
  SvGameGlobals *v3; 
  signed int v4; 
  int v5; 
  int firstClientSendIndex; 
  SvGameGlobals *v7; 
  const dvar_t *v8; 
  unsigned int v9; 
  const dvar_t *v10; 
  int *serverSnapshotTimes; 
  ServerSnapshotDataMP *v12; 
  __int64 v13; 
  __int64 v14; 
  BuildServerSnapshotsCmd outCmdCurrent; 
  BuildServerSnapshotsCmd outCmdArchived; 
  bool outClientHasMessage[208]; 

  Profile_Begin(325);
  SV_Profile_BeginEvent(SVPROF_FINISH_SEND);
  SV_SnapWorkersMP_FinishSnapshotWorkers();
  SV_Profile_EndEvent(SVPROF_FINISH_SEND);
  SV_Profile_BeginEvent(SVPROF_FINISH_ARCHIVE_COPY);
  SV_SnapWorkersMP_FinishSnapshotArchiveAdd();
  SV_Profile_EndEvent(SVPROF_FINISH_ARCHIVE_COPY);
  Profile_Begin(410);
  SV_MainMP_CheckTimeouts();
  Profile_EndInternal(NULL);
  SV_SnapshotMP_UpdatePerformanceOverlay();
  for ( i = 0; i < (int)SvClient::ms_clientCount; ++i )
  {
    if ( SvClient::GetCommonClient(i)->state == CS_ACTIVE )
    {
      if ( (_BYTE)SvClient::ms_allocatedType != HALF_HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.h", 957, ASSERT_TYPE_ASSERT, "( ms_allocatedType == ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == ALLOCATION_TYPE") )
        __debugbreak();
      CommonClient = SvClient::GetCommonClient(i);
      if ( LODWORD(CommonClient[855].__vftable) || !LOBYTE(CommonClient[602].lastUsercmd.weapon.weaponIdx) )
        break;
      SV_SnapshotMP_SendPerformanceOverlayForClient((const SvClientMP *)CommonClient);
    }
  }
  if ( (_BYTE)SvGameGlobals::ms_allocatedType != HALF_HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_game_globals_mp.h", 146, ASSERT_TYPE_ASSERT, "(ms_allocatedType == ALLOCATION_TYPE)", "%s\n\tTrying to access server globals, but the server isn't running or its game mode is wrong (ms_allocatedType=%d)", "ms_allocatedType == ALLOCATION_TYPE", (unsigned __int8)SvGameGlobals::ms_allocatedType) )
    __debugbreak();
  SvGameGlobalsCommon = SvGameGlobals::GetSvGameGlobalsCommon();
  SvBandwidthLimiter::Frame((SvBandwidthLimiter *)&SvGameGlobalsCommon[1].emptyConfigString);
  SV_SnapshotMP_BalanceBandwidthLoad();
  if ( (_BYTE)SvGameGlobals::ms_allocatedType != HALF_HALF )
  {
    LODWORD(v14) = (unsigned __int8)SvGameGlobals::ms_allocatedType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_game_globals_mp.h", 146, ASSERT_TYPE_ASSERT, "(ms_allocatedType == ALLOCATION_TYPE)", "%s\n\tTrying to access server globals, but the server isn't running or its game mode is wrong (ms_allocatedType=%d)", "ms_allocatedType == ALLOCATION_TYPE", v14) )
      __debugbreak();
  }
  v3 = SvGameGlobals::GetSvGameGlobalsCommon();
  if ( !LOBYTE(v3[2].profile.wallClockTime) )
  {
    v4 = SvClient::ms_clientCount;
    v5 = 0;
    firstClientSendIndex = g_svSnapshotData.firstClientSendIndex;
    if ( (int)SvClient::ms_clientCount > 0 )
    {
      while ( 1 )
      {
        if ( (_BYTE)SvClient::ms_allocatedType != HALF_HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.h", 957, ASSERT_TYPE_ASSERT, "( ms_allocatedType == ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == ALLOCATION_TYPE") )
          __debugbreak();
        if ( ((SvClient::GetCommonClient((v5 + firstClientSendIndex + 1) % v4)->state - 1) & 0xFB) == 0 )
          break;
        if ( ++v5 >= v4 )
          goto LABEL_25;
      }
      g_svSnapshotData.firstClientSendIndex = (v5 + firstClientSendIndex + 1) % v4;
    }
  }
LABEL_25:
  LOBYTE(v3[2].profile.wallClockTime) = 0;
  if ( (_BYTE)SvGameGlobals::ms_allocatedType != HALF_HALF )
  {
    LODWORD(v14) = (unsigned __int8)SvGameGlobals::ms_allocatedType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_game_globals_mp.h", 146, ASSERT_TYPE_ASSERT, "(ms_allocatedType == ALLOCATION_TYPE)", "%s\n\tTrying to access server globals, but the server isn't running or its game mode is wrong (ms_allocatedType=%d)", "ms_allocatedType == ALLOCATION_TYPE", v14) )
      __debugbreak();
  }
  v7 = SvGameGlobals::GetSvGameGlobalsCommon();
  v7[94].profile.animCallsMin = 0;
  *(_DWORD *)&v7[97].m_mapname[32] = 0;
  if ( !GClientSystem::ms_gClientSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_client.h", 423, ASSERT_TYPE_ASSERT, "( ms_gClientSystem )", (const char *)&queryFormat, "ms_gClientSystem") )
    __debugbreak();
  GClientSystemMP::UpdatePrioritySnapDebugInfo((GClientSystemMP *)GClientSystem::ms_gClientSystem);
  if ( !SvPersistentGlobalsMP::GetPersistentGlobalsMP()->frontEndState[0] && Lobby_IsInRunningLobby() )
  {
    v8 = DVARINT_party_maxplayers;
    if ( !DVARINT_party_maxplayers && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "party_maxplayers") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v8);
    v9 = SvClient::ms_clientCount;
    if ( v8->current.integer != SvClient::ms_clientCount )
    {
      v10 = DVARINT_party_maxplayers;
      if ( !DVARINT_party_maxplayers && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "party_maxplayers") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v10);
      LODWORD(v14) = v10->current.integer;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 9012, ASSERT_TYPE_ASSERT, "(SvPersistentGlobalsMP::IsFrontEndServer() || !Lobby_IsInRunningLobby() || Dvar_GetInt_Internal_DebugName( DVARINT_party_maxplayers, \"party_maxplayers\" ) == SvClient::GetClientCount())", "%s\n\tDvar_GetInt( party_maxplayers ) != SvClient::GetClientCount(), %i != %i", "SvPersistentGlobalsMP::IsFrontEndServer() || !Lobby_IsInRunningLobby() || Dvar_GetInt( party_maxplayers ) == SvClient::GetClientCount()", v14, v9) )
        __debugbreak();
    }
  }
  serverSnapshotTimes = g_svSnapshotData.serverSnapshotTimes;
  v12 = &g_svSnapshotData;
  v13 = 64i64;
  do
  {
    if ( *serverSnapshotTimes && v12->snapshots[0].entries.m_storageType == TRANSIENT )
    {
      *serverSnapshotTimes = 0;
      DebugWipe(v12, 0x80ui64);
    }
    v12 = (ServerSnapshotDataMP *)((char *)v12 + 128);
    ++serverSnapshotTimes;
    --v13;
  }
  while ( v13 );
  SV_Profile_BeginEvent(SVPROF_SNAP_INIT_BUILD);
  Sys_ProfBeginNamedEvent(0xFF0F0F0F, "SVPROF_SNAP_INIT_BUILD");
  SV_SnapWorkersMP_InitSnapshotBuildWorkers(outClientHasMessage, &outCmdCurrent, &outCmdArchived);
  SV_Profile_EndEvent(SVPROF_SNAP_INIT_BUILD);
  Sys_ProfEndNamedEvent();
  SV_Profile_BeginEvent(SVPROF_SNAP_INIT_CLIENT);
  Sys_ProfBeginNamedEvent(0xFF0F0F0F, "SVPROF_SNAP_INIT_CLIENT");
  SV_SnapWorkersMP_StartBuildClientSnapshots(&outCmdCurrent, &outCmdArchived);
  SV_Profile_EndEvent(SVPROF_SNAP_INIT_CLIENT);
  Sys_ProfEndNamedEvent();
  if ( outCmdCurrent.snapBuildCount )
  {
    Sys_ProfBeginNamedEvent(0xFFFF00u, "Start Build Server Snapshots");
    SV_SnapWorkersMP_StartBuildCurrentServerSnapshots(&outCmdCurrent);
    Sys_ProfEndNamedEvent();
  }
  if ( SV_SnapshotMP_ArchiveEnabled() && SvStaticGlobals::ms_svStaticGlobals.state == SS_GAME )
  {
    Sys_ProfBeginNamedEvent(0xFFFFu, "Start Snapshot Archive");
    SV_SnapWorkersMP_StartSnapshotArchiveEncode();
    Sys_ProfEndNamedEvent();
  }
  if ( outCmdArchived.snapBuildCount )
  {
    Sys_ProfBeginNamedEvent(0xFFFF00u, "Start Build Archived Server Snapshots");
    SV_SnapWorkersMP_StartBuildArchivedServerSnapshots(&outCmdArchived);
    Sys_ProfEndNamedEvent();
  }
  if ( SV_SnapshotMP_ArchiveEnabled() && SvStaticGlobals::ms_svStaticGlobals.state == SS_GAME )
  {
    Sys_ProfBeginNamedEvent(0xFFFFu, "Start Snapshot Add");
    SV_SnapWorkersMP_StartSnapshotArchiveAdd();
    Sys_ProfEndNamedEvent();
  }
  SV_Profile_BeginEvent(SVPROF_SAVE_ANTILAG);
  Sys_ProfBeginNamedEvent(0xFF0F0F0F, "SVPROF_SAVE_ANTILAG");
  SV_SnapshotMP_ArchiveAntilag(outClientHasMessage);
  SV_Profile_EndEvent(SVPROF_SAVE_ANTILAG);
  Sys_ProfEndNamedEvent();
  SV_Profile_BeginEvent(SVPROF_FINISH_BUILD);
  SV_SnapWorkersMP_FinishBuildCurrentSnapshots();
  SV_Profile_EndEvent(SVPROF_FINISH_BUILD);
  SV_SnapshotMP_ValidateDebugCanary();
  SV_Profile_BeginEvent(SVPROF_FINISH_ARCHIVE_ENCODE);
  SV_SnapWorkersMP_FinishSnapshotArchiveEncode();
  SV_Profile_EndEvent(SVPROF_FINISH_ARCHIVE_ENCODE);
  Profile_EndInternal(NULL);
}

/*
==============
SV_SnapshotMP_SendMessageToClient
==============
*/
__int64 SV_SnapshotMP_SendMessageToClient(SvClientMP *client, const int serverTime, const int packetTime, const bool isClientActive, const bool isClientThrottled, msg_t *msg)
{
  unsigned int clientNum; 
  int v10; 
  int cursize; 
  bool IsLoopback; 
  int MaxFragmentLength; 
  bool v14; 
  unsigned int v15; 
  int MpClientIndex; 
  unsigned int v17; 
  SvClientFrameInfo *FrameInfoForSequence; 
  int v19; 
  int *outSize; 
  unsigned __int8 **outData; 
  int compressedSize; 
  int v24; 
  unsigned __int8 *svCompressedBuf[3]; 
  unsigned __int8 compressBuffer[148456]; 

  svCompressedBuf[1] = (unsigned __int8 *)-2i64;
  v24 = packetTime;
  Profile_Begin(380);
  clientNum = SV_Client_GetMpClientIndex(client);
  SV_WriteBitsCompress(isClientActive, msg, compressBuffer, 148440, &compressedSize, svCompressedBuf, clientNum);
  v10 = compressedSize;
  SV_SnapshotMP_WriteDemoMessage(client, svCompressedBuf[0], compressedSize);
  cursize = msg->cursize;
  IsLoopback = NetConnection::IsLoopback(&client->clientConnection);
  SV_TrackPacketCompression(!IsLoopback, clientNum, cursize, v10);
  MaxFragmentLength = NET_GetMaxFragmentLength(&client->netchan);
  v14 = v10 >= MaxFragmentLength;
  if ( v10 >= MaxFragmentLength && !SvPersistentGlobalsMP::GetPersistentGlobalsMP()->frontEndState[0] )
  {
    if ( client->testClient == TC_NONE )
    {
      v15 = NET_GetMaxFragmentLength(&client->netchan);
      LODWORD(outSize) = clientNum;
      Com_Printf(25, "[Snapshot] Message size %d over MTU %d for player %d %s\n", (unsigned int)v10, v15, outSize, client->name);
    }
    SV_TrackPacketFragmentation(msg->cursize, v10);
  }
  LODWORD(outData) = clientNum;
  LODWORD(outSize) = v14;
  SV_BandwidthProfile_RecordEvent(clientNum, "sendmsg:size %d,compressedSize %d,fragmented %d,clientNum %d", (unsigned int)msg->cursize, (unsigned int)v10, outSize, outData);
  MpClientIndex = SV_Client_GetMpClientIndex(client);
  if ( !SvPersistentGlobalsMP::GetPersistentGlobalsMP()->frontEndState[0] )
    SV_ClientMP_IsTestClient(MpClientIndex);
  v17 = SV_Client_GetMpClientIndex(client);
  FrameInfoForSequence = SvClientMP::GetFrameInfoForSequence(client, client->netchan.outgoingSequence);
  FrameInfoForSequence->ackedTime = -1;
  FrameInfoForSequence->sentSequence = client->netchan.outgoingSequence;
  FrameInfoForSequence->sentTime = v24;
  NetPingInfo::Clear(&FrameInfoForSequence->sentInfo);
  NetPing::Clear(&FrameInfoForSequence->ping);
  FrameInfoForSequence->sentKillcam = client->isInKillcam;
  FrameInfoForSequence->scriptableWriteIndex = ScriptableMsgWrite_GetChangeWriteIndex(v17);
  v19 = SV_Netchan_Transmit(client, svCompressedBuf[0], v10, &FrameInfoForSequence->sentInfo);
  if ( v19 > 0 )
  {
    client->lastSnapshotSentTime = serverTime;
    if ( FrameInfoForSequence->snapshotSequence > 0 )
    {
      if ( FrameInfoForSequence->snapshotClientStorageType == FULL )
        client->lastFullSnapshotSentTime = serverTime;
      if ( FrameInfoForSequence->snapshotBlindDelta )
        client->lastBlindSnapshotSentTime = serverTime;
    }
  }
  SV_SnapshotMP_RateLimitClient(client, v10, serverTime, isClientActive, isClientThrottled);
  Profile_EndInternal(NULL);
  return (unsigned int)v19;
}

/*
==============
SV_SnapshotMP_SendPerformanceOverlayForClient
==============
*/
void SV_SnapshotMP_SendPerformanceOverlayForClient(const SvClientMP *cl)
{
  NetConnection *p_clientConnection; 
  bool IsLoopback; 
  int v4; 
  SvPersistentGlobalsMP *PersistentGlobalsMP; 
  int v6; 
  unsigned __int8 *snapshotBufferUsagePrecent; 
  bool v8; 
  __int64 v9; 
  __int64 v10; 
  statmonitor_s *array; 
  msg_t buf; 
  int count[4]; 
  unsigned __int8 data[128]; 

  if ( !cl && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 8610, ASSERT_TYPE_ASSERT, "( cl )", (const char *)&queryFormat, "cl") )
    __debugbreak();
  p_clientConnection = &cl->clientConnection;
  IsLoopback = NetConnection::IsLoopback(&cl->clientConnection);
  v4 = Sys_Milliseconds();
  StatMon_GetStatsArray((const statmonitor_s **)&array, count);
  MSG_Init(&buf, data, 128);
  MSG_WriteString(&buf, "perfoverlay");
  if ( IsLoopback || array[5].endtime < v4 )
  {
    MSG_WriteBit0(&buf);
    if ( IsLoopback )
      goto LABEL_10;
  }
  else
  {
    MSG_WriteBit1(&buf);
    MSG_WriteLong(&buf, array[5].value);
  }
  if ( array[6].endtime >= v4 )
  {
    MSG_WriteBit1(&buf);
    MSG_WriteLong(&buf, array[6].value);
    goto LABEL_11;
  }
LABEL_10:
  MSG_WriteBit0(&buf);
  if ( IsLoopback )
    goto LABEL_13;
LABEL_11:
  if ( array[4].endtime < v4 )
  {
LABEL_13:
    MSG_WriteBit0(&buf);
    if ( IsLoopback )
      goto LABEL_16;
    goto LABEL_14;
  }
  MSG_WriteBit1(&buf);
  MSG_WriteLong(&buf, array[4].value);
LABEL_14:
  if ( array[40].endtime >= v4 )
  {
    MSG_WriteBit1(&buf);
    goto LABEL_17;
  }
LABEL_16:
  MSG_WriteBit0(&buf);
  if ( IsLoopback )
    goto LABEL_19;
LABEL_17:
  if ( array[41].endtime < v4 )
  {
LABEL_19:
    MSG_WriteBit0(&buf);
    if ( IsLoopback )
      goto LABEL_22;
    goto LABEL_20;
  }
  MSG_WriteBit1(&buf);
  MSG_WriteLong(&buf, array[41].value);
LABEL_20:
  if ( array[42].endtime >= v4 )
  {
    MSG_WriteBit1(&buf);
    MSG_WriteLong(&buf, array[42].value);
    goto LABEL_23;
  }
LABEL_22:
  MSG_WriteBit0(&buf);
  if ( IsLoopback )
    goto LABEL_25;
LABEL_23:
  if ( array[43].endtime < v4 )
  {
LABEL_25:
    MSG_WriteBit0(&buf);
    if ( IsLoopback )
      goto LABEL_28;
    goto LABEL_26;
  }
  MSG_WriteBit1(&buf);
  MSG_WriteLong(&buf, array[43].value);
LABEL_26:
  if ( array[16].endtime >= v4 )
  {
    MSG_WriteBit1(&buf);
    MSG_WriteLong(&buf, array[16].value);
    goto LABEL_29;
  }
LABEL_28:
  MSG_WriteBit0(&buf);
  if ( IsLoopback )
    goto LABEL_31;
LABEL_29:
  if ( array[17].endtime < v4 )
  {
LABEL_31:
    MSG_WriteBit0(&buf);
    if ( IsLoopback )
      goto LABEL_34;
    goto LABEL_32;
  }
  MSG_WriteBit1(&buf);
  MSG_WriteLong(&buf, array[17].value);
LABEL_32:
  if ( array[19].endtime >= v4 )
  {
    MSG_WriteBit1(&buf);
    MSG_WriteLong(&buf, array[19].value);
    goto LABEL_35;
  }
LABEL_34:
  MSG_WriteBit0(&buf);
  if ( IsLoopback )
    goto LABEL_37;
LABEL_35:
  if ( array[21].endtime < v4 )
  {
LABEL_37:
    MSG_WriteBit0(&buf);
    if ( IsLoopback )
      goto LABEL_40;
    goto LABEL_38;
  }
  MSG_WriteBit1(&buf);
  MSG_WriteLong(&buf, array[21].value);
LABEL_38:
  if ( array[29].endtime >= v4 )
  {
    MSG_WriteBit1(&buf);
    MSG_WriteLong(&buf, array[29].value);
    goto LABEL_41;
  }
LABEL_40:
  MSG_WriteBit0(&buf);
  if ( IsLoopback )
  {
LABEL_43:
    MSG_WriteBit0(&buf);
    goto LABEL_44;
  }
LABEL_41:
  if ( array[31].endtime < v4 )
    goto LABEL_43;
  MSG_WriteBit1(&buf);
  MSG_WriteLong(&buf, array[31].value);
LABEL_44:
  PersistentGlobalsMP = SvPersistentGlobalsMP::GetPersistentGlobalsMP();
  MSG_WriteByte(&buf, PersistentGlobalsMP->dataSentLastSec / 1024);
  MSG_WriteBits(&buf, g_svSnapshotData.activeSnapEntities, 0xBu);
  MSG_WriteBits(&buf, g_svSnapshotData.activeSnapFullEntities, 0xBu);
  MSG_WriteBits(&buf, g_svSnapshotData.archivedEntityCount, 0xBu);
  MSG_WriteLong(&buf, g_svSnapshotData.archiveOldestTime);
  MSG_WriteByte(&buf, g_svSnapshotData.snapshotFullPercent);
  v6 = 0;
  snapshotBufferUsagePrecent = g_svSnapshotData.snapshotBufferUsagePrecent;
  v8 = 1;
  do
  {
    if ( !v8 )
    {
      LODWORD(v10) = 10;
      LODWORD(v9) = v6;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 8761, ASSERT_TYPE_ASSERT, "(unsigned)( bufferTypeIndex ) < (unsigned)( ( sizeof( *array_counter( g_svSnapshotData.snapshotBufferUsagePrecent ) ) + 0 ) )", "bufferTypeIndex doesn't index ARRAY_COUNT( g_svSnapshotData.snapshotBufferUsagePrecent )\n\t%i not in [0, %i)", v9, v10) )
        __debugbreak();
    }
    MSG_WriteByte(&buf, *snapshotBufferUsagePrecent);
    ++v6;
    ++snapshotBufferUsagePrecent;
    v8 = (unsigned int)v6 < 0xA;
  }
  while ( v6 < 10 );
  MSG_WriteByte(&buf, g_svSnapshotData.hudOutlineCount);
  if ( buf.overflowed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 8769, ASSERT_TYPE_ASSERT, "( !MSG_IsOverflowed( &msg ) )", (const char *)&queryFormat, "!MSG_IsOverflowed( &msg )") )
    __debugbreak();
  NetConnection::SendUnreliable(p_clientConnection, buf.data, buf.cursize);
}

/*
==============
SV_SnapshotMP_SetArchivedPlayerTransform
==============
*/
char SV_SnapshotMP_SetArchivedPlayerTransform(const int clientNum, const int archiveFrameNum, serverArchive_t *const archive, const vec3_t *origin)
{
  int v8; 
  __int64 v9; 
  __int64 v10; 
  vec3_t *archivedTransformOriginBuffer; 
  __int64 v12; 
  base_vec3_t<short> *archivedTransformAnglesBuffer; 
  __int64 v18; 
  unsigned int *v19; 
  __int64 v21; 
  __int64 v22; 

  if ( clientNum >= SvClient::ms_clientCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 9198, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( SvClient::GetClientCount() )", "clientNum doesn't index SvClient::GetClientCount()\n\t%i not in [0, %i)", clientNum, SvClient::ms_clientCount) )
    __debugbreak();
  if ( !archive && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 9199, ASSERT_TYPE_ASSERT, "( archive != nullptr )", (const char *)&queryFormat, "archive != nullptr") )
    __debugbreak();
  if ( !archive->archivedTransformValidBuffer )
    return 0;
  v8 = archiveFrameNum % g_svSnapshotData.archive.archivedFrameCount;
  if ( !SV_SnapshotMP_FrameIsStillInArchivedSnapshotBuffer(&g_svSnapshotData.archive, g_svSnapshotData.archive.archivedSnapshotFrames[archiveFrameNum % g_svSnapshotData.archive.archivedFrameCount].start) )
    return 0;
  v9 = clientNum + v8 * SvClient::ms_clientCount;
  if ( archive->archivedTransformOriginBuffer )
  {
    if ( (unsigned int)v9 >= archive->archivedTransformOriginSize / 0xC )
    {
      LODWORD(v22) = archive->archivedTransformOriginSize / 0xC;
      LODWORD(v21) = clientNum + v8 * SvClient::ms_clientCount;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 9214, ASSERT_TYPE_ASSERT, "(unsigned)( transformIndex ) < (unsigned)( archive->archivedTransformOriginSize / sizeof( vec3_t ) )", "transformIndex doesn't index archive->archivedTransformOriginSize / sizeof( vec3_t )\n\t%i not in [0, %i)", v21, v22) )
        __debugbreak();
    }
    v10 = v9;
    archivedTransformOriginBuffer = archive->archivedTransformOriginBuffer;
    archivedTransformOriginBuffer[v10].v[0] = origin->v[0];
    archivedTransformOriginBuffer[v10].v[1] = origin->v[1];
    archivedTransformOriginBuffer[v10].v[2] = origin->v[2];
  }
  if ( archive->archivedTransformAnglesBuffer )
  {
    if ( (unsigned int)v9 >= archive->archivedTransformAnglesSize / 6 )
    {
      LODWORD(v22) = archive->archivedTransformAnglesSize / 6;
      LODWORD(v21) = v9;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 9222, ASSERT_TYPE_ASSERT, "(unsigned)( transformIndex ) < (unsigned)( archive->archivedTransformAnglesSize / sizeof( svec3_t ) )", "transformIndex doesn't index archive->archivedTransformAnglesSize / sizeof( svec3_t )\n\t%i not in [0, %i)", v21, v22) )
        __debugbreak();
    }
    v12 = (unsigned int)v9;
    archivedTransformAnglesBuffer = archive->archivedTransformAnglesBuffer;
    _XMM6 = 0i64;
    __asm { vroundss xmm3, xmm6, xmm2, 1 }
    archivedTransformAnglesBuffer[v12].v[0] = (int)*(float *)&_XMM3;
    __asm { vroundss xmm1, xmm6, xmm3, 1 }
    archivedTransformAnglesBuffer[v12].v[1] = (int)*(float *)&_XMM1;
    __asm { vroundss xmm1, xmm6, xmm3, 1 }
    archivedTransformAnglesBuffer[v12].v[2] = (int)*(float *)&_XMM1;
  }
  v18 = (unsigned int)((clientNum >> 5) + v8 * ((int)(SvClient::ms_clientCount + 31) / 32));
  if ( (unsigned int)v18 >= archive->archivedTransformValidSize >> 2 )
  {
    LODWORD(v22) = archive->archivedTransformValidSize >> 2;
    LODWORD(v21) = (clientNum >> 5) + v8 * ((int)(SvClient::ms_clientCount + 31) / 32);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 9231, ASSERT_TYPE_ASSERT, "(unsigned)( transformValidIndex ) < (unsigned)( archive->archivedTransformValidSize / sizeof( volatile_int32 ) )", "transformValidIndex doesn't index archive->archivedTransformValidSize / sizeof( volatile_int32 )\n\t%i not in [0, %i)", v21, v22) )
      __debugbreak();
  }
  v19 = &archive->archivedTransformValidBuffer[v18];
  if ( ((unsigned __int8)v19 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 65, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", v19) )
    __debugbreak();
  _InterlockedOr((volatile signed __int32 *)v19, 0x80000000 >> (clientNum & 0x1F));
  return 1;
}

/*
==============
SV_SnapshotMP_ShouldGenerateSnapshotForClient
==============
*/
bool SV_SnapshotMP_ShouldGenerateSnapshotForClient(const SvClientMP *client)
{
  const dvar_t *v2; 

  if ( !client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 8262, ASSERT_TYPE_ASSERT, "(client)", (const char *)&queryFormat, "client") )
    __debugbreak();
  if ( client->testClient != TC_BOT )
    return 1;
  v2 = DVARBOOL_sv_sendSnapshotsToBots;
  if ( !DVARBOOL_sv_sendSnapshotsToBots && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sv_sendSnapshotsToBots") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  return v2->current.enabled;
}

/*
==============
SV_SnapshotMP_ShouldWriteBlindDelta
==============
*/
char SV_SnapshotMP_ShouldWriteBlindDelta(const SvClientMP *client, const int serverTime, const int deltaMessage, const bool hasAckedBaseline, const SvSnapshotStorageType clientFrameStorageType, int *outDeltaFrame)
{
  const dvar_t *v10; 
  int v11; 
  int updated; 

  if ( !client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 4167, ASSERT_TYPE_ASSERT, "( client )", (const char *)&queryFormat, "client") )
    __debugbreak();
  if ( !outDeltaFrame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 4168, ASSERT_TYPE_ASSERT, "( outDeltaFrame )", (const char *)&queryFormat, "outDeltaFrame") )
    __debugbreak();
  v10 = DVARBOOL_sv_snapshot_blindDeltaEnabled;
  if ( !DVARBOOL_sv_snapshot_blindDeltaEnabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sv_snapshot_blindDeltaEnabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v10);
  if ( !v10->current.enabled )
    return 0;
  if ( clientFrameStorageType != TRANSIENT )
    return 0;
  if ( client->state != CS_ACTIVE )
    return 0;
  if ( client->netchan.outgoingSequence <= 0 )
    return 0;
  if ( deltaMessage < 0 )
    return 0;
  if ( !hasAckedBaseline )
    return 0;
  if ( client->lastSnapshotSentTime == client->lastBlindSnapshotSentTime )
    return 0;
  if ( serverTime - client->lastSnapshotSentTime > Dvar_GetInt_Internal_DebugName(DVARINT_sv_snapshot_blindDeltaMaxTimeDelta, "sv_snapshot_blindDeltaMaxTimeDelta") )
    return 0;
  v11 = client->netchan.outgoingSequence - 1;
  if ( deltaMessage >= v11 )
    return 0;
  updated = SV_SnapshotMP_UpdateDeltaMessageSequence(client, v11, 1, 0);
  if ( deltaMessage >= updated )
    return 0;
  *outDeltaFrame = updated;
  return 1;
}

/*
==============
SV_SnapshotMP_Shutdown
==============
*/
void SV_SnapshotMP_Shutdown(void)
{
  memset_0(&g_svSnapshotData, 0, sizeof(g_svSnapshotData));
}

/*
==============
SV_SnapshotMP_ShutdownMemory
==============
*/

void __fastcall SV_SnapshotMP_ShutdownMemory(double _XMM0_8, double _XMM1_8)
{
  unsigned int i; 
  __int64 v5; 

  __asm
  {
    vpxor   xmm0, xmm0, xmm0
    vpxor   xmm1, xmm1, xmm1
  }
  g_svSnapshotData.archive.archivedSnapshotBuffer = NULL;
  g_svSnapshotData.archive.archivedSnapshotFrames = NULL;
  g_svSnapshotData.archive.archivedSnapshotPlayerStates = NULL;
  g_svSnapshotData.archivePOTG.archivedSnapshotBuffer = NULL;
  g_svSnapshotData.archivePOTG.archivedSnapshotFrames = NULL;
  g_svSnapshotData.archivePOTG.archivedSnapshotPlayerStates = NULL;
  *(_OWORD *)&g_svSnapshotData.archive.archivedTransformValidBuffer = _XMM0;
  g_svSnapshotData.archive.archivedTransformAnglesBuffer = NULL;
  *(_OWORD *)&g_svSnapshotData.archivePOTG.archivedTransformValidBuffer = _XMM1;
  g_svSnapshotData.archivePOTG.archivedTransformAnglesBuffer = NULL;
  g_svSnapshotData.scriptableSnapshots.archiveScratchBuffer = NULL;
  g_svSnapshotData.cachedSnapshotEntities = NULL;
  g_svSnapshotData.cachedSnapshotEntityClientMask = NULL;
  g_svSnapshotData.cachedSnapshotPlayerStatesRead[0] = NULL;
  g_svSnapshotData.cachedSnapshotPlayerStatesWrite[0] = NULL;
  g_svSnapshotData.cachedSnapshotPlayerStatesRead[1] = NULL;
  g_svSnapshotData.cachedSnapshotPlayerStatesWrite[1] = NULL;
  g_svSnapshotData.cachedSnapshotClientStates = NULL;
  g_svSnapshotData.cachedSnapshotAgents = NULL;
  g_svSnapshotData.cachedSnapshotWeapons = NULL;
  g_svSnapshotData.scriptableSnapshots.cachedInstances = NULL;
  g_svSnapshotData.scriptableSnapshots.cachedParts = NULL;
  g_svSnapshotData.noDeltaWeapons = NULL;
  g_svSnapshotData.noDeltaClientWeaponMaps = NULL;
  g_svSnapshotData.noDeltaEntities = NULL;
  g_svSnapshotData.noDeltaEntityClientMaskData = NULL;
  g_svSnapshotData.noDeltaPlayerStates = NULL;
  g_svSnapshotData.omnvars = NULL;
  g_svSnapshotData.mlgSpectatorClientInfo = NULL;
  *(_OWORD *)&g_svSnapshotData.noDeltaUmbraGateStates = _XMM0;
  g_svSnapshotData.clientMsgRequest = NULL;
  *(_OWORD *)&g_svSnapshotData.archivePlayerStateMsgData = _XMM1;
  g_svSnapshotData.weaponMapEncodeData.archiveMsg = NULL;
  *(_OWORD *)&g_svSnapshotData.weaponMapEncodeData.isDeltaEncoded = _XMM0;
  g_svSnapshotData.weaponMapEncodeData.archiveBufferSize = 0;
  g_svSnapshotData.worldStateEncodeData.archiveMsg = NULL;
  *(_OWORD *)&g_svSnapshotData.worldStateEncodeData.isDeltaEncoded = _XMM0;
  g_svSnapshotData.worldStateEncodeData.archiveBufferSize = 0;
  g_svSnapshotData.serverMessages = NULL;
  memset_0(&g_svSnapshotData.fullBuffers, 0, 0x50ui64);
  memset_0(&g_svSnapshotData.transientBuffers, 0, 0x50ui64);
  for ( i = 0; i < s_svSnapshotDataCanaries.numCanaries; s_svSnapshotDataCanaries.canaries[v5] = NULL )
    v5 = i++;
  s_svSnapshotDataCanaries.numCanaries = 0;
}

/*
==============
SV_SnapshotMP_TransmissionError
==============
*/
void SV_SnapshotMP_TransmissionError(SvClientMP *client, int sendError)
{
  const dvar_t *v4; 

  if ( !NetConnection::IsBot(&client->clientConnection) && sendError != -11 && sendError != -2 )
  {
    v4 = DVARBOOL_sv_transmission_error_enabled;
    if ( !DVARBOOL_sv_transmission_error_enabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sv_transmission_error_enabled") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v4);
    if ( v4->current.enabled )
      SV_ClientMP_DropClient(client, "EXE/TRANSMITERROR_SEND_FAILURE", 0);
  }
}

/*
==============
SV_SnapshotMP_UpdateDeltaMessageSequence
==============
*/
__int64 SV_SnapshotMP_UpdateDeltaMessageSequence(const SvClientMP *client, const int originalDeltaSequence, const bool isBlindDelta, const bool printErrors)
{
  int m_packetBackupCount; 
  int v9; 
  int v10; 
  int outgoingSequence; 
  unsigned int MpClientIndex; 
  unsigned int v13; 
  unsigned int v15; 
  char *fmt; 
  __int64 v17; 
  __int64 v18; 
  clientSnapshot_t *outSnapshot; 

  if ( !client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 4111, ASSERT_TYPE_ASSERT, "( client )", (const char *)&queryFormat, "client") )
    __debugbreak();
  m_packetBackupCount = g_svSnapshotData.m_packetBackupCount;
  if ( g_svSnapshotData.m_packetBackupCount <= 0 )
  {
    LODWORD(v17) = g_svSnapshotData.m_packetBackupCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.h", 665, ASSERT_TYPE_ASSERT, "( g_svSnapshotData.m_packetBackupCount ) > ( 0 )", "g_svSnapshotData.m_packetBackupCount > 0\n\t%i, %i", v17, 0i64) )
      __debugbreak();
    m_packetBackupCount = g_svSnapshotData.m_packetBackupCount;
  }
  v9 = m_packetBackupCount - 1;
  v10 = originalDeltaSequence;
  if ( originalDeltaSequence > 0 )
  {
    while ( 1 )
    {
      if ( (const SvClientMP *)((char *)client + 72 * (v10 & 0x3F)) == (const SvClientMP *)-372552i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 4121, ASSERT_TYPE_ASSERT, "( deltaMessageFrame != nullptr )", (const char *)&queryFormat, "deltaMessageFrame != nullptr") )
        __debugbreak();
      outgoingSequence = client->netchan.outgoingSequence;
      if ( outgoingSequence - v10 >= v9 )
        break;
      if ( (const SvClientMP *)((char *)client + 72 * (v10 & 0x3F)) == (const SvClientMP *)-372552i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 4083, ASSERT_TYPE_ASSERT, "( deltaMessageFrame )", (const char *)&queryFormat, "deltaMessageFrame") )
        __debugbreak();
      if ( client->m_frameInfo[v10 & 0x3F].snapshotClientStorageType == FULL && (client->m_frameInfo[v10 & 0x3F].ackedTime >= 0 || isBlindDelta && !client->m_frameInfo[v10 & 0x3F].snapshotBlindDelta) && SvClientMP::GetValidSnapshotForSentSequenceConst((SvClientMP *)client, v10, (const clientSnapshot_t **)&outSnapshot) && (!isBlindDelta || !outSnapshot->baselineSnap) )
      {
        if ( client->m_frameInfo[v10 & 0x3F].snapshotSequence != v10 )
        {
          LODWORD(v18) = v10;
          LODWORD(v17) = client->m_frameInfo[v10 & 0x3F].snapshotSequence;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 4140, ASSERT_TYPE_ASSERT, "( deltaMessageFrame->snapshotSequence ) == ( deltaMessageSequence )", "deltaMessageFrame->snapshotSequence == deltaMessageSequence\n\t%i, %i", v17, v18) )
            __debugbreak();
        }
        goto LABEL_31;
      }
      if ( --v10 <= 0 )
        goto LABEL_31;
    }
    if ( printErrors )
    {
      MpClientIndex = SV_Client_GetMpClientIndex(client);
      LODWORD(v18) = outgoingSequence;
      LODWORD(v17) = v9;
      LODWORD(fmt) = v10;
      Com_Printf(15, "[Snapshot] %s [clientNum %d]: Delta request from out of date packet - sequence %i is over the limit of %i (outgoing %i, originalDeltaSequence %i).\n", client->name, MpClientIndex, fmt, v17, v18, originalDeltaSequence);
    }
    v10 = 0;
LABEL_31:
    if ( originalDeltaSequence < v10 )
    {
      LODWORD(v18) = v10;
      LODWORD(v17) = originalDeltaSequence;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 4145, ASSERT_TYPE_ASSERT, "( originalDeltaSequence ) >= ( deltaMessageSequence )", "originalDeltaSequence >= deltaMessageSequence\n\t%i, %i", v17, v18) )
        __debugbreak();
    }
  }
  if ( printErrors && v10 != originalDeltaSequence )
  {
    if ( v10 <= 0 )
    {
      v13 = SV_Client_GetMpClientIndex(client);
      LODWORD(v17) = isBlindDelta;
      LODWORD(fmt) = originalDeltaSequence;
      Com_Printf(15, "[Snapshot] %s [clientNum %d]: Delta request from unusable packet %i, and we could not find any valid ones to delta from. isBlindDelta = %i\n", client->name, v13, fmt, v17);
      return (unsigned int)v10;
    }
    if ( originalDeltaSequence - v10 > g_svSnapshotData.m_packetTransientStorageInterval )
    {
      v15 = SV_Client_GetMpClientIndex(client);
      LODWORD(v18) = isBlindDelta;
      LODWORD(v17) = v10;
      LODWORD(fmt) = originalDeltaSequence;
      Com_Printf(15, "[Snapshot] %s [clientNum %d]: Delta request from unusable packet %i, and we found an older one %i we can use. isBlindDelta = %i\n", client->name, v15, fmt, v17, v18);
    }
  }
  return (unsigned int)v10;
}

/*
==============
SV_SnapshotMP_UpdateFrameDuration
==============
*/
void SV_SnapshotMP_UpdateFrameDuration(int frameDurationMs)
{
  if ( g_svSnapshotData.archive.archivedFrameDuration )
  {
    g_svSnapshotData.archive.archivedFrameDuration = frameDurationMs;
    g_svSnapshotData.archivePOTG.archivedFrameDuration = frameDurationMs;
  }
}

/*
==============
SV_SnapshotMP_UpdatePerformanceOverlay
==============
*/
void SV_SnapshotMP_UpdatePerformanceOverlay()
{
  int v0; 
  int v1; 
  float v2; 
  __int128 v3; 
  SvPersistentGlobalsMP *PersistentGlobalsMP; 
  SvGameGlobals *SvGameGlobalsCommon; 
  SvGameModeAppMP *ActiveServerApplicationMP; 
  int v7; 
  _DWORD *p_serverScriptTimeTotal; 
  __int64 v9; 
  int v10; 
  int v11; 
  int v12; 
  __int128 v13; 
  int v14; 
  float v15; 
  int animCallsMin; 
  float v17; 
  int v18; 
  int v19; 
  int v20; 
  const char *v21; 
  int v22; 
  volatile int *p_skelMemPos; 
  const dvar_t *v24; 
  float v25; 
  float v26; 
  float v27; 
  float v28; 
  int v29; 
  float v30; 
  char *fmt; 
  char *fmta; 
  __int64 v33; 
  __int64 v34; 
  __int64 v35; 
  int v36; 

  v0 = 0;
  v1 = 0;
  v2 = 0.0;
  v3 = 0i64;
  PersistentGlobalsMP = SvPersistentGlobalsMP::GetPersistentGlobalsMP();
  if ( (_BYTE)SvGameGlobals::ms_allocatedType != HALF_HALF )
  {
    v36 = (unsigned __int8)SvGameGlobals::ms_allocatedType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_game_globals_mp.h", 146, ASSERT_TYPE_ASSERT, "(ms_allocatedType == ALLOCATION_TYPE)", "%s\n\tTrying to access server globals, but the server isn't running or its game mode is wrong (ms_allocatedType=%d)", "ms_allocatedType == ALLOCATION_TYPE", v36) )
      __debugbreak();
  }
  SvGameGlobalsCommon = SvGameGlobals::GetSvGameGlobalsCommon();
  ActiveServerApplicationMP = SvGameModeAppMP::GetActiveServerApplicationMP();
  if ( !ActiveServerApplicationMP->m_frameDuration && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_gamemode_app.h", 162, ASSERT_TYPE_ASSERT, "(m_frameDuration > 0)", "%s\n\tFrame duration has not been initialized", "m_frameDuration > 0") )
    __debugbreak();
  v7 = 1000 / (signed int)ActiveServerApplicationMP->m_frameDuration;
  if ( v7 > 60 )
    v7 = 60;
  if ( v7 - 1 > 0 )
  {
    p_serverScriptTimeTotal = (_DWORD *)&SvGameGlobalsCommon[93].timeStats.serverScriptTimeTotal;
    v9 = (unsigned int)(v7 - 1);
    do
    {
      v10 = p_serverScriptTimeTotal[1];
      v0 += v10;
      *p_serverScriptTimeTotal = v10;
      v11 = p_serverScriptTimeTotal[61];
      v1 += v11;
      p_serverScriptTimeTotal[60] = v11;
      v12 = p_serverScriptTimeTotal[244];
      p_serverScriptTimeTotal[243] = v12;
      ++p_serverScriptTimeTotal;
      p_serverScriptTimeTotal[122] = p_serverScriptTimeTotal[123];
      p_serverScriptTimeTotal[182] = p_serverScriptTimeTotal[183];
      v13 = v3;
      *(float *)&v13 = *(float *)&v3 + (float)v12;
      v3 = v13;
      --v9;
    }
    while ( v9 );
  }
  *(_DWORD *)&SvGameGlobalsCommon[93].m_mapname[4 * v7 + 64] = SvGameGlobalsCommon[94].profile.animCallsMin;
  v14 = SvGameGlobalsCommon[94].profile.animCallsMin + v0;
  *(&SvGameGlobalsCommon[96].timeStats.serverScriptUsageThreadResumeTotal + v7) = *(_DWORD *)&SvGameGlobalsCommon[97].m_mapname[32];
  v15 = *(float *)&v3 + (float)*(int *)&SvGameGlobalsCommon[97].m_mapname[32];
  *(&SvGameGlobalsCommon[94].profile.animCallsMax + v7) = PersistentGlobalsMP->time;
  *((_DWORD *)&SvGameGlobalsCommon[95].profile.vmFrameTimeMax + v7) = SvBandwidthLimiter::GetUsage((SvBandwidthLimiter *)&SvGameGlobalsCommon[1].emptyConfigString);
  animCallsMin = SvGameGlobalsCommon[94].profile.animCallsMin;
  v17 = (float)v14;
  if ( animCallsMin > SvGameGlobalsCommon[94].profile.animCallsMax )
    SvGameGlobalsCommon[94].profile.animCallsMax = animCallsMin;
  v18 = *(_DWORD *)&SvGameGlobalsCommon[97].m_mapname[32];
  if ( v18 > *(_DWORD *)&SvGameGlobalsCommon[97].m_mapname[36] )
    *(_DWORD *)&SvGameGlobalsCommon[97].m_mapname[36] = v18;
  if ( ++SvGameGlobalsCommon[94].profile.animCalls >= v7 )
  {
    PersistentGlobalsMP->dataSentLastSec = v14;
    v19 = Live_GetNecessaryBandwidth(SvClient::ms_clientCount) / 8;
    v20 = (int)(float)((float)v19 * 0.80000001);
    if ( !SvPersistentGlobalsMP::GetPersistentGlobalsMP()->frontEndState[0] && SV_Game_IsOnlineGame() && com_statmon->current.enabled && v14 >= v20 )
    {
      v21 = j_va("Bandwidth Exceeded - size %i - max %i", (unsigned int)v14, (unsigned int)v20);
      StatMon_Warning(STATMON_CLASS_BUDGET, STATMON_TYPE_BANDWIDTHEXCEEDED, 3000, v21, v14);
      LODWORD(v33) = v19;
      LODWORD(fmta) = v1;
      Com_Printf(25, "NET: Bandwidth exceeded 80%% of expected limit by %i bytes, sent %i bytes (%i from fragments), actual limit is %i bytes\n", (unsigned int)(v14 - v20), (unsigned int)v14, fmta, v33);
      v22 = 0;
      p_skelMemPos = &SvGameGlobalsCommon[94].skelMemPos;
      do
      {
        LODWORD(v35) = *((_DWORD *)p_skelMemPos + 123);
        LODWORD(v34) = *p_skelMemPos;
        LODWORD(fmt) = *((_DWORD *)p_skelMemPos - 60);
        Com_Printf(25, "%i: Server time %i: sent %i bytes, %i bytes fragments, %i two frames\n", (unsigned int)v22++, *((unsigned int *)p_skelMemPos++ + 63), fmt, v34, v35);
      }
      while ( v22 < 60 );
    }
    v24 = DVARBOOL_sv_showAverageBPS;
    if ( !DVARBOOL_sv_showAverageBPS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sv_showAverageBPS") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v24);
    if ( v24->current.enabled )
    {
      v25 = 1.0 / (float)v7;
      v26 = v15 * v25;
      SvGameGlobalsCommon[94].profile.animCalls = 0;
      v27 = v25 * v17;
      if ( (float)(v15 * v25) > 0.0 )
        v2 = (float)(1.0 - (float)(v27 / v26)) * 100.0;
      v28 = v2 + *(float *)&SvGameGlobalsCommon[97].m_mapname[40];
      ++*(_DWORD *)&SvGameGlobalsCommon[97].m_mapname[44];
      v29 = *(_DWORD *)&SvGameGlobalsCommon[97].m_mapname[36];
      v30 = (float)*(int *)&SvGameGlobalsCommon[97].m_mapname[44];
      *(float *)&SvGameGlobalsCommon[97].m_mapname[40] = v28;
      LODWORD(v35) = v29;
      LODWORD(fmt) = SvGameGlobalsCommon[94].profile.animCallsMax;
      Com_DPrintf(15, "bpspc(%2.0f) bps(%2.0f) pk(%i) ubps(%2.0f) upk(%i) cr(%2.2f) acr(%2.2f)\n", (float)(v27 / (float)(int)SvClient::ms_clientCount), v27, fmt, v26, v35, v2, (float)(v28 / v30));
    }
  }
  SV_SnapshotMP_UpdateServerFrameBufferUsage();
  g_svSnapshotData.archivedEntityCount = g_svSnapshotData.archivedEntityCountWorkerAsync;
  g_svSnapshotData.archiveOldestTime = SV_SnapshotMP_GetEarliestArchivedClientInfoTime(0);
  G_HudOutline_GetPerformanceData(&g_svSnapshotData.hudOutlineCount);
}

/*
==============
SV_SnapshotMP_UpdateServerCommandsToClient
==============
*/
void SV_SnapshotMP_UpdateServerCommandsToClient(const SvClientMP *client, msg_t *msg, const int reliableAcknowledge, const int reliableSequence)
{
  const dvar_t *v4; 
  int v9; 
  int MpClientIndex; 
  client_net_buffers_t *p_netBuf; 
  unsigned int v12; 
  const char *v13; 
  const dvar_t *v14; 
  unsigned __int8 *outBuf; 
  int bitsUsedPrev; 

  v4 = DVARBOOL_sv_debugReliableCmds;
  if ( !DVARBOOL_sv_debugReliableCmds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sv_debugReliableCmds") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  if ( v4->current.enabled && reliableAcknowledge + 1 < reliableSequence )
    Com_Printf(15, "[Snapshot] %s has the following un-ack'd reliable commands:\n", client->name);
  bitsUsedPrev = MSG_GetUsedBitCount(msg);
  v9 = reliableAcknowledge + 1;
  MpClientIndex = SV_Client_GetMpClientIndex(client);
  if ( v9 <= reliableSequence )
  {
    p_netBuf = &client->netBuf;
    v12 = 0;
    do
    {
      if ( CircularEntryBuffer<512,131072,int,0>::GetData(&p_netBuf->reliableCommands, v9 & 0x1FF, (const unsigned __int8 **)&outBuf) )
      {
        v13 = (const char *)outBuf;
        SV_WriteServerCommandMessage(msg, (const char *)outBuf, v9, MpClientIndex);
      }
      else
      {
        if ( !client->reliableOverflowed && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 5170, ASSERT_TYPE_ASSERT, "(client->reliableOverflowed)", "%s\n\tDid not properly detect overflow condition for client '%s'", "client->reliableOverflowed", client->name) )
          __debugbreak();
        v13 = "<overflowed>";
        outBuf = "<overflowed>";
      }
      v14 = DVARBOOL_sv_debugReliableCmds;
      if ( !DVARBOOL_sv_debugReliableCmds && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sv_debugReliableCmds") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v14);
      if ( v14->current.enabled )
        Com_Printf(15, "[Snapshot] %s: #%i: %s\n", client->name, v12, v13);
      ++v9;
      p_netBuf = &client->netBuf;
      ++v12;
    }
    while ( v9 <= reliableSequence );
  }
  SV_TrackPacketData(MpClientIndex, ANALYZE_SNAPSHOT_SERVERCMDS, 0, 0, bitsUsedPrev, msg);
}

/*
==============
SV_SnapshotMP_UpdateServerFrameBufferUsage
==============
*/
unsigned __int8 *SV_SnapshotMP_UpdateServerFrameBufferUsage()
{
  int v0; 
  int v1; 
  const SvClientMP *CommonClient; 
  int updated; 
  __int64 snapshotIndex; 
  __int64 *m_first; 
  unsigned int v6; 
  signed __int64 v7; 
  __int64 *v8; 
  __int64 v9; 
  char nextServerSnapshotIndex; 
  unsigned int v11; 
  char v12; 
  char v13; 
  char v14; 
  char v15; 
  char v16; 
  char v17; 
  char v18; 
  char v19; 
  char v20; 
  char v21; 
  __int64 v22; 
  __int64 v23; 
  __int64 v24; 
  __int64 v25; 
  __int64 v26; 
  __int64 v27; 
  __int64 v28; 
  __int64 v29; 
  __int64 v30; 
  __int64 v31; 
  __int64 v32; 
  __int64 v33; 
  __int64 v34; 
  __int64 v35; 
  __int64 v36; 
  __int64 v37; 
  int *m_numBufferEntries; 
  unsigned int v39; 
  unsigned __int8 *result; 
  __int64 v41; 
  __int64 v42; 
  __int64 v43; 
  __int64 v44; 
  __int64 v45; 
  int v49; 
  bool v50; 
  bool v51; 
  __int64 v52; 
  __int64 v53; 
  int v54; 
  unsigned __int8 *snapshotBufferUsagePrecent; 
  __int64 v56[10]; 

  v0 = 0;
  v1 = 0;
  v56[0] = 0x7FFFFFFFFFFFFFFFi64;
  v56[1] = 0x7FFFFFFFFFFFFFFFi64;
  v56[2] = 0x7FFFFFFFFFFFFFFFi64;
  v56[3] = 0x7FFFFFFFFFFFFFFFi64;
  v56[4] = 0x7FFFFFFFFFFFFFFFi64;
  v56[5] = 0x7FFFFFFFFFFFFFFFi64;
  v56[6] = 0x7FFFFFFFFFFFFFFFi64;
  v56[7] = 0x7FFFFFFFFFFFFFFFi64;
  v56[8] = 0x7FFFFFFFFFFFFFFFi64;
  v56[9] = 0x7FFFFFFFFFFFFFFFi64;
  v54 = 0;
  if ( g_svSnapshotData.clientCount > 0 )
  {
    do
    {
      if ( ((SvClient::GetCommonClient(v1)->state - 1) & 0xFB) == 0 )
      {
        if ( (_BYTE)SvClient::ms_allocatedType != HALF_HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.h", 957, ASSERT_TYPE_ASSERT, "( ms_allocatedType == ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == ALLOCATION_TYPE") )
          __debugbreak();
        CommonClient = (const SvClientMP *)SvClient::GetCommonClient(v1);
        updated = SV_SnapshotMP_UpdateDeltaMessageSequence(CommonClient, CommonClient->deltaMessage, 0, 0);
        if ( updated > 0 )
        {
          snapshotIndex = CommonClient->m_frameInfo[updated & 0x3F].snapshotIndex;
          if ( (unsigned int)snapshotIndex >= SvClientMP::ms_fullSnapFrameCountPerClient )
          {
            LODWORD(v53) = SvClientMP::ms_fullSnapFrameCountPerClient;
            LODWORD(v52) = CommonClient->m_frameInfo[updated & 0x3F].snapshotIndex;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.h", 1013, ASSERT_TYPE_ASSERT, "(unsigned)( frameIndex ) < (unsigned)( ms_fullSnapFrameCountPerClient )", "frameIndex doesn't index ms_fullSnapFrameCountPerClient\n\t%i not in [0, %i)", v52, v53) )
              __debugbreak();
          }
          m_first = CommonClient->m_fullSnapshotFrames[snapshotIndex].serverEntries.m_first;
          if ( *m_first != -10000000 )
          {
            v6 = 0;
            v7 = (char *)m_first - (char *)v56;
            v8 = v56;
            do
            {
              v9 = *(__int64 *)((char *)v8 + v7);
              if ( v9 < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 8450, ASSERT_TYPE_ASSERT, "( thisSnapFirstIndex ) >= ( 0 )", "%s >= %s\n\t%lli, %lli", "thisSnapFirstIndex", "0", v9, 0i64) )
                __debugbreak();
              if ( *v8 > v9 )
                *v8 = v9;
              ++v6;
              ++v8;
            }
            while ( v6 < 0xA );
            v1 = v54;
          }
        }
      }
      v54 = ++v1;
    }
    while ( v1 < g_svSnapshotData.clientCount );
    v0 = 0;
  }
  nextServerSnapshotIndex = g_svSnapshotData.nextServerSnapshotIndex;
  v11 = 0;
  v12 = LOBYTE(g_svSnapshotData.nextServerSnapshotIndex) + 1;
  v13 = LOBYTE(g_svSnapshotData.nextServerSnapshotIndex) + 2;
  v14 = LOBYTE(g_svSnapshotData.nextServerSnapshotIndex) + 3;
  v15 = LOBYTE(g_svSnapshotData.nextServerSnapshotIndex) + 4;
  v16 = LOBYTE(g_svSnapshotData.nextServerSnapshotIndex) + 5;
  v17 = LOBYTE(g_svSnapshotData.nextServerSnapshotIndex) + 6;
  v18 = LOBYTE(g_svSnapshotData.nextServerSnapshotIndex) + 7;
  v19 = LOBYTE(g_svSnapshotData.nextServerSnapshotIndex) + 8;
  v20 = LOBYTE(g_svSnapshotData.nextServerSnapshotIndex) + 9;
  v21 = LOBYTE(g_svSnapshotData.nextServerSnapshotIndex) + 10;
  do
  {
    v22 = (nextServerSnapshotIndex + (_BYTE)v11) & 0x3F;
    if ( g_svSnapshotData.serverSnapshotTimes[v22] > 0 && g_svSnapshotData.snapshots[v22].entries.m_storageType == FULL )
      ++v0;
    v23 = (v12 + (_BYTE)v11) & 0x3F;
    if ( g_svSnapshotData.serverSnapshotTimes[v23] > 0 && g_svSnapshotData.snapshots[v23].entries.m_storageType == FULL )
      ++v0;
    v24 = (v13 + (_BYTE)v11) & 0x3F;
    if ( g_svSnapshotData.serverSnapshotTimes[v24] > 0 && g_svSnapshotData.snapshots[v24].entries.m_storageType == FULL )
      ++v0;
    v25 = (v14 + (_BYTE)v11) & 0x3F;
    v12 = LOBYTE(g_svSnapshotData.nextServerSnapshotIndex) + 1;
    if ( g_svSnapshotData.serverSnapshotTimes[v25] > 0 && g_svSnapshotData.snapshots[v25].entries.m_storageType == FULL )
      ++v0;
    v26 = (v15 + (_BYTE)v11) & 0x3F;
    if ( g_svSnapshotData.serverSnapshotTimes[v26] > 0 )
    {
      v12 = LOBYTE(g_svSnapshotData.nextServerSnapshotIndex) + 1;
      if ( g_svSnapshotData.snapshots[v26].entries.m_storageType == FULL )
        ++v0;
    }
    v27 = (v16 + (_BYTE)v11) & 0x3F;
    if ( g_svSnapshotData.serverSnapshotTimes[v27] > 0 && g_svSnapshotData.snapshots[v27].entries.m_storageType == FULL )
      ++v0;
    v28 = (v17 + (_BYTE)v11) & 0x3F;
    if ( g_svSnapshotData.serverSnapshotTimes[v28] > 0 )
    {
      v12 = LOBYTE(g_svSnapshotData.nextServerSnapshotIndex) + 1;
      if ( g_svSnapshotData.snapshots[v28].entries.m_storageType == FULL )
        ++v0;
    }
    v29 = (v18 + (_BYTE)v11) & 0x3F;
    v16 = LOBYTE(g_svSnapshotData.nextServerSnapshotIndex) + 5;
    if ( g_svSnapshotData.serverSnapshotTimes[v29] > 0 && g_svSnapshotData.snapshots[v29].entries.m_storageType == FULL )
      ++v0;
    v30 = (v19 + (_BYTE)v11) & 0x3F;
    if ( g_svSnapshotData.serverSnapshotTimes[v30] > 0 )
    {
      v21 = LOBYTE(g_svSnapshotData.nextServerSnapshotIndex) + 10;
      if ( g_svSnapshotData.snapshots[v30].entries.m_storageType == FULL )
        ++v0;
    }
    v31 = (v20 + (_BYTE)v11) & 0x3F;
    nextServerSnapshotIndex = g_svSnapshotData.nextServerSnapshotIndex;
    if ( g_svSnapshotData.serverSnapshotTimes[v31] > 0 && g_svSnapshotData.snapshots[v31].entries.m_storageType == FULL )
      ++v0;
    v32 = (v21 + (_BYTE)v11) & 0x3F;
    if ( g_svSnapshotData.serverSnapshotTimes[v32] > 0 )
    {
      v12 = LOBYTE(g_svSnapshotData.nextServerSnapshotIndex) + 1;
      if ( g_svSnapshotData.snapshots[v32].entries.m_storageType == FULL )
        ++v0;
    }
    v33 = ((_BYTE)v11 + LOBYTE(g_svSnapshotData.nextServerSnapshotIndex) + 11) & 0x3F;
    v18 = LOBYTE(g_svSnapshotData.nextServerSnapshotIndex) + 7;
    if ( g_svSnapshotData.serverSnapshotTimes[v33] > 0 )
    {
      v16 = LOBYTE(g_svSnapshotData.nextServerSnapshotIndex) + 5;
      if ( g_svSnapshotData.snapshots[v33].entries.m_storageType == FULL )
        ++v0;
    }
    v34 = ((_BYTE)v11 + LOBYTE(g_svSnapshotData.nextServerSnapshotIndex) + 12) & 0x3F;
    v13 = LOBYTE(g_svSnapshotData.nextServerSnapshotIndex) + 2;
    if ( g_svSnapshotData.serverSnapshotTimes[v34] > 0 )
    {
      v19 = LOBYTE(g_svSnapshotData.nextServerSnapshotIndex) + 8;
      if ( g_svSnapshotData.snapshots[v34].entries.m_storageType == FULL )
        ++v0;
    }
    v35 = ((_BYTE)v11 + LOBYTE(g_svSnapshotData.nextServerSnapshotIndex) + 13) & 0x3F;
    v15 = LOBYTE(g_svSnapshotData.nextServerSnapshotIndex) + 4;
    if ( g_svSnapshotData.serverSnapshotTimes[v35] > 0 )
    {
      v20 = LOBYTE(g_svSnapshotData.nextServerSnapshotIndex) + 9;
      if ( g_svSnapshotData.snapshots[v35].entries.m_storageType == FULL )
        ++v0;
    }
    v36 = ((_BYTE)v11 + LOBYTE(g_svSnapshotData.nextServerSnapshotIndex) + 14) & 0x3F;
    v17 = LOBYTE(g_svSnapshotData.nextServerSnapshotIndex) + 6;
    if ( g_svSnapshotData.serverSnapshotTimes[v36] > 0 )
    {
      v21 = LOBYTE(g_svSnapshotData.nextServerSnapshotIndex) + 10;
      if ( g_svSnapshotData.snapshots[v36].entries.m_storageType == FULL )
        ++v0;
    }
    v37 = ((_BYTE)v11 + LOBYTE(g_svSnapshotData.nextServerSnapshotIndex) + 15) & 0x3F;
    v14 = LOBYTE(g_svSnapshotData.nextServerSnapshotIndex) + 3;
    if ( g_svSnapshotData.serverSnapshotTimes[v37] > 0 )
    {
      v12 = LOBYTE(g_svSnapshotData.nextServerSnapshotIndex) + 1;
      if ( g_svSnapshotData.snapshots[v37].entries.m_storageType == FULL )
        ++v0;
    }
    v11 += 16;
  }
  while ( v11 < 0x40 );
  g_svSnapshotData.snapshotFullPercent = float_to_integral_cast<unsigned char,float>((float)v0 * 1.5625);
  m_numBufferEntries = g_svSnapshotData.fullBuffers.m_numBufferEntries;
  v39 = 0;
  result = g_svSnapshotData.snapshotBufferUsagePrecent;
  v41 = 0i64;
  snapshotBufferUsagePrecent = g_svSnapshotData.snapshotBufferUsagePrecent;
  do
  {
    if ( *m_numBufferEntries <= 0 || (v42 = v56[v41], v42 == 0x7FFFFFFFFFFFFFFFi64) )
    {
      LOBYTE(v49) = 0;
    }
    else
    {
      v43 = v56[v41];
      v44 = g_svSnapshotData.fullBuffers.m_nextBufferIndex[v41];
      if ( v44 < v42 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 8489, ASSERT_TYPE_ASSERT, "( nextIndex ) >= ( earliestFirstIndex[bufferTypeIndex] )", "%s >= %s\n\t%lli, %lli", "nextIndex", "earliestFirstIndex[bufferTypeIndex]", v44, v42) )
      {
        __debugbreak();
        v43 = v56[v41];
      }
      v45 = v44 - v43;
      if ( v45 < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 8491, ASSERT_TYPE_ASSERT, "( entriesInUseCount ) >= ( 0 )", "%s >= %s\n\t%lli, %lli", "entriesInUseCount", "0", v45, 0i64) )
        __debugbreak();
      _XMM0 = 0i64;
      __asm
      {
        vroundss xmm0, xmm0, xmm3, 2
        vminss  xmm1, xmm0, xmm6
      }
      v49 = (int)*(float *)&_XMM1;
      v50 = *(float *)&_XMM1 >= 0.0 && *(float *)&_XMM1 <= 16777216.0;
      v51 = *(float *)&_XMM1 >= 0.0 && *(float *)&_XMM1 <= 255.0;
      if ( (!v50 || !v51) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 437, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (IntegralType) 0x%jx == (FloatType) %f", "unsigned char __cdecl float_to_integral_cast<unsigned char,float>(float)", (unsigned __int8)v49, *(float *)&_XMM1) )
        __debugbreak();
      result = snapshotBufferUsagePrecent;
    }
    *result++ = v49;
    ++v39;
    snapshotBufferUsagePrecent = result;
    ++m_numBufferEntries;
    ++v41;
  }
  while ( v39 < 0xA );
  return result;
}

/*
==============
SV_SnapshotMP_ValidateDebugCanary
==============
*/
void SV_SnapshotMP_ValidateDebugCanary()
{
  __int64 i; 
  unsigned int *v1; 
  __int64 v2; 
  __int64 v3; 

  for ( i = 0i64; (unsigned int)i < s_svSnapshotDataCanaries.numCanaries; i = (unsigned int)(i + 1) )
  {
    v1 = s_svSnapshotDataCanaries.canaries[i];
    v2 = 32i64;
    do
    {
      if ( *v1 != 1719328685 )
      {
        LODWORD(v3) = i;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 428, ASSERT_TYPE_ASSERT, "( canary[intIndex] == SV_DEBUG_CANARY_VALUE )", "Memory overwrite found: canaryIndex = %d", v3) )
          __debugbreak();
      }
      ++v1;
      --v2;
    }
    while ( v2 );
  }
}

/*
==============
SV_SnapshotMP_WriteCommandBufferDelta
==============
*/
void SV_SnapshotMP_WriteCommandBufferDelta(const ClientSnapshotInfo *const clientSnapInfo, msg_t *msg, const clientSnapshot_t *const oldframe, const clientSnapshot_t *const frame)
{
  msg_t *v7; 
  int v8; 
  int cmdTargetError; 

  if ( !clientSnapInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 4048, ASSERT_TYPE_ASSERT, "( clientSnapInfo )", (const char *)&queryFormat, "clientSnapInfo") )
    __debugbreak();
  if ( !msg && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 4049, ASSERT_TYPE_ASSERT, "( msg )", (const char *)&queryFormat, "msg") )
    __debugbreak();
  v7 = msg;
  if ( !oldframe )
  {
    cmdTargetError = frame->cmdTargetError;
    goto LABEL_17;
  }
  v8 = frame->cmdTargetError - oldframe->cmdTargetError;
  if ( !v8 )
  {
    MSG_WriteBit0(msg);
    return;
  }
  MSG_WriteBit1(msg);
  if ( (unsigned int)(v8 + 128) > 0xFF )
  {
    MSG_WriteBit0(msg);
    cmdTargetError = frame->cmdTargetError;
    v7 = msg;
LABEL_17:
    MSG_WriteLong(v7, cmdTargetError);
    return;
  }
  MSG_WriteBit1(msg);
  if ( (unsigned int)(v8 + 128) > 0xFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "signed char __cdecl truncate_cast_impl<signed char,int>(int)", "signed", (char)v8, "signed", v8) )
    __debugbreak();
  MSG_WriteByte(msg, (char)v8);
}

/*
==============
SV_SnapshotMP_WriteDemoCompressedMessage
==============
*/
void SV_SnapshotMP_WriteDemoCompressedMessage(SvClientMP *client, msg_t *msg)
{
  unsigned int clientNum; 
  int compressedSize; 
  unsigned __int8 *svCompressedBuf; 
  unsigned __int8 compressBuffer[148448]; 

  clientNum = SV_Client_GetMpClientIndex(client);
  SV_WriteBitsCompress(0, msg, compressBuffer, 148440, &compressedSize, &svCompressedBuf, clientNum);
  SV_SnapshotMP_WriteDemoMessage(client, svCompressedBuf, compressedSize);
}

/*
==============
SV_SnapshotMP_WriteDemoMessage
==============
*/
void SV_SnapshotMP_WriteDemoMessage(SvClientMP *client, const unsigned __int8 *svCompressedBuf, int compressedSize)
{
  SvDemoMP *DemoMP; 
  unsigned int MpClientIndex; 
  clientSnapshot_t *UnsentSnapshotForSequence; 

  if ( !client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 5462, ASSERT_TYPE_ASSERT, "( client )", (const char *)&queryFormat, "client") )
    __debugbreak();
  if ( client->demorecording && client->demoWriteMessage )
  {
    DemoMP = SvDemoMP::GetDemoMP();
    MpClientIndex = SV_Client_GetMpClientIndex(client);
    if ( ((client->state - 1) & 0xFB) == 0 )
    {
      UnsentSnapshotForSequence = SvClientMP::GetUnsentSnapshotForSequence(client, client->netchan.outgoingSequence);
      CL_DemoServerPlayback_SvWriteClientArchive(client->demowrite, &UnsentSnapshotForSequence->ps, &UnsentSnapshotForSequence->predictedResult.extrapData, MpClientIndex, DemoMP->m_lastClientArchiveIndex);
      ++DemoMP->m_lastClientArchiveIndex;
    }
    CL_DemoServerPlayback_SvWriteRawMessage(client->demowrite, MpClientIndex, DemoMP->m_outgoingSequence, svCompressedBuf, compressedSize);
    ++DemoMP->m_outgoingSequence;
  }
}

/*
==============
SV_SnapshotMP_WriteNoDeltaPlayerState
==============
*/
void SV_SnapshotMP_WriteNoDeltaPlayerState(SnapshotInfo *snapInfo, msg_t *msg, const clientSnapshot_t *frame, const int serverTime, const int clientNum)
{
  __int64 v9; 
  __int64 v10; 
  int maxNoDeltaPlayerStates; 
  playerState_s ps; 

  if ( !g_svSnapshotData.noDeltaPlayerStates && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 4006, ASSERT_TYPE_ASSERT, "( g_svSnapshotData.noDeltaPlayerStates )", (const char *)&queryFormat, "g_svSnapshotData.noDeltaPlayerStates") )
    __debugbreak();
  if ( (unsigned int)clientNum >= g_svSnapshotData.maxNoDeltaPlayerStates )
  {
    maxNoDeltaPlayerStates = g_svSnapshotData.maxNoDeltaPlayerStates;
    LODWORD(v10) = clientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 4007, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( g_svSnapshotData.maxNoDeltaPlayerStates )", "clientNum doesn't index g_svSnapshotData.maxNoDeltaPlayerStates\n\t%i not in [0, %i)", v10, maxNoDeltaPlayerStates) )
      __debugbreak();
  }
  if ( !g_svSnapshotData.hasNoDeltaPlayerData[clientNum] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 4008, ASSERT_TYPE_ASSERT, "( g_svSnapshotData.hasNoDeltaPlayerData[clientNum] )", (const char *)&queryFormat, "g_svSnapshotData.hasNoDeltaPlayerData[clientNum]") )
    __debugbreak();
  v9 = clientNum;
  if ( frame->baselineSnap )
  {
    memset_0(&ps, 0, sizeof(ps));
    BG_InitPlayerState_PrepareForUseAsDelta(&ps, clientNum, 0);
    MSG_WriteDeltaPlayerstate(snapInfo, msg, serverTime, &ps, &g_svSnapshotData.noDeltaPlayerStates[v9]);
  }
  MSG_WriteDeltaPlayerstate(snapInfo, msg, serverTime, &g_svSnapshotData.noDeltaPlayerStates[v9], &frame->ps);
}

/*
==============
SV_SnapshotMP_WriteServerMessage
==============
*/
bool SV_SnapshotMP_WriteServerMessage(const SvSnapshotDelta *snapDelta, const SvSnapshotEntries *oldEntries, const SvSnapshotEntries *newEntries, const unsigned int bufferIndex, unsigned int *outMessageSize)
{
  __int64 v6; 
  SvPersistentGlobalsMP *PersistentGlobalsMP; 
  int oldServerTime; 
  bool v11; 
  __int64 v12; 
  EntityLoDs *p_newEntitiesLoD; 
  __int64 v14; 
  EntityLoDs *p_oldEntitiesLoD; 
  unsigned int UsedBitCount; 
  int v17; 
  unsigned int v18; 
  unsigned int v20; 
  int v21; 
  bool v22; 
  unsigned int v23; 
  msg_t buf; 
  SnapshotInfo snapInfo; 

  v6 = bufferIndex;
  PersistentGlobalsMP = SvPersistentGlobalsMP::GetPersistentGlobalsMP();
  MSG_Init(&buf, g_svSnapshotData.serverMessages[v6], 148440);
  *outMessageSize = 0;
  SnapshotInfo::reset(&snapInfo);
  oldServerTime = snapDelta->oldServerTime;
  v11 = snapDelta->snapshotType == HALF;
  snapInfo.serverTime = snapDelta->newServerTime;
  v12 = 4i64;
  snapInfo.snapshotDeltaTime = oldServerTime;
  snapInfo.packetIsDelta = v11;
  snapInfo.clientNum = -1;
  p_newEntitiesLoD = &snapInfo.newEntitiesLoD;
  snapInfo.mapCenter = PersistentGlobalsMP->mapCenter;
  v14 = 4i64;
  do
  {
    *(_QWORD *)p_newEntitiesLoD->array = -1i64;
    *(_QWORD *)&p_newEntitiesLoD->array[2] = -1i64;
    *(_QWORD *)&p_newEntitiesLoD->array[4] = -1i64;
    p_newEntitiesLoD = (EntityLoDs *)((char *)p_newEntitiesLoD + 64);
    *(_QWORD *)&p_newEntitiesLoD[-1].array[54] = -1i64;
    *(_QWORD *)&p_newEntitiesLoD[-1].array[56] = -1i64;
    *(_QWORD *)&p_newEntitiesLoD[-1].array[58] = -1i64;
    *(_QWORD *)&p_newEntitiesLoD[-1].array[60] = -1i64;
    *(_QWORD *)&p_newEntitiesLoD[-1].array[62] = -1i64;
    --v14;
  }
  while ( v14 );
  p_oldEntitiesLoD = &snapInfo.oldEntitiesLoD;
  do
  {
    *(_QWORD *)p_oldEntitiesLoD->array = -1i64;
    *(_QWORD *)&p_oldEntitiesLoD->array[2] = -1i64;
    *(_QWORD *)&p_oldEntitiesLoD->array[4] = -1i64;
    p_oldEntitiesLoD = (EntityLoDs *)((char *)p_oldEntitiesLoD + 64);
    *(_QWORD *)&p_oldEntitiesLoD[-1].array[54] = -1i64;
    *(_QWORD *)&p_oldEntitiesLoD[-1].array[56] = -1i64;
    *(_QWORD *)&p_oldEntitiesLoD[-1].array[58] = -1i64;
    *(_QWORD *)&p_oldEntitiesLoD[-1].array[60] = -1i64;
    *(_QWORD *)&p_oldEntitiesLoD[-1].array[62] = -1i64;
    --v12;
  }
  while ( v12 );
  snapInfo.serverMsgMeasurementIndex = SV_BandwidthProfile_StartServerMessage();
  MSG_WriteLong(&buf, snapInfo.serverMsgMeasurementIndex);
  if ( !SV_SnapshotMP_EmitServerMessageEntities(snapDelta, &snapInfo, &buf, oldEntries, newEntries) )
    goto LABEL_10;
  UsedBitCount = MSG_GetUsedBitCount(&buf);
  MSG_WriteBits(&buf, 0i64, 0x14u);
  v17 = MSG_GetUsedBitCount(&buf);
  if ( !SV_SnapshotMP_EmitMessageClients(snapDelta, &snapInfo, &buf, oldEntries, newEntries) )
    goto LABEL_10;
  v18 = MSG_GetUsedBitCount(&buf) - v17;
  if ( v18 > 0x9F600 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 7112, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Encoded delta client bitcount (%d) exceeds the expected maximum number of bits required (%d)", v18, 652800) )
      __debugbreak();
LABEL_10:
    SV_BandwidthProfile_EndSnapshot(&snapInfo, 0, 0, 0, 0, NULL);
    return 0;
  }
  if ( v18 )
    MSG_WriteBitsAtOffset(&buf, UsedBitCount, v18, 0x14u);
  if ( buf.overflowed )
    goto LABEL_10;
  v20 = MSG_GetUsedBitCount(&buf);
  MSG_WriteBits(&buf, 0i64, 0x11u);
  v21 = MSG_GetUsedBitCount(&buf);
  if ( SV_SnapshotMP_EmitMessageAgents(snapDelta, &snapInfo, &buf, oldEntries, newEntries) )
  {
    v23 = MSG_GetUsedBitCount(&buf) - v21;
    if ( v23 <= 0x17A00 )
    {
      if ( v23 )
        MSG_WriteBitsAtOffset(&buf, v20, v23, 0x11u);
      v22 = buf.overflowed == 0;
    }
    else
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 7144, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Encoded delta agents bitcount (%d) exceeds the expected maximum number of bits required (%d)", v23, 96768) )
        __debugbreak();
      v22 = 0;
    }
  }
  else
  {
    v22 = 0;
  }
  SV_BandwidthProfile_EndSnapshot(&snapInfo, 0, 0, 0, 0, NULL);
  if ( !v22 )
    return 0;
  v11 = buf.overflowed == 0;
  *outMessageSize = buf.cursize;
  return v11;
}

/*
==============
SV_SnapshotMP_WriteSnapshotToClient
==============
*/
void SV_SnapshotMP_WriteSnapshotToClient(ClientSnapshotInfo *clientSnapInfo, const bool writeFullSnap, msg_t *msg, SvWriteSnapshotResult *outResult)
{
  SvWriteSnapshotResult *v4; 
  ClientSnapshotInfo *v6; 
  SvClientMP *client; 
  int MpClientIndex; 
  int v9; 
  int serverMessageIndex; 
  __int64 v11; 
  int serverMessageSize; 
  int serverTime; 
  SvPersistentGlobalsMP *PersistentGlobalsMP; 
  __int64 cursize; 
  OmnvarData *v16; 
  int deltaMessage; 
  SvDemoMP *DemoMP; 
  clientSnapshot_t *p_m_baselineFrame; 
  SvSnapshotStorageType m_storageType; 
  bool v21; 
  SvClientMP *v22; 
  SvClientFrameInfo *FrameInfoForSequence; 
  int outgoingSequence; 
  SvClientFrameInfo *v25; 
  const dvar_t *v26; 
  int v27; 
  int v28; 
  int v29; 
  int updated; 
  char v31; 
  bool Bool_Internal_DebugName; 
  int v33; 
  const clientSnapshot_t *ValidDeltaFrame; 
  const clientSnapshot_t *v35; 
  ClientSnapshotInfo *v36; 
  const bitarray_base<bitarray<2048> > *SnapshotEntityLoD; 
  EntityLoDs *p_oldEntitiesLoD; 
  __int64 v39; 
  const bitarray_base<bitarray<2048> > *v40; 
  EntityLoDs *p_newEntitiesLoD; 
  __int64 v42; 
  const SvClientPredictedOrigin *predictedResult; 
  int timeModified; 
  int v45; 
  ClientSnapshotInfo *v46; 
  int v47; 
  int v48; 
  unsigned int v49; 
  ClientSnapshotInfo *v50; 
  SvClientConnectionState connState; 
  int sendAsActive; 
  int v53; 
  int v54; 
  int v55; 
  int v56; 
  int v57; 
  int v58; 
  unsigned int v59; 
  int v60; 
  unsigned int v61; 
  int v62; 
  unsigned int v63; 
  unsigned int v64; 
  unsigned int v65; 
  unsigned int v66; 
  PacketDataType v67; 
  int v68; 
  unsigned int v69; 
  unsigned int v70; 
  __int64 v71; 
  int v72; 
  unsigned int v73; 
  unsigned int v74; 
  unsigned int v75; 
  unsigned int v76; 
  bool v77; 
  int v78; 
  __int64 v79; 
  int v80; 
  const ScoreboardInfo *p_scores; 
  int v82; 
  unsigned int v83; 
  const SvSnapshotStreamSyncData *p_streamSync; 
  unsigned int v85; 
  unsigned int v86; 
  __int64 v87; 
  int omnvarsPerClientCount; 
  OmnvarData *omnvars; 
  int omnvarsIdx; 
  OmnvarData *Defaults; 
  OmnvarData *v92; 
  int v93; 
  unsigned int v94; 
  int v95; 
  unsigned int v96; 
  int v97; 
  unsigned int v98; 
  unsigned int v99; 
  unsigned int v100; 
  unsigned int v101; 
  msg_t *v102; 
  __int64 Bits; 
  unsigned int v104; 
  const SvSnapshotEntries *p_serverEntries; 
  unsigned int v106; 
  unsigned int v107; 
  msg_t *v108; 
  __int64 v109; 
  unsigned int v110; 
  const SvSnapshotEntries *v111; 
  int v112; 
  unsigned int v113; 
  int v114; 
  int v115; 
  int v116; 
  unsigned int v117; 
  unsigned int v118; 
  int v119; 
  unsigned int v120; 
  unsigned int v121; 
  unsigned int v122; 
  const BgScriptedCameraState *CommandState; 
  int v124; 
  unsigned int v125; 
  unsigned int v126; 
  bool isInKillcam; 
  int v128; 
  int *outLastFrame; 
  int *outLastFramea; 
  int *outLastFrameb; 
  int *outLastFramec; 
  int *outLastServerTime; 
  int *outLastServerTimea; 
  SvWriteSnapshotResult *result; 
  __int64 v136; 
  bool v137; 
  bool hasAckedBaseline; 
  bool v140; 
  SvSnapshotStorageType snapshotClientStorageType; 
  int v142; 
  int v143; 
  int v144; 
  int v145; 
  int v146; 
  int v147; 
  int clientNum; 
  int bitsUsedPrev; 
  ClientSnapshotInfo *clientSnapInfoa; 
  int v151; 
  SvWriteSnapshotResult *v152; 
  __int64 from_umbraGatesFirstIndex; 
  SvSnapshotDelta snapDelta; 
  OmnvarData *fromOmnvars; 
  msg_t *msga; 
  int UsedBitCount; 
  msg_t buf; 
  SnapshotInfo snapInfo; 

  v152 = outResult;
  v4 = outResult;
  clientSnapInfoa = clientSnapInfo;
  v6 = clientSnapInfo;
  if ( !clientSnapInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 4344, ASSERT_TYPE_ASSERT, "( clientSnapInfo )", (const char *)&queryFormat, "clientSnapInfo") )
    __debugbreak();
  if ( !msg && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 4345, ASSERT_TYPE_ASSERT, "( msg )", (const char *)&queryFormat, "msg") )
    __debugbreak();
  if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 4346, ASSERT_TYPE_ASSERT, "( outResult )", (const char *)&queryFormat, "outResult") )
    __debugbreak();
  client = v6->client;
  if ( !v6->client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 4349, ASSERT_TYPE_ASSERT, "( client )", (const char *)&queryFormat, "client") )
    __debugbreak();
  MpClientIndex = SV_Client_GetMpClientIndex(client);
  clientNum = MpClientIndex;
  v9 = MpClientIndex;
  if ( (MpClientIndex < 0 || MpClientIndex >= (int)SvClient::ms_clientCount) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 4352, ASSERT_TYPE_ASSERT, "( ( clientNum >= 0 && clientNum < SvClient::GetClientCount() ) )", "%s\n\t( clientNum ) = %i", "( clientNum >= 0 && clientNum < SvClient::GetClientCount() )", MpClientIndex) )
    __debugbreak();
  serverMessageIndex = v6->serverMessageIndex;
  if ( serverMessageIndex < 0 )
  {
    msga = NULL;
  }
  else
  {
    if ( (unsigned int)serverMessageIndex >= g_svSnapshotData.maxServerMessages )
    {
      LODWORD(outLastServerTime) = g_svSnapshotData.maxServerMessages;
      LODWORD(outLastFrame) = v6->serverMessageIndex;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 4357, ASSERT_TYPE_ASSERT, "(unsigned)( clientSnapInfo->serverMessageIndex ) < (unsigned)( g_svSnapshotData.maxServerMessages )", "clientSnapInfo->serverMessageIndex doesn't index g_svSnapshotData.maxServerMessages\n\t%i not in [0, %i)", outLastFrame, outLastServerTime) )
        __debugbreak();
    }
    v11 = v6->serverMessageIndex;
    serverMessageSize = v6->serverMessageSize;
    msga = &buf;
    MSG_InitReadOnly(&buf, g_svSnapshotData.serverMessages[v11], serverMessageSize);
    MSG_BeginReading(&buf);
    v4 = v152;
  }
  if ( !client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 5005, ASSERT_TYPE_ASSERT, "( client )", (const char *)&queryFormat, "client") )
    __debugbreak();
  v4->noDeltaSequence = client->noDeltaSequence;
  v4->sendAsActive = client->sendAsActive != 0;
  v4->addEntitiesFailed = client->addEntitiesFailed;
  v4->buildMessageFailed = client->buildMessageFailed;
  v4->currentPacketBuiltEvent = 0;
  memset_0(&v4->clientSnapEncodingOutput, 0, sizeof(v4->clientSnapEncodingOutput));
  SV_ResetCurrentSnapshotChangedFlags(v9);
  bitsUsedPrev = MSG_GetUsedBitCount(msg);
  SnapshotInfo::reset(&snapInfo);
  serverTime = v6->serverTime;
  snapInfo.sendNetfieldLoDBit = g_svSnapshotData.useNetfieldLoD != 0;
  snapInfo.clientNum = v9;
  snapInfo.client = client;
  snapInfo.serverTime = serverTime;
  PersistentGlobalsMP = SvPersistentGlobalsMP::GetPersistentGlobalsMP();
  cursize = (unsigned int)msg->cursize;
  v16 = (OmnvarData *)PersistentGlobalsMP;
  deltaMessage = v6->deltaMessage;
  snapInfo.mapCenter = PersistentGlobalsMP->mapCenter;
  fromOmnvars = (OmnvarData *)PersistentGlobalsMP;
  snapInfo.archived = 0;
  SV_LogSnapshotContent(snapInfo.clientNum, "%d bytes written (SV_SnapshotMP_WriteSnapshotToClient)\n", cursize);
  if ( v6->isDemoBaseline )
  {
    DemoMP = SvDemoMP::GetDemoMP();
    if ( v6->hasAckedBaseline && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 4409, ASSERT_TYPE_ASSERT, "( !clientSnapInfo->hasAckedBaseline )", (const char *)&queryFormat, "!clientSnapInfo->hasAckedBaseline") )
      __debugbreak();
    if ( DemoMP->m_baselineClientNum != v9 )
    {
      LODWORD(outLastServerTime) = v9;
      LODWORD(outLastFrame) = DemoMP->m_baselineClientNum;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 4410, ASSERT_TYPE_ASSERT, "( svDemoMp->m_baselineClientNum ) == ( clientNum )", "svDemoMp->m_baselineClientNum == clientNum\n\t%i, %i", outLastFrame, outLastServerTime) )
        __debugbreak();
    }
    p_m_baselineFrame = &DemoMP->m_baselineFrame;
    DemoMP->m_baselineFrame.serverTime = v6->serverTime;
    m_storageType = DemoMP->m_baselineFrame.serverEntries.m_storageType;
    if ( m_storageType )
    {
      LODWORD(outLastFrame) = (unsigned __int8)m_storageType;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 4416, ASSERT_TYPE_ASSERT, "( svDemoMp->m_baselineFrame.serverEntries.GetStorageType() ) == ( SvSnapshotStorageType::FULL )", "svDemoMp->m_baselineFrame.serverEntries.GetStorageType() == SvSnapshotStorageType::FULL\n\t%i, %i", outLastFrame, 0i64) )
        __debugbreak();
    }
    v21 = 0;
    v137 = 0;
    v140 = 0;
  }
  else
  {
    v22 = v6->client;
    FrameInfoForSequence = SvClientMP::GetFrameInfoForSequence(v6->client, client->netchan.outgoingSequence);
    outgoingSequence = client->netchan.outgoingSequence;
    v25 = FrameInfoForSequence;
    from_umbraGatesFirstIndex = (__int64)FrameInfoForSequence;
    p_m_baselineFrame = SvClientMP::GetUnsentSnapshotForSequence(v22, outgoingSequence);
    v26 = DVARBOOL_sv_snapshot_blindDeltaEnabled;
    snapshotClientStorageType = v25->snapshotClientStorageType;
    v27 = clientSnapInfoa->deltaMessage;
    v28 = clientSnapInfoa->serverTime;
    hasAckedBaseline = clientSnapInfoa->hasAckedBaseline;
    if ( !DVARBOOL_sv_snapshot_blindDeltaEnabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sv_snapshot_blindDeltaEnabled") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v26);
    if ( v26->current.enabled && snapshotClientStorageType == TRANSIENT && client->state == CS_ACTIVE && client->netchan.outgoingSequence > 0 && v27 >= 0 && hasAckedBaseline && client->lastSnapshotSentTime != client->lastBlindSnapshotSentTime && v28 - client->lastSnapshotSentTime <= Dvar_GetInt_Internal_DebugName(DVARINT_sv_snapshot_blindDeltaMaxTimeDelta, "sv_snapshot_blindDeltaMaxTimeDelta") && (v29 = client->netchan.outgoingSequence - 1, v27 < v29) && (updated = SV_SnapshotMP_UpdateDeltaMessageSequence(client, v29, 1, 0), v27 < updated) )
    {
      v142 = updated;
      v31 = 1;
    }
    else
    {
      v31 = 0;
    }
    v137 = v31;
    v140 = *(_BYTE *)(from_umbraGatesFirstIndex + 14) == 1;
    if ( v31 )
    {
      if ( v142 <= deltaMessage )
      {
        LODWORD(outLastServerTime) = deltaMessage;
        LODWORD(outLastFrame) = v142;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 4437, ASSERT_TYPE_ASSERT, "( blindDeltaFrame ) > ( deltaMessage )", "blindDeltaFrame > deltaMessage\n\t%i, %i", outLastFrame, outLastServerTime) )
          __debugbreak();
        v31 = v137;
      }
      deltaMessage = v142;
    }
    v6 = clientSnapInfoa;
    *(_BYTE *)(from_umbraGatesFirstIndex + 15) = v31;
    p_m_baselineFrame->serverTime = v6->serverTime;
    SV_SnapshotMP_ResolveWeaponMap(p_m_baselineFrame);
    v16 = fromOmnvars;
    v21 = v137;
  }
  if ( !p_m_baselineFrame && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 4450, ASSERT_TYPE_ASSERT, "( frame )", (const char *)&queryFormat, "frame") )
    __debugbreak();
  if ( !v21 )
  {
    if ( SvPersistentGlobalsMP::GetPersistentGlobalsMP()->frontEndState[0] )
    {
      Bool_Internal_DebugName = 0;
    }
    else
    {
      v33 = SV_Client_GetMpClientIndex(client);
      if ( SV_ClientMP_IsTestClient(v33) )
        Bool_Internal_DebugName = 0;
      else
        Bool_Internal_DebugName = Dvar_GetBool_Internal_DebugName(DVARBOOL_sv_snapshotDebugVerbose, "sv_snapshotDebugVerbose");
    }
    deltaMessage = SV_SnapshotMP_UpdateDeltaMessageSequence(client, deltaMessage, 0, Bool_Internal_DebugName);
  }
  ValidDeltaFrame = SV_SnapshotMP_FindValidDeltaFrame(client, (const SvClientConnectionState)v6->connState, v6->hasAckedBaseline, deltaMessage, p_m_baselineFrame, &v151, &v147, v152);
  v35 = ValidDeltaFrame;
  if ( !v151 )
  {
    if ( !ValidDeltaFrame )
      goto LABEL_76;
    if ( !ValidDeltaFrame->baselineSnap )
    {
      if ( client->netchan.outgoingSequence != deltaMessage )
      {
        LODWORD(result) = deltaMessage;
        LODWORD(outLastServerTimea) = client->netchan.outgoingSequence;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 4463, ASSERT_TYPE_ASSERT, "(client->netchan.outgoingSequence - deltaMessage == 0)", "%s\n\t%i != %i", "client->netchan.outgoingSequence - deltaMessage == 0", outLastServerTimea, result) )
          goto LABEL_74;
      }
      return;
    }
  }
  if ( ValidDeltaFrame )
  {
    v36 = clientSnapInfoa;
    goto LABEL_80;
  }
LABEL_76:
  v36 = clientSnapInfoa;
  if ( clientSnapInfoa->hasAckedBaseline && SV_SnapshotMP_PrintForcedNoDelta(client) )
    Com_Printf(25, "[Snapshot] %s Building a no-delta snapshot for time %i (note: bandwidth limiter might decide not to send this)\n", client->name, (unsigned int)p_m_baselineFrame->serverTime);
LABEL_80:
  snapInfo.snapshotDeltaTime = v147;
  snapInfo.packetIsDelta = v35 != NULL;
  SnapshotEntityLoD = SV_SnapshotMP_GetSnapshotEntityLoD(v35);
  if ( SnapshotEntityLoD )
  {
    bitarray_base<bitarray<2048>>::copyBitArray(&snapInfo.oldEntitiesLoD, SnapshotEntityLoD);
  }
  else
  {
    p_oldEntitiesLoD = &snapInfo.oldEntitiesLoD;
    v39 = 4i64;
    do
    {
      *(_QWORD *)p_oldEntitiesLoD->array = -1i64;
      *(_QWORD *)&p_oldEntitiesLoD->array[2] = -1i64;
      *(_QWORD *)&p_oldEntitiesLoD->array[4] = -1i64;
      p_oldEntitiesLoD = (EntityLoDs *)((char *)p_oldEntitiesLoD + 64);
      *(_QWORD *)&p_oldEntitiesLoD[-1].array[54] = -1i64;
      *(_QWORD *)&p_oldEntitiesLoD[-1].array[56] = -1i64;
      *(_QWORD *)&p_oldEntitiesLoD[-1].array[58] = -1i64;
      *(_QWORD *)&p_oldEntitiesLoD[-1].array[60] = -1i64;
      *(_QWORD *)&p_oldEntitiesLoD[-1].array[62] = -1i64;
      --v39;
    }
    while ( v39 );
  }
  v40 = SV_SnapshotMP_GetSnapshotEntityLoD(p_m_baselineFrame);
  if ( v40 )
  {
    bitarray_base<bitarray<2048>>::copyBitArray(&snapInfo.newEntitiesLoD, v40);
  }
  else
  {
    p_newEntitiesLoD = &snapInfo.newEntitiesLoD;
    v42 = 4i64;
    do
    {
      *(_QWORD *)p_newEntitiesLoD->array = -1i64;
      *(_QWORD *)&p_newEntitiesLoD->array[2] = -1i64;
      *(_QWORD *)&p_newEntitiesLoD->array[4] = -1i64;
      p_newEntitiesLoD = (EntityLoDs *)((char *)p_newEntitiesLoD + 64);
      *(_QWORD *)&p_newEntitiesLoD[-1].array[54] = -1i64;
      *(_QWORD *)&p_newEntitiesLoD[-1].array[56] = -1i64;
      *(_QWORD *)&p_newEntitiesLoD[-1].array[58] = -1i64;
      *(_QWORD *)&p_newEntitiesLoD[-1].array[60] = -1i64;
      *(_QWORD *)&p_newEntitiesLoD[-1].array[62] = -1i64;
      --v42;
    }
    while ( v42 );
  }
  predictedResult = snapInfo.predictedResult;
  if ( p_m_baselineFrame->predictedResult.commandTime == p_m_baselineFrame->ps.commandTime )
    predictedResult = &p_m_baselineFrame->predictedResult;
  snapInfo.predictedResult = predictedResult;
  timeModified = v16[3].timeModified;
  v45 = timeModified | 1;
  if ( !client->rateDelayed )
    v45 = timeModified;
  if ( p_m_baselineFrame->baselineSnap )
  {
    if ( v36->hasAckedBaseline && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 4522, ASSERT_TYPE_ASSERT, "( !clientSnapInfo->hasAckedBaseline )", (const char *)&queryFormat, "!clientSnapInfo->hasAckedBaseline") )
      __debugbreak();
    if ( v35 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 4523, ASSERT_TYPE_ASSERT, "( oldframe == nullptr )", (const char *)&queryFormat, "oldframe == nullptr") )
      __debugbreak();
    if ( p_m_baselineFrame->serverEntries.m_first[0] != -10000000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 4524, ASSERT_TYPE_ASSERT, "( frame->serverEntries.GetFirst( SvSnapshotBufferType::ENTITIES ) == NODELTA_ENTINDEX_OFFSET )", (const char *)&queryFormat, "frame->serverEntries.GetFirst( SvSnapshotBufferType::ENTITIES ) == NODELTA_ENTINDEX_OFFSET") )
      __debugbreak();
    from_umbraGatesFirstIndex = 0x7FFFFFFFi64;
    if ( p_m_baselineFrame->serverEntries.m_first[8] != 0x7FFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 4525, ASSERT_TYPE_ASSERT, "( frame->serverEntries.GetFirst( SvSnapshotBufferType::WEAPONS ) == 0x7FFFFFFF )", (const char *)&queryFormat, "frame->serverEntries.GetFirst( SvSnapshotBufferType::WEAPONS ) == WEAPON_SNAPSHOT_NODELTA") )
      __debugbreak();
    if ( p_m_baselineFrame->serverEntries.m_first[6] != 0x7FFFFFFFFFFFFFFFi64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 4526, ASSERT_TYPE_ASSERT, "( frame->serverEntries.GetFirst( SvSnapshotBufferType::SCRIPTABLE_INSTANCES ) == SCRIPTABLE_SNAPSHOT_NODELTA_INDEX )", (const char *)&queryFormat, "frame->serverEntries.GetFirst( SvSnapshotBufferType::SCRIPTABLE_INSTANCES ) == SCRIPTABLE_SNAPSHOT_NODELTA_INDEX") )
      __debugbreak();
    if ( p_m_baselineFrame->serverEntries.m_first[7] != 0x7FFFFFFFFFFFFFFFi64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 4527, ASSERT_TYPE_ASSERT, "( frame->serverEntries.GetFirst( SvSnapshotBufferType::SCRIPTABLE_PARTS ) == SCRIPTABLE_SNAPSHOT_NODELTA_INDEX )", (const char *)&queryFormat, "frame->serverEntries.GetFirst( SvSnapshotBufferType::SCRIPTABLE_PARTS ) == SCRIPTABLE_SNAPSHOT_NODELTA_INDEX") )
      __debugbreak();
    if ( p_m_baselineFrame->serverEntries.m_count[5] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 4528, ASSERT_TYPE_ASSERT, "( frame->serverEntries.GetCount( SvSnapshotBufferType::AGENTS ) == 0 )", (const char *)&queryFormat, "frame->serverEntries.GetCount( SvSnapshotBufferType::AGENTS ) == 0") )
      __debugbreak();
    if ( p_m_baselineFrame->serverEntries.m_count[4] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 4529, ASSERT_TYPE_ASSERT, "( frame->serverEntries.GetCount( SvSnapshotBufferType::CLIENTS ) == 0 )", (const char *)&queryFormat, "frame->serverEntries.GetCount( SvSnapshotBufferType::CLIENTS ) == 0") )
      __debugbreak();
    v45 |= 8u;
    if ( SV_NetConstBaselines_GetBaselineValidState() )
      v45 |= 0x10u;
    v46 = clientSnapInfoa;
    v47 = clientNum;
    SV_SnapshotMP_CreateBaselinePlayerData(clientSnapInfoa, p_m_baselineFrame, clientNum);
    v48 = client->netchan.outgoingSequence;
LABEL_151:
    v152->noDeltaSequence = v48;
    snapInfo.snapMeasurementIndex = SV_BandwidthProfile_StartSnapshot(snapInfo.clientNum);
    if ( msga )
      snapInfo.serverMsgMeasurementIndex = MSG_ReadLong(msga);
    if ( bitsUsedPrev > 32 )
      SV_BandwidthProfile_AddServerCmdToSnapshot(&snapInfo, bitsUsedPrev - 32);
    MSG_WriteBits(msg, 0i64, 4u);
    MSG_WriteLong(msg, v46->serverTime);
    v49 = v151;
    MSG_WriteByte(msg, v151);
    if ( !snapInfo.archived )
      SV_LogSnapshotContent(snapInfo.clientNum, "clientSnapInfo->serverTime %d lastframe %d\n", (unsigned int)clientSnapInfoa->serverTime, v49);
    v50 = clientSnapInfoa;
    connState = clientSnapInfoa->connState;
    if ( connState == CS_ACTIVE )
    {
      sendAsActive = 1;
    }
    else if ( connState == CS_ZOMBIE )
    {
      sendAsActive = client->sendAsActive;
    }
    else
    {
      sendAsActive = 0;
    }
    v152->sendAsActive = sendAsActive != 0;
    v53 = v45 | 2;
    if ( sendAsActive )
      v53 = v45;
    v54 = v53 | 0x40;
    if ( !v50->useFastAdjustTime )
      v54 = v53;
    v55 = v54 | 0x200;
    if ( !v50->noDeltaCmd )
      v55 = v54;
    v56 = v55 | 0x80;
    if ( !v140 )
      v56 = v55;
    v57 = v56 | 0x100;
    if ( !v137 )
      v57 = v56;
    if ( snapInfo.sendNetfieldLoDBit )
      v57 |= 0x400u;
    if ( SV_EntitiesLoD_UseLowLodClientEntityEvents() )
      v57 |= 0x800u;
    MSG_WriteShort(msg, v57);
    CG_DrawDebugMP_ClearCommandsProcessed(v47);
    bitsUsedPrev = SV_TrackPacketData(v47, ANALYZE_SNAPSHOT_GENERIC_DATA, 0, 0, bitsUsedPrev, msg);
    UsedBitCount = MSG_GetUsedBitCount(msg);
    v58 = UsedBitCount;
    if ( !v35 || v35->baselineSnap )
    {
      if ( v49 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 4711, ASSERT_TYPE_ASSERT, "( !lastframe )", (const char *)&queryFormat, "!lastframe") )
        __debugbreak();
      v68 = clientNum;
      if ( clientNum >= SvClient::ms_clientCount )
      {
        LODWORD(outLastServerTimea) = SvClient::ms_clientCount;
        LODWORD(outLastFramea) = clientNum;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 4712, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( SvClient::GetClientCount() )", "clientNum doesn't index SvClient::GetClientCount()\n\t%i not in [0, %i)", outLastFramea, outLastServerTimea) )
          __debugbreak();
      }
      MSG_WriteBit0(msg);
      MSG_WriteLong(msg, p_m_baselineFrame->cmdTargetError);
      v147 = MSG_GetUsedBitCount(msg);
      v69 = (v147 - v58) / 8;
      v60 = v57 & 8;
      if ( v60 )
      {
        v70 = SV_Client_GetMpClientIndex(client);
        if ( !SV_BotIsBot(v70) && !SV_ClientMP_IsTestClient(v70) )
          Com_Printf(15, "[Snapshot] Sending %i bytes of %s deltas in a BASELINE snapshot to '%s'\n", v69, "command", client->name);
        v68 = clientNum;
      }
      if ( !snapInfo.archived )
        SV_LogSnapshotContent(snapInfo.clientNum, "%d bytes written (before SV_SnapshotMP_WriteNoDeltaWeaponMap)\n", (unsigned int)msg->cursize);
      if ( !g_svSnapshotData.noDeltaClientWeaponMaps && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 3988, ASSERT_TYPE_ASSERT, "( g_svSnapshotData.noDeltaClientWeaponMaps )", (const char *)&queryFormat, "g_svSnapshotData.noDeltaClientWeaponMaps") )
        __debugbreak();
      if ( (unsigned int)v68 >= g_svSnapshotData.maxNoDeltaClientWeaponMaps )
      {
        LODWORD(outLastServerTimea) = g_svSnapshotData.maxNoDeltaClientWeaponMaps;
        LODWORD(outLastFramea) = v68;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 3989, ASSERT_TYPE_ASSERT, "(unsigned)( clientNum ) < (unsigned)( g_svSnapshotData.maxNoDeltaClientWeaponMaps )", "clientNum doesn't index g_svSnapshotData.maxNoDeltaClientWeaponMaps\n\t%i not in [0, %i)", outLastFramea, outLastServerTimea) )
          __debugbreak();
      }
      if ( !g_svSnapshotData.hasNoDeltaPlayerData[v68] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 3990, ASSERT_TYPE_ASSERT, "( g_svSnapshotData.hasNoDeltaPlayerData[clientNum] )", (const char *)&queryFormat, "g_svSnapshotData.hasNoDeltaPlayerData[clientNum]") )
        __debugbreak();
      v71 = v68;
      if ( p_m_baselineFrame->baselineSnap )
        SV_EmitPacketWeapons(&snapInfo, snapInfo.client, msg, NULL, &g_svSnapshotData.noDeltaClientWeaponMaps[v71]);
      SV_EmitPacketWeapons(&snapInfo, snapInfo.client, msg, &g_svSnapshotData.noDeltaClientWeaponMaps[v71], &p_m_baselineFrame->weaponMap);
      v72 = MSG_GetUsedBitCount(msg);
      v144 = v72;
      v73 = (v72 - v147) / 8;
      if ( v60 )
      {
        v74 = SV_Client_GetMpClientIndex(client);
        if ( !SV_BotIsBot(v74) && !SV_ClientMP_IsTestClient(v74) )
          Com_Printf(15, "[Snapshot] Sending %i bytes of %s deltas in a BASELINE snapshot to '%s'\n", v73, "weaponmap", client->name);
        v72 = v144;
      }
      if ( !snapInfo.archived )
        SV_LogSnapshotContent(snapInfo.clientNum, "%d bytes written (before SV_SnapshotMP_WriteNoDeltaPlayerState)\n", (unsigned int)msg->cursize);
      SV_SnapshotMP_WriteNoDeltaPlayerState(&snapInfo, msg, p_m_baselineFrame, clientSnapInfoa->serverTime, clientNum);
      v151 = MSG_GetUsedBitCount(msg);
      v75 = (v151 - v72) / 8;
      if ( v60 )
      {
        v76 = SV_Client_GetMpClientIndex(client);
        if ( !SV_BotIsBot(v76) && !SV_ClientMP_IsTestClient(v76) )
          Com_Printf(15, "[Snapshot] Sending %i bytes of %s deltas in a BASELINE snapshot to '%s'\n", v75, "playerstate", client->name);
      }
      if ( !snapInfo.archived )
        SV_LogSnapshotContent(snapInfo.clientNum, "%d bytes written (after SV_SnapshotMP_WriteNoDeltaPlayerState)\n", (unsigned int)msg->cursize);
      v67 = ANALYZE_SNAPSHOT_NODELTAPLAYERSTATE;
    }
    else
    {
      if ( !v49 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 4677, ASSERT_TYPE_ASSERT, "( lastframe )", (const char *)&queryFormat, "lastframe") )
        __debugbreak();
      MSG_WriteBit1(msg);
      SV_SnapshotMP_WriteCommandBufferDelta(clientSnapInfoa, msg, v35, p_m_baselineFrame);
      v147 = MSG_GetUsedBitCount(msg);
      v59 = (v147 - v58) / 8;
      v60 = v57 & 8;
      if ( v60 )
      {
        v61 = SV_Client_GetMpClientIndex(client);
        if ( !SV_BotIsBot(v61) && !SV_ClientMP_IsTestClient(v61) )
          Com_Printf(15, "[Snapshot] Sending %i bytes of %s deltas in a BASELINE snapshot to '%s'\n", v59, "command", client->name);
      }
      if ( !snapInfo.archived )
        SV_LogSnapshotContent(snapInfo.clientNum, "%d bytes written (before SV_EmitPacketWeapons)\n", (unsigned int)msg->cursize);
      SV_EmitPacketWeapons(&snapInfo, client, msg, &v35->weaponMap, &p_m_baselineFrame->weaponMap);
      v62 = MSG_GetUsedBitCount(msg);
      v143 = v62;
      v63 = (v62 - v147) / 8;
      if ( v60 )
      {
        v64 = SV_Client_GetMpClientIndex(client);
        if ( !SV_BotIsBot(v64) && !SV_ClientMP_IsTestClient(v64) )
          Com_Printf(15, "[Snapshot] Sending %i bytes of %s deltas in a BASELINE snapshot to '%s'\n", v63, "weaponmap", client->name);
        v62 = v143;
      }
      if ( !snapInfo.archived )
        SV_LogSnapshotContent(snapInfo.clientNum, "%d bytes written (before MSG_WriteDeltaPlayerstate)\n", (unsigned int)msg->cursize);
      MSG_WriteDeltaPlayerstate(&snapInfo, msg, clientSnapInfoa->serverTime, &v35->ps, &p_m_baselineFrame->ps);
      v151 = MSG_GetUsedBitCount(msg);
      v65 = (v151 - v62) / 8;
      if ( v60 )
      {
        v66 = SV_Client_GetMpClientIndex(client);
        if ( !SV_BotIsBot(v66) && !SV_ClientMP_IsTestClient(v66) )
          Com_Printf(15, "[Snapshot] Sending %i bytes of %s deltas in a BASELINE snapshot to '%s'\n", v65, "playerstate", client->name);
      }
      if ( !snapInfo.archived )
        SV_LogSnapshotContent(snapInfo.clientNum, "%d bytes written (after MSG_WriteDeltaPlayerstate)\n", (unsigned int)msg->cursize);
      v67 = ANALYZE_SNAPSHOT_DELTAPLAYERSTATE;
    }
    SV_TrackPacketData(clientNum, v67, 0, 0, bitsUsedPrev, msg);
    v77 = writeFullSnap;
    if ( !writeFullSnap )
    {
      if ( !snapInfo.archived )
        SV_LogSnapshotContent(snapInfo.clientNum, "%d bytes written (!writeFullSnap)\n", (unsigned int)msg->cursize);
      MSG_WriteBit0(msg);
      SV_StreamSync_WriteNoChangeSnapshot(msg);
      MSG_WriteBit0(msg);
      MSG_WriteBit0(msg);
      MSG_ClearLastReferencedEntity(msg);
      MSG_WriteEntityIndex(&snapInfo, msg, 2047, 11);
      MSG_ClearLastReferencedEntity(msg);
      MSG_WriteBit0(msg);
      MSG_ClearLastReferencedEntity(msg);
      MSG_WriteBit0(msg);
      G_Glass_WriteEndOfGlassMarker(msg);
      ScriptableMsg_WriteSnapshotNoData(&snapInfo, msg);
      if ( !comWorld.isInUse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_bsp_api.h", 141, ASSERT_TYPE_ASSERT, "(Com_IsWorldLoaded())", (const char *)&queryFormat, "Com_IsWorldLoaded()") )
        __debugbreak();
      if ( comWorld.numUmbraGates )
        MSG_WriteBit0(msg);
      if ( g_svSnapshotData.scriptedCameraCount )
      {
        if ( g_svSnapshotData.scriptedCameraCount != 1 )
        {
          LODWORD(outLastServerTimea) = 1;
          LODWORD(outLastFrameb) = g_svSnapshotData.scriptedCameraCount;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 3547, ASSERT_TYPE_ASSERT, "( g_svSnapshotData.scriptedCameraCount ) == ( 1 )", "g_svSnapshotData.scriptedCameraCount == 1\n\t%i, %i", outLastFrameb, outLastServerTimea) )
            __debugbreak();
        }
        MSG_WriteBit0(msg);
      }
      goto LABEL_377;
    }
    snapDelta.oldServerTime = 0;
    snapDelta.oldTimeDelta = 0;
    if ( clientSnapInfoa->hasAckedBaseline )
    {
      if ( v60 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 4767, ASSERT_TYPE_ASSERT, "( !( snapFlags & (1<<3) ) )", (const char *)&queryFormat, "!( snapFlags & SNAPFLAG_BASELINE )") )
        __debugbreak();
      if ( v35 )
      {
        v78 = v35->serverTime;
        v79 = (unsigned int)p_m_baselineFrame->serverTime;
        v80 = v35->serverEntries.m_count[9];
        from_umbraGatesFirstIndex = v35->serverEntries.m_first[9];
        snapDelta.oldTimeDelta = v35->timeDelta;
        snapDelta.newTimeDelta = p_m_baselineFrame->timeDelta;
        clientNum = v80;
        snapDelta.snapshotType = HALF;
        snapDelta.oldServerTime = v78;
        snapDelta.newServerTime = v79;
        if ( v78 == (_DWORD)v79 )
          Com_PrintError(15, "SV_WriteSnapshotToClient: Delta encoding for the same server time %d. DeltaTime %d\n", v79, (unsigned int)p_m_baselineFrame->ps.deltaTime);
      }
      else
      {
        if ( g_svSnapshotData.nextNoDeltaEntity != g_svSnapshotData.nextNoDeltaEntityClientMask )
        {
          LODWORD(outLastServerTimea) = g_svSnapshotData.nextNoDeltaEntityClientMask;
          LODWORD(outLastFrameb) = g_svSnapshotData.nextNoDeltaEntity;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 4789, ASSERT_TYPE_ASSERT, "( g_svSnapshotData.nextNoDeltaEntity ) == ( g_svSnapshotData.nextNoDeltaEntityClientMask )", "g_svSnapshotData.nextNoDeltaEntity == g_svSnapshotData.nextNoDeltaEntityClientMask\n\t%i, %i", outLastFrameb, outLastServerTimea) )
            __debugbreak();
        }
        snapDelta.newServerTime = p_m_baselineFrame->serverTime;
        snapDelta.newTimeDelta = p_m_baselineFrame->timeDelta;
        clientNum = 1;
        snapDelta.snapshotType = HALF_HALF;
        if ( !snapInfo.archived )
          SV_LogSnapshotContent(snapInfo.clientNum, "no oldFrame\n");
      }
    }
    else
    {
      if ( !p_m_baselineFrame->baselineSnap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 4749, ASSERT_TYPE_ASSERT, "( frame->baselineSnap )", (const char *)&queryFormat, "frame->baselineSnap") )
        __debugbreak();
      if ( !v60 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 4750, ASSERT_TYPE_ASSERT, "( snapFlags & (1<<3) )", (const char *)&queryFormat, "snapFlags & SNAPFLAG_BASELINE") )
        __debugbreak();
      if ( v35 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 4751, ASSERT_TYPE_ASSERT, "( oldframe == nullptr )", (const char *)&queryFormat, "oldframe == nullptr") )
        __debugbreak();
      snapDelta.newServerTime = p_m_baselineFrame->serverTime;
      snapDelta.newTimeDelta = p_m_baselineFrame->timeDelta;
      clientNum = 0;
      from_umbraGatesFirstIndex = 0i64;
      snapDelta.snapshotType = LONG;
      if ( !snapInfo.archived )
        SV_LogSnapshotContent(snapInfo.clientNum, "localClient->hasAckedBaselineData: false\n");
    }
    if ( v35 )
      p_scores = &v35->scores;
    else
      p_scores = NULL;
    MSG_WriteDeltaScoreboard(&snapInfo, msg, snapInfo.serverTime, p_scores, &p_m_baselineFrame->scores);
    if ( !snapInfo.archived )
      SV_LogSnapshotContent(snapInfo.clientNum, "%d bytes written (after SV_EmitPacketScoreboard)\n", (unsigned int)msg->cursize);
    v82 = MSG_GetUsedBitCount(msg);
    v147 = (v82 - v151) / 8;
    if ( v60 )
    {
      v83 = SV_Client_GetMpClientIndex(client);
      if ( !SV_BotIsBot(v83) && !SV_ClientMP_IsTestClient(v83) )
        Com_Printf(15, "[Snapshot] Sending %i bytes of %s deltas in a BASELINE snapshot to '%s'\n", (unsigned int)v147, "scoreboard", client->name);
    }
    if ( v35 )
      p_streamSync = &v35->streamSync;
    else
      p_streamSync = NULL;
    SV_StreamSync_WriteDeltaSnapshots(snapInfo.clientNum, msg, p_streamSync, &p_m_baselineFrame->streamSync);
    if ( !snapInfo.archived )
      SV_LogSnapshotContent(snapInfo.clientNum, "%d bytes written (after SV_EmitPacketStreamSync)\n", (unsigned int)msg->cursize);
    v147 = MSG_GetUsedBitCount(msg);
    v85 = (v147 - v82) / 8;
    if ( v60 )
    {
      v86 = SV_Client_GetMpClientIndex(client);
      if ( !SV_BotIsBot(v86) && !SV_ClientMP_IsTestClient(v86) )
        Com_Printf(15, "[Snapshot] Sending %i bytes of %s deltas in a BASELINE snapshot to '%s'\n", v85, "streamSync", client->name);
    }
    v87 = snapInfo.clientNum;
    bitsUsedPrev = snapInfo.clientNum;
    if ( v35 )
    {
      omnvarsPerClientCount = g_svSnapshotData.omnvarsPerClientCount;
      if ( g_svSnapshotData.nextOmnvarsIdx[snapInfo.clientNum] - v35->omnvarsIdx <= g_svSnapshotData.omnvarsPerClientCount )
      {
LABEL_286:
        if ( g_svSnapshotData.nextOmnvarsIdx[v87] - p_m_baselineFrame->omnvarsIdx > omnvarsPerClientCount )
        {
          LODWORD(v136) = omnvarsPerClientCount;
          LODWORD(result) = p_m_baselineFrame->omnvarsIdx;
          LODWORD(outLastServerTimea) = g_svSnapshotData.nextOmnvarsIdx[v87];
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 3561, ASSERT_TYPE_ASSERT, "(g_svSnapshotData.nextOmnvarsIdx[clientNum] - frame->omnvarsIdx <= g_svSnapshotData.omnvarsPerClientCount)", "%s\n\tnew omnvar frame has fallen out of the ringbuffer %d - %d <= %d", "g_svSnapshotData.nextOmnvarsIdx[clientNum] - frame->omnvarsIdx <= g_svSnapshotData.omnvarsPerClientCount", outLastServerTimea, result, v136) )
            __debugbreak();
        }
        if ( v35 )
        {
          omnvars = g_svSnapshotData.omnvars;
          omnvarsIdx = v35->omnvarsIdx;
          Defaults = &omnvars[BG_Omnvar_PerSnapCount() * (omnvarsIdx % g_svSnapshotData.omnvarsPerClientCount + g_svSnapshotData.omnvarsPerClientCount * bitsUsedPrev)];
        }
        else
        {
          Defaults = (OmnvarData *)BG_Omnvar_GetDefaults();
        }
        v92 = g_svSnapshotData.omnvars;
        v93 = p_m_baselineFrame->omnvarsIdx;
        fromOmnvars = Defaults;
        v94 = BG_Omnvar_PerSnapCount();
        MSG_WriteDeltaOmnvars(&snapInfo, msg, snapInfo.serverTime, fromOmnvars, &v92[v94 * (v93 % g_svSnapshotData.omnvarsPerClientCount + g_svSnapshotData.omnvarsPerClientCount * bitsUsedPrev)]);
        if ( !snapInfo.archived )
          SV_LogSnapshotContent(snapInfo.clientNum, "%d bytes written (after SV_EmitPacketOmnvars)\n", (unsigned int)msg->cursize);
        v95 = MSG_GetUsedBitCount(msg);
        v147 = (v95 - v147) / 8;
        if ( v60 )
        {
          v96 = SV_Client_GetMpClientIndex(client);
          if ( !SV_BotIsBot(v96) && !SV_ClientMP_IsTestClient(v96) )
            Com_Printf(15, "[Snapshot] Sending %i bytes of %s deltas in a BASELINE snapshot to '%s'\n", (unsigned int)v147, "omnvar", client->name);
        }
        SV_EmitPacketMLGSpectatorInfo(&snapInfo, msg, v35, p_m_baselineFrame);
        v97 = MSG_GetUsedBitCount(msg);
        v145 = v97;
        v98 = (v97 - v95) / 8;
        if ( v60 )
        {
          v99 = SV_Client_GetMpClientIndex(client);
          if ( !SV_BotIsBot(v99) && !SV_ClientMP_IsTestClient(v99) )
            Com_Printf(15, "[Snapshot] Sending %i bytes of %s deltas in a BASELINE snapshot to '%s'\n", v98, "mlgSpectator", client->name);
          v97 = v145;
        }
        if ( !(unsigned __int8)SV_SnapshotMP_EmitClientMessageEntities(&snapDelta, &snapInfo, msg, msga, v35, p_m_baselineFrame) )
          v152->addEntitiesFailed = 1;
        if ( !snapInfo.archived )
          SV_LogSnapshotContent(snapInfo.clientNum, "%d bytes written (after SV_SnapshotMP_EmitClientMessageEntities)\n", (unsigned int)msg->cursize);
        v147 = MSG_GetUsedBitCount(msg);
        v100 = (v147 - v97) / 8;
        if ( v60 )
        {
          v101 = SV_Client_GetMpClientIndex(client);
          if ( !SV_BotIsBot(v101) && !SV_ClientMP_IsTestClient(v101) )
            Com_Printf(15, "[Snapshot] Sending %i bytes of %s deltas in a BASELINE snapshot to '%s'\n", v100, "entity", client->name);
        }
        v102 = msga;
        snapInfo.entJustUnlinked = 0;
        snapInfo.packetEntityType = ANALYZE_DATATYPE_ENTITYTYPE_ETYPE_COUNT;
        if ( msga )
        {
          Bits = MSG_ReadBits(msga, 0x14u);
          v104 = truncate_cast<unsigned int,__int64>(Bits);
          if ( v104 )
          {
            SV_BandwidthProfile_CopyServerMsgClientsToClientSnapshot(&snapInfo);
            MSG_CopyBits(msg, v102, v104);
            goto LABEL_320;
          }
        }
        else
        {
          if ( v35 )
            p_serverEntries = &v35->serverEntries;
          else
            p_serverEntries = NULL;
          if ( !SV_SnapshotMP_EmitMessageClients(&snapDelta, &snapInfo, msg, p_serverEntries, &p_m_baselineFrame->serverEntries) )
          {
LABEL_319:
            v152->buildMessageFailed = 1;
LABEL_320:
            if ( !snapInfo.archived )
              SV_LogSnapshotContent(snapInfo.clientNum, "%d bytes written (after SV_SnapshotMP_EmitClientMessageClients)\n", (unsigned int)msg->cursize);
            bitsUsedPrev = MSG_GetUsedBitCount(msg);
            v106 = (bitsUsedPrev - v147) / 8;
            if ( v60 )
            {
              v107 = SV_Client_GetMpClientIndex(client);
              if ( !SV_BotIsBot(v107) && !SV_ClientMP_IsTestClient(v107) )
                Com_Printf(15, "[Snapshot] Sending %i bytes of %s deltas in a BASELINE snapshot to '%s'\n", v106, "client", client->name);
            }
            v108 = msga;
            snapInfo.packetEntityType = ANALYZE_DATATYPE_ENTITYTYPE_AGENTSTATE;
            if ( msga )
            {
              v109 = MSG_ReadBits(msga, 0x11u);
              v110 = truncate_cast<unsigned int,__int64>(v109);
              if ( v110 )
              {
                SV_BandwidthProfile_CopyServerMsgAgentsToClientSnapshot(&snapInfo);
                MSG_CopyBits(msg, v108, v110);
LABEL_335:
                if ( !snapInfo.archived )
                  SV_LogSnapshotContent(snapInfo.clientNum, "%d bytes written (after SV_EmitPacketAgents)\n", (unsigned int)msg->cursize);
                v112 = MSG_GetUsedBitCount(msg);
                v147 = (v112 - bitsUsedPrev) / 8;
                if ( v60 )
                {
                  v113 = SV_Client_GetMpClientIndex(client);
                  if ( !SV_BotIsBot(v113) && !SV_ClientMP_IsTestClient(v113) )
                    Com_Printf(15, "[Snapshot] Sending %i bytes of %s deltas in a BASELINE snapshot to '%s'\n", (unsigned int)v147, "agent", client->name);
                }
                v114 = MSG_GetUsedBitCount(msg);
                if ( v35 )
                  v115 = v35->serverTime;
                else
                  v115 = 0;
                G_Glass_WriteChanges(&snapInfo, msg, v115);
                SV_TrackPacketData(0, ANALYZE_SNAPSHOT_GLASSDATA, 0, 0, v114, msg);
                if ( !snapInfo.archived )
                  SV_LogSnapshotContent(snapInfo.clientNum, "%d bytes written (after SV_EmitPacketGlass)\n", (unsigned int)msg->cursize);
                v116 = MSG_GetUsedBitCount(msg);
                v146 = v116;
                v117 = (v116 - v112) / 8;
                if ( v60 )
                {
                  v118 = SV_Client_GetMpClientIndex(client);
                  if ( !SV_BotIsBot(v118) && !SV_ClientMP_IsTestClient(v118) )
                    Com_Printf(15, "[Snapshot] Sending %i bytes of %s deltas in a BASELINE snapshot to '%s'\n", v117, "glass", client->name);
                  v116 = v146;
                }
                SV_SnapshotMP_EmitClientMessageScriptables(&snapDelta, &snapInfo, msg, v35, p_m_baselineFrame);
                if ( msg->overflowed )
                  v152->buildMessageFailed = 1;
                if ( !snapInfo.archived )
                  SV_LogSnapshotContent(snapInfo.clientNum, "%d bytes written (after SV_EmitPacketScriptableWorld)\n", (unsigned int)msg->cursize);
                v119 = MSG_GetUsedBitCount(msg);
                v147 = (v119 - v116) / 8;
                if ( v60 )
                {
                  v120 = SV_Client_GetMpClientIndex(client);
                  if ( !SV_BotIsBot(v120) && !SV_ClientMP_IsTestClient(v120) )
                    Com_Printf(15, "[Snapshot] Sending %i bytes of %s deltas in a BASELINE snapshot to '%s'\n", (unsigned int)v147, "scriptable world", client->name);
                }
                SV_EmitPacketUmbraGateStateData(&snapInfo, msg, clientNum, from_umbraGatesFirstIndex, v35, p_m_baselineFrame);
                v121 = (MSG_GetUsedBitCount(msg) - v119) / 8;
                if ( v60 )
                {
                  v122 = SV_Client_GetMpClientIndex(client);
                  if ( !SV_BotIsBot(v122) && !SV_ClientMP_IsTestClient(v122) )
                    Com_Printf(15, "[Snapshot] Sending %i bytes of %s deltas in a BASELINE snapshot to '%s'\n", v121, "umbra gate states", client->name);
                }
                if ( !snapInfo.archived )
                  SV_LogSnapshotContent(snapInfo.clientNum, "%d bytes written (after SV_EmitPacketUmbraGateStateData)\n", (unsigned int)msg->cursize);
                if ( g_svSnapshotData.scriptedCameraCount )
                {
                  if ( g_svSnapshotData.scriptedCameraCount != 1 )
                  {
                    LODWORD(outLastServerTimea) = 1;
                    LODWORD(outLastFramec) = g_svSnapshotData.scriptedCameraCount;
                    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 3534, ASSERT_TYPE_ASSERT, "( g_svSnapshotData.scriptedCameraCount ) == ( 1 )", "g_svSnapshotData.scriptedCameraCount == 1\n\t%i, %i", outLastFramec, outLastServerTimea) )
                      __debugbreak();
                  }
                  CommandState = G_FrontEndScene_GetCommandState();
                  MSG_WriteBit1(msg);
                  MSG_WriteData(msg, CommandState, 128);
                }
                if ( !snapInfo.archived )
                  SV_LogSnapshotContent(snapInfo.clientNum, "%d bytes written (after SV_EmitPacketScriptedCamera)\n", (unsigned int)msg->cursize);
                v124 = MSG_GetUsedBitCount(msg);
                v125 = (v124 - UsedBitCount) / 8;
                if ( v60 )
                {
                  v126 = SV_Client_GetMpClientIndex(client);
                  if ( !SV_BotIsBot(v126) && !SV_ClientMP_IsTestClient(v126) )
                    Com_Printf(15, "[Snapshot] Sending %i bytes of %s deltas in a BASELINE snapshot to '%s'\n", v125, "TOTAL", client->name);
                }
                v77 = writeFullSnap;
LABEL_377:
                if ( !v35 && clientSnapInfoa->hasAckedBaseline && SV_SnapshotMP_PrintForcedNoDelta(client) )
                  Com_Printf(15, "[Snapshot] %s's no-delta snapshot was %i bytes\n", client->name, (unsigned int)msg->cursize);
                isInKillcam = client->isInKillcam;
                v128 = MSG_GetUsedBitCount(msg);
                SV_BandwidthProfile_EndSnapshot(&snapInfo, v128, v77, v137, isInKillcam, v152);
                return;
              }
            }
            else
            {
              if ( v35 )
                v111 = &v35->serverEntries;
              else
                v111 = NULL;
              if ( !SV_SnapshotMP_EmitMessageAgents(&snapDelta, &snapInfo, msg, v111, &p_m_baselineFrame->serverEntries) )
                goto LABEL_334;
            }
            if ( !msg->overflowed )
              goto LABEL_335;
LABEL_334:
            v152->buildMessageFailed = 1;
            goto LABEL_335;
          }
        }
        if ( !msg->overflowed )
          goto LABEL_320;
        goto LABEL_319;
      }
      LODWORD(result) = v35->omnvarsIdx;
      LODWORD(outLastServerTimea) = g_svSnapshotData.nextOmnvarsIdx[snapInfo.clientNum];
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 3560, ASSERT_TYPE_ASSERT, "(oldframe == 0 || g_svSnapshotData.nextOmnvarsIdx[clientNum] - oldframe->omnvarsIdx <= g_svSnapshotData.omnvarsPerClientCount)", "%s\n\told omnvar frame has fallen out of the ringbuffer %d - %d <= %d", "oldframe == NULL || g_svSnapshotData.nextOmnvarsIdx[clientNum] - oldframe->omnvarsIdx <= g_svSnapshotData.omnvarsPerClientCount", outLastServerTimea, result, g_svSnapshotData.omnvarsPerClientCount) )
        __debugbreak();
    }
    omnvarsPerClientCount = g_svSnapshotData.omnvarsPerClientCount;
    goto LABEL_286;
  }
  if ( writeFullSnap && !v36->hasAckedBaseline && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 4554, ASSERT_TYPE_ASSERT, "( !writeFullSnap || clientSnapInfo->hasAckedBaseline )", (const char *)&queryFormat, "!writeFullSnap || clientSnapInfo->hasAckedBaseline") )
    __debugbreak();
  if ( p_m_baselineFrame->baselineSnap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 4556, ASSERT_TYPE_ASSERT, "( !frame->baselineSnap )", (const char *)&queryFormat, "!frame->baselineSnap") )
    __debugbreak();
  if ( p_m_baselineFrame->serverEntries.m_first[0] == -10000000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 4557, ASSERT_TYPE_ASSERT, "( frame->serverEntries.GetFirst( SvSnapshotBufferType::ENTITIES ) != NODELTA_ENTINDEX_OFFSET )", (const char *)&queryFormat, "frame->serverEntries.GetFirst( SvSnapshotBufferType::ENTITIES ) != NODELTA_ENTINDEX_OFFSET") )
    __debugbreak();
  from_umbraGatesFirstIndex = 0x7FFFFFFFi64;
  if ( p_m_baselineFrame->serverEntries.m_first[8] == 0x7FFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 4558, ASSERT_TYPE_ASSERT, "( frame->serverEntries.GetFirst( SvSnapshotBufferType::WEAPONS ) != 0x7FFFFFFF )", (const char *)&queryFormat, "frame->serverEntries.GetFirst( SvSnapshotBufferType::WEAPONS ) != WEAPON_SNAPSHOT_NODELTA") )
    __debugbreak();
  if ( p_m_baselineFrame->serverEntries.m_first[6] == 0x7FFFFFFFFFFFFFFFi64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 4559, ASSERT_TYPE_ASSERT, "( frame->serverEntries.GetFirst( SvSnapshotBufferType::SCRIPTABLE_INSTANCES ) != SCRIPTABLE_SNAPSHOT_NODELTA_INDEX )", (const char *)&queryFormat, "frame->serverEntries.GetFirst( SvSnapshotBufferType::SCRIPTABLE_INSTANCES ) != SCRIPTABLE_SNAPSHOT_NODELTA_INDEX") )
    __debugbreak();
  if ( p_m_baselineFrame->serverEntries.m_first[7] == 0x7FFFFFFFFFFFFFFFi64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 4560, ASSERT_TYPE_ASSERT, "( frame->serverEntries.GetFirst( SvSnapshotBufferType::SCRIPTABLE_PARTS ) != SCRIPTABLE_SNAPSHOT_NODELTA_INDEX )", (const char *)&queryFormat, "frame->serverEntries.GetFirst( SvSnapshotBufferType::SCRIPTABLE_PARTS ) != SCRIPTABLE_SNAPSHOT_NODELTA_INDEX") )
    __debugbreak();
  if ( !v35 && !g_svSnapshotData.hasNoDeltaPlayerData[clientNum] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 4561, ASSERT_TYPE_ASSERT, "((oldframe != nullptr) || g_svSnapshotData.hasNoDeltaPlayerData[clientNum])", "%s\n\tNeed to send no-delta snapshot but no-delta player data is not available", "(oldframe != nullptr) || g_svSnapshotData.hasNoDeltaPlayerData[clientNum]") )
    __debugbreak();
  if ( !writeFullSnap || SvSnapshotEntries::HasValidEntries(&p_m_baselineFrame->serverEntries, 1) )
  {
    if ( v35 )
      v48 = 0;
    else
      v48 = client->netchan.outgoingSequence;
    v47 = clientNum;
    v46 = clientSnapInfoa;
    goto LABEL_151;
  }
  LODWORD(result) = (unsigned __int8)p_m_baselineFrame->serverEntries.m_storageType;
  LODWORD(outLastServerTimea) = p_m_baselineFrame->serverTime;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 4567, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Not sending snapshot to client %s for time %d and storageType %d, server buffers are too small to store even a single frame.\n", client->name, outLastServerTimea, result) )
LABEL_74:
    __debugbreak();
}

/*
==============
SV_Snapshot_GetFullBufferCounts
==============
*/
void SV_Snapshot_GetFullBufferCounts(unsigned int *outEntryCount, const unsigned int packetBackupCount, const unsigned int packetTransientStorageInterval, const unsigned int clientCount, const unsigned int agentCount, const ScriptableInitLimits *scriptableInitLimits, const bool useMoreEntities)
{
  unsigned int v11; 
  unsigned int v12; 
  unsigned int v13; 
  unsigned int v14; 
  int v15; 
  unsigned int v16; 
  unsigned int v17; 
  int v18; 

  if ( !outEntryCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 567, ASSERT_TYPE_ASSERT, "( outEntryCount )", (const char *)&queryFormat, "outEntryCount") )
    __debugbreak();
  v11 = (clientCount + 3) >> 2;
  v12 = (useMoreEntities + 1) << 10;
  v13 = v11 + 1;
  v14 = packetBackupCount / (packetTransientStorageInterval + 1);
  v15 = v14 * (v11 + 1);
  *outEntryCount = v14 * (v12 + 400 * v11);
  v16 = v14 * (v12 + 400 * v11) * (v12 - 256) / v12;
  outEntryCount[4] = clientCount * v15;
  outEntryCount[1] = v16;
  outEntryCount[2] = v16;
  outEntryCount[5] = agentCount * v15;
  v17 = 0;
  if ( g_svSnapshotData.useNetfieldLoD )
    v17 = clientCount * v14 * (v11 + 1);
  outEntryCount[3] = v17;
  outEntryCount[6] = v14 * scriptableInitLimits->replicatedInstanceLimit * v13;
  outEntryCount[7] = v14 * v13 * scriptableInitLimits->replicatedPartLimit;
  if ( !BgWeaponMap::ms_runtimeSizeInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_map.h", 228, ASSERT_TYPE_ASSERT, "(ms_runtimeSizeInitialized)", (const char *)&queryFormat, "ms_runtimeSizeInitialized") )
    __debugbreak();
  v18 = v13 * BgWeaponMap::ms_runtimeSize;
  outEntryCount[9] = v15;
  outEntryCount[8] = v14 * v18;
}

/*
==============
SV_Snapshot_HandleOverflow
==============
*/
void SV_Snapshot_HandleOverflow(const char *shutdownString, const char *specificReason)
{
  char dest[1024]; 

  if ( !shutdownString && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 2029, ASSERT_TYPE_ASSERT, "(shutdownString)", (const char *)&queryFormat, "shutdownString") )
    __debugbreak();
  if ( specificReason && *specificReason )
    Com_sprintf_truncate<1024>((char (*)[1024])dest, "%s%s%s", shutdownString, (const char *)&stru_1440115A4, specificReason);
  else
    Core_strcpy_truncate(dest, 0x400ui64, shutdownString);
  Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&queryFormat, dest);
}

/*
==============
SV_SnapshptMP_GetBinaryCommandPayloadSize
==============
*/
__int64 SV_SnapshptMP_GetBinaryCommandPayloadSize(const char *command)
{
  if ( !command && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 5038, ASSERT_TYPE_ASSERT, "( command )", (const char *)&queryFormat, "command") )
    __debugbreak();
  if ( *command != 89 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 5039, ASSERT_TYPE_ASSERT, "( command[0] == 'Y' )", (const char *)&queryFormat, "command[0] == SVSCMD_BINARY_COMMAND") )
    __debugbreak();
  return *((unsigned __int16 *)command + 1);
}

/*
==============
SV_UpdateEntityCountLogging
==============
*/
void SV_UpdateEntityCountLogging(unsigned int entityCount)
{
  if ( entityCount <= 0x320 )
  {
    if ( entityCount <= 0x2BC )
    {
      if ( entityCount <= 0x258 )
      {
        if ( entityCount <= 0x1F4 )
        {
          if ( entityCount <= 0x190 )
          {
            if ( entityCount <= 0x12C )
            {
              if ( entityCount <= 0xC8 )
                ++s_entityCountLoggingArray[0];
              else
                ++s_entityCountLoggingArray[1];
            }
            else
            {
              LODWORD(qword_14E945708) = qword_14E945708 + 1;
            }
          }
          else
          {
            ++HIDWORD(qword_14E945708);
          }
        }
        else
        {
          LODWORD(qword_14E945710) = qword_14E945710 + 1;
        }
      }
      else
      {
        ++HIDWORD(qword_14E945710);
      }
    }
    else
    {
      ++qword_14E945718;
    }
  }
  else
  {
    ++*(&qword_14E945718 + 1);
  }
}

/*
==============
SV_WriteBitsCompress
==============
*/
void SV_WriteBitsCompress(bool trainHuffman, msg_t *msg, unsigned __int8 *compressBuffer, const int compressBufferSize, int *outSize, unsigned __int8 **outData, const unsigned int clientNum)
{
  int *v10; 
  unsigned __int8 **v11; 
  const dvar_t *v12; 
  bool v13; 
  bool v14; 
  char *fmt; 
  __int64 v16; 
  __int64 v17; 

  if ( (*(_DWORD *)msg->data & 0xC0000000) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 5380, ASSERT_TYPE_ASSERT, "(( *( ( uint * )msg->data ) & 0xc0000000u ) == 0)", "%s\n\tOverflow into compression bits", "( *( ( uint * )msg->data ) & USE_COMPRESSION_MASK ) == 0") )
    __debugbreak();
  v10 = outSize;
  v11 = outData;
  *outSize = msg->cursize;
  *v11 = msg->data;
  v12 = DCONST_DVARINT_sv_compression_threshold;
  if ( !DCONST_DVARINT_sv_compression_threshold && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sv_compression_threshold") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v12);
  if ( msg->cursize >= v12->current.integer || msg->compressionFlags )
  {
    v13 = SV_CompressBuffer(0, msg, compressBuffer, compressBufferSize, (int *)&outSize);
    v14 = v13 && (int)outSize < msg->cursize;
    LODWORD(v17) = msg->compressionFlags >> 31;
    LODWORD(v16) = (_DWORD)outSize;
    LODWORD(fmt) = msg->cursize;
    SV_BandwidthProfile_RecordEvent(clientNum, "compressBuffer:success %d,usable %d,size %d,compressedSize %d,lz4 %d,clientNum %d", v13, v14, fmt, v16, v17, clientNum);
    if ( v14 )
    {
      *v10 = (int)outSize;
      *v11 = compressBuffer;
    }
    else
    {
      msg->compressionFlags = 0;
    }
  }
}

/*
==============
SV_WriteEndOfUmbraGateStateMarker
==============
*/
void SV_WriteEndOfUmbraGateStateMarker(msg_t *msg)
{
  if ( !comWorld.isInUse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_bsp_api.h", 141, ASSERT_TYPE_ASSERT, "(Com_IsWorldLoaded())", (const char *)&queryFormat, "Com_IsWorldLoaded()") )
    __debugbreak();
  if ( comWorld.numUmbraGates )
    MSG_WriteBit0(msg);
}

/*
==============
SV_WriteServerCommandMessage
==============
*/
void SV_WriteServerCommandMessage(msg_t *msg, const char *command, const int commandIndex, const int clientNum)
{
  char v4; 
  int BinaryCommandPayloadSize; 
  __int64 v10; 
  __int64 v11; 

  v4 = *command;
  MSG_WriteBits(msg, (*command == 89) + 4i64, 4u);
  MSG_WriteLong(msg, commandIndex);
  if ( v4 == 89 )
  {
    BinaryCommandPayloadSize = SV_SnapshptMP_GetBinaryCommandPayloadSize(command);
    v10 = BinaryCommandPayloadSize;
    if ( (BinaryCommandPayloadSize < 1 || (unsigned __int64)BinaryCommandPayloadSize > 0x3FC) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 5069, ASSERT_TYPE_ASSERT, "( 1 ) <= ( commandSize ) && ( commandSize ) <= ( (1024-(2 + sizeof( ushort ))) )", "commandSize not in [1, MAX_BINARY_RELIABLE_COMMAND_LENGTH]\n\t%i not in [%i, %i]", BinaryCommandPayloadSize, 1, 1020) )
      __debugbreak();
    MSG_WriteShort(msg, v10);
    MSG_WriteData(msg, command + 4, v10);
    SV_LogSnapshotContent(clientNum, "Writing svcmd (binary) from index %i (%zu bytes) (%s)\n", (unsigned int)commandIndex, v10 + 11, command + 4);
  }
  else
  {
    MSG_WriteString(msg, command);
    v11 = -1i64;
    while ( command[++v11] != 0 )
      ;
    SV_LogSnapshotContent(clientNum, "Writing svcmd (string) from index  %i (%i bytes) (%s)\n", (unsigned int)commandIndex, (unsigned int)(v11 + 6), command);
  }
}

/*
==============
SvSnapshotFrameBuffers::SaveState
==============
*/
void SvSnapshotFrameBuffers::SaveState(SvSnapshotFrameBuffers *this, MemoryFile *memFile)
{
  int *m_numBufferEntries; 
  __int64 *m_nextBufferIndex; 
  __int64 v5; 
  __int64 p; 

  m_numBufferEntries = this->m_numBufferEntries;
  m_nextBufferIndex = this->m_nextBufferIndex;
  v5 = 10i64;
  do
  {
    p = *m_nextBufferIndex;
    MemFile_WriteData(memFile, 8ui64, &p);
    LODWORD(p) = *m_numBufferEntries;
    MemFile_WriteData(memFile, 4ui64, &p);
    ++m_nextBufferIndex;
    ++m_numBufferEntries;
    --v5;
  }
  while ( v5 );
}

/*
==============
SvSnapshotFrameBuffers::SetCapacity
==============
*/
void SvSnapshotFrameBuffers::SetCapacity(SvSnapshotFrameBuffers *this, const SvSnapshotBufferType type, const unsigned int count)
{
  __int64 v3; 
  int v7; 

  v3 = type;
  if ( (unsigned int)type >= 0xA )
  {
    v7 = 10;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 466, ASSERT_TYPE_ASSERT, "(unsigned)( typeIndex ) < (unsigned)( ( sizeof( *array_counter( m_numBufferEntries ) ) + 0 ) )", "typeIndex doesn't index ARRAY_COUNT( m_numBufferEntries )\n\t%i not in [0, %i)", type, v7) )
      __debugbreak();
  }
  if ( this->m_bufferData[v3] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 468, ASSERT_TYPE_ASSERT, "( m_bufferData[typeIndex] == nullptr )", (const char *)&queryFormat, "m_bufferData[typeIndex] == nullptr") )
    __debugbreak();
  this->m_numBufferEntries[v3] = count;
}

/*
==============
SvSnapshotFrameBuffers::ShutdownBuffers
==============
*/
void SvSnapshotFrameBuffers::ShutdownBuffers(SvSnapshotFrameBuffers *this)
{
  memset_0(this, 0, 0x50ui64);
}

/*
==============
ServerEntityHeader::TrackNumFieldsSkipped
==============
*/
void ServerEntityHeader::TrackNumFieldsSkipped(ServerEntityHeader *this, const int fieldsSkipped)
{
  int v2; 

  v2 = fieldsSkipped;
  if ( (fieldsSkipped < 0 || (unsigned int)fieldsSkipped > 0xFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned char __cdecl truncate_cast_impl<unsigned char,int>(int)", "unsigned", (unsigned __int8)fieldsSkipped, "signed", fieldsSkipped) )
    __debugbreak();
  this->m_totalFieldsSkipped += v2;
  ++this->m_totalTimesSkipped;
  if ( v2 > 68 )
    v2 = 68;
  ++*((_BYTE *)&this->m_totalBits[1] + v2 + 1);
}

/*
==============
ServerEntityHeader::Write
==============
*/
ServerEntityHeader *ServerEntityHeader::Write(msg_t *const msg)
{
  __int64 cursize; 
  int v3; 
  unsigned __int8 *v4; 
  ServerEntityHeader *result; 

  if ( !msg && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 6182, ASSERT_TYPE_ASSERT, "( msg != nullptr )", (const char *)&queryFormat, "msg != nullptr") )
    __debugbreak();
  MSG_WriteAlign(msg);
  cursize = msg->cursize;
  v3 = cursize + 80;
  v4 = &msg->data[cursize];
  msg->cursize = v3;
  MSG_WriteAlign(msg);
  if ( msg->cursize <= msg->maxsize )
  {
    *(_QWORD *)v4 = 0i64;
    return (ServerEntityHeader *)v4;
  }
  else
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.cpp", 6194, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Could not write entity header to message -- overflow\n") )
      __debugbreak();
    msg->cursize = msg->maxsize;
    result = NULL;
    msg->overflowed = 1;
  }
  return result;
}


/*
==============
SV_SnapWorkersMP_UpdateScriptableAcknowledge
==============
*/

void __fastcall SV_SnapWorkersMP_UpdateScriptableAcknowledge(const SvClientMP *const client, const unsigned int clientIndex)
{
  ?SV_SnapWorkersMP_UpdateScriptableAcknowledge@@YAXQEBVSvClientMP@@I@Z(client, clientIndex);
}

/*
==============
SV_SnapWorkersMP_ArchiveSnapshotEncodeWeaponMapCmd
==============
*/

void __fastcall SV_SnapWorkersMP_ArchiveSnapshotEncodeWeaponMapCmd(const void *const cmdInfo)
{
  ?SV_SnapWorkersMP_ArchiveSnapshotEncodeWeaponMapCmd@@YAXQEBX@Z(cmdInfo);
}

/*
==============
SV_SnapWorkersMP_ArchiveSnapshotAddPOTGArchiveCmd
==============
*/

void __fastcall SV_SnapWorkersMP_ArchiveSnapshotAddPOTGArchiveCmd(const void *const cmdInfo)
{
  ?SV_SnapWorkersMP_ArchiveSnapshotAddPOTGArchiveCmd@@YAXQEBX@Z(cmdInfo);
}

/*
==============
SV_SnapWorkersMP_WaitSnapshotWorkers
==============
*/

void SV_SnapWorkersMP_WaitSnapshotWorkers(void)
{
  ?SV_SnapWorkersMP_WaitSnapshotWorkers@@YAXXZ();
}

/*
==============
SV_SnapWorkersMP_StartBuildDeferedClientMessages
==============
*/

void SV_SnapWorkersMP_StartBuildDeferedClientMessages(void)
{
  ?SV_SnapWorkersMP_StartBuildDeferedClientMessages@@YAXXZ();
}

/*
==============
SV_SnapWorkersMP_StartBuildClientSnapshots
==============
*/

void __fastcall SV_SnapWorkersMP_StartBuildClientSnapshots(const BuildServerSnapshotsCmd *const requestCurrentCmd, const BuildServerSnapshotsCmd *const requestArchivedCmd)
{
  ?SV_SnapWorkersMP_StartBuildClientSnapshots@@YAXQEBUBuildServerSnapshotsCmd@@0@Z(requestCurrentCmd, requestArchivedCmd);
}

/*
==============
SV_SnapWorkersMP_StartBuildCurrentServerSnapshots
==============
*/

void __fastcall SV_SnapWorkersMP_StartBuildCurrentServerSnapshots(BuildServerSnapshotsCmd *cmd)
{
  ?SV_SnapWorkersMP_StartBuildCurrentServerSnapshots@@YAXPEAUBuildServerSnapshotsCmd@@@Z(cmd);
}

/*
==============
SV_SnapWorkersMP_FinishSnapshotArchiveEncode
==============
*/

void SV_SnapWorkersMP_FinishSnapshotArchiveEncode(void)
{
  ?SV_SnapWorkersMP_FinishSnapshotArchiveEncode@@YAXXZ();
}

/*
==============
SV_SnapWorkersMP_BuildArchivedServerSnapshotForClientCmd
==============
*/

void __fastcall SV_SnapWorkersMP_BuildArchivedServerSnapshotForClientCmd(const void *const cmdInfo)
{
  ?SV_SnapWorkersMP_BuildArchivedServerSnapshotForClientCmd@@YAXQEBX@Z(cmdInfo);
}

/*
==============
SV_SnapWorkersMP_SetSnapshotBuildError
==============
*/

void __fastcall SV_SnapWorkersMP_SetSnapshotBuildError(const char *errorMsg)
{
  ?SV_SnapWorkersMP_SetSnapshotBuildError@@YAXPEBD@Z(errorMsg);
}

/*
==============
SV_SnapWorkersMP_ArchiveSnapshotCachePlayerStateCmd
==============
*/

void __fastcall SV_SnapWorkersMP_ArchiveSnapshotCachePlayerStateCmd(const void *const cmdInfo)
{
  ?SV_SnapWorkersMP_ArchiveSnapshotCachePlayerStateCmd@@YAXQEBX@Z(cmdInfo);
}

/*
==============
SV_SnapWorkersMP_StartSnapshotPOTGArchiveSave
==============
*/

void SV_SnapWorkersMP_StartSnapshotPOTGArchiveSave(void)
{
  ?SV_SnapWorkersMP_StartSnapshotPOTGArchiveSave@@YAXXZ();
}

/*
==============
SV_SnapWorkersMP_ArchiveSnapshotAddArchiveCmd
==============
*/

void __fastcall SV_SnapWorkersMP_ArchiveSnapshotAddArchiveCmd(const void *const cmdInfo)
{
  ?SV_SnapWorkersMP_ArchiveSnapshotAddArchiveCmd@@YAXQEBX@Z(cmdInfo);
}

/*
==============
SV_SnapWorkersMP_FinishSnapshotArchiveAdd
==============
*/

void SV_SnapWorkersMP_FinishSnapshotArchiveAdd(void)
{
  ?SV_SnapWorkersMP_FinishSnapshotArchiveAdd@@YAXXZ();
}

/*
==============
SV_SnapWorkersMP_UpdateBaselineAcknowledge
==============
*/

void __fastcall SV_SnapWorkersMP_UpdateBaselineAcknowledge(SvClientMP *const client, const int currentTime, const int snapTime)
{
  ?SV_SnapWorkersMP_UpdateBaselineAcknowledge@@YAXQEAVSvClientMP@@HH@Z(client, currentTime, snapTime);
}

/*
==============
SV_SnapWorkersMP_BuildClientMessageCmd
==============
*/

void __fastcall SV_SnapWorkersMP_BuildClientMessageCmd(const void *const cmdInfo)
{
  ?SV_SnapWorkersMP_BuildClientMessageCmd@@YAXQEBX@Z(cmdInfo);
}

/*
==============
SV_SnapWorkersMP_InitSnapshotBuildWorkers
==============
*/

void __fastcall SV_SnapWorkersMP_InitSnapshotBuildWorkers(bool *outClientHasMessage, BuildServerSnapshotsCmd *outCmdCurrent, BuildServerSnapshotsCmd *outCmdArchived)
{
  ?SV_SnapWorkersMP_InitSnapshotBuildWorkers@@YAXQEA_NPEAUBuildServerSnapshotsCmd@@1@Z(outClientHasMessage, outCmdCurrent, outCmdArchived);
}

/*
==============
SV_SnapWorkersMP_BuildServerMessageCmd
==============
*/

void __fastcall SV_SnapWorkersMP_BuildServerMessageCmd(const void *const cmdInfo)
{
  ?SV_SnapWorkersMP_BuildServerMessageCmd@@YAXQEBX@Z(cmdInfo);
}

/*
==============
SV_SnapWorkersMP_FinishSnapshotWorkers
==============
*/

void SV_SnapWorkersMP_FinishSnapshotWorkers(void)
{
  ?SV_SnapWorkersMP_FinishSnapshotWorkers@@YAXXZ();
}

/*
==============
SV_SnapWorkersMP_FinishBuildCurrentSnapshots
==============
*/

void SV_SnapWorkersMP_FinishBuildCurrentSnapshots(void)
{
  ?SV_SnapWorkersMP_FinishBuildCurrentSnapshots@@YAXXZ();
}

/*
==============
SV_SnapWorkersMP_IsBaselineExpected
==============
*/

bool __fastcall SV_SnapWorkersMP_IsBaselineExpected(const int clientIndex)
{
  return ?SV_SnapWorkersMP_IsBaselineExpected@@YA_NH@Z(clientIndex);
}

/*
==============
SV_SnapWorkersMP_ArchiveSnapshotEncodeWorldStateCmd
==============
*/

void __fastcall SV_SnapWorkersMP_ArchiveSnapshotEncodeWorldStateCmd(const void *const cmdInfo)
{
  ?SV_SnapWorkersMP_ArchiveSnapshotEncodeWorldStateCmd@@YAXQEBX@Z(cmdInfo);
}

/*
==============
SV_SnapWorkersMP_InitSnapshotWorkers
==============
*/

void SV_SnapWorkersMP_InitSnapshotWorkers(void)
{
  ?SV_SnapWorkersMP_InitSnapshotWorkers@@YAXXZ();
}

/*
==============
SV_SnapWorkersMP_StartSnapshotArchiveEncode
==============
*/

void SV_SnapWorkersMP_StartSnapshotArchiveEncode(void)
{
  ?SV_SnapWorkersMP_StartSnapshotArchiveEncode@@YAXXZ();
}

/*
==============
SV_SnapWorkersMP_StartBuildArchivedServerSnapshots
==============
*/

void __fastcall SV_SnapWorkersMP_StartBuildArchivedServerSnapshots(BuildServerSnapshotsCmd *cmd)
{
  ?SV_SnapWorkersMP_StartBuildArchivedServerSnapshots@@YAXPEAUBuildServerSnapshotsCmd@@@Z(cmd);
}

/*
==============
SV_SnapWorkersMP_GetSnapshotSizeEstimate
==============
*/

int __fastcall SV_SnapWorkersMP_GetSnapshotSizeEstimate(const int clientIndex)
{
  return ?SV_SnapWorkersMP_GetSnapshotSizeEstimate@@YAHH@Z(clientIndex);
}

/*
==============
SV_SnapWorkersMP_BuildSnapshotForClientCmd
==============
*/

void __fastcall SV_SnapWorkersMP_BuildSnapshotForClientCmd(const void *const cmdInfo)
{
  ?SV_SnapWorkersMP_BuildSnapshotForClientCmd@@YAXQEBX@Z(cmdInfo);
}

/*
==============
SV_SnapWorkersMP_ArchiveSnapshotEncodePlayerStateCmd
==============
*/

void __fastcall SV_SnapWorkersMP_ArchiveSnapshotEncodePlayerStateCmd(const void *const cmdInfo)
{
  ?SV_SnapWorkersMP_ArchiveSnapshotEncodePlayerStateCmd@@YAXQEBX@Z(cmdInfo);
}

/*
==============
SV_SnapWorkersMP_WaitSnapshotArchiveAddWorkers
==============
*/

void SV_SnapWorkersMP_WaitSnapshotArchiveAddWorkers(void)
{
  ?SV_SnapWorkersMP_WaitSnapshotArchiveAddWorkers@@YAXXZ();
}

/*
==============
SV_SnapWorkersMP_StartSnapshotArchiveAdd
==============
*/

void SV_SnapWorkersMP_StartSnapshotArchiveAdd(void)
{
  ?SV_SnapWorkersMP_StartSnapshotArchiveAdd@@YAXXZ();
}

/*
==============
SV_SnapWorkersMP_BuildCurrentServerSnapshotForClientCmd
==============
*/

void __fastcall SV_SnapWorkersMP_BuildCurrentServerSnapshotForClientCmd(const void *const cmdInfo)
{
  ?SV_SnapWorkersMP_BuildCurrentServerSnapshotForClientCmd@@YAXQEBX@Z(cmdInfo);
}

/*
==============
SV_SnapWorkersMP_ArchiveSnapshotAddArchiveCmd
==============
*/
void SV_SnapWorkersMP_ArchiveSnapshotAddArchiveCmd(const void *const cmdInfo)
{
  volatile int v2; 
  int v3; 

  SV_Timing_StartWorkerContext();
  if ( !g_svSnapshotData.snapArchiveEncodeError )
  {
    if ( s_archivePlayerStateSize > 0x10000 )
    {
      v3 = 0x10000;
      v2 = s_archivePlayerStateSize;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_workers_mp.cpp", 1678, ASSERT_TYPE_ASSERT, "( s_archivePlayerStateSize ) <= ( 65536 )", "s_archivePlayerStateSize not in [0, MAX_SNAPSHOT_MSGLEN_PLAYERSTATE]\n\t%u not in [0, %u]", v2, v3) )
        __debugbreak();
    }
    g_svSnapshotData.snapArchiveCommitError = !SV_SnapshotMP_ArchiveSnapshotAddToArchive(g_svSnapshotData.archivePlayerStateMsgData, s_archivePlayerStateSize, (const SVSnapshotArchiveEncodeData *)cmdInfo, (const SVSnapshotArchiveEncodeData *)cmdInfo + 1);
  }
  SV_Timing_EndWorkerContext();
}

/*
==============
SV_SnapWorkersMP_ArchiveSnapshotAddPOTGArchiveCmd
==============
*/
void SV_SnapWorkersMP_ArchiveSnapshotAddPOTGArchiveCmd(const void *const cmdInfo)
{
  SV_Timing_StartWorkerContext();
  SV_SnapshotMP_ArchiveSavePOTG(*(_DWORD *)cmdInfo);
  SV_Timing_EndWorkerContext();
}

/*
==============
SV_SnapWorkersMP_ArchiveSnapshotCachePlayerStateCmd
==============
*/
void SV_SnapWorkersMP_ArchiveSnapshotCachePlayerStateCmd(const void *const cmdInfo)
{
  __int64 archivePlayerStateCacheBuffer; 
  const cachedSnapshotPlayerState_t *v3; 
  cachedPlayerState_t *v4; 
  cachedPlayerState_t *v5; 
  unsigned int v6; 
  SvClient *CommonClient; 
  __int64 v8; 
  __int64 v9; 

  SV_Timing_StartWorkerContext();
  if ( !cmdInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_workers_mp.cpp", 1604, ASSERT_TYPE_ASSERT, "( cmd != nullptr )", (const char *)&queryFormat, "cmd != nullptr") )
    __debugbreak();
  if ( *(_DWORD *)cmdInfo >= g_svSnapshotData.numCachedSnapshotPlayerStatesWrite )
  {
    LODWORD(v8) = *(_DWORD *)cmdInfo;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_workers_mp.cpp", 1605, ASSERT_TYPE_ASSERT, "(unsigned)( cmd->clientIndex ) < (unsigned)( g_svSnapshotData.numCachedSnapshotPlayerStatesWrite )", "cmd->clientIndex doesn't index g_svSnapshotData.numCachedSnapshotPlayerStatesWrite\n\t%i not in [0, %i)", v8, g_svSnapshotData.numCachedSnapshotPlayerStatesWrite) )
      __debugbreak();
  }
  archivePlayerStateCacheBuffer = g_svSnapshotData.archivePlayerStateCacheBuffer;
  if ( g_svSnapshotData.archivePlayerStateCacheBuffer >= (unsigned int)CACHED_SNAP_PLAYERSTATE_COUNT )
  {
    LODWORD(v9) = 2;
    LODWORD(v8) = g_svSnapshotData.archivePlayerStateCacheBuffer;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_workers_mp.cpp", 1608, ASSERT_TYPE_ASSERT, "(unsigned)( writeFrameIndex ) < (unsigned)( ( sizeof( *array_counter( g_svSnapshotData.cachedSnapshotPlayerStatesWrite ) ) + 0 ) )", "writeFrameIndex doesn't index ARRAY_COUNT( g_svSnapshotData.cachedSnapshotPlayerStatesWrite )\n\t%i not in [0, %i)", v8, v9) )
      __debugbreak();
  }
  v3 = &g_svSnapshotData.cachedSnapshotPlayerStateFramesWrite[archivePlayerStateCacheBuffer];
  if ( ((0x80000000 >> (*(_BYTE *)cmdInfo & 0x1F)) & v3->playerStateValid[(unsigned __int64)*(unsigned int *)cmdInfo >> 5]) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_workers_mp.cpp", 1611, ASSERT_TYPE_ASSERT, "( writeFrameCache->playerStateValid[cmd->clientIndex >> 5] & BitShiftMasked( cmd->clientIndex ) )", (const char *)&queryFormat, "writeFrameCache->playerStateValid[cmd->clientIndex >> 5] & BitShiftMasked( cmd->clientIndex )") )
    __debugbreak();
  v4 = g_svSnapshotData.cachedSnapshotPlayerStatesWrite[archivePlayerStateCacheBuffer];
  if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_workers_mp.cpp", 1614, ASSERT_TYPE_ASSERT, "( writeFramePlayerStates != nullptr )", (const char *)&queryFormat, "writeFramePlayerStates != nullptr") )
    __debugbreak();
  v5 = &v4[*(unsigned int *)cmdInfo];
  if ( !SV_SnapshotArchiveMP_WriteCachedPlayerState(*(_DWORD *)cmdInfo, v3, v5) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_workers_mp.cpp", 1618, ASSERT_TYPE_ASSERT, "(SV_SnapshotArchiveMP_WriteCachedPlayerState( cmd->clientIndex, writeFrameCache, toCachedPs ))", (const char *)&queryFormat, "SV_SnapshotArchiveMP_WriteCachedPlayerState( cmd->clientIndex, writeFrameCache, toCachedPs )") )
    __debugbreak();
  v6 = *(_DWORD *)cmdInfo;
  if ( (_BYTE)SvClient::ms_allocatedType != HALF_HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.h", 957, ASSERT_TYPE_ASSERT, "( ms_allocatedType == ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == ALLOCATION_TYPE") )
    __debugbreak();
  CommonClient = SvClient::GetCommonClient(v6);
  if ( SV_SnapshotArchiveMP_WriteCachedPlayerStateTransforms(*(_DWORD *)cmdInfo, v5, (vec3_t *)&CommonClient[1116].state, (vec3_t *)((char *)&CommonClient[1116].lastUsercmd.buttons + 4)) )
    HIDWORD(CommonClient[1116].__vftable) = 1;
  SV_Timing_EndWorkerContext();
}

/*
==============
SV_SnapWorkersMP_ArchiveSnapshotEncodePlayerStateCmd
==============
*/
void SV_SnapWorkersMP_ArchiveSnapshotEncodePlayerStateCmd(const void *const cmdInfo)
{
  __int64 archivePlayerStateCacheBuffer; 
  int archivePlayerStateCacheTime; 
  cachedPlayerState_t *v4; 
  unsigned __int64 v5; 
  const cachedPlayerState_t *v6; 
  const cachedPlayerState_t *v7; 
  __int64 v8; 
  int cursize; 
  signed __int32 v10; 
  __int64 v11; 
  __int64 v12; 
  msg_t buf; 
  unsigned __int8 data[148448]; 

  SV_Timing_StartWorkerContext();
  if ( !cmdInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_workers_mp.cpp", 1557, ASSERT_TYPE_ASSERT, "( cmd != nullptr )", (const char *)&queryFormat, "cmd != nullptr") )
    __debugbreak();
  if ( *(_DWORD *)cmdInfo >= g_svSnapshotData.numCachedSnapshotPlayerStatesWrite )
  {
    LODWORD(v11) = *(_DWORD *)cmdInfo;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_workers_mp.cpp", 1558, ASSERT_TYPE_ASSERT, "(unsigned)( cmd->clientIndex ) < (unsigned)( g_svSnapshotData.numCachedSnapshotPlayerStatesWrite )", "cmd->clientIndex doesn't index g_svSnapshotData.numCachedSnapshotPlayerStatesWrite\n\t%i not in [0, %i)", v11, g_svSnapshotData.numCachedSnapshotPlayerStatesWrite) )
      __debugbreak();
  }
  archivePlayerStateCacheBuffer = g_svSnapshotData.archivePlayerStateCacheBuffer;
  archivePlayerStateCacheTime = g_svSnapshotData.archivePlayerStateCacheTime;
  if ( g_svSnapshotData.archivePlayerStateCacheBuffer >= (unsigned int)CACHED_SNAP_PLAYERSTATE_COUNT )
  {
    LODWORD(v12) = 2;
    LODWORD(v11) = g_svSnapshotData.archivePlayerStateCacheBuffer;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_workers_mp.cpp", 1562, ASSERT_TYPE_ASSERT, "(unsigned)( writeFrameIndex ) < (unsigned)( ( sizeof( *array_counter( g_svSnapshotData.cachedSnapshotPlayerStatesWrite ) ) + 0 ) )", "writeFrameIndex doesn't index ARRAY_COUNT( g_svSnapshotData.cachedSnapshotPlayerStatesWrite )\n\t%i not in [0, %i)", v11, v12) )
      __debugbreak();
  }
  v4 = g_svSnapshotData.cachedSnapshotPlayerStatesWrite[archivePlayerStateCacheBuffer];
  if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_workers_mp.cpp", 1565, ASSERT_TYPE_ASSERT, "( writeFramePlayerStates != nullptr )", (const char *)&queryFormat, "writeFramePlayerStates != nullptr") )
    __debugbreak();
  v5 = *(unsigned int *)cmdInfo;
  v6 = NULL;
  v7 = &v4[v5];
  if ( (_DWORD)archivePlayerStateCacheBuffer == 1 && ((0x80000000 >> (v5 & 0x1F)) & g_svSnapshotData.cachedSnapshotPlayerStateFramesWrite[0].playerStateValid[v5 >> 5]) != 0 )
    v6 = &g_svSnapshotData.cachedSnapshotPlayerStatesWrite[0][v5];
  MSG_Init(&buf, data, 148440);
  if ( !SV_SnapshotArchiveMP_EncodeCachedPlayerState(&buf, *(_DWORD *)cmdInfo, archivePlayerStateCacheTime, v6, v7) )
    goto LABEL_25;
  v8 = *(unsigned int *)cmdInfo;
  if ( (unsigned int)v8 >= g_svSnapshotData.archive.archivedPlayerStatesPerFrameCount )
  {
    LODWORD(v12) = g_svSnapshotData.archive.archivedPlayerStatesPerFrameCount;
    LODWORD(v11) = *(_DWORD *)cmdInfo;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_workers_mp.cpp", 1527, ASSERT_TYPE_ASSERT, "(unsigned)( clientIndex ) < (unsigned)( g_svSnapshotData.archive.archivedPlayerStatesPerFrameCount )", "clientIndex doesn't index g_svSnapshotData.archive.archivedPlayerStatesPerFrameCount\n\t%i not in [0, %i)", v11, v12) )
      __debugbreak();
  }
  cursize = buf.cursize;
  if ( ((unsigned __int8)&s_archivePlayerStateSize & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 79, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", (const void *)&s_archivePlayerStateSize) )
    __debugbreak();
  v10 = _InterlockedExchangeAdd(&s_archivePlayerStateSize, cursize);
  if ( buf.cursize + v10 <= 0x10000 )
  {
    memcpy_0(&g_svSnapshotData.archivePlayerStateMsgData[v10], buf.data, buf.cursize);
    g_svSnapshotData.archivePlayerStateOffsetData[v8] = v10;
  }
  else
  {
LABEL_25:
    g_svSnapshotData.snapArchiveEncodeError = 1;
  }
  SV_Timing_EndWorkerContext();
}

/*
==============
SV_SnapWorkersMP_ArchiveSnapshotEncodeWeaponMapCmd
==============
*/
void SV_SnapWorkersMP_ArchiveSnapshotEncodeWeaponMapCmd(const void *const cmdInfo)
{
  bool snapArchiveEncodeError; 

  SV_Timing_StartWorkerContext();
  MSG_Init(*(msg_t **)cmdInfo, *((unsigned __int8 **)cmdInfo + 2), *((_DWORD *)cmdInfo + 6));
  SV_SnapshotMP_ArchiveSnapshotEncodeWeaponMap(*(msg_t **)cmdInfo, *((bool **)cmdInfo + 1));
  snapArchiveEncodeError = g_svSnapshotData.snapArchiveEncodeError;
  if ( **(_DWORD **)cmdInfo )
    snapArchiveEncodeError = 1;
  g_svSnapshotData.snapArchiveEncodeError = snapArchiveEncodeError;
  SV_Timing_EndWorkerContext();
}

/*
==============
SV_SnapWorkersMP_ArchiveSnapshotEncodeWorldStateCmd
==============
*/
void SV_SnapWorkersMP_ArchiveSnapshotEncodeWorldStateCmd(const void *const cmdInfo)
{
  bool snapArchiveEncodeError; 

  SV_Timing_StartWorkerContext();
  MSG_Init(*(msg_t **)cmdInfo, *((unsigned __int8 **)cmdInfo + 2), *((_DWORD *)cmdInfo + 6));
  SV_SnapshotMP_ArchiveSnapshotEncodeWorldState(*(msg_t **)cmdInfo, *((bool **)cmdInfo + 1));
  snapArchiveEncodeError = g_svSnapshotData.snapArchiveEncodeError;
  if ( **(_DWORD **)cmdInfo )
    snapArchiveEncodeError = 1;
  g_svSnapshotData.snapArchiveEncodeError = snapArchiveEncodeError;
  SV_Timing_EndWorkerContext();
}

/*
==============
SV_SnapWorkersMP_BuildArchivedServerSnapshotForClientCmd
==============
*/
void SV_SnapWorkersMP_BuildArchivedServerSnapshotForClientCmd(const void *const cmdInfo)
{
  unsigned int v2; 
  __int64 v3; 
  unsigned int v4; 
  unsigned int v5; 
  int v6; 
  BuildServerSnapRequest *v7; 
  const serverSnapshot_t *ExistingServerSnapshot; 
  __int64 v9; 
  __int64 v10; 

  if ( !g_svSnapshotData.snapBuildRequests && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_workers_mp.cpp", 1322, ASSERT_TYPE_ASSERT, "( g_svSnapshotData.snapBuildRequests != nullptr )", (const char *)&queryFormat, "g_svSnapshotData.snapBuildRequests != nullptr") )
    __debugbreak();
  if ( g_svSnapshotData.numSnapBuildRequests > g_svSnapshotData.maxSnapBuildRequests )
  {
    LODWORD(v9) = g_svSnapshotData.numSnapBuildRequests;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_workers_mp.cpp", 1323, ASSERT_TYPE_ASSERT, "( g_svSnapshotData.numSnapBuildRequests ) <= ( g_svSnapshotData.maxSnapBuildRequests )", "g_svSnapshotData.numSnapBuildRequests not in [0, g_svSnapshotData.maxSnapBuildRequests]\n\t%u not in [0, %u]", v9, g_svSnapshotData.maxSnapBuildRequests) )
      __debugbreak();
  }
  Profile_Begin(328);
  SV_Timing_StartWorkerContext();
  v2 = *((_DWORD *)cmdInfo + 3);
  LODWORD(v3) = 0;
  while ( v2 )
  {
LABEL_11:
    v4 = __lzcnt(v2);
    v5 = v4 + 32 * v3;
    if ( v4 >= 0x20 )
    {
      LODWORD(v10) = 32;
      LODWORD(v9) = v4;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_bitops.h", 104, ASSERT_TYPE_ASSERT, "(unsigned)( count ) < (unsigned)( 32 )", "count doesn't index 32\n\t%i not in [0, %i)", v9, v10) )
        __debugbreak();
    }
    if ( (v2 & (0x80000000 >> v4)) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarrayiterator.h", 76, ASSERT_TYPE_ASSERT, "(iter->bits & bit)", (const char *)&queryFormat, "iter->bits & bit") )
      __debugbreak();
    v2 &= ~(0x80000000 >> v4);
    if ( v5 >= g_svSnapshotData.numSnapBuildRequests )
    {
      LODWORD(v10) = g_svSnapshotData.numSnapBuildRequests;
      LODWORD(v9) = v4 + 32 * v3;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_workers_mp.cpp", 1334, ASSERT_TYPE_ASSERT, "(unsigned)( requestIndex ) < (unsigned)( g_svSnapshotData.numSnapBuildRequests )", "requestIndex doesn't index g_svSnapshotData.numSnapBuildRequests\n\t%i not in [0, %i)", v9, v10) )
        __debugbreak();
    }
    v6 = *(_DWORD *)cmdInfo;
    v7 = &g_svSnapshotData.snapBuildRequests[v5];
    if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_workers_mp.cpp", 898, ASSERT_TYPE_ASSERT, "( snapshotRequested )", (const char *)&queryFormat, "snapshotRequested") )
      __debugbreak();
    ExistingServerSnapshot = SV_SnapWorkersMP_FindExistingServerSnapshot(&v7->buildInfo);
    if ( SV_BuildClientSnapshot_IsInvalidFrame(ExistingServerSnapshot) )
    {
      if ( ExistingServerSnapshot )
      {
        g_svSnapshotData.serverSnapshotTimes[((char *)ExistingServerSnapshot - (char *)&g_svSnapshotData) >> 7] = 0;
        SV_BuildClientSnapshot_PrintIsInvalidFrame(ExistingServerSnapshot, v7->buildInfo.serverTime);
      }
      if ( !SV_BuildServerSnapshot_SaveSnapshotForArchivedTime(v6, &v7->buildInfo) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_workers_mp.cpp", 911, ASSERT_TYPE_ASSERT, "(SV_BuildServerSnapshot_SaveSnapshotForArchivedTime( serverTime, snapshotRequested ))", (const char *)&queryFormat, "SV_BuildServerSnapshot_SaveSnapshotForArchivedTime( serverTime, snapshotRequested )") )
        __debugbreak();
      ExistingServerSnapshot = SV_SnapWorkersMP_FindExistingServerSnapshot(&v7->buildInfo);
    }
    if ( ExistingServerSnapshot )
    {
      if ( !g_svSnapshotData.snapBuildError )
      {
        if ( g_svSnapshotData.snapServerMessageBuild )
          SV_SnapWorkersMP_BuildServerMessagesFromServerSnap(ExistingServerSnapshot, v7);
        else
          SV_SnapWorkersMP_BuildClientMessagesFromServerSnap(ExistingServerSnapshot, v7);
      }
    }
    else
    {
      LODWORD(v9) = v7->buildInfo.serverTime;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_workers_mp.cpp", 1343, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Failed to build snapshot for server time: %d", v9) )
        __debugbreak();
    }
  }
  while ( 1 )
  {
    v3 = (unsigned int)(v3 + 1);
    if ( (unsigned int)v3 >= 7 )
      break;
    v2 = *((_DWORD *)cmdInfo + v3 + 3);
    if ( v2 )
      goto LABEL_11;
  }
  SV_Timing_EndWorkerContext();
  Profile_EndInternal(NULL);
}

/*
==============
SV_SnapWorkersMP_BuildClientMessageCmd
==============
*/
void SV_SnapWorkersMP_BuildClientMessageCmd(const void *const cmdInfo)
{
  __int64 v2; 
  BuildClientMessageRequest *v3; 
  SvClientMP *CommonClient; 
  int v5; 
  int currentPacketBuiltEvent; 
  BuildClientMessageFlags buildFlags; 
  bool v8; 
  bool v9; 
  unsigned int clientIndex; 
  bool v11; 
  SvGameGlobalsMP *SvGameGlobalsMP; 
  msg_t *v13; 
  unsigned int v14; 
  bool v15; 
  bool v16; 
  msg_t msg; 
  ClientSnapshotInfo snapshotInfo; 
  SvWriteSnapshotResult outResult; 
  unsigned __int8 snapshotMsgBuf[148448]; 

  Profile_Begin(335);
  SV_Timing_StartWorkerContext();
  v2 = *(unsigned int *)cmdInfo;
  v3 = &g_svSnapshotData.clientMsgRequest[v2];
  if ( (_BYTE)SvClient::ms_allocatedType != HALF_HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.h", 957, ASSERT_TYPE_ASSERT, "( ms_allocatedType == ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == ALLOCATION_TYPE") )
    __debugbreak();
  CommonClient = (SvClientMP *)SvClient::GetCommonClient(v2);
  if ( !g_svSnapshotData.clientMsgRequest && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_workers_mp.cpp", 1440, ASSERT_TYPE_ASSERT, "( g_svSnapshotData.clientMsgRequest )", (const char *)&queryFormat, "g_svSnapshotData.clientMsgRequest") )
    __debugbreak();
  if ( *(_DWORD *)cmdInfo >= g_svSnapshotData.numClientMessages )
  {
    LODWORD(v13) = *(_DWORD *)cmdInfo;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_workers_mp.cpp", 1441, ASSERT_TYPE_ASSERT, "(unsigned)( cmd->clientIndex ) < (unsigned)( g_svSnapshotData.numClientMessages )", "cmd->clientIndex doesn't index g_svSnapshotData.numClientMessages\n\t%i not in [0, %i)", v13, g_svSnapshotData.numClientMessages) )
      __debugbreak();
  }
  v5 = 0;
  CommonClient->buildMessageFailed = 0;
  currentPacketBuiltEvent = 0;
  if ( !v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_workers_mp.cpp", 922, ASSERT_TYPE_ASSERT, "( buildRequest )", (const char *)&queryFormat, "buildRequest") )
    __debugbreak();
  memset_0(&snapshotInfo, 0, sizeof(snapshotInfo));
  buildFlags = v3->buildFlags;
  v15 = (buildFlags & 0x10) != 0;
  v8 = (buildFlags & 8) != 0;
  v9 = (buildFlags & 0x20) != 0;
  v16 = (buildFlags & 0x40) != 0;
  clientIndex = v3->clientIndex;
  v11 = (buildFlags & 0x80) != 0;
  v14 = v3->clientIndex;
  if ( (_BYTE)SvClient::ms_allocatedType != HALF_HALF )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.h", 957, ASSERT_TYPE_ASSERT, "( ms_allocatedType == ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == ALLOCATION_TYPE") )
      __debugbreak();
    clientIndex = v14;
  }
  snapshotInfo.client = (SvClientMP *)SvClient::GetCommonClient(clientIndex);
  snapshotInfo.connState = v3->connState;
  snapshotInfo.serverTime = v3->serverTime;
  snapshotInfo.deltaMessage = v3->deltaMessage;
  snapshotInfo.commandAcknowledge = v3->commandSequence;
  snapshotInfo.reliableAcknowledge = v3->reliableAcknowledge;
  snapshotInfo.reliableSequence = v3->reliableSequence;
  snapshotInfo.hasAckedBaseline = v15;
  snapshotInfo.useFastAdjustTime = v16;
  snapshotInfo.noDeltaCmd = v11;
  snapshotInfo.isLargeSnap = v9;
  snapshotInfo.isCompressedSnap = v8;
  snapshotInfo.isDemoBaseline = 0;
  snapshotInfo.serverMessageIndex = v3->serverMessageIndex;
  snapshotInfo.serverMessageSize = v3->serverMessageSize;
  SV_SnapshotMP_RecordDemoMessage(CommonClient, &snapshotInfo, snapshotMsgBuf);
  SV_EnablePacketData();
  SV_SnapshotMP_BeginClientSnapshot(&snapshotInfo, &msg, snapshotMsgBuf);
  if ( ((v3->connState - 1) & 0xFB) == 0 )
  {
    SV_SnapshotMP_WriteSnapshotToClient(&snapshotInfo, (v3->buildFlags & 1) == 0, &msg, &outResult);
    SvWriteSnapshotResult::CopyToClient(&outResult, CommonClient);
    currentPacketBuiltEvent = outResult.currentPacketBuiltEvent;
  }
  SV_SnapshotMP_EndClientSnapshot(&snapshotInfo, &msg, snapshotMsgBuf);
  SV_DisablePacketData();
  if ( msg.overflowed )
  {
    CommonClient->buildMessageFailed = 1;
  }
  else
  {
    v5 = SV_SnapshotMP_SendMessageToClient(CommonClient, v3->serverTime, v3->deterministicPacketTime, v3->connState == CS_ACTIVE, v3->throttled, &msg);
    CommonClient->sendMessageError = v5;
    CommonClient->demoWriteMessage = 1;
  }
  SvGameGlobalsMP = SvGameGlobalsMP::GetSvGameGlobalsMP();
  SvBandwidthLimiter::Track(&SvGameGlobalsMP->bandwidthLimiter, v5 - CommonClient->snapshotSizeEstimate);
  if ( !CommonClient->noDeltaSequence && currentPacketBuiltEvent )
    SV_LogBandwidthEvent((BandwidthMonitoringEventTypes)currentPacketBuiltEvent, CommonClient, v3->serverTime);
  SV_Timing_EndWorkerContext();
  Profile_EndInternal(NULL);
}

/*
==============
SV_SnapWorkersMP_BuildClientMessagesFromServerSnap
==============
*/
void SV_SnapWorkersMP_BuildClientMessagesFromServerSnap(const serverSnapshot_t *const serverSnap, const BuildServerSnapRequest *const buildRequest)
{
  __int64 clientCount; 
  __int64 v5; 
  __int64 v6; 
  const BuildClientMessageRequest *v7; 

  if ( !serverSnap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_workers_mp.cpp", 1246, ASSERT_TYPE_ASSERT, "( serverSnap )", (const char *)&queryFormat, "serverSnap") )
    __debugbreak();
  if ( !buildRequest && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_workers_mp.cpp", 1247, ASSERT_TYPE_ASSERT, "( buildRequest )", (const char *)&queryFormat, "buildRequest") )
    __debugbreak();
  clientCount = buildRequest->clientCount;
  if ( buildRequest->clientCount )
  {
    v5 = 0i64;
    do
    {
      v6 = buildRequest->clients[v5];
      v7 = &g_svSnapshotData.clientMsgRequest[v6];
      SV_SnapWorkersMP_BuildClientSnapshotFromServerSnap(v6, serverSnap, buildRequest);
      SV_SnapWorkersMP_StartClientMessageBuild(v7);
      ++v5;
    }
    while ( v5 < clientCount );
  }
}

/*
==============
SV_SnapWorkersMP_BuildClientSnapshotFromServerSnap
==============
*/
clientSnapshot_t *SV_SnapWorkersMP_BuildClientSnapshotFromServerSnap(const int clientIndex, const serverSnapshot_t *const serverSnap, const BuildServerSnapRequest *const buildRequest)
{
  __int64 v3; 
  SvClient *CommonClient; 
  SvSnapshotIdentifier buildInfo; 
  SvClientMP *v8; 
  clientSnapshot_t *UnsentSnapshotForSequence; 
  __int64 v11; 
  SvSnapshotIdentifier snapInfo; 

  v3 = clientIndex;
  if ( !buildRequest && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_workers_mp.cpp", 1037, ASSERT_TYPE_ASSERT, "( buildRequest != nullptr )", (const char *)&queryFormat, "buildRequest != nullptr") )
    __debugbreak();
  if ( (unsigned int)((int)v3 >> 5) >= 7 )
  {
    LODWORD(v11) = (int)v3 >> 5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_workers_mp.cpp", 1038, ASSERT_TYPE_ASSERT, "(unsigned)( clientIndex >> 5 ) < (unsigned)( ( sizeof( *array_counter( buildRequest->clientTransientMask ) ) + 0 ) )", "clientIndex >> 5 doesn't index ARRAY_COUNT( buildRequest->clientTransientMask )\n\t%i not in [0, %i)", v11, 7) )
      __debugbreak();
  }
  if ( (_BYTE)SvClient::ms_allocatedType != HALF_HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.h", 957, ASSERT_TYPE_ASSERT, "( ms_allocatedType == ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == ALLOCATION_TYPE") )
    __debugbreak();
  CommonClient = SvClient::GetCommonClient(v3);
  buildInfo = buildRequest->buildInfo;
  snapInfo = buildRequest->buildInfo;
  v8 = (SvClientMP *)CommonClient;
  if ( ((0x80000000 >> (v3 & 0x1F)) & buildRequest->clientTransientMask[v3 >> 5]) != 0 )
  {
    snapInfo.storageType = TRANSIENT;
  }
  else if ( buildInfo.storageType )
  {
    LODWORD(v11) = (unsigned __int8)buildInfo.storageType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_workers_mp.cpp", 1049, ASSERT_TYPE_ASSERT, "( clientBuildInfo.storageType ) == ( SvSnapshotStorageType::FULL )", "clientBuildInfo.storageType == SvSnapshotStorageType::FULL\n\t%i, %i", v11, 0i64) )
      __debugbreak();
  }
  UnsentSnapshotForSequence = SvClientMP::GetUnsentSnapshotForSequence(v8, v8->netchan.outgoingSequence);
  SV_BuildClientSnapshot_PopulateClientSnapWithServerSnap(v3, serverSnap, &snapInfo, UnsentSnapshotForSequence);
  return UnsentSnapshotForSequence;
}

/*
==============
SV_SnapWorkersMP_BuildCurrentServerSnapshotForClientCmd
==============
*/
void SV_SnapWorkersMP_BuildCurrentServerSnapshotForClientCmd(const void *const cmdInfo)
{
  unsigned int v2; 
  __int64 v3; 
  unsigned int v4; 
  unsigned int v5; 
  int v6; 
  BuildServerSnapRequest *v7; 
  const serverSnapshot_t *ExistingServerSnapshot; 
  __int64 v9; 
  __int64 v10; 

  if ( !g_svSnapshotData.snapBuildRequests && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_workers_mp.cpp", 1269, ASSERT_TYPE_ASSERT, "( g_svSnapshotData.snapBuildRequests != nullptr )", (const char *)&queryFormat, "g_svSnapshotData.snapBuildRequests != nullptr") )
    __debugbreak();
  if ( g_svSnapshotData.numSnapBuildRequests > g_svSnapshotData.maxSnapBuildRequests )
  {
    LODWORD(v9) = g_svSnapshotData.numSnapBuildRequests;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_workers_mp.cpp", 1270, ASSERT_TYPE_ASSERT, "( g_svSnapshotData.numSnapBuildRequests ) <= ( g_svSnapshotData.maxSnapBuildRequests )", "g_svSnapshotData.numSnapBuildRequests not in [0, g_svSnapshotData.maxSnapBuildRequests]\n\t%u not in [0, %u]", v9, g_svSnapshotData.maxSnapBuildRequests) )
      __debugbreak();
  }
  Profile_Begin(327);
  SV_Timing_StartWorkerContext();
  v2 = *((_DWORD *)cmdInfo + 3);
  LODWORD(v3) = 0;
  while ( v2 )
  {
LABEL_11:
    v4 = __lzcnt(v2);
    v5 = v4 + 32 * v3;
    if ( v4 >= 0x20 )
    {
      LODWORD(v10) = 32;
      LODWORD(v9) = v4;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_bitops.h", 104, ASSERT_TYPE_ASSERT, "(unsigned)( count ) < (unsigned)( 32 )", "count doesn't index 32\n\t%i not in [0, %i)", v9, v10) )
        __debugbreak();
    }
    if ( (v2 & (0x80000000 >> v4)) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarrayiterator.h", 76, ASSERT_TYPE_ASSERT, "(iter->bits & bit)", (const char *)&queryFormat, "iter->bits & bit") )
      __debugbreak();
    v2 &= ~(0x80000000 >> v4);
    if ( v5 >= g_svSnapshotData.numSnapBuildRequests )
    {
      LODWORD(v10) = g_svSnapshotData.numSnapBuildRequests;
      LODWORD(v9) = v4 + 32 * v3;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_workers_mp.cpp", 1281, ASSERT_TYPE_ASSERT, "(unsigned)( requestIndex ) < (unsigned)( g_svSnapshotData.numSnapBuildRequests )", "requestIndex doesn't index g_svSnapshotData.numSnapBuildRequests\n\t%i not in [0, %i)", v9, v10) )
        __debugbreak();
    }
    v6 = *(_DWORD *)cmdInfo;
    v7 = &g_svSnapshotData.snapBuildRequests[v5];
    if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_workers_mp.cpp", 872, ASSERT_TYPE_ASSERT, "( snapshotRequested )", (const char *)&queryFormat, "snapshotRequested") )
      __debugbreak();
    ExistingServerSnapshot = SV_SnapWorkersMP_FindExistingServerSnapshot(&v7->buildInfo);
    if ( SV_BuildClientSnapshot_IsInvalidFrame(ExistingServerSnapshot) )
    {
      if ( ExistingServerSnapshot )
      {
        g_svSnapshotData.serverSnapshotTimes[((char *)ExistingServerSnapshot - (char *)&g_svSnapshotData) >> 7] = 0;
        SV_BuildClientSnapshot_PrintIsInvalidFrame(ExistingServerSnapshot, v7->buildInfo.serverTime);
      }
      SV_BuildServerSnapshot_SaveSnapshotForTime(v6, &v7->buildInfo);
      ExistingServerSnapshot = SV_SnapWorkersMP_FindExistingServerSnapshot(&v7->buildInfo);
    }
    if ( ExistingServerSnapshot )
    {
      if ( !g_svSnapshotData.snapBuildError )
      {
        if ( g_svSnapshotData.snapServerMessageBuild )
          SV_SnapWorkersMP_BuildServerMessagesFromServerSnap(ExistingServerSnapshot, v7);
        else
          SV_SnapWorkersMP_BuildClientMessagesFromServerSnap(ExistingServerSnapshot, v7);
      }
    }
    else
    {
      LODWORD(v9) = v7->buildInfo.serverTime;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_workers_mp.cpp", 1290, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Failed to build snapshot for server time: %d", v9) )
        __debugbreak();
    }
  }
  while ( 1 )
  {
    v3 = (unsigned int)(v3 + 1);
    if ( (unsigned int)v3 >= 7 )
      break;
    v2 = *((_DWORD *)cmdInfo + v3 + 3);
    if ( v2 )
      goto LABEL_11;
  }
  SV_Timing_EndWorkerContext();
  Profile_EndInternal(NULL);
}

/*
==============
SV_SnapWorkersMP_BuildServerMessageCmd
==============
*/
void SV_SnapWorkersMP_BuildServerMessageCmd(const void *const cmdInfo)
{
  __int64 v2; 
  int v3; 
  __int64 v4; 
  char *v5; 
  __int64 v6; 
  BuildClientMessageRequest *v7; 
  __int64 v8; 
  unsigned int outMessageSize; 

  if ( !cmdInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_workers_mp.cpp", 1377, ASSERT_TYPE_ASSERT, "( cmd != nullptr )", (const char *)&queryFormat, "cmd != nullptr") )
    __debugbreak();
  if ( *((_DWORD *)cmdInfo + 121) >= g_svSnapshotData.maxServerMessages )
  {
    LODWORD(v8) = *((_DWORD *)cmdInfo + 121);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_workers_mp.cpp", 1378, ASSERT_TYPE_ASSERT, "(unsigned)( cmd->bufferIndex ) < (unsigned)( g_svSnapshotData.maxServerMessages )", "cmd->bufferIndex doesn't index g_svSnapshotData.maxServerMessages\n\t%i not in [0, %i)", v8, g_svSnapshotData.maxServerMessages) )
      __debugbreak();
  }
  SV_Timing_StartWorkerContext();
  v2 = 0i64;
  if ( SV_SnapshotMP_WriteServerMessage((const SvSnapshotDelta *)cmdInfo, (const SvSnapshotEntries *)((char *)cmdInfo + 24), (const SvSnapshotEntries *)((char *)cmdInfo + 152), *((_DWORD *)cmdInfo + 121), &outMessageSize) )
  {
    v3 = *((_DWORD *)cmdInfo + 121);
    if ( !outMessageSize )
    {
      LODWORD(v8) = 0;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_workers_mp.cpp", 1392, ASSERT_TYPE_ASSERT, "( serverMessageSize ) > ( 0 )", "serverMessageSize > 0\n\t%i, %i", v8, 0i64) )
        __debugbreak();
    }
  }
  else
  {
    v3 = -1;
    outMessageSize = 0;
  }
  v4 = *((unsigned __int8 *)cmdInfo + 480);
  if ( *((_BYTE *)cmdInfo + 480) )
  {
    v5 = (char *)cmdInfo + 280;
    do
    {
      v6 = (unsigned __int8)v5[v2];
      v7 = &g_svSnapshotData.clientMsgRequest[v6];
      if ( (_DWORD)v6 != v7->clientIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_workers_mp.cpp", 1402, ASSERT_TYPE_ASSERT, "( clientIndex == clientBuildRequest->clientIndex )", (const char *)&queryFormat, "clientIndex == clientBuildRequest->clientIndex") )
        __debugbreak();
      v7->serverMessageIndex = v3;
      v7->serverMessageSize = outMessageSize;
      SV_SnapWorkersMP_StartClientMessageBuild(v7);
      ++v2;
    }
    while ( v2 < v4 );
  }
  SV_Timing_EndWorkerContext();
}

/*
==============
SV_SnapWorkersMP_BuildServerMessagesFromServerSnap
==============
*/
void SV_SnapWorkersMP_BuildServerMessagesFromServerSnap(const serverSnapshot_t *const serverSnap, const BuildServerSnapRequest *const buildRequest)
{
  __int64 clientCount; 
  int v5; 
  __int64 v6; 
  __int64 v8; 
  BuildClientMessageRequest *v9; 
  clientSnapshot_t *v10; 
  int newTimeDelta; 
  SvSnapshotStorageType m_storageType; 
  __int64 v24; 
  unsigned __int8 *p_clientCount; 
  int v26; 
  unsigned __int8 *v27; 
  BuildClientMessageRequest *v28; 
  __int64 numBuilders; 
  __int64 numBuildersa; 
  __int64 v31; 
  SvSnapshotDelta outSnapDelta; 
  SvSnapshotEntries outOldEntries; 
  SvSnapshotEntries outNewEntries; 
  BuildServerMessageCmd builders; 

  if ( !serverSnap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_workers_mp.cpp", 1185, ASSERT_TYPE_ASSERT, "( serverSnap )", (const char *)&queryFormat, "serverSnap") )
    __debugbreak();
  if ( !buildRequest && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_workers_mp.cpp", 1186, ASSERT_TYPE_ASSERT, "( buildRequest )", (const char *)&queryFormat, "buildRequest") )
    __debugbreak();
  if ( g_svSnapshotData.maxServerMessages > 10 )
  {
    LODWORD(numBuilders) = g_svSnapshotData.maxServerMessages;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_workers_mp.cpp", 1187, ASSERT_TYPE_ASSERT, "( g_svSnapshotData.maxServerMessages ) <= ( 10 )", "g_svSnapshotData.maxServerMessages not in [0, MAX_SERVER_MESSAGES]\n\t%u not in [0, %u]", numBuilders, 10) )
      __debugbreak();
  }
  clientCount = buildRequest->clientCount;
  v5 = 0;
  if ( buildRequest->clientCount )
  {
    v6 = 0i64;
    _RSI = builders.oldEntries.m_count;
    do
    {
      v8 = buildRequest->clients[v6];
      v9 = &g_svSnapshotData.clientMsgRequest[v8];
      v10 = SV_SnapWorkersMP_BuildClientSnapshotFromServerSnap(buildRequest->clients[v6], serverSnap, buildRequest);
      SV_SnapWorkersMP_GetClientSnapshotDelta(v9, v10, &outSnapDelta, &outOldEntries, &outNewEntries);
      if ( !SV_SnapWorkersMP_FindServerMessageRequest(v8, &outSnapDelta, &outOldEntries, &outNewEntries, &builders, v5) )
      {
        if ( (unsigned int)v8 >= 0xC8 )
        {
          LODWORD(v31) = 200;
          LODWORD(numBuildersa) = v8;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_workers_mp.cpp", 1118, ASSERT_TYPE_ASSERT, "(unsigned)( clientIndex ) < (unsigned)( 200 )", "clientIndex doesn't index MAX_CLIENTS_MP\n\t%i not in [0, %i)", numBuildersa, v31) )
            __debugbreak();
        }
        if ( g_svSnapshotData.maxServerMessages > 10 )
        {
          LODWORD(v31) = 10;
          LODWORD(numBuildersa) = g_svSnapshotData.maxServerMessages;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_workers_mp.cpp", 1120, ASSERT_TYPE_ASSERT, "( g_svSnapshotData.maxServerMessages ) <= ( 10 )", "g_svSnapshotData.maxServerMessages not in [0, MAX_SERVER_MESSAGES]\n\t%u not in [0, %u]", numBuildersa, v31) )
            __debugbreak();
        }
        if ( v5 >= 10 )
        {
          v9->serverMessageIndex = -1;
          v9->serverMessageSize = 0;
          SV_SnapWorkersMP_StartClientMessageBuild(v9);
        }
        else
        {
          __asm { vmovups xmm0, xmmword ptr [rsp+14B8h+outSnapDelta.snapshotType] }
          newTimeDelta = outSnapDelta.newTimeDelta;
          __asm { vmovups xmmword ptr [rsi-70h], xmm0 }
          *(_RSI - 24) = newTimeDelta;
          memset_0(_RSI + 42, 0, 0xC8ui64);
          __asm { vmovups ymm0, ymmword ptr [rsp+14B8h+outOldEntries.m_first] }
          ++v5;
          __asm { vmovups ymm1, ymmword ptr [rsp+14B8h+outOldEntries.m_first+20h] }
          *((_BYTE *)_RSI - 88) = outOldEntries.m_storageType;
          m_storageType = outNewEntries.m_storageType;
          __asm
          {
            vmovups ymmword ptr [rsi-50h], ymm0
            vmovups xmm0, xmmword ptr [rsp+14B8h+outOldEntries.m_first+40h]
            vmovups ymmword ptr [rsi-30h], ymm1
            vmovups ymm1, ymmword ptr [rsp+14B8h+outOldEntries.m_count]
            vmovups xmmword ptr [rsi-10h], xmm0
            vmovsd  xmm0, qword ptr [rsp+14B8h+outOldEntries.m_count+20h]
            vmovups ymmword ptr [rsi], ymm1
            vmovups ymm1, ymmword ptr [rsp+14B8h+outNewEntries.m_first+20h]
            vmovsd  qword ptr [rsi+20h], xmm0
            vmovups ymm0, ymmword ptr [rsp+14B8h+outNewEntries.m_first]
          }
          *((_BYTE *)_RSI + 40) = m_storageType;
          __asm
          {
            vmovups ymmword ptr [rsi+30h], ymm0
            vmovups xmm0, xmmword ptr [rsp+14B8h+outNewEntries.m_first+40h]
            vmovups ymmword ptr [rsi+50h], ymm1
            vmovups ymm1, ymmword ptr [rsp+14B8h+outNewEntries.m_count]
            vmovups xmmword ptr [rsi+70h], xmm0
            vmovsd  xmm0, qword ptr [rsp+14B8h+outNewEntries.m_count+20h]
            vmovups ymmword ptr [rsi+80h], ymm1
            vmovsd  qword ptr [rsi+0A0h], xmm0
          }
          *((_BYTE *)_RSI + 368) = 0;
          *((_BYTE *)_RSI + 168) = v8;
          ++*((_BYTE *)_RSI + 368);
          _RSI += 122;
        }
      }
      ++v6;
    }
    while ( v6 < clientCount );
    if ( v5 > 10 )
    {
      LODWORD(v31) = 10;
      LODWORD(numBuildersa) = v5;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_workers_mp.cpp", 1223, ASSERT_TYPE_ASSERT, "( numServerMessages ) <= ( 10 )", "numServerMessages not in [0, MAX_SERVER_MESSAGES]\n\t%u not in [0, %u]", numBuildersa, v31) )
        __debugbreak();
    }
  }
  v24 = v5;
  if ( v5 > 0i64 )
  {
    p_clientCount = &builders.clientCount;
    do
    {
      if ( !SV_SnapWorkersMP_StartBuildServerMessage((BuildServerMessageCmd *const)(p_clientCount - 480)) )
      {
        v26 = 0;
        if ( *p_clientCount )
        {
          v27 = p_clientCount - 200;
          do
          {
            v28 = &g_svSnapshotData.clientMsgRequest[*v27];
            v28->serverMessageIndex = -1;
            v28->serverMessageSize = 0;
            SV_SnapWorkersMP_StartClientMessageBuild(v28);
            ++v27;
            ++v26;
          }
          while ( v26 < *p_clientCount );
        }
      }
      p_clientCount += 488;
      --v24;
    }
    while ( v24 );
  }
}

/*
==============
SV_SnapWorkersMP_BuildSnapshotForClientCmd
==============
*/
void SV_SnapWorkersMP_BuildSnapshotForClientCmd(const void *const cmdInfo)
{
  unsigned int v2; 
  SvClientMP *CommonClient; 

  SV_Timing_StartWorkerContext();
  v2 = *(_DWORD *)cmdInfo;
  if ( (_BYTE)SvClient::ms_allocatedType != HALF_HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.h", 957, ASSERT_TYPE_ASSERT, "( ms_allocatedType == ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == ALLOCATION_TYPE") )
    __debugbreak();
  CommonClient = (SvClientMP *)SvClient::GetCommonClient(v2);
  SvClientMP::UpdatePing(CommonClient);
  SV_BuildClientSnapshot_InitClientSnapshotForClient(CommonClient, *((_DWORD *)cmdInfo + 1), (const SvSnapshotIdentifier *)cmdInfo + 1);
  SV_Timing_EndWorkerContext();
}

/*
==============
SV_SnapWorkersMP_CreateServerSnapshotRequest
==============
*/
BuildServerSnapRequest *SV_SnapWorkersMP_CreateServerSnapshotRequest(BuildServerSnapshotsCmd *buildCmd, const SvSnapshotIdentifier *requestedBuildInfo)
{
  unsigned __int64 numSnapBuildRequests; 
  BuildServerSnapRequest *v5; 
  int v6; 
  __int64 v8; 
  __int64 v9; 

  if ( !buildCmd && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_workers_mp.cpp", 83, ASSERT_TYPE_ASSERT, "( buildCmd )", (const char *)&queryFormat, "buildCmd") )
    __debugbreak();
  if ( !requestedBuildInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_workers_mp.cpp", 84, ASSERT_TYPE_ASSERT, "( requestedBuildInfo )", (const char *)&queryFormat, "requestedBuildInfo") )
    __debugbreak();
  numSnapBuildRequests = (unsigned int)g_svSnapshotData.numSnapBuildRequests;
  if ( g_svSnapshotData.numSnapBuildRequests >= (unsigned int)g_svSnapshotData.maxSnapBuildRequests )
  {
    LODWORD(v8) = g_svSnapshotData.numSnapBuildRequests;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_workers_mp.cpp", 87, ASSERT_TYPE_ASSERT, "(unsigned)( requestIndex ) < (unsigned)( g_svSnapshotData.maxSnapBuildRequests )", "requestIndex doesn't index g_svSnapshotData.maxSnapBuildRequests\n\t%i not in [0, %i)", v8, g_svSnapshotData.maxSnapBuildRequests) )
      __debugbreak();
  }
  v5 = &g_svSnapshotData.snapBuildRequests[numSnapBuildRequests];
  memset_0(v5, 0, sizeof(BuildServerSnapRequest));
  v5->buildInfo = *requestedBuildInfo;
  buildCmd->snapBuildRequests[numSnapBuildRequests >> 5] |= 0x80000000 >> (numSnapBuildRequests & 0x1F);
  ++buildCmd->snapBuildCount;
  buildCmd->snapTransientCount += requestedBuildInfo->storageType == TRANSIENT;
  v6 = g_svSnapshotData.numSnapBuildRequests + 1;
  g_svSnapshotData.numSnapBuildRequests = v6;
  if ( v6 > g_svSnapshotData.maxSnapBuildRequests )
  {
    LODWORD(v9) = g_svSnapshotData.maxSnapBuildRequests;
    LODWORD(v8) = v6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_workers_mp.cpp", 101, ASSERT_TYPE_ASSERT, "( g_svSnapshotData.numSnapBuildRequests ) <= ( g_svSnapshotData.maxSnapBuildRequests )", "g_svSnapshotData.numSnapBuildRequests not in [0, g_svSnapshotData.maxSnapBuildRequests]\n\t%u not in [0, %u]", v8, v9) )
      __debugbreak();
  }
  return v5;
}

/*
==============
SV_SnapWorkersMP_FindExistingServerSnapshot
==============
*/
serverSnapshot_t *SV_SnapWorkersMP_FindExistingServerSnapshot(const SvSnapshotIdentifier *snapshotRequested)
{
  unsigned int v2; 
  int *i; 
  serverSnapshot_t *v5; 
  __int64 v6; 

  if ( !snapshotRequested && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_workers_mp.cpp", 847, ASSERT_TYPE_ASSERT, "( snapshotRequested )", (const char *)&queryFormat, "snapshotRequested") )
    __debugbreak();
  v2 = 0;
  if ( snapshotRequested->serverTime <= 0 )
  {
    LODWORD(v6) = snapshotRequested->serverTime;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_workers_mp.cpp", 848, ASSERT_TYPE_ASSERT, "( snapshotRequested->serverTime ) > ( 0 )", "snapshotRequested->serverTime > 0\n\t%i, %i", v6, 0i64) )
      __debugbreak();
  }
  for ( i = g_svSnapshotData.serverSnapshotTimes; snapshotRequested->serverTime != *i; ++i )
  {
    if ( ++v2 >= 0x40 )
      return 0i64;
  }
  v5 = &g_svSnapshotData.snapshots[(unsigned __int64)v2];
  if ( v5->entries.m_storageType && snapshotRequested->storageType != TRANSIENT && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_workers_mp.cpp", 858, ASSERT_TYPE_ASSERT, "( (snap->entries.GetStorageType() == SvSnapshotStorageType::FULL) || (snapshotRequested->storageType == SvSnapshotStorageType::TRANSIENT) )", (const char *)&queryFormat, "(snap->entries.GetStorageType() == SvSnapshotStorageType::FULL) || (snapshotRequested->storageType == SvSnapshotStorageType::TRANSIENT)") )
    __debugbreak();
  return v5;
}

/*
==============
SV_SnapWorkersMP_FindServerMessageRequest
==============
*/
char SV_SnapWorkersMP_FindServerMessageRequest(const int clientIndex, const SvSnapshotDelta *snapDelta, const SvSnapshotEntries *oldEntries, const SvSnapshotEntries *newEntries, BuildServerMessageCmd *builders, const int numBuilders)
{
  unsigned __int8 v9; 
  signed int v10; 
  int v11; 
  BuildServerMessageCmd *v12; 
  unsigned __int8 clientCount; 
  __int64 v15; 
  __int64 v16; 

  v9 = clientIndex;
  if ( (unsigned int)clientIndex >= 0xC8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_workers_mp.cpp", 1063, ASSERT_TYPE_ASSERT, "(unsigned)( clientIndex ) < (unsigned)( 200 )", "clientIndex doesn't index MAX_CLIENTS_MP\n\t%i not in [0, %i)", clientIndex, 200) )
    __debugbreak();
  if ( !builders && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_workers_mp.cpp", 1064, ASSERT_TYPE_ASSERT, "( builders != nullptr )", (const char *)&queryFormat, "builders != nullptr") )
    __debugbreak();
  if ( numBuilders > 10 )
  {
    LODWORD(v16) = 10;
    LODWORD(v15) = numBuilders;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_workers_mp.cpp", 1065, ASSERT_TYPE_ASSERT, "( numBuilders ) <= ( 10 )", "numBuilders not in [0, MAX_SERVER_MESSAGES]\n\t%u not in [0, %u]", v15, v16) )
      __debugbreak();
  }
  v10 = 0;
  v11 = 0;
  if ( numBuilders <= 0 )
    return 0;
  while ( 1 )
  {
    v12 = &builders[v11];
    if ( *(_OWORD *)&v12->snapDelta.snapshotType == *(_OWORD *)&snapDelta->snapshotType && v12->snapDelta.newTimeDelta == snapDelta->newTimeDelta )
      break;
    if ( ++v11 >= numBuilders )
      return 0;
  }
  clientCount = v12->clientCount;
  if ( clientCount >= 0xC8u )
  {
    LODWORD(v16) = 200;
    LODWORD(v15) = clientCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_workers_mp.cpp", 1078, ASSERT_TYPE_ASSERT, "(unsigned)( builder->clientCount ) < (unsigned)( ( sizeof( *array_counter( builder->clients ) ) + 0 ) )", "builder->clientCount doesn't index ARRAY_COUNT( builder->clients )\n\t%i not in [0, %i)", v15, v16) )
      __debugbreak();
  }
  v12->clients[v12->clientCount++] = v9;
  do
  {
    if ( v12->oldEntries.m_first[v10] != oldEntries->m_first[v10] )
    {
      LODWORD(v16) = v10;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_workers_mp.cpp", 1086, ASSERT_TYPE_ASSERT, "( ( builder->oldEntries.GetFirst( bufferType ) == oldEntries.GetFirst( bufferType ) ) )", "%s\n\t( bufferType ) = %i", "( builder->oldEntries.GetFirst( bufferType ) == oldEntries.GetFirst( bufferType ) )", v16) )
        __debugbreak();
    }
    if ( v12->newEntries.m_first[v10] != newEntries->m_first[v10] )
    {
      LODWORD(v16) = v10;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_workers_mp.cpp", 1087, ASSERT_TYPE_ASSERT, "( ( builder->newEntries.GetFirst( bufferType ) == newEntries.GetFirst( bufferType ) ) )", "%s\n\t( bufferType ) = %i", "( builder->newEntries.GetFirst( bufferType ) == newEntries.GetFirst( bufferType ) )", v16) )
        __debugbreak();
    }
    if ( v12->oldEntries.m_count[v10] != oldEntries->m_count[v10] )
    {
      LODWORD(v16) = v10;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_workers_mp.cpp", 1088, ASSERT_TYPE_ASSERT, "( ( builder->oldEntries.GetCount( bufferType ) == oldEntries.GetCount( bufferType ) ) )", "%s\n\t( bufferType ) = %i", "( builder->oldEntries.GetCount( bufferType ) == oldEntries.GetCount( bufferType ) )", v16) )
        __debugbreak();
    }
    if ( v12->newEntries.m_count[v10] != newEntries->m_count[v10] )
    {
      LODWORD(v16) = v10;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_workers_mp.cpp", 1089, ASSERT_TYPE_ASSERT, "( ( builder->newEntries.GetCount( bufferType ) == newEntries.GetCount( bufferType ) ) )", "%s\n\t( bufferType ) = %i", "( builder->newEntries.GetCount( bufferType ) == newEntries.GetCount( bufferType ) )", v16) )
        __debugbreak();
    }
    ++v10;
  }
  while ( (unsigned int)v10 < 0xA );
  return 1;
}

/*
==============
SV_SnapWorkersMP_FindServerSnapshotRequestForTime
==============
*/
BuildServerSnapRequest *SV_SnapWorkersMP_FindServerSnapshotRequestForTime(BuildServerSnapshotsCmd *cmd, const SvSnapshotIdentifier *requestBuildInfo)
{
  __int64 index; 
  BuildServerSnapRequest *result; 
  __int64 v6; 
  __int64 v7; 
  BitArrayIterator iter; 

  if ( !cmd && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_workers_mp.cpp", 51, ASSERT_TYPE_ASSERT, "( cmd )", (const char *)&queryFormat, "cmd") )
    __debugbreak();
  if ( !requestBuildInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_workers_mp.cpp", 52, ASSERT_TYPE_ASSERT, "( requestBuildInfo )", (const char *)&queryFormat, "requestBuildInfo") )
    __debugbreak();
  *(_QWORD *)&iter.wordCount = 7i64;
  iter.bitArray = cmd->snapBuildRequests;
  iter.bits = cmd->snapBuildRequests[0];
  do
  {
    if ( !BitArrayIterator::Advance(&iter) )
      return 0i64;
    index = iter.index;
    if ( iter.index >= g_svSnapshotData.maxSnapBuildRequests )
    {
      LODWORD(v7) = g_svSnapshotData.maxSnapBuildRequests;
      LODWORD(v6) = iter.index;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_workers_mp.cpp", 58, ASSERT_TYPE_ASSERT, "(unsigned)( requestIndex ) < (unsigned)( g_svSnapshotData.maxSnapBuildRequests )", "requestIndex doesn't index g_svSnapshotData.maxSnapBuildRequests\n\t%i not in [0, %i)", v6, v7) )
        __debugbreak();
    }
    result = &g_svSnapshotData.snapBuildRequests[index];
  }
  while ( result->buildInfo.serverTime != requestBuildInfo->serverTime );
  if ( requestBuildInfo->storageType == FULL )
  {
    if ( result->buildInfo.storageType )
      result->buildInfo.storageType = FULL;
  }
  return result;
}

/*
==============
SV_SnapWorkersMP_FinishBuildCurrentSnapshots
==============
*/
void SV_SnapWorkersMP_FinishBuildCurrentSnapshots(void)
{
  if ( g_svSnapshotData.snapBuildOnWorker )
  {
    Sys_WaitWorkerCmdsOfType(WRKCMD_BUILD_CLIENT_SNAPSHOTS);
    Sys_WaitWorkerCmdsOfType(WRKCMD_BUILD_CURRENT_SERVER_SNAPSHOTS);
  }
  if ( g_svSnapshotData.snapBuildError )
  {
    g_svSnapshotData.snapBuildError = NULL;
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&queryFormat);
  }
}

/*
==============
SV_SnapWorkersMP_FinishSnapshotArchiveAdd
==============
*/
void SV_SnapWorkersMP_FinishSnapshotArchiveAdd(void)
{
  Profile_Begin(336);
  if ( g_svSnapshotData.snapArchiveOnWorker )
  {
    Sys_WaitWorkerCmdsOfType(WRKCMD_ARCHIVE_SNAPSHOT_ENCODE_PLAYERSTATE);
    Sys_WaitWorkerCmdsOfType(WRKCMD_ARCHIVE_SNAPSHOT_ADD_ARCHIVE);
  }
  Profile_EndInternal(NULL);
  if ( g_svSnapshotData.snapArchiveEncodeError )
  {
    g_svSnapshotData.snapArchiveEncodeError = 0;
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_1440BFD48);
  }
  if ( g_svSnapshotData.snapArchiveCommitError )
  {
    g_svSnapshotData.snapArchiveCommitError = 0;
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_1440BFD48);
  }
}

/*
==============
SV_SnapWorkersMP_FinishSnapshotArchiveEncode
==============
*/
void SV_SnapWorkersMP_FinishSnapshotArchiveEncode(void)
{
  if ( g_svSnapshotData.snapArchiveOnWorker )
  {
    Sys_WaitWorkerCmdsOfType(WRKCMD_ARCHIVE_SNAPSHOT_CACHE_PLAYERSTATE);
    Sys_WaitWorkerCmdsOfType(WRKCMD_ARCHIVE_SNAPSHOT_ENCODE_WEAPONMAP);
    Sys_WaitWorkerCmdsOfType(WRKCMD_ARCHIVE_SNAPSHOT_ENCODE_WORLDSTATE);
  }
}

/*
==============
SV_SnapWorkersMP_FinishSnapshotWorkers
==============
*/
void SV_SnapWorkersMP_FinishSnapshotWorkers(void)
{
  const dvar_t *v0; 
  bool enabled; 
  const dvar_t *v2; 
  bool v3; 
  const dvar_t *v4; 
  bool v5; 
  const dvar_t *v6; 
  int integer; 
  const dvar_t *v8; 
  bool BaselineValidState; 
  unsigned int v10; 
  unsigned int v11; 
  SvClient *CommonClient; 
  SvClient *v13; 
  const char *v14; 
  int v15; 
  char v16; 
  char v17; 
  SvClientConnectionState state; 
  const dvar_t *v19; 
  __int64 v20; 

  if ( g_svSnapshotData.snapBuildOnWorker )
  {
    Sys_WaitWorkerCmdsOfType(WRKCMD_BUILD_ARCHIVED_SERVER_SNAPSHOTS);
    Sys_WaitWorkerCmdsOfType(WRKCMD_BUILD_SERVER_MESSAGE);
    Sys_WaitWorkerCmdsOfType(WRKCMD_BUILD_CLIENT_MESSAGE);
    Sys_WaitWorkerCmdsOfType(WRKCMD_ARCHIVE_SNAPSHOT_SAVE_POTG_ARCHIVE);
  }
  SV_SwapClientPacketData();
  SV_BandwidthProfile_ReleaseAllServerMessages();
  v0 = DCONST_DVARBOOL_sv_snapshotWorkersEnabled;
  s_numAllocatedServerMessages = 0;
  if ( !DCONST_DVARBOOL_sv_snapshotWorkersEnabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sv_snapshotWorkersEnabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v0);
  enabled = v0->current.enabled;
  v2 = DCONST_DVARBOOL_sv_snapshotWorkersEnabled;
  g_svSnapshotData.snapBuildOnWorker = enabled;
  if ( !DCONST_DVARBOOL_sv_snapshotWorkersEnabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sv_snapshotWorkersEnabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  v3 = v2->current.enabled;
  v4 = DCONST_DVARBOOL_sv_snapshotServerMessageEnabled;
  g_svSnapshotData.snapArchiveOnWorker = v3;
  if ( !DCONST_DVARBOOL_sv_snapshotServerMessageEnabled && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sv_snapshotServerMessageEnabled") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  v5 = v4->current.enabled;
  v6 = DCONST_DVARINT_sv_snapshotServerMessageMinClients;
  g_svSnapshotData.snapServerMessageBuild = v5;
  if ( !DCONST_DVARINT_sv_snapshotServerMessageMinClients && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sv_snapshotServerMessageMinClients") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  integer = v6->current.integer;
  v8 = DVARINT_sv_forceNetfieldLoD;
  g_svSnapshotData.snapServerMessageMinClients = integer;
  if ( !DVARINT_sv_forceNetfieldLoD && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sv_forceNetfieldLoD") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v8);
  g_svSnapshotData.forceNetfieldLoD = v8->current.integer;
  BaselineValidState = SV_NetConstBaselines_GetBaselineValidState();
  v10 = SvClient::ms_clientCount;
  v11 = 0;
  for ( g_svSnapshotData.constBaselineIsValid = BaselineValidState; v11 < v10; ++v11 )
  {
    if ( (_BYTE)SvClient::ms_allocatedType != HALF_HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.h", 957, ASSERT_TYPE_ASSERT, "( ms_allocatedType == ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == ALLOCATION_TYPE") )
      __debugbreak();
    CommonClient = SvClient::GetCommonClient(v11);
    v13 = CommonClient;
    if ( CommonClient->state )
    {
      v14 = *(const char **)&CommonClient[1].state;
      v15 = CommonClient[1115].lastUsercmd.sightedClientsMask.data[0];
      v16 = BYTE1(CommonClient[1115].lastUsercmd.sightedClientsMask.data[1]);
      v17 = CommonClient[1115].lastUsercmd.sightedClientsMask.data[1];
      CommonClient[1115].lastUsercmd.sightedClientsMask.data[0] = 0;
      LOWORD(CommonClient[1115].lastUsercmd.sightedClientsMask.data[1]) = 0;
      if ( v14 )
      {
        SV_ClientMP_DropClient((SvClientMP *)CommonClient, v14, 1);
        if ( *(_QWORD *)&v13[1].state && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_workers_mp.cpp", 2002, ASSERT_TYPE_ASSERT, "( !client->dropReason )", (const char *)&queryFormat, "!client->dropReason") )
          __debugbreak();
        state = v13->state;
        if ( (unsigned __int8)state >= CS_RECONNECTING )
        {
          LODWORD(v20) = (unsigned __int8)state;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_workers_mp.cpp", 2003, ASSERT_TYPE_ASSERT, "( ( (client->state == SvClientConnectionState::CS_ZOMBIE) || (client->state == SvClientConnectionState::CS_FREE) ) )", "%s\n\t( static_cast<int>(client->state) ) = %i", "( (client->state == SvClientConnectionState::CS_ZOMBIE) || (client->state == SvClientConnectionState::CS_FREE) )", v20) )
            __debugbreak();
        }
      }
      if ( v16 )
      {
        Com_PrintWarning(131087, "[Snapshot] WARNING: client disconnected for msg overflow: %s\n", &v13[4].lastUsercmd.selectedLoc[1]);
        NetConnection::SendUnreliable((NetConnection *)&v13[642].lastUsercmd.sightedClientsMask.data[6], "disconnect");
        SV_ClientMP_DropClient((SvClientMP *)v13, "EXE/SERVERMESSAGEOVERFLOW", 1);
      }
      if ( v15 < 0 )
        SV_SnapshotMP_TransmissionError((SvClientMP *)v13, v15);
      if ( v17 )
      {
        v19 = DCONST_DVARBOOL_sv_errorOnMaxSnapshotEntities;
        if ( !DCONST_DVARBOOL_sv_errorOnMaxSnapshotEntities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sv_errorOnMaxSnapshotEntities") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v19);
        if ( v19->current.enabled )
        {
          G_Debug_PrintEntityDebugInfoToConsole(0, v11);
          Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_1440BFFF0, 641i64);
        }
      }
    }
  }
}

/*
==============
SV_SnapWorkersMP_GetClientSnapshotDelta
==============
*/
void SV_SnapWorkersMP_GetClientSnapshotDelta(const BuildClientMessageRequest *const clientMessageRequest, const clientSnapshot_t *const newSnapshot, SvSnapshotDelta *const outSnapDelta, SvSnapshotEntries *const outOldEntries, SvSnapshotEntries *const outNewEntries)
{
  unsigned int clientIndex; 
  const SvClientMP *CommonClient; 
  int outgoingSequence; 
  bool v13; 
  int v14; 
  int updated; 
  const clientSnapshot_t *ClientDeltaSnapshot; 
  int *outDeltaFrame; 
  int *outDeltaFramea; 
  __int64 v30; 
  int deltaMessage; 
  BandwidthMonitoringEventTypes outDeltaType; 

  _R15 = outOldEntries;
  _RBX = newSnapshot;
  if ( !clientMessageRequest && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_workers_mp.cpp", 964, ASSERT_TYPE_ASSERT, "( clientMessageRequest != nullptr )", (const char *)&queryFormat, "clientMessageRequest != nullptr") )
    __debugbreak();
  if ( !_RBX && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_workers_mp.cpp", 965, ASSERT_TYPE_ASSERT, "( newSnapshot != nullptr )", (const char *)&queryFormat, "newSnapshot != nullptr") )
    __debugbreak();
  if ( !outSnapDelta && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_workers_mp.cpp", 966, ASSERT_TYPE_ASSERT, "( outSnapDelta != nullptr )", (const char *)&queryFormat, "outSnapDelta != nullptr") )
    __debugbreak();
  if ( !_R15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_workers_mp.cpp", 967, ASSERT_TYPE_ASSERT, "( outOldEntries != nullptr )", (const char *)&queryFormat, "outOldEntries != nullptr") )
    __debugbreak();
  _RDI = outNewEntries;
  if ( !outNewEntries && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_workers_mp.cpp", 968, ASSERT_TYPE_ASSERT, "( outNewEntries != nullptr )", (const char *)&queryFormat, "outNewEntries != nullptr") )
    __debugbreak();
  *(_QWORD *)&outSnapDelta->snapshotType = 0i64;
  *(_QWORD *)&outSnapDelta->newServerTime = 0i64;
  outSnapDelta->newTimeDelta = 0;
  _R15->m_storageType = FULL;
  memset_0(_R15->m_first, 0, sizeof(_R15->m_first));
  *(_QWORD *)_R15->m_count = 0i64;
  *(_QWORD *)&_R15->m_count[2] = 0i64;
  *(_QWORD *)&_R15->m_count[4] = 0i64;
  *(_QWORD *)&_R15->m_count[6] = 0i64;
  *(_QWORD *)&_R15->m_count[8] = 0i64;
  _RDI->m_storageType = FULL;
  memset_0(_RDI->m_first, 0, sizeof(_RDI->m_first));
  *(_QWORD *)_RDI->m_count = 0i64;
  *(_QWORD *)&_RDI->m_count[2] = 0i64;
  *(_QWORD *)&_RDI->m_count[4] = 0i64;
  *(_QWORD *)&_RDI->m_count[6] = 0i64;
  *(_QWORD *)&_RDI->m_count[8] = 0i64;
  if ( _RBX->baselineSnap )
  {
    outSnapDelta->snapshotType = LONG;
    outSnapDelta->newServerTime = _RBX->serverTime;
    outSnapDelta->newTimeDelta = _RBX->timeDelta;
    SV_SnapshotMP_AssignBaselineIndices(_RDI);
  }
  else
  {
    clientIndex = clientMessageRequest->clientIndex;
    if ( (_BYTE)SvClient::ms_allocatedType != HALF_HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.h", 957, ASSERT_TYPE_ASSERT, "( ms_allocatedType == ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == ALLOCATION_TYPE") )
      __debugbreak();
    CommonClient = (const SvClientMP *)SvClient::GetCommonClient(clientIndex);
    outgoingSequence = CommonClient->netchan.outgoingSequence;
    if ( outgoingSequence < 0 )
    {
      LODWORD(outDeltaFrame) = CommonClient->netchan.outgoingSequence;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.h", 1054, ASSERT_TYPE_ASSERT, "( sequence ) >= ( 0 )", "sequence >= 0\n\t%i, %i", outDeltaFrame, 0i64) )
        __debugbreak();
    }
    v13 = SV_SnapshotMP_ShouldWriteBlindDelta(CommonClient, clientMessageRequest->serverTime, clientMessageRequest->deltaMessage, clientMessageRequest->hasAckedBaselineData, (const SvSnapshotStorageType)CommonClient->m_frameInfo[outgoingSequence & 0x3F].snapshotClientStorageType, &deltaMessage);
    v14 = clientMessageRequest->deltaMessage;
    if ( v13 )
    {
      updated = deltaMessage;
      if ( deltaMessage <= v14 )
      {
        LODWORD(v30) = clientMessageRequest->deltaMessage;
        LODWORD(outDeltaFramea) = deltaMessage;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_workers_mp.cpp", 991, ASSERT_TYPE_ASSERT, "( blindDeltaFrame ) > ( clientMessageRequest->deltaMessage )", "blindDeltaFrame > clientMessageRequest->deltaMessage\n\t%i, %i", outDeltaFramea, v30) )
          __debugbreak();
        updated = deltaMessage;
      }
    }
    else
    {
      updated = SV_SnapshotMP_UpdateDeltaMessageSequence(CommonClient, v14, 0, 0);
    }
    ClientDeltaSnapshot = SV_SnapshotMP_FindClientDeltaSnapshot(clientMessageRequest->clientIndex, updated, (const SvClientConnectionState)clientMessageRequest->connState, clientMessageRequest->hasAckedBaselineData, _RBX, &outDeltaType);
    _RCX = ClientDeltaSnapshot;
    if ( ClientDeltaSnapshot )
    {
      outSnapDelta->snapshotType = HALF;
      outSnapDelta->oldServerTime = ClientDeltaSnapshot->serverTime;
      outSnapDelta->newServerTime = _RBX->serverTime;
      outSnapDelta->oldTimeDelta = ClientDeltaSnapshot->timeDelta;
      outSnapDelta->newTimeDelta = _RBX->timeDelta;
      _R15->m_storageType = ClientDeltaSnapshot->serverEntries.m_storageType;
      __asm
      {
        vmovups ymm0, ymmword ptr [rcx+6B80h]
        vmovups ymmword ptr [r15+8], ymm0
        vmovups ymm1, ymmword ptr [rcx+6BA0h]
        vmovups ymmword ptr [r15+28h], ymm1
        vmovups xmm0, xmmword ptr [rcx+6BC0h]
        vmovups xmmword ptr [r15+48h], xmm0
        vmovups ymm0, ymmword ptr [rcx+6BD0h]
        vmovups ymmword ptr [r15+58h], ymm0
        vmovsd  xmm1, qword ptr [rcx+6BF0h]
        vmovsd  qword ptr [r15+78h], xmm1
      }
    }
    else
    {
      SV_BandwidthProfile_RecordEvent(-1, "nodelta:client %d,event %d", clientMessageRequest->clientIndex, (unsigned int)outDeltaType);
      outSnapDelta->snapshotType = HALF_HALF;
      outSnapDelta->newServerTime = _RBX->serverTime;
      outSnapDelta->newTimeDelta = _RBX->timeDelta;
      SV_SnapshotMP_AssignBaselineIndices(_R15);
    }
    _RDI->m_storageType = _RBX->serverEntries.m_storageType;
    __asm
    {
      vmovups ymm0, ymmword ptr [rbx+6B80h]
      vmovups ymmword ptr [rdi+8], ymm0
      vmovups ymm1, ymmword ptr [rbx+6BA0h]
      vmovups ymmword ptr [rdi+28h], ymm1
      vmovups xmm0, xmmword ptr [rbx+6BC0h]
      vmovups xmmword ptr [rdi+48h], xmm0
      vmovups ymm0, ymmword ptr [rbx+6BD0h]
      vmovups ymmword ptr [rdi+58h], ymm0
      vmovsd  xmm1, qword ptr [rbx+6BF0h]
      vmovsd  qword ptr [rdi+78h], xmm1
    }
  }
}

/*
==============
SV_SnapWorkersMP_GetSnapshotSizeEstimate
==============
*/
__int64 SV_SnapWorkersMP_GetSnapshotSizeEstimate(const int clientIndex)
{
  SvClient *CommonClient; 
  SvClient *v3; 
  bool v4; 
  __int64 result; 

  if ( (_BYTE)SvClient::ms_allocatedType != HALF_HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.h", 957, ASSERT_TYPE_ASSERT, "( ms_allocatedType == ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == ALLOCATION_TYPE") )
    __debugbreak();
  CommonClient = SvClient::GetCommonClient(clientIndex);
  v3 = CommonClient;
  if ( !LOBYTE(CommonClient[602].lastUsercmd.weapon.weaponIdx) )
    return (unsigned int)g_svSnapshotData.baselineSizeEstimate;
  if ( CommonClient[602].lastUsercmd.inputTime <= 0 )
    return (unsigned int)g_svSnapshotData.baselineSizeEstimate;
  if ( SvClient::GetCommonClient(clientIndex)->state != CS_ACTIVE )
    return (unsigned int)g_svSnapshotData.baselineSizeEstimate;
  v4 = LODWORD(v3[643].lastUsercmd.buttons) - v3[602].lastUsercmd.inputTime < SV_SnapshotMP_GetPacketBackupCount();
  result = (unsigned int)g_svSnapshotData.deltaSizeEstimate;
  if ( !v4 )
    return (unsigned int)g_svSnapshotData.baselineSizeEstimate;
  return result;
}

/*
==============
SV_SnapWorkersMP_InitClientMessageRequest
==============
*/
BuildClientMessageRequest *SV_SnapWorkersMP_InitClientMessageRequest(const int clientIndex)
{
  __int64 v1; 
  SvClientMP *CommonClient; 
  BuildClientMessageRequest *v3; 
  int time; 
  int v5; 
  int ClientArchiveTime; 
  int v7; 
  const dvar_t *v8; 
  const dvar_t *v9; 
  BuildClientMessageRequest *result; 
  SvClientFrameInfo *outFrameInfo; 

  v1 = clientIndex;
  if ( (_BYTE)SvClient::ms_allocatedType != HALF_HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.h", 957, ASSERT_TYPE_ASSERT, "( ms_allocatedType == ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == ALLOCATION_TYPE") )
    __debugbreak();
  CommonClient = (SvClientMP *)SvClient::GetCommonClient(v1);
  v3 = &g_svSnapshotData.clientMsgRequest[v1];
  time = SvPersistentGlobalsMP::GetPersistentGlobalsMP()->time;
  v5 = SvPersistentGlobalsMP::GetPersistentGlobalsMP()->time;
  ClientArchiveTime = G_MainMP_GetClientArchiveTime(v1);
  SV_SnapWorkersMP_UpdateBaselineAcknowledge(CommonClient, time, v5 - ClientArchiveTime);
  if ( SvClientMP::GetValidAcknowledgedFrameInfoConst(CommonClient, (const SvClientFrameInfo **)&outFrameInfo) )
    ScriptableMsgWrite_AcknowledgeIndex(v1, outFrameInfo->scriptableWriteIndex);
  v3->clientIndex = v1;
  v3->serverTime = time;
  v3->connState = SvClient::GetCommonClient(v1)->state;
  v3->commandSequence = CommonClient->commandSequence;
  v3->reliableSequence = CommonClient->reliableSequence;
  v3->reliableAcknowledge = CommonClient->reliableAcknowledge;
  v3->hasAckedBaselineData = CommonClient->hasAckedBaselineData;
  v3->deltaMessage = CommonClient->deltaMessage;
  v7 = 0;
  v3->throttled = SV_SnapshotMP_IsClientThrottled(CommonClient);
  v3->serverMessageSize = 0;
  v3->serverMessageIndex = -1;
  v3->deterministicPacketTime = SV_MainMP_GetDeterministicSystemTime();
  v3->buildFlags = CLIENT_MSG_EMPTY_FLAG;
  if ( CommonClient->largeCommandSequence - CommonClient->reliableAcknowledge > 0 )
  {
    v7 = 32;
    v3->buildFlags = CLIENT_MSG_LARGE_COMMANDS;
  }
  if ( CommonClient->hasAckedBaselineData )
  {
    v7 |= 0x10u;
    v3->buildFlags = v7;
  }
  if ( CommonClient->sendCodcasterClientMatchData )
  {
    v7 |= 4u;
    v3->buildFlags = v7;
  }
  if ( CommonClient->sendMatchData )
  {
    v7 |= 2u;
    v3->buildFlags = v7;
  }
  if ( CommonClient->cmdNoDelta )
    v3->buildFlags = v7 | 0x80;
  v8 = DVARINT_sv_useExtraCompress;
  if ( !DVARINT_sv_useExtraCompress && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sv_useExtraCompress") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v8);
  if ( v8->current.integer )
    v3->buildFlags |= 8u;
  v9 = DVARBOOL_sv_sendSnapshots;
  if ( !DVARBOOL_sv_sendSnapshots && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sv_sendSnapshots") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v9);
  if ( !v9->current.enabled )
    v3->buildFlags |= 1u;
  result = v3;
  if ( level.introCameraActive )
    v3->buildFlags |= 0x40u;
  return result;
}

/*
==============
SV_SnapWorkersMP_InitSnapshotBuildWorkers
==============
*/
void SV_SnapWorkersMP_InitSnapshotBuildWorkers(bool *outClientHasMessage, BuildServerSnapshotsCmd *outCmdCurrent, BuildServerSnapshotsCmd *outCmdArchived)
{
  SvPersistentGlobalsMP *PersistentGlobalsMP; 
  int time; 
  signed int v8; 
  const dvar_t *v9; 
  bool v10; 
  const dvar_t *v11; 
  int integer; 
  int v13; 
  signed int i; 
  SvClient *CommonClient; 
  int v16; 
  int firstClientSendIndex; 
  signed int v18; 
  __int64 v19; 
  SvClient *v20; 
  SvClientConnectionState state; 
  int v22; 
  int inputTime; 
  SvClient *v24; 
  SvClient *v25; 
  int PacketBackupCount; 
  unsigned int baselineSizeEstimate; 
  SvGameGlobalsMP *SvGameGlobalsMP; 
  SvBandwidthLimiter *p_bandwidthLimiter; 
  bool v30; 
  int v31; 
  unsigned int Quota; 
  BuildClientMessageRequest *inited; 
  char *fmt; 
  signed int v35; 
  int v36; 
  SvPersistentGlobalsMP *v37; 
  int v41; 

  if ( !outCmdCurrent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_workers_mp.cpp", 631, ASSERT_TYPE_ASSERT, "( outCmdCurrent )", (const char *)&queryFormat, "outCmdCurrent") )
    __debugbreak();
  if ( !outCmdArchived && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_workers_mp.cpp", 632, ASSERT_TYPE_ASSERT, "( outCmdArchived )", (const char *)&queryFormat, "outCmdArchived") )
    __debugbreak();
  if ( !g_svSnapshotData.snapBuildRequests && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_workers_mp.cpp", 633, ASSERT_TYPE_ASSERT, "( g_svSnapshotData.snapBuildRequests != nullptr )", (const char *)&queryFormat, "g_svSnapshotData.snapBuildRequests != nullptr") )
    __debugbreak();
  PersistentGlobalsMP = SvPersistentGlobalsMP::GetPersistentGlobalsMP();
  v37 = PersistentGlobalsMP;
  time = SvPersistentGlobalsMP::GetPersistentGlobalsMP()->time;
  v41 = time;
  v8 = 0;
  s_numClientMessageBuildCmds = 0;
  v9 = DVARBOOL_sv_snapshotWorkersDeferMessageBuild;
  if ( !DVARBOOL_sv_snapshotWorkersDeferMessageBuild && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sv_snapshotWorkersDeferMessageBuild") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v9);
  if ( v9->current.enabled )
  {
    v10 = 1;
  }
  else
  {
    v11 = DVARINT_sv_snapshotWorkersDeferMessageBuildForClientCount;
    if ( !DVARINT_sv_snapshotWorkersDeferMessageBuildForClientCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sv_snapshotWorkersDeferMessageBuildForClientCount") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v11);
    integer = v11->current.integer;
    if ( integer <= 0 )
      goto LABEL_25;
    v13 = 0;
    for ( i = 0; i < (int)SvClient::ms_clientCount; ++i )
    {
      CommonClient = SvClient::GetCommonClient(i);
      v16 = v13 + 1;
      if ( CommonClient->state < CS_CONNECTED )
        v16 = v13;
      v13 = v16;
    }
    if ( v13 <= integer )
LABEL_25:
      v10 = 0;
    else
      v10 = 1;
    PersistentGlobalsMP = v37;
  }
  g_svSnapshotData.snapDeferMessageBuild = v10;
  g_svSnapshotData.snapBuildError = NULL;
  g_svSnapshotData.numSnapBuildRequests = 0;
  *(_QWORD *)&outCmdCurrent->serverTime = 0i64;
  *(_QWORD *)&outCmdCurrent->snapBuildCount = 0i64;
  *(_QWORD *)&outCmdCurrent->snapBuildRequests[1] = 0i64;
  *(_QWORD *)&outCmdCurrent->snapBuildRequests[3] = 0i64;
  *(_QWORD *)&outCmdCurrent->snapBuildRequests[5] = 0i64;
  *(_QWORD *)&outCmdArchived->serverTime = 0i64;
  *(_QWORD *)&outCmdArchived->snapBuildCount = 0i64;
  *(_QWORD *)&outCmdArchived->snapBuildRequests[1] = 0i64;
  *(_QWORD *)&outCmdArchived->snapBuildRequests[3] = 0i64;
  *(_QWORD *)&outCmdArchived->snapBuildRequests[5] = 0i64;
  memset_0(outClientHasMessage, 0, 0xC8ui64);
  outCmdCurrent->serverTime = time;
  outCmdArchived->serverTime = time;
  firstClientSendIndex = g_svSnapshotData.firstClientSendIndex;
  v36 = g_svSnapshotData.firstClientSendIndex;
  v18 = SvClient::ms_clientCount;
  v35 = SvClient::ms_clientCount;
  if ( (int)SvClient::ms_clientCount > 0 )
  {
    do
    {
      v19 = (v8 + firstClientSendIndex) % v18;
      if ( (_BYTE)SvClient::ms_allocatedType != HALF_HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.h", 957, ASSERT_TYPE_ASSERT, "( ms_allocatedType == ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == ALLOCATION_TYPE") )
        __debugbreak();
      v20 = SvClient::GetCommonClient(v19);
      state = SvClient::GetCommonClient(v19)->state;
      if ( SV_SnapshotMP_ShouldGenerateSnapshotForClient((const SvClientMP *)v20) )
      {
        SV_SnapshotMP_TrackClientSilence((SvClientMP *const)v20, time);
        if ( (state & 0xFD) != 0 )
        {
          v22 = PersistentGlobalsMP->time;
          if ( v22 >= (signed int)v20[782].lastUsercmd.sightedClientsMask.data[1] )
          {
            inputTime = v20[602].lastUsercmd.inputTime;
            if ( (inputTime < 0 || inputTime - v20[602].lastUsercmd.angles.v[2] >= 0 || (signed int)(v22 - v20[782].lastUsercmd.sightedClientsMask.data[6]) >= g_svSnapshotData.snapshotDelayNoDelta) && (!NetConnection::IsLocal((NetConnection *)&v20[642].lastUsercmd.sightedClientsMask.data[6]) || PersistentGlobalsMP->time <= PersistentGlobalsMP->loopbackProcessStopTime) )
            {
              if ( (_BYTE)SvClient::ms_allocatedType != HALF_HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.h", 957, ASSERT_TYPE_ASSERT, "( ms_allocatedType == ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == ALLOCATION_TYPE") )
                __debugbreak();
              v24 = SvClient::GetCommonClient(v19);
              v25 = v24;
              if ( !LOBYTE(v24[602].lastUsercmd.weapon.weaponIdx) || v24[602].lastUsercmd.inputTime <= 0 || SvClient::GetCommonClient(v19)->state != CS_ACTIVE || (PacketBackupCount = SV_SnapshotMP_GetPacketBackupCount(), baselineSizeEstimate = g_svSnapshotData.deltaSizeEstimate, LODWORD(v25[643].lastUsercmd.buttons) - v25[602].lastUsercmd.inputTime >= PacketBackupCount) )
                baselineSizeEstimate = g_svSnapshotData.baselineSizeEstimate;
              Profile_Begin(334);
              SvGameGlobalsMP = SvGameGlobalsMP::GetSvGameGlobalsMP();
              if ( SvGameGlobalsMP->rateLimitExceeded && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_workers_mp.cpp", 502, ASSERT_TYPE_ASSERT, "(!sv->rateLimitExceeded)", "%s\n\tAttempting to reserve when bandwidth limit is already exceeded", "!sv->rateLimitExceeded") )
                __debugbreak();
              p_bandwidthLimiter = &SvGameGlobalsMP->bandwidthLimiter;
              v30 = SvBandwidthLimiter::Request(&SvGameGlobalsMP->bandwidthLimiter, baselineSizeEstimate);
              if ( !v30 )
              {
                g_svSnapshotData.firstClientSendIndex = v19;
                SvGameGlobalsMP->rateLimitExceeded = 1;
                v31 = g_svSnapshotData.firstClientSendIndex;
                Quota = SvBandwidthLimiter::GetQuota(p_bandwidthLimiter);
                LODWORD(fmt) = v31;
                Com_Printf(25, "[NET] Rate limit exceeded (quota %dB, needed %uB), first client is %u\n", Quota, baselineSizeEstimate, fmt);
              }
              Profile_EndInternal(NULL);
              if ( !v30 )
                return;
              LODWORD(v20[782].lastUsercmd.rollSensitivity) = baselineSizeEstimate;
              outClientHasMessage[v19] = 1;
              if ( LODWORD(v20[855].__vftable) )
                *(_DWORD *)&v20[602].lastUsercmd.weapon.weaponAttachments[2] = *(_DWORD *)&v20[602].lastUsercmd.weapon.weaponOthers;
              inited = SV_SnapWorkersMP_InitClientMessageRequest(v19);
              if ( ((state - 1) & 0xFB) != 0 )
              {
                SV_SnapWorkersMP_StartClientMessageBuild(inited);
              }
              else
              {
                *(_DWORD *)&v20[602].lastUsercmd.weapon.weaponAttachments[6] = *(_DWORD *)&v20[602].lastUsercmd.weapon.weaponOthers;
                SV_SnapWorkersMP_RequestServerSnapshotBuild((const SvClientMP *const)v20, outCmdCurrent, outCmdArchived);
              }
              time = v41;
            }
          }
        }
      }
      ++v8;
      v18 = v35;
      PersistentGlobalsMP = v37;
      firstClientSendIndex = v36;
    }
    while ( v8 < v35 );
  }
}

/*
==============
SV_SnapWorkersMP_InitSnapshotWorkers
==============
*/
void SV_SnapWorkersMP_InitSnapshotWorkers(void)
{
  s_numAllocatedServerMessages = 0;
  s_archivePlayerStateSize = 0;
  s_numClientMessageBuildCmds = 0;
  memset_0(s_clientMessageBuildCmds, 0, sizeof(s_clientMessageBuildCmds));
}

/*
==============
SV_SnapWorkersMP_IsBaselineExpected
==============
*/
bool SV_SnapWorkersMP_IsBaselineExpected(const int clientIndex)
{
  SvClient *CommonClient; 
  SvClient *v3; 

  if ( (_BYTE)SvClient::ms_allocatedType != HALF_HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.h", 957, ASSERT_TYPE_ASSERT, "( ms_allocatedType == ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == ALLOCATION_TYPE") )
    __debugbreak();
  CommonClient = SvClient::GetCommonClient(clientIndex);
  v3 = CommonClient;
  return !LOBYTE(CommonClient[602].lastUsercmd.weapon.weaponIdx) || CommonClient[602].lastUsercmd.inputTime <= 0 || SvClient::GetCommonClient(clientIndex)->state != CS_ACTIVE || LODWORD(v3[643].lastUsercmd.buttons) - v3[602].lastUsercmd.inputTime >= SV_SnapshotMP_GetPacketBackupCount();
}

/*
==============
SV_SnapWorkersMP_ProcessRequests
==============
*/
void SV_SnapWorkersMP_ProcessRequests(const BuildServerSnapshotsCmd *const requestCmd)
{
  unsigned int v2; 
  unsigned int *snapBuildRequests; 
  __int64 v4; 
  unsigned int v5; 
  unsigned int v6; 
  __int64 v7; 
  __int64 v8; 
  BuildServerSnapRequest *v9; 
  __int64 clientCount; 
  unsigned __int64 v11; 
  unsigned int v12; 
  SvClientMP *CommonClient; 
  __int64 v14; 
  __int64 v15; 
  int v16; 
  unsigned int *v17; 
  unsigned int data; 
  int currentTime; 
  SvSnapshotIdentifier snapInfo; 

  if ( !requestCmd && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_workers_mp.cpp", 790, ASSERT_TYPE_ASSERT, "( requestCmd )", (const char *)&queryFormat, "requestCmd") )
    __debugbreak();
  v2 = requestCmd->snapBuildRequests[0];
  snapBuildRequests = requestCmd->snapBuildRequests;
  LODWORD(v4) = 0;
  v17 = requestCmd->snapBuildRequests;
  v16 = 0;
  while ( v2 )
  {
LABEL_8:
    v5 = __lzcnt(v2);
    v6 = v5 + 32 * v4;
    if ( v5 >= 0x20 )
    {
      LODWORD(v15) = 32;
      LODWORD(v14) = v5;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_bitops.h", 104, ASSERT_TYPE_ASSERT, "(unsigned)( count ) < (unsigned)( 32 )", "count doesn't index 32\n\t%i not in [0, %i)", v14, v15) )
        __debugbreak();
    }
    if ( (v2 & (0x80000000 >> v5)) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarrayiterator.h", 76, ASSERT_TYPE_ASSERT, "(iter->bits & bit)", (const char *)&queryFormat, "iter->bits & bit") )
      __debugbreak();
    v2 &= ~(0x80000000 >> v5);
    if ( v6 >= g_svSnapshotData.maxSnapBuildRequests )
    {
      LODWORD(v15) = g_svSnapshotData.maxSnapBuildRequests;
      LODWORD(v14) = v5 + 32 * v4;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_workers_mp.cpp", 796, ASSERT_TYPE_ASSERT, "(unsigned)( requestIndex ) < (unsigned)( g_svSnapshotData.maxSnapBuildRequests )", "requestIndex doesn't index g_svSnapshotData.maxSnapBuildRequests\n\t%i not in [0, %i)", v14, v15) )
        __debugbreak();
    }
    v7 = v6;
    v8 = 0i64;
    v9 = &g_svSnapshotData.snapBuildRequests[v7];
    clientCount = v9->clientCount;
    if ( v9->clientCount )
    {
      do
      {
        v11 = v9->clients[v8];
        data = v9->clients[v8];
        currentTime = SvPersistentGlobalsMP::GetPersistentGlobalsMP()->time;
        snapInfo = v9->buildInfo;
        if ( (unsigned int)v11 >> 5 >= 7 )
        {
          LODWORD(v15) = 7;
          LODWORD(v14) = (unsigned int)v11 >> 5;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_workers_mp.cpp", 810, ASSERT_TYPE_ASSERT, "(unsigned)( clientIndex >> 5 ) < (unsigned)( ( sizeof( *array_counter( buildRequest->clientTransientMask ) ) + 0 ) )", "clientIndex >> 5 doesn't index ARRAY_COUNT( buildRequest->clientTransientMask )\n\t%i not in [0, %i)", v14, v15) )
            __debugbreak();
        }
        if ( ((0x80000000 >> (v11 & 0x1F)) & v9->clientTransientMask[v11 >> 5]) != 0 )
        {
          snapInfo.storageType = TRANSIENT;
        }
        else if ( snapInfo.storageType )
        {
          LODWORD(v14) = (unsigned __int8)snapInfo.storageType;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_workers_mp.cpp", 817, ASSERT_TYPE_ASSERT, "( buildCmd.snapBuildInfo.storageType ) == ( SvSnapshotStorageType::FULL )", "buildCmd.snapBuildInfo.storageType == SvSnapshotStorageType::FULL\n\t%i, %i", v14, 0i64) )
            __debugbreak();
        }
        if ( g_svSnapshotData.snapBuildOnWorker )
        {
          Sys_AddWorkerCmd(WRKCMD_BUILD_CLIENT_SNAPSHOTS, &data);
        }
        else
        {
          SV_Timing_StartWorkerContext();
          v12 = data;
          if ( (_BYTE)SvClient::ms_allocatedType != HALF_HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.h", 957, ASSERT_TYPE_ASSERT, "( ms_allocatedType == ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == ALLOCATION_TYPE") )
            __debugbreak();
          CommonClient = (SvClientMP *)SvClient::GetCommonClient(v12);
          SvClientMP::UpdatePing(CommonClient);
          SV_BuildClientSnapshot_InitClientSnapshotForClient(CommonClient, currentTime, &snapInfo);
          SV_Timing_EndWorkerContext();
        }
        ++v8;
      }
      while ( v8 < clientCount );
      LODWORD(v4) = v16;
      snapBuildRequests = v17;
    }
  }
  while ( 1 )
  {
    v4 = (unsigned int)(v4 + 1);
    v16 = v4;
    if ( (unsigned int)v4 >= 7 )
      break;
    v2 = snapBuildRequests[v4];
    if ( v2 )
      goto LABEL_8;
  }
}

/*
==============
SV_SnapWorkersMP_RequestServerSnapshotBuild
==============
*/
void SV_SnapWorkersMP_RequestServerSnapshotBuild(const SvClientMP *const client, BuildServerSnapshotsCmd *cmdCurrent, BuildServerSnapshotsCmd *cmdArchived)
{
  unsigned __int64 MpClientIndex; 
  unsigned int time; 
  bool IsClientArchivePOTG; 
  int v9; 
  int v10; 
  bool IsValidArchiveTime; 
  int RemoteClientSendDelay; 
  const dvar_t *v13; 
  int v14; 
  int v15; 
  SvSnapshotStorageType v16; 
  BuildServerSnapRequest *ServerSnapshotRequestForTime; 
  unsigned __int8 clientCount; 
  __int64 v19; 
  __int64 v20; 
  bool v21; 
  int snapTransientCount; 
  SvSnapshotIdentifier requestBuildInfo; 

  if ( !client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_workers_mp.cpp", 167, ASSERT_TYPE_ASSERT, "( client )", (const char *)&queryFormat, "client") )
    __debugbreak();
  if ( !cmdCurrent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_workers_mp.cpp", 168, ASSERT_TYPE_ASSERT, "( cmdCurrent )", (const char *)&queryFormat, "cmdCurrent") )
    __debugbreak();
  if ( !cmdArchived && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_workers_mp.cpp", 169, ASSERT_TYPE_ASSERT, "( cmdArchived )", (const char *)&queryFormat, "cmdArchived") )
    __debugbreak();
  MpClientIndex = SV_Client_GetMpClientIndex(client);
  time = SvPersistentGlobalsMP::GetPersistentGlobalsMP()->time;
  IsClientArchivePOTG = G_MainMP_IsClientArchivePOTG(MpClientIndex);
  v21 = IsClientArchivePOTG;
  v9 = SvPersistentGlobalsMP::GetPersistentGlobalsMP()->time;
  v10 = v9 - G_MainMP_GetClientArchiveTime(MpClientIndex);
  requestBuildInfo.serverTime = v10;
  if ( v10 <= 0 )
  {
    LODWORD(v19) = v10;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_workers_mp.cpp", 180, ASSERT_TYPE_ASSERT, "( snapshotId.serverTime ) > ( 0 )", "snapshotId.serverTime > 0\n\t%i, %i", v19, 0i64) )
      __debugbreak();
  }
  IsValidArchiveTime = SV_SnapshotMP_IsValidArchiveTime(time, &requestBuildInfo.serverTime, IsClientArchivePOTG);
  snapTransientCount = cmdArchived->snapTransientCount;
  if ( !client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_workers_mp.cpp", 109, ASSERT_TYPE_ASSERT, "( client )", (const char *)&queryFormat, "client") )
    __debugbreak();
  if ( g_svSnapshotData.m_packetTransientStorageInterval <= 0 )
    goto LABEL_30;
  RemoteClientSendDelay = SV_SnapshotMP_GetRemoteClientSendDelay();
  v13 = DCONST_DVARINT_sv_snapshot_transientStorageMaxAllowedSendMsec;
  v14 = RemoteClientSendDelay;
  if ( !DCONST_DVARINT_sv_snapshot_transientStorageMaxAllowedSendMsec && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "sv_snapshot_transientStorageMaxAllowedSendMsec") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v13);
  if ( v14 > v13->current.integer || client->deltaMessage < 0 || !client->hasAckedBaselineData )
    goto LABEL_30;
  v15 = v14 * g_svSnapshotData.m_packetTransientStorageInterval;
  if ( v14 * g_svSnapshotData.m_packetTransientStorageInterval < 0 )
  {
    LODWORD(v19) = v14 * g_svSnapshotData.m_packetTransientStorageInterval;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_workers_mp.cpp", 135, ASSERT_TYPE_ASSERT, "( transientStorageAllowedInterval ) >= ( 0 )", "transientStorageAllowedInterval >= 0\n\t%i, %i", v19, 0i64) )
      __debugbreak();
  }
  if ( time > v15 + client->lastFullSnapshotSentTime || IsValidArchiveTime && snapTransientCount >= (g_svSnapshotData.clientCount + 3) / 4 )
LABEL_30:
    v16 = FULL;
  else
    v16 = TRANSIENT;
  requestBuildInfo.storageType = v16;
  requestBuildInfo.archiveUsePOTG = v21;
  if ( IsValidArchiveTime )
  {
    ServerSnapshotRequestForTime = SV_SnapWorkersMP_FindServerSnapshotRequestForTime(cmdArchived, &requestBuildInfo);
    if ( ServerSnapshotRequestForTime )
      goto LABEL_42;
    ServerSnapshotRequestForTime = SV_SnapWorkersMP_CreateServerSnapshotRequest(cmdArchived, &requestBuildInfo);
  }
  else
  {
    SV_SnapshotMP_CreateBaselineIfNeeded();
    ServerSnapshotRequestForTime = SV_SnapWorkersMP_FindServerSnapshotRequestForTime(cmdCurrent, &requestBuildInfo);
    if ( !ServerSnapshotRequestForTime )
      ServerSnapshotRequestForTime = SV_SnapWorkersMP_CreateServerSnapshotRequest(cmdCurrent, &requestBuildInfo);
    if ( cmdCurrent->snapBuildCount != 1 )
    {
      LODWORD(v20) = 1;
      LODWORD(v19) = cmdCurrent->snapBuildCount;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_workers_mp.cpp", 212, ASSERT_TYPE_ASSERT, "( cmdCurrent->snapBuildCount ) == ( 1 )", "cmdCurrent->snapBuildCount == 1\n\t%i, %i", v19, v20) )
        __debugbreak();
    }
  }
  if ( !ServerSnapshotRequestForTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_workers_mp.cpp", 216, ASSERT_TYPE_ASSERT, "( builder != nullptr )", (const char *)&queryFormat, "builder != nullptr") )
    __debugbreak();
LABEL_42:
  clientCount = ServerSnapshotRequestForTime->clientCount;
  if ( clientCount >= 0xC8u )
  {
    LODWORD(v20) = 200;
    LODWORD(v19) = clientCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_workers_mp.cpp", 217, ASSERT_TYPE_ASSERT, "(unsigned)( builder->clientCount ) < (unsigned)( ( sizeof( *array_counter( builder->clients ) ) + 0 ) )", "builder->clientCount doesn't index ARRAY_COUNT( builder->clients )\n\t%i not in [0, %i)", v19, v20) )
      __debugbreak();
  }
  ServerSnapshotRequestForTime->clients[ServerSnapshotRequestForTime->clientCount++] = MpClientIndex;
  if ( requestBuildInfo.storageType == TRANSIENT )
  {
    if ( (unsigned int)MpClientIndex >> 5 >= 7 )
    {
      LODWORD(v20) = 7;
      LODWORD(v19) = (unsigned int)MpClientIndex >> 5;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_workers_mp.cpp", 224, ASSERT_TYPE_ASSERT, "(unsigned)( clientIndex >> 5 ) < (unsigned)( ( sizeof( *array_counter( builder->clientTransientMask ) ) + 0 ) )", "clientIndex >> 5 doesn't index ARRAY_COUNT( builder->clientTransientMask )\n\t%i not in [0, %i)", v19, v20) )
        __debugbreak();
    }
    ServerSnapshotRequestForTime->clientTransientMask[MpClientIndex >> 5] |= 0x80000000 >> (MpClientIndex & 0x1F);
  }
}

/*
==============
SV_SnapWorkersMP_SetSnapshotBuildError
==============
*/
void SV_SnapWorkersMP_SetSnapshotBuildError(const char *errorMsg)
{
  g_svSnapshotData.snapBuildError = errorMsg;
}

/*
==============
SV_SnapWorkersMP_StartBuildArchivedServerSnapshots
==============
*/
void SV_SnapWorkersMP_StartBuildArchivedServerSnapshots(BuildServerSnapshotsCmd *cmd)
{
  if ( g_svSnapshotData.snapBuildOnWorker )
    Sys_AddWorkerCmd(WRKCMD_BUILD_ARCHIVED_SERVER_SNAPSHOTS, cmd);
  else
    SV_SnapWorkersMP_BuildArchivedServerSnapshotForClientCmd(cmd);
}

/*
==============
SV_SnapWorkersMP_StartBuildClientSnapshots
==============
*/
void SV_SnapWorkersMP_StartBuildClientSnapshots(const BuildServerSnapshotsCmd *const requestCurrentCmd, const BuildServerSnapshotsCmd *const requestArchivedCmd)
{
  if ( !requestCurrentCmd && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_workers_mp.cpp", 837, ASSERT_TYPE_ASSERT, "( requestCurrentCmd )", (const char *)&queryFormat, "requestCurrentCmd") )
    __debugbreak();
  if ( !requestArchivedCmd && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_workers_mp.cpp", 838, ASSERT_TYPE_ASSERT, "( requestArchivedCmd )", (const char *)&queryFormat, "requestArchivedCmd") )
    __debugbreak();
  SV_SnapWorkersMP_ProcessRequests(requestCurrentCmd);
  SV_SnapWorkersMP_ProcessRequests(requestArchivedCmd);
}

/*
==============
SV_SnapWorkersMP_StartBuildCurrentServerSnapshots
==============
*/
void SV_SnapWorkersMP_StartBuildCurrentServerSnapshots(BuildServerSnapshotsCmd *cmd)
{
  if ( g_svSnapshotData.snapBuildOnWorker )
    Sys_AddWorkerCmd(WRKCMD_BUILD_CURRENT_SERVER_SNAPSHOTS, cmd);
  else
    SV_SnapWorkersMP_BuildCurrentServerSnapshotForClientCmd(cmd);
}

/*
==============
SV_SnapWorkersMP_StartBuildDeferedClientMessages
==============
*/
void SV_SnapWorkersMP_StartBuildDeferedClientMessages(void)
{
  BuildClientMessageCmd *v0; 
  __int64 v1; 

  if ( g_svSnapshotData.snapDeferMessageBuild )
  {
    Sys_WaitWorkerCmdsOfType(WRKCMD_BUILD_CURRENT_SERVER_SNAPSHOTS);
    Sys_WaitWorkerCmdsOfType(WRKCMD_BUILD_ARCHIVED_SERVER_SNAPSHOTS);
    Sys_WaitWorkerCmdsOfType(WRKCMD_BUILD_SERVER_MESSAGE);
    if ( s_numClientMessageBuildCmds > 0 )
    {
      v0 = s_clientMessageBuildCmds;
      v1 = (unsigned int)s_numClientMessageBuildCmds;
      do
      {
        if ( g_svSnapshotData.snapBuildOnWorker )
          Sys_AddWorkerCmd(WRKCMD_BUILD_CLIENT_MESSAGE, v0);
        else
          SV_SnapWorkersMP_BuildClientMessageCmd(v0);
        ++v0;
        --v1;
      }
      while ( v1 );
    }
  }
}

/*
==============
SV_SnapWorkersMP_StartBuildServerMessage
==============
*/
char SV_SnapWorkersMP_StartBuildServerMessage(BuildServerMessageCmd *const builder)
{
  int v2; 
  __int64 v4; 
  unsigned int bufferIndex; 
  __int64 clientCount; 
  unsigned __int8 *clients; 
  __int64 v8; 
  BuildClientMessageRequest *v9; 
  __int64 v10; 
  unsigned int outMessageSize; 

  if ( !builder && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_workers_mp.cpp", 1151, ASSERT_TYPE_ASSERT, "( builder )", (const char *)&queryFormat, "builder") )
    __debugbreak();
  if ( builder->clientCount < g_svSnapshotData.snapServerMessageMinClients )
    return 0;
  if ( ((unsigned __int8)&s_numAllocatedServerMessages & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 79, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", (const void *)&s_numAllocatedServerMessages) )
    __debugbreak();
  v2 = _InterlockedExchangeAdd(&s_numAllocatedServerMessages, 1u);
  if ( v2 >= g_svSnapshotData.maxServerMessages )
  {
    if ( ((unsigned __int64)&s_numAllocatedServerMessages & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 79, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", (const void *)&s_numAllocatedServerMessages) )
      __debugbreak();
    _InterlockedExchangeAdd(&s_numAllocatedServerMessages, 0xFFFFFFFF);
    return 0;
  }
  builder->bufferIndex = v2;
  if ( g_svSnapshotData.snapBuildOnWorker )
  {
    Sys_AddWorkerCmd(WRKCMD_BUILD_SERVER_MESSAGE, builder);
    return 1;
  }
  else
  {
    if ( (unsigned int)v2 >= g_svSnapshotData.maxServerMessages )
    {
      LODWORD(v10) = v2;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_workers_mp.cpp", 1378, ASSERT_TYPE_ASSERT, "(unsigned)( cmd->bufferIndex ) < (unsigned)( g_svSnapshotData.maxServerMessages )", "cmd->bufferIndex doesn't index g_svSnapshotData.maxServerMessages\n\t%i not in [0, %i)", v10, g_svSnapshotData.maxServerMessages) )
        __debugbreak();
    }
    SV_Timing_StartWorkerContext();
    v4 = 0i64;
    if ( SV_SnapshotMP_WriteServerMessage(&builder->snapDelta, &builder->oldEntries, &builder->newEntries, builder->bufferIndex, &outMessageSize) )
    {
      bufferIndex = builder->bufferIndex;
      if ( !outMessageSize )
      {
        LODWORD(v10) = 0;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_workers_mp.cpp", 1392, ASSERT_TYPE_ASSERT, "( serverMessageSize ) > ( 0 )", "serverMessageSize > 0\n\t%i, %i", v10, 0i64) )
          __debugbreak();
      }
    }
    else
    {
      bufferIndex = -1;
      outMessageSize = 0;
    }
    clientCount = builder->clientCount;
    if ( builder->clientCount )
    {
      clients = builder->clients;
      do
      {
        v8 = clients[v4];
        v9 = &g_svSnapshotData.clientMsgRequest[v8];
        if ( (_DWORD)v8 != v9->clientIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_workers_mp.cpp", 1402, ASSERT_TYPE_ASSERT, "( clientIndex == clientBuildRequest->clientIndex )", (const char *)&queryFormat, "clientIndex == clientBuildRequest->clientIndex") )
          __debugbreak();
        v9->serverMessageIndex = bufferIndex;
        v9->serverMessageSize = outMessageSize;
        SV_SnapWorkersMP_StartClientMessageBuild(v9);
        ++v4;
      }
      while ( v4 < clientCount );
    }
    SV_Timing_EndWorkerContext();
    return 1;
  }
}

/*
==============
SV_SnapWorkersMP_StartClientMessageBuild
==============
*/
void SV_SnapWorkersMP_StartClientMessageBuild(const BuildClientMessageRequest *const buildRequest)
{
  unsigned __int64 v2; 
  BuildClientMessageCmd *v3; 

  if ( (unsigned int)s_numClientMessageBuildCmds >= 0xC8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_workers_mp.cpp", 239, ASSERT_TYPE_ASSERT, "(unsigned)( s_numClientMessageBuildCmds ) < (unsigned)( ( sizeof( *array_counter( s_clientMessageBuildCmds ) ) + 0 ) )", "s_numClientMessageBuildCmds doesn't index ARRAY_COUNT( s_clientMessageBuildCmds )\n\t%i not in [0, %i)", s_numClientMessageBuildCmds, 200) )
    __debugbreak();
  if ( ((unsigned __int8)&s_numClientMessageBuildCmds & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 79, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", (const void *)&s_numClientMessageBuildCmds) )
    __debugbreak();
  v2 = _InterlockedExchangeAdd(&s_numClientMessageBuildCmds, 1u);
  if ( v2 >= 0xC8 )
  {
    v3 = NULL;
LABEL_14:
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_workers_mp.cpp", 254, ASSERT_TYPE_ASSERT, "( buildCmd != nullptr )", (const char *)&queryFormat, "buildCmd != nullptr") )
      __debugbreak();
    goto LABEL_16;
  }
  v3 = &s_clientMessageBuildCmds[v2];
  if ( !v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_workers_mp.cpp", 232, ASSERT_TYPE_ASSERT, "( outBuildCmd )", (const char *)&queryFormat, "outBuildCmd") )
    __debugbreak();
  v3->clientIndex = buildRequest->clientIndex;
  if ( !v3 )
    goto LABEL_14;
LABEL_16:
  if ( !g_svSnapshotData.snapDeferMessageBuild )
  {
    if ( g_svSnapshotData.snapBuildOnWorker )
      Sys_AddWorkerCmd(WRKCMD_BUILD_CLIENT_MESSAGE, v3);
    else
      SV_SnapWorkersMP_BuildClientMessageCmd(v3);
  }
}

/*
==============
SV_SnapWorkersMP_StartSnapshotArchiveAdd
==============
*/
void SV_SnapWorkersMP_StartSnapshotArchiveAdd(void)
{
  volatile int v2; 
  int v3; 
  SVSnapshotArchiveEncodeData data; 
  SVSnapshotArchiveEncodeData worldStateEncodeData; 

  __asm
  {
    vmovups ymm0, ymmword ptr cs:?g_svSnapshotData@@3UServerSnapshotDataMP@@A.weaponMapEncodeData.archiveMsg; ServerSnapshotDataMP g_svSnapshotData
    vmovups ymm1, ymmword ptr cs:?g_svSnapshotData@@3UServerSnapshotDataMP@@A.worldStateEncodeData.archiveMsg; ServerSnapshotDataMP g_svSnapshotData
    vmovups [rsp+88h+data], ymm0
    vmovups ymmword ptr [rsp+88h+worldStateEncodeData.archiveMsg], ymm1
  }
  g_svSnapshotData.snapArchiveCommitError = 0;
  if ( g_svSnapshotData.snapArchiveOnWorker )
  {
    Sys_AddWorkerCmd(WRKCMD_ARCHIVE_SNAPSHOT_ADD_ARCHIVE, &data);
  }
  else
  {
    SV_Timing_StartWorkerContext();
    if ( !g_svSnapshotData.snapArchiveEncodeError )
    {
      if ( s_archivePlayerStateSize > 0x10000 )
      {
        v3 = 0x10000;
        v2 = s_archivePlayerStateSize;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_workers_mp.cpp", 1678, ASSERT_TYPE_ASSERT, "( s_archivePlayerStateSize ) <= ( 65536 )", "s_archivePlayerStateSize not in [0, MAX_SNAPSHOT_MSGLEN_PLAYERSTATE]\n\t%u not in [0, %u]", v2, v3) )
          __debugbreak();
      }
      g_svSnapshotData.snapArchiveCommitError = !SV_SnapshotMP_ArchiveSnapshotAddToArchive(g_svSnapshotData.archivePlayerStateMsgData, s_archivePlayerStateSize, &data, &worldStateEncodeData);
    }
    SV_Timing_EndWorkerContext();
  }
}

/*
==============
SV_SnapWorkersMP_StartSnapshotArchiveEncode
==============
*/
void SV_SnapWorkersMP_StartSnapshotArchiveEncode(void)
{
  CachedSnapshotPlayerStateBuffer archivePlayerStateCacheBuffer; 
  cachedSnapshotPlayerState_t *v3; 
  __int64 v4; 
  signed int i; 
  SvClient *CommonClient; 
  unsigned int v7; 
  unsigned int v8; 
  __int64 v9; 
  bool snapArchiveEncodeError; 
  bool v11; 
  unsigned int v12; 
  __int64 v13; 
  __int64 v14; 
  __int64 v15; 
  __m256i data; 
  msg_t *msgWorldState[4]; 
  msg_t buf; 
  int cmdInfo; 

  __asm
  {
    vmovups ymm0, ymmword ptr cs:?g_svSnapshotData@@3UServerSnapshotDataMP@@A.weaponMapEncodeData.archiveMsg; ServerSnapshotDataMP g_svSnapshotData
    vmovups ymm1, ymmword ptr cs:?g_svSnapshotData@@3UServerSnapshotDataMP@@A.worldStateEncodeData.archiveMsg; ServerSnapshotDataMP g_svSnapshotData
    vmovups [rbp+57h+data], ymm0
    vmovups ymmword ptr [rbp+57h+msgWorldState], ymm1
  }
  g_svSnapshotData.snapArchiveEncodeError = 0;
  g_svSnapshotData.archivePlayerStateCacheTime = SvPersistentGlobalsMP::GetPersistentGlobalsMP()->time;
  archivePlayerStateCacheBuffer = SV_SnapshotArchiveMP_UpdatePlayerStateWriteCache();
  g_svSnapshotData.archivePlayerStateCacheBuffer = archivePlayerStateCacheBuffer;
  if ( (unsigned int)archivePlayerStateCacheBuffer >= CACHED_SNAP_PLAYERSTATE_COUNT )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_workers_mp.cpp", 1753, ASSERT_TYPE_ASSERT, "(unsigned)( g_svSnapshotData.archivePlayerStateCacheBuffer ) < (unsigned)( ( sizeof( *array_counter( g_svSnapshotData.cachedSnapshotPlayerStateFramesWrite ) ) + 0 ) )", "g_svSnapshotData.archivePlayerStateCacheBuffer doesn't index ARRAY_COUNT( g_svSnapshotData.cachedSnapshotPlayerStateFramesWrite )\n\t%i not in [0, %i)", archivePlayerStateCacheBuffer, 2) )
      __debugbreak();
    archivePlayerStateCacheBuffer = g_svSnapshotData.archivePlayerStateCacheBuffer;
  }
  v3 = &g_svSnapshotData.cachedSnapshotPlayerStateFramesWrite[archivePlayerStateCacheBuffer];
  MSG_Init(&buf, g_svSnapshotData.archivePlayerStateMsgData, 0x10000);
  MSG_WriteData(&buf, v3, 40);
  LODWORD(v4) = 0;
  s_archivePlayerStateSize = buf.cursize;
  for ( i = 0; i < (int)SvClient::ms_clientCount; CommonClient[1116].lastUsercmd.serverTime = 0 )
  {
    if ( (_BYTE)SvClient::ms_allocatedType != HALF_HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_client_mp.h", 957, ASSERT_TYPE_ASSERT, "( ms_allocatedType == ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == ALLOCATION_TYPE") )
      __debugbreak();
    CommonClient = SvClient::GetCommonClient(i++);
    *(SvClient_vtbl **)((char *)&CommonClient[1116].__vftable + 4) = NULL;
    *(_QWORD *)(&CommonClient[1116].state + 4) = 0i64;
    *(unsigned __int64 *)((char *)&CommonClient[1116].lastUsercmd.buttons + 4) = 0i64;
  }
  v7 = v3->playerStateValid[0];
  if ( g_svSnapshotData.snapArchiveOnWorker )
  {
    Sys_AddWorkerCmd(WRKCMD_ARCHIVE_SNAPSHOT_ENCODE_WEAPONMAP, &data);
    Sys_AddWorkerCmd(WRKCMD_ARCHIVE_SNAPSHOT_ENCODE_WORLDSTATE, msgWorldState);
    while ( v7 )
    {
LABEL_15:
      v8 = __lzcnt(v7);
      v9 = v8 + 32 * (_DWORD)v4;
      if ( v8 >= 0x20 )
      {
        LODWORD(v15) = 32;
        LODWORD(v14) = v8;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_bitops.h", 104, ASSERT_TYPE_ASSERT, "(unsigned)( count ) < (unsigned)( 32 )", "count doesn't index 32\n\t%i not in [0, %i)", v14, v15) )
          __debugbreak();
      }
      if ( (v7 & (0x80000000 >> v8)) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarrayiterator.h", 76, ASSERT_TYPE_ASSERT, "(iter->bits & bit)", (const char *)&queryFormat, "iter->bits & bit") )
        __debugbreak();
      cmdInfo = v8 + 32 * v4;
      v7 &= ~(0x80000000 >> v8);
      if ( SvClient::GetCommonClient(v9)->state < CS_CONNECTED && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_workers_mp.cpp", 1781, ASSERT_TYPE_ASSERT, "( SvClient::GetConnectionState( playerStateIter.index ) >= SvClientConnectionState::CS_CONNECTED )", (const char *)&queryFormat, "SvClient::GetConnectionState( playerStateIter.index ) >= SvClientConnectionState::CS_CONNECTED") )
        __debugbreak();
      if ( !G_ActiveMP_GetFollowPlayerState(v9, NULL) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_workers_mp.cpp", 1782, ASSERT_TYPE_ASSERT, "( G_ActiveMP_GetFollowPlayerState( playerStateIter.index, nullptr ) )", (const char *)&queryFormat, "G_ActiveMP_GetFollowPlayerState( playerStateIter.index, nullptr )") )
        __debugbreak();
      g_svSnapshotData.archivePlayerStateOffsetData[v9] = -1;
      Sys_AddWorkerCmd(WRKCMD_ARCHIVE_SNAPSHOT_CACHE_PLAYERSTATE, &cmdInfo);
      Sys_AddWorkerCmd(WRKCMD_ARCHIVE_SNAPSHOT_ENCODE_PLAYERSTATE, &cmdInfo);
    }
    while ( 1 )
    {
      v4 = (unsigned int)(v4 + 1);
      if ( (unsigned int)v4 >= 7 )
        break;
      v7 = v3->playerStateValid[v4];
      if ( v7 )
        goto LABEL_15;
    }
  }
  else
  {
    SV_Timing_StartWorkerContext();
    MSG_Init((msg_t *)data.m256i_i64[0], (unsigned __int8 *)data.m256i_i64[2], data.m256i_i32[6]);
    SV_SnapshotMP_ArchiveSnapshotEncodeWeaponMap((msg_t *)data.m256i_i64[0], (bool *)data.m256i_i64[1]);
    snapArchiveEncodeError = g_svSnapshotData.snapArchiveEncodeError;
    if ( *(_DWORD *)data.m256i_i64[0] )
      snapArchiveEncodeError = 1;
    g_svSnapshotData.snapArchiveEncodeError = snapArchiveEncodeError;
    SV_Timing_EndWorkerContext();
    SV_Timing_StartWorkerContext();
    MSG_Init(msgWorldState[0], (unsigned __int8 *)msgWorldState[2], (int)msgWorldState[3]);
    SV_SnapshotMP_ArchiveSnapshotEncodeWorldState(msgWorldState[0], (bool *)msgWorldState[1]);
    v11 = g_svSnapshotData.snapArchiveEncodeError;
    if ( msgWorldState[0]->overflowed )
      v11 = 1;
    g_svSnapshotData.snapArchiveEncodeError = v11;
    SV_Timing_EndWorkerContext();
    while ( v7 )
    {
LABEL_36:
      v12 = __lzcnt(v7);
      v13 = v12 + 32 * (_DWORD)v4;
      if ( v12 >= 0x20 )
      {
        LODWORD(v15) = 32;
        LODWORD(v14) = v12;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_bitops.h", 104, ASSERT_TYPE_ASSERT, "(unsigned)( count ) < (unsigned)( 32 )", "count doesn't index 32\n\t%i not in [0, %i)", v14, v15) )
          __debugbreak();
      }
      if ( (v7 & (0x80000000 >> v12)) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarrayiterator.h", 76, ASSERT_TYPE_ASSERT, "(iter->bits & bit)", (const char *)&queryFormat, "iter->bits & bit") )
        __debugbreak();
      cmdInfo = v12 + 32 * v4;
      v7 &= ~(0x80000000 >> v12);
      if ( SvClient::GetCommonClient(v13)->state < CS_CONNECTED && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_workers_mp.cpp", 1800, ASSERT_TYPE_ASSERT, "( SvClient::GetConnectionState( playerStateIter.index ) >= SvClientConnectionState::CS_CONNECTED )", (const char *)&queryFormat, "SvClient::GetConnectionState( playerStateIter.index ) >= SvClientConnectionState::CS_CONNECTED") )
        __debugbreak();
      if ( !G_ActiveMP_GetFollowPlayerState(v13, NULL) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_workers_mp.cpp", 1801, ASSERT_TYPE_ASSERT, "( G_ActiveMP_GetFollowPlayerState( playerStateIter.index, nullptr ) )", (const char *)&queryFormat, "G_ActiveMP_GetFollowPlayerState( playerStateIter.index, nullptr )") )
        __debugbreak();
      g_svSnapshotData.archivePlayerStateOffsetData[v13] = -1;
      SV_SnapWorkersMP_ArchiveSnapshotCachePlayerStateCmd(&cmdInfo);
      SV_SnapWorkersMP_ArchiveSnapshotEncodePlayerStateCmd(&cmdInfo);
    }
    while ( 1 )
    {
      v4 = (unsigned int)(v4 + 1);
      if ( (unsigned int)v4 >= 7 )
        break;
      v7 = v3->playerStateValid[v4];
      if ( v7 )
        goto LABEL_36;
    }
  }
}

/*
==============
SV_SnapWorkersMP_StartSnapshotPOTGArchiveSave
==============
*/
void SV_SnapWorkersMP_StartSnapshotPOTGArchiveSave(void)
{
  int data; 

  data = 15000;
  if ( g_svSnapshotData.snapArchiveOnWorker )
  {
    Sys_AddWorkerCmd(WRKCMD_ARCHIVE_SNAPSHOT_SAVE_POTG_ARCHIVE, &data);
  }
  else
  {
    SV_Timing_StartWorkerContext();
    SV_SnapshotMP_ArchiveSavePOTG(data);
    SV_Timing_EndWorkerContext();
  }
}

/*
==============
SV_SnapWorkersMP_UpdateBaselineAcknowledge
==============
*/
void SV_SnapWorkersMP_UpdateBaselineAcknowledge(SvClientMP *const client, const int currentTime, const int snapTime)
{
  int m_packetBackupCount; 
  int deltaMessage; 
  int v8; 
  int v9; 
  int MpClientIndex; 
  char *fmt; 
  __int64 v12; 
  clientSnapshot_t *outSnapshot; 

  if ( !client && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_workers_mp.cpp", 311, ASSERT_TYPE_ASSERT, "( client )", (const char *)&queryFormat, "client") )
    __debugbreak();
  if ( client->deltaMessage >= 0 )
  {
    m_packetBackupCount = g_svSnapshotData.m_packetBackupCount;
    if ( g_svSnapshotData.m_packetBackupCount <= 0 )
    {
      LODWORD(v12) = g_svSnapshotData.m_packetBackupCount;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_mp.h", 665, ASSERT_TYPE_ASSERT, "( g_svSnapshotData.m_packetBackupCount ) > ( 0 )", "g_svSnapshotData.m_packetBackupCount > 0\n\t%i, %i", v12, 0i64) )
        __debugbreak();
      m_packetBackupCount = g_svSnapshotData.m_packetBackupCount;
    }
    deltaMessage = client->deltaMessage;
    if ( client->netchan.outgoingSequence - deltaMessage < m_packetBackupCount )
    {
      if ( SvClientMP::GetValidSnapshotForSentSequenceConst(client, deltaMessage, (const clientSnapshot_t **)&outSnapshot) )
      {
        if ( !outSnapshot && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_workers_mp.cpp", 338, ASSERT_TYPE_ASSERT, "( prevSnap )", (const char *)&queryFormat, "prevSnap") )
          __debugbreak();
        if ( outSnapshot->serverEntries.m_first[0] == -10000000 )
        {
          if ( outSnapshot->serverEntries.m_first[6] != 0x7FFFFFFFFFFFFFFFi64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_workers_mp.cpp", 342, ASSERT_TYPE_ASSERT, "( prevSnap->serverEntries.GetFirst( SvSnapshotBufferType::SCRIPTABLE_INSTANCES ) == SCRIPTABLE_SNAPSHOT_NODELTA_INDEX )", (const char *)&queryFormat, "prevSnap->serverEntries.GetFirst( SvSnapshotBufferType::SCRIPTABLE_INSTANCES ) == SCRIPTABLE_SNAPSHOT_NODELTA_INDEX") )
            __debugbreak();
          if ( outSnapshot->serverEntries.m_first[7] != 0x7FFFFFFFFFFFFFFFi64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_workers_mp.cpp", 343, ASSERT_TYPE_ASSERT, "( prevSnap->serverEntries.GetFirst( SvSnapshotBufferType::SCRIPTABLE_PARTS ) == SCRIPTABLE_SNAPSHOT_NODELTA_INDEX )", (const char *)&queryFormat, "prevSnap->serverEntries.GetFirst( SvSnapshotBufferType::SCRIPTABLE_PARTS ) == SCRIPTABLE_SNAPSHOT_NODELTA_INDEX") )
            __debugbreak();
          if ( !outSnapshot->baselineSnap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_workers_mp.cpp", 344, ASSERT_TYPE_ASSERT, "( prevSnap->baselineSnap )", (const char *)&queryFormat, "prevSnap->baselineSnap") )
            __debugbreak();
          if ( !client->hasAckedBaselineData )
            client->bandwidthMonitoring.baseLineAckedTime = currentTime;
          client->hasAckedBaselineData = 1;
        }
        else if ( outSnapshot->baselineSnap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server_mp\\sv_snapshot_workers_mp.cpp", 357, ASSERT_TYPE_ASSERT, "( !prevSnap->baselineSnap )", (const char *)&queryFormat, "!prevSnap->baselineSnap") )
        {
          __debugbreak();
        }
        if ( outSnapshot->serverTime == snapTime )
        {
          MpClientIndex = SV_Client_GetMpClientIndex(client);
          if ( !SV_ClientMP_IsTestClient(MpClientIndex) )
          {
            LODWORD(fmt) = outSnapshot->baselineSnap;
            Com_PrintError(15, "[SvSnapshot] Building delta snapshot for the same server time %d. CurrentTime %d. Baseline %d\n", (unsigned int)snapTime, (unsigned int)currentTime, fmt);
          }
        }
      }
      else if ( !client->hasAckedBaselineData )
      {
        v9 = SV_Client_GetMpClientIndex(client);
        if ( !SV_ClientMP_IsTestClient(v9) )
          Com_PrintWarning(15, "[SvSnapshot] Attempted to ack baseline for '%s' but delta message snapshot was not found\n", client->name);
      }
    }
    else if ( !client->hasAckedBaselineData )
    {
      v8 = SV_Client_GetMpClientIndex(client);
      if ( !SV_ClientMP_IsTestClient(v8) )
        Com_PrintWarning(15, "[SvSnapshot] Attempted to ack baseline for '%s' but delta message snapshot rolled around the buffer\n", client->name);
    }
  }
}

/*
==============
SV_SnapWorkersMP_UpdateScriptableAcknowledge
==============
*/
void SV_SnapWorkersMP_UpdateScriptableAcknowledge(const SvClientMP *const client, const unsigned int clientIndex)
{
  SvClientFrameInfo *outFrameInfo; 

  if ( SvClientMP::GetValidAcknowledgedFrameInfoConst((SvClientMP *)client, (const SvClientFrameInfo **)&outFrameInfo) )
    ScriptableMsgWrite_AcknowledgeIndex(clientIndex, outFrameInfo->scriptableWriteIndex);
}

/*
==============
SV_SnapWorkersMP_WaitSnapshotArchiveAddWorkers
==============
*/
void SV_SnapWorkersMP_WaitSnapshotArchiveAddWorkers(void)
{
  Profile_Begin(336);
  if ( g_svSnapshotData.snapArchiveOnWorker )
  {
    Sys_WaitWorkerCmdsOfType(WRKCMD_ARCHIVE_SNAPSHOT_ENCODE_PLAYERSTATE);
    Sys_WaitWorkerCmdsOfType(WRKCMD_ARCHIVE_SNAPSHOT_ADD_ARCHIVE);
  }
  Profile_EndInternal(NULL);
}

/*
==============
SV_SnapWorkersMP_WaitSnapshotWorkers
==============
*/
void SV_SnapWorkersMP_WaitSnapshotWorkers(void)
{
  if ( g_svSnapshotData.snapBuildOnWorker )
  {
    Sys_WaitWorkerCmdsOfType(WRKCMD_BUILD_ARCHIVED_SERVER_SNAPSHOTS);
    Sys_WaitWorkerCmdsOfType(WRKCMD_BUILD_SERVER_MESSAGE);
    Sys_WaitWorkerCmdsOfType(WRKCMD_BUILD_CLIENT_MESSAGE);
    Sys_WaitWorkerCmdsOfType(WRKCMD_ARCHIVE_SNAPSHOT_SAVE_POTG_ARCHIVE);
  }
}

/*
==============
SV_SnapshotMP_TrackClientSilence
==============
*/
void SV_SnapshotMP_TrackClientSilence(SvClientMP *const client, const int serverTime)
{
  int lastPacketTime; 
  int v7; 
  int v8; 
  int v9; 
  int v10; 
  int v11; 
  const char *v12; 
  unsigned int MpClientIndex; 
  char *name; 
  const char *v23; 
  const char *StateString; 
  const char *v25; 
  int silenceThreshold; 
  int v29; 
  double v30; 
  double v31; 
  int v32; 
  int v33; 
  int v34; 
  unsigned int clientNum; 
  int v36; 
  int ping; 
  char *playerGuid; 
  const char *String; 
  char dest[40]; 

  lastPacketTime = client->lastPacketTime;
  if ( !lastPacketTime )
    return;
  v7 = serverTime - client->lastSnapshotSentTime;
  v8 = 0;
  v9 = serverTime - lastPacketTime;
  if ( v7 >= g_svSnapshotData.clientSilenceThresholdSend )
    v8 = 2;
  v10 = (v9 >= g_svSnapshotData.clientSilenceThresholdRecv) | v8;
  if ( !v10 )
  {
    client->silenceMask = 0;
    client->silencePeriod = 0;
    return;
  }
  v11 = 0;
  v12 = NULL;
  switch ( v10 )
  {
    case 1:
      goto LABEL_9;
    case 2:
      if ( (client->silenceMask & 2) == 0 )
        client->silenceThreshold = g_svSnapshotData.clientSilenceThresholdSend;
      v11 = v7;
      v12 = "send";
      break;
    case 3:
LABEL_9:
      if ( (client->silenceMask & 1) == 0 )
        client->silenceThreshold = g_svSnapshotData.clientSilenceThresholdRecv;
      v11 = serverTime - lastPacketTime;
      v12 = "recv";
      break;
  }
  client->silencePeriod = v11;
  if ( v11 >= client->silenceThreshold )
  {
    __asm
    {
      vmovaps [rsp+148h+var_48], xmm6
      vmovaps [rsp+148h+var_58], xmm7
    }
    MpClientIndex = SV_Client_GetMpClientIndex(client);
    clientNum = MpClientIndex;
    v32 = Sys_Milliseconds();
    if ( client->state )
      name = client->name;
    else
      name = j_va("%d", MpClientIndex);
    Core_strcpy(dest, 0x24ui64, name);
    if ( client->state )
      playerGuid = client->playerGuid;
    else
      playerGuid = (char *)&queryFormat.fmt + 3;
    NET_GetRecvQueueLength();
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
      vmulss  xmm0, xmm0, cs:__real@3a800000
      vcvtss2sd xmm7, xmm0, xmm0
    }
    NET_GetSendQueueLength();
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, eax
      vmulss  xmm1, xmm0, cs:__real@3a800000
      vcvtss2sd xmm6, xmm1, xmm1
    }
    String = NetConnection::GetString(&client->clientConnection);
    if ( client->hasAckedBaselineData )
    {
      v23 = "delta";
      if ( client->noDeltaSequence )
        v23 = "no-delta";
    }
    else
    {
      v23 = "baseline";
    }
    v36 = client->netchan.outgoingSequence - client->deltaMessage;
    ping = client->ping;
    if ( NetConnection::IsOpened(&client->clientConnection) )
      v34 = v32 - NetConnection::GetLastRecv(&client->clientConnection);
    else
      v34 = 0;
    if ( NetConnection::IsOpened(&client->clientConnection) )
      v33 = v32 - NetConnection::GetLastSent(&client->clientConnection);
    else
      v33 = 0;
    StateString = NetConnection::GetStateString(&client->clientConnection);
    switch ( SvClient::GetCommonClient(clientNum)->state )
    {
      case CS_FREE:
        v25 = "FREE";
        break;
      case CS_ZOMBIE:
        v25 = "ZOMBIE";
        break;
      case CS_RECONNECTING:
        v25 = "RECONNECTING";
        break;
      case CS_CONNECTED:
        v25 = "CONNECTED";
        break;
      case CS_CLIENTLOADING:
        v25 = "CLIENTLOADING";
        break;
      case CS_ACTIVE:
        v25 = "ACTIVE";
        break;
      default:
        v25 = "UNKNOWN";
        break;
    }
    __asm
    {
      vmovsd  [rsp+148h+var_C0], xmm7
      vmovsd  [rsp+148h+var_C8], xmm6
    }
    Com_Printf(131087, "[Snapshot] Client '%s' %s no activity (%s) for %dms: state=%s / %s, snapshot=%dms, ack=%dms, send=%dms, recv=%dms, ping=%dms, backup=%d, msg=%s, addr=%s, sendq=%.1fKB, recvq=%.1fKB\n", dest, playerGuid, v12, v11, v25, StateString, v7, v9, v33, v34, ping, v36, v23, String, v30, v31);
    silenceThreshold = client->silenceThreshold;
    __asm
    {
      vmovaps xmm7, [rsp+148h+var_58]
      vmovaps xmm6, [rsp+148h+var_48]
    }
    v29 = silenceThreshold;
    if ( silenceThreshold > 5000 )
      v29 = 5000;
    client->silenceThreshold = silenceThreshold + v29;
  }
  client->silenceMask = v10;
}


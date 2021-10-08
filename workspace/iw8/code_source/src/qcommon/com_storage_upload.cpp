/*
==============
LiveStorage_DoWeNeedOnlineStatsWrite
==============
*/

bool __fastcall LiveStorage_DoWeNeedOnlineStatsWrite(const int localControllerIndex)
{
  return ?LiveStorage_DoWeNeedOnlineStatsWrite@@YA_NH@Z(localControllerIndex);
}

/*
==============
LiveStorage_UploadStats
==============
*/

void __fastcall LiveStorage_UploadStats(const int controllerIndex)
{
  ?LiveStorage_UploadStats@@YAXH@Z(controllerIndex);
}

/*
==============
LiveStorage_UploadStats_Internal
==============
*/

void __fastcall LiveStorage_UploadStats_Internal(const int controllerIndex)
{
  ?LiveStorage_UploadStats_Internal@@YAXH@Z(controllerIndex);
}

/*
==============
LiveStorage_WritingStats
==============
*/

bool __fastcall LiveStorage_WritingStats(const int controllerIndex)
{
  return ?LiveStorage_WritingStats@@YA_NH@Z(controllerIndex);
}

/*
==============
LiveStorage_RequestOnlineStatsUpload
==============
*/

void __fastcall LiveStorage_RequestOnlineStatsUpload(const int controllerIndex)
{
  ?LiveStorage_RequestOnlineStatsUpload@@YAXH@Z(controllerIndex);
}

/*
==============
OnStatsWriteComplete
==============
*/

void __fastcall OnStatsWriteComplete(OnlineStorageTask *storageTask)
{
  ?OnStatsWriteComplete@@YAXPEAUOnlineStorageTask@@@Z(storageTask);
}

/*
==============
OnLoadoutValidationComplete
==============
*/

void __fastcall OnLoadoutValidationComplete(GenericTask *pTask, eTaskManagerTaskState taskState)
{
  ?OnLoadoutValidationComplete@@YAXPEAVGenericTask@@W4eTaskManagerTaskState@@@Z(pTask, taskState);
}

/*
==============
CleanupStorageTask
==============
*/
void CleanupStorageTask(OnlineStorageTask *storageTask)
{
  if ( storageTask->uploadUserStorageResponse )
  {
    storageTask->uploadUserStorageResponse = NULL;
  }
  else
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_storage_upload.cpp", 139, ASSERT_TYPE_ASSERT, "(storageTask->uploadUserStorageResponse)", (const char *)&queryFormat, "storageTask->uploadUserStorageResponse") )
      __debugbreak();
    storageTask->uploadUserStorageResponse = NULL;
  }
}

/*
==============
LiveStorage_DoWeNeedOnlineStatsWrite
==============
*/
bool LiveStorage_DoWeNeedOnlineStatsWrite(const int localControllerIndex)
{
  __int64 v1; 
  __int64 ActiveStatsSource; 
  int v3; 
  unsigned int v5; 
  const dvar_t *v6; 

  v1 = localControllerIndex;
  ActiveStatsSource = LiveStorage_GetActiveStatsSource(localControllerIndex);
  if ( !controllerStatData[v1].playerStats[ActiveStatsSource].onlineStatWritePending || (_DWORD)ActiveStatsSource )
    return 0;
  v3 = (Sys_Milliseconds() - g_LastUploadUserStatsAttemptTime) / 1000;
  if ( !g_LastUploadUserStatsAttemptTime )
    return 1;
  v5 = g_NumUploadUserStatsFailures;
  v6 = DVARINT_upload_stats_base_interval;
  if ( !DVARINT_upload_stats_base_interval && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "upload_stats_base_interval") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v6);
  return Live_GetShouldDemonwareRetryWithBase(v6->current.unsignedInt, v3, v5, 0x12Cu);
}

/*
==============
LiveStorage_RequestOnlineStatsUpload
==============
*/
void LiveStorage_RequestOnlineStatsUpload(const int controllerIndex)
{
  __int64 v1; 

  v1 = controllerIndex;
  Com_Printf(16, "Requesting online stats upload\n");
  controllerStatData[v1].playerStats[0].onlineStatWritePending = 1;
}

/*
==============
LiveStorage_UploadStats
==============
*/
void LiveStorage_UploadStats(const int controllerIndex)
{
  __int64 v2; 

  v2 = controllerIndex;
  if ( !OnlineStorage::GetInstance()->m_initialized )
  {
    Com_Printf(6, "Not uploading stats: online storage is not initialized yet (cont %i). will NOT retry.\n", (unsigned int)controllerIndex);
    return;
  }
  if ( !controllerStatData[v2].playerStats[0].statsFetched )
  {
    Com_Printf(6, "Not uploading stats: stats not fetched (cont %i) will NOT retry.\n", (unsigned int)controllerIndex);
    return;
  }
  if ( !LiveStorage_HasDirtyStatsBlob(controllerIndex, STATS_ONLINE) )
  {
    Com_Printf(6, "Not uploading stats: no statWriteNeeded (cont %i) will NOT retry.\n", (unsigned int)controllerIndex);
    controllerStatData[v2].playerStats[0].onlineStatWritePending = 0;
    return;
  }
  if ( controllerStatData[v2].writeStatsBufferInUse )
  {
    Com_Printf(6, "Not uploading stats: writeStatsBufferInUse (cont %i) will NOT retry.\n", (unsigned int)controllerIndex);
    return;
  }
  if ( !Live_IsUserSignedInToLive(controllerIndex) )
  {
    Com_Printf(6, "Not uploading stats: not connected to live (cont %i) will retry.\n", (unsigned int)controllerIndex);
LABEL_13:
    controllerStatData[v2].playerStats[0].onlineStatWritePending = 1;
    return;
  }
  if ( !Live_IsUserSignedInToDemonware(controllerIndex) )
  {
    Com_Printf(6, "Not uploading stats: not connected to Demon Ware (cont %i) will retry.\n", (unsigned int)controllerIndex);
    goto LABEL_13;
  }
  LiveStorage_UploadStats_Internal(controllerIndex);
}

/*
==============
LiveStorage_UploadStats_Internal
==============
*/
void LiveStorage_UploadStats_Internal(const int controllerIndex)
{
  __int64 v1; 
  OnlineStorageTaskFileEntry *fileEntries; 
  __int64 v3; 
  __int64 v4; 
  PlayerStatNetworkData *v5; 
  unsigned int v6; 
  unsigned __int8 *StatsGroupBufferForSource; 
  unsigned int StatsGroupDataSize; 
  const char *v9; 
  const char *v10; 
  OnlineStorage *Instance; 
  char CurrentPlatform; 
  unsigned __int8 *v13; 
  unsigned int v14; 
  const char *v15; 
  const char *v16; 
  OnlineStorage *v17; 
  char v18; 
  unsigned __int8 *v19; 
  unsigned int v20; 
  const char *v21; 
  const char *v22; 
  OnlineStorage *v23; 
  char v24; 
  unsigned __int8 *v25; 
  unsigned int v26; 
  const char *v27; 
  const char *v28; 
  OnlineStorage *v29; 
  char v30; 
  unsigned __int8 *v31; 
  unsigned int v32; 
  const char *v33; 
  const char *v34; 
  OnlineStorage *v35; 
  char v36; 
  unsigned __int8 *v37; 
  unsigned int v38; 
  const char *v39; 
  const char *v40; 
  OnlineStorage *v41; 
  char v42; 
  bool v43; 
  __int64 v44; 
  __int64 v45; 
  unsigned __int8 *v46; 
  __int64 v47; 
  __int64 v48; 
  StatsBlobId StatsBlobForFile; 
  StatsGroup PrimaryStatsGroup; 
  bool IsStatsGroupObfuscated; 
  const unsigned __int8 *v52; 
  unsigned int v53; 
  __int64 v54; 
  int v55; 
  unsigned int v56; 
  unsigned __int8 *v57; 
  OnlineStorage *v58; 
  bool v59; 
  XUID result; 
  int v61; 
  unsigned int v62; 
  __int64 v63; 
  unsigned __int8 **p_buffer; 
  unsigned int *p_bufferSize; 
  __int64 v66; 
  unsigned __int64 userID; 
  OnlineStorageTask v68; 

  v66 = -2i64;
  v1 = controllerIndex;
  TaskCreateRequest::TaskCreateRequest(&v68.taskCreateRequest);
  fileEntries = v68.fileEntries;
  v3 = 16i64;
  do
  {
    OnlineStorageTaskFileEntry::OnlineStorageTaskFileEntry(fileEntries++);
    --v3;
  }
  while ( v3 );
  v4 = v1;
  v5 = &controllerStatData[v1];
  v5->playerStats[0].onlineStatWritePending = 0;
  memset_0(&v68, 0, sizeof(v68));
  Live_GetXuid(&result, v1);
  dwGetOnlineUserID(v1, &userID);
  v6 = 0;
  v68.fileEntryCount = 0;
  *(_WORD *)&v68.operation = 0;
  v68.priority[0] = 7;
  v68.controllerIndex = v1;
  v68.onTaskCompleteCallback = OnStatsWriteComplete;
  v68.validateUpload = 1;
  bdObjectStoreUploadUserObjectsVectorizedResponse::reset(&s_userStorageResponse_0);
  v68.uploadUserStorageResponse = &s_userStorageResponse_0;
  if ( LiveStorage_IsStatsBlobDirty(v1, STATS_ONLINE, STATS_BLOB_COMMON) )
  {
    StatsGroupBufferForSource = LiveStorage_GetStatsGroupBufferForSource(v1, STATSGROUP_COMMON, STATS_ONLINE);
    StatsGroupDataSize = LiveStorage_GetStatsGroupDataSize(STATSGROUP_COMMON);
    v9 = "commondata";
    if ( g_onlineMgr.analyticsFnFMode )
    {
      v10 = "commondata_fnf";
      if ( !g_onlineMgr.analyticsFnFMode->current.enabled )
        v10 = "commondata";
      v9 = v10;
    }
    CL_PlayerData_ApplyValidationHints(v1, STATS_ONLINE, STATSGROUP_COMMON);
    LiveStorage_ClearStatsBlobValidationHints(v1, STATS_ONLINE, STATS_BLOB_COMMON);
    Core_strcpy_truncate(v68.fileEntries[v68.fileEntryCount].fileName, 0x40ui64, v9);
    v68.fileEntries[v68.fileEntryCount].buffer = StatsGroupBufferForSource;
    v68.fileEntries[v68.fileEntryCount].bufferSize = StatsGroupDataSize;
    XUID::operator=(&v68.fileEntries[v68.fileEntryCount].xuid, &result);
    Instance = OnlineStorage::GetInstance();
    CurrentPlatform = OnlineStorage::GetCurrentPlatform(Instance);
    v68.fileEntries[v68.fileEntryCount++].platform[0] = CurrentPlatform;
    LiveStorage_SetStatsBlobDirty(v1, STATS_ONLINE, STATS_BLOB_COMMON, 0);
  }
  if ( LiveStorage_IsStatsBlobDirty(v1, STATS_ONLINE, STATS_BLOB_MP) )
  {
    v13 = LiveStorage_GetStatsGroupBufferForSource(v1, STATSGROUP_RANKED, STATS_ONLINE);
    v14 = LiveStorage_GetStatsGroupDataSize(STATSGROUP_RANKED);
    v15 = "mpdata";
    if ( g_onlineMgr.analyticsFnFMode )
    {
      v16 = "mpdata_fnf";
      if ( !g_onlineMgr.analyticsFnFMode->current.enabled )
        v16 = "mpdata";
      v15 = v16;
    }
    CL_PlayerData_ApplyValidationHints(v1, STATS_ONLINE, STATSGROUP_RANKED);
    LiveStorage_ClearStatsBlobValidationHints(v1, STATS_ONLINE, STATS_BLOB_MP);
    Core_strcpy_truncate(v68.fileEntries[v68.fileEntryCount].fileName, 0x40ui64, v15);
    v68.fileEntries[v68.fileEntryCount].buffer = v13;
    v68.fileEntries[v68.fileEntryCount].bufferSize = v14;
    XUID::operator=(&v68.fileEntries[v68.fileEntryCount].xuid, &result);
    v17 = OnlineStorage::GetInstance();
    v18 = OnlineStorage::GetCurrentPlatform(v17);
    v68.fileEntries[v68.fileEntryCount++].platform[0] = v18;
    LiveStorage_SetStatsBlobDirty(v1, STATS_ONLINE, STATS_BLOB_MP, 0);
  }
  if ( LiveStorage_IsStatsBlobDirty(v1, STATS_ONLINE, STATS_BLOB_CP) )
  {
    v19 = LiveStorage_GetStatsGroupBufferForSource(v1, STATSGROUP_COOP, STATS_ONLINE);
    v20 = LiveStorage_GetStatsGroupDataSize(STATSGROUP_COOP);
    v21 = "cpdata";
    if ( g_onlineMgr.analyticsFnFMode )
    {
      v22 = "cpdata_fnf";
      if ( !g_onlineMgr.analyticsFnFMode->current.enabled )
        v22 = "cpdata";
      v21 = v22;
    }
    CL_PlayerData_ApplyValidationHints(v1, STATS_ONLINE, STATSGROUP_COOP);
    LiveStorage_ClearStatsBlobValidationHints(v1, STATS_ONLINE, STATS_BLOB_CP);
    Core_strcpy_truncate(v68.fileEntries[v68.fileEntryCount].fileName, 0x40ui64, v21);
    v68.fileEntries[v68.fileEntryCount].buffer = v19;
    v68.fileEntries[v68.fileEntryCount].bufferSize = v20;
    XUID::operator=(&v68.fileEntries[v68.fileEntryCount].xuid, &result);
    v23 = OnlineStorage::GetInstance();
    v24 = OnlineStorage::GetCurrentPlatform(v23);
    v68.fileEntries[v68.fileEntryCount++].platform[0] = v24;
    LiveStorage_SetStatsBlobDirty(v1, STATS_ONLINE, STATS_BLOB_CP, 0);
  }
  if ( LiveStorage_IsStatsBlobDirty(v1, STATS_ONLINE, STATS_BLOB_RANKEDLOADOUTS) )
  {
    v25 = LiveStorage_GetStatsGroupBufferForSource(v1, STATSGROUP_RANKEDLOADOUTS, STATS_ONLINE);
    v26 = LiveStorage_GetStatsGroupDataSize(STATSGROUP_RANKEDLOADOUTS);
    v27 = "rankedloadouts";
    if ( g_onlineMgr.analyticsFnFMode )
    {
      v28 = "rankedloadouts_fnf";
      if ( !g_onlineMgr.analyticsFnFMode->current.enabled )
        v28 = "rankedloadouts";
      v27 = v28;
    }
    CL_PlayerData_ApplyValidationHints(v1, STATS_ONLINE, STATSGROUP_RANKEDLOADOUTS);
    LiveStorage_ClearStatsBlobValidationHints(v1, STATS_ONLINE, STATS_BLOB_RANKEDLOADOUTS);
    Core_strcpy_truncate(v68.fileEntries[v68.fileEntryCount].fileName, 0x40ui64, v27);
    v68.fileEntries[v68.fileEntryCount].buffer = v25;
    v68.fileEntries[v68.fileEntryCount].bufferSize = v26;
    XUID::operator=(&v68.fileEntries[v68.fileEntryCount].xuid, &result);
    v29 = OnlineStorage::GetInstance();
    v30 = OnlineStorage::GetCurrentPlatform(v29);
    v68.fileEntries[v68.fileEntryCount++].platform[0] = v30;
    LiveStorage_SetStatsBlobDirty(v1, STATS_ONLINE, STATS_BLOB_RANKEDLOADOUTS, 0);
  }
  if ( LiveStorage_IsStatsBlobDirty(v1, STATS_ONLINE, STATS_BLOB_PRIVATELOADOUTS) )
  {
    v31 = LiveStorage_GetStatsGroupBufferForSource(v1, STATSGROUP_PRIVATELOADOUTS, STATS_ONLINE);
    v32 = LiveStorage_GetStatsGroupDataSize(STATSGROUP_PRIVATELOADOUTS);
    v33 = "privateloadouts";
    if ( g_onlineMgr.analyticsFnFMode )
    {
      v34 = "privateloadouts_fnf";
      if ( !g_onlineMgr.analyticsFnFMode->current.enabled )
        v34 = "privateloadouts";
      v33 = v34;
    }
    CL_PlayerData_ApplyValidationHints(v1, STATS_ONLINE, STATSGROUP_PRIVATELOADOUTS);
    LiveStorage_ClearStatsBlobValidationHints(v1, STATS_ONLINE, STATS_BLOB_PRIVATELOADOUTS);
    Core_strcpy_truncate(v68.fileEntries[v68.fileEntryCount].fileName, 0x40ui64, v33);
    v68.fileEntries[v68.fileEntryCount].buffer = v31;
    v68.fileEntries[v68.fileEntryCount].bufferSize = v32;
    XUID::operator=(&v68.fileEntries[v68.fileEntryCount].xuid, &result);
    v35 = OnlineStorage::GetInstance();
    v36 = OnlineStorage::GetCurrentPlatform(v35);
    v68.fileEntries[v68.fileEntryCount++].platform[0] = v36;
    LiveStorage_SetStatsBlobDirty(v1, STATS_ONLINE, STATS_BLOB_PRIVATELOADOUTS, 0);
  }
  if ( LiveStorage_IsStatsBlobDirty(v1, STATS_ONLINE, STATS_BLOB_NONGAME) )
  {
    v37 = LiveStorage_GetStatsGroupBufferForSource(v1, STATSGROUP_NONGAME, STATS_ONLINE);
    v38 = LiveStorage_GetStatsGroupDataSize(STATSGROUP_NONGAME);
    v39 = "nongamedata";
    if ( g_onlineMgr.analyticsFnFMode )
    {
      v40 = "nongamedata_fnf";
      if ( !g_onlineMgr.analyticsFnFMode->current.enabled )
        v40 = "nongamedata";
      v39 = v40;
    }
    CL_PlayerData_ApplyValidationHints(v1, STATS_ONLINE, STATSGROUP_NONGAME);
    LiveStorage_ClearStatsBlobValidationHints(v1, STATS_ONLINE, STATS_BLOB_NONGAME);
    Core_strcpy_truncate(v68.fileEntries[v68.fileEntryCount].fileName, 0x40ui64, v39);
    v68.fileEntries[v68.fileEntryCount].buffer = v37;
    v68.fileEntries[v68.fileEntryCount].bufferSize = v38;
    XUID::operator=(&v68.fileEntries[v68.fileEntryCount].xuid, &result);
    v41 = OnlineStorage::GetInstance();
    v42 = OnlineStorage::GetCurrentPlatform(v41);
    v68.fileEntries[v68.fileEntryCount++].platform[0] = v42;
    LiveStorage_SetStatsBlobDirty(v1, STATS_ONLINE, STATS_BLOB_NONGAME, 0);
  }
  if ( v68.fileEntryCount > 0x10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_storage_upload.cpp", 528, ASSERT_TYPE_ASSERT, "(storageTask.fileEntryCount <= ( sizeof( *array_counter( storageTask.fileEntries ) ) + 0 ))", (const char *)&queryFormat, "storageTask.fileEntryCount <= ARRAY_COUNT( storageTask.fileEntries )") )
    __debugbreak();
  v43 = v68.fileEntryCount == 0;
  if ( !v68.fileEntryCount )
  {
    Com_PrintWarning(16, "LiveStorage_UploadStats called when no stats blob has changed.\n");
    v43 = v68.fileEntryCount == 0;
  }
  if ( v43 )
  {
    Com_PrintWarning(16, "LiveStorage_UploadStats called, but no stats blobs need to be uploaded.  Not doing anything for controller %i\n", (unsigned int)v1);
  }
  else
  {
    LiveStorage_WaitForWriteStatsBuffer(v1);
    v5->writeStatsBufferInUse = 1;
    v44 = 0i64;
    v61 = 0;
    if ( v68.fileEntryCount )
    {
      while ( 1 )
      {
        v45 = v44;
        p_buffer = &v68.fileEntries[v44].buffer;
        v46 = *p_buffer;
        p_bufferSize = &v68.fileEntries[v44].bufferSize;
        v47 = *p_bufferSize;
        v62 = v6;
        v48 = v6 + 4;
        if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_storage_upload.cpp", 554, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
          __debugbreak();
        StatsBlobForFile = LiveStorage_GetStatsBlobForFile(v68.fileEntries[v45].fileName);
        PrimaryStatsGroup = Com_PlayerData_GetPrimaryStatsGroup(StatsBlobForFile);
        IsStatsGroupObfuscated = LiveStorage_IsStatsGroupObfuscated(v1, PrimaryStatsGroup, STATS_ONLINE);
        v59 = IsStatsGroupObfuscated;
        if ( IsStatsGroupObfuscated )
          LiveStorage_LocallyUnObfuscateStatsGroup(v1, PrimaryStatsGroup, STATS_ONLINE);
        CL_PlayerData_UpdateDDLChecksum(v1, STATS_ONLINE, PrimaryStatsGroup);
        v52 = v46 + 4;
        LODWORD(v63) = MemFile_CompressWithZLib(v52, v47 - 4, &v5->writeStatsBuffer[v48], 66676 - v48);
        if ( (int)v63 <= 0 )
          break;
        v53 = -1;
        v54 = v47 - 4;
        if ( v47 != 4 )
        {
          do
          {
            v53 = (v53 >> 8) ^ g_crc32Table[*v52++ ^ (unsigned __int64)(unsigned __int8)v53];
            --v54;
          }
          while ( v54 );
        }
        v55 = ~v53;
        if ( v59 )
          LiveStorage_LocallyObfuscateStatsGroup(v1, PrimaryStatsGroup, STATS_ONLINE);
        v56 = v62;
        v57 = &v5->writeStatsBuffer[v62];
        *v57 = v55;
        v5->writeStatsBuffer[v56 + 1] = BYTE1(v55);
        v5->writeStatsBuffer[v56 + 2] = BYTE2(v55);
        v5->writeStatsBuffer[v56 + 3] = HIBYTE(v55);
        v6 = v63 + v48;
        if ( v6 > 0x10474 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_storage_upload.cpp", 608, ASSERT_TYPE_ASSERT, "(writeBufferOffset <= sizeof( controllerStats->writeStatsBuffer ))", "%s\n\tExceeded the maximum size of the stats write buffer.", "writeBufferOffset <= sizeof( controllerStats->writeStatsBuffer )") )
          __debugbreak();
        *p_buffer = v57;
        *p_bufferSize = v6 - v56;
        v44 = (unsigned int)(v61 + 1);
        v61 = v44;
        if ( (unsigned int)v44 >= v68.fileEntryCount )
        {
          v4 = v1;
          goto LABEL_61;
        }
      }
      Com_PrintWarning(16, "Couldn't compress storage upload, will retry.\n");
      v5->playerStats[0].onlineStatWritePending = 1;
      v5->writeStatsBufferInUse = 0;
      if ( IsStatsGroupObfuscated )
        LiveStorage_LocallyObfuscateStatsGroup(v1, PrimaryStatsGroup, STATS_ONLINE);
    }
    else
    {
LABEL_61:
      v58 = OnlineStorage::GetInstance();
      if ( OnlineStorage::EnqueueTask(v58, &v68) )
      {
        Com_Printf(16, "Beginning stats upload (%d files) for controller %i\n", v68.fileEntryCount, (unsigned int)v1);
        g_isUploadingStats[v4] = 1;
      }
      else
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_storage_upload.cpp", 623, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unable to upload player data: Unable to enqueue the task!") )
          __debugbreak();
        v5->writeStatsBufferInUse = 0;
      }
      if ( !PlayercardCache_IsUploadRequested(v1) && PlayercardCache_HasLocalPlayercard(v1) )
      {
        PlayercardCache_LoadPlayercard_ForEdit(v1);
        PlayercardCache_RequestUpload(v1);
      }
      g_LastUploadUserStatsAttemptTime = Sys_Milliseconds();
    }
  }
  TaskCreateRequest::~TaskCreateRequest(&v68.taskCreateRequest);
}

/*
==============
LiveStorage_WritingStats
==============
*/
_BOOL8 LiveStorage_WritingStats(const int controllerIndex)
{
  __int64 v1; 
  int v4; 

  v1 = controllerIndex;
  if ( (unsigned int)controllerIndex >= 8 )
  {
    v4 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_storage_upload.cpp", 68, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex, v4) )
      __debugbreak();
  }
  return g_isUploadingStats[v1];
}

/*
==============
OnLoadoutValidationComplete
==============
*/
void OnLoadoutValidationComplete(GenericTask *pTask, eTaskManagerTaskState taskState)
{
  unsigned __int64 TransactionID; 
  bdLobbyErrorCode ErrorCode; 
  __int64 m_controllerIndex; 
  unsigned int ValidationTokenSize; 

  if ( taskState )
  {
    if ( taskState > TASKSTATE_SUCCESS )
    {
      if ( taskState <= TASKSTATE_TERMINAL_SYSTEM_ERROR )
      {
        TransactionID = bdRemoteTask::getTransactionID(pTask->m_remoteDemonwareTask.m_ptr);
        ErrorCode = bdRemoteTask::getErrorCode(pTask->m_remoteDemonwareTask.m_ptr);
        Com_PrintError(25, "loadout validation - Error: %d (transaction:%zu).\n", (unsigned int)ErrorCode, TransactionID);
        return;
      }
      if ( taskState <= TASKSTATE_CANCELED )
      {
        Com_PrintError(25, "loadout validation - Canceled.\n");
        return;
      }
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_storage_upload.cpp", 131, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "unhandled task state!") )
      __debugbreak();
  }
  else
  {
    m_controllerIndex = pTask->m_controllerIndex;
    Com_Printf(25, "loadout validation complete %d.\n", (unsigned int)pTask->m_controllerIndex);
    ValidationTokenSize = bdValidationTokenResult::getValidationTokenSize((bdValidationTokenResult *)controllerStatData[m_controllerIndex].playerStats[0].validatedStatsData);
    Com_Printf(25, "validation token size = %d.\n", ValidationTokenSize);
  }
}

/*
==============
OnStatsWriteComplete
==============
*/
void OnStatsWriteComplete(OnlineStorageTask *storageTask)
{
  OnlineStorageTask *v1; 
  unsigned __int64 controllerIndex; 
  PlayerStatNetworkData *v3; 
  OnlineStorageTaskStatus status; 
  unsigned int i; 
  int StatsBlobForFile; 
  bdObjectStoreUploadUserObjectsVectorizedResponse *uploadUserStorageResponse; 
  bdArray<bdObjectStoreValidationToken> *ValidationTokenList; 
  unsigned int v9; 
  unsigned int m_size; 
  __int64 v11; 
  bdObjectStoreObjectID *ObjectID; 
  char *ObjectName; 
  bdValidationTokenResult *ValidationTokenResult; 
  unsigned int ValidationTokenSize; 
  bdValidationTokenResult *v16; 
  unsigned __int64 TransactionID; 
  bdObjectStoreValidationToken *v18; 
  bdValidationTokenResult *v19; 
  unsigned int v20; 
  bdObjectStoreValidationToken *v21; 
  bdObjectStoreObjectID *v22; 
  const char *v23; 
  Windows::Foundation::IAsyncInfo *m_asyncInfo; 
  bdValidationTokenResult *v25; 
  bdValidationTokenResult *v26; 
  Online_Loot *Instance; 
  bdObjectStoreValidationToken *v28; 
  const bdValidationTokenResult *v29; 
  unsigned int v30; 
  bool IsBanned; 
  bool v32; 
  __int64 v33; 
  char v34; 
  __int64 v35; 
  char v36; 
  bdObjectStoreValidationToken *v37; 
  bdValidationTokenResult *v38; 
  unsigned int v39; 
  bdObjectStoreValidationToken *v40; 
  bdValidationTokenResult *v41; 
  const unsigned __int8 *ValidationToken; 
  bdObjectStoreValidationToken *v43; 
  bdValidationTokenResult *v44; 
  unsigned int v45; 
  bdReferencable *v46; 
  bdValidationTokenResult *v47; 
  unsigned int v48; 
  bool v49; 
  TaskCreateRequest request; 
  PlayerStatNetworkData *v51; 
  OnlineStorageTask *v52; 
  __int64 v53; 
  PlayerStatNetworkData *v54; 
  unsigned __int8 *validatedStatsData; 
  bdValidationTokenResult result; 
  bdValidationTokenResult v57; 
  bdValidationTokenResult v58; 
  bdValidationTokenResult v59; 
  bdValidationTokenResult v60; 
  bdValidationTokenResult v61; 
  bdValidationTokenResult v62; 
  bdValidationTokenResult v63; 

  v53 = -2i64;
  v1 = storageTask;
  v52 = storageTask;
  controllerIndex = storageTask->controllerIndex;
  v3 = &controllerStatData[controllerIndex];
  v51 = v3;
  v54 = v3;
  if ( controllerIndex >= 8 )
  {
    j___report_rangecheckfailure(controllerStatData);
    JUMPOUT(0x1413BD511i64);
  }
  g_isUploadingStats[controllerIndex] = 0;
  if ( storageTask->status == AERIAL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_storage_upload.cpp", 152, ASSERT_TYPE_ASSERT, "(storageTask->status != OnlineStorageTaskStatus::IN_PROGRESS)", (const char *)&queryFormat, "storageTask->status != OnlineStorageTaskStatus::IN_PROGRESS") )
    __debugbreak();
  status = v1->status;
  if ( !v3->writeStatsBufferInUse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_storage_upload.cpp", 156, ASSERT_TYPE_ASSERT, "(controllerStats->writeStatsBufferInUse)", (const char *)&queryFormat, "controllerStats->writeStatsBufferInUse") )
    __debugbreak();
  v3->writeStatsBufferInUse = 0;
  if ( status == (AERIAL|FREE) )
  {
    if ( v1->status != (AERIAL|FREE) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_storage_upload.cpp", 186, ASSERT_TYPE_ASSERT, "(storageTask->status == OnlineStorageTaskStatus::SUCCESS)", (const char *)&queryFormat, "storageTask->status == OnlineStorageTaskStatus::SUCCESS") )
      __debugbreak();
    g_NumUploadUserStatsFailures = 0;
    Com_Printf(16, "OnStatsWriteComplete: Successfully wrote persistent stats data.\n");
    uploadUserStorageResponse = v1->uploadUserStorageResponse;
    if ( !uploadUserStorageResponse )
    {
      Com_PrintWarning(25, "OnStatsWriteComplete: uploadUserStorageResponse is not valid.\n");
      return;
    }
    ValidationTokenList = (bdArray<bdObjectStoreValidationToken> *)bdObjectStoreUploadUserObjectsVectorizedResponse::getValidationTokenList(uploadUserStorageResponse);
    Com_Printf(16, "OnStatsWriteComplete: Starting leaderboard update with %d tokens to process.\n", ValidationTokenList->m_size);
    v9 = 0;
    m_size = ValidationTokenList->m_size;
    if ( !m_size )
    {
LABEL_63:
      CleanupStorageTask(v1);
      return;
    }
    while ( 1 )
    {
      *(_QWORD *)&request.m_controllerIndex = -1i64;
      memset(&request.m_appData, 0, 48);
      request.m_cancelTaskOnSignoutEvent = 1;
      request.m_timeoutInSeconds = 0;
      bdHandleAssert(v9 < m_size, "rangeCheck(i)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdarray.inl", "bdArray<class bdObjectStoreValidationToken>::operator []", 0x70u, "bdArray<T>::operator[], rangecheck failed");
      v11 = 10408i64 * v9;
      ObjectID = (bdObjectStoreObjectID *)bdObjectStoreValidationToken::getObjectID((bdObjectStoreValidationToken *)((char *)ValidationTokenList->m_data + v11));
      ObjectName = (char *)bdObjectStoreObjectID::getObjectName(ObjectID);
      bdHandleAssert(v9 < ValidationTokenList->m_size, "rangeCheck(i)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdarray.inl", "bdArray<class bdObjectStoreValidationToken>::operator []", 0x70u, "bdArray<T>::operator[], rangecheck failed");
      ValidationTokenResult = bdObjectStoreValidationToken::getValidationTokenResult((bdObjectStoreValidationToken *)((char *)ValidationTokenList->m_data + v11), &result);
      ValidationTokenSize = bdValidationTokenResult::getValidationTokenSize(ValidationTokenResult);
      Com_Printf(25, "OnStatsWriteComplete:validation token of size %d or received %s\n", ValidationTokenSize, ObjectName);
      bdValidationTokenResult::~bdValidationTokenResult((bdValidationTokenResult *)&result.gap2824[4]);
      bdReferencable::~bdReferencable((bdReferencable *)&result.gap2824[4]);
      request.m_controllerIndex = controllerIndex;
      bdHandleAssert(v9 < ValidationTokenList->m_size, "rangeCheck(i)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdarray.inl", "bdArray<class bdObjectStoreValidationToken>::operator []", 0x70u, "bdArray<T>::operator[], rangecheck failed");
      v16 = bdObjectStoreValidationToken::getValidationTokenResult((bdObjectStoreValidationToken *)((char *)ValidationTokenList->m_data + v11), &v57);
      LOBYTE(v11) = bdValidationTokenResult::getValidationTokenSize(v16) == 0;
      bdValidationTokenResult::~bdValidationTokenResult((bdValidationTokenResult *)&v57.gap2824[4]);
      bdReferencable::~bdReferencable((bdReferencable *)&v57.gap2824[4]);
      if ( (_BYTE)v11 )
      {
        TransactionID = bdRESTResponse::getTransactionID((bdRESTResponse *)(&v1->uploadUserStorageResponse->__vftable + 2));
        v18 = (bdObjectStoreValidationToken *)bdArray<bdObjectStoreValidationToken>::operator[](ValidationTokenList, v9);
        v19 = bdObjectStoreValidationToken::getValidationTokenResult(v18, &v58);
        v20 = bdValidationTokenResult::getValidationTokenSize(v19);
        v21 = (bdObjectStoreValidationToken *)bdArray<bdObjectStoreValidationToken>::operator[](ValidationTokenList, v9);
        v22 = (bdObjectStoreObjectID *)bdObjectStoreValidationToken::getObjectID(v21);
        v23 = bdObjectStoreObjectID::getObjectName(v22);
        Com_PrintWarning(25, "OnStatsWriteComplete: Validated token size is zero for file %s (size = %d), Transaction ID(%lu) \n", v23, v20, TransactionID);
        bdValidationTokenResult::~bdValidationTokenResult((bdValidationTokenResult *)&v58.gap2824[4]);
        bdReferencable::~bdReferencable((bdReferencable *)&v58.gap2824[4]);
        request.m_onCompletionCallback = NULL;
        request.m_onUpdateCallback = NULL;
        request.m_appSecondaryCallback = NULL;
        request.m_timeoutInSeconds = 0;
        m_asyncInfo = request.m_asyncInfo;
        if ( request.m_asyncInfo )
        {
          request.m_asyncInfo->__abi_Release(request.m_asyncInfo);
          m_asyncInfo = NULL;
          request.m_asyncInfo = NULL;
        }
        if ( request.m_remoteDemonwareTask.m_ptr )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)&request.m_remoteDemonwareTask.m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
          {
            if ( request.m_remoteDemonwareTask.m_ptr )
              ((void (__fastcall *)(bdRemoteTask *, __int64))request.m_remoteDemonwareTask.m_ptr->~bdReferencable)(request.m_remoteDemonwareTask.m_ptr, 1i64);
            request.m_remoteDemonwareTask.m_ptr = NULL;
          }
          m_asyncInfo = request.m_asyncInfo;
        }
        if ( m_asyncInfo )
          m_asyncInfo->__abi_Release(m_asyncInfo);
        goto LABEL_62;
      }
      if ( !strcmp_0(ObjectName, "rankedloadouts") )
        break;
      if ( strcmp_0(ObjectName, "privateloadouts") && strcmp_0(ObjectName, "nongamedata") )
      {
        IsBanned = LiveAntiCheat_FeatureIsBanned(controllerIndex, 3);
        v32 = LiveAntiCheat_FeatureIsBanned(controllerIndex, 9);
        v49 = v32;
        v33 = 0i64;
        do
        {
          v34 = ObjectName[v33++];
          if ( v34 != aMpdata[v33 - 1] )
          {
            v35 = 0i64;
            while ( 1 )
            {
              v36 = ObjectName[v35++];
              if ( v36 != aCpdata[v35 - 1] )
                break;
              if ( v35 == 7 )
              {
                if ( !v32 )
                  goto LABEL_56;
                Com_DPrintf(22, "OnStatsWriteComplete: Not uploading leaderboard stats: local controller index %i is banned from CP leaderboard writes.\n", (unsigned int)controllerIndex);
                goto LABEL_61;
              }
            }
            if ( !strcmp_0(ObjectName, "commondata") && IsBanned && v49 )
            {
              Com_DPrintf(22, "OnStatsWriteComplete: Not uploading leaderboard stats: local controller index %i is banned from MP and CP leaderboard writes.\n", (unsigned int)controllerIndex);
              goto LABEL_61;
            }
            goto LABEL_56;
          }
        }
        while ( v33 != 7 );
        if ( IsBanned )
        {
          Com_DPrintf(22, "OnStatsWriteComplete: Not uploading leaderboard stats: local controller index %i is banned from MP leaderboard writes.\n", (unsigned int)controllerIndex);
          goto LABEL_61;
        }
LABEL_56:
        v37 = (bdObjectStoreValidationToken *)bdArray<bdObjectStoreValidationToken>::operator[](ValidationTokenList, v9);
        v38 = bdObjectStoreValidationToken::getValidationTokenResult(v37, &v61);
        v39 = bdValidationTokenResult::getValidationTokenSize(v38);
        v40 = (bdObjectStoreValidationToken *)bdArray<bdObjectStoreValidationToken>::operator[](ValidationTokenList, v9);
        v41 = bdObjectStoreValidationToken::getValidationTokenResult(v40, &v60);
        ValidationToken = bdValidationTokenResult::getValidationToken(v41);
        v30 = dwWriteServerValidatedStats(&request, ValidationToken, v39);
        bdValidationTokenResult::~bdValidationTokenResult((bdValidationTokenResult *)&v60.gap2824[4]);
        bdReferencable::~bdReferencable((bdReferencable *)&v60.gap2824[4]);
        bdValidationTokenResult::~bdValidationTokenResult((bdValidationTokenResult *)&v61.gap2824[4]);
        bdReferencable::~bdReferencable((bdReferencable *)&v61.gap2824[4]);
        goto LABEL_57;
      }
LABEL_61:
      TaskCreateRequest::~TaskCreateRequest(&request);
LABEL_62:
      ++v9;
      m_size = ValidationTokenList->m_size;
      if ( v9 >= m_size )
        goto LABEL_63;
    }
    validatedStatsData = v51->playerStats[0].validatedStatsData;
    if ( v51 == (PlayerStatNetworkData *)-66672i64 )
    {
      v26 = NULL;
    }
    else
    {
      bdValidationTokenResult::bdValidationTokenResult((bdValidationTokenResult *)v51->playerStats[0].validatedStatsData);
      v26 = v25;
    }
    Instance = Online_Loot::GetInstance();
    v28 = (bdObjectStoreValidationToken *)bdArray<bdObjectStoreValidationToken>::operator[](ValidationTokenList, v9);
    v29 = bdObjectStoreValidationToken::getValidationTokenResult(v28, &v59);
    v30 = Online_Loot::ValidateInventoryItemsToken(Instance, controllerIndex, ObjectName, v29, v26, OnLoadoutValidationComplete);
    bdValidationTokenResult::~bdValidationTokenResult((bdValidationTokenResult *)&v59.gap2824[4]);
    bdReferencable::~bdReferencable((bdReferencable *)&v59.gap2824[4]);
    v1 = v52;
LABEL_57:
    v43 = (bdObjectStoreValidationToken *)bdArray<bdObjectStoreValidationToken>::operator[](ValidationTokenList, v9);
    if ( v30 )
    {
      v44 = bdObjectStoreValidationToken::getValidationTokenResult(v43, &v62);
      v45 = bdValidationTokenResult::getValidationTokenSize(v44);
      Com_Printf(25, "OnStatsWriteComplete: Uploading validated stats for file %s (size = %d)\n", ObjectName, v45);
      bdValidationTokenResult::~bdValidationTokenResult((bdValidationTokenResult *)&v62.gap2824[4]);
      v46 = (bdReferencable *)&v62.gap2824[4];
    }
    else
    {
      v47 = bdObjectStoreValidationToken::getValidationTokenResult(v43, &v63);
      v48 = bdValidationTokenResult::getValidationTokenSize(v47);
      Com_PrintWarning(25, "OnStatsWriteComplete: Failed to create task for uploading validated stats for file %s (size = %d)\n", ObjectName, v48);
      bdValidationTokenResult::~bdValidationTokenResult((bdValidationTokenResult *)&v63.gap2824[4]);
      v46 = (bdReferencable *)&v63.gap2824[4];
    }
    bdReferencable::~bdReferencable(v46);
    goto LABEL_61;
  }
  Com_PrintError(16, "OnStatsWriteComplete: Unable to write persistent stats data\n");
  v3->playerStats[0].onlineStatWritePending = 1;
  for ( i = 0; i < v1->fileEntryCount; ++i )
  {
    StatsBlobForFile = LiveStorage_GetStatsBlobForFile(v1->fileEntries[i].fileName);
    if ( StatsBlobForFile >= 6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_storage_upload.cpp", 174, ASSERT_TYPE_ASSERT, "(statsBlob < STATS_BLOB_COUNT)", (const char *)&queryFormat, "statsBlob < STATS_BLOB_COUNT") )
      __debugbreak();
    LiveStorage_SetStatsBlobDirty(controllerIndex, STATS_ONLINE, (StatsBlobId)StatsBlobForFile, 1);
    LiveStorage_SetStatsBlobFailedUpload(controllerIndex, STATS_ONLINE, (StatsBlobId)StatsBlobForFile, 1);
  }
  ++g_NumUploadUserStatsFailures;
  if ( !v1->uploadUserStorageResponse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_storage_upload.cpp", 139, ASSERT_TYPE_ASSERT, "(storageTask->uploadUserStorageResponse)", (const char *)&queryFormat, "storageTask->uploadUserStorageResponse") )
    __debugbreak();
  v1->uploadUserStorageResponse = NULL;
}


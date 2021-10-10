/*
==============
LiveStorage_DownloadStats
==============
*/

void __fastcall LiveStorage_DownloadStats(const int controllerIndex)
{
  ?LiveStorage_DownloadStats@@YAXH@Z(controllerIndex);
}

/*
==============
OnStatsDownloadComplete
==============
*/

void __fastcall OnStatsDownloadComplete(OnlineStorageTask *storageTask)
{
  ?OnStatsDownloadComplete@@YAXPEAUOnlineStorageTask@@@Z(storageTask);
}

/*
==============
LiveStorage_GettingStats
==============
*/

bool __fastcall LiveStorage_GettingStats(const int controllerIndex)
{
  return ?LiveStorage_GettingStats@@YA_NH@Z(controllerIndex);
}

/*
==============
OnStatsDownloadComplete_Internal
==============
*/

bool __fastcall OnStatsDownloadComplete_Internal(OnlineStorageTask *storageTask)
{
  return ?OnStatsDownloadComplete_Internal@@YA_NPEAUOnlineStorageTask@@@Z(storageTask);
}

/*
==============
LiveStorage_FinishDownloadingStats
==============
*/

void __fastcall LiveStorage_FinishDownloadingStats(const int controllerIndex)
{
  ?LiveStorage_FinishDownloadingStats@@YAXH@Z(controllerIndex);
}

/*
==============
LiveStorage_DownloadStats
==============
*/
void LiveStorage_DownloadStats(const int controllerIndex)
{
  __int64 v1; 
  __int64 v2; 
  DWServicesAccess *Instance; 
  int v4; 
  OnlineStorageTaskFileEntry *fileEntries; 
  __int64 v6; 
  const char *v7; 
  const char *v8; 
  OnlineStorage *v9; 
  char CurrentPlatform; 
  OnlineStorage *v11; 
  unsigned __int8 *FileResultBuffer; 
  const char *v13; 
  const char *v14; 
  OnlineStorage *v15; 
  char v16; 
  OnlineStorage *v17; 
  unsigned __int8 *v18; 
  const char *v19; 
  const char *v20; 
  OnlineStorage *v21; 
  char v22; 
  OnlineStorage *v23; 
  unsigned __int8 *v24; 
  const char *v25; 
  const char *v26; 
  OnlineStorage *v27; 
  char v28; 
  OnlineStorage *v29; 
  unsigned __int8 *v30; 
  const char *v31; 
  const char *v32; 
  OnlineStorage *v33; 
  char v34; 
  OnlineStorage *v35; 
  unsigned __int8 *v36; 
  const char *v37; 
  const char *v38; 
  OnlineStorage *v39; 
  char v40; 
  OnlineStorage *v41; 
  unsigned __int8 *v42; 
  OnlineStorage *v43; 
  __int64 v44; 
  __int64 v45; 
  XUID result; 
  bdArray<bdObjectStoreErrorWrappedObject> objectList; 
  __int64 v48; 
  OnlineStorageTask newTask; 
  bdObjectStoreErrorWrappedObject value; 
  bdObjectStoreObject object; 

  v48 = -2i64;
  v1 = controllerIndex;
  if ( (unsigned int)controllerIndex >= 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_storage_download.cpp", 282, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex, 8) )
    __debugbreak();
  v2 = v1;
  if ( (unsigned int)v1 >= 8 )
  {
    LODWORD(v45) = 8;
    LODWORD(v44) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_storage_download.cpp", 65, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", v44, v45) )
      __debugbreak();
  }
  if ( g_isDownloadingStats[v1] )
  {
    if ( controllerStatData[v2].playerStats[0].statsFetched && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_storage_download.cpp", 296, ASSERT_TYPE_ASSERT, "(!controllerStats->playerStats[statsSource].statsFetched)", (const char *)&queryFormat, "!controllerStats->playerStats[statsSource].statsFetched") )
      __debugbreak();
  }
  else
  {
    controllerStatData[v2].playerStats[0].statsFetched = 0;
    LiveStorage_ClearPlayerDataObfuscated(v1, STATS_ONLINE);
    if ( LiveStorage_MaySetPersistentData_ControllerIndex(v1) && Live_IsUserSignedInToDemonware(v1) )
    {
      Instance = DWServicesAccess::GetInstance();
      if ( DWServicesAccess::isReady(Instance, v1) && OnlineStorage::GetInstance()->m_initialized )
      {
        v4 = Sys_Milliseconds();
        if ( !g_NumFetchUserStatsAttempts || Live_GetShouldDemonwareRetry((v4 - g_LastFetchUserStatsAttemptTime) / 1000, g_NumFetchUserStatsAttempts, 0x3Cu) )
        {
          result.m_id = (unsigned __int64)&newTask;
          *(_QWORD *)&newTask.taskCreateRequest.m_controllerIndex = -1i64;
          memset(&newTask.taskCreateRequest.m_appData, 0, 48);
          newTask.taskCreateRequest.m_cancelTaskOnSignoutEvent = 1;
          newTask.taskCreateRequest.m_timeoutInSeconds = 0;
          fileEntries = newTask.fileEntries;
          v6 = 16i64;
          do
          {
            OnlineStorageTaskFileEntry::OnlineStorageTaskFileEntry(fileEntries++);
            --v6;
          }
          while ( v6 );
          objectList.m_data = NULL;
          *(_QWORD *)&objectList.m_capacity = 0i64;
          memset_0(&newTask, 0, sizeof(newTask));
          Live_GetXuid(&result, v1);
          newTask.fileEntryCount = 0;
          *(_WORD *)&newTask.operation = 1;
          newTask.priority[0] = 6;
          newTask.controllerIndex = v1;
          newTask.onTaskCompleteCallback = OnStatsDownloadComplete;
          bdObjectStoreGetUserObjectsVectorizedResponse::reset(&s_userStorageResponse);
          newTask.getUserStorageResponse = &s_userStorageResponse;
          ++g_NumFetchUserStatsAttempts;
          g_LastFetchUserStatsAttemptTime = v4;
          Com_DPrintf(16, "Requesting on-line stats for controller %d\n", (unsigned int)v1);
          v7 = "commondata";
          if ( g_onlineMgr.analyticsFnFMode )
          {
            v8 = "commondata_fnf";
            if ( !g_onlineMgr.analyticsFnFMode->current.enabled )
              v8 = "commondata";
            v7 = v8;
          }
          Core_strcpy_truncate(newTask.fileEntries[newTask.fileEntryCount].fileName, 0x40ui64, v7);
          XUID::operator=(&newTask.fileEntries[newTask.fileEntryCount].xuid, &result);
          v9 = OnlineStorage::GetInstance();
          CurrentPlatform = OnlineStorage::GetCurrentPlatform(v9);
          newTask.fileEntries[newTask.fileEntryCount].platform[0] = CurrentPlatform;
          bdObjectStoreErrorWrappedObject::bdObjectStoreErrorWrappedObject(&value);
          v11 = OnlineStorage::GetInstance();
          FileResultBuffer = OnlineStorage::AllocateFileResultBuffer(v11);
          if ( !FileResultBuffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_storage_download.cpp", 380, ASSERT_TYPE_ASSERT, "(resultBuffer)", (const char *)&queryFormat, "resultBuffer") )
            __debugbreak();
          bdObjectStoreObject::bdObjectStoreObject(&object, FileResultBuffer, 0x8000ui64);
          bdObjectStoreErrorWrappedObject::setObject(&value, &object);
          bdArray<bdObjectStoreErrorWrappedObject>::pushBack(&objectList, &value);
          ++newTask.fileEntryCount;
          bdMemory::deallocate(object.m_metadata.m_tags.m_data);
          object.m_metadata.m_tags.m_data = NULL;
          *(_QWORD *)&object.m_metadata.m_tags.m_capacity = 0i64;
          bdObjectStoreACL::~bdObjectStoreACL(&object.m_metadata.m_acl);
          bdMemory::deallocate(value.m_object.m_metadata.m_tags.m_data);
          value.m_object.m_metadata.m_tags.m_data = NULL;
          *(_QWORD *)&value.m_object.m_metadata.m_tags.m_capacity = 0i64;
          bdObjectStoreACL::~bdObjectStoreACL(&value.m_object.m_metadata.m_acl);
          v13 = "mpdata";
          if ( g_onlineMgr.analyticsFnFMode )
          {
            v14 = "mpdata_fnf";
            if ( !g_onlineMgr.analyticsFnFMode->current.enabled )
              v14 = "mpdata";
            v13 = v14;
          }
          Core_strcpy_truncate(newTask.fileEntries[newTask.fileEntryCount].fileName, 0x40ui64, v13);
          XUID::operator=(&newTask.fileEntries[newTask.fileEntryCount].xuid, &result);
          v15 = OnlineStorage::GetInstance();
          v16 = OnlineStorage::GetCurrentPlatform(v15);
          newTask.fileEntries[newTask.fileEntryCount].platform[0] = v16;
          bdObjectStoreErrorWrappedObject::bdObjectStoreErrorWrappedObject(&value);
          v17 = OnlineStorage::GetInstance();
          v18 = OnlineStorage::AllocateFileResultBuffer(v17);
          if ( !v18 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_storage_download.cpp", 404, ASSERT_TYPE_ASSERT, "(resultBuffer)", (const char *)&queryFormat, "resultBuffer") )
            __debugbreak();
          bdObjectStoreObject::bdObjectStoreObject(&object, v18, 0x8000ui64);
          bdObjectStoreErrorWrappedObject::setObject(&value, &object);
          bdArray<bdObjectStoreErrorWrappedObject>::pushBack(&objectList, &value);
          ++newTask.fileEntryCount;
          bdMemory::deallocate(object.m_metadata.m_tags.m_data);
          object.m_metadata.m_tags.m_data = NULL;
          *(_QWORD *)&object.m_metadata.m_tags.m_capacity = 0i64;
          bdObjectStoreACL::~bdObjectStoreACL(&object.m_metadata.m_acl);
          bdMemory::deallocate(value.m_object.m_metadata.m_tags.m_data);
          value.m_object.m_metadata.m_tags.m_data = NULL;
          *(_QWORD *)&value.m_object.m_metadata.m_tags.m_capacity = 0i64;
          bdObjectStoreACL::~bdObjectStoreACL(&value.m_object.m_metadata.m_acl);
          v19 = "cpdata";
          if ( g_onlineMgr.analyticsFnFMode )
          {
            v20 = "cpdata_fnf";
            if ( !g_onlineMgr.analyticsFnFMode->current.enabled )
              v20 = "cpdata";
            v19 = v20;
          }
          Core_strcpy_truncate(newTask.fileEntries[newTask.fileEntryCount].fileName, 0x40ui64, v19);
          XUID::operator=(&newTask.fileEntries[newTask.fileEntryCount].xuid, &result);
          v21 = OnlineStorage::GetInstance();
          v22 = OnlineStorage::GetCurrentPlatform(v21);
          newTask.fileEntries[newTask.fileEntryCount].platform[0] = v22;
          bdObjectStoreErrorWrappedObject::bdObjectStoreErrorWrappedObject(&value);
          v23 = OnlineStorage::GetInstance();
          v24 = OnlineStorage::AllocateFileResultBuffer(v23);
          if ( !v24 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_storage_download.cpp", 428, ASSERT_TYPE_ASSERT, "(resultBuffer)", (const char *)&queryFormat, "resultBuffer") )
            __debugbreak();
          bdObjectStoreObject::bdObjectStoreObject(&object, v24, 0x8000ui64);
          bdObjectStoreErrorWrappedObject::setObject(&value, &object);
          bdArray<bdObjectStoreErrorWrappedObject>::pushBack(&objectList, &value);
          ++newTask.fileEntryCount;
          bdMemory::deallocate(object.m_metadata.m_tags.m_data);
          object.m_metadata.m_tags.m_data = NULL;
          *(_QWORD *)&object.m_metadata.m_tags.m_capacity = 0i64;
          bdObjectStoreACL::~bdObjectStoreACL(&object.m_metadata.m_acl);
          bdMemory::deallocate(value.m_object.m_metadata.m_tags.m_data);
          value.m_object.m_metadata.m_tags.m_data = NULL;
          *(_QWORD *)&value.m_object.m_metadata.m_tags.m_capacity = 0i64;
          bdObjectStoreACL::~bdObjectStoreACL(&value.m_object.m_metadata.m_acl);
          v25 = "rankedloadouts";
          if ( g_onlineMgr.analyticsFnFMode )
          {
            v26 = "rankedloadouts_fnf";
            if ( !g_onlineMgr.analyticsFnFMode->current.enabled )
              v26 = "rankedloadouts";
            v25 = v26;
          }
          Core_strcpy_truncate(newTask.fileEntries[newTask.fileEntryCount].fileName, 0x40ui64, v25);
          XUID::operator=(&newTask.fileEntries[newTask.fileEntryCount].xuid, &result);
          v27 = OnlineStorage::GetInstance();
          v28 = OnlineStorage::GetCurrentPlatform(v27);
          newTask.fileEntries[newTask.fileEntryCount].platform[0] = v28;
          bdObjectStoreErrorWrappedObject::bdObjectStoreErrorWrappedObject(&value);
          v29 = OnlineStorage::GetInstance();
          v30 = OnlineStorage::AllocateFileResultBuffer(v29);
          if ( !v30 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_storage_download.cpp", 451, ASSERT_TYPE_ASSERT, "(resultBuffer)", (const char *)&queryFormat, "resultBuffer") )
            __debugbreak();
          bdObjectStoreObject::bdObjectStoreObject(&object, v30, 0x8000ui64);
          bdObjectStoreErrorWrappedObject::setObject(&value, &object);
          bdArray<bdObjectStoreErrorWrappedObject>::pushBack(&objectList, &value);
          ++newTask.fileEntryCount;
          bdMemory::deallocate(object.m_metadata.m_tags.m_data);
          object.m_metadata.m_tags.m_data = NULL;
          *(_QWORD *)&object.m_metadata.m_tags.m_capacity = 0i64;
          bdObjectStoreACL::~bdObjectStoreACL(&object.m_metadata.m_acl);
          bdMemory::deallocate(value.m_object.m_metadata.m_tags.m_data);
          value.m_object.m_metadata.m_tags.m_data = NULL;
          *(_QWORD *)&value.m_object.m_metadata.m_tags.m_capacity = 0i64;
          bdObjectStoreACL::~bdObjectStoreACL(&value.m_object.m_metadata.m_acl);
          v31 = "privateloadouts";
          if ( g_onlineMgr.analyticsFnFMode )
          {
            v32 = "privateloadouts_fnf";
            if ( !g_onlineMgr.analyticsFnFMode->current.enabled )
              v32 = "privateloadouts";
            v31 = v32;
          }
          Core_strcpy_truncate(newTask.fileEntries[newTask.fileEntryCount].fileName, 0x40ui64, v31);
          XUID::operator=(&newTask.fileEntries[newTask.fileEntryCount].xuid, &result);
          v33 = OnlineStorage::GetInstance();
          v34 = OnlineStorage::GetCurrentPlatform(v33);
          newTask.fileEntries[newTask.fileEntryCount].platform[0] = v34;
          bdObjectStoreErrorWrappedObject::bdObjectStoreErrorWrappedObject(&value);
          v35 = OnlineStorage::GetInstance();
          v36 = OnlineStorage::AllocateFileResultBuffer(v35);
          if ( !v36 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_storage_download.cpp", 474, ASSERT_TYPE_ASSERT, "(resultBuffer)", (const char *)&queryFormat, "resultBuffer") )
            __debugbreak();
          bdObjectStoreObject::bdObjectStoreObject(&object, v36, 0x8000ui64);
          bdObjectStoreErrorWrappedObject::setObject(&value, &object);
          bdArray<bdObjectStoreErrorWrappedObject>::pushBack(&objectList, &value);
          ++newTask.fileEntryCount;
          bdMemory::deallocate(object.m_metadata.m_tags.m_data);
          object.m_metadata.m_tags.m_data = NULL;
          *(_QWORD *)&object.m_metadata.m_tags.m_capacity = 0i64;
          bdObjectStoreACL::~bdObjectStoreACL(&object.m_metadata.m_acl);
          bdMemory::deallocate(value.m_object.m_metadata.m_tags.m_data);
          value.m_object.m_metadata.m_tags.m_data = NULL;
          *(_QWORD *)&value.m_object.m_metadata.m_tags.m_capacity = 0i64;
          bdObjectStoreACL::~bdObjectStoreACL(&value.m_object.m_metadata.m_acl);
          v37 = "nongamedata";
          if ( g_onlineMgr.analyticsFnFMode )
          {
            v38 = "nongamedata_fnf";
            if ( !g_onlineMgr.analyticsFnFMode->current.enabled )
              v38 = "nongamedata";
            v37 = v38;
          }
          Core_strcpy_truncate(newTask.fileEntries[newTask.fileEntryCount].fileName, 0x40ui64, v37);
          XUID::operator=(&newTask.fileEntries[newTask.fileEntryCount].xuid, &result);
          v39 = OnlineStorage::GetInstance();
          v40 = OnlineStorage::GetCurrentPlatform(v39);
          newTask.fileEntries[newTask.fileEntryCount].platform[0] = v40;
          bdObjectStoreErrorWrappedObject::bdObjectStoreErrorWrappedObject(&value);
          v41 = OnlineStorage::GetInstance();
          v42 = OnlineStorage::AllocateFileResultBuffer(v41);
          if ( !v42 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_storage_download.cpp", 497, ASSERT_TYPE_ASSERT, "(resultBuffer)", (const char *)&queryFormat, "resultBuffer") )
            __debugbreak();
          bdObjectStoreObject::bdObjectStoreObject(&object, v42, 0x8000ui64);
          bdObjectStoreErrorWrappedObject::setObject(&value, &object);
          bdArray<bdObjectStoreErrorWrappedObject>::pushBack(&objectList, &value);
          ++newTask.fileEntryCount;
          bdMemory::deallocate(object.m_metadata.m_tags.m_data);
          object.m_metadata.m_tags.m_data = NULL;
          *(_QWORD *)&object.m_metadata.m_tags.m_capacity = 0i64;
          bdObjectStoreACL::~bdObjectStoreACL(&object.m_metadata.m_acl);
          bdMemory::deallocate(value.m_object.m_metadata.m_tags.m_data);
          value.m_object.m_metadata.m_tags.m_data = NULL;
          *(_QWORD *)&value.m_object.m_metadata.m_tags.m_capacity = 0i64;
          bdObjectStoreACL::~bdObjectStoreACL(&value.m_object.m_metadata.m_acl);
          if ( newTask.fileEntryCount > 0x10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_storage_download.cpp", 505, ASSERT_TYPE_ASSERT, "(storageTask.fileEntryCount <= ( sizeof( *array_counter( storageTask.fileEntries ) ) + 0 ))", (const char *)&queryFormat, "storageTask.fileEntryCount <= ARRAY_COUNT( storageTask.fileEntries )") )
            __debugbreak();
          bdObjectStoreGetUserObjectsVectorizedResponse::setObjectList(newTask.getUserStorageResponse, &objectList);
          v43 = OnlineStorage::GetInstance();
          if ( OnlineStorage::EnqueueTask(v43, &newTask) )
          {
            g_isDownloadingStats[v1] = 1;
          }
          else if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_storage_download.cpp", 516, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unable to download player data: Unable to enqueue the task!") )
          {
            __debugbreak();
          }
          bdArray<bdObjectStoreErrorWrappedObject>::~bdArray<bdObjectStoreErrorWrappedObject>(&objectList);
          TaskCreateRequest::~TaskCreateRequest(&newTask.taskCreateRequest);
        }
      }
    }
  }
}

/*
==============
LiveStorage_FinishDownloadingStats
==============
*/
void LiveStorage_FinishDownloadingStats(const int controllerIndex)
{
  __int64 v1; 
  int v2; 
  TaskManager *Instance; 
  __int64 v5; 
  __int64 v6; 

  v1 = controllerIndex;
  v2 = 0;
  while ( 1 )
  {
    if ( (unsigned int)v1 >= 8 )
    {
      LODWORD(v6) = 8;
      LODWORD(v5) = v1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_storage_download.cpp", 65, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", v5, v6) )
        __debugbreak();
    }
    if ( !g_isDownloadingStats[v1] )
      break;
    if ( !v2++ )
      Com_PrintWarning(25, "WARNING: Stalling thread to wait for LiveStorage_StatsReadComplete(%d) to complete!! [LiveStorage_FinishDownloadingStats()]\n", (unsigned int)v1);
    Sys_Sleep(1);
    DW_Frame(v1);
    Instance = TaskManager::GetInstance();
    TaskManager::Update(Instance);
  }
}

/*
==============
LiveStorage_GettingStats
==============
*/
_BOOL8 LiveStorage_GettingStats(const int controllerIndex)
{
  __int64 v1; 
  int v4; 

  v1 = controllerIndex;
  if ( (unsigned int)controllerIndex >= 8 )
  {
    v4 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_storage_download.cpp", 65, ASSERT_TYPE_ASSERT, "(unsigned)( controllerIndex ) < (unsigned)( 8 )", "controllerIndex doesn't index MAX_GPAD_COUNT\n\t%i not in [0, %i)", controllerIndex, v4) )
      __debugbreak();
  }
  return g_isDownloadingStats[v1];
}

/*
==============
OnStatsDownloadComplete
==============
*/
void OnStatsDownloadComplete(OnlineStorageTask *storageTask)
{
  bool v2; 
  __int64 v3; 
  unsigned __int64 controllerIndex; 
  const dvar_t *v5; 
  const dvar_t *v6; 
  unsigned int v7; 
  unsigned int m_size; 
  __int64 v9; 
  const bdArray<bdObjectStoreErrorWrappedObject> *ObjectList; 
  bdObjectStoreObject *Object; 
  unsigned __int8 *Content; 
  OnlineStorage *Instance; 

  if ( !storageTask && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_storage_download.cpp", 229, ASSERT_TYPE_ASSERT, "(storageTask != 0)", (const char *)&queryFormat, "storageTask != NULL") )
    __debugbreak();
  v2 = OnStatsDownloadComplete_Internal(storageTask);
  controllerIndex = storageTask->controllerIndex;
  if ( controllerIndex >= 8 )
  {
    j___report_rangecheckfailure(v3);
    JUMPOUT(0x1413BB12Di64);
  }
  g_isDownloadingStats[controllerIndex] = 0;
  if ( v2 )
  {
    LiveStorage_ResetStatsIfUnusable(controllerIndex, STATS_ONLINE);
    if ( LiveStorage_DoWeHaveStatsForSource(controllerIndex, STATS_ONLINE) )
    {
      CL_PlayerData_InitializeNewLoadoutSlots(controllerIndex);
      v5 = DVARBOOL_online_santize_clan_tag_on_stats_download;
      if ( !DVARBOOL_online_santize_clan_tag_on_stats_download && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "online_santize_clan_tag_on_stats_download") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v5);
      if ( v5->current.enabled )
        CL_PlayerData_ResetCustomClanTagIfInvalid(controllerIndex);
      LiveStorage_FinalizeStatsRead(controllerIndex, STATS_ONLINE);
      CL_PlayerData_SetMountedDLCBits(controllerIndex);
      Live_SetIsBadPreviewByte(controllerIndex);
      v6 = DVARFLT_online_cohort_sample_percentage;
      if ( !DVARFLT_online_cohort_sample_percentage && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "online_cohort_sample_percentage") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v6);
      Online_PlayerData_StartCohortSampling(controllerIndex, v6->current.value);
    }
  }
  if ( !storageTask->getUserStorageResponse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_storage_download.cpp", 215, ASSERT_TYPE_ASSERT, "(storageTask->getUserStorageResponse)", (const char *)&queryFormat, "storageTask->getUserStorageResponse") )
    __debugbreak();
  v7 = 0;
  m_size = bdObjectStoreGetUserObjectsVectorizedResponse::getObjectList(storageTask->getUserStorageResponse)->m_size;
  if ( m_size )
  {
    v9 = 0i64;
    do
    {
      ObjectList = bdObjectStoreGetUserObjectsVectorizedResponse::getObjectList(storageTask->getUserStorageResponse);
      bdHandleAssert(v7 < ObjectList->m_size, "rangeCheck(i)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdarray.inl", "bdArray<class bdObjectStoreErrorWrappedObject>::operator []", 0x70u, "bdArray<T>::operator[], rangecheck failed");
      Object = (bdObjectStoreObject *)bdObjectStoreErrorWrappedObject::getObject(&ObjectList->m_data[v9]);
      Content = (unsigned __int8 *)bdObjectStoreObject::getContent(Object);
      Instance = OnlineStorage::GetInstance();
      OnlineStorage::FreeFileResultBuffer(Instance, Content);
      ++v7;
      ++v9;
    }
    while ( v7 < m_size );
  }
  storageTask->getUserStorageResponse = NULL;
}

/*
==============
OnStatsDownloadComplete_Internal
==============
*/
__int64 OnStatsDownloadComplete_Internal(OnlineStorageTask *storageTask)
{
  __int64 controllerIndex; 
  PlayerStatNetworkData *v3; 
  unsigned __int8 v4; 
  int integer; 
  __int64 v6; 
  unsigned int m_size; 
  const bdArray<bdObjectStoreErrorWrappedObject> *ObjectList; 
  bdObjectStoreErrorWrappedObject *v9; 
  bdObjectStoreObject *Object; 
  const unsigned __int8 *Content; 
  bdObjectStoreObject *v12; 
  bdObjectStoreMetadata *Metadata; 
  unsigned __int64 ContentLength; 
  __int64 v15; 
  int v16; 
  size_t v17; 
  StatsBlobId StatsBlobForFile; 
  unsigned int StatsBlobOffset; 
  char *fmt; 
  int v22; 
  Mem_LargeLocal v23; 
  unsigned int v24; 
  unsigned __int8 *to; 

  Mem_LargeLocal::Mem_LargeLocal(&v23, 0x12D10ui64, "PlayerStats_t uncompressedStats");
  to = (unsigned __int8 *)v23.m_ptr;
  controllerIndex = storageTask->controllerIndex;
  v3 = &controllerStatData[controllerIndex];
  if ( LiveStorage_AreStatsFetched(storageTask->controllerIndex, STATS_ONLINE) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_storage_download.cpp", 79, ASSERT_TYPE_ASSERT, "(!LiveStorage_AreStatsFetched( controllerIndex, STATS_ONLINE ))", (const char *)&queryFormat, "!LiveStorage_AreStatsFetched( controllerIndex, STATS_ONLINE )") )
    __debugbreak();
  if ( LiveStorage_MaySetPersistentData_ControllerIndex(controllerIndex) )
  {
    if ( LiveStorage_GetActiveStatsSource(controllerIndex) )
    {
      Com_PrintError(16, "Refusing to accept on-line stats for controller %d because we are in an off-line area of the game\n", (unsigned int)controllerIndex);
      v4 = 0;
      goto LABEL_33;
    }
    if ( storageTask->status == AERIAL && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_storage_download.cpp", 95, ASSERT_TYPE_ASSERT, "(storageTask->status != OnlineStorageTaskStatus::IN_PROGRESS)", (const char *)&queryFormat, "storageTask->status != OnlineStorageTaskStatus::IN_PROGRESS") )
      __debugbreak();
    if ( storageTask->status != (AERIAL|FREE) )
    {
      Com_PrintError(16, "Unable to retrieve stats data for controller %d\n", (unsigned int)controllerIndex);
      LiveStorage_DownloadStats(controllerIndex);
      v4 = 0;
      goto LABEL_33;
    }
    LiveStorage_ClearPlayerDataObfuscated(controllerIndex, STATS_ONLINE);
    integer = mangleDWStats->current.integer;
    v6 = 0i64;
    if ( integer )
    {
      Dvar_SetInt_Internal(mangleDWStats, 0);
      switch ( integer )
      {
        case 1:
          Com_Printf(0, "**** mangleDWStats: Pretending file does not exist for controller %d\n", (unsigned int)controllerIndex);
          goto LABEL_16;
        case 2:
          Com_Printf(0, "**** mangleDWStats: Pretending file is wrong size for controller %d\n", (unsigned int)controllerIndex);
          storageTask->fileEntries[0].bufferSize = 0;
          break;
        case 3:
          Com_Printf(0, "**** mangleDWStats: Pretending file was marked for reset because you are a hacker for controller %d\n", (unsigned int)controllerIndex);
LABEL_36:
          v3->playerStats[0].statsFetched = 1;
          v3->playerStats[0].resetStatus = RESET_STATS_REASON_ONLINE_STATS_RESET;
          goto LABEL_32;
      }
    }
    v3->playerStats[0].statsFetched = 1;
    v3->playerStats[0].resetStatus = RESET_STATS_NO_RESET;
    if ( !storageTask->getUserStorageResponse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_storage_download.cpp", 144, ASSERT_TYPE_ASSERT, "(storageTask->getUserStorageResponse)", (const char *)&queryFormat, "storageTask->getUserStorageResponse") )
      __debugbreak();
    m_size = bdObjectStoreGetUserObjectsVectorizedResponse::getObjectList(storageTask->getUserStorageResponse)->m_size;
    v24 = m_size;
    if ( m_size != storageTask->fileEntryCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_storage_download.cpp", 146, ASSERT_TYPE_ASSERT, "(responseCount == storageTask->fileEntryCount)", (const char *)&queryFormat, "responseCount == storageTask->fileEntryCount") )
      __debugbreak();
    if ( !m_size )
    {
LABEL_31:
      LiveStorage_ValidateStatsChecksumAndVersion(controllerIndex, STATS_ONLINE);
      goto LABEL_32;
    }
    while ( 1 )
    {
      ObjectList = bdObjectStoreGetUserObjectsVectorizedResponse::getObjectList(storageTask->getUserStorageResponse);
      bdHandleAssert((unsigned int)v6 < ObjectList->m_size, "rangeCheck(i)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdcontainers\\bdarray.inl", "bdArray<class bdObjectStoreErrorWrappedObject>::operator []", 0x70u, "bdArray<T>::operator[], rangecheck failed");
      v9 = &ObjectList->m_data[(unsigned int)v6];
      Object = (bdObjectStoreObject *)bdObjectStoreErrorWrappedObject::getObject(v9);
      Content = bdObjectStoreObject::getContent(Object);
      v12 = (bdObjectStoreObject *)bdObjectStoreErrorWrappedObject::getObject(v9);
      Metadata = (bdObjectStoreMetadata *)bdObjectStoreObject::getMetadata(v12);
      ContentLength = bdObjectStoreMetadata::getContentLength(Metadata);
      v15 = (unsigned int)truncate_cast<int,unsigned __int64>(ContentLength);
      LODWORD(fmt) = controllerIndex;
      Com_Printf(16, "Read %i bytes of compressed stats data for file %s for controller %d\n", v15, storageTask->fileEntries[v6].fileName, fmt);
      if ( bdObjectStoreErrorWrappedObject::hasError(v9) || !(_DWORD)v15 )
        break;
      if ( (_DWORD)v15 == 4 )
        goto LABEL_36;
      v16 = MemFile_DecompressWithZLib(Content + 4, v15 - 4, to, 66672);
      v17 = v16;
      if ( !v16 )
      {
        Com_Printf(16, "Decompression stats failed for controller %d\n", (unsigned int)controllerIndex);
        v3->playerStats[0].statsFetched = 1;
        v3->playerStats[0].resetStatus = RESET_STATS_REASON_CORRUPT;
        goto LABEL_32;
      }
      StatsBlobForFile = LiveStorage_GetStatsBlobForFile(storageTask->fileEntries[v6].fileName);
      StatsBlobOffset = Com_PlayerData_GetStatsBlobOffset(StatsBlobForFile);
      *(_DWORD *)&v3->playerStats[0].data[StatsBlobOffset] = *(_DWORD *)Content;
      memcpy_0(&v3->playerStats[0].statsBlobs.commonData.data[StatsBlobOffset], to, v17);
      LiveStorage_ClearStatsBlobValidationHints(controllerIndex, STATS_ONLINE, StatsBlobForFile);
      LiveStorage_SetStatsBlobFirstUpload(controllerIndex, STATS_ONLINE, StatsBlobForFile, 1);
      v6 = (unsigned int)(v6 + 1);
      if ( (unsigned int)v6 >= v24 )
        goto LABEL_31;
    }
    if ( *bdObjectStoreErrorWrappedObject::getError(v9) != BD_OBJECTSTORE_OBJECT_NOT_FOUND_ERROR )
    {
      v22 = *bdObjectStoreErrorWrappedObject::getError(v9);
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\com_storage_download.cpp", 158, ASSERT_TYPE_ASSERT, "(responseObject.getError() == bdObjectStoreErrorWrappedObject::bdObjectStoreVectorizedError::BD_OBJECTSTORE_OBJECT_NOT_FOUND_ERROR)", "%s\n\tUnexpected file error: %d", "responseObject.getError() == bdObjectStoreErrorWrappedObject::bdObjectStoreVectorizedError::BD_OBJECTSTORE_OBJECT_NOT_FOUND_ERROR", v22) )
        __debugbreak();
    }
LABEL_16:
    v3->playerStats[0].statsFetched = 1;
    v3->playerStats[0].resetStatus = RESET_STATS_REASON_NOT_FOUND;
LABEL_32:
    v4 = 1;
    goto LABEL_33;
  }
  Com_PrintError(16, "Refusing to accept on-line stats for controller %d because we are connected to a server\n", (unsigned int)controllerIndex);
  v4 = 0;
LABEL_33:
  Mem_LargeLocal::~Mem_LargeLocal(&v23);
  return v4;
}


/*
==============
dwRecordEvent
==============
*/

int __fastcall dwRecordEvent(overlappedTask *const task, unsigned __int8 *buff, int buffSize, DWRecordEventType eventType, bdEventLogID *matchID)
{
  return ?dwRecordEvent@@YAHQEAUoverlappedTask@@PEAEHW4DWRecordEventType@@PEAVbdEventLogID@@@Z(task, buff, buffSize, eventType, matchID);
}

/*
==============
dwRecordEventSetTagsComplete
==============
*/

taskCompleteResults __fastcall dwRecordEventSetTagsComplete(overlappedTask *const task)
{
  return ?dwRecordEventSetTagsComplete@@YA?AW4taskCompleteResults@@QEAUoverlappedTask@@@Z(task);
}

/*
==============
dwRecordEventBatchFF
==============
*/

int __fastcall dwRecordEventBatchFF(bdEventInfo *events, const unsigned int numEvents)
{
  return ?dwRecordEventBatchFF@@YAHPEAVbdEventInfo@@I@Z(events, numEvents);
}

/*
==============
dwRecordStringEventFF
==============
*/

int __fastcall dwRecordStringEventFF(const char *str, DWRecordStringEventType category)
{
  return ?dwRecordStringEventFF@@YAHPEBDW4DWRecordStringEventType@@@Z(str, category);
}

/*
==============
dwRecordEvent
==============
*/

int __fastcall dwRecordEvent(TaskCreateRequest *request, unsigned __int8 *buff, int buffSize, DWRecordEventType eventType, bdEventLogID *matchID)
{
  return ?dwRecordEvent@@YAHPEAVTaskCreateRequest@@PEAEHW4DWRecordEventType@@PEAVbdEventLogID@@@Z(request, buff, buffSize, eventType, matchID);
}

/*
==============
dwRecordStringEvent
==============
*/

int __fastcall dwRecordStringEvent(overlappedTask *const task, const char *str, DWRecordStringEventType category)
{
  return ?dwRecordStringEvent@@YAHQEAUoverlappedTask@@PEBDW4DWRecordStringEventType@@@Z(task, str, category);
}

/*
==============
dwRecordEventFF
==============
*/

int __fastcall dwRecordEventFF(unsigned __int8 *buff, int buffSize, DWRecordEventType eventType)
{
  return ?dwRecordEventFF@@YAHPEAEHW4DWRecordEventType@@@Z(buff, buffSize, eventType);
}

/*
==============
dwRecordEventComplete
==============
*/

taskCompleteResults __fastcall dwRecordEventComplete(overlappedTask *const task)
{
  return ?dwRecordEventComplete@@YA?AW4taskCompleteResults@@QEAUoverlappedTask@@@Z(task);
}

/*
==============
dwSetTagsEventRecord
==============
*/

int __fastcall dwSetTagsEventRecord(overlappedTask *const task, bdTag *tags, int numTags, bdEventLogID *eventLogID)
{
  return ?dwSetTagsEventRecord@@YAHQEAUoverlappedTask@@PEAVbdTag@@HPEAVbdEventLogID@@@Z(task, tags, numTags, eventLogID);
}

/*
==============
dwRecordEvent
==============
*/
int dwRecordEvent(TaskCreateRequest *request, unsigned __int8 *buff, int buffSize, DWRecordEventType eventType, bdEventLogID *matchID)
{
  return dwRecordEventInternal(request->m_controllerIndex, &request->m_remoteDemonwareTask, buff, buffSize, eventType, matchID);
}

/*
==============
dwRecordEvent
==============
*/
int dwRecordEvent(overlappedTask *const task, unsigned __int8 *buff, int buffSize, DWRecordEventType eventType, bdEventLogID *matchID)
{
  int result; 

  if ( !task && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwrecordevent.cpp", 102, ASSERT_TYPE_ASSERT, "(task)", (const char *)&queryFormat, "task") )
    __debugbreak();
  result = dwRecordEventInternal(task->controllerIndex, &task->u.remoteTask, buff, buffSize, eventType, matchID);
  if ( !result )
  {
    TaskManager_ClearTask(task);
    return 0;
  }
  return result;
}

/*
==============
dwRecordEventBatchFF
==============
*/
__int64 dwRecordEventBatchFF(bdEventInfo *events, const unsigned int numEvents)
{
  __int64 v2; 
  _DWORD *v4; 
  __int64 v5; 
  DWServicesAccess *Instance; 
  int FirstAvailableIndex; 
  DWServicesAccess *v8; 
  DWServicesAccess *v10; 
  DWEventLog *EventLog; 
  unsigned int v12; 
  bdRemoteTask *m_ptr; 
  bdReference<bdRemoteTask> result; 

  v2 = numEvents;
  if ( numEvents )
    goto LABEL_5;
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwrecordevent.cpp", 312, ASSERT_TYPE_ASSERT, "(numEvents > 0)", (const char *)&queryFormat, "numEvents > 0", -2i64) )
    __debugbreak();
  if ( (_DWORD)v2 )
  {
LABEL_5:
    v4 = &events->_bytes_20[4];
    v5 = v2;
    do
    {
      if ( (unsigned int)(*v4 - 1) > 0x233A && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwrecordevent.cpp", 318, ASSERT_TYPE_ASSERT, "((events[i].m_category > DW_EVENT_UNKNOWN) && (events[i].m_category < DW_EVENT_MAX_EVENT))", "%s\n\tEvent type is out of bounds. Either add a new DWRecordEventType or use an existing DWRecordEventType.", "(events[i].m_category > DW_EVENT_UNKNOWN) && (events[i].m_category < DW_EVENT_MAX_EVENT)") )
        __debugbreak();
      v4 += 18;
      --v5;
    }
    while ( v5 );
  }
  Instance = DWServicesAccess::GetInstance();
  FirstAvailableIndex = DWServicesAccess::getFirstAvailableIndex(Instance);
  v8 = DWServicesAccess::GetInstance();
  if ( DWServicesAccess::isReady(v8, FirstAvailableIndex) )
  {
    v10 = DWServicesAccess::GetInstance();
    EventLog = DWServicesAccess::GetEventLog(v10, FirstAvailableIndex);
    v12 = 0;
    DWEventLog::recordEventsMixed(EventLog, &result, events, v2, NULL);
    m_ptr = result.m_ptr;
    if ( result.m_ptr )
    {
      v12 = 1;
    }
    else
    {
      Com_Printf(25, "Error occurred when uploading data: recordEventsMixed numEvents %d\n", (unsigned int)v2);
      m_ptr = result.m_ptr;
    }
    if ( m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
    {
      if ( result.m_ptr )
        ((void (__fastcall *)(bdRemoteTask *, __int64))result.m_ptr->~bdReferencable)(result.m_ptr, 1i64);
    }
    return v12;
  }
  else
  {
    Com_Printf(25, "Error occurred when uploading title data: getEventLog() returned NULL\n");
    return 0i64;
  }
}

/*
==============
dwRecordEventComplete
==============
*/
taskCompleteResults dwRecordEventComplete(overlappedTask *const task)
{
  bdLobbyErrorCode v2; 
  DWServicesAccess *Instance; 
  bdRemoteTask *m_ptr; 
  bdTask::bdStatus v5; 
  bdLobbyErrorCode ErrorCode; 

  if ( !task && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwrecordevent.cpp", 182, ASSERT_TYPE_ASSERT, "(task)", (const char *)&queryFormat, "task") )
    __debugbreak();
  if ( !task->u.remoteTask.m_ptr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwrecordevent.cpp", 183, ASSERT_TYPE_ASSERT, "(task->u.remoteTask)", (const char *)&queryFormat, "task->u.remoteTask") )
    __debugbreak();
  v2 = BD_NO_ERROR;
  Instance = DWServicesAccess::GetInstance();
  if ( DWServicesAccess::isReady(Instance, task->controllerIndex) && (m_ptr = task->u.remoteTask.m_ptr) != NULL )
  {
    v5 = m_ptr->getStatus(m_ptr);
    if ( v5 == BD_DONE && (ErrorCode = bdRemoteTask::getErrorCode(task->u.remoteTask.m_ptr), (v2 = ErrorCode) != BD_NO_ERROR) )
      return dwRecordEventHandleTaskError(task, ErrorCode);
    else
      return dwTaskStatusConvert(v5, v2);
  }
  else
  {
    Com_Printf(25, "Failed to retrieve bdTitleUtilities for record event complete.\n");
    return 2;
  }
}

/*
==============
dwRecordEventFF
==============
*/
__int64 dwRecordEventFF(unsigned __int8 *buff, int buffSize, DWRecordEventType eventType)
{
  DWServicesAccess *Instance; 
  int FirstAvailableIndex; 
  DWServicesAccess *v8; 
  unsigned int v9; 
  DWServicesAccess *v10; 
  DWEventLog *EventLog; 
  bdRemoteTask *m_ptr; 
  unsigned __int32 v13; 
  bdEventInfo eventInfos; 
  bdReference<bdRemoteTask> result; 

  bdEventInfo::bdEventInfo(&eventInfos);
  if ( !buff && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwrecordevent.cpp", 346, ASSERT_TYPE_ASSERT, "(buff)", (const char *)&queryFormat, "buff", -2i64) )
    __debugbreak();
  if ( (unsigned int)(eventType - 1) > 0x233A && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwrecordevent.cpp", 347, ASSERT_TYPE_ASSERT, "((eventType > DW_EVENT_UNKNOWN) && (eventType < DW_EVENT_MAX_EVENT))", "%s\n\tEvent type is out of bounds. Either add a new DWRecordEventType or use an existing DWRecordEventType.", "(eventType > DW_EVENT_UNKNOWN) && (eventType < DW_EVENT_MAX_EVENT)") )
    __debugbreak();
  Instance = DWServicesAccess::GetInstance();
  FirstAvailableIndex = DWServicesAccess::getFirstAvailableIndex(Instance);
  v8 = DWServicesAccess::GetInstance();
  if ( DWServicesAccess::isReady(v8, FirstAvailableIndex) )
  {
    eventInfos._bytes_20[0] = 1;
    *(_DWORD *)&eventInfos._bytes_20[4] = eventType;
    *(_DWORD *)&eventInfos._bytes_20[8] = buffSize;
    eventInfos.m_eventDesc = buff;
    v10 = DWServicesAccess::GetInstance();
    EventLog = DWServicesAccess::GetEventLog(v10, FirstAvailableIndex);
    DWEventLog::recordEventsMixed(EventLog, &result, &eventInfos, 1u, NULL);
    m_ptr = result.m_ptr;
    if ( result.m_ptr )
    {
      v9 = 1;
    }
    else
    {
      Com_Printf(25, "Error occurred when uploading data: recordEventBin. blob = %s ( size %d) == NULL\n", (const char *)buff, (unsigned int)buffSize);
      v9 = 0;
      m_ptr = result.m_ptr;
    }
    if ( m_ptr )
    {
      v13 = _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 0xFFFFFFFF);
      if ( v13 == 1 )
      {
        if ( result.m_ptr )
          ((void (__fastcall *)(bdRemoteTask *, _QWORD))result.m_ptr->~bdReferencable)(result.m_ptr, v13);
        result.m_ptr = NULL;
      }
    }
  }
  else
  {
    Com_Printf(25, "Error occurred when uploading title data: getEventLog() returned NULL\n");
    v9 = 0;
  }
  bdEventInfo::~bdEventInfo((bdEventInfo *)eventInfos.gap38);
  bdReferencable::~bdReferencable((bdReferencable *)eventInfos.gap38);
  return v9;
}

/*
==============
dwRecordEventHandleTaskError
==============
*/
__int64 dwRecordEventHandleTaskError(overlappedTask *const task, bdLobbyErrorCode errorCode)
{
  __int64 type; 
  char buffer[64]; 

  if ( !task && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwrecordevent.cpp", 23, ASSERT_TYPE_ASSERT, "(task)", (const char *)&queryFormat, "task") )
    __debugbreak();
  Com_Printf(25, "%s()\n", "dwRecordEventHandleTaskError");
  dwLobbyErrorCodeToString(errorCode, buffer, 0x40u);
  type = (unsigned int)task->type;
  if ( errorCode == BD_NOT_CONNECTED )
  {
    Com_Printf(25, "\t Task start requested while not connected! DW record event task type %d errorCode %i - '%s'\n", type, 2i64, buffer);
  }
  else
  {
    Com_PrintError(25, "\t DW record event task type %d errorCode %i - '%s'\n", type, (unsigned int)errorCode, buffer);
    if ( errorCode == BD_TOO_MANY_TASKS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwrecordevent.cpp", 42, ASSERT_TYPE_ASSERT, "(errorCode != BD_TOO_MANY_TASKS)", (const char *)&queryFormat, "errorCode != BD_TOO_MANY_TASKS") )
      __debugbreak();
  }
  return 2i64;
}

/*
==============
dwRecordEventInternal
==============
*/
__int64 dwRecordEventInternal(const int controllerIndex, bdReference<bdRemoteTask> *remoteTaskRef, unsigned __int8 *buff, int buffSize, DWRecordEventType eventType, bdEventLogID *matchID)
{
  DWRecordEventType v10; 
  bool v11; 
  unsigned int v12; 
  DWServicesAccess *Instance; 
  DWServicesAccess *v14; 
  DWEventLog *EventLog; 
  unsigned __int32 v16; 
  unsigned __int64 userID; 
  bdEventInfo eventInfos; 
  bdReference<bdRemoteTask> result; 

  bdEventInfo::bdEventInfo(&eventInfos);
  if ( !buff && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwrecordevent.cpp", 54, ASSERT_TYPE_ASSERT, "(buff)", (const char *)&queryFormat, "buff", -2i64) )
    __debugbreak();
  v10 = eventType;
  if ( eventType )
  {
    if ( eventType < DW_EVENT_MAX_EVENT )
      goto LABEL_10;
    v11 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwrecordevent.cpp", 56, ASSERT_TYPE_ASSERT, "(eventType < DW_EVENT_MAX_EVENT)", "%s\n\tEvent type is out of bounds. Either add a new RecordEventType or use an existing RecordEventType.", "eventType < DW_EVENT_MAX_EVENT");
  }
  else
  {
    v11 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwrecordevent.cpp", 55, ASSERT_TYPE_ASSERT, "(eventType != DW_EVENT_UNKNOWN)", "%s\n\tDW_EVENT_UNKNOWN is forbidden. Either add a new RecordEventType or use an existing RecordEventType.", "eventType != DW_EVENT_UNKNOWN");
  }
  if ( v11 )
    __debugbreak();
LABEL_10:
  if ( dwGetLogOnStatus(controllerIndex) == DW_LIVE_CONNECTED )
  {
    Instance = DWServicesAccess::GetInstance();
    if ( DWServicesAccess::isReady(Instance, controllerIndex) )
    {
      if ( dwGetOnlineUserID(controllerIndex, &userID) )
      {
        eventInfos._bytes_20[0] = 1;
        *(_DWORD *)&eventInfos._bytes_20[4] = v10;
        *(_DWORD *)&eventInfos._bytes_20[8] = buffSize;
        eventInfos.m_eventDesc = buff;
        v14 = DWServicesAccess::GetInstance();
        EventLog = DWServicesAccess::GetEventLog(v14, controllerIndex);
        DWEventLog::recordEventsMixed(EventLog, &result, &eventInfos, 1u, matchID);
        if ( result.m_ptr )
        {
          bdReference<bdRemoteTask>::operator=(remoteTaskRef, &result);
          v12 = 1;
        }
        else
        {
          Com_Printf(25, "Error occurred when uploading title data: recordEventBin( size %d) == NULL\n", (unsigned int)buffSize);
          v12 = 0;
        }
        if ( result.m_ptr )
        {
          v16 = _InterlockedExchangeAdd((volatile signed __int32 *)&result.m_ptr->m_refCount, 0xFFFFFFFF);
          if ( v16 == 1 )
          {
            if ( result.m_ptr )
              ((void (__fastcall *)(bdRemoteTask *, _QWORD))result.m_ptr->~bdReferencable)(result.m_ptr, v16);
            result.m_ptr = NULL;
          }
        }
      }
      else
      {
        Com_Printf(25, "Error occurred when uploading title data: dwGetOnlineUserID() == NULL\n");
        v12 = 0;
      }
    }
    else
    {
      Com_Printf(25, "Services aren't ready yet.\n");
      v12 = 0;
    }
  }
  else
  {
    Com_Printf(25, "Warning: An error occurred when uploading title data: NOT CONNECTED.\n");
    v12 = 0;
  }
  bdEventInfo::~bdEventInfo((bdEventInfo *)eventInfos.gap38);
  bdReferencable::~bdReferencable((bdReferencable *)eventInfos.gap38);
  return v12;
}

/*
==============
dwRecordEventSetTagsComplete
==============
*/
unsigned int dwRecordEventSetTagsComplete(overlappedTask *const task)
{
  bdLobbyErrorCode v2; 
  DWServicesAccess *Instance; 
  bdRemoteTask *m_ptr; 
  bdTask::bdStatus v5; 
  bdLobbyErrorCode ErrorCode; 

  if ( !task && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwrecordevent.cpp", 272, ASSERT_TYPE_ASSERT, "(task)", (const char *)&queryFormat, "task") )
    __debugbreak();
  if ( !task->u.remoteTask.m_ptr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwrecordevent.cpp", 273, ASSERT_TYPE_ASSERT, "(task->u.remoteTask)", (const char *)&queryFormat, "task->u.remoteTask") )
    __debugbreak();
  v2 = BD_NO_ERROR;
  Instance = DWServicesAccess::GetInstance();
  if ( DWServicesAccess::isReady(Instance, task->controllerIndex) && (m_ptr = task->u.remoteTask.m_ptr) != NULL )
  {
    v5 = m_ptr->getStatus(m_ptr);
    if ( v5 == BD_DONE && (ErrorCode = bdRemoteTask::getErrorCode(task->u.remoteTask.m_ptr), (v2 = ErrorCode) != BD_NO_ERROR) )
      return dwRecordEventHandleTaskError(task, ErrorCode);
    else
      return dwTaskStatusConvert(v5, v2);
  }
  else
  {
    Com_Printf(25, "Failed to retrieve lobby service for set tags complete.\n");
    return 2;
  }
}

/*
==============
dwRecordStringEvent
==============
*/
__int64 dwRecordStringEvent(overlappedTask *const task, const char *str, DWRecordStringEventType category)
{
  unsigned int v6; 
  DWServicesAccess *Instance; 
  __int64 v8; 
  DWServicesAccess *v9; 
  DWEventLog *EventLog; 
  __int64 v11; 
  bdEventInfo eventInfos; 
  bdReference<bdRemoteTask> result; 
  unsigned __int64 userID; 

  bdEventInfo::bdEventInfo(&eventInfos);
  if ( !task && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwrecordevent.cpp", 129, ASSERT_TYPE_ASSERT, "(task)", (const char *)&queryFormat, "task", -2i64) )
    __debugbreak();
  if ( !str && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwrecordevent.cpp", 130, ASSERT_TYPE_ASSERT, "(str)", (const char *)&queryFormat, "str") )
    __debugbreak();
  if ( (unsigned int)(category - 1) > 0x10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwrecordevent.cpp", 131, ASSERT_TYPE_ASSERT, "((category > DW_STRING_EVENT_UNKNOWN) && (category < DW_STRING_EVENT_NUM_EVENTS))", "%s\n\tEvent type is out of bounds. Either add a new DWRecordStringEventType or use an existing DWRecordStringEventType.", "(category > DW_STRING_EVENT_UNKNOWN) && (category < DW_STRING_EVENT_NUM_EVENTS)") )
    __debugbreak();
  if ( dwGetLogOnStatus(task->controllerIndex) == DW_LIVE_CONNECTED )
  {
    Instance = DWServicesAccess::GetInstance();
    if ( DWServicesAccess::isReady(Instance, task->controllerIndex) )
    {
      if ( dwGetOnlineUserID(task->controllerIndex, &userID) )
      {
        eventInfos._bytes_20[0] = 0;
        *(_DWORD *)&eventInfos._bytes_20[4] = category;
        v8 = -1i64;
        do
          ++v8;
        while ( str[v8] );
        *(_DWORD *)&eventInfos._bytes_20[8] = v8 + 1;
        eventInfos.m_eventDesc = (unsigned __int8 *)str;
        v9 = DWServicesAccess::GetInstance();
        EventLog = DWServicesAccess::GetEventLog(v9, task->controllerIndex);
        DWEventLog::recordEventsMixed(EventLog, &result, &eventInfos, 1u, NULL);
        if ( result.m_ptr )
        {
          bdReference<bdRemoteTask>::operator=(&task->u.remoteTask, &result);
          v6 = 1;
        }
        else
        {
          TaskManager_ClearTask(task);
          v11 = -1i64;
          do
            ++v11;
          while ( str[v11] );
          Com_Printf(25, "Error occurred when uploading data: recordEvent. str = %s ( size %d) == NULL\n", str, v11);
          v6 = 0;
        }
        if ( result.m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&result.m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
        {
          if ( result.m_ptr )
            ((void (__fastcall *)(bdRemoteTask *, __int64))result.m_ptr->~bdReferencable)(result.m_ptr, 1i64);
          result.m_ptr = NULL;
        }
      }
      else
      {
        TaskManager_ClearTask(task);
        Com_Printf(25, "Error occurred when uploading title data: dwGetOnlineUserID() == NULL\n");
        v6 = 0;
      }
    }
    else
    {
      TaskManager_ClearTask(task);
      Com_Printf(25, "Services aren't ready yet.\n");
      v6 = 0;
    }
  }
  else
  {
    TaskManager_ClearTask(task);
    Com_Printf(25, "Warning: An error occurred when uploading title data: NOT CONNECTED.\n");
    v6 = 0;
  }
  bdEventInfo::~bdEventInfo((bdEventInfo *)eventInfos.gap38);
  bdReferencable::~bdReferencable((bdReferencable *)eventInfos.gap38);
  return v6;
}

/*
==============
dwRecordStringEventFF
==============
*/
__int64 dwRecordStringEventFF(const char *str, DWRecordStringEventType category)
{
  DWServicesAccess *Instance; 
  int FirstAvailableIndex; 
  DWServicesAccess *v6; 
  unsigned int v7; 
  __int64 v8; 
  DWServicesAccess *v9; 
  DWEventLog *EventLog; 
  bdRemoteTask *m_ptr; 
  __int64 v12; 
  bdEventInfo eventInfos; 
  bdReference<bdRemoteTask> result; 

  bdEventInfo::bdEventInfo(&eventInfos);
  if ( !str && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwrecordevent.cpp", 379, ASSERT_TYPE_ASSERT, "(str)", (const char *)&queryFormat, "str", -2i64) )
    __debugbreak();
  if ( (unsigned int)(category - 1) > 0x10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\dw\\dwrecordevent.cpp", 380, ASSERT_TYPE_ASSERT, "((category > DW_STRING_EVENT_UNKNOWN) && (category < DW_STRING_EVENT_NUM_EVENTS))", "%s\n\tEvent type is out of bounds. Either add a new DWRecordStringEventType or use an existing DWRecordStringEventType.", "(category > DW_STRING_EVENT_UNKNOWN) && (category < DW_STRING_EVENT_NUM_EVENTS)") )
    __debugbreak();
  Instance = DWServicesAccess::GetInstance();
  FirstAvailableIndex = DWServicesAccess::getFirstAvailableIndex(Instance);
  v6 = DWServicesAccess::GetInstance();
  if ( DWServicesAccess::isReady(v6, FirstAvailableIndex) )
  {
    eventInfos._bytes_20[0] = 0;
    *(_DWORD *)&eventInfos._bytes_20[4] = category;
    v8 = -1i64;
    do
      ++v8;
    while ( str[v8] );
    *(_DWORD *)&eventInfos._bytes_20[8] = v8 + 1;
    eventInfos.m_eventDesc = (unsigned __int8 *)str;
    v9 = DWServicesAccess::GetInstance();
    EventLog = DWServicesAccess::GetEventLog(v9, FirstAvailableIndex);
    DWEventLog::recordEventsMixed(EventLog, &result, &eventInfos, 1u, NULL);
    m_ptr = result.m_ptr;
    if ( result.m_ptr )
    {
      v7 = 1;
    }
    else
    {
      v12 = -1i64;
      do
        ++v12;
      while ( str[v12] );
      Com_Printf(25, "Error occurred when uploading data: recordEvent. str = %s ( size %d) == NULL\n", str, v12);
      v7 = 0;
      m_ptr = result.m_ptr;
    }
    if ( m_ptr && _InterlockedExchangeAdd((volatile signed __int32 *)&m_ptr->m_refCount, 0xFFFFFFFF) == 1 )
    {
      if ( result.m_ptr )
        ((void (__fastcall *)(bdRemoteTask *, __int64))result.m_ptr->~bdReferencable)(result.m_ptr, 1i64);
      result.m_ptr = NULL;
    }
  }
  else
  {
    Com_Printf(25, "Error occurred when uploading title data: getEventLog() returned NULL\n");
    v7 = 0;
  }
  bdEventInfo::~bdEventInfo((bdEventInfo *)eventInfos.gap38);
  bdReferencable::~bdReferencable((bdReferencable *)eventInfos.gap38);
  return v7;
}

/*
==============
dwSetTagsEventRecord
==============
*/
__int64 dwSetTagsEventRecord(overlappedTask *const task, bdTag *tags, int numTags, bdEventLogID *eventLogID)
{
  return 0i64;
}


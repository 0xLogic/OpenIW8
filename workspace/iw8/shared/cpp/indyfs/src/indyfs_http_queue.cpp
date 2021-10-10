/*
==============
indyfs_http_queue_term
==============
*/

void __fastcall indyfs_http_queue_term(IndyFsHttpTaskQueue *taskQueue)
{
  ?indyfs_http_queue_term@@YAXPEAUIndyFsHttpTaskQueue@@@Z(taskQueue);
}

/*
==============
indyfs_http_queue_remove
==============
*/

bool __fastcall indyfs_http_queue_remove(IndyFsHttpTaskQueue *taskQueue, IndyFsHttpTaskHandle *waitHandle)
{
  return ?indyfs_http_queue_remove@@YA_NPEAUIndyFsHttpTaskQueue@@PEAUIndyFsHttpTaskHandle@@@Z(taskQueue, waitHandle);
}

/*
==============
indyfs_http_queue_wait
==============
*/

IndyFsHttpTaskStatus __fastcall indyfs_http_queue_wait(IndyFsHttpTaskQueue *taskQueue, IndyFsHttpTaskHandle *waitHandle)
{
  return ?indyfs_http_queue_wait@@YA?AW4IndyFsHttpTaskStatus@@PEAUIndyFsHttpTaskQueue@@PEAUIndyFsHttpTaskHandle@@@Z(taskQueue, waitHandle);
}

/*
==============
indyfs_http_queue_thread_main
==============
*/

void __fastcall indyfs_http_queue_thread_main(const char *threadName)
{
  ?indyfs_http_queue_thread_main@@YAXPEBD@Z(threadName);
}

/*
==============
indyfs_http_queue_push
==============
*/

int __fastcall indyfs_http_queue_push(IndyFsHttpTaskQueue *taskQueue, IndyFsChunk *chunk, IndyFsHttpTaskHandle *waitHandle, IndyFsHttpTaskHandle **outputHandle)
{
  return ?indyfs_http_queue_push@@YAHPEAUIndyFsHttpTaskQueue@@PEAUIndyFsChunk@@PEAUIndyFsHttpTaskHandle@@PEAPEAU3@@Z(taskQueue, chunk, waitHandle, outputHandle);
}

/*
==============
indyfs_http_queue_task_init
==============
*/

void __fastcall indyfs_http_queue_task_init(IndyFsHttpTaskHandle *waitHandle)
{
  ?indyfs_http_queue_task_init@@YAXPEAUIndyFsHttpTaskHandle@@@Z(waitHandle);
}

/*
==============
indyfs_http_queue_quit
==============
*/

void indyfs_http_queue_quit(void)
{
  ?indyfs_http_queue_quit@@YAXXZ();
}

/*
==============
indyfs_http_queue_init
==============
*/

void __fastcall indyfs_http_queue_init(IndyFsHttpTaskQueue *taskQueue)
{
  ?indyfs_http_queue_init@@YAXPEAUIndyFsHttpTaskQueue@@@Z(taskQueue);
}

/*
==============
indyfs_http_queue_task_free
==============
*/

int __fastcall indyfs_http_queue_task_free(IndyFsHttpTaskQueue *taskQueue, IndyFsHttpTaskHandle *waitHandle)
{
  return ?indyfs_http_queue_task_free@@YAHPEAUIndyFsHttpTaskQueue@@PEAUIndyFsHttpTaskHandle@@@Z(taskQueue, waitHandle);
}

/*
==============
fetch_chunk
==============
*/
__int64 fetch_chunk(IndyFsFileCache *fileCache, SimpleHttpConnection *connection, bool *connectionGood, unsigned __int8 *chunkSha1, unsigned __int64 chunkSize, IndyFsStorageServerInfo *storageServerInfo, unsigned __int64 taskId)
{
  unsigned int v11; 
  __int64 v12; 
  int v14; 
  IndyFsScopedEventWithArgs v16; 
  char out_path[272]; 
  char _Buffer[256]; 
  char from[2048]; 

  j_snprintf(_Buffer, 0x100ui64, "\"taskId\": %zu", taskId);
  IndyFsScopedEventWithArgs::IndyFsScopedEventWithArgs(&v16, "HttpQueue", "FetchChunk", _Buffer);
  if ( indyfs_filecache_resolve_path(fileCache, chunkSha1, out_path) == -1 )
  {
    indyfs_log_message(Error, "Failed to resolve path for chunk to fetch.");
    v11 = -1;
  }
  else
  {
    v12 = indyfs_file_size(out_path);
    if ( v12 > 0 && v12 == chunkSize )
    {
      indyfs_file_touch(out_path);
      indyfs_statistics_internal_add_file_cache_hit("disk", chunkSha1, chunkSize);
    }
    else
    {
      indyfs_statistics_internal_add_file_cache_miss(chunkSha1, chunkSize);
      if ( storageServerInfo->type == Disk )
      {
        v11 = http_download_chunk_to_file_helper(connection, storageServerInfo, out_path, chunkSha1, chunkSize, taskId, connectionGood);
        goto LABEL_7;
      }
      v14 = *chunkSha1;
      j_snprintf(from, 0x800ui64, "%s/%02x/%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x", storageServerInfo->url, v14, v14, chunkSha1[1], chunkSha1[2], chunkSha1[3], chunkSha1[4], chunkSha1[5], chunkSha1[6], chunkSha1[7], chunkSha1[8], chunkSha1[9], chunkSha1[10], chunkSha1[11], chunkSha1[12], chunkSha1[13], chunkSha1[14], chunkSha1[15], chunkSha1[16], chunkSha1[17], chunkSha1[18], chunkSha1[19]);
      if ( indyfs_file_copy(from, out_path) == -1 )
      {
        indyfs_log_message(Error, "FileCache fetch chunk failed to copy file");
        v11 = -1;
        goto LABEL_7;
      }
    }
    v11 = 0;
  }
LABEL_7:
  IndyFsScopedEventWithArgs::~IndyFsScopedEventWithArgs(&v16);
  return v11;
}

/*
==============
indyfs_http_queue_init
==============
*/
void indyfs_http_queue_init(IndyFsHttpTaskQueue *taskQueue)
{
  indyfs_mutex_init((LPCRITICAL_SECTION)&taskQueue->lock);
  indyfs_condition_variable_init((PCONDITION_VARIABLE)&taskQueue->notEmptyCV);
  indyfs_condition_variable_init((PCONDITION_VARIABLE)&taskQueue->notFullCV);
  indyfs_condition_variable_init((PCONDITION_VARIABLE)&taskQueue->notFinishedCV);
  taskQueue->readCursor = 1i64;
  taskQueue->writeCursor = 1i64;
  taskQueue->shouldQuit = 0;
}

/*
==============
indyfs_http_queue_push
==============
*/
__int64 indyfs_http_queue_push(IndyFsHttpTaskQueue *taskQueue, IndyFsChunk *chunk, IndyFsHttpTaskHandle *waitHandle, IndyFsHttpTaskHandle **outputHandle)
{
  unsigned __int64 readCursor; 
  unsigned __int64 writeCursor; 
  IndyFsHttpTask *v10; 
  unsigned int v11; 
  IndyFsHttpTaskHandleImpl *v13; 
  IndyFsScopedEvent v14; 
  IndyFsScopedEvent v15; 

  IndyFsScopedEvent::IndyFsScopedEvent(&v15, "HttpQueue", "Push");
  indyfs_mutex_lock((LPCRITICAL_SECTION)&taskQueue->lock);
  readCursor = taskQueue->readCursor;
  writeCursor = taskQueue->writeCursor;
  if ( readCursor >= writeCursor )
  {
LABEL_7:
    if ( writeCursor - readCursor <= 0x3F )
    {
LABEL_10:
      v10 = &taskQueue->data[writeCursor & 0x3F];
      *(_OWORD *)v10->chunkSha1 = *(_OWORD *)chunk->sha1;
      *(_DWORD *)&v10->chunkSha1[16] = *(_DWORD *)&chunk->sha1[16];
      v10->chunkSize = chunk->size;
      v10->waitHandle = (IndyFsHttpTaskHandleImpl *)waitHandle;
      v11 = 0;
      *(_DWORD *)waitHandle->impl = 0;
      ++taskQueue->writeCursor;
      *outputHandle = waitHandle;
      indyfs_mutex_unlock((LPCRITICAL_SECTION)&taskQueue->lock);
      indyfs_condition_variable_signal_one((PCONDITION_VARIABLE)&taskQueue->notEmptyCV);
    }
    else
    {
      while ( !taskQueue->shouldQuit )
      {
        IndyFsScopedEvent::IndyFsScopedEvent(&v14, "HttpQueue", "WaitNotFull");
        indyfs_condition_variable_wait(&taskQueue->notFullCV, &taskQueue->lock);
        IndyFsScopedEvent::~IndyFsScopedEvent(&v14);
        writeCursor = taskQueue->writeCursor;
        if ( writeCursor - taskQueue->readCursor <= 0x3F )
          goto LABEL_10;
      }
      indyfs_mutex_unlock((LPCRITICAL_SECTION)&taskQueue->lock);
      indyfs_log_message(Completed, "A chunk was requested for download while IndyFs is shutting down");
      v11 = -1;
    }
  }
  else
  {
    v13 = taskQueue->data[taskQueue->readCursor & 0x3F].waitHandle;
    while ( *(_OWORD *)taskQueue->data[taskQueue->readCursor & 0x3F].chunkSha1 != *(_OWORD *)chunk->sha1 || (unsigned int)*(_OWORD *)&taskQueue->data[taskQueue->readCursor & 0x3F].chunkSha1[16] != *(_DWORD *)&chunk->sha1[16] )
    {
      if ( ++readCursor >= writeCursor )
      {
        readCursor = taskQueue->readCursor;
        goto LABEL_7;
      }
    }
    ++v13->refCount;
    *outputHandle = (IndyFsHttpTaskHandle *)v13;
    indyfs_mutex_unlock((LPCRITICAL_SECTION)&taskQueue->lock);
    v11 = 0;
  }
  IndyFsScopedEvent::~IndyFsScopedEvent(&v15);
  return v11;
}

/*
==============
indyfs_http_queue_quit
==============
*/
void indyfs_http_queue_quit(void)
{
  IndyFsHttpTaskQueue *http_task_queue; 

  http_task_queue = indyfs_get_http_task_queue();
  indyfs_mutex_lock((LPCRITICAL_SECTION)&http_task_queue->lock);
  http_task_queue->shouldQuit = 1;
  indyfs_mutex_unlock((LPCRITICAL_SECTION)&http_task_queue->lock);
  indyfs_condition_variable_signal_all((PCONDITION_VARIABLE)&http_task_queue->notFullCV);
  indyfs_condition_variable_signal_all((PCONDITION_VARIABLE)&http_task_queue->notEmptyCV);
  indyfs_condition_variable_signal_all((PCONDITION_VARIABLE)&http_task_queue->notFinishedCV);
}

/*
==============
indyfs_http_queue_remove
==============
*/
__int64 indyfs_http_queue_remove(IndyFsHttpTaskQueue *taskQueue, IndyFsHttpTaskHandle *waitHandle)
{
  unsigned __int64 readCursor; 
  unsigned __int64 writeCursor; 
  IndyFsHttpTaskHandleImpl **p_waitHandle; 
  IndyFsHttpTaskHandle *v7; 
  unsigned __int8 v8; 
  bool v10; 
  int v11; 
  unsigned __int64 v12; 
  unsigned __int64 v13; 
  unsigned __int64 v14; 
  unsigned __int64 v15; 
  IndyFsScopedEvent v16; 

  IndyFsScopedEvent::IndyFsScopedEvent(&v16, "HttpQueue", "Remove");
  indyfs_mutex_lock((LPCRITICAL_SECTION)&taskQueue->lock);
  readCursor = taskQueue->readCursor;
  writeCursor = taskQueue->writeCursor;
  if ( readCursor >= writeCursor )
  {
LABEL_5:
    indyfs_mutex_unlock((LPCRITICAL_SECTION)&taskQueue->lock);
    goto LABEL_6;
  }
  p_waitHandle = &taskQueue->data[readCursor].waitHandle;
  while ( 1 )
  {
    v7 = (IndyFsHttpTaskHandle *)*p_waitHandle;
    if ( *p_waitHandle == (IndyFsHttpTaskHandleImpl *)waitHandle )
      break;
    ++readCursor;
    p_waitHandle += 5;
    if ( readCursor >= writeCursor )
      goto LABEL_5;
  }
  v10 = (*(_DWORD *)&v7->impl[4])-- == 1;
  v11 = *(_DWORD *)&v7->impl[4];
  if ( !v10 )
  {
    if ( v11 >= 0 )
    {
      if ( v11 )
      {
        indyfs_mutex_unlock((LPCRITICAL_SECTION)&taskQueue->lock);
        v8 = 1;
        goto LABEL_7;
      }
      goto LABEL_13;
    }
    indyfs_log_message(Canceled, "indyfs_http_queue_remove() - Failed to free waitHandle. Final refCount - %d", (unsigned int)v11);
LABEL_6:
    v8 = 0;
    goto LABEL_7;
  }
  *(_DWORD *)&v7->impl[4] = -99;
LABEL_13:
  v12 = readCursor - 1;
  v13 = taskQueue->readCursor;
  if ( readCursor - 1 >= v13 )
  {
    v14 = readCursor;
    do
    {
      v15 = v14 & 0x3F;
      *(__m256i *)taskQueue->data[v15].chunkSha1 = *(__m256i *)taskQueue->data[v12 & 0x3F].chunkSha1;
      taskQueue->data[v15].waitHandle = taskQueue->data[v12-- & 0x3F].waitHandle;
      --v14;
      v13 = taskQueue->readCursor;
    }
    while ( v12 >= v13 );
  }
  taskQueue->readCursor = v13 + 1;
  indyfs_mutex_unlock((LPCRITICAL_SECTION)&taskQueue->lock);
  indyfs_condition_variable_signal_one((PCONDITION_VARIABLE)&taskQueue->notFullCV);
  v8 = 1;
LABEL_7:
  IndyFsScopedEvent::~IndyFsScopedEvent(&v16);
  return v8;
}

/*
==============
indyfs_http_queue_task_free
==============
*/
__int64 indyfs_http_queue_task_free(IndyFsHttpTaskQueue *taskQueue, IndyFsHttpTaskHandle *waitHandle)
{
  _RTL_CRITICAL_SECTION *p_lock; 
  bool v4; 
  unsigned int v5; 

  p_lock = (_RTL_CRITICAL_SECTION *)&taskQueue->lock;
  indyfs_mutex_lock((LPCRITICAL_SECTION)&taskQueue->lock);
  v4 = (*(_DWORD *)&waitHandle->impl[4])-- == 1;
  v5 = *(_DWORD *)&waitHandle->impl[4];
  if ( v4 )
    *(_DWORD *)&waitHandle->impl[4] = -99;
  indyfs_mutex_unlock(p_lock);
  return v5;
}

/*
==============
indyfs_http_queue_task_init
==============
*/
void indyfs_http_queue_task_init(IndyFsHttpTaskHandle *waitHandle)
{
  *(_DWORD *)&waitHandle->impl[4] = 1;
}

/*
==============
indyfs_http_queue_term
==============
*/
void indyfs_http_queue_term(IndyFsHttpTaskQueue *taskQueue)
{
  indyfs_mutex_term((LPCRITICAL_SECTION)&taskQueue->lock);
  indyfs_condition_variable_term(&taskQueue->notEmptyCV);
  indyfs_condition_variable_term(&taskQueue->notFullCV);
  indyfs_condition_variable_term(&taskQueue->notFinishedCV);
}

/*
==============
indyfs_http_queue_thread_main
==============
*/
void indyfs_http_queue_thread_main(const char *threadName)
{
  IndyFsHttpTaskQueue *http_task_queue; 
  IndyFsFileCache *filecache; 
  IndyFsStorageServerInfo *storageServerInfo; 
  unsigned __int64 taskId; 
  bool connectionGood; 
  __int64 v6; 
  unsigned __int8 chunkSha1[32]; 
  IndyFsHttpTaskHandleImpl *waitHandle; 
  IndyFsScopedEvent v9; 
  IndyFsScopedEvent v10; 
  SimpleHttpConnection connection; 

  v6 = -2i64;
  if ( threadName )
    indyfs_profiler_set_current_thread_name(threadName);
  indyfs_profiler_internal_instant_event("HttpQueue", "ThreadStart");
  http_task_queue = indyfs_get_http_task_queue();
  filecache = indyfs_get_filecache();
  storageServerInfo = indyfs_get_storage_server_info();
  connectionGood = 0;
  while ( 1 )
  {
    IndyFsScopedEvent::IndyFsScopedEvent(&v10, "HttpQueue", "TaskLoop");
    indyfs_mutex_lock((LPCRITICAL_SECTION)&http_task_queue->lock);
    if ( http_task_queue->writeCursor == http_task_queue->readCursor )
    {
      while ( 1 )
      {
        IndyFsScopedEvent::IndyFsScopedEvent(&v9, "HttpQueue", "WaitNotEmpty");
        indyfs_statistics_internal_add_count("HttpQueue", "QueueSize", 0i64);
        if ( http_task_queue->shouldQuit )
          break;
        indyfs_condition_variable_wait(&http_task_queue->notEmptyCV, &http_task_queue->lock);
        IndyFsScopedEvent::~IndyFsScopedEvent(&v9);
        if ( http_task_queue->writeCursor != http_task_queue->readCursor )
          goto LABEL_9;
      }
      IndyFsScopedEvent::~IndyFsScopedEvent(&v9);
    }
LABEL_9:
    if ( http_task_queue->shouldQuit )
      break;
    indyfs_statistics_internal_add_count("HttpQueue", "QueueSize", http_task_queue->writeCursor - http_task_queue->readCursor);
    taskId = http_task_queue->readCursor;
    *(__m256i *)chunkSha1 = *(__m256i *)http_task_queue->data[taskId & 0x3F].chunkSha1;
    waitHandle = http_task_queue->data[taskId & 0x3F].waitHandle;
    http_task_queue->readCursor = taskId + 1;
    indyfs_mutex_unlock((LPCRITICAL_SECTION)&http_task_queue->lock);
    indyfs_condition_variable_signal_one((PCONDITION_VARIABLE)&http_task_queue->notFullCV);
    LODWORD(taskId) = fetch_chunk(filecache, &connection, &connectionGood, chunkSha1, *(unsigned __int64 *)&chunkSha1[24], storageServerInfo, taskId);
    indyfs_mutex_lock((LPCRITICAL_SECTION)&http_task_queue->lock);
    waitHandle->status = ((_DWORD)taskId != 0) + 1;
    indyfs_mutex_unlock((LPCRITICAL_SECTION)&http_task_queue->lock);
    indyfs_condition_variable_signal_all((PCONDITION_VARIABLE)&http_task_queue->notFinishedCV);
    IndyFsScopedEvent::~IndyFsScopedEvent(&v10);
  }
  indyfs_mutex_unlock((LPCRITICAL_SECTION)&http_task_queue->lock);
  if ( connectionGood )
    simplehttp_close_connection(&connection);
  IndyFsScopedEvent::~IndyFsScopedEvent(&v10);
}

/*
==============
indyfs_http_queue_wait
==============
*/
__int64 indyfs_http_queue_wait(IndyFsHttpTaskQueue *taskQueue, IndyFsHttpTaskHandle *waitHandle)
{
  int v4; 
  unsigned int v5; 
  IndyFsScopedEvent v7; 
  IndyFsScopedEvent v8; 

  IndyFsScopedEvent::IndyFsScopedEvent(&v8, "HttpQueue", "WaitUntilFinished");
  indyfs_mutex_lock((LPCRITICAL_SECTION)&taskQueue->lock);
  v4 = *(_DWORD *)waitHandle->impl;
  if ( *(_DWORD *)waitHandle->impl != 1 )
  {
    while ( v4 != 2 )
    {
      IndyFsScopedEvent::IndyFsScopedEvent(&v7, "HttpQueue", "WaitUntilFinished_Wait");
      if ( taskQueue->shouldQuit )
      {
        indyfs_mutex_unlock((LPCRITICAL_SECTION)&taskQueue->lock);
        indyfs_log_message(Completed, "io_queue_quit() called during a indyfs_http_queue_wait()");
        IndyFsScopedEvent::~IndyFsScopedEvent(&v7);
        v5 = 2;
        goto LABEL_6;
      }
      indyfs_condition_variable_wait(&taskQueue->notFinishedCV, &taskQueue->lock);
      IndyFsScopedEvent::~IndyFsScopedEvent(&v7);
      v4 = *(_DWORD *)waitHandle->impl;
      if ( *(_DWORD *)waitHandle->impl == 1 )
        break;
    }
  }
  indyfs_mutex_unlock((LPCRITICAL_SECTION)&taskQueue->lock);
  v5 = *(_DWORD *)waitHandle->impl;
LABEL_6:
  IndyFsScopedEvent::~IndyFsScopedEvent(&v8);
  return v5;
}


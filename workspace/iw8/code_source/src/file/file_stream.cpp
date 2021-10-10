/*
==============
FileStreamTrack_GetCount
==============
*/

unsigned __int64 __fastcall FileStreamTrack_GetCount(FileStreamTrackType fileStreamTrack)
{
  return ?FileStreamTrack_GetCount@@YA_KW4FileStreamTrackType@@@Z(fileStreamTrack);
}

/*
==============
FileStream_Easy_SeekSet
==============
*/

void __fastcall FileStream_Easy_SeekSet(FileStreamFileID handle, __int64 offset)
{
  ?FileStream_Easy_SeekSet@@YAXW4FileStreamFileID@@_J@Z(handle, offset);
}

/*
==============
FileStream_FileIsOpen
==============
*/

bool __fastcall FileStream_FileIsOpen(FileStreamFileID handle)
{
  return ?FileStream_FileIsOpen@@YA_NW4FileStreamFileID@@@Z(handle);
}

/*
==============
FileStream_FileIsError
==============
*/

bool __fastcall FileStream_FileIsError(FileStreamFileID handle)
{
  return ?FileStream_FileIsError@@YA_NW4FileStreamFileID@@@Z(handle);
}

/*
==============
FileStream_Easy_Read
==============
*/

__int64 __fastcall FileStream_Easy_Read(FileStreamFileID handle, void *buf, __int64 bufferSize, __int64 *bytesRead, FileStreamTrackType fileStreamTrack)
{
  return ?FileStream_Easy_Read@@YA_JW4FileStreamFileID@@PEAX_JPEA_JW4FileStreamTrackType@@@Z(handle, buf, bufferSize, bytesRead, fileStreamTrack);
}

/*
==============
FileStream_CloseAllFilesAtPath
==============
*/

bool __fastcall FileStream_CloseAllFilesAtPath(const char *path)
{
  return ?FileStream_CloseAllFilesAtPath@@YA_NPEBD@Z(path);
}

/*
==============
FileStream_CloseFile
==============
*/

void __fastcall FileStream_CloseFile(FileStreamFileID handle)
{
  ?FileStream_CloseFile@@YAXW4FileStreamFileID@@@Z(handle);
}

/*
==============
FileStream_Shutdown
==============
*/

void FileStream_Shutdown(void)
{
  ?FileStream_Shutdown@@YAXXZ();
}

/*
==============
FileStream_OpenFile
==============
*/

FileStreamFileID __fastcall FileStream_OpenFile(Sys_Folder folder, const char *name, int flags)
{
  return ?FileStream_OpenFile@@YA?AW4FileStreamFileID@@W4Sys_Folder@@PEBDH@Z(folder, name, flags);
}

/*
==============
FileStream_Easy_FileSize
==============
*/

__int64 __fastcall FileStream_Easy_FileSize(FileStreamFileID handle)
{
  return ?FileStream_Easy_FileSize@@YA_JW4FileStreamFileID@@@Z(handle);
}

/*
==============
FileStream_Init
==============
*/

bool __fastcall FileStream_Init()
{
  return ?FileStream_Init@@YA_NXZ();
}

/*
==============
FileStream_GetReadHistory
==============
*/

FileStreamReadHistory *__fastcall FileStream_GetReadHistory()
{
  return ?FileStream_GetReadHistory@@YAPEAVFileStreamReadHistory@@XZ();
}

/*
==============
FileStream_FreeRequest
==============
*/

bool __fastcall FileStream_FreeRequest(FileStreamRequestID id, bool freeEvenIfLoadInProgress)
{
  return ?FileStream_FreeRequest@@YA_NW4FileStreamRequestID@@_N@Z(id, freeEvenIfLoadInProgress);
}

/*
==============
FileStream_AddRequest
==============
*/

bool __fastcall FileStream_AddRequest(FileStreamFileID handle, __int64 offs, __int64 bufferSize, void *buf, int msUntilRequired, FileStreamPriority priority, void (__fastcall *callback)(FileStreamRequestID, FileStreamStatus, __int64, void *), void *user, FileStreamRequestID *outId, FileStreamTrackType fileStreamTrack)
{
  return ?FileStream_AddRequest@@YA_NW4FileStreamFileID@@_J1PEAXHW4FileStreamPriority@@P6AXW4FileStreamRequestID@@W4FileStreamStatus@@12@Z2PEAW43@W4FileStreamTrackType@@@Z(handle, offs, bufferSize, buf, msUntilRequired, priority, callback, user, outId, fileStreamTrack);
}

/*
==============
FileStreamTrack_DecrementCounter
==============
*/

void __fastcall FileStreamTrack_DecrementCounter(FileStreamTrackType fileStreamTrack)
{
  ?FileStreamTrack_DecrementCounter@@YAXW4FileStreamTrackType@@@Z(fileStreamTrack);
}

/*
==============
FileStream_IsCancelledReadInProgress
==============
*/

bool __fastcall FileStream_IsCancelledReadInProgress()
{
  return ?FileStream_IsCancelledReadInProgress@@YA_NXZ();
}

/*
==============
FileStream_GetStatus
==============
*/

FileStreamStatus __fastcall FileStream_GetStatus(FileStreamRequestID id)
{
  return ?FileStream_GetStatus@@YA?AW4FileStreamStatus@@W4FileStreamRequestID@@@Z(id);
}

/*
==============
FileStream_RecordBandwidth
==============
*/

void __fastcall FileStream_RecordBandwidth(unsigned __int64 numBytesRead)
{
  ?FileStream_RecordBandwidth@@YAX_K@Z(numBytesRead);
}

/*
==============
FileStream_GetFileName
==============
*/

char *__fastcall FileStream_GetFileName(FileStreamFileID fileID)
{
  return ?FileStream_GetFileName@@YAPEADW4FileStreamFileID@@@Z(fileID);
}

/*
==============
FileStream_Exists
==============
*/

bool __fastcall FileStream_Exists(Sys_Folder folder, const char *name)
{
  return ?FileStream_Exists@@YA_NW4Sys_Folder@@PEBD@Z(folder, name);
}

/*
==============
FileStream_AddCallbackOnlyRequest
==============
*/

bool __fastcall FileStream_AddCallbackOnlyRequest(int estMsNeeded, int msUntilRequired, FileStreamPriority priority, void (__fastcall *callback)(int, void *, FileStreamRequestID), void *user, FileStreamRequestID *outId)
{
  return ?FileStream_AddCallbackOnlyRequest@@YA_NHHW4FileStreamPriority@@P6AXHPEAXW4FileStreamRequestID@@@Z1PEAW42@@Z(estMsNeeded, msUntilRequired, priority, callback, user, outId);
}

/*
==============
FileStreamTrack_IncrementCounter
==============
*/

void __fastcall FileStreamTrack_IncrementCounter(FileStreamTrackType fileStreamTrack)
{
  ?FileStreamTrack_IncrementCounter@@YAXW4FileStreamTrackType@@@Z(fileStreamTrack);
}

/*
==============
FileStream_GetStreamPerfDataAndClearAfterMinTime
==============
*/

int __fastcall FileStream_GetStreamPerfDataAndClearAfterMinTime(float *readsPerSec, float *mBytesPerSec)
{
  return ?FileStream_GetStreamPerfDataAndClearAfterMinTime@@YAHPEAM0@Z(readsPerSec, mBytesPerSec);
}

/*
==============
FileStream_Easy_Tell
==============
*/

__int64 __fastcall FileStream_Easy_Tell(FileStreamFileID handle)
{
  return ?FileStream_Easy_Tell@@YA_JW4FileStreamFileID@@@Z(handle);
}

/*
==============
FileStreamTrack_DecrementCounter
==============
*/
void FileStreamTrack_DecrementCounter(FileStreamTrackType fileStreamTrack)
{
  __int64 v1; 
  int v2; 
  volatile int *v3; 
  int v5; 
  int v6; 

  v1 = fileStreamTrack;
  if ( (unsigned int)fileStreamTrack >= FILE_STREAM_TRACK_COUNT )
  {
    v5 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\file\\file_stream.cpp", 395, ASSERT_TYPE_ASSERT, "(unsigned)( fileStreamTrack ) < (unsigned)( FILE_STREAM_TRACK_COUNT )", "fileStreamTrack doesn't index FILE_STREAM_TRACK_COUNT\n\t%i not in [0, %i)", fileStreamTrack, v5) )
      __debugbreak();
  }
  v2 = s_fileStreamGlob.profileCounter[v1];
  v3 = &s_fileStreamGlob.profileCounter[v1];
  if ( v2 < 0 )
  {
    v6 = *v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\file\\file_stream.cpp", 396, ASSERT_TYPE_ASSERT, "( s_fileStreamGlob.profileCounter[fileStreamTrack] ) >= ( 0 )", "%s >= %s\n\t%i, %i", "s_fileStreamGlob.profileCounter[fileStreamTrack]", "0", v6, 0i64) )
      __debugbreak();
  }
  if ( ((unsigned __int8)v3 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", (const void *)v3) )
    __debugbreak();
  _InterlockedDecrement(v3);
}

/*
==============
FileStreamTrack_GetCount
==============
*/
unsigned __int64 FileStreamTrack_GetCount(FileStreamTrackType fileStreamTrack)
{
  __int64 v1; 
  int v4; 

  v1 = fileStreamTrack;
  if ( (unsigned int)fileStreamTrack >= FILE_STREAM_TRACK_COUNT )
  {
    v4 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\file\\file_stream.cpp", 381, ASSERT_TYPE_ASSERT, "(unsigned)( fileStreamTrack ) < (unsigned)( FILE_STREAM_TRACK_COUNT )", "fileStreamTrack doesn't index FILE_STREAM_TRACK_COUNT\n\t%i not in [0, %i)", fileStreamTrack, v4) )
      __debugbreak();
  }
  return s_fileStreamGlob.profileCounter[v1];
}

/*
==============
FileStreamTrack_IncrementCounter
==============
*/
void FileStreamTrack_IncrementCounter(FileStreamTrackType fileStreamTrack)
{
  __int64 v1; 
  volatile int *v2; 
  int v4; 

  v1 = fileStreamTrack;
  if ( (unsigned int)fileStreamTrack >= FILE_STREAM_TRACK_COUNT )
  {
    v4 = 8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\file\\file_stream.cpp", 388, ASSERT_TYPE_ASSERT, "(unsigned)( fileStreamTrack ) < (unsigned)( FILE_STREAM_TRACK_COUNT )", "fileStreamTrack doesn't index FILE_STREAM_TRACK_COUNT\n\t%i not in [0, %i)", fileStreamTrack, v4) )
      __debugbreak();
  }
  v2 = &s_fileStreamGlob.profileCounter[v1];
  if ( ((unsigned __int8)v2 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", (const void *)v2) )
    __debugbreak();
  _InterlockedIncrement(v2);
}

/*
==============
FileStream_AddCallbackOnlyRequest
==============
*/
char FileStream_AddCallbackOnlyRequest(int estMsNeeded, int msUntilRequired, int priority, void (*callback)(int, void *, FileStreamRequestID), void *user, FileStreamRequestID *outId)
{
  int v11; 
  int v12; 
  FileStreamRequest *requests; 
  FileStreamRequest *v14; 
  unsigned int v15; 
  int v16; 
  char v17; 
  __int64 v18; 
  __int64 v19; 
  ScopedCriticalSection v20; 

  if ( !s_fileStreamGlob.threadsSpawned )
    return 0;
  v11 = Sys_Milliseconds();
  if ( msUntilRequired < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\file\\file_stream.cpp", 973, ASSERT_TYPE_ASSERT, "( ( msUntilRequired >= 0 ) )", "( msUntilRequired ) = %i", msUntilRequired) )
    __debugbreak();
  if ( msUntilRequired < estMsNeeded && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\file\\file_stream.cpp", 974, ASSERT_TYPE_ASSERT, "( msUntilRequired ) >= ( estMsNeeded )", "%s >= %s\n\t%i, %i", "msUntilRequired", "estMsNeeded", msUntilRequired, estMsNeeded) )
    __debugbreak();
  ScopedCriticalSection::ScopedCriticalSection(&v20, CRITSECT_IO_SCHEDULER, SCOPED_CRITSECT_NORMAL);
  v12 = 0;
  if ( *(_DWORD *)s_fileStreamGlob.requests[0].id == -1 )
  {
LABEL_13:
    v14 = &s_fileStreamGlob.requests[v12];
    memset_0(v14, 0, sizeof(FileStreamRequest));
    v15 = s_fileStreamGlob.requestIDs[v12];
    *(_DWORD *)v14->id = v15;
    if ( outId )
    {
      *(_DWORD *)outId = v15;
      v15 = *(_DWORD *)v14->id;
    }
    v16 = v15 & 0x7F;
    if ( v16 != v12 )
    {
      LODWORD(v19) = v12;
      LODWORD(v18) = v16;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\file\\file_stream.cpp", 991, ASSERT_TYPE_ASSERT, "( ( static_cast<int32_t>( newStreamInfo->id ) & FILE_STREAM_INDEX_MASK ) ) == ( index )", "%s == %s\n\t%i, %i", "( static_cast<int32_t>( newStreamInfo->id ) & FILE_STREAM_INDEX_MASK )", "index", v18, v19) )
        __debugbreak();
    }
    *(_DWORD *)v14->file = -16777217;
    v14->estMsToFinish = estMsNeeded;
    v14->endDeadline = v11 + msUntilRequired;
    v14->genericCallback = callback;
    v14->callbackUser = user;
    *(_DWORD *)v14->status = 1;
    *(_DWORD *)v14->priority = priority;
    v14->callbackOnly = 1;
    FileStream_AddToQueue(v14, &s_fileStreamGlob.syncQueue);
    Sys_WakeFileStream();
    s_fileStreamGlob.requestIDs[v12] = (s_fileStreamGlob.requestIDs[v12] + 128) & 0xFFFFFF;
    v17 = 1;
  }
  else
  {
    requests = s_fileStreamGlob.requests;
    while ( 1 )
    {
      ++v12;
      if ( ++requests == (FileStreamRequest *)s_fileStreamGlob.requestIDs )
        break;
      if ( *(_DWORD *)requests->id == -1 )
        goto LABEL_13;
    }
    v17 = 0;
  }
  ScopedCriticalSection::~ScopedCriticalSection(&v20);
  return v17;
}

/*
==============
FileStream_AddRequest
==============
*/
__int64 FileStream_AddRequest(unsigned int handle, __int64 offs, __int64 bufferSize, void *buf, int msUntilRequired, int priority, void (*callback)(FileStreamRequestID, FileStreamStatus, __int64, void *), void *user, FileStreamRequestID *outId, FileStreamTrackType fileStreamTrack)
{
  __int64 v12; 
  __int64 v13; 
  int v14; 
  FileStreamRequest *requests; 
  FileStreamRequest *v16; 
  unsigned int *v17; 
  unsigned int v18; 
  int v19; 
  volatile int *v20; 
  unsigned __int8 v21; 
  __int64 v23; 
  __int64 v24; 
  ScopedCriticalSection v25; 
  int v26; 

  v12 = (int)handle;
  if ( handle >= 0x100 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\file\\file_stream.cpp", 868, ASSERT_TYPE_ASSERT, "(unsigned)( handle ) < (unsigned)( MAX_FILE_IDS )", "handle doesn't index MAX_FILE_IDS\n\t%i not in [0, %i)", handle, 256) )
    __debugbreak();
  Sys_ProfBeginNamedEvent(0xFF808080, "FileStream_AddRequest");
  v13 = v12;
  if ( s_fileStreamGlob.nextFreeFileID[320 * v12 - 81637] || !s_fileStreamGlob.threadsSpawned )
  {
    v21 = 0;
  }
  else
  {
    if ( (!s_fileStreamGlob.fileIDs[v13].inUse || s_fileStreamGlob.fileIDs[v13].shouldClose) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\file\\file_stream.cpp", 881, ASSERT_TYPE_ASSERT, "(fh->inUse && !fh->shouldClose)", (const char *)&queryFormat, "fh->inUse && !fh->shouldClose") )
      __debugbreak();
    if ( msUntilRequired < 0 )
    {
      LODWORD(v23) = msUntilRequired;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\file\\file_stream.cpp", 883, ASSERT_TYPE_ASSERT, "( ( msUntilRequired >= 0 ) )", "( msUntilRequired ) = %i", v23) )
        __debugbreak();
    }
    if ( (unsigned __int64)(bufferSize - 1) > 0x1FFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\file\\file_stream.cpp", 887, ASSERT_TYPE_ASSERT, "( ( ( ( bufferSize > 0 ) && ( bufferSize <= 512 * MB ) ) ) )", "( bufferSize ) = %lli", bufferSize) )
      __debugbreak();
    if ( !buf && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\file\\file_stream.cpp", 890, ASSERT_TYPE_ASSERT, "(buf)", (const char *)&queryFormat, "buf") )
      __debugbreak();
    v26 = Sys_Milliseconds();
    ScopedCriticalSection::ScopedCriticalSection(&v25, CRITSECT_IO_SCHEDULER, SCOPED_CRITSECT_NORMAL);
    v14 = 0;
    if ( *(_DWORD *)s_fileStreamGlob.requests[0].id == -1 )
    {
LABEL_23:
      v16 = &s_fileStreamGlob.requests[v14];
      memset_0(v16, 0, sizeof(FileStreamRequest));
      v17 = &s_fileStreamGlob.requestIDs[v14];
      v18 = *v17;
      *(_DWORD *)v16->id = *v17;
      if ( outId )
      {
        *(_DWORD *)outId = v18;
        v18 = *(_DWORD *)v16->id;
      }
      v19 = v18 & 0x7F;
      if ( v19 != v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\file\\file_stream.cpp", 913, ASSERT_TYPE_ASSERT, "( ( static_cast<int32_t>( newStreamInfo->id ) & FILE_STREAM_INDEX_MASK ) ) == ( index )", "%s == %s\n\t%i, %i", "( static_cast<int32_t>( newStreamInfo->id ) & FILE_STREAM_INDEX_MASK )", "index", v19, v14) )
        __debugbreak();
      if ( (s_fileStreamGlob.fileIDs[v13].flags & 0x10) != 0 )
      {
        if ( (offs & 0xFFF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\file\\file_stream.cpp", 918, ASSERT_TYPE_ASSERT, "(IsAligned( offs, 4096 ))", (const char *)&queryFormat, "IsAligned( offs, FILE_READ_ALIGNMENT )") )
          __debugbreak();
        if ( (bufferSize & 0xFFF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\file\\file_stream.cpp", 919, ASSERT_TYPE_ASSERT, "(IsAligned( bufferSize, 4096 ))", (const char *)&queryFormat, "IsAligned( bufferSize, FILE_READ_ALIGNMENT )") )
          __debugbreak();
        if ( ((unsigned __int16)buf & 0xFFF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\file\\file_stream.cpp", 920, ASSERT_TYPE_ASSERT, "(IsAligned( buf, 4096 ))", (const char *)&queryFormat, "IsAligned( buf, FILE_READ_ALIGNMENT )") )
          __debugbreak();
        if ( XB3XMem_IsInAuxMem(buf) )
          Sys_Error((const ObfuscateErrorText)&stru_143D69550);
      }
      *(_DWORD *)v16->file = v12;
      v16->start_offset = offs;
      v16->buffer_size = bufferSize;
      v16->destination = (unsigned __int8 *)buf;
      v16->estMsToFinish = (int)bufferSize / 12582 + 36;
      v16->endDeadline = v26 + msUntilRequired;
      v16->genericCallback = (void (__fastcall *)(int, void *, FileStreamRequestID))callback;
      v16->callbackUser = user;
      *(_DWORD *)v16->status = 1;
      *(_DWORD *)v16->priority = priority;
      v16->callbackOnly = 0;
      v16->fileStreamTrack = fileStreamTrack;
      if ( (unsigned int)fileStreamTrack >= FILE_STREAM_TRACK_COUNT )
      {
        LODWORD(v24) = 8;
        LODWORD(v23) = fileStreamTrack;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\file\\file_stream.cpp", 388, ASSERT_TYPE_ASSERT, "(unsigned)( fileStreamTrack ) < (unsigned)( FILE_STREAM_TRACK_COUNT )", "fileStreamTrack doesn't index FILE_STREAM_TRACK_COUNT\n\t%i not in [0, %i)", v23, v24) )
          __debugbreak();
      }
      v20 = &s_fileStreamGlob.profileCounter[fileStreamTrack];
      if ( (((unsigned __int8)((unsigned __int8)&s_fileStreamGlob + 4 * fileStreamTrack) - 8) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", (const void *)v20) )
        __debugbreak();
      _InterlockedIncrement(v20);
      if ( FileStream_IsFileAsync((FileStreamFileID)v12) )
      {
        FileStream_AddToQueue(v16, &s_fileStreamGlob.asyncQueue);
        Sys_WakeFileStreamAsync();
      }
      else
      {
        FileStream_AddToQueue(v16, &s_fileStreamGlob.syncQueue);
        Sys_WakeFileStream();
      }
      *v17 = (*v17 + 128) & 0xFFFFFF;
      v21 = 1;
    }
    else
    {
      requests = s_fileStreamGlob.requests;
      while ( 1 )
      {
        ++v14;
        if ( ++requests == (FileStreamRequest *)s_fileStreamGlob.requestIDs )
          break;
        if ( *(_DWORD *)requests->id == -1 )
          goto LABEL_23;
      }
      if ( outId )
        *(_DWORD *)outId = -1;
      v21 = 0;
    }
    ScopedCriticalSection::~ScopedCriticalSection(&v25);
  }
  Sys_ProfEndNamedEvent();
  return v21;
}

/*
==============
FileStream_AddToQueue
==============
*/
void FileStream_AddToQueue(FileStreamRequest *newStreamInfo, FileStreamInfoQueue *queue)
{
  int v2; 
  int v5; 
  const dvar_t *v6; 
  FileStreamRequest *first; 
  int v8; 
  FileStreamRequest *v9; 
  int v10; 
  int v11; 
  FileStreamRequest *prevInQueue; 
  FileStreamRequest *v13; 
  const dvar_t *v14; 
  FileStreamRequest *v15; 
  int i; 
  const char *v17; 
  FileStreamRequest *v18; 
  __int64 v19; 
  int size; 

  v2 = 0;
  if ( queue->first )
  {
    v5 = Sys_Milliseconds();
    v6 = DCONST_DVARBOOL_fileStream_allowBackSeeking;
    first = queue->first;
    v8 = v5;
    v9 = NULL;
    if ( !DCONST_DVARBOOL_fileStream_allowBackSeeking && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "fileStream_allowBackSeeking") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v6);
    v10 = 0;
    if ( queue->size > 0 )
    {
      v11 = *(_DWORD *)newStreamInfo->file;
      while ( 1 )
      {
        if ( v10 <= 0 )
          prevInQueue = NULL;
        else
          prevInQueue = first->prevInQueue;
        if ( v11 == *(_DWORD *)first->file && newStreamInfo->start_offset < first->start_offset && *(_DWORD *)first->status != 2 || prevInQueue && v11 == *(_DWORD *)prevInQueue->file && (newStreamInfo->start_offset > prevInQueue->start_offset || v6->current.enabled && *(_DWORD *)prevInQueue->status == 2) )
          v9 = first;
        v13 = v9;
        if ( *(_DWORD *)newStreamInfo->priority > *(_DWORD *)first->priority )
          break;
        v9 = NULL;
        if ( first->estMsToFinish + first->endDeadline >= v8 + newStreamInfo->estMsToFinish )
          v9 = v13;
        v8 += first->estMsToFinish;
        first = first->nextInQueue;
        if ( ++v10 >= queue->size )
          goto LABEL_30;
      }
      if ( !v9 )
        v9 = first;
    }
LABEL_30:
    if ( v9 == queue->first )
    {
      queue->first = newStreamInfo;
    }
    else if ( !v9 )
    {
      v9 = queue->first;
    }
    newStreamInfo->nextInQueue = v9;
    newStreamInfo->prevInQueue = v9->prevInQueue;
    v9->prevInQueue = newStreamInfo;
    newStreamInfo->prevInQueue->nextInQueue = newStreamInfo;
    if ( newStreamInfo->nextInQueue->prevInQueue != newStreamInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\file\\file_stream.cpp", 497, ASSERT_TYPE_SANITY, "( newStreamInfo->nextInQueue->prevInQueue == newStreamInfo )", (const char *)&queryFormat, "newStreamInfo->nextInQueue->prevInQueue == newStreamInfo") )
      __debugbreak();
    if ( newStreamInfo->prevInQueue->nextInQueue != newStreamInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\file\\file_stream.cpp", 498, ASSERT_TYPE_SANITY, "( newStreamInfo->prevInQueue->nextInQueue == newStreamInfo )", (const char *)&queryFormat, "newStreamInfo->prevInQueue->nextInQueue == newStreamInfo") )
      __debugbreak();
    if ( newStreamInfo->nextInQueue->nextInQueue->prevInQueue != newStreamInfo->nextInQueue && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\file\\file_stream.cpp", 499, ASSERT_TYPE_SANITY, "( newStreamInfo->nextInQueue->nextInQueue->prevInQueue == newStreamInfo->nextInQueue )", (const char *)&queryFormat, "newStreamInfo->nextInQueue->nextInQueue->prevInQueue == newStreamInfo->nextInQueue") )
      __debugbreak();
    v14 = DCONST_DVARBOOL_fileStream_printQueue;
    if ( !DCONST_DVARBOOL_fileStream_printQueue && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "fileStream_printQueue") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v14);
    if ( v14->current.enabled )
    {
      v15 = queue->first;
      Com_Printf(10, "addtoqueue\n");
      for ( i = 0; i < queue->size + 1; v15 = v15->nextInQueue )
      {
        v17 = (char *)&queryFormat.fmt + 3;
        if ( newStreamInfo == v15 )
          v17 = "*";
        LODWORD(v19) = *(_DWORD *)v15->status;
        Com_Printf(10, " %d: %s %zu %d%s\n", (unsigned int)i++, &s_fileStreamGlob.fileIDs[*(int *)v15->file], v15->start_offset, v19, v17);
      }
    }
  }
  else
  {
    if ( queue->size )
    {
      size = queue->size;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\file\\file_stream.cpp", 437, ASSERT_TYPE_ASSERT, "( ( queue->size == 0 ) )", "( queue->size ) = %i", size) )
        __debugbreak();
    }
    newStreamInfo->prevInQueue = newStreamInfo;
    newStreamInfo->nextInQueue = newStreamInfo;
    queue->first = newStreamInfo;
  }
  ++queue->size;
  if ( !queue->first && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\file\\file_stream.cpp", 518, ASSERT_TYPE_ASSERT, "(queue->first)", (const char *)&queryFormat, "queue->first") )
    __debugbreak();
  v18 = queue->first;
  do
  {
    ++v2;
    if ( v18->nextInQueue->prevInQueue != v18 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\file\\file_stream.cpp", 524, ASSERT_TYPE_ASSERT, "(p->nextInQueue->prevInQueue == p)", (const char *)&queryFormat, "p->nextInQueue->prevInQueue == p") )
      __debugbreak();
    if ( v18->prevInQueue->nextInQueue != v18 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\file\\file_stream.cpp", 525, ASSERT_TYPE_ASSERT, "(p->prevInQueue->nextInQueue == p)", (const char *)&queryFormat, "p->prevInQueue->nextInQueue == p") )
      __debugbreak();
    v18 = v18->nextInQueue;
  }
  while ( v18 != queue->first );
  if ( v2 != queue->size )
  {
    LODWORD(v19) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\file\\file_stream.cpp", 529, ASSERT_TYPE_ASSERT, "( ( numItemsInQueue == queue->size ) )", "( numItemsInQueue ) = %i", v19) )
      __debugbreak();
  }
}

/*
==============
FileStream_AsyncReadCallback
==============
*/
void FileStream_AsyncReadCallback(void *pStreamInfo, FileSysResult readResult, unsigned __int64 numBytesRead)
{
  __int64 v6; 
  volatile signed __int32 *v7; 
  int v8; 
  ScopedCriticalSection v9; 

  Sys_ProfBeginNamedEvent(0xFF808080, "FileStream_AsyncReadCallback");
  FileStream_ReadThrottle(0, numBytesRead);
  ScopedCriticalSection::ScopedCriticalSection(&v9, CRITSECT_IO_SCHEDULER, SCOPED_CRITSECT_NORMAL);
  if ( !v9._hasOwnership && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\file\\file_stream.cpp", 1487, ASSERT_TYPE_ASSERT, "(csb.HasOwnership())", (const char *)&queryFormat, "csb.HasOwnership()", -2i64) )
    __debugbreak();
  if ( ((unsigned __int8)&s_fileStreamGlob.activeAsyncReads & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &s_fileStreamGlob.activeAsyncReads) )
    __debugbreak();
  if ( _InterlockedDecrement(&s_fileStreamGlob.activeAsyncReads) < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\file\\file_stream.cpp", 1461, ASSERT_TYPE_ASSERT, "((Sys_InterlockedDecrement( &s_fileStreamGlob.activeAsyncReads )) >= (0))", (const char *)&queryFormat, "Sys_InterlockedDecrement( &s_fileStreamGlob.activeAsyncReads ) >= 0") )
    __debugbreak();
  v6 = *((int *)pStreamInfo + 17);
  v7 = &s_fileStreamGlob.activeAsyncReadsPerPriority[v6];
  if ( ((unsigned __int8)v7 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &s_fileStreamGlob.activeAsyncReadsPerPriority[v6]) )
    __debugbreak();
  if ( _InterlockedDecrement(v7) < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\file\\file_stream.cpp", 1462, ASSERT_TYPE_ASSERT, "((Sys_InterlockedDecrement( &s_fileStreamGlob.activeAsyncReadsPerPriority[static_cast< int >( stream->priority )] )) >= (0))", (const char *)&queryFormat, "Sys_InterlockedDecrement( &s_fileStreamGlob.activeAsyncReadsPerPriority[static_cast< int >( stream->priority )] ) >= 0") )
    __debugbreak();
  if ( !*((_DWORD *)pStreamInfo + 16) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\file\\file_stream.cpp", 1493, ASSERT_TYPE_ASSERT, "(stream->status != FileStreamStatus::INVALID)", (const char *)&queryFormat, "stream->status != FileStreamStatus::INVALID") )
    __debugbreak();
  v8 = *((_DWORD *)pStreamInfo + 16);
  if ( v8 )
  {
    if ( (unsigned int)(v8 - 3) <= 1 || readResult == FILESYSRESULT_CANCELLED )
    {
      *((_DWORD *)pStreamInfo + 16) = 4;
    }
    else
    {
      if ( v8 != 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\file\\file_stream.cpp", 1507, ASSERT_TYPE_ASSERT, "(stream->status == FileStreamStatus::INPROGRESS)", (const char *)&queryFormat, "stream->status == FileStreamStatus::INPROGRESS") )
        __debugbreak();
      *((_QWORD *)pStreamInfo + 3) = numBytesRead;
      if ( ((unsigned __int8)&s_fileStreamGlob.frameReads & 7) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 86, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int64 ) ) ) )", "( addend ) = %p", &s_fileStreamGlob.frameReads) )
        __debugbreak();
      _InterlockedExchangeAdd64(&s_fileStreamGlob.frameReads, 1ui64);
      if ( ((unsigned __int8)&s_fileStreamGlob.frameReadBytes & 7) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 86, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int64 ) ) ) )", "( addend ) = %p", &s_fileStreamGlob.frameReadBytes) )
        __debugbreak();
      _InterlockedExchangeAdd64(&s_fileStreamGlob.frameReadBytes, numBytesRead);
      FileStream_RecordReadEnd((const FileStreamRequest *)pStreamInfo);
      *((_DWORD *)pStreamInfo + 16) = (numBytesRead == *((_QWORD *)pStreamInfo + 2)) + 7;
    }
  }
  Sys_WakeFileStreamAsync();
  ScopedCriticalSection::~ScopedCriticalSection(&v9);
  Sys_ProfEndNamedEvent();
}

/*
==============
FileStream_AsyncThread
==============
*/
void __noreturn FileStream_AsyncThread(unsigned int threadContext)
{
  while ( 1 )
  {
    Sys_FileStreamAsyncSleep();
    FileStream_AsyncUpdate();
  }
}

/*
==============
FileStream_AsyncUpdate
==============
*/
void FileStream_AsyncUpdate()
{
  int v0; 
  FileStreamRequest *first; 
  FileStreamFileHandle *v2; 
  int v3; 
  const dvar_t *v4; 
  volatile int activeAsyncReads; 
  const dvar_t *v6; 
  int v7; 
  int v8; 
  int v9; 
  const volatile int *v10; 
  __int64 v11; 
  const char *v12; 
  __int64 v13; 
  volatile signed __int32 *v14; 
  struct FileReadContext *v15; 
  FileStreamRequest *nextInQueue; 
  unsigned __int64 *p_bytes; 
  int numCallbacks; 
  ScopedCriticalSection v19; 
  __int64 v20; 
  FileStreamCallbackInfo callbacks; 

  v20 = -2i64;
  Sys_ProfBeginNamedEvent(0xFF808080, "FileStream_AsyncUpdate");
  v0 = 0;
  numCallbacks = 0;
  FileStream_ProcessOpenRequests(&callbacks, &numCallbacks);
  if ( s_fileStreamGlob.asyncQueue.size )
  {
    ScopedCriticalSection::ScopedCriticalSection(&v19, CRITSECT_IO_SCHEDULER, SCOPED_CRITSECT_NORMAL);
    first = s_fileStreamGlob.asyncQueue.first;
    if ( s_fileStreamGlob.asyncQueue.first )
    {
      do
      {
        if ( *(_DWORD *)first->id == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\file\\file_stream.cpp", 1559, ASSERT_TYPE_ASSERT, "(stream->id != FileStreamRequestID::INVALID)", (const char *)&queryFormat, "stream->id != FileStreamRequestID::INVALID") )
          __debugbreak();
        v2 = &s_fileStreamGlob.fileIDs[*(int *)first->file];
        if ( v2->shouldOpen )
        {
          first = first->nextInQueue;
        }
        else
        {
          v3 = *(_DWORD *)first->status;
          if ( v3 == 1 )
          {
            if ( v2->error )
            {
              *(_DWORD *)first->status = 6;
              first = first->nextInQueue;
            }
            else
            {
              v4 = DVARBOOL_fileStream_enforceRequestPrioritization;
              if ( !DVARBOOL_fileStream_enforceRequestPrioritization && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "fileStream_enforceRequestPrioritization") )
                __debugbreak();
              Dvar_CheckFrontendServerThread(v4);
              if ( !v4->current.enabled )
                goto LABEL_66;
              if ( ((unsigned __int8)&s_fileStreamGlob.activeAsyncReads & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 141, ASSERT_TYPE_ASSERT, "( ( IsAligned( addr, sizeof( volatile_int32 ) ) ) )", "( addr ) = %p", &s_fileStreamGlob.activeAsyncReads) )
                __debugbreak();
              activeAsyncReads = s_fileStreamGlob.activeAsyncReads;
              v6 = DVARINT_fileStream_maxConcurrentReadRequests;
              if ( !DVARINT_fileStream_maxConcurrentReadRequests && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "fileStream_maxConcurrentReadRequests") )
                __debugbreak();
              Dvar_CheckFrontendServerThread(v6);
              if ( activeAsyncReads < v6->current.integer )
              {
                if ( activeAsyncReads <= 1 )
                  goto LABEL_66;
                v7 = first->endDeadline - first->estMsToFinish;
                if ( v7 < Sys_Milliseconds() )
                  goto LABEL_66;
                v8 = 0;
                v9 = *(_DWORD *)first->priority + 1;
                if ( v9 < 3 )
                {
                  v10 = &s_fileStreamGlob.activeAsyncReadsPerPriority[v9];
                  v11 = (unsigned int)(3 - v9);
                  do
                  {
                    v8 += Sys_InterlockedLoad(v10++);
                    --v11;
                  }
                  while ( v11 );
                }
                if ( !v8 )
                {
LABEL_66:
                  if ( !v2->h && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\file\\file_stream.cpp", 1578, ASSERT_TYPE_ASSERT, "(fh->h)", (const char *)&queryFormat, "fh->h") )
                    __debugbreak();
                  v12 = j_va("FileStream_ReadAsync: %s (%lu)", v2->name, first->start_offset);
                  Sys_ProfBeginNamedEvent(0xFF808080, v12);
                  *(_DWORD *)first->status = 2;
                  Sys_ProfBeginNamedEvent(0xFFFFFFFF, "leave io scheduler critsect");
                  ScopedCriticalSection::LeaveCritSect(&v19);
                  Sys_ProfEndNamedEvent();
                  FileStream_RecordReadStart(first);
                  if ( ((unsigned __int8)&s_fileStreamGlob.activeAsyncReads & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &s_fileStreamGlob.activeAsyncReads) )
                    __debugbreak();
                  if ( _InterlockedIncrement(&s_fileStreamGlob.activeAsyncReads) > 32 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\file\\file_stream.cpp", 1454, ASSERT_TYPE_ASSERT, "((Sys_InterlockedIncrement( &s_fileStreamGlob.activeAsyncReads )) <= (( (1 &&(((1 && 1))?1:0)&& 1) ? 32 : 256 )))", (const char *)&queryFormat, "Sys_InterlockedIncrement( &s_fileStreamGlob.activeAsyncReads ) <= MAX_CONCURRENT_READS") )
                    __debugbreak();
                  v13 = *(int *)first->priority;
                  v14 = &s_fileStreamGlob.activeAsyncReadsPerPriority[v13];
                  if ( ((unsigned __int8)v14 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &s_fileStreamGlob.activeAsyncReadsPerPriority[v13]) )
                    __debugbreak();
                  if ( _InterlockedIncrement(v14) > 32 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\file\\file_stream.cpp", 1455, ASSERT_TYPE_ASSERT, "((Sys_InterlockedIncrement( &s_fileStreamGlob.activeAsyncReadsPerPriority[static_cast< int >( stream->priority )] )) <= (( (1 &&(((1 && 1))?1:0)&& 1) ? 32 : 256 )))", (const char *)&queryFormat, "Sys_InterlockedIncrement( &s_fileStreamGlob.activeAsyncReadsPerPriority[static_cast< int >( stream->priority )] ) <= MAX_CONCURRENT_READS") )
                    __debugbreak();
                  v15 = g_fileSystem->StartRead(g_fileSystem, v2->h, first->start_offset, first->buffer_size, first->destination, FileStream_AsyncReadCallback, first, *(_DWORD *)first->priority, first->endDeadline);
                  first->asyncCtrl = v15;
                  Sys_ProfBeginNamedEvent(0xFFFFFFFF, "leave io scheduler critsect");
                  ScopedCriticalSection::EnterCritSect(&v19);
                  Sys_ProfEndNamedEvent();
                  if ( !v15 )
                    *(_DWORD *)first->status = 6;
                  Sys_ProfEndNamedEvent();
                }
              }
              first = first->nextInQueue;
            }
          }
          else
          {
            nextInQueue = first->nextInQueue;
            if ( v3 != 2 )
              FileStream_RemoveFromQueue(first, (FileStreamStatus)v3, &callbacks, &numCallbacks);
            first = nextInQueue;
          }
        }
      }
      while ( first && s_fileStreamGlob.asyncQueue.size && first != s_fileStreamGlob.asyncQueue.first );
    }
    ScopedCriticalSection::~ScopedCriticalSection(&v19);
  }
  if ( numCallbacks > 0 )
  {
    p_bytes = &callbacks.bytes;
    do
    {
      Sys_ProfBeginNamedEvent(0xFF808080, "file stream async callback");
      ((void (__fastcall *)(_QWORD, _QWORD, unsigned __int64, unsigned __int64))*(p_bytes - 2))(*((unsigned int *)p_bytes - 2), *((unsigned int *)p_bytes - 1), *p_bytes, p_bytes[1]);
      if ( ((unsigned __int64)&s_fileStreamGlob.callbacksPendingCount & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &s_fileStreamGlob.callbacksPendingCount) )
        __debugbreak();
      if ( _InterlockedDecrement(&s_fileStreamGlob.callbacksPendingCount) < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\file\\file_stream.cpp", 543, ASSERT_TYPE_ASSERT, "(s_fileStreamGlob.callbacksPendingCount >= 0)", (const char *)&queryFormat, "s_fileStreamGlob.callbacksPendingCount >= 0") )
        __debugbreak();
      Sys_ProfEndNamedEvent();
      ++v0;
      p_bytes += 4;
    }
    while ( v0 < numCallbacks );
  }
  Sys_ProfEndNamedEvent();
}

/*
==============
FileStream_CallbackDone
==============
*/
char FileStream_CallbackDone()
{
  int v0; 
  char result; 

  if ( ((unsigned __int8)&s_fileStreamGlob.callbacksPendingCount & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &s_fileStreamGlob.callbacksPendingCount) )
    __debugbreak();
  v0 = _InterlockedDecrement(&s_fileStreamGlob.callbacksPendingCount);
  result = s_fileStreamGlob.callbacksPendingCount;
  if ( v0 < 0 )
  {
    result = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\file\\file_stream.cpp", 543, ASSERT_TYPE_ASSERT, "(s_fileStreamGlob.callbacksPendingCount >= 0)", (const char *)&queryFormat, "s_fileStreamGlob.callbacksPendingCount >= 0");
    if ( result )
      __debugbreak();
  }
  return result;
}

/*
==============
FileStream_CloseAllFilesAtPath
==============
*/
__int64 FileStream_CloseAllFilesAtPath(const char *path)
{
  unsigned __int8 v2; 
  int v3; 
  FileStreamGlob *v4; 
  signed __int64 v5; 
  __int64 v6; 
  __int64 v7; 
  FileStreamGlob *v8; 
  int v9; 
  int v10; 
  int v12; 
  int v13; 
  __int64 v15; 
  __int64 v16; 
  ScopedCriticalSection v17; 

  if ( (!path || !*path) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\file\\file_stream.cpp", 840, ASSERT_TYPE_ASSERT, "(path && path[0])", (const char *)&queryFormat, "path && path[0]") )
    __debugbreak();
  v2 = 0;
  v3 = 0;
  v4 = &s_fileStreamGlob;
  v5 = path - (const char *)&s_fileStreamGlob;
  do
  {
    if ( v4->fileIDs[0].inUse )
    {
      v6 = -1i64;
      do
        ++v6;
      while ( path[v6] );
      v7 = (unsigned int)v6;
      v8 = v4;
      if ( !path && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 212, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
        __debugbreak();
      do
      {
        v9 = (unsigned __int8)v8->fileIDs[0].name[v5];
        v10 = (unsigned __int8)v8->fileIDs[0].name[0];
        v8 = (FileStreamGlob *)((char *)v8 + 1);
        if ( !v7-- )
          break;
        if ( v9 != v10 )
        {
          v12 = v9 + 32;
          if ( (unsigned int)(v9 - 65) > 0x19 )
            v12 = v9;
          v9 = v12;
          v13 = v10 + 32;
          if ( (unsigned int)(v10 - 65) > 0x19 )
            v13 = v10;
          if ( v9 != v13 )
            goto LABEL_27;
        }
      }
      while ( v9 );
      if ( (unsigned int)v3 >= 0x100 )
      {
        LODWORD(v16) = 256;
        LODWORD(v15) = v3;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\file\\file_stream.cpp", 819, ASSERT_TYPE_ASSERT, "(unsigned)( handle ) < (unsigned)( MAX_FILE_IDS )", "handle doesn't index MAX_FILE_IDS\n\t%i not in [0, %i)", v15, v16) )
          __debugbreak();
      }
      ScopedCriticalSection::ScopedCriticalSection(&v17, CRITSECT_FILE_ID_ARRAY, SCOPED_CRITSECT_NORMAL);
      if ( v4->fileIDs[0].shouldOpen )
      {
        FileStream_DoneWithFileID((FileStreamFileID)v3);
      }
      else
      {
        v4->fileIDs[0].shouldClose = 1;
        Sys_WakeFileStream();
      }
      ScopedCriticalSection::~ScopedCriticalSection(&v17);
      v2 = 1;
    }
LABEL_27:
    ++v3;
    v4 = (FileStreamGlob *)((char *)v4 + 320);
    v5 -= 320i64;
  }
  while ( v3 < 256 );
  return v2;
}

/*
==============
FileStream_CloseFile
==============
*/
void FileStream_CloseFile(unsigned int handle)
{
  __int64 v1; 
  int v3; 
  ScopedCriticalSection v4; 

  v1 = (int)handle;
  if ( handle >= 0x100 )
  {
    v3 = 256;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\file\\file_stream.cpp", 819, ASSERT_TYPE_ASSERT, "(unsigned)( handle ) < (unsigned)( MAX_FILE_IDS )", "handle doesn't index MAX_FILE_IDS\n\t%i not in [0, %i)", handle, v3) )
      __debugbreak();
  }
  ScopedCriticalSection::ScopedCriticalSection(&v4, CRITSECT_FILE_ID_ARRAY, SCOPED_CRITSECT_NORMAL);
  if ( s_fileStreamGlob.nextFreeFileID[320 * v1 - 81639] )
  {
    FileStream_DoneWithFileID((FileStreamFileID)v1);
  }
  else
  {
    s_fileStreamGlob.nextFreeFileID[320 * v1 - 81638] = 1;
    Sys_WakeFileStream();
  }
  ScopedCriticalSection::~ScopedCriticalSection(&v4);
}

/*
==============
FileStream_DoneWithFileID
==============
*/
void FileStream_DoneWithFileID(int id)
{
  __int64 v1; 
  FileStreamFileHandle *v2; 
  __int64 v3; 
  int v4; 

  v1 = id;
  if ( !Sys_InCriticalSection(CRITSECT_FILE_ID_ARRAY) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\file\\file_stream.cpp", 330, ASSERT_TYPE_ASSERT, "(Sys_InCriticalSection( CRITSECT_FILE_ID_ARRAY ))", (const char *)&queryFormat, "Sys_InCriticalSection( CRITSECT_FILE_ID_ARRAY )") )
    __debugbreak();
  if ( (unsigned int)v1 >= 0x100 )
  {
    v4 = 256;
    LODWORD(v3) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\file\\file_stream.cpp", 331, ASSERT_TYPE_ASSERT, "(unsigned)( id ) < (unsigned)( MAX_FILE_IDS )", "id doesn't index MAX_FILE_IDS\n\t%i not in [0, %i)", v3, v4) )
      __debugbreak();
  }
  v2 = &s_fileStreamGlob.fileIDs[v1];
  *(_DWORD *)&v2->inUse = 0;
  v2->h = NULL;
  v2->name[0] = 0;
  v2->readOffset = 0i64;
  v2->easyOffset = 0i64;
  v2->fileSize = -1i64;
}

/*
==============
FileStream_Easy_FileSize
==============
*/
__int64 FileStream_Easy_FileSize(unsigned int handle)
{
  __int64 v1; 
  int v4; 

  v1 = (int)handle;
  if ( handle >= 0x100 )
  {
    v4 = 256;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\file\\file_stream.cpp", 1859, ASSERT_TYPE_ASSERT, "(unsigned)( handle ) < (unsigned)( MAX_FILE_IDS )", "handle doesn't index MAX_FILE_IDS\n\t%i not in [0, %i)", handle, v4) )
      __debugbreak();
  }
  return *(_QWORD *)&s_fileStreamGlob.nextFreeFileID[320 * v1 - 81616];
}

/*
==============
FileStream_Easy_Read
==============
*/
__int64 FileStream_Easy_Read(int handle, void *buf, __int64 bufferSize, __int64 *bytesRead, FileStreamTrackType fileStreamTrack)
{
  __int64 v5; 
  __int64 v9; 
  __int64 v10; 
  __int64 result; 
  __int64 priority; 
  void (__fastcall *callback)(FileStreamRequestID, FileStreamStatus, __int64, void *); 
  FileStreamRequestID outId[4]; 
  char v15[4]; 
  int v16; 
  __int64 v17; 

  v5 = 0i64;
  v16 = 0;
  v15[0] = 0;
  v17 = 0i64;
  v9 = handle;
  if ( bufferSize )
  {
    if ( bufferSize <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\file\\file_stream.cpp", 1772, ASSERT_TYPE_ASSERT, "( bufferSize ) > ( 0 )", "%s > %s\n\t%lli, %lli", "bufferSize", "0", bufferSize, 0i64) )
      __debugbreak();
    if ( (unsigned int)v9 >= 0x100 )
    {
      LODWORD(callback) = 256;
      LODWORD(priority) = v9;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\file\\file_stream.cpp", 1774, ASSERT_TYPE_ASSERT, "(unsigned)( handle ) < (unsigned)( ( sizeof( *array_counter( s_fileStreamGlob.fileIDs ) ) + 0 ) )", "handle doesn't index ARRAY_COUNT( s_fileStreamGlob.fileIDs )\n\t%i not in [0, %i)", priority, callback) )
        __debugbreak();
    }
    *(_DWORD *)outId = 0;
    v10 = *(_QWORD *)&s_fileStreamGlob.nextFreeFileID[320 * v9 - 81624];
    if ( (s_fileStreamGlob.nextFreeFileID[320 * v9 - 81636] & 0x10) != 0 )
    {
      if ( (v10 & 0xFFF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\file\\file_stream.cpp", 1784, ASSERT_TYPE_ASSERT, "(IsAligned( offset, 4096 ))", (const char *)&queryFormat, "IsAligned( offset, FILE_READ_ALIGNMENT )") )
        __debugbreak();
      if ( (bufferSize & 0xFFF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\file\\file_stream.cpp", 1785, ASSERT_TYPE_ASSERT, "(IsAligned( bufferSize, 4096 ))", (const char *)&queryFormat, "IsAligned( bufferSize, FILE_READ_ALIGNMENT )") )
        __debugbreak();
      if ( ((unsigned __int16)buf & 0xFFF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\file\\file_stream.cpp", 1786, ASSERT_TYPE_ASSERT, "(IsAligned( buf, 4096 ))", (const char *)&queryFormat, "IsAligned( buf, FILE_READ_ALIGNMENT )") )
        __debugbreak();
      if ( XB3XMem_IsInAuxMem(buf) )
        Sys_Error((const ObfuscateErrorText)&stru_143D69550);
    }
    while ( !FileStream_AddRequest((FileStreamFileID)v9, v10, bufferSize, buf, 0, (FileStreamPriority)2, FileStream_InternalSyncCallback, v15, outId, fileStreamTrack) )
    {
      if ( *(_DWORD *)outId != -1 )
        goto LABEL_26;
    }
    while ( !v15[0] )
      Sys_Sleep(0);
    v5 = v17;
LABEL_26:
    *(_QWORD *)&s_fileStreamGlob.nextFreeFileID[320 * v9 - 81624] += v5;
  }
  else if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\file\\file_stream.cpp", 1832, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Zero-sized file read, this is likely unintentional and should be fixed.") )
  {
    __debugbreak();
  }
  result = v5;
  if ( bytesRead )
    *bytesRead = v5;
  return result;
}

/*
==============
FileStream_Easy_SeekSet
==============
*/
void FileStream_Easy_SeekSet(unsigned int handle, __int64 offset)
{
  __int64 v2; 
  int v5; 

  v2 = (int)handle;
  if ( handle >= 0x100 )
  {
    v5 = 256;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\file\\file_stream.cpp", 1845, ASSERT_TYPE_ASSERT, "(unsigned)( handle ) < (unsigned)( MAX_FILE_IDS )", "handle doesn't index MAX_FILE_IDS\n\t%i not in [0, %i)", handle, v5) )
      __debugbreak();
  }
  *(_QWORD *)&s_fileStreamGlob.nextFreeFileID[320 * v2 - 81624] = offset;
}

/*
==============
FileStream_Easy_Tell
==============
*/
__int64 FileStream_Easy_Tell(unsigned int handle)
{
  __int64 v1; 
  int v4; 

  v1 = (int)handle;
  if ( handle >= 0x100 )
  {
    v4 = 256;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\file\\file_stream.cpp", 1852, ASSERT_TYPE_ASSERT, "(unsigned)( handle ) < (unsigned)( MAX_FILE_IDS )", "handle doesn't index MAX_FILE_IDS\n\t%i not in [0, %i)", handle, v4) )
      __debugbreak();
  }
  return *(_QWORD *)&s_fileStreamGlob.nextFreeFileID[320 * v1 - 81624];
}

/*
==============
FileStream_Exists
==============
*/
__int64 FileStream_Exists(Sys_Folder folder, const char *name)
{
  return ((__int64 (__fastcall *)(DB_FileSysInterface *, _QWORD, const char *))g_fileSystem->Exists)(g_fileSystem, (unsigned int)folder, name);
}

/*
==============
FileStream_FileIsError
==============
*/
char FileStream_FileIsError(unsigned int handle)
{
  if ( handle > 0xFF )
    return 1;
  else
    return s_fileStreamGlob.nextFreeFileID[320 * handle - 81637];
}

/*
==============
FileStream_FileIsOpen
==============
*/
bool FileStream_FileIsOpen(int handle)
{
  __int64 v1; 
  __int64 v2; 
  __int64 v4; 
  int v5; 

  v1 = handle;
  if ( Sys_IsFileStreamThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\file\\file_stream.cpp", 793, ASSERT_TYPE_ASSERT, "(!Sys_IsFileStreamThread())", (const char *)&queryFormat, "!Sys_IsFileStreamThread()") )
    __debugbreak();
  if ( (unsigned int)v1 >= 0x100 )
  {
    v5 = 256;
    LODWORD(v4) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\file\\file_stream.cpp", 794, ASSERT_TYPE_ASSERT, "(unsigned)( handle ) < (unsigned)( MAX_FILE_IDS )", "handle doesn't index MAX_FILE_IDS\n\t%i not in [0, %i)", v4, v5) )
      __debugbreak();
  }
  v2 = v1;
  return s_fileStreamGlob.nextFreeFileID[320 * v1 - 81640] && !s_fileStreamGlob.fileIDs[v2].shouldOpen && !s_fileStreamGlob.fileIDs[v2].shouldClose;
}

/*
==============
FileStream_FreeRequest
==============
*/
char FileStream_FreeRequest(int id, bool freeEvenIfLoadInProgress)
{
  FileStreamRequest *v4; 
  __int64 v5; 
  int v6; 
  int v8; 
  ScopedCriticalSection v9; 
  FileStreamCallbackInfo callbacks; 
  int numCallbacks; 

  numCallbacks = 0;
  if ( id == -1 )
    return 0;
  ScopedCriticalSection::ScopedCriticalSection(&v9, CRITSECT_IO_SCHEDULER, SCOPED_CRITSECT_NORMAL);
  v4 = &s_fileStreamGlob.requests[id & 0x7F];
  v5 = *(unsigned int *)v4->id;
  if ( (_DWORD)v5 != id || (v6 = *(_DWORD *)v4->status, v6 == 4) )
  {
LABEL_7:
    ScopedCriticalSection::~ScopedCriticalSection(&v9);
    return 0;
  }
  if ( !freeEvenIfLoadInProgress && v6 == 2 )
  {
    Com_Printf(10, "SCHEDULER\t%d nocancel %s (in progress)\n", v5, s_fileStreamGlob.fileIDs[*(int *)v4->file].name);
    goto LABEL_7;
  }
  FileStream_RemoveFromQueue(&s_fileStreamGlob.requests[id & 0x7F], INT_VALUE, &callbacks, &numCallbacks);
  ScopedCriticalSection::~ScopedCriticalSection(&v9);
  v8 = numCallbacks;
  if ( numCallbacks )
  {
    if ( !v4->callbackOnly )
      callbacks.callback(*(unsigned int *)callbacks.id, *(unsigned int *)callbacks.reason, callbacks.bytes, callbacks.user);
    if ( v8 != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\file\\file_stream.cpp", 1045, ASSERT_TYPE_ASSERT, "(numCallbacks == 1)", (const char *)&queryFormat, "numCallbacks == 1", -2i64) )
      __debugbreak();
    FileStream_CallbackDone();
  }
  return 1;
}

/*
==============
FileStream_GetFileName
==============
*/
char *FileStream_GetFileName(unsigned int fileID)
{
  __int64 v1; 
  int v4; 

  v1 = (int)fileID;
  if ( fileID >= 0x100 )
  {
    v4 = 256;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\file\\file_stream.cpp", 1401, ASSERT_TYPE_ASSERT, "(unsigned)( fileID ) < (unsigned)( MAX_FILE_IDS )", "fileID doesn't index MAX_FILE_IDS\n\t%i not in [0, %i)", fileID, v4) )
      __debugbreak();
  }
  return (char *)&s_fileStreamGlob + 320 * v1;
}

/*
==============
FileStream_GetNextFileID
==============
*/
__int64 FileStream_GetNextFileID()
{
  int v0; 
  unsigned int v1; 
  int v2; 
  __int64 v3; 
  FileStreamGlob *v4; 
  bool *p_inUse; 
  int i; 
  __int64 result; 

  if ( !Sys_InCriticalSection(CRITSECT_FILE_ID_ARRAY) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\file\\file_stream.cpp", 287, ASSERT_TYPE_ASSERT, "(Sys_InCriticalSection( CRITSECT_FILE_ID_ARRAY ))", (const char *)&queryFormat, "Sys_InCriticalSection( CRITSECT_FILE_ID_ARRAY )") )
    __debugbreak();
  v0 = *(_DWORD *)s_fileStreamGlob.nextFreeFileID;
  v1 = *(_DWORD *)s_fileStreamGlob.nextFreeFileID;
  v2 = 1;
  v3 = *(int *)s_fileStreamGlob.nextFreeFileID;
  while ( s_fileStreamGlob.nextFreeFileID[320 * ((*(_DWORD *)s_fileStreamGlob.nextFreeFileID + v2) % 256) - 81640] )
  {
    if ( !s_fileStreamGlob.nextFreeFileID[320 * ((*(_DWORD *)s_fileStreamGlob.nextFreeFileID + v2 + 1) % 256) - 81640] )
    {
      ++v2;
      break;
    }
    if ( !s_fileStreamGlob.nextFreeFileID[320 * ((*(_DWORD *)s_fileStreamGlob.nextFreeFileID + v2 + 2) % 256) - 81640] )
    {
      v2 += 2;
      break;
    }
    if ( !s_fileStreamGlob.nextFreeFileID[320 * ((*(_DWORD *)s_fileStreamGlob.nextFreeFileID + v2 + 3) % 256) - 81640] )
    {
      v2 += 3;
      break;
    }
    v2 += 4;
    if ( v2 > 256 )
      break;
  }
  if ( v2 == 256 )
  {
    v4 = &s_fileStreamGlob;
    p_inUse = &s_fileStreamGlob.fileIDs[0].inUse;
    for ( i = 0; i < 256; ++i )
    {
      if ( *p_inUse )
        Com_PrintError(10, "%d - %s\n", (unsigned int)i, (const char *)v4);
      v4 = (FileStreamGlob *)((char *)v4 + 320);
      p_inUse += 320;
    }
    Sys_Error((const ObfuscateErrorText)&stru_143D68760, 256i64);
    v0 = *(_DWORD *)s_fileStreamGlob.nextFreeFileID;
  }
  *(_DWORD *)s_fileStreamGlob.nextFreeFileID = (v0 + v2) % 256;
  result = v1;
  *(_WORD *)&s_fileStreamGlob.fileIDs[v3].shouldOpen = 0;
  s_fileStreamGlob.fileIDs[v3].error = 0;
  s_fileStreamGlob.fileIDs[v3].h = NULL;
  s_fileStreamGlob.fileIDs[v3].readOffset = 0i64;
  s_fileStreamGlob.fileIDs[v3].easyOffset = 0i64;
  s_fileStreamGlob.fileIDs[v3].fileSize = -1i64;
  s_fileStreamGlob.fileIDs[v3].inUse = 1;
  return result;
}

/*
==============
FileStream_GetReadHistory
==============
*/
FileStreamReadHistory *FileStream_GetReadHistory()
{
  return &s_fileStreamGlob.readHistory;
}

/*
==============
FileStream_GetStatus
==============
*/
__int64 FileStream_GetStatus(int id)
{
  __int64 v1; 
  __int64 result; 

  v1 = id & 0x7F;
  if ( *(_DWORD *)s_fileStreamGlob.requests[v1].id != id )
    return 0i64;
  result = *(unsigned int *)s_fileStreamGlob.requests[v1].status;
  if ( (_DWORD)result == 3 )
    return 4i64;
  return result;
}

/*
==============
FileStream_GetStreamPerfDataAndClearAfterMinTime
==============
*/
__int64 FileStream_GetStreamPerfDataAndClearAfterMinTime(float *readsPerSec, float *mBytesPerSec)
{
  int v4; 
  const dvar_t *v5; 
  __int32 v6; 
  float frameCachedReadsPerSec; 
  int v8; 
  __int32 v9; 
  __int64 v10; 
  __int64 v11; 
  float v12; 
  float v13; 
  float v14; 
  float v15; 
  __int64 result; 

  v4 = Sys_Milliseconds();
  v5 = DCONST_DVARINT_fileStream_minPerfDataClearTimeMS;
  v6 = v4;
  if ( !DCONST_DVARINT_fileStream_minPerfDataClearTimeMS && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "fileStream_minPerfDataClearTimeMS") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v5);
  if ( v6 - s_fileStreamGlob.frameStartTime >= v5->current.integer )
  {
    if ( ((unsigned __int8)&s_fileStreamGlob.frameStartTime & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 93, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &s_fileStreamGlob.frameStartTime) )
      __debugbreak();
    v9 = _InterlockedExchange(&s_fileStreamGlob.frameStartTime, v6);
    if ( ((unsigned __int8)&s_fileStreamGlob.frameReads & 7) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 100, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int64 ) ) ) )", "( target ) = %p", &s_fileStreamGlob.frameReads) )
      __debugbreak();
    v10 = _InterlockedExchange64(&s_fileStreamGlob.frameReads, 0i64);
    if ( ((unsigned __int8)&s_fileStreamGlob.frameReadBytes & 7) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 100, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int64 ) ) ) )", "( target ) = %p", &s_fileStreamGlob.frameReadBytes) )
      __debugbreak();
    v11 = _InterlockedExchange64(&s_fileStreamGlob.frameReadBytes, 0i64);
    v8 = v6 - v9;
    v12 = (float)v8 * 0.001;
    if ( v12 <= 0.0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\file\\file_stream.cpp", 1371, ASSERT_TYPE_ASSERT, "(frameTime > 0)", (const char *)&queryFormat, "frameTime > 0") )
      __debugbreak();
    v13 = 1.0 / v12;
    v14 = (float)v10;
    frameCachedReadsPerSec = v14 * v13;
    v15 = (float)v11;
    s_fileStreamGlob.frameCachedMBytesPerSec = (float)(v15 * 0.00000095367432) * v13;
    s_fileStreamGlob.frameCachedReadsPerSec = frameCachedReadsPerSec;
  }
  else
  {
    frameCachedReadsPerSec = s_fileStreamGlob.frameCachedReadsPerSec;
    v8 = -1;
  }
  if ( readsPerSec )
    *readsPerSec = frameCachedReadsPerSec;
  result = (unsigned int)v8;
  if ( mBytesPerSec )
    *mBytesPerSec = s_fileStreamGlob.frameCachedMBytesPerSec;
  return result;
}

/*
==============
FileStream_Init
==============
*/
__int64 FileStream_Init()
{
  unsigned __int8 v0; 

  Sys_ProfBeginNamedEvent(0xFF808080, "FileStream_Init");
  if ( s_fileStreamGlob.threadsSpawned || Sys_SpawnFileStreamThread(FileStream_Thread) && Sys_SpawnFileStreamAsyncThread((void (__fastcall *)(unsigned int))FileStream_AsyncThread) )
  {
    s_fileStreamGlob.threadsSpawned = 1;
    s_fileStreamGlob.frameReads = 0i64;
    s_fileStreamGlob.frameReadBytes = 0i64;
    s_fileStreamGlob.frameStartTime = Sys_Milliseconds();
    s_fileStreamGlob.frameCachedReadsPerSec = 0.0;
    s_fileStreamGlob.frameCachedMBytesPerSec = 0.0;
    FileStream_RegisterDvars();
    v0 = 1;
  }
  else
  {
    v0 = 0;
  }
  Sys_ProfEndNamedEvent();
  return v0;
}

/*
==============
FileStream_InternalSyncCallback
==============
*/
void FileStream_InternalSyncCallback(FileStreamRequestID id, int result, __int64 numBytesRead, void *user)
{
  *((_DWORD *)user + 1) = result;
  *((_QWORD *)user + 1) = numBytesRead;
  *(_BYTE *)user = 1;
}

/*
==============
FileStream_IsCancelledReadInProgress
==============
*/
__int64 FileStream_IsCancelledReadInProgress()
{
  unsigned __int8 v0; 
  FileStreamRequest *first; 
  ScopedCriticalSection v3; 

  ScopedCriticalSection::ScopedCriticalSection(&v3, CRITSECT_IO_SCHEDULER, SCOPED_CRITSECT_NORMAL);
  if ( s_fileStreamGlob.syncQueue.first && *(_DWORD *)s_fileStreamGlob.syncQueue.first->status == 4 )
  {
    Sys_WakeFileStream();
    v0 = 1;
  }
  else
  {
    if ( s_fileStreamGlob.asyncQueue.size )
    {
      first = s_fileStreamGlob.asyncQueue.first;
      while ( *(_DWORD *)first->status != 3 )
      {
        first = first->nextInQueue;
        if ( first == s_fileStreamGlob.asyncQueue.first )
          goto LABEL_8;
      }
    }
    else
    {
LABEL_8:
      if ( s_fileStreamGlob.callbacksPendingCount <= 0 )
      {
        v0 = 0;
        goto LABEL_11;
      }
    }
    v0 = 1;
  }
LABEL_11:
  ScopedCriticalSection::~ScopedCriticalSection(&v3);
  return v0;
}

/*
==============
FileStream_IsFileAsync
==============
*/
bool FileStream_IsFileAsync(unsigned int file)
{
  __int64 v1; 
  int v4; 

  v1 = (int)file;
  if ( file >= 0x100 )
  {
    v4 = 256;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\file\\file_stream.cpp", 405, ASSERT_TYPE_ASSERT, "(unsigned)( file ) < (unsigned)( MAX_FILE_IDS )", "file doesn't index MAX_FILE_IDS\n\t%i not in [0, %i)", file, v4) )
      __debugbreak();
  }
  return (*(_DWORD *)&s_fileStreamGlob.nextFreeFileID[320 * v1 - 81636] & 8) != 0;
}

/*
==============
FileStream_LoadFileSynchronously
==============
*/
bool FileStream_LoadFileSynchronously(FileStreamRequest *stream)
{
  __int64 v1; 
  unsigned __int64 buffer_size; 
  __int64 v4; 
  int v5; 
  bool result; 
  unsigned __int64 v7; 
  __int64 start_offset; 
  unsigned __int8 *v9; 
  int v10; 
  int endDeadline; 
  int v12; 
  unsigned __int8 *destination; 
  struct DB_IFileSysFile *h; 
  unsigned __int64 bytes_read; 
  unsigned __int8 *buffer; 
  int buffera; 
  int v18; 
  int numBytesRead; 
  unsigned __int64 v20; 

  v1 = *(int *)stream->file;
  if ( (_DWORD)v1 == -16777217 )
    return 0;
  buffer_size = stream->buffer_size;
  v4 = v1;
  v5 = Sys_Milliseconds();
  v18 = v5;
  if ( stream->callbackOnly )
  {
    stream->genericCallback(stream->estMsToFinish, stream->callbackUser, (FileStreamRequestID)*(unsigned int *)stream->id);
    result = 1;
    stream->genericCallback = NULL;
    return result;
  }
  v7 = 0i64;
  if ( !buffer_size )
    goto LABEL_25;
  if ( stream->bytes_read )
  {
    buffera = stream->bytes_read;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\file\\file_stream.cpp", 1108, ASSERT_TYPE_ASSERT, "( ( stream->bytes_read == 0 ) )", "( stream->bytes_read ) = %i", buffera) )
      __debugbreak();
  }
  start_offset = stream->start_offset;
  if ( !s_fileStreamGlob.fileIDs[v4].dcacheFileID )
  {
    FileStream_RecordReadStart(stream);
    if ( s_fileStreamGlob.fileIDs[v4].readOffset != start_offset )
    {
      g_fileSystem->Seek(g_fileSystem, s_fileStreamGlob.fileIDs[v4].h, start_offset);
      s_fileStreamGlob.fileIDs[v4].readOffset = start_offset;
    }
    endDeadline = stream->endDeadline;
    v12 = *(_DWORD *)stream->priority;
    destination = stream->destination;
    if ( !Sys_IsFileStreamThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\file\\file_stream.cpp", 1890, ASSERT_TYPE_ASSERT, "(Sys_IsFileStreamThread())", (const char *)&queryFormat, "Sys_IsFileStreamThread()") )
      __debugbreak();
    h = s_fileStreamGlob.fileIDs[v4].h;
    if ( h && g_fileSystem->ReadBlocking(g_fileSystem, h, start_offset, buffer_size, destination, &v20, (FileStreamPriority)v12, endDeadline) == FILESYSRESULT_SUCCESS )
    {
      v7 = v20;
      s_fileStreamGlob.fileIDs[v4].readOffset += v20;
      FileStream_RecordReadEnd(stream);
      goto LABEL_24;
    }
    return 0;
  }
  if ( s_fileStreamGlob.fileIDs[v4].readOffset != start_offset )
    s_fileStreamGlob.fileIDs[v4].readOffset = start_offset;
  v9 = stream->destination;
  v10 = truncate_cast<int,unsigned __int64>(buffer_size);
  if ( (unsigned __int64)(start_offset + 0x80000000i64) > 0xFFFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "int __cdecl truncate_cast_impl<int,__int64>(__int64)", "signed", (int)start_offset, "signed", start_offset) )
    __debugbreak();
  if ( !DCache_ReadFromCacheByOffset(DCACHE_TYPE_PERSISTENT, s_fileStreamGlob.fileIDs[v4].dcacheFileID, DCACHE_LOC_PATCH_MAN, start_offset, v10, v9, &numBytesRead, 1) )
    return 0;
  v7 = numBytesRead;
  s_fileStreamGlob.fileIDs[v4].readOffset += numBytesRead;
LABEL_24:
  v5 = v18;
LABEL_25:
  bytes_read = stream->bytes_read;
  stream->estMsToFinish = 0;
  if ( bytes_read )
  {
    LODWORD(buffer) = bytes_read;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\file\\file_stream.cpp", 1160, ASSERT_TYPE_ASSERT, "( ( stream->bytes_read == 0 ) )", "( stream->bytes_read ) = %i", buffer) )
      __debugbreak();
  }
  stream->bytes_read = v7;
  if ( ((unsigned __int8)&s_fileStreamGlob.frameReads & 7) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 86, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int64 ) ) ) )", "( addend ) = %p", &s_fileStreamGlob.frameReads) )
    __debugbreak();
  _InterlockedExchangeAdd64(&s_fileStreamGlob.frameReads, 1ui64);
  if ( ((unsigned __int8)&s_fileStreamGlob.frameReadBytes & 7) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 86, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int64 ) ) ) )", "( addend ) = %p", &s_fileStreamGlob.frameReadBytes) )
    __debugbreak();
  _InterlockedExchangeAdd64(&s_fileStreamGlob.frameReadBytes, v7);
  FileStream_ReadThrottle(v5, v7);
  return 1;
}

/*
==============
FileStream_OpenFile
==============
*/
FileStreamFileID FileStream_OpenFile(Sys_Folder folder, const char *name, int flags)
{
  if ( (flags & 0x10000) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\file\\file_stream.cpp", 771, ASSERT_TYPE_ASSERT, "(( flags & FILE_STREAM_OPEN_ENCRYPTED ) == 0)", (const char *)&queryFormat, "( flags & FILE_STREAM_OPEN_ENCRYPTED ) == 0") )
    __debugbreak();
  return FileStream_OpenFileInternal(folder, name, flags, NULL, 0i64, NULL, 0i64);
}

/*
==============
FileStream_OpenFileInternal
==============
*/
__int64 FileStream_OpenFileInternal(Sys_Folder folder, const char *name, int flags, unsigned __int8 *key)
{
  __int64 NextFileID; 
  FileStreamFileHandle *v9; 
  char *v10; 
  const char *v11; 
  unsigned __int64 FileIDByFilename; 
  int v13; 
  __int64 fileSize; 
  ScopedCriticalSection v16; 
  ScopedCriticalSection v17; 

  if ( Sys_IsFileStreamThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\file\\file_stream.cpp", 671, ASSERT_TYPE_ASSERT, "(!Sys_IsFileStreamThread())", (const char *)&queryFormat, "!Sys_IsFileStreamThread()") )
    __debugbreak();
  Sys_ProfBeginNamedEvent(0xFF808080, "FileStream_OpenFileInternal");
  ScopedCriticalSection::ScopedCriticalSection(&v17, CRITSECT_FILE_ID_ARRAY, SCOPED_CRITSECT_NORMAL);
  if ( key && (flags & 0x10000) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\file\\file_stream.cpp", 678, ASSERT_TYPE_ASSERT, "(key == nullptr || ( flags & FILE_STREAM_OPEN_ENCRYPTED ) != 0)", (const char *)&queryFormat, "key == nullptr || ( flags & FILE_STREAM_OPEN_ENCRYPTED ) != 0") )
    __debugbreak();
  NextFileID = (int)FileStream_GetNextFileID();
  v9 = &s_fileStreamGlob.fileIDs[NextFileID];
  v9->flags = flags;
  Core_strcpy(v9->name, 0x100ui64, name);
  v9->folder = folder;
  v10 = strchr_0(v9->name, 46);
  if ( v10 )
  {
    v11 = v10 + 1;
    if ( strchr_0(v10 + 1, 46) )
      strchr_0(v11, 46);
  }
  FileIDByFilename = DCache_GetFileIDByFilename(v9->name, DCACHE_TYPE_PERSISTENT, DCACHE_LOC_PATCH_MAN);
  v9->dcacheFileID = FileIDByFilename;
  if ( FileIDByFilename )
  {
    v13 = v9->flags;
    if ( (v13 & 8) != 0 )
      v9->flags = v13 & 0xFFFFFFF7;
    fileSize = v9->fileSize;
    if ( fileSize != -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\file\\file_stream.cpp", 718, ASSERT_TYPE_ASSERT, "( fh->fileSize ) == ( -1 )", "%s == %s\n\t%i, %i", "fh->fileSize", "-1", fileSize, -1) )
      __debugbreak();
    v9->fileSize = DCache_GetFileSize(DCACHE_TYPE_PERSISTENT, v9->dcacheFileID, DCACHE_LOC_PATCH_MAN);
  }
  else
  {
    v9->shouldOpen = 1;
    Sys_WakeFileStream();
    if ( (v9->flags & 1) != 0 )
    {
      Sys_ProfBeginNamedEvent(0xFF808080, "waiting for open");
      ScopedCriticalSection::ScopedCriticalSection(&v16, CRITSECT_FILE_ID_ARRAY, SCOPED_CRITSECT_RELEASE);
      while ( v9->shouldOpen )
        Sys_Sleep(0);
      ScopedCriticalSection::~ScopedCriticalSection(&v16);
      Sys_ProfEndNamedEvent();
      if ( v9->error )
      {
        v9->shouldClose = 1;
        Sys_WakeFileStream();
        LODWORD(NextFileID) = -16777217;
      }
    }
    else
    {
      Sys_WakeFileStreamAsync();
    }
  }
  ScopedCriticalSection::~ScopedCriticalSection(&v17);
  Sys_ProfEndNamedEvent();
  return (unsigned int)NextFileID;
}

/*
==============
FileStream_ProcessOpenRequests
==============
*/
void FileStream_ProcessOpenRequests(FileStreamCallbackInfo *callbacks, int *numCallbacks)
{
  __int64 v4; 
  int v5; 
  bool *p_inUse; 
  FileStreamInfoQueue *p_syncQueue; 
  int size; 
  FileStreamRequest *first; 
  __int64 v10; 
  FileStreamRequest *nextInQueue; 
  FileStreamFileHandle *v12; 
  const char *v13; 
  struct DB_IFileSysFile *v14; 
  __int64 v15; 
  __int64 v16; 
  ScopedCriticalSection v17; 
  ScopedCriticalSection v18; 

  Sys_ProfBeginNamedEvent(0xFF808080, "FileStream_ProcessOpenRequests");
  ScopedCriticalSection::ScopedCriticalSection(&v18, CRITSECT_FILE_ID_ARRAY, SCOPED_CRITSECT_NORMAL);
  v4 = 0i64;
  v5 = 0;
  p_inUse = &s_fileStreamGlob.fileIDs[0].inUse;
  do
  {
    if ( *p_inUse && p_inUse[2] )
    {
      ScopedCriticalSection::ScopedCriticalSection(&v17, CRITSECT_IO_SCHEDULER, SCOPED_CRITSECT_NORMAL);
      if ( (unsigned int)v5 >= 0x100 )
      {
        LODWORD(v16) = 256;
        LODWORD(v15) = v5;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\file\\file_stream.cpp", 405, ASSERT_TYPE_ASSERT, "(unsigned)( file ) < (unsigned)( MAX_FILE_IDS )", "file doesn't index MAX_FILE_IDS\n\t%i not in [0, %i)", v15, v16) )
          __debugbreak();
      }
      p_syncQueue = &s_fileStreamGlob.syncQueue;
      if ( (*((_DWORD *)p_inUse + 1) & 8) != 0 )
        p_syncQueue = &s_fileStreamGlob.asyncQueue;
      size = p_syncQueue->size;
      first = p_syncQueue->first;
      if ( size > 0 )
      {
        v10 = (unsigned int)size;
        do
        {
          if ( first )
          {
            nextInQueue = first->nextInQueue;
            if ( *(_DWORD *)first->file == v5 )
              FileStream_RemoveFromQueue(first, INT_VALUE, callbacks, numCallbacks);
            first = nextInQueue;
          }
          --v10;
        }
        while ( v10 );
      }
      ScopedCriticalSection::~ScopedCriticalSection(&v17);
      if ( !v5 )
        CrashReport_AddKVP("FileStream_Close_ID0", (const char *)p_inUse - 280);
      if ( *((_QWORD *)p_inUse - 2) )
        ((void (__fastcall *)(DB_FileSysInterface *))g_fileSystem->Close)(g_fileSystem);
      FileStream_DoneWithFileID(v5);
    }
    ++v5;
    p_inUse += 320;
  }
  while ( v5 < 256 );
  do
  {
    v12 = &s_fileStreamGlob.fileIDs[v4];
    if ( v12->inUse && v12->shouldOpen )
    {
      if ( !v4 )
        CrashReport_AddKVP("FileStream_Open_ID0", v12->name);
      v12->fakeGlobalOffset = s_fileStreamGlob.currentFakeGlobalOffset;
      v13 = j_va("FileStream_OpenInternal: %s", s_fileStreamGlob.fileIDs[v4].name);
      Sys_ProfBeginNamedEvent(0xFF808080, v13);
      if ( !Sys_IsFileStreamThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\file\\file_stream.cpp", 1868, ASSERT_TYPE_ASSERT, "(Sys_IsFileStreamThread())", (const char *)&queryFormat, "Sys_IsFileStreamThread()") )
        __debugbreak();
      v14 = g_fileSystem->OpenFile(g_fileSystem, (unsigned int)v12->folder, &s_fileStreamGlob.fileIDs[v4], (unsigned int)v12->flags);
      if ( v14 )
      {
        v12->fileSize = g_fileSystem->Size(g_fileSystem, v14);
        v12->h = v14;
        Sys_ProfEndNamedEvent();
        s_fileStreamGlob.currentFakeGlobalOffset += v12->fileSize;
      }
      else
      {
        Sys_ProfEndNamedEvent();
        v12->error = 1;
      }
      v12->shouldOpen = 0;
    }
    ++v4;
  }
  while ( v4 < 256 );
  ScopedCriticalSection::~ScopedCriticalSection(&v18);
  Sys_ProfEndNamedEvent();
}

/*
==============
FileStream_ReadThrottle
==============
*/
void FileStream_ReadThrottle(int startingTimeMs, unsigned __int64 numBytesRead)
{
  const dvar_t *v3; 
  float value; 
  int v6; 
  int v7; 
  float v8; 
  float v9; 
  int v10; 

  if ( numBytesRead )
  {
    v3 = DVARFLT_fileStream_mbPerSec;
    if ( !DVARFLT_fileStream_mbPerSec && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 720, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "fileStream_mbPerSec") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v3);
    value = v3->current.value;
    if ( value > 0.0 )
    {
      v6 = 0;
      if ( startingTimeMs > 0 )
      {
        v7 = Sys_Milliseconds() - startingTimeMs;
        if ( v7 < 0 )
          v7 = 0;
        v6 = v7;
      }
      v8 = (float)(__int64)numBytesRead;
      if ( (numBytesRead & 0x8000000000000000ui64) != 0i64 )
      {
        v9 = (float)(__int64)numBytesRead;
        v8 = v9 + 1.8446744e19;
      }
      v10 = -v6 - (int)(float)((float)(-0.00095367432 / value) * v8);
      if ( v10 > 0 )
        Sys_Sleep(v10);
    }
  }
}

/*
==============
FileStream_RecordBandwidth
==============
*/
void FileStream_RecordBandwidth(unsigned __int64 numBytesRead)
{
  if ( ((unsigned __int8)&s_fileStreamGlob.frameReads & 7) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 86, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int64 ) ) ) )", "( addend ) = %p", &s_fileStreamGlob.frameReads) )
    __debugbreak();
  _InterlockedExchangeAdd64(&s_fileStreamGlob.frameReads, 1ui64);
  if ( ((unsigned __int8)&s_fileStreamGlob.frameReadBytes & 7) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 86, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int64 ) ) ) )", "( addend ) = %p", &s_fileStreamGlob.frameReadBytes) )
    __debugbreak();
  _InterlockedExchangeAdd64(&s_fileStreamGlob.frameReadBytes, numBytesRead);
}

/*
==============
FileStream_RecordReadEnd
==============
*/
void FileStream_RecordReadEnd(const FileStreamRequest *request)
{
  int v2; 
  int v3; 
  unsigned __int64 buffer_size; 
  __int64 start_offset; 
  int v6; 
  __int64 readHistoryIndex; 
  volatile int *v8; 
  FastCriticalSectionScopeWrite v9; 

  if ( !request && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\file\\file_stream.cpp", 370, ASSERT_TYPE_ASSERT, "(request)", (const char *)&queryFormat, "request", -2i64) )
    __debugbreak();
  v2 = Sys_Milliseconds();
  v3 = *(_DWORD *)request->id;
  buffer_size = request->buffer_size;
  start_offset = request->start_offset;
  v6 = *(_DWORD *)request->file;
  readHistoryIndex = request->readHistoryIndex;
  v9.cs = &s_fileStreamGlob.readHistory.m_readHistoryLock;
  Sys_LockWrite(&s_fileStreamGlob.readHistory.m_readHistoryLock);
  v8 = &s_fileStreamGlob.profileCounter[12 * readHistoryIndex - 608];
  if ( v3 == *((_DWORD *)v8 + 9) )
  {
    if ( *v8 != v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\file\\file_stream.h", 200, ASSERT_TYPE_ASSERT, "(readHistoryData->fileID == fileID)", (const char *)&queryFormat, "readHistoryData->fileID == fileID") )
      __debugbreak();
    if ( *((_QWORD *)v8 + 1) != start_offset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\file\\file_stream.h", 201, ASSERT_TYPE_ASSERT, "(readHistoryData->offset == offset)", (const char *)&queryFormat, "readHistoryData->offset == offset") )
      __debugbreak();
    if ( *((_QWORD *)v8 + 2) != buffer_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\file\\file_stream.h", 202, ASSERT_TYPE_ASSERT, "(readHistoryData->size == size)", (const char *)&queryFormat, "readHistoryData->size == size") )
      __debugbreak();
    if ( *((_DWORD *)v8 + 7) != -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\file\\file_stream.h", 203, ASSERT_TYPE_ASSERT, "(readHistoryData->endTimeMs == -1)", (const char *)&queryFormat, "readHistoryData->endTimeMs == -1") )
      __debugbreak();
    *((_DWORD *)v8 + 7) = v2;
  }
  FastCriticalSectionScopeWrite::~FastCriticalSectionScopeWrite(&v9);
}

/*
==============
FileStream_RecordReadStart
==============
*/
void FileStream_RecordReadStart(FileStreamRequest *request)
{
  FileStreamTrackType fileStreamTrack; 
  int estMsToFinish; 
  int v4; 
  int v5; 
  unsigned __int64 buffer_size; 
  int v7; 
  __int64 start_offset; 
  volatile int v9; 
  volatile int *v10; 
  unsigned int m_readHistoryEndIndex; 
  FastCriticalSectionScopeWrite v12; 

  fileStreamTrack = request->fileStreamTrack;
  estMsToFinish = request->estMsToFinish;
  v4 = Sys_Milliseconds();
  v5 = *(_DWORD *)request->id;
  buffer_size = request->buffer_size;
  v7 = v4;
  start_offset = request->start_offset;
  v9 = *(_DWORD *)request->file;
  v12.cs = &s_fileStreamGlob.readHistory.m_readHistoryLock;
  Sys_LockWrite(&s_fileStreamGlob.readHistory.m_readHistoryLock);
  m_readHistoryEndIndex = s_fileStreamGlob.readHistory.m_readHistoryEndIndex;
  v10 = &s_fileStreamGlob.profileCounter[12 * s_fileStreamGlob.readHistory.m_readHistoryEndIndex - 608];
  *v10 = v9;
  *((_QWORD *)v10 + 1) = start_offset;
  *((_QWORD *)v10 + 2) = buffer_size;
  *((_DWORD *)v10 + 9) = v5;
  *((_DWORD *)v10 + 6) = v7;
  *((_DWORD *)v10 + 7) = -1;
  *((_DWORD *)v10 + 8) = estMsToFinish;
  *((_DWORD *)v10 + 10) = fileStreamTrack;
  s_fileStreamGlob.readHistory.m_readHistoryEndIndex = (s_fileStreamGlob.readHistory.m_readHistoryEndIndex + 1) % 0x32;
  if ( s_fileStreamGlob.readHistory.m_readHistoryEndIndex == s_fileStreamGlob.readHistory.m_readHistoryStartIndex )
    s_fileStreamGlob.readHistory.m_readHistoryStartIndex = (s_fileStreamGlob.readHistory.m_readHistoryStartIndex + 1) % 0x32;
  FastCriticalSectionScopeWrite::~FastCriticalSectionScopeWrite(&v12);
  request->readHistoryIndex = m_readHistoryEndIndex;
}

/*
==============
FileStream_RemoveFromQueue
==============
*/
void FileStream_RemoveFromQueue(FileStreamRequest *stream, int reason, FileStreamCallbackInfo *callbacks, int *numCallbacks)
{
  const dvar_t *v8; 
  int v9; 
  __int64 fileStreamTrack; 
  volatile int *v11; 
  FileStreamCallbackInfo *v12; 
  unsigned __int64 buffer_size; 
  bool IsFileAsync; 
  FileStreamInfoQueue *p_syncQueue; 
  FileStreamRequest *nextInQueue; 
  char *fmt; 
  __int64 v19; 
  __int64 v20; 
  ScopedCriticalSection v21; 

  Sys_ProfBeginNamedEvent(0xFF808080, "FileStream_RemoveFromQueue");
  ScopedCriticalSection::ScopedCriticalSection(&v21, CRITSECT_IO_SCHEDULER, SCOPED_CRITSECT_NORMAL);
  if ( *(_DWORD *)stream->id == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\file\\file_stream.cpp", 554, ASSERT_TYPE_ASSERT, "(stream->id != FileStreamRequestID::INVALID)", (const char *)&queryFormat, "stream->id != FileStreamRequestID::INVALID") )
    __debugbreak();
  if ( !*(_DWORD *)stream->status && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\file\\file_stream.cpp", 555, ASSERT_TYPE_ASSERT, "(stream->status != FileStreamStatus::INVALID)", (const char *)&queryFormat, "stream->status != FileStreamStatus::INVALID") )
    __debugbreak();
  v8 = DCONST_DVARBOOL_fileStream_printQueue;
  if ( !DCONST_DVARBOOL_fileStream_printQueue && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "fileStream_printQueue") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v8);
  if ( v8->current.enabled )
  {
    LODWORD(v19) = reason;
    LODWORD(fmt) = *(_DWORD *)stream->status;
    Com_Printf(10, "removefromqueue %s %zu %d %d\n", s_fileStreamGlob.fileIDs[*(int *)stream->file].name, stream->start_offset, fmt, v19);
  }
  v9 = *(_DWORD *)stream->status;
  if ( v9 != 3 )
  {
    if ( v9 == 2 && reason == 4 )
    {
      if ( FileStream_IsFileAsync(*(_DWORD *)stream->file) )
      {
        *(_DWORD *)stream->status = 3;
        g_fileSystem->Cancel(g_fileSystem, stream->asyncCtrl);
      }
      else
      {
        *(_DWORD *)stream->status = 4;
      }
    }
    else
    {
      if ( !stream->callbackOnly )
      {
        fileStreamTrack = stream->fileStreamTrack;
        if ( (unsigned int)fileStreamTrack >= 8 )
        {
          LODWORD(v20) = 8;
          LODWORD(v19) = stream->fileStreamTrack;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\file\\file_stream.cpp", 395, ASSERT_TYPE_ASSERT, "(unsigned)( fileStreamTrack ) < (unsigned)( FILE_STREAM_TRACK_COUNT )", "fileStreamTrack doesn't index FILE_STREAM_TRACK_COUNT\n\t%i not in [0, %i)", v19, v20) )
            __debugbreak();
        }
        v11 = &s_fileStreamGlob.profileCounter[fileStreamTrack];
        if ( *(int *)v11 < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\file\\file_stream.cpp", 396, ASSERT_TYPE_ASSERT, "( s_fileStreamGlob.profileCounter[fileStreamTrack] ) >= ( 0 )", "%s >= %s\n\t%i, %i", "s_fileStreamGlob.profileCounter[fileStreamTrack]", "0", *v11, 0i64) )
          __debugbreak();
        if ( ((unsigned __int8)v11 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", (const void *)v11) )
          __debugbreak();
        _InterlockedDecrement(v11);
      }
      if ( stream->genericCallback )
      {
        if ( *numCallbacks >= 128 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\file\\file_stream.cpp", 594, ASSERT_TYPE_ASSERT, "(*numCallbacks < MAX_FILE_STREAM_REQUESTS)", (const char *)&queryFormat, "*numCallbacks < MAX_FILE_STREAM_REQUESTS") )
          __debugbreak();
        v12 = &callbacks[(*numCallbacks)++];
        v12->callback = stream->callback;
        v12->user = stream->callbackUser;
        *(_DWORD *)v12->reason = reason;
        *(_DWORD *)v12->id = *(_DWORD *)stream->id;
        buffer_size = stream->buffer_size;
        if ( stream->bytes_read < buffer_size )
          buffer_size = stream->bytes_read;
        v12->bytes = buffer_size;
        if ( ((unsigned __int8)&s_fileStreamGlob.callbacksPendingCount & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &s_fileStreamGlob.callbacksPendingCount) )
          __debugbreak();
        _InterlockedIncrement(&s_fileStreamGlob.callbacksPendingCount);
      }
      IsFileAsync = FileStream_IsFileAsync(*(_DWORD *)stream->file);
      p_syncQueue = &s_fileStreamGlob.syncQueue;
      if ( IsFileAsync )
        p_syncQueue = &s_fileStreamGlob.asyncQueue;
      if ( p_syncQueue->first == stream )
      {
        nextInQueue = NULL;
        if ( stream->nextInQueue != stream )
          nextInQueue = stream->nextInQueue;
        p_syncQueue->first = nextInQueue;
      }
      stream->nextInQueue->prevInQueue = stream->prevInQueue;
      stream->prevInQueue->nextInQueue = stream->nextInQueue;
      stream->nextInQueue = NULL;
      stream->prevInQueue = NULL;
      if ( --p_syncQueue->size < 0 )
      {
        LODWORD(v19) = p_syncQueue->size;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\file\\file_stream.cpp", 620, ASSERT_TYPE_ASSERT, "( ( queue->size >= 0 ) )", "( queue->size ) = %i", v19) )
          __debugbreak();
      }
      *(_DWORD *)stream->status = 0;
      *(_DWORD *)stream->id = -1;
    }
  }
  ScopedCriticalSection::~ScopedCriticalSection(&v21);
  Sys_ProfEndNamedEvent();
}

/*
==============
FileStream_Shutdown
==============
*/
void FileStream_Shutdown(void)
{
  if ( s_fileStreamGlob.threadsSpawned )
  {
    s_fileStreamGlob.threadsSpawned = 0;
    while ( !Sys_QueryFileStreamPaused() )
      Sys_Sleep(1);
  }
}

/*
==============
FileStream_Thread
==============
*/
void __noreturn FileStream_Thread(unsigned int threadContext)
{
  _JBTYPE *Value; 
  int v2; 
  FileStreamRequest *v3; 
  unsigned int *v4; 
  __int64 v5; 
  FileStreamRequest *first; 
  FileStreamRequest *v7; 
  int v8; 
  int v9; 
  unsigned __int64 *p_bytes; 
  __int64 v11; 
  int numCallbacks[4]; 
  ScopedCriticalSection v13; 
  __int64 v14; 
  FileStreamCallbackInfo callbacks; 

  v14 = -2i64;
  numCallbacks[2] = threadContext;
  if ( threadContext != 22 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\file\\file_stream.cpp", 1653, ASSERT_TYPE_ASSERT, "( threadContext ) == ( THREAD_CONTEXT_FILE_STREAM )", "%s == %s\n\t%i, %i", "threadContext", "THREAD_CONTEXT_FILE_STREAM", threadContext, 22) )
    __debugbreak();
  do
    Value = (_JBTYPE *)Sys_GetValue(2);
  while ( setjmp(Value) );
  v2 = 2;
  v3 = &s_fileStreamGlob.requests[2];
  v4 = &s_fileStreamGlob.requestIDs[2];
  v5 = 2i64;
  do
  {
    *(v4 - 2) = v2 - 2;
    *(_DWORD *)v3[-2].id = -1;
    *(v4 - 1) = v2 - 1;
    *(_DWORD *)v3[-1].id = -1;
    *v4 = v2;
    *(_DWORD *)v3->id = -1;
    v4[1] = v2 + 1;
    *(_DWORD *)v3[1].id = -1;
    v4[2] = v2 + 2;
    *(_DWORD *)v3[2].id = -1;
    v4[3] = v2 + 3;
    *(_DWORD *)v3[3].id = -1;
    v4[4] = v2 + 4;
    *(_DWORD *)v3[4].id = -1;
    v4[5] = v2 + 5;
    *(_DWORD *)v3[5].id = -1;
    v4[6] = v2 + 6;
    *(_DWORD *)v3[6].id = -1;
    v4[7] = v2 + 7;
    *(_DWORD *)v3[7].id = -1;
    v4[8] = v2 + 8;
    *(_DWORD *)v3[8].id = -1;
    v4[9] = v2 + 9;
    *(_DWORD *)v3[9].id = -1;
    v4[10] = v2 + 10;
    *(_DWORD *)v3[10].id = -1;
    v4[11] = v2 + 11;
    *(_DWORD *)v3[11].id = -1;
    v4[12] = v2 + 12;
    *(_DWORD *)v3[12].id = -1;
    v4[13] = v2 + 13;
    *(_DWORD *)v3[13].id = -1;
    v4[14] = v2 + 14;
    *(_DWORD *)v3[14].id = -1;
    v4[15] = v2 + 15;
    *(_DWORD *)v3[15].id = -1;
    v4[16] = v2 + 16;
    *(_DWORD *)v3[16].id = -1;
    v4[17] = v2 + 17;
    *(_DWORD *)v3[17].id = -1;
    v4[18] = v2 + 18;
    *(_DWORD *)v3[18].id = -1;
    v4[19] = v2 + 19;
    *(_DWORD *)v3[19].id = -1;
    v4[20] = v2 + 20;
    *(_DWORD *)v3[20].id = -1;
    v4[21] = v2 + 21;
    *(_DWORD *)v3[21].id = -1;
    v4[22] = v2 + 22;
    *(_DWORD *)v3[22].id = -1;
    v4[23] = v2 + 23;
    *(_DWORD *)v3[23].id = -1;
    v4[24] = v2 + 24;
    *(_DWORD *)v3[24].id = -1;
    v4[25] = v2 + 25;
    *(_DWORD *)v3[25].id = -1;
    v4[26] = v2 + 26;
    *(_DWORD *)v3[26].id = -1;
    v4[27] = v2 + 27;
    *(_DWORD *)v3[27].id = -1;
    v4[28] = v2 + 28;
    *(_DWORD *)v3[28].id = -1;
    v4[29] = v2 + 29;
    *(_DWORD *)v3[29].id = -1;
    v4[30] = v2 + 30;
    *(_DWORD *)v3[30].id = -1;
    v4[31] = v2 + 31;
    *(_DWORD *)v3[31].id = -1;
    v4[32] = v2 + 32;
    *(_DWORD *)v3[32].id = -1;
    v4[33] = v2 + 33;
    *(_DWORD *)v3[33].id = -1;
    v4[34] = v2 + 34;
    *(_DWORD *)v3[34].id = -1;
    v4[35] = v2 + 35;
    *(_DWORD *)v3[35].id = -1;
    v4[36] = v2 + 36;
    *(_DWORD *)v3[36].id = -1;
    v4[37] = v2 + 37;
    *(_DWORD *)v3[37].id = -1;
    v4[38] = v2 + 38;
    *(_DWORD *)v3[38].id = -1;
    v4[39] = v2 + 39;
    *(_DWORD *)v3[39].id = -1;
    v4[40] = v2 + 40;
    *(_DWORD *)v3[40].id = -1;
    v4[41] = v2 + 41;
    *(_DWORD *)v3[41].id = -1;
    v4[42] = v2 + 42;
    *(_DWORD *)v3[42].id = -1;
    v4[43] = v2 + 43;
    *(_DWORD *)v3[43].id = -1;
    v4[44] = v2 + 44;
    *(_DWORD *)v3[44].id = -1;
    v4[45] = v2 + 45;
    *(_DWORD *)v3[45].id = -1;
    v4[46] = v2 + 46;
    *(_DWORD *)v3[46].id = -1;
    v4[47] = v2 + 47;
    *(_DWORD *)v3[47].id = -1;
    v4[48] = v2 + 48;
    *(_DWORD *)v3[48].id = -1;
    v4[49] = v2 + 49;
    *(_DWORD *)v3[49].id = -1;
    v4[50] = v2 + 50;
    *(_DWORD *)v3[50].id = -1;
    v4[51] = v2 + 51;
    *(_DWORD *)v3[51].id = -1;
    v4[52] = v2 + 52;
    *(_DWORD *)v3[52].id = -1;
    v4[53] = v2 + 53;
    *(_DWORD *)v3[53].id = -1;
    v4[54] = v2 + 54;
    *(_DWORD *)v3[54].id = -1;
    v4[55] = v2 + 55;
    *(_DWORD *)v3[55].id = -1;
    v4[56] = v2 + 56;
    *(_DWORD *)v3[56].id = -1;
    v4[57] = v2 + 57;
    *(_DWORD *)v3[57].id = -1;
    v4[58] = v2 + 58;
    *(_DWORD *)v3[58].id = -1;
    v4[59] = v2 + 59;
    *(_DWORD *)v3[59].id = -1;
    v4[60] = v2 + 60;
    *(_DWORD *)v3[60].id = -1;
    v4[61] = v2 + 61;
    *(_DWORD *)v3[61].id = -1;
    v2 += 64;
    v4 += 64;
    v3 += 64;
    --v5;
  }
  while ( v5 );
  s_fileStreamGlob.requestArraysInitialized = 1;
  while ( 1 )
  {
LABEL_8:
    Sys_FileStreamSleep();
    while ( 1 )
    {
      if ( !s_fileStreamGlob.threadsSpawned )
        goto LABEL_8;
      Sys_ProfBeginNamedEvent(0xFF808080, "FileStream_Update");
      numCallbacks[0] = 0;
      ScopedCriticalSection::ScopedCriticalSection(&v13, CRITSECT_IO_SCHEDULER, SCOPED_CRITSECT_NORMAL);
      first = s_fileStreamGlob.syncQueue.first;
      if ( s_fileStreamGlob.syncQueue.first )
      {
        if ( *(_DWORD *)s_fileStreamGlob.syncQueue.first->status != 1 )
        {
          LODWORD(v11) = *(_DWORD *)s_fileStreamGlob.syncQueue.first->status;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\file\\file_stream.cpp", 1274, ASSERT_TYPE_ASSERT, "( ( s_fileStreamGlob.syncQueue.first->status == FileStreamStatus::QUEUED ) )", "( s_fileStreamGlob.syncQueue.first->status ) = %i", v11) )
            __debugbreak();
          first = s_fileStreamGlob.syncQueue.first;
        }
        *(_DWORD *)first->status = 2;
        v7 = s_fileStreamGlob.syncQueue.first;
        ScopedCriticalSection::~ScopedCriticalSection(&v13);
      }
      else
      {
        ScopedCriticalSection::~ScopedCriticalSection(&v13);
        v7 = NULL;
      }
      FileStream_ProcessOpenRequests(&callbacks, numCallbacks);
      if ( v7 )
      {
        if ( FileStream_LoadFileSynchronously(v7) )
        {
          if ( !*(_DWORD *)v7->status )
          {
            LODWORD(v11) = 0;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\file\\file_stream.cpp", 1309, ASSERT_TYPE_ASSERT, "( ( streamToLoad->status != FileStreamStatus::INVALID ) )", "( streamToLoad->status ) = %i", v11) )
              __debugbreak();
          }
          if ( *(_DWORD *)v7->status == 4 )
            v8 = 4;
          else
            v8 = (v7->bytes_read == v7->buffer_size) + 7;
        }
        else
        {
          v8 = 6;
        }
        FileStream_RemoveFromQueue(v7, v8, &callbacks, numCallbacks);
      }
      v9 = 0;
      if ( numCallbacks[0] > 0 )
      {
        p_bytes = &callbacks.bytes;
        do
        {
          ((void (__fastcall *)(_QWORD, _QWORD, unsigned __int64, unsigned __int64))*(p_bytes - 2))(*((unsigned int *)p_bytes - 2), *((unsigned int *)p_bytes - 1), *p_bytes, p_bytes[1]);
          if ( ((unsigned __int8)&s_fileStreamGlob.callbacksPendingCount & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &s_fileStreamGlob.callbacksPendingCount) )
            __debugbreak();
          if ( _InterlockedDecrement(&s_fileStreamGlob.callbacksPendingCount) < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\file\\file_stream.cpp", 543, ASSERT_TYPE_ASSERT, "(s_fileStreamGlob.callbacksPendingCount >= 0)", (const char *)&queryFormat, "s_fileStreamGlob.callbacksPendingCount >= 0") )
            __debugbreak();
          ++v9;
          p_bytes += 4;
        }
        while ( v9 < numCallbacks[0] );
      }
      if ( !s_fileStreamGlob.syncQueue.first )
        break;
      Sys_ProfEndNamedEvent();
    }
    Sys_ProfEndNamedEvent();
  }
}


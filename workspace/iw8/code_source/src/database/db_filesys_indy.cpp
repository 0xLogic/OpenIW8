/*
==============
DB_IndyFsInitialize
==============
*/

DB_FileSysInterface *__fastcall DB_IndyFsInitialize(DB_FileSysInterface *fallbackFs)
{
  return ?DB_IndyFsInitialize@@YAPEAVDB_FileSysInterface@@PEAV1@@Z(fallbackFs);
}

/*
==============
IndyFsFileSystem::FreeReadContext
==============
*/

void __fastcall IndyFsFileSystem::FreeReadContext(IndyFsFileSystem *this, IndyFsReadContext *context)
{
  ?FreeReadContext@IndyFsFileSystem@@AEAAXPEAUIndyFsReadContext@@@Z(this, context);
}

/*
==============
IndyFsFileSystem::Cancel
==============
*/

void __fastcall IndyFsFileSystem::Cancel(IndyFsFileSystem *this, struct FileReadContext *handle)
{
  ?Cancel@IndyFsFileSystem@@UEAAXPEAUFileReadContext@@@Z(this, handle);
}

/*
==============
IndyFsFileSystem::Seek
==============
*/

unsigned __int64 __fastcall IndyFsFileSystem::Seek(IndyFsFileSystem *this, struct DB_IFileSysFile *handle, const unsigned __int64 pos)
{
  return ?Seek@IndyFsFileSystem@@UEAA_KPEAVDB_IFileSysFile@@_K@Z(this, handle, pos);
}

/*
==============
IndyFsFileSystem::Close
==============
*/

void __fastcall IndyFsFileSystem::Close(IndyFsFileSystem *this, struct DB_IFileSysFile *handle)
{
  ?Close@IndyFsFileSystem@@UEAAXPEAVDB_IFileSysFile@@@Z(this, handle);
}

/*
==============
IndyFsFileSystem::ReadBlocking
==============
*/

FileSysResult __fastcall IndyFsFileSystem::ReadBlocking(IndyFsFileSystem *this, struct DB_IFileSysFile *handle, unsigned __int64 offset, unsigned __int64 size, void *dest, unsigned __int64 *numBytesRead, FileStreamPriority priority, int endDeadline)
{
  return ?ReadBlocking@IndyFsFileSystem@@UEAA?AW4FileSysResult@@PEAVDB_IFileSysFile@@_K1PEAXPEA_KW4FileStreamPriority@@H@Z(this, handle, offset, size, dest, numBytesRead, priority, endDeadline);
}

/*
==============
IndyFsFileSystem::AllocFile
==============
*/

IndyFsFileNode *__fastcall IndyFsFileSystem::AllocFile(IndyFsFileSystem *this)
{
  return ?AllocFile@IndyFsFileSystem@@AEAAPEAUIndyFsFileNode@@XZ(this);
}

/*
==============
IndyFsFileSystem::AllocReadContext
==============
*/

IndyFsReadContext *__fastcall IndyFsFileSystem::AllocReadContext(IndyFsFileSystem *this)
{
  return ?AllocReadContext@IndyFsFileSystem@@AEAAPEAUIndyFsReadContext@@XZ(this);
}

/*
==============
IndyFsFileSystem::PrintLeakedHandles
==============
*/

void __fastcall IndyFsFileSystem::PrintLeakedHandles(IndyFsFileSystem *this)
{
  ?PrintLeakedHandles@IndyFsFileSystem@@AEAAXXZ(this);
}

/*
==============
IndyFsFileSystem::Initialize
==============
*/

void __fastcall IndyFsFileSystem::Initialize(IndyFsFileSystem *this, FileSysOpenBehavior openBehavior, DB_FileSysInterface *fallbackFs)
{
  ?Initialize@IndyFsFileSystem@@QEAAXW4FileSysOpenBehavior@@PEAVDB_FileSysInterface@@@Z(this, openBehavior, fallbackFs);
}

/*
==============
IndyFsFileSystem::StartRead
==============
*/

struct FileReadContext *__fastcall IndyFsFileSystem::StartRead(IndyFsFileSystem *this, struct DB_IFileSysFile *handle, unsigned __int64 offset, unsigned __int64 size, void *dest, void (__fastcall *cbfn)(void *, FileSysResult, unsigned __int64), void *cbContext, FileStreamPriority priority, int endDeadline)
{
  return ?StartRead@IndyFsFileSystem@@UEAAPEAUFileReadContext@@PEAVDB_IFileSysFile@@_K1PEAXP6AX2W4FileSysResult@@1@Z2W4FileStreamPriority@@H@Z(this, handle, offset, size, dest, cbfn, cbContext, priority, endDeadline);
}

/*
==============
IndyFsFileSystem::OpenFile
==============
*/

struct DB_IFileSysFile *__fastcall IndyFsFileSystem::OpenFile(IndyFsFileSystem *this, Sys_Folder folder, const char *filename, int flags)
{
  return ?OpenFile@IndyFsFileSystem@@UEAAPEAVDB_IFileSysFile@@W4Sys_Folder@@PEBDH@Z(this, folder, filename, flags);
}

/*
==============
IndyFsFileSystem::GetType
==============
*/

DB_FileSysInterface::Type __fastcall IndyFsFileSystem::GetType(IndyFsFileSystem *this)
{
  return ?GetType@IndyFsFileSystem@@UEAA?AW4Type@DB_FileSysInterface@@XZ(this);
}

/*
==============
IndyFsFileSystem::Exists
==============
*/

bool __fastcall IndyFsFileSystem::Exists(IndyFsFileSystem *this, Sys_Folder folder, const char *filename)
{
  return ?Exists@IndyFsFileSystem@@UEAA_NW4Sys_Folder@@PEBD@Z(this, folder, filename);
}

/*
==============
IndyFsFileSystem::FreeFile
==============
*/

void __fastcall IndyFsFileSystem::FreeFile(IndyFsFileSystem *this, IndyFsFileNode *file)
{
  ?FreeFile@IndyFsFileSystem@@AEAAXPEAUIndyFsFileNode@@@Z(this, file);
}

/*
==============
IndyFsFileSystem::Size
==============
*/

unsigned __int64 __fastcall IndyFsFileSystem::Size(IndyFsFileSystem *this, struct DB_IFileSysFile *handle)
{
  return ?Size@IndyFsFileSystem@@UEAA_KPEAVDB_IFileSysFile@@@Z(this, handle);
}

/*
==============
IndyFsFileSystem::Shutdown
==============
*/

void __fastcall IndyFsFileSystem::Shutdown(IndyFsFileSystem *this)
{
  ?Shutdown@IndyFsFileSystem@@UEAAXXZ(this);
}

/*
==============
IndyFsFileSystem::AllocFile
==============
*/
IndyFsFileNode *IndyFsFileSystem::AllocFile(IndyFsFileSystem *this)
{
  IndyFsFileNode *v1; 
  unsigned int v3; 
  __int64 v4; 
  IndyFsFileNode *v5; 

  v1 = NULL;
  v3 = 0;
  while ( 1 )
  {
    v4 = v3;
    v5 = &this->m_files[v4];
    if ( ((unsigned __int8)v5 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &this->m_files[v4]) )
      __debugbreak();
    if ( !_InterlockedCompareExchange(&v5->inUse, 1, 0) )
      break;
    if ( ++v3 >= 0x100 )
      goto LABEL_9;
  }
  v1 = v5;
  if ( v5 )
    return v1;
LABEL_9:
  Com_PrintError(10, "IndyFs - ERROR: Out of file handles (%d)\n", 256i64);
  return v1;
}

/*
==============
IndyFsFileSystem::AllocReadContext
==============
*/
IndyFsReadContext *IndyFsFileSystem::AllocReadContext(IndyFsFileSystem *this)
{
  __int64 v1; 
  IndyFsReadContext *v3; 

  v1 = 0i64;
  while ( 1 )
  {
    v3 = &this->m_reads[v1];
    if ( ((unsigned __int8)v3 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &this->m_reads[v1]) )
      __debugbreak();
    if ( !_InterlockedCompareExchange(&v3->inUse, 1, 0) )
      break;
    v1 = (unsigned int)(v1 + 1);
    if ( (unsigned int)v1 >= 0x100 )
    {
      Sys_Error((const ObfuscateErrorText)&stru_143D1F860, 256i64);
      return 0i64;
    }
  }
  return &this->m_reads[v1];
}

/*
==============
IndyFsFileSystem::Cancel
==============
*/
void IndyFsFileSystem::Cancel(IndyFsFileSystem *this, struct FileReadContext *handle)
{
  if ( handle )
  {
    if ( handle < (struct FileReadContext *)this->m_reads || handle >= (struct FileReadContext *)&this->m_openBehavior )
      ((void (__fastcall *)(DB_FileSysInterface *))this->m_fallbackFs->Cancel)(this->m_fallbackFs);
    else
      indyfs_cancel((IndyFsTaskHandle *)handle + 1);
  }
}

/*
==============
IndyFsFileSystem::Close
==============
*/
void IndyFsFileSystem::Close(IndyFsFileSystem *this, struct DB_IFileSysFile *handle)
{
  if ( !handle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_filesys_indy.cpp", 337, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
    __debugbreak();
  if ( *((_DWORD *)handle + 1) == 1 )
    this->m_fallbackFs->Close(this->m_fallbackFs, (struct DB_IFileSysFile *)*((_QWORD *)handle + 1));
  else
    indyfs_close(*((IndyFsFile **)handle + 1));
  if ( ((unsigned __int8)handle & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 93, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", handle) )
    __debugbreak();
  _InterlockedExchange((volatile __int32 *)handle, 0);
}

/*
==============
CloseProfilerFile
==============
*/

void __fastcall CloseProfilerFile()
{
  indyfs_profiler_file_close();
}

/*
==============
CloseStatisticsFile
==============
*/

void __fastcall CloseStatisticsFile()
{
  indyfs_statistics_file_close();
}

/*
==============
DB_IndyFsInitialize
==============
*/
IndyFsFileSystem *DB_IndyFsInitialize(DB_FileSysInterface *fallbackFs)
{
  const dvar_t *v1; 
  const dvar_t *v2; 
  const dvar_t *v3; 
  const dvar_t *v4; 
  const char *v5; 
  int v6; 
  int v7; 
  const char *v8; 
  __int64 v9; 
  const char *string; 
  __int64 v11; 
  __int64 v12; 
  unsigned __int64 v13; 
  __int128 v14; 
  unsigned __int64 v15; 
  IndyFsFileSystem *v16; 
  int v17; 
  int v18; 
  float v19; 
  float v20; 
  DB_FileSysInterface *v21; 
  __int64 v22; 
  volatile __int32 *p_taskInProgress; 
  volatile __int32 *p_inUse; 
  const char *v25; 
  IndyFsFileSystem *result; 
  unsigned int fileCount; 
  int v28; 
  unsigned __int64 bytesDeleted; 
  void *memoryBlock; 
  unsigned __int64 chunkCount; 
  IndyFsInitOptions v32; 
  unsigned __int64 v33; 
  DB_FileSysInterface *v34; 
  IndyFsInitOptions v35; 
  char _Buffer[256]; 
  char v37[1024]; 

  v34 = fallbackFs;
  Dvar_BeginPermanentRegistration();
  v1 = Dvar_RegisterString("TTQRRSOLQ", (const char *)&queryFormat.fmt + 3, 0, "Where to download the chunks from");
  v2 = Dvar_RegisterEnum("NRKSMSOLQP", s_indyfs_file_source_names, 0, 0, "Where to load files from. Enum: ['indy_only', 'fallback_only', 'indy_then_fallback', fallback_then_indy'] (Default: 'indy_only'");
  v3 = Dvar_RegisterString("NQNSKPOOSQ", "/game/xb3", 0, "Where the game files exist relative to the image root. Ex: 'game/ps4'");
  v4 = Dvar_RegisterInt("LKSTNSPMLP", 0, 0, 0x7FFFFFFF, 0, "How much space is free on the machine");
  Dvar_EndPermanentRegistration();
  v5 = Dvar_EnumToString(v2);
  if ( I_strcmp("indy_only", v5) )
  {
    if ( I_strcmp("fallback_only", v5) )
    {
      if ( I_strcmp("indy_then_fallback", v5) )
      {
        v7 = I_strcmp("fallback_then_indy", v5);
        v6 = 0;
        if ( !v7 )
          v6 = 3;
      }
      else
      {
        v6 = 2;
      }
    }
    else
    {
      v6 = 1;
    }
  }
  else
  {
    v6 = 0;
  }
  v8 = Sys_DefaultInstallPath();
  v9 = 256i64;
  j_snprintf(_Buffer, 0x100ui64, "%s/indy.iimg", v8);
  j_snprintf(v37, 0x400ui64, "http:
  string = v3->current.string;
  v11 = -1i64;
  v12 = -1i64;
  do
    ++v12;
  while ( string[v12] );
  if ( !(_DWORD)v12 )
  {
    Com_PrintError(10, "IndyFs - ERROR: %s is a required DVar\n", "TTQRRSOLQ");
    return 0i64;
  }
  v13 = (__int64)v4->current.integer << 20;
  if ( indyfs_log_init(IndyFsLogCallback) )
  {
    Com_PrintError(10, "IndyFs - ERROR: Failed to init IndyFs log system\n");
    return 0i64;
  }
  if ( indyfs_image_parse_header(&fileCount, &chunkCount, _Buffer) )
  {
    Com_PrintError(10, "IndyFs - ERROR: Failed to parse indy.iimg file header\n");
    return 0i64;
  }
  v32.profilerBufferSize = 0x100000i64;
  v32.statisticsBufferSize = 0x100000i64;
  v32.fileCacheFileHandleCount = 64;
  *(_QWORD *)&v32.decompressionScratchPadCount = 2i64;
  v32.ioQueueThreadsToCreate = 0;
  v32.profilerEnabled = 1;
  v32.statisticsEnabled = 1;
  v14 = *(_OWORD *)&v32.statisticsEnabled;
  *(_QWORD *)&v32.arkVersion = 0x100000000i64;
  *(__m256i *)&v35.fileCacheFileHandleCount = *(__m256i *)&v32.fileCacheFileHandleCount;
  *(_OWORD *)&v35.statisticsEnabled = *(_OWORD *)&v32.statisticsEnabled;
  *(_QWORD *)&v35.arkVersion = 0x100000000i64;
  v33 = indyfs_memory_size(fileCount, chunkCount, &v35);
  v15 = v33;
  PMem_BeginAlloc("IndyFs", PMEM_STACK_GAME);
  memoryBlock = PMem_Alloc(v15, 0x10ui64, MEM_POOL_MAIN, PMEM_STACK_GAME, "IndyFsInternal");
  v16 = (IndyFsFileSystem *)PMem_Alloc(0x16018ui64, 8ui64, MEM_POOL_MAIN, PMEM_STACK_GAME, "IndyFsFileSystemClass");
  PMem_EndAlloc("IndyFs", PMEM_STACK_GAME);
  if ( !memoryBlock || !v16 )
  {
    Com_PrintError(10, "IndyFs: Failed to allocate memory\n");
    return 0i64;
  }
  Com_Printf(10, "IndyFs: Free space given from cli: %zu\n", v13);
  Com_Printf(10, "IndyFs - INFO: Pruning local cache folder [%s]\n", "D:\\indyfs_localcache");
  v28 = Sys_Milliseconds();
  bytesDeleted = 0i64;
  if ( indyfs_prune_filecache_folder("D:\\indyfs_localcache", 0xC8ui64, 0x64ui64, memoryBlock, v15, v13, &bytesDeleted) )
  {
    Com_PrintError(10, "IndyFs - ERROR: Failed to prune LocalCache folder. \n");
    return 0i64;
  }
  v17 = Sys_Milliseconds();
  Com_Printf(10, "Pruning finished\n");
  Com_Printf(10, "IndyFs - INFO: Start free space: %zu bytes - End free space: %zu bytes\n", v13, v13 + bytesDeleted);
  v18 = v17 - v28;
  v19 = (float)(__int64)bytesDeleted;
  if ( (bytesDeleted & 0x8000000000000000ui64) != 0i64 )
  {
    v20 = (float)(__int64)bytesDeleted;
    v19 = v20 + 1.8446744e19;
  }
  Com_Printf(10, "IndyFs - INFO: Deleted %zu bytes in %d ms - [%.2f] b/s\n", bytesDeleted, (unsigned int)v18, (float)(v19 / (float)v18));
  *(_OWORD *)&v32.statisticsEnabled = v14;
  *(double *)&v32.arkVersion = COERCE_DOUBLE(0x100000000i64);
  if ( indyfs_init(v37, "D:\\indyfs_localcache", memoryBlock, v33, _Buffer, string, fileCount, chunkCount, "D:\\profile.json", "D:\\samples.csv", &v32) )
  {
    Com_PrintError(10, "IndyFs - ERROR: indyfs_init() failed. \n");
    return 0i64;
  }
  Cmd_AddCommandInternal("indyfs_close_profiler", CloseProfilerFile, &CloseProfilerFile_VAR);
  Cmd_AddCommandInternal("indyfs_close_statistics", CloseStatisticsFile, &CloseStatisticsFile_VAR);
  Sys_SpawnIndyFsWorkerThread(IndyFsIOQueue_Thread, THREAD_CONTEXT_INDY_FILESYSTEM_IOQUEUE_0, 0x10u);
  Sys_SpawnIndyFsWorkerThread(IndyFsHTTPQueue_Thread, THREAD_CONTEXT_INDY_FILESYSTEM_HTTPQUEUE_0, 0x18u);
  Sys_SpawnIndyFsWorkerThread(IndyFsHTTPQueue_Thread, THREAD_CONTEXT_INDY_FILESYSTEM_HTTPQUEUE_1, 0x18u);
  if ( s_indyFs && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_filesys_indy.cpp", 180, ASSERT_TYPE_ASSERT, "(s_indyFs == nullptr)", (const char *)&queryFormat, "s_indyFs == nullptr") )
    __debugbreak();
  memset_0(v16, 0, sizeof(IndyFsFileSystem));
  s_indyFs = v16;
  v16->__vftable = (IndyFsFileSystem_vtbl *)&IndyFsFileSystem::`vftable';
  v21 = v34;
  v22 = 256i64;
  v16->m_openBehavior = v6;
  p_taskInProgress = &v16->m_files[0].taskInProgress;
  v16->m_fallbackFs = v21;
  do
  {
    if ( (((_BYTE)p_taskInProgress - 40) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 93, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", (const void *)(p_taskInProgress - 10)) )
      __debugbreak();
    _InterlockedExchange(p_taskInProgress - 10, 0);
    if ( ((unsigned __int8)p_taskInProgress & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 93, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", (const void *)p_taskInProgress) )
      __debugbreak();
    _InterlockedExchange(p_taskInProgress, 0);
    p_taskInProgress += 76;
    --v22;
  }
  while ( v22 );
  p_inUse = &v16->m_reads[0].inUse;
  do
  {
    if ( ((unsigned __int8)p_inUse & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 93, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", (const void *)p_inUse) )
      __debugbreak();
    _InterlockedExchange(p_inUse, 0);
    p_inUse += 12;
    --v9;
  }
  while ( v9 );
  v25 = Sys_DefaultInstallPath();
  do
    ++v11;
  while ( v25[v11] );
  result = s_indyFs;
  s_installPathLen = v11;
  return result;
}

/*
==============
IndyFsFileSystem::Exists
==============
*/
bool IndyFsFileSystem::Exists(IndyFsFileSystem *this, Sys_Folder folder, const char *filename)
{
  FileSysOpenBehavior m_openBehavior; 
  __int32 v7; 
  __int32 v8; 
  char path[256]; 

  Sys_BuildRelativePath(path, 256, folder, filename, (const char *)&queryFormat.fmt + 3);
  m_openBehavior = this->m_openBehavior;
  if ( m_openBehavior == IndyOnly )
    return indyfs_exists(path);
  v7 = m_openBehavior - 1;
  if ( v7 )
  {
    v8 = v7 - 1;
    if ( v8 )
    {
      if ( v8 != 1 )
      {
        Com_Printf(10, "IndyFs - ERROR: Unimplemented FileSysOpenBehavior\n");
        return 0;
      }
      if ( !this->m_fallbackFs->Exists(this->m_fallbackFs, folder, filename) )
        return indyfs_exists(path);
      return 1;
    }
    if ( indyfs_exists(path) )
      return 1;
  }
  return this->m_fallbackFs->Exists(this->m_fallbackFs, folder, filename);
}

/*
==============
IndyFsFileSystem::FreeFile
==============
*/
void IndyFsFileSystem::FreeFile(IndyFsFileSystem *this, IndyFsFileNode *file)
{
  if ( ((unsigned __int8)file & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 93, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", file) )
    __debugbreak();
  _InterlockedExchange(&file->inUse, 0);
}

/*
==============
IndyFsFileSystem::FreeReadContext
==============
*/
void IndyFsFileSystem::FreeReadContext(IndyFsFileSystem *this, IndyFsReadContext *context)
{
  if ( ((unsigned __int8)context & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 93, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", context) )
    __debugbreak();
  _InterlockedExchange(&context->inUse, 0);
}

/*
==============
IndyFsFileSystem::GetType
==============
*/
__int64 IndyFsFileSystem::GetType(IndyFsFileSystem *this)
{
  return 1i64;
}

/*
==============
IndyFsCallbackFunction
==============
*/
void IndyFsCallbackFunction(IndyFsTaskState finalState, unsigned __int64 bytesRead, void *data)
{
  __int32 v6; 
  __int32 v7; 
  __int64 v8; 

  if ( !data && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_filesys_indy.cpp", 532, ASSERT_TYPE_ASSERT, "(context)", (const char *)&queryFormat, "context") )
    __debugbreak();
  v6 = finalState - 2;
  if ( v6 )
  {
    v7 = v6 - 1;
    if ( v7 )
    {
      if ( v7 == 1 )
        v8 = 4i64;
      else
        v8 = 2i64;
    }
    else
    {
      v8 = 1i64;
    }
  }
  else
  {
    v8 = 0i64;
  }
  (*((void (__fastcall **)(_QWORD, __int64, unsigned __int64))data + 1))(*((_QWORD *)data + 2), v8, bytesRead);
  if ( ((unsigned __int8)data & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 93, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", data) )
    __debugbreak();
  _InterlockedExchange((volatile __int32 *)data, 0);
}

/*
==============
IndyFsHTTPQueue_Thread
==============
*/
void IndyFsHTTPQueue_Thread(unsigned int threadContext)
{
  const char *ThreadContextName; 

  ThreadContextName = Sys_GetThreadContextName((ThreadContext)threadContext);
  indyfs_http_queue_thread_main(ThreadContextName);
  Sys_ShutdownThreadDone((ThreadContext)threadContext);
}

/*
==============
IndyFsIOQueue_Thread
==============
*/
void IndyFsIOQueue_Thread(unsigned int threadContext)
{
  const char *ThreadContextName; 

  ThreadContextName = Sys_GetThreadContextName((ThreadContext)threadContext);
  indyfs_io_queue_thread_main(ThreadContextName);
  Sys_ShutdownThreadDone((ThreadContext)threadContext);
}

/*
==============
IndyFsLogCallback
==============
*/
void IndyFsLogCallback(IndyFsLogLevel level, const char *line)
{
  __int32 v2; 

  if ( level )
  {
    v2 = level - 2;
    if ( v2 )
    {
      if ( v2 == 1 )
        Com_Printf(10, "IndyFs - ERROR: %s\n", line);
      else
        Com_Printf(10, "IndyFs - INFO: %s\n", line);
    }
    else
    {
      Com_Printf(10, "IndyFs - WARNING: %s\n", line);
    }
  }
  else
  {
    Com_Printf(10, "IndyFs - DEBUG: %s\n", line);
  }
}

/*
==============
IndyFsFileSystem::Initialize
==============
*/
void IndyFsFileSystem::Initialize(IndyFsFileSystem *this, FileSysOpenBehavior openBehavior, DB_FileSysInterface *fallbackFs)
{
  __int64 v3; 
  __int64 v4; 
  volatile int *p_taskInProgress; 
  IndyFsReadContext *m_reads; 

  v3 = 256i64;
  this->m_openBehavior = openBehavior;
  v4 = 256i64;
  this->m_fallbackFs = fallbackFs;
  p_taskInProgress = &this->m_files[0].taskInProgress;
  do
  {
    if ( (((_BYTE)p_taskInProgress - 40) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 93, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", (const void *)(p_taskInProgress - 10)) )
      __debugbreak();
    _InterlockedExchange(p_taskInProgress - 10, 0);
    if ( ((unsigned __int8)p_taskInProgress & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 93, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", (const void *)p_taskInProgress) )
      __debugbreak();
    _InterlockedExchange(p_taskInProgress, 0);
    p_taskInProgress += 76;
    --v4;
  }
  while ( v4 );
  m_reads = this->m_reads;
  do
  {
    if ( ((unsigned __int8)m_reads & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 93, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", m_reads) )
      __debugbreak();
    _InterlockedExchange(&m_reads->inUse, 0);
    ++m_reads;
    --v3;
  }
  while ( v3 );
}

/*
==============
IndyFsFileSystem::OpenFile
==============
*/
IndyFsFileNode *IndyFsFileSystem::OpenFile(IndyFsFileSystem *this, Sys_Folder folder, const char *filename, int flags)
{
  FileSysOpenBehavior m_openBehavior; 
  __int32 v9; 
  __int32 v10; 
  IndyFsFileNode *result; 
  struct DB_IFileSysFile *v12; 
  IndyFsFile *v13; 
  char path[256]; 

  Sys_BuildRelativePath(path, 256, folder, filename, (const char *)&queryFormat.fmt + 3);
  m_openBehavior = this->m_openBehavior;
  if ( m_openBehavior == IndyOnly )
  {
LABEL_8:
    v13 = indyfs_open(path);
    if ( !v13 )
      return 0i64;
    goto LABEL_9;
  }
  v9 = m_openBehavior - 1;
  if ( !v9 )
    goto LABEL_11;
  v10 = v9 - 1;
  if ( !v10 )
  {
    v13 = indyfs_open(path);
    if ( v13 )
    {
LABEL_9:
      result = IndyFsFileSystem::AllocFile(this);
      result->fileType = IndyImage;
      result->indyFsFileHandle = v13;
      return result;
    }
LABEL_11:
    v12 = this->m_fallbackFs->OpenFile(this->m_fallbackFs, (unsigned int)folder, filename, (unsigned int)flags);
    if ( !v12 )
      return 0i64;
    goto LABEL_12;
  }
  if ( v10 != 1 )
  {
    Com_Printf(10, "IndyFs - ERROR: Unimplemented FileSysOpenBehavior\n");
    return 0i64;
  }
  v12 = this->m_fallbackFs->OpenFile(this->m_fallbackFs, (unsigned int)folder, filename, (unsigned int)flags);
  if ( !v12 )
    goto LABEL_8;
LABEL_12:
  result = IndyFsFileSystem::AllocFile(this);
  result->fileType = Fallback;
  result->indyFsFileHandle = (IndyFsFile *)v12;
  return result;
}

/*
==============
IndyFsFileSystem::PrintLeakedHandles
==============
*/
void IndyFsFileSystem::PrintLeakedHandles(IndyFsFileSystem *this)
{
  __int64 v1; 
  IndyFsFileNode *m_files; 
  __int64 v3; 

  v1 = 0i64;
  m_files = this->m_files;
  v3 = 256i64;
  do
  {
    if ( ((unsigned __int8)m_files & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", m_files) )
      __debugbreak();
    if ( _InterlockedCompareExchange(&m_files->inUse, 1, 1) == 1 )
    {
      ++v1;
      Com_Printf(10, "IndyFs - ERROR: File Handle Leaked: %s\n", m_files->filename);
    }
    ++m_files;
    --v3;
  }
  while ( v3 );
  if ( v1 )
    Com_Printf(10, "IndyFs - ERROR: Leaked %zu File Handles during shutdown\n", v1);
}

/*
==============
IndyFsFileSystem::ReadBlocking
==============
*/
__int64 IndyFsFileSystem::ReadBlocking(IndyFsFileSystem *this, struct DB_IFileSysFile *handle, unsigned __int64 offset, unsigned __int64 size, void *dest, unsigned __int64 *numBytesRead, int priority, int endDeadline)
{
  int v13; 
  int deadline; 
  unsigned __int64 bytesRead[3]; 
  IndyFsTaskState taskResult; 

  if ( !handle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_filesys_indy.cpp", 480, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
    __debugbreak();
  if ( *((_DWORD *)handle + 1) == 1 )
    return ((__int64 (__fastcall *)(DB_FileSysInterface *, struct DB_IFileSysFile *, unsigned __int64, unsigned __int64, void *, unsigned __int64 *, int, int))this->m_fallbackFs->ReadBlocking)(this->m_fallbackFs, handle, offset, size, dest, numBytesRead, priority, endDeadline);
  v13 = Sys_Milliseconds();
  deadline = endDeadline + indyfs_time_now_ms() - v13;
  if ( endDeadline - v13 <= 0 )
    deadline = 0x7FFFFFFF;
  if ( indyfs_read(*((IndyFsFile **)handle + 1), dest, offset, size, bytesRead, &taskResult, deadline) )
  {
    Com_Printf(10, "IndyFs - ERROR: Failed to read\n");
    return 2i64;
  }
  if ( numBytesRead )
    *numBytesRead = bytesRead[0];
  if ( taskResult == Canceled )
    return 0i64;
  if ( taskResult == Error )
    return 1i64;
  if ( taskResult != 4 )
    return 2i64;
  return 4i64;
}

/*
==============
IndyFsFileSystem::Seek
==============
*/
unsigned __int64 IndyFsFileSystem::Seek(IndyFsFileSystem *this, struct DB_IFileSysFile *handle, const unsigned __int64 pos)
{
  return pos;
}

/*
==============
IndyFsFileSystem::Shutdown
==============
*/
void IndyFsFileSystem::Shutdown(IndyFsFileSystem *this)
{
  __int64 v2; 
  IndyFsFileNode *m_files; 
  __int64 v4; 
  StreamerMemLoan result; 

  if ( s_indyFs )
  {
    indyfs_http_queue_quit();
    indyfs_io_queue_quit();
    Sys_JoinIndyFsWorkerThread(THREAD_CONTEXT_INDY_FILESYSTEM_IOQUEUE_0);
    Sys_JoinIndyFsWorkerThread(THREAD_CONTEXT_INDY_FILESYSTEM_HTTPQUEUE_0);
    Sys_JoinIndyFsWorkerThread(THREAD_CONTEXT_INDY_FILESYSTEM_HTTPQUEUE_1);
    indyfs_term();
    v2 = 0i64;
    m_files = this->m_files;
    v4 = 256i64;
    do
    {
      if ( ((unsigned __int8)m_files & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", m_files) )
        __debugbreak();
      if ( _InterlockedCompareExchange(&m_files->inUse, 1, 1) == 1 )
      {
        ++v2;
        Com_Printf(10, "IndyFs - ERROR: File Handle Leaked: %s\n", m_files->filename);
      }
      ++m_files;
      --v4;
    }
    while ( v4 );
    if ( v2 )
      Com_Printf(10, "IndyFs - ERROR: Leaked %zu File Handles during shutdown\n", v2);
    PMem_Free(&result, "IndyFs", PMEM_STACK_GAME);
    StreamerMemLoan::~StreamerMemLoan(&result);
  }
}

/*
==============
IndyFsFileSystem::Size
==============
*/
unsigned __int64 IndyFsFileSystem::Size(IndyFsFileSystem *this, struct DB_IFileSysFile *handle)
{
  if ( !handle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_filesys_indy.cpp", 423, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
    __debugbreak();
  if ( *((_DWORD *)handle + 1) == 1 )
    return this->m_fallbackFs->Size(this->m_fallbackFs, (struct DB_IFileSysFile *)*((_QWORD *)handle + 1));
  else
    return indyfs_filesize(*((IndyFsFile **)handle + 1));
}

/*
==============
IndyFsFileSystem::StartRead
==============
*/
IndyFsReadContext *IndyFsFileSystem::StartRead(IndyFsFileSystem *this, struct DB_IFileSysFile *handle, unsigned __int64 offset, unsigned __int64 size, void *dest, void (*cbfn)(void *, FileSysResult, unsigned __int64), void *cbContext, FileStreamPriority priority, int endDeadline)
{
  int v14; 
  IndyFsReadContext *v15; 
  int v16; 
  int v17; 
  void (__fastcall *callback)(IndyFsTaskState, unsigned __int64, void *); 
  int v19; 
  void *callbackData; 

  if ( !handle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_filesys_indy.cpp", 566, ASSERT_TYPE_ASSERT, "(node)", (const char *)&queryFormat, "node") )
    __debugbreak();
  if ( *((_DWORD *)handle + 1) == 1 )
    return (IndyFsReadContext *)((__int64 (__fastcall *)(DB_FileSysInterface *, struct DB_IFileSysFile *, unsigned __int64, unsigned __int64))this->m_fallbackFs->StartRead)(this->m_fallbackFs, handle, offset, size);
  v14 = 0;
  while ( 1 )
  {
    v15 = &this->m_reads[v14];
    if ( ((unsigned __int8)v15 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &this->m_reads[v14]) )
      __debugbreak();
    if ( !_InterlockedCompareExchange(&v15->inUse, 1, 0) )
      break;
    if ( (unsigned int)++v14 >= 0x100 )
    {
      Sys_Error((const ObfuscateErrorText)&stru_143D1F860, 256i64);
      v15 = NULL;
      break;
    }
  }
  v15->callback = cbfn;
  v15->callbackContext = cbContext;
  v16 = Sys_Milliseconds();
  v17 = indyfs_time_now_ms();
  callback = IndyFsCallbackFunction;
  v19 = endDeadline + v17 - v16;
  callbackData = v15;
  if ( endDeadline - v16 <= 0 )
    v19 = 0x7FFFFFFF;
  if ( !v15->callback )
  {
    callbackData = NULL;
    if ( !v15->callback )
      callback = NULL;
  }
  if ( !indyfs_read_async(*((IndyFsFile **)handle + 1), dest, offset, size, v19, &v15->taskHandle, callback, callbackData) )
    return v15;
  Com_Printf(10, "IndyFs - ERROR: Failed to push read task\n");
  return 0i64;
}


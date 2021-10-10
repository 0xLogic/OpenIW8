/*
==============
indyfs_get_state
==============
*/

IndyFsTaskState __fastcall indyfs_get_state(IndyFsTaskHandle *handle)
{
  return ?indyfs_get_state@@YA?AW4IndyFsTaskState@@PEAUIndyFsTaskHandle@@@Z(handle);
}

/*
==============
indyfs_cancel
==============
*/

void __fastcall indyfs_cancel(IndyFsTaskHandle *handle)
{
  ?indyfs_cancel@@YAXPEAUIndyFsTaskHandle@@@Z(handle);
}

/*
==============
indyfs_term
==============
*/

int __fastcall indyfs_term()
{
  return ?indyfs_term@@YAHXZ();
}

/*
==============
indyfs_http_queue_thread_start
==============
*/

unsigned int __fastcall indyfs_http_queue_thread_start(void *arg)
{
  return ?indyfs_http_queue_thread_start@@YAIPEAX@Z(arg);
}

/*
==============
indyfs_foreach_file
==============
*/

int __fastcall indyfs_foreach_file(int (__fastcall *callback)(void *, IndyFsFile *), void *userData)
{
  return ?indyfs_foreach_file@@YAHP6AHPEAXPEAUIndyFsFile@@@Z0@Z(callback, userData);
}

/*
==============
indyfs_filepath
==============
*/

const char *__fastcall indyfs_filepath(IndyFsFile *file)
{
  return ?indyfs_filepath@@YAPEBDPEAUIndyFsFile@@@Z(file);
}

/*
==============
indyfs_open
==============
*/

IndyFsFile *__fastcall indyfs_open(const char *filePath)
{
  return ?indyfs_open@@YAPEAUIndyFsFile@@PEBD@Z(filePath);
}

/*
==============
indyfs_get_io_task_queue
==============
*/

IndyFsIOTaskQueue *__fastcall indyfs_get_io_task_queue()
{
  return ?indyfs_get_io_task_queue@@YAPEAUIndyFsIOTaskQueue@@XZ();
}

/*
==============
indyfs_wait_until_finished
==============
*/

IndyFsTaskState __fastcall indyfs_wait_until_finished(IndyFsTaskHandle *handle)
{
  return ?indyfs_wait_until_finished@@YA?AW4IndyFsTaskState@@PEAUIndyFsTaskHandle@@@Z(handle);
}

/*
==============
indyfs_close
==============
*/

int __fastcall indyfs_close(IndyFsFile *file)
{
  return ?indyfs_close@@YAHPEAUIndyFsFile@@@Z(file);
}

/*
==============
indyfs_get_caching_behavior
==============
*/

IndyFsLocalCaching __fastcall indyfs_get_caching_behavior()
{
  return ?indyfs_get_caching_behavior@@YA?AW4IndyFsLocalCaching@@XZ();
}

/*
==============
indyfs_init
==============
*/

int __fastcall indyfs_init(const char *storageServerUrl, const char *localFileCachePath, void *memoryBlock, unsigned __int64 memoryBlockSize, const char *imageFilePath, const char *workingDirectoryInImage, unsigned int fileCount, unsigned __int64 chunkCount, const char *profilerOutputFile, const char *statisticsOutputFile, const IndyFsInitOptions *options)
{
  return ?indyfs_init@@YAHPEBD0PEAX_K00I200UIndyFsInitOptions@@@Z(storageServerUrl, localFileCachePath, memoryBlock, memoryBlockSize, imageFilePath, workingDirectoryInImage, fileCount, chunkCount, profilerOutputFile, statisticsOutputFile, options);
}

/*
==============
indyfs_memory_size
==============
*/

unsigned __int64 __fastcall indyfs_memory_size(unsigned int fileCount, unsigned __int64 chunkCount, const IndyFsInitOptions *options)
{
  return ?indyfs_memory_size@@YA_KI_KUIndyFsInitOptions@@@Z(fileCount, chunkCount, options);
}

/*
==============
indyfs_io_queue_thread_start
==============
*/

unsigned int __fastcall indyfs_io_queue_thread_start(void *arg)
{
  return ?indyfs_io_queue_thread_start@@YAIPEAX@Z(arg);
}

/*
==============
indyfs_get_http_task_queue
==============
*/

IndyFsHttpTaskQueue *__fastcall indyfs_get_http_task_queue()
{
  return ?indyfs_get_http_task_queue@@YAPEAUIndyFsHttpTaskQueue@@XZ();
}

/*
==============
indyfs_prefetch
==============
*/

int __fastcall indyfs_prefetch(IndyFsFile *file)
{
  return ?indyfs_prefetch@@YAHPEAUIndyFsFile@@@Z(file);
}

/*
==============
indyfs_read
==============
*/

int __fastcall indyfs_read(IndyFsFile *file, void *dest, unsigned __int64 offset, unsigned __int64 size, unsigned __int64 *bytesRead, IndyFsTaskState *taskResult, int deadline)
{
  return ?indyfs_read@@YAHPEAUIndyFsFile@@PEAX_K2PEA_KPEAW4IndyFsTaskState@@H@Z(file, dest, offset, size, bytesRead, taskResult, deadline);
}

/*
==============
indyfs_read_async
==============
*/

int __fastcall indyfs_read_async(IndyFsFile *file, void *dest, unsigned __int64 offset, unsigned __int64 size, int deadline, IndyFsTaskHandle *handle, void (__fastcall *callback)(IndyFsTaskState, unsigned __int64, void *), void *callbackData)
{
  return ?indyfs_read_async@@YAHPEAUIndyFsFile@@PEAX_K2HPEAUIndyFsTaskHandle@@P6AXW4IndyFsTaskState@@21@Z1@Z(file, dest, offset, size, deadline, handle, callback, callbackData);
}

/*
==============
indyfs_exists
==============
*/

bool __fastcall indyfs_exists(const char *filePath)
{
  return ?indyfs_exists@@YA_NPEBD@Z(filePath);
}

/*
==============
indyfs_filesize
==============
*/

unsigned __int64 __fastcall indyfs_filesize(IndyFsFile *file)
{
  return ?indyfs_filesize@@YA_KPEAUIndyFsFile@@@Z(file);
}

/*
==============
indyfs_get_bytes_read
==============
*/

unsigned __int64 __fastcall indyfs_get_bytes_read(IndyFsTaskHandle *handle)
{
  return ?indyfs_get_bytes_read@@YA_KPEAUIndyFsTaskHandle@@@Z(handle);
}

/*
==============
indyfs_free_decompression_scratchpad
==============
*/

void __fastcall indyfs_free_decompression_scratchpad(void *scratchPad)
{
  ?indyfs_free_decompression_scratchpad@@YAXPEAX@Z(scratchPad);
}

/*
==============
indyfs_alloc_decompression_scratchpad
==============
*/

void *__fastcall indyfs_alloc_decompression_scratchpad()
{
  return ?indyfs_alloc_decompression_scratchpad@@YAPEAXXZ();
}

/*
==============
indyfs_get_filecache
==============
*/

IndyFsFileCache *__fastcall indyfs_get_filecache()
{
  return ?indyfs_get_filecache@@YAPEAUIndyFsFileCache@@XZ();
}

/*
==============
indyfs_prefetch
==============
*/

int __fastcall indyfs_prefetch(IndyFsFile *file, unsigned __int64 offset, unsigned __int64 size)
{
  return ?indyfs_prefetch@@YAHPEAUIndyFsFile@@_K1@Z(file, offset, size);
}

/*
==============
indyfs_get_storage_server_info
==============
*/

IndyFsStorageServerInfo *__fastcall indyfs_get_storage_server_info()
{
  return ?indyfs_get_storage_server_info@@YAPEAUIndyFsStorageServerInfo@@XZ();
}

/*
==============
indyfs_alloc_decompression_scratchpad
==============
*/
char *indyfs_alloc_decompression_scratchpad()
{
  char *v0; 
  int v1; 
  __int64 v2; 
  IndyFsState *v3; 
  __int64 decompressionScratchPadCount; 
  bool *decompressionScratchPadsInUse; 
  IndyFsScopedEvent v7; 

  IndyFsScopedEvent::IndyFsScopedEvent(&v7, "IndyFs", "AllocScratchPad");
  if ( g_indyfs->decompressionScratchPadCount )
  {
    indyfs_mutex_lock((LPCRITICAL_SECTION)&g_indyfs->decompressionScratchPadLock);
    while ( 1 )
    {
      v1 = 0;
      v2 = 0i64;
      v3 = g_indyfs;
      decompressionScratchPadCount = g_indyfs->decompressionScratchPadCount;
      if ( (int)decompressionScratchPadCount > 0 )
        break;
LABEL_8:
      indyfs_condition_variable_wait(&g_indyfs->decompressionScratchPadsNotAllClaimed, &g_indyfs->decompressionScratchPadLock);
    }
    decompressionScratchPadsInUse = g_indyfs->decompressionScratchPadsInUse;
    while ( decompressionScratchPadsInUse[v2] )
    {
      ++v1;
      if ( ++v2 >= decompressionScratchPadCount )
        goto LABEL_8;
    }
    decompressionScratchPadsInUse[v1] = 1;
    indyfs_mutex_unlock((LPCRITICAL_SECTION)&v3->decompressionScratchPadLock);
    indyfs_statistics_internal_add_count("IndyFs", "AllocScratchPadIndex", v1);
    v0 = (char *)g_indyfs->decompressionScratchPadPool + 131076 * v1;
  }
  else
  {
    indyfs_log_message(Error, "No decompression scratchpads are available from init. Set IndyFsOptions.scratchpadCount > 0");
    v0 = NULL;
  }
  IndyFsScopedEvent::~IndyFsScopedEvent(&v7);
  return v0;
}

/*
==============
indyfs_cancel
==============
*/

void __fastcall indyfs_cancel(IndyFsTaskHandle *handle)
{
  indyfs_io_queue_cancel(handle);
}

/*
==============
indyfs_close
==============
*/
__int64 indyfs_close(IndyFsFile *file)
{
  return 0i64;
}

/*
==============
indyfs_exists
==============
*/
char indyfs_exists(const char *filePath)
{
  int v1; 
  char *p_dest; 
  unsigned __int64 v4; 
  char dest; 
  char v7; 

  v1 = 0;
  if ( !g_indyfs->image.fileCount )
    return 0;
  while ( 1 )
  {
    if ( *filePath == 47 || *filePath == 92 )
    {
      p_dest = &dest;
      v4 = 260i64;
    }
    else
    {
      dest = 47;
      p_dest = &v7;
      v4 = 259i64;
    }
    indyfs_strlcpy(p_dest, filePath, v4);
    indyfs_path_to_unix(&dest);
    if ( !strncmp(&dest, g_indyfs->image.files[v1].path, 0x104ui64) )
      break;
    if ( ++v1 >= g_indyfs->image.fileCount )
      return 0;
  }
  return 1;
}

/*
==============
indyfs_filepath
==============
*/
IndyFsFile *indyfs_filepath(IndyFsFile *file)
{
  return file;
}

/*
==============
indyfs_filesize
==============
*/

__int64 __fastcall indyfs_filesize(IndyFsFile *file, double _XMM1_8, double _XMM2_8)
{
  unsigned __int64 chunkCount; 
  __int64 v4; 
  __int64 v6; 
  unsigned __int64 v7; 
  IndyFsChunk *chunks; 
  __int64 v9; 
  __int64 v21; 
  IndyFsChunk *v22; 
  __int64 v23; 
  unsigned __int64 v24; 

  chunkCount = file->chunkCount;
  v4 = 0i64;
  v6 = 0i64;
  v7 = 0i64;
  if ( chunkCount >= 4 )
  {
    chunks = file->chunks;
    v9 = 0i64;
    __asm
    {
      vpxor   xmm1, xmm1, xmm1
      vpxor   xmm2, xmm2, xmm2
    }
    do
    {
      _XMM0 = chunks[v9].size;
      __asm
      {
        vmovhpd xmm0, xmm0, qword ptr [rax+r9+38h]
        vpaddq  xmm1, xmm0, xmm1
      }
      _XMM0 = chunks[v9 + 2].size;
      __asm { vmovhpd xmm0, xmm0, qword ptr [rax+r9+78h] }
      v7 += 4i64;
      v9 += 4i64;
      __asm { vpaddq  xmm2, xmm0, xmm2 }
    }
    while ( v7 < (chunkCount & 0xFFFFFFFFFFFFFFFCui64) );
    __asm
    {
      vpaddq  xmm1, xmm2, xmm1
      vpsrldq xmm0, xmm1, 8
      vpaddq  xmm1, xmm1, xmm0
    }
    v6 = _XMM1;
  }
  v21 = 0i64;
  if ( v7 >= chunkCount )
    return v6;
  if ( chunkCount - v7 >= 2 )
  {
    v22 = file->chunks;
    v23 = v7;
    v24 = ((chunkCount - v7 - 2) >> 1) + 1;
    v7 += 2 * v24;
    do
    {
      v4 += v22[v23].size;
      v21 += v22[v23 + 1].size;
      v23 += 2i64;
      --v24;
    }
    while ( v24 );
  }
  if ( v7 < chunkCount )
    v6 += file->chunks[v7].size;
  return v6 + v21 + v4;
}

/*
==============
indyfs_foreach_file
==============
*/
__int64 indyfs_foreach_file(int (*callback)(void *, IndyFsFile *), void *userData)
{
  IndyFsState *v2; 
  unsigned int v3; 
  unsigned __int64 v6; 
  __int64 v7; 
  int v8; 

  v2 = g_indyfs;
  v3 = 0;
  v6 = 0i64;
  if ( g_indyfs->image.fileCount )
  {
    v7 = 0i64;
    do
    {
      v8 = callback(userData, &v2->image.files[v7]);
      v2 = g_indyfs;
      if ( v8 )
        v3 = -1;
      ++v6;
      ++v7;
    }
    while ( v6 < g_indyfs->image.fileCount );
  }
  return v3;
}

/*
==============
indyfs_free_decompression_scratchpad
==============
*/
void indyfs_free_decompression_scratchpad(void *scratchPad)
{
  unsigned __int64 v1; 
  _RTL_CRITICAL_SECTION *p_decompressionScratchPadLock; 

  v1 = ((unsigned __int64)scratchPad - (unsigned __int64)g_indyfs->decompressionScratchPadPool) / 0x20004;
  indyfs_mutex_lock((LPCRITICAL_SECTION)&g_indyfs->decompressionScratchPadLock);
  p_decompressionScratchPadLock = (_RTL_CRITICAL_SECTION *)&g_indyfs->decompressionScratchPadLock;
  g_indyfs->decompressionScratchPadsInUse[v1] = 0;
  indyfs_mutex_unlock(p_decompressionScratchPadLock);
  indyfs_condition_variable_signal_one((PCONDITION_VARIABLE)&g_indyfs->decompressionScratchPadsNotAllClaimed);
}

/*
==============
indyfs_get_bytes_read
==============
*/

unsigned __int64 __fastcall indyfs_get_bytes_read(IndyFsTaskHandle *handle)
{
  return indyfs_io_queue_get_bytes_read(handle);
}

/*
==============
indyfs_get_caching_behavior
==============
*/
__int64 indyfs_get_caching_behavior()
{
  return (unsigned int)g_indyfs->cachingBehavior;
}

/*
==============
indyfs_get_filecache
==============
*/
IndyFsFileCache *indyfs_get_filecache()
{
  return g_indyfs->fileCache;
}

/*
==============
indyfs_get_http_task_queue
==============
*/
IndyFsHttpTaskQueue *indyfs_get_http_task_queue()
{
  return &g_indyfs->httpTaskQueue;
}

/*
==============
indyfs_get_io_task_queue
==============
*/
IndyFsIOTaskQueue *indyfs_get_io_task_queue()
{
  return &g_indyfs->ioTaskQueue;
}

/*
==============
indyfs_get_state
==============
*/

IndyFsTaskState __fastcall indyfs_get_state(IndyFsTaskHandle *handle)
{
  return indyfs_io_queue_get_state(handle);
}

/*
==============
indyfs_get_storage_server_info
==============
*/
IndyFsState *indyfs_get_storage_server_info()
{
  return g_indyfs;
}

/*
==============
indyfs_http_queue_thread_start
==============
*/
__int64 indyfs_http_queue_thread_start(void *arg)
{
  char dest[56]; 

  indyfs_strlcpy(dest, (const char *)arg + 4, 0x32ui64);
  indyfs_atomic_exchange((volatile unsigned int *)arg, 1u);
  indyfs_http_queue_thread_main(dest);
  return 0i64;
}

/*
==============
indyfs_init
==============
*/
__int64 indyfs_init(const char *storageServerUrl, const char *localFileCachePath, void *memoryBlock, unsigned __int64 memoryBlockSize, const char *imageFilePath, const char *workingDirectoryInImage, unsigned int fileCount, unsigned __int64 chunkCount, const char *profilerOutputFile, const char *statisticsOutputFile, const IndyFsInitOptions *options)
{
  __int64 v11; 
  __int64 v12; 
  __int64 v13; 
  unsigned __int64 v14; 
  unsigned __int64 v15; 
  IndyFsState *v16; 
  char *v17; 
  unsigned __int64 v18; 
  IndyFsFileCache *v19; 
  IndyFsArkVersion arkVersion; 
  IndyFsLocalCaching cachingBehavior; 
  int decompressionScratchPadCount; 
  unsigned int v23; 
  IndyFsState *v24; 
  bool *v25; 
  IndyFsState *v26; 
  __int64 v27; 
  __int64 v28; 
  IndyFsFile *v29; 
  char *v30; 
  size_t v31; 
  unsigned int v32; 
  IndyFsState *v33; 
  __int64 v34; 
  IndyFsFile *v35; 
  unsigned int v36; 
  size_t v37; 
  unsigned __int64 v38; 
  char *v39; 
  unsigned __int64 v40; 
  void **v41; 
  int httpQueueThreadsToCreate; 
  IndyFsState *v43; 
  int v44; 
  __int64 ioQueueThreadsToCreate; 
  int v46; 
  __int64 v47; 
  __int64 v49; 
  IndyFsState *v50; 
  __int64 v51; 
  unsigned __int64 v52; 
  __int64 v53; 
  unsigned __int64 v54; 
  int fileHandleCount[8]; 
  unsigned __int64 bufferSize[2]; 
  __int64 v61; 
  unsigned int arg; 
  char _Buffer[60]; 
  IndyFsScopedEvent v64; 
  char dest; 
  char v66[271]; 

  indyfs_time_init();
  IndyFsScopedEvent::IndyFsScopedEvent(&v64, "IndyFs", "Init");
  if ( !*(_QWORD *)&options->arkVersion )
  {
    indyfs_log_message(Error, "Failed to init IndyFs: Invalid cachingBehavior option. PartialDownload_NoCaching can not be used with Ark V1");
LABEL_69:
    LODWORD(v11) = -1;
    goto LABEL_70;
  }
  *(__m256i *)fileHandleCount = *(__m256i *)&options->fileCacheFileHandleCount;
  *(_OWORD *)bufferSize = *(_OWORD *)&options->statisticsEnabled;
  v61 = *(_QWORD *)&options->arkVersion;
  v11 = 0i64;
  v52 = 0i64;
  if ( HIDWORD(v61) == 1 )
    v52 = indyfs_filecache_size(fileHandleCount[0]);
  v12 = 0i64;
  if ( !(_DWORD)v61 )
    v12 = fileHandleCount[1] + (__int64)(131076 * fileHandleCount[1]);
  v53 = fileCount;
  v54 = 32 * chunkCount;
  v13 = 0i64;
  if ( HIDWORD(v61) == 1 )
    v13 = 8i64 * fileHandleCount[2];
  v14 = indyfs_profiler_size(fileHandleCount[4], *(unsigned __int64 *)&fileHandleCount[6]);
  v15 = v12 + v53 * 280 + v54 + v13 + 8i64 * fileHandleCount[3] + indyfs_statistics_size(bufferSize[0], bufferSize[1]) + v14 + v52 + 10496;
  if ( memoryBlockSize < v15 )
  {
    indyfs_log_message(Error, "Failed to init IndyFs: Memory block too small.\nRequired: %zu  Given: %zu", v15, memoryBlockSize);
    goto LABEL_69;
  }
  v16 = (IndyFsState *)memoryBlock;
  g_indyfs = (IndyFsState *)memoryBlock;
  v17 = (char *)memoryBlock + 10496;
  if ( localFileCachePath && options->cachingBehavior )
  {
    v18 = indyfs_filecache_size(options->fileCacheFileHandleCount);
    v19 = indyfs_filecache_init(localFileCachePath, options->fileCacheFileHandleCount, v17, v18);
    v16 = g_indyfs;
    g_indyfs->fileCache = v19;
    if ( !v19 )
    {
      indyfs_log_message(Error, "Failed to initialize FileCache");
      goto LABEL_69;
    }
    v17 += v18;
  }
  else
  {
    *((_QWORD *)memoryBlock + 194) = 0i64;
  }
  if ( storageServerUrl )
  {
    if ( parse_storage_server_url(storageServerUrl, &v16->storageServerInfo) )
      goto LABEL_69;
    v16 = g_indyfs;
  }
  else
  {
    memset_0(v16, 0, 0x60Cui64);
  }
  arkVersion = options->arkVersion;
  v16->storageServerInfo.arkVersion = arkVersion;
  cachingBehavior = options->cachingBehavior;
  v16->cachingBehavior = cachingBehavior;
  indyfs_io_queue_init(&v16->ioTaskQueue);
  indyfs_http_queue_init(&g_indyfs->httpTaskQueue);
  if ( arkVersion == V2 )
  {
    options->decompressionScratchPadCount = 0;
    decompressionScratchPadCount = 0;
    v23 = 0;
  }
  else
  {
    decompressionScratchPadCount = options->decompressionScratchPadCount;
    v23 = decompressionScratchPadCount;
  }
  v24 = g_indyfs;
  g_indyfs->decompressionScratchPadPool = v17;
  v24->decompressionScratchPadCount = decompressionScratchPadCount;
  v25 = (bool *)&v17[131076 * decompressionScratchPadCount];
  indyfs_mutex_init((LPCRITICAL_SECTION)&v24->decompressionScratchPadLock);
  indyfs_condition_variable_init((PCONDITION_VARIABLE)&g_indyfs->decompressionScratchPadsNotAllClaimed);
  v26 = g_indyfs;
  g_indyfs->decompressionScratchPadsInUse = v25;
  if ( decompressionScratchPadCount > 0 )
  {
    v27 = 0i64;
    v28 = v23;
    do
    {
      v26->decompressionScratchPadsInUse[v27++] = 0;
      --v28;
    }
    while ( v28 );
    decompressionScratchPadCount = v23;
  }
  v29 = (IndyFsFile *)&v25[decompressionScratchPadCount];
  v26->files = v29;
  v26->chunks = (IndyFsChunk *)&v29[v53];
  v30 = &v29[v53].path[v54];
  if ( indyfs_image_parse(&v26->image, v29, fileCount, (IndyFsChunk *)&v29[v53], chunkCount, imageFilePath) )
  {
    indyfs_log_message(Error, "Failed to parse image");
    goto LABEL_69;
  }
  if ( workingDirectoryInImage && *workingDirectoryInImage )
  {
    v31 = indyfs_strlcpy(&dest, workingDirectoryInImage, 0x104ui64);
    if ( v31 >= 0x104 )
    {
LABEL_35:
      indyfs_log_message(Error, "Failed to change working directory in Image. Path too long: %s", workingDirectoryInImage);
      goto LABEL_69;
    }
    indyfs_path_to_unix(&dest);
    if ( dest != 47 )
    {
      if ( ++v31 >= 0x104 )
        goto LABEL_35;
      memmove_0(v66, &dest, v31);
      dest = 47;
    }
    v32 = 0;
    v33 = g_indyfs;
    while ( v32 < v33->image.fileCount )
    {
      v34 = v32;
      v35 = &v33->image.files[v34];
      if ( indyfs_string_startswith(v35->path, &dest) )
      {
        memmove_0(v35, &v35->path[v31], 260 - v31);
        if ( v35->path[0] != 47 )
        {
          v37 = strnlen(v35->path, 0x104ui64);
          memmove_0(&v35->path[1], v35, v37 + 1);
          v35->path[0] = 47;
        }
        ++v32;
        v33 = g_indyfs;
      }
      else
      {
        v33 = g_indyfs;
        v36 = g_indyfs->image.fileCount;
        if ( v32 + 1 < v36 )
        {
          memmove_0(&g_indyfs->image.files[v34], &g_indyfs->image.files[v32 + 1], 280i64 * (v36 - v32 - 1));
          v36 = v33->image.fileCount;
        }
        v33->image.fileCount = v36 - 1;
      }
    }
    cachingBehavior = options->cachingBehavior;
  }
  v38 = indyfs_profiler_size(options->profilerEnabled, options->profilerBufferSize);
  if ( indyfs_profiler_init(options->profilerEnabled, profilerOutputFile, v30, v38) )
  {
    indyfs_log_message(Error, "Failed to init profiler system");
    goto LABEL_69;
  }
  v39 = &v30[v38];
  v40 = indyfs_statistics_size(options->statisticsEnabled, options->statisticsBufferSize);
  if ( indyfs_statistics_init(options->statisticsEnabled, statisticsOutputFile, v39, v40) )
  {
    indyfs_log_message(Error, "Failed to init statistics system");
    goto LABEL_69;
  }
  v41 = (void **)&v39[v40];
  indyfs_statistics_internal_record_caching_info(options->arkVersion, cachingBehavior);
  if ( cachingBehavior )
  {
    httpQueueThreadsToCreate = options->httpQueueThreadsToCreate;
  }
  else
  {
    options->httpQueueThreadsToCreate = 0;
    httpQueueThreadsToCreate = 0;
  }
  v43 = g_indyfs;
  g_indyfs->httpQueueThreadCount = httpQueueThreadsToCreate;
  if ( httpQueueThreadsToCreate > 0 )
  {
    v43->httpQueueThreads = v41;
    v41 += httpQueueThreadsToCreate;
    v44 = 0;
    while ( 1 )
    {
      fileHandleCount[0] = 0;
      j_snprintf((char *const)&fileHandleCount[1], 0x32ui64, "IndyFs-HttpQueue-%u", (unsigned int)v44);
      if ( indyfs_thread_create(0x10000ui64, indyfs_http_queue_thread_start, fileHandleCount, (const char *)&fileHandleCount[1], &g_indyfs->httpQueueThreads[v44]) )
        break;
      while ( indyfs_atomic_compare_and_exchange((volatile unsigned int *)fileHandleCount, 1u, 1u) != 1 )
        indyfs_thread_yield();
      if ( ++v44 >= options->httpQueueThreadsToCreate )
      {
        v43 = g_indyfs;
        goto LABEL_61;
      }
    }
    indyfs_http_queue_quit();
    if ( v44 > 0 )
    {
      do
        indyfs_thread_join(g_indyfs->httpQueueThreads[v11++]);
      while ( v11 < v44 );
    }
    indyfs_http_queue_term(&g_indyfs->httpTaskQueue);
    indyfs_io_queue_term(&g_indyfs->ioTaskQueue);
    indyfs_log_message(Error, "Failed to create http worker threads.");
    goto LABEL_69;
  }
LABEL_61:
  ioQueueThreadsToCreate = options->ioQueueThreadsToCreate;
  v43->ioQueueThreadCount = ioQueueThreadsToCreate;
  if ( (int)ioQueueThreadsToCreate > 0 )
  {
    v43->ioQueueThreads = v41;
    v41 += ioQueueThreadsToCreate;
    v46 = 0;
    while ( 1 )
    {
      arg = 0;
      j_snprintf(_Buffer, 0x32ui64, "IndyFs-IOQueue-%u", (unsigned int)v46);
      v47 = v46;
      if ( indyfs_thread_create(0x10000ui64, indyfs_io_queue_thread_start, &arg, _Buffer, &g_indyfs->ioQueueThreads[v46]) )
        break;
      while ( indyfs_atomic_compare_and_exchange(&arg, 1u, 1u) != 1 )
        indyfs_thread_yield();
      if ( ++v46 >= (int)ioQueueThreadsToCreate )
        goto LABEL_67;
    }
    indyfs_io_queue_quit();
    if ( v46 > 0 )
    {
      v49 = 0i64;
      do
        indyfs_thread_join(g_indyfs->ioQueueThreads[v49++]);
      while ( v49 < v47 );
    }
    v50 = g_indyfs;
    if ( g_indyfs->httpQueueThreadCount > 0 )
    {
      indyfs_http_queue_quit();
      v50 = g_indyfs;
      if ( g_indyfs->httpQueueThreadCount > 0 )
      {
        v51 = 0i64;
        do
        {
          indyfs_thread_join(v50->httpQueueThreads[v51]);
          LODWORD(v11) = v11 + 1;
          ++v51;
          v50 = g_indyfs;
        }
        while ( (int)v11 < g_indyfs->httpQueueThreadCount );
      }
    }
    indyfs_http_queue_term(&v50->httpTaskQueue);
    indyfs_io_queue_term(&g_indyfs->ioTaskQueue);
    indyfs_log_message(Error, "Failed to create io worker threads.");
    goto LABEL_69;
  }
LABEL_67:
  simplehttp_log_init(indyfs_simplehttp_log_callback);
  simplehttp_init();
  if ( (char *)v41 - (_BYTE *)memoryBlock > memoryBlockSize )
  {
    indyfs_log_message(Error, "Failed to init IndyFs - Overran the memory buffer");
    goto LABEL_69;
  }
LABEL_70:
  IndyFsScopedEvent::~IndyFsScopedEvent(&v64);
  return (unsigned int)v11;
}

/*
==============
indyfs_io_queue_thread_start
==============
*/
__int64 indyfs_io_queue_thread_start(void *arg)
{
  char dest[56]; 

  indyfs_strlcpy(dest, (const char *)arg + 4, 0x32ui64);
  indyfs_atomic_exchange((volatile unsigned int *)arg, 1u);
  indyfs_io_queue_thread_main(dest);
  return 0i64;
}

/*
==============
indyfs_memory_size
==============
*/
unsigned __int64 indyfs_memory_size(unsigned int fileCount, unsigned __int64 chunkCount, const IndyFsInitOptions *options)
{
  IndyFsLocalCaching cachingBehavior; 
  __int64 v4; 
  __int64 v5; 
  unsigned __int64 v8; 
  __int64 v9; 
  __int64 v10; 
  unsigned __int64 v11; 
  unsigned __int64 v12; 

  cachingBehavior = options->cachingBehavior;
  v4 = 0i64;
  v5 = fileCount;
  v8 = 0i64;
  if ( cachingBehavior == ChunkDownload_LocalCaching )
    v8 = indyfs_filecache_size(options->fileCacheFileHandleCount);
  v9 = 0i64;
  if ( options->arkVersion == V1 )
    v9 = options->decompressionScratchPadCount + (__int64)(131076 * options->decompressionScratchPadCount);
  v10 = 280 * v5;
  v11 = 32 * chunkCount;
  if ( cachingBehavior == ChunkDownload_LocalCaching )
    v4 = 8i64 * options->httpQueueThreadsToCreate;
  v12 = indyfs_profiler_size(options->profilerEnabled, options->profilerBufferSize);
  return v8 + v9 + v10 + v11 + v4 + v12 + indyfs_statistics_size(options->statisticsEnabled, options->statisticsBufferSize) + 8i64 * options->ioQueueThreadsToCreate + 10496;
}

/*
==============
indyfs_open
==============
*/
IndyFsFile *indyfs_open(const char *filePath)
{
  char *p_dest; 
  unsigned __int64 v3; 
  IndyFsState *v4; 
  unsigned int v5; 
  __int64 v6; 
  char dest; 
  char v9; 

  if ( *filePath == 47 || *filePath == 92 )
  {
    p_dest = &dest;
    v3 = 260i64;
  }
  else
  {
    dest = 47;
    p_dest = &v9;
    v3 = 259i64;
  }
  indyfs_strlcpy(p_dest, filePath, v3);
  indyfs_path_to_unix(&dest);
  v4 = g_indyfs;
  v5 = 0;
  if ( !g_indyfs->image.fileCount )
    return 0i64;
  while ( 1 )
  {
    v6 = v5;
    if ( !strncmp(&dest, v4->image.files[v6].path, 0x104ui64) )
      break;
    v4 = g_indyfs;
    if ( ++v5 >= g_indyfs->image.fileCount )
      return 0i64;
  }
  return &g_indyfs->image.files[v6];
}

/*
==============
indyfs_prefetch
==============
*/
int indyfs_prefetch(IndyFsFile *file)
{
  unsigned __int64 chunkCount; 
  unsigned __int64 v2; 

  chunkCount = file->chunkCount;
  v2 = chunkCount - 1;
  if ( !chunkCount )
    v2 = 0i64;
  return indyfs_filecache_fetch_chunks(file, 0i64, v2);
}

/*
==============
indyfs_prefetch
==============
*/
int indyfs_prefetch(IndyFsFile *file, unsigned __int64 offset, unsigned __int64 size)
{
  unsigned __int64 chunkCount; 
  unsigned __int64 v4; 
  unsigned __int64 v6; 
  unsigned __int64 v7; 
  unsigned __int64 v8; 
  unsigned __int64 *p_size; 
  unsigned __int64 v10; 
  unsigned __int64 v11; 
  unsigned __int64 *i; 

  chunkCount = file->chunkCount;
  v4 = 0i64;
  v6 = 0i64;
  v7 = 0i64;
  v8 = 0i64;
  if ( chunkCount )
  {
    p_size = &file->chunks->size;
    while ( 1 )
    {
      v10 = v7;
      v7 += *p_size;
      if ( v7 > offset )
        break;
      ++v8;
      p_size += 4;
      if ( v8 >= chunkCount )
        goto LABEL_7;
    }
    v4 = v8;
    v7 = v10;
  }
LABEL_7:
  if ( v8 < chunkCount )
  {
    v11 = offset + size;
    for ( i = &file->chunks[v8].size; ; i += 4 )
    {
      v7 += *i;
      if ( v7 >= v11 )
        break;
      if ( ++v8 >= chunkCount )
        return indyfs_filecache_fetch_chunks(file, v4, v6);
    }
    v6 = v8;
  }
  return indyfs_filecache_fetch_chunks(file, v4, v6);
}

/*
==============
indyfs_read
==============
*/
int indyfs_read(IndyFsFile *file, void *dest, unsigned __int64 offset, unsigned __int64 size, unsigned __int64 *bytesRead, IndyFsTaskState *taskResult, int deadline)
{
  int result; 
  IndyFsTaskHandle handle; 

  result = indyfs_io_queue_push(&g_indyfs->ioTaskQueue, file, offset, size, dest, deadline, &handle, NULL, NULL, g_indyfs->cachingBehavior, &g_indyfs->httpTaskQueue);
  if ( !result )
  {
    *taskResult = indyfs_io_queue_wait_until_finished(&handle);
    *bytesRead = indyfs_io_queue_get_bytes_read(&handle);
    return 0;
  }
  return result;
}

/*
==============
indyfs_read_async
==============
*/
int indyfs_read_async(IndyFsFile *file, void *dest, unsigned __int64 offset, unsigned __int64 size, int deadline, IndyFsTaskHandle *handle, void (*callback)(IndyFsTaskState, unsigned __int64, void *), void *callbackData)
{
  return indyfs_io_queue_push(&g_indyfs->ioTaskQueue, file, offset, size, dest, deadline, handle, callback, callbackData, g_indyfs->cachingBehavior, &g_indyfs->httpTaskQueue);
}

/*
==============
indyfs_simplehttp_log_callback
==============
*/
void indyfs_simplehttp_log_callback(SimpleHttpLogLevel level, const char *line)
{
  if ( level )
  {
    if ( level == Canceled )
      indyfs_log_message(Error, line);
    else
      indyfs_log_message(Completed, line);
  }
  else
  {
    indyfs_log_message(Started, line);
  }
}

/*
==============
indyfs_term
==============
*/
__int64 indyfs_term()
{
  IndyFsState *v0; 
  unsigned int v1; 
  int v2; 
  __int64 v3; 
  bool v4; 
  IndyFsState *v5; 
  int v6; 
  __int64 v7; 
  __int64 result; 

  v0 = g_indyfs;
  v1 = 0;
  if ( g_indyfs->httpQueueThreadCount > 0 )
  {
    indyfs_http_queue_quit();
    v0 = g_indyfs;
    v2 = 0;
    if ( g_indyfs->httpQueueThreadCount > 0 )
    {
      v3 = 0i64;
      do
      {
        v4 = indyfs_thread_join(v0->httpQueueThreads[v3++]) == 0;
        v0 = g_indyfs;
        if ( !v4 )
          v1 = -1;
        ++v2;
      }
      while ( v2 < g_indyfs->httpQueueThreadCount );
    }
  }
  if ( v0->ioQueueThreadCount > 0 )
  {
    indyfs_io_queue_quit();
    v5 = g_indyfs;
    v6 = 0;
    if ( g_indyfs->ioQueueThreadCount > 0 )
    {
      v7 = 0i64;
      do
      {
        v4 = indyfs_thread_join(v5->ioQueueThreads[v7++]) == 0;
        v5 = g_indyfs;
        if ( !v4 )
          v1 = -1;
        ++v6;
      }
      while ( v6 < g_indyfs->ioQueueThreadCount );
    }
  }
  indyfs_statistics_term();
  indyfs_profiler_term();
  simplehttp_term();
  indyfs_http_queue_term(&g_indyfs->httpTaskQueue);
  indyfs_io_queue_term(&g_indyfs->ioTaskQueue);
  indyfs_filecache_term(g_indyfs->fileCache);
  result = v1;
  g_indyfs = NULL;
  return result;
}

/*
==============
indyfs_wait_until_finished
==============
*/

IndyFsTaskState __fastcall indyfs_wait_until_finished(IndyFsTaskHandle *handle)
{
  return indyfs_io_queue_wait_until_finished(handle);
}

/*
==============
parse_storage_server_url
==============
*/
__int64 parse_storage_server_url(const char *storageServerUrl, IndyFsStorageServerInfo *info)
{
  unsigned __int64 v3; 
  __int64 result; 
  int v5; 
  unsigned __int64 v6; 
  size_t v7; 
  char *v8; 
  int v9; 
  SimpleHttpUrlParts parts; 

  v3 = indyfs_strlcpy(info->url, storageServerUrl, 0x400ui64);
  if ( v3 > 0x3FF )
  {
    indyfs_log_message(Error, "Storage Sever URL is too long. There is only space for %zu chars. Given: %zu chars", 1024i64, v3);
    return -1i64;
  }
  if ( indyfs_string_startswith(info->url, "http:
  {
    info->type = Disk;
    simplehttp_parse_url(info->url, &parts);
    if ( parts.absolute && *parts.absolute )
    {
      v5 = j_snprintf(info->basePath, 0x200ui64, "/%s", parts.absolute);
      if ( (unsigned __int64)v5 > 0x1FF )
      {
        v6 = v5;
LABEL_9:
        indyfs_log_message(Error, "Storage Sever base path is too long. There is only space for %zu chars. Given: %zu chars", 512i64, v6);
        return -1i64;
      }
      if ( info->url[v5 + 1027] != 47 )
      {
        v6 = v5 + 1i64;
        if ( v6 > 0x1FF )
          goto LABEL_9;
        *(_WORD *)&info->basePath[v5] = 47;
      }
    }
    else
    {
      v9 = j_snprintf(info->basePath, 0x200ui64, "/");
      if ( (unsigned __int64)v9 >= 0x200 )
      {
        indyfs_log_message(Error, "Storage Sever base path is too long. There is only space for %zu chars. Given: %zu chars", 0x200ui64, (unsigned int)v9);
        return -1i64;
      }
    }
    v7 = -1i64;
    do
      ++v7;
    while ( parts.host[v7] );
    memmove_0(info->url, parts.host, v7);
    info->url[v7] = 0;
    v8 = strrchr_0(info->url, 58);
    if ( v8 )
    {
      *v8 = 0;
      info->port = atoi(v8 + 1);
    }
    else
    {
      info->port = 80;
    }
    return 0i64;
  }
  else
  {
    result = 0i64;
    info->type = Indy;
  }
  return result;
}


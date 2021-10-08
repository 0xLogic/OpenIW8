/*
==============
indyfs_filecache_size
==============
*/

unsigned __int64 __fastcall indyfs_filecache_size(int fileHandleCount)
{
  return ?indyfs_filecache_size@@YA_KH@Z(fileHandleCount);
}

/*
==============
indyfs_filecache_fetch_chunks
==============
*/

int __fastcall indyfs_filecache_fetch_chunks(IndyFsFile *file, unsigned __int64 startIndex, unsigned __int64 endIndex)
{
  return ?indyfs_filecache_fetch_chunks@@YAHPEAUIndyFsFile@@_K1@Z(file, startIndex, endIndex);
}

/*
==============
indyfs_filecache_resolve_path
==============
*/

int __fastcall indyfs_filecache_resolve_path(IndyFsFileCache *fileCache, const unsigned __int8 *digest, char *out_path)
{
  return ?indyfs_filecache_resolve_path@@YAHPEAUIndyFsFileCache@@PEBEQEAD@Z(fileCache, digest, out_path);
}

/*
==============
indyfs_filecache_term
==============
*/

int __fastcall indyfs_filecache_term(IndyFsFileCache *fileCache)
{
  return ?indyfs_filecache_term@@YAHPEAUIndyFsFileCache@@@Z(fileCache);
}

/*
==============
indyfs_filecache_load
==============
*/

int __fastcall indyfs_filecache_load(IndyFsFileCache *fileCache, IndyFsChunk *chunk, void *dest, unsigned __int64 offset, unsigned __int64 size)
{
  return ?indyfs_filecache_load@@YAHPEAUIndyFsFileCache@@PEAUIndyFsChunk@@PEAX_K3@Z(fileCache, chunk, dest, offset, size);
}

/*
==============
indyfs_filecache_init
==============
*/

IndyFsFileCache *__fastcall indyfs_filecache_init(const char *baseDir, int fileHandleCount, void *buffer, unsigned __int64 bufferSize)
{
  return ?indyfs_filecache_init@@YAPEAUIndyFsFileCache@@PEBDHPEAX_K@Z(baseDir, fileHandleCount, buffer, bufferSize);
}

/*
==============
indyfs_prune_filecache_folder
==============
*/

int __fastcall indyfs_prune_filecache_folder(const char *localFileCachePath, unsigned __int64 highWaterMarkGB, unsigned __int64 lowWaterMarkGB, void *memoryBlock, unsigned __int64 memoryBlockSize, unsigned __int64 freeSpace, unsigned __int64 *bytesDeleted)
{
  return ?indyfs_prune_filecache_folder@@YAHPEBD_K1PEAX11PEA_K@Z(localFileCachePath, highWaterMarkGB, lowWaterMarkGB, memoryBlock, memoryBlockSize, freeSpace, bytesDeleted);
}

/*
==============
indyfs_filecache_fetch_chunks
==============
*/
__int64 indyfs_filecache_fetch_chunks(IndyFsFile *file, unsigned __int64 startIndex, unsigned __int64 endIndex)
{
  IndyFsFile *v5; 
  IndyFsHttpTaskQueue *http_task_queue; 
  unsigned int v7; 
  unsigned __int64 v8; 
  unsigned __int64 v9; 
  IndyFsChunk *v10; 
  IndyFsHttpTaskHandle *v11; 
  int v12; 
  unsigned __int64 v13; 
  unsigned __int64 v14; 
  IndyFsHttpTaskHandle *v15; 
  IndyFsHttpTaskHandle *outputHandle; 
  IndyFsScopedEvent v19; 
  IndyFsHttpTaskHandle waitHandle[64]; 

  v5 = file;
  IndyFsScopedEvent::IndyFsScopedEvent(&v19, "FileCache", "FetchChunks");
  http_task_queue = indyfs_get_http_task_queue();
  v7 = 0;
  v8 = 0i64;
  if ( startIndex <= endIndex )
  {
    v9 = startIndex;
    while ( 1 )
    {
      v10 = &v5->chunks[v9];
      v11 = &waitHandle[v8];
      indyfs_http_queue_task_init(v11);
      ++v8;
      if ( indyfs_http_queue_push(http_task_queue, v10, v11, &outputHandle) )
        goto LABEL_19;
      if ( v8 == 64 )
      {
        v12 = 0;
        while ( indyfs_http_queue_wait(http_task_queue, &waitHandle[v12]) != Canceled )
        {
          if ( ++v12 >= 64 )
          {
            v8 = 0i64;
            goto LABEL_9;
          }
        }
        v13 = v12 + startIndex - 64;
        goto LABEL_18;
      }
LABEL_9:
      ++startIndex;
      ++v9;
      if ( startIndex > endIndex )
        break;
      v5 = file;
    }
  }
  v14 = 0i64;
  if ( v8 )
  {
    v15 = waitHandle;
    while ( indyfs_http_queue_wait(http_task_queue, v15) != Canceled )
    {
      ++v14;
      ++v15;
      if ( v14 >= v8 )
        goto LABEL_20;
    }
    v13 = v14 + endIndex - v8;
LABEL_18:
    indyfs_log_message(Error, "Failed to complete http fetch of %s. Chunk %d failed to download.", file->path, v13);
LABEL_19:
    v7 = -1;
  }
LABEL_20:
  IndyFsScopedEvent::~IndyFsScopedEvent(&v19);
  return v7;
}

/*
==============
indyfs_filecache_init
==============
*/
IndyFsFileCache *indyfs_filecache_init(const char *baseDir, int fileHandleCount, void *buffer, unsigned __int64 bufferSize)
{
  __int64 v7; 
  char *v9; 
  unsigned __int64 v10; 
  unsigned int v11; 
  const char *v12; 
  int i; 
  __int64 v14; 
  __int64 v15; 
  __int64 v16; 
  __int64 v17; 
  __int64 v18; 
  __int64 v19; 
  __int64 v20; 
  __int64 v21; 
  __int64 v22; 
  char _Buffer[272]; 

  v7 = fileHandleCount;
  if ( bufferSize < 176i64 * fileHandleCount + 384 )
  {
    indyfs_log_message(Error, "Buffer is too small for FileCache init");
    return 0i64;
  }
  v9 = (char *)buffer + 384;
  indyfs_mutex_init((LPCRITICAL_SECTION)((char *)buffer + 224));
  if ( !baseDir )
  {
    indyfs_log_message(Error, "baseDir is not defined: \n Expected: '/path/to/file/cache/base/directory' \nRecieved: %s", NULL);
    return 0i64;
  }
  v10 = indyfs_strlcpy((char *)buffer, baseDir, 0xD7ui64) + 1;
  if ( v10 > 0xD7 )
  {
    indyfs_log_message(Error, "baseDir is longer then max path:\n Need: %d bytes\n Have: %d", v10, 215i64);
    return 0i64;
  }
  v11 = indyfs_dir_mkdir((const char *)buffer);
  if ( v11 && v11 != 183 )
  {
    v12 = baseDir;
LABEL_10:
    indyfs_log_message(Error, "Failed to mkdir %s: %d", v12, v11);
    return 0i64;
  }
  for ( i = 0; i < 256; ++i )
  {
    LODWORD(v22) = i;
    if ( (unsigned __int64)j_snprintf(_Buffer, 0x104ui64, "%s/%02x", (const char *)buffer, v22) >= 0x104 )
    {
      indyfs_log_message(Error, "baseDir path is too long. Not enough space for chunk subdirectories.");
      return 0i64;
    }
    v11 = indyfs_dir_mkdir(_Buffer);
    if ( v11 && v11 != 183 )
    {
      v12 = _Buffer;
      goto LABEL_10;
    }
  }
  *((_QWORD *)buffer + 44) = v9;
  if ( fileHandleCount > 0 )
  {
    v14 = 0i64;
    v15 = v7;
    do
    {
      v16 = v14 + *((_QWORD *)buffer + 44);
      indyfs_mutex_init((LPCRITICAL_SECTION)(v16 + 32));
      v14 += 176i64;
      *(_QWORD *)(v16 + 8) = 0i64;
      *(_QWORD *)(v16 + 16) = 0i64;
      *(_DWORD *)(v16 + 24) = 0;
      *(_QWORD *)v16 = -1i64;
      --v15;
    }
    while ( v15 );
    v17 = *((_QWORD *)buffer + 44);
    *((_QWORD *)buffer + 46) = v17;
    *(_QWORD *)(v17 + 160) = 0i64;
    if ( fileHandleCount - 1 > 0 )
    {
      v18 = 0i64;
      v19 = (unsigned int)(fileHandleCount - 1);
      v20 = 0i64;
      do
      {
        v18 += 176i64;
        *(_QWORD *)(v18 + *((_QWORD *)buffer + 44) - 8) = v20 + *((_QWORD *)buffer + 44) + 176;
        *(_QWORD *)(v18 + *((_QWORD *)buffer + 44) + 160) = v20 + *((_QWORD *)buffer + 44);
        v20 += 176i64;
        --v19;
      }
      while ( v19 );
    }
    v21 = 176 * v7 + *((_QWORD *)buffer + 44) - 176;
    *((_QWORD *)buffer + 47) = v21;
    *(_QWORD *)(v21 + 168) = 0i64;
  }
  *((_DWORD *)buffer + 90) = fileHandleCount;
  return (IndyFsFileCache *)buffer;
}

/*
==============
indyfs_filecache_load
==============
*/
__int64 indyfs_filecache_load(IndyFsFileCache *fileCache, IndyFsChunk *chunk, void *dest, unsigned __int64 offset, unsigned __int64 size)
{
  unsigned int chunk_data; 
  IndyFsFileHandle *tail; 
  int v10; 
  __int64 v11; 
  IndyFsFileHandle *v12; 
  IndyFsFileHandle *previous; 
  IndyFsFileHandle *v14; 
  int offseta; 
  int v17; 
  int v18; 
  int v19; 
  int v20; 
  int v21; 
  int v22; 
  int v23; 
  int v24; 
  int v25; 
  int v26; 
  int v27; 
  int v28; 
  int v29; 
  int v30; 
  int v31; 
  int v32; 
  int v33; 
  unsigned __int64 v37; 
  IndyFsScopedEvent v38; 

  IndyFsScopedEvent::IndyFsScopedEvent(&v38, "FileCache", "Load");
  v37 = chunk->size;
  if ( offset + size <= v37 )
  {
    tail = NULL;
    indyfs_mutex_lock((LPCRITICAL_SECTION)&fileCache->lock);
    v10 = 0;
    if ( fileCache->fileHandleCount <= 0 )
      goto LABEL_15;
    v11 = 0i64;
    do
    {
      v12 = &fileCache->fileHandles[v11];
      if ( *(_QWORD *)chunk->sha1 == *(_QWORD *)v12->chunkSha1 && *(_QWORD *)&chunk->sha1[8] == *(_QWORD *)&v12->chunkSha1[8] && *(_DWORD *)&chunk->sha1[16] == *(_DWORD *)&v12->chunkSha1[16] )
      {
        tail = &fileCache->fileHandles[v11];
        indyfs_statistics_internal_add_count("HandleCache", "DirectHit", 1ui64);
        if ( v12 != fileCache->head )
        {
          v12->previous->next = v12->next;
          previous = v12->previous;
          if ( v12 == fileCache->tail )
            fileCache->tail = previous;
          else
            v12->next->previous = previous;
          v12->previous = NULL;
          v12->next = fileCache->head;
          fileCache->head->previous = v12;
          fileCache->head = v12;
        }
      }
      ++v10;
      ++v11;
    }
    while ( v10 < fileCache->fileHandleCount );
    if ( !tail )
    {
LABEL_15:
      tail = fileCache->tail;
      v14 = tail->previous;
      fileCache->tail = v14;
      v14->next = NULL;
      tail->previous = NULL;
      tail->next = fileCache->head;
      fileCache->head->previous = tail;
      fileCache->head = tail;
    }
    indyfs_mutex_unlock((LPCRITICAL_SECTION)&fileCache->lock);
    chunk_data = read_chunk_data(fileCache, tail, chunk, dest, offset, size);
  }
  else
  {
    v33 = chunk->sha1[19];
    v32 = chunk->sha1[18];
    v31 = chunk->sha1[17];
    v30 = chunk->sha1[16];
    v29 = chunk->sha1[15];
    v28 = chunk->sha1[14];
    v27 = chunk->sha1[13];
    v26 = chunk->sha1[12];
    v25 = chunk->sha1[11];
    v24 = chunk->sha1[10];
    v23 = chunk->sha1[9];
    v22 = chunk->sha1[8];
    v21 = chunk->sha1[7];
    v20 = chunk->sha1[6];
    v19 = chunk->sha1[5];
    v18 = chunk->sha1[4];
    v17 = chunk->sha1[3];
    offseta = chunk->sha1[2];
    indyfs_log_message(Error, "Failed to load from chunk. Offset and size are too big. \nChunk: %02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x \nChunk size: %llu  Offest: %llu  Size: %llu", chunk->sha1[0], chunk->sha1[1], offseta, v17, v18, v19, v20, v21, v22, v23, v24, v25, v26, v27, v28, v29, v30, v31, v32, v33, v37, offset, size);
    chunk_data = -1;
  }
  IndyFsScopedEvent::~IndyFsScopedEvent(&v38);
  return chunk_data;
}

/*
==============
indyfs_filecache_resolve_path
==============
*/
__int64 indyfs_filecache_resolve_path(IndyFsFileCache *fileCache, const unsigned __int8 *digest, char *out_path)
{
  unsigned int v6; 
  __int64 v8; 
  int v9; 
  __int64 v10; 
  __int64 v11; 
  __int64 v12; 
  __int64 v13; 
  __int64 v14; 
  __int64 v15; 
  __int64 v16; 
  __int64 v17; 
  __int64 v18; 
  __int64 v19; 
  __int64 v20; 
  __int64 v21; 
  __int64 v22; 
  __int64 v23; 
  __int64 v24; 
  __int64 v25; 
  __int64 v26; 
  IndyFsScopedEvent v30; 

  IndyFsScopedEvent::IndyFsScopedEvent(&v30, "FileCache", "ResolvePath");
  if ( fileCache->baseDir[0] )
  {
    v9 = *digest;
    if ( j_snprintf(out_path, 0x104ui64, "%s/%02x/%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x", fileCache->baseDir, v9, v9, digest[1], digest[2], digest[3], digest[4], digest[5], digest[6], digest[7], digest[8], digest[9], digest[10], digest[11], digest[12], digest[13], digest[14], digest[15], digest[16], digest[17], digest[18], digest[19]) < 260 )
    {
      v6 = 0;
    }
    else
    {
      LODWORD(v26) = digest[19];
      LODWORD(v25) = digest[18];
      LODWORD(v24) = digest[17];
      LODWORD(v23) = digest[16];
      LODWORD(v22) = digest[15];
      LODWORD(v21) = digest[14];
      LODWORD(v20) = digest[13];
      LODWORD(v19) = digest[12];
      LODWORD(v18) = digest[11];
      LODWORD(v17) = digest[10];
      LODWORD(v16) = digest[9];
      LODWORD(v15) = digest[8];
      LODWORD(v14) = digest[7];
      LODWORD(v13) = digest[6];
      LODWORD(v12) = digest[5];
      LODWORD(v11) = digest[4];
      LODWORD(v10) = digest[3];
      LODWORD(v8) = digest[2];
      indyfs_log_message(Error, "Failed to resolve path for chunk %02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x. Path to chunk is too long.", *digest, digest[1], v8, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20, v21, v22, v23, v24, v25, v26);
      v6 = -1;
    }
  }
  else
  {
    *out_path = 0;
    indyfs_log_message(Error, "Failed to get local cache path for chunk %s. FileCache::BaseDir is empty", (const char *)digest);
    v6 = -1;
  }
  IndyFsScopedEvent::~IndyFsScopedEvent(&v30);
  return v6;
}

/*
==============
indyfs_filecache_size
==============
*/
__int64 indyfs_filecache_size(int fileHandleCount)
{
  return 176i64 * fileHandleCount + 384;
}

/*
==============
indyfs_filecache_term
==============
*/
__int64 indyfs_filecache_term(IndyFsFileCache *fileCache)
{
  int v2; 
  __int64 v3; 
  IndyFsFileHandle *fileHandles; 
  void *fd; 

  if ( !fileCache )
    return 0i64;
  fileCache->baseDir[0] = 0;
  indyfs_mutex_term((LPCRITICAL_SECTION)&fileCache->lock);
  v2 = 0;
  if ( fileCache->fileHandleCount <= 0 )
    return 0i64;
  v3 = 0i64;
  do
  {
    fileHandles = fileCache->fileHandles;
    fd = fileHandles[v3].fd;
    if ( fd != (void *)-1i64 )
      CloseHandle(fd);
    indyfs_mutex_term((LPCRITICAL_SECTION)&fileHandles[v3].lock);
    ++v2;
    ++v3;
  }
  while ( v2 < fileCache->fileHandleCount );
  return 0i64;
}

/*
==============
indyfs_prune_filecache_folder
==============
*/
__int64 indyfs_prune_filecache_folder(const char *localFileCachePath, unsigned __int64 highWaterMarkGB, unsigned __int64 lowWaterMarkGB, void *memoryBlock, unsigned __int64 memoryBlockSize, unsigned __int64 freeSpace, unsigned __int64 *bytesDeleted)
{
  unsigned __int64 v12; 
  unsigned __int64 v13; 
  unsigned __int64 v14; 
  __int64 v15; 
  FileInfo *v16; 
  unsigned __int64 size; 
  FileInfo *userData[2]; 
  unsigned __int64 v19; 

  *bytesDeleted = 0i64;
  if ( indyfs_dir_exists(localFileCachePath) )
  {
    if ( memoryBlockSize < 0xAF0 )
    {
      indyfs_log_message(Error, "Failed to prune FileCache folder. Memory block is too small. Given: %zu  Required: >=%zu", memoryBlockSize, 0xAF0ui64);
      return 0xFFFFFFFFi64;
    }
    v12 = freeSpace;
    if ( freeSpace == -1i64 )
    {
      indyfs_log_message(Error, "indyfs_get_free_disk_space() is not implemented for this platform. You must provide free space remaining.");
      return 0xFFFFFFFFi64;
    }
    v13 = highWaterMarkGB << 30;
    if ( freeSpace <= lowWaterMarkGB << 30 )
    {
      userData[0] = (FileInfo *)memoryBlock;
      userData[1] = (FileInfo *)(memoryBlockSize / 0x118);
      while ( 1 )
      {
        v19 = 0i64;
        if ( indyfs_dir_walk(localFileCachePath, lambda_99e153cc34a92c1a57f26a74a4169cf8_::_lambda_invoker_cdecl_, userData, 0) == -1 )
        {
          indyfs_log_message(Error, "Failed to walk directory in purge of %s", localFileCachePath);
          return 0xFFFFFFFFi64;
        }
        if ( !v19 )
          return 0i64;
        std::_Sort_unchecked_FileInfo____lambda_fc6bd4472bd482766859a044848547dd___(userData[0], &userData[0][v19], (__int64)(280 * v19) / 280, (indyfs_prune_filecache_folder::__l16::<lambda_fc6bd4472bd482766859a044848547dd>)bytesDeleted);
        v14 = 0i64;
        if ( v19 )
          break;
LABEL_14:
        if ( v12 >= v13 )
          return 0i64;
      }
      v15 = 0i64;
      while ( v12 < v13 )
      {
        v16 = &userData[0][v15];
        indyfs_file_delete(userData[0][v15].path);
        size = v16->size;
        ++v14;
        *bytesDeleted += size;
        v12 += size;
        ++v15;
        if ( v14 >= v19 )
          goto LABEL_14;
      }
    }
  }
  return 0i64;
}

/*
==============
read_chunk_data
==============
*/
__int64 read_chunk_data(IndyFsFileCache *fileCache, IndyFsFileHandle *handle, IndyFsChunk *chunk, void *dest, unsigned __int64 offset, unsigned __int64 size)
{
  _RTL_CRITICAL_SECTION *p_lock; 
  unsigned __int64 v15; 
  unsigned int v16; 
  HANDLE FileA; 
  DWORD LastError; 
  unsigned __int64 v20; 
  DWORD v21; 
  __int64 result; 
  __int64 dwCreationDisposition; 
  __int64 dwFlagsAndAttributes; 
  HANDLE hTemplateFile; 
  __int64 v32; 
  int v33; 
  __int64 v34; 
  int v35; 
  __int64 v36; 
  int v37; 
  __int64 v38; 
  int v39; 
  __int64 v40; 
  int v41; 
  __int64 v42; 
  int v43; 
  __int64 v44; 
  int v45; 
  __int64 v46; 
  int v47; 
  __int64 v48; 
  int v49; 
  __int64 v50; 
  int v51; 
  __int64 v52; 
  int v53; 
  __int64 v54; 
  int v55; 
  __int64 v56; 
  int v57; 
  __int64 v58; 
  int v59; 
  __int64 v60; 
  int v61; 
  __int64 v62; 
  int v63; 
  DWORD v64; 
  unsigned int NumberOfBytesRead; 
  IndyFsChunk *v66; 
  __int64 v67; 
  IndyFsMutex *v68; 
  _OVERLAPPED Overlapped; 
  __int64 v70; 
  IndyFsScopedDuration v71; 
  IndyFsScopedEvent v72; 
  char out_path[272]; 
  void *retaddr; 

  _RAX = &retaddr;
  v70 = -2i64;
  __asm
  {
    vmovaps xmmword ptr [rax-58h], xmm6
    vmovaps xmmword ptr [rax-68h], xmm7
  }
  _R13 = chunk;
  v66 = chunk;
  _RSI = handle;
  indyfs_statistics_internal_add_count("HandleCache", "TotalReads", 1ui64);
  p_lock = (_RTL_CRITICAL_SECTION *)&_RSI->lock;
  v68 = &_RSI->lock;
  indyfs_mutex_lock((LPCRITICAL_SECTION)&_RSI->lock);
  v15 = 0i64;
  if ( *(_OWORD *)_R13->sha1 != *(_OWORD *)_RSI->chunkSha1 || *(_DWORD *)&_R13->sha1[16] != *(_DWORD *)&_RSI->chunkSha1[16] || _RSI->fd == (void *)-1i64 )
  {
    indyfs_statistics_internal_add_count("HandleCache", "Miss", 1ui64);
    if ( _RSI->fd != (void *)-1i64 )
    {
      IndyFsScopedDuration::IndyFsScopedDuration(&v71, "FileCache", "FileClose");
      IndyFsScopedEvent::IndyFsScopedEvent(&v72, "FileCache", "FileClose");
      CloseHandle(_RSI->fd);
      IndyFsScopedEvent::~IndyFsScopedEvent(&v72);
      IndyFsScopedDuration::~IndyFsScopedDuration(&v71);
    }
    __asm
    {
      vmovups xmm0, xmmword ptr [r13+0]
      vmovups xmmword ptr [rsi+8], xmm0
    }
    *(_DWORD *)&_RSI->chunkSha1[16] = *(_DWORD *)&_R13->sha1[16];
    if ( indyfs_filecache_resolve_path(fileCache, _R13->sha1, out_path) )
    {
      indyfs_log_message(Error, "Failed to open \"%s\"", out_path);
      v16 = -1;
      goto LABEL_22;
    }
    IndyFsScopedDuration::IndyFsScopedDuration((IndyFsScopedDuration *)&v72, "FileCache", "FileOpen");
    IndyFsScopedEvent::IndyFsScopedEvent((IndyFsScopedEvent *)&v71, "FileCache", "FileOpen");
    FileA = CreateFileA(out_path, 0x80000000, 7u, NULL, 3u, 0x10000080u, NULL);
    _RSI->fd = FileA;
    if ( FileA == (HANDLE)-1i64 )
    {
      LastError = GetLastError();
      indyfs_log_message(Error, "Failed to open \"%s\" - Error: %d", out_path, LastError);
      IndyFsScopedEvent::~IndyFsScopedEvent((IndyFsScopedEvent *)&v71);
      IndyFsScopedDuration::~IndyFsScopedDuration((IndyFsScopedDuration *)&v72);
      v16 = -1;
      goto LABEL_22;
    }
    IndyFsScopedEvent::~IndyFsScopedEvent((IndyFsScopedEvent *)&v71);
    IndyFsScopedDuration::~IndyFsScopedDuration((IndyFsScopedDuration *)&v72);
  }
  Overlapped.Internal = 0i64;
  Overlapped.InternalHigh = 0i64;
  Overlapped.hEvent = NULL;
  Overlapped.Pointer = (void *)offset;
  *(double *)&_XMM0 = indyfs_time_now_us();
  __asm { vmovaps xmm7, xmm0 }
  v67 = 0i64;
  v20 = size;
  if ( size )
  {
    while ( 1 )
    {
      v21 = 0x7FFFFFFF;
      if ( size - v15 < 0x7FFFFFFF )
        v21 = size - v15;
      if ( !ReadFile(_RSI->fd, (char *)dest + v15, v21, &NumberOfBytesRead, &Overlapped) )
        break;
      if ( NumberOfBytesRead )
      {
        v15 += NumberOfBytesRead;
        v67 = v15;
        if ( v15 < size )
          continue;
      }
      goto LABEL_19;
    }
    v64 = GetLastError();
    v63 = _R13->sha1[19];
    v61 = _R13->sha1[18];
    v59 = _R13->sha1[17];
    v57 = _R13->sha1[16];
    v55 = _R13->sha1[15];
    v53 = _R13->sha1[14];
    v51 = _R13->sha1[13];
    v49 = _R13->sha1[12];
    v47 = _R13->sha1[11];
    v45 = _R13->sha1[10];
    v43 = _R13->sha1[9];
    v41 = _R13->sha1[8];
    v39 = _R13->sha1[7];
    _R13 = v66;
    v37 = v66->sha1[6];
    v35 = v66->sha1[5];
    v33 = v66->sha1[4];
    LODWORD(hTemplateFile) = v66->sha1[3];
    LODWORD(dwFlagsAndAttributes) = v66->sha1[2];
    LODWORD(dwCreationDisposition) = v66->sha1[1];
    v15 = v67;
    indyfs_log_message(Error, "Tried to read %llu bytes from chunk [%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x] but got an error: %d.", v67, v66->sha1[0], dwCreationDisposition, dwFlagsAndAttributes, hTemplateFile, v33, v35, v37, v39, v41, v43, v45, v47, v49, v51, v53, v55, v57, v59, v61, v63, v64);
    v20 = size;
    p_lock = (_RTL_CRITICAL_SECTION *)v68;
  }
LABEL_19:
  if ( v15 == v20 )
  {
    *(double *)&_XMM0 = indyfs_time_now_us();
    __asm
    {
      vsubsd  xmm6, xmm0, xmm7
      vmovaps xmm2, xmm6; duration
    }
    indyfs_statistics_internal_add_chunk_read(_R13->sha1, v20, *(long double *)&_XMM2);
    __asm
    {
      vmovaps xmm3, xmm6; duration
      vmovaps xmm2, xmm7; start
    }
    indyfs_profiler_internal_duration_event("FileCache", "FileRead", *(long double *)&_XMM2, *(long double *)&_XMM3);
    v16 = 0;
  }
  else
  {
    LODWORD(v62) = _R13->sha1[19];
    LODWORD(v60) = _R13->sha1[18];
    LODWORD(v58) = _R13->sha1[17];
    LODWORD(v56) = _R13->sha1[16];
    LODWORD(v54) = _R13->sha1[15];
    LODWORD(v52) = _R13->sha1[14];
    LODWORD(v50) = _R13->sha1[13];
    LODWORD(v48) = _R13->sha1[12];
    LODWORD(v46) = _R13->sha1[11];
    LODWORD(v44) = _R13->sha1[10];
    LODWORD(v42) = _R13->sha1[9];
    LODWORD(v40) = _R13->sha1[8];
    LODWORD(v38) = _R13->sha1[7];
    LODWORD(v36) = v66->sha1[6];
    LODWORD(v34) = v66->sha1[5];
    LODWORD(v32) = v66->sha1[4];
    LODWORD(hTemplateFile) = v66->sha1[3];
    LODWORD(dwFlagsAndAttributes) = v66->sha1[2];
    LODWORD(dwCreationDisposition) = v66->sha1[1];
    indyfs_log_message(Error, "Tried to read %llu bytes from chunk [%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x] but requested %zu.", v67, v66->sha1[0], dwCreationDisposition, dwFlagsAndAttributes, hTemplateFile, v32, v34, v36, v38, v40, v42, v44, v46, v48, v50, v52, v54, v56, v58, v60, v62, size);
    p_lock = (_RTL_CRITICAL_SECTION *)v68;
    v16 = -1;
  }
LABEL_22:
  indyfs_mutex_unlock(p_lock);
  result = v16;
  __asm
  {
    vmovaps xmm6, xmmword ptr [rsp+6B0h+var_58+8]
    vmovaps xmm7, [rsp+6B0h+var_68+8]
  }
  return result;
}


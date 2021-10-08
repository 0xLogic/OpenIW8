/*
==============
indyfs_statistics_term
==============
*/

void indyfs_statistics_term(void)
{
  ?indyfs_statistics_term@@YAXXZ();
}

/*
==============
indyfs_statistics_size
==============
*/

unsigned __int64 __fastcall indyfs_statistics_size(bool enabled, unsigned __int64 bufferSize)
{
  return ?indyfs_statistics_size@@YA_K_N_K@Z(enabled, bufferSize);
}

/*
==============
indyfs_statistics_file_close
==============
*/

void indyfs_statistics_file_close(void)
{
  ?indyfs_statistics_file_close@@YAXXZ();
}

/*
==============
indyfs_statistics_internal_add_duration
==============
*/

void __fastcall indyfs_statistics_internal_add_duration(const char *category, const char *name, const long double duration)
{
  ?indyfs_statistics_internal_add_duration@@YAXPEBD0N@Z(category, name, duration);
}

/*
==============
indyfs_statistics_internal_add_file_cache_miss
==============
*/

void __fastcall indyfs_statistics_internal_add_file_cache_miss(unsigned __int8 *sha1, unsigned __int64 size)
{
  ?indyfs_statistics_internal_add_file_cache_miss@@YAXQEAE_K@Z(sha1, size);
}

/*
==============
indyfs_statistics_internal_add_user_read_request
==============
*/

void __fastcall indyfs_statistics_internal_add_user_read_request(const char *path, unsigned __int64 offset, unsigned __int64 size)
{
  ?indyfs_statistics_internal_add_user_read_request@@YAXPEBD_K1@Z(path, offset, size);
}

/*
==============
IndyFsScopedDuration::IndyFsScopedDuration
==============
*/

void __fastcall IndyFsScopedDuration::IndyFsScopedDuration(IndyFsScopedDuration *this, const char *category_, const char *name_)
{
  ??0IndyFsScopedDuration@@QEAA@PEBD0@Z(this, category_, name_);
}

/*
==============
indyfs_statistics_internal_add_chunk_read
==============
*/

void __fastcall indyfs_statistics_internal_add_chunk_read(unsigned __int8 *sha1, unsigned __int64 size, long double duration)
{
  ?indyfs_statistics_internal_add_chunk_read@@YAXQEAE_KN@Z(sha1, size, duration);
}

/*
==============
indyfs_statistics_internal_add_file_cache_hit
==============
*/

void __fastcall indyfs_statistics_internal_add_file_cache_hit(const char *type, unsigned __int8 *sha1, unsigned __int64 size)
{
  ?indyfs_statistics_internal_add_file_cache_hit@@YAXPEBDQEAE_K@Z(type, sha1, size);
}

/*
==============
indyfs_statistics_internal_add_chunk_download
==============
*/

void __fastcall indyfs_statistics_internal_add_chunk_download(unsigned __int8 *sha1, unsigned __int64 chunkSize, unsigned __int64 offset, unsigned __int64 downloadSize, long double duration, const char *cacheStatus, unsigned __int64 taskId)
{
  ?indyfs_statistics_internal_add_chunk_download@@YAXQEAE_K11NPEBD1@Z(sha1, chunkSize, offset, downloadSize, duration, cacheStatus, taskId);
}

/*
==============
IndyFsScopedDuration::~IndyFsScopedDuration
==============
*/

void __fastcall IndyFsScopedDuration::~IndyFsScopedDuration(IndyFsScopedDuration *this)
{
  ??1IndyFsScopedDuration@@QEAA@XZ(this);
}

/*
==============
indyfs_statistics_internal_add_count
==============
*/

void __fastcall indyfs_statistics_internal_add_count(const char *category, const char *name, const unsigned __int64 count)
{
  ?indyfs_statistics_internal_add_count@@YAXPEBD0_K@Z(category, name, count);
}

/*
==============
indyfs_statistics_init
==============
*/

int __fastcall indyfs_statistics_init(bool enabled, const char *csvFile, void *memoryBlock, unsigned __int64 memoryBlockSize)
{
  return ?indyfs_statistics_init@@YAH_NPEBDPEAX_K@Z(enabled, csvFile, memoryBlock, memoryBlockSize);
}

/*
==============
indyfs_statistics_internal_record_caching_info
==============
*/

void __fastcall indyfs_statistics_internal_record_caching_info(IndyFsArkVersion arkVersion, IndyFsLocalCaching cachingBehavior)
{
  ?indyfs_statistics_internal_record_caching_info@@YAXW4IndyFsArkVersion@@W4IndyFsLocalCaching@@@Z(arkVersion, cachingBehavior);
}

/*
==============
IndyFsScopedDuration::IndyFsScopedDuration
==============
*/
void IndyFsScopedDuration::IndyFsScopedDuration(IndyFsScopedDuration *this, const char *category_, const char *name_)
{
  _RDI = this;
  indyfs_strlcpy(this->category, category_, 0x104ui64);
  indyfs_strlcpy(_RDI->name, name_, 0x104ui64);
  *(double *)&_XMM0 = indyfs_time_now_us();
  __asm { vmovsd  qword ptr [rdi+208h], xmm0 }
}

/*
==============
IndyFsScopedDuration::~IndyFsScopedDuration
==============
*/
void IndyFsScopedDuration::~IndyFsScopedDuration(IndyFsScopedDuration *this)
{
  *(double *)&_XMM0 = indyfs_time_now_us();
  if ( s_statisticsEnabled )
  {
    __asm
    {
      vsubsd  xmm3, xmm0, qword ptr [rbx+208h]
      vmovq   r9, xmm3
    }
    statistics_write_message("duration,%s,%s,%f\n", this, this->name, _R9, -2i64);
  }
}

/*
==============
indyfs_statistics_file_close
==============
*/
void indyfs_statistics_file_close(void)
{
  _RTL_CRITICAL_SECTION *p_lock; 
  __int64 v1; 

  if ( s_statisticsEnabled )
  {
    p_lock = (_RTL_CRITICAL_SECTION *)&s_statistics->lock;
    indyfs_mutex_lock((LPCRITICAL_SECTION)&s_statistics->lock);
    if ( !s_statistics->fileClosed )
    {
      statistics_flush(v1);
      indyfs_fclose(s_statistics->file);
      s_statistics->fileClosed = 1;
    }
    indyfs_mutex_unlock(p_lock);
  }
}

/*
==============
indyfs_statistics_init
==============
*/
__int64 indyfs_statistics_init(bool enabled, const char *csvFile, void *memoryBlock, unsigned __int64 memoryBlockSize)
{
  IndyFsStatistics *v6; 

  s_statisticsEnabled = enabled;
  if ( enabled )
  {
    if ( memoryBlockSize >= 0x4B0 )
    {
      s_statistics = (IndyFsStatistics *)memoryBlock;
      *(_QWORD *)memoryBlock = (char *)memoryBlock + 176;
      *((_QWORD *)memoryBlock + 1) = memoryBlockSize - 176;
      indyfs_mutex_init((LPCRITICAL_SECTION)((char *)memoryBlock + 32));
      if ( indyfs_fopen(&s_statistics->file, csvFile, View|Menu|0x2) == -1 )
      {
        indyfs_log_message(Error, "Failed to init Statistics - Statistics file cannot be opened.");
        return 0xFFFFFFFFi64;
      }
      else
      {
        v6 = s_statistics;
        s_statistics->offset = 0i64;
        v6->fileClosed = 0;
        return 0i64;
      }
    }
    else
    {
      indyfs_log_message(Error, "Failed to init Statistics - Memory block too small. Required: >%zu  Given: %zu", 0x4B0ui64, memoryBlockSize);
      return 0xFFFFFFFFi64;
    }
  }
  else
  {
    s_statistics = NULL;
    return 0i64;
  }
}

/*
==============
indyfs_statistics_internal_add_chunk_download
==============
*/
void indyfs_statistics_internal_add_chunk_download(unsigned __int8 *sha1, unsigned __int64 chunkSize, unsigned __int64 offset, unsigned __int64 downloadSize, long double duration, const char *cacheStatus, unsigned __int64 taskId)
{
  int v8; 
  int v9; 
  int v10; 
  int v11; 
  int v12; 
  int v13; 
  int v14; 
  int v15; 
  int v16; 
  int v17; 
  int v18; 
  int v19; 
  int v20; 
  int v21; 
  int v22; 
  int v23; 
  int v24; 
  double v25; 

  if ( s_statisticsEnabled )
  {
    __asm
    {
      vmovsd  xmm0, [rsp+128h+duration]
      vmovsd  [rsp+128h+var_68], xmm0
    }
    v24 = sha1[19];
    v23 = sha1[18];
    v22 = sha1[17];
    v21 = sha1[16];
    v20 = sha1[15];
    v19 = sha1[14];
    v18 = sha1[13];
    v17 = sha1[12];
    v16 = sha1[11];
    v15 = sha1[10];
    v14 = sha1[9];
    v13 = sha1[8];
    v12 = sha1[7];
    v11 = sha1[6];
    v10 = sha1[5];
    v9 = sha1[4];
    v8 = sha1[3];
    statistics_write_message("chunk_download,%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x,%llu,%llu,%llu,%f,%s,%zu\n", *sha1, sha1[1], sha1[2], v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20, v21, v22, v23, v24, chunkSize, offset, downloadSize, v25, cacheStatus, taskId);
  }
}

/*
==============
indyfs_statistics_internal_add_chunk_read
==============
*/

void __fastcall indyfs_statistics_internal_add_chunk_read(unsigned __int8 *sha1, unsigned __int64 size, double duration)
{
  int v3; 
  int v4; 
  int v5; 
  int v6; 
  int v7; 
  int v8; 
  int v9; 
  int v10; 
  int v11; 
  int v12; 
  int v13; 
  int v14; 
  int v15; 
  int v16; 
  int v17; 
  int v18; 
  int v19; 
  double v20; 

  if ( s_statisticsEnabled )
  {
    __asm { vmovsd  [rsp+0F8h+var_48], xmm2 }
    v19 = sha1[19];
    v18 = sha1[18];
    v17 = sha1[17];
    v16 = sha1[16];
    v15 = sha1[15];
    v14 = sha1[14];
    v13 = sha1[13];
    v12 = sha1[12];
    v11 = sha1[11];
    v10 = sha1[10];
    v9 = sha1[9];
    v8 = sha1[8];
    v7 = sha1[7];
    v6 = sha1[6];
    v5 = sha1[5];
    v4 = sha1[4];
    v3 = sha1[3];
    statistics_write_message("chunk_read,%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x,%llu,%f\n", *sha1, sha1[1], sha1[2], v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, size, v20);
  }
}

/*
==============
indyfs_statistics_internal_add_count
==============
*/
void indyfs_statistics_internal_add_count(const char *category, const char *name, const unsigned __int64 count)
{
  if ( s_statisticsEnabled )
    statistics_write_message("count,%s,%s,%llu\n", category, name, count);
}

/*
==============
indyfs_statistics_internal_add_duration
==============
*/

void __fastcall indyfs_statistics_internal_add_duration(const char *category, const char *name, double duration)
{
  if ( s_statisticsEnabled )
  {
    __asm
    {
      vmovaps xmm3, xmm2
      vmovq   r9, xmm3
    }
    statistics_write_message("duration,%s,%s,%f\n", category, name, _R9);
  }
}

/*
==============
indyfs_statistics_internal_add_file_cache_hit
==============
*/
void indyfs_statistics_internal_add_file_cache_hit(const char *type, unsigned __int8 *sha1, unsigned __int64 size)
{
  int v3; 
  int v4; 
  int v5; 
  int v6; 
  int v7; 
  int v8; 
  int v9; 
  int v10; 
  int v11; 
  int v12; 
  int v13; 
  int v14; 
  int v15; 
  int v16; 
  int v17; 
  int v18; 
  int v19; 
  int v20; 

  if ( s_statisticsEnabled )
  {
    v20 = sha1[19];
    v19 = sha1[18];
    v18 = sha1[17];
    v17 = sha1[16];
    v16 = sha1[15];
    v15 = sha1[14];
    v14 = sha1[13];
    v13 = sha1[12];
    v12 = sha1[11];
    v11 = sha1[10];
    v10 = sha1[9];
    v9 = sha1[8];
    v8 = sha1[7];
    v7 = sha1[6];
    v6 = sha1[5];
    v5 = sha1[4];
    v4 = sha1[3];
    v3 = sha1[2];
    statistics_write_message("file_cache,hit,%s,%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x,%llu\n", type, *sha1, sha1[1], v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, v19, v20, size);
  }
}

/*
==============
indyfs_statistics_internal_add_file_cache_miss
==============
*/
void indyfs_statistics_internal_add_file_cache_miss(unsigned __int8 *sha1, unsigned __int64 size)
{
  int v2; 
  int v3; 
  int v4; 
  int v5; 
  int v6; 
  int v7; 
  int v8; 
  int v9; 
  int v10; 
  int v11; 
  int v12; 
  int v13; 
  int v14; 
  int v15; 
  int v16; 
  int v17; 
  int v18; 

  if ( s_statisticsEnabled )
  {
    v18 = sha1[19];
    v17 = sha1[18];
    v16 = sha1[17];
    v15 = sha1[16];
    v14 = sha1[15];
    v13 = sha1[14];
    v12 = sha1[13];
    v11 = sha1[12];
    v10 = sha1[11];
    v9 = sha1[10];
    v8 = sha1[9];
    v7 = sha1[8];
    v6 = sha1[7];
    v5 = sha1[6];
    v4 = sha1[5];
    v3 = sha1[4];
    v2 = sha1[3];
    statistics_write_message("file_cache,miss,%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x,%llu\n", *sha1, sha1[1], sha1[2], v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15, v16, v17, v18, size);
  }
}

/*
==============
indyfs_statistics_internal_add_user_read_request
==============
*/
void indyfs_statistics_internal_add_user_read_request(const char *path, unsigned __int64 offset, unsigned __int64 size)
{
  if ( s_statisticsEnabled )
    statistics_write_message("user_read_request,%s,%llu,%llu\n", path, offset, size);
}

/*
==============
indyfs_statistics_internal_record_caching_info
==============
*/
void indyfs_statistics_internal_record_caching_info(IndyFsArkVersion arkVersion, IndyFsLocalCaching cachingBehavior)
{
  if ( s_statisticsEnabled )
    statistics_write_message("caching_info,%u,%u\n", (unsigned int)(arkVersion == V2) + 1, cachingBehavior != PartialDownload_NoCaching);
}

/*
==============
indyfs_statistics_size
==============
*/
unsigned __int64 indyfs_statistics_size(bool enabled, unsigned __int64 bufferSize)
{
  if ( !enabled )
    return 0i64;
  if ( bufferSize < 0x400 )
    bufferSize = 1024i64;
  return bufferSize + 176;
}

/*
==============
indyfs_statistics_term
==============
*/
void indyfs_statistics_term(void)
{
  IndyFsStatistics *v0; 

  if ( s_statisticsEnabled )
  {
    v0 = s_statistics;
    if ( !s_statistics->fileClosed )
    {
      statistics_flush(s_statistics);
      indyfs_fclose(s_statistics->file);
      v0 = s_statistics;
      s_statistics->fileClosed = 1;
    }
    indyfs_mutex_term((LPCRITICAL_SECTION)&v0->lock);
    s_statisticsEnabled = 0;
  }
}

/*
==============
statistics_flush
==============
*/
void statistics_flush()
{
  IndyFsScopedEvent v0; 

  IndyFsScopedEvent::IndyFsScopedEvent(&v0, "Statistics", "Flush");
  indyfs_fwrite(s_statistics->file, s_statistics->buffer, s_statistics->offset);
  s_statistics->offset = 0i64;
  IndyFsScopedEvent::~IndyFsScopedEvent(&v0);
}

/*
==============
statistics_write_message
==============
*/
__int64 statistics_write_message(const char *message, ...)
{
  _RTL_CRITICAL_SECTION *p_lock; 
  __int64 v2; 
  size_t v3; 
  char *v4; 
  unsigned __int64 *v5; 
  int v6; 
  __int64 v7; 
  unsigned __int64 v8; 
  IndyFsStatistics *v9; 
  unsigned __int64 bufferSize; 
  unsigned __int64 offset; 
  int v12; 
  va_list va; 

  va_start(va, message);
  p_lock = (_RTL_CRITICAL_SECTION *)&s_statistics->lock;
  indyfs_mutex_lock((LPCRITICAL_SECTION)&s_statistics->lock);
  if ( s_statistics->fileClosed )
  {
    v2 = 0i64;
  }
  else
  {
    v3 = s_statistics->bufferSize - s_statistics->offset;
    v4 = &s_statistics->buffer[s_statistics->offset];
    v5 = j___local_stdio_printf_options();
    v6 = __stdio_common_vsprintf(*v5 | 2, v4, v3, message, NULL, va);
    v7 = (unsigned int)v6;
    if ( v6 < 0 )
      v7 = 0xFFFFFFFFi64;
    v8 = (int)v7;
    v9 = s_statistics;
    bufferSize = s_statistics->bufferSize;
    if ( (int)v7 >= bufferSize )
    {
LABEL_10:
      indyfs_log_message(Error, "Statistics encoding error - Internal buffer is too small. Buffer size: %zu  Required size: %d", v9->bufferSize, v7);
      v2 = -1i64;
    }
    else
    {
      while ( 1 )
      {
        offset = v9->offset;
        if ( v8 <= bufferSize - offset - 1 )
          break;
        statistics_flush();
        v12 = __stdio_common_vsprintf(*v5 | 2, &s_statistics->buffer[s_statistics->offset], s_statistics->bufferSize - s_statistics->offset, message, NULL, va);
        v7 = (unsigned int)v12;
        if ( v12 < 0 )
          v7 = 0xFFFFFFFFi64;
        v8 = (int)v7;
        v9 = s_statistics;
        bufferSize = s_statistics->bufferSize;
        if ( (int)v7 >= bufferSize )
          goto LABEL_10;
      }
      v9->offset = offset + v8;
      v2 = (int)v7;
    }
  }
  indyfs_mutex_unlock(p_lock);
  return v2;
}


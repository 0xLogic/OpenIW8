/*
==============
StreamLoader::Start
==============
*/

void __fastcall StreamLoader::Start(StreamLoader *this, const stdext::inplace_function<bool __cdecl(StreamLoadCmd &),32,16> *workCallback)
{
  ?Start@StreamLoader@@QEAAXAEBV?$inplace_function@$$A6A_NAEAUStreamLoadCmd@@@Z$0CA@$0BA@@stdext@@@Z(this, workCallback);
}

/*
==============
Stream_Primer_AssetInfo::GetXPakEntry
==============
*/

const XPakEntryInfo *__fastcall Stream_Primer_AssetInfo::GetXPakEntry(Stream_Primer_AssetInfo *this)
{
  return ?GetXPakEntry@Stream_Primer_AssetInfo@@QEBAAEBUXPakEntryInfo@@XZ(this);
}

/*
==============
StreamLoader::Finish
==============
*/

void __fastcall StreamLoader::Finish(StreamLoader *this, StreamLoader::Job *job, bool success)
{
  ?Finish@StreamLoader@@AEAAXPEAUJob@1@_N@Z(this, job, success);
}

/*
==============
StreamLoader::IsRunning
==============
*/

bool __fastcall StreamLoader::IsRunning(StreamLoader *this)
{
  return ?IsRunning@StreamLoader@@QEBA_NXZ(this);
}

/*
==============
StreamLoader::Stop
==============
*/

bool __fastcall StreamLoader::Stop(StreamLoader *this, bool waitUntilDone)
{
  return ?Stop@StreamLoader@@QEAA_N_N@Z(this, waitUntilDone);
}

/*
==============
StreamLoader::Issue
==============
*/

void __fastcall StreamLoader::Issue(StreamLoader *this, StreamLoader::Job *job)
{
  ?Issue@StreamLoader@@AEAAXPEAUJob@1@@Z(this, job);
}

/*
==============
Stream_Primer_AssetInfo::ResolveAddress
==============
*/

unsigned __int8 *__fastcall Stream_Primer_AssetInfo::ResolveAddress(Stream_Primer_AssetInfo *this)
{
  return ?ResolveAddress@Stream_Primer_AssetInfo@@QEAAPEAEXZ(this);
}

/*
==============
StreamLoader::StreamLoader
==============
*/

void __fastcall StreamLoader::StreamLoader(StreamLoader *this, StreamLoader::Job *jobs, unsigned int jobCount, StreamReader *reader, StreamDecompressor *decompressor)
{
  ??0StreamLoader@@AEAA@PEAUJob@0@IPEAUStreamReader@@PEAUStreamDecompressor@@@Z(this, jobs, jobCount, reader, decompressor);
}

/*
==============
StreamLoader::SizeNeeded
==============
*/

unsigned __int64 __fastcall StreamLoader::SizeNeeded(unsigned int maxInFlightLoads)
{
  return ?SizeNeeded@StreamLoader@@SA_KI@Z(maxInFlightLoads);
}

/*
==============
StreamLoader::Read
==============
*/

void __fastcall StreamLoader::Read(StreamLoader *this, StreamLoader::Job *job)
{
  ?Read@StreamLoader@@AEAAXPEAUJob@1@@Z(this, job);
}

/*
==============
StreamLoader::CreateInPlace
==============
*/

StreamLoader *__fastcall StreamLoader::CreateInPlace(unsigned int maxInFlightLoads, unsigned __int64 *allocBase)
{
  return ?CreateInPlace@StreamLoader@@SAPEAU1@IPEA_K@Z(maxInFlightLoads, allocBase);
}

/*
==============
StreamLoader::Update
==============
*/

void __fastcall StreamLoader::Update(StreamLoader *this)
{
  ?Update@StreamLoader@@QEAAXXZ(this);
}

/*
==============
StreamLoader::Decompress
==============
*/

void __fastcall StreamLoader::Decompress(StreamLoader *this, StreamLoader::Job *job)
{
  ?Decompress@StreamLoader@@AEAAXPEAUJob@1@@Z(this, job);
}

/*
==============
Stream_Primer_AssetInfo::GetStreamItemSize
==============
*/

unsigned int __fastcall Stream_Primer_AssetInfo::GetStreamItemSize(Stream_Primer_AssetInfo *this)
{
  return ?GetStreamItemSize@Stream_Primer_AssetInfo@@QEBAIXZ(this);
}

/*
==============
StreamLoader::StreamLoader
==============
*/
void StreamLoader::StreamLoader(StreamLoader *this, StreamLoader::Job *jobs, unsigned int jobCount, StreamReader *reader, StreamDecompressor *decompressor)
{
  this->m_decompressor = decompressor;
  this->m_reader = reader;
  this->m_jobs.storage_.size_ = jobCount;
  this->m_jobs.storage_.data_ = jobs;
  if ( !jobs && jobCount && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\gsl\\span", 546, ASSERT_TYPE_SANITY, "( (!data && ExtentType::size() == 0) || (data && ExtentType::size() >= 0) )", (const char *)&queryFormat, "(!data && ExtentType::size() == 0) || (data && ExtentType::size() >= 0)") )
    __debugbreak();
  this->m_workCallback.m_InvokeFctPtr = stdext::inplace_function<bool (StreamLoadCmd &),32,16>::DefaultFunction;
  this->m_workCallback.m_ManagerFctPtr = NULL;
  this->m_runningJobCount = 0;
  this->m_cancelled = 0;
}

/*
==============
StreamLoader::CreateInPlace
==============
*/
StreamLoader *StreamLoader::CreateInPlace(unsigned int maxInFlightLoads, unsigned __int64 *allocBase)
{
  __int64 v3; 
  unsigned __int64 v4; 
  unsigned __int64 v5; 
  StreamReader *v6; 
  unsigned __int64 v7; 
  unsigned int v8; 
  unsigned __int64 v9; 
  StreamLoader *v10; 
  StreamLoader *result; 
  unsigned __int64 allocBasea; 
  StreamDecompressor *v13; 
  unsigned __int64 v14; 

  allocBasea = *allocBase;
  v3 = maxInFlightLoads;
  v4 = StreamReader::SizeNeeded(maxInFlightLoads, 0x100000ui64);
  v5 = allocBasea + ((656 * v3 + StreamDecompressor::SizeNeeded(v3) + v4 + 143) & 0xFFFFFFFFFFFFFFF0ui64);
  v14 = v5;
  v6 = StreamReader::CreateInPlace(v3, 0x100000ui64, &allocBasea);
  v13 = StreamDecompressor::CreateInPlace(v3, &allocBasea);
  v7 = (allocBasea + 15) & 0xFFFFFFFFFFFFFFF0ui64;
  allocBasea = 656 * v3 + v7;
  if ( allocBasea > v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_loader.cpp", 159, ASSERT_TYPE_ASSERT, "(allocHead <= allocEnd)", (const char *)&queryFormat, "allocHead <= allocEnd") )
    __debugbreak();
  v8 = 0;
  if ( (_DWORD)v3 )
  {
    v9 = v7 + 592;
    do
    {
      *(_QWORD *)(v9 - 592) = stdext::inplace_function<void (bool),32,16>::DefaultFunction;
      *(_QWORD *)(v9 - 584) = 0i64;
      *(_DWORD *)(v9 + 16) = v8++;
      *(_DWORD *)v9 = 0;
      *(_QWORD *)(v9 + 8) = 0i64;
      v9 += 656i64;
    }
    while ( v8 < (unsigned int)v3 );
  }
  v10 = (StreamLoader *)((allocBasea + 15) & 0xFFFFFFFFFFFFFFF0ui64);
  allocBasea = (unsigned __int64)&v10[1];
  if ( (unsigned __int64)&v10[1] > v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_loader.cpp", 159, ASSERT_TYPE_ASSERT, "(allocHead <= allocEnd)", (const char *)&queryFormat, "allocHead <= allocEnd") )
    __debugbreak();
  v10->m_decompressor = v13;
  v10->m_reader = v6;
  v10->m_jobs.storage_.size_ = v3;
  v10->m_jobs.storage_.data_ = (StreamLoader::Job *)v7;
  if ( !v7 && (_DWORD)v3 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\gsl\\span", 546, ASSERT_TYPE_SANITY, "( (!data && ExtentType::size() == 0) || (data && ExtentType::size() >= 0) )", (const char *)&queryFormat, "(!data && ExtentType::size() == 0) || (data && ExtentType::size() >= 0)") )
    __debugbreak();
  v10->m_workCallback.m_ManagerFctPtr = NULL;
  v10->m_workCallback.m_InvokeFctPtr = stdext::inplace_function<bool (StreamLoadCmd &),32,16>::DefaultFunction;
  result = v10;
  v10->m_runningJobCount = 0;
  v10->m_cancelled = 0;
  *allocBase = allocBasea;
  return result;
}

/*
==============
StreamLoader::Decompress
==============
*/
void StreamLoader::Decompress(StreamLoader *this, StreamLoader::Job *job)
{
  bool v4; 
  __int128 v6; 
  StreamDecompressCmd cmd; 

  Sys_ProfBeginNamedEvent(0xFF808080, "StreamLoader::Decompress");
  if ( job->m_state != (Flushing|ReadyToFlush) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_loader.cpp", 389, ASSERT_TYPE_ASSERT, "(job->m_state == Job::State::Decompressing)", (const char *)&queryFormat, "job->m_state == Job::State::Decompressing") )
    __debugbreak();
  if ( !Stream_BackendQueue_IsComplete(job->m_cmd.m_updateId) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_loader.cpp", 390, ASSERT_TYPE_ASSERT, "(Stream_BackendQueue_IsComplete( job->m_cmd.m_updateId ))", (const char *)&queryFormat, "Stream_BackendQueue_IsComplete( job->m_cmd.m_updateId )") )
    __debugbreak();
  if ( this->m_cancelled )
  {
    StreamLoader::Finish(this, job, 0);
  }
  else
  {
    *(_QWORD *)&v6 = this;
    *((_QWORD *)&v6 + 1) = job;
    if ( !job->m_srcData && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_loader.cpp", 452, ASSERT_TYPE_ASSERT, "(job->m_srcData)", (const char *)&queryFormat, "job->m_srcData") )
      __debugbreak();
    cmd.decompressItemCallback.m_InvokeFctPtr = stdext::inplace_function<bool (int,StreamDecompressItem *),32,16>::DefaultFunction;
    cmd.decompressItemCallback.m_ManagerFctPtr = NULL;
    cmd.decompressItemCompleteCallback.m_InvokeFctPtr = stdext::inplace_function<void (int,StreamDecompressItem const *),32,16>::DefaultFunction;
    cmd.decompressItemCompleteCallback.m_ManagerFctPtr = NULL;
    cmd.decompressFinishedCallback.m_InvokeFctPtr = stdext::inplace_function<void (bool),32,16>::DefaultFunction;
    cmd.decompressFinishedCallback.m_ManagerFctPtr = NULL;
    cmd.debugDumpXpakInfo.m_InvokeFctPtr = stdext::inplace_function<char const * (int),32,16>::DefaultFunction;
    cmd.debugDumpXpakInfo.m_ManagerFctPtr = NULL;
    cmd.debugValidateWriteAccess.m_InvokeFctPtr = stdext::inplace_function<void (int),32,16>::DefaultFunction;
    cmd.debugValidateWriteAccess.m_ManagerFctPtr = NULL;
    if ( g_dbPreloading || (v4 = streamFrontendGlob->levelInit.state == 4, cmd.multiJob = 1, !v4) )
      cmd.multiJob = 0;
    cmd.cancelled = &this->m_cancelled;
    cmd.srcBufferStart = (unsigned __int8 *)job->m_srcData;
    cmd.numItems = job->m_cmd.m_numItems;
    *(_QWORD *)cmd.decompressItemCallback.m_Data._Space = job;
    cmd.decompressItemCallback.m_ManagerFctPtr = stdext::inplace_function<bool (int,StreamDecompressItem *),32,16>::manage<_lambda_8cf32654943a0140ea85665a97d6afa6_>;
    cmd.decompressItemCallback.m_InvokeFctPtr = stdext::inplace_function<bool (int,StreamDecompressItem *),32,16>::invoke<_lambda_8cf32654943a0140ea85665a97d6afa6_>;
    cmd.decompressItemCompleteCallback.m_ManagerFctPtr = stdext::inplace_function<void (int,StreamDecompressItem const *),32,16>::manage<_lambda_daa1bd346ce2cbc1faa5ba2babdcc38e_>;
    cmd.decompressItemCompleteCallback.m_InvokeFctPtr = stdext::inplace_function<void (int,StreamDecompressItem const *),32,16>::invoke<_lambda_daa1bd346ce2cbc1faa5ba2babdcc38e_>;
    __asm
    {
      vmovups xmm0, [rsp+1A0h+var_170]
      vmovups xmmword ptr [rbp+0A0h+cmd.decompressFinishedCallback.m_Data._Space], xmm0
    }
    cmd.decompressFinishedCallback.m_ManagerFctPtr = stdext::inplace_function<void (bool),32,16>::manage<_lambda_3df850bf9ab8ef58c6bfbfd1f85f9b9d_>;
    cmd.decompressFinishedCallback.m_InvokeFctPtr = stdext::inplace_function<void (bool),32,16>::invoke<_lambda_3df850bf9ab8ef58c6bfbfd1f85f9b9d_>;
    *(_QWORD *)cmd.debugDumpXpakInfo.m_Data._Space = job;
    cmd.debugDumpXpakInfo.m_ManagerFctPtr = stdext::inplace_function<char const * (int),32,16>::manage<_lambda_0b223ba60550f6368c5b3582b854bd9d_>;
    cmd.debugDumpXpakInfo.m_InvokeFctPtr = stdext::inplace_function<char const * (int),32,16>::invoke<_lambda_0b223ba60550f6368c5b3582b854bd9d_>;
    StreamDecompressor::QueueJob(this->m_decompressor, job->m_jobIndex, &cmd);
    cmd.debugValidateWriteAccess.m_InvokeFctPtr = stdext::inplace_function<void (int),32,16>::DefaultFunction;
    if ( cmd.debugValidateWriteAccess.m_ManagerFctPtr )
      cmd.debugValidateWriteAccess.m_ManagerFctPtr(&cmd.debugValidateWriteAccess.m_Data, NULL, Destroy);
    cmd.debugValidateWriteAccess.m_ManagerFctPtr = NULL;
    cmd.debugDumpXpakInfo.m_InvokeFctPtr = stdext::inplace_function<char const * (int),32,16>::DefaultFunction;
    if ( cmd.debugDumpXpakInfo.m_ManagerFctPtr )
      cmd.debugDumpXpakInfo.m_ManagerFctPtr(&cmd.debugDumpXpakInfo.m_Data, NULL, Destroy);
    cmd.debugDumpXpakInfo.m_ManagerFctPtr = NULL;
    cmd.decompressFinishedCallback.m_InvokeFctPtr = stdext::inplace_function<void (bool),32,16>::DefaultFunction;
    if ( cmd.decompressFinishedCallback.m_ManagerFctPtr )
      cmd.decompressFinishedCallback.m_ManagerFctPtr(&cmd.decompressFinishedCallback.m_Data, NULL, Destroy);
    cmd.decompressFinishedCallback.m_ManagerFctPtr = NULL;
    cmd.decompressItemCompleteCallback.m_InvokeFctPtr = stdext::inplace_function<void (int,StreamDecompressItem const *),32,16>::DefaultFunction;
    if ( cmd.decompressItemCompleteCallback.m_ManagerFctPtr )
      cmd.decompressItemCompleteCallback.m_ManagerFctPtr(&cmd.decompressItemCompleteCallback.m_Data, NULL, Destroy);
    cmd.decompressItemCompleteCallback.m_ManagerFctPtr = NULL;
    cmd.decompressItemCallback.m_InvokeFctPtr = stdext::inplace_function<bool (int,StreamDecompressItem *),32,16>::DefaultFunction;
    if ( cmd.decompressItemCallback.m_ManagerFctPtr )
      cmd.decompressItemCallback.m_ManagerFctPtr(&cmd.decompressItemCallback.m_Data, NULL, Destroy);
  }
  Sys_ProfEndNamedEvent();
}

/*
==============
StreamLoader::Finish
==============
*/
void StreamLoader::Finish(StreamLoader *this, StreamLoader::Job *job, bool success)
{
  volatile int *p_m_runningJobCount; 

  Sys_ProfBeginNamedEvent(0xFF808080, "StreamLoader::Finish");
  if ( job->m_state == Idle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_loader.cpp", 480, ASSERT_TYPE_ASSERT, "(job->m_state != Job::State::Idle)", (const char *)&queryFormat, "job->m_state != Job::State::Idle", -2i64) )
    __debugbreak();
  job->m_state = Idle;
  job->m_cmd.m_loadCallback.m_InvokeFctPtr(success, &job->m_cmd.m_loadCallback.m_Data);
  StreamLoader::Issue(this, job);
  p_m_runningJobCount = &this->m_runningJobCount;
  if ( this->m_runningJobCount <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_loader.cpp", 487, ASSERT_TYPE_ASSERT, "(m_runningJobCount > 0)", (const char *)&queryFormat, "m_runningJobCount > 0") )
    __debugbreak();
  if ( ((unsigned __int8)p_m_runningJobCount & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &this->m_runningJobCount) )
    __debugbreak();
  _InterlockedDecrement(p_m_runningJobCount);
  Sys_ProfEndNamedEvent();
}

/*
==============
Stream_Primer_AssetInfo::GetStreamItemSize
==============
*/
__int64 Stream_Primer_AssetInfo::GetStreamItemSize(Stream_Primer_AssetInfo *this)
{
  StreamLeafType m_leafType; 
  unsigned int v3; 
  GfxImage *GfxImageAtIndex; 
  GfxImageStreamLevelCountAndSize *p_levelCountAndSize; 
  __int64 v7; 
  __int64 v8; 

  m_leafType = this->m_leafType;
  if ( (m_leafType & 0xF) != 0 )
  {
    v3 = 0;
    GfxImageAtIndex = DB_GetGfxImageAtIndex(this->m_assetIndex >> 2);
    if ( this->m_leafType != STREAM_LEAF_IMAGE_PART_0 )
    {
      switch ( this->m_leafType )
      {
        case STREAM_LEAF_IMAGE_PART_1:
          v3 = 1;
          break;
        case STREAM_LEAF_IMAGE_PART_2:
          v3 = 2;
          break;
        case STREAM_LEAF_IMAGE_PART_3:
          v3 = 3;
          break;
        default:
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_loader.cpp", 115, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "unreachable code") )
            __debugbreak();
          break;
      }
    }
    if ( v3 >= GfxImageAtIndex->streamedPartCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_loader.cpp", 117, ASSERT_TYPE_ASSERT, "(unsigned)( partIndex ) < (unsigned)( image->streamedPartCount )", "partIndex doesn't index image->streamedPartCount\n\t%i not in [0, %i)", v3, GfxImageAtIndex->streamedPartCount) )
      __debugbreak();
    if ( (GfxImageAtIndex->flags & 0x40) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_load_common.h", 201, ASSERT_TYPE_ASSERT, "(R_IsStreamedImage( image ))", (const char *)&queryFormat, "R_IsStreamedImage( image )") )
      __debugbreak();
    if ( v3 >= Image_GetStreamedPartCount(GfxImageAtIndex) )
    {
      LODWORD(v8) = Image_GetStreamedPartCount(GfxImageAtIndex);
      LODWORD(v7) = v3;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_load_common.h", 202, ASSERT_TYPE_ASSERT, "(unsigned)( part ) < (unsigned)( Image_GetStreamedPartCount( image ) )", "part doesn't index Image_GetStreamedPartCount( image )\n\t%i not in [0, %i)", v7, v8) )
        __debugbreak();
    }
    p_levelCountAndSize = &GfxImageAtIndex->streams[v3].levelCountAndSize;
    if ( v3 )
      return ((unsigned int)*p_levelCountAndSize >> 4) - (*((_DWORD *)&GfxImageAtIndex->levelCount + 10 * v3) >> 4);
    else
      return (unsigned int)*p_levelCountAndSize >> 4;
  }
  else if ( m_leafType == STREAM_LEAF_MESH )
  {
    return DB_GetXModelSurfsAtIndex(this->m_assetIndex)->shared->dataSize;
  }
  else
  {
    if ( m_leafType != STREAM_LEAF_GENERIC && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_loader.cpp", 127, ASSERT_TYPE_SANITY, "( m_leafType == STREAM_LEAF_GENERIC )", (const char *)&queryFormat, "m_leafType == STREAM_LEAF_GENERIC") )
      __debugbreak();
    return DB_GetStreamKeyAtIndex(this->m_assetIndex)->dataSize;
  }
}

/*
==============
Stream_Primer_AssetInfo::GetXPakEntry
==============
*/
XPakEntryInfo *Stream_Primer_AssetInfo::GetXPakEntry(Stream_Primer_AssetInfo *this)
{
  StreamLeafType m_leafType; 
  GfxImage *GfxImageAtIndex; 
  unsigned int v4; 
  int v5; 
  __int64 v6; 

  m_leafType = this->m_leafType;
  if ( (m_leafType & 0xF) != 0 )
  {
    GfxImageAtIndex = DB_GetGfxImageAtIndex(this->m_assetIndex >> 2);
    if ( this->m_leafType != STREAM_LEAF_IMAGE_PART_0 )
    {
      switch ( this->m_leafType )
      {
        case STREAM_LEAF_IMAGE_PART_1:
          v5 = 1;
          v4 = 1;
          v6 = 96i64;
          goto LABEL_9;
        case STREAM_LEAF_IMAGE_PART_2:
          v5 = 2;
          v6 = 136i64;
          v4 = 2;
          goto LABEL_9;
        case STREAM_LEAF_IMAGE_PART_3:
          v5 = 3;
          v6 = 176i64;
          v4 = 3;
          goto LABEL_9;
      }
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_loader.cpp", 41, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "unreachable code") )
        __debugbreak();
    }
    v4 = 0;
    v5 = 0;
    v6 = 56i64;
LABEL_9:
    if ( v4 >= GfxImageAtIndex->streamedPartCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_loader.cpp", 43, ASSERT_TYPE_ASSERT, "(unsigned)( partIndex ) < (unsigned)( image->streamedPartCount )", "partIndex doesn't index image->streamedPartCount\n\t%i not in [0, %i)", v5, GfxImageAtIndex->streamedPartCount) )
      __debugbreak();
    return (XPakEntryInfo *)((char *)GfxImageAtIndex + v6);
  }
  if ( m_leafType == STREAM_LEAF_MESH )
    return &DB_GetXModelSurfsAtIndex(this->m_assetIndex)->xpakEntry;
  if ( m_leafType != STREAM_LEAF_GENERIC && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_loader.cpp", 53, ASSERT_TYPE_SANITY, "( m_leafType == STREAM_LEAF_GENERIC )", (const char *)&queryFormat, "m_leafType == STREAM_LEAF_GENERIC") )
    __debugbreak();
  return &DB_GetStreamKeyAtIndex(this->m_assetIndex)->xpakInfo;
}

/*
==============
StreamLoader::IsRunning
==============
*/
bool StreamLoader::IsRunning(StreamLoader *this)
{
  volatile int *p_m_runningJobCount; 
  int v3; 

  p_m_runningJobCount = &this->m_runningJobCount;
  if ( this->m_runningJobCount < 0 )
  {
    v3 = *p_m_runningJobCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_loader.cpp", 244, ASSERT_TYPE_ASSERT, "( m_runningJobCount ) >= ( 0 )", "%s >= %s\n\t%i, %i", "m_runningJobCount", "0", v3, 0i64) )
      __debugbreak();
  }
  if ( ((unsigned __int8)p_m_runningJobCount & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 141, ASSERT_TYPE_ASSERT, "( ( IsAligned( addr, sizeof( volatile_int32 ) ) ) )", "( addr ) = %p", (const void *)p_m_runningJobCount) )
    __debugbreak();
  return *p_m_runningJobCount > 0;
}

/*
==============
StreamLoader::Issue
==============
*/
void StreamLoader::Issue(StreamLoader *this, StreamLoader::Job *job)
{
  __int64 v4; 

  Sys_ProfBeginNamedEvent(0xFF808080, "StreamLoader::Issue");
  if ( job->m_state && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_loader.cpp", 252, ASSERT_TYPE_ASSERT, "(job->m_state == Job::State::Idle)", (const char *)&queryFormat, "job->m_state == Job::State::Idle", -2i64) )
    __debugbreak();
  if ( !this->m_cancelled && this->m_workCallback.m_InvokeFctPtr((StreamLoadCmd *)job, &this->m_workCallback.m_Data) )
  {
    Sys_InterlockedIncrement(&this->m_runningJobCount);
    if ( job->m_cmd.m_numItems != 1 && job->m_cmd.m_xpakSize > 0x100000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_loader.cpp", 268, ASSERT_TYPE_ASSERT, "(job->m_cmd.m_numItems == 1 || job->m_cmd.m_xpakSize <= STREAM_LOADER_BLOCK_SIZE)", (const char *)&queryFormat, "job->m_cmd.m_numItems == 1 || job->m_cmd.m_xpakSize <= STREAM_LOADER_BLOCK_SIZE") )
      __debugbreak();
    if ( !job->m_cmd.m_xpakSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_loader.cpp", 269, ASSERT_TYPE_ASSERT, "(job->m_cmd.m_xpakSize > 0)", (const char *)&queryFormat, "job->m_cmd.m_xpakSize > 0") )
      __debugbreak();
    v4 = job->m_cmd.m_xpakOffset & 0xFFFFFFFFFFFF8000ui64;
    job->m_readBegin = v4;
    job->m_readEnd = job->m_cmd.m_xpakOffset + job->m_cmd.m_xpakSize;
    job->m_currentRead = v4;
    job->m_state = ReadyToFlush;
    StreamLoader::Read(this, job);
  }
  Sys_ProfEndNamedEvent();
}

/*
==============
StreamLoader::Read
==============
*/
void StreamLoader::Read(StreamLoader *this, StreamLoader::Job *job)
{
  unsigned __int64 v4; 
  __int64 m_currentRead; 
  __int64 v6; 
  unsigned int v7; 
  __int64 v8; 
  bool v10; 
  __int128 v11; 
  stdext::inplace_function<void __cdecl(void *,unsigned __int64),32,16> readCallback; 

  Sys_ProfBeginNamedEvent(0xFF808080, "StreamLoader::Read");
  if ( job->m_state != ReadyToFlush && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_loader.cpp", 306, ASSERT_TYPE_ASSERT, "(job->m_state == Job::State::Reading)", (const char *)&queryFormat, "job->m_state == Job::State::Reading") )
    __debugbreak();
  if ( this->m_cancelled )
    goto LABEL_30;
  v4 = job->m_readEnd - job->m_currentRead;
  if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_loader.cpp", 316, ASSERT_TYPE_ASSERT, "(remainingBytesToRead)", (const char *)&queryFormat, "remainingBytesToRead") )
    __debugbreak();
  m_currentRead = job->m_currentRead;
  if ( m_currentRead == job->m_readBegin )
  {
    if ( m_currentRead > job->m_cmd.m_xpakOffset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_loader.cpp", 321, ASSERT_TYPE_ASSERT, "(job->m_currentRead <= job->m_cmd.m_xpakOffset)", (const char *)&queryFormat, "job->m_currentRead <= job->m_cmd.m_xpakOffset") )
      __debugbreak();
    v6 = job->m_cmd.m_xpakOffset - job->m_currentRead;
    if ( (v6 < 0 || (unsigned __int64)v6 > 0xFFFFFFFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned int __cdecl truncate_cast_impl<unsigned int,__int64>(__int64)", "unsigned", (unsigned int)v6, "signed", v6) )
      __debugbreak();
    job->m_readOffset = v6;
    if ( (unsigned int)v6 >= 0x8000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_loader.cpp", 329, ASSERT_TYPE_ASSERT, "(job->m_readOffset < STREAM_DISK_READ_ALIGNMENT)", (const char *)&queryFormat, "job->m_readOffset < STREAM_DISK_READ_ALIGNMENT") )
      __debugbreak();
  }
  else
  {
    job->m_readOffset = 0;
  }
  if ( v4 <= 0x100000 )
  {
    job->m_readSize = v4;
  }
  else
  {
    job->m_readSize = 0x100000;
    LODWORD(v4) = 0x100000;
  }
  *(_QWORD *)&v11 = this;
  *((_QWORD *)&v11 + 1) = job;
  v7 = (v4 + 0x7FFF) & 0xFFFF8000;
  if ( v7 > 0x100000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_loader.cpp", 371, ASSERT_TYPE_ASSERT, "(alignedReadSize <= STREAM_LOADER_BLOCK_SIZE)", (const char *)&queryFormat, "alignedReadSize <= STREAM_LOADER_BLOCK_SIZE") )
    __debugbreak();
  v8 = job->m_currentRead;
  job->m_currentRead = v8 + job->m_readSize;
  __asm
  {
    vmovups xmm0, [rsp+0E8h+var_98]
    vmovups xmmword ptr [rsp+0E8h+var_78.m_Data._Space], xmm0
  }
  readCallback.m_ManagerFctPtr = stdext::inplace_function<void (void *,unsigned __int64),32,16>::manage<_lambda_3511d6a16932ab6d3e0b6ae8e0e35998_>;
  readCallback.m_InvokeFctPtr = stdext::inplace_function<void (void *,unsigned __int64),32,16>::invoke<_lambda_3511d6a16932ab6d3e0b6ae8e0e35998_>;
  v10 = !StreamReader::QueueJob(this->m_reader, job->m_jobIndex, job->m_cmd.m_xpakIndex, v8, v7, &readCallback);
  readCallback.m_InvokeFctPtr = stdext::inplace_function<void (void *,unsigned __int64),32,16>::DefaultFunction;
  if ( readCallback.m_ManagerFctPtr )
    readCallback.m_ManagerFctPtr(&readCallback.m_Data, NULL, Destroy);
  if ( v10 )
  {
    job->m_currentRead = v8;
    Com_PrintError(35, "StreamLoader::Read failed to Queue Read\n");
LABEL_30:
    StreamLoader::Finish(this, job, 0);
  }
  Sys_ProfEndNamedEvent();
}

/*
==============
Stream_Primer_AssetInfo::ResolveAddress
==============
*/
unsigned __int8 *Stream_Primer_AssetInfo::ResolveAddress(Stream_Primer_AssetInfo *this)
{
  unsigned __int8 *m_data; 
  unsigned int v3; 
  __int64 v4; 
  const char *name; 
  unsigned int v6; 
  unsigned __int8 *v7; 
  unsigned __int8 *v8; 
  unsigned int StreamItemSize; 
  __int64 v12; 
  unsigned int StreamedPartCount; 
  Stream_Logger_Item item; 
  Stream_Logger_Item result; 
  streamer_handle_t handle; 

  if ( !this->m_locked && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_loader.cpp", 62, ASSERT_TYPE_ASSERT, "(m_locked)", (const char *)&queryFormat, "m_locked") )
    __debugbreak();
  m_data = this->m_data;
  if ( !this->m_data )
  {
    Stream_Primer_AssetInfo::GetHandle(this);
    v3 = 0;
    LODWORD(v4) = 0;
    if ( (this->m_leafType & 0xF) != 0 )
    {
      v4 = this->m_assetIndex & 3;
      name = Stream_Primer_AssetInfo::GetAssetPtr(this).m_image->name;
      if ( !name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_load_common.h", 211, ASSERT_TYPE_ASSERT, "(image)", (const char *)&queryFormat, "image") )
        __debugbreak();
      if ( (*((_DWORD *)name + 6) & 0x40) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_load_common.h", 212, ASSERT_TYPE_ASSERT, "(R_IsStreamedImage( image ))", (const char *)&queryFormat, "R_IsStreamedImage( image )") )
        __debugbreak();
      if ( (*((_DWORD *)name + 6) & 0x40) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_load_common.h", 192, ASSERT_TYPE_ASSERT, "(R_IsStreamedImage( image ))", (const char *)&queryFormat, "R_IsStreamedImage( image )") )
        __debugbreak();
      if ( (unsigned int)v4 >= Image_GetStreamedPartCount((const GfxImage *)name) )
      {
        StreamedPartCount = Image_GetStreamedPartCount((const GfxImage *)name);
        LODWORD(v12) = v4;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_load_common.h", 193, ASSERT_TYPE_ASSERT, "(unsigned)( part ) < (unsigned)( Image_GetStreamedPartCount( image ) )", "part doesn't index Image_GetStreamedPartCount( image )\n\t%i not in [0, %i)", v12, StreamedPartCount) )
          __debugbreak();
      }
      v6 = *(_DWORD *)&name[40 * (unsigned int)v4 + 88] >> 4;
      if ( *((_DWORD *)name + 7) < v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_image_load_common.h", 215, ASSERT_TYPE_ASSERT, "( image->totalSize ) >= ( size )", "%s >= %s\n\t%u, %u", "image->totalSize", "size", *((_DWORD *)name + 7), *(_DWORD *)&name[40 * v4 + 88] >> 4) )
        __debugbreak();
      v3 = *((_DWORD *)name + 7) - v6;
    }
    v7 = Stream_AddressSpace_LockFrontendAddr(handle, v4);
    if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_loader.cpp", 80, ASSERT_TYPE_SANITY, "( dstBuff )", (const char *)&queryFormat, "dstBuff") )
      __debugbreak();
    v8 = &v7[v3];
    if ( ((unsigned __int8)v8 & 0xF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_loader.cpp", 83, ASSERT_TYPE_SANITY, "( IsAligned( dstBuff, MEM_SUB_PAGE_SIZE ) )", (const char *)&queryFormat, "IsAligned( dstBuff, MEM_SUB_PAGE_SIZE )") )
      __debugbreak();
    if ( this->m_data )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_loader.cpp", 85, ASSERT_TYPE_ASSERT, "(nullptr == m_data)", (const char *)&queryFormat, "nullptr == m_data") )
        __debugbreak();
    }
    this->m_data = v8;
    _RAX = Stream_Logger_MakeItem(&result, &handle);
    __asm
    {
      vmovups xmm0, xmmword ptr [rax]
      vmovups xmmword ptr [rsp+88h+item.___u0], xmm0
    }
    StreamItemSize = Stream_Primer_AssetInfo::GetStreamItemSize(this);
    Stream_Logger_OnPrimerIntoAddress("Stream_Primer_AssetInfo::ResolveAddress", NULL, &item, this->m_data, StreamItemSize);
    return this->m_data;
  }
  return m_data;
}

/*
==============
StreamLoader::SizeNeeded
==============
*/
unsigned __int64 StreamLoader::SizeNeeded(unsigned int maxInFlightLoads)
{
  __int64 v1; 
  unsigned __int64 v2; 

  v1 = maxInFlightLoads;
  v2 = StreamReader::SizeNeeded(maxInFlightLoads, 0x100000ui64);
  return (656 * v1 + v2 + StreamDecompressor::SizeNeeded(v1) + 143) & 0xFFFFFFFFFFFFFFF0ui64;
}

/*
==============
StreamLoader::Start
==============
*/
void StreamLoader::Start(StreamLoader *this, const stdext::inplace_function<bool __cdecl(StreamLoadCmd &),32,16> *workCallback)
{
  void (__fastcall *m_ManagerFctPtr)(void *, const void *, stdext::inplace_function_operation); 
  __int64 v5; 
  void (__fastcall *v6)(void *, const void *, stdext::inplace_function_operation); 
  gsl::span<StreamLoader::Job,-1> *p_m_jobs; 
  __int64 size; 
  __int64 v9; 

  if ( this->m_workCallback.m_InvokeFctPtr != stdext::inplace_function<bool (StreamLoadCmd &),32,16>::DefaultFunction && StreamLoader::IsRunning(this) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_loader.cpp", 186, ASSERT_TYPE_ASSERT, "(!m_workCallback || !IsRunning())", (const char *)&queryFormat, "!m_workCallback || !IsRunning()", -2i64) )
    __debugbreak();
  this->m_workCallback.m_InvokeFctPtr = stdext::inplace_function<bool (StreamLoadCmd &),32,16>::DefaultFunction;
  m_ManagerFctPtr = this->m_workCallback.m_ManagerFctPtr;
  if ( m_ManagerFctPtr )
    m_ManagerFctPtr(&this->m_workCallback.m_Data, NULL, Destroy);
  v5 = 0i64;
  this->m_workCallback.m_ManagerFctPtr = NULL;
  v6 = workCallback->m_ManagerFctPtr;
  if ( v6 )
    v6(&this->m_workCallback.m_Data, &workCallback->m_Data, Copy);
  this->m_workCallback.m_InvokeFctPtr = workCallback->m_InvokeFctPtr;
  this->m_workCallback.m_ManagerFctPtr = workCallback->m_ManagerFctPtr;
  p_m_jobs = &this->m_jobs;
  if ( this != (StreamLoader *)-16i64 && p_m_jobs->storage_.size_ < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\gsl\\span", 162, ASSERT_TYPE_SANITY, "( span == nullptr || (index_ >= 0 && index <= span_->length()) )", (const char *)&queryFormat, "span == nullptr || (index_ >= 0 && index <= span_->length())") )
    __debugbreak();
  size = p_m_jobs->storage_.size_;
  if ( p_m_jobs->storage_.size_ < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\gsl\\span", 162, ASSERT_TYPE_SANITY, "( span == nullptr || (index_ >= 0 && index <= span_->length()) )", (const char *)&queryFormat, "span == nullptr || (index_ >= 0 && index <= span_->length())") )
    __debugbreak();
  v9 = 0i64;
  while ( v5 != size )
  {
    if ( (v5 < 0 || v5 >= p_m_jobs->storage_.size_) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\gsl\\span", 514, ASSERT_TYPE_SANITY, "( idx >= 0 && idx < storage_.size() )", (const char *)&queryFormat, "idx >= 0 && idx < storage_.size()") )
      __debugbreak();
    StreamLoader::Issue(this, &this->m_jobs.storage_.data_[v9]);
    if ( (v5 < 0 || v5 >= p_m_jobs->storage_.size_) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\gsl\\span", 187, ASSERT_TYPE_SANITY, "( span_ && index_ >= 0 && index_ < span_->length() )", (const char *)&queryFormat, "span_ && index_ >= 0 && index_ < span_->length()") )
      __debugbreak();
    ++v5;
    ++v9;
  }
}

/*
==============
StreamLoader::Stop
==============
*/
__int64 StreamLoader::Stop(StreamLoader *this, bool waitUntilDone)
{
  __int64 v4; 
  gsl::span<StreamLoader::Job,-1> *p_m_jobs; 
  __int64 size; 
  __int64 v7; 
  unsigned __int8 v8; 
  signed __int32 v10[8]; 
  __int64 v11; 
  __int64 v12; 
  __int64 v13; 

  v13 = -2i64;
  Sys_ProfBeginNamedEvent(0xFF808080, "StreamLoader::Stop");
  Stream_CheckFrontendUpdateLocks();
  this->m_cancelled = 1;
  _InterlockedOr(v10, 0);
  if ( waitUntilDone )
  {
    while ( !StreamReader::CancelJobs(this->m_reader) )
      Sys_Sleep(0);
    while ( StreamDecompressor::IsRunning(this->m_decompressor) || StreamLoader::IsRunning(this) )
    {
      StreamLoader::Update(this);
      Sys_Sleep(0);
    }
    v4 = 0i64;
    if ( this->m_runningJobCount )
    {
      v12 = 0i64;
      LODWORD(v11) = this->m_runningJobCount;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_loader.cpp", 221, ASSERT_TYPE_ASSERT, "( m_runningJobCount ) == ( 0 )", "%s == %s\n\t%i, %i", "m_runningJobCount", "0", v11, 0i64) )
        __debugbreak();
    }
    p_m_jobs = &this->m_jobs;
    if ( p_m_jobs && p_m_jobs->storage_.size_ < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\gsl\\span", 162, ASSERT_TYPE_SANITY, "( span == nullptr || (index_ >= 0 && index <= span_->length()) )", (const char *)&queryFormat, "span == nullptr || (index_ >= 0 && index <= span_->length())") )
      __debugbreak();
    size = p_m_jobs->storage_.size_;
    if ( p_m_jobs->storage_.size_ < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\gsl\\span", 162, ASSERT_TYPE_SANITY, "( span == nullptr || (index_ >= 0 && index <= span_->length()) )", (const char *)&queryFormat, "span == nullptr || (index_ >= 0 && index <= span_->length())") )
      __debugbreak();
    v7 = 0i64;
    while ( v4 != size )
    {
      if ( (v4 < 0 || v4 >= p_m_jobs->storage_.size_) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\gsl\\span", 514, ASSERT_TYPE_SANITY, "( idx >= 0 && idx < storage_.size() )", (const char *)&queryFormat, "idx >= 0 && idx < storage_.size()") )
        __debugbreak();
      if ( p_m_jobs->storage_.data_[v7].m_state && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_loader.cpp", 224, ASSERT_TYPE_ASSERT, "(job.m_state == Job::State::Idle)", (const char *)&queryFormat, "job.m_state == Job::State::Idle") )
        __debugbreak();
      if ( (v4 < 0 || v4 >= p_m_jobs->storage_.size_) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\gsl\\span", 187, ASSERT_TYPE_SANITY, "( span_ && index_ >= 0 && index_ < span_->length() )", (const char *)&queryFormat, "span_ && index_ >= 0 && index_ < span_->length()") )
        __debugbreak();
      ++v4;
      ++v7;
    }
    goto LABEL_33;
  }
  StreamLoader::Update(this);
  if ( !StreamLoader::IsRunning(this) )
  {
LABEL_33:
    v8 = 1;
    goto LABEL_34;
  }
  v8 = 0;
LABEL_34:
  Sys_ProfEndNamedEvent();
  return v8;
}

/*
==============
StreamLoader::Update
==============
*/
void StreamLoader::Update(StreamLoader *this)
{
  gsl::span<StreamLoader::Job,-1> *p_m_jobs; 
  __int64 v3; 
  __int64 size; 
  __int64 v5; 
  StreamLoader::Job *v6; 

  Sys_ProfBeginNamedEvent(0xFF808080, "StreamLoader::Update");
  Stream_CheckFrontendUpdateLocks();
  p_m_jobs = &this->m_jobs;
  v3 = 0i64;
  if ( this != (StreamLoader *)-16i64 && p_m_jobs->storage_.size_ < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\gsl\\span", 162, ASSERT_TYPE_SANITY, "( span == nullptr || (index_ >= 0 && index <= span_->length()) )", (const char *)&queryFormat, "span == nullptr || (index_ >= 0 && index <= span_->length())", -2i64) )
    __debugbreak();
  size = p_m_jobs->storage_.size_;
  if ( p_m_jobs->storage_.size_ < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\gsl\\span", 162, ASSERT_TYPE_SANITY, "( span == nullptr || (index_ >= 0 && index <= span_->length()) )", (const char *)&queryFormat, "span == nullptr || (index_ >= 0 && index <= span_->length())") )
    __debugbreak();
  v5 = 0i64;
  while ( v3 != size )
  {
    if ( (v3 < 0 || v3 >= p_m_jobs->storage_.size_) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\gsl\\span", 514, ASSERT_TYPE_SANITY, "( idx >= 0 && idx < storage_.size() )", (const char *)&queryFormat, "idx >= 0 && idx < storage_.size()") )
      __debugbreak();
    v6 = &this->m_jobs.storage_.data_[v5];
    if ( v6->m_state == Flushing )
    {
      if ( this->m_cancelled )
      {
        StreamLoader::Finish(this, &this->m_jobs.storage_.data_[v5], 0);
      }
      else if ( Stream_BackendQueue_IsComplete(v6->m_cmd.m_updateId) )
      {
        v6->m_state = Flushing|ReadyToFlush;
        StreamLoader::Decompress(this, v6);
      }
    }
    if ( (v3 < 0 || v3 >= p_m_jobs->storage_.size_) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\gsl\\span", 187, ASSERT_TYPE_SANITY, "( span_ && index_ >= 0 && index_ < span_->length() )", (const char *)&queryFormat, "span_ && index_ >= 0 && index_ < span_->length()") )
      __debugbreak();
    ++v3;
    ++v5;
  }
  Sys_ProfEndNamedEvent();
}


/*
==============
StreamDecompressor::CreateInPlace
==============
*/

StreamDecompressor *__fastcall StreamDecompressor::CreateInPlace(unsigned int maxJobs, unsigned __int64 *allocBase)
{
  return ?CreateInPlace@StreamDecompressor@@SAPEAU1@IPEA_K@Z(maxJobs, allocBase);
}

/*
==============
StreamDecompressor::Job::HandleDecompressError
==============
*/

void __fastcall StreamDecompressor::Job::HandleDecompressError(StreamDecompressor::Job *this, StreamDecompressor::Job::DecompressErrorType errorType, unsigned int errorCode, unsigned int errorDetails)
{
  ?HandleDecompressError@Job@StreamDecompressor@@AEAAXW4DecompressErrorType@12@II@Z(this, errorType, errorCode, errorDetails);
}

/*
==============
StreamDecompressor::MaxJobs
==============
*/

unsigned int __fastcall StreamDecompressor::MaxJobs(StreamDecompressor *this)
{
  return ?MaxJobs@StreamDecompressor@@QEBAIXZ(this);
}

/*
==============
StreamDecompressor::SizeNeeded
==============
*/

unsigned __int64 __fastcall StreamDecompressor::SizeNeeded(unsigned int maxJobs)
{
  return ?SizeNeeded@StreamDecompressor@@SA_KI@Z(maxJobs);
}

/*
==============
Stream_DecompressCheckAsyncCmd
==============
*/

void __fastcall Stream_DecompressCheckAsyncCmd(const void *const data)
{
  ?Stream_DecompressCheckAsyncCmd@@YAXQEBX@Z(data);
}

/*
==============
StreamDecompressor::Job::CheckAsync
==============
*/

void __fastcall StreamDecompressor::Job::CheckAsync(StreamDecompressor::Job *this)
{
  ?CheckAsync@Job@StreamDecompressor@@QEAAXXZ(this);
}

/*
==============
StreamDecompressor::Job::DecompressSingleBlock
==============
*/

StreamDecompressor::Job::DecompressResult __fastcall StreamDecompressor::Job::DecompressSingleBlock(StreamDecompressor::Job *this)
{
  return ?DecompressSingleBlock@Job@StreamDecompressor@@AEAA?AW4DecompressResult@12@XZ(this);
}

/*
==============
StreamDecompressor::Job::CheckAsyncNeedsToWait
==============
*/

bool __fastcall StreamDecompressor::Job::CheckAsyncNeedsToWait(StreamDecompressor::Job *this)
{
  return ?CheckAsyncNeedsToWait@Job@StreamDecompressor@@QEBA_NXZ(this);
}

/*
==============
StreamDecompressor::IsRunning
==============
*/

bool __fastcall StreamDecompressor::IsRunning(StreamDecompressor *this)
{
  return ?IsRunning@StreamDecompressor@@QEBA_NXZ(this);
}

/*
==============
StreamDecompressor::QueueJob
==============
*/

void __fastcall StreamDecompressor::QueueJob(StreamDecompressor *this, unsigned int jobIndex, const StreamDecompressCmd *cmd)
{
  ?QueueJob@StreamDecompressor@@QEAAXIAEBUStreamDecompressCmd@@@Z(this, jobIndex, cmd);
}

/*
==============
StreamDecompressor::Job::ProcessDecompressCommand
==============
*/

unsigned int __fastcall StreamDecompressor::Job::ProcessDecompressCommand(StreamDecompressor::Job *this, unsigned int command, const unsigned __int8 *inputData, unsigned int compressedSize, unsigned __int8 *outputData, unsigned int uncompressedSize)
{
  return ?ProcessDecompressCommand@Job@StreamDecompressor@@AEAAIIPEBEIPEAEI@Z(this, command, inputData, compressedSize, outputData, uncompressedSize);
}

/*
==============
StreamDecompressor::Job::HasPendingAsyncWork
==============
*/

bool __fastcall StreamDecompressor::Job::HasPendingAsyncWork(StreamDecompressor::Job *this)
{
  return ?HasPendingAsyncWork@Job@StreamDecompressor@@AEBA_NXZ(this);
}

/*
==============
StreamDecompressor::Job::Decompress
==============
*/

void __fastcall StreamDecompressor::Job::Decompress(StreamDecompressor::Job *this)
{
  ?Decompress@Job@StreamDecompressor@@QEAAXXZ(this);
}

/*
==============
StreamDecompressor::Job::Finish
==============
*/

void __fastcall StreamDecompressor::Job::Finish(StreamDecompressor::Job *this, bool success)
{
  ?Finish@Job@StreamDecompressor@@QEAAX_N@Z(this, success);
}

/*
==============
Stream_DecompressCmd
==============
*/

void __fastcall Stream_DecompressCmd(const void *const data)
{
  ?Stream_DecompressCmd@@YAXQEBX@Z(data);
}

/*
==============
Stream_DecompressCheckAsyncNeedsToWait
==============
*/

bool __fastcall Stream_DecompressCheckAsyncNeedsToWait(const void *const data)
{
  return ?Stream_DecompressCheckAsyncNeedsToWait@@YA_NQEBX@Z(data);
}

/*
==============
StreamDecompressor::Job::StartJob
==============
*/

void __fastcall StreamDecompressor::Job::StartJob(StreamDecompressor::Job *this, StreamDecompressor *decompressor, const StreamDecompressCmd *cmd)
{
  ?StartJob@Job@StreamDecompressor@@QEAAXPEAU2@AEBUStreamDecompressCmd@@@Z(this, decompressor, cmd);
}

/*
==============
StreamDecompressor::Job::IsAsyncWorkDone
==============
*/

bool __fastcall StreamDecompressor::Job::IsAsyncWorkDone(StreamDecompressor::Job *this)
{
  return ?IsAsyncWorkDone@Job@StreamDecompressor@@AEAA_NXZ(this);
}

/*
==============
StreamDecompressor::StreamDecompressor
==============
*/

void __fastcall StreamDecompressor::StreamDecompressor(StreamDecompressor *this, StreamDecompressor::Job *jobs, unsigned int requestsSize)
{
  ??0StreamDecompressor@@AEAA@PEAUJob@0@I@Z(this, jobs, requestsSize);
}

/*
==============
StreamDecompressor::Job::WaitAsyncWorkDone
==============
*/

void __fastcall StreamDecompressor::Job::WaitAsyncWorkDone(StreamDecompressor::Job *this)
{
  ?WaitAsyncWorkDone@Job@StreamDecompressor@@AEAAXXZ(this);
}

/*
==============
StreamDecompressor::StreamDecompressor
==============
*/
void StreamDecompressor::StreamDecompressor(StreamDecompressor *this, StreamDecompressor::Job *jobs, unsigned int requestsSize)
{
  this->mJobs.storage_.size_ = requestsSize;
  this->mJobs.storage_.data_ = jobs;
  if ( jobs || !requestsSize )
  {
    this->mRunningJobCount = 0;
  }
  else
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\gsl\\span", 546, ASSERT_TYPE_SANITY, "( (!data && ExtentType::size() == 0) || (data && ExtentType::size() >= 0) )", (const char *)&queryFormat, "(!data && ExtentType::size() == 0) || (data && ExtentType::size() >= 0)") )
      __debugbreak();
    this->mRunningJobCount = 0;
  }
}

/*
==============
StreamDecompressor::Job::CheckAsync
==============
*/
void StreamDecompressor::Job::CheckAsync(StreamDecompressor::Job *this)
{
  bool v2; 
  int v3; 
  StreamDecompressor::Job *data; 

  if ( !this->mRunning && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_decompressor.cpp", 219, ASSERT_TYPE_ASSERT, "(mRunning)", (const char *)&queryFormat, "mRunning") )
    __debugbreak();
  if ( !this->mContextCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_decompressor.cpp", 220, ASSERT_TYPE_ASSERT, "(HasPendingAsyncWork())", (const char *)&queryFormat, "HasPendingAsyncWork()") )
    __debugbreak();
  if ( *this->mCmd.cancelled )
  {
    StreamDecompressor::Job::WaitAsyncWorkDone(this);
    v2 = 0;
LABEL_16:
    StreamDecompressor::Job::Finish(this, v2);
    return;
  }
  if ( !this->mContextCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_decompressor.cpp", 103, ASSERT_TYPE_ASSERT, "(HasPendingAsyncWork())", (const char *)&queryFormat, "HasPendingAsyncWork()") )
    __debugbreak();
  v3 = 0;
  if ( !this->mContextCount )
  {
LABEL_15:
    StreamDecompressor::Job::WaitAsyncWorkDone(this);
    v2 = 1;
    goto LABEL_16;
  }
  while ( XB3_HwZlib_IsDecompressAsyncDone(&this->mContexts[v3]) )
  {
    if ( ++v3 >= this->mContextCount )
      goto LABEL_15;
  }
  this->mLastAsyncCheckTime = Sys_Microseconds();
  data = this;
  Sys_AddWorkerCmd(WRKCMD_STREAM_DECOMPRESS_CHECK_ASYNC, &data);
}

/*
==============
StreamDecompressor::Job::CheckAsyncNeedsToWait
==============
*/
bool StreamDecompressor::Job::CheckAsyncNeedsToWait(StreamDecompressor::Job *this)
{
  const dvar_t *v2; 
  unsigned __int64 unsignedInt64; 

  if ( !this->mContextCount || !this->mLastAsyncCheckTime )
    return 0;
  v2 = DCONST_DVARINT64_stream_hardwareDecompressionAsyncCheckInterval;
  if ( !DCONST_DVARINT64_stream_hardwareDecompressionAsyncCheckInterval && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 706, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_hardwareDecompressionAsyncCheckInterval") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  unsignedInt64 = v2->current.unsignedInt64;
  return Sys_Microseconds() - this->mLastAsyncCheckTime < unsignedInt64;
}

/*
==============
StreamDecompressor::CreateInPlace
==============
*/
StreamDecompressor *StreamDecompressor::CreateInPlace(unsigned int maxJobs, unsigned __int64 *allocBase)
{
  unsigned __int64 *v2; 
  __int64 v4; 
  unsigned __int64 v5; 
  unsigned __int64 v6; 
  unsigned __int64 v7; 
  unsigned __int64 v8; 
  __int64 v9; 
  unsigned __int64 v10; 
  unsigned __int64 v11; 
  StreamDecompressor *result; 
  __int64 v14; 

  v2 = allocBase;
  v4 = maxJobs;
  v5 = (*allocBase + 15) & 0xFFFFFFFFFFFFFFF0ui64;
  v14 = maxJobs;
  v6 = 132544i64 * maxJobs + *allocBase + 48;
  v7 = v5 + 1408i64 * maxJobs;
  if ( v7 > v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_decompressor.cpp", 738, ASSERT_TYPE_ASSERT, "(allocHead <= allocEnd)", (const char *)&queryFormat, "allocHead <= allocEnd", v6) )
    __debugbreak();
  if ( maxJobs )
  {
    v8 = v5 + 120;
    v9 = v4;
    do
    {
      *(_QWORD *)(v8 - 120) = 0i64;
      *(_QWORD *)(v8 - 112) = 0i64;
      *(_QWORD *)(v8 - 88) = 0i64;
      *(_QWORD *)(v8 - 80) = 0i64;
      *(_QWORD *)(v8 - 72) = 0i64;
      *(_QWORD *)(v8 - 64) = 0i64;
      *(_QWORD *)(v8 - 40) = 0i64;
      *(_QWORD *)(v8 - 32) = 0i64;
      *(_QWORD *)(v8 - 24) = 0i64;
      *(_QWORD *)(v8 - 16) = 0i64;
      *(_QWORD *)(v8 + 8) = 0i64;
      *(_QWORD *)(v8 + 16) = 0i64;
      *(_QWORD *)(v8 + 24) = 0i64;
      *(_QWORD *)(v8 + 32) = 0i64;
      *(_QWORD *)(v8 + 40) = 0i64;
      *(_QWORD *)(v8 + 48) = 0i64;
      *(_QWORD *)(v8 + 56) = 0i64;
      *(_QWORD *)(v8 + 64) = 0i64;
      *(_QWORD *)(v8 + 88) = 0i64;
      *(_QWORD *)(v8 + 96) = 0i64;
      *(_QWORD *)(v8 + 104) = 0i64;
      *(_QWORD *)(v8 + 112) = 0i64;
      memset_0((void *)(v8 + 136), 0, 0x50ui64);
      *(_QWORD *)(v8 + 232) = 0i64;
      *(_QWORD *)(v8 + 1273) = 0i64;
      *(_DWORD *)(v8 + 1281) = 0;
      *(_WORD *)(v8 + 1285) = 0;
      *(_BYTE *)(v8 + 1287) = 0;
      *(_QWORD *)(v8 - 104) = stdext::inplace_function<bool (int,StreamDecompressItem *),32,16>::DefaultFunction;
      *(_QWORD *)(v8 - 96) = 0i64;
      *(_QWORD *)(v8 - 56) = stdext::inplace_function<void (int,StreamDecompressItem const *),32,16>::DefaultFunction;
      *(_QWORD *)(v8 - 48) = 0i64;
      *(_QWORD *)(v8 - 8) = stdext::inplace_function<void (bool),32,16>::DefaultFunction;
      *(_QWORD *)v8 = 0i64;
      *(_QWORD *)(v8 + 72) = stdext::inplace_function<char const * (int),32,16>::DefaultFunction;
      *(_QWORD *)(v8 + 80) = 0i64;
      *(_QWORD *)(v8 + 120) = stdext::inplace_function<void (int),32,16>::DefaultFunction;
      *(_QWORD *)(v8 + 128) = 0i64;
      *(_QWORD *)(v8 + 216) = 0i64;
      *(_QWORD *)(v8 + 224) = 0i64;
      memset_0((void *)(v8 + 240), 0, 0x400ui64);
      *(_QWORD *)(v8 + 1264) = 0i64;
      *(_BYTE *)(v8 + 1272) = 0;
      v10 = AlignUp<unsigned __int64>(v7, 0x40ui64);
      v7 = v10 + 0x20000;
      if ( v10 + 0x20000 > v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_decompressor.cpp", 738, ASSERT_TYPE_ASSERT, "(allocHead <= allocEnd)", (const char *)&queryFormat, "allocHead <= allocEnd") )
        __debugbreak();
      *(_QWORD *)(v8 + 168) = v10;
      *(_DWORD *)(v8 + 176) = 0x20000;
      v8 += 1408i64;
      --v9;
    }
    while ( v9 );
    v4 = v14;
    v2 = allocBase;
  }
  v11 = (v7 + 7) & 0xFFFFFFFFFFFFFFF8ui64;
  if ( v11 + 24 > v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_decompressor.cpp", 738, ASSERT_TYPE_ASSERT, "(allocHead <= allocEnd)", (const char *)&queryFormat, "allocHead <= allocEnd") )
    __debugbreak();
  *(_QWORD *)v11 = v4;
  *(_QWORD *)(v11 + 8) = v5;
  if ( !v5 && v4 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\gsl\\span", 546, ASSERT_TYPE_SANITY, "( (!data && ExtentType::size() == 0) || (data && ExtentType::size() >= 0) )", (const char *)&queryFormat, "(!data && ExtentType::size() == 0) || (data && ExtentType::size() >= 0)") )
    __debugbreak();
  *(_DWORD *)(v11 + 16) = 0;
  result = (StreamDecompressor *)((v7 + 7) & 0xFFFFFFFFFFFFFFF8ui64);
  *v2 = v11 + 24;
  return result;
}

/*
==============
StreamDecompressor::Job::Decompress
==============
*/
void StreamDecompressor::Job::Decompress(StreamDecompressor::Job *this)
{
  unsigned __int64 v2; 
  StreamDecompressor::Job::DecompressResult v3; 
  unsigned __int64 v4; 
  bool HasPendingWorkerCmdsRange; 
  bool v6; 
  StreamDecompressor::Job *data; 
  StreamDecompressor::Job *v8; 

  if ( !this->mRunning && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_decompressor.cpp", 137, ASSERT_TYPE_ASSERT, "(mRunning)", (const char *)&queryFormat, "mRunning") )
    __debugbreak();
  if ( !this->mCmd.multiJob && this->mContextCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_decompressor.cpp", 139, ASSERT_TYPE_ASSERT, "(mCmd.multiJob || !HasPendingAsyncWork())", (const char *)&queryFormat, "mCmd.multiJob || !HasPendingAsyncWork()") )
    __debugbreak();
  if ( this->mLastAsyncCheckTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_decompressor.cpp", 140, ASSERT_TYPE_ASSERT, "(mLastAsyncCheckTime == 0)", (const char *)&queryFormat, "mLastAsyncCheckTime == 0") )
    __debugbreak();
  v2 = 0i64;
  if ( this->mCmd.numItems <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_decompressor.cpp", 143, ASSERT_TYPE_ASSERT, "( mCmd.numItems ) > ( 0 )", "%s > %s\n\t%i, %i", "mCmd.numItems", "0", this->mCmd.numItems, 0i64) )
    __debugbreak();
  if ( this->mCmd.multiJob )
    v2 = Sys_Microseconds();
  if ( *this->mCmd.cancelled )
  {
LABEL_26:
    StreamDecompressor::Job::WaitAsyncWorkDone(this);
    v6 = 0;
  }
  else
  {
    while ( 1 )
    {
      v3 = StreamDecompressor::Job::DecompressSingleBlock(this);
      if ( v3 == AllItemsDone )
        break;
      if ( v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_decompressor.cpp", 183, ASSERT_TYPE_ASSERT, "(result == DecompressResult::ContinueWithNextItem)", (const char *)&queryFormat, "result == DecompressResult::ContinueWithNextItem") )
        __debugbreak();
      v4 = Sys_Microseconds() - v2;
      HasPendingWorkerCmdsRange = Sys_HasPendingWorkerCmdsRange(WRKCMD_PHYSICS_UPDATE_PREDICTIVE_WORLD_PRE, WRKCMD_STREAM_DECOMPRESS);
      if ( this->mCmd.multiJob && v4 > 0x3E8 && HasPendingWorkerCmdsRange )
      {
        data = this;
        if ( Sys_TryAddWorkerCmd(WRKCMD_STREAM_DECOMPRESS, &data) )
          return;
      }
      if ( *this->mCmd.cancelled )
        goto LABEL_26;
    }
    if ( this->mCmd.numItems && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_decompressor.cpp", 162, ASSERT_TYPE_ASSERT, "(mCmd.numItems == 0)", (const char *)&queryFormat, "mCmd.numItems == 0") )
      __debugbreak();
    if ( this->mContextCount )
    {
      this->mLastAsyncCheckTime = Sys_Microseconds();
      v8 = this;
      Sys_AddWorkerCmd(WRKCMD_STREAM_DECOMPRESS_CHECK_ASYNC, &v8);
      return;
    }
    v6 = 1;
  }
  StreamDecompressor::Job::Finish(this, v6);
}

/*
==============
StreamDecompressor::Job::DecompressSingleBlock
==============
*/
__int64 StreamDecompressor::Job::DecompressSingleBlock(StreamDecompressor::Job *this)
{
  unsigned int v2; 
  unsigned int v4; 
  unsigned __int8 *v5; 
  const char *v6; 
  const char *v7; 
  unsigned int mCurrentSrcOffset; 
  unsigned int mCurrentChunkHeaderOffset; 
  unsigned __int8 *v10; 
  unsigned __int8 *v11; 
  const char *v12; 
  __int64 mCurrentChunk; 
  __int64 v14; 
  __int64 v15; 
  _DWORD *v16; 
  unsigned int mCurrentDestOffset; 
  unsigned __int8 *v18; 
  const char *v19; 
  const char *v20; 
  void (__fastcall *m_InvokeFctPtr)(int, const void *); 
  unsigned int v22; 
  unsigned int uncompressedSize; 
  char *v24; 
  const dvar_t *v25; 
  unsigned int v26; 
  const char *v27; 
  unsigned int v28; 
  unsigned int v29; 
  const char *v30; 
  __int64 v32; 
  __int64 v33; 
  char v34; 
  unsigned int Size; 
  unsigned int Sizea; 
  signed int blockType; 
  unsigned int compressedSize; 
  int v39; 
  unsigned __int8 *inputData; 
  unsigned __int8 *v41; 
  char v42; 

  v2 = this->mCmd.numItems - 1;
  if ( (v2 & 0x80000000) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_decompressor.cpp", 429, ASSERT_TYPE_ASSERT, "( ( item >= 0 ) )", "( item ) = %i", this->mCmd.numItems - 1) )
    __debugbreak();
  if ( this->mCurrentSrcOffset || this->mCmd.decompressItemCallback.m_InvokeFctPtr(v2, &this->mCurrentItem, &this->mCmd.decompressItemCallback.m_Data) )
  {
    v5 = &this->mCmd.srcBufferStart[this->mCurrentItem.src.srcOffset];
    if ( !v5 )
    {
      v6 = this->mCmd.debugDumpXpakInfo.m_InvokeFctPtr(v2, &this->mCmd.debugDumpXpakInfo.m_Data);
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_decompressor.cpp", 456, ASSERT_TYPE_ASSERT, "( srcData )", "Failure decompressing %s, may be corrupt", v6) )
        __debugbreak();
    }
    Size = this->mCurrentItem.dstSize;
    v7 = j_va("in: %u out: %u", this->mCurrentItem.src.srcBytes, Size);
    Sys_ProfBeginNamedEvent(0xFF808080, v7);
    mCurrentSrcOffset = this->mCurrentSrcOffset;
    mCurrentChunkHeaderOffset = mCurrentSrcOffset;
    if ( (mCurrentSrcOffset & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_decompressor.cpp", 463, ASSERT_TYPE_ASSERT, "(IsAligned( srcOffset, XPAK_CHUNK_ALIGNMENT ))", (const char *)&queryFormat, "IsAligned( srcOffset, XPAK_CHUNK_ALIGNMENT )") )
      __debugbreak();
    if ( this->mCurrentChunk )
    {
      mCurrentChunkHeaderOffset = this->mCurrentChunkHeaderOffset;
    }
    else
    {
      this->mCurrentChunkHeaderOffset = mCurrentSrcOffset;
      mCurrentSrcOffset += 128;
    }
    v10 = &v5[mCurrentChunkHeaderOffset];
    v11 = v10 + 128;
    inputData = v10 + 128;
    if ( (mCurrentChunkHeaderOffset & 0x7F) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_decompressor.cpp", 45, ASSERT_TYPE_ASSERT, "(IsAligned( offset, XPAK_DATA_ALIGNMENT ))", (const char *)&queryFormat, "IsAligned( offset, XPAK_DATA_ALIGNMENT )") )
      __debugbreak();
    v39 = *(_DWORD *)v10;
    if ( *(_DWORD *)v10 > 0x1Eu )
    {
      v12 = this->mCmd.debugDumpXpakInfo.m_InvokeFctPtr(v2, &this->mCmd.debugDumpXpakInfo.m_Data);
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_decompressor.cpp", 474, ASSERT_TYPE_ASSERT, "( chunkCount <= XPAK_DATA_CHUNK_HEADER_ENTRY_COUNT )", "Failure decompressing %s, may be corrupt", v12) )
        __debugbreak();
    }
    mCurrentChunk = this->mCurrentChunk;
    v14 = mCurrentChunk;
    blockType = v10[4 * mCurrentChunk + 11];
    compressedSize = *(_DWORD *)&v10[4 * mCurrentChunk + 8] & 0xFFFFFF;
    if ( ((unsigned __int8)v11 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_decompressor.cpp", 52, ASSERT_TYPE_ASSERT, "(IsAligned( chunkBase, XPAK_CHUNK_ALIGNMENT ))", (const char *)&queryFormat, "IsAligned( chunkBase, XPAK_CHUNK_ALIGNMENT )") )
      __debugbreak();
    v4 = 0;
    v15 = 4294967292i64;
    if ( *(_DWORD *)v10 > (unsigned int)mCurrentChunk )
    {
      if ( (_DWORD)mCurrentChunk )
      {
        v16 = v10 + 8;
        do
        {
          v11 += ((*v16++ & 0xFFFFFF) + 3) & 0xFFFFFFFC;
          --v14;
        }
        while ( v14 );
        inputData = v11;
      }
    }
    else
    {
      v11 = NULL;
      inputData = NULL;
    }
    if ( ((unsigned __int8)v11 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_decompressor.cpp", 480, ASSERT_TYPE_ASSERT, "(IsAligned( inputData, XPAK_CHUNK_ALIGNMENT ))", (const char *)&queryFormat, "IsAligned( inputData, XPAK_CHUNK_ALIGNMENT )") )
      __debugbreak();
    mCurrentDestOffset = this->mCurrentDestOffset;
    if ( !this->mCurrentChunk )
      mCurrentDestOffset = *((_DWORD *)v10 + 1);
    v18 = &this->mCurrentItem.dst[mCurrentDestOffset];
    v41 = v18;
    if ( mCurrentDestOffset >= Size )
    {
      v19 = (const char *)((__int64 (__fastcall *)(_QWORD, std::_Aligned<32,16,double,0>::type *, __int64))this->mCmd.debugDumpXpakInfo.m_InvokeFctPtr)(v2, &this->mCmd.debugDumpXpakInfo.m_Data, v15);
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_decompressor.cpp", 490, ASSERT_TYPE_ASSERT, "( destOffset < destBytes )", "Failure decompressing %s, may be corrupt", v19) )
        __debugbreak();
    }
    if ( mCurrentSrcOffset > this->mCurrentItem.src.srcBytes )
    {
      v20 = (const char *)((__int64 (__fastcall *)(_QWORD, std::_Aligned<32,16,double,0>::type *, __int64))this->mCmd.debugDumpXpakInfo.m_InvokeFctPtr)(v2, &this->mCmd.debugDumpXpakInfo.m_Data, v15);
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_decompressor.cpp", 491, ASSERT_TYPE_ASSERT, "( srcOffset <= src.srcBytes )", "Failure decompressing %s, may be corrupt", v20) )
        __debugbreak();
    }
    m_InvokeFctPtr = this->mCmd.debugValidateWriteAccess.m_InvokeFctPtr;
    if ( m_InvokeFctPtr != stdext::inplace_function<void (int),32,16>::DefaultFunction )
      ((void (__fastcall *)(_QWORD, std::_Aligned<32,16,double,0>::type *, __int64))m_InvokeFctPtr)(v2, &this->mCmd.debugValidateWriteAccess.m_Data, v15);
    Sizea = Size - mCurrentDestOffset;
    v22 = compressedSize;
    if ( compressedSize > this->mCurrentItem.src.srcBytes - mCurrentSrcOffset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_decompressor.cpp", 503, ASSERT_TYPE_ASSERT, "( compressedSize ) <= ( srcLen )", "%s <= %s\n\t%u, %u", "compressedSize", "srcLen", compressedSize, this->mCurrentItem.src.srcBytes - mCurrentSrcOffset) )
      __debugbreak();
    if ( blockType )
    {
      if ( blockType != 207 )
      {
        if ( !compressedSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_decompressor.cpp", 527, ASSERT_TYPE_ASSERT, "(compressedSize)", (const char *)&queryFormat, "compressedSize") )
          __debugbreak();
        if ( compressedSize > DB_GetCompressionDestBufferMaxByBlockType((XBlockCompressionType)blockType, 0x3FFE0ui64) )
        {
          LODWORD(v33) = DB_GetCompressionDestBufferMaxByBlockType((XBlockCompressionType)blockType, 0x3FFE0ui64);
          LODWORD(v32) = compressedSize;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_decompressor.cpp", 530, ASSERT_TYPE_ASSERT, "( compressedSize ) <= ( DB_GetCompressionDestBufferMaxByBlockType( static_cast<XBlockCompressionType>( command ), XPAK_DATA_CHUNK_SIZE ) )", "%s <= %s\n\t%u, %u", "compressedSize", "DB_GetCompressionDestBufferMaxByBlockType( static_cast<XBlockCompressionType>( command ), XPAK_DATA_CHUNK_SIZE )", v32, v33) )
            __debugbreak();
        }
        uncompressedSize = 262112;
        if ( Sizea < 0x3FFE0 )
          uncompressedSize = Sizea;
        v24 = (char *)v18;
        v25 = DCONST_DVARBOOL_stream_hardwareDecompression;
        if ( !DCONST_DVARBOOL_stream_hardwareDecompression && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_hardwareDecompression") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v25);
        if ( (unsigned int)(blockType - 8) <= 1 && v25->current.enabled )
        {
          v34 = 1;
        }
        else
        {
          v34 = 0;
          if ( Mem_Paged_IsInPoolVARange(MEM_POOL_GPU_PRIVATE, v24) || Mem_Paged_IsInPoolVARange(MEM_POOL_GPU_CPU_READ_ONLY, v24) )
            v24 = &v42;
        }
        v26 = StreamDecompressor::Job::ProcessDecompressCommand(this, blockType, inputData, compressedSize, (unsigned __int8 *)v24, uncompressedSize);
        StreamDecompressor::Job::HandleDecompressError(this, SingleBlock, v26, blockType);
        if ( !v26 && v24 != (char *)v41 )
        {
          if ( v34 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_decompressor.cpp", 562, ASSERT_TYPE_ASSERT, "(!useXB3HWDecompression)", (const char *)&queryFormat, "!useXB3HWDecompression") )
            __debugbreak();
          memcpy_0(v41, v24, uncompressedSize);
        }
        mCurrentDestOffset += uncompressedSize;
        v22 = compressedSize;
      }
    }
    else
    {
      if ( !compressedSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_decompressor.cpp", 510, ASSERT_TYPE_ASSERT, "(compressedSize)", (const char *)&queryFormat, "compressedSize") )
        __debugbreak();
      v27 = j_va("raw: %d", compressedSize);
      Sys_ProfBeginNamedEvent(0xFF808080, v27);
      memcpy_0(v18, v11, compressedSize);
      mCurrentDestOffset += compressedSize;
      Sys_ProfEndNamedEvent();
    }
    v28 = ((v22 + 3) & 0xFFFFFFFC) + mCurrentSrcOffset;
    v29 = ++this->mCurrentChunk;
    if ( v29 == v39 )
    {
      v28 = (v28 + 127) & 0xFFFFFF80;
      this->mCurrentChunk = 0;
      v29 = 0;
    }
    if ( v28 < this->mCurrentItem.src.srcBytes )
    {
      this->mCurrentSrcOffset = v28;
      this->mCurrentDestOffset = mCurrentDestOffset;
    }
    else
    {
      if ( v29 )
      {
        v30 = (const char *)((__int64 (__fastcall *)(_QWORD, std::_Aligned<32,16,double,0>::type *, __int64))this->mCmd.debugDumpXpakInfo.m_InvokeFctPtr)(v2, &this->mCmd.debugDumpXpakInfo.m_Data, v15);
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_decompressor.cpp", 583, ASSERT_TYPE_ASSERT, "( mCurrentChunk == 0 )", "Failure decompressing %s, may be corrupt", v30) )
          __debugbreak();
      }
      --this->mCmd.numItems;
      *(_QWORD *)&this->mCurrentSrcOffset = 0i64;
      this->mCmd.decompressItemCompleteCallback.m_InvokeFctPtr(v2, &this->mCurrentItem, &this->mCmd.decompressItemCompleteCallback.m_Data);
    }
    LOBYTE(v4) = this->mCmd.numItems == 0;
    Sys_ProfEndNamedEvent();
  }
  else
  {
    return this->mCmd.numItems-- == 1;
  }
  return v4;
}

/*
==============
StreamDecompressor::Job::Finish
==============
*/
void StreamDecompressor::Job::Finish(StreamDecompressor::Job *this, bool success)
{
  volatile int *p_mRunningJobCount; 

  this->mRunning = 0;
  this->mCmd.decompressFinishedCallback.m_InvokeFctPtr(success, &this->mCmd.decompressFinishedCallback.m_Data);
  if ( this->mDecompressor->mRunningJobCount <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_decompressor.cpp", 248, ASSERT_TYPE_ASSERT, "(mDecompressor->mRunningJobCount > 0)", (const char *)&queryFormat, "mDecompressor->mRunningJobCount > 0") )
    __debugbreak();
  p_mRunningJobCount = &this->mDecompressor->mRunningJobCount;
  if ( ((unsigned __int8)p_mRunningJobCount & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", (const void *)p_mRunningJobCount) )
    __debugbreak();
  _InterlockedDecrement(p_mRunningJobCount);
}

/*
==============
StreamDecompressor::Job::HandleDecompressError
==============
*/
void StreamDecompressor::Job::HandleDecompressError(StreamDecompressor::Job *this, StreamDecompressor::Job::DecompressErrorType errorType, unsigned int errorCode, unsigned int errorDetails)
{
  const dvar_t *v4; 
  int integer; 
  const dvar_t *v10; 
  int v11; 
  int v12; 
  int v13; 
  int v14; 
  char *fmt; 
  __int64 v16; 
  __int64 v17; 
  char dest[128]; 

  ++decompressBlockCount;
  v4 = DCONST_DVARINT_stream_xpakSimulateDecompressFailures;
  if ( !DCONST_DVARINT_stream_xpakSimulateDecompressFailures && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_xpakSimulateDecompressFailures") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v4);
  integer = v4->current.integer;
  if ( integer <= 0 || decompressBlockCount % integer )
  {
    if ( !errorCode )
      return;
  }
  else
  {
    errorCode = 42;
  }
  if ( !*this->mCmd.cancelled )
  {
    *this->mCmd.cancelled = 1;
    v10 = DVARINT_stream_decompressErrorMode;
    if ( !DVARINT_stream_decompressErrorMode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_decompressErrorMode") )
      __debugbreak();
    Dvar_CheckFrontendServerThread(v10);
    v11 = v10->current.integer;
    if ( !v11 )
    {
      Sys_Error((const ObfuscateErrorText)&stru_144134D20, errorCode, errorDetails);
      goto LABEL_24;
    }
    v12 = v11 - 1;
    if ( !v12 )
    {
      CrashReport_TriggerNow();
      goto LABEL_24;
    }
    v13 = v12 - 1;
    if ( v13 )
    {
      v14 = v13 - 1;
      if ( !v14 )
      {
        LODWORD(fmt) = errorDetails;
        Com_sprintf_truncate<128>((char (*)[128])dest, "StreamDecompressor::Error %u %u %u\n", (unsigned int)errorType, errorCode, fmt);
        DLog_RecordErrorEvent(DLOG_ERROR_CODE_SYS_ERROR, dest, NULL);
        goto LABEL_24;
      }
      if ( v14 == 1 || !CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_decompressor.cpp", 658, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "unreachable code") )
        goto LABEL_24;
    }
    else
    {
      LODWORD(v17) = errorDetails;
      LODWORD(v16) = errorCode;
      if ( !CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_decompressor.cpp", 649, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "StreamDecompressor::Job decompression failed with error code : %u, details : %u\n", v16, v17) )
        goto LABEL_24;
    }
    __debugbreak();
LABEL_24:
    Com_PrintError(35, "StreamDecompressor::Job decompression failed with error: %u %u\n", (unsigned int)errorType, errorCode);
  }
}

/*
==============
StreamDecompressor::Job::HasPendingAsyncWork
==============
*/
bool StreamDecompressor::Job::HasPendingAsyncWork(StreamDecompressor::Job *this)
{
  return this->mContextCount != 0;
}

/*
==============
StreamDecompressor::Job::IsAsyncWorkDone
==============
*/
bool StreamDecompressor::Job::IsAsyncWorkDone(StreamDecompressor::Job *this)
{
  unsigned int mContextCount; 
  int v3; 
  unsigned int v4; 
  unsigned int v5; 
  bool result; 

  if ( !this->mContextCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_decompressor.cpp", 103, ASSERT_TYPE_ASSERT, "(HasPendingAsyncWork())", (const char *)&queryFormat, "HasPendingAsyncWork()") )
    __debugbreak();
  mContextCount = this->mContextCount;
  v3 = 0;
  if ( mContextCount )
  {
    while ( XB3_HwZlib_IsDecompressAsyncDone(&this->mContexts[v3]) )
    {
      mContextCount = this->mContextCount;
      if ( ++v3 >= mContextCount )
        goto LABEL_7;
    }
    return 0;
  }
  else
  {
LABEL_7:
    v4 = 0;
    if ( mContextCount )
    {
      do
      {
        v5 = XB3_HwZlib_WaitAndFinishDecompressAsync(&this->mContexts[v4]);
        StreamDecompressor::Job::HandleDecompressError(this, DMA, v5, 0);
        ++v4;
      }
      while ( v4 < this->mContextCount );
    }
    this->mContextCount = 0;
    result = 1;
    this->mLastAsyncCheckTime = 0i64;
  }
  return result;
}

/*
==============
StreamDecompressor::IsRunning
==============
*/
bool StreamDecompressor::IsRunning(StreamDecompressor *this)
{
  volatile int *p_mRunningJobCount; 
  int v3; 

  p_mRunningJobCount = &this->mRunningJobCount;
  if ( this->mRunningJobCount < 0 )
  {
    v3 = *p_mRunningJobCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_decompressor.cpp", 784, ASSERT_TYPE_ASSERT, "( mRunningJobCount ) >= ( 0 )", "%s >= %s\n\t%i, %i", "mRunningJobCount", "0", v3, 0i64) )
      __debugbreak();
  }
  if ( ((unsigned __int8)p_mRunningJobCount & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 141, ASSERT_TYPE_ASSERT, "( ( IsAligned( addr, sizeof( volatile_int32 ) ) ) )", "( addr ) = %p", (const void *)p_mRunningJobCount) )
    __debugbreak();
  return *p_mRunningJobCount > 0;
}

/*
==============
StreamDecompressor::MaxJobs
==============
*/
__int64 StreamDecompressor::MaxJobs(StreamDecompressor *this)
{
  unsigned __int64 size; 

  size = this->mJobs.storage_.size_;
  if ( (this->mJobs.storage_.size_ < 0 || size > 0xFFFFFFFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned int __cdecl truncate_cast_impl<unsigned int,__int64>(__int64)", "unsigned", (unsigned int)size, "signed", this->mJobs.storage_.size_) )
    __debugbreak();
  return (unsigned int)size;
}

/*
==============
StreamDecompressor::Job::ProcessDecompressCommand
==============
*/
int StreamDecompressor::Job::ProcessDecompressCommand(StreamDecompressor::Job *this, unsigned int command, const unsigned __int8 *inputData, unsigned int compressedSize, unsigned __int8 *outputData, unsigned int uncompressedSize)
{
  unsigned __int64 v6; 
  int result; 
  const dvar_t *v10; 
  bool enabled; 
  const dvar_t *v12; 
  __int64 mContextCount; 
  XB3_HwZlib_Context *v14; 
  unsigned int v15; 
  int v16; 
  unsigned __int64 v17; 
  unsigned __int64 v18; 

  v6 = compressedSize;
  switch ( command )
  {
    case 2u:
    case 3u:
      result = ZLibInflate(inputData, compressedSize, this->mScratchMemory, this->mScratchMemorySize, outputData, uncompressedSize);
      break;
    case 4u:
    case 5u:
      result = j_LZ4_decompress_fast((const char *)inputData, (char *)outputData, uncompressedSize);
      if ( result >= 0 )
        result = 0;
      break;
    case 8u:
    case 9u:
      v10 = DCONST_DVARBOOL_stream_hardwareDecompressionValidate;
      if ( !DCONST_DVARBOOL_stream_hardwareDecompressionValidate && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_hardwareDecompressionValidate") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v10);
      enabled = v10->current.enabled;
      v12 = DCONST_DVARBOOL_stream_hardwareDecompression;
      if ( !DCONST_DVARBOOL_stream_hardwareDecompression && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_hardwareDecompression") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v12);
      if ( v12->current.enabled || enabled )
      {
        if ( this->mContextCount > 0x40 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_decompressor.cpp", 370, ASSERT_TYPE_ASSERT, "( mContextCount ) <= ( ( sizeof( *array_counter( mContexts ) ) + 0 ) )", "%s <= %s\n\t%u, %u", "mContextCount", "ARRAY_COUNT( mContexts )", this->mContextCount, 64) )
          __debugbreak();
        mContextCount = this->mContextCount;
        if ( (_DWORD)mContextCount == 64 )
        {
          StreamDecompressor::Job::WaitAsyncWorkDone(this);
          if ( this->mContextCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_decompressor.cpp", 376, ASSERT_TYPE_ASSERT, "(mContextCount == 0)", (const char *)&queryFormat, "mContextCount == 0") )
            __debugbreak();
          mContextCount = this->mContextCount;
        }
        v14 = &this->mContexts[mContextCount];
        XB3_HwZlib_DecompressAsync(v14, inputData, v6, outputData);
        if ( !Dvar_GetBool_Internal_DebugName(DCONST_DVARBOOL_stream_hardwareDecompressionAsync, "stream_hardwareDecompressionAsync") || enabled )
        {
          v15 = XB3_HwZlib_WaitAndFinishDecompressAsync(v14);
          v16 = v15;
          if ( enabled && !v15 )
          {
            v17 = j_CoD_XXH64(outputData, uncompressedSize, 0i64);
            if ( ZLibInflate(inputData, v6, this->mScratchMemory, this->mScratchMemorySize, outputData, uncompressedSize) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_decompressor.cpp", 396, ASSERT_TYPE_ASSERT, "((ZLibInflate( compressedDataStart, compressedSizeWithoutHeader, mScratchMemory, mScratchMemorySize, outputData, uncompressedSize )) == (0))", (const char *)&queryFormat, "ZLibInflate( compressedDataStart, compressedSizeWithoutHeader, mScratchMemory, mScratchMemorySize, outputData, uncompressedSize ) == 0") )
              __debugbreak();
            v18 = j_CoD_XXH64(outputData, uncompressedSize, 0i64);
            if ( v17 != v18 )
              Sys_Error((const ObfuscateErrorText)&stru_1441347E0, v17, v18);
          }
          result = v16;
        }
        else
        {
          ++this->mContextCount;
          result = 0;
        }
      }
      else
      {
        result = ZLibInflate(inputData, v6, this->mScratchMemory, this->mScratchMemorySize, outputData, uncompressedSize);
      }
      break;
    default:
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_decompressor.cpp", 420, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unhandled xpak command type %d", command) )
        __debugbreak();
      result = -1;
      break;
  }
  return result;
}

/*
==============
StreamDecompressor::QueueJob
==============
*/
void StreamDecompressor::QueueJob(StreamDecompressor *this, unsigned int jobIndex, const StreamDecompressCmd *cmd)
{
  __int64 v4; 
  __int64 v8; 
  _BYTE v9[32]; 
  StreamDecompressor::Job *data; 

  v4 = jobIndex;
  if ( jobIndex >= LODWORD(this->mJobs.storage_.size_) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_decompressor.cpp", 773, ASSERT_TYPE_ASSERT, "(unsigned)( jobIndex ) < (unsigned)( mJobs.size() )", "jobIndex doesn't index mJobs.size()\n\t%i not in [0, %i)", jobIndex, this->mJobs.storage_.size_) )
    __debugbreak();
  if ( cmd->numItems > 64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_decompressor.cpp", 774, ASSERT_TYPE_ASSERT, "( cmd.numItems ) <= ( STREAM_MAX_ITEMS_PER_READ )", "%s <= %s\n\t%i, %i", "cmd.numItems", "STREAM_MAX_ITEMS_PER_READ", cmd->numItems, 64) )
    __debugbreak();
  if ( cmd->numItems <= 0 )
  {
    LODWORD(v8) = cmd->numItems;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_decompressor.cpp", 775, ASSERT_TYPE_ASSERT, "( cmd.numItems ) > ( 0 )", "%s > %s\n\t%i, %i", "cmd.numItems", "0", v8, 0i64) )
      __debugbreak();
  }
  if ( (((_BYTE)this + 16) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &this->mRunningJobCount) )
    __debugbreak();
  _InterlockedIncrement(&this->mRunningJobCount);
  if ( v4 >= this->mJobs.storage_.size_ && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\gsl\\span", 514, ASSERT_TYPE_SANITY, "( idx >= 0 && idx < storage_.size() )", (const char *)&queryFormat, "idx >= 0 && idx < storage_.size()") )
    __debugbreak();
  _RBX = &this->mJobs.storage_.data_[v4];
  if ( _RBX->mRunning && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_decompressor.cpp", 72, ASSERT_TYPE_SANITY, "( !mRunning )", (const char *)&queryFormat, "!mRunning") )
    __debugbreak();
  if ( _RBX->mContextCount )
  {
    LODWORD(v8) = _RBX->mContextCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_decompressor.cpp", 74, ASSERT_TYPE_ASSERT, "( mContextCount ) == ( 0 )", "%s == %s\n\t%u, %u", "mContextCount", "0", v8, 0i64) )
      __debugbreak();
  }
  if ( _RBX->mLastAsyncCheckTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_decompressor.cpp", 75, ASSERT_TYPE_ASSERT, "(mLastAsyncCheckTime == 0)", (const char *)&queryFormat, "mLastAsyncCheckTime == 0") )
    __debugbreak();
  _RBX->mDecompressor = this;
  _RBX->mRunning = 1;
  StreamDecompressCmd::operator=(&_RBX->mCmd, cmd);
  *(_QWORD *)&_RBX->mCurrentChunk = 0i64;
  memset(v9, 0, sizeof(v9));
  __asm
  {
    vmovups ymm0, [rsp+88h+var_38]
    vmovups ymmword ptr [rbx+130h], ymm0
  }
  _RBX->mCurrentDestOffset = 0;
  _RBX->mCurrentChunkHeaderOffset = 0;
  data = _RBX;
  Sys_AddWorkerCmd(WRKCMD_STREAM_DECOMPRESS, &data);
}

/*
==============
StreamDecompressor::SizeNeeded
==============
*/
__int64 StreamDecompressor::SizeNeeded(unsigned int maxJobs)
{
  return 132544i64 * maxJobs + 48;
}

/*
==============
StreamDecompressor::Job::StartJob
==============
*/
void StreamDecompressor::Job::StartJob(StreamDecompressor::Job *this, StreamDecompressor *decompressor, const StreamDecompressCmd *cmd)
{
  _BYTE v7[32]; 
  StreamDecompressor::Job *data; 

  _RBX = this;
  if ( this->mRunning && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_decompressor.cpp", 72, ASSERT_TYPE_SANITY, "( !mRunning )", (const char *)&queryFormat, "!mRunning") )
    __debugbreak();
  if ( _RBX->mContextCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_decompressor.cpp", 74, ASSERT_TYPE_ASSERT, "( mContextCount ) == ( 0 )", "%s == %s\n\t%u, %u", "mContextCount", "0", _RBX->mContextCount, 0i64) )
    __debugbreak();
  if ( _RBX->mLastAsyncCheckTime && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_decompressor.cpp", 75, ASSERT_TYPE_ASSERT, "(mLastAsyncCheckTime == 0)", (const char *)&queryFormat, "mLastAsyncCheckTime == 0") )
    __debugbreak();
  _RBX->mDecompressor = decompressor;
  _RBX->mRunning = 1;
  StreamDecompressCmd::operator=(&_RBX->mCmd, cmd);
  *(_QWORD *)&_RBX->mCurrentChunk = 0i64;
  memset(v7, 0, sizeof(v7));
  __asm
  {
    vmovups ymm0, [rsp+88h+var_38]
    vmovups ymmword ptr [rbx+130h], ymm0
  }
  _RBX->mCurrentDestOffset = 0;
  _RBX->mCurrentChunkHeaderOffset = 0;
  data = _RBX;
  Sys_AddWorkerCmd(WRKCMD_STREAM_DECOMPRESS, &data);
}

/*
==============
Stream_DecompressCheckAsyncCmd
==============
*/
void Stream_DecompressCheckAsyncCmd(const void *const data)
{
  StreamDecompressor::Job *v1; 
  bool v2; 
  int v3; 
  StreamDecompressor::Job *dataa; 

  v1 = *(StreamDecompressor::Job **)data;
  if ( !*(_BYTE *)(*(_QWORD *)data + 1392i64) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_decompressor.cpp", 219, ASSERT_TYPE_ASSERT, "(mRunning)", (const char *)&queryFormat, "mRunning") )
    __debugbreak();
  if ( !v1->mContextCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_decompressor.cpp", 220, ASSERT_TYPE_ASSERT, "(HasPendingAsyncWork())", (const char *)&queryFormat, "HasPendingAsyncWork()") )
    __debugbreak();
  if ( *v1->mCmd.cancelled )
  {
    StreamDecompressor::Job::WaitAsyncWorkDone(v1);
    v2 = 0;
LABEL_16:
    StreamDecompressor::Job::Finish(v1, v2);
    return;
  }
  if ( !v1->mContextCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_decompressor.cpp", 103, ASSERT_TYPE_ASSERT, "(HasPendingAsyncWork())", (const char *)&queryFormat, "HasPendingAsyncWork()") )
    __debugbreak();
  v3 = 0;
  if ( !v1->mContextCount )
  {
LABEL_15:
    StreamDecompressor::Job::WaitAsyncWorkDone(v1);
    v2 = 1;
    goto LABEL_16;
  }
  while ( XB3_HwZlib_IsDecompressAsyncDone(&v1->mContexts[v3]) )
  {
    if ( ++v3 >= v1->mContextCount )
      goto LABEL_15;
  }
  v1->mLastAsyncCheckTime = Sys_Microseconds();
  dataa = v1;
  Sys_AddWorkerCmd(WRKCMD_STREAM_DECOMPRESS_CHECK_ASYNC, &dataa);
}

/*
==============
Stream_DecompressCheckAsyncNeedsToWait
==============
*/
bool Stream_DecompressCheckAsyncNeedsToWait(const void *const data)
{
  __int64 v1; 
  const dvar_t *v2; 
  unsigned __int64 unsignedInt64; 

  v1 = *(_QWORD *)data;
  if ( !*(_DWORD *)(*(_QWORD *)data + 352i64) || !*(_QWORD *)(v1 + 1384) )
    return 0;
  v2 = DCONST_DVARINT64_stream_hardwareDecompressionAsyncCheckInterval;
  if ( !DCONST_DVARINT64_stream_hardwareDecompressionAsyncCheckInterval && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 706, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_hardwareDecompressionAsyncCheckInterval") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v2);
  unsignedInt64 = v2->current.unsignedInt64;
  return Sys_Microseconds() - *(_QWORD *)(v1 + 1384) < unsignedInt64;
}

/*
==============
Stream_DecompressCmd
==============
*/
void Stream_DecompressCmd(const void *const data)
{
  Sys_ProfBeginNamedEvent(0xFF808080, "Stream_DecompressCmd");
  StreamDecompressor::Job::Decompress(*(StreamDecompressor::Job **)data);
  Sys_ProfEndNamedEvent();
}

/*
==============
StreamDecompressor::Job::WaitAsyncWorkDone
==============
*/
void StreamDecompressor::Job::WaitAsyncWorkDone(StreamDecompressor::Job *this)
{
  int v2; 
  unsigned int v3; 
  unsigned int v4; 
  const dvar_t *v5; 
  int integer; 
  const dvar_t *v7; 
  int v8; 
  int v9; 
  int v10; 
  int v11; 
  char *fmt; 
  __int64 v13; 
  __int64 v14; 
  char dest[128]; 

  v2 = 0;
  if ( this->mContextCount )
  {
    while ( 1 )
    {
      v3 = XB3_HwZlib_WaitAndFinishDecompressAsync(&this->mContexts[v2]);
      ++decompressBlockCount;
      v4 = v3;
      v5 = DCONST_DVARINT_stream_xpakSimulateDecompressFailures;
      if ( !DCONST_DVARINT_stream_xpakSimulateDecompressFailures && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_xpakSimulateDecompressFailures") )
        __debugbreak();
      Dvar_CheckFrontendServerThread(v5);
      integer = v5->current.integer;
      if ( integer <= 0 || decompressBlockCount % integer )
      {
        if ( !v4 )
          goto LABEL_26;
      }
      else
      {
        v4 = 42;
      }
      if ( !*this->mCmd.cancelled )
      {
        *this->mCmd.cancelled = 1;
        v7 = DVARINT_stream_decompressErrorMode;
        if ( !DVARINT_stream_decompressErrorMode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 699, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "stream_decompressErrorMode") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v7);
        v8 = v7->current.integer;
        if ( v8 )
        {
          v9 = v8 - 1;
          if ( v9 )
          {
            v10 = v9 - 1;
            if ( v10 )
            {
              v11 = v10 - 1;
              if ( v11 )
              {
                if ( v11 != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_decompressor.cpp", 658, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "unreachable code") )
LABEL_19:
                  __debugbreak();
              }
              else
              {
                LODWORD(fmt) = 0;
                Com_sprintf_truncate<128>((char (*)[128])dest, "StreamDecompressor::Error %u %u %u\n", 1i64, v4, fmt);
                DLog_RecordErrorEvent(DLOG_ERROR_CODE_SYS_ERROR, dest, NULL);
              }
            }
            else
            {
              LODWORD(v14) = 0;
              LODWORD(v13) = v4;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_decompressor.cpp", 649, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "StreamDecompressor::Job decompression failed with error code : %u, details : %u\n", v13, v14) )
                goto LABEL_19;
            }
          }
          else
          {
            CrashReport_TriggerNow();
          }
        }
        else
        {
          Sys_Error((const ObfuscateErrorText)&stru_144134D20, v4, 0i64);
        }
        Com_PrintError(35, "StreamDecompressor::Job decompression failed with error: %u %u\n", 1i64, v4);
      }
LABEL_26:
      if ( ++v2 >= this->mContextCount )
      {
        this->mContextCount = 0;
        this->mLastAsyncCheckTime = 0i64;
        return;
      }
    }
  }
  this->mContextCount = 0;
  this->mLastAsyncCheckTime = 0i64;
}

/*
==============
ZLibInflate
==============
*/
__int64 ZLibInflate(const unsigned __int8 *inputData, unsigned int compressedSize, void *scratchMemory, unsigned int scratchSize, unsigned __int8 *outputData, unsigned int uncompressedSize)
{
  unsigned int v10; 
  __int64 v12; 
  __int64 v13; 
  db_z_stream_s stream; 

  if ( !scratchMemory && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_decompressor.cpp", 257, ASSERT_TYPE_ASSERT, "(scratchMemory)", (const char *)&queryFormat, "scratchMemory") )
    __debugbreak();
  if ( scratchSize < 0x20000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_decompressor.cpp", 258, ASSERT_TYPE_ASSERT, "(scratchSize >= (128 * 1024))", (const char *)&queryFormat, "scratchSize >= DB_ZIP_INFLATE_SIZE") )
    __debugbreak();
  memset_0(&stream, 0, sizeof(stream));
  DB_Zip_InitThreadMemory(&stream, scratchMemory, 0x20000);
  db_inflateInit_(&stream, "1.1.4", 80);
  stream.next_out = outputData;
  stream.avail_in = compressedSize;
  stream.avail_out = uncompressedSize;
  stream.next_in = (unsigned __int8 *)inputData;
  v10 = db_inflate(&stream, 4);
  if ( stream.avail_in && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_decompressor.cpp", 272, ASSERT_TYPE_ASSERT, "( zstream.avail_in ) == ( 0 )", "%s == %s\n\t%u, %u", "zstream.avail_in", "0", stream.avail_in, 0i64) )
    __debugbreak();
  if ( stream.avail_out )
  {
    LODWORD(v12) = stream.avail_out;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_decompressor.cpp", 273, ASSERT_TYPE_ASSERT, "( zstream.avail_out ) == ( 0 )", "%s == %s\n\t%u, %u", "zstream.avail_out", "0", v12, 0i64) )
      __debugbreak();
  }
  if ( stream.total_in != compressedSize )
  {
    LODWORD(v13) = compressedSize;
    LODWORD(v12) = stream.total_in;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_decompressor.cpp", 274, ASSERT_TYPE_ASSERT, "( zstream.total_in ) == ( compressedSize )", "%s == %s\n\t%u, %u", "zstream.total_in", "compressedSize", v12, v13) )
      __debugbreak();
  }
  if ( stream.total_out != uncompressedSize )
  {
    LODWORD(v13) = uncompressedSize;
    LODWORD(v12) = stream.total_out;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_decompressor.cpp", 275, ASSERT_TYPE_ASSERT, "( zstream.total_out ) == ( uncompressedSize )", "%s == %s\n\t%u, %u", "zstream.total_out", "uncompressedSize", v12, v13) )
      __debugbreak();
  }
  db_inflateEnd(&stream);
  if ( v10 == 1 )
    return 0;
  return v10;
}


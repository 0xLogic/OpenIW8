/*
==============
StreamReader::CreateInPlace
==============
*/

StreamReader *__fastcall StreamReader::CreateInPlace(unsigned int maxInFlightReads, unsigned __int64 maxBytesPerRead, unsigned __int64 *allocBase)
{
  return ?CreateInPlace@StreamReader@@SAPEAU1@I_KPEA_K@Z(maxInFlightReads, maxBytesPerRead, allocBase);
}

/*
==============
StreamReader::StreamReader
==============
*/

void __fastcall StreamReader::StreamReader(StreamReader *this, StreamReader::Job *jobs, unsigned int maxInFlightReads, unsigned __int64 maxBytesPerRead)
{
  ??0StreamReader@@AEAA@PEAUJob@0@I_K@Z(this, jobs, maxInFlightReads, maxBytesPerRead);
}

/*
==============
StreamReader::StreamCallback
==============
*/

void __fastcall StreamReader::StreamCallback(FileStreamRequestID id, FileStreamStatus result, __int64 numBytesRead, void *user)
{
  ?StreamCallback@StreamReader@@CAXW4FileStreamRequestID@@W4FileStreamStatus@@_JPEAX@Z(id, result, numBytesRead, user);
}

/*
==============
StreamReader::QueueJob
==============
*/

bool __fastcall StreamReader::QueueJob(StreamReader *this, unsigned int jobIndex, unsigned int xpakIndex, __int64 xpakOffset, unsigned __int64 buffSize, const stdext::inplace_function<void __cdecl(void *,unsigned __int64),32,16> *readCallback)
{
  return ?QueueJob@StreamReader@@QEAA_NII_J_KAEBV?$inplace_function@$$A6AXPEAX_K@Z$0CA@$0BA@@stdext@@@Z(this, jobIndex, xpakIndex, xpakOffset, buffSize, readCallback);
}

/*
==============
StreamReader::SizeNeeded
==============
*/

unsigned __int64 __fastcall StreamReader::SizeNeeded(unsigned int maxInFlightReads, unsigned __int64 maxBytesPerRead)
{
  return ?SizeNeeded@StreamReader@@SA_KI_K@Z(maxInFlightReads, maxBytesPerRead);
}

/*
==============
StreamReader::MaxInFlightReads
==============
*/

unsigned int __fastcall StreamReader::MaxInFlightReads(StreamReader *this)
{
  return ?MaxInFlightReads@StreamReader@@QEBAIXZ(this);
}

/*
==============
StreamReader::CancelJobs
==============
*/

bool __fastcall StreamReader::CancelJobs(StreamReader *this)
{
  return ?CancelJobs@StreamReader@@QEAA_NXZ(this);
}

/*
==============
StreamReader::StreamReader
==============
*/
void StreamReader::StreamReader(StreamReader *this, StreamReader::Job *jobs, unsigned int maxInFlightReads, unsigned __int64 maxBytesPerRead)
{
  this->mJobs.storage_.size_ = maxInFlightReads;
  this->mJobs.storage_.data_ = jobs;
  if ( jobs || !maxInFlightReads )
  {
    this->mMaxBytesPerRead = maxBytesPerRead;
  }
  else
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\gsl\\span", 546, ASSERT_TYPE_SANITY, "( (!data && ExtentType::size() == 0) || (data && ExtentType::size() >= 0) )", (const char *)&queryFormat, "(!data && ExtentType::size() == 0) || (data && ExtentType::size() >= 0)") )
      __debugbreak();
    this->mMaxBytesPerRead = maxBytesPerRead;
  }
}

/*
==============
StreamReader::CancelJobs
==============
*/
bool StreamReader::CancelJobs(StreamReader *this)
{
  __int64 v2; 
  __int64 size; 
  StreamReader::Job *v4; 

  v2 = 0i64;
  if ( this && this->mJobs.storage_.size_ < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\gsl\\span", 162, ASSERT_TYPE_SANITY, "( span == nullptr || (index_ >= 0 && index <= span_->length()) )", (const char *)&queryFormat, "span == nullptr || (index_ >= 0 && index <= span_->length())", -2i64) )
    __debugbreak();
  size = this->mJobs.storage_.size_;
  if ( this->mJobs.storage_.size_ < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\gsl\\span", 162, ASSERT_TYPE_SANITY, "( span == nullptr || (index_ >= 0 && index <= span_->length()) )", (const char *)&queryFormat, "span == nullptr || (index_ >= 0 && index <= span_->length())") )
    __debugbreak();
  while ( v2 != size )
  {
    v4 = gsl::span<StreamReader::Job,-1>::operator[](&this->mJobs, v2);
    FileStream_FreeRequest((FileStreamRequestID)*(_DWORD *)v4->streamID, 1);
    if ( (v2 < 0 || v2 >= this->mJobs.storage_.size_) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\gsl\\span", 187, ASSERT_TYPE_SANITY, "( span_ && index_ >= 0 && index_ < span_->length() )", (const char *)&queryFormat, "span_ && index_ >= 0 && index_ < span_->length()") )
      __debugbreak();
    ++v2;
  }
  return !FileStream_IsCancelledReadInProgress();
}

/*
==============
StreamReader::CreateInPlace
==============
*/
StreamReader *StreamReader::CreateInPlace(unsigned int maxInFlightReads, unsigned __int64 maxBytesPerRead, unsigned __int64 *allocBase)
{
  unsigned __int64 *v4; 
  unsigned __int64 v5; 
  __int64 v6; 
  unsigned __int64 v7; 
  unsigned __int64 v9; 
  unsigned __int64 *v10; 
  __int64 v11; 
  unsigned __int64 v12; 
  _QWORD *v13; 
  StreamReader *result; 
  __int64 v15; 
  unsigned __int64 v16; 
  unsigned __int64 v18; 

  v4 = allocBase;
  v5 = (*allocBase + 15) & 0xFFFFFFFFFFFFFFF0ui64;
  v6 = maxInFlightReads;
  v7 = v5 + ((unsigned __int64)maxInFlightReads << 6);
  v15 = maxInFlightReads;
  v9 = (maxInFlightReads << 12) + *allocBase + maxInFlightReads * (maxBytesPerRead + 64) + 48;
  v16 = v7;
  v18 = v9;
  if ( v7 > v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_reader.cpp", 116, ASSERT_TYPE_ASSERT, "(allocHead <= allocEnd)", (const char *)&queryFormat, "allocHead <= allocEnd") )
    __debugbreak();
  if ( maxInFlightReads )
  {
    v10 = (unsigned __int64 *)(v5 + 56);
    v11 = v6;
    do
    {
      *(v10 - 5) = 0i64;
      *(v10 - 4) = 0i64;
      *(v10 - 3) = 0i64;
      *(v10 - 2) = 0i64;
      *((_DWORD *)v10 - 1) = 0;
      v9 = v18;
      v12 = (v16 + 4095) & 0xFFFFFFFFFFFFF000ui64;
      *(v10 - 7) = (unsigned __int64)stdext::inplace_function<void (void *,unsigned __int64),32,16>::DefaultFunction;
      *(v10 - 6) = 0i64;
      *((_DWORD *)v10 - 2) = -1;
      *v10 = 0i64;
      v7 = v12 + maxBytesPerRead;
      v16 = v12 + maxBytesPerRead;
      if ( v12 + maxBytesPerRead > v18 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_reader.cpp", 116, ASSERT_TYPE_ASSERT, "(allocHead <= allocEnd)", (const char *)&queryFormat, "allocHead <= allocEnd") )
        __debugbreak();
      *v10 = v12;
      v10 += 8;
      --v11;
    }
    while ( v11 );
    v6 = v15;
    v4 = allocBase;
  }
  v13 = (_QWORD *)((v7 + 7) & 0xFFFFFFFFFFFFFFF8ui64);
  if ( (unsigned __int64)(v13 + 3) > v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_reader.cpp", 116, ASSERT_TYPE_ASSERT, "(allocHead <= allocEnd)", (const char *)&queryFormat, "allocHead <= allocEnd") )
    __debugbreak();
  *v13 = v6;
  v13[1] = v5;
  if ( !v5 && v6 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\gsl\\span", 546, ASSERT_TYPE_SANITY, "( (!data && ExtentType::size() == 0) || (data && ExtentType::size() >= 0) )", (const char *)&queryFormat, "(!data && ExtentType::size() == 0) || (data && ExtentType::size() >= 0)") )
    __debugbreak();
  v13[2] = maxBytesPerRead;
  result = (StreamReader *)((v7 + 7) & 0xFFFFFFFFFFFFFFF8ui64);
  *v4 = (unsigned __int64)(v13 + 3);
  return result;
}

/*
==============
StreamReader::MaxInFlightReads
==============
*/
__int64 StreamReader::MaxInFlightReads(StreamReader *this)
{
  unsigned __int64 size; 

  size = this->mJobs.storage_.size_;
  if ( (this->mJobs.storage_.size_ < 0 || size > 0xFFFFFFFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned int __cdecl truncate_cast_impl<unsigned int,__int64>(__int64)", "unsigned", (unsigned int)size, "signed", this->mJobs.storage_.size_) )
    __debugbreak();
  return (unsigned int)size;
}

/*
==============
StreamReader::QueueJob
==============
*/
char StreamReader::QueueJob(StreamReader *this, unsigned int jobIndex, unsigned int xpakIndex, __int64 xpakOffset, unsigned __int64 buffSize, const stdext::inplace_function<void __cdecl(void *,unsigned __int64),32,16> *readCallback)
{
  StreamReader::Job *v9; 
  FileStreamRequestID *outId; 
  bool v11; 
  int Int_Internal_DebugName; 
  FileStreamPriority v13; 
  void (__fastcall *m_ManagerFctPtr)(void *, const void *, stdext::inplace_function_operation); 
  void (__fastcall *v15)(void *, const void *, stdext::inplace_function_operation); 
  void *pBuff; 
  FileStreamFileID v17; 
  FileStreamPriority priority; 

  v9 = gsl::span<StreamReader::Job,-1>::operator[](&this->mJobs, jobIndex);
  outId = (FileStreamRequestID *)v9->streamID;
  if ( *(_DWORD *)v9->streamID != -1 || buffSize > this->mMaxBytesPerRead )
    return 0;
  if ( !buffSize )
  {
    v11 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_reader.cpp", 40, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "StreamReader::QueueJob passed zero-sized buffer read");
    goto LABEL_19;
  }
  if ( (xpakOffset & 0x7FFF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_reader.cpp", 47, ASSERT_TYPE_ASSERT, "(IsAligned( xpakOffset, STREAM_DISK_READ_ALIGNMENT ))", (const char *)&queryFormat, "IsAligned( xpakOffset, STREAM_DISK_READ_ALIGNMENT )") )
    __debugbreak();
  if ( (buffSize & 0x7FFF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_reader.cpp", 48, ASSERT_TYPE_ASSERT, "(IsAligned( buffSize, STREAM_DISK_READ_ALIGNMENT ))", (const char *)&queryFormat, "IsAligned( buffSize, STREAM_DISK_READ_ALIGNMENT )") )
    __debugbreak();
  Int_Internal_DebugName = Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_fileStream_readDeadlineMS_Primer, "fileStream_readDeadlineMS_Primer");
  v13 = (unsigned __int8)Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_fileStream_readPriority_Primer, "fileStream_readPriority_Primer");
  m_ManagerFctPtr = v9->callback.m_ManagerFctPtr;
  priority = v13;
  v9->callback.m_InvokeFctPtr = stdext::inplace_function<void (void *,unsigned __int64),32,16>::DefaultFunction;
  if ( m_ManagerFctPtr )
    m_ManagerFctPtr(&v9->callback.m_Data, NULL, Destroy);
  v9->callback.m_ManagerFctPtr = NULL;
  v15 = readCallback->m_ManagerFctPtr;
  if ( v15 )
    v15(&v9->callback.m_Data, &readCallback->m_Data, Copy);
  v9->callback.m_InvokeFctPtr = readCallback->m_InvokeFctPtr;
  v9->callback.m_ManagerFctPtr = readCallback->m_ManagerFctPtr;
  pBuff = v9->pBuff;
  v17 = XPak_IndexToFileID(xpakIndex);
  if ( FileStream_AddRequest(v17, xpakOffset, buffSize, pBuff, Int_Internal_DebugName, priority, StreamReader::StreamCallback, v9, outId, FILE_STREAM_TRACK_PRIMER) )
  {
    Stream_Debug_AddToHeatMap(xpakIndex, xpakOffset, buffSize, FILE_STREAM_TRACK_PRIMER);
    return 1;
  }
  if ( *(_DWORD *)outId != -1 )
  {
    v11 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_reader.cpp", 73, ASSERT_TYPE_ASSERT, "(job.streamID == FileStreamRequestID::INVALID)", (const char *)&queryFormat, "job.streamID == FileStreamRequestID::INVALID");
LABEL_19:
    if ( v11 )
      __debugbreak();
  }
  return 0;
}

/*
==============
StreamReader::SizeNeeded
==============
*/
unsigned __int64 StreamReader::SizeNeeded(unsigned int maxInFlightReads, unsigned __int64 maxBytesPerRead)
{
  return maxInFlightReads * (maxBytesPerRead + 64) + (maxInFlightReads << 12) + 48;
}

/*
==============
StreamReader::StreamCallback
==============
*/
void StreamReader::StreamCallback(int id, int result, __int64 numBytesRead, void *user)
{
  __int64 v7; 
  __int64 v8; 

  if ( *((_DWORD *)user + 12) != id && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_reader.cpp", 138, ASSERT_TYPE_ASSERT, "(job->streamID == id)", (const char *)&queryFormat, "job->streamID == id") )
    __debugbreak();
  v7 = *((_QWORD *)user + 7);
  v8 = 0i64;
  *((_DWORD *)user + 12) = -1;
  if ( result == 8 )
    v8 = numBytesRead;
  (*(void (__fastcall **)(__int64, __int64, char *))user)(v7, v8, (char *)user + 16);
}


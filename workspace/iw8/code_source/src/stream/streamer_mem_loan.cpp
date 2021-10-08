/*
==============
StreamerMemLoan::TryGrow
==============
*/

bool __fastcall StreamerMemLoan::TryGrow(StreamerMemLoan *this, StreamMemPool poolPreference, unsigned __int64 size)
{
  return ?TryGrow@StreamerMemLoan@@QEAA_NW4StreamMemPool@@_K@Z(this, poolPreference, size);
}

/*
==============
StreamerMemLoan::MakeReady
==============
*/

bool __fastcall StreamerMemLoan::MakeReady(StreamerMemLoan *this, StreamMemPool poolPreference, unsigned __int64 size)
{
  return ?MakeReady@StreamerMemLoan@@QEAA_NW4StreamMemPool@@_K@Z(this, poolPreference, size);
}

/*
==============
StreamerMemLoan::StreamerMemLoan
==============
*/

void __fastcall StreamerMemLoan::StreamerMemLoan(StreamerMemLoan *this, StreamerMemLoan *other)
{
  ??0StreamerMemLoan@@QEAA@$$QEAU0@@Z(this, other);
}

/*
==============
StreamerMemLoan::TakePages
==============
*/

void __fastcall StreamerMemLoan::TakePages(StreamerMemLoan *this, StreamMemPool poolPreference, unsigned int pageCount, StreamerMemPageCounts *pagesTaken)
{
  ?TakePages@StreamerMemLoan@@IEAAXW4StreamMemPool@@IAEAUStreamerMemPageCounts@@@Z(this, poolPreference, pageCount, pagesTaken);
}

/*
==============
StreamerMemLoan::TakeAllPages
==============
*/

void __fastcall StreamerMemLoan::TakeAllPages(StreamerMemLoan *this, StreamerMemPageCounts *pagesTaken)
{
  ?TakeAllPages@StreamerMemLoan@@IEAAXAEAUStreamerMemPageCounts@@@Z(this, pagesTaken);
}

/*
==============
StreamerMemLoan::PagesForPool
==============
*/

unsigned int __fastcall StreamerMemLoan::PagesForPool(StreamerMemLoan *this, StreamMemPool pool)
{
  return ?PagesForPool@StreamerMemLoan@@QEBAIW4StreamMemPool@@@Z(this, pool);
}

/*
==============
StreamerMemLoan::RemovePagesInternal
==============
*/

void __fastcall StreamerMemLoan::RemovePagesInternal(StreamerMemLoan *this, StreamMemPool pool, unsigned int pageCount)
{
  ?RemovePagesInternal@StreamerMemLoan@@IEAAXW4StreamMemPool@@I@Z(this, pool, pageCount);
}

/*
==============
StreamerMemLoan::GivePages
==============
*/

void __fastcall StreamerMemLoan::GivePages(StreamerMemLoan *this, StreamMemPool pool, unsigned int pageCount)
{
  ?GivePages@StreamerMemLoan@@IEAAXW4StreamMemPool@@I@Z(this, pool, pageCount);
}

/*
==============
StreamerMemLoan::TryGrowInternal
==============
*/

bool __fastcall StreamerMemLoan::TryGrowInternal(StreamerMemLoan *this, StreamMemPool poolPreference, unsigned __int64 size, bool backendFlushPossible)
{
  return ?TryGrowInternal@StreamerMemLoan@@IEAA_NW4StreamMemPool@@_K_N@Z(this, poolPreference, size, backendFlushPossible);
}

/*
==============
StreamerMemLoan::Ready
==============
*/

bool __fastcall StreamerMemLoan::Ready(StreamerMemLoan *this)
{
  return ?Ready@StreamerMemLoan@@QEBA_NXZ(this);
}

/*
==============
StreamerMemLoan::TotalPages
==============
*/

unsigned int __fastcall StreamerMemLoan::TotalPages(StreamerMemLoan *this)
{
  return ?TotalPages@StreamerMemLoan@@QEBAIXZ(this);
}

/*
==============
StreamerMemLoan::TryResizeInternal
==============
*/

bool __fastcall StreamerMemLoan::TryResizeInternal(StreamerMemLoan *this, StreamMemPool poolPreference, unsigned __int64 size, bool backendFlushPossible)
{
  return ?TryResizeInternal@StreamerMemLoan@@IEAA_NW4StreamMemPool@@_K_N@Z(this, poolPreference, size, backendFlushPossible);
}

/*
==============
StreamerMemLoan::GivePages
==============
*/

void __fastcall StreamerMemLoan::GivePages(StreamerMemLoan *this, const StreamerMemPageCounts *pages)
{
  ?GivePages@StreamerMemLoan@@IEAAXAEBUStreamerMemPageCounts@@@Z(this, pages);
}

/*
==============
StreamerMemLoan::TryResize
==============
*/

bool __fastcall StreamerMemLoan::TryResize(StreamerMemLoan *this, StreamMemPool poolPreference, unsigned __int64 size)
{
  return ?TryResize@StreamerMemLoan@@QEAA_NW4StreamMemPool@@_K@Z(this, poolPreference, size);
}

/*
==============
StreamerMemLoan::Move
==============
*/

void __fastcall StreamerMemLoan::Move(StreamerMemLoan *this, StreamerMemLoan *other)
{
  ?Move@StreamerMemLoan@@AEAAX$$QEAU1@@Z(this, other);
}

/*
==============
StreamerMemLoan::GetTotalPagesForAllLoans
==============
*/

StreamerMemPageCounts *__fastcall StreamerMemLoan::GetTotalPagesForAllLoans(StreamerMemPageCounts *result)
{
  return ?GetTotalPagesForAllLoans@StreamerMemLoan@@SA?AUStreamerMemPageCounts@@XZ(result);
}

/*
==============
StreamerMemLoan::TakeSubloan
==============
*/

StreamerMemLoan *__fastcall StreamerMemLoan::TakeSubloan(StreamerMemLoan *this, StreamerMemLoan *result, StreamMemPool poolPreference, unsigned __int64 size)
{
  return ?TakeSubloan@StreamerMemLoan@@QEAA?AU1@W4StreamMemPool@@_K@Z(this, result, poolPreference, size);
}

/*
==============
StreamerMemLoan::operator=
==============
*/

StreamerMemLoan *__fastcall StreamerMemLoan::operator=(StreamerMemLoan *this, StreamerMemLoan *other)
{
  return ??4StreamerMemLoan@@QEAAAEAU0@$$QEAU0@@Z(this, other);
}

/*
==============
StreamerMemLoan::GiveLoan
==============
*/

void __fastcall StreamerMemLoan::GiveLoan(StreamerMemLoan *this, StreamerMemLoan *subLoan)
{
  ?GiveLoan@StreamerMemLoan@@QEAAX$$QEAU1@@Z(this, subLoan);
}

/*
==============
StreamerMemLoan::Size
==============
*/

unsigned __int64 __fastcall StreamerMemLoan::Size(StreamerMemLoan *this)
{
  return ?Size@StreamerMemLoan@@QEBA_KXZ(this);
}

/*
==============
StreamerMemLoan::~StreamerMemLoan
==============
*/

void __fastcall StreamerMemLoan::~StreamerMemLoan(StreamerMemLoan *this)
{
  ??1StreamerMemLoan@@QEAA@XZ(this);
}

/*
==============
StreamerMemLoan::StreamerMemLoan
==============
*/
void StreamerMemLoan::StreamerMemLoan(StreamerMemLoan *this, StreamerMemLoan *other)
{
  this->mUpdateID = 0i64;
  this->mPages = 0i64;
  this->mCookie = -1061110033;
  StreamerMemLoan::Move(this, other);
}

/*
==============
StreamerMemLoan::~StreamerMemLoan
==============
*/
void StreamerMemLoan::~StreamerMemLoan(StreamerMemLoan *this)
{
  StreamerMemPageCounts *p_mPages; 
  int v3; 
  StreamerMemPageCounts *v4; 
  __int64 v5; 
  __int64 v6; 

  p_mPages = &this->mPages;
  DecrementStreamerMemLoanPages(&this->mPages);
  v3 = 0;
  v4 = p_mPages;
  v5 = 0i64;
  v6 = 2i64;
  if ( p_mPages > &p_mPages[1] )
    v6 = 0i64;
  if ( p_mPages <= &p_mPages[1] )
  {
    do
    {
      v3 += v4->pages[0];
      v4 = (StreamerMemPageCounts *)((char *)v4 + 4);
      ++v5;
    }
    while ( v5 != v6 );
    if ( v3 )
      Stream_Alloc_ReturnPagesFromMemPaged(p_mPages, this->mUpdateID);
  }
}

/*
==============
StreamerMemLoan::operator=
==============
*/
StreamerMemLoan *StreamerMemLoan::operator=(StreamerMemLoan *this, StreamerMemLoan *other)
{
  int v4; 
  __int64 v5; 
  StreamerMemPageCounts *p_mPages; 
  __int64 v7; 

  if ( this->mCookie != -1061110033 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\streamer_mem_loan.cpp", 133, ASSERT_TYPE_ASSERT, "(mCookie == 0xC0C0BEEF)", (const char *)&queryFormat, "mCookie == 0xC0C0BEEF") )
    __debugbreak();
  if ( other->mCookie != -1061110033 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\streamer_mem_loan.cpp", 134, ASSERT_TYPE_ASSERT, "(other.mCookie == 0xC0C0BEEF)", (const char *)&queryFormat, "other.mCookie == 0xC0C0BEEF") )
    __debugbreak();
  if ( other != this )
  {
    DecrementStreamerMemLoanPages(&this->mPages);
    v4 = 0;
    v5 = 2i64;
    p_mPages = &this->mPages;
    v7 = 0i64;
    if ( &this->mPages > (StreamerMemPageCounts *)&this->mCookie )
      v5 = 0i64;
    if ( &this->mPages <= (StreamerMemPageCounts *)&this->mCookie )
    {
      do
      {
        v4 += p_mPages->pages[0];
        p_mPages = (StreamerMemPageCounts *)((char *)p_mPages + 4);
        ++v7;
      }
      while ( v7 != v5 );
      if ( v4 )
        Stream_Alloc_ReturnPagesFromMemPaged(&this->mPages, this->mUpdateID);
    }
    StreamerMemLoan::Move(this, other);
  }
  return this;
}

/*
==============
DecrementStreamerMemLoanPages
==============
*/
void DecrementStreamerMemLoanPages(const StreamerMemPageCounts *pages)
{
  unsigned __int64 v1; 
  __int64 v2; 
  int v4; 
  const StreamerMemPageCounts *v5; 
  __int64 v6; 
  __int64 v7; 
  unsigned int v8; 
  __int64 v9; 
  __int64 v10; 

  v1 = 0i64;
  v2 = 2i64;
  v4 = 0;
  if ( pages > &pages[1] )
    v2 = 0i64;
  v5 = pages;
  v6 = 0i64;
  if ( pages <= &pages[1] )
  {
    do
    {
      v4 += v5->pages[0];
      v5 = (const StreamerMemPageCounts *)((char *)v5 + 4);
      ++v6;
    }
    while ( v6 != v2 );
    if ( v4 )
    {
      Sys_LockWrite(&s_streamerMemLoanTracking.lock);
      do
      {
        v7 = (unsigned int)v1;
        v8 = pages->pages[v7];
        if ( s_streamerMemLoanTracking.pages.pages[v7] < v8 )
        {
          LODWORD(v10) = pages->pages[v7];
          LODWORD(v9) = s_streamerMemLoanTracking.pages.pages[v7];
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\streamer_mem_loan.h", 63, ASSERT_TYPE_ASSERT, "( pages[static_cast<size_t>( pool )] ) >= ( pageCount )", "%s >= %s\n\t%u, %u", "pages[static_cast<size_t>( pool )]", "pageCount", v9, v10) )
            __debugbreak();
        }
        s_streamerMemLoanTracking.pages.pages[v7] -= v8;
        ++v1;
      }
      while ( v1 < 2 );
      Sys_UnlockWrite(&s_streamerMemLoanTracking.lock);
    }
  }
}

/*
==============
StreamerMemLoan::GetTotalPagesForAllLoans
==============
*/
StreamerMemPageCounts *StreamerMemLoan::GetTotalPagesForAllLoans(StreamerMemPageCounts *result)
{
  volatile int readCount; 

  *result = 0i64;
  if ( s_streamerMemLoanTracking.lock.writeThreadId == Sys_GetCurrentThreadId() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock.h", 62, ASSERT_TYPE_ASSERT, "( critSect->writeThreadId != Sys_GetCurrentThreadId() )", "This is a non-recursive lock! Don't attempt to take a read lock if the calling thread already has the write lock or this will loop infinitely.") )
    __debugbreak();
  if ( ((unsigned __int8)&s_streamerMemLoanTracking.lock & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &s_streamerMemLoanTracking.lock) )
    __debugbreak();
  _InterlockedIncrement(&s_streamerMemLoanTracking.lock.readCount);
  while ( s_streamerMemLoanTracking.lock.writeCount )
    Sys_Sleep(0);
  *result = s_streamerMemLoanTracking.pages;
  if ( s_streamerMemLoanTracking.lock.readCount <= 0 )
  {
    readCount = s_streamerMemLoanTracking.lock.readCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock.h", 90, ASSERT_TYPE_ASSERT, "( critSect->readCount ) > ( 0 )", "%s > %s\n\t%i, %i", "critSect->readCount", "0", readCount, 0i64) )
      __debugbreak();
  }
  if ( ((unsigned __int64)&s_streamerMemLoanTracking.lock & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &s_streamerMemLoanTracking.lock) )
    __debugbreak();
  _InterlockedDecrement(&s_streamerMemLoanTracking.lock.readCount);
  return result;
}

/*
==============
StreamerMemLoan::GiveLoan
==============
*/
void StreamerMemLoan::GiveLoan(StreamerMemLoan *this, StreamerMemLoan *subLoan)
{
  StreamUpdateId mUpdateID; 

  if ( this->mCookie != -1061110033 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\streamer_mem_loan.cpp", 151, ASSERT_TYPE_ASSERT, "(mCookie == 0xC0C0BEEF)", (const char *)&queryFormat, "mCookie == 0xC0C0BEEF") )
    __debugbreak();
  if ( subLoan->mCookie != -1061110033 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\streamer_mem_loan.cpp", 152, ASSERT_TYPE_ASSERT, "(subLoan.mCookie == 0xC0C0BEEF)", (const char *)&queryFormat, "subLoan.mCookie == 0xC0C0BEEF") )
    __debugbreak();
  if ( StreamerMemLoan::TotalPages(subLoan) )
  {
    this->mPages.pages[0] += subLoan->mPages.pages[0];
    this->mPages.pages[1] += subLoan->mPages.pages[1];
    mUpdateID = subLoan->mUpdateID;
    subLoan->mPages = 0i64;
    if ( this->mUpdateID > (unsigned __int64)mUpdateID )
      mUpdateID = this->mUpdateID;
    this->mUpdateID = mUpdateID;
    subLoan->mUpdateID = 0i64;
  }
}

/*
==============
StreamerMemLoan::GivePages
==============
*/
void StreamerMemLoan::GivePages(StreamerMemLoan *this, const StreamerMemPageCounts *pages)
{
  unsigned __int64 v2; 
  int v4; 
  __int64 v5; 
  const StreamerMemPageCounts *v6; 
  bool v7; 
  __int64 v8; 

  v2 = 0i64;
  this->mPages.pages[0] += pages->pages[0];
  v4 = 0;
  this->mPages.pages[1] += pages->pages[1];
  v5 = 0i64;
  v6 = pages;
  v7 = pages <= &pages[1];
  v8 = 2i64;
  if ( !v7 )
    v8 = 0i64;
  if ( v7 )
  {
    do
    {
      v4 += v6->pages[0];
      v6 = (const StreamerMemPageCounts *)((char *)v6 + 4);
      ++v5;
    }
    while ( v5 != v8 );
    if ( v4 )
    {
      Sys_LockWrite(&s_streamerMemLoanTracking.lock);
      do
      {
        s_streamerMemLoanTracking.pages.pages[(unsigned int)v2] += pages->pages[(unsigned int)v2];
        ++v2;
      }
      while ( v2 < 2 );
      Sys_UnlockWrite(&s_streamerMemLoanTracking.lock);
    }
  }
}

/*
==============
StreamerMemLoan::GivePages
==============
*/
void StreamerMemLoan::GivePages(StreamerMemLoan *this, StreamMemPool pool, unsigned int pageCount)
{
  __int64 v3; 
  __int64 v6; 
  __int64 v8; 
  int v9; 

  v3 = (unsigned int)pool;
  if ( (unsigned int)pool >= COUNT )
  {
    v9 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\streamer_mem_loan.h", 48, ASSERT_TYPE_ASSERT, "(unsigned)( pool ) < (unsigned)( ( sizeof( *array_counter( pages ) ) + 0 ) )", "pool doesn't index ARRAY_COUNT( pages )\n\t%i not in [0, %i)", pool, v9) )
      __debugbreak();
  }
  this->mPages.pages[v3] += pageCount;
  if ( pageCount )
  {
    Sys_LockWrite(&s_streamerMemLoanTracking.lock);
    if ( (unsigned int)v3 >= 2 )
    {
      LODWORD(v8) = 2;
      LODWORD(v6) = v3;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\streamer_mem_loan.h", 48, ASSERT_TYPE_ASSERT, "(unsigned)( pool ) < (unsigned)( ( sizeof( *array_counter( pages ) ) + 0 ) )", "pool doesn't index ARRAY_COUNT( pages )\n\t%i not in [0, %i)", v6, v8) )
        __debugbreak();
    }
    s_streamerMemLoanTracking.pages.pages[v3] += pageCount;
    Sys_UnlockWrite(&s_streamerMemLoanTracking.lock);
  }
}

/*
==============
StreamerMemLoan::MakeReady
==============
*/
char StreamerMemLoan::MakeReady(StreamerMemLoan *this, StreamMemPool poolPreference, unsigned __int64 size)
{
  if ( !StreamerMemLoan::TryGrowInternal(this, poolPreference, size, 1) )
    return 0;
  if ( !StreamerMemLoan::Ready(this) )
    Stream_BackendQueue_ForcedFlush();
  return 1;
}

/*
==============
StreamerMemLoan::Move
==============
*/
void StreamerMemLoan::Move(StreamerMemLoan *this, StreamerMemLoan *other)
{
  if ( this == other && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\streamer_mem_loan.cpp", 300, ASSERT_TYPE_ASSERT, "(this != &other)", (const char *)&queryFormat, "this != &other") )
    __debugbreak();
  this->mPages = other->mPages;
  this->mUpdateID = other->mUpdateID;
  other->mPages = 0i64;
  other->mUpdateID = 0i64;
}

/*
==============
StreamerMemLoan::PagesForPool
==============
*/
__int64 StreamerMemLoan::PagesForPool(StreamerMemLoan *this, StreamMemPool pool)
{
  __int64 v3; 
  __int64 v5; 
  int v6; 

  v3 = (unsigned int)pool;
  if ( this->mCookie != -1061110033 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\streamer_mem_loan.cpp", 283, ASSERT_TYPE_ASSERT, "(mCookie == 0xC0C0BEEF)", (const char *)&queryFormat, "mCookie == 0xC0C0BEEF") )
    __debugbreak();
  if ( (unsigned int)v3 >= 2 )
  {
    v6 = 2;
    LODWORD(v5) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\streamer_mem_loan.h", 32, ASSERT_TYPE_ASSERT, "(unsigned)( pool ) < (unsigned)( ( sizeof( *array_counter( pages ) ) + 0 ) )", "pool doesn't index ARRAY_COUNT( pages )\n\t%i not in [0, %i)", v5, v6) )
      __debugbreak();
  }
  return this->mPages.pages[v3];
}

/*
==============
StreamerMemLoan::Ready
==============
*/
bool StreamerMemLoan::Ready(StreamerMemLoan *this)
{
  if ( this->mCookie != -1061110033 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\streamer_mem_loan.cpp", 290, ASSERT_TYPE_ASSERT, "(mCookie == 0xC0C0BEEF)", (const char *)&queryFormat, "mCookie == 0xC0C0BEEF") )
    __debugbreak();
  return !this->mUpdateID || Stream_BackendQueue_IsComplete(this->mUpdateID);
}

/*
==============
StreamerMemLoan::RemovePagesInternal
==============
*/
void StreamerMemLoan::RemovePagesInternal(StreamerMemLoan *this, StreamMemPool pool, unsigned int pageCount)
{
  if ( pageCount )
  {
    Sys_LockWrite(&s_streamerMemLoanTracking.lock);
    StreamerMemPageCounts::RemovePages(&s_streamerMemLoanTracking.pages, pool, pageCount);
    Sys_UnlockWrite(&s_streamerMemLoanTracking.lock);
  }
  StreamerMemPageCounts::RemovePages(&this->mPages, pool, pageCount);
}

/*
==============
StreamerMemLoan::Size
==============
*/
unsigned __int64 StreamerMemLoan::Size(StreamerMemLoan *this)
{
  if ( this->mCookie != -1061110033 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\streamer_mem_loan.cpp", 269, ASSERT_TYPE_ASSERT, "(mCookie == 0xC0C0BEEF)", (const char *)&queryFormat, "mCookie == 0xC0C0BEEF") )
    __debugbreak();
  return (unsigned __int64)StreamerMemLoan::TotalPages(this) << 16;
}

/*
==============
StreamerMemLoan::TakeAllPages
==============
*/
void StreamerMemLoan::TakeAllPages(StreamerMemLoan *this, StreamerMemPageCounts *pagesTaken)
{
  if ( this->mCookie != -1061110033 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\streamer_mem_loan.cpp", 290, ASSERT_TYPE_ASSERT, "(mCookie == 0xC0C0BEEF)", (const char *)&queryFormat, "mCookie == 0xC0C0BEEF") )
    __debugbreak();
  if ( this->mUpdateID && !Stream_BackendQueue_IsComplete(this->mUpdateID) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\streamer_mem_loan.cpp", 378, ASSERT_TYPE_ASSERT, "(Ready())", (const char *)&queryFormat, "Ready()") )
    __debugbreak();
  DecrementStreamerMemLoanPages(&this->mPages);
  pagesTaken->pages[0] += this->mPages.pages[0];
  pagesTaken->pages[1] += this->mPages.pages[1];
  this->mPages = 0i64;
}

/*
==============
StreamerMemLoan::TakePages
==============
*/
void StreamerMemLoan::TakePages(StreamerMemLoan *this, StreamMemPool poolPreference, unsigned int pageCount, StreamerMemPageCounts *pagesTaken)
{
  __int64 v5; 
  unsigned __int64 v8; 
  StreamerMemPageCounts *p_mPages; 
  __int64 v10; 
  unsigned int v11; 
  StreamerMemPageCounts *v12; 
  __int64 v13; 
  int v14; 
  StreamerMemPageCounts *v15; 
  __int64 v16; 
  unsigned int v17; 
  unsigned int v18; 
  unsigned int v19; 
  unsigned int v20; 
  __int64 v21; 
  __int64 v22; 
  unsigned int v23; 
  int v24; 

  v5 = (unsigned int)poolPreference;
  if ( this->mCookie != -1061110033 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\streamer_mem_loan.cpp", 290, ASSERT_TYPE_ASSERT, "(mCookie == 0xC0C0BEEF)", (const char *)&queryFormat, "mCookie == 0xC0C0BEEF") )
    __debugbreak();
  if ( this->mUpdateID && !Stream_BackendQueue_IsComplete(this->mUpdateID) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\streamer_mem_loan.cpp", 335, ASSERT_TYPE_ASSERT, "(Ready())", (const char *)&queryFormat, "Ready()") )
    __debugbreak();
  if ( this->mCookie != -1061110033 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\streamer_mem_loan.cpp", 276, ASSERT_TYPE_ASSERT, "(mCookie == 0xC0C0BEEF)", (const char *)&queryFormat, "mCookie == 0xC0C0BEEF") )
    __debugbreak();
  v8 = 0i64;
  p_mPages = &this->mPages;
  v10 = 2i64;
  v11 = 0;
  v12 = &this->mPages;
  v13 = 0i64;
  if ( &this->mPages > (StreamerMemPageCounts *)&this->mCookie )
    v10 = 0i64;
  if ( &this->mPages <= (StreamerMemPageCounts *)&this->mCookie )
  {
    do
    {
      v11 += v12->pages[0];
      v12 = (StreamerMemPageCounts *)((char *)v12 + 4);
      ++v13;
    }
    while ( v13 != v10 );
  }
  if ( pageCount > v11 )
  {
    if ( this->mCookie != -1061110033 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\streamer_mem_loan.cpp", 276, ASSERT_TYPE_ASSERT, "(mCookie == 0xC0C0BEEF)", (const char *)&queryFormat, "mCookie == 0xC0C0BEEF") )
      __debugbreak();
    v14 = 0;
    v15 = &this->mPages;
    v16 = 0i64;
    if ( p_mPages <= (StreamerMemPageCounts *)&this->mCookie )
    {
      do
      {
        v14 += v15->pages[0];
        v15 = (StreamerMemPageCounts *)((char *)v15 + 4);
        ++v16;
      }
      while ( v16 != v10 );
    }
    v24 = v14;
    v23 = pageCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\streamer_mem_loan.cpp", 336, ASSERT_TYPE_ASSERT, "( pageCount ) <= ( TotalPages() )", "%s <= %s\n\t%u, %u", "pageCount", "TotalPages()", v23, v24) )
      __debugbreak();
  }
  if ( (unsigned int)v5 >= 2 )
  {
    LODWORD(v22) = 2;
    LODWORD(v21) = v5;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\streamer_mem_loan.h", 32, ASSERT_TYPE_ASSERT, "(unsigned)( pool ) < (unsigned)( ( sizeof( *array_counter( pages ) ) + 0 ) )", "pool doesn't index ARRAY_COUNT( pages )\n\t%i not in [0, %i)", v21, v22) )
      __debugbreak();
  }
  if ( p_mPages->pages[v5] )
  {
    v17 = StreamerMemPageCounts::PagesForPool(&this->mPages, (StreamMemPool)v5);
    v18 = pageCount;
    if ( pageCount > v17 )
      v18 = v17;
    StreamerMemLoan::RemovePagesInternal(this, (StreamMemPool)v5, v18);
    pageCount -= v18;
    StreamerMemPageCounts::AddPages(pagesTaken, (StreamMemPool)v5, v18);
  }
  if ( pageCount )
  {
    do
    {
      if ( (_DWORD)v8 != (_DWORD)v5 && p_mPages->pages[(unsigned int)v8] )
      {
        v19 = StreamerMemPageCounts::PagesForPool(&this->mPages, (StreamMemPool)v8);
        v20 = pageCount;
        if ( pageCount > v19 )
          v20 = v19;
        if ( v20 )
        {
          Sys_LockWrite(&s_streamerMemLoanTracking.lock);
          StreamerMemPageCounts::RemovePages(&s_streamerMemLoanTracking.pages, (StreamMemPool)v8, v20);
          Sys_UnlockWrite(&s_streamerMemLoanTracking.lock);
        }
        StreamerMemPageCounts::RemovePages(&this->mPages, (StreamMemPool)v8, v20);
        StreamerMemPageCounts::AddPages(pagesTaken, (StreamMemPool)v8, v20);
        pageCount -= v20;
        if ( !pageCount )
          break;
      }
      ++v8;
    }
    while ( v8 < 2 );
  }
}

/*
==============
StreamerMemLoan::TakeSubloan
==============
*/
StreamerMemLoan *StreamerMemLoan::TakeSubloan(StreamerMemLoan *this, StreamerMemLoan *result, StreamMemPool poolPreference, unsigned __int64 size)
{
  unsigned __int64 v8; 
  __int64 v10; 

  if ( this->mCookie != -1061110033 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\streamer_mem_loan.cpp", 252, ASSERT_TYPE_ASSERT, "(mCookie == 0xC0C0BEEF)", (const char *)&queryFormat, "mCookie == 0xC0C0BEEF", 0, -2i64) )
    __debugbreak();
  result->mUpdateID = 0i64;
  result->mPages = 0i64;
  result->mCookie = -1061110033;
  LODWORD(v10) = 1;
  if ( this->mCookie != -1061110033 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\streamer_mem_loan.cpp", 269, ASSERT_TYPE_ASSERT, "(mCookie == 0xC0C0BEEF)", (const char *)&queryFormat, "mCookie == 0xC0C0BEEF", v10) )
    __debugbreak();
  if ( size <= (unsigned __int64)StreamerMemLoan::TotalPages(this) << 16 )
  {
    if ( size )
      v8 = (size + 0xFFFF) >> 16;
    else
      LODWORD(v8) = 0;
    StreamerMemLoan::TakePages(this, poolPreference, v8, &result->mPages);
    result->mUpdateID = this->mUpdateID;
  }
  return result;
}

/*
==============
StreamerMemLoan::TotalPages
==============
*/
__int64 StreamerMemLoan::TotalPages(StreamerMemLoan *this)
{
  __int64 result; 
  StreamerMemPageCounts *p_mPages; 
  __int64 v4; 
  __int64 v5; 

  if ( this->mCookie != -1061110033 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\streamer_mem_loan.cpp", 276, ASSERT_TYPE_ASSERT, "(mCookie == 0xC0C0BEEF)", (const char *)&queryFormat, "mCookie == 0xC0C0BEEF") )
    __debugbreak();
  result = 0i64;
  p_mPages = &this->mPages;
  v4 = 2i64;
  v5 = 0i64;
  if ( &this->mPages > (StreamerMemPageCounts *)&this->mCookie )
    v4 = 0i64;
  if ( &this->mPages <= (StreamerMemPageCounts *)&this->mCookie )
  {
    do
    {
      result = (unsigned int)(p_mPages->pages[0] + result);
      p_mPages = (StreamerMemPageCounts *)((char *)p_mPages + 4);
      ++v5;
    }
    while ( v5 != v4 );
  }
  return result;
}

/*
==============
StreamerMemLoan::TryGrow
==============
*/
bool StreamerMemLoan::TryGrow(StreamerMemLoan *this, StreamMemPool poolPreference, unsigned __int64 size)
{
  return StreamerMemLoan::TryGrowInternal(this, poolPreference, size, 0);
}

/*
==============
StreamerMemLoan::TryGrowInternal
==============
*/
bool StreamerMemLoan::TryGrowInternal(StreamerMemLoan *this, StreamMemPool poolPreference, unsigned __int64 size, bool backendFlushPossible)
{
  if ( this->mCookie != -1061110033 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\streamer_mem_loan.cpp", 230, ASSERT_TYPE_ASSERT, "(mCookie == 0xC0C0BEEF)", (const char *)&queryFormat, "mCookie == 0xC0C0BEEF") )
    __debugbreak();
  if ( this->mCookie != -1061110033 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\streamer_mem_loan.cpp", 269, ASSERT_TYPE_ASSERT, "(mCookie == 0xC0C0BEEF)", (const char *)&queryFormat, "mCookie == 0xC0C0BEEF") )
    __debugbreak();
  return (unsigned __int64)StreamerMemLoan::TotalPages(this) << 16 >= size || StreamerMemLoan::TryResizeInternal(this, poolPreference, size, backendFlushPossible);
}

/*
==============
StreamerMemLoan::TryResize
==============
*/
bool StreamerMemLoan::TryResize(StreamerMemLoan *this, StreamMemPool poolPreference, unsigned __int64 size)
{
  return StreamerMemLoan::TryResizeInternal(this, poolPreference, size, 0);
}

/*
==============
StreamerMemLoan::TryResizeInternal
==============
*/
bool StreamerMemLoan::TryResizeInternal(StreamerMemLoan *this, StreamMemPool poolPreference, unsigned __int64 size, bool backendFlushPossible)
{
  __int64 v5; 
  unsigned __int64 v8; 
  unsigned __int64 v9; 
  unsigned int v10; 
  unsigned int v11; 
  __int64 v12; 
  __int64 v13; 
  unsigned int v14; 
  unsigned int v15; 
  __int64 v16; 
  StreamerMemPageCounts *p_pages; 
  unsigned int v19; 
  __int64 v20; 
  StreamerMemPageCounts *v21; 
  int v22; 
  __int64 v23; 
  __int64 v24; 
  __int64 v25; 
  StreamerMemPageCounts pages; 
  StreamerMemPageCounts v27; 

  v5 = (unsigned int)poolPreference;
  if ( this->mCookie != -1061110033 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\streamer_mem_loan.cpp", 166, ASSERT_TYPE_ASSERT, "(mCookie == 0xC0C0BEEF)", (const char *)&queryFormat, "mCookie == 0xC0C0BEEF") )
    __debugbreak();
  v8 = 0i64;
  if ( size )
    v9 = (size + 0xFFFF) >> 16;
  else
    LODWORD(v9) = 0;
  v10 = StreamerMemLoan::TotalPages(this);
  v11 = v10 - v9;
  if ( v10 == (_DWORD)v9 )
    return 1;
  pages = 0i64;
  if ( (int)v11 > 0 )
  {
    v12 = 0i64;
    v13 = 2i64;
    while ( 1 )
    {
      if ( (_DWORD)v12 != (_DWORD)v5 && StreamerMemPageCounts::PagesForPool(&this->mPages, (StreamMemPool)v12) )
      {
        v14 = StreamerMemPageCounts::PagesForPool(&this->mPages, (StreamMemPool)v12);
        v15 = v11;
        if ( v11 > v14 )
          v15 = v14;
        StreamerMemLoan::RemovePagesInternal(this, (StreamMemPool)v12, v15);
        v11 -= v15;
        pages.pages[(unsigned int)v12] += v15;
        if ( !v11 )
          break;
      }
      if ( (unsigned __int64)++v12 >= 2 )
      {
        if ( (unsigned int)v5 >= 2 )
        {
          LODWORD(v24) = v5;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\streamer_mem_loan.h", 32, ASSERT_TYPE_ASSERT, "(unsigned)( pool ) < (unsigned)( ( sizeof( *array_counter( pages ) ) + 0 ) )", "pool doesn't index ARRAY_COUNT( pages )\n\t%i not in [0, %i)", v24, 2) )
            __debugbreak();
        }
        if ( this->mPages.pages[v5] < v11 )
        {
          if ( (unsigned int)v5 >= 2 )
          {
            LODWORD(v25) = 2;
            LODWORD(v24) = v5;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\streamer_mem_loan.h", 32, ASSERT_TYPE_ASSERT, "(unsigned)( pool ) < (unsigned)( ( sizeof( *array_counter( pages ) ) + 0 ) )", "pool doesn't index ARRAY_COUNT( pages )\n\t%i not in [0, %i)", v24, v25) )
              __debugbreak();
          }
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\streamer_mem_loan.cpp", 200, ASSERT_TYPE_ASSERT, "( mPages.PagesForPool( poolPreference ) ) >= ( pageSurplusLeft )", "%s >= %s\n\t%u, %u", "mPages.PagesForPool( poolPreference )", "pageSurplusLeft", this->mPages.pages[v5], v11) )
            __debugbreak();
        }
        Sys_LockWrite(&s_streamerMemLoanTracking.lock);
        StreamerMemPageCounts::RemovePages(&s_streamerMemLoanTracking.pages, (StreamMemPool)v5, v11);
        Sys_UnlockWrite(&s_streamerMemLoanTracking.lock);
        StreamerMemPageCounts::RemovePages(&this->mPages, (StreamMemPool)v5, v11);
        if ( (unsigned int)v5 >= 2 )
        {
          LODWORD(v25) = 2;
          LODWORD(v24) = v5;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\streamer_mem_loan.h", 48, ASSERT_TYPE_ASSERT, "(unsigned)( pool ) < (unsigned)( ( sizeof( *array_counter( pages ) ) + 0 ) )", "pool doesn't index ARRAY_COUNT( pages )\n\t%i not in [0, %i)", v24, v25) )
            __debugbreak();
        }
        pages.pages[v5] += v11;
        break;
      }
    }
    v16 = 0i64;
    p_pages = &pages;
    if ( &pages > &v27 )
      v13 = 0i64;
    if ( &pages <= &v27 )
    {
      do
      {
        LODWORD(v8) = p_pages->pages[0] + v8;
        ++v16;
        p_pages = (StreamerMemPageCounts *)((char *)p_pages + 4);
      }
      while ( v16 != v13 );
      if ( (_DWORD)v8 )
        Stream_Alloc_ReturnPagesFromMemPaged(&pages, this->mUpdateID);
    }
    return 1;
  }
  v19 = v9 - v10;
  if ( (_DWORD)v9 == v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\streamer_mem_loan.cpp", 88, ASSERT_TYPE_ASSERT, "(pageCount > 0)", (const char *)&queryFormat, "pageCount > 0") )
    __debugbreak();
  Stream_Alloc_RequestPagesForMemPaged((StreamMemPool)v5, v19, backendFlushPossible, &this->mUpdateID, &pages);
  this->mPages.pages[0] += pages.pages[0];
  this->mPages.pages[1] += pages.pages[1];
  v20 = 2i64;
  v21 = &pages;
  v22 = 0;
  if ( &pages > &v27 )
    v20 = 0i64;
  v23 = 0i64;
  if ( &pages <= &v27 )
  {
    do
    {
      v22 += v21->pages[0];
      v21 = (StreamerMemPageCounts *)((char *)v21 + 4);
      ++v23;
    }
    while ( v23 != v20 );
    if ( v22 )
    {
      Sys_LockWrite(&s_streamerMemLoanTracking.lock);
      do
      {
        s_streamerMemLoanTracking.pages.pages[(unsigned int)v8] += pages.pages[(unsigned int)v8];
        ++v8;
      }
      while ( v8 < 2 );
      Sys_UnlockWrite(&s_streamerMemLoanTracking.lock);
    }
  }
  return StreamerMemLoan::TotalPages(this) == (_DWORD)v9;
}


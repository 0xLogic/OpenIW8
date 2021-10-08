/*
==============
Stream_StreamerLoanHeap::EndUse
==============
*/

void __fastcall Stream_StreamerLoanHeap::EndUse(Stream_StreamerLoanHeap *this)
{
  ?EndUse@Stream_StreamerLoanHeap@@AEAAXXZ(this);
}

/*
==============
Stream_StreamerLoanHeap::PopUnusedFreeBlock
==============
*/

Stream_StreamerLoanHeap::FreeBlock *__fastcall Stream_StreamerLoanHeap::PopUnusedFreeBlock(Stream_StreamerLoanHeap *this)
{
  return ?PopUnusedFreeBlock@Stream_StreamerLoanHeap@@AEAAPEAUFreeBlock@1@XZ(this);
}

/*
==============
Stream_StreamerLoanHeap::Shrink
==============
*/

void __fastcall Stream_StreamerLoanHeap::Shrink(Stream_StreamerLoanHeap *this, unsigned __int64 sizeDiff, bool releaseMemory)
{
  ?Shrink@Stream_StreamerLoanHeap@@QEAAX_K_N@Z(this, sizeDiff, releaseMemory);
}

/*
==============
Stream_StreamerLoanHeap::Clear
==============
*/

void __fastcall Stream_StreamerLoanHeap::Clear(Stream_StreamerLoanHeap *this, bool releaseMemory)
{
  ?Clear@Stream_StreamerLoanHeap@@QEAAX_N@Z(this, releaseMemory);
}

/*
==============
Stream_StreamerLoanHeap::Allocate
==============
*/

unsigned __int8 *__fastcall Stream_StreamerLoanHeap::Allocate(Stream_StreamerLoanHeap *this, unsigned __int64 size, unsigned __int64 align)
{
  return ?Allocate@Stream_StreamerLoanHeap@@QEAAPEAE_K0@Z(this, size, align);
}

/*
==============
Stream_StreamerLoanHeap::BeginUse
==============
*/

void __fastcall Stream_StreamerLoanHeap::BeginUse(Stream_StreamerLoanHeap *this)
{
  ?BeginUse@Stream_StreamerLoanHeap@@AEAAXXZ(this);
}

/*
==============
Stream_StreamerLoanHeap::Deallocate
==============
*/

void __fastcall Stream_StreamerLoanHeap::Deallocate(Stream_StreamerLoanHeap *this, unsigned __int8 *addr, unsigned __int64 size)
{
  ?Deallocate@Stream_StreamerLoanHeap@@QEAAXPEAE_K@Z(this, addr, size);
}

/*
==============
Stream_StreamerLoanHeap::OneTimeInit
==============
*/

void __fastcall Stream_StreamerLoanHeap::OneTimeInit(Stream_StreamerLoanHeap *this, unsigned __int64 size, const char *heapName)
{
  ?OneTimeInit@Stream_StreamerLoanHeap@@QEAAX_KPEBD@Z(this, size, heapName);
}

/*
==============
Stream_StreamerLoanHeap::Grow
==============
*/

void __fastcall Stream_StreamerLoanHeap::Grow(Stream_StreamerLoanHeap *this, unsigned __int64 sizeDiff)
{
  ?Grow@Stream_StreamerLoanHeap@@QEAAX_K@Z(this, sizeDiff);
}

/*
==============
Stream_StreamerLoanHeap::PushUnusedFreeBlock
==============
*/

void __fastcall Stream_StreamerLoanHeap::PushUnusedFreeBlock(Stream_StreamerLoanHeap *this, Stream_StreamerLoanHeap::FreeBlock *block)
{
  ?PushUnusedFreeBlock@Stream_StreamerLoanHeap@@AEAAXPEAUFreeBlock@1@@Z(this, block);
}

/*
==============
Stream_StreamerLoanHeap::Ready
==============
*/

bool __fastcall Stream_StreamerLoanHeap::Ready(Stream_StreamerLoanHeap *this)
{
  return ?Ready@Stream_StreamerLoanHeap@@QEBA_NXZ(this);
}

/*
==============
Stream_StreamerLoanHeap::CheckIfReady
==============
*/

bool __fastcall Stream_StreamerLoanHeap::CheckIfReady(Stream_StreamerLoanHeap *this, bool forceReady)
{
  return ?CheckIfReady@Stream_StreamerLoanHeap@@QEAA_N_N@Z(this, forceReady);
}

/*
==============
Stream_StreamerLoanHeap::Allocate
==============
*/
unsigned __int8 *Stream_StreamerLoanHeap::Allocate(Stream_StreamerLoanHeap *this, unsigned __int64 size, unsigned __int64 align)
{
  Stream_StreamerLoanHeap::FreeBlock *m_freeList; 
  Stream_StreamerLoanHeap::FreeBlock *v7; 
  unsigned __int64 v8; 
  unsigned __int8 *m_address; 
  unsigned __int8 *i; 
  unsigned __int8 *v11; 
  unsigned __int8 *v12; 
  unsigned __int8 *v13; 
  bool v14; 
  Stream_StreamerLoanHeap::FreeBlock *v15; 
  unsigned __int8 *v16; 
  unsigned int v17; 
  unsigned __int8 *m_lastMappedAddress; 
  unsigned int v19; 
  unsigned int outPageDeficitOrCommitCount; 

  if ( !StreamerMemLoan::Ready(&this->m_loan) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_streamer_loan_heap.cpp", 155, ASSERT_TYPE_SANITY, "( m_loan.Ready() )", (const char *)&queryFormat, "m_loan.Ready()") )
    __debugbreak();
  if ( ((align - 1) & align) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_streamer_loan_heap.cpp", 156, ASSERT_TYPE_SANITY, "( IsPowerOf2( align ) )", (const char *)&queryFormat, "IsPowerOf2( align )") )
    __debugbreak();
  if ( !this->m_freeList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_streamer_loan_heap.cpp", 157, ASSERT_TYPE_SANITY, "( m_freeList ) != ( nullptr )", "m_freeList != nullptr\n\t0x%p, 0x%p", NULL, NULL) )
    __debugbreak();
  Stream_StreamerLoanHeap::BeginUse(this);
  m_freeList = this->m_freeList;
  v7 = NULL;
  v8 = (size + 15) & 0xFFFFFFFFFFFFFFF0ui64;
  if ( align < 0x10 )
    align = 16i64;
  m_address = m_freeList->m_address;
  for ( i = (unsigned __int8 *)(AlignUp<unsigned char *>(m_freeList->m_address, align) - m_address); (unsigned __int64)&i[v8] > m_freeList->m_size; i = (unsigned __int8 *)(AlignUp<unsigned char *>(m_freeList->m_address, align) - v11) )
  {
    v7 = m_freeList;
    m_freeList = m_freeList->m_next;
    if ( !m_freeList )
      Mem_Error_CannotAlloc_Dev(COUNT|DODGE|0x10, "Stream_StreamerLoanHeap::Allocate", "c:\\workspace\\iw8\\code_source\\src\\stream\\stream_streamer_loan_heap.cpp", 173, "Exhausted freeblock list in Stream_StreamerLoanHeap::Allocate trying to allocate %zu bytes", v8);
    v11 = m_freeList->m_address;
  }
  v12 = m_freeList->m_address;
  if ( !m_freeList->m_address && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_streamer_loan_heap.cpp", 179, ASSERT_TYPE_SANITY, "( addr ) != ( nullptr )", "addr != nullptr\n\t0x%p, 0x%p", NULL, NULL) )
    __debugbreak();
  v13 = &i[(_QWORD)v12];
  if ( ((align - 1) & align) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.h", 670, ASSERT_TYPE_ASSERT, "(align > 0 && IsPowerOf2( align ))", (const char *)&queryFormat, "align > 0 && IsPowerOf2( align )") )
    __debugbreak();
  if ( ((align - 1) & (unsigned __int64)v13) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_streamer_loan_heap.cpp", 182, ASSERT_TYPE_SANITY, "( IsAligned( alignedAddr, align ) )", (const char *)&queryFormat, "IsAligned( alignedAddr, align )") )
    __debugbreak();
  m_freeList->m_address += (unsigned __int64)&i[v8];
  v14 = m_freeList->m_size == (_QWORD)&i[v8];
  m_freeList->m_size -= (unsigned __int64)&i[v8];
  if ( v14 )
  {
    if ( v7 )
    {
      v7->m_next = m_freeList->m_next;
    }
    else
    {
      v15 = this->m_freeList;
      if ( v15 != m_freeList && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_streamer_loan_heap.cpp", 194, ASSERT_TYPE_SANITY, "( m_freeList ) == ( freeBlock )", "m_freeList == freeBlock\n\t0x%p, 0x%p", v15, m_freeList) )
        __debugbreak();
      this->m_freeList = m_freeList->m_next;
    }
    Stream_StreamerLoanHeap::PushUnusedFreeBlock(this, m_freeList);
  }
  if ( i )
  {
    if ( v12 == v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_streamer_loan_heap.cpp", 203, ASSERT_TYPE_SANITY, "( addr != alignedAddr )", (const char *)&queryFormat, "addr != alignedAddr") )
      __debugbreak();
    Stream_StreamerLoanHeap::EndUse(this);
    Stream_StreamerLoanHeap::Deallocate(this, v12, (unsigned __int64)i);
    Stream_StreamerLoanHeap::BeginUse(this);
  }
  if ( &v13[v8] > this->m_lastMappedAddress )
  {
    v16 = (unsigned __int8 *)((unsigned __int64)&v13[v8 + 0xFFFF] & 0xFFFFFFFFFFFF0000ui64);
    v17 = StreamerMemLoan::TotalPages(&this->m_loan);
    m_lastMappedAddress = this->m_lastMappedAddress;
    v19 = v17;
    outPageDeficitOrCommitCount = 0;
    if ( !Mem_Paged_CommitSubPageMemory(m_lastMappedAddress, v16, &this->m_loan, &outPageDeficitOrCommitCount, "Stream_StaticHeapLoan") && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_streamer_loan_heap.cpp", 219, ASSERT_TYPE_ASSERT, "(Mem_Paged_CommitSubPageMemory( m_lastMappedAddress, newLastMappedAddress, &m_loan, &commitPageCount , \"Stream_StaticHeapLoan\" ))", (const char *)&queryFormat, "Mem_Paged_CommitSubPageMemory( m_lastMappedAddress, newLastMappedAddress, &m_loan, &commitPageCount MEM_TRACK_ARGS( \"Stream_StaticHeapLoan\" ) )") )
      __debugbreak();
    if ( v19 < outPageDeficitOrCommitCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_streamer_loan_heap.cpp", 220, ASSERT_TYPE_ASSERT, "( pagesBeforeCommit ) >= ( commitPageCount )", "%s >= %s\n\t%u, %u", "pagesBeforeCommit", "commitPageCount", v19, outPageDeficitOrCommitCount) )
      __debugbreak();
    this->m_lastMappedAddress = v16;
  }
  Stream_StreamerLoanHeap::EndUse(this);
  return v13;
}

/*
==============
Stream_StreamerLoanHeap::BeginUse
==============
*/
void Stream_StreamerLoanHeap::BeginUse(Stream_StreamerLoanHeap *this)
{
  volatile __int32 *p_m_inUse; 

  p_m_inUse = &this->m_inUse;
  if ( (((_BYTE)this + 80) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 93, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &this->m_inUse) )
    __debugbreak();
  if ( _InterlockedExchange(p_m_inUse, 1) )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_streamer_loan_heap.cpp", 19, ASSERT_TYPE_ASSERT, "((Sys_InterlockedExchange( &m_inUse, 1 )) == (0))", (const char *)&queryFormat, "Sys_InterlockedExchange( &m_inUse, 1 ) == 0") )
      __debugbreak();
  }
}

/*
==============
Stream_StreamerLoanHeap::CheckIfReady
==============
*/
bool Stream_StreamerLoanHeap::CheckIfReady(Stream_StreamerLoanHeap *this, bool forceReady)
{
  unsigned __int64 m_committedSize; 
  StreamerMemLoan *p_m_loan; 
  StreamerMemLoan *v4; 
  bool result; 

  m_committedSize = this->m_committedSize;
  p_m_loan = &this->m_loan;
  v4 = &this->m_loan;
  if ( forceReady )
    return StreamerMemLoan::MakeReady(v4, MOVEMENT, m_committedSize);
  result = StreamerMemLoan::TryResize(v4, MOVEMENT, m_committedSize);
  if ( result )
    return StreamerMemLoan::Ready(p_m_loan);
  return result;
}

/*
==============
Stream_StreamerLoanHeap::Clear
==============
*/
void Stream_StreamerLoanHeap::Clear(Stream_StreamerLoanHeap *this, bool releaseMemory)
{
  unsigned __int8 *m_baseAddress; 
  unsigned __int8 *m_address; 
  unsigned __int64 m_size; 
  Stream_StreamerLoanHeap::FreeBlock *m_next; 
  unsigned __int64 m_committedSize; 

  Stream_StreamerLoanHeap::BeginUse(this);
  m_baseAddress = this->m_baseAddress;
  if ( m_baseAddress )
  {
    m_address = this->m_freeList->m_address;
    if ( m_address != m_baseAddress && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_streamer_loan_heap.cpp", 61, ASSERT_TYPE_SANITY, "( m_freeList->m_address ) == ( m_baseAddress )", "m_freeList->m_address == m_baseAddress\n\t0x%p, 0x%p", m_address, m_baseAddress) )
      __debugbreak();
    m_size = this->m_freeList->m_size;
    if ( m_size != this->m_vaSpaceSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_streamer_loan_heap.cpp", 62, ASSERT_TYPE_SANITY, "( m_freeList->m_size ) == ( m_vaSpaceSize )", "%s == %s\n\t%llu, %llu", "m_freeList->m_size", "m_vaSpaceSize", m_size, this->m_vaSpaceSize) )
      __debugbreak();
    m_next = this->m_freeList->m_next;
    if ( m_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_streamer_loan_heap.cpp", 63, ASSERT_TYPE_SANITY, "( m_freeList->m_next ) == ( nullptr )", "m_freeList->m_next == nullptr\n\t0x%p, 0x%p", m_next, NULL) )
      __debugbreak();
    if ( this->m_committedSize || releaseMemory )
    {
      Stream_StreamerLoanHeap::EndUse(this);
      Stream_StreamerLoanHeap::Shrink(this, this->m_committedSize, releaseMemory);
      Stream_StreamerLoanHeap::BeginUse(this);
      m_committedSize = this->m_committedSize;
      if ( m_committedSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_streamer_loan_heap.cpp", 71, ASSERT_TYPE_SANITY, "( m_committedSize ) == ( 0 )", "%s == %s\n\t%llu, %llu", "m_committedSize", "0", m_committedSize, 0i64) )
        __debugbreak();
      if ( releaseMemory && this->m_lastMappedAddress != this->m_baseAddress && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_streamer_loan_heap.cpp", 72, ASSERT_TYPE_SANITY, "( !releaseMemory || m_lastMappedAddress == m_baseAddress )", (const char *)&queryFormat, "!releaseMemory || m_lastMappedAddress == m_baseAddress") )
        __debugbreak();
    }
  }
  Stream_StreamerLoanHeap::EndUse(this);
}

/*
==============
Stream_StreamerLoanHeap::Deallocate
==============
*/
void Stream_StreamerLoanHeap::Deallocate(Stream_StreamerLoanHeap *this, unsigned __int8 *addr, unsigned __int64 size)
{
  Stream_StreamerLoanHeap::FreeBlock *v3; 
  Stream_StreamerLoanHeap::FreeBlock *m_freeList; 
  unsigned __int64 v8; 
  Stream_StreamerLoanHeap::FreeBlock *v9; 
  unsigned __int64 m_size; 
  Stream_StreamerLoanHeap::FreeBlock *v11; 
  Stream_StreamerLoanHeap::FreeBlock *v12; 
  Stream_StreamerLoanHeap::FreeBlock *m_next; 
  unsigned __int64 v14; 

  v3 = NULL;
  if ( !addr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_streamer_loan_heap.cpp", 234, ASSERT_TYPE_SANITY, "( addr ) != ( nullptr )", "addr != nullptr\n\t0x%p, 0x%p", NULL, NULL) )
    __debugbreak();
  if ( !size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_streamer_loan_heap.cpp", 235, ASSERT_TYPE_SANITY, "( size ) > ( 0 )", "%s > %s\n\t%llu, %llu", "size", "0", 0i64, 0i64) )
    __debugbreak();
  if ( ((unsigned __int8)addr & 0xF) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_streamer_loan_heap.cpp", 236, ASSERT_TYPE_SANITY, "( IsAligned( addr, MEM_SUB_PAGE_SIZE ) )", (const char *)&queryFormat, "IsAligned( addr, MEM_SUB_PAGE_SIZE )") )
    __debugbreak();
  Stream_StreamerLoanHeap::BeginUse(this);
  m_freeList = this->m_freeList;
  v8 = (size + 15) & 0xFFFFFFFFFFFFFFF0ui64;
  v9 = m_freeList;
  if ( !m_freeList )
    goto LABEL_31;
  do
  {
    if ( v9->m_address >= addr )
      break;
    v3 = v9;
    v9 = v9->m_next;
  }
  while ( v9 );
  if ( !v3 )
  {
LABEL_31:
    if ( m_freeList != v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_streamer_loan_heap.cpp", 269, ASSERT_TYPE_SANITY, "( m_freeList ) == ( nextBlock )", "m_freeList == nextBlock\n\t0x%p, 0x%p", m_freeList, v9) )
      __debugbreak();
    v12 = Stream_StreamerLoanHeap::PopUnusedFreeBlock(this);
    v12->m_address = addr;
    v12->m_size = v8;
    v12->m_next = v9;
    this->m_freeList = v12;
    goto LABEL_21;
  }
  m_size = v3->m_size;
  if ( &v3->m_address[m_size] != addr )
  {
    v12 = Stream_StreamerLoanHeap::PopUnusedFreeBlock(this);
    v12->m_address = addr;
    v12->m_size = v8;
    v12->m_next = v9;
    v3->m_next = v12;
LABEL_21:
    v11 = v12;
    goto LABEL_22;
  }
  v11 = v3;
  v3->m_size = m_size + v8;
LABEL_22:
  m_next = v11->m_next;
  if ( m_next != v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_streamer_loan_heap.cpp", 277, ASSERT_TYPE_SANITY, "( freeBlock->m_next ) == ( nextBlock )", "freeBlock->m_next == nextBlock\n\t0x%p, 0x%p", m_next, v9) )
    __debugbreak();
  if ( v9 )
  {
    v14 = v11->m_size;
    if ( &v11->m_address[v14] == v9->m_address )
    {
      v11->m_size = v14 + v9->m_size;
      v11->m_next = v9->m_next;
      Stream_StreamerLoanHeap::PushUnusedFreeBlock(this, v9);
    }
  }
  Stream_StreamerLoanHeap::EndUse(this);
}

/*
==============
Stream_StreamerLoanHeap::EndUse
==============
*/
void Stream_StreamerLoanHeap::EndUse(Stream_StreamerLoanHeap *this)
{
  volatile __int32 *p_m_inUse; 

  p_m_inUse = &this->m_inUse;
  if ( (((_BYTE)this + 80) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 93, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &this->m_inUse) )
    __debugbreak();
  if ( _InterlockedExchange(p_m_inUse, 0) != 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_streamer_loan_heap.cpp", 27, ASSERT_TYPE_ASSERT, "((Sys_InterlockedExchange( &m_inUse, 0 )) == (1))", (const char *)&queryFormat, "Sys_InterlockedExchange( &m_inUse, 0 ) == 1") )
    __debugbreak();
}

/*
==============
Stream_StreamerLoanHeap::Grow
==============
*/
void Stream_StreamerLoanHeap::Grow(Stream_StreamerLoanHeap *this, unsigned __int64 sizeDiff)
{
  unsigned __int64 m_committedSize; 
  unsigned __int64 m_peakCommittedSize; 
  unsigned __int64 v6; 
  bool v7; 
  bool v8; 
  unsigned __int64 v9; 

  Stream_StreamerLoanHeap::BeginUse(this);
  m_committedSize = this->m_committedSize;
  if ( m_committedSize + sizeDiff > this->m_vaSpaceSize )
  {
    Mem_Error_CannotAlloc_Dev(COUNT|DODGE|0x10, "Stream_StreamerLoanHeap::Grow", "c:\\workspace\\iw8\\code_source\\src\\stream\\stream_streamer_loan_heap.cpp", 87, "StreamerLoanHeap VA limit hit. %zu + %zu > %zu", m_committedSize, sizeDiff, this->m_vaSpaceSize);
    m_committedSize = this->m_committedSize;
  }
  m_peakCommittedSize = this->m_peakCommittedSize;
  v6 = m_committedSize + sizeDiff;
  v7 = m_peakCommittedSize < m_committedSize + sizeDiff;
  v8 = m_peakCommittedSize == m_committedSize + sizeDiff;
  this->m_committedSize = m_committedSize + sizeDiff;
  v9 = m_committedSize + sizeDiff;
  if ( !v7 && !v8 )
    v9 = m_peakCommittedSize;
  this->m_peakCommittedSize = v9;
  StreamerMemLoan::TryResize(&this->m_loan, MOVEMENT, v6);
  Stream_StreamerLoanHeap::EndUse(this);
}

/*
==============
Stream_StreamerLoanHeap::OneTimeInit
==============
*/
void Stream_StreamerLoanHeap::OneTimeInit(Stream_StreamerLoanHeap *this, unsigned __int64 size, const char *heapName)
{
  unsigned __int64 m_vaSpaceSize; 
  unsigned __int8 *m_baseAddress; 
  unsigned __int8 *v8; 
  Stream_StreamerLoanHeap::FreeBlock *v9; 
  __int64 v10; 

  m_vaSpaceSize = this->m_vaSpaceSize;
  if ( m_vaSpaceSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_streamer_loan_heap.cpp", 34, ASSERT_TYPE_SANITY, "( m_vaSpaceSize ) == ( 0 )", "%s == %s\n\t%llu, %llu", "m_vaSpaceSize", "0", m_vaSpaceSize, 0i64) )
    __debugbreak();
  m_baseAddress = this->m_baseAddress;
  if ( m_baseAddress && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_streamer_loan_heap.cpp", 35, ASSERT_TYPE_SANITY, "( m_baseAddress ) == ( nullptr )", "m_baseAddress == nullptr\n\t0x%p, 0x%p", m_baseAddress, NULL) )
    __debugbreak();
  Stream_StreamerLoanHeap::BeginUse(this);
  this->m_vaSpaceSize = size;
  v8 = (unsigned __int8 *)Mem_Paged_ReserveVirtualAddressRange(MEM_POOL_MAIN, size, heapName);
  this->m_baseAddress = v8;
  v9 = &this->m_freeBlocksTable[1];
  this->m_lastMappedAddress = v8;
  this->m_freeList = (Stream_StreamerLoanHeap::FreeBlock *)this;
  v10 = 31i64;
  this->m_freeBlocksTable[0].m_address = v8;
  this->m_freeList->m_size = this->m_vaSpaceSize;
  this->m_freeList->m_next = NULL;
  do
  {
    if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_streamer_loan_heap.cpp", 292, ASSERT_TYPE_SANITY, "( block ) != ( nullptr )", "block != nullptr\n\t0x%p, 0x%p", NULL, NULL) )
      __debugbreak();
    v9->m_next = this->m_unusedFreeBlocks;
    this->m_unusedFreeBlocks = v9++;
    --v10;
  }
  while ( v10 );
  Stream_StreamerLoanHeap::EndUse(this);
}

/*
==============
Stream_StreamerLoanHeap::PopUnusedFreeBlock
==============
*/
Stream_StreamerLoanHeap::FreeBlock *Stream_StreamerLoanHeap::PopUnusedFreeBlock(Stream_StreamerLoanHeap *this)
{
  Stream_StreamerLoanHeap::FreeBlock *result; 

  if ( !this->m_unusedFreeBlocks && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_streamer_loan_heap.cpp", 299, ASSERT_TYPE_SANITY, "( m_unusedFreeBlocks ) != ( nullptr )", "m_unusedFreeBlocks != nullptr\n\t0x%p, 0x%p", NULL, NULL) )
    __debugbreak();
  result = this->m_unusedFreeBlocks;
  this->m_unusedFreeBlocks = result->m_next;
  return result;
}

/*
==============
Stream_StreamerLoanHeap::PushUnusedFreeBlock
==============
*/
void Stream_StreamerLoanHeap::PushUnusedFreeBlock(Stream_StreamerLoanHeap *this, Stream_StreamerLoanHeap::FreeBlock *block)
{
  if ( !block && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_streamer_loan_heap.cpp", 292, ASSERT_TYPE_SANITY, "( block ) != ( nullptr )", "block != nullptr\n\t0x%p, 0x%p", NULL, NULL) )
    __debugbreak();
  block->m_next = this->m_unusedFreeBlocks;
  this->m_unusedFreeBlocks = block;
}

/*
==============
Stream_StreamerLoanHeap::Ready
==============
*/
bool Stream_StreamerLoanHeap::Ready(Stream_StreamerLoanHeap *this)
{
  return StreamerMemLoan::Ready(&this->m_loan);
}

/*
==============
Stream_StreamerLoanHeap::Shrink
==============
*/
void Stream_StreamerLoanHeap::Shrink(Stream_StreamerLoanHeap *this, unsigned __int64 sizeDiff, bool releaseMemory)
{
  unsigned __int64 m_committedSize; 
  unsigned __int8 *m_baseAddress; 
  Stream_StreamerLoanHeap::FreeBlock *m_freeList; 
  Stream_StreamerLoanHeap::FreeBlock *v9; 
  unsigned __int64 m_vaSpaceSize; 
  Stream_StreamerLoanHeap::FreeBlock *v11; 
  unsigned __int8 *m_lastMappedAddress; 
  unsigned __int8 *v13; 
  StreamerMemLoan *v14; 
  StreamerMemLoan result; 

  m_committedSize = this->m_committedSize;
  if ( m_committedSize < sizeDiff && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_streamer_loan_heap.cpp", 100, ASSERT_TYPE_SANITY, "( m_committedSize ) >= ( sizeDiff )", "%s >= %s\n\t%llu, %llu", "m_committedSize", "sizeDiff", m_committedSize, sizeDiff) )
    __debugbreak();
  Stream_StreamerLoanHeap::BeginUse(this);
  if ( sizeDiff )
  {
    this->m_committedSize -= sizeDiff;
    StreamerMemLoan::TryResize(&this->m_loan, MOVEMENT, this->m_committedSize);
  }
  if ( !this->m_committedSize )
  {
    m_baseAddress = this->m_baseAddress;
    m_freeList = this->m_freeList;
    if ( m_baseAddress != m_freeList->m_address && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_streamer_loan_heap.cpp", 112, ASSERT_TYPE_SANITY, "( m_baseAddress ) == ( m_freeList->m_address )", "m_baseAddress == m_freeList->m_address\n\t0x%p, 0x%p", m_baseAddress, m_freeList->m_address) )
      __debugbreak();
    v9 = this->m_freeList;
    if ( v9->m_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_streamer_loan_heap.cpp", 113, ASSERT_TYPE_SANITY, "( nullptr ) == ( m_freeList->m_next )", "nullptr == m_freeList->m_next\n\t0x%p, 0x%p", NULL, v9->m_next) )
      __debugbreak();
    m_vaSpaceSize = this->m_vaSpaceSize;
    v11 = this->m_freeList;
    if ( m_vaSpaceSize != v11->m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\stream\\stream_streamer_loan_heap.cpp", 114, ASSERT_TYPE_SANITY, "( m_vaSpaceSize ) == ( m_freeList->m_size )", "%s == %s\n\t%llu, %llu", "m_vaSpaceSize", "m_freeList->m_size", m_vaSpaceSize, v11->m_size) )
      __debugbreak();
    if ( releaseMemory )
    {
      m_lastMappedAddress = this->m_lastMappedAddress;
      v13 = this->m_baseAddress;
      if ( m_lastMappedAddress > v13 )
      {
        v14 = Mem_Paged_DecommitSubPageMemory(&result, v13, m_lastMappedAddress);
        StreamerMemLoan::GiveLoan(&this->m_loan, v14);
        StreamerMemLoan::~StreamerMemLoan(&result);
        this->m_lastMappedAddress = this->m_baseAddress;
      }
      *(&result.mCookie + 1) = 0;
      result.mUpdateID = 0i64;
      result.mPages = 0i64;
      result.mCookie = -1061110033;
      StreamerMemLoan::operator=(&this->m_loan, &result);
      StreamerMemLoan::~StreamerMemLoan(&result);
    }
  }
  Stream_StreamerLoanHeap::EndUse(this);
}


/*
==============
bdMallocMemory::eraseMemory
==============
*/

void __fastcall bdMallocMemory::eraseMemory(bdMallocMemory::bdMemoryChainElement *link)
{
  ?eraseMemory@bdMallocMemory@@CAXPEAUbdMemoryChainElement@1@@Z(link);
}

/*
==============
bdMallocMemory::alignedReallocate
==============
*/

void *__fastcall bdMallocMemory::alignedReallocate(void *p, const unsigned __int64 size, const unsigned __int64 align)
{
  return ?alignedReallocate@bdMallocMemory@@SAPEAXPEAX_K1@Z(p, size, align);
}

/*
==============
bdMallocMemory::alignedDeallocate
==============
*/

void __fastcall bdMallocMemory::alignedDeallocate(void *p)
{
  ?alignedDeallocate@bdMallocMemory@@SAXPEAX@Z(p);
}

/*
==============
bdMallocMemory::bdMallocMemory
==============
*/

void __fastcall bdMallocMemory::bdMallocMemory(bdMallocMemory *this)
{
  ??0bdMallocMemory@@AEAA@XZ(this);
}

/*
==============
bdMallocMemory::deallocate
==============
*/

void __fastcall bdMallocMemory::deallocate(void *p)
{
  ?deallocate@bdMallocMemory@@SAXPEAX@Z(p);
}

/*
==============
bdMallocMemory::recordMemory
==============
*/

void *__fastcall bdMallocMemory::recordMemory(bdMallocMemory::bdMemoryChainElement *link, const unsigned __int64 size, const bool aligned)
{
  return ?recordMemory@bdMallocMemory@@CAPEAXPEAUbdMemoryChainElement@1@_K_N@Z(link, size, aligned);
}

/*
==============
bdMallocMemory::alignedAllocate
==============
*/

void *__fastcall bdMallocMemory::alignedAllocate(const unsigned __int64 size, const unsigned __int64 align)
{
  return ?alignedAllocate@bdMallocMemory@@SAPEAX_K0@Z(size, align);
}

/*
==============
bdMallocMemory::allocate
==============
*/

void *__fastcall bdMallocMemory::allocate(const unsigned __int64 size)
{
  return ?allocate@bdMallocMemory@@SAPEAX_K@Z(size);
}

/*
==============
bdMallocMemory::releaseAllMemory
==============
*/

void bdMallocMemory::releaseAllMemory(void)
{
  ?releaseAllMemory@bdMallocMemory@@SAXXZ();
}

/*
==============
bdMallocMemory::reallocate
==============
*/

void *__fastcall bdMallocMemory::reallocate(void *p, const unsigned __int64 size)
{
  return ?reallocate@bdMallocMemory@@SAPEAXPEAX_K@Z(p, size);
}

/*
==============
bdMallocMemory::leakCheck
==============
*/

bool __fastcall bdMallocMemory::leakCheck()
{
  return ?leakCheck@bdMallocMemory@@SA_NXZ();
}

/*
==============
bdMallocMemory::bdMallocMemory
==============
*/
void bdMallocMemory::bdMallocMemory(bdMallocMemory *this)
{
  ;
}

/*
==============
bdMallocMemory::alignedAllocate
==============
*/
void *bdMallocMemory::alignedAllocate(const unsigned __int64 size, const unsigned __int64 align)
{
  bdMallocMemory::bdMemoryChainElement *v3; 

  v3 = (bdMallocMemory::bdMemoryChainElement *)bdAlignedOffsetMalloc(size + 40, align, 0x28ui64);
  return bdMallocMemory::recordMemory(v3, size, 1);
}

/*
==============
bdMallocMemory::alignedDeallocate
==============
*/
void bdMallocMemory::alignedDeallocate(void *p)
{
  bdMallocMemory::bdMemoryChainElement *v1; 

  if ( p )
  {
    v1 = (bdMallocMemory::bdMemoryChainElement *)((char *)p - 40);
    bdHandleAssert(*((char *)p - 24) == 1, "link->m_aligned == true", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdmemory\\bdmallocmemory-std.cpp", "bdMallocMemory::alignedDeallocate", 0x63u, "Memory block allocated unaligned but is being deallocated with bdMallocMemory::alignedDeallocate. Use bdMallocMemory::deallocate instead.");
    bdMallocMemory::eraseMemory(v1);
    bdAlignedOffsetFree(v1);
  }
}

/*
==============
bdMallocMemory::alignedReallocate
==============
*/
void *bdMallocMemory::alignedReallocate(void *p, const unsigned __int64 size, const unsigned __int64 align)
{
  __int64 v5; 
  char *v6; 
  bdMallocMemory::bdMemoryChainElement *v7; 

  if ( p )
  {
    v5 = *((_QWORD *)p - 4);
    v6 = (char *)p - 40;
    bdMallocMemory::eraseMemory((bdMallocMemory::bdMemoryChainElement *)p - 1);
    v7 = (bdMallocMemory::bdMemoryChainElement *)bdAlignedOffsetRealloc(v6, v5 + 40, size + 40, align, 0x28ui64);
  }
  else
  {
    v7 = (bdMallocMemory::bdMemoryChainElement *)bdAlignedOffsetMalloc(size + 40, align, 0x28ui64);
  }
  return bdMallocMemory::recordMemory(v7, size, 1);
}

/*
==============
bdMallocMemory::allocate
==============
*/
void *bdMallocMemory::allocate(const unsigned __int64 size)
{
  bdMallocMemory::bdMemoryChainElement *v2; 

  v2 = (bdMallocMemory::bdMemoryChainElement *)bdAlignedOffsetMalloc(size + 40, 8ui64, 0x28ui64);
  return bdMallocMemory::recordMemory(v2, size, 0);
}

/*
==============
bdMallocMemory::deallocate
==============
*/
void bdMallocMemory::deallocate(void *p)
{
  bdMallocMemory::bdMemoryChainElement *v1; 

  if ( p )
  {
    v1 = (bdMallocMemory::bdMemoryChainElement *)((char *)p - 40);
    bdHandleAssert(*((char *)p - 24) == 0, "link->m_aligned == false", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdmemory\\bdmallocmemory-std.cpp", "bdMallocMemory::deallocate", 0x32u, "Memory block allocated as aligned but is being deallocated with bdMallocMemory::deallocate. Use bdMallocMemory::alignedDeallocate instead.");
    bdMallocMemory::eraseMemory(v1);
    bdAlignedOffsetFree(v1);
  }
}

/*
==============
bdMallocMemory::eraseMemory
==============
*/
void bdMallocMemory::eraseMemory(bdMallocMemory::bdMemoryChainElement *link)
{
  bdMallocMemory::bdMemoryChainElement *m_prev; 
  bdMallocMemory::bdMemoryChainElement *m_next; 

  bdMutex::lock(&bdMallocMemory::m_mutex);
  if ( link->m_magic != 0xBDBD )
  {
    bdMutex::unlock(&bdMallocMemory::m_mutex);
    bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "mallocmemory", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdmemory\\bdmallocmemory-std.cpp", "bdMallocMemory::eraseMemory", 0xD0u, " BD_MEMORY_MAGIC is incorrect.");
    bdMutex::lock(&bdMallocMemory::m_mutex);
  }
  m_prev = link->m_prev;
  if ( m_prev )
    m_prev->m_next = link->m_next;
  else
    bdMallocMemory::m_memoryChain = link->m_next;
  m_next = link->m_next;
  if ( m_next )
    m_next->m_prev = link->m_prev;
  bdMallocMemory::m_allocatedBytes -= link->m_size;
  --bdMallocMemory::m_numAllocations;
  bdMutex::unlock(&bdMallocMemory::m_mutex);
}

/*
==============
bdMallocMemory::leakCheck
==============
*/
char bdMallocMemory::leakCheck()
{
  FILE *v0; 
  FILE *v1; 
  FILE *v2; 
  FILE *v3; 
  FILE *v4; 
  unsigned int v6; 
  char buf[112]; 

  if ( !bdMallocMemory::m_numAllocations || !bdMallocMemory::m_allocatedBytes )
    return 1;
  bdMutex::lock(&bdMallocMemory::m_mutex);
  v6 = bdMallocMemory::m_numAllocations;
  bdSnprintf(buf, 0x64ui64, "%u Bytes leaked in %u allocation(s)\n", bdMallocMemory::m_allocatedBytes, v6);
  bdMutex::unlock(&bdMallocMemory::m_mutex);
  v0 = __acrt_iob_func(2u);
  bdFprintf(v0, "********************************************\n");
  v1 = __acrt_iob_func(2u);
  bdFprintf(v1, "*      BITDEMON MEMORY LEAKS DETECTED      *\n");
  v2 = __acrt_iob_func(2u);
  bdFprintf(v2, "********************************************\n");
  v3 = __acrt_iob_func(2u);
  bdFprintf(v3, buf);
  v4 = __acrt_iob_func(2u);
  bdFprintf(v4, "********************************************\n");
  return 0;
}

/*
==============
bdMallocMemory::reallocate
==============
*/
void *bdMallocMemory::reallocate(void *p, const unsigned __int64 size)
{
  __int64 v3; 
  char *v4; 
  bdMallocMemory::bdMemoryChainElement *v5; 

  if ( p )
  {
    v3 = *((_QWORD *)p - 4);
    v4 = (char *)p - 40;
    bdMallocMemory::eraseMemory((bdMallocMemory::bdMemoryChainElement *)p - 1);
    v5 = (bdMallocMemory::bdMemoryChainElement *)bdAlignedOffsetRealloc(v4, v3 + 40, size + 40, 8ui64, 0x28ui64);
  }
  else
  {
    v5 = (bdMallocMemory::bdMemoryChainElement *)bdAlignedOffsetMalloc(size + 40, 8ui64, 0x28ui64);
  }
  return bdMallocMemory::recordMemory(v5, size, 0);
}

/*
==============
bdMallocMemory::recordMemory
==============
*/
bdMallocMemory::bdMemoryChainElement *bdMallocMemory::recordMemory(bdMallocMemory::bdMemoryChainElement *link, const unsigned __int64 size, const bool aligned)
{
  if ( !link )
    return 0i64;
  bdMutex::lock(&bdMallocMemory::m_mutex);
  link->m_size = size;
  link->m_magic = -16963;
  link->m_aligned = aligned;
  link->m_next = bdMallocMemory::m_memoryChain;
  link->m_prev = NULL;
  if ( bdMallocMemory::m_memoryChain )
    bdMallocMemory::m_memoryChain->m_prev = link;
  bdMallocMemory::m_allocatedBytes += size;
  ++bdMallocMemory::m_numAllocations;
  bdMallocMemory::m_memoryChain = link;
  bdMutex::unlock(&bdMallocMemory::m_mutex);
  return link + 1;
}

/*
==============
bdMallocMemory::releaseAllMemory
==============
*/
void bdMallocMemory::releaseAllMemory(void)
{
  bdMallocMemory::bdMemoryChainElement *i; 
  bdMallocMemory::bdMemoryChainElement *m_prev; 
  bdMallocMemory::bdMemoryChainElement *m_next; 

  bdMutex::lock(&bdMallocMemory::m_mutex);
  for ( i = bdMallocMemory::m_memoryChain; bdMallocMemory::m_memoryChain; i = bdMallocMemory::m_memoryChain )
  {
    bdMutex::lock(&bdMallocMemory::m_mutex);
    if ( i->m_magic != 0xBDBD )
    {
      bdMutex::unlock(&bdMallocMemory::m_mutex);
      bdLogMessage(BD_LOG_ERROR, (const char *const)&other, "mallocmemory", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdmemory\\bdmallocmemory-std.cpp", "bdMallocMemory::eraseMemory", 0xD0u, " BD_MEMORY_MAGIC is incorrect.");
      bdMutex::lock(&bdMallocMemory::m_mutex);
    }
    m_prev = i->m_prev;
    if ( m_prev )
      m_prev->m_next = i->m_next;
    else
      bdMallocMemory::m_memoryChain = i->m_next;
    m_next = i->m_next;
    if ( m_next )
      m_next->m_prev = i->m_prev;
    bdMallocMemory::m_allocatedBytes -= i->m_size;
    --bdMallocMemory::m_numAllocations;
    bdMutex::unlock(&bdMallocMemory::m_mutex);
    bdAlignedOffsetFree(i);
  }
  bdMutex::unlock(&bdMallocMemory::m_mutex);
}


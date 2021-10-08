/*
==============
bdMemory::setAllocateFunc
==============
*/

void __fastcall bdMemory::setAllocateFunc(void *(__fastcall *const allocator)(const unsigned __int64))
{
  ?setAllocateFunc@bdMemory@@SAXQ6APEAX_K@Z@Z(allocator);
}

/*
==============
bdMemory::allocate
==============
*/

void *__fastcall bdMemory::allocate(const unsigned __int64 size)
{
  return ?allocate@bdMemory@@SAPEAX_K@Z(size);
}

/*
==============
bdMemory::alignedReallocate
==============
*/

void *__fastcall bdMemory::alignedReallocate(void *p, const unsigned __int64 size, const unsigned __int64 align)
{
  return ?alignedReallocate@bdMemory@@SAPEAXPEAX_K1@Z(p, size, align);
}

/*
==============
bdMemory::getDeallocateFunc
==============
*/

void (__fastcall *__fastcall bdMemory::getDeallocateFunc())(void *)
{
  return ?getDeallocateFunc@bdMemory@@SAP6AXPEAX@ZXZ();
}

/*
==============
bdMemory::getAlignedAllocateFunc
==============
*/

void *(__fastcall *__fastcall bdMemory::getAlignedAllocateFunc())(const unsigned __int64, const unsigned __int64)
{
  return ?getAlignedAllocateFunc@bdMemory@@SAP6APEAX_K0@ZXZ();
}

/*
==============
bdMemory::setReallocateFunc
==============
*/

void __fastcall bdMemory::setReallocateFunc(void *(__fastcall *const reallocator)(void *, const unsigned __int64))
{
  ?setReallocateFunc@bdMemory@@SAXQ6APEAXPEAX_K@Z@Z(reallocator);
}

/*
==============
bdMemory::getAlignedReallocateFunc
==============
*/

void *(__fastcall *__fastcall bdMemory::getAlignedReallocateFunc())(void *, const unsigned __int64, const unsigned __int64)
{
  return ?getAlignedReallocateFunc@bdMemory@@SAP6APEAXPEAX_K1@ZXZ();
}

/*
==============
bdMemory::getAllocateFunc
==============
*/

void *(__fastcall *__fastcall bdMemory::getAllocateFunc())(const unsigned __int64)
{
  return ?getAllocateFunc@bdMemory@@SAP6APEAX_K@ZXZ();
}

/*
==============
bdMemory::setDeallocateFunc
==============
*/

void __fastcall bdMemory::setDeallocateFunc(void (__fastcall *const deallocator)(void *))
{
  ?setDeallocateFunc@bdMemory@@SAXQ6AXPEAX@Z@Z(deallocator);
}

/*
==============
bdMemory::setAlignedAllocateFunc
==============
*/

void __fastcall bdMemory::setAlignedAllocateFunc(void *(__fastcall *const allocator)(const unsigned __int64, const unsigned __int64))
{
  ?setAlignedAllocateFunc@bdMemory@@SAXQ6APEAX_K0@Z@Z(allocator);
}

/*
==============
bdMemory::alignedAllocate
==============
*/

void *__fastcall bdMemory::alignedAllocate(const unsigned __int64 size, const unsigned __int64 align)
{
  return ?alignedAllocate@bdMemory@@SAPEAX_K0@Z(size, align);
}

/*
==============
bdMemory::alignedDeallocate
==============
*/

void __fastcall bdMemory::alignedDeallocate(void *p)
{
  ?alignedDeallocate@bdMemory@@SAXPEAX@Z(p);
}

/*
==============
bdMemory::getReallocateFunc
==============
*/

void *(__fastcall *__fastcall bdMemory::getReallocateFunc())(void *, const unsigned __int64)
{
  return ?getReallocateFunc@bdMemory@@SAP6APEAXPEAX_K@ZXZ();
}

/*
==============
bdMemory::getAlignedDeallocateFunc
==============
*/

void (__fastcall *__fastcall bdMemory::getAlignedDeallocateFunc())(void *)
{
  return ?getAlignedDeallocateFunc@bdMemory@@SAP6AXPEAX@ZXZ();
}

/*
==============
bdMemory::setAlignedDeallocateFunc
==============
*/

void __fastcall bdMemory::setAlignedDeallocateFunc(void (__fastcall *const deallocator)(void *))
{
  ?setAlignedDeallocateFunc@bdMemory@@SAXQ6AXPEAX@Z@Z(deallocator);
}

/*
==============
bdMemory::setAlignedReallocateFunc
==============
*/

void __fastcall bdMemory::setAlignedReallocateFunc(void *(__fastcall *const reallocator)(void *, const unsigned __int64, const unsigned __int64))
{
  ?setAlignedReallocateFunc@bdMemory@@SAXQ6APEAXPEAX_K1@Z@Z(reallocator);
}

/*
==============
bdMemory::bdMemory
==============
*/

void __fastcall bdMemory::bdMemory(bdMemory *this)
{
  ??0bdMemory@@AEAA@XZ(this);
}

/*
==============
bdMemory::reallocate
==============
*/

void *__fastcall bdMemory::reallocate(void *p, const unsigned __int64 size)
{
  return ?reallocate@bdMemory@@SAPEAXPEAX_K@Z(p, size);
}

/*
==============
bdMemory::deallocate
==============
*/

void __fastcall bdMemory::deallocate(void *p)
{
  ?deallocate@bdMemory@@SAXPEAX@Z(p);
}

/*
==============
bdMemory::bdMemory
==============
*/
void bdMemory::bdMemory(bdMemory *this)
{
  ;
}

/*
==============
bdMemory::alignedAllocate
==============
*/
void *(*bdMemory::alignedAllocate(const unsigned __int64 size, const unsigned __int64 align))(const unsigned __int64, const unsigned __int64)
{
  void *(__fastcall *result)(const unsigned __int64, const unsigned __int64); 
  unsigned __int64 Func; 

  result = bdMemory::m_alignedAllocateFunc;
  if ( bdMemory::m_alignedAllocateFunc )
  {
    Func = (unsigned __int64)bdMemory::m_alignedAllocateFunc(size, align);
    if ( !Func )
      DebugBreak();
    bdHandleAssert(((align - 1) & Func) == 0, "BD_IS_MULTIPLE_OF_M(reinterpret_cast<bdUWord>(block), align)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdmemory\\bdmemory.cpp", "bdMemory::alignedAllocate", 0xB5u, "Memory block has incorrect alignment.");
    return (void *(__fastcall *)(const unsigned __int64, const unsigned __int64))Func;
  }
  return result;
}

/*
==============
bdMemory::alignedDeallocate
==============
*/
void bdMemory::alignedDeallocate(void *p)
{
  if ( bdMemory::m_alignedDeallocateFunc )
    bdMemory::m_alignedDeallocateFunc(p);
}

/*
==============
bdMemory::alignedReallocate
==============
*/
void *(*bdMemory::alignedReallocate(void *p, const unsigned __int64 size, const unsigned __int64 align))(void *, const unsigned __int64, const unsigned __int64)
{
  void *(__fastcall *result)(void *, const unsigned __int64, const unsigned __int64); 
  unsigned __int64 v5; 

  result = bdMemory::m_alignedReallocateFunc;
  if ( bdMemory::m_alignedReallocateFunc )
  {
    v5 = (unsigned __int64)bdMemory::m_alignedReallocateFunc(p, size, align);
    if ( !v5 )
      DebugBreak();
    bdHandleAssert(((align - 1) & v5) == 0, "BD_IS_MULTIPLE_OF_M(reinterpret_cast<bdUWord>(block), align)", "c:\\workspace\\iw8\\code_source\\libs\\demonwareclient\\bdcore\\bdmemory\\bdmemory.cpp", "bdMemory::alignedReallocate", 0xE2u, "Memory block has incorrect alignment.");
    return (void *(__fastcall *)(void *, const unsigned __int64, const unsigned __int64))v5;
  }
  return result;
}

/*
==============
bdMemory::allocate
==============
*/
void *(*bdMemory::allocate(const unsigned __int64 size))(const unsigned __int64)
{
  void *(__fastcall *result)(const unsigned __int64); 

  result = bdMemory::m_allocateFunc;
  if ( bdMemory::m_allocateFunc )
  {
    result = (void *(__fastcall *)(const unsigned __int64))bdMemory::m_allocateFunc(size);
    if ( !result )
    {
      DebugBreak();
      return 0i64;
    }
  }
  return result;
}

/*
==============
bdMemory::deallocate
==============
*/
void bdMemory::deallocate(void *p)
{
  if ( bdMemory::m_deallocateFunc )
    bdMemory::m_deallocateFunc(p);
}

/*
==============
bdMemory::getAlignedAllocateFunc
==============
*/
void *(*bdMemory::getAlignedAllocateFunc())(const unsigned __int64, const unsigned __int64)
{
  return bdMemory::m_alignedAllocateFunc;
}

/*
==============
bdMemory::getAlignedDeallocateFunc
==============
*/
void (*bdMemory::getAlignedDeallocateFunc())(void *)
{
  return bdMemory::m_alignedDeallocateFunc;
}

/*
==============
bdMemory::getAlignedReallocateFunc
==============
*/
void *(*bdMemory::getAlignedReallocateFunc())(void *, const unsigned __int64, const unsigned __int64)
{
  return bdMemory::m_alignedReallocateFunc;
}

/*
==============
bdMemory::getAllocateFunc
==============
*/
void *(*bdMemory::getAllocateFunc())(const unsigned __int64)
{
  return bdMemory::m_allocateFunc;
}

/*
==============
bdMemory::getDeallocateFunc
==============
*/
void (*bdMemory::getDeallocateFunc())(void *)
{
  return bdMemory::m_deallocateFunc;
}

/*
==============
bdMemory::getReallocateFunc
==============
*/
void *(*bdMemory::getReallocateFunc())(void *, const unsigned __int64)
{
  return bdMemory::m_reallocateFunc;
}

/*
==============
bdMemory::reallocate
==============
*/
void *(*bdMemory::reallocate(void *p, const unsigned __int64 size))(void *, const unsigned __int64)
{
  void *(__fastcall *result)(void *, const unsigned __int64); 

  result = bdMemory::m_reallocateFunc;
  if ( bdMemory::m_reallocateFunc )
  {
    result = (void *(__fastcall *)(void *, const unsigned __int64))bdMemory::m_reallocateFunc(p, size);
    if ( !result )
    {
      DebugBreak();
      return 0i64;
    }
  }
  return result;
}

/*
==============
bdMemory::setAlignedAllocateFunc
==============
*/
void bdMemory::setAlignedAllocateFunc(void *(*const allocator)(const unsigned __int64, const unsigned __int64))
{
  bdMemory::m_alignedAllocateFunc = allocator;
}

/*
==============
bdMemory::setAlignedDeallocateFunc
==============
*/
void bdMemory::setAlignedDeallocateFunc(void (*const deallocator)(void *))
{
  bdMemory::m_alignedDeallocateFunc = deallocator;
}

/*
==============
bdMemory::setAlignedReallocateFunc
==============
*/
void bdMemory::setAlignedReallocateFunc(void *(*const reallocator)(void *, const unsigned __int64, const unsigned __int64))
{
  bdMemory::m_alignedReallocateFunc = reallocator;
}

/*
==============
bdMemory::setAllocateFunc
==============
*/
void bdMemory::setAllocateFunc(void *(*const allocator)(const unsigned __int64))
{
  bdMemory::m_allocateFunc = allocator;
}

/*
==============
bdMemory::setDeallocateFunc
==============
*/
void bdMemory::setDeallocateFunc(void (*const deallocator)(void *))
{
  bdMemory::m_deallocateFunc = deallocator;
}

/*
==============
bdMemory::setReallocateFunc
==============
*/
void bdMemory::setReallocateFunc(void *(*const reallocator)(void *, const unsigned __int64))
{
  bdMemory::m_reallocateFunc = reallocator;
}


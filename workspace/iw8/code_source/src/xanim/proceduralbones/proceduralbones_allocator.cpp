/*
==============
XAnimProceduralBonesAllocator_DestroyHandle
==============
*/

void __fastcall XAnimProceduralBonesAllocator_DestroyHandle(DObjProceduralBonesHandle handle)
{
  ?XAnimProceduralBonesAllocator_DestroyHandle@@YAXVDObjProceduralBonesHandle@@@Z(handle);
}

/*
==============
XAnimProceduralBonesAllocator_FreeServerMemory
==============
*/

void XAnimProceduralBonesAllocator_FreeServerMemory(void)
{
  ?XAnimProceduralBonesAllocator_FreeServerMemory@@YAXXZ();
}

/*
==============
XAnimProceduralBonesAllocator_Unlock
==============
*/

void __fastcall XAnimProceduralBonesAllocator_Unlock(DObjProceduralBonesHandle handle)
{
  ?XAnimProceduralBonesAllocator_Unlock@@YAXVDObjProceduralBonesHandle@@@Z(handle);
}

/*
==============
XAnimProceduralBonesAllocator_AllocateServerMemorySP
==============
*/

void __fastcall XAnimProceduralBonesAllocator_AllocateServerMemorySP(HunkUser *hunkUser, int maxClients)
{
  ?XAnimProceduralBonesAllocator_AllocateServerMemorySP@@YAXPEAUHunkUser@@H@Z(hunkUser, maxClients);
}

/*
==============
XAnimProceduralBonesAllocator_PrintDebugInfoToBuffer
==============
*/

void __fastcall XAnimProceduralBonesAllocator_PrintDebugInfoToBuffer(char *buffer, int *bufferPos, unsigned __int64 bufferSize)
{
  ?XAnimProceduralBonesAllocator_PrintDebugInfoToBuffer@@YAXPEADPEAH_K@Z(buffer, bufferPos, bufferSize);
}

/*
==============
XAnimProcBonesSubAllocator_UpdateLRUList
==============
*/

void __fastcall XAnimProcBonesSubAllocator_UpdateLRUList(XAnimProcBonesSubAllocator *subAlloc)
{
  ?XAnimProcBonesSubAllocator_UpdateLRUList@@YAXPEAUXAnimProcBonesSubAllocator@@@Z(subAlloc);
}

/*
==============
XAnimProceduralBonesAllocator_InitClientMemory
==============
*/

void __fastcall XAnimProceduralBonesAllocator_InitClientMemory(void *buffer, unsigned __int64 size)
{
  ?XAnimProceduralBonesAllocator_InitClientMemory@@YAXPEAX_K@Z(buffer, size);
}

/*
==============
XAnimProceduralBonesAllocator_FreeClientMemory
==============
*/

void XAnimProceduralBonesAllocator_FreeClientMemory(void)
{
  ?XAnimProceduralBonesAllocator_FreeClientMemory@@YAXXZ();
}

/*
==============
XAnimProceduralBonesAllocator_PrintDebugInfoToConsole
==============
*/

void XAnimProceduralBonesAllocator_PrintDebugInfoToConsole(void)
{
  ?XAnimProceduralBonesAllocator_PrintDebugInfoToConsole@@YAXXZ();
}

/*
==============
XAnimProceduralBonesAllocator_InitServerMemory
==============
*/

void __fastcall XAnimProceduralBonesAllocator_InitServerMemory(void *buffer, unsigned __int64 size)
{
  ?XAnimProceduralBonesAllocator_InitServerMemory@@YAXPEAX_K@Z(buffer, size);
}

/*
==============
XAnimProcBonesInstance::SetNext
==============
*/

void __fastcall XAnimProcBonesInstance::SetNext(XAnimProcBonesInstance *this, unsigned __int16 next)
{
  ?SetNext@XAnimProcBonesInstance@@QEAAXG@Z(this, next);
}

/*
==============
XAnimProceduralBonesAllocator_GetClientAllocationSizeMP
==============
*/

unsigned int __fastcall XAnimProceduralBonesAllocator_GetClientAllocationSizeMP(int maxLocalClients, int maxCharacters)
{
  return ?XAnimProceduralBonesAllocator_GetClientAllocationSizeMP@@YAIHH@Z(maxLocalClients, maxCharacters);
}

/*
==============
XAnimProceduralBonesAllocator_GetDebugInfo
==============
*/

void __fastcall XAnimProceduralBonesAllocator_GetDebugInfo(XAnimProcBonesAllocatorDebugInfo *outDebugInfo)
{
  ?XAnimProceduralBonesAllocator_GetDebugInfo@@YAXPEAUXAnimProcBonesAllocatorDebugInfo@@@Z(outDebugInfo);
}

/*
==============
XAnimProceduralBonesAllocator_GetServerAllocationSizeMP
==============
*/

unsigned int __fastcall XAnimProceduralBonesAllocator_GetServerAllocationSizeMP(int maxClients)
{
  return ?XAnimProceduralBonesAllocator_GetServerAllocationSizeMP@@YAIH@Z(maxClients);
}

/*
==============
XAnimProceduralBonesAllocator_TryLock
==============
*/

DObjProceduralBones *__fastcall XAnimProceduralBonesAllocator_TryLock(DObjProceduralBonesHandle handle)
{
  return ?XAnimProceduralBonesAllocator_TryLock@@YAPEAUDObjProceduralBones@@VDObjProceduralBonesHandle@@@Z(handle);
}

/*
==============
XAnimProceduralBonesAllocator_CreateHandle
==============
*/

DObjProceduralBonesHandle __fastcall XAnimProceduralBonesAllocator_CreateHandle(bool isClientDObj, bool hasDynamicBones)
{
  return ?XAnimProceduralBonesAllocator_CreateHandle@@YA?AVDObjProceduralBonesHandle@@_N0@Z(isClientDObj, hasDynamicBones);
}

/*
==============
XAnimProceduralBonesAllocator_GetClientAllocationSizeSP
==============
*/

unsigned int __fastcall XAnimProceduralBonesAllocator_GetClientAllocationSizeSP(int maxLocalClients)
{
  return ?XAnimProceduralBonesAllocator_GetClientAllocationSizeSP@@YAIH@Z(maxLocalClients);
}

/*
==============
XAnimProceduralBonesAllocator_GetServerAllocationSizeSP
==============
*/

unsigned int __fastcall XAnimProceduralBonesAllocator_GetServerAllocationSizeSP(int maxClients)
{
  return ?XAnimProceduralBonesAllocator_GetServerAllocationSizeSP@@YAIH@Z(maxClients);
}

/*
==============
XAnimProceduralBonesAllocator_AllocateInstance
==============
*/

DObjProceduralBones *__fastcall XAnimProceduralBonesAllocator_AllocateInstance(DObjProceduralBonesHandle handle, unsigned __int64 size)
{
  return ?XAnimProceduralBonesAllocator_AllocateInstance@@YAPEAUDObjProceduralBones@@VDObjProceduralBonesHandle@@_K@Z(handle, size);
}

/*
==============
XAnimProceduralBonesAllocator_AllocateClientMemoryMP
==============
*/

void __fastcall XAnimProceduralBonesAllocator_AllocateClientMemoryMP(HunkUser *hunkUser, int maxLocalClients, int maxCharacters)
{
  ?XAnimProceduralBonesAllocator_AllocateClientMemoryMP@@YAXPEAUHunkUser@@HH@Z(hunkUser, maxLocalClients, maxCharacters);
}

/*
==============
XAnimProceduralBonesAllocator_Lock
==============
*/

void __fastcall XAnimProceduralBonesAllocator_Lock(DObjProceduralBonesHandle handle)
{
  ?XAnimProceduralBonesAllocator_Lock@@YAXVDObjProceduralBonesHandle@@@Z(handle);
}

/*
==============
XAnimProceduralBonesAllocator_BeginClientFrame
==============
*/

void XAnimProceduralBonesAllocator_BeginClientFrame(void)
{
  ?XAnimProceduralBonesAllocator_BeginClientFrame@@YAXXZ();
}

/*
==============
XAnimProceduralBonesAllocator_AllocateServerMemoryMP
==============
*/

void __fastcall XAnimProceduralBonesAllocator_AllocateServerMemoryMP(HunkUser *hunkUser, int maxClients)
{
  ?XAnimProceduralBonesAllocator_AllocateServerMemoryMP@@YAXPEAUHunkUser@@H@Z(hunkUser, maxClients);
}

/*
==============
XAnimProceduralBonesAllocator_AllocateClientMemorySP
==============
*/

void __fastcall XAnimProceduralBonesAllocator_AllocateClientMemorySP(HunkUser *hunkUser, int maxLocalClients)
{
  ?XAnimProceduralBonesAllocator_AllocateClientMemorySP@@YAXPEAUHunkUser@@H@Z(hunkUser, maxLocalClients);
}

/*
==============
XAnimProceduralBonesAllocator_TryGetProceduralBones
==============
*/

bool __fastcall XAnimProceduralBonesAllocator_TryGetProceduralBones(DObjProceduralBonesHandle handle, DObjProceduralBones **outProcBones)
{
  return ?XAnimProceduralBonesAllocator_TryGetProceduralBones@@YA_NVDObjProceduralBonesHandle@@PEAPEAUDObjProceduralBones@@@Z(handle, outProcBones);
}

/*
==============
XAnimProcBonesInstance::SetPrev
==============
*/

void __fastcall XAnimProcBonesInstance::SetPrev(XAnimProcBonesInstance *this, unsigned __int16 prev)
{
  ?SetPrev@XAnimProcBonesInstance@@QEAAXG@Z(this, prev);
}

/*
==============
XAnimProceduralBonesAllocator_BeginServerFrame
==============
*/

void XAnimProceduralBonesAllocator_BeginServerFrame(void)
{
  ?XAnimProceduralBonesAllocator_BeginServerFrame@@YAXXZ();
}

/*
==============
XAnimProcBonesInstance::SetNext
==============
*/
void XAnimProcBonesInstance::SetNext(XAnimProcBonesInstance *this, unsigned __int16 next)
{
  char v2; 
  unsigned __int16 v3; 
  int v4; 
  int v5; 

  v2 = (*((_BYTE *)this + 15) ^ HIBYTE(next)) & 0xF;
  this->nextLow = next;
  *((_BYTE *)this + 15) ^= v2;
  v3 = (unsigned __int8)next | ((*((_BYTE *)this + 15) & 0xF) << 8);
  if ( v3 != next )
  {
    v5 = next;
    v4 = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_allocator.cpp", 57, ASSERT_TYPE_ASSERT, "( Next() ) == ( next )", "%s == %s\n\t%u, %u", "Next()", "next", v4, v5) )
      __debugbreak();
  }
}

/*
==============
XAnimProcBonesInstance::SetPrev
==============
*/
void XAnimProcBonesInstance::SetPrev(XAnimProcBonesInstance *this, unsigned __int16 prev)
{
  unsigned __int8 v2; 
  unsigned __int16 v3; 
  int v4; 
  int v5; 

  v2 = *((_BYTE *)this + 15) & 0xF | (16 * HIBYTE(prev));
  *((_BYTE *)this + 15) = v2;
  this->prevLow = prev;
  v3 = (unsigned __int8)prev | (v2 >> 4 << 8);
  if ( v3 != prev )
  {
    v5 = prev;
    v4 = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_allocator.cpp", 69, ASSERT_TYPE_ASSERT, "( Prev() ) == ( prev )", "%s == %s\n\t%u, %u", "Prev()", "prev", v4, v5) )
      __debugbreak();
  }
}

/*
==============
XAnimProcBonesInstance_Lock
==============
*/
void XAnimProcBonesInstance_Lock(XAnimProcBonesInstance *instance)
{
  volatile int *p_locked; 

  p_locked = &instance->locked;
  while ( 1 )
  {
    if ( !*p_locked )
    {
      if ( ((unsigned __int8)p_locked & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", (const void *)p_locked) )
        __debugbreak();
      if ( !_InterlockedCompareExchange(p_locked, 1, 0) )
        break;
    }
    Sys_Sleep(0);
  }
}

/*
==============
XAnimProcBonesInstance_TryLock
==============
*/
bool XAnimProcBonesInstance_TryLock(XAnimProcBonesInstance *instance)
{
  volatile int *p_locked; 

  p_locked = &instance->locked;
  if ( instance->locked )
    return 0;
  if ( ((unsigned __int8)p_locked & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &instance->locked) )
    __debugbreak();
  return !_InterlockedCompareExchange(p_locked, 1, 0);
}

/*
==============
XAnimProcBonesInstance_Unlock
==============
*/
void XAnimProcBonesInstance_Unlock(XAnimProcBonesInstance *instance)
{
  volatile int *p_locked; 

  p_locked = &instance->locked;
  if ( !instance->locked && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_allocator.cpp", 460, ASSERT_TYPE_ASSERT, "(instance->locked)", (const char *)&queryFormat, "instance->locked") )
    __debugbreak();
  if ( ((unsigned __int8)p_locked & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 150, ASSERT_TYPE_ASSERT, "( ( IsAligned( addr, sizeof( volatile_int32 ) ) ) )", "( addr ) = %p", (const void *)p_locked) )
    __debugbreak();
  _InterlockedExchange(p_locked, 0);
}

/*
==============
XAnimProcBonesSubAllocator_Init
==============
*/
void XAnimProcBonesSubAllocator_Init(XAnimProcBonesSubAllocator *subAlloc, void *mem, unsigned __int64 sizeBytes)
{
  char *m_buffer; 
  char *v9; 
  char *v10; 
  char *v11; 
  ntl::solitary_buffer_allocator v12; 
  ntl::internal::buffer_memory_block<char> v13; 

  if ( subAlloc->initialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_allocator.cpp", 175, ASSERT_TYPE_ASSERT, "(!subAlloc->initialized)", (const char *)&queryFormat, "!subAlloc->initialized") )
    __debugbreak();
  if ( sizeBytes )
  {
    __asm { vpxor   xmm0, xmm0, xmm0 }
    if ( !mem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\buffer_allocator.h", 71, ASSERT_TYPE_ASSERT, "( p_buffer_start )", (const char *)&queryFormat, "p_buffer_start", _XMM0) )
      __debugbreak();
    v12.m_data.m_buffer = (char *)mem;
    v12.m_data.m_size = sizeBytes;
    ntl::nxheap::shutdown(&subAlloc->heap.m_heap);
    ntl::nxheap_region::shutdown(&subAlloc->heap.m_region);
    m_buffer = subAlloc->heap.m_data.m_buffer;
    if ( m_buffer )
    {
      v9 = subAlloc->heap.m_allocator.m_data.m_buffer;
      if ( m_buffer != v9 && v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\buffer_allocator.h", 64, ASSERT_TYPE_ASSERT, "( ( p_ptr == m_data.begin() ) || ( p_ptr == 0 ) || ( m_data.begin() == 0 ) )", (const char *)&queryFormat, "( p_ptr == m_data.begin() ) || ( p_ptr == NULL ) || ( m_data.begin() == NULL )") )
        __debugbreak();
      subAlloc->heap.m_data.m_buffer = NULL;
      subAlloc->heap.m_data.m_size = 0i64;
    }
    subAlloc->heap.m_allocator = v12;
    ntl::nxheap::shutdown(&subAlloc->heap.m_heap);
    ntl::nxheap_region::shutdown(&subAlloc->heap.m_region);
    v10 = subAlloc->heap.m_data.m_buffer;
    if ( v10 )
    {
      v11 = subAlloc->heap.m_allocator.m_data.m_buffer;
      if ( v10 != v11 && v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\buffer_allocator.h", 64, ASSERT_TYPE_ASSERT, "( ( p_ptr == m_data.begin() ) || ( p_ptr == 0 ) || ( m_data.begin() == 0 ) )", (const char *)&queryFormat, "( p_ptr == m_data.begin() ) || ( p_ptr == NULL ) || ( m_data.begin() == NULL )") )
        __debugbreak();
      subAlloc->heap.m_data.m_buffer = NULL;
      subAlloc->heap.m_data.m_size = 0i64;
    }
    if ( sizeBytes > subAlloc->heap.m_allocator.m_data.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\buffer_allocator.h", 56, ASSERT_TYPE_ASSERT, "( size_bytes <= m_data.size_in_bytes() )", (const char *)&queryFormat, "size_bytes <= m_data.size_in_bytes()") )
      __debugbreak();
    v13.m_buffer = subAlloc->heap.m_allocator.m_data.m_buffer;
    v13.m_size = sizeBytes;
    subAlloc->heap.m_data = v13;
    if ( subAlloc->heap.m_region.mp_start_ptr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\heap_allocator.h", 206, ASSERT_TYPE_ASSERT, "( !m_region.is_inited() )", (const char *)&queryFormat, "!m_region.is_inited()") )
      __debugbreak();
    ntl::nxheap_region::init(&subAlloc->heap.m_region, subAlloc->heap.m_data.m_buffer, subAlloc->heap.m_data.m_size);
    if ( subAlloc->heap.m_heap.mp_parent_region && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\heap_allocator.h", 209, ASSERT_TYPE_ASSERT, "( !heap().is_inited() )", (const char *)&queryFormat, "!heap().is_inited()") )
      __debugbreak();
    ntl::nxheap::init(&subAlloc->heap.m_heap, &subAlloc->heap.m_region, DIR_BOTTOM_UP);
  }
  else
  {
    ntl::nxheap::clear(&subAlloc->heap.m_heap);
  }
  *(_QWORD *)subAlloc->usedHandles.array = 0i64;
  *(_QWORD *)&subAlloc->usedHandles.array[2] = 0i64;
  *(_QWORD *)&subAlloc->usedHandles.array[4] = 0i64;
  *(_QWORD *)&subAlloc->usedHandles.array[6] = 0i64;
  *(_QWORD *)&subAlloc->usedHandles.array[8] = 0i64;
  *(_QWORD *)&subAlloc->usedHandles.array[10] = 0i64;
  *(_QWORD *)&subAlloc->usedHandles.array[12] = 0i64;
  *(_QWORD *)&subAlloc->usedHandles.array[14] = 0i64;
  *(_QWORD *)&subAlloc->usedHandles.array[16] = 0i64;
  *(_QWORD *)&subAlloc->usedHandles.array[18] = 0i64;
  *(_QWORD *)&subAlloc->usedHandles.array[20] = 0i64;
  *(_QWORD *)&subAlloc->usedHandles.array[22] = 0i64;
  *(_QWORD *)&subAlloc->usedHandles.array[24] = 0i64;
  *(_QWORD *)&subAlloc->usedHandles.array[26] = 0i64;
  *(_QWORD *)&subAlloc->usedHandles.array[28] = 0i64;
  *(_QWORD *)&subAlloc->usedHandles.array[30] = 0i64;
  memset_0(&subAlloc->instances, 0, sizeof(subAlloc->instances));
  XAnimProcBonesInstance::SetNext(subAlloc->instances.m_data, 0);
  XAnimProcBonesInstance::SetPrev(subAlloc->instances.m_data, 0);
  bitarray_base<bitarray<1024>>::setBit(&subAlloc->usedHandles, 0);
  *(_DWORD *)&subAlloc->numAllocations = 0;
  *(_DWORD *)&subAlloc->peakInstances = 0;
  subAlloc->numFailedAllocations = 0;
  subAlloc->peakRequestedBytes = 0i64;
  subAlloc->peakUsedBytes = 0i64;
  subAlloc->numInstances = 0;
  *(_WORD *)&subAlloc->salt = 256;
}

/*
==============
XAnimProcBonesSubAllocator_LRUList_PushBack
==============
*/
void XAnimProcBonesSubAllocator_LRUList_PushBack(XAnimProcBonesSubAllocator *subAlloc, unsigned __int16 index)
{
  unsigned __int64 v3; 
  char *v4; 
  unsigned __int64 v5; 
  XAnimProcBonesInstance *v6; 
  unsigned __int16 v7; 
  unsigned __int16 v8; 
  unsigned __int16 v9; 
  unsigned __int8 v10; 
  unsigned __int16 v11; 
  __int64 v12; 
  __int64 v13; 
  __int64 v14; 

  v3 = index;
  Sys_CheckLockWrite(&subAlloc->cs);
  if ( v3 >= 0x3E8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 87, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
    __debugbreak();
  v4 = (char *)subAlloc + 16 * (unsigned int)v3;
  v5 = subAlloc->instances.m_data[0].prevLow | (16i64 * (*((_BYTE *)subAlloc->instances.m_data + 15) & 0xF0));
  if ( v5 >= 0x3E8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 87, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
    __debugbreak();
  v6 = &subAlloc->instances.m_data[v5];
  v7 = v6->nextLow | ((*((_BYTE *)v6 + 15) & 0xF) << 8);
  if ( v7 )
  {
    LODWORD(v12) = v7;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_allocator.cpp", 432, ASSERT_TYPE_ASSERT, "( ( prevEntry->Next() == XANIM_PROCEDURALBONES_LRU_LIST_SENTINEL_INDEX ) )", "( prevEntry->Next() ) = %u", v12) )
      __debugbreak();
  }
  v4[231] &= 0xF0u;
  v4[229] = 0;
  v8 = subAlloc->instances.m_data[0].prevLow | (*((_BYTE *)subAlloc->instances.m_data + 15) >> 4 << 8);
  v4[230] = subAlloc->instances.m_data[0].prevLow;
  v9 = (unsigned __int8)v8 | (HIBYTE(v8) << 8);
  v4[231] = 16 * HIBYTE(v8);
  if ( v9 != v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_allocator.cpp", 69, ASSERT_TYPE_ASSERT, "( Prev() ) == ( prev )", "%s == %s\n\t%u, %u", "Prev()", "prev", v9, v8) )
    __debugbreak();
  v10 = *((_BYTE *)subAlloc->instances.m_data + 15) & 0xF | (16 * BYTE1(v3));
  *((_BYTE *)subAlloc->instances.m_data + 15) = v10;
  v11 = (unsigned __int8)v3 | (v10 >> 4 << 8);
  subAlloc->instances.m_data[0].prevLow = v3;
  if ( v11 != (_WORD)v3 )
  {
    LODWORD(v14) = (unsigned __int16)v3;
    LODWORD(v13) = v11;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_allocator.cpp", 69, ASSERT_TYPE_ASSERT, "( Prev() ) == ( prev )", "%s == %s\n\t%u, %u", "Prev()", "prev", v13, v14) )
      __debugbreak();
  }
  XAnimProcBonesInstance::SetNext(v6, v3);
}

/*
==============
XAnimProcBonesSubAllocator_UpdateLRUList
==============
*/
void XAnimProcBonesSubAllocator_UpdateLRUList(XAnimProcBonesSubAllocator *subAlloc)
{
  FastCriticalSection *p_cs; 
  __int16 v3; 
  unsigned __int16 v4; 
  XAnimProcBonesInstance *v5; 
  unsigned __int16 v6; 
  volatile signed __int32 *p_locked; 

  if ( !subAlloc->initialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_allocator.cpp", 472, ASSERT_TYPE_ASSERT, "(subAlloc->initialized)", (const char *)&queryFormat, "subAlloc->initialized", -2i64) )
    __debugbreak();
  p_cs = &subAlloc->cs;
  if ( subAlloc == (XAnimProcBonesSubAllocator *)-144i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock.h", 228, ASSERT_TYPE_ASSERT, "(cs)", (const char *)&queryFormat, "cs") )
    __debugbreak();
  Sys_LockWrite(&subAlloc->cs);
  v3 = subAlloc->instances.m_data[0].prevLow | (*((_BYTE *)subAlloc->instances.m_data + 15) >> 4 << 8);
  subAlloc->numReclaimableAllocations = 0;
  v4 = subAlloc->instances.m_data[0].nextLow | ((*((_BYTE *)subAlloc->instances.m_data + 15) & 0xF) << 8);
  if ( v4 )
  {
    do
    {
      if ( v4 >= 0x3E8ui64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 87, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
        __debugbreak();
      v5 = &subAlloc->instances.m_data[v4];
      v6 = v5->nextLow | ((*((_BYTE *)v5 + 15) & 0xF) << 8);
      p_locked = &v5->locked;
      if ( v5->locked )
        goto LABEL_36;
      if ( ((unsigned __int8)p_locked & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 121, ASSERT_TYPE_ASSERT, "( ( IsAligned( target, sizeof( volatile_int32 ) ) ) )", "( target ) = %p", &v5->locked) )
        __debugbreak();
      if ( _InterlockedCompareExchange(p_locked, 1, 0) )
      {
LABEL_36:
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_allocator.cpp", 487, ASSERT_TYPE_ASSERT, "(XAnimProcBonesInstance_TryLock( instance ))", (const char *)&queryFormat, "XAnimProcBonesInstance_TryLock( instance )") )
          __debugbreak();
      }
      if ( !v5->procBones && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_allocator.cpp", 490, ASSERT_TYPE_ASSERT, "(instance->procBones != nullptr)", (const char *)&queryFormat, "instance->procBones != nullptr") )
        __debugbreak();
      if ( (*((_BYTE *)v5 + 12) & 1) != 0 )
      {
        XAnimProcBonsSubAllocator_LRUList_Unlink(subAlloc, v4);
        XAnimProcBonesSubAllocator_LRUList_PushBack(subAlloc, v4);
        *((_BYTE *)v5 + 12) &= ~1u;
      }
      else
      {
        ++subAlloc->numReclaimableAllocations;
      }
      if ( !*p_locked && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_allocator.cpp", 460, ASSERT_TYPE_ASSERT, "(instance->locked)", (const char *)&queryFormat, "instance->locked") )
        __debugbreak();
      if ( ((unsigned __int8)p_locked & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 150, ASSERT_TYPE_ASSERT, "( ( IsAligned( addr, sizeof( volatile_int32 ) ) ) )", "( addr ) = %p", &v5->locked) )
        __debugbreak();
      _InterlockedExchange(p_locked, 0);
      if ( v4 == v3 )
        break;
      v4 = v6;
    }
    while ( v6 );
    p_cs = &subAlloc->cs;
  }
  Sys_UnlockWrite(p_cs);
}

/*
==============
XAnimProcBonsSubAllocator_LRUList_Unlink
==============
*/
void XAnimProcBonsSubAllocator_LRUList_Unlink(XAnimProcBonesSubAllocator *subAlloc, unsigned __int16 index)
{
  unsigned __int64 v3; 
  unsigned __int64 v4; 
  unsigned __int64 v5; 
  unsigned __int64 v6; 
  unsigned __int64 v7; 
  _BYTE *v8; 
  unsigned __int16 v9; 
  unsigned __int8 *v10; 
  unsigned __int16 v11; 
  unsigned int v12; 
  unsigned int v13; 
  unsigned __int16 v14; 
  unsigned __int8 v15; 
  unsigned __int16 v16; 
  unsigned __int16 v17; 
  unsigned __int8 v18; 
  unsigned __int16 v19; 
  unsigned __int8 v20; 
  unsigned __int16 v21; 
  __int64 v22; 
  __int64 v23; 
  __int64 v24; 
  __int64 v25; 
  unsigned __int8 *p_nextLow; 
  unsigned __int8 *p_prevLow; 

  v3 = index;
  Sys_CheckLockWrite(&subAlloc->cs);
  if ( v3 >= 0x3E8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 87, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
    __debugbreak();
  v4 = subAlloc->instances.m_data[(unsigned int)v3].prevLow | (16i64 * (*((_BYTE *)&subAlloc->instances.m_data[(unsigned int)v3] + 15) & 0xF0));
  if ( v4 >= 0x3E8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 87, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
    __debugbreak();
  v5 = v4;
  v6 = subAlloc->instances.m_data[(unsigned int)v3].nextLow | ((unsigned __int64)(*((_BYTE *)&subAlloc->instances.m_data[(unsigned int)v3] + 15) & 0xF) << 8);
  if ( v6 >= 0x3E8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 87, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
    __debugbreak();
  v7 = v6;
  v8 = (char *)&subAlloc->instances.m_data[v5] + 15;
  p_nextLow = &subAlloc->instances.m_data[v5].nextLow;
  v9 = *p_nextLow | ((*v8 & 0xF) << 8);
  if ( v9 != (_WORD)v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_allocator.cpp", 406, ASSERT_TYPE_ASSERT, "( prevEntry->Next() ) == ( index )", "%s == %s\n\t%i, %i", "prevEntry->Next()", "index", v9, (unsigned __int16)v3) )
    __debugbreak();
  v10 = (unsigned __int8 *)&subAlloc->instances.m_data[v7] + 15;
  p_prevLow = &subAlloc->instances.m_data[v7].prevLow;
  v11 = *p_prevLow | (*v10 >> 4 << 8);
  if ( v11 != (_WORD)v3 )
  {
    LODWORD(v25) = (unsigned __int16)v3;
    LODWORD(v24) = v11;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_allocator.cpp", 407, ASSERT_TYPE_ASSERT, "( nextEntry->Prev() ) == ( index )", "%s == %s\n\t%i, %i", "nextEntry->Prev()", "index", v24, v25) )
      __debugbreak();
  }
  if ( (unsigned __int16)v3 >= 0x400u )
  {
    LODWORD(v23) = 1024;
    LODWORD(v22) = (unsigned __int16)v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v22, v23) )
      __debugbreak();
  }
  if ( ((0x80000000 >> (v3 & 0x1F)) & subAlloc->usedHandles.array[(unsigned __int64)(unsigned __int16)v3 >> 5]) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_allocator.cpp", 409, ASSERT_TYPE_ASSERT, "(subAlloc->usedHandles.testBit( index ))", (const char *)&queryFormat, "subAlloc->usedHandles.testBit( index )") )
    __debugbreak();
  v12 = subAlloc->instances.m_data[(unsigned int)v3].prevLow | (16 * (*((_BYTE *)&subAlloc->instances.m_data[(unsigned int)v3] + 15) & 0xF0));
  if ( v12 >= 0x400 )
  {
    LODWORD(v23) = 1024;
    LODWORD(v22) = subAlloc->instances.m_data[(unsigned int)v3].prevLow | (16 * (*((_BYTE *)&subAlloc->instances.m_data[(unsigned int)v3] + 15) & 0xF0));
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v22, v23) )
      __debugbreak();
  }
  if ( ((0x80000000 >> (v12 & 0x1F)) & subAlloc->usedHandles.array[(unsigned __int64)v12 >> 5]) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_allocator.cpp", 410, ASSERT_TYPE_ASSERT, "(subAlloc->usedHandles.testBit( entry->Prev() ))", (const char *)&queryFormat, "subAlloc->usedHandles.testBit( entry->Prev() )") )
    __debugbreak();
  v13 = subAlloc->instances.m_data[(unsigned int)v3].nextLow | ((*((_BYTE *)&subAlloc->instances.m_data[(unsigned int)v3] + 15) & 0xF) << 8);
  if ( v13 >= 0x400 )
  {
    LODWORD(v23) = 1024;
    LODWORD(v22) = subAlloc->instances.m_data[(unsigned int)v3].nextLow | ((*((_BYTE *)&subAlloc->instances.m_data[(unsigned int)v3] + 15) & 0xF) << 8);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v22, v23) )
      __debugbreak();
  }
  if ( ((0x80000000 >> (v13 & 0x1F)) & subAlloc->usedHandles.array[(unsigned __int64)v13 >> 5]) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_allocator.cpp", 411, ASSERT_TYPE_ASSERT, "(subAlloc->usedHandles.testBit( entry->Next() ))", (const char *)&queryFormat, "subAlloc->usedHandles.testBit( entry->Next() )") )
    __debugbreak();
  v14 = subAlloc->instances.m_data[(unsigned int)v3].nextLow | ((*((_BYTE *)&subAlloc->instances.m_data[(unsigned int)v3] + 15) & 0xF) << 8);
  *p_nextLow = subAlloc->instances.m_data[(unsigned int)v3].nextLow;
  v15 = *v8 & 0xF0;
  *v8 = v15 | HIBYTE(v14);
  v16 = (unsigned __int8)v14 | (((v15 | HIBYTE(v14)) & 0xF) << 8);
  if ( v16 != v14 )
  {
    LODWORD(v25) = v14;
    LODWORD(v24) = v16;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_allocator.cpp", 57, ASSERT_TYPE_ASSERT, "( Next() ) == ( next )", "%s == %s\n\t%u, %u", "Next()", "next", v24, v25) )
      __debugbreak();
  }
  v17 = subAlloc->instances.m_data[(unsigned int)v3].prevLow | (*((_BYTE *)&subAlloc->instances.m_data[(unsigned int)v3] + 15) >> 4 << 8);
  *p_prevLow = subAlloc->instances.m_data[(unsigned int)v3].prevLow;
  v18 = *v10 & 0xF | (16 * HIBYTE(v17));
  *v10 = v18;
  v19 = (unsigned __int8)v17 | (v18 >> 4 << 8);
  if ( v19 != v17 )
  {
    LODWORD(v25) = v17;
    LODWORD(v24) = v19;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_allocator.cpp", 69, ASSERT_TYPE_ASSERT, "( Prev() ) == ( prev )", "%s == %s\n\t%u, %u", "Prev()", "prev", v24, v25) )
      __debugbreak();
  }
  XAnimProcBonesInstance::SetNext(&subAlloc->instances.m_data[(unsigned int)v3], v3);
  v20 = *((_BYTE *)&subAlloc->instances.m_data[(unsigned int)v3] + 15) & 0xF | (16 * BYTE1(v3));
  *((_BYTE *)&subAlloc->instances.m_data[(unsigned int)v3] + 15) = v20;
  v21 = (unsigned __int8)v3 | (v20 >> 4 << 8);
  subAlloc->instances.m_data[(unsigned int)v3].prevLow = v3;
  if ( v21 != (_WORD)v3 )
  {
    LODWORD(v25) = (unsigned __int16)v3;
    LODWORD(v24) = v21;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_allocator.cpp", 69, ASSERT_TYPE_ASSERT, "( Prev() ) == ( prev )", "%s == %s\n\t%u, %u", "Prev()", "prev", v24, v25) )
      __debugbreak();
  }
}

/*
==============
XAnimProceduralBonesAllocator_AllocateClientMemoryMP
==============
*/
void XAnimProceduralBonesAllocator_AllocateClientMemoryMP(HunkUser *hunkUser, int maxLocalClients, int maxCharacters)
{
  void *v3; 

  v3 = Mem_HunkUser_AllocInternal(hunkUser, 0x89800ui64, 0x10ui64, "XAnimProceduralBonesAllocator_AllocateClientMemoryMP");
  XAnimProcBonesSubAllocator_Init(&s_procBonesGlob.clientAlloc, v3, 0x89800ui64);
}

/*
==============
XAnimProceduralBonesAllocator_AllocateClientMemorySP
==============
*/
void XAnimProceduralBonesAllocator_AllocateClientMemorySP(HunkUser *hunkUser, int maxLocalClients)
{
  void *v2; 

  v2 = Mem_HunkUser_AllocInternal(hunkUser, 0x89800ui64, 0x10ui64, "XAnimProceduralBonesAllocator_AllocateClientMemorySP");
  XAnimProcBonesSubAllocator_Init(&s_procBonesGlob.clientAlloc, v2, 0x89800ui64);
}

/*
==============
XAnimProceduralBonesAllocator_AllocateInstance
==============
*/
DObjProceduralBones *XAnimProceduralBonesAllocator_AllocateInstance(DObjProceduralBonesHandle handle, unsigned __int64 size)
{
  XAnimProcBonesAllocatorGlob *p_clientAlloc; 
  unsigned __int64 v5; 
  __int64 v6; 
  __int64 v7; 
  unsigned __int8 v8; 
  int v9; 
  FastCriticalSection *p_cs; 
  unsigned __int64 v11; 
  unsigned __int64 v12; 
  DObjProceduralBones *v13; 
  unsigned __int64 v14; 
  unsigned __int64 v15; 
  unsigned __int16 v16; 
  unsigned __int64 m_used_mem; 
  unsigned __int16 v18; 
  unsigned __int16 v19; 
  __int64 v21; 
  __int64 v22; 

  if ( !handle.m_value && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_allocator.cpp", 652, ASSERT_TYPE_ASSERT, "(handle.IsValid())", (const char *)&queryFormat, "handle.IsValid()") )
    __debugbreak();
  p_clientAlloc = &s_procBonesGlob;
  if ( (handle.m_value & 0x40000000) != 0 )
    p_clientAlloc = (XAnimProcBonesAllocatorGlob *)&s_procBonesGlob.clientAlloc;
  if ( !handle.m_value && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_local.h", 441, ASSERT_TYPE_ASSERT, "(IsValid())", (const char *)&queryFormat, "IsValid()") )
    __debugbreak();
  v5 = truncate_cast<unsigned short,unsigned int>(handle.m_value & 0x1FFF);
  if ( v5 >= 0x3E8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 87, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
    __debugbreak();
  v6 = v5;
  v7 = (__int64)&p_clientAlloc->serverAlloc.instances + 4 * v6;
  if ( !p_clientAlloc->serverAlloc.instances.m_data[v6].locked && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_allocator.cpp", 656, ASSERT_TYPE_ASSERT, "(instance->locked)", (const char *)&queryFormat, "instance->locked") )
    __debugbreak();
  if ( *(_QWORD *)v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_allocator.cpp", 657, ASSERT_TYPE_ASSERT, "(instance->procBones == nullptr)", (const char *)&queryFormat, "instance->procBones == nullptr") )
    __debugbreak();
  if ( !handle.m_value && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_local.h", 448, ASSERT_TYPE_ASSERT, "(IsValid())", (const char *)&queryFormat, "IsValid()") )
    __debugbreak();
  v8 = *((_BYTE *)&p_clientAlloc->serverAlloc.instances.m_data[v6] + 12);
  if ( ((handle.m_value >> 13) & 0x7F) != v8 >> 1 )
  {
    v9 = v8 >> 1;
    if ( !handle.m_value && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_local.h", 448, ASSERT_TYPE_ASSERT, "(IsValid())", (const char *)&queryFormat, "IsValid()") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_allocator.cpp", 658, ASSERT_TYPE_ASSERT, "( handle.Salt() ) == ( instance->salt )", "%s == %s\n\t%u, %u", "handle.Salt()", "instance->salt", (handle.m_value >> 13) & 0x7F, v9) )
      __debugbreak();
  }
  p_cs = &p_clientAlloc->serverAlloc.cs;
  if ( p_clientAlloc == (XAnimProcBonesAllocatorGlob *)-144i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock.h", 228, ASSERT_TYPE_ASSERT, "(cs)", (const char *)&queryFormat, "cs") )
    __debugbreak();
  Sys_LockWrite(&p_clientAlloc->serverAlloc.cs);
  *(_BYTE *)(v7 + 12) |= 1u;
  v11 = size + p_clientAlloc->serverAlloc.heap.m_heap.m_used_mem;
  if ( v11 > p_clientAlloc->serverAlloc.peakRequestedBytes )
    p_clientAlloc->serverAlloc.peakRequestedBytes = v11;
  v12 = ntl::nxheap::largest_aligned_free_block(&p_clientAlloc->serverAlloc.heap.m_heap, 0x10ui64);
  v13 = NULL;
  if ( Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_xanim_proceduralBonesDebugMemoryBudget, "xanim_proceduralBonesDebugMemoryBudget") >= 0 )
  {
    v14 = Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_xanim_proceduralBonesDebugMemoryBudget, "xanim_proceduralBonesDebugMemoryBudget") << 10;
    v15 = 0i64;
    if ( p_clientAlloc->serverAlloc.heap.m_heap.m_used_mem <= v14 )
      v15 = v14 - p_clientAlloc->serverAlloc.heap.m_heap.m_used_mem;
    if ( v12 < v15 )
      v15 = v12;
    v12 = v15;
  }
  if ( size < v12 || XAnimProceduralBonesAllocator_ReclaimMemory(&p_clientAlloc->serverAlloc, size) )
  {
    v16 = ++p_clientAlloc->serverAlloc.numAllocations;
    if ( v16 > p_clientAlloc->serverAlloc.peakAllocations )
      p_clientAlloc->serverAlloc.peakAllocations = v16;
    v13 = (DObjProceduralBones *)ntl::nxheap::allocate(&p_clientAlloc->serverAlloc.heap.m_heap, size, 0x10ui64, 0);
    if ( !v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_allocator.cpp", 687, ASSERT_TYPE_ASSERT, "(instanceData != nullptr)", (const char *)&queryFormat, "instanceData != nullptr") )
      __debugbreak();
    m_used_mem = p_clientAlloc->serverAlloc.heap.m_heap.m_used_mem;
    if ( m_used_mem > p_clientAlloc->serverAlloc.peakUsedBytes )
      p_clientAlloc->serverAlloc.peakUsedBytes = m_used_mem;
    if ( !handle.m_value && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_local.h", 441, ASSERT_TYPE_ASSERT, "(IsValid())", (const char *)&queryFormat, "IsValid()") )
      __debugbreak();
    v18 = truncate_cast<unsigned short,unsigned int>(handle.m_value & 0x1FFF);
    v19 = v18;
    if ( v18 >= 0x3E8u )
    {
      LODWORD(v22) = 1000;
      LODWORD(v21) = v18;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_allocator.cpp", 637, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( XANIM_PROCEDURALBONES_MAX_INSTANCES )", "index doesn't index XANIM_PROCEDURALBONES_MAX_INSTANCES\n\t%i not in [0, %i)", v21, v22) )
        __debugbreak();
    }
    if ( v19 >= 0x3E8ui64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 87, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
      __debugbreak();
    if ( !p_clientAlloc->serverAlloc.instances.m_data[v19].locked && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_allocator.cpp", 640, ASSERT_TYPE_ASSERT, "(instance->locked)", (const char *)&queryFormat, "instance->locked") )
      __debugbreak();
    if ( p_clientAlloc->serverAlloc.instances.m_data[v19].procBones && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_allocator.cpp", 641, ASSERT_TYPE_ASSERT, "(instance->procBones == nullptr)", (const char *)&queryFormat, "instance->procBones == nullptr") )
      __debugbreak();
    if ( !v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_allocator.cpp", 642, ASSERT_TYPE_ASSERT, "(procBones != nullptr)", (const char *)&queryFormat, "procBones != nullptr") )
      __debugbreak();
    p_clientAlloc->serverAlloc.instances.m_data[v19].procBones = v13;
    XAnimProcBonesSubAllocator_LRUList_PushBack(&p_clientAlloc->serverAlloc, v19);
    p_cs = &p_clientAlloc->serverAlloc.cs;
  }
  else
  {
    ++p_clientAlloc->serverAlloc.numFailedAllocations;
  }
  Sys_UnlockWrite(p_cs);
  return v13;
}

/*
==============
XAnimProceduralBonesAllocator_AllocateServerMemoryMP
==============
*/
void XAnimProceduralBonesAllocator_AllocateServerMemoryMP(HunkUser *hunkUser, int maxClients)
{
  unsigned int v2; 
  unsigned int v3; 
  void *v4; 

  v2 = 102400;
  if ( (unsigned int)(1100 * maxClients + 0x2000) > 0x19000 )
    v2 = 1100 * maxClients + 0x2000;
  v3 = v2;
  v4 = Mem_HunkUser_AllocInternal(hunkUser, v2, 0x10ui64, "XAnimProceduralBonesAllocator_AllocateServerMemoryMP");
  XAnimProcBonesSubAllocator_Init(&s_procBonesGlob.serverAlloc, v4, v3);
}

/*
==============
XAnimProceduralBonesAllocator_AllocateServerMemorySP
==============
*/
void XAnimProceduralBonesAllocator_AllocateServerMemorySP(HunkUser *hunkUser, int maxClients)
{
  void *v2; 

  v2 = Mem_HunkUser_AllocInternal(hunkUser, 0x19000ui64, 0x10ui64, "XAnimProceduralBonesAllocator_AllocateServerMemorySP");
  XAnimProcBonesSubAllocator_Init(&s_procBonesGlob.serverAlloc, v2, 0x19000ui64);
}

/*
==============
XAnimProceduralBonesAllocator_BeginClientFrame
==============
*/
void XAnimProceduralBonesAllocator_BeginClientFrame(void)
{
  XAnimProcBonesSubAllocator_UpdateLRUList(&s_procBonesGlob.clientAlloc);
}

/*
==============
XAnimProceduralBonesAllocator_BeginServerFrame
==============
*/
void XAnimProceduralBonesAllocator_BeginServerFrame(void)
{
  XAnimProcBonesSubAllocator_UpdateLRUList(&s_procBonesGlob.serverAlloc);
}

/*
==============
XAnimProceduralBonesAllocator_CreateHandle
==============
*/
int *XAnimProceduralBonesAllocator_CreateHandle(int *isClientDObj, bool hasDynamicBones, char a3)
{
  bool initialized; 
  FastCriticalSection *p_cs; 
  unsigned __int16 numInstances; 
  bitarray_base<bitarray<1024> > *p_usedHandles; 
  unsigned int v10; 
  unsigned int v11; 
  bitarray_base<bitarray<1024> > *v12; 
  unsigned int v13; 
  unsigned __int16 v14; 
  ntl::fixed_array<XAnimProcBonesInstance,1000> *p_instances; 
  XAnimProcBonesInstance *v16; 
  unsigned __int8 *p_salt; 
  unsigned __int8 salt; 
  char v19; 
  int v20; 
  unsigned __int16 v21; 
  unsigned __int16 v22; 
  unsigned __int16 *p_numInstances; 
  unsigned __int16 peakInstances; 
  unsigned __int16 *p_peakInstances; 
  __int64 v27; 

  initialized = s_procBonesGlob.serverAlloc.initialized;
  if ( hasDynamicBones )
    initialized = s_procBonesGlob.clientAlloc.initialized;
  if ( !initialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_allocator.cpp", 705, ASSERT_TYPE_ASSERT, "(subAlloc->initialized)", (const char *)&queryFormat, "subAlloc->initialized") )
    __debugbreak();
  p_cs = &s_procBonesGlob.serverAlloc.cs;
  if ( hasDynamicBones )
    p_cs = &s_procBonesGlob.clientAlloc.cs;
  Sys_LockWrite(p_cs);
  *isClientDObj = 0;
  numInstances = s_procBonesGlob.serverAlloc.numInstances;
  if ( hasDynamicBones )
    numInstances = s_procBonesGlob.clientAlloc.numInstances;
  if ( numInstances >= 0x3E8u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_allocator.cpp", 712, ASSERT_TYPE_ASSERT, "( subAlloc->numInstances ) < ( XANIM_PROCEDURALBONES_MAX_INSTANCES )", "%s < %s\n\t%i, %i", "subAlloc->numInstances", "XANIM_PROCEDURALBONES_MAX_INSTANCES", numInstances, 1000) )
    __debugbreak();
  p_usedHandles = &s_procBonesGlob.serverAlloc.usedHandles;
  if ( hasDynamicBones )
    p_usedHandles = &s_procBonesGlob.clientAlloc.usedHandles;
  v10 = 0;
  v11 = 0;
  v12 = p_usedHandles;
  do
  {
    v13 = __lzcnt(~*(_DWORD *)v12);
    v10 += v13;
    if ( v13 < 0x20 )
      break;
    ++v11;
    v12 += 4;
  }
  while ( v11 < 0x20 );
  v14 = truncate_cast<unsigned short,unsigned int>(v10);
  if ( v14 < 0x400u )
  {
    p_instances = &s_procBonesGlob.serverAlloc.instances;
    if ( hasDynamicBones )
      p_instances = &s_procBonesGlob.clientAlloc.instances;
    if ( v14 >= 0x3E8ui64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 87, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
      __debugbreak();
    v16 = &p_instances->m_data[v14];
    if ( !XAnimProcBonesInstance_TryLock(v16) )
    {
      LODWORD(v27) = v14;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_allocator.cpp", 722, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "XAnimProceduralBonesAllocator_CreateHandle: new instance %d unexpectedly locked by another thread (stale handle?)", v27) )
        __debugbreak();
      XAnimProcBonesInstance_Lock(v16);
    }
    v16->procBones = NULL;
    *((_BYTE *)v16 + 12) &= ~1u;
    p_salt = &s_procBonesGlob.serverAlloc.salt;
    if ( hasDynamicBones )
      p_salt = &s_procBonesGlob.clientAlloc.salt;
    salt = s_procBonesGlob.serverAlloc.salt;
    if ( hasDynamicBones )
      salt = s_procBonesGlob.clientAlloc.salt;
    v19 = (salt + 1) & 0x7F;
    *p_salt = v19;
    if ( !v19 )
    {
      *p_salt = 1;
      v19 = 1;
    }
    *((_BYTE *)v16 + 12) &= 1u;
    *((_BYTE *)v16 + 12) |= 2 * v19;
    bitarray_base<bitarray<1024>>::setBit(p_usedHandles, v14);
    v20 = v14 & 0x1FFF | (*((_BYTE *)v16 + 12) >> 1 << 13);
    *isClientDObj = v20;
    if ( a3 )
    {
      v20 |= 0xA0000000;
      *isClientDObj = v20;
    }
    if ( hasDynamicBones )
      *isClientDObj = v20 | 0x40000000;
    v21 = s_procBonesGlob.serverAlloc.numInstances;
    if ( hasDynamicBones )
      v21 = s_procBonesGlob.clientAlloc.numInstances;
    v22 = v21 + 1;
    p_numInstances = &s_procBonesGlob.serverAlloc.numInstances;
    if ( hasDynamicBones )
      p_numInstances = &s_procBonesGlob.clientAlloc.numInstances;
    *p_numInstances = v22;
    peakInstances = s_procBonesGlob.serverAlloc.peakInstances;
    if ( hasDynamicBones )
      peakInstances = s_procBonesGlob.clientAlloc.peakInstances;
    if ( v22 > peakInstances )
      peakInstances = v22;
    p_peakInstances = &s_procBonesGlob.serverAlloc.peakInstances;
    if ( hasDynamicBones )
      p_peakInstances = &s_procBonesGlob.clientAlloc.peakInstances;
    *p_peakInstances = peakInstances;
    XAnimProcBonesInstance::SetNext(v16, v14);
    XAnimProcBonesInstance::SetPrev(v16, v14);
    XAnimProcBonesInstance_Unlock(v16);
  }
  Sys_UnlockWrite(p_cs);
  return isClientDObj;
}

/*
==============
XAnimProceduralBonesAllocator_DestroyHandle
==============
*/
void XAnimProceduralBonesAllocator_DestroyHandle(DObjProceduralBonesHandle handle)
{
  __int16 m_value; 
  XAnimProcBonesAllocatorGlob *p_clientAlloc; 
  XAnimProcBonesInstance *Instance; 
  unsigned __int16 v4; 
  unsigned __int16 v5; 
  unsigned __int64 v6; 

  if ( handle.m_value )
  {
    m_value = handle.m_value;
    p_clientAlloc = &s_procBonesGlob;
    if ( (handle.m_value & 0x40000000) != 0 )
      p_clientAlloc = (XAnimProcBonesAllocatorGlob *)&s_procBonesGlob.clientAlloc;
    Instance = XAnimProceduralBonesAllocator_GetInstance(handle);
    if ( !p_clientAlloc->serverAlloc.initialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_allocator.cpp", 757, ASSERT_TYPE_ASSERT, "(subAlloc->initialized)", (const char *)&queryFormat, "subAlloc->initialized") )
      __debugbreak();
    if ( Instance->locked && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_allocator.cpp", 760, ASSERT_TYPE_ASSERT, "(!instance->locked)", (const char *)&queryFormat, "!instance->locked") )
      __debugbreak();
    XAnimProcBonesInstance_Lock(Instance);
    *((_BYTE *)Instance + 12) = 0;
    Sys_LockWrite(&p_clientAlloc->serverAlloc.cs);
    if ( Instance->procBones )
    {
      v4 = truncate_cast<unsigned short,unsigned int>(m_value & 0x1FFF);
      XAnimProceduralBonesAllocator_FreeInstanceData(&p_clientAlloc->serverAlloc, v4);
    }
    if ( !p_clientAlloc->serverAlloc.numInstances && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_allocator.cpp", 776, ASSERT_TYPE_ASSERT, "(subAlloc->numInstances > 0)", (const char *)&queryFormat, "subAlloc->numInstances > 0") )
      __debugbreak();
    --p_clientAlloc->serverAlloc.numInstances;
    v5 = truncate_cast<unsigned short,unsigned int>(m_value & 0x1FFF);
    v6 = v5;
    if ( v5 >= 0x400u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 290, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "%s < %s\n\t%u, %u", "pos", "impl()->getBitCount()", v5, 1024) )
      __debugbreak();
    p_clientAlloc->serverAlloc.usedHandles.array[v6 >> 5] &= ~(0x80000000 >> (v6 & 0x1F));
    XAnimProcBonesInstance_Unlock(Instance);
    Sys_UnlockWrite(&p_clientAlloc->serverAlloc.cs);
  }
}

/*
==============
XAnimProceduralBonesAllocator_EnoughMemoryForAllocation
==============
*/
bool XAnimProceduralBonesAllocator_EnoughMemoryForAllocation(const XAnimProcBonesSubAllocator *subAlloc, unsigned __int64 size)
{
  unsigned __int64 v4; 
  int Int_Internal_DebugName; 
  unsigned __int64 v6; 
  unsigned __int64 v7; 

  v4 = ntl::nxheap::largest_aligned_free_block(&subAlloc->heap.m_heap, 0x10ui64);
  if ( Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_xanim_proceduralBonesDebugMemoryBudget, "xanim_proceduralBonesDebugMemoryBudget") >= 0 )
  {
    Int_Internal_DebugName = Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_xanim_proceduralBonesDebugMemoryBudget, "xanim_proceduralBonesDebugMemoryBudget");
    v6 = 0i64;
    v7 = Int_Internal_DebugName << 10;
    if ( subAlloc->heap.m_heap.m_used_mem <= v7 )
      v6 = v7 - subAlloc->heap.m_heap.m_used_mem;
    if ( v4 < v6 )
      v6 = v4;
    v4 = v6;
  }
  return size < v4;
}

/*
==============
XAnimProceduralBonesAllocator_FreeClientMemory
==============
*/
void XAnimProceduralBonesAllocator_FreeClientMemory(void)
{
  ntl::nxheap::clear(&s_procBonesGlob.clientAlloc.heap.m_heap);
  *(_DWORD *)&s_procBonesGlob.clientAlloc.numInstances = 0;
  *(_QWORD *)s_procBonesGlob.clientAlloc.usedHandles.array = 0i64;
  *(_QWORD *)&s_procBonesGlob.clientAlloc.usedHandles.array[2] = 0i64;
  *(_QWORD *)&s_procBonesGlob.clientAlloc.usedHandles.array[4] = 0i64;
  *(_QWORD *)&s_procBonesGlob.clientAlloc.usedHandles.array[6] = 0i64;
  *(_QWORD *)&s_procBonesGlob.clientAlloc.usedHandles.array[8] = 0i64;
  *(_QWORD *)&s_procBonesGlob.clientAlloc.usedHandles.array[10] = 0i64;
  *(_QWORD *)&s_procBonesGlob.clientAlloc.usedHandles.array[12] = 0i64;
  *(_QWORD *)&s_procBonesGlob.clientAlloc.usedHandles.array[14] = 0i64;
  *(_QWORD *)&s_procBonesGlob.clientAlloc.usedHandles.array[16] = 0i64;
  *(_QWORD *)&s_procBonesGlob.clientAlloc.usedHandles.array[18] = 0i64;
  *(_QWORD *)&s_procBonesGlob.clientAlloc.usedHandles.array[20] = 0i64;
  *(_QWORD *)&s_procBonesGlob.clientAlloc.usedHandles.array[22] = 0i64;
  *(_QWORD *)&s_procBonesGlob.clientAlloc.usedHandles.array[24] = 0i64;
  *(_QWORD *)&s_procBonesGlob.clientAlloc.usedHandles.array[26] = 0i64;
  *(_QWORD *)&s_procBonesGlob.clientAlloc.usedHandles.array[28] = 0i64;
  *(_QWORD *)&s_procBonesGlob.clientAlloc.usedHandles.array[30] = 0i64;
  s_procBonesGlob.clientAlloc.initialized = 0;
}

/*
==============
XAnimProceduralBonesAllocator_FreeInstanceData
==============
*/
void XAnimProceduralBonesAllocator_FreeInstanceData(XAnimProcBonesSubAllocator *subAlloc, unsigned __int16 index)
{
  int v4; 
  int v5; 

  if ( index >= 0x3E8u )
  {
    v5 = 1000;
    v4 = index;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_allocator.cpp", 553, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( XANIM_PROCEDURALBONES_MAX_INSTANCES )", "index doesn't index XANIM_PROCEDURALBONES_MAX_INSTANCES\n\t%i not in [0, %i)", v4, v5) )
      __debugbreak();
  }
  if ( index >= 0x3E8ui64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 87, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
    __debugbreak();
  Sys_CheckLockWrite(&subAlloc->cs);
  if ( !subAlloc->instances.m_data[index].locked && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_allocator.cpp", 558, ASSERT_TYPE_ASSERT, "(instance->locked)", (const char *)&queryFormat, "instance->locked") )
    __debugbreak();
  if ( !subAlloc->instances.m_data[index].procBones && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_allocator.cpp", 559, ASSERT_TYPE_ASSERT, "(instance->procBones != nullptr)", (const char *)&queryFormat, "instance->procBones != nullptr") )
    __debugbreak();
  ntl::nxheap::free(&subAlloc->heap.m_heap, subAlloc->instances.m_data[index].procBones);
  subAlloc->instances.m_data[index].procBones = NULL;
  if ( !subAlloc->numAllocations && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_allocator.cpp", 565, ASSERT_TYPE_ASSERT, "(subAlloc->numAllocations > 0)", (const char *)&queryFormat, "subAlloc->numAllocations > 0") )
    __debugbreak();
  --subAlloc->numAllocations;
  XAnimProcBonsSubAllocator_LRUList_Unlink(subAlloc, index);
}

/*
==============
XAnimProceduralBonesAllocator_FreeServerMemory
==============
*/
void XAnimProceduralBonesAllocator_FreeServerMemory(void)
{
  ntl::nxheap::clear(&s_procBonesGlob.serverAlloc.heap.m_heap);
  *(_DWORD *)&s_procBonesGlob.serverAlloc.numInstances = 0;
  *(_QWORD *)s_procBonesGlob.serverAlloc.usedHandles.array = 0i64;
  *(_QWORD *)&s_procBonesGlob.serverAlloc.usedHandles.array[2] = 0i64;
  *(_QWORD *)&s_procBonesGlob.serverAlloc.usedHandles.array[4] = 0i64;
  *(_QWORD *)&s_procBonesGlob.serverAlloc.usedHandles.array[6] = 0i64;
  *(_QWORD *)&s_procBonesGlob.serverAlloc.usedHandles.array[8] = 0i64;
  *(_QWORD *)&s_procBonesGlob.serverAlloc.usedHandles.array[10] = 0i64;
  *(_QWORD *)&s_procBonesGlob.serverAlloc.usedHandles.array[12] = 0i64;
  *(_QWORD *)&s_procBonesGlob.serverAlloc.usedHandles.array[14] = 0i64;
  *(_QWORD *)&s_procBonesGlob.serverAlloc.usedHandles.array[16] = 0i64;
  *(_QWORD *)&s_procBonesGlob.serverAlloc.usedHandles.array[18] = 0i64;
  *(_QWORD *)&s_procBonesGlob.serverAlloc.usedHandles.array[20] = 0i64;
  *(_QWORD *)&s_procBonesGlob.serverAlloc.usedHandles.array[22] = 0i64;
  *(_QWORD *)&s_procBonesGlob.serverAlloc.usedHandles.array[24] = 0i64;
  *(_QWORD *)&s_procBonesGlob.serverAlloc.usedHandles.array[26] = 0i64;
  *(_QWORD *)&s_procBonesGlob.serverAlloc.usedHandles.array[28] = 0i64;
  *(_QWORD *)&s_procBonesGlob.serverAlloc.usedHandles.array[30] = 0i64;
  s_procBonesGlob.serverAlloc.initialized = 0;
}

/*
==============
XAnimProceduralBonesAllocator_GetClientAllocationSizeMP
==============
*/
__int64 XAnimProceduralBonesAllocator_GetClientAllocationSizeMP(int maxLocalClients, int maxCharacters)
{
  return 563200i64;
}

/*
==============
XAnimProceduralBonesAllocator_GetClientAllocationSizeSP
==============
*/
__int64 XAnimProceduralBonesAllocator_GetClientAllocationSizeSP(int maxLocalClients)
{
  return 563200i64;
}

/*
==============
XAnimProceduralBonesAllocator_GetDebugInfo
==============
*/
void XAnimProceduralBonesAllocator_GetDebugInfo(XAnimProcBonesAllocatorDebugInfo *outDebugInfo)
{
  __int64 v2; 
  __int64 v3; 
  __int64 v4; 
  __int64 v5; 
  volatile signed __int32 *v6; 
  __int64 v7; 
  __int64 v8; 
  __int64 v9; 
  unsigned __int64 *v10; 
  unsigned __int64 v11; 
  unsigned __int64 v12; 
  __int64 v13; 
  __int64 v14[2]; 
  __int64 v15[7]; 
  __int64 v16; 

  if ( !outDebugInfo && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_allocator.cpp", 282, ASSERT_TYPE_ASSERT, "(outDebugInfo)", (const char *)&queryFormat, "outDebugInfo") )
    __debugbreak();
  memset_0(outDebugInfo, 0, sizeof(XAnimProcBonesAllocatorDebugInfo));
  v14[0] = (__int64)&s_procBonesGlob;
  v15[0] = (__int64)outDebugInfo;
  v14[1] = (__int64)&s_procBonesGlob.clientAlloc;
  v15[1] = (__int64)&outDebugInfo->client;
  v2 = 0i64;
  v3 = 2i64;
  v16 = 2i64;
  do
  {
    v4 = v14[v2];
    v5 = v15[v2];
    if ( *(_BYTE *)(v4 + 209) )
    {
      v6 = (volatile signed __int32 *)(v4 + 144);
      if ( *(_DWORD *)(v4 + 168) == Sys_GetCurrentThreadId() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock.h", 62, ASSERT_TYPE_ASSERT, "( critSect->writeThreadId != Sys_GetCurrentThreadId() )", "This is a non-recursive lock! Don't attempt to take a read lock if the calling thread already has the write lock or this will loop infinitely.") )
        __debugbreak();
      if ( (((_BYTE)v4 - 112) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", (const void *)(v4 + 144)) )
        __debugbreak();
      _InterlockedIncrement(v6);
      while ( *(_DWORD *)(v4 + 148) )
        Sys_Sleep(0);
      v7 = *(_QWORD *)(v4 + 48);
      v8 = *(_QWORD *)(*(_QWORD *)v4 + 16i64);
      v9 = *(_QWORD *)(*(_QWORD *)v4 + 24i64);
      v10 = (unsigned __int64 *)(v8 + 16);
      if ( !v8 )
        v10 = *(unsigned __int64 **)v4;
      v11 = *v10;
      if ( v9 )
        v12 = *(_QWORD *)(v9 + 16);
      else
        v12 = *(_QWORD *)(*(_QWORD *)v4 + 8i64);
      if ( v12 < v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\nxheap\\nxheap.inl", 57, ASSERT_TYPE_ASSERT, "( top >= bot )", (const char *)&queryFormat, "top >= bot") )
        __debugbreak();
      *(_QWORD *)(v5 + 24) = v7 + v12 + *(_QWORD *)(v4 + 56) - v11;
      *(_QWORD *)v5 = *(_QWORD *)(v4 + 48);
      *(_DWORD *)(v5 + 40) = *(unsigned __int16 *)(v4 + 192);
      *(_DWORD *)(v5 + 36) = *(unsigned __int16 *)(v4 + 200);
      *(_DWORD *)(v5 + 44) = *(_DWORD *)(v4 + 204);
      *(_QWORD *)(v5 + 8) = *(_QWORD *)(v4 + 176);
      *(_QWORD *)(v5 + 16) = *(_QWORD *)(v4 + 184);
      *(_DWORD *)(v5 + 32) = *(unsigned __int16 *)(v4 + 196);
      *(_DWORD *)(v5 + 48) = *(unsigned __int16 *)(v4 + 198);
      if ( *(int *)v6 <= 0 )
      {
        LODWORD(v13) = *v6;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock.h", 90, ASSERT_TYPE_ASSERT, "( critSect->readCount ) > ( 0 )", "%s > %s\n\t%i, %i", "critSect->readCount", "0", v13, 0i64) )
          __debugbreak();
      }
      if ( (((_BYTE)v4 - 112) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", (const void *)(v4 + 144)) )
        __debugbreak();
      _InterlockedDecrement(v6);
      v3 = v16;
    }
    ++v2;
    v16 = --v3;
  }
  while ( v3 );
}

/*
==============
XAnimProceduralBonesAllocator_GetInstance
==============
*/
XAnimProcBonesInstance *XAnimProceduralBonesAllocator_GetInstance(DObjProceduralBonesHandle handle)
{
  __int16 m_value; 
  bool v2; 
  unsigned __int64 v3; 
  bool initialized; 
  bitarray<1024> *p_usedHandles; 
  unsigned __int64 v6; 
  ntl::fixed_array<XAnimProcBonesInstance,1000> *p_instances; 
  __int64 v9; 
  __int64 v10; 

  m_value = handle.m_value;
  v2 = (handle.m_value & 0x40000000) != 0;
  if ( !handle.m_value && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_local.h", 441, ASSERT_TYPE_ASSERT, "(IsValid())", (const char *)&queryFormat, "IsValid()") )
    __debugbreak();
  v3 = truncate_cast<unsigned short,unsigned int>(m_value & 0x1FFF);
  if ( (unsigned int)v3 >= 0x3E8 )
  {
    LODWORD(v9) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_allocator.cpp", 389, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( XANIM_PROCEDURALBONES_MAX_INSTANCES )", "index doesn't index XANIM_PROCEDURALBONES_MAX_INSTANCES\n\t%i not in [0, %i)", v9, 1000) )
      __debugbreak();
  }
  initialized = s_procBonesGlob.serverAlloc.initialized;
  if ( v2 )
    initialized = s_procBonesGlob.clientAlloc.initialized;
  if ( !initialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_allocator.cpp", 390, ASSERT_TYPE_ASSERT, "(subAlloc->initialized)", (const char *)&queryFormat, "subAlloc->initialized") )
    __debugbreak();
  p_usedHandles = &s_procBonesGlob.serverAlloc.usedHandles;
  if ( v2 )
    p_usedHandles = &s_procBonesGlob.clientAlloc.usedHandles;
  if ( (unsigned int)v3 >= 0x400 )
  {
    LODWORD(v10) = 1024;
    LODWORD(v9) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\bitarray.h", 257, ASSERT_TYPE_ASSERT, "( pos ) < ( impl()->getBitCount() )", "pos < impl()->getBitCount()\n\t%i, %i", v9, v10) )
      __debugbreak();
  }
  v6 = v3;
  if ( ((0x80000000 >> (v3 & 0x1F)) & p_usedHandles->array[v3 >> 5]) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_allocator.cpp", 391, ASSERT_TYPE_ASSERT, "(subAlloc->usedHandles.testBit( index ))", (const char *)&queryFormat, "subAlloc->usedHandles.testBit( index )") )
    __debugbreak();
  p_instances = &s_procBonesGlob.serverAlloc.instances;
  if ( v2 )
    p_instances = &s_procBonesGlob.clientAlloc.instances;
  if ( v6 >= 0x3E8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 87, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
    __debugbreak();
  return (XAnimProcBonesInstance *)((char *)p_instances + 16 * v6);
}

/*
==============
XAnimProceduralBonesAllocator_GetServerAllocationSizeMP
==============
*/
__int64 XAnimProceduralBonesAllocator_GetServerAllocationSizeMP(int maxClients)
{
  __int64 result; 
  unsigned int v2; 

  result = 102400i64;
  v2 = 1100 * maxClients + 0x2000;
  if ( v2 > 0x19000 )
    return v2;
  return result;
}

/*
==============
XAnimProceduralBonesAllocator_GetServerAllocationSizeSP
==============
*/
__int64 XAnimProceduralBonesAllocator_GetServerAllocationSizeSP(int maxClients)
{
  return 102400i64;
}

/*
==============
XAnimProceduralBonesAllocator_InitClientMemory
==============
*/
void XAnimProceduralBonesAllocator_InitClientMemory(void *buffer, unsigned __int64 size)
{
  XAnimProcBonesSubAllocator_Init(&s_procBonesGlob.clientAlloc, buffer, size);
}

/*
==============
XAnimProceduralBonesAllocator_InitServerMemory
==============
*/
void XAnimProceduralBonesAllocator_InitServerMemory(void *buffer, unsigned __int64 size)
{
  XAnimProcBonesSubAllocator_Init(&s_procBonesGlob.serverAlloc, buffer, size);
}

/*
==============
XAnimProceduralBonesAllocator_Lock
==============
*/
void XAnimProceduralBonesAllocator_Lock(DObjProceduralBonesHandle handle)
{
  XAnimProcBonesInstance *Instance; 
  unsigned __int8 v3; 
  int v4; 

  if ( !handle.m_value && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_allocator.cpp", 576, ASSERT_TYPE_ASSERT, "(handle.IsValid())", (const char *)&queryFormat, "handle.IsValid()") )
    __debugbreak();
  Instance = XAnimProceduralBonesAllocator_GetInstance(handle);
  XAnimProcBonesInstance_Lock(Instance);
  if ( !handle.m_value && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_local.h", 448, ASSERT_TYPE_ASSERT, "(IsValid())", (const char *)&queryFormat, "IsValid()") )
    __debugbreak();
  v3 = *((_BYTE *)Instance + 12);
  if ( ((handle.m_value >> 13) & 0x7F) != v3 >> 1 )
  {
    v4 = v3 >> 1;
    if ( !handle.m_value && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_local.h", 448, ASSERT_TYPE_ASSERT, "(IsValid())", (const char *)&queryFormat, "IsValid()") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_allocator.cpp", 579, ASSERT_TYPE_ASSERT, "( handle.Salt() ) == ( instance->salt )", "%s == %s\n\t%u, %u", "handle.Salt()", "instance->salt", (handle.m_value >> 13) & 0x7F, v4) )
      __debugbreak();
  }
}

/*
==============
XAnimProceduralBonesAllocator_PrintDebugInfoToBuffer
==============
*/
void XAnimProceduralBonesAllocator_PrintDebugInfoToBuffer(char *buffer, int *bufferPos, unsigned __int64 bufferSize)
{
  XAnimProcBonesAllocatorDebugInfo outDebugInfo; 

  XAnimProceduralBonesAllocator_GetDebugInfo(&outDebugInfo);
  Com_sprintfPos_truncate(buffer, bufferSize, bufferPos, "^3CLIENT\n");
  XAnimProceduralBonesAllocator_PrintSubAllocatorDebugInfoToBuffer(&outDebugInfo.client, buffer, bufferPos, bufferSize);
  Com_sprintfPos_truncate(buffer, bufferSize, bufferPos, "\n");
  Com_sprintfPos_truncate(buffer, bufferSize, bufferPos, "^6SERVER\n");
  XAnimProceduralBonesAllocator_PrintSubAllocatorDebugInfoToBuffer(&outDebugInfo.server, buffer, bufferPos, bufferSize);
}

/*
==============
XAnimProceduralBonesAllocator_PrintDebugInfoToConsole
==============
*/
void XAnimProceduralBonesAllocator_PrintDebugInfoToConsole(void)
{
  int destPos[4]; 
  XAnimProcBonesAllocatorDebugInfo outDebugInfo; 
  char dest[4096]; 

  destPos[0] = 0;
  dest[0] = 0;
  Com_sprintfPos_truncate(dest, 0x1000ui64, destPos, "XAnimProceduralBonesAllocator Debug:\n");
  XAnimProceduralBonesAllocator_GetDebugInfo(&outDebugInfo);
  Com_sprintfPos_truncate(dest, 0x1000ui64, destPos, "^3CLIENT\n");
  XAnimProceduralBonesAllocator_PrintSubAllocatorDebugInfoToBuffer(&outDebugInfo.client, dest, destPos, 0x1000ui64);
  Com_sprintfPos_truncate(dest, 0x1000ui64, destPos, "\n");
  Com_sprintfPos_truncate(dest, 0x1000ui64, destPos, "^6SERVER\n");
  XAnimProceduralBonesAllocator_PrintSubAllocatorDebugInfoToBuffer(&outDebugInfo.server, dest, destPos, 0x1000ui64);
  Com_Printf(19, "%s\n", dest);
}

/*
==============
XAnimProceduralBonesAllocator_PrintSubAllocatorDebugInfoToBuffer
==============
*/
void XAnimProceduralBonesAllocator_PrintSubAllocatorDebugInfoToBuffer(const XAnimProcBonesSubAllocatorDebugInfo *debugInfo, char *buffer, int *bufferPos, unsigned __int64 bufferSize)
{
  unsigned __int64 capacityBytes; 
  const char *v9; 
  unsigned __int64 peakRequestedBytes; 
  const char *v11; 
  const char *v12; 
  char *fmt; 
  char *fmta; 
  __int64 v15; 
  __int64 v16; 

  if ( !bufferPos && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_allocator.cpp", 329, ASSERT_TYPE_ASSERT, "(bufferPos)", (const char *)&queryFormat, "bufferPos") )
    __debugbreak();
  capacityBytes = debugInfo->capacityBytes;
  v9 = "^7";
  peakRequestedBytes = debugInfo->peakRequestedBytes;
  if ( peakRequestedBytes < 90 * capacityBytes / 0x64 )
  {
    v11 = "^3";
    if ( peakRequestedBytes <= 70 * capacityBytes / 0x64 )
      v11 = "^7";
  }
  else
  {
    v11 = "^1";
  }
  Com_sprintfPos_truncate(buffer, bufferSize, bufferPos, "^7%zu / %zuKb used (%lu%%), %zuKb peak\n", debugInfo->usedBytes >> 10, capacityBytes >> 10, 100 * debugInfo->usedBytes / (capacityBytes + 1), debugInfo->peakUsedBytes >> 10);
  Com_sprintfPos_truncate(buffer, bufferSize, bufferPos, "%s%zu^7Kb peak requested\n", v11, debugInfo->peakRequestedBytes >> 10);
  if ( !debugInfo->numAllocations || (v12 = "^2", !debugInfo->numReclaimableAllocations) )
    v12 = "^1";
  LODWORD(v16) = debugInfo->peakInstances;
  LODWORD(v15) = 1000;
  LODWORD(fmt) = debugInfo->numInstances;
  Com_sprintfPos_truncate(buffer, bufferSize, bufferPos, "^7%d / %d instances, %d peak, %s%d ^7reclaimable\n", fmt, v15, v16, v12, debugInfo->numReclaimableAllocations);
  if ( debugInfo->numFailedAllocations )
    v9 = "^1";
  LODWORD(fmta) = debugInfo->numAllocations;
  Com_sprintfPos_truncate(buffer, bufferSize, bufferPos, "^7%d allocations, %s%d ^7failed\n", fmta, v9);
}

/*
==============
XAnimProceduralBonesAllocator_ReclaimMemory
==============
*/
bool XAnimProceduralBonesAllocator_ReclaimMemory(XAnimProcBonesSubAllocator *subAlloc, unsigned __int64 requiredBytes)
{
  ntl::fixed_array<XAnimProcBonesInstance,1000> *p_instances; 
  unsigned __int16 v5; 
  unsigned __int64 v6; 
  int Int_Internal_DebugName; 
  unsigned __int64 v8; 
  unsigned __int64 v9; 
  unsigned __int16 v10; 
  XAnimProcBonesInstance *v11; 

  Sys_CheckLockWrite(&subAlloc->cs);
  p_instances = &subAlloc->instances;
  v5 = subAlloc->instances.m_data[0].nextLow | ((*((_BYTE *)subAlloc->instances.m_data + 15) & 0xF) << 8);
  if ( v5 )
  {
    do
    {
      v6 = ntl::nxheap::largest_aligned_free_block(&subAlloc->heap.m_heap, 0x10ui64);
      if ( Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_xanim_proceduralBonesDebugMemoryBudget, "xanim_proceduralBonesDebugMemoryBudget") >= 0 )
      {
        Int_Internal_DebugName = Dvar_GetInt_Internal_DebugName(DCONST_DVARINT_xanim_proceduralBonesDebugMemoryBudget, "xanim_proceduralBonesDebugMemoryBudget");
        v8 = 0i64;
        v9 = Int_Internal_DebugName << 10;
        if ( subAlloc->heap.m_heap.m_used_mem <= v9 )
          v8 = v9 - subAlloc->heap.m_heap.m_used_mem;
        if ( v6 < v8 )
          v8 = v6;
        v6 = v8;
      }
      if ( requiredBytes < v6 )
        break;
      if ( v5 >= 0x3E8ui64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 87, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
        __debugbreak();
      v10 = p_instances->m_data[v5].nextLow | ((*((_BYTE *)&p_instances->m_data[v5] + 15) & 0xF) << 8);
      if ( v5 >= 0x3E8ui64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\array\\fixed_array.h", 87, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
        __debugbreak();
      v11 = &p_instances->m_data[v5];
      if ( XAnimProcBonesInstance_TryLock(v11) )
      {
        if ( !v11->procBones && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_allocator.cpp", 602, ASSERT_TYPE_ASSERT, "(instance->procBones != nullptr)", (const char *)&queryFormat, "instance->procBones != nullptr") )
          __debugbreak();
        if ( (*((_BYTE *)v11 + 12) & 1) == 0 && v11->procBones )
          XAnimProceduralBonesAllocator_FreeInstanceData(subAlloc, v5);
        XAnimProcBonesInstance_Unlock(v11);
      }
      v5 = v10;
    }
    while ( v10 );
  }
  return XAnimProceduralBonesAllocator_EnoughMemoryForAllocation(subAlloc, requiredBytes);
}

/*
==============
XAnimProceduralBonesAllocator_TryGetProceduralBones
==============
*/
bool XAnimProceduralBonesAllocator_TryGetProceduralBones(DObjProceduralBonesHandle handle, DObjProceduralBones **outProcBones)
{
  XAnimProcBonesInstance *Instance; 
  char v6; 

  if ( !outProcBones && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_allocator.cpp", 790, ASSERT_TYPE_ASSERT, "(outProcBones)", (const char *)&queryFormat, "outProcBones") )
    __debugbreak();
  Instance = XAnimProceduralBonesAllocator_GetInstance(handle);
  if ( !Instance->locked && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_allocator.cpp", 794, ASSERT_TYPE_ASSERT, "(instance->locked)", (const char *)&queryFormat, "instance->locked") )
    __debugbreak();
  if ( !handle.m_value && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\xanim_local.h", 448, ASSERT_TYPE_ASSERT, "(IsValid())", (const char *)&queryFormat, "IsValid()") )
    __debugbreak();
  if ( ((handle.m_value >> 13) & 0x7F) != *((_BYTE *)Instance + 12) >> 1 )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_allocator.cpp", 798, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "XAnimProceduralBonesAllocator_TryGetProceduralBones: handle used after being destroyed") )
      __debugbreak();
    *outProcBones = NULL;
    return 0;
  }
  *outProcBones = Instance->procBones;
  v6 = *((_BYTE *)Instance + 12);
  if ( Instance->procBones )
  {
    *((_BYTE *)Instance + 12) = v6 | 1;
    return 0;
  }
  return (v6 & 1) == 0;
}

/*
==============
XAnimProceduralBonesAllocator_TryLock
==============
*/
DObjProceduralBones *XAnimProceduralBonesAllocator_TryLock(DObjProceduralBonesHandle handle)
{
  DObjProceduralBones *result; 
  XAnimProcBonesInstance *Instance; 

  if ( !handle.m_value )
    return 0i64;
  Instance = XAnimProceduralBonesAllocator_GetInstance(handle);
  XAnimProcBonesInstance_Lock(Instance);
  if ( ((handle.m_value >> 13) & 0x7F) == *((_BYTE *)Instance + 12) >> 1 )
  {
    result = Instance->procBones;
    if ( Instance->procBones )
      return result;
  }
  else if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_allocator.cpp", 831, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "XAnimProceduralBonesAllocator_TryLock: handle used after being destroyed") )
  {
    __debugbreak();
  }
  XAnimProcBonesInstance_Unlock(Instance);
  return 0i64;
}

/*
==============
XAnimProceduralBonesAllocator_Unlock
==============
*/
void XAnimProceduralBonesAllocator_Unlock(DObjProceduralBonesHandle handle)
{
  XAnimProcBonesInstance *Instance; 

  if ( !handle.m_value && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xanim\\proceduralbones\\proceduralbones_allocator.cpp", 586, ASSERT_TYPE_ASSERT, "(handle.IsValid())", (const char *)&queryFormat, "handle.IsValid()") )
    __debugbreak();
  Instance = XAnimProceduralBonesAllocator_GetInstance(handle);
  XAnimProcBonesInstance_Unlock(Instance);
}


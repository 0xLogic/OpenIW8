/*
==============
IWMem_Allocator_GetUsedSize
==============
*/

unsigned __int64 __fastcall IWMem_Allocator_GetUsedSize(IWMemID allocatorID)
{
  return ?IWMem_Allocator_GetUsedSize@@YA_KVIWMemID@@@Z(allocatorID);
}

/*
==============
IWMem_Allocator_PushLeakDetect
==============
*/

void __fastcall IWMem_Allocator_PushLeakDetect(IWMemID allocatorID)
{
  ?IWMem_Allocator_PushLeakDetect@@YAXVIWMemID@@@Z(allocatorID);
}

/*
==============
IWMem_InternalError
==============
*/

void IWMem_InternalError(void)
{
  ?IWMem_InternalError@@YAXXZ();
}

/*
==============
IWMem_PollingUpdate
==============
*/

void IWMem_PollingUpdate(void)
{
  ?IWMem_PollingUpdate@@YAXXZ();
}

/*
==============
IWMem_Allocator_CreateFixed
==============
*/

void __fastcall IWMem_Allocator_CreateFixed(IWMemID *r_allocatorID, const char *name, IWMemAllocatorType type, const void *ptr, unsigned __int64 size)
{
  ?IWMem_Allocator_CreateFixed@@YAXAEAVIWMemID@@PEBDW4IWMemAllocatorType@@PEBX_K@Z(r_allocatorID, name, type, ptr, size);
}

/*
==============
IWMem_Free
==============
*/

void __fastcall IWMem_Free(IWMemID allocatorID, const void *ptr, unsigned __int64 size)
{
  ?IWMem_Free@@YAXVIWMemID@@PEBX_K@Z(allocatorID, ptr, size);
}

/*
==============
IWMem_Allocator_SetFlag
==============
*/

void __fastcall IWMem_Allocator_SetFlag(IWMemID allocatorID, IWMemAllocatorFlag flag)
{
  ?IWMem_Allocator_SetFlag@@YAXVIWMemID@@W4IWMemAllocatorFlag@@@Z(allocatorID, flag);
}

/*
==============
IWMem_InitCommandLine
==============
*/

void __fastcall IWMem_InitCommandLine(const char *cmdLine)
{
  ?IWMem_InitCommandLine@@YAXPEBD@Z(cmdLine);
}

/*
==============
IWMem_ShouldTraceCallstacks
==============
*/

bool __fastcall IWMem_ShouldTraceCallstacks()
{
  return ?IWMem_ShouldTraceCallstacks@@YA_NXZ();
}

/*
==============
IWMem_Allocator_SetFreeMem
==============
*/

void __fastcall IWMem_Allocator_SetFreeMem(IWMemID allocatorID, const unsigned __int64 freeMem)
{
  ?IWMem_Allocator_SetFreeMem@@YAXVIWMemID@@_K@Z(allocatorID, freeMem);
}

/*
==============
IWMem_Printf
==============
*/

void IWMem_Printf(const char *fmt, ...)
{
  ?IWMem_Printf@@YAXPEBDZZ(fmt);
}

/*
==============
IWMem_UsingMATorPIX
==============
*/

bool __fastcall IWMem_UsingMATorPIX()
{
  return ?IWMem_UsingMATorPIX@@YA_NXZ();
}

/*
==============
IWMem_Profile_Pop
==============
*/

void IWMem_Profile_Pop(void)
{
  ?IWMem_Profile_Pop@@YAXXZ();
}

/*
==============
IWMem_Allocator_SetPoolItemSize
==============
*/

void __fastcall IWMem_Allocator_SetPoolItemSize(IWMemID allocatorID, const unsigned __int64 itemSize)
{
  ?IWMem_Allocator_SetPoolItemSize@@YAXVIWMemID@@_K@Z(allocatorID, itemSize);
}

/*
==============
IWMem_HasHadInternalError
==============
*/

bool __fastcall IWMem_HasHadInternalError()
{
  return ?IWMem_HasHadInternalError@@YA_NXZ();
}

/*
==============
IWMem_DumpMem_f
==============
*/

void __fastcall IWMem_DumpMem_f()
{
  ?IWMem_DumpMem_f@@YAXXZ();
}

/*
==============
IWMem_Clear
==============
*/

void __fastcall IWMem_Clear(IWMemID allocatorID)
{
  ?IWMem_Clear@@YAXVIWMemID@@@Z(allocatorID);
}

/*
==============
IWMem_Allocator_CreateDynamic
==============
*/

void __fastcall IWMem_Allocator_CreateDynamic(IWMemID allocatorID, const char *name, IWMemAllocatorType type, const void *ptr, unsigned __int64 size)
{
  ?IWMem_Allocator_CreateDynamic@@YAXVIWMemID@@PEBDW4IWMemAllocatorType@@PEBX_K@Z(allocatorID, name, type, ptr, size);
}

/*
==============
IWMem_Allocator_Destroy
==============
*/

void __fastcall IWMem_Allocator_Destroy(IWMemID allocatorID)
{
  ?IWMem_Allocator_Destroy@@YAXVIWMemID@@@Z(allocatorID);
}

/*
==============
IWMem_FreeRange
==============
*/

void __fastcall IWMem_FreeRange(IWMemID allocatorID, const void *ptr, unsigned __int64 size)
{
  ?IWMem_FreeRange@@YAXVIWMemID@@PEBX_K@Z(allocatorID, ptr, size);
}

/*
==============
IWMem_UseMaxTracking
==============
*/

bool __fastcall IWMem_UseMaxTracking()
{
  return ?IWMem_UseMaxTracking@@YA_NXZ();
}

/*
==============
IWMem_Alloc
==============
*/

void __fastcall IWMem_Alloc(IWMemID allocatorID, const void *ptr, unsigned __int64 size)
{
  ?IWMem_Alloc@@YAXVIWMemID@@PEBX_K@Z(allocatorID, ptr, size);
}

/*
==============
IWMem_Profile_Push
==============
*/

void __fastcall IWMem_Profile_Push(const char *name)
{
  ?IWMem_Profile_Push@@YAXPEBD@Z(name);
}

/*
==============
IWMem_Init
==============
*/

void IWMem_Init(void)
{
  ?IWMem_Init@@YAXXZ();
}

/*
==============
IWMem_DumpLock
==============
*/

void IWMem_DumpLock(void)
{
  ?IWMem_DumpLock@@YAXXZ();
}

/*
==============
IWMem_Disable
==============
*/

void IWMem_Disable(void)
{
  ?IWMem_Disable@@YAXXZ();
}

/*
==============
IWMem_DumpAllocatorProfile
==============
*/

void __fastcall IWMem_DumpAllocatorProfile(IWMemID allocatorID)
{
  ?IWMem_DumpAllocatorProfile@@YAXVIWMemID@@@Z(allocatorID);
}

/*
==============
IWMem_DumpUnlock
==============
*/

void IWMem_DumpUnlock(void)
{
  ?IWMem_DumpUnlock@@YAXXZ();
}

/*
==============
IWMem_Allocator_PopLeakDetect
==============
*/

void __fastcall IWMem_Allocator_PopLeakDetect(IWMemID allocatorID)
{
  ?IWMem_Allocator_PopLeakDetect@@YAXVIWMemID@@@Z(allocatorID);
}

/*
==============
IWMem_Alloc
==============
*/
void IWMem_Alloc(IWMemID allocatorID, const void *ptr, unsigned __int64 size)
{
  IWMemAllocator *AllocatorByID; 

  if ( !s_iwMem.hadError )
  {
    AcquireSRWLockShared(&s_iwMem.dumpLock.m_lock);
    AllocatorByID = IWMem_AllocatorManager_GetAllocatorByID(allocatorID);
    if ( IWMemAllocator::TestFlag(AllocatorByID, RequiresLock) )
      IWMemAllocator::LockThreadAccess(AllocatorByID);
    IWMemAllocator::LogAllocation(AllocatorByID, (const unsigned __int64)ptr, size);
    if ( IWMemAllocator::TestFlag(AllocatorByID, RequiresLock) )
      IWMemAllocator::UnlockThreadAccess(AllocatorByID);
    ReleaseSRWLockShared(&s_iwMem.dumpLock.m_lock);
  }
}

/*
==============
IWMem_Allocator_CreateDynamic
==============
*/
void IWMem_Allocator_CreateDynamic(IWMemID allocatorID, const char *name, IWMemAllocatorType type, const void *ptr, unsigned __int64 size)
{
  unsigned int v8; 

  if ( !s_iwMem.hadError )
  {
    v8 = IWMem_DynamicID_Add(*(_QWORD *)&allocatorID & 0xFFFFFFFFFFFFi64);
    IWMem_Allocator_CreateInternal(v8, name, type, ptr, size);
  }
}

/*
==============
IWMem_Allocator_CreateFixed
==============
*/
void IWMem_Allocator_CreateFixed(IWMemID *r_allocatorID, const char *name, IWMemAllocatorType type, const void *ptr, unsigned __int64 size)
{
  unsigned int v9; 
  __int16 v10; 

  if ( !s_iwMem.hadError )
  {
    v9 = IWMem_FixedID_Add();
    v10 = v9;
    IWMem_Allocator_CreateInternal(v9, name, type, ptr, size);
    *((_WORD *)r_allocatorID + 3) = v10;
    *(_QWORD *)r_allocatorID &= 0xFFFF000000000000ui64;
  }
}

/*
==============
IWMem_Allocator_CreateInternal
==============
*/
void IWMem_Allocator_CreateInternal(const unsigned int allocatorIndex, const char *const name, const IWMemAllocatorType type, const void *const ptr, const unsigned __int64 size)
{
  unsigned int v9; 
  int v10; 

  AcquireSRWLockShared(&s_iwMem.dumpLock.m_lock);
  if ( allocatorIndex >= 0x180 )
  {
    v10 = 384;
    v9 = allocatorIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\iwmem\\iwmem.cpp", 382, ASSERT_TYPE_ASSERT, "(unsigned)( allocatorIndex ) < (unsigned)( IWMEM_MAX_ALLOCATORS )", "allocatorIndex doesn't index IWMEM_MAX_ALLOCATORS\n\t%i not in [0, %i)", v9, v10) )
      __debugbreak();
  }
  IWMem_AllocatorManager_CreateAllocator(allocatorIndex, name, type, ptr, size);
  ReleaseSRWLockShared(&s_iwMem.dumpLock.m_lock);
}

/*
==============
IWMem_Allocator_Destroy
==============
*/
void IWMem_Allocator_Destroy(IWMemID allocatorID)
{
  IWMemAllocator *AllocatorByID; 

  if ( !s_iwMem.hadError )
  {
    AcquireSRWLockShared(&s_iwMem.dumpLock.m_lock);
    AllocatorByID = IWMem_AllocatorManager_GetAllocatorByID(allocatorID);
    if ( IWMemAllocator::TestFlag(AllocatorByID, RequiresLock) )
      IWMemAllocator::LockThreadAccess(AllocatorByID);
    IWMem_AllocatorManager_DestroyAllocator(AllocatorByID);
    if ( IWMemAllocator::TestFlag(AllocatorByID, RequiresLock) )
      IWMemAllocator::UnlockThreadAccess(AllocatorByID);
    ReleaseSRWLockShared(&s_iwMem.dumpLock.m_lock);
    if ( *(unsigned __int64 *)&allocatorID >= 0x1000000000000i64 )
      IWMem_FixedID_Remove(HIWORD(*(unsigned __int64 *)&allocatorID));
    else
      IWMem_DynamicID_Remove(*(_QWORD *)&allocatorID & 0xFFFFFFFFFFFFi64);
  }
}

/*
==============
IWMem_Allocator_GetUsedSize
==============
*/
unsigned __int64 IWMem_Allocator_GetUsedSize(IWMemID allocatorID)
{
  IWMemAllocator *AllocatorByID; 
  unsigned __int64 TotalSize; 
  unsigned __int64 v4; 

  AcquireSRWLockShared(&s_iwMem.dumpLock.m_lock);
  AllocatorByID = IWMem_AllocatorManager_GetAllocatorByID(allocatorID);
  if ( IWMemAllocator::TestFlag(AllocatorByID, RequiresLock) )
    IWMemAllocator::LockThreadAccess(AllocatorByID);
  if ( AllocatorByID->m_type == NormalSpace )
    TotalSize = IWMemAllocator::GetTotalSize(AllocatorByID);
  else
    TotalSize = IWMemAllocator::GetUsedSize(AllocatorByID);
  v4 = TotalSize;
  if ( IWMemAllocator::TestFlag(AllocatorByID, RequiresLock) )
    IWMemAllocator::UnlockThreadAccess(AllocatorByID);
  ReleaseSRWLockShared(&s_iwMem.dumpLock.m_lock);
  return v4;
}

/*
==============
IWMem_Allocator_PopLeakDetect
==============
*/
void IWMem_Allocator_PopLeakDetect(IWMemID allocatorID)
{
  IWMemAllocator *AllocatorByID; 

  if ( !s_iwMem.hadError )
  {
    if ( s_iwMem.traceCallstacks )
      Callstack_CachedLookup_Push();
    AcquireSRWLockShared(&s_iwMem.dumpLock.m_lock);
    AllocatorByID = IWMem_AllocatorManager_GetAllocatorByID(allocatorID);
    if ( IWMemAllocator::TestFlag(AllocatorByID, RequiresLock) )
      IWMemAllocator::LockThreadAccess(AllocatorByID);
    IWMemAllocator::PopLeakDetect(AllocatorByID);
    if ( IWMemAllocator::TestFlag(AllocatorByID, RequiresLock) )
      IWMemAllocator::UnlockThreadAccess(AllocatorByID);
    ReleaseSRWLockShared(&s_iwMem.dumpLock.m_lock);
    if ( s_iwMem.traceCallstacks )
      Callstack_CachedLookup_Pop();
  }
}

/*
==============
IWMem_Allocator_PushLeakDetect
==============
*/
void IWMem_Allocator_PushLeakDetect(IWMemID allocatorID)
{
  IWMemAllocator *AllocatorByID; 

  if ( !s_iwMem.hadError )
  {
    AcquireSRWLockShared(&s_iwMem.dumpLock.m_lock);
    AllocatorByID = IWMem_AllocatorManager_GetAllocatorByID(allocatorID);
    if ( IWMemAllocator::TestFlag(AllocatorByID, RequiresLock) )
      IWMemAllocator::LockThreadAccess(AllocatorByID);
    IWMemAllocator::PushLeakDetect(AllocatorByID);
    if ( IWMemAllocator::TestFlag(AllocatorByID, RequiresLock) )
      IWMemAllocator::UnlockThreadAccess(AllocatorByID);
    ReleaseSRWLockShared(&s_iwMem.dumpLock.m_lock);
  }
}

/*
==============
IWMem_Allocator_SetFlag
==============
*/
void IWMem_Allocator_SetFlag(IWMemID allocatorID, IWMemAllocatorFlag flag)
{
  IWMemAllocator *AllocatorByID; 

  if ( !s_iwMem.hadError )
  {
    AcquireSRWLockShared(&s_iwMem.dumpLock.m_lock);
    AllocatorByID = IWMem_AllocatorManager_GetAllocatorByID(allocatorID);
    if ( IWMemAllocator::TestFlag(AllocatorByID, RequiresLock) )
      IWMemAllocator::LockThreadAccess(AllocatorByID);
    IWMemAllocator::SetFlag(AllocatorByID, flag);
    if ( IWMemAllocator::TestFlag(AllocatorByID, RequiresLock) )
      IWMemAllocator::UnlockThreadAccess(AllocatorByID);
    ReleaseSRWLockShared(&s_iwMem.dumpLock.m_lock);
  }
}

/*
==============
IWMem_Allocator_SetFreeMem
==============
*/
void IWMem_Allocator_SetFreeMem(IWMemID allocatorID, const unsigned __int64 freeMem)
{
  IWMemAllocator *AllocatorByID; 

  if ( !s_iwMem.hadError )
  {
    AcquireSRWLockShared(&s_iwMem.dumpLock.m_lock);
    AllocatorByID = IWMem_AllocatorManager_GetAllocatorByID(allocatorID);
    if ( IWMemAllocator::TestFlag(AllocatorByID, RequiresLock) )
      IWMemAllocator::LockThreadAccess(AllocatorByID);
    IWMemAllocator::SetFreeMem(AllocatorByID, freeMem);
    if ( IWMemAllocator::TestFlag(AllocatorByID, RequiresLock) )
      IWMemAllocator::UnlockThreadAccess(AllocatorByID);
    ReleaseSRWLockShared(&s_iwMem.dumpLock.m_lock);
  }
}

/*
==============
IWMem_Allocator_SetPoolItemSize
==============
*/
void IWMem_Allocator_SetPoolItemSize(IWMemID allocatorID, const unsigned __int64 itemSize)
{
  IWMemAllocator *AllocatorByID; 

  if ( !s_iwMem.hadError )
  {
    AcquireSRWLockShared(&s_iwMem.dumpLock.m_lock);
    AllocatorByID = IWMem_AllocatorManager_GetAllocatorByID(allocatorID);
    if ( IWMemAllocator::TestFlag(AllocatorByID, RequiresLock) )
      IWMemAllocator::LockThreadAccess(AllocatorByID);
    IWMemAllocator::SetPoolItemSize(AllocatorByID, itemSize);
    if ( IWMemAllocator::TestFlag(AllocatorByID, RequiresLock) )
      IWMemAllocator::UnlockThreadAccess(AllocatorByID);
    ReleaseSRWLockShared(&s_iwMem.dumpLock.m_lock);
  }
}

/*
==============
IWMem_Clear
==============
*/
void IWMem_Clear(IWMemID allocatorID)
{
  IWMemAllocator *AllocatorByID; 

  if ( !s_iwMem.hadError )
  {
    AcquireSRWLockShared(&s_iwMem.dumpLock.m_lock);
    AllocatorByID = IWMem_AllocatorManager_GetAllocatorByID(allocatorID);
    if ( IWMemAllocator::TestFlag(AllocatorByID, RequiresLock) )
      IWMemAllocator::LockThreadAccess(AllocatorByID);
    IWMemAllocator::LogClear(AllocatorByID);
    if ( IWMemAllocator::TestFlag(AllocatorByID, RequiresLock) )
      IWMemAllocator::UnlockThreadAccess(AllocatorByID);
    ReleaseSRWLockShared(&s_iwMem.dumpLock.m_lock);
  }
}

/*
==============
IWMem_Disable
==============
*/
void IWMem_Disable(void)
{
  s_iwMem.hadError = 1;
}

/*
==============
IWMem_DumpAllocatorProfile
==============
*/
void IWMem_DumpAllocatorProfile(IWMemID allocatorID)
{
  IWMemAllocator *AllocatorByID; 

  AllocatorByID = IWMem_AllocatorManager_GetAllocatorByID(allocatorID);
  if ( AllocatorByID->m_type <= (unsigned int)PhaseSpace )
    XB3XMemAlloc_UpdateIWMemAllocations();
  AcquireSRWLockExclusive(&s_iwMem.dumpLock.m_lock);
  IWMem_Dump_ProfileTree_Allocator(AllocatorByID);
  ReleaseSRWLockExclusive(&s_iwMem.dumpLock.m_lock);
}

/*
==============
IWMem_DumpLock
==============
*/
void IWMem_DumpLock(void)
{
  AcquireSRWLockExclusive(&s_iwMem.dumpLock.m_lock);
}

/*
==============
IWMem_DumpMem_f
==============
*/
void IWMem_DumpMem_f(void)
{
  const char *v0; 
  const char *v1; 
  const char *v2; 
  const char *v3; 
  struct tm *v4; 
  const char *v5; 
  int fmt; 
  int v7; 
  int tm_hour; 
  int tm_min; 
  int tm_sec; 
  __time64_t Time[2]; 
  fileHandle_t dest[34]; 

  XB3XMemAlloc_UpdateIWMemAllocations();
  if ( s_iwMem.traceCallstacks )
    Callstack_CachedLookup_Push();
  if ( Cmd_Argc() < 2 )
  {
    Com_Printf(0, "iwmem: Invalid argument. Use any of: 'summary', 'profile', 'detail', 'hierarchy'.\n");
    Com_Printf(0, "iwmem: Optional: tofile <filename> at the end of the arguments. Omitting filename will use current datetime.\n");
  }
  else
  {
    v0 = Cmd_Argv(1);
    if ( Cmd_Argc() >= 3 )
    {
      v1 = Cmd_Argv(2);
      if ( !I_stricmp(v1, "tofile") )
      {
        if ( Cmd_Argc() < 4 )
        {
          Time[0] = Sys_GetTimeAsSeconds();
          v4 = _localtime64(Time);
          tm_sec = v4->tm_sec;
          tm_min = v4->tm_min;
          tm_hour = v4->tm_hour;
          v7 = v4->tm_year - 100;
          fmt = v4->tm_mday;
          Com_sprintf((char *)dest, 0x104ui64, "mem_%02d_%02d_%02d_%02d%02d%02d.txt", (unsigned int)(v4->tm_mon + 1), fmt, v7, tm_hour, tm_min, tm_sec);
        }
        else
        {
          v2 = Cmd_Argv(3);
          Core_strcpy((char *)dest, 0x104ui64, v2);
        }
        if ( s_iwMem.fileHandle.handle.handle != -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\iwmem\\iwmem.cpp", 895, ASSERT_TYPE_ASSERT, "(!s_iwMem.fileHandle)", (const char *)&queryFormat, "!s_iwMem.fileHandle") )
          __debugbreak();
        s_iwMem.fileHandle.handle.handle = (__int64)FS_FOpenTextFileWrite(dest, v3);
        s_iwMem.fileBufferPos = 0;
        v5 = "iwmem: Unable to open file to write: %s ...\n";
        if ( s_iwMem.fileHandle.handle.handle != -1 )
          v5 = "iwmem: Writing log to: %s ...\n";
        Com_Printf(16, v5, dest);
      }
    }
    AcquireSRWLockExclusive(&s_iwMem.dumpLock.m_lock);
    if ( I_stricmp(v0, "summary") )
    {
      if ( I_stricmp(v0, "profile") )
      {
        if ( I_stricmp(v0, "detail") )
        {
          if ( I_stricmp(v0, "hierarchy") )
          {
            Com_Printf(0, "iwmem: Invalid argument. Use any of: 'summary', 'profile', 'detail', 'hierarchy'.\n");
            Com_Printf(0, "iwmem: Optional: tofile <filename> at the end of the arguments. Omitting filename will use current datetime.\n");
          }
          else
          {
            IWMem_Dump_Hierarchy_All();
          }
        }
        else
        {
          IWMem_Dump_Detail_All();
        }
      }
      else
      {
        IWMem_Dump_ProfileTree_All();
      }
    }
    else
    {
      IWMem_Dump_Summary_All();
    }
    ReleaseSRWLockExclusive(&s_iwMem.dumpLock.m_lock);
    if ( s_iwMem.fileHandle.handle.handle != -1 )
    {
      FS_Write(s_iwMem.fileBuffer, s_iwMem.fileBufferPos, s_iwMem.fileHandle);
      s_iwMem.fileBufferPos = 0;
      FS_FCloseFile(s_iwMem.fileHandle);
      s_iwMem.fileHandle.handle.handle = -1i64;
    }
  }
  if ( s_iwMem.traceCallstacks )
    Callstack_CachedLookup_Pop();
}

/*
==============
IWMem_DumpUnlock
==============
*/
void IWMem_DumpUnlock(void)
{
  ReleaseSRWLockExclusive(&s_iwMem.dumpLock.m_lock);
}

/*
==============
IWMem_Free
==============
*/
void IWMem_Free(IWMemID allocatorID, const void *ptr, unsigned __int64 size)
{
  IWMemAllocator *AllocatorByID; 

  if ( !s_iwMem.hadError )
  {
    AcquireSRWLockShared(&s_iwMem.dumpLock.m_lock);
    AllocatorByID = IWMem_AllocatorManager_GetAllocatorByID(allocatorID);
    if ( IWMemAllocator::TestFlag(AllocatorByID, RequiresLock) )
      IWMemAllocator::LockThreadAccess(AllocatorByID);
    IWMemAllocator::LogFree(AllocatorByID, (const unsigned __int64)ptr, size);
    if ( IWMemAllocator::TestFlag(AllocatorByID, RequiresLock) )
      IWMemAllocator::UnlockThreadAccess(AllocatorByID);
    ReleaseSRWLockShared(&s_iwMem.dumpLock.m_lock);
  }
}

/*
==============
IWMem_FreeRange
==============
*/
void IWMem_FreeRange(IWMemID allocatorID, const void *ptr, unsigned __int64 size)
{
  IWMemAllocator *AllocatorByID; 

  if ( !s_iwMem.hadError )
  {
    AcquireSRWLockShared(&s_iwMem.dumpLock.m_lock);
    if ( size )
    {
      AllocatorByID = IWMem_AllocatorManager_GetAllocatorByID(allocatorID);
      if ( IWMemAllocator::TestFlag(AllocatorByID, RequiresLock) )
        IWMemAllocator::LockThreadAccess(AllocatorByID);
      IWMemAllocator::LogFreeRange(AllocatorByID, (const unsigned __int64)ptr, size);
      if ( IWMemAllocator::TestFlag(AllocatorByID, RequiresLock) )
        IWMemAllocator::UnlockThreadAccess(AllocatorByID);
    }
    ReleaseSRWLockShared(&s_iwMem.dumpLock.m_lock);
  }
}

/*
==============
IWMem_HasHadInternalError
==============
*/
_BOOL8 IWMem_HasHadInternalError()
{
  return s_iwMem.hadError;
}

/*
==============
IWMem_Init
==============
*/
void IWMem_Init(void)
{
  s_iwMem.usingPix = 1;
  IWMem_FixedID_Init();
  IWMem_DynamicID_Init();
  IWMem_ProfileTree_Init();
  IWMem_Allocator_Init();
  IWMem_AllocatorManager_Init();
  IWMem_AllocatorTablePool_Init();
  InitializeSRWLock(&s_iwMem.dumpLock.m_lock);
  s_iwMem.fileHandle.handle.handle = -1i64;
  s_iwMem.isInited = 1;
}

/*
==============
IWMem_InitCommandLine
==============
*/
void IWMem_InitCommandLine(const char *cmdLine)
{
  const char *v2; 
  bool hadError; 
  const char *v4; 
  bool v5; 
  unsigned int v6; 

  if ( !s_iwMem.isInited && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\iwmem\\iwmem.cpp", 157, ASSERT_TYPE_ASSERT, "(s_iwMem.isInited)", (const char *)&queryFormat, "s_iwMem.isInited") )
    __debugbreak();
  v2 = I_stristr(cmdLine, "+iwmemDisable");
  hadError = s_iwMem.hadError;
  if ( v2 )
    hadError = 1;
  s_iwMem.hadError = hadError;
  v4 = I_stristr(cmdLine, "+iwmemCallstacks");
  v5 = v4 != NULL;
  if ( !s_iwMem.traceCallstacks && v4 )
    IWMem_CallstackHash_Init();
  s_iwMem.traceCallstacks = v5;
  IWMem_CallstackHash_TrackAllocs();
  s_iwMem.usingPix = I_stristr(cmdLine, "+iwmemUsePix") != NULL;
  s_iwMem.maxTracking = I_stristr(cmdLine, "+iwmemMaxTracking") != NULL;
  IWMem_AllocatorManager_ReparentIWMemPools();
  v6 = 6912;
  if ( Sys_GetXB3ConsoleType() == XB3_CONSOLE_SCORPIO )
  {
    IWMem_AllocatorTablePool_ExtendPoolSize(0x5B00u);
  }
  else
  {
    if ( Mem_Paged_GetDevMemorySize() > 0x1000000 )
      v6 = 11008;
    IWMem_AllocatorTablePool_ExtendPoolSize(v6);
  }
}

/*
==============
IWMem_InternalError
==============
*/
void IWMem_InternalError(void)
{
  s_iwMem.hadError = 1;
}

/*
==============
IWMem_PollingUpdate
==============
*/

void IWMem_PollingUpdate(void)
{
  XB3XMemAlloc_UpdateIWMemAllocations();
}

/*
==============
IWMem_Printf
==============
*/
void IWMem_Printf(const char *fmt, ...)
{
  int v1; 
  size_t v2; 
  unsigned int fileBufferPos; 
  char dest[1024]; 
  va_list va; 

  va_start(va, fmt);
  v1 = Com_vsprintf(dest, 0x400ui64, fmt, va);
  v2 = v1;
  if ( s_iwMem.fileHandle.handle.handle == -1 )
  {
    Com_Printf(16, (const char *)&queryFormat, dest);
  }
  else if ( v1 > 0 )
  {
    fileBufferPos = s_iwMem.fileBufferPos;
    if ( (int)v2 <= (signed int)(0x10000 - s_iwMem.fileBufferPos) || (FS_Write(s_iwMem.fileBuffer, s_iwMem.fileBufferPos, s_iwMem.fileHandle), fileBufferPos = 0, s_iwMem.fileBufferPos = 0, (int)v2 <= 0x10000) )
    {
      memcpy_0(&s_iwMem.fileBuffer[fileBufferPos], dest, v2);
      s_iwMem.fileBufferPos += v2;
    }
    else
    {
      Sys_Error((const ObfuscateErrorText)&stru_143DC0C08);
    }
  }
}

/*
==============
IWMem_Profile_Pop
==============
*/
void IWMem_Profile_Pop(void)
{
  if ( !s_iwMem.hadError )
    IWMem_ProfileTree_Pop();
}

/*
==============
IWMem_Profile_Push
==============
*/
void IWMem_Profile_Push(const char *name)
{
  if ( !s_iwMem.hadError )
    IWMem_ProfileTree_Push(name);
}

/*
==============
IWMem_ShouldTraceCallstacks
==============
*/
_BOOL8 IWMem_ShouldTraceCallstacks()
{
  return s_iwMem.traceCallstacks;
}

/*
==============
IWMem_UseMaxTracking
==============
*/
_BOOL8 IWMem_UseMaxTracking()
{
  return s_iwMem.maxTracking;
}

/*
==============
IWMem_UsingMATorPIX
==============
*/
_BOOL8 IWMem_UsingMATorPIX()
{
  return s_iwMem.usingPix;
}


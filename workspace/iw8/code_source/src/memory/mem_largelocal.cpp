/*
==============
LargeLocalAllocator::Pop
==============
*/

void __fastcall LargeLocalAllocator::Pop(LargeLocalAllocator *this, void *voidPtr, const unsigned __int64 size, const char *const name)
{
  ?Pop@LargeLocalAllocator@@QEAAXPEAX_KQEBD@Z(this, voidPtr, size, name);
}

/*
==============
LargeLocalAllocator::GetUsedSize
==============
*/

unsigned __int64 __fastcall LargeLocalAllocator::GetUsedSize(LargeLocalAllocator *this)
{
  return ?GetUsedSize@LargeLocalAllocator@@QEBA_KXZ(this);
}

/*
==============
Mem_LargeLocal_GetMark
==============
*/

unsigned __int64 __fastcall Mem_LargeLocal_GetMark()
{
  return ?Mem_LargeLocal_GetMark@@YA_KXZ();
}

/*
==============
Mem_LargeLocal::Mem_LargeLocal
==============
*/

void __fastcall Mem_LargeLocal::Mem_LargeLocal(Mem_LargeLocal *this, unsigned __int64 size, const char *name)
{
  ??0Mem_LargeLocal@@QEAA@_KPEBD@Z(this, size, name);
}

/*
==============
Mem_LargeLocal_Init
==============
*/

void Mem_LargeLocal_Init(void)
{
  ?Mem_LargeLocal_Init@@YAXXZ();
}

/*
==============
LargeLocalAllocator::DebugDump
==============
*/

void __fastcall LargeLocalAllocator::DebugDump(LargeLocalAllocator *this)
{
  ?DebugDump@LargeLocalAllocator@@QEBAXXZ(this);
}

/*
==============
LargeLocalAllocator::Reset
==============
*/

void __fastcall LargeLocalAllocator::Reset(LargeLocalAllocator *this)
{
  ?Reset@LargeLocalAllocator@@QEAAXXZ(this);
}

/*
==============
Mem_LargeLocal_ResetToMark
==============
*/

void __fastcall Mem_LargeLocal_ResetToMark(unsigned __int64 markPos)
{
  ?Mem_LargeLocal_ResetToMark@@YAX_K@Z(markPos);
}

/*
==============
Mem_LargeLocal_DumpStatsInternal
==============
*/

void Mem_LargeLocal_DumpStatsInternal(void)
{
  ?Mem_LargeLocal_DumpStatsInternal@@YAXXZ();
}

/*
==============
Mem_LargeLocal_Shutdown
==============
*/

void Mem_LargeLocal_Shutdown(void)
{
  ?Mem_LargeLocal_Shutdown@@YAXXZ();
}

/*
==============
Mem_LargeLocal_DumpStats
==============
*/

void Mem_LargeLocal_DumpStats(void)
{
  ?Mem_LargeLocal_DumpStats@@YAXXZ();
}

/*
==============
LargeLocalAllocator::ResetToMark
==============
*/

void __fastcall LargeLocalAllocator::ResetToMark(LargeLocalAllocator *this, const unsigned __int64 mark)
{
  ?ResetToMark@LargeLocalAllocator@@QEAAX_K@Z(this, mark);
}

/*
==============
Mem_LargeLocal::~Mem_LargeLocal
==============
*/

void __fastcall Mem_LargeLocal::~Mem_LargeLocal(Mem_LargeLocal *this)
{
  ??1Mem_LargeLocal@@QEAA@XZ(this);
}

/*
==============
Mem_LargeLocal_Clear
==============
*/

void Mem_LargeLocal_Clear(void)
{
  ?Mem_LargeLocal_Clear@@YAXXZ();
}

/*
==============
LargeLocalAllocator::Push
==============
*/

void *__fastcall LargeLocalAllocator::Push(LargeLocalAllocator *this, const LargeLocalAllocator *otherAllocator, const unsigned __int64 size, const char *const name)
{
  return ?Push@LargeLocalAllocator@@QEAAPEAXAEBV1@_KQEBD@Z(this, otherAllocator, size, name);
}

/*
==============
Mem_LargeLocal::Mem_LargeLocal
==============
*/
void Mem_LargeLocal::Mem_LargeLocal(Mem_LargeLocal *this, unsigned __int64 size, const char *name)
{
  ThreadContext CurrentThreadContext; 
  const char *ThreadContextName; 
  unsigned __int64 v8; 
  LargeLocalAllocator *CurrentAllocator; 
  const LargeLocalAllocator *v10; 

  if ( !Sys_IsMainThread() && !Mem_CanUseServerLargeLocal() )
  {
    CurrentThreadContext = Sys_GetCurrentThreadContext();
    ThreadContextName = Sys_GetThreadContextName(CurrentThreadContext);
    Sys_Error((const ObfuscateErrorText)&stru_143E5CA58, ThreadContextName);
  }
  if ( !size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_largelocal.cpp", 374, ASSERT_TYPE_ASSERT, "(size)", (const char *)&queryFormat, "size") )
    __debugbreak();
  this->m_name = name;
  v8 = (size + 127) & 0xFFFFFFFFFFFFFF80ui64;
  CurrentAllocator = Mem_LargeLocal_GetCurrentAllocator();
  v10 = &s_largeLocalMain;
  if ( CurrentAllocator == &s_largeLocalMain )
    v10 = &s_largeLocalServer;
  this->m_ptr = LargeLocalAllocator::Push(CurrentAllocator, v10, v8, name);
  this->m_size = v8;
}

/*
==============
Mem_LargeLocal::~Mem_LargeLocal
==============
*/
void Mem_LargeLocal::~Mem_LargeLocal(Mem_LargeLocal *this)
{
  ThreadContext CurrentThreadContext; 
  const char *ThreadContextName; 
  LargeLocalAllocator *CurrentAllocator; 

  if ( !Sys_IsMainThread() && !Mem_CanUseServerLargeLocal() )
  {
    CurrentThreadContext = Sys_GetCurrentThreadContext();
    ThreadContextName = Sys_GetThreadContextName(CurrentThreadContext);
    Sys_Error((const ObfuscateErrorText)&stru_143E5CA58, ThreadContextName);
  }
  if ( this->m_size )
  {
    CurrentAllocator = Mem_LargeLocal_GetCurrentAllocator();
    LargeLocalAllocator::Pop(CurrentAllocator, this->m_ptr, this->m_size, this->m_name);
    this->m_size = 0i64;
  }
}

/*
==============
LargeLocalAllocator::DebugDump
==============
*/
void LargeLocalAllocator::DebugDump(LargeLocalAllocator *this)
{
  unsigned int v1; 
  unsigned __int64 v3; 

  v1 = 0;
  if ( this->m_debugInfo.m_size )
  {
    v3 = 0i64;
    do
    {
      Com_Printf(10, "\t\tAlloc %d\n", v1);
      if ( v3 >= this->m_debugInfo.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 236, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
        __debugbreak();
      if ( v3 >= 0x40 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\fixed_memory_block.h", 99, ASSERT_TYPE_ASSERT, "( index < num_elements )", (const char *)&queryFormat, "index < num_elements") )
        __debugbreak();
      Com_Printf(10, "\t\t\tName   %s\n", *(const char **)&this->m_debugInfo.m_data.m_buffer[24 * v3]);
      if ( v3 >= this->m_debugInfo.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 236, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
        __debugbreak();
      if ( v3 >= 0x40 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\fixed_memory_block.h", 99, ASSERT_TYPE_ASSERT, "( index < num_elements )", (const char *)&queryFormat, "index < num_elements") )
        __debugbreak();
      Com_Printf(10, "\t\t\tPos    %p\n", *(const void **)&this->m_debugInfo.m_data.m_buffer[24 * v3 + 16]);
      if ( v3 >= this->m_debugInfo.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 236, ASSERT_TYPE_ASSERT, "( index < size() )", (const char *)&queryFormat, "index < size()") )
        __debugbreak();
      if ( v3 >= 0x40 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\fixed_memory_block.h", 99, ASSERT_TYPE_ASSERT, "( index < num_elements )", (const char *)&queryFormat, "index < num_elements") )
        __debugbreak();
      Com_Printf(10, "\t\t\tSize   %zu\n", *(_QWORD *)&this->m_debugInfo.m_data.m_buffer[24 * v3 + 8]);
      v3 = ++v1;
    }
    while ( v1 < this->m_debugInfo.m_size );
  }
}

/*
==============
LargeLocalAllocator::GetUsedSize
==============
*/
signed __int64 LargeLocalAllocator::GetUsedSize(LargeLocalAllocator *this)
{
  char *m_curPos; 
  char *m_basePos; 

  m_curPos = this->m_curPos;
  m_basePos = this->m_basePos;
  if ( this->m_direction )
  {
    if ( m_curPos > m_basePos && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_largelocal.cpp", 242, ASSERT_TYPE_ASSERT, "(m_curPos <= m_basePos)", (const char *)&queryFormat, "m_curPos <= m_basePos") )
      __debugbreak();
    return this->m_basePos - this->m_curPos;
  }
  else
  {
    if ( m_curPos < m_basePos && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_largelocal.cpp", 237, ASSERT_TYPE_ASSERT, "(m_curPos >= m_basePos)", (const char *)&queryFormat, "m_curPos >= m_basePos") )
      __debugbreak();
    return this->m_curPos - this->m_basePos;
  }
}

/*
==============
Mem_CanUseServerLargeLocal
==============
*/
_BOOL8 Mem_CanUseServerLargeLocal()
{
  if ( SV_Main_GetServerThreadOwnsGame() )
    return Sys_IsServerThread();
  if ( Sys_IsRenderThread() && !R_IsInRemoteScreenUpdate() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_largelocal.cpp", 329, ASSERT_TYPE_ASSERT, "(!Sys_IsRenderThread() || R_IsInRemoteScreenUpdate())", (const char *)&queryFormat, "!Sys_IsRenderThread() || R_IsInRemoteScreenUpdate()") )
    __debugbreak();
  return Sys_IsRenderThread();
}

/*
==============
Mem_LargeLocal_Clear
==============
*/
void Mem_LargeLocal_Clear(void)
{
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_largelocal.cpp", 420, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  LargeLocalAllocator::Reset(&s_largeLocalMain);
  LargeLocalAllocator::Reset(&s_largeLocalServer);
}

/*
==============
Mem_LargeLocal_DumpStats
==============
*/
void Mem_LargeLocal_DumpStats(void)
{
  volatile int readCount; 

  if ( s_largeLocalCritSect.writeThreadId == Sys_GetCurrentThreadId() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock.h", 62, ASSERT_TYPE_ASSERT, "( critSect->writeThreadId != Sys_GetCurrentThreadId() )", "This is a non-recursive lock! Don't attempt to take a read lock if the calling thread already has the write lock or this will loop infinitely.") )
    __debugbreak();
  if ( ((unsigned __int8)&s_largeLocalCritSect & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &s_largeLocalCritSect) )
    __debugbreak();
  _InterlockedIncrement((volatile signed __int32 *)&s_largeLocalCritSect);
  while ( s_largeLocalCritSect.writeCount )
    Sys_Sleep(0);
  Mem_LargeLocal_DumpStatsInternal();
  Com_Printf(10, "\n");
  if ( s_largeLocalCritSect.readCount <= 0 )
  {
    readCount = s_largeLocalCritSect.readCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock.h", 90, ASSERT_TYPE_ASSERT, "( critSect->readCount ) > ( 0 )", "%s > %s\n\t%i, %i", "critSect->readCount", "0", readCount, 0i64) )
      __debugbreak();
  }
  if ( ((unsigned __int64)&s_largeLocalCritSect & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &s_largeLocalCritSect) )
    __debugbreak();
  _InterlockedDecrement((volatile signed __int32 *)&s_largeLocalCritSect);
}

/*
==============
Mem_LargeLocal_DumpStatsInternal
==============
*/
void Mem_LargeLocal_DumpStatsInternal(void)
{
  unsigned __int64 UsedSize; 
  unsigned __int64 v1; 

  UsedSize = LargeLocalAllocator::GetUsedSize(&s_largeLocalMain);
  v1 = LargeLocalAllocator::GetUsedSize(&s_largeLocalServer);
  Com_Printf(10, "\nLarge Local Main Thread Used   : %zu bytes\n", UsedSize);
  Com_Printf(10, "Large Local Server Thread Used : %zu bytes\n", v1);
  Com_Printf(10, "Large Local Free               : %zu bytes\n", 1835008 - v1 - UsedSize);
  Com_Printf(10, "Large Local Min Free           : %zu bytes\n", s_largeLocalMinFree);
  Com_Printf(10, "\nLarge Local Main Thread Dump\n");
  LargeLocalAllocator::DebugDump(&s_largeLocalMain);
  Com_Printf(10, "\nLarge Local Server Thread Dump\n");
  LargeLocalAllocator::DebugDump(&s_largeLocalServer);
  Com_Printf(10, "\n");
}

/*
==============
Mem_LargeLocal_GetCurrentAllocator
==============
*/
LargeLocalAllocator *Mem_LargeLocal_GetCurrentAllocator()
{
  bool IsServerThread; 

  if ( Sys_IsMainThread() )
    return &s_largeLocalMain;
  if ( SV_Main_GetServerThreadOwnsGame() )
  {
    IsServerThread = Sys_IsServerThread();
  }
  else
  {
    if ( Sys_IsRenderThread() && !R_IsInRemoteScreenUpdate() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_largelocal.cpp", 329, ASSERT_TYPE_ASSERT, "(!Sys_IsRenderThread() || R_IsInRemoteScreenUpdate())", (const char *)&queryFormat, "!Sys_IsRenderThread() || R_IsInRemoteScreenUpdate()") )
      __debugbreak();
    IsServerThread = Sys_IsRenderThread();
  }
  if ( !IsServerThread && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_largelocal.cpp", 361, ASSERT_TYPE_ASSERT, "(Mem_CanUseServerLargeLocal())", (const char *)&queryFormat, "Mem_CanUseServerLargeLocal()") )
    __debugbreak();
  return &s_largeLocalServer;
}

/*
==============
Mem_LargeLocal_GetMark
==============
*/
char *Mem_LargeLocal_GetMark()
{
  ThreadContext CurrentThreadContext; 
  const char *ThreadContextName; 
  LargeLocalAllocator *CurrentAllocator; 
  char *m_curPos; 
  volatile int readCount; 

  if ( !Sys_IsMainThread() && !Mem_CanUseServerLargeLocal() )
  {
    CurrentThreadContext = Sys_GetCurrentThreadContext();
    ThreadContextName = Sys_GetThreadContextName(CurrentThreadContext);
    Sys_Error((const ObfuscateErrorText)&stru_143E5CA58, ThreadContextName);
  }
  CurrentAllocator = Mem_LargeLocal_GetCurrentAllocator();
  if ( s_largeLocalCritSect.writeThreadId == Sys_GetCurrentThreadId() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock.h", 62, ASSERT_TYPE_ASSERT, "( critSect->writeThreadId != Sys_GetCurrentThreadId() )", "This is a non-recursive lock! Don't attempt to take a read lock if the calling thread already has the write lock or this will loop infinitely.") )
    __debugbreak();
  if ( ((unsigned __int8)&s_largeLocalCritSect & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &s_largeLocalCritSect) )
    __debugbreak();
  _InterlockedIncrement((volatile signed __int32 *)&s_largeLocalCritSect);
  while ( s_largeLocalCritSect.writeCount )
    Sys_Sleep(0);
  m_curPos = CurrentAllocator->m_curPos;
  if ( s_largeLocalCritSect.readCount <= 0 )
  {
    readCount = s_largeLocalCritSect.readCount;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock.h", 90, ASSERT_TYPE_ASSERT, "( critSect->readCount ) > ( 0 )", "%s > %s\n\t%i, %i", "critSect->readCount", "0", readCount, 0i64) )
      __debugbreak();
  }
  if ( ((unsigned __int64)&s_largeLocalCritSect & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &s_largeLocalCritSect) )
    __debugbreak();
  _InterlockedDecrement((volatile signed __int32 *)&s_largeLocalCritSect);
  return m_curPos;
}

/*
==============
Mem_LargeLocal_Init
==============
*/
void Mem_LargeLocal_Init(void)
{
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_largelocal.cpp", 420, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  LargeLocalAllocator::Reset(&s_largeLocalMain);
  LargeLocalAllocator::Reset(&s_largeLocalServer);
}

/*
==============
Mem_LargeLocal_ResetToMark
==============
*/
void Mem_LargeLocal_ResetToMark(unsigned __int64 markPos)
{
  ThreadContext CurrentThreadContext; 
  const char *ThreadContextName; 
  LargeLocalAllocator *CurrentAllocator; 

  if ( !Sys_IsMainThread() && !Mem_CanUseServerLargeLocal() )
  {
    CurrentThreadContext = Sys_GetCurrentThreadContext();
    ThreadContextName = Sys_GetThreadContextName(CurrentThreadContext);
    Sys_Error((const ObfuscateErrorText)&stru_143E5CA58, ThreadContextName);
  }
  CurrentAllocator = Mem_LargeLocal_GetCurrentAllocator();
  LargeLocalAllocator::ResetToMark(CurrentAllocator, markPos);
}

/*
==============
Mem_LargeLocal_Shutdown
==============
*/
void Mem_LargeLocal_Shutdown(void)
{
  LargeLocalAllocator::Reset(&s_largeLocalMain);
  LargeLocalAllocator::Reset(&s_largeLocalServer);
}

/*
==============
LargeLocalAllocator::Pop
==============
*/
void LargeLocalAllocator::Pop(LargeLocalAllocator *this, void *voidPtr, const unsigned __int64 size, const char *const name)
{
  char *m_curPos; 
  bool v9; 
  unsigned __int64 v10; 
  unsigned __int64 v11; 
  unsigned __int64 v12; 

  Sys_LockWrite(&s_largeLocalCritSect);
  if ( voidPtr < s_largeLocalBuffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_largelocal.cpp", 277, ASSERT_TYPE_ASSERT, "(ptr >= s_largeLocalBuffer)", (const char *)&queryFormat, "ptr >= s_largeLocalBuffer") )
    __debugbreak();
  if ( voidPtr > &s_largeLocalCritSect && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_largelocal.cpp", 278, ASSERT_TYPE_ASSERT, "(ptr <= ( s_largeLocalBuffer + sizeof( s_largeLocalBuffer ) ))", (const char *)&queryFormat, "ptr <= ( s_largeLocalBuffer + sizeof( s_largeLocalBuffer ) )") )
    __debugbreak();
  m_curPos = this->m_curPos;
  if ( this->m_direction )
    v9 = voidPtr >= m_curPos;
  else
    v9 = voidPtr <= m_curPos;
  if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_largelocal.cpp", 150, ASSERT_TYPE_ASSERT, "(IsPointerWithinAlloc( ptr ))", (const char *)&queryFormat, "IsPointerWithinAlloc( ptr )") )
    __debugbreak();
  if ( !this->m_debugInfo.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 139, ASSERT_TYPE_ASSERT, "( !empty() )", (const char *)&queryFormat, "!empty()") )
    __debugbreak();
  v10 = this->m_debugInfo.m_size - 1;
  if ( v10 >= 0x40 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\fixed_memory_block.h", 107, ASSERT_TYPE_ASSERT, "( index < num_elements )", (const char *)&queryFormat, "index < num_elements") )
    __debugbreak();
  if ( *(_QWORD *)&this->m_debugInfo.m_data.m_buffer[24 * v10 + 8] != size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_largelocal.cpp", 154, ASSERT_TYPE_ASSERT, "(m_debugInfo.back().m_size == size)", (const char *)&queryFormat, "m_debugInfo.back().m_size == size") )
    __debugbreak();
  if ( !this->m_debugInfo.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 139, ASSERT_TYPE_ASSERT, "( !empty() )", (const char *)&queryFormat, "!empty()") )
    __debugbreak();
  v11 = this->m_debugInfo.m_size - 1;
  if ( v11 >= 0x40 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\fixed_memory_block.h", 107, ASSERT_TYPE_ASSERT, "( index < num_elements )", (const char *)&queryFormat, "index < num_elements") )
    __debugbreak();
  if ( *(const char *const *)&this->m_debugInfo.m_data.m_buffer[24 * v11] != name && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_largelocal.cpp", 155, ASSERT_TYPE_ASSERT, "(m_debugInfo.back().m_name == name)", (const char *)&queryFormat, "m_debugInfo.back().m_name == name") )
    __debugbreak();
  if ( !this->m_debugInfo.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 139, ASSERT_TYPE_ASSERT, "( !empty() )", (const char *)&queryFormat, "!empty()") )
    __debugbreak();
  v12 = this->m_debugInfo.m_size - 1;
  if ( v12 >= 0x40 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\fixed_memory_block.h", 107, ASSERT_TYPE_ASSERT, "( index < num_elements )", (const char *)&queryFormat, "index < num_elements") )
    __debugbreak();
  if ( *(void **)&this->m_debugInfo.m_data.m_buffer[24 * v12 + 16] != voidPtr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_largelocal.cpp", 156, ASSERT_TYPE_ASSERT, "(m_debugInfo.back().m_ptr == ptr)", (const char *)&queryFormat, "m_debugInfo.back().m_ptr == ptr") )
    __debugbreak();
  if ( !this->m_debugInfo.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 204, ASSERT_TYPE_ASSERT, "( !empty() )", "Vector is empty, nothing to pop!") )
    __debugbreak();
  --this->m_debugInfo.m_size;
  if ( this->m_direction )
    voidPtr = (char *)voidPtr + size;
  this->m_curPos = (char *)voidPtr;
  if ( ((unsigned __int8)voidPtr & 0x7F) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_largelocal.cpp", 168, ASSERT_TYPE_ASSERT, "(IsAligned( m_curPos, LARGE_LOCAL_ALIGNMENT ))", (const char *)&queryFormat, "IsAligned( m_curPos, LARGE_LOCAL_ALIGNMENT )") )
    __debugbreak();
  Sys_UnlockWrite(&s_largeLocalCritSect);
}

/*
==============
LargeLocalAllocator::Push
==============
*/
char *LargeLocalAllocator::Push(LargeLocalAllocator *this, const LargeLocalAllocator *otherAllocator, const unsigned __int64 size, const char *const name)
{
  char *m_curPos; 
  char *v9; 
  char *v10; 
  char *v11; 
  unsigned __int64 v12; 
  __int128 v17; 
  char *v18; 

  _RDI = this;
  if ( !size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_largelocal.cpp", 86, ASSERT_TYPE_ASSERT, "(size)", (const char *)&queryFormat, "size") )
    __debugbreak();
  if ( (size & 0x7F) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_largelocal.cpp", 87, ASSERT_TYPE_ASSERT, "(IsAligned( size, LARGE_LOCAL_ALIGNMENT ))", (const char *)&queryFormat, "IsAligned( size, LARGE_LOCAL_ALIGNMENT )") )
    __debugbreak();
  if ( otherAllocator->m_direction == _RDI->m_direction && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_largelocal.cpp", 88, ASSERT_TYPE_ASSERT, "(otherAllocator.m_direction != m_direction)", (const char *)&queryFormat, "otherAllocator.m_direction != m_direction") )
    __debugbreak();
  Sys_LockWrite(&s_largeLocalCritSect);
  m_curPos = _RDI->m_curPos;
  v9 = otherAllocator->m_curPos;
  if ( _RDI->m_direction )
  {
    if ( m_curPos < v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_largelocal.cpp", 112, ASSERT_TYPE_ASSERT, "(m_curPos >= otherAllocator.m_curPos)", (const char *)&queryFormat, "m_curPos >= otherAllocator.m_curPos") )
      __debugbreak();
    v11 = _RDI->m_curPos;
    if ( &v11[-size] < otherAllocator->m_curPos )
    {
      Mem_LargeLocal_DumpStatsInternal();
      Mem_Error_CannotAlloc_Dev((Mem_AllocatorType)16, "LargeLocalAllocator::AllocFailure", "c:\\workspace\\iw8\\code_source\\src\\memory\\mem_largelocal.cpp", 268, "size=%zu name=%s\n", size, name);
      v11 = _RDI->m_curPos;
    }
    v12 = s_largeLocalMinFree;
    v10 = &v11[-size];
    _RDI->m_curPos = v10;
    if ( v10 - otherAllocator->m_curPos < v12 )
      v12 = v10 - otherAllocator->m_curPos;
    s_largeLocalMinFree = v12;
  }
  else
  {
    if ( m_curPos > v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_largelocal.cpp", 96, ASSERT_TYPE_ASSERT, "(m_curPos <= otherAllocator.m_curPos)", (const char *)&queryFormat, "m_curPos <= otherAllocator.m_curPos") )
      __debugbreak();
    v10 = _RDI->m_curPos;
    if ( &v10[size] > otherAllocator->m_curPos )
    {
      Mem_LargeLocal_DumpStatsInternal();
      Mem_Error_CannotAlloc_Dev((Mem_AllocatorType)16, "LargeLocalAllocator::AllocFailure", "c:\\workspace\\iw8\\code_source\\src\\memory\\mem_largelocal.cpp", 268, "size=%zu name=%s\n", size, name);
      v10 = _RDI->m_curPos;
    }
    _RDI->m_curPos = &v10[size];
    if ( otherAllocator->m_curPos - &v10[size] < s_largeLocalMinFree )
      s_largeLocalMinFree = otherAllocator->m_curPos - &v10[size];
  }
  if ( ((unsigned __int8)v10 & 0x7F) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_largelocal.cpp", 127, ASSERT_TYPE_ASSERT, "(IsAligned( retPtr, LARGE_LOCAL_ALIGNMENT ))", (const char *)&queryFormat, "IsAligned( retPtr, LARGE_LOCAL_ALIGNMENT )") )
    __debugbreak();
  if ( ((__int64)_RDI->m_curPos & 0x7F) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_largelocal.cpp", 128, ASSERT_TYPE_ASSERT, "(IsAligned( m_curPos, LARGE_LOCAL_ALIGNMENT ))", (const char *)&queryFormat, "IsAligned( m_curPos, LARGE_LOCAL_ALIGNMENT )") )
    __debugbreak();
  *(_QWORD *)&v17 = name;
  v18 = v10;
  *((_QWORD *)&v17 + 1) = size;
  if ( _RDI->m_debugInfo.m_size >= 0x40 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 190, ASSERT_TYPE_ASSERT, "( size() < max_size() )", (const char *)&queryFormat, "size() < max_size()") )
    __debugbreak();
  __asm
  {
    vmovups xmm0, [rsp+78h+var_38]
    vmovsd  xmm1, [rsp+78h+var_28]
  }
  _R8 = 3 * _RDI->m_debugInfo.m_size;
  __asm
  {
    vmovups xmmword ptr [rdi+r8*8+18h], xmm0
    vmovsd  qword ptr [rdi+r8*8+28h], xmm1
  }
  ++_RDI->m_debugInfo.m_size;
  Sys_UnlockWrite(&s_largeLocalCritSect);
  return v10;
}

/*
==============
LargeLocalAllocator::Reset
==============
*/
void LargeLocalAllocator::Reset(LargeLocalAllocator *this)
{
  unsigned __int64 v2; 

  Sys_LockWrite(&s_largeLocalCritSect);
  v2 = 0i64;
  for ( this->m_curPos = this->m_basePos; v2 < this->m_debugInfo.m_size; ++v2 )
  {
    if ( v2 >= 0x40 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\fixed_memory_block.h", 107, ASSERT_TYPE_ASSERT, "( index < num_elements )", (const char *)&queryFormat, "index < num_elements") )
      __debugbreak();
  }
  this->m_debugInfo.m_size = 0i64;
  Sys_UnlockWrite(&s_largeLocalCritSect);
}

/*
==============
LargeLocalAllocator::ResetToMark
==============
*/
void LargeLocalAllocator::ResetToMark(LargeLocalAllocator *this, const unsigned __int64 mark)
{
  char *m_curPos; 
  bool v5; 
  unsigned __int64 v6; 
  unsigned __int64 v7; 

  Sys_LockWrite(&s_largeLocalCritSect);
  if ( mark < (unsigned __int64)s_largeLocalBuffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_largelocal.cpp", 277, ASSERT_TYPE_ASSERT, "(ptr >= s_largeLocalBuffer)", (const char *)&queryFormat, "ptr >= s_largeLocalBuffer") )
    __debugbreak();
  if ( mark > (unsigned __int64)&s_largeLocalCritSect && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_largelocal.cpp", 278, ASSERT_TYPE_ASSERT, "(ptr <= ( s_largeLocalBuffer + sizeof( s_largeLocalBuffer ) ))", (const char *)&queryFormat, "ptr <= ( s_largeLocalBuffer + sizeof( s_largeLocalBuffer ) )") )
    __debugbreak();
  m_curPos = this->m_curPos;
  if ( this->m_direction )
    v5 = mark >= (unsigned __int64)m_curPos;
  else
    v5 = mark <= (unsigned __int64)m_curPos;
  if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_largelocal.cpp", 180, ASSERT_TYPE_ASSERT, "(IsPointerWithinAlloc( ptr ))", (const char *)&queryFormat, "IsPointerWithinAlloc( ptr )") )
    __debugbreak();
  if ( this->m_debugInfo.m_size )
  {
    do
    {
      if ( this->m_direction )
      {
        if ( !this->m_debugInfo.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 139, ASSERT_TYPE_ASSERT, "( !empty() )", (const char *)&queryFormat, "!empty()") )
          __debugbreak();
        v7 = this->m_debugInfo.m_size - 1;
        if ( v7 >= 0x40 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\fixed_memory_block.h", 107, ASSERT_TYPE_ASSERT, "( index < num_elements )", (const char *)&queryFormat, "index < num_elements") )
          __debugbreak();
        if ( *(_QWORD *)&this->m_debugInfo.m_data.m_buffer[24 * v7 + 16] >= mark )
          break;
      }
      else
      {
        if ( !this->m_debugInfo.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 139, ASSERT_TYPE_ASSERT, "( !empty() )", (const char *)&queryFormat, "!empty()") )
          __debugbreak();
        v6 = this->m_debugInfo.m_size - 1;
        if ( v6 >= 0x40 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\memory_block\\fixed_memory_block.h", 107, ASSERT_TYPE_ASSERT, "( index < num_elements )", (const char *)&queryFormat, "index < num_elements") )
          __debugbreak();
        if ( *(_QWORD *)&this->m_debugInfo.m_data.m_buffer[24 * v6 + 16] < mark )
          break;
      }
      if ( !this->m_debugInfo.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\vector\\vector.h", 204, ASSERT_TYPE_ASSERT, "( !empty() )", "Vector is empty, nothing to pop!") )
        __debugbreak();
    }
    while ( this->m_debugInfo.m_size-- != 1 );
  }
  this->m_curPos = (char *)mark;
  Sys_UnlockWrite(&s_largeLocalCritSect);
}


/*
==============
Mem_HunkDebug_AllocAligned
==============
*/

void *__fastcall Mem_HunkDebug_AllocAligned(unsigned __int64 size, unsigned __int64 alignment, const char *name)
{
  return ?Mem_HunkDebug_AllocAligned@@YAPEAX_K0PEBD@Z(size, alignment, name);
}

/*
==============
Mem_HunkDebug_Reset
==============
*/

void Mem_HunkDebug_Reset(void)
{
  ?Mem_HunkDebug_Reset@@YAXXZ();
}

/*
==============
Mem_HunkDebug_PreCommit
==============
*/

void Mem_HunkDebug_PreCommit(void)
{
  ?Mem_HunkDebug_PreCommit@@YAXXZ();
}

/*
==============
Mem_HunkDebug_Shutdown
==============
*/

void Mem_HunkDebug_Shutdown(void)
{
  ?Mem_HunkDebug_Shutdown@@YAXXZ();
}

/*
==============
Mem_HunkDebug_Alloc
==============
*/

void *__fastcall Mem_HunkDebug_Alloc(unsigned __int64 size, const char *name)
{
  return ?Mem_HunkDebug_Alloc@@YAPEAX_KPEBD@Z(size, name);
}

/*
==============
Mem_HunkDebug_Free
==============
*/

void __fastcall Mem_HunkDebug_Free(void *__formal)
{
  ?Mem_HunkDebug_Free@@YAXPEAX@Z(__formal);
}

/*
==============
Mem_HunkDebug_DecommitUnused
==============
*/

void Mem_HunkDebug_DecommitUnused(void)
{
  ?Mem_HunkDebug_DecommitUnused@@YAXXZ();
}

/*
==============
Mem_HunkDebug_Init
==============
*/

void Mem_HunkDebug_Init(void)
{
  ?Mem_HunkDebug_Init@@YAXXZ();
}

/*
==============
Mem_HunkDebug_Alloc
==============
*/
void *Mem_HunkDebug_Alloc(unsigned __int64 size, const char *name)
{
  void *v4; 

  if ( !s_debugUser && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_hunkdebug.cpp", 73, ASSERT_TYPE_ASSERT, "(s_debugUser)", (const char *)&queryFormat, "s_debugUser", -2i64) )
    __debugbreak();
  IWMem_Profile_Push(name);
  Mem_Ownership_AllocVerify(MOVEMENT);
  v4 = Mem_HunkUser_AllocInternal(s_debugUser, size, 4ui64, name);
  memset_0(v4, 0, size);
  IWMem_Profile_Pop();
  return v4;
}

/*
==============
Mem_HunkDebug_AllocAligned
==============
*/
void *Mem_HunkDebug_AllocAligned(unsigned __int64 size, unsigned __int64 alignment, const char *name)
{
  void *v6; 

  if ( !s_debugUser && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_hunkdebug.cpp", 88, ASSERT_TYPE_ASSERT, "(s_debugUser)", (const char *)&queryFormat, "s_debugUser", -2i64) )
    __debugbreak();
  Mem_Ownership_AllocVerify(MOVEMENT);
  IWMem_Profile_Push(name);
  v6 = Mem_HunkUser_AllocInternal(s_debugUser, size, alignment, name);
  memset_0(v6, 0, size);
  IWMem_Profile_Pop();
  return v6;
}

/*
==============
Mem_HunkDebug_DecommitUnused
==============
*/
void Mem_HunkDebug_DecommitUnused(void)
{
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_hunkdebug.cpp", 63, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( !s_debugUser && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_hunkdebug.cpp", 64, ASSERT_TYPE_ASSERT, "(s_debugUser)", (const char *)&queryFormat, "s_debugUser") )
    __debugbreak();
  Mem_Ownership_CheckNone(MOVEMENT);
  Mem_HunkUser_DecommitUnused(s_debugUser);
}

/*
==============
Mem_HunkDebug_Free
==============
*/
void Mem_HunkDebug_Free(void *__formal)
{
  if ( !s_debugUser && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_hunkdebug.cpp", 102, ASSERT_TYPE_ASSERT, "(s_debugUser)", (const char *)&queryFormat, "s_debugUser") )
    __debugbreak();
  Mem_Ownership_AllocVerify(MOVEMENT);
}

/*
==============
Mem_HunkDebug_Init
==============
*/
void Mem_HunkDebug_Init(void)
{
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_hunkdebug.cpp", 21, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( s_debugUser && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_hunkdebug.cpp", 22, ASSERT_TYPE_ASSERT, "(!s_debugUser)", (const char *)&queryFormat, "!s_debugUser") )
    __debugbreak();
  Mem_Ownership_CheckNone(MOVEMENT);
  s_debugUser = Mem_HunkUser_Create(0x2000000ui64, "Hunk_InitDebugMemory", TRACK_DEBUG, MEM_ALLOC_FLAG_MINIMAL_TRACKING|MEM_ALLOC_FLAG_NO_MEM_CLEAR);
}

/*
==============
Mem_HunkDebug_PreCommit
==============
*/
void Mem_HunkDebug_PreCommit(void)
{
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_hunkdebug.cpp", 53, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( !s_debugUser && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_hunkdebug.cpp", 54, ASSERT_TYPE_ASSERT, "(s_debugUser)", (const char *)&queryFormat, "s_debugUser") )
    __debugbreak();
  Mem_Ownership_CheckNone(MOVEMENT);
  Mem_HunkUser_CommitReserve(s_debugUser);
}

/*
==============
Mem_HunkDebug_Reset
==============
*/
void Mem_HunkDebug_Reset(void)
{
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_hunkdebug.cpp", 43, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  Mem_Ownership_CheckNone(MOVEMENT);
  if ( s_debugUser )
    Mem_HunkUser_Reset(s_debugUser);
}

/*
==============
Mem_HunkDebug_Shutdown
==============
*/
void Mem_HunkDebug_Shutdown(void)
{
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_hunkdebug.cpp", 32, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( !s_debugUser && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_hunkdebug.cpp", 33, ASSERT_TYPE_ASSERT, "(s_debugUser)", (const char *)&queryFormat, "s_debugUser") )
    __debugbreak();
  Mem_Ownership_CheckNone(MOVEMENT);
  Mem_HunkUser_Destroy(s_debugUser);
  s_debugUser = NULL;
}


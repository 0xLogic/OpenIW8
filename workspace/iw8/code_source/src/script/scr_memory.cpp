/*
==============
Scr_Mem_DebugPreAllocate
==============
*/

void __fastcall Scr_Mem_DebugPreAllocate(const scrContext_t *scrContext)
{
  ?Scr_Mem_DebugPreAllocate@@YAXAEBUscrContext_t@@@Z(scrContext);
}

/*
==============
Scr_Mem_ReleaseScriptLocks
==============
*/

void Scr_Mem_ReleaseScriptLocks(void)
{
  ?Scr_Mem_ReleaseScriptLocks@@YAXXZ();
}

/*
==============
Scr_Mem_DebugDecommitUnused
==============
*/

void __fastcall Scr_Mem_DebugDecommitUnused(const scrContext_t *scrContext)
{
  ?Scr_Mem_DebugDecommitUnused@@YAXAEBUscrContext_t@@@Z(scrContext);
}

/*
==============
Scr_Mem_DebugFree
==============
*/

void __fastcall Scr_Mem_DebugFree(const scrContext_t *scrContext, void *const ptr)
{
  ?Scr_Mem_DebugFree@@YAXAEBUscrContext_t@@QEAX@Z(scrContext, ptr);
}

/*
==============
Scr_Mem_DebugAllocAlign
==============
*/

void *__fastcall Scr_Mem_DebugAllocAlign(const scrContext_t *scrContext, unsigned __int64 size, unsigned __int64 alignment, const char *debugName)
{
  return ?Scr_Mem_DebugAllocAlign@@YAPEAXAEBUscrContext_t@@_K1PEBD@Z(scrContext, size, alignment, debugName);
}

/*
==============
Scr_Mem_DebugInit
==============
*/

void __fastcall Scr_Mem_DebugInit(scrContext_t *scrContext)
{
  ?Scr_Mem_DebugInit@@YAXAEAUscrContext_t@@@Z(scrContext);
}

/*
==============
Scr_Mem_AcquireScriptLocks
==============
*/

void Scr_Mem_AcquireScriptLocks(void)
{
  ?Scr_Mem_AcquireScriptLocks@@YAXXZ();
}

/*
==============
Scr_Mem_TempShutdown
==============
*/

void __fastcall Scr_Mem_TempShutdown(scrContext_t *scrContext)
{
  ?Scr_Mem_TempShutdown@@YAXAEAUscrContext_t@@@Z(scrContext);
}

/*
==============
Scr_Mem_ErrorCleanup
==============
*/

void __fastcall Scr_Mem_ErrorCleanup(const scrContext_t *scrContext)
{
  ?Scr_Mem_ErrorCleanup@@YAXAEBUscrContext_t@@@Z(scrContext);
}

/*
==============
Scr_Mem_TempAlloc
==============
*/

void *__fastcall Scr_Mem_TempAlloc(scrContext_t *scrContext, unsigned __int64 size, const char *debugName)
{
  return ?Scr_Mem_TempAlloc@@YAPEAXAEAUscrContext_t@@_KPEBD@Z(scrContext, size, debugName);
}

/*
==============
Scr_Mem_DebugShutdown
==============
*/

void __fastcall Scr_Mem_DebugShutdown(scrContext_t *scrContext)
{
  ?Scr_Mem_DebugShutdown@@YAXAEAUscrContext_t@@@Z(scrContext);
}

/*
==============
Scr_Mem_TempPreAllocate
==============
*/

void __fastcall Scr_Mem_TempPreAllocate(const scrContext_t *scrContext)
{
  ?Scr_Mem_TempPreAllocate@@YAXAEBUscrContext_t@@@Z(scrContext);
}

/*
==============
Scr_Mem_DebugReset
==============
*/

void __fastcall Scr_Mem_DebugReset(const scrContext_t *scrContext)
{
  ?Scr_Mem_DebugReset@@YAXAEBUscrContext_t@@@Z(scrContext);
}

/*
==============
Scr_Mem_DebugCheckClear
==============
*/

void __fastcall Scr_Mem_DebugCheckClear(const scrContext_t *scrContext)
{
  ?Scr_Mem_DebugCheckClear@@YAXAEBUscrContext_t@@@Z(scrContext);
}

/*
==============
Scr_Mem_DebugAlloc
==============
*/

void *__fastcall Scr_Mem_DebugAlloc(const scrContext_t *scrContext, unsigned __int64 size, const char *debugName)
{
  return ?Scr_Mem_DebugAlloc@@YAPEAXAEBUscrContext_t@@_KPEBD@Z(scrContext, size, debugName);
}

/*
==============
Scr_Mem_TempClear
==============
*/

void __fastcall Scr_Mem_TempClear(const scrContext_t *scrContext)
{
  ?Scr_Mem_TempClear@@YAXAEBUscrContext_t@@@Z(scrContext);
}

/*
==============
Scr_Mem_TempInit
==============
*/

void __fastcall Scr_Mem_TempInit(scrContext_t *scrContext)
{
  ?Scr_Mem_TempInit@@YAXAEAUscrContext_t@@@Z(scrContext);
}

/*
==============
Scr_Mem_TempCheckClear
==============
*/

void __fastcall Scr_Mem_TempCheckClear(const scrContext_t *scrContext)
{
  ?Scr_Mem_TempCheckClear@@YAXAEBUscrContext_t@@@Z(scrContext);
}

/*
==============
Scr_Mem_TempDecommitUnused
==============
*/

void __fastcall Scr_Mem_TempDecommitUnused(const scrContext_t *scrContext)
{
  ?Scr_Mem_TempDecommitUnused@@YAXAEBUscrContext_t@@@Z(scrContext);
}

/*
==============
Scr_Mem_AcquireScriptLocks
==============
*/
void Scr_Mem_AcquireScriptLocks(void)
{
  MemOwnershipType v0; 
  MemOwnershipType v1; 

  Mem_Ownership_AllocAcquire(MOVEMENT);
  LOBYTE(v0) = 1;
  Mem_Ownership_AllocAcquire(v0);
  LOBYTE(v1) = 2;
  Mem_Ownership_AllocAcquire(v1);
}

/*
==============
Scr_Mem_CheckClearInternal
==============
*/
void Scr_Mem_CheckClearInternal(HunkUser *hunkUser)
{
  if ( !hunkUser && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_memory.cpp", 20, ASSERT_TYPE_ASSERT, "( hunkUser )", (const char *)&queryFormat, "hunkUser") )
    __debugbreak();
  if ( Mem_HunkUser_GetUsedSize(hunkUser) )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_memory.cpp", 21, ASSERT_TYPE_ASSERT, "( Mem_HunkUser_GetUsedSize( hunkUser ) == 0 )", (const char *)&queryFormat, "Mem_HunkUser_GetUsedSize( hunkUser ) == 0") )
      __debugbreak();
  }
}

/*
==============
Scr_Mem_DebugAlloc
==============
*/
void *Scr_Mem_DebugAlloc(const scrContext_t *scrContext, unsigned __int64 size, const char *debugName)
{
  const scrContext_t *v4; 
  void *v5; 

  v4 = scrContext;
  if ( !scrContext->m_varPub.debugMemHunkUser && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_memory.cpp", 168, ASSERT_TYPE_ASSERT, "( scrContext.m_varPub.debugMemHunkUser != nullptr )", (const char *)&queryFormat, "scrContext.m_varPub.debugMemHunkUser != nullptr") )
    __debugbreak();
  LOBYTE(scrContext) = 2;
  Mem_Ownership_AllocVerify((MemOwnershipType)scrContext);
  v5 = Mem_HunkUser_AllocInternal(v4->m_varPub.debugMemHunkUser, size, 1ui64, "Scr_Mem_DebugAlloc");
  memset_0(v5, 0, size);
  return v5;
}

/*
==============
Scr_Mem_DebugAllocAlign
==============
*/
void *Scr_Mem_DebugAllocAlign(const scrContext_t *scrContext, unsigned __int64 size, unsigned __int64 alignment, const char *debugName)
{
  const scrContext_t *v6; 
  void *v7; 

  v6 = scrContext;
  if ( !scrContext->m_varPub.debugMemHunkUser && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_memory.cpp", 182, ASSERT_TYPE_ASSERT, "( scrContext.m_varPub.debugMemHunkUser != nullptr )", (const char *)&queryFormat, "scrContext.m_varPub.debugMemHunkUser != nullptr") )
    __debugbreak();
  LOBYTE(scrContext) = 2;
  Mem_Ownership_AllocVerify((MemOwnershipType)scrContext);
  v7 = Mem_HunkUser_AllocInternal(v6->m_varPub.debugMemHunkUser, size, alignment, "Scr_Mem_DebugAllocAlign");
  memset_0(v7, 0, size);
  return v7;
}

/*
==============
Scr_Mem_DebugCheckClear
==============
*/
void Scr_Mem_DebugCheckClear(const scrContext_t *scrContext)
{
  Scr_Mem_CheckClearInternal(scrContext->m_varPub.debugMemHunkUser);
}

/*
==============
Scr_Mem_DebugDecommitUnused
==============
*/
void Scr_Mem_DebugDecommitUnused(const scrContext_t *scrContext)
{
  const scrContext_t *v1; 

  v1 = scrContext;
  if ( !scrContext->m_varPub.debugMemHunkUser && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_memory.cpp", 143, ASSERT_TYPE_ASSERT, "(scrContext.m_varPub.debugMemHunkUser != nullptr)", (const char *)&queryFormat, "scrContext.m_varPub.debugMemHunkUser != nullptr") )
    __debugbreak();
  LOBYTE(scrContext) = 2;
  Mem_Ownership_CheckNone((MemOwnershipType)scrContext);
  Mem_HunkUser_DecommitUnused(v1->m_varPub.debugMemHunkUser);
}

/*
==============
Scr_Mem_DebugFree
==============
*/
void Scr_Mem_DebugFree(const scrContext_t *scrContext, void *const ptr)
{
  const scrContext_t *v2; 

  v2 = scrContext;
  LOBYTE(scrContext) = 2;
  Mem_Ownership_AllocVerify((MemOwnershipType)scrContext);
  if ( !v2->m_varPub.debugMemHunkUser && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_memory.cpp", 199, ASSERT_TYPE_ASSERT, "( scrContext.m_varPub.debugMemHunkUser != nullptr )", (const char *)&queryFormat, "scrContext.m_varPub.debugMemHunkUser != nullptr") )
    __debugbreak();
}

/*
==============
Scr_Mem_DebugInit
==============
*/
void Scr_Mem_DebugInit(scrContext_t *scrContext)
{
  scrContext_t *v1; 

  v1 = scrContext;
  if ( scrContext->m_varPub.debugMemHunkUser && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_memory.cpp", 114, ASSERT_TYPE_ASSERT, "(scrContext.m_varPub.debugMemHunkUser == nullptr)", (const char *)&queryFormat, "scrContext.m_varPub.debugMemHunkUser == nullptr") )
    __debugbreak();
  LOBYTE(scrContext) = 2;
  Mem_Ownership_CheckNone((MemOwnershipType)scrContext);
  v1->m_varPub.debugMemHunkUser = Mem_HunkUser_Create(0x4000000ui64, "scrContext.m_varPub.debugMemHunkUser", TRACK_MISC, MEM_ALLOC_FLAG_MINIMAL_TRACKING|MEM_ALLOC_FLAG_NO_MEM_CLEAR);
}

/*
==============
Scr_Mem_DebugPreAllocate
==============
*/
void Scr_Mem_DebugPreAllocate(const scrContext_t *scrContext)
{
  const scrContext_t *v1; 

  v1 = scrContext;
  if ( !scrContext->m_varPub.debugMemHunkUser && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_memory.cpp", 134, ASSERT_TYPE_ASSERT, "(scrContext.m_varPub.debugMemHunkUser != nullptr)", (const char *)&queryFormat, "scrContext.m_varPub.debugMemHunkUser != nullptr") )
    __debugbreak();
  LOBYTE(scrContext) = 2;
  Mem_Ownership_CheckNone((MemOwnershipType)scrContext);
  Mem_HunkUser_CommitReserve(v1->m_varPub.debugMemHunkUser);
}

/*
==============
Scr_Mem_DebugReset
==============
*/
void Scr_Mem_DebugReset(const scrContext_t *scrContext)
{
  const scrContext_t *v1; 
  unsigned __int64 UsedSize; 

  v1 = scrContext;
  if ( !scrContext->m_varPub.debugMemHunkUser && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_memory.cpp", 152, ASSERT_TYPE_ASSERT, "(scrContext.m_varPub.debugMemHunkUser != nullptr)", (const char *)&queryFormat, "scrContext.m_varPub.debugMemHunkUser != nullptr") )
    __debugbreak();
  LOBYTE(scrContext) = 2;
  Mem_Ownership_CheckNone((MemOwnershipType)scrContext);
  UsedSize = Mem_HunkUser_GetUsedSize(v1->m_varPub.debugMemHunkUser);
  Com_Printf(15, "Scr_Mem_DebugReset: Used %zu bytes of debugMemHunkUser\n", UsedSize);
  Mem_HunkUser_Reset(v1->m_varPub.debugMemHunkUser);
}

/*
==============
Scr_Mem_DebugShutdown
==============
*/
void Scr_Mem_DebugShutdown(scrContext_t *scrContext)
{
  scrContext_t *v1; 

  v1 = scrContext;
  if ( !scrContext->m_varPub.debugMemHunkUser && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_memory.cpp", 124, ASSERT_TYPE_ASSERT, "(scrContext.m_varPub.debugMemHunkUser != nullptr)", (const char *)&queryFormat, "scrContext.m_varPub.debugMemHunkUser != nullptr") )
    __debugbreak();
  LOBYTE(scrContext) = 2;
  Mem_Ownership_CheckNone((MemOwnershipType)scrContext);
  Mem_HunkUser_Destroy(v1->m_varPub.debugMemHunkUser);
  v1->m_varPub.debugMemHunkUser = NULL;
}

/*
==============
Scr_Mem_ErrorCleanup
==============
*/
void Scr_Mem_ErrorCleanup(const scrContext_t *scrContext)
{
  MemOwnershipType v2; 
  HunkUser *tempMemHunkUser; 
  HunkUser *readWriteTempHunkUser; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_memory.cpp", 222, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  LOBYTE(v2) = 1;
  Mem_Ownership_CheckNone(v2);
  tempMemHunkUser = scrContext->m_varPub.tempMemHunkUser;
  if ( tempMemHunkUser )
    Mem_HunkUser_Reset(tempMemHunkUser);
  readWriteTempHunkUser = scrContext->m_varPub.readWriteTempHunkUser;
  if ( readWriteTempHunkUser )
    Mem_HunkUser_Reset(readWriteTempHunkUser);
}

/*
==============
Scr_Mem_ReleaseScriptLocks
==============
*/
void Scr_Mem_ReleaseScriptLocks(MemOwnershipType a1)
{
  MemOwnershipType v1; 

  LOBYTE(a1) = 2;
  Mem_Ownership_AllocRelease(a1);
  LOBYTE(v1) = 1;
  Mem_Ownership_AllocRelease(v1);
  Mem_Ownership_AllocRelease(MOVEMENT);
}

/*
==============
Scr_Mem_TempAlloc
==============
*/
void *Scr_Mem_TempAlloc(scrContext_t *scrContext, unsigned __int64 size, const char *debugName)
{
  scrContext_t *v3; 
  void *v5; 
  unsigned __int64 UsedSize; 

  v3 = scrContext;
  LOBYTE(scrContext) = 1;
  Mem_Ownership_AllocVerify((MemOwnershipType)scrContext);
  if ( !v3->m_varPub.tempMemHunkUser && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_memory.cpp", 81, ASSERT_TYPE_ASSERT, "( scrContext.m_varPub.tempMemHunkUser != nullptr )", (const char *)&queryFormat, "scrContext.m_varPub.tempMemHunkUser != nullptr") )
    __debugbreak();
  v5 = Mem_HunkUser_AllocInternal(v3->m_varPub.tempMemHunkUser, size, 8ui64, "Scr_Mem_TempAlloc");
  memset_0(v5, 0, size);
  UsedSize = Mem_HunkUser_GetUsedSize(v3->m_varPub.tempMemHunkUser);
  if ( UsedSize > v3->m_tempAllocHighWatermark )
    v3->m_tempAllocHighWatermark = UsedSize;
  return v5;
}

/*
==============
Scr_Mem_TempCheckClear
==============
*/
void Scr_Mem_TempCheckClear(const scrContext_t *scrContext)
{
  Scr_Mem_CheckClearInternal(scrContext->m_varPub.tempMemHunkUser);
}

/*
==============
Scr_Mem_TempClear
==============
*/
void Scr_Mem_TempClear(const scrContext_t *scrContext)
{
  const scrContext_t *v1; 

  v1 = scrContext;
  LOBYTE(scrContext) = 1;
  Mem_Ownership_AllocVerify((MemOwnershipType)scrContext);
  if ( !v1->m_varPub.tempMemHunkUser && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_memory.cpp", 100, ASSERT_TYPE_ASSERT, "( scrContext.m_varPub.tempMemHunkUser != nullptr )", (const char *)&queryFormat, "scrContext.m_varPub.tempMemHunkUser != nullptr") )
    __debugbreak();
  Mem_HunkUser_Reset(v1->m_varPub.tempMemHunkUser);
}

/*
==============
Scr_Mem_TempDecommitUnused
==============
*/
void Scr_Mem_TempDecommitUnused(const scrContext_t *scrContext)
{
  const scrContext_t *v1; 

  v1 = scrContext;
  LOBYTE(scrContext) = 1;
  Mem_Ownership_CheckNone((MemOwnershipType)scrContext);
  if ( !v1->m_varPub.tempMemHunkUser && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_memory.cpp", 68, ASSERT_TYPE_ASSERT, "(scrContext.m_varPub.tempMemHunkUser != nullptr)", (const char *)&queryFormat, "scrContext.m_varPub.tempMemHunkUser != nullptr") )
    __debugbreak();
  Mem_HunkUser_DecommitUnused(v1->m_varPub.tempMemHunkUser);
}

/*
==============
Scr_Mem_TempInit
==============
*/
void Scr_Mem_TempInit(scrContext_t *scrContext)
{
  scrContext_t *v1; 

  v1 = scrContext;
  LOBYTE(scrContext) = 1;
  Mem_Ownership_CheckNone((MemOwnershipType)scrContext);
  if ( v1->m_varPub.tempMemHunkUser && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_memory.cpp", 29, ASSERT_TYPE_ASSERT, "(scrContext.m_varPub.tempMemHunkUser == nullptr)", (const char *)&queryFormat, "scrContext.m_varPub.tempMemHunkUser == nullptr") )
    __debugbreak();
  v1->m_varPub.tempMemHunkUser = Mem_HunkUser_Create(0x1000000ui64, "scrContext.m_varPub.tempMemHunkUser", TRACK_MISC, MEM_ALLOC_FLAG_NO_MEM_CLEAR);
  v1->m_tempAllocHighWatermark = 0i64;
}

/*
==============
Scr_Mem_TempPreAllocate
==============
*/
void Scr_Mem_TempPreAllocate(const scrContext_t *scrContext)
{
  const scrContext_t *v1; 

  v1 = scrContext;
  LOBYTE(scrContext) = 1;
  Mem_Ownership_CheckNone((MemOwnershipType)scrContext);
  if ( !v1->m_varPub.tempMemHunkUser && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_memory.cpp", 59, ASSERT_TYPE_ASSERT, "(scrContext.m_varPub.tempMemHunkUser != nullptr)", (const char *)&queryFormat, "scrContext.m_varPub.tempMemHunkUser != nullptr") )
    __debugbreak();
  Mem_HunkUser_CommitReserve(v1->m_varPub.tempMemHunkUser);
}

/*
==============
Scr_Mem_TempShutdown
==============
*/
void Scr_Mem_TempShutdown(scrContext_t *scrContext)
{
  scrContext_t *v1; 
  __int64 m_tempAllocHighWatermark; 
  float v3; 
  float v4; 

  v1 = scrContext;
  LOBYTE(scrContext) = 1;
  Mem_Ownership_CheckNone((MemOwnershipType)scrContext);
  if ( !v1->m_varPub.tempMemHunkUser && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\script\\scr_memory.cpp", 42, ASSERT_TYPE_ASSERT, "(scrContext.m_varPub.tempMemHunkUser != nullptr)", (const char *)&queryFormat, "scrContext.m_varPub.tempMemHunkUser != nullptr") )
    __debugbreak();
  Mem_HunkUser_Destroy(v1->m_varPub.tempMemHunkUser);
  m_tempAllocHighWatermark = v1->m_tempAllocHighWatermark;
  v1->m_varPub.tempMemHunkUser = NULL;
  if ( m_tempAllocHighWatermark )
  {
    v3 = (float)m_tempAllocHighWatermark;
    if ( m_tempAllocHighWatermark < 0 )
    {
      v4 = (float)m_tempAllocHighWatermark;
      v3 = v4 + 1.8446744e19;
    }
    Com_Printf(15, "Scr_ShutdownProgramHunkUser: Temp Alloc High watermark: %.2f mb (%zu%%)\n", (float)(v3 * 0.00000095367432), (unsigned __int64)(100 * m_tempAllocHighWatermark) >> 24);
  }
}


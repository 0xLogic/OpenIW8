/*
==============
CL_Debug_DumpSkeletonMemoryData
==============
*/

void CL_Debug_DumpSkeletonMemoryData(void)
{
  ?CL_Debug_DumpSkeletonMemoryData@@YAXXZ();
}

/*
==============
CL_Debug_UnregisterCommands
==============
*/

void CL_Debug_UnregisterCommands(void)
{
  ?CL_Debug_UnregisterCommands@@YAXXZ();
}

/*
==============
CL_Debug_TrackAllocSkeletonMemory
==============
*/

void __fastcall CL_Debug_TrackAllocSkeletonMemory(const DObj *obj, unsigned int size, int skelMemPos)
{
  ?CL_Debug_TrackAllocSkeletonMemory@@YAXPEBUDObj@@IH@Z(obj, size, skelMemPos);
}

/*
==============
CL_Debug_InitSkeletonMemTracking
==============
*/

void CL_Debug_InitSkeletonMemTracking(void)
{
  ?CL_Debug_InitSkeletonMemTracking@@YAXXZ();
}

/*
==============
CL_Debug_RegisterCommands
==============
*/

void CL_Debug_RegisterCommands(void)
{
  ?CL_Debug_RegisterCommands@@YAXXZ();
}

/*
==============
CL_Debug_DumpDObjBoneInfo
==============
*/
void CL_Debug_DumpDObjBoneInfo()
{
  volatile int v0; 
  unsigned int v1; 
  void *v2; 
  void *v3; 
  volatile int v4; 
  SkelMemTrackingData *v5; 
  signed __int64 v6; 
  unsigned int size; 
  __int64 v8; 
  const char **v9; 
  unsigned int v10; 

  if ( s_skelMemTrackingCount )
  {
    v0 = 0;
    v1 = 0;
    v2 = Mem_Virtual_Alloc(16i64 * s_skelMemTrackingCount, "CL_DObjDumpBoneInfo", TRACK_DEBUG);
    v3 = v2;
    v4 = 0;
    if ( s_skelMemTrackingCount > 0 )
    {
      v5 = s_skelMemTrackingData;
      v6 = (_BYTE *)v2 - (_BYTE *)s_skelMemTrackingData;
      do
      {
        ++v4;
        *(const char **)((char *)&v5->name + v6) = v5->name;
        size = v5->size;
        *(unsigned int *)((char *)&v5->size + v6) = size;
        ++v5;
        v1 += size >> 5;
      }
      while ( v4 < s_skelMemTrackingCount );
    }
    qsort(v3, s_skelMemTrackingCount, 0x10ui64, (_CoreCrtNonSecureSearchSortCompareFunction)CL_Debug_SortBoneInfoFunc);
    v8 = cls.skelMemPoolSize >> 5;
    v10 = 100 * v1 / (unsigned int)v8;
    Com_Printf_NoFilter("%d bones in %d allocations. Maximum bone count is %d. At %d%% of capacity.\n", v1, (unsigned int)s_skelMemTrackingCount, v8, v10);
    if ( s_skelMemTrackingCount > 0 )
    {
      v9 = (const char **)v3;
      do
      {
        Com_Printf_NoFilter("( %3d bones ) %s\n", *((_DWORD *)v9 + 2) >> 5, *v9);
        v9 += 2;
        ++v0;
      }
      while ( v0 < s_skelMemTrackingCount );
    }
    Mem_Virtual_Free(v3);
  }
}

/*
==============
CL_Debug_DumpSkeletonMemoryData
==============
*/
void CL_Debug_DumpSkeletonMemoryData(void)
{
  volatile int v0; 
  unsigned int *p_size; 
  const char *v2; 

  if ( (cls.skelMemPoolSize & 0x1F) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_debug.cpp", 67, ASSERT_TYPE_ASSERT, "(cls.skelMemPoolSize % DSKEL_CREATE_INC == 0)", (const char *)&queryFormat, "cls.skelMemPoolSize % DSKEL_CREATE_INC == 0") )
    __debugbreak();
  Com_Printf_NoFilter("Dumping Skel Memory Data for %d allocations. Max total bone count %d\n", (unsigned int)s_skelMemTrackingCount, cls.skelMemPoolSize >> 5);
  Com_Printf_NoFilter("index,name,bone count\n");
  v0 = 0;
  if ( s_skelMemTrackingCount > 0 )
  {
    p_size = &s_skelMemTrackingData[0].size;
    do
    {
      v2 = (const char *)*((_QWORD *)p_size - 1);
      if ( v2 )
        Com_Printf_NoFilter("%d,%s,%d\n", (unsigned int)v0, v2, *p_size >> 5);
      ++v0;
      p_size += 4;
    }
    while ( v0 < s_skelMemTrackingCount );
  }
}

/*
==============
CL_Debug_InitSkeletonMemTracking
==============
*/
void CL_Debug_InitSkeletonMemTracking(void)
{
  s_skelMemTrackingCount = 0;
  s_skelMemTrackingWarnDumpCount = 0;
  s_skelMemTrackingErrorDumpCount = 0;
}

/*
==============
CL_Debug_RegisterCommands
==============
*/
void CL_Debug_RegisterCommands(void)
{
  Cmd_AddClientCommandList(S_CL_DEBUG_CMD_COMMON, 1u);
}

/*
==============
CL_Debug_SortBoneInfoFunc
==============
*/

__int64 __fastcall CL_Debug_SortBoneInfoFunc(const void *pA, const void *pB)
{
  unsigned int v2; 
  __int64 v4; 

  v2 = *((_DWORD *)pA + 2);
  if ( v2 < *((_DWORD *)pB + 2) )
    return 1i64;
  if ( v2 <= *((_DWORD *)pB + 2) )
  {
    v4 = *(_QWORD *)pB;
    if ( !*(_QWORD *)pA && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 181, ASSERT_TYPE_SANITY, "( s0 )", (const char *)&queryFormat, "s0") )
      __debugbreak();
    if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_string.h", 182, ASSERT_TYPE_SANITY, "( s1 )", (const char *)&queryFormat, "s1") )
      __debugbreak();
    JUMPOUT(0x141A0C594i64);
  }
  return 0xFFFFFFFFi64;
}

/*
==============
CL_Debug_TrackAllocSkeletonMemory
==============
*/
void CL_Debug_TrackAllocSkeletonMemory(const DObj *obj, unsigned int size, int skelMemPos)
{
  int v6; 
  __int64 v7; 
  int v8; 

  if ( ((unsigned __int8)&s_skelMemTrackingCount & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", (const void *)&s_skelMemTrackingCount) )
    __debugbreak();
  v6 = _InterlockedIncrement(&s_skelMemTrackingCount);
  if ( v6 > 2048 )
  {
    if ( ((unsigned __int8)s_skelMemTrackingErrorDumpCount & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", s_skelMemTrackingErrorDumpCount) )
      __debugbreak();
    if ( _InterlockedIncrement(s_skelMemTrackingErrorDumpCount) == 1 )
      CL_Debug_DumpSkeletonMemoryData();
    Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_1441EFC18, 549i64, 2048i64);
  }
  v7 = v6 - 1;
  s_skelMemTrackingData[v7].name = DObjGetName(obj);
  if ( (size & 0x1F) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\client\\cl_debug.cpp", 116, ASSERT_TYPE_ASSERT, "(size % DSKEL_CREATE_INC == 0)", (const char *)&queryFormat, "size % DSKEL_CREATE_INC == 0") )
    __debugbreak();
  v8 = cls.skelMemPoolSize - 0x10000;
  s_skelMemTrackingData[v7].size = size;
  if ( skelMemPos > v8 )
  {
    if ( ((unsigned __int8)&s_skelMemTrackingWarnDumpCount & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", (const void *)&s_skelMemTrackingWarnDumpCount) )
      __debugbreak();
    if ( _InterlockedIncrement(&s_skelMemTrackingWarnDumpCount) == 1 )
    {
      Com_PrintError(1, "ERROR: TOO MANY ANIMATED BONES - check if the total game bone count can be reduced. See console log for info.\n");
      CL_Debug_DumpSkeletonMemoryData();
    }
  }
}

/*
==============
CL_Debug_UnregisterCommands
==============
*/
void CL_Debug_UnregisterCommands(void)
{
  Cmd_RemoveClientCommandList(S_CL_DEBUG_CMD_COMMON, 1u);
}


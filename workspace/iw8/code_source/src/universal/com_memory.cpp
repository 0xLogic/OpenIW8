/*
==============
DebugWipe
==============
*/

void __fastcall DebugWipe(void *mem, unsigned __int64 size)
{
  ?DebugWipe@@YAXPEAX_K@Z(mem, size);
}

/*
==============
Com_MemDumpStatsLine
==============
*/

void __fastcall Com_MemDumpStatsLine(const char *name, const unsigned __int64 size)
{
  ?Com_MemDumpStatsLine@@YAXPEBD_K@Z(name, size);
}

/*
==============
Com_MemDumpPrintf
==============
*/

void Com_MemDumpPrintf(const char *const str, ...)
{
  ?Com_MemDumpPrintf@@YAXQEBDZZ(str);
}

/*
==============
Com_MemDumpCommon
==============
*/

void Com_MemDumpCommon(void)
{
  ?Com_MemDumpCommon@@YAXXZ();
}

/*
==============
Com_MemDumpInit
==============
*/

void Com_MemDumpInit(void)
{
  ?Com_MemDumpInit@@YAXXZ();
}

/*
==============
Com_MemDumpCommon
==============
*/
void Com_MemDumpCommon(void)
{
  float CommitSize; 
  float v1; 
  float CommitSizeBanks; 
  float CommitSizeAlwaysLoadedBanks; 
  float CommitSizeCurrentTransientBanks; 
  float v5; 
  float v6; 
  float v7; 
  ntl::nxheap *Heap; 
  float m_used_mem; 
  float m_used_mem_max; 
  ntl::nxheap *v11; 
  bool v12; 
  ntl::nxheap_region *p_mp_top_ptr; 
  ntl::nxheap *v14; 
  void *mp_start_ptr; 
  void *mp_top_ptr; 
  float v17; 
  float v18; 
  float MinFreeSize; 

  CommitSize = (float)(__int64)Mem_Virtual_GetCommitSize();
  Com_MemDumpPrintf("%-34.34s %-10.3f\n", "mem_virtual commit", (float)(CommitSize * 0.00000095367432));
  v1 = (float)(__int64)SD_GetCommitSize();
  Com_MemDumpPrintf("%-34.34s %-10.3f\n", "sound commit", (float)(v1 * 0.00000095367432));
  CommitSizeBanks = (float)(__int64)SD_GetCommitSizeBanks();
  Com_MemDumpPrintf("%-34.34s %-10.3f\n", "sound commit (banks)", (float)(CommitSizeBanks * 0.00000095367432));
  CommitSizeAlwaysLoadedBanks = (float)(__int64)SD_GetCommitSizeAlwaysLoadedBanks();
  Com_MemDumpPrintf("%-34.34s %-10.3f\n", "sound commit (always loaded banks)", (float)(CommitSizeAlwaysLoadedBanks * 0.00000095367432));
  CommitSizeCurrentTransientBanks = (float)(__int64)SD_GetCommitSizeCurrentTransientBanks();
  Com_MemDumpPrintf("%-34.34s %-10.3f\n", "sound commit (current transient banks)", (float)(CommitSizeCurrentTransientBanks * 0.00000095367432));
  v5 = (float)R_RT_GetCommitSize();
  Com_MemDumpPrintf("%-34.34s %-10.3f\n", "RT commit", (float)(v5 * 0.00000095367432));
  v6 = (float)(__int64)Mem_NewDeleteHeap_GetTotalSize();
  Com_MemDumpPrintf("%-34.34s %-10.3f\n", "NewDelete heap total", (float)(v6 * 0.00000095367432));
  v7 = (float)(__int64)Mem_NewDeleteHeap_GetFreeSize();
  Com_MemDumpPrintf("%-34.34s %-10.3f\n", "NewDelete heap free", (float)(v7 * 0.00000095367432));
  Heap = DW_GetHeap();
  m_used_mem = (float)(__int64)Heap->m_used_mem;
  Com_MemDumpPrintf("%-34.34s %-10.3f\n", "DW heap used", (float)(m_used_mem * 0.00000095367432));
  m_used_mem_max = (float)(__int64)Heap->m_used_mem_max;
  Com_MemDumpPrintf("%-34.34s %-10.3f\n", "DW heap max used", (float)(m_used_mem_max * 0.00000095367432));
  v11 = Heap->mp_parent_region->mp_heap[0];
  v12 = v11 == NULL;
  p_mp_top_ptr = (ntl::nxheap_region *)&v11->mp_top_ptr;
  v14 = Heap->mp_parent_region->mp_heap[1];
  if ( v12 )
    p_mp_top_ptr = Heap->mp_parent_region;
  mp_start_ptr = p_mp_top_ptr->mp_start_ptr;
  if ( v14 )
    mp_top_ptr = v14->mp_top_ptr;
  else
    mp_top_ptr = Heap->mp_parent_region->mp_end_ptr;
  if ( mp_top_ptr < mp_start_ptr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\nxheap\\nxheap.inl", 57, ASSERT_TYPE_ASSERT, "( top >= bot )", (const char *)&queryFormat, "top >= bot") )
    __debugbreak();
  v17 = (float)(__int64)((__int64)mp_top_ptr + Heap->m_free_fragment_mem - (_QWORD)mp_start_ptr);
  Com_MemDumpPrintf("%-34.34s %-10.3f\n", "DW heap min free", (float)(v17 * 0.00000095367432));
  v18 = (float)(__int64)HttpHeapLargestFreeBlock();
  Com_MemDumpPrintf("%-34.34s %-10.3f\n", "http largest free", (float)(v18 * 0.00000095367432));
  MinFreeSize = (float)(__int64)HttpHeapGetMinFreeSize();
  Com_MemDumpPrintf("%-34.34s %-10.3f\n", "http min free", (float)(MinFreeSize * 0.00000095367432));
  Com_MemDumpPrintf("----------------------------------------------------------------------------------------------------------------------\n");
}

/*
==============
Com_MemDumpInit
==============
*/
void Com_MemDumpInit(void)
{
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_memory.cpp", 181, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  Cmd_AddCommandInternal("meminfo", Com_Meminfo_f, &Com_Meminfo_f_VAR);
  Cmd_AddCommandInternal("hunk_user_info", Mem_HunkUser_MemoryInfo_f, &Mem_HunkUser_MemoryInfo_f_VAR);
}

/*
==============
Com_MemDumpPrintf
==============
*/
void Com_MemDumpPrintf(const char *const str, ...)
{
  char dest[1024]; 
  va_list va; 

  va_start(va, str);
  Com_vsprintf_truncate(dest, 0x400ui64, 0x400ui64, str, va);
  Com_PrintNoFormat(0, dest);
}

/*
==============
Com_MemDumpStatsLine
==============
*/
void Com_MemDumpStatsLine(const char *name, const unsigned __int64 size)
{
  float v2; 

  v2 = (float)(__int64)size;
  Com_MemDumpPrintf("%-34.34s %-10.3f\n", name, (float)(v2 * 0.00000095367432));
}

/*
==============
Com_Meminfo_f
==============
*/
void Com_Meminfo_f()
{
  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_memory.cpp", 113, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  Sys_DumpRawHWMemStats(0);
  Mem_HunkUser_DumpStats();
  Mem_LargeLocal_DumpStats();
  Mem_Virtual_DumpStats();
  PMem_DumpMemStats();
  XB3XMem_PrintAuxMemoryStatus();
  XB3XMem_DumpAuxHeap();
  MemBudget_Poll_Dump(0);
  Com_MemDumpCommon();
  Com_MemDumpPrintf("----------------------------------------------------------------------------------------------------------------------\n");
  Sys_DumpPlatformMemStats();
  Com_MemDumpPrintf("----------------------------------------------------------------------------------------------------------------------\n");
  DB_Zones_DumpMemoryUsage();
  Stream_Alloc_Dump();
  SD_AllocPrint();
  Com_Printf(0, "\n** Use 'r_rtDump' to dump stats for dynamic rendertarget allocations **\n\n");
  Com_Printf(0, "\n");
  Com_Printf(0, "%s\n", "Related commands: meminfo, imagelist, gfx_world, gfx_2d, gfx_model, cg_drawfps, com_statmon, r_rtDump, ps4_memdump (PS4 only)");
}

/*
==============
DebugWipe
==============
*/
void DebugWipe(void *mem, unsigned __int64 size)
{
  unsigned int v2; 
  __int64 v4; 
  unsigned __int64 v5; 
  unsigned int v6; 
  __int64 v7; 
  unsigned __int64 v8; 
  unsigned __int64 v9; 
  char *v10; 
  _DWORD *v11; 
  unsigned __int64 i; 
  unsigned __int64 v13; 
  __int64 v14; 

  v2 = 0;
  v4 = (unsigned __int8)mem & 3;
  if ( ((unsigned __int8)mem & 3) != 0 )
  {
    v5 = size;
    if ( size > 4 - v4 )
      v5 = 4 - v4;
  }
  else
  {
    v5 = 0i64;
  }
  v6 = 0;
  if ( v5 )
  {
    v7 = 0i64;
    do
    {
      ++v6;
      *(_BYTE *)mem = *((_BYTE *)&g_DebugWipe_magic + v4 + v7);
      mem = (char *)mem + 1;
      v7 = v6;
    }
    while ( v6 != v5 );
  }
  v8 = size - v5;
  v9 = ((unsigned __int64)((unsigned int)v8 & 0xFFFFFFFC) + 3) >> 2;
  v10 = (char *)mem + ((unsigned int)v8 & 0xFFFFFFFC);
  if ( mem > v10 )
    v9 = 0i64;
  if ( v9 )
  {
    v11 = mem;
    for ( i = v9; i; --i )
      *v11++ = 2142953389;
  }
  v13 = v8 - ((unsigned int)v8 & 0xFFFFFFFC);
  if ( v13 )
  {
    v14 = 0i64;
    do
    {
      ++v2;
      *v10++ = *((_BYTE *)&g_DebugWipe_magic + v14);
      v14 = v2;
    }
    while ( v2 != v13 );
  }
}

/*
==============
Mem_HunkUser_MemoryInfo_f
==============
*/

void __fastcall Mem_HunkUser_MemoryInfo_f()
{
  Mem_HunkUser_DumpStats();
}


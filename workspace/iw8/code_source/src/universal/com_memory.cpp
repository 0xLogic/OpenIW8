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

void __fastcall Com_MemDumpCommon(double _XMM0_8)
{
  ntl::nxheap *Heap; 
  ntl::nxheap *v54; 
  bool v55; 
  ntl::nxheap_region *p_mp_top_ptr; 
  ntl::nxheap *v57; 
  void *mp_top_ptr; 

  __asm { vmovaps [rsp+48h+var_18], xmm6 }
  Mem_Virtual_GetCommitSize();
  __asm
  {
    vmovss  xmm6, cs:__real@35800000
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rax
    vmulss  xmm0, xmm0, xmm6
    vcvtss2sd xmm2, xmm0, xmm0
    vmovq   r8, xmm2
  }
  Com_MemDumpPrintf("%-34.34s %-10.3f\n", "mem_virtual commit", *(double *)&_XMM2);
  SD_GetCommitSize();
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rax
    vmulss  xmm1, xmm0, xmm6
    vcvtss2sd xmm2, xmm1, xmm1
    vmovq   r8, xmm2
  }
  Com_MemDumpPrintf("%-34.34s %-10.3f\n", "sound commit", *(double *)&_XMM2);
  SD_GetCommitSizeBanks();
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rax
    vmulss  xmm1, xmm0, xmm6
    vcvtss2sd xmm2, xmm1, xmm1
    vmovq   r8, xmm2
  }
  Com_MemDumpPrintf("%-34.34s %-10.3f\n", "sound commit (banks)", *(double *)&_XMM2);
  SD_GetCommitSizeAlwaysLoadedBanks();
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rax
    vmulss  xmm1, xmm0, xmm6
    vcvtss2sd xmm2, xmm1, xmm1
    vmovq   r8, xmm2
  }
  Com_MemDumpPrintf("%-34.34s %-10.3f\n", "sound commit (always loaded banks)", *(double *)&_XMM2);
  SD_GetCommitSizeCurrentTransientBanks();
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rax
    vmulss  xmm1, xmm0, xmm6
    vcvtss2sd xmm2, xmm1, xmm1
    vmovq   r8, xmm2
  }
  Com_MemDumpPrintf("%-34.34s %-10.3f\n", "sound commit (current transient banks)", *(double *)&_XMM2);
  R_RT_GetCommitSize();
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rax
    vmulss  xmm1, xmm0, xmm6
    vcvtss2sd xmm2, xmm1, xmm1
    vmovq   r8, xmm2
  }
  Com_MemDumpPrintf("%-34.34s %-10.3f\n", "RT commit", *(double *)&_XMM2);
  Mem_NewDeleteHeap_GetTotalSize();
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rax
    vmulss  xmm1, xmm0, xmm6
    vcvtss2sd xmm2, xmm1, xmm1
    vmovq   r8, xmm2
  }
  Com_MemDumpPrintf("%-34.34s %-10.3f\n", "NewDelete heap total", *(double *)&_XMM2);
  Mem_NewDeleteHeap_GetFreeSize();
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rax
    vmulss  xmm1, xmm0, xmm6
    vcvtss2sd xmm2, xmm1, xmm1
    vmovq   r8, xmm2
  }
  Com_MemDumpPrintf("%-34.34s %-10.3f\n", "NewDelete heap free", *(double *)&_XMM2);
  __asm { vxorps  xmm0, xmm0, xmm0 }
  Heap = DW_GetHeap();
  __asm
  {
    vcvtsi2ss xmm0, xmm0, qword ptr [rax+30h]
    vmulss  xmm1, xmm0, xmm6
    vcvtss2sd xmm2, xmm1, xmm1
    vmovq   r8, xmm2
  }
  Com_MemDumpPrintf("%-34.34s %-10.3f\n", "DW heap used", *(double *)&_XMM2);
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, qword ptr [rsi+40h]
    vmulss  xmm1, xmm0, xmm6
    vcvtss2sd xmm2, xmm1, xmm1
    vmovq   r8, xmm2
  }
  Com_MemDumpPrintf("%-34.34s %-10.3f\n", "DW heap max used", *(double *)&_XMM2);
  v54 = Heap->mp_parent_region->mp_heap[0];
  v55 = v54 == NULL;
  p_mp_top_ptr = (ntl::nxheap_region *)&v54->mp_top_ptr;
  v57 = Heap->mp_parent_region->mp_heap[1];
  if ( v55 )
    p_mp_top_ptr = Heap->mp_parent_region;
  if ( v57 )
    mp_top_ptr = v57->mp_top_ptr;
  else
    mp_top_ptr = Heap->mp_parent_region->mp_end_ptr;
  if ( mp_top_ptr < p_mp_top_ptr->mp_start_ptr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\nxheap\\nxheap.inl", 57, ASSERT_TYPE_ASSERT, "( top >= bot )", (const char *)&queryFormat, "top >= bot") )
    __debugbreak();
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rax
    vmulss  xmm1, xmm0, xmm6
    vcvtss2sd xmm2, xmm1, xmm1
    vmovq   r8, xmm2
  }
  Com_MemDumpPrintf("%-34.34s %-10.3f\n", "DW heap min free", *(double *)&_XMM2);
  HttpHeapLargestFreeBlock();
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rax
    vmulss  xmm1, xmm0, xmm6
    vcvtss2sd xmm2, xmm1, xmm1
    vmovq   r8, xmm2
  }
  Com_MemDumpPrintf("%-34.34s %-10.3f\n", "http largest free", *(double *)&_XMM2);
  HttpHeapGetMinFreeSize();
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rax
    vmulss  xmm1, xmm0, xmm6
    vcvtss2sd xmm2, xmm1, xmm1
    vmovq   r8, xmm2
  }
  Com_MemDumpPrintf("%-34.34s %-10.3f\n", "http min free", *(double *)&_XMM2);
  __asm { vmovaps xmm6, [rsp+48h+var_18] }
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
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rdx
    vmulss  xmm1, xmm0, cs:__real@35800000
    vcvtss2sd xmm2, xmm1, xmm1
    vmovq   r8, xmm2
  }
  Com_MemDumpPrintf("%-34.34s %-10.3f\n", name, *(double *)&_XMM2);
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


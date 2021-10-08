/*
==============
XB3XMemAlloc_UpdateIWMemAllocations
==============
*/

void XB3XMemAlloc_UpdateIWMemAllocations(void)
{
  ?XB3XMemAlloc_UpdateIWMemAllocations@@YAXXZ();
}

/*
==============
XB3XMem_DumpAuxHeap
==============
*/

void XB3XMem_DumpAuxHeap(void)
{
  ?XB3XMem_DumpAuxHeap@@YAXXZ();
}

/*
==============
Sys_ForEachSysMemAllocator
==============
*/

void __fastcall Sys_ForEachSysMemAllocator(void (__fastcall *callback)(const char *, unsigned __int64))
{
  ?Sys_ForEachSysMemAllocator@@YAXP6AXPEBD_K@Z@Z(callback);
}

/*
==============
XB3XMem_HasAuxMem
==============
*/

bool __fastcall XB3XMem_HasAuxMem()
{
  return ?XB3XMem_HasAuxMem@@YA_NXZ();
}

/*
==============
XB3GetCurrentAvailableMem
==============
*/

unsigned __int64 __fastcall XB3GetCurrentAvailableMem()
{
  return ?XB3GetCurrentAvailableMem@@YA_KXZ();
}

/*
==============
XB3GetUntrackedMem
==============
*/

unsigned __int64 __fastcall XB3GetUntrackedMem()
{
  return ?XB3GetUntrackedMem@@YA_KXZ();
}

/*
==============
XB3MemAlloc_VerifyReserveHysteresis
==============
*/

void XB3MemAlloc_VerifyReserveHysteresis(void)
{
  ?XB3MemAlloc_VerifyReserveHysteresis@@YAXXZ();
}

/*
==============
XB3XMemAlloc_ValidateD3DSwapChain
==============
*/

void XB3XMemAlloc_ValidateD3DSwapChain(void)
{
  ?XB3XMemAlloc_ValidateD3DSwapChain@@YAXXZ();
}

/*
==============
XB3XMemAlloc_SetDefaultHooks
==============
*/

void XB3XMemAlloc_SetDefaultHooks(void)
{
  ?XB3XMemAlloc_SetDefaultHooks@@YAXXZ();
}

/*
==============
XB3GetNumXMemHeaps
==============
*/

int __fastcall XB3GetNumXMemHeaps()
{
  return ?XB3GetNumXMemHeaps@@YAHXZ();
}

/*
==============
XB3XMem_GetAuxMemFreeBytes
==============
*/

unsigned __int64 __fastcall XB3XMem_GetAuxMemFreeBytes()
{
  return ?XB3XMem_GetAuxMemFreeBytes@@YA_KXZ();
}

/*
==============
XB3XMem_IsInAuxMem
==============
*/

bool __fastcall XB3XMem_IsInAuxMem(const void *ptr)
{
  return ?XB3XMem_IsInAuxMem@@YA_NPEBX@Z(ptr);
}

/*
==============
XB3XMemAlloc_Free
==============
*/

void __fastcall XB3XMemAlloc_Free(void *mem, unsigned __int64 allocAttributes)
{
  ?XB3XMemAlloc_Free@@YAXPEAX_K@Z(mem, allocAttributes);
}

/*
==============
XB3XMemAlloc_Init
==============
*/

void XB3XMemAlloc_Init(void)
{
  ?XB3XMemAlloc_Init@@YAXXZ();
}

/*
==============
XB3XMem_AuxMemAlloc
==============
*/

unsigned __int8 *__fastcall XB3XMem_AuxMemAlloc(unsigned __int64 allocSize, unsigned __int64 allocAlignment)
{
  return ?XB3XMem_AuxMemAlloc@@YAPEAE_K0@Z(allocSize, allocAlignment);
}

/*
==============
XB3XMemAlloc_InitCommands
==============
*/

void XB3XMemAlloc_InitCommands(void)
{
  ?XB3XMemAlloc_InitCommands@@YAXXZ();
}

/*
==============
XB3XMemAlloc_ReserveHeaps
==============
*/

void XB3XMemAlloc_ReserveHeaps(void)
{
  ?XB3XMemAlloc_ReserveHeaps@@YAXXZ();
}

/*
==============
XB3SystemMemoryStatus_Show_f
==============
*/

void __fastcall XB3SystemMemoryStatus_Show_f()
{
  ?XB3SystemMemoryStatus_Show_f@@YAXXZ();
}

/*
==============
XB3GetTotalMem
==============
*/

unsigned __int64 __fastcall XB3GetTotalMem()
{
  return ?XB3GetTotalMem@@YA_KXZ();
}

/*
==============
XB3GetXMemHeapName
==============
*/

const char *__fastcall XB3GetXMemHeapName(int heapIdx)
{
  return ?XB3GetXMemHeapName@@YAPEBDH@Z(heapIdx);
}

/*
==============
XB3GetXMemHeapStats
==============
*/

int __fastcall XB3GetXMemHeapStats(int heapIdx, _XMEM_HEAP_STATISTICS *statistics, unsigned __int64 *heapHysteresis)
{
  return ?XB3GetXMemHeapStats@@YAHHPEAU_XMEM_HEAP_STATISTICS@@PEA_K@Z(heapIdx, statistics, heapHysteresis);
}

/*
==============
XB3XMem_PrintAuxMemoryStatus
==============
*/

void XB3XMem_PrintAuxMemoryStatus(void)
{
  ?XB3XMem_PrintAuxMemoryStatus@@YAXXZ();
}

/*
==============
XB3GetExecutableSize
==============
*/

unsigned __int64 __fastcall XB3GetExecutableSize()
{
  return ?XB3GetExecutableSize@@YA_KXZ();
}

/*
==============
XB3XMemAlloc_SetD3DSwapChainHooks
==============
*/

void __fastcall XB3XMemAlloc_SetD3DSwapChainHooks(int catchDVR)
{
  ?XB3XMemAlloc_SetD3DSwapChainHooks@@YAXH@Z(catchDVR);
}

/*
==============
XB3XMemAlloc_Alloc
==============
*/

void *__fastcall XB3XMemAlloc_Alloc(unsigned __int64 size, unsigned __int64 allocAttributes)
{
  return ?XB3XMemAlloc_Alloc@@YAPEAX_K0@Z(size, allocAttributes);
}

/*
==============
Sys_ForEachSysMemAllocator
==============
*/
void Sys_ForEachSysMemAllocator(void (*callback)(const char *, unsigned __int64))
{
  unsigned __int64 v2; 
  unsigned __int64 v3; 
  unsigned __int64 UsedSize; 
  unsigned __int64 v5; 
  unsigned __int64 v6; 
  ntl::nxheap *v7; 
  ntl::nxheap_region *p_mp_top_ptr; 
  ntl::nxheap *v9; 
  void *mp_start_ptr; 
  void *mp_top_ptr; 
  int v12; 
  unsigned __int64 v13; 
  int v14[4]; 
  __int64 v15; 
  int v16[4]; 
  unsigned __int64 freeMem; 

  if ( !callback && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_xmemalloc.cpp", 1075, ASSERT_TYPE_ASSERT, "(callback)", (const char *)&queryFormat, "callback") )
    __debugbreak();
  v12 = 80;
  TitleMemoryStatus(&v12);
  v14[0] = 80;
  TitleMemoryStatus(v14);
  v2 = Mem_Paged_GetTotalPhysicalSize() + v15 + s_executableSize;
  if ( s_auxContextEmulation )
  {
    if ( v2 < 0x10000000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_xmemalloc.cpp", 188, ASSERT_TYPE_ASSERT, "(totalTracked >= DURANGO_EXPECTED_AUX_MEM_SIZE)", (const char *)&queryFormat, "totalTracked >= DURANGO_EXPECTED_AUX_MEM_SIZE") )
      __debugbreak();
    v2 -= 0x10000000i64;
  }
  v16[0] = 80;
  v3 = v13 - v2;
  if ( v2 >= v13 )
    v3 = 0i64;
  TitleMemoryStatus(v16);
  IWMem_Clear(s_iwMemMSAllocs);
  if ( v3 )
  {
    IWMem_Profile_Push("Untracked");
    IWMem_Alloc(s_iwMemMSAllocs, (const void *)0x10, v3);
    IWMem_Profile_Pop();
  }
  IWMem_Allocator_SetFreeMem(s_iwMemSysFree, freeMem);
  UsedSize = IWMem_Allocator_GetUsedSize(s_iwMemExecutable);
  callback("ExecutableSize", UsedSize);
  v5 = IWMem_Allocator_GetUsedSize(s_iwMemMSAllocs);
  callback("MicrosoftAllocations", v5);
  v6 = IWMem_Allocator_GetUsedSize(s_iwMemSysFree);
  callback("SystemMemFree", v6);
  if ( s_auxContext )
  {
    callback("AuxMemUsed", s_auxMemHeap.m_heap.m_used_mem);
    v7 = s_auxMemHeap.m_heap.mp_parent_region->mp_heap[0];
    if ( v7 )
      p_mp_top_ptr = (ntl::nxheap_region *)&v7->mp_top_ptr;
    else
      p_mp_top_ptr = s_auxMemHeap.m_heap.mp_parent_region;
    v9 = s_auxMemHeap.m_heap.mp_parent_region->mp_heap[1];
    mp_start_ptr = p_mp_top_ptr->mp_start_ptr;
    if ( v9 )
      mp_top_ptr = v9->mp_top_ptr;
    else
      mp_top_ptr = s_auxMemHeap.m_heap.mp_parent_region->mp_end_ptr;
    if ( mp_top_ptr < mp_start_ptr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\nxheap\\nxheap.inl", 57, ASSERT_TYPE_ASSERT, "( top >= bot )", (const char *)&queryFormat, "top >= bot") )
      __debugbreak();
    callback("AuxMemFree", (unsigned __int64)mp_top_ptr + s_auxMemHeap.m_heap.m_free_fragment_mem - (_QWORD)mp_start_ptr);
  }
}

/*
==============
XB3AddExecutableToIWMem
==============
*/
void XB3AddExecutableToIWMem()
{
  unsigned int v0; 
  unsigned __int64 size; 
  HMODULE ModuleHandleW; 
  char *v3; 
  __int64 v4; 
  unsigned __int16 v5; 
  char *v6; 
  __int64 v7; 
  int v8; 
  __int64 v9; 
  unsigned __int64 v10; 
  __int64 v11; 
  __int64 v12; 
  unsigned int m_bufferInsertOffset; 
  char *v14; 
  int v15; 
  char *v16; 
  IWMemID r_allocatorID; 
  char dest[64]; 

  IWMem_Allocator_CreateFixed(&r_allocatorID, "Root System Memory", All, NULL, 0xFFFFFFFFFFFFFFFFui64);
  v0 = 0;
  size = 0i64;
  ModuleHandleW = GetModuleHandleW(NULL);
  if ( !ModuleHandleW && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_xmemalloc.cpp", 526, ASSERT_TYPE_ASSERT, "(moduleBase)", (const char *)&queryFormat, "moduleBase") )
    __debugbreak();
  v3 = (char *)ModuleHandleW + *((int *)ModuleHandleW + 15);
  v4 = (__int64)&v3[*((unsigned __int16 *)v3 + 10) + 24];
  v5 = *((_WORD *)v3 + 3);
  if ( v5 )
  {
    v6 = &v3[*((unsigned __int16 *)v3 + 10) + 32];
    v7 = v5;
    do
    {
      v8 = *(_DWORD *)v6;
      v9 = *((unsigned int *)v6 + 1);
      v6 += 40;
      v10 = v9 + ((v8 + 4095) & 0xFFFFF000);
      if ( size > v10 )
        v10 = size;
      size = v10;
      --v7;
    }
    while ( v7 );
  }
  IWMem_Allocator_CreateFixed(&s_iwMemExecutable, "Executable", (IWMemAllocatorType)5, ModuleHandleW, size);
  s_executableSectionNames.m_bufferInsertOffset = 0;
  if ( *((_WORD *)v3 + 3) )
  {
    do
    {
      v11 = v4 + 40i64 * v0;
      Core_strncpy(dest, 0x40ui64, (const char *)v11, 8ui64);
      v12 = -1i64;
      do
        ++v12;
      while ( dest[v12] );
      m_bufferInsertOffset = s_executableSectionNames.m_bufferInsertOffset;
      if ( (signed int)(4095 - s_executableSectionNames.m_bufferInsertOffset) <= (int)v12 )
      {
        Sys_Error((const ObfuscateErrorText)&stru_143DC7DF8, 4096i64);
        m_bufferInsertOffset = s_executableSectionNames.m_bufferInsertOffset;
      }
      v14 = &s_executableSectionNames.m_buffer[m_bufferInsertOffset];
      Core_strcpy(v14, (int)v12 + 1, dest);
      s_executableSectionNames.m_bufferInsertOffset += v12 + 1;
      v15 = *(_DWORD *)(v11 + 8);
      v16 = (char *)ModuleHandleW + *(unsigned int *)(v11 + 12);
      IWMem_Profile_Push(v14);
      IWMem_Alloc(s_iwMemExecutable, v16, (v15 + 4095) & 0xFFFFF000);
      IWMem_Profile_Pop();
      ++v0;
    }
    while ( v0 < *((unsigned __int16 *)v3 + 3) );
  }
}

/*
==============
XB3GetCurrentAvailableMem
==============
*/
__int64 XB3GetCurrentAvailableMem()
{
  int v1[4]; 
  __int64 v2; 

  v1[0] = 80;
  TitleMemoryStatus(v1);
  return v2;
}

/*
==============
XB3GetExecutableSize
==============
*/
unsigned __int64 XB3GetExecutableSize()
{
  return s_executableSize;
}

/*
==============
XB3GetNumXMemHeaps
==============
*/
__int64 XB3GetNumXMemHeaps()
{
  return 12i64;
}

/*
==============
XB3GetTotalMem
==============
*/
__int64 XB3GetTotalMem()
{
  int v1; 
  __int64 v2; 

  v1 = 80;
  TitleMemoryStatus(&v1);
  return v2;
}

/*
==============
XB3GetUntrackedMem
==============
*/
unsigned __int64 XB3GetUntrackedMem()
{
  unsigned __int64 v0; 
  unsigned __int64 v1; 
  int v3; 
  unsigned __int64 v4; 
  __int64 v5; 

  v3 = 80;
  TitleMemoryStatus(&v3);
  v0 = v4;
  v3 = 80;
  TitleMemoryStatus(&v3);
  v1 = Mem_Paged_GetTotalPhysicalSize() + v5 + s_executableSize;
  if ( s_auxContextEmulation )
  {
    if ( v1 < 0x10000000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_xmemalloc.cpp", 188, ASSERT_TYPE_ASSERT, "(totalTracked >= DURANGO_EXPECTED_AUX_MEM_SIZE)", (const char *)&queryFormat, "totalTracked >= DURANGO_EXPECTED_AUX_MEM_SIZE") )
      __debugbreak();
    v1 -= 0x10000000i64;
  }
  if ( v1 >= v0 )
    return 0i64;
  else
    return v0 - v1;
}

/*
==============
XB3GetXMemHeapName
==============
*/
const char *XB3GetXMemHeapName(int heapIdx)
{
  __int64 v1; 
  int v4; 

  v1 = heapIdx;
  if ( (unsigned int)heapIdx >= 0xC )
  {
    v4 = 12;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_xmemalloc.cpp", 856, ASSERT_TYPE_ASSERT, "(unsigned)( heapIdx ) < (unsigned)( ( sizeof( *array_counter( s_xb3XMemHeapInfos ) ) + 0 ) )", "heapIdx doesn't index ARRAY_COUNT( s_xb3XMemHeapInfos )\n\t%i not in [0, %i)", heapIdx, v4) )
      __debugbreak();
  }
  return s_xb3XMemHeapInfos[v1].heapName;
}

/*
==============
XB3GetXMemHeapStats
==============
*/
__int64 XB3GetXMemHeapStats(int heapIdx, _XMEM_HEAP_STATISTICS *statistics, unsigned __int64 *heapHysteresis)
{
  __int64 v3; 
  __int64 v6; 
  __int64 isLargeHeap; 
  int *p_isLargeHeap; 
  XB3XMemHeapInfo *v9; 
  int v12; 

  v3 = heapIdx;
  if ( (unsigned int)heapIdx >= 0xC )
  {
    v12 = 12;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_xmemalloc.cpp", 864, ASSERT_TYPE_ASSERT, "(unsigned)( heapIdx ) < (unsigned)( ( sizeof( *array_counter( s_xb3XMemHeapInfos ) ) + 0 ) )", "heapIdx doesn't index ARRAY_COUNT( s_xb3XMemHeapInfos )\n\t%i not in [0, %i)", heapIdx, v12) )
      __debugbreak();
  }
  v6 = v3;
  isLargeHeap = (unsigned int)s_xb3XMemHeapInfos[v3].isLargeHeap;
  p_isLargeHeap = &s_xb3XMemHeapInfos[v3].isLargeHeap;
  v9 = &s_xb3XMemHeapInfos[v6];
  if ( !(unsigned int)XMemGetAllocationStatistics(s_xb3XMemHeapInfos[v6].gfxMemType, isLargeHeap, statistics) )
    return 0i64;
  *heapHysteresis = XMemGetAllocationHysteresis(v9->gfxMemType, (unsigned int)*p_isLargeHeap);
  return 1i64;
}

/*
==============
XB3MemAlloc_VerifyReserveHysteresis
==============
*/
void XB3MemAlloc_VerifyReserveHysteresis(void)
{
  unsigned int *p_hysteresisDurangoMB; 
  unsigned int i; 
  unsigned int v2; 
  unsigned __int64 v3; 
  unsigned __int64 v4; 
  int v5; 
  const char *v6; 
  const char *CommandLine; 
  int v8; 
  unsigned __int64 v9; 

  p_hysteresisDurangoMB = &s_xb3XMemHeapInfos[0].hysteresisDurangoMB;
  v8 = 32;
  for ( i = 0; i < 0xC; ++i )
  {
    if ( (unsigned int)XMemGetAllocationStatistics(*(p_hysteresisDurangoMB - 3), *(p_hysteresisDurangoMB - 2), &v8) )
    {
      v2 = Sys_GetXB3ConsoleType() == XB3_CONSOLE_DURANGO ? *p_hysteresisDurangoMB : p_hysteresisDurangoMB[1];
      v3 = v9;
      v4 = v2 << 20;
      if ( v4 < v9 )
      {
        v5 = v9;
        if ( v9 > 0x7FFFFFFFFFFFFFFFi64 || v9 + 0x80000000 > 0xFFFFFFFF )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "int __cdecl truncate_cast_impl<int,unsigned __int64>(unsigned __int64)", "signed", (int)v9, "unsigned", v9) )
            __debugbreak();
          v3 = v9;
        }
        v6 = j_va("XMem Hysteresis failure '%s' - %u/%u", *(const char **)(p_hysteresisDurangoMB + 3), v3, (unsigned int)v4);
        StatMon_Warning(STATMON_CLASS_BUDGET, STATMON_TYPE_XMEM_HYSTERESIS, 3000, v6, v5);
        if ( !*(p_hysteresisDurangoMB - 1) )
        {
          Com_PrintError(16, "XMem Hysteresis check failed on heap '%s' (%d < %d)\n", *(const char **)(p_hysteresisDurangoMB + 3), (unsigned int)v4, v9);
          if ( *(p_hysteresisDurangoMB - 3) == 6 && r_deviceDebug->current.enabled )
          {
            CommandLine = Com_GetCommandLine();
            if ( !I_stristr(CommandLine, "r_deviceDebug 1") )
              Com_PrintError(16, "This may be specific to changes in how we segregate debug device allocations\n");
          }
          *(p_hysteresisDurangoMB - 1) = 1;
        }
      }
    }
    p_hysteresisDurangoMB += 8;
  }
}

/*
==============
XB3SystemMemoryStatus_Show_f
==============
*/

void __fastcall XB3SystemMemoryStatus_Show_f(double _XMM0_8, double _XMM1_8)
{
  unsigned int v26; 
  XB3XMemHeapInfo *v27; 
  ntl::nxheap_region *mp_parent_region; 
  ntl::nxheap *v107; 
  ntl::nxheap_region *p_mp_top_ptr; 
  ntl::nxheap *v109; 
  _BYTE *mp_start_ptr; 
  _BYTE *mp_top_ptr; 
  ntl::nxheap *v114; 
  ntl::nxheap_region *v117; 
  _BYTE *v118; 
  ntl::nxheap *v119; 
  _BYTE *mp_end_ptr; 
  char *fmt; 
  char *fmta; 
  char *fmtb; 
  char *fmtc; 
  char *fmtd; 
  __int64 v137; 
  double v138; 
  double v139; 
  double v140; 
  double v141; 
  double v142; 
  __int64 v143; 
  double v144; 
  __int64 v145; 
  double v146; 
  __int64 v147; 
  double v148; 
  double v149; 
  int v150; 
  int v151; 
  int v152; 
  __int64 v153; 
  __int64 v154; 
  int v155; 
  int v156; 
  int v157; 
  __int64 v158; 
  __int64 v159; 
  __int64 v160; 
  __int64 v161; 
  __int64 v162; 
  __int64 v163; 
  __int64 v164; 
  _MEMORYSTATUSEX Buffer; 
  char v169; 
  void *retaddr; 

  _RAX = &retaddr;
  __asm
  {
    vmovaps xmmword ptr [rax-28h], xmm6
    vmovaps xmmword ptr [rax-38h], xmm7
  }
  Buffer.dwLength = 64;
  Com_Printf(16, "Global Memory Status:\n");
  __asm
  {
    vmovss  xmm6, cs:__real@5f800000
    vmovss  xmm7, cs:__real@35800000
  }
  if ( GlobalMemoryStatusEx(&Buffer) )
  {
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, rax
    }
    if ( (Buffer.ullAvailVirtual & 0x8000000000000000ui64) != 0i64 )
      __asm { vaddss  xmm0, xmm0, xmm6 }
    __asm
    {
      vmovss  xmm2, cs:__real@30800000
      vmulss  xmm0, xmm0, xmm2
      vxorps  xmm1, xmm1, xmm1
      vcvtss2sd xmm5, xmm0, xmm0
      vcvtsi2ss xmm1, xmm1, rax
    }
    if ( (Buffer.ullTotalVirtual & 0x8000000000000000ui64) != 0i64 )
      __asm { vaddss  xmm1, xmm1, xmm6 }
    __asm
    {
      vmulss  xmm0, xmm1, xmm2
      vxorps  xmm1, xmm1, xmm1
      vcvtsi2ss xmm1, xmm1, rax
      vcvtss2sd xmm4, xmm0, xmm0
    }
    if ( (Buffer.ullAvailPhys & 0x8000000000000000ui64) != 0i64 )
      __asm { vaddss  xmm1, xmm1, xmm6 }
    __asm
    {
      vmulss  xmm0, xmm1, xmm7
      vxorps  xmm1, xmm1, xmm1
      vcvtsi2ss xmm1, xmm1, rax
      vcvtss2sd xmm2, xmm0, xmm0
    }
    if ( (Buffer.ullTotalPhys & 0x8000000000000000ui64) != 0i64 )
      __asm { vaddss  xmm1, xmm1, xmm6 }
    __asm
    {
      vmovsd  [rsp+190h+var_160], xmm5
      vmulss  xmm0, xmm1, xmm7
      vcvtss2sd xmm3, xmm0, xmm0
      vmovsd  [rsp+190h+var_168], xmm4
      vmovq   r9, xmm3
      vmovsd  [rsp+190h+fmt], xmm2
    }
    Com_Printf(16, "\tMemory in use:         %ld%%\n\tTotal physical (MB):  %10.4f\n\tFree physical (MB):   %10.4f\n\tTotal virtual (GB):   %10.4f\n\tFree virtual (GB):    %10.4f\n", Buffer.dwMemoryLoad, *(double *)&_XMM3, *(double *)&fmt, v138, v144);
  }
  else
  {
    Com_Printf(16, "\tNot available.\n");
  }
  Com_Printf(16, "\n");
  Com_Printf(16, "XMem Heap Status:\n");
  v26 = 0;
  v152 = 32;
  v27 = s_xb3XMemHeapInfos;
  __asm { vmovaps [rsp+190h+var_40], xmm8 }
  do
  {
    if ( v26 >= 0xC )
    {
      LODWORD(v143) = 12;
      LODWORD(v137) = v26;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_xmemalloc.cpp", 864, ASSERT_TYPE_ASSERT, "(unsigned)( heapIdx ) < (unsigned)( ( sizeof( *array_counter( s_xb3XMemHeapInfos ) ) + 0 ) )", "heapIdx doesn't index ARRAY_COUNT( s_xb3XMemHeapInfos )\n\t%i not in [0, %i)", v137, v143) )
        __debugbreak();
    }
    if ( (unsigned int)XMemGetAllocationStatistics(v27->gfxMemType, (unsigned int)v27->isLargeHeap, &v152) )
    {
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, rax
      }
      if ( XMemGetAllocationHysteresis(v27->gfxMemType, (unsigned int)v27->isLargeHeap) < 0 )
        __asm { vaddss  xmm0, xmm0, xmm6 }
      __asm
      {
        vmulss  xmm0, xmm0, xmm7
        vcvtss2sd xmm8, xmm0, xmm0
      }
      if ( v26 >= 0xC )
      {
        LODWORD(v143) = 12;
        LODWORD(v137) = v26;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_xmemalloc.cpp", 856, ASSERT_TYPE_ASSERT, "(unsigned)( heapIdx ) < (unsigned)( ( sizeof( *array_counter( s_xb3XMemHeapInfos ) ) + 0 ) )", "heapIdx doesn't index ARRAY_COUNT( s_xb3XMemHeapInfos )\n\t%i not in [0, %i)", v137, v143) )
          __debugbreak();
      }
      __asm
      {
        vxorps  xmm0, xmm0, xmm0
        vcvtsi2ss xmm0, xmm0, rax
      }
      if ( v154 < 0 )
        __asm { vaddss  xmm0, xmm0, xmm6 }
      __asm
      {
        vmulss  xmm0, xmm0, xmm7
        vxorps  xmm1, xmm1, xmm1
        vcvtss2sd xmm2, xmm0, xmm0
        vcvtsi2ss xmm1, xmm1, rax
      }
      if ( v153 < 0 )
        __asm { vaddss  xmm1, xmm1, xmm6 }
      LODWORD(v147) = v156;
      LODWORD(v143) = v155;
      __asm
      {
        vmulss  xmm0, xmm1, xmm7
        vcvtss2sd xmm3, xmm0, xmm0
        vmovsd  [rsp+190h+var_168], xmm8
        vmovq   r9, xmm3
        vmovsd  [rsp+190h+fmt], xmm2
      }
      Com_Printf(16, "\tXMem Type: %s\n\t\tMax Size (MB):   %10.4f\n\t\tMin Used (MB):   %10.4f\n\t\tHysteresis (MB): %10.4f\n\t\tAlloc Count:     %ld\n\t\tFreeCount:\t      %ld\n", v27->heapName, *(double *)&_XMM3, *(double *)&fmta, v139, v143, v147);
    }
    ++v26;
    ++v27;
  }
  while ( (__int64)v27 < (__int64)&unk_1486CD020 );
  Com_Printf(16, "\n");
  Com_Printf(16, "Apu Memory Status:\n");
  _XMM0_8 = ApuHeapGetState_0(&v150, 1i64);
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rax
    vmulss  xmm1, xmm0, xmm7
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rax
    vcvtss2sd xmm5, xmm1, xmm1
    vmulss  xmm1, xmm0, xmm7
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rax
    vcvtss2sd xmm4, xmm1, xmm1
    vmulss  xmm1, xmm0, xmm7
    vcvtss2sd xmm3, xmm1, xmm1
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rax
  }
  LODWORD(v143) = v151;
  __asm
  {
    vmulss  xmm1, xmm0, xmm7
    vcvtss2sd xmm2, xmm1, xmm1
    vmovsd  [rsp+190h+var_168], xmm5
    vmovq   r8, xmm2
    vmovq   r9, xmm3
    vmovsd  [rsp+190h+fmt], xmm4
  }
  Com_Printf(16, "\tAPU Cached\n\t\tAlloc Size (MB): %10.4f\n\t\tFree Size (MB):  %10.4f\n\t\tLost Size (MB):  %10.4f\n\t\tMax Block Size (MB): %10.4f\n\t\tAlloc Count:     %ld\n", *(double *)&_XMM2, *(double *)&_XMM3, *(double *)&fmtb, v140, v143);
  *(double *)&_XMM0 = ApuHeapGetState_0(&v150, 2i64);
  __asm
  {
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rax
    vmulss  xmm1, xmm0, xmm7
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rax
    vcvtss2sd xmm5, xmm1, xmm1
    vmulss  xmm1, xmm0, xmm7
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rax
    vcvtss2sd xmm4, xmm1, xmm1
    vmulss  xmm1, xmm0, xmm7
    vcvtss2sd xmm3, xmm1, xmm1
    vxorps  xmm0, xmm0, xmm0
    vcvtsi2ss xmm0, xmm0, rax
  }
  LODWORD(v145) = v151;
  __asm
  {
    vmulss  xmm1, xmm0, xmm7
    vcvtss2sd xmm2, xmm1, xmm1
    vmovsd  [rsp+190h+var_168], xmm5
    vmovq   r8, xmm2
    vmovq   r9, xmm3
    vmovsd  [rsp+190h+fmt], xmm4
  }
  Com_Printf(16, "\tAPU Non-Cached\n\t\tAlloc Size (MB): %10.4f\n\t\tFree Size (MB):  %10.4f\n\t\tLost Size (MB):  %10.4f\n\t\tMax Block Size (MB): %10.4f\n\t\tAlloc Count:     %ld\n", *(double *)&_XMM2, *(double *)&_XMM3, *(double *)&fmtc, v141, v145);
  Com_Printf(16, "\n");
  v157 = 80;
  Com_Printf(16, "Title Memory Status:\n");
  if ( (unsigned int)TitleMemoryStatus(&v157) )
  {
    __asm
    {
      vmovaps [rsp+190h+var_50], xmm9
      vmovaps [rsp+190h+var_60], xmm10
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, rax
    }
    if ( v164 < 0 )
      __asm { vaddss  xmm0, xmm0, xmm6 }
    __asm
    {
      vmulss  xmm0, xmm0, xmm7
      vxorps  xmm1, xmm1, xmm1
      vcvtss2sd xmm10, xmm0, xmm0
      vcvtsi2ss xmm1, xmm1, rax
    }
    if ( v163 < 0 )
      __asm { vaddss  xmm1, xmm1, xmm6 }
    __asm
    {
      vmulss  xmm0, xmm1, xmm7
      vxorps  xmm1, xmm1, xmm1
      vcvtsi2ss xmm1, xmm1, rax
      vcvtss2sd xmm9, xmm0, xmm0
    }
    if ( v162 < 0 )
      __asm { vaddss  xmm1, xmm1, xmm6 }
    __asm
    {
      vmulss  xmm0, xmm1, xmm7
      vxorps  xmm1, xmm1, xmm1
      vcvtsi2ss xmm1, xmm1, rax
      vcvtss2sd xmm8, xmm0, xmm0
    }
    if ( v161 < 0 )
      __asm { vaddss  xmm1, xmm1, xmm6 }
    __asm
    {
      vmulss  xmm0, xmm1, xmm7
      vxorps  xmm1, xmm1, xmm1
      vcvtsi2ss xmm1, xmm1, rax
      vcvtss2sd xmm5, xmm0, xmm0
    }
    if ( v160 < 0 )
      __asm { vaddss  xmm1, xmm1, xmm6 }
    __asm
    {
      vmulss  xmm0, xmm1, xmm7
      vxorps  xmm1, xmm1, xmm1
      vcvtsi2ss xmm1, xmm1, rax
      vcvtss2sd xmm4, xmm0, xmm0
    }
    if ( v159 < 0 )
      __asm { vaddss  xmm1, xmm1, xmm6 }
    __asm
    {
      vmulss  xmm0, xmm1, xmm7
      vxorps  xmm1, xmm1, xmm1
      vcvtsi2ss xmm1, xmm1, rax
      vcvtss2sd xmm3, xmm0, xmm0
    }
    if ( v158 < 0 )
      __asm { vaddss  xmm1, xmm1, xmm6 }
    __asm
    {
      vmovsd  [rsp+190h+var_150], xmm10
      vmovsd  [rsp+190h+var_158], xmm9
      vmulss  xmm0, xmm1, xmm7
      vcvtss2sd xmm2, xmm0, xmm0
      vmovsd  [rsp+190h+var_160], xmm8
      vmovsd  [rsp+190h+var_168], xmm5
      vmovq   r8, xmm2
      vmovq   r9, xmm3
      vmovsd  [rsp+190h+fmt], xmm4
    }
    Com_Printf(16, "\tTotal Memory (MB):    %10.4f\n\tAvailable (MB):       %10.4f\n\tLegacy Used (MB):     %10.4f\n\tLegacy Peak (MB):     %10.4f\n\tLegacy Avail (MB):    %10.4f\n\tTitle Used (MB):      %10.4f\n\tTitle Avail (MB):     %10.4f\n", *(double *)&_XMM2, *(double *)&_XMM3, *(double *)&fmtd, v142, v146, v148, v149);
    __asm
    {
      vmovaps xmm10, [rsp+190h+var_60]
      vmovaps xmm9, [rsp+190h+var_50]
    }
  }
  else
  {
    Com_Printf(16, "\tNot available.\n");
  }
  Com_Printf(16, "\n");
  Com_Printf(16, "Auxiliary Memory Status:\n");
  if ( s_auxContext )
  {
    mp_parent_region = s_auxMemHeap.m_heap.mp_parent_region;
    v107 = s_auxMemHeap.m_heap.mp_parent_region->mp_heap[0];
    if ( v107 )
      p_mp_top_ptr = (ntl::nxheap_region *)&v107->mp_top_ptr;
    else
      p_mp_top_ptr = s_auxMemHeap.m_heap.mp_parent_region;
    v109 = s_auxMemHeap.m_heap.mp_parent_region->mp_heap[1];
    mp_start_ptr = p_mp_top_ptr->mp_start_ptr;
    if ( v109 )
      mp_top_ptr = v109->mp_top_ptr;
    else
      mp_top_ptr = s_auxMemHeap.m_heap.mp_parent_region->mp_end_ptr;
    if ( mp_top_ptr < mp_start_ptr )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\nxheap\\nxheap.inl", 57, ASSERT_TYPE_ASSERT, "( top >= bot )", (const char *)&queryFormat, "top >= bot") )
        __debugbreak();
      mp_parent_region = s_auxMemHeap.m_heap.mp_parent_region;
    }
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, rdi
    }
    if ( (signed __int64)(s_auxMemHeap.m_heap.m_free_fragment_mem + mp_top_ptr - mp_start_ptr) < 0 )
      __asm { vaddss  xmm0, xmm0, xmm6 }
    v114 = mp_parent_region->mp_heap[0];
    __asm
    {
      vmulss  xmm0, xmm0, xmm7
      vcvtss2sd xmm8, xmm0, xmm0
    }
    if ( v114 )
      v117 = (ntl::nxheap_region *)&v114->mp_top_ptr;
    else
      v117 = mp_parent_region;
    v118 = v117->mp_start_ptr;
    v119 = mp_parent_region->mp_heap[1];
    if ( v119 )
      mp_end_ptr = v119->mp_top_ptr;
    else
      mp_end_ptr = mp_parent_region->mp_end_ptr;
    if ( mp_end_ptr < v118 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\nxheap\\nxheap.inl", 57, ASSERT_TYPE_ASSERT, "( top >= bot )", (const char *)&queryFormat, "top >= bot") )
      __debugbreak();
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, rbx
    }
    if ( (signed __int64)(s_auxMemHeap.m_heap.m_used_mem + s_auxMemHeap.m_heap.m_free_fragment_mem + mp_end_ptr - v118) < 0 )
      __asm { vaddss  xmm0, xmm0, xmm6 }
    __asm
    {
      vmulss  xmm0, xmm0, xmm7
      vcvtss2sd xmm2, xmm0, xmm0
      vmovaps xmm3, xmm8
      vmovq   r8, xmm2
      vmovq   r9, xmm3
    }
    Com_Printf(16, "\tTotal Memory (MB):    %10.4f\n\tAvailable (MB):       %10.4f\n", *(double *)&_XMM2, *(double *)&_XMM3);
  }
  else
  {
    Com_Printf(16, "\tNOT ALLOCATED\n");
  }
  __asm { vmovaps xmm8, [rsp+190h+var_40] }
  _R11 = &v169;
  __asm
  {
    vmovaps xmm6, xmmword ptr [r11-10h]
    vmovaps xmm7, xmmword ptr [r11-20h]
  }
}

/*
==============
XB3XMemAlloc_Alloc
==============
*/
void *XB3XMemAlloc_Alloc(unsigned __int64 size, unsigned __int64 allocAttributes)
{
  Online_VideoStreaming *Instance; 
  void *v5; 
  unsigned __int64 v6; 
  unsigned __int64 v7; 
  char v8; 
  unsigned __int64 _Arg3; 
  unsigned __int16 v10; 

  Sys_ProfBeginNamedEvent(0xFF808000, "XB3XMemAlloc_Alloc");
  Instance = Online_VideoStreaming::GetInstance();
  v5 = Online_VideoStreaming::XB3XMemAlloc_TryMFTVideoAlloc(Instance, size, allocAttributes);
  if ( !v5 )
  {
    v5 = (void *)XMemAllocDefault_0(size, allocAttributes);
    v6 = (allocAttributes >> 29) & 0xF;
    if ( (unsigned int)(v6 - 1) > 5 )
    {
      v7 = allocAttributes >> 16;
      LODWORD(v6) = 255;
    }
    else
    {
      v7 = allocAttributes >> 16;
      if ( size > 0x20000 )
        LODWORD(v6) = 2989;
    }
    v8 = v7;
    _Arg3 = (unsigned int)v6;
    v10 = truncate_cast<unsigned short,unsigned __int64>((unsigned __int8)v7);
    if ( (Microsoft_Xbox_Tools_PIXEnableBits[0] & 1) != 0 )
      j_McTemplateU0hpxx(&PIX_ETW_PROVIDER_Context, &PIXTrackMemoryAllocation, v10, v5, size, _Arg3);
    if ( v8 == (char)0x80 && (allocAttributes & 0x3FFF) == 154 )
    {
      if ( size != 4096 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_xmemalloc.cpp", 298, ASSERT_TYPE_ASSERT, "(size == 4 * KB)", (const char *)&queryFormat, "size == 4 * KB", -2i64) )
        __debugbreak();
      memset_0(v5, 0, size);
    }
  }
  Sys_ProfEndNamedEvent();
  return v5;
}

/*
==============
XB3XMemAlloc_Alloc_D3DSwapChain
==============
*/
char *XB3XMemAlloc_Alloc_D3DSwapChain(unsigned __int64 size, unsigned __int64 allocAttributes)
{
  unsigned __int64 v4; 
  char *result; 
  unsigned __int64 v6; 
  char v7; 

  v7 = BYTE2(allocAttributes);
  if ( Sys_GetXB3ConsoleType() == XB3_CONSOLE_DURANGO )
  {
    Com_Printf(8, "D3DSwapChain XMemAlloc(%d): %d, %d, %d, %d, %d\n", size, allocAttributes & 0x3FFF, (unsigned __int16)allocAttributes >> 14, BYTE2(allocAttributes), (allocAttributes >> 24) & 0x1F, (allocAttributes >> 29) & 0xF);
    if ( size == 8937472 )
    {
      if ( (allocAttributes & 0x3FFF) != 19 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_xmemalloc.cpp", 375, ASSERT_TYPE_ASSERT, "(xattr->s.dwObjectType == 19)", (const char *)&queryFormat, "xattr->s.dwObjectType == 19") )
        __debugbreak();
      if ( (allocAttributes & 0xC000) != 0x8000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_xmemalloc.cpp", 376, ASSERT_TYPE_ASSERT, "(xattr->s.dwPageSize == 2)", (const char *)&queryFormat, "xattr->s.dwPageSize == XALLOC_PAGESIZE_4MB") )
        __debugbreak();
      if ( v7 != (char)0x80 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_xmemalloc.cpp", 377, ASSERT_TYPE_ASSERT, "(xattr->s.dwAllocatorId == eXALLOCAllocatorId_D3D)", (const char *)&queryFormat, "xattr->s.dwAllocatorId == eXALLOCAllocatorId_D3D") )
        __debugbreak();
      if ( (allocAttributes & 0x1F000000) != 0x10000000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_xmemalloc.cpp", 378, ASSERT_TYPE_ASSERT, "(xattr->s.dwAlignment == 0x10)", (const char *)&queryFormat, "xattr->s.dwAlignment == XALLOC_ALIGNMENT_64K") )
        __debugbreak();
      if ( (allocAttributes & 0x1E0000000i64) != 0x20000000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_xmemalloc.cpp", 379, ASSERT_TYPE_ASSERT, "(xattr->s.dwMemoryType == 0x1)", (const char *)&queryFormat, "xattr->s.dwMemoryType == XALLOC_MEMTYPE_GRAPHICS_WRITECOMBINE") )
        __debugbreak();
      if ( !s_caughtSwapBufferAllocations[0] )
      {
        if ( s_swapBufferChunkAlloc && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_xmemalloc.cpp", 384, ASSERT_TYPE_ASSERT, "(s_swapBufferChunkAlloc == nullptr)", (const char *)&queryFormat, "s_swapBufferChunkAlloc == nullptr") )
          __debugbreak();
        s_caughtSwapBufferAllocations[0] = 1;
        Com_Printf(8, "D3DSwapChain XMemAlloc(%d): Assuming the first 8.5MB allocation is for first swap buffer.\n", 8937472i64);
        v4 = 17956864i64;
        if ( s_catchDVRSwapChain )
          v4 = 35913728i64;
        result = (char *)XB3XMemAlloc_Alloc(v4, allocAttributes);
        s_swapBufferChunkAlloc = result + 8978432;
        return result;
      }
      if ( !s_caughtSwapBufferAllocations[1] )
      {
        if ( !s_swapBufferChunkAlloc && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_xmemalloc.cpp", 394, ASSERT_TYPE_ASSERT, "(s_swapBufferChunkAlloc)", (const char *)&queryFormat, "s_swapBufferChunkAlloc") )
          __debugbreak();
        s_caughtSwapBufferAllocations[1] = 1;
        Com_Printf(8, "D3DSwapChain XMemAlloc(%d): Assuming the second 8.5MB allocation is for second swap buffer.\n", 8937472i64);
LABEL_30:
        result = (char *)s_swapBufferChunkAlloc;
        s_swapBufferChunkAlloc = (char *)s_swapBufferChunkAlloc + 8978432;
        return result;
      }
      if ( !s_caughtSwapBufferAllocations[2] )
      {
        if ( !s_swapBufferChunkAlloc && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_xmemalloc.cpp", 403, ASSERT_TYPE_ASSERT, "(s_swapBufferChunkAlloc)", (const char *)&queryFormat, "s_swapBufferChunkAlloc") )
          __debugbreak();
        if ( !s_catchDVRSwapChain && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_xmemalloc.cpp", 404, ASSERT_TYPE_ASSERT, "(s_catchDVRSwapChain)", (const char *)&queryFormat, "s_catchDVRSwapChain") )
          __debugbreak();
        s_caughtSwapBufferAllocations[2] = 1;
        Com_Printf(8, "D3DSwapChain XMemAlloc(%d): Assuming the third 8.5MB allocation is for first dvr swap buffer.\n", 8937472i64);
        goto LABEL_30;
      }
      if ( !s_caughtSwapBufferAllocations[3] )
      {
        if ( !s_swapBufferChunkAlloc && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_xmemalloc.cpp", 413, ASSERT_TYPE_ASSERT, "(s_swapBufferChunkAlloc)", (const char *)&queryFormat, "s_swapBufferChunkAlloc") )
          __debugbreak();
        if ( !s_catchDVRSwapChain && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_xmemalloc.cpp", 414, ASSERT_TYPE_ASSERT, "(s_catchDVRSwapChain)", (const char *)&queryFormat, "s_catchDVRSwapChain") )
          __debugbreak();
        s_caughtSwapBufferAllocations[3] = 1;
        Com_Printf(8, "D3DSwapChain XMemAlloc(%d): Assuming the fourth 8.5MB allocation is for second dvr swap buffer.\n", 8937472i64);
        goto LABEL_30;
      }
    }
    return (char *)XB3XMemAlloc_Alloc(size, allocAttributes);
  }
  if ( Sys_GetXB3ConsoleType() != XB3_CONSOLE_SCORPIO && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_xmemalloc.cpp", 428, ASSERT_TYPE_ASSERT, "(Sys_GetXB3ConsoleType() == XB3_CONSOLE_SCORPIO)", (const char *)&queryFormat, "Sys_GetXB3ConsoleType() == XB3_CONSOLE_SCORPIO") )
    __debugbreak();
  Com_Printf(8, "D3DSwapChain XMemAlloc(%d): %d, %d, %d, %d, %d\n", size, allocAttributes & 0x3FFF, (unsigned __int16)allocAttributes >> 14, BYTE2(allocAttributes), (allocAttributes >> 24) & 0x1F, (allocAttributes >> 29) & 0xF);
  if ( size != 35733504 )
    return (char *)XB3XMemAlloc_Alloc(size, allocAttributes);
  if ( (allocAttributes & 0x3FFF) != 19 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_xmemalloc.cpp", 441, ASSERT_TYPE_ASSERT, "(xattr->s.dwObjectType == 19)", (const char *)&queryFormat, "xattr->s.dwObjectType == 19") )
    __debugbreak();
  if ( (allocAttributes & 0xC000) != 0x8000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_xmemalloc.cpp", 442, ASSERT_TYPE_ASSERT, "(xattr->s.dwPageSize == 2)", (const char *)&queryFormat, "xattr->s.dwPageSize == XALLOC_PAGESIZE_4MB") )
    __debugbreak();
  if ( v7 != (char)0x80 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_xmemalloc.cpp", 443, ASSERT_TYPE_ASSERT, "(xattr->s.dwAllocatorId == eXALLOCAllocatorId_D3D)", (const char *)&queryFormat, "xattr->s.dwAllocatorId == eXALLOCAllocatorId_D3D") )
    __debugbreak();
  if ( (allocAttributes & 0x1F000000) != 0x10000000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_xmemalloc.cpp", 444, ASSERT_TYPE_ASSERT, "(xattr->s.dwAlignment == 0x10)", (const char *)&queryFormat, "xattr->s.dwAlignment == XALLOC_ALIGNMENT_64K") )
    __debugbreak();
  if ( (allocAttributes & 0x1E0000000i64) != 0x20000000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_xmemalloc.cpp", 445, ASSERT_TYPE_ASSERT, "(xattr->s.dwMemoryType == 0x1)", (const char *)&queryFormat, "xattr->s.dwMemoryType == XALLOC_MEMTYPE_GRAPHICS_WRITECOMBINE") )
    __debugbreak();
  if ( s_caughtSwapBufferAllocations[0] )
  {
    if ( s_caughtSwapBufferAllocations[1] )
    {
      if ( s_caughtSwapBufferAllocations[2] )
      {
        if ( s_caughtSwapBufferAllocations[3] )
          return (char *)XB3XMemAlloc_Alloc(size, allocAttributes);
        if ( !s_swapBufferChunkAlloc && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_xmemalloc.cpp", 479, ASSERT_TYPE_ASSERT, "(s_swapBufferChunkAlloc)", (const char *)&queryFormat, "s_swapBufferChunkAlloc") )
          __debugbreak();
        if ( !s_catchDVRSwapChain && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_xmemalloc.cpp", 480, ASSERT_TYPE_ASSERT, "(s_catchDVRSwapChain)", (const char *)&queryFormat, "s_catchDVRSwapChain") )
          __debugbreak();
        s_caughtSwapBufferAllocations[3] = 1;
        Com_Printf(8, "D3DSwapChain XMemAlloc(%d): Assuming the fourth 34.5MB allocation is for second dvr swap buffer.\n", 35733504i64);
      }
      else
      {
        if ( !s_swapBufferChunkAlloc && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_xmemalloc.cpp", 469, ASSERT_TYPE_ASSERT, "(s_swapBufferChunkAlloc)", (const char *)&queryFormat, "s_swapBufferChunkAlloc") )
          __debugbreak();
        if ( !s_catchDVRSwapChain && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_xmemalloc.cpp", 470, ASSERT_TYPE_ASSERT, "(s_catchDVRSwapChain)", (const char *)&queryFormat, "s_catchDVRSwapChain") )
          __debugbreak();
        s_caughtSwapBufferAllocations[2] = 1;
        Com_Printf(8, "D3DSwapChain XMemAlloc(%d): Assuming the third 34.5MB allocation is for first dvr swap buffer.\n", 35733504i64);
      }
    }
    else
    {
      if ( !s_swapBufferChunkAlloc && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_xmemalloc.cpp", 460, ASSERT_TYPE_ASSERT, "(s_swapBufferChunkAlloc)", (const char *)&queryFormat, "s_swapBufferChunkAlloc") )
        __debugbreak();
      s_caughtSwapBufferAllocations[1] = 1;
      Com_Printf(8, "D3DSwapChain XMemAlloc(%d): Assuming the second 34.5MB allocation is for second swap buffer.\n", 35733504i64);
    }
    result = (char *)s_swapBufferChunkAlloc;
    s_swapBufferChunkAlloc = (char *)s_swapBufferChunkAlloc + 35782656;
    return result;
  }
  if ( s_swapBufferChunkAlloc && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_xmemalloc.cpp", 450, ASSERT_TYPE_ASSERT, "(s_swapBufferChunkAlloc == nullptr)", (const char *)&queryFormat, "s_swapBufferChunkAlloc == nullptr") )
    __debugbreak();
  s_caughtSwapBufferAllocations[0] = 1;
  Com_Printf(8, "D3DSwapChain XMemAlloc(%d): Assuming the first 34.5MB allocation is for first swap buffer.\n", 35733504i64);
  v6 = 71565312i64;
  if ( s_catchDVRSwapChain )
    v6 = 143130624i64;
  result = (char *)XB3XMemAlloc_Alloc(v6, allocAttributes);
  s_swapBufferChunkAlloc = result + 35782656;
  return result;
}

/*
==============
XB3XMemAlloc_Free
==============
*/
void XB3XMemAlloc_Free(void *mem, unsigned __int64 allocAttributes)
{
  Online_VideoStreaming *Instance; 
  unsigned __int16 v5; 
  unsigned __int8 v6; 

  v6 = BYTE2(allocAttributes);
  Sys_ProfBeginNamedEvent(0xFF808000, "XB3XMemAlloc_Free");
  if ( mem )
  {
    Instance = Online_VideoStreaming::GetInstance();
    if ( !Online_VideoStreaming::XB3XMemAlloc_TryMFTVideoFree(Instance, mem, allocAttributes) )
    {
      v5 = truncate_cast<unsigned short,unsigned __int64>(v6);
      if ( (Microsoft_Xbox_Tools_PIXEnableBits[0] & 1) != 0 )
        j_McTemplateU0hpxx(&PIX_ETW_PROVIDER_Context, &PIXTrackMemoryFree, v5, mem, 0i64, 0i64);
      XMemFreeDefault_0(mem, allocAttributes);
    }
  }
  Sys_ProfEndNamedEvent();
}

/*
==============
XB3XMemAlloc_Init
==============
*/
void XB3XMemAlloc_Init(void)
{
  HMODULE ModuleHandleW; 
  char *v1; 
  char *v2; 
  unsigned __int16 v3; 
  __int64 v4; 
  unsigned __int64 v5; 
  int v6; 

  ModuleHandleW = GetModuleHandleW(NULL);
  if ( !ModuleHandleW && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_xmemalloc.cpp", 203, ASSERT_TYPE_ASSERT, "(moduleBase)", (const char *)&queryFormat, "moduleBase") )
    __debugbreak();
  v1 = (char *)ModuleHandleW + *((int *)ModuleHandleW + 15);
  v2 = &v1[*((unsigned __int16 *)v1 + 10) + 32];
  v3 = *((_WORD *)v1 + 3);
  if ( v3 )
  {
    v4 = v3;
    v5 = s_executableSize;
    do
    {
      v6 = *(_DWORD *)v2;
      v2 += 40;
      v5 += (v6 + 4095) & 0xFFFFF000;
      --v4;
    }
    while ( v4 );
    s_executableSize = v5;
  }
  IWMem_Init();
  XB3AddExecutableToIWMem();
  IWMem_Allocator_CreateFixed(&s_iwMemMSAllocs, "MS Allocations", PhaseSpace, NULL, 0x1000000000000ui64);
  IWMem_Allocator_SetFlag(s_iwMemMSAllocs, UnknownOwnedRange);
  IWMem_Allocator_SetFlag(s_iwMemMSAllocs, FakeAddresses);
  IWMem_Allocator_CreateFixed(&s_iwMemSysFree, "Free System", NormalSpace, NULL, 0xFFFFFFFFFFFFFFFFui64);
  IWMem_Allocator_SetFlag(s_iwMemSysFree, RequiresLock);
  XB3XMem_AuxInit();
  XMemSetAllocationHooks(XB3XMemAlloc_Alloc, XB3XMemAlloc_Free);
}

/*
==============
XB3XMemAlloc_InitCommands
==============
*/
void XB3XMemAlloc_InitCommands(void)
{
  Cmd_AddCommandInternal("showSystemMemoryStatus", XB3SystemMemoryStatus_Show_f, &XB3SystemMemoryStatus_Show_f_VAR);
}

/*
==============
XB3XMemAlloc_ReserveHeaps
==============
*/
void XB3XMemAlloc_ReserveHeaps(void)
{
  XB3XMemHeapInfo *v0; 
  unsigned int i; 
  unsigned int hysteresisDurangoMB; 
  unsigned int gfxMemType; 
  const char *CommandLine; 
  const char *v5; 
  unsigned int v6; 
  __int64 v7; 
  __int64 v8; 
  __int64 v9; 

  v0 = s_xb3XMemHeapInfos;
  for ( i = 0; i < 0xC; ++i )
  {
    if ( Sys_GetXB3ConsoleType() == XB3_CONSOLE_DURANGO )
      hysteresisDurangoMB = v0->hysteresisDurangoMB;
    else
      hysteresisDurangoMB = v0->hysteresisScorpioMB;
    gfxMemType = v0->gfxMemType;
    if ( v0->gfxMemType == 5 )
    {
      CommandLine = Com_GetCommandLine();
      if ( I_stristr(CommandLine, "r_deviceDebug 1") )
      {
        hysteresisDurangoMB = 0;
        goto LABEL_12;
      }
      gfxMemType = v0->gfxMemType;
    }
    if ( gfxMemType == 6 )
    {
      v5 = Com_GetCommandLine();
      if ( !I_stristr(v5, "r_deviceDebug 1") )
        hysteresisDurangoMB = 0;
    }
LABEL_12:
    v6 = hysteresisDurangoMB << 20;
    if ( !(unsigned int)XMemSetAllocationHysteresis(v0->gfxMemType, (unsigned int)v0->isLargeHeap, v6) )
    {
      LODWORD(v9) = v6;
      LODWORD(v8) = v0->isLargeHeap;
      LODWORD(v7) = v0->gfxMemType;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_xmemalloc.cpp", 791, ASSERT_TYPE_ASSERT, "(success)", "%s\n\tFailed to XMemSetAllocationHysteresis(%d, %d, %d)", "success", v7, v8, v9) )
        __debugbreak();
    }
    if ( !(unsigned int)XMemPreallocateFreeSpace(v0->gfxMemType, (unsigned int)v0->isLargeHeap) )
    {
      LODWORD(v8) = v0->isLargeHeap;
      LODWORD(v7) = v0->gfxMemType;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_xmemalloc.cpp", 794, ASSERT_TYPE_ASSERT, "(success)", "%s\n\tFailed to XMemPreallocateFreeSpace(%d, %d)", "success", v7, v8) )
        __debugbreak();
    }
    ++v0;
  }
}

/*
==============
XB3XMemAlloc_SetD3DSwapChainHooks
==============
*/
void XB3XMemAlloc_SetD3DSwapChainHooks(int catchDVR)
{
  s_catchDVRSwapChain = catchDVR;
  XMemSetAllocationHooks(XB3XMemAlloc_Alloc_D3DSwapChain, XB3XMemAlloc_Free);
}

/*
==============
XB3XMemAlloc_SetDefaultHooks
==============
*/
void XB3XMemAlloc_SetDefaultHooks(void)
{
  XMemSetAllocationHooks(XB3XMemAlloc_Alloc, XB3XMemAlloc_Free);
}

/*
==============
XB3XMemAlloc_UpdateIWMemAllocations
==============
*/
void XB3XMemAlloc_UpdateIWMemAllocations(void)
{
  unsigned __int64 v0; 
  unsigned __int64 v1; 
  int v2[4]; 
  unsigned __int64 freeMem; 
  int v4; 
  unsigned __int64 v5; 

  v4 = 80;
  TitleMemoryStatus(&v4);
  v2[0] = 80;
  TitleMemoryStatus(v2);
  v0 = Mem_Paged_GetTotalPhysicalSize() + freeMem + s_executableSize;
  if ( s_auxContextEmulation )
  {
    if ( v0 < 0x10000000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_xmemalloc.cpp", 188, ASSERT_TYPE_ASSERT, "(totalTracked >= DURANGO_EXPECTED_AUX_MEM_SIZE)", (const char *)&queryFormat, "totalTracked >= DURANGO_EXPECTED_AUX_MEM_SIZE") )
      __debugbreak();
    v0 -= 0x10000000i64;
  }
  v2[0] = 80;
  v1 = v5 - v0;
  if ( v0 >= v5 )
    v1 = 0i64;
  TitleMemoryStatus(v2);
  IWMem_Clear(s_iwMemMSAllocs);
  if ( v1 )
  {
    IWMem_Profile_Push("Untracked");
    IWMem_Alloc(s_iwMemMSAllocs, (const void *)0x10, v1);
    IWMem_Profile_Pop();
  }
  IWMem_Allocator_SetFreeMem(s_iwMemSysFree, freeMem);
}

/*
==============
XB3XMemAlloc_ValidateD3DSwapChain
==============
*/
void XB3XMemAlloc_ValidateD3DSwapChain(void)
{
  int v0; 

  if ( (Sys_GetXB3ConsoleType() != XB3_CONSOLE_DURANGO || !r_mode->current.integer) && (Sys_GetXB3ConsoleType() != XB3_CONSOLE_SCORPIO || r_mode->current.integer == 4) )
  {
    if ( !s_caughtSwapBufferAllocations[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_xmemalloc.cpp", 507, ASSERT_TYPE_ASSERT, "(s_caughtSwapBufferAllocations[0])", (const char *)&queryFormat, "s_caughtSwapBufferAllocations[0]") )
      __debugbreak();
    if ( !s_caughtSwapBufferAllocations[1] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_xmemalloc.cpp", 508, ASSERT_TYPE_ASSERT, "(s_caughtSwapBufferAllocations[1])", (const char *)&queryFormat, "s_caughtSwapBufferAllocations[1]") )
      __debugbreak();
    v0 = 0;
    if ( s_caughtSwapBufferAllocations[2] == (s_catchDVRSwapChain == 0) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_xmemalloc.cpp", 509, ASSERT_TYPE_ASSERT, "(s_caughtSwapBufferAllocations[2] ^ !s_catchDVRSwapChain)", (const char *)&queryFormat, "s_caughtSwapBufferAllocations[2] ^ !s_catchDVRSwapChain") )
      __debugbreak();
    LOBYTE(v0) = s_catchDVRSwapChain == 0;
    if ( s_caughtSwapBufferAllocations[3] == v0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_xmemalloc.cpp", 510, ASSERT_TYPE_ASSERT, "(s_caughtSwapBufferAllocations[3] ^ !s_catchDVRSwapChain)", (const char *)&queryFormat, "s_caughtSwapBufferAllocations[3] ^ !s_catchDVRSwapChain") )
      __debugbreak();
  }
}

/*
==============
XB3XMem_AuxInit
==============
*/

void __fastcall XB3XMem_AuxInit(double _XMM0_8)
{
  __int128 v1; 
  unsigned __int64 v4; 
  const char *v6; 
  void *v7; 
  __int128 v8; 
  unsigned __int64 v11; 
  __int128 v13; 
  __int128 v14; 
  __int128 v15; 
  __int128 v16; 
  __int128 v17; 
  __int128 v18; 
  unsigned __int64 size; 
  void *ptr; 

  size = 0i64;
  ptr = NULL;
  if ( !s_auxMemHeap.m_heap.m_num_used_blocks )
  {
    if ( s_auxMemHeap.m_heap.m_used_mem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\nxheap\\nxheap.inl", 133, ASSERT_TYPE_ASSERT, "( m_used_mem == 0 )", (const char *)&queryFormat, "m_used_mem == 0") )
      __debugbreak();
    InitializeCriticalSection(&s_auxMemCS);
    s_auxContext = (void *)XMemGetAuxiliaryTitleMemory_0(&ptr, &size);
    if ( s_auxContext && size == 0x10000000 )
    {
      memset_0(ptr, 153, 0x10000000ui64);
      *(_QWORD *)&v1 = ptr;
      *((_QWORD *)&v1 + 1) = size;
      __asm
      {
        vpxor   xmm0, xmm0, xmm0
        vmovdqu [rbp+var_10], xmm0
      }
      if ( !ptr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\buffer_allocator.h", 71, ASSERT_TYPE_ASSERT, "( p_buffer_start )", (const char *)&queryFormat, "p_buffer_start", v13) )
        __debugbreak();
      v14 = v1;
      ntl::nxheap::shutdown(&s_auxMemHeap.m_heap);
      ntl::nxheap_region::shutdown(&s_auxMemHeap.m_region);
      if ( s_auxMemHeap.m_data.m_buffer )
      {
        if ( s_auxMemHeap.m_data.m_buffer != s_auxMemHeap.m_allocator.m_data.m_buffer && s_auxMemHeap.m_allocator.m_data.m_buffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\buffer_allocator.h", 64, ASSERT_TYPE_ASSERT, "( ( p_ptr == m_data.begin() ) || ( p_ptr == 0 ) || ( m_data.begin() == 0 ) )", (const char *)&queryFormat, "( p_ptr == m_data.begin() ) || ( p_ptr == NULL ) || ( m_data.begin() == NULL )") )
          __debugbreak();
        s_auxMemHeap.m_data.m_buffer = NULL;
        s_auxMemHeap.m_data.m_size = 0i64;
      }
      __asm { vmovups xmm0, [rbp+var_10] }
      v4 = size;
      __asm { vmovups xmmword ptr cs:s_auxMemHeap.m_allocator.m_data.m_buffer, xmm0 }
      ntl::nxheap::shutdown(&s_auxMemHeap.m_heap);
      ntl::nxheap_region::shutdown(&s_auxMemHeap.m_region);
      if ( s_auxMemHeap.m_data.m_buffer )
      {
        if ( s_auxMemHeap.m_data.m_buffer != s_auxMemHeap.m_allocator.m_data.m_buffer && s_auxMemHeap.m_allocator.m_data.m_buffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\buffer_allocator.h", 64, ASSERT_TYPE_ASSERT, "( ( p_ptr == m_data.begin() ) || ( p_ptr == 0 ) || ( m_data.begin() == 0 ) )", (const char *)&queryFormat, "( p_ptr == m_data.begin() ) || ( p_ptr == NULL ) || ( m_data.begin() == NULL )") )
          __debugbreak();
        s_auxMemHeap.m_data.m_buffer = NULL;
        s_auxMemHeap.m_data.m_size = 0i64;
      }
      if ( v4 > s_auxMemHeap.m_allocator.m_data.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\buffer_allocator.h", 56, ASSERT_TYPE_ASSERT, "( size_bytes <= m_data.size_in_bytes() )", (const char *)&queryFormat, "size_bytes <= m_data.size_in_bytes()") )
        __debugbreak();
      *(_QWORD *)&v15 = s_auxMemHeap.m_allocator.m_data.m_buffer;
      *((_QWORD *)&v15 + 1) = v4;
      __asm
      {
        vmovups xmm0, [rbp+var_10]
        vmovups xmmword ptr cs:s_auxMemHeap.baseclass_0.m_data.m_buffer, xmm0
      }
      if ( s_auxMemHeap.m_region.mp_start_ptr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\heap_allocator.h", 206, ASSERT_TYPE_ASSERT, "( !m_region.is_inited() )", (const char *)&queryFormat, "!m_region.is_inited()") )
        __debugbreak();
      ntl::nxheap_region::init(&s_auxMemHeap.m_region, s_auxMemHeap.m_data.m_buffer, s_auxMemHeap.m_data.m_size);
      if ( s_auxMemHeap.m_heap.mp_parent_region && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\heap_allocator.h", 209, ASSERT_TYPE_ASSERT, "( !heap().is_inited() )", (const char *)&queryFormat, "!heap().is_inited()") )
        __debugbreak();
      ntl::nxheap::init(&s_auxMemHeap.m_heap, &s_auxMemHeap.m_region, DIR_BOTTOM_UP);
      v6 = "Allocated 256MB auxiliary physical memory\n";
    }
    else if ( Sys_GetXB3ConsoleType() == XB3_CONSOLE_DURANGO )
    {
      s_auxContext = (void *)0xDEADBEEFDEADBEEFi64;
      v7 = VirtualAlloc(NULL, 0x10000000ui64, 0x60001000u, 4u);
      size = 0x10000000i64;
      ptr = v7;
      s_auxContextEmulation = 1;
      memset_0(v7, 153, 0x10000000ui64);
      *(_QWORD *)&v8 = ptr;
      *((_QWORD *)&v8 + 1) = size;
      __asm
      {
        vpxor   xmm0, xmm0, xmm0
        vmovdqu [rbp+var_10], xmm0
      }
      if ( !ptr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\buffer_allocator.h", 71, ASSERT_TYPE_ASSERT, "( p_buffer_start )", (const char *)&queryFormat, "p_buffer_start", v16) )
        __debugbreak();
      v17 = v8;
      ntl::nxheap::shutdown(&s_auxMemHeap.m_heap);
      ntl::nxheap_region::shutdown(&s_auxMemHeap.m_region);
      if ( s_auxMemHeap.m_data.m_buffer )
      {
        if ( s_auxMemHeap.m_data.m_buffer != s_auxMemHeap.m_allocator.m_data.m_buffer && s_auxMemHeap.m_allocator.m_data.m_buffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\buffer_allocator.h", 64, ASSERT_TYPE_ASSERT, "( ( p_ptr == m_data.begin() ) || ( p_ptr == 0 ) || ( m_data.begin() == 0 ) )", (const char *)&queryFormat, "( p_ptr == m_data.begin() ) || ( p_ptr == NULL ) || ( m_data.begin() == NULL )") )
          __debugbreak();
        s_auxMemHeap.m_data.m_buffer = NULL;
        s_auxMemHeap.m_data.m_size = 0i64;
      }
      __asm { vmovups xmm0, [rbp+var_10] }
      v11 = size;
      __asm { vmovups xmmword ptr cs:s_auxMemHeap.m_allocator.m_data.m_buffer, xmm0 }
      ntl::nxheap::shutdown(&s_auxMemHeap.m_heap);
      ntl::nxheap_region::shutdown(&s_auxMemHeap.m_region);
      if ( s_auxMemHeap.m_data.m_buffer )
      {
        if ( s_auxMemHeap.m_data.m_buffer != s_auxMemHeap.m_allocator.m_data.m_buffer && s_auxMemHeap.m_allocator.m_data.m_buffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\buffer_allocator.h", 64, ASSERT_TYPE_ASSERT, "( ( p_ptr == m_data.begin() ) || ( p_ptr == 0 ) || ( m_data.begin() == 0 ) )", (const char *)&queryFormat, "( p_ptr == m_data.begin() ) || ( p_ptr == NULL ) || ( m_data.begin() == NULL )") )
          __debugbreak();
        s_auxMemHeap.m_data.m_buffer = NULL;
        s_auxMemHeap.m_data.m_size = 0i64;
      }
      if ( v11 > s_auxMemHeap.m_allocator.m_data.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\buffer_allocator.h", 56, ASSERT_TYPE_ASSERT, "( size_bytes <= m_data.size_in_bytes() )", (const char *)&queryFormat, "size_bytes <= m_data.size_in_bytes()") )
        __debugbreak();
      *(_QWORD *)&v18 = s_auxMemHeap.m_allocator.m_data.m_buffer;
      *((_QWORD *)&v18 + 1) = v11;
      __asm
      {
        vmovups xmm0, [rbp+var_10]
        vmovups xmmword ptr cs:s_auxMemHeap.baseclass_0.m_data.m_buffer, xmm0
      }
      if ( s_auxMemHeap.m_region.mp_start_ptr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\heap_allocator.h", 206, ASSERT_TYPE_ASSERT, "( !m_region.is_inited() )", (const char *)&queryFormat, "!m_region.is_inited()") )
        __debugbreak();
      ntl::nxheap_region::init(&s_auxMemHeap.m_region, s_auxMemHeap.m_data.m_buffer, s_auxMemHeap.m_data.m_size);
      if ( s_auxMemHeap.m_heap.mp_parent_region && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\heap_allocator.h", 209, ASSERT_TYPE_ASSERT, "( !heap().is_inited() )", (const char *)&queryFormat, "!heap().is_inited()") )
        __debugbreak();
      ntl::nxheap::init(&s_auxMemHeap.m_heap, &s_auxMemHeap.m_region, DIR_BOTTOM_UP);
      OutputDebugStringA("Allocated 256MB auxiliary physical memory from the OS!\n");
      v6 = "WARNING: Failed to allocate auxiliary memory on base XB3 hardware!  Please make sure this is configured in the appxmanifest and that you have re-registered the game since the last appxmanifest update.";
    }
    else
    {
      if ( Sys_GetXB3ConsoleType() != XB3_CONSOLE_SCORPIO )
        goto LABEL_61;
      v6 = "No auxiliary memory allocated on Scorpio hardware\n";
    }
    OutputDebugStringA(v6);
LABEL_61:
    if ( s_auxContext )
    {
      if ( !ptr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_xmemalloc.cpp", 634, ASSERT_TYPE_ASSERT, "(auxBuffer)", (const char *)&queryFormat, "auxBuffer") )
        __debugbreak();
      if ( !size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_xmemalloc.cpp", 635, ASSERT_TYPE_ASSERT, "(auxMemSize)", (const char *)&queryFormat, "auxMemSize") )
        __debugbreak();
      IWMem_Allocator_CreateFixed(&s_iwMemAuxMem, "AuxMem", (IWMemAllocatorType)6, ptr, size);
    }
    return;
  }
  if ( !s_auxMemHeap.m_heap.m_used_mem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\nxheap\\nxheap.inl", 138, ASSERT_TYPE_ASSERT, "( m_used_mem != 0 )", (const char *)&queryFormat, "m_used_mem != 0") )
    __debugbreak();
}

/*
==============
XB3XMem_AuxMemAlloc
==============
*/
unsigned __int8 *XB3XMem_AuxMemAlloc(unsigned __int64 allocSize, unsigned __int64 allocAlignment)
{
  unsigned __int64 v4; 
  const void *v5; 
  const void *v6; 

  if ( !allocSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_xmemalloc.cpp", 649, ASSERT_TYPE_ASSERT, "(allocSize)", (const char *)&queryFormat, "allocSize") )
    __debugbreak();
  if ( !s_auxContext )
    return 0i64;
  EnterCriticalSection(&s_auxMemCS);
  v4 = 4i64;
  if ( allocAlignment > 4 )
    v4 = allocAlignment;
  v5 = ntl::nxheap::allocate(&s_auxMemHeap.m_heap, allocSize, v4, 0);
  v6 = v5;
  if ( v5 )
    IWMem_Alloc(s_iwMemAuxMem, v5, allocSize);
  LeaveCriticalSection(&s_auxMemCS);
  return (unsigned __int8 *)v6;
}

/*
==============
XB3XMem_DumpAuxHeap
==============
*/
void XB3XMem_DumpAuxHeap(void)
{
  if ( s_auxContext )
    IWMem_DumpAllocatorProfile(s_iwMemAuxMem);
}

/*
==============
XB3XMem_GetAuxMemFreeBytes
==============
*/
unsigned __int64 XB3XMem_GetAuxMemFreeBytes()
{
  ntl::nxheap *v0; 
  ntl::nxheap_region *p_mp_top_ptr; 
  ntl::nxheap *v2; 
  void *mp_start_ptr; 
  void *mp_top_ptr; 

  if ( !s_auxContext )
    return 0i64;
  v0 = s_auxMemHeap.m_heap.mp_parent_region->mp_heap[0];
  if ( v0 )
    p_mp_top_ptr = (ntl::nxheap_region *)&v0->mp_top_ptr;
  else
    p_mp_top_ptr = s_auxMemHeap.m_heap.mp_parent_region;
  v2 = s_auxMemHeap.m_heap.mp_parent_region->mp_heap[1];
  mp_start_ptr = p_mp_top_ptr->mp_start_ptr;
  if ( v2 )
    mp_top_ptr = v2->mp_top_ptr;
  else
    mp_top_ptr = s_auxMemHeap.m_heap.mp_parent_region->mp_end_ptr;
  if ( mp_top_ptr < mp_start_ptr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\nxheap\\nxheap.inl", 57, ASSERT_TYPE_ASSERT, "( top >= bot )", (const char *)&queryFormat, "top >= bot") )
    __debugbreak();
  return (unsigned __int64)mp_top_ptr + s_auxMemHeap.m_heap.m_free_fragment_mem - (_QWORD)mp_start_ptr;
}

/*
==============
XB3XMem_HasAuxMem
==============
*/
bool XB3XMem_HasAuxMem()
{
  return s_auxContext != NULL;
}

/*
==============
XB3XMem_IsInAuxMem
==============
*/
bool XB3XMem_IsInAuxMem(const void *ptr)
{
  return s_auxContext && ntl::nxheap::is_ptr_in_region(&s_auxMemHeap.m_heap, ptr);
}

/*
==============
XB3XMem_PrintAuxMemoryStatus
==============
*/

void __fastcall XB3XMem_PrintAuxMemoryStatus(double _XMM0_8)
{
  ntl::nxheap_region *mp_parent_region; 
  ntl::nxheap *v3; 
  ntl::nxheap_region *p_mp_top_ptr; 
  ntl::nxheap *v5; 
  void *mp_start_ptr; 
  void *mp_top_ptr; 
  ntl::nxheap *v10; 
  ntl::nxheap_region *v13; 
  ntl::nxheap *v14; 
  void *v15; 
  void *mp_end_ptr; 

  Com_Printf(16, "Auxiliary Memory Status:\n");
  if ( s_auxContext )
  {
    mp_parent_region = s_auxMemHeap.m_heap.mp_parent_region;
    v3 = s_auxMemHeap.m_heap.mp_parent_region->mp_heap[0];
    __asm { vmovaps [rsp+48h+var_18], xmm8 }
    if ( v3 )
      p_mp_top_ptr = (ntl::nxheap_region *)&v3->mp_top_ptr;
    else
      p_mp_top_ptr = s_auxMemHeap.m_heap.mp_parent_region;
    v5 = s_auxMemHeap.m_heap.mp_parent_region->mp_heap[1];
    mp_start_ptr = p_mp_top_ptr->mp_start_ptr;
    if ( v5 )
      mp_top_ptr = v5->mp_top_ptr;
    else
      mp_top_ptr = s_auxMemHeap.m_heap.mp_parent_region->mp_end_ptr;
    if ( mp_top_ptr < mp_start_ptr )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\nxheap\\nxheap.inl", 57, ASSERT_TYPE_ASSERT, "( top >= bot )", (const char *)&queryFormat, "top >= bot") )
        __debugbreak();
      mp_parent_region = s_auxMemHeap.m_heap.mp_parent_region;
    }
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, rax
    }
    if ( (__int64)((__int64)mp_top_ptr + s_auxMemHeap.m_heap.m_free_fragment_mem - (_QWORD)mp_start_ptr) < 0 )
      __asm { vaddss  xmm0, xmm0, cs:__real@5f800000 }
    v10 = mp_parent_region->mp_heap[0];
    __asm
    {
      vmulss  xmm0, xmm0, cs:__real@35800000
      vcvtss2sd xmm8, xmm0, xmm0
    }
    if ( v10 )
      v13 = (ntl::nxheap_region *)&v10->mp_top_ptr;
    else
      v13 = mp_parent_region;
    v14 = mp_parent_region->mp_heap[1];
    v15 = v13->mp_start_ptr;
    if ( v14 )
      mp_end_ptr = v14->mp_top_ptr;
    else
      mp_end_ptr = mp_parent_region->mp_end_ptr;
    if ( mp_end_ptr < v15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\nxheap\\nxheap.inl", 57, ASSERT_TYPE_ASSERT, "( top >= bot )", (const char *)&queryFormat, "top >= bot") )
      __debugbreak();
    __asm
    {
      vxorps  xmm0, xmm0, xmm0
      vcvtsi2ss xmm0, xmm0, rax
    }
    if ( (__int64)((__int64)mp_end_ptr + s_auxMemHeap.m_heap.m_used_mem + s_auxMemHeap.m_heap.m_free_fragment_mem - (_QWORD)v15) < 0 )
      __asm { vaddss  xmm0, xmm0, cs:__real@5f800000 }
    __asm
    {
      vmulss  xmm0, xmm0, cs:__real@35800000
      vcvtss2sd xmm2, xmm0, xmm0
      vmovaps xmm3, xmm8
      vmovq   r8, xmm2
      vmovq   r9, xmm3
      vmovaps xmm8, [rsp+48h+var_18]
    }
    Com_Printf(16, "\tTotal Memory (MB):    %10.4f\n\tAvailable (MB):       %10.4f\n", *(double *)&_XMM2, *(double *)&_XMM3);
  }
  else
  {
    Com_Printf(16, "\tNOT ALLOCATED\n");
  }
}


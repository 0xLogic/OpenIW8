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
void XB3SystemMemoryStatus_Show_f()
{
  __int128 v0; 
  __int128 v1; 
  float ullAvailVirtual; 
  float v3; 
  double v4; 
  float ullTotalVirtual; 
  float v6; 
  float v7; 
  float ullAvailPhys; 
  float v9; 
  double v10; 
  float v11; 
  float ullTotalPhys; 
  float v13; 
  unsigned int v14; 
  XB3XMemHeapInfo *v15; 
  __int64 AllocationHysteresis; 
  float v17; 
  float v18; 
  double v19; 
  float v20; 
  float v21; 
  float v22; 
  float v23; 
  float v24; 
  float v25; 
  double v26; 
  float v27; 
  float v28; 
  float v29; 
  float v30; 
  float v31; 
  double v32; 
  float v33; 
  float v34; 
  float v35; 
  float v36; 
  float v37; 
  double v38; 
  float v39; 
  float v40; 
  float v41; 
  float v42; 
  float v43; 
  double v44; 
  float v45; 
  float v46; 
  float v47; 
  double v48; 
  float v49; 
  float v50; 
  float v51; 
  double v52; 
  float v53; 
  float v54; 
  float v55; 
  double v56; 
  float v57; 
  float v58; 
  float v59; 
  ntl::nxheap_region *mp_parent_region; 
  ntl::nxheap *v61; 
  ntl::nxheap_region *p_mp_top_ptr; 
  ntl::nxheap *v63; 
  char *mp_start_ptr; 
  char *mp_top_ptr; 
  char *v66; 
  float v67; 
  float v68; 
  ntl::nxheap *v69; 
  double v70; 
  ntl::nxheap_region *v71; 
  _BYTE *v72; 
  ntl::nxheap *v73; 
  _BYTE *mp_end_ptr; 
  unsigned __int64 v75; 
  float v76; 
  float v77; 
  __int64 v78; 
  __int64 v79; 
  __int64 v80; 
  __int64 v81; 
  unsigned int v82; 
  unsigned int v83; 
  unsigned int v84; 
  unsigned int v85; 
  int v86; 
  int v87; 
  __int64 v88; 
  __int64 v89; 
  int v90; 
  int v91; 
  int v92; 
  __int64 v93; 
  __int64 v94; 
  __int64 v95; 
  __int64 v96; 
  __int64 v97; 
  __int64 v98; 
  __int64 v99; 
  _MEMORYSTATUSEX Buffer; 
  __int128 v101; 
  __int128 v102; 

  Buffer.dwLength = 64;
  Com_Printf(16, "Global Memory Status:\n");
  if ( GlobalMemoryStatusEx(&Buffer) )
  {
    ullAvailVirtual = (float)(__int64)Buffer.ullAvailVirtual;
    if ( (Buffer.ullAvailVirtual & 0x8000000000000000ui64) != 0i64 )
    {
      v3 = (float)(__int64)Buffer.ullAvailVirtual;
      ullAvailVirtual = v3 + 1.8446744e19;
    }
    v4 = (float)(ullAvailVirtual * 9.3132257e-10);
    ullTotalVirtual = (float)(__int64)Buffer.ullTotalVirtual;
    if ( (Buffer.ullTotalVirtual & 0x8000000000000000ui64) != 0i64 )
    {
      v6 = (float)(__int64)Buffer.ullTotalVirtual;
      ullTotalVirtual = v6 + 1.8446744e19;
    }
    v7 = ullTotalVirtual * 9.3132257e-10;
    ullAvailPhys = (float)(__int64)Buffer.ullAvailPhys;
    v10 = v7;
    if ( (Buffer.ullAvailPhys & 0x8000000000000000ui64) != 0i64 )
    {
      v9 = (float)(__int64)Buffer.ullAvailPhys;
      ullAvailPhys = v9 + 1.8446744e19;
    }
    v11 = ullAvailPhys * 0.00000095367432;
    ullTotalPhys = (float)(__int64)Buffer.ullTotalPhys;
    if ( (Buffer.ullTotalPhys & 0x8000000000000000ui64) != 0i64 )
    {
      v13 = (float)(__int64)Buffer.ullTotalPhys;
      ullTotalPhys = v13 + 1.8446744e19;
    }
    Com_Printf(16, "\tMemory in use:         %ld%%\n\tTotal physical (MB):  %10.4f\n\tFree physical (MB):   %10.4f\n\tTotal virtual (GB):   %10.4f\n\tFree virtual (GB):    %10.4f\n", Buffer.dwMemoryLoad, (float)(ullTotalPhys * 0.00000095367432), v11, v10, v4);
  }
  else
  {
    Com_Printf(16, "\tNot available.\n");
  }
  Com_Printf(16, "\n");
  Com_Printf(16, "XMem Heap Status:\n");
  v14 = 0;
  v87 = 32;
  v15 = s_xb3XMemHeapInfos;
  do
  {
    if ( v14 >= 0xC )
    {
      LODWORD(v79) = 12;
      LODWORD(v78) = v14;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_xmemalloc.cpp", 864, ASSERT_TYPE_ASSERT, "(unsigned)( heapIdx ) < (unsigned)( ( sizeof( *array_counter( s_xb3XMemHeapInfos ) ) + 0 ) )", "heapIdx doesn't index ARRAY_COUNT( s_xb3XMemHeapInfos )\n\t%i not in [0, %i)", v78, v79) )
        __debugbreak();
    }
    if ( (unsigned int)XMemGetAllocationStatistics(v15->gfxMemType, (unsigned int)v15->isLargeHeap, &v87) )
    {
      AllocationHysteresis = XMemGetAllocationHysteresis(v15->gfxMemType, (unsigned int)v15->isLargeHeap);
      v17 = (float)AllocationHysteresis;
      if ( AllocationHysteresis < 0 )
      {
        v18 = (float)AllocationHysteresis;
        v17 = v18 + 1.8446744e19;
      }
      v19 = (float)(v17 * 0.00000095367432);
      if ( v14 >= 0xC )
      {
        LODWORD(v79) = 12;
        LODWORD(v78) = v14;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\xb3\\xb3_xmemalloc.cpp", 856, ASSERT_TYPE_ASSERT, "(unsigned)( heapIdx ) < (unsigned)( ( sizeof( *array_counter( s_xb3XMemHeapInfos ) ) + 0 ) )", "heapIdx doesn't index ARRAY_COUNT( s_xb3XMemHeapInfos )\n\t%i not in [0, %i)", v78, v79) )
          __debugbreak();
      }
      v20 = (float)v89;
      if ( v89 < 0 )
      {
        v21 = (float)v89;
        v20 = v21 + 1.8446744e19;
      }
      v22 = (float)v88;
      if ( v88 < 0 )
      {
        v23 = (float)v88;
        v22 = v23 + 1.8446744e19;
      }
      LODWORD(v81) = v91;
      LODWORD(v79) = v90;
      Com_Printf(16, "\tXMem Type: %s\n\t\tMax Size (MB):   %10.4f\n\t\tMin Used (MB):   %10.4f\n\t\tHysteresis (MB): %10.4f\n\t\tAlloc Count:     %ld\n\t\tFreeCount:\t      %ld\n", v15->heapName, (float)(v22 * 0.00000095367432), (float)(v20 * 0.00000095367432), v19, v79, v81);
    }
    ++v14;
    ++v15;
  }
  while ( (__int64)v15 < (__int64)&unk_1486CD020 );
  Com_Printf(16, "\n");
  Com_Printf(16, "Apu Memory Status:\n");
  ApuHeapGetState_0(&v82, 1i64);
  v24 = (float)v85;
  v25 = (float)v84;
  v26 = (float)(v24 * 0.00000095367432);
  v27 = v25 * 0.00000095367432;
  v28 = (float)v82;
  v29 = (float)v83;
  LODWORD(v79) = v86;
  Com_Printf(16, "\tAPU Cached\n\t\tAlloc Size (MB): %10.4f\n\t\tFree Size (MB):  %10.4f\n\t\tLost Size (MB):  %10.4f\n\t\tMax Block Size (MB): %10.4f\n\t\tAlloc Count:     %ld\n", (float)(v29 * 0.00000095367432), (float)(v28 * 0.00000095367432), v27, v26, v79);
  ApuHeapGetState_0(&v82, 2i64);
  v30 = (float)v85;
  v31 = (float)v84;
  v32 = (float)(v30 * 0.00000095367432);
  v33 = v31 * 0.00000095367432;
  v34 = (float)v82;
  v35 = (float)v83;
  LODWORD(v80) = v86;
  Com_Printf(16, "\tAPU Non-Cached\n\t\tAlloc Size (MB): %10.4f\n\t\tFree Size (MB):  %10.4f\n\t\tLost Size (MB):  %10.4f\n\t\tMax Block Size (MB): %10.4f\n\t\tAlloc Count:     %ld\n", (float)(v35 * 0.00000095367432), (float)(v34 * 0.00000095367432), v33, v32, v80);
  Com_Printf(16, "\n");
  v92 = 80;
  Com_Printf(16, "Title Memory Status:\n");
  if ( (unsigned int)TitleMemoryStatus(&v92) )
  {
    v102 = v0;
    v101 = v1;
    v36 = (float)v99;
    if ( v99 < 0 )
    {
      v37 = (float)v99;
      v36 = v37 + 1.8446744e19;
    }
    v38 = (float)(v36 * 0.00000095367432);
    v39 = (float)v98;
    if ( v98 < 0 )
    {
      v40 = (float)v98;
      v39 = v40 + 1.8446744e19;
    }
    v41 = v39 * 0.00000095367432;
    v42 = (float)v97;
    v44 = v41;
    if ( v97 < 0 )
    {
      v43 = (float)v97;
      v42 = v43 + 1.8446744e19;
    }
    v45 = v42 * 0.00000095367432;
    v46 = (float)v96;
    v48 = v45;
    if ( v96 < 0 )
    {
      v47 = (float)v96;
      v46 = v47 + 1.8446744e19;
    }
    v49 = v46 * 0.00000095367432;
    v50 = (float)v95;
    v52 = v49;
    if ( v95 < 0 )
    {
      v51 = (float)v95;
      v50 = v51 + 1.8446744e19;
    }
    v53 = v50 * 0.00000095367432;
    v54 = (float)v94;
    v56 = v53;
    if ( v94 < 0 )
    {
      v55 = (float)v94;
      v54 = v55 + 1.8446744e19;
    }
    v57 = v54 * 0.00000095367432;
    v58 = (float)v93;
    if ( v93 < 0 )
    {
      v59 = (float)v93;
      v58 = v59 + 1.8446744e19;
    }
    Com_Printf(16, "\tTotal Memory (MB):    %10.4f\n\tAvailable (MB):       %10.4f\n\tLegacy Used (MB):     %10.4f\n\tLegacy Peak (MB):     %10.4f\n\tLegacy Avail (MB):    %10.4f\n\tTitle Used (MB):      %10.4f\n\tTitle Avail (MB):     %10.4f\n", (float)(v58 * 0.00000095367432), v57, v56, v52, v48, v44, v38);
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
    v61 = s_auxMemHeap.m_heap.mp_parent_region->mp_heap[0];
    if ( v61 )
      p_mp_top_ptr = (ntl::nxheap_region *)&v61->mp_top_ptr;
    else
      p_mp_top_ptr = s_auxMemHeap.m_heap.mp_parent_region;
    v63 = s_auxMemHeap.m_heap.mp_parent_region->mp_heap[1];
    mp_start_ptr = (char *)p_mp_top_ptr->mp_start_ptr;
    if ( v63 )
      mp_top_ptr = (char *)v63->mp_top_ptr;
    else
      mp_top_ptr = (char *)s_auxMemHeap.m_heap.mp_parent_region->mp_end_ptr;
    if ( mp_top_ptr < mp_start_ptr )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\nxheap\\nxheap.inl", 57, ASSERT_TYPE_ASSERT, "( top >= bot )", (const char *)&queryFormat, "top >= bot") )
        __debugbreak();
      mp_parent_region = s_auxMemHeap.m_heap.mp_parent_region;
    }
    v66 = (char *)(mp_top_ptr - mp_start_ptr);
    v67 = (float)(__int64)&v66[s_auxMemHeap.m_heap.m_free_fragment_mem];
    if ( (__int64)&v66[s_auxMemHeap.m_heap.m_free_fragment_mem] < 0 )
    {
      v68 = (float)(__int64)&v66[s_auxMemHeap.m_heap.m_free_fragment_mem];
      v67 = v68 + 1.8446744e19;
    }
    v69 = mp_parent_region->mp_heap[0];
    v70 = (float)(v67 * 0.00000095367432);
    if ( v69 )
      v71 = (ntl::nxheap_region *)&v69->mp_top_ptr;
    else
      v71 = mp_parent_region;
    v72 = v71->mp_start_ptr;
    v73 = mp_parent_region->mp_heap[1];
    if ( v73 )
      mp_end_ptr = v73->mp_top_ptr;
    else
      mp_end_ptr = mp_parent_region->mp_end_ptr;
    if ( mp_end_ptr < v72 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\nxheap\\nxheap.inl", 57, ASSERT_TYPE_ASSERT, "( top >= bot )", (const char *)&queryFormat, "top >= bot") )
      __debugbreak();
    v75 = s_auxMemHeap.m_heap.m_free_fragment_mem + mp_end_ptr - v72;
    v76 = (float)(__int64)(s_auxMemHeap.m_heap.m_used_mem + v75);
    if ( (__int64)(s_auxMemHeap.m_heap.m_used_mem + v75) < 0 )
    {
      v77 = (float)(__int64)(s_auxMemHeap.m_heap.m_used_mem + v75);
      v76 = v77 + 1.8446744e19;
    }
    Com_Printf(16, "\tTotal Memory (MB):    %10.4f\n\tAvailable (MB):       %10.4f\n", (float)(v76 * 0.00000095367432), v70);
  }
  else
  {
    Com_Printf(16, "\tNOT ALLOCATED\n");
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
  ntl::solitary_buffer_allocator v1; 
  unsigned __int64 v3; 
  const char *v4; 
  void *v5; 
  ntl::solitary_buffer_allocator v6; 
  unsigned __int64 v8; 
  ntl::solitary_buffer_allocator v9; 
  ntl::internal::buffer_memory_block<char> v10; 
  ntl::solitary_buffer_allocator v11; 
  ntl::internal::buffer_memory_block<char> v12; 
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
      v1.m_data.m_buffer = (char *)ptr;
      v1.m_data.m_size = size;
      __asm { vpxor   xmm0, xmm0, xmm0 }
      if ( !ptr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\buffer_allocator.h", 71, ASSERT_TYPE_ASSERT, "( p_buffer_start )", (const char *)&queryFormat, "p_buffer_start", _XMM0) )
        __debugbreak();
      v9 = v1;
      ntl::nxheap::shutdown(&s_auxMemHeap.m_heap);
      ntl::nxheap_region::shutdown(&s_auxMemHeap.m_region);
      if ( s_auxMemHeap.m_data.m_buffer )
      {
        if ( s_auxMemHeap.m_data.m_buffer != s_auxMemHeap.m_allocator.m_data.m_buffer && s_auxMemHeap.m_allocator.m_data.m_buffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\buffer_allocator.h", 64, ASSERT_TYPE_ASSERT, "( ( p_ptr == m_data.begin() ) || ( p_ptr == 0 ) || ( m_data.begin() == 0 ) )", (const char *)&queryFormat, "( p_ptr == m_data.begin() ) || ( p_ptr == NULL ) || ( m_data.begin() == NULL )") )
          __debugbreak();
        s_auxMemHeap.m_data.m_buffer = NULL;
        s_auxMemHeap.m_data.m_size = 0i64;
      }
      v3 = size;
      s_auxMemHeap.m_allocator = v9;
      ntl::nxheap::shutdown(&s_auxMemHeap.m_heap);
      ntl::nxheap_region::shutdown(&s_auxMemHeap.m_region);
      if ( s_auxMemHeap.m_data.m_buffer )
      {
        if ( s_auxMemHeap.m_data.m_buffer != s_auxMemHeap.m_allocator.m_data.m_buffer && s_auxMemHeap.m_allocator.m_data.m_buffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\buffer_allocator.h", 64, ASSERT_TYPE_ASSERT, "( ( p_ptr == m_data.begin() ) || ( p_ptr == 0 ) || ( m_data.begin() == 0 ) )", (const char *)&queryFormat, "( p_ptr == m_data.begin() ) || ( p_ptr == NULL ) || ( m_data.begin() == NULL )") )
          __debugbreak();
        s_auxMemHeap.m_data.m_buffer = NULL;
        s_auxMemHeap.m_data.m_size = 0i64;
      }
      if ( v3 > s_auxMemHeap.m_allocator.m_data.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\buffer_allocator.h", 56, ASSERT_TYPE_ASSERT, "( size_bytes <= m_data.size_in_bytes() )", (const char *)&queryFormat, "size_bytes <= m_data.size_in_bytes()") )
        __debugbreak();
      v10.m_buffer = s_auxMemHeap.m_allocator.m_data.m_buffer;
      v10.m_size = v3;
      s_auxMemHeap.m_data = v10;
      if ( s_auxMemHeap.m_region.mp_start_ptr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\heap_allocator.h", 206, ASSERT_TYPE_ASSERT, "( !m_region.is_inited() )", (const char *)&queryFormat, "!m_region.is_inited()") )
        __debugbreak();
      ntl::nxheap_region::init(&s_auxMemHeap.m_region, s_auxMemHeap.m_data.m_buffer, s_auxMemHeap.m_data.m_size);
      if ( s_auxMemHeap.m_heap.mp_parent_region && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\heap_allocator.h", 209, ASSERT_TYPE_ASSERT, "( !heap().is_inited() )", (const char *)&queryFormat, "!heap().is_inited()") )
        __debugbreak();
      ntl::nxheap::init(&s_auxMemHeap.m_heap, &s_auxMemHeap.m_region, DIR_BOTTOM_UP);
      v4 = "Allocated 256MB auxiliary physical memory\n";
    }
    else if ( Sys_GetXB3ConsoleType() == XB3_CONSOLE_DURANGO )
    {
      s_auxContext = (void *)0xDEADBEEFDEADBEEFi64;
      v5 = VirtualAlloc(NULL, 0x10000000ui64, 0x60001000u, 4u);
      size = 0x10000000i64;
      ptr = v5;
      s_auxContextEmulation = 1;
      memset_0(v5, 153, 0x10000000ui64);
      v6.m_data.m_buffer = (char *)ptr;
      v6.m_data.m_size = size;
      __asm { vpxor   xmm0, xmm0, xmm0 }
      if ( !ptr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\buffer_allocator.h", 71, ASSERT_TYPE_ASSERT, "( p_buffer_start )", (const char *)&queryFormat, "p_buffer_start", _XMM0) )
        __debugbreak();
      v11 = v6;
      ntl::nxheap::shutdown(&s_auxMemHeap.m_heap);
      ntl::nxheap_region::shutdown(&s_auxMemHeap.m_region);
      if ( s_auxMemHeap.m_data.m_buffer )
      {
        if ( s_auxMemHeap.m_data.m_buffer != s_auxMemHeap.m_allocator.m_data.m_buffer && s_auxMemHeap.m_allocator.m_data.m_buffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\buffer_allocator.h", 64, ASSERT_TYPE_ASSERT, "( ( p_ptr == m_data.begin() ) || ( p_ptr == 0 ) || ( m_data.begin() == 0 ) )", (const char *)&queryFormat, "( p_ptr == m_data.begin() ) || ( p_ptr == NULL ) || ( m_data.begin() == NULL )") )
          __debugbreak();
        s_auxMemHeap.m_data.m_buffer = NULL;
        s_auxMemHeap.m_data.m_size = 0i64;
      }
      v8 = size;
      s_auxMemHeap.m_allocator = v11;
      ntl::nxheap::shutdown(&s_auxMemHeap.m_heap);
      ntl::nxheap_region::shutdown(&s_auxMemHeap.m_region);
      if ( s_auxMemHeap.m_data.m_buffer )
      {
        if ( s_auxMemHeap.m_data.m_buffer != s_auxMemHeap.m_allocator.m_data.m_buffer && s_auxMemHeap.m_allocator.m_data.m_buffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\buffer_allocator.h", 64, ASSERT_TYPE_ASSERT, "( ( p_ptr == m_data.begin() ) || ( p_ptr == 0 ) || ( m_data.begin() == 0 ) )", (const char *)&queryFormat, "( p_ptr == m_data.begin() ) || ( p_ptr == NULL ) || ( m_data.begin() == NULL )") )
          __debugbreak();
        s_auxMemHeap.m_data.m_buffer = NULL;
        s_auxMemHeap.m_data.m_size = 0i64;
      }
      if ( v8 > s_auxMemHeap.m_allocator.m_data.m_size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\buffer_allocator.h", 56, ASSERT_TYPE_ASSERT, "( size_bytes <= m_data.size_in_bytes() )", (const char *)&queryFormat, "size_bytes <= m_data.size_in_bytes()") )
        __debugbreak();
      v12.m_buffer = s_auxMemHeap.m_allocator.m_data.m_buffer;
      v12.m_size = v8;
      s_auxMemHeap.m_data = v12;
      if ( s_auxMemHeap.m_region.mp_start_ptr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\heap_allocator.h", 206, ASSERT_TYPE_ASSERT, "( !m_region.is_inited() )", (const char *)&queryFormat, "!m_region.is_inited()") )
        __debugbreak();
      ntl::nxheap_region::init(&s_auxMemHeap.m_region, s_auxMemHeap.m_data.m_buffer, s_auxMemHeap.m_data.m_size);
      if ( s_auxMemHeap.m_heap.mp_parent_region && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\heap_allocator.h", 209, ASSERT_TYPE_ASSERT, "( !heap().is_inited() )", (const char *)&queryFormat, "!heap().is_inited()") )
        __debugbreak();
      ntl::nxheap::init(&s_auxMemHeap.m_heap, &s_auxMemHeap.m_region, DIR_BOTTOM_UP);
      OutputDebugStringA("Allocated 256MB auxiliary physical memory from the OS!\n");
      v4 = "WARNING: Failed to allocate auxiliary memory on base XB3 hardware!  Please make sure this is configured in the appxmanifest and that you have re-registered the game since the last appxmanifest update.";
    }
    else
    {
      if ( Sys_GetXB3ConsoleType() != XB3_CONSOLE_SCORPIO )
        goto LABEL_61;
      v4 = "No auxiliary memory allocated on Scorpio hardware\n";
    }
    OutputDebugStringA(v4);
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
void XB3XMem_PrintAuxMemoryStatus(void)
{
  ntl::nxheap_region *mp_parent_region; 
  ntl::nxheap *v1; 
  ntl::nxheap_region *p_mp_top_ptr; 
  ntl::nxheap *v3; 
  void *mp_start_ptr; 
  void *mp_top_ptr; 
  float v6; 
  float v7; 
  ntl::nxheap *v8; 
  double v9; 
  ntl::nxheap_region *v10; 
  ntl::nxheap *v11; 
  void *v12; 
  void *mp_end_ptr; 
  unsigned __int64 v14; 
  float v15; 
  float v16; 

  Com_Printf(16, "Auxiliary Memory Status:\n");
  if ( s_auxContext )
  {
    mp_parent_region = s_auxMemHeap.m_heap.mp_parent_region;
    v1 = s_auxMemHeap.m_heap.mp_parent_region->mp_heap[0];
    if ( v1 )
      p_mp_top_ptr = (ntl::nxheap_region *)&v1->mp_top_ptr;
    else
      p_mp_top_ptr = s_auxMemHeap.m_heap.mp_parent_region;
    v3 = s_auxMemHeap.m_heap.mp_parent_region->mp_heap[1];
    mp_start_ptr = p_mp_top_ptr->mp_start_ptr;
    if ( v3 )
      mp_top_ptr = v3->mp_top_ptr;
    else
      mp_top_ptr = s_auxMemHeap.m_heap.mp_parent_region->mp_end_ptr;
    if ( mp_top_ptr < mp_start_ptr )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\nxheap\\nxheap.inl", 57, ASSERT_TYPE_ASSERT, "( top >= bot )", (const char *)&queryFormat, "top >= bot") )
        __debugbreak();
      mp_parent_region = s_auxMemHeap.m_heap.mp_parent_region;
    }
    v6 = (float)(__int64)((__int64)mp_top_ptr + s_auxMemHeap.m_heap.m_free_fragment_mem - (_QWORD)mp_start_ptr);
    if ( (__int64)((__int64)mp_top_ptr + s_auxMemHeap.m_heap.m_free_fragment_mem - (_QWORD)mp_start_ptr) < 0 )
    {
      v7 = (float)(__int64)((__int64)mp_top_ptr + s_auxMemHeap.m_heap.m_free_fragment_mem - (_QWORD)mp_start_ptr);
      v6 = v7 + 1.8446744e19;
    }
    v8 = mp_parent_region->mp_heap[0];
    v9 = (float)(v6 * 0.00000095367432);
    if ( v8 )
      v10 = (ntl::nxheap_region *)&v8->mp_top_ptr;
    else
      v10 = mp_parent_region;
    v11 = mp_parent_region->mp_heap[1];
    v12 = v10->mp_start_ptr;
    if ( v11 )
      mp_end_ptr = v11->mp_top_ptr;
    else
      mp_end_ptr = mp_parent_region->mp_end_ptr;
    if ( mp_end_ptr < v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\nxheap\\nxheap.inl", 57, ASSERT_TYPE_ASSERT, "( top >= bot )", (const char *)&queryFormat, "top >= bot") )
      __debugbreak();
    v14 = s_auxMemHeap.m_heap.m_used_mem + s_auxMemHeap.m_heap.m_free_fragment_mem - (_QWORD)v12;
    v15 = (float)(__int64)((__int64)mp_end_ptr + v14);
    if ( (__int64)((__int64)mp_end_ptr + v14) < 0 )
    {
      v16 = (float)(__int64)((__int64)mp_end_ptr + v14);
      v15 = v16 + 1.8446744e19;
    }
    Com_Printf(16, "\tTotal Memory (MB):    %10.4f\n\tAvailable (MB):       %10.4f\n", (float)(v15 * 0.00000095367432), v9);
  }
  else
  {
    Com_Printf(16, "\tNOT ALLOCATED\n");
  }
}


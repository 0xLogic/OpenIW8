/*
==============
R_RT_Heap_BackendFrameBegin
==============
*/

void R_RT_Heap_BackendFrameBegin(void)
{
  ?R_RT_Heap_BackendFrameBegin@@YAXXZ();
}

/*
==============
R_RT_Heap_Create
==============
*/

bool __fastcall R_RT_Heap_Create(unsigned int size, R_RT_HeapFlags flags, const char *name, R_RT_Heap *heap, const R_RT_Tracking_AllocContext *allocContext)
{
  return ?R_RT_Heap_Create@@YA_NIW4R_RT_HeapFlags@@PEBDPEAUR_RT_Heap@@AEBUR_RT_Tracking_AllocContext@@@Z(size, flags, name, heap, allocContext);
}

/*
==============
R_RT_Heap_CreateESRAM
==============
*/

void __fastcall R_RT_Heap_CreateESRAM(R_RT_Heap *heap)
{
  ?R_RT_Heap_CreateESRAM@@YAXPEAUR_RT_Heap@@@Z(heap);
}

/*
==============
R_RT_Heap_UseUHDHeaps
==============
*/

bool __fastcall R_RT_Heap_UseUHDHeaps()
{
  return ?R_RT_Heap_UseUHDHeaps@@YA_NXZ();
}

/*
==============
R_RT_Heap_GetAllocRecords
==============
*/

unsigned int __fastcall R_RT_Heap_GetAllocRecords(R_RT_Tracking_AllocRecord *outAllocRecords, R_RT_Heap_PoolID heapPoolID)
{
  return ?R_RT_Heap_GetAllocRecords@@YAIPEAUR_RT_Tracking_AllocRecord@@W4R_RT_Heap_PoolID@@@Z(outAllocRecords, heapPoolID);
}

/*
==============
R_RT_Heap_Shutdown
==============
*/

void R_RT_Heap_Shutdown(void)
{
  ?R_RT_Heap_Shutdown@@YAXXZ();
}

/*
==============
R_RT_Heap_BackendFrameEnd
==============
*/

void R_RT_Heap_BackendFrameEnd(void)
{
  ?R_RT_Heap_BackendFrameEnd@@YAXXZ();
}

/*
==============
R_RT_Heap_AllocInternal
==============
*/

void *__fastcall R_RT_Heap_AllocInternal(unsigned int size, unsigned __int16 tiledPlacementIndex, unsigned __int16 heapIndex, R_RT_Heap_PageRange *outPageRange, R_RT_Lifetime lifetime, unsigned __int16 frontendPass, const R_RT_Tracking_AllocContext *allocContext)
{
  return ?R_RT_Heap_AllocInternal@@YAPEAXIGGPEAUR_RT_Heap_PageRange@@W4R_RT_Lifetime@@GAEBUR_RT_Tracking_AllocContext@@@Z(size, tiledPlacementIndex, heapIndex, outPageRange, lifetime, frontendPass, allocContext);
}

/*
==============
R_RT_Heap_BackendPassBegin
==============
*/

void __fastcall R_RT_Heap_BackendPassBegin(unsigned __int16 pass)
{
  ?R_RT_Heap_BackendPassBegin@@YAXG@Z(pass);
}

/*
==============
R_RT_Heap_BackendPassEnd
==============
*/

void __fastcall R_RT_Heap_BackendPassEnd(unsigned __int16 pass)
{
  ?R_RT_Heap_BackendPassEnd@@YAXG@Z(pass);
}

/*
==============
R_RT_Heap_Destroy
==============
*/

void __fastcall R_RT_Heap_Destroy(R_RT_Heap *heap)
{
  ?R_RT_Heap_Destroy@@YAXPEAUR_RT_Heap@@@Z(heap);
}

/*
==============
R_RT_Heap_Startup
==============
*/

void R_RT_Heap_Startup(void)
{
  ?R_RT_Heap_Startup@@YAXXZ();
}

/*
==============
R_RT_Heap_Free
==============
*/

void __fastcall R_RT_Heap_Free(void *mem)
{
  ?R_RT_Heap_Free@@YAXPEAX@Z(mem);
}

/*
==============
R_RT_Heap_ActivatePassBlocks
==============
*/
void R_RT_Heap_ActivatePassBlocks(unsigned __int16 activePass)
{
  unsigned __int16 v1; 
  int v2; 
  unsigned int *p_m_blockCountMax; 
  R_RT_Heap_Block **p_m_blocks; 
  unsigned int v5; 
  R_RT_Heap_Block *v6; 
  __int64 v7; 
  R_RT_Heap_Block *v8; 
  unsigned int v9; 
  R_RT_Heap_Block *v10; 
  __int64 m_livePassRefIndex; 
  int v12; 
  char *v13; 
  unsigned __int16 v14; 
  int v15; 
  __int64 v16; 
  __int64 v17; 
  char *v18; 
  R_RT_Heap_Block *v19; 
  unsigned __int8 m_flags; 
  int v21; 
  __int16 v22; 
  int v23; 
  char v24; 
  __int64 v25; 
  __int64 v26; 
  __int64 v27; 
  __int64 v28; 
  int v30; 
  int v31; 
  unsigned int v32; 
  unsigned int *v33; 
  R_RT_Heap_Block **v34; 
  R_RT_Heap_Block *v35; 
  R_RT_Heap_Block *v36; 
  char v37[656]; 

  v1 = activePass;
  if ( !Sys_IsMainThread() && !Sys_IsRenderThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_common_impl.h", 69, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread() || Sys_IsRenderThread())", (const char *)&queryFormat, "Sys_IsMainThread() || Sys_IsRenderThread()") )
    __debugbreak();
  if ( s_R_RT_common.m_allocationLockMode != Sys_IsRenderThread() + 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_heap_impl.h", 987, ASSERT_TYPE_ASSERT, "(R_RT_HaveAllocationLock())", (const char *)&queryFormat, "R_RT_HaveAllocationLock()") )
    __debugbreak();
  if ( (v1 & 0xFFF) == 4095 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_heap_impl.h", 988, ASSERT_TYPE_ASSERT, "(!R_RT_IsFramePass( activePass ))", (const char *)&queryFormat, "!R_RT_IsFramePass( activePass )") )
    __debugbreak();
  v2 = 0;
  s_R_RT_Heap.m_activePass = v1;
  p_m_blockCountMax = &g_R_RT_Heap_poolConfigs[0].m_blockCountMax;
  v31 = 0;
  p_m_blocks = &s_R_RT_Heap.m_pools[0].m_blocks;
  v33 = &g_R_RT_Heap_poolConfigs[0].m_blockCountMax;
  v34 = &s_R_RT_Heap.m_pools[0].m_blocks;
  do
  {
    v5 = *((unsigned __int16 *)p_m_blocks + 13);
    v32 = v5;
    if ( *((_WORD *)p_m_blocks + 13) )
    {
      v6 = *p_m_blocks;
      v7 = 0i64;
      v8 = p_m_blocks[2];
      v9 = *p_m_blockCountMax;
      v35 = *p_m_blocks;
      v36 = v8;
      if ( *p_m_blockCountMax )
      {
        do
        {
          v10 = &v6[v7];
          if ( v10->m_state.m_flags == 13 )
          {
            m_livePassRefIndex = v10->m_state.m_pass.m_livePassRefIndex;
            if ( (unsigned int)m_livePassRefIndex >= v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_heap_impl.h", 1015, ASSERT_TYPE_ASSERT, "(passRefIndex < passRefCount)", (const char *)&queryFormat, "passRefIndex < passRefCount") )
              __debugbreak();
            v12 = *(&v8->nextFreeBlockIndex + 20 * m_livePassRefIndex);
            v13 = (char *)v8 + 40 * m_livePassRefIndex;
            if ( v12 != (_DWORD)v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_heap_impl.h", 1017, ASSERT_TYPE_ASSERT, "(passRef->m_blockIndex == blockIndex)", (const char *)&queryFormat, "passRef->m_blockIndex == blockIndex") )
              __debugbreak();
            v14 = *((_WORD *)v13 + 1);
            if ( (v14 & 0xFFF) != 4095 )
            {
              LODWORD(v28) = v14;
              LODWORD(v27) = activePass;
              LODWORD(v26) = v7;
              LODWORD(v25) = v2;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_heap_impl.h", 1020, ASSERT_TYPE_ASSERT, "(entireFrame)", "%s\n\tpoolID=%d, blockIndex=%d, activePass=0x%04x, pass=0x%04x, name=%s, location=%s", "entireFrame", v25, v26, v27, v28, v10->m_record.m_name, v10->m_record.m_location) )
                __debugbreak();
            }
            v5 = v32;
          }
          v7 = (unsigned int)(v7 + 1);
        }
        while ( (_DWORD)v7 != v9 );
        v1 = activePass;
        v9 = *v33;
      }
      memset_0(v37, 0, v9);
      v15 = v1;
      v16 = 0i64;
      v30 = v1;
      do
      {
        v17 = *(&v8->nextFreeBlockIndex + 20 * v16);
        v18 = (char *)v8 + 40 * v16;
        v19 = &v6[v17];
        m_flags = v19->m_state.m_flags;
        if ( (m_flags & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_heap_impl.h", 1034, ASSERT_TYPE_ASSERT, "(stateFlags & R_RT_Heap_State::s_Flag_Pass)", (const char *)&queryFormat, "stateFlags & R_RT_Heap_State::s_Flag_Pass") )
          __debugbreak();
        v21 = *((unsigned __int16 *)v18 + 1);
        v22 = v21 & 0xFFF;
        v23 = 0xFFFF;
        if ( (v21 & 0xFFF) == 4095 )
          v23 = 61440;
        if ( (v23 & v21) == (v23 & v15) )
        {
          v24 = v37[v17];
          if ( v24 )
          {
            LODWORD(v28) = *((unsigned __int16 *)v18 + 1);
            LODWORD(v27) = v30;
            LODWORD(v26) = (unsigned __int16)v17;
            LODWORD(v25) = v31;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_heap_impl.h", 1044, ASSERT_TYPE_ASSERT, "(blockLiveRefCounts[blockIndex] == 0)", "%s\n\tpoolID=%d, blockIndex=%d, activePass=0x%04x, pass=0x%04x, name=%s, location=%s", "blockLiveRefCounts[blockIndex] == 0", v25, v26, v27, v28, v19->m_record.m_name, v19->m_record.m_location) )
              __debugbreak();
          }
          v37[v17] = v24 + 1;
          if ( (m_flags & 4) != 0 )
          {
            if ( v22 != 4095 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_heap_impl.h", 1053, ASSERT_TYPE_ASSERT, "(entireFrame)", (const char *)&queryFormat, "entireFrame") )
              __debugbreak();
            if ( v19->m_state.m_pass.m_livePassRefIndex != (_DWORD)v16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_heap_impl.h", 1055, ASSERT_TYPE_ASSERT, "(block->m_state.m_pass.m_livePassRefIndex == passRefIndex)", (const char *)&queryFormat, "block->m_state.m_pass.m_livePassRefIndex == passRefIndex") )
              __debugbreak();
            if ( v19->m_record.m_surfaceID != *((_WORD *)v18 + 18) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_heap_impl.h", 1056, ASSERT_TYPE_ASSERT, "(block->m_record.m_surfaceID == passRef->m_record.m_surfaceID)", (const char *)&queryFormat, "block->m_record.m_surfaceID == passRef->m_record.m_surfaceID") )
              __debugbreak();
          }
          else
          {
            v19->m_state.m_flags = 13;
            v19->m_state.m_pass.m_livePassRefIndex = v16;
            v19->m_record = *(R_RT_Tracking_AllocRecord *)(v18 + 8);
          }
          v15 = v30;
        }
        v6 = v35;
        v16 = (unsigned int)(v16 + 1);
        v8 = v36;
      }
      while ( (_DWORD)v16 != v32 );
      v2 = v31;
      p_m_blocks = v34;
      p_m_blockCountMax = v33;
      v1 = activePass;
    }
    ++v2;
    p_m_blocks += 6;
    p_m_blockCountMax += 2;
    v31 = v2;
    v34 = p_m_blocks;
    v33 = p_m_blockCountMax;
  }
  while ( v2 != 4 );
}

/*
==============
R_RT_Heap_AddPassRef
==============
*/
__int64 R_RT_Heap_AddPassRef(R_RT_Heap_Pool *pool, unsigned int blockIndex, unsigned __int16 pass, const R_RT_Tracking_AllocContext *allocContext)
{
  __int64 m_passRefCount; 
  __int64 v5; 
  R_RT_Heap_Block *v9; 
  unsigned int v10; 
  __int64 v11; 
  R_RT_Heap_PassRef *m_passRefs; 
  __int64 result; 
  const void *m_address; 
  unsigned int m_size; 
  R_RT_Heap_PassRef *v16; 
  unsigned __int16 m_surfaceID; 
  const char *m_location; 

  m_passRefCount = pool->m_passRefCount;
  v5 = blockIndex;
  if ( (unsigned int)m_passRefCount >= 2 * g_R_RT_Heap_poolConfigs[pool - s_R_RT_Heap.m_pools].m_blockCountMax && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_heap_impl.h", 621, ASSERT_TYPE_ASSERT, "(passRefCount < s_R_RT_Heap_blockToPassRefCountScale * g_R_RT_Heap_poolConfigs[pool - s_R_RT_Heap.m_pools].m_blockCountMax)", (const char *)&queryFormat, "passRefCount < s_R_RT_Heap_blockToPassRefCountScale * g_R_RT_Heap_poolConfigs[pool - s_R_RT_Heap.m_pools].m_blockCountMax") )
    __debugbreak();
  pool->m_passRefCount = truncate_cast<unsigned short,unsigned int>(m_passRefCount + 1);
  v9 = &pool->m_blocks[v5];
  v10 = v9->m_state.m_abandoned.m_abandonedFrameCount + 1;
  if ( v10 > 0xFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned char __cdecl truncate_cast_impl<unsigned char,int>(int)", "unsigned", (unsigned __int8)v10, "signed", v10) )
    __debugbreak();
  v9->m_state.m_abandoned.m_abandonedFrameCount = v10;
  v11 = m_passRefCount;
  m_passRefs = pool->m_passRefs;
  result = (unsigned __int16)m_passRefCount;
  m_passRefs[v11].m_blockIndex = v5;
  m_passRefs[v11].m_pass = pass;
  m_address = v9->m_record.m_address;
  m_size = v9->m_record.m_size;
  v16 = &m_passRefs[m_passRefCount];
  m_surfaceID = allocContext->m_surfaceID;
  m_location = allocContext->m_location;
  v16->m_record.m_name = allocContext->m_name;
  v16->m_record.m_location = m_location;
  v16->m_record.m_address = m_address;
  v16->m_record.m_surfaceID = m_surfaceID;
  v16->m_record.m_size = m_size;
  return result;
}

/*
==============
R_RT_Heap_AllocInternal
==============
*/
unsigned __int8 *R_RT_Heap_AllocInternal(unsigned int size, unsigned __int16 tiledPlacementIndex, unsigned __int16 heapIndex, R_RT_Heap_PageRange *outPageRange, R_RT_Lifetime lifetime, unsigned __int16 frontendPass, const R_RT_Tracking_AllocContext *allocContext)
{
  int v10; 
  R_RT_Heap_Pool *v11; 
  R_RT_Heap_Block *m_blocks; 
  unsigned int m_blockSize; 
  unsigned int m_blockCountMax; 
  unsigned int v15; 
  unsigned __int16 m_activePass; 
  const R_RT_Heap_PassRef *m_passRefs; 
  signed int AvailableBlockForPass; 
  __int64 v19; 
  unsigned __int16 v20; 
  R_RT_Heap_Block *v21; 
  __int64 m_abandonedRefCount; 
  unsigned __int16 *v24; 
  unsigned __int16 *v25; 
  unsigned int v26; 
  __int64 v27; 
  R_RT_Heap_Block *v28; 
  unsigned __int64 headFreeBlockIndex; 
  unsigned __int8 *v30; 
  unsigned __int64 v31; 
  __int64 v32; 
  R_RT_Heap_Block *v33; 
  unsigned __int16 m_surfaceID; 
  const char *m_location; 
  R_RT_Tracking_CommitRecord *v36; 
  char v37; 
  unsigned __int16 v38; 
  char *fmt; 
  Mem_PageRange *inoutPageRange; 
  unsigned __int16 v41; 
  unsigned int v42; 
  unsigned int v43; 
  unsigned int v44; 
  Mem_PageRange v45; 
  int v46; 
  unsigned __int8 *m_base; 
  R_RT_Heap_Block *v48; 
  unsigned __int16 *m_abandonedRefs; 
  __int64 v50; 

  v50 = -2i64;
  if ( !s_R_RT_Heap.m_startuped && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_heap_impl.h", 710, ASSERT_TYPE_ASSERT, "(s_R_RT_Heap.m_startuped)", (const char *)&queryFormat, "s_R_RT_Heap.m_startuped") )
    __debugbreak();
  if ( !Sys_IsMainThread() && !Sys_IsRenderThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_common_impl.h", 69, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread() || Sys_IsRenderThread())", (const char *)&queryFormat, "Sys_IsMainThread() || Sys_IsRenderThread()") )
    __debugbreak();
  if ( s_R_RT_common.m_allocationLockMode != Sys_IsRenderThread() + 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_heap_impl.h", 711, ASSERT_TYPE_ASSERT, "(R_RT_HaveAllocationLock())", (const char *)&queryFormat, "R_RT_HaveAllocationLock()") )
    __debugbreak();
  if ( !allocContext->m_surfaceID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_heap_impl.h", 712, ASSERT_TYPE_ASSERT, "(allocContext.m_surfaceID)", (const char *)&queryFormat, "allocContext.m_surfaceID") )
    __debugbreak();
  if ( !size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_heap_impl.h", 713, ASSERT_TYPE_ASSERT, "(size > 0)", (const char *)&queryFormat, "size > 0") )
    __debugbreak();
  v10 = 3;
  while ( size > g_R_RT_Heap_poolConfigs[v10].m_blockSize )
  {
    if ( !--v10 )
    {
      if ( size > g_R_RT_Heap_poolConfigs[0].m_blockSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_heap_impl.h", 169, ASSERT_TYPE_ASSERT, "(size <= g_R_RT_Heap_poolConfigs[R_RT_Heap_PoolID_0].m_blockSize)", (const char *)&queryFormat, "size <= g_R_RT_Heap_poolConfigs[R_RT_Heap_PoolID_0].m_blockSize") )
        __debugbreak();
      LOBYTE(v10) = 0;
      break;
    }
  }
  v11 = (R_RT_Heap_Pool *)((char *)&s_R_RT_Heap.m_blocks[-2] + 48 * (unsigned __int8)v10);
  m_base = v11->m_base;
  m_blocks = v11->m_blocks;
  v48 = m_blocks;
  m_blockSize = g_R_RT_Heap_poolConfigs[(unsigned __int8)v10].m_blockSize;
  v43 = m_blockSize;
  m_blockCountMax = g_R_RT_Heap_poolConfigs[(unsigned __int8)v10].m_blockCountMax;
  v44 = m_blockCountMax;
  v15 = (size + 0xFFFF) >> 16;
  v42 = v15;
  m_activePass = frontendPass;
  v41 = frontendPass;
  if ( tiledPlacementIndex != 0xFFFF || heapIndex )
    goto LABEL_54;
  if ( !frontendPass && lifetime == R_RT_Lifetime_Pass )
  {
    m_activePass = s_R_RT_Heap.m_activePass;
    v41 = s_R_RT_Heap.m_activePass;
    if ( !s_R_RT_Heap.m_activePass )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_heap_impl.h", 735, ASSERT_TYPE_ASSERT, "(pass)", (const char *)&queryFormat, "pass") )
        __debugbreak();
      v15 = v42;
    }
  }
  if ( m_activePass )
  {
    if ( v11->m_passRefCount )
    {
      m_passRefs = v11->m_passRefs;
      AvailableBlockForPass = R_RT_Heap_FindAvailableBlockForPass(v15, m_activePass, m_blocks, m_passRefs, v11->m_passRefCount);
      v19 = AvailableBlockForPass;
      if ( AvailableBlockForPass >= 0 )
      {
        v20 = R_RT_Heap_AddPassRef((R_RT_Heap_Pool *)&s_R_RT_Heap.m_blocks[-2] + (unsigned __int8)v10, AvailableBlockForPass, m_activePass, allocContext);
        if ( !frontendPass )
        {
          v21 = &m_blocks[v19];
          if ( v21->m_state.m_flags != 9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_heap_impl.h", 750, ASSERT_TYPE_ASSERT, "(block->m_state.m_flags == (R_RT_Heap_State::s_Flag_Allocated | R_RT_Heap_State::s_Flag_Pass))", (const char *)&queryFormat, "block->m_state.m_flags == (R_RT_Heap_State::s_Flag_Allocated | R_RT_Heap_State::s_Flag_Pass)") )
            __debugbreak();
          v21->m_state.m_flags = 13;
          v21->m_state.m_pass.m_livePassRefIndex = v20;
          v21->m_record = m_passRefs[v20].m_record;
        }
        return &m_base[v43 * v19];
      }
    }
  }
  m_abandonedRefCount = v11->m_abandonedRefCount;
  v46 = m_abandonedRefCount;
  if ( !(_DWORD)m_abandonedRefCount )
  {
LABEL_53:
    m_blockSize = v43;
LABEL_54:
    if ( v11->m_allocBlockCount >= m_blockCountMax && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_heap_impl.h", 807, ASSERT_TYPE_ASSERT, "(pool->m_allocBlockCount < blockCountMax)", "%s\n\tSurface heap pool%d (%dMB) exceeded (limit=%d).", "pool->m_allocBlockCount < blockCountMax", (unsigned __int8)v10, m_blockSize >> 20, m_blockCountMax) )
      __debugbreak();
    ++v11->m_allocBlockCount;
    if ( !v11->m_blockAllocator.reset )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\containers\\block_allocator.h", 97, ASSERT_TYPE_ASSERT, "(this->reset)", (const char *)&queryFormat, "this->reset") )
        __debugbreak();
      if ( !v11->m_blockAllocator.reset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\containers\\block_allocator.h", 43, ASSERT_TYPE_ASSERT, "(this->reset)", (const char *)&queryFormat, "this->reset") )
        __debugbreak();
    }
    if ( v11->m_blockAllocator.headFreeBlockIndex == 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\containers\\block_allocator.h", 98, ASSERT_TYPE_ASSERT, "(!this->Full())", (const char *)&queryFormat, "!this->Full()") )
      __debugbreak();
    headFreeBlockIndex = v11->m_blockAllocator.headFreeBlockIndex;
    if ( headFreeBlockIndex >= v44 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\containers\\block_allocator.h", 51, ASSERT_TYPE_ASSERT, "(index < blockCount)", (const char *)&queryFormat, "index < blockCount") )
      __debugbreak();
    v11->m_blockAllocator.headFreeBlockIndex = m_blocks[headFreeBlockIndex].nextFreeBlockIndex;
    v30 = &m_base[headFreeBlockIndex * v43];
    v31 = v42 << 16;
    v45 = MEM_PAGE_RANGE_INVALID_7;
    if ( tiledPlacementIndex == 0xFFFF )
    {
      if ( !PMem_CommitMemoryPartial(PMEM_STACK_RENDER_TARGETS, &m_base[headFreeBlockIndex * v43], &v30[v31], &m_base[headFreeBlockIndex * v43], NULL, &v45, allocContext->m_name) )
      {
        LODWORD(inoutPageRange) = v31;
        Mem_Error_CannotAlloc_Dev(DODGE, "R_RT_Heap_AllocInternal", "c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_heap_impl.h", 820, "size=%d", inoutPageRange);
      }
      if ( outPageRange )
        *outPageRange = (R_RT_Heap_PageRange)v45;
      IWMem_Alloc(s_iwMemRTHeapCommit, v30, v31);
      if ( ((unsigned __int8)&g_R_RT_Manager.m_commitSize & 7) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 86, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int64 ) ) ) )", "( addend ) = %p", &g_R_RT_Manager.m_commitSize) )
        __debugbreak();
      _InterlockedExchangeAdd64(&g_R_RT_Manager.m_commitSize, v31);
      if ( dword_153B7E254 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 1772i64) )
      {
        j__Init_thread_header(&dword_153B7E254);
        if ( dword_153B7E254 == -1 )
        {
          _hwm_id_0 = BB_RegisterHighWaterMark(s_R_RT_Heap.m_blackboxHWMName);
          j__Init_thread_footer(&dword_153B7E254);
        }
      }
      BB_SetHighWaterMark(_hwm_id_0, g_R_RT_Manager.m_commitSize);
    }
    else
    {
      if ( (outPageRange || heapIndex) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_heap_impl.h", 840, ASSERT_TYPE_ASSERT, "(!outPageRange && heapIndex == g_R_RT_heapInvalid)", (const char *)&queryFormat, "!outPageRange && heapIndex == g_R_RT_heapInvalid") )
        __debugbreak();
      R_RT_Heap_MapUnmapMemory(v30, &v30[v31], &g_R_RT_Manager.m_tiledPlacementAllocator.blocks[tiledPlacementIndex].placement, 1);
    }
    v33 = &v48[headFreeBlockIndex];
    if ( !v33->m_useCount )
    {
      LODWORD(inoutPageRange) = v43 >> 10;
      LODWORD(fmt) = (v42 << 6) & 0x3FFFFF;
      Com_Printf(8, "R_RT_Heap: First use of Pool %d Block %d: %dKB used out of %dKB, 0x%p - 0x%p, \"%s\" created at %s\n", (unsigned __int8)v10, (unsigned int)headFreeBlockIndex, fmt, inoutPageRange, v30, &v30[v31], allocContext->m_name, allocContext->m_location);
    }
    if ( v33->m_commitSizeOverAlign && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_heap_impl.h", 851, ASSERT_TYPE_ASSERT, "(block->m_commitSizeOverAlign == 0)", (const char *)&queryFormat, "block->m_commitSizeOverAlign == 0") )
      __debugbreak();
    if ( v33->m_state.m_flags && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_heap_impl.h", 853, ASSERT_TYPE_ASSERT, "(block->m_state.m_flags == 0)", (const char *)&queryFormat, "block->m_state.m_flags == 0") )
      __debugbreak();
    v33->m_commitSizeOverAlign = v42;
    v33->m_tiledPlacement = tiledPlacementIndex;
    v33->m_heapIndex = heapIndex;
    v33->m_pageRange = v45;
    m_surfaceID = allocContext->m_surfaceID;
    m_location = allocContext->m_location;
    v33->m_record.m_name = allocContext->m_name;
    v33->m_record.m_location = m_location;
    v33->m_record.m_address = v30;
    v33->m_record.m_size = v31;
    v33->m_record.m_surfaceID = m_surfaceID;
    ++v33->m_useCount;
    if ( !s_R_RT_Tracking.m_commitRecordQueue.cleared && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\containers\\circular_queue.h", 39, ASSERT_TYPE_ASSERT, "(this->cleared)", (const char *)&queryFormat, "this->cleared") )
      __debugbreak();
    if ( s_R_RT_Tracking.m_commitRecordQueue.size == 1024 )
      IWStaticCircularQueue<R_RT_Tracking_CommitRecord,1024,unsigned short>::PopFront(&s_R_RT_Tracking.m_commitRecordQueue);
    IWStaticCircularQueue<R_RT_Tracking_CommitRecord,1024,unsigned short>::PushBack(&s_R_RT_Tracking.m_commitRecordQueue);
    v36 = IWStaticCircularQueue<R_RT_Tracking_CommitRecord,1024,unsigned short>::Back(&s_R_RT_Tracking.m_commitRecordQueue);
    v36->m_address = v33->m_record.m_address;
    v36->m_size = v33->m_record.m_size;
    v36->m_name = v33->m_record.m_name;
    v36->m_surfaceID = v33->m_record.m_surfaceID;
    v36->m_location = v33->m_record.m_location;
    v37 = 5;
    if ( frontendPass )
      v37 = 1;
    if ( v41 )
    {
      v37 |= 8u;
      v33->m_state.m_abandoned.m_abandonedFrameCount = 0;
      v38 = R_RT_Heap_AddPassRef(v11, headFreeBlockIndex, v41, allocContext);
      if ( !frontendPass )
        v33->m_state.m_pass.m_livePassRefIndex = v38;
    }
    v33->m_state.m_flags = v37;
    IWMem_Alloc(s_iwMemRTHeapAlloc, v30, size);
    return v30;
  }
  Profile_Begin(113);
  m_abandonedRefs = v11->m_abandonedRefs;
  v24 = m_abandonedRefs;
  v25 = &m_abandonedRefs[m_abandonedRefCount];
  if ( m_abandonedRefs == v25 )
  {
LABEL_52:
    Profile_EndInternal(NULL);
    m_blocks = v48;
    goto LABEL_53;
  }
  v26 = v42;
  while ( 1 )
  {
    v27 = *v24;
    v28 = &v48[v27];
    if ( v28->m_state.m_flags != 3 )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_heap_impl.h", 776, ASSERT_TYPE_ASSERT, "(block->m_state.m_flags == (R_RT_Heap_State::s_Flag_Allocated | R_RT_Heap_State::s_Flag_Abandoned))", (const char *)&queryFormat, "block->m_state.m_flags == (R_RT_Heap_State::s_Flag_Allocated | R_RT_Heap_State::s_Flag_Abandoned)") )
        __debugbreak();
      v26 = v42;
    }
    if ( v28->m_commitSizeOverAlign == v26 && v28->m_tiledPlacement == 0xFFFF && !v28->m_heapIndex )
      break;
    if ( ++v24 == v25 )
      goto LABEL_52;
  }
  v32 = (unsigned int)(v46 - 1);
  *v24 = m_abandonedRefs[v32];
  v11->m_abandonedRefCount = v32;
  R_RT_Heap_SetBlockOwnership((R_RT_Heap_Pool *)&s_R_RT_Heap.m_blocks[-2] + (unsigned __int8)v10, v27, v28, frontendPass == 0, v41, allocContext);
  if ( !frontendPass )
  {
    v28->m_record.m_name = allocContext->m_name;
    v28->m_record.m_location = allocContext->m_location;
    v28->m_record.m_surfaceID = allocContext->m_surfaceID;
  }
  IWMem_Alloc(s_iwMemRTHeapAlloc, &m_base[v27 * v43], size);
  Profile_EndInternal(NULL);
  return &m_base[v27 * v43];
}

/*
==============
R_RT_Heap_BackendFrameBegin
==============
*/
void R_RT_Heap_BackendFrameBegin(void)
{
  if ( s_R_RT_Heap.m_activePass )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_heap_impl.h", 1073, ASSERT_TYPE_ASSERT, "(!s_R_RT_Heap.m_activePass)", (const char *)&queryFormat, "!s_R_RT_Heap.m_activePass") )
      __debugbreak();
  }
}

/*
==============
R_RT_Heap_BackendFrameEnd
==============
*/
void R_RT_Heap_BackendFrameEnd(void)
{
  R_RT_Heap_PassRef **p_m_passRefs; 
  __int64 v1; 
  __int64 v2; 
  R_RT_Heap_PassRef *v3; 
  int v4; 
  __int64 v5; 
  R_RT_AllocationLockSentry v6; 

  R_RT_AllocationLockSentry::R_RT_AllocationLockSentry(&v6);
  if ( s_R_RT_Heap.m_activePass && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_heap_impl.h", 1084, ASSERT_TYPE_ASSERT, "(!s_R_RT_Heap.m_activePass)", (const char *)&queryFormat, "!s_R_RT_Heap.m_activePass", -2i64) )
    __debugbreak();
  p_m_passRefs = &s_R_RT_Heap.m_pools[0].m_passRefs;
  v1 = 4i64;
  do
  {
    v2 = (__int64)*(p_m_passRefs - 2);
    v3 = *p_m_passRefs;
    v4 = *((unsigned __int16 *)p_m_passRefs + 5);
    v5 = 0i64;
    if ( *((_WORD *)p_m_passRefs + 5) )
    {
      do
      {
        if ( (*(_BYTE *)(96i64 * v3[v5].m_blockIndex + v2 + 16) & 4) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_heap_impl.h", 1103, ASSERT_TYPE_ASSERT, "(!(block->m_state.m_flags & R_RT_Heap_State::s_Flag_Live))", (const char *)&queryFormat, "!(block->m_state.m_flags & R_RT_Heap_State::s_Flag_Live)") )
          __debugbreak();
        v5 = (unsigned int)(v5 + 1);
      }
      while ( (_DWORD)v5 != v4 );
    }
    p_m_passRefs += 6;
    --v1;
  }
  while ( v1 );
  R_RT_Heap_UpdateAbandonedBlocks(4u);
  R_RT_AllocationLockSentry::~R_RT_AllocationLockSentry(&v6);
}

/*
==============
R_RT_Heap_BackendPassBegin
==============
*/
void R_RT_Heap_BackendPassBegin(unsigned __int16 pass)
{
  R_RT_AllocationLockSentry v2; 

  R_RT_AllocationLockSentry::R_RT_AllocationLockSentry(&v2);
  R_RT_Heap_ActivatePassBlocks(pass);
  R_RT_AllocationLockSentry::~R_RT_AllocationLockSentry(&v2);
}

/*
==============
R_RT_Heap_BackendPassEnd
==============
*/
void R_RT_Heap_BackendPassEnd(unsigned __int16 pass)
{
  unsigned __int16 *p_m_passRefCount; 
  __int64 v3; 
  __int64 v4; 
  int v5; 
  unsigned int v6; 
  R_RT_AllocationLockSentry v7; 

  R_RT_AllocationLockSentry::R_RT_AllocationLockSentry(&v7);
  if ( s_R_RT_Heap.m_activePass != pass && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_heap_impl.h", 1135, ASSERT_TYPE_ASSERT, "(s_R_RT_Heap.m_activePass == pass)", (const char *)&queryFormat, "s_R_RT_Heap.m_activePass == pass") )
    __debugbreak();
  p_m_passRefCount = &s_R_RT_Heap.m_pools[0].m_passRefCount;
  v3 = 4i64;
  do
  {
    v4 = *(_QWORD *)(p_m_passRefCount - 5);
    v5 = *p_m_passRefCount;
    v6 = 0;
    if ( *p_m_passRefCount )
    {
      do
      {
        if ( *(_WORD *)(v4 + 40i64 * v6 + 2) == pass && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_heap_impl.h", 1149, ASSERT_TYPE_ASSERT, "(passRef->m_pass != pass)", "%s\n\tname=%s, location=%s", "passRef->m_pass != pass", *(const char **)(v4 + 40i64 * v6 + 8), *(const char **)(v4 + 40i64 * v6 + 16)) )
          __debugbreak();
        ++v6;
      }
      while ( v6 != v5 );
    }
    p_m_passRefCount += 24;
    --v3;
  }
  while ( v3 );
  R_RT_AllocationLockSentry::~R_RT_AllocationLockSentry(&v7);
  s_R_RT_Heap.m_activePass = 0;
}

/*
==============
R_RT_Heap_Create
==============
*/
bool R_RT_Heap_Create(unsigned int size, R_RT_HeapFlags flags, const char *name, R_RT_Heap *heap, const R_RT_Tracking_AllocContext *allocContext)
{
  unsigned int v6; 
  bool v7; 
  unsigned __int8 *Base; 
  unsigned __int16 HeapIndex; 
  bool result; 

  v6 = size;
  if ( (flags & 1) != 0 )
  {
    heap->pageRange.lastPageID = 512;
    heap->pageRange.firstPageID = 0;
    v7 = 1;
    v6 = 0x2000000;
    Base = (unsigned __int8 *)Mem_ESRAM_GetBase();
  }
  else
  {
    if ( !size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_heap_impl.h", 959, ASSERT_TYPE_ASSERT, "(size > 0)", (const char *)&queryFormat, "size > 0") )
      __debugbreak();
    HeapIndex = R_RT_GetHeapIndex(heap);
    v7 = 0;
    Base = (unsigned __int8 *)R_RT_Heap_AllocInternal(v6, 0xFFFFu, HeapIndex, &heap->pageRange, R_RT_Lifetime_Permanent, 0, allocContext);
  }
  heap->heapMemory = Base;
  result = 1;
  heap->size = v6;
  heap->esram = v7;
  return result;
}

/*
==============
R_RT_Heap_CreateESRAM
==============
*/
void R_RT_Heap_CreateESRAM(R_RT_Heap *heap)
{
  heap->pageRange.firstPageID = 0;
  heap->pageRange.lastPageID = 512;
  heap->heapMemory = (unsigned __int8 *)Mem_ESRAM_GetBase();
  heap->size = 0x2000000;
  heap->esram = 1;
}

/*
==============
R_RT_Heap_Destroy
==============
*/
void R_RT_Heap_Destroy(R_RT_Heap *heap)
{
  if ( heap->heapMemory )
  {
    if ( !heap->esram )
      R_RT_Heap_Free(heap->heapMemory);
  }
}

/*
==============
R_RT_Heap_FindAvailableBlockForPass
==============
*/
__int64 R_RT_Heap_FindAvailableBlockForPass(unsigned int commitSizeOverAlign, unsigned __int16 pass, R_RT_Heap_Block *blocks, const R_RT_Heap_PassRef *passRefs, unsigned int passRefCount)
{
  const R_RT_Heap_PassRef *v5; 
  const R_RT_Heap_PassRef *v9; 
  int v10; 
  R_RT_Heap_Block *v11; 
  __int64 v12; 
  int v13; 
  char *v14; 
  __int64 v15; 
  __int64 v16; 
  char v17; 
  R_RT_Heap_Block *v18; 
  __int16 v19; 
  int v20; 
  int v21; 
  __int64 v22; 
  char *v23; 
  char v24; 
  __int64 v25; 
  __int64 v26; 
  char *i; 
  __int64 v28; 
  char *v29; 
  char *v31; 
  char *v32; 
  char v33[51360]; 
  char v34[51360]; 

  v5 = passRefs;
  v31 = v33;
  v32 = v34;
  v9 = &passRefs[passRefCount];
  if ( (pass & 0xFFF) == 4095 )
  {
    v10 = pass & 0xF000;
    if ( passRefs != v9 )
    {
      do
      {
        v11 = &blocks[v5->m_blockIndex];
        if ( (v11->m_state.m_flags & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_heap_impl.h", 550, ASSERT_TYPE_ASSERT, "(block->m_state.m_flags & R_RT_Heap_State::s_Flag_Pass)", (const char *)&queryFormat, "block->m_state.m_flags & R_RT_Heap_State::s_Flag_Pass") )
          __debugbreak();
        if ( v11->m_commitSizeOverAlign == commitSizeOverAlign && v11->m_tiledPlacement == 0xFFFF && !v11->m_heapIndex )
        {
          v12 = 0i64;
          v13 = v5->m_pass & 0xF000;
          if ( v10 == v13 )
            v12 = 1i64;
          v14 = (&v31)[v12];
          v15 = 0i64;
          *(__m256i *)v14 = *(__m256i *)&v5->m_blockIndex;
          *((double *)v14 + 4) = *(double *)&v5->m_record.m_size;
          v16 = (__int64)(v14 + 40);
          if ( v10 == v13 )
            v15 = 1i64;
          (&v31)[v15] = (char *)v16;
          v17 = 1;
        }
        else
        {
          v17 = 0;
        }
        ++v5;
        v11->m_passScanState = v17;
      }
      while ( v5 != v9 );
      goto LABEL_31;
    }
    return 0xFFFFFFFFi64;
  }
  if ( passRefs == v9 )
    return 0xFFFFFFFFi64;
  do
  {
    v18 = &blocks[v5->m_blockIndex];
    if ( (v18->m_state.m_flags & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_heap_impl.h", 572, ASSERT_TYPE_ASSERT, "(block->m_state.m_flags & R_RT_Heap_State::s_Flag_Pass)", (const char *)&queryFormat, "block->m_state.m_flags & R_RT_Heap_State::s_Flag_Pass") )
      __debugbreak();
    if ( v18->m_commitSizeOverAlign == commitSizeOverAlign && v18->m_tiledPlacement == 0xFFFF && !v18->m_heapIndex )
    {
      v19 = -1;
      if ( (v5->m_pass & 0xFFF) == 4095 )
        v19 = -4096;
      v20 = (unsigned __int16)(v19 & v5->m_pass);
      v21 = (unsigned __int16)(v19 & pass);
      v22 = 0i64;
      if ( v21 == v20 )
        v22 = 1i64;
      v23 = (&v31)[v22];
      *(__m256i *)v23 = *(__m256i *)&v5->m_blockIndex;
      *((double *)v23 + 4) = *(double *)&v5->m_record.m_size;
      (&v31)[v22] = v23 + 40;
      v24 = 1;
    }
    else
    {
      v24 = 0;
    }
    ++v5;
    v18->m_passScanState = v24;
  }
  while ( v5 != v9 );
LABEL_31:
  v25 = (__int64)v31;
  if ( v33 == v31 )
    return 0xFFFFFFFFi64;
  v26 = (__int64)v32;
  for ( i = v34; i != (char *)v26; blocks[v28].m_passScanState = R_RT_Heap_PassScanState_CompatibleMatch )
  {
    v28 = *(unsigned __int16 *)i;
    i += 40;
  }
  v29 = v33;
  while ( blocks[*(unsigned __int16 *)v29].m_passScanState != R_RT_Heap_PassScanState_Compatible )
  {
    v29 += 40;
    if ( v29 == (char *)v25 )
      return 0xFFFFFFFFi64;
  }
  return *(unsigned __int16 *)v29;
}

/*
==============
R_RT_Heap_Free
==============
*/
void R_RT_Heap_Free(void *mem)
{
  unsigned int v2; 
  unsigned __int64 m_blockCountMax; 
  unsigned __int64 m_blockSize; 
  R_RT_Heap_Pool *v5; 
  unsigned __int64 v6; 
  R_RT_Heap_Block *m_blocks; 
  unsigned __int64 v8; 
  unsigned __int64 v9; 
  unsigned __int64 v10; 
  R_RT_Heap_Block *v11; 
  unsigned __int8 m_flags; 
  __int64 m_abandonedRefCount; 
  IWMemID v14; 

  if ( !s_R_RT_Heap.m_startuped && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_heap_impl.h", 872, ASSERT_TYPE_ASSERT, "(s_R_RT_Heap.m_startuped)", (const char *)&queryFormat, "s_R_RT_Heap.m_startuped") )
    __debugbreak();
  if ( !Sys_IsMainThread() && !Sys_IsRenderThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_common_impl.h", 69, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread() || Sys_IsRenderThread())", (const char *)&queryFormat, "Sys_IsMainThread() || Sys_IsRenderThread()") )
    __debugbreak();
  if ( s_R_RT_common.m_allocationLockMode != Sys_IsRenderThread() + 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_heap_impl.h", 873, ASSERT_TYPE_ASSERT, "(R_RT_HaveAllocationLock())", (const char *)&queryFormat, "R_RT_HaveAllocationLock()") )
    __debugbreak();
  if ( !mem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_heap_impl.h", 874, ASSERT_TYPE_ASSERT, "(mem)", (const char *)&queryFormat, "mem") )
    __debugbreak();
  v2 = 0;
  while ( (char *)mem - *((_QWORD *)&s_R_RT_Heap.m_blocks[-2].nextFreeBlockIndex + 6 * v2) >= (char *)s_R_RT_Heap_pool_size[v2] )
  {
    if ( ++v2 >= 4 )
    {
      LOBYTE(v2) = 4;
      break;
    }
  }
  m_blockCountMax = g_R_RT_Heap_poolConfigs[(unsigned __int8)v2].m_blockCountMax;
  m_blockSize = g_R_RT_Heap_poolConfigs[(unsigned __int8)v2].m_blockSize;
  v5 = (R_RT_Heap_Pool *)((char *)&s_R_RT_Heap.m_blocks[-2] + 48 * (unsigned __int8)v2);
  v6 = (_BYTE *)mem - v5->m_base;
  m_blocks = v5->m_blocks;
  if ( v6 % m_blockSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_heap_impl.h", 888, ASSERT_TYPE_ASSERT, "(blockOffset % blockSize == 0)", (const char *)&queryFormat, "blockOffset % blockSize == 0") )
    __debugbreak();
  v8 = v6;
  v9 = (unsigned __int16)(v6 / m_blockSize);
  v10 = v8 / m_blockSize;
  if ( v9 >= m_blockCountMax && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\containers\\block_allocator.h", 51, ASSERT_TYPE_ASSERT, "(index < blockCount)", (const char *)&queryFormat, "index < blockCount") )
    __debugbreak();
  v11 = &m_blocks[v9];
  if ( !v11->m_commitSizeOverAlign && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_heap_impl.h", 891, ASSERT_TYPE_ASSERT, "(block->m_commitSizeOverAlign != 0)", (const char *)&queryFormat, "block->m_commitSizeOverAlign != 0") )
    __debugbreak();
  if ( !v11->m_record.m_surfaceID && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_heap_impl.h", 892, ASSERT_TYPE_ASSERT, "(block->m_record.m_surfaceID)", (const char *)&queryFormat, "block->m_record.m_surfaceID") )
    __debugbreak();
  m_flags = v11->m_state.m_flags;
  v11->m_record.m_surfaceID = 0;
  if ( (m_flags & 4) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_heap_impl.h", 897, ASSERT_TYPE_ASSERT, "(stateFlags & R_RT_Heap_State::s_Flag_Live)", (const char *)&queryFormat, "stateFlags & R_RT_Heap_State::s_Flag_Live") )
    __debugbreak();
  if ( (m_flags & 8) != 0 && R_RT_RemoveLivePassRef(v5, (unsigned __int16)v10) )
  {
    v11->m_state.m_flags = 9;
  }
  else
  {
    *(_WORD *)&v11->m_state.m_flags = 3;
    m_abandonedRefCount = v5->m_abandonedRefCount;
    if ( (unsigned int)m_abandonedRefCount >= (unsigned int)m_blockCountMax && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_heap_impl.h", 914, ASSERT_TYPE_ASSERT, "(abandonedRefCount < blockCountMax)", (const char *)&queryFormat, "abandonedRefCount < blockCountMax") )
      __debugbreak();
    v5->m_abandonedRefs[m_abandonedRefCount] = v10;
    v14 = s_iwMemRTHeapAlloc;
    v5->m_abandonedRefCount = m_abandonedRefCount + 1;
    IWMem_Free(v14, mem, 0xFFFFFFFFFFFFFFFFui64);
  }
}

/*
==============
R_RT_Heap_GetAllocRecords
==============
*/
__int64 R_RT_Heap_GetAllocRecords(R_RT_Tracking_AllocRecord *outAllocRecords, R_RT_Heap_PoolID heapPoolID)
{
  __int64 v4; 
  __int64 v5; 
  R_RT_Tracking_AllocRecord *v6; 
  R_RT_Heap_Block *m_blocks; 
  R_RT_Heap_Block *v8; 
  __m256i *p_m_record; 
  __int64 v10; 

  Profile_Begin(121);
  if ( !Sys_IsMainThread() && !Sys_IsRenderThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_common_impl.h", 69, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread() || Sys_IsRenderThread())", (const char *)&queryFormat, "Sys_IsMainThread() || Sys_IsRenderThread()", -2i64) )
    __debugbreak();
  if ( s_R_RT_common.m_allocationLockMode != Sys_IsRenderThread() + 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_heap_impl.h", 1167, ASSERT_TYPE_ASSERT, "(R_RT_HaveAllocationLock())", (const char *)&queryFormat, "R_RT_HaveAllocationLock()") )
    __debugbreak();
  v4 = (unsigned __int8)heapPoolID;
  v5 = (unsigned __int8)heapPoolID;
  v6 = outAllocRecords;
  m_blocks = s_R_RT_Heap.m_pools[v5].m_blocks;
  v8 = &m_blocks[g_R_RT_Heap_poolConfigs[v4].m_blockCountMax];
  if ( m_blocks != v8 )
  {
    p_m_record = (__m256i *)&m_blocks->m_record;
    do
    {
      if ( p_m_record[-1].m256i_i16[5] )
        *v6++ = *(R_RT_Tracking_AllocRecord *)p_m_record;
      ++m_blocks;
      p_m_record += 3;
    }
    while ( m_blocks != v8 );
  }
  v10 = v6 - outAllocRecords;
  if ( (_DWORD)v10 != s_R_RT_Heap.m_pools[v5].m_allocBlockCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_heap_impl.h", 1177, ASSERT_TYPE_ASSERT, "(allocRecordCount == pool->m_allocBlockCount)", (const char *)&queryFormat, "allocRecordCount == pool->m_allocBlockCount") )
    __debugbreak();
  Profile_EndInternal(NULL);
  return (unsigned int)v10;
}

/*
==============
R_RT_Heap_MapUnmapMemory
==============
*/
void R_RT_Heap_MapUnmapMemory(unsigned __int8 *start, unsigned __int8 *end, const R_RT_TiledPlacement *tiledPlacement, bool map)
{
  unsigned __int8 *v5; 
  unsigned __int16 tiledRangeCount; 
  unsigned int v9; 
  unsigned int v10; 
  unsigned int v11; 
  unsigned int v12; 
  __int64 v13; 
  unsigned __int16 heapIndex; 
  unsigned __int16 *p_tileCount; 
  __int64 v16; 
  __int64 v17; 
  unsigned __int8 *v18; 
  __int64 v19; 
  int v20; 
  int v21; 
  int v22; 
  Mem_MapRange mapRanges[20]; 

  v5 = end;
  if ( tiledPlacement->tiledRangeCount > 0x14u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_heap_impl.h", 193, ASSERT_TYPE_ASSERT, "(tiledPlacement->tiledRangeCount <= g_R_RT_tiledPlacementRangesMax)", (const char *)&queryFormat, "tiledPlacement->tiledRangeCount <= g_R_RT_tiledPlacementRangesMax") )
    __debugbreak();
  tiledRangeCount = tiledPlacement->tiledRangeCount;
  v9 = 0;
  if ( tiledRangeCount )
  {
    do
    {
      v10 = 0;
      v11 = tiledRangeCount;
      v12 = 0;
      v13 = v9;
      heapIndex = tiledPlacement->tiledRanges[v13].heapIndex;
      if ( v9 < tiledRangeCount )
      {
        p_tileCount = &tiledPlacement->tiledRanges[v13].tileCount;
        do
        {
          if ( p_tileCount[1] != heapIndex )
            break;
          v16 = v10;
          ++v9;
          ++v10;
          v17 = v16;
          mapRanges[v17].pageOffset = *(p_tileCount - 1);
          LODWORD(v16) = *p_tileCount;
          p_tileCount += 3;
          v12 += v16;
          mapRanges[v17].pageCount = v16;
        }
        while ( v9 < v11 );
      }
      v18 = &start[0x10000 * (unsigned __int64)v12];
      if ( heapIndex != 0xFFFF )
      {
        if ( heapIndex >= 4u && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_heap_impl.h", 214, ASSERT_TYPE_ASSERT, "(heapIndex < g_R_RT_tiledPlacementHeapsMax)", (const char *)&queryFormat, "heapIndex < g_R_RT_tiledPlacementHeapsMax") )
          __debugbreak();
        v19 = 40i64 * tiledPlacement->heaps[heapIndex].m_heapID;
        v20 = *(_DWORD *)((char *)&g_R_RT_Manager.m_surfaceAllocator.blocks[4095].m_tracking.m_refRecords[2].m_location + v19);
        v21 = v20 - 1;
        v22 = v20 + 1;
        if ( !map )
          v22 = v21;
        *(_DWORD *)((char *)&g_R_RT_Manager.m_surfaceAllocator.blocks[4095].m_tracking.m_refRecords[2].m_location + v19) = v22;
        if ( *((_BYTE *)&g_R_RT_Manager.m_heapAllocator.headFreeBlockIndex + v19) )
        {
          if ( map )
            Mem_Paged_MapESRAM(start, v18, mapRanges, v10);
          else
            Mem_Paged_UnmapESRAM(start, v18, mapRanges, v10);
        }
        else if ( map )
        {
          Mem_Paged_MapMemory(start, v18, (const Mem_PageRange *)((char *)&g_R_RT_Manager.m_surfaceAllocator.blocks[4095].m_tracking.m_refRecords[3].m_location + v19), mapRanges, v10);
        }
        else
        {
          Mem_Paged_UnmapMemory(start, v18, mapRanges, v10);
        }
      }
      start = v18;
      tiledRangeCount = tiledPlacement->tiledRangeCount;
    }
    while ( v9 < tiledRangeCount );
    v5 = end;
  }
  if ( start != v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_heap_impl.h", 241, ASSERT_TYPE_ASSERT, "(addressRange == end)", (const char *)&queryFormat, "addressRange == end") )
    __debugbreak();
}

/*
==============
R_RT_Heap_SetBlockOwnership
==============
*/
void R_RT_Heap_SetBlockOwnership(R_RT_Heap_Pool *pool, unsigned int blockIndex, R_RT_Heap_Block *block, bool live, unsigned __int16 pass, const R_RT_Tracking_AllocContext *allocContext)
{
  unsigned __int8 v8; 
  unsigned __int16 v9; 

  v8 = 4 * live + 1;
  if ( pass )
  {
    block->m_state.m_abandoned.m_abandonedFrameCount = 0;
    v9 = R_RT_Heap_AddPassRef(pool, blockIndex, pass, allocContext);
    block->m_state.m_flags = v8 | 8;
    if ( live )
      block->m_state.m_pass.m_livePassRefIndex = v9;
  }
  else
  {
    block->m_state.m_flags = v8;
  }
}

/*
==============
R_RT_Heap_Shutdown
==============
*/
void R_RT_Heap_Shutdown(void)
{
  unsigned __int16 *p_m_passRefCount; 
  __int64 v1; 
  __int64 v2; 
  unsigned int *p_m_blockCountMax; 
  R_RT_Heap_Block **p_m_blocks; 
  __int64 v5; 
  const char **p_m_location; 
  __int64 v7; 
  R_RT_AllocationLockSentry v8; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_heap_impl.h", 471, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( !s_R_RT_Heap.m_startuped && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_heap_impl.h", 472, ASSERT_TYPE_ASSERT, "(s_R_RT_Heap.m_startuped)", (const char *)&queryFormat, "s_R_RT_Heap.m_startuped") )
    __debugbreak();
  R_RT_AllocationLockSentry::R_RT_AllocationLockSentry(&v8);
  p_m_passRefCount = &s_R_RT_Heap.m_pools[0].m_passRefCount;
  v1 = 4i64;
  v2 = 4i64;
  do
  {
    if ( *p_m_passRefCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_heap_impl.h", 484, ASSERT_TYPE_ASSERT, "(pool->m_passRefCount == 0)", (const char *)&queryFormat, "pool->m_passRefCount == 0") )
      __debugbreak();
    p_m_passRefCount += 24;
    --v2;
  }
  while ( v2 );
  R_RT_Heap_UpdateAbandonedBlocks(0);
  p_m_blockCountMax = &g_R_RT_Heap_poolConfigs[0].m_blockCountMax;
  p_m_blocks = &s_R_RT_Heap.m_pools[0].m_blocks;
  do
  {
    if ( *((_DWORD *)p_m_blocks + 8) )
    {
      v5 = (__int64)&(*p_m_blocks)[*p_m_blockCountMax];
      if ( *p_m_blocks != (R_RT_Heap_Block *)v5 )
      {
        p_m_location = &(*p_m_blocks)->m_record.m_location;
        do
        {
          if ( *((unsigned __int16 *)p_m_location - 15) << 16 )
          {
            LODWORD(v7) = *((unsigned __int16 *)p_m_location - 15) << 16;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_heap_impl.h", 504, ASSERT_TYPE_ASSERT, "(commitSize == 0)", "%s\n\tRT heap leak: name=%s, location=%s, size=%d", "commitSize == 0", *(p_m_location - 1), *p_m_location, v7) )
              __debugbreak();
          }
          p_m_location += 12;
        }
        while ( p_m_location - 4 != (const char **)v5 );
      }
    }
    p_m_blocks += 6;
    p_m_blockCountMax += 2;
    --v1;
  }
  while ( v1 );
  memset_0(s_R_RT_Heap.m_pools, 0, 0xF180ui64);
  s_R_RT_Heap.m_activePass = 0;
  memset_0(s_R_RT_Heap.m_abandonedRefs, 0, sizeof(s_R_RT_Heap.m_abandonedRefs));
  memset_0(s_R_RT_Heap.m_passRefs, 0, sizeof(s_R_RT_Heap.m_passRefs));
  s_R_RT_Heap.m_startuped = 0;
  R_RT_AllocationLockSentry::~R_RT_AllocationLockSentry(&v8);
}

/*
==============
R_RT_Heap_Startup
==============
*/
void R_RT_Heap_Startup(void)
{
  XB3ConsoleType XB3ConsoleType; 
  const char *v1; 
  const unsigned int *v2; 
  R_RT_Heap_PoolConfig *v3; 
  unsigned int v4; 
  unsigned __int64 v5; 
  __int64 v6; 
  unsigned __int64 v7; 
  __int64 v8; 
  __int64 m_blockSize; 
  __int64 m_blockCountMax; 
  R_RT_Heap_Block *v11; 
  __m256i *p_m_record; 
  R_RT_Heap_PoolConfig *v13; 
  int v14; 
  int v15; 
  R_RT_Heap_Block **p_m_blocks; 
  unsigned int v17; 
  unsigned int v18; 
  __int64 v19; 
  R_RT_Heap_Block *v20; 
  __int64 v21; 
  R_RT_Heap_Block *v22; 
  __int64 v23; 
  R_RT_Heap_Block *v24; 
  char *fmt; 
  __int64 v26; 
  __int64 v27; 
  __m256i v28; 
  R_RT_Heap_Block *v29; 

  if ( !Sys_IsMainThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_heap_impl.h", 360, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread())", (const char *)&queryFormat, "Sys_IsMainThread()") )
    __debugbreak();
  if ( s_R_RT_Heap.m_startuped && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_heap_impl.h", 361, ASSERT_TYPE_ASSERT, "(!s_R_RT_Heap.m_startuped)", (const char *)&queryFormat, "!s_R_RT_Heap.m_startuped") )
    __debugbreak();
  s_R_RT_Heap.m_startuped = 1;
  XB3ConsoleType = Sys_GetXB3ConsoleType();
  v1 = "Durango";
  if ( XB3ConsoleType == XB3_CONSOLE_SCORPIO )
    v1 = "Scorpio";
  Com_sprintf<256>((char (*)[256])s_R_RT_Heap.m_blackboxHWMName, "RenderTargetCommit_%s", v1);
  if ( vidConfig.displayHeight == 2160 )
  {
    if ( vidConfig.displayWidth != 3840 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_heap_impl.h", 383, ASSERT_TYPE_ASSERT, "(vidConfig.displayWidth == 3840)", (const char *)&queryFormat, "vidConfig.displayWidth == 3840") )
      __debugbreak();
    v2 = g_R_RT_Heap_UHD_pool_blockSize;
  }
  else
  {
    v2 = g_R_RT_Heap_pool_blockSize;
  }
  v3 = g_R_RT_Heap_poolConfigs;
  g_R_RT_Heap_poolConfigs[0].m_blockSize = *v2;
  g_R_RT_Heap_poolConfigs[1].m_blockSize = v2[1];
  s_R_RT_Heap_pool_size[0] = 2i64 * g_R_RT_Heap_poolConfigs[0].m_blockSize;
  g_R_RT_Heap_poolConfigs[0].m_blockCountMax = 2;
  g_R_RT_Heap_poolConfigs[1].m_blockCountMax = 24;
  v4 = v2[2];
  s_R_RT_Heap_pool_size[1] = 24i64 * g_R_RT_Heap_poolConfigs[1].m_blockSize;
  v5 = (unsigned __int64)v4 << 7;
  g_R_RT_Heap_poolConfigs[2].m_blockSize = v4;
  v6 = v2[3];
  s_R_RT_Heap_pool_size[2] = v5;
  g_R_RT_Heap_poolConfigs[2].m_blockCountMax = 128;
  v7 = 0i64;
  s_R_RT_Heap_pool_size[3] = 488 * v6;
  g_R_RT_Heap_poolConfigs[3].m_blockSize = v6;
  g_R_RT_Heap_poolConfigs[3].m_blockCountMax = 488;
  v8 = 4i64;
  do
  {
    m_blockSize = v3->m_blockSize;
    m_blockCountMax = v3->m_blockCountMax;
    if ( (_WORD)m_blockSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_heap_impl.h", 406, ASSERT_TYPE_ASSERT, "(blockSize % s_R_RT_Heap_commitAlign == 0)", (const char *)&queryFormat, "blockSize % s_R_RT_Heap_commitAlign == 0") )
      __debugbreak();
    if ( (unsigned int)m_blockCountMax > 0x1000 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_heap_impl.h", 408, ASSERT_TYPE_ASSERT, "(blockCountMax <= g_R_RT_surfaceMax)", (const char *)&queryFormat, "blockCountMax <= g_R_RT_surfaceMax") )
      __debugbreak();
    ++v3;
    v7 += m_blockSize * m_blockCountMax;
    --v8;
  }
  while ( v8 );
  PMem_BeginAlloc("$r_rt_heap", PMEM_STACK_RENDER_TARGETS);
  v11 = (R_RT_Heap_Block *)PMem_Alloc(v7, 0x10000ui64, MEM_POOL_GPU_PRIVATE, PMEM_STACK_RENDER_TARGETS, "R_RT_Heap");
  PMem_EndAlloc("$r_rt_heap", PMEM_STACK_RENDER_TARGETS);
  v29 = (R_RT_Heap_Block *)((char *)v11 + v7);
  Com_Printf(8, "R_RT_Heap: Reserved %dMB, 0x%p - 0x%p\n", v7 >> 20, v11, (char *)v11 + v7);
  IWMem_Allocator_CreateFixed(&s_iwMemRTHeapCommit, "R_RT_Heap Commit", (IWMemAllocatorType)4, v11, v7);
  IWMem_Allocator_SetFlag(s_iwMemRTHeapCommit, FreeUnknownSize);
  IWMem_Allocator_CreateFixed(&s_iwMemRTHeapAlloc, "R_RT_Heap Alloc", (IWMemAllocatorType)6, v11, v7);
  IWMem_Allocator_SetFlag(s_iwMemRTHeapAlloc, FreeUnknownSize);
  p_m_record = (__m256i *)&s_R_RT_Heap.m_blocks[0].m_record;
  v13 = g_R_RT_Heap_poolConfigs;
  do
  {
    p_m_record[2].m256i_i32[0] = 0;
    DebugWipe(p_m_record, 0x20ui64);
    v14 = p_m_record[2].m256i_i32[0];
    v28 = *p_m_record;
    DebugWipe(&p_m_record[-1].m256i_u64[1], 0x60ui64);
    p_m_record[1] = v28;
    p_m_record[-1].m256i_i8[24] = 0;
    *(int *)((char *)&p_m_record[-1].m256i_i32[2] + 2) = -65536;
    p_m_record[-1].m256i_i16[7] = 0;
    p_m_record->m256i_i16[14] = 0;
    p_m_record[2].m256i_i32[0] = v14;
    p_m_record += 3;
  }
  while ( &p_m_record[-1].m256i_u64[1] != (unsigned __int64 *)s_R_RT_Heap.m_abandonedRefs );
  v15 = 0;
  p_m_blocks = &s_R_RT_Heap.m_pools[0].m_blocks;
  v17 = 0;
  do
  {
    v18 = v13->m_blockCountMax;
    v19 = v13->m_blockSize;
    v20 = (R_RT_Heap_Block *)((char *)v11 + v19 * v18);
    LODWORD(v27) = v18 + v15;
    LODWORD(v26) = v15;
    LODWORD(fmt) = (unsigned int)v19 >> 10;
    Com_Printf(8, "R_RT_Heap: Pool %d: %d*%dKB, block %d - %d, 0x%p - 0x%p\n", v17, v18, fmt, v26, v27, v11, v20);
    v21 = v18 - 1;
    *(p_m_blocks - 1) = v11;
    *((_DWORD *)p_m_blocks + 6) = 0;
    v22 = &s_R_RT_Heap.m_blocks[v15];
    *p_m_blocks = v22;
    p_m_blocks[1] = (R_RT_Heap_Block *)&s_R_RT_Heap.m_abandonedRefs[v15];
    p_m_blocks[2] = (R_RT_Heap_Block *)&s_R_RT_Heap.m_passRefs[2 * v15 * v17];
    v23 = 0i64;
    *((_BYTE *)p_m_blocks + 30) = 1;
    if ( v18 != 1 )
    {
      v24 = &s_R_RT_Heap.m_blocks[v15];
      do
      {
        v24->nextFreeBlockIndex = ++v23;
        ++v24;
      }
      while ( v23 != v21 );
    }
    v15 += v18;
    ++v17;
    ++v13;
    v11 = v20;
    v22[v21].nextFreeBlockIndex = -1;
    *((_WORD *)p_m_blocks + 14) = 0;
    p_m_blocks += 6;
  }
  while ( v17 != 4 );
  if ( v20 != v29 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_heap_impl.h", 460, ASSERT_TYPE_ASSERT, "(poolBase == base + size)", (const char *)&queryFormat, "poolBase == base + size") )
    __debugbreak();
  if ( v15 != 642 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_heap_impl.h", 461, ASSERT_TYPE_ASSERT, "(poolBlockStart == ( sizeof( *array_counter( s_R_RT_Heap.m_blocks ) ) + 0 ))", (const char *)&queryFormat, "poolBlockStart == ARRAY_COUNT( s_R_RT_Heap.m_blocks )") )
    __debugbreak();
  s_R_RT_Heap.m_activePass = 0;
}

/*
==============
R_RT_Heap_UpdateAbandonedBlocks
==============
*/
void R_RT_Heap_UpdateAbandonedBlocks(unsigned int __formal)
{
  unsigned int v1; 
  int v2; 
  R_RT_Heap_PoolConfig *v3; 
  unsigned int *p_m_allocBlockCount; 
  unsigned __int16 v5; 
  unsigned int m_blockCountMax; 
  unsigned __int16 *v7; 
  _WORD *v8; 
  __int64 v9; 
  __int64 v10; 
  __int64 v11; 
  unsigned int v12; 
  R_RT_Tracking_CommitRecord *v13; 
  unsigned __int8 *v14; 
  __int64 v15; 
  unsigned __int16 v16; 
  __int64 v17; 
  __int16 v18; 
  __int64 v19; 
  __int64 v20; 
  int v21; 
  unsigned __int16 v22; 
  unsigned int v23; 
  __int16 *v24; 
  __int64 v25; 
  char *v26; 
  unsigned __int64 v27; 
  Mem_PageRange *inoutPageRange; 
  __int64 v29; 
  __int64 v30; 
  unsigned int v31; 
  int v32; 
  unsigned int m_blockSize; 
  unsigned int v34; 
  __int64 v35; 
  R_RT_Heap_PoolConfig *v36; 
  __int64 v37; 
  Mem_PageRange v38; 
  unsigned __int16 *v39; 
  unsigned __int16 *v40; 
  __int64 v41; 
  __m256i v42; 
  __int16 v43[20]; 

  v41 = -2i64;
  Profile_Begin(118);
  if ( !Sys_IsMainThread() && !Sys_IsRenderThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_common_impl.h", 69, ASSERT_TYPE_ASSERT, "(Sys_IsMainThread() || Sys_IsRenderThread())", (const char *)&queryFormat, "Sys_IsMainThread() || Sys_IsRenderThread()") )
    __debugbreak();
  if ( s_R_RT_common.m_allocationLockMode != Sys_IsRenderThread() + 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_heap_impl.h", 277, ASSERT_TYPE_ASSERT, "(R_RT_HaveAllocationLock())", (const char *)&queryFormat, "R_RT_HaveAllocationLock()") )
    __debugbreak();
  v1 = 0;
  v31 = 0;
  v2 = 0;
  v32 = 0;
  v3 = g_R_RT_Heap_poolConfigs;
  v36 = g_R_RT_Heap_poolConfigs;
  p_m_allocBlockCount = &s_R_RT_Heap.m_pools[0].m_allocBlockCount;
  do
  {
    v5 = *((_WORD *)p_m_allocBlockCount - 4);
    if ( v5 )
    {
      v37 = *((_QWORD *)p_m_allocBlockCount - 5);
      v30 = *((_QWORD *)p_m_allocBlockCount - 4);
      v40 = (unsigned __int16 *)*((_QWORD *)p_m_allocBlockCount - 3);
      m_blockSize = v3->m_blockSize;
      m_blockCountMax = v3->m_blockCountMax;
      v34 = m_blockCountMax;
      v7 = v40;
      v39 = &v40[v5];
      v8 = v40;
      v35 = (__int64)v40;
      do
      {
        v9 = *v7;
        if ( (unsigned int)v9 >= m_blockCountMax && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_heap_impl.h", 301, ASSERT_TYPE_ASSERT, "(blockIndex < blockCountMax)", (const char *)&queryFormat, "blockIndex < blockCountMax") )
          __debugbreak();
        v10 = 96 * v9;
        v11 = v30;
        if ( !*(_WORD *)(96 * v9 + v30 + 2) )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_heap_impl.h", 303, ASSERT_TYPE_ASSERT, "(block->m_commitSizeOverAlign != 0)", (const char *)&queryFormat, "block->m_commitSizeOverAlign != 0") )
            __debugbreak();
          v11 = v30;
        }
        if ( *(_WORD *)(v10 + v11 + 52) )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_heap_impl.h", 304, ASSERT_TYPE_ASSERT, "(!block->m_record.m_surfaceID)", (const char *)&queryFormat, "!block->m_record.m_surfaceID") )
            __debugbreak();
          v11 = v30;
        }
        if ( *(_BYTE *)(v10 + v11 + 16) != 3 )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_heap_impl.h", 305, ASSERT_TYPE_ASSERT, "(block->m_state.m_flags == ( R_RT_Heap_State::s_Flag_Allocated | R_RT_Heap_State::s_Flag_Abandoned ))", (const char *)&queryFormat, "block->m_state.m_flags == ( R_RT_Heap_State::s_Flag_Allocated | R_RT_Heap_State::s_Flag_Abandoned )") )
            __debugbreak();
          v11 = v30;
        }
        v12 = *(unsigned __int8 *)(v10 + v11 + 17) + 1;
        if ( v12 > 4 )
        {
          if ( !s_R_RT_Tracking.m_decommitRecordQueue.cleared && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\containers\\circular_queue.h", 39, ASSERT_TYPE_ASSERT, "(this->cleared)", (const char *)&queryFormat, "this->cleared") )
            __debugbreak();
          if ( s_R_RT_Tracking.m_decommitRecordQueue.size == 1024 )
            IWStaticCircularQueue<R_RT_Tracking_CommitRecord,1024,unsigned short>::PopFront(&s_R_RT_Tracking.m_decommitRecordQueue);
          IWStaticCircularQueue<R_RT_Tracking_CommitRecord,1024,unsigned short>::PushBack(&s_R_RT_Tracking.m_decommitRecordQueue);
          v13 = IWStaticCircularQueue<R_RT_Tracking_CommitRecord,1024,unsigned short>::Back(&s_R_RT_Tracking.m_decommitRecordQueue);
          v13->m_address = *(const void **)(v10 + v30 + 40);
          v13->m_size = *(_DWORD *)(v10 + v30 + 48);
          v13->m_name = *(const char **)(v10 + v30 + 24);
          v13->m_surfaceID = *(_WORD *)(v10 + v30 + 52);
          v13->m_location = *(const char **)(v10 + v30 + 32);
          v14 = (unsigned __int8 *)(v37 + v9 * m_blockSize);
          v15 = *(unsigned __int16 *)(v10 + v30 + 2) << 16;
          v16 = *(_WORD *)(v10 + v30 + 4);
          if ( v16 == 0xFFFF )
          {
            v38 = *(Mem_PageRange *)(v10 + v30 + 8);
            PMem_DecommitMemoryPartial((StreamerMemLoan *)&v42, PMEM_STACK_RENDER_TARGETS, v14, &v14[v15], v14, &v38);
            StreamerMemLoan::~StreamerMemLoan((StreamerMemLoan *)&v42);
            IWMem_Free(s_iwMemRTHeapCommit, v14, (unsigned int)v15);
            if ( (__int64)g_R_RT_Manager.m_commitSize <= (unsigned int)v15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_heap_impl.h", 332, ASSERT_TYPE_ASSERT, "(g_R_RT_Manager.m_commitSize > static_cast<int64_t>( commitSize ))", (const char *)&queryFormat, "g_R_RT_Manager.m_commitSize > static_cast<int64_t>( commitSize )") )
              __debugbreak();
            if ( ((unsigned __int8)&g_R_RT_Manager.m_commitSize & 7) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 86, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int64 ) ) ) )", "( addend ) = %p", &g_R_RT_Manager.m_commitSize) )
              __debugbreak();
            _InterlockedExchangeAdd64(&g_R_RT_Manager.m_commitSize, -(__int64)(unsigned int)v15);
          }
          else
          {
            v17 = v16;
            if ( !g_R_RT_Manager.m_tiledPlacementAllocator.reset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\containers\\block_allocator.h", 108, ASSERT_TYPE_ASSERT, "(this->reset)", (const char *)&queryFormat, "this->reset") )
              __debugbreak();
            if ( v16 >= 0x140u )
            {
              LODWORD(v29) = 320;
              LODWORD(inoutPageRange) = v16;
              if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\containers\\block_allocator.h", 110, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( blockCount )", "index doesn't index blockCount\n\t%i not in [0, %i)", inoutPageRange, v29) )
                __debugbreak();
            }
            if ( v16 == g_R_RT_Manager.m_tiledPlacementAllocator.headFreeBlockIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\containers\\block_allocator.h", 114, ASSERT_TYPE_ASSERT, "(index != this->headFreeBlockIndex)", (const char *)&queryFormat, "index != this->headFreeBlockIndex") )
              __debugbreak();
            g_R_RT_Manager.m_tiledPlacementAllocator.blocks[v17].nextFreeBlockIndex = g_R_RT_Manager.m_tiledPlacementAllocator.headFreeBlockIndex;
            g_R_RT_Manager.m_tiledPlacementAllocator.headFreeBlockIndex = v16;
            R_RT_Heap_MapUnmapMemory(v14, &v14[(unsigned int)v15], &g_R_RT_Manager.m_tiledPlacementAllocator.blocks[v17].placement, 0);
            v1 = v31;
          }
          v18 = *(_WORD *)(v10 + v30 + 6);
          if ( v18 )
          {
            v43[v1] = v18;
            v31 = v1 + 1;
          }
          if ( !*p_m_allocBlockCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_heap_impl.h", 264, ASSERT_TYPE_ASSERT, "(pool->m_allocBlockCount > 0)", (const char *)&queryFormat, "pool->m_allocBlockCount > 0") )
            __debugbreak();
          --*p_m_allocBlockCount;
          v19 = *((_QWORD *)p_m_allocBlockCount - 4);
          v20 = v19 + v10;
          v21 = *(_DWORD *)(v19 + v10 + 88);
          v42 = *(__m256i *)(v19 + v10 + 24);
          DebugWipe((void *)(v19 + v10), 0x60ui64);
          *(_BYTE *)(v20 + 16) = 0;
          *(_DWORD *)(v20 + 2) = -65536;
          *(_WORD *)(v20 + 6) = 0;
          *(_WORD *)(v20 + 52) = 0;
          *(__m256i *)(v20 + 56) = v42;
          *(_DWORD *)(v20 + 88) = v21;
          v22 = truncate_cast<unsigned short,unsigned int>(v9);
          v2 = v32;
          v23 = g_R_RT_Heap_poolConfigs[(unsigned __int8)v32].m_blockCountMax;
          if ( !*((_BYTE *)p_m_allocBlockCount - 2) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\containers\\block_allocator.h", 108, ASSERT_TYPE_ASSERT, "(this->reset)", (const char *)&queryFormat, "this->reset") )
            __debugbreak();
          if ( v22 >= v23 )
          {
            LODWORD(v29) = v23;
            LODWORD(inoutPageRange) = v22;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\containers\\block_allocator.h", 110, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( blockCount )", "index doesn't index blockCount\n\t%i not in [0, %i)", inoutPageRange, v29) )
              __debugbreak();
          }
          if ( v22 == *((_WORD *)p_m_allocBlockCount - 2) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\containers\\block_allocator.h", 114, ASSERT_TYPE_ASSERT, "(index != this->headFreeBlockIndex)", (const char *)&queryFormat, "index != this->headFreeBlockIndex") )
            __debugbreak();
          *(_WORD *)(96i64 * v22 + v19) = *((_WORD *)p_m_allocBlockCount - 2);
          *((_WORD *)p_m_allocBlockCount - 2) = v22;
          v8 = (_WORD *)v35;
          v1 = v31;
        }
        else
        {
          *(_BYTE *)(v10 + v30 + 17) = v12;
          *v8++ = v9;
          v35 = (__int64)v8;
        }
        ++v7;
        m_blockCountMax = v34;
      }
      while ( v7 != v39 );
      *((_WORD *)p_m_allocBlockCount - 4) = v8 - v40;
      v3 = v36;
    }
    v32 = ++v2;
    p_m_allocBlockCount += 12;
    v36 = ++v3;
  }
  while ( v2 != 4 );
  if ( v1 )
  {
    v24 = v43;
    v25 = v31;
    do
    {
      v26 = &g_R_RT_Manager.m_surfaceAllocator.blocks[4095].m_tracking.m_refRecords[2].m_colorRtIndex + 40 * (unsigned __int16)*v24;
      if ( *((_DWORD *)&g_R_RT_Manager.m_surfaceAllocator.blocks[4095].m_tracking.m_refRecords[2].m_location + 10 * (unsigned __int16)*v24) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_heap_impl.h", 351, ASSERT_TYPE_ASSERT, "(heap->placementCount == 0)", (const char *)&queryFormat, "heap->placementCount == 0") )
        __debugbreak();
      if ( !g_R_RT_Manager.m_heapAllocator.reset && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\containers\\block_allocator.h", 82, ASSERT_TYPE_ASSERT, "(this->reset)", (const char *)&queryFormat, "this->reset") )
        __debugbreak();
      v27 = (v26 - (char *)&g_R_RT_Manager.m_heapAllocator - 8) / 40;
      if ( v27 >= 0x10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\containers\\block_allocator.h", 85, ASSERT_TYPE_ASSERT, "(index < blockCount)", (const char *)&queryFormat, "index < blockCount") )
        __debugbreak();
      if ( v27 == g_R_RT_Manager.m_heapAllocator.headFreeBlockIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\containers\\block_allocator.h", 86, ASSERT_TYPE_ASSERT, "(index != this->headFreeBlockIndex)", (const char *)&queryFormat, "index != this->headFreeBlockIndex") )
        __debugbreak();
      *(_WORD *)v26 = g_R_RT_Manager.m_heapAllocator.headFreeBlockIndex;
      g_R_RT_Manager.m_heapAllocator.headFreeBlockIndex = (v26 - (char *)&g_R_RT_Manager.m_heapAllocator - 8) / 40;
      ++v24;
      --v25;
    }
    while ( v25 );
  }
  Profile_EndInternal(NULL);
}

/*
==============
R_RT_Heap_UseUHDHeaps
==============
*/
bool R_RT_Heap_UseUHDHeaps()
{
  return vidConfig.displayHeight == 2160;
}

/*
==============
R_RT_RemoveLivePassRef
==============
*/
__int64 R_RT_RemoveLivePassRef(R_RT_Heap_Pool *pool, unsigned int blockIndex)
{
  R_RT_Heap_Block *m_blocks; 
  R_RT_Heap_Block *v5; 
  int m_abandonedFrameCount; 
  unsigned int m_passRefCount; 
  R_RT_Heap_PassRef *m_passRefs; 
  __int64 v9; 
  __int64 m_livePassRefIndex; 
  R_RT_Heap_PassRef *v11; 
  unsigned __int16 m_pass; 
  const char *v13; 
  int v14; 
  const char *v15; 
  R_RT_Heap_PassRef *v16; 
  __int64 m_blockIndex; 
  unsigned __int8 m_flags; 

  m_blocks = pool->m_blocks;
  v5 = &m_blocks[blockIndex];
  if ( v5->m_state.m_flags != 13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_heap_impl.h", 640, ASSERT_TYPE_ASSERT, "(block->m_state.m_flags == ( R_RT_Heap_State::s_Flag_Allocated | R_RT_Heap_State::s_Flag_Live | R_RT_Heap_State::s_Flag_Pass ))", (const char *)&queryFormat, "block->m_state.m_flags == ( R_RT_Heap_State::s_Flag_Allocated | R_RT_Heap_State::s_Flag_Live | R_RT_Heap_State::s_Flag_Pass )") )
    __debugbreak();
  if ( !v5->m_state.m_abandoned.m_abandonedFrameCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_heap_impl.h", 641, ASSERT_TYPE_ASSERT, "(block->m_state.m_pass.m_passRefUsed > 0)", (const char *)&queryFormat, "block->m_state.m_pass.m_passRefUsed > 0") )
    __debugbreak();
  m_abandonedFrameCount = v5->m_state.m_abandoned.m_abandonedFrameCount;
  truncate_store<unsigned char,unsigned int>(&v5->m_state.m_abandoned.m_abandonedFrameCount, m_abandonedFrameCount - 1);
  m_passRefCount = pool->m_passRefCount;
  m_passRefs = pool->m_passRefs;
  v9 = m_passRefCount - 1;
  pool->m_passRefCount = m_passRefCount - 1;
  m_livePassRefIndex = v5->m_state.m_pass.m_livePassRefIndex;
  if ( (unsigned int)m_livePassRefIndex >= m_passRefCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_heap_impl.h", 651, ASSERT_TYPE_ASSERT, "(passRefIndex < oldPassRefCount)", (const char *)&queryFormat, "passRefIndex < oldPassRefCount") )
    __debugbreak();
  v11 = &m_passRefs[m_livePassRefIndex];
  if ( v11->m_blockIndex != blockIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_heap_impl.h", 653, ASSERT_TYPE_ASSERT, "(passRef->m_blockIndex == blockIndex)", (const char *)&queryFormat, "passRef->m_blockIndex == blockIndex") )
    __debugbreak();
  m_pass = v11->m_pass;
  if ( (m_pass & 0xFFF) == 4095 )
  {
    if ( !s_R_RT_Heap.m_activePass || R_RT_MatchPasses(m_pass, s_R_RT_Heap.m_activePass) )
      goto LABEL_21;
    v13 = "activePass == 0 || R_RT_MatchPasses( pass, activePass )";
    v14 = 660;
    v15 = "(activePass == 0 || R_RT_MatchPasses( pass, activePass ))";
  }
  else
  {
    if ( m_pass == s_R_RT_Heap.m_activePass )
      goto LABEL_21;
    v13 = "pass == activePass";
    v14 = 664;
    v15 = "(pass == activePass)";
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_heap_impl.h", v14, ASSERT_TYPE_ASSERT, v15, (const char *)&queryFormat, v13) )
    __debugbreak();
LABEL_21:
  v16 = &m_passRefs[v9];
  if ( (_DWORD)m_livePassRefIndex != (_DWORD)v9 )
  {
    m_blockIndex = v16->m_blockIndex;
    m_flags = m_blocks[m_blockIndex].m_state.m_flags;
    if ( (m_flags & 8) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_rt_heap_impl.h", 674, ASSERT_TYPE_ASSERT, "(tailStateFlags & R_RT_Heap_State::s_Flag_Pass)", (const char *)&queryFormat, "tailStateFlags & R_RT_Heap_State::s_Flag_Pass") )
      __debugbreak();
    if ( (m_flags & 4) != 0 && m_blocks[m_blockIndex].m_state.m_pass.m_livePassRefIndex == (_DWORD)v9 )
      m_blocks[m_blockIndex].m_state.m_pass.m_livePassRefIndex = m_livePassRefIndex;
    *(__m256i *)&v11->m_blockIndex = *(__m256i *)&v16->m_blockIndex;
    *(double *)&v11->m_record.m_size = *(double *)&v16->m_record.m_size;
  }
  DebugWipe(v16, 0x28ui64);
  return (unsigned int)(m_abandonedFrameCount - 1);
}


/*
==============
R_TG_HeapAllocatorExplicitFree::AllocateTiled
==============
*/

bool __fastcall R_TG_HeapAllocatorExplicitFree::AllocateTiled(R_TG_HeapAllocatorExplicitFree *this, const R_TG_AllocInfo *info, unsigned int *inOutSize, unsigned int outAllocLimit, R_TG_Alloc *pOutAlloc, unsigned int *outAllocCount)
{
  return ?AllocateTiled@R_TG_HeapAllocatorExplicitFree@@QEAA_NAEBUR_TG_AllocInfo@@AEAIIPEAUR_TG_Alloc@@1@Z(this, info, inOutSize, outAllocLimit, pOutAlloc, outAllocCount);
}

/*
==============
R_TG_HeapAllocatorExplicitFree::Allocate
==============
*/

bool __fastcall R_TG_HeapAllocatorExplicitFree::Allocate(R_TG_HeapAllocatorExplicitFree *this, const R_TG_AllocInfo *info, unsigned int size, unsigned int blockAlign, R_TG_Alloc *outAlloc)
{
  return ?Allocate@R_TG_HeapAllocatorExplicitFree@@QEAA_NAEBUR_TG_AllocInfo@@IIAEAUR_TG_Alloc@@@Z(this, info, size, blockAlign, outAlloc);
}

/*
==============
R_TG_HeapAllocatorExplicitFree::Free
==============
*/

void __fastcall R_TG_HeapAllocatorExplicitFree::Free(R_TG_HeapAllocatorExplicitFree *this, const R_TG_AllocInfo *info, const R_TG_Alloc *alloc)
{
  ?Free@R_TG_HeapAllocatorExplicitFree@@QEAAXAEBUR_TG_AllocInfo@@AEBUR_TG_Alloc@@@Z(this, info, alloc);
}

/*
==============
R_TG_HeapAllocatorExplicitFree::Allocate
==============
*/

bool __fastcall R_TG_HeapAllocatorExplicitFree::Allocate(R_TG_HeapAllocatorExplicitFree *this, const R_TG_AllocInfo *info, unsigned int size, R_TG_Alloc *outAlloc)
{
  return ?Allocate@R_TG_HeapAllocatorExplicitFree@@QEAA_NAEBUR_TG_AllocInfo@@IAEAUR_TG_Alloc@@@Z(this, info, size, outAlloc);
}

/*
==============
R_TG_PoolAllocator::Allocate
==============
*/

bool __fastcall R_TG_PoolAllocator::Allocate(R_TG_PoolAllocator *this, const tg::ResourceDesc *desc, unsigned int *outAlloc)
{
  return ?Allocate@R_TG_PoolAllocator@@QEAA_NAEBUResourceDesc@tg@@AEAI@Z(this, desc, outAlloc);
}

/*
==============
R_TG_HeapAllocatorExplicitFree::SyncFreeBlocks
==============
*/

void __fastcall R_TG_HeapAllocatorExplicitFree::SyncFreeBlocks(R_TG_HeapAllocatorExplicitFree *this, const R_TG_AllocInfo *info)
{
  ?SyncFreeBlocks@R_TG_HeapAllocatorExplicitFree@@QEAAXAEBUR_TG_AllocInfo@@@Z(this, info);
}

/*
==============
R_TG_PoolAllocator::Free
==============
*/

void __fastcall R_TG_PoolAllocator::Free(R_TG_PoolAllocator *this, const unsigned int index)
{
  ?Free@R_TG_PoolAllocator@@QEAAXI@Z(this, index);
}

/*
==============
R_TG_HeapAllocatorExplicitFree::SetupAlloc
==============
*/

void __fastcall R_TG_HeapAllocatorExplicitFree::SetupAlloc(R_TG_HeapAllocatorExplicitFree *this, unsigned int offset, unsigned int size, R_TG_Alloc *pOutAlloc)
{
  ?SetupAlloc@R_TG_HeapAllocatorExplicitFree@@QEAAXIIPEAUR_TG_Alloc@@@Z(this, offset, size, pOutAlloc);
}

/*
==============
R_TG_HeapAllocatorExplicitFree::CoalesceFreeBlocks
==============
*/

void __fastcall R_TG_HeapAllocatorExplicitFree::CoalesceFreeBlocks(R_TG_HeapAllocatorExplicitFree *this)
{
  ?CoalesceFreeBlocks@R_TG_HeapAllocatorExplicitFree@@QEAAXXZ(this);
}

/*
==============
R_TG_HeapAllocatorExplicitFree::AddFreeBlock
==============
*/

void __fastcall R_TG_HeapAllocatorExplicitFree::AddFreeBlock(R_TG_HeapAllocatorExplicitFree *this, const R_TG_AllocInfo *info, unsigned int offset, unsigned int size)
{
  ?AddFreeBlock@R_TG_HeapAllocatorExplicitFree@@QEAAXAEBUR_TG_AllocInfo@@II@Z(this, info, offset, size);
}

/*
==============
R_TG_HeapAllocatorExplicitFree::Init
==============
*/

void __fastcall R_TG_HeapAllocatorExplicitFree::Init(R_TG_HeapAllocatorExplicitFree *this)
{
  ?Init@R_TG_HeapAllocatorExplicitFree@@QEAAXXZ(this);
}

/*
==============
R_TG_HeapAllocatorExplicitFree::RemoveFreeBlock
==============
*/

void __fastcall R_TG_HeapAllocatorExplicitFree::RemoveFreeBlock(R_TG_HeapAllocatorExplicitFree *this, unsigned int *prevPtr, unsigned int removeBlock)
{
  ?RemoveFreeBlock@R_TG_HeapAllocatorExplicitFree@@QEAAXPEAII@Z(this, prevPtr, removeBlock);
}

/*
==============
R_TG_HeapAllocatorExplicitFree::SetupAlloc
==============
*/

void __fastcall R_TG_HeapAllocatorExplicitFree::SetupAlloc(R_TG_HeapAllocatorExplicitFree *this, unsigned int offset, unsigned int size, R_TG_Alloc *pOutAlloc, unsigned int *outAllocCount)
{
  ?SetupAlloc@R_TG_HeapAllocatorExplicitFree@@QEAAXIIPEAUR_TG_Alloc@@AEAI@Z(this, offset, size, pOutAlloc, outAllocCount);
}

/*
==============
R_TG_CachedResource::Match
==============
*/

bool __fastcall R_TG_CachedResource::Match(R_TG_CachedResource *this, const tg::ResourceDesc *desc)
{
  return ?Match@R_TG_CachedResource@@QEAA_NAEBUResourceDesc@tg@@@Z(this, desc);
}

/*
==============
R_TG_HeapAllocatorExplicitFree::AddFreeBlock
==============
*/
void R_TG_HeapAllocatorExplicitFree::AddFreeBlock(R_TG_HeapAllocatorExplicitFree *this, const R_TG_AllocInfo *info, unsigned int offset, unsigned int size)
{
  unsigned __int16 v4; 
  R_TG_Alloc alloc; 

  v4 = offset;
  if ( offset > 0xFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,unsigned int>(unsigned int)", "unsigned", (unsigned __int16)offset, "unsigned", offset) )
    __debugbreak();
  alloc.offset = v4;
  truncate_store<unsigned short,unsigned int>(&alloc.size, size);
  alloc.heapIndex = this->m_index;
  R_TG_HeapAllocatorExplicitFree::Free(this, info, &alloc);
}

/*
==============
R_TG_HeapAllocatorExplicitFree::Allocate
==============
*/
bool R_TG_HeapAllocatorExplicitFree::Allocate(R_TG_HeapAllocatorExplicitFree *this, const R_TG_AllocInfo *info, unsigned int size, R_TG_Alloc *outAlloc)
{
  unsigned int *p_m_freeBlockIndex; 
  unsigned int m_freeBlockIndex; 
  unsigned __int8 queueFlags; 
  char *v10; 
  unsigned int v11; 
  unsigned int v12; 
  unsigned int m_heapTop; 
  unsigned int m_maxUsage; 
  unsigned int v15; 
  bool result; 
  char *v17; 
  unsigned int v18; 
  bool v19; 
  char *v20; 
  unsigned int *p_nextBlockIndex; 

  p_m_freeBlockIndex = &this->m_freeBlockIndex;
  m_freeBlockIndex = this->m_freeBlockIndex;
  if ( m_freeBlockIndex == -1 )
  {
LABEL_8:
    m_heapTop = this->m_heapTop;
    if ( m_heapTop + size > this->m_limit )
    {
      return 0;
    }
    else
    {
      R_TG_HeapAllocatorExplicitFree::SetupAlloc(this, m_heapTop, size, outAlloc);
      m_maxUsage = this->m_maxUsage;
      this->m_heapTop += size;
      v15 = this->m_heapTop;
      if ( m_maxUsage > v15 )
        v15 = m_maxUsage;
      result = 1;
      this->m_maxUsage = v15;
    }
  }
  else
  {
    queueFlags = info->queueFlags;
    while ( 1 )
    {
      v10 = (char *)this + 20 * m_freeBlockIndex;
      if ( (queueFlags & (unsigned __int8)v10[48]) != 0 )
      {
        v11 = *((_DWORD *)v10 + 9);
        if ( size == v11 )
        {
          v17 = (char *)this + 20 * m_freeBlockIndex;
          truncate_store<unsigned short,unsigned int>(&outAlloc->offset, *((_DWORD *)v17 + 8));
          truncate_store<unsigned short,unsigned int>(&outAlloc->size, size);
          outAlloc->heapIndex = this->m_index;
          this->m_heapUsed += size;
          goto LABEL_18;
        }
        if ( size < v11 )
        {
          v20 = (char *)this + 20 * m_freeBlockIndex;
          truncate_store<unsigned short,unsigned int>(&outAlloc->offset, *((_DWORD *)v20 + 8));
          truncate_store<unsigned short,unsigned int>(&outAlloc->size, size);
          outAlloc->heapIndex = this->m_index;
          result = 1;
          this->m_heapUsed += size;
          *((_DWORD *)v20 + 8) += size;
          *((_DWORD *)v20 + 9) -= size;
          return result;
        }
        v12 = *((_DWORD *)v10 + 8);
        if ( v12 + v11 == this->m_heapTop )
          break;
      }
      m_freeBlockIndex = this->m_blocks[m_freeBlockIndex].nextBlockIndex;
      p_m_freeBlockIndex = (unsigned int *)(v10 + 40);
      if ( m_freeBlockIndex == -1 )
        goto LABEL_8;
    }
    v17 = (char *)this + 20 * m_freeBlockIndex;
    if ( v12 + size > this->m_limit )
      goto LABEL_8;
    R_TG_HeapAllocatorExplicitFree::SetupAlloc(this, v12, size, outAlloc);
    v18 = size + *((_DWORD *)v17 + 8);
    v19 = this->m_maxUsage <= v18;
    this->m_heapTop = v18;
    if ( !v19 )
      v18 = this->m_maxUsage;
    this->m_maxUsage = v18;
LABEL_18:
    p_nextBlockIndex = &this->m_blocks[m_freeBlockIndex].nextBlockIndex;
    *p_m_freeBlockIndex = *p_nextBlockIndex;
    *((_QWORD *)v17 + 4) = -1i64;
    *p_nextBlockIndex = this->m_unusedBlockIndex;
    result = 1;
    *((_DWORD *)v17 + 11) = -1;
    v17[48] = -1;
    this->m_unusedBlockIndex = m_freeBlockIndex;
  }
  return result;
}

/*
==============
R_TG_HeapAllocatorExplicitFree::Allocate
==============
*/
bool R_TG_HeapAllocatorExplicitFree::Allocate(R_TG_HeapAllocatorExplicitFree *this, const R_TG_AllocInfo *info, unsigned int size, unsigned int blockAlign, R_TG_Alloc *outAlloc)
{
  unsigned int v6; 
  unsigned int m_freeBlockIndex; 
  unsigned __int64 v9; 
  const R_TG_AllocInfo *v10; 
  __int64 v11; 
  unsigned int offset; 
  char *v13; 
  int v14; 
  int v15; 
  unsigned int v16; 
  unsigned int v17; 
  char *v18; 
  unsigned int *p_nextBlockIndex; 
  bool result; 
  char *v21; 
  unsigned int v22; 
  unsigned int v23; 
  bool v24; 
  unsigned int *v25; 
  unsigned int v26; 
  char *v27; 
  unsigned int v28; 
  unsigned int v29; 
  unsigned int m_heapTop; 
  unsigned int v31; 
  unsigned int v32; 
  unsigned int v33; 
  unsigned int m_maxUsage; 
  unsigned int *p_m_freeBlockIndex; 
  unsigned int v36; 
  unsigned int v37; 

  v6 = blockAlign;
  p_m_freeBlockIndex = &this->m_freeBlockIndex;
  m_freeBlockIndex = this->m_freeBlockIndex;
  if ( m_freeBlockIndex == -1 )
  {
LABEL_32:
    v9 = v6;
LABEL_33:
    m_heapTop = this->m_heapTop;
    v31 = AlignUp<unsigned int>(m_heapTop, v9);
    v32 = v31 - m_heapTop;
    v33 = v31 + size;
    if ( v31 + size > this->m_limit )
    {
      return 0;
    }
    else
    {
      if ( v32 )
        R_TG_HeapAllocatorExplicitFree::AddFreeBlock(this, info, m_heapTop, v32);
      R_TG_HeapAllocatorExplicitFree::SetupAlloc(this, v31, size, outAlloc);
      m_maxUsage = this->m_maxUsage;
      this->m_heapTop = v33;
      if ( m_maxUsage > v33 )
        v33 = m_maxUsage;
      result = 1;
      this->m_maxUsage = v33;
    }
  }
  else
  {
    v9 = blockAlign;
    v10 = info;
    v36 = -blockAlign;
    while ( 1 )
    {
      v11 = m_freeBlockIndex;
      offset = this->m_blocks[m_freeBlockIndex].offset;
      v13 = (char *)this + 20 * m_freeBlockIndex;
      if ( !v9 || ((v9 - 1) & v9) != 0 )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\com_math.h", 679, ASSERT_TYPE_ASSERT, "(align > 0 && IsPowerOf2( align ))", (const char *)&queryFormat, "align > 0 && IsPowerOf2( align )") )
          __debugbreak();
        v10 = info;
      }
      v14 = *((_DWORD *)v13 + 9);
      v15 = v36 & (offset + v6 - 1);
      v16 = offset + v14 - v15;
      if ( v16 > 0x7FFFFFFF )
        v16 = 0;
      if ( ((unsigned __int8)v13[48] & v10->queueFlags) != 0 )
      {
        if ( size == v14 && offset == v15 )
        {
          v18 = (char *)this + 20 * m_freeBlockIndex;
          truncate_store<unsigned short,unsigned int>(&outAlloc->offset, *((_DWORD *)v18 + 8));
          truncate_store<unsigned short,unsigned int>(&outAlloc->size, size);
          outAlloc->heapIndex = this->m_index;
          this->m_heapUsed += size;
          p_nextBlockIndex = &this->m_blocks[m_freeBlockIndex].nextBlockIndex;
          *p_m_freeBlockIndex = *p_nextBlockIndex;
          *((_QWORD *)v18 + 4) = -1i64;
          *p_nextBlockIndex = this->m_unusedBlockIndex;
          result = 1;
          *((_DWORD *)v18 + 11) = -1;
          v18[48] = -1;
          this->m_unusedBlockIndex = m_freeBlockIndex;
          return result;
        }
        if ( size <= v16 )
        {
          v26 = this->m_blocks[m_freeBlockIndex].offset;
          v27 = (char *)this + 20 * v11;
          v28 = AlignUp<unsigned int>(*((_DWORD *)v27 + 8), v9);
          v29 = v28 - v26;
          truncate_store<unsigned short,unsigned int>(&outAlloc->offset, v28);
          truncate_store<unsigned short,unsigned int>(&outAlloc->size, size);
          outAlloc->heapIndex = this->m_index;
          this->m_heapUsed += size;
          if ( size == v16 )
          {
            if ( !v29 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_compile_heap.cpp.h", 555, ASSERT_TYPE_ASSERT, "(alignmentGap)", (const char *)&queryFormat, "alignmentGap") )
              __debugbreak();
            *((_DWORD *)v27 + 8) = v26;
            result = 1;
            *((_DWORD *)v27 + 9) = v29;
          }
          else
          {
            *((_DWORD *)v27 + 8) += v29 + size;
            *((_DWORD *)v27 + 9) -= v29 + size;
            if ( v29 )
              R_TG_HeapAllocatorExplicitFree::AddFreeBlock(this, info, v26, v29);
            return 1;
          }
          return result;
        }
        v17 = *((_DWORD *)v13 + 8);
        if ( v14 + v17 == this->m_heapTop )
          break;
      }
      v6 = blockAlign;
      p_m_freeBlockIndex = (unsigned int *)(v13 + 40);
      m_freeBlockIndex = this->m_blocks[m_freeBlockIndex].nextBlockIndex;
      if ( m_freeBlockIndex == -1 )
        goto LABEL_32;
    }
    v21 = (char *)this + 20 * m_freeBlockIndex;
    v22 = AlignUp<unsigned int>(v17, v9);
    v37 = v22 - v17;
    v23 = v22 + size;
    if ( v22 + size > this->m_limit )
      goto LABEL_33;
    R_TG_HeapAllocatorExplicitFree::SetupAlloc(this, v22, size, outAlloc);
    v24 = this->m_maxUsage <= v23;
    this->m_heapTop = v23;
    if ( !v24 )
      v23 = this->m_maxUsage;
    this->m_maxUsage = v23;
    if ( v37 )
    {
      *((_DWORD *)v21 + 9) = v37;
      result = 1;
      *((_DWORD *)v21 + 8) = v17;
    }
    else
    {
      v25 = &this->m_blocks[m_freeBlockIndex].nextBlockIndex;
      *p_m_freeBlockIndex = *v25;
      *((_QWORD *)v21 + 4) = -1i64;
      *v25 = this->m_unusedBlockIndex;
      result = 1;
      *((_DWORD *)v21 + 11) = -1;
      v21[48] = -1;
      this->m_unusedBlockIndex = m_freeBlockIndex;
    }
  }
  return result;
}

/*
==============
R_TG_PoolAllocator::Allocate
==============
*/
bool R_TG_PoolAllocator::Allocate(R_TG_PoolAllocator *this, const tg::ResourceDesc *desc, unsigned int *outAlloc)
{
  unsigned int m_index; 
  bool result; 

  *outAlloc = this->m_index;
  if ( this->m_activeCount >= 0x200 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_compile_heap.cpp.h", 84, ASSERT_TYPE_ASSERT, "(m_activeCount < resourceLimit)", (const char *)&queryFormat, "m_activeCount < resourceLimit") )
    __debugbreak();
  m_index = this->m_index;
  this->m_index = m_index + 1;
  this->m_active[this->m_activeCount].index = m_index;
  this->m_active[this->m_activeCount].aliasCount = 1;
  this->m_active[this->m_activeCount].width = desc->size.v[0];
  this->m_active[this->m_activeCount].height = desc->size.v[1];
  this->m_active[this->m_activeCount].depth = desc->depth;
  this->m_active[this->m_activeCount].arraySize = desc->arraySize;
  this->m_active[this->m_activeCount].format = desc->textureFormat;
  this->m_active[this->m_activeCount].levels = desc->levels;
  this->m_active[this->m_activeCount].multisample = desc->multisample;
  result = 1;
  ++this->m_activeCount;
  return result;
}

/*
==============
R_TG_HeapAllocatorExplicitFree::AllocateTiled
==============
*/
char R_TG_HeapAllocatorExplicitFree::AllocateTiled(R_TG_HeapAllocatorExplicitFree *this, const R_TG_AllocInfo *info, unsigned int *inOutSize, unsigned int outAllocLimit, R_TG_Alloc *pOutAlloc, unsigned int *outAllocCount)
{
  unsigned int v10; 
  unsigned int v11; 
  R_TG_Alloc *v12; 
  unsigned int *p_m_freeBlockIndex; 
  unsigned int m_freeBlockIndex; 
  __int64 v15; 
  unsigned int size; 
  unsigned int offset; 
  __int64 v18; 
  unsigned int v19; 
  unsigned int m_heapTop; 
  unsigned int m_limit; 
  unsigned int m_maxUsage; 
  unsigned int v24; 
  unsigned int outAllocCounta; 

  v10 = *outAllocCount;
  outAllocCounta = *outAllocCount;
  if ( !this->m_allowPartialAlloc && *inOutSize + this->m_heapUsed > this->m_limit )
    return 0;
  v11 = *inOutSize;
  if ( !*inOutSize )
    return 1;
  v12 = pOutAlloc;
  p_m_freeBlockIndex = &this->m_freeBlockIndex;
  m_freeBlockIndex = this->m_freeBlockIndex;
  if ( m_freeBlockIndex != -1 )
  {
    while ( 1 )
    {
      v15 = m_freeBlockIndex;
      if ( (this->m_blocks[v15].queueFlags & info->queueFlags) != 0 )
      {
        size = this->m_blocks[v15].size;
        offset = this->m_blocks[v15].offset;
        if ( *inOutSize < size )
        {
          R_TG_HeapAllocatorExplicitFree::SetupAlloc(this, offset, *inOutSize, v12, outAllocCount);
          this->m_blocks[v15].offset += *inOutSize;
          this->m_blocks[v15].size -= *inOutSize;
          *inOutSize = 0;
          return 1;
        }
        R_TG_HeapAllocatorExplicitFree::SetupAlloc(this, offset, size, v12, outAllocCount);
        v18 = 5i64 * m_freeBlockIndex + 10;
        *inOutSize -= this->m_blocks[v15].size;
        v19 = m_freeBlockIndex;
        *p_m_freeBlockIndex = this->m_blocks[v15].nextBlockIndex;
        m_freeBlockIndex = *((_DWORD *)&this->m_pName + v18);
        *(_QWORD *)&this->m_blocks[v15].offset = -1i64;
        *((_DWORD *)&this->m_pName + v18) = this->m_unusedBlockIndex;
        this->m_unusedBlockIndex = v19;
        if ( !*inOutSize )
          return 1;
        v12 = pOutAlloc;
      }
      else
      {
        m_freeBlockIndex = this->m_blocks[m_freeBlockIndex].nextBlockIndex;
        p_m_freeBlockIndex = &this->m_blocks[v15].nextBlockIndex;
      }
      if ( m_freeBlockIndex == -1 )
      {
        v11 = *inOutSize;
        v10 = outAllocCounta;
        break;
      }
    }
  }
  m_heapTop = this->m_heapTop;
  m_limit = this->m_limit;
  if ( m_heapTop == m_limit )
  {
    if ( !this->m_allowPartialAlloc || *outAllocCount <= v10 )
      return 0;
  }
  else
  {
    if ( m_heapTop + v11 > m_limit )
    {
      if ( !this->m_allowPartialAlloc )
        return 0;
      v11 = m_limit - m_heapTop;
    }
    R_TG_HeapAllocatorExplicitFree::SetupAlloc(this, m_heapTop, v11, v12, outAllocCount);
    *inOutSize -= v11;
    m_maxUsage = this->m_maxUsage;
    this->m_heapTop += v11;
    v24 = this->m_heapTop;
    if ( m_maxUsage > v24 )
      v24 = m_maxUsage;
    this->m_maxUsage = v24;
  }
  return 1;
}

/*
==============
R_TG_HeapAllocatorExplicitFree::CoalesceFreeBlocks
==============
*/
void R_TG_HeapAllocatorExplicitFree::CoalesceFreeBlocks(R_TG_HeapAllocatorExplicitFree *this)
{
  unsigned int *p_m_freeBlockIndex; 
  __int64 m_freeBlockIndex; 
  __int64 v3; 
  unsigned int nextBlockIndex; 
  __int64 v5; 
  __int64 v6; 
  unsigned int size; 
  char *v8; 
  char *v9; 
  unsigned int *p_nextBlockIndex; 
  char *v11; 
  unsigned int v12; 
  unsigned int *v13; 

  p_m_freeBlockIndex = &this->m_freeBlockIndex;
  m_freeBlockIndex = this->m_freeBlockIndex;
  v3 = (unsigned int)m_freeBlockIndex;
  if ( (_DWORD)m_freeBlockIndex == -1 )
    nextBlockIndex = -1;
  else
    nextBlockIndex = this->m_blocks[m_freeBlockIndex].nextBlockIndex;
  if ( nextBlockIndex != -1 && this->m_blocks[m_freeBlockIndex].nextBlockIndex != -1 )
  {
    do
    {
      v5 = 5 * v3 + 10;
      v6 = *((unsigned int *)&this->m_pName + v5);
      size = this->m_blocks[v3].size;
      v8 = (char *)this + 20 * v3;
      v9 = (char *)this + 20 * v6;
      if ( size + *((_DWORD *)v8 + 8) == *((_DWORD *)v9 + 8) && v8[48] == v9[48] )
      {
        *((_DWORD *)v8 + 9) = size + *((_DWORD *)v9 + 9);
        p_nextBlockIndex = &this->m_blocks[v6].nextBlockIndex;
        *((_DWORD *)&this->m_pName + v5) = *p_nextBlockIndex;
        *((_QWORD *)v9 + 4) = -1i64;
        *p_nextBlockIndex = this->m_unusedBlockIndex;
        *((_DWORD *)v9 + 11) = -1;
        v9[48] = -1;
        this->m_unusedBlockIndex = v6;
      }
      else
      {
        p_m_freeBlockIndex = (unsigned int *)((char *)this + 4 * v5);
        LODWORD(m_freeBlockIndex) = *p_m_freeBlockIndex;
      }
      v3 = (unsigned int)m_freeBlockIndex;
    }
    while ( this->m_blocks[(unsigned int)m_freeBlockIndex].nextBlockIndex != -1 );
  }
  if ( (_DWORD)m_freeBlockIndex != -1 )
  {
    v11 = (char *)this + 20 * (unsigned int)m_freeBlockIndex;
    v12 = *((_DWORD *)v11 + 8);
    if ( v12 + *((_DWORD *)v11 + 9) == this->m_heapTop && v11[48] == -1 )
    {
      this->m_heapTop = v12;
      v13 = &this->m_blocks[(unsigned int)m_freeBlockIndex].nextBlockIndex;
      *p_m_freeBlockIndex = *v13;
      *((_QWORD *)v11 + 4) = -1i64;
      *v13 = this->m_unusedBlockIndex;
      *((_DWORD *)v11 + 11) = -1;
      v11[48] = -1;
      this->m_unusedBlockIndex = m_freeBlockIndex;
    }
  }
}

/*
==============
R_TG_HeapAllocatorExplicitFree::Free
==============
*/
void R_TG_HeapAllocatorExplicitFree::Free(R_TG_HeapAllocatorExplicitFree *this, const R_TG_AllocInfo *info, const R_TG_Alloc *alloc)
{
  __int64 m_unusedBlockIndex; 
  unsigned int *p_nextBlockIndex; 
  unsigned int *p_m_freeBlockIndex; 
  unsigned int i; 
  char *v10; 
  unsigned int m_heapTop; 

  m_unusedBlockIndex = this->m_unusedBlockIndex;
  if ( (_DWORD)m_unusedBlockIndex == -1 )
  {
    if ( this->m_blockCount >= 0x100 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\gfx_d3d\\r_taskgraph_compile_heap.cpp.h", 712, ASSERT_TYPE_ASSERT, "(m_blockCount < m_blockLimit)", (const char *)&queryFormat, "m_blockCount < m_blockLimit") )
      __debugbreak();
    LODWORD(m_unusedBlockIndex) = this->m_blockCount;
    this->m_blockCount = m_unusedBlockIndex + 1;
  }
  else
  {
    p_nextBlockIndex = &this->m_blocks[m_unusedBlockIndex].nextBlockIndex;
    this->m_unusedBlockIndex = *p_nextBlockIndex;
    *p_nextBlockIndex = -1;
  }
  p_m_freeBlockIndex = &this->m_freeBlockIndex;
  for ( i = this->m_freeBlockIndex; i != -1; i = this->m_blocks[i].nextBlockIndex )
  {
    if ( this->m_blocks[i].offset > alloc->offset )
      break;
    p_m_freeBlockIndex = &this->m_blocks[i].nextBlockIndex;
  }
  v10 = (char *)this + 20 * (unsigned int)m_unusedBlockIndex;
  *((_DWORD *)v10 + 8) = alloc->offset;
  *((_DWORD *)v10 + 9) = alloc->size;
  this->m_blocks[(unsigned int)m_unusedBlockIndex].nextBlockIndex = i;
  *((_DWORD *)v10 + 11) = info->taskIndex;
  v10[48] = info->queueFlags;
  *p_m_freeBlockIndex = m_unusedBlockIndex;
  m_heapTop = this->m_heapTop;
  if ( alloc->offset + (unsigned int)alloc->size > m_heapTop )
    m_heapTop = alloc->offset + alloc->size;
  this->m_heapTop = m_heapTop;
  this->m_heapUsed -= alloc->size;
  R_TG_HeapAllocatorExplicitFree::CoalesceFreeBlocks(this);
}

/*
==============
R_TG_PoolAllocator::Free
==============
*/
void R_TG_PoolAllocator::Free(R_TG_PoolAllocator *this, const unsigned int index)
{
  __int64 v3; 
  unsigned int m_activeCount; 
  __int64 v11; 

  _R10 = this;
  v3 = 0i64;
  m_activeCount = this->m_activeCount;
  if ( m_activeCount )
  {
    while ( _R10->m_active[v3].index != index )
    {
      v3 = (unsigned int)(v3 + 1);
      if ( (unsigned int)v3 >= m_activeCount )
        return;
    }
    _RAX = 9 * v3;
    __asm { vmovups ymm0, ymmword ptr [r10+rax*4] }
    _RDX = (char *)_R10 + 4 * _RAX;
    _RCX = _R10->m_freeCount;
    __asm { vmovups ymmword ptr [r10+rcx*4+4804h], ymm0 }
    _R10->m_free[_RCX].multisample = *((_DWORD *)_RDX + 8);
    _RCX = _R10->m_activeCount - 1;
    __asm
    {
      vmovups ymm0, ymmword ptr [r10+rcx*4]
      vmovups ymmword ptr [rdx], ymm0
    }
    *((_DWORD *)_RDX + 8) = _R10->m_active[_RCX].multisample;
    v11 = _R10->m_activeCount - 1;
    *(_QWORD *)&_R10->m_active[v11].index = 0i64;
    *(_QWORD *)&_R10->m_active[v11].width = 0i64;
    *(_QWORD *)&_R10->m_active[v11].depth = 0i64;
    *(_QWORD *)&_R10->m_active[v11].levels = 0i64;
    _R10->m_active[v11].multisample = 0;
    --_R10->m_activeCount;
    ++_R10->m_freeCount;
  }
}

/*
==============
R_TG_HeapAllocatorExplicitFree::Init
==============
*/
void R_TG_HeapAllocatorExplicitFree::Init(R_TG_HeapAllocatorExplicitFree *this)
{
  *(_QWORD *)&this->m_freeBlockIndex = -1i64;
  this->m_blockCount = 0;
  *(_QWORD *)&this->m_heapTop = 0i64;
  memset_0(this->m_blocks, 0, sizeof(this->m_blocks));
}

/*
==============
R_TG_CachedResource::Match
==============
*/
bool R_TG_CachedResource::Match(R_TG_CachedResource *this, const tg::ResourceDesc *desc)
{
  return 0;
}

/*
==============
R_TG_SetupHeapFull
==============
*/
void R_TG_SetupHeapFull(const char *name, unsigned int limit, unsigned int maxUsage, unsigned int flags, bool allowAliasedAlloc, bool allowPartialAlloc, R_RT_HeapFlags rtFlags, R_TG_HeapAllocatorExplicitFree *heaps, unsigned int *heapCount)
{
  R_TG_HeapAllocatorExplicitFree *v12; 

  heaps[*heapCount].m_pName = name;
  heaps[*heapCount].m_rtFlags = rtFlags;
  truncate_store<unsigned short,unsigned int>(&heaps[*heapCount].m_index, *heapCount);
  heaps[*heapCount].m_limit = limit;
  heaps[*heapCount].m_maxUsage = maxUsage;
  heaps[*heapCount].m_flags = flags;
  heaps[*heapCount].m_maxAllocs = 0;
  heaps[*heapCount].m_allowAliasedAlloc = allowAliasedAlloc;
  heaps[*heapCount].m_allowPartialAlloc = allowPartialAlloc;
  v12 = &heaps[*heapCount];
  v12->m_blockCount = 0;
  *(_QWORD *)&v12->m_freeBlockIndex = -1i64;
  *(_QWORD *)&v12->m_heapTop = 0i64;
  memset_0(v12->m_blocks, 0, sizeof(v12->m_blocks));
  ++*heapCount;
}

/*
==============
R_TG_HeapAllocatorExplicitFree::RemoveFreeBlock
==============
*/
void R_TG_HeapAllocatorExplicitFree::RemoveFreeBlock(R_TG_HeapAllocatorExplicitFree *this, unsigned int *prevPtr, unsigned int removeBlock)
{
  unsigned int *p_nextBlockIndex; 
  char *v4; 

  p_nextBlockIndex = &this->m_blocks[removeBlock].nextBlockIndex;
  *prevPtr = *p_nextBlockIndex;
  v4 = (char *)this + 20 * removeBlock;
  *((_QWORD *)v4 + 4) = -1i64;
  *p_nextBlockIndex = this->m_unusedBlockIndex;
  *((_DWORD *)v4 + 11) = -1;
  v4[48] = -1;
  this->m_unusedBlockIndex = removeBlock;
}

/*
==============
R_TG_HeapAllocatorExplicitFree::SetupAlloc
==============
*/
void R_TG_HeapAllocatorExplicitFree::SetupAlloc(R_TG_HeapAllocatorExplicitFree *this, unsigned int offset, unsigned int size, R_TG_Alloc *pOutAlloc)
{
  truncate_store<unsigned short,unsigned int>(&pOutAlloc->offset, offset);
  truncate_store<unsigned short,unsigned int>(&pOutAlloc->size, size);
  pOutAlloc->heapIndex = this->m_index;
  this->m_heapUsed += size;
}

/*
==============
R_TG_HeapAllocatorExplicitFree::SetupAlloc
==============
*/
void R_TG_HeapAllocatorExplicitFree::SetupAlloc(R_TG_HeapAllocatorExplicitFree *this, unsigned int offset, unsigned int size, R_TG_Alloc *pOutAlloc, unsigned int *outAllocCount)
{
  truncate_store<unsigned short,unsigned int>(&pOutAlloc[*outAllocCount].offset, offset);
  truncate_store<unsigned short,unsigned int>(&pOutAlloc[*outAllocCount].size, size);
  pOutAlloc[*outAllocCount].heapIndex = this->m_index;
  this->m_heapUsed += size;
  ++*outAllocCount;
}

/*
==============
R_TG_HeapAllocatorExplicitFree::SyncFreeBlocks
==============
*/
void R_TG_HeapAllocatorExplicitFree::SyncFreeBlocks(R_TG_HeapAllocatorExplicitFree *this, const R_TG_AllocInfo *info)
{
  unsigned int i; 
  __int64 v3; 
  __int64 v4; 

  for ( i = this->m_freeBlockIndex; i != -1; i = this->m_blocks[v3].nextBlockIndex )
  {
    v3 = i;
    v4 = i;
    if ( this->m_blocks[v4].taskIndex <= info->taskIndex && this->m_blocks[v4].queueFlags == info->queueFlags )
    {
      this->m_blocks[v4].taskIndex = -1;
      this->m_blocks[v4].queueFlags = -1;
    }
  }
}


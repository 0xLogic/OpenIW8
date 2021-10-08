/*
==============
IWMemAllocatorTable::Init
==============
*/

void __fastcall IWMemAllocatorTable::Init(IWMemAllocatorTable *this)
{
  ?Init@IWMemAllocatorTable@@QEAAXXZ(this);
}

/*
==============
IWMemAllocatorTable::Allocate
==============
*/

void __fastcall IWMemAllocatorTable::Allocate(IWMemAllocatorTable *this, const unsigned __int64 address, const unsigned __int64 size, const bool leakDetect, const bool traceCallstacks, const bool uniqueEntries)
{
  ?Allocate@IWMemAllocatorTable@@QEAAX_K0_N11@Z(this, address, size, leakDetect, traceCallstacks, uniqueEntries);
}

/*
==============
IWMemAllocatorTable::TryCombineBlocks
==============
*/

void __fastcall IWMemAllocatorTable::TryCombineBlocks(IWMemAllocatorTable *this, IWMemAllocatorTableEntry *first, IWMemAllocatorTableEntry *second)
{
  ?TryCombineBlocks@IWMemAllocatorTable@@AEAAXPEAVIWMemAllocatorTableEntry@@0@Z(this, first, second);
}

/*
==============
IWMemAllocatorTable::ReduceUsedSize
==============
*/

void __fastcall IWMemAllocatorTable::ReduceUsedSize(IWMemAllocatorTable *this, const unsigned __int64 size)
{
  ?ReduceUsedSize@IWMemAllocatorTable@@AEAAX_K@Z(this, size);
}

/*
==============
IWMemAllocatorTable::FindEntryBlockOverlap
==============
*/

IWMemAllocatorTableEntry *__fastcall IWMemAllocatorTable::FindEntryBlockOverlap(IWMemAllocatorTable *this, const IWMemBlock *block)
{
  return ?FindEntryBlockOverlap@IWMemAllocatorTable@@AEAAPEAVIWMemAllocatorTableEntry@@VIWMemBlock@@@Z(this, block);
}

/*
==============
IWMemAllocatorTable::FreeBlock
==============
*/

void __fastcall IWMemAllocatorTable::FreeBlock(IWMemAllocatorTable *this, IWMemAllocatorTableEntry *entry)
{
  ?FreeBlock@IWMemAllocatorTable@@AEAAXPEAVIWMemAllocatorTableEntry@@@Z(this, entry);
}

/*
==============
IWMemAllocatorTable::Clear
==============
*/

unsigned __int64 __fastcall IWMemAllocatorTable::Clear(IWMemAllocatorTable *this)
{
  return ?Clear@IWMemAllocatorTable@@QEAA_KXZ(this);
}

/*
==============
IWMemAllocatorTable::AddNewBlock
==============
*/

bool __fastcall IWMemAllocatorTable::AddNewBlock(IWMemAllocatorTable *this, const unsigned __int64 address, const unsigned __int64 size, const bool leakDetect, IWMemProfileNode *profileNode, const unsigned int callstackCrc)
{
  return ?AddNewBlock@IWMemAllocatorTable@@AEAA_N_K0_NPEAVIWMemProfileNode@@I@Z(this, address, size, leakDetect, profileNode, callstackCrc);
}

/*
==============
IWMemAllocatorTable::FreeRange
==============
*/

unsigned __int64 __fastcall IWMemAllocatorTable::FreeRange(IWMemAllocatorTable *this, const unsigned __int64 address, const unsigned __int64 size)
{
  return ?FreeRange@IWMemAllocatorTable@@QEAA_K_K0@Z(this, address, size);
}

/*
==============
IWMemAllocatorTable::FreeInsideBlock
==============
*/

unsigned __int64 __fastcall IWMemAllocatorTable::FreeInsideBlock(IWMemAllocatorTable *this, IWMemAllocatorTableEntry *p_entry, const unsigned __int64 address, const unsigned __int64 removeSize)
{
  return ?FreeInsideBlock@IWMemAllocatorTable@@AEAA_KPEAVIWMemAllocatorTableEntry@@_K1@Z(this, p_entry, address, removeSize);
}

/*
==============
IWMemAllocatorTable::IncrementTotalSize
==============
*/

void __fastcall IWMemAllocatorTable::IncrementTotalSize(IWMemAllocatorTable *this, const unsigned __int64 size)
{
  ?IncrementTotalSize@IWMemAllocatorTable@@AEAAX_K@Z(this, size);
}

/*
==============
IWMemAllocatorTable::FindAdjacentEntry
==============
*/

IWMemAllocatorTableEntry *__fastcall IWMemAllocatorTable::FindAdjacentEntry(IWMemAllocatorTable *this, const IWMemBlock *block)
{
  return ?FindAdjacentEntry@IWMemAllocatorTable@@AEAAPEAVIWMemAllocatorTableEntry@@VIWMemBlock@@@Z(this, block);
}

/*
==============
IWMemAllocatorTable::GetUsedRange
==============
*/

IWMemBlock *__fastcall IWMemAllocatorTable::GetUsedRange(IWMemAllocatorTable *this, IWMemBlock *result)
{
  return ?GetUsedRange@IWMemAllocatorTable@@QEBA?AVIWMemBlock@@XZ(this, result);
}

/*
==============
IWMemAllocatorTable::Free
==============
*/

unsigned __int64 __fastcall IWMemAllocatorTable::Free(IWMemAllocatorTable *this, const unsigned __int64 address, const unsigned __int64 size, const bool uniqueEntries)
{
  return ?Free@IWMemAllocatorTable@@QEAA_K_K0_N@Z(this, address, size, uniqueEntries);
}

/*
==============
IWMemAllocatorTable::FindEntryContaining
==============
*/

IWMemAllocatorTableEntry *__fastcall IWMemAllocatorTable::FindEntryContaining(IWMemAllocatorTable *this, const unsigned __int64 address)
{
  return ?FindEntryContaining@IWMemAllocatorTable@@AEAAPEAVIWMemAllocatorTableEntry@@_K@Z(this, address);
}

/*
==============
IWMemAllocatorTable::DetailDebugDump
==============
*/

void __fastcall IWMemAllocatorTable::DetailDebugDump(IWMemAllocatorTable *this)
{
  ?DetailDebugDump@IWMemAllocatorTable@@AEBAXXZ(this);
}

/*
==============
IWMemAllocatorTable::AddNewBlock
==============
*/
char IWMemAllocatorTable::AddNewBlock(IWMemAllocatorTable *this, const unsigned __int64 address, const unsigned __int64 size, const bool leakDetect, IWMemProfileNode *profileNode, const unsigned int callstackCrc)
{
  IWMemAllocatorTableEntry *v11; 

  if ( !size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\iwmem\\gamelog\\iwmem_allocator_table.cpp", 432, ASSERT_TYPE_ASSERT, "(size)", (const char *)&queryFormat, "size") )
    __debugbreak();
  if ( !profileNode && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\iwmem\\gamelog\\iwmem_allocator_table.cpp", 435, ASSERT_TYPE_ASSERT, "(profileNode)", (const char *)&queryFormat, "profileNode") )
    __debugbreak();
  if ( (((_BYTE)profileNode + 32) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &profileNode->m_numAllocs) )
    __debugbreak();
  _InterlockedIncrement(&profileNode->m_numAllocs);
  if ( IWMem_AllocatorTablePool_IsExhausted() )
  {
    Com_PrintError(16, "IWMEM: IWMemAllocatorTable exhausted\n");
    IWMem_InternalError();
    return 0;
  }
  else
  {
    v11 = IWMem_AllocatorTablePool_Allocate();
    IWMemAllocatorTableEntry::Init(v11, address, size, leakDetect, profileNode, callstackCrc);
    LeanRBTree<IWMemAllocatorTableEntry>::Insert(&this->m_allocs, v11);
    this->m_usedSize += size;
    return 1;
  }
}

/*
==============
IWMemAllocatorTable::Allocate
==============
*/
void IWMemAllocatorTable::Allocate(IWMemAllocatorTable *this, const unsigned __int64 address, const unsigned __int64 size, const bool leakDetect, const bool traceCallstacks, const bool uniqueEntries)
{
  IWMemAllocatorTableEntry *mp_root; 
  IWMemAllocatorTableEntry *v11; 
  __int64 v12; 
  int v13; 
  __int64 v14; 
  unsigned int callstackCrc; 
  IWMemProfileNode *CurrentNode; 
  IWMemAllocatorTableEntry *AdjacentEntry; 
  IWMemAllocatorTableEntry *v19; 
  unsigned __int64 m_address; 
  __int64 v21; 
  unsigned __int64 v22; 
  __int64 v23; 
  unsigned int v24; 
  IWMemAllocatorTableEntry *v25; 
  unsigned __int64 v26; 
  __int64 v27; 
  unsigned __int64 v28; 
  __int64 v29; 
  unsigned __int64 v30; 
  __int64 v31; 
  __int64 v32; 
  unsigned int v33; 
  IWMemAllocatorTableEntry *v34; 
  unsigned __int64 v35; 
  __int64 v36; 
  unsigned __int64 v37; 
  IWMemBlock v38; 

  if ( !address && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\iwmem\\gamelog\\iwmem_allocator_table.cpp", 51, ASSERT_TYPE_ASSERT, "(address)", (const char *)&queryFormat, "address") )
    __debugbreak();
  if ( !size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\iwmem\\gamelog\\iwmem_allocator_table.cpp", 52, ASSERT_TYPE_ASSERT, "(size)", (const char *)&queryFormat, "size") )
    __debugbreak();
  v38.m_address = address;
  v38.m_size = size;
  if ( !size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\iwmem\\gamelog\\iwmem_block.h", 84, ASSERT_TYPE_ASSERT, "(GetSize() > 0)", (const char *)&queryFormat, "GetSize() > 0") )
    __debugbreak();
  if ( address >= size + address && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\iwmem\\gamelog\\iwmem_block.h", 85, ASSERT_TYPE_ASSERT, "(GetAddress() < GetExclusiveEndAddress())", (const char *)&queryFormat, "GetAddress() < GetExclusiveEndAddress()") )
    __debugbreak();
  mp_root = this->m_allocs.mp_root;
  v11 = this->m_allocs.mp_root;
  if ( this->m_allocs.mp_root )
  {
    while ( address != v11->m_address )
    {
      v12 = 16i64;
      if ( address > v11->m_address )
        v12 = 20i64;
      v13 = *(_DWORD *)((char *)&v11->m_address + v12);
      if ( v13 )
      {
        v11 = &g_iwMemAllocatorPool[v13];
        if ( v11 )
          continue;
      }
      goto LABEL_19;
    }
LABEL_27:
    if ( mp_root )
      IWMemAllocatorTableEntry::ForEach(this->m_allocs.mp_root, IWMem_Dump_Detail_TableEntry);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\iwmem\\gamelog\\iwmem_allocator_table.cpp", 73, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Allocating %016zx-%016zx, but we already have a block at %016zx-%016zx", address, size + address - 1, v11->m_address, (*((_QWORD *)v11 + 1) & 0xFFFFFFFFFFi64) + v11->m_address - 1) )
      __debugbreak();
  }
  else
  {
LABEL_19:
    v11 = this->m_allocs.mp_root;
    if ( mp_root )
    {
      do
      {
        if ( size + address > v11->m_address )
        {
          if ( address < v11->m_address + (*((_QWORD *)v11 + 1) & 0xFFFFFFFFFFi64) )
            goto LABEL_27;
          v14 = v11->m_childNodeIndices[1];
        }
        else
        {
          v14 = v11->m_childNodeIndices[0];
        }
        if ( !(_DWORD)v14 )
          break;
        v11 = &g_iwMemAllocatorPool[v14];
      }
      while ( v11 );
    }
  }
  callstackCrc = 0;
  CurrentNode = IWMem_ProfileTree_GetCurrentNode();
  if ( traceCallstacks && IWMem_ShouldTraceCallstacks() )
    callstackCrc = IWMem_CallstackHash_TraceCurrent();
  if ( uniqueEntries )
    goto LABEL_83;
  __asm
  {
    vmovups xmm0, [rsp+88h+var_38]
    vmovdqa [rsp+88h+var_38], xmm0
  }
  AdjacentEntry = IWMemAllocatorTable::FindAdjacentEntry(this, &v38);
  v19 = AdjacentEntry;
  if ( !AdjacentEntry )
    goto LABEL_83;
  if ( IWMemAllocatorTableEntry::GetMemProfileNode(AdjacentEntry) == CurrentNode && v19->m_callstackHash == callstackCrc )
  {
    m_address = v19->m_address;
    v21 = *((_QWORD *)v19 + 1) & 0xFFFFFFFFFFi64;
    if ( !v21 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\iwmem\\gamelog\\iwmem_block.h", 84, ASSERT_TYPE_ASSERT, "(GetSize() > 0)", (const char *)&queryFormat, "GetSize() > 0") )
      __debugbreak();
    v22 = m_address + v21;
    if ( m_address >= m_address + v21 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\iwmem\\gamelog\\iwmem_block.h", 85, ASSERT_TYPE_ASSERT, "(GetAddress() < GetExclusiveEndAddress())", (const char *)&queryFormat, "GetAddress() < GetExclusiveEndAddress()") )
      __debugbreak();
    v23 = *((_QWORD *)v19 + 1);
    if ( v22 == address )
    {
      *((_QWORD *)v19 + 1) = v23 ^ (v23 ^ (v23 + size)) & 0xFFFFFFFFFFi64;
      this->m_usedSize += size;
      v24 = v19->m_childNodeIndices[1];
      if ( v24 )
      {
        v25 = &g_iwMemAllocatorPool[v24];
        if ( v25 )
        {
          v26 = v25->m_address;
          v27 = *((_QWORD *)v25 + 1) & 0xFFFFFFFFFFi64;
          if ( !v27 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\iwmem\\gamelog\\iwmem_block.h", 84, ASSERT_TYPE_ASSERT, "(GetSize() > 0)", (const char *)&queryFormat, "GetSize() > 0") )
            __debugbreak();
          if ( v26 >= v26 + v27 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\iwmem\\gamelog\\iwmem_block.h", 85, ASSERT_TYPE_ASSERT, "(GetAddress() < GetExclusiveEndAddress())", (const char *)&queryFormat, "GetAddress() < GetExclusiveEndAddress()") )
            __debugbreak();
          if ( v26 == v19->m_address + (*((_QWORD *)v19 + 1) & 0xFFFFFFFFFFi64) )
            IWMemAllocatorTable::TryCombineBlocks(this, v19, v25);
        }
      }
    }
    else
    {
      v28 = v19->m_address;
      v29 = v23 & 0xFFFFFFFFFFi64;
      if ( !v29 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\iwmem\\gamelog\\iwmem_block.h", 84, ASSERT_TYPE_ASSERT, "(GetSize() > 0)", (const char *)&queryFormat, "GetSize() > 0") )
        __debugbreak();
      if ( v28 >= v28 + v29 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\iwmem\\gamelog\\iwmem_block.h", 85, ASSERT_TYPE_ASSERT, "(GetAddress() < GetExclusiveEndAddress())", (const char *)&queryFormat, "GetAddress() < GetExclusiveEndAddress()") )
        __debugbreak();
      if ( v28 != size + address && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\iwmem\\gamelog\\iwmem_allocator_table.cpp", 118, ASSERT_TYPE_ASSERT, "(p_adjacent->GetBlock().GetAddress() == allocedBlock.GetExclusiveEndAddress())", (const char *)&queryFormat, "p_adjacent->GetBlock().GetAddress() == allocedBlock.GetExclusiveEndAddress()") )
        __debugbreak();
      v30 = v19->m_address;
      v31 = *((_QWORD *)v19 + 1) & 0xFFFFFFFFFFi64;
      if ( !v31 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\iwmem\\gamelog\\iwmem_block.h", 84, ASSERT_TYPE_ASSERT, "(GetSize() > 0)", (const char *)&queryFormat, "GetSize() > 0") )
        __debugbreak();
      if ( v30 >= v30 + v31 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\iwmem\\gamelog\\iwmem_block.h", 85, ASSERT_TYPE_ASSERT, "(GetAddress() < GetExclusiveEndAddress())", (const char *)&queryFormat, "GetAddress() < GetExclusiveEndAddress()") )
        __debugbreak();
      if ( address >= v30 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\iwmem\\gamelog\\iwmem_allocator_table.cpp", 119, ASSERT_TYPE_ASSERT, "(allocedBlock.GetAddress() < p_adjacent->GetBlock().GetAddress())", (const char *)&queryFormat, "allocedBlock.GetAddress() < p_adjacent->GetBlock().GetAddress()") )
        __debugbreak();
      v32 = *((_QWORD *)v19 + 1);
      v19->m_address = address;
      *((_QWORD *)v19 + 1) = v32 ^ (v32 ^ (v32 + size)) & 0xFFFFFFFFFFi64;
      this->m_usedSize += size;
      v33 = v19->m_childNodeIndices[0];
      if ( v33 )
      {
        v34 = &g_iwMemAllocatorPool[v33];
        if ( v34 )
        {
          v35 = v34->m_address;
          v36 = *((_QWORD *)v34 + 1) & 0xFFFFFFFFFFi64;
          if ( !v36 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\iwmem\\gamelog\\iwmem_block.h", 84, ASSERT_TYPE_ASSERT, "(GetSize() > 0)", (const char *)&queryFormat, "GetSize() > 0") )
            __debugbreak();
          v37 = v35 + v36;
          if ( v35 >= v37 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\iwmem\\gamelog\\iwmem_block.h", 85, ASSERT_TYPE_ASSERT, "(GetAddress() < GetExclusiveEndAddress())", (const char *)&queryFormat, "GetAddress() < GetExclusiveEndAddress()") )
            __debugbreak();
          if ( v37 == v19->m_address )
            IWMemAllocatorTable::TryCombineBlocks(this, v34, v19);
        }
      }
    }
  }
  else
  {
LABEL_83:
    IWMemAllocatorTable::AddNewBlock(this, address, size, leakDetect, CurrentNode, callstackCrc);
  }
}

/*
==============
IWMemAllocatorTable::Clear
==============
*/
__int64 IWMemAllocatorTable::Clear(IWMemAllocatorTable *this)
{
  IWMemAllocatorTableEntry *mp_root; 
  __int64 i; 
  unsigned __int64 v4; 
  IWMemProfileNode *MemProfileNode; 
  volatile signed __int32 *p_m_numAllocs; 
  IWMemAllocatorTableEntry *v7; 

  mp_root = this->m_allocs.mp_root;
  for ( i = 0i64; this->m_allocs.mp_root; mp_root = this->m_allocs.mp_root )
  {
    v4 = *((_QWORD *)mp_root + 1) & 0xFFFFFFFFFFi64;
    i += v4;
    if ( v4 > this->m_usedSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\iwmem\\gamelog\\iwmem_allocator_table.cpp", 594, ASSERT_TYPE_ASSERT, "(size <= m_usedSize)", (const char *)&queryFormat, "size <= m_usedSize") )
      __debugbreak();
    this->m_usedSize -= v4;
    MemProfileNode = IWMemAllocatorTableEntry::GetMemProfileNode(mp_root);
    p_m_numAllocs = &MemProfileNode->m_numAllocs;
    if ( (((_BYTE)MemProfileNode + 32) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &MemProfileNode->m_numAllocs) )
      __debugbreak();
    if ( _InterlockedDecrement(p_m_numAllocs) < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\iwmem\\gamelog\\iwmem_profile_node.h", 93, ASSERT_TYPE_ASSERT, "(m_numAllocs >= 0)", (const char *)&queryFormat, "m_numAllocs >= 0") )
      __debugbreak();
    v7 = LeanRBTree<IWMemAllocatorTableEntry>::Remove(&this->m_allocs, mp_root->m_address);
    IWMem_AllocatorTablePool_Deallocate(v7);
  }
  if ( this->m_usedSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\iwmem\\gamelog\\iwmem_allocator_table.cpp", 272, ASSERT_TYPE_ASSERT, "(m_usedSize == 0)", (const char *)&queryFormat, "m_usedSize == 0") )
    __debugbreak();
  return i;
}

/*
==============
IWMemAllocatorTable::DetailDebugDump
==============
*/
void IWMemAllocatorTable::DetailDebugDump(IWMemAllocatorTable *this)
{
  IWMemAllocatorTableEntry *mp_root; 

  mp_root = this->m_allocs.mp_root;
  if ( mp_root )
    IWMemAllocatorTableEntry::ForEach(mp_root, IWMem_Dump_Detail_TableEntry);
}

/*
==============
IWMemAllocatorTable::FindAdjacentEntry
==============
*/
IWMemAllocatorTableEntry *IWMemAllocatorTable::FindAdjacentEntry(IWMemAllocatorTable *this, const IWMemBlock *block)
{
  IWMemAllocatorTableEntry *mp_root; 
  unsigned __int64 m_address; 
  __int64 v5; 
  unsigned __int64 v6; 
  unsigned __int64 v9; 
  __int64 v10; 
  unsigned __int64 v11; 
  __int64 v12; 
  int v13; 
  __int128 v15; 

  mp_root = this->m_allocs.mp_root;
  _R14 = block;
  if ( !this->m_allocs.mp_root )
    return 0i64;
  while ( 1 )
  {
    m_address = mp_root->m_address;
    v5 = *((_QWORD *)mp_root + 1) & 0xFFFFFFFFFFi64;
    if ( !v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\iwmem\\gamelog\\iwmem_block.h", 84, ASSERT_TYPE_ASSERT, "(GetSize() > 0)", (const char *)&queryFormat, "GetSize() > 0") )
      __debugbreak();
    v6 = m_address + v5;
    if ( m_address >= v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\iwmem\\gamelog\\iwmem_block.h", 85, ASSERT_TYPE_ASSERT, "(GetAddress() < GetExclusiveEndAddress())", (const char *)&queryFormat, "GetAddress() < GetExclusiveEndAddress()") )
      __debugbreak();
    __asm
    {
      vmovups xmm0, xmmword ptr [r14]
      vmovq   rcx, xmm0
      vmovups [rsp+68h+var_38], xmm0
    }
    if ( m_address >= _RCX )
    {
      if ( *((_QWORD *)&v15 + 1) + _RCX - 1 < m_address )
        goto LABEL_14;
    }
    else if ( v6 - 1 < _RCX )
    {
      goto LABEL_14;
    }
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\iwmem\\gamelog\\iwmem_allocator_table.cpp", 321, ASSERT_TYPE_ASSERT, "(!p_curr_node->GetBlock().DoesOtherOverlap( block ))", (const char *)&queryFormat, "!p_curr_node->GetBlock().DoesOtherOverlap( block )", (_QWORD)v15) )
      __debugbreak();
LABEL_14:
    v9 = mp_root->m_address;
    if ( mp_root->m_address == _R14->m_address + _R14->m_size )
      return mp_root;
    v10 = *((_QWORD *)mp_root + 1) & 0xFFFFFFFFFFi64;
    if ( !v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\iwmem\\gamelog\\iwmem_block.h", 84, ASSERT_TYPE_ASSERT, "(GetSize() > 0)", (const char *)&queryFormat, "GetSize() > 0") )
      __debugbreak();
    v11 = v9 + v10;
    if ( v9 >= v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\iwmem\\gamelog\\iwmem_block.h", 85, ASSERT_TYPE_ASSERT, "(GetAddress() < GetExclusiveEndAddress())", (const char *)&queryFormat, "GetAddress() < GetExclusiveEndAddress()") )
      __debugbreak();
    if ( v11 == _R14->m_address )
      return mp_root;
    v12 = 16i64;
    if ( mp_root->m_address < _R14->m_address )
      v12 = 20i64;
    v13 = *(_DWORD *)((char *)&mp_root->m_address + v12);
    if ( v13 )
    {
      mp_root = &g_iwMemAllocatorPool[v13];
      if ( mp_root )
        continue;
    }
    return 0i64;
  }
}

/*
==============
IWMemAllocatorTable::FindEntryBlockOverlap
==============
*/
IWMemAllocatorTableEntry *IWMemAllocatorTable::FindEntryBlockOverlap(IWMemAllocatorTable *this, const IWMemBlock *block)
{
  IWMemAllocatorTableEntry *result; 
  __int64 v3; 

  for ( result = this->m_allocs.mp_root; result; result = &g_iwMemAllocatorPool[v3] )
  {
    if ( block->m_address + block->m_size > result->m_address )
    {
      if ( block->m_address < result->m_address + (*((_QWORD *)result + 1) & 0xFFFFFFFFFFi64) )
        return result;
      v3 = result->m_childNodeIndices[1];
    }
    else
    {
      v3 = result->m_childNodeIndices[0];
    }
    if ( !(_DWORD)v3 )
      break;
  }
  return 0i64;
}

/*
==============
IWMemAllocatorTable::FindEntryContaining
==============
*/
IWMemAllocatorTableEntry *IWMemAllocatorTable::FindEntryContaining(IWMemAllocatorTable *this, const unsigned __int64 address)
{
  IWMemAllocatorTableEntry *result; 
  __int64 v3; 

  for ( result = this->m_allocs.mp_root; result; result = &g_iwMemAllocatorPool[v3] )
  {
    if ( address >= result->m_address )
    {
      if ( address < result->m_address + (*((_QWORD *)result + 1) & 0xFFFFFFFFFFi64) )
        return result;
      v3 = result->m_childNodeIndices[1];
    }
    else
    {
      v3 = result->m_childNodeIndices[0];
    }
    if ( !(_DWORD)v3 )
      break;
  }
  return 0i64;
}

/*
==============
IWMemAllocatorTable::Free
==============
*/
__int64 IWMemAllocatorTable::Free(IWMemAllocatorTable *this, const unsigned __int64 address, const unsigned __int64 size, const bool uniqueEntries)
{
  IWMemAllocatorTableEntry *mp_root; 
  __int64 v9; 
  int v10; 
  __int64 v11; 
  IWMemAllocatorTableEntry *i; 
  __int64 v14; 
  __int64 v15; 

  if ( size == -1i64 )
  {
    if ( !uniqueEntries && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\iwmem\\gamelog\\iwmem_allocator_table.cpp", 160, ASSERT_TYPE_ASSERT, "(uniqueEntries)", (const char *)&queryFormat, "uniqueEntries") )
      __debugbreak();
    mp_root = this->m_allocs.mp_root;
    if ( this->m_allocs.mp_root )
    {
      while ( address != mp_root->m_address )
      {
        v9 = 16i64;
        if ( address > mp_root->m_address )
          v9 = 20i64;
        v10 = *(_DWORD *)((char *)&mp_root->m_address + v9);
        if ( v10 )
        {
          mp_root = &g_iwMemAllocatorPool[v10];
          if ( mp_root )
            continue;
        }
        goto LABEL_11;
      }
    }
    else
    {
LABEL_11:
      mp_root = NULL;
      if ( this->m_allocs.mp_root )
        IWMemAllocatorTableEntry::ForEach(this->m_allocs.mp_root, IWMem_Dump_Detail_TableEntry);
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\iwmem\\gamelog\\iwmem_allocator_table.cpp", 170, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Trying to free 0x%016zx, but it doesn't exist in the allocation table", address) )
        __debugbreak();
    }
    if ( mp_root->m_address != address && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\iwmem\\gamelog\\iwmem_allocator_table.cpp", 173, ASSERT_TYPE_ASSERT, "(p_entry->GetAddress() == address)", (const char *)&queryFormat, "p_entry->GetAddress() == address") )
      __debugbreak();
    v11 = *((_QWORD *)mp_root + 1) & 0xFFFFFFFFFFi64;
    IWMemAllocatorTable::FreeBlock(this, mp_root);
    return v11;
  }
  else
  {
    for ( i = this->m_allocs.mp_root; i; i = &g_iwMemAllocatorPool[v14] )
    {
      if ( address >= i->m_address )
      {
        if ( address < i->m_address + (*((_QWORD *)i + 1) & 0xFFFFFFFFFFi64) )
          goto LABEL_30;
        v14 = i->m_childNodeIndices[1];
      }
      else
      {
        v14 = i->m_childNodeIndices[0];
      }
      if ( !(_DWORD)v14 )
        break;
    }
    i = NULL;
    if ( this->m_allocs.mp_root )
      IWMemAllocatorTableEntry::ForEach(this->m_allocs.mp_root, IWMem_Dump_Detail_TableEntry);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\iwmem\\gamelog\\iwmem_allocator_table.cpp", 193, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Trying to free 0x%016zx, but it doesn't exist in the allocation table", address) )
      __debugbreak();
LABEL_30:
    if ( uniqueEntries )
    {
      v15 = *((_QWORD *)i + 1) & 0xFFFFFFFFFFi64;
      if ( v15 != size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\iwmem\\gamelog\\iwmem_allocator_table.cpp", 198, ASSERT_TYPE_ASSERT, "( p_entry->GetSize() ) == ( size )", "%s == %s\n\t%lli, %lli", "p_entry->GetSize()", "size", v15, size) )
        __debugbreak();
    }
    if ( IWMemAllocatorTable::FreeInsideBlock(this, i, address, size) != size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\iwmem\\gamelog\\iwmem_allocator_table.cpp", 201, ASSERT_TYPE_ASSERT, "(FreeInsideBlock( p_entry, address, size ) == size)", (const char *)&queryFormat, "FreeInsideBlock( p_entry, address, size ) == size") )
      __debugbreak();
    return size;
  }
}

/*
==============
IWMemAllocatorTable::FreeBlock
==============
*/
void IWMemAllocatorTable::FreeBlock(IWMemAllocatorTable *this, IWMemAllocatorTableEntry *entry)
{
  IWMemProfileNode *MemProfileNode; 
  volatile signed __int32 *p_m_numAllocs; 
  IWMemAllocatorTableEntry *v6; 

  if ( !entry && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\iwmem\\gamelog\\iwmem_allocator_table.cpp", 404, ASSERT_TYPE_ASSERT, "(entry)", (const char *)&queryFormat, "entry") )
    __debugbreak();
  IWMemAllocatorTable::ReduceUsedSize(this, *((_QWORD *)entry + 1) & 0xFFFFFFFFFFi64);
  MemProfileNode = IWMemAllocatorTableEntry::GetMemProfileNode(entry);
  p_m_numAllocs = &MemProfileNode->m_numAllocs;
  if ( (((_BYTE)MemProfileNode + 32) & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &MemProfileNode->m_numAllocs) )
    __debugbreak();
  if ( _InterlockedDecrement(p_m_numAllocs) < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\iwmem\\gamelog\\iwmem_profile_node.h", 93, ASSERT_TYPE_ASSERT, "(m_numAllocs >= 0)", (const char *)&queryFormat, "m_numAllocs >= 0") )
    __debugbreak();
  v6 = LeanRBTree<IWMemAllocatorTableEntry>::Remove(&this->m_allocs, entry->m_address);
  IWMem_AllocatorTablePool_Deallocate(v6);
}

/*
==============
IWMemAllocatorTable::FreeInsideBlock
==============
*/
unsigned __int64 IWMemAllocatorTable::FreeInsideBlock(IWMemAllocatorTable *this, IWMemAllocatorTableEntry *p_entry, const unsigned __int64 address, const unsigned __int64 removeSize)
{
  unsigned __int64 m_address; 
  __int64 v9; 
  unsigned __int64 v10; 
  unsigned __int64 v11; 
  unsigned __int64 result; 
  unsigned __int64 v13; 
  unsigned __int64 v14; 
  unsigned __int64 v15; 
  unsigned __int64 v16; 
  unsigned __int64 v17; 
  __int64 v18; 
  unsigned __int64 v19; 
  unsigned int callstackCrc; 
  IWMemProfileNode *MemProfileNode; 

  if ( !p_entry && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\iwmem\\gamelog\\iwmem_allocator_table.cpp", 469, ASSERT_TYPE_ASSERT, "(p_entry)", (const char *)&queryFormat, "p_entry") )
    __debugbreak();
  m_address = p_entry->m_address;
  v9 = *((_QWORD *)p_entry + 1) & 0xFFFFFFFFFFi64;
  if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\iwmem\\gamelog\\iwmem_block.h", 84, ASSERT_TYPE_ASSERT, "(GetSize() > 0)", (const char *)&queryFormat, "GetSize() > 0") )
    __debugbreak();
  v10 = m_address + v9;
  if ( m_address >= v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\iwmem\\gamelog\\iwmem_block.h", 85, ASSERT_TYPE_ASSERT, "(GetAddress() < GetExclusiveEndAddress())", (const char *)&queryFormat, "GetAddress() < GetExclusiveEndAddress()") )
    __debugbreak();
  if ( (address < m_address || address >= v10) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\iwmem\\gamelog\\iwmem_allocator_table.cpp", 470, ASSERT_TYPE_ASSERT, "(p_entry->GetBlock().IsAddressWithin( address ))", (const char *)&queryFormat, "p_entry->GetBlock().IsAddressWithin( address )") )
    __debugbreak();
  if ( p_entry->m_address == address )
  {
    v11 = *((_QWORD *)p_entry + 1) & 0xFFFFFFFFFFi64;
    if ( removeSize >= v11 )
    {
      IWMemAllocatorTable::FreeBlock(this, p_entry);
      return v11;
    }
    IWMemAllocatorTable::ReduceUsedSize(this, removeSize);
    *((_QWORD *)p_entry + 1) ^= (*((_QWORD *)p_entry + 1) ^ (v11 - removeSize)) & 0xFFFFFFFFFFi64;
    p_entry->m_address += removeSize;
    return removeSize;
  }
  if ( p_entry->m_address >= address && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\iwmem\\gamelog\\iwmem_allocator_table.cpp", 497, ASSERT_TYPE_ASSERT, "(p_entry->GetAddress() < address)", (const char *)&queryFormat, "p_entry->GetAddress() < address") )
    __debugbreak();
  v13 = address + removeSize;
  v14 = p_entry->m_address + (*((_QWORD *)p_entry + 1) & 0xFFFFFFFFFFi64);
  if ( address + removeSize < v14 )
  {
    if ( address <= p_entry->m_address && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\iwmem\\gamelog\\iwmem_allocator_table.cpp", 518, ASSERT_TYPE_ASSERT, "(address > p_entry->GetAddress())", (const char *)&queryFormat, "address > p_entry->GetAddress()") )
      __debugbreak();
    v17 = address - p_entry->m_address;
    if ( v17 >= (*((_QWORD *)p_entry + 1) & 0xFFFFFFFFFFui64) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\iwmem\\gamelog\\iwmem_allocator_table.cpp", 520, ASSERT_TYPE_ASSERT, "(firstBlockSize < p_entry->GetSize())", (const char *)&queryFormat, "firstBlockSize < p_entry->GetSize()") )
      __debugbreak();
    if ( removeSize >= (*((_QWORD *)p_entry + 1) & 0xFFFFFFFFFFui64) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\iwmem\\gamelog\\iwmem_allocator_table.cpp", 522, ASSERT_TYPE_ASSERT, "(removeSize < p_entry->GetSize())", (const char *)&queryFormat, "removeSize < p_entry->GetSize()") )
      __debugbreak();
    if ( v17 + removeSize >= (*((_QWORD *)p_entry + 1) & 0xFFFFFFFFFFui64) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\iwmem\\gamelog\\iwmem_allocator_table.cpp", 523, ASSERT_TYPE_ASSERT, "(( removeSize + firstBlockSize ) < p_entry->GetSize())", (const char *)&queryFormat, "( removeSize + firstBlockSize ) < p_entry->GetSize()") )
      __debugbreak();
    v18 = *((_QWORD *)p_entry + 1);
    *((_QWORD *)p_entry + 1) = v18 ^ (v17 ^ v18) & 0xFFFFFFFFFFi64;
    v19 = (v18 & 0xFFFFFFFFFFi64) - v17 - removeSize;
    IWMemAllocatorTable::ReduceUsedSize(this, (v18 & 0xFFFFFFFFFFi64) - v17);
    callstackCrc = p_entry->m_callstackHash;
    MemProfileNode = IWMemAllocatorTableEntry::GetMemProfileNode(p_entry);
    IWMemAllocatorTable::AddNewBlock(this, v13, v19, *((_QWORD *)p_entry + 1) & 0x10000000000i64, MemProfileNode, callstackCrc);
    return removeSize;
  }
  if ( address >= v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\iwmem\\gamelog\\iwmem_allocator_table.cpp", 502, ASSERT_TYPE_ASSERT, "(address < p_entry->GetExclusiveEndAddress())", (const char *)&queryFormat, "address < p_entry->GetExclusiveEndAddress()") )
    __debugbreak();
  v15 = p_entry->m_address + (*((_QWORD *)p_entry + 1) & 0xFFFFFFFFFFi64) - address;
  if ( v15 > removeSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\iwmem\\gamelog\\iwmem_allocator_table.cpp", 504, ASSERT_TYPE_ASSERT, "(actualRemoveSize <= removeSize)", (const char *)&queryFormat, "actualRemoveSize <= removeSize") )
    __debugbreak();
  v16 = *((_QWORD *)p_entry + 1) & 0xFFFFFFFFFFi64;
  if ( v15 >= v16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\iwmem\\gamelog\\iwmem_allocator_table.cpp", 507, ASSERT_TYPE_ASSERT, "(actualRemoveSize < blockSize)", (const char *)&queryFormat, "actualRemoveSize < blockSize") )
    __debugbreak();
  IWMemAllocatorTable::ReduceUsedSize(this, v15);
  result = v15;
  *((_QWORD *)p_entry + 1) ^= (*((_QWORD *)p_entry + 1) ^ (v16 - v15)) & 0xFFFFFFFFFFi64;
  return result;
}

/*
==============
IWMemAllocatorTable::FreeRange
==============
*/
unsigned __int64 IWMemAllocatorTable::FreeRange(IWMemAllocatorTable *this, const unsigned __int64 address, const unsigned __int64 size)
{
  unsigned __int64 v3; 
  bool v7; 
  IWMemAllocatorTableEntry *mp_root; 
  unsigned __int64 i; 
  __int64 v10; 

  v3 = 0i64;
  if ( !address && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\iwmem\\gamelog\\iwmem_allocator_table.cpp", 224, ASSERT_TYPE_ASSERT, "(address)", (const char *)&queryFormat, "address") )
    __debugbreak();
  if ( size )
  {
    do
    {
      mp_root = this->m_allocs.mp_root;
      for ( i = v3 + address; mp_root; mp_root = &g_iwMemAllocatorPool[v10] )
      {
        if ( i >= mp_root->m_address )
        {
          if ( i < mp_root->m_address + (*((_QWORD *)mp_root + 1) & 0xFFFFFFFFFFi64) )
            goto LABEL_15;
          v10 = mp_root->m_childNodeIndices[1];
        }
        else
        {
          v10 = mp_root->m_childNodeIndices[0];
        }
        if ( !(_DWORD)v10 )
          break;
      }
      mp_root = NULL;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\iwmem\\gamelog\\iwmem_allocator_table.cpp", 232, ASSERT_TYPE_ASSERT, "(p_entry)", (const char *)&queryFormat, "p_entry") )
        __debugbreak();
LABEL_15:
      if ( size < v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\iwmem\\gamelog\\iwmem_allocator_table.cpp", 234, ASSERT_TYPE_ASSERT, "(size >= totalFreed)", (const char *)&queryFormat, "size >= totalFreed") )
        __debugbreak();
      v3 += IWMemAllocatorTable::FreeInsideBlock(this, mp_root, v3 + address, size - v3);
      if ( IWMem_HasHadInternalError() )
        return size;
    }
    while ( v3 < size );
    if ( v3 == size )
      return v3;
    v7 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\iwmem\\gamelog\\iwmem_allocator_table.cpp", 246, ASSERT_TYPE_ASSERT, "( totalFreed ) == ( size )", "%s == %s\n\t%lli, %lli", "totalFreed", "size", v3, size);
  }
  else
  {
    v7 = CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\iwmem\\gamelog\\iwmem_allocator_table.cpp", 225, ASSERT_TYPE_ASSERT, "(size)", (const char *)&queryFormat, "size");
  }
  if ( v7 )
    __debugbreak();
  return v3;
}

/*
==============
IWMemAllocatorTable::GetUsedRange
==============
*/
IWMemBlock *IWMemAllocatorTable::GetUsedRange(IWMemAllocatorTable *this, IWMemBlock *result)
{
  IWMemAllocatorTableEntry *mp_root; 
  unsigned __int64 v3; 
  unsigned __int64 m_address; 
  unsigned int v7; 
  IWMemAllocatorTableEntry *i; 
  unsigned int v9; 

  mp_root = this->m_allocs.mp_root;
  v3 = 0i64;
  m_address = -1i64;
  if ( this->m_allocs.mp_root )
  {
    do
    {
      if ( m_address <= mp_root->m_address && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\iwmem\\gamelog\\iwmem_allocator_table.cpp", 291, ASSERT_TYPE_ASSERT, "(minAddress > p_entry->GetAddress())", (const char *)&queryFormat, "minAddress > p_entry->GetAddress()") )
        __debugbreak();
      v7 = mp_root->m_childNodeIndices[0];
      m_address = mp_root->m_address;
      if ( !v7 )
        break;
      mp_root = &g_iwMemAllocatorPool[v7];
    }
    while ( mp_root );
    for ( i = this->m_allocs.mp_root; i; i = &g_iwMemAllocatorPool[v9] )
    {
      if ( v3 >= i->m_address + (*((_QWORD *)i + 1) & 0xFFFFFFFFFFi64) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\iwmem\\gamelog\\iwmem_allocator_table.cpp", 300, ASSERT_TYPE_ASSERT, "(maxAddress < p_entry->GetExclusiveEndAddress())", (const char *)&queryFormat, "maxAddress < p_entry->GetExclusiveEndAddress()") )
        __debugbreak();
      v9 = i->m_childNodeIndices[1];
      v3 = i->m_address + (*((_QWORD *)i + 1) & 0xFFFFFFFFFFi64);
      if ( !v9 )
        break;
    }
  }
  IWMemBlock::IWMemBlock(result, m_address, v3 - m_address);
  return result;
}

/*
==============
IWMemAllocatorTable::IncrementTotalSize
==============
*/
void IWMemAllocatorTable::IncrementTotalSize(IWMemAllocatorTable *this, const unsigned __int64 size)
{
  this->m_usedSize += size;
}

/*
==============
IWMemAllocatorTable::Init
==============
*/
void IWMemAllocatorTable::Init(IWMemAllocatorTable *this)
{
  this->m_allocs.mp_root = NULL;
  this->m_allocs.m_count = 0;
  this->m_usedSize = 0i64;
}

/*
==============
IWMemAllocatorTable::ReduceUsedSize
==============
*/
void IWMemAllocatorTable::ReduceUsedSize(IWMemAllocatorTable *this, const unsigned __int64 size)
{
  if ( size <= this->m_usedSize )
  {
    this->m_usedSize -= size;
  }
  else
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\iwmem\\gamelog\\iwmem_allocator_table.cpp", 594, ASSERT_TYPE_ASSERT, "(size <= m_usedSize)", (const char *)&queryFormat, "size <= m_usedSize") )
      __debugbreak();
    this->m_usedSize -= size;
  }
}

/*
==============
IWMemAllocatorTable::TryCombineBlocks
==============
*/
void IWMemAllocatorTable::TryCombineBlocks(IWMemAllocatorTable *this, IWMemAllocatorTableEntry *first, IWMemAllocatorTableEntry *second)
{
  __int64 v6; 
  __int64 v7; 
  __int64 v8; 

  if ( !first && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\iwmem\\gamelog\\iwmem_allocator_table.cpp", 558, ASSERT_TYPE_ASSERT, "(first)", (const char *)&queryFormat, "first") )
    __debugbreak();
  if ( !second && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\iwmem\\gamelog\\iwmem_allocator_table.cpp", 559, ASSERT_TYPE_ASSERT, "(second)", (const char *)&queryFormat, "second") )
    __debugbreak();
  if ( first->m_address >= second->m_address && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\iwmem\\gamelog\\iwmem_allocator_table.cpp", 561, ASSERT_TYPE_ASSERT, "(first->GetAddress() < second->GetAddress())", (const char *)&queryFormat, "first->GetAddress() < second->GetAddress()") )
    __debugbreak();
  if ( first->m_profileNodeIndex == second->m_profileNodeIndex && first->m_callstackHash == second->m_callstackHash )
  {
    v6 = *((_QWORD *)second + 1);
    v7 = *((_QWORD *)first + 1);
    if ( ((v7 ^ v6) & 0x10000000000i64) == 0 )
    {
      v8 = v6 & 0xFFFFFFFFFFi64;
      *((_QWORD *)first + 1) = v7 ^ (v7 ^ (v7 + v8)) & 0xFFFFFFFFFFi64;
      IWMemAllocatorTable::FreeBlock(this, second);
      this->m_usedSize += v8;
    }
  }
}


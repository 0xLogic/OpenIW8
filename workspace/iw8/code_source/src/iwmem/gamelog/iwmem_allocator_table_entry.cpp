/*
==============
IWMemAllocatorTableEntry::GetMemProfileNode
==============
*/

IWMemProfileNode *__fastcall IWMemAllocatorTableEntry::GetMemProfileNode(IWMemAllocatorTableEntry *this)
{
  return ?GetMemProfileNode@IWMemAllocatorTableEntry@@QEBAPEAVIWMemProfileNode@@XZ(this);
}

/*
==============
IWMemAllocatorTableEntry::Init
==============
*/

void __fastcall IWMemAllocatorTableEntry::Init(IWMemAllocatorTableEntry *this, const unsigned __int64 address, const unsigned __int64 size, const bool leakDetect, IWMemProfileNode *p_profileNode, const unsigned int callstackHash)
{
  ?Init@IWMemAllocatorTableEntry@@QEAAX_K0_NPEAVIWMemProfileNode@@I@Z(this, address, size, leakDetect, p_profileNode, callstackHash);
}

/*
==============
IWMemAllocatorTableEntry::GetMemProfileNode
==============
*/
IWMemProfileNode *IWMemAllocatorTableEntry::GetMemProfileNode(IWMemAllocatorTableEntry *this)
{
  return IWMem_ProfileTree_GetNodeByIndex(this->m_profileNodeIndex);
}

/*
==============
IWMemAllocatorTableEntry::Init
==============
*/
void IWMemAllocatorTableEntry::Init(IWMemAllocatorTableEntry *this, const unsigned __int64 address, const unsigned __int64 size, const bool leakDetect, IWMemProfileNode *p_profileNode, const unsigned int callstackHash)
{
  unsigned __int64 v10; 
  unsigned __int64 v11; 

  if ( size >= 0x10000000000i64 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\iwmem\\gamelog\\iwmem_allocator_table_entry.cpp", 34, ASSERT_TYPE_ASSERT, "(size < SIZE_LIMIT)", (const char *)&queryFormat, "size < SIZE_LIMIT") )
    __debugbreak();
  v10 = *((_QWORD *)this + 1) & 0xFFFFFC0000000000ui64 | ((unsigned __int64)leakDetect << 40);
  this->m_address = address;
  v11 = size & 0xFFFFFFFFFFi64 | v10;
  *((_QWORD *)this + 1) = v11;
  if ( (v11 & 0xFFFFFFFFFFi64) != size && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\iwmem\\gamelog\\iwmem_allocator_table_entry.cpp", 43, ASSERT_TYPE_ASSERT, "(m_size == size)", (const char *)&queryFormat, "m_size == size") )
    __debugbreak();
  this->m_profileNodeIndex = IWMem_ProfileTree_GetNodeIndex(p_profileNode);
  this->m_callstackHash = callstackHash;
  *((_QWORD *)this + 1) |= 0x20000000000ui64;
  *(_QWORD *)this->m_childNodeIndices = 0i64;
}


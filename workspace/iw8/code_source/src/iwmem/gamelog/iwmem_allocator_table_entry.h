/*
==============
IWMemAllocatorTableEntry::ForEach
==============
*/

void __fastcall IWMemAllocatorTableEntry::ForEach(IWMemAllocatorTableEntry *this, void (__fastcall *p_callback)(const IWMemAllocatorTableEntry *))
{
  ?ForEach@IWMemAllocatorTableEntry@@QEBAXP6AXPEBV1@@Z@Z(this, p_callback);
}

/*
==============
IWMemAllocatorTableEntry::SetChildNode
==============
*/

void __fastcall IWMemAllocatorTableEntry::SetChildNode(IWMemAllocatorTableEntry *this, const bool right, IWMemAllocatorTableEntry *p_node)
{
  ?SetChildNode@IWMemAllocatorTableEntry@@QEAAX_NPEAV1@@Z(this, right, p_node);
}

/*
==============
IWMemAllocatorTableEntry::GetChildNode
==============
*/

IWMemAllocatorTableEntry *__fastcall IWMemAllocatorTableEntry::GetChildNode(IWMemAllocatorTableEntry *this, const bool right)
{
  return ?GetChildNode@IWMemAllocatorTableEntry@@QEAAPEAV1@_N@Z(this, right);
}

/*
==============
IWMemAllocatorTableEntry::ForEach
==============
*/
void IWMemAllocatorTableEntry::ForEach(IWMemAllocatorTableEntry *this, void (*p_callback)(const IWMemAllocatorTableEntry *))
{
  IWMemAllocatorTableEntry *v2; 
  void (__fastcall *v3)(const IWMemAllocatorTableEntry *); 
  __int64 v5; 
  IWMemAllocatorTableEntry *v6; 
  unsigned int v7; 

  v2 = g_iwMemAllocatorPool;
  v3 = p_callback;
  while ( 1 )
  {
    v5 = this->m_childNodeIndices[0];
    if ( (_DWORD)v5 )
    {
      v6 = &v2[(unsigned int)v5];
      if ( v6 )
        IWMemAllocatorTableEntry::ForEach(v6, v3);
    }
    ((void (__fastcall *)(IWMemAllocatorTableEntry *, void (__fastcall *)(const IWMemAllocatorTableEntry *), __int64, IWMemAllocatorTableEntry *))v3)(this, p_callback, v5, v2);
    v7 = this->m_childNodeIndices[1];
    if ( !v7 )
      break;
    v2 = g_iwMemAllocatorPool;
    p_callback = (void (__fastcall *)(const IWMemAllocatorTableEntry *))&g_iwMemAllocatorPool[v7];
    if ( !p_callback )
      break;
    this = &g_iwMemAllocatorPool[v7];
  }
}

/*
==============
IWMemAllocatorTableEntry::GetChildNode
==============
*/
IWMemAllocatorTableEntry *IWMemAllocatorTableEntry::GetChildNode(IWMemAllocatorTableEntry *this, const bool right)
{
  unsigned int v2; 

  v2 = this->m_childNodeIndices[right];
  if ( v2 )
    return &g_iwMemAllocatorPool[v2];
  else
    return 0i64;
}

/*
==============
IWMemAllocatorTableEntry::SetChildNode
==============
*/
void IWMemAllocatorTableEntry::SetChildNode(IWMemAllocatorTableEntry *this, const bool right, IWMemAllocatorTableEntry *p_node)
{
  signed __int64 v5; 

  if ( p_node )
  {
    v5 = p_node - g_iwMemAllocatorPool;
    if ( (v5 < 0 || (unsigned __int64)v5 > 0xFFFFFFFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned int __cdecl truncate_cast_impl<unsigned int,__int64>(__int64)", "unsigned", (unsigned int)v5, "signed", v5) )
      __debugbreak();
    this->m_childNodeIndices[right] = v5;
  }
  else
  {
    this->m_childNodeIndices[right] = 0;
  }
}


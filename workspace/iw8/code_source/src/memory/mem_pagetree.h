/*
==============
Mem_PageTree<262144>::SetRange
==============
*/

void __fastcall Mem_PageTree<262144>::SetRange(Mem_PageTree<262144> *this, unsigned int min, unsigned int max)
{
  ?SetRange@?$Mem_PageTree@$0EAAAA@@@QEAAXII@Z(this, min, max);
}

/*
==============
Mem_PageTree<262144>::Alloc
==============
*/

unsigned int __fastcall Mem_PageTree<262144>::Alloc(Mem_PageTree<262144> *this)
{
  return ?Alloc@?$Mem_PageTree@$0EAAAA@@@QEAAIXZ(this);
}

/*
==============
Mem_PageTree<262144>::Free
==============
*/

void __fastcall Mem_PageTree<262144>::Free(Mem_PageTree<262144> *this, unsigned int pageIndex)
{
  ?Free@?$Mem_PageTree@$0EAAAA@@@QEAAXI@Z(this, pageIndex);
}

/*
==============
Mem_PageTree<262144>::GetFreeCount
==============
*/

unsigned int __fastcall Mem_PageTree<262144>::GetFreeCount(Mem_PageTree<262144> *this)
{
  return ?GetFreeCount@?$Mem_PageTree@$0EAAAA@@@QEBAIXZ(this);
}

/*
==============
Mem_PageTree<262144>::Alloc
==============
*/
__int64 Mem_PageTree<262144>::Alloc(Mem_PageTree<262144> *this)
{
  unsigned int v4; 
  int v5; 
  char *v6; 
  __int64 *v7; 
  unsigned int v8; 
  unsigned __int64 v10; 
  int v11; 
  unsigned int v12; 
  char *v13; 
  char *v14; 
  __int64 v15; 
  __int64 v16; 
  __int64 v17; 
  char v18; 
  char v19; 
  char v20; 
  __int64 v21; 

  _RDI = this;
  if ( !this->m_freePageTree[0] )
    return 0xFFFFFFFFi64;
  v4 = 0;
  v5 = 3;
  v6 = &v19;
  v7 = &v21;
  v8 = 4096;
  do
  {
    --v7;
    v6 -= 4;
    --v5;
    if ( (unsigned int)(((char *)_RDI - (char *)this) >> 3) >= 0x1041 )
    {
      LODWORD(v17) = 4161;
      LODWORD(v16) = ((char *)_RDI - (char *)this) >> 3;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_pagetree.h", 76, ASSERT_TYPE_ASSERT, "(unsigned)( entry - m_freePageTree ) < (unsigned)( PAGE_TREE_SIZE )", "entry - m_freePageTree doesn't index PAGE_TREE_SIZE\n\t%i not in [0, %i)", v16, v17) )
        __debugbreak();
    }
    if ( !_RDI->m_freePageTree[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_pagetree.h", 77, ASSERT_TYPE_ASSERT, "(*entry)", (const char *)&queryFormat, "*entry") )
      __debugbreak();
    __asm { tzcnt   r8, [rdi] }
    v10 = v8 - 1;
    *v7 = (__int64)_RDI;
    *(_DWORD *)v6 = _R8;
    v11 = v8 * _R8;
    v8 >>= 6;
    v4 += v11;
    _RDI = (Mem_PageTree<262144> *)((char *)_RDI + 8 * (unsigned int)_R8 * (unsigned int)(v10 / 0x3F) + 8);
  }
  while ( v5 );
  v12 = 0;
  v13 = &v18;
  v14 = &v20;
  do
  {
    v15 = **(_QWORD **)v14 & ~(1i64 << *(_DWORD *)v13);
    **(_QWORD **)v14 = v15;
    if ( v15 )
      break;
    ++v12;
    v14 += 8;
    v13 += 4;
  }
  while ( v12 < 3 );
  if ( !this->m_freePages && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_pagetree.h", 99, ASSERT_TYPE_ASSERT, "(m_freePages > 0)", (const char *)&queryFormat, "m_freePages > 0") )
    __debugbreak();
  --this->m_freePages;
  return v4;
}

/*
==============
Mem_PageTree<262144>::Free
==============
*/
void Mem_PageTree<262144>::Free(Mem_PageTree<262144> *this, unsigned int pageIndex)
{
  Mem_PageTree<262144> *v4; 
  int v5; 
  unsigned int v6; 
  unsigned __int64 v7; 
  unsigned __int64 v8; 
  __int64 v9; 
  unsigned __int128 v10; 
  __int64 v11; 
  __int64 v12; 

  v4 = this;
  v5 = 3;
  v6 = 4096;
  do
  {
    --v5;
    v7 = pageIndex / v6;
    pageIndex %= v6;
    if ( (unsigned int)(((char *)v4 - (char *)this) >> 3) >= 0x1041 )
    {
      LODWORD(v12) = 4161;
      LODWORD(v11) = ((char *)v4 - (char *)this) >> 3;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_pagetree.h", 128, ASSERT_TYPE_ASSERT, "(unsigned)( entry - m_freePageTree ) < (unsigned)( PAGE_TREE_SIZE )", "entry - m_freePageTree doesn't index PAGE_TREE_SIZE\n\t%i not in [0, %i)", v11, v12) )
        __debugbreak();
    }
    if ( !v5 )
    {
      v8 = v4->m_freePageTree[0];
      if ( _bittest64((const __int64 *)&v8, v7) )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_pagetree.h", 129, ASSERT_TYPE_ASSERT, "(level > 0 || ( *entry & Mem_PageTreeNode( 1U ) << index ) == 0)", (const char *)&queryFormat, "level > 0 || ( *entry & Mem_PageTreeNode( 1U ) << index ) == 0") )
          __debugbreak();
      }
    }
    v4->m_freePageTree[0] |= 1i64 << v7;
    v9 = v6 - 1;
    v10 = (v6 - 1) * (unsigned __int128)0x410410410410411ui64;
    v6 >>= 6;
    v4 = (Mem_PageTree<262144> *)((char *)v4 + 8 * (unsigned int)v7 * (unsigned int)((*((_QWORD *)&v10 + 1) + ((unsigned __int64)(v9 - *((_QWORD *)&v10 + 1)) >> 1)) >> 5) + 8);
  }
  while ( v5 );
  if ( this->m_freePages == -1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_pagetree.h", 136, ASSERT_TYPE_ASSERT, "(m_freePages != 0xffffffffui32)", (const char *)&queryFormat, "m_freePages != UINT32_MAX") )
    __debugbreak();
  ++this->m_freePages;
}

/*
==============
Mem_PageTree<262144>::GetFreeCount
==============
*/
__int64 Mem_PageTree<262144>::GetFreeCount(Mem_PageTree<262144> *this)
{
  return this->m_freePages;
}

/*
==============
Mem_PageTree<262144>::SetRange
==============
*/
void Mem_PageTree<262144>::SetRange(Mem_PageTree<262144> *this, unsigned int min, unsigned int max)
{
  int v7; 
  __int64 v8; 
  unsigned int v9; 
  __int64 v10; 
  int v11; 

  if ( min >= 0x40000 )
  {
    v7 = 0x40000;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_pagetree.h", 152, ASSERT_TYPE_ASSERT, "(unsigned)( min ) < (unsigned)( PAGE_TABLE_SIZE )", "min doesn't index PAGE_TABLE_SIZE\n\t%i not in [0, %i)", min, v7) )
      __debugbreak();
  }
  if ( max > 0x40000 )
  {
    v11 = 0x40000;
    v9 = max;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_pagetree.h", 153, ASSERT_TYPE_ASSERT, "( max ) <= ( PAGE_TABLE_SIZE )", "%s <= %s\n\t%u, %u", "max", "PAGE_TABLE_SIZE", v9, v11) )
      __debugbreak();
  }
  if ( min >= max )
  {
    LODWORD(v10) = max;
    LODWORD(v8) = min;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\memory\\mem_pagetree.h", 154, ASSERT_TYPE_ASSERT, "( min ) < ( max )", "%s < %s\n\t%u, %u", "min", "max", v8, v10) )
      __debugbreak();
  }
  this->m_rangeMin = min;
  this->m_rangeMax = max;
}


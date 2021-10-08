/*
==============
DB_AssetPool::IsInPool
==============
*/

bool __fastcall DB_AssetPool::IsInPool(DB_AssetPool *this, const void *ptr)
{
  return ?IsInPool@DB_AssetPool@@QEBA_NPEBX@Z(this, ptr);
}

/*
==============
DB_AssetPool::Free
==============
*/

void __fastcall DB_AssetPool::Free(DB_AssetPool *this, void *ptr)
{
  ?Free@DB_AssetPool@@QEAAXPEAX@Z(this, ptr);
}

/*
==============
DB_AssetPool::Init
==============
*/

void __fastcall DB_AssetPool::Init(DB_AssetPool *this, void *const poolMem, const unsigned int elementSize, const unsigned int poolSize, const bool reverseFreeList)
{
  ?Init@DB_AssetPool@@QEAAXQEAXII_N@Z(this, poolMem, elementSize, poolSize, reverseFreeList);
}

/*
==============
DB_AssetPool::Free
==============
*/
void DB_AssetPool::Free(DB_AssetPool *this, void *ptr)
{
  _BYTE *m_entries; 
  unsigned __int64 m_elementSize; 
  const char *v6; 
  int v7; 
  const char *v8; 
  void *m_freeHead; 

  if ( !ptr )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_assetpool.h", 94, ASSERT_TYPE_ASSERT, "(ptr)", (const char *)&queryFormat, "ptr") )
      __debugbreak();
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_assetpool.h", 122, ASSERT_TYPE_ASSERT, "(ptr)", (const char *)&queryFormat, "ptr") )
      __debugbreak();
  }
  m_entries = this->m_entries;
  if ( ptr < this->m_entries || (m_elementSize = this->m_elementSize, ptr >= &m_entries[(unsigned int)(m_elementSize * this->m_poolSize)]) )
  {
    v6 = "IsInPool( ptr )";
    v7 = 95;
    v8 = "(IsInPool( ptr ))";
  }
  else
  {
    if ( !(((_BYTE *)ptr - m_entries) % m_elementSize) )
      goto LABEL_13;
    v6 = "( ( reinterpret_cast<uintptr_t>( ptr ) - reinterpret_cast<uintptr_t>( m_entries ) ) % m_elementSize ) == 0";
    v7 = 127;
    v8 = "(( ( reinterpret_cast<uintptr_t>( ptr ) - reinterpret_cast<uintptr_t>( m_entries ) ) % m_elementSize ) == 0)";
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_assetpool.h", v7, ASSERT_TYPE_ASSERT, v8, (const char *)&queryFormat, v6) )
    __debugbreak();
LABEL_13:
  if ( !this->m_usedCount && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_assetpool.h", 98, ASSERT_TYPE_ASSERT, "(m_usedCount)", (const char *)&queryFormat, "m_usedCount") )
    __debugbreak();
  m_freeHead = this->m_freeHead;
  --this->m_usedCount;
  *(_QWORD *)ptr = m_freeHead;
  this->m_freeHead = ptr;
}

/*
==============
DB_AssetPool::Init
==============
*/
void DB_AssetPool::Init(DB_AssetPool *this, void *const poolMem, const unsigned int elementSize, const unsigned int poolSize, const bool reverseFreeList)
{
  __int64 v5; 
  _QWORD *m_entries; 
  __int64 v9; 
  __int64 v10; 
  __int64 v11; 

  v5 = elementSize;
  m_entries = poolMem;
  if ( !poolMem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_assetpool.h", 23, ASSERT_TYPE_ASSERT, "(poolMem)", (const char *)&queryFormat, "poolMem") )
    __debugbreak();
  if ( !(_DWORD)v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_assetpool.h", 24, ASSERT_TYPE_ASSERT, "(elementSize)", (const char *)&queryFormat, "elementSize") )
    __debugbreak();
  if ( !poolSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_assetpool.h", 25, ASSERT_TYPE_ASSERT, "(poolSize)", (const char *)&queryFormat, "poolSize") )
    __debugbreak();
  if ( (unsigned int)v5 < 8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_assetpool.h", 26, ASSERT_TYPE_ASSERT, "(elementSize >= 8)", (const char *)&queryFormat, "elementSize >= SIZEOF_POINTER") )
    __debugbreak();
  this->m_poolSize = poolSize;
  *(_QWORD *)&this->m_usedCount = 0i64;
  this->m_entries = m_entries;
  this->m_elementSize = v5;
  v9 = poolSize - 1;
  if ( reverseFreeList )
  {
    this->m_freeHead = (char *)m_entries + (unsigned int)v5 * (poolSize - 1);
    if ( poolSize != 1 )
    {
      v10 = v9 * v5;
      do
      {
        *(_QWORD *)((char *)this->m_entries + v10) = (char *)this->m_entries + v10 - v5;
        v10 -= v5;
        --v9;
      }
      while ( v9 );
      m_entries = this->m_entries;
    }
    *m_entries = 0i64;
  }
  else
  {
    this->m_freeHead = m_entries;
    if ( poolSize != 1 )
    {
      v11 = 0i64;
      do
      {
        *(_QWORD *)((char *)this->m_entries + v11) = (char *)this->m_entries + v11 + v5;
        v11 += v5;
        --v9;
      }
      while ( v9 );
      poolSize = this->m_poolSize;
      m_entries = this->m_entries;
    }
    *(_QWORD *)((char *)m_entries + (unsigned int)v5 * (poolSize - 1)) = 0i64;
  }
}

/*
==============
DB_AssetPool::IsInPool
==============
*/
char DB_AssetPool::IsInPool(DB_AssetPool *this, const void *ptr)
{
  _BYTE *m_entries; 
  unsigned __int64 m_elementSize; 

  if ( !ptr && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_assetpool.h", 122, ASSERT_TYPE_ASSERT, "(ptr)", (const char *)&queryFormat, "ptr") )
    __debugbreak();
  m_entries = this->m_entries;
  if ( ptr < this->m_entries )
    return 0;
  m_elementSize = this->m_elementSize;
  if ( ptr >= &m_entries[(unsigned int)(m_elementSize * this->m_poolSize)] )
    return 0;
  if ( ((_BYTE *)ptr - m_entries) % m_elementSize )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\database\\db_assetpool.h", 127, ASSERT_TYPE_ASSERT, "(( ( reinterpret_cast<uintptr_t>( ptr ) - reinterpret_cast<uintptr_t>( m_entries ) ) % m_elementSize ) == 0)", (const char *)&queryFormat, "( ( reinterpret_cast<uintptr_t>( ptr ) - reinterpret_cast<uintptr_t>( m_entries ) ) % m_elementSize ) == 0") )
      __debugbreak();
  }
  return 1;
}


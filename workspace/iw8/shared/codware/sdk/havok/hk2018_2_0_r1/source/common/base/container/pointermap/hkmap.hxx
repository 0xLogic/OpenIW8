/*
==============
hkMapBase<HavokPhysicsShapeViewer::GroupKey,int,HavokPhysicsShapeViewer::GroupKey::MapOps>::clearAndDeallocate
==============
*/

void __fastcall hkMapBase<HavokPhysicsShapeViewer::GroupKey,int,HavokPhysicsShapeViewer::GroupKey::MapOps>::clearAndDeallocate(hkMapBase<HavokPhysicsShapeViewer::GroupKey,int,HavokPhysicsShapeViewer::GroupKey::MapOps> *this, hkMemoryAllocator *alloc)
{
  ?clearAndDeallocate@?$hkMapBase@UGroupKey@HavokPhysicsShapeViewer@@HUMapOps@12@@@QEAAXAEAVhkMemoryAllocator@@@Z(this, alloc);
}

/*
==============
hkMapBase<HavokPhysicsShapeViewer::GroupKey,int,HavokPhysicsShapeViewer::GroupKey::MapOps>::init
==============
*/

void __fastcall hkMapBase<HavokPhysicsShapeViewer::GroupKey,int,HavokPhysicsShapeViewer::GroupKey::MapOps>::init(hkMapBase<HavokPhysicsShapeViewer::GroupKey,int,HavokPhysicsShapeViewer::GroupKey::MapOps> *this, void *ptr, int sizeInBytes)
{
  ?init@?$hkMapBase@UGroupKey@HavokPhysicsShapeViewer@@HUMapOps@12@@@QEAAXPEAXH@Z(this, ptr, sizeInBytes);
}

/*
==============
hkMapBase<HavokPhysicsShapeViewer::GroupKey,int,HavokPhysicsShapeViewer::GroupKey::MapOps>::getWithDefault
==============
*/

const int *__fastcall hkMapBase<HavokPhysicsShapeViewer::GroupKey,int,HavokPhysicsShapeViewer::GroupKey::MapOps>::getWithDefault(hkMapBase<HavokPhysicsShapeViewer::GroupKey,int,HavokPhysicsShapeViewer::GroupKey::MapOps> *this, const HavokPhysicsShapeViewer::GroupKey *key, const int *def)
{
  return ?getWithDefault@?$hkMapBase@UGroupKey@HavokPhysicsShapeViewer@@HUMapOps@12@@@QEBAAEBHAEBUGroupKey@HavokPhysicsShapeViewer@@AEBH@Z(this, key, def);
}

/*
==============
hkMapBase<HavokPhysicsShapeViewer::GroupKey,int,HavokPhysicsShapeViewer::GroupKey::MapOps>::findKey
==============
*/

Dummy *__fastcall hkMapBase<HavokPhysicsShapeViewer::GroupKey,int,HavokPhysicsShapeViewer::GroupKey::MapOps>::findKey(hkMapBase<HavokPhysicsShapeViewer::GroupKey,int,HavokPhysicsShapeViewer::GroupKey::MapOps> *this, const HavokPhysicsShapeViewer::GroupKey *key)
{
  return ?findKey@?$hkMapBase@UGroupKey@HavokPhysicsShapeViewer@@HUMapOps@12@@@QEBAPEAVDummy@@AEBUGroupKey@HavokPhysicsShapeViewer@@@Z(this, key);
}

/*
==============
hkMapBase<HavokPhysicsShapeViewer::GroupKey,int,HavokPhysicsShapeViewer::GroupKey::MapOps>::clear
==============
*/

void __fastcall hkMapBase<HavokPhysicsShapeViewer::GroupKey,int,HavokPhysicsShapeViewer::GroupKey::MapOps>::clear(hkMapBase<HavokPhysicsShapeViewer::GroupKey,int,HavokPhysicsShapeViewer::GroupKey::MapOps> *this)
{
  ?clear@?$hkMapBase@UGroupKey@HavokPhysicsShapeViewer@@HUMapOps@12@@@QEAAXXZ(this);
}

/*
==============
hkMapBase<HavokPhysicsShapeViewer::GroupKey,int,HavokPhysicsShapeViewer::GroupKey::MapOps>::remove
==============
*/

void __fastcall hkMapBase<HavokPhysicsShapeViewer::GroupKey,int,HavokPhysicsShapeViewer::GroupKey::MapOps>::remove(hkMapBase<HavokPhysicsShapeViewer::GroupKey,int,HavokPhysicsShapeViewer::GroupKey::MapOps> *this, Dummy *it)
{
  ?remove@?$hkMapBase@UGroupKey@HavokPhysicsShapeViewer@@HUMapOps@12@@@QEAAXPEAVDummy@@@Z(this, it);
}

/*
==============
hkMapBase<HavokPhysicsShapeViewer::GroupKey,int,HavokPhysicsShapeViewer::GroupKey::MapOps>::findOrInsertKey
==============
*/

Dummy *__fastcall hkMapBase<HavokPhysicsShapeViewer::GroupKey,int,HavokPhysicsShapeViewer::GroupKey::MapOps>::findOrInsertKey(hkMapBase<HavokPhysicsShapeViewer::GroupKey,int,HavokPhysicsShapeViewer::GroupKey::MapOps> *this, hkMemoryAllocator *alloc, const HavokPhysicsShapeViewer::GroupKey *key, const int *val)
{
  return ?findOrInsertKey@?$hkMapBase@UGroupKey@HavokPhysicsShapeViewer@@HUMapOps@12@@@QEAAPEAVDummy@@AEAVhkMemoryAllocator@@AEBUGroupKey@HavokPhysicsShapeViewer@@AEBH@Z(this, alloc, key, val);
}

/*
==============
hkMapBase<HavokPhysicsShapeViewer::GroupKey,int,HavokPhysicsShapeViewer::GroupKey::MapOps>::resizeTable
==============
*/

hkResult __fastcall hkMapBase<HavokPhysicsShapeViewer::GroupKey,int,HavokPhysicsShapeViewer::GroupKey::MapOps>::resizeTable(hkMapBase<HavokPhysicsShapeViewer::GroupKey,int,HavokPhysicsShapeViewer::GroupKey::MapOps> *this, hkMemoryAllocator *alloc, int newcap)
{
  return ?resizeTable@?$hkMapBase@UGroupKey@HavokPhysicsShapeViewer@@HUMapOps@12@@@IEAA?AUhkResult@@AEAVhkMemoryAllocator@@H@Z(this, alloc, newcap);
}

/*
==============
hkMapBase<HavokPhysicsShapeViewer::GroupKey,int,HavokPhysicsShapeViewer::GroupKey::MapOps>::remove
==============
*/

hkResult __fastcall hkMapBase<HavokPhysicsShapeViewer::GroupKey,int,HavokPhysicsShapeViewer::GroupKey::MapOps>::remove(hkMapBase<HavokPhysicsShapeViewer::GroupKey,int,HavokPhysicsShapeViewer::GroupKey::MapOps> *this, const HavokPhysicsShapeViewer::GroupKey *key)
{
  return ?remove@?$hkMapBase@UGroupKey@HavokPhysicsShapeViewer@@HUMapOps@12@@@QEAA?AUhkResult@@AEBUGroupKey@HavokPhysicsShapeViewer@@@Z(this, key);
}

/*
==============
hkMapBase<HavokPhysicsShapeViewer::GroupKey,int,HavokPhysicsShapeViewer::GroupKey::MapOps>::getSizeInBytesFor
==============
*/

int __fastcall hkMapBase<HavokPhysicsShapeViewer::GroupKey,int,HavokPhysicsShapeViewer::GroupKey::MapOps>::getSizeInBytesFor(int numOfKeys)
{
  return ?getSizeInBytesFor@?$hkMapBase@UGroupKey@HavokPhysicsShapeViewer@@HUMapOps@12@@@SAHH@Z(numOfKeys);
}

/*
==============
hkMapBase<HavokPhysicsShapeViewer::GroupKey,int,HavokPhysicsShapeViewer::GroupKey::MapOps>::getMemSize
==============
*/

int __fastcall hkMapBase<HavokPhysicsShapeViewer::GroupKey,int,HavokPhysicsShapeViewer::GroupKey::MapOps>::getMemSize(hkMapBase<HavokPhysicsShapeViewer::GroupKey,int,HavokPhysicsShapeViewer::GroupKey::MapOps> *this)
{
  return ?getMemSize@?$hkMapBase@UGroupKey@HavokPhysicsShapeViewer@@HUMapOps@12@@@QEBAHXZ(this);
}

/*
==============
hkMapBase<HavokPhysicsShapeViewer::GroupKey,int,HavokPhysicsShapeViewer::GroupKey::MapOps>::isOk
==============
*/

hkBool *__fastcall hkMapBase<HavokPhysicsShapeViewer::GroupKey,int,HavokPhysicsShapeViewer::GroupKey::MapOps>::isOk(hkMapBase<HavokPhysicsShapeViewer::GroupKey,int,HavokPhysicsShapeViewer::GroupKey::MapOps> *this, hkBool *result)
{
  return ?isOk@?$hkMapBase@UGroupKey@HavokPhysicsShapeViewer@@HUMapOps@12@@@QEBA?AVhkBool@@XZ(this, result);
}

/*
==============
hkMapBase<HavokPhysicsShapeViewer::GroupKey,int,HavokPhysicsShapeViewer::GroupKey::MapOps>::setOwnedData
==============
*/

void __fastcall hkMapBase<HavokPhysicsShapeViewer::GroupKey,int,HavokPhysicsShapeViewer::GroupKey::MapOps>::setOwnedData(hkMapBase<HavokPhysicsShapeViewer::GroupKey,int,HavokPhysicsShapeViewer::GroupKey::MapOps> *this, void *ptr, int size, int capacity)
{
  ?setOwnedData@?$hkMapBase@UGroupKey@HavokPhysicsShapeViewer@@HUMapOps@12@@@QEAAXPEAXHH@Z(this, ptr, size, capacity);
}

/*
==============
hkMapBase<HavokPhysicsShapeViewer::GroupKey,int,HavokPhysicsShapeViewer::GroupKey::MapOps>::_findEmptyPositionInternal
==============
*/

int __fastcall hkMapBase<HavokPhysicsShapeViewer::GroupKey,int,HavokPhysicsShapeViewer::GroupKey::MapOps>::_findEmptyPositionInternal(hkMapBase<HavokPhysicsShapeViewer::GroupKey,int,HavokPhysicsShapeViewer::GroupKey::MapOps> *this, hkMemoryAllocator *alloc, const HavokPhysicsShapeViewer::GroupKey *key, unsigned int *wasNewKeyOut)
{
  return ?_findEmptyPositionInternal@?$hkMapBase@UGroupKey@HavokPhysicsShapeViewer@@HUMapOps@12@@@AEAAHAEAVhkMemoryAllocator@@AEBUGroupKey@HavokPhysicsShapeViewer@@AEAI@Z(this, alloc, key, wasNewKeyOut);
}

/*
==============
hkMapBase<HavokPhysicsShapeViewer::GroupKey,int,HavokPhysicsShapeViewer::GroupKey::MapOps>::get
==============
*/

hkResult __fastcall hkMapBase<HavokPhysicsShapeViewer::GroupKey,int,HavokPhysicsShapeViewer::GroupKey::MapOps>::get(hkMapBase<HavokPhysicsShapeViewer::GroupKey,int,HavokPhysicsShapeViewer::GroupKey::MapOps> *this, const HavokPhysicsShapeViewer::GroupKey *key, int *out)
{
  return ?get@?$hkMapBase@UGroupKey@HavokPhysicsShapeViewer@@HUMapOps@12@@@QEBA?AUhkResult@@AEBUGroupKey@HavokPhysicsShapeViewer@@PEAH@Z(this, key, out);
}

/*
==============
hkMapBase<HavokPhysicsShapeViewer::GroupKey,int,HavokPhysicsShapeViewer::GroupKey::MapOps>::insert
==============
*/

unsigned int __fastcall hkMapBase<HavokPhysicsShapeViewer::GroupKey,int,HavokPhysicsShapeViewer::GroupKey::MapOps>::insert(hkMapBase<HavokPhysicsShapeViewer::GroupKey,int,HavokPhysicsShapeViewer::GroupKey::MapOps> *this, hkMemoryAllocator *alloc, const HavokPhysicsShapeViewer::GroupKey *key, const int *val)
{
  return ?insert@?$hkMapBase@UGroupKey@HavokPhysicsShapeViewer@@HUMapOps@12@@@QEAAIAEAVhkMemoryAllocator@@AEBUGroupKey@HavokPhysicsShapeViewer@@AEBH@Z(this, alloc, key, val);
}

/*
==============
hkMapBase<HavokPhysicsShapeViewer::GroupKey,int,HavokPhysicsShapeViewer::GroupKey::MapOps>::tryInsert
==============
*/

unsigned int __fastcall hkMapBase<HavokPhysicsShapeViewer::GroupKey,int,HavokPhysicsShapeViewer::GroupKey::MapOps>::tryInsert(hkMapBase<HavokPhysicsShapeViewer::GroupKey,int,HavokPhysicsShapeViewer::GroupKey::MapOps> *this, hkMemoryAllocator *alloc, const HavokPhysicsShapeViewer::GroupKey *key, const int *val, hkResult *res)
{
  return ?tryInsert@?$hkMapBase@UGroupKey@HavokPhysicsShapeViewer@@HUMapOps@12@@@QEAAIAEAVhkMemoryAllocator@@AEBUGroupKey@HavokPhysicsShapeViewer@@AEBHAEAUhkResult@@@Z(this, alloc, key, val, res);
}

/*
==============
hkMapBase<HavokPhysicsShapeViewer::GroupKey,int,HavokPhysicsShapeViewer::GroupKey::MapOps>::~hkMapBase<HavokPhysicsShapeViewer::GroupKey,int,HavokPhysicsShapeViewer::GroupKey::MapOps>
==============
*/

void __fastcall hkMapBase<HavokPhysicsShapeViewer::GroupKey,int,HavokPhysicsShapeViewer::GroupKey::MapOps>::~hkMapBase<HavokPhysicsShapeViewer::GroupKey,int,HavokPhysicsShapeViewer::GroupKey::MapOps>(hkMapBase<HavokPhysicsShapeViewer::GroupKey,int,HavokPhysicsShapeViewer::GroupKey::MapOps> *this)
{
  ??1?$hkMapBase@UGroupKey@HavokPhysicsShapeViewer@@HUMapOps@12@@@QEAA@XZ(this);
}

/*
==============
hkMapBase<HavokPhysicsShapeViewer::GroupKey,int,HavokPhysicsShapeViewer::GroupKey::MapOps>::reserve
==============
*/

void __fastcall hkMapBase<HavokPhysicsShapeViewer::GroupKey,int,HavokPhysicsShapeViewer::GroupKey::MapOps>::reserve(hkMapBase<HavokPhysicsShapeViewer::GroupKey,int,HavokPhysicsShapeViewer::GroupKey::MapOps> *this, hkMemoryAllocator *alloc, int numElements)
{
  ?reserve@?$hkMapBase@UGroupKey@HavokPhysicsShapeViewer@@HUMapOps@12@@@QEAAXAEAVhkMemoryAllocator@@H@Z(this, alloc, numElements);
}

/*
==============
hkMapBase<HavokPhysicsShapeViewer::GroupKey,int,HavokPhysicsShapeViewer::GroupKey::MapOps>::~hkMapBase<HavokPhysicsShapeViewer::GroupKey,int,HavokPhysicsShapeViewer::GroupKey::MapOps>
==============
*/
void hkMapBase<HavokPhysicsShapeViewer::GroupKey,int,HavokPhysicsShapeViewer::GroupKey::MapOps>::~hkMapBase<HavokPhysicsShapeViewer::GroupKey,int,HavokPhysicsShapeViewer::GroupKey::MapOps>(hkMapBase<HavokPhysicsShapeViewer::GroupKey,int,HavokPhysicsShapeViewer::GroupKey::MapOps> *this)
{
  ;
}

/*
==============
hkMapBase<HavokPhysicsShapeViewer::GroupKey,int,HavokPhysicsShapeViewer::GroupKey::MapOps>::_findEmptyPositionInternal
==============
*/
__int64 hkMapBase<HavokPhysicsShapeViewer::GroupKey,int,HavokPhysicsShapeViewer::GroupKey::MapOps>::_findEmptyPositionInternal(hkMapBase<HavokPhysicsShapeViewer::GroupKey,int,HavokPhysicsShapeViewer::GroupKey::MapOps> *this, hkMemoryAllocator *alloc, const HavokPhysicsShapeViewer::GroupKey *key, unsigned int *wasNewKeyOut)
{
  int m_hashMod; 
  __int64 result; 
  hkMapBase<HavokPhysicsShapeViewer::GroupKey,int,HavokPhysicsShapeViewer::GroupKey::MapOps>::Pair *v9; 
  hkMemoryAllocator alloca; 

  if ( 2 * this->m_numElems > this->m_hashMod )
    hkMapBase<HavokPhysicsShapeViewer::GroupKey,int,HavokPhysicsShapeViewer::GroupKey::MapOps>::resizeTable(this, &alloca, (int)alloc);
  *wasNewKeyOut = 1;
  m_hashMod = this->m_hashMod;
  result = m_hashMod & (-1640531535 * (unsigned int)((unsigned __int64)key->m_shape >> 4));
  v9 = &this->m_elem[result];
  if ( v9->key.m_shape )
  {
    while ( v9->key.m_shape != key->m_shape || v9->key.m_color != key->m_color )
    {
      result = m_hashMod & (unsigned int)(result + 1);
      v9 = &this->m_elem[result];
      if ( !v9->key.m_shape )
      {
        this->m_numElems += *wasNewKeyOut;
        return result;
      }
    }
    *wasNewKeyOut = 0;
  }
  else
  {
    ++this->m_numElems;
  }
  return result;
}

/*
==============
hkMapBase<HavokPhysicsShapeViewer::GroupKey,int,HavokPhysicsShapeViewer::GroupKey::MapOps>::clear
==============
*/
void hkMapBase<HavokPhysicsShapeViewer::GroupKey,int,HavokPhysicsShapeViewer::GroupKey::MapOps>::clear(hkMapBase<HavokPhysicsShapeViewer::GroupKey,int,HavokPhysicsShapeViewer::GroupKey::MapOps> *this)
{
  int m_hashMod; 
  int v2; 
  __int64 v3; 
  __int64 v4; 

  m_hashMod = this->m_hashMod;
  if ( m_hashMod )
  {
    v2 = m_hashMod + 1;
    v3 = v2;
    if ( v2 > 0 )
    {
      v4 = 0i64;
      do
      {
        if ( this->m_elem[v4].key.m_shape )
          this->m_elem[v4].key.m_shape = NULL;
        ++v4;
        --v3;
      }
      while ( v3 );
    }
  }
  this->m_numElems &= 0x80000000;
}

/*
==============
hkMapBase<HavokPhysicsShapeViewer::GroupKey,int,HavokPhysicsShapeViewer::GroupKey::MapOps>::clearAndDeallocate
==============
*/
void hkMapBase<HavokPhysicsShapeViewer::GroupKey,int,HavokPhysicsShapeViewer::GroupKey::MapOps>::clearAndDeallocate(hkMapBase<HavokPhysicsShapeViewer::GroupKey,int,HavokPhysicsShapeViewer::GroupKey::MapOps> *this, hkMemoryAllocator *alloc)
{
  int m_hashMod; 
  int v5; 
  __int64 v6; 
  __int64 v7; 
  int m_numElems; 
  hkMapBase<HavokPhysicsShapeViewer::GroupKey,int,HavokPhysicsShapeViewer::GroupKey::MapOps>::Pair *m_elem; 

  m_hashMod = this->m_hashMod;
  if ( m_hashMod )
  {
    v5 = m_hashMod + 1;
    v6 = v5;
    if ( v5 > 0 )
    {
      v7 = 0i64;
      do
      {
        if ( this->m_elem[v7].key.m_shape )
          this->m_elem[v7].key.m_shape = NULL;
        ++v7;
        --v6;
      }
      while ( v6 );
    }
  }
  m_numElems = this->m_numElems;
  m_elem = this->m_elem;
  this->m_numElems = m_numElems & 0x80000000;
  if ( m_elem && m_numElems >= 0 )
    alloc->blockFree(alloc, m_elem, 8 * (3 * this->m_hashMod + 3));
  this->m_elem = NULL;
  this->m_numElems = 0;
  this->m_hashMod = -1;
}

/*
==============
hkMapBase<HavokPhysicsShapeViewer::GroupKey,int,HavokPhysicsShapeViewer::GroupKey::MapOps>::findKey
==============
*/
Dummy *hkMapBase<HavokPhysicsShapeViewer::GroupKey,int,HavokPhysicsShapeViewer::GroupKey::MapOps>::findKey(hkMapBase<HavokPhysicsShapeViewer::GroupKey,int,HavokPhysicsShapeViewer::GroupKey::MapOps> *this, const HavokPhysicsShapeViewer::GroupKey *key)
{
  int m_hashMod; 
  const hknpShape *m_shape; 
  __int64 v5; 
  __int64 v6; 
  hkMapBase<HavokPhysicsShapeViewer::GroupKey,int,HavokPhysicsShapeViewer::GroupKey::MapOps>::Pair *v7; 

  m_hashMod = this->m_hashMod;
  if ( m_hashMod <= 0 )
    return (Dummy *)(m_hashMod + 1);
  m_shape = key->m_shape;
  v5 = m_hashMod & (-1640531535 * (unsigned int)((unsigned __int64)key->m_shape >> 4));
  v6 = v5;
  v7 = &this->m_elem[v5];
  if ( !v7->key.m_shape )
    return (Dummy *)(m_hashMod + 1);
  while ( v7->key.m_shape != m_shape || v7->key.m_color != key->m_color )
  {
    v5 = m_hashMod & (unsigned int)(v5 + 1);
    v6 = (unsigned int)v5;
    v7 = &this->m_elem[v5];
    if ( !v7->key.m_shape )
      return (Dummy *)(m_hashMod + 1);
  }
  return (Dummy *)v6;
}

/*
==============
hkMapBase<HavokPhysicsShapeViewer::GroupKey,int,HavokPhysicsShapeViewer::GroupKey::MapOps>::findOrInsertKey
==============
*/
Dummy *hkMapBase<HavokPhysicsShapeViewer::GroupKey,int,HavokPhysicsShapeViewer::GroupKey::MapOps>::findOrInsertKey(hkMapBase<HavokPhysicsShapeViewer::GroupKey,int,HavokPhysicsShapeViewer::GroupKey::MapOps> *this, hkMemoryAllocator *alloc, const HavokPhysicsShapeViewer::GroupKey *key, const int *val)
{
  int m_hashMod; 
  int v8; 
  hkMapBase<HavokPhysicsShapeViewer::GroupKey,int,HavokPhysicsShapeViewer::GroupKey::MapOps>::Pair *m_elem; 
  __int64 v10; 
  __int64 v11; 
  hkMapBase<HavokPhysicsShapeViewer::GroupKey,int,HavokPhysicsShapeViewer::GroupKey::MapOps>::Pair *v12; 
  __int64 v13; 
  hkMemoryAllocator alloca; 

  m_hashMod = this->m_hashMod;
  _RDI = key;
  v8 = m_hashMod;
  if ( 2 * this->m_numElems > m_hashMod )
  {
    hkMapBase<HavokPhysicsShapeViewer::GroupKey,int,HavokPhysicsShapeViewer::GroupKey::MapOps>::resizeTable(this, &alloca, (int)alloc);
    m_hashMod = this->m_hashMod;
    v8 = m_hashMod;
  }
  m_elem = this->m_elem;
  v10 = v8 & (-1640531535 * (unsigned int)((unsigned __int64)_RDI->m_shape >> 4));
  v11 = v10;
  v12 = &this->m_elem[v10];
  if ( v12->key.m_shape )
  {
    while ( v12->key.m_shape != _RDI->m_shape || v12->key.m_color != _RDI->m_color )
    {
      v10 = m_hashMod & (unsigned int)(v10 + 1);
      v11 = (unsigned int)v10;
      v12 = &m_elem[v10];
      if ( !v12->key.m_shape )
        goto LABEL_7;
    }
  }
  else
  {
LABEL_7:
    v13 = v10;
    v11 = (unsigned int)v10;
    if ( &m_elem[v10] )
    {
      __asm
      {
        vmovups xmm0, xmmword ptr [rdi]
        vmovups xmmword ptr [rcx], xmm0
      }
    }
    this->m_elem[v13].val = *val;
    ++this->m_numElems;
  }
  return (Dummy *)v11;
}

/*
==============
hkMapBase<HavokPhysicsShapeViewer::GroupKey,int,HavokPhysicsShapeViewer::GroupKey::MapOps>::get
==============
*/
const HavokPhysicsShapeViewer::GroupKey *hkMapBase<HavokPhysicsShapeViewer::GroupKey,int,HavokPhysicsShapeViewer::GroupKey::MapOps>::get(hkMapBase<HavokPhysicsShapeViewer::GroupKey,int,HavokPhysicsShapeViewer::GroupKey::MapOps> *this, const HavokPhysicsShapeViewer::GroupKey *key, int *out, int *a4)
{
  int v7; 
  const HavokPhysicsShapeViewer::GroupKey *result; 

  v7 = (unsigned int)hkMapBase<HavokPhysicsShapeViewer::GroupKey,int,HavokPhysicsShapeViewer::GroupKey::MapOps>::findKey(this, (const HavokPhysicsShapeViewer::GroupKey *)out);
  if ( v7 > this->m_hashMod )
  {
    result = key;
    LODWORD(key->m_shape) = -2147220992;
  }
  else
  {
    *a4 = this->m_elem[v7].val;
    LODWORD(key->m_shape) = 0;
    return key;
  }
  return result;
}

/*
==============
hkMapBase<HavokPhysicsShapeViewer::GroupKey,int,HavokPhysicsShapeViewer::GroupKey::MapOps>::getMemSize
==============
*/
__int64 hkMapBase<HavokPhysicsShapeViewer::GroupKey,int,HavokPhysicsShapeViewer::GroupKey::MapOps>::getMemSize(hkMapBase<HavokPhysicsShapeViewer::GroupKey,int,HavokPhysicsShapeViewer::GroupKey::MapOps> *this)
{
  return (unsigned int)(8 * (3 * this->m_hashMod + 3));
}

/*
==============
hkMapBase<HavokPhysicsShapeViewer::GroupKey,int,HavokPhysicsShapeViewer::GroupKey::MapOps>::getSizeInBytesFor
==============
*/
__int64 hkMapBase<HavokPhysicsShapeViewer::GroupKey,int,HavokPhysicsShapeViewer::GroupKey::MapOps>::getSizeInBytesFor(int numOfKeys)
{
  int v1; 
  int i; 

  v1 = 2 * numOfKeys;
  for ( i = 8; i < v1; i *= 2 )
    ;
  return (unsigned int)(24 * i);
}

/*
==============
hkMapBase<HavokPhysicsShapeViewer::GroupKey,int,HavokPhysicsShapeViewer::GroupKey::MapOps>::getWithDefault
==============
*/
int *hkMapBase<HavokPhysicsShapeViewer::GroupKey,int,HavokPhysicsShapeViewer::GroupKey::MapOps>::getWithDefault(hkMapBase<HavokPhysicsShapeViewer::GroupKey,int,HavokPhysicsShapeViewer::GroupKey::MapOps> *this, const HavokPhysicsShapeViewer::GroupKey *key, const int *def)
{
  int m_hashMod; 
  const hknpShape *m_shape; 
  hkMapBase<HavokPhysicsShapeViewer::GroupKey,int,HavokPhysicsShapeViewer::GroupKey::MapOps>::Pair *m_elem; 
  __int64 v8; 
  __int64 v9; 
  hkMapBase<HavokPhysicsShapeViewer::GroupKey,int,HavokPhysicsShapeViewer::GroupKey::MapOps>::Pair *v10; 

  m_hashMod = this->m_hashMod;
  if ( m_hashMod <= 0 )
    return (int *)def;
  m_shape = key->m_shape;
  m_elem = this->m_elem;
  v8 = m_hashMod & (-1640531535 * (unsigned int)((unsigned __int64)key->m_shape >> 4));
  v9 = v8;
  v10 = &this->m_elem[v8];
  if ( !v10->key.m_shape )
    return (int *)def;
  while ( v10->key.m_shape != m_shape || v10->key.m_color != key->m_color )
  {
    v8 = m_hashMod & (unsigned int)(v8 + 1);
    v9 = v8;
    v10 = &m_elem[v8];
    if ( !v10->key.m_shape )
      return (int *)def;
  }
  return &m_elem[v9].val;
}

/*
==============
hkMapBase<HavokPhysicsShapeViewer::GroupKey,int,HavokPhysicsShapeViewer::GroupKey::MapOps>::init
==============
*/
void hkMapBase<HavokPhysicsShapeViewer::GroupKey,int,HavokPhysicsShapeViewer::GroupKey::MapOps>::init(hkMapBase<HavokPhysicsShapeViewer::GroupKey,int,HavokPhysicsShapeViewer::GroupKey::MapOps> *this, void *ptr, int sizeInBytes)
{
  signed int v3; 
  __int64 v4; 
  __int64 v5; 

  this->m_elem = (hkMapBase<HavokPhysicsShapeViewer::GroupKey,int,HavokPhysicsShapeViewer::GroupKey::MapOps>::Pair *)ptr;
  this->m_numElems = 0x80000000;
  v3 = sizeInBytes / 0x18u;
  v4 = sizeInBytes / 0x18u;
  this->m_hashMod = v3 - 1;
  if ( v3 > 0 )
  {
    v5 = 0i64;
    do
    {
      this->m_elem[v5++].key.m_shape = NULL;
      --v4;
    }
    while ( v4 );
  }
}

/*
==============
hkMapBase<HavokPhysicsShapeViewer::GroupKey,int,HavokPhysicsShapeViewer::GroupKey::MapOps>::insert
==============
*/
__int64 hkMapBase<HavokPhysicsShapeViewer::GroupKey,int,HavokPhysicsShapeViewer::GroupKey::MapOps>::insert(hkMapBase<HavokPhysicsShapeViewer::GroupKey,int,HavokPhysicsShapeViewer::GroupKey::MapOps> *this, hkMemoryAllocator *alloc, const HavokPhysicsShapeViewer::GroupKey *key, const int *val)
{
  int EmptyPositionInternal; 
  hkMapBase<HavokPhysicsShapeViewer::GroupKey,int,HavokPhysicsShapeViewer::GroupKey::MapOps>::Pair *m_elem; 
  __int64 v9; 
  unsigned int wasNewKeyOut; 

  _RDI = key;
  EmptyPositionInternal = hkMapBase<HavokPhysicsShapeViewer::GroupKey,int,HavokPhysicsShapeViewer::GroupKey::MapOps>::_findEmptyPositionInternal(this, alloc, key, &wasNewKeyOut);
  m_elem = this->m_elem;
  v9 = EmptyPositionInternal;
  if ( &this->m_elem[v9] )
  {
    __asm
    {
      vmovups xmm0, xmmword ptr [rdi]
      vmovups xmmword ptr [rax], xmm0
    }
    m_elem = this->m_elem;
  }
  m_elem[v9].val = *val;
  return wasNewKeyOut;
}

/*
==============
hkMapBase<HavokPhysicsShapeViewer::GroupKey,int,HavokPhysicsShapeViewer::GroupKey::MapOps>::isOk
==============
*/
hkBool *hkMapBase<HavokPhysicsShapeViewer::GroupKey,int,HavokPhysicsShapeViewer::GroupKey::MapOps>::isOk(hkMapBase<HavokPhysicsShapeViewer::GroupKey,int,HavokPhysicsShapeViewer::GroupKey::MapOps> *this, hkBool *result)
{
  int m_hashMod; 
  hkMapBase<HavokPhysicsShapeViewer::GroupKey,int,HavokPhysicsShapeViewer::GroupKey::MapOps>::Pair *m_elem; 
  __int64 v4; 
  __int64 v5; 
  const hknpShape *m_shape; 
  unsigned int i; 
  __int64 v8; 
  hkBool *v9; 

  m_hashMod = this->m_hashMod;
  if ( m_hashMod < 0 )
  {
    result->m_bool = 1;
    return result;
  }
  else
  {
    m_elem = this->m_elem;
    v4 = 0i64;
    v5 = (unsigned int)(m_hashMod + 1);
    do
    {
      m_shape = m_elem[v4].key.m_shape;
      if ( m_shape )
      {
        for ( i = -1640531535 * ((unsigned __int64)m_shape >> 4); ; i = v8 + 1 )
        {
          v8 = m_hashMod & i;
          if ( m_elem[v8].key.m_shape == m_shape && m_elem[v8].key.m_color == m_elem[v4].key.m_color )
            break;
        }
      }
      ++v4;
      --v5;
    }
    while ( v5 );
    v9 = result;
    result->m_bool = 1;
  }
  return v9;
}

/*
==============
hkMapBase<HavokPhysicsShapeViewer::GroupKey,int,HavokPhysicsShapeViewer::GroupKey::MapOps>::remove
==============
*/
const HavokPhysicsShapeViewer::GroupKey *hkMapBase<HavokPhysicsShapeViewer::GroupKey,int,HavokPhysicsShapeViewer::GroupKey::MapOps>::remove(hkMapBase<HavokPhysicsShapeViewer::GroupKey,int,HavokPhysicsShapeViewer::GroupKey::MapOps> *this, const HavokPhysicsShapeViewer::GroupKey *key, const HavokPhysicsShapeViewer::GroupKey *a3)
{
  Dummy *v5; 

  v5 = hkMapBase<HavokPhysicsShapeViewer::GroupKey,int,HavokPhysicsShapeViewer::GroupKey::MapOps>::findKey(this, a3);
  if ( (int)v5 > this->m_hashMod )
  {
    LODWORD(key->m_shape) = -2147220992;
  }
  else
  {
    hkMapBase<HavokPhysicsShapeViewer::GroupKey,int,HavokPhysicsShapeViewer::GroupKey::MapOps>::remove(this, v5);
    LODWORD(key->m_shape) = 0;
  }
  return key;
}

/*
==============
hkMapBase<HavokPhysicsShapeViewer::GroupKey,int,HavokPhysicsShapeViewer::GroupKey::MapOps>::remove
==============
*/
void hkMapBase<HavokPhysicsShapeViewer::GroupKey,int,HavokPhysicsShapeViewer::GroupKey::MapOps>::remove(hkMapBase<HavokPhysicsShapeViewer::GroupKey,int,HavokPhysicsShapeViewer::GroupKey::MapOps> *this, Dummy *it)
{
  unsigned int v2; 
  int m_hashMod; 
  hkMapBase<HavokPhysicsShapeViewer::GroupKey,int,HavokPhysicsShapeViewer::GroupKey::MapOps>::Pair *m_elem; 
  __int64 v6; 
  __int64 v7; 
  unsigned int v8; 
  __int64 v9; 
  hkMapBase<HavokPhysicsShapeViewer::GroupKey,int,HavokPhysicsShapeViewer::GroupKey::MapOps>::Pair *v10; 
  unsigned int v11; 

  --this->m_numElems;
  v2 = (unsigned int)it;
  this->m_elem[(unsigned int)it].key.m_shape = NULL;
  m_hashMod = this->m_hashMod;
  m_elem = this->m_elem;
  v6 = m_hashMod & (unsigned int)(m_hashMod + (_DWORD)it);
  if ( this->m_elem[v6].key.m_shape )
  {
    do
      v6 = m_hashMod & (unsigned int)(m_hashMod + v6);
    while ( m_elem[v6].key.m_shape );
  }
  v7 = m_hashMod & (unsigned int)((_DWORD)it + 1);
  v8 = m_hashMod & (v6 + 1);
  v9 = v7;
  if ( m_elem[v7].key.m_shape )
  {
    v10 = this->m_elem;
    do
    {
      v11 = m_hashMod & (-1640531535 * ((unsigned __int64)m_elem[v9].key.m_shape >> 4));
      if ( (unsigned int)v7 < v8 || (m_elem = v10, v11 <= v2) )
      {
        m_elem = v10;
        if ( (unsigned int)v7 >= v2 || v11 <= v2 && v11 > (unsigned int)v7 )
        {
          m_elem = v10;
          if ( v11 <= v2 || v11 >= v8 )
          {
            hkMemUtil::memCpy(&v10[v2], &v10[v9], 24i64);
            v2 = v7;
            this->m_elem[v9].key.m_shape = NULL;
            m_elem = this->m_elem;
          }
        }
      }
      m_hashMod = this->m_hashMod;
      v7 = m_hashMod & (unsigned int)(v7 + 1);
      v10 = m_elem;
      v9 = v7;
    }
    while ( m_elem[v7].key.m_shape );
  }
}

/*
==============
hkMapBase<HavokPhysicsShapeViewer::GroupKey,int,HavokPhysicsShapeViewer::GroupKey::MapOps>::reserve
==============
*/
void hkMapBase<HavokPhysicsShapeViewer::GroupKey,int,HavokPhysicsShapeViewer::GroupKey::MapOps>::reserve(hkMapBase<HavokPhysicsShapeViewer::GroupKey,int,HavokPhysicsShapeViewer::GroupKey::MapOps> *this, hkMemoryAllocator *alloc, int numElements)
{
  int v3; 
  int i; 
  hkMemoryAllocator alloca; 

  v3 = 2 * numElements;
  for ( i = 8; i < v3; i *= 2 )
    ;
  hkMapBase<HavokPhysicsShapeViewer::GroupKey,int,HavokPhysicsShapeViewer::GroupKey::MapOps>::resizeTable(this, &alloca, (int)alloc);
}

/*
==============
hkMapBase<HavokPhysicsShapeViewer::GroupKey,int,HavokPhysicsShapeViewer::GroupKey::MapOps>::resizeTable
==============
*/
hkMemoryAllocator *hkMapBase<HavokPhysicsShapeViewer::GroupKey,int,HavokPhysicsShapeViewer::GroupKey::MapOps>::resizeTable(hkMapBase<HavokPhysicsShapeViewer::GroupKey,int,HavokPhysicsShapeViewer::GroupKey::MapOps> *this, hkMemoryAllocator *alloc, __int64 newcap, int a4)
{
  int m_hashMod; 
  int v6; 
  hkMapBase<HavokPhysicsShapeViewer::GroupKey,int,HavokPhysicsShapeViewer::GroupKey::MapOps>::Pair *m_elem; 
  int v10; 
  hkMapBase<HavokPhysicsShapeViewer::GroupKey,int,HavokPhysicsShapeViewer::GroupKey::MapOps>::Pair *v11; 
  __int64 v13; 
  __int64 v14; 
  int v15; 
  __int64 v16; 
  hkMapBase<HavokPhysicsShapeViewer::GroupKey,int,HavokPhysicsShapeViewer::GroupKey::MapOps>::Pair *v17; 
  const hknpShape *m_shape; 
  int v19; 
  const hknpShape *v20; 
  int v21; 
  int v22; 
  __int64 v23; 
  hkMapBase<HavokPhysicsShapeViewer::GroupKey,int,HavokPhysicsShapeViewer::GroupKey::MapOps>::Pair *v24; 
  hkMapBase<HavokPhysicsShapeViewer::GroupKey,int,HavokPhysicsShapeViewer::GroupKey::MapOps>::Pair *v25; 
  hkMemoryAllocator alloca; 
  int m_numElems; 

  m_hashMod = this->m_hashMod;
  v6 = 8;
  m_elem = this->m_elem;
  m_numElems = this->m_numElems;
  if ( a4 > 8 )
    v6 = a4;
  v10 = m_hashMod + 1;
  v11 = (hkMapBase<HavokPhysicsShapeViewer::GroupKey,int,HavokPhysicsShapeViewer::GroupKey::MapOps>::Pair *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)newcap + 8i64))(newcap, (unsigned int)(24 * v6));
  if ( v11 )
  {
    this->m_elem = v11;
    v13 = v6;
    v14 = 0i64;
    do
    {
      this->m_elem[v14++].key.m_shape = NULL;
      --v13;
    }
    while ( v13 );
    this->m_numElems = 0;
    this->m_hashMod = v6 - 1;
    v15 = 0;
    v16 = v10;
    if ( v10 > 0 )
    {
      v17 = m_elem;
      do
      {
        m_shape = v17->key.m_shape;
        if ( v17->key.m_shape )
        {
          v19 = this->m_hashMod;
          v20 = v17->key.m_shape;
          v21 = v19;
          if ( 2 * this->m_numElems > v19 )
          {
            hkMapBase<HavokPhysicsShapeViewer::GroupKey,int,HavokPhysicsShapeViewer::GroupKey::MapOps>::resizeTable(this, &alloca, newcap);
            m_shape = v17->key.m_shape;
            v19 = this->m_hashMod;
            v20 = v17->key.m_shape;
            v21 = v19;
          }
          v22 = 1;
          v23 = v21 & (-1640531535 * (unsigned int)((unsigned __int64)v20 >> 4));
          v24 = this->m_elem;
          v25 = &this->m_elem[v23];
          if ( v25->key.m_shape )
          {
            while ( v25->key.m_shape != m_shape || v25->key.m_color != v17->key.m_color )
            {
              v23 = v19 & (unsigned int)(v23 + 1);
              v25 = &v24[v23];
              if ( !v25->key.m_shape )
                goto LABEL_19;
            }
            v22 = 0;
          }
LABEL_19:
          this->m_numElems += v22;
          hkMemUtil::memCpy(&v24[(int)v23], &m_elem[v15], 24i64);
        }
        ++v15;
        ++v17;
        --v16;
      }
      while ( v16 );
    }
    if ( m_numElems >= 0 )
      (*(void (__fastcall **)(__int64, hkMapBase<HavokPhysicsShapeViewer::GroupKey,int,HavokPhysicsShapeViewer::GroupKey::MapOps>::Pair *, _QWORD))(*(_QWORD *)newcap + 16i64))(newcap, m_elem, (unsigned int)(24 * v10));
    LODWORD(alloc->__vftable) = 0;
    return alloc;
  }
  else
  {
    LODWORD(alloc->__vftable) = -2147220992;
    return alloc;
  }
}

/*
==============
hkMapBase<HavokPhysicsShapeViewer::GroupKey,int,HavokPhysicsShapeViewer::GroupKey::MapOps>::setOwnedData
==============
*/
void hkMapBase<HavokPhysicsShapeViewer::GroupKey,int,HavokPhysicsShapeViewer::GroupKey::MapOps>::setOwnedData(hkMapBase<HavokPhysicsShapeViewer::GroupKey,int,HavokPhysicsShapeViewer::GroupKey::MapOps> *this, void *ptr, int size, int capacity)
{
  this->m_elem = (hkMapBase<HavokPhysicsShapeViewer::GroupKey,int,HavokPhysicsShapeViewer::GroupKey::MapOps>::Pair *)ptr;
  this->m_numElems = size | 0x80000000;
  this->m_hashMod = capacity - 1;
}

/*
==============
hkMapBase<HavokPhysicsShapeViewer::GroupKey,int,HavokPhysicsShapeViewer::GroupKey::MapOps>::tryInsert
==============
*/
__int64 hkMapBase<HavokPhysicsShapeViewer::GroupKey,int,HavokPhysicsShapeViewer::GroupKey::MapOps>::tryInsert(hkMapBase<HavokPhysicsShapeViewer::GroupKey,int,HavokPhysicsShapeViewer::GroupKey::MapOps> *this, hkMemoryAllocator *alloc, const HavokPhysicsShapeViewer::GroupKey *key, const int *val, hkResult *res)
{
  int *v9; 
  int v10; 
  int EmptyPositionInternal; 
  hkMapBase<HavokPhysicsShapeViewer::GroupKey,int,HavokPhysicsShapeViewer::GroupKey::MapOps>::Pair *m_elem; 
  __int64 v14; 
  hkMemoryAllocator alloca; 

  _RDI = key;
  if ( 2 * this->m_numElems <= this->m_hashMod )
  {
    res->m_code = 0;
  }
  else
  {
    LODWORD(v9) = hkMapBase<HavokPhysicsShapeViewer::GroupKey,int,HavokPhysicsShapeViewer::GroupKey::MapOps>::resizeTable(this, &alloca, (int)alloc);
    v10 = *v9;
    res->m_code = *v9;
    if ( v10 < 0 )
      return 0i64;
  }
  EmptyPositionInternal = hkMapBase<HavokPhysicsShapeViewer::GroupKey,int,HavokPhysicsShapeViewer::GroupKey::MapOps>::_findEmptyPositionInternal(this, alloc, _RDI, (unsigned int *)&alloca);
  m_elem = this->m_elem;
  v14 = EmptyPositionInternal;
  if ( &this->m_elem[v14] )
  {
    __asm
    {
      vmovups xmm0, xmmword ptr [rdi]
      vmovups xmmword ptr [rax], xmm0
    }
    m_elem = this->m_elem;
  }
  m_elem[v14].val = *val;
  return LODWORD(alloca.__vftable);
}


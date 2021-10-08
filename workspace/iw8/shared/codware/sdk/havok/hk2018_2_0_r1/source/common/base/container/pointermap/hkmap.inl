/*
==============
hkMapBase<HavokPhysicsShapeViewer::GroupKey,int,HavokPhysicsShapeViewer::GroupKey::MapOps>::getIterator
==============
*/

Dummy *__fastcall hkMapBase<HavokPhysicsShapeViewer::GroupKey,int,HavokPhysicsShapeViewer::GroupKey::MapOps>::getIterator(hkMapBase<HavokPhysicsShapeViewer::GroupKey,int,HavokPhysicsShapeViewer::GroupKey::MapOps> *this)
{
  return ?getIterator@?$hkMapBase@UGroupKey@HavokPhysicsShapeViewer@@HUMapOps@12@@@QEBAPEAVDummy@@XZ(this);
}

/*
==============
hkMapBase<HavokPhysicsShapeViewer::GroupKey,int,HavokPhysicsShapeViewer::GroupKey::MapOps>::getValue
==============
*/

int *__fastcall hkMapBase<HavokPhysicsShapeViewer::GroupKey,int,HavokPhysicsShapeViewer::GroupKey::MapOps>::getValue(hkMapBase<HavokPhysicsShapeViewer::GroupKey,int,HavokPhysicsShapeViewer::GroupKey::MapOps> *this, Dummy *it)
{
  return ?getValue@?$hkMapBase@UGroupKey@HavokPhysicsShapeViewer@@HUMapOps@12@@@QEBAAEAHPEAVDummy@@@Z(this, it);
}

/*
==============
hkMapBase<HavokPhysicsShapeViewer::GroupKey,int,HavokPhysicsShapeViewer::GroupKey::MapOps>::getKey
==============
*/

const HavokPhysicsShapeViewer::GroupKey *__fastcall hkMapBase<HavokPhysicsShapeViewer::GroupKey,int,HavokPhysicsShapeViewer::GroupKey::MapOps>::getKey(hkMapBase<HavokPhysicsShapeViewer::GroupKey,int,HavokPhysicsShapeViewer::GroupKey::MapOps> *this, Dummy *it)
{
  return ?getKey@?$hkMapBase@UGroupKey@HavokPhysicsShapeViewer@@HUMapOps@12@@@QEBAAEBUGroupKey@HavokPhysicsShapeViewer@@PEAVDummy@@@Z(this, it);
}

/*
==============
hkMapBase<HavokPhysicsShapeViewer::GroupKey,int,HavokPhysicsShapeViewer::GroupKey::MapOps>::getNext
==============
*/

Dummy *__fastcall hkMapBase<HavokPhysicsShapeViewer::GroupKey,int,HavokPhysicsShapeViewer::GroupKey::MapOps>::getNext(hkMapBase<HavokPhysicsShapeViewer::GroupKey,int,HavokPhysicsShapeViewer::GroupKey::MapOps> *this, Dummy *it)
{
  return ?getNext@?$hkMapBase@UGroupKey@HavokPhysicsShapeViewer@@HUMapOps@12@@@QEBAPEAVDummy@@PEAV2@@Z(this, it);
}

/*
==============
hkMapBase<HavokPhysicsShapeViewer::GroupKey,int,HavokPhysicsShapeViewer::GroupKey::MapOps>::isValid
==============
*/

hkBool *__fastcall hkMapBase<HavokPhysicsShapeViewer::GroupKey,int,HavokPhysicsShapeViewer::GroupKey::MapOps>::isValid(hkMapBase<HavokPhysicsShapeViewer::GroupKey,int,HavokPhysicsShapeViewer::GroupKey::MapOps> *this, hkBool *result, Dummy *it)
{
  return ?isValid@?$hkMapBase@UGroupKey@HavokPhysicsShapeViewer@@HUMapOps@12@@@QEBA?AVhkBool@@PEAVDummy@@@Z(this, result, it);
}

/*
==============
hkMapBase<HavokPhysicsShapeViewer::GroupKey,int,HavokPhysicsShapeViewer::GroupKey::MapOps>::setValue
==============
*/

void __fastcall hkMapBase<HavokPhysicsShapeViewer::GroupKey,int,HavokPhysicsShapeViewer::GroupKey::MapOps>::setValue(hkMapBase<HavokPhysicsShapeViewer::GroupKey,int,HavokPhysicsShapeViewer::GroupKey::MapOps> *this, Dummy *it, const int *val)
{
  ?setValue@?$hkMapBase@UGroupKey@HavokPhysicsShapeViewer@@HUMapOps@12@@@QEAAXPEAVDummy@@AEBH@Z(this, it, val);
}

/*
==============
hkMapBase<HavokPhysicsShapeViewer::GroupKey,int,HavokPhysicsShapeViewer::GroupKey::MapOps>::getIterator
==============
*/
Dummy *hkMapBase<HavokPhysicsShapeViewer::GroupKey,int,HavokPhysicsShapeViewer::GroupKey::MapOps>::getIterator(hkMapBase<HavokPhysicsShapeViewer::GroupKey,int,HavokPhysicsShapeViewer::GroupKey::MapOps> *this)
{
  __int64 m_hashMod; 
  Dummy *result; 
  hkMapBase<HavokPhysicsShapeViewer::GroupKey,int,HavokPhysicsShapeViewer::GroupKey::MapOps>::Pair *m_elem; 
  __int64 v4; 
  __int64 i; 

  m_hashMod = this->m_hashMod;
  LODWORD(result) = 0;
  if ( (int)m_hashMod >= 0 )
  {
    m_elem = this->m_elem;
    v4 = m_hashMod;
    for ( i = 0i64; i <= v4; ++i )
    {
      if ( m_elem->key.m_shape )
        break;
      LODWORD(result) = (_DWORD)result + 1;
      ++m_elem;
    }
  }
  return (Dummy *)(int)result;
}

/*
==============
hkMapBase<HavokPhysicsShapeViewer::GroupKey,int,HavokPhysicsShapeViewer::GroupKey::MapOps>::getKey
==============
*/
hkMapBase<HavokPhysicsShapeViewer::GroupKey,int,HavokPhysicsShapeViewer::GroupKey::MapOps>::Pair *hkMapBase<HavokPhysicsShapeViewer::GroupKey,int,HavokPhysicsShapeViewer::GroupKey::MapOps>::getKey(hkMapBase<HavokPhysicsShapeViewer::GroupKey,int,HavokPhysicsShapeViewer::GroupKey::MapOps> *this, Dummy *it)
{
  return &this->m_elem[(int)it];
}

/*
==============
hkMapBase<HavokPhysicsShapeViewer::GroupKey,int,HavokPhysicsShapeViewer::GroupKey::MapOps>::getNext
==============
*/
__int64 hkMapBase<HavokPhysicsShapeViewer::GroupKey,int,HavokPhysicsShapeViewer::GroupKey::MapOps>::getNext(hkMapBase<HavokPhysicsShapeViewer::GroupKey,int,HavokPhysicsShapeViewer::GroupKey::MapOps> *this, Dummy *it)
{
  __int64 result; 
  __int64 m_hashMod; 
  __int64 v4; 
  hkMapBase<HavokPhysicsShapeViewer::GroupKey,int,HavokPhysicsShapeViewer::GroupKey::MapOps>::Pair *v5; 

  LODWORD(result) = (_DWORD)it + 1;
  m_hashMod = this->m_hashMod;
  if ( (int)result <= (int)m_hashMod )
  {
    v4 = (int)result;
    v5 = &this->m_elem[(int)result];
    do
    {
      if ( v5->key.m_shape )
        break;
      LODWORD(result) = result + 1;
      ++v4;
      ++v5;
    }
    while ( v4 <= m_hashMod );
  }
  return (int)result;
}

/*
==============
hkMapBase<HavokPhysicsShapeViewer::GroupKey,int,HavokPhysicsShapeViewer::GroupKey::MapOps>::getValue
==============
*/
int *hkMapBase<HavokPhysicsShapeViewer::GroupKey,int,HavokPhysicsShapeViewer::GroupKey::MapOps>::getValue(hkMapBase<HavokPhysicsShapeViewer::GroupKey,int,HavokPhysicsShapeViewer::GroupKey::MapOps> *this, Dummy *it)
{
  return &this->m_elem[(int)it].val;
}

/*
==============
hkMapBase<HavokPhysicsShapeViewer::GroupKey,int,HavokPhysicsShapeViewer::GroupKey::MapOps>::isValid
==============
*/
hkBool *hkMapBase<HavokPhysicsShapeViewer::GroupKey,int,HavokPhysicsShapeViewer::GroupKey::MapOps>::isValid(hkMapBase<HavokPhysicsShapeViewer::GroupKey,int,HavokPhysicsShapeViewer::GroupKey::MapOps> *this, hkBool *result, Dummy *it)
{
  result->m_bool = (int)it <= this->m_hashMod;
  return result;
}

/*
==============
hkMapBase<HavokPhysicsShapeViewer::GroupKey,int,HavokPhysicsShapeViewer::GroupKey::MapOps>::setValue
==============
*/
void hkMapBase<HavokPhysicsShapeViewer::GroupKey,int,HavokPhysicsShapeViewer::GroupKey::MapOps>::setValue(hkMapBase<HavokPhysicsShapeViewer::GroupKey,int,HavokPhysicsShapeViewer::GroupKey::MapOps> *this, Dummy *it, const int *val)
{
  this->m_elem[(int)it].val = *val;
}


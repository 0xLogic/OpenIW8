/*
==============
hkAlgorithm::quickSortRecursive<hkReflect::Type const *,HavokPhysics_GlobalTypeCompendium_TypeCompare>
==============
*/

void __fastcall hkAlgorithm::quickSortRecursive<hkReflect::Type const *,HavokPhysics_GlobalTypeCompendium_TypeCompare>(const hkReflect::Type **pArr, int d, int h, HavokPhysics_GlobalTypeCompendium_TypeCompare cmpLess)
{
  ??$quickSortRecursive@PEBVType@hkReflect@@VHavokPhysics_GlobalTypeCompendium_TypeCompare@@@hkAlgorithm@@YAXPEAPEBVType@hkReflect@@HHVHavokPhysics_GlobalTypeCompendium_TypeCompare@@@Z(pArr, d, h, cmpLess);
}

/*
==============
hkAlgorithm::quickSortRecursive<hkReflect::Type const *,HavokPhysics_GlobalTypeCompendium_TypeCompare>
==============
*/
void hkAlgorithm::quickSortRecursive<hkReflect::Type const *,HavokPhysics_GlobalTypeCompendium_TypeCompare>(const hkReflect::Type **pArr, int d, int h, HavokPhysics_GlobalTypeCompendium_TypeCompare cmpLess)
{
  int v4; 
  __int64 v6; 
  __int64 i; 
  int v8; 
  __int64 v9; 
  int v10; 
  hkReflect::Type *v11; 
  BOOL v12; 
  hkReflect::Type *v13; 
  BOOL v14; 
  const hkReflect::Type *v15; 
  int da; 
  int v18; 
  hkStringBuf s; 
  hkStringBuf nameBuf; 

  v18 = h;
  v4 = d;
  v6 = d;
  for ( i = h; ; i = v18 )
  {
    da = v4;
    v8 = h;
    v9 = i;
    v10 = v4;
    v11 = (hkReflect::Type *)pArr[(__int64)(h + v4) >> 1];
    do
    {
      while ( 1 )
      {
        nameBuf.m_string.m_data = (char *)&nameBuf.m_string.m_storage;
        nameBuf.m_string.m_capacityAndFlags = -2147483520;
        nameBuf.m_string.m_size = 1;
        nameBuf.m_string.m_storage.m_storage.m_storage[0] = 0;
        s.m_string.m_data = (char *)&s.m_string.m_storage;
        s.m_string.m_capacityAndFlags = -2147483520;
        s.m_string.m_size = 1;
        s.m_string.m_storage.m_storage.m_storage[0] = 0;
        hkReflect::Type::getFullName((hkReflect::Type *)pArr[v6], &nameBuf, NULL, NULL);
        hkReflect::Type::getFullName(v11, &s, NULL, NULL);
        v12 = hkStringBuf::compareTo(&nameBuf, &s) < 0;
        s.m_string.m_size = 0;
        if ( s.m_string.m_capacityAndFlags >= 0 )
          hkMemoryAllocator::bufFree2(&hkContainerTempAllocator::s_alloc, s.m_string.m_data, 1, s.m_string.m_capacityAndFlags & 0x3FFFFFFF);
        s.m_string.m_data = NULL;
        s.m_string.m_capacityAndFlags = 0x80000000;
        nameBuf.m_string.m_size = 0;
        if ( nameBuf.m_string.m_capacityAndFlags >= 0 )
          hkMemoryAllocator::bufFree2(&hkContainerTempAllocator::s_alloc, nameBuf.m_string.m_data, 1, nameBuf.m_string.m_capacityAndFlags & 0x3FFFFFFF);
        if ( !v12 )
          break;
        ++v10;
        ++v6;
      }
      while ( 1 )
      {
        v13 = (hkReflect::Type *)pArr[v9];
        nameBuf.m_string.m_data = (char *)&nameBuf.m_string.m_storage;
        nameBuf.m_string.m_capacityAndFlags = -2147483520;
        nameBuf.m_string.m_size = 1;
        nameBuf.m_string.m_storage.m_storage.m_storage[0] = 0;
        s.m_string.m_data = (char *)&s.m_string.m_storage;
        s.m_string.m_capacityAndFlags = -2147483520;
        s.m_string.m_size = 1;
        s.m_string.m_storage.m_storage.m_storage[0] = 0;
        hkReflect::Type::getFullName(v11, &nameBuf, NULL, NULL);
        hkReflect::Type::getFullName(v13, &s, NULL, NULL);
        v14 = hkStringBuf::compareTo(&nameBuf, &s) < 0;
        s.m_string.m_size = 0;
        if ( s.m_string.m_capacityAndFlags >= 0 )
          hkMemoryAllocator::bufFree2(&hkContainerTempAllocator::s_alloc, s.m_string.m_data, 1, s.m_string.m_capacityAndFlags & 0x3FFFFFFF);
        s.m_string.m_data = NULL;
        s.m_string.m_capacityAndFlags = 0x80000000;
        nameBuf.m_string.m_size = 0;
        if ( nameBuf.m_string.m_capacityAndFlags >= 0 )
          hkMemoryAllocator::bufFree2(&hkContainerTempAllocator::s_alloc, nameBuf.m_string.m_data, 1, nameBuf.m_string.m_capacityAndFlags & 0x3FFFFFFF);
        if ( !v14 )
          break;
        --v8;
        --v9;
      }
      if ( v9 < v6 )
        break;
      if ( v9 != v6 )
      {
        v15 = pArr[v9];
        pArr[v9] = pArr[v6];
        pArr[v6] = v15;
      }
      --v8;
      --v9;
      ++v10;
      ++v6;
    }
    while ( v6 <= v9 );
    if ( da < v8 )
      hkAlgorithm::quickSortRecursive<hkReflect::Type const *,HavokPhysics_GlobalTypeCompendium_TypeCompare>(pArr, da, v8, cmpLess);
    h = v18;
    if ( v10 >= v18 )
      break;
    v4 = v10;
  }
}


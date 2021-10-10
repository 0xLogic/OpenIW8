/*
==============
CgWeaponMap::SetWeaponEntryRange
==============
*/

void __fastcall CgWeaponMap::SetWeaponEntryRange(CgWeaponMap *this, const WeaponMapEntry *weaponEntries, const int count)
{
  ?SetWeaponEntryRange@CgWeaponMap@@QEAAXPEBUWeaponMapEntry@@H@Z(this, weaponEntries, count);
}

/*
==============
CgWeaponMap::CgWeaponMap
==============
*/

void __fastcall CgWeaponMap::CgWeaponMap(CgWeaponMap *this, WeaponMapEntry *mapEntries)
{
  ??0CgWeaponMap@@QEAA@PEAUWeaponMapEntry@@@Z(this, mapEntries);
}

/*
==============
CgWeaponMap::ClearWeapon
==============
*/

void __fastcall CgWeaponMap::ClearWeapon(CgWeaponMap *this, BgWeaponHandle *handle)
{
  ?ClearWeapon@CgWeaponMap@@UEAAXPEAVBgWeaponHandle@@@Z(this, handle);
}

/*
==============
CgWeaponMap::Free
==============
*/

void CgWeaponMap::Free(void)
{
  ?Free@CgWeaponMap@@SAXXZ();
}

/*
==============
CgWeaponMap::CopyMap
==============
*/

void __fastcall CgWeaponMap::CopyMap(CgWeaponMap *this, const BgWeaponMap *src)
{
  ?CopyMap@CgWeaponMap@@QEAAXPEBVBgWeaponMap@@@Z(this, src);
}

/*
==============
CgWeaponMap::FixUpWeaponHandle
==============
*/

bool __fastcall CgWeaponMap::FixUpWeaponHandle(CgWeaponMap *this, BgWeaponHandle *handle, const Weapon *expectedWeapon)
{
  return ?FixUpWeaponHandle@CgWeaponMap@@QEAA_NPEAVBgWeaponHandle@@AEBUWeapon@@@Z(this, handle, expectedWeapon);
}

/*
==============
CgWeaponMap::Allocate
==============
*/

void __fastcall CgWeaponMap::Allocate(HunkUser *hunkUser, const int maxLocalClients)
{
  ?Allocate@CgWeaponMap@@SAXPEAUHunkUser@@H@Z(hunkUser, maxLocalClients);
}

/*
==============
CgWeaponMap::SetWeapon
==============
*/

void __fastcall CgWeaponMap::SetWeapon(CgWeaponMap *this, BgWeaponHandle *handle, const Weapon *r_weapon)
{
  ?SetWeapon@CgWeaponMap@@UEAAXPEAVBgWeaponHandle@@AEBUWeapon@@@Z(this, handle, r_weapon);
}

/*
==============
CgWeaponMap::CopyWeapon
==============
*/

void __fastcall CgWeaponMap::CopyWeapon(CgWeaponMap *this, BgWeaponHandle *dest, const BgWeaponHandle *src)
{
  ?CopyWeapon@CgWeaponMap@@UEAAXPEAVBgWeaponHandle@@PEBV2@@Z(this, dest, src);
}

/*
==============
CgWeaponMap::SetWeaponEntry
==============
*/

void __fastcall CgWeaponMap::SetWeaponEntry(CgWeaponMap *this, const WeaponMapEntry *weaponEntry)
{
  ?SetWeaponEntry@CgWeaponMap@@QEAAXPEBUWeaponMapEntry@@@Z(this, weaponEntry);
}

/*
==============
CgWeaponMap::SetWeaponIfExists
==============
*/

bool __fastcall CgWeaponMap::SetWeaponIfExists(CgWeaponMap *this, BgWeaponHandle *handle, const Weapon *r_weapon, bool canCreateWeapon)
{
  return ?SetWeaponIfExists@CgWeaponMap@@QEAA_NPEAVBgWeaponHandle@@AEBUWeapon@@_N@Z(this, handle, r_weapon, canCreateWeapon);
}

/*
==============
CgWeaponMap::CgWeaponMap
==============
*/
void CgWeaponMap::CgWeaponMap(CgWeaponMap *this, WeaponMapEntry *mapEntries)
{
  this->m_entries = NULL;
  this->__vftable = (CgWeaponMap_vtbl *)&CgWeaponMap::`vftable';
  if ( !mapEntries && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.cpp", 12, ASSERT_TYPE_ASSERT, "(mapEntries != nullptr)", (const char *)&queryFormat, "mapEntries != nullptr", -2i64) )
    __debugbreak();
  this->m_entries = mapEntries;
}

/*
==============
CgWeaponMap::Allocate
==============
*/
void CgWeaponMap::Allocate(HunkUser *hunkUser, const int maxLocalClients)
{
  __int64 v2; 
  unsigned __int64 v4; 
  CgWeaponMap *v5; 
  unsigned __int16 v6; 
  unsigned __int64 v7; 
  char *v8; 
  int v9; 
  int v10; 
  unsigned int v11; 
  CgWeaponMap **v12; 
  __int64 v13; 
  bool v14; 
  WeaponMapEntry *v15; 
  __int64 v16; 
  __int64 v17; 

  v2 = maxLocalClients;
  v4 = 16 * maxLocalClients;
  v5 = (CgWeaponMap *)Mem_HunkUser_AllocInternal(hunkUser, v4, 8ui64, "CgWeaponMap::Allocate");
  if ( !BgWeaponMap::ms_runtimeSizeInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_map.h", 228, ASSERT_TYPE_ASSERT, "(ms_runtimeSizeInitialized)", (const char *)&queryFormat, "ms_runtimeSizeInitialized") )
    __debugbreak();
  v6 = BgWeaponMap::ms_runtimeSize;
  v7 = 62 * v2 * BgWeaponMap::ms_runtimeSize;
  v8 = (char *)Mem_HunkUser_AllocInternal(hunkUser, v7, 8ui64, "CgWeaponMap::Allocate");
  memset_0(v5, 0, v4);
  memset_0(v8, 0, v7);
  v9 = 0;
  if ( (int)v2 > 0 )
  {
    v10 = v6;
    v11 = v2 * v6;
    v12 = CgWeaponMap::ms_instance;
    do
    {
      if ( *v12 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.cpp", 37, ASSERT_TYPE_ASSERT, "(ms_instance[weaponMapIndex] == nullptr)", (const char *)&queryFormat, "ms_instance[weaponMapIndex] == nullptr") )
        __debugbreak();
      if ( v9 * v10 >= v11 )
      {
        LODWORD(v17) = v11;
        LODWORD(v16) = v9 * v10;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.cpp", 40, ASSERT_TYPE_ASSERT, "(unsigned)( mapEntriesIndex ) < (unsigned)( mapEntriesCount * maxLocalClients )", "mapEntriesIndex doesn't index mapEntriesCount * maxLocalClients\n\t%i not in [0, %i)", v16, v17) )
          __debugbreak();
      }
      v13 = 62i64 * (unsigned int)(v9 * v10);
      v14 = &v8[v13] == NULL;
      v15 = (WeaponMapEntry *)&v8[v13];
      v5->m_entries = NULL;
      v5->__vftable = (CgWeaponMap_vtbl *)&CgWeaponMap::`vftable';
      if ( v14 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.cpp", 12, ASSERT_TYPE_ASSERT, "(mapEntries != nullptr)", (const char *)&queryFormat, "mapEntries != nullptr") )
        __debugbreak();
      v5->m_entries = v15;
      *v12 = v5;
      ++v9;
      ++v5;
      ++v12;
    }
    while ( v9 < (int)v2 );
  }
  CgWeaponMap::ms_allocatedCount = v2;
}

/*
==============
CgWeaponMap::ClearWeapon
==============
*/
void CgWeaponMap::ClearWeapon(CgWeaponMap *this, BgWeaponHandle *handle)
{
  if ( !handle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.cpp", 160, ASSERT_TYPE_ASSERT, "(handle)", (const char *)&queryFormat, "handle") )
    __debugbreak();
  BgWeaponMap::SetMapIndexForHandle(this, handle, 0);
}

/*
==============
CgWeaponMap::CopyMap
==============
*/
void CgWeaponMap::CopyMap(CgWeaponMap *this, const BgWeaponMap *src)
{
  unsigned __int16 v4; 
  unsigned __int16 v5; 
  __int64 v6; 
  unsigned __int16 v7; 

  if ( !src && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.cpp", 72, ASSERT_TYPE_ASSERT, "(src)", (const char *)&queryFormat, "src") )
    __debugbreak();
  if ( !this->m_entries && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.cpp", 73, ASSERT_TYPE_ASSERT, "(m_entries)", (const char *)&queryFormat, "m_entries") )
    __debugbreak();
  if ( !this->m_entries && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_map.h", 220, ASSERT_TYPE_ASSERT, "(m_entries != nullptr)", (const char *)&queryFormat, "m_entries != nullptr") )
    __debugbreak();
  if ( !BgWeaponMap::ms_runtimeSizeInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_map.h", 228, ASSERT_TYPE_ASSERT, "(ms_runtimeSizeInitialized)", (const char *)&queryFormat, "ms_runtimeSizeInitialized") )
    __debugbreak();
  memset_0(this->m_entries, 0, 62i64 * BgWeaponMap::ms_runtimeSize);
  if ( !BgWeaponMap::ms_runtimeSizeInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_map.h", 228, ASSERT_TYPE_ASSERT, "(ms_runtimeSizeInitialized)", (const char *)&queryFormat, "ms_runtimeSizeInitialized") )
    __debugbreak();
  v4 = BgWeaponMap::ms_runtimeSize;
  v5 = 0;
  if ( BgWeaponMap::ms_runtimeSize )
  {
    v6 = 0i64;
    do
    {
      if ( !src->m_entries && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_map.h", 161, ASSERT_TYPE_ASSERT, "(m_entries != nullptr)", (const char *)&queryFormat, "m_entries != nullptr") )
        __debugbreak();
      v7 = truncate_cast<unsigned short,unsigned int>(v5);
      if ( !BgWeaponMap::ms_runtimeSizeInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_map.h", 228, ASSERT_TYPE_ASSERT, "(ms_runtimeSizeInitialized)", (const char *)&queryFormat, "ms_runtimeSizeInitialized") )
        __debugbreak();
      if ( v7 >= BgWeaponMap::ms_runtimeSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_map.h", 165, ASSERT_TYPE_ASSERT, "(mapEntryIndex < BgWeaponMap::GetRuntimeSize())", "%s\n\tHandle supplied to BgWeaponMap::GetWeapon does not index the map.", "mapEntryIndex < BgWeaponMap::GetRuntimeSize()") )
        __debugbreak();
      if ( src->m_entries[v7].index == v7 )
        this->m_entries[v6] = *BgWeaponMap::GetWeaponEntry((BgWeaponMap *)src, v5);
      ++v5;
      ++v6;
    }
    while ( v5 < v4 );
  }
}

/*
==============
CgWeaponMap::CopyWeapon
==============
*/
void CgWeaponMap::CopyWeapon(CgWeaponMap *this, BgWeaponHandle *dest, const BgWeaponHandle *src)
{
  unsigned __int16 v6; 
  unsigned int v7; 
  unsigned __int16 v8; 

  if ( !dest && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.cpp", 93, ASSERT_TYPE_ASSERT, "(dest)", (const char *)&queryFormat, "dest") )
    __debugbreak();
  if ( !src && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.cpp", 94, ASSERT_TYPE_ASSERT, "(src)", (const char *)&queryFormat, "src") )
    __debugbreak();
  v6 = truncate_cast<unsigned short,unsigned int>(src->m_mapEntryId);
  if ( !this->m_entries && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_map.h", 161, ASSERT_TYPE_ASSERT, "(m_entries != nullptr)", (const char *)&queryFormat, "m_entries != nullptr") )
    __debugbreak();
  v7 = v6;
  v8 = truncate_cast<unsigned short,unsigned int>(v6);
  if ( !BgWeaponMap::ms_runtimeSizeInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_map.h", 228, ASSERT_TYPE_ASSERT, "(ms_runtimeSizeInitialized)", (const char *)&queryFormat, "ms_runtimeSizeInitialized") )
    __debugbreak();
  if ( v8 >= BgWeaponMap::ms_runtimeSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_map.h", 165, ASSERT_TYPE_ASSERT, "(mapEntryIndex < BgWeaponMap::GetRuntimeSize())", "%s\n\tHandle supplied to BgWeaponMap::GetWeapon does not index the map.", "mapEntryIndex < BgWeaponMap::GetRuntimeSize()") )
    __debugbreak();
  if ( this->m_entries[v8].index != v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.cpp", 97, ASSERT_TYPE_ASSERT, "(IsEntryValid( srcMapEntryIndex ))", (const char *)&queryFormat, "IsEntryValid( srcMapEntryIndex )") )
    __debugbreak();
  BgWeaponMap::SetMapIndexForHandle(this, dest, v7);
}

/*
==============
CgWeaponMap::FixUpWeaponHandle
==============
*/
char CgWeaponMap::FixUpWeaponHandle(CgWeaponMap *this, BgWeaponHandle *handle, const Weapon *expectedWeapon)
{
  const WeaponMapEntry *WeaponEntry; 

  if ( !handle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.cpp", 195, ASSERT_TYPE_ASSERT, "(handle)", (const char *)&queryFormat, "handle") )
    __debugbreak();
  if ( BgWeaponMap::IsEntryValid(this, handle->m_mapEntryId) )
  {
    WeaponEntry = BgWeaponMap::GetWeaponEntry(this, handle->m_mapEntryId);
    if ( !memcmp_0(expectedWeapon, &WeaponEntry->weapon, 0x3Cui64) )
      return 1;
  }
  if ( CgWeaponMap::SetWeaponIfExists(this, handle, expectedWeapon, 0) )
    return 1;
  BgWeaponMap::SetMapIndexForHandle(this, handle, 0);
  return 0;
}

/*
==============
CgWeaponMap::Free
==============
*/
void CgWeaponMap::Free(void)
{
  int v0; 
  int v1; 
  void **v2; 

  v0 = CgWeaponMap::ms_allocatedCount;
  v1 = 0;
  if ( CgWeaponMap::ms_allocatedCount > 0 )
  {
    v2 = (void **)CgWeaponMap::ms_instance;
    do
    {
      if ( *v2 )
      {
        *(_QWORD *)*v2 = &BgWeaponMap::`vftable';
        DebugWipe(*v2, 0x10ui64);
        v0 = CgWeaponMap::ms_allocatedCount;
        *v2 = NULL;
      }
      ++v1;
      ++v2;
    }
    while ( v1 < v0 );
  }
  CgWeaponMap::ms_allocatedCount = 0;
}

/*
==============
CgWeaponMap::SetWeapon
==============
*/
void CgWeaponMap::SetWeapon(CgWeaponMap *this, BgWeaponHandle *handle, const Weapon *r_weapon)
{
  CgWeaponMap::SetWeaponIfExists(this, handle, r_weapon, 0);
}

/*
==============
CgWeaponMap::SetWeaponEntry
==============
*/
void CgWeaponMap::SetWeaponEntry(CgWeaponMap *this, const WeaponMapEntry *weaponEntry)
{
  unsigned __int16 index; 
  WeaponMapEntry *v5; 
  __int64 v6; 

  if ( !weaponEntry && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.cpp", 181, ASSERT_TYPE_ASSERT, "(weaponEntry)", (const char *)&queryFormat, "weaponEntry") )
    __debugbreak();
  if ( !this->m_entries && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.cpp", 182, ASSERT_TYPE_ASSERT, "(m_entries != nullptr)", (const char *)&queryFormat, "m_entries != nullptr") )
    __debugbreak();
  index = weaponEntry->index;
  if ( !BgWeaponMap::ms_runtimeSizeInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_map.h", 228, ASSERT_TYPE_ASSERT, "(ms_runtimeSizeInitialized)", (const char *)&queryFormat, "ms_runtimeSizeInitialized") )
    __debugbreak();
  if ( index >= BgWeaponMap::ms_runtimeSize )
  {
    if ( !BgWeaponMap::ms_runtimeSizeInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_map.h", 228, ASSERT_TYPE_ASSERT, "(ms_runtimeSizeInitialized)", (const char *)&queryFormat, "ms_runtimeSizeInitialized") )
      __debugbreak();
    LODWORD(v6) = index;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.cpp", 186, ASSERT_TYPE_ASSERT, "(unsigned)( weaponMapIndex ) < (unsigned)( BgWeaponMap::GetRuntimeSize() )", "weaponMapIndex doesn't index BgWeaponMap::GetRuntimeSize()\n\t%i not in [0, %i)", v6, BgWeaponMap::ms_runtimeSize) )
      __debugbreak();
  }
  if ( index && !weaponEntry->weapon.weaponIdx && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.cpp", 187, ASSERT_TYPE_ASSERT, "(weaponMapIndex == 0 || !BG_IsNullWeapon( weaponEntry->weapon ))", "%s\n\tTrying to add an invalid weapon to the client's weapon map.", "weaponMapIndex == 0 || !BG_IsNullWeapon( weaponEntry->weapon )") )
    __debugbreak();
  v5 = &this->m_entries[index];
  *(__m256i *)&v5->index = *(__m256i *)&weaponEntry->index;
  *(_OWORD *)&v5->weapon.attachmentVariationIndices[3] = *(_OWORD *)&weaponEntry->weapon.attachmentVariationIndices[3];
  *(double *)&v5->weapon.attachmentVariationIndices[19] = *(double *)&weaponEntry->weapon.attachmentVariationIndices[19];
  *(_DWORD *)&v5->weapon.attachmentVariationIndices[27] = *(_DWORD *)&weaponEntry->weapon.attachmentVariationIndices[27];
  *(_WORD *)&v5->weapon.scopeVariation = *(_WORD *)&weaponEntry->weapon.scopeVariation;
}

/*
==============
CgWeaponMap::SetWeaponEntryRange
==============
*/
void CgWeaponMap::SetWeaponEntryRange(CgWeaponMap *this, const WeaponMapEntry *weaponEntries, const int count)
{
  __int64 v3; 
  const WeaponMapEntry *v4; 
  __int64 v6; 
  unsigned __int16 index; 
  WeaponMapEntry *v8; 
  __int16 v9; 
  __int64 v10; 
  __int64 v11; 

  v3 = count;
  v4 = weaponEntries;
  if ( !weaponEntries && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.cpp", 171, ASSERT_TYPE_ASSERT, "(weaponEntries)", (const char *)&queryFormat, "weaponEntries") )
    __debugbreak();
  if ( (int)v3 < 0 )
    goto LABEL_37;
  if ( !BgWeaponMap::ms_runtimeSizeInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_map.h", 228, ASSERT_TYPE_ASSERT, "(ms_runtimeSizeInitialized)", (const char *)&queryFormat, "ms_runtimeSizeInitialized") )
    __debugbreak();
  if ( (int)v3 > BgWeaponMap::ms_runtimeSize )
  {
LABEL_37:
    if ( !BgWeaponMap::ms_runtimeSizeInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_map.h", 228, ASSERT_TYPE_ASSERT, "(ms_runtimeSizeInitialized)", (const char *)&queryFormat, "ms_runtimeSizeInitialized") )
      __debugbreak();
    LODWORD(v10) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.cpp", 172, ASSERT_TYPE_ASSERT, "( 0 ) <= ( count ) && ( count ) <= ( BgWeaponMap::GetRuntimeSize() )", "count not in [0, BgWeaponMap::GetRuntimeSize()]\n\t%i not in [%i, %i]", v10, 0i64, BgWeaponMap::ms_runtimeSize) )
      __debugbreak();
  }
  v6 = v3;
  if ( (int)v3 > 0 )
  {
    do
    {
      if ( !v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.cpp", 181, ASSERT_TYPE_ASSERT, "(weaponEntry)", (const char *)&queryFormat, "weaponEntry") )
        __debugbreak();
      if ( !this->m_entries && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.cpp", 182, ASSERT_TYPE_ASSERT, "(m_entries != nullptr)", (const char *)&queryFormat, "m_entries != nullptr") )
        __debugbreak();
      index = v4->index;
      if ( !BgWeaponMap::ms_runtimeSizeInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_map.h", 228, ASSERT_TYPE_ASSERT, "(ms_runtimeSizeInitialized)", (const char *)&queryFormat, "ms_runtimeSizeInitialized") )
        __debugbreak();
      if ( index >= BgWeaponMap::ms_runtimeSize )
      {
        if ( !BgWeaponMap::ms_runtimeSizeInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_map.h", 228, ASSERT_TYPE_ASSERT, "(ms_runtimeSizeInitialized)", (const char *)&queryFormat, "ms_runtimeSizeInitialized") )
          __debugbreak();
        LODWORD(v11) = BgWeaponMap::ms_runtimeSize;
        LODWORD(v10) = index;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.cpp", 186, ASSERT_TYPE_ASSERT, "(unsigned)( weaponMapIndex ) < (unsigned)( BgWeaponMap::GetRuntimeSize() )", "weaponMapIndex doesn't index BgWeaponMap::GetRuntimeSize()\n\t%i not in [0, %i)", v10, v11) )
          __debugbreak();
      }
      if ( index && !v4->weapon.weaponIdx && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.cpp", 187, ASSERT_TYPE_ASSERT, "(weaponMapIndex == 0 || !BG_IsNullWeapon( weaponEntry->weapon ))", "%s\n\tTrying to add an invalid weapon to the client's weapon map.", "weaponMapIndex == 0 || !BG_IsNullWeapon( weaponEntry->weapon )") )
        __debugbreak();
      v8 = &this->m_entries[index];
      *(__m256i *)&v8->index = *(__m256i *)&v4->index;
      *(_OWORD *)&v8->weapon.attachmentVariationIndices[3] = *(_OWORD *)&v4->weapon.attachmentVariationIndices[3];
      *(double *)&v8->weapon.attachmentVariationIndices[19] = *(double *)&v4->weapon.attachmentVariationIndices[19];
      *(_DWORD *)&v8->weapon.attachmentVariationIndices[27] = *(_DWORD *)&v4->weapon.attachmentVariationIndices[27];
      v9 = *(_WORD *)&v4->weapon.scopeVariation;
      ++v4;
      *(_WORD *)&v8->weapon.scopeVariation = v9;
      --v6;
    }
    while ( v6 );
  }
}

/*
==============
CgWeaponMap::SetWeaponIfExists
==============
*/
char CgWeaponMap::SetWeaponIfExists(CgWeaponMap *this, BgWeaponHandle *handle, const Weapon *r_weapon, bool canCreateWeapon)
{
  unsigned __int16 v4; 
  BgWeaponHandle *v6; 
  unsigned __int16 v8; 
  unsigned __int16 v9; 
  WeaponMapEntry *m_entries; 
  unsigned __int16 v11; 
  unsigned __int16 v12; 
  __int64 v13; 
  Weapon *p_weapon; 

  v4 = 0;
  v6 = handle;
  if ( !handle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.cpp", 118, ASSERT_TYPE_ASSERT, "(handle)", (const char *)&queryFormat, "handle") )
    __debugbreak();
  if ( !BG_ValidateWeapon(r_weapon) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.cpp", 119, ASSERT_TYPE_ASSERT, "(BG_ValidateWeapon( r_weapon ))", (const char *)&queryFormat, "BG_ValidateWeapon( r_weapon )") )
    __debugbreak();
  if ( !this->m_entries && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.cpp", 120, ASSERT_TYPE_ASSERT, "(m_entries != nullptr)", (const char *)&queryFormat, "m_entries != nullptr") )
    __debugbreak();
  if ( !BgWeaponMap::ms_runtimeSizeInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_map.h", 228, ASSERT_TYPE_ASSERT, "(ms_runtimeSizeInitialized)", (const char *)&queryFormat, "ms_runtimeSizeInitialized") )
    __debugbreak();
  v8 = BgWeaponMap::ms_runtimeSize;
  v9 = 0;
  if ( BgWeaponMap::ms_runtimeSize )
  {
    m_entries = this->m_entries;
    while ( 1 )
    {
      if ( !m_entries && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_map.h", 161, ASSERT_TYPE_ASSERT, "(m_entries != nullptr)", (const char *)&queryFormat, "m_entries != nullptr") )
        __debugbreak();
      v11 = truncate_cast<unsigned short,unsigned int>(v9);
      if ( !BgWeaponMap::ms_runtimeSizeInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_map.h", 228, ASSERT_TYPE_ASSERT, "(ms_runtimeSizeInitialized)", (const char *)&queryFormat, "ms_runtimeSizeInitialized") )
        __debugbreak();
      if ( v11 >= BgWeaponMap::ms_runtimeSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_map.h", 165, ASSERT_TYPE_ASSERT, "(mapEntryIndex < BgWeaponMap::GetRuntimeSize())", "%s\n\tHandle supplied to BgWeaponMap::GetWeapon does not index the map.", "mapEntryIndex < BgWeaponMap::GetRuntimeSize()") )
        __debugbreak();
      m_entries = this->m_entries;
      if ( m_entries[v11].index == v11 )
      {
        if ( !memcmp_0(r_weapon, &m_entries[v9].weapon, 0x3Cui64) )
        {
          BgWeaponMap::SetMapIndexForHandle(this, handle, v9);
          return 1;
        }
      }
      else
      {
        v12 = v9;
        if ( v4 )
          v12 = v4;
        v4 = v12;
      }
      if ( ++v9 >= v8 )
      {
        v6 = handle;
        break;
      }
    }
  }
  if ( canCreateWeapon )
  {
    if ( v4 )
    {
      v13 = v4;
      p_weapon = &this->m_entries[v13].weapon;
      *(__m256i *)&p_weapon->weaponIdx = *(__m256i *)&r_weapon->weaponIdx;
      *(_OWORD *)&p_weapon->attachmentVariationIndices[5] = *(_OWORD *)&r_weapon->attachmentVariationIndices[5];
      *(double *)&p_weapon->attachmentVariationIndices[21] = *(double *)&r_weapon->attachmentVariationIndices[21];
      *(_DWORD *)&p_weapon->weaponCamo = *(_DWORD *)&r_weapon->weaponCamo;
      this->m_entries[v13].index = v4;
      BgWeaponMap::SetMapIndexForHandle(this, v6, v4);
    }
  }
  return 0;
}


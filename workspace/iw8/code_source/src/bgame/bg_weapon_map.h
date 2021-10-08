/*
==============
BgWeaponMap::InitRuntimeSize
==============
*/

void __fastcall BgWeaponMap::InitRuntimeSize(const unsigned int clientCount, const char *mapname, const unsigned __int16 largeDynamicMaxCount)
{
  ?InitRuntimeSize@BgWeaponMap@@SAXIPEBDG@Z(clientCount, mapname, largeDynamicMaxCount);
}

/*
==============
BgWeaponMap::SetMapIndexForHandle
==============
*/

void __fastcall BgWeaponMap::SetMapIndexForHandle(BgWeaponMap *this, BgWeaponHandle *handle, const unsigned int mapEntryId)
{
  ?SetMapIndexForHandle@BgWeaponMap@@IEBAXPEAVBgWeaponHandle@@I@Z(this, handle, mapEntryId);
}

/*
==============
BgWeaponMap::~BgWeaponMap
==============
*/

void __fastcall BgWeaponMap::~BgWeaponMap(BgWeaponMap *this)
{
  ??1BgWeaponMap@@UEAA@XZ(this);
}

/*
==============
BgWeaponMap::ValidateRuntimeSize
==============
*/

void __fastcall BgWeaponMap::ValidateRuntimeSize(const unsigned int clientCount, const char *mapname, const unsigned __int16 largeDynamicMaxCount)
{
  ?ValidateRuntimeSize@BgWeaponMap@@SAXIPEBDG@Z(clientCount, mapname, largeDynamicMaxCount);
}

/*
==============
BgWeaponMap::GetWeapon
==============
*/

const Weapon *__fastcall BgWeaponMap::GetWeapon(BgWeaponMap *this, BgWeaponHandle handle)
{
  return ?GetWeapon@BgWeaponMap@@QEBAAEBUWeapon@@VBgWeaponHandle@@@Z(this, handle);
}

/*
==============
BgWeaponMap::IsEntryValid
==============
*/

bool __fastcall BgWeaponMap::IsEntryValid(BgWeaponMap *this, const unsigned int mapEntryId)
{
  return ?IsEntryValid@BgWeaponMap@@QEBA_NI@Z(this, mapEntryId);
}

/*
==============
BgWeaponMap::GetRuntimeMapIndexBits
==============
*/

unsigned __int16 __fastcall BgWeaponMap::GetRuntimeMapIndexBits()
{
  return ?GetRuntimeMapIndexBits@BgWeaponMap@@SAGXZ();
}

/*
==============
BgWeaponMap::ClearEntries
==============
*/

void __fastcall BgWeaponMap::ClearEntries(BgWeaponMap *this)
{
  ?ClearEntries@BgWeaponMap@@QEAAXXZ(this);
}

/*
==============
BgWeaponMap::GetWeaponEntry
==============
*/

const WeaponMapEntry *__fastcall BgWeaponMap::GetWeaponEntry(BgWeaponMap *this, const unsigned int mapEntryId)
{
  return ?GetWeaponEntry@BgWeaponMap@@QEBAPEBUWeaponMapEntry@@I@Z(this, mapEntryId);
}

/*
==============
BgWeaponMap::GetRuntimeSize
==============
*/

unsigned __int16 __fastcall BgWeaponMap::GetRuntimeSize()
{
  return ?GetRuntimeSize@BgWeaponMap@@SAGXZ();
}

/*
==============
BgWeaponMap::IsEmpty
==============
*/

bool __fastcall BgWeaponMap::IsEmpty(BgWeaponMap *this)
{
  return ?IsEmpty@BgWeaponMap@@QEBA_NXZ(this);
}

/*
==============
BgWeaponMap::GetWeapon
==============
*/
Weapon *BgWeaponMap::GetWeapon(BgWeaponMap *this, BgWeaponHandle handle)
{
  unsigned __int16 v4; 
  unsigned __int16 v5; 
  __int64 v6; 

  if ( !this->m_entries && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_map.h", 161, ASSERT_TYPE_ASSERT, "(m_entries != nullptr)", (const char *)&queryFormat, "m_entries != nullptr") )
    __debugbreak();
  v4 = truncate_cast<unsigned short,unsigned int>(handle.m_mapEntryId);
  if ( !BgWeaponMap::ms_runtimeSizeInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_map.h", 228, ASSERT_TYPE_ASSERT, "(ms_runtimeSizeInitialized)", (const char *)&queryFormat, "ms_runtimeSizeInitialized") )
    __debugbreak();
  if ( v4 >= BgWeaponMap::ms_runtimeSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_map.h", 165, ASSERT_TYPE_ASSERT, "(mapEntryIndex < BgWeaponMap::GetRuntimeSize())", "%s\n\tHandle supplied to BgWeaponMap::GetWeapon does not index the map.", "mapEntryIndex < BgWeaponMap::GetRuntimeSize()") )
    __debugbreak();
  if ( this->m_entries[v4].index != v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_map.h", 173, ASSERT_TYPE_ASSERT, "(IsEntryValid( mapEntryId ))", "%s\n\tTrying to retrieve an invalid weapon entry from the weapon map.", "IsEntryValid( mapEntryId )") )
    __debugbreak();
  v5 = truncate_cast<unsigned short,unsigned int>(handle.m_mapEntryId);
  if ( !BgWeaponMap::ms_runtimeSizeInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_map.h", 228, ASSERT_TYPE_ASSERT, "(ms_runtimeSizeInitialized)", (const char *)&queryFormat, "ms_runtimeSizeInitialized") )
    __debugbreak();
  if ( v5 >= BgWeaponMap::ms_runtimeSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_map.h", 177, ASSERT_TYPE_ASSERT, "(mapEntryIndex < BgWeaponMap::GetRuntimeSize())", "%s\n\tHandle supplied to BgWeaponMap::GetWeapon does not index the map.", "mapEntryIndex < BgWeaponMap::GetRuntimeSize()") )
    __debugbreak();
  v6 = v5;
  if ( this->m_entries[v6].index != v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_map.h", 178, ASSERT_TYPE_ASSERT, "(m_entries[mapEntryIndex].index == mapEntryIndex)", "%s\n\tHandle points to invalid entry in map.", "m_entries[mapEntryIndex].index == mapEntryIndex") )
    __debugbreak();
  return &this->m_entries[v6].weapon;
}

/*
==============
BgWeaponMap::GetWeaponEntry
==============
*/
WeaponMapEntry *BgWeaponMap::GetWeaponEntry(BgWeaponMap *this, const unsigned int mapEntryId)
{
  unsigned __int16 v4; 
  unsigned __int16 v5; 
  __int64 v6; 

  if ( !this->m_entries && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_map.h", 161, ASSERT_TYPE_ASSERT, "(m_entries != nullptr)", (const char *)&queryFormat, "m_entries != nullptr") )
    __debugbreak();
  v4 = truncate_cast<unsigned short,unsigned int>(mapEntryId);
  if ( !BgWeaponMap::ms_runtimeSizeInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_map.h", 228, ASSERT_TYPE_ASSERT, "(ms_runtimeSizeInitialized)", (const char *)&queryFormat, "ms_runtimeSizeInitialized") )
    __debugbreak();
  if ( v4 >= BgWeaponMap::ms_runtimeSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_map.h", 165, ASSERT_TYPE_ASSERT, "(mapEntryIndex < BgWeaponMap::GetRuntimeSize())", "%s\n\tHandle supplied to BgWeaponMap::GetWeapon does not index the map.", "mapEntryIndex < BgWeaponMap::GetRuntimeSize()") )
    __debugbreak();
  if ( this->m_entries[v4].index != v4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_map.h", 173, ASSERT_TYPE_ASSERT, "(IsEntryValid( mapEntryId ))", "%s\n\tTrying to retrieve an invalid weapon entry from the weapon map.", "IsEntryValid( mapEntryId )") )
    __debugbreak();
  v5 = truncate_cast<unsigned short,unsigned int>(mapEntryId);
  if ( !BgWeaponMap::ms_runtimeSizeInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_map.h", 228, ASSERT_TYPE_ASSERT, "(ms_runtimeSizeInitialized)", (const char *)&queryFormat, "ms_runtimeSizeInitialized") )
    __debugbreak();
  if ( v5 >= BgWeaponMap::ms_runtimeSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_map.h", 177, ASSERT_TYPE_ASSERT, "(mapEntryIndex < BgWeaponMap::GetRuntimeSize())", "%s\n\tHandle supplied to BgWeaponMap::GetWeapon does not index the map.", "mapEntryIndex < BgWeaponMap::GetRuntimeSize()") )
    __debugbreak();
  v6 = v5;
  if ( this->m_entries[v6].index != v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_map.h", 178, ASSERT_TYPE_ASSERT, "(m_entries[mapEntryIndex].index == mapEntryIndex)", "%s\n\tHandle points to invalid entry in map.", "m_entries[mapEntryIndex].index == mapEntryIndex") )
    __debugbreak();
  return &this->m_entries[v6];
}

/*
==============
BgWeaponMap::~BgWeaponMap
==============
*/
void BgWeaponMap::~BgWeaponMap(BgWeaponMap *this)
{
  this->__vftable = (BgWeaponMap_vtbl *)&BgWeaponMap::`vftable';
}

/*
==============
BgWeaponMap::IsEntryValid
==============
*/
bool BgWeaponMap::IsEntryValid(BgWeaponMap *this, const unsigned int mapEntryId)
{
  unsigned __int16 v4; 

  if ( !this->m_entries && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_map.h", 161, ASSERT_TYPE_ASSERT, "(m_entries != nullptr)", (const char *)&queryFormat, "m_entries != nullptr") )
    __debugbreak();
  v4 = truncate_cast<unsigned short,unsigned int>(mapEntryId);
  if ( !BgWeaponMap::ms_runtimeSizeInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_map.h", 228, ASSERT_TYPE_ASSERT, "(ms_runtimeSizeInitialized)", (const char *)&queryFormat, "ms_runtimeSizeInitialized") )
    __debugbreak();
  if ( v4 >= BgWeaponMap::ms_runtimeSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_map.h", 165, ASSERT_TYPE_ASSERT, "(mapEntryIndex < BgWeaponMap::GetRuntimeSize())", "%s\n\tHandle supplied to BgWeaponMap::GetWeapon does not index the map.", "mapEntryIndex < BgWeaponMap::GetRuntimeSize()") )
    __debugbreak();
  return this->m_entries[v4].index == v4;
}

/*
==============
BgWeaponMap::SetMapIndexForHandle
==============
*/
void BgWeaponMap::SetMapIndexForHandle(BgWeaponMap *this, BgWeaponHandle *handle, const unsigned int mapEntryId)
{
  unsigned __int16 v6; 

  if ( !handle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_map.h", 211, ASSERT_TYPE_ASSERT, "(handle)", (const char *)&queryFormat, "handle") )
    __debugbreak();
  if ( !this->m_entries && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_map.h", 161, ASSERT_TYPE_ASSERT, "(m_entries != nullptr)", (const char *)&queryFormat, "m_entries != nullptr") )
    __debugbreak();
  v6 = truncate_cast<unsigned short,unsigned int>(mapEntryId);
  if ( !BgWeaponMap::ms_runtimeSizeInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_map.h", 228, ASSERT_TYPE_ASSERT, "(ms_runtimeSizeInitialized)", (const char *)&queryFormat, "ms_runtimeSizeInitialized") )
    __debugbreak();
  if ( v6 >= BgWeaponMap::ms_runtimeSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_map.h", 165, ASSERT_TYPE_ASSERT, "(mapEntryIndex < BgWeaponMap::GetRuntimeSize())", "%s\n\tHandle supplied to BgWeaponMap::GetWeapon does not index the map.", "mapEntryIndex < BgWeaponMap::GetRuntimeSize()") )
    __debugbreak();
  if ( this->m_entries[v6].index != v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_map.h", 212, ASSERT_TYPE_ASSERT, "(IsEntryValid( mapEntryId ))", "%s\n\tTrying to set a handle to an invalid weapon entry from the weapon map.", "IsEntryValid( mapEntryId )") )
    __debugbreak();
  handle->m_mapEntryId = mapEntryId;
}

/*
==============
BgWeaponMap::ClearEntries
==============
*/
void BgWeaponMap::ClearEntries(BgWeaponMap *this)
{
  if ( !this->m_entries && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_map.h", 220, ASSERT_TYPE_ASSERT, "(m_entries != nullptr)", (const char *)&queryFormat, "m_entries != nullptr") )
    __debugbreak();
  if ( !BgWeaponMap::ms_runtimeSizeInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_map.h", 228, ASSERT_TYPE_ASSERT, "(ms_runtimeSizeInitialized)", (const char *)&queryFormat, "ms_runtimeSizeInitialized") )
    __debugbreak();
  memset_0(this->m_entries, 0, 62i64 * BgWeaponMap::ms_runtimeSize);
}

/*
==============
BgWeaponMap::GetRuntimeMapIndexBits
==============
*/
__int64 BgWeaponMap::GetRuntimeMapIndexBits()
{
  if ( !BgWeaponMap::ms_runtimeSizeInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_map.h", 235, ASSERT_TYPE_ASSERT, "(ms_runtimeSizeInitialized)", (const char *)&queryFormat, "ms_runtimeSizeInitialized") )
    __debugbreak();
  return BgWeaponMap::ms_runtimeIndexBits;
}

/*
==============
BgWeaponMap::GetRuntimeSize
==============
*/
__int64 BgWeaponMap::GetRuntimeSize()
{
  if ( !BgWeaponMap::ms_runtimeSizeInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_map.h", 228, ASSERT_TYPE_ASSERT, "(ms_runtimeSizeInitialized)", (const char *)&queryFormat, "ms_runtimeSizeInitialized") )
    __debugbreak();
  return BgWeaponMap::ms_runtimeSize;
}

/*
==============
BgWeaponMap::InitRuntimeSize
==============
*/
void BgWeaponMap::InitRuntimeSize(const unsigned int clientCount, const char *mapname, const unsigned __int16 largeDynamicMaxCount)
{
  unsigned __int16 v3; 
  char v4; 
  int v5; 
  int v6; 
  __int64 v7; 
  __int64 v8; 

  v3 = BgWeaponMap::ComputeRuntimeSize(clientCount, mapname, largeDynamicMaxCount, &BgWeaponMap::ms_runtimeIndexBits);
  v4 = BgWeaponMap::ms_runtimeIndexBits;
  BgWeaponMap::ms_runtimeSize = v3;
  v5 = 1 << BgWeaponMap::ms_runtimeIndexBits;
  if ( 1 << BgWeaponMap::ms_runtimeIndexBits < 0 || (unsigned int)v5 > 0xFFFF )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,int>(int)", "unsigned", (unsigned __int16)v5, "signed", v5) )
      __debugbreak();
    v3 = BgWeaponMap::ms_runtimeSize;
    v4 = BgWeaponMap::ms_runtimeIndexBits;
  }
  if ( v3 < (unsigned __int16)v5 )
  {
    BgWeaponMap::ms_runtimeSizeInitialized = 1;
  }
  else
  {
    v6 = 1 << v4;
    if ( 1 << v4 < 0 || (unsigned int)v6 > 0xFFFF )
    {
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,int>(int)", "unsigned", (unsigned __int16)v6, "signed", v6) )
        __debugbreak();
      v3 = BgWeaponMap::ms_runtimeSize;
    }
    LODWORD(v8) = (unsigned __int16)v6;
    LODWORD(v7) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_map.h", 243, ASSERT_TYPE_ASSERT, "( ms_runtimeSize ) < ( truncate_cast<ushort>(1 << ms_runtimeIndexBits) )", "%s < %s\n\t%i, %i", "ms_runtimeSize", "truncate_cast<ushort>(1 << ms_runtimeIndexBits)", v7, v8) )
      __debugbreak();
    BgWeaponMap::ms_runtimeSizeInitialized = 1;
  }
}

/*
==============
BgWeaponMap::ValidateRuntimeSize
==============
*/
void BgWeaponMap::ValidateRuntimeSize(const unsigned int clientCount, const char *mapname, const unsigned __int16 largeDynamicMaxCount)
{
  __int64 v6; 
  int v7; 
  __int64 v8; 
  int v9; 
  unsigned __int16 outIndexBits; 

  if ( !BgWeaponMap::ms_runtimeSizeInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_map.h", 254, ASSERT_TYPE_ASSERT, "(ms_runtimeSizeInitialized)", (const char *)&queryFormat, "ms_runtimeSizeInitialized") )
    __debugbreak();
  if ( BgWeaponMap::ms_runtimeSize != BgWeaponMap::ComputeRuntimeSize(clientCount, mapname, largeDynamicMaxCount, &outIndexBits) )
  {
    v9 = BgWeaponMap::ComputeRuntimeSize(clientCount, mapname, largeDynamicMaxCount, &outIndexBits);
    v7 = BgWeaponMap::ms_runtimeSize;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_map.h", 255, ASSERT_TYPE_ASSERT, "( ms_runtimeSize ) == ( ComputeRuntimeSize( clientCount, mapname, largeDynamicMaxCount, &mapIndexBits ) )", "%s == %s\n\t%i, %i", "ms_runtimeSize", "ComputeRuntimeSize( clientCount, mapname, largeDynamicMaxCount, &mapIndexBits )", v7, v9) )
      __debugbreak();
  }
  if ( BgWeaponMap::ms_runtimeIndexBits != outIndexBits )
  {
    LODWORD(v8) = outIndexBits;
    LODWORD(v6) = BgWeaponMap::ms_runtimeIndexBits;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_map.h", 256, ASSERT_TYPE_ASSERT, "( ms_runtimeIndexBits ) == ( mapIndexBits )", "%s == %s\n\t%i, %i", "ms_runtimeIndexBits", "mapIndexBits", v6, v8) )
      __debugbreak();
  }
}

/*
==============
BgWeaponMap::IsEmpty
==============
*/
char BgWeaponMap::IsEmpty(BgWeaponMap *this)
{
  unsigned __int16 v2; 
  unsigned __int16 v3; 
  WeaponMapEntry *m_entries; 
  unsigned __int16 v5; 

  if ( !this->m_entries && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_map.h", 137, ASSERT_TYPE_ASSERT, "(m_entries != nullptr)", (const char *)&queryFormat, "m_entries != nullptr") )
    __debugbreak();
  if ( this->m_entries->index && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_map.h", 138, ASSERT_TYPE_ASSERT, "(m_entries[0].index == 0)", "%s\n\tChecking to see if the map is empty but the null weapon entry is not valid", "m_entries[0].index == 0") )
    __debugbreak();
  if ( this->m_entries->weapon.weaponIdx && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_map.h", 139, ASSERT_TYPE_ASSERT, "(m_entries[0].weapon.weaponIdx == 0)", "%s\n\tChecking to see if the map is empty but the null weapon entry is not null", "m_entries[0].weapon.weaponIdx == WP_NONE") )
    __debugbreak();
  if ( !BgWeaponMap::ms_runtimeSizeInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_map.h", 228, ASSERT_TYPE_ASSERT, "(ms_runtimeSizeInitialized)", (const char *)&queryFormat, "ms_runtimeSizeInitialized") )
    __debugbreak();
  v2 = BgWeaponMap::ms_runtimeSize;
  v3 = 1;
  if ( BgWeaponMap::ms_runtimeSize <= 1u )
    return 1;
  m_entries = this->m_entries;
  while ( 1 )
  {
    if ( !m_entries && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_map.h", 161, ASSERT_TYPE_ASSERT, "(m_entries != nullptr)", (const char *)&queryFormat, "m_entries != nullptr") )
      __debugbreak();
    v5 = truncate_cast<unsigned short,unsigned int>(v3);
    if ( !BgWeaponMap::ms_runtimeSizeInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_map.h", 228, ASSERT_TYPE_ASSERT, "(ms_runtimeSizeInitialized)", (const char *)&queryFormat, "ms_runtimeSizeInitialized") )
      __debugbreak();
    if ( v5 >= BgWeaponMap::ms_runtimeSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_map.h", 165, ASSERT_TYPE_ASSERT, "(mapEntryIndex < BgWeaponMap::GetRuntimeSize())", "%s\n\tHandle supplied to BgWeaponMap::GetWeapon does not index the map.", "mapEntryIndex < BgWeaponMap::GetRuntimeSize()") )
      __debugbreak();
    m_entries = this->m_entries;
    if ( m_entries[v5].index == v5 )
      break;
    if ( ++v3 >= v2 )
      return 1;
  }
  return 0;
}


/*
==============
GSnapshotWeaponMap::GSnapshotWeaponMap
==============
*/

void __fastcall GSnapshotWeaponMap::GSnapshotWeaponMap(GSnapshotWeaponMap *this, const GSnapshotWeaponMap *weaponMapCopy)
{
  ??0GSnapshotWeaponMap@@QEAA@AEBV0@@Z(this, weaponMapCopy);
}

/*
==============
GSnapshotWeaponMap::SetWeapon
==============
*/

void __fastcall GSnapshotWeaponMap::SetWeapon(GSnapshotWeaponMap *this, BgWeaponHandle *handle, const Weapon *r_weapon)
{
  ?SetWeapon@GSnapshotWeaponMap@@UEAAXPEAVBgWeaponHandle@@AEBUWeapon@@@Z(this, handle, r_weapon);
}

/*
==============
GSnapshotWeaponMap::CopyFromMap
==============
*/

void __fastcall GSnapshotWeaponMap::CopyFromMap(GSnapshotWeaponMap *this, const BgWeaponMap *src)
{
  ?CopyFromMap@GSnapshotWeaponMap@@QEAAXPEBVBgWeaponMap@@@Z(this, src);
}

/*
==============
GSnapshotWeaponMap::SaveWeaponMap
==============
*/

void __fastcall GSnapshotWeaponMap::SaveWeaponMap(GSnapshotWeaponMap *this, MemoryFile *memFile)
{
  ?SaveWeaponMap@GSnapshotWeaponMap@@QEAAXPEAUMemoryFile@@@Z(this, memFile);
}

/*
==============
GSnapshotWeaponMap::ClearWeapon
==============
*/

void __fastcall GSnapshotWeaponMap::ClearWeapon(GSnapshotWeaponMap *this, BgWeaponHandle *handle)
{
  ?ClearWeapon@GSnapshotWeaponMap@@UEAAXPEAVBgWeaponHandle@@@Z(this, handle);
}

/*
==============
GSnapshotWeaponMap::CopyWeapon
==============
*/

void __fastcall GSnapshotWeaponMap::CopyWeapon(GSnapshotWeaponMap *this, BgWeaponHandle *dest, const BgWeaponHandle *src)
{
  ?CopyWeapon@GSnapshotWeaponMap@@UEAAXPEAVBgWeaponHandle@@PEBV2@@Z(this, dest, src);
}

/*
==============
GSnapshotWeaponMap::~GSnapshotWeaponMap
==============
*/

void __fastcall GSnapshotWeaponMap::~GSnapshotWeaponMap(GSnapshotWeaponMap *this)
{
  ??1GSnapshotWeaponMap@@UEAA@XZ(this);
}

/*
==============
GSnapshotWeaponMap::GSnapshotWeaponMap
==============
*/

void __fastcall GSnapshotWeaponMap::GSnapshotWeaponMap(GSnapshotWeaponMap *this, WeaponMapEntry *weaponMapEntries)
{
  ??0GSnapshotWeaponMap@@QEAA@PEAUWeaponMapEntry@@@Z(this, weaponMapEntries);
}

/*
==============
GSnapshotWeaponMap::GSnapshotWeaponMap
==============
*/

void __fastcall GSnapshotWeaponMap::GSnapshotWeaponMap(GSnapshotWeaponMap *this)
{
  ??0GSnapshotWeaponMap@@QEAA@XZ(this);
}

/*
==============
GSnapshotWeaponMap::CopyFromBuffer
==============
*/

void __fastcall GSnapshotWeaponMap::CopyFromBuffer(GSnapshotWeaponMap *this, const WeaponMapEntry *src, const int size, const __int64 offset, const int count)
{
  ?CopyFromBuffer@GSnapshotWeaponMap@@QEAAXPEBUWeaponMapEntry@@H_JH@Z(this, src, size, offset, count);
}

/*
==============
GSnapshotWeaponMap::ReadWeaponMap
==============
*/

void __fastcall GSnapshotWeaponMap::ReadWeaponMap(GSnapshotWeaponMap *this, MemoryFile *memFile)
{
  ?ReadWeaponMap@GSnapshotWeaponMap@@QEAAXPEAUMemoryFile@@@Z(this, memFile);
}

/*
==============
GSnapshotWeaponMap::GSnapshotWeaponMap
==============
*/
void GSnapshotWeaponMap::GSnapshotWeaponMap(GSnapshotWeaponMap *this, const GSnapshotWeaponMap *weaponMapCopy)
{
  this->m_entries = NULL;
  this->__vftable = (GSnapshotWeaponMap_vtbl *)&GSnapshotWeaponMap::`vftable';
  this->m_entries = weaponMapCopy->m_entries;
}

/*
==============
GSnapshotWeaponMap::GSnapshotWeaponMap
==============
*/
void GSnapshotWeaponMap::GSnapshotWeaponMap(GSnapshotWeaponMap *this, WeaponMapEntry *weaponMapEntries)
{
  this->m_entries = NULL;
  this->__vftable = (GSnapshotWeaponMap_vtbl *)&GSnapshotWeaponMap::`vftable';
  if ( !weaponMapEntries && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_snapshot_weapon_map.cpp", 19, ASSERT_TYPE_ASSERT, "(weaponMapEntries != nullptr)", (const char *)&queryFormat, "weaponMapEntries != nullptr", -2i64) )
    __debugbreak();
  this->m_entries = weaponMapEntries;
}

/*
==============
GSnapshotWeaponMap::GSnapshotWeaponMap
==============
*/
void GSnapshotWeaponMap::GSnapshotWeaponMap(GSnapshotWeaponMap *this)
{
  this->m_entries = NULL;
  this->__vftable = (GSnapshotWeaponMap_vtbl *)&GSnapshotWeaponMap::`vftable';
}

/*
==============
GSnapshotWeaponMap::~GSnapshotWeaponMap
==============
*/
void GSnapshotWeaponMap::~GSnapshotWeaponMap(GSnapshotWeaponMap *this)
{
  this->__vftable = (GSnapshotWeaponMap_vtbl *)&BgWeaponMap::`vftable';
}

/*
==============
GSnapshotWeaponMap::ClearWeapon
==============
*/
void GSnapshotWeaponMap::ClearWeapon(GSnapshotWeaponMap *this, BgWeaponHandle *handle)
{
  if ( !handle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_snapshot_weapon_map.cpp", 191, ASSERT_TYPE_ASSERT, "( handle )", (const char *)&queryFormat, "handle") )
    __debugbreak();
  BgWeaponMap::SetMapIndexForHandle(this, handle, 0);
}

/*
==============
GSnapshotWeaponMap::CopyFromBuffer
==============
*/
void GSnapshotWeaponMap::CopyFromBuffer(GSnapshotWeaponMap *this, const WeaponMapEntry *src, const int size, const __int64 offset, const int count)
{
  __int64 v5; 
  unsigned __int16 v9; 
  __int64 v10; 
  __int64 v11; 
  unsigned __int16 index; 
  __int64 v15; 
  __int64 v19; 

  v5 = size;
  if ( !src && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_snapshot_weapon_map.cpp", 54, ASSERT_TYPE_ASSERT, "( src )", (const char *)&queryFormat, "src") )
    __debugbreak();
  if ( (int)v5 < count && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_snapshot_weapon_map.cpp", 55, ASSERT_TYPE_ASSERT, "( size >= count )", (const char *)&queryFormat, "size >= count") )
    __debugbreak();
  v9 = 0;
  if ( count < 0 )
    goto LABEL_32;
  if ( !BgWeaponMap::ms_runtimeSizeInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_map.h", 228, ASSERT_TYPE_ASSERT, "(ms_runtimeSizeInitialized)", (const char *)&queryFormat, "ms_runtimeSizeInitialized") )
    __debugbreak();
  if ( count > BgWeaponMap::ms_runtimeSize )
  {
LABEL_32:
    if ( !BgWeaponMap::ms_runtimeSizeInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_map.h", 228, ASSERT_TYPE_ASSERT, "(ms_runtimeSizeInitialized)", (const char *)&queryFormat, "ms_runtimeSizeInitialized") )
      __debugbreak();
    LODWORD(v19) = count;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_snapshot_weapon_map.cpp", 56, ASSERT_TYPE_ASSERT, "( 0 ) <= ( count ) && ( count ) <= ( BgWeaponMap::GetRuntimeSize() )", "count not in [0, BgWeaponMap::GetRuntimeSize()]\n\t%i not in [%i, %i]", v19, 0i64, BgWeaponMap::ms_runtimeSize) )
      __debugbreak();
  }
  if ( !this->m_entries && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_snapshot_weapon_map.cpp", 57, ASSERT_TYPE_ASSERT, "( m_entries != nullptr )", (const char *)&queryFormat, "m_entries != nullptr") )
    __debugbreak();
  if ( count > 0 )
  {
    v10 = v5;
    v11 = (unsigned int)count;
    do
    {
      _RBX = &src[offset % v10];
      index = _RBX->index;
      if ( _RBX->index > v9 )
      {
        memset_0(&this->m_entries[v9], 0, 62i64 * (unsigned __int16)(index - v9));
        v9 = index;
      }
      __asm { vmovups ymm0, ymmword ptr [rbx] }
      ++offset;
      v15 = v9++;
      _RCX = &this->m_entries[v15];
      __asm
      {
        vmovups ymmword ptr [rcx], ymm0
        vmovups xmm1, xmmword ptr [rbx+20h]
        vmovups xmmword ptr [rcx+20h], xmm1
        vmovsd  xmm0, qword ptr [rbx+30h]
        vmovsd  qword ptr [rcx+30h], xmm0
      }
      *(_DWORD *)&_RCX->weapon.attachmentVariationIndices[27] = *(_DWORD *)&_RBX->weapon.attachmentVariationIndices[27];
      *(_WORD *)&_RCX->weapon.scopeVariation = *(_WORD *)&_RBX->weapon.scopeVariation;
      --v11;
    }
    while ( v11 );
  }
  if ( !BgWeaponMap::ms_runtimeSizeInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_map.h", 228, ASSERT_TYPE_ASSERT, "(ms_runtimeSizeInitialized)", (const char *)&queryFormat, "ms_runtimeSizeInitialized") )
    __debugbreak();
  if ( BgWeaponMap::ms_runtimeSize != v9 )
    memset_0(&this->m_entries[v9], 0, 62i64 * (unsigned __int16)(BgWeaponMap::ms_runtimeSize - v9));
}

/*
==============
GSnapshotWeaponMap::CopyFromMap
==============
*/
void GSnapshotWeaponMap::CopyFromMap(GSnapshotWeaponMap *this, const BgWeaponMap *src)
{
  __int64 v4; 
  const WeaponMapEntry *WeaponEntry; 

  if ( !src && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_snapshot_weapon_map.cpp", 86, ASSERT_TYPE_ASSERT, "( src )", (const char *)&queryFormat, "src") )
    __debugbreak();
  if ( !this->m_entries && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_snapshot_weapon_map.cpp", 87, ASSERT_TYPE_ASSERT, "( m_entries != nullptr )", (const char *)&queryFormat, "m_entries != nullptr") )
    __debugbreak();
  if ( !BgWeaponMap::ms_runtimeSizeInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_map.h", 228, ASSERT_TYPE_ASSERT, "(ms_runtimeSizeInitialized)", (const char *)&queryFormat, "ms_runtimeSizeInitialized") )
    __debugbreak();
  v4 = BgWeaponMap::ms_runtimeSize;
  WeaponEntry = BgWeaponMap::GetWeaponEntry((BgWeaponMap *)src, 0);
  memcpy_0(this->m_entries, WeaponEntry, 62 * v4);
}

/*
==============
GSnapshotWeaponMap::CopyWeapon
==============
*/
void GSnapshotWeaponMap::CopyWeapon(GSnapshotWeaponMap *this, BgWeaponHandle *dest, const BgWeaponHandle *src)
{
  unsigned __int16 v6; 
  unsigned int v7; 
  unsigned __int16 v8; 

  if ( !dest && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_snapshot_weapon_map.cpp", 98, ASSERT_TYPE_ASSERT, "( dest )", (const char *)&queryFormat, "dest") )
    __debugbreak();
  if ( !src && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_snapshot_weapon_map.cpp", 99, ASSERT_TYPE_ASSERT, "( src )", (const char *)&queryFormat, "src") )
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
  if ( this->m_entries[v8].index != v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_snapshot_weapon_map.cpp", 102, ASSERT_TYPE_ASSERT, "( IsEntryValid( srcMapEntryIndex ) )", (const char *)&queryFormat, "IsEntryValid( srcMapEntryIndex )") )
    __debugbreak();
  BgWeaponMap::SetMapIndexForHandle(this, dest, v7);
}

/*
==============
GSnapshotWeaponMap::ReadWeaponMap
==============
*/
void GSnapshotWeaponMap::ReadWeaponMap(GSnapshotWeaponMap *this, MemoryFile *memFile)
{
  if ( !BgWeaponMap::ms_runtimeSizeInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_map.h", 228, ASSERT_TYPE_ASSERT, "(ms_runtimeSizeInitialized)", (const char *)&queryFormat, "ms_runtimeSizeInitialized") )
    __debugbreak();
  MemFile_ReadData(memFile, 62i64 * BgWeaponMap::ms_runtimeSize, this->m_entries);
}

/*
==============
GSnapshotWeaponMap::SaveWeaponMap
==============
*/
void GSnapshotWeaponMap::SaveWeaponMap(GSnapshotWeaponMap *this, MemoryFile *memFile)
{
  if ( !BgWeaponMap::ms_runtimeSizeInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_map.h", 228, ASSERT_TYPE_ASSERT, "(ms_runtimeSizeInitialized)", (const char *)&queryFormat, "ms_runtimeSizeInitialized") )
    __debugbreak();
  MemFile_WriteData(memFile, 62i64 * BgWeaponMap::ms_runtimeSize, this->m_entries);
}

/*
==============
GSnapshotWeaponMap::SetWeapon
==============
*/
void GSnapshotWeaponMap::SetWeapon(GSnapshotWeaponMap *this, BgWeaponHandle *handle, const Weapon *r_weapon)
{
  Weapon *p_weapon; 
  unsigned __int16 v7; 
  unsigned __int16 v8; 
  unsigned __int16 v9; 
  WeaponMapEntry *m_entries; 
  unsigned __int16 v11; 
  unsigned __int16 v12; 
  unsigned __int16 v13; 
  __int64 v15; 
  const char *WeaponName; 
  BgWeaponHandle *handlea; 
  char output[512]; 

  handlea = handle;
  _R13 = r_weapon;
  if ( !handle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_snapshot_weapon_map.cpp", 113, ASSERT_TYPE_ASSERT, "( handle )", (const char *)&queryFormat, "handle", 0i64) )
    __debugbreak();
  if ( !this->m_entries && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_snapshot_weapon_map.cpp", 114, ASSERT_TYPE_ASSERT, "( m_entries != nullptr )", (const char *)&queryFormat, "m_entries != nullptr") )
    __debugbreak();
  if ( handle->m_mapEntryId )
  {
    if ( BgWeaponMap::IsEntryValid(this, handle->m_mapEntryId) )
    {
      p_weapon = &BgWeaponMap::GetWeaponEntry(this, handle->m_mapEntryId)->weapon;
      if ( !p_weapon->weaponIdx && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_snapshot_weapon_map.cpp", 126, ASSERT_TYPE_ASSERT, "(!BG_IsNullWeapon( r_currentWeapon ))", (const char *)&queryFormat, "!BG_IsNullWeapon( r_currentWeapon )") )
        __debugbreak();
      if ( !memcmp_0(p_weapon, _R13, 0x3Cui64) )
        return;
    }
  }
  else if ( !_R13->weaponIdx )
  {
    return;
  }
  v7 = 0;
  if ( !BgWeaponMap::ms_runtimeSizeInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_map.h", 228, ASSERT_TYPE_ASSERT, "(ms_runtimeSizeInitialized)", (const char *)&queryFormat, "ms_runtimeSizeInitialized") )
    __debugbreak();
  v8 = BgWeaponMap::ms_runtimeSize;
  v9 = 0;
  if ( BgWeaponMap::ms_runtimeSize )
  {
    m_entries = this->m_entries;
    do
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
        if ( !memcmp_0(_R13, &m_entries[v9].weapon, 0x3Cui64) )
        {
          BgWeaponMap::SetMapIndexForHandle(this, handlea, v9);
          return;
        }
      }
      else
      {
        v12 = v9;
        if ( v7 )
          v12 = v7;
        v7 = v12;
      }
      ++v9;
    }
    while ( v9 < v8 );
    if ( !v7 )
      goto LABEL_53;
    if ( v7 >= v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_snapshot_weapon_map.cpp", 160, ASSERT_TYPE_ASSERT, "(availEntryIndex < weaponMapSize)", "%s\n\tAdding new weapon entry: found an available entry but the index for that entry is out of bounds.", "availEntryIndex < weaponMapSize") )
      __debugbreak();
    if ( !this->m_entries && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_map.h", 161, ASSERT_TYPE_ASSERT, "(m_entries != nullptr)", (const char *)&queryFormat, "m_entries != nullptr") )
      __debugbreak();
    v13 = truncate_cast<unsigned short,unsigned int>(v7);
    if ( !BgWeaponMap::ms_runtimeSizeInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_map.h", 228, ASSERT_TYPE_ASSERT, "(ms_runtimeSizeInitialized)", (const char *)&queryFormat, "ms_runtimeSizeInitialized") )
      __debugbreak();
    if ( v13 >= BgWeaponMap::ms_runtimeSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_map.h", 165, ASSERT_TYPE_ASSERT, "(mapEntryIndex < BgWeaponMap::GetRuntimeSize())", "%s\n\tHandle supplied to BgWeaponMap::GetWeapon does not index the map.", "mapEntryIndex < BgWeaponMap::GetRuntimeSize()") )
      __debugbreak();
    if ( this->m_entries[v13].index == v13 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_snapshot_weapon_map.cpp", 161, ASSERT_TYPE_ASSERT, "(!IsEntryValid( availEntryIndex ))", "%s\n\tAdding new weapon entry: found an available entry but the index for that entry is already active.", "!IsEntryValid( availEntryIndex )") )
      __debugbreak();
    __asm { vmovups ymm0, ymmword ptr [r13+0] }
    v15 = v7;
    _R8 = &this->m_entries[v15].weapon;
    __asm
    {
      vmovups ymmword ptr [r8], ymm0
      vmovups xmm1, xmmword ptr [r13+20h]
      vmovups xmmword ptr [r8+20h], xmm1
      vmovsd  xmm0, qword ptr [r13+30h]
      vmovsd  qword ptr [r8+30h], xmm0
    }
    *(_DWORD *)&_R8->weaponCamo = *(_DWORD *)&_R13->weaponCamo;
    this->m_entries[v15].index = v7;
    BgWeaponMap::SetMapIndexForHandle(this, handlea, v7);
  }
  else
  {
LABEL_53:
    Com_PrintError(131088, "Unable to acquire handle for weapon. The weapon map is full. Will Com_Error and disconnect all players\n");
    BgWeaponMap::PrintMap(this);
    WeaponName = BG_GetWeaponName(_R13, output, 0x200u);
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_snapshot_weapon_map.cpp", 181, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unable to acquire handle for weapon %s. The weapon map is full.", WeaponName) )
      __debugbreak();
  }
}


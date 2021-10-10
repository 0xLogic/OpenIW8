/*
==============
GWeaponMap::CopyWeapon
==============
*/

void __fastcall GWeaponMap::CopyWeapon(GWeaponMap *this, BgWeaponHandle *dest, const BgWeaponHandle *src)
{
  ?CopyWeapon@GWeaponMap@@UEAAXPEAVBgWeaponHandle@@PEBV2@@Z(this, dest, src);
}

/*
==============
GWeaponMap::GWeaponMap
==============
*/

void __fastcall GWeaponMap::GWeaponMap(GWeaponMap *this, WeaponMapEntry *mapEntries)
{
  ??0GWeaponMap@@QEAA@PEAUWeaponMapEntry@@@Z(this, mapEntries);
}

/*
==============
GWeaponMap::AcquireHandle
==============
*/

void __fastcall GWeaponMap::AcquireHandle(GWeaponMap *this, const Weapon *r_weapon, BgWeaponHandle *handle)
{
  ?AcquireHandle@GWeaponMap@@AEAAXAEBUWeapon@@PEAVBgWeaponHandle@@@Z(this, r_weapon, handle);
}

/*
==============
GWeaponMap::~GWeaponMap
==============
*/

void __fastcall GWeaponMap::~GWeaponMap(GWeaponMap *this)
{
  ??1GWeaponMap@@UEAA@XZ(this);
}

/*
==============
GWeaponMap::FreeMemory
==============
*/

void GWeaponMap::FreeMemory(void)
{
  ?FreeMemory@GWeaponMap@@SAXXZ();
}

/*
==============
GWeaponMap::Clear
==============
*/

void GWeaponMap::Clear(void)
{
  ?Clear@GWeaponMap@@SAXXZ();
}

/*
==============
GWeaponMap::GetInstance
==============
*/

GWeaponMap *__fastcall GWeaponMap::GetInstance()
{
  return ?GetInstance@GWeaponMap@@SAPEAV1@XZ();
}

/*
==============
GWeaponMap::SetWeapon
==============
*/

void __fastcall GWeaponMap::SetWeapon(GWeaponMap *this, BgWeaponHandle *handle, const Weapon *r_weapon)
{
  ?SetWeapon@GWeaponMap@@UEAAXPEAVBgWeaponHandle@@AEBUWeapon@@@Z(this, handle, r_weapon);
}

/*
==============
GWeaponMap::ClearEntry
==============
*/

void __fastcall GWeaponMap::ClearEntry(GWeaponMap *this, const unsigned __int16 entryIndex)
{
  ?ClearEntry@GWeaponMap@@AEAAXG@Z(this, entryIndex);
}

/*
==============
GWeaponMap::SaveWeapons
==============
*/

void __fastcall GWeaponMap::SaveWeapons(GWeaponMap *this, MemoryFile *memFile)
{
  ?SaveWeapons@GWeaponMap@@QEBAXPEAUMemoryFile@@@Z(this, memFile);
}

/*
==============
GWeaponMap::DrawWeaponMap
==============
*/

void __fastcall GWeaponMap::DrawWeaponMap(GWeaponMap *this)
{
  ?DrawWeaponMap@GWeaponMap@@QEBAXXZ(this);
}

/*
==============
GWeaponMap::BeginWorkerProcessing
==============
*/

void __fastcall GWeaponMap::BeginWorkerProcessing(GWeaponMap *this)
{
  ?BeginWorkerProcessing@GWeaponMap@@QEAAXXZ(this);
}

/*
==============
GWeaponMap::ClearWeapon
==============
*/

void __fastcall GWeaponMap::ClearWeapon(GWeaponMap *this, BgWeaponHandle *handle)
{
  ?ClearWeapon@GWeaponMap@@UEAAXPEAVBgWeaponHandle@@@Z(this, handle);
}

/*
==============
GWeaponMap::AddReference
==============
*/

void __fastcall GWeaponMap::AddReference(GWeaponMap *this, const unsigned __int16 handleEntryIndex, BgWeaponHandle *outHandle)
{
  ?AddReference@GWeaponMap@@AEAAXGPEAVBgWeaponHandle@@@Z(this, handleEntryIndex, outHandle);
}

/*
==============
GWeaponMap::ValidateScriptableLootReferences
==============
*/

void __fastcall GWeaponMap::ValidateScriptableLootReferences(GWeaponMap *this, unsigned __int16 *references)
{
  ?ValidateScriptableLootReferences@GWeaponMap@@AEBAXQEAG@Z(this, references);
}

/*
==============
GWeaponMap::LoadWeapons
==============
*/

void __fastcall GWeaponMap::LoadWeapons(GWeaponMap *this, MemoryFile *memFile)
{
  ?LoadWeapons@GWeaponMap@@QEAAXPEAUMemoryFile@@@Z(this, memFile);
}

/*
==============
GWeaponMap::EndWorkerProcessing
==============
*/

void __fastcall GWeaponMap::EndWorkerProcessing(GWeaponMap *this)
{
  ?EndWorkerProcessing@GWeaponMap@@QEAAXXZ(this);
}

/*
==============
GWeaponMap::TryGetWeaponEntry
==============
*/

bool __fastcall GWeaponMap::TryGetWeaponEntry(GWeaponMap *this, const unsigned __int16 mapEntryIndex, WeaponMapEntry *outWeaponMapEntry)
{
  return ?TryGetWeaponEntry@GWeaponMap@@QEBA_NGPEAUWeaponMapEntry@@@Z(this, mapEntryIndex, outWeaponMapEntry);
}

/*
==============
GWeaponMap::AssignEntry
==============
*/

void __fastcall GWeaponMap::AssignEntry(GWeaponMap *this, const unsigned __int16 entryIndex, const Weapon *r_weapon)
{
  ?AssignEntry@GWeaponMap@@AEAAXGAEBUWeapon@@@Z(this, entryIndex, r_weapon);
}

/*
==============
GWeaponMap::AllocateMemory
==============
*/

void __fastcall GWeaponMap::AllocateMemory(HunkUser *hunkUser)
{
  ?AllocateMemory@GWeaponMap@@SAXPEAUHunkUser@@@Z(hunkUser);
}

/*
==============
GWeaponMap::ValidatePlayerReferences
==============
*/

void __fastcall GWeaponMap::ValidatePlayerReferences(GWeaponMap *this, const gentity_s *entity, unsigned __int16 *references)
{
  ?ValidatePlayerReferences@GWeaponMap@@AEBAXPEBUgentity_s@@QEAG@Z(this, entity, references);
}

/*
==============
GWeaponMap::GetMemorySize
==============
*/

unsigned int __fastcall GWeaponMap::GetMemorySize()
{
  return ?GetMemorySize@GWeaponMap@@SAIXZ();
}

/*
==============
GWeaponMap::Contains
==============
*/

bool __fastcall GWeaponMap::Contains(GWeaponMap *this, const Weapon *r_weapon)
{
  return ?Contains@GWeaponMap@@QEBA_NAEBUWeapon@@@Z(this, r_weapon);
}

/*
==============
GWeaponMap::ValidateEntityReferences
==============
*/

void __fastcall GWeaponMap::ValidateEntityReferences(GWeaponMap *this, const gentity_s *entity, unsigned __int16 *references)
{
  ?ValidateEntityReferences@GWeaponMap@@AEBAXPEBUgentity_s@@QEAG@Z(this, entity, references);
}

/*
==============
GWeaponMap::CountEntityWeaponReference
==============
*/

void __fastcall GWeaponMap::CountEntityWeaponReference(GWeaponMap *this, const BgWeaponHandle handle, const gentity_s *entity, const char *handleName, unsigned __int16 *references)
{
  ?CountEntityWeaponReference@GWeaponMap@@AEBAXVBgWeaponHandle@@PEBUgentity_s@@PEBDQEAG@Z(this, handle, entity, handleName, references);
}

/*
==============
GWeaponMap::ValidateReferences
==============
*/

void __fastcall GWeaponMap::ValidateReferences(GWeaponMap *this)
{
  ?ValidateReferences@GWeaponMap@@QEBAXXZ(this);
}

/*
==============
GWeaponMap::ReleaseHandle
==============
*/

void __fastcall GWeaponMap::ReleaseHandle(GWeaponMap *this, BgWeaponHandle *handle)
{
  ?ReleaseHandle@GWeaponMap@@AEAAXPEAVBgWeaponHandle@@@Z(this, handle);
}

/*
==============
GWeaponMap::GWeaponMap
==============
*/
void GWeaponMap::GWeaponMap(GWeaponMap *this, WeaponMapEntry *mapEntries)
{
  volatile int *m_workerRefCount; 
  __int64 v5; 

  this->m_entries = NULL;
  this->__vftable = (GWeaponMap_vtbl *)&GWeaponMap::`vftable';
  *(_DWORD *)&this->m_activeCount = 0;
  if ( !mapEntries && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon_map.cpp", 34, ASSERT_TYPE_ASSERT, "(mapEntries != nullptr)", (const char *)&queryFormat, "mapEntries != nullptr", -2i64) )
    __debugbreak();
  this->m_entries = mapEntries;
  memset_0(this->m_refCount, 0, sizeof(this->m_refCount));
  this->m_processingWorkers = 0;
  m_workerRefCount = this->m_workerRefCount;
  v5 = 1023i64;
  do
  {
    *m_workerRefCount++ = 0;
    --v5;
  }
  while ( v5 );
}

/*
==============
GWeaponMap::~GWeaponMap
==============
*/
void GWeaponMap::~GWeaponMap(GWeaponMap *this)
{
  this->__vftable = (GWeaponMap_vtbl *)&BgWeaponMap::`vftable';
}

/*
==============
GWeaponMap::AcquireHandle
==============
*/
void GWeaponMap::AcquireHandle(GWeaponMap *this, const Weapon *r_weapon, BgWeaponHandle *handle)
{
  BgWeaponHandle *v3; 
  const Weapon *v4; 
  bool m_processingWorkers; 
  unsigned __int16 v7; 
  unsigned __int16 v8; 
  WeaponMapEntry *m_entries; 
  unsigned int v10; 
  unsigned __int16 v11; 
  unsigned __int16 v12; 
  __int64 v13; 
  volatile signed __int32 *v14; 
  const char *WeaponName; 
  unsigned __int16 v16; 
  char output[512]; 

  v3 = handle;
  v4 = r_weapon;
  if ( !handle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon_map.cpp", 225, ASSERT_TYPE_ASSERT, "( handle )", (const char *)&queryFormat, "handle") )
    __debugbreak();
  if ( !this->m_entries && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon_map.cpp", 226, ASSERT_TYPE_ASSERT, "( m_entries != nullptr )", (const char *)&queryFormat, "m_entries != nullptr") )
    __debugbreak();
  if ( !v4->weaponIdx && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon_map.cpp", 227, ASSERT_TYPE_ASSERT, "( !BG_IsNullWeapon( r_weapon ) )", (const char *)&queryFormat, "!BG_IsNullWeapon( r_weapon )") )
    __debugbreak();
  if ( truncate_cast<unsigned short,unsigned int>(v3->m_mapEntryId) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon_map.cpp", 228, ASSERT_TYPE_ASSERT, "(GetMapIndexForHandle( *handle ) == BgWeaponHandle::INVALID_HANDLE)", "%s\n\tTrying to acquire a handle without first releasing the existing reference. Call ReleaseHandle before AcquireHandle.", "GetMapIndexForHandle( *handle ) == BgWeaponHandle::INVALID_HANDLE") )
    __debugbreak();
  m_processingWorkers = this->m_processingWorkers;
  if ( !Sys_IsMainThread() && !Sys_IsServerThread() && !m_processingWorkers && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon_map.cpp", 236, ASSERT_TYPE_ASSERT, "( Sys_IsMainThread() || Sys_IsServerThread() || processingWorkers )", (const char *)&queryFormat, "Sys_IsMainThread() || Sys_IsServerThread() || processingWorkers") )
    __debugbreak();
  v7 = 0;
  if ( !BgWeaponMap::ms_runtimeSizeInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_map.h", 228, ASSERT_TYPE_ASSERT, "(ms_runtimeSizeInitialized)", (const char *)&queryFormat, "ms_runtimeSizeInitialized") )
    __debugbreak();
  v16 = BgWeaponMap::ms_runtimeSize;
  v8 = 1;
  if ( BgWeaponMap::ms_runtimeSize <= 1u )
  {
LABEL_39:
    if ( m_processingWorkers || !v7 )
    {
      BgWeaponMap::PrintMap(this);
      WeaponName = BG_GetWeaponName(v4, output, 0x200u);
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon_map.cpp", 298, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "Unable to acquire handle for weapon %s. OnWorker=%i.", WeaponName, m_processingWorkers) )
        __debugbreak();
    }
    else
    {
      GWeaponMap::AssignEntry(this, v7, v4);
      ++this->m_refCount[v7];
      BgWeaponMap::SetMapIndexForHandle(this, v3, v7);
    }
    return;
  }
  m_entries = this->m_entries;
  while ( 1 )
  {
    if ( !m_entries && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_map.h", 161, ASSERT_TYPE_ASSERT, "(m_entries != nullptr)", (const char *)&queryFormat, "m_entries != nullptr") )
      __debugbreak();
    v10 = v8;
    v11 = truncate_cast<unsigned short,unsigned int>(v8);
    if ( !BgWeaponMap::ms_runtimeSizeInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_map.h", 228, ASSERT_TYPE_ASSERT, "(ms_runtimeSizeInitialized)", (const char *)&queryFormat, "ms_runtimeSizeInitialized") )
      __debugbreak();
    if ( v11 >= BgWeaponMap::ms_runtimeSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_map.h", 165, ASSERT_TYPE_ASSERT, "(mapEntryIndex < BgWeaponMap::GetRuntimeSize())", "%s\n\tHandle supplied to BgWeaponMap::GetWeapon does not index the map.", "mapEntryIndex < BgWeaponMap::GetRuntimeSize()") )
      __debugbreak();
    m_entries = this->m_entries;
    if ( m_entries[v11].index != v11 )
    {
      v12 = v8;
      if ( v7 )
        v12 = v7;
      v7 = v12;
      goto LABEL_37;
    }
    v13 = v8;
    if ( !memcmp_0(r_weapon, &m_entries[v8].weapon, 0x3Cui64) )
      break;
LABEL_37:
    if ( ++v8 >= v16 )
    {
      v4 = r_weapon;
      v3 = handle;
      goto LABEL_39;
    }
  }
  if ( !this->m_refCount[v8] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon_map.cpp", 257, ASSERT_TYPE_ASSERT, "( m_refCount[mapEntryIndex] != 0 )", (const char *)&queryFormat, "m_refCount[mapEntryIndex] != 0") )
    __debugbreak();
  if ( m_processingWorkers )
  {
    v14 = &this->m_workerRefCount[v8];
    if ( ((unsigned __int8)v14 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &this->m_workerRefCount[v13]) )
      __debugbreak();
    if ( _InterlockedIncrement(v14) <= 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon_map.cpp", 262, ASSERT_TYPE_ASSERT, "((Sys_InterlockedIncrement( &m_workerRefCount[mapEntryIndex] )) > (1))", (const char *)&queryFormat, "Sys_InterlockedIncrement( &m_workerRefCount[mapEntryIndex] ) > 1") )
    {
      __debugbreak();
      BgWeaponMap::SetMapIndexForHandle(this, handle, v10);
      return;
    }
  }
  else
  {
    ++this->m_refCount[v8];
  }
  BgWeaponMap::SetMapIndexForHandle(this, handle, v10);
}

/*
==============
GWeaponMap::AddReference
==============
*/
void GWeaponMap::AddReference(GWeaponMap *this, const unsigned __int16 handleEntryIndex, BgWeaponHandle *outHandle)
{
  volatile int *v6; 

  if ( !handleEntryIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon_map.cpp", 360, ASSERT_TYPE_ASSERT, "( handleEntryIndex != BgWeaponHandle::INVALID_HANDLE )", (const char *)&queryFormat, "handleEntryIndex != BgWeaponHandle::INVALID_HANDLE") )
    __debugbreak();
  if ( !outHandle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon_map.cpp", 361, ASSERT_TYPE_ASSERT, "( outHandle )", (const char *)&queryFormat, "outHandle") )
    __debugbreak();
  if ( !this->m_entries && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon_map.cpp", 362, ASSERT_TYPE_ASSERT, "( m_entries != nullptr )", (const char *)&queryFormat, "m_entries != nullptr") )
    __debugbreak();
  if ( !BgWeaponMap::ms_runtimeSizeInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_map.h", 228, ASSERT_TYPE_ASSERT, "(ms_runtimeSizeInitialized)", (const char *)&queryFormat, "ms_runtimeSizeInitialized") )
    __debugbreak();
  if ( handleEntryIndex >= BgWeaponMap::ms_runtimeSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon_map.cpp", 363, ASSERT_TYPE_ASSERT, "(handleEntryIndex < BgWeaponMap::GetRuntimeSize())", "%s\n\tTrying to acquire a reference to an existing weapon handle that is out of bounds.", "handleEntryIndex < BgWeaponMap::GetRuntimeSize()") )
    __debugbreak();
  if ( !this->m_refCount[handleEntryIndex] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon_map.cpp", 364, ASSERT_TYPE_ASSERT, "(( m_refCount[handleEntryIndex] != 0 ))", "%s\n\tTrying to acquire a reference to an existing weapon handle but that handle has no existing references", "( m_refCount[handleEntryIndex] != 0 )") )
    __debugbreak();
  if ( this->m_entries[handleEntryIndex].index != handleEntryIndex && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon_map.cpp", 365, ASSERT_TYPE_ASSERT, "(( m_entries[handleEntryIndex].index == handleEntryIndex ))", "%s\n\tTrying to acquire a reference to an existing weapon handle but that handle is not valid", "( m_entries[handleEntryIndex].index == handleEntryIndex )") )
    __debugbreak();
  if ( !memcmp_0(&this->m_entries[handleEntryIndex].weapon, &NULL_WEAPON, 0x3Cui64) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon_map.cpp", 366, ASSERT_TYPE_ASSERT, "(!BG_AreWeaponsEqual( m_entries[handleEntryIndex].weapon, NULL_WEAPON ))", "%s\n\tTrying to acquire a reference to an existing weapon handle but that handle does not point to a valid weapon", "!BG_AreWeaponsEqual( m_entries[handleEntryIndex].weapon, NULL_WEAPON )") )
    __debugbreak();
  if ( !Sys_IsMainThread() && !Sys_IsServerThread() )
  {
    if ( this->m_processingWorkers )
      goto LABEL_31;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon_map.cpp", 369, ASSERT_TYPE_ASSERT, "( Sys_IsMainThread() || Sys_IsServerThread() || m_processingWorkers )", (const char *)&queryFormat, "Sys_IsMainThread() || Sys_IsServerThread() || m_processingWorkers") )
      __debugbreak();
  }
  if ( !this->m_processingWorkers )
  {
    ++this->m_refCount[handleEntryIndex];
    goto LABEL_38;
  }
LABEL_31:
  v6 = &this->m_workerRefCount[handleEntryIndex];
  if ( ((unsigned __int8)v6 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 37, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", (const void *)v6) )
    __debugbreak();
  if ( _InterlockedIncrement(v6) <= 1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon_map.cpp", 373, ASSERT_TYPE_ASSERT, "((Sys_InterlockedIncrement( &m_workerRefCount[handleEntryIndex] )) > (1))", (const char *)&queryFormat, "Sys_InterlockedIncrement( &m_workerRefCount[handleEntryIndex] ) > 1") )
    __debugbreak();
LABEL_38:
  BgWeaponMap::SetMapIndexForHandle(this, outHandle, handleEntryIndex);
}

/*
==============
GWeaponMap::AllocateMemory
==============
*/
void GWeaponMap::AllocateMemory(HunkUser *hunkUser)
{
  _QWORD *v2; 
  void *v3; 
  _DWORD *v4; 
  __int64 v5; 

  v2 = Mem_HunkUser_AllocInternal(hunkUser, 0x1818ui64, 8ui64, "GWeaponMap::AllocateMemory");
  memset_0(v2, 0, 0x1818ui64);
  if ( !BgWeaponMap::ms_runtimeSizeInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_map.h", 228, ASSERT_TYPE_ASSERT, "(ms_runtimeSizeInitialized)", (const char *)&queryFormat, "ms_runtimeSizeInitialized", -2i64) )
    __debugbreak();
  v3 = Mem_HunkUser_AllocInternal(hunkUser, 62i64 * BgWeaponMap::ms_runtimeSize, 8ui64, "GWeaponMap::AllocateMemory");
  v2[1] = 0i64;
  *v2 = &GWeaponMap::`vftable';
  *(_DWORD *)((char *)v2 + 6158) = 0;
  if ( !v3 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon_map.cpp", 34, ASSERT_TYPE_ASSERT, "(mapEntries != nullptr)", (const char *)&queryFormat, "mapEntries != nullptr") )
    __debugbreak();
  v2[1] = v3;
  memset_0(v2 + 514, 0, 0x7FEui64);
  *((_BYTE *)v2 + 16) = 0;
  v4 = (_DWORD *)v2 + 5;
  v5 = 1023i64;
  do
  {
    *v4++ = 0;
    --v5;
  }
  while ( v5 );
  GWeaponMap::ms_instance = (GWeaponMap *)v2;
}

/*
==============
GWeaponMap::AssignEntry
==============
*/
void GWeaponMap::AssignEntry(GWeaponMap *this, const unsigned __int16 entryIndex, const Weapon *r_weapon)
{
  unsigned __int16 v6; 
  __int64 v7; 
  Weapon *p_weapon; 
  unsigned __int16 v9; 
  unsigned __int16 v10; 
  __int64 v11; 
  __int64 v12; 
  int v13; 

  if ( !this->m_entries && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon_map.cpp", 181, ASSERT_TYPE_ASSERT, "( m_entries != nullptr )", (const char *)&queryFormat, "m_entries != nullptr") )
    __debugbreak();
  if ( !this->m_entries && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_map.h", 161, ASSERT_TYPE_ASSERT, "(m_entries != nullptr)", (const char *)&queryFormat, "m_entries != nullptr") )
    __debugbreak();
  v6 = truncate_cast<unsigned short,unsigned int>(entryIndex);
  if ( !BgWeaponMap::ms_runtimeSizeInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_map.h", 228, ASSERT_TYPE_ASSERT, "(ms_runtimeSizeInitialized)", (const char *)&queryFormat, "ms_runtimeSizeInitialized") )
    __debugbreak();
  if ( v6 >= BgWeaponMap::ms_runtimeSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_map.h", 165, ASSERT_TYPE_ASSERT, "(mapEntryIndex < BgWeaponMap::GetRuntimeSize())", "%s\n\tHandle supplied to BgWeaponMap::GetWeapon does not index the map.", "mapEntryIndex < BgWeaponMap::GetRuntimeSize()") )
    __debugbreak();
  if ( this->m_entries[v6].index == v6 )
  {
    v13 = entryIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon_map.cpp", 182, ASSERT_TYPE_ASSERT, "(!IsEntryValid( entryIndex ))", "%s\n\tAdding new weapon entry: found an available entry but the index for that entry is already active (%d)", "!IsEntryValid( entryIndex )", v13) )
      __debugbreak();
  }
  v7 = entryIndex;
  p_weapon = &this->m_entries[v7].weapon;
  *(__m256i *)&p_weapon->weaponIdx = *(__m256i *)&r_weapon->weaponIdx;
  *(_OWORD *)&p_weapon->attachmentVariationIndices[5] = *(_OWORD *)&r_weapon->attachmentVariationIndices[5];
  *(double *)&p_weapon->attachmentVariationIndices[21] = *(double *)&r_weapon->attachmentVariationIndices[21];
  *(_DWORD *)&p_weapon->weaponCamo = *(_DWORD *)&r_weapon->weaponCamo;
  this->m_entries[v7].index = entryIndex;
  if ( this->m_activeCount == 0xFFFF )
  {
    LODWORD(v12) = 0xFFFF;
    LODWORD(v11) = 0xFFFF;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon_map.cpp", 190, ASSERT_TYPE_ASSERT, "( m_activeCount ) < ( 0xffff )", "m_activeCount < USHRT_MAX\n\t%i, %i", v11, v12) )
      __debugbreak();
  }
  v9 = ++this->m_activeCount;
  if ( v9 > this->m_activeHighWatermark )
    this->m_activeHighWatermark = v9;
  if ( !this->m_entries && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_map.h", 161, ASSERT_TYPE_ASSERT, "(m_entries != nullptr)", (const char *)&queryFormat, "m_entries != nullptr") )
    __debugbreak();
  v10 = truncate_cast<unsigned short,unsigned int>(entryIndex);
  if ( !BgWeaponMap::ms_runtimeSizeInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_map.h", 228, ASSERT_TYPE_ASSERT, "(ms_runtimeSizeInitialized)", (const char *)&queryFormat, "ms_runtimeSizeInitialized") )
    __debugbreak();
  if ( v10 >= BgWeaponMap::ms_runtimeSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_map.h", 165, ASSERT_TYPE_ASSERT, "(mapEntryIndex < BgWeaponMap::GetRuntimeSize())", "%s\n\tHandle supplied to BgWeaponMap::GetWeapon does not index the map.", "mapEntryIndex < BgWeaponMap::GetRuntimeSize()") )
    __debugbreak();
  if ( this->m_entries[v10].index != v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon_map.cpp", 197, ASSERT_TYPE_ASSERT, "( IsEntryValid( entryIndex ) )", (const char *)&queryFormat, "IsEntryValid( entryIndex )") )
    __debugbreak();
}

/*
==============
GWeaponMap::BeginWorkerProcessing
==============
*/
void GWeaponMap::BeginWorkerProcessing(GWeaponMap *this)
{
  volatile int *v2; 
  __int64 v3; 
  unsigned __int16 *v4; 
  volatile int v5; 

  if ( !Sys_IsMainThread() && !Sys_IsServerThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon_map.cpp", 388, ASSERT_TYPE_ASSERT, "( Sys_IsMainThread() || Sys_IsServerThread() )", (const char *)&queryFormat, "Sys_IsMainThread() || Sys_IsServerThread()") )
    __debugbreak();
  if ( this->m_processingWorkers && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon_map.cpp", 389, ASSERT_TYPE_ASSERT, "( !m_processingWorkers )", (const char *)&queryFormat, "!m_processingWorkers") )
    __debugbreak();
  if ( !BgWeaponMap::ms_runtimeSizeInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_map.h", 228, ASSERT_TYPE_ASSERT, "(ms_runtimeSizeInitialized)", (const char *)&queryFormat, "ms_runtimeSizeInitialized") )
    __debugbreak();
  if ( BgWeaponMap::ms_runtimeSize <= 1u )
  {
    this->m_processingWorkers = 1;
  }
  else
  {
    v2 = &this->m_workerRefCount[1];
    v3 = (unsigned __int16)(BgWeaponMap::ms_runtimeSize - 1);
    v4 = &this->m_refCount[1];
    do
    {
      v5 = *v4++;
      *v2++ = v5;
      --v3;
    }
    while ( v3 );
    this->m_processingWorkers = 1;
  }
}

/*
==============
GWeaponMap::Clear
==============
*/
void GWeaponMap::Clear(void)
{
  __int64 v0; 
  __int64 v1; 

  if ( !GWeaponMap::ms_instance && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon_map.cpp", 95, ASSERT_TYPE_ASSERT, "( ms_instance )", (const char *)&queryFormat, "ms_instance") )
    __debugbreak();
  BgWeaponMap::ClearEntries(GWeaponMap::ms_instance);
  memset_0(GWeaponMap::ms_instance->m_refCount, 0, sizeof(GWeaponMap::ms_instance->m_refCount));
  GWeaponMap::ms_instance->m_activeCount = 0;
  GWeaponMap::ms_instance->m_activeHighWatermark = 0;
  if ( GWeaponMap::ms_instance->m_processingWorkers && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon_map.cpp", 104, ASSERT_TYPE_ASSERT, "( !ms_instance->m_processingWorkers )", (const char *)&queryFormat, "!ms_instance->m_processingWorkers") )
    __debugbreak();
  v0 = 20i64;
  v1 = 1023i64;
  do
  {
    v0 += 4i64;
    *(_DWORD *)((char *)GWeaponMap::ms_instance + v0 - 4) = 0;
    --v1;
  }
  while ( v1 );
}

/*
==============
GWeaponMap::ClearEntry
==============
*/
void GWeaponMap::ClearEntry(GWeaponMap *this, const unsigned __int16 entryIndex)
{
  unsigned __int16 v4; 
  unsigned __int64 v5; 
  WeaponMapEntry *m_entries; 
  unsigned __int16 v7; 
  __int64 v8; 
  int v9; 

  if ( !this->m_entries && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon_map.cpp", 203, ASSERT_TYPE_ASSERT, "( m_entries != nullptr )", (const char *)&queryFormat, "m_entries != nullptr") )
    __debugbreak();
  if ( !this->m_entries && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_map.h", 161, ASSERT_TYPE_ASSERT, "(m_entries != nullptr)", (const char *)&queryFormat, "m_entries != nullptr") )
    __debugbreak();
  v4 = truncate_cast<unsigned short,unsigned int>(entryIndex);
  if ( !BgWeaponMap::ms_runtimeSizeInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_map.h", 228, ASSERT_TYPE_ASSERT, "(ms_runtimeSizeInitialized)", (const char *)&queryFormat, "ms_runtimeSizeInitialized") )
    __debugbreak();
  if ( v4 >= BgWeaponMap::ms_runtimeSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_map.h", 165, ASSERT_TYPE_ASSERT, "(mapEntryIndex < BgWeaponMap::GetRuntimeSize())", "%s\n\tHandle supplied to BgWeaponMap::GetWeapon does not index the map.", "mapEntryIndex < BgWeaponMap::GetRuntimeSize()") )
    __debugbreak();
  if ( this->m_entries[v4].index != v4 )
  {
    v9 = entryIndex;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon_map.cpp", 204, ASSERT_TYPE_ASSERT, "(IsEntryValid( entryIndex ))", "%s\n\tRemoving a weapon entry: entry index is invalid (%d)", "IsEntryValid( entryIndex )", v9) )
      __debugbreak();
  }
  v5 = entryIndex;
  this->m_entries[v5].index = 0;
  m_entries = this->m_entries;
  *(_QWORD *)&m_entries[v5].weapon.weaponIdx = 0i64;
  *(_QWORD *)&m_entries[v5].weapon.stickerIndices[3] = 0i64;
  *(_QWORD *)&m_entries[v5].weapon.weaponAttachments[2] = 0i64;
  *(_QWORD *)&m_entries[v5].weapon.weaponAttachments[10] = 0i64;
  *(_QWORD *)&m_entries[v5].weapon.attachmentVariationIndices[5] = 0i64;
  *(_QWORD *)&m_entries[v5].weapon.attachmentVariationIndices[13] = 0i64;
  *(_QWORD *)&m_entries[v5].weapon.attachmentVariationIndices[21] = 0i64;
  *(_DWORD *)&m_entries[v5].weapon.weaponCamo = 0;
  if ( !this->m_activeCount )
  {
    LODWORD(v8) = 0;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon_map.cpp", 213, ASSERT_TYPE_ASSERT, "( m_activeCount ) > ( 0 )", "m_activeCount > 0\n\t%i, %i", v8, 0i64) )
      __debugbreak();
  }
  --this->m_activeCount;
  if ( !this->m_entries && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_map.h", 161, ASSERT_TYPE_ASSERT, "(m_entries != nullptr)", (const char *)&queryFormat, "m_entries != nullptr") )
    __debugbreak();
  v7 = truncate_cast<unsigned short,unsigned int>(entryIndex);
  if ( !BgWeaponMap::ms_runtimeSizeInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_map.h", 228, ASSERT_TYPE_ASSERT, "(ms_runtimeSizeInitialized)", (const char *)&queryFormat, "ms_runtimeSizeInitialized") )
    __debugbreak();
  if ( v7 >= BgWeaponMap::ms_runtimeSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_map.h", 165, ASSERT_TYPE_ASSERT, "(mapEntryIndex < BgWeaponMap::GetRuntimeSize())", "%s\n\tHandle supplied to BgWeaponMap::GetWeapon does not index the map.", "mapEntryIndex < BgWeaponMap::GetRuntimeSize()") )
    __debugbreak();
  if ( this->m_entries[v7].index == v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon_map.cpp", 216, ASSERT_TYPE_ASSERT, "( !IsEntryValid( entryIndex ) )", (const char *)&queryFormat, "!IsEntryValid( entryIndex )") )
    __debugbreak();
}

/*
==============
GWeaponMap::ClearWeapon
==============
*/
void GWeaponMap::ClearWeapon(GWeaponMap *this, BgWeaponHandle *handle)
{
  if ( !handle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon_map.cpp", 174, ASSERT_TYPE_ASSERT, "( handle )", (const char *)&queryFormat, "handle") )
    __debugbreak();
  GWeaponMap::ReleaseHandle(this, handle);
}

/*
==============
GWeaponMap::Contains
==============
*/
char GWeaponMap::Contains(GWeaponMap *this, const Weapon *r_weapon)
{
  unsigned __int16 v4; 
  unsigned __int16 v5; 
  WeaponMapEntry *m_entries; 
  unsigned __int16 v7; 

  if ( !this->m_entries && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon_map.cpp", 539, ASSERT_TYPE_ASSERT, "( m_entries != nullptr )", (const char *)&queryFormat, "m_entries != nullptr") )
    __debugbreak();
  if ( !BgWeaponMap::ms_runtimeSizeInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_map.h", 228, ASSERT_TYPE_ASSERT, "(ms_runtimeSizeInitialized)", (const char *)&queryFormat, "ms_runtimeSizeInitialized") )
    __debugbreak();
  v4 = BgWeaponMap::ms_runtimeSize;
  v5 = 1;
  if ( BgWeaponMap::ms_runtimeSize <= 1u )
    return 0;
  m_entries = this->m_entries;
  while ( 1 )
  {
    if ( !m_entries && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_map.h", 161, ASSERT_TYPE_ASSERT, "(m_entries != nullptr)", (const char *)&queryFormat, "m_entries != nullptr") )
      __debugbreak();
    v7 = truncate_cast<unsigned short,unsigned int>(v5);
    if ( !BgWeaponMap::ms_runtimeSizeInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_map.h", 228, ASSERT_TYPE_ASSERT, "(ms_runtimeSizeInitialized)", (const char *)&queryFormat, "ms_runtimeSizeInitialized") )
      __debugbreak();
    if ( v7 >= BgWeaponMap::ms_runtimeSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_map.h", 165, ASSERT_TYPE_ASSERT, "(mapEntryIndex < BgWeaponMap::GetRuntimeSize())", "%s\n\tHandle supplied to BgWeaponMap::GetWeapon does not index the map.", "mapEntryIndex < BgWeaponMap::GetRuntimeSize()") )
      __debugbreak();
    m_entries = this->m_entries;
    if ( m_entries[v7].index == v7 && !memcmp_0(r_weapon, &m_entries[v5].weapon, 0x3Cui64) )
      break;
    if ( ++v5 >= v4 )
      return 0;
  }
  return 1;
}

/*
==============
GWeaponMap::CopyWeapon
==============
*/
void GWeaponMap::CopyWeapon(GWeaponMap *this, BgWeaponHandle *dest, const BgWeaponHandle *src)
{
  unsigned __int16 v6; 
  unsigned __int16 v7; 

  if ( !dest && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon_map.cpp", 123, ASSERT_TYPE_ASSERT, "( dest )", (const char *)&queryFormat, "dest") )
    __debugbreak();
  if ( !src && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon_map.cpp", 124, ASSERT_TYPE_ASSERT, "( src )", (const char *)&queryFormat, "src") )
    __debugbreak();
  v6 = truncate_cast<unsigned short,unsigned int>(dest->m_mapEntryId);
  v7 = truncate_cast<unsigned short,unsigned int>(src->m_mapEntryId);
  if ( v6 != v7 )
  {
    GWeaponMap::ReleaseHandle(this, dest);
    if ( v7 )
      GWeaponMap::AddReference(this, v7, dest);
  }
}

/*
==============
GWeaponMap::CountEntityWeaponReference
==============
*/
void GWeaponMap::CountEntityWeaponReference(GWeaponMap *this, const BgWeaponHandle handle, const gentity_s *entity, const char *handleName, unsigned __int16 *references)
{
  unsigned __int16 v9; 
  __int64 v10; 
  __int64 v11; 
  __int64 v12; 
  char output[512]; 

  if ( !entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon_map.cpp", 561, ASSERT_TYPE_ASSERT, "( entity )", (const char *)&queryFormat, "entity") )
    __debugbreak();
  if ( !entity->r.isInUse && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon_map.cpp", 562, ASSERT_TYPE_ASSERT, "( entity->r.isInUse )", (const char *)&queryFormat, "entity->r.isInUse") )
    __debugbreak();
  if ( !this->m_entries && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon_map.cpp", 563, ASSERT_TYPE_ASSERT, "( m_entries != nullptr )", (const char *)&queryFormat, "m_entries != nullptr") )
    __debugbreak();
  if ( handle.m_mapEntryId )
  {
    v9 = truncate_cast<unsigned short,unsigned int>(handle.m_mapEntryId);
    if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon_map.cpp", 570, ASSERT_TYPE_ASSERT, "(mapEntryIndex != BgWeaponHandle::INVALID_HANDLE)", "%s\n\tCould not find the weapon entry for the weapon held by entity %d, eType:%d, handle:%s", "mapEntryIndex != BgWeaponHandle::INVALID_HANDLE", entity->s.number, entity->s.eType, handleName) )
      __debugbreak();
    if ( !BgWeaponMap::ms_runtimeSizeInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_map.h", 228, ASSERT_TYPE_ASSERT, "(ms_runtimeSizeInitialized)", (const char *)&queryFormat, "ms_runtimeSizeInitialized") )
      __debugbreak();
    if ( v9 >= BgWeaponMap::ms_runtimeSize )
    {
      if ( !BgWeaponMap::ms_runtimeSizeInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_map.h", 228, ASSERT_TYPE_ASSERT, "(ms_runtimeSizeInitialized)", (const char *)&queryFormat, "ms_runtimeSizeInitialized") )
        __debugbreak();
      LODWORD(v11) = BgWeaponMap::ms_runtimeSize;
      LODWORD(v10) = v9;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon_map.cpp", 571, ASSERT_TYPE_ASSERT, "(unsigned)( mapEntryIndex ) < (unsigned)( BgWeaponMap::GetRuntimeSize() )", "mapEntryIndex doesn't index BgWeaponMap::GetRuntimeSize()\n\t%i not in [0, %i)", v10, v11) )
        __debugbreak();
    }
    BG_GetWeaponName(&this->m_entries[v9].weapon, output, 0x200u);
    if ( !references[v9] )
    {
      LODWORD(v12) = entity->s.number;
      LODWORD(v11) = v9;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon_map.cpp", 574, ASSERT_TYPE_ASSERT, "(references[mapEntryIndex] > 0)", "%s\n\tToo many references found for weapon map entry %d, weapon %s. Last reference for entity %d, eType:%d, handle:%s", "references[mapEntryIndex] > 0", v11, output, v12, entity->s.eType, handleName) )
        __debugbreak();
    }
    --references[v9];
  }
}

/*
==============
GWeaponMap::DrawWeaponMap
==============
*/
void GWeaponMap::DrawWeaponMap(GWeaponMap *this)
{
  __int128 v1; 
  const dvar_t *v3; 
  unsigned int v4; 
  int v5; 
  __int128 v6; 
  signed int v7; 
  signed int v8; 
  unsigned __int16 *v9; 
  unsigned __int16 v10; 
  WeaponMapEntry *m_entries; 
  const char *WeaponName; 
  __int128 v13; 
  char *fmt; 
  __int64 v15; 
  char dest[1024]; 
  char output[512]; 
  __int128 v18; 

  if ( !this->m_entries && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon_map.cpp", 820, ASSERT_TYPE_ASSERT, "( m_entries != nullptr )", (const char *)&queryFormat, "m_entries != nullptr") )
    __debugbreak();
  v3 = DVARBOOL_g_drawWeaponMap;
  if ( !DVARBOOL_g_drawWeaponMap && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "g_drawWeaponMap") )
    __debugbreak();
  Dvar_CheckFrontendServerThread(v3);
  if ( v3->current.enabled )
  {
    v4 = 0;
    v5 = 0;
    v6 = LODWORD(FLOAT_113_0);
    if ( !BgWeaponMap::ms_runtimeSizeInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_map.h", 228, ASSERT_TYPE_ASSERT, "(ms_runtimeSizeInitialized)", (const char *)&queryFormat, "ms_runtimeSizeInitialized") )
      __debugbreak();
    v7 = BgWeaponMap::ms_runtimeSize;
    v8 = 1;
    if ( BgWeaponMap::ms_runtimeSize > 1u )
    {
      v9 = &this->m_refCount[1];
      v18 = v1;
      do
      {
        if ( !this->m_entries && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_map.h", 161, ASSERT_TYPE_ASSERT, "(m_entries != nullptr)", (const char *)&queryFormat, "m_entries != nullptr") )
          __debugbreak();
        v10 = truncate_cast<unsigned short,unsigned int>(v8);
        if ( !BgWeaponMap::ms_runtimeSizeInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_map.h", 228, ASSERT_TYPE_ASSERT, "(ms_runtimeSizeInitialized)", (const char *)&queryFormat, "ms_runtimeSizeInitialized") )
          __debugbreak();
        if ( v10 >= BgWeaponMap::ms_runtimeSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_map.h", 165, ASSERT_TYPE_ASSERT, "(mapEntryIndex < BgWeaponMap::GetRuntimeSize())", "%s\n\tHandle supplied to BgWeaponMap::GetWeapon does not index the map.", "mapEntryIndex < BgWeaponMap::GetRuntimeSize()") )
          __debugbreak();
        m_entries = this->m_entries;
        if ( m_entries[v10].index == v10 )
        {
          WeaponName = BG_GetWeaponName(&m_entries[v8].weapon, output, 0x200u);
          LODWORD(fmt) = *v9;
          Com_sprintf(dest, 0x400ui64, "Entry:%d RefCount:%d Weapon:%s\n", (unsigned int)v8, fmt, WeaponName);
          G_Main_AddDebugString2D(100.0, *(float *)&v6, &colorWhite, 1.1, dest);
          v5 += *v9;
          ++v4;
        }
        ++v8;
        ++v9;
        v13 = v6;
        *(float *)&v13 = *(float *)&v6 + 13.0;
        v6 = v13;
      }
      while ( v8 < v7 );
    }
    LODWORD(v15) = v5;
    LODWORD(fmt) = v7;
    Com_sprintf(dest, 0x400ui64, "Using: %d / %d     Total RefCount:%d", v4, fmt, v15);
    G_Main_AddDebugString2D(100.0, 100.0, &colorWhite, 1.1, dest);
  }
}

/*
==============
GWeaponMap::EndWorkerProcessing
==============
*/
void GWeaponMap::EndWorkerProcessing(GWeaponMap *this)
{
  unsigned __int16 v2; 
  unsigned __int16 v3; 
  unsigned __int16 *v4; 
  volatile int *v5; 
  int v6; 
  unsigned __int16 v7; 

  if ( !Sys_IsMainThread() && !Sys_IsServerThread() && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon_map.cpp", 408, ASSERT_TYPE_ASSERT, "( Sys_IsMainThread() || Sys_IsServerThread() )", (const char *)&queryFormat, "Sys_IsMainThread() || Sys_IsServerThread()") )
    __debugbreak();
  if ( !this->m_processingWorkers && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon_map.cpp", 409, ASSERT_TYPE_ASSERT, "( m_processingWorkers )", (const char *)&queryFormat, "m_processingWorkers") )
    __debugbreak();
  if ( !BgWeaponMap::ms_runtimeSizeInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_map.h", 228, ASSERT_TYPE_ASSERT, "(ms_runtimeSizeInitialized)", (const char *)&queryFormat, "ms_runtimeSizeInitialized") )
    __debugbreak();
  v2 = BgWeaponMap::ms_runtimeSize;
  v3 = 1;
  if ( BgWeaponMap::ms_runtimeSize > 1u )
  {
    v4 = &this->m_refCount[1];
    v5 = &this->m_workerRefCount[1];
    do
    {
      v6 = *v5;
      if ( (*(int *)v5 < 0 || (unsigned int)v6 > 0xFFFF) && CoreAssert_Handler("c:\\workspace\\iw8\\shared\\codware\\core\\core_assert.h", 385, ASSERT_TYPE_ASSERT, (const char *)&queryFormat.fmt + 3, "%s (SmallType) %s 0x%jx == (BigType) %s 0x%jx", "unsigned short __cdecl truncate_cast_impl<unsigned short,long>(long)", "unsigned", (unsigned __int16)v6, "signed", v6) )
        __debugbreak();
      *v4 = v6;
      if ( !this->m_entries && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_map.h", 161, ASSERT_TYPE_ASSERT, "(m_entries != nullptr)", (const char *)&queryFormat, "m_entries != nullptr") )
        __debugbreak();
      v7 = truncate_cast<unsigned short,unsigned int>(v3);
      if ( !BgWeaponMap::ms_runtimeSizeInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_map.h", 228, ASSERT_TYPE_ASSERT, "(ms_runtimeSizeInitialized)", (const char *)&queryFormat, "ms_runtimeSizeInitialized") )
        __debugbreak();
      if ( v7 >= BgWeaponMap::ms_runtimeSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_map.h", 165, ASSERT_TYPE_ASSERT, "(mapEntryIndex < BgWeaponMap::GetRuntimeSize())", "%s\n\tHandle supplied to BgWeaponMap::GetWeapon does not index the map.", "mapEntryIndex < BgWeaponMap::GetRuntimeSize()") )
        __debugbreak();
      if ( this->m_entries[v7].index == v7 && !*v4 )
        GWeaponMap::ClearEntry(this, v3);
      ++v3;
      ++v5;
      ++v4;
    }
    while ( v3 < v2 );
  }
  GWeaponMap::ValidateReferences(this);
  this->m_processingWorkers = 0;
}

/*
==============
GWeaponMap::FreeMemory
==============
*/
void GWeaponMap::FreeMemory(void)
{
  if ( GWeaponMap::ms_instance )
  {
    GWeaponMap::ms_instance->__vftable = (GWeaponMap_vtbl *)&BgWeaponMap::`vftable';
    DebugWipe(GWeaponMap::ms_instance, 0x1818ui64);
    GWeaponMap::ms_instance = NULL;
  }
}

/*
==============
GWeaponMap::GetInstance
==============
*/
GWeaponMap *GWeaponMap::GetInstance()
{
  GWeaponMap *result; 

  result = GWeaponMap::ms_instance;
  if ( !GWeaponMap::ms_instance )
  {
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon_map.cpp", 116, ASSERT_TYPE_ASSERT, "( ms_instance )", (const char *)&queryFormat, "ms_instance") )
      __debugbreak();
    return GWeaponMap::ms_instance;
  }
  return result;
}

/*
==============
GWeaponMap::GetMemorySize
==============
*/
__int64 GWeaponMap::GetMemorySize()
{
  return 6168i64;
}

/*
==============
GWeaponMap::LoadWeapons
==============
*/
void GWeaponMap::LoadWeapons(GWeaponMap *this, MemoryFile *memFile)
{
  unsigned __int16 v4; 
  __int16 v5; 
  unsigned __int16 v6; 
  __int64 v7; 
  WeaponMapEntry *v8; 
  unsigned __int16 v9; 
  Weapon *WeaponForName; 
  int v11; 
  __int128 v12; 
  double v13; 
  __int16 p[2]; 
  unsigned __int16 v15; 
  Weapon result; 
  char psz[512]; 

  if ( !memFile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon_map.cpp", 479, ASSERT_TYPE_ASSERT, "( memFile )", (const char *)&queryFormat, "memFile") )
    __debugbreak();
  if ( !this->m_entries && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon_map.cpp", 480, ASSERT_TYPE_ASSERT, "( m_entries != nullptr )", (const char *)&queryFormat, "m_entries != nullptr") )
    __debugbreak();
  if ( this->m_processingWorkers && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon_map.cpp", 482, ASSERT_TYPE_ASSERT, "( !m_processingWorkers )", (const char *)&queryFormat, "!m_processingWorkers") )
    __debugbreak();
  BgWeaponMap::ClearEntries(this);
  memset_0(this->m_refCount, 0, sizeof(this->m_refCount));
  this->m_activeCount = 0;
  if ( !BgWeaponMap::ms_runtimeSizeInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_map.h", 228, ASSERT_TYPE_ASSERT, "(ms_runtimeSizeInitialized)", (const char *)&queryFormat, "ms_runtimeSizeInitialized") )
    __debugbreak();
  v4 = BgWeaponMap::ms_runtimeSize;
  MemFile_ReadData(memFile, 2ui64, p);
  v5 = p[0];
  if ( (unsigned int)p[0] < v4 )
  {
    v6 = p[0];
    do
    {
      v7 = v6;
      v8 = &this->m_entries[v6];
      MemFile_ReadData(memFile, 2ui64, &v15);
      v9 = v15;
      if ( !GSave::ms_weaponNameSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_save.h", 79, ASSERT_TYPE_ASSERT, "(ms_weaponNameSize != 0)", (const char *)&queryFormat, "ms_weaponNameSize != 0") )
        __debugbreak();
      G_SaveField_ReadCStyleString(psz, GSave::ms_weaponNameSize, memFile);
      if ( !psz[0] )
      {
        Com_Printf(16, "Encountered an empty weapon string when reading weapon map. Only valid weapons should have been written to the save file.");
        Com_Error_impl(ERR_DROP, (const ObfuscateErrorText)&stru_143E3E358);
      }
      v8->index = v5;
      WeaponForName = G_Weapon_GetWeaponForName(&result, psz);
      v11 = *(_DWORD *)&WeaponForName->weaponCamo;
      v12 = *(_OWORD *)&WeaponForName->attachmentVariationIndices[5];
      v13 = *(double *)&WeaponForName->attachmentVariationIndices[21];
      *(__m256i *)&v8->weapon.weaponIdx = *(__m256i *)&WeaponForName->weaponIdx;
      *(_OWORD *)&v8->weapon.attachmentVariationIndices[5] = v12;
      *(double *)&v8->weapon.attachmentVariationIndices[21] = v13;
      *(_DWORD *)&v8->weapon.weaponCamo = v11;
      this->m_refCount[v7] = v9;
      ++this->m_activeCount;
      MemFile_ReadData(memFile, 2ui64, p);
      v5 = p[0];
      v6 = p[0];
    }
    while ( (unsigned int)p[0] < v4 );
  }
  this->m_activeHighWatermark = this->m_activeCount;
}

/*
==============
GWeaponMap::ReleaseHandle
==============
*/
void GWeaponMap::ReleaseHandle(GWeaponMap *this, BgWeaponHandle *handle)
{
  unsigned __int16 v4; 
  unsigned __int16 v5; 
  volatile signed __int32 *v6; 

  if ( !handle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon_map.cpp", 314, ASSERT_TYPE_ASSERT, "( handle )", (const char *)&queryFormat, "handle") )
    __debugbreak();
  if ( !this->m_entries && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon_map.cpp", 315, ASSERT_TYPE_ASSERT, "( m_entries != nullptr )", (const char *)&queryFormat, "m_entries != nullptr") )
    __debugbreak();
  v4 = truncate_cast<unsigned short,unsigned int>(handle->m_mapEntryId);
  if ( v4 )
  {
    if ( !BgWeaponMap::ms_runtimeSizeInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_map.h", 228, ASSERT_TYPE_ASSERT, "(ms_runtimeSizeInitialized)", (const char *)&queryFormat, "ms_runtimeSizeInitialized") )
      __debugbreak();
    if ( v4 >= BgWeaponMap::ms_runtimeSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon_map.cpp", 326, ASSERT_TYPE_ASSERT, "(handleEntryIndex < BgWeaponMap::GetRuntimeSize())", "%s\n\tInvalid handle passed to GWeaponMap::ReleaseHandle. Handle does not index the map.", "handleEntryIndex < BgWeaponMap::GetRuntimeSize()") )
      __debugbreak();
    if ( !this->m_refCount[v4] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon_map.cpp", 327, ASSERT_TYPE_ASSERT, "(m_refCount[handleEntryIndex] != 0)", "%s\n\tInvalid handle passed to GWeaponMap::ReleaseHandle. Handle does not have any references to release.", "m_refCount[handleEntryIndex] != 0") )
      __debugbreak();
    if ( !this->m_entries && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_map.h", 161, ASSERT_TYPE_ASSERT, "(m_entries != nullptr)", (const char *)&queryFormat, "m_entries != nullptr") )
      __debugbreak();
    v5 = truncate_cast<unsigned short,unsigned int>(v4);
    if ( !BgWeaponMap::ms_runtimeSizeInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_map.h", 228, ASSERT_TYPE_ASSERT, "(ms_runtimeSizeInitialized)", (const char *)&queryFormat, "ms_runtimeSizeInitialized") )
      __debugbreak();
    if ( v5 >= BgWeaponMap::ms_runtimeSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_map.h", 165, ASSERT_TYPE_ASSERT, "(mapEntryIndex < BgWeaponMap::GetRuntimeSize())", "%s\n\tHandle supplied to BgWeaponMap::GetWeapon does not index the map.", "mapEntryIndex < BgWeaponMap::GetRuntimeSize()") )
      __debugbreak();
    if ( this->m_entries[v5].index != v5 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon_map.cpp", 328, ASSERT_TYPE_ASSERT, "(IsEntryValid( handleEntryIndex ))", "%s\n\tInvalid handle passed to GWeaponMap::ReleaseHandle. Handle indexes the map but was not found in the map.", "IsEntryValid( handleEntryIndex )") )
      __debugbreak();
    if ( !this->m_entries[v4].weapon.weaponIdx && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon_map.cpp", 329, ASSERT_TYPE_ASSERT, "(!BG_IsNullWeapon( m_entries[handleEntryIndex].weapon ))", "%s\n\tWeapon system found an invalid entry in the weapon map trying to release a handle.", "!BG_IsNullWeapon( m_entries[handleEntryIndex].weapon )") )
      __debugbreak();
    if ( !Sys_IsMainThread() && !Sys_IsServerThread() )
    {
      if ( this->m_processingWorkers )
        goto LABEL_38;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon_map.cpp", 332, ASSERT_TYPE_ASSERT, "( Sys_IsMainThread() || Sys_IsServerThread() || m_processingWorkers )", (const char *)&queryFormat, "Sys_IsMainThread() || Sys_IsServerThread() || m_processingWorkers") )
        __debugbreak();
    }
    if ( !this->m_processingWorkers )
    {
      if ( this->m_refCount[v4]-- == 1 )
        GWeaponMap::ClearEntry(this, v4);
      goto LABEL_46;
    }
LABEL_38:
    v6 = &this->m_workerRefCount[v4];
    if ( ((unsigned __int8)v6 & 3) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\threads_interlock_pc.h", 44, ASSERT_TYPE_ASSERT, "( ( IsAligned( addend, sizeof( volatile_int32 ) ) ) )", "( addend ) = %p", &this->m_workerRefCount[v4]) )
      __debugbreak();
    if ( _InterlockedDecrement(v6) < 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon_map.cpp", 339, ASSERT_TYPE_ASSERT, "((Sys_InterlockedDecrement( &m_workerRefCount[handleEntryIndex] )) >= (0))", (const char *)&queryFormat, "Sys_InterlockedDecrement( &m_workerRefCount[handleEntryIndex] ) >= 0") )
      __debugbreak();
LABEL_46:
    BgWeaponMap::SetMapIndexForHandle(this, handle, 0);
  }
}

/*
==============
GWeaponMap::SaveWeapons
==============
*/
void GWeaponMap::SaveWeapons(GWeaponMap *this, MemoryFile *memFile)
{
  unsigned __int16 v4; 
  unsigned __int16 v5; 
  __int16 *v6; 
  __int64 v7; 
  unsigned __int16 v8; 
  WeaponMapEntry *m_entries; 
  WeaponMapEntry *v10; 
  __int16 p[8]; 
  char output[512]; 

  if ( !memFile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon_map.cpp", 443, ASSERT_TYPE_ASSERT, "( memFile )", (const char *)&queryFormat, "memFile") )
    __debugbreak();
  if ( !this->m_entries && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon_map.cpp", 444, ASSERT_TYPE_ASSERT, "( m_entries != nullptr )", (const char *)&queryFormat, "m_entries != nullptr") )
    __debugbreak();
  if ( this->m_processingWorkers && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon_map.cpp", 446, ASSERT_TYPE_ASSERT, "( !m_processingWorkers )", (const char *)&queryFormat, "!m_processingWorkers") )
    __debugbreak();
  if ( !BgWeaponMap::ms_runtimeSizeInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_map.h", 228, ASSERT_TYPE_ASSERT, "(ms_runtimeSizeInitialized)", (const char *)&queryFormat, "ms_runtimeSizeInitialized") )
    __debugbreak();
  v4 = BgWeaponMap::ms_runtimeSize;
  v5 = 1;
  if ( BgWeaponMap::ms_runtimeSize > 1u )
  {
    v6 = (__int16 *)&this->m_refCount[1];
    v7 = 1i64;
    do
    {
      if ( !this->m_entries && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_map.h", 161, ASSERT_TYPE_ASSERT, "(m_entries != nullptr)", (const char *)&queryFormat, "m_entries != nullptr") )
        __debugbreak();
      v8 = truncate_cast<unsigned short,unsigned int>(v5);
      if ( !BgWeaponMap::ms_runtimeSizeInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_map.h", 228, ASSERT_TYPE_ASSERT, "(ms_runtimeSizeInitialized)", (const char *)&queryFormat, "ms_runtimeSizeInitialized") )
        __debugbreak();
      if ( v8 >= BgWeaponMap::ms_runtimeSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_map.h", 165, ASSERT_TYPE_ASSERT, "(mapEntryIndex < BgWeaponMap::GetRuntimeSize())", "%s\n\tHandle supplied to BgWeaponMap::GetWeapon does not index the map.", "mapEntryIndex < BgWeaponMap::GetRuntimeSize()") )
        __debugbreak();
      m_entries = this->m_entries;
      if ( m_entries[v8].index == v8 )
      {
        v10 = &m_entries[v7];
        if ( !m_entries[v7].weapon.weaponIdx && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon_map.cpp", 457, ASSERT_TYPE_ASSERT, "(!BG_IsNullWeapon( entry->weapon ))", "%s\n\tTrying to serialize a referenced weapon but the weapon entry is not valid.", "!BG_IsNullWeapon( entry->weapon )") )
          __debugbreak();
        p[0] = v10->index;
        MemFile_WriteData(memFile, 2ui64, p);
        p[0] = *v6;
        MemFile_WriteData(memFile, 2ui64, p);
        BG_GetWeaponName(&v10->weapon, output, 0x200u);
        if ( !output[0] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon_map.cpp", 464, ASSERT_TYPE_ASSERT, "(weaponName[0] != 0)", "%s\n\tA valid weapon should not have an empty weapon name.", "weaponName[0] != 0") )
          __debugbreak();
        if ( !GSave::ms_weaponNameSize && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_save.h", 79, ASSERT_TYPE_ASSERT, "(ms_weaponNameSize != 0)", (const char *)&queryFormat, "ms_weaponNameSize != 0") )
          __debugbreak();
        G_SaveField_WriteCStyleString(output, GSave::ms_weaponNameSize, memFile);
      }
      ++v5;
      ++v6;
      ++v7;
    }
    while ( v5 < v4 );
  }
  p[0] = v4;
  MemFile_WriteData(memFile, 2ui64, p);
}

/*
==============
GWeaponMap::SetWeapon
==============
*/
void GWeaponMap::SetWeapon(GWeaponMap *this, BgWeaponHandle *handle, const Weapon *r_weapon)
{
  const Weapon *Weapon; 

  if ( !handle && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon_map.cpp", 144, ASSERT_TYPE_ASSERT, "( handle )", (const char *)&queryFormat, "handle") )
    __debugbreak();
  if ( !BG_ValidateWeapon(r_weapon) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon_map.cpp", 145, ASSERT_TYPE_ASSERT, "( BG_ValidateWeapon( r_weapon ) )", (const char *)&queryFormat, "BG_ValidateWeapon( r_weapon )") )
    __debugbreak();
  if ( handle->m_mapEntryId )
  {
    Weapon = BgWeaponMap::GetWeapon(this, (BgWeaponHandle)handle->m_mapEntryId);
    if ( !memcmp_0(Weapon, r_weapon, 0x3Cui64) )
      return;
    GWeaponMap::ReleaseHandle(this, handle);
  }
  if ( memcmp_0(r_weapon, &NULL_WEAPON, 0x3Cui64) )
    GWeaponMap::AcquireHandle(this, r_weapon, handle);
}

/*
==============
GWeaponMap::TryGetWeaponEntry
==============
*/
bool GWeaponMap::TryGetWeaponEntry(GWeaponMap *this, const unsigned __int16 mapEntryIndex, WeaponMapEntry *outWeaponMapEntry)
{
  unsigned int v6; 
  __int64 v7; 
  WeaponMapEntry *m_entries; 
  bool result; 
  __int64 v10; 

  if ( !mapEntryIndex )
  {
    v6 = 0;
LABEL_8:
    if ( !BgWeaponMap::ms_runtimeSizeInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_map.h", 228, ASSERT_TYPE_ASSERT, "(ms_runtimeSizeInitialized)", (const char *)&queryFormat, "ms_runtimeSizeInitialized") )
      __debugbreak();
    LODWORD(v10) = v6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon_map.cpp", 520, ASSERT_TYPE_ASSERT, "( FIRST_ENTRY_ID ) <= ( mapEntryIndex ) && ( mapEntryIndex ) <= ( BgWeaponMap::GetRuntimeSize() - 1 )", "mapEntryIndex not in [FIRST_ENTRY_ID, BgWeaponMap::GetRuntimeSize() - 1]\n\t%i not in [%i, %i]", v10, 1, BgWeaponMap::ms_runtimeSize - 1) )
      __debugbreak();
    goto LABEL_13;
  }
  if ( !BgWeaponMap::ms_runtimeSizeInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_map.h", 228, ASSERT_TYPE_ASSERT, "(ms_runtimeSizeInitialized)", (const char *)&queryFormat, "ms_runtimeSizeInitialized") )
    __debugbreak();
  v6 = mapEntryIndex;
  if ( mapEntryIndex > BgWeaponMap::ms_runtimeSize - 1 )
    goto LABEL_8;
LABEL_13:
  if ( !outWeaponMapEntry && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon_map.cpp", 521, ASSERT_TYPE_ASSERT, "( outWeaponMapEntry )", (const char *)&queryFormat, "outWeaponMapEntry") )
    __debugbreak();
  if ( !this->m_entries && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon_map.cpp", 522, ASSERT_TYPE_ASSERT, "( m_entries != nullptr )", (const char *)&queryFormat, "m_entries != nullptr") )
    __debugbreak();
  if ( !BgWeaponMap::IsEntryValid(this, v6) )
    return 0;
  v7 = mapEntryIndex;
  m_entries = this->m_entries;
  *(__m256i *)&outWeaponMapEntry->weapon.weaponIdx = *(__m256i *)&m_entries[v7].weapon.weaponIdx;
  *(_OWORD *)&outWeaponMapEntry->weapon.attachmentVariationIndices[5] = *(_OWORD *)&m_entries[v7].weapon.attachmentVariationIndices[5];
  *(double *)&outWeaponMapEntry->weapon.attachmentVariationIndices[21] = *(double *)&m_entries[v7].weapon.attachmentVariationIndices[21];
  *(_DWORD *)&outWeaponMapEntry->weapon.weaponCamo = *(_DWORD *)&m_entries[v7].weapon.weaponCamo;
  result = 1;
  outWeaponMapEntry->index = mapEntryIndex;
  return result;
}

/*
==============
GWeaponMap::ValidateEntityReferences
==============
*/
void GWeaponMap::ValidateEntityReferences(GWeaponMap *this, const gentity_s *entity, unsigned __int16 *references)
{
  gclient_s *client; 
  const char *v7; 
  unsigned int m_mapEntryId; 
  entityType_s eType; 
  int v10; 
  EntityEvent *events; 
  unsigned int i; 
  __int64 v13; 
  char dest[64]; 

  if ( !entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon_map.cpp", 585, ASSERT_TYPE_ASSERT, "( entity )", (const char *)&queryFormat, "entity") )
    __debugbreak();
  if ( !references && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon_map.cpp", 586, ASSERT_TYPE_ASSERT, "( references )", (const char *)&queryFormat, "references") )
    __debugbreak();
  GWeaponMap::CountEntityWeaponReference(this, entity->s.weaponHandle, entity, "weaponHandle", references);
  if ( entity->client || entity->agent )
  {
    GWeaponMap::CountEntityWeaponReference(this, entity->s.staticState.player.offhandWeaponHandle, entity, "offhandWeaponHandle", references);
    GWeaponMap::CountEntityWeaponReference(this, entity->s.staticState.player.stowedWeaponHandle, entity, "stowedWeaponHandle", references);
    GWeaponMap::CountEntityWeaponReference(this, entity->s.lerp.u.player.executionWeaponHandle, entity, "executionWeaponHandle", references);
    GWeaponMap::CountEntityWeaponReference(this, entity->s.lerp.u.player.accessoryWeaponHandle, entity, "accessoryWeaponHandle", references);
    GWeaponMap::ValidatePlayerReferences(this, entity, references);
    client = entity->client;
    if ( client )
    {
      GWeaponMap::CountEntityWeaponReference(this, client->sess.cs.serverDobjHeldWeapon, entity, "clientState:serverDobjHeldWeapon", references);
      v7 = "clientState:serverDobjTurretWeapon";
      m_mapEntryId = entity->client->sess.cs.serverDobjTurretWeapon.m_mapEntryId;
    }
    else
    {
      if ( !entity->agent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon_map.cpp", 606, ASSERT_TYPE_ASSERT, "(entity->agent)", (const char *)&queryFormat, "entity->agent") )
        __debugbreak();
      GWeaponMap::CountEntityWeaponReference(this, entity->agent->agentState.serverDobjHeldWeapon, entity, "agentState:serverDobjHeldWeapon", references);
      v7 = "agentState:serverDobjTurretWeapon";
      m_mapEntryId = entity->agent->agentState.serverDobjTurretWeapon.m_mapEntryId;
    }
    GWeaponMap::CountEntityWeaponReference(this, (const BgWeaponHandle)m_mapEntryId, entity, v7, references);
  }
  eType = entity->s.eType;
  if ( eType == ET_AGENT_CORPSE )
  {
    GWeaponMap::CountEntityWeaponReference(this, entity->s.staticState.player.offhandWeaponHandle, entity, "corpseStowedWeaponHandle", references);
    eType = entity->s.eType;
  }
  if ( eType >= ET_EVENTS && BG_IsWeaponEvent(eType - 29) )
    GWeaponMap::CountEntityWeaponReference(this, (const BgWeaponHandle)entity->s.eventParm, entity, "eventParam", references);
  v10 = 0;
  events = entity->s.events;
  for ( i = 0; i < 4; ++i )
  {
    if ( BG_IsWeaponEvent(events->eventType) )
    {
      Com_sprintf(dest, 0x40ui64, "eventParamHandle[%d]", i);
      GWeaponMap::CountEntityWeaponReference(this, (const BgWeaponHandle)entity->s.events[i].eventParm, entity, dest, references);
    }
    ++events;
  }
  if ( entity->client )
  {
    v13 = 0i64;
    do
    {
      Com_sprintf(dest, 0x40ui64, "mlgSpectatorClientInfo:weaponHandles[%d]", (unsigned int)v10);
      GWeaponMap::CountEntityWeaponReference(this, entity->client->mlgSpectatorClientInfo.weaponHandles[v13], entity, dest, references);
      ++v10;
      ++v13;
    }
    while ( v10 < 2 );
  }
}

/*
==============
GWeaponMap::ValidatePlayerReferences
==============
*/
void GWeaponMap::ValidatePlayerReferences(GWeaponMap *this, const gentity_s *entity, unsigned __int16 *references)
{
  const playerState_s *EntityPlayerStateConst; 
  __int64 v7; 
  __int64 v8; 
  unsigned int i; 
  int v10; 
  const BgWeaponHandle *p_weaponHandle; 
  unsigned int v12; 
  const int *unpredictableEvents; 
  unsigned int v14; 
  const int *events; 
  __int64 v16; 
  char dest[64]; 

  if ( !entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon_map.cpp", 656, ASSERT_TYPE_ASSERT, "( entity )", (const char *)&queryFormat, "entity") )
    __debugbreak();
  if ( !references && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon_map.cpp", 657, ASSERT_TYPE_ASSERT, "( references )", (const char *)&queryFormat, "references") )
    __debugbreak();
  EntityPlayerStateConst = G_GetEntityPlayerStateConst(entity);
  if ( !EntityPlayerStateConst && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon_map.cpp", 660, ASSERT_TYPE_ASSERT, "( ps )", (const char *)&queryFormat, "ps") )
    __debugbreak();
  if ( !*(_QWORD *)&GStatic::ms_gameStatics && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_static.h", 64, ASSERT_TYPE_ASSERT, "( ms_gameStatics )", (const char *)&queryFormat, "ms_gameStatics") )
    __debugbreak();
  v7 = *(_QWORD *)&GStatic::ms_gameStatics;
  GWeaponMap::CountEntityWeaponReference(this, EntityPlayerStateConst->weapCommon.weaponHandle, entity, "player:weaponHandle", references);
  GWeaponMap::CountEntityWeaponReference(this, EntityPlayerStateConst->weapCommon.offHandHandle, entity, "player:offHandHandle", references);
  GWeaponMap::CountEntityWeaponReference(this, EntityPlayerStateConst->throwbackWeaponHandle, entity, "player:throwbackWeaponHandle", references);
  GWeaponMap::CountEntityWeaponReference(this, EntityPlayerStateConst->serverDobjHeldWeapon, entity, "player:serverDobjHeldWeapon", references);
  GWeaponMap::CountEntityWeaponReference(this, EntityPlayerStateConst->serverDobjTurretWeapon, entity, "player:serverDobjTurretWeapon", references);
  GWeaponMap::CountEntityWeaponReference(this, EntityPlayerStateConst->executionWeapon, entity, "player:executionWeapon", references);
  GWeaponMap::CountEntityWeaponReference(this, EntityPlayerStateConst->weapCommon.lastWeaponHandle, entity, "player:lastWeaponHandle", references);
  GWeaponMap::CountEntityWeaponReference(this, EntityPlayerStateConst->weapCommon.lastStowedWeaponHandle, entity, "player:lastStowedWeaponHandle", references);
  GWeaponMap::CountEntityWeaponReference(this, EntityPlayerStateConst->weapCommon.weaponSpawnHandle, entity, "player:weaponSpawnHandle", references);
  GWeaponMap::CountEntityWeaponReference(this, EntityPlayerStateConst->weapCommon.weaponAnimArrayHandle, entity, "player:weaponAnimArrayHandle", references);
  GWeaponMap::CountEntityWeaponReference(this, EntityPlayerStateConst->weapCommon.forcedViewAnimWeaponHandle, entity, "player:forcedViewAnimWeaponHandle", references);
  GWeaponMap::CountEntityWeaponReference(this, EntityPlayerStateConst->weapCommon.forcedViewAnimOriginalWeaponHandle, entity, "player:forcedViewAnimOriginalWeaponHandle", references);
  GWeaponMap::CountEntityWeaponReference(this, EntityPlayerStateConst->highPriorityWeapInfo.weaponHandle, entity, "player:highPriorityWeapon", references);
  v8 = 0i64;
  for ( i = 0; i < 0xF; ++i )
  {
    Com_sprintf(dest, 0x40ui64, "player:weaponsEquipped[%d]", i);
    GWeaponMap::CountEntityWeaponReference(this, EntityPlayerStateConst->weaponsEquipped[i], entity, dest, references);
  }
  v10 = 0;
  p_weaponHandle = &EntityPlayerStateConst->actionSlotParam[0].specifyWeapon.weaponHandle;
  do
  {
    if ( BG_ActionSlotIsWeaponType(EntityPlayerStateConst, v10) )
    {
      Com_sprintf(dest, 0x40ui64, "player:actionSlot[%d]", (unsigned int)v10);
      GWeaponMap::CountEntityWeaponReference(this, (const BgWeaponHandle)p_weaponHandle->m_mapEntryId, entity, dest, references);
    }
    ++v10;
    ++p_weaponHandle;
  }
  while ( v10 < 7 );
  v12 = 0;
  unpredictableEvents = (const int *)EntityPlayerStateConst->unpredictableEvents;
  do
  {
    if ( BG_IsWeaponEvent(*unpredictableEvents) )
    {
      Com_sprintf(dest, 0x40ui64, "player:unpredictableEventParamHandle[%d]", v12);
      GWeaponMap::CountEntityWeaponReference(this, (const BgWeaponHandle)EntityPlayerStateConst->unpredictableEvents[v12].eventParm, entity, dest, references);
    }
    ++v12;
    unpredictableEvents += 2;
  }
  while ( v12 < 4 );
  v14 = 0;
  events = (const int *)EntityPlayerStateConst->pe.events;
  do
  {
    if ( BG_IsWeaponEvent(*events) )
    {
      Com_sprintf(dest, 0x40ui64, "player:predictableEventParamHandle[%d]", v14);
      GWeaponMap::CountEntityWeaponReference(this, (const BgWeaponHandle)EntityPlayerStateConst->pe.events[v14].eventParm, entity, dest, references);
    }
    ++v14;
    events += 2;
  }
  while ( v14 < 4 );
  if ( entity->client )
  {
    v16 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v7 + 48i64))(v7, (unsigned int)entity->s.number);
    if ( *(_DWORD *)(v16 + 8) )
    {
      do
      {
        if ( BG_IsWeaponEvent(*(_DWORD *)(v16 + 12 * v8 + 16)) )
        {
          Com_sprintf(dest, 0x40ui64, "player:eventCacheHandle[%d]", (unsigned int)v8);
          GWeaponMap::CountEntityWeaponReference(this, *(const BgWeaponHandle *)(v16 + 12 * v8 + 20), entity, dest, references);
        }
        v8 = (unsigned int)(v8 + 1);
      }
      while ( (unsigned int)v8 < *(_DWORD *)(v16 + 8) );
    }
  }
}

/*
==============
GWeaponMap::ValidateReferences
==============
*/
void GWeaponMap::ValidateReferences(GWeaponMap *this)
{
  int v2; 
  __int64 v3; 
  __int64 v4; 
  __int64 v5; 
  bool v6; 
  unsigned __int16 v7; 
  unsigned __int16 v8; 
  __int64 v9; 
  unsigned __int16 *v10; 
  const char *WeaponName; 
  __int64 v12; 
  __int64 v13; 
  char output[512]; 
  unsigned __int16 references[1024]; 

  if ( !this->m_entries && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon_map.cpp", 785, ASSERT_TYPE_ASSERT, "( m_entries != nullptr )", (const char *)&queryFormat, "m_entries != nullptr") )
    __debugbreak();
  memcpy_0(references, this->m_refCount, 0x7FEui64);
  v2 = 0;
  v3 = 0i64;
  v4 = 0i64;
  v5 = 0i64;
  v6 = 1;
  do
  {
    if ( !v6 )
    {
      LODWORD(v13) = 2048;
      LODWORD(v12) = v2;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 207, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v12, v13) )
        __debugbreak();
    }
    if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 208, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
      __debugbreak();
    if ( g_entities[v4].r.isInUse != g_entityIsInUse[v3] && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 209, ASSERT_TYPE_ASSERT, "( g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex] )", (const char *)&queryFormat, "g_entities[entityIndex].r.isInUse == g_entityIsInUse[entityIndex]") )
      __debugbreak();
    if ( g_entityIsInUse[v3] )
      GWeaponMap::ValidateEntityReferences(this, &g_entities[v5], references);
    ++v2;
    ++v5;
    ++v3;
    ++v4;
    v6 = (unsigned int)v2 < 0x800;
  }
  while ( v2 < 2048 );
  GWeaponMap::ValidateScriptableLootReferences(this, references);
  v7 = 0;
  if ( !BgWeaponMap::ms_runtimeSizeInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_map.h", 228, ASSERT_TYPE_ASSERT, "(ms_runtimeSizeInitialized)", (const char *)&queryFormat, "ms_runtimeSizeInitialized") )
    __debugbreak();
  v8 = BgWeaponMap::ms_runtimeSize;
  if ( BgWeaponMap::ms_runtimeSize )
  {
    v9 = 0i64;
    v10 = references;
    do
    {
      if ( *v10 )
      {
        WeaponName = BG_GetWeaponName(&this->m_entries[v9].weapon, output, 0x200u);
        LODWORD(v13) = v7;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon_map.cpp", 806, ASSERT_TYPE_ASSERT, "(references[mapEntryIndex] == 0)", "%s\n\tDangling weapon reference left for entry %d, weapon %s", "references[mapEntryIndex] == 0", v13, WeaponName) )
          __debugbreak();
      }
      ++v7;
      ++v10;
      ++v9;
    }
    while ( v7 < v8 );
  }
}

/*
==============
GWeaponMap::ValidateScriptableLootReferences
==============
*/
void GWeaponMap::ValidateScriptableLootReferences(GWeaponMap *this, unsigned __int16 *references)
{
  unsigned int v4; 
  unsigned int *LootTableWeaponHandles; 
  int v6; 
  unsigned __int16 v7; 
  unsigned __int16 WeaponHandle; 
  unsigned __int16 v9; 
  __int64 v10; 
  __int64 v11; 
  int weaponHandleCount[4]; 
  char output[512]; 

  if ( !this->m_entries && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon_map.cpp", 733, ASSERT_TYPE_ASSERT, "( m_entries != nullptr )", (const char *)&queryFormat, "m_entries != nullptr") )
    __debugbreak();
  v4 = 0;
  weaponHandleCount[0] = 0;
  LootTableWeaponHandles = ScriptableSv_GetLootTableWeaponHandles(weaponHandleCount);
  v6 = 0;
  if ( weaponHandleCount[0] > 0 )
  {
    do
    {
      v7 = truncate_cast<unsigned short,unsigned int>(*LootTableWeaponHandles);
      if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon_map.cpp", 743, ASSERT_TYPE_ASSERT, "( mapEntryIndex != BgWeaponHandle::INVALID_HANDLE )", "Could not find the weapon entry for the weapon parsed by loot table") )
        __debugbreak();
      if ( !BgWeaponMap::ms_runtimeSizeInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_map.h", 228, ASSERT_TYPE_ASSERT, "(ms_runtimeSizeInitialized)", (const char *)&queryFormat, "ms_runtimeSizeInitialized") )
        __debugbreak();
      if ( v7 >= BgWeaponMap::ms_runtimeSize )
      {
        if ( !BgWeaponMap::ms_runtimeSizeInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_map.h", 228, ASSERT_TYPE_ASSERT, "(ms_runtimeSizeInitialized)", (const char *)&queryFormat, "ms_runtimeSizeInitialized") )
          __debugbreak();
        LODWORD(v11) = BgWeaponMap::ms_runtimeSize;
        LODWORD(v10) = v7;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon_map.cpp", 744, ASSERT_TYPE_ASSERT, "(unsigned)( mapEntryIndex ) < (unsigned)( BgWeaponMap::GetRuntimeSize() )", "mapEntryIndex doesn't index BgWeaponMap::GetRuntimeSize()\n\t%i not in [0, %i)", v10, v11) )
          __debugbreak();
      }
      BG_GetWeaponName(&this->m_entries[v7].weapon, output, 0x200u);
      if ( !references[v7] )
      {
        LODWORD(v10) = v7;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon_map.cpp", 747, ASSERT_TYPE_ASSERT, "( references[mapEntryIndex] > 0 )", "Too many references found for weapon map entry %d, weapon %s", v10, output) )
          __debugbreak();
      }
      ++v6;
      --references[v7];
      ++LootTableWeaponHandles;
    }
    while ( v6 < weaponHandleCount[0] );
    v4 = 0;
  }
  ScriptableCommon_AssertCountsInitialized();
  if ( g_scriptableWorldCounts.runtimeInstanceCount )
  {
    do
    {
      if ( ScriptableSv_GetInstanceInUse(v4) )
      {
        WeaponHandle = ScriptableSv_GetWeaponHandle(v4, 0);
        if ( WeaponHandle )
        {
          v9 = truncate_cast<unsigned short,unsigned int>(WeaponHandle);
          if ( !BgWeaponMap::ms_runtimeSizeInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_map.h", 228, ASSERT_TYPE_ASSERT, "(ms_runtimeSizeInitialized)", (const char *)&queryFormat, "ms_runtimeSizeInitialized") )
            __debugbreak();
          if ( v9 >= BgWeaponMap::ms_runtimeSize )
          {
            if ( !BgWeaponMap::ms_runtimeSizeInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_weapon_map.h", 228, ASSERT_TYPE_ASSERT, "(ms_runtimeSizeInitialized)", (const char *)&queryFormat, "ms_runtimeSizeInitialized") )
              __debugbreak();
            LODWORD(v11) = BgWeaponMap::ms_runtimeSize;
            LODWORD(v10) = v9;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon_map.cpp", 767, ASSERT_TYPE_ASSERT, "(unsigned)( mapEntryIndex ) < (unsigned)( BgWeaponMap::GetRuntimeSize() )", "mapEntryIndex doesn't index BgWeaponMap::GetRuntimeSize()\n\t%i not in [0, %i)", v10, v11) )
              __debugbreak();
          }
          BG_GetWeaponName(&this->m_entries[v9].weapon, output, 0x200u);
          if ( !references[v9] )
          {
            LODWORD(v10) = v9;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_weapon_map.cpp", 771, ASSERT_TYPE_ASSERT, "( references[mapEntryIndex] > 0 )", "Too many references found for weapon map entry %d, weapon %s", v10, output) )
              __debugbreak();
          }
          --references[v9];
        }
      }
      ++v4;
      ScriptableCommon_AssertCountsInitialized();
    }
    while ( v4 < g_scriptableWorldCounts.runtimeInstanceCount );
  }
}


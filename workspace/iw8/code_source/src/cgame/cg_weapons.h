/*
==============
CAssistTarget::~CAssistTarget
==============
*/

void __fastcall CAssistTarget::~CAssistTarget(CAssistTarget *this)
{
  ??1CAssistTarget@@UEAA@XZ(this);
}

/*
==============
CgWeaponSystem::ClearWeaponSystemCommon<CgWeaponSystemSP>
==============
*/

void __fastcall CgWeaponSystem::ClearWeaponSystemCommon<CgWeaponSystemSP>(const LocalClientNum_t localClientNum)
{
  ??$ClearWeaponSystemCommon@VCgWeaponSystemSP@@@CgWeaponSystem@@KAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CgWeaponSystem::GetWeaponSystemCommon<CgWeaponSystemSP>
==============
*/

CgWeaponSystemSP *__fastcall CgWeaponSystem::GetWeaponSystemCommon<CgWeaponSystemSP>(const LocalClientNum_t localClientNum)
{
  return ??$GetWeaponSystemCommon@VCgWeaponSystemSP@@@CgWeaponSystem@@KAPEAVCgWeaponSystemSP@@W4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CgWeaponSystem::GetWeaponSystemCommon<CgWeaponSystemMP>
==============
*/

CgWeaponSystemMP *__fastcall CgWeaponSystem::GetWeaponSystemCommon<CgWeaponSystemMP>(const LocalClientNum_t localClientNum)
{
  return ??$GetWeaponSystemCommon@VCgWeaponSystemMP@@@CgWeaponSystem@@KAPEAVCgWeaponSystemMP@@W4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CgWeaponSystem::AllocateWeaponSystemCommon<CgWeaponSystemMP>
==============
*/

void __fastcall CgWeaponSystem::AllocateWeaponSystemCommon<CgWeaponSystemMP>(HunkUser *hunkUser, const int maxLocalClients)
{
  ??$AllocateWeaponSystemCommon@VCgWeaponSystemMP@@@CgWeaponSystem@@KAXPEAUHunkUser@@H@Z(hunkUser, maxLocalClients);
}

/*
==============
CgWeaponSystem::~CgWeaponSystem
==============
*/

void __fastcall CgWeaponSystem::~CgWeaponSystem(CgWeaponSystem *this)
{
  ??1CgWeaponSystem@@MEAA@XZ(this);
}

/*
==============
CAssistTarget::CAssistTarget
==============
*/

void __fastcall CAssistTarget::CAssistTarget(CAssistTarget *this)
{
  ??0CAssistTarget@@QEAA@XZ(this);
}

/*
==============
CgWeaponSystem::ClearWeaponSystemCommon<CgWeaponSystemMP>
==============
*/

void __fastcall CgWeaponSystem::ClearWeaponSystemCommon<CgWeaponSystemMP>(const LocalClientNum_t localClientNum)
{
  ??$ClearWeaponSystemCommon@VCgWeaponSystemMP@@@CgWeaponSystem@@KAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CgWeaponSystem::AllocateWeaponSystemCommon<CgWeaponSystemSP>
==============
*/

void __fastcall CgWeaponSystem::AllocateWeaponSystemCommon<CgWeaponSystemSP>(HunkUser *hunkUser, const int maxLocalClients)
{
  ??$AllocateWeaponSystemCommon@VCgWeaponSystemSP@@@CgWeaponSystem@@KAXPEAUHunkUser@@H@Z(hunkUser, maxLocalClients);
}

/*
==============
CgWeaponSystem::FreeWeaponSystemCommon<CgWeaponSystemMP>
==============
*/

__int64 CgWeaponSystem::FreeWeaponSystemCommon<CgWeaponSystemMP>()
{
  return ??$FreeWeaponSystemCommon@VCgWeaponSystemMP@@@CgWeaponSystem@@KAXXZ();
}

/*
==============
CgWeaponSystem::FreeWeaponSystemCommon<CgWeaponSystemSP>
==============
*/

__int64 CgWeaponSystem::FreeWeaponSystemCommon<CgWeaponSystemSP>()
{
  return ??$FreeWeaponSystemCommon@VCgWeaponSystemSP@@@CgWeaponSystem@@KAXXZ();
}

/*
==============
CgWeaponSystem::GetWeaponSystem
==============
*/

CgWeaponSystem *__fastcall CgWeaponSystem::GetWeaponSystem(const LocalClientNum_t localClientNum)
{
  return ?GetWeaponSystem@CgWeaponSystem@@SAPEAV1@W4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CgWeaponSystem::GetWeaponSystemCommon<CgWeaponSystemMP>
==============
*/
CgWeaponSystem *CgWeaponSystem::GetWeaponSystemCommon<CgWeaponSystemMP>(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  __int64 v3; 
  __int64 v4; 
  int v6; 
  CgWeaponsType v7; 

  v1 = localClientNum;
  if ( CgWeaponSystem::ms_allocatedType != WEAPONS_TYPE_MP )
  {
    v7 = CgWeaponSystem::ms_allocatedType;
    v6 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapons.h", 541, ASSERT_TYPE_ASSERT, "(ms_allocatedType == SubSystem::WEAPON_SYSTEM_TYPE)", "%s\n\tTrying to access the weapon system for localClientNum %d but the weapon system type does not match-> System Type:%d  Allocated Type:%d\n", "ms_allocatedType == SubSystem::WEAPON_SYSTEM_TYPE", localClientNum, v6, v7) )
      __debugbreak();
  }
  if ( (unsigned int)v1 >= CgWeaponSystem::ms_allocatedCount )
  {
    LODWORD(v4) = CgWeaponSystem::ms_allocatedCount;
    LODWORD(v3) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapons.h", 542, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v3, v4) )
      __debugbreak();
  }
  if ( !CgWeaponSystem::ms_weaponSystemArray[v1] )
  {
    LODWORD(v4) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapons.h", 543, ASSERT_TYPE_ASSERT, "(ms_weaponSystemArray[localClientNum])", "%s\n\tTrying to access unallocated weapon system for localClientNum %d\n", "ms_weaponSystemArray[localClientNum]", v4) )
      __debugbreak();
  }
  return CgWeaponSystem::ms_weaponSystemArray[v1];
}

/*
==============
CgWeaponSystem::GetWeaponSystem
==============
*/
CgWeaponSystem *CgWeaponSystem::GetWeaponSystem(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  __int64 v3; 
  __int64 v4; 

  v1 = localClientNum;
  if ( CgWeaponSystem::ms_allocatedType == WEAPONS_TYPE_NONE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapons.h", 530, ASSERT_TYPE_ASSERT, "(ms_allocatedType != CgWeaponsType::WEAPONS_TYPE_NONE)", "%s\n\tTrying to access the weapon system for localClientNum %d but the weapon system type is not known\n", "ms_allocatedType != CgWeaponsType::WEAPONS_TYPE_NONE", localClientNum) )
    __debugbreak();
  if ( (unsigned int)v1 >= CgWeaponSystem::ms_allocatedCount )
  {
    LODWORD(v4) = CgWeaponSystem::ms_allocatedCount;
    LODWORD(v3) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapons.h", 531, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v3, v4) )
      __debugbreak();
  }
  if ( !CgWeaponSystem::ms_weaponSystemArray[v1] )
  {
    LODWORD(v4) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapons.h", 532, ASSERT_TYPE_ASSERT, "(ms_weaponSystemArray[localClientNum])", "%s\n\tTrying to access unallocated weapon system for localClientNum %d\n", "ms_weaponSystemArray[localClientNum]", v4) )
      __debugbreak();
  }
  return CgWeaponSystem::ms_weaponSystemArray[v1];
}

/*
==============
CAssistTarget::CAssistTarget
==============
*/
void CAssistTarget::CAssistTarget(CAssistTarget *this)
{
  ConeTargetInfo::ConeTargetInfo(this);
  this->m_target = NULL;
  this->__vftable = (CAssistTarget_vtbl *)&CAssistTarget::`vftable';
}

/*
==============
CAssistTarget::~CAssistTarget
==============
*/
void CAssistTarget::~CAssistTarget(CAssistTarget *this)
{
  this->__vftable = (CAssistTarget_vtbl *)&CAssistTarget::`vftable';
  ConeTargetInfo::~ConeTargetInfo(this);
}

/*
==============
CgWeaponSystem::AllocateWeaponSystemCommon<CgWeaponSystemMP>
==============
*/
void CgWeaponSystem::AllocateWeaponSystemCommon<CgWeaponSystemMP>(HunkUser *hunkUser, const int maxLocalClients)
{
  __int64 v3; 
  CgWeaponSystem *v4; 
  int v5; 
  CgWeaponSystem **v6; 
  __int64 v7; 
  CgWeaponsType v8; 
  int v9; 

  v3 = maxLocalClients;
  if ( CgWeaponSystem::ms_allocatedType )
  {
    v8 = CgWeaponSystem::ms_allocatedType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapons.h", 554, ASSERT_TYPE_ASSERT, "(ms_allocatedType == CgWeaponsType::WEAPONS_TYPE_NONE)", "%s\n\tTrying to allocate the weapon system but it has already been allocated. Allocated Type:%d\n", "ms_allocatedType == CgWeaponsType::WEAPONS_TYPE_NONE", v8) )
      __debugbreak();
  }
  if ( (unsigned int)v3 > 2 )
  {
    v9 = 2;
    LODWORD(v7) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapons.h", 555, ASSERT_TYPE_ASSERT, "( 0 ) <= ( maxLocalClients ) && ( maxLocalClients ) <= ( 2 )", "maxLocalClients not in [0, STATIC_MAX_LOCAL_CLIENTS]\n\t%i not in [%i, %i]", v7, 0i64, v9) )
      __debugbreak();
  }
  v4 = (CgWeaponSystem *)Mem_HunkUser_AllocInternal(hunkUser, 4832 * v3, 8ui64, "CgWeaponSystem::AllocateWeaponSystemCommon");
  memset_0(v4, 0, 4832 * v3);
  v5 = 0;
  if ( (int)v3 > 0 )
  {
    v6 = CgWeaponSystem::ms_weaponSystemArray;
    do
    {
      if ( *v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapons.h", 565, ASSERT_TYPE_ASSERT, "(!ms_weaponSystemArray[localClientIndex])", (const char *)&queryFormat, "!ms_weaponSystemArray[localClientIndex]") )
        __debugbreak();
      v4->__vftable = (CgWeaponSystem_vtbl *)&CgWeaponSystem::`vftable';
      v4->m_localClientNum = v5++;
      v4->m_numBulletDebugLines = 0;
      v4->__vftable = (CgWeaponSystem_vtbl *)&CgWeaponSystemMP::`vftable';
      v4->m_nextBulletId = 0;
      *v6 = v4;
      v4 = (CgWeaponSystem *)((char *)v4 + 4832);
      ++v6;
    }
    while ( v5 < (int)v3 );
  }
  CgWeaponSystem::ms_allocatedType = WEAPONS_TYPE_MP;
  CgWeaponSystem::ms_allocatedCount = v3;
}

/*
==============
CgWeaponSystem::ClearWeaponSystemCommon<CgWeaponSystemMP>
==============
*/
void CgWeaponSystem::ClearWeaponSystemCommon<CgWeaponSystemMP>(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  void **v2; 
  _DWORD *v3; 
  __int64 v4; 
  __int64 v5; 
  int v6; 
  CgWeaponsType v7; 

  v1 = localClientNum;
  if ( CgWeaponSystem::ms_allocatedType != WEAPONS_TYPE_MP )
  {
    v7 = CgWeaponSystem::ms_allocatedType;
    v6 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapons.h", 606, ASSERT_TYPE_ASSERT, "(ms_allocatedType == SubSystem::WEAPON_SYSTEM_TYPE)", "%s\n\tCgWeaponSystem::ClearWeaponSystemCommon: Trying to clear weapon system but the allocated type does not match. System Type:%d  Allocated Type:%d\n", "ms_allocatedType == SubSystem::WEAPON_SYSTEM_TYPE", v6, v7) )
      __debugbreak();
  }
  if ( (unsigned int)v1 >= CgWeaponSystem::ms_allocatedCount )
  {
    LODWORD(v5) = CgWeaponSystem::ms_allocatedCount;
    LODWORD(v4) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapons.h", 607, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v4, v5) )
      __debugbreak();
  }
  v2 = (void **)&CgWeaponSystem::ms_weaponSystemArray[v1];
  (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)*v2 + 208i64))(*v2, 0i64);
  memset_0(*v2, 0, 0x12E0ui64);
  v3 = *v2;
  *(_QWORD *)v3 = &CgWeaponSystem::`vftable';
  v3[2] = v1;
  v3[1203] = 0;
  v3[1204] = 0;
  *(_QWORD *)v3 = &CgWeaponSystemMP::`vftable';
}

/*
==============
CgWeaponSystem::FreeWeaponSystemCommon<CgWeaponSystemMP>
==============
*/
void CgWeaponSystem::FreeWeaponSystemCommon<CgWeaponSystemMP>()
{
  CgWeaponsType v0; 
  int v1; 
  void **v2; 
  int v3; 
  CgWeaponsType v4; 

  v0 = CgWeaponSystem::ms_allocatedType;
  if ( CgWeaponSystem::ms_allocatedType )
  {
    if ( CgWeaponSystem::ms_allocatedType == WEAPONS_TYPE_MP )
      goto LABEL_7;
    v4 = CgWeaponSystem::ms_allocatedType;
    v3 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapons.h", 579, ASSERT_TYPE_ASSERT, "(ms_allocatedType == CgWeaponsType::WEAPONS_TYPE_NONE || ms_allocatedType == SubSystem::WEAPON_SYSTEM_TYPE)", "%s\n\tTrying to free weapon system but the allocated type does not match. System Type:%d  Allocated Type:%d\n", "ms_allocatedType == CgWeaponsType::WEAPONS_TYPE_NONE || ms_allocatedType == SubSystem::WEAPON_SYSTEM_TYPE", v3, v4) )
      __debugbreak();
    v0 = CgWeaponSystem::ms_allocatedType;
  }
  if ( v0 != WEAPONS_TYPE_MP )
  {
    CgWeaponSystem::ms_allocatedCount = 0;
    CgWeaponSystem::ms_allocatedType = WEAPONS_TYPE_NONE;
    return;
  }
LABEL_7:
  if ( CgWeaponSystem::ms_allocatedCount <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapons.h", 583, ASSERT_TYPE_ASSERT, "(ms_allocatedCount > 0)", "%s\n\tCgWeaponSystem::FreeWeaponSystemCommon: Trying to free weapon system but no weapon system has been allocated\n", "ms_allocatedCount > 0") )
    __debugbreak();
  v1 = CgWeaponSystem::ms_allocatedCount - 1;
  if ( CgWeaponSystem::ms_allocatedCount - 1 < 0 )
  {
    CgWeaponSystem::ms_allocatedCount = 0;
    CgWeaponSystem::ms_allocatedType = WEAPONS_TYPE_NONE;
  }
  else
  {
    v2 = (void **)&CgWeaponSystem::ms_weaponSystemArray[v1];
    do
    {
      (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)*v2 + 208i64))(*v2, 0i64);
      DebugWipe(*v2, 0x12E0ui64);
      --v1;
      *v2-- = NULL;
    }
    while ( v1 >= 0 );
    CgWeaponSystem::ms_allocatedCount = 0;
    CgWeaponSystem::ms_allocatedType = WEAPONS_TYPE_NONE;
  }
}

/*
==============
CgWeaponSystem::~CgWeaponSystem
==============
*/
void CgWeaponSystem::~CgWeaponSystem(CgWeaponSystem *this)
{
  this->__vftable = (CgWeaponSystem_vtbl *)&CgWeaponSystem::`vftable';
}

/*
==============
CgWeaponSystem::GetWeaponSystemCommon<CgWeaponSystemSP>
==============
*/
CgWeaponSystem *CgWeaponSystem::GetWeaponSystemCommon<CgWeaponSystemSP>(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  __int64 v3; 
  __int64 v4; 
  int v6; 
  CgWeaponsType v7; 

  v1 = localClientNum;
  if ( CgWeaponSystem::ms_allocatedType != WEAPONS_TYPE_SP )
  {
    v7 = CgWeaponSystem::ms_allocatedType;
    v6 = 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapons.h", 541, ASSERT_TYPE_ASSERT, "(ms_allocatedType == SubSystem::WEAPON_SYSTEM_TYPE)", "%s\n\tTrying to access the weapon system for localClientNum %d but the weapon system type does not match-> System Type:%d  Allocated Type:%d\n", "ms_allocatedType == SubSystem::WEAPON_SYSTEM_TYPE", localClientNum, v6, v7) )
      __debugbreak();
  }
  if ( (unsigned int)v1 >= CgWeaponSystem::ms_allocatedCount )
  {
    LODWORD(v4) = CgWeaponSystem::ms_allocatedCount;
    LODWORD(v3) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapons.h", 542, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v3, v4) )
      __debugbreak();
  }
  if ( !CgWeaponSystem::ms_weaponSystemArray[v1] )
  {
    LODWORD(v4) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapons.h", 543, ASSERT_TYPE_ASSERT, "(ms_weaponSystemArray[localClientNum])", "%s\n\tTrying to access unallocated weapon system for localClientNum %d\n", "ms_weaponSystemArray[localClientNum]", v4) )
      __debugbreak();
  }
  return CgWeaponSystem::ms_weaponSystemArray[v1];
}

/*
==============
CgWeaponSystem::AllocateWeaponSystemCommon<CgWeaponSystemSP>
==============
*/
void CgWeaponSystem::AllocateWeaponSystemCommon<CgWeaponSystemSP>(HunkUser *hunkUser, const int maxLocalClients)
{
  __int64 v3; 
  CgWeaponSystem *v4; 
  int v5; 
  CgWeaponSystem **v6; 
  __int64 v7; 
  CgWeaponsType v8; 
  int v9; 

  v3 = maxLocalClients;
  if ( CgWeaponSystem::ms_allocatedType )
  {
    v8 = CgWeaponSystem::ms_allocatedType;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapons.h", 554, ASSERT_TYPE_ASSERT, "(ms_allocatedType == CgWeaponsType::WEAPONS_TYPE_NONE)", "%s\n\tTrying to allocate the weapon system but it has already been allocated. Allocated Type:%d\n", "ms_allocatedType == CgWeaponsType::WEAPONS_TYPE_NONE", v8) )
      __debugbreak();
  }
  if ( (unsigned int)v3 > 2 )
  {
    v9 = 2;
    LODWORD(v7) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapons.h", 555, ASSERT_TYPE_ASSERT, "( 0 ) <= ( maxLocalClients ) && ( maxLocalClients ) <= ( 2 )", "maxLocalClients not in [0, STATIC_MAX_LOCAL_CLIENTS]\n\t%i not in [%i, %i]", v7, 0i64, v9) )
      __debugbreak();
  }
  v4 = (CgWeaponSystem *)Mem_HunkUser_AllocInternal(hunkUser, 5600 * v3, 8ui64, "CgWeaponSystem::AllocateWeaponSystemCommon");
  memset_0(v4, 0, 5600 * v3);
  v5 = 0;
  if ( (int)v3 > 0 )
  {
    v6 = CgWeaponSystem::ms_weaponSystemArray;
    do
    {
      if ( *v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapons.h", 565, ASSERT_TYPE_ASSERT, "(!ms_weaponSystemArray[localClientIndex])", (const char *)&queryFormat, "!ms_weaponSystemArray[localClientIndex]") )
        __debugbreak();
      v4->__vftable = (CgWeaponSystem_vtbl *)&CgWeaponSystem::`vftable';
      v4->m_localClientNum = v5++;
      v4->m_numBulletDebugLines = 0;
      v4->__vftable = (CgWeaponSystem_vtbl *)&CgWeaponSystemSP::`vftable';
      v4->m_nextBulletId = 0;
      *v6 = v4;
      v4 = (CgWeaponSystem *)((char *)v4 + 5600);
      ++v6;
    }
    while ( v5 < (int)v3 );
  }
  CgWeaponSystem::ms_allocatedType = WEAPONS_TYPE_SP;
  CgWeaponSystem::ms_allocatedCount = v3;
}

/*
==============
CgWeaponSystem::FreeWeaponSystemCommon<CgWeaponSystemSP>
==============
*/
void CgWeaponSystem::FreeWeaponSystemCommon<CgWeaponSystemSP>()
{
  CgWeaponsType v0; 
  int v1; 
  void **v2; 
  int v3; 
  CgWeaponsType v4; 

  v0 = CgWeaponSystem::ms_allocatedType;
  if ( CgWeaponSystem::ms_allocatedType )
  {
    if ( CgWeaponSystem::ms_allocatedType == WEAPONS_TYPE_SP )
      goto LABEL_7;
    v4 = CgWeaponSystem::ms_allocatedType;
    v3 = 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapons.h", 579, ASSERT_TYPE_ASSERT, "(ms_allocatedType == CgWeaponsType::WEAPONS_TYPE_NONE || ms_allocatedType == SubSystem::WEAPON_SYSTEM_TYPE)", "%s\n\tTrying to free weapon system but the allocated type does not match. System Type:%d  Allocated Type:%d\n", "ms_allocatedType == CgWeaponsType::WEAPONS_TYPE_NONE || ms_allocatedType == SubSystem::WEAPON_SYSTEM_TYPE", v3, v4) )
      __debugbreak();
    v0 = CgWeaponSystem::ms_allocatedType;
  }
  if ( v0 != WEAPONS_TYPE_SP )
  {
    CgWeaponSystem::ms_allocatedCount = 0;
    CgWeaponSystem::ms_allocatedType = WEAPONS_TYPE_NONE;
    return;
  }
LABEL_7:
  if ( CgWeaponSystem::ms_allocatedCount <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapons.h", 583, ASSERT_TYPE_ASSERT, "(ms_allocatedCount > 0)", "%s\n\tCgWeaponSystem::FreeWeaponSystemCommon: Trying to free weapon system but no weapon system has been allocated\n", "ms_allocatedCount > 0") )
    __debugbreak();
  v1 = CgWeaponSystem::ms_allocatedCount - 1;
  if ( CgWeaponSystem::ms_allocatedCount - 1 < 0 )
  {
    CgWeaponSystem::ms_allocatedCount = 0;
    CgWeaponSystem::ms_allocatedType = WEAPONS_TYPE_NONE;
  }
  else
  {
    v2 = (void **)&CgWeaponSystem::ms_weaponSystemArray[v1];
    do
    {
      (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)*v2 + 208i64))(*v2, 0i64);
      DebugWipe(*v2, 0x15E0ui64);
      --v1;
      *v2-- = NULL;
    }
    while ( v1 >= 0 );
    CgWeaponSystem::ms_allocatedCount = 0;
    CgWeaponSystem::ms_allocatedType = WEAPONS_TYPE_NONE;
  }
}

/*
==============
CgWeaponSystem::ClearWeaponSystemCommon<CgWeaponSystemSP>
==============
*/
void CgWeaponSystem::ClearWeaponSystemCommon<CgWeaponSystemSP>(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  void **v2; 
  _DWORD *v3; 
  __int64 v4; 
  __int64 v5; 
  int v6; 
  CgWeaponsType v7; 

  v1 = localClientNum;
  if ( CgWeaponSystem::ms_allocatedType != WEAPONS_TYPE_SP )
  {
    v7 = CgWeaponSystem::ms_allocatedType;
    v6 = 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapons.h", 606, ASSERT_TYPE_ASSERT, "(ms_allocatedType == SubSystem::WEAPON_SYSTEM_TYPE)", "%s\n\tCgWeaponSystem::ClearWeaponSystemCommon: Trying to clear weapon system but the allocated type does not match. System Type:%d  Allocated Type:%d\n", "ms_allocatedType == SubSystem::WEAPON_SYSTEM_TYPE", v6, v7) )
      __debugbreak();
  }
  if ( (unsigned int)v1 >= CgWeaponSystem::ms_allocatedCount )
  {
    LODWORD(v5) = CgWeaponSystem::ms_allocatedCount;
    LODWORD(v4) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapons.h", 607, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v4, v5) )
      __debugbreak();
  }
  v2 = (void **)&CgWeaponSystem::ms_weaponSystemArray[v1];
  (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)*v2 + 208i64))(*v2, 0i64);
  memset_0(*v2, 0, 0x15E0ui64);
  v3 = *v2;
  *(_QWORD *)v3 = &CgWeaponSystem::`vftable';
  v3[2] = v1;
  v3[1203] = 0;
  v3[1204] = 0;
  *(_QWORD *)v3 = &CgWeaponSystemSP::`vftable';
}


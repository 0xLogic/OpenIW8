/*
==============
CgWeaponSystemMP::ClearWeaponSystem
==============
*/

void __fastcall CgWeaponSystemMP::ClearWeaponSystem(const LocalClientNum_t localClientNum)
{
  ?ClearWeaponSystem@CgWeaponSystemMP@@SAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CgWeaponSystemMP::GetWeaponSystemMP
==============
*/

CgWeaponSystemMP *__fastcall CgWeaponSystemMP::GetWeaponSystemMP(const LocalClientNum_t localClientNum)
{
  return ?GetWeaponSystemMP@CgWeaponSystemMP@@SAPEAV1@W4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CgWeaponSystemMP::GetWeaponSystemMP
==============
*/
CgWeaponSystem *CgWeaponSystemMP::GetWeaponSystemMP(const LocalClientNum_t localClientNum)
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
CgWeaponSystemMP::ClearWeaponSystem
==============
*/
void CgWeaponSystemMP::ClearWeaponSystem(const LocalClientNum_t localClientNum)
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


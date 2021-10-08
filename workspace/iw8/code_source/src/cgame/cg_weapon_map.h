/*
==============
CgWeaponMap::GetInstance
==============
*/

CgWeaponMap *__fastcall CgWeaponMap::GetInstance(const LocalClientNum_t localClientNum)
{
  return ?GetInstance@CgWeaponMap@@SAPEAV1@W4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CgWeaponMap::GetInstance
==============
*/
CgWeaponMap *CgWeaponMap::GetInstance(const LocalClientNum_t localClientNum)
{
  CgWeaponMap **v1; 

  v1 = &CgWeaponMap::ms_instance[localClientNum];
  if ( !*v1 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_weapon_map.h", 60, ASSERT_TYPE_ASSERT, "(ms_instance[localClientNum])", (const char *)&queryFormat, "ms_instance[localClientNum]") )
    __debugbreak();
  return *v1;
}


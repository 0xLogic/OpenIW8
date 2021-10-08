/*
==============
GTurretSP::GetTurretSP
==============
*/

GTurretSP *__fastcall GTurretSP::GetTurretSP(const BgObjectHandle<GTurret> *r_turretHandle)
{
  return ?GetTurretSP@GTurretSP@@SAPEAV1@AEBV?$BgObjectHandle@VGTurret@@@@@Z(r_turretHandle);
}

/*
==============
GTurretSP::GetTurretSP
==============
*/
GTurret *GTurretSP::GetTurretSP(const BgObjectHandle<GTurret> *r_turretHandle)
{
  if ( (_BYTE)GTurret::ms_allocatedType != HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game_sp\\g_turret_sp.h", 76, ASSERT_TYPE_ASSERT, "( ms_allocatedType == ALLOCATION_TYPE )", (const char *)&queryFormat, "ms_allocatedType == ALLOCATION_TYPE") )
    __debugbreak();
  return GTurret::GetTurret(r_turretHandle);
}


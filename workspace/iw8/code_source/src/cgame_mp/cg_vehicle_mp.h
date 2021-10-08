/*
==============
CgVehicleSystemMP::GetScriptUser
==============
*/

int __fastcall CgVehicleSystemMP::GetScriptUser(CgVehicleSystemMP *this)
{
  return ?GetScriptUser@CgVehicleSystemMP@@UEAAHXZ(this);
}

/*
==============
CgVehicleSystemMP::ClearVehicleSystem
==============
*/

void __fastcall CgVehicleSystemMP::ClearVehicleSystem(const LocalClientNum_t localClientNum)
{
  ?ClearVehicleSystem@CgVehicleSystemMP@@SAXW4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CgVehicleSystemMP::GetVehicleSystemMP
==============
*/

CgVehicleSystemMP *__fastcall CgVehicleSystemMP::GetVehicleSystemMP(const LocalClientNum_t localClientNum)
{
  return ?GetVehicleSystemMP@CgVehicleSystemMP@@SAPEAV1@W4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CgVehicleSystemMP::GetVehicleSystemMP
==============
*/
CgVehicleSystem *CgVehicleSystemMP::GetVehicleSystemMP(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  __int64 v3; 
  __int64 v4; 

  v1 = localClientNum;
  if ( (_BYTE)CgVehicleSystem::ms_allocatedType != HALF_HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.h", 417, ASSERT_TYPE_ASSERT, "(ms_allocatedType == SubSystem::VEHICLE_SYSTEM_TYPE)", "%s\n\tTrying to access the vehicle system for localClientNum %d but the vehicle system type does not match-> System Type:%d  Allocated Type:%d\n", "ms_allocatedType == SubSystem::VEHICLE_SYSTEM_TYPE", localClientNum, 2, (unsigned __int8)CgVehicleSystem::ms_allocatedType) )
    __debugbreak();
  if ( (unsigned int)v1 >= CgVehicleSystem::ms_allocatedCount )
  {
    LODWORD(v4) = CgVehicleSystem::ms_allocatedCount;
    LODWORD(v3) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.h", 418, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v3, v4) )
      __debugbreak();
  }
  if ( !CgVehicleSystem::ms_vehicleSystemArray[v1] )
  {
    LODWORD(v4) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.h", 419, ASSERT_TYPE_ASSERT, "(ms_vehicleSystemArray[localClientNum])", "%s\n\tTrying to access unallocated vehicle system for localClientNum %d\n", "ms_vehicleSystemArray[localClientNum]", v4) )
      __debugbreak();
  }
  return CgVehicleSystem::ms_vehicleSystemArray[v1];
}

/*
==============
CgVehicleSystemMP::ClearVehicleSystem
==============
*/
void CgVehicleSystemMP::ClearVehicleSystem(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  void **v2; 
  __int64 v3; 
  __int64 v4; 
  int v5; 
  int v6; 

  v1 = localClientNum;
  if ( (_BYTE)CgVehicleSystem::ms_allocatedType != HALF_HALF )
  {
    v6 = (unsigned __int8)CgVehicleSystem::ms_allocatedType;
    v5 = 2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.h", 482, ASSERT_TYPE_ASSERT, "(ms_allocatedType == SubSystem::VEHICLE_SYSTEM_TYPE)", "%s\n\tCgVehicleSystem::ClearVehicleSystemCommon: Trying to clear vehicle system but the allocated type does not match. System Type:%d  Allocated Type:%d\n", "ms_allocatedType == SubSystem::VEHICLE_SYSTEM_TYPE", v5, v6) )
      __debugbreak();
  }
  if ( (unsigned int)v1 >= CgVehicleSystem::ms_allocatedCount )
  {
    LODWORD(v4) = CgVehicleSystem::ms_allocatedCount;
    LODWORD(v3) = v1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.h", 483, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v3, v4) )
      __debugbreak();
  }
  v2 = (void **)&CgVehicleSystem::ms_vehicleSystemArray[v1];
  (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)*v2 + 536i64))(*v2, 0i64);
  memset_0(*v2, 0, 0x11A918ui64);
  CgVehicleSystemMP::CgVehicleSystemMP((CgVehicleSystemMP *)*v2, (const LocalClientNum_t)v1);
  CgVehicleSystem::TreadBoneAnimReset();
}

/*
==============
CgVehicleSystemMP::GetScriptUser
==============
*/
__int64 CgVehicleSystemMP::GetScriptUser(CgVehicleSystemMP *this)
{
  return 0i64;
}


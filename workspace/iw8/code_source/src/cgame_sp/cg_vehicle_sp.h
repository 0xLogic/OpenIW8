/*
==============
CgVehicleSystemSP::GetEntityDObj
==============
*/

DObj *__fastcall CgVehicleSystemSP::GetEntityDObj(CgVehicleSystemSP *this, const centity_t *cent)
{
  return ?GetEntityDObj@CgVehicleSystemSP@@QEBAPEAUDObj@@PEBUcentity_t@@@Z(this, cent);
}

/*
==============
CgVehicleSystemSP::GetVehicleSystemSP
==============
*/

CgVehicleSystemSP *__fastcall CgVehicleSystemSP::GetVehicleSystemSP(const LocalClientNum_t localClientNum)
{
  return ?GetVehicleSystemSP@CgVehicleSystemSP@@SAPEAV1@W4LocalClientNum_t@@@Z(localClientNum);
}

/*
==============
CgVehicleSystemSP::GetScriptUser
==============
*/

int __fastcall CgVehicleSystemSP::GetScriptUser(CgVehicleSystemSP *this)
{
  return ?GetScriptUser@CgVehicleSystemSP@@UEAAHXZ(this);
}

/*
==============
CgVehicleSystemSP::GetVehicleSystemSP
==============
*/
CgVehicleSystem *CgVehicleSystemSP::GetVehicleSystemSP(const LocalClientNum_t localClientNum)
{
  __int64 v1; 
  __int64 v3; 
  __int64 v4; 

  v1 = localClientNum;
  if ( (_BYTE)CgVehicleSystem::ms_allocatedType != HALF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.h", 417, ASSERT_TYPE_ASSERT, "(ms_allocatedType == SubSystem::VEHICLE_SYSTEM_TYPE)", "%s\n\tTrying to access the vehicle system for localClientNum %d but the vehicle system type does not match-> System Type:%d  Allocated Type:%d\n", "ms_allocatedType == SubSystem::VEHICLE_SYSTEM_TYPE", localClientNum, 1, (unsigned __int8)CgVehicleSystem::ms_allocatedType) )
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
CgVehicleSystemSP::GetEntityDObj
==============
*/
DObj *CgVehicleSystemSP::GetEntityDObj(CgVehicleSystemSP *this, const centity_t *cent)
{
  unsigned int number; 
  LocalClientNum_t m_localClientNum; 
  unsigned int v6; 
  unsigned int v7; 
  __int64 v9; 
  __int64 v10; 

  if ( !cent && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_vehicle_sp.h", 109, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( (cent->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame_sp\\cg_vehicle_sp.h", 110, ASSERT_TYPE_ASSERT, "(CENextValid( cent ))", (const char *)&queryFormat, "CENextValid( cent )") )
    __debugbreak();
  number = cent->nextState.number;
  m_localClientNum = this->m_localClientNum;
  if ( number > 0x9E4 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 55, ASSERT_TYPE_ASSERT, "( ( handle >= 0 && handle < ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) ) )", "%s\n\t( handle ) = %i", "( handle >= 0 && handle < ((((((((((((( 2048 ) + 0)) + NUM_WEAPON_HANDS) + 64 - 1) + 1) + 1) + 1) + 1) + CLIENT_MODEL_MAX_COUNT - 1) + 1) + ( 32 ) - 1) + 1) )", number) )
    __debugbreak();
  if ( (unsigned int)m_localClientNum >= LOCAL_CLIENT_COUNT )
  {
    LODWORD(v10) = 2;
    LODWORD(v9) = m_localClientNum;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 58, ASSERT_TYPE_ASSERT, "(unsigned)( localClientIndex ) < (unsigned)( (2) )", "localClientIndex doesn't index MAX_DOBJ_CLIENTS\n\t%i not in [0, %i)", v9, v10) )
      __debugbreak();
  }
  v6 = 2533 * m_localClientNum + number;
  if ( v6 >= 0x13CA )
  {
    LODWORD(v10) = v6;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 62, ASSERT_TYPE_ASSERT, "( ( (unsigned)handle < ( sizeof( *array_counter( clientObjMap ) ) + 0 ) ) )", "%s\n\t( handle ) = %i", "( (unsigned)handle < ( sizeof( *array_counter( clientObjMap ) ) + 0 ) )", v10) )
      __debugbreak();
  }
  v7 = clientObjMap[v6];
  if ( !v7 )
    return 0i64;
  if ( v7 >= (unsigned int)s_objCount )
  {
    LODWORD(v10) = v7;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\qcommon\\dobj_management.h", 64, ASSERT_TYPE_ASSERT, "( ( !objIndex || ( (unsigned)objIndex < s_objCount ) ) )", "%s\n\t( objIndex ) = %i", "( !objIndex || ( (unsigned)objIndex < s_objCount ) )", v10) )
      __debugbreak();
  }
  return (DObj *)s_objBuf[v7];
}

/*
==============
CgVehicleSystemSP::GetScriptUser
==============
*/
__int64 CgVehicleSystemSP::GetScriptUser(CgVehicleSystemSP *this)
{
  return 1i64;
}


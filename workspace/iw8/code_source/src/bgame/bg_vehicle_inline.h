/*
==============
BG_GetDObjFromEntityNumber
==============
*/

DObj *__fastcall BG_GetDObjFromEntityNumber(const BGVehicles *bgVehicles, int entityNum)
{
  return ?BG_GetDObjFromEntityNumber@@YAPEAUDObj@@PEBVBGVehicles@@H@Z(bgVehicles, entityNum);
}

/*
==============
BG_GetDObjFromEntityNumber
==============
*/
DObj *BG_GetDObjFromEntityNumber(const BGVehicles *bgVehicles, int entityNum)
{
  __int64 v3; 
  __int64 v4; 
  CgEntitySystem *v5; 
  __int64 v6; 
  __int64 v8; 
  __int64 v9; 

  v3 = entityNum;
  if ( !bgVehicles->IsClient((BGVehicles *)bgVehicles) )
    return GVehicles::GetDObjFromEntityNumber((GVehicles *)bgVehicles, v3);
  v4 = SLODWORD(bgVehicles[1].__vftable);
  if ( !(_BYTE)CgEntitySystem::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 288, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tTrying to access the entity system for localClientNum %d but the entity system type is not known\n", "ms_allocatedType != GameModeType::NONE", v4) )
    __debugbreak();
  if ( (unsigned int)v4 >= CgEntitySystem::ms_allocatedCount )
  {
    LODWORD(v9) = CgEntitySystem::ms_allocatedCount;
    LODWORD(v8) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 289, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v8, v9) )
      __debugbreak();
  }
  if ( !CgEntitySystem::ms_entitySystemArray[v4] )
  {
    LODWORD(v9) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 290, ASSERT_TYPE_ASSERT, "(ms_entitySystemArray[localClientNum])", "%s\n\tTrying to access unallocated entity system for localClientNum %d\n", "ms_entitySystemArray[localClientNum]", v9) )
      __debugbreak();
  }
  v5 = CgEntitySystem::ms_entitySystemArray[v4];
  if ( (unsigned int)v3 >= 0x800 )
  {
    LODWORD(v9) = 2048;
    LODWORD(v8) = v3;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_entity.h", 518, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( (( 2048 ) + 0) )", "entityIndex doesn't index MAX_LOCAL_CENTITIES\n\t%i not in [0, %i)", v8, v9) )
      __debugbreak();
  }
  v6 = (__int64)&v5->m_entities[v3];
  if ( !v6 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle_inline.h", 31, ASSERT_TYPE_ASSERT, "(cent)", (const char *)&queryFormat, "cent") )
    __debugbreak();
  if ( (*(_BYTE *)(v6 + 648) & 1) != 0 )
    return CG_Vehicle_GetEntityDObj((const CgVehicleSystem *)bgVehicles, (const centity_t *)v6);
  else
    return 0i64;
}


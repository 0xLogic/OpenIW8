/*
==============
LUIOnEntityElementSpawnerSP::UpdateFiltersForActor
==============
*/

void __fastcall LUIOnEntityElementSpawnerSP::UpdateFiltersForActor(const LocalClientNum_t localClientNum, const int entityNum)
{
  ?UpdateFiltersForActor@LUIOnEntityElementSpawnerSP@@SAXW4LocalClientNum_t@@H@Z(localClientNum, entityNum);
}

/*
==============
LUIOnEntityElementSpawnerSP::UpdateFiltersForVehicle
==============
*/

void __fastcall LUIOnEntityElementSpawnerSP::UpdateFiltersForVehicle(const LocalClientNum_t localClientNum, const int entityNum)
{
  ?UpdateFiltersForVehicle@LUIOnEntityElementSpawnerSP@@SAXW4LocalClientNum_t@@H@Z(localClientNum, entityNum);
}

/*
==============
LUIOnEntityElementSpawnerSP::UpdateFiltersForActor
==============
*/
void LUIOnEntityElementSpawnerSP::UpdateFiltersForActor(const LocalClientNum_t localClientNum, const int entityNum)
{
  centity_t *Entity; 

  Entity = CG_GetEntity(localClientNum, entityNum);
  if ( (Entity->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui_sp\\lui_customelement_onentityspawner_sp.cpp", 18, ASSERT_TYPE_ASSERT, "(CENextValid( entity ))", (const char *)&queryFormat, "CENextValid( entity )") )
    __debugbreak();
  if ( ((Entity->nextState.eType - 19) & 0xFFFD) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui_sp\\lui_customelement_onentityspawner_sp.cpp", 19, ASSERT_TYPE_ASSERT, "(entity->nextState.eType == ET_ACTOR || entity->nextState.eType == ET_ACTOR_CORPSE)", (const char *)&queryFormat, "entity->nextState.eType == ET_ACTOR || entity->nextState.eType == ET_ACTOR_CORPSE") )
    __debugbreak();
  LUIOnEntityElementSpawner::InsertFilteredEntity(NEUTRAL, entityNum);
}

/*
==============
LUIOnEntityElementSpawnerSP::UpdateFiltersForVehicle
==============
*/
void LUIOnEntityElementSpawnerSP::UpdateFiltersForVehicle(const LocalClientNum_t localClientNum, const int entityNum)
{
  __int64 v2; 
  centity_t *Entity; 
  team_t v5; 
  __int64 v6; 
  __int64 v7; 
  int v8; 
  int v9; 
  int v10; 

  v2 = localClientNum;
  Entity = CG_GetEntity(localClientNum, entityNum);
  if ( (Entity->flags & 1) == 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui_sp\\lui_customelement_onentityspawner_sp.cpp", 30, ASSERT_TYPE_ASSERT, "(CENextValid( entity ))", (const char *)&queryFormat, "CENextValid( entity )") )
    __debugbreak();
  if ( Entity->nextState.eType != ET_VEHICLE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\lui_sp\\lui_customelement_onentityspawner_sp.cpp", 31, ASSERT_TYPE_ASSERT, "(entity->nextState.eType == ET_VEHICLE)", (const char *)&queryFormat, "entity->nextState.eType == ET_VEHICLE") )
    __debugbreak();
  if ( (_BYTE)CgVehicleSystem::ms_allocatedType != HALF )
  {
    v10 = (unsigned __int8)CgVehicleSystem::ms_allocatedType;
    v9 = 1;
    v8 = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.h", 417, ASSERT_TYPE_ASSERT, "(ms_allocatedType == SubSystem::VEHICLE_SYSTEM_TYPE)", "%s\n\tTrying to access the vehicle system for localClientNum %d but the vehicle system type does not match-> System Type:%d  Allocated Type:%d\n", "ms_allocatedType == SubSystem::VEHICLE_SYSTEM_TYPE", v8, v9, v10) )
      __debugbreak();
  }
  if ( (unsigned int)v2 >= CgVehicleSystem::ms_allocatedCount )
  {
    LODWORD(v7) = CgVehicleSystem::ms_allocatedCount;
    LODWORD(v6) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.h", 418, ASSERT_TYPE_ASSERT, "(unsigned)( localClientNum ) < (unsigned)( ms_allocatedCount )", "localClientNum doesn't index ms_allocatedCount\n\t%i not in [0, %i)", v6, v7) )
      __debugbreak();
  }
  if ( !CgVehicleSystem::ms_vehicleSystemArray[v2] )
  {
    LODWORD(v7) = v2;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\cgame\\cg_vehicle.h", 419, ASSERT_TYPE_ASSERT, "(ms_vehicleSystemArray[localClientNum])", "%s\n\tTrying to access unallocated vehicle system for localClientNum %d\n", "ms_vehicleSystemArray[localClientNum]", v7) )
      __debugbreak();
  }
  v5 = CgVehicleSystem::ms_vehicleSystemArray[v2]->GetTeam(CgVehicleSystem::ms_vehicleSystemArray[v2], &Entity->nextState);
  LUIOnEntityElementSpawner::InsertFilteredEntity((const EntityFilter)((v5 != TEAM_TWO) + 2), entityNum);
}


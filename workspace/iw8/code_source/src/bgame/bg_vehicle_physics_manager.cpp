/*
==============
BgVehiclePhysicsManager::GetObjectByPhysicsBodyId
==============
*/

const BgVehiclePhysics *__fastcall BgVehiclePhysicsManager::GetObjectByPhysicsBodyId(BgVehiclePhysicsManager *this, BGVehicles *vehicleSystem, Physics_WorldId worldId, unsigned int bodyId)
{
  return ?GetObjectByPhysicsBodyId@BgVehiclePhysicsManager@@QEBAPEBVBgVehiclePhysics@@PEAVBGVehicles@@W4Physics_WorldId@@I@Z(this, vehicleSystem, worldId, bodyId);
}

/*
==============
BgVehiclePhysicsManager::GetObjectByPhysicsBodyId
==============
*/

BgVehiclePhysics *__fastcall BgVehiclePhysicsManager::GetObjectByPhysicsBodyId(BgVehiclePhysicsManager *this, BGVehicles *vehicleSystem, Physics_WorldId worldId, unsigned int bodyId)
{
  return ?GetObjectByPhysicsBodyId@BgVehiclePhysicsManager@@QEAAPEAVBgVehiclePhysics@@PEAVBGVehicles@@W4Physics_WorldId@@I@Z(this, vehicleSystem, worldId, bodyId);
}

/*
==============
BgVehiclePhysicsManager::GetObjectByPhysicsBodyId
==============
*/
BgVehiclePhysics *BgVehiclePhysicsManager::GetObjectByPhysicsBodyId(BgVehiclePhysicsManager *this, BGVehicles *vehicleSystem, Physics_WorldId worldId, unsigned int bodyId)
{
  int BodyUserData; 
  unsigned int v7; 
  char v9[24]; 
  char v10; 

  BodyUserData = PhysicsVehicle_GetBodyUserData(worldId, bodyId);
  v7 = vehicleSystem->PhysicsExtractIdFromPhysicsUserData(vehicleSystem, BodyUserData, (entityType_s *)v9, (bool *)&v10);
  if ( BGVehicles::PhysicsIsValid(v7) )
    return BgVehiclePhysicsManager::GetObjectById(this, v7);
  else
    return 0i64;
}

/*
==============
BgVehiclePhysicsManager::GetObjectByPhysicsBodyId
==============
*/
BgVehiclePhysicsObjectBuffer *BgVehiclePhysicsManager::GetObjectByPhysicsBodyId(BgVehiclePhysicsManager *this, BGVehicles *vehicleSystem, Physics_WorldId worldId, unsigned int bodyId)
{
  int BodyUserData; 
  unsigned int v7; 
  unsigned int v8; 
  __int64 v10; 
  int v11; 
  char v12[24]; 
  char v13; 

  BodyUserData = PhysicsVehicle_GetBodyUserData(worldId, bodyId);
  v7 = vehicleSystem->PhysicsExtractIdFromPhysicsUserData(vehicleSystem, BodyUserData, (entityType_s *)v12, (bool *)&v13);
  if ( !BGVehicles::PhysicsIsValid(v7) )
    return 0i64;
  if ( !BGVehicles::PhysicsIsValid(v7) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_manager.inl", 101, ASSERT_TYPE_ASSERT, "(BGVehicles::PhysicsIsValid( vehId ))", (const char *)&queryFormat, "BGVehicles::PhysicsIsValid( vehId )") )
    __debugbreak();
  v8 = v7 - 1;
  if ( v8 >= 0x80 )
  {
    v11 = 128;
    LODWORD(v10) = v8;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_manager.inl", 82, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( (1 << 7) )", "index doesn't index MAX_VEHICLES\n\t%i not in [0, %i)", v10, v11) )
      __debugbreak();
  }
  return &this->m_vehiclePhysicsObjects[v8];
}


/*
==============
BgVehiclePhysicsManager::GetOrCreateComponent<BgVehicleComponentPathFollower>
==============
*/

BgVehicleComponentPathFollower *__fastcall BgVehiclePhysicsManager::GetOrCreateComponent<BgVehicleComponentPathFollower>(BgVehiclePhysicsManager *this, BGVehicles *vehicleSystem, unsigned int vehicleId, unsigned int compType, VehiclePhysicsComponentId *outCompId)
{
  return ??$GetOrCreateComponent@VBgVehicleComponentPathFollower@@@BgVehiclePhysicsManager@@QEAAPEAVBgVehicleComponentPathFollower@@PEAVBGVehicles@@IIPEAUVehiclePhysicsComponentId@@@Z(this, vehicleSystem, vehicleId, compType, outCompId);
}

/*
==============
BgVehiclePhysicsManager::GetObjectForPmove
==============
*/

BgVehiclePhysics *__fastcall BgVehiclePhysicsManager::GetObjectForPmove(BgVehiclePhysicsManager *this, const BgVehiclePhysics *vehObj)
{
  return ?GetObjectForPmove@BgVehiclePhysicsManager@@QEBAPEAVBgVehiclePhysics@@PEBV2@@Z(this, vehObj);
}

/*
==============
BgVehiclePhysicsManager::GetOrCreateComponent<BgVehicleComponentGoStraightTo>
==============
*/

BgVehicleComponentGoStraightTo *__fastcall BgVehiclePhysicsManager::GetOrCreateComponent<BgVehicleComponentGoStraightTo>(BgVehiclePhysicsManager *this, BGVehicles *vehicleSystem, unsigned int vehicleId, unsigned int compType, VehiclePhysicsComponentId *outCompId)
{
  return ??$GetOrCreateComponent@VBgVehicleComponentGoStraightTo@@@BgVehiclePhysicsManager@@QEAAPEAVBgVehicleComponentGoStraightTo@@PEAVBGVehicles@@IIPEAUVehiclePhysicsComponentId@@@Z(this, vehicleSystem, vehicleId, compType, outCompId);
}

/*
==============
BgVehiclePhysicsManager::GetComponentIdByType
==============
*/

VehiclePhysicsComponentId __fastcall BgVehiclePhysicsManager::GetComponentIdByType(BgVehiclePhysicsManager *this, unsigned int vehicleId, unsigned int compType)
{
  return ?GetComponentIdByType@BgVehiclePhysicsManager@@QEAA?AUVehiclePhysicsComponentId@@II@Z(this, vehicleId, compType);
}

/*
==============
BgVehiclePhysicsManager::GetObjectById
==============
*/

const BgVehiclePhysics *__fastcall BgVehiclePhysicsManager::GetObjectById(BgVehiclePhysicsManager *this, unsigned int vehId)
{
  return ?GetObjectById@BgVehiclePhysicsManager@@QEBAPEBVBgVehiclePhysics@@I@Z(this, vehId);
}

/*
==============
BgVehiclePhysicsManager::SaveAllToMemFile
==============
*/

void __fastcall BgVehiclePhysicsManager::SaveAllToMemFile(BgVehiclePhysicsManager *this, MemoryFile *memFile)
{
  ?SaveAllToMemFile@BgVehiclePhysicsManager@@QEAAXPEAUMemoryFile@@@Z(this, memFile);
}

/*
==============
BgVehiclePhysicsManager::GetComponentById<BgVehicleComponentGoStraightTo>
==============
*/

BgVehicleComponentGoStraightTo *__fastcall BgVehiclePhysicsManager::GetComponentById<BgVehicleComponentGoStraightTo>(BgVehiclePhysicsManager *this, VehiclePhysicsComponentId compId)
{
  return ??$GetComponentById@VBgVehicleComponentGoStraightTo@@@BgVehiclePhysicsManager@@QEAAPEAVBgVehicleComponentGoStraightTo@@UVehiclePhysicsComponentId@@@Z(this, compId);
}

/*
==============
BgVehiclePhysicsManager::ExistsObjectForPmove
==============
*/

bool __fastcall BgVehiclePhysicsManager::ExistsObjectForPmove(BgVehiclePhysicsManager *this, const BgVehiclePhysics *vehObj)
{
  return ?ExistsObjectForPmove@BgVehiclePhysicsManager@@QEBA_NPEBVBgVehiclePhysics@@@Z(this, vehObj);
}

/*
==============
BgVehiclePhysicsManager::GetObjectById
==============
*/

BgVehiclePhysics *__fastcall BgVehiclePhysicsManager::GetObjectById(BgVehiclePhysicsManager *this, unsigned int vehId)
{
  return ?GetObjectById@BgVehiclePhysicsManager@@QEAAPEAVBgVehiclePhysics@@I@Z(this, vehId);
}

/*
==============
BgVehiclePhysicsManager::FindFirstComponentNotInUse
==============
*/

unsigned int __fastcall BgVehiclePhysicsManager::FindFirstComponentNotInUse(BgVehiclePhysicsManager *this, unsigned int vehicleId)
{
  return ?FindFirstComponentNotInUse@BgVehiclePhysicsManager@@QEAAII@Z(this, vehicleId);
}

/*
==============
BgVehiclePhysicsManager::GetOrCreateComponent<BgVehicleComponentPathFinder>
==============
*/

BgVehicleComponentPathFinder *__fastcall BgVehiclePhysicsManager::GetOrCreateComponent<BgVehicleComponentPathFinder>(BgVehiclePhysicsManager *this, BGVehicles *vehicleSystem, unsigned int vehicleId, unsigned int compType, VehiclePhysicsComponentId *outCompId)
{
  return ??$GetOrCreateComponent@VBgVehicleComponentPathFinder@@@BgVehiclePhysicsManager@@QEAAPEAVBgVehicleComponentPathFinder@@PEAVBGVehicles@@IIPEAUVehiclePhysicsComponentId@@@Z(this, vehicleSystem, vehicleId, compType, outCompId);
}

/*
==============
BgVehiclePhysicsManager::FindComponent
==============
*/

VehiclePhysicsComponentId __fastcall BgVehiclePhysicsManager::FindComponent(BgVehiclePhysicsManager *this, unsigned int vehicleId, unsigned int compType)
{
  return ?FindComponent@BgVehiclePhysicsManager@@QEAA?AUVehiclePhysicsComponentId@@II@Z(this, vehicleId, compType);
}

/*
==============
BgVehiclePhysicsManager::GetComponentById<BgVehicleComponentPathFollower>
==============
*/

BgVehicleComponentPathFollower *__fastcall BgVehiclePhysicsManager::GetComponentById<BgVehicleComponentPathFollower>(BgVehiclePhysicsManager *this, VehiclePhysicsComponentId compId)
{
  return ??$GetComponentById@VBgVehicleComponentPathFollower@@@BgVehiclePhysicsManager@@QEAAPEAVBgVehicleComponentPathFollower@@UVehiclePhysicsComponentId@@@Z(this, compId);
}

/*
==============
BgVehiclePhysicsManager::GetComponentById<BgVehiclePhysicsComponent>
==============
*/

BgVehiclePhysicsComponent *__fastcall BgVehiclePhysicsManager::GetComponentById<BgVehiclePhysicsComponent>(BgVehiclePhysicsManager *this, VehiclePhysicsComponentId compId)
{
  return ??$GetComponentById@VBgVehiclePhysicsComponent@@@BgVehiclePhysicsManager@@QEAAPEAVBgVehiclePhysicsComponent@@UVehiclePhysicsComponentId@@@Z(this, compId);
}

/*
==============
BgVehiclePhysicsManager::LoadAllFromSaveGame
==============
*/

void __fastcall BgVehiclePhysicsManager::LoadAllFromSaveGame(BgVehiclePhysicsManager *this, SaveGame *save, BGVehicles *vehicleSystem)
{
  ?LoadAllFromSaveGame@BgVehiclePhysicsManager@@QEAAXPEAUSaveGame@@PEAVBGVehicles@@@Z(this, save, vehicleSystem);
}

/*
==============
BgVehiclePhysicsManager::Allocate
==============
*/

BgVehiclePhysics *__fastcall BgVehiclePhysicsManager::Allocate(BgVehiclePhysicsManager *this, unsigned int vehId, VehicleType vehType, VehiclePhysicsGameProfile vpgProfile)
{
  return ?Allocate@BgVehiclePhysicsManager@@QEAAPEAVBgVehiclePhysics@@IW4VehicleType@@W4VehiclePhysicsGameProfile@@@Z(this, vehId, vehType, vpgProfile);
}

/*
==============
BgVehiclePhysicsManager::GetObjectById
==============
*/
BgVehiclePhysicsObjectBuffer *BgVehiclePhysicsManager::GetObjectById(BgVehiclePhysicsManager *this, unsigned int vehId)
{
  unsigned int v4; 
  __int64 v6; 
  int v7; 

  if ( !BGVehicles::PhysicsIsValid(vehId) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_manager.inl", 58, ASSERT_TYPE_ASSERT, "(BGVehicles::PhysicsIsValid( vehId ))", (const char *)&queryFormat, "BGVehicles::PhysicsIsValid( vehId )") )
    __debugbreak();
  v4 = vehId - 1;
  if ( v4 >= 0x80 )
  {
    v7 = 128;
    LODWORD(v6) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_manager.inl", 19, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( (1 << 7) )", "index doesn't index MAX_VEHICLES\n\t%i not in [0, %i)", v6, v7) )
      __debugbreak();
  }
  return &this->m_vehiclePhysicsObjects[v4];
}

/*
==============
BgVehiclePhysicsManager::GetObjectForPmove
==============
*/
BgVehiclePhysicsObjectBuffer *BgVehiclePhysicsManager::GetObjectForPmove(BgVehiclePhysicsManager *this, const BgVehiclePhysics *vehObj)
{
  unsigned int v4; 
  BgVehiclePhysicsObjectBuffer *v5; 
  unsigned int v6; 
  unsigned int PhysicsBodyId; 
  float v8; 
  float v9; 
  vec4_t v10; 
  vec3_t position; 
  vec4_t orientation; 

  if ( !vehObj && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_manager.inl", 259, ASSERT_TYPE_ASSERT, "( vehObj )", "BgVehiclePhysicsManager::GetObjectForPmove(), vehicle object is null") )
    __debugbreak();
  if ( !BGVehicles::PhysicsIsValid(vehObj->m_vehicleId) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_manager.inl", 260, ASSERT_TYPE_ASSERT, "( BGVehicles::PhysicsIsValid( vehObj->GetVehicleId() ) )", "BgVehiclePhysicsManager::GetObjectForPmove(), vehicle object id is invalid") )
    __debugbreak();
  v4 = vehObj->m_vehicleId - 1;
  if ( v4 >= 0x80 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_manager.inl", 263, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( (1 << 7) )", "index doesn't index MAX_VEHICLES\n\t%i not in [0, %i)", vehObj->m_vehicleId - 1, 128) )
    __debugbreak();
  v5 = &this->m_vehiclePhysicsObjectsPmove[v4];
  if ( !*(_DWORD *)&v5->buffer[8] || *(_DWORD *)&v5->buffer[48] != vehObj->m_entityNumber || (v6 = BgVehiclePhysics::GetPhysicsBodyId((BgVehiclePhysics *)vehObj), BgVehiclePhysics::GetPhysicsBodyId((BgVehiclePhysics *)v5) != v6) )
  {
    memcpy_0(v5, vehObj, sizeof(BgVehiclePhysicsObjectBuffer));
    if ( BgVehiclePhysics::IsPhysicsBodyIdValid((BgVehiclePhysics *)vehObj) )
    {
      if ( BgVehiclePhysics::IsPhysicsBodyIdValid((BgVehiclePhysics *)vehObj) )
      {
        PhysicsBodyId = BgVehiclePhysics::GetPhysicsBodyId((BgVehiclePhysics *)vehObj);
        Physics_GetRigidBodyTransform((const Physics_WorldId)vehObj->m_worldId, PhysicsBodyId, &position, &orientation);
      }
      v8 = position.v[1];
      *(float *)&v5->buffer[472] = position.v[0];
      v9 = position.v[2];
      *(float *)&v5->buffer[476] = v8;
      v10 = orientation;
      *(float *)&v5->buffer[480] = v9;
      *(vec4_t *)&v5->buffer[484] = v10;
    }
    v5->buffer[612] = 1;
  }
  if ( vehObj->__vftable != *(BgVehiclePhysics_vtbl **)v5->buffer && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_manager.inl", 286, ASSERT_TYPE_ASSERT, "( SameVirtualTablePtr( vehObj, pmoveCtxObj ) )", "BgVehiclePhysicsManager::GetObjectForPmove(). Vehicle Object being overriden with a different instance. Vtable ptr mismatch.") )
    __debugbreak();
  return v5;
}

/*
==============
BgVehiclePhysicsManager::GetObjectById
==============
*/
BgVehiclePhysicsObjectBuffer *BgVehiclePhysicsManager::GetObjectById(BgVehiclePhysicsManager *this, unsigned int vehId)
{
  unsigned int v4; 
  __int64 v6; 
  int v7; 

  if ( !BGVehicles::PhysicsIsValid(vehId) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_manager.inl", 101, ASSERT_TYPE_ASSERT, "(BGVehicles::PhysicsIsValid( vehId ))", (const char *)&queryFormat, "BGVehicles::PhysicsIsValid( vehId )") )
    __debugbreak();
  v4 = vehId - 1;
  if ( v4 >= 0x80 )
  {
    v7 = 128;
    LODWORD(v6) = v4;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_manager.inl", 82, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( (1 << 7) )", "index doesn't index MAX_VEHICLES\n\t%i not in [0, %i)", v6, v7) )
      __debugbreak();
  }
  return &this->m_vehiclePhysicsObjects[v4];
}

/*
==============
BgVehiclePhysicsManager::GetComponentById<BgVehicleComponentGoStraightTo>
==============
*/
BgVehicleComponentGoStraightTo *BgVehiclePhysicsManager::GetComponentById<BgVehicleComponentGoStraightTo>(BgVehiclePhysicsManager *this, VehiclePhysicsComponentId compId)
{
  unsigned __int8 v4; 
  unsigned int v5; 
  __int64 v6; 
  __int64 v7; 
  __int64 v8; 
  char *v9; 
  __int64 v11; 

  if ( compId.id )
  {
    v4 = BYTE2(compId.id);
    if ( BYTE2(compId.id) < 2u )
      goto LABEL_7;
  }
  else
  {
    v4 = 0;
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_manager.inl", 188, ASSERT_TYPE_ASSERT, "(compId.IsValid())", (const char *)&queryFormat, "compId.IsValid()") )
    __debugbreak();
LABEL_7:
  v5 = LOWORD(compId.id) - 1;
  if ( v5 >= 0x80 )
  {
    LODWORD(v11) = LOWORD(compId.id) - 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_manager.inl", 19, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( (1 << 7) )", "index doesn't index MAX_VEHICLES\n\t%i not in [0, %i)", v11, 128) )
      __debugbreak();
  }
  v6 = 3 * (v4 + 2i64 * LOWORD(compId.id));
  v7 = 957704i64;
  v8 = v6 << 7;
  if ( !this->m_vehiclePhysicsObjects[v5].buffer[612] )
    v7 = 429320i64;
  v9 = (char *)this + v8 + v7;
  if ( *((_DWORD *)v9 + 2) != compId.id && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_manager.inl", 195, ASSERT_TYPE_ASSERT, "(baseComp->GetId().IsEqual( compId ))", (const char *)&queryFormat, "baseComp->GetId().IsEqual( compId )") )
    __debugbreak();
  return (BgVehicleComponentGoStraightTo *)v9;
}

/*
==============
BgVehiclePhysicsManager::GetComponentById<BgVehicleComponentPathFollower>
==============
*/
BgVehicleComponentPathFollower *BgVehiclePhysicsManager::GetComponentById<BgVehicleComponentPathFollower>(BgVehiclePhysicsManager *this, VehiclePhysicsComponentId compId)
{
  unsigned __int8 v4; 
  unsigned int v5; 
  __int64 v6; 
  __int64 v7; 
  __int64 v8; 
  char *v9; 
  __int64 v11; 

  if ( compId.id )
  {
    v4 = BYTE2(compId.id);
    if ( BYTE2(compId.id) < 2u )
      goto LABEL_7;
  }
  else
  {
    v4 = 0;
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_manager.inl", 188, ASSERT_TYPE_ASSERT, "(compId.IsValid())", (const char *)&queryFormat, "compId.IsValid()") )
    __debugbreak();
LABEL_7:
  v5 = LOWORD(compId.id) - 1;
  if ( v5 >= 0x80 )
  {
    LODWORD(v11) = LOWORD(compId.id) - 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_manager.inl", 19, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( (1 << 7) )", "index doesn't index MAX_VEHICLES\n\t%i not in [0, %i)", v11, 128) )
      __debugbreak();
  }
  v6 = 3 * (v4 + 2i64 * LOWORD(compId.id));
  v7 = 957704i64;
  v8 = v6 << 7;
  if ( !this->m_vehiclePhysicsObjects[v5].buffer[612] )
    v7 = 429320i64;
  v9 = (char *)this + v8 + v7;
  if ( *((_DWORD *)v9 + 2) != compId.id && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_manager.inl", 195, ASSERT_TYPE_ASSERT, "(baseComp->GetId().IsEqual( compId ))", (const char *)&queryFormat, "baseComp->GetId().IsEqual( compId )") )
    __debugbreak();
  return (BgVehicleComponentPathFollower *)v9;
}

/*
==============
BgVehiclePhysicsManager::GetOrCreateComponent<BgVehicleComponentGoStraightTo>
==============
*/
BgVehicleComponentGoStraightTo *BgVehiclePhysicsManager::GetOrCreateComponent<BgVehicleComponentGoStraightTo>(BgVehiclePhysicsManager *this, BGVehicles *vehicleSystem, unsigned int vehicleId, unsigned int compType, VehiclePhysicsComponentId *outCompId)
{
  VehiclePhysicsComponentId *v9; 
  unsigned int *v10; 
  VehiclePhysicsComponentId v11; 
  BgVehicleComponentGoStraightTo *ComponentBy; 
  BgVehicleComponentGoStraightTo *result; 
  unsigned int FirstComponentNotInUse; 
  __int64 v15; 
  BgVehiclePhysics *ObjectById; 
  VehiclePhysicsComponentId *v17; 
  BgVehicleComponentGoStraightTo *v18; 
  VehiclePhysicsComponentId *v19; 
  __int64 v20; 
  __int128 v21; 
  BgVehiclePhysics *v22; 
  __int64 v23; 

  if ( !vehicleSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_manager.inl", 204, ASSERT_TYPE_ASSERT, "(vehicleSystem)", (const char *)&queryFormat, "vehicleSystem") )
    __debugbreak();
  v9 = outCompId;
  if ( !outCompId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_manager.inl", 205, ASSERT_TYPE_ASSERT, "(outCompId)", (const char *)&queryFormat, "outCompId") )
    __debugbreak();
  LODWORD(v10) = BgVehiclePhysicsManager::FindComponent(this, (unsigned int)&outCompId, vehicleId);
  v11.id = *v10;
  v9->id = *v10;
  if ( v11.id && BYTE2(v11.id) < 2u )
  {
    ComponentBy = BgVehiclePhysicsManager::GetComponentById<BgVehicleComponentGoStraightTo>(this, v11);
  }
  else
  {
    FirstComponentNotInUse = BgVehiclePhysicsManager::FindFirstComponentNotInUse(this, vehicleId);
    v15 = FirstComponentNotInUse;
    if ( FirstComponentNotInUse >= 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_manager.inl", 214, ASSERT_TYPE_ASSERT, "(freeSlot < 2u)", "%s\n\tBgVehiclePhysicsManager::GetOrCreateComponent() not enough room for another component in the vehicle. Increase VEHICLE_PHYSICS_MAX_COMPONENTS_PER_VEHICLE?", "freeSlot < VEHICLE_PHYSICS_MAX_COMPONENTS_PER_VEHICLE") )
      __debugbreak();
    if ( !BGVehicles::PhysicsIsValid(vehicleId) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_manager.inl", 126, ASSERT_TYPE_ASSERT, "(BGVehicles::PhysicsIsValid( vehId ))", (const char *)&queryFormat, "BGVehicles::PhysicsIsValid( vehId )") )
      __debugbreak();
    if ( (unsigned int)v15 >= 2 )
    {
      LODWORD(v23) = v15;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_manager.inl", 127, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( 2u )", "index doesn't index VEHICLE_PHYSICS_MAX_COMPONENTS_PER_VEHICLE\n\t%i not in [0, %i)", v23, 2) )
        __debugbreak();
    }
    ObjectById = BgVehiclePhysicsManager::GetObjectById(this, vehicleId);
    outCompId = (VehiclePhysicsComponentId *)((char *)this + 768 * vehicleId + 384 * v15 - 768);
    v17 = outCompId + 107522;
    ComponentBy = (BgVehicleComponentGoStraightTo *)BGVehicles::PhysicsFactoryComponent((unsigned __int8 *)&outCompId[107522], 0x180u, ObjectById, compType);
    if ( !ComponentBy && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_manager.inl", 133, ASSERT_TYPE_ASSERT, "(vehComp)", "%s\n\tBgVehiclePhysicsManager::AllocateComponent() could not create a new component object in factory", "vehComp") )
      __debugbreak();
    if ( ComponentBy != (BgVehicleComponentGoStraightTo *)v17 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_manager.inl", 134, ASSERT_TYPE_ASSERT, "(reinterpret_cast<byte*>( vehComp ) == compBuffer)", "%s\n\tBgVehiclePhysicsManager::AllocateComponent() instance must be allocated in provided buffer", "reinterpret_cast<byte*>( vehComp ) == compBuffer") )
      __debugbreak();
    v18 = ComponentBy;
    v19 = outCompId + 239618;
    v20 = 3i64;
    do
    {
      v19 += 32;
      v21 = *(_OWORD *)&v18->__vftable;
      v18 = (BgVehicleComponentGoStraightTo *)((char *)v18 + 128);
      *(_OWORD *)&v19[-32].id = v21;
      *(_OWORD *)&v19[-28].id = *(_OWORD *)&v18[-1].__vftable;
      *(_OWORD *)&v19[-24].id = *(_OWORD *)&v18[-1].m_vehicleSystem;
      *(_OWORD *)&v19[-20].id = *(_OWORD *)&v18[-1].m_autoRemove;
      *(_OWORD *)&v19[-16].id = *(_OWORD *)&v18[-1].m_inputMults[2];
      *(_OWORD *)&v19[-12].id = *(_OWORD *)&v18[-1].m_inputMults[6];
      *(_OWORD *)&v19[-8].id = *(_OWORD *)&v18[-1].m_goalPos.z;
      *(_OWORD *)&v19[-4].id = *(_OWORD *)&v18[-1].m_goalPosTol;
      --v20;
    }
    while ( v20 );
    v9->id = (unsigned __int16)vehicleId | (((compType << 8) | (unsigned __int8)v15) << 16);
    v22 = BgVehiclePhysicsManager::GetObjectById(this, (unsigned __int16)vehicleId);
    if ( v22->m_pmoveObject && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_manager.inl", 220, ASSERT_TYPE_ASSERT, "(!vehObj->IsPmoveObject())", (const char *)&queryFormat, "!vehObj->IsPmoveObject()") )
      __debugbreak();
    BgVehiclePhysics::AddComponent(v22, (VehiclePhysicsComponentId)v9->id);
    if ( !((unsigned __int8 (__fastcall *)(BgVehicleComponentGoStraightTo *, BGVehicles *, _QWORD))ComponentBy->Setup)(ComponentBy, vehicleSystem, v9->id) )
    {
      ((void (__fastcall *)(BGVehicles *, _QWORD))vehicleSystem->PhysicsDestroyComponent)(vehicleSystem, v9->id);
      result = NULL;
      v9->id = 0;
      return result;
    }
  }
  if ( ComponentBy && HIBYTE(ComponentBy->m_id.id) != compType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_manager.inl", 238, ASSERT_TYPE_ASSERT, "(!comp || comp->GetId().GetType() == compType)", (const char *)&queryFormat, "!comp || comp->GetId().GetType() == compType") )
    __debugbreak();
  return ComponentBy;
}

/*
==============
BgVehiclePhysicsManager::GetOrCreateComponent<BgVehicleComponentPathFinder>
==============
*/
BgVehicleComponentPathFinder *BgVehiclePhysicsManager::GetOrCreateComponent<BgVehicleComponentPathFinder>(BgVehiclePhysicsManager *this, BGVehicles *vehicleSystem, unsigned int vehicleId, unsigned int compType, VehiclePhysicsComponentId *outCompId)
{
  VehiclePhysicsComponentId *v9; 
  unsigned int *v10; 
  unsigned int v11; 
  unsigned int v12; 
  __int64 v13; 
  __int64 v14; 
  BgVehiclePhysicsComponent *v15; 
  unsigned int v16; 
  BgVehicleComponentPathFinder *result; 
  unsigned int FirstComponentNotInUse; 
  __int64 v19; 
  BgVehiclePhysics *ObjectById; 
  unsigned __int64 v21; 
  char *v22; 
  BgVehiclePhysicsComponent *v23; 
  __int64 v24; 
  __int128 v25; 
  BgVehiclePhysics *v26; 
  __int64 v27; 

  if ( !vehicleSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_manager.inl", 204, ASSERT_TYPE_ASSERT, "(vehicleSystem)", (const char *)&queryFormat, "vehicleSystem") )
    __debugbreak();
  v9 = outCompId;
  if ( !outCompId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_manager.inl", 205, ASSERT_TYPE_ASSERT, "(outCompId)", (const char *)&queryFormat, "outCompId") )
    __debugbreak();
  LODWORD(v10) = BgVehiclePhysicsManager::FindComponent(this, (unsigned int)&outCompId, vehicleId);
  v11 = *v10;
  v9->id = *v10;
  if ( v11 && BYTE2(v11) < 2u )
  {
    if ( (!v11 || (v11 & 0xFF0000) >= 0x20000) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_manager.inl", 188, ASSERT_TYPE_ASSERT, "(compId.IsValid())", (const char *)&queryFormat, "compId.IsValid()") )
      __debugbreak();
    v12 = (unsigned __int16)v11 - 1;
    if ( v12 >= 0x80 )
    {
      LODWORD(v27) = (unsigned __int16)v11 - 1;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_manager.inl", 19, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( (1 << 7) )", "index doesn't index MAX_VEHICLES\n\t%i not in [0, %i)", v27, 128) )
        __debugbreak();
    }
    v13 = v12;
    v14 = 957704i64;
    if ( !this->m_vehiclePhysicsObjects[v13].buffer[612] )
      v14 = 429320i64;
    v15 = (BgVehiclePhysicsComponent *)((char *)this + 768 * (unsigned __int16)v11 + 384 * BYTE2(v11) + v14);
    if ( v15->m_id.id != v11 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_manager.inl", 195, ASSERT_TYPE_ASSERT, "(baseComp->GetId().IsEqual( compId ))", (const char *)&queryFormat, "baseComp->GetId().IsEqual( compId )") )
      __debugbreak();
    v16 = compType;
  }
  else
  {
    FirstComponentNotInUse = BgVehiclePhysicsManager::FindFirstComponentNotInUse(this, vehicleId);
    v19 = FirstComponentNotInUse;
    if ( FirstComponentNotInUse >= 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_manager.inl", 214, ASSERT_TYPE_ASSERT, "(freeSlot < 2u)", "%s\n\tBgVehiclePhysicsManager::GetOrCreateComponent() not enough room for another component in the vehicle. Increase VEHICLE_PHYSICS_MAX_COMPONENTS_PER_VEHICLE?", "freeSlot < VEHICLE_PHYSICS_MAX_COMPONENTS_PER_VEHICLE") )
      __debugbreak();
    if ( !BGVehicles::PhysicsIsValid(vehicleId) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_manager.inl", 126, ASSERT_TYPE_ASSERT, "(BGVehicles::PhysicsIsValid( vehId ))", (const char *)&queryFormat, "BGVehicles::PhysicsIsValid( vehId )") )
      __debugbreak();
    if ( (unsigned int)v19 >= 2 )
    {
      LODWORD(v27) = v19;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_manager.inl", 127, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( 2u )", "index doesn't index VEHICLE_PHYSICS_MAX_COMPONENTS_PER_VEHICLE\n\t%i not in [0, %i)", v27, 2) )
        __debugbreak();
    }
    ObjectById = BgVehiclePhysicsManager::GetObjectById(this, vehicleId);
    v21 = 384 * (v19 + 2i64 * (vehicleId - 1));
    v15 = BGVehicles::PhysicsFactoryComponent(this->m_vehiclePhysicsComponents[0][v21 / 0x180].buffer, 0x180u, ObjectById, compType);
    if ( !v15 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_manager.inl", 133, ASSERT_TYPE_ASSERT, "(vehComp)", "%s\n\tBgVehiclePhysicsManager::AllocateComponent() could not create a new component object in factory", "vehComp") )
      __debugbreak();
    if ( v15 != (BgVehiclePhysicsComponent *)((char *)this->m_vehiclePhysicsComponents + v21) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_manager.inl", 134, ASSERT_TYPE_ASSERT, "(reinterpret_cast<byte*>( vehComp ) == compBuffer)", "%s\n\tBgVehiclePhysicsManager::AllocateComponent() instance must be allocated in provided buffer", "reinterpret_cast<byte*>( vehComp ) == compBuffer") )
      __debugbreak();
    v22 = (char *)this->m_vehiclePhysicsComponentsPmove + v21;
    v23 = v15;
    v24 = 3i64;
    do
    {
      v22 += 128;
      v25 = *(_OWORD *)&v23->__vftable;
      v23 = (BgVehiclePhysicsComponent *)((char *)v23 + 128);
      *((_OWORD *)v22 - 8) = v25;
      *((_OWORD *)v22 - 7) = *(_OWORD *)&v23[-3].m_id.id;
      *((_OWORD *)v22 - 6) = *(_OWORD *)&v23[-3].m_pauseTime;
      *((_OWORD *)v22 - 5) = *(_OWORD *)&v23[-2].__vftable;
      *((_OWORD *)v22 - 4) = *(_OWORD *)&v23[-2].m_vehicleSystem;
      *((_OWORD *)v22 - 3) = *(_OWORD *)&v23[-2].m_autoRemove;
      *((_OWORD *)v22 - 2) = *(_OWORD *)&v23[-1].m_id.id;
      *((_OWORD *)v22 - 1) = *(_OWORD *)&v23[-1].m_pauseTime;
      --v24;
    }
    while ( v24 );
    v16 = compType;
    v9->id = (unsigned __int16)vehicleId | (((compType << 8) | (unsigned __int8)v19) << 16);
    v26 = BgVehiclePhysicsManager::GetObjectById(this, (unsigned __int16)vehicleId);
    if ( v26->m_pmoveObject && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_manager.inl", 220, ASSERT_TYPE_ASSERT, "(!vehObj->IsPmoveObject())", (const char *)&queryFormat, "!vehObj->IsPmoveObject()") )
      __debugbreak();
    BgVehiclePhysics::AddComponent(v26, (VehiclePhysicsComponentId)v9->id);
    if ( !((unsigned __int8 (__fastcall *)(BgVehiclePhysicsComponent *, BGVehicles *, _QWORD))v15->Setup)(v15, vehicleSystem, v9->id) )
    {
      ((void (__fastcall *)(BGVehicles *, _QWORD))vehicleSystem->PhysicsDestroyComponent)(vehicleSystem, v9->id);
      result = NULL;
      v9->id = 0;
      return result;
    }
  }
  if ( v15 && HIBYTE(v15->m_id.id) != v16 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_manager.inl", 238, ASSERT_TYPE_ASSERT, "(!comp || comp->GetId().GetType() == compType)", (const char *)&queryFormat, "!comp || comp->GetId().GetType() == compType") )
    __debugbreak();
  return (BgVehicleComponentPathFinder *)v15;
}

/*
==============
BgVehiclePhysicsManager::GetOrCreateComponent<BgVehicleComponentPathFollower>
==============
*/
BgVehicleComponentPathFollower *BgVehiclePhysicsManager::GetOrCreateComponent<BgVehicleComponentPathFollower>(BgVehiclePhysicsManager *this, BGVehicles *vehicleSystem, unsigned int vehicleId, unsigned int compType, VehiclePhysicsComponentId *outCompId)
{
  VehiclePhysicsComponentId *v9; 
  unsigned int *v10; 
  VehiclePhysicsComponentId v11; 
  BgVehicleComponentPathFollower *ComponentBy; 
  BgVehicleComponentPathFollower *result; 
  unsigned int FirstComponentNotInUse; 
  __int64 v15; 
  BgVehiclePhysics *ObjectById; 
  VehiclePhysicsComponentId *v17; 
  BgVehicleComponentPathFollower *v18; 
  VehiclePhysicsComponentId *v19; 
  __int64 v20; 
  __int128 v21; 
  BgVehiclePhysics *v22; 
  __int64 v23; 

  if ( !vehicleSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_manager.inl", 204, ASSERT_TYPE_ASSERT, "(vehicleSystem)", (const char *)&queryFormat, "vehicleSystem") )
    __debugbreak();
  v9 = outCompId;
  if ( !outCompId && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_manager.inl", 205, ASSERT_TYPE_ASSERT, "(outCompId)", (const char *)&queryFormat, "outCompId") )
    __debugbreak();
  LODWORD(v10) = BgVehiclePhysicsManager::FindComponent(this, (unsigned int)&outCompId, vehicleId);
  v11.id = *v10;
  v9->id = *v10;
  if ( v11.id && BYTE2(v11.id) < 2u )
  {
    ComponentBy = BgVehiclePhysicsManager::GetComponentById<BgVehicleComponentPathFollower>(this, v11);
  }
  else
  {
    FirstComponentNotInUse = BgVehiclePhysicsManager::FindFirstComponentNotInUse(this, vehicleId);
    v15 = FirstComponentNotInUse;
    if ( FirstComponentNotInUse >= 2 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_manager.inl", 214, ASSERT_TYPE_ASSERT, "(freeSlot < 2u)", "%s\n\tBgVehiclePhysicsManager::GetOrCreateComponent() not enough room for another component in the vehicle. Increase VEHICLE_PHYSICS_MAX_COMPONENTS_PER_VEHICLE?", "freeSlot < VEHICLE_PHYSICS_MAX_COMPONENTS_PER_VEHICLE") )
      __debugbreak();
    if ( !BGVehicles::PhysicsIsValid(vehicleId) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_manager.inl", 126, ASSERT_TYPE_ASSERT, "(BGVehicles::PhysicsIsValid( vehId ))", (const char *)&queryFormat, "BGVehicles::PhysicsIsValid( vehId )") )
      __debugbreak();
    if ( (unsigned int)v15 >= 2 )
    {
      LODWORD(v23) = v15;
      if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_manager.inl", 127, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( 2u )", "index doesn't index VEHICLE_PHYSICS_MAX_COMPONENTS_PER_VEHICLE\n\t%i not in [0, %i)", v23, 2) )
        __debugbreak();
    }
    ObjectById = BgVehiclePhysicsManager::GetObjectById(this, vehicleId);
    outCompId = (VehiclePhysicsComponentId *)((char *)this + 768 * vehicleId + 384 * v15 - 768);
    v17 = outCompId + 107522;
    ComponentBy = (BgVehicleComponentPathFollower *)BGVehicles::PhysicsFactoryComponent((unsigned __int8 *)&outCompId[107522], 0x180u, ObjectById, compType);
    if ( !ComponentBy && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_manager.inl", 133, ASSERT_TYPE_ASSERT, "(vehComp)", "%s\n\tBgVehiclePhysicsManager::AllocateComponent() could not create a new component object in factory", "vehComp") )
      __debugbreak();
    if ( ComponentBy != (BgVehicleComponentPathFollower *)v17 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_manager.inl", 134, ASSERT_TYPE_ASSERT, "(reinterpret_cast<byte*>( vehComp ) == compBuffer)", "%s\n\tBgVehiclePhysicsManager::AllocateComponent() instance must be allocated in provided buffer", "reinterpret_cast<byte*>( vehComp ) == compBuffer") )
      __debugbreak();
    v18 = ComponentBy;
    v19 = outCompId + 239618;
    v20 = 3i64;
    do
    {
      v19 += 32;
      v21 = *(_OWORD *)&v18->__vftable;
      v18 = (BgVehicleComponentPathFollower *)((char *)v18 + 128);
      *(_OWORD *)&v19[-32].id = v21;
      *(_OWORD *)&v19[-28].id = *((_OWORD *)&v18[-1].m_path.m_catmullRom + 13);
      *(_OWORD *)&v19[-24].id = *(_OWORD *)v18[-1].m_pathPosInterpolated.v;
      *(_OWORD *)&v19[-20].id = *(_OWORD *)&v18[-1].m_pathAnglesInterpolated.y;
      *(_OWORD *)&v19[-16].id = *(_OWORD *)&v18[-1].m_previousLinearVelocityWs.z;
      *(_OWORD *)&v19[-12].id = *(_OWORD *)&v18[-1].m_numNodes;
      *(_OWORD *)&v19[-8].id = *(_OWORD *)&v18[-1].m_yawAccel;
      *(_OWORD *)&v19[-4].id = *(_OWORD *)&v18[-1].m_manualDecel;
      --v20;
    }
    while ( v20 );
    v9->id = (unsigned __int16)vehicleId | (((compType << 8) | (unsigned __int8)v15) << 16);
    v22 = BgVehiclePhysicsManager::GetObjectById(this, (unsigned __int16)vehicleId);
    if ( v22->m_pmoveObject && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_manager.inl", 220, ASSERT_TYPE_ASSERT, "(!vehObj->IsPmoveObject())", (const char *)&queryFormat, "!vehObj->IsPmoveObject()") )
      __debugbreak();
    BgVehiclePhysics::AddComponent(v22, (VehiclePhysicsComponentId)v9->id);
    if ( !((unsigned __int8 (__fastcall *)(BgVehicleComponentPathFollower *, BGVehicles *, _QWORD))ComponentBy->Setup)(ComponentBy, vehicleSystem, v9->id) )
    {
      ((void (__fastcall *)(BGVehicles *, _QWORD))vehicleSystem->PhysicsDestroyComponent)(vehicleSystem, v9->id);
      result = NULL;
      v9->id = 0;
      return result;
    }
  }
  if ( ComponentBy && HIBYTE(ComponentBy->m_id.id) != compType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_manager.inl", 238, ASSERT_TYPE_ASSERT, "(!comp || comp->GetId().GetType() == compType)", (const char *)&queryFormat, "!comp || comp->GetId().GetType() == compType") )
    __debugbreak();
  return ComponentBy;
}

/*
==============
BgVehiclePhysicsManager::Allocate
==============
*/
BgVehiclePhysics *BgVehiclePhysicsManager::Allocate(BgVehiclePhysicsManager *this, unsigned int vehId, VehicleType vehType, VehiclePhysicsGameProfile vpgProfile)
{
  unsigned __int8 *v8; 
  BgVehiclePhysics *v9; 

  if ( !BGVehicles::PhysicsIsValid(vehId) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_manager.inl", 108, ASSERT_TYPE_ASSERT, "(BGVehicles::PhysicsIsValid( vehId ))", (const char *)&queryFormat, "BGVehicles::PhysicsIsValid( vehId )") )
    __debugbreak();
  v8 = (unsigned __int8 *)this + 3360 * vehId - 3360;
  v9 = BGVehicles::PhysicsFactory(v8 + 8, 0xD20u, vehType, vpgProfile);
  if ( !v9 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_manager.inl", 114, ASSERT_TYPE_ASSERT, "(object)", "%s\n\tBgVehiclePhysicsManager::Allocate() could not create a new physics vehicle object in factory", "object") )
    __debugbreak();
  if ( v9 != (BgVehiclePhysics *)(v8 + 8) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_manager.inl", 115, ASSERT_TYPE_ASSERT, "(reinterpret_cast<byte*>( object ) == objBuffer)", "%s\n\tBgVehiclePhysicsManager::Allocate() instance must be allocated in provided buffer", "reinterpret_cast<byte*>( object ) == objBuffer") )
    __debugbreak();
  memset_0(v8 + 528392, 0, 0xD20ui64);
  return v9;
}

/*
==============
BgVehiclePhysicsManager::ExistsObjectForPmove
==============
*/
char BgVehiclePhysicsManager::ExistsObjectForPmove(BgVehiclePhysicsManager *this, const BgVehiclePhysics *vehObj)
{
  unsigned int v4; 
  unsigned int PhysicsBodyId; 
  unsigned int v7; 
  int v8; 

  if ( !vehObj || !BGVehicles::PhysicsIsValid(vehObj->m_vehicleId) )
    return 0;
  v4 = vehObj->m_vehicleId - 1;
  if ( v4 >= 0x80 )
  {
    v8 = 128;
    v7 = vehObj->m_vehicleId - 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_manager.inl", 300, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( (1 << 7) )", "index doesn't index MAX_VEHICLES\n\t%i not in [0, %i)", v7, v8) )
      __debugbreak();
  }
  if ( *(_DWORD *)&this->m_vehiclePhysicsObjectsPmove[v4].buffer[8] && *(_DWORD *)&this->m_vehiclePhysicsObjectsPmove[v4].buffer[48] == vehObj->m_entityNumber && (PhysicsBodyId = BgVehiclePhysics::GetPhysicsBodyId((BgVehiclePhysics *)&this->m_vehiclePhysicsObjectsPmove[v4]), PhysicsBodyId == BgVehiclePhysics::GetPhysicsBodyId((BgVehiclePhysics *)vehObj)) )
    return 1;
  else
    return 0;
}

/*
==============
BgVehiclePhysicsManager::FindComponent
==============
*/
unsigned int *BgVehiclePhysicsManager::FindComponent(BgVehiclePhysicsManager *this, unsigned int *vehicleId, unsigned int compType, int a4)
{
  BgVehiclePhysics *ObjectById; 
  BgVehiclePhysics *v8; 
  int v9; 
  VehiclePhysicsComponentId *i; 
  unsigned int id; 
  __int64 v12; 

  ObjectById = BgVehiclePhysicsManager::GetObjectById(this, compType);
  v8 = ObjectById;
  if ( (!ObjectById || !ObjectById->m_inUse) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_manager.inl", 166, ASSERT_TYPE_ASSERT, "(vehObj && vehObj->IsInUse())", (const char *)&queryFormat, "vehObj && vehObj->IsInUse()") )
    __debugbreak();
  v9 = 0;
  for ( i = v8->m_components; ; ++i )
  {
    id = i->id;
    if ( i->id && BYTE2(id) < 2u )
    {
      v12 = 958480i64;
      if ( !v8->m_pmoveObject )
        v12 = 430096i64;
      if ( *((unsigned __int8 *)&this->m_lagTime + 768 * (unsigned __int16)id + 384 * BYTE2(id) + v12 - 765) == a4 )
        break;
    }
    if ( (unsigned int)++v9 >= 2 )
    {
      *vehicleId = 0;
      return vehicleId;
    }
  }
  *vehicleId = id;
  return vehicleId;
}

/*
==============
BgVehiclePhysicsManager::FindFirstComponentNotInUse
==============
*/
__int64 BgVehiclePhysicsManager::FindFirstComponentNotInUse(BgVehiclePhysicsManager *this, unsigned int vehicleId)
{
  BgVehiclePhysics *ObjectById; 
  BgVehiclePhysics *v3; 
  unsigned int v4; 
  VehiclePhysicsComponentId *m_components; 

  ObjectById = BgVehiclePhysicsManager::GetObjectById(this, vehicleId);
  v3 = ObjectById;
  if ( (!ObjectById || !ObjectById->m_inUse) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_manager.inl", 146, ASSERT_TYPE_ASSERT, "(vehObj && vehObj->IsInUse())", (const char *)&queryFormat, "vehObj && vehObj->IsInUse()") )
    __debugbreak();
  if ( v3->m_pmoveObject && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_manager.inl", 147, ASSERT_TYPE_ASSERT, "(!vehObj->IsPmoveObject())", (const char *)&queryFormat, "!vehObj->IsPmoveObject()") )
    __debugbreak();
  v4 = 0;
  m_components = v3->m_components;
  do
  {
    if ( !BGVehicles::PhysicsIsValidComponent((VehiclePhysicsComponentId)m_components->id) )
      break;
    ++v4;
    ++m_components;
  }
  while ( v4 < 2 );
  return v4;
}

/*
==============
BgVehiclePhysicsManager::GetComponentIdByType
==============
*/
unsigned int *BgVehiclePhysicsManager::GetComponentIdByType(BgVehiclePhysicsManager *this, unsigned int *vehicleId, unsigned int compType, int a4)
{
  int v6; 
  VehiclePhysicsComponentId *i; 
  unsigned int id; 

  v6 = 0;
  for ( i = BgVehiclePhysicsManager::GetObjectById(this, compType)->m_components; ; ++i )
  {
    id = i->id;
    if ( i->id )
    {
      if ( (id & 0xFF0000) < 0x20000 && HIBYTE(id) == a4 )
        break;
    }
    if ( (unsigned int)++v6 >= 2 )
    {
      *vehicleId = 0;
      return vehicleId;
    }
  }
  *vehicleId = id;
  return vehicleId;
}

/*
==============
BgVehiclePhysicsManager::LoadAllFromSaveGame
==============
*/
void BgVehiclePhysicsManager::LoadAllFromSaveGame(BgVehiclePhysicsManager *this, SaveGame *save, BGVehicles *vehicleSystem)
{
  BgVehiclePhysicsManager *v3; 
  MemoryFile *p_memFile; 
  unsigned int v6; 
  unsigned __int8 *v7; 
  unsigned int i; 
  unsigned __int8 *v9; 
  char *v10; 
  VehiclePhysicsGameProfile v11; 
  VehicleType v12; 
  __int64 v13; 
  VehiclePhysicsGameProfile v14; 
  VehicleType v15; 
  __int64 v16; 
  _DWORD *v17; 
  __int64 v18; 
  BgVehiclePhysicsComponent *v19; 
  unsigned int id_high; 
  BgVehiclePhysics *ObjectById; 
  unsigned __int8 *v22; 
  BgVehiclePhysicsComponent *v23; 
  char *v24; 
  BgVehiclePhysicsComponent *v25; 
  __int64 v26; 
  __int128 v27; 
  int v28; 
  int v29; 
  int v30; 
  unsigned __int8 *v31; 
  BgVehiclePhysics *v32; 
  unsigned int p; 

  v3 = this;
  if ( !save && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_manager.inl", 376, ASSERT_TYPE_ASSERT, "(save)", (const char *)&queryFormat, "save") )
    __debugbreak();
  p_memFile = &save->memFile;
  MemFile_ReadData(&save->memFile, 4ui64, &p);
  v6 = p;
  v7 = &v3->m_vehiclePhysicsObjects[0].buffer[36];
  v31 = &v3->m_vehiclePhysicsObjects[0].buffer[36];
  for ( i = 0; i < 0x80; ++i )
  {
    v9 = (unsigned __int8 *)v3 + 3360 * i;
    v10 = (char *)(v9 + 8);
    memset_0(v9 + 8, 0, 0xD20ui64);
    MemFile_ReadData(p_memFile, 4ui64, &v28);
    if ( v28 )
    {
      MemFile_ReadData(p_memFile, 4ui64, &v29);
      if ( v29 )
      {
        MemFile_ReadData(p_memFile, 0xD20ui64, v7 - 36);
        v11 = v7[1];
        v12 = *v7;
        if ( !BGVehicles::PhysicsIsValid(i + 1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_manager.inl", 108, ASSERT_TYPE_ASSERT, "(BGVehicles::PhysicsIsValid( vehId ))", (const char *)&queryFormat, "BGVehicles::PhysicsIsValid( vehId )") )
          __debugbreak();
        v32 = BGVehicles::PhysicsFactory(v9 + 8, 0xD20u, v12, v11);
        v13 = (__int64)v32;
        if ( !v32 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_manager.inl", 114, ASSERT_TYPE_ASSERT, "(object)", "%s\n\tBgVehiclePhysicsManager::Allocate() could not create a new physics vehicle object in factory", "object") )
          __debugbreak();
        if ( (char *)v13 != v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_manager.inl", 115, ASSERT_TYPE_ASSERT, "(reinterpret_cast<byte*>( object ) == objBuffer)", "%s\n\tBgVehiclePhysicsManager::Allocate() instance must be allocated in provided buffer", "reinterpret_cast<byte*>( object ) == objBuffer") )
          __debugbreak();
        memset_0(v9 + 528392, 0, 0xD20ui64);
      }
      else
      {
        BgVehiclePhysics::LoadFromMemFileHeader((BgVehiclePhysics *)(v7 - 36), p_memFile, v6);
        v14 = v7[1];
        v15 = *v7;
        if ( !BGVehicles::PhysicsIsValid(i + 1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_manager.inl", 108, ASSERT_TYPE_ASSERT, "(BGVehicles::PhysicsIsValid( vehId ))", (const char *)&queryFormat, "BGVehicles::PhysicsIsValid( vehId )") )
          __debugbreak();
        v32 = BGVehicles::PhysicsFactory(v9 + 8, 0xD20u, v15, v14);
        v13 = (__int64)v32;
        if ( !v32 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_manager.inl", 114, ASSERT_TYPE_ASSERT, "(object)", "%s\n\tBgVehiclePhysicsManager::Allocate() could not create a new physics vehicle object in factory", "object") )
          __debugbreak();
        if ( (char *)v13 != v10 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_manager.inl", 115, ASSERT_TYPE_ASSERT, "(reinterpret_cast<byte*>( object ) == objBuffer)", "%s\n\tBgVehiclePhysicsManager::Allocate() instance must be allocated in provided buffer", "reinterpret_cast<byte*>( object ) == objBuffer") )
          __debugbreak();
        memset_0(v9 + 528392, 0, 0xD20ui64);
        (*(void (__fastcall **)(__int64, MemoryFile *, _QWORD))(*(_QWORD *)v13 + 8i64))(v13, p_memFile, v6);
      }
      v16 = 0i64;
      v17 = (_DWORD *)(v13 + 180);
      do
      {
        v7 = v31;
        v3 = this;
        v18 = 958472i64;
        if ( !v31[576] )
          v18 = 430088i64;
        v19 = (BgVehiclePhysicsComponent *)((char *)this + 768 * (int)i + 384 * (int)v16 + v18);
        MemFile_ReadData(p_memFile, 4ui64, &v30);
        if ( v30 )
        {
          BgVehiclePhysicsComponent::LoadFromMemFileHeader(v19, p_memFile, p);
          id_high = HIBYTE(v19->m_id.id);
          if ( !BGVehicles::PhysicsIsValid(i + 1) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_manager.inl", 126, ASSERT_TYPE_ASSERT, "(BGVehicles::PhysicsIsValid( vehId ))", (const char *)&queryFormat, "BGVehicles::PhysicsIsValid( vehId )") )
            __debugbreak();
          ObjectById = BgVehiclePhysicsManager::GetObjectById(this, i + 1);
          v22 = (unsigned __int8 *)this + 768 * i + 384 * v16;
          v23 = BGVehicles::PhysicsFactoryComponent(v22 + 430088, 0x180u, ObjectById, id_high);
          if ( !v23 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_manager.inl", 133, ASSERT_TYPE_ASSERT, "(vehComp)", "%s\n\tBgVehiclePhysicsManager::AllocateComponent() could not create a new component object in factory", "vehComp") )
            __debugbreak();
          if ( v23 != (BgVehiclePhysicsComponent *)(v22 + 430088) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_manager.inl", 134, ASSERT_TYPE_ASSERT, "(reinterpret_cast<byte*>( vehComp ) == compBuffer)", "%s\n\tBgVehiclePhysicsManager::AllocateComponent() instance must be allocated in provided buffer", "reinterpret_cast<byte*>( vehComp ) == compBuffer") )
            __debugbreak();
          v24 = (char *)(v22 + 958472);
          v25 = v23;
          v26 = 3i64;
          do
          {
            v24 += 128;
            v27 = *(_OWORD *)&v25->__vftable;
            v25 = (BgVehiclePhysicsComponent *)((char *)v25 + 128);
            *((_OWORD *)v24 - 8) = v27;
            *((_OWORD *)v24 - 7) = *(_OWORD *)&v25[-3].m_id.id;
            *((_OWORD *)v24 - 6) = *(_OWORD *)&v25[-3].m_pauseTime;
            *((_OWORD *)v24 - 5) = *(_OWORD *)&v25[-2].__vftable;
            *((_OWORD *)v24 - 4) = *(_OWORD *)&v25[-2].m_vehicleSystem;
            *((_OWORD *)v24 - 3) = *(_OWORD *)&v25[-2].m_autoRemove;
            *((_OWORD *)v24 - 2) = *(_OWORD *)&v25[-1].m_id.id;
            *((_OWORD *)v24 - 1) = *(_OWORD *)&v25[-1].m_pauseTime;
            --v26;
          }
          while ( v26 );
          v23->LoadFromMemFile(v23, p_memFile, p);
          v23->FixUpLoad(v23, save, vehicleSystem);
          if ( ((*v17 ^ v23->m_id.id) & 0xFF000000) != 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_manager.inl", 434, ASSERT_TYPE_ASSERT, "( baseObj->GetComponentId( compIndex ).GetType() == baseComp->GetId().GetType() )", "BgVehiclePhysicsManager::LoadAllFromSaveGame: Vehicle component Id type is != than component object type") )
            __debugbreak();
          v7 = v31;
          v3 = this;
        }
        v16 = (unsigned int)(v16 + 1);
        ++v17;
      }
      while ( (unsigned int)v16 < 2 );
      v32->FixUpLoad(v32, save, vehicleSystem);
      v6 = p;
    }
    v7 += 3360;
    v31 = v7;
  }
  memset_0(v3->m_vehiclePhysicsObjectsPmove, 0, sizeof(v3->m_vehiclePhysicsObjectsPmove));
}

/*
==============
BgVehiclePhysicsManager::SaveAllToMemFile
==============
*/
void BgVehiclePhysicsManager::SaveAllToMemFile(BgVehiclePhysicsManager *this, MemoryFile *memFile)
{
  BgVehiclePhysicsObjectBuffer *m_vehiclePhysicsObjects; 
  unsigned int i; 
  unsigned int j; 
  __int64 v7; 
  char *v8; 
  int p; 

  if ( !memFile && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_manager.inl", 331, ASSERT_TYPE_ASSERT, "(memFile)", (const char *)&queryFormat, "memFile") )
    __debugbreak();
  p = 3;
  MemFile_WriteData(memFile, 4ui64, &p);
  m_vehiclePhysicsObjects = this->m_vehiclePhysicsObjects;
  for ( i = 0; i < 0x80; ++i )
  {
    p = *(_DWORD *)&m_vehiclePhysicsObjects->buffer[8] != 0;
    MemFile_WriteData(memFile, 4ui64, &p);
    if ( *(_DWORD *)&m_vehiclePhysicsObjects->buffer[8] )
    {
      (**(void (__fastcall ***)(BgVehiclePhysicsObjectBuffer *, MemoryFile *))m_vehiclePhysicsObjects->buffer)(m_vehiclePhysicsObjects, memFile);
      for ( j = 0; j < 2; ++j )
      {
        v7 = 958472i64;
        if ( !m_vehiclePhysicsObjects->buffer[612] )
          v7 = 430088i64;
        v8 = (char *)this + 768 * (int)i + 384 * (int)j + v7;
        if ( *((_DWORD *)v8 + 2) >= 0x1000000u )
        {
          p = 1;
          MemFile_WriteData(memFile, 4ui64, &p);
          (**(void (__fastcall ***)(char *, MemoryFile *))v8)(v8, memFile);
        }
        else
        {
          p = 0;
          MemFile_WriteData(memFile, 4ui64, &p);
        }
      }
    }
    ++m_vehiclePhysicsObjects;
  }
}

/*
==============
BgVehiclePhysicsManager::GetComponentById<BgVehiclePhysicsComponent>
==============
*/
BgVehiclePhysicsComponent *BgVehiclePhysicsManager::GetComponentById<BgVehiclePhysicsComponent>(BgVehiclePhysicsManager *this, VehiclePhysicsComponentId compId)
{
  unsigned __int8 v4; 
  unsigned int v5; 
  __int64 v6; 
  __int64 v7; 
  __int64 v8; 
  char *v9; 
  __int64 v11; 

  if ( compId.id )
  {
    v4 = BYTE2(compId.id);
    if ( BYTE2(compId.id) < 2u )
      goto LABEL_7;
  }
  else
  {
    v4 = 0;
  }
  if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_manager.inl", 188, ASSERT_TYPE_ASSERT, "(compId.IsValid())", (const char *)&queryFormat, "compId.IsValid()") )
    __debugbreak();
LABEL_7:
  v5 = LOWORD(compId.id) - 1;
  if ( v5 >= 0x80 )
  {
    LODWORD(v11) = LOWORD(compId.id) - 1;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_manager.inl", 19, ASSERT_TYPE_ASSERT, "(unsigned)( index ) < (unsigned)( (1 << 7) )", "index doesn't index MAX_VEHICLES\n\t%i not in [0, %i)", v11, 128) )
      __debugbreak();
  }
  v6 = 3 * (v4 + 2i64 * LOWORD(compId.id));
  v7 = 957704i64;
  v8 = v6 << 7;
  if ( !this->m_vehiclePhysicsObjects[v5].buffer[612] )
    v7 = 429320i64;
  v9 = (char *)this + v8 + v7;
  if ( *((_DWORD *)v9 + 2) != compId.id && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_vehicle_physics_manager.inl", 195, ASSERT_TYPE_ASSERT, "(baseComp->GetId().IsEqual( compId ))", (const char *)&queryFormat, "baseComp->GetId().IsEqual( compId )") )
    __debugbreak();
  return (BgVehiclePhysicsComponent *)v9;
}


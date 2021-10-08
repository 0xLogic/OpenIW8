/*
==============
GVehicleCollisionSystem::CollisionScriptables
==============
*/

void __fastcall GVehicleCollisionSystem::CollisionScriptables(GVehicleCollisionSystem *this, BgVehicleCollisionCallbackInfo *inOutCollInfo)
{
  ?CollisionScriptables@GVehicleCollisionSystem@@MEAAXAEAUBgVehicleCollisionCallbackInfo@@@Z(this, inOutCollInfo);
}

/*
==============
GVehicleCollisionSystem::FilterTeamTurrets
==============
*/

bool __fastcall GVehicleCollisionSystem::FilterTeamTurrets(GVehicleCollisionSystem *this, BgVehicleCollisionCallbackInfo *inOutCollInfo)
{
  return ?FilterTeamTurrets@GVehicleCollisionSystem@@IEAA_NAEAUBgVehicleCollisionCallbackInfo@@@Z(this, inOutCollInfo);
}

/*
==============
GVehicleCollisionSystem::CollisionFiltering
==============
*/

void __fastcall GVehicleCollisionSystem::CollisionFiltering(GVehicleCollisionSystem *this, BgVehicleCollisionCallbackInfo *inOutCollInfo)
{
  ?CollisionFiltering@GVehicleCollisionSystem@@MEAAXAEAUBgVehicleCollisionCallbackInfo@@@Z(this, inOutCollInfo);
}

/*
==============
GVehicleCollisionSystem::CollideScriptable
==============
*/

void __fastcall GVehicleCollisionSystem::CollideScriptable(GVehicleCollisionSystem *this, BgVehicleCollisionCallbackInfo *inOutCollInfo, unsigned int scriptableIndex, gentity_s *vehEnt, const gentity_s *otherEnt)
{
  ?CollideScriptable@GVehicleCollisionSystem@@IEAAXAEAUBgVehicleCollisionCallbackInfo@@IPEAUgentity_s@@PEBU3@@Z(this, inOutCollInfo, scriptableIndex, vehEnt, otherEnt);
}

/*
==============
GVehicleCollisionSystem::CollideScriptable
==============
*/
void GVehicleCollisionSystem::CollideScriptable(GVehicleCollisionSystem *this, BgVehicleCollisionCallbackInfo *inOutCollInfo, unsigned int scriptableIndex, gentity_s *vehEnt, const gentity_s *otherEnt)
{
  __int64 v6; 
  unsigned int Instance; 
  unsigned int m_serialAndIndex; 
  BgVehiclePhysics *v10; 
  BgVehiclePhysics *v11; 
  bool v12; 
  const dvar_t *v13; 
  const ScriptableDef *def; 
  int flags; 
  bool v16; 
  VehicleScriptableDmg *ScriptableDamageSystem; 
  __int64 v18; 
  __int64 v19; 
  hknpBodyId result; 

  v6 = scriptableIndex;
  if ( inOutCollInfo->vehicleCount == 1 )
  {
    if ( !ScriptableSv_IsServerInstance(scriptableIndex) && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_collision_system.cpp", 117, ASSERT_TYPE_ASSERT, "( ScriptableSv_IsServerInstance( scriptableIndex ) )", (const char *)&queryFormat, "ScriptableSv_IsServerInstance( scriptableIndex )") )
      __debugbreak();
    if ( G_Door_ScriptableIsDoor(v6) )
    {
      inOutCollInfo->filterCollision = 0;
    }
    else
    {
      if ( !otherEnt )
        goto LABEL_17;
      Instance = G_PhysicsObject_GetInstance(PHYSICS_WORLD_ID_FIRST, otherEnt);
      if ( Instance == -1 )
        goto LABEL_17;
      if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
        __debugbreak();
      if ( !g_physicsServerWorldsCreated && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", 0) )
        __debugbreak();
      m_serialAndIndex = HavokPhysics_GetRigidBodyID(&result, PHYSICS_WORLD_ID_FIRST, Instance, 0)->m_serialAndIndex;
      if ( !Physics_IsRigidBodyValid(PHYSICS_WORLD_ID_FIRST, m_serialAndIndex) || !Physics_IsRigidBodyDynamic(PHYSICS_WORLD_ID_FIRST, m_serialAndIndex) )
      {
LABEL_17:
        v10 = inOutCollInfo->vehObjs[0];
        v12 = 1;
        if ( !v10 || !v10->SupportsFeature(v10, VPFEAT_SCRIPTABLE_FILTERING) )
        {
          v11 = inOutCollInfo->vehObjs[1];
          if ( !v11 || !v11->SupportsFeature(v11, VPFEAT_SCRIPTABLE_FILTERING) )
            v12 = 0;
        }
        v13 = DVARBOOL_scriptable_vehicle_filtering;
        if ( !DVARBOOL_scriptable_vehicle_filtering && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\universal\\dvar.h", 692, ASSERT_TYPE_ASSERT, "(dvar)", "%s\n\tDvar %s accessed after deregistration", "dvar", "scriptable_vehicle_filtering") )
          __debugbreak();
        Dvar_CheckFrontendServerThread(v13);
        if ( v13->current.enabled && v12 )
        {
          if ( !g_scriptableSv_instanceContexts && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server_utility.h", 81, ASSERT_TYPE_ASSERT, "( g_scriptableSv_instanceContexts )", (const char *)&queryFormat, "g_scriptableSv_instanceContexts") )
            __debugbreak();
          ScriptableCommon_AssertCountsInitialized();
          if ( (unsigned int)v6 >= g_scriptableWorldCounts.serverInstanceCount )
          {
            ScriptableCommon_AssertCountsInitialized();
            LODWORD(v19) = g_scriptableWorldCounts.serverInstanceCount;
            LODWORD(v18) = v6;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\scriptable\\scriptable_server_utility.h", 82, ASSERT_TYPE_ASSERT, "(unsigned)( scriptableIndex ) < (unsigned)( ScriptableCommon_GetServerInstanceCount() )", "scriptableIndex doesn't index ScriptableCommon_GetServerInstanceCount()\n\t%i not in [0, %i)", v18, v19) )
              __debugbreak();
          }
          def = g_scriptableSv_instanceContexts[v6].commonContext.def;
          v16 = 0;
          if ( def )
          {
            flags = def->flags;
            if ( (flags & 0x80) != 0 && (flags & 0x180000) == 0 )
              v16 = 1;
          }
        }
        else
        {
          v16 = ScriptableSv_AllowVehicleCollisionFilter(v6);
        }
        inOutCollInfo->filterCollision = v16;
      }
    }
    if ( vehEnt )
    {
      if ( !GVehicles::ms_gVehiclesSystem && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle.h", 562, ASSERT_TYPE_ASSERT, "( ms_gVehiclesSystem )", (const char *)&queryFormat, "ms_gVehiclesSystem") )
        __debugbreak();
      ScriptableDamageSystem = GVehicles::PhysicsGetScriptableDamageSystem(GVehicles::ms_gVehiclesSystem);
      VehicleScriptableDmg::Add(ScriptableDamageSystem, vehEnt->s.number, v6);
    }
  }
}

/*
==============
GVehicleCollisionSystem::CollisionFiltering
==============
*/
void GVehicleCollisionSystem::CollisionFiltering(GVehicleCollisionSystem *this, BgVehicleCollisionCallbackInfo *inOutCollInfo)
{
  gentity_s *GEntityFromUserData; 
  gentity_s *v4; 
  gentity_s *v5; 
  sentient_s *sentient; 
  __int32 team; 
  __int32 eTeam; 
  gclient_s *client; 
  Vehicle *vehicle; 
  sentient_s *v11; 
  gclient_s *v12; 
  Vehicle *v13; 

  GEntityFromUserData = G_ExtractGEntityFromUserData(inOutCollInfo->bodyUserData[0]);
  v4 = G_ExtractGEntityFromUserData(inOutCollInfo->bodyUserData[1]);
  v5 = v4;
  if ( GEntityFromUserData && v4 )
  {
    if ( GEntityFromUserData->s.eType != ET_VEHICLE && v4->s.eType != ET_VEHICLE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_collision_system.cpp", 91, ASSERT_TYPE_ASSERT, "( entityA->s.eType == ET_VEHICLE || entityB->s.eType == ET_VEHICLE )", "At least one entity must be a vehicle") )
      __debugbreak();
    if ( GEntityFromUserData->s.eType == ET_TURRET || v5->s.eType == ET_TURRET )
    {
      sentient = GEntityFromUserData->sentient;
      team = 0;
      if ( sentient )
      {
        eTeam = sentient->eTeam;
      }
      else
      {
        client = GEntityFromUserData->client;
        if ( client )
        {
          eTeam = client->sess.cs.team;
        }
        else
        {
          vehicle = GEntityFromUserData->vehicle;
          if ( vehicle )
            eTeam = vehicle->team;
          else
            eTeam = 0;
        }
      }
      v11 = v5->sentient;
      if ( v11 )
      {
        team = v11->eTeam;
      }
      else
      {
        v12 = v5->client;
        if ( v12 )
        {
          team = v12->sess.cs.team;
        }
        else
        {
          v13 = v5->vehicle;
          if ( v13 )
            team = v13->team;
        }
      }
      if ( eTeam == team )
        inOutCollInfo->filterCollision = 1;
    }
  }
}

/*
==============
GVehicleCollisionSystem::CollisionScriptables
==============
*/
void GVehicleCollisionSystem::CollisionScriptables(GVehicleCollisionSystem *this, BgVehicleCollisionCallbackInfo *inOutCollInfo)
{
  bool IsPhysicsVehicle; 
  _BOOL8 v5; 
  int v6; 
  const gentity_s *GEntityFromUserData; 
  const gentity_s *otherEnt; 
  unsigned int v9; 
  gentity_s *v10; 
  unsigned int scriptableIndex; 

  if ( inOutCollInfo->vehicleCount == 1 )
  {
    IsPhysicsVehicle = BgVehicleCollisionCallbackInfo::IsPhysicsVehicle(inOutCollInfo, 0);
    scriptableIndex = -1;
    v5 = !IsPhysicsVehicle;
    v6 = *((_DWORD *)&inOutCollInfo->worldId + 5 - v5);
    GEntityFromUserData = G_ExtractGEntityFromUserData(v6);
    otherEnt = GEntityFromUserData;
    if ( GEntityFromUserData )
    {
      if ( !ScriptableSv_TryGetIndexForEntity(GEntityFromUserData, &scriptableIndex) )
        return;
    }
    else if ( Physics_GetRefSystem(v6) == Physics_RefSystem_Scriptable )
    {
      v9 = v6 & 0x3FFFFF;
      scriptableIndex = v9;
LABEL_5:
      if ( v9 != -1 )
      {
        v10 = G_ExtractGEntityFromUserData(inOutCollInfo->bodyUserData[v5]);
        GVehicleCollisionSystem::CollideScriptable(this, inOutCollInfo, scriptableIndex, v10, otherEnt);
      }
      return;
    }
    v9 = scriptableIndex;
    goto LABEL_5;
  }
}

/*
==============
GVehicleCollisionSystem::FilterTeamTurrets
==============
*/
bool GVehicleCollisionSystem::FilterTeamTurrets(GVehicleCollisionSystem *this, BgVehicleCollisionCallbackInfo *inOutCollInfo)
{
  gentity_s *GEntityFromUserData; 
  gentity_s *v4; 
  gentity_s *v5; 
  sentient_s *sentient; 
  __int32 team; 
  team_t eTeam; 
  gclient_s *client; 
  Vehicle *vehicle; 
  sentient_s *v11; 
  gclient_s *v12; 
  Vehicle *v13; 

  GEntityFromUserData = G_ExtractGEntityFromUserData(inOutCollInfo->bodyUserData[0]);
  v4 = G_ExtractGEntityFromUserData(inOutCollInfo->bodyUserData[1]);
  v5 = v4;
  if ( !GEntityFromUserData || !v4 )
    return 0;
  if ( GEntityFromUserData->s.eType != ET_VEHICLE && v4->s.eType != ET_VEHICLE && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_vehicle_collision_system.cpp", 91, ASSERT_TYPE_ASSERT, "( entityA->s.eType == ET_VEHICLE || entityB->s.eType == ET_VEHICLE )", "At least one entity must be a vehicle") )
    __debugbreak();
  if ( GEntityFromUserData->s.eType != ET_TURRET && v5->s.eType != ET_TURRET )
    return 0;
  sentient = GEntityFromUserData->sentient;
  team = 0;
  if ( sentient )
  {
    eTeam = sentient->eTeam;
  }
  else
  {
    client = GEntityFromUserData->client;
    if ( client )
    {
      eTeam = client->sess.cs.team;
    }
    else
    {
      vehicle = GEntityFromUserData->vehicle;
      eTeam = vehicle ? vehicle->team : TEAM_ZERO;
    }
  }
  v11 = v5->sentient;
  if ( v11 )
  {
    team = v11->eTeam;
  }
  else
  {
    v12 = v5->client;
    if ( v12 )
    {
      team = v12->sess.cs.team;
    }
    else
    {
      v13 = v5->vehicle;
      if ( v13 )
        team = v13->team;
    }
  }
  return eTeam == team;
}

/*
==============
G_ExtractGEntityFromUserData
==============
*/
gentity_s *G_ExtractGEntityFromUserData(int bodyUserData)
{
  __int64 RefId; 
  int v4; 
  int v5; 

  if ( Physics_GetRefSystem(bodyUserData) != Physics_RefSystem_GEntities )
    return 0i64;
  RefId = Physics_GetRefId(bodyUserData);
  if ( (unsigned int)RefId >= 0x800 )
  {
    v5 = 2048;
    v4 = RefId;
    if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 188, ASSERT_TYPE_ASSERT, "(unsigned)( entityIndex ) < (unsigned)( ( 2048 ) )", "entityIndex doesn't index MAX_GENTITIES\n\t%i not in [0, %i)", v4, v5) )
      __debugbreak();
  }
  if ( !g_entities && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\game\\g_public.h", 189, ASSERT_TYPE_ASSERT, "( g_entities != nullptr )", (const char *)&queryFormat, "g_entities != nullptr") )
    __debugbreak();
  return &g_entities[RefId];
}


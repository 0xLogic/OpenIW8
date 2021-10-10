/*
==============
PhysicsScript_GetNumBodies
==============
*/
void PhysicsScript_GetNumBodies(scrContext_t *scrContext, scr_entref_t entref)
{
  int NumRigidBodys; 
  unsigned int entnum; 
  gentity_s *v5; 
  scr_string_t classname; 
  entityType_s eType; 
  const char *v8; 
  G_PhysicsObject *v9; 
  unsigned int v10; 

  NumRigidBodys = 0;
  entnum = entref.entnum;
  if ( entref.entclass )
  {
    Scr_ObjectError(COM_ERR_4857, scrContext, "not an entity");
    v5 = NULL;
  }
  else
  {
    if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsscript.cpp", 132, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
      __debugbreak();
    v5 = &g_entities[entnum];
    classname = v5->classname;
    if ( classname != scr_const.script_brushmodel && classname != scr_const.script_model && classname != scr_const.scriptable )
    {
      eType = v5->s.eType;
      if ( eType != ET_ITEM && eType != ET_VEHICLE )
      {
        v8 = j_va("entity %i is not a script_brushmodel or script_model or scriptable or dropped item or vehicle (which are the only script entities supported by this physics function)", entnum);
        Scr_ObjectError(COM_ERR_4856, scrContext, v8);
      }
    }
  }
  v9 = G_PhysicsObject_Get(v5);
  if ( v9 )
  {
    v10 = v9->physicsInstances[0];
    if ( v10 != -1 )
      NumRigidBodys = Physics_GetNumRigidBodys(PHYSICS_WORLD_ID_FIRST, v10);
  }
  Scr_AddInt(scrContext, NumRigidBodys);
}

/*
==============
PhysicsScript_GetBodyId
==============
*/
void PhysicsScript_GetBodyId(scrContext_t *scrContext, scr_entref_t entref)
{
  unsigned int entnum; 
  gentity_s *v4; 
  scr_string_t classname; 
  entityType_s eType; 
  const char *v7; 
  unsigned int Int; 
  G_PhysicsObject *v9; 
  unsigned int v10; 
  unsigned int NumRigidBodys; 
  const char *v12; 
  int RigidBodyID; 

  entnum = entref.entnum;
  if ( entref.entclass )
  {
    Scr_ObjectError(COM_ERR_4857, scrContext, "not an entity");
    v4 = NULL;
  }
  else
  {
    if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsscript.cpp", 171, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
      __debugbreak();
    v4 = &g_entities[entnum];
    classname = v4->classname;
    if ( classname != scr_const.script_brushmodel && classname != scr_const.script_model && classname != scr_const.scriptable )
    {
      eType = v4->s.eType;
      if ( eType != ET_ITEM && eType != ET_VEHICLE )
      {
        v7 = j_va("entity %i is not a script_brushmodel or script_model or scriptable or dropped item or vehicle (which are the only script entities supported by this physics function)", entnum);
        Scr_ObjectError(COM_ERR_4856, scrContext, v7);
      }
    }
  }
  Int = Scr_GetInt(scrContext, 0);
  v9 = G_PhysicsObject_Get(v4);
  if ( !v9 )
    Scr_Error(COM_ERR_4862, scrContext, "Physics_GetBodyId: No physics object found");
  v10 = v9->physicsInstances[0];
  if ( v10 == -1 )
    Scr_Error(COM_ERR_4863, scrContext, "Physics_GetBodyId: No physics instance found");
  NumRigidBodys = Physics_GetNumRigidBodys(PHYSICS_WORLD_ID_FIRST, v10);
  if ( Int >= NumRigidBodys )
  {
    v12 = j_va("Physics_GetBodyId: Index out of range. There are %d bodies in the physics asset.", NumRigidBodys);
    Scr_Error(COM_ERR_4864, scrContext, v12);
  }
  RigidBodyID = Physics_GetRigidBodyID(PHYSICS_WORLD_ID_FIRST, v10, Int);
  if ( (RigidBodyID & 0xFFFFFF) == 0xFFFFFF )
    Scr_Error(COM_ERR_4865, scrContext, "Physics_GetBodyId: No body found");
  Scr_AddInt(scrContext, RigidBodyID);
}

/*
==============
PhysicsScript_GetPlayerGroundLinVel
==============
*/
void PhysicsScript_GetPlayerGroundLinVel(scrContext_t *scrContext, scr_entref_t entref)
{
  gentity_s *Entity; 
  const playerState_s *p_ps; 
  __int64 m_movingPlatformEntity; 
  G_PhysicsObject *v6; 
  unsigned int v7; 
  unsigned int RigidBodyID; 
  float v9; 
  float v10; 
  float v11; 
  __int64 value; 
  __int64 v13; 
  vec3_t position; 
  vec3_t angVel; 
  vec3_t linVel; 
  float v17[4]; 
  vec4_t orientation; 

  Entity = GetEntity(entref);
  if ( !Entity && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsscript.cpp", 222, ASSERT_TYPE_ASSERT, "(mSelf)", (const char *)&queryFormat, "mSelf") )
    __debugbreak();
  value = 0i64;
  *(float *)&v13 = 0.0;
  p_ps = &Entity->client->ps;
  if ( !p_ps )
  {
    Scr_Error(COM_ERR_4866, scrContext, "Physics_GetPlayerGroundLinVel: Not called on a player");
    p_ps = &Entity->client->ps;
  }
  if ( BGMovingPlatforms::IsOnMovingPlatform(p_ps) )
  {
    m_movingPlatformEntity = Entity->client->ps.movingPlatforms.m_movingPlatformEntity;
    if ( (_DWORD)m_movingPlatformEntity == 2047 )
      Scr_Error(COM_ERR_4867, scrContext, "Physics_GetPlayerGroundLinVel: Should be on a moving platform and we aren't");
    if ( !G_IsEntityInUse(m_movingPlatformEntity) )
      Scr_Error(COM_ERR_4868, scrContext, "Physics_GetPlayerGroundLinVel: Moving platform couldn't be found");
    if ( !(_BYTE)SvGameGlobals::ms_allocatedType && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_game_globals.h", 98, ASSERT_TYPE_ASSERT, "(ms_allocatedType != GameModeType::NONE)", "%s\n\tAttempting to access server global data outside of an active server context", "ms_allocatedType != GameModeType::NONE") )
      __debugbreak();
    if ( !SvGameGlobals::ms_svGameGlobals && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\server\\sv_game_globals.h", 99, ASSERT_TYPE_ASSERT, "( ms_svGameGlobals )", (const char *)&queryFormat, "ms_svGameGlobals", value, v13) )
      __debugbreak();
    v6 = G_PhysicsObject_Get(&SvGameGlobals::ms_svGameGlobals->gentities[m_movingPlatformEntity]);
    if ( !v6 )
      Scr_Error(COM_ERR_4869, scrContext, "Physics_GetPlayerGroundLinVel: Moving platform has no physics object");
    v7 = v6->physicsInstances[0];
    if ( v7 == -1 )
    {
      Scr_AddVector(scrContext, (const float *)&value);
    }
    else
    {
      if ( Physics_GetNumRigidBodys(PHYSICS_WORLD_ID_FIRST, v7) != 1 )
        Scr_Error(COM_ERR_4870, scrContext, "Physics_GetPlayerGroundLinVel: Currently, we only support moving platforms with 1 serverside body");
      RigidBodyID = Physics_GetRigidBodyID(PHYSICS_WORLD_ID_FIRST, v7, 0);
      if ( (RigidBodyID & 0xFFFFFF) == 0xFFFFFF )
        Scr_Error(COM_ERR_4871, scrContext, "Physics_GetBodyId: No body found");
      Physics_GetRigidBodyTransform(PHYSICS_WORLD_ID_FIRST, RigidBodyID, &position, &orientation);
      Physics_GetRigidBodyLinAngVel(PHYSICS_WORLD_ID_FIRST, RigidBodyID, &linVel, &angVel);
      v9 = Entity->r.currentOrigin.v[0] - position.v[0];
      v10 = Entity->r.currentOrigin.v[2] - position.v[2];
      v11 = Entity->r.currentOrigin.v[1] - position.v[1];
      v17[0] = (float)((float)(v10 * angVel.v[1]) - (float)(v11 * angVel.v[2])) + linVel.v[0];
      v17[1] = (float)((float)(v9 * angVel.v[2]) - (float)(v10 * angVel.v[0])) + linVel.v[1];
      v17[2] = (float)((float)(v11 * angVel.v[0]) - (float)(v9 * angVel.v[1])) + linVel.v[2];
      Scr_AddVector(scrContext, v17);
    }
  }
  else
  {
    Scr_AddVector(scrContext, (const float *)&value);
  }
}

/*
==============
PhysicsScript_CreateInstance
==============
*/
void PhysicsScript_CreateInstance(scrContext_t *scrContext, scr_entref_t entref)
{
  unsigned int entnum; 
  gentity_s *v4; 
  scr_string_t classname; 
  const char *v6; 
  int Int; 
  bool v8; 
  int v9; 
  bool v10; 
  G_PhysicsObject *v11; 
  const DObj *ServerDObjForEnt; 
  const XModel *FirstModel; 
  EntityClass entclass; 

  entclass = entref.entclass;
  entnum = entref.entnum;
  Sys_ProfBeginNamedEvent(0xFFFF0000, "PhysicsScript_CreateInstance");
  if ( entclass )
  {
    Scr_ObjectError(COM_ERR_4855, scrContext, "not an entity");
    v4 = NULL;
  }
  else
  {
    if ( entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsscript.cpp", 325, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
      __debugbreak();
    v4 = &g_entities[entnum];
    classname = v4->classname;
    if ( classname != scr_const.script_brushmodel && classname != scr_const.script_model && classname != scr_const.scriptable && v4->s.eType != ET_ITEM )
    {
      v6 = j_va("entity %i is not a script_brushmodel or script_model or scriptable or dropped item (which are the only script entities supported by this physics function)", entnum);
      Scr_ObjectError(COM_ERR_4854, scrContext, v6);
    }
  }
  Int = Scr_GetInt(scrContext, 0);
  v8 = Int != 0;
  v9 = Scr_GetInt(scrContext, 1u);
  v10 = v9 != 0;
  if ( !Int && !v9 )
    Scr_Error(COM_ERR_4872, scrContext, "Physics_CreateInstance: An object with physics must either be granted physics control or be server authoritative");
  if ( v4->s.eType != ET_SCRIPTMOVER )
    Scr_Error(COM_ERR_4873, scrContext, "Physics_CreateInstance: Entity is not a script mover");
  v11 = G_PhysicsObject_Get(v4);
  if ( !v11 )
    Scr_Error(COM_ERR_4874, scrContext, "Physics_CreateInstance: No physics object found");
  if ( v11->physicsInstances[0] != -1 )
    Scr_Error(COM_ERR_4875, scrContext, "Physics_CreateInstance: Physics already instantiated");
  ServerDObjForEnt = Com_GetServerDObjForEnt(v4);
  if ( !ServerDObjForEnt )
    Scr_Error(COM_ERR_4876, scrContext, "Physics_CreateInstance: Entity has no dobj");
  FirstModel = DObjGetFirstModel(ServerDObjForEnt);
  if ( !FirstModel )
    Scr_Error(COM_ERR_4877, scrContext, "Physics_CreateInstance: Entity has no xmodel");
  if ( !FirstModel->physicsAsset )
    Scr_Error(COM_ERR_4878, scrContext, "Physics_CreateInstance: Entity has no physics asset");
  if ( v8 )
  {
    if ( v10 )
      G_Items_EnablePhysics(v4);
    else
      G_Items_CreatePhysObj(v4);
    if ( v11->physicsInstances[0] == -1 )
      Scr_Error(COM_ERR_4879, scrContext, "Physics_CreateInstance: Physics failed to create");
  }
  else
  {
    if ( G_SetOriginAndAngle(v4, &v4->r.currentOrigin, &v4->r.currentAngles, 1, 0) )
    {
      Physics_SetBroadphaseNeedsRefresh(PHYSICS_WORLD_ID_FIRST, 1);
      Physics_SetBroadphaseNeedsRefresh(PHYSICS_WORLD_ID_SERVER_DETAIL, 1);
    }
    v4->s.lerp.pos.trType = TR_PHYSICS_CLIENT_AUTH;
    v4->s.lerp.apos.trType = TR_PHYSICS_CLIENT_AUTH;
  }
  Sys_ProfEndNamedEvent();
}

/*
==============
PhysicsScript_TakeControl
==============
*/
void PhysicsScript_TakeControl(scrContext_t *scrContext, scr_entref_t entref)
{
  unsigned int entnum; 
  EntityClass entclass; 
  gentity_s *v5; 
  scr_string_t classname; 
  const char *v7; 
  int NumParam; 
  bool v9; 
  __int128 v10; 
  G_PhysicsObject *v14; 
  unsigned int v15; 
  unsigned int NumRigidBodys; 
  const DObj *ServerDObjForEnt; 
  const XModel *FirstModel; 
  unsigned int v19; 
  const PhysicsAsset *v20; 
  unsigned int m_serialAndIndex; 
  __int64 v22; 
  bool v23; 
  hknpBodyId result[2]; 
  vec3_t v25; 
  vec3_t vectorValue; 
  vec3_t normalizedDirection; 

  entnum = entref.entnum;
  entclass = entref.entclass;
  Sys_ProfBeginNamedEvent(0xFFFF0000, "PhysicsScript_TakeControl");
  if ( entclass )
  {
    Scr_ObjectError(COM_ERR_4855, scrContext, "not an entity");
    v5 = NULL;
  }
  else
  {
    if ( entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsscript.cpp", 444, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
      __debugbreak();
    v5 = &g_entities[entnum];
    classname = v5->classname;
    if ( classname != scr_const.script_brushmodel && classname != scr_const.script_model && classname != scr_const.scriptable && v5->s.eType != ET_ITEM )
    {
      v7 = j_va("entity %i is not a script_brushmodel or script_model or scriptable or dropped item (which are the only script entities supported by this physics function)", entnum);
      Scr_ObjectError(COM_ERR_4854, scrContext, v7);
    }
  }
  NumParam = Scr_GetNumParam(scrContext);
  v9 = Scr_GetInt(scrContext, 0) != 0;
  v23 = NumParam > 1;
  if ( NumParam <= 1 )
  {
    LODWORD(_XMM6) = 0;
    vectorValue.v[0] = 0.0;
    vectorValue.v[1] = 0.0;
    vectorValue.v[2] = 0.0;
    v25.v[0] = 0.0;
    v25.v[1] = 0.0;
    v25.v[2] = 0.0;
    normalizedDirection.v[0] = 0.0;
    normalizedDirection.v[1] = 0.0;
    normalizedDirection.v[2] = 0.0;
  }
  else
  {
    if ( NumParam == 2 )
      Scr_Error(COM_ERR_4880, scrContext, "Physics_TakeControl: If you set position, you must set impulse too");
    Scr_GetVector(scrContext, 1u, &vectorValue);
    Scr_GetVector(scrContext, 2u, &v25);
    v10 = LODWORD(v25.v[0]);
    *(float *)&v10 = fsqrt((float)((float)(*(float *)&v10 * *(float *)&v10) + (float)(v25.v[1] * v25.v[1])) + (float)(v25.v[2] * v25.v[2]));
    _XMM6 = v10;
    __asm
    {
      vcmpless xmm0, xmm6, cs:__real@80000000
      vblendvps xmm0, xmm6, xmm1, xmm0
    }
    normalizedDirection.v[0] = v25.v[0] * (float)(1.0 / *(float *)&_XMM0);
    normalizedDirection.v[2] = v25.v[2] * (float)(1.0 / *(float *)&_XMM0);
    normalizedDirection.v[1] = v25.v[1] * (float)(1.0 / *(float *)&_XMM0);
  }
  if ( v5->s.eType != ET_SCRIPTMOVER )
    Scr_Error(COM_ERR_4881, scrContext, "Physics_TakeControl: Entity is not a script mover");
  v14 = G_PhysicsObject_Get(v5);
  if ( !v14 )
    Scr_Error(COM_ERR_4882, scrContext, "Physics_TakeControl: No physics object found");
  v15 = v14->physicsInstances[0];
  if ( v15 == -1 )
    Scr_Error(COM_ERR_4883, scrContext, "Physics_TakeControl: No physics instance found - physics probably hasn't been instantiated");
  NumRigidBodys = Physics_GetNumRigidBodys(PHYSICS_WORLD_ID_FIRST, v15);
  if ( !NumRigidBodys )
    Scr_Error(COM_ERR_4884, scrContext, "Physics_TakeControl: No physics bodies in instance");
  ServerDObjForEnt = Com_GetServerDObjForEnt(v5);
  if ( !ServerDObjForEnt )
    Scr_Error(COM_ERR_4885, scrContext, "Physics_TakeControl: Entity has no dobj");
  FirstModel = DObjGetFirstModel(ServerDObjForEnt);
  if ( !FirstModel )
    Scr_Error(COM_ERR_4886, scrContext, "Physics_TakeControl: Entity has no xmodel");
  *(_QWORD *)&result[0].m_serialAndIndex = FirstModel->physicsAsset;
  if ( !*(_QWORD *)&result[0].m_serialAndIndex )
    Scr_Error(COM_ERR_4887, scrContext, "Physics_TakeControl: Entity has no physics asset");
  if ( G_SetOriginAndAngle(v5, &v5->r.currentOrigin, &v5->r.currentAngles, 1, 0) )
  {
    Physics_SetBroadphaseNeedsRefresh(PHYSICS_WORLD_ID_FIRST, 1);
    Physics_SetBroadphaseNeedsRefresh(PHYSICS_WORLD_ID_SERVER_DETAIL, 1);
  }
  if ( v9 )
  {
    v14->mapping = PHYSICSOBJECT_MAPPING_PHYSICS_AUTH;
    v5->s.lerp.pos.trType = TR_PHYSICS_SERVER_AUTH;
    v19 = 0;
    v5->s.lerp.apos.trType = TR_PHYSICS_SERVER_AUTH;
    if ( NumRigidBodys )
    {
      v20 = *(const PhysicsAsset **)&result[0].m_serialAndIndex;
      do
      {
        if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
          __debugbreak();
        if ( v15 == -1 )
        {
          LODWORD(v22) = 0;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 107, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid Instance in world %i", "instanceId != PHYSICSINSTANCEID_INVALID", v22) )
            __debugbreak();
        }
        if ( !g_physicsServerWorldsCreated )
        {
          LODWORD(v22) = 0;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v22) )
            __debugbreak();
        }
        m_serialAndIndex = HavokPhysics_GetRigidBodyID(result, PHYSICS_WORLD_ID_FIRST, v15, v19)->m_serialAndIndex;
        if ( (m_serialAndIndex & 0xFFFFFF) == 0xFFFFFF )
          Scr_Error(COM_ERR_4888, scrContext, "Physics_TakeControl: Invalid rigid body found in instance");
        Physics_SetRigidBodyToDefault(PHYSICS_WORLD_ID_FIRST, m_serialAndIndex, v20, v19);
        G_PhysicsObject_IdentifyRigidBodyType(v5->s.number);
        if ( v23 )
          Physics_ApplyImpulse(PHYSICS_WORLD_ID_FIRST, m_serialAndIndex, &vectorValue, &normalizedDirection, *(float *)&_XMM6);
        ++v19;
      }
      while ( v19 < NumRigidBodys );
    }
  }
  else
  {
    G_Utils_DestroyEntityPhysics(v5);
    v5->s.lerp.pos.trType = TR_PHYSICS_CLIENT_AUTH;
    v5->s.lerp.apos.trType = TR_PHYSICS_CLIENT_AUTH;
    if ( v23 )
    {
      v5->s.lerp.pos.trDelta = vectorValue;
      v5->s.lerp.apos.trDelta = v25;
    }
  }
  Sys_ProfEndNamedEvent();
}

/*
==============
PhysicsScript_ApplyImpulse
==============
*/
void PhysicsScript_ApplyImpulse(scrContext_t *scrContext, scr_entref_t entref)
{
  unsigned int entnum; 
  gentity_s *v4; 
  scr_string_t classname; 
  entityType_s eType; 
  const char *v7; 
  G_PhysicsObject *v8; 
  unsigned int v9; 
  unsigned int NumRigidBodys; 
  unsigned int v11; 
  __int128 v13; 
  unsigned int m_serialAndIndex; 
  __int64 v17; 
  hknpBodyId result; 
  vec3_t v19; 
  vec3_t normalizedDirection; 
  vec3_t vectorValue; 

  entnum = entref.entnum;
  if ( entref.entclass )
  {
    Scr_ObjectError(COM_ERR_4857, scrContext, "not an entity");
    v4 = NULL;
  }
  else
  {
    if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsscript.cpp", 600, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
      __debugbreak();
    v4 = &g_entities[entnum];
    classname = v4->classname;
    if ( classname != scr_const.script_brushmodel && classname != scr_const.script_model && classname != scr_const.scriptable )
    {
      eType = v4->s.eType;
      if ( eType != ET_ITEM && eType != ET_VEHICLE )
      {
        v7 = j_va("entity %i is not a script_brushmodel or script_model or scriptable or dropped item or vehicle (which are the only script entities supported by this physics function)", entnum);
        Scr_ObjectError(COM_ERR_4856, scrContext, v7);
      }
    }
  }
  Scr_GetVector(scrContext, 0, &vectorValue);
  Scr_GetVector(scrContext, 1u, &v19);
  if ( ((v4->s.eType - 6) & 0xFFF7) != 0 )
    Scr_Error(COM_ERR_4889, scrContext, "Physics_ApplyImpulse: Entity is not a script mover nor vehicle");
  v8 = G_PhysicsObject_Get(v4);
  if ( !v8 )
    Scr_Error(COM_ERR_4890, scrContext, "Physics_ApplyImpulse: No physics object found");
  v9 = v8->physicsInstances[0];
  if ( v9 == -1 )
    Scr_Error(COM_ERR_4891, scrContext, "Physics_ApplyImpulse: No physics instance found - physics probably hasn't been instantiated");
  NumRigidBodys = Physics_GetNumRigidBodys(PHYSICS_WORLD_ID_FIRST, v9);
  if ( !NumRigidBodys )
    Scr_Error(COM_ERR_4892, scrContext, "Physics_ApplyImpulse: No physics bodies in instance");
  v11 = 0;
  v13 = LODWORD(v19.v[0]);
  *(float *)&v13 = fsqrt((float)((float)(*(float *)&v13 * *(float *)&v13) + (float)(v19.v[1] * v19.v[1])) + (float)(v19.v[2] * v19.v[2]));
  _XMM6 = v13;
  __asm
  {
    vcmpless xmm0, xmm6, cs:__real@80000000
    vblendvps xmm0, xmm6, xmm1, xmm0
  }
  normalizedDirection.v[0] = v19.v[0] * (float)(1.0 / *(float *)&_XMM0);
  normalizedDirection.v[2] = v19.v[2] * (float)(1.0 / *(float *)&_XMM0);
  normalizedDirection.v[1] = v19.v[1] * (float)(1.0 / *(float *)&_XMM0);
  if ( NumRigidBodys )
  {
    do
    {
      if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
        __debugbreak();
      if ( v9 == -1 )
      {
        LODWORD(v17) = 0;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 107, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid Instance in world %i", "instanceId != PHYSICSINSTANCEID_INVALID", v17) )
          __debugbreak();
      }
      if ( !g_physicsServerWorldsCreated )
      {
        LODWORD(v17) = 0;
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v17) )
          __debugbreak();
      }
      m_serialAndIndex = HavokPhysics_GetRigidBodyID(&result, PHYSICS_WORLD_ID_FIRST, v9, v11)->m_serialAndIndex;
      if ( (m_serialAndIndex & 0xFFFFFF) == 0xFFFFFF )
        Scr_Error(COM_ERR_4893, scrContext, "Physics_ApplyImpulse: Invalid rigid body found in instance");
      Physics_ApplyImpulse(PHYSICS_WORLD_ID_FIRST, m_serialAndIndex, &vectorValue, &normalizedDirection, *(float *)&v13);
      ++v11;
    }
    while ( v11 < NumRigidBodys );
  }
}

/*
==============
PhysicsScript_GetCharacterCollisionCapsule
==============
*/
void PhysicsScript_GetCharacterCollisionCapsule(scrContext_t *scrContext, scr_entref_t entref)
{
  unsigned int entnum; 
  gentity_s *v4; 
  const char *v5; 
  entityType_s eType; 
  float v7; 

  entnum = entref.entnum;
  if ( entref.entclass )
  {
    Scr_ObjectError(COM_ERR_4859, scrContext, "not an entity");
    v4 = NULL;
  }
  else
  {
    if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsscript.cpp", 664, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
      __debugbreak();
    v4 = &g_entities[entnum];
    if ( !v4->client && !v4->agent && !v4->sentient && (v4->s.eType != ET_SCRIPTMOVER || v4->s.un.scriptMoverType != 1) )
    {
      v5 = j_va("entity %i is not a player or AI (which are the only script entities supported by this physics function)", entnum);
      Scr_ObjectError(COM_ERR_4858, scrContext, v5);
    }
  }
  eType = v4->s.eType;
  if ( eType == ET_PLAYER )
  {
    Scr_MakeArray(scrContext);
    Scr_AddFloat(scrContext, 35.0);
    Scr_AddArrayStringIndexed(scrContext, scr_const.half_height);
    v7 = FLOAT_15_0;
  }
  else
  {
    if ( ((eType - 17) & 0xFFFD) != 0 && (eType != ET_SCRIPTMOVER || v4->s.un.scriptMoverType != 1) )
    {
      Scr_Error(COM_ERR_4894, scrContext, "PhysicsScript_GetCharacterCollisionCapsule: Entity doesn't appear to be a player, actor, agent or fakeactor");
      return;
    }
    Scr_MakeArray(scrContext);
    Scr_AddFloat(scrContext, v4->r.box.halfSize.v[2]);
    Scr_AddArrayStringIndexed(scrContext, scr_const.half_height);
    v7 = v4->r.box.halfSize.v[0];
  }
  Scr_AddFloat(scrContext, v7);
  Scr_AddArrayStringIndexed(scrContext, scr_const.radius);
}

/*
==============
PhysicsScript_GetEntityMass
==============
*/
void PhysicsScript_GetEntityMass(scrContext_t *scrContext, scr_entref_t entref)
{
  unsigned int entnum; 
  scrContext_t *v3; 
  float v4; 
  __int128 v5; 
  gentity_s *v6; 
  scr_string_t classname; 
  entityType_s eType; 
  const char *v9; 
  G_PhysicsObject *v10; 
  unsigned int v11; 
  unsigned int NumRigidBodys; 
  unsigned int v13; 
  unsigned int m_serialAndIndex; 
  __int128 v15; 
  __int64 v16; 
  float mass; 
  hknpBodyId result; 

  entnum = entref.entnum;
  v3 = scrContext;
  v4 = 0.0;
  v5 = 0i64;
  if ( entref.entclass )
  {
    Scr_ObjectError(COM_ERR_4857, scrContext, "not an entity");
    v6 = NULL;
  }
  else
  {
    if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsscript.cpp", 710, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
      __debugbreak();
    v6 = &g_entities[entnum];
    classname = v6->classname;
    if ( classname != scr_const.script_brushmodel && classname != scr_const.script_model && classname != scr_const.scriptable )
    {
      eType = v6->s.eType;
      if ( eType != ET_ITEM && eType != ET_VEHICLE )
      {
        v9 = j_va("entity %i is not a script_brushmodel or script_model or scriptable or dropped item or vehicle (which are the only script entities supported by this physics function)", entnum);
        Scr_ObjectError(COM_ERR_4856, v3, v9);
      }
    }
  }
  v10 = G_PhysicsObject_Get(v6);
  if ( v10 )
  {
    v11 = v10->physicsInstances[0];
    if ( v11 != -1 )
    {
      NumRigidBodys = Physics_GetNumRigidBodys(PHYSICS_WORLD_ID_FIRST, v11);
      v13 = 0;
      if ( NumRigidBodys )
      {
        do
        {
          if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
            __debugbreak();
          if ( !g_physicsServerWorldsCreated )
          {
            LODWORD(v16) = 0;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v16) )
              __debugbreak();
          }
          m_serialAndIndex = HavokPhysics_GetRigidBodyID(&result, PHYSICS_WORLD_ID_FIRST, v11, v13)->m_serialAndIndex;
          if ( (m_serialAndIndex & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsscript.cpp", 734, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", (const char *)&queryFormat, "Physics_IsRigidBodyIdValid( bodyId )") )
            __debugbreak();
          mass = 0.0;
          Physics_GetRigidBodyMass(PHYSICS_WORLD_ID_FIRST, m_serialAndIndex, &mass);
          v15 = v5;
          *(float *)&v15 = *(float *)&v5 + mass;
          v5 = v15;
          ++v13;
        }
        while ( v13 < NumRigidBodys );
        v3 = scrContext;
      }
      v4 = *(float *)&v5;
    }
  }
  Scr_AddFloat(v3, v4);
}

/*
==============
PhysicsScript_GetEntityDynamicMass
==============
*/
void PhysicsScript_GetEntityDynamicMass(scrContext_t *scrContext, scr_entref_t entref)
{
  unsigned int entnum; 
  scrContext_t *v3; 
  float v4; 
  __int128 v5; 
  gentity_s *v6; 
  scr_string_t classname; 
  entityType_s eType; 
  const char *v9; 
  G_PhysicsObject *v10; 
  unsigned int v11; 
  unsigned int NumRigidBodys; 
  unsigned int v13; 
  unsigned int m_serialAndIndex; 
  __int128 v15; 
  __int64 v16; 
  float mass; 
  hknpBodyId result; 

  entnum = entref.entnum;
  v3 = scrContext;
  v4 = 0.0;
  v5 = 0i64;
  if ( entref.entclass )
  {
    Scr_ObjectError(COM_ERR_4857, scrContext, "not an entity");
    v6 = NULL;
  }
  else
  {
    if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsscript.cpp", 763, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
      __debugbreak();
    v6 = &g_entities[entnum];
    classname = v6->classname;
    if ( classname != scr_const.script_brushmodel && classname != scr_const.script_model && classname != scr_const.scriptable )
    {
      eType = v6->s.eType;
      if ( eType != ET_ITEM && eType != ET_VEHICLE )
      {
        v9 = j_va("entity %i is not a script_brushmodel or script_model or scriptable or dropped item or vehicle (which are the only script entities supported by this physics function)", entnum);
        Scr_ObjectError(COM_ERR_4856, v3, v9);
      }
    }
  }
  v10 = G_PhysicsObject_Get(v6);
  if ( v10 )
  {
    v11 = v10->physicsInstances[0];
    if ( v11 != -1 )
    {
      NumRigidBodys = Physics_GetNumRigidBodys(PHYSICS_WORLD_ID_FIRST, v11);
      v13 = 0;
      if ( NumRigidBodys )
      {
        do
        {
          if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
            __debugbreak();
          if ( !g_physicsServerWorldsCreated )
          {
            LODWORD(v16) = 0;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v16) )
              __debugbreak();
          }
          m_serialAndIndex = HavokPhysics_GetRigidBodyID(&result, PHYSICS_WORLD_ID_FIRST, v11, v13)->m_serialAndIndex;
          if ( (m_serialAndIndex & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsscript.cpp", 787, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", (const char *)&queryFormat, "Physics_IsRigidBodyIdValid( bodyId )") )
            __debugbreak();
          mass = 0.0;
          Physics_GetRigidBodyDynamicMass(PHYSICS_WORLD_ID_FIRST, m_serialAndIndex, &mass);
          v15 = v5;
          *(float *)&v15 = *(float *)&v5 + mass;
          v5 = v15;
          ++v13;
        }
        while ( v13 < NumRigidBodys );
        v3 = scrContext;
      }
      v4 = *(float *)&v5;
    }
  }
  Scr_AddFloat(v3, v4);
}

/*
==============
PhysicsScript_GetEntityCenterOfMass
==============
*/
void PhysicsScript_GetEntityCenterOfMass(scrContext_t *scrContext, scr_entref_t entref)
{
  unsigned int entnum; 
  scrContext_t *v3; 
  __int128 v4; 
  __int128 v5; 
  gentity_s *v6; 
  scr_string_t classname; 
  entityType_s eType; 
  const char *v9; 
  G_PhysicsObject *v10; 
  unsigned int v11; 
  unsigned int NumRigidBodys; 
  __int64 v13; 
  unsigned int v14; 
  unsigned int m_serialAndIndex; 
  __int128 v16; 
  __int128 v17; 
  float v18; 
  __int64 v19; 
  float mass; 
  float v21; 
  hknpBodyId result[2]; 
  scrContext_t *v23; 
  float value; 
  float v25; 
  float v26; 
  float v27; 
  float v28; 
  float v29; 
  float v30; 
  float v31; 
  float v32; 
  vec3_t centerOfMass; 

  v23 = scrContext;
  entnum = entref.entnum;
  v3 = scrContext;
  value = 0.0;
  v25 = 0.0;
  v26 = 0.0;
  v27 = 0.0;
  v28 = 0.0;
  v29 = 0.0;
  v30 = 0.0;
  v31 = 0.0;
  v32 = 0.0;
  v4 = 0i64;
  v5 = 0i64;
  if ( entref.entclass )
  {
    Scr_ObjectError(COM_ERR_4857, scrContext, "not an entity");
    v6 = NULL;
  }
  else
  {
    if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsscript.cpp", 827, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
      __debugbreak();
    v6 = &g_entities[entnum];
    classname = v6->classname;
    if ( classname != scr_const.script_brushmodel && classname != scr_const.script_model && classname != scr_const.scriptable )
    {
      eType = v6->s.eType;
      if ( eType != ET_ITEM && eType != ET_VEHICLE )
      {
        v9 = j_va("entity %i is not a script_brushmodel or script_model or scriptable or dropped item or vehicle (which are the only script entities supported by this physics function)", entnum);
        Scr_ObjectError(COM_ERR_4856, v3, v9);
      }
    }
  }
  v10 = G_PhysicsObject_Get(v6);
  if ( v10 )
  {
    v11 = v10->physicsInstances[0];
    if ( v11 != -1 )
    {
      NumRigidBodys = Physics_GetNumRigidBodys(PHYSICS_WORLD_ID_FIRST, v11);
      v13 = NumRigidBodys;
      v14 = 0;
      if ( NumRigidBodys )
      {
        do
        {
          if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
            __debugbreak();
          if ( !g_physicsServerWorldsCreated )
          {
            LODWORD(v19) = 0;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", v19) )
              __debugbreak();
          }
          m_serialAndIndex = HavokPhysics_GetRigidBodyID(result, PHYSICS_WORLD_ID_FIRST, v11, v14)->m_serialAndIndex;
          if ( (m_serialAndIndex & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsscript.cpp", 849, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", (const char *)&queryFormat, "Physics_IsRigidBodyIdValid( bodyId )") )
            __debugbreak();
          mass = 0.0;
          v21 = 0.0;
          Physics_GetRigidBodyMass(PHYSICS_WORLD_ID_FIRST, m_serialAndIndex, &mass);
          Physics_GetRigidBodyDynamicMass(PHYSICS_WORLD_ID_FIRST, m_serialAndIndex, &v21);
          centerOfMass.v[0] = 0.0;
          centerOfMass.v[1] = 0.0;
          centerOfMass.v[2] = 0.0;
          Physics_GetRigidBodyCenterOfMass(PHYSICS_WORLD_ID_FIRST, m_serialAndIndex, &centerOfMass);
          value = centerOfMass.v[0] + value;
          v25 = centerOfMass.v[1] + v25;
          v26 = centerOfMass.v[2] + v26;
          v27 = (float)(centerOfMass.v[0] * mass) + v27;
          v28 = (float)(centerOfMass.v[1] * mass) + v28;
          v29 = (float)(centerOfMass.v[2] * mass) + v29;
          v30 = (float)(centerOfMass.v[0] * v21) + v30;
          v31 = (float)(centerOfMass.v[1] * v21) + v31;
          ++v14;
          v32 = (float)(centerOfMass.v[2] * v21) + v32;
          v16 = v4;
          *(float *)&v16 = *(float *)&v4 + mass;
          v4 = v16;
          v17 = v5;
          *(float *)&v17 = *(float *)&v5 + v21;
          v5 = v17;
        }
        while ( v14 < (unsigned int)v13 );
        v3 = v23;
      }
      Scr_MakeArray(v3);
      if ( (_DWORD)v13 )
      {
        v18 = (float)v13;
        value = (float)(1.0 / v18) * value;
        v25 = (float)(1.0 / v18) * v25;
        v26 = (float)(1.0 / v18) * v26;
        Scr_AddVector(v3, &value);
        Scr_AddArrayStringIndexed(v3, scr_const.unscaled);
      }
      if ( *(float *)&v4 > 0.0 )
      {
        v27 = (float)(1.0 / *(float *)&v4) * v27;
        v28 = (float)(1.0 / *(float *)&v4) * v28;
        v29 = (float)(1.0 / *(float *)&v4) * v29;
        Scr_AddVector(v3, &v27);
        Scr_AddArrayStringIndexed(v3, scr_const.scaled);
      }
      if ( *(float *)&v5 > 0.0 )
      {
        v30 = (float)(1.0 / *(float *)&v5) * v30;
        v31 = (float)(1.0 / *(float *)&v5) * v31;
        v32 = (float)(1.0 / *(float *)&v5) * v32;
        Scr_AddVector(v3, &v30);
        Scr_AddArrayStringIndexed(v3, scr_const.scaled_dynamic);
      }
    }
  }
}

/*
==============
PhysicsScript_GetEntityAABB
==============
*/
void PhysicsScript_GetEntityAABB(scrContext_t *scrContext, scr_entref_t entref)
{
  unsigned int entnum; 
  gentity_s *v4; 
  scr_string_t classname; 
  entityType_s eType; 
  const char *v7; 
  vec3_t aabbMin; 
  vec3_t aabbMax; 

  entnum = entref.entnum;
  if ( entref.entclass )
  {
    Scr_ObjectError(COM_ERR_4857, scrContext, "not an entity");
    v4 = NULL;
  }
  else
  {
    if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsscript.cpp", 921, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
      __debugbreak();
    v4 = &g_entities[entnum];
    classname = v4->classname;
    if ( classname != scr_const.script_brushmodel && classname != scr_const.script_model && classname != scr_const.scriptable )
    {
      eType = v4->s.eType;
      if ( eType != ET_ITEM && eType != ET_VEHICLE )
      {
        v7 = j_va("entity %i is not a script_brushmodel or script_model or scriptable or dropped item or vehicle (which are the only script entities supported by this physics function)", entnum);
        Scr_ObjectError(COM_ERR_4856, scrContext, v7);
      }
    }
  }
  if ( G_PhysicsObject_GetAABB(PHYSICS_WORLD_ID_FIRST, v4, &aabbMin, &aabbMax, 1) )
  {
    Scr_MakeArray(scrContext);
    Scr_AddVector(scrContext, aabbMin.v);
    Scr_AddArrayStringIndexed(scrContext, scr_const.min);
    Scr_AddVector(scrContext, aabbMax.v);
    Scr_AddArrayStringIndexed(scrContext, scr_const.max);
  }
}

/*
==============
PhysicsScript_RegisterForCollisionCallback
==============
*/
void PhysicsScript_RegisterForCollisionCallback(scrContext_t *scrContext, scr_entref_t entref)
{
  unsigned int entnum; 
  gentity_s *v4; 
  scr_string_t classname; 
  entityType_s eType; 
  const char *v7; 
  G_PhysicsObject *v8; 
  DObj *ServerDObjForEnt; 
  const char *v10; 
  const char *v11; 

  entnum = entref.entnum;
  if ( entref.entclass )
  {
    Scr_ObjectError(COM_ERR_4857, scrContext, "not an entity");
    v4 = NULL;
  }
  else
  {
    if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsscript.cpp", 950, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
      __debugbreak();
    v4 = &g_entities[entnum];
    classname = v4->classname;
    if ( classname != scr_const.script_brushmodel && classname != scr_const.script_model && classname != scr_const.scriptable )
    {
      eType = v4->s.eType;
      if ( eType != ET_ITEM && eType != ET_VEHICLE )
      {
        v7 = j_va("entity %i is not a script_brushmodel or script_model or scriptable or dropped item or vehicle (which are the only script entities supported by this physics function)", entnum);
        Scr_ObjectError(COM_ERR_4856, scrContext, v7);
      }
    }
  }
  v8 = G_PhysicsObject_Get(v4);
  if ( !v8 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsscript.cpp", 953, ASSERT_TYPE_ASSERT, "( physObject )", (const char *)&queryFormat, "physObject") )
    __debugbreak();
  if ( v8->physicsInstances[0] == -1 )
  {
    ServerDObjForEnt = Com_GetServerDObjForEnt(v4);
    v10 = "<Unknown>";
    if ( ServerDObjForEnt && ServerDObjForEnt->numModels )
      v10 = **(const char ***)ServerDObjForEnt->models;
    v11 = j_va("PhysicsScript_RegisterForCollisionCallback entity %i using model %s at position (%.2f,%.2f,%.2f) doesn't have any physics to register a callback for.  This is commonly caused by missing physAsset or a transient model.", (unsigned int)v4->s.number, v10, v4->r.currentOrigin.v[0], v4->r.currentOrigin.v[1], v4->r.currentOrigin.v[2]);
    Scr_Error(COM_ERR_4895, scrContext, v11);
  }
  G_PhysicsObject_RegisterForCollisionCallback(v4);
}

/*
==============
PhysicsScript_UnregisterForCollisionCallback
==============
*/
void PhysicsScript_UnregisterForCollisionCallback(scrContext_t *scrContext, scr_entref_t entref)
{
  unsigned int entnum; 
  gentity_s *v4; 
  scr_string_t classname; 
  entityType_s eType; 
  const char *v7; 

  entnum = entref.entnum;
  if ( entref.entclass )
  {
    Scr_ObjectError(COM_ERR_4857, scrContext, "not an entity");
    v4 = NULL;
  }
  else
  {
    if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsscript.cpp", 983, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
      __debugbreak();
    v4 = &g_entities[entnum];
    classname = v4->classname;
    if ( classname != scr_const.script_brushmodel && classname != scr_const.script_model && classname != scr_const.scriptable )
    {
      eType = v4->s.eType;
      if ( eType != ET_ITEM && eType != ET_VEHICLE )
      {
        v7 = j_va("entity %i is not a script_brushmodel or script_model or scriptable or dropped item or vehicle (which are the only script entities supported by this physics function)", entnum);
        Scr_ObjectError(COM_ERR_4856, scrContext, v7);
      }
    }
  }
  G_PhysicsObject_UnregisterForCollisionCallback(v4);
}

/*
==============
PhysicsScript_PhysicsVolumeEnable
==============
*/
void PhysicsScript_PhysicsVolumeEnable(scrContext_t *scrContext, scr_entref_t entref)
{
  unsigned int entnum; 
  gentity_s *v4; 
  const char *v5; 
  int Int; 

  entnum = entref.entnum;
  if ( entref.entclass )
  {
    Scr_ObjectError(COM_ERR_4861, scrContext, "not an entity");
    v4 = NULL;
  }
  else
  {
    if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsscript.cpp", 1001, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
      __debugbreak();
    v4 = &g_entities[entnum];
    if ( v4->s.eType != ET_PHYSICS_VOLUME )
    {
      v5 = j_va("entity %i is not a Physics Volume (which is the entity type supported by this physics function)", entnum);
      Scr_ObjectError(COM_ERR_4860, scrContext, v5);
    }
  }
  if ( Scr_GetNumParam(scrContext) != 1 )
    Scr_Error(COM_ERR_4896, scrContext, "Physics_VolumeEnable should have 1 param - Physics_VolumeEnable( <enable> )");
  if ( Scr_GetType(scrContext, 0) != VAR_INTEGER )
    Scr_Error(COM_ERR_4897, scrContext, "Physics_VolumeCreate: Parameter 0 enable must be the enable flag - see usage");
  Int = Scr_GetInt(scrContext, 0);
  G_PhysicsVolume_Enable(v4, Int != 0);
}

/*
==============
PhysicsScript_PhysicsVolumeAffectCharacters
==============
*/
void PhysicsScript_PhysicsVolumeAffectCharacters(scrContext_t *scrContext, scr_entref_t entref)
{
  unsigned int entnum; 
  gentity_s *v4; 
  const char *v5; 
  int Int; 

  entnum = entref.entnum;
  if ( entref.entclass )
  {
    Scr_ObjectError(COM_ERR_4861, scrContext, "not an entity");
    v4 = NULL;
  }
  else
  {
    if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsscript.cpp", 1033, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
      __debugbreak();
    v4 = &g_entities[entnum];
    if ( v4->s.eType != ET_PHYSICS_VOLUME )
    {
      v5 = j_va("entity %i is not a Physics Volume (which is the entity type supported by this physics function)", entnum);
      Scr_ObjectError(COM_ERR_4860, scrContext, v5);
    }
  }
  if ( Scr_GetNumParam(scrContext) != 1 )
    Scr_Error(COM_ERR_4898, scrContext, "Physics_VolumeAffectCharacters should have 1 param - Physics_VolumeAffectCharacters( <enable> )");
  if ( Scr_GetType(scrContext, 0) != VAR_INTEGER )
    Scr_Error(COM_ERR_4899, scrContext, "Physics_VolumeAffectCharacters: Parameter 0 enable must be the enable flag - see usage");
  Int = Scr_GetInt(scrContext, 0);
  G_PhysicsVolume_AffectsCharacters(v4, Int != 0);
}

/*
==============
PhysicsScript_PhysicsVolumeAffectMissiles
==============
*/
void PhysicsScript_PhysicsVolumeAffectMissiles(scrContext_t *scrContext, scr_entref_t entref)
{
  unsigned int entnum; 
  gentity_s *v4; 
  const char *v5; 
  int Int; 

  entnum = entref.entnum;
  if ( entref.entclass )
  {
    Scr_ObjectError(COM_ERR_4861, scrContext, "not an entity");
    v4 = NULL;
  }
  else
  {
    if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsscript.cpp", 1065, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
      __debugbreak();
    v4 = &g_entities[entnum];
    if ( v4->s.eType != ET_PHYSICS_VOLUME )
    {
      v5 = j_va("entity %i is not a Physics Volume (which is the entity type supported by this physics function)", entnum);
      Scr_ObjectError(COM_ERR_4860, scrContext, v5);
    }
  }
  if ( Scr_GetNumParam(scrContext) != 1 )
    Scr_Error(COM_ERR_4900, scrContext, "Physics_VolumeAffectMissiles should have 1 param - Physics_VolumeAffectMissiles( <enable> )");
  if ( Scr_GetType(scrContext, 0) != VAR_INTEGER )
    Scr_Error(COM_ERR_4901, scrContext, "Physics_VolumeAffectMissiles: Parameter 0 enable must be the enable flag - see usage");
  Int = Scr_GetInt(scrContext, 0);
  G_PhysicsVolume_AffectsMissiles(v4, Int != 0);
}

/*
==============
PhysicsScript_PhysicsVolumeSetActivator
==============
*/
void PhysicsScript_PhysicsVolumeSetActivator(scrContext_t *scrContext, scr_entref_t entref)
{
  unsigned int entnum; 
  gentity_s *v4; 
  const char *v5; 
  int Int; 

  entnum = entref.entnum;
  if ( entref.entclass )
  {
    Scr_ObjectError(COM_ERR_4861, scrContext, "not an entity");
    v4 = NULL;
  }
  else
  {
    if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsscript.cpp", 1097, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
      __debugbreak();
    v4 = &g_entities[entnum];
    if ( v4->s.eType != ET_PHYSICS_VOLUME )
    {
      v5 = j_va("entity %i is not a Physics Volume (which is the entity type supported by this physics function)", entnum);
      Scr_ObjectError(COM_ERR_4860, scrContext, v5);
    }
  }
  if ( Scr_GetNumParam(scrContext) != 1 )
    Scr_Error(COM_ERR_4902, scrContext, "Physics_VolumeSetActivator should have 1 param - Physics_VolumeSetActivator( <enable> )");
  if ( Scr_GetType(scrContext, 0) != VAR_INTEGER )
    Scr_Error(COM_ERR_4903, scrContext, "Physics_VolumeSetActivator: Parameter 0 enable must be the enable flag - see usage");
  Int = Scr_GetInt(scrContext, 0);
  G_PhysicsVolume_SetActivator(v4, Int != 0);
}

/*
==============
PhysicsScript_PhysicsVolumeSetAsGravityScalar
==============
*/
void PhysicsScript_PhysicsVolumeSetAsGravityScalar(scrContext_t *scrContext, scr_entref_t entref)
{
  unsigned int entnum; 
  gentity_s *v4; 
  const char *v5; 
  bool v6; 
  double Float; 

  entnum = entref.entnum;
  if ( entref.entclass )
  {
    Scr_ObjectError(COM_ERR_4861, scrContext, "not an entity");
    v4 = NULL;
  }
  else
  {
    if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsscript.cpp", 1130, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
      __debugbreak();
    v4 = &g_entities[entnum];
    if ( v4->s.eType != ET_PHYSICS_VOLUME )
    {
      v5 = j_va("entity %i is not a Physics Volume (which is the entity type supported by this physics function)", entnum);
      Scr_ObjectError(COM_ERR_4860, scrContext, v5);
    }
  }
  if ( Scr_GetNumParam(scrContext) != 2 )
    Scr_Error(COM_ERR_4904, scrContext, "Physics_VolumeSetAsGravityScalar should have 2 params - Physics_VolumeSetAsGravityScalar( <enable>, <scale> )");
  if ( Scr_GetType(scrContext, 0) != VAR_INTEGER )
    Scr_Error(COM_ERR_4905, scrContext, "Physics_VolumeSetAsGravityScalar: Parameter 0 enable must be the enable flag - see usage");
  v6 = Scr_GetInt(scrContext, 0) != 0;
  if ( Scr_GetType(scrContext, 1u) != VAR_FLOAT && Scr_GetType(scrContext, 1u) != VAR_INTEGER )
    Scr_Error(COM_ERR_4906, scrContext, "Physics_VolumeSetAsGravityScalar: Parameter 1 scale must be the scale - see usage");
  Float = Scr_GetFloat(scrContext, 1u);
  if ( G_PhysicsVolume_IsGravityVector(v4) )
    Scr_Error(COM_ERR_4907, scrContext, "Physics_VolumeSetAsGravityScalar: Entity is a gravity vector - you can't also make it a gravity scalar");
  if ( G_PhysicsVolume_IsDirectionForceApplier(v4) )
    Scr_Error(COM_ERR_4908, scrContext, "Physics_VolumeSetAsGravityScalar: Entity is a direction force applier - you can't also make it a gravity scalar");
  if ( G_PhysicsVolume_IsFocalForceApplier(v4) )
    Scr_Error(COM_ERR_4909, scrContext, "Physics_VolumeSetAsGravityScalar: Entity is a focal force applier - you can't also make it a gravity scalar");
  G_PhysicsVolume_SetGravityScalar(v4, v6, *(float *)&Float);
}

/*
==============
PhysicsScript_PhysicsVolumeSetAsGravityVector
==============
*/
void PhysicsScript_PhysicsVolumeSetAsGravityVector(scrContext_t *scrContext, scr_entref_t entref)
{
  unsigned int entnum; 
  gentity_s *v4; 
  const char *v5; 
  bool v6; 
  vec3_t vectorValue; 

  entnum = entref.entnum;
  if ( entref.entclass )
  {
    Scr_ObjectError(COM_ERR_4861, scrContext, "not an entity");
    v4 = NULL;
  }
  else
  {
    if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsscript.cpp", 1184, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
      __debugbreak();
    v4 = &g_entities[entnum];
    if ( v4->s.eType != ET_PHYSICS_VOLUME )
    {
      v5 = j_va("entity %i is not a Physics Volume (which is the entity type supported by this physics function)", entnum);
      Scr_ObjectError(COM_ERR_4860, scrContext, v5);
    }
  }
  if ( Scr_GetNumParam(scrContext) != 2 )
    Scr_Error(COM_ERR_4910, scrContext, "Physics_VolumeSetAsGravityVector should have 2 params - Physics_VolumeSetAsGravityVector( <enable>, <vector> )");
  if ( Scr_GetType(scrContext, 0) != VAR_INTEGER )
    Scr_Error(COM_ERR_4911, scrContext, "Physics_VolumeSetAsGravityVector: Parameter 0 enable must be the enable flag - see usage");
  v6 = Scr_GetInt(scrContext, 0) != 0;
  if ( Scr_GetType(scrContext, 1u) != VAR_VECTOR )
    Scr_Error(COM_ERR_4912, scrContext, "Physics_VolumeSetAsGravityVector: Parameter 1 gravity must be the direction - see usage");
  Scr_GetVector(scrContext, 1u, &vectorValue);
  if ( G_PhysicsVolume_IsGravityScalar(v4) )
    Scr_Error(COM_ERR_4913, scrContext, "Physics_VolumeSetAsGravityVector: Entity is a gravity scalar - you can't also make it a directional force applier");
  if ( G_PhysicsVolume_IsDirectionForceApplier(v4) )
    Scr_Error(COM_ERR_4914, scrContext, "Physics_VolumeSetAsGravityVector: Entity is a direction force applier - you can't also make it a gravity scalar");
  if ( G_PhysicsVolume_IsFocalForceApplier(v4) )
    Scr_Error(COM_ERR_4915, scrContext, "Physics_VolumeSetAsGravityVector: Entity is a focal force applier - you can't also make it a gravity scalar");
  G_PhysicsVolume_SetGravityVector(v4, v6, &vectorValue);
}

/*
==============
PhysicsScript_PhysicsVolumeSetAsDirectionalForce
==============
*/
void PhysicsScript_PhysicsVolumeSetAsDirectionalForce(scrContext_t *scrContext, scr_entref_t entref)
{
  unsigned int entnum; 
  gentity_s *v4; 
  const char *v5; 
  unsigned int NumParam; 
  bool v7; 
  double Float; 
  float v9; 
  float v10; 
  double v11; 
  vec3_t vectorValue; 

  entnum = entref.entnum;
  if ( entref.entclass )
  {
    Scr_ObjectError(COM_ERR_4861, scrContext, "not an entity");
    v4 = NULL;
  }
  else
  {
    if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsscript.cpp", 1241, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
      __debugbreak();
    v4 = &g_entities[entnum];
    if ( v4->s.eType != ET_PHYSICS_VOLUME )
    {
      v5 = j_va("entity %i is not a Physics Volume (which is the entity type supported by this physics function)", entnum);
      Scr_ObjectError(COM_ERR_4860, scrContext, v5);
    }
  }
  NumParam = Scr_GetNumParam(scrContext);
  if ( NumParam - 3 > 1 )
    Scr_Error(COM_ERR_4916, scrContext, "Physics_VolumeSetAsDirectionalForce should have 3 or 4 params - Physics_VolumeSetAsDirectionalForce( <enable>, <direction>, <force>, <maxspeed> )");
  if ( Scr_GetType(scrContext, 0) != VAR_INTEGER )
    Scr_Error(COM_ERR_4917, scrContext, "Physics_VolumeSetAsDirectionalForce: Parameter 0 enable must be the enable flag - see usage");
  v7 = Scr_GetInt(scrContext, 0) != 0;
  if ( Scr_GetType(scrContext, 1u) != VAR_VECTOR )
    Scr_Error(COM_ERR_4918, scrContext, "Physics_VolumeSetAsDirectionalForce: Parameter 1 direction must be the direction - see usage");
  Scr_GetVector(scrContext, 1u, &vectorValue);
  if ( Scr_GetType(scrContext, 2u) != VAR_FLOAT && Scr_GetType(scrContext, 2u) != VAR_INTEGER )
    Scr_Error(COM_ERR_4919, scrContext, "Physics_VolumeSetAsDirectionalForce: Parameter 2 force must be the force - see usage");
  Float = Scr_GetFloat(scrContext, 2u);
  v9 = FLOAT_3_4028235e38;
  v10 = *(float *)&Float;
  if ( NumParam == 4 )
  {
    if ( Scr_GetType(scrContext, 3u) != VAR_FLOAT && Scr_GetType(scrContext, 3u) != VAR_INTEGER )
      Scr_Error(COM_ERR_4920, scrContext, "Physics_VolumeSetAsDirectionalForce: Parameter 3 maxspeed must be the maximum speed - see usage");
    v11 = Scr_GetFloat(scrContext, 3u);
    v9 = *(float *)&v11;
  }
  if ( G_PhysicsVolume_IsGravityScalar(v4) )
    Scr_Error(COM_ERR_4921, scrContext, "Physics_VolumeSetAsDirectionalForce: Entity is a gravity scalar - you can't also make it a directional force applier");
  if ( G_PhysicsVolume_IsGravityVector(v4) )
    Scr_Error(COM_ERR_4922, scrContext, "Physics_VolumeSetAsDirectionalForce: Entity is a gravity vector - you can't also make it a directional force applier");
  if ( G_PhysicsVolume_IsFocalForceApplier(v4) )
    Scr_Error(COM_ERR_4923, scrContext, "Physics_VolumeSetAsDirectionalForce: Entity is a focal force applier - you can't also make it a directional force applier");
  G_PhysicsVolume_SetDirectionForceApplier(v4, v7, &vectorValue, v10, v9);
}

/*
==============
PhysicsScript_PhysicsVolumeSetAsFocalForce
==============
*/
void PhysicsScript_PhysicsVolumeSetAsFocalForce(scrContext_t *scrContext, scr_entref_t entref)
{
  unsigned int entnum; 
  gentity_s *v4; 
  const char *v5; 
  unsigned int NumParam; 
  bool v7; 
  double Float; 
  float v9; 
  float v10; 
  double v11; 
  vec3_t vectorValue; 

  entnum = entref.entnum;
  if ( entref.entclass )
  {
    Scr_ObjectError(COM_ERR_4861, scrContext, "not an entity");
    v4 = NULL;
  }
  else
  {
    if ( entref.entnum >= 0x800 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsscript.cpp", 1314, ASSERT_TYPE_ASSERT, "(entref.entnum < ( 2048 ))", (const char *)&queryFormat, "entref.entnum < MAX_GENTITIES") )
      __debugbreak();
    v4 = &g_entities[entnum];
    if ( v4->s.eType != ET_PHYSICS_VOLUME )
    {
      v5 = j_va("entity %i is not a Physics Volume (which is the entity type supported by this physics function)", entnum);
      Scr_ObjectError(COM_ERR_4860, scrContext, v5);
    }
  }
  NumParam = Scr_GetNumParam(scrContext);
  if ( NumParam - 3 > 1 )
    Scr_Error(COM_ERR_4924, scrContext, "Physics_VolumeSetAsFocalForce should have 3 or 4 params - Physics_VolumeSetAsFocalForce( <enable>, <point>, <force>, <maxspeed> )");
  if ( Scr_GetType(scrContext, 0) != VAR_INTEGER )
    Scr_Error(COM_ERR_4925, scrContext, "Physics_VolumeSetAsFocalForce: Parameter 0 enable must be the enable flag - see usage");
  v7 = Scr_GetInt(scrContext, 0) != 0;
  if ( Scr_GetType(scrContext, 1u) != VAR_VECTOR )
    Scr_Error(COM_ERR_4926, scrContext, "Physics_VolumeSetAsFocalForce: Parameter 1 point must be the point - see usage");
  Scr_GetVector(scrContext, 1u, &vectorValue);
  if ( Scr_GetType(scrContext, 2u) != VAR_FLOAT && Scr_GetType(scrContext, 2u) != VAR_INTEGER )
    Scr_Error(COM_ERR_4927, scrContext, "Physics_VolumeSetAsFocalForce: Parameter 2 force must be the force - see usage");
  Float = Scr_GetFloat(scrContext, 2u);
  v9 = FLOAT_3_4028235e38;
  v10 = *(float *)&Float;
  if ( NumParam == 4 )
  {
    if ( Scr_GetType(scrContext, 3u) != VAR_FLOAT && Scr_GetType(scrContext, 3u) != VAR_INTEGER )
      Scr_Error(COM_ERR_4928, scrContext, "Physics_VolumeSetAsDirectionalForce: Parameter 3 maxspeed must be the maximum speed - see usage");
    v11 = Scr_GetFloat(scrContext, 3u);
    v9 = *(float *)&v11;
  }
  if ( G_PhysicsVolume_IsGravityScalar(v4) )
    Scr_Error(COM_ERR_4929, scrContext, "Physics_VolumeSetAsFocalForce: Entity is a gravity scalar - you can't also make it a focal force applier");
  if ( G_PhysicsVolume_IsGravityVector(v4) )
    Scr_Error(COM_ERR_4930, scrContext, "Physics_VolumeSetAsFocalForce: Entity is a gravity vector - you can't also make it a focal force applier");
  if ( G_PhysicsVolume_IsDirectionForceApplier(v4) )
    Scr_Error(COM_ERR_4931, scrContext, "Physics_VolumeSetAsFocalForce: Entity is a direction force applier - you can't also make it a focal force applier");
  G_PhysicsVolume_SetFocalForceApplier(v4, v7, &vectorValue, v10, v9);
}

/*
==============
PhysicsScript_GetBodyLinVel
==============
*/
void PhysicsScript_GetBodyLinVel(scrContext_t *scrContext)
{
  unsigned int Int; 
  vec3_t linVel; 

  Int = Scr_GetInt(scrContext, 0);
  if ( (Int & 0xFFFFFF) == 0xFFFFFF )
    Scr_Error(COM_ERR_4932, scrContext, "Physics_GetBodyLinVel: Invalid Body Id");
  Physics_GetRigidBodyLinVel(PHYSICS_WORLD_ID_FIRST, Int, &linVel);
  Scr_AddVector(scrContext, linVel.v);
}

/*
==============
PhysicsScript_GetBodyAngVel
==============
*/
void PhysicsScript_GetBodyAngVel(scrContext_t *scrContext)
{
  hknpBodyId v2; 
  float value[4]; 
  hkVector4f angVel; 

  v2.m_serialAndIndex = Scr_GetInt(scrContext, 0);
  if ( (v2.m_serialAndIndex & 0xFFFFFF) == 0xFFFFFF )
    Scr_Error(COM_ERR_4933, scrContext, "Physics_GetBodyAngVel: Invalid Body Id");
  if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 292, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body AngVel when system is not initialized", "g_physicsInitialized") )
    __debugbreak();
  if ( (v2.m_serialAndIndex & 0xFFFFFF) == 0xFFFFFF && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 294, ASSERT_TYPE_ASSERT, "(Physics_IsRigidBodyIdValid( bodyId ))", "%s\n\tPhysics: Trying to Get Rigid Body AngVel with invalid Body in world %i", "Physics_IsRigidBodyIdValid( bodyId )", 0) )
    __debugbreak();
  HavokPhysics_GetRigidBodyAngVel(PHYSICS_WORLD_ID_FIRST, v2, &angVel);
  value[0] = angVel.m_quad.m128_f32[0];
  value[2] = angVel.m_quad.m128_f32[2];
  value[1] = angVel.m_quad.m128_f32[1];
  Scr_AddVector(scrContext, value);
}

/*
==============
PhysicsScript_GetBodyLinAngVel
==============
*/
void PhysicsScript_GetBodyLinAngVel(scrContext_t *scrContext)
{
  unsigned int Int; 
  vec3_t linVel; 
  vec3_t angVel; 

  Int = Scr_GetInt(scrContext, 0);
  if ( (Int & 0xFFFFFF) == 0xFFFFFF )
    Scr_Error(COM_ERR_4934, scrContext, "Physics_GetBodyLinAngVel: Invalid Body Id");
  Physics_GetRigidBodyLinAngVel(PHYSICS_WORLD_ID_FIRST, Int, &linVel, &angVel);
  Scr_MakeArray(scrContext);
  Scr_AddVector(scrContext, linVel.v);
  Scr_AddArrayStringIndexed(scrContext, scr_const.linear);
  Scr_AddVector(scrContext, angVel.v);
  Scr_AddArrayStringIndexed(scrContext, scr_const.angular);
}

/*
==============
PhysicsScript_GetBulletMissileContents
==============
*/
void PhysicsScript_GetBulletMissileContents(scrContext_t *scrContext)
{
  Scr_AddInt(scrContext, 8320);
}

/*
==============
PhysicsScript_CreateContents
==============
*/
void PhysicsScript_CreateContents(scrContext_t *scrContext)
{
  int v2; 
  unsigned int ArrayObject; 
  unsigned int v4; 
  unsigned int i; 
  scr_string_t ChildStringValue; 
  const char *v7; 
  const char *v8; 

  v2 = 0;
  if ( Scr_GetType(scrContext, 0) != VAR_POINTER )
    Scr_Error(COM_ERR_4935, scrContext, "Physics_CreateContents: Parameter 0 must be an array of strings");
  ArrayObject = BGScr_Main_GetArrayObject(scrContext, 0);
  v4 = 0;
  for ( i = FindFirstSibling(scrContext, ArrayObject); i; i = FindNextSibling(scrContext, i) )
  {
    if ( GetValueType(scrContext, i) != VAR_STRING )
      Scr_Error(COM_ERR_4936, scrContext, "Physics_CreateContents: Parameter 0 is an array but at least one entry is not a string");
    ChildStringValue = Scr_GetChildStringValue(scrContext, i);
    if ( ChildStringValue == scr_const.physicscontents_solid )
    {
      v2 |= 1u;
    }
    else if ( ChildStringValue == scr_const.physicscontents_foliage )
    {
      v2 |= 2u;
    }
    else if ( ChildStringValue == scr_const.physicscontents_vehicletrigger )
    {
      v2 |= 8u;
    }
    else if ( ChildStringValue == scr_const.physicscontents_glass )
    {
      v2 |= 0x10u;
    }
    else if ( ChildStringValue == scr_const.physicscontents_water )
    {
      v2 |= 0x20u;
    }
    else if ( ChildStringValue == scr_const.physicscontents_ainoshoot )
    {
      v2 |= 0x40u;
    }
    else if ( ChildStringValue == scr_const.physicscontents_missileclip )
    {
      v2 |= 0x80u;
    }
    else if ( ChildStringValue == scr_const.physicscontents_item )
    {
      v2 |= 0x100u;
    }
    else if ( ChildStringValue == scr_const.physicscontents_vehicleclip )
    {
      v2 |= 0x200u;
    }
    else if ( ChildStringValue == scr_const.physicscontents_itemclip )
    {
      v2 |= 0x400u;
    }
    else if ( ChildStringValue == scr_const.physicscontents_sky )
    {
      v2 |= 0x800u;
    }
    else if ( ChildStringValue == scr_const.physicscontents_ainosight )
    {
      v2 |= 0x1000u;
    }
    else if ( ChildStringValue == scr_const.physicscontents_clipshot )
    {
      v2 |= 0x2000u;
    }
    else if ( ChildStringValue == scr_const.physicscontents_actor )
    {
      v2 |= 0x4000u;
    }
    else if ( ChildStringValue == scr_const.physicscontents_playerclip )
    {
      v2 |= 0x10000u;
    }
    else if ( ChildStringValue == scr_const.physicscontents_playernosight )
    {
      v2 |= 0x8000u;
    }
    else if ( ChildStringValue == scr_const.physicscontents_aiclip )
    {
      v2 |= 0x20000u;
    }
    else if ( ChildStringValue == scr_const.physicscontents_sentienttrigger )
    {
      v2 |= 0x40000u;
    }
    else if ( ChildStringValue == scr_const.physicscontents_explosionclip )
    {
      v2 |= 0x100000u;
    }
    else if ( ChildStringValue == scr_const.physicscontents_soundclip )
    {
      v2 |= 0x200000u;
    }
    else if ( ChildStringValue == scr_const.physicscontents_soundreflect )
    {
      v2 |= 0x4000000u;
    }
    else if ( ChildStringValue != scr_const.physicscontents_fakeactor )
    {
      if ( ChildStringValue == scr_const.physicscontents_nonsentienttrigger )
      {
        v2 |= 0x400000u;
      }
      else if ( ChildStringValue == scr_const.physicscontents_vehicle )
      {
        v2 |= 0x800000u;
      }
      else if ( ChildStringValue == scr_const.physicscontents_mantle )
      {
        v2 |= 0x1000000u;
      }
      else if ( ChildStringValue == scr_const.physicscontents_player )
      {
        v2 |= 0x2000000u;
      }
      else if ( ChildStringValue == scr_const.physicscontents_useclip )
      {
        v2 |= 0x20000000u;
      }
      else if ( ChildStringValue == scr_const.physicscontents_playertrigger )
      {
        v2 |= 0x40000000u;
      }
      else
      {
        v7 = SL_ConvertToString(ChildStringValue);
        v8 = j_va("Physics_CreateContents: Parameter 0 is an array but entry %i %s is not a contents string", v4, v7);
        Scr_Error(COM_ERR_4937, scrContext, v8);
      }
    }
    ++v4;
  }
  Scr_AddInt(scrContext, v2);
}

/*
==============
PhysicsScript_AABBBroadphaseQuery
==============
*/
void PhysicsScript_AABBBroadphaseQuery(scrContext_t *scrContext)
{
  scrContext_t *v2; 
  int Int; 
  char v4; 
  int entnum; 
  unsigned int ArrayObject; 
  unsigned int ArraySize; 
  const char *v8; 
  const char *NameForType; 
  const char *v10; 
  hkMonitorStream *Value; 
  hkMonitorStream *v12; 
  HavokPhysics_BroadphaseCollisionQueryResult *BroadphaseCollisionQueryResult; 
  unsigned int i; 
  int v15; 
  ntl::internal::pool_allocator_freelist<40> *p_m_freelist; 
  char *v17; 
  unsigned int v18; 
  unsigned int HitBodyId; 
  int Ref; 
  signed int EntityNum; 
  ntl::red_black_tree_node_base *p_m_endNodeBase; 
  ntl::red_black_tree_node_base *mp_parent; 
  bool v24; 
  ntl::red_black_tree_node_base *mp_left; 
  ntl::red_black_tree_node_base *j; 
  ntl::red_black_tree_node_base *v27; 
  ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *mp_next; 
  ntl::red_black_tree_node_base *mp_right; 
  ntl::red_black_tree_node_base *next; 
  ntl::red_black_tree_node_base *v31; 
  ntl::red_black_tree_node_base *v32; 
  hkMemoryAllocator *v33; 
  hkMemoryAllocator *v34; 
  VariableType failureType[4]; 
  unsigned int count; 
  unsigned int failureIndex; 
  hkMonitorStream *v38; 
  scrContext_t *v39; 
  HavokPhysics_IgnoreBodies v40; 
  Physics_AABBBroadphaseQueryExtendedData extendedData; 
  __m256i v42; 
  double v43; 
  __int64 v44; 
  hkMonitorStream *v45; 
  ntl::red_black_tree_iterator<int,ntl::red_black_tree_node<int>,int *,int &> result; 
  vec3_t max; 
  vec3_t vectorValue; 
  ntl::red_black_tree<int,int,ntl::fixed_pool_allocator<ntl::red_black_tree_node<int>,128,8>,ntl::return_input<int>,ntl::less<int,int> > v49; 
  unsigned int buffer[128]; 

  v44 = -2i64;
  v2 = scrContext;
  v39 = scrContext;
  if ( Scr_GetType(scrContext, 0) != VAR_VECTOR )
    Scr_Error(COM_ERR_4938, v2, "Physics_AABBBroadphaseQuery: Parameter 0 aabbMin must be the aabb min vector - see usage");
  Scr_GetVector(v2, 0, &vectorValue);
  if ( Scr_GetType(v2, 1u) != VAR_VECTOR )
    Scr_Error(COM_ERR_4939, v2, "Physics_AABBBroadphaseQuery: Parameter 1 aabbMax must be the aabb max vector - see usage");
  Scr_GetVector(v2, 1u, &max);
  if ( Scr_GetType(v2, 2u) != VAR_INTEGER )
    Scr_Error(COM_ERR_4940, v2, "Physics_AABBBroadphaseQuery: Parameter 2 contents must be the contents - see usage");
  Int = Scr_GetInt(v2, 2u);
  if ( !Int )
    Scr_Error(COM_ERR_4941, v2, "Physics_AABBBroadphaseQuery: Parameter 2 contents must be non 0");
  v4 = 0;
  entnum = 0;
  if ( Scr_GetType(v2, 3u) )
  {
    if ( Scr_GetPointerType(v2, 3u) == VAR_ENTITY )
    {
      count = 1;
      entnum = Scr_GetEntityRef(v2, 3u).entnum;
      v4 = 1;
    }
    else
    {
      if ( Scr_GetPointerType(v2, 3u) != VAR_ARRAY )
        Scr_Error(COM_ERR_4942, v2, "Physics_AABBBroadphaseQuery: Parameter 3 ignore array is not invalid, an entity or an array");
      ArrayObject = BGScr_Main_GetArrayObject(v2, 3u);
      ArraySize = GetArraySize(v2, ArrayObject);
      count = ArraySize;
      if ( ArraySize > 0x80 )
      {
        v8 = j_va("Physics_AABBBroadphaseQuery: ignore array is too large (%d > %d)", ArraySize, 128i64);
        Scr_ParamError(COM_ERR_4943, v2, 0, v8);
      }
      if ( !Scr_GetEntityArray(v2, ArrayObject, 0x80u, buffer, &count, &failureIndex, failureType) )
      {
        NameForType = Scr_GetNameForType(failureType[0]);
        v10 = j_va("Physics_AABBBroadphaseQuery: element %i of ignore array: type %s is not an entity", failureIndex, NameForType);
        Scr_ParamError(COM_ERR_4944, v2, 0, v10);
      }
    }
  }
  else
  {
    count = 0;
  }
  Value = (hkMonitorStream *)TlsGetValue(hkMonitorStream__m_instance.m_slotID);
  v12 = Value;
  v38 = Value;
  if ( Value )
    hkMonitorStream::timerBegin(Value, "TtPhysics_AABBBroadphaseQuery");
  v45 = v12;
  BroadphaseCollisionQueryResult = Physics_AllocateBroadphaseCollisionQueryResult(PHYSICS_WORLD_ID_FIRST);
  if ( !BroadphaseCollisionQueryResult && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsscript.cpp", 1697, ASSERT_TYPE_ASSERT, "(result)", (const char *)&queryFormat, "result") )
    __debugbreak();
  HavokPhysics_IgnoreBodies::HavokPhysics_IgnoreBodies(&v40, count, 0);
  if ( v4 )
  {
    HavokPhysics_IgnoreBodies::SetIgnoreEntity(&v40, 0, entnum, 1, 0, 0, 0, 0);
  }
  else
  {
    for ( i = 0; i < count; ++i )
    {
      v15 = Scr_GetEntityIdRef(v2, buffer[i]).entnum;
      HavokPhysics_IgnoreBodies::SetIgnoreEntity(&v40, i, v15, 1, 0, 0, 0, 0);
    }
  }
  extendedData.phaseSelection = All;
  extendedData.contents = Int;
  extendedData.ignoreBodies = &v40;
  Physics_AABBBroadphaseQuery(PHYSICS_WORLD_ID_FIRST, &vectorValue, &max, &extendedData, BroadphaseCollisionQueryResult);
  p_m_freelist = &v49.m_freelist;
  v17 = &v49.m_data.m_buffer[5080];
  do
  {
    *(_QWORD *)v17 = p_m_freelist;
    p_m_freelist = (ntl::internal::pool_allocator_freelist<40> *)v17;
    v17 -= 40;
  }
  while ( v17 + 40 > (char *)&v49 );
  v49.m_freelist.m_head.mp_next = &p_m_freelist->m_head;
  if ( !p_m_freelist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
    __debugbreak();
  v49.m_size = 0i64;
  v49.m_endNodeBase.m_color = RB_NODE_COLOR_RED;
  v49.m_endNodeBase.mp_parent = NULL;
  v49.m_endNodeBase.mp_left = &v49.m_endNodeBase;
  v49.m_endNodeBase.mp_right = &v49.m_endNodeBase;
  v18 = 0;
  if ( HavokPhysics_BroadphaseCollisionQueryResult::GetNumHits(BroadphaseCollisionQueryResult) )
  {
    while ( 1 )
    {
      if ( v49.m_size >= 0x80 )
      {
LABEL_81:
        v12 = v38;
        v2 = v39;
        goto LABEL_82;
      }
      HitBodyId = HavokPhysics_BroadphaseCollisionQueryResult::GetHitBodyId(BroadphaseCollisionQueryResult, v18);
      Ref = Physics_GetRef(PHYSICS_WORLD_ID_FIRST, HitBodyId);
      EntityNum = Physics_GetEntityNum(Ref);
      failureIndex = EntityNum;
      p_m_endNodeBase = &v49.m_endNodeBase;
      mp_parent = v49.m_endNodeBase.mp_parent;
      v24 = 1;
      while ( mp_parent )
      {
        p_m_endNodeBase = mp_parent;
        v24 = EntityNum < mp_parent[1].m_color;
        if ( EntityNum >= mp_parent[1].m_color )
          mp_parent = mp_parent->mp_right;
        else
          mp_parent = mp_parent->mp_left;
      }
      mp_left = p_m_endNodeBase;
      if ( !v24 )
        goto LABEL_55;
      if ( p_m_endNodeBase != v49.m_endNodeBase.mp_left )
        break;
      ntl::red_black_tree<int,int,ntl::fixed_pool_allocator<ntl::red_black_tree_node<int>,128,8>,ntl::return_input<int>,ntl::less<int,int>>::insert_node(&v49, &result, p_m_endNodeBase, (const int *)&failureIndex, 1, 0);
LABEL_80:
      if ( ++v18 >= HavokPhysics_BroadphaseCollisionQueryResult::GetNumHits(BroadphaseCollisionQueryResult) )
        goto LABEL_81;
    }
    if ( !p_m_endNodeBase && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 108, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
      __debugbreak();
    if ( p_m_endNodeBase->m_color || p_m_endNodeBase->mp_parent->mp_parent != p_m_endNodeBase )
    {
      mp_left = p_m_endNodeBase->mp_left;
      if ( mp_left )
      {
        for ( j = mp_left->mp_right; j; j = j->mp_right )
          mp_left = j;
      }
      else
      {
        mp_left = p_m_endNodeBase->mp_parent;
        if ( p_m_endNodeBase == mp_left->mp_left )
        {
          do
          {
            v27 = mp_left;
            mp_left = mp_left->mp_parent;
          }
          while ( v27 == mp_left->mp_left );
        }
      }
    }
    else
    {
      mp_left = p_m_endNodeBase->mp_right;
    }
LABEL_55:
    if ( !mp_left && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 81, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
      __debugbreak();
    if ( mp_left[1].m_color < EntityNum )
    {
      if ( !p_m_endNodeBase && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 694, ASSERT_TYPE_ASSERT, "( p_insert != 0 )", (const char *)&queryFormat, "p_insert != NULL") )
        __debugbreak();
      if ( !v49.m_freelist.m_head.mp_next )
      {
        if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
          __debugbreak();
        if ( !v49.m_freelist.m_head.mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
          __debugbreak();
      }
      if ( (ntl::internal::pool_allocator_freelist<40> *)v49.m_freelist.m_head.mp_next == &v49.m_freelist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 298, ASSERT_TYPE_ASSERT, "( !empty() )", "Pool out of elements to allocate (Elem size=%zu, Num elems=%zu)", 0x28ui64, 0x80ui64) )
        __debugbreak();
      mp_next = v49.m_freelist.m_head.mp_next;
      v49.m_freelist.m_head.mp_next = v49.m_freelist.m_head.mp_next->mp_next;
      v42.m256i_i32[0] = 0;
      v42.m256i_i64[1] = (__int64)p_m_endNodeBase;
      __asm { vpxor   xmm0, xmm0, xmm0 }
      *(_OWORD *)&v42.m256i_u64[2] = _XMM0;
      LODWORD(v43) = EntityNum;
      *(__m256i *)&mp_next->mp_next = v42;
      *(double *)&mp_next[4].mp_next = v43;
      if ( p_m_endNodeBase == &v49.m_endNodeBase )
      {
        v49.m_endNodeBase.mp_left = (ntl::red_black_tree_node_base *)mp_next;
        v49.m_endNodeBase.mp_parent = (ntl::red_black_tree_node_base *)mp_next;
        v49.m_endNodeBase.mp_right = (ntl::red_black_tree_node_base *)mp_next;
      }
      else if ( EntityNum >= p_m_endNodeBase[1].m_color )
      {
        p_m_endNodeBase->mp_right = (ntl::red_black_tree_node_base *)mp_next;
        mp_right = v49.m_endNodeBase.mp_right;
        if ( p_m_endNodeBase == v49.m_endNodeBase.mp_right )
          mp_right = (ntl::red_black_tree_node_base *)mp_next;
        v49.m_endNodeBase.mp_right = mp_right;
      }
      else
      {
        p_m_endNodeBase->mp_left = (ntl::red_black_tree_node_base *)mp_next;
        if ( p_m_endNodeBase == v49.m_endNodeBase.mp_left )
          v49.m_endNodeBase.mp_left = (ntl::red_black_tree_node_base *)mp_next;
      }
      ntl::red_black_tree_node_base::rebalance((ntl::red_black_tree_node_base *)mp_next, &v49.m_endNodeBase.mp_parent);
      ++v49.m_size;
    }
    goto LABEL_80;
  }
LABEL_82:
  Scr_MakeArray(v2);
  next = v49.m_endNodeBase.mp_left;
  if ( v49.m_endNodeBase.mp_left != &v49.m_endNodeBase )
  {
    do
    {
      if ( !next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 81, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
        __debugbreak();
      Scr_AddEntityNum(v2, next[1].m_color, ENTITY_CLASS_GENTITY);
      Scr_AddArray(v2);
      next = ntl::red_black_tree_node_base::get_next(next);
    }
    while ( next != &v49.m_endNodeBase );
    v12 = v38;
  }
  Physics_FreeBroadphaseCollisionQueryResult(BroadphaseCollisionQueryResult);
  if ( v49.m_size )
  {
    v31 = v49.m_endNodeBase.mp_parent;
    if ( v49.m_endNodeBase.mp_parent )
    {
      do
      {
        ntl::red_black_tree<int,int,ntl::fixed_pool_allocator<ntl::red_black_tree_node<int>,128,8>,ntl::return_input<int>,ntl::less<int,int>>::erase_tree(&v49, (ntl::red_black_tree_node<int> *)v31->mp_right);
        v32 = v31->mp_left;
        *(_QWORD *)&v31->m_color = v49.m_freelist.m_head.mp_next;
        v49.m_freelist.m_head.mp_next = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)v31;
        v31 = v32;
      }
      while ( v32 );
    }
    v49.m_endNodeBase.mp_parent = NULL;
    v49.m_endNodeBase.mp_left = &v49.m_endNodeBase;
    v49.m_endNodeBase.mp_right = &v49.m_endNodeBase;
    v49.m_size = 0i64;
  }
  v33 = hkMemHeapAllocator();
  v40.m_ignoreBodies.m_size = 0;
  if ( v40.m_ignoreBodies.m_capacityAndFlags >= 0 )
    hkMemoryAllocator::bufFree2(v33, v40.m_ignoreBodies.m_data, 4, v40.m_ignoreBodies.m_capacityAndFlags & 0x3FFFFFFF);
  v40.m_ignoreBodies.m_data = NULL;
  v40.m_ignoreBodies.m_capacityAndFlags = 0x80000000;
  v34 = hkMemHeapAllocator();
  v40.m_ignoreEntities.m_size = 0;
  if ( v40.m_ignoreEntities.m_capacityAndFlags >= 0 )
    hkMemoryAllocator::bufFree2(v34, v40.m_ignoreEntities.m_data, 8, v40.m_ignoreEntities.m_capacityAndFlags & 0x3FFFFFFF);
  v40.m_ignoreEntities.m_data = NULL;
  v40.m_ignoreEntities.m_capacityAndFlags = 0x80000000;
  if ( v12 )
    hkMonitorStream::timerEnd(v12, "Et");
}

/*
==============
PhysicsScript_AABBQuery
==============
*/
void PhysicsScript_AABBQuery(scrContext_t *scrContext)
{
  scrContext_t *v1; 
  Physics_CollisionQueryCollectionType v2; 
  int Int; 
  char v4; 
  int entnum; 
  unsigned int ArrayObject; 
  unsigned int ArraySize; 
  const char *v8; 
  const char *NameForType; 
  const char *v10; 
  scr_string_t ConstString; 
  hkMonitorStream *Value; 
  hkMonitorStream *v13; 
  HavokPhysics_CollisionQueryResult *CollisionQueryResult; 
  unsigned int i; 
  int v16; 
  unsigned int NumHits; 
  ntl::internal::pool_allocator_freelist<40> *p_m_freelist; 
  char *v20; 
  int v21; 
  unsigned int AABBQueryHitBodyId; 
  int Ref; 
  signed int EntityNum; 
  ntl::red_black_tree_node_base *p_m_endNodeBase; 
  ntl::red_black_tree_node_base *mp_parent; 
  bool v27; 
  ntl::red_black_tree_node_base *mp_left; 
  ntl::red_black_tree_node_base *j; 
  ntl::red_black_tree_node_base *v30; 
  ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *mp_next; 
  ntl::red_black_tree_node_base *mp_right; 
  ntl::red_black_tree_node_base *next; 
  ntl::red_black_tree_node_base *v34; 
  ntl::red_black_tree_node_base *v35; 
  bool HasHit; 
  hkMemoryAllocator *v37; 
  hkMemoryAllocator *v38; 
  VariableType failureType[4]; 
  unsigned int count; 
  unsigned int failureIndex; 
  unsigned int v42; 
  hkMonitorStream *v43; 
  scrContext_t *v44; 
  Physics_AABBQueryExtendedData extendedData; 
  HavokPhysics_IgnoreBodies v46; 
  __m256i v47; 
  double v48; 
  __int64 v49; 
  hkMonitorStream *v50; 
  ntl::red_black_tree_iterator<int,ntl::red_black_tree_node<int>,int *,int &> result; 
  vec3_t max; 
  vec3_t vectorValue; 
  ntl::red_black_tree<int,int,ntl::fixed_pool_allocator<ntl::red_black_tree_node<int>,128,8>,ntl::return_input<int>,ntl::less<int,int> > v54; 
  unsigned int buffer[128]; 

  v49 = -2i64;
  v1 = scrContext;
  v44 = scrContext;
  if ( Scr_GetType(scrContext, 0) != VAR_VECTOR )
    Scr_Error(COM_ERR_4945, v1, "Physics_AABBQuery: Parameter 0 aabbMin must be the aabb min vector - see usage");
  Scr_GetVector(v1, 0, &vectorValue);
  v2 = PHYSICS_COLLISIONQUERY_COLLECTION_TYPE_CLOSEST;
  if ( Scr_GetType(v1, 1u) != VAR_VECTOR )
    Scr_Error(COM_ERR_4946, v1, "Physics_AABBQuery: Parameter 1 aabbMax must be the aabb max vector - see usage");
  Scr_GetVector(v1, 1u, &max);
  if ( Scr_GetType(v1, 2u) != VAR_INTEGER )
    Scr_Error(COM_ERR_4947, v1, "Physics_AABBQuery: Parameter 2 contents must be the contents - see usage");
  Int = Scr_GetInt(v1, 2u);
  if ( !Int )
    Scr_Error(COM_ERR_4948, v1, "Physics_AABBQuery: Parameter 2 contents must be non 0");
  v4 = 0;
  entnum = 0;
  if ( Scr_GetType(v1, 3u) )
  {
    if ( Scr_GetPointerType(v1, 3u) == VAR_ENTITY )
    {
      count = 1;
      entnum = Scr_GetEntityRef(v1, 3u).entnum;
      v4 = 1;
    }
    else
    {
      if ( Scr_GetPointerType(v1, 3u) != VAR_ARRAY )
        Scr_Error(COM_ERR_4949, v1, "Physics_AABBQuery: Parameter 3 ignore array is not invalid, an entity or an array");
      ArrayObject = BGScr_Main_GetArrayObject(v1, 3u);
      ArraySize = GetArraySize(v1, ArrayObject);
      count = ArraySize;
      if ( ArraySize > 0x80 )
      {
        v8 = j_va("Physics_AABBQuery: ignore array is too large (%d > %d)", ArraySize, 128i64);
        Scr_ParamError(COM_ERR_4950, v1, 0, v8);
      }
      if ( !Scr_GetEntityArray(v1, ArrayObject, 0x80u, buffer, &count, &failureIndex, failureType) )
      {
        NameForType = Scr_GetNameForType(failureType[0]);
        v10 = j_va("Physics_AABBQuery: element %i of ignore array: type %s is not an entity", failureIndex, NameForType);
        Scr_ParamError(COM_ERR_4951, v1, 0, v10);
      }
    }
  }
  else
  {
    count = 0;
  }
  if ( Scr_GetType(v1, 4u) != VAR_STRING )
    Scr_Error(COM_ERR_4952, v1, "Physics_AABBQuery: Parameter 4 collectionType must be the collection type - see usage");
  ConstString = Scr_GetConstString(v1, 4u);
  if ( ConstString == scr_const.physicsquery_any )
  {
    v2 = PHYSICS_COLLISIONQUERY_COLLECTION_TYPE_ANY;
  }
  else if ( ConstString == scr_const.physicsquery_closest )
  {
    Scr_Error(COM_ERR_4954, v1, "Physics_AABBQuery: Parameter 4 collectionType is closest - there isn't a real concept of closest for aabb overlapping");
  }
  else
  {
    v2 = PHYSICS_COLLISIONQUERY_COLLECTION_TYPE_UNKNOWN;
    if ( ConstString == scr_const.physicsquery_all )
      v2 = PHYSICS_COLLISIONQUERY_COLLECTION_TYPE_ALL;
  }
  Value = (hkMonitorStream *)TlsGetValue(hkMonitorStream__m_instance.m_slotID);
  v13 = Value;
  v43 = Value;
  if ( Value )
    hkMonitorStream::timerBegin(Value, "TtPhysics_AABBQuery");
  v50 = v13;
  CollisionQueryResult = Physics_AllocateCollisionQueryResult(PHYSICS_WORLD_ID_FIRST, v2);
  if ( !CollisionQueryResult && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsscript.cpp", 1852, ASSERT_TYPE_ASSERT, "(result)", (const char *)&queryFormat, "result") )
    __debugbreak();
  HavokPhysics_IgnoreBodies::HavokPhysics_IgnoreBodies(&v46, count, 0);
  if ( v4 )
  {
    HavokPhysics_IgnoreBodies::SetIgnoreEntity(&v46, 0, entnum, 1, 0, 0, 0, 0);
  }
  else
  {
    for ( i = 0; i < count; ++i )
    {
      v16 = Scr_GetEntityIdRef(v1, buffer[i]).entnum;
      HavokPhysics_IgnoreBodies::SetIgnoreEntity(&v46, i, v16, 1, 0, 0, 0, 0);
    }
  }
  _XMM0 = 0i64;
  extendedData.collisionBuffer = 0.0;
  extendedData.phaseSelection = All;
  extendedData.contents = Int;
  extendedData.simplify = 1;
  extendedData.ignoreBodies = &v46;
  Physics_AABBQuery(PHYSICS_WORLD_ID_FIRST, &vectorValue, &max, &extendedData, CollisionQueryResult);
  if ( v2 )
  {
    if ( v2 == PHYSICS_COLLISIONQUERY_COLLECTION_TYPE_ALL )
    {
      HavokPhysics_CollisionQueryResult::SortResults(CollisionQueryResult);
      NumHits = HavokPhysics_CollisionQueryResult::GetNumHits(CollisionQueryResult);
      v42 = NumHits;
      p_m_freelist = &v54.m_freelist;
      v20 = &v54.m_data.m_buffer[5080];
      do
      {
        *(_QWORD *)v20 = p_m_freelist;
        p_m_freelist = (ntl::internal::pool_allocator_freelist<40> *)v20;
        v20 -= 40;
      }
      while ( v20 + 40 > (char *)&v54 );
      v54.m_freelist.m_head.mp_next = &p_m_freelist->m_head;
      if ( !p_m_freelist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
        __debugbreak();
      v54.m_size = 0i64;
      v54.m_endNodeBase.m_color = RB_NODE_COLOR_RED;
      v54.m_endNodeBase.mp_parent = NULL;
      v54.m_endNodeBase.mp_left = &v54.m_endNodeBase;
      v54.m_endNodeBase.mp_right = &v54.m_endNodeBase;
      v21 = 0;
      if ( NumHits )
      {
        while ( 1 )
        {
          AABBQueryHitBodyId = HavokPhysics_CollisionQueryResult::GetAABBQueryHitBodyId(CollisionQueryResult, v21);
          Ref = Physics_GetRef(PHYSICS_WORLD_ID_FIRST, AABBQueryHitBodyId);
          EntityNum = Physics_GetEntityNum(Ref);
          failureIndex = EntityNum;
          p_m_endNodeBase = &v54.m_endNodeBase;
          mp_parent = v54.m_endNodeBase.mp_parent;
          v27 = 1;
          while ( mp_parent )
          {
            p_m_endNodeBase = mp_parent;
            v27 = EntityNum < mp_parent[1].m_color;
            if ( EntityNum >= mp_parent[1].m_color )
              mp_parent = mp_parent->mp_right;
            else
              mp_parent = mp_parent->mp_left;
          }
          mp_left = p_m_endNodeBase;
          if ( !v27 )
            goto LABEL_64;
          if ( p_m_endNodeBase != v54.m_endNodeBase.mp_left )
            break;
          ntl::red_black_tree<int,int,ntl::fixed_pool_allocator<ntl::red_black_tree_node<int>,128,8>,ntl::return_input<int>,ntl::less<int,int>>::insert_node(&v54, &result, p_m_endNodeBase, (const int *)&failureIndex, 1, 0);
LABEL_89:
          if ( ++v21 >= v42 )
          {
            v13 = v43;
            v1 = v44;
            goto LABEL_91;
          }
        }
        if ( !p_m_endNodeBase && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 108, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
          __debugbreak();
        if ( p_m_endNodeBase->m_color || p_m_endNodeBase->mp_parent->mp_parent != p_m_endNodeBase )
        {
          mp_left = p_m_endNodeBase->mp_left;
          if ( mp_left )
          {
            for ( j = mp_left->mp_right; j; j = j->mp_right )
              mp_left = j;
          }
          else
          {
            mp_left = p_m_endNodeBase->mp_parent;
            if ( p_m_endNodeBase == mp_left->mp_left )
            {
              do
              {
                v30 = mp_left;
                mp_left = mp_left->mp_parent;
              }
              while ( v30 == mp_left->mp_left );
            }
          }
        }
        else
        {
          mp_left = p_m_endNodeBase->mp_right;
        }
LABEL_64:
        if ( !mp_left && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 81, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
          __debugbreak();
        if ( mp_left[1].m_color < EntityNum )
        {
          if ( !p_m_endNodeBase && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 694, ASSERT_TYPE_ASSERT, "( p_insert != 0 )", (const char *)&queryFormat, "p_insert != NULL") )
            __debugbreak();
          if ( !v54.m_freelist.m_head.mp_next )
          {
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
              __debugbreak();
            if ( !v54.m_freelist.m_head.mp_next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 112, ASSERT_TYPE_ASSERT, "( m_head.mp_next != 0 )", "This container was memset to zero") )
              __debugbreak();
          }
          if ( (ntl::internal::pool_allocator_freelist<40> *)v54.m_freelist.m_head.mp_next == &v54.m_freelist && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\allocator\\pool_allocator.h", 298, ASSERT_TYPE_ASSERT, "( !empty() )", "Pool out of elements to allocate (Elem size=%zu, Num elems=%zu)", 0x28ui64, 0x80ui64) )
            __debugbreak();
          mp_next = v54.m_freelist.m_head.mp_next;
          v54.m_freelist.m_head.mp_next = v54.m_freelist.m_head.mp_next->mp_next;
          v47.m256i_i32[0] = 0;
          v47.m256i_i64[1] = (__int64)p_m_endNodeBase;
          __asm { vpxor   xmm0, xmm0, xmm0 }
          *(_OWORD *)&v47.m256i_u64[2] = _XMM0;
          LODWORD(v48) = EntityNum;
          *(__m256i *)&mp_next->mp_next = v47;
          *(double *)&mp_next[4].mp_next = v48;
          if ( p_m_endNodeBase == &v54.m_endNodeBase )
          {
            v54.m_endNodeBase.mp_left = (ntl::red_black_tree_node_base *)mp_next;
            v54.m_endNodeBase.mp_parent = (ntl::red_black_tree_node_base *)mp_next;
            v54.m_endNodeBase.mp_right = (ntl::red_black_tree_node_base *)mp_next;
          }
          else if ( EntityNum >= p_m_endNodeBase[1].m_color )
          {
            p_m_endNodeBase->mp_right = (ntl::red_black_tree_node_base *)mp_next;
            mp_right = v54.m_endNodeBase.mp_right;
            if ( p_m_endNodeBase == v54.m_endNodeBase.mp_right )
              mp_right = (ntl::red_black_tree_node_base *)mp_next;
            v54.m_endNodeBase.mp_right = mp_right;
          }
          else
          {
            p_m_endNodeBase->mp_left = (ntl::red_black_tree_node_base *)mp_next;
            if ( p_m_endNodeBase == v54.m_endNodeBase.mp_left )
              v54.m_endNodeBase.mp_left = (ntl::red_black_tree_node_base *)mp_next;
          }
          ntl::red_black_tree_node_base::rebalance((ntl::red_black_tree_node_base *)mp_next, &v54.m_endNodeBase.mp_parent);
          ++v54.m_size;
        }
        goto LABEL_89;
      }
LABEL_91:
      Scr_MakeArray(v1);
      next = v54.m_endNodeBase.mp_left;
      if ( v54.m_endNodeBase.mp_left != &v54.m_endNodeBase )
      {
        do
        {
          if ( !next && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\libs\\ntl\\ntl\\tree\\rb_tree.h", 81, ASSERT_TYPE_ASSERT, "( mp_node )", (const char *)&queryFormat, "mp_node") )
            __debugbreak();
          Scr_AddEntityNum(v1, next[1].m_color, ENTITY_CLASS_GENTITY);
          Scr_AddArray(v1);
          next = ntl::red_black_tree_node_base::get_next(next);
        }
        while ( next != &v54.m_endNodeBase );
        v13 = v43;
      }
      if ( v54.m_size )
      {
        v34 = v54.m_endNodeBase.mp_parent;
        if ( v54.m_endNodeBase.mp_parent )
        {
          do
          {
            ntl::red_black_tree<int,int,ntl::fixed_pool_allocator<ntl::red_black_tree_node<int>,128,8>,ntl::return_input<int>,ntl::less<int,int>>::erase_tree(&v54, (ntl::red_black_tree_node<int> *)v34->mp_right);
            v35 = v34->mp_left;
            *(_QWORD *)&v34->m_color = v54.m_freelist.m_head.mp_next;
            v54.m_freelist.m_head.mp_next = (ntl::internal::pool_allocator_pointer_freelist::free_item_pointer *)v34;
            v34 = v35;
          }
          while ( v35 );
        }
      }
    }
  }
  else
  {
    HasHit = HavokPhysics_CollisionQueryResult::HasHit(CollisionQueryResult);
    Scr_AddBool(v1, HasHit);
  }
  Physics_FreeCollisionQueryResult(CollisionQueryResult);
  v37 = hkMemHeapAllocator();
  v46.m_ignoreBodies.m_size = 0;
  if ( v46.m_ignoreBodies.m_capacityAndFlags >= 0 )
    hkMemoryAllocator::bufFree2(v37, v46.m_ignoreBodies.m_data, 4, v46.m_ignoreBodies.m_capacityAndFlags & 0x3FFFFFFF);
  v46.m_ignoreBodies.m_data = NULL;
  v46.m_ignoreBodies.m_capacityAndFlags = 0x80000000;
  v38 = hkMemHeapAllocator();
  v46.m_ignoreEntities.m_size = 0;
  if ( v46.m_ignoreEntities.m_capacityAndFlags >= 0 )
    hkMemoryAllocator::bufFree2(v38, v46.m_ignoreEntities.m_data, 8, v46.m_ignoreEntities.m_capacityAndFlags & 0x3FFFFFFF);
  v46.m_ignoreEntities.m_data = NULL;
  v46.m_ignoreEntities.m_capacityAndFlags = 0x80000000;
  if ( v13 )
    hkMonitorStream::timerEnd(v13, "Et");
}

/*
==============
PhysicsScript_Raycast
==============
*/
void PhysicsScript_Raycast(scrContext_t *scrContext)
{
  scrContext_t *v1; 
  int Int; 
  char v3; 
  scr_entref_t EntityRef; 
  unsigned int ArrayObject; 
  unsigned int ArraySize; 
  const char *v7; 
  const char *NameForType; 
  const char *v9; 
  bool v10; 
  scr_string_t ConstString; 
  Physics_CollisionQueryCollectionType v12; 
  hkMonitorStream *Value; 
  hkMonitorStream *v14; 
  Physics_WorldId v15; 
  HavokPhysics_CollisionQueryResult *CollisionQueryResult; 
  __int64 i; 
  int entnum; 
  VariableType v19; 
  unsigned __int8 *WeaponPriorityMap; 
  int v21; 
  HavokPhysics_CollisionQueryResult *v22; 
  int NumHits; 
  int v24; 
  Physics_WorldId v25; 
  int v26; 
  int ClosestPointHitRef; 
  __int32 v28; 
  int v29; 
  int v30; 
  int v31; 
  int Ref; 
  Physics_RefSystem RefSystem; 
  double RaycastHitFraction; 
  scr_string_t scriptable; 
  const Physics_DetailHitData *DetailHitData; 
  scr_string_t partName; 
  const char *RigidBodyName; 
  int v39; 
  int EntityNum; 
  Physics_RefSystem v41; 
  double v42; 
  scr_string_t hittype; 
  const Physics_DetailHitData *v44; 
  scr_string_t String; 
  const char *v46; 
  bool HasHit; 
  hkMemoryAllocator *v48; 
  hkMemoryAllocator *v49; 
  VariableType failureType[4]; 
  int svEntNum; 
  Physics_WorldId worldId[2]; 
  unsigned int bodyId[2]; 
  hkMonitorStream *v54; 
  HavokPhysics_IgnoreBodies v55; 
  Physics_RaycastExtendedData extendedData; 
  Physics_QueryPointExtendedData v57; 
  __int64 v58; 
  hkMonitorStream *v59; 
  vec3_t vectorValue; 
  vec3_t pos; 
  vec3_t normal; 
  vec3_t end; 
  unsigned int buffer[128]; 

  v58 = -2i64;
  v1 = scrContext;
  *(_QWORD *)bodyId = scrContext;
  if ( Scr_GetType(scrContext, 0) != VAR_VECTOR )
    Scr_Error(COM_ERR_4955, v1, "Physics_Raycast: Parameter 0 start must be the start vector - see usage");
  Scr_GetVector(v1, 0, &vectorValue);
  if ( Scr_GetType(v1, 1u) != VAR_VECTOR )
    Scr_Error(COM_ERR_4956, v1, "Physics_Raycast: Parameter 1 end must be the end vector - see usage");
  Scr_GetVector(v1, 1u, &end);
  if ( Scr_GetType(v1, 2u) != VAR_INTEGER )
    Scr_Error(COM_ERR_4957, v1, "Physics_Raycast: Parameter 2 contents must be the contents - see usage");
  Int = Scr_GetInt(v1, 2u);
  if ( !Int )
    Scr_Error(COM_ERR_4958, v1, "Physics_Raycast: Parameter 2 contents must be non 0");
  v3 = 0;
  svEntNum = 0;
  if ( Scr_GetType(v1, 3u) )
  {
    if ( Scr_GetPointerType(v1, 3u) == VAR_ENTITY )
    {
      EntityRef = Scr_GetEntityRef(v1, 3u);
      if ( EntityRef.entclass )
      {
        worldId[0] = PHYSICS_WORLD_ID_FIRST;
        Scr_Error(COM_ERR_6147, v1, "Physics_Raycast: Parameter 3 must be an entity.");
      }
      else
      {
        worldId[0] = PHYSICS_WORLD_ID_SERVER_DETAIL;
        svEntNum = EntityRef.entnum;
        v3 = 1;
      }
    }
    else
    {
      if ( Scr_GetPointerType(v1, 3u) != VAR_ARRAY )
        Scr_Error(COM_ERR_4959, v1, "Physics_Raycast: Parameter 3 ignore array is not invalid, an entity or an array");
      ArrayObject = BGScr_Main_GetArrayObject(v1, 3u);
      ArraySize = GetArraySize(v1, ArrayObject);
      worldId[0] = ArraySize;
      if ( ArraySize > 0x80 )
      {
        v7 = j_va("Physics_Raycast: ignore array is too large (%d > %d)", ArraySize, 128i64);
        Scr_ParamError(COM_ERR_4960, v1, 0, v7);
      }
      if ( !Scr_GetEntityArray(v1, ArrayObject, 0x80u, buffer, (unsigned int *)worldId, (unsigned int *)&worldId[1], failureType) )
      {
        NameForType = Scr_GetNameForType(failureType[0]);
        v9 = j_va("Physics_Raycast: element %i of ignore array: type %s is not an entity", (unsigned int)worldId[1], NameForType);
        Scr_ParamError(COM_ERR_4961, v1, 0, v9);
      }
    }
  }
  else
  {
    worldId[0] = PHYSICS_WORLD_ID_FIRST;
  }
  if ( Scr_GetType(v1, 4u) != VAR_INTEGER )
    Scr_Error(COM_ERR_4962, v1, "Physics_Raycast: Parameter 4 detail must be the detail flag - see usage");
  v10 = Scr_GetInt(v1, 4u) != 0;
  failureType[2] = v10;
  if ( Scr_GetType(v1, 5u) != VAR_STRING )
    Scr_Error(COM_ERR_4963, v1, "Physics_Raycast: Parameter 5 collectionType must be the collection type - see usage");
  ConstString = Scr_GetConstString(v1, 5u);
  if ( ConstString == scr_const.physicsquery_any )
  {
    v12 = PHYSICS_COLLISIONQUERY_COLLECTION_TYPE_ANY;
  }
  else if ( ConstString == scr_const.physicsquery_closest )
  {
    v12 = PHYSICS_COLLISIONQUERY_COLLECTION_TYPE_CLOSEST;
  }
  else
  {
    v12 = PHYSICS_COLLISIONQUERY_COLLECTION_TYPE_UNKNOWN;
    if ( ConstString == scr_const.physicsquery_all )
      v12 = PHYSICS_COLLISIONQUERY_COLLECTION_TYPE_ALL;
  }
  failureType[0] = VAR_UNDEFINED;
  if ( Scr_GetNumParam(v1) >= 7 )
  {
    if ( Scr_GetType(v1, 6u) != VAR_INTEGER )
      Scr_Error(COM_ERR_4965, v1, "Physics_Raycast: Parameter 6 'ignoreClutter', if provided, must be a flag indicating whether to ignore entities marked as clutter - see usage");
    failureType[0] = Scr_GetInt(v1, 6u) != 0;
  }
  failureType[1] = VAR_UNDEFINED;
  if ( Scr_GetNumParam(v1) >= 8 )
  {
    if ( Scr_GetType(v1, 7u) != VAR_INTEGER && Scr_GetType(v1, 7u) )
      Scr_Error(COM_ERR_6591, v1, "Physics_Raycast: Parameter 7 'allowScriptables', if provided, must be a flag indicating whether to allow scriptables - see usage");
    if ( Scr_GetType(v1, 7u) == VAR_INTEGER )
      failureType[1] = Scr_GetInt(v1, 7u) != 0;
  }
  Value = (hkMonitorStream *)TlsGetValue(hkMonitorStream__m_instance.m_slotID);
  v14 = Value;
  v54 = Value;
  if ( Value )
    hkMonitorStream::timerBegin(Value, "TtPhysics_Raycast");
  v59 = v14;
  v15 = v10;
  worldId[1] = v10;
  CollisionQueryResult = Physics_AllocateCollisionQueryResult((Physics_WorldId)v10, v12);
  if ( !CollisionQueryResult && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsscript.cpp", 2068, ASSERT_TYPE_ASSERT, "(result)", (const char *)&queryFormat, "result") )
    __debugbreak();
  HavokPhysics_IgnoreBodies::HavokPhysics_IgnoreBodies(&v55, worldId[0], 0);
  if ( v3 )
  {
    HavokPhysics_IgnoreBodies::SetIgnoreEntity(&v55, 0, svEntNum, 1, 0, 0, 0, 0);
  }
  else
  {
    for ( i = 0i64; (unsigned int)i < worldId[0]; i = (unsigned int)(i + 1) )
    {
      entnum = Scr_GetEntityIdRef(v1, buffer[i]).entnum;
      HavokPhysics_IgnoreBodies::SetIgnoreEntity(&v55, i, entnum, 1, 0, 0, 0, 0);
    }
  }
  HavokPhysics_IgnoreBodies::SetIsClutter(&v55, failureType[0]);
  extendedData.characterProxyType = PHYSICS_CHARACTERPROXY_TYPE_COLLISION;
  extendedData.collisionBuffer = 0.0;
  extendedData.phaseSelection = All;
  extendedData.insideHitType = Physics_RaycastInsideHitType_InsideHits;
  *(_WORD *)&extendedData.collectInsideHits = 256;
  extendedData.contents = Int;
  extendedData.ignoreBodies = &v55;
  v19 = failureType[2];
  if ( failureType[2] )
  {
    WeaponPriorityMap = BG_GetWeaponPriorityMap(&NULL_WEAPON, 0);
    Physics_AddDetailTrace(CollisionQueryResult, WeaponPriorityMap);
    extendedData.characterProxyType = PHYSICS_CHARACTERPROXY_TYPE_DETAIL;
  }
  Physics_Raycast(v15, &vectorValue, &end, &extendedData, CollisionQueryResult);
  if ( v19 )
  {
    v21 = Int & 0x2004000;
    if ( v21 )
    {
      v57.simplify = 0;
      v57.collisionBuffer = 0.0;
      v57.phaseSelection = All;
      v57.contents = v21;
      v57.ignoreBodies = &v55;
      v57.characterProxyType = PHYSICS_CHARACTERPROXY_TYPE_DETAIL;
      v22 = Physics_AllocateCollisionQueryResult(v15, PHYSICS_COLLISIONQUERY_COLLECTION_TYPE_ALL);
      if ( !v22 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsscript.cpp", 2109, ASSERT_TYPE_ASSERT, "(allResult)", (const char *)&queryFormat, "allResult") )
        __debugbreak();
      Physics_QueryPoint(worldId[1], &vectorValue, 0.0, &v57, v22);
      NumHits = HavokPhysics_CollisionQueryResult::GetNumHits(v22);
      v24 = 0;
      if ( NumHits > 0 )
      {
        v25 = worldId[1];
        v26 = NumHits;
        do
        {
          if ( !HavokPhysics_CollisionQueryResult::HasHit(CollisionQueryResult) || (ClosestPointHitRef = HavokPhysics_CollisionQueryResult::GetClosestPointHitRef(v22, v24), HavokPhysics_CollisionQueryResult::GetRaycastHitRef(CollisionQueryResult, 0) != ClosestPointHitRef) )
            HavokPhysics_CollisionQueryResult::AddQueryPointHitAsRaycastHit(CollisionQueryResult, v25, v22, v24, &vectorValue, &end, &extendedData);
          ++v24;
        }
        while ( v24 < v26 );
        v14 = v54;
        v1 = *(scrContext_t **)bodyId;
      }
      Physics_FreeCollisionQueryResult(v22);
      v15 = worldId[1];
    }
  }
  if ( v12 )
  {
    v28 = v12 - 1;
    if ( v28 )
    {
      if ( v28 == 1 )
      {
        HavokPhysics_CollisionQueryResult::SortResults(CollisionQueryResult);
        v29 = HavokPhysics_CollisionQueryResult::GetNumHits(CollisionQueryResult);
        Scr_MakeArray(v1);
        v30 = 0;
        if ( v29 > 0 )
        {
          v31 = v29;
          do
          {
            bodyId[0] = HavokPhysics_CollisionQueryResult::GetRaycastHitBodyId(CollisionQueryResult, v30);
            Ref = Physics_GetRef(v15, bodyId[0]);
            svEntNum = Physics_GetEntityNum(Ref);
            RefSystem = Physics_GetRefSystem(Ref);
            HavokPhysics_CollisionQueryResult::GetRaycastHitPosition(CollisionQueryResult, v30, &pos);
            HavokPhysics_CollisionQueryResult::GetRaycastHitNormal(CollisionQueryResult, v30, &normal);
            RaycastHitFraction = HavokPhysics_CollisionQueryResult::GetRaycastHitFraction(CollisionQueryResult, v30);
            worldId[1] = HavokPhysics_CollisionQueryResult::GetRaycastHitSurfFlags(CollisionQueryResult, v30);
            Scr_MakeArray(v1);
            if ( svEntNum == 2046 )
            {
              if ( RefSystem == Physics_RefSystem_Scriptable && failureType[1] )
              {
                Scr_AddConstString(v1, scr_const.hittype_scriptable);
                Scr_AddArrayStringIndexed(v1, scr_const.hittype);
                Scr_AddEntityNum(v1, Ref & 0x3FFFFF, ENTITY_CLASS_SCRIPTABLE);
                scriptable = scr_const.scriptable;
              }
              else
              {
                Scr_AddConstString(v1, scr_const.hittype_world);
                scriptable = scr_const.hittype;
              }
            }
            else
            {
              Scr_AddConstString(v1, scr_const.hittype_entity);
              Scr_AddArrayStringIndexed(v1, scr_const.hittype);
              Scr_AddEntityNum(v1, svEntNum, ENTITY_CLASS_GENTITY);
              scriptable = scr_const.entity;
            }
            Scr_AddArrayStringIndexed(v1, scriptable);
            Scr_AddVector(v1, pos.v);
            Scr_AddArrayStringIndexed(v1, scr_const.position);
            Scr_AddVector(v1, normal.v);
            Scr_AddArrayStringIndexed(v1, scr_const.normal);
            Scr_AddFloat(v1, *(float *)&RaycastHitFraction);
            Scr_AddArrayStringIndexed(v1, scr_const.fraction);
            Scr_AddInt(v1, worldId[1]);
            Scr_AddArrayStringIndexed(v1, scr_const.surfaceflags);
            if ( failureType[2] )
            {
              DetailHitData = Physics_GetDetailHitData(CollisionQueryResult, 0, v30);
              if ( DetailHitData && DetailHitData->isValid )
              {
                partName = DetailHitData->partName;
              }
              else
              {
                RigidBodyName = Physics_GetRigidBodyName(v15, bodyId[0]);
                partName = SL_FindString(RigidBodyName);
              }
              if ( partName )
              {
                Scr_AddConstString(v1, partName);
                Scr_AddArrayStringIndexed(v1, scr_const.partName);
              }
            }
            Scr_AddArray(v1);
            ++v30;
          }
          while ( v30 < v31 );
          v14 = v54;
        }
      }
    }
    else
    {
      Scr_MakeArray(v1);
      if ( HavokPhysics_CollisionQueryResult::HasHit(CollisionQueryResult) )
      {
        svEntNum = HavokPhysics_CollisionQueryResult::GetRaycastHitBodyId(CollisionQueryResult, 0);
        v39 = Physics_GetRef(v15, svEntNum);
        EntityNum = Physics_GetEntityNum(v39);
        v41 = Physics_GetRefSystem(v39);
        HavokPhysics_CollisionQueryResult::GetRaycastHitPosition(CollisionQueryResult, 0, &normal);
        HavokPhysics_CollisionQueryResult::GetRaycastHitNormal(CollisionQueryResult, 0, &pos);
        v42 = HavokPhysics_CollisionQueryResult::GetRaycastHitFraction(CollisionQueryResult, 0);
        bodyId[0] = HavokPhysics_CollisionQueryResult::GetRaycastHitSurfFlags(CollisionQueryResult, 0);
        Scr_MakeArray(v1);
        if ( EntityNum == 2046 )
        {
          if ( v41 == Physics_RefSystem_Scriptable && failureType[1] )
          {
            Scr_AddConstString(v1, scr_const.hittype_scriptable);
            Scr_AddArrayStringIndexed(v1, scr_const.hittype);
            Scr_AddEntityNum(v1, v39 & 0x3FFFFF, ENTITY_CLASS_SCRIPTABLE);
            hittype = scr_const.scriptable;
          }
          else
          {
            Scr_AddConstString(v1, scr_const.hittype_world);
            hittype = scr_const.hittype;
          }
        }
        else
        {
          Scr_AddConstString(v1, scr_const.hittype_entity);
          Scr_AddArrayStringIndexed(v1, scr_const.hittype);
          Scr_AddEntityNum(v1, EntityNum, ENTITY_CLASS_GENTITY);
          hittype = scr_const.entity;
        }
        Scr_AddArrayStringIndexed(v1, hittype);
        Scr_AddVector(v1, normal.v);
        Scr_AddArrayStringIndexed(v1, scr_const.position);
        Scr_AddVector(v1, pos.v);
        Scr_AddArrayStringIndexed(v1, scr_const.normal);
        Scr_AddFloat(v1, *(float *)&v42);
        Scr_AddArrayStringIndexed(v1, scr_const.fraction);
        Scr_AddInt(v1, bodyId[0]);
        Scr_AddArrayStringIndexed(v1, scr_const.surfaceflags);
        if ( failureType[2] )
        {
          v44 = Physics_GetDetailHitData(CollisionQueryResult, 0, 0);
          if ( v44 && v44->isValid )
          {
            String = v44->partName;
          }
          else
          {
            v46 = Physics_GetRigidBodyName(v15, svEntNum);
            String = SL_FindString(v46);
          }
          if ( String )
          {
            Scr_AddConstString(v1, String);
            Scr_AddArrayStringIndexed(v1, scr_const.partName);
          }
        }
        Scr_AddArray(v1);
      }
    }
  }
  else
  {
    HasHit = HavokPhysics_CollisionQueryResult::HasHit(CollisionQueryResult);
    Scr_AddBool(v1, HasHit);
  }
  Physics_FreeCollisionQueryResult(CollisionQueryResult);
  v48 = hkMemHeapAllocator();
  v55.m_ignoreBodies.m_size = 0;
  if ( v55.m_ignoreBodies.m_capacityAndFlags >= 0 )
    hkMemoryAllocator::bufFree2(v48, v55.m_ignoreBodies.m_data, 4, v55.m_ignoreBodies.m_capacityAndFlags & 0x3FFFFFFF);
  v55.m_ignoreBodies.m_data = NULL;
  v55.m_ignoreBodies.m_capacityAndFlags = 0x80000000;
  v49 = hkMemHeapAllocator();
  v55.m_ignoreEntities.m_size = 0;
  if ( v55.m_ignoreEntities.m_capacityAndFlags >= 0 )
    hkMemoryAllocator::bufFree2(v49, v55.m_ignoreEntities.m_data, 8, v55.m_ignoreEntities.m_capacityAndFlags & 0x3FFFFFFF);
  v55.m_ignoreEntities.m_data = NULL;
  v55.m_ignoreEntities.m_capacityAndFlags = 0x80000000;
  if ( v14 )
    hkMonitorStream::timerEnd(v14, "Et");
}

/*
==============
PhysicsScript_RaycastEnts
==============
*/
void PhysicsScript_RaycastEnts(scrContext_t *scrContext)
{
  int Int; 
  __int64 v3; 
  unsigned int entnum; 
  char v5; 
  unsigned int ArrayObject; 
  unsigned int ArraySize; 
  const char *v8; 
  const char *NameForType; 
  const char *v10; 
  Physics_WorldId v11; 
  scr_string_t ConstString; 
  hkMonitorStream *Value; 
  hkMonitorStream *v14; 
  unsigned __int8 *WeaponPriorityMap; 
  __int64 v16; 
  const gentity_s *v17; 
  unsigned int DetailPhysicsInstanceId; 
  unsigned int v19; 
  unsigned int v20; 
  const char *v21; 
  unsigned int NumRigidBodys; 
  unsigned int v23; 
  Physics_WorldId v24; 
  unsigned int m_serialAndIndex; 
  const char *v26; 
  int NumHits; 
  HavokPhysics_CollisionQueryResult *v28; 
  unsigned int v29; 
  int v30; 
  int v31; 
  double v32; 
  int v33; 
  scr_string_t entity; 
  __int64 v35; 
  unsigned int v36; 
  gentity_s *v37; 
  entityType_s eType; 
  unsigned int Instance; 
  unsigned int v40; 
  const char *v41; 
  unsigned int i; 
  unsigned int v43; 
  const char *v44; 
  int v45; 
  const Physics_DetailHitData *v46; 
  scr_string_t String; 
  const char *v48; 
  HavokPhysics_CollisionQueryResult *v49; 
  unsigned int RaycastHitBodyId; 
  int Ref; 
  int EntityNum; 
  double RaycastHitFraction; 
  int RaycastHitSurfFlags; 
  scr_string_t hittype; 
  const Physics_DetailHitData *DetailHitData; 
  scr_string_t partName; 
  const char *RigidBodyName; 
  bool HasHit; 
  VariableType *failureType; 
  VariableType v61[4]; 
  Physics_WorldId worldId; 
  unsigned int count[2]; 
  HavokPhysics_CollisionQueryResult *result; 
  Physics_CollisionQueryCollectionType type[2]; 
  int hitIndex[2]; 
  hkMonitorStream *v67; 
  Physics_RaycastExtendedData extendedData; 
  hknpBodyId v69; 
  __int64 v70; 
  hkMonitorStream *v71; 
  vec3_t pos; 
  vec3_t normal; 
  vec3_t end; 
  vec3_t vectorValue; 
  unsigned int buffer[128]; 

  v70 = -2i64;
  if ( Scr_GetType(scrContext, 0) != VAR_VECTOR )
    Scr_Error(COM_ERR_4966, scrContext, "Physics_RaycastEnts: Parameter 0 start must be the start vector - see usage");
  Scr_GetVector(scrContext, 0, &vectorValue);
  if ( Scr_GetType(scrContext, 1u) != VAR_VECTOR )
    Scr_Error(COM_ERR_4967, scrContext, "Physics_RaycastEnts: Parameter 1 end must be the end vector - see usage");
  Scr_GetVector(scrContext, 1u, &end);
  if ( Scr_GetType(scrContext, 2u) != VAR_INTEGER )
    Scr_Error(COM_ERR_4968, scrContext, "Physics_RaycastEnts: Parameter 2 contents must be the contents - see usage");
  Int = Scr_GetInt(scrContext, 2u);
  if ( !Int )
    Scr_Error(COM_ERR_4969, scrContext, "Physics_RaycastEnts: Parameter 2 contents must be non 0");
  LODWORD(v3) = 0;
  *(_QWORD *)hitIndex = 0i64;
  entnum = 0;
  count[0] = 0;
  v5 = 0;
  if ( Scr_GetType(scrContext, 3u) )
  {
    if ( Scr_GetPointerType(scrContext, 3u) == VAR_ENTITY )
    {
      count[0] = 1;
      entnum = Scr_GetEntityRef(scrContext, 3u).entnum;
      v5 = 1;
    }
    else
    {
      if ( Scr_GetPointerType(scrContext, 3u) != VAR_ARRAY )
        Scr_Error(COM_ERR_4971, scrContext, "Physics_RaycastEnts: Parameter 3 entities array is not invalid, an entity or an array");
      ArrayObject = BGScr_Main_GetArrayObject(scrContext, 3u);
      ArraySize = GetArraySize(scrContext, ArrayObject);
      count[0] = ArraySize;
      if ( ArraySize > 0x80 )
      {
        v8 = j_va("Physics_RaycastEnts: entity array is too large (%d > %d)", ArraySize, 128i64);
        Scr_ParamError(COM_ERR_4972, scrContext, 0, v8);
      }
      if ( !Scr_GetEntityArray(scrContext, ArrayObject, 0x80u, buffer, count, (unsigned int *)&worldId, v61) )
      {
        NameForType = Scr_GetNameForType(v61[0]);
        v10 = j_va("Physics_RaycastEnts: element %i of entities array: type %s is not an entity", (unsigned int)worldId, NameForType);
        Scr_ParamError(COM_ERR_4973, scrContext, 0, v10);
      }
    }
  }
  else
  {
    Scr_Error(COM_ERR_4970, scrContext, "Physics_RaycastEnts: Parameter 3 must contain some entities");
  }
  if ( Scr_GetType(scrContext, 4u) != VAR_INTEGER )
    Scr_Error(COM_ERR_4974, scrContext, "Physics_RaycastEnts: Parameter 4 detail must be the detail flag - see usage");
  LOBYTE(v11) = Scr_GetInt(scrContext, 4u) != 0;
  v61[0] = v11;
  if ( Scr_GetType(scrContext, 5u) != VAR_STRING )
    Scr_Error(COM_ERR_4975, scrContext, "Physics_RaycastEnts: Parameter 5 collectionType must be the collection type - see usage");
  ConstString = Scr_GetConstString(scrContext, 5u);
  if ( ConstString == scr_const.physicsquery_any )
  {
    type[0] = PHYSICS_COLLISIONQUERY_COLLECTION_TYPE_ANY;
  }
  else if ( ConstString == scr_const.physicsquery_closest )
  {
    type[0] = PHYSICS_COLLISIONQUERY_COLLECTION_TYPE_CLOSEST;
  }
  else
  {
    v11 = PHYSICS_WORLD_ID_INVALID;
    if ( ConstString == scr_const.physicsquery_all )
      v11 = PHYSICS_WORLD_ID_CLIENT_FIRST;
    type[0] = v11;
    SLOBYTE(v11) = v61[0];
  }
  Value = (hkMonitorStream *)TlsGetValue(hkMonitorStream__m_instance.m_slotID);
  v14 = Value;
  v67 = Value;
  if ( Value )
    hkMonitorStream::timerBegin(Value, "TtPhysics_RaycastEnts");
  v71 = v14;
  v11 = (unsigned __int8)v11;
  worldId = v11;
  result = Physics_AllocateCollisionQueryResult((Physics_WorldId)(unsigned __int8)v11, type[0]);
  if ( !result && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsscript.cpp", 2404, ASSERT_TYPE_ASSERT, "(result)", (const char *)&queryFormat, "result") )
    __debugbreak();
  extendedData.ignoreBodies = NULL;
  extendedData.characterProxyType = PHYSICS_CHARACTERPROXY_TYPE_COLLISION;
  extendedData.collisionBuffer = 0.0;
  extendedData.phaseSelection = All;
  extendedData.insideHitType = Physics_RaycastInsideHitType_InsideHits;
  *(_WORD *)&extendedData.collectInsideHits = 256;
  extendedData.contents = Int;
  if ( v61[0] )
  {
    WeaponPriorityMap = BG_GetWeaponPriorityMap(&NULL_WEAPON, 0);
    Physics_AddDetailTrace(result, WeaponPriorityMap);
    extendedData.characterProxyType = PHYSICS_CHARACTERPROXY_TYPE_DETAIL;
  }
  if ( v5 )
  {
    v16 = truncate_cast<unsigned short,unsigned int>(entnum);
    v17 = &g_entities[v16];
    if ( BG_IsCharacterOrFakeActorEntity(&v17->s) )
    {
      if ( v61[0] )
        DetailPhysicsInstanceId = G_PhysicsCharacterProxy_GetDetailPhysicsInstanceId(v17);
      else
        DetailPhysicsInstanceId = G_PhysicsCharacterProxy_GetCollisionPhysicsInstanceId(v17);
      v19 = (unsigned __int16)v16;
    }
    else
    {
      v19 = (unsigned __int16)v16;
      DetailPhysicsInstanceId = G_PhysicsObject_GetInstance((Physics_WorldId)(unsigned __int8)v11, (unsigned __int16)v16);
    }
    v20 = DetailPhysicsInstanceId;
    if ( DetailPhysicsInstanceId == -1 )
    {
      v21 = j_va("Physics_RaycastEnts: Entity %i does not have physics", v19);
      Scr_Error(COM_ERR_4977, scrContext, v21);
    }
    NumRigidBodys = Physics_GetNumRigidBodys((const Physics_WorldId)(unsigned __int8)v11, v20);
    v23 = 0;
    if ( NumRigidBodys )
    {
      v24 = worldId;
      do
      {
        if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
          __debugbreak();
        if ( v20 == -1 )
        {
          LODWORD(failureType) = v24;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 107, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid Instance in world %i", "instanceId != PHYSICSINSTANCEID_INVALID", failureType) )
            __debugbreak();
        }
        if ( !g_physicsServerWorldsCreated )
        {
          LODWORD(failureType) = v24;
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", failureType) )
            __debugbreak();
        }
        m_serialAndIndex = HavokPhysics_GetRigidBodyID((hknpBodyId *)&type[1], v24, v20, v23)->m_serialAndIndex;
        if ( (m_serialAndIndex & 0xFFFFFF) == 0xFFFFFF )
        {
          v26 = j_va("Physics_RaycastEnts: Entity %i has invalid rigid body %i(%i)", v19, v23, m_serialAndIndex);
          Scr_Error(COM_ERR_4978, scrContext, v26);
        }
        Physics_Raycast(v24, m_serialAndIndex, &vectorValue, &end, &extendedData, result);
        ++v23;
      }
      while ( v23 < NumRigidBodys );
      v14 = v67;
    }
    LODWORD(v3) = 0;
    v11 = worldId;
  }
  else
  {
    v35 = 0i64;
    worldId = PHYSICS_WORLD_ID_FIRST;
    if ( count[0] )
    {
      do
      {
        v36 = Scr_GetEntityIdRef(scrContext, buffer[v35]).entnum;
        v37 = &g_entities[v36];
        if ( !v37 )
        {
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 1942, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
            __debugbreak();
          if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\bgame\\bg_public.h", 1921, ASSERT_TYPE_ASSERT, "(es)", (const char *)&queryFormat, "es") )
            __debugbreak();
        }
        eType = v37->s.eType;
        if ( (((eType - 1) & 0xFFED) != 0 || eType == ET_ITEM) && (eType != ET_SCRIPTMOVER || v37->s.un.scriptMoverType != 1) )
        {
          Instance = G_PhysicsObject_GetInstance((Physics_WorldId)(unsigned __int8)v11, v36);
        }
        else if ( v61[0] )
        {
          Instance = G_PhysicsCharacterProxy_GetDetailPhysicsInstanceId(v37);
        }
        else
        {
          Instance = G_PhysicsCharacterProxy_GetCollisionPhysicsInstanceId(v37);
        }
        v40 = Instance;
        if ( Instance == -1 )
        {
          v41 = j_va("Physics_RaycastEnts: Entity %i does not have physics", v36);
          Scr_Error(COM_ERR_4979, scrContext, v41);
        }
        type[1] = Physics_GetNumRigidBodys((const Physics_WorldId)(unsigned __int8)v11, v40);
        for ( i = 0; i < type[1]; ++i )
        {
          if ( !g_physicsInitialized && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 105, ASSERT_TYPE_ASSERT, "(g_physicsInitialized)", "%s\n\tPhysics: Trying to Get Rigid Body ID when system is not initialized", "g_physicsInitialized") )
            __debugbreak();
          if ( v40 == -1 )
          {
            LODWORD(failureType) = (unsigned __int8)v11;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 107, ASSERT_TYPE_ASSERT, "(instanceId != 0xFFFFFFFF)", "%s\n\tPhysics: Trying to Get Rigid Body ID with invalid Instance in world %i", "instanceId != PHYSICSINSTANCEID_INVALID", failureType) )
              __debugbreak();
          }
          if ( !g_physicsServerWorldsCreated )
          {
            LODWORD(failureType) = (unsigned __int8)v11;
            if ( CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\public\\physicsimplementationinterface.inl", 109, ASSERT_TYPE_ASSERT, "(g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST)", "%s\n\tPhysics: Trying to Get Rigid Body ID in server world %i when server worlds have not been set up", "g_physicsServerWorldsCreated || worldId < PHYSICS_WORLD_ID_SERVER_FIRST || worldId > PHYSICS_WORLD_ID_SERVER_LAST", failureType) )
              __debugbreak();
          }
          v43 = HavokPhysics_GetRigidBodyID(&v69, (const Physics_WorldId)(unsigned __int8)v11, v40, i)->m_serialAndIndex;
          if ( (v43 & 0xFFFFFF) == 0xFFFFFF )
          {
            v44 = j_va("Physics_RaycastEnts: Entity %i has invalid rigid body %i(%i)", v36, i, v43);
            Scr_Error(COM_ERR_4980, scrContext, v44);
          }
          Physics_Raycast((Physics_WorldId)(unsigned __int8)v11, v43, &vectorValue, &end, &extendedData, result);
        }
        v35 = (unsigned int)(worldId + 1);
        worldId = (int)v35;
      }
      while ( (unsigned int)v35 < count[0] );
      v14 = v67;
    }
  }
  if ( type[0] )
  {
    if ( type[0] == PHYSICS_COLLISIONQUERY_COLLECTION_TYPE_CLOSEST )
    {
      Scr_MakeArray(scrContext);
      v49 = result;
      if ( HavokPhysics_CollisionQueryResult::HasHit(result) )
      {
        RaycastHitBodyId = HavokPhysics_CollisionQueryResult::GetRaycastHitBodyId(v49, 0);
        Ref = Physics_GetRef(v11, RaycastHitBodyId);
        EntityNum = Physics_GetEntityNum(Ref);
        HavokPhysics_CollisionQueryResult::GetRaycastHitPosition(v49, 0, &normal);
        HavokPhysics_CollisionQueryResult::GetRaycastHitNormal(v49, 0, &pos);
        RaycastHitFraction = HavokPhysics_CollisionQueryResult::GetRaycastHitFraction(v49, 0);
        RaycastHitSurfFlags = HavokPhysics_CollisionQueryResult::GetRaycastHitSurfFlags(v49, 0);
        Scr_MakeArray(scrContext);
        if ( EntityNum == 2046 )
        {
          Scr_AddConstString(scrContext, scr_const.hittype_world);
          hittype = scr_const.hittype;
        }
        else
        {
          Scr_AddConstString(scrContext, scr_const.hittype_entity);
          Scr_AddArrayStringIndexed(scrContext, scr_const.hittype);
          Scr_AddEntityNum(scrContext, EntityNum, ENTITY_CLASS_GENTITY);
          hittype = scr_const.entity;
        }
        Scr_AddArrayStringIndexed(scrContext, hittype);
        Scr_AddVector(scrContext, normal.v);
        Scr_AddArrayStringIndexed(scrContext, scr_const.position);
        Scr_AddVector(scrContext, pos.v);
        Scr_AddArrayStringIndexed(scrContext, scr_const.normal);
        Scr_AddFloat(scrContext, *(float *)&RaycastHitFraction);
        Scr_AddArrayStringIndexed(scrContext, scr_const.fraction);
        Scr_AddInt(scrContext, RaycastHitSurfFlags);
        Scr_AddArrayStringIndexed(scrContext, scr_const.surfaceflags);
        if ( v61[0] )
        {
          DetailHitData = Physics_GetDetailHitData(v49, 0, 0);
          if ( DetailHitData && DetailHitData->isValid )
          {
            partName = DetailHitData->partName;
          }
          else
          {
            RigidBodyName = Physics_GetRigidBodyName(v11, RaycastHitBodyId);
            partName = SL_FindString(RigidBodyName);
          }
          if ( partName )
          {
            Scr_AddConstString(scrContext, partName);
            Scr_AddArrayStringIndexed(scrContext, scr_const.partName);
          }
        }
        Scr_AddArray(scrContext);
      }
    }
    else
    {
      if ( type[0] == PHYSICS_COLLISIONQUERY_COLLECTION_TYPE_ALL )
      {
        HavokPhysics_CollisionQueryResult::SortResults(result);
        NumHits = HavokPhysics_CollisionQueryResult::GetNumHits(result);
        Scr_MakeArray(scrContext);
        if ( NumHits > 0 )
        {
          v28 = result;
          do
          {
            v29 = HavokPhysics_CollisionQueryResult::GetRaycastHitBodyId(v28, v3);
            v30 = Physics_GetRef(v11, v29);
            v31 = Physics_GetEntityNum(v30);
            HavokPhysics_CollisionQueryResult::GetRaycastHitPosition(v28, v3, &pos);
            HavokPhysics_CollisionQueryResult::GetRaycastHitNormal(v28, v3, &normal);
            v32 = HavokPhysics_CollisionQueryResult::GetRaycastHitFraction(v28, v3);
            v33 = HavokPhysics_CollisionQueryResult::GetRaycastHitSurfFlags(v28, v3);
            Scr_MakeArray(scrContext);
            if ( v31 == 2046 )
            {
              Scr_AddConstString(scrContext, scr_const.hittype_world);
              entity = scr_const.hittype;
            }
            else
            {
              Scr_AddConstString(scrContext, scr_const.hittype_entity);
              Scr_AddArrayStringIndexed(scrContext, scr_const.hittype);
              Scr_AddEntityNum(scrContext, v31, ENTITY_CLASS_GENTITY);
              entity = scr_const.entity;
            }
            Scr_AddArrayStringIndexed(scrContext, entity);
            Scr_AddVector(scrContext, pos.v);
            Scr_AddArrayStringIndexed(scrContext, scr_const.position);
            Scr_AddVector(scrContext, normal.v);
            Scr_AddArrayStringIndexed(scrContext, scr_const.normal);
            Scr_AddFloat(scrContext, *(float *)&v32);
            Scr_AddArrayStringIndexed(scrContext, scr_const.fraction);
            Scr_AddInt(scrContext, v33);
            Scr_AddArrayStringIndexed(scrContext, scr_const.surfaceflags);
            v45 = hitIndex[0];
            if ( v61[0] )
            {
              v46 = Physics_GetDetailHitData(v28, 0, hitIndex[0]);
              if ( v46 && v46->isValid )
              {
                String = v46->partName;
              }
              else
              {
                v48 = Physics_GetRigidBodyName(v11, v29);
                String = SL_FindString(v48);
              }
              if ( String )
              {
                Scr_AddConstString(scrContext, String);
                Scr_AddArrayStringIndexed(scrContext, scr_const.partName);
              }
            }
            Scr_AddArray(scrContext);
            v3 = (unsigned int)(v45 + 1);
            *(_QWORD *)hitIndex = v3;
          }
          while ( (int)v3 < NumHits );
          v14 = v67;
        }
      }
      v49 = result;
    }
  }
  else
  {
    v49 = result;
    HasHit = HavokPhysics_CollisionQueryResult::HasHit(result);
    Scr_AddBool(scrContext, HasHit);
  }
  Physics_FreeCollisionQueryResult(v49);
  if ( v14 )
    hkMonitorStream::timerEnd(v14, "Et");
}

/*
==============
PhysicsScript_Spherecast
==============
*/
void PhysicsScript_Spherecast(scrContext_t *scrContext)
{
  double Float; 
  int v3; 
  unsigned int ArrayObject; 
  unsigned int ArraySize; 
  const char *v6; 
  const char *NameForType; 
  const char *v8; 
  scr_string_t ConstString; 
  Physics_CollisionQueryCollectionType v10; 
  Physics_CollisionQueryCollectionType v11; 
  scr_string_t v12; 
  bool v13; 
  hkMonitorStream *v14; 
  hkMonitorStream *v15; 
  HavokPhysics_CollisionQueryResult *CollisionQueryResult; 
  __int64 i; 
  int v18; 
  HavokPhysics_CollisionQueryResult *v19; 
  __int32 v20; 
  int NumHits; 
  int v22; 
  HavokPhysics_CollisionQueryResult *v23; 
  int v24; 
  unsigned int ShapecastHitBodyId; 
  int Ref; 
  double ShapecastHitFraction; 
  Physics_RefSystem RefSystem; 
  scr_string_t scriptable; 
  unsigned int v30; 
  int v31; 
  double v32; 
  Physics_RefSystem v33; 
  scr_string_t hittype; 
  bool HasHit; 
  __int32 v36; 
  int v37; 
  int v38; 
  int v39; 
  unsigned int ClosestPointHitBodyId; 
  int v41; 
  int EntityNum; 
  double ClosestPointHitDistance; 
  Physics_RefSystem v44; 
  scr_string_t entity; 
  unsigned int v46; 
  int v47; 
  int v48; 
  double v49; 
  int ClosestPointHitHitSurfFlags; 
  Physics_RefSystem v51; 
  scr_string_t v52; 
  bool v53; 
  hkMemoryAllocator *v54; 
  hkMemoryAllocator *v55; 
  char v56; 
  int entnum; 
  unsigned int entnuma; 
  int entnumb; 
  unsigned int entnumc; 
  VariableType count[8]; 
  hknpShape *shape; 
  HavokPhysics_CollisionQueryResult *result; 
  HavokPhysics_CollisionQueryResult *v64; 
  hkMonitorStream *v65; 
  HavokPhysics_IgnoreBodies v66; 
  Physics_ShapecastExtendedData extendedData; 
  __int64 v68; 
  hkMonitorStream *v69; 
  vec3_t vectorValue; 
  vec3_t end; 
  float value; 
  float v73; 
  float v74; 
  vec3_t normal; 
  vec3_t v76; 
  vec3_t pos; 
  unsigned int buffer[128]; 
  char optionalInplaceBuffer[432]; 

  v68 = -2i64;
  if ( Scr_GetType(scrContext, 0) != VAR_VECTOR )
    Scr_Error(COM_ERR_4981, scrContext, "Physics_Spherecast: Parameter 0 start must be the start vector - see usage");
  Scr_GetVector(scrContext, 0, &vectorValue);
  if ( Scr_GetType(scrContext, 1u) != VAR_VECTOR )
    Scr_Error(COM_ERR_4982, scrContext, "Physics_Spherecast: Parameter 1 end must be the end vector - see usage");
  Scr_GetVector(scrContext, 1u, &end);
  if ( Scr_GetType(scrContext, 2u) != VAR_FLOAT && Scr_GetType(scrContext, 2u) != VAR_INTEGER )
    Scr_Error(COM_ERR_4983, scrContext, "Physics_Spherecast: Parameter 2 radius must be the radius - see usage");
  Float = Scr_GetFloat(scrContext, 2u);
  if ( Scr_GetType(scrContext, 3u) != VAR_INTEGER )
    Scr_Error(COM_ERR_4984, scrContext, "Physics_Spherecast: Parameter 3 contents must be the contents - see usage");
  entnum = Scr_GetInt(scrContext, 3u);
  if ( !entnum )
    Scr_Error(COM_ERR_4985, scrContext, "Physics_Spherecast: Parameter 3 contents must be non 0");
  v56 = 0;
  v3 = 0;
  if ( Scr_GetType(scrContext, 4u) )
  {
    if ( Scr_GetPointerType(scrContext, 4u) == VAR_ENTITY )
    {
      *(_DWORD *)&count[4] = 1;
      v3 = Scr_GetEntityRef(scrContext, 4u).entnum;
      v56 = 1;
    }
    else
    {
      if ( Scr_GetPointerType(scrContext, 4u) != VAR_ARRAY )
        Scr_Error(COM_ERR_4986, scrContext, "Physics_Spherecast: Parameter 4 ignore array is not invalid, an entity or an array");
      ArrayObject = BGScr_Main_GetArrayObject(scrContext, 4u);
      ArraySize = GetArraySize(scrContext, ArrayObject);
      *(_DWORD *)&count[4] = ArraySize;
      if ( ArraySize > 0x80 )
      {
        v6 = j_va("Physics_Spherecast: ignore array is too large (%d > %d)", ArraySize, 128i64);
        Scr_ParamError(COM_ERR_4987, scrContext, 0, v6);
      }
      if ( !Scr_GetEntityArray(scrContext, ArrayObject, 0x80u, buffer, (unsigned int *)&count[4], (unsigned int *)&shape, count) )
      {
        NameForType = Scr_GetNameForType(count[0]);
        v8 = j_va("Physics_Spherecast: element %i of ignore array: type %s is not an entity", (unsigned int)shape, NameForType);
        Scr_ParamError(COM_ERR_4988, scrContext, 0, v8);
      }
    }
  }
  else
  {
    *(_DWORD *)&count[4] = 0;
  }
  if ( Scr_GetType(scrContext, 5u) != VAR_STRING )
    Scr_Error(COM_ERR_4989, scrContext, "Physics_Spherecast: Parameter 5 collectionType must be the collection type - see usage");
  ConstString = Scr_GetConstString(scrContext, 5u);
  v10 = PHYSICS_COLLISIONQUERY_COLLECTION_TYPE_UNKNOWN;
  if ( ConstString == scr_const.physicsquery_any )
  {
    v11 = PHYSICS_COLLISIONQUERY_COLLECTION_TYPE_ANY;
  }
  else if ( ConstString == scr_const.physicsquery_closest )
  {
    v11 = PHYSICS_COLLISIONQUERY_COLLECTION_TYPE_CLOSEST;
  }
  else
  {
    v11 = PHYSICS_COLLISIONQUERY_COLLECTION_TYPE_UNKNOWN;
    if ( ConstString == scr_const.physicsquery_all )
      v11 = PHYSICS_COLLISIONQUERY_COLLECTION_TYPE_ALL;
  }
  if ( Scr_GetNumParam(scrContext) >= 7 )
  {
    if ( Scr_GetType(scrContext, 6u) != VAR_STRING && Scr_GetType(scrContext, 6u) )
      Scr_Error(COM_ERR_4991, scrContext, "Physics_Spherecast: Parameter 6 startCollectionType must be the startCollectionType - see usage");
    if ( Scr_GetType(scrContext, 6u) == VAR_STRING )
    {
      v12 = Scr_GetConstString(scrContext, 6u);
      if ( v12 == scr_const.physicsquery_any )
      {
        v10 = PHYSICS_COLLISIONQUERY_COLLECTION_TYPE_ANY;
      }
      else if ( v12 == scr_const.physicsquery_closest )
      {
        v10 = PHYSICS_COLLISIONQUERY_COLLECTION_TYPE_CLOSEST;
      }
      else if ( v12 == scr_const.physicsquery_all )
      {
        v10 = PHYSICS_COLLISIONQUERY_COLLECTION_TYPE_ALL;
      }
    }
  }
  v13 = 0;
  if ( Scr_GetNumParam(scrContext) >= 8 )
  {
    if ( Scr_GetType(scrContext, 7u) != VAR_INTEGER && Scr_GetType(scrContext, 7u) )
      Scr_Error(COM_ERR_6592, scrContext, "Physics_Spherecast: Parameter 7 'allowScriptables', if provided, must be a flag indicating whether to allow scriptables - see usage");
    if ( Scr_GetType(scrContext, 7u) == VAR_INTEGER )
      v13 = Scr_GetInt(scrContext, 7u) != 0;
  }
  v14 = (hkMonitorStream *)TlsGetValue(hkMonitorStream__m_instance.m_slotID);
  v15 = v14;
  v65 = v14;
  if ( v14 )
    hkMonitorStream::timerBegin(v14, "TtPhysics_Spherecast");
  v69 = v15;
  result = Physics_AllocateCollisionQueryResult(PHYSICS_WORLD_ID_FIRST, v11);
  if ( !result && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsscript.cpp", 2786, ASSERT_TYPE_ASSERT, "(result)", (const char *)&queryFormat, "result") )
    __debugbreak();
  if ( v10 == PHYSICS_COLLISIONQUERY_COLLECTION_TYPE_UNKNOWN )
    CollisionQueryResult = NULL;
  else
    CollisionQueryResult = Physics_AllocateCollisionQueryResult(PHYSICS_WORLD_ID_FIRST, v10);
  v64 = CollisionQueryResult;
  shape = Physics_CreateShapeSphere(&vec3_origin, *(float *)&Float, optionalInplaceBuffer, 432);
  HavokPhysics_IgnoreBodies::HavokPhysics_IgnoreBodies(&v66, *(int *)&count[4], 0);
  if ( v56 )
  {
    HavokPhysics_IgnoreBodies::SetIgnoreEntity(&v66, 0, v3, 1, 0, 0, 0, 0);
  }
  else
  {
    for ( i = 0i64; (unsigned int)i < *(_DWORD *)&count[4]; i = (unsigned int)(i + 1) )
    {
      v18 = Scr_GetEntityIdRef(scrContext, buffer[i]).entnum;
      HavokPhysics_IgnoreBodies::SetIgnoreEntity(&v66, i, v18, 1, 0, 0, 0, 0);
    }
  }
  extendedData.startTolerance = 0.0;
  extendedData.accuracy = FLOAT_0_016000001;
  extendedData.collisionBuffer = 0.0;
  memset(&extendedData.nonBrushShape, 0, 21);
  extendedData.contents = entnum;
  extendedData.ignoreBodies = &v66;
  extendedData.simplifyStart = 1;
  v19 = result;
  Physics_Shapecast(PHYSICS_WORLD_ID_FIRST, shape, &vectorValue, &end, &quat_identity, &extendedData, result, CollisionQueryResult);
  if ( CollisionQueryResult )
    Scr_MakeArray(scrContext);
  if ( v11 )
  {
    v20 = v11 - 1;
    if ( v20 )
    {
      if ( v20 == 1 )
      {
        HavokPhysics_CollisionQueryResult::SortResults(v19);
        NumHits = HavokPhysics_CollisionQueryResult::GetNumHits(v19);
        Scr_MakeArray(scrContext);
        v22 = 0;
        if ( NumHits > 0 )
        {
          v23 = result;
          v24 = NumHits;
          do
          {
            ShapecastHitBodyId = HavokPhysics_CollisionQueryResult::GetShapecastHitBodyId(v23, v22);
            Ref = Physics_GetRef(PHYSICS_WORLD_ID_FIRST, ShapecastHitBodyId);
            LODWORD(shape) = Physics_GetEntityNum(Ref);
            HavokPhysics_CollisionQueryResult::GetShapecastHitContactPosition(v23, v22, &pos);
            HavokPhysics_CollisionQueryResult::GetShapecastHitSurfaceNormal(v23, v22, &normal);
            HavokPhysics_CollisionQueryResult::GetShapecastHitHitContactNormal(v23, v22, &v76);
            ShapecastHitFraction = HavokPhysics_CollisionQueryResult::GetShapecastHitFraction(v23, v22);
            entnuma = HavokPhysics_CollisionQueryResult::GetShapecastHitHitSurfFlags(v23, v22);
            value = (float)((float)(end.v[0] - vectorValue.v[0]) * *(float *)&ShapecastHitFraction) + vectorValue.v[0];
            v73 = (float)((float)(end.v[1] - vectorValue.v[1]) * *(float *)&ShapecastHitFraction) + vectorValue.v[1];
            v74 = (float)((float)(end.v[2] - vectorValue.v[2]) * *(float *)&ShapecastHitFraction) + vectorValue.v[2];
            Scr_MakeArray(scrContext);
            if ( (_DWORD)shape == 2046 )
            {
              RefSystem = Physics_GetRefSystem(Ref);
              if ( v13 && RefSystem == Physics_RefSystem_Scriptable )
              {
                Scr_AddConstString(scrContext, scr_const.hittype_scriptable);
                Scr_AddArrayStringIndexed(scrContext, scr_const.hittype);
                Scr_AddEntityNum(scrContext, Ref & 0x3FFFFF, ENTITY_CLASS_SCRIPTABLE);
                scriptable = scr_const.scriptable;
              }
              else
              {
                Scr_AddConstString(scrContext, scr_const.hittype_world);
                scriptable = scr_const.hittype;
              }
            }
            else
            {
              Scr_AddConstString(scrContext, scr_const.hittype_entity);
              Scr_AddArrayStringIndexed(scrContext, scr_const.hittype);
              Scr_AddEntityNum(scrContext, (int)shape, ENTITY_CLASS_GENTITY);
              scriptable = scr_const.entity;
            }
            Scr_AddArrayStringIndexed(scrContext, scriptable);
            Scr_AddVector(scrContext, pos.v);
            Scr_AddArrayStringIndexed(scrContext, scr_const.position);
            Scr_AddVector(scrContext, &value);
            Scr_AddArrayStringIndexed(scrContext, scr_const.shape_position);
            Scr_AddVector(scrContext, normal.v);
            Scr_AddArrayStringIndexed(scrContext, scr_const.normal);
            Scr_AddVector(scrContext, v76.v);
            Scr_AddArrayStringIndexed(scrContext, scr_const.contact_normal);
            Scr_AddFloat(scrContext, *(float *)&ShapecastHitFraction);
            Scr_AddArrayStringIndexed(scrContext, scr_const.fraction);
            Scr_AddInt(scrContext, entnuma);
            Scr_AddArrayStringIndexed(scrContext, scr_const.surfaceflags);
            Scr_AddArray(scrContext);
            ++v22;
          }
          while ( v22 < v24 );
          v15 = v65;
          CollisionQueryResult = v64;
        }
      }
    }
    else
    {
      Scr_MakeArray(scrContext);
      if ( HavokPhysics_CollisionQueryResult::HasHit(v19) )
      {
        v30 = HavokPhysics_CollisionQueryResult::GetShapecastHitBodyId(v19, 0);
        v31 = Physics_GetRef(PHYSICS_WORLD_ID_FIRST, v30);
        entnumb = Physics_GetEntityNum(v31);
        HavokPhysics_CollisionQueryResult::GetShapecastHitContactPosition(v19, 0, &v76);
        HavokPhysics_CollisionQueryResult::GetShapecastHitSurfaceNormal(v19, 0, &normal);
        HavokPhysics_CollisionQueryResult::GetShapecastHitHitContactNormal(v19, 0, &pos);
        v32 = HavokPhysics_CollisionQueryResult::GetShapecastHitFraction(v19, 0);
        LODWORD(shape) = HavokPhysics_CollisionQueryResult::GetShapecastHitHitSurfFlags(v19, 0);
        value = (float)((float)(end.v[0] - vectorValue.v[0]) * *(float *)&v32) + vectorValue.v[0];
        v73 = (float)((float)(end.v[1] - vectorValue.v[1]) * *(float *)&v32) + vectorValue.v[1];
        v74 = (float)((float)(end.v[2] - vectorValue.v[2]) * *(float *)&v32) + vectorValue.v[2];
        Scr_MakeArray(scrContext);
        if ( entnumb == 2046 )
        {
          v33 = Physics_GetRefSystem(v31);
          if ( v13 && v33 == Physics_RefSystem_Scriptable )
          {
            Scr_AddConstString(scrContext, scr_const.hittype_scriptable);
            Scr_AddArrayStringIndexed(scrContext, scr_const.hittype);
            Scr_AddEntityNum(scrContext, v31 & 0x3FFFFF, ENTITY_CLASS_SCRIPTABLE);
            hittype = scr_const.scriptable;
          }
          else
          {
            Scr_AddConstString(scrContext, scr_const.hittype_world);
            hittype = scr_const.hittype;
          }
        }
        else
        {
          Scr_AddConstString(scrContext, scr_const.hittype_entity);
          Scr_AddArrayStringIndexed(scrContext, scr_const.hittype);
          Scr_AddEntityNum(scrContext, entnumb, ENTITY_CLASS_GENTITY);
          hittype = scr_const.entity;
        }
        Scr_AddArrayStringIndexed(scrContext, hittype);
        Scr_AddVector(scrContext, v76.v);
        Scr_AddArrayStringIndexed(scrContext, scr_const.position);
        Scr_AddVector(scrContext, &value);
        Scr_AddArrayStringIndexed(scrContext, scr_const.shape_position);
        Scr_AddVector(scrContext, normal.v);
        Scr_AddArrayStringIndexed(scrContext, scr_const.normal);
        Scr_AddVector(scrContext, pos.v);
        Scr_AddArrayStringIndexed(scrContext, scr_const.contact_normal);
        Scr_AddFloat(scrContext, *(float *)&v32);
        Scr_AddArrayStringIndexed(scrContext, scr_const.fraction);
        Scr_AddInt(scrContext, (int)shape);
        Scr_AddArrayStringIndexed(scrContext, scr_const.surfaceflags);
        Scr_AddArray(scrContext);
      }
    }
  }
  else
  {
    HasHit = HavokPhysics_CollisionQueryResult::HasHit(v19);
    Scr_AddBool(scrContext, HasHit);
  }
  if ( CollisionQueryResult )
  {
    Scr_AddArray(scrContext);
    if ( v10 )
    {
      v36 = v10 - 1;
      if ( v36 )
      {
        if ( v36 == 1 )
        {
          HavokPhysics_CollisionQueryResult::SortResults(CollisionQueryResult);
          v37 = HavokPhysics_CollisionQueryResult::GetNumHits(CollisionQueryResult);
          Scr_MakeArray(scrContext);
          v38 = 0;
          if ( v37 > 0 )
          {
            v39 = v37;
            do
            {
              ClosestPointHitBodyId = HavokPhysics_CollisionQueryResult::GetClosestPointHitBodyId(CollisionQueryResult, v38);
              v41 = Physics_GetRef(PHYSICS_WORLD_ID_FIRST, ClosestPointHitBodyId);
              EntityNum = Physics_GetEntityNum(v41);
              HavokPhysics_CollisionQueryResult::GetClosestPointHitHitPosition(CollisionQueryResult, v38, &v76);
              HavokPhysics_CollisionQueryResult::GetClosestPointHitSeparatingNormal(CollisionQueryResult, v38, &normal);
              ClosestPointHitDistance = HavokPhysics_CollisionQueryResult::GetClosestPointHitDistance(CollisionQueryResult, v38);
              entnumc = HavokPhysics_CollisionQueryResult::GetClosestPointHitHitSurfFlags(CollisionQueryResult, v38);
              Scr_MakeArray(scrContext);
              if ( EntityNum == 2046 )
              {
                v44 = Physics_GetRefSystem(v41);
                if ( v13 && v44 == Physics_RefSystem_Scriptable )
                {
                  Scr_AddConstString(scrContext, scr_const.hittype_scriptable);
                  Scr_AddArrayStringIndexed(scrContext, scr_const.hittype);
                  Scr_AddEntityNum(scrContext, v41 & 0x3FFFFF, ENTITY_CLASS_SCRIPTABLE);
                  entity = scr_const.scriptable;
                }
                else
                {
                  Scr_AddConstString(scrContext, scr_const.hittype_world);
                  entity = scr_const.hittype;
                }
              }
              else
              {
                Scr_AddConstString(scrContext, scr_const.hittype_entity);
                Scr_AddArrayStringIndexed(scrContext, scr_const.hittype);
                Scr_AddEntityNum(scrContext, EntityNum, ENTITY_CLASS_GENTITY);
                entity = scr_const.entity;
              }
              Scr_AddArrayStringIndexed(scrContext, entity);
              Scr_AddVector(scrContext, v76.v);
              Scr_AddArrayStringIndexed(scrContext, scr_const.position);
              Scr_AddVector(scrContext, normal.v);
              Scr_AddArrayStringIndexed(scrContext, scr_const.normal);
              Scr_AddFloat(scrContext, *(float *)&ClosestPointHitDistance);
              Scr_AddArrayStringIndexed(scrContext, scr_const.distance);
              Scr_AddInt(scrContext, entnumc);
              Scr_AddArrayStringIndexed(scrContext, scr_const.surfaceflags);
              Scr_AddArray(scrContext);
              ++v38;
            }
            while ( v38 < v39 );
            v15 = v65;
          }
        }
      }
      else
      {
        Scr_MakeArray(scrContext);
        if ( HavokPhysics_CollisionQueryResult::HasHit(CollisionQueryResult) )
        {
          v46 = HavokPhysics_CollisionQueryResult::GetClosestPointHitBodyId(CollisionQueryResult, 0);
          v47 = Physics_GetRef(PHYSICS_WORLD_ID_FIRST, v46);
          v48 = Physics_GetEntityNum(v47);
          HavokPhysics_CollisionQueryResult::GetClosestPointHitHitPosition(CollisionQueryResult, 0, &v76);
          HavokPhysics_CollisionQueryResult::GetClosestPointHitSeparatingNormal(CollisionQueryResult, 0, &normal);
          v49 = HavokPhysics_CollisionQueryResult::GetClosestPointHitDistance(CollisionQueryResult, 0);
          ClosestPointHitHitSurfFlags = HavokPhysics_CollisionQueryResult::GetClosestPointHitHitSurfFlags(CollisionQueryResult, 0);
          Scr_MakeArray(scrContext);
          if ( v48 == 2046 )
          {
            v51 = Physics_GetRefSystem(v47);
            if ( v13 && v51 == Physics_RefSystem_Scriptable )
            {
              Scr_AddConstString(scrContext, scr_const.hittype_scriptable);
              Scr_AddArrayStringIndexed(scrContext, scr_const.hittype);
              Scr_AddEntityNum(scrContext, v47 & 0x3FFFFF, ENTITY_CLASS_SCRIPTABLE);
              v52 = scr_const.scriptable;
            }
            else
            {
              Scr_AddConstString(scrContext, scr_const.hittype_world);
              v52 = scr_const.hittype;
            }
          }
          else
          {
            Scr_AddConstString(scrContext, scr_const.hittype_entity);
            Scr_AddArrayStringIndexed(scrContext, scr_const.hittype);
            Scr_AddEntityNum(scrContext, v48, ENTITY_CLASS_GENTITY);
            v52 = scr_const.entity;
          }
          Scr_AddArrayStringIndexed(scrContext, v52);
          Scr_AddVector(scrContext, v76.v);
          Scr_AddArrayStringIndexed(scrContext, scr_const.position);
          Scr_AddVector(scrContext, normal.v);
          Scr_AddArrayStringIndexed(scrContext, scr_const.normal);
          Scr_AddFloat(scrContext, *(float *)&v49);
          Scr_AddArrayStringIndexed(scrContext, scr_const.distance);
          Scr_AddInt(scrContext, ClosestPointHitHitSurfFlags);
          Scr_AddArrayStringIndexed(scrContext, scr_const.surfaceflags);
          Scr_AddArray(scrContext);
        }
      }
    }
    else
    {
      v53 = HavokPhysics_CollisionQueryResult::HasHit(CollisionQueryResult);
      Scr_AddBool(scrContext, v53);
    }
    Scr_AddArray(scrContext);
    Physics_FreeCollisionQueryResult(CollisionQueryResult);
  }
  Physics_FreeCollisionQueryResult(result);
  v54 = hkMemHeapAllocator();
  v66.m_ignoreBodies.m_size = 0;
  if ( v66.m_ignoreBodies.m_capacityAndFlags >= 0 )
    hkMemoryAllocator::bufFree2(v54, v66.m_ignoreBodies.m_data, 4, v66.m_ignoreBodies.m_capacityAndFlags & 0x3FFFFFFF);
  v66.m_ignoreBodies.m_data = NULL;
  v66.m_ignoreBodies.m_capacityAndFlags = 0x80000000;
  v55 = hkMemHeapAllocator();
  v66.m_ignoreEntities.m_size = 0;
  if ( v66.m_ignoreEntities.m_capacityAndFlags >= 0 )
    hkMemoryAllocator::bufFree2(v55, v66.m_ignoreEntities.m_data, 8, v66.m_ignoreEntities.m_capacityAndFlags & 0x3FFFFFFF);
  v66.m_ignoreEntities.m_data = NULL;
  v66.m_ignoreEntities.m_capacityAndFlags = 0x80000000;
  if ( v15 )
    hkMonitorStream::timerEnd(v15, "Et");
}

/*
==============
PhysicsScript_Capsulecast
==============
*/
void PhysicsScript_Capsulecast(scrContext_t *scrContext)
{
  double Float; 
  float v3; 
  double v4; 
  int entnum; 
  unsigned int ArrayObject; 
  unsigned int ArraySize; 
  const char *v8; 
  const char *NameForType; 
  const char *v10; 
  scr_string_t ConstString; 
  Physics_CollisionQueryCollectionType v12; 
  Physics_CollisionQueryCollectionType v13; 
  scr_string_t v14; 
  hkMonitorStream *v15; 
  hkMonitorStream *v16; 
  HavokPhysics_CollisionQueryResult *CollisionQueryResult; 
  HavokPhysics_CollisionQueryResult *v18; 
  __int64 i; 
  int v20; 
  __int32 v21; 
  int NumHits; 
  int v23; 
  int v24; 
  unsigned int ShapecastHitBodyId; 
  int Ref; 
  int EntityNum; 
  double ShapecastHitFraction; 
  scr_string_t hittype; 
  unsigned int v30; 
  int v31; 
  int v32; 
  double v33; 
  int ShapecastHitHitSurfFlags; 
  scr_string_t entity; 
  bool HasHit; 
  __int32 v37; 
  int v38; 
  int v39; 
  int v40; 
  unsigned int ClosestPointHitBodyId; 
  int v42; 
  int v43; 
  double ClosestPointHitDistance; 
  int ClosestPointHitHitSurfFlags; 
  scr_string_t v46; 
  unsigned int v47; 
  int v48; 
  int v49; 
  double v50; 
  int v51; 
  scr_string_t v52; 
  bool v53; 
  hkMemoryAllocator *v54; 
  hkMemoryAllocator *v55; 
  VariableType failureType[4]; 
  int value; 
  unsigned int count[2]; 
  hkMonitorStream *failureIndex; 
  HavokPhysics_IgnoreBodies v60; 
  Physics_ShapecastExtendedData extendedData; 
  __int64 v62; 
  hkMonitorStream *v63; 
  hknpShape *shape; 
  float v65; 
  vec3_t vectorValue; 
  vec3_t end; 
  vec3_t normal; 
  vec3_t v69; 
  vec3_t pos; 
  vec3_t angles; 
  vec4_t quat; 
  unsigned int buffer[128]; 
  char optionalInplaceBuffer[432]; 

  v62 = -2i64;
  if ( Scr_GetType(scrContext, 0) != VAR_VECTOR )
    Scr_Error(COM_ERR_4993, scrContext, "PhysicsScript_Capsulecast: Parameter 0 start must be the start vector - see usage");
  Scr_GetVector(scrContext, 0, &vectorValue);
  if ( Scr_GetType(scrContext, 1u) != VAR_VECTOR )
    Scr_Error(COM_ERR_4994, scrContext, "PhysicsScript_Capsulecast: Parameter 1 end must be the end vector - see usage");
  Scr_GetVector(scrContext, 1u, &end);
  if ( Scr_GetType(scrContext, 2u) != VAR_FLOAT && Scr_GetType(scrContext, 2u) != VAR_INTEGER )
    Scr_Error(COM_ERR_4995, scrContext, "PhysicsScript_Capsulecast: Parameter 2 radius must be the radius - see usage");
  Float = Scr_GetFloat(scrContext, 2u);
  v3 = *(float *)&Float;
  if ( Scr_GetType(scrContext, 3u) != VAR_FLOAT && Scr_GetType(scrContext, 3u) != VAR_INTEGER )
    Scr_Error(COM_ERR_4996, scrContext, "PhysicsScript_Capsulecast: Parameter 3 halfheight must be the half height of the capsule - see usage");
  v4 = Scr_GetFloat(scrContext, 3u);
  if ( *(float *)&v4 < v3 )
    Scr_Error(COM_ERR_4997, scrContext, "PhysicsScript_Capsulecast: Parameter 3 halfheight must be the at least the size of the radius");
  if ( Scr_GetType(scrContext, 4u) != VAR_VECTOR )
    Scr_Error(COM_ERR_4998, scrContext, "PhysicsScript_Capsulecast: Parameter 4 angles must be the angles vector - see usage");
  Scr_GetVector(scrContext, 4u, &angles);
  AnglesToQuat(&angles, &quat);
  if ( Scr_GetType(scrContext, 5u) != VAR_INTEGER )
    Scr_Error(COM_ERR_4999, scrContext, "PhysicsScript_Capsulecast: Parameter 5 contents must be the contents - see usage");
  value = Scr_GetInt(scrContext, 5u);
  if ( !value )
    Scr_Error(COM_ERR_5000, scrContext, "PhysicsScript_Capsulecast: Parameter 5 contents must be non 0");
  failureType[0] = VAR_UNDEFINED;
  entnum = 0;
  if ( Scr_GetType(scrContext, 6u) )
  {
    if ( Scr_GetPointerType(scrContext, 6u) == VAR_ENTITY )
    {
      count[0] = 1;
      entnum = Scr_GetEntityRef(scrContext, 6u).entnum;
      failureType[0] = VAR_POINTER;
    }
    else
    {
      if ( Scr_GetPointerType(scrContext, 6u) != VAR_ARRAY )
        Scr_Error(COM_ERR_5001, scrContext, "PhysicsScript_Capsulecast: Parameter 6 ignore array is not invalid, an entity or an array");
      ArrayObject = BGScr_Main_GetArrayObject(scrContext, 6u);
      ArraySize = GetArraySize(scrContext, ArrayObject);
      count[0] = ArraySize;
      if ( ArraySize > 0x80 )
      {
        v8 = j_va("PhysicsScript_Capsulecast: ignore array is too large (%d > %d)", ArraySize, 128i64);
        Scr_ParamError(COM_ERR_5002, scrContext, 0, v8);
      }
      if ( !Scr_GetEntityArray(scrContext, ArrayObject, 0x80u, buffer, count, (unsigned int *)&failureIndex, &failureType[1]) )
      {
        NameForType = Scr_GetNameForType(failureType[1]);
        v10 = j_va("PhysicsScript_Capsulecast: element %i of ignore array: type %s is not an entity", (unsigned int)failureIndex, NameForType);
        Scr_ParamError(COM_ERR_5003, scrContext, 0, v10);
      }
    }
  }
  else
  {
    count[0] = 0;
  }
  if ( Scr_GetType(scrContext, 7u) != VAR_STRING )
    Scr_Error(COM_ERR_5004, scrContext, "PhysicsScript_Capsulecast: Parameter 7 collectionType must be the collection type - see usage");
  ConstString = Scr_GetConstString(scrContext, 7u);
  v12 = PHYSICS_COLLISIONQUERY_COLLECTION_TYPE_UNKNOWN;
  if ( ConstString == scr_const.physicsquery_any )
  {
    v13 = PHYSICS_COLLISIONQUERY_COLLECTION_TYPE_ANY;
  }
  else if ( ConstString == scr_const.physicsquery_closest )
  {
    v13 = PHYSICS_COLLISIONQUERY_COLLECTION_TYPE_CLOSEST;
  }
  else
  {
    v13 = PHYSICS_COLLISIONQUERY_COLLECTION_TYPE_UNKNOWN;
    if ( ConstString == scr_const.physicsquery_all )
      v13 = PHYSICS_COLLISIONQUERY_COLLECTION_TYPE_ALL;
  }
  if ( Scr_GetNumParam(scrContext) >= 9 )
  {
    if ( Scr_GetType(scrContext, 8u) != VAR_STRING )
      Scr_Error(COM_ERR_5006, scrContext, "PhysicsScript_Capsulecast: Parameter 8 startCollectionType must be the startCollectionType - see usage");
    v14 = Scr_GetConstString(scrContext, 8u);
    if ( v14 == scr_const.physicsquery_any )
    {
      v12 = PHYSICS_COLLISIONQUERY_COLLECTION_TYPE_ANY;
    }
    else if ( v14 == scr_const.physicsquery_closest )
    {
      v12 = PHYSICS_COLLISIONQUERY_COLLECTION_TYPE_CLOSEST;
    }
    else if ( v14 == scr_const.physicsquery_all )
    {
      v12 = PHYSICS_COLLISIONQUERY_COLLECTION_TYPE_ALL;
    }
  }
  v15 = (hkMonitorStream *)TlsGetValue(hkMonitorStream__m_instance.m_slotID);
  v16 = v15;
  failureIndex = v15;
  if ( v15 )
    hkMonitorStream::timerBegin(v15, "TtPhysicsScript_Capsulecast");
  v63 = v16;
  CollisionQueryResult = Physics_AllocateCollisionQueryResult(PHYSICS_WORLD_ID_FIRST, v13);
  if ( !CollisionQueryResult && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsscript.cpp", 3260, ASSERT_TYPE_ASSERT, "(result)", (const char *)&queryFormat, "result") )
    __debugbreak();
  if ( v12 == PHYSICS_COLLISIONQUERY_COLLECTION_TYPE_UNKNOWN )
    v18 = NULL;
  else
    v18 = Physics_AllocateCollisionQueryResult(PHYSICS_WORLD_ID_FIRST, v12);
  shape = Physics_CreateShapeCapsuleUpAxis(PHYSICS_WORLD_ID_FIRST, &vec3_origin, *(float *)&v4 - v3, v3, optionalInplaceBuffer, 432, Temporary);
  HavokPhysics_IgnoreBodies::HavokPhysics_IgnoreBodies(&v60, count[0], 0);
  if ( failureType[0] )
  {
    HavokPhysics_IgnoreBodies::SetIgnoreEntity(&v60, 0, entnum, 1, 0, 0, 0, 0);
  }
  else
  {
    for ( i = 0i64; (unsigned int)i < count[0]; i = (unsigned int)(i + 1) )
    {
      v20 = Scr_GetEntityIdRef(scrContext, buffer[i]).entnum;
      HavokPhysics_IgnoreBodies::SetIgnoreEntity(&v60, i, v20, 1, 0, 0, 0, 0);
    }
  }
  extendedData.startTolerance = 0.0;
  extendedData.accuracy = FLOAT_0_016000001;
  extendedData.collisionBuffer = 0.0;
  memset(&extendedData.nonBrushShape, 0, 21);
  extendedData.contents = value;
  extendedData.ignoreBodies = &v60;
  extendedData.simplifyStart = 1;
  Physics_Shapecast(PHYSICS_WORLD_ID_FIRST, shape, &vectorValue, &end, &quat, &extendedData, CollisionQueryResult, v18);
  if ( v18 )
    Scr_MakeArray(scrContext);
  if ( v13 )
  {
    v21 = v13 - 1;
    if ( v21 )
    {
      if ( v21 == 1 )
      {
        HavokPhysics_CollisionQueryResult::SortResults(CollisionQueryResult);
        NumHits = HavokPhysics_CollisionQueryResult::GetNumHits(CollisionQueryResult);
        Scr_MakeArray(scrContext);
        v23 = 0;
        if ( NumHits > 0 )
        {
          v24 = NumHits;
          do
          {
            ShapecastHitBodyId = HavokPhysics_CollisionQueryResult::GetShapecastHitBodyId(CollisionQueryResult, v23);
            Ref = Physics_GetRef(PHYSICS_WORLD_ID_FIRST, ShapecastHitBodyId);
            EntityNum = Physics_GetEntityNum(Ref);
            HavokPhysics_CollisionQueryResult::GetShapecastHitContactPosition(CollisionQueryResult, v23, &pos);
            HavokPhysics_CollisionQueryResult::GetShapecastHitSurfaceNormal(CollisionQueryResult, v23, &normal);
            HavokPhysics_CollisionQueryResult::GetShapecastHitHitContactNormal(CollisionQueryResult, v23, &v69);
            ShapecastHitFraction = HavokPhysics_CollisionQueryResult::GetShapecastHitFraction(CollisionQueryResult, v23);
            value = HavokPhysics_CollisionQueryResult::GetShapecastHitHitSurfFlags(CollisionQueryResult, v23);
            *(float *)&shape = (float)((float)(end.v[0] - vectorValue.v[0]) * *(float *)&ShapecastHitFraction) + vectorValue.v[0];
            *((float *)&shape + 1) = (float)((float)(end.v[1] - vectorValue.v[1]) * *(float *)&ShapecastHitFraction) + vectorValue.v[1];
            v65 = (float)((float)(end.v[2] - vectorValue.v[2]) * *(float *)&ShapecastHitFraction) + vectorValue.v[2];
            Scr_MakeArray(scrContext);
            if ( EntityNum == 2046 )
            {
              Scr_AddConstString(scrContext, scr_const.hittype_world);
              hittype = scr_const.hittype;
            }
            else
            {
              Scr_AddConstString(scrContext, scr_const.hittype_entity);
              Scr_AddArrayStringIndexed(scrContext, scr_const.hittype);
              Scr_AddEntityNum(scrContext, EntityNum, ENTITY_CLASS_GENTITY);
              hittype = scr_const.entity;
            }
            Scr_AddArrayStringIndexed(scrContext, hittype);
            Scr_AddVector(scrContext, pos.v);
            Scr_AddArrayStringIndexed(scrContext, scr_const.position);
            Scr_AddVector(scrContext, (const float *)&shape);
            Scr_AddArrayStringIndexed(scrContext, scr_const.shape_position);
            Scr_AddVector(scrContext, normal.v);
            Scr_AddArrayStringIndexed(scrContext, scr_const.normal);
            Scr_AddVector(scrContext, v69.v);
            Scr_AddArrayStringIndexed(scrContext, scr_const.contact_normal);
            Scr_AddFloat(scrContext, *(float *)&ShapecastHitFraction);
            Scr_AddArrayStringIndexed(scrContext, scr_const.fraction);
            Scr_AddInt(scrContext, value);
            Scr_AddArrayStringIndexed(scrContext, scr_const.surfaceflags);
            Scr_AddArray(scrContext);
            ++v23;
          }
          while ( v23 < v24 );
          v16 = failureIndex;
        }
      }
    }
    else
    {
      Scr_MakeArray(scrContext);
      if ( HavokPhysics_CollisionQueryResult::HasHit(CollisionQueryResult) )
      {
        v30 = HavokPhysics_CollisionQueryResult::GetShapecastHitBodyId(CollisionQueryResult, 0);
        v31 = Physics_GetRef(PHYSICS_WORLD_ID_FIRST, v30);
        v32 = Physics_GetEntityNum(v31);
        HavokPhysics_CollisionQueryResult::GetShapecastHitContactPosition(CollisionQueryResult, 0, &v69);
        HavokPhysics_CollisionQueryResult::GetShapecastHitSurfaceNormal(CollisionQueryResult, 0, &normal);
        HavokPhysics_CollisionQueryResult::GetShapecastHitHitContactNormal(CollisionQueryResult, 0, &pos);
        v33 = HavokPhysics_CollisionQueryResult::GetShapecastHitFraction(CollisionQueryResult, 0);
        ShapecastHitHitSurfFlags = HavokPhysics_CollisionQueryResult::GetShapecastHitHitSurfFlags(CollisionQueryResult, 0);
        *(float *)&shape = (float)((float)(end.v[0] - vectorValue.v[0]) * *(float *)&v33) + vectorValue.v[0];
        *((float *)&shape + 1) = (float)((float)(end.v[1] - vectorValue.v[1]) * *(float *)&v33) + vectorValue.v[1];
        v65 = (float)((float)(end.v[2] - vectorValue.v[2]) * *(float *)&v33) + vectorValue.v[2];
        Scr_MakeArray(scrContext);
        if ( v32 == 2046 )
        {
          Scr_AddConstString(scrContext, scr_const.hittype_world);
          entity = scr_const.hittype;
        }
        else
        {
          Scr_AddConstString(scrContext, scr_const.hittype_entity);
          Scr_AddArrayStringIndexed(scrContext, scr_const.hittype);
          Scr_AddEntityNum(scrContext, v32, ENTITY_CLASS_GENTITY);
          entity = scr_const.entity;
        }
        Scr_AddArrayStringIndexed(scrContext, entity);
        Scr_AddVector(scrContext, v69.v);
        Scr_AddArrayStringIndexed(scrContext, scr_const.position);
        Scr_AddVector(scrContext, (const float *)&shape);
        Scr_AddArrayStringIndexed(scrContext, scr_const.shape_position);
        Scr_AddVector(scrContext, normal.v);
        Scr_AddArrayStringIndexed(scrContext, scr_const.normal);
        Scr_AddVector(scrContext, pos.v);
        Scr_AddArrayStringIndexed(scrContext, scr_const.contact_normal);
        Scr_AddFloat(scrContext, *(float *)&v33);
        Scr_AddArrayStringIndexed(scrContext, scr_const.fraction);
        Scr_AddInt(scrContext, ShapecastHitHitSurfFlags);
        Scr_AddArrayStringIndexed(scrContext, scr_const.surfaceflags);
        Scr_AddArray(scrContext);
      }
    }
  }
  else
  {
    HasHit = HavokPhysics_CollisionQueryResult::HasHit(CollisionQueryResult);
    Scr_AddBool(scrContext, HasHit);
  }
  if ( v18 )
  {
    Scr_AddArray(scrContext);
    if ( v12 )
    {
      v37 = v12 - 1;
      if ( v37 )
      {
        if ( v37 == 1 )
        {
          HavokPhysics_CollisionQueryResult::SortResults(v18);
          v38 = HavokPhysics_CollisionQueryResult::GetNumHits(v18);
          Scr_MakeArray(scrContext);
          v39 = 0;
          if ( v38 > 0 )
          {
            v40 = v38;
            do
            {
              ClosestPointHitBodyId = HavokPhysics_CollisionQueryResult::GetClosestPointHitBodyId(v18, v39);
              v42 = Physics_GetRef(PHYSICS_WORLD_ID_FIRST, ClosestPointHitBodyId);
              v43 = Physics_GetEntityNum(v42);
              HavokPhysics_CollisionQueryResult::GetClosestPointHitHitPosition(v18, v39, &v69);
              HavokPhysics_CollisionQueryResult::GetClosestPointHitSeparatingNormal(v18, v39, &normal);
              ClosestPointHitDistance = HavokPhysics_CollisionQueryResult::GetClosestPointHitDistance(v18, v39);
              ClosestPointHitHitSurfFlags = HavokPhysics_CollisionQueryResult::GetClosestPointHitHitSurfFlags(v18, v39);
              Scr_MakeArray(scrContext);
              if ( v43 == 2046 )
              {
                Scr_AddConstString(scrContext, scr_const.hittype_world);
                v46 = scr_const.hittype;
              }
              else
              {
                Scr_AddConstString(scrContext, scr_const.hittype_entity);
                Scr_AddArrayStringIndexed(scrContext, scr_const.hittype);
                Scr_AddEntityNum(scrContext, v43, ENTITY_CLASS_GENTITY);
                v46 = scr_const.entity;
              }
              Scr_AddArrayStringIndexed(scrContext, v46);
              Scr_AddVector(scrContext, v69.v);
              Scr_AddArrayStringIndexed(scrContext, scr_const.position);
              Scr_AddVector(scrContext, normal.v);
              Scr_AddArrayStringIndexed(scrContext, scr_const.normal);
              Scr_AddFloat(scrContext, *(float *)&ClosestPointHitDistance);
              Scr_AddArrayStringIndexed(scrContext, scr_const.distance);
              Scr_AddInt(scrContext, ClosestPointHitHitSurfFlags);
              Scr_AddArrayStringIndexed(scrContext, scr_const.surfaceflags);
              Scr_AddArray(scrContext);
              ++v39;
            }
            while ( v39 < v40 );
            v16 = failureIndex;
          }
        }
      }
      else
      {
        Scr_MakeArray(scrContext);
        if ( HavokPhysics_CollisionQueryResult::HasHit(v18) )
        {
          v47 = HavokPhysics_CollisionQueryResult::GetClosestPointHitBodyId(v18, 0);
          v48 = Physics_GetRef(PHYSICS_WORLD_ID_FIRST, v47);
          v49 = Physics_GetEntityNum(v48);
          HavokPhysics_CollisionQueryResult::GetClosestPointHitHitPosition(v18, 0, &v69);
          HavokPhysics_CollisionQueryResult::GetClosestPointHitSeparatingNormal(v18, 0, &normal);
          v50 = HavokPhysics_CollisionQueryResult::GetClosestPointHitDistance(v18, 0);
          v51 = HavokPhysics_CollisionQueryResult::GetClosestPointHitHitSurfFlags(v18, 0);
          Scr_MakeArray(scrContext);
          if ( v49 == 2046 )
          {
            Scr_AddConstString(scrContext, scr_const.hittype_world);
            v52 = scr_const.hittype;
          }
          else
          {
            Scr_AddConstString(scrContext, scr_const.hittype_entity);
            Scr_AddArrayStringIndexed(scrContext, scr_const.hittype);
            Scr_AddEntityNum(scrContext, v49, ENTITY_CLASS_GENTITY);
            v52 = scr_const.entity;
          }
          Scr_AddArrayStringIndexed(scrContext, v52);
          Scr_AddVector(scrContext, v69.v);
          Scr_AddArrayStringIndexed(scrContext, scr_const.position);
          Scr_AddVector(scrContext, normal.v);
          Scr_AddArrayStringIndexed(scrContext, scr_const.normal);
          Scr_AddFloat(scrContext, *(float *)&v50);
          Scr_AddArrayStringIndexed(scrContext, scr_const.distance);
          Scr_AddInt(scrContext, v51);
          Scr_AddArrayStringIndexed(scrContext, scr_const.surfaceflags);
          Scr_AddArray(scrContext);
        }
      }
    }
    else
    {
      v53 = HavokPhysics_CollisionQueryResult::HasHit(v18);
      Scr_AddBool(scrContext, v53);
    }
    Scr_AddArray(scrContext);
    Physics_FreeCollisionQueryResult(v18);
  }
  Physics_FreeCollisionQueryResult(CollisionQueryResult);
  v54 = hkMemHeapAllocator();
  v60.m_ignoreBodies.m_size = 0;
  if ( v60.m_ignoreBodies.m_capacityAndFlags >= 0 )
    hkMemoryAllocator::bufFree2(v54, v60.m_ignoreBodies.m_data, 4, v60.m_ignoreBodies.m_capacityAndFlags & 0x3FFFFFFF);
  v60.m_ignoreBodies.m_data = NULL;
  v60.m_ignoreBodies.m_capacityAndFlags = 0x80000000;
  v55 = hkMemHeapAllocator();
  v60.m_ignoreEntities.m_size = 0;
  if ( v60.m_ignoreEntities.m_capacityAndFlags >= 0 )
    hkMemoryAllocator::bufFree2(v55, v60.m_ignoreEntities.m_data, 8, v60.m_ignoreEntities.m_capacityAndFlags & 0x3FFFFFFF);
  v60.m_ignoreEntities.m_data = NULL;
  v60.m_ignoreEntities.m_capacityAndFlags = 0x80000000;
  if ( v16 )
    hkMonitorStream::timerEnd(v16, "Et");
}

/*
==============
PhysicsScript_Charactercast
==============
*/
void PhysicsScript_Charactercast(scrContext_t *scrContext)
{
  gentity_s *Entity; 
  float v3; 
  float v4; 
  double Float; 
  float v6; 
  int entnum; 
  unsigned int ArrayObject; 
  unsigned int ArraySize; 
  const char *v10; 
  const char *NameForType; 
  const char *v12; 
  scr_string_t ConstString; 
  Physics_CollisionQueryCollectionType v14; 
  Physics_CollisionQueryCollectionType v15; 
  scr_string_t v16; 
  hkMonitorStream *v17; 
  hkMonitorStream *v18; 
  HavokPhysics_CollisionQueryResult *CollisionQueryResult; 
  HavokPhysics_CollisionQueryResult *v20; 
  __int64 i; 
  int v22; 
  __int32 v23; 
  int NumHits; 
  int v25; 
  int v26; 
  unsigned int ShapecastHitBodyId; 
  int Ref; 
  int EntityNum; 
  double ShapecastHitFraction; 
  scr_string_t hittype; 
  unsigned int v32; 
  int v33; 
  int v34; 
  double v35; 
  int ShapecastHitHitSurfFlags; 
  scr_string_t v37; 
  bool HasHit; 
  __int32 v39; 
  int v40; 
  int v41; 
  int v42; 
  unsigned int ClosestPointHitBodyId; 
  int v44; 
  int v45; 
  double ClosestPointHitDistance; 
  int ClosestPointHitHitSurfFlags; 
  scr_string_t v48; 
  unsigned int v49; 
  int v50; 
  int v51; 
  double v52; 
  int v53; 
  scr_string_t v54; 
  bool v55; 
  hkMemoryAllocator *v56; 
  hkMemoryAllocator *v57; 
  VariableType failureType[4]; 
  int value; 
  unsigned int count; 
  HavokPhysics_IgnoreBodies v61; 
  Physics_ShapecastExtendedData extendedData; 
  __int64 v63; 
  hkMonitorStream *v64; 
  vec3_t shape; 
  vec3_t normal; 
  vec3_t center; 
  vec3_t vectorValue; 
  vec3_t end; 
  vec3_t v70; 
  vec3_t pos; 
  vec3_t v72; 
  vec3_t angles; 
  vec4_t quat; 
  unsigned int buffer[128]; 
  char optionalInplaceBuffer[432]; 

  v63 = -2i64;
  if ( Scr_GetType(scrContext, 0) != VAR_VECTOR )
    Scr_Error(COM_ERR_5008, scrContext, "PhysicsScript_Charactercast: Parameter 0 start must be the start vector - see usage");
  Scr_GetVector(scrContext, 0, &vectorValue);
  if ( Scr_GetType(scrContext, 1u) != VAR_VECTOR )
    Scr_Error(COM_ERR_5009, scrContext, "PhysicsScript_Charactercast: Parameter 1 end must be the end vector - see usage");
  Scr_GetVector(scrContext, 1u, &end);
  if ( Scr_GetPointerType(scrContext, 2u) != VAR_ENTITY )
    Scr_Error(COM_ERR_5010, scrContext, "PhysicsScript_Charactercast: Parameter 2 character must be an entity - see usage");
  Entity = GScr_GetEntity(2u);
  if ( !Entity )
    Scr_Error(COM_ERR_5011, scrContext, "PhysicsScript_Charactercast: Parameter 2 character must be a valid entity - see usage");
  v3 = 0.0;
  v4 = 0.0;
  center.v[0] = 0.0;
  center.v[1] = 0.0;
  center.v[2] = 0.0;
  if ( Entity->client )
  {
    v3 = FLOAT_35_0;
    v4 = FLOAT_15_0;
LABEL_14:
    center.v[2] = v3;
    goto LABEL_15;
  }
  if ( ((Entity->s.eType - 17) & 0xFFFD) == 0 )
  {
    v3 = Entity->r.box.halfSize.v[2];
    v4 = Entity->r.box.halfSize.v[0];
    goto LABEL_14;
  }
  Scr_Error(COM_ERR_5012, scrContext, "PhysicsScript_Charactercast: Parameter 2 character must be a player or ai entity - see usage");
LABEL_15:
  if ( Scr_GetType(scrContext, 3u) != VAR_FLOAT && Scr_GetType(scrContext, 3u) != VAR_INTEGER )
    Scr_Error(COM_ERR_5013, scrContext, "PhysicsScript_Charactercast: Parameter 3 ground clearance must be the clearance distance - see usage");
  Float = Scr_GetFloat(scrContext, 3u);
  center.v[2] = (float)(*(float *)&Float * 0.5) + center.v[2];
  v6 = v3 - (float)(*(float *)&Float * 0.5);
  if ( v6 < v4 )
    Scr_Error(COM_ERR_5014, scrContext, "PhysicsScript_Charactercast: Parameter 3 ground clearance is too high - the capsule has collapsed");
  if ( Scr_GetType(scrContext, 4u) != VAR_VECTOR )
    Scr_Error(COM_ERR_5015, scrContext, "PhysicsScript_Charactercast: Parameter 4 angles must be the angles vector - see usage");
  Scr_GetVector(scrContext, 4u, &angles);
  AnglesToQuat(&angles, &quat);
  if ( Scr_GetType(scrContext, 5u) != VAR_INTEGER )
    Scr_Error(COM_ERR_5016, scrContext, "PhysicsScript_Charactercast: Parameter 5 contents must be the contents - see usage");
  value = Scr_GetInt(scrContext, 5u);
  if ( !value )
    Scr_Error(COM_ERR_5017, scrContext, "PhysicsScript_Charactercast: Parameter 5 contents must be non 0");
  failureType[0] = VAR_UNDEFINED;
  entnum = 0;
  if ( Scr_GetType(scrContext, 6u) )
  {
    if ( Scr_GetPointerType(scrContext, 6u) == VAR_ENTITY )
    {
      count = 1;
      entnum = Scr_GetEntityRef(scrContext, 6u).entnum;
      failureType[0] = VAR_POINTER;
    }
    else
    {
      if ( Scr_GetPointerType(scrContext, 6u) != VAR_ARRAY )
        Scr_Error(COM_ERR_5018, scrContext, "PhysicsScript_Charactercast: Parameter 6 ignore array is not invalid, an entity or an array");
      ArrayObject = BGScr_Main_GetArrayObject(scrContext, 6u);
      ArraySize = GetArraySize(scrContext, ArrayObject);
      count = ArraySize;
      if ( ArraySize > 0x80 )
      {
        v10 = j_va("PhysicsScript_Charactercast: ignore array is too large (%d > %d)", ArraySize, 128i64);
        Scr_ParamError(COM_ERR_5019, scrContext, 0, v10);
      }
      if ( !Scr_GetEntityArray(scrContext, ArrayObject, 0x80u, buffer, &count, (unsigned int *)&normal, &failureType[1]) )
      {
        NameForType = Scr_GetNameForType(failureType[1]);
        v12 = j_va("PhysicsScript_Charactercast: element %i of ignore array: type %s is not an entity", normal.v[0], NameForType);
        Scr_ParamError(COM_ERR_5020, scrContext, 0, v12);
      }
    }
  }
  else
  {
    count = 0;
  }
  if ( Scr_GetType(scrContext, 7u) != VAR_STRING )
    Scr_Error(COM_ERR_5021, scrContext, "PhysicsScript_Charactercast: Parameter 7 collectionType must be the collection type - see usage");
  ConstString = Scr_GetConstString(scrContext, 7u);
  v14 = PHYSICS_COLLISIONQUERY_COLLECTION_TYPE_UNKNOWN;
  if ( ConstString == scr_const.physicsquery_any )
  {
    v15 = PHYSICS_COLLISIONQUERY_COLLECTION_TYPE_ANY;
  }
  else if ( ConstString == scr_const.physicsquery_closest )
  {
    v15 = PHYSICS_COLLISIONQUERY_COLLECTION_TYPE_CLOSEST;
  }
  else
  {
    v15 = PHYSICS_COLLISIONQUERY_COLLECTION_TYPE_UNKNOWN;
    if ( ConstString == scr_const.physicsquery_all )
      v15 = PHYSICS_COLLISIONQUERY_COLLECTION_TYPE_ALL;
  }
  if ( Scr_GetNumParam(scrContext) >= 9 )
  {
    if ( Scr_GetType(scrContext, 8u) != VAR_STRING )
      Scr_Error(COM_ERR_5023, scrContext, "PhysicsScript_Charactercast: Parameter 8 startCollectionType must be the startCollectionType - see usage");
    v16 = Scr_GetConstString(scrContext, 8u);
    if ( v16 == scr_const.physicsquery_any )
    {
      v14 = PHYSICS_COLLISIONQUERY_COLLECTION_TYPE_ANY;
    }
    else if ( v16 == scr_const.physicsquery_closest )
    {
      v14 = PHYSICS_COLLISIONQUERY_COLLECTION_TYPE_CLOSEST;
    }
    else if ( v16 == scr_const.physicsquery_all )
    {
      v14 = PHYSICS_COLLISIONQUERY_COLLECTION_TYPE_ALL;
    }
  }
  v17 = (hkMonitorStream *)TlsGetValue(hkMonitorStream__m_instance.m_slotID);
  v18 = v17;
  *(_QWORD *)v72.v = v17;
  if ( v17 )
    hkMonitorStream::timerBegin(v17, "TtPhysicsScript_Charactercast");
  v64 = v18;
  CollisionQueryResult = Physics_AllocateCollisionQueryResult(PHYSICS_WORLD_ID_FIRST, v15);
  if ( !CollisionQueryResult && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsscript.cpp", 3708, ASSERT_TYPE_ASSERT, "(result)", (const char *)&queryFormat, "result") )
    __debugbreak();
  if ( v14 == PHYSICS_COLLISIONQUERY_COLLECTION_TYPE_UNKNOWN )
    v20 = NULL;
  else
    v20 = Physics_AllocateCollisionQueryResult(PHYSICS_WORLD_ID_FIRST, v14);
  *(_QWORD *)pos.v = Physics_CreateShapeCapsuleUpAxis(PHYSICS_WORLD_ID_FIRST, &center, v6 - v4, v4, optionalInplaceBuffer, 432, Temporary);
  *(_QWORD *)shape.v = Physics_CreateShapeCylinder(&center, v6, v4, 32, 1);
  *(_QWORD *)normal.v = Physics_CreateShapeCylinder(&center, v6 + 0.125, v4 + 0.125, 32, 1);
  if ( !*(_QWORD *)pos.v && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsscript.cpp", 3715, ASSERT_TYPE_ASSERT, "(nonBrushShape)", (const char *)&queryFormat, "nonBrushShape") )
    __debugbreak();
  if ( !*(_QWORD *)shape.v && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsscript.cpp", 3716, ASSERT_TYPE_ASSERT, "(shape)", (const char *)&queryFormat, "shape") )
    __debugbreak();
  if ( !*(_QWORD *)normal.v && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsscript.cpp", 3717, ASSERT_TYPE_ASSERT, "(paddedShape)", (const char *)&queryFormat, "paddedShape") )
    __debugbreak();
  HavokPhysics_IgnoreBodies::HavokPhysics_IgnoreBodies(&v61, count, 0);
  if ( failureType[0] )
  {
    HavokPhysics_IgnoreBodies::SetIgnoreEntity(&v61, 0, entnum, 1, 0, 0, 0, 0);
  }
  else
  {
    for ( i = 0i64; (unsigned int)i < count; i = (unsigned int)(i + 1) )
    {
      v22 = Scr_GetEntityIdRef(scrContext, buffer[i]).entnum;
      HavokPhysics_IgnoreBodies::SetIgnoreEntity(&v61, i, v22, 1, 0, 0, 0, 0);
    }
  }
  extendedData.startTolerance = 0.0;
  extendedData.accuracy = FLOAT_0_016000001;
  extendedData.phaseSelection = All;
  extendedData.permitOutwardTrace = 0;
  extendedData.contents = value;
  extendedData.ignoreBodies = &v61;
  extendedData.simplifyStart = 1;
  extendedData.collisionBuffer = FLOAT_0_125;
  extendedData.nonBrushShape = *(hknpShape **)pos.v;
  extendedData.secondPassShape = *(hknpShape **)normal.v;
  Physics_Shapecast(PHYSICS_WORLD_ID_FIRST, *(hknpShape **)shape.v, &vectorValue, &end, &quat, &extendedData, CollisionQueryResult, v20);
  Physics_ReleaseShape(PHYSICS_WORLD_ID_FIRST, *(hknpShape **)normal.v, 0);
  Physics_ReleaseShape(PHYSICS_WORLD_ID_FIRST, *(hknpShape **)shape.v, 0);
  if ( v20 )
    Scr_MakeArray(scrContext);
  if ( v15 )
  {
    v23 = v15 - 1;
    if ( v23 )
    {
      if ( v23 == 1 )
      {
        HavokPhysics_CollisionQueryResult::SortResults(CollisionQueryResult);
        NumHits = HavokPhysics_CollisionQueryResult::GetNumHits(CollisionQueryResult);
        Scr_MakeArray(scrContext);
        v25 = 0;
        if ( NumHits > 0 )
        {
          v26 = NumHits;
          do
          {
            ShapecastHitBodyId = HavokPhysics_CollisionQueryResult::GetShapecastHitBodyId(CollisionQueryResult, v25);
            Ref = Physics_GetRef(PHYSICS_WORLD_ID_FIRST, ShapecastHitBodyId);
            EntityNum = Physics_GetEntityNum(Ref);
            HavokPhysics_CollisionQueryResult::GetShapecastHitContactPosition(CollisionQueryResult, v25, &pos);
            HavokPhysics_CollisionQueryResult::GetShapecastHitSurfaceNormal(CollisionQueryResult, v25, &normal);
            HavokPhysics_CollisionQueryResult::GetShapecastHitHitContactNormal(CollisionQueryResult, v25, &v70);
            ShapecastHitFraction = HavokPhysics_CollisionQueryResult::GetShapecastHitFraction(CollisionQueryResult, v25);
            value = HavokPhysics_CollisionQueryResult::GetShapecastHitHitSurfFlags(CollisionQueryResult, v25);
            shape.v[0] = (float)((float)(end.v[0] - vectorValue.v[0]) * *(float *)&ShapecastHitFraction) + vectorValue.v[0];
            shape.v[1] = (float)((float)(end.v[1] - vectorValue.v[1]) * *(float *)&ShapecastHitFraction) + vectorValue.v[1];
            shape.v[2] = (float)((float)(end.v[2] - vectorValue.v[2]) * *(float *)&ShapecastHitFraction) + vectorValue.v[2];
            Scr_MakeArray(scrContext);
            if ( EntityNum == 2046 )
            {
              Scr_AddConstString(scrContext, scr_const.hittype_world);
              hittype = scr_const.hittype;
            }
            else
            {
              Scr_AddConstString(scrContext, scr_const.hittype_entity);
              Scr_AddArrayStringIndexed(scrContext, scr_const.hittype);
              Scr_AddEntityNum(scrContext, EntityNum, ENTITY_CLASS_GENTITY);
              hittype = scr_const.entity;
            }
            Scr_AddArrayStringIndexed(scrContext, hittype);
            Scr_AddVector(scrContext, pos.v);
            Scr_AddArrayStringIndexed(scrContext, scr_const.position);
            Scr_AddVector(scrContext, shape.v);
            Scr_AddArrayStringIndexed(scrContext, scr_const.shape_position);
            Scr_AddVector(scrContext, normal.v);
            Scr_AddArrayStringIndexed(scrContext, scr_const.normal);
            Scr_AddVector(scrContext, v70.v);
            Scr_AddArrayStringIndexed(scrContext, scr_const.contact_normal);
            Scr_AddFloat(scrContext, *(float *)&ShapecastHitFraction);
            Scr_AddArrayStringIndexed(scrContext, scr_const.fraction);
            Scr_AddInt(scrContext, value);
            Scr_AddArrayStringIndexed(scrContext, scr_const.surfaceflags);
            Scr_AddArray(scrContext);
            ++v25;
          }
          while ( v25 < v26 );
          v18 = *(hkMonitorStream **)v72.v;
        }
      }
    }
    else
    {
      Scr_MakeArray(scrContext);
      if ( HavokPhysics_CollisionQueryResult::HasHit(CollisionQueryResult) )
      {
        v32 = HavokPhysics_CollisionQueryResult::GetShapecastHitBodyId(CollisionQueryResult, 0);
        v33 = Physics_GetRef(PHYSICS_WORLD_ID_FIRST, v32);
        v34 = Physics_GetEntityNum(v33);
        HavokPhysics_CollisionQueryResult::GetShapecastHitContactPosition(CollisionQueryResult, 0, &v70);
        HavokPhysics_CollisionQueryResult::GetShapecastHitSurfaceNormal(CollisionQueryResult, 0, &pos);
        HavokPhysics_CollisionQueryResult::GetShapecastHitHitContactNormal(CollisionQueryResult, 0, &normal);
        v35 = HavokPhysics_CollisionQueryResult::GetShapecastHitFraction(CollisionQueryResult, 0);
        ShapecastHitHitSurfFlags = HavokPhysics_CollisionQueryResult::GetShapecastHitHitSurfFlags(CollisionQueryResult, 0);
        shape.v[0] = (float)((float)(end.v[0] - vectorValue.v[0]) * *(float *)&v35) + vectorValue.v[0];
        shape.v[1] = (float)((float)(end.v[1] - vectorValue.v[1]) * *(float *)&v35) + vectorValue.v[1];
        shape.v[2] = (float)((float)(end.v[2] - vectorValue.v[2]) * *(float *)&v35) + vectorValue.v[2];
        Scr_MakeArray(scrContext);
        if ( v34 == 2046 )
        {
          Scr_AddConstString(scrContext, scr_const.hittype_world);
          v37 = scr_const.hittype;
        }
        else
        {
          Scr_AddConstString(scrContext, scr_const.hittype_entity);
          Scr_AddArrayStringIndexed(scrContext, scr_const.hittype);
          Scr_AddEntityNum(scrContext, v34, ENTITY_CLASS_GENTITY);
          v37 = scr_const.entity;
        }
        Scr_AddArrayStringIndexed(scrContext, v37);
        Scr_AddVector(scrContext, v70.v);
        Scr_AddArrayStringIndexed(scrContext, scr_const.position);
        Scr_AddVector(scrContext, shape.v);
        Scr_AddArrayStringIndexed(scrContext, scr_const.shape_position);
        Scr_AddVector(scrContext, pos.v);
        Scr_AddArrayStringIndexed(scrContext, scr_const.normal);
        Scr_AddVector(scrContext, normal.v);
        Scr_AddArrayStringIndexed(scrContext, scr_const.contact_normal);
        Scr_AddFloat(scrContext, *(float *)&v35);
        Scr_AddArrayStringIndexed(scrContext, scr_const.fraction);
        Scr_AddInt(scrContext, ShapecastHitHitSurfFlags);
        Scr_AddArrayStringIndexed(scrContext, scr_const.surfaceflags);
        Scr_AddArray(scrContext);
      }
    }
  }
  else
  {
    HasHit = HavokPhysics_CollisionQueryResult::HasHit(CollisionQueryResult);
    Scr_AddBool(scrContext, HasHit);
  }
  if ( v20 )
  {
    Scr_AddArray(scrContext);
    if ( v14 )
    {
      v39 = v14 - 1;
      if ( v39 )
      {
        if ( v39 == 1 )
        {
          HavokPhysics_CollisionQueryResult::SortResults(v20);
          v40 = HavokPhysics_CollisionQueryResult::GetNumHits(v20);
          Scr_MakeArray(scrContext);
          v41 = 0;
          if ( v40 > 0 )
          {
            v42 = v40;
            do
            {
              ClosestPointHitBodyId = HavokPhysics_CollisionQueryResult::GetClosestPointHitBodyId(v20, v41);
              v44 = Physics_GetRef(PHYSICS_WORLD_ID_FIRST, ClosestPointHitBodyId);
              v45 = Physics_GetEntityNum(v44);
              HavokPhysics_CollisionQueryResult::GetClosestPointHitHitPosition(v20, v41, &v70);
              HavokPhysics_CollisionQueryResult::GetClosestPointHitSeparatingNormal(v20, v41, &shape);
              ClosestPointHitDistance = HavokPhysics_CollisionQueryResult::GetClosestPointHitDistance(v20, v41);
              ClosestPointHitHitSurfFlags = HavokPhysics_CollisionQueryResult::GetClosestPointHitHitSurfFlags(v20, v41);
              Scr_MakeArray(scrContext);
              if ( v45 == 2046 )
              {
                Scr_AddConstString(scrContext, scr_const.hittype_world);
                v48 = scr_const.hittype;
              }
              else
              {
                Scr_AddConstString(scrContext, scr_const.hittype_entity);
                Scr_AddArrayStringIndexed(scrContext, scr_const.hittype);
                Scr_AddEntityNum(scrContext, v45, ENTITY_CLASS_GENTITY);
                v48 = scr_const.entity;
              }
              Scr_AddArrayStringIndexed(scrContext, v48);
              Scr_AddVector(scrContext, v70.v);
              Scr_AddArrayStringIndexed(scrContext, scr_const.position);
              Scr_AddVector(scrContext, shape.v);
              Scr_AddArrayStringIndexed(scrContext, scr_const.normal);
              Scr_AddFloat(scrContext, *(float *)&ClosestPointHitDistance);
              Scr_AddArrayStringIndexed(scrContext, scr_const.distance);
              Scr_AddInt(scrContext, ClosestPointHitHitSurfFlags);
              Scr_AddArrayStringIndexed(scrContext, scr_const.surfaceflags);
              Scr_AddArray(scrContext);
              ++v41;
            }
            while ( v41 < v42 );
            v18 = *(hkMonitorStream **)v72.v;
          }
        }
      }
      else
      {
        Scr_MakeArray(scrContext);
        if ( HavokPhysics_CollisionQueryResult::HasHit(v20) )
        {
          v49 = HavokPhysics_CollisionQueryResult::GetClosestPointHitBodyId(v20, 0);
          v50 = Physics_GetRef(PHYSICS_WORLD_ID_FIRST, v49);
          v51 = Physics_GetEntityNum(v50);
          HavokPhysics_CollisionQueryResult::GetClosestPointHitHitPosition(v20, 0, &v70);
          HavokPhysics_CollisionQueryResult::GetClosestPointHitSeparatingNormal(v20, 0, &v72);
          v52 = HavokPhysics_CollisionQueryResult::GetClosestPointHitDistance(v20, 0);
          v53 = HavokPhysics_CollisionQueryResult::GetClosestPointHitHitSurfFlags(v20, 0);
          Scr_MakeArray(scrContext);
          if ( v51 == 2046 )
          {
            Scr_AddConstString(scrContext, scr_const.hittype_world);
            v54 = scr_const.hittype;
          }
          else
          {
            Scr_AddConstString(scrContext, scr_const.hittype_entity);
            Scr_AddArrayStringIndexed(scrContext, scr_const.hittype);
            Scr_AddEntityNum(scrContext, v51, ENTITY_CLASS_GENTITY);
            v54 = scr_const.entity;
          }
          Scr_AddArrayStringIndexed(scrContext, v54);
          Scr_AddVector(scrContext, v70.v);
          Scr_AddArrayStringIndexed(scrContext, scr_const.position);
          Scr_AddVector(scrContext, v72.v);
          Scr_AddArrayStringIndexed(scrContext, scr_const.normal);
          Scr_AddFloat(scrContext, *(float *)&v52);
          Scr_AddArrayStringIndexed(scrContext, scr_const.distance);
          Scr_AddInt(scrContext, v53);
          Scr_AddArrayStringIndexed(scrContext, scr_const.surfaceflags);
          Scr_AddArray(scrContext);
        }
      }
    }
    else
    {
      v55 = HavokPhysics_CollisionQueryResult::HasHit(v20);
      Scr_AddBool(scrContext, v55);
    }
    Scr_AddArray(scrContext);
    Physics_FreeCollisionQueryResult(v20);
  }
  Physics_FreeCollisionQueryResult(CollisionQueryResult);
  v56 = hkMemHeapAllocator();
  v61.m_ignoreBodies.m_size = 0;
  if ( v61.m_ignoreBodies.m_capacityAndFlags >= 0 )
    hkMemoryAllocator::bufFree2(v56, v61.m_ignoreBodies.m_data, 4, v61.m_ignoreBodies.m_capacityAndFlags & 0x3FFFFFFF);
  v61.m_ignoreBodies.m_data = NULL;
  v61.m_ignoreBodies.m_capacityAndFlags = 0x80000000;
  v57 = hkMemHeapAllocator();
  v61.m_ignoreEntities.m_size = 0;
  if ( v61.m_ignoreEntities.m_capacityAndFlags >= 0 )
    hkMemoryAllocator::bufFree2(v57, v61.m_ignoreEntities.m_data, 8, v61.m_ignoreEntities.m_capacityAndFlags & 0x3FFFFFFF);
  v61.m_ignoreEntities.m_data = NULL;
  v61.m_ignoreEntities.m_capacityAndFlags = 0x80000000;
  if ( v18 )
    hkMonitorStream::timerEnd(v18, "Et");
}

/*
==============
PhysicsScript_Shapecast
==============
*/
void PhysicsScript_Shapecast(scrContext_t *scrContext)
{
  gentity_s *Entity; 
  unsigned int Instance; 
  unsigned int RigidBodyID; 
  int entnum; 
  unsigned int ArrayObject; 
  unsigned int ArraySize; 
  const char *v8; 
  const char *NameForType; 
  const char *v10; 
  scr_string_t ConstString; 
  Physics_CollisionQueryCollectionType v12; 
  Physics_CollisionQueryCollectionType v13; 
  scr_string_t v14; 
  hkMonitorStream *v15; 
  hkMonitorStream *v16; 
  HavokPhysics_CollisionQueryResult *CollisionQueryResult; 
  HavokPhysics_CollisionQueryResult *v18; 
  __int64 i; 
  int v20; 
  __int32 v21; 
  int NumHits; 
  int v23; 
  int v24; 
  unsigned int ShapecastHitBodyId; 
  int Ref; 
  int EntityNum; 
  double ShapecastHitFraction; 
  scr_string_t hittype; 
  unsigned int v30; 
  int v31; 
  int v32; 
  double v33; 
  int ShapecastHitHitSurfFlags; 
  scr_string_t v35; 
  bool HasHit; 
  __int32 v37; 
  int v38; 
  int v39; 
  int v40; 
  unsigned int ClosestPointHitBodyId; 
  int v42; 
  int v43; 
  double ClosestPointHitDistance; 
  int ClosestPointHitHitSurfFlags; 
  scr_string_t v46; 
  unsigned int v47; 
  int v48; 
  int v49; 
  double v50; 
  int v51; 
  scr_string_t v52; 
  bool v53; 
  hkMemoryAllocator *v54; 
  hkMemoryAllocator *v55; 
  VariableType failureType[4]; 
  int value; 
  unsigned int count[2]; 
  hkMonitorStream *failureIndex; 
  HavokPhysics_IgnoreBodies v60; 
  Physics_ShapecastExtendedData extendedData; 
  __int64 v62; 
  hkMonitorStream *v63; 
  hknpShape *shape; 
  float v65; 
  vec3_t vectorValue; 
  vec3_t end; 
  vec3_t normal; 
  vec3_t v69; 
  vec3_t pos; 
  vec3_t angles; 
  vec4_t quat; 
  unsigned int buffer[128]; 

  v62 = -2i64;
  if ( Scr_GetType(scrContext, 0) != VAR_VECTOR )
    Scr_Error(COM_ERR_5025, scrContext, "PhysicsScript_Shapecast: Parameter 0 start must be the start vector - see usage");
  Scr_GetVector(scrContext, 0, &vectorValue);
  if ( Scr_GetType(scrContext, 1u) != VAR_VECTOR )
    Scr_Error(COM_ERR_5026, scrContext, "PhysicsScript_Shapecast: Parameter 1 end must be the end vector - see usage");
  Scr_GetVector(scrContext, 1u, &end);
  if ( Scr_GetType(scrContext, 2u) != VAR_POINTER || Scr_GetPointerType(scrContext, 2u) != VAR_ENTITY )
    Scr_Error(COM_ERR_5027, scrContext, "PhysicsScript_Shapecast: Parameter 2 entity must be the entity - see usage");
  Entity = GScr_GetEntity(2u);
  if ( !Entity )
    Scr_Error(COM_ERR_5028, scrContext, "PhysicsScript_Shapecast: Parameter 2 entity could not be found");
  Instance = G_PhysicsObject_GetInstance(PHYSICS_WORLD_ID_FIRST, Entity->s.number);
  if ( Instance == -1 )
  {
    Scr_Error(COM_ERR_5029, scrContext, "PhysicsScript_Shapecast: Parameter 2 entity didn't have physics");
    Scr_Error(COM_ERR_5030, scrContext, "PhysicsScript_Shapecast: Parameter 2 entity didn't have physics");
  }
  if ( Physics_GetNumRigidBodys(PHYSICS_WORLD_ID_FIRST, Instance) != 1 )
    Scr_Error(COM_ERR_5031, scrContext, "PhysicsScript_Shapecast: Parameter 2 entity physics must have only 1 rigid body");
  RigidBodyID = Physics_GetRigidBodyID(PHYSICS_WORLD_ID_FIRST, Instance, 0);
  if ( (RigidBodyID & 0xFFFFFF) == 0xFFFFFF )
    Scr_Error(COM_ERR_5032, scrContext, "PhysicsScript_Shapecast: Parameter 2 entity physics rigid body is invalid");
  shape = Physics_GetShape(PHYSICS_WORLD_ID_FIRST, RigidBodyID);
  if ( !shape )
    Scr_Error(COM_ERR_5033, scrContext, "PhysicsScript_Shapecast: Parameter 2 entity physics rigid body has no shape");
  if ( Scr_GetType(scrContext, 3u) != VAR_VECTOR )
    Scr_Error(COM_ERR_5034, scrContext, "PhysicsScript_Capsulecast: Parameter 3 angles must be the angles vector - see usage");
  Scr_GetVector(scrContext, 3u, &angles);
  AnglesToQuat(&angles, &quat);
  if ( Scr_GetType(scrContext, 4u) != VAR_INTEGER )
    Scr_Error(COM_ERR_5035, scrContext, "PhysicsScript_Shapecast: Parameter 4 contents must be the contents - see usage");
  value = Scr_GetInt(scrContext, 4u);
  if ( !value )
    Scr_Error(COM_ERR_5036, scrContext, "PhysicsScript_Shapecast: Parameter 4 contents must be non 0");
  failureType[0] = VAR_UNDEFINED;
  entnum = 0;
  if ( Scr_GetType(scrContext, 5u) )
  {
    if ( Scr_GetPointerType(scrContext, 5u) == VAR_ENTITY )
    {
      count[0] = 1;
      entnum = Scr_GetEntityRef(scrContext, 5u).entnum;
      failureType[0] = VAR_POINTER;
    }
    else
    {
      if ( Scr_GetPointerType(scrContext, 5u) != VAR_ARRAY )
        Scr_Error(COM_ERR_5037, scrContext, "PhysicsScript_Shapecast: Parameter 5 ignore array is not invalid, an entity or an array");
      ArrayObject = BGScr_Main_GetArrayObject(scrContext, 5u);
      ArraySize = GetArraySize(scrContext, ArrayObject);
      count[0] = ArraySize;
      if ( ArraySize > 0x80 )
      {
        v8 = j_va("PhysicsScript_Shapecast: ignore array is too large (%d > %d)", ArraySize, 128i64);
        Scr_ParamError(COM_ERR_5038, scrContext, 0, v8);
      }
      if ( !Scr_GetEntityArray(scrContext, ArrayObject, 0x80u, buffer, count, (unsigned int *)&failureIndex, &failureType[1]) )
      {
        NameForType = Scr_GetNameForType(failureType[1]);
        v10 = j_va("PhysicsScript_Shapecast: element %i of ignore array: type %s is not an entity", (unsigned int)failureIndex, NameForType);
        Scr_ParamError(COM_ERR_5039, scrContext, 0, v10);
      }
    }
  }
  else
  {
    count[0] = 0;
  }
  if ( Scr_GetType(scrContext, 6u) != VAR_STRING )
    Scr_Error(COM_ERR_5040, scrContext, "PhysicsScript_Shapecast: Parameter 6 collectionType must be the collection type - see usage");
  ConstString = Scr_GetConstString(scrContext, 6u);
  v12 = PHYSICS_COLLISIONQUERY_COLLECTION_TYPE_UNKNOWN;
  if ( ConstString == scr_const.physicsquery_any )
  {
    v13 = PHYSICS_COLLISIONQUERY_COLLECTION_TYPE_ANY;
  }
  else if ( ConstString == scr_const.physicsquery_closest )
  {
    v13 = PHYSICS_COLLISIONQUERY_COLLECTION_TYPE_CLOSEST;
  }
  else
  {
    v13 = PHYSICS_COLLISIONQUERY_COLLECTION_TYPE_UNKNOWN;
    if ( ConstString == scr_const.physicsquery_all )
      v13 = PHYSICS_COLLISIONQUERY_COLLECTION_TYPE_ALL;
  }
  if ( Scr_GetNumParam(scrContext) > 7 )
  {
    if ( Scr_GetType(scrContext, 7u) != VAR_STRING )
      Scr_Error(COM_ERR_5042, scrContext, "PhysicsScript_Shapecast: Parameter 6 startCollectionType must be the startCollectionType - see usage");
    v14 = Scr_GetConstString(scrContext, 7u);
    if ( v14 == scr_const.physicsquery_any )
    {
      v12 = PHYSICS_COLLISIONQUERY_COLLECTION_TYPE_ANY;
    }
    else if ( v14 == scr_const.physicsquery_closest )
    {
      v12 = PHYSICS_COLLISIONQUERY_COLLECTION_TYPE_CLOSEST;
    }
    else if ( v14 == scr_const.physicsquery_all )
    {
      v12 = PHYSICS_COLLISIONQUERY_COLLECTION_TYPE_ALL;
    }
  }
  v15 = (hkMonitorStream *)TlsGetValue(hkMonitorStream__m_instance.m_slotID);
  v16 = v15;
  failureIndex = v15;
  if ( v15 )
    hkMonitorStream::timerBegin(v15, "TtPhysicsScript_Shapecast");
  v63 = v16;
  CollisionQueryResult = Physics_AllocateCollisionQueryResult(PHYSICS_WORLD_ID_FIRST, v13);
  if ( !CollisionQueryResult && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsscript.cpp", 4157, ASSERT_TYPE_ASSERT, "(result)", (const char *)&queryFormat, "result") )
    __debugbreak();
  if ( v12 == PHYSICS_COLLISIONQUERY_COLLECTION_TYPE_UNKNOWN )
    v18 = NULL;
  else
    v18 = Physics_AllocateCollisionQueryResult(PHYSICS_WORLD_ID_FIRST, v12);
  HavokPhysics_IgnoreBodies::HavokPhysics_IgnoreBodies(&v60, count[0], 0);
  if ( failureType[0] )
  {
    HavokPhysics_IgnoreBodies::SetIgnoreEntity(&v60, 0, entnum, 1, 0, 0, 0, 0);
  }
  else
  {
    for ( i = 0i64; (unsigned int)i < count[0]; i = (unsigned int)(i + 1) )
    {
      v20 = Scr_GetEntityIdRef(scrContext, buffer[i]).entnum;
      HavokPhysics_IgnoreBodies::SetIgnoreEntity(&v60, i, v20, 1, 0, 0, 0, 0);
    }
  }
  extendedData.startTolerance = 0.0;
  extendedData.accuracy = FLOAT_0_016000001;
  extendedData.collisionBuffer = 0.0;
  memset(&extendedData.nonBrushShape, 0, 21);
  extendedData.contents = value;
  extendedData.ignoreBodies = &v60;
  extendedData.simplifyStart = 1;
  Physics_Shapecast(PHYSICS_WORLD_ID_FIRST, shape, &vectorValue, &end, &quat, &extendedData, CollisionQueryResult, v18);
  if ( v18 )
    Scr_MakeArray(scrContext);
  if ( v13 )
  {
    v21 = v13 - 1;
    if ( v21 )
    {
      if ( v21 == 1 )
      {
        HavokPhysics_CollisionQueryResult::SortResults(CollisionQueryResult);
        NumHits = HavokPhysics_CollisionQueryResult::GetNumHits(CollisionQueryResult);
        Scr_MakeArray(scrContext);
        v23 = 0;
        if ( NumHits > 0 )
        {
          v24 = NumHits;
          do
          {
            ShapecastHitBodyId = HavokPhysics_CollisionQueryResult::GetShapecastHitBodyId(CollisionQueryResult, v23);
            Ref = Physics_GetRef(PHYSICS_WORLD_ID_FIRST, ShapecastHitBodyId);
            EntityNum = Physics_GetEntityNum(Ref);
            HavokPhysics_CollisionQueryResult::GetShapecastHitContactPosition(CollisionQueryResult, v23, &pos);
            HavokPhysics_CollisionQueryResult::GetShapecastHitSurfaceNormal(CollisionQueryResult, v23, &normal);
            HavokPhysics_CollisionQueryResult::GetShapecastHitHitContactNormal(CollisionQueryResult, v23, &v69);
            ShapecastHitFraction = HavokPhysics_CollisionQueryResult::GetShapecastHitFraction(CollisionQueryResult, v23);
            value = HavokPhysics_CollisionQueryResult::GetShapecastHitHitSurfFlags(CollisionQueryResult, v23);
            *(float *)&shape = (float)((float)(end.v[0] - vectorValue.v[0]) * *(float *)&ShapecastHitFraction) + vectorValue.v[0];
            *((float *)&shape + 1) = (float)((float)(end.v[1] - vectorValue.v[1]) * *(float *)&ShapecastHitFraction) + vectorValue.v[1];
            v65 = (float)((float)(end.v[2] - vectorValue.v[2]) * *(float *)&ShapecastHitFraction) + vectorValue.v[2];
            Scr_MakeArray(scrContext);
            if ( EntityNum == 2046 )
            {
              Scr_AddConstString(scrContext, scr_const.hittype_world);
              hittype = scr_const.hittype;
            }
            else
            {
              Scr_AddConstString(scrContext, scr_const.hittype_entity);
              Scr_AddArrayStringIndexed(scrContext, scr_const.hittype);
              Scr_AddEntityNum(scrContext, EntityNum, ENTITY_CLASS_GENTITY);
              hittype = scr_const.entity;
            }
            Scr_AddArrayStringIndexed(scrContext, hittype);
            Scr_AddVector(scrContext, pos.v);
            Scr_AddArrayStringIndexed(scrContext, scr_const.position);
            Scr_AddVector(scrContext, (const float *)&shape);
            Scr_AddArrayStringIndexed(scrContext, scr_const.shape_position);
            Scr_AddVector(scrContext, normal.v);
            Scr_AddArrayStringIndexed(scrContext, scr_const.normal);
            Scr_AddVector(scrContext, v69.v);
            Scr_AddArrayStringIndexed(scrContext, scr_const.contact_normal);
            Scr_AddFloat(scrContext, *(float *)&ShapecastHitFraction);
            Scr_AddArrayStringIndexed(scrContext, scr_const.fraction);
            Scr_AddInt(scrContext, value);
            Scr_AddArrayStringIndexed(scrContext, scr_const.surfaceflags);
            Scr_AddArray(scrContext);
            ++v23;
          }
          while ( v23 < v24 );
          v16 = failureIndex;
        }
      }
    }
    else
    {
      Scr_MakeArray(scrContext);
      if ( HavokPhysics_CollisionQueryResult::HasHit(CollisionQueryResult) )
      {
        v30 = HavokPhysics_CollisionQueryResult::GetShapecastHitBodyId(CollisionQueryResult, 0);
        v31 = Physics_GetRef(PHYSICS_WORLD_ID_FIRST, v30);
        v32 = Physics_GetEntityNum(v31);
        HavokPhysics_CollisionQueryResult::GetShapecastHitContactPosition(CollisionQueryResult, 0, &v69);
        HavokPhysics_CollisionQueryResult::GetShapecastHitSurfaceNormal(CollisionQueryResult, 0, &normal);
        HavokPhysics_CollisionQueryResult::GetShapecastHitHitContactNormal(CollisionQueryResult, 0, &pos);
        v33 = HavokPhysics_CollisionQueryResult::GetShapecastHitFraction(CollisionQueryResult, 0);
        ShapecastHitHitSurfFlags = HavokPhysics_CollisionQueryResult::GetShapecastHitHitSurfFlags(CollisionQueryResult, 0);
        *(float *)&shape = (float)((float)(end.v[0] - vectorValue.v[0]) * *(float *)&v33) + vectorValue.v[0];
        *((float *)&shape + 1) = (float)((float)(end.v[1] - vectorValue.v[1]) * *(float *)&v33) + vectorValue.v[1];
        v65 = (float)((float)(end.v[2] - vectorValue.v[2]) * *(float *)&v33) + vectorValue.v[2];
        Scr_MakeArray(scrContext);
        if ( v32 == 2046 )
        {
          Scr_AddConstString(scrContext, scr_const.hittype_world);
          v35 = scr_const.hittype;
        }
        else
        {
          Scr_AddConstString(scrContext, scr_const.hittype_entity);
          Scr_AddArrayStringIndexed(scrContext, scr_const.hittype);
          Scr_AddEntityNum(scrContext, v32, ENTITY_CLASS_GENTITY);
          v35 = scr_const.entity;
        }
        Scr_AddArrayStringIndexed(scrContext, v35);
        Scr_AddVector(scrContext, v69.v);
        Scr_AddArrayStringIndexed(scrContext, scr_const.position);
        Scr_AddVector(scrContext, (const float *)&shape);
        Scr_AddArrayStringIndexed(scrContext, scr_const.shape_position);
        Scr_AddVector(scrContext, normal.v);
        Scr_AddArrayStringIndexed(scrContext, scr_const.normal);
        Scr_AddVector(scrContext, pos.v);
        Scr_AddArrayStringIndexed(scrContext, scr_const.contact_normal);
        Scr_AddFloat(scrContext, *(float *)&v33);
        Scr_AddArrayStringIndexed(scrContext, scr_const.fraction);
        Scr_AddInt(scrContext, ShapecastHitHitSurfFlags);
        Scr_AddArrayStringIndexed(scrContext, scr_const.surfaceflags);
        Scr_AddArray(scrContext);
      }
    }
  }
  else
  {
    HasHit = HavokPhysics_CollisionQueryResult::HasHit(CollisionQueryResult);
    Scr_AddBool(scrContext, HasHit);
  }
  if ( v18 )
  {
    Scr_AddArray(scrContext);
    if ( v12 )
    {
      v37 = v12 - 1;
      if ( v37 )
      {
        if ( v37 == 1 )
        {
          HavokPhysics_CollisionQueryResult::SortResults(v18);
          v38 = HavokPhysics_CollisionQueryResult::GetNumHits(v18);
          Scr_MakeArray(scrContext);
          v39 = 0;
          if ( v38 > 0 )
          {
            v40 = v38;
            do
            {
              ClosestPointHitBodyId = HavokPhysics_CollisionQueryResult::GetClosestPointHitBodyId(v18, v39);
              v42 = Physics_GetRef(PHYSICS_WORLD_ID_FIRST, ClosestPointHitBodyId);
              v43 = Physics_GetEntityNum(v42);
              HavokPhysics_CollisionQueryResult::GetClosestPointHitHitPosition(v18, v39, &v69);
              HavokPhysics_CollisionQueryResult::GetClosestPointHitSeparatingNormal(v18, v39, &normal);
              ClosestPointHitDistance = HavokPhysics_CollisionQueryResult::GetClosestPointHitDistance(v18, v39);
              ClosestPointHitHitSurfFlags = HavokPhysics_CollisionQueryResult::GetClosestPointHitHitSurfFlags(v18, v39);
              Scr_MakeArray(scrContext);
              if ( v43 == 2046 )
              {
                Scr_AddConstString(scrContext, scr_const.hittype_world);
                v46 = scr_const.hittype;
              }
              else
              {
                Scr_AddConstString(scrContext, scr_const.hittype_entity);
                Scr_AddArrayStringIndexed(scrContext, scr_const.hittype);
                Scr_AddEntityNum(scrContext, v43, ENTITY_CLASS_GENTITY);
                v46 = scr_const.entity;
              }
              Scr_AddArrayStringIndexed(scrContext, v46);
              Scr_AddVector(scrContext, v69.v);
              Scr_AddArrayStringIndexed(scrContext, scr_const.position);
              Scr_AddVector(scrContext, normal.v);
              Scr_AddArrayStringIndexed(scrContext, scr_const.normal);
              Scr_AddFloat(scrContext, *(float *)&ClosestPointHitDistance);
              Scr_AddArrayStringIndexed(scrContext, scr_const.distance);
              Scr_AddInt(scrContext, ClosestPointHitHitSurfFlags);
              Scr_AddArrayStringIndexed(scrContext, scr_const.surfaceflags);
              Scr_AddArray(scrContext);
              ++v39;
            }
            while ( v39 < v40 );
            v16 = failureIndex;
          }
        }
      }
      else
      {
        Scr_MakeArray(scrContext);
        if ( HavokPhysics_CollisionQueryResult::HasHit(v18) )
        {
          v47 = HavokPhysics_CollisionQueryResult::GetClosestPointHitBodyId(v18, 0);
          v48 = Physics_GetRef(PHYSICS_WORLD_ID_FIRST, v47);
          v49 = Physics_GetEntityNum(v48);
          HavokPhysics_CollisionQueryResult::GetClosestPointHitHitPosition(v18, 0, &v69);
          HavokPhysics_CollisionQueryResult::GetClosestPointHitSeparatingNormal(v18, 0, &normal);
          v50 = HavokPhysics_CollisionQueryResult::GetClosestPointHitDistance(v18, 0);
          v51 = HavokPhysics_CollisionQueryResult::GetClosestPointHitHitSurfFlags(v18, 0);
          Scr_MakeArray(scrContext);
          if ( v49 == 2046 )
          {
            Scr_AddConstString(scrContext, scr_const.hittype_world);
            v52 = scr_const.hittype;
          }
          else
          {
            Scr_AddConstString(scrContext, scr_const.hittype_entity);
            Scr_AddArrayStringIndexed(scrContext, scr_const.hittype);
            Scr_AddEntityNum(scrContext, v49, ENTITY_CLASS_GENTITY);
            v52 = scr_const.entity;
          }
          Scr_AddArrayStringIndexed(scrContext, v52);
          Scr_AddVector(scrContext, v69.v);
          Scr_AddArrayStringIndexed(scrContext, scr_const.position);
          Scr_AddVector(scrContext, normal.v);
          Scr_AddArrayStringIndexed(scrContext, scr_const.normal);
          Scr_AddFloat(scrContext, *(float *)&v50);
          Scr_AddArrayStringIndexed(scrContext, scr_const.distance);
          Scr_AddInt(scrContext, v51);
          Scr_AddArrayStringIndexed(scrContext, scr_const.surfaceflags);
          Scr_AddArray(scrContext);
        }
      }
    }
    else
    {
      v53 = HavokPhysics_CollisionQueryResult::HasHit(v18);
      Scr_AddBool(scrContext, v53);
    }
    Scr_AddArray(scrContext);
    Physics_FreeCollisionQueryResult(v18);
  }
  Physics_FreeCollisionQueryResult(CollisionQueryResult);
  v54 = hkMemHeapAllocator();
  v60.m_ignoreBodies.m_size = 0;
  if ( v60.m_ignoreBodies.m_capacityAndFlags >= 0 )
    hkMemoryAllocator::bufFree2(v54, v60.m_ignoreBodies.m_data, 4, v60.m_ignoreBodies.m_capacityAndFlags & 0x3FFFFFFF);
  v60.m_ignoreBodies.m_data = NULL;
  v60.m_ignoreBodies.m_capacityAndFlags = 0x80000000;
  v55 = hkMemHeapAllocator();
  v60.m_ignoreEntities.m_size = 0;
  if ( v60.m_ignoreEntities.m_capacityAndFlags >= 0 )
    hkMemoryAllocator::bufFree2(v55, v60.m_ignoreEntities.m_data, 8, v60.m_ignoreEntities.m_capacityAndFlags & 0x3FFFFFFF);
  v60.m_ignoreEntities.m_data = NULL;
  v60.m_ignoreEntities.m_capacityAndFlags = 0x80000000;
  if ( v16 )
    hkMonitorStream::timerEnd(v16, "Et");
}

/*
==============
PhysicsScript_QueryPoint
==============
*/
void PhysicsScript_QueryPoint(scrContext_t *scrContext)
{
  double Float; 
  int Int; 
  char v4; 
  int entnum; 
  unsigned int ArrayObject; 
  unsigned int ArraySize; 
  const char *v8; 
  const char *NameForType; 
  const char *v10; 
  scr_string_t ConstString; 
  Physics_CollisionQueryCollectionType v12; 
  hkMonitorStream *Value; 
  hkMonitorStream *v14; 
  HavokPhysics_CollisionQueryResult *CollisionQueryResult; 
  unsigned int i; 
  int v17; 
  __int32 v18; 
  int NumHits; 
  bool HasHit; 
  hkMemoryAllocator *v21; 
  hkMemoryAllocator *v22; 
  VariableType count[8]; 
  hkMonitorStream *failureIndex; 
  HavokPhysics_IgnoreBodies v25; 
  Physics_QueryPointExtendedData extendedData; 
  __int64 v27; 
  vec3_t vectorValue; 
  unsigned int buffer[128]; 

  v27 = -2i64;
  if ( Scr_GetType(scrContext, 0) != VAR_VECTOR )
    Scr_Error(COM_ERR_5044, scrContext, "Physics_QueryPoint: Parameter 0 position must be the position vector - see usage");
  Scr_GetVector(scrContext, 0, &vectorValue);
  if ( Scr_GetType(scrContext, 1u) != VAR_FLOAT && Scr_GetType(scrContext, 1u) != VAR_INTEGER )
    Scr_Error(COM_ERR_5045, scrContext, "Physics_QueryPoint: Parameter 1 distance must be the distance - see usage");
  Float = Scr_GetFloat(scrContext, 1u);
  if ( Scr_GetType(scrContext, 2u) != VAR_INTEGER )
    Scr_Error(COM_ERR_5046, scrContext, "Physics_QueryPoint: Parameter 2 contents must be the contents - see usage");
  Int = Scr_GetInt(scrContext, 2u);
  if ( !Int )
    Scr_Error(COM_ERR_5047, scrContext, "Physics_QueryPoint: Parameter 2 contents must be non 0");
  v4 = 0;
  entnum = 0;
  if ( Scr_GetType(scrContext, 3u) )
  {
    if ( Scr_GetPointerType(scrContext, 3u) == VAR_ENTITY )
    {
      *(_DWORD *)&count[4] = 1;
      entnum = Scr_GetEntityRef(scrContext, 3u).entnum;
      v4 = 1;
    }
    else
    {
      if ( Scr_GetPointerType(scrContext, 3u) != VAR_ARRAY )
        Scr_Error(COM_ERR_5048, scrContext, "Physics_QueryPoint: Parameter 3 ignore array is not invalid, an entity or an array");
      ArrayObject = BGScr_Main_GetArrayObject(scrContext, 3u);
      ArraySize = GetArraySize(scrContext, ArrayObject);
      *(_DWORD *)&count[4] = ArraySize;
      if ( ArraySize > 0x80 )
      {
        v8 = j_va("Physics_QueryPoint: ignore array is too large (%d > %d)", ArraySize, 128i64);
        Scr_ParamError(COM_ERR_5049, scrContext, 0, v8);
      }
      if ( !Scr_GetEntityArray(scrContext, ArrayObject, 0x80u, buffer, (unsigned int *)&count[4], (unsigned int *)&failureIndex, count) )
      {
        NameForType = Scr_GetNameForType(count[0]);
        v10 = j_va("Physics_QueryPoint: element %i of ignore array: type %s is not an entity", (unsigned int)failureIndex, NameForType);
        Scr_ParamError(COM_ERR_5050, scrContext, 0, v10);
      }
    }
  }
  else
  {
    *(_DWORD *)&count[4] = 0;
  }
  if ( Scr_GetType(scrContext, 4u) != VAR_STRING )
    Scr_Error(COM_ERR_5051, scrContext, "Physics_QueryPoint: Parameter 4 collectionType must be the collection type - see usage");
  ConstString = Scr_GetConstString(scrContext, 4u);
  if ( ConstString == scr_const.physicsquery_any )
  {
    v12 = PHYSICS_COLLISIONQUERY_COLLECTION_TYPE_ANY;
  }
  else if ( ConstString == scr_const.physicsquery_closest )
  {
    v12 = PHYSICS_COLLISIONQUERY_COLLECTION_TYPE_CLOSEST;
  }
  else
  {
    v12 = PHYSICS_COLLISIONQUERY_COLLECTION_TYPE_UNKNOWN;
    if ( ConstString == scr_const.physicsquery_all )
      v12 = PHYSICS_COLLISIONQUERY_COLLECTION_TYPE_ALL;
  }
  Value = (hkMonitorStream *)TlsGetValue(hkMonitorStream__m_instance.m_slotID);
  v14 = Value;
  if ( Value )
    hkMonitorStream::timerBegin(Value, "TtPhysics_QueryPoint");
  failureIndex = v14;
  CollisionQueryResult = Physics_AllocateCollisionQueryResult(PHYSICS_WORLD_ID_FIRST, v12);
  if ( !CollisionQueryResult && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsscript.cpp", 4603, ASSERT_TYPE_ASSERT, "(result)", (const char *)&queryFormat, "result") )
    __debugbreak();
  HavokPhysics_IgnoreBodies::HavokPhysics_IgnoreBodies(&v25, *(int *)&count[4], 0);
  if ( v4 )
  {
    HavokPhysics_IgnoreBodies::SetIgnoreEntity(&v25, 0, entnum, 1, 0, 0, 0, 0);
  }
  else
  {
    for ( i = 0; i < *(_DWORD *)&count[4]; ++i )
    {
      v17 = Scr_GetEntityIdRef(scrContext, buffer[i]).entnum;
      HavokPhysics_IgnoreBodies::SetIgnoreEntity(&v25, i, v17, 1, 0, 0, 0, 0);
    }
  }
  extendedData.characterProxyType = PHYSICS_CHARACTERPROXY_TYPE_COLLISION;
  extendedData.collisionBuffer = 0.0;
  extendedData.phaseSelection = All;
  extendedData.contents = Int;
  extendedData.simplify = 1;
  extendedData.ignoreBodies = &v25;
  Physics_QueryPoint(PHYSICS_WORLD_ID_FIRST, &vectorValue, *(float *)&Float, &extendedData, CollisionQueryResult);
  if ( v12 )
  {
    v18 = v12 - 1;
    if ( v18 )
    {
      if ( v18 == 1 )
      {
        HavokPhysics_CollisionQueryResult::SortResults(CollisionQueryResult);
        NumHits = HavokPhysics_CollisionQueryResult::GetNumHits(CollisionQueryResult);
        Scr_MakeArray(scrContext);
        if ( NumHits > 0 )
          PhysicsScript_AddQueryPointResults(scrContext, CollisionQueryResult, NumHits);
      }
    }
    else
    {
      Scr_MakeArray(scrContext);
      if ( HavokPhysics_CollisionQueryResult::HasHit(CollisionQueryResult) )
        PhysicsScript_AddQueryPointResults(scrContext, CollisionQueryResult, 1);
    }
  }
  else
  {
    HasHit = HavokPhysics_CollisionQueryResult::HasHit(CollisionQueryResult);
    Scr_AddBool(scrContext, HasHit);
  }
  Physics_FreeCollisionQueryResult(CollisionQueryResult);
  v21 = hkMemHeapAllocator();
  v25.m_ignoreBodies.m_size = 0;
  if ( v25.m_ignoreBodies.m_capacityAndFlags >= 0 )
    hkMemoryAllocator::bufFree2(v21, v25.m_ignoreBodies.m_data, 4, v25.m_ignoreBodies.m_capacityAndFlags & 0x3FFFFFFF);
  v25.m_ignoreBodies.m_data = NULL;
  v25.m_ignoreBodies.m_capacityAndFlags = 0x80000000;
  v22 = hkMemHeapAllocator();
  v25.m_ignoreEntities.m_size = 0;
  if ( v25.m_ignoreEntities.m_capacityAndFlags >= 0 )
    hkMemoryAllocator::bufFree2(v22, v25.m_ignoreEntities.m_data, 8, v25.m_ignoreEntities.m_capacityAndFlags & 0x3FFFFFFF);
  v25.m_ignoreEntities.m_data = NULL;
  v25.m_ignoreEntities.m_capacityAndFlags = 0x80000000;
  if ( v14 )
    hkMonitorStream::timerEnd(v14, "Et");
}

/*
==============
PhysicsScript_GetClosestPointToSphere
==============
*/
void PhysicsScript_GetClosestPointToSphere(scrContext_t *scrContext)
{
  Physics_CollisionQueryCollectionType v2; 
  double Float; 
  float v4; 
  double v5; 
  char v6; 
  int entnum; 
  unsigned int ArrayObject; 
  unsigned int ArraySize; 
  const char *v10; 
  const char *NameForType; 
  const char *v12; 
  scr_string_t ConstString; 
  hkMonitorStream *Value; 
  hkMonitorStream *v15; 
  HavokPhysics_CollisionQueryResult *CollisionQueryResult; 
  hknpShape *ShapeSphere; 
  __int64 i; 
  int v19; 
  int v20; 
  __int32 v21; 
  int NumHits; 
  unsigned int ClosestPointHitBodyId; 
  int Ref; 
  int EntityNum; 
  double ClosestPointHitDistance; 
  int ClosestPointHitHitSurfFlags; 
  scr_string_t hittype; 
  unsigned int v29; 
  int v30; 
  int v31; 
  double v32; 
  int v33; 
  scr_string_t entity; 
  bool HasHit; 
  hkMemoryAllocator *v36; 
  hkMemoryAllocator *v37; 
  VariableType failureType[4]; 
  unsigned int count; 
  __int64 v40; 
  hkMonitorStream *failureIndex; 
  HavokPhysics_IgnoreBodies v42; 
  Physics_GetClosestPointsExtendedData extendedData; 
  __int64 v44; 
  vec3_t pos; 
  vec3_t normal; 
  vec3_t vectorValue; 
  unsigned int buffer[128]; 
  char optionalInplaceBuffer[432]; 

  v44 = -2i64;
  if ( Scr_GetType(scrContext, 0) != VAR_VECTOR )
    Scr_Error(COM_ERR_5053, scrContext, "Physics_GetClosestPointToSphere: Parameter 0 position must be the position vector - see usage");
  Scr_GetVector(scrContext, 0, &vectorValue);
  v2 = PHYSICS_COLLISIONQUERY_COLLECTION_TYPE_CLOSEST;
  if ( Scr_GetType(scrContext, 1u) != VAR_FLOAT && Scr_GetType(scrContext, 1u) != VAR_INTEGER )
    Scr_Error(COM_ERR_5054, scrContext, "Physics_GetClosestPointToSphere: Parameter 1 radius must be the radius - see usage");
  Float = Scr_GetFloat(scrContext, 1u);
  v4 = *(float *)&Float;
  if ( Scr_GetType(scrContext, 2u) != VAR_FLOAT && Scr_GetType(scrContext, 2u) != VAR_INTEGER )
    Scr_Error(COM_ERR_5055, scrContext, "Physics_GetClosestPointToSphere: Parameter 2 distance must be the distance - see usage");
  v5 = Scr_GetFloat(scrContext, 2u);
  if ( Scr_GetType(scrContext, 3u) != VAR_INTEGER )
    Scr_Error(COM_ERR_5056, scrContext, "Physics_GetClosestPointToSphere: Parameter 3 contents must be the contents - see usage");
  LODWORD(v40) = Scr_GetInt(scrContext, 3u);
  if ( !(_DWORD)v40 )
    Scr_Error(COM_ERR_5057, scrContext, "Physics_GetClosestPointToSphere: Parameter 3 contents must be non 0");
  v6 = 0;
  entnum = 0;
  if ( Scr_GetType(scrContext, 4u) )
  {
    if ( Scr_GetPointerType(scrContext, 4u) == VAR_ENTITY )
    {
      count = 1;
      entnum = Scr_GetEntityRef(scrContext, 4u).entnum;
      v6 = 1;
    }
    else
    {
      if ( Scr_GetPointerType(scrContext, 4u) != VAR_ARRAY )
        Scr_Error(COM_ERR_5058, scrContext, "Physics_GetClosestPointToSphere: Parameter 4 ignore array is not invalid, an entity or an array");
      ArrayObject = BGScr_Main_GetArrayObject(scrContext, 4u);
      ArraySize = GetArraySize(scrContext, ArrayObject);
      count = ArraySize;
      if ( ArraySize > 0x80 )
      {
        v10 = j_va("Physics_GetClosestPointToSphere: ignore array is too large (%d > %d)", ArraySize, 128i64);
        Scr_ParamError(COM_ERR_5059, scrContext, 0, v10);
      }
      if ( !Scr_GetEntityArray(scrContext, ArrayObject, 0x80u, buffer, &count, (unsigned int *)&failureIndex, failureType) )
      {
        NameForType = Scr_GetNameForType(failureType[0]);
        v12 = j_va("Physics_GetClosestPointToSphere: element %i of ignore array: type %s is not an entity", (unsigned int)failureIndex, NameForType);
        Scr_ParamError(COM_ERR_5060, scrContext, 0, v12);
      }
    }
  }
  else
  {
    count = 0;
  }
  if ( Scr_GetType(scrContext, 5u) != VAR_STRING )
    Scr_Error(COM_ERR_5061, scrContext, "Physics_GetClosestPointToSphere: Parameter 5 collectionType must be the collection type - see usage");
  ConstString = Scr_GetConstString(scrContext, 5u);
  if ( ConstString == scr_const.physicsquery_any )
  {
    v2 = PHYSICS_COLLISIONQUERY_COLLECTION_TYPE_ANY;
  }
  else if ( ConstString != scr_const.physicsquery_closest )
  {
    v2 = PHYSICS_COLLISIONQUERY_COLLECTION_TYPE_UNKNOWN;
    if ( ConstString == scr_const.physicsquery_all )
      v2 = PHYSICS_COLLISIONQUERY_COLLECTION_TYPE_ALL;
  }
  Value = (hkMonitorStream *)TlsGetValue(hkMonitorStream__m_instance.m_slotID);
  v15 = Value;
  if ( Value )
    hkMonitorStream::timerBegin(Value, "TtPhysics_GetClosestPointToSphere");
  failureIndex = v15;
  CollisionQueryResult = Physics_AllocateCollisionQueryResult(PHYSICS_WORLD_ID_FIRST, v2);
  if ( !CollisionQueryResult && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsscript.cpp", 4777, ASSERT_TYPE_ASSERT, "(result)", (const char *)&queryFormat, "result") )
    __debugbreak();
  ShapeSphere = Physics_CreateShapeSphere(&vec3_origin, v4, optionalInplaceBuffer, 432);
  HavokPhysics_IgnoreBodies::HavokPhysics_IgnoreBodies(&v42, count, 0);
  if ( v6 )
  {
    HavokPhysics_IgnoreBodies::SetIgnoreEntity(&v42, 0, entnum, 1, 0, 0, 0, 0);
  }
  else
  {
    for ( i = 0i64; (unsigned int)i < count; i = (unsigned int)(i + 1) )
    {
      v19 = Scr_GetEntityIdRef(scrContext, buffer[i]).entnum;
      HavokPhysics_IgnoreBodies::SetIgnoreEntity(&v42, i, v19, 1, 0, 0, 0, 0);
    }
  }
  extendedData.collisionBuffer = 0.0;
  v20 = 0;
  extendedData.nonBrushShape = NULL;
  extendedData.phaseSelection = All;
  extendedData.contents = v40;
  extendedData.simplify = 1;
  extendedData.ignoreBodies = &v42;
  Physics_GetClosestPoints(PHYSICS_WORLD_ID_FIRST, ShapeSphere, &vectorValue, &quat_identity, *(float *)&v5, &extendedData, CollisionQueryResult);
  if ( v2 )
  {
    v21 = v2 - 1;
    if ( v21 )
    {
      if ( v21 == 1 )
      {
        HavokPhysics_CollisionQueryResult::SortResults(CollisionQueryResult);
        NumHits = HavokPhysics_CollisionQueryResult::GetNumHits(CollisionQueryResult);
        Scr_MakeArray(scrContext);
        if ( NumHits > 0 )
        {
          do
          {
            ClosestPointHitBodyId = HavokPhysics_CollisionQueryResult::GetClosestPointHitBodyId(CollisionQueryResult, v20);
            Ref = Physics_GetRef(PHYSICS_WORLD_ID_FIRST, ClosestPointHitBodyId);
            EntityNum = Physics_GetEntityNum(Ref);
            HavokPhysics_CollisionQueryResult::GetClosestPointHitHitPosition(CollisionQueryResult, v20, &pos);
            HavokPhysics_CollisionQueryResult::GetClosestPointHitSeparatingNormal(CollisionQueryResult, v20, &normal);
            ClosestPointHitDistance = HavokPhysics_CollisionQueryResult::GetClosestPointHitDistance(CollisionQueryResult, v20);
            ClosestPointHitHitSurfFlags = HavokPhysics_CollisionQueryResult::GetClosestPointHitHitSurfFlags(CollisionQueryResult, v20);
            Scr_MakeArray(scrContext);
            if ( EntityNum == 2046 )
            {
              Scr_AddConstString(scrContext, scr_const.hittype_world);
              hittype = scr_const.hittype;
            }
            else
            {
              Scr_AddConstString(scrContext, scr_const.hittype_entity);
              Scr_AddArrayStringIndexed(scrContext, scr_const.hittype);
              Scr_AddEntityNum(scrContext, EntityNum, ENTITY_CLASS_GENTITY);
              hittype = scr_const.entity;
            }
            Scr_AddArrayStringIndexed(scrContext, hittype);
            Scr_AddVector(scrContext, pos.v);
            Scr_AddArrayStringIndexed(scrContext, scr_const.position);
            Scr_AddVector(scrContext, normal.v);
            Scr_AddArrayStringIndexed(scrContext, scr_const.normal);
            Scr_AddFloat(scrContext, *(float *)&ClosestPointHitDistance);
            Scr_AddArrayStringIndexed(scrContext, scr_const.distance);
            Scr_AddInt(scrContext, ClosestPointHitHitSurfFlags);
            Scr_AddArrayStringIndexed(scrContext, scr_const.surfaceflags);
            Scr_AddArray(scrContext);
            ++v20;
          }
          while ( v20 < NumHits );
        }
      }
    }
    else
    {
      Scr_MakeArray(scrContext);
      if ( HavokPhysics_CollisionQueryResult::HasHit(CollisionQueryResult) )
      {
        v29 = HavokPhysics_CollisionQueryResult::GetClosestPointHitBodyId(CollisionQueryResult, 0);
        v30 = Physics_GetRef(PHYSICS_WORLD_ID_FIRST, v29);
        v31 = Physics_GetEntityNum(v30);
        HavokPhysics_CollisionQueryResult::GetClosestPointHitHitPosition(CollisionQueryResult, 0, &normal);
        HavokPhysics_CollisionQueryResult::GetClosestPointHitSeparatingNormal(CollisionQueryResult, 0, &pos);
        v32 = HavokPhysics_CollisionQueryResult::GetClosestPointHitDistance(CollisionQueryResult, 0);
        v33 = HavokPhysics_CollisionQueryResult::GetClosestPointHitHitSurfFlags(CollisionQueryResult, 0);
        Scr_MakeArray(scrContext);
        if ( v31 == 2046 )
        {
          Scr_AddConstString(scrContext, scr_const.hittype_world);
          entity = scr_const.hittype;
        }
        else
        {
          Scr_AddConstString(scrContext, scr_const.hittype_entity);
          Scr_AddArrayStringIndexed(scrContext, scr_const.hittype);
          Scr_AddEntityNum(scrContext, v31, ENTITY_CLASS_GENTITY);
          entity = scr_const.entity;
        }
        Scr_AddArrayStringIndexed(scrContext, entity);
        Scr_AddVector(scrContext, normal.v);
        Scr_AddArrayStringIndexed(scrContext, scr_const.position);
        Scr_AddVector(scrContext, pos.v);
        Scr_AddArrayStringIndexed(scrContext, scr_const.normal);
        Scr_AddFloat(scrContext, *(float *)&v32);
        Scr_AddArrayStringIndexed(scrContext, scr_const.distance);
        Scr_AddInt(scrContext, v33);
        Scr_AddArrayStringIndexed(scrContext, scr_const.surfaceflags);
        Scr_AddArray(scrContext);
      }
    }
  }
  else
  {
    HasHit = HavokPhysics_CollisionQueryResult::HasHit(CollisionQueryResult);
    Scr_AddBool(scrContext, HasHit);
  }
  Physics_FreeCollisionQueryResult(CollisionQueryResult);
  v36 = hkMemHeapAllocator();
  v42.m_ignoreBodies.m_size = 0;
  if ( v42.m_ignoreBodies.m_capacityAndFlags >= 0 )
    hkMemoryAllocator::bufFree2(v36, v42.m_ignoreBodies.m_data, 4, v42.m_ignoreBodies.m_capacityAndFlags & 0x3FFFFFFF);
  v42.m_ignoreBodies.m_data = NULL;
  v42.m_ignoreBodies.m_capacityAndFlags = 0x80000000;
  v37 = hkMemHeapAllocator();
  v42.m_ignoreEntities.m_size = 0;
  if ( v42.m_ignoreEntities.m_capacityAndFlags >= 0 )
    hkMemoryAllocator::bufFree2(v37, v42.m_ignoreEntities.m_data, 8, v42.m_ignoreEntities.m_capacityAndFlags & 0x3FFFFFFF);
  v42.m_ignoreEntities.m_data = NULL;
  v42.m_ignoreEntities.m_capacityAndFlags = 0x80000000;
  if ( v15 )
    hkMonitorStream::timerEnd(v15, "Et");
}

/*
==============
PhysicsScript_GetClosestPointToCapsule
==============
*/
void PhysicsScript_GetClosestPointToCapsule(scrContext_t *scrContext)
{
  double Float; 
  float v3; 
  double v4; 
  float v5; 
  double v6; 
  char v7; 
  int entnum; 
  unsigned int ArrayObject; 
  unsigned int ArraySize; 
  const char *v11; 
  const char *NameForType; 
  const char *v13; 
  scr_string_t ConstString; 
  Physics_CollisionQueryCollectionType v15; 
  hkMonitorStream *Value; 
  hkMonitorStream *v17; 
  HavokPhysics_CollisionQueryResult *CollisionQueryResult; 
  hknpShape *ShapeCapsuleUpAxis; 
  unsigned int i; 
  int v21; 
  __int32 v22; 
  signed int NumHits; 
  int j; 
  unsigned int ClosestPointHitBodyId; 
  int Ref; 
  int EntityNum; 
  double ClosestPointHitDistance; 
  int ClosestPointHitHitSurfFlags; 
  scr_string_t hittype; 
  unsigned int v31; 
  int v32; 
  int v33; 
  double v34; 
  int v35; 
  scr_string_t entity; 
  bool HasHit; 
  hkMemoryAllocator *v38; 
  hkMemoryAllocator *v39; 
  VariableType failureType[4]; 
  unsigned int count; 
  __int64 v42; 
  hkMonitorStream *failureIndex; 
  HavokPhysics_IgnoreBodies v44; 
  Physics_GetClosestPointsExtendedData extendedData; 
  __int64 v46; 
  vec3_t pos; 
  vec3_t normal; 
  vec3_t angles; 
  vec3_t vectorValue; 
  vec4_t quat; 
  unsigned int buffer[128]; 
  char optionalInplaceBuffer[432]; 

  v46 = -2i64;
  if ( Scr_GetType(scrContext, 0) != VAR_VECTOR )
    Scr_Error(COM_ERR_5063, scrContext, "Physics_GetClosestPointToCapsule: Parameter 0 position must be the position vector - see usage");
  Scr_GetVector(scrContext, 0, &vectorValue);
  if ( Scr_GetType(scrContext, 1u) != VAR_FLOAT && Scr_GetType(scrContext, 1u) != VAR_INTEGER )
    Scr_Error(COM_ERR_5064, scrContext, "Physics_GetClosestPointToCapsule: Parameter 1 radius must be the radius - see usage");
  Float = Scr_GetFloat(scrContext, 1u);
  v3 = *(float *)&Float;
  if ( Scr_GetType(scrContext, 2u) != VAR_FLOAT && Scr_GetType(scrContext, 2u) != VAR_INTEGER )
    Scr_Error(COM_ERR_5065, scrContext, "Physics_GetClosestPointToCapsule: Parameter 2 halfheight must be the half height of the capsule - see usage");
  v4 = Scr_GetFloat(scrContext, 2u);
  v5 = *(float *)&v4;
  if ( *(float *)&v4 < v3 )
    Scr_Error(COM_ERR_5066, scrContext, "Physics_GetClosestPointToCapsule: Parameter 2 halfheight must be the at least the size of the radius");
  if ( Scr_GetType(scrContext, 3u) != VAR_VECTOR )
    Scr_Error(COM_ERR_5067, scrContext, "Physics_GetClosestPointToCapsule: Parameter 3 angles must be the angles vector - see usage");
  Scr_GetVector(scrContext, 3u, &angles);
  AnglesToQuat(&angles, &quat);
  if ( Scr_GetType(scrContext, 4u) != VAR_FLOAT && Scr_GetType(scrContext, 4u) != VAR_INTEGER )
    Scr_Error(COM_ERR_5068, scrContext, "Physics_GetClosestPointToCapsule: Parameter 4 distance must be the distance - see usage");
  v6 = Scr_GetFloat(scrContext, 4u);
  if ( Scr_GetType(scrContext, 5u) != VAR_INTEGER )
    Scr_Error(COM_ERR_5069, scrContext, "Physics_GetClosestPointToCapsule: Parameter 5 contents must be the contents - see usage");
  LODWORD(v42) = Scr_GetInt(scrContext, 5u);
  if ( !(_DWORD)v42 )
    Scr_Error(COM_ERR_5070, scrContext, "Physics_GetClosestPointToCapsule: Parameter 5 contents must be non 0");
  v7 = 0;
  entnum = 0;
  if ( Scr_GetType(scrContext, 6u) )
  {
    if ( Scr_GetPointerType(scrContext, 6u) == VAR_ENTITY )
    {
      count = 1;
      entnum = Scr_GetEntityRef(scrContext, 6u).entnum;
      v7 = 1;
    }
    else
    {
      if ( Scr_GetPointerType(scrContext, 6u) != VAR_ARRAY )
        Scr_Error(COM_ERR_5071, scrContext, "Physics_GetClosestPointToCapsule: Parameter 6 ignore array is not invalid, an entity or an array");
      ArrayObject = BGScr_Main_GetArrayObject(scrContext, 6u);
      ArraySize = GetArraySize(scrContext, ArrayObject);
      count = ArraySize;
      if ( ArraySize > 0x80 )
      {
        v11 = j_va("Physics_GetClosestPointToCapsule: ignore array is too large (%d > %d)", ArraySize, 128i64);
        Scr_ParamError(COM_ERR_5072, scrContext, 0, v11);
      }
      if ( !Scr_GetEntityArray(scrContext, ArrayObject, 0x80u, buffer, &count, (unsigned int *)&failureIndex, failureType) )
      {
        NameForType = Scr_GetNameForType(failureType[0]);
        v13 = j_va("Physics_GetClosestPointToCapsule: element %i of ignore array: type %s is not an entity", (unsigned int)failureIndex, NameForType);
        Scr_ParamError(COM_ERR_5073, scrContext, 0, v13);
      }
    }
  }
  else
  {
    count = 0;
  }
  if ( Scr_GetType(scrContext, 7u) != VAR_STRING )
    Scr_Error(COM_ERR_5074, scrContext, "Physics_GetClosestPointToCapsule: Parameter 7 collectionType must be the collection type - see usage");
  ConstString = Scr_GetConstString(scrContext, 7u);
  if ( ConstString == scr_const.physicsquery_any )
  {
    v15 = PHYSICS_COLLISIONQUERY_COLLECTION_TYPE_ANY;
  }
  else if ( ConstString == scr_const.physicsquery_closest )
  {
    v15 = PHYSICS_COLLISIONQUERY_COLLECTION_TYPE_CLOSEST;
  }
  else
  {
    v15 = PHYSICS_COLLISIONQUERY_COLLECTION_TYPE_UNKNOWN;
    if ( ConstString == scr_const.physicsquery_all )
      v15 = PHYSICS_COLLISIONQUERY_COLLECTION_TYPE_ALL;
  }
  Value = (hkMonitorStream *)TlsGetValue(hkMonitorStream__m_instance.m_slotID);
  v17 = Value;
  if ( Value )
    hkMonitorStream::timerBegin(Value, "TtPhysics_GetClosestPointToCapsule");
  failureIndex = v17;
  CollisionQueryResult = Physics_AllocateCollisionQueryResult(PHYSICS_WORLD_ID_FIRST, v15);
  if ( !CollisionQueryResult && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsscript.cpp", 5045, ASSERT_TYPE_ASSERT, "(result)", (const char *)&queryFormat, "result") )
    __debugbreak();
  ShapeCapsuleUpAxis = Physics_CreateShapeCapsuleUpAxis(PHYSICS_WORLD_ID_FIRST, &vec3_origin, v5 - v3, v3, optionalInplaceBuffer, 432, Temporary);
  HavokPhysics_IgnoreBodies::HavokPhysics_IgnoreBodies(&v44, count, 0);
  if ( v7 )
  {
    HavokPhysics_IgnoreBodies::SetIgnoreEntity(&v44, 0, entnum, 1, 0, 0, 0, 0);
  }
  else
  {
    for ( i = 0; i < count; ++i )
    {
      v21 = Scr_GetEntityIdRef(scrContext, buffer[i]).entnum;
      HavokPhysics_IgnoreBodies::SetIgnoreEntity(&v44, i, v21, 1, 0, 0, 0, 0);
    }
  }
  extendedData.collisionBuffer = 0.0;
  extendedData.nonBrushShape = NULL;
  extendedData.phaseSelection = All;
  extendedData.contents = v42;
  extendedData.simplify = 1;
  extendedData.ignoreBodies = &v44;
  Physics_GetClosestPoints(PHYSICS_WORLD_ID_FIRST, ShapeCapsuleUpAxis, &vectorValue, &quat, *(float *)&v6, &extendedData, CollisionQueryResult);
  if ( v15 )
  {
    v22 = v15 - 1;
    if ( v22 )
    {
      if ( v22 == 1 )
      {
        HavokPhysics_CollisionQueryResult::SortResults(CollisionQueryResult);
        NumHits = HavokPhysics_CollisionQueryResult::GetNumHits(CollisionQueryResult);
        Scr_MakeArray(scrContext);
        for ( j = 0; j < NumHits; ++j )
        {
          ClosestPointHitBodyId = HavokPhysics_CollisionQueryResult::GetClosestPointHitBodyId(CollisionQueryResult, j);
          Ref = Physics_GetRef(PHYSICS_WORLD_ID_FIRST, ClosestPointHitBodyId);
          EntityNum = Physics_GetEntityNum(Ref);
          HavokPhysics_CollisionQueryResult::GetClosestPointHitHitPosition(CollisionQueryResult, j, &pos);
          HavokPhysics_CollisionQueryResult::GetClosestPointHitSeparatingNormal(CollisionQueryResult, j, &normal);
          ClosestPointHitDistance = HavokPhysics_CollisionQueryResult::GetClosestPointHitDistance(CollisionQueryResult, j);
          ClosestPointHitHitSurfFlags = HavokPhysics_CollisionQueryResult::GetClosestPointHitHitSurfFlags(CollisionQueryResult, j);
          Scr_MakeArray(scrContext);
          if ( EntityNum == 2046 )
          {
            Scr_AddConstString(scrContext, scr_const.hittype_world);
            hittype = scr_const.hittype;
          }
          else
          {
            Scr_AddConstString(scrContext, scr_const.hittype_entity);
            Scr_AddArrayStringIndexed(scrContext, scr_const.hittype);
            Scr_AddEntityNum(scrContext, EntityNum, ENTITY_CLASS_GENTITY);
            hittype = scr_const.entity;
          }
          Scr_AddArrayStringIndexed(scrContext, hittype);
          Scr_AddVector(scrContext, pos.v);
          Scr_AddArrayStringIndexed(scrContext, scr_const.position);
          Scr_AddVector(scrContext, normal.v);
          Scr_AddArrayStringIndexed(scrContext, scr_const.normal);
          Scr_AddFloat(scrContext, *(float *)&ClosestPointHitDistance);
          Scr_AddArrayStringIndexed(scrContext, scr_const.distance);
          Scr_AddInt(scrContext, ClosestPointHitHitSurfFlags);
          Scr_AddArrayStringIndexed(scrContext, scr_const.surfaceflags);
          Scr_AddArray(scrContext);
        }
      }
    }
    else
    {
      Scr_MakeArray(scrContext);
      if ( HavokPhysics_CollisionQueryResult::HasHit(CollisionQueryResult) )
      {
        v31 = HavokPhysics_CollisionQueryResult::GetClosestPointHitBodyId(CollisionQueryResult, 0);
        v32 = Physics_GetRef(PHYSICS_WORLD_ID_FIRST, v31);
        v33 = Physics_GetEntityNum(v32);
        HavokPhysics_CollisionQueryResult::GetClosestPointHitHitPosition(CollisionQueryResult, 0, &normal);
        HavokPhysics_CollisionQueryResult::GetClosestPointHitSeparatingNormal(CollisionQueryResult, 0, &pos);
        v34 = HavokPhysics_CollisionQueryResult::GetClosestPointHitDistance(CollisionQueryResult, 0);
        v35 = HavokPhysics_CollisionQueryResult::GetClosestPointHitHitSurfFlags(CollisionQueryResult, 0);
        Scr_MakeArray(scrContext);
        if ( v33 == 2046 )
        {
          Scr_AddConstString(scrContext, scr_const.hittype_world);
          entity = scr_const.hittype;
        }
        else
        {
          Scr_AddConstString(scrContext, scr_const.hittype_entity);
          Scr_AddArrayStringIndexed(scrContext, scr_const.hittype);
          Scr_AddEntityNum(scrContext, v33, ENTITY_CLASS_GENTITY);
          entity = scr_const.entity;
        }
        Scr_AddArrayStringIndexed(scrContext, entity);
        Scr_AddVector(scrContext, normal.v);
        Scr_AddArrayStringIndexed(scrContext, scr_const.position);
        Scr_AddVector(scrContext, pos.v);
        Scr_AddArrayStringIndexed(scrContext, scr_const.normal);
        Scr_AddFloat(scrContext, *(float *)&v34);
        Scr_AddArrayStringIndexed(scrContext, scr_const.distance);
        Scr_AddInt(scrContext, v35);
        Scr_AddArrayStringIndexed(scrContext, scr_const.surfaceflags);
        Scr_AddArray(scrContext);
      }
    }
  }
  else
  {
    HasHit = HavokPhysics_CollisionQueryResult::HasHit(CollisionQueryResult);
    Scr_AddBool(scrContext, HasHit);
  }
  Physics_FreeCollisionQueryResult(CollisionQueryResult);
  v38 = hkMemHeapAllocator();
  v44.m_ignoreBodies.m_size = 0;
  if ( v44.m_ignoreBodies.m_capacityAndFlags >= 0 )
    hkMemoryAllocator::bufFree2(v38, v44.m_ignoreBodies.m_data, 4, v44.m_ignoreBodies.m_capacityAndFlags & 0x3FFFFFFF);
  v44.m_ignoreBodies.m_data = NULL;
  v44.m_ignoreBodies.m_capacityAndFlags = 0x80000000;
  v39 = hkMemHeapAllocator();
  v44.m_ignoreEntities.m_size = 0;
  if ( v44.m_ignoreEntities.m_capacityAndFlags >= 0 )
    hkMemoryAllocator::bufFree2(v39, v44.m_ignoreEntities.m_data, 8, v44.m_ignoreEntities.m_capacityAndFlags & 0x3FFFFFFF);
  v44.m_ignoreEntities.m_data = NULL;
  v44.m_ignoreEntities.m_capacityAndFlags = 0x80000000;
  if ( v17 )
    hkMonitorStream::timerEnd(v17, "Et");
}

/*
==============
PhysicsScript_GetClosestPointToCharacter
==============
*/
void PhysicsScript_GetClosestPointToCharacter(scrContext_t *scrContext)
{
  gentity_s *Entity; 
  float v3; 
  float v4; 
  const SuitDef *SuitDef; 
  scr_string_t ConstString; 
  const char *v7; 
  const char *v8; 
  double Float; 
  float v10; 
  double v11; 
  int entnum; 
  unsigned int ArrayObject; 
  unsigned int ArraySize; 
  const char *v15; 
  const char *NameForType; 
  const char *v17; 
  scr_string_t v18; 
  Physics_CollisionQueryCollectionType v19; 
  hkMonitorStream *Value; 
  hkMonitorStream *v21; 
  HavokPhysics_CollisionQueryResult *CollisionQueryResult; 
  hknpShape *v23; 
  hknpShape *v24; 
  __int64 i; 
  int v26; 
  __int32 v27; 
  signed int NumHits; 
  int j; 
  unsigned int ClosestPointHitBodyId; 
  int Ref; 
  int EntityNum; 
  double ClosestPointHitDistance; 
  int ClosestPointHitHitSurfFlags; 
  scr_string_t hittype; 
  unsigned int v36; 
  int v37; 
  int v38; 
  double v39; 
  int v40; 
  scr_string_t v41; 
  bool HasHit; 
  hkMemoryAllocator *v43; 
  hkMemoryAllocator *v44; 
  VariableType failureType[4]; 
  unsigned int count; 
  __int64 v47; 
  hkMonitorStream *failureIndex; 
  HavokPhysics_IgnoreBodies v49; 
  Physics_GetClosestPointsExtendedData extendedData; 
  __int64 v51; 
  vec3_t center; 
  vec3_t pos; 
  vec3_t normal; 
  vec3_t angles; 
  vec3_t vectorValue; 
  vec4_t quat; 
  unsigned int buffer[128]; 
  char optionalInplaceBuffer[432]; 

  v51 = -2i64;
  if ( Scr_GetType(scrContext, 0) != VAR_VECTOR )
    Scr_Error(COM_ERR_5076, scrContext, "Physics_GetClosestPointToCharacter: Parameter 0 position must be the position vector - see usage");
  Scr_GetVector(scrContext, 0, &vectorValue);
  if ( Scr_GetPointerType(scrContext, 1u) != VAR_ENTITY )
    Scr_Error(COM_ERR_5077, scrContext, "Physics_GetClosestPointToCharacter: Parameter 1 character must be an entity - see usage");
  Entity = GScr_GetEntity(1u);
  if ( !Entity )
    Scr_Error(COM_ERR_5078, scrContext, "Physics_GetClosestPointToCharacter: Parameter 1 character must be a valid entity - see usage");
  v3 = 0.0;
  v4 = 0.0;
  center.v[0] = 0.0;
  center.v[1] = 0.0;
  center.v[2] = 0.0;
  if ( Entity->client )
  {
    if ( Scr_GetNumParam(scrContext) <= 8 )
    {
      v3 = FLOAT_35_0;
      v4 = FLOAT_15_0;
    }
    else
    {
      SuitDef = BG_GetSuitDef(Entity->client->ps.suitIndex);
      if ( !SuitDef )
        Scr_Error(COM_ERR_5079, scrContext, "Physics_GetClosestPointToCharacter(): Suit def not found!\n");
      ConstString = Scr_GetConstString(scrContext, 8u);
      if ( ConstString == scr_const.stand )
      {
        v3 = (float)SuitDef->bounds_height_stand * 0.5;
        v4 = FLOAT_15_0;
      }
      else if ( ConstString == scr_const.crouch )
      {
        v3 = (float)SuitDef->bounds_height_crouch * 0.5;
        v4 = FLOAT_15_0;
      }
      else
      {
        if ( ConstString == scr_const.prone )
        {
          v3 = (float)SuitDef->bounds_height_prone * 0.5;
        }
        else
        {
          v7 = SL_ConvertToString(ConstString);
          v8 = j_va("Physics_GetClosestPointToCharacter(): Unsupported stand %s\n", v7);
          Scr_Error(COM_ERR_5080, scrContext, v8);
          v3 = 0.0 * 0.5;
        }
        v4 = FLOAT_15_0;
      }
    }
    goto LABEL_23;
  }
  if ( ((Entity->s.eType - 17) & 0xFFFD) == 0 )
  {
    v3 = Entity->r.box.halfSize.v[2];
    v4 = Entity->r.box.halfSize.v[0];
LABEL_23:
    center.v[2] = v3;
    goto LABEL_24;
  }
  Scr_Error(COM_ERR_5081, scrContext, "Physics_GetClosestPointToCharacter: Parameter 1 character must be a player or ai entity - see usage");
LABEL_24:
  if ( Scr_GetType(scrContext, 2u) != VAR_FLOAT && Scr_GetType(scrContext, 2u) != VAR_INTEGER )
    Scr_Error(COM_ERR_5082, scrContext, "Physics_GetClosestPointToCharacter: Parameter 2 ground clearance must be the clearance distance - see usage");
  Float = Scr_GetFloat(scrContext, 2u);
  center.v[2] = (float)(*(float *)&Float * 0.5) + center.v[2];
  v10 = v3 - (float)(*(float *)&Float * 0.5);
  if ( v10 < v4 )
    Scr_Error(COM_ERR_5083, scrContext, "Physics_GetClosestPointToCharacter: Parameter 2 ground clearance is too high - the capsule has collapsed");
  if ( Scr_GetType(scrContext, 3u) != VAR_VECTOR )
    Scr_Error(COM_ERR_5084, scrContext, "Physics_GetClosestPointToCharacter: Parameter 3 angles must be the angles vector - see usage");
  Scr_GetVector(scrContext, 3u, &angles);
  AnglesToQuat(&angles, &quat);
  if ( Scr_GetType(scrContext, 4u) != VAR_FLOAT && Scr_GetType(scrContext, 4u) != VAR_INTEGER )
    Scr_Error(COM_ERR_5085, scrContext, "Physics_GetClosestPointToCharacter: Parameter 4 distance must be the distance - see usage");
  v11 = Scr_GetFloat(scrContext, 4u);
  if ( Scr_GetType(scrContext, 5u) != VAR_INTEGER )
    Scr_Error(COM_ERR_5086, scrContext, "Physics_GetClosestPointToCharacter: Parameter 5 contents must be the contents - see usage");
  LODWORD(v47) = Scr_GetInt(scrContext, 5u);
  if ( !(_DWORD)v47 )
    Scr_Error(COM_ERR_5087, scrContext, "Physics_GetClosestPointToCharacter: Parameter 5 contents must be non 0");
  failureType[0] = VAR_UNDEFINED;
  entnum = 0;
  if ( Scr_GetType(scrContext, 6u) )
  {
    if ( Scr_GetPointerType(scrContext, 6u) == VAR_ENTITY )
    {
      count = 1;
      entnum = Scr_GetEntityRef(scrContext, 6u).entnum;
      failureType[0] = VAR_POINTER;
    }
    else
    {
      if ( Scr_GetPointerType(scrContext, 6u) != VAR_ARRAY )
        Scr_Error(COM_ERR_5088, scrContext, "Physics_GetClosestPointToCharacter: Parameter 6 ignore array is not invalid, an entity or an array");
      ArrayObject = BGScr_Main_GetArrayObject(scrContext, 6u);
      ArraySize = GetArraySize(scrContext, ArrayObject);
      count = ArraySize;
      if ( ArraySize > 0x80 )
      {
        v15 = j_va("Physics_GetClosestPointToCharacter: ignore array is too large (%d > %d)", ArraySize, 128i64);
        Scr_ParamError(COM_ERR_5089, scrContext, 0, v15);
      }
      if ( !Scr_GetEntityArray(scrContext, ArrayObject, 0x80u, buffer, &count, (unsigned int *)&failureIndex, &failureType[1]) )
      {
        NameForType = Scr_GetNameForType(failureType[1]);
        v17 = j_va("Physics_GetClosestPointToCharacter: element %i of ignore array: type %s is not an entity", (unsigned int)failureIndex, NameForType);
        Scr_ParamError(COM_ERR_5090, scrContext, 0, v17);
      }
    }
  }
  else
  {
    count = 0;
  }
  if ( Scr_GetType(scrContext, 7u) != VAR_STRING )
    Scr_Error(COM_ERR_5091, scrContext, "Physics_GetClosestPointToCharacter: Parameter 7 collectionType must be the collection type - see usage");
  v18 = Scr_GetConstString(scrContext, 7u);
  if ( v18 == scr_const.physicsquery_any )
  {
    v19 = PHYSICS_COLLISIONQUERY_COLLECTION_TYPE_ANY;
  }
  else if ( v18 == scr_const.physicsquery_closest )
  {
    v19 = PHYSICS_COLLISIONQUERY_COLLECTION_TYPE_CLOSEST;
  }
  else
  {
    v19 = PHYSICS_COLLISIONQUERY_COLLECTION_TYPE_UNKNOWN;
    if ( v18 == scr_const.physicsquery_all )
      v19 = PHYSICS_COLLISIONQUERY_COLLECTION_TYPE_ALL;
  }
  Value = (hkMonitorStream *)TlsGetValue(hkMonitorStream__m_instance.m_slotID);
  v21 = Value;
  if ( Value )
    hkMonitorStream::timerBegin(Value, "TtPhysics_GetClosestPointToCharacter");
  failureIndex = v21;
  CollisionQueryResult = Physics_AllocateCollisionQueryResult(PHYSICS_WORLD_ID_FIRST, v19);
  if ( !CollisionQueryResult && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsscript.cpp", 5372, ASSERT_TYPE_ASSERT, "(result)", (const char *)&queryFormat, "result") )
    __debugbreak();
  v23 = Physics_CreateShapeCapsuleUpAxis(PHYSICS_WORLD_ID_FIRST, &center, v10 - v4, v4, optionalInplaceBuffer, 432, Temporary);
  v24 = Physics_CreateShapeCylinder(&center, v10, v4, 32, 1);
  if ( !v23 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsscript.cpp", 5377, ASSERT_TYPE_ASSERT, "(nonBrushShape)", (const char *)&queryFormat, "nonBrushShape") )
    __debugbreak();
  if ( !v24 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsscript.cpp", 5378, ASSERT_TYPE_ASSERT, "(shape)", (const char *)&queryFormat, "shape") )
    __debugbreak();
  HavokPhysics_IgnoreBodies::HavokPhysics_IgnoreBodies(&v49, count, 0);
  if ( failureType[0] )
  {
    HavokPhysics_IgnoreBodies::SetIgnoreEntity(&v49, 0, entnum, 1, 0, 0, 0, 0);
  }
  else
  {
    for ( i = 0i64; (unsigned int)i < count; i = (unsigned int)(i + 1) )
    {
      v26 = Scr_GetEntityIdRef(scrContext, buffer[i]).entnum;
      HavokPhysics_IgnoreBodies::SetIgnoreEntity(&v49, i, v26, 1, 0, 0, 0, 0);
    }
  }
  extendedData.collisionBuffer = 0.0;
  extendedData.phaseSelection = All;
  extendedData.contents = v47;
  extendedData.simplify = 1;
  extendedData.ignoreBodies = &v49;
  extendedData.nonBrushShape = v23;
  Physics_GetClosestPoints(PHYSICS_WORLD_ID_FIRST, v24, &vectorValue, &quat, *(float *)&v11, &extendedData, CollisionQueryResult);
  Physics_ReleaseShape(PHYSICS_WORLD_ID_FIRST, v24, 0);
  if ( v19 )
  {
    v27 = v19 - 1;
    if ( v27 )
    {
      if ( v27 == 1 )
      {
        HavokPhysics_CollisionQueryResult::SortResults(CollisionQueryResult);
        NumHits = HavokPhysics_CollisionQueryResult::GetNumHits(CollisionQueryResult);
        Scr_MakeArray(scrContext);
        for ( j = 0; j < NumHits; ++j )
        {
          ClosestPointHitBodyId = HavokPhysics_CollisionQueryResult::GetClosestPointHitBodyId(CollisionQueryResult, j);
          Ref = Physics_GetRef(PHYSICS_WORLD_ID_FIRST, ClosestPointHitBodyId);
          EntityNum = Physics_GetEntityNum(Ref);
          HavokPhysics_CollisionQueryResult::GetClosestPointHitHitPosition(CollisionQueryResult, j, &pos);
          HavokPhysics_CollisionQueryResult::GetClosestPointHitSeparatingNormal(CollisionQueryResult, j, &normal);
          ClosestPointHitDistance = HavokPhysics_CollisionQueryResult::GetClosestPointHitDistance(CollisionQueryResult, j);
          ClosestPointHitHitSurfFlags = HavokPhysics_CollisionQueryResult::GetClosestPointHitHitSurfFlags(CollisionQueryResult, j);
          Scr_MakeArray(scrContext);
          if ( EntityNum == 2046 )
          {
            Scr_AddConstString(scrContext, scr_const.hittype_world);
            hittype = scr_const.hittype;
          }
          else
          {
            Scr_AddConstString(scrContext, scr_const.hittype_entity);
            Scr_AddArrayStringIndexed(scrContext, scr_const.hittype);
            Scr_AddEntityNum(scrContext, EntityNum, ENTITY_CLASS_GENTITY);
            hittype = scr_const.entity;
          }
          Scr_AddArrayStringIndexed(scrContext, hittype);
          Scr_AddVector(scrContext, pos.v);
          Scr_AddArrayStringIndexed(scrContext, scr_const.position);
          Scr_AddVector(scrContext, normal.v);
          Scr_AddArrayStringIndexed(scrContext, scr_const.normal);
          Scr_AddFloat(scrContext, *(float *)&ClosestPointHitDistance);
          Scr_AddArrayStringIndexed(scrContext, scr_const.distance);
          Scr_AddInt(scrContext, ClosestPointHitHitSurfFlags);
          Scr_AddArrayStringIndexed(scrContext, scr_const.surfaceflags);
          Scr_AddArray(scrContext);
        }
      }
    }
    else
    {
      Scr_MakeArray(scrContext);
      if ( HavokPhysics_CollisionQueryResult::HasHit(CollisionQueryResult) )
      {
        v36 = HavokPhysics_CollisionQueryResult::GetClosestPointHitBodyId(CollisionQueryResult, 0);
        v37 = Physics_GetRef(PHYSICS_WORLD_ID_FIRST, v36);
        v38 = Physics_GetEntityNum(v37);
        HavokPhysics_CollisionQueryResult::GetClosestPointHitHitPosition(CollisionQueryResult, 0, &normal);
        HavokPhysics_CollisionQueryResult::GetClosestPointHitSeparatingNormal(CollisionQueryResult, 0, &pos);
        v39 = HavokPhysics_CollisionQueryResult::GetClosestPointHitDistance(CollisionQueryResult, 0);
        v40 = HavokPhysics_CollisionQueryResult::GetClosestPointHitHitSurfFlags(CollisionQueryResult, 0);
        Scr_MakeArray(scrContext);
        if ( v38 == 2046 )
        {
          Scr_AddConstString(scrContext, scr_const.hittype_world);
          v41 = scr_const.hittype;
        }
        else
        {
          Scr_AddConstString(scrContext, scr_const.hittype_entity);
          Scr_AddArrayStringIndexed(scrContext, scr_const.hittype);
          Scr_AddEntityNum(scrContext, v38, ENTITY_CLASS_GENTITY);
          v41 = scr_const.entity;
        }
        Scr_AddArrayStringIndexed(scrContext, v41);
        Scr_AddVector(scrContext, normal.v);
        Scr_AddArrayStringIndexed(scrContext, scr_const.position);
        Scr_AddVector(scrContext, pos.v);
        Scr_AddArrayStringIndexed(scrContext, scr_const.normal);
        Scr_AddFloat(scrContext, *(float *)&v39);
        Scr_AddArrayStringIndexed(scrContext, scr_const.distance);
        Scr_AddInt(scrContext, v40);
        Scr_AddArrayStringIndexed(scrContext, scr_const.surfaceflags);
        Scr_AddArray(scrContext);
      }
    }
  }
  else
  {
    HasHit = HavokPhysics_CollisionQueryResult::HasHit(CollisionQueryResult);
    Scr_AddBool(scrContext, HasHit);
  }
  Physics_FreeCollisionQueryResult(CollisionQueryResult);
  v43 = hkMemHeapAllocator();
  v49.m_ignoreBodies.m_size = 0;
  if ( v49.m_ignoreBodies.m_capacityAndFlags >= 0 )
    hkMemoryAllocator::bufFree2(v43, v49.m_ignoreBodies.m_data, 4, v49.m_ignoreBodies.m_capacityAndFlags & 0x3FFFFFFF);
  v49.m_ignoreBodies.m_data = NULL;
  v49.m_ignoreBodies.m_capacityAndFlags = 0x80000000;
  v44 = hkMemHeapAllocator();
  v49.m_ignoreEntities.m_size = 0;
  if ( v49.m_ignoreEntities.m_capacityAndFlags >= 0 )
    hkMemoryAllocator::bufFree2(v44, v49.m_ignoreEntities.m_data, 8, v49.m_ignoreEntities.m_capacityAndFlags & 0x3FFFFFFF);
  v49.m_ignoreEntities.m_data = NULL;
  v49.m_ignoreEntities.m_capacityAndFlags = 0x80000000;
  if ( v21 )
    hkMonitorStream::timerEnd(v21, "Et");
}

/*
==============
PhysicsScript_GetClosestPoint
==============
*/
void PhysicsScript_GetClosestPoint(scrContext_t *scrContext)
{
  Physics_CollisionQueryCollectionType v2; 
  gentity_s *Entity; 
  unsigned int Instance; 
  unsigned int RigidBodyID; 
  double Float; 
  int Int; 
  char v8; 
  int entnum; 
  unsigned int ArrayObject; 
  unsigned int ArraySize; 
  const char *v12; 
  const char *NameForType; 
  const char *v14; 
  scr_string_t ConstString; 
  hkMonitorStream *Value; 
  hkMonitorStream *v17; 
  HavokPhysics_CollisionQueryResult *CollisionQueryResult; 
  __int64 i; 
  int v20; 
  int v21; 
  __int32 v22; 
  int NumHits; 
  unsigned int ClosestPointHitBodyId; 
  int Ref; 
  int EntityNum; 
  double ClosestPointHitDistance; 
  int ClosestPointHitHitSurfFlags; 
  scr_string_t hittype; 
  unsigned int v30; 
  int v31; 
  int v32; 
  double v33; 
  int v34; 
  scr_string_t v35; 
  bool HasHit; 
  hkMemoryAllocator *v37; 
  hkMemoryAllocator *v38; 
  VariableType count[8]; 
  hkMonitorStream *failureIndex; 
  HavokPhysics_IgnoreBodies v41; 
  Physics_GetClosestPointsExtendedData extendedData; 
  __int64 v43; 
  vec3_t shape; 
  vec3_t normal; 
  vec3_t angles; 
  vec3_t vectorValue; 
  vec4_t quat; 
  unsigned int buffer[128]; 

  v43 = -2i64;
  if ( Scr_GetType(scrContext, 0) != VAR_VECTOR )
    Scr_Error(COM_ERR_5093, scrContext, "Physics_GetClosestPoint: Parameter 0 position must be the position vector - see usage");
  Scr_GetVector(scrContext, 0, &vectorValue);
  v2 = PHYSICS_COLLISIONQUERY_COLLECTION_TYPE_CLOSEST;
  if ( Scr_GetType(scrContext, 1u) != VAR_ENTITY )
    Scr_Error(COM_ERR_5094, scrContext, "Physics_GetClosestPoint: Parameter 1 entity must be the entity - see usage");
  Entity = GScr_GetEntity(1u);
  if ( !Entity )
    Scr_Error(COM_ERR_5095, scrContext, "Physics_GetClosestPoint: Parameter 1 entity could not be found");
  Instance = G_PhysicsObject_GetInstance(PHYSICS_WORLD_ID_FIRST, Entity->s.number);
  if ( Instance == -1 )
  {
    Scr_Error(COM_ERR_5096, scrContext, "Physics_GetClosestPoint: Parameter 1 entity didn't have physics");
    Scr_Error(COM_ERR_5097, scrContext, "Physics_GetClosestPoint: Parameter 1 entity didn't have physics");
  }
  if ( Physics_GetNumRigidBodys(PHYSICS_WORLD_ID_FIRST, Instance) )
    Scr_Error(COM_ERR_5098, scrContext, "Physics_GetClosestPoint: Parameter 1 entity physics must have only 1 rigid body");
  RigidBodyID = Physics_GetRigidBodyID(PHYSICS_WORLD_ID_FIRST, Instance, 0);
  if ( (RigidBodyID & 0xFFFFFF) == 0xFFFFFF )
    Scr_Error(COM_ERR_5099, scrContext, "Physics_GetClosestPoint: Parameter 1 entity physics rigid body is invalid");
  *(_QWORD *)shape.v = Physics_GetShape(PHYSICS_WORLD_ID_FIRST, RigidBodyID);
  if ( !*(_QWORD *)shape.v )
    Scr_Error(COM_ERR_5100, scrContext, "Physics_GetClosestPoint: Parameter 1 entity physics rigid body has no shape");
  if ( Scr_GetType(scrContext, 2u) != VAR_VECTOR )
    Scr_Error(COM_ERR_5101, scrContext, "Physics_GetClosestPoint: Parameter 2 angles must be the angles vector - see usage");
  Scr_GetVector(scrContext, 2u, &angles);
  AnglesToQuat(&angles, &quat);
  if ( Scr_GetType(scrContext, 3u) != VAR_FLOAT && Scr_GetType(scrContext, 3u) != VAR_INTEGER )
    Scr_Error(COM_ERR_5102, scrContext, "Physics_GetClosestPoint: Parameter 3 distance must be the distance - see usage");
  Float = Scr_GetFloat(scrContext, 3u);
  if ( Scr_GetType(scrContext, 4u) != VAR_INTEGER )
    Scr_Error(COM_ERR_5103, scrContext, "Physics_GetClosestPoint: Parameter 4 contents must be the contents - see usage");
  Int = Scr_GetInt(scrContext, 4u);
  if ( !Int )
    Scr_Error(COM_ERR_5104, scrContext, "Physics_GetClosestPoint: Parameter 4 contents must be non 0");
  v8 = 0;
  entnum = 0;
  if ( Scr_GetType(scrContext, 5u) )
  {
    if ( Scr_GetPointerType(scrContext, 5u) == VAR_ENTITY )
    {
      *(_DWORD *)&count[4] = 1;
      entnum = Scr_GetEntityRef(scrContext, 5u).entnum;
      v8 = 1;
    }
    else
    {
      if ( Scr_GetPointerType(scrContext, 5u) != VAR_ARRAY )
        Scr_Error(COM_ERR_5105, scrContext, "Physics_GetClosestPoint: Parameter 5 ignore array is not invalid, an entity or an array");
      ArrayObject = BGScr_Main_GetArrayObject(scrContext, 5u);
      ArraySize = GetArraySize(scrContext, ArrayObject);
      *(_DWORD *)&count[4] = ArraySize;
      if ( ArraySize > 0x80 )
      {
        v12 = j_va("Physics_GetClosestPoint: ignore array is too large (%d > %d)", ArraySize, 128i64);
        Scr_ParamError(COM_ERR_5106, scrContext, 0, v12);
      }
      if ( !Scr_GetEntityArray(scrContext, ArrayObject, 0x80u, buffer, (unsigned int *)&count[4], (unsigned int *)&failureIndex, count) )
      {
        NameForType = Scr_GetNameForType(count[0]);
        v14 = j_va("Physics_GetClosestPoint: element %i of ignore array: type %s is not an entity", (unsigned int)failureIndex, NameForType);
        Scr_ParamError(COM_ERR_5107, scrContext, 0, v14);
      }
    }
  }
  else
  {
    *(_DWORD *)&count[4] = 0;
  }
  if ( Scr_GetType(scrContext, 6u) != VAR_STRING )
    Scr_Error(COM_ERR_5108, scrContext, "Physics_GetClosestPoint: Parameter 6 collectionType must be the collection type - see usage");
  ConstString = Scr_GetConstString(scrContext, 6u);
  if ( ConstString == scr_const.physicsquery_any )
  {
    v2 = PHYSICS_COLLISIONQUERY_COLLECTION_TYPE_ANY;
  }
  else if ( ConstString != scr_const.physicsquery_closest )
  {
    v2 = PHYSICS_COLLISIONQUERY_COLLECTION_TYPE_UNKNOWN;
    if ( ConstString == scr_const.physicsquery_all )
      v2 = PHYSICS_COLLISIONQUERY_COLLECTION_TYPE_ALL;
  }
  Value = (hkMonitorStream *)TlsGetValue(hkMonitorStream__m_instance.m_slotID);
  v17 = Value;
  if ( Value )
    hkMonitorStream::timerBegin(Value, "TtPhysics_GetClosestPoint");
  failureIndex = v17;
  CollisionQueryResult = Physics_AllocateCollisionQueryResult(PHYSICS_WORLD_ID_FIRST, v2);
  if ( !CollisionQueryResult && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsscript.cpp", 5662, ASSERT_TYPE_ASSERT, "(result)", (const char *)&queryFormat, "result") )
    __debugbreak();
  HavokPhysics_IgnoreBodies::HavokPhysics_IgnoreBodies(&v41, *(int *)&count[4], 0);
  if ( v8 )
  {
    HavokPhysics_IgnoreBodies::SetIgnoreEntity(&v41, 0, entnum, 1, 0, 0, 0, 0);
  }
  else
  {
    for ( i = 0i64; (unsigned int)i < *(_DWORD *)&count[4]; i = (unsigned int)(i + 1) )
    {
      v20 = Scr_GetEntityIdRef(scrContext, buffer[i]).entnum;
      HavokPhysics_IgnoreBodies::SetIgnoreEntity(&v41, i, v20, 1, 0, 0, 0, 0);
    }
  }
  extendedData.collisionBuffer = 0.0;
  v21 = 0;
  extendedData.nonBrushShape = NULL;
  extendedData.phaseSelection = All;
  extendedData.contents = Int;
  extendedData.simplify = 1;
  extendedData.ignoreBodies = &v41;
  Physics_GetClosestPoints(PHYSICS_WORLD_ID_FIRST, *(hknpShape **)shape.v, &vectorValue, &quat, *(float *)&Float, &extendedData, CollisionQueryResult);
  if ( v2 )
  {
    v22 = v2 - 1;
    if ( v22 )
    {
      if ( v22 == 1 )
      {
        HavokPhysics_CollisionQueryResult::SortResults(CollisionQueryResult);
        NumHits = HavokPhysics_CollisionQueryResult::GetNumHits(CollisionQueryResult);
        Scr_MakeArray(scrContext);
        if ( NumHits > 0 )
        {
          do
          {
            ClosestPointHitBodyId = HavokPhysics_CollisionQueryResult::GetClosestPointHitBodyId(CollisionQueryResult, v21);
            Ref = Physics_GetRef(PHYSICS_WORLD_ID_FIRST, ClosestPointHitBodyId);
            EntityNum = Physics_GetEntityNum(Ref);
            HavokPhysics_CollisionQueryResult::GetClosestPointHitHitPosition(CollisionQueryResult, v21, &shape);
            HavokPhysics_CollisionQueryResult::GetClosestPointHitSeparatingNormal(CollisionQueryResult, v21, &normal);
            ClosestPointHitDistance = HavokPhysics_CollisionQueryResult::GetClosestPointHitDistance(CollisionQueryResult, v21);
            ClosestPointHitHitSurfFlags = HavokPhysics_CollisionQueryResult::GetClosestPointHitHitSurfFlags(CollisionQueryResult, v21);
            Scr_MakeArray(scrContext);
            if ( EntityNum == 2046 )
            {
              Scr_AddConstString(scrContext, scr_const.hittype_world);
              hittype = scr_const.hittype;
            }
            else
            {
              Scr_AddConstString(scrContext, scr_const.hittype_entity);
              Scr_AddArrayStringIndexed(scrContext, scr_const.hittype);
              Scr_AddEntityNum(scrContext, EntityNum, ENTITY_CLASS_GENTITY);
              hittype = scr_const.entity;
            }
            Scr_AddArrayStringIndexed(scrContext, hittype);
            Scr_AddVector(scrContext, shape.v);
            Scr_AddArrayStringIndexed(scrContext, scr_const.position);
            Scr_AddVector(scrContext, normal.v);
            Scr_AddArrayStringIndexed(scrContext, scr_const.normal);
            Scr_AddFloat(scrContext, *(float *)&ClosestPointHitDistance);
            Scr_AddArrayStringIndexed(scrContext, scr_const.distance);
            Scr_AddInt(scrContext, ClosestPointHitHitSurfFlags);
            Scr_AddArrayStringIndexed(scrContext, scr_const.surfaceflags);
            Scr_AddArray(scrContext);
            ++v21;
          }
          while ( v21 < NumHits );
        }
      }
    }
    else
    {
      Scr_MakeArray(scrContext);
      if ( HavokPhysics_CollisionQueryResult::HasHit(CollisionQueryResult) )
      {
        v30 = HavokPhysics_CollisionQueryResult::GetClosestPointHitBodyId(CollisionQueryResult, 0);
        v31 = Physics_GetRef(PHYSICS_WORLD_ID_FIRST, v30);
        v32 = Physics_GetEntityNum(v31);
        HavokPhysics_CollisionQueryResult::GetClosestPointHitHitPosition(CollisionQueryResult, 0, &normal);
        HavokPhysics_CollisionQueryResult::GetClosestPointHitSeparatingNormal(CollisionQueryResult, 0, &shape);
        v33 = HavokPhysics_CollisionQueryResult::GetClosestPointHitDistance(CollisionQueryResult, 0);
        v34 = HavokPhysics_CollisionQueryResult::GetClosestPointHitHitSurfFlags(CollisionQueryResult, 0);
        Scr_MakeArray(scrContext);
        if ( v32 == 2046 )
        {
          Scr_AddConstString(scrContext, scr_const.hittype_world);
          v35 = scr_const.hittype;
        }
        else
        {
          Scr_AddConstString(scrContext, scr_const.hittype_entity);
          Scr_AddArrayStringIndexed(scrContext, scr_const.hittype);
          Scr_AddEntityNum(scrContext, v32, ENTITY_CLASS_GENTITY);
          v35 = scr_const.entity;
        }
        Scr_AddArrayStringIndexed(scrContext, v35);
        Scr_AddVector(scrContext, normal.v);
        Scr_AddArrayStringIndexed(scrContext, scr_const.position);
        Scr_AddVector(scrContext, shape.v);
        Scr_AddArrayStringIndexed(scrContext, scr_const.normal);
        Scr_AddFloat(scrContext, *(float *)&v33);
        Scr_AddArrayStringIndexed(scrContext, scr_const.distance);
        Scr_AddInt(scrContext, v34);
        Scr_AddArrayStringIndexed(scrContext, scr_const.surfaceflags);
        Scr_AddArray(scrContext);
      }
    }
  }
  else
  {
    HasHit = HavokPhysics_CollisionQueryResult::HasHit(CollisionQueryResult);
    Scr_AddBool(scrContext, HasHit);
  }
  Physics_FreeCollisionQueryResult(CollisionQueryResult);
  v37 = hkMemHeapAllocator();
  v41.m_ignoreBodies.m_size = 0;
  if ( v41.m_ignoreBodies.m_capacityAndFlags >= 0 )
    hkMemoryAllocator::bufFree2(v37, v41.m_ignoreBodies.m_data, 4, v41.m_ignoreBodies.m_capacityAndFlags & 0x3FFFFFFF);
  v41.m_ignoreBodies.m_data = NULL;
  v41.m_ignoreBodies.m_capacityAndFlags = 0x80000000;
  v38 = hkMemHeapAllocator();
  v41.m_ignoreEntities.m_size = 0;
  if ( v41.m_ignoreEntities.m_capacityAndFlags >= 0 )
    hkMemoryAllocator::bufFree2(v38, v41.m_ignoreEntities.m_data, 8, v41.m_ignoreEntities.m_capacityAndFlags & 0x3FFFFFFF);
  v41.m_ignoreEntities.m_data = NULL;
  v41.m_ignoreEntities.m_capacityAndFlags = 0x80000000;
  if ( v17 )
    hkMonitorStream::timerEnd(v17, "Et");
}

/*
==============
PhysicsScript_GetSurfaceTypeFromFlags
==============
*/
void PhysicsScript_GetSurfaceTypeFromFlags(scrContext_t *scrContext)
{
  __int64 v2; 
  scr_string_t value[64]; 

  if ( Scr_GetType(scrContext, 0) != VAR_INTEGER )
    Scr_Error(COM_ERR_5110, scrContext, "physics_getsurfacetypefromflags: Parameter 0 must be an integer");
  v2 = (Scr_GetInt(scrContext, 0) >> 19) & 0x3F;
  value[0] = scr_const.surftype_none;
  value[1] = scr_const.surftype_bark;
  value[2] = scr_const.surftype_brick;
  value[3] = scr_const.surftype_carpet_solid;
  value[4] = scr_const.surftype_cloth;
  value[5] = scr_const.surftype_concrete_dry;
  value[6] = scr_const.surftype_dirt;
  value[7] = scr_const.surftype_flesh;
  value[8] = scr_const.surftype_foliage_dry;
  value[9] = scr_const.surftype_glass_pane;
  value[10] = scr_const.surftype_grass_short;
  value[11] = scr_const.surftype_gravel;
  value[12] = scr_const.surftype_ice_solid;
  value[13] = scr_const.surftype_metal_thick;
  value[14] = scr_const.surftype_metal_grate;
  value[15] = scr_const.surftype_mud;
  value[16] = scr_const.surftype_paper;
  value[17] = scr_const.surftype_plaster;
  value[18] = scr_const.surftype_rock;
  value[19] = scr_const.surftype_sand;
  value[20] = scr_const.surftype_snow;
  value[21] = scr_const.surftype_water;
  value[22] = scr_const.surftype_wood_solid;
  value[23] = scr_const.surftype_asphalt_dry;
  value[24] = scr_const.surftype_ceramic;
  value[25] = scr_const.surftype_plastic;
  value[26] = scr_const.surftype_rubber;
  value[27] = scr_const.surftype_fruit;
  value[28] = scr_const.surftype_metal_car;
  value[29] = scr_const.surftype_riotshield;
  value[30] = scr_const.surftype_slush;
  value[31] = scr_const.surftype_asphalt_wet;
  value[32] = scr_const.surftype_carpet_wood;
  value[33] = scr_const.surftype_carpet_metal;
  value[34] = scr_const.surftype_concrete_wet;
  value[35] = scr_const.surftype_cushion;
  value[36] = scr_const.surftype_default;
  value[37] = scr_const.surftype_foliage_wet;
  value[38] = scr_const.surftype_glass_broken;
  value[39] = scr_const.surftype_glass_solid;
  value[40] = scr_const.surftype_glass_vehicle;
  value[41] = scr_const.surftype_grass_tall;
  value[42] = scr_const.surftype_ice_thin;
  value[43] = scr_const.surftype_metal_thin;
  value[44] = scr_const.surftype_metal_helicopter;
  value[45] = scr_const.surftype_tile;
  value[46] = scr_const.surftype_metal_tank;
  value[47] = scr_const.surftype_body_armor;
  value[48] = scr_const.surftype_drywall;
  value[49] = scr_const.surftype_mud_riverbed;
  value[50] = scr_const.surftype_water_knee;
  value[51] = scr_const.surftype_water_waist;
  value[52] = scr_const.surftype_wood_floor;
  value[53] = scr_const.surftype_user_terrain1;
  value[54] = scr_const.surftype_user_terrain2;
  value[55] = scr_const.surftype_user_terrain3;
  value[56] = scr_const.surftype_user_terrain4;
  value[57] = scr_const.surftype_user_terrain5;
  value[58] = scr_const.surftype_user_terrain6;
  value[59] = scr_const.surftype_user_terrain7;
  value[60] = scr_const.surftype_user_terrain8;
  value[61] = scr_const.surftype_user_terrain9;
  value[62] = scr_const.surftype_cinderblock;
  value[63] = scr_const.surftype_code_reserved;
  Scr_MakeArray(scrContext);
  Scr_AddInt(scrContext, v2);
  Scr_AddArrayStringIndexed(scrContext, scr_const.index);
  Scr_AddConstString(scrContext, value[v2]);
  Scr_AddArrayStringIndexed(scrContext, scr_const.name);
}

/*
==============
PhysicsScript_GetBodyMass
==============
*/
void PhysicsScript_GetBodyMass(scrContext_t *scrContext)
{
  unsigned int Int; 
  float mass; 

  Int = Scr_GetInt(scrContext, 0);
  if ( (Int & 0xFFFFFF) == 0xFFFFFF )
    Scr_Error(COM_ERR_5111, scrContext, "Physics_GetBodyMass: Invalid Body Id");
  Physics_GetRigidBodyMass(PHYSICS_WORLD_ID_FIRST, Int, &mass);
  Scr_AddFloat(scrContext, mass);
}

/*
==============
PhysicsScript_GetBodyDynamicMass
==============
*/
void PhysicsScript_GetBodyDynamicMass(scrContext_t *scrContext)
{
  unsigned int Int; 
  float mass; 

  Int = Scr_GetInt(scrContext, 0);
  if ( (Int & 0xFFFFFF) == 0xFFFFFF )
    Scr_Error(COM_ERR_5112, scrContext, "Physics_GetBodyDynamicMass: Invalid Body Id");
  Physics_GetRigidBodyDynamicMass(PHYSICS_WORLD_ID_FIRST, Int, &mass);
  Scr_AddFloat(scrContext, mass);
}

/*
==============
PhysicsScript_GetBodyCenterOfMass
==============
*/
void PhysicsScript_GetBodyCenterOfMass(scrContext_t *scrContext)
{
  unsigned int Int; 
  vec3_t centerOfMass; 

  Int = Scr_GetInt(scrContext, 0);
  if ( (Int & 0xFFFFFF) == 0xFFFFFF )
    Scr_Error(COM_ERR_5113, scrContext, "Physics_GetBodyCenterOfMass: Invalid Body Id");
  centerOfMass.v[0] = 0.0;
  centerOfMass.v[1] = 0.0;
  centerOfMass.v[2] = 0.0;
  Physics_GetRigidBodyCenterOfMass(PHYSICS_WORLD_ID_FIRST, Int, &centerOfMass);
  Scr_AddVector(scrContext, centerOfMass.v);
}

/*
==============
PhysicsScript_SetBodyCenterOfMassNormal
==============
*/
void PhysicsScript_SetBodyCenterOfMassNormal(scrContext_t *scrContext)
{
  unsigned int Int; 
  float v3; 
  float v4; 
  float v5; 
  float v6; 
  vec3_t vectorValue; 
  vec3_t aabbMin; 
  vec3_t aabbMax; 
  vec3_t centerOfMass; 

  Int = Scr_GetInt(scrContext, 0);
  if ( (Int & 0xFFFFFF) == 0xFFFFFF )
    Scr_Error(COM_ERR_5114, scrContext, "Physics_SetBodyCenterOfMass: Invalid Body Id");
  Scr_GetVector(scrContext, 1u, &vectorValue);
  Physics_GetRigidBodyAABB(PHYSICS_WORLD_ID_FIRST, Int, &aabbMin, &aabbMax);
  v3 = (float)(aabbMax.v[0] - aabbMin.v[0]) * 0.5;
  v4 = (float)(aabbMax.v[1] - aabbMin.v[1]) * 0.5;
  v5 = (float)(aabbMax.v[2] - aabbMin.v[2]) * 0.5;
  v6 = (float)(v4 + aabbMin.v[1]) + (float)(v4 * vectorValue.v[1]);
  centerOfMass.v[0] = (float)(v3 + aabbMin.v[0]) + (float)(v3 * vectorValue.v[0]);
  centerOfMass.v[2] = (float)(v5 + aabbMin.v[2]) + (float)(v5 * vectorValue.v[2]);
  vectorValue.v[0] = v3 * vectorValue.v[0];
  vectorValue.v[1] = v4 * vectorValue.v[1];
  vectorValue.v[2] = v5 * vectorValue.v[2];
  centerOfMass.v[1] = v6;
  Physics_SetRigidBodyCenterOfMass(PHYSICS_WORLD_ID_FIRST, Int, &centerOfMass);
}

/*
==============
PhysicsScript_GetBodyAABB
==============
*/
void PhysicsScript_GetBodyAABB(scrContext_t *scrContext)
{
  unsigned int Int; 
  vec3_t aabbMin; 
  vec3_t aabbMax; 

  Int = Scr_GetInt(scrContext, 0);
  if ( (Int & 0xFFFFFF) == 0xFFFFFF )
    Scr_Error(COM_ERR_5115, scrContext, "Physics_GetBodyAABB: Invalid Body Id");
  aabbMin.v[0] = 0.0;
  aabbMin.v[1] = 0.0;
  aabbMin.v[2] = 0.0;
  aabbMax.v[0] = 0.0;
  aabbMax.v[1] = 0.0;
  aabbMax.v[2] = 0.0;
  Physics_GetRigidBodyAABB(PHYSICS_WORLD_ID_FIRST, Int, &aabbMin, &aabbMax, 1);
  Scr_MakeArray(scrContext);
  Scr_AddVector(scrContext, aabbMin.v);
  Scr_AddArrayStringIndexed(scrContext, scr_const.min);
  Scr_AddVector(scrContext, aabbMax.v);
  Scr_AddArrayStringIndexed(scrContext, scr_const.max);
}

/*
==============
PhysicsScript_PhysicsVolumeCreate
==============
*/
void PhysicsScript_PhysicsVolumeCreate(scrContext_t *scrContext)
{
  unsigned int NumParam; 
  double Float; 
  float v4; 
  float v5; 
  double v6; 
  gentity_s *v7; 
  vec3_t vectorValue; 

  NumParam = Scr_GetNumParam(scrContext);
  if ( NumParam - 2 > 1 )
    Scr_Error(COM_ERR_5116, scrContext, "Physics_VolumeCreate should have 2 or 3 params - Physics_VolumeCreate( <position>, <radius>, <height> )");
  if ( Scr_GetType(scrContext, 0) != VAR_VECTOR )
    Scr_Error(COM_ERR_5117, scrContext, "Physics_VolumeCreate: Parameter 0 position must be the position - see usage");
  Scr_GetVector(scrContext, 0, &vectorValue);
  if ( Scr_GetType(scrContext, 1u) != VAR_FLOAT && Scr_GetType(scrContext, 1u) != VAR_INTEGER )
    Scr_Error(COM_ERR_5118, scrContext, "Physics_VolumeCreate: Parameter 1 radius must be the radius - see usage");
  Float = Scr_GetFloat(scrContext, 1u);
  v4 = *(float *)&Float;
  v5 = 0.0;
  if ( NumParam == 3 )
  {
    if ( Scr_GetType(scrContext, 2u) != VAR_FLOAT && Scr_GetType(scrContext, 2u) != VAR_INTEGER )
      Scr_Error(COM_ERR_5119, scrContext, "Physics_VolumeCreate: Parameter 2 height must be the height - see usage");
    v6 = Scr_GetFloat(scrContext, 2u);
    v5 = *(float *)&v6;
  }
  v7 = G_Utils_SpawnEntity();
  if ( !v7 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsscript.cpp", 6106, ASSERT_TYPE_ASSERT, "(ent)", (const char *)&queryFormat, "ent") )
    __debugbreak();
  G_Create_physicsvolume(v7, &vectorValue, v4, v5);
  GScr_AddEntity(v7);
}

/*
==============
PhysicsScript_SetBodyLinVel
==============
*/
void PhysicsScript_SetBodyLinVel(scrContext_t *scrContext)
{
  unsigned int Int; 
  double Float; 
  int v4; 
  double v5; 
  int v6; 
  double v7; 
  vec3_t linVel; 

  if ( Scr_GetNumParam(scrContext) != 4 )
    Scr_Error(COM_ERR_5120, scrContext, "Physics_SetBodyLinVel: Invalid parameter count - check usage");
  Int = Scr_GetInt(scrContext, 0);
  if ( (Int & 0xFFFFFF) == 0xFFFFFF )
    Scr_Error(COM_ERR_5121, scrContext, "Physics_SetBodyLinVel: Invalid Body Id");
  Float = Scr_GetFloat(scrContext, 1u);
  linVel.v[0] = *(float *)&Float;
  v4 = LODWORD(Float);
  v5 = Scr_GetFloat(scrContext, 2u);
  linVel.v[1] = *(float *)&v5;
  v6 = LODWORD(v5);
  v7 = Scr_GetFloat(scrContext, 3u);
  linVel.v[2] = *(float *)&v7;
  if ( (v4 & 0x7F800000) == 2139095040 || (v6 & 0x7F800000) == 2139095040 || (LODWORD(v7) & 0x7F800000) == 2139095040 )
    Scr_Error(COM_ERR_5122, scrContext, "Physics_SetBodyLinVel: Invalid Velocity");
  Physics_SetRigidBodyLinVel(PHYSICS_WORLD_ID_FIRST, Int, &linVel);
}

/*
==============
PhysicsScript_SetBodyAngVel
==============
*/
void PhysicsScript_SetBodyAngVel(scrContext_t *scrContext)
{
  unsigned int Int; 
  double Float; 
  int v4; 
  double v5; 
  int v6; 
  double v7; 
  vec3_t angVel; 

  if ( Scr_GetNumParam(scrContext) != 4 )
    Scr_Error(COM_ERR_5123, scrContext, "Physics_SetBodyAngVel: Invalid parameter count - check usage");
  Int = Scr_GetInt(scrContext, 0);
  if ( (Int & 0xFFFFFF) == 0xFFFFFF )
    Scr_Error(COM_ERR_5124, scrContext, "Physics_SetBodyAngVel: Invalid Body Id");
  Float = Scr_GetFloat(scrContext, 1u);
  angVel.v[0] = *(float *)&Float;
  v4 = LODWORD(Float);
  v5 = Scr_GetFloat(scrContext, 2u);
  angVel.v[1] = *(float *)&v5;
  v6 = LODWORD(v5);
  v7 = Scr_GetFloat(scrContext, 3u);
  angVel.v[2] = *(float *)&v7;
  if ( (v4 & 0x7F800000) == 2139095040 || (v6 & 0x7F800000) == 2139095040 || (LODWORD(v7) & 0x7F800000) == 2139095040 )
    Scr_Error(COM_ERR_5125, scrContext, "Physics_SetBodyAngVel: Invalid Velocity");
  Physics_SetRigidBodyAngVel(PHYSICS_WORLD_ID_FIRST, Int, &angVel);
}

/*
==============
PhysicsScript_SetBodyLinAngVel
==============
*/
void PhysicsScript_SetBodyLinAngVel(scrContext_t *scrContext)
{
  unsigned int Int; 
  double Float; 
  int v4; 
  double v5; 
  int v6; 
  double v7; 
  double v8; 
  int v9; 
  double v10; 
  int v11; 
  double v12; 
  vec3_t angVel; 
  vec3_t linVel; 

  if ( Scr_GetNumParam(scrContext) != 7 )
    Scr_Error(COM_ERR_5126, scrContext, "Physics_SetBodyLinAngVel: Invalid parameter count - check usage");
  Int = Scr_GetInt(scrContext, 0);
  if ( (Int & 0xFFFFFF) == 0xFFFFFF )
    Scr_Error(COM_ERR_5127, scrContext, "Physics_SetBodyLinAngVel: Invalid Body Id");
  Float = Scr_GetFloat(scrContext, 1u);
  linVel.v[0] = *(float *)&Float;
  v4 = LODWORD(Float);
  v5 = Scr_GetFloat(scrContext, 2u);
  linVel.v[1] = *(float *)&v5;
  v6 = LODWORD(v5);
  v7 = Scr_GetFloat(scrContext, 3u);
  linVel.v[2] = *(float *)&v7;
  if ( (v4 & 0x7F800000) == 2139095040 || (v6 & 0x7F800000) == 2139095040 || (LODWORD(v7) & 0x7F800000) == 2139095040 )
    Scr_Error(COM_ERR_5128, scrContext, "Physics_SetBodyLinAngVel: Invalid Linear Velocity");
  v8 = Scr_GetFloat(scrContext, 4u);
  angVel.v[0] = *(float *)&v8;
  v9 = LODWORD(v8);
  v10 = Scr_GetFloat(scrContext, 5u);
  angVel.v[1] = *(float *)&v10;
  v11 = LODWORD(v10);
  v12 = Scr_GetFloat(scrContext, 6u);
  angVel.v[2] = *(float *)&v12;
  if ( (v9 & 0x7F800000) == 2139095040 || (v11 & 0x7F800000) == 2139095040 || (LODWORD(v12) & 0x7F800000) == 2139095040 )
    Scr_Error(COM_ERR_5129, scrContext, "Physics_SetBodyLinAngVel: Invalid Angular Velocity");
  Physics_SetRigidBodyLinAngVel(PHYSICS_WORLD_ID_FIRST, Int, &linVel, &angVel);
}

/*
==============
PhysicsScript_AddQueryPointResults
==============
*/
void PhysicsScript_AddQueryPointResults(scrContext_t *scrContext, const HavokPhysics_CollisionQueryResult *const result, const int hitCount)
{
  int v6; 
  unsigned int ClosestPointHitBodyId; 
  int Ref; 
  int EntityNum; 
  char v10; 
  double ClosestPointHitDistance; 
  int ClosestPointHitHitSurfFlags; 
  scr_string_t scriptable; 
  vec3_t pos; 
  vec3_t normal; 

  if ( !result && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsscript.cpp", 4433, ASSERT_TYPE_ASSERT, "(result)", (const char *)&queryFormat, "result") )
    __debugbreak();
  if ( hitCount <= 0 && CoreAssert_Handler("c:\\workspace\\iw8\\code_source\\src\\physics\\private\\core\\physicsscript.cpp", 4434, ASSERT_TYPE_ASSERT, "(hitCount > 0)", (const char *)&queryFormat, "hitCount > 0") )
    __debugbreak();
  v6 = 0;
  if ( hitCount > 0 )
  {
    while ( 1 )
    {
      ClosestPointHitBodyId = HavokPhysics_CollisionQueryResult::GetClosestPointHitBodyId((HavokPhysics_CollisionQueryResult *)result, v6);
      Ref = Physics_GetRef(PHYSICS_WORLD_ID_FIRST, ClosestPointHitBodyId);
      EntityNum = Physics_GetEntityNum(Ref);
      v10 = 0;
      if ( Physics_GetRefSystem(Ref) != Physics_RefSystem_Scriptable )
        goto LABEL_11;
      if ( ((Ref >> 22) & 3) == 0 )
        break;
LABEL_17:
      if ( ++v6 >= hitCount )
        return;
    }
    v10 = 1;
LABEL_11:
    HavokPhysics_CollisionQueryResult::GetClosestPointHitHitPosition((HavokPhysics_CollisionQueryResult *)result, v6, &pos);
    HavokPhysics_CollisionQueryResult::GetClosestPointHitSeparatingNormal((HavokPhysics_CollisionQueryResult *)result, v6, &normal);
    ClosestPointHitDistance = HavokPhysics_CollisionQueryResult::GetClosestPointHitDistance((HavokPhysics_CollisionQueryResult *)result, v6);
    ClosestPointHitHitSurfFlags = HavokPhysics_CollisionQueryResult::GetClosestPointHitHitSurfFlags((HavokPhysics_CollisionQueryResult *)result, v6);
    Scr_MakeArray(scrContext);
    if ( v10 )
    {
      Scr_AddConstString(scrContext, scr_const.hittype_scriptable);
      Scr_AddArrayStringIndexed(scrContext, scr_const.hittype);
      Scr_AddEntityNum(scrContext, Ref & 0x3FFFFF, ENTITY_CLASS_SCRIPTABLE);
      scriptable = scr_const.scriptable;
    }
    else if ( EntityNum == 2046 )
    {
      Scr_AddConstString(scrContext, scr_const.hittype_world);
      scriptable = scr_const.hittype;
    }
    else
    {
      Scr_AddConstString(scrContext, scr_const.hittype_entity);
      Scr_AddArrayStringIndexed(scrContext, scr_const.hittype);
      Scr_AddEntityNum(scrContext, EntityNum, ENTITY_CLASS_GENTITY);
      scriptable = scr_const.entity;
    }
    Scr_AddArrayStringIndexed(scrContext, scriptable);
    Scr_AddVector(scrContext, pos.v);
    Scr_AddArrayStringIndexed(scrContext, scr_const.position);
    Scr_AddVector(scrContext, normal.v);
    Scr_AddArrayStringIndexed(scrContext, scr_const.normal);
    Scr_AddFloat(scrContext, *(float *)&ClosestPointHitDistance);
    Scr_AddArrayStringIndexed(scrContext, scr_const.distance);
    Scr_AddInt(scrContext, ClosestPointHitHitSurfFlags);
    Scr_AddArrayStringIndexed(scrContext, scr_const.surfaceflags);
    Scr_AddArray(scrContext);
    goto LABEL_17;
  }
}

